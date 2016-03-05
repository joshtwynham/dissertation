using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour {
	
	public float speed = 6f;
	public float gravity = 20.0f;
	public float lookSpeed = 3.8f;
	
	Vector3 movement;
	Vector3 moveDirection;
	Animator anim;
	CharacterController controller;
	Rigidbody playerRigidbody;

	float turnSpeed = 250.0f;
	float camRayLength = 100f;

	void Awake()
	{

		anim = GetComponent<Animator> ();
		controller = GetComponent<CharacterController> ();
		playerRigidbody = GetComponent<Rigidbody> ();
	}

	void FixedUpdate()
	{
		float h = Input.GetAxisRaw ("Horizontal");
		float v = Input.GetAxisRaw ("Vertical");

		Move (h, v);
		Turning ();
		Animating (h, v);
	}
	
	void Move (float h, float v)
	{
		moveDirection = new Vector3 (0, 0, Input.GetAxis ("Vertical"));
		moveDirection = transform.TransformDirection (moveDirection);
		moveDirection *= speed;
		controller.Move (moveDirection * Time.deltaTime);
	}
	
	void Turning()
	{
		if (Input.GetAxis ("Horizontal") > 0) {
			transform.Rotate (new Vector3(0, 6 * Input.GetAxis ("Horizontal")));
		}
		if (Input.GetAxis ("Horizontal") < 0) {
			transform.Rotate (new Vector3(0, 6 * Input.GetAxis ("Horizontal")));
		}
	
	}

	void Animating(float h, float v)
	{
		bool walking = h != 0f || v != 0f;//If horizontal or vertical is pressed we are walking
		anim.SetBool ("IsWalking", walking);
	}


}
