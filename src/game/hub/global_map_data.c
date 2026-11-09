#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e273d0(_QWORD);
__int64 GameRoutine_e298c0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 (*GameData_1fe3850[])();
extern __int64 (*game_hub_GlobalMapData_vtable[])();
extern __int64 GameData_2210d68;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f168;
extern int GameData_2216298;
__int64 GlobalMapData_Destructor(_QWORD* a1);

__int64 GlobalMapData_Destructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  *a1 = game_hub_GlobalMapData_vtable;
  v2 = GameData_212f168;
  (*(void (**)(_QWORD))(*(_QWORD*)*GameData_212f168 + 24LL))(*GameData_212f168);
  if (*v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v2 + 8LL))(*v2);
  }
  *v2 = 0;
  v3 = a1[28];
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = a1[29];
    if (v3 == v5) {
      goto LABEL_19;
    }
    do {
      if ((*(_BYTE*)(v5 - 24) & 1) != 0 && *(_QWORD*)(v5 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6);
      }
      v7 = *(_QWORD*)(v5 - 64);
      if (v7 != 0) {
        *(_QWORD*)(v5 - 56) = v7;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8);
      }
      v5 -= 80;
    } while (v5 != v3);
    v9 = a1[28];
    a1[29] = v3;
    if (v9 != 0) {
    LABEL_19:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10);
    }
  }
  GameRoutine_e298c0(a1 + 25, a1[26]);
  v11 = a1[22];
  if (v11 != 0) {
    v12 = *(_QWORD*)v4;
    a1[23] = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(v12 + v13);
  }
  v14 = a1[19];
  if (v14 != 0) {
    v15 = *(_QWORD*)v4;
    a1[20] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(v15 + v16);
  }
  v17 = a1[16];
  if (v17 != 0) {
    v18 = *(_QWORD*)v4;
    a1[17] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(v18 + v19);
  }
  result = nn_os_FinalizeMutex(a1 + 10);
  v21 = a1[7];
  if (v21 != 0) {
    v22 = *(_QWORD*)v4;
    a1[8] = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v22 + v23);
  }
  v24 = a1[4];
  if (v24 != 0) {
    v25 = *(_QWORD*)v4;
    a1[5] = v24;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v25 + v26);
  }
  v27 = a1[1];
  if (v27 != 0) {
    v28 = a1[2];
    if (v27 == v28) {
      goto LABEL_46;
    }
    do {
      v29 = v28 - 296;
      GameRoutine_e273d0(v28 - 152);
      result = GameRoutine_e273d0(v29);
      v28 = v29;
    } while (v29 != v27);
    v30 = a1[1];
    a1[2] = v27;
    if (v30 != 0) {
    LABEL_46:
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v31 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v31);
    }
  }
  *a1 = GameData_1fe3850;
  if ((_QWORD*)GameData_2210d68 == a1) {
    GameData_2210d68 = 0;
    GameData_2216298 = 0;
  }
  return result;
}

#pragma GCC visibility pop
