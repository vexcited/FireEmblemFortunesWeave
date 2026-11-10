#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void wld_map_c24c40(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD);
__int64* GameRoutine_c19120(__int64* result, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 wld_map_c21f20(_QWORD, _QWORD);
bool Layout_c13510(__int64, __int64, unsigned __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* wld_map_c193c0(float* a1, unsigned __int8* a2, __int64** a3);
__attribute__((swiftcall)) void wld_map_c21180(PSEUDO_X8 x8_, __int64 a1,
                                               unsigned int a2, __int64 a3,
                                               unsigned __int64 a4);

_QWORD* wld_map_c193c0(float* a1, unsigned __int8* a2, __int64** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
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
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  float v29;
  float v30;
  float v31;
  _BOOL8 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 primeEm;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  unsigned __int64 v42;

  v4 = *a2;
  v7 = (v4 & 1) == 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = a2 + 1;
  }
  else {
    v9 = *((unsigned __int8**)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  v11 = std___1___hash_memory(v9, v10);
  v12 = *((_QWORD*)a1 + 1);
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
                v24 = (v22 & 1) != 0 ? (_QWORD*)v16[4]
                                     : (_QWORD*)((char*)v16 + 17);
                if ((unsigned int)memcmp(v24, v9, v10) == 0) {
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
              v20 =
                  (v18 & 1) != 0 ? (_QWORD*)v16[4] : (_QWORD*)((char*)v16 + 17);
              if ((unsigned int)memcmp(v20, v9, v10) == 0) {
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
  v25 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
  v26 = *a3;
  *v25 = 0;
  v25[1] = v13;
  v16 = v25;
  v27 = *v26;
  v28 = v26[2];
  v25[3] = v26[1];
  v25[4] = v28;
  v25[2] = v27;
  v26[1] = 0;
  v26[2] = 0;
  *v26 = 0;
  v25[5] = 0;
  v25[6] = 0;
  v25[7] = 0;
  v25[8] = 0;
  v25[9] = 0;
  v25[10] = 0;
  v29 = a1[8];
  v30 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v12 == 0 || (float)(v29 * (float)v12) < v30) {
    v31 = v30 / v29;
    v32 = true;
    if (v12 >= 3) {
      v32 = (v12 & (v12 - 1)) != 0;
    }
    v33 = v32 | (2 * v12);
    v34 = vcvtps_u64_f32(v31);
    if (v33 <= v34) {
      primeEm = v34;
    }
    else {
      primeEm = v33;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v36 = *((_QWORD*)a1 + 1);
    if (primeEm > v36) {
      goto LABEL_53;
    }
    if (primeEm < v36) {
      v37 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v36 < 3 || (v36 & (v36 - 1)) != 0) {
        v37 = std___1___next_prime(v37);
      }
      else {
        v38 = 1LL << -(char)__clz(v37 - 1);
        if (v37 >= 2) {
          v37 = v38;
        }
      }
      if (primeEm <= v37) {
        primeEm = v37;
      }
      if (primeEm < v36) {
      LABEL_53:
        GameRoutine_c19120((__int64*)a1, primeEm);
      }
    }
    v12 = *((_QWORD*)a1 + 1);
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
  v39 = *(_QWORD*)a1;
  v40 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v40 != nullptr) {
    *v16 = *v40;
    *v40 = v16;
  }
  else {
    v41 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v16;
    *v16 = v41;
    *(_QWORD*)(v39 + 8 * v3) = a1 + 4;
    if (*v16 != 0) {
      v42 = *(_QWORD*)(*v16 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v42 >= v12) {
          v42 %= v12;
        }
      }
      else {
        v42 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = v16;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return v16;
}

__attribute__((swiftcall)) void wld_map_c21180(PSEUDO_X8 x8_, __int64 a1,
                                               unsigned int a2, __int64 a3,
                                               unsigned __int64 a4)
{
  _QWORD* a5 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* i;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  long double v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  result = *(_QWORD*)(a1 + 96);
  a5[1] = 0;
  a5[2] = 0;
  *a5 = 0;
  if (result != 0) {
    result = Layout_c13510(result, a3, a4);
    if ((result & 1) != 0) {
      v11 = *(_QWORD*)(a1 + 96);
      v12 = *(_QWORD*)(v11 + 24);
      v13 = *(_QWORD*)(v11 + 32);
      if (v13 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                  memory_order_relaxed);
      }
      result = (__int64)(wld_map_c24c40((void*)(&v24), v12, a2, a3, a4),
                         (void*)(&v24));
      v15 = v24;
      v14 = v25;
      v24 = 0;
      v25 = 0;
      *a5 = v15;
      a5[1] = v14;
      v16 = v26;
      v26 = 0;
      a5[2] = v16;
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        result = std___1___shared_weak_count___release_weak(v13);
      }
    }
  }
  for (i = *(_QWORD**)(a1 + 120); i != nullptr; i = (_QWORD*)*i) {
    result = Layout_c13510(i[5], a3, a4);
    if ((result & 1) != 0) {
      v18 = i[5];
      v19 = *(_QWORD*)(v18 + 24);
      v20 = *(_QWORD*)(v18 + 32);
      if (v20 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                  memory_order_relaxed);
        result = (__int64)(wld_map_c24c40((void*)(&v24), v19, a2, a3, a4),
                           (void*)(&v24));
        if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
          result = std___1___shared_weak_count___release_weak(v20);
        }
      }
      else {
        result = (__int64)(wld_map_c24c40((void*)(&v24), v19, a2, a3, a4),
                           (void*)(&v24));
      }
      v22 = v24;
      if (v25 != v24) {
        result = wld_map_c21f20(a5, a5[1]);
        v22 = v24;
      }
      if (v22 != 0) {
        v25 = v22;
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v21);
      }
    }
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
