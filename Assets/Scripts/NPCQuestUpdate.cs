using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class NPCQuestUpdate : MonoBehaviour {

	public QuestManager questManager;

	public string dialogueFilename;

	List<string> dialogue;
	string currentDialogue;

	void Awake() {

		//Reads tutorial objectives from file and stores in an array
		TextAsset text = Resources.Load (dialogueFilename, typeof(TextAsset)) as TextAsset;
		string line = text.ToString ();		
		string[] lines = line.Split ('\n');
		
		dialogue = new List<string> (lines);
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnMouseDown() {
		currentDialogue = dialogue [0];
		questManager.receiveDialogue (currentDialogue);
	}

}
