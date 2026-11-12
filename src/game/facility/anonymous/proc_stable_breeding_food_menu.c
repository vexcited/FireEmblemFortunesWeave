#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_15d2910(_QWORD, _QWORD);
__int64 GameRoutine_15e5fa0(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_208fa50;
extern __int64 game_GameModeData_instance_;
extern __int64 game_kVariableHubFacilityForced;
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e008[9];
__int64 ProcStableBreedingFoodMenu_Unknown88(__int64 a1);
__int64 ProcStableBreedingFoodMenu_Unknown101(_QWORD* a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
unsigned __int16* GameRoutine_16bfbb0(__int64, int, unsigned __int8*);
__int64
game_facility_anonymous_ProcStableBreedingFoodMenu_AddItemList_closure_Invoke(
    __int64 a1, int* a2);
bool game_facility_anonymous_ProcStableBreedingFoodMenu_SortAndFilter_closure_Invoke(
    __int64 a1, _QWORD* a2);
_QWORD*
BasicMenuCursor_16e0c00_alt1(_QWORD* result,
                             __int64) __asm__("BasicMenuCursor_16e0c00");
__int64 GameRoutine_6e3b50(__int64 result, _QWORD*);
__int64 GameRoutine_89aac0(_QWORD*, _QWORD*);
__int64 GameRoutine_89aac0_alt1(_QWORD, _QWORD) __asm__("GameRoutine_89aac0");
__int64 GameRoutine_92b980(__int64, unsigned __int8);
__int64 GameRoutine_92b980_alt1(_QWORD, _QWORD,
                                long double) __asm__("GameRoutine_92b980");
__int64 GameRoutine_930b90(__int64, __int64);
__int64 GameRoutine_94b860(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_TransporterConst_List_Impl_GetStock(unsigned __int16*);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
bool GameRoutine_19ef8e0(_QWORD*, _QWORD*);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_208fcd8[])();
extern __int64 (*game_facility_anonymous_BreedingFoodMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_EmptyFoodMenuItem_vtable[])();
extern __int64* GameData_212c8a0;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212cf88[4];
extern __int64 GameData_21c99b8;
extern __int64 game_TransporterConst_List_instance__ptr[6];
unsigned __int16* ProcStableBreedingFoodMenu_16bfbb0_alt1(
    __int64, int,
    unsigned __int8*) __asm__("ProcStableBreedingFoodMenu_16bfbb0");
__int64 game_facility_anonymous_ProcStableBreedingFoodMenu_AddItemList_alt1(
    _QWORD* a1) __asm__("game_facility_anonymous_ProcStableBreedingFoodMenu_"
                        "AddItemList");
unsigned __int16* ProcStableBreedingFoodMenu_16bfbb0(__int64 a1, int a2,
                                                     unsigned __int8* a3,
                                                     long double a4);
bool game_facility_anonymous_ProcStableBreedingFoodMenu_SortAndFilter_closure_Invoke_16c0740(
    __int64 a1, _QWORD* a2, _BYTE** a3);
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void BasicMenuCursor_16e0c00_alt2(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_anonymous_ProcStableBreedingFoodMenu_AddItemList(_QWORD* a1);

__int64 ProcStableBreedingFoodMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_208fa50, 0);
    if (result != 0) {
      v3 = result;
      GameRoutine_1560070((void*)&v7, a1 + 848, "L_InfoDetail");
      result = v8;
      if (v8 != 0) {
        v4 = std___1___shared_weak_count_lock(v8);
        v5 = v7;
        result = v8;
        if (v8 != 0) {
          result = std___1___shared_weak_count___release_weak(v8);
        }
        if (v4 != 0 && v5 != 0) {
          v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
          result = GameRoutine_15d2910(v5, v6);
        }
        else if (v4 == 0) {
          return result;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak(v4);
        }
      }
    }
  }
  return result;
}

__int64 ProcStableBreedingFoodMenu_Unknown101(_QWORD* a1)
{
  __int64 v2;
  __int64 result;

  if (game_GameModeData_instance_ != 0) {
    v2 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48),
        &game_kVariableHubFacilityForced);
    if (v2 != 0 && *(_DWORD*)(v2 + 32) != 0) {
      return 1;
    }
  }
  *(_DWORD*)(*GameData_212dcd0 + 20) = -1;
  if (a1[42] == 0) {
    return 3;
  }
  if (a1[133] != 0) {
    GameRoutine_15e5fa0();
  }
  (*(void (**)(_QWORD*))(a1[132] + 104LL))(a1 + 132);
  result = a1[42];
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 208LL))(result);
  }
  return result;
}

void game_facility_anonymous_ProcStableBreedingFoodMenu_AddItemList(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;
  struct {
    __int64 v25;
    int v26;
  } v25_;
  _QWORD** v27;
  struct {
    _QWORD* v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    _BYTE* v32;
  } v28_;
  char v33;
  int v34;

  v2 = *(int*)(*GameData_212dcd0 + 16);
  WORD1(v25_.v25) = 0;
  HIDWORD(v25_.v25) = 0;
  v3 = *(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL);
  v27 = &v28_.v28;
  v28_.v28 = nullptr;
  v28_.v29 = 0;
  v28_.v30 = 0;
  v28_.v31 = 0;
  v28_.v32 = nullptr;
  GameRoutine_930b90((__int64)&v25_.v25, *(_QWORD*)(v3 + 120) + (v2 << 6));
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
  *(_WORD*)(v5 + 16) = 0;
  *(_DWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)v5 = game_facility_anonymous_EmptyFoodMenuItem_vtable;
  *(_DWORD*)(v5 + 80) = 65793;
  v6 = a1[43];
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  *(_QWORD*)(v5 + 8) = a1;
  a1[43] = v5;
  v7 = GameRoutine_92b980(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                     8LL * (unsigned __int8)v25_.v25),
                          BYTE1(v25_.v25));
  v23_.v23[0] = 0;
  if (v7 != 0) {
    v8 = *(unsigned __int16*)(v7 + 16);
    HIDWORD(v23_.v23[0]) = 1;
    LOWORD(v23_.v23[0]) = v8;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v8) +
                  73LL) == 17) {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v9 = game_map_MapRandom_instance__ptr[0];
      v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v12 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v9 + 1) = v10;
      v13 = (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9) = v11;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 4) = v13;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      HIDWORD(v23_.v23[0]) =
          (16 * ((_WORD)v13 -
                 1000 * (unsigned __int16)((v13 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
  }
  v34 = GameRoutine_89aac0(
      *(_QWORD**)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL),
      v23_.v23);
  v14 = *v4;
  v33 = 0;
  v15 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v14, 40, 16, 0);
  v23_.v24 = v15;
  *v15 = GameData_208fcd8;
  v15[1] = a1;
  v15[2] = &v25_.v25;
  v15[3] = &v34;
  v15[4] = &v33;
  GameRoutine_94b860((__int64)v23_.v23);
  if (v23_.v24 == v23_.v23) {
    v17 = 32;
  }
  else {
    if (v23_.v24 == nullptr) {
      goto LABEL_11;
    }
    v17 = 40;
  }
  (*(void (**)(_QWORD*))(*v23_.v24 + v17))(v23_.v24);
LABEL_11:
  v18 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_14;
  }
  v19 = game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48),
      (unsigned __int64*)&game_kVariableHubFacilityForced);
  if (v19 != 0) {
    v18 = *(_DWORD*)(v19 + 32) != 0;
  LABEL_14:
    if ((v18 & 1) != 0) {
      goto LABEL_17;
    }
  }
  if ((v33 & 1) == 0) {
    v20 = fw_memory_HeapManager_Allocate_alt1(*v4, 88, 16, 0);
    ProcStableBreedingFoodMenu_16bfbb0_alt1(v20, v34,
                                            (unsigned __int8*)&v25_.v25);
    BasicMenuCursor_16e0c00_alt2(a1, v20);
  }
LABEL_17:
  v25_.v25 = 0;
  v25_.v26 = 0;
  if ((v28_.v30 & 1) != 0) {
    *v28_.v32 = 0;
    v28_.v31 = 0;
  }
  else {
    LOWORD(v28_.v30) = 0;
  }
  GameRoutine_6e3b50_alt1((__int64)&v27, v28_.v28);
  v28_.v28 = nullptr;
  v28_.v29 = 0;
  v27 = &v28_.v28;
  if ((v28_.v30 & 1) != 0) {
    v21 = v28_.v32;
    if (v28_.v32 != nullptr) {
      v22 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v4 + v22, (__int64)v28_.v32);
      v21 = v28_.v28;
    }
  }
  else {
    v21 = nullptr;
  }
  GameRoutine_6e3b50_alt1((__int64)&v27, v21);
}

unsigned __int16* ProcStableBreedingFoodMenu_16bfbb0(__int64 a1, int a2,
                                                     unsigned __int8* a3,
                                                     long double a4)
{
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  unsigned __int16* result;
  _BYTE* v22;
  __int64 v23;
  __int64 v24;

  *(_WORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)a1 = game_facility_anonymous_BreedingFoodMenuItem_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  *(_WORD*)(a1 + 84) = 0;
  *(_DWORD*)(a1 + 40) = a2;
  *(_DWORD*)(a1 + 80) = 65793;
  v7 = GameData_212c8a0;
  v8 = GameRoutine_92b980_alt1(
      *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * *a3), a3[1], a4);
  v24 = 0;
  if (v8 != 0) {
    v9 = *(unsigned __int16*)(v8 + 16);
    HIDWORD(v24) = 1;
    LOWORD(v24) = v9;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v9) +
                  73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
      v10 = game_map_MapRandom_instance__ptr[0];
      v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v12 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v13 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v10 + 1) = v11;
      v14 = (v13 >> 8) ^ (v12 >> 19) ^ v13 ^ v12;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10) = v12;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10 + 4) = v14;
      nn_os_UnlockMutex(&game_g_random_mutex);
      HIDWORD(v24) =
          (16 * ((_WORD)v14 -
                 1000 * (unsigned __int16)((v14 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
  }
  if ((unsigned int)GameRoutine_89aac0_alt1(
          *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                     8LL),
          &v24) == a2) {
    *(_BYTE*)(a1 + 83) = 1;
  }
  v15 = *(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8LL * *a3);
  v16 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                   8LL * *(unsigned __int16*)(*(__int64 (**)(__int64))(
                             *(_QWORD*)a1 + 560LL))(a1));
  v18 = false;
  if (v16 != 0 && *(_BYTE*)(v16 + 73) == 20) {
    v17 = *(unsigned __int8*)(v16 + 94);
    if (v17 <= 2 && *(_BYTE*)(v15 + v17 + 104) == 2) {
      v18 = true;
    }
  }
  v19 = *v7;
  *(_BYTE*)(a1 + 85) = v18;
  v20 = *(_QWORD*)(*(_QWORD*)(v19 + 64) + 8LL * *a3);
  result =
      (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  v22 = *(_BYTE**)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *result);
  if (v22 != nullptr) {
    LOBYTE(v22) = v22[73] == 20 &&
                  ((unsigned __int64)(v23 = (unsigned __int8)v22[94]) > 2 ||
                   *(_BYTE*)(v20 + v23 + 104) != 0) &&
                  v22[95] == *(_BYTE*)(v20 + 107);
  }
  *(_BYTE*)(a1 + 84) = (_BYTE)v22;
  return result;
}

__int64

game_facility_anonymous_ProcStableBreedingFoodMenu_AddItemList_closure_Invoke(
    __int64 a1, int* a2)
{
  int v2;
  __int64 v3;
  __int64 v5;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (*a2 == **(_DWORD**)(a1 + 24)) {
    **(_BYTE**)(a1 + 32) = 1;
  }
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      88, 16, 0);
  GameRoutine_16bfbb0(v5, v2, *(unsigned __int8**)(a1 + 16));
  return BasicMenuCursor_16e0c00(v3, v5);
}

bool game_facility_anonymous_ProcStableBreedingFoodMenu_SortAndFilter_closure_Invoke(
    __int64 a1, _QWORD* a2)
{
  return *(_BYTE*)(a1 + 8) == 3 ||
         *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                        8LL *
                                            *(unsigned __int16*)(*(
                                                __int64 (**)(_QWORD))(
                                                *(_QWORD*)*a2 + 560LL))(*a2)) +
                             94LL) == *(unsigned __int8*)(a1 + 8);
}

bool game_facility_anonymous_ProcStableBreedingFoodMenu_SortAndFilter_closure_Invoke_16c0740(
    __int64 a1, _QWORD* a2, _BYTE** a3)
{
  _BYTE* v3;
  _BYTE* v4;
  __int64 v8;
  __int64 v9;
  int v10;
  char v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  struct {
    _QWORD v17[2];
    int v18;
    int v19;
    char v20;
  } v17_;
  struct {
    _QWORD v21[2];
    int v22;
    int v23;
    char v24;
  } v21_;
  __int64 v25;
  __int64 v26;

  v3 = (_BYTE*)*a2;
  if (*a2 == 0) {
    return false;
  }
  v4 = *a3;
  if (*a3 == nullptr) {
    return true;
  }
  if (v3 == v4) {
    return false;
  }
  if ((v3[83] & 1) == 0) {
    if ((v4[83] & 1) != 0) {
      return false;
    }
    v8 = *X8CALL_X0(_QWORD*,
                    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                        *(_QWORD*)v3 + 560LL))((void*)v3, *a2));
    v26 = v8;
    v9 = *(_QWORD*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v4 + 560LL))(v4);
    v10 = *(unsigned __int8*)(a1 + 8);
    v25 = v9;
    switch (v10) {
    case 3:
      v16 = *(_QWORD*)(*GameData_212c878[0] + 64);
      if ((((0x10000000000LL << *(
                 _BYTE*)(*(_QWORD*)(v16 + 8LL * (unsigned __int16)v8) + 72LL)) |
            (1LL << *(_BYTE*)(*(_QWORD*)(v16 + 8LL * (unsigned __int16)v8) +
                              73LL))) &
           0xFFBFFFFFFFA39FFFLL) != 0 ||
          (((0x10000000000LL << *(
                 _BYTE*)(*(_QWORD*)(v16 + 8LL * (unsigned __int16)v9) + 72LL)) |
            (1LL << *(_BYTE*)(*(_QWORD*)(v16 + 8LL * (unsigned __int16)v9) +
                              73LL))) &
           0xFFBFFFFFFFA39FFFLL) != 0) {
        goto LABEL_17;
      }
      v13 = game_TransporterConst_List_Impl_GetStock((unsigned __int16*)&v26);
      v14 = game_TransporterConst_List_Impl_GetStock((unsigned __int16*)&v25);
      break;
    case 2:
      v15 = *(_QWORD*)(*GameData_212c878[0] + 64);
      v13 = *(unsigned __int8*)(*(_QWORD*)(v15 + 8LL * (unsigned __int16)v8) +
                                96LL);
      v14 = *(unsigned __int8*)(*(_QWORD*)(v15 + 8LL * (unsigned __int16)v9) +
                                96LL);
      break;
    case 1:
      v11 = 0;
      v12 = *(_QWORD*)(*GameData_212c878[0] + 64);
      v13 = *(unsigned __int8*)(*(_QWORD*)(v12 + 8LL * (unsigned __int16)v8) +
                                95LL);
      v14 = *(unsigned __int8*)(*(_QWORD*)(v12 + 8LL * (unsigned __int16)v9) +
                                95LL);
    LABEL_18:
      v17_.v18 = 0;
      v17_.v19 = v14;
      v21_.v22 = 0;
      v21_.v23 = v13;
      v21_.v24 = v11;
      v17_.v20 = v11;
      v21_.v21[0] = &v26;
      v21_.v21[1] = 0;
      v17_.v17[0] = &v25;
      v17_.v17[1] = 0;
      return GameRoutine_19ef8e0(v21_.v21, v17_.v17);
    default:
    LABEL_17:
      v14 = 0;
      v11 = 0;
      v13 = 0;
      goto LABEL_18;
    }
    v11 = 1;
    goto LABEL_18;
  }
  return true;
}

#pragma GCC visibility pop
