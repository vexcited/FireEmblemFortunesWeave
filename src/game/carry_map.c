#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6e36c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 RidePool_93c4f0(_QWORD, _QWORD, _QWORD);
__int64 UnitVariables_930e20(_QWORD);
extern __int64 GameData_21f42d0;
__int64 game_CarryMap_RideMap_Restore_closure_Invoke_alt1(
    __int64 result,
    int* a2) __asm__("game_CarryMap_RideMap_Restore_closure_Invoke");
_QWORD* GameRoutine_6e36c0_alt1(_QWORD* result, _QWORD*,
                                _QWORD*) __asm__("GameRoutine_6e36c0");
__int64* fw_containers_BalanceAfterInsert(__int64* result, __int64*);
__int64 GameRoutine_6e3b50(__int64 result, _QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
extern __int64 GameData_212cf88[4];
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
__int64 game_CarryMap_RideMap_Store_closure_Invoke(__int64 result, int* a2);
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 RidePool_93c4f0_alt1(__int64 result, unsigned int,
                             unsigned __int8*) __asm__("RidePool_93c4f0");
void GameRoutine_6e36c0_alt2(__int64, _QWORD*,
                             _QWORD*) __asm__("GameRoutine_6e36c0");
void UnitVariables_930e20_alt1(__int64) __asm__("UnitVariables_930e20");
void game_CarryMap_RideMap_Restore_closure_Invoke(__int64 a1, int* a2);

__int64 game_CarryMap_RideMap_Store_closure_Invoke(__int64 result, int* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  int v3;
  __int64 v4;
  char v5;
  float* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64** v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  _QWORD* v15;
  __int64* v16;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  _BOOL8 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 primeEm;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  unsigned int v28;
  __int64* v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64* v35;
  unsigned int v36;
  _QWORD* v37;
  _QWORD** v38;
  bool v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  _QWORD* v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int16 v65;
  _QWORD** v66;
  _QWORD* v67[2];

  v3 = *a2;
  v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL) + 120LL) +
       ((__int64)*a2 << 6);
  v5 = *(_BYTE*)v4;
  if (*(_BYTE*)v4 == 0) {
    return result;
  }
  v67[0] = nullptr;
  v67[1] = nullptr;
  v6 = *(float**)(result + 8);
  v66 = v67;
  LOBYTE(v65) = v5;
  HIBYTE(v65) = *(_BYTE*)(v4 + 1);
  if (&v66 != (_QWORD***)(v4 + 16)) {
    GameRoutine_6e36c0_alt1(&v66, *(_QWORD**)(v4 + 16), (_QWORD*)(v4 + 24));
  }
  v7 = *((_QWORD*)v6 + 1);
  if (v7 != 0) {
    v8 = v7 - 1;
    if ((v7 & (v7 - 1)) != 0) {
      v2 = v3;
      if (v7 <= v3) {
        v2 = v3 % v7;
      }
    }
    else {
      v2 = v8 & v3;
    }
    v9 = *(__int64***)(*(_QWORD*)v6 + 8 * v2);
    if (v9 != nullptr) {
      v10 = *v9;
      if (v10 != nullptr) {
        if ((v7 & v8) == 0) {
          while (1) {
            v12 = v10[1];
            if (v12 == v3) {
              if (*((_DWORD*)v10 + 4) == v3) {
                return GameRoutine_6e3b50((__int64)&v66, v67[0]);
              }
            }
            else if ((v12 & v8) != v2) {
              goto LABEL_25;
            }
            v10 = (__int64*)*v10;
            if (v10 == nullptr) {
              goto LABEL_25;
            }
          }
        }
        do {
          v11 = v10[1];
          if (v11 == v3) {
            if (*((_DWORD*)v10 + 4) == v3) {
              return GameRoutine_6e3b50((__int64)&v66, v67[0]);
            }
          }
          else {
            if (v11 >= v7) {
              v11 %= v7;
            }
            if (v11 != v2) {
              break;
            }
          }
          v10 = (__int64*)*v10;
        } while (v10 != nullptr);
      }
    }
  }
LABEL_25:
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       56, 16, 0);
  v15 = v66;
  *(_QWORD*)(v14 + 40) = 0;
  v16 = (__int64*)(v14 + 40);
  v17 = v14;
  *(_QWORD*)v14 = 0;
  *(_QWORD*)(v14 + 8) = v3;
  v64 = v3;
  *(_DWORD*)(v14 + 16) = v3;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 32) = v14 + 40;
  *(_WORD*)(v14 + 24) = v65;
  if (v15 != v67) {
    while (1) {
      v25 = *(_QWORD*)(v17 + 40);
      v26 = v16;
      if (v16 == *(__int64**)(v17 + 32)) {
        goto LABEL_43;
      }
      v27 = *(__int64**)(v17 + 40);
      v26 = v16;
      if (v25 != 0) {
        break;
      }
      do {
        v29 = v26;
        v26 = (__int64*)v26[2];
      } while (v29 == (__int64*)*v26);
      v30 = v16;
      v31 = v16;
      if (*((unsigned __int8*)v26 + 26) <
          (unsigned int)*((unsigned __int8*)v15 + 26)) {
        goto LABEL_43;
      }
    LABEL_50:
      v32 = fw_memory_HeapManager_Allocate(*v13, 32, 16, 0);
      v33 = *(_DWORD*)((char*)v15 + 26);
      *(_QWORD*)v32 = 0;
      *(_QWORD*)(v32 + 8) = 0;
      *(_QWORD*)(v32 + 16) = v31;
      *(_DWORD*)(v32 + 26) = v33;
      *v30 = v32;
      v34 = **(_QWORD**)(v17 + 32);
      if (v34 != 0) {
        *(_QWORD*)(v17 + 32) = v34;
        v35 = (__int64*)*v30;
      }
      else {
        v35 = (__int64*)v32;
      }
      fw_containers_BalanceAfterInsert(*(__int64**)(v17 + 40), v35);
      ++*(_QWORD*)(v17 + 48);
    LABEL_59:
      v37 = (_QWORD*)v15[1];
      if (v37 != nullptr) {
        do {
          v38 = (_QWORD**)v37;
          v37 = (_QWORD*)*v37;
        } while (v37 != nullptr);
      }
      else {
        do {
          v38 = (_QWORD**)v15[2];
          v39 = v15 == *v38;
          v15 = v38;
        } while (!v39);
      }
      v15 = v38;
      if (v38 == v67) {
        goto LABEL_26;
      }
    }
    do {
      v26 = v27;
      v27 = (__int64*)v27[1];
    } while (v27 != nullptr);
    v28 = *((unsigned __int8*)v15 + 26);
    if (*((unsigned __int8*)v26 + 26) >= v28) {
      while (1) {
        while (1) {
          v31 = (__int64*)v25;
          v36 = *(unsigned __int8*)(v25 + 26);
          if (v28 >= v36) {
            break;
          }
          v25 = *v31;
          v30 = v31;
          if (*v31 == 0) {
            goto LABEL_50;
          }
        }
        if (v36 >= v28) {
          goto LABEL_59;
        }
        v25 = v31[1];
        if (v25 == 0) {
          v30 = v31 + 1;
          goto LABEL_50;
        }
      }
    }
  LABEL_43:
    if (v25 != 0) {
      v30 = v26 + 1;
    }
    else {
      v30 = v16;
    }
    if (v25 != 0) {
      v31 = v26;
    }
    else {
      v31 = v16;
    }
    if (*v30 != 0) {
      goto LABEL_59;
    }
    goto LABEL_50;
  }
LABEL_26:
  v18 = v6[8];
  v19 = (float)(unsigned __int64)(*((_QWORD*)v6 + 3) + 1LL);
  if (v7 != 0 && (float)(v18 * (float)v7) >= v19) {
    goto LABEL_121;
  }
  v20 = v19 / v18;
  v21 = true;
  if (v7 >= 3) {
    v21 = (v7 & (v7 - 1)) != 0;
  }
  v22 = v21 | (2 * v7);
  v23 = vcvtps_u64_f32(v20);
  if (v22 <= v23) {
    primeEm = v23;
  }
  else {
    primeEm = v22;
  }
  if (primeEm == 1) {
    v2 = v64;
    primeEm = 2;
  }
  else {
    v2 = v64;
    if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
  }
  v40 = *((_QWORD*)v6 + 1);
  if (primeEm <= v40) {
    if (primeEm >= v40) {
      goto LABEL_117;
    }
    v46 = vcvtps_u64_f32((float)*((unsigned __int64*)v6 + 3) / v6[8]);
    if (v40 < 3 || (v40 & (v40 - 1)) != 0) {
      v46 = std___1___next_prime(v46);
    }
    else {
      v47 = 1LL << -(char)__clz(v46 - 1);
      if (v46 >= 2) {
        v46 = v47;
      }
    }
    if (primeEm <= v46) {
      primeEm = v46;
    }
    if (primeEm >= v40) {
      goto LABEL_117;
    }
    if (primeEm == 0) {
      v59 = *(_QWORD*)v6;
      *(_QWORD*)v6 = 0;
      if (v59 != 0) {
        v60 = 128;
        if (*(_QWORD*)(*v13 + 200) == 0) {
          v60 = 56;
        }
        nn_mem_StandardAllocator_Free(*v13 + v60, v59);
      }
      *((_QWORD*)v6 + 1) = 0;
      goto LABEL_117;
    }
  }
  if (primeEm >> 61 != 0) {
    GameRoutine_60a210();
  }
  v41 = fw_memory_HeapManager_Allocate(*v13, 8 * primeEm, 16, 0);
  v42 = *(_QWORD*)v6;
  *(_QWORD*)v6 = v41;
  if (v42 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*v13 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*v13 + v43, v42);
  }
  v44 = primeEm & 7;
  *((_QWORD*)v6 + 1) = primeEm;
  if (primeEm >= 8) {
    v45 = 0;
    do {
      *(_QWORD*)(*(_QWORD*)v6 + 8 * v45) = 0;
      *(_QWORD*)(*(_QWORD*)v6 + 8 * v45 + 8) = 0;
      *(_QWORD*)(*(_QWORD*)v6 + 8 * v45 + 16) = 0;
      *(_QWORD*)(*(_QWORD*)v6 + 8 * v45 + 24) = 0;
      *(_QWORD*)(*(_QWORD*)v6 + 8 * v45 + 32) = 0;
      *(_QWORD*)(*(_QWORD*)v6 + 8 * v45 + 40) = 0;
      *(_QWORD*)(*(_QWORD*)v6 + 8 * v45 + 48) = 0;
      v48 = *(_QWORD*)v6 + 8 * v45;
      v45 += 8;
      *(_QWORD*)(v48 + 56) = 0;
    } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v45);
  }
  else {
    v45 = 0;
  }
  if ((primeEm & 7) != 0) {
    v49 = 8 * v45;
    do {
      --v44;
      *(_QWORD*)(*(_QWORD*)v6 + v49) = 0;
      v49 += 8;
    } while (v44 != 0);
  }
  v51 = (__int64*)(v6 + 4);
  v50 = *((_QWORD**)v6 + 2);
  if (v50 != nullptr) {
    v52 = v50[1];
    v53 = primeEm - 1;
    if ((primeEm & (primeEm - 1)) != 0) {
      if (v52 >= primeEm) {
        v52 %= primeEm;
      }
      *(_QWORD*)(*(_QWORD*)v6 + 8 * v52) = v51;
      v54 = (_QWORD*)*v50;
      if (*v50 == 0) {
        goto LABEL_117;
      }
      while (1) {
        v55 = v54[1];
        if (v55 >= primeEm) {
          v55 %= primeEm;
        }
        if (v55 != v52) {
          if (*(_QWORD*)(*(_QWORD*)v6 + 8 * v55) == 0) {
            *(_QWORD*)(*(_QWORD*)v6 + 8 * v55) = v50;
            goto LABEL_94;
          }
          *v50 = *v54;
          *v54 = **(_QWORD**)(*(_QWORD*)v6 + 8 * v55);
          **(_QWORD**)(*(_QWORD*)v6 + 8 * v55) = v54;
          v54 = v50;
        }
        v55 = v52;
      LABEL_94:
        v50 = v54;
        v54 = (_QWORD*)*v54;
        v52 = v55;
        if (v54 == nullptr) {
          goto LABEL_117;
        }
      }
    }
    v56 = v52 & v53;
    *(_QWORD*)(*(_QWORD*)v6 + 8 * v56) = v51;
    while (1) {
      v57 = (_QWORD*)*v50;
      if (*v50 == 0) {
        break;
      }
      v58 = v57[1] & v53;
      if (v58 == v56) {
        v50 = (_QWORD*)*v50;
      }
      else if (*(_QWORD*)(*(_QWORD*)v6 + 8 * v58) != 0) {
        *v50 = *v57;
        *v57 = **(_QWORD**)(*(_QWORD*)v6 + 8 * v58);
        **(_QWORD**)(*(_QWORD*)v6 + 8 * v58) = v57;
      }
      else {
        *(_QWORD*)(*(_QWORD*)v6 + 8 * v58) = v50;
        v50 = v57;
        v56 = v58;
      }
    }
  }
LABEL_117:
  v7 = *((_QWORD*)v6 + 1);
  if ((v7 & (v7 - 1)) != 0) {
    if (v7 <= v2) {
      v2 %= v7;
    }
  }
  else {
    v2 &= v7 - 1;
  }
LABEL_121:
  v61 = *(_QWORD*)v6;
  v62 = *(__int64**)(*(_QWORD*)v6 + 8 * v2);
  if (v62 != nullptr) {
    *(_QWORD*)v17 = *v62;
    *v62 = v17;
  }
  else {
    *(_QWORD*)v17 = *((_QWORD*)v6 + 2);
    *((_QWORD*)v6 + 2) = v17;
    *(_QWORD*)(v61 + 8 * v2) = v6 + 4;
    if (*(_QWORD*)v17 != 0) {
      v63 = *(_QWORD*)(*(_QWORD*)v17 + 8LL);
      if ((v7 & (v7 - 1)) != 0) {
        if (v63 >= v7) {
          v63 %= v7;
        }
      }
      else {
        v63 &= v7 - 1;
      }
      *(_QWORD*)(*(_QWORD*)v6 + 8 * v63) = v17;
    }
  }
  ++*((_QWORD*)v6 + 3);
  return GameRoutine_6e3b50((__int64)&v66, v67[0]);
}

void game_CarryMap_RideMap_Restore_closure_Invoke(__int64 a1, int* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  bool v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64** v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  _QWORD* v13;
  unsigned __int8* v14;
  _QWORD* v15;
  unsigned __int8* v17;
  unsigned __int8* v18;
  _QWORD* v19;
  _QWORD* v20;
  struct {
    unsigned __int8 v21[2];
    __int16 v22;
    int v23;
    char gap8_[8];
    _QWORD* v24;
  } v21_;
  _QWORD v25[5];
  struct {
    _BYTE v26[2];
    __int16 v27;
    int v28;
  } v26_;
  _QWORD* v29;
  _QWORD v30[5];

  v2 = *(_QWORD**)(a1 + 8);
  v3 = v2[1];
  v4 = v3 == 0 || v2[3] == 0;
  if (v4) {
    return;
  }
  v5 = *a2;
  v6 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v7 = *a2;
    if (v3 <= v5) {
      v7 = v5 % v3;
    }
  }
  else {
    v7 = v6 & v5;
  }
  v8 = *(__int64***)(*v2 + 8 * v7);
  if (v8 == nullptr) {
    return;
  }
  v9 = *v8;
  if (*v8 == nullptr) {
    return;
  }
  if ((v3 & v6) == 0) {
    while (1) {
      v11 = v9[1];
      if (v11 == v5) {
        if (*((_DWORD*)v9 + 4) == (_DWORD)v5) {
          goto LABEL_25;
        }
      }
      else if ((v11 & v6) != v7) {
        return;
      }
      v9 = (__int64*)*v9;
      if (v9 == nullptr) {
        return;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == v5) {
      break;
    }
    if (v10 >= v3) {
      v10 %= v3;
    }
    if (v10 != v7) {
      return;
    }
  LABEL_14:
    v9 = (__int64*)*v9;
    if (v9 == nullptr) {
      return;
    }
  }
  if (*((_DWORD*)v9 + 4) != (_DWORD)v5) {
    goto LABEL_14;
  }
LABEL_25:
  v12 =
      (unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21f42d0 + 8) + 120LL) +
                         (v5 << 6));
  if (*v12 != 0 && *v12 == *((unsigned __int8*)v9 + 24) &&
      v12[1] == *((unsigned __int8*)v9 + 25)) {
    v13 = v9 + 4;
    if (*((_QWORD*)v12 + 4) != v9[6]) {
      goto LABEL_48;
    }
    v14 = *((unsigned __int8**)v12 + 2);
    if (v14 != v12 + 24) {
      v15 = (_QWORD*)*v13;
      while (v14[26] == *((unsigned __int8*)v15 + 26) &&
             *((unsigned __int16*)v14 + 14) == *((unsigned __int16*)v15 + 14)) {
        v17 = *((unsigned __int8**)v14 + 1);
        v18 = v14;
        if (v17 != nullptr) {
          do {
            v14 = v17;
            v17 = *(unsigned __int8**)v17;
          } while (v17 != nullptr);
        }
        else {
          do {
            v14 = *((unsigned __int8**)v18 + 2);
            v4 = v18 == *(unsigned __int8**)v14;
            v18 = v14;
          } while (!v4);
        }
        v19 = (_QWORD*)v15[1];
        if (v19 != nullptr) {
          do {
            v20 = v19;
            v19 = (_QWORD*)*v19;
          } while (v19 != nullptr);
        }
        else {
          do {
            v20 = (_QWORD*)v15[2];
            v4 = v15 == (_QWORD*)*v20;
            v15 = v20;
          } while (!v4);
        }
        v15 = v20;
        if (v14 == v12 + 24) {
          return;
        }
      }
    LABEL_48:
      v26_.v27 = 0;
      v26_.v28 = 0;
      v29 = v30;
      memset(v30, 0, sizeof(v30));
      GameRoutine_930b90_alt1((__int64)v26_.v26, (__int64)v12);
      if (&v29 != v13) {
        GameRoutine_6e36c0_alt2((__int64)&v29, (_QWORD*)v9[4], v9 + 5);
      }
      v21_.v22 = 0;
      v21_.v23 = 0;
      v21_.v24 = v25;
      memset(v25, 0, sizeof(v25));
      GameRoutine_930b90_alt1((__int64)v21_.v21, (__int64)v12);
      UnitVariables_930e20_alt1((__int64)v26_.v26);
      RidePool_93c4f0_alt1(*(_QWORD*)(GameData_21f42d0 + 8), v5, v21_.v21);
      UnitVariables_930e20_alt1((__int64)v21_.v21);
    }
  }
}

#pragma GCC visibility pop
