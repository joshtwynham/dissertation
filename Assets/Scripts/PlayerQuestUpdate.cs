using UnityEngine;
using System.Collections;

public class PlayerQuestUpdate : MonoBehaviour {

	public QuestManager questManager;

	void Awake() {

	}

	void Start() {

	}

	void Update() {

		if (Input.GetKey ("w"))
			notifyQuestManager ("w");
		if (Input.GetKey ("a"))
			notifyQuestManager ("a");
		if (Input.GetKey ("s"))
			notifyQuestManager ("s");
		if (Input.GetKey ("d"))
			notifyQuestManager ("d");

	}

	private void notifyQuestManager(string playerAction) {
		questManager.receivePlayerAction (playerAction);
	}
}
