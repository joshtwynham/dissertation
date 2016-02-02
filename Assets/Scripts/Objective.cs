using UnityEngine;
using System.Collections;

public class Objective : MonoBehaviour {

	private string objectiveText;
	private bool completed = false;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void setObjectiveText(string text) {
		objectiveText = text;
	}

	public void completeObjective() {
		completed = true;
	}

	public string getObjectiveText() {
		return objectiveText;
	}

	public bool isCompleted() {
		return completed;
	}
}
