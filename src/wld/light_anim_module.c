#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_c51a60(_QWORD, _QWORD, float);
__int64 GameRoutine_c5f0c0(unsigned __int64, __int64*);
__int64 GameRoutine_c60200(_QWORD);
__int64 fmodf(float, float);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*wld_LightAnimModule_vtable[])();
extern __int64 GameData_212c638;
extern __int64 fw_memory_g_heap_manager_ptr;
float GameRoutine_c51ba0(__int64, float);
__int64 LightAnimModule_Destructor(_QWORD* a1);
__int64 LightAnimModule_DeletingDestructor(_QWORD* a1);
__int64 LightAnimModule_c5f890(unsigned __int64 a1, __int64* a2);
__int64 LightAnimModule_Unknown5(__int64 result);
void LightAnimModule_c5fca0(__int64 a1, float*** a2, int a3, float a4);
__int64
LightAnimModule_c51a60_alt2(__int64 result, int a2,
                            long double a3) __asm__("LightAnimModule_c51a60");
__int64
LightAnimModule_c60000_alt1(__int64 result) __asm__("LightAnimModule_c60000");
__int64** LightAnimModule_c60200(__int64** result);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void LightAnimModule_c51a60_alt1(__int64, int,
                                 float) __asm__("LightAnimModule_c51a60");
float fmodf_alt1(float, float) __asm__("fmodf");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void LightAnimModule_c51a60(__int64 a1, int a2, float a3);
void LightAnimModule_c60000(_QWORD* a1);

void LightAnimModule_c51a60(__int64 a1, int a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 i;
  float v8;
  float v9;
  int v10;
  __int128 v11;

  v3 = *(_QWORD*)(a1 + 136);
  for (i = *(_QWORD*)(a1 + 144); v3 != i; v3 += 48) {
    if (*(_BYTE*)(v3 + 8) == 1 && *(_QWORD*)(v3 + 32) != *(_QWORD*)(v3 + 24) &&
        *(_DWORD*)v3 == a2) {
      v8 = a3;
      if (*(_BYTE*)(v3 + 16) == 1) {
        v8 = fmodf_alt1(a3, *(float*)(v3 + 12));
      }
      v9 = GameRoutine_c51ba0(v3, v8);
      v10 = *(_DWORD*)(v3 + 4);
      if (v10 <= 2) {
        if (v10 != 0) {
          if (v10 == 1) {
            *(float*)(a1 + 64) = v9;
          }
          else if (v10 == 2) {
            *(float*)(a1 + 48) = v9;
          }
        }
        else {
          *(float*)(a1 + 72) = v9;
        }
      }
      else if (v10 > 4) {
        if (v10 == 5) {
          *(float*)(a1 + 32) = v9;
        }
        else if (v10 == 6) {
          *(float*)(a1 + 68) = v9;
        }
      }
      else if (v10 == 3) {
        *(float*)(a1 + 52) = v9;
      }
      else {
        v11 = *(_OWORD*)(a1 + 48);
        *((_QWORD*)&v11 + 1) = LODWORD(v9);
        *(_OWORD*)(a1 + 48) = v11;
      }
    }
  }
}

__int64 LightAnimModule_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;

  *a1 = wld_LightAnimModule_vtable;
  v4 = a1 + 9;
  GameRoutine_c60200(&v4);
  v4 = a1 + 6;
  result = GameRoutine_c60200(&v4);
  v3 = a1[4];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 LightAnimModule_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v5;

  *a1 = wld_LightAnimModule_vtable;
  v5 = a1 + 9;
  GameRoutine_c60200(&v5);
  v5 = a1 + 6;
  GameRoutine_c60200(&v5);
  v2 = a1[4];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

__int64 LightAnimModule_c5f890(unsigned __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  int v6;
  char v7;
  char v8;
  _BYTE* v9;
  __int64 v10;
  _BYTE* v11;
  __int64 v12[2];

  v2 = a2[1];
  v12[0] = *a2;
  v12[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    result = GameRoutine_c5f0c0(a1, v12);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      result = std___1___shared_weak_count___release_weak(v2);
    }
  }
  else {
    result = GameRoutine_c5f0c0(a1, v12);
  }
  v6 = *(_QWORD*)(a1 + 48) != *(_QWORD*)(a1 + 56) ||
       *(_QWORD*)(a1 + 72) != *(_QWORD*)(a1 + 80);
  if (*(unsigned __int8*)(a1 + 16) != v6) {
    v7 = *(_BYTE*)(a1 + 17);
    *(_BYTE*)(a1 + 16) = v6;
    if (v6 != 0) {
      v8 = 0;
    }
    else {
      v8 = 2;
    }
    *(_BYTE*)(a1 + 17) = v7 & 0xFD | v8;
    *(_BYTE*)(a1 + 18) = *(_BYTE*)(a1 + 18) & 0xFD | v8;
    *(_BYTE*)(a1 + 19) = *(_BYTE*)(a1 + 19) & 0xFD | v8;
    *(_BYTE*)(a1 + 20) = *(_BYTE*)(a1 + 20) & 0xFD | v8;
    v9 = *(_BYTE**)(a1 + 8);
    v9[632] = 0;
    v9[664] = 0;
    v9[696] = 0;
    v9[728] = 0;
    v10 = *(_QWORD*)a1;
    if (v6 != 0) {
      result = (*(__int64 (**)(unsigned __int64))(v10 + 64))(a1);
      v11 = *(_BYTE**)(a1 + 8);
      if ((v11[300] != 3 || v11[301] != 3) && v11[302] != 1) {
        return result;
      }
      v10 = *(_QWORD*)a1;
    }
    return (*(__int64 (**)(unsigned __int64))(v10 + 72))(a1);
  }
  return result;
}

__int64 LightAnimModule_Unknown5(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = *(_QWORD*)(result + 48);
  v2 = *(_QWORD*)(result + 56);
  v3 = result;
  if (v1 != v2) {
    v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                               8LL) +
                    40LL);
    v5 = 296;
    if ((*(_BYTE*)(v4 + 352) & 1 | ((*(_BYTE*)(v4 + 344) & 1) == 0)) != 0) {
      v5 = 248;
    }
    v6 = 3600 * *(_DWORD*)(v4 + v5 + 36) + 60 * *(_DWORD*)(v4 + v5 + 40) +
         *(_DWORD*)(v4 + v5 + 44);
    do {
      if (*(_DWORD*)(v1 + 40) != v6) {
        result = *(_QWORD*)(v1 + 8);
        if (result != 0) {
          result = std___1___shared_weak_count_lock_alt1(result);
          if (result != 0) {
            if (*(_QWORD*)v1 != 0 && *(_BYTE*)(*(_QWORD*)v1 + 60LL) == 1) {
              v7 = *(__int64**)(v1 + 16);
              v8 = result;
              v9 = *(__int64**)(v1 + 24);
              *(_DWORD*)(v1 + 40) = v6;
              while (v7 != v9) {
                v10 = *v7;
                v7 += 2;
                LightAnimModule_c51a60_alt1(v10, 0,
                                            (float)v6 / 0x1.c200000000000p+11f);
              }
              LightAnimModule_c5fca0(v3, (float***)(v1 + 16), 0,
                                     (float)v6 / 0x1.c200000000000p+11f);
              result = v8;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v11 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
              result = std___1___shared_weak_count___release_weak_alt1(v11);
            }
          }
        }
      }
      v1 += 48;
    } while (v1 != v2);
  }
  v12 = *(_QWORD*)(v3 + 72);
  v13 = *(_QWORD*)(v3 + 80);
  if (v12 != v13) {
    v14 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 496LL) + 16LL) *
                  0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
    if (v14 != 0x0.0p+0f) {
      v15 = v14 + *(float*)(v3 + 40);
      if (v15 > 0x1.5179cc0000000p+16f) {
        v15 = v15 + -0x1.5179cc0000000p+16f;
      }
      *(float*)(v3 + 40) = v15;
      do {
        result = *(_QWORD*)(v12 + 8);
        if (result != 0) {
          result = std___1___shared_weak_count_lock_alt1(result);
          if (result != 0) {
            if (*(_QWORD*)v12 != 0 && *(_BYTE*)(*(_QWORD*)v12 + 60LL) == 1) {
              v16 = *(__int64**)(v12 + 16);
              v17 = *(__int64**)(v12 + 24);
              v18 = result;
              while (v16 != v17) {
                v19 = *v16;
                v16 += 2;
                LightAnimModule_c51a60_alt1(v19, 1, *(float*)(v3 + 40));
              }
              LightAnimModule_c5fca0(v3, (float***)(v12 + 16), 1,
                                     *(float*)(v3 + 40));
              result = v18;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v20 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
              result = std___1___shared_weak_count___release_weak_alt1(v20);
            }
          }
        }
        v12 += 48;
      } while (v12 != v13);
    }
  }
  return result;
}

void LightAnimModule_c5fca0(__int64 a1, float*** a2, int a3, float a4)
{
  float** v4;
  float** v5;
  float* v9;
  int* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64** v17;
  __int64* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float* v32;
  int v33;
  float v34;
  __int128 v35;

  v4 = *a2;
  v5 = a2[1];
  if (*a2 == v5) {
    return;
  }
  while (2) {
    v9 = *((float**)*v4 + 20);
    v10 = *((int**)*v4 + 21);
  LABEL_7:
    if (v9 != (float*)v10) {
      v11 = *(_QWORD**)(a1 + 24);
      v12 = v11[2];
      if (v12 == 0 || v11[4] == 0) {
        goto LABEL_6;
      }
      v14 = *(int*)v9;
      v15 = v12 - 1;
      if ((v12 & (v12 - 1)) != 0) {
        v16 = *(int*)v9;
        if (v12 <= v14) {
          v16 = v14 % v12;
        }
      }
      else {
        v16 = v15 & v14;
      }
      v17 = *(__int64***)(v11[1] + 8 * v16);
      if (v17 == nullptr) {
        goto LABEL_6;
      }
      v18 = *v17;
      if (*v17 == nullptr) {
        goto LABEL_6;
      }
      v19 = *((unsigned int*)v9 + 1);
      if ((v12 & v15) == 0) {
        while (1) {
          v21 = v18[1];
          if (v21 == v14) {
            if (*((_DWORD*)v18 + 4) == (_DWORD)v14) {
              goto LABEL_32;
            }
          }
          else if ((v21 & v15) != v16) {
            goto LABEL_6;
          }
          v18 = (__int64*)*v18;
          if (v18 == nullptr) {
            goto LABEL_6;
          }
        }
      }
      while (1) {
        v20 = v18[1];
        if (v20 == v14) {
          if (*((_DWORD*)v18 + 4) == (_DWORD)v14) {
          LABEL_32:
            v22 = v18[3];
            if (v19 < (v18[4] - v22) >> 2) {
              v23 = v11[6];
              if (v23 != 0) {
                v24 = v23 + 88LL * *(unsigned int*)(v22 + 4 * v19);
                if (*(_BYTE*)(v24 + 48) == 1 &&
                    *(_QWORD*)(v24 + 64) != *(_QWORD*)(v24 + 72) &&
                    *(_DWORD*)(v24 + 40) == a3 && *(_BYTE*)(v24 + 56) == 1) {
                  v25 = v9[4];
                  v26 = *(float*)(v24 + 52);
                  v27 = (float)(v26 * *(float*)(v24 + 24)) * v25;
                  v28 = v26 + (float)(PSEUDO_UNFUSED(
                                  v26 * (float)(v25 * *(float*)(v24 + 28))));
                  v29 =
                      (float)(a4 + v27) *
                      (float)((float)((float)((float)(v25 +
                                                      -0x1.0000000000000p-1f) *
                                              *(float*)(v24 + 32)) *
                                      0x1.0000000000000p+1f) +
                              0x1.0000000000000p+0f);
                  if (v28 < 0x1.a36e2e0000000p-14f) {
                    v28 = 0x1.a36e2e0000000p-14f;
                  }
                  v30 = fmodf_alt1(v29, v28);
                  v31 = GameRoutine_c51ba0(v24 + 40, v30);
                  v32 = *v4;
                  v33 = *(_DWORD*)(v24 + 44);
                  v34 = v31 * v9[3];
                  if (v33 <= 2) {
                    switch (v33) {
                    case 0:
                      v32[18] = v34;
                      v9 += 5;
                      goto LABEL_7;
                    case 1:
                      v32[16] = v34;
                      v9 += 5;
                      goto LABEL_7;
                    case 2:
                      v32[12] = v34;
                      v9 += 5;
                      goto LABEL_7;
                    default:
                      break;
                    }
                  }
                  else {
                    if (v33 <= 4) {
                      if (v33 == 3) {
                        v32[13] = v34;
                        v9 += 5;
                      }
                      else {
                        v35 = *((_OWORD*)v32 + 3);
                        v9 += 5;
                        *((_QWORD*)&v35 + 1) = LODWORD(v34);
                        *((_OWORD*)v32 + 3) = v35;
                      }
                      goto LABEL_7;
                    }
                    if (v33 == 5) {
                      v32[8] = v34;
                    }
                    else if (v33 == 6) {
                      v32[17] = v34;
                      v9 += 5;
                      goto LABEL_7;
                    }
                  }
                }
              }
            }
          LABEL_6:
            v9 += 5;
            goto LABEL_7;
          }
        }
        else {
          if (v20 >= v12) {
            v20 %= v12;
          }
          if (v20 != v16) {
            goto LABEL_6;
          }
        }
        v18 = (__int64*)*v18;
        if (v18 == nullptr) {
          goto LABEL_6;
        }
      }
    }
    v4 += 2;
    if (v4 != v5) {
      continue;
    }
    break;
  }
}

void LightAnimModule_c60000(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = a1[9];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[10];
    if (v1 == v4) {
      goto LABEL_17;
    }
    do {
      v5 = *(_QWORD*)(v4 - 24);
      v6 = v4;
      if (v5 != 0) {
        *(_QWORD*)(v4 - 16) = v5;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v5);
      }
      v4 -= 88;
      if ((*(_BYTE*)(v6 - 88) & 1) != 0) {
        v8 = *(_QWORD*)(v6 - 72);
        if (v8 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, v8);
        }
      }
    } while (v4 != v1);
    v10 = a1[9];
    a1[10] = v1;
    v1 = v10;
    if (v10 != 0) {
    LABEL_17:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v11, v1);
    }
  }
  v12 = (_QWORD*)a1[6];
  if (v12 != nullptr) {
    do {
      v14 = (_QWORD*)*v12;
      v15 = v12[3];
      if (v15 != 0) {
        v16 = *(_QWORD*)v3;
        v12[4] = v15;
        if (*(_QWORD*)(v16 + 200) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v16 + v17, v15);
      }
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v13 = 128;
      }
      else {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v13, (__int64)v12);
      v12 = v14;
    } while (v14 != nullptr);
  }
  v18 = a1[4];
  a1[4] = 0;
  if (v18 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v19, v18);
  }
}

__int64** LightAnimModule_c60200(__int64** result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64** v11;

  v1 = *result;
  v2 = **result;
  if (v2 != 0) {
    v11 = result;
    v3 = v1[1];
    for (i = fw_memory_g_heap_manager_ptr; v2 != v3; v3 -= 48) {
      v5 = *(_QWORD*)(v3 - 32);
      if (v5 != 0) {
        v6 = *(_QWORD*)(v3 - 24);
        if (v5 == v6) {
          goto LABEL_13;
        }
        do {
          v7 = *(_QWORD*)(v6 - 8);
          if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            std___1___shared_weak_count___release_weak(v7);
          }
          v6 -= 16;
        } while (v6 != v5);
        v8 = *(_QWORD*)(v3 - 32);
        *(_QWORD*)(v3 - 24) = v5;
        if (v8 != 0) {
        LABEL_13:
          if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)i + v9);
        }
      }
      result = *(__int64***)(v3 - 40);
      if (result != nullptr) {
        result = (__int64**)std___1___shared_weak_count___release_weak(result);
      }
    }
    v1[1] = v2;
    if (**v11 != 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
        v10 = 56;
      }
      return (__int64**)nn_mem_StandardAllocator_Free(*(_QWORD*)i + v10);
    }
  }
  return result;
}

#pragma GCC visibility pop
