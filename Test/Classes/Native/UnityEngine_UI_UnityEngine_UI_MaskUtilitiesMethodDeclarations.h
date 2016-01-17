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

// UnityEngine.Component
struct Component_t135;
// UnityEngine.Transform
struct Transform_t3;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t549;
// UnityEngine.UI.IClippable
struct IClippable_t643;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t557;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_Notify2DMaskStateChanged_m2631 (Object_t * __this /* static, unused */, Component_t135 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_NotifyStencilStateChanged_m2632 (Object_t * __this /* static, unused */, Component_t135 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C" Transform_t3 * MaskUtilities_FindRootSortOverrideCanvas_m2633 (Object_t * __this /* static, unused */, Transform_t3 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t MaskUtilities_GetStencilDepth_m2634 (Object_t * __this /* static, unused */, Transform_t3 * ___transform, Transform_t3 * ___stopAfter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C" RectMask2D_t549 * MaskUtilities_GetRectMaskForClippable_m2635 (Object_t * __this /* static, unused */, Object_t * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C" void MaskUtilities_GetRectMasksForClip_m2636 (Object_t * __this /* static, unused */, RectMask2D_t549 * ___clipper, List_1_t557 * ___masks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
