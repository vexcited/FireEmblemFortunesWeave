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
  __int64 v11;
  bool v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  _BOOL8 v20;
  _QWORD v22[2];
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int16 v27;
  int v28;
  _QWORD v29[3];

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
      v22[0] = *v8;
      GameRoutine_15d2830(a1 + 1064, (unsigned __int16*)v22, v6);
    }
    else {
      v9 = *(int*)(v3 + 40);
      if ((_DWORD)v9 == -1) {
        v10 = game_g_empty_item_ptr;
      }
      else {
        v10 = (__int64*)(*(_QWORD*)(v3 + 88) + 8 * v9 + 828);
      }
      v22[0] = *v10;
      GameRoutine_15d2000(a1 + 1064, (__int64)v22, v6);
    }
    if (*(_QWORD*)GameData_212d020[0] != 0 && (*(_BYTE*)(a1 + 1192) & 1) == 0) {
      v25 = 0;
      v26 = 0;
      v28 = 0;
      v24 = 0;
      v27 = 256;
      v11 = *(int*)(v5 + 40);
      v22[0] = *(_QWORD*)(v5 + 88);
      v12 = (_DWORD)v11 == -1;
      v13 = (__int64*)(v22[0] + 8 * v11 + 828);
      if (v12) {
        v13 = v4;
      }
      v14 = *v13;
      v23 = 1;
      strcpy((char*)v29, ",CommandAttackMenu_Base");
      v22[1] = v14;
      GameRoutine_f09ca0();
      if ((v29[0] & 1) != 0 && v29[2] != 0) {
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v29[2]);
      }
    }
    v1 = *(_QWORD*)(a1 + 336);
    if (v1 == 0) {
      goto LABEL_31;
    }
  }
  v16 = __dynamic_cast(v1, GameData_212e008[0], GameData_2131a00[0], 0);
  if (v16 != 0) {
    v17 = *(int*)(v16 + 40);
    if ((_DWORD)v17 == -1) {
      v18 = v4;
    }
    else {
      v18 = (__int64*)(*(_QWORD*)(v16 + 88) + 8 * v17 + 828);
    }
    v19 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                     8LL * *(unsigned __int16*)v18);
    v20 = *(unsigned __int8*)(v19 + 72) >= 8u &&
          *(unsigned __int8*)(v19 + 73) != 16;
  }
  else {
  LABEL_31:
    v20 = true;
  }
  return GameRoutine_1567590("StatusChange", v20);
}

#pragma GCC visibility pop
