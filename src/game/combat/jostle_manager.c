#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fed278[])();
extern __int64 (*game_combat_JostleManager_vtable[])();
extern __int64 GameData_22162a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22162a4;
_QWORD* JostleManager_Destructor(_QWORD* result);
_QWORD* GameRoutine_e9f560(_QWORD* result);
__int64 GameRoutine_ea1850(_QWORD, _QWORD);
__int64 GameRoutine_ea2250(_QWORD);
__int64 GameRoutine_ea2430(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
_QWORD* JostleManager_ea0ec0(__int64 a1);
_QWORD* JostleManager_ea1560(_QWORD* result, _QWORD* a2);
__int64 JostleManager_ea16c0(__int64 result, __int64** a2);
__int64 JostleManager_ea1d20(__int64 result);
__int64 game_combat_JostleManager_JostleManager_lambda0_Invoke(__int64 result);
__int64 game_combat_JostleManager_JostleManager_lambda1_Invoke(__int64 result);

_QWORD* JostleManager_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = result[13];
  v2 = result;
  *result = game_combat_JostleManager_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v1);
  }
  v3 = v2[9];
  if (v3 != 0) {
    v4 = v2[10];
    if (v3 == v4) {
      goto LABEL_11;
    }
    do {
      result = *(_QWORD**)(v4 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v4 -= 16;
    } while (v4 != v3);
    v5 = v2[9];
    v2[10] = v3;
    v3 = v5;
    if (v5 != 0) {
    LABEL_11:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v3);
    }
  }
  v7 = v2[6];
  if (v7 != 0) {
    v8 = v2[7];
    if (v7 == v8) {
      goto LABEL_22;
    }
    do {
      v9 = *(_QWORD*)(v8 - 8);
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v9);
      }
      v8 -= 16;
    } while (v8 != v7);
    v10 = v2[6];
    v2[7] = v7;
    v7 = v10;
    if (v10 != 0) {
    LABEL_22:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v7);
    }
  }
  v12 = v2[5];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v12);
  }
  v13 = v2[2];
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v13);
  }
  *v2 = GameData_1fed278;
  if ((_QWORD*)GameData_22162a8 == v2) {
    GameData_22162a8 = 0;
    GameData_22162a4 = 0;
  }
  return result;
}

_QWORD* JostleManager_ea0ec0(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  _QWORD* result;

  v1 = *(__int64**)(a1 + 48);
  v2 = *(__int64**)(a1 + 56);
  if (v1 == v2) {
  LABEL_18:
    v11 = v1 + 2;
    if (v1 == v2 || v11 == v2) {
      goto LABEL_44;
    }
    while (1) {
      v13 = *v11;
      v14 = v11[1];
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                  memory_order_relaxed);
        v15 = *(_QWORD*)(v13 + 8);
        if (v15 == 0 || *(_QWORD*)(v15 + 8) == -1) {
          v16 = 0;
        }
        else {
          v16 = *(_QWORD*)(v13 + 16);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v16 != 0) {
            goto LABEL_40;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          std___1___shared_weak_count___release_weak(v14);
          if (v16 != 0) {
            goto LABEL_40;
          }
        }
      }
      else {
        v17 = *(_QWORD*)(v13 + 8);
        if (v17 != 0) {
          v18 = *(_QWORD*)(v13 + 16);
          if (*(_QWORD*)(v17 + 8) != -1 && v18 != 0) {
          LABEL_40:
            v20 = *v11;
            v21 = v11[1];
            *v11 = 0;
            v11[1] = 0;
            v22 = v1[1];
            *v1 = v20;
            v1[1] = v21;
            if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
              std___1___shared_weak_count___release_weak(v22);
            }
            v1 += 2;
          }
        }
      }
      v11 += 2;
      if (v11 == v2) {
        goto LABEL_44;
      }
    }
  }
  do {
    v4 = *v1;
    v5 = v1[1];
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      v6 = *(_QWORD*)(v4 + 8);
      if (v6 == 0 || *(_QWORD*)(v6 + 8) == -1) {
        v7 = 0;
      }
      else {
        v7 = *(_QWORD*)(v4 + 16);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
      if (v7 == 0) {
        goto LABEL_18;
      }
    }
    else {
      v8 = *(_QWORD*)(v4 + 8);
      if (v8 == 0) {
        goto LABEL_18;
      }
      v9 = *(_QWORD*)(v4 + 16);
      if (*(_QWORD*)(v8 + 8) == -1 || v9 == 0) {
        goto LABEL_18;
      }
    }
    v1 += 2;
  } while (v1 != v2);
  v1 = v2;
LABEL_44:
  v23 = *(__int64**)(a1 + 56);
  if (v1 != v23) {
    do {
      v24 = *(v23 - 1);
      if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
        std___1___shared_weak_count___release_weak(v24);
      }
      v23 -= 2;
    } while (v23 != v1);
    *(_QWORD*)(a1 + 56) = v1;
  }
  result = GameRoutine_e9f560(*(_QWORD**)(a1 + 32));
  *(_BYTE*)(a1 + 24) = 1;
  return result;
}

_QWORD* JostleManager_ea1560(_QWORD* result, _QWORD* a2)
{
  __int64* v2;
  __int64* v3;
  _QWORD* v4;
  int v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v3 = (__int64*)result[6];
  v2 = (__int64*)result[7];
  v4 = result;
  if (v3 != v2) {
    while (*v3 != *a2) {
      v3 += 2;
      if (v3 == v2) {
        return result;
      }
    }
  }
  if (v3 != v2) {
    result = (_QWORD*)*v3;
    v5 = *(_DWORD*)(*v3 + 80) - 1;
    *(_DWORD*)(*v3 + 80) = v5;
    if (v5 == 0) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(result[9] + 8LL))(result + 9);
    }
    if (*(int*)(*v3 + 80) <= 0) {
      v6 = (__int64*)v4[7];
      v7 = v3 + 2;
      if (v3 + 2 != v6) {
        do {
          v9 = *v7;
          v8 = v7[1];
          v10 = *(v7 - 1);
          *v7 = 0;
          v7[1] = 0;
          *(v7 - 2) = v9;
          *(v7 - 1) = v8;
          if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            result = (_QWORD*)std___1___shared_weak_count___release_weak(v10);
          }
          v7 += 2;
        } while (v7 != v6);
        v6 = (__int64*)v4[7];
        v3 = v7 - 2;
      }
      for (; v6 != v3; v6 -= 2) {
        v11 = *(v6 - 1);
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          result = (_QWORD*)std___1___shared_weak_count___release_weak(v11);
        }
      }
      v4[7] = v3;
    }
  }
  return result;
}

__int64 JostleManager_ea16c0(__int64 result, __int64** a2)
{
  __int64** v2;
  __int64* v3;
  __int64* v4;
  __int64 i;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64* j;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v3 = *(__int64**)(result + 72);
  v4 = *(__int64**)(result + 80);
  v2 = (__int64**)(result + 72);
  for (i = result; v4 != v3; v4 -= 2) {
    result = *(v4 - 1);
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak(result);
    }
  }
  *(_QWORD*)(i + 80) = v3;
  v8 = *a2;
  v7 = a2[1];
  if (v8 != v7) {
    do {
      v14 = *v8;
      v9 = v8[1];
      v15 = v9;
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_ea1850(v2, &v14);
      result = v15;
      if (v15 != 0) {
        result = std___1___shared_weak_count___release_weak(v15);
      }
      v8 += 2;
    } while (v8 != v7);
    v3 = *(__int64**)(i + 80);
  }
  for (j = *v2; j != v3; j += 2) {
    result = j[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v11 = *j;
        v12 = result;
        if (*j != 0) {
          result = GameRoutine_ea2250(*(_QWORD*)(v11 + 40));
          v13 = *(_QWORD*)(v11 + 32);
          *(_DWORD*)(v11 + 56) = 2;
          *(_QWORD*)(v11 + 24) = 0;
          *(_QWORD*)(v11 + 32) = 0;
          if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            result = std___1___shared_weak_count___release_weak(v13);
          }
          *(_BYTE*)(v11 + 61) = 1;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          result = std___1___shared_weak_count___release_weak(v12);
        }
      }
    }
  }
  return result;
}

__int64 JostleManager_ea1d20(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(result + 24);
  if (v1 != 0) {
    v2 = *(_QWORD*)(result + 32);
    v3 = result;
    if (v1 == v2) {
      goto LABEL_10;
    }
    do {
      v4 = *(_QWORD*)(v2 - 8);
      if (v4 != 0) {
        std___1___shared_weak_count___release_weak(v4);
      }
      result = *(_QWORD*)(v2 - 24);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
      v2 -= 32;
    } while (v2 != v1);
    v5 = *(_QWORD*)(v3 + 24);
    *(_QWORD*)(v3 + 32) = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_10:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v1);
    }
  }
  return result;
}

__int64 game_combat_JostleManager_JostleManager_lambda0_Invoke(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 8) + 112LL) = 1;
  return result;
}

__int64 game_combat_JostleManager_JostleManager_lambda1_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(v1 + 48);
  v3 = *(_QWORD*)(v1 + 56);
  while (v2 != v3) {
    if (*(_QWORD*)v2 != 0) {
      result = GameRoutine_ea2430(*(_QWORD*)(*(_QWORD*)v2 + 40LL));
    }
    v2 += 16;
  }
  *(_BYTE*)(v1 + 24) = 0;
  *(_BYTE*)(v1 + 112) = 0;
  return result;
}

#pragma GCC visibility pop
