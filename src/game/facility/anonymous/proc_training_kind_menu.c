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
game_facility_anonymous_ProcTrainingKindMenu_ACall_closure_Invoke_197e0f0_alt1(
    __int64 result,
    __int64* a2) __asm__("game_facility_anonymous_ProcTrainingKindMenu_ACall_"
                         "closure_Invoke_197e0f0");
__int64
game_facility_anonymous_ProcTrainingKindMenu_ACall_closure_Invoke_197e330(
    __int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
__int64 GameRoutine_156d580(__int64);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
extern __int64 (*GameData_211cdf8[])();
__int64
game_facility_anonymous_ProcTrainingKindMenu_ACall_closure_Invoke(__int64 a1,
                                                                  __int64 a2);
__attribute__((swiftcall)) void
GameRoutine_13fa520_alt1(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_13fa520");
__int64 GameHr_1425b40(__int64);
__int64 GameHr_197da00(__int64, __int64, int);
__int64 GameRoutine_1428370_alt1(__int64,
                                 __int64) __asm__("GameRoutine_1428370");
__int64 GameRoutine_143e400_alt1() __asm__("GameRoutine_143e400");
__int64 game_gameui_Util_SetUnitInfoTraining(__int64, __int64);
extern __int64 (*TrainingArgs_Destructor_ptr)();
void InfoTitle_18b7c20(__int64);
void InfoTitle_18b7f20(__int64, _BYTE*);
void InfoTitle_18b83a0(__int64, _BYTE*, char);
void InfoTitle_18b8e80(__int64, _BYTE*);
void InfoTitle_18b90a0(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_anonymous_ProcTrainingKindMenu_ACall_closure_Invoke_197e0f0(
    __int64 a1, __int64* a2);

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
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  char* v9;
  _QWORD v10[2];
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;
  __int64 v13;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_211c888, 0);
    v13 = result;
    if (result != 0) {
      v3 = *(_QWORD*)(result + 88);
      v4 = result;
      v10[0] = "L_Info";
      v10[1] = 6;
      GameRoutine_13fa520_alt1((void*)(&v11_.v11), (__int64*)(a1 + 848), v10);
      if (v11_.v12 != 0) {
        v5 = std___1___shared_weak_count_lock_alt1(v11_.v12);
        v6 = v11_.v11;
        if (v11_.v12 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v11_.v12);
        }
        if (v5 != 0 && v6 != 0) {
          InfoTitle_18b7c20(v6);
          InfoTitle_18b7f20(v6, *(_BYTE**)(v3 + 32));
          InfoTitle_18b83a0(v6, *(_BYTE**)(v3 + 40), 0);
          v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4) & 0x70000;
          v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
          if (v7 != 0) {
            if ((v8 & 0x40000) != 0) {
              v9 = "MID_Menu_Cause_UsedChapter";
            }
            else if ((v8 & 0x20000) != 0) {
              v9 = "MID_Menu_Cause_UsedWeek";
            }
            else if ((v8 & 0x10000) != 0) {
              v9 = "MID_Menu_Cause_UsedDay";
            }
            else {
              v9 = &GameData_1a9f09e;
            }
          }
          else {
            if ((v8 & 0x8000) == 0) {
              InfoTitle_18b90a0(v6);
              goto LABEL_22;
            }
            v9 = "MID_Menu_Cause_NotRideJob";
          }
          InfoTitle_18b8e80(v6, v9);
        LABEL_22:
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            std___1___shared_weak_count___release_weak_alt1(v5);
          }
          goto LABEL_24;
        }
        if (v5 != 0) {
          goto LABEL_22;
        }
      }
    LABEL_24:
      GameHr_197da00(a1, (__int64)&v13, 0);
      return GameHr_197da00(a1, (__int64)&v13, 1);
    }
  }
  return result;
}

__int64 ProcTrainingKindMenu_197d8e0(__int64 a1, unsigned int a2)
{
  __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;
  struct {
    __int64 v13;
    __int64 v14;
  } v13_;

  v4 = *(_QWORD*)(*GameData_212dcd0 + 48);
  if (a2 >=
      (unsigned __int64)((*(_QWORD*)(*GameData_212dcd0 + 56) - v4) >> 3)) {
    v5 = 0;
  }
  else {
    v5 = *(_QWORD*)(v4 + 8LL * a2);
  }
  v6 = game_util_Format_alt1("L_UnitInfo%02d", a2);
  LayoutAccessor_1560070((void*)(&v13_.v13), (__int64*)(a1 + 848), v6);
  game_gameui_Util_SetUnitInfoTraining((__int64)&v13_.v13, v5);
  if (v13_.v14 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v13_.v14);
  }
  v7 = game_util_Format_alt1("L_UnitInfo%02d/L_UnitInfo", a2);
  LayoutAccessor_1560070((void*)(&v11_.v11), (__int64*)(a1 + 848), v7);
  result = v11_.v12;
  if (v11_.v12 != 0) {
    v9 = std___1___shared_weak_count_lock_alt1(v11_.v12);
    if (v9 != 0) {
      v10 = v9;
      if (v11_.v11 != 0) {
        LayoutAccessor_1562cf0_alt1(v11_.v11, "Simple01");
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak_alt1(v10);
      }
    }
    result = v11_.v12;
    if (v11_.v12 != 0) {
      return std___1___shared_weak_count___release_weak_alt1(v11_.v12);
    }
  }
  return result;
}

__int64

game_facility_anonymous_ProcTrainingKindMenu_OnUpdateCursor_closure_Invoke(
    __int64 a1, unsigned __int8* a2, _DWORD* a3)
{
  __int64 v3;
  __int64* v5;
  char* v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  const char* v10;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  v3 = *a2;
  v5 = **(__int64***)(a1 + 8);
  v6 = game_util_Format_alt1("L_MasteryInfoItem%02d", *a3);
  LayoutAccessor_1560070((void*)(&v11_.v11), v5, v6);
  result = v11_.v12;
  if (v11_.v12 != 0) {
    v8 = std___1___shared_weak_count_lock_alt1(v11_.v12);
    v9 = v11_.v11;
    result = v11_.v12;
    if (v11_.v12 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v11_.v12);
    }
    if (v8 != 0 && v9 != 0) {
      if (*(char*)(*(_QWORD*)(**(_QWORD**)(a1 + 16) + 88LL) + v3 + 90) <= 0) {
        v10 = "Accent_Off";
      }
      else {
        v10 = "Accent_On";
      }
      result = GameHr_1562680(v9, v10, 0x1.0000000000000p+0f);
    }
    else if (v8 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      return std___1___shared_weak_count___release_weak_alt1(v8);
    }
  }
  return result;
}

void game_facility_anonymous_ProcTrainingKindMenu_ACall_closure_Invoke_197e0f0(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[2];
    __int64 v10;
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
    char v15;
    char gap65_[7];
    __int64 v16;
    int v17;
    char gap84_[4];
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
  } v9_;
  struct {
    _QWORD v28[12];
    _QWORD v29[3];
  } v28_;

  v2 = *a2;
  v3 = GameData_225c918;
  if (GameData_225c918 != 0 || (v3 = GameData_22445b8, GameData_22445b8 != 0)) {
    v4 = (__int64*)(v3 + 216);
  }
  else {
    v8 = GameRoutine_143e400_alt1();
    v4 = **(__int64***)(v8 + 40);
    if ((int)((*(_QWORD*)(*(_QWORD*)(v8 + 40) + 8LL) - (_QWORD)v4) >> 3) < 1) {
      return;
    }
  }
  v5 = *v4;
  if (v2 != 0 && v5 != 0 && GameData_21f3ff8 != 0) {
    *(_DWORD*)(GameData_21f3ff8 + 12) = *(unsigned __int16*)(v5 + 16);
    v9_.v16 = 0;
    v9_.v17 = 0;
    v9_.v10 = 0;
    v9_.v11 = 0;
    v9_.v12 = 0;
    v9_.v13 = 0;
    v9_.v14 = 0;
    v9_.v15 = 0;
    v9_.v18 = 0;
    v9_.v19 = 0;
    v9_.v20 = 0;
    v9_.v21 = 0;
    v9_.v22 = 0;
    v9_.v23 = 0;
    v9_.v24 = 0;
    v9_.v25 = 0;
    v9_.v26 = 0;
    v9_.v27 = 0;
    v28_.v28[0] = 0;
    *(_DWORD*)((char*)v28_.v28 + 7) = 0;
    memset(&v28_.v28[2], 0, 80);
    v28_.v29[2] = 0;
    v9_.v9[0] = game_facility_TrainingArgs_vtable;
    v9_.v9[1] = &TrainingArgs_Destructor_ptr;
    *(_DWORD*)((char*)v28_.v29 + 7) = 0;
    v28_.v29[0] = 0;
    GameHr_1425b40((__int64)v9_.v9);
    GameRoutine_1428370_alt1(v2, (__int64)v9_.v9);
    v9_.v9[0] = game_facility_TrainingArgs_vtable;
    v9_.v9[1] = &TrainingArgs_Destructor_ptr;
    if (v9_.v10 != 0) {
      v9_.v11 = v9_.v10;
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v9_.v10);
    }
  }
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

__int64

game_facility_anonymous_ProcTrainingKindMenu_ACall_closure_Invoke(__int64 a1,
                                                                  __int64 a2)
{
  __int64 v3;
  __int64 result;
  __int64 v5;
  int v6;
  char* v7;
  int v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  int v11;

  v3 = a1 + 8;
  LayoutAccessor_1562cf0_alt1(a2, "Training");
  v11 = 0;
  v9_.v9[0] = GameData_211cdf8;
  v9_.v9[1] = a2;
  v9_.v9[2] = v3;
  v9_.v9[3] = &v11;
  v9_.v10 = v9_.v9;
  GameRoutine_156d580((__int64)v9_.v9);
  result = (__int64)v9_.v10;
  if (v9_.v10 == v9_.v9) {
    v5 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v9_.v10 + v5))((__int64)v9_.v10);
LABEL_6:
  v6 = v11;
  if (v11 <= 3) {
    do {
      v7 = game_util_Format_alt1("IconMastery%02d", v6);
      result = ui_LayoutAccessor_SetPaneVisible(a2, (__int64)v7, 0);
      v8 = v11;
      v6 = ++v11;
    } while (v8 < 3);
  }
  return result;
}

#pragma GCC visibility pop
