﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t602;
// UnityEngine.RectOffset
struct RectOffset_t297;
// UnityEngine.RectTransform
struct RectTransform_t203;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t606;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextAnchor.h"

// System.Void UnityEngine.UI.LayoutGroup::.ctor()
extern "C" void LayoutGroup__ctor_m3128 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::get_padding()
extern "C" RectOffset_t297 * LayoutGroup_get_padding_m3129 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_padding(UnityEngine.RectOffset)
extern "C" void LayoutGroup_set_padding_m3130 (LayoutGroup_t602 * __this, RectOffset_t297 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::get_childAlignment()
extern "C" int32_t LayoutGroup_get_childAlignment_m3131 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_childAlignment(UnityEngine.TextAnchor)
extern "C" void LayoutGroup_set_childAlignment_m3132 (LayoutGroup_t602 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::get_rectTransform()
extern "C" RectTransform_t203 * LayoutGroup_get_rectTransform_m3133 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::get_rectChildren()
extern "C" List_1_t606 * LayoutGroup_get_rectChildren_m3134 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputHorizontal()
extern "C" void LayoutGroup_CalculateLayoutInputHorizontal_m3135 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_minWidth()
extern "C" float LayoutGroup_get_minWidth_m3136 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredWidth()
extern "C" float LayoutGroup_get_preferredWidth_m3137 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleWidth()
extern "C" float LayoutGroup_get_flexibleWidth_m3138 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_minHeight()
extern "C" float LayoutGroup_get_minHeight_m3139 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredHeight()
extern "C" float LayoutGroup_get_preferredHeight_m3140 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleHeight()
extern "C" float LayoutGroup_get_flexibleHeight_m3141 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutGroup::get_layoutPriority()
extern "C" int32_t LayoutGroup_get_layoutPriority_m3142 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnEnable()
extern "C" void LayoutGroup_OnEnable_m3143 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDisable()
extern "C" void LayoutGroup_OnDisable_m3144 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDidApplyAnimationProperties()
extern "C" void LayoutGroup_OnDidApplyAnimationProperties_m3145 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalMinSize(System.Int32)
extern "C" float LayoutGroup_GetTotalMinSize_m3146 (LayoutGroup_t602 * __this, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalPreferredSize(System.Int32)
extern "C" float LayoutGroup_GetTotalPreferredSize_m3147 (LayoutGroup_t602 * __this, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalFlexibleSize(System.Int32)
extern "C" float LayoutGroup_GetTotalFlexibleSize_m3148 (LayoutGroup_t602 * __this, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetStartOffset(System.Int32,System.Single)
extern "C" float LayoutGroup_GetStartOffset_m3149 (LayoutGroup_t602 * __this, int32_t ___axis, float ___requiredSpaceWithoutPadding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutInputForAxis(System.Single,System.Single,System.Single,System.Int32)
extern "C" void LayoutGroup_SetLayoutInputForAxis_m3150 (LayoutGroup_t602 * __this, float ___totalMin, float ___totalPreferred, float ___totalFlexible, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetChildAlongAxis(UnityEngine.RectTransform,System.Int32,System.Single,System.Single)
extern "C" void LayoutGroup_SetChildAlongAxis_m3151 (LayoutGroup_t602 * __this, RectTransform_t203 * ___rect, int32_t ___axis, float ___pos, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutGroup::get_isRootLayoutGroup()
extern "C" bool LayoutGroup_get_isRootLayoutGroup_m3152 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnRectTransformDimensionsChange()
extern "C" void LayoutGroup_OnRectTransformDimensionsChange_m3153 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnTransformChildrenChanged()
extern "C" void LayoutGroup_OnTransformChildrenChanged_m3154 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetDirty()
extern "C" void LayoutGroup_SetDirty_m3155 (LayoutGroup_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
