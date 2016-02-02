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
			notifyQuestManager ("w pressed");
		if (Input.GetKey ("a"))
			notifyQuestManager ("a pressed");
		if (Input.GetKey ("s"))
			notifyQuestManager ("s pressed");
		if (Input.GetKey ("d"))
			notifyQuestManager ("d pressed");

	}

	private void notifyQuestManager(string playerAction) {
		questManager.checkObjectiveCompletion (playerAction);
	}
}
