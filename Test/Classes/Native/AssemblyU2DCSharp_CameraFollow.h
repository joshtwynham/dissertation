#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// CameraFollow
struct  CameraFollow_t137  : public MonoBehaviour_t2
{
	// UnityEngine.Transform CameraFollow::target
	Transform_t3 * ___target_2;
	// System.Single CameraFollow::smoothing
	float ___smoothing_3;
	// UnityEngine.Vector3 CameraFollow::offset
	Vector3_t8  ___offset_4;
};
