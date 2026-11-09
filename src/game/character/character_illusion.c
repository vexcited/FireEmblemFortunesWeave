#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11032f0(_QWORD*);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterIllusion_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CharacterIllusion_Destructor(_QWORD* a1);
__int64 CharacterIllusion_DeletingDestructor(_QWORD* a1);

__int64 CharacterIllusion_Destructor(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 result;

  v1 = (_QWORD*)a1[7];
  *a1 = game_character_CharacterIllusion_vtable;
  if (v1 != nullptr) {
    v3 = (_QWORD*)a1[8];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_11;
    }
    do {
      v6 = (_QWORD*)*--v3;
      v5 = v6;
      *v3 = 0;
      if (v6 != nullptr) {
        GameRoutine_11032f0(v5);
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, v5);
      }
    } while (v3 != v1);
    v8 = (_QWORD*)a1[7];
    a1[8] = v1;
    v1 = v8;
    if (v8 != nullptr) {
    LABEL_11:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v1);
    }
  }
  result = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 CharacterIllusion_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = (_QWORD*)a1[7];
  *a1 = game_character_CharacterIllusion_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    v4 = (_QWORD*)a1[8];
    if (v1 == v4) {
      goto LABEL_11;
    }
    do {
      v6 = (_QWORD*)*--v4;
      v5 = v6;
      *v4 = 0;
      if (v6 != nullptr) {
        GameRoutine_11032f0(v5);
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, v5);
      }
    } while (v4 != v1);
    v8 = (_QWORD*)a1[7];
    a1[8] = v1;
    v1 = v8;
    if (v8 != nullptr) {
    LABEL_11:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, v1);
    }
  }
  v10 = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11, a1);
}

#pragma GCC visibility pop
