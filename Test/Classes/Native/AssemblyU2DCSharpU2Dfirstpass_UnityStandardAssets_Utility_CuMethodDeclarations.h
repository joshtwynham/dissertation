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

// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t49;
// UnityEngine.Camera
struct Camera_t48;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
extern "C" void CurveControlledBob__ctor_m170 (CurveControlledBob_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
extern "C" void CurveControlledBob_Setup_m171 (CurveControlledBob_t49 * __this, Camera_t48 * ___camera, float ___bobBaseInterval, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
extern "C" Vector3_t8  CurveControlledBob_DoHeadBob_m172 (CurveControlledBob_t49 * __this, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
