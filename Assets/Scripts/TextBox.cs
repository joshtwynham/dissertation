using UnityEngine;
using System.Collections;

public class TextBox : MonoBehaviour {

	public GUIStyle dialogueStyle;
	public Rect rect;

	private string dialogueText;
	public Texture2D texture;

	int screenHeight, screenWidth;

	public int boxWidth, boxHeight;

	bool visible = true;

	// Use this for initialization
	void Start () {

		screenWidth = Screen.width;
		screenHeight = Screen.height;

		Debug.Log (Screen.height.ToString ());
		rect = new Rect ((Screen.width / 2) - (boxWidth / 2), Screen.height - boxHeight, boxWidth, boxHeight);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnGUI() {
		if (visible) {
			GUI.Box(rect, dialogueText, dialogueStyle);
		}

	}

	public void setDialogueText(string text) {
		dialogueText = text;
	}

	public void hide() {
		visible = false;
	}

	public void show() {
		visible = true;
	}
}
