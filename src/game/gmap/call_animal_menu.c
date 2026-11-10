#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_21319f8[8];
__int64 CallAnimalMenu_DeletingDestructor(_QWORD* a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_gmap_anonymous_CallAnimalMenuItem_vtable[])();
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_g_empty_item;
extern __int64* GameData_212c878[6];
__int64 game_gmap_CallAnimalMenu_CreateBind_lambda0_Invoke(__int64 a1, int* a2);
bool game_gmap_CallAnimalMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                           __int64 a2);

__int64 CallAnimalMenu_DeletingDestructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_21319f8[0];
  *a1 = GameData_21319f8[0] + 2;
  a1[22] = v2 + 149;
  a1[132] = v2 + 175;
  GameRoutine_155e140(a1 + 133);
  v3 = a1[145];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1564060(a1 + 139);
  GameRoutine_1563f90(a1 + 136, a1[137]);
  v4 = a1[134];
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a1);
}

__int64 game_gmap_CallAnimalMenu_CreateBind_lambda0_Invoke(__int64 a1, int* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      88, 16, 0);
  *(_WORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_DWORD*)(v4 + 40) = v3;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_QWORD*)v4 = game_gmap_anonymous_CallAnimalMenuItem_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  return BasicMenuCursor_16e0c00(v2, v4);
}

bool game_gmap_CallAnimalMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                           __int64 a2)
{
  int v2;
  unsigned int v4;
  __int64* v5;

  v2 = *(unsigned __int8*)(a1 + 8);
  if (v2 == 3) {
    return true;
  }
  v4 = *(_DWORD*)(*(_QWORD*)a2 + 40LL);
  if ((v4 & 0x80000000) != 0) {
    v5 = &game_g_empty_item;
  }
  else {
    v5 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                             game_TransporterConst_List_instance__ptr
                                                 [0] +
                                         8LL) +
                              8LL) +
                   12LL * v4 + 4);
  }
  return *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                        8LL * *(unsigned __int16*)v5) +
                             94LL) == v2;
}

#pragma GCC visibility pop
