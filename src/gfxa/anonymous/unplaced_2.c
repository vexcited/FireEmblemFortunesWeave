#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
extern __int64 (*GameData_1fce978[])();
extern __int64 (*GameData_1fcea08[])();
extern __int64 (*GameData_1fcea98[])();
extern __int64 (*GameData_1fceae0[])();
extern __int64 (*GameData_1fceb70[])();
extern __int64 (*GameData_1fcec00[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_b32f30();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 gfxa_anonymous_bbc200(__int64 a1, __int64 a2);

__int64 gfxa_anonymous_bbc200(__int64 a1, __int64 a2)
{
  int v2;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 (**v12)();
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  signed __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD v27[2];

  v2 = *(_DWORD*)(a1 + 96);
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      192, 16, 0);
  v7 = v6 + 96;
  v8 = v6 + 144;
  v9 = fw_memory_HeapManager_Allocate(*v5, 32, 16, 0);
  *(_QWORD*)(v6 + 24) = v9;
  *(_QWORD*)(v6 + 8) = 33;
  *(_DWORD*)(v6 + 80) = v2;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  if (a2 != 0) {
    *(_BYTE*)(v6 + 84) = 1;
    *(_QWORD*)(v6 + 16) = 27;
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_QWORD*)(v6 + 128) = v7;
    *(_QWORD*)(v6 + 176) = v8;
    v10 = *(_QWORD*)"SwitchComputeCoarseModePass";
    v11 = *(_QWORD*)"mputeCoarseModePass";
    *(_QWORD*)v6 = GameData_1fcea98;
    *(_QWORD*)(v6 + 144) = GameData_1fcea08;
    strcpy((char*)(v9 + 16), "rseModePass");
    v12 = GameData_1fce978;
  }
  else {
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_QWORD*)(v6 + 128) = v7;
    *(_QWORD*)(v6 + 176) = v8;
    *(_BYTE*)(v6 + 84) = 1;
    v10 = *(_QWORD*)"SwitchComputeFineModePass";
    v11 = *(_QWORD*)"mputeFineModePass";
    *(_QWORD*)(v6 + 16) = 25;
    *(_QWORD*)v6 = GameData_1fcec00;
    *(_QWORD*)(v6 + 144) = GameData_1fceb70;
    strcpy((char*)(v9 + 16), "eModePass");
    v12 = GameData_1fceae0;
  }
  *(_QWORD*)v9 = v10;
  *(_QWORD*)(v9 + 8) = v11;
  *(_QWORD*)(v6 + 96) = v12;
  v14 = *(__int64**)(a1 + 8);
  v13 = *(_QWORD*)(a1 + 16);
  if ((unsigned __int64)v14 >= v13) {
    v16 = *(_QWORD*)a1;
    v17 = (signed __int64)v14 - *(_QWORD*)a1;
    v18 = (v17 >> 3) + 1;
    if (v18 >> 61 != 0) {
      GameRoutine_b32f30();
    }
    v19 = v13 - v16;
    if (v19 >> 2 > v18) {
      v18 = v19 >> 2;
    }
    if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
      v20 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v20 = v18;
    }
    if (v20 != 0) {
      if (v20 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v21 = fw_memory_HeapManager_Allocate(*v5, 8 * v20, 16, 0);
    }
    else {
      v21 = 0;
    }
    v22 = v21 + 8 * v20;
    v23 = v21 + v17 - 8 * (v17 >> 3);
    *(_QWORD*)(v21 + v17) = v6;
    v15 = v21 + v17 + 8;
    memcpy(v23, v16, v17);
    *(_QWORD*)a1 = v23;
    *(_QWORD*)(a1 + 8) = v15;
    *(_QWORD*)(a1 + 16) = v22;
    if (v16 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*v5 + v24, v16);
    }
  }
  else {
    *v14 = v6;
    v15 = (__int64)(v14 + 1);
  }
  *(_QWORD*)(a1 + 8) = v15;
  v25 = *(_QWORD*)(v15 - 8);
  v27[0] = a1;
  v27[1] = v25;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v25 + 16LL))(v25, v27);
}

#pragma GCC visibility pop
