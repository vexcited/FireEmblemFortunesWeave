#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10e4bc0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* IKFoot_10e4480(_QWORD* result, unsigned __int64 a2, long double a3);
__int64 game_character_IKFoot_IKFoot_lambda0_Invoke(__int64 result, int* a2);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_200c180[])();
extern __int64 (*game_character_IKFoot_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
__n128 IKFoot_Destructor(_QWORD* a1);

_QWORD* IKFoot_10e4480(_QWORD* result, unsigned __int64 a2, long double a3)
{
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v3 = result[1];
  v4 = result;
  v5 = 0xAAAAAAAAAAAAAAABLL * ((v3 - *result) >> 6);
  v6 = a2 >= v5;
  v7 = a2 - v5;
  if (v7 != 0 && v6) {
    return (_QWORD*)GameRoutine_10e4bc0(result, v7);
  }
  if (!v6) {
    v8 = *result + 192 * a2;
    if (v8 != v3) {
      v9 = fw_memory_g_heap_manager_ptr;
      do {
        v10 = *(_QWORD*)(v3 - 160);
        if (v10 != 0) {
          *(_QWORD*)(v3 - 152) = v10;
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v11, a3);
        }
        v12 = *(_QWORD*)(v3 - 184);
        if (v12 != 0) {
          *(_QWORD*)(v3 - 176) = v12;
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v13 = 128;
          }
          else {
            v13 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v13, a3);
        }
        v3 -= 192;
      } while (v3 != v8);
    }
    v4[1] = v8;
  }
  return result;
}

__n128 IKFoot_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __n128 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = a1[10];
  *a1 = game_character_IKFoot_vtable;
  a1[5] = GameData_200c180;
  if (v1 != 0) {
    v3 = a1[11];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_16;
    }
    do {
      v5 = *(_QWORD*)(v3 - 160);
      if (v5 != 0) {
        *(_QWORD*)(v3 - 152) = v5;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v6);
      }
      v8 = *(_QWORD*)(v3 - 184);
      if (v8 != 0) {
        *(_QWORD*)(v3 - 176) = v8;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v9);
      }
      v3 -= 192;
    } while (v3 != v1);
    v10 = a1[10];
    a1[11] = v1;
    if (v10 != 0) {
    LABEL_16:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v11);
    }
  }
  v12 = a1[9];
  a1[5] = kaneko_WPHolder_vtable;
  if (v12 != 0) {
    result = std___1___shared_weak_count___release_weak(v12);
  }
  v13 = a1[7];
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    return std___1___shared_weak_count___release_weak(v13);
  }
  return result;
}

__int64 game_character_IKFoot_IKFoot_lambda0_Invoke(__int64 result, int* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_QWORD*)(v2 + 80);
  v4 = *(_QWORD*)(v2 + 88);
  if (v3 != v4) {
    v5 = *a2;
    do {
      *(_DWORD*)(v3 + 100) = v5;
      v3 += 192;
    } while (v3 != v4);
  }
  return result;
}

#pragma GCC visibility pop
