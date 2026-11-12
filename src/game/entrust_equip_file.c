#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12f93a0(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21c9d78;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 EntrustEquipFile_Unknown4_alt1(__int64 result) __asm__(
    "EntrustEquipFile_Unknown4");
__int64 EntrustEquipFile_12f4aa0_alt1(__int64 result) __asm__(
    "EntrustEquipFile_12f4aa0");
__int64 EntrustEquipFile_Unknown5_alt1(__int64 result) __asm__(
    "EntrustEquipFile_Unknown5");
__int64 EntrustEquipFile_Unknown6_alt1(__int64 result) __asm__(
    "EntrustEquipFile_Unknown6");
_QWORD* GameRoutine_12f61a0(_QWORD*, __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
void GameRoutine_12f5f00(__int64*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_12f5ed0();
void __attribute__((noreturn)) GameRoutine_60a210();
float*
EntrustEquipFile_12f5ac0_alt1(float* result, __int64 a2,
                              int a3) __asm__("EntrustEquipFile_12f5ac0");
__int64 GameRoutine_12f5f00_alt1(_QWORD, _QWORD) __asm__("GameRoutine_12f5f00");
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
unsigned __int64 EntrustEquipFile_12f93a0(float* a1, __int64* a2, __int64* a3);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void EntrustEquipFile_Unknown4(__int64 a1);
void EntrustEquipFile_12f4aa0(__int64 a1);
void EntrustEquipFile_Unknown5(_QWORD* a1);
void EntrustEquipFile_Unknown6(_QWORD* a1);
_QWORD* EntrustEquipFile_12f5ac0(_QWORD* result, __int64 a2, int a3);

void EntrustEquipFile_Unknown4(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64** v14;
  __int64* v15;
  __int64* v16;

  if (*(_QWORD*)(a1 + 288) != 0) {
    v2 = *(_QWORD**)(a1 + 280);
    if (v2 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v2;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v5, (__int64)v2);
        v2 = v4;
      } while (v4 != nullptr);
    }
    v6 = *(_QWORD*)(a1 + 272);
    *(_QWORD*)(a1 + 280) = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 264) + 8 * v8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 264) + 8 * v8 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 264) + 8 * v8 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 264) + 8 * v8 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 264) + 8 * v8 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 264) + 8 * v8 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 264) + 8 * v8 + 48) = 0;
          v10 = *(_QWORD*)(a1 + 264) + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(*(_QWORD*)(a1 + 264) + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    *(_QWORD*)(a1 + 288) = 0;
  }
  v12 = *(_QWORD*)(GameData_21c9d78 + 64);
  v13 = *(_QWORD*)(GameData_21c9d78 + 72);
  while (v12 != v13) {
    v14 = *(__int64***)(*(_QWORD*)v12 + 24LL);
    v15 = *v14;
    v16 = v14[1];
    if (*v14 != v16) {
      do {
        EntrustEquipFile_12f93a0((float*)(a1 + 264), v15, v15);
        v15 += 2;
      } while (v15 != v16);
    }
    v12 += 8;
  }
}

void EntrustEquipFile_12f4aa0(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64** v14;
  __int64* v15;
  __int64* v16;

  if (*(_QWORD*)(a1 + 280) != 0) {
    v2 = *(_QWORD**)(a1 + 272);
    if (v2 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v2;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v5, (__int64)v2);
        v2 = v4;
      } while (v4 != nullptr);
    }
    v6 = *(_QWORD*)(a1 + 264);
    *(_QWORD*)(a1 + 272) = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 256) + 8 * v8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 256) + 8 * v8 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 256) + 8 * v8 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 256) + 8 * v8 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 256) + 8 * v8 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 256) + 8 * v8 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 256) + 8 * v8 + 48) = 0;
          v10 = *(_QWORD*)(a1 + 256) + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(*(_QWORD*)(a1 + 256) + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    *(_QWORD*)(a1 + 280) = 0;
  }
  v12 = *(_QWORD*)(GameData_21c9d78 + 64);
  v13 = *(_QWORD*)(GameData_21c9d78 + 72);
  while (v12 != v13) {
    v14 = *(__int64***)(*(_QWORD*)v12 + 24LL);
    v15 = *v14;
    v16 = v14[1];
    if (*v14 != v16) {
      do {
        EntrustEquipFile_12f93a0((float*)(a1 + 256), v15, v15);
        v15 += 2;
      } while (v15 != v16);
    }
    v12 += 8;
  }
}

void EntrustEquipFile_Unknown5(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  if (a1[36] != 0) {
    v1 = (_QWORD*)a1[35];
    if (v1 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v1;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v5, (__int64)v1);
        v1 = v4;
      } while (v4 != nullptr);
    }
    v6 = a1[34];
    a1[35] = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(a1[33] + 8 * v8) = 0;
          *(_QWORD*)(a1[33] + 8 * v8 + 8) = 0;
          *(_QWORD*)(a1[33] + 8 * v8 + 16) = 0;
          *(_QWORD*)(a1[33] + 8 * v8 + 24) = 0;
          *(_QWORD*)(a1[33] + 8 * v8 + 32) = 0;
          *(_QWORD*)(a1[33] + 8 * v8 + 40) = 0;
          *(_QWORD*)(a1[33] + 8 * v8 + 48) = 0;
          v10 = a1[33] + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(a1[33] + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    a1[36] = 0;
  }
}

void EntrustEquipFile_Unknown6(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  if (a1[35] != 0) {
    v1 = (_QWORD*)a1[34];
    if (v1 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v1;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v5, (__int64)v1);
        v1 = v4;
      } while (v4 != nullptr);
    }
    v6 = a1[33];
    a1[34] = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(a1[32] + 8 * v8) = 0;
          *(_QWORD*)(a1[32] + 8 * v8 + 8) = 0;
          *(_QWORD*)(a1[32] + 8 * v8 + 16) = 0;
          *(_QWORD*)(a1[32] + 8 * v8 + 24) = 0;
          *(_QWORD*)(a1[32] + 8 * v8 + 32) = 0;
          *(_QWORD*)(a1[32] + 8 * v8 + 40) = 0;
          *(_QWORD*)(a1[32] + 8 * v8 + 48) = 0;
          v10 = a1[32] + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(a1[32] + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    a1[35] = 0;
  }
}

_QWORD* EntrustEquipFile_12f5ac0(_QWORD* result, __int64 a2, int a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  _QWORD* v5;
  __int64* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  signed __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  float v34;
  _QWORD* v35;
  float v36;
  float v37;
  _BOOL8 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 primeEm;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;

  if (a2 != 0) {
    v5 = result;
    v49 = a2;
    result = GameRoutine_12f61a0(result + 1, &v49);
    if (result == nullptr) {
      v7 = (__int64*)*v5;
      v9 = *(_QWORD*)(*v5 + 8LL);
      v8 = *(_QWORD*)(*v5 + 16LL);
      v10 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v9 >= v8) {
        v13 = *v7;
        v14 = v9 - *v7;
        v15 = (v14 >> 4) + 1;
        if (v15 >> 60 != 0) {
          GameRoutine_12f5ed0();
        }
        v16 = v8 - v13;
        if (v16 >> 3 > v15) {
          v15 = v16 >> 3;
        }
        if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF0LL) {
          v17 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v17 = v15;
        }
        if (v17 != 0) {
          if (v17 >> 60 != 0) {
            GameRoutine_60a210();
          }
          v18 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v17, 16, 0);
        }
        else {
          v18 = 0;
        }
        v19 = v49;
        v20 = v18 + v14;
        v21 = v18 + 16 * v17;
        v3 = v18 + v14 - 16 * (v14 >> 4);
        *(_DWORD*)(v20 + 8) = a3;
        v12 = v18 + v14 + 16;
        *(_QWORD*)v20 = v19;
        memcpy_alt1(v3, v13, v14);
        *v7 = v3;
        v7[1] = v12;
        v7[2] = v21;
        if (v13 != 0) {
          v22 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v10 + v22, v13);
        }
      }
      else {
        v11 = v49;
        *(_DWORD*)(v9 + 8) = a3;
        v12 = v9 + 16;
        *(_QWORD*)v9 = v11;
      }
      v23 = v49;
      v7[1] = v12;
      v50 = v23;
      v24 = std___1___hash_memory_alt1((__int64)&v50, 8u);
      v25 = v5[2];
      v26 = v24;
      if (v25 != 0) {
        v27 = v25 - 1;
        if ((v25 & (v25 - 1)) != 0) {
          v3 = v24;
          if (v24 >= v25) {
            v3 = v24 % v25;
          }
        }
        else {
          v3 = v27 & v24;
        }
        v28 = *(_QWORD**)(v5[1] + 8 * v3);
        if (v28 != nullptr) {
          v29 = (_QWORD*)*v28;
          if (v29 != nullptr) {
            if ((v25 & v27) == 0) {
              while (1) {
                v31 = v29[1];
                if (v31 == v24) {
                  if (v29[2] == v23) {
                    goto LABEL_77;
                  }
                }
                else if ((v31 & v27) != v3) {
                  goto LABEL_40;
                }
                v29 = (_QWORD*)*v29;
                if (v29 == nullptr) {
                  goto LABEL_40;
                }
              }
            }
            do {
              v30 = v29[1];
              if (v30 == v24) {
                if (v29[2] == v23) {
                  goto LABEL_77;
                }
              }
              else {
                if (v30 >= v25) {
                  v30 %= v25;
                }
                if (v30 != v3) {
                  break;
                }
              }
              v29 = (_QWORD*)*v29;
            } while (v29 != nullptr);
          }
        }
      }
    LABEL_40:
      v32 = fw_memory_HeapManager_Allocate(*v10, 24, 16, 0);
      v33 = v49;
      v34 = *((float*)v5 + 10);
      v35 = (_QWORD*)v32;
      *(_QWORD*)(v32 + 8) = v26;
      *(_QWORD*)(v32 + 16) = v33;
      v36 = (float)(unsigned __int64)(v5[4] + 1LL);
      if (v25 == 0 || (float)(v34 * (float)v25) < v36) {
        v37 = v36 / v34;
        v38 = true;
        if (v25 >= 3) {
          v38 = (v25 & (v25 - 1)) != 0;
        }
        v39 = v38 | (2 * v25);
        v40 = vcvtps_u64_f32(v37);
        if (v39 <= v40) {
          v41 = v40;
        }
        else {
          v41 = v39;
        }
        if (v41 == 1) {
          v41 = 2;
        }
        else if ((v41 & (v41 - 1)) != 0) {
          primeEm = std___1___next_prime_alt1(v41);
          v25 = v5[2];
          v41 = primeEm;
        }
        if (v41 > v25) {
          goto LABEL_52;
        }
        if (v41 < v25) {
          v43 = vcvtps_u64_f32((float)(unsigned __int64)v5[4] /
                               *((float*)v5 + 10));
          if (v25 < 3 || (v25 & (v25 - 1)) != 0) {
            v43 = std___1___next_prime_alt1(v43);
          }
          else {
            v44 = 1LL << -(char)__clz(v43 - 1);
            if (v43 >= 2) {
              v43 = v44;
            }
          }
          if (v41 <= v43) {
            v41 = v43;
          }
          if (v41 < v25) {
          LABEL_52:
            GameRoutine_12f5f00(v5 + 1, v41);
          }
        }
        v25 = v5[2];
        if ((v25 & (v25 - 1)) != 0) {
          if (v26 >= v25) {
            v3 = v26 % v25;
          }
          else {
            v3 = v26;
          }
        }
        else {
          v3 = (v25 - 1) & v26;
        }
      }
      v45 = v5[1];
      v46 = *(_QWORD**)(v45 + 8 * v3);
      if (v46 != nullptr) {
        *v35 = *v46;
        *v46 = v35;
      }
      else {
        v47 = v5[3];
        v5[3] = v35;
        *v35 = v47;
        *(_QWORD*)(v45 + 8 * v3) = v5 + 3;
        if (v47 != 0) {
          v48 = *(_QWORD*)(v47 + 8);
          if ((v25 & (v25 - 1)) != 0) {
            if (v48 >= v25) {
              v48 %= v25;
            }
          }
          else {
            v48 &= v25 - 1;
          }
          *(_QWORD*)(v5[1] + 8 * v48) = v35;
        }
      }
      ++v5[4];
    LABEL_77:
      EntrustEquipFile_12f5ac0(v5, *(_QWORD*)(a2 + 296), a3 + 0x10000);
      return EntrustEquipFile_12f5ac0(v5, *(_QWORD*)(a2 + 352), a3 + 256);
    }
  }
  return result;
}

unsigned __int64 EntrustEquipFile_12f93a0(float* a1, __int64* a2, __int64* a3)
{
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  unsigned __int64 v17;
  float v18;
  float v19;
  _BOOL8 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;

  v4 = *a2;
  v29 = *a2;
  result = std___1___hash_memory(&v29, 8);
  v8 = *((_QWORD*)a1 + 1);
  v9 = result;
  if (v8 != 0) {
    v10 = v8 - 1;
    if ((v8 & (v8 - 1)) != 0) {
      v3 = result;
      if (result >= v8) {
        v3 = result % v8;
      }
    }
    else {
      v3 = v10 & result;
    }
    v11 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v11 != nullptr) {
      v12 = (_QWORD*)*v11;
      if (v12 != nullptr) {
        if ((v8 & v10) == 0) {
          while (1) {
            v14 = v12[1];
            if (v14 == result) {
              if (v12[2] == v4) {
                return result;
              }
            }
            else if ((v14 & v10) != v3) {
              goto LABEL_22;
            }
            v12 = (_QWORD*)*v12;
            if (v12 == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v13 = v12[1];
          if (v13 == result) {
            if (v12[2] == v4) {
              return result;
            }
          }
          else {
            if (v13 >= v8) {
              v13 %= v8;
            }
            if (v13 != v3) {
              break;
            }
          }
          v12 = (_QWORD*)*v12;
        } while (v12 != nullptr);
      }
    }
  }
LABEL_22:
  result = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v15 = *a3;
  v16 = a1[8];
  v17 = result;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v9;
  *(_QWORD*)(result + 16) = v15;
  v18 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v8 == 0 || (float)(v16 * (float)v8) < v18) {
    v19 = v18 / v16;
    v20 = true;
    if (v8 >= 3) {
      v20 = (v8 & (v8 - 1)) != 0;
    }
    v21 = v20 | (2 * v8);
    v22 = vcvtps_u64_f32(v19);
    if (v21 <= v22) {
      v23 = v22;
    }
    else {
      v23 = v21;
    }
    if (v23 == 1) {
      v23 = 2;
    }
    else if ((v23 & (v23 - 1)) != 0) {
      result = std___1___next_prime(v23);
      v8 = *((_QWORD*)a1 + 1);
      v23 = result;
    }
    if (v23 > v8) {
      goto LABEL_34;
    }
    if (v23 < v8) {
      result = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v8 < 3 || (v8 & (v8 - 1)) != 0) {
        result = std___1___next_prime(result);
      }
      else {
        v24 = 1LL << -(char)__clz(result - 1);
        if (result >= 2) {
          result = v24;
        }
      }
      if (v23 <= result) {
        v23 = result;
      }
      if (v23 < v8) {
      LABEL_34:
        result = GameRoutine_12f5f00_alt1(a1, v23);
      }
    }
    v8 = *((_QWORD*)a1 + 1);
    if ((v8 & (v8 - 1)) != 0) {
      if (v9 >= v8) {
        v3 = v9 % v8;
      }
      else {
        v3 = v9;
      }
    }
    else {
      v3 = (v8 - 1) & v9;
    }
  }
  v25 = *(_QWORD*)a1;
  v26 = *(unsigned __int64**)(*(_QWORD*)a1 + 8 * v3);
  if (v26 != nullptr) {
    *(_QWORD*)v17 = *v26;
    *v26 = v17;
  }
  else {
    v27 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v17;
    *(_QWORD*)v17 = v27;
    *(_QWORD*)(v25 + 8 * v3) = a1 + 4;
    if (*(_QWORD*)v17 != 0) {
      v28 = *(_QWORD*)(*(_QWORD*)v17 + 8LL);
      if ((v8 & (v8 - 1)) != 0) {
        if (v28 >= v8) {
          v28 %= v8;
        }
      }
      else {
        v28 &= v8 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v28) = v17;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return result;
}

#pragma GCC visibility pop
