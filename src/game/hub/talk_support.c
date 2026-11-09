#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ff05d0[])();
extern __int64 (*game_hub_TalkSupport_vtable[])();
extern __int64 GameData_21f3d08;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_221fd20;
__int64 TalkSupport_Destructor(__int64 a1);

__int64 TalkSupport_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)a1 = game_hub_TalkSupport_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)(a1 + 112);
    if (v1 == v4) {
      goto LABEL_12;
    }
    v5 = *(_QWORD*)(a1 + 112);
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0) {
        v7 = *(_QWORD*)(v4 - 8);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v7);
        }
      }
      v4 = v5;
    } while (v5 != v1);
    v9 = *(_QWORD*)(a1 + 104);
    *(_QWORD*)(a1 + 112) = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v1);
    }
  }
  if (*(_BYTE*)(a1 + 96) == 1) {
    v11 = *(_QWORD*)(a1 + 72);
    if (v11 != 0) {
      v12 = *(_QWORD*)(a1 + 80);
      if (v11 == v12) {
        goto LABEL_27;
      }
      v13 = *(_QWORD*)(a1 + 80);
      do {
        v14 = *(_BYTE*)(v13 - 24);
        v13 -= 24;
        if ((v14 & 1) != 0) {
          v15 = *(_QWORD*)(v12 - 8);
          if (v15 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v16 = 128;
            }
            else {
              v16 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16, v15);
          }
        }
        v12 = v13;
      } while (v13 != v11);
      v17 = *(_QWORD*)(a1 + 72);
      *(_QWORD*)(a1 + 80) = v11;
      v11 = v17;
      if (v17 != 0) {
      LABEL_27:
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18, v11);
      }
    }
  }
  v19 = *(_QWORD*)(a1 + 40);
  if (v19 != 0) {
    v20 = *(_QWORD*)(a1 + 48);
    if (v19 == v20) {
      goto LABEL_38;
    }
    do {
      v21 = *(_QWORD*)(v20 - 8);
      if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak(v21);
      }
      v20 -= 16;
    } while (v20 != v19);
    v22 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a1 + 48) = v19;
    v19 = v22;
    if (v22 != 0) {
    LABEL_38:
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23, v19);
    }
  }
  result = *(_QWORD*)(a1 + 32);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  *(_QWORD*)a1 = GameData_1ff05d0;
  if (GameData_21f3d08 == a1) {
    GameData_21f3d08 = 0;
    GameData_221fd20 = 0;
  }
  return result;
}

#pragma GCC visibility pop
