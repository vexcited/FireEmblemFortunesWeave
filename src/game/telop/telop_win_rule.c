#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_15730d0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
__int64 game_telop_TelopWinRule_OnBuild_lambda1_Invoke(__int64 result,
                                                       __int64* a2);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 Situation_763a80(__int64, __int64);
__int64 Situation_763c20(__int64, __int64);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(_QWORD, _QWORD) __asm__(
    "ui_LayoutAccessor_SetPaneVisible");
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_20329e0[])();
extern __int64 (*GameData_2032a60[])();
extern __int64 GameData_21ca2f8;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned int* GameRoutine_190a0c0(unsigned int* result, __int64, float*,
                                  _QWORD*, __int64);
void GameRoutine_137ab20(__int64, __int64, __int64);
void GameRoutine_156c5d0(__int64, __int64, char);
__n128 game_telop_TelopWinRule_OnBuild(__int64 a1);
__int64 game_telop_TelopWinRule_OnBuild_lambda0_Invoke(__int64 result,
                                                       __int64* a2);

__n128 game_telop_TelopWinRule_OnBuild(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned int v9;
  int v10;
  char v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  unsigned int v15;
  int v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v25;
  __int64 v31;
  __n128 result;
  __int64 v33;
  char v34;
  struct {
    char gap0_[1];
    char v35[15];
    __int64 v36;
  } v35_;
  char v37;
  int v38;
  __int64 v39;
  struct {
    _QWORD v40[2];
    unsigned int* v41;
    char gap72_[8];
    _QWORD* v42;
  } v40_;
  unsigned int v43;
  struct {
    unsigned int v44;
    int v45;
  } v44_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*(_BYTE*)(a1 + 832) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 848);
  }
  else {
    v2 = a1 + 833;
  }
  if (v2 != 0) {
    v3 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 168), (__int64)"T_Win"),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v3 != 0) {
      GameRoutine_156c5d0(v3, v2, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  if ((*(_BYTE*)(a1 + 856) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 872);
  }
  else {
    v4 = a1 + 857;
  }
  if (v4 != 0) {
    v5 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 168), (__int64)"T_Lose"),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v5 != 0) {
      GameRoutine_156c5d0(v5, v4, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v6 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 168), (__int64)"T_Win"),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v6 != 0) {
    v7 = v6;
    v8 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 168),
                                                (__int64)"T_Win"),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v8 != nullptr) {
      GameRoutine_190a0c0((unsigned int*)v40_.v40, (__int64)&v44_.v44,
                          (float*)&v43, v8, v8[27]),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v9 = v44_.v44;
      v10 = v44_.v45;
    }
    else {
      v9 = 0;
      v10 = 0;
    }
    v11 = *(_BYTE*)(v7 + 88);
    *(_DWORD*)(v7 + 80) = v9;
    *(_DWORD*)(v7 + 84) = v10;
    *(_BYTE*)(v7 + 88) = v11 | 0x10;
  }
  v12 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 168), (__int64)"T_Lose"),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v12 != 0) {
    v13 = v12;
    v14 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 168),
                                                 (__int64)"T_Lose"),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v14 != nullptr) {
      GameRoutine_190a0c0((unsigned int*)v40_.v40, (__int64)&v44_.v44,
                          (float*)&v43, v14, v14[27]),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v15 = v44_.v44;
      v16 = v44_.v45;
    }
    else {
      v15 = 0;
      v16 = 0;
    }
    v17 = *(_BYTE*)(v13 + 88);
    *(_DWORD*)(v13 + 80) = v15;
    *(_DWORD*)(v13 + 84) = v16;
    *(_BYTE*)(v13 + 88) = v17 | 0x10;
  }
  v44_.v44 = 0;
  v43 = 0;
  v18 = GameData_21ca2f8;
  if ((*(_BYTE*)(GameData_21ca2f8 + 20) & 4) != 0) {
    v40_.v40[0] = GameData_20329e0;
    v40_.v40[1] = a1;
    v40_.v42 = v40_.v40;
    v40_.v41 = &v44_.v44;
    Situation_763a80(GameData_21ca2f8, (__int64)v40_.v40),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v40_.v42 == v40_.v40) {
      v19 = 32;
    }
    else {
      if (v40_.v42 == nullptr) {
      LABEL_29:
        v18 = GameData_21ca2f8;
        goto LABEL_30;
      }
      v19 = 40;
    }
    (*(void (**)(__int64))(*v40_.v42 + v19))((__int64)v40_.v42),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_29;
  }
LABEL_30:
  v40_.v40[0] = GameData_2032a60;
  v40_.v40[1] = a1;
  v40_.v42 = v40_.v40;
  v40_.v41 = &v43;
  Situation_763c20(v18, (__int64)v40_.v40),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v40_.v42 == v40_.v40) {
    v25 = 32;
    goto LABEL_34;
  }
  if (v40_.v42 != nullptr) {
    v25 = 40;
  LABEL_34:
    (*(void (**)(__int64))(*v40_.v42 + v25))((__int64)v40_.v42),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v37 = 6;
  v38 = 7235927;
  GameRoutine_137ab20(a1, (__int64)&v37, v44_.v44),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v37 & 1) != 0 && v39 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v31),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v34 = 8;
  strcpy(v35_.v35, "Lose");
  GameRoutine_137ab20(a1, (__int64)&v34, v43),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v34 & 1) != 0 && v35_.v36 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
  }
  return result;
}

__int64 game_telop_TelopWinRule_OnBuild_lambda0_Invoke(__int64 result,
                                                       __int64* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  int v15;

  v3 = *a2;
  if (*a2 == 0) {
    return result;
  }
  v4 = *(_QWORD*)(result + 8);
  v5 = result;
  v6 = game_util_Format("WinFaceFrm%d", **(_DWORD**)(result + 16));
  result = LayoutAccessor_155fbe0(v4 + 168, v6);
  if (*(_QWORD*)(result + 16) == 0) {
    return result;
  }
  v7 = (__int64*)result;
  result = *(_QWORD*)(result + 8);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_12;
  }
  v8 = *v7;
  if (*v7 != 0) {
    v2 = *(unsigned __int8*)(v8 + 24);
    v9 = v8 + 152;
    if (v2 == 0) {
      v9 = 0;
    }
    v10 = v9 != v7[2];
  }
  else {
    v10 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v10) {
    LABEL_12:
      v11 = v7[1];
      if (v11 == 0 || *(_QWORD*)(v11 + 8) == -1) {
        return result;
      }
      goto LABEL_17;
    }
  }
  else {
    v12 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v12);
    if (v10) {
      goto LABEL_12;
    }
  }
  if ((v2 & 1) == 0) {
    return result;
  }
LABEL_17:
  v13 = ui_LayoutAccessor_FindPane(v7, "Face");
  if (v13 != 0) {
    v13 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d678[0], 0);
  }
  v14 = GameRoutine_1840740(v13, 0, v3, 6, 1);
  result = LayoutAccessor_155e830(v7, v14 & 1);
  if ((v14 & 1) != 0) {
    v15 = *(int*)((char*)((int*)0x24LL) + game_g_shared_system_skills_ptr) &
          0xFFF;
    game_HasSkill(v3 + 1744, &v15);
    ui_LayoutAccessor_SetPaneVisible_alt1(v7, "IconStrong");
    result = LayoutAccessor_15730d0(v7, v3);
    ++**(_DWORD**)(v5 + 16);
  }
  return result;
}

__int64 game_telop_TelopWinRule_OnBuild_lambda1_Invoke(__int64 result,
                                                       __int64* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v3 = *a2;
  if (*a2 == 0) {
    return result;
  }
  v4 = *(_QWORD*)(result + 8);
  v5 = result;
  v6 = game_util_Format("LoseFaceFrm%d", **(_DWORD**)(result + 16));
  result = LayoutAccessor_155fbe0(v4 + 168, v6);
  if (*(_QWORD*)(result + 16) == 0) {
    return result;
  }
  v7 = (__int64*)result;
  result = *(_QWORD*)(result + 8);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_12;
  }
  v8 = *v7;
  if (*v7 != 0) {
    v2 = *(unsigned __int8*)(v8 + 24);
    v9 = v8 + 152;
    if (v2 == 0) {
      v9 = 0;
    }
    v10 = v9 != v7[2];
  }
  else {
    v10 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v10) {
    LABEL_12:
      v11 = v7[1];
      if (v11 == 0 || *(_QWORD*)(v11 + 8) == -1) {
        return result;
      }
      goto LABEL_17;
    }
  }
  else {
    v12 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v12);
    if (v10) {
      goto LABEL_12;
    }
  }
  if ((v2 & 1) == 0) {
    return result;
  }
LABEL_17:
  v13 = ui_LayoutAccessor_FindPane(v7, "Face");
  if (v13 != 0) {
    v13 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1840740(v13, 0, v3, 6, 1);
  ui_LayoutAccessor_SetPaneVisible(v7, "IconStrong", 0);
  result = LayoutAccessor_15730d0(v7, v3);
  ++**(_DWORD**)(v5 + 16);
  return result;
}

#pragma GCC visibility pop
