using UnityEngine;
using System.Collections;

public class NameTag : MonoBehaviour {

	public Camera camera;
	TextMesh nameTag;

	// Use this for initialization
	void Start () {
		nameTag = GetComponent<TextMesh> ();
	}
	
	// Update is called once per frame
	void Update () {
		nameTag.transform.LookAt (camera.transform.position);
		nameTag.transform.Rotate (new Vector3(0, 180, 0));
	}
}
