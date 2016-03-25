using UnityEngine;
using System.Collections;

public class ManagingAngerQuest : Quest {

	bool archMageClicked = false;
	bool archMageDestinationReached = false;
	bool archMageFollowed = false;
	bool scenarioWatched = false;

	public Transform player;
	public Transform archMage;

	public Transform reba;
	public Transform meyers;

	Animator rebaAnim;
	Animator meyersAnim;

	Vector3 startPosition;

	NavMeshAgent agent;

	bool decisionMade = false;

	int optionChosen = 0;

	string optionOne = "\"Meyers may or may not have meant to have done it…either way, all you can do now is focus on making the best of the situation. If you apologise for getting angry he may even help you clear up the mess.\"";
	string optionTwo = "\"You’re right, in order to become a full Mage, everyone must respect you and never do anything that prevents you from reaching your goal. Throw your mop at him to teach her a lesson.\"";
	string optionThree = "\"This must be really annoying, if I were you I’d just ignore him from now on, that’s the best way to show your anger for what he’s done.\"";

	// Use this for initialization
	void Start () {
		startPosition = GameObject.FindGameObjectWithTag ("ManagingAngerStart").transform.position;
		agent = archMage.GetComponent<NavMeshAgent> ();

		rebaAnim = reba.GetComponent<Animator> ();
		meyersAnim = meyers.GetComponent<Animator> ();
	}

	void Update() {

	}
	
	public override void updateQuestData (string eventName) {

		switch (state) {
		case QuestState.Inactive:
			switch (currentObjective.getObjectiveText()) {
			case "Talk to the Arch Mage." :
				if(eventName == "ArchMage") {
					Debug.Log ("Arch mage clicked");
					archMageClicked = true;
				}
				break;
			}

			break;
		case QuestState.Prologue:
			switch (currentObjective.getObjectiveText()) {
			case "Follow the Arch Mage." :
				if(eventName == "destinationReached") {
					archMageDestinationReached = true;
				} else if(eventName == "archMageFollowed") {
					archMageFollowed = true;
				}
				break;
				
			}

			break;
		case QuestState.Active:
			switch (currentObjective.getObjectiveText()) {
			case "Pay attention to what Reba and Meyers have to say." :
				if(eventName == "scenarioWatched") {
					scenarioWatched = true;
				}
				break;
			}

			break;

		case QuestState.Finished:
			switch (currentObjective.getObjectiveText()) {
				
				
			}
			break;
		}

	}

	public override void checkObjectiveCompletion () {

		switch (currentObjective.getObjectiveText ()) {
		case "Talk to the Arch Mage." :
			if(archMageClicked) {
				completeObjective ();
				archMageClicked = false;
				agent.SetDestination (GameObject.FindGameObjectWithTag ("ManagingAngerEnd").transform.position);
			}

			break;
		case "Follow the Arch Mage." :
			if(archMageDestinationReached && archMageFollowed) {
				completeObjective ();
				readyForCutscene = true;
			}
			
			break;

		case "Pay attention to what Reba and Meyers have to say." :
			if(scenarioWatched) {
				completeObjective ();
			}
			
			break;

		case "Try and advise Reba. Think about what will lead to the best outcome for everyone.":
			if(decisionMade) {
				completeObjective();
			}
			break;
		}

	}

	public override void setupCharacterPositions() {

		player.position = startPosition;

		agent.enabled = false;
		archMage.position = new Vector3 (startPosition.x, startPosition.y, startPosition.z - 20);
		agent.enabled = true;

	}

	IEnumerator cutscene() {
		float timeBetweenSpeech = 0.2f;

		questManager.pause ();
		questManager.receiveDialogue ("Reba: Meyers!");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Meyers: Oh dear…I do apologise Reba.");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Reba: Why would you do this to me?");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Reba: It’s like you’re trying to make me angry,");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Reba: do you want me to hit you with this?!");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Meyers: That’s not going to help anything Reba,");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Meyers: of course I didn’t do this to you on purpose!");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Reba: Don’t lie to me Meyers, you’re just making me angrier!");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Meyers: Oh, Arch Mage…did you see the whole thing?");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Reba: Listen to this Arch Mage,");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Reba: Meyers doesn’t want me to become a full Mage,");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Reba: so he spilled his drink on the floor I’m trying to clean!");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Reba: Everyone is trying to prevent me from reaching my goal!");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Meyers: I assure you this is not true…");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Meyers: I have no desire to stop Reba from becoming a full Mage,");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Meyers: I stupidly was not concentrating on what I was doing,");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Meyers: and before I knew it I had dropped my drink all over the floor.");
		yield return new WaitForSeconds(timeBetweenSpeech);
		questManager.receiveDialogue ("Meyers: I have apologised but Reba only got angry at me.");

		updateQuestData ("scenarioWatched");

		questManager.showButtons (optionOne, optionTwo, optionThree);

		while (!decisionMade)
			yield return null;



		questManager.hideButtons ();

		switch (optionChosen) {
		case 1:
			questManager.receiveDialogue ("Reba: Damn...maybe the new kid has got some sense in him.");
			yield return new WaitForSeconds(timeBetweenSpeech);
			questManager.receiveDialogue ("Reba: Perhaps I did overreact a little. I'm sorry Meyers.");
			yield return new WaitForSeconds(timeBetweenSpeech);
			questManager.receiveDialogue ("Meyers: No worries Reba, I was planning on giving you a hand");
			yield return new WaitForSeconds(timeBetweenSpeech);
			questManager.receiveDialogue ("Meyers: cleaning up when you calmed down, pass me that mop!");
			yield return new WaitForSeconds(timeBetweenSpeech);
			questManager.receiveDialogue ("Reba: Thanks for understanding Meyers, sometimes my temper gets the better of me.");
			yield return new WaitForSeconds(timeBetweenSpeech);

			finishedDialogue.Insert(0, "Twynumbre: You handled that situation very well.");
			finishedDialogue.Insert(1, "Twynumbre: You're going to make a great addition to the guild.");
			finishedDialogue.Insert(2, "Twynumbre: I'm going to grant you a new ability...the ability to jump.");
			finishedDialogue.Insert(3, "Twynumbre: Try pressing the space bar.");

			questManager.notifyPlayer("jumpAbilityGranted");
			break;
		case 2:
			questManager.receiveDialogue ("Reba: Exactly! I'm going to teach you a lesson Meyers.");
			yield return new WaitForSeconds(timeBetweenSpeech);
			questManager.receiveDialogue ("Reba: I hope you like 'mop' flavour!");
			yield return new WaitForSeconds(timeBetweenSpeech);
			//Anim: reba throws mop at meyers
			questManager.receiveDialogue ("Meyers: Ahh Reba, in what way did that help?");
			yield return new WaitForSeconds(timeBetweenSpeech);
			questManager.receiveDialogue ("Meyers: Have fun cleaning that up by yourself, because I give up trying to be your friend.");
			yield return new WaitForSeconds(timeBetweenSpeech);

			finishedDialogue.Insert(0, "Twynumbre: Oh dear.");
			finishedDialogue.Insert(1, "Twynumbre: Now, I think that could have been handled a lot better.");
			finishedDialogue.Insert(2, "Twynumbre: Let's try this one again.");



			//Reset quest
			break;
		case 3:
			questManager.receiveDialogue ("Reba: Yeah I guess you're right...");
			yield return new WaitForSeconds(timeBetweenSpeech);
			questManager.receiveDialogue ("Reba: Leave me alone Meyers, I don't need you around here making me angry.");
			yield return new WaitForSeconds(timeBetweenSpeech);
			questManager.receiveDialogue ("Meyers: Uhh, okay Reba. I was hoping we could be friends someday...but it would seem not.");
			yield return new WaitForSeconds(timeBetweenSpeech);
			questManager.receiveDialogue ("Meyers: but it would seem not.");
			yield return new WaitForSeconds(timeBetweenSpeech);

			finishedDialogue.Insert(0, "Twynumbre: I think we narrowly avoided a potentially explosive situation here.");
			finishedDialogue.Insert(1, "Twynumbre: However that could have turned out better than it did.");
			finishedDialogue.Insert(2, "Twynumbre: Ideally we want to show Reba that it is better");
			finishedDialogue.Insert(2, "Twynumbre: not to make decisions when you are angry.");



			break;
		}

		questManager.play ();
	}

	public override void playCutscene() {
		StartCoroutine (cutscene ());
	}

	public void onClickOptionOne() {
		decisionMade = true;
		optionChosen = 1;
	}

	public void onClickOptionTwo() {
		decisionMade = true;
		optionChosen = 2;
	}

	public void onClickOptionThree() {
		decisionMade = true;
		optionChosen = 3;
	}
}
