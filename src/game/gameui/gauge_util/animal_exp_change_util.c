#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 AnimalExpChangeUtil_Unknown5();
__int64 AnimalExpChangeUtil_Unknown4(__int64 a1);

unsigned __int64 AnimalExpChangeUtil_Unknown5()
{
  unsigned __int64 v0;
  __int64 v1;
  int v2;
  int v3;
  int v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int* v17;

  v0 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  v1 = (int)((GameData_21d9990 - GameData_21d9988) >> 2);
  if ((_DWORD)v0 == 1) {
    v2 = *(_DWORD*)GameData_21d9988;
    v3 = 0;
    v4 = 1;
  LABEL_7:
    v5 = 0;
    v6 = (int)((GameData_21d9990 - GameData_21d9988) >> 2);
    v7 = *(_DWORD*)(GameData_21d9988 + 4LL * v4 - 4);
  LABEL_8:
    v8 = 0;
    v9 = (int)((GameData_21d9990 - GameData_21d9988) >> 2);
    v10 = *(_DWORD*)(GameData_21d9988 + 4 * v6 - 4);
  LABEL_9:
    v11 = 0;
    v12 = 0;
    v13 = *(_DWORD*)(GameData_21d9988 + 4 * v9 - 4);
    goto LABEL_10;
  }
  v2 = *(_DWORD*)GameData_21d9988;
  v3 = *(_DWORD*)(GameData_21d9988 + 4);
  if ((int)v0 >= 1) {
    v4 = 1;
  }
  else {
    v4 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  }
  if ((int)v0 <= 1) {
    goto LABEL_7;
  }
  v17 = (int*)(GameData_21d9988 + 4LL * (unsigned int)v4 - 4);
  v7 = *v17;
  v5 = v17[1];
  if ((_DWORD)v0 == 2) {
    v6 = 2;
    goto LABEL_8;
  }
  v10 = *(_DWORD*)(GameData_21d9988 + 4);
  v8 = *(_DWORD*)(GameData_21d9988 + 8);
  if ((unsigned int)v0 <= 3) {
    v9 = 3;
    goto LABEL_9;
  }
  v13 = *(_DWORD*)(GameData_21d9988 + 8);
  v11 = *(_DWORD*)(GameData_21d9988 + 12);
  if ((_DWORD)v0 == 4) {
    v12 = 0;
  }
  else {
    v12 = *(_DWORD*)(GameData_21d9988 + 16);
  }
  v1 = 4;

LABEL_10:
  v14 = v3 - v2;
  if (v14 <= v5 - v7) {
    v14 = v5 - v7;
  }
  if (v14 <= v8 - v10) {
    v14 = v8 - v10;
  }
  v15 = v12 - *(_DWORD*)(GameData_21d9988 + 4 * v1 - 4);
  if (v14 <= v11 - v13) {
    v14 = v11 - v13;
  }
  if (v14 > v15) {
    v15 = v14;
  }
  return (1717986919 * (unsigned __int64)(v15 & (unsigned int)~(v15 >> 31))) >>
         33;
}

__int64 AnimalExpChangeUtil_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 120);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 96);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 72);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8, v7);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9, a1);
}

#pragma GCC visibility pop
