#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_17048e0(__int64*);
__int64 GameRoutine_1566440(_QWORD, _QWORD);
__int64 GameRoutine_1873720(void);
__int64 GameRoutine_1874560(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcItemSellMenu_Destructor(__int64 a1);
__int64 ProcItemSellMenu_DeletingDestructor(__int64 a1);
__int64 ProcItemSellMenu_Unknown154(_QWORD* a1, __int64 a2);
__int64 ProcItemSellMenu_Unknown160(__int64 a1, __int64* a2);

__int64 ProcItemSellMenu_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 1096);
  *(_QWORD*)(a1 + 1104) = v1;
  if (v1 != 0) {
    v2 = a1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
    a1 = v2;
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

__int64 ProcItemSellMenu_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 1096);
  *(_QWORD*)(a1 + 1104) = v1;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v1);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a1);
}

__int64 ProcItemSellMenu_Unknown154(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64* v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  a1[133] = a2;
  GameRoutine_1873720();
  GameRoutine_17048e0(a1 + 136);
  game_menu_BasicMenu_Unknown16defa0(a1);
  v3 = a1[132];
  v8 = 0;
  v9 = 0;
  v7 = 0;
  (*(void (**)(_QWORD*, __int64*))(v3 + 80))(a1 + 132, &v7);
  (*(void (**)(_QWORD*, __int64*))(a1[132] + 88LL))(a1 + 132, &v7);
  if (v7 == v8) {
    v4 = nullptr;
  }
  else {
    v4 = &v7;
  }
  result = GameRoutine_1566440(v4, 0);
  if (v7 != 0) {
    v8 = v7;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v7);
  }
  return result;
}

__int64 ProcItemSellMenu_Unknown160(__int64 a1, __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  v2 = a2[1];
  v3 = a2[2];
  if (v2 >= v3) {
    v6 = *a2;
    v7 = v2 - *a2;
    v8 = 1 - 0x3333333333333333LL * (v7 >> 3);
    if (v8 > 0x666666666666666LL) {
      GameRoutine_874520(a1);
    }
    v9 = fw_memory_g_heap_manager_ptr;
    v10 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v3 - v6) >> 3);
    if (2 * v10 > v8) {
      v8 = 2 * v10;
    }
    if (v10 >= 0x333333333333333LL) {
      v11 = 0x666666666666666LL;
    }
    else {
      v11 = v8;
    }
    if (v11 != 0) {
      if (v11 > 0x666666666666666LL) {
        GameRoutine_60a210(a1);
      }
      v12 = a1;
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v11, 16, 0);
    }
    else {
      v12 = a1;
      v13 = 0;
    }
    v14 = v13 + v7;
    *(_QWORD*)v14 = "MultiSelection";
    *(_QWORD*)(v14 + 8) = "MID_KeyHelp_MultiSelection";
    *(_BYTE*)(v14 + 28) = 0;
    *(_QWORD*)(v14 + 32) = 0;
    *(_BYTE*)(v14 + 16) = 1;
    v15 = v13 + 40 * v11;
    v5 = v13 + v7 + 40;
    *(_QWORD*)(v14 + 20) = 0x200000007LL;
    memcpy(v13, v6, v7);
    *a2 = v13;
    a2[1] = v5;
    a2[2] = v15;
    if (v6 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v16, v6);
    }
    a1 = v12;
  }
  else {
    *(_BYTE*)(v2 + 28) = 0;
    *(_QWORD*)(v2 + 32) = 0;
    *(_QWORD*)v2 = "MultiSelection";
    *(_QWORD*)(v2 + 8) = "MID_KeyHelp_MultiSelection";
    v5 = v2 + 40;
    *(_BYTE*)(v2 + 16) = 1;
    *(_QWORD*)(v2 + 20) = 0x200000007LL;
  }
  a2[1] = v5;
  return GameRoutine_1874560(a1, a2, 1);
}

#pragma GCC visibility pop
