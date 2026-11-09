#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2005308[])();
extern __int64 (*game_character_CharacterTrailResources_vtable[])();
extern __int64 GameData_21c96b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22355c8;
_QWORD* CharacterTrailResources_Destructor(_QWORD* result, long double a2);

_QWORD* CharacterTrailResources_Destructor(_QWORD* result, long double a2)
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
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = result[1];
  v3 = result[2];
  v4 = result;
  *result = game_character_CharacterTrailResources_vtable;
  v5 = fw_memory_g_heap_manager_ptr;
  v6 = v2;
  if (v2 != v3) {
    do {
      v7 = *(_QWORD*)(v3 - 8);
      v8 = v3;
      if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v7);
      }
      v3 -= 40;
      if ((*(_BYTE*)(v8 - 40) & 1) != 0 && *(_QWORD*)(v8 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v9, a2);
      }
    } while (v3 != v2);
    v6 = v4[1];
  }
  v4[2] = v2;
  if (v6 != 0) {
    if (v6 == v2) {
      v4[2] = v6;
    }
    else {
      do {
        v10 = v2;
        v11 = *(_QWORD*)(v2 - 8);
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          result = (_QWORD*)std___1___shared_weak_count___release_weak(v11);
        }
        v2 = v10 - 40;
        if ((*(_BYTE*)(v10 - 40) & 1) != 0 && *(_QWORD*)(v10 - 24) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v12, a2);
        }
      } while (v2 != v6);
      v13 = v4[1];
      v4[2] = v6;
      if (v13 == 0) {
        goto LABEL_33;
      }
    }
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v14 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v14, a2);
  }

LABEL_33:
  *v4 = GameData_2005308;
  if ((_QWORD*)GameData_21c96b0 == v4) {
    GameData_21c96b0 = 0;
    GameData_22355c8 = 0;
  }
  return result;
}

#pragma GCC visibility pop
