#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_GameUnitRecord_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GameUnitRecord_Destructor(_QWORD* a1);
__int64 GameUnitRecord_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_130ab20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_130c5c0(_QWORD, _QWORD);
__int64 GameRoutine_130c860(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e5c80(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
extern __int64 (*game_GameUnitRecord_Impl_vtable[])();
extern __int64 GameData_21c9a78;
extern __int64 GameData_21c9a80;
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64 GameUnitRecord_130b980(float* a1, __int64* a2);
__attribute__((swiftcall)) void GameUnitRecord_130c080(PSEUDO_X8 x8_,
                                                       __int64 a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void GameRoutine_130c5c0_alt1(__int64*,
                              unsigned __int64) __asm__("GameRoutine_130c5c0");
void GameUnitRecord_130b1a0(__int64 a1, int a2, __int64 a3);
void GameUnitRecord_130c860(__int64 a1, unsigned __int64* a2, __int64* a3,
                            __int64* a4);

__int64 GameUnitRecord_Destructor(_QWORD* a1)
{
  __int64 result;

  result = a1[1];
  *a1 = game_GameUnitRecord_vtable;
  a1[1] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 GameUnitRecord_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  v2 = a1[1];
  *a1 = game_GameUnitRecord_vtable;
  a1[1] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

void GameUnitRecord_130b1a0(__int64 a1, int a2, __int64 a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  float v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  float v28;
  float v29;
  _BOOL8 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 primeEm;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  unsigned __int64 v44;
  __int64 v45;
  int v46;
  _QWORD* v47;
  __int64 v48;
  float v49;
  float v50;
  float v51;
  _BOOL8 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  unsigned __int64 v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v83;
  int v84;
  int v85;

  v4 = *(unsigned __int64**)a3;
  if (*(_QWORD*)a3 == 0) {
    return;
  }
  v5 = *(_QWORD*)(a1 + 16);
  v6 = *v4;
  if (v5 == 0 || *(_QWORD*)(a1 + 32) == 0) {
  LABEL_7:
    if (v5 == 0) {
    LABEL_48:
      v21 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
      v22 = *(_QWORD*)(a3 + 32);
      v23 = *(_QWORD*)(a3 + 40);
      v24 = *(float*)(a1 + 40);
      v25 = v21;
      v21[1] = v6;
      v21[2] = v6;
      v21[7] = v22;
      v21[8] = v23;
      v21[9] = *(_QWORD*)(a3 + 48);
      v26 = *(_QWORD*)(a3 + 8);
      v21[3] = *(_QWORD*)a3;
      v21[4] = v26;
      v27 = *(_QWORD*)(a3 + 24);
      v21[5] = *(_QWORD*)(a3 + 16);
      v21[6] = v27;
      v28 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 32) + 1LL);
      if (v5 == 0 || (float)(v24 * (float)v5) < v28) {
        v29 = v28 / v24;
        v30 = true;
        if (v5 >= 3) {
          v30 = (v5 & (v5 - 1)) != 0;
        }
        v31 = v30 | (2 * v5);
        v32 = vcvtps_u64_f32(v29);
        if (v31 <= v32) {
          v33 = v32;
        }
        else {
          v33 = v31;
        }
        if (v33 == 1) {
          v33 = 2;
        }
        else if ((v33 & (v33 - 1)) != 0) {
          primeEm = std___1___next_prime(v33);
          v5 = *(_QWORD*)(a1 + 16);
          v33 = primeEm;
        }
        if (v33 > v5) {
          goto LABEL_60;
        }
        if (v33 < v5) {
          v35 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 32) /
                               *(float*)(a1 + 40));
          if (v5 < 3 || (v5 & (v5 - 1)) != 0) {
            v35 = std___1___next_prime(v35);
          }
          else {
            v36 = 1LL << -(char)__clz(v35 - 1);
            if (v35 >= 2) {
              v35 = v36;
            }
          }
          if (v33 <= v35) {
            v33 = v35;
          }
          if (v33 < v5) {
          LABEL_60:
            GameRoutine_130c5c0_alt1((__int64*)(a1 + 8), v33);
          }
        }
        v5 = *(_QWORD*)(a1 + 16);
        if ((v5 & (v5 - 1)) != 0) {
          if (v6 >= v5) {
            v3 = v6 % v5;
          }
          else {
            v3 = v6;
          }
        }
        else {
          v3 = (v5 - 1) & v6;
        }
      }
      v37 = *(_QWORD*)(a1 + 8);
      v38 = *(_QWORD**)(v37 + 8 * v3);
      if (v38 != nullptr) {
        *v25 = *v38;
        *v38 = v25;
      }
      else {
        v39 = *(_QWORD*)(a1 + 24);
        *(_QWORD*)(a1 + 24) = v25;
        *v25 = v39;
        *(_QWORD*)(v37 + 8 * v3) = a1 + 24;
        if (v39 != 0) {
          v40 = *(_QWORD*)(v39 + 8);
          if ((v5 & (v5 - 1)) != 0) {
            if (v40 >= v5) {
              v40 %= v5;
            }
          }
          else {
            v40 &= v5 - 1;
          }
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v40) = v25;
        }
      }
      ++*(_QWORD*)(a1 + 32);
      return;
    }
  LABEL_24:
    v15 = v5 - 1;
    if ((v5 & (v5 - 1)) != 0) {
      v3 = *v4;
      if (v6 >= v5) {
        v3 = v6 % v5;
      }
    }
    else {
      v3 = v15 & v6;
    }
    v17 = *(_QWORD**)(*(_QWORD*)(a1 + 8) + 8 * v3);
    if (v17 != nullptr) {
      v18 = (_QWORD*)*v17;
      if (v18 != nullptr) {
        if ((v5 & v15) == 0) {
          while (1) {
            v20 = v18[1];
            if (v20 == v6) {
              if (v18[2] == v6) {
                return;
              }
            }
            else if ((v20 & v15) != v3) {
              goto LABEL_48;
            }
            v18 = (_QWORD*)*v18;
            if (v18 == nullptr) {
              goto LABEL_48;
            }
          }
        }
        while (1) {
          v19 = v18[1];
          if (v19 == v6) {
            if (v18[2] == v6) {
              return;
            }
          }
          else {
            if (v19 >= v5) {
              v19 %= v5;
            }
            if (v19 != v3) {
              goto LABEL_48;
            }
          }
          v18 = (_QWORD*)*v18;
          if (v18 == nullptr) {
            goto LABEL_48;
          }
        }
      }
    }
    goto LABEL_48;
  }
  v3 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v10 = *v4;
    if (v6 >= v5) {
      v10 = v6 % v5;
    }
  }
  else {
    v10 = v3 & v6;
  }
  v11 = *(_QWORD*)(a1 + 8);
  v12 = *(_QWORD**)(v11 + 8 * v10);
  if (v12 == nullptr) {
    goto LABEL_24;
  }
  v13 = (_QWORD*)*v12;
  if (v13 == nullptr) {
    goto LABEL_24;
  }
  if ((v5 & v3) == 0) {
    while (1) {
      v16 = v13[1];
      if (v6 == v16) {
        if (v13[2] == v6) {
          goto LABEL_86;
        }
      }
      else if ((v16 & v3) != v10) {
        goto LABEL_7;
      }
      v13 = (_QWORD*)*v13;
      if (v13 == nullptr) {
        goto LABEL_7;
      }
    }
  }
  while (1) {
    v14 = v13[1];
    if (v6 == v14) {
      break;
    }
    if (v14 >= v5) {
      v14 %= v5;
    }
    if (v14 != v10) {
      goto LABEL_7;
    }
  LABEL_18:
    v13 = (_QWORD*)*v13;
    if (v13 == nullptr) {
      goto LABEL_7;
    }
  }
  if (v13[2] != v6) {
    goto LABEL_18;
  }
LABEL_86:
  if ((v5 & v3) != 0) {
    v41 = *v4;
    if (v6 >= v5) {
      v41 = v6 % v5;
    }
  }
  else {
    v41 = v3 & v6;
  }
  v42 = *(_QWORD**)(v11 + 8 * v41);
  if (v42 != nullptr) {
    v43 = (_QWORD*)*v42;
    if (*v42 != 0) {
      if ((v5 & v3) == 0) {
        while (1) {
          v45 = v43[1];
          if (v45 == v6) {
            if (v43[2] == v6) {
              goto LABEL_145;
            }
          }
          else if ((v45 & v3) != v41) {
            goto LABEL_105;
          }
          v43 = (_QWORD*)*v43;
          if (v43 == nullptr) {
            goto LABEL_105;
          }
        }
      }
      do {
        v44 = v43[1];
        if (v44 == v6) {
          if (v43[2] == v6) {
            goto LABEL_145;
          }
        }
        else {
          if (v44 >= v5) {
            v44 %= v5;
          }
          if (v44 != v41) {
            break;
          }
        }
        v43 = (_QWORD*)*v43;
      } while (v43 != nullptr);
    }
  }
LABEL_105:
  v46 = a2;
  v47 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v48 = *(_QWORD*)(a1 + 32);
  v49 = *(float*)(a1 + 40);
  v43 = v47;
  *v47 = 0;
  v47[1] = v6;
  v47[2] = v6;
  v47[3] = 0;
  v47[4] = 0;
  v47[5] = 0;
  v47[6] = 0;
  v47[7] = 0;
  v47[8] = 0;
  v47[9] = 0;
  v50 = (float)(unsigned __int64)(v48 + 1);
  if ((float)(v49 * (float)v5) < v50) {
    v51 = v50 / v49;
    v53 = (v5 & v3) != 0 || v5 < 3;
    v54 = v53 | (2 * v5);
    v55 = vcvtps_u64_f32(v51);
    if (v54 <= v55) {
      v56 = v55;
    }
    else {
      v56 = v54;
    }
    if (v56 == 1) {
      v56 = 2;
    }
    else if ((v56 & (v56 - 1)) != 0) {
      v56 = std___1___next_prime(v56);
    }
    v57 = *(_QWORD*)(a1 + 16);
    if (v56 > v57) {
      goto LABEL_120;
    }
    if (v56 < v57) {
      v58 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 32) /
                           *(float*)(a1 + 40));
      if (v57 < 3 || (v57 & (v57 - 1)) != 0) {
        v58 = std___1___next_prime(v58);
      }
      else {
        v59 = 1LL << -(char)__clz(v58 - 1);
        if (v58 >= 2) {
          v58 = v59;
        }
      }
      if (v56 <= v58) {
        v56 = v58;
      }
      if (v56 < v57) {
      LABEL_120:
        GameRoutine_130c5c0_alt1((__int64*)(a1 + 8), v56);
      }
    }
    v5 = *(_QWORD*)(a1 + 16);
    if ((v5 & (v5 - 1)) != 0) {
      if (v6 >= v5) {
        v41 = v6 % v5;
      }
      else {
        v41 = v6;
      }
    }
    else {
      v41 = (v5 - 1) & v6;
    }
  }
  v60 = *(_QWORD*)(a1 + 8);
  v61 = *(_QWORD**)(v60 + 8 * v41);
  if (v61 != nullptr) {
    a2 = v46;
    *v43 = *v61;
    *v61 = v43;
  }
  else {
    v62 = *(_QWORD*)(a1 + 24);
    a2 = v46;
    *(_QWORD*)(a1 + 24) = v43;
    *v43 = v62;
    *(_QWORD*)(v60 + 8 * v41) = a1 + 24;
    if (*v43 != 0) {
      v63 = *(_QWORD*)(*v43 + 8LL);
      if ((v5 & (v5 - 1)) != 0) {
        if (v63 >= v5) {
          v63 %= v5;
        }
      }
      else {
        v63 &= v5 - 1;
      }
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v63) = v43;
    }
  }
  ++*(_QWORD*)(a1 + 32);
  v4 = *(unsigned __int64**)a3;
LABEL_145:
  v43[3] = v4;
  if (a2 == 2) {
    v69 = *((_DWORD*)v43 + 10);
    if (v69 != 0) {
      v70 = 0;
    }
    else {
      v70 = *((_DWORD*)v43 + 9);
    }
    v71 = *(_DWORD*)(a3 + 12);
    if (*(_DWORD*)(a3 + 16) != 0) {
      v71 = 0;
    }
    if (*(_DWORD*)(a3 + 28) != 0) {
      v72 = 0;
    }
    else {
      v72 = *(_DWORD*)(a3 + 24);
    }
    if (v71 <= v70) {
      v81 = *((_DWORD*)v43 + 12);
      v80 = *((_DWORD*)v43 + 13);
      if (v80 != 0) {
        v81 = 0;
      }
      if (v71 != v70 || v72 <= v81) {
        goto LABEL_200;
      }
      if (v69 != 0) {
        *((_DWORD*)v43 + 8) = 0;
        *((_DWORD*)v43 + 10) = 0;
      }
      *((_DWORD*)v43 + 9) = v70;
      if (v80 == 0) {
      LABEL_175:
        *((_DWORD*)v43 + 12) = v72;
      LABEL_200:
        v83 = *((_DWORD*)v43 + 16);
        if (v83 != 0) {
          v84 = 0;
        }
        else {
          v84 = *((_DWORD*)v43 + 15);
        }
        if (*(_DWORD*)(a3 + 40) != 0) {
          v85 = 0;
        }
        else {
          v85 = *(_DWORD*)(a3 + 36);
        }
        if (v85 > v84) {
          if (v83 != 0) {
            *((_DWORD*)v43 + 14) = 0;
            *((_DWORD*)v43 + 16) = 0;
          }
          *((_DWORD*)v43 + 15) = v85;
        }
        goto LABEL_210;
      }
    }
    else {
      if (v69 != 0) {
        *((_DWORD*)v43 + 8) = 0;
        *((_DWORD*)v43 + 10) = 0;
      }
      v73 = *((_DWORD*)v43 + 13);
      *((_DWORD*)v43 + 9) = v71;
      if (v73 == 0) {
        goto LABEL_175;
      }
    }
    *((_DWORD*)v43 + 11) = 0;
    *((_DWORD*)v43 + 13) = 0;
    goto LABEL_175;
  }
  if (a2 == 1) {
    v64 = *((_DWORD*)v43 + 10);
    if (v64 != 0) {
      v65 = 0;
    }
    else {
      v65 = *((_DWORD*)v43 + 8);
    }
    if (*(_DWORD*)(a3 + 16) != 0) {
      v66 = 0;
    }
    else {
      v66 = *(_DWORD*)(a3 + 8);
    }
    if (*(_DWORD*)(a3 + 28) != 0) {
      v67 = 0;
    }
    else {
      v67 = *(_DWORD*)(a3 + 20);
    }
    if (v66 > v65) {
      if (v64 != 0) {
        *(_QWORD*)((char*)v43 + 36) = 0;
      }
      v68 = *((_DWORD*)v43 + 13);
      *((_DWORD*)v43 + 8) = v66;
      if (v68 != 0) {
        goto LABEL_160;
      }
      goto LABEL_161;
    }
    v74 = *((_DWORD*)v43 + 13);
    v75 = *((_DWORD*)v43 + 11);
    if (v74 != 0) {
      v75 = 0;
    }
    if (v66 == v65 && v67 > v75) {
      if (v64 != 0) {
        *(_QWORD*)((char*)v43 + 36) = 0;
      }
      *((_DWORD*)v43 + 8) = v65;
      if (v74 != 0) {
      LABEL_160:
        v43[6] = 0;
      }
    LABEL_161:
      *((_DWORD*)v43 + 11) = v67;
    }
    v77 = *((_DWORD*)v43 + 16);
    if (v77 != 0) {
      v78 = 0;
    }
    else {
      v78 = *((_DWORD*)v43 + 14);
    }
    if (*(_DWORD*)(a3 + 40) != 0) {
      v79 = 0;
    }
    else {
      v79 = *(_DWORD*)(a3 + 32);
    }
    if (v79 > v78) {
      if (v77 != 0) {
        *(_QWORD*)((char*)v43 + 60) = 0;
      }
      *((_DWORD*)v43 + 14) = v79;
    }
  }
LABEL_210:
  v43[9] |= *(_QWORD*)(a3 + 48);
}

__int64 GameUnitRecord_130b980(float* a1, __int64* a2)
{
  float* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  unsigned __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  char v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  _QWORD* v62;
  _QWORD* v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64* v66;
  unsigned __int64 v67;
  int v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  float v74;
  unsigned __int64 v75;
  float v76;
  float v77;
  _BOOL8 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  __int64 primeEm;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64* v90;
  float* v91;
  __int64* v92;
  unsigned __int64 v93;
  int v94;
  unsigned __int64 v95;
  int v96;
  unsigned __int64 v97;
  int v98;

  v3 = a1;
  if (*((_QWORD*)a1 + 4) != 0) {
    v4 = *((_QWORD**)a1 + 3);
    if (v4 != nullptr) {
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        v6 = (_QWORD*)*v4;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7);
        v4 = v6;
      } while (v6 != nullptr);
    }
    v8 = *((_QWORD*)v3 + 2);
    *((_QWORD*)v3 + 3) = 0;
    if (v8 != 0) {
      v9 = v8 & 7;
      if (v8 >= 8) {
        v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = 0;
        do {
          *(_QWORD*)(*((_QWORD*)v3 + 1) + 8 * v10) = 0;
          *(_QWORD*)(*((_QWORD*)v3 + 1) + 8 * v10 + 8) = 0;
          *(_QWORD*)(*((_QWORD*)v3 + 1) + 8 * v10 + 16) = 0;
          *(_QWORD*)(*((_QWORD*)v3 + 1) + 8 * v10 + 24) = 0;
          *(_QWORD*)(*((_QWORD*)v3 + 1) + 8 * v10 + 32) = 0;
          *(_QWORD*)(*((_QWORD*)v3 + 1) + 8 * v10 + 40) = 0;
          *(_QWORD*)(*((_QWORD*)v3 + 1) + 8 * v10 + 48) = 0;
          v12 = *((_QWORD*)v3 + 1) + 8 * v10;
          v10 += 8;
          *(_QWORD*)(v12 + 56) = 0;
        } while (v11 != v10);
      }
      else {
        v10 = 0;
      }
      if (v9 != 0) {
        v13 = 8 * v10;
        do {
          --v9;
          *(_QWORD*)(*((_QWORD*)v3 + 1) + v13) = 0;
          v13 += 8;
        } while (v9 != 0);
      }
    }
    *((_QWORD*)v3 + 4) = 0;
  }
  v14 = game_HashString32("GameUnitRecord");
  v15 = *a2;
  v98 = v14;
  if (((*(__int64 (**)(__int64*, int*))(v15 + 16))(a2, &v98) & 1) != 0) {
    v16 = *((int*)a2 + 5);
    v17 = a2[1];
    *((_DWORD*)a2 + 5) = v16 + 2;
    v18 = *(unsigned __int8*)(v17 + v16 + 1);
    *((_DWORD*)a2 + 5) = v16 + 3;
    v94 = v18 | (*(unsigned __int8*)(v17 + v16 + 2) << 8);
    if (v94 != 0) {
      v19 = 0;
      v92 = a2;
      v90 = (__int64*)(v3 + 6);
      v91 = v3;
      do {
        v20 = (unsigned __int64*)GameRoutine_6e5c80(a2);
        v21 = *((int*)a2 + 5);
        v22 = a2[1];
        v23 = v21 + 1;
        *((_DWORD*)a2 + 5) = v21 + 1;
        if (*(_BYTE*)(v22 + v21) != 0) {
          v24 = 0;
          v25 = 1;
        }
        else {
          v25 = 0;
          *((_DWORD*)a2 + 5) = v21 + 2;
          v23 = *(unsigned __int8*)(v22 + v23);
          *((_DWORD*)a2 + 5) = v21 + 3;
          v26 = *(unsigned __int8*)(v22 + v21 + 2);
          *((_DWORD*)a2 + 5) = v21 + 4;
          v27 = *(unsigned __int8*)(v22 + v21 + 3);
          *((_DWORD*)a2 + 5) = v21 + 5;
          v28 = *(unsigned __int8*)(v22 + v21 + 4);
          *((_DWORD*)a2 + 5) = v21 + 6;
          v29 = *(unsigned __int8*)(v22 + v21 + 5);
          *((_DWORD*)a2 + 5) = v21 + 7;
          v30 = *(unsigned __int8*)(v22 + v21 + 6);
          v31 = v23 | (v26 << 8);
          *((_DWORD*)a2 + 5) = v21 + 8;
          LODWORD(v23) = v21 + 9;
          v32 = *(unsigned __int8*)(v22 + v21 + 7);
          *((_DWORD*)a2 + 5) = v21 + 9;
          v24 = v31 | (v27 << 16) | (v28 << 24) | (v29 << 32) | (v30 << 40) |
                (v32 << 48) |
                ((unsigned __int64)*(unsigned __int8*)(v22 + v21 + 8) << 56);
        }
        v33 = (int)v23;
        v34 = (int)v23 + 1LL;
        *((_DWORD*)a2 + 5) = v34;
        if (*(_BYTE*)(v22 + v33) != 0) {
          v35 = 0;
          v36 = 1;
        }
        else {
          v36 = 0;
          *((_DWORD*)a2 + 5) = v33 + 2;
          v34 = *(unsigned __int8*)(v22 + v34);
          *((_DWORD*)a2 + 5) = v33 + 3;
          v37 = *(unsigned __int8*)(v22 + v33 + 2);
          *((_DWORD*)a2 + 5) = v33 + 4;
          v38 = *(unsigned __int8*)(v22 + v33 + 3);
          *((_DWORD*)a2 + 5) = v33 + 5;
          v39 = *(unsigned __int8*)(v22 + v33 + 4);
          *((_DWORD*)a2 + 5) = v33 + 6;
          v40 = *(unsigned __int8*)(v22 + v33 + 5);
          *((_DWORD*)a2 + 5) = v33 + 7;
          v41 = *(unsigned __int8*)(v22 + v33 + 6);
          v42 = v34 | (v37 << 8);
          *((_DWORD*)a2 + 5) = v33 + 8;
          LODWORD(v34) = v33 + 9;
          v43 = *(unsigned __int8*)(v22 + v33 + 7);
          *((_DWORD*)a2 + 5) = v33 + 9;
          v35 = v42 | (v38 << 16) | (v39 << 24) | (v40 << 32) | (v41 << 40) |
                (v43 << 48) |
                ((unsigned __int64)*(unsigned __int8*)(v22 + v33 + 8) << 56);
        }
        v44 = (int)v34;
        v45 = (int)v34 + 1LL;
        *((_DWORD*)a2 + 5) = v45;
        if (*(_BYTE*)(v22 + v44) != 0) {
          v46 = 0;
          v47 = 0;
          v48 = 1;
        }
        else {
          v48 = 0;
          *((_DWORD*)a2 + 5) = v44 + 2;
          v45 = *(unsigned __int8*)(v22 + v45);
          *((_DWORD*)a2 + 5) = v44 + 3;
          v49 = *(unsigned __int8*)(v22 + v44 + 2);
          *((_DWORD*)a2 + 5) = v44 + 4;
          v50 = *(unsigned __int8*)(v22 + v44 + 3);
          *((_DWORD*)a2 + 5) = v44 + 5;
          v51 = *(unsigned __int8*)(v22 + v44 + 4);
          *((_DWORD*)a2 + 5) = v44 + 6;
          v52 = *(unsigned __int8*)(v22 + v44 + 5);
          *((_DWORD*)a2 + 5) = v44 + 7;
          v53 = *(unsigned __int8*)(v22 + v44 + 6);
          v54 = v45 | (v49 << 8);
          *((_DWORD*)a2 + 5) = v44 + 8;
          LODWORD(v45) = v44 + 9;
          v55 = *(unsigned __int8*)(v22 + v44 + 7);
          *((_DWORD*)a2 + 5) = v44 + 9;
          v46 = v54 | (v50 << 16) | (v51 << 24);
          v47 = (v52 << 32) | (v53 << 40) | (v55 << 48) |
                ((unsigned __int64)*(unsigned __int8*)(v22 + v44 + 8) << 56);
        }
        *((_DWORD*)a2 + 5) = v45 + 1;
        v56 = *(unsigned __int8*)(v22 + (int)v45);
        *((_DWORD*)a2 + 5) = v45 + 2;
        if (v20 != nullptr) {
          v57 = *(_BYTE*)(v22 + (int)v45 + 1LL);
          v58 = *v20;
          v59 = *((_QWORD*)v3 + 2);
          if (v59 != 0) {
            v60 = v59 - 1;
            if ((v59 & (v59 - 1)) != 0) {
              v61 = *v20;
              if (v58 >= v59) {
                v61 = v58 % v59;
              }
            }
            else {
              v61 = v60 & v58;
            }
            v93 = v61;
            v62 = *(_QWORD**)(*((_QWORD*)v3 + 1) + 8 * v61);
            if (v62 != nullptr) {
              v63 = (_QWORD*)*v62;
              if (v63 != nullptr) {
                if ((v59 & v60) == 0) {
                  while (1) {
                    v65 = v63[1];
                    if (v65 == v58) {
                      if (v63[2] == v58) {
                        goto LABEL_22;
                      }
                    }
                    else if ((v65 & v60) != v61) {
                      goto LABEL_53;
                    }
                    v63 = (_QWORD*)*v63;
                    if (v63 == nullptr) {
                      goto LABEL_53;
                    }
                  }
                }
                do {
                  v64 = v63[1];
                  if (v64 == v58) {
                    if (v63[2] == v58) {
                      goto LABEL_22;
                    }
                  }
                  else {
                    if (v64 >= v59) {
                      v64 %= v59;
                    }
                    if (v64 != v61) {
                      break;
                    }
                  }
                  v63 = (_QWORD*)*v63;
                } while (v63 != nullptr);
              }
            }
          }
        LABEL_53:
          v96 = v19;
          v66 = v20;
          v67 = v24;
          v68 = v48;
          v95 = *((_QWORD*)v3 + 2);
          v97 = *v20;
          v69 = v56 & 0xFFFFFFFFFFFFFCFFLL | ((unsigned __int64)(v57 & 3) << 8);
          v70 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
          v71 = v97;
          *(_QWORD*)(v70 + 56) = v47 | v46;
          v72 = v70;
          *(_QWORD*)(v70 + 32) = v67;
          *(_DWORD*)(v70 + 40) = v25;
          *(_QWORD*)(v70 + 44) = v35;
          v73 = *((_QWORD*)v91 + 4);
          v74 = v91[10];
          *(_QWORD*)(v70 + 16) = v97;
          *(_QWORD*)(v70 + 24) = v66;
          v75 = v95;
          *(_QWORD*)v70 = 0;
          *(_QWORD*)(v70 + 8) = v97;
          *(_DWORD*)(v70 + 52) = v36;
          *(_DWORD*)(v70 + 64) = v68;
          *(_QWORD*)(v70 + 72) = v69;
          v3 = v91;
          v76 = (float)(unsigned __int64)(v73 + 1);
          if (v95 != 0 && (float)(v74 * (float)v95) >= v76) {
            v19 = v96;
            a2 = v92;
            v71 = v93;
          }
          else {
            v77 = v76 / v74;
            v19 = v96;
            a2 = v92;
            v78 = (v95 & (v95 - 1)) != 0;
            if (v95 < 3) {
              v78 = true;
            }
            v79 = v78 | (2 * v95);
            v80 = vcvtps_u64_f32(v77);
            if (v79 <= v80) {
              v81 = v80;
            }
            else {
              v81 = v79;
            }
            if (v81 == 1) {
              v81 = 2;
            }
            else if ((v81 & (v81 - 1)) != 0) {
              primeEm = std___1___next_prime(v81);
              v71 = v97;
              v75 = *((_QWORD*)v91 + 2);
              v81 = primeEm;
            }
            if (v81 > v75) {
              goto LABEL_66;
            }
            if (v81 < v75) {
              v83 = vcvtps_u64_f32((float)*((unsigned __int64*)v91 + 4) /
                                   v91[10]);
              if (v75 < 3 || (v75 & (v75 - 1)) != 0) {
                v83 = std___1___next_prime(v83);
                v71 = v97;
              }
              else {
                v84 = 1LL << -(char)__clz(v83 - 1);
                if (v83 >= 2) {
                  v83 = v84;
                }
              }
              if (v81 <= v83) {
                v81 = v83;
              }
              if (v81 < v75) {
              LABEL_66:
                GameRoutine_130c5c0(v91 + 2, v81);
                v71 = v97;
              }
            }
            v75 = *((_QWORD*)v91 + 2);
            if ((v75 & (v75 - 1)) != 0) {
              if (v71 >= v75) {
                v71 %= v75;
              }
            }
            else {
              v71 &= v75 - 1;
            }
          }
          v85 = *((_QWORD*)v91 + 1);
          v86 = *(__int64**)(v85 + 8 * v71);
          if (v86 != nullptr) {
            *(_QWORD*)v72 = *v86;
            *v86 = v72;
          }
          else {
            v87 = *v90;
            *v90 = v72;
            *(_QWORD*)v72 = v87;
            *(_QWORD*)(v85 + 8 * v71) = v90;
            if (*(_QWORD*)v72 != 0) {
              v88 = *(_QWORD*)(*(_QWORD*)v72 + 8LL);
              if ((v75 & (v75 - 1)) != 0) {
                if (v88 >= v75) {
                  v88 %= v75;
                }
              }
              else {
                v88 &= v75 - 1;
              }
              *(_QWORD*)(*((_QWORD*)v91 + 1) + 8 * v88) = v72;
            }
          }
          ++*((_QWORD*)v91 + 4);
        }
      LABEL_22:
        ++v19;
      } while (v19 != v94);
    }
  }
  return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
}

__attribute__((swiftcall)) void GameUnitRecord_130c080(PSEUDO_X8 x8_,
                                                       __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v5;
  unsigned __int64** v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  _QWORD* v20;
  unsigned __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64* v26;
  unsigned __int64 v27;
  unsigned __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  unsigned __int64 v36;

  *a2 = game_GameUnitRecord_vtable;
  result = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 48, 16, 0);
  a2[1] = result;
  *(_QWORD*)(result + 8) = 0;
  v5 = result + 8;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)result = game_GameUnitRecord_Impl_vtable;
  *(_DWORD*)(result + 40) = 1065353216;
  if (a1 == 0) {
    v6 = (unsigned __int64**)GameData_21c9a78;
    v7 = GameData_21c9a80;
    if (GameData_21c9a78 == GameData_21c9a80) {
      result;
      return;
    }
    goto LABEL_59;
  }
  v6 = (unsigned __int64**)GameData_21c9a78;
  v7 = GameData_21c9a80;
  if (GameData_21c9a78 == GameData_21c9a80) {
    result;
    return;
  }
  v8 = *(_QWORD**)(a1 + 8);
  v9 = v8 + 1;
  if (v8 == (_QWORD*)-8LL) {
    do {
    LABEL_59:
      v26 = *v6;
      if (*v6 != nullptr) {
        v27 = *v26;
      }
      else {
        v27 = 0;
      }
      v36 = v27;
      v28 = v26;
      v35 = 241;
      result = game_UnitPool_Find_6ead60(&v28, &v35);
      if (result != 0) {
        v29 = 0;
        v30 = 0;
        v33 = 0;
        v31 = 0;
        v32 = 0;
        v34 = 0;
        result = GameRoutine_130ab20(&v28, result, 0);
        if (v28 != nullptr) {
          result = GameRoutine_130c860(v5, &v36, &v36, &v28);
        }
      }
      ++v6;
    } while (v6 != (unsigned __int64**)v7);
    {
      result;
      return;
    }
  }
  do {
    v10 = *v6;
    if (*v6 != nullptr) {
      v11 = *v10;
    }
    else {
      v11 = 0;
    }
    v36 = v11;
    v28 = v10;
    v35 = 241;
    result = game_UnitPool_Find_6ead60(&v28, &v35);
    v12 = v8[2];
    if (v12 != 0 && v8[4] != 0) {
      v14 = v12 - 1;
      if ((v12 & (v12 - 1)) != 0) {
        v15 = v11;
        if (v11 >= v12) {
          v15 = v11 % v12;
        }
      }
      else {
        v15 = v14 & v11;
      }
      v16 = *(_QWORD**)(*v9 + 8 * v15);
      if (v16 != nullptr) {
        v17 = (_QWORD*)*v16;
        if (v17 != nullptr) {
          if ((v12 & v14) == 0) {
            while (1) {
              v19 = v17[1];
              if (v11 == v19) {
                if (v17[2] == v11) {
                  goto LABEL_36;
                }
              }
              else if ((v19 & v14) != v15) {
                goto LABEL_32;
              }
              v17 = (_QWORD*)*v17;
              if (v17 == nullptr) {
                goto LABEL_32;
              }
            }
          }
          do {
            v18 = v17[1];
            if (v11 == v18) {
              if (v17[2] == v11) {
              LABEL_36:
                if ((v12 & v14) != 0) {
                  v21 = v11;
                  if (v11 >= v12) {
                    v21 = v11 % v12;
                  }
                }
                else {
                  v21 = v14 & v11;
                }
                v22 = *(_QWORD**)(*v9 + 8 * v21);
                if (v22 == nullptr || (v23 = (_QWORD*)*v22) == nullptr) {
                LABEL_66:
                  String_60a250("unordered_map::at: key not found");
                }
                if ((v12 & v14) == 0) {
                  while (1) {
                    v25 = v23[1];
                    if (v11 == v25) {
                      if (v23[2] == v11) {
                        goto LABEL_55;
                      }
                    }
                    else if ((v25 & v14) != v21) {
                      goto LABEL_66;
                    }
                    v23 = (_QWORD*)*v23;
                    if (v23 == nullptr) {
                      goto LABEL_66;
                    }
                  }
                }
                while (1) {
                  v24 = v23[1];
                  if (v11 == v24) {
                    if (v23[2] == v11) {
                    LABEL_55:
                      v20 = v23 + 3;
                      goto LABEL_34;
                    }
                  }
                  else {
                    if (v24 >= v12) {
                      v24 %= v12;
                    }
                    if (v24 != v21) {
                      goto LABEL_66;
                    }
                  }
                  v23 = (_QWORD*)*v23;
                  if (v23 == nullptr) {
                    goto LABEL_66;
                  }
                }
              }
            }
            else {
              if (v18 >= v12) {
                v18 %= v12;
              }
              if (v18 != v15) {
                break;
              }
            }
            v17 = (_QWORD*)*v17;
          } while (v17 != nullptr);
        }
      }
    }
  LABEL_32:
    if (result != 0) {
      v20 = nullptr;
    LABEL_34:
      v34 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      result = GameRoutine_130ab20(&v28, result, v20);
      if (v28 != nullptr) {
        result = GameRoutine_130c860(v5, &v36, &v36, &v28);
      }
    }
    ++v6;
  } while (v6 != (unsigned __int64**)v7);
  {
    result;
    return;
  }
}

void GameUnitRecord_130c3f0(__int64 a1, _QWORD* a2) { *a2 = 0; }

void GameUnitRecord_130c400(__int64 a1, _DWORD* a2) { *a2 = 0; }

void GameUnitRecord_130c860(__int64 a1, unsigned __int64* a2, __int64* a3,
                            __int64* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  float v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float v27;
  float v28;
  _BOOL8 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 primeEm;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  unsigned __int64 v39;

  v5 = *a2;
  v6 = *(_QWORD*)(a1 + 8);
  if (v6 != 0) {
    v10 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = *a2;
      if (v5 >= v6) {
        v4 = v5 % v6;
      }
    }
    else {
      v4 = v10 & v5;
    }
    v11 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
    if (v11 != nullptr) {
      v12 = (_QWORD*)*v11;
      if (v12 != nullptr) {
        if ((v6 & v10) == 0) {
          while (1) {
            v14 = v12[1];
            if (v14 == v5) {
              if (v12[2] == v5) {
                return;
              }
            }
            else if ((v14 & v10) != v4) {
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
          if (v13 == v5) {
            if (v12[2] == v5) {
              return;
            }
          }
          else {
            if (v13 >= v6) {
              v13 %= v6;
            }
            if (v13 != v4) {
              break;
            }
          }
          v12 = (_QWORD*)*v12;
        } while (v12 != nullptr);
      }
    }
  }
LABEL_22:
  v15 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v16 = a4[4];
  v17 = a4[5];
  v19 = a4[2];
  v18 = a4[3];
  v20 = v15;
  v21 = *a3;
  v22 = *(float*)(a1 + 32);
  *v15 = 0;
  v15[1] = v5;
  v15[6] = v18;
  v15[7] = v16;
  v23 = a4[6];
  v15[8] = v17;
  v15[9] = v23;
  v24 = *a4;
  v25 = a4[1];
  v15[2] = v21;
  v15[3] = v24;
  v26 = *(_QWORD*)(a1 + 24);
  v15[4] = v25;
  v15[5] = v19;
  v27 = (float)(unsigned __int64)(v26 + 1);
  if (v6 == 0 || (float)(v22 * (float)v6) < v27) {
    v28 = v27 / v22;
    v29 = true;
    if (v6 >= 3) {
      v29 = (v6 & (v6 - 1)) != 0;
    }
    v30 = v29 | (2 * v6);
    v31 = vcvtps_u64_f32(v28);
    if (v30 <= v31) {
      v32 = v31;
    }
    else {
      v32 = v30;
    }
    if (v32 == 1) {
      v32 = 2;
    }
    else if ((v32 & (v32 - 1)) != 0) {
      primeEm = std___1___next_prime(v32);
      v6 = *(_QWORD*)(a1 + 8);
      v32 = primeEm;
    }
    if (v32 > v6) {
      goto LABEL_34;
    }
    if (v32 < v6) {
      v34 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
        v34 = std___1___next_prime(v34);
      }
      else {
        v35 = 1LL << -(char)__clz(v34 - 1);
        if (v34 >= 2) {
          v34 = v35;
        }
      }
      if (v32 <= v34) {
        v32 = v34;
      }
      if (v32 < v6) {
      LABEL_34:
        GameRoutine_130c5c0_alt1((__int64*)a1, v32);
      }
    }
    v6 = *(_QWORD*)(a1 + 8);
    if ((v6 & (v6 - 1)) != 0) {
      if (v5 >= v6) {
        v4 = v5 % v6;
      }
      else {
        v4 = v5;
      }
    }
    else {
      v4 = (v6 - 1) & v5;
    }
  }
  v36 = *(_QWORD*)a1;
  v37 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v37 != nullptr) {
    *v20 = *v37;
    *v37 = v20;
  }
  else {
    v38 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v20;
    *v20 = v38;
    *(_QWORD*)(v36 + 8 * v4) = a1 + 16;
    if (*v20 != 0) {
      v39 = *(_QWORD*)(*v20 + 8LL);
      if ((v6 & (v6 - 1)) != 0) {
        if (v39 >= v6) {
          v39 %= v6;
        }
      }
      else {
        v39 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v39) = v20;
    }
  }
  ++*(_QWORD*)(a1 + 24);
}

#pragma GCC visibility pop
