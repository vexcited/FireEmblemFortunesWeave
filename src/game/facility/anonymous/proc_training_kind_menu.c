#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_13fa520(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1597c00(_QWORD, _QWORD);
__int64 GameRoutine_15e77c0(_QWORD);
__int64 GameRoutine_18b7c20(_QWORD);
__int64 GameRoutine_18b7f20(_QWORD, _QWORD);
__int64 GameRoutine_18b83a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18b8e80(_QWORD, _QWORD);
__int64 GameRoutine_18b90a0(_QWORD);
__int64 GameRoutine_197d8e0(_QWORD, _QWORD);
__int64 GameRoutine_197da00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_94e9c0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(long double, double);
extern __int64 (*GameData_1faf558[])();
extern __int64 GameData_211c888;
extern __int64 GameData_212c6c0[2];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212e008[9];
extern char GameData_1a9f09e;
__int64 ProcTrainingKindMenu_Unknown84(__int64 a1);
__int64 ProcTrainingKindMenu_Unknown88(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1575ab0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
extern __int64* GameData_212dcd0;
__int64 ProcTrainingKindMenu_197d8e0(__int64 a1, unsigned int a2);
__int64 BasicMenuCursor_16ddaa0(_QWORD, _QWORD);
__int64 GameRoutine_1425b40(_QWORD);
__int64 GameRoutine_1428370(_QWORD, _QWORD);
__int64 GameRoutine_143e400(_QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_203b128)();
extern __int64 (*game_facility_TrainingArgs_vtable[])();
extern __int64 GameData_21f3ff8;
extern __int64 GameData_22445b8;
extern __int64 GameData_225c918;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
game_facility_anonymous_ProcTrainingKindMenu_OnUpdateCursor_closure_Invoke(
    __int64 a1, unsigned __int8* a2, _DWORD* a3);
__int64
game_facility_anonymous_ProcTrainingKindMenu_ACall_closure_Invoke_197e0f0(
    __int64 result, __int64* a2);
__int64
game_facility_anonymous_ProcTrainingKindMenu_ACall_closure_Invoke_197e330(
    __int64 a1);

__int64 ProcTrainingKindMenu_Unknown84(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int16* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  char v11;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;

  GameRoutine_197d8e0(a1, 0);
  GameRoutine_197d8e0(a1, 1);
  v2 = v13;
  v13[0] = GameData_1faf558;
  v14 = v13;
  v3 = *(_QWORD*)GameData_212c6c0[0];
  if (*(_QWORD*)GameData_212c6c0[0] == 0) {
    v11 = 0;
    v10 = 32;
    goto LABEL_18;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v4 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v5 = *(_QWORD*)(v3 + 16);
  v6 = *(_QWORD*)(v3 + 24);
  if (v5 != v6) {
    v7 = *v4;
    v8 = v4[1];
    v9 = v4[2];
    v10 = 32;
    while (v7 != *(unsigned __int16*)(v5 + 4) ||
           v8 != *(unsigned __int8*)(v5 + 6) ||
           v9 != *(unsigned __int8*)(v5 + 7)) {
      v5 += 368;
      if (v5 == v6) {
        v11 = 0;
        v2 = v13;
        goto LABEL_18;
      }
    }
  }
  v2 = v13;
  v10 = 32;
  v11 = 0;
  if (v5 == v6 || v5 == 0) {
    goto LABEL_18;
  }
  v15 = v5;
  v11 = GameRoutine_94e9c0(v13, &v15);
  v2 = v14;
  if (v14 == v13) {
    v10 = 32;
    goto LABEL_18;
  }
  if (v14 != nullptr) {
    v10 = 40;
  LABEL_18:
    (*(void (**)(_QWORD*))(*v2 + v10))(v2);
  }
  GameRoutine_1597c00(a1 + 848, v11 & 1);
  return GameRoutine_15e77c0(a1);
}

__int64 ProcTrainingKindMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  long double v5;
  double v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  char* v11;
  _QWORD v12[2];
  __int64 v13;
  __int64 v14;
  __int64 v15;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_211c888, 0);
    v15 = result;
    if (result != 0) {
      v3 = *(_QWORD*)(result + 88);
      v4 = result;
      v12[0] = "L_Info";
      v12[1] = 6;
      GameRoutine_13fa520((void*)&v13, a1 + 848, v12);
      if (v14 != 0) {
        v7 = std___1___shared_weak_count_lock(v5, v6);
        v8 = v13;
        if (v14 != 0) {
          std___1___shared_weak_count___release_weak(v14);
        }
        if (v7 != 0 && v8 != 0) {
          GameRoutine_18b7c20(v8);
          GameRoutine_18b7f20(v8, *(_QWORD*)(v3 + 32));
          GameRoutine_18b83a0(v8, *(_QWORD*)(v3 + 40), 0);
          v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4) & 0x70000;
          v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
          if (v9 != 0) {
            if ((v10 & 0x40000) != 0) {
              v11 = "MID_Menu_Cause_UsedChapter";
            }
            else if ((v10 & 0x20000) != 0) {
              v11 = "MID_Menu_Cause_UsedWeek";
            }
            else if ((v10 & 0x10000) != 0) {
              v11 = "MID_Menu_Cause_UsedDay";
            }
            else {
              v11 = &GameData_1a9f09e;
            }
          }
          else {
            if ((v10 & 0x8000) == 0) {
              GameRoutine_18b90a0(v8);
              goto LABEL_22;
            }
            v11 = "MID_Menu_Cause_NotRideJob";
          }
          GameRoutine_18b8e80(v8, v11);
        LABEL_22:
          if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            std___1___shared_weak_count___release_weak(v7);
          }
          goto LABEL_24;
        }
        if (v7 != 0) {
          goto LABEL_22;
        }
      }
    LABEL_24:
      GameRoutine_197da00(a1, &v15, 0);
      return GameRoutine_197da00(a1, &v15, 1);
    }
  }
  return result;
}

__int64 ProcTrainingKindMenu_197d8e0(__int64 a1, unsigned int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  long double v8;
  double v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v4 = *(_QWORD*)(*GameData_212dcd0 + 48);
  if (a2 >=
      (unsigned __int64)((*(_QWORD*)(*GameData_212dcd0 + 56) - v4) >> 3)) {
    v5 = 0;
  }
  else {
    v5 = *(_QWORD*)(v4 + 8LL * a2);
  }
  v6 = game_util_Format("L_UnitInfo%02d", a2);
  GameRoutine_1560070((void*)&v15, a1 + 848, v6);
  GameRoutine_1575ab0(&v15, v5, 0xFFFFFFFFLL);
  if (v16 != 0) {
    std___1___shared_weak_count___release_weak(v16);
  }
  v7 = game_util_Format("L_UnitInfo%02d/L_UnitInfo", a2);
  GameRoutine_1560070((void*)&v13, a1 + 848, v7);
  result = v14;
  if (v14 != 0) {
    v11 = std___1___shared_weak_count_lock(v8, v9);
    if (v11 != 0) {
      v12 = v11;
      if (v13 != 0) {
        LayoutAccessor_1562cf0(v13, "Simple01");
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
      }
    }
    result = v14;
    if (v14 != 0) {
      return std___1___shared_weak_count___release_weak(v14);
    }
  }
  return result;
}

__int64

game_facility_anonymous_ProcTrainingKindMenu_OnUpdateCursor_closure_Invoke(
    __int64 a1, unsigned __int8* a2, _DWORD* a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  long double v7;
  double v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  __int64 v14;

  v3 = *a2;
  v5 = **(_QWORD**)(a1 + 8);
  v6 = game_util_Format("L_MasteryInfoItem%02d", *a3);
  GameRoutine_1560070((void*)&v13, v5, v6);
  result = v14;
  if (v14 != 0) {
    v10 = std___1___shared_weak_count_lock(v7, v8);
    v11 = v13;
    result = v14;
    if (v14 != 0) {
      result = std___1___shared_weak_count___release_weak(v14);
    }
    if (v10 != 0 && v11 != 0) {
      if (*(char*)(*(_QWORD*)(**(_QWORD**)(a1 + 16) + 88LL) + v3 + 90) <= 0) {
        v12 = "Accent_Off";
      }
      else {
        v12 = "Accent_On";
      }
      result = LayoutAccessor_1562680(v11, v12, 1.0);
    }
    else if (v10 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      return std___1___shared_weak_count___release_weak(v10);
    }
  }
  return result;
}

__int64

game_facility_anonymous_ProcTrainingKindMenu_ACall_closure_Invoke_197e0f0(
    __int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v7;
  _QWORD v8[2];
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD v27[12];
  _QWORD v28[3];

  v2 = *a2;
  v3 = GameData_225c918;
  if (GameData_225c918 != 0 || (v3 = GameData_22445b8, GameData_22445b8 != 0)) {
    v4 = (__int64*)(v3 + 216);
  }
  else {
    result = GameRoutine_143e400(result);
    v4 = **(__int64***)(result + 40);
    if ((int)((*(_QWORD*)(*(_QWORD*)(result + 40) + 8LL) - (_QWORD)v4) >> 3) <
        1) {
      return result;
    }
  }
  v5 = *v4;
  if (v2 != 0 && v5 != 0 && GameData_21f3ff8 != 0) {
    *(_DWORD*)(GameData_21f3ff8 + 12) = *(unsigned __int16*)(v5 + 16);
    v15 = 0;
    v16 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27[0] = 0;
    *(_DWORD*)((char*)v27 + 7) = 0;
    memset(&v27[2], 0, 80);
    v28[2] = 0;
    v8[0] = game_facility_TrainingArgs_vtable;
    v8[1] = &GameData_203b128;
    *(_DWORD*)((char*)v28 + 7) = 0;
    v28[0] = 0;
    GameRoutine_1425b40(v8);
    result = GameRoutine_1428370(v2, v8);
    v8[0] = game_facility_TrainingArgs_vtable;
    v8[1] = &GameData_203b128;
    if (v9 != 0) {
      v10 = v9;
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
    }
  }
  return result;
}

__int64

game_facility_anonymous_ProcTrainingKindMenu_ACall_closure_Invoke_197e330(
    __int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *GameData_212dcd0;
  *(_DWORD*)(v2 + 8) = -1;
  *(_DWORD*)(v2 + 44) = -1;
  *(_QWORD*)(v2 + 56) = *(_QWORD*)(v2 + 48);
  *(_QWORD*)(v2 + 80) = *(_QWORD*)(v2 + 72);
  *(_QWORD*)(v2 + 12) = -1;
  *(_QWORD*)(v2 + 20) = -1;
  *(_QWORD*)(v2 + 28) = -1;
  *(_QWORD*)(v2 + 36) = -1;
  return BasicMenuCursor_16ddaa0(v1, 5);
}

#pragma GCC visibility pop
