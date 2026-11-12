#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1460(void);
__int64 GameRoutine_14a15e0(void);
__int64 GameRoutine_14a16a0(_QWORD, _QWORD, float);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64* ObjectGroup_c25a40(__int64* result, _QWORD* a2);
__int64 ObjectGroup_c25d60(__int64 a1, __int64 a2);
__int64 GameRoutine_c26680(_QWORD, _QWORD);
extern _BYTE GameData_1b7f8a9[5];
unsigned __int64
wld_map_ObjectGroup_FadeMapEffects_lambda0_Invoke(__int64 a1,
                                                  unsigned __int64** a2);
_QWORD* ObjectGroup_c25c00_alt1(__int64*, __int64*,
                                _QWORD*) __asm__("ObjectGroup_c25c00");
__int64* ObjectGroup_c24fe0(__int64* result);
__int64* ObjectGroup_c25c00(__int64* a1, __int64* a2, __int64* a3);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
int memcmp(__int64, __int64, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void nn_mem_StandardAllocator_Free(__int64, __int64);
_QWORD* ObjectGroup_c25ea0(__int64 a1, unsigned __int8* a2, __int64* a3);

__int64* ObjectGroup_c24fe0(__int64* result)
{
  __int64* v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;

  v1 = (__int64*)result[25];
  v2 = (__int64*)result[26];
  v3 = result;
  if (v1 != v2) {
    while (1) {
      v4 = *(_QWORD*)*v1;
      if (v4 == 0 || *(_DWORD*)(v4 + 16) != *(_DWORD*)(*v1 + 8)) {
        break;
      }
      v1 += 8;
      if (v1 == v2) {
        return result;
      }
    }
  }
  v5 = v1 + 8;
  if (v1 != v2 && v5 != v2) {
    while (1) {
      v7 = (_QWORD*)*v5;
      v8 = *(_QWORD*)*v5;
      if (v8 != 0 && *(_DWORD*)(v8 + 16) == *((_DWORD*)v7 + 2)) {
        break;
      }
    LABEL_13:
      v5 += 8;
      if (v5 == v2) {
        v2 = (__int64*)v3[26];
        goto LABEL_35;
      }
    }
    v9 = v5[1];
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
    }
    v10 = v1[1];
    *v1 = (__int64)v7;
    v1[1] = v9;
    if (v10 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
      v9 = v1[1];
    }
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
    result = (__int64*)v1[6];
    v1[6] = 0;
    if (result == v1 + 2) {
      v11 = 32;
    }
    else {
      if (result == nullptr) {
      LABEL_30:
        v12 = (__int64*)v5[6];
        if (v12 != nullptr) {
          if (v5 + 2 == v12) {
            v1[6] = (__int64)(v1 + 2);
            result = (__int64*)(*(__int64 (**)(__int64, __int64*))(
                *(_QWORD*)v5[6] + 24LL))(v5[6], v1 + 2);
          }
          else {
            v1[6] = (__int64)v12;
            v5[6] = 0;
          }
        }
        else {
          v1[6] = 0;
        }
        v1 += 8;
        goto LABEL_13;
      }
      v11 = 40;
    }
    result =
        (__int64*)(*(__int64 (**)(__int64))(*result + v11))((__int64)result);
    goto LABEL_30;
  }
LABEL_35:
  if (v1 != v2) {
    result = ObjectGroup_c25c00_alt1(v2, v2, v1);
    v13 = (__int64*)v3[26];
    v14 = result;
    if (v13 != result) {
      while (1) {
        result = (__int64*)*(v13 - 2);
        if (v13 - 6 == result) {
          break;
        }
        if (result != nullptr) {
          v15 = 40;
        LABEL_43:
          result = (__int64*)(*(__int64 (**)(__int64))(*result + v15))(
              (__int64)result);
        }
        v16 = *(v13 - 7);
        if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          result = (__int64*)std___1___shared_weak_count___release_weak(v16);
        }
        v13 -= 8;
        if (v13 == v14) {
          goto LABEL_47;
        }
      }
      v15 = 32;
      goto LABEL_43;
    }
  LABEL_47:
    v3[26] = (__int64)v14;
  }
  return result;
}

__int64* ObjectGroup_c25a40(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = (_QWORD*)*result;
  v2 = (_QWORD*)result[1];
  v4 = a2[1];
  v6 = result;
  v7 = v4 - ((_QWORD)v2 - *result);
  if (v2 != (_QWORD*)*result) {
    v8 = (_QWORD*)*result;
    v9 = (_QWORD*)(v4 - (((__int64)v2 - *result) >> 6 << 6) + 48);
    do {
      *(v9 - 6) = *v8;
      v10 = v8[1];
      *(v9 - 5) = v10;
      if (v10 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                  memory_order_relaxed);
      }
      v11 = (_QWORD*)v8[6];
      if (v11 != nullptr) {
        if (v8 + 2 == v11) {
          *v9 = v9 - 4;
          (*(void (**)(_QWORD))(*(_QWORD*)v8[6] + 24LL))(v8[6]);
        }
        else {
          *v9 = v11;
          v8[6] = 0;
        }
      }
      else {
        *v9 = 0;
      }
      v8 += 8;
      v9 += 8;
    } while (v8 != v2);
    do {
      result = (__int64*)v3[6];
      if (v3 + 2 == result) {
        v12 = 32;
      }
      else {
        if (result == nullptr) {
          goto LABEL_18;
        }
        v12 = 40;
      }
      result = (__int64*)(*(__int64 (**)(void*))(*result + v12))(result);
    LABEL_18:
      v13 = v3[1];
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        result = (__int64*)std___1___shared_weak_count___release_weak(v13);
      }
      v3 += 8;
    } while (v3 != v2);
  }
  a2[1] = v7;
  v14 = *v6;
  v6[1] = *v6;
  *v6 = a2[1];
  a2[1] = v14;
  v15 = v6[1];
  v6[1] = a2[2];
  a2[2] = v15;
  v16 = v6[2];
  v6[2] = a2[3];
  a2[3] = v16;
  *a2 = a2[1];
  return result;
}

__int64* ObjectGroup_c25c00(__int64* a1, __int64* a2, __int64* a3)
{
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;

  if (a1 != a2) {
    v5 = a1;
    while (1) {
      v6 = *v5;
      v7 = v5[1];
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                  memory_order_relaxed);
      }
      v8 = a3[1];
      *a3 = v6;
      a3[1] = v7;
      if (v8 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak(v8);
        }
        v7 = a3[1];
      }
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
      }
      v9 = (__int64*)a3[6];
      a3[6] = 0;
      if (a3 + 2 == v9) {
        break;
      }
      if (v9 != nullptr) {
        v10 = 40;
      LABEL_18:
        (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
      }
      v11 = (__int64*)v5[6];
      if (v11 != nullptr) {
        if (v5 + 2 == v11) {
          a3[6] = (__int64)(a3 + 2);
          (*(void (**)(__int64, __int64*))(*(_QWORD*)v5[6] + 24LL))(v5[6],
                                                                    a3 + 2);
        }
        else {
          a3[6] = (__int64)v11;
          v5[6] = 0;
        }
      }
      else {
        a3[6] = 0;
      }
      v5 += 8;
      a3 += 8;
      if (v5 == a2) {
        return a3;
      }
    }
    v10 = 32;
    goto LABEL_18;
  }
  return a3;
}

__int64 ObjectGroup_c25d60(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _DWORD* v9;
  __int64 v10;

  v2 = *(_QWORD*)(a2 + 8);
  v9 = *(_DWORD**)a2;
  v10 = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v4 = *(_QWORD*)(a1 + 32);
  if (v4 == 0) {
    GameRoutine_60a310(0);
  }
  v5 = (*(__int64 (**)(__int64, _DWORD**))(*(_QWORD*)v4 + 48LL))(v4, &v9);
  if ((v5 & 1) != 0) {
    v6 = *(_QWORD*)(a2 + 48);
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 48LL))(v6);
    }
    if (fabsf(*((float*)&v5 + 1)) >= 0.00000011921f) {
      if (*((float*)&v5 + 1) > 0.0f) {
        GameRoutine_14a16a0(&v9, 1, *((float*)&v5 + 1));
        goto LABEL_18;
      }
      if (*((float*)&v5 + 1) < 0.0f && *(_QWORD*)v9 != 0 &&
          *(_DWORD*)(*(_QWORD*)v9 + 16LL) == v9[2]) {
        GameRoutine_14a15e0();
        goto LABEL_11;
      }
    }
    else if (*(_QWORD*)v9 != 0 && *(_DWORD*)(*(_QWORD*)v9 + 16LL) == v9[2]) {
      GameRoutine_14a1460();
    LABEL_11:
      snd_fnd_WeakHandle_isValid(v9 + 4);
    }
  }
LABEL_18:
  v7 = v10;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return v5 & 1;
}

_QWORD* ObjectGroup_c25ea0(__int64 a1, unsigned __int8* a2, __int64* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  _BOOL8 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 primeEm;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  unsigned __int64 v61;

  v4 = *a2;
  v7 = (v4 & 1) == 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = (__int64)(a2 + 1);
  }
  else {
    v9 = *((_QWORD*)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  v11 = std___1___hash_memory(v9, v10);
  v12 = *(_QWORD*)(a1 + 8);
  v13 = v11;
  if (v12 != 0) {
    v14 = v12 - 1;
    if ((v12 & (v12 - 1)) != 0) {
      v3 = v11;
      if (v11 >= v12) {
        v3 = v11 % v12;
      }
    }
    else {
      v3 = v14 & v11;
    }
    v15 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = (_QWORD*)*v15;
      if (*v15 != 0) {
        if ((v12 & v14) == 0) {
          while (1) {
            v21 = v16[1];
            if (v21 == v13) {
              v22 = *((unsigned __int8*)v16 + 16);
              v23 = v16[3];
              if ((v22 & 1) == 0) {
                v23 = v22 >> 1;
              }
              if (v23 == v10) {
                v24 = (v22 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
                if (memcmp(v24, v9, v10) == 0) {
                  return v16;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = (_QWORD*)*v16;
            if (v16 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v17 = v16[1];
          if (v17 == v13) {
            v18 = *((unsigned __int8*)v16 + 16);
            v19 = v16[3];
            if ((v18 & 1) == 0) {
              v19 = v18 >> 1;
            }
            if (v19 == v10) {
              v20 = (v18 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
              if (memcmp(v20, v9, v10) == 0) {
                return v16;
              }
            }
          }
          else {
            if (v17 >= v12) {
              v17 %= v12;
            }
            if (v17 != v3) {
              break;
            }
          }
          v16 = (_QWORD*)*v16;
        } while (v16 != nullptr);
      }
    }
  }
LABEL_41:
  v25 = (__int64*)fw_memory_g_heap_manager_ptr;
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v27 = *a3;
  v28 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  v16 = v26;
  *v26 = 0;
  v26[1] = v13;
  v26[2] = v27;
  v26[3] = v28;
  v29 = a3[2];
  a3[2] = 0;
  v30 = *(float*)(a1 + 32);
  v26[4] = v29;
  v31 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v12 == 0 || (float)(v30 * (float)v12) < v31) {
    v32 = v31 / v30;
    v33 = true;
    if (v12 >= 3) {
      v33 = (v12 & (v12 - 1)) != 0;
    }
    v34 = v33 | (2 * v12);
    v35 = vcvtps_u64_f32(v32);
    if (v34 <= v35) {
      primeEm = v35;
    }
    else {
      primeEm = v34;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v37 = *(_QWORD*)(a1 + 8);
    if (primeEm <= v37) {
      if (primeEm >= v37) {
        goto LABEL_102;
      }
      v43 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v37 < 3 || (v37 & (v37 - 1)) != 0) {
        v43 = std___1___next_prime(v43);
      }
      else {
        v44 = 1LL << -(char)__clz(v43 - 1);
        if (v43 >= 2) {
          v43 = v44;
        }
      }
      if (primeEm <= v43) {
        primeEm = v43;
      }
      if (primeEm >= v37) {
        goto LABEL_102;
      }
      if (primeEm == 0) {
        v56 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v56 != 0) {
          v57 = 128;
          if (*(_QWORD*)(*v25 + 200) == 0) {
            v57 = 56;
          }
          nn_mem_StandardAllocator_Free(*v25 + v57, v56);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_102;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v38 = fw_memory_HeapManager_Allocate(*v25, 8 * primeEm, 16, 0);
    v39 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v38;
    if (v39 != 0) {
      v40 = 128;
      if (*(_QWORD*)(*v25 + 200) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free(*v25 + v40, v39);
    }
    v41 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v42 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 48) = 0;
        v45 = *(_QWORD*)a1 + 8 * v42;
        v42 += 8;
        *(_QWORD*)(v45 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v42);
    }
    else {
      v42 = 0;
    }
    if ((primeEm & 7) != 0) {
      v46 = 8 * v42;
      do {
        --v41;
        *(_QWORD*)(*(_QWORD*)a1 + v46) = 0;
        v46 += 8;
      } while (v41 != 0);
    }
    v48 = a1 + 16;
    v47 = *(_QWORD**)(a1 + 16);
    if (v47 != nullptr) {
      v49 = v47[1];
      v50 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v49 >= primeEm) {
          v49 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v49) = v48;
        v51 = (_QWORD*)*v47;
        if (*v47 == 0) {
          goto LABEL_102;
        }
        while (1) {
          v52 = v51[1];
          if (v52 >= primeEm) {
            v52 %= primeEm;
          }
          if (v52 != v49) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v52) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = v47;
              goto LABEL_79;
            }
            *v47 = *v51;
            *v51 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v52);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v52) = v51;
            v51 = v47;
          }
          v52 = v49;
        LABEL_79:
          v47 = v51;
          v51 = (_QWORD*)*v51;
          v49 = v52;
          if (v51 == nullptr) {
            goto LABEL_102;
          }
        }
      }
      v53 = v49 & v50;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v53) = v48;
      while (1) {
        v54 = (_QWORD*)*v47;
        if (*v47 == 0) {
          break;
        }
        v55 = v54[1] & v50;
        if (v55 == v53) {
          v47 = (_QWORD*)*v47;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v55) != 0) {
          *v47 = *v54;
          *v54 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v55);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v55) = v54;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v55) = v47;
          v47 = v54;
          v53 = v55;
        }
      }
    }
  LABEL_102:
    v12 = *(_QWORD*)(a1 + 8);
    if ((v12 & (v12 - 1)) != 0) {
      if (v13 >= v12) {
        v3 = v13 % v12;
      }
      else {
        v3 = v13;
      }
    }
    else {
      v3 = (v12 - 1) & v13;
    }
  }
  v58 = *(_QWORD*)a1;
  v59 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v59 != nullptr) {
    *v16 = *v59;
    *v59 = v16;
  }
  else {
    v60 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v16;
    *v16 = v60;
    *(_QWORD*)(v58 + 8 * v3) = a1 + 16;
    if (*v16 != 0) {
      v61 = *(_QWORD*)(*v16 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v61 >= v12) {
          v61 %= v12;
        }
      }
      else {
        v61 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v61) = v16;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return v16;
}

unsigned __int64

wld_map_ObjectGroup_FadeMapEffects_lambda0_Invoke(__int64 a1,
                                                  unsigned __int64** a2)
{
  unsigned __int64* v2;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;

  v2 = *a2;
  v3 = **a2;
  if (v3 != 0) {
    if (*(_DWORD*)(v3 + 16) == *((_DWORD*)v2 + 2) &&
        (*(_BYTE*)(v3 + 34) & 1) == 0 &&
        (unsigned int)(*(_DWORD*)(v3 + 20) - 3) <= 1 &&
        *((_DWORD*)v2 + 67) == *(_DWORD*)(a1 + 16)) {
      v4 = *(unsigned int*)(a1 + 20);
      if ((_DWORD)v4 == 3) {
        v5 = *((unsigned __int8*)v2 + 216);
        if ((v5 & 1) != 0) {
          v3 = v2[28];
        }
        else {
          v3 = v5 >> 1;
        }
        if (v3 == 0) {
          goto LABEL_11;
        }
        goto LABEL_13;
      }
      if ((GameData_1b7f8a9[v4] & (_BYTE)v2[33]) != 0) {
      LABEL_13:
        if ((GameRoutine_c26680(v2 + 18, *(_QWORD*)(a1 + 8)) & 1) == 0) {
          v3 = (unsigned __int64)*(unsigned int*)(a1 + 24) << 32;
          v6 = 1;
          return v3 | v6;
        }
      }
    }
    v6 = 0;
    v3 = 0;
    return v3 | v6;
  }
LABEL_11:
  v6 = 0;
  return v3 | v6;
}

#pragma GCC visibility pop
