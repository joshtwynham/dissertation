using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public abstract class Quest : MonoBehaviour {

	public enum QuestState {Inactive, Prologue, Active, Finished};
	QuestState state = QuestState.Prologue;

	protected string questTitle;
	protected string currentObjective;

	protected List<string> objectives = new List<string> ();

	protected Dictionary<string, bool> inactiveObjectives = new Dictionary<string, bool>();
	protected Dictionary<string, bool> prologueObjectives = new Dictionary<string, bool>();
	protected Dictionary<string, bool> activeObjectives = new Dictionary<string, bool> ();

	protected bool stageDialogueComplete = false;

	public string objectivesFilename;

	void Awake() {
		parseObjectiveFile ();

	}

	public void changeState(QuestState state) {
		this.state = state;
		stageDialogueComplete = false;
	}

	public string getTitle() {
		return questTitle;
	}

	public string getObjective() {
		return currentObjective;
	}

	public QuestState getQuestState() {
		return state;
	}

	public abstract bool checkObjectiveCompletion (string playerAction);

	public void dialogueComplete() {
		stageDialogueComplete = true;
		Debug.Log ("Stage dialogue complete!");
	}

	public void checkStageCompletion() {

	}

	public void checkQuestCompletion() {
		
	}

	private void extractObjectives() {

	}

	void parseObjectiveFile() {

		//Reads tutorial objectives from file and stores in an array
		TextAsset text = Resources.Load ("Objectives/" + objectivesFilename, typeof(TextAsset)) as TextAsset;
		string fullText = text.ToString ();		
		string[] questStages = fullText.Split ('~');
		
		/*inactiveDialogue = new List<string>(questStages [1].Split ('\n'));
		prologueDialogue = new List<string>(questStages [2].Split ('\n'));
		activeDialogue = new List<string>(questStages [3].Split ('\n'));
		finishedDialogue = new List<string>(questStages[4].Split ('\n'));

		extractDialogue (ref inactiveDialogue);
		extractDialogue (ref prologueDialogue);
		extractDialogue (ref activeDialogue);
		extractDialogue (ref finishedDialogue);*/
		List<string> inactiveList = new List<string>(questStages [1].Split ('\n'));
		List<string> prologueList = new List<string>(questStages [2].Split ('\n'));
		List<string> activeList = new List<string>(questStages [3].Split ('\n'));

		convertListToDictionary(ref inactiveList, ref inactiveObjectives);
		convertListToDictionary(ref prologueList, ref prologueObjectives);
		convertListToDictionary(ref activeList, ref activeObjectives);

		foreach (KeyValuePair<string, bool> kvp in inactiveObjectives) {
			Debug.Log (kvp.Key + " : " + kvp.Value.ToString());
		}
	}

	void convertListToDictionary(ref List<string> stageObjectives, ref Dictionary<string, bool> dictionary) {
		//TODO ordered dictionary 

		stageObjectives.RemoveAt (0);
		stageObjectives.RemoveAt (stageObjectives.Count - 1);

		foreach (string s in stageObjectives) {
			dictionary.Add(s, false);
		}
	}
}
