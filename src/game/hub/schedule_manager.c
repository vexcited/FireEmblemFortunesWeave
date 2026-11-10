#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d9eb80(_QWORD);
__int64 GameRoutine_d9fe20(_QWORD);
__int64 GameRoutine_d9fe20_alt1(_QWORD*) __asm__("GameRoutine_d9fe20");
__int64 GameRoutine_f482e0(void);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ab0c08;
extern _UNKNOWN GameData_1adebe5;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dc58[3];
extern __int64 GameData_21c9608;
extern __int64 GameData_21f3ce0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 ScheduleManager_d9ead0(__int64 a1);
void ScheduleManager_d9ed40();
__int64 ScheduleManager_d9efa0(__int64 result);
__int64 ScheduleManager_d9fd60();
_QWORD* ScheduleManager_da0320(__int64 a1);
__int64 game_hub_ScheduleManager_SetDateChangeEvent_lambda0_Invoke(__int64 a1);

__int64 ScheduleManager_d9ead0(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  void* v5;

  GameRoutine_d9eb80(a1);
  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    v5 = &GameData_1ab0c08;
    v4 = game_HashString(&GameData_1ab0c08);
    if (game_GameModeData_instance_ == 0 ||
        (v2 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), &v4)) == 0 ||
        *(_DWORD*)(v2 + 32) == 0) {
      v5 = &GameData_1ab0c08;
      v4 = game_HashString(&GameData_1ab0c08);
      game_VariableManager_SetFlag(&v4, 1);
    }
  }
  return GameRoutine_d9fe20(a1);
}

void ScheduleManager_d9ed40()
{
  __int64 v0;
  __int64 v1;
  void* v2;

  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    v2 = &GameData_1ab0c08;
    v1 = game_HashString(&GameData_1ab0c08);
    if (game_GameModeData_instance_ == 0 ||
        (v0 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), &v1)) == 0 ||
        *(_DWORD*)(v0 + 32) == 0) {
      v2 = &GameData_1ab0c08;
      v1 = game_HashString(&GameData_1ab0c08);
      game_VariableManager_SetFlag(&v1, 1);
    }
  }
}

__int64 ScheduleManager_d9efa0(__int64 result)
{
  __int64 v1;
  __int16* v2;
  __int64 v3;
  int v4;
  __int64 v5;

  v1 = result;
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v2 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (*(_BYTE*)(result + 116) != 1) {
    goto LABEL_12;
  }
  if (((__int64)v2[1] << 24) + ((__int64)*v2 << 32) + ((__int64)v2[2] << 18) +
          ((__int64)v2[3] << 12) + ((__int64)v2[4] << 6) + v2[5] >=
      (unsigned __int64)(((__int64)*(__int16*)(result + 106) << 24) +
                         ((__int64)*(__int16*)(result + 104) << 32) +
                         ((__int64)*(__int16*)(result + 108) << 18) +
                         ((__int64)*(__int16*)(result + 110) << 12) +
                         ((__int64)*(__int16*)(result + 112) << 6) +
                         *(__int16*)(result + 114))) {
    goto LABEL_11;
  }
  v3 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL);
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dc58[0] + 80LL) & 1) == 0) {
    *(_BYTE*)(*(_QWORD*)GameData_212dc58[0] + 80LL) = 1;
  }
  v4 = *(_DWORD*)(v3 + 232);
  if (v4 <= 2) {
    v4 = 2;
  }
  *(_DWORD*)(v3 + 232) = v4;
  GameRoutine_f482e0();
  result = GameRoutine_d9fe20(v1);
  if (*(_BYTE*)(v1 + 116) == 1) {
  LABEL_11:
    v5 = *(_QWORD*)v2;
    *(_DWORD*)(v1 + 112) = *((_DWORD*)v2 + 2);
    *(_QWORD*)(v1 + 104) = v5;
  }
  else {
  LABEL_12:
    *(_WORD*)(v1 + 104) = *v2;
    *(_WORD*)(v1 + 106) = v2[1];
    *(_WORD*)(v1 + 108) = v2[2];
    *(_WORD*)(v1 + 110) = v2[3];
    *(_WORD*)(v1 + 112) = v2[4];
    *(_WORD*)(v1 + 114) = v2[5];
    *(_BYTE*)(v1 + 116) = 1;
  }
  return result;
}

__int64 ScheduleManager_d9fd60()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  _QWORD v3[4];

  if (*(_BYTE*)(GameData_21c9608 + 304) != 1) {
    return 0;
  }
  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    return 1;
  }
  v3[2] = v0;
  v3[3] = v1;
  v3[1] = &GameData_1adebe5;
  v3[0] = game_HashString(&GameData_1adebe5);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v3);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

_QWORD* ScheduleManager_da0320(__int64 a1)
{
  _QWORD* v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = (_QWORD*)(a1 + 80);
  result = *(_QWORD**)(a1 + 112);
  if (result == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (result != nullptr) {
    v4 = 40;
  LABEL_5:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 64);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  return result;
}

__int64 game_hub_ScheduleManager_SetDateChangeEvent_lambda0_Invoke(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  int v3;

  v1 = *(_QWORD**)(a1 + 8);
  v2 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL);
  if ((*(_BYTE*)(GameData_21f3ce0 + 80) & 1) == 0) {
    *(_BYTE*)(GameData_21f3ce0 + 80) = 1;
  }
  v3 = *(_DWORD*)(v2 + 232);
  if (v3 <= 2) {
    v3 = 2;
  }
  *(_DWORD*)(v2 + 232) = v3;
  GameRoutine_f482e0();
  return GameRoutine_d9fe20_alt1(v1);
}

#pragma GCC visibility pop
