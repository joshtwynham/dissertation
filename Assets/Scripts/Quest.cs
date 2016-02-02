using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;

public abstract class Quest : MonoBehaviour {

	public enum QuestState {Inactive, Prologue, Active, Finished};
	protected QuestState state = QuestState.Inactive;

	protected string questTitle;
	protected Objective currentObjective;

	protected List<Objective> inactiveObjectives = new List<Objective> ();
	protected List<Objective> prologueObjectives = new List<Objective> ();
	protected List<Objective> activeObjectives = new List<Objective> ();

	protected int currentInactiveObj = 0;
	protected int currentPrologueObj = 0;
	protected int currentActiveObj = 0;

	protected bool stageDialogueComplete;

	public string objectivesFilename;

	void Awake() {
		parseObjectiveFile ();
		currentObjective = inactiveObjectives [0];
		stageDialogueComplete = false;
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

		//TODO convert lists of strings to lists of Objectives

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
	bool checkQuestCompletion() {
		if (state == QuestState.Finished && stageDialogueComplete) 
			return true;
		else 
			return false;
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
	public abstract bool checkObjectiveCompletion (string playerAction);
}
