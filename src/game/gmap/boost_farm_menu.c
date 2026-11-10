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
__int64 BoostFarmMenu_DeletingDestructor(_QWORD* a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_gmap_anonymous_BoostFarmMenuItem_vtable[])();
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64* GameData_212c878[6];
__int64 game_gmap_BoostFarmMenu_CreateBind_lambda0_Invoke(__int64 a1, int* a2);

__int64 BoostFarmMenu_DeletingDestructor(_QWORD* a1)
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

__int64 game_gmap_BoostFarmMenu_CreateBind_lambda0_Invoke(__int64 a1, int* a2)
{
  __int64 v2;
  int v4;
  __int64 result;
  __int64 v6;
  __int64 v7;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 24LL))(
          *(_QWORD*)(v2 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
        *(_QWORD*)(v2 + 280));
  }
  result = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v2 + 280) + 152LL))(
      *(_QWORD*)(v2 + 280),
      *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                 8LL *
                     *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                    game_TransporterConst_List_instance__ptr
                                                                        [0] +
                                                                8LL) +
                                                     8LL) +
                                          12LL * v4 + 4)));
  if ((result & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 8);
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        88, 16, 0);
    *(_WORD*)(v7 + 16) = 0;
    *(_QWORD*)(v7 + 48) = 0;
    *(_QWORD*)(v7 + 56) = 0;
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 0;
    *(_DWORD*)(v7 + 40) = v4;
    *(_WORD*)(v7 + 80) = 257;
    *(_BYTE*)(v7 + 82) = 1;
    *(_QWORD*)v7 = game_gmap_anonymous_BoostFarmMenuItem_vtable;
    *(_QWORD*)(v7 + 8) = 0;
    return BasicMenuCursor_16e0c00(v6, v7);
  }
  return result;
}

#pragma GCC visibility pop
