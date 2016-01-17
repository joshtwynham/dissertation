using UnityEngine;
using System.Collections;

public class CubeFloating : MonoBehaviour {

	/* Get current Transform position
	 * If position decreases by more than certain amount, start increasing
	 * If position increases to certain amount, decrease
	 * 
	 **/ 

	public float floatAmount;

	Vector3 originalPosition;
	Vector3 currentPosition;
	Vector3 floatForce;
	Vector3 clickForce;
	Rigidbody cubeRigidbody;
	


	// Use this for initialization
	void Start () {
		cubeRigidbody = GetComponent<Rigidbody> ();
		originalPosition = transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		currentPosition = transform.position;

		if (currentPosition.y < originalPosition.y - 0.3f) {
			floatForce.Set (0f, 2 * floatAmount, 0);
		} else {
			floatForce.Set (0f, -floatAmount, 0);
		}
	}

	void FixedUpdate() {
		cubeRigidbody.AddForce (floatForce);

	}

	void OnMouseDown() {

		clickForce.Set (Random.Range (-2000, 2000), -2000f, Random.Range (-2000, 2000));
		cubeRigidbody.AddForce (clickForce);
	}
}
