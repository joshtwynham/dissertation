using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour {
	
	public float speed = 6f;
	public float gravity = 20.0f;
	
	Vector3 movement;
	Vector3 moveDirection = Vector3.zero;
	Animator anim;
	CharacterController controller;

	float turnSpeed = 250.0f;
	float camRayLength = 100f;

	void Awake()
	{

		anim = GetComponent<Animator> ();
		controller = GetComponent<CharacterController> ();
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
		moveDirection = transform.forward * Input.GetAxis("Vertical") * speed;

		controller.Move (moveDirection * Time.deltaTime);
		moveDirection.y -= gravity * Time.deltaTime;
	}
	
	void Turning()
	{
		float turn = Input.GetAxis ("Horizontal");
		transform.Rotate (0, turn * turnSpeed * Time.deltaTime, 0);
	}
	
	void Animating(float h, float v)
	{
		bool walking = h != 0f || v != 0f;//If horizontal or vertical is pressed we are walking
		anim.SetBool ("IsWalking", walking);
	


	}

	void OnCollisionEnter(Collision col) {

		//Debug.Log ("Hit something");

	}

}
