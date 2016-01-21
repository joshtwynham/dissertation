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

		

		switch (questManager.getActiveQuest ().getQuestState ()) {
		case Quest.QuestState.Inactive:
			questManager.receiveDialogue(inactiveDialogue[currentInactiveLine]);
			if(currentInactiveLine == inactiveDialogue.Count - 1) {
				//If objectives are also complete, change state of quest
				//questManager.getActiveQuest().changeState(Quest.QuestState.Prologue);
				questManager.dialogueComplete();

			} else {
				currentInactiveLine++;
			}
			break;
		case Quest.QuestState.Prologue:
			questManager.receiveDialogue(prologueDialogue[currentPrologueLine]);
			if(currentPrologueLine == prologueDialogue.Count - 1) {
				//If objectives are also complete, change state of quest 
				//questManager.getActiveQuest().changeState(Quest.QuestState.Active);
				questManager.dialogueComplete();
			} else {
				currentPrologueLine++;
			}
			break;
		case Quest.QuestState.Active:
			questManager.receiveDialogue(activeDialogue[currentActiveLine]);
			if(currentActiveLine == activeDialogue.Count - 1) {
				//If objectives are also complete, change state of quest
				//questManager.getActiveQuest().changeState(Quest.QuestState.Finished);
				questManager.dialogueComplete();
			} else {
				currentActiveLine++;
			}
			break;
		case Quest.QuestState.Finished:
			questManager.receiveDialogue(finishedDialogue[currentFinishedLine]);
			if(currentFinishedLine == finishedDialogue.Count - 1) {
				//If objectives are also complete, change state of quest
				questManager.dialogueComplete();
			} else {
				currentFinishedLine++;
			}
			break;
		}
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

}
