using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class QuestGiverUpdate : MonoBehaviour {

	public QuestManager questManager;
	public Transform player;

	public string questGiver;

	// Update is called once per frame
	void Update () {
		//transform.LookAt (player);

		
	}

	void OnMouseDown() {
		questManager.updateQuestData (questGiver);
		progressDialogue ();
	}

	void notifyQuestManager(string eventName) {
		questManager.updateQuestData(eventName);
	}

	void progressDialogue() {
		questManager.receiveDialogue (questManager.getActiveQuest ().progressDialogue ());
	}
}
