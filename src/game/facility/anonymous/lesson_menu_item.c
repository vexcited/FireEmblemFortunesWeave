#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1433810(void);
__int64 GameRoutine_60a020(_QWORD);
__int64 GameRoutine_871860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_125b8e0(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ffa390[])();
extern __int64 (*GameData_1ffa410[])();
extern __int64 GameData_21c9718;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212dcd0;
__int64 LessonMenuItem_ACall(_QWORD* a1);
__int64 GameRoutine_1433810_alt1(_QWORD, _QWORD) __asm__("GameRoutine_1433810");
extern __int64 GameData_21f3ff8;
__int64 game_facility_anonymous_LessonMenuItem_ACall_closure_Invoke(__int64 a1,
                                                                    __int64 a2);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameSubquestData_125b8e0_alt1(
    _QWORD*, const char*, unsigned __int8) __asm__("GameSubquestData_125b8e0");
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
extern __int64 game_GameModeData_instance_;
void GameRoutine_1433810_alt2() __asm__("GameRoutine_1433810");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 LessonMenuItem_ACall(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  const char* v4;
  unsigned int v5;
  unsigned __int8 v6;
  __int64 result;
  const char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  struct {
    _QWORD v24[4];
    _QWORD* v25;
  } v24_;
  struct {
    __int16 v26;
    char gap154_[6];
    __int64 v27;
    char* v28;
  } v26_;
  char* v29;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[11];
  v26_.v26 = 0;
  v3 = *(unsigned __int8*)(v2 + 48);
  if ((_DWORD)v3 == 1) {
    v8 = "MID_LessonMenu_PracticeConfirm";
  LABEL_12:
    GameRoutine_60a020_alt1((__int64)&v26_.v26, v8);
    v5 = (unsigned __int8)v26_.v26;
    v3 = v26_.v27;
    goto LABEL_18;
  }
  if ((_DWORD)v3 == 2) {
    v3 = *(_QWORD*)(v2 + 64);
    if (v3 != 0) {
      v4 = *(const char**)(v2 + 104);
      if (v4 != nullptr) {
        v5 = *(unsigned __int8*)v4;
        if (*v4 == 0) {
          goto LABEL_18;
        }
        if (GameData_21c9718 != 0) {
          v6 = game_GameModeData_instance_ != 0
                   ? *(_BYTE*)(game_GameModeData_instance_ + 15)
                   : 0;
          v9 = GameSubquestData_125b8e0_alt1((_QWORD*)GameData_21c9718, v4, v6);
          if (v9 != 0 && *(_BYTE*)(v9 + 9) == 3) {
            v8 = "MID_QuestMenu_Report_Confirm";
            goto LABEL_12;
          }
        }
      }
    }
  }
  v5 = 0;
LABEL_18:
  if ((v5 & 1) == 0) {
    v3 = v5 >> 1;
  }
  if (v3 == 0) {
    v14 = a1[11];
    if (v14 != 0) {
      v15 = *(unsigned __int16*)(v14 + 16);
    }
    else {
      v15 = -1;
    }
    *(_DWORD*)(*GameData_212dcd0 + 8) = v15;
    GameRoutine_1433810_alt2();
    result = 2;
    if ((v26_.v26 & 1) == 0) {
      return result;
    }
    goto LABEL_48;
  }
  v10 = a1[1];
  if (*(_QWORD*)(v10 + 152) != 0) {
    v11 = *(_QWORD*)(v10 + 152);
  }
  else {
    v11 = a1[1];
  }
  if ((v5 & 1) != 0) {
    v12 = v26_.v28;
  }
  else {
    v12 = (char*)&v26_.v26 + 1;
  }
  v29 = v12;
  v22_.v23 = v22_.v22;
  v24_.v24[0] = GameData_1ffa390;
  v24_.v24[1] = a1;
  v24_.v25 = v24_.v24;
  v20_.v21 = v20_.v20;
  v22_.v22[0] = GameData_1ffa410;
  v20_.v20[0] = GameData_1ffa410;
  MapSortieMenu_871860(v11, (__int64)&v29, (__int64)v24_.v24, (__int64)v22_.v22,
                       (__int64)v20_.v20);
  if (v20_.v21 == v20_.v20) {
    v13 = 32;
  }
  else {
    if (v20_.v21 == nullptr) {
      goto LABEL_34;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v20_.v21 + v13))((__int64)v20_.v21);
LABEL_34:
  if (v22_.v23 == v22_.v22) {
    v16 = 32;
  }
  else {
    if (v22_.v23 == nullptr) {
      goto LABEL_39;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*v22_.v23 + v16))((__int64)v22_.v23);
LABEL_39:
  if (v24_.v25 == v24_.v24) {
    v17 = 32;
  }
  else {
    if (v24_.v25 == nullptr) {
      goto LABEL_44;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))(*v24_.v25 + v17))((__int64)v24_.v25);
LABEL_44:
  result = 12;
  if ((v26_.v26 & 1) == 0) {
    return result;
  }
LABEL_48:
  if (v26_.v28 != nullptr) {
    v18 = result;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (__int64)v26_.v28);
    return v18;
  }
  return result;
}

__int64 game_facility_anonymous_LessonMenuItem_ACall_closure_Invoke(__int64 a1,
                                                                    __int64 a2)
{
  __int64 v2;
  int v3;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
  if (v2 != 0) {
    v3 = *(unsigned __int16*)(v2 + 16);
  }
  else {
    v3 = -1;
  }
  *(_DWORD*)(GameData_21f3ff8 + 8) = v3;
  GameRoutine_1433810_alt1(a1, a2);
  return 4;
}

#pragma GCC visibility pop
