using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class NPCQuestUpdate : MonoBehaviour {

	public QuestManager questManager;
	public Quest questInvolved;
	public Transform player;

	public string dialogueFilename;

	List<string> inactiveDialogue;
	List<string> prologueDialogue;
	List<string> activeDialogue;
	List<string> finishedDialogue;

	int currentInactiveLine = 0;
	int currentPrologueLine = 0;
	int currentActiveLine = 0;
	int currentFinishedLine = 0;

	void Awake() {
		parseDialogueFile (dialogueFilename);
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		transform.LookAt (player);

		switch (questManager.getActiveQuest ().getQuestState ()) {
		case Quest.QuestState.Inactive:
			if(currentInactiveLine == inactiveDialogue.Count)
				questManager.dialogueComplete();
			break;
		case Quest.QuestState.Prologue:
			if(currentPrologueLine == prologueDialogue.Count)
				questManager.dialogueComplete();
			break;
		case Quest.QuestState.Active:
			if(currentActiveLine == activeDialogue.Count)
				questManager.dialogueComplete();
			break;
		case Quest.QuestState.Finished:
			if(currentFinishedLine == finishedDialogue.Count)
				questManager.dialogueComplete();
			break;
		}

	}

	void OnMouseDown() {
		questManager.updateQuestData ("NPC clicked on");
		progressDialogue ();
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

	/// <summary>
	/// Extracts the lines of dialogue from the text file.
	/// </summary>
	/// <param name="questStage">Quest stage.</param>
	void extractDialogue(ref List<string> questStage) {
		questStage.RemoveAt (0);
		questStage.RemoveAt (questStage.Count - 1);

	}

	void notifyQuestManager(string eventName) {
		questManager.updateQuestData(eventName);
	}

	void progressDialogue() {
		switch (questManager.getActiveQuest ().getQuestState ()) {
		case Quest.QuestState.Inactive:
			if(currentInactiveLine != inactiveDialogue.Count) {
				questManager.receiveDialogue(inactiveDialogue[currentInactiveLine]);
				currentInactiveLine++;
			}
			break;
		case Quest.QuestState.Prologue:
			if(currentPrologueLine != prologueDialogue.Count) {
				questManager.receiveDialogue(prologueDialogue[currentPrologueLine]);
				currentPrologueLine++;
			}
			break;
		case Quest.QuestState.Active:
			if(currentActiveLine != activeDialogue.Count) {
				questManager.receiveDialogue(activeDialogue[currentActiveLine]);
				currentActiveLine++;
			}
			break;
		case Quest.QuestState.Finished:
			if(currentFinishedLine != finishedDialogue.Count) {
				questManager.receiveDialogue(finishedDialogue[currentFinishedLine]);
				currentFinishedLine++;
			}
			break;
		}
	}
}
