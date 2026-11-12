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
__int64
TargetMenuItem_1620a20_alt1(__int64 a1) __asm__("TargetMenuItem_1620a20");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TargetMenuItem_1620a20(__int64 a1);

void TargetMenuItem_1620a20(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  unsigned __int16* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  bool v12;
  unsigned int v13;
  __int64 v14;
  unsigned int v15;
  bool v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v20[2];
    char v21;
    char gap17_[7];
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int16 v25;
    char gap50_[2];
    int v26;
    char v27;
  } v20_;
  struct {
    char gap56_[1];
    char v28[15];
    __int64 v29;
  } v28_;

  TargetMenuItem_1621130(a1, *(_DWORD*)(a1 + 40));
  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + v2))(a1);
  if (GameData_21cd120 != 0) {
    v3 = *(_QWORD*)(a1 + 88);
    v20_.v23 = 0;
    v20_.v24 = 0;
    v20_.v26 = 0;
    v20_.v22 = 0;
    v20_.v25 = 256;
    v4 = *(int*)(a1 + 40);
    v20_.v20[0] = v3;
    v5 = game_g_empty_item_ptr;
    v6 = (unsigned __int16*)(v3 + 8 * v4 + 828);
    if ((_DWORD)v4 == -1) {
      v7 = game_g_empty_item_ptr;
    }
    else {
      v7 = (__int64*)(v3 + 8 * v4 + 828);
    }
    v20_.v20[1] = *v7;
    v20_.v21 = 1;
    if (UnitItem_6e8bc0(v6, v3)) {
      if (*(_BYTE*)(GameData_21cd108 + 20) != 0) {
        if ((*(_DWORD*)(GameData_21cd0e8 + 48) & 0xFFF) != 0) {
          v8 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                          8LL * (*(_DWORD*)(GameData_21cd0e8 + 48) & 0xFFF));
        }
        else {
          v13 = *(unsigned __int16*)(GameData_21cd0e8 + 40);
          if (*(_WORD*)(GameData_21cd0e8 + 40) == 0) {
            v13 = *(unsigned __int16*)v5;
          }
          v14 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v13);
          v8 = *(_QWORD*)(v14 + 192);
          v15 = *(unsigned __int8*)(v14 + 72);
          v16 = v8 == 0 || v15 > 7;
          if (v16 || *(_BYTE*)(v8 + 105) == 0) {
            v8 = 0;
          }
          else if (*(_BYTE*)(v8 + 104) == 2) {
            v8 = 0;
          }
        }
        v17 = *(_DWORD*)(GameData_21cd0e8 + 52);
        if ((v17 & 0x80000000) != 0) {
          v18 = 0;
        }
        else {
          v18 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL) +
                144LL * v17;
        }
        v20_.v22 = v8;
        v20_.v23 = v18;
      }
    }
    else {
      v9 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                      8LL * *(unsigned __int16*)(*(_QWORD*)(a1 + 88) +
                                                 8LL * *(int*)(a1 + 40) + 828));
      v10 = *(_QWORD*)(v9 + 192);
      v11 = *(unsigned __int8*)(v9 + 72);
      v12 = v10 == 0 || v11 > 7;
      if (v12 || *(_BYTE*)(v10 + 105) == 0 || *(_BYTE*)(v10 + 104) == 2) {
        v20_.v22 = 0;
      }
      else {
        v20_.v22 = v10;
      }
    }
    v20_.v27 = 28;
    strcpy(v28_.v28, "TargetMenuItem");
    GameRoutine_f09ca0((_QWORD*)GameData_21cd120, (__int64)v20_.v20);
    if ((v20_.v27 & 1) != 0 && v28_.v29 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v28_.v29);
    }
  }
}

#pragma GCC visibility pop
