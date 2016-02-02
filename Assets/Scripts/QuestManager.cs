using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class QuestManager : MonoBehaviour {
	
	List<Quest> quests;

	Quest currentQuest = null;

	GameObject objectiveGameObj;
	Text objectiveText;
	
	GameObject dialogueObj;
	Text dialogueText;

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
			currentQuest = quests[0];
		} 

		//Set Objective on canvas to show current objective
		objectiveGameObj = GameObject.FindWithTag ("Objective");
		objectiveText = objectiveGameObj.GetComponent<Text> (); 
		objectiveText.text = currentQuest.getObjective().getObjectiveText();

		//Find Dialogue on canvas

		dialogueObj = GameObject.FindWithTag ("Dialogue");
		dialogueText = dialogueObj.GetComponent<Text> (); 

	}

	void Start () {
	

	}

	void Update() {
		if (currentQuest.checkStageCompletion () && currentQuest.isDialogueComplete()) {
			progressQuest ();
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
	public void checkObjectiveCompletion(string eventName) {

		if (currentQuest.checkObjectiveCompletion (eventName)) {
			Debug.Log ("Objective complete!");
			updateObjectiveText();
		}
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
		dialogueText.text = dialogue;
	}

	public void receiveDialogue(string dialogue) {
		 
		setDialogueText(dialogue);
	}

	public void dialogueComplete() {
		currentQuest.dialogueComplete ();
	}

}
