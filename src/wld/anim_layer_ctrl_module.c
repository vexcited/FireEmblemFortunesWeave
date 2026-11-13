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
__attribute__((swiftcall)) void BlendLayer_d2b820(PSEUDO_X8, __int64 result);
__int64
AnimLayerCtrlModule_ce49a0_alt1(__int64 a1,
                                int a2) __asm__("AnimLayerCtrlModule_ce49a0");
__attribute__((swiftcall)) void
AnimLayerCtrlModule_ce5500(PSEUDO_X8 x8_, unsigned __int64* result,
                           unsigned int a2, __int64 a3, unsigned int a4,
                           __int64 a5);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void AnimLayerCtrlModule_ce49a0(__int64 a1, int a2);

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
  __int64 v21;
  __int64 v22;
  __int64 v23;
  void (***v24)(_QWORD);
  void (***v25)(_QWORD);
  void (**v26)(_QWORD);
  __int64 v27;
  __int64 v28;
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
      v12 = *(_QWORD*)(v11 - 40);
      if (v12 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v13, v12);
      }
      v14 = v11 - 64;
      v15 = *(_QWORD*)(v11 - 64);
      if (v15 != 0) {
        *(_QWORD*)(v11 - 56) = v15;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v16, v15);
      }
      v11 -= 64;
    } while (v14 != v9);
    v17 = a1[11];
    a1[12] = v9;
    v9 = v17;
    if (v17 != 0) {
    LABEL_22:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v18, v9);
    }
  }
  v19 = a1[7];
  if (v19 != 0) {
    v20 = *(_QWORD*)v10;
    a1[8] = v19;
    v21 = 128;
    if (*(_QWORD*)(v20 + 200) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v20 + v21, v19);
  }
  v22 = a1[4];
  if (v22 != 0) {
    v23 = a1[5];
    if (v22 == v23) {
      goto LABEL_35;
    }
    v24 = (void (***)(_QWORD))(v23 - 72);
    v25 = (void (***)(_QWORD))(v23 - 72);
    do {
      v26 = *v25;
      v25 -= 9;
      (*v26)(v24);
      v7 = v24 == (void (***)(_QWORD))v22;
      v24 = v25;
    } while (!v7);
    v27 = a1[4];
    a1[5] = v22;
    v22 = v27;
    if (v27 != 0) {
    LABEL_35:
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v28, v22);
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

void AnimLayerCtrlModule_ce49a0(__int64 a1, int a2)
{
  int* v3;
  int* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    int* v10;
    int* v11;
  } v10_;

  BlendLayer_d2b820((void*)((__int64*)&v10_.v10),
                    *(_QWORD*)(a1 + 32) + 72LL * a2);
  v3 = v10_.v10;
  v4 = v10_.v11;
  if (v10_.v10 != v10_.v11) {
    do {
      v5 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 72LL) + 104LL * *v3;
      v7 = *(_QWORD*)(v5 + 16);
      v6 = (_QWORD*)(v5 + 16);
      if (v7 != 0) {
        v8 = v6[1];
        *v6 = 0;
        v6[1] = 0;
        if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak_alt1(v8);
        }
      }
      ++v3;
    } while (v3 != v4);
    v3 = v10_.v10;
  }
  if (v3 != nullptr) {
    v10_.v11 = v3;
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v3);
  }
}

__attribute__((swiftcall)) void

AnimLayerCtrlModule_ce5500(PSEUDO_X8 x8_, unsigned __int64* result,
                           unsigned int a2, __int64 a3, unsigned int a4,
                           __int64 a5)
{
  __int64 a6 = (__int64)PSEUDO_X8_VALUE(x8_);
  signed __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  int v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned int v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  _QWORD* v19;
  unsigned __int64 v20;
  int v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;
  unsigned __int64 v29;
  _QWORD* v30;
  unsigned __int64 v31;
  _QWORD* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;

  v6 = a4 - (unsigned __int64)a2 + 8 * (a3 - (_QWORD)result);
  if (v6 >= 1) {
    if (a2 != 0) {
      if (v6 >= (unsigned __int64)(64 - a2)) {
        v7 = 64 - a2;
      }
      else {
        v7 = a4 - (unsigned __int64)a2 + 8 * (a3 - (_QWORD)result);
      }
      v6 -= v7;
      v8 = (0xFFFFFFFFFFFFFFFFLL >>
            (64 - (unsigned __int8)a2 - (unsigned __int8)v7)) &
           (-1LL << a2) & *result;
      v9 = *(_DWORD*)(a5 + 8);
      v10 = (unsigned int)(64 - v9);
      v11 = -1LL << v9;
      if (v7 >= v10) {
        v12 = v10;
      }
      else {
        v12 = v7;
      }
      v13 = v7 - v12;
      **(_QWORD**)a5 &= ~((0xFFFFFFFFFFFFFFFFLL >>
                           ((unsigned __int8)v10 - (unsigned __int8)v12)) &
                          v11);
      v14 = *(_DWORD*)(a5 + 8);
      v15 = v14 > a2;
      v16 = v8 >> ((unsigned __int8)a2 - (unsigned __int8)v14);
      v17 = v8 << ((unsigned __int8)v14 - (unsigned __int8)a2);
      if (!v15) {
        v17 = v16;
      }
      **(_QWORD**)a5 |= v17;
      v18 = *(unsigned int*)(a5 + 8);
      v19 = *(_QWORD**)a5;
      v20 = v12 + v18;
      v21 = ((_BYTE)v18 + (_BYTE)v12) & 0x3F;
      *(_DWORD*)(a5 + 8) = v21;
      v22 = (_QWORD*)((char*)v19 + ((v20 >> 3) & 0x3FFFFFF8));
      *(_QWORD*)a5 = v22;
      if (v13 >= 1) {
        v21 = v13;
        *v22 &= ~(0xFFFFFFFFFFFFFFFFLL >> (-(char)v13 & 63));
        **(_QWORD**)a5 |= v8 >> ((unsigned __int8)v12 + (unsigned __int8)a2);
        *(_DWORD*)(a5 + 8) = v13;
      }
      ++result;
    }
    else {
      v21 = *(_DWORD*)(a5 + 8);
    }
    v23 = v6 - 64;
    v24 = (unsigned int)(64 - v21);
    if (v6 < 64) {
      v23 = v6;
    }
    else {
      v25 = -1LL << v21;
      v26 = ~(-1LL << v21);
      if ((v23 & 0x40) == 0) {
        v27 = *result++;
        **(_QWORD**)a5 &= v26;
        **(_QWORD**)a5 |= v27 << *(_DWORD*)(a5 + 8);
        v28 = *(_QWORD**)a5;
        *(_QWORD*)a5 += 8LL;
        v28[1] &= v25;
        **(_QWORD**)a5 |= v27 >> v24;
        v6 -= 64LL;
      }
      if ((unsigned __int64)v23 >= 0x40) {
        do {
          v29 = *result;
          **(_QWORD**)a5 &= v26;
          **(_QWORD**)a5 |= v29 << *(_DWORD*)(a5 + 8);
          v30 = *(_QWORD**)a5;
          *(_QWORD*)a5 += 8LL;
          v30[1] &= v25;
          **(_QWORD**)a5 |= v29 >> v24;
          v31 = result[1];
          result += 2;
          **(_QWORD**)a5 &= v26;
          **(_QWORD**)a5 |= v31 << *(_DWORD*)(a5 + 8);
          v32 = *(_QWORD**)a5;
          *(_QWORD*)a5 += 8LL;
          v32[1] &= v25;
          **(_QWORD**)a5 |= v31 >> v24;
          v23 = v6 - 128;
          v33 = v6 - 192;
          v6 -= 128LL;
        } while (v33 < 0xFFFFFFFFFFFFFF80LL);
      }
    }
    if (v23 >= 1) {
      v34 = *result & (0xFFFFFFFFFFFFFFFFLL >> (-(char)v23 & 63));
      if (v23 >= v24) {
        v35 = v24;
      }
      else {
        v35 = v23;
      }
      **(_QWORD**)a5 &= ~((-1LL << *(_DWORD*)(a5 + 8)) &
                          (0xFFFFFFFFFFFFFFFFLL >>
                           ((unsigned __int8)v24 - (unsigned __int8)v35)));
      **(_QWORD**)a5 |= v34 << *(_DWORD*)(a5 + 8);
      v36 = *(unsigned int*)(a5 + 8);
      v37 = *(_QWORD**)a5;
      *(_DWORD*)(a5 + 8) = ((_BYTE)v36 + (_BYTE)v35) & 0x3F;
      v38 = (_QWORD*)((char*)v37 +
                      (((unsigned __int64)(v35 + v36) >> 3) & 0x3FFFFFF8));
      *(_QWORD*)a5 = v38;
      if (v23 - v35 >= 1) {
        *v38 &= ~(0xFFFFFFFFFFFFFFFFLL >>
                  ((unsigned __int8)v35 - (unsigned __int8)v23));
        **(_QWORD**)a5 |= v34 >> v35;
        *(_DWORD*)(a5 + 8) = v23 - v35;
      }
    }
  }
  *(_QWORD*)a6 = *(_QWORD*)a5;
  *(_DWORD*)(a6 + 8) = *(_DWORD*)(a5 + 8);
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
