#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.NavMeshAgent
struct NavMeshAgent_t4;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Boolean UnityEngine.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern "C" bool NavMeshAgent_SetDestination_m314 (NavMeshAgent_t4 * __this, Vector3_t8  ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.NavMeshAgent,UnityEngine.Vector3&)
extern "C" bool NavMeshAgent_INTERNAL_CALL_SetDestination_m1305 (Object_t * __this /* static, unused */, NavMeshAgent_t4 * ___self, Vector3_t8 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.NavMeshAgent::get_desiredVelocity()
extern "C" Vector3_t8  NavMeshAgent_get_desiredVelocity_m315 (NavMeshAgent_t4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::INTERNAL_get_desiredVelocity(UnityEngine.Vector3&)
extern "C" void NavMeshAgent_INTERNAL_get_desiredVelocity_m1306 (NavMeshAgent_t4 * __this, Vector3_t8 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_updatePosition(System.Boolean)
extern "C" void NavMeshAgent_set_updatePosition_m311 (NavMeshAgent_t4 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_updateRotation(System.Boolean)
extern "C" void NavMeshAgent_set_updateRotation_m310 (NavMeshAgent_t4 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
