﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t71;
// UnityEngine.Rigidbody
struct Rigidbody_t6;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// UnityStandardAssets.Utility.ObjectResetter
struct  ObjectResetter_t69  : public MonoBehaviour_t2
{
	// UnityEngine.Vector3 UnityStandardAssets.Utility.ObjectResetter::originalPosition
	Vector3_t8  ___originalPosition_2;
	// UnityEngine.Quaternion UnityStandardAssets.Utility.ObjectResetter::originalRotation
	Quaternion_t70  ___originalRotation_3;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityStandardAssets.Utility.ObjectResetter::originalStructure
	List_1_t71 * ___originalStructure_4;
	// UnityEngine.Rigidbody UnityStandardAssets.Utility.ObjectResetter::Rigidbody
	Rigidbody_t6 * ___Rigidbody_5;
};
