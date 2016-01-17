using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ArchMage : MonoBehaviour {

	NavMeshAgent agent;
	public Transform target;
	Animator anim;

	// Use this for initialization
	void Start () {

		TextAsset text = Resources.Load ("archMage", typeof(TextAsset)) as TextAsset;

		string line = text.ToString ();

		string[] lines = line.Split ('\n');

		Debug.Log (lines [1]);

		agent = GetComponent<NavMeshAgent> ();
		anim = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
		Animate ();
		if (agent.remainingDistance < 20f) {
			agent.ResetPath();
		}
	}

	void OnMouseDown() {
		agent.SetDestination (target.position);
	}

	void Animate() {
		if (agent.hasPath) {
			anim.SetBool ("isWalking", true);
		} else {
			anim.SetBool ("isWalking", false);
		}

	}


	
}
