#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d2cec0(int);
__int64 GameRoutine_d477c0(__int64 result, _QWORD*);
__int64 GameRoutine_d78b40(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
bool GameRoutine_d2d4e0(__int64);
extern __int64 (*eft_ClampCurve_ptr)();
extern __int64 (*game_zview_CharacterController_StateActionBase_vtable[])();
extern __int64 GameData_21d96b8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ed10[12];
float GameRoutine_d12f00(__int64);
unsigned __int64 GameRoutine_d2b5f0(__int64, long double);
__int64 StateActionBase_Unknown3(__int64 result);
float StateActionBase_Unknown5(__int64 a1, long double a2);
__int64 StateActionBase_d48970(__int64 a1, float a2);
_QWORD* StateActionBase_Destructor(_QWORD* result);
__int64 StateActionBase_DeletingDestructor(_QWORD* a1);
__int64 StateActionBase_Unknown2(__int64 result);
__int64 StateActionBase_d477c0(__int64 result, _QWORD* a2);

__int64 StateActionBase_d477c0(__int64 result, _QWORD* a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(__int64**)result;
  v3 = *(__int64**)(result + 8);
  v5 = result;
  if (*(__int64**)result != v3) {
    while (*v2 != *a2) {
      v2 += 2;
      if (v2 == v3) {
        return result;
      }
    }
  }
  v6 = v2 + 2;
  if (v2 != v3 && v6 != v3) {
    do {
      v8 = *v6;
      if (*v6 != *a2) {
        v9 = v6[1];
        *v6 = 0;
        v6[1] = 0;
        v10 = v2[1];
        *v2 = v8;
        v2[1] = v9;
        if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          result = std___1___shared_weak_count___release_weak(v10);
        }
        v2 += 2;
      }
      v6 += 2;
    } while (v6 != v3);
    v3 = *(__int64**)(v5 + 8);
  }
  if (v2 != v3) {
    do {
      v11 = *(v3 - 1);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = std___1___shared_weak_count___release_weak(v11);
      }
      v3 -= 2;
    } while (v3 != v2);
    *(_QWORD*)(v5 + 8) = v2;
  }
  return result;
}

__int64 StateActionBase_Unknown3(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _BYTE* v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = *(_QWORD*)(result + 8);
  *(_BYTE*)(result + 16) =
      (*(_DWORD*)(*(_QWORD*)(v1 + 8) + 384LL) & 0x40000000) != 0;
  v2 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 32LL);
  if ((*(_BYTE*)(v2 + 360) & 1) != 0) {
    *(_QWORD*)(v2 + 368) = 0;
    v3 = *(_BYTE**)(v2 + 376);
  }
  else {
    *(_BYTE*)(v2 + 360) = 0;
    v3 = (_BYTE*)(v2 + 361);
  }
  *v3 = 0;
  if (*(_BYTE*)(result + 16) == 1 && (*(_BYTE*)(result + 17) & 1) == 0) {
    *(_BYTE*)(result + 17) = 1;
    v4 = GameData_21d96b8;
    v5 = *(_DWORD*)(GameData_21d96b8 + 40);
    *(_DWORD*)(GameData_21d96b8 + 40) = v5 + 1;
    if (v5 == 0) {
      v6 = result;
      (**(void (***)(__int64))(v4 + 32))(v4 + 32);
      result = v6;
    }
  }
  v7 = *(__int64**)(*(_QWORD*)(*(_QWORD*)(result + 8) + 488LL) + 88LL);
  v8 = *v7;
  v9 = v7[1];
  if (*v7 != v9) {
    do {
      v10 = *(_QWORD*)(v9 - 8);
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        result = std___1___shared_weak_count___release_weak(v10);
      }
      v9 -= 16;
    } while (v9 != v8);
  }
  v7[1] = v8;
  return result;
}

float StateActionBase_Unknown5(__int64 a1, long double a2)
{
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;

  if (*(_BYTE*)(a1 + 16) == 1 && *(_BYTE*)(a1 + 17) != 0) {
    *(_BYTE*)(a1 + 17) = 0;
    v3 = GameData_21d96b8;
    v4 = *(_DWORD*)(GameData_21d96b8 + 40) - 1;
    *(_DWORD*)(GameData_21d96b8 + 40) = v4;
    if (v4 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v3 + 32) + 8LL))(v3 + 32);
    }
  }
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                  344LL);
  if (*(_QWORD*)(v5 + 352) == *(_QWORD*)(a1 + 24)) {
    if ((*(_BYTE*)(v5 + 368) & 1) == 0 && (v6 = *(_QWORD*)(v5 + 168)) != 0 &&
        ((v7 = GameRoutine_d2b5f0(*(_QWORD*)(v6 + 32) + 72LL, a2)) &
         0x100000000LL) != 0 &&
        (v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 24) + 72LL) +
                         104LL * (int)v7)) != 0 &&
        (v9 = *(_QWORD*)(v8 + 16)) != 0 &&
        *(__int64 (**)())(v9 + 16) == eft_ClampCurve_ptr) {
      LODWORD(v12) = -1511520286;
    }
    else {
      v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL);
      v11 = *(_QWORD*)(v10 + 16);
      if ((*(_BYTE*)(v11 + 385) & 0x40) != 0) {
        v12 = 0;
      }
      else {
        v12 = *(_QWORD*)(v11 + 468);
      }
      if ((v12 & 0x100000000LL) == 0) {
        if (GameRoutine_d2d4e0(
                *(unsigned int*)(*(_QWORD*)(v10 + 344) + 360LL))) {
          LODWORD(v12) = 1257611790;
        }
        else if ((*(_BYTE*)(*(_QWORD*)(v10 + 16) + 384LL) & 0x10) != 0) {
          LODWORD(v12) = -1101902990;
        }
        else if ((*(_BYTE*)(v10 + 216) & 2) != 0) {
          LODWORD(v12) = 1669996436;
        }
        else {
          LODWORD(v12) = -574916402;
        }
      }
    }
    v13 = GameRoutine_d2cec0(v12);
    *(_BYTE*)(v5 + 345) = 0;
    *(_DWORD*)(v5 + 328) = v13 - 1;
    *(_BYTE*)(v5 + 332) = 1;
  }
  if (*(_QWORD*)(a1 + 40) != 0) {
    v14 = *(_QWORD*)(a1 + 48);
    v15 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 456LL);
    v19 = *(_QWORD*)(a1 + 40);
    v20 = v14;
    if (v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_d477c0(v15 + 8, &v19);
    v16 = v20;
    if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
    }
    v17 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)(a1 + 40) = 0;
    *(_QWORD*)(a1 + 48) = 0;
    if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak(v17);
    }
  }
  return GameRoutine_d12f00(*(_QWORD*)(a1 + 8));
}

__int64 StateActionBase_d48970(__int64 a1, float a2)
{
  _QWORD* v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  atomic_ullong* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      48, 16, 0);
  *(_QWORD*)(v5 + 8) = 0;
  v6 = (atomic_ullong*)(v5 + 8);
  *(_QWORD*)(v5 + 16) = 0;
  v7 = v5;
  v8 = GameData_212ed10[0];
  *(_DWORD*)(v5 + 40) = 0;
  *(float*)(v5 + 32) = a2;
  *(float*)(v5 + 36) = a2;
  *(_QWORD*)v5 = v8 + 2;
  *(_QWORD*)(v5 + 24) = 0x3F80000000000000LL;
  v9 = *(_QWORD*)(a1 + 8);
  v21 = v5 + 24;
  v22 = v5;
  v10 = *(_QWORD*)(v9 + 464);
  atomic_fetch_add_explicit(v6, 1u, memory_order_relaxed);
  GameRoutine_d78b40(v10, &v21);
  v11 = v22;
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v12 = fw_memory_HeapManager_Allocate(*v4, 48, 16, 0);
  *(_QWORD*)(v12 + 8) = 0;
  v13 = (atomic_ullong*)(v12 + 8);
  *(_QWORD*)(v12 + 16) = 0;
  v14 = v12;
  *(_QWORD*)v12 = v8 + 2;
  *(_QWORD*)(v12 + 24) = 0x3F00000000000000LL;
  v15 = *(_QWORD*)(a1 + 8);
  v19 = v12 + 24;
  v20 = v12;
  *(float*)(v12 + 32) = a2 * 0.5;
  *(float*)(v12 + 36) = a2 * 0.5;
  *(float*)(v12 + 40) = fmaxf(a2 * 0.5, 0.0);
  v16 = *(_QWORD*)(*(_QWORD*)(v15 + 488) + 88LL);
  atomic_fetch_add_explicit(v13, 1u, memory_order_relaxed);
  result = GameRoutine_d78b40(v16, &v19);
  v18 = v20;
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    result = std___1___shared_weak_count___release_weak(v18);
  }
  if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    return std___1___shared_weak_count___release_weak(v14);
  }
  return result;
}

_QWORD* StateActionBase_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  v1 = result[7];
  v2 = result;
  *result = game_zview_CharacterController_StateActionBase_vtable;
  if (v1 != 0) {
    result[8] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
  }
  v4 = v2[6];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 StateActionBase_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = a1[7];
  *a1 = game_zview_CharacterController_StateActionBase_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[8] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[6];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, a1);
}

__int64 StateActionBase_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(result + 48);
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0xFFFFFFFE00000000LL;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = result;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
    result = v2;
  }
  v3 = *(_QWORD*)(result + 56);
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 64) = v3;
  return result;
}

#pragma GCC visibility pop
