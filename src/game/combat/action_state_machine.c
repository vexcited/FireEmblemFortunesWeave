#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1000();
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* ActionStateMachine_1066c00(_QWORD* result, long double a2);
__int64 ActionStateMachine_1066c00_alt1(_QWORD) __asm__(
    "ActionStateMachine_1066c00");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_ActionStateMachine_vtable[])();
extern __int64 (*game_combat_CombatCharacterSubsystem_vtable[])();
__n128 ActionStateMachine_Destructor(_QWORD* a1);

__n128 ActionStateMachine_Destructor(_QWORD* a1)
{
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __n128 result;
  __int64 v14;

  *a1 = game_combat_ActionStateMachine_vtable;
  if (a1[10] != 0) {
    v2 = a1[9];
    v3 = fw_memory_g_heap_manager_ptr;
    do {
      v4 = v2 >> 9;
      v5 = v2 & 0x1FF;
      v6 = *(_QWORD*)(a1[6] + 8 * v4);
      v7 = *(_DWORD**)(v6 + 8 * v5);
      if (v7[4] == 2) {
        (*(void (**)(_DWORD*))(*(_QWORD*)v7 + 56LL))(v7);
        v8 = a1[9] & 0x1FFLL;
        v9 = *(_QWORD*)(a1[6] + 8LL * (a1[9] >> 9));
        v7 = *(_DWORD**)(v9 + 8 * v8);
        *(_QWORD*)(v9 + 8 * v8) = 0;
        if (v7 == nullptr) {
          goto LABEL_10;
        }
      }
      else {
        *(_QWORD*)(v6 + 8 * v5) = 0;
      }
      (*(void (**)(_DWORD*))(*(_QWORD*)v7 + 16LL))(v7);
    LABEL_10:
      v10 = a1[10] - 1LL;
      v2 = a1[9] + 1LL;
      a1[9] = v2;
      a1[10] = v10;
      if (v2 >= 0x400) {
        v11 = (_QWORD*)a1[6];
        if (*v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v12);
          v11 = (_QWORD*)a1[6];
          v2 = a1[9];
          v10 = a1[10];
        }
        v2 -= 512LL;
        a1[6] = v11 + 1;
        a1[9] = v2;
      }
    } while (v10 != 0);
  }
  ActionStateMachine_1066c00_alt1(a1 + 5);
  v14 = a1[3];
  *a1 = game_combat_CombatCharacterSubsystem_vtable;
  if (v14 != 0) {
    return std___1___shared_weak_count___release_weak(v14);
  }
  return result;
}

_QWORD* ActionStateMachine_1066c00(_QWORD* result, long double a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD** v8;
  __int64 v9;
  _QWORD** v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = (_QWORD*)result[1];
  v3 = (_QWORD*)result[2];
  v4 = result;
  if (v3 == v2) {
    v5 = result + 5;
    v3 = (_QWORD*)result[1];
  }
  else {
    v5 = result + 5;
    v6 = result[4];
    v7 = &v2[v6 >> 9];
    v8 = (_QWORD**)(*v7 + 8 * (v6 & 0x1FF));
    v9 = v2[(result[5] + v6) >> 9] + 8 * ((result[5] + v6) & 0x1FF);
    if (v8 != (_QWORD**)v9) {
      do {
        result = *v8;
        *v8 = nullptr;
        if (result != nullptr) {
          result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 16LL))(result);
        }
        if ((char*)++v8 - *v7 == (char*)GameRoutine_1000) {
          v10 = (_QWORD**)v7[1];
          ++v7;
          v8 = v10;
        }
      } while (v8 != (_QWORD**)v9);
      v2 = (_QWORD*)v4[1];
      v3 = (_QWORD*)v4[2];
    }
  }
  *v5 = 0;
  v11 = v3 - v2;
  if (v11 >= 3) {
    v12 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v2 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        result =
            (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v13, a2);
        v2 = (_QWORD*)v4[1];
        v3 = (_QWORD*)v4[2];
      }
      v4[1] = ++v2;
      v11 = v3 - v2;
    } while (v11 > 2);
  }
  if (v11 == 1) {
    v14 = 256;
  }
  else {
    if (v11 != 2) {
      goto LABEL_24;
    }
    v14 = 512;
  }
  v4[4] = v14;

LABEL_24:
  if (v2 != v3) {
    do {
      if (*v2 != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(
            fw_memory_g_heap_manager + v15, a2);
      }
      ++v2;
    } while (v2 != v3);
    v16 = v4[2];
    v17 = v4[1] - v16;
    if (v17 != 0) {
      v4[2] = v16 + ((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  if (*v4 != 0) {
    v18 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v18 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        fw_memory_g_heap_manager + v18, a2);
  }
  return result;
}

#pragma GCC visibility pop
