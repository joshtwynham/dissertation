using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour {
	
	public float speed = 6f;

	Vector3 moveDirection;
	Animator anim;
	CharacterController controller;

	bool playing = true;
	bool canJump = false;

	bool onGround = true;

	float YVelocity = 0.0f;
	float gravity = -0.2f;

	void Awake() {
		anim = GetComponent<Animator> ();
		controller = GetComponent<CharacterController> ();
	}

	void FixedUpdate() {
		if (playing) {

			controller.Move(new Vector3(0, YVelocity));
			YVelocity += gravity;

			if(transform.position.y < 1f) {
				onGround = true;
			}

			float v = Input.GetAxisRaw ("Vertical");

			if(canJump) {
				Jump ();
			}

			Move (v);
			Turning ();
			Animating (v);
		}


	}
	
	void Move (float v) {
		moveDirection = new Vector3 (0, 0, Input.GetAxis ("Vertical"));
		moveDirection = transform.TransformDirection (moveDirection);
		moveDirection *= speed;
		controller.Move (moveDirection * Time.deltaTime);
	}
	
	void Turning() {
		if (Input.GetAxis ("Horizontal") > 0) {
			transform.Rotate (new Vector3(0, 6 * Input.GetAxis ("Horizontal")));
		}
		if (Input.GetAxis ("Horizontal") < 0) {
			transform.Rotate (new Vector3(0, 6 * Input.GetAxis ("Horizontal")));
		}
	
	}

	void Animating(float v) {
		bool walking = v != 0f;//If horizontal is pressed we are walking
		anim.SetBool ("IsWalking", walking);
	}
		
	void Jump() {
		if (onGround) {
			if(Input.GetButton("Jump")) {
				onGround = false;
				YVelocity = 3f;
			}
		}
	}
	
	public void stopMovement() {
		playing = false;
		anim.SetBool ("IsWalking", false);
	}

	public void startMovement() {
		playing = true;
		anim.SetBool ("IsWalking", true);
	}

	public void receiveNotification(string notification) {

		switch (notification) {
		case "jumpAbilityGranted":
			canJump = true;
			break;


		}
	}
}
