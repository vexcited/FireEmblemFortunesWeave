#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a0a7b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60eb40(_QWORD, _QWORD);
__int64 GameRoutine_7c05a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7d6200(_QWORD, _QWORD);
__int64 GameRoutine_8ef040(float*, unsigned int*, int*, int*);
__int64 GameRoutine_a15480(void);
__int64 GameRoutine_a15ec0(_QWORD);
__int64 GameRoutine_a16aa0(void);
__int64 MapUtil_753570(_QWORD, _QWORD);
__int64 Mind_746340(_QWORD, _QWORD);
__int64 TargetMask_a19570(_QWORD);
__int64 VTarget_778140(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1fbd5f0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfd0[8];
extern __int64* game_g_empty_item_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_705570(_QWORD);
void __attribute__((noreturn)) GameRoutine_74e1f0(_QWORD);
void __attribute__((noreturn)) GameRoutine_a16a80(void);
bool game_map_TargetMask_Commit(_QWORD* a1, __int64 a2);
__int64 game_map_TargetMask_GetNextIndex_lambda0_Invoke(__int64 a1, int* a2);
__int64* GameRoutine_a19aa0(__int64* result, unsigned __int64);
__int64* fw_containers_BalanceAfterInsert(__int64* result, __int64*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
unsigned __int64
game_map_TargetMask_Commit_lambda0_Invoke(unsigned __int64 result, int* a2);

bool game_map_TargetMask_Commit(_QWORD* a1, __int64 a2)
{
  unsigned __int64 v2;
  __int64* v5;
  void (***v6)(_QWORD);
  void (***v7)(_QWORD);
  _DWORD* v8;
  _DWORD* v9;
  __int64* v10;
  __int64 v11;
  __int16* v12;
  __int64 v13;
  int v14;
  int v15;
  bool v16;
  __int64 v17;
  unsigned int v18;
  int v19;
  bool v20;
  void (***v22)(_QWORD);
  __int64 v23;
  void (***v24)(_QWORD);
  void (***v25)(_QWORD);
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  unsigned int v33;
  bool v34;
  __int64 v35;
  __int64 (**v36)();
  __int64 v37;
  unsigned __int64 v38;
  _BYTE* v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  unsigned __int64 v45;
  int v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64** v50;
  __int64* v51;
  unsigned __int64 v52;
  __int64 v53;
  char v54;
  char v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  _BYTE* v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  char v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  _BYTE* v68;
  _BYTE* v69;
  char v70;
  __int64 v71;
  __int64 (***v72)();
  unsigned int v73;
  int v74;
  __int64 (**v75)();
  __int64 v76;
  unsigned int v77;
  __int64 v78;
  __int64 v79;
  unsigned int v80;
  bool v81;
  unsigned __int64 v82;
  _QWORD* v83;
  __int64 v84;
  char* v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  char* v92;
  __int64 v93;
  __int64 v94;
  _QWORD* v95;
  _QWORD* v96;
  __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  __int64 v103;
  char* v104;
  char* v105;
  __int64* v106;
  _QWORD* v107;
  int v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  __int64** v112;
  __int64* v113;
  unsigned __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  float v118;
  __int64 v119;
  float v120;
  float v121;
  _BOOL8 v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  __int64 primeEm;
  unsigned __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64* v130;
  __int64 v131;
  unsigned __int64 v132;
  __int64 v133;
  _QWORD* v134;
  _QWORD* v136;
  _QWORD* v137;
  unsigned __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  _QWORD* v142;
  int v143;
  int v144;
  int v145;
  __int64 v146;
  _QWORD* v147;
  _QWORD v148[2];
  int v149;

  GameRoutine_a15480();
  if (a2 == 0) {
    return a1[4] != a1[3];
  }
  v5 = GameData_212cfd0[0];
  v142 = a1;
  if ((Mind_746340(*GameData_212cfd0[0], 3) & 1) != 0) {
    v7 = (void (***)(_QWORD))*a1;
    v6 = (void (***)(_QWORD))a1[1];
    if ((void (***)(_QWORD))((char*)v6 - *a1) == (void (***)(_QWORD))-37096LL) {
      while (v6 != v7) {
        v6 -= 4637;
        (**v6)(v6);
      }
      a1[1] = v7;
    }
    else {
      GameRoutine_a15ec0(a1);
      v7 = (void (***)(_QWORD))a1[1];
    }
    if (v7 == (void (***)(_QWORD))*a1) {
      goto LABEL_256;
    }
    VTarget_778140(v7 - 4637, a2, 3, 0);
    (*(v7 - 4637))[3](v7 - 4637);
  }
  v140 = a2;
  if ((Mind_746340(*v5, 5) & 1) != 0) {
    v8 = *(_DWORD**)(a2 + 1488);
    v9 = *(_DWORD**)(a2 + 1496);
    if (v8 != v9) {
      v10 = GameData_212c880[0];
      v11 = *GameData_212c880[0];
      v12 = GameData_212cf08[0];
      do {
        v13 = *(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*v8 & 0xFFF));
        if (v13 == 0) {
          goto LABEL_13;
        }
        v14 = *(unsigned __int8*)(v13 + 104);
        if ((((unsigned __int16)*v12 >> v14) & 1) == 0) {
          goto LABEL_13;
        }
        v15 = *(unsigned __int8*)(v13 + 106);
        v16 = *(_BYTE*)(v13 + 106) == 0 || v15 == 6;
        if (v16) {
          v17 = *(_QWORD*)(v13 + 576);
          if (v17 == 0) {
            goto LABEL_13;
          }
        }
        else {
          if (v15 != 1) {
            goto LABEL_13;
          }
          v17 = *(_QWORD*)(v13 + 576);
          if (v17 == 0) {
            if (v14 != 2) {
              goto LABEL_13;
            }
            goto LABEL_33;
          }
        }
        v18 = *(unsigned __int8*)(v17 + 72);
        v19 = *(unsigned __int8*)(v17 + 73);
        v20 = v14 != 2 || v18 > 7;
        if (v20 || v19 != 1) {
          goto LABEL_13;
        }
      LABEL_33:
        if (*(_BYTE*)(v13 + 105) == 1) {
          v2 = *a1;
          v22 = (void (***)(_QWORD))a1[1];
          if ((void (***)(_QWORD))((char*)v22 - *a1) ==
              (void (***)(_QWORD))-37096LL) {
            while (v22 != (void (***)(_QWORD))v2) {
              v22 -= 4637;
              (**v22)(v22);
            }
            a1[1] = v2;
          }
          else {
            GameRoutine_a15ec0(a1);
            v2 = a1[1];
          }
          if (v2 == *a1) {
            goto LABEL_256;
          }
          VTarget_778140(
              v2 - 37096, a2, 5,
              *(_QWORD*)(*(_QWORD*)(*v10 + 64) + 8LL * (*v8 & 0xFFF)));
          (*(void (**)(unsigned __int64))(*(_QWORD*)(v2 - 37096) + 24LL))(
              v2 - 37096);
          v11 = *v10;
        }
      LABEL_13:
        ++v8;
      } while (v8 != v9);
    }
  }
  v23 = a2;
  if ((Mind_746340(*v5, 4) & 1) == 0) {
    goto LABEL_51;
  }
  v25 = (void (***)(_QWORD))*a1;
  v24 = (void (***)(_QWORD))a1[1];
  if ((void (***)(_QWORD))((char*)v24 - *a1) == (void (***)(_QWORD))-37096LL) {
    while (v24 != v25) {
      v24 -= 4637;
      (**v24)(v24);
    }
    a1[1] = v25;
  }
  else {
    GameRoutine_a15ec0(a1);
    v25 = (void (***)(_QWORD))a1[1];
  }
  if (v25 == (void (***)(_QWORD))*a1) {
  LABEL_256:
    GameRoutine_a16a80();
  }
  VTarget_778140(v25 - 4637, a2, 4, 0);
  (*(v25 - 4637))[3](v25 - 4637);
LABEL_51:
  v148[0] = 0;
  v148[1] = 0;
  v147 = v148;
  v26 = *a1;
  v27 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v139 = a1[1];
  if (*a1 == v139) {
    goto LABEL_166;
  }
  while (2) {
    v29 = *(unsigned int*)(v26 + 12348);
    if ((int)v29 < 1) {
      goto LABEL_55;
    }
    if ((*(_DWORD*)(v26 + 40) & 0xFFF) != 0) {
      v30 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*(_DWORD*)(v26 + 40) & 0xFFF));
    }
    else {
      v31 = *(unsigned __int16*)(v26 + 32);
      if (*(_WORD*)(v26 + 32) == 0) {
        v31 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v32 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v31);
      v30 = *(_QWORD*)(v32 + 192);
      v33 = *(unsigned __int8*)(v32 + 72);
      v34 = v30 == 0 || v33 > 7;
      if (v34 || *(_BYTE*)(v30 + 105) == 0) {
        v30 = 0;
      }
      else if (*(_BYTE*)(v30 + 104) == 2) {
        v30 = 0;
      }
    }
    v2 = v26 + 60;
    v35 = 0;
    v146 = v30;
    v141 = v26;
    do {
      v38 = v2 + 12 * v35;
      v37 = MapUtil_753570((unsigned int)*(char*)(v38 + 1),
                           (unsigned int)*(char*)(v38 + 2));
      if ((v37 & 1) == 0) {
        goto LABEL_72;
      }
      v39 = (_BYTE*)(v38 + 5);
      if (*(_BYTE*)(v38 + 5) == 0 || (v37 = game_UnitPool_Get(v38 + 5)) == 0 ||
          *(_QWORD*)(v37 + 392) == 0) {
        if ((*(__int16*)(v38 + 6) & 0x8000000000000000LL) != 0) {
          goto LABEL_72;
        }
        v40 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL);
        if (v40 == 0) {
          goto LABEL_72;
        }
        v37 = (*(__int64 (**)(__int64))(
            *(_QWORD*)(v40 + 144LL * *(__int16*)(v38 + 6)) + 272LL))(
            v40 + 144LL * *(__int16*)(v38 + 6));
        if ((v37 & 1) == 0) {
          goto LABEL_72;
        }
      }
      v41 = *(_QWORD*)(v23 + 440);
      if (v41 != 0) {
        v42 = *(unsigned __int8*)(v41 + 16);
        if (*v39 == 0) {
          goto LABEL_88;
        }
      }
      else {
        v42 = 9;
        if (*v39 == 0) {
          goto LABEL_88;
        }
      }
      v37 = game_UnitPool_Get(v38 + 5);
      if (v37 == 0 || (v43 = *(_QWORD*)(v37 + 440)) == 0) {
      LABEL_88:
        v44 = 9;
        if (v42 == 9) {
          goto LABEL_72;
        }
        goto LABEL_89;
      }
      v44 = *(unsigned __int8*)(v43 + 16);
      if (v42 == v44) {
        goto LABEL_72;
      }
    LABEL_89:
      if (v42 != 0) {
        if (v42 == 3 && v44 == 0) {
          goto LABEL_72;
        }
      }
      else if (v44 == 3) {
        goto LABEL_72;
      }
      v45 = a1[18];
      v145 = *(char*)(v38 + 1);
      v46 = *(char*)(v38 + 2);
      v47 = v145 | (unsigned int)(32 * v46);
      v143 = v145 | (32 * v46);
      v144 = v46;
      if (v45 != 0 && a1[20] != 0) {
        v48 = v45 - 1;
        if ((v45 & (v45 - 1)) != 0) {
          v49 = v145 | (unsigned int)(32 * v46);
          if (v45 <= v47) {
            v49 = (unsigned int)v47 % (unsigned int)v45;
          }
        }
        else {
          v49 = ((_DWORD)v45 - 1) & (unsigned int)v47;
        }
        v50 = *(__int64***)(a1[17] + 8 * v49);
        if (v50 != nullptr) {
          v51 = *v50;
          if (v51 != nullptr) {
            if ((v45 & v48) == 0) {
              while (1) {
                v53 = v51[1];
                if (v53 == v47) {
                  if (*((_DWORD*)v51 + 4) == (_DWORD)v47) {
                    goto LABEL_131;
                  }
                }
                else if ((v53 & v48) != v49) {
                  goto LABEL_115;
                }
                v51 = (__int64*)*v51;
                if (v51 == nullptr) {
                  goto LABEL_115;
                }
              }
            }
            do {
              v52 = v51[1];
              if (v52 == v47) {
                if (*((_DWORD*)v51 + 4) == (_DWORD)v47) {
                  goto LABEL_131;
                }
              }
              else {
                if (v52 >= v45) {
                  v52 %= v45;
                }
                if (v52 != v49) {
                  break;
                }
              }
              v51 = (__int64*)*v51;
            } while (v51 != nullptr);
          }
        }
      }
    LABEL_115:
      v149 = (a1[4] - a1[3]) >> 2;
      v37 = GameRoutine_8ef040((float*)a1 + 34, (unsigned int*)&v143, &v143,
                               &v149);
      v55 = v144;
      v54 = v145;
      v57 = a1[4];
      v56 = a1[5];
      if (v57 >= v56) {
        v59 = (_BYTE*)a1[3];
        v60 = v57 - (_QWORD)v59;
        v61 = (__int64)(v57 - (_QWORD)v59) >> 2;
        v62 = v61 + 1;
        if ((unsigned __int64)(v61 + 1) >> 62 != 0) {
          GameRoutine_74e1f0(v37);
        }
        v63 = v56 - (_QWORD)v59;
        if (v63 >> 1 > v62) {
          v62 = v63 >> 1;
        }
        if ((unsigned __int64)v63 >= 0x7FFFFFFFFFFFFFFCLL) {
          v62 = 0x3FFFFFFFFFFFFFFFLL;
        }
        if (v62 >> 62 != 0) {
          goto LABEL_253;
        }
        v138 = v62;
        v64 = v145;
        v65 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v62, 16, 0);
        v66 = v65 + v60;
        v67 = v65 + v60 - 4 * v61;
        *(_BYTE*)v66 = v64;
        *(_BYTE*)(v66 + 1) = v55;
        *(_WORD*)(v66 + 2) = 0;
        if (v59 != (_BYTE*)v57) {
          v68 = v59;
          v69 = (_BYTE*)(v65 + v60 - 4 * v61);
          do {
            *v69 = *v68;
            v69[1] = v68[1];
            v69[2] = v68[2];
            v70 = v68[3];
            v68 += 4;
            v69[3] = v70;
            v69 += 4;
          } while (v68 != (_BYTE*)v57);
        }
        v58 = v66 + 4;
        v23 = v140;
        v142[3] = v67;
        v142[4] = v66 + 4;
        v142[5] = v65 + 4 * v138;
        v27 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        if (v59 != nullptr) {
          v71 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v71 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v71, v59);
        }
      }
      else {
        *(_BYTE*)(v57 + 1) = v144;
        v23 = v140;
        *(_BYTE*)v57 = v54;
        v58 = v57 + 4;
        *(_WORD*)(v57 + 2) = 0;
      }
      v142[4] = v58;
      a1 = v142;
    LABEL_131:
      v72 = (__int64 (***)())fw_memory_HeapManager_Allocate(*v27, 48, 16, 0);
      *v72 = GameData_1fbd5f0;
      v72[1] = (__int64 (**)())&v147;
      v72[2] = (__int64 (**)())a1;
      v72[3] = (__int64 (**)())&v145;
      v72[4] = (__int64 (**)())&v144;
      v72[5] = (__int64 (**)())&v146;
      v73 = *(_DWORD*)(v38 + 8);
      if (v73 != 0) {
        v74 = 0;
        do {
          if ((v73 & 1) != 0) {
            v75 = *v72;
            v149 = v74;
            ((void (*)(__int64 (***)(), int*))v75[6])(v72, &v149);
          }
          ++v74;
          v20 = v73 > 1;
          v73 >>= 1;
        } while (v20);
        v36 = *v72;
      }
      else {
        v36 = GameData_1fbd5f0;
      }
      v37 = ((__int64 (*)(__int64 (***)()))v36[5])(v72);
      a1 = v142;
    LABEL_72:
      ++v35;
    } while (v35 != v29);
    v26 = v141;
    if ((*(_DWORD*)(v141 + 40) & 0xFFF) != 0) {
      v76 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*(_DWORD*)(v141 + 40) & 0xFFF));
    }
    else {
      v77 = *(unsigned __int16*)(v141 + 32);
      if (*(_WORD*)(v141 + 32) == 0) {
        v77 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v78 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v77);
      v79 = *(_QWORD*)(v78 + 192);
      v80 = *(unsigned __int8*)(v78 + 72);
      v81 = v79 == 0 || v80 > 7;
      if (v81 || *(_BYTE*)(v79 + 105) == 0) {
        v76 = 0;
      }
      else if (*(_BYTE*)(v79 + 104) == 2) {
        v76 = 0;
      }
      else {
        v76 = v79;
      }
    }
    v83 = (_QWORD*)a1[7];
    v82 = a1[8];
    if ((unsigned __int64)v83 < v82) {
      *v83 = v76;
      v28 = (__int64)(v83 + 1);
    }
    else {
      v84 = a1[6];
      v85 = (char*)v83 - v84;
      v86 = ((__int64)v83 - v84) >> 3;
      v87 = v86 + 1;
      if ((unsigned __int64)(v86 + 1) >> 61 != 0) {
        GameRoutine_705570(v37);
      }
      v88 = v82 - v84;
      if (v88 >> 2 > v87) {
        v87 = v88 >> 2;
      }
      if ((unsigned __int64)v88 >= 0x7FFFFFFFFFFFFFF8LL) {
        v89 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v89 = v87;
      }
      if (v89 != 0) {
        if (v89 >> 61 != 0) {
        LABEL_253:
          GameRoutine_60a210(v37);
        }
        v90 = fw_memory_HeapManager_Allocate(*v27, 8 * v89, 16, 0);
      }
      else {
        v90 = 0;
      }
      v91 = v90 + 8 * v89;
      v92 = (char*)v83 - v84;
      v93 = (__int64)&v85[v90 + -8 * v86];
      *(_QWORD*)&v85[v90] = v76;
      v28 = (__int64)&v85[v90 + 8];
      memcpy(v93, v84, v92);
      v142[6] = v93;
      v142[7] = v28;
      v142[8] = v91;
      a1 = v142;
      if (v84 != 0) {
        v94 = 128;
        if (*(_QWORD*)(*v27 + 200LL) == 0) {
          v94 = 56;
        }
        nn_mem_StandardAllocator_Free(*v27 + v94, v84);
      }
    }
    a1[7] = v28;
  LABEL_55:
    v26 += 37096;
    if (v26 != v139) {
      continue;
    }
    break;
  }
LABEL_166:
  if (a1[3] != a1[4]) {
    GameRoutine_a16aa0();
  }
  if (a1[20] != 0) {
    v95 = (_QWORD*)a1[19];
    if (v95 != nullptr) {
      do {
        v96 = (_QWORD*)*v95;
        if (*(_QWORD*)(*v27 + 200LL) != 0) {
          v97 = 128;
        }
        else {
          v97 = 56;
        }
        nn_mem_StandardAllocator_Free(*v27 + v97, v95);
        v95 = v96;
      } while (v96 != nullptr);
    }
    a1 = v142;
    v98 = v142[18];
    v142[19] = 0;
    if (v98 != 0) {
      v99 = v98 & 7;
      if (v98 >= 8) {
        v101 = v98 & 0xFFFFFFFFFFFFFFF8LL;
        v100 = 0;
        do {
          *(_QWORD*)(v142[17] + 8 * v100) = 0;
          *(_QWORD*)(v142[17] + 8 * v100 + 8) = 0;
          *(_QWORD*)(v142[17] + 8 * v100 + 16) = 0;
          *(_QWORD*)(v142[17] + 8 * v100 + 24) = 0;
          *(_QWORD*)(v142[17] + 8 * v100 + 32) = 0;
          *(_QWORD*)(v142[17] + 8 * v100 + 40) = 0;
          *(_QWORD*)(v142[17] + 8 * v100 + 48) = 0;
          v102 = v142[17] + 8 * v100;
          v100 += 8;
          *(_QWORD*)(v102 + 56) = 0;
        } while (v101 != v100);
      }
      else {
        v100 = 0;
      }
      if (v99 != 0) {
        v103 = 8 * v100;
        do {
          --v99;
          *(_QWORD*)(v142[17] + v103) = 0;
          v103 += 8;
        } while (v99 != 0);
      }
    }
    v142[20] = 0;
  }
  v104 = (char*)a1[3];
  v105 = (char*)a1[4];
  if (v104 != v105) {
    v106 = a1 + 19;
    v107 = v27;
    v108 = 0;
    do {
      v109 = a1[18];
      v110 = *v104 | (unsigned int)(32 * v104[1]);
      if (v109 != 0) {
        v111 = v109 - 1;
        if ((v109 & (v109 - 1)) != 0) {
          v2 = *v104 | (unsigned int)(32 * v104[1]);
          if (v109 <= v110) {
            v2 = (unsigned int)v110 % (unsigned int)v109;
          }
        }
        else {
          v2 = ((_DWORD)v109 - 1) & (unsigned int)v110;
        }
        v112 = *(__int64***)(a1[17] + 8 * v2);
        if (v112 != nullptr) {
          v113 = *v112;
          if (v113 != nullptr) {
            if ((v109 & v111) == 0) {
              while (1) {
                v115 = v113[1];
                if (v115 == v110) {
                  if (*((_DWORD*)v113 + 4) == (_DWORD)v110) {
                    goto LABEL_242;
                  }
                }
                else if ((v115 & v111) != v2) {
                  goto LABEL_205;
                }
                v113 = (__int64*)*v113;
                if (v113 == nullptr) {
                  goto LABEL_205;
                }
              }
            }
            do {
              v114 = v113[1];
              if (v114 == v110) {
                if (*((_DWORD*)v113 + 4) == (_DWORD)v110) {
                  goto LABEL_242;
                }
              }
              else {
                if (v114 >= v109) {
                  v114 %= v109;
                }
                if (v114 != v2) {
                  break;
                }
              }
              v113 = (__int64*)*v113;
            } while (v113 != nullptr);
          }
        }
      }
    LABEL_205:
      v116 = fw_memory_HeapManager_Allocate(*v107, 24, 16, 0);
      v117 = a1[20];
      v118 = *((float*)a1 + 42);
      v119 = v116;
      *(_QWORD*)v116 = 0;
      *(_QWORD*)(v116 + 8) = v110;
      *(_DWORD*)(v116 + 16) = v110;
      *(_DWORD*)(v116 + 20) = v108;
      v120 = (float)(unsigned __int64)(v117 + 1);
      if (v109 == 0 || (float)(v118 * (float)v109) < v120) {
        v121 = v120 / v118;
        v122 = (v109 & (v109 - 1)) != 0;
        if (v109 < 3) {
          v122 = true;
        }
        v123 = v122 | (2 * v109);
        v124 = vcvtps_u64_f32(v121);
        if (v123 <= v124) {
          v125 = v124;
        }
        else {
          v125 = v123;
        }
        if (v125 == 1) {
          v125 = 2;
        }
        else if ((v125 & (v125 - 1)) != 0) {
          primeEm = std___1___next_prime(v125);
          v109 = a1[18];
          v125 = primeEm;
        }
        if (v125 > v109) {
          goto LABEL_217;
        }
        if (v125 < v109) {
          v127 = vcvtps_u64_f32((float)(unsigned __int64)a1[20] /
                                *((float*)a1 + 42));
          if (v109 < 3 || (v109 & (v109 - 1)) != 0) {
            v127 = std___1___next_prime(v127);
          }
          else {
            v128 = 1LL << (-(char)__clz(v127 - 1) & 63);
            if (v127 >= 2) {
              v127 = v128;
            }
          }
          if (v125 <= v127) {
            v125 = v127;
          }
          if (v125 < v109) {
          LABEL_217:
            GameRoutine_60eb40(a1 + 17, v125);
          }
        }
        v109 = a1[18];
        if ((v109 & (v109 - 1)) != 0) {
          if (v109 <= v110) {
            v2 = v110 % v109;
          }
          else {
            v2 = v110;
          }
        }
        else {
          v2 = ((_DWORD)v109 - 1) & (unsigned int)v110;
        }
      }
      v129 = a1[17];
      v130 = *(__int64**)(v129 + 8 * v2);
      if (v130 != nullptr) {
        *(_QWORD*)v119 = *v130;
        *v130 = v119;
      }
      else {
        v131 = *v106;
        *v106 = v119;
        *(_QWORD*)v119 = v131;
        *(_QWORD*)(v129 + 8 * v2) = v106;
        if (*(_QWORD*)v119 != 0) {
          v132 = *(_QWORD*)(*(_QWORD*)v119 + 8LL);
          if ((v109 & (v109 - 1)) != 0) {
            if (v132 >= v109) {
              v132 %= v109;
            }
          }
          else {
            v132 &= v109 - 1;
          }
          *(_QWORD*)(a1[17] + 8 * v132) = v119;
        }
      }
      v133 = a1[20];
      v108 = v133 + 1;
      a1[20] = v133 + 1;
    LABEL_242:
      v104 += 4;
    } while (v104 != v105);
  }
  v134 = v147;
  if (v147 != v148) {
    do {
      LODWORD(v146) = *((_DWORD*)v134 + 7);
      GameRoutine_7d6200(a1 + 9, &v146);
      v136 = (_QWORD*)v134[1];
      if (v136 != nullptr) {
        do {
          v137 = v136;
          v136 = (_QWORD*)*v136;
        } while (v136 != nullptr);
      }
      else {
        do {
          v137 = (_QWORD*)v134[2];
          v16 = v134 == (_QWORD*)*v137;
          v134 = v137;
        } while (!v16);
      }
      v134 = v137;
    } while (v137 != v148);
  }
  GameRoutine_1a0a7b0(a1[9], a1[10], &v146);
  TargetMask_a19570(v148[0]);
  return a1[4] != a1[3];
}

__int64 game_map_TargetMask_GetNextIndex_lambda0_Invoke(__int64 a1, int* a2)
{
  char* v2;

  v2 = (char*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 4LL * *a2);
  return GameRoutine_7c05a0(*(_QWORD*)(a1 + 16), (unsigned int)*v2,
                            (unsigned int)v2[1], *(unsigned __int8*)(a1 + 24));
}

unsigned __int64

game_map_TargetMask_Commit_lambda0_Invoke(unsigned __int64 result, int* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64** v3;
  int v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64** v7;
  __int64* v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  unsigned int v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64** v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  _QWORD* v22;
  float v23;
  float v24;
  float v25;
  _BOOL8 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  unsigned __int64 v34;

  v3 = *(__int64***)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  v4 = *a2;
  v5 = result;
  v7 = v3 + 1;
  v6 = (unsigned __int64)v3[1];
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v6 != 0) {
    while (1) {
      while (1) {
        v9 = v6;
        v10 = *(_DWORD*)(v6 + 28);
        if (v4 >= v10) {
          break;
        }
        v6 = *(_QWORD*)v9;
        v7 = (__int64**)v9;
        if (*(_QWORD*)v9 == 0) {
          goto LABEL_8;
        }
      }
      if (v10 >= v4) {
        break;
      }
      v6 = *(_QWORD*)(v9 + 8);
      if (v6 == 0) {
        v7 = (__int64**)(v9 + 8);
        goto LABEL_8;
      }
    }
  }
  else {
    v9 = (unsigned __int64)(v3 + 1);
  LABEL_8:
    v11 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    *(_DWORD*)(v11 + 28) = v4;
    *(_QWORD*)v11 = 0;
    *(_QWORD*)(v11 + 8) = 0;
    *(_QWORD*)(v11 + 16) = v9;
    *v7 = (__int64*)v11;
    v12 = (__int64*)**v3;
    if (v12 != nullptr) {
      *v3 = v12;
      v13 = *v7;
    }
    else {
      v13 = (__int64*)v11;
    }
    result = (unsigned __int64)fw_containers_BalanceAfterInsert(v3[1], v13);
    v3[2] = (__int64*)((char*)v3[2] + 1);
  }
  v14 = **(_QWORD**)(v5 + 40);
  v15 = **(_DWORD**)(v5 + 24) | ((v4 << 10) + 1024) |
        (32 * **(_DWORD**)(v5 + 32));
  if (v14 != 0) {
    v15 |= *(unsigned __int16*)(v14 + 16) << 16;
  }
  v16 = *(_QWORD*)(v2 + 104);
  if (v16 != 0) {
    v17 = v16 - 1;
    if ((v16 & (v16 - 1)) != 0) {
      v9 = v15;
      if (v16 <= v15) {
        v9 = v15 % (unsigned int)v16;
      }
    }
    else {
      v9 = ((_DWORD)v16 - 1) & v15;
    }
    v18 = *(__int64***)(*(_QWORD*)(v2 + 96) + 8 * v9);
    if (v18 != nullptr) {
      v19 = *v18;
      if (v19 != nullptr) {
        if ((v16 & v17) == 0) {
          while (1) {
            v21 = v19[1];
            if (v21 == v15) {
              if (*((_DWORD*)v19 + 4) == v15) {
                return result;
              }
            }
            else if ((v21 & v17) != v9) {
              goto LABEL_35;
            }
            v19 = (__int64*)*v19;
            if (v19 == nullptr) {
              goto LABEL_35;
            }
          }
        }
        do {
          v20 = v19[1];
          if (v20 == v15) {
            if (*((_DWORD*)v19 + 4) == v15) {
              return result;
            }
          }
          else {
            if (v20 >= v16) {
              v20 %= v16;
            }
            if (v20 != v9) {
              break;
            }
          }
          v19 = (__int64*)*v19;
        } while (v19 != nullptr);
      }
    }
  }
LABEL_35:
  result = fw_memory_HeapManager_Allocate_alt1(*v8, 24, 16, 0);
  *(_QWORD*)(result + 8) = v15;
  *(_DWORD*)(result + 16) = v15;
  v22 = (_QWORD*)result;
  v23 = *(float*)(v2 + 128);
  v24 = (float)(unsigned __int64)(*(_QWORD*)(v2 + 120) + 1LL);
  if (v16 == 0 || (float)(v23 * (float)v16) < v24) {
    v25 = v24 / v23;
    v26 = true;
    if (v16 >= 3) {
      v26 = (v16 & (v16 - 1)) != 0;
    }
    v27 = v26 | (2 * v16);
    v28 = vcvtps_u64_f32(v25);
    if (v27 <= v28) {
      v29 = v28;
    }
    else {
      v29 = v27;
    }
    if (v29 == 1) {
      v29 = 2;
    }
    else if ((v29 & (v29 - 1)) != 0) {
      result = std___1___next_prime(v29);
      v16 = *(_QWORD*)(v2 + 104);
      v29 = result;
    }
    if (v29 > v16) {
      goto LABEL_47;
    }
    if (v29 < v16) {
      result = vcvtps_u64_f32((float)*(unsigned __int64*)(v2 + 120) /
                              *(float*)(v2 + 128));
      if (v16 < 3 || (v16 & (v16 - 1)) != 0) {
        result = std___1___next_prime(result);
      }
      else {
        v30 = 1LL << (-(char)__clz(result - 1) & 63);
        if (result >= 2) {
          result = v30;
        }
      }
      if (v29 <= result) {
        v29 = result;
      }
      if (v29 < v16) {
      LABEL_47:
        result = (unsigned __int64)GameRoutine_a19aa0((__int64*)(v2 + 96), v29);
      }
    }
    v16 = *(_QWORD*)(v2 + 104);
    if ((v16 & (v16 - 1)) != 0) {
      if (v16 <= v15) {
        v9 = v15 % v16;
      }
      else {
        v9 = v15;
      }
    }
    else {
      v9 = ((_DWORD)v16 - 1) & v15;
    }
  }
  v31 = *(_QWORD*)(v2 + 96);
  v32 = *(_QWORD**)(v31 + 8 * v9);
  if (v32 != nullptr) {
    *v22 = *v32;
    *v32 = v22;
  }
  else {
    v33 = *(_QWORD*)(v2 + 112);
    *v22 = v33;
    *(_QWORD*)(v2 + 112) = v22;
    *(_QWORD*)(v31 + 8 * v9) = v2 + 112;
    if (v33 != 0) {
      v34 = *(_QWORD*)(v33 + 8);
      if ((v16 & (v16 - 1)) != 0) {
        if (v34 >= v16) {
          v34 %= v16;
        }
      }
      else {
        v34 &= v16 - 1;
      }
      *(_QWORD*)(*(_QWORD*)(v2 + 96) + 8 * v34) = v22;
    }
  }
  ++*(_QWORD*)(v2 + 120);
  return result;
}

#pragma GCC visibility pop
