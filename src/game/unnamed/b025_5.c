#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212bf68;
extern __int64 GameData_21f3d10;
extern __int64 GameData_2265ee0;
unsigned __int64 GameRoutine_18f34a0(__int64, unsigned __int8*);
__int64 GameRoutine_18f3d00(_QWORD, _QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameHr_18f3d00(__int64*, __int64, __int64, unsigned __int64);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_18f3890(__int64 a1, __int64* a2);

void GameHr_18f3890(__int64 a1, __int64* a2)
{
  __int64* v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v13;
    unsigned __int64 v14;
    char* v15;
  } v13_;

  v3 = (__int64*)(a1 + 728);
  if (v3 != a2) {
    GameHr_18f3d00(v3, *a2, a2[1], 0xCCCCCCCCCCCCCCCDLL * ((a2[1] - *a2) >> 4));
  }
  v4 = *(unsigned __int8*)(GameData_21f3d10 + 40);
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = v6;
  }
  else {
    v7 = *(_QWORD*)(GameData_21f3d10 + 48);
  }
  if (v5) {
    v8 = GameData_21f3d10 + 41;
  }
  else {
    v8 = *(_QWORD*)(GameData_21f3d10 + 56);
  }
  v9 = v7 + 3;
  if (v7 + 3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v9 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11,
                                                16, 0);
    v13_.v14 = v7 + 3;
    v13_.v15 = v10;
    v13_.v13 = v11 | 1;
  }
  else {
    v13_.v14 = 0;
    v13_.v15 = nullptr;
    v13_.v13 = (unsigned __int8)(2 * v9);
    v10 = (char*)&v13_.v13 + 1;
    if (v7 == 0) {
      goto LABEL_18;
    }
  }
  memmove((__int64)v10, v8, v7);
LABEL_18:
  *(_DWORD*)&v10[v7] = 3227999;
  GameRoutine_18f34a0(a1, (unsigned __int8*)&v13_.v13);
  if ((v13_.v13 & 1) != 0 && v13_.v15 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  (__int64)v13_.v15);
  }
  *(_BYTE*)(a1 + 777) = 1;
}

#pragma GCC visibility pop
