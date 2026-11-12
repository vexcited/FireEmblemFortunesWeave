#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1000();
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* ActionStateMachine_1066c00_alt2(_QWORD* result, long double a2) __asm__(
    "ActionStateMachine_1066c00");
__int64 ActionStateMachine_1066c00_alt1(_QWORD) __asm__(
    "ActionStateMachine_1066c00");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_ActionStateMachine_vtable[])();
extern __int64 (*game_combat_CombatCharacterSubsystem_vtable[])();
__n128 ActionStateMachine_Destructor_alt1(_QWORD* a1) __asm__(
    "ActionStateMachine_Destructor");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ActionStateMachine_1066c00(__int64* a1);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 ActionStateMachine_Destructor(_QWORD* a1);

__int64 ActionStateMachine_Destructor(_QWORD* a1)
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
  __int64* v11;
  __int64 v12;
  __int64 result;

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
        v11 = (__int64*)a1[6];
        if (*v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v12, *v11);
          v11 = (__int64*)a1[6];
          v2 = a1[9];
          v10 = a1[10];
        }
        v2 -= 512LL;
        a1[6] = v11 + 1;
        a1[9] = v2;
      }
    } while (v10 != 0);
  }
  ActionStateMachine_1066c00(a1 + 5);
  result = a1[3];
  *a1 = game_combat_CombatCharacterSubsystem_vtable;
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  return result;
}

void ActionStateMachine_1066c00(__int64* a1)
{
  __int64* v1;
  __int64* v2;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v1 = (__int64*)a1[1];
  v2 = (__int64*)a1[2];
  if (v2 == v1) {
    v4 = a1 + 5;
    v2 = (__int64*)a1[1];
  }
  else {
    v4 = a1 + 5;
    v5 = a1[4];
    v6 = &v1[v5 >> 9];
    v7 = (__int64*)(*v6 + 8 * (v5 & 0x1FF));
    v8 = v1[(a1[5] + v5) >> 9] + 8 * ((a1[5] + v5) & 0x1FF);
    if (v7 != (__int64*)v8) {
      do {
        v9 = *v7;
        *v7 = 0;
        if (v9 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        }
        if ((char*)((char*)++v7 - *v6) == (char*)((char*)0x1000LL)) {
          v10 = (__int64*)v6[1];
          ++v6;
          v7 = v10;
        }
      } while (v7 != (__int64*)v8);
      v1 = (__int64*)a1[1];
      v2 = (__int64*)a1[2];
    }
  }
  *v4 = 0;
  v11 = v2 - v1;
  if (v11 >= 3) {
    v12 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v12 + v13, *v1);
        v1 = (__int64*)a1[1];
        v2 = (__int64*)a1[2];
      }
      a1[1] = (__int64)++v1;
      v11 = v2 - v1;
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
  a1[4] = v14;
LABEL_24:
  if (v1 != v2) {
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v15, *v1);
      }
      ++v1;
    } while (v1 != v2);
    v16 = a1[2];
    v17 = a1[1] - v16;
    if (v17 != 0) {
      a1[2] = v16 + ((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  if (*a1 != 0) {
    v18 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v18, *a1);
  }
}

#pragma GCC visibility pop
