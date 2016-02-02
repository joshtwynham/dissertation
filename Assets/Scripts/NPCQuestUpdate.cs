using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class NPCQuestUpdate : MonoBehaviour {

	public QuestManager questManager;

	public Quest questInvolved;

	public string dialogueFilename;

	List<string> inactiveDialogue;
	List<string> prologueDialogue;
	List<string> activeDialogue;
	List<string> finishedDialogue;

	int currentInactiveLine = 0;
	int currentPrologueLine = 0;
	int currentActiveLine = 0;
	int currentFinishedLine = 0;

	string currentDialogue;

	void Awake() {
		parseDialogueFile (dialogueFilename);
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

	}

	void OnMouseDown() {

		questManager.checkObjectiveCompletion ("NPC clicked on");

		progressDialogue ();
	}

	void parseDialogueFile(string filename) {

		//Reads tutorial objectives from file and stores in an array
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

	/// <summary>
	/// Extracts the lines of dialogue from the text file.
	/// </summary>
	/// <param name="questStage">Quest stage.</param>
	void extractDialogue(ref List<string> questStage) {
		questStage.RemoveAt (0);
		questStage.RemoveAt (questStage.Count - 1);

	}

	void notifyQuestManager(string eventName) {

		questManager.checkObjectiveCompletion (eventName);

	}

	void progressDialogue() {

		switch (questManager.getActiveQuest ().getQuestState ()) {
		case Quest.QuestState.Inactive:

			if(currentInactiveLine == inactiveDialogue.Count) {
				
				questManager.dialogueComplete();
				questManager.receiveDialogue(prologueDialogue[currentPrologueLine]);
			} else {
				questManager.receiveDialogue(inactiveDialogue[currentInactiveLine]);
				if(currentInactiveLine < inactiveDialogue.Count)
					currentInactiveLine++;

			}
			break;
		case Quest.QuestState.Prologue:

			if(currentPrologueLine == prologueDialogue.Count) {

				questManager.dialogueComplete();
				questManager.receiveDialogue(activeDialogue[currentActiveLine]);
			} else {
				questManager.receiveDialogue(prologueDialogue[currentPrologueLine]);
				if(currentPrologueLine < prologueDialogue.Count)
				currentPrologueLine++;

			}
			break;
		case Quest.QuestState.Active:

			if(currentActiveLine == activeDialogue.Count) {
				
				questManager.dialogueComplete();
				questManager.receiveDialogue(finishedDialogue[currentFinishedLine]);
			} else {
				questManager.receiveDialogue(activeDialogue[currentActiveLine]);

				if(currentActiveLine < activeDialogue.Count) 
				currentActiveLine++;

			}
			break;
		case Quest.QuestState.Finished:

			if(currentFinishedLine == finishedDialogue.Count) {
				
				questManager.dialogueComplete();
			} else {
				questManager.receiveDialogue(finishedDialogue[currentFinishedLine]);
				currentFinishedLine++;
			}
			break;
		}

	}
}
