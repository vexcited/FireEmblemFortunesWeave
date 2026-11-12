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
__int64
Impl_Destructor_8ee1e0_alt1(__int64 a1) __asm__("Impl_Destructor_8ee1e0");
extern __int64* GameData_212df70[4];
__int64 Impl_8ee700_alt1(_QWORD* a1) __asm__("Impl_8ee700");
void List_93b820_alt1(__int64*) __asm__("List_93b820");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Impl_Destructor_8ee1e0(__int64 a1);
void Impl_8ee700(__int64* a1);

void Impl_Destructor_8ee1e0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
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
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;

  *(_QWORD*)a1 = game_GameConverge_Impl_vtable;
  v2 = GameData_212dd80[0];
  *(_QWORD*)(a1 + 2544) = GameData_212dd80[0] + 2;
  v3 = *(_QWORD*)(a1 + 2552);
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
    *(_QWORD*)(a1 + 2552) = 0;
  }
  v4 = GameData_212dda0[0];
  v5 = *(__int64**)(a1 + 2536);
  *(_QWORD*)(a1 + 2528) = GameData_212dda0[0] + 2;
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != nullptr) {
    List_93b820_alt1(v5);
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v7, (__int64)v5);
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
  v11 = *(__int64**)(a1 + 2488);
  *(_QWORD*)(a1 + 2480) = v4 + 2;
  if (v11 != nullptr) {
    List_93b820_alt1(v11);
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v12, (__int64)v11);
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
    nn_mem_StandardAllocator_Free_alt1(v15 + v16, v14);
  }
  v17 = *(_QWORD*)(a1 + 2416);
  if (v17 != 0) {
    v18 = *(_QWORD*)v6;
    *(_QWORD*)(a1 + 2424) = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v18 + v19, v17);
  }
  Impl_8ee700((__int64*)(a1 + 2200));
  Impl_8ee700((__int64*)(a1 + 1984));
  Impl_8ee700((__int64*)(a1 + 1768));
  Impl_8ee700((__int64*)(a1 + 1552));
  Impl_8ee700((__int64*)(a1 + 1336));
  Impl_8ee700((__int64*)(a1 + 1120));
  Impl_8ee700((__int64*)(a1 + 904));
  Impl_8ee700((__int64*)(a1 + 688));
  Impl_8ee700((__int64*)(a1 + 472));
  Impl_8ee700((__int64*)(a1 + 256));
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
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v22, (__int64)v20);
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
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v24, v23);
  }
  v25 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)(a1 + 192) = GameData_2130db8[0] + 2;
  *(_QWORD*)(a1 + 200) = 0;
  if (v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 8LL))(v25);
  }
  v26 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)(a1 + 176) = GameData_212db90[0] + 2;
  if (v26 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 8LL))(v26);
    *(_QWORD*)(a1 + 184) = 0;
  }
  *(_QWORD*)(a1 + 112) = GameData_212dea8 + 2;
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v27 = *(_QWORD*)(a1 + 136);
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v28, v27);
    }
  }
  v29 = *(_QWORD**)(a1 + 88);
  if (v29 != nullptr) {
    do {
      v30 = (_QWORD*)*v29;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
        v31 = 128;
      }
      else {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v31, (__int64)v29);
      v29 = v30;
    } while (v30 != nullptr);
  }
  v32 = *(_QWORD*)(a1 + 72);
  *(_QWORD*)(a1 + 72) = 0;
  if (v32 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v33, v32);
  }
  v34 = *(_QWORD**)(a1 + 48);
  if (v34 != nullptr) {
    do {
      v35 = (_QWORD*)*v34;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
        v36 = 128;
      }
      else {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v36, (__int64)v34);
      v34 = v35;
    } while (v35 != nullptr);
  }
  v37 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = 0;
  if (v37 != 0) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v38, v37);
  }
  v39 = *(_QWORD*)(a1 + 8);
  if (v39 != 0) {
    v40 = *(_QWORD*)v6;
    *(_QWORD*)(a1 + 16) = v39;
    v41 = 128;
    if (*(_QWORD*)(v40 + 200) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v40 + v41, v39);
  }
}

void Impl_8ee700(__int64* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  void (***v22)(_QWORD);
  bool v23;
  __int64 v24;
  __int64 v25;

  v2 = a1[25];
  a1[24] = (__int64)(GameData_212df70[0] + 2);
  a1[25] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = GameData_212dd80[0];
  v4 = a1[20];
  a1[19] = (__int64)(GameData_212dd80[0] + 2);
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
    a1[20] = 0;
  }
  v5 = GameData_212dda0[0];
  v6 = (__int64*)a1[18];
  a1[17] = (__int64)(GameData_212dda0[0] + 2);
  v7 = fw_memory_g_heap_manager_ptr;
  if (v6 != nullptr) {
    List_93b820_alt1(v6);
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v8, (__int64)v6);
    a1[18] = 0;
  }
  v9 = GameData_212d7e0[0];
  v10 = a1[16];
  a1[15] = (__int64)(GameData_212d7e0[0] + 2);
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    a1[16] = 0;
  }
  v11 = a1[14];
  a1[13] = (__int64)(v3 + 2);
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    a1[14] = 0;
  }
  v12 = (__int64*)a1[12];
  a1[11] = (__int64)(v5 + 2);
  if (v12 != nullptr) {
    List_93b820_alt1(v12);
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v13, (__int64)v12);
    a1[12] = 0;
  }
  v14 = a1[10];
  a1[9] = (__int64)(v9 + 2);
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
    a1[10] = 0;
  }
  v15 = (_QWORD*)a1[5];
  if (v15 != nullptr) {
    do {
      v16 = (_QWORD*)*v15;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
        v17 = 128;
      }
      else {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v17, (__int64)v15);
      v15 = v16;
    } while (v16 != nullptr);
  }
  v18 = a1[3];
  a1[3] = 0;
  if (v18 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v19, v18);
  }
  v20 = *a1;
  if (*a1 != 0) {
    v21 = a1[1];
    if (v20 == v21) {
      goto LABEL_34;
    }
    v22 = (void (***)(_QWORD))(v21 - 2224);
    do {
      (**v22)(v22);
      v23 = v22 == (void (***)(_QWORD))v20;
      v22 -= 278;
    } while (!v23);
    v24 = *a1;
    a1[1] = v20;
    v20 = v24;
    if (v24 != 0) {
    LABEL_34:
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v25, v20);
    }
  }
}

#pragma GCC visibility pop
