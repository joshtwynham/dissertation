#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// CameraFollow
struct CameraFollow_t137;
// NewPlayerMovement
struct NewPlayerMovement_t138;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t4;
// System.Object
struct Object_t;
// Player
struct Player_t139;
// UnityEngine.Animator
struct Animator_t7;
// UnityEngine.Rigidbody
struct Rigidbody_t6;
// UnityEngine.CharacterController
struct CharacterController_t140;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DCSharp_CameraFollow.h"
#include "AssemblyU2DCSharp_CameraFollowMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "mscorlib_System_Single.h"
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Transform.h"
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
#include "mscorlib_System_String.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Component.h"
#include "AssemblyU2DCSharp_NewPlayerMovement.h"
#include "AssemblyU2DCSharp_NewPlayerMovementMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject.h"
#include "UnityEngine_UnityEngine_NavMeshAgent.h"
#include "UnityEngine_UnityEngine_NavMeshAgentMethodDeclarations.h"
#include "mscorlib_System_Boolean.h"
#include "AssemblyU2DCSharp_Player.h"
#include "AssemblyU2DCSharp_PlayerMethodDeclarations.h"
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Int32.h"
#include "UnityEngine_UnityEngine_Animator.h"
#include "UnityEngine_UnityEngine_Rigidbody.h"
#include "UnityEngine_UnityEngine_CharacterController.h"
#include "UnityEngine_UnityEngine_CharacterControllerMethodDeclarations.h"
#include "UnityEngine_UnityEngine_CollisionFlags.h"
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m535_gshared (Component_t135 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m535(__this, method) (( Object_t * (*) (Component_t135 *, const MethodInfo*))Component_GetComponent_TisObject_t_m535_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.NavMeshAgent>()
#define Component_GetComponent_TisNavMeshAgent_t4_m556(__this, method) (( NavMeshAgent_t4 * (*) (Component_t135 *, const MethodInfo*))Component_GetComponent_TisObject_t_m535_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t7_m317(__this, method) (( Animator_t7 * (*) (Component_t135 *, const MethodInfo*))Component_GetComponent_TisObject_t_m535_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t6_m318(__this, method) (( Rigidbody_t6 * (*) (Component_t135 *, const MethodInfo*))Component_GetComponent_TisObject_t_m535_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
#define Component_GetComponent_TisCharacterController_t140_m558(__this, method) (( CharacterController_t140 * (*) (Component_t135 *, const MethodInfo*))Component_GetComponent_TisObject_t_m535_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraFollow::.ctor()
extern "C" void CameraFollow__ctor_m542 (CameraFollow_t137 * __this, const MethodInfo* method)
{
	{
		__this->___smoothing_3 = (5.0f);
		MonoBehaviour__ctor_m307(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraFollow::Start()
extern "C" void CameraFollow_Start_m543 (CameraFollow_t137 * __this, const MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	Vector3_t8  V_2 = {0};
	{
		Transform_t3 * L_0 = (__this->___target_2);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_position_m313(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ((&V_0)->___x_1);
		Transform_t3 * L_3 = (__this->___target_2);
		NullCheck(L_3);
		Vector3_t8  L_4 = Transform_get_position_m313(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = ((&V_1)->___y_2);
		Transform_t3 * L_6 = (__this->___target_2);
		NullCheck(L_6);
		Vector3_t8  L_7 = Transform_get_position_m313(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = ((&V_2)->___z_3);
		Vector3_t8  L_9 = {0};
		Vector3__ctor_m351(&L_9, ((float)((float)L_2+(float)(40.0f))), ((float)((float)L_5+(float)(25.0f))), ((float)((float)L_8+(float)(25.0f))), /*hidden argument*/NULL);
		__this->___offset_4 = L_9;
		return;
	}
}
// System.Void CameraFollow::FixedUpdate()
extern TypeInfo* Input_t106_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral35;
extern "C" void CameraFollow_FixedUpdate_m544 (CameraFollow_t137 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t8  V_0 = {0};
	{
		Transform_t3 * L_0 = (__this->___target_2);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_position_m313(L_0, /*hidden argument*/NULL);
		Vector3_t8  L_2 = (__this->___offset_4);
		Vector3_t8  L_3 = Vector3_op_Addition_m335(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t106_il2cpp_TypeInfo_var);
		float L_4 = Input_GetAxis_m389(NULL /*static, unused*/, _stringLiteral35, /*hidden argument*/NULL);
		float L_5 = (__this->___smoothing_3);
		Vector3_t8  L_6 = Vector3_get_up_m332(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t70  L_7 = Quaternion_AngleAxis_m554(NULL /*static, unused*/, ((float)((float)L_4*(float)L_5)), L_6, /*hidden argument*/NULL);
		Vector3_t8  L_8 = (__this->___offset_4);
		Vector3_t8  L_9 = Quaternion_op_Multiply_m517(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		__this->___offset_4 = L_9;
		Transform_t3 * L_10 = Component_get_transform_m325(__this, /*hidden argument*/NULL);
		Transform_t3 * L_11 = Component_get_transform_m325(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t8  L_12 = Transform_get_position_m313(L_11, /*hidden argument*/NULL);
		Vector3_t8  L_13 = V_0;
		float L_14 = (__this->___smoothing_3);
		float L_15 = Time_get_deltaTime_m338(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t8  L_16 = Vector3_Lerp_m524(NULL /*static, unused*/, L_12, L_13, ((float)((float)L_14*(float)L_15)), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_m380(L_10, L_16, /*hidden argument*/NULL);
		Transform_t3 * L_17 = Component_get_transform_m325(__this, /*hidden argument*/NULL);
		Transform_t3 * L_18 = (__this->___target_2);
		NullCheck(L_18);
		Transform_t3 * L_19 = Component_get_transform_m325(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_LookAt_m518(L_17, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NewPlayerMovement::.ctor()
extern "C" void NewPlayerMovement__ctor_m545 (NewPlayerMovement_t138 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m307(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NewPlayerMovement::Awake()
extern const MethodInfo* Component_GetComponent_TisNavMeshAgent_t4_m556_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral39;
extern "C" void NewPlayerMovement_Awake_m546 (NewPlayerMovement_t138 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisNavMeshAgent_t4_m556_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		_stringLiteral39 = il2cpp_codegen_string_literal_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t39 * L_0 = GameObject_FindGameObjectWithTag_m555(NULL /*static, unused*/, _stringLiteral39, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3 * L_1 = GameObject_get_transform_m413(L_0, /*hidden argument*/NULL);
		__this->___player_2 = L_1;
		NavMeshAgent_t4 * L_2 = Component_GetComponent_TisNavMeshAgent_t4_m556(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_t4_m556_MethodInfo_var);
		__this->___nav_3 = L_2;
		return;
	}
}
// System.Void NewPlayerMovement::Update()
extern "C" void NewPlayerMovement_Update_m547 (NewPlayerMovement_t138 * __this, const MethodInfo* method)
{
	{
		NavMeshAgent_t4 * L_0 = (__this->___nav_3);
		Transform_t3 * L_1 = (__this->___player_2);
		NullCheck(L_1);
		Vector3_t8  L_2 = Transform_get_position_m313(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		NavMeshAgent_SetDestination_m314(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::.ctor()
extern "C" void Player__ctor_m548 (Player_t139 * __this, const MethodInfo* method)
{
	{
		__this->___speed_2 = (6.0f);
		__this->___turnSpeed_8 = (250.0f);
		__this->___camRayLength_9 = (100.0f);
		Vector3_t8  L_0 = Vector3_get_zero_m316(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___moveDirection_10 = L_0;
		__this->___gravity_11 = (20.0f);
		MonoBehaviour__ctor_m307(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::Awake()
extern TypeInfo* StringU5BU5D_t126_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAnimator_t7_m317_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t6_m318_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisCharacterController_t140_m558_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral40;
extern "C" void Player_Awake_m549 (Player_t139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		Component_GetComponent_TisAnimator_t7_m317_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		Component_GetComponent_TisRigidbody_t6_m318_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		Component_GetComponent_TisCharacterController_t140_m558_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483674);
		_stringLiteral40 = il2cpp_codegen_string_literal_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t126* L_0 = ((StringU5BU5D_t126*)SZArrayNew(StringU5BU5D_t126_il2cpp_TypeInfo_var, 1));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral40);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral40;
		int32_t L_1 = LayerMask_GetMask_m557(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___floorMask_7 = L_1;
		Animator_t7 * L_2 = Component_GetComponent_TisAnimator_t7_m317(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t7_m317_MethodInfo_var);
		__this->___anim_4 = L_2;
		Rigidbody_t6 * L_3 = Component_GetComponent_TisRigidbody_t6_m318(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t6_m318_MethodInfo_var);
		__this->___playerRigidbody_5 = L_3;
		CharacterController_t140 * L_4 = Component_GetComponent_TisCharacterController_t140_m558(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_t140_m558_MethodInfo_var);
		__this->___controller_6 = L_4;
		return;
	}
}
// System.Void Player::FixedUpdate()
extern TypeInfo* Input_t106_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral8;
extern Il2CppCodeGenString* _stringLiteral9;
extern "C" void Player_FixedUpdate_m550 (Player_t139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t106_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxisRaw_m388(NULL /*static, unused*/, _stringLiteral8, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxisRaw_m388(NULL /*static, unused*/, _stringLiteral9, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		float L_3 = V_1;
		Player_Move_m551(__this, L_2, L_3, /*hidden argument*/NULL);
		Player_Turning_m552(__this, /*hidden argument*/NULL);
		float L_4 = V_0;
		float L_5 = V_1;
		Player_Animating_m553(__this, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::Move(System.Single,System.Single)
extern TypeInfo* Input_t106_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral9;
extern "C" void Player_Move_m551 (Player_t139 * __this, float ___h, float ___v, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t3 * L_0 = Component_get_transform_m325(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_forward_m363(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t106_il2cpp_TypeInfo_var);
		float L_2 = Input_GetAxis_m389(NULL /*static, unused*/, _stringLiteral9, /*hidden argument*/NULL);
		Vector3_t8  L_3 = Vector3_op_Multiply_m334(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		float L_4 = (__this->___speed_2);
		Vector3_t8  L_5 = Vector3_op_Multiply_m334(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		__this->___moveDirection_10 = L_5;
		CharacterController_t140 * L_6 = (__this->___controller_6);
		Vector3_t8  L_7 = (__this->___moveDirection_10);
		float L_8 = Time_get_deltaTime_m338(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t8  L_9 = Vector3_op_Multiply_m334(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		CharacterController_Move_m559(L_6, L_9, /*hidden argument*/NULL);
		Vector3_t8 * L_10 = &(__this->___moveDirection_10);
		Vector3_t8 * L_11 = L_10;
		float L_12 = (L_11->___y_2);
		float L_13 = (__this->___gravity_11);
		float L_14 = Time_get_deltaTime_m338(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_11->___y_2 = ((float)((float)L_12-(float)((float)((float)L_13*(float)L_14))));
		return;
	}
}
// System.Void Player::Turning()
extern TypeInfo* Input_t106_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral8;
extern "C" void Player_Turning_m552 (Player_t139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t106_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m389(NULL /*static, unused*/, _stringLiteral8, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_t3 * L_1 = Component_get_transform_m325(__this, /*hidden argument*/NULL);
		float L_2 = V_0;
		float L_3 = (__this->___turnSpeed_8);
		float L_4 = Time_get_deltaTime_m338(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Rotate_m355(L_1, (0.0f), ((float)((float)((float)((float)L_2*(float)L_3))*(float)L_4)), (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::Animating(System.Single,System.Single)
extern Il2CppCodeGenString* _stringLiteral41;
extern "C" void Player_Animating_m553 (Player_t139 * __this, float ___h, float ___v, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral41 = il2cpp_codegen_string_literal_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___h;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		float L_1 = ___v;
		G_B3_0 = ((((int32_t)((((float)L_1) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_0 = G_B3_0;
		Animator_t7 * L_2 = (__this->___anim_4);
		bool L_3 = V_0;
		NullCheck(L_2);
		Animator_SetBool_m340(L_2, _stringLiteral41, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
