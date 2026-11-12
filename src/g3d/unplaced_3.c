#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a837f0;
extern __int64 fw_memory_g_heap_manager_ptr;
int memcmp(__int64, __int64, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 g3d_b3f0c0(__int64 a1, unsigned __int8* a2, __int64 a3, __int64** a4);

__int64 g3d_b3f0c0(__int64 a1, unsigned __int8* a2, __int64 a3, __int64** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  _BOOL8 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 primeEm;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  _QWORD* v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  _QWORD* v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  unsigned __int64 v63;

  v5 = *a2;
  v8 = (v5 & 1) == 0;
  v9 = v5 >> 1;
  if (v8) {
    v10 = (__int64)(a2 + 1);
  }
  else {
    v10 = *((_QWORD*)a2 + 2);
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = *((_QWORD*)a2 + 1);
  }
  v12 = std___1___hash_memory(v10, v11);
  v13 = *(_QWORD*)(a1 + 8);
  v14 = v12;
  if (v13 != 0) {
    v15 = v13 - 1;
    if ((v13 & (v13 - 1)) != 0) {
      v4 = v12;
      if (v12 >= v13) {
        v4 = v12 % v13;
      }
    }
    else {
      v4 = v15 & v12;
    }
    v16 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
    if (v16 != nullptr) {
      v17 = *v16;
      if (*v16 != 0) {
        if ((v13 & v15) == 0) {
          while (1) {
            v22 = *(_QWORD*)(v17 + 8);
            if (v22 == v14) {
              v23 = *(unsigned __int8*)(v17 + 16);
              v24 = *(_QWORD*)(v17 + 24);
              if ((v23 & 1) == 0) {
                v24 = v23 >> 1;
              }
              if (v24 == v11) {
                v25 = (v23 & 1) != 0 ? *(_QWORD*)(v17 + 32) : v17 + 17;
                if (memcmp(v25, v10, v11) == 0) {
                  return v17;
                }
              }
            }
            else if ((v22 & v15) != v4) {
              goto LABEL_41;
            }
            v17 = *(_QWORD*)v17;
            if (v17 == 0) {
              goto LABEL_41;
            }
          }
        }
        do {
          v18 = *(_QWORD*)(v17 + 8);
          if (v18 == v14) {
            v19 = *(unsigned __int8*)(v17 + 16);
            v20 = *(_QWORD*)(v17 + 24);
            if ((v19 & 1) == 0) {
              v20 = v19 >> 1;
            }
            if (v20 == v11) {
              v21 = (v19 & 1) != 0 ? *(_QWORD*)(v17 + 32) : v17 + 17;
              if (memcmp(v21, v10, v11) == 0) {
                return v17;
              }
            }
          }
          else {
            if (v18 >= v13) {
              v18 %= v13;
            }
            if (v18 != v4) {
              break;
            }
          }
          v17 = *(_QWORD*)v17;
        } while (v17 != 0);
      }
    }
  }
LABEL_41:
  v26 = (__int64*)fw_memory_g_heap_manager_ptr;
  v27 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       128, 16, 0);
  v28 = *a4;
  *(_QWORD*)v27 = 0;
  *(_QWORD*)(v27 + 8) = v14;
  v17 = v27;
  v29 = *v28;
  v30 = v28[2];
  *(_QWORD*)(v27 + 24) = v28[1];
  *(_QWORD*)(v27 + 32) = v30;
  *(_QWORD*)(v27 + 16) = v29;
  v28[1] = 0;
  v28[2] = 0;
  *v28 = 0;
  *(_QWORD*)(v27 + 96) = 0;
  *(_QWORD*)(v27 + 104) = 0;
  *(_QWORD*)(v27 + 112) = 0;
  *(_QWORD*)(v27 + 120) = 0;
  *(_QWORD*)(v27 + 80) = 0;
  *(_QWORD*)(v27 + 88) = 0;
  *(_BYTE*)(v27 + 96) = 0;
  v31 = *(_QWORD*)(a1 + 24) + 1LL;
  *(_OWORD*)(v27 + 48) = GameData_1a82c50;
  *(_OWORD*)(v27 + 64) = GameData_1a837f0;
  v32 = *(float*)(a1 + 32);
  v33 = (float)(unsigned __int64)v31;
  if (v13 == 0 || (float)(v32 * (float)v13) < v33) {
    v34 = v33 / v32;
    v35 = true;
    if (v13 >= 3) {
      v35 = (v13 & (v13 - 1)) != 0;
    }
    v36 = v35 | (2 * v13);
    v37 = vcvtps_u64_f32(v34);
    if (v36 <= v37) {
      primeEm = v37;
    }
    else {
      primeEm = v36;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v39 = *(_QWORD*)(a1 + 8);
    if (primeEm <= v39) {
      if (primeEm >= v39) {
        goto LABEL_102;
      }
      v45 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v39 < 3 || (v39 & (v39 - 1)) != 0) {
        v45 = std___1___next_prime(v45);
      }
      else {
        v46 = 1LL << -(char)__clz(v45 - 1);
        if (v45 >= 2) {
          v45 = v46;
        }
      }
      if (primeEm <= v45) {
        primeEm = v45;
      }
      if (primeEm >= v39) {
        goto LABEL_102;
      }
      if (primeEm == 0) {
        v58 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v58 != 0) {
          v59 = 128;
          if (*(_QWORD*)(*v26 + 200) == 0) {
            v59 = 56;
          }
          nn_mem_StandardAllocator_Free(*v26 + v59, v58);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_102;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v40 = fw_memory_HeapManager_Allocate(*v26, 8 * primeEm, 16, 0);
    v41 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v40;
    if (v41 != 0) {
      v42 = 128;
      if (*(_QWORD*)(*v26 + 200) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free(*v26 + v42, v41);
    }
    v43 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v44 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 48) = 0;
        v47 = *(_QWORD*)a1 + 8 * v44;
        v44 += 8;
        *(_QWORD*)(v47 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v44);
    }
    else {
      v44 = 0;
    }
    if ((primeEm & 7) != 0) {
      v48 = 8 * v44;
      do {
        --v43;
        *(_QWORD*)(*(_QWORD*)a1 + v48) = 0;
        v48 += 8;
      } while (v43 != 0);
    }
    v50 = a1 + 16;
    v49 = *(_QWORD**)(a1 + 16);
    if (v49 != nullptr) {
      v51 = v49[1];
      v52 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v51 >= primeEm) {
          v51 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v51) = v50;
        v53 = (_QWORD*)*v49;
        if (*v49 == 0) {
          goto LABEL_102;
        }
        while (1) {
          v54 = v53[1];
          if (v54 >= primeEm) {
            v54 %= primeEm;
          }
          if (v54 != v51) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v54) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v54) = v49;
              goto LABEL_79;
            }
            *v49 = *v53;
            *v53 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v54);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v54) = v53;
            v53 = v49;
          }
          v54 = v51;
        LABEL_79:
          v49 = v53;
          v53 = (_QWORD*)*v53;
          v51 = v54;
          if (v53 == nullptr) {
            goto LABEL_102;
          }
        }
      }
      v55 = v51 & v52;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v55) = v50;
      while (1) {
        v56 = (_QWORD*)*v49;
        if (*v49 == 0) {
          break;
        }
        v57 = v56[1] & v52;
        if (v57 == v55) {
          v49 = (_QWORD*)*v49;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v57) != 0) {
          *v49 = *v56;
          *v56 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v57);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v57) = v56;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v57) = v49;
          v49 = v56;
          v55 = v57;
        }
      }
    }
  LABEL_102:
    v13 = *(_QWORD*)(a1 + 8);
    if ((v13 & (v13 - 1)) != 0) {
      if (v14 >= v13) {
        v4 = v14 % v13;
      }
      else {
        v4 = v14;
      }
    }
    else {
      v4 = (v13 - 1) & v14;
    }
  }
  v60 = *(_QWORD*)a1;
  v61 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
  if (v61 != nullptr) {
    *(_QWORD*)v17 = *v61;
    *v61 = v17;
  }
  else {
    v62 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v17;
    *(_QWORD*)v17 = v62;
    *(_QWORD*)(v60 + 8 * v4) = a1 + 16;
    if (*(_QWORD*)v17 != 0) {
      v63 = *(_QWORD*)(*(_QWORD*)v17 + 8LL);
      if ((v13 & (v13 - 1)) != 0) {
        if (v63 >= v13) {
          v63 %= v13;
        }
      }
      else {
        v63 &= v13 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v63) = v17;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return v17;
}

#pragma GCC visibility pop
