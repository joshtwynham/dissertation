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

// UnityStandardAssets.Characters.ThirdPerson.AICharacterControl
struct AICharacterControl_t1;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t4;
// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t5;
// UnityEngine.Transform
struct Transform_t3;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::.ctor()
extern "C" void AICharacterControl__ctor_m0 (AICharacterControl_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NavMeshAgent UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::get_agent()
extern "C" NavMeshAgent_t4 * AICharacterControl_get_agent_m1 (AICharacterControl_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::set_agent(UnityEngine.NavMeshAgent)
extern "C" void AICharacterControl_set_agent_m2 (AICharacterControl_t1 * __this, NavMeshAgent_t4 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::get_character()
extern "C" ThirdPersonCharacter_t5 * AICharacterControl_get_character_m3 (AICharacterControl_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::set_character(UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter)
extern "C" void AICharacterControl_set_character_m4 (AICharacterControl_t1 * __this, ThirdPersonCharacter_t5 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::Start()
extern "C" void AICharacterControl_Start_m5 (AICharacterControl_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::Update()
extern "C" void AICharacterControl_Update_m6 (AICharacterControl_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::SetTarget(UnityEngine.Transform)
extern "C" void AICharacterControl_SetTarget_m7 (AICharacterControl_t1 * __this, Transform_t3 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
