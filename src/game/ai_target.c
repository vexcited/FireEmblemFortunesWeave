#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_201efc8[])();
extern __int64 GameData_22400e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2240790;
__int64 AITarget_Destructor_alt1(__int64 result) __asm__("AITarget_Destructor");
__int64 AITarget_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "AITarget_DeletingDestructor");
__int64 GameRoutine_844950(_QWORD, _QWORD);
__int64 GameRoutine_8450e0(_QWORD, _QWORD, _QWORD);
__int64 AITarget_Destructor_1274380_alt1(__int64 result) __asm__(
    "AITarget_Destructor_1274380");
__int64 game_AITarget_EnumerateAssist_lambda0_Invoke(__int64 result,
                                                     __int64 a2);
__int64 game_AITarget_EnumerateSub_lambda0_Invoke(__int64 a1, __int64 a2);
_QWORD* Image_72bf60(_QWORD* result, __int64, __int64, int);
__int64* game_UnitPool_Get(_BYTE*);
__int64 ITarget_773420(__int64*, __int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*GameData_1f94290[])();
extern __int64 (*GameData_201f178[])();
extern __int64 (*GameData_201f1f8[])();
extern __int64 (*GameData_201f278[])();
extern __int64 (*GameData_201f2f8[])();
extern __int64 (*GameData_201f378[])();
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 game_AITarget_EnumerateTalk(__int64 a1, __int64 a2, int a3, int a4);
__int64 game_AITarget_EnumerateAssist(__int64 a1, __int64 a2, int a3, int a4,
                                      unsigned int a5);
__int64 AITarget_1275a80(__int64 a1, __int64 a2, unsigned int a3, int a4,
                         __int64 a5, char a6);
__int64 game_AITarget_EnumerateEscape(__int64 a1, __int64 a2, int a3, int a4);
__int64 game_AITarget_EnumerateCannon(__int64 a1, __int64 a2, __int64 a3);
__int64 ITarget_773420_alt1(__int64, __int64) __asm__("ITarget_773420");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void AITarget_Destructor(_QWORD* a1);
void AITarget_DeletingDestructor(_QWORD* a1);
void AITarget_Destructor_1274380(_QWORD* a1);
__int64* GameHr_845560(__int64* result);
__int64 GameRoutine_845bc0(__int64, __int64);
__int64 ITarget_775580(__int64 (**)(), char*, _QWORD*);
extern __int64 (*GameData_201f3f8[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce98[2];
extern __int64* game_g_empty_item_ptr;
__int64 AITarget_1276580(__int64 a1, int a2);

void AITarget_Destructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = (_QWORD*)a1[3090];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v5, (__int64)v1);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = a1[3088];
  a1[3088] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v7, v6);
  }
  v8 = (_QWORD*)a1[1547];
  if (v8 != nullptr) {
    do {
      v9 = (_QWORD*)*v8;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v10 = 128;
      }
      else {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v10, (__int64)v8);
      v8 = v9;
    } while (v9 != nullptr);
  }
  v11 = a1[1545];
  a1[1545] = 0;
  if (v11 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v12, v11);
  }
  a1[7] = GameData_201efc8;
  if ((_QWORD*)GameData_22400e8 == a1) {
    GameData_22400e8 = 0;
    GameData_2240790 = 0;
  }
}

void AITarget_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = (_QWORD*)a1[3090];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v5, (__int64)v1);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = a1[3088];
  a1[3088] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v7, v6);
  }
  v8 = (_QWORD*)a1[1547];
  if (v8 != nullptr) {
    do {
      v9 = (_QWORD*)*v8;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v10 = 128;
      }
      else {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v10, (__int64)v8);
      v8 = v9;
    } while (v9 != nullptr);
  }
  v11 = a1[1545];
  a1[1545] = 0;
  if (v11 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v12, v11);
  }
  a1[7] = GameData_201efc8;
  if ((_QWORD*)GameData_22400e8 == a1) {
    GameData_22400e8 = 0;
    GameData_2240790 = 0;
  }
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v13 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v13, (__int64)a1);
}

void AITarget_Destructor_1274380(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = (_QWORD*)a1[3083];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v5, (__int64)v1);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = a1[3081];
  a1[3081] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v7, v6);
  }
  v8 = (_QWORD*)a1[1540];
  if (v8 != nullptr) {
    do {
      v9 = (_QWORD*)*v8;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v10 = 128;
      }
      else {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v10, (__int64)v8);
      v8 = v9;
    } while (v9 != nullptr);
  }
  v11 = a1[1538];
  a1[1538] = 0;
  if (v11 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v12, v11);
  }
  *a1 = GameData_201efc8;
  if ((_QWORD*)GameData_22400e8 == a1 - 7) {
    GameData_22400e8 = 0;
    GameData_2240790 = 0;
  }
}

__int64 game_AITarget_EnumerateTalk(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  struct {
    _QWORD v33[4];
    _QWORD* v34;
  } v33_;

  v4 = a1 + 24576;
  *(_BYTE*)(a1 + 8) = 0;
  *(_BYTE*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 12) = 0;
  *(_QWORD*)(a1 + 17) = 0;
  *(_DWORD*)(a1 + 12356) = 0;
  *(_DWORD*)(a1 + 28) = -1;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0xFFFFFFFF00000000LL;
  if (*(_QWORD*)(a1 + 12384) != 0) {
    v9 = *(_QWORD**)(a1 + 12376);
    if (v9 != nullptr) {
      v10 = fw_memory_g_heap_manager_ptr;
      do {
        v11 = (_QWORD*)*v9;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v10 + v12, (__int64)v9);
        v9 = v11;
      } while (v11 != nullptr);
    }
    v13 = *(_QWORD*)(a1 + 12368);
    *(_QWORD*)(a1 + 12376) = 0;
    if (v13 != 0) {
      v14 = v13 & 7;
      if (v13 >= 8) {
        v16 = v13 & 0xFFFFFFFFFFFFFFF8LL;
        v15 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v15) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v15 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v15 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v15 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v15 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v15 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v15 + 48) = 0;
          v17 = *(_QWORD*)(a1 + 12360) + 8 * v15;
          v15 += 8;
          *(_QWORD*)(v17 + 56) = 0;
        } while (v16 != v15);
      }
      else {
        v15 = 0;
      }
      if (v14 != 0) {
        v18 = 8 * v15;
        do {
          --v14;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + v18) = 0;
          v18 += 8;
        } while (v14 != 0);
      }
    }
    *(_QWORD*)(a1 + 12384) = 0;
  }
  v19 = *(_QWORD*)(a1 + 24728);
  *(_DWORD*)(a1 + 12400) = 0;
  *(_DWORD*)(v4 + 124) = 0;
  if (v19 != 0) {
    v20 = *(_QWORD**)(a1 + 24720);
    if (v20 != nullptr) {
      v21 = fw_memory_g_heap_manager_ptr;
      do {
        v22 = (_QWORD*)*v20;
        if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v21 + v23, (__int64)v20);
        v20 = v22;
      } while (v22 != nullptr);
    }
    v24 = *(_QWORD*)(a1 + 24712);
    *(_QWORD*)(a1 + 24720) = 0;
    if (v24 != 0) {
      v25 = v24 & 7;
      if (v24 >= 8) {
        v27 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        v26 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v26) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v26 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v26 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v26 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v26 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v26 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v26 + 48) = 0;
          v28 = *(_QWORD*)(a1 + 24704) + 8 * v26;
          v26 += 8;
          *(_QWORD*)(v28 + 56) = 0;
        } while (v27 != v26);
      }
      else {
        v26 = 0;
      }
      if (v25 != 0) {
        v29 = 8 * v26;
        do {
          --v25;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + v29) = 0;
          v29 += 8;
        } while (v25 != 0);
      }
    }
    *(_QWORD*)(a1 + 24728) = 0;
  }
  *(_DWORD*)(v4 + 168) = 0;
  if (a2 != 0) {
    *(_BYTE*)(a1 + 8) = *(_BYTE*)(a2 + 2088);
    *(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 592);
  }
  else {
    *(_BYTE*)(a1 + 8) = 0;
  }
  *(_DWORD*)(a1 + 12) = a3;
  *(_DWORD*)(a1 + 16) = a4;
  *(_BYTE*)(a1 + 24) = 2;
  v33_.v34 = v33_.v33;
  v33_.v33[0] = GameData_201f178;
  v33_.v33[1] = a1;
  v30 = ITarget_773420_alt1(a1, (__int64)v33_.v33);
  if (v33_.v34 == v33_.v33) {
    v31 = 32;
    goto LABEL_40;
  }
  if (v33_.v34 != nullptr) {
    v31 = 40;
  LABEL_40:
    (*(void (**)(__int64))(*v33_.v34 + v31))((__int64)v33_.v34);
  }
  return v30 & 1;
}

__int64 game_AITarget_EnumerateAssist(__int64 a1, __int64 a2, int a3, int a4,
                                      unsigned int a5)
{
  _BYTE* v5;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  __int64* v34;
  __int16 v35;
  char v36;
  __int64 v37;
  struct {
    _QWORD v41[4];
    _QWORD* v42;
  } v41_;

  *(_BYTE*)(a1 + 8) = 0;
  v5 = (_BYTE*)(a1 + 8);
  v9 = a1 + 24576;
  *(_BYTE*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  v10 = a1 + 32;
  *(_QWORD*)(a1 + 12) = 0;
  *(_QWORD*)(a1 + 17) = 0;
  *(_DWORD*)(a1 + 12356) = 0;
  *(_DWORD*)(a1 + 28) = -1;
  *(_QWORD*)(a1 + 40) = 0xFFFFFFFF00000000LL;
  if (*(_QWORD*)(a1 + 12384) != 0) {
    v11 = *(_QWORD**)(a1 + 12376);
    if (v11 != nullptr) {
      v12 = fw_memory_g_heap_manager_ptr;
      do {
        v13 = (_QWORD*)*v11;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v12 + v14, (__int64)v11);
        v11 = v13;
      } while (v13 != nullptr);
    }
    v15 = *(_QWORD*)(a1 + 12368);
    *(_QWORD*)(a1 + 12376) = 0;
    if (v15 != 0) {
      v16 = v15 & 7;
      if (v15 >= 8) {
        v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
        v17 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v17) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v17 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v17 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v17 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v17 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v17 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v17 + 48) = 0;
          v19 = *(_QWORD*)(a1 + 12360) + 8 * v17;
          v17 += 8;
          *(_QWORD*)(v19 + 56) = 0;
        } while (v18 != v17);
      }
      else {
        v17 = 0;
      }
      if (v16 != 0) {
        v20 = 8 * v17;
        do {
          --v16;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + v20) = 0;
          v20 += 8;
        } while (v16 != 0);
      }
    }
    *(_QWORD*)(a1 + 12384) = 0;
  }
  v21 = *(_QWORD*)(a1 + 24728);
  *(_DWORD*)(a1 + 12400) = 0;
  *(_DWORD*)(v9 + 124) = 0;
  if (v21 != 0) {
    v22 = *(_QWORD**)(a1 + 24720);
    if (v22 != nullptr) {
      v23 = fw_memory_g_heap_manager_ptr;
      do {
        v24 = (_QWORD*)*v22;
        if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v23 + v25, (__int64)v22);
        v22 = v24;
      } while (v24 != nullptr);
    }
    v26 = *(_QWORD*)(a1 + 24712);
    *(_QWORD*)(a1 + 24720) = 0;
    if (v26 != 0) {
      v27 = v26 & 7;
      if (v26 >= 8) {
        v29 = v26 & 0xFFFFFFFFFFFFFFF8LL;
        v28 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v28) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v28 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v28 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v28 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v28 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v28 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v28 + 48) = 0;
          v30 = *(_QWORD*)(a1 + 24704) + 8 * v28;
          v28 += 8;
          *(_QWORD*)(v30 + 56) = 0;
        } while (v29 != v28);
      }
      else {
        v28 = 0;
      }
      if (v27 != 0) {
        v31 = 8 * v28;
        do {
          --v27;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + v31) = 0;
          v31 += 8;
        } while (v27 != 0);
      }
    }
    *(_QWORD*)(a1 + 24728) = 0;
  }
  *(_DWORD*)(v9 + 168) = 0;
  if (a2 == 0) {
    *(_BYTE*)(a1 + 8) = 0;
    *(_DWORD*)(a1 + 28) = a5;
    *(_DWORD*)(a1 + 12) = a3;
    *(_DWORD*)(a1 + 16) = a4;
    *(_BYTE*)(a1 + 24) = 4;
    if ((a5 & 0x80000000) == 0) {
      goto LABEL_40;
    }
    goto LABEL_39;
  }
  v32 = *(unsigned __int8*)(a2 + 2088);
  *(_BYTE*)(a1 + 8) = v32;
  v33 = *(_DWORD*)(a2 + 592);
  *(_DWORD*)(a1 + 12) = a3;
  *(_DWORD*)(a1 + 28) = a5;
  *(_DWORD*)(a1 + 16) = a4;
  *(_DWORD*)(a1 + 20) = v33;
  *(_BYTE*)(a1 + 24) = 4;
  if ((a5 & 0x80000000) != 0) {
  LABEL_39:
    *(_QWORD*)v10 = 0;
    goto LABEL_40;
  }
  if (v32 != 0 && game_UnitPool_Get(v5) != nullptr) {
    v34 = &game_UnitPool_Get(v5)[a5];
    v35 = *((_WORD*)v34 + 414);
    *(_BYTE*)(v10 + 2) = *((_BYTE*)v34 + 830);
    *(_WORD*)v10 = v35;
    *(_BYTE*)(a1 + 35) = *((_BYTE*)v34 + 831);
    *(_DWORD*)(a1 + 36) = *((_DWORD*)v34 + 208);
  }
LABEL_40:
  v41_.v41[2] = a5;
  v41_.v41[0] = GameData_201f1f8;
  v41_.v41[1] = a1;
  v41_.v42 = v41_.v41;
  v36 = ITarget_773420_alt1(a1, (__int64)v41_.v41);
  if (v41_.v42 == v41_.v41) {
    v37 = 32;
    goto LABEL_44;
  }
  if (v41_.v42 != nullptr) {
    v37 = 40;
  LABEL_44:
    (*(void (**)(__int64))(*v41_.v42 + v37))((__int64)v41_.v42);
  }
  return v36 & 1;
}

__int64 AITarget_1275a80(__int64 a1, __int64 a2, unsigned int a3, int a4,
                         __int64 a5, char a6)
{
  __int64 v6;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  _QWORD* v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  bool v38;
  char v39;
  char v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  char* v44;
  _QWORD* v45;
  unsigned int v46;
  __int64 v47;
  struct {
    _QWORD v50[4];
    _QWORD* v51;
  } v50_;
  int v52;
  unsigned int v53;

  v6 = a1 + 24576;
  *(_BYTE*)(a1 + 8) = 0;
  *(_BYTE*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 12) = 0;
  *(_QWORD*)(a1 + 17) = 0;
  *(_DWORD*)(a1 + 28) = -1;
  *(_DWORD*)(a1 + 12356) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0xFFFFFFFF00000000LL;
  if (*(_QWORD*)(a1 + 12384) != 0) {
    v12 = *(_QWORD**)(a1 + 12376);
    if (v12 != nullptr) {
      v13 = fw_memory_g_heap_manager_ptr;
      do {
        v14 = (_QWORD*)*v12;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v15, (__int64)v12);
        v12 = v14;
      } while (v14 != nullptr);
    }
    v16 = *(_QWORD*)(a1 + 12368);
    *(_QWORD*)(a1 + 12376) = 0;
    if (v16 != 0) {
      v17 = v16 & 7;
      if (v16 >= 8) {
        v19 = v16 & 0xFFFFFFFFFFFFFFF8LL;
        v18 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v18) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v18 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v18 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v18 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v18 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v18 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v18 + 48) = 0;
          v20 = *(_QWORD*)(a1 + 12360) + 8 * v18;
          v18 += 8;
          *(_QWORD*)(v20 + 56) = 0;
        } while (v19 != v18);
      }
      else {
        v18 = 0;
      }
      if (v17 != 0) {
        v21 = 8 * v18;
        do {
          --v17;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + v21) = 0;
          v21 += 8;
        } while (v17 != 0);
      }
    }
    *(_QWORD*)(a1 + 12384) = 0;
  }
  v22 = *(_QWORD*)(a1 + 24728);
  *(_DWORD*)(a1 + 12400) = 0;
  *(_DWORD*)(v6 + 124) = 0;
  if (v22 != 0) {
    v23 = *(_QWORD**)(a1 + 24720);
    if (v23 != nullptr) {
      v24 = fw_memory_g_heap_manager_ptr;
      do {
        v25 = (_QWORD*)*v23;
        if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v24 + v26, (__int64)v23);
        v23 = v25;
      } while (v25 != nullptr);
    }
    v27 = *(_QWORD*)(a1 + 24712);
    *(_QWORD*)(a1 + 24720) = 0;
    if (v27 != 0) {
      v28 = v27 & 7;
      if (v27 >= 8) {
        v30 = v27 & 0xFFFFFFFFFFFFFFF8LL;
        v29 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v29) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v29 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v29 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v29 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v29 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v29 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v29 + 48) = 0;
          v31 = *(_QWORD*)(a1 + 24704) + 8 * v29;
          v29 += 8;
          *(_QWORD*)(v31 + 56) = 0;
        } while (v30 != v29);
      }
      else {
        v29 = 0;
      }
      if (v28 != 0) {
        v32 = 8 * v29;
        do {
          --v28;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + v32) = 0;
          v32 += 8;
        } while (v28 != 0);
      }
    }
    *(_QWORD*)(a1 + 24728) = 0;
  }
  *(_DWORD*)(v6 + 168) = 0;
  if (a2 != 0) {
    *(_BYTE*)(a1 + 8) = *(_BYTE*)(a2 + 2088);
    *(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 592);
  }
  else {
    *(_BYTE*)(a1 + 8) = 0;
  }
  *(_DWORD*)(a1 + 12) = a3;
  *(_DWORD*)(a1 + 16) = a4;
  *(_BYTE*)(a1 + 24) = a6;
  if (a5 != 0) {
    v33 = *(_DWORD*)(a1 + 40) & 0xFFFFF000 | *(_WORD*)(a5 + 16) & 0xFFF;
  }
  else {
    v33 = *(_DWORD*)(a1 + 40) & 0xFFFFF000;
  }
  *(_DWORD*)(a1 + 40) = v33;
  v34 = *(_QWORD**)(GameData_21ca300 + 96);
  LODWORD(v35) = a3 + 32 * a4;
  if ((unsigned int)v35 >= 0x400) {
    v35 = 0;
  }
  else {
    v35 = (unsigned int)v35;
  }
  v36 = *((unsigned __int8*)v34 + v35 + 8);
  if (v36 != 0 &&
      ((v37 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v36, v36 <= 0xFA)
           ? (v38 = v37 == 2224)
           : (v38 = true),
       !v38 && *(_QWORD*)(v37 - 1832) != 0)) {
    v39 = 1;
    if (a5 == 0) {
      goto LABEL_57;
    }
  }
  else {
    v39 = 0;
    if (a5 == 0) {
      goto LABEL_57;
    }
  }
  if (*(_BYTE*)(a5 + 105) != 1) {
    goto LABEL_55;
  }
  if (*(_BYTE*)(a5 + 106) != 3) {
    v39 = 1;
  }
  if ((v39 & 1) == 0) {
    Image_72bf60(v34, a2, a3, a4);
    LODWORD(a5) = 1;
  }
  else {
  LABEL_55:
    LODWORD(a5) = 0;
  }
LABEL_57:
  v50_.v50[0] = GameData_201f278;
  v50_.v50[1] = a1;
  v50_.v51 = v50_.v50;
  v40 = ITarget_773420_alt1(a1, (__int64)v50_.v50);
  if (v50_.v51 == v50_.v50) {
    v41 = 32;
    goto LABEL_61;
  }
  if (v50_.v51 != nullptr) {
    v41 = 40;
  LABEL_61:
    (*(void (**)(__int64))(*v50_.v51 + v41))((__int64)v50_.v51);
  }
  if ((_DWORD)a5 == 0 || a2 == 0) {
    return v40 & 1;
  }
  if ((a3 & 0x80000000) != 0) {
    a3 = *(char*)(a2 + 584);
    v42 = *(_QWORD*)(GameData_21ca300 + 96);
    if ((a4 & 0x80000000) == 0) {
      goto LABEL_66;
    }
  }
  else {
    v42 = *(_QWORD*)(GameData_21ca300 + 96);
    if ((a4 & 0x80000000) == 0) {
      goto LABEL_66;
    }
  }
  a4 = *(char*)(a2 + 585);
LABEL_66:
  v50_.v50[2] = a2;
  v43 = *(char**)(a2 + 600);
  v44 = *(char**)(a2 + 608);
  v45 = v50_.v50;
  v50_.v50[0] = GameData_1f94290;
  v50_.v50[1] = v42;
  v50_.v51 = v50_.v50;
  if (v43 != v44) {
    do {
      v46 = a3 + *v43;
      v52 = a4 + v43[1];
      v53 = v46;
      if (v50_.v51 == nullptr) {
        GameRoutine_60a310();
      }
      (*(void (**)(_QWORD*, unsigned int*, int*))(*v50_.v51 + 48LL))(
          v50_.v51, &v53, &v52);
      v43 += 4;
    } while (v43 != v44);
    v45 = v50_.v51;
    if (v50_.v51 != v50_.v50) {
      if (v50_.v51 != nullptr) {
        v47 = 40;
      LABEL_73:
        (*(void (**)(__int64))(*v45 + v47))((__int64)v45);
      }
      return v40 & 1;
    }
  }
  v47 = 32;
  goto LABEL_73;
}

__int64 game_AITarget_EnumerateEscape(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  struct {
    _QWORD v33[4];
    _QWORD* v34;
  } v33_;

  v4 = a1 + 24576;
  *(_BYTE*)(a1 + 8) = 0;
  *(_BYTE*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 12) = 0;
  *(_QWORD*)(a1 + 17) = 0;
  *(_DWORD*)(a1 + 12356) = 0;
  *(_DWORD*)(a1 + 28) = -1;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0xFFFFFFFF00000000LL;
  if (*(_QWORD*)(a1 + 12384) != 0) {
    v9 = *(_QWORD**)(a1 + 12376);
    if (v9 != nullptr) {
      v10 = fw_memory_g_heap_manager_ptr;
      do {
        v11 = (_QWORD*)*v9;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v10 + v12, (__int64)v9);
        v9 = v11;
      } while (v11 != nullptr);
    }
    v13 = *(_QWORD*)(a1 + 12368);
    *(_QWORD*)(a1 + 12376) = 0;
    if (v13 != 0) {
      v14 = v13 & 7;
      if (v13 >= 8) {
        v16 = v13 & 0xFFFFFFFFFFFFFFF8LL;
        v15 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v15) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v15 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v15 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v15 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v15 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v15 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v15 + 48) = 0;
          v17 = *(_QWORD*)(a1 + 12360) + 8 * v15;
          v15 += 8;
          *(_QWORD*)(v17 + 56) = 0;
        } while (v16 != v15);
      }
      else {
        v15 = 0;
      }
      if (v14 != 0) {
        v18 = 8 * v15;
        do {
          --v14;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + v18) = 0;
          v18 += 8;
        } while (v14 != 0);
      }
    }
    *(_QWORD*)(a1 + 12384) = 0;
  }
  v19 = *(_QWORD*)(a1 + 24728);
  *(_DWORD*)(a1 + 12400) = 0;
  *(_DWORD*)(v4 + 124) = 0;
  if (v19 != 0) {
    v20 = *(_QWORD**)(a1 + 24720);
    if (v20 != nullptr) {
      v21 = fw_memory_g_heap_manager_ptr;
      do {
        v22 = (_QWORD*)*v20;
        if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v21 + v23, (__int64)v20);
        v20 = v22;
      } while (v22 != nullptr);
    }
    v24 = *(_QWORD*)(a1 + 24712);
    *(_QWORD*)(a1 + 24720) = 0;
    if (v24 != 0) {
      v25 = v24 & 7;
      if (v24 >= 8) {
        v27 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        v26 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v26) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v26 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v26 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v26 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v26 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v26 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v26 + 48) = 0;
          v28 = *(_QWORD*)(a1 + 24704) + 8 * v26;
          v26 += 8;
          *(_QWORD*)(v28 + 56) = 0;
        } while (v27 != v26);
      }
      else {
        v26 = 0;
      }
      if (v25 != 0) {
        v29 = 8 * v26;
        do {
          --v25;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + v29) = 0;
          v29 += 8;
        } while (v25 != 0);
      }
    }
    *(_QWORD*)(a1 + 24728) = 0;
  }
  *(_DWORD*)(v4 + 168) = 0;
  if (a2 != 0) {
    *(_BYTE*)(a1 + 8) = *(_BYTE*)(a2 + 2088);
    *(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 592);
  }
  else {
    *(_BYTE*)(a1 + 8) = 0;
  }
  *(_DWORD*)(a1 + 12) = a3;
  *(_DWORD*)(a1 + 16) = a4;
  *(_BYTE*)(a1 + 24) = 22;
  v33_.v34 = v33_.v33;
  v33_.v33[0] = GameData_201f2f8;
  v33_.v33[1] = a1;
  v30 = ITarget_773420_alt1(a1, (__int64)v33_.v33);
  if (v33_.v34 == v33_.v33) {
    v31 = 32;
    goto LABEL_40;
  }
  if (v33_.v34 != nullptr) {
    v31 = 40;
  LABEL_40:
    (*(void (**)(__int64))(*v33_.v34 + v31))((__int64)v33_.v34);
  }
  return v30 & 1;
}

__int64 game_AITarget_EnumerateCannon(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  char v31;
  __int64 v32;
  struct {
    _QWORD v34[4];
    _QWORD* v35;
  } v34_;

  v3 = a1 + 24576;
  *(_BYTE*)(a1 + 8) = 0;
  *(_BYTE*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 12) = 0;
  *(_QWORD*)(a1 + 17) = 0;
  *(_DWORD*)(a1 + 12356) = 0;
  *(_DWORD*)(a1 + 28) = -1;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0xFFFFFFFF00000000LL;
  if (*(_QWORD*)(a1 + 12384) != 0) {
    v7 = *(_QWORD**)(a1 + 12376);
    if (v7 != nullptr) {
      v8 = fw_memory_g_heap_manager_ptr;
      do {
        v9 = (_QWORD*)*v7;
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v8 + v10, (__int64)v7);
        v7 = v9;
      } while (v9 != nullptr);
    }
    v11 = *(_QWORD*)(a1 + 12368);
    *(_QWORD*)(a1 + 12376) = 0;
    if (v11 != 0) {
      v12 = v11 & 7;
      if (v11 >= 8) {
        v14 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        v13 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v13) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v13 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v13 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v13 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v13 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v13 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v13 + 48) = 0;
          v15 = *(_QWORD*)(a1 + 12360) + 8 * v13;
          v13 += 8;
          *(_QWORD*)(v15 + 56) = 0;
        } while (v14 != v13);
      }
      else {
        v13 = 0;
      }
      if (v12 != 0) {
        v16 = 8 * v13;
        do {
          --v12;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + v16) = 0;
          v16 += 8;
        } while (v12 != 0);
      }
    }
    *(_QWORD*)(a1 + 12384) = 0;
  }
  v17 = *(_QWORD*)(a1 + 24728);
  *(_DWORD*)(a1 + 12400) = 0;
  *(_DWORD*)(v3 + 124) = 0;
  if (v17 != 0) {
    v18 = *(_QWORD**)(a1 + 24720);
    if (v18 != nullptr) {
      v19 = fw_memory_g_heap_manager_ptr;
      do {
        v20 = (_QWORD*)*v18;
        if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v19 + v21, (__int64)v18);
        v18 = v20;
      } while (v20 != nullptr);
    }
    v22 = *(_QWORD*)(a1 + 24712);
    *(_QWORD*)(a1 + 24720) = 0;
    if (v22 != 0) {
      v23 = v22 & 7;
      if (v22 >= 8) {
        v25 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        v24 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v24 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v24 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v24 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v24 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v24 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v24 + 48) = 0;
          v26 = *(_QWORD*)(a1 + 24704) + 8 * v24;
          v24 += 8;
          *(_QWORD*)(v26 + 56) = 0;
        } while (v25 != v24);
      }
      else {
        v24 = 0;
      }
      if (v23 != 0) {
        v27 = 8 * v24;
        do {
          --v23;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + v27) = 0;
          v27 += 8;
        } while (v23 != 0);
      }
    }
    *(_QWORD*)(a1 + 24728) = 0;
  }
  *(_DWORD*)(v3 + 168) = 0;
  if (a2 != 0) {
    *(_BYTE*)(a1 + 8) = *(_BYTE*)(a2 + 2088);
    *(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 592);
    v28 = *(char*)(a2 + 585);
    *(_DWORD*)(a1 + 12) = *(char*)(a2 + 584);
    *(_DWORD*)(a1 + 16) = v28;
  }
  else {
    *(_BYTE*)(a1 + 8) = 0;
  }
  v29 = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 56LL))(a3);
  v30 = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 64LL))(a3);
  *(_DWORD*)(a1 + 12) = v29;
  *(_DWORD*)(a1 + 16) = v30;
  *(_BYTE*)(a1 + 24) = 27;
  *(_DWORD*)(a1 + 44) = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 32LL))(a3);
  v34_.v34[0] = GameData_201f378;
  v34_.v34[1] = a1;
  v34_.v35 = v34_.v34;
  v31 = ITarget_773420_alt1(a1, (__int64)v34_.v34);
  if (v34_.v35 == v34_.v34) {
    v32 = 32;
    goto LABEL_40;
  }
  if (v34_.v35 != nullptr) {
    v32 = 40;
  LABEL_40:
    (*(void (**)(__int64))(*v34_.v35 + v32))((__int64)v34_.v35);
  }
  return v31 & 1;
}

__int64 AITarget_1276580(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64* v17;
  unsigned int v18;
  int v19;
  _QWORD* v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  bool v24;
  bool v25;
  __int64* v26;
  unsigned int v27;
  __int64* v28;
  __int64 v29;
  char v30;
  int v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  char v35;
  unsigned int v36;
  __int64 v37;
  unsigned int v38;
  bool v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  char* v43;
  char v44;
  _QWORD* v45;
  unsigned int v46;
  __int64 v47;
  struct {
    _QWORD v49[4];
    _QWORD* v50;
  } v49_;
  struct {
    int v51;
    unsigned int v52;
  } v51_;

  {
    v2 = *(_QWORD*)(a1 + 24728);
    __asm__ volatile("" ::"r"(v2));
  }
  v3 = a1 + 24576;
  *(_DWORD*)(a1 + 24700) = 0;
  if (v2 != 0) {
    {
      v6 = *(_QWORD**)(a1 + 24720);
      __asm__ volatile("" ::"r"(v6));
    }
    if (v6 != nullptr) {
      v7 = fw_memory_g_heap_manager_ptr;
      do {
        v8 = (_QWORD*)*v6;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v7 + v9, (__int64)v6);
        v6 = v8;
      } while (v8 != nullptr);
    }
    {
      v10 = *(_QWORD*)(a1 + 24712);
      __asm__ volatile("" ::"r"(v10));
    }
    *(_QWORD*)(a1 + 24720) = 0;
    if (v10 != 0) {
      v11 = v10 & 7;
      if (v10 >= 8) {
        v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        v12 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v12) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v12 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v12 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v12 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v12 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v12 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + 8 * v12 + 48) = 0;
          {
            v14 = *(_QWORD*)(a1 + 24704) + 8 * v12;
            __asm__ volatile("" ::"r"(v14));
          }
          v12 += 8;
          *(_QWORD*)(v14 + 56) = 0;
        } while (v13 != v12);
      }
      else {
        v12 = 0;
      }
      if (v11 != 0) {
        v15 = 8 * v12;
        do {
          --v11;
          *(_QWORD*)(*(_QWORD*)(a1 + 24704) + v15) = 0;
          v15 += 8;
        } while (v11 != 0);
      }
    }
    *(_QWORD*)(a1 + 24728) = 0;
  }
  {
    v16 = *(unsigned __int8*)(a1 + 8);
    __asm__ volatile("" ::"r"(v16));
  }
  *(_DWORD*)(v3 + 168) = 0;
  if (v16 != 0) {
    v17 = game_UnitPool_Get((_BYTE*)(a1 + 8));
  }
  else {
    v17 = nullptr;
  }
  {
    v18 = *(_DWORD*)(a1 + 12);
    __asm__ volatile("" ::"r"(v18));
  }
  {
    v19 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v19));
  }
  {
    v20 = *(_QWORD**)(*GameData_212ce98[0] + 96);
    __asm__ volatile("" ::"r"(v20));
  }
  LODWORD(v21) = v18 + 32 * v19;
  if ((unsigned int)v21 >= 0x400) {
    v21 = 0;
  }
  else {
    v21 = (unsigned int)v21;
  }
  {
    v22 = *((unsigned __int8*)v20 + v21 + 8);
    __asm__ volatile("" ::"r"(v22));
  }
  v25 = true;
  if (v22 != 0) {
    {
      v23 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v22;
      __asm__ volatile("" ::"r"(v23));
    }
    v24 = v22 > 0xFA || v23 == 2224;
    if (!v24 && *(_QWORD*)(v23 - 1832) != 0) {
      v25 = false;
    }
  }
  v26 = game_g_empty_item_ptr;
  {
    v27 = *(unsigned __int16*)(a1 + 32);
    __asm__ volatile("" ::"r"(v27));
  }
  {
    v28 = GameData_212c878[0];
    __asm__ volatile("" ::"r"(v28));
  }
  if (*(_WORD*)(a1 + 32) == 0) {
    v27 = *(unsigned __int16*)game_g_empty_item_ptr;
    __asm__ volatile("" ::"r"(v27));
  }
  {
    v29 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v27);
    __asm__ volatile("" ::"r"(v29));
  }
  if ((unsigned int)*(unsigned __int8*)(v29 + 72) - 5 > 1) {
    goto LABEL_38;
  }
  v30 = !v25;
  if (*(_BYTE*)(v29 + 73) != 9) {
    v30 = 1;
  }
  if ((v30 & 1) != 0) {
  LABEL_38:
    v31 = 0;
  }
  else {
    Image_72bf60(v20, (__int64)v17, v18, v19);
    v31 = 1;
  }
  v49_.v49[0] = GameData_201f3f8;
  v49_.v49[1] = a1;
  v49_.v50 = v49_.v49;
  ITarget_775580((__int64 (**)(void))a1, (char*)(a1 + 12LL * a2 + 68),
                 v49_.v49);
  if (v49_.v50 == v49_.v49) {
    v32 = 32;
  }
  else {
    if (v49_.v50 == nullptr) {
      goto LABEL_44;
    }
    v32 = 40;
  }
  (*(void (**)(__int64))(*v49_.v50 + v32))((__int64)v49_.v50);
LABEL_44:
  GameHr_845560((__int64*)(a1 + 12408));
  if (*(_BYTE*)(a1 + 8) != 0) {
    v33 = game_UnitPool_Get((_BYTE*)(a1 + 8));
  }
  else {
    v33 = nullptr;
  }
  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    {
      v34 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
      __asm__ volatile("" ::"r"(v34));
    }
    if (v33 == nullptr) {
      goto LABEL_65;
    }
  }
  else {
    {
      v36 = *(unsigned __int16*)(a1 + 32);
      __asm__ volatile("" ::"r"(v36));
    }
    if (*(_WORD*)(a1 + 32) == 0) {
      v36 = *(unsigned __int16*)v26;
      __asm__ volatile("" ::"r"(v36));
    }
    {
      v37 = *(_QWORD*)(*(_QWORD*)(*v28 + 64) + 8LL * v36);
      __asm__ volatile("" ::"r"(v37));
    }
    {
      v34 = *(_QWORD*)(v37 + 192);
      __asm__ volatile("" ::"r"(v34));
    }
    {
      v38 = *(unsigned __int8*)(v37 + 72);
      __asm__ volatile("" ::"r"(v38));
    }
    v39 = v34 == 0 || v38 > 7;
    if (v39 || *(_BYTE*)(v34 + 105) == 0) {
      goto LABEL_65;
    }
    if (*(_BYTE*)(v34 + 104) == 2) {
      v34 = 0;
    }
    if (v33 == nullptr) {
    LABEL_65:
      v35 = GameRoutine_845bc0(a1 + 12408, a1);
      if (v31 == 0) {
        return v35 & 1;
      }
      goto LABEL_66;
    }
  }
  if (v34 == 0 || *(_BYTE*)(v33[55] + 16) == 0 ||
      *(_BYTE*)(v33[55] + 16) == 3 || *(_BYTE*)(v34 + 104) != 6) {
    goto LABEL_65;
  }
  {
    v35 = (signed __int32)*(_DWORD*)(v3 + 124) > 0;
    __asm__ volatile("" ::"r"(v35));
  }
  if (v31 == 0) {
    return v35 & 1;
  }
LABEL_66:
  if (v17 != nullptr) {
    {
      v40 = *GameData_212ce98[0];
      __asm__ volatile("" ::"r"(v40));
    }
    if ((v18 & 0x80000000) != 0) {
      {
        v18 = *((char*)v17 + 584);
        __asm__ volatile("" ::"r"(v18));
      }
      {
        v41 = *(_QWORD*)(v40 + 96);
        __asm__ volatile("" ::"r"(v41));
      }
      if ((v19 & 0x80000000) == 0) {
        goto LABEL_69;
      }
    }
    else {
      {
        v41 = *(_QWORD*)(v40 + 96);
        __asm__ volatile("" ::"r"(v41));
      }
      if ((v19 & 0x80000000) == 0) {
      LABEL_69:
        v49_.v49[2] = v17;
        {
          v42 = (char*)v17[75];
          __asm__ volatile("" ::"r"(v42));
        }
        {
          v43 = (char*)v17[76];
          __asm__ volatile("" ::"r"(v43));
        }
        v44 = v35;
        v49_.v49[0] = GameData_1f94290;
        v49_.v49[1] = v41;
        v45 = v49_.v49;
        v49_.v50 = v49_.v49;
        if (v42 == v43) {
          goto LABEL_75;
        }
        do {
          v46 = v18 + *v42;
          v51_.v51 = v19 + v42[1];
          v51_.v52 = v46;
          if (v49_.v50 == nullptr) {
            GameRoutine_60a310();
          }
          (*(void (**)(_QWORD*, unsigned int*, int*))(*v49_.v50 + 48LL))(
              v49_.v50, &v51_.v52, &v51_.v51);
          v42 += 4;
        } while (v42 != v43);
        v45 = v49_.v50;
        if (v49_.v50 == v49_.v49) {
        LABEL_75:
          v47 = 32;
        }
        else {
          if (v49_.v50 == nullptr) {
          LABEL_77:
            v35 = v44;
            return v35 & 1;
          }
          v47 = 40;
        }
        (*(void (**)(_QWORD*))(*v45 + v47))(v45);
        goto LABEL_77;
      }
    }
    {
      v19 = *((char*)v17 + 585);
      __asm__ volatile("" ::"r"(v19));
    }
    goto LABEL_69;
  }
  return v35 & 1;
}

__int64 game_AITarget_EnumerateAssist_lambda0_Invoke(__int64 result, __int64 a2)
{
  unsigned int v2;
  __int64 v3;
  __int64 v5;

  v2 = *(_DWORD*)(a2 + 8);
  if (((v2 >> *(_DWORD*)(result + 16)) & 1) != 0) {
    v3 = *(_QWORD*)(result + 8);
    *(_DWORD*)(v3 + 12400) |= v2;
    v5 = GameRoutine_8450e0(v3 + 64, (unsigned int)*(char*)(a2 + 1),
                            (unsigned int)*(char*)(a2 + 2));
    return GameRoutine_844950(v5, a2);
  }
  return result;
}

__int64 game_AITarget_EnumerateSub_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v2 + 24744) |= *(_DWORD*)(a2 + 8);
  v4 = GameRoutine_8450e0(v2 + 12408, (unsigned int)*(char*)(a2 + 1),
                          (unsigned int)*(char*)(a2 + 2));
  return GameRoutine_844950(v4, a2);
}

#pragma GCC visibility pop
