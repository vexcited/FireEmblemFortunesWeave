#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10e8d40(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2011030[])();
extern __int64 (*game_character_FootprintModule2_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 FootprintModule2_Destructor(_QWORD* a1);

__int64 FootprintModule2_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;

  *a1 = game_character_FootprintModule2_vtable;
  a1[3] = GameData_2011030;
  GameRoutine_10e8d40(a1 + 11);
  v2 = a1[8];
  if (v2 != 0) {
    v3 = a1[9];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v2 == v3) {
      goto LABEL_12;
    }
    v5 = a1[9];
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0) {
        v7 = *(_QWORD*)(v3 - 8);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
        }
      }
      v3 = v5;
    } while (v5 != v2);
    v9 = a1[8];
    a1[9] = v2;
    v2 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v2);
    }
  }
  result = a1[7];
  a1[3] = kaneko_WPHolder_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v12 = a1[5];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak(v12);
  }
  return result;
}

#pragma GCC visibility pop
