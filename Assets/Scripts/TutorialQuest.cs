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

	void Update() {

	}

	public override bool checkObjectiveCompletion(string eventName) {

		bool objectiveChanged = false;
		//TODO Switch on current state
	    	//switch on current objective text
			//if reqs are met (objects collected etc)
				//remove objective from appropriate list
				//change to next objective
		 
		//Player calls this through quest manager when certain events happen (collides with object etc)

		switch (state) {
		case QuestState.Inactive:
			switch(currentObjective.getObjectiveText()) {
			case "Press W to move forwards.":
				if(eventName == "w pressed") {
					inactiveObjectives[currentInactiveObj].completeObjective();
					currentObjective = inactiveObjectives[++currentInactiveObj];
					objectiveChanged = true;
				}
				break;
			case "Press S to move backwards.":
				if(eventName == "s pressed") {
					inactiveObjectives[currentInactiveObj].completeObjective();
					currentObjective = inactiveObjectives[++currentInactiveObj];
					objectiveChanged = true;
				}
				break;
			case "Press A to move left.":
				if(eventName == "a pressed") {
					inactiveObjectives[currentInactiveObj].completeObjective();
					currentObjective = inactiveObjectives[++currentInactiveObj];
					objectiveChanged = true;
				}
				break;
			case "Press D to move right.":
				if(eventName == "d pressed") {
					inactiveObjectives[currentInactiveObj].completeObjective();
					currentObjective = inactiveObjectives[++currentInactiveObj];
					objectiveChanged = true;
				}
				break;
			case "Click on characters to interact with them.":
				if(eventName == "NPC clicked on") {
					inactiveObjectives[currentInactiveObj].completeObjective();
					currentObjective = prologueObjectives[currentPrologueObj];
					objectiveChanged = true;
				}
				break;
			}
			break;


		}
		return objectiveChanged;
	}
}
