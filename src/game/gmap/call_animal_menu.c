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
_QWORD* game_TransporterConst_List_Impl_EachData(_QWORD* result, __int64,
                                                 __int64);
bool GameRoutine_19ef8e0(_QWORD*, _QWORD*);
extern __int64* GameData_212d7f0[5];
extern __int64* game_g_empty_item_ptr;
bool game_gmap_CallAnimalMenu_SortAndFilter_lambda1_Invoke(__int64 a1,
                                                           __int64* a2,
                                                           __int64* a3);

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

bool game_gmap_CallAnimalMenu_SortAndFilter_lambda1_Invoke(__int64 a1,
                                                           __int64* a2,
                                                           __int64* a3)
{
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64* v8;
  __int64 v10;
  unsigned int v11;
  __int64* v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  int v17;
  char v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  _QWORD* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  struct {
    _QWORD v32[2];
    int v33;
    int v34;
    char v35;
  } v32_;
  __int64 v36;
  struct {
    _QWORD v37[2];
    int v38;
    int v39;
    char v40;
    char gap73_[7];
    _QWORD* v41;
  } v37_;
  __int64 v44;

  v5 = *a2;
  if (*a2 != 0) {
    v6 = *a3;
    if (*a3 == 0) {
      return true;
    }
    if (v5 != v6) {
      v7 = *(_DWORD*)(v5 + 40);
      if ((v7 & 0x80000000) != 0) {
        v8 = game_g_empty_item_ptr;
      }
      else {
        v8 =
            (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                 game_TransporterConst_List_instance__ptr
                                                     [0] +
                                             8LL) +
                                  8LL) +
                       12LL * v7 + 4);
      }
      v10 = *v8;
      v11 = *(_DWORD*)(v6 + 40);
      v44 = v10;
      if ((v11 & 0x80000000) != 0) {
        v12 = game_g_empty_item_ptr;
      }
      else {
        v12 =
            (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                 game_TransporterConst_List_instance__ptr
                                                     [0] +
                                             8LL) +
                                  8LL) +
                       12LL * v11 + 4);
      }
      v13 = *v12;
      v14 = *(unsigned __int8*)(a1 + 8);
      v36 = v13;
      if (v14 == 2) {
        v19 = (unsigned __int16)v10;
        v20 = GameData_212c878[0];
        v21 = *(_QWORD*)(*GameData_212c878[0] + 64);
        v22 = *(_QWORD*)(v21 + 8 * v19);
        if ((((0x10000000000LL << *(_BYTE*)(v22 + 72)) |
              (1LL << *(_BYTE*)(v22 + 73))) &
             0xFFBFFFFFFFA39FFFLL) != 0) {
          goto LABEL_18;
        }
        v23 = (unsigned __int16)v13;
        if ((((0x10000000000LL
               << *(_BYTE*)(*(_QWORD*)(v21 + 8LL * (unsigned __int16)v13) +
                            72LL)) |
              (1LL << *(_BYTE*)(*(_QWORD*)(v21 + 8LL * (unsigned __int16)v13) +
                                73LL))) &
             0xFFBFFFFFFFA39FFFLL) != 0) {
          goto LABEL_18;
        }
        v24 = (__int64*)game_TransporterConst_List_instance__ptr[0];
        LODWORD(v32_.v32[0]) = 0;
        v25 =
            *(_QWORD**)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                        8LL);
        v26 = GameData_212d7f0[0];
        v37_.v41 = v37_.v37;
        v37_.v37[0] = GameData_212d7f0[0] + 2;
        v37_.v37[1] = v32_.v32;
        game_TransporterConst_List_Impl_EachData(v25, v22, (__int64)v37_.v37);
        if (v37_.v41 == v37_.v37) {
          v27 = 32;
        }
        else {
          if (v37_.v41 == nullptr) {
            goto LABEL_25;
          }
          v27 = 40;
        }
        (*(void (**)(__int64))(*v37_.v41 + v27))((__int64)v37_.v41);
      LABEL_25:
        v28 = *v24;
        v16 = v32_.v32[0];
        LODWORD(v32_.v32[0]) = 0;
        v29 = *(_QWORD**)(v28 + 8);
        v30 = *(_QWORD*)(*(_QWORD*)(*v20 + 64) + 8 * v23);
        v37_.v41 = v37_.v37;
        v37_.v37[0] = v26 + 2;
        v37_.v37[1] = v32_.v32;
        game_TransporterConst_List_Impl_EachData(v29, v30, (__int64)v37_.v37);
        if (v37_.v41 == v37_.v37) {
          v31 = 32;
        }
        else {
          if (v37_.v41 == nullptr) {
          LABEL_30:
            v17 = v32_.v32[0];
            goto LABEL_15;
          }
          v31 = 40;
        }
        (*(void (**)(__int64))(*v37_.v41 + v31))((__int64)v37_.v41);
        goto LABEL_30;
      }
      if (v14 != 1) {
      LABEL_18:
        v17 = 0;
        v18 = 0;
        v16 = 0;
        goto LABEL_19;
      }
      v15 = *(_QWORD*)(*GameData_212c878[0] + 64);
      v16 = *(unsigned __int8*)(*(_QWORD*)(v15 + 8LL * (unsigned __int16)v10) +
                                96LL);
      v17 = *(unsigned __int8*)(*(_QWORD*)(v15 + 8LL * (unsigned __int16)v13) +
                                96LL);
    LABEL_15:
      v18 = 1;
    LABEL_19:
      v37_.v38 = 0;
      v37_.v39 = v16;
      v37_.v40 = v18;
      v32_.v33 = 0;
      v32_.v34 = v17;
      v32_.v35 = v18;
      v37_.v37[0] = &v44;
      v37_.v37[1] = 0;
      v32_.v32[0] = &v36;
      v32_.v32[1] = 0;
      return GameRoutine_19ef8e0(v37_.v37, v32_.v32);
    }
  }
  return false;
}

#pragma GCC visibility pop
