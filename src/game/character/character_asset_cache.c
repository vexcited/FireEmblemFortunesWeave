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
__int64 CharacterAssetCache_109b560(__int64 result);

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

__int64 CharacterAssetCache_109b560(__int64 result)
{
  _QWORD* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD**)(result + 16);
  v2 = (__int64*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  while (v1 != nullptr) {
    v5 = v1;
    v1 = (_QWORD*)*v1;
    v6 = v5[6];
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
      if ((v5[2] & 1) != 0) {
      LABEL_10:
        if (v5[4] != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
        }
      }
    }
    else if ((v5[2] & 1) != 0) {
      goto LABEL_10;
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v4 = 128;
    }
    else {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4);
  }
  v8 = *v2;
  *v2 = 0;
  if (v8 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
  }
  return result;
}

#pragma GCC visibility pop
