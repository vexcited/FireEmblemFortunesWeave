#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___next_prime(unsigned __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_cutscene_18190a0(__int64 a1, unsigned int* a2, int* a3);

void game_cutscene_18190a0(__int64 a1, unsigned int* a2, int* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v8;
  __int64** v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  int v15;
  _QWORD* v16;
  int* v17;
  float v18;
  float v19;
  float v20;
  _BOOL8 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 primeEm;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  _QWORD* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  unsigned __int64 v49;

  v4 = *a2;
  v5 = *(_QWORD*)(a1 + 8);
  if (v5 != 0) {
    v8 = v5 - 1;
    if ((v5 & (v5 - 1)) != 0) {
      v3 = *a2;
      if (v5 <= v4) {
        v3 = (unsigned int)v4 % (unsigned int)v5;
      }
    }
    else {
      v3 = ((_DWORD)v5 - 1) & (unsigned int)v4;
    }
    v9 = *(__int64***)(*(_QWORD*)a1 + 8 * v3);
    if (v9 != nullptr) {
      v10 = *v9;
      if (v10 != nullptr) {
        if ((v5 & v8) == 0) {
          while (1) {
            v12 = v10[1];
            if (v12 == v4) {
              if (*((_DWORD*)v10 + 4) == (_DWORD)v4) {
                return;
              }
            }
            else if ((v12 & v8) != v3) {
              goto LABEL_22;
            }
            v10 = (__int64*)*v10;
            if (v10 == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v11 = v10[1];
          if (v11 == v4) {
            if (*((_DWORD*)v10 + 4) == (_DWORD)v4) {
              return;
            }
          }
          else {
            if (v11 >= v5) {
              v11 %= v5;
            }
            if (v11 != v3) {
              break;
            }
          }
          v10 = (__int64*)*v10;
        } while (v10 != nullptr);
      }
    }
  }
LABEL_22:
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       80, 16, 0);
  v15 = *a3;
  v16 = (_QWORD*)v14;
  *(_QWORD*)v14 = 0;
  *(_QWORD*)(v14 + 8) = v4;
  *(_DWORD*)(v14 + 16) = v15;
  v17 = *((int**)a3 + 6);
  if (v17 != nullptr) {
    if (v17 == a3 + 4) {
      v16[8] = v16 + 4;
      (*(void (**)(int*))(*(_QWORD*)v17 + 24LL))(v17);
    }
    else {
      v16[8] = (*(__int64 (**)(int*))(*(_QWORD*)v17 + 16LL))(v17);
    }
  }
  else {
    v16[8] = 0;
  }
  v18 = *(float*)(a1 + 32);
  v19 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v5 == 0 || (float)(v18 * (float)v5) < v19) {
    v20 = v19 / v18;
    v21 = true;
    if (v5 >= 3) {
      v21 = (v5 & (v5 - 1)) != 0;
    }
    v22 = v21 | (2 * v5);
    v23 = vcvtps_u64_f32(v20);
    if (v22 <= v23) {
      primeEm = v23;
    }
    else {
      primeEm = v22;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v25 = *(_QWORD*)(a1 + 8);
    if (primeEm <= v25) {
      if (primeEm >= v25) {
        goto LABEL_88;
      }
      v31 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v25 < 3 || (v25 & (v25 - 1)) != 0) {
        v31 = std___1___next_prime(v31);
      }
      else {
        v32 = 1LL << -(char)__clz(v31 - 1);
        if (v31 >= 2) {
          v31 = v32;
        }
      }
      if (primeEm <= v31) {
        primeEm = v31;
      }
      if (primeEm >= v25) {
        goto LABEL_88;
      }
      if (primeEm == 0) {
        v44 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v44 != 0) {
          v45 = 128;
          if (*(_QWORD*)(*v13 + 200) == 0) {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free(*v13 + v45, v44);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_88;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v26 = fw_memory_HeapManager_Allocate(*v13, 8 * primeEm, 16, 0);
    v27 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v26;
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*v13 + v28, v27);
    }
    v29 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v30 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 48) = 0;
        v33 = *(_QWORD*)a1 + 8 * v30;
        v30 += 8;
        *(_QWORD*)(v33 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v30);
    }
    else {
      v30 = 0;
    }
    if ((primeEm & 7) != 0) {
      v34 = 8 * v30;
      do {
        --v29;
        *(_QWORD*)(*(_QWORD*)a1 + v34) = 0;
        v34 += 8;
      } while (v29 != 0);
    }
    v36 = a1 + 16;
    v35 = *(_QWORD**)(a1 + 16);
    if (v35 != nullptr) {
      v37 = v35[1];
      v38 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v37 >= primeEm) {
          v37 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v37) = v36;
        v39 = (_QWORD*)*v35;
        if (*v35 == 0) {
          goto LABEL_88;
        }
        while (1) {
          v40 = v39[1];
          if (v40 >= primeEm) {
            v40 %= primeEm;
          }
          if (v40 != v37) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v40) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v40) = v35;
              goto LABEL_65;
            }
            *v35 = *v39;
            *v39 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v40);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v40) = v39;
            v39 = v35;
          }
          v40 = v37;
        LABEL_65:
          v35 = v39;
          v39 = (_QWORD*)*v39;
          v37 = v40;
          if (v39 == nullptr) {
            goto LABEL_88;
          }
        }
      }
      v41 = v37 & v38;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v36;
      while (1) {
        v42 = (_QWORD*)*v35;
        if (*v35 == 0) {
          break;
        }
        v43 = v42[1] & v38;
        if (v43 == v41) {
          v35 = (_QWORD*)*v35;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v43) != 0) {
          *v35 = *v42;
          *v42 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v43);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v43) = v42;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v43) = v35;
          v35 = v42;
          v41 = v43;
        }
      }
    }
  LABEL_88:
    v5 = *(_QWORD*)(a1 + 8);
    if ((v5 & (v5 - 1)) != 0) {
      if (v5 <= v4) {
        v3 = v4 % v5;
      }
      else {
        v3 = v4;
      }
    }
    else {
      v3 = ((_DWORD)v5 - 1) & (unsigned int)v4;
    }
  }
  v46 = *(_QWORD*)a1;
  v47 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v47 != nullptr) {
    *v16 = *v47;
    *v47 = v16;
  }
  else {
    v48 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v16;
    *v16 = v48;
    *(_QWORD*)(v46 + 8 * v3) = a1 + 16;
    if (*v16 != 0) {
      v49 = *(_QWORD*)(*v16 + 8LL);
      if ((v5 & (v5 - 1)) != 0) {
        if (v49 >= v5) {
          v49 %= v5;
        }
      }
      else {
        v49 &= v5 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v49) = v16;
    }
  }
  ++*(_QWORD*)(a1 + 24);
}

#pragma GCC visibility pop
