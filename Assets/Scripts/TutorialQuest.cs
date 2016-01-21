using UnityEngine;
using System.Collections;
using System.Collections.Generic;


public class TutorialQuest : Quest {

	/*void Awake() {
		this.questTitle = "Tutorial";

		//Reads tutorial objectives from file and stores in an array
		TextAsset text = Resources.Load ("Objectives/tutorial", typeof(TextAsset)) as TextAsset;
		string line = text.ToString ();		
		string[] lines = line.Split ('\n');

		this.objectives = new List<string> (lines);
		this.currentObjective = objectives [0];
	}*/

	void Start() {



	
	}

	public override bool checkObjectiveCompletion(string playerAction) {
		/*
		 * TODO List of objectives for each quest stage
		 * Switch depending on quest stage
		 * Switch depending on objective within quest stage
		 * 
		 * */





		//Debug.Log ("TutorialQuest: " + playerAction);

		bool objectiveChanged = false;

		//Check what current objective is
		//If playerAction matches objective
		//Objective moves to element line in objectives
		//Return true
		//Else
		//Return false

		switch (currentObjective) {
		case "Press W to move forwards.":
			if(playerAction == "w") {
				objectives.RemoveAt(0);
				currentObjective = objectives[0];
				objectiveChanged = true;
			}
			break;
		case "Press S to move backwards.":
			if(playerAction == "s") {
				objectives.RemoveAt(0);
				currentObjective = objectives[0];
				objectiveChanged = true;
			}
			break;
		case "Press A to move left.":
			if(playerAction == "a") {
				objectives.RemoveAt(0);
				currentObjective = objectives[0];
				objectiveChanged = true;
			}
			break;
		case "Press D to move right.":
			if(playerAction == "d") {
				//Debug.Log ("Tutorial complete!");

			}
			break;
		}
		
		return objectiveChanged;
	}
}
