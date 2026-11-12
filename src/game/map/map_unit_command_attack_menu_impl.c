#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_15d2000(__int64, __int64, __int64);
__int64 GameRoutine_15d2830(__int64, unsigned __int16*, __int64);
__int64 GameRoutine_f09ca0(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_212d020[5];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212ea58;
extern __int64* GameData_2131a00[7];
extern __int64* game_g_empty_item_ptr;
__int64 MapUnitCommandAttackMenu_161eea0(__int64 a1);
__int64 MapUnitCommandAttackMenu_161eec0(__int64 a1);
__int64 GameRoutine_1567590_alt1(__int64 result,
                                 char) __asm__("GameRoutine_1567590");
__int64 GameRoutine_f09ca0_alt1(_QWORD*, __int64) __asm__("GameRoutine_f09ca0");
__int64 game_gameui_anonymous_15d2000(__int64, __int64, __int64);
__int64 game_gameui_anonymous_15d2830(__int64, __int64, __int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 MapUnitCommandAttackMenu_161eea0(__int64 a1)
{
  if (*(_DWORD*)(a1 + 1012) != 0) {
    return 9;
  }
  else {
    return 10;
  }
}

__int64 MapUnitCommandAttackMenu_161eec0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  _QWORD* v11;
  __int64 v12;
  bool v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  char v21;
  struct {
    _QWORD v23[2];
    char v24;
    char gap17_[7];
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int16 v28;
    char gap50_[2];
    int v29;
  } v23_;
  __int64 v30[3];

  v1 = *(_QWORD*)(a1 + 336);
  if (v1 == 0) {
    goto LABEL_31;
  }
  v3 = __dynamic_cast(*(_QWORD*)(a1 + 336), GameData_212e008[0],
                      GameData_2131a00[0], 0);
  v4 = game_g_empty_item_ptr;
  if (v3 != 0) {
    v5 = v3;
    if (*(_BYTE*)(a1 + 1184) == 1) {
      v6 = *(_QWORD*)(v3 + 88);
    }
    else {
      v6 = 0;
    }
    if (*GameData_212ea58 != 0) {
      v7 = *(int*)(v3 + 40);
      if ((_DWORD)v7 == -1) {
        v8 = game_g_empty_item_ptr;
      }
      else {
        v8 = (__int64*)(*(_QWORD*)(v3 + 88) + 8 * v7 + 828);
      }
      v23_.v23[0] = *v8;
      game_gameui_anonymous_15d2830(a1 + 1064, (__int64)v23_.v23, v6);
    }
    else {
      v9 = *(int*)(v3 + 40);
      if ((_DWORD)v9 == -1) {
        v10 = game_g_empty_item_ptr;
      }
      else {
        v10 = (__int64*)(*(_QWORD*)(v3 + 88) + 8 * v9 + 828);
      }
      v23_.v23[0] = *v10;
      game_gameui_anonymous_15d2000(a1 + 1064, (__int64)v23_.v23, v6);
    }
    v11 = *(_QWORD**)GameData_212d020[0];
    if (*(_QWORD*)GameData_212d020[0] != 0 && (*(_BYTE*)(a1 + 1192) & 1) == 0) {
      v23_.v26 = 0;
      v23_.v27 = 0;
      v23_.v29 = 0;
      v23_.v25 = 0;
      v23_.v28 = 256;
      v12 = *(int*)(v5 + 40);
      v23_.v23[0] = *(_QWORD*)(v5 + 88);
      v13 = (_DWORD)v12 == -1;
      v14 = (__int64*)(v23_.v23[0] + 8 * v12 + 828);
      if (v13) {
        v14 = v4;
      }
      v15 = *v14;
      v23_.v24 = 1;
      strcpy((char*)v30, ",CommandAttackMenu_Base");
      v23_.v23[1] = v15;
      GameRoutine_f09ca0_alt1(v11, (__int64)v23_.v23);
      if ((v30[0] & 1) != 0 && v30[2] != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v30[2]);
      }
    }
    v1 = *(_QWORD*)(a1 + 336);
    if (v1 == 0) {
      goto LABEL_31;
    }
  }
  v17 = __dynamic_cast(v1, GameData_212e008[0], GameData_2131a00[0], 0);
  if (v17 != 0) {
    v18 = *(int*)(v17 + 40);
    if ((_DWORD)v18 == -1) {
      v19 = v4;
    }
    else {
      v19 = (__int64*)(*(_QWORD*)(v17 + 88) + 8 * v18 + 828);
    }
    v20 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                     8LL * *(unsigned __int16*)v19);
    v21 = *(unsigned __int8*)(v20 + 72) >= 8u && *(_BYTE*)(v20 + 73) != 16;
  }
  else {
  LABEL_31:
    v21 = 1;
  }
  return GameRoutine_1567590_alt1((__int64)"StatusChange", v21);
}

#pragma GCC visibility pop
