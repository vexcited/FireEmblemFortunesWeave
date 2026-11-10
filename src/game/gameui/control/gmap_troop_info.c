#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1563030(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD, float);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2001710[])();
float LayoutAccessor_15637c0(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* game_gameui_control_GmapTroopInfo_SetInfoEnemy(__int64 a1, __int64 a2,
                                                       char a3);
__int64 GmapTroopInfo_1010590(_QWORD* a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 Element_18850d0(_QWORD, _QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__n128 GameRoutine_1653f50(_DWORD*, __int64, __n128 result);
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern _UNKNOWN GameData_1ac6c8b;
extern __int64 (*GameData_2001790[])();
extern __int64 (*GameData_2001948[])();
extern __int64 (*game_gameui_control_KeyIcon_Destroy_KeyIcon_17aa580_ptr[])();
extern __int64 GameData_2131d90[8];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
unsigned int* Pane_58fac0(__int64, __int64);
__attribute__((swiftcall)) void GmapTroopInfo_1010760(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2);
__n128 game_gameui_control_GmapTroopInfo_SetInfoPlayerOther_lambda0_Invoke(
    __int64 a1, unsigned int* a2, _QWORD* a3, __int64 a4, __int64 a5,
    __int64 a6, __int64 a7, __int64 a8);

_QWORD* game_gameui_control_GmapTroopInfo_SetInfoEnemy(__int64 a1, __int64 a2,
                                                       char a3)
{
  float v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  char v12;
  _QWORD* result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  _QWORD v18[4];
  _QWORD* v19;
  __int64 v20;
  char v21;
  int v22;

  v21 = a3;
  LayoutAccessor_1562680(a1 + 88, "Enemy", 1.0);
  v5 = 0.0;
  v6 = LayoutAccessor_1563280(a1 + 88, "In", 1);
  if ((v6 & 1) != 0) {
    v5 = LayoutAccessor_15637c0(a1 + 88, "In", 1);
    LayoutAccessor_1563030(a1 + 88, "In", 1);
  }
  v7 = ui_LayoutAccessor_FindPane(a1 + 88, "N_Type");
  v10 = v7;
  if (v7 != 0) {
    v11 = *(_BYTE*)(v7 + 89);
    v12 = *(_BYTE*)(v7 + 88) & 1;
    *(_BYTE*)(v7 + 88) |= 1u;
    *(_BYTE*)(v7 + 89) = -1;
  }
  else {
    v11 = 0;
    v12 = 0;
  }
  result = v18;
  v18[0] = GameData_2001710;
  v18[1] = a1;
  v19 = v18;
  v18[2] = &v21;
  if (*(int*)(a2 + 96) < 1) {
    goto LABEL_13;
  }
  v14 = 0;
  v15 = a2;
  do {
    v22 = v14;
    v20 = v15;
    if (v19 == nullptr) {
      GameRoutine_60a310(0, v8);
    }
    (*(void (**)(_QWORD*, int*, __int64*))(*v19 + 48LL))(v19, &v22, &v20);
    ++v14;
    v15 += 16;
  } while (v14 < *(int*)(a2 + 96));
  result = v19;
  if (v19 == v18) {
  LABEL_13:
    v16 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_15;
    }
    v16 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(*result + v16))(
      result, v8, v9);
LABEL_15:
  if ((v6 & 1) != 0) {
    LayoutAccessor_1562680(a1 + 88, "In", 1.0);
    result = (_QWORD*)LayoutAccessor_15636c0(a1 + 88, "In", 1, v5);
  }
  if (v10 != 0) {
    v17 = *(_BYTE*)(v10 + 88);
    *(_BYTE*)(v10 + 89) = v11;
    *(_BYTE*)(v10 + 88) = v17 & 0xFE | v12;
  }
  return result;
}

__int64 GmapTroopInfo_1010590(_QWORD* a1)
{
  int v1;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v3 = ui_LayoutAccessor_FindPane(a1 + 11, "N_Type");
  if (v3 == 0 || a1[13] == 0 || a1[12] == 0) {
    return LayoutAccessor_1562680(a1 + 11, "Out", 1.0f);
  }
  v4 = *(_BYTE*)(v3 + 89);
  v5 = std___1___shared_weak_count_lock(a1[12]);
  if (v5 == 0) {
    goto LABEL_12;
  }
  v6 = a1[11];
  if (v6 != 0) {
    v1 = *(unsigned __int8*)(v6 + 24);
    v7 = v6 + 152;
    if (v1 == 0) {
      v7 = 0;
    }
    v8 = v7 != a1[13];
  }
  else {
    v8 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v8) {
    LABEL_12:
      v9 = a1[12];
      if (v9 == 0 || *(_QWORD*)(v9 + 8) == -1) {
        return LayoutAccessor_1562680(a1 + 11, "Out", 1.0f);
      }
      goto LABEL_17;
    }
  }
  else {
    v10 = v5;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v10);
    if (v8) {
      goto LABEL_12;
    }
  }
  if ((v1 & 1) == 0) {
    return LayoutAccessor_1562680(a1 + 11, "Out", 1.0f);
  }
LABEL_17:
  v11 = a1[13];
  if (v11 != 0) {
    v12 = *(_QWORD*)(v11 + 24);
    if (v12 != 0) {
      *(_BYTE*)(v12 + 89) = v4;
    }
  }
  return LayoutAccessor_1562680(a1 + 11, "Out", 1.0f);
}

__attribute__((swiftcall)) void GmapTroopInfo_1010760(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* result;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v6 = (_QWORD*)LayoutEx_579160(1072, 8);
  v7 = v6 + 3;
  v8 = v6;
  v6[1] = 0;
  v6[2] = 0;
  *v6 = GameData_2001790;
  result = (_QWORD*)Element_18850d0(v6 + 3, a1, a2);
  v10 = GameData_2131d90[0] + 376;
  v8[3] = GameData_2131d90[0] + 16;
  v8[12] = v10;
  v11 = v8 + 12;
  *((_DWORD*)v8 + 263) = *(_DWORD*)(a1 + 1028);
  LODWORD(v10) = *(_DWORD*)(a1 + 1032);
  *((_DWORD*)v8 + 265) = 0;
  *((_DWORD*)v8 + 264) = v10;
  *((_BYTE*)v8 + 1064) = *(_BYTE*)(a1 + 1040);
  v12 = ui_Manager_instance_;
  v13 = *(_QWORD*)(ui_Manager_instance_ + 1248);
  v14 = ui_Manager_instance_ + 1240;
  if (v13 == ui_Manager_instance_ + 1240) {
    goto LABEL_4;
  }
  while (*(_QWORD**)(v13 + 16) != v11) {
    v13 = *(_QWORD*)(v13 + 8);
    if (v13 == v14) {
      goto LABEL_4;
    }
  }
  if (v13 == v14) {
  LABEL_4:
    result = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
    result[1] = v14;
    result[2] = v11;
    v15 = *(_QWORD*)(v12 + 1240);
    *result = v15;
    *(_QWORD*)(v15 + 8) = result;
    *(_QWORD*)(v12 + 1240) = result;
    ++*(_QWORD*)(v12 + 1256);
  }
  *a3 = v7;
  a3[1] = v8;
  v8[3] = game_gameui_control_KeyIcon_Destroy_KeyIcon_17aa580_ptr;
  v8[12] = GameData_2001948;
  {
    result;
    return;
  }
}

__n128 game_gameui_control_GmapTroopInfo_SetInfoPlayerOther_lambda0_Invoke(
    __int64 a1, unsigned int* a2, _QWORD* a3, __int64 a4, __int64 a5,
    __int64 a6, __int64 a7, __int64 a8)
{

#pragma clang fp contract(off)
  __int64 v8;
  _DWORD* v9;
  char* v10;
  __n128 result;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __n128 v15;
  __int64 v16;
  unsigned int* v17;
  struct {
    __int64* v18;
    __int64 v19;
  } v18_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v8 = *(_QWORD*)(a1 + 8);
  v9 = (_DWORD*)*a3;
  v10 = game_util_Format((__int64)"L_Type%02d", *a2, (__int64)a3, a4, a5, a6,
                         a7, a8, (char)v18_.v18),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LayoutAccessor_1560070((void*)(&v18_.v18), (__int64*)(v8 + 88), (__int64)v10),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v18_.v19 != 0) {
    v12 = std___1___shared_weak_count_lock(v18_.v19),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v13 = v18_.v18;
    if (v18_.v19 != 0) {
      result = std___1___shared_weak_count___release_weak(v18_.v19),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (v12 != 0 && v13 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
      v14 = ui_LayoutAccessor_FindPane_alt1(v13, (__int64)&GameData_1ac6c8b),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v14 != 0) {
        v16 = v14;
        v17 = Pane_58fac0(v14, (__int64)"Min_Width"),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v17 != nullptr) {
          PSEUDO_LOW_LANE128(v15, n128_f32,
                             (float)*(int*)((char*)v17 + v17[1]));
          *(_BYTE*)(v16 + 88) |= 0x10u;
          *(_DWORD*)(v16 + 80) = LANES128(v15).n128_u32[0];
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v15 = std___1___shared_weak_count___release_weak(v12),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v18_.v18 = v13;
      v18_.v19 = v12;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                memory_order_relaxed);
      result = GameRoutine_1653f50(v9, (__int64)&v18_.v18, v15),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v18_.v19 != 0) {
        result = std___1___shared_weak_count___release_weak(v18_.v19),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    else if (v12 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 16LL))(
          v12, *(long double*)&result),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
      return std___1___shared_weak_count___release_weak(v12);
    }
  }
  return result;
}

#pragma GCC visibility pop
