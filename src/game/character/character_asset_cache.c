#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_109b560(_QWORD);
extern __int64 (*GameData_2008090[])();
extern __int64 (*game_character_CharacterAssetCache_vtable[])();
extern __int64 GameData_2235618;
extern int GameData_2235734;
__int64 CharacterAssetCache_Destructor(_QWORD* a1);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CharacterAssetCache_109b560_alt1(__int64 result) __asm__(
    "CharacterAssetCache_109b560");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CharacterAssetCache_109b560(__int64* a1);

__int64 CharacterAssetCache_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_character_CharacterAssetCache_vtable;
  result = GameRoutine_109b560(a1 + 1);
  *a1 = GameData_2008090;
  if ((_QWORD*)GameData_2235618 == a1) {
    GameData_2235618 = 0;
    GameData_2235734 = 0;
  }
  return result;
}

void CharacterAssetCache_109b560(__int64* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = (_QWORD*)a1[2];
  v3 = fw_memory_g_heap_manager_ptr;
  while (v1 != nullptr) {
    v5 = (__int64)v1;
    v1 = (_QWORD*)*v1;
    v6 = *(_QWORD*)(v5 + 48);
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
      if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
      LABEL_10:
        v7 = *(_QWORD*)(v5 + 32);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, v7);
        }
      }
    }
    else if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
      goto LABEL_10;
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v4 = 128;
    }
    else {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v4, v5);
  }
  v9 = *a1;
  *a1 = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, v9);
  }
}

#pragma GCC visibility pop
