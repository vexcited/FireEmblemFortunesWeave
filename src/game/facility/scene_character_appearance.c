#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
__int64 game_facility_SceneCharacterAppearance_SetAccout_lambda0_Invoke_alt1(
    __int64 result,
    unsigned __int16* a2) __asm__("game_facility_SceneCharacterAppearance_"
                                  "SetAccout_lambda0_Invoke");
_QWORD* game_UnitPool_Find_6ead60(__int64*, _DWORD*);
_WORD* game_UnitItemList_EachItem(_WORD* result, __int64);
__attribute__((swiftcall)) void game_1391af0(PSEUDO_X8, __int64 result);
__attribute__((swiftcall)) void game_148f260(PSEUDO_X8, _QWORD);
__int64 GameRoutine_140f040(__int64*, __int64*);
__int64 GameRoutine_140f040_alt1(_QWORD, _QWORD) __asm__("GameRoutine_140f040");
__int64 GameRoutine_140f1a0(__int64*, __int64*);
__int64 GameRoutine_140f1a0_alt1(_QWORD, _QWORD) __asm__("GameRoutine_140f1a0");
__int64 GameRoutine_14101c0(void);
__int64 GameRoutine_14101c0_alt2(long double) __asm__("GameRoutine_14101c0");
__int64 GameRoutine_6c2b50(_QWORD);
__int64 GameRoutine_6d36d0(_QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_95f500(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SceneCharacterAppearance_140e910_alt1(__int64 result, char) __asm__(
    "SceneCharacterAppearance_140e910");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString(_QWORD);
__int64 game_Unit_SkillList_CountActive(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__n128
GameRoutine_140daf0_alt1(unsigned __int8*) __asm__("GameRoutine_140daf0");
__n128 nn_os_UnlockMutex(_QWORD);
char**
GameRoutine_14101c0_alt1(char** result, __int64, __int64,
                         unsigned __int64) __asm__("GameRoutine_14101c0");
extern _UNKNOWN GameData_1a8ec7c;
extern _UNKNOWN GameData_1a9e2f2;
extern _UNKNOWN GameData_21f4328;
extern _UNKNOWN game_g_random_mutex;
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1f92f88[])();
extern __int64 (*GameData_1f93088[])();
extern __int64 (*GameData_20394e0[])();
extern __int64 (*GameData_2039560[])();
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212f948[5];
extern __int64* GameData_2131170;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21c9988;
extern __int64 GameData_21f4018[];
extern __int64 GameData_2241820;
extern __int64 fw_memory_g_heap_manager;
extern int GameData_21f4320;
unsigned __int8* GameRoutine_140daf0(unsigned __int8* result);
_QWORD* SceneCharacterAppearance_140e910(_QWORD* result, char a2);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140ea90(PSEUDO_X8 x8_, _QWORD* a1, __int64 a2);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140ebb0(PSEUDO_X8 x8_, __int64* a1, __int64 a2);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140ed50(PSEUDO_X8 x8_, __int64* a1, _BYTE* a2);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140eea0(PSEUDO_X8 x8_, __int64* a1, __int64 a2);
__attribute__((swiftcall)) void SceneCharacterAppearance_140f320_alt1(
    PSEUDO_X8 x8_, __int64 a1,
    __int64 a2) __asm__("SceneCharacterAppearance_140f320");
__attribute__((swiftcall)) void SceneCharacterAppearance_140f650(PSEUDO_X8 x8_,
                                                                 __int64* a1,
                                                                 _QWORD* a2,
                                                                 __int64 a3);
__attribute__((swiftcall)) void SceneCharacterAppearance_140f750_alt1(
    PSEUDO_X8 x8_, unsigned __int8* result,
    _QWORD* a2) __asm__("SceneCharacterAppearance_140f750");
__attribute__((swiftcall)) void SceneCharacterAppearance_140f8e0_alt1(
    PSEUDO_X8 x8_, unsigned __int8* result,
    __int64* a2) __asm__("SceneCharacterAppearance_140f8e0");
__attribute__((swiftcall)) void SceneCharacterAppearance_140fb60_alt1(
    PSEUDO_X8 x8_, unsigned __int8* result,
    __int64 a2) __asm__("SceneCharacterAppearance_140fb60");
__attribute__((swiftcall)) void SceneCharacterAppearance_140ff30_alt1(
    PSEUDO_X8 x8_,
    unsigned __int8* result) __asm__("SceneCharacterAppearance_140ff30");
__attribute__((swiftcall)) void SceneCharacterAppearance_14100c0(PSEUDO_X8 x8_,
                                                                 __int64* a1,
                                                                 _QWORD* a2,
                                                                 __int64 a3);
__int64* GameRoutine_6d36d0_alt1(_QWORD*) __asm__("GameRoutine_6d36d0");
__int64 GameRoutine_6c2b50_alt1(__int64) __asm__("GameRoutine_6c2b50");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 GameRoutine_95f500_alt1(char, __int64, __int64,
                                __int64) __asm__("GameRoutine_95f500");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void
SceneCharacterAppearance_140f750(PSEUDO_X8 x8_, __int64 result, __int64* a2);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140f8e0(PSEUDO_X8 x8_, __int64* a1, __int64* a2);
__attribute__((swiftcall)) void
game_148f260_alt1(PSEUDO_X8, __int64) __asm__("game_148f260");
__int64*
GameRoutine_14101c0_alt3(__int64* result, __int64, __int64,
                         unsigned __int64) __asm__("GameRoutine_14101c0");
__int64 game_Unit_SkillList_CountActive_alt1(__int64, _QWORD*) __asm__(
    "game_Unit_SkillList_CountActive");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6e5c60_alt1() __asm__("GameRoutine_6e5c60");
__attribute__((swiftcall)) void
SceneCharacterAppearance_140f320(PSEUDO_X8 x8_, __int64* a1, __int64 a2);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140fb60(PSEUDO_X8 x8_, __int64* a1, __int64 a2);
__attribute__((swiftcall)) void SceneCharacterAppearance_140ff30(PSEUDO_X8 x8_,
                                                                 __int64 a1);
void game_facility_SceneCharacterAppearance_SetAccout_lambda0_Invoke(
    __int64 a1, unsigned __int16* a2);

_QWORD* SceneCharacterAppearance_140e910(_QWORD* result, char a2)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    __int64 v13[4];
    __int64* v14;
  } v13_;

  v4 = result[11];
  *((_BYTE*)result + 80) = a2;
  result[12] = v4;
  if (a2 == 0) {
    return result;
  }
  v5 = result;
  v13_.v13[0] = result[1];
  if (v13_.v13[0] == 0) {
    return result;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4328,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f4328) != 0) {
    GameData_21f4320 = 81;
    __cxa_guard_release(&GameData_21f4328);
  }
  LODWORD(v11_.v11[0]) = GameData_21f4320;
  result = game_UnitPool_Find_6ead60(v13_.v13, v11_.v11);
  if (result == nullptr) {
    return result;
  }
  v11_.v12 = v11_.v11;
  v13_.v13[2] = (__int64)v11_.v11;
  v13_.v14 = v13_.v13;
  v9_.v9[0] = GameData_20394e0;
  v9_.v9[1] = v5;
  v9_.v10 = v9_.v9;
  v11_.v11[0] = GameData_1f93088;
  v11_.v11[1] = v9_.v9;
  v13_.v13[0] = (__int64)GameData_1f92f88;
  v13_.v13[1] = 13;
  game_UnitItemList_EachItem((_WORD*)result + 414, (__int64)v13_.v13);
  if (v13_.v14 == v13_.v13) {
    v6 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_10;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v6))((__int64)v13_.v14);
LABEL_10:
  if (v11_.v12 == v11_.v11) {
    v7 = 32;
    goto LABEL_14;
  }
  if (v11_.v12 != nullptr) {
    v7 = 40;
  LABEL_14:
    (*(void (**)(__int64))(*v11_.v12 + v7))((__int64)v11_.v12);
  }
  result = v9_.v10;
  if (v9_.v10 == v9_.v9) {
    v8 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*v9_.v10 + v8))((__int64)v9_.v10);
}

__attribute__((swiftcall)) void

SceneCharacterAppearance_140ea90(PSEUDO_X8 x8_, _QWORD* a1, __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  unsigned __int8* v7;
  __int64 v8;
  int v9;
  __int64* v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  char v15;

  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      160, 16, 0);
  *(_BYTE*)(v6 + 24) = 0;
  v7 = (unsigned __int8*)(v6 + 24);
  v8 = v6;
  *(_QWORD*)(v6 + 8) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 152) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)v6 = GameData_2039560;
  *(_QWORD*)(v6 + 96) = 0;
  *(_BYTE*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_BYTE*)(v6 + 136) = 0;
  *a3 = v6 + 24;
  a3[1] = v6;
  *(_DWORD*)(v6 + 40) = -1;
  if (*a1 != 0) {
    *(_QWORD*)(v6 + 32) = *a1;
  }
  v9 = *(_DWORD*)a2;
  if ((*(_DWORD*)a2 & 0x80000000) != 0) {
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
    v9 = v14 & 0x7FFFFFFF;
    nn_os_UnlockMutex(&game_g_random_mutex);
  }
  v15 = *(_BYTE*)(a2 + 4);
  *(_DWORD*)(v8 + 40) = v9;
  SceneCharacterAppearance_140e910_alt1((__int64)v7, v15);
  {
    GameRoutine_140daf0(v7);
    return;
  }
}

__attribute__((swiftcall)) void

SceneCharacterAppearance_140ebb0(PSEUDO_X8 x8_, __int64* a1, __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      160, 16, 0);
  *(_QWORD*)(v6 + 8) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 152) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)(v6 + 96) = 0;
  *(_BYTE*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_BYTE*)(v6 + 24) = 1;
  v7 = *a1;
  *(_QWORD*)v6 = GameData_2039560;
  *(_QWORD*)(v6 + 128) = 0;
  *(_BYTE*)(v6 + 136) = 0;
  *(_DWORD*)(v6 + 40) = -1;
  *(_QWORD*)(v6 + 48) = 0;
  *a3 = v6 + 24;
  a3[1] = v6;
  if (v7 != 0) {
    *(_QWORD*)(v6 + 32) = v7;
  }
  if (*(_QWORD*)a2 != 0) {
    *(_QWORD*)(v6 + 48) = *(_QWORD*)a2;
  }
  v8 = *(_BYTE**)(a2 + 8);
  if (v8 != nullptr && *v8 != 0) {
    v9 = *(_QWORD*)(a2 + 16);
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      v10 = *(_QWORD*)(v6 + 72);
      *(_QWORD*)(v6 + 64) = v8;
      *(_QWORD*)(v6 + 72) = v9;
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
    else {
      *(_QWORD*)(v6 + 64) = v8;
      *(_QWORD*)(v6 + 72) = 0;
    }
  }
  v11 = *(_QWORD*)(a2 + 24);
  v12 = *a3;
  if (v11 != 0) {
    *(_QWORD*)(v12 + 32) = v11;
  }
  if (v12 + 56 != a2 + 32) {
    GameRoutine_14101c0();
  }
  SceneCharacterAppearance_140e910_alt1(v12, *(_BYTE*)(a2 + 56));
  v13 = *(_QWORD*)(v12 + 24);
  if (v13 != 0) {
    v14 = *(_QWORD*)(v12 + 32);
    if (v14 != 0 && *(_WORD*)(v13 + 128) != 0) {
      v15 = *(unsigned __int8*)(v14 + 72);
      if ((unsigned int)v15 > 0xC ||
          (_DWORD)v15 != 7 && *(char*)(v13 + v15 + 398) < 0) {
        *(_QWORD*)(v12 + 32) = *(_QWORD*)(*(_QWORD*)(v13 + 136) + 8LL);
      }
    }
  }
  {
    GameRoutine_140daf0((unsigned __int8*)v12);
    return;
  }
}

__attribute__((swiftcall)) void

SceneCharacterAppearance_140ed50(PSEUDO_X8 x8_, __int64* a1, _BYTE* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;

  v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      160, 16, 0);
  v8 = v7;
  *(_QWORD*)(v7 + 8) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_BYTE*)(v7 + 104) = 0;
  *(_QWORD*)v7 = GameData_2039560;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_BYTE*)(v7 + 136) = 0;
  *(_DWORD*)(v7 + 40) = -1;
  *(_BYTE*)(v7 + 24) = 2;
  v9 = *a1;
  *(_QWORD*)a3 = v7 + 24;
  *(_QWORD*)(a3 + 8) = v7;
  if (v9 != 0) {
    *(_QWORD*)(v7 + 32) = v9;
  }
  if (*a2 != 0) {
    v10 = fw_memory_HeapManager_Allocate(*v6, 88, 16, 0);
    *(_QWORD*)(v10 + 16) = 0;
    v11 = v10 + 24;
    v12 = v10;
    v13 = GameData_212f948[0];
    *(_WORD*)(v10 + 26) = 0;
    *(_DWORD*)(v10 + 28) = 0;
    *(_QWORD*)(v10 + 56) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 0;
    *(_QWORD*)(v10 + 80) = 0;
    *(_QWORD*)v10 = v13 + 2;
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 48) = 0;
    *(_QWORD*)(v10 + 40) = v10 + 48;
    GameRoutine_930b90(v10 + 24, a2);
    v14 = *(_QWORD*)(v8 + 72);
    *(_QWORD*)(v8 + 64) = v11;
    *(_QWORD*)(v8 + 72) = v12;
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak(v14);
    }
  }
  {
    GameRoutine_140daf0(*(unsigned __int8**)a3);
    return;
  }
}

__attribute__((swiftcall)) void

SceneCharacterAppearance_140eea0(PSEUDO_X8 x8_, __int64* a1, __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned __int8* v9;
  __int64 v10;
  int v11;
  __int64* v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v21;
  __int64 v22;

  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
  *(_QWORD*)(v6 + 48) = 0;
  v7 = (__int64*)(v6 + 48);
  v8 = v6;
  *(_QWORD*)(v6 + 8) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 152) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)v6 = GameData_2039560;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)(v6 + 96) = 0;
  *(_BYTE*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_BYTE*)(v6 + 136) = 0;
  *(_DWORD*)(v6 + 40) = -1;
  *(_BYTE*)(v6 + 24) = 3;
  v9 = (unsigned __int8*)(v6 + 24);
  v10 = *a1;
  *a3 = v6 + 24;
  a3[1] = v6;
  if (v10 != 0) {
    *(_QWORD*)(v6 + 32) = v10;
  }
  v11 = *(_DWORD*)a2;
  if ((*(_DWORD*)a2 & 0x80000000) != 0) {
    nn_os_LockMutex(&game_g_random_mutex);
    v12 = game_map_MapRandom_instance__ptr[0];
    v13 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v14 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v15 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v12 + 1) = v13;
    v16 = (v15 >> 8) ^ (v14 >> 19) ^ v15 ^ v14;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12) = v14;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12 + 4) = v16;
    v11 = v16 & 0x7FFFFFFF;
    nn_os_UnlockMutex(&game_g_random_mutex);
  }
  *(_DWORD*)(v8 + 40) = v11;
  if (v8 + 80 != a2 + 8) {
    GameRoutine_14101c0_alt1(
        (char**)(v8 + 80), *(_QWORD*)(a2 + 8), *(_QWORD*)(a2 + 16),
        (__int64)(*(_QWORD*)(a2 + 16) - *(_QWORD*)(a2 + 8)) >> 3);
  }
  SceneCharacterAppearance_140e910(v9, *(_BYTE*)(a2 + 32));
  v17 = GameRoutine_140f040(*(__int64**)(v8 + 80), *(__int64**)(v8 + 88));
  if (v17 != 0) {
    goto LABEL_8;
  }
  v21 = *(_QWORD*)(v8 + 32);
  if (v21 != 0) {
    if (*(_BYTE*)(v21 + 48) != 0) {
      v17 = GameData_21c9988;
    LABEL_8:
      *v7 = v17;
      goto LABEL_9;
    }
    v22 = *(_QWORD*)(v21 + 64);
    if (v22 != 0) {
      if (*(_QWORD*)(v22 + 88) != 0) {
        v17 = *(_QWORD*)(v22 + 88);
      }
      else {
        v17 = v22;
      }
      goto LABEL_8;
    }
  }
LABEL_9:
  v18 = GameRoutine_140f1a0(*(__int64**)(v8 + 80), *(__int64**)(v8 + 88));
  if (v18 != 0) {
    *(_QWORD*)(v8 + 56) = v18;
  }
  {
    GameRoutine_140daf0_alt1(v9);
    return;
  }
}

__attribute__((swiftcall)) void

SceneCharacterAppearance_140f320(PSEUDO_X8 x8_, __int64* a1, __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  _QWORD* v16;
  __int64* v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  atomic_ullong* v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  struct {
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    char v38;
  } v32_;
  _QWORD _48[11];

  v5 = game_HashString_alt1(a2);
  if (v5 != 0) {
    v6 = *(_QWORD*)(GameData_2241820 + 96);
    if (v6 != 0 && *(_QWORD*)(GameData_2241820 + 112) != 0) {
      v8 = v6 - 1;
      if ((v6 & (v6 - 1)) != 0) {
        v9 = v5;
        if (v5 >= v6) {
          v9 = v5 % v6;
        }
      }
      else {
        v9 = v8 & v5;
      }
      v10 = *(_QWORD**)(*(_QWORD*)(GameData_2241820 + 88) + 8 * v9);
      if (v10 != nullptr) {
        v11 = (_QWORD*)*v10;
        if (v11 != nullptr) {
          if ((v6 & v8) == 0) {
            while (1) {
              v14 = v11[1];
              if (v14 == v5) {
                if (v11[2] == v5) {
                  goto LABEL_27;
                }
              }
              else if ((v14 & v8) != v9) {
                goto LABEL_25;
              }
              v11 = (_QWORD*)*v11;
              v13 = 0;
              if (v11 == nullptr) {
                goto LABEL_26;
              }
            }
          }
          do {
            v12 = v11[1];
            if (v12 == v5) {
              if (v11[2] == v5) {
              LABEL_27:
                v13 = v11[3];
                goto LABEL_26;
              }
            }
            else {
              if (v12 >= v6) {
                v12 %= v6;
              }
              if (v12 != v9) {
                break;
              }
            }
            v11 = (_QWORD*)*v11;
          } while (v11 != nullptr);
        }
      }
    }
  }
LABEL_25:
  v13 = 0;
LABEL_26:
  v15 = a1;
  _48[3] = _48[9];
  _48[4] = _48[10];
  v16 = a3;
  if (v13 != 0) {
    v17 = v15;
    v18 = v13;
    game_1391af0((void*)(_48), v13);
    if (*(_BYTE*)(v18 + 32) == 1) {
      LODWORD(v31) = 0;
      LOBYTE(v32_.v35) = 1;
      v32_.v32 = 0;
      v32_.v33 = 0;
      v32_.v34 = 0;
      GameRoutine_14101c0_alt3(&v32_.v32, _48[0], _48[1],
                               (__int64)(_48[1] - _48[0]) >> 3);
      SceneCharacterAppearance_140eea0((void*)(v16), v17, (__int64)&v31);
      if (v32_.v32 != 0) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v32_.v32);
      }
    }
    else if (*(_BYTE*)(v18 + 32) != 0) {
      *v16 = 0;
      v16[1] = 0;
    }
    else {
      v19 = (__int64*)_48[0];
      v20 = (__int64*)_48[1];
      v21 = GameRoutine_140f040((__int64*)_48[0], (__int64*)_48[1]);
      v32_.v36 = 0;
      v32_.v37 = 0;
      v32_.v35 = 0;
      v31 = v21;
      v32_.v38 = 1;
      if (v21 != 0) {
        v22 = *(_QWORD*)(v21 + 112);
        if (v22 != 0) {
          v22 = *(unsigned __int8*)(v22 + 32);
        }
      }
      else {
        v22 = 0;
      }
      v24 = &GameData_21f4018[8 * v22];
      v25 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 88,
                                                16, 0);
      *(_QWORD*)(v25 + 16) = 0;
      *(_QWORD*)(v25 + 8) = 0;
      v26 = (atomic_ullong*)(v25 + 8);
      v27 = v25 + 24;
      v28 = v25;
      v29 = GameData_212f948[0];
      *(_WORD*)(v25 + 26) = 0;
      *(_DWORD*)(v25 + 28) = 0;
      *(_QWORD*)(v25 + 56) = 0;
      *(_QWORD*)(v25 + 64) = 0;
      *(_QWORD*)(v25 + 72) = 0;
      *(_QWORD*)(v25 + 80) = 0;
      *(_QWORD*)v25 = v29 + 2;
      *(_QWORD*)(v25 + 48) = 0;
      *(_QWORD*)(v25 + 40) = v25 + 48;
      GameRoutine_930b90_alt1(v25 + 24, (__int64)v24);
      v32_.v32 = v27;
      v32_.v33 = v28;
      v32_.v34 = GameRoutine_140f1a0(v19, v20);
      SceneCharacterAppearance_140ebb0((void*)(v16), v17, (__int64)&v31);
      if (atomic_fetch_add(v26, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
        std___1___shared_weak_count___release_weak_alt1(v28);
      }
    }
    if (_48[0] != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, _48[0]);
    }
  }
  else {
    *a3 = 0;
    a3[1] = 0;
  }
}

__attribute__((swiftcall)) void SceneCharacterAppearance_140f650(PSEUDO_X8 x8_,
                                                                 __int64* a1,
                                                                 _QWORD* a2,
                                                                 __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  atomic_ullong* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 result;
  struct {
    _QWORD v13[7];
    char v14;
  } v13_;

  memset(&v13_.v13[4], 0, 24);
  v13_.v14 = 1;
  v13_.v13[0] = *a2;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 8) = 0;
  v8 = (atomic_ullong*)(v7 + 8);
  v9 = v7 + 24;
  v10 = v7;
  v11 = GameData_212f948[0];
  *(_WORD*)(v7 + 26) = 0;
  *(_DWORD*)(v7 + 28) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)v7 = v11 + 2;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 40) = v7 + 48;
  GameRoutine_930b90_alt1(v7 + 24, (__int64)GameData_212c8b0[0]);
  v13_.v13[1] = v9;
  v13_.v13[2] = v10;
  v13_.v13[3] = a3;
  result = X8CALL_X0(__int64, SceneCharacterAppearance_140ebb0(
                                  (void*)(a4), a1, (__int64)v13_.v13));
  if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    {
      std___1___shared_weak_count___release_weak_alt1(v10);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

SceneCharacterAppearance_140f750(PSEUDO_X8 x8_, __int64 result, __int64* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  struct {
    _QWORD v17[3];
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    char v22;
  } v17_;

  if (result != 0 && (v3 = *a2, *a2 != 0)) {
    v17_.v20 = 0;
    v17_.v21 = 0;
    v17_.v18 = 0;
    v17_.v19 = 0;
    v6 = result;
    v17_.v17[0] = v3;
    v17_.v22 = 1;
    v7 = (__int64*)fw_memory_g_heap_manager_ptr;
    v8 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 2224, 16, 0);
    GameRoutine_6c2b50_alt1((__int64)v8);
    GameRoutine_95f500_alt1(0, (__int64)v8, v6, *a2);
    v9 = GameRoutine_6d36d0_alt1(v8);
    v10 = fw_memory_HeapManager_Allocate_alt1(*v7, 88, 16, 0);
    *(_QWORD*)(v10 + 8) = 0;
    v11 = (atomic_ullong*)(v10 + 8);
    *(_QWORD*)(v10 + 16) = 0;
    v12 = v10 + 24;
    v13 = v10;
    v14 = GameData_212f948[0];
    *(_WORD*)(v10 + 26) = 0;
    *(_DWORD*)(v10 + 28) = 0;
    *(_QWORD*)(v10 + 56) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 0;
    *(_QWORD*)(v10 + 80) = 0;
    *(_QWORD*)v10 = v14 + 2;
    *(_QWORD*)(v10 + 48) = 0;
    *(_QWORD*)(v10 + 40) = v10 + 48;
    GameRoutine_930b90_alt1(v10 + 24, (__int64)v9);
    v15 = *v8;
    v17_.v17[1] = v12;
    v17_.v17[2] = v13;
    (*(void (**)(__int64*))(v15 + 8))(v8);
    if (*(_QWORD*)(*a2 + 528) != 0) {
      v17_.v18 = *(_QWORD*)(*a2 + 528);
    }
    v16 = *(_QWORD*)(v6 + 392);
    result = X8CALL_X0(__int64, SceneCharacterAppearance_140ebb0(
                                    (void*)(a3), &v16, (__int64)v17_.v17));
    if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      {
        std___1___shared_weak_count___release_weak_alt1(v13);
        return;
      }
    }
  }
  else {
    *a3 = 0;
    a3[1] = 0;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

SceneCharacterAppearance_140f8e0(PSEUDO_X8 x8_, __int64* a1, __int64* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v6;
  __int64 v7;
  atomic_ullong* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    _QWORD v26[3];
    __int64 v27;
  } v26_;
  struct {
    _QWORD v28[3];
    char v29;
  } v28_;
  __int64 v30[3];

  if (*a1 == 0 || *a2 == 0) {
    *a3 = 0;
    a3[1] = 0;
    return;
  }
  v26_.v27 = 0;
  memset(v28_.v28, 0, sizeof(v28_.v28));
  v28_.v29 = 1;
  v26_.v26[0] = GameData_21c9988;
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
  *(_QWORD*)(v7 + 8) = 0;
  v8 = (atomic_ullong*)(v7 + 8);
  *(_QWORD*)(v7 + 16) = 0;
  v9 = v7 + 24;
  v10 = v7;
  v11 = GameData_212f948[0];
  *(_WORD*)(v7 + 26) = 0;
  *(_DWORD*)(v7 + 28) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)v7 = v11 + 2;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 40) = v7 + 48;
  GameRoutine_930b90_alt1(v7 + 24, (__int64)GameData_212c8b0[0]);
  v12 = *a2;
  v26_.v26[1] = v9;
  v26_.v26[2] = v10;
  v13 = *(_QWORD*)(v12 + 528);
  if (v13 != 0) {
    v26_.v27 = v13;
  }
  v14 = game_HashString_alt1((__int64)&GameData_1a8ec7c);
  if (v14 == 0) {
    goto LABEL_36;
  }
  v15 = *(_QWORD*)(*GameData_2131170 + 96);
  if (v15 == 0 || *(_QWORD*)(*GameData_2131170 + 112) == 0) {
    goto LABEL_36;
  }
  v17 = v15 - 1;
  if ((v15 & (v15 - 1)) != 0) {
    v18 = v14;
    if (v14 >= v15) {
      v18 = v14 % v15;
    }
  }
  else {
    v18 = v17 & v14;
  }
  v19 = *(_QWORD**)(*(_QWORD*)(*GameData_2131170 + 88) + 8 * v18);
  if (v19 == nullptr) {
    goto LABEL_36;
  }
  v20 = (_QWORD*)*v19;
  if (v20 == nullptr) {
    goto LABEL_36;
  }
  if ((v15 & v17) == 0) {
    while (1) {
      v22 = v20[1];
      if (v22 == v14) {
        if (v20[2] == v14) {
          goto LABEL_31;
        }
      }
      else if ((v22 & v17) != v18) {
        goto LABEL_36;
      }
      v20 = (_QWORD*)*v20;
      if (v20 == nullptr) {
        goto LABEL_36;
      }
    }
  }
  while (1) {
    v21 = v20[1];
    if (v21 == v14) {
      break;
    }
    if (v21 >= v15) {
      v21 %= v15;
    }
    if (v21 != v18) {
      goto LABEL_36;
    }
  LABEL_20:
    v20 = (_QWORD*)*v20;
    if (v20 == nullptr) {
      goto LABEL_36;
    }
  }
  if (v20[2] != v14) {
    goto LABEL_20;
  }
LABEL_31:
  if (v20[3] == 0) {
  LABEL_36:
    SceneCharacterAppearance_140ebb0((void*)(a3), a1, (__int64)v26_.v26);
    goto LABEL_37;
  }
  game_1391af0((void*)(v30), v20[3]);
  v23 = v30[0];
  qmemcpy(v28_.v28, v30, sizeof(v28_.v28));
  SceneCharacterAppearance_140ebb0((void*)(a3), a1, (__int64)v26_.v26);
  if (v23 != 0) {
    v24 = *v6;
    v28_.v28[1] = v23;
    v25 = 128;
    if (*(_QWORD*)(v24 + 200) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v24 + v25, v23);
  }
LABEL_37:
  if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak_alt1(v10);
  }
}

__attribute__((swiftcall)) void

SceneCharacterAppearance_140fb60(PSEUDO_X8 x8_, __int64* a1, __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v6;
  __int64 v7;
  atomic_ullong* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  int v12;
  __int64 v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  bool v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  struct {
    _QWORD v41[7];
    char v42;
  } v41_;
  __int64 v43[3];

  if (*a1 == 0 || a2 == 0) {
    *a3 = 0;
    a3[1] = 0;
    return;
  }
  memset(&v41_.v41[4], 0, 24);
  v41_.v42 = 1;
  v41_.v41[0] = GameData_21c9988;
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
  *(_QWORD*)(v7 + 8) = 0;
  v8 = (atomic_ullong*)(v7 + 8);
  *(_QWORD*)(v7 + 16) = 0;
  v9 = v7 + 24;
  v10 = v7;
  v11 = GameData_212f948[0];
  *(_WORD*)(v7 + 26) = 0;
  *(_DWORD*)(v7 + 28) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)v7 = v11 + 2;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 40) = v7 + 48;
  GameRoutine_930b90_alt1(v7 + 24, (__int64)GameData_212c8b0[0]);
  v12 = *(unsigned __int8*)(a2 + 104);
  v41_.v41[1] = v9;
  v41_.v41[2] = v10;
  if (v12 != 2) {
    goto LABEL_8;
  }
  v13 = *(_QWORD*)(a2 + 576);
  if (v13 != 0) {
    goto LABEL_9;
  }
  if ((*GameData_212cf08[0] & 4) == 0 || *(_WORD*)(a2 + 136) == 0 ||
      (v14 = *(__int64**)(*GameData_212c878[0] + 64),
       v40 = *(__int64**)(*GameData_212c878[0] + 72), v14 == v40)) {
  LABEL_8:
    v13 = 0;
    goto LABEL_9;
  }
  while (1) {
    v13 = *v14;
    if ((*(_BYTE*)(*v14 + 336) & 8) == 0) {
      v20 = *(unsigned __int8*)(v13 + 72);
      v21 = v20 > 7;
      v22 = 1LL << v20;
      v23 = v21 || ((1LL << *(_BYTE*)(v13 + 73)) & 0x7DC) == 0;
      v24 = v22 & 0x20FF;
      if (v23 && v24 != 0) {
        break;
      }
    }
  LABEL_18:
    ++v14;
    v13 = 0;
    v6 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v14 == v40) {
      goto LABEL_9;
    }
  }
  v26 = *(_QWORD*)(a2 + 24);
  if (*(_BYTE*)(v26 + 1122) == 1) {
    v27 = *(_QWORD*)(v13 + 24);
    v28 = *(_QWORD*)(v26 + 896);
    v29 = *(_QWORD*)(v26 + 904);
    v39 = *(_QWORD*)(a2 + 24);
    if (v29 != v28) {
      while (
          (unsigned int)game_Unit_SkillList_CountActive_alt1(
              v28, (_QWORD*)(v27 + 200)) !=
          (unsigned int)((*(_QWORD*)(v28 + 40) - *(_QWORD*)(v28 + 32)) >> 2)) {
        v28 += 96;
        if (v28 == v29) {
          goto LABEL_18;
        }
      }
    }
    v30 = *(_QWORD*)(v39 + 920);
    v31 = *(_QWORD*)(v39 + 928);
    if (v31 != v30) {
      while (
          (unsigned int)game_Unit_SkillList_CountActive_alt1(
              v30, (_QWORD*)(v27 + 200)) !=
          (unsigned int)((*(_QWORD*)(v30 + 40) - *(_QWORD*)(v30 + 32)) >> 2)) {
        v30 += 96;
        if (v30 == v31) {
          goto LABEL_35;
        }
      }
      goto LABEL_18;
    }
  }
LABEL_35:
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
LABEL_9:
  v41_.v41[3] = v13;
  v15 = game_HashString_alt1((__int64)&GameData_1a9e2f2);
  if (v15 == 0) {
    goto LABEL_58;
  }
  v16 = *(_QWORD*)(*GameData_2131170 + 96);
  if (v16 == 0 || *(_QWORD*)(*GameData_2131170 + 112) == 0) {
    goto LABEL_58;
  }
  v18 = v16 - 1;
  if ((v16 & (v16 - 1)) != 0) {
    v19 = v15;
    if (v15 >= v16) {
      v19 = v15 % v16;
    }
  }
  else {
    v19 = v18 & v15;
  }
  v32 = *(_QWORD**)(*(_QWORD*)(*GameData_2131170 + 88) + 8 * v19);
  if (v32 == nullptr) {
    goto LABEL_58;
  }
  v33 = (_QWORD*)*v32;
  if (v33 == nullptr) {
    goto LABEL_58;
  }
  if ((v16 & v18) == 0) {
    while (1) {
      v35 = v33[1];
      if (v35 == v15) {
        if (v33[2] == v15) {
          goto LABEL_53;
        }
      }
      else if ((v35 & v18) != v19) {
        goto LABEL_58;
      }
      v33 = (_QWORD*)*v33;
      if (v33 == nullptr) {
        goto LABEL_58;
      }
    }
  }
  while (1) {
    v34 = v33[1];
    if (v34 == v15) {
      break;
    }
    if (v34 >= v16) {
      v34 %= v16;
    }
    if (v34 != v19) {
      goto LABEL_58;
    }
  LABEL_42:
    v33 = (_QWORD*)*v33;
    if (v33 == nullptr) {
      goto LABEL_58;
    }
  }
  if (v33[2] != v15) {
    goto LABEL_42;
  }
LABEL_53:
  if (v33[3] == 0) {
  LABEL_58:
    SceneCharacterAppearance_140ebb0((void*)(a3), a1, (__int64)v41_.v41);
    goto LABEL_59;
  }
  game_1391af0((void*)(v43), v33[3]);
  v36 = v43[0];
  qmemcpy(&v41_.v41[4], v43, 24);
  SceneCharacterAppearance_140ebb0((void*)(a3), a1, (__int64)v41_.v41);
  if (v36 != 0) {
    v37 = *v6;
    v41_.v41[5] = v36;
    v38 = 128;
    if (*(_QWORD*)(v37 + 200) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v37 + v38, v36);
  }
LABEL_59:
  if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak_alt1(v10);
  }
}

__attribute__((swiftcall)) void SceneCharacterAppearance_140ff30(PSEUDO_X8 x8_,
                                                                 __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  atomic_ullong* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19[3];
  struct {
    _QWORD v20[5];
    __int64 v21;
    __int64 v22;
    char v23;
  } v20_;

  if (a1 != 0 && *(_WORD*)(a1 + 16) != 0) {
    v20_.v23 = 1;
    v3 = *(_QWORD*)(a1 + 56);
    v20_.v20[0] = v3;
    if (v3 != 0 && (v4 = *(_QWORD*)(v3 + 112)) != 0) {
      v5 = a2;
      v6 = *(unsigned __int8*)(v4 + 32);
    }
    else {
      v5 = a2;
      v6 = 0;
    }
    v7 = (__int64*)fw_memory_g_heap_manager_ptr;
    v8 = &GameData_21f4018[8 * v6];
    v9 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
    *(_QWORD*)(v9 + 8) = 0;
    v10 = (atomic_ullong*)(v9 + 8);
    *(_QWORD*)(v9 + 16) = 0;
    v11 = v9 + 24;
    v12 = v9;
    v13 = GameData_212f948[0];
    *(_WORD*)(v9 + 26) = 0;
    *(_DWORD*)(v9 + 28) = 0;
    *(_QWORD*)(v9 + 56) = 0;
    *(_QWORD*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 72) = 0;
    *(_QWORD*)(v9 + 80) = 0;
    *(_QWORD*)v9 = v13 + 2;
    *(_QWORD*)(v9 + 48) = 0;
    *(_QWORD*)(v9 + 40) = v9 + 48;
    GameRoutine_930b90_alt1(v9 + 24, (__int64)v8);
    v14 = *(_QWORD*)(a1 + 72);
    v20_.v20[1] = v11;
    v20_.v20[2] = v12;
    v20_.v20[3] = v14;
    game_148f260_alt1((void*)(v19), a1);
    v15 = v19[0];
    v20_.v22 = v19[2];
    v16 = *(_QWORD*)(a1 + 40);
    v20_.v20[4] = v19[0];
    v20_.v21 = v19[1];
    v19[0] = v16;
    SceneCharacterAppearance_140ebb0((void*)(v5), v19, (__int64)v20_.v20);
    if (v15 != 0) {
      v17 = *v7;
      v20_.v21 = v15;
      v18 = 128;
      if (*(_QWORD*)(v17 + 200) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v17 + v18, v15);
    }
    if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
  }
  else {
    *a2 = 0;
    a2[1] = 0;
  }
}

__attribute__((swiftcall)) void SceneCharacterAppearance_14100c0(PSEUDO_X8 x8_,
                                                                 __int64* a1,
                                                                 _QWORD* a2,
                                                                 __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  atomic_ullong* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 result;
  struct {
    _QWORD v13[7];
    char v14;
  } v13_;

  memset(&v13_.v13[4], 0, 24);
  v13_.v14 = 1;
  v13_.v13[0] = *a2;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 8) = 0;
  v8 = (atomic_ullong*)(v7 + 8);
  v9 = v7 + 24;
  v10 = v7;
  v11 = GameData_212f948[0];
  *(_WORD*)(v7 + 26) = 0;
  *(_DWORD*)(v7 + 28) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)v7 = v11 + 2;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 40) = v7 + 48;
  GameRoutine_930b90_alt1(v7 + 24, (__int64)GameData_212c8b0[0]);
  v13_.v13[1] = v9;
  v13_.v13[2] = v10;
  v13_.v13[3] = a3;
  result = X8CALL_X0(__int64, SceneCharacterAppearance_140ebb0(
                                  (void*)(a4), a1, (__int64)v13_.v13));
  if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    {
      std___1___shared_weak_count___release_weak_alt1(v10);
      return;
    }
  }
  {
    result;
    return;
  }
}

void game_facility_SceneCharacterAppearance_SetAccout_lambda0_Invoke(
    __int64 a1, unsigned __int16* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = *GameData_212c878[0];
  if (*(_BYTE*)(v2 + 80) == 1) {
    v5 = *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8 * v3);
    if ((*(_BYTE*)(v5 + 73) & 0xFE) != 0x1E) {
      return;
    }
  }
  else {
    v5 = *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8 * v3);
  }
  v7 = *(_QWORD**)(v2 + 96);
  v6 = *(_QWORD*)(v2 + 104);
  if ((unsigned __int64)v7 >= v6) {
    v9 = *(_QWORD*)(v2 + 88);
    v10 = (char*)v7 - v9;
    v11 = ((__int64)v7 - v9) >> 3;
    v12 = v11 + 1;
    if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
      GameRoutine_6e5c60_alt1();
    }
    v13 = v6 - v9;
    v14 = fw_memory_g_heap_manager_ptr;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v16 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v15;
    v18 = (unsigned __int64)v7 - v9;
    v19 = (__int64)&v10[v16 + -8 * v11];
    *(_QWORD*)&v10[v16] = v5;
    v8 = (__int64)&v10[v16 + 8];
    memcpy_alt1(v19, v9, v18);
    *(_QWORD*)(v2 + 88) = v19;
    *(_QWORD*)(v2 + 96) = v8;
    *(_QWORD*)(v2 + 104) = v17;
    if (v9 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v20, v9);
    }
  }
  else {
    *v7 = v5;
    v8 = (__int64)(v7 + 1);
  }
  *(_QWORD*)(v2 + 96) = v8;
}

#pragma GCC visibility pop
