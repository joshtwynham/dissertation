using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class QuestManager : MonoBehaviour {
	
	List<Quest> quests;

	public Transform player;
	PlayerController playerController;

	Quest currentQuest = null;

	GameObject objectiveGameObj;
	Text objectiveText;
	
	GameObject dialogueObj;
	TextBox dialogueText;

	int currentQuestNumber = 0;

	float timeBetweenSpeech = 0.0f;

	bool playing = true;

	public UIManager UIManager;

	bool cutscenePlayed = false;
	
	public Transform cube;

	bool questReset = false;
	
	void Awake() {

		//Stores Quests so they can be accessed via Quest title
		quests = new List<Quest> ();
		
		//Finds all objects tagged as Quests and stores them in array of GameObjects
		GameObject[] questObjs = GameObject.FindGameObjectsWithTag ("Quest");

		//Add all quests into List of quests
		foreach (GameObject questObj in questObjs) {
			Quest temp = questObj.GetComponent<Quest>();
			quests.Add(temp);
		}
	
		//TODO - Allow for multiple quests in one scene
		//If only one quest in scene, make it active	
		if (quests.Count == 1) {
			currentQuest = quests [0];
		} else {
			foreach (Quest q in quests) {
				if(q.questNumber == 0) {
					currentQuest = q;
				}
			}
		}

		//Set Objective on canvas to show current objective
		objectiveGameObj = GameObject.FindWithTag ("Objective");
		objectiveText = objectiveGameObj.GetComponent<Text> (); 
		objectiveText.text = currentQuest.getObjective().getObjectiveText();

		//Find Dialogue on canvas

		dialogueObj = GameObject.FindWithTag ("Dialogue");
		dialogueText = dialogueObj.GetComponent<TextBox> (); 

		playerController = player.GetComponent<PlayerController> ();

	}

	void Start () {
	

	}

	void Update() {
		//TODO where to reset quest

		if (questReset) {
			questReset = false;
			cutscenePlayed = false;
			currentQuest.updateCurrentObjective();
			updateObjectiveText();
		}

		if (playing) {
			timeBetweenSpeech += Time.deltaTime;
			if (timeBetweenSpeech > 2.6) {

				setDialogueText (currentQuest.progressDialogue ());
				timeBetweenSpeech = 0.0f;
			}

		}


		checkObjectiveCompletion ();
			
		if (currentQuest.isObjectiveComplete()) {
			currentQuest.updateCurrentObjective();
			updateObjectiveText();
		}


		if (currentQuest.checkStageCompletion () && currentQuest.isDialogueComplete()) {
			progressQuest ();
				
		}



		if(currentQuest.isReadyForCutscene() && !cutscenePlayed) {
			cutscenePlayed = true;
			currentQuest.playCutscene();
		}
			
		if(currentQuest.checkQuestCompletion()) {
				
			foreach(Quest q in quests) {
				if(q.questNumber == currentQuestNumber + 1) {
					cutscenePlayed = false;
					currentQuest = quests[++currentQuestNumber];
					currentQuest.setupCharacterPositions();
					updateObjectiveText();
				}
			}
		}

	}

	/// <summary>
	/// Finishes the quest.
	/// </summary>
	private void progressQuest() {
		currentQuest.progressState();
	}

	/// <summary>
	/// Gets the active quest.
	/// </summary>
	/// <returns>The active quest.</returns>
	public Quest getActiveQuest() {
		return currentQuest;
	}

	/// <summary>
	/// Receives the player action and queries the active Quest.
	/// </summary>
	/// <param name="playerAction">Player action.</param>
	public void checkObjectiveCompletion() {

		currentQuest.checkObjectiveCompletion ();
	}
	
	/// <summary>
	/// Sets the objective text.
	/// </summary>
	private void updateObjectiveText() {
		objectiveText.text = currentQuest.getObjective().getObjectiveText();
	}
	
	/// <summary>
	/// Sets the dialogue text.
	/// </summary>
	/// <param name="dialogue">Dialogue.</param>
	private void setDialogueText(string dialogue) {

		dialogueText.setDialogueText (dialogue);
	}

	public void receiveDialogue(string dialogue) {
		 
		setDialogueText(dialogue);
	}

	public void dialogueComplete() {
		currentQuest.dialogueComplete ();
	}

	public void updateQuestData(string eventName) {
		if (eventName == "ArchMage") {
			timeBetweenSpeech = 0.0f;
		}
		currentQuest.updateQuestData (eventName);
	}

	public void pause() {
		playing = false;
		playerController.stopMovement ();
	}

	public void play() {
		playing = true;
		playerController.startMovement ();
	}

	/// <summary>
	/// Waits for decision from the player.
	/// </summary>
	/// <returns>The decision made by the player.</returns>
	public void showButtons(string optionOne, string optionTwo, string optionThree) {

		UIManager.showButtons (true);
		UIManager.setButtonText (1, optionOne);
		UIManager.setButtonText (2, optionTwo);
		UIManager.setButtonText (3, optionThree);
	}

	public void hideButtons() {
		UIManager.showButtons (false);
	}

	public void notifyPlayer(string notification) {
		playerController.receiveNotification (notification);
	}

	public void replayQuest() {
		currentQuest.resetQuest ();
		currentQuest.setupCharacterPositions ();
		questReset = true;
	}
}
