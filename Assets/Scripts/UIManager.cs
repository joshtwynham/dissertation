using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class UIManager : MonoBehaviour {

	public GameObject optionOne;
	public GameObject optionTwo;
	public GameObject optionThree;

	Button buttonOne;
	Button buttonTwo;
	Button buttonThree;

	public GameObject dialogue;
	public GameObject objective;

	// Use this for initialization
	void Start () {
		optionOne.SetActive (false);
		optionTwo.SetActive (false);
		optionThree.SetActive (false);

		buttonOne = optionOne.GetComponent <Button> ();
		buttonTwo = optionTwo.GetComponent <Button> ();
		buttonThree = optionThree.GetComponent <Button> ();

		dialogue.SetActive (true);
		objective.SetActive (true);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	/// <summary>
	/// Shows the buttons and hides the dialogue.
	/// </summary>
	/// <param name="flag">If set to <c>true</c> the buttons are shown, if false then they are hidden.</param>
	public void showButtons(bool flag) {
		dialogue.SetActive (!flag);
		
		optionOne.SetActive (flag);
		optionTwo.SetActive (flag);
		optionThree.SetActive (flag);
	}

	public void setButtonText(int buttonNumber, string text) {
		switch (buttonNumber) {
		case 1: 
			optionOne.GetComponentInChildren<Text> ().text = text;
			break;

		case 2:
			optionTwo.GetComponentInChildren<Text> ().text = text;
			break;

		case 3:
			optionThree.GetComponentInChildren<Text> ().text = text;
			break;
		}
	}

	public void setObjectiveText(string text) {
		objective.GetComponentInChildren<Text> ().text = text;
	}

	public void setDialogueText(string text) {
		dialogue.GetComponent<TextBox> ().setDialogueText (text);
	}
}
