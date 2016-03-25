using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;

public abstract class Quest : MonoBehaviour {

	public enum QuestState {Inactive, Prologue, Active, Finished};
	protected QuestState state = QuestState.Inactive;

	protected string questTitle;
	protected Objective currentObjective;

	public string dialogueFilename;

	protected List<Objective> inactiveObjectives = new List<Objective> ();
	protected List<Objective> prologueObjectives = new List<Objective> ();
	protected List<Objective> activeObjectives = new List<Objective> ();

	protected int currentInactiveObj = 0;
	protected int currentPrologueObj = 0;
	protected int currentActiveObj = 0;

	public int questNumber;

	protected bool stageDialogueComplete;

	public string objectivesFilename;

	protected bool readyForCutscene = false;

	protected List<string> inactiveDialogue;
	protected List<string> prologueDialogue;
	protected List<string> activeDialogue;
	protected List<string> finishedDialogue;
	
	protected int currentInactiveLine = 0;
	protected int currentPrologueLine = 0;
	protected int currentActiveLine = 0;
	protected int currentFinishedLine = 0;

	public QuestManager questManager;

	void Awake() {
		parseObjectiveFile ();
		currentObjective = inactiveObjectives [0];
		stageDialogueComplete = false;
		parseDialogueFile (dialogueFilename);
	}

	void Update() {
		switch (state) {
		case Quest.QuestState.Inactive:
			if(currentInactiveLine == inactiveDialogue.Count)
				questManager.dialogueComplete();
			break;
		case Quest.QuestState.Prologue:
			if(currentPrologueLine == prologueDialogue.Count)
				questManager.dialogueComplete();
			break;
		case Quest.QuestState.Active:
			questManager.dialogueComplete();

			break;
		case Quest.QuestState.Finished:
			if(currentFinishedLine == finishedDialogue.Count)
				questManager.dialogueComplete();
			break;
		}


	}

	public void progressState() {

		switch (state) {
		case(QuestState.Inactive):
			state = QuestState.Prologue;
			break;
		case(QuestState.Prologue):
			state = QuestState.Active;
			break;
		case(QuestState.Active):
			state = QuestState.Finished;
			questManager.receiveDialogue(progressDialogue());
			break;
		}

		Debug.Log (state.ToString ());

		stageDialogueComplete = false;
	}

	public string getTitle() {
		return questTitle;
	}

	public Objective getObjective() {
		return currentObjective;
	}

	public QuestState getQuestState() {
		return state;
	}

	public void dialogueComplete() {
		stageDialogueComplete = true;
	}

	public bool isDialogueComplete () {
		return stageDialogueComplete;
	}

	/// <summary>
	/// Parses the objectives file.
	/// </summary>
	private void parseObjectiveFile() {
		//Reads tutorial objectives from file and stores in an array
		TextAsset text = Resources.Load ("Objectives/" + objectivesFilename, typeof(TextAsset)) as TextAsset;
		string fullText = text.ToString ();		
		string[] questStages = fullText.Split ('~');

		List<string> inactiveList = new List<string>(questStages [1].Split ('\n'));
		List<string> prologueList = new List<string>(questStages [2].Split ('\n'));
		List<string> activeList = new List<string>(questStages [3].Split ('\n'));

		convertStringListToObjective (ref inactiveList, ref inactiveObjectives);
		convertStringListToObjective (ref prologueList, ref prologueObjectives);
		convertStringListToObjective (ref activeList, ref activeObjectives);
	}


	void convertStringListToObjective(ref List<string> stringList, ref List<Objective> objectiveList) {

		stringList.RemoveAt (0);
		stringList.RemoveAt (stringList.Count - 1);

		foreach (string s in stringList) {
			GameObject objective = Instantiate (Resources.Load ("Prefabs/Objective")) as GameObject;

			objective.GetComponent <Objective>().setObjectiveText(s);

			objectiveList.Add(objective.GetComponent <Objective>());
		}
	}

	/// <summary>
	/// Checks if the quest is completed or not.
	/// </summary>
	/// <returns><c>true</c>, if quest was completed, <c>false</c> otherwise.</returns>
	public bool checkQuestCompletion() {
		if (state == QuestState.Finished && stageDialogueComplete) {
			return true;
		} else {
			return false;
		}

	}

	/// <summary>
	/// Checks if the current stage is completed.
	/// </summary>
	/// <returns><c>true</c>, if the current stage is completed, <c>false</c> otherwise.</returns>
	public bool checkStageCompletion() {

		bool completed = false;

		switch (state) {
		case(QuestState.Inactive):
			if(checkListCompletion(ref inactiveObjectives) && stageDialogueComplete)
				completed = true;

				break;
		case(QuestState.Prologue):
			if(checkListCompletion(ref prologueObjectives) && stageDialogueComplete)
				completed = true;

				break;	
		case(QuestState.Active):
			if(checkListCompletion(ref activeObjectives) && stageDialogueComplete)
				completed = true;

				break;
		}


		return completed;
	}

	bool checkListCompletion(ref List<Objective> objectiveList) {
		//Returns false if any of the Objectives are not completed, else otherwise
		foreach (Objective obj in objectiveList) {
			if(!obj.isCompleted()) {
				return false;
			} 
		}
				return true;
	}

	/// <summary>
	/// Checks the if the current objective is complete.
	/// </summary>
	/// <returns><c>true</c>, if Objective is complete, <c>false</c> otherwise.</returns>
	public abstract void checkObjectiveCompletion ();

	public abstract void updateQuestData(string eventName);

	public void completeObjective() {
		currentObjective.completeObjective ();
	}

	public void updateCurrentObjective() {

		switch (state) {
		case QuestState.Inactive:
			//Debug.Log ("current = " + currentInactiveObj + "\n total = " + inactiveObjectives.Count);
			if(currentInactiveObj != inactiveObjectives.Count) {
				currentObjective = inactiveObjectives[currentInactiveObj++];
			}
			//Debug.Log ("current = " + currentInactiveObj + "\n total = " + inactiveObjectives.Count);
			break;
		case QuestState.Prologue:
			//Debug.Log ("current = " + currentPrologueObj + "\n total = " + prologueObjectives.Count);
			if(currentPrologueObj != prologueObjectives.Count) {
				currentObjective = prologueObjectives[currentPrologueObj++];
			}
			//Debug.Log ("current = " + currentPrologueObj + "\n total = " + prologueObjectives.Count);
			break;
		case QuestState.Active:
			//Debug.Log ("current = " + currentActiveObj + "\n total = " + activeObjectives.Count);
			if(currentActiveObj != activeObjectives.Count) {
				currentObjective = activeObjectives[currentActiveObj++];
				Debug.Log ("current obj = active");
			}
			//Debug.Log ("current = " + currentActiveObj + "\n total = " + activeObjectives.Count);
			break;
			
			
		}

	}

	public bool isObjectiveComplete() {
		return currentObjective.isCompleted ();
	}

	void parseDialogueFile(string filename) {
		//Reads dialogue from file and stores in an array
		TextAsset text = Resources.Load ("Dialogue/" + dialogueFilename, typeof(TextAsset)) as TextAsset;
		string fullText = text.ToString ();		
		string[] questStages = fullText.Split ('~');
		
		inactiveDialogue = new List<string>(questStages [1].Split ('\n'));
		prologueDialogue = new List<string>(questStages [2].Split ('\n'));
		activeDialogue = new List<string>(questStages [3].Split ('\n'));
		finishedDialogue = new List<string>(questStages[4].Split ('\n'));
		
		extractDialogue (ref inactiveDialogue);
		extractDialogue (ref prologueDialogue);
		extractDialogue (ref activeDialogue);
		extractDialogue (ref finishedDialogue);
	}

	void extractDialogue(ref List<string> questStage) {

		if (questStage.Count > 1) {
			questStage.RemoveAt (questStage.Count - 1);
		}

		questStage.RemoveAt (0);

		
	}

	public string progressDialogue() {
		string returnString = null;

		switch (state) {
		case Quest.QuestState.Inactive:
			if (currentInactiveLine != inactiveDialogue.Count) {
				returnString = inactiveDialogue [currentInactiveLine];
				currentInactiveLine++;
			}
			break;
		case Quest.QuestState.Prologue:
			if (currentPrologueLine != prologueDialogue.Count) {
				returnString = prologueDialogue [currentPrologueLine];
				currentPrologueLine++;
			}
			break;
		case Quest.QuestState.Active:
			if (currentActiveLine != activeDialogue.Count) {
				returnString = activeDialogue [currentActiveLine];
				currentActiveLine++;
			}
			break;
		case Quest.QuestState.Finished:
			if (currentFinishedLine != finishedDialogue.Count) {
				returnString = finishedDialogue [currentFinishedLine];
				currentFinishedLine++;
			}
			break;
		}

		return returnString;
	}

	public abstract void setupCharacterPositions ();

	
	public bool isReadyForCutscene() {
		return readyForCutscene;
	}

	public abstract void playCutscene ();
	
}

