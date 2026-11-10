#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* CharacterModel_1070320(__int64, unsigned int);
_QWORD* GameRoutine_d2b700(_QWORD* __return_ptr, _QWORD);
__int64 AnimLayerCtrlModule_ce3880(_QWORD, _QWORD, _QWORD, float);
__int64 CharacterModel_1070c00(_QWORD, _QWORD);
__int64 GameRoutine_1079580(_QWORD, _QWORD, float, float, float);
__int64 GameRoutine_108c760(_QWORD);
__int64 SkeletalBlendCallback_ce4b70(_QWORD, _QWORD, float);
__int64 SkeletalBlendCallback_ce4ec0(_QWORD, _QWORD, float);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
void* GameRoutine_1070860(__int64, int);
__int64 CharacterAnimator_Unknown8(__int64 a1);
__int64 CharacterAnimator_1079d90(__int64 a1, __int64 a2);
__int64 CharacterAnimator_1079e10(__int64 a1);
void CharacterAnimator_1079fe0(__int64 a1);
__int64 CharacterAnimator_107a6f0(__int64 a1);
__int64 CharacterAnimator_107a7e0(__int64 a1);
__int64 CharacterAnimator_107a870(__int64 a1, float a2);
float* CharacterAnimator_107a920(float* result, float a2);
bool CharacterAnimator_107aaa0(__int64 a1, int a2);

__int64 CharacterAnimator_Unknown8(__int64 a1)
{
  return GameRoutine_1079580(a1, 119788728, -1.0, -1.0, 1.0);
}

__int64 CharacterAnimator_1079d90(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;

  v2 = *(_QWORD*)(a1 + 40);
  v3 = *(_QWORD*)(v2 + 392);
  v4 = *(_QWORD*)(v2 + 400);
  if (v4 == 0) {
    return CharacterModel_1070c00(*(_QWORD*)(v3 + 11608), a2);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  result = CharacterModel_1070c00(*(_QWORD*)(v3 + 11608), a2);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v6 = result;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    return v6;
  }
  return result;
}

__int64 CharacterAnimator_1079e10(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float* v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;

  v2 = GameRoutine_108c760(*(unsigned int*)(a1 + 120));
  if ((v2 & 1) != 0) {
    goto LABEL_28;
  }
  v3 = *(_QWORD*)(a1 + 96);
  if (v3 == 0) {
    goto LABEL_28;
  }
  v4 = *(_QWORD*)(v3 + 32);
  if (*(_BYTE*)(v4 + 124) != 1) {
    goto LABEL_28;
  }
  v5 = (__int64*)(*(_QWORD*)(v4 + 96) + 56LL * *(int*)(v4 + 120));
  v7 = *v5;
  v6 = v5[1];
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v7 != 0) {
    LODWORD(v8) = *(_DWORD*)(v7 + 108);
    if (v6 == 0) {
      goto LABEL_12;
    }
  }
  else {
    LODWORD(v8) = 0;
    if (v6 == 0) {
      goto LABEL_12;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
LABEL_12:
  if (v7 == 0) {
    if ((*(_BYTE*)(v4 + 124) & 1) == 0) {
      GameRoutine_8123d0(v2);
    }
    v8 = *(_QWORD*)(*(_QWORD*)(v4 + 96) + 56LL * *(int*)(v4 + 120) + 16);
    if ((v8 & 0x100000000LL) == 0) {
      goto LABEL_28;
    }
  }
  v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 24) + 72LL) + 104LL * (int)v8);
  if (v9 == 0) {
    goto LABEL_28;
  }
  v10 = *(float**)(v9 + 16);
  v11 = v10 != nullptr ? *v10 : 0.0f;
  v12 = *(_QWORD*)(a1 + 40);
  v13 = *(unsigned int*)(a1 + 120);
  v14 = *(_QWORD*)(v12 + 392);
  v15 = *(_QWORD*)(v12 + 400);
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
    v16 = CharacterModel_1070c00(*(_QWORD*)(v14 + 11608), v13);
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v17 = v16;
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
      v16 = v17;
    }
  }
  else {
    v16 = CharacterModel_1070c00(*(_QWORD*)(v14 + 11608), v13);
  }
  if ((float)(*(float*)(v16 + 32) * 60.0f) <= v11) {
    goto LABEL_28;
  }
  v18 = *(_QWORD*)(v9 + 16);
  if (v18 == 0) {
    if (v11 < 0.0f) {
      goto LABEL_26;
    }
  LABEL_28:
    v19 = 1;
    return v19 & 1;
  }
  if (*(float*)(v18 + 8) <= v11) {
    goto LABEL_28;
  }
LABEL_26:
  v19 = (v18 == 0) | *(_BYTE*)(v9 + 168);
  return v19 & 1;
}

void CharacterAnimator_1079fe0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float* v14;
  __int64 v15;
  _BYTE* v16;
  __int64 v17;
  void* v18;

  v1 = *(_QWORD*)(a1 + 40);
  v3 = *(_QWORD*)(v1 + 392);
  v4 = *(_QWORD*)(v1 + 400);
  if (v4 == 0) {
    v5 = *(_QWORD*)(v3 + 11608);
    v6 = *(_QWORD*)(a1 + 96);
    if (v6 != 0) {
      goto LABEL_5;
    }
  LABEL_12:
    v8 = 0.0f;
    goto LABEL_26;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v5 = *(_QWORD*)(v3 + 11608);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v6 = *(_QWORD*)(a1 + 96);
  if (v6 == 0) {
    goto LABEL_12;
  }
LABEL_5:
  v7 = *(_QWORD*)(v6 + 32);
  v8 = 0.0f;
  if (*(_BYTE*)(v7 + 124) == 1) {
    v9 = (__int64*)(*(_QWORD*)(v7 + 96) + 56LL * *(int*)(v7 + 120));
    v11 = *v9;
    v10 = v9[1];
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v11 != 0) {
      LODWORD(v12) = *(_DWORD*)(v11 + 108);
      if (v10 == 0) {
        goto LABEL_15;
      }
    }
    else {
      LODWORD(v12) = 0;
      if (v10 == 0) {
        goto LABEL_15;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
      if (v11 == 0) {
      LABEL_16:
        if ((*(_BYTE*)(v7 + 124) & 1) == 0) {
          GameRoutine_8123d0(a1);
        }
        v12 = *(_QWORD*)(*(_QWORD*)(v7 + 96) + 56LL * *(int*)(v7 + 120) + 16);
        if ((v12 & 0x100000000LL) == 0) {
          goto LABEL_23;
        }
      }
    LABEL_20:
      v13 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 24) + 72LL) + 104LL * (int)v12);
      if (v13 != 0) {
        v14 = *(float**)(v13 + 16);
        if (v14 != nullptr) {
          v8 = (float)(*v14 * 0.016667f) * 60.0f;
        }
      }
      goto LABEL_23;
    }
  LABEL_15:
    if (v11 == 0) {
      goto LABEL_16;
    }
    goto LABEL_20;
  }
LABEL_23:
  v15 = *(_QWORD*)(a1 + 96);
  if (v15 != 0) {
    v16 = CharacterModel_1070320(v5, *(_DWORD*)(a1 + 120));
    if (v16 != nullptr) {
      AnimLayerCtrlModule_ce3880(v15, v16, 1, 0.0f);
      SkeletalBlendCallback_ce4b70(v15, 1, v8);
    }
  }
LABEL_26:
  v17 = *(_QWORD*)(a1 + 104);
  if (v17 != 0) {
    v18 = GameRoutine_1070860(v5, *(_DWORD*)(a1 + 120));
    if (v18 != nullptr) {
      AnimLayerCtrlModule_ce3880(v17, v18, 1, 0.0f);
      SkeletalBlendCallback_ce4b70(v17, 1, v8);
    }
  }
}

__int64 CharacterAnimator_107a6f0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 96);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(v1 + 32);
  if (*(_BYTE*)(v2 + 124) != 1) {
    return 0;
  }
  v3 = (__int64*)(*(_QWORD*)(v2 + 96) + 56LL * *(int*)(v2 + 120));
  v5 = *v3;
  v4 = v3[1];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v5 != 0) {
    LODWORD(v6) = *(_DWORD*)(v5 + 108);
    if (v4 == 0) {
    LABEL_10:
      if (v5 != 0) {
        return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 24) + 72LL) +
                          104LL * (int)v6);
      }
      goto LABEL_11;
    }
  }
  else {
    LODWORD(v6) = 0;
    if (v4 == 0) {
      goto LABEL_10;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_10;
  }
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  if (v5 != 0) {
    return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 24) + 72LL) + 104LL * (int)v6);
  }
LABEL_11:
  if ((*(_BYTE*)(v2 + 124) & 1) == 0) {
    GameRoutine_8123d0(a1);
  }
  v6 = *(_QWORD*)(*(_QWORD*)(v2 + 96) + 56LL * *(int*)(v2 + 120) + 16);
  if ((v6 & 0x100000000LL) == 0) {
    return 0;
  }
  return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 24) + 72LL) + 104LL * (int)v6);
}

__int64 CharacterAnimator_107a7e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 40);
  v2 = *(unsigned int*)(a1 + 120);
  v3 = *(_QWORD*)(v1 + 392);
  v4 = *(_QWORD*)(v1 + 400);
  if (v4 == 0) {
    return CharacterModel_1070c00(*(_QWORD*)(v3 + 11608), v2);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  result = CharacterModel_1070c00(*(_QWORD*)(v3 + 11608), v2);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v6 = result;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    return v6;
  }
  return result;
}

__int64 CharacterAnimator_107a870(__int64 a1, float a2)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 96);
  if (v2 != 0) {
    SkeletalBlendCallback_ce4ec0(*(_QWORD*)(a1 + 96), 1, a2 * 60.0);
    if (*(_BYTE*)(a1 + 157) == 1) {
      SkeletalBlendCallback_ce4ec0(v2, 0, a2 * 60.0);
    }
  }
  result = *(_QWORD*)(a1 + 104);
  if (result != 0) {
    return SkeletalBlendCallback_ce4ec0(result, 1, a2 * 60.0);
  }
  return result;
}

float* CharacterAnimator_107a920(float* result, float a2)
{
  __int64 v2;
  float* v4;
  __int64 v5;
  long double v6;
  int* v7;
  int* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  int* v14;
  int* v15;
  int v16;
  __int64 v17;
  int* v18;
  int* v19;

  v2 = *((_QWORD*)result + 12);
  v4 = result;
  if (v2 != 0) {
    v5 = *(_QWORD*)(v2 + 32);
    if (*(_BYTE*)(v5 + 124) == 1) {
      result = (float*)GameRoutine_d2b700(&v18, *(_QWORD*)(v5 + 96) +
                                                    56LL * *(int*)(v5 + 120));
      v7 = v18;
      v8 = v19;
      if (v18 != v19) {
        do {
          v9 = *v7++;
          *(float*)(*(_QWORD*)(*(_QWORD*)(v2 + 24) + 72LL) + 104LL * v9 + 8) =
              a2;
        } while (v7 != v8);
        v7 = v18;
      }
      if (v7 != nullptr) {
        v19 = v7;
        v10 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v10 = 56;
        }
        result = (float*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v6);
      }
    }
  }
  v11 = *((_QWORD*)v4 + 13);
  if (v11 != 0) {
    v12 = *(_QWORD*)(v11 + 32);
    if (*(_BYTE*)(v12 + 124) == 1) {
      result = (float*)GameRoutine_d2b700(&v18, *(_QWORD*)(v12 + 96) +
                                                    56LL * *(int*)(v12 + 120));
      v14 = v18;
      v15 = v19;
      if (v18 != v19) {
        do {
          v16 = *v14++;
          *(float*)(*(_QWORD*)(*(_QWORD*)(v11 + 24) + 72LL) + 104LL * v16 + 8) =
              a2;
        } while (v14 != v15);
        v14 = v18;
      }
      if (v14 != nullptr) {
        v19 = v14;
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        result = (float*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v13);
      }
    }
  }
  v4[37] = a2;
  return result;
}

bool CharacterAnimator_107aaa0(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  unsigned __int64 v9;
  __int64** v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v15;

  v2 = *(_QWORD*)(a1 + 40);
  v4 = *(_QWORD*)(v2 + 392);
  v5 = *(_QWORD*)(v2 + 400);
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    v6 = *(_QWORD*)(v4 + 11608);
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  }
  else {
    v6 = *(_QWORD*)(v4 + 11608);
  }
  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v8 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v9 = GameData_22356f8 <= (unsigned __int64)a2
               ? a2 % (unsigned __int64)GameData_22356f8
               : a2;
    }
    else {
      v9 = v8 & a2;
    }
    v10 = *(__int64***)(GameData_22356f0 + 8 * v9);
    if (v10 != nullptr) {
      v11 = *v10;
      if (*v10 != nullptr) {
        v12 = 639;
        if ((GameData_22356f8 & v8) == 0) {
          while (1) {
            v15 = v11[1];
            if (v15 == a2) {
              if (*((_DWORD*)v11 + 4) == a2) {
                goto LABEL_32;
              }
            }
            else if ((v15 & v8) != v9) {
              return *(_QWORD*)(v6 + 8 * v12) != 0;
            }
            v11 = (__int64*)*v11;
            if (v11 == nullptr) {
              return *(_QWORD*)(v6 + 8 * v12) != 0;
            }
          }
        }
        while (1) {
          v13 = v11[1];
          if (v13 == a2) {
            if (*((_DWORD*)v11 + 4) == a2) {
            LABEL_32:
              v12 = *((int*)v11 + 5);
              return *(_QWORD*)(v6 + 8 * v12) != 0;
            }
          }
          else {
            if (v13 >= GameData_22356f8) {
              v13 %= (unsigned __int64)GameData_22356f8;
            }
            if (v13 != v9) {
              return *(_QWORD*)(v6 + 8 * v12) != 0;
            }
          }
          v11 = (__int64*)*v11;
          if (v11 == nullptr) {
            return *(_QWORD*)(v6 + 8 * v12) != 0;
          }
        }
      }
    }
  }
  v12 = 639;
  return *(_QWORD*)(v6 + 8 * v12) != 0;
}

#pragma GCC visibility pop
