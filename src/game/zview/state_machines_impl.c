#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e2ddb0(__int64, __int64, __int64);
__int64 GameRoutine_e326e0(_QWORD, _QWORD);
__int64 GameRoutine_ea0220(_QWORD, _QWORD, _QWORD, _QWORD, long double);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fe3df8[])();
extern __int64 GameData_22162a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f338[15];
float GameRoutine_e2d770(__int64, float*, float*, float*, float*);
float GameRoutine_e9f200(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_e334b0(void);
void StateMachines_e31cc0(__int64 a1);
_QWORD* StateMachines_e320e0(_QWORD* result);
__int64 StateMachines_e322d0(__int64 a1);
__int64 StateMachines_e32520(__int64 a1, __int64 a2);
__int64 StateMachines_e32f40(__int64 a1, float* a2, __int64 a3);
__int64 StateMachines_e335a0(__int64 result);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
float CombatLegionManager_e2d770(__int64, float*, float*, float*, float*);
void CombatLegionManager_e2ddb0(__int64, __int64, __int64);
__int64 game_combat_e326e0(__int64, __int64*);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_e334b0_alt1() __asm__("GameRoutine_e334b0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

void StateMachines_e31cc0(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v1;
  _QWORD* v2;
  _BYTE* v4;
  _QWORD* i;
  __int64 v6;
  __int64 v7;
  atomic_ullong* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  __int64 v16;
  float v17;
  __int64 v18;
  __int64 j;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  _QWORD* v25;
  _QWORD* v26;
  _BYTE* v27;
  _QWORD* k;
  __int64 v29;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  float v34[2];

  v1 = *(_QWORD**)(a1 + 136);
  v2 = *(_QWORD**)(a1 + 144);
  if (v1 != v2) {
    do {
      v4 = (_BYTE*)*v1;
      if (*(_BYTE*)(*v1 + 8LL) == 1) {
        (*(void (**)(_QWORD))(*(_QWORD*)v4 + 32LL))(*v1);
        v4[8] = 0;
      }
      v1 += 2;
    } while (v1 != v2);
    v1 = *(_QWORD**)(a1 + 136);
    for (i = *(_QWORD**)(a1 + 144); i != v1; i -= 2) {
      v6 = *(i - 1);
      if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt1(v6);
      }
    }
  }
  *(_QWORD*)(a1 + 144) = v1;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  *(_QWORD*)(v7 + 8) = 0;
  v8 = (atomic_ullong*)(v7 + 8);
  *(_QWORD*)(v7 + 16) = 0;
  *(_WORD*)(v7 + 32) = 0;
  *(_DWORD*)(v7 + 72) = 0;
  *(_QWORD*)v7 = GameData_1fe3df8;
  *(_BYTE*)(v7 + 40) = 14;
  v10 = *(_QWORD*)(a1 + 168);
  v9 = *(_QWORD*)(a1 + 176);
  strcpy((char*)(v7 + 41), "Default");
  *(_QWORD*)(v7 + 64) = v9;
  *(_QWORD*)(v7 + 24) = GameData_212f338[0] + 2;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  *(_QWORD*)(a1 + 160) = v7 + 24;
  *(_QWORD*)(a1 + 168) = v7;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v11 = v7;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak_alt1(v10);
    v7 = v11;
  }
  if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v12 = v7;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  v13 = *(_QWORD*)(a1 + 176);
  v32 = 0;
  v33 = 0;
  v14 = *(_QWORD*)(v13 + 120);
  v15 = *(float*)(v14 + 20);
  v16 = *(_QWORD*)(*(_QWORD*)(v13 + 64) + 8LL);
  v34[0] = *(float*)(v14 + 16);
  v34[1] = v15;
  CombatLegionManager_e2ddb0(v16, (__int64)&v33, (__int64)&v32);
  v31 = 0;
  v17 = CombatLegionManager_e2d770(v16, (float*)&v33, (float*)&v32, v34,
                                   (float*)&v31);
  v18 = *(_QWORD*)(a1 + 184);
  *(float*)(a1 + 192) = v17;
  v20 = *(_QWORD*)(v18 + 16);
  for (j = *(_QWORD*)(v18 + 24); j != v20; j -= 16) {
    v21 = *(_QWORD*)(j - 8);
    if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak_alt1(v21);
    }
  }
  *(_QWORD*)(v18 + 24) = v20;
  v22 = 0;
  v23 = *(_QWORD*)(a1 + 176);
  v24 = *(_DWORD*)(*(_QWORD*)(v23 + 64) + 116LL);
  if (v24 > 4) {
    switch (v24) {
    case 5:
      v22 = 7;
      if ((*(_BYTE*)(v23 + 228) & 1) != 0) {
        goto LABEL_58;
      }
      goto LABEL_46;
    case 6:
      v22 = 3;
      break;
    case 7:
      v22 = 8;
      if ((*(_BYTE*)(v23 + 228) & 1) != 0) {
        goto LABEL_58;
      }
      goto LABEL_46;
    default:
      break;
    }
  LABEL_45:
    if ((*(_BYTE*)(v23 + 228) & 1) != 0) {
      goto LABEL_58;
    }
    goto LABEL_46;
  }
  if (v24 != 2) {
    if (v24 == 3) {
      v22 = 5;
      if ((*(_BYTE*)(v23 + 228) & 1) != 0) {
        goto LABEL_58;
      }
      goto LABEL_46;
    }
    if (v24 == 4) {
      v22 = 6;
      if ((*(_BYTE*)(v23 + 228) & 1) != 0) {
        goto LABEL_58;
      }
      goto LABEL_46;
    }
    goto LABEL_45;
  }
  if ((*(_BYTE*)(v23 + 32) & 1) != 0) {
    v22 = 4;
    if ((*(_BYTE*)(v23 + 228) & 1) != 0) {
      goto LABEL_58;
    }
  }
  else {
    if (*(_QWORD*)(v23 + 72) != 0) {
      v22 = 1;
    }
    else {
      v22 = 2;
    }
    if ((*(_BYTE*)(v23 + 228) & 1) != 0) {
      goto LABEL_58;
    }
  }
LABEL_46:
  v25 = *(_QWORD**)(a1 + 136);
  v26 = *(_QWORD**)(a1 + 144);
  if (v25 != v26) {
    do {
      v27 = (_BYTE*)*v25;
      if (*(_BYTE*)(*v25 + 8LL) == 1) {
        (*(void (**)(_QWORD))(*(_QWORD*)v27 + 32LL))(*v25);
        v27[8] = 0;
      }
      v25 += 2;
    } while (v25 != v26);
    v25 = *(_QWORD**)(a1 + 136);
    for (k = *(_QWORD**)(a1 + 144); k != v25; k -= 2) {
      v29 = *(k - 1);
      if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
        std___1___shared_weak_count___release_weak_alt1(v29);
      }
    }
  }
  *(_QWORD*)(a1 + 144) = v25;
LABEL_58:
  if (*(_BYTE*)(a1 + 28) != 1 || *(_DWORD*)(a1 + 24) != v22) {
    *(_DWORD*)(a1 + 32) = v22;
    *(_BYTE*)(a1 + 36) = 1;
  }
  if ((*(_BYTE*)(a1 + 112) & 1) == 0 && (*(_BYTE*)(a1 + 113) & 1) != 0) {
    StateMachines_e335a0(a1 + 16);
  }
}

_QWORD* StateMachines_e320e0(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  int v3;
  int v4;
  _QWORD* v5;
  _QWORD* v6;
  _BYTE* v7;
  _QWORD* i;
  __int64 v9;

  v1 = result[22];
  v2 = result;
  v3 = 0;
  v4 = *(_DWORD*)(*(_QWORD*)(v1 + 64) + 116LL);
  if (v4 > 4) {
    switch (v4) {
    case 5:
      v3 = 7;
      if ((*(_BYTE*)(v1 + 228) & 1) != 0) {
        goto LABEL_36;
      }
      goto LABEL_24;
    case 6:
      v3 = 3;
      break;
    case 7:
      v3 = 8;
      if ((*(_BYTE*)(v1 + 228) & 1) != 0) {
        goto LABEL_36;
      }
      goto LABEL_24;
    default:
      break;
    }
  LABEL_23:
    if ((*(_BYTE*)(v1 + 228) & 1) != 0) {
      goto LABEL_36;
    }
    goto LABEL_24;
  }
  if (v4 != 2) {
    if (v4 == 3) {
      v3 = 5;
      if ((*(_BYTE*)(v1 + 228) & 1) != 0) {
        goto LABEL_36;
      }
      goto LABEL_24;
    }
    if (v4 == 4) {
      v3 = 6;
      if ((*(_BYTE*)(v1 + 228) & 1) != 0) {
        goto LABEL_36;
      }
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  if ((*(_BYTE*)(v1 + 32) & 1) != 0) {
    v3 = 4;
    if ((*(_BYTE*)(v1 + 228) & 1) != 0) {
      goto LABEL_36;
    }
  }
  else {
    if (*(_QWORD*)(v1 + 72) != 0) {
      v3 = 1;
    }
    else {
      v3 = 2;
    }
    if ((*(_BYTE*)(v1 + 228) & 1) != 0) {
      goto LABEL_36;
    }
  }

LABEL_24:
  v5 = (_QWORD*)result[17];
  v6 = (_QWORD*)result[18];
  if (v5 != v6) {
    do {
      v7 = (_BYTE*)*v5;
      if (*(_BYTE*)(*v5 + 8LL) == 1) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)v7 + 32LL))(*v5);
        v7[8] = 0;
      }
      v5 += 2;
    } while (v5 != v6);
    v5 = (_QWORD*)v2[17];
    for (i = (_QWORD*)v2[18]; i != v5; i -= 2) {
      v9 = *(i - 1);
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v9);
      }
    }
  }
  v2[18] = v5;

LABEL_36:
  if (*((_BYTE*)v2 + 28) != 1 || *((_DWORD*)v2 + 6) != v3) {
    *((_DWORD*)v2 + 8) = v3;
    *((_BYTE*)v2 + 36) = 1;
  }
  if ((v2[14] & 1) == 0 && (*((_BYTE*)v2 + 113) & 1) != 0) {
    return (_QWORD*)StateMachines_e335a0(v2 + 2);
  }
  return result;
}

__int64 StateMachines_e322d0(__int64 a1)
{
  __int64 result;
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

  *(_BYTE*)(a1 + 96) = 1;
  result = StateMachines_e335a0(a1);
  if (*(_BYTE*)(a1 + 12) == 1) {
    v3 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
  }
  if (*(_BYTE*)(a1 + 20) == 1) {
    result = StateMachines_e335a0(a1);
    if (*(_BYTE*)(a1 + 12) == 1) {
      v4 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    }
    if (*(_BYTE*)(a1 + 20) == 1) {
      result = StateMachines_e335a0(a1);
      if (*(_BYTE*)(a1 + 12) == 1) {
        v5 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
      }
      if (*(_BYTE*)(a1 + 20) == 1) {
        result = StateMachines_e335a0(a1);
        if (*(_BYTE*)(a1 + 12) == 1) {
          v6 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
        }
        if (*(_BYTE*)(a1 + 20) == 1) {
          result = StateMachines_e335a0(a1);
          if (*(_BYTE*)(a1 + 12) == 1) {
            v7 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
          }
          if (*(_BYTE*)(a1 + 20) == 1) {
            result = StateMachines_e335a0(a1);
            if (*(_BYTE*)(a1 + 12) == 1) {
              v8 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
              result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
            }
            if (*(_BYTE*)(a1 + 20) == 1) {
              result = StateMachines_e335a0(a1);
              if (*(_BYTE*)(a1 + 12) == 1) {
                v9 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
                result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
              }
              if (*(_BYTE*)(a1 + 20) == 1) {
                result = StateMachines_e335a0(a1);
                if (*(_BYTE*)(a1 + 12) == 1) {
                  v10 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
                  result =
                      (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
                }
                if (*(_BYTE*)(a1 + 20) == 1) {
                  result = StateMachines_e335a0(a1);
                  if (*(_BYTE*)(a1 + 12) == 1) {
                    v11 =
                        *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
                    result =
                        (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11);
                  }
                  if (*(_BYTE*)(a1 + 20) == 1) {
                    result = StateMachines_e335a0(a1);
                    if (*(_BYTE*)(a1 + 12) == 1) {
                      v12 = *(_QWORD*)(*(_QWORD*)(a1 + 24) +
                                       8LL * *(int*)(a1 + 8));
                      result =
                          (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(_WORD*)(a1 + 96) = 256;
  return result;
}

__int64 StateMachines_e32520(__int64 a1, __int64 a2)
{
  _DWORD* v2;
  _DWORD* v3;
  unsigned __int64 v4;
  char* v5;
  __int64 v6;
  __int64* v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  unsigned int v18;
  __int64 v19;
  struct {
    __int64 v21;
    char* v22;
    unsigned __int64 v23;
  } v21_;

  v2 = *(_DWORD**)a2;
  v3 = *(_DWORD**)(a2 + 8);
  v21_.v22 = nullptr;
  v21_.v23 = 0;
  v21_.v21 = 0;
  if (v2 == v3) {
    return game_combat_e326e0(a1, &v21_.v21);
  }
  v4 = 0;
  v5 = nullptr;
  v6 = 0;
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  do {
    if ((unsigned __int64)v5 < v4) {
      *(_DWORD*)v5 = *v2;
      *((_DWORD*)v5 + 1) = 1;
      v5 += 8;
    }
    else {
      v8 = &v5[-v6];
      v9 = (__int64)&v5[-v6] >> 3;
      v10 = v9 + 1;
      if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
        GameRoutine_e334b0_alt1();
      }
      if ((__int64)(v4 - v6) >> 2 > v10) {
        v10 = (__int64)(v4 - v6) >> 2;
      }
      if (v4 - v6 >= 0x7FFFFFFFFFFFFFF8LL) {
        v11 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v11 = v10;
      }
      if (v11 != 0) {
        if (v11 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v12 = fw_memory_HeapManager_Allocate_alt1(*v7, 8 * v11, 16, 0);
      }
      else {
        v12 = 0;
      }
      v13 = &v8[v12];
      v4 = v12 + 8 * v11;
      v14 = (unsigned __int64)&v5[-v6];
      v15 = (__int64)&v8[v12 + -8 * v9];
      v5 = &v8[v12 + 8];
      *(_DWORD*)v13 = *v2;
      *((_DWORD*)v13 + 1) = 1;
      memcpy_alt1(v15, v6, v14);
      if (v6 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*v7 + 200) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v7 + v16, v6);
      }
      v6 = v15;
    }
    ++v2;
  } while (v2 != v3);
  v21_.v22 = v5;
  v21_.v23 = v4;
  v21_.v21 = v6;
  result = game_combat_e326e0(a1, &v21_.v21);
  if (v6 != 0) {
    v18 = result;
    v19 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v7 + v19, v6);
    return v18;
  }
  return result;
}

__int64 StateMachines_e32f40(__int64 a1, float* a2, __int64 a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  long double v10;
  float v11;
  bool v12;
  unsigned __int64 add;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;

  if ((float)((float)(a2[1] * a2[1]) + (float)(*a2 * *a2)) > 0.0) {
    v3 = *(_QWORD*)(a1 + 176);
    v8 = *(_QWORD*)(v3 + 136);
    v7 = *(_QWORD*)(v3 + 144);
    if (v7 != 0) {
      v9 = *(_QWORD*)(v3 + 136);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
      *(float*)&v10 = fmaxf(GameRoutine_e9f200(v9), 0.6);
      v11 = *(float*)(v8 + 88);
      v12 = (*(_BYTE*)(v8 + 92) & (v11 < *(float*)&v10)) == 0;
      add = atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL);
      if (!v12) {
        *(float*)&v10 = v11;
      }
      if (add == 0) {
        v14 = LODWORD(v10);
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
        LODWORD(v10) = v14;
      }
    }
    else {
      *(float*)&v10 = fmaxf(GameRoutine_e9f200(*(_QWORD*)(v3 + 136)), 0.6);
      if ((*(_BYTE*)(v8 + 92) & (*(float*)(v8 + 88) < *(float*)&v10)) != 0) {
        LODWORD(v10) = *(_DWORD*)(v8 + 88);
      }
    }
    v15 = *(_QWORD*)(GameData_22162a8 + 32);
    v16 = *(_QWORD*)(a1 + 176);
    v17 = *(_QWORD*)(v16 + 136);
    v18 = *(_QWORD*)(v16 + 144);
    if (v18 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
      v19 = GameRoutine_ea0220(v15, v17, a2, a3, v10);
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if ((v19 & 1) != 0) {
          return 1;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak(v18);
        if ((v19 & 1) != 0) {
          return 1;
        }
      }
    }
    else if ((GameRoutine_ea0220(v15, v17, a2, a3, v10) & 1) != 0) {
      return 1;
    }
  }
  return 0;
}

__int64 StateMachines_e335a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (*(_BYTE*)(result + 20) == 1) {
    v1 = result;
    if (*(_BYTE*)(result + 12) == 1) {
      v2 = *(_QWORD*)(*(_QWORD*)(result + 24) + 8LL * *(int*)(result + 8));
      (*(void (**)(__int64))(*(_QWORD*)v2 + 40LL))(v2);
    }
    v3 = *(_QWORD*)(v1 + 80);
    if (v3 != 0) {
      v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
    }
    if ((*(_BYTE*)(v1 + 20) & 1) == 0 ||
        (v4 = *(int*)(v1 + 16), *(_BYTE*)(v1 + 12) = 1,
         v5 = *(_QWORD*)(v1 + 24), *(_DWORD*)(v1 + 8) = v4,
         v3 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 8 * v4) + 16LL))(
             *(_QWORD*)(v5 + 8 * v4)),
         (*(_BYTE*)(v1 + 12) & 1) == 0)) {
      GameRoutine_8123d0(v3);
    }
    v6 = *(_QWORD*)(*(_QWORD*)(v1 + 24) + 8LL * *(int*)(v1 + 8));
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    if (*(_BYTE*)(v1 + 20) == 1 && *(_BYTE*)(v1 + 12) == 1 &&
        *(_DWORD*)(v1 + 16) == *(_DWORD*)(v1 + 8)) {
      *(_BYTE*)(v1 + 20) = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
