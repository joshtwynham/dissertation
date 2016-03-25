using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ArchMage : MonoBehaviour {

	NavMeshAgent agent;
	Animator anim;
	public QuestManager questManager;

	// Use this for initialization
	void Start () {
		agent = GetComponent<NavMeshAgent> ();
		anim = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
		Animate ();
		if (Vector3.Distance(transform.position, GameObject.FindGameObjectWithTag ("ManagingAngerEnd").transform.position) < 40) {
			questManager.updateQuestData("destinationReached");
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
