#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f09ca0(_QWORD*, __int64);
__int64 TargetMenuItem_1621130(__int64 result, int);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
bool UnitItem_6e8bc0(unsigned __int16*, __int64);
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cfb8[11];
extern __int64* game_g_empty_item_ptr;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21cd0e8;
extern __int64 GameData_21cd108;
extern __int64 GameData_21cd120;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TargetMenuItem_1620a20(__int64 a1);

__int64 TargetMenuItem_1620a20(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  unsigned __int16* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  bool v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  bool v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  struct {
    _QWORD v21[2];
    char v22;
    char gap17_[7];
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int16 v26;
    char gap50_[2];
    int v27;
    char v28;
  } v21_;
  struct {
    char gap56_[1];
    char v29[15];
    __int64 v30;
  } v29_;

  TargetMenuItem_1621130(a1, *(_DWORD*)(a1 + 40));
  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + v2))(a1);
  if (GameData_21cd120 != 0) {
    v4 = *(_QWORD*)(a1 + 88);
    v21_.v24 = 0;
    v21_.v25 = 0;
    v21_.v27 = 0;
    v21_.v23 = 0;
    v21_.v26 = 256;
    v5 = *(int*)(a1 + 40);
    v21_.v21[0] = v4;
    v6 = game_g_empty_item_ptr;
    v7 = (unsigned __int16*)(v4 + 8 * v5 + 828);
    if ((_DWORD)v5 == -1) {
      v8 = game_g_empty_item_ptr;
    }
    else {
      v8 = (__int64*)(v4 + 8 * v5 + 828);
    }
    v21_.v21[1] = *v8;
    v21_.v22 = 1;
    if (UnitItem_6e8bc0(v7, v4)) {
      if (*(_BYTE*)(GameData_21cd108 + 20) != 0) {
        if ((*(_DWORD*)(GameData_21cd0e8 + 48) & 0xFFF) != 0) {
          v9 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                          8LL * (*(_DWORD*)(GameData_21cd0e8 + 48) & 0xFFF));
        }
        else {
          v14 = *(unsigned __int16*)(GameData_21cd0e8 + 40);
          if (*(_WORD*)(GameData_21cd0e8 + 40) == 0) {
            v14 = *(unsigned __int16*)v6;
          }
          v15 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v14);
          v9 = *(_QWORD*)(v15 + 192);
          v16 = *(unsigned __int8*)(v15 + 72);
          v17 = v9 == 0 || v16 > 7;
          if (v17 || *(_BYTE*)(v9 + 105) == 0) {
            v9 = 0;
          }
          else if (*(_BYTE*)(v9 + 104) == 2) {
            v9 = 0;
          }
        }
        v18 = *(_DWORD*)(GameData_21cd0e8 + 52);
        if ((v18 & 0x80000000) != 0) {
          v19 = 0;
        }
        else {
          v19 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL) +
                144LL * v18;
        }
        v21_.v23 = v9;
        v21_.v24 = v19;
      }
    }
    else {
      v10 =
          *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                     8LL * *(unsigned __int16*)(*(_QWORD*)(a1 + 88) +
                                                8LL * *(int*)(a1 + 40) + 828));
      v11 = *(_QWORD*)(v10 + 192);
      v12 = *(unsigned __int8*)(v10 + 72);
      v13 = v11 == 0 || v12 > 7;
      if (v13 || *(_BYTE*)(v11 + 105) == 0 || *(_BYTE*)(v11 + 104) == 2) {
        v21_.v23 = 0;
      }
      else {
        v21_.v23 = v11;
      }
    }
    v21_.v28 = 28;
    strcpy(v29_.v29, "TargetMenuItem");
    result = GameRoutine_f09ca0((_QWORD*)GameData_21cd120, (__int64)v21_.v21);
    if ((v21_.v28 & 1) != 0 && v29_.v30 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
    }
  }
  return result;
}

#pragma GCC visibility pop
