#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_8ee700(_QWORD);
__int64 List_93b820(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_1fab9a8;
extern __int64 (*game_GameConverge_Impl_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d7e0[7];
extern __int64* GameData_212db90[3];
extern __int64* GameData_212dd80[6];
extern __int64* GameData_212dda0[2];
extern __int64* GameData_212dea8;
extern __int64* GameData_2130db8[4];
__int64 Impl_Destructor_8ee1e0(__int64 a1);

__int64 Impl_Destructor_8ee1e0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
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
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 result;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;

  *(_QWORD*)a1 = game_GameConverge_Impl_vtable;
  v2 = GameData_212dd80[0];
  *(_QWORD*)(a1 + 2544) = GameData_212dd80[0] + 2;
  v3 = *(_QWORD*)(a1 + 2552);
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
    *(_QWORD*)(a1 + 2552) = 0;
  }
  v4 = GameData_212dda0[0];
  v5 = *(_QWORD*)(a1 + 2536);
  *(_QWORD*)(a1 + 2528) = GameData_212dda0[0] + 2;
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != 0) {
    List_93b820(v5);
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v7);
    *(_QWORD*)(a1 + 2536) = 0;
  }
  v8 = GameData_212d7e0[0];
  v9 = *(_QWORD*)(a1 + 2520);
  *(_QWORD*)(a1 + 2512) = GameData_212d7e0[0] + 2;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
    *(_QWORD*)(a1 + 2520) = 0;
  }
  v10 = *(_QWORD*)(a1 + 2504);
  *(_QWORD*)(a1 + 2496) = v2 + 2;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    *(_QWORD*)(a1 + 2504) = 0;
  }
  v11 = *(_QWORD*)(a1 + 2488);
  *(_QWORD*)(a1 + 2480) = v4 + 2;
  if (v11 != 0) {
    List_93b820(v11);
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v12);
    *(_QWORD*)(a1 + 2488) = 0;
  }
  v13 = *(_QWORD*)(a1 + 2472);
  *(_QWORD*)(a1 + 2464) = v8 + 2;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    *(_QWORD*)(a1 + 2472) = 0;
  }
  v14 = *(_QWORD*)(a1 + 2440);
  if (v14 != 0) {
    v15 = *(_QWORD*)v6;
    *(_QWORD*)(a1 + 2448) = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(v15 + v16);
  }
  v17 = *(_QWORD*)(a1 + 2416);
  if (v17 != 0) {
    v18 = *(_QWORD*)v6;
    *(_QWORD*)(a1 + 2424) = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(v18 + v19);
  }
  GameRoutine_8ee700(a1 + 2200);
  GameRoutine_8ee700(a1 + 1984);
  GameRoutine_8ee700(a1 + 1768);
  GameRoutine_8ee700(a1 + 1552);
  GameRoutine_8ee700(a1 + 1336);
  GameRoutine_8ee700(a1 + 1120);
  GameRoutine_8ee700(a1 + 904);
  GameRoutine_8ee700(a1 + 688);
  GameRoutine_8ee700(a1 + 472);
  GameRoutine_8ee700(a1 + 256);
  v20 = *(_QWORD**)(a1 + 232);
  *(_QWORD*)(a1 + 208) = &GameData_1fab9a8;
  if (v20 != nullptr) {
    do {
      v21 = (_QWORD*)*v20;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
        v22 = 128;
      }
      else {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v22);
      v20 = v21;
    } while (v21 != nullptr);
  }
  v23 = *(_QWORD*)(a1 + 216);
  *(_QWORD*)(a1 + 216) = 0;
  if (v23 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v24);
  }
  v25 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)(a1 + 192) = GameData_2130db8[0] + 2;
  *(_QWORD*)(a1 + 200) = 0;
  if (v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 8LL))(v25);
  }
  result = *(_QWORD*)(a1 + 184);
  *(_QWORD*)(a1 + 176) = GameData_212db90[0] + 2;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    *(_QWORD*)(a1 + 184) = 0;
  }
  *(_QWORD*)(a1 + 112) = GameData_212dea8 + 2;
  if ((*(_BYTE*)(a1 + 120) & 1) != 0 && *(_QWORD*)(a1 + 136) != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v27 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v27);
  }
  v28 = *(_QWORD**)(a1 + 88);
  if (v28 != nullptr) {
    do {
      v29 = (_QWORD*)*v28;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
        v30 = 128;
      }
      else {
        v30 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v30);
      v28 = v29;
    } while (v29 != nullptr);
  }
  v31 = *(_QWORD*)(a1 + 72);
  *(_QWORD*)(a1 + 72) = 0;
  if (v31 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v32 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v32);
  }
  v33 = *(_QWORD**)(a1 + 48);
  if (v33 != nullptr) {
    do {
      v34 = (_QWORD*)*v33;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
        v35 = 128;
      }
      else {
        v35 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v35);
      v33 = v34;
    } while (v34 != nullptr);
  }
  v36 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = 0;
  if (v36 != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v37 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v37);
  }
  v38 = *(_QWORD*)(a1 + 8);
  if (v38 != 0) {
    v39 = *(_QWORD*)v6;
    *(_QWORD*)(a1 + 16) = v38;
    v40 = 128;
    if (*(_QWORD*)(v39 + 200) == 0) {
      v40 = 56;
    }
    return nn_mem_StandardAllocator_Free(v39 + v40);
  }
  return result;
}

#pragma GCC visibility pop
