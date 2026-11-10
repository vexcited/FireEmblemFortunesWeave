#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_773420(__int64, __int64, long double);
__int64 GameRoutine_775580(__int64 (**)(), __int64, _QWORD*, long double);
__int64 GameRoutine_777700(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7807a0(__int64, _WORD*, int, int, __int64);
__int64 GameRoutine_844d10(_QWORD, _QWORD, _QWORD);
__int64 MapUtil_753570(int, int);
__int64 MapUtil_756080(__int64, __int64, unsigned int, unsigned int, _BYTE*);
__int64 Unit_6c9cf0(_QWORD, _QWORD);
__int64 Unit_6cbdc0(_QWORD*, _DWORD*, unsigned __int16*, int);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_UnitPool_Get_alt1(_QWORD,
                               long double) __asm__("game_UnitPool_Get");
__int64 game_Unit_GetJob(_QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
bool GameRoutine_7536a0(_BOOL8 result);
extern _UNKNOWN* GameData_212cf50;
extern __int64 (*GameData_1f97a90[])();
extern __int64 (*GameData_1f97b10[])();
extern __int64 (*GameData_1f97b90[])();
extern __int64 (*GameData_1f97c10[])();
extern __int64 (*GameData_1f97d10[])();
extern __int64 (*GameData_1f97d90[])();
extern __int64 (*GameData_1f97f00[])();
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd158;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* game_g_empty_item_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
void __attribute__((noreturn)) GameRoutine_74e1f0(void);
__int64 ITarget_772f60(__int64 a1, __int64 a2);
__int64 ITarget_7730f0(__int64 a1);
_QWORD* ITarget_773300(__int64 a1, long double a2);
__int64 game_map_ITarget_Enumerate(__int64 a1, long double a2);
__int64 ITarget_776720(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                       _DWORD* a5, __int64 a6);
__int64 game_map_ITarget_EachSelectable(__int64 a1, __int64 a2, __int64 a3,
                                        __int64 a4);
_QWORD* game_map_ITarget_EnumerateSubTarget_lambda0_Clone(_QWORD* a1);
__int64 game_map_ITarget_EnumerateSubTarget_lambda0_CloneInto(_QWORD* a1,
                                                              _QWORD* a2);
_QWORD* game_map_ITarget_EnumerateSubTarget_lambda1_Clone(_QWORD* a1);
__int64 game_map_ITarget_EnumerateSubTarget_lambda1_CloneInto(_QWORD* a1,
                                                              _QWORD* a2);
_QWORD* game_map_ITarget_EnumerateSubTarget_lambda2_Clone(_QWORD* a1);
__int64 game_map_ITarget_EnumerateSubTarget_lambda2_CloneInto(_QWORD* a1,
                                                              _QWORD* a2);
__int64 game_map_ITarget_EnumerateSubTarget_lambda2_Invoke(__int64 a1, int* a2,
                                                           int* a3);
__int64 game_map_ITarget_EachSelectable_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 game_map_ITarget_EachSelectable_lambda1_Invoke(__int64 a1, __int64 a2);
__int64 game_map_ITarget_EachTarget_lambda0_Invoke(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4);
__int64 game_map_ITarget_EachTarget_lambda1_Invoke_7820b0(__int64 a1,
                                                          __int64 a2,
                                                          long double a3);
__int64 game_map_ITarget_EachTarget_lambda1_Invoke_782210(__int64 a1,
                                                          __int64 a2,
                                                          __int64 a3,
                                                          __int64 a4);

__int64 ITarget_772f60(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int16 v11;
  int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  int v18;

  *(_BYTE*)(a1 + 8) = 0;
  v2 = a1 + 8;
  *(_DWORD*)(a1 + 28) = -1;
  *(_QWORD*)(a1 + 32) = 0;
  v4 = a1 + 32;
  *(_BYTE*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 12) = 0;
  *(_QWORD*)(a1 + 17) = 0;
  *(_QWORD*)(a1 + 40) = 0xFFFFFFFF00000000LL;
  if (a2 == 0) {
    return a1;
  }
  if (*(_BYTE*)(a2 + 8) == 0 || (v6 = game_UnitPool_Get(a2 + 8)) == 0) {
    *(_BYTE*)(a1 + 8) = 0;
    *(_BYTE*)(a1 + 24) = *(_BYTE*)(a2 + 20);
    v12 = *(_DWORD*)(a2 + 40);
    *(_DWORD*)(a1 + 28) = v12;
    if ((v12 & 0x80000000) == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  v7 = *(unsigned __int8*)(v6 + 2088);
  *(_BYTE*)(a1 + 8) = v7;
  *(_DWORD*)(a1 + 20) = *(_DWORD*)(v6 + 592);
  v8 = *(char*)(v6 + 585);
  *(_DWORD*)(a1 + 12) = *(char*)(v6 + 584);
  *(_DWORD*)(a1 + 16) = v8;
  *(_BYTE*)(a1 + 24) = *(_BYTE*)(a2 + 20);
  v9 = *(unsigned int*)(a2 + 40);
  *(_DWORD*)(a1 + 28) = v9;
  if ((v9 & 0x80000000) != 0) {
  LABEL_9:
    *(_QWORD*)v4 = 0;
    goto LABEL_10;
  }
  if (v7 != 0 && game_UnitPool_Get(v2) != 0) {
    v10 = game_UnitPool_Get(v2) + 8 * v9;
    v11 = *(_WORD*)(v10 + 828);
    *(_BYTE*)(v4 + 2) = *(_BYTE*)(v10 + 830);
    *(_WORD*)v4 = v11;
    *(_BYTE*)(a1 + 35) = *(_BYTE*)(v10 + 831);
    *(_DWORD*)(a1 + 36) = *(_DWORD*)(v10 + 832);
  }
LABEL_10:
  if ((*(_DWORD*)(a2 + 56) & 0xFFF) != 0) {
    v13 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                     8LL * (*(_DWORD*)(a2 + 56) & 0xFFF));
    v14 = *(_DWORD*)(a1 + 40);
    if (v13 != 0) {
      v15 = v14 & 0xFFFFF000 | *(_WORD*)(v13 + 16) & 0xFFF;
      goto LABEL_15;
    }
  }
  else {
    v14 = *(_DWORD*)(a1 + 40);
  }
  v15 = v14 & 0xFFFFF000;
LABEL_15:
  *(_DWORD*)(a1 + 40) = v15;
  v16 = *(_DWORD*)(a2 + 60);
  if ((v16 & 0x80000000) != 0 ||
      (v17 = *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL)) == 0) {
    v18 = -1;
  }
  else {
    v18 = (*(__int64 (**)(__int64))(*(_QWORD*)(v17 + 144LL * v16) + 32LL))(
        v17 + 144LL * v16);
  }
  *(_DWORD*)(a1 + 44) = v18;
  return a1;
}

__int64 ITarget_7730f0(__int64 a1)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  bool v6;

  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    return *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                      8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
  }
  v2 = *(unsigned __int16*)(a1 + 32);
  if (*(_WORD*)(a1 + 32) == 0) {
    v2 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v3 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v2);
  v4 = *(_QWORD*)(v3 + 192);
  v5 = *(unsigned __int8*)(v3 + 72);
  v6 = v4 == 0 || v5 > 7;
  if (v6 || *(_BYTE*)(v4 + 105) == 0) {
    return 0;
  }
  if (*(_BYTE*)(v4 + 104) == 2) {
    return 0;
  }
  return v4;
}

_QWORD* ITarget_773300(__int64 a1, long double a2)
{
  __int64 v3;
  int v4;
  _QWORD* result;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  bool v12;
  int v13;

  v4 = *(unsigned __int8*)(a1 + 8);
  v3 = a1 + 8;
  if (v4 == 0) {
    return nullptr;
  }
  result = (_QWORD*)game_UnitPool_Get_alt1(v3, a2);
  if (result == nullptr) {
    return result;
  }
  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                    8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
    if (v6 != 0) {
    LABEL_5:
      v13 = *(_WORD*)(v6 + 16) & 0xFFF;
      return (_QWORD*)Unit_6cbdc0(result, &v13,
                                  (unsigned __int16*)game_g_empty_item_ptr, 0);
    }
    v7 = *(unsigned __int16*)(a1 + 32);
    v8 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  else {
    v7 = *(unsigned __int16*)(a1 + 32);
    v8 = *(unsigned __int16*)game_g_empty_item_ptr;
    if (*(_WORD*)(a1 + 32) != 0) {
      v9 = *(unsigned __int16*)(a1 + 32);
    }
    else {
      v9 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v10 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v9);
    v6 = *(_QWORD*)(v10 + 192);
    v11 = *(unsigned __int8*)(v10 + 72);
    v12 = v6 == 0 || v11 > 7;
    if (!v12 && *(_BYTE*)(v6 + 105) != 0 && *(_BYTE*)(v6 + 104) != 2) {
      goto LABEL_5;
    }
  }
  if (v7 == 0) {
    v7 = v8;
  }
  if (v7 != 0) {
    return (_QWORD*)*(
        unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * v7) +
                          90LL);
  }
  else {
    return nullptr;
  }
}

__int64 game_map_ITarget_Enumerate(__int64 a1, long double a2)
{
  char v2;
  __int64 v3;
  _QWORD v5[4];
  _QWORD* v6;

  v5[0] = GameData_1f97a90;
  v6 = v5;
  v2 = GameRoutine_773420(a1, (__int64)v5, a2);
  if (v6 == v5) {
    v3 = 32;
    goto LABEL_5;
  }
  if (v6 != nullptr) {
    v3 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v6 + v3))((__int64)v6);
  }
  return v2 & 1;
}

__int64 ITarget_776720(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                       _DWORD* a5, __int64 a6)
{
  int v6;
  _BYTE* v7;
  int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  int v18;
  __int64* v19;
  __int64* v20;
  int v21;
  unsigned __int64 v22;
  char v23;
  char v24;
  char v25;
  char v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  _BYTE* v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  _BYTE* v37;
  _BYTE* v38;
  char v39;
  __int64 v40;
  char* v41;
  int v42;
  int v43;
  _BYTE* v44;
  unsigned int v45;
  __int64 v46;
  unsigned int v47;
  bool v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  unsigned int v60;
  __int64 v61;
  __int64 v62;
  char v63;
  _BYTE* v64;
  unsigned int v65;
  __int64 v66;
  unsigned int v67;
  bool v68;
  char* v69;
  __int64 v70;
  unsigned int v71;
  __int64 v72;
  __int64 v75;
  __int64 v76;
  int v77;
  int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  int v85;
  int v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  int v90;
  __int64 v91;
  unsigned int v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  int v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  int v100;
  int v101;
  _BYTE* v102;
  char v103;
  char v104;
  char v105;
  char v106;
  char v107;
  char v108;
  unsigned __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  _BYTE* v114;
  _BYTE* v115;
  char v116;
  __int64 v117;
  char* v118;
  __int64 v119;
  unsigned int v120;
  __int64 v121;
  __int64 v124;
  __int64 v125;
  int v126;
  int v127;
  int v128;
  int v129;
  unsigned __int64 v130;
  char v131;
  char v132;
  char v133;
  char v134;
  char v135;
  char v136;
  unsigned __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  _BYTE* v143;
  _BYTE* v144;
  char v145;
  __int64 v146;
  char* v147;
  int v148;
  __int64 v149;
  __int64 v150;
  int v151;
  int v152;
  _BYTE* v153;
  _BYTE* v154;
  char v156;
  char v157;
  char v158;
  char v159;
  int v161;
  int v162;
  int v163;
  int v164;
  char v165;
  char v166;
  char v167[4];
  int v168;
  int v169;

  v158 = a3;
  v159 = a2;
  if ((*a5 & 0xFFF) == 0 ||
      *(unsigned __int8*)(*GameData_212ce98[0] + 26) <=
          (unsigned int)(unsigned __int8)(a2 - *(_BYTE*)(*GameData_212ce98[0] +
                                                         24)) ||
      *(unsigned __int8*)(*GameData_212ce98[0] + 27) <=
          (unsigned int)(unsigned __int8)(a3 - *(_BYTE*)(*GameData_212ce98[0] +
                                                         25))) {
    return result;
  }
  v6 = *(_DWORD*)(result + 20);
  v7 = (_BYTE*)result;
  v8 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                      8LL * (*a5 & 0xFFF)) +
                           279LL);
  v164 = v6;
  if (v6 != 0) {
    if (v6 < 0) {
    LABEL_262:
      GameRoutine_74e1f0();
    }
    v9 = 4LL * v6;
    v10 = a4;
    v11 = v6;
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v9, 16, 0);
    v13 = v12 + 4 * v11;
    result = memset(v12, 0, v9, v14, v15, v16);
    a4 = v10;
  }
  else {
    v13 = 0;
    v12 = 0;
  }
  v17 = (char*)GameData_212cf50 + (unsigned __int8)a4;
  v156 = v17[1284];
  v157 = v17[1280];
  v165 = (a4 - 1) & 0xFD;
  v166 = a4 & 0xFD;
  v18 = v164;
  if (v8 == 0) {
    v163 = 0;
    goto LABEL_156;
  }
  v163 = 0;
  v19 = GameData_212c930;
  v20 = GameData_212cfb8[0];
  v153 = v7;
  v151 = v8;
  while (2) {
    if (v18 == 0) {
      v63 = 1;
      v22 = v12;
      goto LABEL_85;
    }
    v21 = 0;
    v22 = v12;
    do {
      if (v166 != 0) {
        v23 = 0;
      }
      else {
        v23 = v21;
      }
      v24 = v159 + v163 * v157 + v23;
      if (v165 != 0) {
        v25 = 0;
      }
      else {
        v25 = v21;
      }
      v26 = v158 + v163 * v156 + v25;
      if (v22 < v13) {
        *(_BYTE*)v22 = v24;
        *(_BYTE*)(v22 + 1) = v26;
        *(_WORD*)(v22 + 2) = 0;
        v22 += 4LL;
      }
      else {
        v27 = v22 - v12;
        v28 = v13;
        v29 = (_BYTE*)v22;
        v30 = (__int64)(v22 - v12) >> 2;
        v31 = v30 + 1;
        if ((unsigned __int64)(v30 + 1) >> 62 != 0) {
          goto LABEL_262;
        }
        v32 = v28 - v12;
        v33 = (__int64)(v28 - v12) >> 1;
        if (v33 > v31) {
          v31 = v33;
        }
        if (v32 >= 0x7FFFFFFFFFFFFFFCLL) {
          v34 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v34 = v31;
        }
        if (v34 >> 62 != 0) {
        LABEL_263:
          GameRoutine_60a210(result);
        }
        result = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v34, 16, 0);
        v35 = result + v27;
        *(_BYTE*)(v35 + 1) = v26;
        v36 = result + v27 - 4 * v30;
        *(_BYTE*)v35 = v24;
        *(_WORD*)(v35 + 2) = 0;
        if ((_BYTE*)v12 != v29) {
          v37 = (_BYTE*)v12;
          v38 = (_BYTE*)(result + v27 - 4 * v30);
          do {
            *v38 = *v37;
            v38[1] = v37[1];
            v38[2] = v37[2];
            v39 = v37[3];
            v37 += 4;
            v38[3] = v39;
            v38 += 4;
          } while (v37 != v29);
        }
        v13 = result + 4 * v34;
        v22 = v35 + 4;
        if (v12 != 0) {
          v40 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v40 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v12);
        }
        v18 = v164;
        v12 = v36;
      }
      ++v21;
    } while (v21 != v18);
    if (v12 == v22) {
      v7 = v153;
      v63 = 1;
      v19 = GameData_212c930;
      v20 = GameData_212cfb8[0];
      goto LABEL_85;
    }
    v7 = v153;
    v41 = (char*)v12;
    v19 = GameData_212c930;
    v20 = GameData_212cfb8[0];
    do {
      LOBYTE(v42) = *v41;
      if (*(unsigned __int8*)(*GameData_212ce98[0] + 26) <=
          (unsigned int)(unsigned __int8)(*v41 -
                                          *(_BYTE*)(*GameData_212ce98[0] +
                                                    24))) {
        goto LABEL_156;
      }
      LOBYTE(v43) = v41[1];
      if (*(unsigned __int8*)(*GameData_212ce98[0] + 27) <=
          (unsigned int)(unsigned __int8)(v43 - *(_BYTE*)(*GameData_212ce98[0] +
                                                          25))) {
        goto LABEL_156;
      }
      if ((*((_DWORD*)v153 + 10) & 0xFFF) != 0) {
        v44 = *(_BYTE**)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                         8LL * (*((_DWORD*)v153 + 10) & 0xFFF));
        if (v44 == nullptr) {
          goto LABEL_38;
        }
      }
      else {
        v45 = *((unsigned __int16*)v153 + 16);
        if (*((_WORD*)v153 + 16) == 0) {
          v45 = *(unsigned __int16*)game_g_empty_item_ptr;
        }
        v46 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v45);
        v44 = *(_BYTE**)(v46 + 192);
        v47 = *(unsigned __int8*)(v46 + 72);
        v48 = v44 == nullptr || v47 > 7;
        if (v48 || v44[105] == 0 || v44[104] == 2) {
          goto LABEL_38;
        }
      }
      if (v44[250] == 16) {
        if (v153[8] != 0) {
          result = game_UnitPool_Get(v153 + 8);
          LOBYTE(v42) = *v41;
          LOBYTE(v43) = v41[1];
        }
        else {
          result = 0;
        }
        v42 = (char)v42;
        v43 = (char)v43;
        if (*GameData_212ce90[0] != 0 &&
            (*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) != 0) {
          v49 = *(_QWORD*)(result + 440);
          v50 = v49 != 0 ? *(unsigned __int8*)(v49 + 16) : 9LL;
          v51 = *GameData_212ce98[0];
          if (*(unsigned __int8*)(*GameData_212ce98[0] + 18) <=
                  (unsigned int)(unsigned __int8)(v42 -
                                                  *(_BYTE*)(*GameData_212ce98
                                                                [0] +
                                                            16)) ||
              *(unsigned __int8*)(v51 + 19) <=
                  (unsigned int)(unsigned __int8)(v43 - *(_BYTE*)(v51 + 17)) ||
              ((*(_DWORD*)(*(_QWORD*)(v51 + 160) + (v50 << 7) +
                           4LL * (((char)v42 + 32 * (char)v43) >> 5) + 8) >>
                v42) &
               1) == 0) {
            goto LABEL_156;
          }
        }
        if (v153[8] != 0) {
          result = game_UnitPool_Get(v153 + 8);
          v42 = *v41;
          v43 = v41[1];
          v52 = result;
        }
        else {
          v52 = 0;
        }
        v53 = v42 + 32 * v43;
        v54 = v53 >= 0x400 ? 0LL : v53;
        v55 = *(_QWORD*)(*v20 + 16);
        v56 = *(__int16*)(v55 + 2LL * (unsigned int)v54 + 2152);
        if (v56 < 0 || (v57 = *(_QWORD*)(v55 + 8)) == 0 ||
            ((result =
                  (*(__int64 (**)(__int64))(*(_QWORD*)(v57 + 144LL * (int)v56) +
                                            272LL))(v57 + 144LL * (int)v56)) &
             1) == 0 ||
            v52 == 0 ||
            (v58 = *(
                 _QWORD*)(*(_QWORD*)(*v19 + 64) +
                          8LL *
                              *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98
                                                                  [0] +
                                                              32) +
                                                   2 * v54 + 8))) == 0 ||
            (result = game_Unit_GetJob(v52)) == 0 ||
            *(_BYTE*)(result + 48) == 0 ||
            *(unsigned __int8*)(*(_QWORD*)(v58 + 48) +
                                *(unsigned __int8*)(result + 48) + 32LL) ==
                255) {
          if (v153[8] == 0) {
            goto LABEL_156;
          }
          result = game_UnitPool_Get(v153 + 8);
          v59 = *v41;
          v60 = v41[1];
          v167[0] = 1;
          if (result == 0) {
            goto LABEL_156;
          }
          v61 = result;
          v62 = game_Unit_GetJob(result);
          result = MapUtil_756080(v61, v62, v59, v60, v167);
          if ((result & 1) == 0) {
            goto LABEL_156;
          }
        }
      }
    LABEL_38:
      v41 += 4;
    } while (v41 != (char*)v22);
    v63 = 0;
  LABEL_85:
    ++v163;
    if ((*((_DWORD*)v7 + 10) & 0xFFF) == 0) {
      v65 = *((unsigned __int16*)v7 + 16);
      if (*((_WORD*)v7 + 16) == 0) {
        v65 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v66 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v65);
      v64 = *(_BYTE**)(v66 + 192);
      v67 = *(unsigned __int8*)(v66 + 72);
      v68 = v64 == nullptr || v67 > 7;
      if (v68 || v64[105] == 0 || v64[104] == 2) {
        goto LABEL_97;
      }
    LABEL_87:
      if (v64[250] != 16) {
        goto LABEL_97;
      }
    LABEL_98:
      v18 = v164;
      if (v163 == v151) {
        v163 = v151;
        goto LABEL_156;
      }
      continue;
    }
    break;
  }
  v64 = *(_BYTE**)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                   8LL * (*((_DWORD*)v7 + 10) & 0xFFF));
  if (v64 != nullptr) {
    goto LABEL_87;
  }
LABEL_97:
  v69 = (char*)v12;
  if ((v63 & 1) != 0) {
    goto LABEL_98;
  }
  while (1) {
    LODWORD(v70) = *v69 + 32 * v69[1];
    if ((unsigned int)v70 >= 0x400) {
      v70 = 0;
    }
    else {
      v70 = (unsigned int)v70;
    }
    v71 = *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v70 + 8);
    if (v71 != 0) {
      v72 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v71;
      if (v71 <= 0xFA && v72 != 2224 && *(_QWORD*)(v72 - 1832) != 0 &&
          v7[8] != 0) {
        result = game_UnitPool_Get(v7 + 8);
        if (result != 0) {
          v75 = result;
          result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v7 + 16LL))(v7);
          if ((result & 1) == 0 ||
              ((result = Unit_6c9cf0(v75, v72 - 2224)) & 1) != 0) {
            if (v7[8] == 0) {
              break;
            }
            result = game_UnitPool_Get(v7 + 8);
            if (result == 0) {
              break;
            }
            v76 = *(_QWORD*)(result + 440);
            if (v76 != 0) {
              v77 = *(unsigned __int8*)(v76 + 16);
            }
            else {
              v77 = 9;
            }
            v78 = *(unsigned __int8*)(*(_QWORD*)(v72 - 1784) + 16LL);
            if (v78 != v77) {
              if (*(_BYTE*)(*(_QWORD*)(v72 - 1784) + 16LL) != 0) {
                if (v77 != 0 || v78 != 3) {
                  break;
                }
              }
              else if (v77 != 3) {
                break;
              }
            }
          }
        }
      }
    }
    LODWORD(v79) = *v69 + 32 * v69[1];
    v79 = (unsigned int)v79 >= 0x400 ? 0LL : (unsigned int)v79;
    v80 =
        *(_QWORD*)(*(_QWORD*)(*v19 + 64) +
                   8LL * *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98[0] +
                                                         72) +
                                              2LL * (unsigned int)v79 + 8));
    if ((*(unsigned __int8*)(v80 + 62) | *(unsigned __int8*)(v80 + 63)) != 0 ||
        *(unsigned __int8*)(*(_QWORD*)(v80 + 48) + 40LL) == 255) {
      break;
    }
    v81 = *(_QWORD*)(*v20 + 16);
    v82 = *(__int16*)(v81 + 2 * v79 + 104);
    if (v82 < 0 || (v83 = *(_QWORD*)(v81 + 8)) == 0 ||
        (v84 = v83 + 144LL * (unsigned int)v82,
         (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v84 + 40LL))(v84) != 2) ||
        ((*(__int64 (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84) & 1) == 0 ||
        (result = (*(__int64 (**)(__int64))(*(_QWORD*)v84 + 224LL))(v84)) ==
            0) {
      result = **(_QWORD**)(*v19 + 64);
    }
    if ((*(unsigned __int8*)(result + 62) | *(unsigned __int8*)(result + 63)) !=
            0 ||
        *(unsigned __int8*)(*(_QWORD*)(result + 48) + 40LL) == 255) {
      break;
    }
    v85 = *v69;
    v86 = v69[1];
    v87 = *v20;
    if (v7[8] != 0 && (v88 = game_UnitPool_Get(v7 + 8)) != 0 &&
        (v89 = *(_QWORD*)(v88 + 440)) != 0) {
      v90 = *(unsigned __int8*)(v89 + 16);
    }
    else {
      v90 = 9;
    }
    v91 = *(_QWORD*)(v87 + 16);
    v92 = v85 + 32 * v86;
    if (v92 >= 0x400) {
      v92 = 0;
    }
    v93 = *(__int16*)(v91 + 2LL * v92 + 12392);
    v19 = GameData_212c930;
    if (v93 < 0 || (v94 = *(_QWORD*)(v91 + 8)) == 0 ||
        (v95 = v94 + 144LL * (unsigned int)v93,
         ((*(__int64 (**)(__int64))(*(_QWORD*)v95 + 16LL))(v95) & 1) == 0) ||
        v90 == (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v95 + 168LL))(v95) ||
        (result = (*(__int64 (**)(__int64))(*(_QWORD*)v95 + 224LL))(v95)) ==
            0) {
      result = **(_QWORD**)(*v19 + 64);
    }
    v20 = GameData_212cfb8[0];
    if (*(_BYTE*)(result + 57) == 14) {
      break;
    }
    v69 += 4;
    if (v69 == (char*)v22) {
      goto LABEL_98;
    }
  }
LABEL_156:
  v96 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a5 & 0xFFF));
  if (v96 != 0) {
    v97 = v164;
    if (*(_BYTE*)(v96 + 250) == 16) {
      if (v163 < 1 || v164 < 1) {
        goto LABEL_256;
      }
      v154 = v7;
    LABEL_161:
      v98 = v13;
      v99 = v12;
      v100 = v163 - v97;
      v152 = v163--;
      do {
        v161 = v100;
        if ((v100 & 0x80000000) == 0) {
          v101 = 0;
          v102 = (_BYTE*)v12;
          v103 = v159 + v100 * v157;
          v104 = v158 + v100 * v156;
          do {
            if (v166 != 0) {
              v105 = 0;
            }
            else {
              v105 = v101;
            }
            v106 = v103 + v105;
            if (v165 != 0) {
              v107 = 0;
            }
            else {
              v107 = v101;
            }
            v108 = v104 + v107;
            if (v99 < v98) {
              *(_BYTE*)v99 = v106;
              *(_BYTE*)(v99 + 1) = v108;
              v12 = (__int64)v102;
              *(_WORD*)(v99 + 2) = 0;
              v99 += 4LL;
            }
            else {
              v109 = v99 - (_QWORD)v102;
              v110 = (__int64)(v99 - (_QWORD)v102) >> 2;
              v111 = v110 + 1;
              if ((unsigned __int64)(v110 + 1) >> 62 != 0) {
                goto LABEL_262;
              }
              if ((__int64)(v98 - (_QWORD)v102) >> 1 > v111) {
                v111 = (__int64)(v98 - (_QWORD)v102) >> 1;
              }
              if (v98 - (unsigned __int64)v102 >= 0x7FFFFFFFFFFFFFFCLL) {
                v112 = 0x3FFFFFFFFFFFFFFFLL;
              }
              else {
                v112 = v111;
              }
              if (v112 >> 62 != 0) {
                goto LABEL_263;
              }
              result = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v112, 16, 0);
              v113 = result + v109;
              *(_BYTE*)(v113 + 1) = v108;
              v12 = result + v109 - 4 * v110;
              *(_BYTE*)v113 = v106;
              *(_WORD*)(v113 + 2) = 0;
              if (v102 != (_BYTE*)v99) {
                v114 = v102;
                v115 = (_BYTE*)(result + v109 - 4 * v110);
                do {
                  *v115 = *v114;
                  v115[1] = v114[1];
                  v115[2] = v114[2];
                  v116 = v114[3];
                  v114 += 4;
                  v115[3] = v116;
                  v115 += 4;
                } while (v114 != (_BYTE*)v99);
              }
              v98 = result + 4 * v112;
              v99 = v113 + 4;
              if (v102 != nullptr) {
                v117 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v117 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v117, v102);
              }
              v97 = v164;
            }
            ++v101;
            v102 = (_BYTE*)v12;
          } while (v101 != v97);
        }
        v100 = v161 + 1;
      } while (v161 != v163);
      if (v12 != v99) {
        v118 = (char*)v12;
        v13 = v98;
        while (1) {
          LODWORD(v119) = *v118 + 32 * v118[1];
          if ((unsigned int)v119 >= 0x400) {
            v119 = 0;
          }
          else {
            v119 = (unsigned int)v119;
          }
          v120 = *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) +
                                     v119 + 8);
          if (v120 != 0) {
            v121 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v120;
            if (v120 <= 0xFA && v121 != 2224 && *(_QWORD*)(v121 - 1832) != 0 &&
                v154[8] != 0) {
              result = game_UnitPool_Get(v154 + 8);
              if (result != 0) {
                v124 = result;
                result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v154 + 16LL))(v154);
                if ((result & 1) == 0 ||
                    ((result = Unit_6c9cf0(v124, v121 - 2224)) & 1) != 0) {
                  if (*(int*)(v121 - 1632) > 1) {
                    goto LABEL_219;
                  }
                  if (v154[8] != 0) {
                    result = game_UnitPool_Get(v154 + 8);
                    if (result != 0) {
                      v125 = *(_QWORD*)(result + 440);
                      if (v125 != 0) {
                        v126 = *(unsigned __int8*)(v125 + 16);
                      }
                      else {
                        v126 = 9;
                      }
                      v127 =
                          *(unsigned __int8*)(*(_QWORD*)(v121 - 1784) + 16LL);
                      if (v127 == v126) {
                      LABEL_219:
                        v97 = v164;
                        if (v152 <= 1) {
                          goto LABEL_256;
                        }
                        goto LABEL_161;
                      }
                      if (*(_BYTE*)(*(_QWORD*)(v121 - 1784) + 16LL) != 0) {
                        if (v126 == 0 && v127 == 3) {
                          goto LABEL_219;
                        }
                      }
                      else if (v126 == 3) {
                        goto LABEL_219;
                      }
                    }
                  }
                  result = GameRoutine_7536a0(v121 - 2224);
                  if ((result & 1) == 0) {
                    goto LABEL_219;
                  }
                }
              }
            }
          }
          v118 += 4;
          if (v118 == (char*)v99) {
            v163 = v152;
            goto LABEL_222;
          }
        }
      }
      v13 = v98;
      v163 = v152;
    }
  }
  else {
  LABEL_222:
    v97 = v164;
  }
  if (v163 >= 1 && v97 >= 1) {
    v128 = 0;
    do {
      v129 = 0;
      v130 = v12;
      v131 = v159 + v128 * v157;
      v162 = v128;
      v132 = v158 + v128 * v156;
      do {
        if (v166 != 0) {
          v133 = 0;
        }
        else {
          v133 = v129;
        }
        v134 = v131 + v133;
        if (v165 != 0) {
          v135 = 0;
        }
        else {
          v135 = v129;
        }
        v136 = v132 + v135;
        if (v130 < v13) {
          *(_BYTE*)v130 = v134;
          *(_BYTE*)(v130 + 1) = v136;
          *(_WORD*)(v130 + 2) = 0;
          v130 += 4LL;
        }
        else {
          v137 = v130 - v12;
          v138 = (__int64)(v130 - v12) >> 2;
          v139 = v138 + 1;
          if ((unsigned __int64)(v138 + 1) >> 62 != 0) {
            goto LABEL_262;
          }
          if ((__int64)(v13 - v12) >> 1 > v139) {
            v139 = (__int64)(v13 - v12) >> 1;
          }
          if (v13 - v12 >= 0x7FFFFFFFFFFFFFFCLL) {
            v140 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v140 = v139;
          }
          if (v140 >> 62 != 0) {
            goto LABEL_263;
          }
          result = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v140, 16, 0);
          v141 = result + v137;
          *(_BYTE*)v141 = v134;
          v142 = result + v137 - 4 * v138;
          *(_BYTE*)(v141 + 1) = v136;
          *(_WORD*)(v141 + 2) = 0;
          if (v12 != v130) {
            v143 = (_BYTE*)v12;
            v144 = (_BYTE*)(result + v137 - 4 * v138);
            do {
              *v144 = *v143;
              v144[1] = v143[1];
              v144[2] = v143[2];
              v145 = v143[3];
              v143 += 4;
              v144[3] = v145;
              v144 += 4;
            } while (v143 != (_BYTE*)v130);
          }
          v13 = result + 4 * v140;
          v130 = v141 + 4;
          if (v12 != 0) {
            v146 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v146 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v146, v12);
          }
          v97 = v164;
          v12 = v142;
        }
        ++v129;
      } while (v129 != v97);
      v147 = (char*)v12;
      if (v12 != v130) {
        do {
          v148 = *v147;
          v149 = *(_QWORD*)(a6 + 32);
          v168 = v147[1];
          v169 = v148;
          if (v149 == 0) {
            GameRoutine_60a310(0, a2, a3, a4);
          }
          result = (*(__int64 (**)(__int64, int*, int*))(
              *(_QWORD*)v149 + 48LL))(v149, &v169, &v168);
          v147 += 4;
        } while (v147 != (char*)v130);
      }
      v97 = v164;
      v128 = v162 + 1;
    } while (v162 + 1 != v163);
  }
LABEL_256:
  if (v12 != 0) {
    v150 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v150 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v150, v12);
  }
  return result;
}

__int64 game_map_ITarget_EachSelectable(__int64 a1, __int64 a2, __int64 a3,
                                        __int64 a4)
{
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  _QWORD v14[4];
  _QWORD* v15;
  __int64 v16;

  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    v16 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                     8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
    if (v16 != 0) {
    LABEL_3:
      v14[2] = a2;
      v14[3] = a1;
      v14[0] = GameData_1f97d10;
      v14[1] = &v16;
      goto LABEL_13;
    }
  }
  else {
    v4 = *(unsigned __int16*)(a1 + 32);
    if (*(_WORD*)(a1 + 32) == 0) {
      v4 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v5 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v4);
    v6 = *(_QWORD*)(v5 + 192);
    v7 = *(unsigned __int8*)(v5 + 72);
    v8 = v6 == 0 || v7 > 7;
    if (!v8 && *(_BYTE*)(v6 + 105) != 0 && *(_BYTE*)(v6 + 104) != 2) {
      v16 = v6;
      goto LABEL_3;
    }
  }
  v14[0] = GameData_1f97d90;
  v14[1] = a2;
LABEL_13:
  v15 = v14;
  GameRoutine_777700(a1, v14, a3, a4);
  result = (__int64)v15;
  if (v15 == v14) {
    v13 = 32;
  }
  else {
    if (v15 == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (*(__int64 (**)(_QWORD*, __int64, __int64, __int64))(*v15 + v13))(
      v15, v9, v10, v11);
}

_QWORD* game_map_ITarget_EnumerateSubTarget_lambda0_Clone(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  *result = GameData_1f97b10;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = (_QWORD*)a1[8];
  if (v4 != nullptr) {
    v5 = result;
    if (v4 == a1 + 4) {
      result[8] = result + 4;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
      result = v5;
    }
    else {
      v6 = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(*v4 + 16LL))(v4,
                                                                         a1[8]);
      result = v5;
      v5[8] = v6;
    }
  }
  else {
    result[8] = 0;
  }
  v7 = a1[11];
  result[10] = a1[10];
  result[11] = v7;
  result[12] = a1[12];
  return result;
}

__int64 game_map_ITarget_EnumerateSubTarget_lambda0_CloneInto(_QWORD* a1,
                                                              _QWORD* a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;

  *a2 = GameData_1f97b10;
  v4 = a1[3];
  a2[2] = a1[2];
  a2[3] = v4;
  result = a1[8];
  if (result != 0) {
    if ((_QWORD*)result == a1 + 4) {
      a2[8] = a2 + 4;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[8] + 24LL))(a1[8]);
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      a2[8] = result;
    }
  }
  else {
    a2[8] = 0;
  }
  a2[11] = a1[11];
  v6 = a1[10];
  a2[12] = a1[12];
  a2[10] = v6;
  return result;
}

_QWORD* game_map_ITarget_EnumerateSubTarget_lambda1_Clone(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *result = GameData_1f97b90;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = (_QWORD*)a1[8];
  if (v4 != nullptr) {
    v5 = result;
    if (v4 == a1 + 4) {
      result[8] = result + 4;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
      result = v5;
    }
    else {
      v6 = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(*v4 + 16LL))(v4,
                                                                         a1[8]);
      result = v5;
      v5[8] = v6;
    }
  }
  else {
    result[8] = 0;
  }
  result[10] = a1[10];
  return result;
}

__int64 game_map_ITarget_EnumerateSubTarget_lambda1_CloneInto(_QWORD* a1,
                                                              _QWORD* a2)
{
  __int64 v4;
  __int64 result;

  *a2 = GameData_1f97b90;
  v4 = a1[3];
  a2[2] = a1[2];
  a2[3] = v4;
  result = a1[8];
  if (result != 0) {
    if ((_QWORD*)result == a1 + 4) {
      a2[8] = a2 + 4;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[8] + 24LL))(a1[8]);
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      a2[8] = result;
    }
  }
  else {
    a2[8] = 0;
  }
  a2[10] = a1[10];
  return result;
}

_QWORD* game_map_ITarget_EnumerateSubTarget_lambda2_Clone(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *result = GameData_1f97c10;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = (_QWORD*)a1[8];
  if (v4 != nullptr) {
    v5 = result;
    if (v4 == a1 + 4) {
      result[8] = result + 4;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
      result = v5;
    }
    else {
      v6 = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(*v4 + 16LL))(v4,
                                                                         a1[8]);
      result = v5;
      v5[8] = v6;
    }
  }
  else {
    result[8] = 0;
  }
  result[10] = a1[10];
  return result;
}

__int64 game_map_ITarget_EnumerateSubTarget_lambda2_CloneInto(_QWORD* a1,
                                                              _QWORD* a2)
{
  __int64 v4;
  __int64 result;

  *a2 = GameData_1f97c10;
  v4 = a1[3];
  a2[2] = a1[2];
  a2[3] = v4;
  result = a1[8];
  if (result != 0) {
    if ((_QWORD*)result == a1 + 4) {
      a2[8] = a2 + 4;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[8] + 24LL))(a1[8]);
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      a2[8] = result;
    }
  }
  else {
    a2[8] = 0;
  }
  a2[10] = a1[10];
  return result;
}

__int64 game_map_ITarget_EnumerateSubTarget_lambda2_Invoke(__int64 a1, int* a2,
                                                           int* a3)
{
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  int v10;

  v5 = *a2;
  v6 = *a3;
  v7 = *(_QWORD*)(a1 + 16);
  v8 = *(_QWORD*)(a1 + 24);
  if (v8 != 0) {
    LODWORD(v8) = *(_WORD*)(v8 + 16) & 0xFFF;
  }
  v10 = v8;
  result = GameRoutine_7807a0(v7, &v10, v5, v6, a1 + 32);
  **(_BYTE**)(a1 + 80) |= result & 1;
  return result;
}

__int64 game_map_ITarget_EachSelectable_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;

  v4 = **(_QWORD**)(a1 + 8);
  if (*(_BYTE*)(v4 + 106) == 3) {
    result = MapUtil_753570(*(char*)(a2 + 1), *(char*)(a2 + 2));
    if ((result & 1) == 0) {
      return result;
    }
    goto LABEL_3;
  }
  v10 = *(_QWORD*)(a1 + 24);
  v12 = *(unsigned __int8*)(v10 + 8);
  v11 = v10 + 8;
  if (v12 != 0) {
    v13 = game_UnitPool_Get(v11);
    v4 = **(_QWORD**)(a1 + 8);
  }
  else {
    v13 = 0;
  }
  result = GameRoutine_844d10(a2, v13, v4);
  if ((result & 1) != 0) {
  LABEL_3:
    v9 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL);
    if (v9 == 0) {
      GameRoutine_60a310(0, v6, v7, v8);
    }
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v9 + 48LL))(v9, a2);
  }
  return result;
}

__int64 game_map_ITarget_EachSelectable_lambda1_Invoke(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  result = MapUtil_753570(*(char*)(a2 + 1), *(char*)(a2 + 2));
  if ((result & 1) != 0) {
    if ((result = a2 + 5, *(_BYTE*)(a2 + 5) != 0) &&
            (result = game_UnitPool_Get(result)) != 0 &&
            *(_QWORD*)(result + 392) != 0 ||
        (*(__int16*)(a2 + 6) & 0x8000000000000000LL) == 0 &&
            (v8 = *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL)) != 0 &&
            ((v9 = v8 + 144LL * *(__int16*)(a2 + 6),
              ((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 272LL))(v9) & 1) !=
                  0) ||
             ((result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 288LL))(v9)) &
              1) != 0)) {
      v10 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
      if (v10 == 0) {
        GameRoutine_60a310(0, v5, v6, v7);
      }
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v10 + 48LL))(v10, a2);
    }
  }
  return result;
}

__int64 game_map_ITarget_EachTarget_lambda0_Invoke(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4)
{
  __int64 v4;

  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
  if (v4 == 0) {
    GameRoutine_60a310((unsigned __int8)v4, a2, a3, a4);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
}

__int64 game_map_ITarget_EachTarget_lambda1_Invoke_7820b0(__int64 a1,
                                                          __int64 a2,
                                                          long double a3)
{
  __int64 (**v3)();
  __int64 v4;
  __int64 result;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;

  v3 = *(__int64 (***)())(a1 + 8);
  v4 = *(_QWORD*)(a1 + 16);
  v8 = v7;
  v7[0] = GameData_1f97f00;
  v7[1] = v4;
  GameRoutine_775580(v3, a2, v7, a3);
  result = (__int64)v8;
  if (v8 == v7) {
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8 + v6))((__int64)v8);
}

__int64 game_map_ITarget_EachTarget_lambda1_Invoke_782210(__int64 a1,
                                                          __int64 a2,
                                                          __int64 a3,
                                                          __int64 a4)
{
  __int64 v4;

  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
  if (v4 == 0) {
    GameRoutine_60a310((unsigned __int8)v4, a2, a3, a4);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
}

#pragma GCC visibility pop
