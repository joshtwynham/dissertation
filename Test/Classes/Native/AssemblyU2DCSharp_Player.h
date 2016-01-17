#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t7;
// UnityEngine.Rigidbody
struct Rigidbody_t6;
// UnityEngine.CharacterController
struct CharacterController_t140;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Player
struct  Player_t139  : public MonoBehaviour_t2
{
	// System.Single Player::speed
	float ___speed_2;
	// UnityEngine.Vector3 Player::movement
	Vector3_t8  ___movement_3;
	// UnityEngine.Animator Player::anim
	Animator_t7 * ___anim_4;
	// UnityEngine.Rigidbody Player::playerRigidbody
	Rigidbody_t6 * ___playerRigidbody_5;
	// UnityEngine.CharacterController Player::controller
	CharacterController_t140 * ___controller_6;
	// System.Int32 Player::floorMask
	int32_t ___floorMask_7;
	// System.Single Player::turnSpeed
	float ___turnSpeed_8;
	// System.Single Player::camRayLength
	float ___camRayLength_9;
	// UnityEngine.Vector3 Player::moveDirection
	Vector3_t8  ___moveDirection_10;
	// System.Single Player::gravity
	float ___gravity_11;
};
