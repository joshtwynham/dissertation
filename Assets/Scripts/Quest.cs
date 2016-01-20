using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public abstract class Quest : MonoBehaviour {

	public enum QuestState {Inactive, Prologue, Active, Finished};
	QuestState state = QuestState.Prologue;

	protected string questTitle;
	protected string currentObjective;

	protected List<string> objectives = new List<string> ();

	public void changeState(QuestState state) {
		this.state = state;
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

}
