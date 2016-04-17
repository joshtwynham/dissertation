using UnityEngine;
using System.Collections;
using System.Collections.Generic;


public class TutorialQuest : Quest {

	bool wPressed = false;
	bool sPressed = false;
	bool aPressed = false;
	bool dPressed = false;
	bool archMageClicked = false;
	bool boxHit = false;

	public override void updateQuestData (string eventName)
	{

		switch (state) {
		case QuestState.Inactive:
			switch(currentObjective.getObjectiveText()) {
			case "Press W to move forwards.":
				if(eventName == "w pressed") {
					wPressed = true;
				}
				break;
			case "Press S to move backwards.":
				if(eventName == "s pressed") {
					sPressed = true;
				}
				break;
			case "Press A to turn left.":
				if(eventName == "a pressed") {
					aPressed = true;
				}
				break;
			case "Press D to turn right.":
				if(eventName == "d pressed") {
					dPressed = true;
				}
				break;
			}
			break;
			
		case QuestState.Prologue:
			switch(currentObjective.getObjectiveText()) {
			case "Click on characters to progress their dialogue.":
				if(eventName == "ArchMage") {
					archMageClicked = true;
				}
				break;
			}
			break;
		case QuestState.Active:
			switch(currentObjective.getObjectiveText()) {
			case "Walk into a box to finish the tutorial.":
				if(eventName == "boxHit") {
					boxHit = true;
				}
				break;
			}
			break;
		}
	}

	public override void checkObjectiveCompletion() {

		bool objectiveChanged = false;
		//checks state of booleans, ints etc, if true, then objectiveChanged = true and move to next objective
		//This means not checking for specific actions every update in this function and changes it to notifications
		//from NPCs/Player

		switch(currentObjective.getObjectiveText()) {
		case "Press W to move forwards.":
			if(wPressed) {
				completeObjective();
				objectiveChanged = true;
			}
			break;
		case "Press S to move backwards.":
			if(sPressed) {
				completeObjective();
				objectiveChanged = true;
			}
			break;
		case "Press A to turn left.":
			if(aPressed) {
				completeObjective();
				objectiveChanged = true;
			}
			break;
		case "Press D to turn right.":
			if(dPressed) {
				completeObjective();
				objectiveChanged = true;
			}
			break;
		case "Click on characters to progress their dialogue.":
			if(archMageClicked) {
				archMageClicked = false;
				completeObjective();
				objectiveChanged = true;
			}
			break;
		case "Walk into a box to finish the tutorial.":
			if(boxHit) {
				completeObjective ();
				objectiveChanged = true;
			}
			break;
		}

	}	

	public override void setupCharacterPositions() {
	}

	public override void playCutscene() {
	}

	public override void resetQuest() {
	}
}
