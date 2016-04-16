using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ArchMage : MonoBehaviour {

	NavMeshAgent agent;
	Animator anim;
	public QuestManager questManager;
	TextMesh name;
	public Camera camera;

	// Use this for initialization
	void Start () {
		agent = GetComponent<NavMeshAgent> ();
		anim = GetComponent<Animator> ();
		name = GetComponentInChildren<TextMesh>();
	}
	
	// Update is called once per frame
	void Update () {
		name.transform.LookAt (camera.transform.position);
		name.transform.Rotate (new Vector3 (0, 180, 0));


		Animate ();
		if (Vector3.Distance(transform.position, GameObject.FindGameObjectWithTag ("ManagingAngerEnd").transform.position) < 25) {
			questManager.updateQuestData("destinationReached");
			agent.ResetPath();
		}

	}

	void Animate() {
		if (agent.hasPath) {
			anim.SetBool ("isWalking", true);
		} else {
			anim.SetBool ("isWalking", false);
		}

	}


	
}
