#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d2ae40(_QWORD);
__int64 GameRoutine_d2af80(_QWORD, float);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*wld_AnimLayerCtrlModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 AnimLayerCtrlModule_Destructor(_QWORD* a1);
__int64 AnimLayerCtrlModule_Unknown4(__int64 a1);
__int64 AnimLayerCtrlModule_Unknown6(__int64 a1);
__int64 GameRoutine_d2a4a0(_QWORD);
__int64 GameRoutine_d2a940(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 AnimLayerCtrlModule_ce3880(__int64 a1, __int64 a2, int a3);
__int64 AnimLayerCtrlModule_ce3970(__int64 a1, __int64 a2, __int64 a3, int a4);

__int64 AnimLayerCtrlModule_Destructor(_QWORD* a1)
{
  void (***v2)(_QWORD);
  void (***v3)(_QWORD);
  void (***v4)(_QWORD);
  void (***v5)(_QWORD);
  void (**v6)(_QWORD);
  bool v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  void (***v21)(_QWORD);
  void (***v22)(_QWORD);
  void (***v23)(_QWORD);
  void (***v24)(_QWORD);
  void (**v25)(_QWORD);
  __int64 v26;
  __int64 v27;
  __int64 result;

  *a1 = wld_AnimLayerCtrlModule_vtable;
  v3 = (void (***)(_QWORD))a1[4];
  v2 = (void (***)(_QWORD))a1[5];
  if (v3 != v2) {
    v4 = v2 - 9;
    v5 = v2 - 9;
    do {
      v6 = *v5;
      v5 -= 9;
      (*v6)(v4);
      v7 = v4 == v3;
      v4 = v5;
    } while (!v7);
  }
  v8 = a1[14];
  a1[5] = v3;
  a1[14] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = a1[11];
  v10 = fw_memory_g_heap_manager_ptr;
  if (v9 != 0) {
    v11 = a1[12];
    if (v9 == v11) {
      goto LABEL_22;
    }
    do {
      if (*(_QWORD*)(v11 - 40) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v12);
      }
      v13 = v11 - 64;
      v14 = *(_QWORD*)(v11 - 64);
      if (v14 != 0) {
        *(_QWORD*)(v11 - 56) = v14;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v15);
      }
      v11 -= 64;
    } while (v13 != v9);
    v16 = a1[11];
    a1[12] = v9;
    if (v16 != 0) {
    LABEL_22:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17);
    }
  }
  v18 = a1[7];
  if (v18 != 0) {
    v19 = *(_QWORD*)v10;
    a1[8] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(v19 + v20);
  }
  v21 = (void (***)(_QWORD))a1[4];
  if (v21 != nullptr) {
    v22 = (void (***)(_QWORD))a1[5];
    if (v21 == v22) {
      goto LABEL_35;
    }
    v23 = v22 - 9;
    v24 = v22 - 9;
    do {
      v25 = *v24;
      v24 -= 9;
      (*v25)(v23);
      v7 = v23 == v21;
      v23 = v24;
    } while (!v7);
    v26 = a1[4];
    a1[5] = v21;
    if (v26 != 0) {
    LABEL_35:
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v27);
    }
  }
  result = a1[3];
  a1[3] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 AnimLayerCtrlModule_Unknown4(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 32);
  v2 = *(_QWORD*)(a1 + 40);
  while (v1 != v2) {
    v4 = *(_QWORD*)(v1 + 24);
    v5 = *(_QWORD*)(v1 + 32);
    while (v4 != v5) {
      if (*(_BYTE*)(v4 + 41) == 1) {
        *(_BYTE*)(v4 + 41) = 0;
        GameRoutine_d2ae40(v4);
      }
      v4 += 56;
    }
    v1 += 72;
  }
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 24) + 32LL))(
      *(_QWORD*)(a1 + 24));
}

__int64 AnimLayerCtrlModule_Unknown6(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  float v4;

  v1 = *(_QWORD*)(a1 + 32);
  v2 = *(_QWORD*)(a1 + 40);
  if (v1 != v2) {
    v4 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 496LL) + 16LL) *
                 16.683f) /
         1000.0f;
    do {
      GameRoutine_d2af80(v1, v4);
      v1 += 72;
    } while (v1 != v2);
  }
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 24) + 48LL))(
      *(_QWORD*)(a1 + 24));
}

__int64 AnimLayerCtrlModule_ce3880(__int64 a1, __int64 a2, int a3)
{
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v5 = GameRoutine_d2a4a0(*(_QWORD*)(a1 + 32) + 72LL * a3);
  v6 = *(_QWORD*)(a1 + 32) + 72LL * a3;
  if (*(_BYTE*)(v6 + 52) != 1) {
  LABEL_12:
    GameRoutine_8123d0(v5);
  }
  v7 = (__int64*)(*(_QWORD*)(v6 + 24) + 56LL * *(int*)(v6 + 48));
  v9 = *v7;
  v8 = v7[1];
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v9 != 0) {
    LODWORD(v10) = *(_DWORD*)(v9 + 108);
    if (v8 == 0) {
    LABEL_9:
      if (v9 != 0) {
        return (unsigned int)v10;
      }
      goto LABEL_10;
    }
  }
  else {
    LODWORD(v10) = 0;
    if (v8 == 0) {
      goto LABEL_9;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_9;
  }
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  v5 = std___1___shared_weak_count___release_weak(v8);
  if (v9 != 0) {
    return (unsigned int)v10;
  }
LABEL_10:
  if ((*(_BYTE*)(v6 + 52) & 1) == 0) {
    goto LABEL_12;
  }
  v10 = *(_QWORD*)(*(_QWORD*)(v6 + 24) + 56LL * *(int*)(v6 + 48) + 16);
  if ((v10 & 0x100000000LL) == 0) {
    goto LABEL_12;
  }
  return (unsigned int)v10;
}

__int64 AnimLayerCtrlModule_ce3970(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v6 = GameRoutine_d2a940(*(_QWORD*)(a1 + 32) + 72LL * a4);
  v7 = *(_QWORD*)(a1 + 32) + 72LL * a4;
  if (*(_BYTE*)(v7 + 52) != 1) {
  LABEL_12:
    GameRoutine_8123d0(v6);
  }
  v8 = (__int64*)(*(_QWORD*)(v7 + 24) + 56LL * *(int*)(v7 + 48));
  v10 = *v8;
  v9 = v8[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v10 != 0) {
    LODWORD(v11) = *(_DWORD*)(v10 + 108);
    if (v9 == 0) {
    LABEL_9:
      if (v10 != 0) {
        return (unsigned int)v11;
      }
      goto LABEL_10;
    }
  }
  else {
    LODWORD(v11) = 0;
    if (v9 == 0) {
      goto LABEL_9;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_9;
  }
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  v6 = std___1___shared_weak_count___release_weak(v9);
  if (v10 != 0) {
    return (unsigned int)v11;
  }
LABEL_10:
  if ((*(_BYTE*)(v7 + 52) & 1) == 0) {
    goto LABEL_12;
  }
  v11 = *(_QWORD*)(*(_QWORD*)(v7 + 24) + 56LL * *(int*)(v7 + 48) + 16);
  if ((v11 & 0x100000000LL) == 0) {
    goto LABEL_12;
  }
  return (unsigned int)v11;
}

#pragma GCC visibility pop
