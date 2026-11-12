#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_178b670(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 MapSortieTroopSequence_Unknown50(__int64 a1, __int64* a2);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 GameData_2131d50[16];
void GameRoutine_17869d0(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapSortieTroopSequence_DeletingDestructor(_QWORD* a1);

void MapSortieTroopSequence_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = GameData_2131d50[0] + 440;
  *a1 = GameData_2131d50[0] + 16;
  a1[22] = v2;
  v3 = a1[59];
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = (_QWORD*)a1[56];
  if (v4 == a1 + 52) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_8:
  v6 = a1[48];
  v7 = fw_memory_g_heap_manager_ptr;
  if (v6 != 0) {
    v8 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[49] = v6;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v8 + v9, v6);
  }
  GameRoutine_17869d0((__int64)a1);
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v10, (__int64)a1);
}

__int64 MapSortieTroopSequence_Unknown50(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;

  result = GameRoutine_178b670();
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      goto LABEL_34;
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        goto LABEL_35;
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
    }
    else {
      v13 = 0;
    }
    v14 = v13 + v8;
    *(_QWORD*)v14 = "SortieUnit";
    *(_QWORD*)(v14 + 8) = "MID_KeyHelp_Sortie_UnitSelect";
    *(_BYTE*)(v14 + 28) = 0;
    *(_QWORD*)(v14 + 32) = 0;
    *(_BYTE*)(v14 + 16) = 1;
    v15 = v13 + 40 * v12;
    v6 = v13 + v8 + 40;
    *(_QWORD*)(v14 + 20) = 0x200000000LL;
    result = memcpy(v13, v7, v8);
    *a2 = v13;
    a2[1] = v6;
    a2[2] = v15;
    if (v7 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v16, v7);
    }
  }
  else {
    *(_BYTE*)(v4 + 28) = 0;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = "SortieUnit";
    *(_QWORD*)(v4 + 8) = "MID_KeyHelp_Sortie_UnitSelect";
    v6 = v4 + 40;
    *(_BYTE*)(v4 + 16) = 1;
    *(_QWORD*)(v4 + 20) = 0x200000000LL;
  }
  v17 = a2[2];
  a2[1] = v6;
  if (v6 < v17) {
    *(_BYTE*)(v6 + 28) = 0;
    *(_QWORD*)(v6 + 32) = 0;
    *(_QWORD*)v6 = &GameData_1a9f09e;
    *(_QWORD*)(v6 + 8) = "MID_KeyHelp_ListChange";
    v18 = v6 + 40;
    *(_BYTE*)(v6 + 16) = 1;
    *(_QWORD*)(v6 + 20) = 0x200000007LL;
    goto LABEL_33;
  }
  v19 = *a2;
  v20 = v6 - *a2;
  v21 = 1 - 0x3333333333333333LL * (v20 >> 3);
  if (v21 > 0x666666666666666LL) {
  LABEL_34:
    GameRoutine_874520(result);
  }
  v22 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v17 - v19) >> 3);
  if (2 * v22 > v21) {
    v21 = 2 * v22;
  }
  if (v22 >= 0x333333333333333LL) {
    v23 = 0x666666666666666LL;
  }
  else {
    v23 = v21;
  }
  if (v23 != 0) {
    if (v23 <= 0x666666666666666LL) {
      v24 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v23,
                                           16, 0);
      goto LABEL_29;
    }
  LABEL_35:
    GameRoutine_60a210(result);
  }
  v24 = 0;

LABEL_29:
  v25 = v24 + v20;
  *(_QWORD*)v25 = &GameData_1a9f09e;
  *(_QWORD*)(v25 + 8) = "MID_KeyHelp_ListChange";
  *(_BYTE*)(v25 + 28) = 0;
  *(_QWORD*)(v25 + 32) = 0;
  *(_BYTE*)(v25 + 16) = 1;
  v26 = v24 + 40 * v23;
  v18 = v24 + v20 + 40;
  *(_QWORD*)(v25 + 20) = 0x200000007LL;
  result = memcpy(v24, v19, v20);
  *a2 = v24;
  a2[1] = v18;
  a2[2] = v26;
  if (v19 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v19);
  }

LABEL_33:
  a2[1] = v18;
  return result;
}

#pragma GCC visibility pop
