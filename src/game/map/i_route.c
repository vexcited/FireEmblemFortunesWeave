#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_74d660(__int64, int, char, char);
__int64 GameRoutine_68e4c0(_QWORD, _QWORD);
__int64 GameRoutine_747a00(__int64, __int64, __int64, __int64, char);
__int64 GameRoutine_747a00_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_747a00");
__int64 GameRoutine_747df0(__int64, int, int, unsigned __int8);
__int64 GameRoutine_74f280(__int64 result, int);
__int64 GameRoutine_7502e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7536a0(_QWORD);
__int64 GameRoutine_84edc0(_QWORD, _QWORD);
__int64 IRoute_750de0_alt1(_QWORD, _QWORD, _QWORD) __asm__("IRoute_750de0");
__int64 MapUtil_753920(_QWORD, _QWORD, _QWORD);
__int64 MapUtil_756c20(_QWORD, _QWORD);
__int64 Unit_6c9cf0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_map_IRoute_TryGetEncountPos_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("game_map_IRoute_TryGetEncountPos");
__int64 game_map_IRoute_TryGetEncountPos_lambda0_Invoke_alt1(
    _QWORD, _QWORD,
    _QWORD) __asm__("game_map_IRoute_TryGetEncountPos_lambda0_Invoke");
__int64 game_map_MapUtil_CanEnter(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
bool GameRoutine_6e8e50(unsigned __int16*, __int64);
bool UnitItem_6e8bc0(unsigned __int16*, __int64);
extern _UNKNOWN* GameData_212cf50;
extern __int64 (*GameData_1f95488[])();
extern __int64 (*GameData_1f95508[])();
extern __int64 GameData_21ca2f0;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce88[4];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfd0[8];
extern int GameData_21d9780;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD) __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_6e5a20(_QWORD);
__int64 IRoute_74f1a0(__int64 result, __int64 a2, __int64 a3, __int64 a4);
__int64 IRoute_74f480(__int64 result, int a2, unsigned int a3);
__int64 IRoute_750850(__int64 a1);
__int64 IRoute_750a00(__int64 a1, int a2, int a3);
__int64 IRoute_750de0(__int64 a1, int a2, int a3);
__int64 IRoute_751080(unsigned int* a1, __int64 a2);
__int64 IRoute_751300(unsigned int* a1, __int64 a2);
__int64 game_map_IRoute_TryGetEncountPos(__int64 a1, unsigned int* a2,
                                         unsigned int* a3, __int64 a4);
bool game_map_IRoute_IsSightOut(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4);
__int64 IRoute_751ba0(__int64 result, __int64 a2, unsigned int a3,
                      unsigned int a4);
__int64 game_map_IRoute_TryGetEncountPos_lambda0_Invoke(__int64 result, int* a2,
                                                        int* a3);
__int64 game_map_IRoute_IsSightOut_lambda0_Invoke(__int64 result, _DWORD* a2,
                                                  _DWORD* a3);

__int64 IRoute_74f1a0(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v9;
  char* v10;
  char* v11;
  int v12;
  int v13;

  v4 = *(_DWORD*)(result + 148);
  if ((v4 & 0x80000000) == 0) {
    v5 = result;
    v6 = *(_DWORD*)(result + 152);
    v7 = *(_QWORD*)(a2 + 32);
    v12 = v6;
    v13 = v4;
    if (v7 == 0) {
      goto LABEL_8;
    }
    result = (*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v7 + 48LL))(
        v7, &v13, &v12);
    if (*(int*)(v5 + 136) >= 1) {
      v9 = 0;
      v10 = (char*)GameData_212cf50;
      while (1) {
        v7 = *(_QWORD*)(a2 + 32);
        v11 = &v10[*(unsigned __int8*)(v5 + 8 + v9)];
        v4 += *v11;
        v6 += v11[256];
        v12 = v6;
        v13 = v4;
        if (v7 == 0) {
          break;
        }
        result = (*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v7 + 48LL))(
            v7, &v13, &v12);
        if (++v9 >= *(int*)(v5 + 136)) {
          return result;
        }
      }
    LABEL_8:
      GameRoutine_60a310(v7, a2, a3, a4);
    }
  }
  return result;
}

__int64 IRoute_74f480(__int64 result, int a2, unsigned int a3)
{
  bool v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  char v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _BOOL4 v29;
  __int64 v30;
  __int64 v31;
  _BOOL4 v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  bool v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int* v46;
  _BYTE* v47;
  unsigned __int8* v48;
  __int64 v49;
  unsigned __int8* v50;
  int v51;
  __int64 v52;
  int v53;
  __int64 v54;
  unsigned __int8* v55;
  __int64 v56;
  unsigned __int16* v57;
  unsigned __int8* v58;
  unsigned int v59;
  int v60;
  bool v61;
  char* v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  bool v69;
  char* v70;
  __int64 v71;
  unsigned __int64 v72;
  unsigned int v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  bool v81;
  __int64 v82;
  unsigned int v83;
  unsigned int v84;
  __int64 v85;
  unsigned int v86;
  unsigned int v87;
  unsigned int v88;
  int v89;
  __int64 v90;
  int v91;
  signed int v92;
  signed int v93;
  int v94;
  signed int v95;
  unsigned int v96;
  int v97;
  signed int v98;
  int v99;
  unsigned int v100;
  __int64 v101;
  int v102;
  int v103;
  int v104;
  __int16* v105;
  int v106;
  int v107;
  int v108;
  int* v109;
  int v110;
  __int64 v111;
  unsigned __int8* v112;
  unsigned int v113;
  char* v114;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  unsigned int v126;
  unsigned int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  unsigned __int16* v135;
  unsigned __int8* v136;
  __int64 v137;
  unsigned __int16* v138;
  __int64 v139;
  __int64 v140;
  unsigned __int8* v141;
  bool v142;
  int v143;
  bool v144;
  unsigned __int8* v145;
  unsigned int v146;
  unsigned __int8* v147;
  __int64 v148;
  unsigned __int8* v149;
  int v150;
  unsigned __int8* v151;
  unsigned int v152;
  int v153;
  bool v154;
  __int64 v155;
  int v156;
  bool v157;
  __int64 v158;
  unsigned __int64 v159;
  unsigned __int64 v160;
  unsigned int v161;
  int v162;
  unsigned int v163;
  unsigned int v164;
  unsigned __int8* v165;
  unsigned int v166;
  unsigned int v167;
  unsigned int v168;
  unsigned int v169;
  int v170;
  int v171;
  unsigned int v172;
  char* v173;
  __int64 v174;
  __int64 v175;
  unsigned __int64 v176;
  __int64 v177;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  unsigned int v182;
  unsigned __int64 v183;
  int v184;
  __int64 v185;

  v3 = a2 == *(_DWORD*)(result + 164) && a3 == *(_DWORD*)(result + 168);
  if (v3) {
    return result;
  }
  v4 = *(_QWORD*)(result + 184);
  v5 = a2;
  v6 = result;
  *(_BYTE*)(result + 176) = 0;
  *(_DWORD*)(result + 164) = a2;
  *(_DWORD*)(result + 168) = a3;
  if (v4 == 0) {
    v4 = *GameData_212ce88[0];
    *(_QWORD*)(result + 184) = *GameData_212ce88[0];
  }
  v7 = *(_QWORD*)(v4 + 8);
  v8 = a2 + 32 * a3;
  if ((unsigned int)v8 >= 0x400) {
    v9 = 0;
  }
  else {
    v9 = (unsigned int)v8;
  }
  if (*(unsigned __int8*)(v7 + v9 + 64) == 255 ||
      (unsigned int)GameRoutine_747df0(v7, a2, a3, *(_BYTE*)(v7 + 5)) == 255) {
    v10 = *(_DWORD*)(v6 + 148);
    v11 = *(_DWORD*)(v6 + 152);
    if (v5 != v10 || a3 != v11) {
      v13 = *(unsigned int*)(v6 + 136);
      if ((int)v13 >= 1) {
        v14 = 0;
        while (1) {
          v15 = (char*)GameData_212cf50 + *(unsigned __int8*)(v6 + v14 + 8);
          v10 += *v15;
          v11 += v15[256];
          if (v5 == v10 && a3 == v11) {
            break;
          }
          if (v13 == ++v14) {
            goto LABEL_26;
          }
        }
        GameRoutine_74f280(v6, v14);
      }
    }
  }
  else {
    GameRoutine_7502e0(v6, v5, a3);
  }
LABEL_26:
  v17 = GameData_212cfd0[0];
  result = *GameData_212cfd0[0];
  if ((*(_BYTE*)(*GameData_212cfd0[0] + 12673) & 0x40) == 0) {
    v18 = *(unsigned __int8*)(result + 8);
    result += 8;
    if (v18 != 0) {
      result = game_UnitPool_Get(result);
      if (result != 0) {
        v19 = result;
        if (*(_BYTE*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v9 + 8) == 0 ||
            ((v20 =
                  *(_QWORD*)(GameData_21ca310 + 56) +
                  2224LL * *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] +
                                                          96) +
                                               v9 + 8),
              v21 = v20 - 2224,
              *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v9 +
                                  8) <= 0xFAu)
                 ? (v22 = v20 == 2224)
                 : (v22 = true),
             v22 || *(_QWORD*)(v20 - 1832) == 0 ||
                 (GameRoutine_7536a0(v20 - 2224) & 1) == 0 ||
                 (v23 = Unit_6c9cf0(v19, v21), v19 == v21) || (v23 & 1) == 0)) {
          v21 = 0;
        }
        v24 = GameData_212cfb8[0];
        v25 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
        v26 = *(__int16*)(v25 + 2 * v9 + 2152);
        v29 = false;
        if ((v26 & 0x8000000000000000LL) == 0) {
          v27 = *(_QWORD*)(v25 + 8);
          if (v27 != 0) {
            v28 = v27 + 144LL * (int)v26;
            if (((*(__int64 (**)(__int64))(*(_QWORD*)v28 + 272LL))(v28) & 1) !=
                    0 &&
                ((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v28 + 280LL))(
                     v28, v19) &
                 1) != 0) {
              v29 = true;
            }
          }
        }
        v30 = *(_QWORD*)(v6 + 184);
        if (v30 == 0) {
          v30 = *GameData_212ce88[0];
          *(_QWORD*)(v6 + 184) = *GameData_212ce88[0];
        }
        v31 = *(_QWORD*)(v30 + 8) + 4LL * (v8 >> 5);
        v32 = v21 != 0;
        v33 = (*(_DWORD*)(v31 + 2120) & (1 << v5)) != 0 && (v32 || v29);
        v34 = v32 && (*(_DWORD*)(v31 + 2248) & (1 << v5)) != 0 ? v33 | 2 : v33;
        result = MapUtil_756c20(v19, v21);
        if ((result & 1) != 0) {
          v34 |= 8u;
        }
        else if (v34 == 0) {
          return result;
        }
        result = *v17 + 8;
        if (*(_BYTE*)result != 0) {
          result = game_UnitPool_Get(result);
          if (result != 0) {
            v35 = result;
            if (*(_BYTE*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v9 + 8) ==
                    0 ||
                ((v36 =
                      *(_QWORD*)(GameData_21ca310 + 56) +
                      2224LL *
                          *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] +
                                                         96) +
                                              v9 + 8),
                  v37 = v36 - 2224,
                  *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) +
                                      v9 + 8) <= 0xFAu)
                     ? (v38 = v36 == 2224)
                     : (v38 = true),
                 v38 || *(_QWORD*)(v36 - 1832) == 0 ||
                     ((result = GameRoutine_7536a0(v36 - 2224)) & 1) == 0 ||
                     (result = Unit_6c9cf0(v35, v37), v35 == v37) ||
                     (result & 1) == 0)) {
              v37 = 0;
            }
            v39 = *(_QWORD*)(*v24 + 16);
            v40 = *(__int16*)(v39 + 2 * v9 + 2152);
            if ((v40 & 0x8000000000000000LL) == 0 &&
                (v41 = *(_QWORD*)(v39 + 8)) != 0 &&
                (v42 = v41 + 144LL * (int)v40,
                 ((result =
                       (*(__int64 (**)(__int64))(*(_QWORD*)v42 + 272LL))(v42)) &
                  1) != 0)) {
              result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v42 +
                                                          280LL))(v42, v35);
              if (v37 == 0 && (result & 1) == 0) {
                return result;
              }
            }
            else if (v37 == 0) {
              return result;
            }
            v43 = v35 + 828;
            v171 = 0;
            v172 = v34;
            v44 = 0;
            v45 = 0;
            v183 = 0;
            v46 = nullptr;
            v173 = nullptr;
            v175 = v6;
            v185 = v35;
            v179 = v37;
            while (1) {
              v54 = v35 + v44;
              if (*(_WORD*)(v35 + v44 + 828) == 0) {
                goto LABEL_81;
              }
              v55 = *(unsigned __int8**)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8LL * *(unsigned __int16*)(v35 + v44 +
                                                                    828));
              if (v55[72] > 7u) {
                goto LABEL_81;
              }
              v56 = v55[73];
              if (v56 != 1 && (v55[337] & 0x10) == 0) {
                goto LABEL_81;
              }
              v57 = (unsigned __int16*)(v54 + 828);
              if (((1LL << v56) & 0x7DC) != 0) {
                result = GameRoutine_6e8e50(v57, v35);
                if ((result & 1) == 0) {
                  goto LABEL_81;
                }
              }
              else {
                result = UnitItem_6e8bc0(v57, v35);
                if ((result & 1) == 0) {
                  goto LABEL_81;
                }
              }
              if (v37 == 0 ||
                  ((result = MapUtil_753920(v35, v54 + 828, v37)) & 1) != 0) {
                v58 =
                    *(unsigned __int8**)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8LL * *(unsigned __int16*)(v54 + 828));
                v59 = v58[72];
                v60 = v58[73];
                v61 = v59 <= 7 && v60 == 1;
                if (!v61 ||
                    v59 - 5 <= 1 && (*(_DWORD*)(v35 + v44 + 832) & 0xF) *
                                                (unsigned int)v58[87] -
                                            1 <
                                        *(unsigned __int8*)(v35 + v44 + 830) ||
                    (*(_BYTE*)(v35 + v44 + 831) & 0x20) != 0) {
                  v68 = (1LL << v60) & 0x7DC;
                  v69 = v59 > 7 || v68 == 0;
                  if (!v69 &&
                      (v59 - 5 > 1 ||
                       (*(_DWORD*)(v35 + v44 + 832) & 0xF) *
                                   (unsigned int)v58[87] -
                               1 >=
                           *(unsigned __int8*)(v35 + v44 + 830)) &&
                      (v172 & 2) != 0 &&
                      (*(_BYTE*)(v35 + v44 + 831) & 0x20) == 0) {
                    if ((unsigned __int64)v46 < v183) {
                    LABEL_120:
                      *v46++ = v45;
                    LABEL_143:
                      v52 = *(unsigned __int16*)(v54 + 828);
                      if (*(_WORD*)(v54 + 828) != 0) {
                        v80 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8 * v52);
                        v47 = *(_BYTE**)(v80 + 192);
                        v81 = v47 == nullptr ||
                              *(unsigned __int8*)(v80 + 72) > 7u;
                        if (v81 || v47[105] == 0) {
                          v47 = nullptr;
                        }
                        else if (v47[104] == 2) {
                          v47 = nullptr;
                        }
                        v48 = (unsigned __int8*)(v80 + 93);
                        v49 = *(_QWORD*)(v80 + 24);
                        if (v47 != nullptr) {
                          v50 = v47 + 279;
                        }
                        else {
                          v50 = v48;
                        }
                        v51 = *v50;
                        result = GameRoutine_84edc0(v35 + 1744, v49 + 8);
                        LODWORD(v52) = result + v51;
                        v6 = v175;
                      }
                      v53 = v171;
                      if ((int)v52 > v171) {
                        v53 = v52;
                      }
                      v171 = v53;
                      goto LABEL_81;
                    }
                    v70 = (char*)((char*)v46 - v173);
                    v71 = ((char*)v46 - v173) >> 2;
                    v72 = v71 + 1;
                    if ((unsigned __int64)(v71 + 1) >> 62 != 0) {
                    LABEL_297:
                      GameRoutine_6e5a20(result);
                    }
                    v73 = v5;
                    v74 = v183 - (_QWORD)v173;
                    if ((__int64)(v183 - (_QWORD)v173) >> 1 > v72) {
                      v72 = v74 >> 1;
                    }
                    if ((unsigned __int64)v74 >= 0x7FFFFFFFFFFFFFFCLL) {
                      v75 = 0x3FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v75 = v72;
                    }
                    if (v75 != 0) {
                      if (v75 >> 62 != 0) {
                      LABEL_298:
                        GameRoutine_60a210(result);
                      }
                      v76 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v75, 16,
                          0);
                    }
                    else {
                      v76 = 0;
                    }
                    v183 = v76 + 4 * v75;
                    v77 = (__int64)&v70[v76 + -4 * v71];
                    *(_DWORD*)&v70[v76] = v45;
                    v46 = (int*)&v70[v76 + 4];
                    result = memcpy(v77, v173, v70);
                    if (v173 != nullptr) {
                      v78 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v78 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v78, v173);
                    }
                    v173 = (char*)v77;
                    v5 = v73;
                    v35 = v185;
                  LABEL_142:
                    v37 = v179;
                    goto LABEL_143;
                  }
                }
                else if ((v172 & 1) != 0) {
                  if ((unsigned __int64)v46 < v183) {
                    goto LABEL_120;
                  }
                  v62 = (char*)((char*)v46 - v173);
                  v63 = ((char*)v46 - v173) >> 2;
                  v64 = v63 + 1;
                  if ((unsigned __int64)(v63 + 1) >> 62 != 0) {
                    goto LABEL_297;
                  }
                  v65 = v183 - (_QWORD)v173;
                  if ((__int64)(v183 - (_QWORD)v173) >> 1 > v64) {
                    v64 = v65 >> 1;
                  }
                  if ((unsigned __int64)v65 >= 0x7FFFFFFFFFFFFFFCLL) {
                    v66 = 0x3FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v66 = v64;
                  }
                  if (v66 != 0) {
                    if (v66 >> 62 != 0) {
                      goto LABEL_298;
                    }
                    v67 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v66, 16, 0);
                    v63 = ((char*)v46 - v173) >> 2;
                  }
                  else {
                    v67 = 0;
                  }
                  *(_DWORD*)&v62[v67] = v45;
                  v46 = (int*)&v62[v67 + 4];
                  v181 = (__int64)&v62[v67 + -4 * v63];
                  v183 = v67 + 4 * v66;
                  result = memcpy(v181, v173, v62);
                  if (v173 != nullptr) {
                    v79 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v79 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, v173);
                  }
                  v173 = (char*)v181;
                  goto LABEL_142;
                }
              }
            LABEL_81:
              ++v45;
              v44 += 8;
              if (v45 == 30) {
                v174 = *(_QWORD*)(v6 + 184);
                if (v174 == 0) {
                  v174 = *GameData_212ce88[0];
                  *(_QWORD*)(v6 + 184) = *GameData_212ce88[0];
                }
                v82 = *GameData_212ce98[0];
                v83 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
                v164 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
                if (v83 > v164 ||
                    (v84 = *(unsigned __int8*)(v82 + 28),
                     v182 = *(unsigned __int8*)(v82 + 30), v84 > v182)) {
                  v169 = -1;
                  v170 = 0;
                  v168 = -1;
                LABEL_157:
                  if (v173 != nullptr) {
                    v85 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v85 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v85, v173);
                  }
                  if (v170 != 0) {
                    *(_BYTE*)(v6 + 176) = v170;
                    return GameRoutine_7502e0(v6, v169, v168);
                  }
                  return result;
                }
                v170 = 0;
                v176 = 0;
                v180 = *GameData_212ce88[0];
                v166 = v5;
                v165 = (unsigned __int8*)(v6 + 8);
                v162 = v5 - v84;
                v168 = -1;
                v169 = -1;
                v86 = a3;
                v163 = *(unsigned __int8*)(v82 + 28);
                while (2) {
                  v87 = v84;
                  v184 = 32 * v83;
                  v88 = v86 - v83;
                  v89 = v162;
                  if ((int)(v86 - v83) < 0) {
                    v88 = v83 - v86;
                  }
                  v167 = v88;
                LABEL_170:
                  result = *(_QWORD*)(v180 + 8);
                  if (v87 + v184 >= 0x400) {
                    v90 = 0;
                  }
                  else {
                    v90 = v87 + v184;
                  }
                  if (*(unsigned __int8*)(result + v90 + 64) == 255) {
                    goto LABEL_169;
                  }
                  result = GameRoutine_747df0(result, v87, v83,
                                              *(_BYTE*)(result + 5));
                  if ((_DWORD)result == 255) {
                    goto LABEL_169;
                  }
                  result = GameRoutine_747a00(*(_QWORD*)(v174 + 8), v87, v83,
                                              v185, 0);
                  if ((result & 1) == 0) {
                    goto LABEL_169;
                  }
                  v91 = *(_DWORD*)(v185 + 592);
                  if ((unsigned int)(v91 * v91) >= 2) {
                    if (v91 < 1) {
                      v94 = 10000;
                      v101 = *(_QWORD*)(v6 + 184);
                      if (v101 != 0) {
                        goto LABEL_189;
                      }
                    }
                    else {
                      v92 = v91 + v83;
                      v93 = v91 + v87;
                      v94 = 10000;
                      v95 = v83;
                      do {
                        v96 = v86 - v95;
                        v97 = v89;
                        v98 = v87;
                        if ((int)(v86 - v95) < 0) {
                          v96 = v95 - v86;
                        }
                        do {
                          ++v98;
                          if (v97 >= 0) {
                            v99 = v97;
                          }
                          else {
                            v99 = -v97;
                          }
                          --v97;
                          v100 = v99 + v96;
                          if (v100 < v94) {
                            v94 = v100;
                          }
                        } while (v98 < v93);
                        ++v95;
                      } while (v95 < v92);
                      v101 = *(_QWORD*)(v6 + 184);
                      if (v101 != 0) {
                        goto LABEL_189;
                      }
                    }
                  LABEL_294:
                    v101 = *GameData_212ce88[0];
                    *(_QWORD*)(v6 + 184) = *GameData_212ce88[0];
                    goto LABEL_189;
                  }
                  v161 = v166 - v87;
                  if ((int)(v166 - v87) < 0) {
                    v161 = v87 - v166;
                  }
                  v94 = v161 + v167;
                  v101 = *(_QWORD*)(v6 + 184);
                  if (v101 == 0) {
                    goto LABEL_294;
                  }
                LABEL_189:
                  v102 = *(_DWORD*)(v6 + 148);
                  v103 = *(_DWORD*)(v6 + 152);
                  v104 = *(unsigned __int8*)(*(_QWORD*)(v101 + 8) + v90 + 64);
                  v105 = *(
                      __int16**)(*(_QWORD*)(*GameData_212c930 + 64) +
                                 8LL *
                                     *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98
                                                                         [0] +
                                                                     72) +
                                                          2 * v90 + 8));
                  v106 = v105[44];
                  v107 = v105[41];
                  v108 = v105[42];
                  if (v87 == v102 && v83 == v103) {
                    result = v172;
                    v109 = (int*)v173;
                    v110 = 0;
                  }
                  else {
                    v111 = *(unsigned int*)(v6 + 136);
                    result = v172;
                    v109 = (int*)v173;
                    if ((int)v111 < 1) {
                    LABEL_199:
                      v110 = -1;
                    }
                    else {
                      v112 = v165;
                      v110 = 1;
                      while (1) {
                        v113 = *v112++;
                        v114 = (char*)GameData_212cf50 + v113;
                        v102 += *v114;
                        v103 += v114[256];
                        if (v87 == v102 && v83 == v103) {
                          break;
                        }
                        ++v110;
                        if (--v111 == 0) {
                          goto LABEL_199;
                        }
                      }
                    }
                  }
                  v116 = ~HIBYTE(v110) & 0x80;
                  v117 = v171 - v94;
                  if (v171 - v94 >= 127) {
                    v117 = 127;
                  }
                  v118 = (v116 | v117) ^ 0x7F;
                  if (v171 >= v94) {
                    v116 = v118;
                  }
                  v119 = v116 << 8;
                  if (v94 >= 255) {
                    v120 = 255;
                  }
                  else {
                    v120 = v94;
                  }
                  v121 = v119 - v120;
                  if ((unsigned int)v110 >= 0xFF) {
                    v122 = 255;
                  }
                  else {
                    v122 = v110;
                  }
                  v123 = v121 + 255;
                  v124 = v119 | v122;
                  if (v110 >= 0) {
                    v125 = v124;
                  }
                  else {
                    v125 = v123;
                  }
                  if (v107 >= 0) {
                    v126 = v107;
                  }
                  else {
                    v126 = -v107;
                  }
                  if (v108 >= 0) {
                    v127 = v108;
                  }
                  else {
                    v127 = -v108;
                  }
                  if (v126 <= v127) {
                    v107 = v108;
                  }
                  v128 = (v106 + 50) / 10;
                  if (v128 >= 15) {
                    v128 = 15;
                  }
                  v129 = 16 * v128;
                  if (v106 >= -59) {
                    v130 = v129;
                  }
                  else {
                    v130 = 0;
                  }
                  if (v107 >= 10) {
                    v131 = 10;
                  }
                  else {
                    v131 = v107;
                  }
                  v132 = v130 - (v104 << 8);
                  v133 = v131 + 5;
                  if (v107 >= -5) {
                    v134 = v133;
                  }
                  else {
                    v134 = 0;
                  }
                  v177 = (unsigned int)(v132 + v134 + (v125 << 16) + 65280);
                  if ((result & 8) == 0 || v94 != 1 ||
                      (v177 | 0x60000000000uLL) <= v176) {
                    goto LABEL_238;
                  }
                  v170 = 2;
                  v176 = v177 | 0x60000000000LL;
                  v168 = v83;
                  v169 = v87;
                  if (v109 == v46) {
                  LABEL_169:
                    --v89;
                    v3 = v87++ == v182;
                    if (v3) {
                      v84 = v163;
                      v3 = v83++ == v164;
                      if (v3) {
                        goto LABEL_157;
                      }
                      continue;
                    }
                    goto LABEL_170;
                  }
                  break;
                }
                while (2) {
                  while (2) {
                    v135 = (unsigned __int16*)(v43 + 8LL * *v109);
                    v136 =
                        *(unsigned __int8**)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *v135);
                    if (v136[72] <= 7u) {
                      v137 = v136[73];
                      if (v137 == 1 || (v136[337] & 0x10) != 0) {
                        v138 = (unsigned __int16*)(v43 + 8LL * *v109);
                        if (((1LL << v137) & 0x7DC) != 0) {
                          result = GameRoutine_6e8e50(v138, v185);
                          if ((result & 1) != 0) {
                          LABEL_246:
                            if (v179 == 0 ||
                                ((result = MapUtil_753920(v185, v135, v179)) &
                                 1) != 0) {
                              v139 = *v135;
                              if (*v135 != 0) {
                                v140 =
                                    *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                          64) +
                                               8 * v139);
                                v141 = *(unsigned __int8**)(v140 + 192);
                                v142 = v141 == nullptr ||
                                       *(unsigned __int8*)(v140 + 72) > 7u;
                                if (v142 || v141[105] == 0) {
                                  v141 = nullptr;
                                  v145 = (unsigned __int8*)(v140 + 92);
                                }
                                else {
                                  v143 = v141[104];
                                  v144 = v143 == 2;
                                  if (v143 == 2) {
                                    v141 = nullptr;
                                  }
                                  v145 = v141 + 278;
                                  if (v144) {
                                    v145 = (unsigned __int8*)(v140 + 92);
                                  }
                                }
                                v146 = *v145;
                                v147 = (unsigned __int8*)(v140 + 93);
                                v148 = *(_QWORD*)(v140 + 24);
                                v149 = v141 != nullptr ? v141 + 279 : v147;
                                v150 = *v149;
                                result =
                                    GameRoutine_84edc0(v185 + 1744, v148 + 8);
                                LODWORD(v139) = result + v150;
                                v86 = a3;
                                if (v146 > v94) {
                                  v6 = v175;
                                  if (++v109 == v46) {
                                    goto LABEL_169;
                                  }
                                  continue;
                                }
                              }
                              v6 = v175;
                              if (v94 <= (int)v139) {
                                v151 = *(
                                    unsigned __int8**)(*(_QWORD*)(*GameData_212c878
                                                                      [0] +
                                                                  64) +
                                                       8LL * *v135);
                                v152 = v151[72];
                                v153 = v151[73];
                                v154 = v152 <= 7 && v153 == 1;
                                if (v154 &&
                                    (v152 - 5 > 1 ||
                                     (*((_DWORD*)v135 + 1) & 0xF) *
                                                 (unsigned int)v151[87] -
                                             1 >=
                                         *((unsigned __int8*)v135 + 2)) &&
                                    (*((_BYTE*)v135 + 3) & 0x20) == 0) {
                                  v155 = 0x40000000000LL;
                                  v156 = 3;
                                  goto LABEL_288;
                                }
                                v157 = v152 > 7 || ((1LL << v153) & 0x7DC) == 0;
                                if (v157 ||
                                    v152 - 5 <= 1 &&
                                        (*((_DWORD*)v135 + 1) & 0xF) *
                                                    (unsigned int)v151[87] -
                                                1 <
                                            *((unsigned __int8*)v135 + 2) ||
                                    (*((_BYTE*)v135 + 3) & 0x20) != 0) {
                                  v156 = 0;
                                  v155 = 0;
                                LABEL_288:
                                  v159 =
                                      v155 |
                                      ((unsigned __int64)(*((_BYTE*)v135 + 3) &
                                                          1)
                                       << 48);
                                }
                                else {
                                  v3 = v153 == 2;
                                  v158 = 0x100000000LL;
                                  if (!v3) {
                                    v158 = 0;
                                  }
                                  v159 =
                                      v158 |
                                      ((unsigned __int64)(*((_BYTE*)v135 + 3) &
                                                          1)
                                       << 48) |
                                      0x20000000000LL;
                                  v156 = 4;
                                }
                                v160 = v159 | v177;
                                if (v160 > v176) {
                                  v176 = v160;
                                  v169 = v87;
                                  v170 = v156;
                                  v168 = v83;
                                }
                              }
                            }
                          }
                        }
                        else {
                          result = UnitItem_6e8bc0(v138, v185);
                          if ((result & 1) != 0) {
                            goto LABEL_246;
                          }
                        }
                      }
                    }
                    break;
                  }
                  ++v109;
                LABEL_238:
                  if (v109 == v46) {
                    goto LABEL_169;
                  }
                  continue;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 IRoute_750850(__int64 a1)
{
  __int64 result;
  int v3;
  int v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  char v11;
  char v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  unsigned int v20;

  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = game_UnitPool_Get(result);
    if (result != 0) {
      v3 = *(_DWORD*)(a1 + 164);
      if (*(unsigned __int8*)(GameData_21ca300 + 26) >
          (unsigned int)(unsigned __int8)(v3 -
                                          *(_BYTE*)(GameData_21ca300 + 24))) {
        v4 = *(_DWORD*)(a1 + 168);
        if (*(unsigned __int8*)(GameData_21ca300 + 27) >
            (unsigned int)(unsigned __int8)(v4 -
                                            *(_BYTE*)(GameData_21ca300 + 25))) {
          LODWORD(v5) = v3 + 32 * v4;
          v5 = (unsigned int)v5 >= 0x400 ? 0LL : (unsigned int)v5;
          v6 = *(unsigned __int8*)(*(_QWORD*)(GameData_21ca300 + 96) + v5 + 8);
          if (*(_BYTE*)(*(_QWORD*)(GameData_21ca300 + 96) + v5 + 8) != 0) {
            v7 =
                *(_QWORD*)(GameData_21ca310 + 56) +
                2224LL * *(unsigned __int8*)(*(_QWORD*)(GameData_21ca300 + 96) +
                                             v5 + 8);
            v8 = v7 - 2224;
            if (v6 <= 0xFA && v7 != 2224 && *(_QWORD*)(v7 - 1832) != 0) {
              v10 = result;
              v11 = GameRoutine_7536a0(v7 - 2224);
              result = v10;
              if ((v11 & 1) != 0) {
                v12 = Unit_6c9cf0(v10, v8);
                result = v10;
                if (v10 != v8 && (v12 & 1) != 0) {
                  goto LABEL_23;
                }
              }
            }
          }
          v13 = *(_DWORD*)(a1 + 164) + 32 * *(_DWORD*)(a1 + 168);
          if (v13 >= 0x400) {
            v13 = 0;
          }
          v14 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
          v15 = *(__int16*)(v14 + 2LL * v13 + 2152);
          if ((v15 & 0x8000000000000000LL) == 0) {
            v16 = *(_QWORD*)(v14 + 8);
            if (v16 != 0) {
              v17 = result;
              v18 = v16 + 144LL * (int)v15;
              result = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 272LL))(v18);
              if ((result & 1) != 0) {
                result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v18 +
                                                            280LL))(v18, v17);
                if ((result & 1) != 0) {
                LABEL_23:
                  v19 = *(_DWORD*)(a1 + 164);
                  v20 = *(_DWORD*)(a1 + 168);
                  *(_QWORD*)(a1 + 164) = -1;
                  return IRoute_74f480(a1, v19, v20);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 IRoute_750a00(__int64 a1, int a2, int a3)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 result;
  unsigned int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  _BYTE* v13;
  int v14;
  char* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  _BYTE* v29;
  char v30;
  char v31;
  char v32;
  int v33;
  int v34;
  char* v35;
  char v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  unsigned __int8 v43;
  char* v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int8* v50;
  __int64 v51;
  int v52;
  __int64 v53;
  int v54;
  __int64 v55;
  int v56;
  int v57;
  unsigned __int8* v58;
  int v59;
  char* v60;

  v3 = *(_QWORD*)(a1 + 184);
  v4 = a3;
  v5 = a2;
  if (v3 == 0) {
    v3 = GameData_21ca2f0;
    *(_QWORD*)(a1 + 184) = GameData_21ca2f0;
  }
  result = *(_QWORD*)(v3 + 8);
  v8 = a2 + 32 * a3;
  if (v8 >= 0x400) {
    v9 = 0;
  }
  else {
    v9 = v8;
  }
  if (*(unsigned __int8*)(result + v9 + 64) != 255) {
    result = GameRoutine_747df0(result, a2, a3, *(_BYTE*)(result + 5));
    if ((_DWORD)result != 255) {
      v10 = *(_DWORD*)(a1 + 136);
      v11 = a1 + 8;
      v12 = *(unsigned __int8*)(*(_QWORD*)(v3 + 8) + v9 + 64);
      v13 = GameData_212cf50;
      if (v12 != 0) {
        do {
          result = IRoute_750de0_alt1(a1, v5, v4);
          if ((_BYTE)result != 0) {
            if ((unsigned __int8)result >= 0x10u) {
              v5 += (char)v13[(unsigned __int8)result];
              v4 += (char)v13[(unsigned __int8)result + 256];
              v19 = *(int*)(a1 + 136);
              v20 = v13[(unsigned __int8)v13[(unsigned __int8)result + 1024] +
                        512];
              *(_DWORD*)(a1 + 136) = v19 + 1;
              *(_BYTE*)(v11 + v19) = v20;
            }
            v15 = &v13[(unsigned __int8)result];
            v5 += *v15;
            v16 = v15[256];
            LOBYTE(v15) = v15[512];
            v4 += v16;
            v17 = *(int*)(a1 + 136);
            *(_DWORD*)(a1 + 136) = v17 + 1;
            *(_BYTE*)(v11 + v17) = (_BYTE)v15;
          }
          LODWORD(v18) = v5 + 32 * v4;
          if ((unsigned int)v18 >= 0x400) {
            v18 = 0;
          }
          else {
            v18 = (unsigned int)v18;
          }
        } while (*(_BYTE*)(*(_QWORD*)(v3 + 8) + v18 + 64) != 0);
        v14 = *(_DWORD*)(a1 + 136);
      }
      else {
        v14 = *(_DWORD*)(a1 + 136);
      }
      v21 = (v14 - v10) >> 1;
      if (v21 < 1) {
        goto LABEL_28;
      }
      v22 = v21 & 3;
      if ((unsigned int)v21 >= 4) {
        v24 = v14 - 3;
        v25 = 0;
        v26 = v14 - 1;
        v27 = v14 - 2;
        v28 = -(__int64)(v21 & 0x7FFFFFFC);
        v29 = (_BYTE*)(v10 + a1 + 11);
        do {
          v30 = *(v29 - 3);
          *(v29 - 3) = *(_BYTE*)(v11 + v26 + (int)v25);
          *(_BYTE*)(v11 + v26 + (int)v25) = v30;
          v31 = *(v29 - 2);
          *(v29 - 2) = *(_BYTE*)(v11 + v27 + (int)v25);
          *(_BYTE*)(v11 + v27 + (int)v25) = v31;
          v32 = *(v29 - 1);
          *(v29 - 1) = *(_BYTE*)(v11 + v24 + (int)v25);
          *(_BYTE*)(v11 + v24 + (int)v25) = v32;
          v33 = v14 - 4 + v25;
          v25 -= 4;
          result = (unsigned __int8)*v29;
          *v29 = *(_BYTE*)(v11 + v33);
          v29 += 4;
          *(_BYTE*)(v11 + v33) = result;
        } while (v28 != v25);
        v23 = -v25;
        if (v22 == 0) {
          goto LABEL_28;
        }
      }
      else {
        v23 = 0;
        if ((v21 & 3) == 0) {
        LABEL_28:
          v37 = *(_DWORD*)(a1 + 148);
          v38 = *(_DWORD*)(a1 + 152);
          v39 = *(_QWORD*)(a1 + 184);
          if (v39 == 0) {
            v39 = GameData_21ca2f0;
            *(_QWORD*)(a1 + 184) = GameData_21ca2f0;
          }
          LODWORD(v40) = *(_DWORD*)(a1 + 136);
          if ((int)v40 < 1) {
            v42 = 0;
          }
          else {
            v41 = 0;
            v42 = 0;
            do {
              v45 = *(unsigned __int8*)(v11 + v41);
              v46 = *(_QWORD*)(v39 + 8);
              if (v45 > 0xF) {
                v43 = 8;
              }
              else {
                v43 = *(_BYTE*)(v46 + 5);
              }
              v44 = &v13[v45];
              v37 += *v44;
              v38 += v44[256];
              result = GameRoutine_747df0(v46, v37, v38, v43);
              v40 = *(int*)(a1 + 136);
              v42 += result;
              ++v41;
            } while (v41 < v40);
            v37 = *(_DWORD*)(a1 + 148);
            v38 = *(_DWORD*)(a1 + 152);
          }
          *(_DWORD*)(a1 + 172) = v42;
          *(_DWORD*)(a1 + 156) = v37;
          *(_DWORD*)(a1 + 160) = v38;
          if ((_DWORD)v40 != 0) {
            v47 = v40 & 3;
            if ((unsigned int)v40 >= 4) {
              v49 = (unsigned int)v40 & 0xFFFFFFFC;
              v50 = (unsigned __int8*)(a1 + 11);
              v48 = 0;
              do {
                v51 = *(v50 - 3);
                v48 += 4;
                v52 = v37 + (char)v13[v51];
                *(_DWORD*)(a1 + 156) = v52;
                LODWORD(v51) = v38 + (char)v13[v51 + 256];
                *(_DWORD*)(a1 + 160) = v51;
                v53 = *(v50 - 2);
                v54 = v52 + (char)v13[v53];
                *(_DWORD*)(a1 + 156) = v54;
                LODWORD(v51) = v51 + (char)v13[v53 + 256];
                *(_DWORD*)(a1 + 160) = v51;
                v55 = *(v50 - 1);
                v56 = v54 + (char)v13[v55];
                *(_DWORD*)(a1 + 156) = v56;
                LODWORD(v51) = v51 + (char)v13[v55 + 256];
                *(_DWORD*)(a1 + 160) = v51;
                v57 = *v50;
                v50 += 4;
                v37 = v56 + (char)v13[v57];
                *(_DWORD*)(a1 + 156) = v37;
                v38 = v51 + (char)v13[v57 + 256];
                *(_DWORD*)(a1 + 160) = v38;
              } while (v49 != v48);
            }
            else {
              v48 = 0;
            }
            if (v47 != 0) {
              v58 = (unsigned __int8*)(v48 + a1 + 8);
              do {
                v59 = *v58++;
                --v47;
                v60 = &v13[v59];
                v37 += *v60;
                *(_DWORD*)(a1 + 156) = v37;
                v38 += v60[256];
                *(_DWORD*)(a1 + 160) = v38;
              } while (v47 != 0);
            }
          }
          return result;
        }
      }
      v34 = ~(_DWORD)v23 + v14;
      v35 = (char*)(v23 + v10 + a1 + 8);
      do {
        v36 = *v35;
        --v22;
        *v35++ = *(_BYTE*)(v11 + v34);
        *(_BYTE*)(v11 + v34--) = v36;
      } while (v22 != 0);
      goto LABEL_28;
    }
  }
  return result;
}

__int64 IRoute_750de0(__int64 a1, int a2, int a3)
{
  __int64 v4;
  _BYTE* v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  _BYTE* v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  char* v13;
  unsigned __int8 v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  int v29;
  int v30;
  int v31;
  __int64 v33;
  __int64 v34;
  int v35;
  _BYTE v36[4];
  int v37;

  v37 = 0;
  v4 = *(_QWORD*)(a1 + 184);
  v5 = (_BYTE*)*GameData_212ce98[0];
  if (v4 == 0) {
    v4 = GameData_21ca2f0;
    *(_QWORD*)(a1 + 184) = GameData_21ca2f0;
  }
  v6 = a2 + 32 * a3;
  v7 = 254;
  v8 = 0;
  v9 = GameData_212cf50;
  v35 = a2;
  if (v6 >= 0x400) {
    v10 = 0;
  }
  else {
    v10 = v6;
  }
  v33 = v10;
  v34 = v4;
  do {
    v12 = 1LL << v8;
    v13 = &v9[1LL << v8];
    v14 = 1LL << v8;
    v15 = *v13;
    v16 = v13[256];
    v17 = *(_QWORD*)(v4 + 8);
    v18 = a2 + v15;
    v19 = a3 + v16;
    v20 = *(unsigned __int8*)(v17 + v10 + 1096);
    if (v20 >= 0x10 &&
        (v9[(unsigned __int8)v12 + 768] & (unsigned __int8)v20) != 0) {
      v18 += v15;
      v19 += v16;
      v14 |= v9[v12 + 768];
    }
    if ((unsigned __int8)v5[18] <=
            (unsigned int)(unsigned __int8)(v18 - v5[16]) ||
        (unsigned __int8)v5[19] <=
            (unsigned int)(unsigned __int8)(v19 - v5[17])) {
      goto LABEL_7;
    }
    v21 = v18 + 32 * v19;
    v22 = v17 + 64;
    v23 = *(_DWORD*)(v17 + 2672);
    if (v21 >= 0x400) {
      v21 = 0;
    }
    v11 = *(unsigned __int8*)(v22 + v21);
    v24 = *(_DWORD*)(v17 + 2664);
    if ((v23 <= (unsigned __int8)(v18 - v24) ||
         *(_DWORD*)(v17 + 2676) <=
             (int)(unsigned __int8)(v19 - *(_BYTE*)(v17 + 2668))) &&
        (v23 <= (unsigned __int8)(a2 - v24) ||
         *(_DWORD*)(v17 + 2676) <=
             (int)(unsigned __int8)(a3 - *(_DWORD*)(v17 + 2668))) &&
        v11 < *(unsigned __int8*)(v22 + v10)) {
      v11 = 0;
    }
    if (v7 < v11) {
    LABEL_7:
      v11 = v7;
      goto LABEL_8;
    }
    v25 = *(_QWORD*)(a1 + 184);
    if (v25 == 0) {
      v25 = GameData_21ca2f0;
      *(_QWORD*)(a1 + 184) = GameData_21ca2f0;
    }
    v26 = a3;
    v27 = GameRoutine_747df0(*(_QWORD*)(v25 + 8), a2, a3,
                             *(_BYTE*)(*(_QWORD*)(v25 + 8) + 5LL));
    v28 = *(_QWORD*)(a1 + 184);
    v29 = v27;
    if (v28 == 0) {
      v28 = GameData_21ca2f0;
      *(_QWORD*)(a1 + 184) = GameData_21ca2f0;
    }
    v30 = GameRoutine_747df0(*(_QWORD*)(v28 + 8), v18, v19,
                             *(_BYTE*)(*(_QWORD*)(v28 + 8) + 5LL));
    if (v29 == 255 && v30 == 255) {
      a2 = v35;
      v10 = v33;
      v4 = v34;
      v11 = v7;
      a3 = v26;
      v9 = GameData_212cf50;
    }
    else {
      v10 = v33;
      v4 = v34;
      a2 = v35;
      a3 = v26;
      v9 = GameData_212cf50;
      if ((*(_BYTE*)(*(_QWORD*)(v34 + 8) + v33 + 1096) & v14) == 0) {
        goto LABEL_7;
      }
      v31 = v37;
      if (v7 != v11) {
        v31 = 0;
      }
      v37 = v31 + 1;
      v36[v31] = v14;
    }
  LABEL_8:
    ++v8;
    v7 = v11;
  } while (v8 != 4);
  if (v37 <= 0) {
    return 0;
  }
  else {
    return v36[0];
  }
}

__int64 IRoute_751080(unsigned int* a1, __int64 a2)
{
  __int64 result;
  unsigned int v4;
  unsigned int v5;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  char* v10;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  unsigned int v20;
  unsigned __int8* v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  unsigned __int8* v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  unsigned int v32;
  unsigned __int8* v33;
  __int64 v34;
  unsigned int v35;
  int v36;
  unsigned int v37;

  if ((game_map_IRoute_TryGetEncountPos_alt1(a1, &v37, &v36, a2) & 1) != 0) {
    result = v37;
    v4 = a1[37];
    v5 = a1[38];
    if (v37 != v4 || v36 != v5) {
      v7 = a1[34];
      if ((int)v7 >= 1) {
        v8 = 0;
        v9 = a1[37];
        while (1) {
          v10 = (char*)GameData_212cf50 + *((unsigned __int8*)a1 + v8 + 8);
          v9 += *v10;
          v5 += v10[256];
          if (v37 == v9 && v36 == v5) {
            break;
          }
          if (v7 == ++v8) {
            goto LABEL_13;
          }
        }
        if ((v4 & 0x80000000) != 0 || v8 == 0) {
          return v4;
        }
        if ((int)v7 >= (int)v8) {
          v23 = v8;
        }
        else {
          v23 = a1[34];
        }
        v24 = v23 & 7;
        if (v23 - 1 >= 7) {
          v26 = (unsigned __int8*)a1 + 15;
          v27 = 0;
          if ((int)v7 >= (int)v8) {
            v28 = v8;
          }
          else {
            v28 = a1[34];
          }
          v29 = -(__int64)(v28 & 0x7FFFFFF8);
          do {
            v27 -= 8;
            v30 = v4 + *((char*)GameData_212cf50 + *(v26 - 7)) +
                  *((char*)GameData_212cf50 + *(v26 - 6)) +
                  *((char*)GameData_212cf50 + *(v26 - 5)) +
                  *((char*)GameData_212cf50 + *(v26 - 4)) +
                  *((char*)GameData_212cf50 + *(v26 - 3)) +
                  *((char*)GameData_212cf50 + *(v26 - 2));
            v31 = *(v26 - 1);
            v32 = *v26;
            v26 += 8;
            v4 = v30 + *((char*)GameData_212cf50 + v31) +
                 *((char*)GameData_212cf50 + v32);
          } while (v29 != v27);
          v25 = -v27;
        }
        else {
          v25 = 0;
        }
        result = v4;
        if (v24 != 0) {
          LODWORD(result) = v4;
          if ((int)v7 >= (int)v8) {
            LOBYTE(v7) = v8;
          }
          v33 = (unsigned __int8*)a1 + v25 + 8;
          v34 = v7 & 7;
          do {
            v35 = *v33++;
            --v34;
            result = (unsigned int)(result + *((char*)GameData_212cf50 + v35));
          } while (v34 != 0);
        }
        return result;
      }
    LABEL_13:
      result = v4;
    }
  }
  else {
    result = a1[37];
  }
  if ((result & 0x80000000) == 0) {
    v12 = a1[34];
    if (v12 > 0) {
      v13 = v12 & 7;
      if ((unsigned int)v12 >= 8) {
        v15 = (unsigned __int8*)a1 + 15;
        v16 = 0;
        v17 = -(__int64)(v12 & 0x7FFFFFF8);
        do {
          v16 -= 8;
          v18 = result + *((char*)GameData_212cf50 + *(v15 - 7)) +
                *((char*)GameData_212cf50 + *(v15 - 6)) +
                *((char*)GameData_212cf50 + *(v15 - 5)) +
                *((char*)GameData_212cf50 + *(v15 - 4)) +
                *((char*)GameData_212cf50 + *(v15 - 3)) +
                *((char*)GameData_212cf50 + *(v15 - 2));
          v19 = *(v15 - 1);
          v20 = *v15;
          v15 += 8;
          result = (unsigned int)(v18 + *((char*)GameData_212cf50 + v19) +
                                  *((char*)GameData_212cf50 + v20));
        } while (v17 != v16);
        v14 = -v16;
        if (v13 == 0) {
          return result;
        }
      }
      else {
        v14 = 0;
        if ((v12 & 7) == 0) {
          return result;
        }
      }
      v21 = (unsigned __int8*)a1 + v14 + 8;
      do {
        v22 = *v21++;
        --v13;
        result = (unsigned int)(result + *((char*)GameData_212cf50 + v22));
      } while (v13 != 0);
    }
  }
  return result;
}

__int64 IRoute_751300(unsigned int* a1, __int64 a2)
{
  __int64 result;
  unsigned int v4;
  unsigned int v5;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  char* v10;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  unsigned __int8* v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8* v27;
  char* v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  int v32;
  __int64 v33;
  int v34;
  unsigned __int8* v35;
  __int64 v36;
  unsigned int v37;
  unsigned int v38;
  int v39;

  if ((game_map_IRoute_TryGetEncountPos_alt1(a1, &v39, &v38, a2) & 1) != 0) {
    result = v38;
    v5 = a1[37];
    v4 = a1[38];
    if (v39 != v5 || v38 != v4) {
      v7 = a1[34];
      if ((int)v7 >= 1) {
        v8 = 0;
        v9 = a1[38];
        while (1) {
          v10 = (char*)GameData_212cf50 + *((unsigned __int8*)a1 + v8 + 8);
          v5 += *v10;
          v9 += v10[256];
          if (v39 == v5 && v38 == v9) {
            break;
          }
          if (v7 == ++v8) {
            goto LABEL_13;
          }
        }
        if ((v4 & 0x80000000) != 0 || v8 == 0) {
          return v4;
        }
        if ((int)v7 >= (int)v8) {
          v24 = v8;
        }
        else {
          v24 = a1[34];
        }
        v25 = v24 & 7;
        if (v24 - 1 >= 7) {
          v27 = (unsigned __int8*)a1 + 15;
          v28 = (char*)GameData_212cf50 + 256;
          v29 = 0;
          if ((int)v7 >= (int)v8) {
            v30 = v8;
          }
          else {
            v30 = a1[34];
          }
          v31 = -(__int64)(v30 & 0x7FFFFFF8);
          do {
            v29 -= 8;
            v32 = v4 + v28[*(v27 - 7)] + v28[*(v27 - 6)] + v28[*(v27 - 5)] +
                  v28[*(v27 - 4)] + v28[*(v27 - 3)] + v28[*(v27 - 2)];
            v33 = *(v27 - 1);
            v34 = *v27;
            v27 += 8;
            v4 = v32 + v28[v33] + v28[v34];
          } while (v31 != v29);
          v26 = -v29;
        }
        else {
          v26 = 0;
        }
        result = v4;
        if (v25 != 0) {
          LODWORD(result) = v4;
          if ((int)v7 >= (int)v8) {
            LOBYTE(v7) = v8;
          }
          v35 = (unsigned __int8*)a1 + v26 + 8;
          v36 = v7 & 7;
          do {
            v37 = *v35++;
            --v36;
            result =
                (unsigned int)(result + *((char*)GameData_212cf50 + v37 + 256));
          } while (v36 != 0);
        }
        return result;
      }
    LABEL_13:
      result = v4;
    }
  }
  else {
    result = a1[38];
  }
  if ((result & 0x80000000) == 0) {
    v12 = a1[34];
    if (v12 > 0) {
      v13 = v12 & 7;
      if ((unsigned int)v12 >= 8) {
        v15 = (unsigned __int8*)a1 + 15;
        v16 = (char*)GameData_212cf50 + 256;
        v17 = 0;
        v18 = -(__int64)(v12 & 0x7FFFFFF8);
        do {
          v17 -= 8;
          v19 = result + v16[*(v15 - 7)] + v16[*(v15 - 6)] + v16[*(v15 - 5)] +
                v16[*(v15 - 4)] + v16[*(v15 - 3)] + v16[*(v15 - 2)];
          v20 = *(v15 - 1);
          v21 = *v15;
          v15 += 8;
          result = (unsigned int)(v19 + v16[v20] + v16[v21]);
        } while (v18 != v17);
        v14 = -v17;
        if (v13 == 0) {
          return result;
        }
      }
      else {
        v14 = 0;
        if ((v12 & 7) == 0) {
          return result;
        }
      }
      v22 = (unsigned __int8*)a1 + v14 + 8;
      do {
        v23 = *v22++;
        --v13;
        result =
            (unsigned int)(result + *((char*)GameData_212cf50 + v23 + 256));
      } while (v13 != 0);
    }
  }
  return result;
}

__int64 game_map_IRoute_TryGetEncountPos(__int64 a1, unsigned int* a2,
                                         unsigned int* a3, __int64 a4)
{
  int v5;
  _QWORD* v9;
  int v10;
  __int64 v11;
  char* v12;
  char* v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  int v18;
  __int64 result;
  __int64 v20;
  __int64 v21;
  char* v22;
  char* v23;
  unsigned int v25;
  unsigned int v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  unsigned __int8* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  unsigned __int8* v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  __int64 v44;
  unsigned __int8* v45;
  __int64 v46;
  int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  __int64 v52;
  unsigned __int8* v53;
  int v54;
  __int64 v55;
  __int64 v57;
  _QWORD v58[4];
  _QWORD* v59;
  int v60;
  int v61;

  *a3 = -1;
  *a2 = -1;
  if ((*(_BYTE*)(GameData_21ca2f8 + 21) & 2) == 0) {
    return 0;
  }
  v5 = *(_DWORD*)(a1 + 148);
  v58[2] = a2;
  v58[3] = a3;
  v58[0] = GameData_1f95488;
  v58[1] = a1;
  v9 = v58;
  v59 = v58;
  if ((v5 & 0x80000000) == 0) {
    v10 = *(_DWORD*)(a1 + 152);
    v60 = v10;
    v61 = v5;
    game_map_IRoute_TryGetEncountPos_lambda0_Invoke_alt1(v58, &v61, &v60);
    if (*(int*)(a1 + 136) >= 1) {
      v11 = 0;
      v12 = (char*)GameData_212cf50;
      do {
        v13 = &v12[*(unsigned __int8*)(a1 + 8 + v11)];
        v5 += *v13;
        v10 += v13[256];
        v60 = v10;
        v61 = v5;
        if (v59 == nullptr) {
          GameRoutine_60a310_alt1(0);
        }
        (*(void (**)(_QWORD*, int*, int*))(*v59 + 48LL))(v59, &v61, &v60);
        ++v11;
      } while (v11 < *(int*)(a1 + 136));
    }
    v9 = v59;
    if (v59 != v58) {
      if (v59 != nullptr) {
        v14 = 40;
      LABEL_11:
        (*(void (**)(__int64))(*v9 + v14))((__int64)v9);
      }
      v15 = *a2;
      if ((*a2 & 0x80000000) == 0) {
        v16 = *a3;
        v17 = *(_DWORD*)(a1 + 148);
        v18 = *(_DWORD*)(a1 + 152);
        if (v15 == v17 && v16 == v18) {
          return 1;
        }
        v20 = *(unsigned int*)(a1 + 136);
        if ((int)v20 >= 1) {
          v21 = 0;
          v22 = (char*)GameData_212cf50;
          while (1) {
            v23 = (char*)GameData_212cf50 + *(unsigned __int8*)(a1 + 8 + v21);
            v17 += *v23;
            v18 += v23[256];
            if (v15 == v17 && v16 == v18) {
              break;
            }
            if (v20 == ++v21) {
              return 0;
            }
          }
          v25 = v21 + 1;
          v57 = a1 + 8;
          while (1) {
            v26 = *(_DWORD*)(a1 + 148);
            v27 = v25 - 1;
            if ((v26 & 0x80000000) == 0) {
              v28 = *(_DWORD*)(a1 + 136);
              v29 = v28 >= v27 ? v25 - 1 : *(_DWORD*)(a1 + 136);
              if (v29 >= 1) {
                if ((unsigned int)v29 >= 8) {
                  v31 = (unsigned __int8*)(a1 + 15);
                  v32 = 0;
                  if (v28 >= (int)v21) {
                    v33 = v21;
                  }
                  else {
                    v33 = *(_DWORD*)(a1 + 136);
                  }
                  v34 = -(__int64)(v33 & 0x7FFFFFF8);
                  do {
                    v32 -= 8;
                    v35 = v26 + v22[*(v31 - 7)] + v22[*(v31 - 6)] +
                          v22[*(v31 - 5)] + v22[*(v31 - 4)] + v22[*(v31 - 3)] +
                          v22[*(v31 - 2)];
                    v36 = *(v31 - 1);
                    v37 = *v31;
                    v31 += 8;
                    v26 = v35 + v22[v36] + v22[v37];
                  } while (v34 != v32);
                  v30 = -v32;
                  if ((v29 & 7) == 0) {
                    goto LABEL_43;
                  }
                }
                else {
                  v30 = 0;
                  if ((v29 & 7) == 0) {
                    goto LABEL_43;
                  }
                }
                if (v28 >= (int)v21) {
                  LOBYTE(v28) = v21;
                }
                v38 = v28 & 7;
                v39 = (unsigned __int8*)(v57 + v30);
                do {
                  v40 = *v39++;
                  --v38;
                  v26 += v22[v40];
                } while (v38 != 0);
              }
            }
          LABEL_43:
            v41 = *(_DWORD*)(a1 + 152);
            if ((v41 & 0x80000000) == 0) {
              v42 = *(_DWORD*)(a1 + 136);
              v43 = v42 >= v27 ? v25 - 1 : *(_DWORD*)(a1 + 136);
              if (v43 >= 1) {
                if ((unsigned int)v43 >= 8) {
                  v45 = (unsigned __int8*)(a1 + 15);
                  v46 = 0;
                  if (v42 >= (int)v21) {
                    v47 = v21;
                  }
                  else {
                    v47 = *(_DWORD*)(a1 + 136);
                  }
                  v48 = -(__int64)(v47 & 0x7FFFFFF8);
                  do {
                    v46 -= 8;
                    v49 = v41 + v22[*(v45 - 7) + 256] + v22[*(v45 - 6) + 256] +
                          v22[*(v45 - 5) + 256] + v22[*(v45 - 4) + 256] +
                          v22[*(v45 - 3) + 256] + v22[*(v45 - 2) + 256];
                    v50 = *(v45 - 1);
                    v51 = *v45;
                    v45 += 8;
                    v41 = v49 + v22[v50 + 256] + v22[v51 + 256];
                  } while (v48 != v46);
                  v44 = -v46;
                  if ((v43 & 7) == 0) {
                    goto LABEL_61;
                  }
                }
                else {
                  v44 = 0;
                  if ((v43 & 7) == 0) {
                    goto LABEL_61;
                  }
                }
                if (v42 >= (int)v21) {
                  LOBYTE(v42) = v21;
                }
                v52 = v42 & 7;
                v53 = (unsigned __int8*)(v57 + v44);
                do {
                  v54 = *v53++;
                  --v52;
                  v41 += v22[v54 + 256];
                } while (v52 != 0);
              }
            }
          LABEL_61:
            v55 = *(_QWORD*)(a1 + 184);
            if (v55 == 0) {
              v55 = GameData_21ca2f0;
              *(_QWORD*)(a1 + 184) = GameData_21ca2f0;
            }
            if ((GameRoutine_747a00_alt1(*(_QWORD*)(v55 + 8), v26, v41, a4, 0) &
                 1) != 0) {
              return 1;
            }
            LODWORD(v21) = v21 - 1;
            result = 1;
            *a2 = v26;
            *a3 = v41;
            if (v25-- <= 1) {
              return result;
            }
          }
        }
      }
      return 0;
    }
  }
  v14 = 32;
  goto LABEL_11;
}

bool game_map_IRoute_IsSightOut(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5;
  char v6;
  int v7;
  _QWORD* v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  char* v15;
  char* v16;
  __int64 v17;
  _QWORD v19[4];
  _QWORD* v20;
  char v21;
  int v22;
  int v23;

  if ((*(_BYTE*)(GameData_21ca2f8 + 21) & 2) == 0) {
    return false;
  }
  if (a2 != 0 && (v5 = *(_QWORD*)(a2 + 440)) != 0) {
    v6 = *(_BYTE*)(v5 + 16);
  }
  else {
    v6 = 9;
  }
  if (((1 << v6) & 6) == 0) {
    return false;
  }
  v7 = a1[37];
  v8 = v19;
  v21 = 0;
  v19[0] = GameData_1f95508;
  v19[1] = &v21;
  v20 = v19;
  if ((v7 & 0x80000000) == 0) {
    v9 = a1[38];
    LOBYTE(v10) = 0;
    v11 = *GameData_212ce98[0];
    if (*(unsigned __int8*)(*GameData_212ce98[0] + 18) >
            (unsigned int)(unsigned __int8)(v7 -
                                            *(_BYTE*)(*GameData_212ce98[0] +
                                                      16)) &&
        *(unsigned __int8*)(v11 + 19) >
            (unsigned int)(unsigned __int8)(v9 - *(_BYTE*)(v11 + 17))) {
      if (*(_BYTE*)(GameData_21ca2f8 +
                    *(unsigned __int8*)(GameData_21ca2f8 + 24) + 16) == 1) {
        v12 = *(unsigned __int8*)(GameData_21ca2f8 + 24);
      }
      else {
        v12 = 0;
      }
      v10 = (*(_DWORD*)(*(_QWORD*)(v11 + 160) + (v12 << 7) +
                        4LL * ((v7 + 32 * v9) >> 5) + 8) >>
             v7) &
            1;
    }
    v13 = a1[34];
    v21 = v10;
    if (v13 >= 1) {
      v14 = 0;
      v15 = (char*)GameData_212cf50;
      do {
        v16 = &v15[*((unsigned __int8*)a1 + v14 + 8)];
        v7 += *v16;
        v9 += v16[256];
        v22 = v9;
        v23 = v7;
        if (v20 == nullptr) {
          GameRoutine_60a310(0, a2, a3, a4);
        }
        (*(void (**)(_QWORD*, int*, int*))(*v20 + 48LL))(v20, &v23, &v22);
        ++v14;
      } while (v14 < (int)a1[34]);
    }
    v8 = v20;
    if (v20 != v19) {
      if (v20 != nullptr) {
        v17 = 40;
      LABEL_23:
        (*(void (**)(_QWORD*, __int64))(*v8 + v17))(v8, a2);
      }
      return v21 == 0;
    }
  }
  v17 = 32;
  goto LABEL_23;
}

__int64 IRoute_751ba0(__int64 result, __int64 a2, unsigned int a3,
                      unsigned int a4)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  char v9;
  int v10;
  __int64* v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  char* v20;
  unsigned __int8 v21;
  char* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  unsigned int v31;
  char v32;
  __int64 v33;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int8* v39;
  char* v40;
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  __int64 v45;
  int v46;
  int v47;
  char* v48;
  unsigned __int8* v49;
  int v50;
  char* v51;
  char v52[4];
  int v53;

  v4 = result;
  if (a2 != 0) {
    v5 = *(_QWORD*)(a2 + 440);
    v6 = a4;
    v7 = a3;
    if (v5 != 0) {
      v9 = *(_BYTE*)(v5 + 16);
    }
    else {
      v9 = 9;
    }
    v10 = *(_DWORD*)(a2 + 592);
    *(_BYTE*)(result + 176) = 0;
    *(_DWORD*)(result + 168) = a4;
    *(_DWORD*)(result + 172) = 0;
    *(_DWORD*)(result + 160) = a4;
    *(_DWORD*)(result + 164) = a3;
    *(_DWORD*)(result + 152) = a4;
    *(_DWORD*)(result + 156) = a3;
    *(_BYTE*)(result + 140) = v9;
    *(_DWORD*)(result + 136) = 0;
    *(_DWORD*)(result + 144) = v10;
    *(_DWORD*)(result + 148) = a3;
    v11 = GameData_212ce98[0];
    v12 = *GameData_212ce98[0];
    if (*(unsigned __int8*)(*GameData_212ce98[0] + 26) >
            (unsigned int)(unsigned __int8)(a3 -
                                            *(_BYTE*)(*GameData_212ce98[0] +
                                                      24)) &&
        *(unsigned __int8*)(v12 + 27) >
            (unsigned int)(unsigned __int8)(a4 - *(_BYTE*)(v12 + 25))) {
      v13 = a3 + 32 * a4;
      if (v13 >= 0x400) {
        v13 = 0;
      }
      if (*(int*)(a2 + 592) <= 1) {
        v25 = GameData_212c930;
        v26 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                         8LL * *(unsigned __int16*)(*(_QWORD*)(v12 + 72) +
                                                    2LL * v13 + 8));
        v53 = GameData_21d9780 & 0xFFF;
        result = game_HasSkill(a2 + 1744, &v53);
        if (v26 != 0 && (result & 1) == 0) {
          result = GameRoutine_68e4c0(v26, a2);
          if ((result & 1) != 0 && *(_BYTE*)(v26 + 57) == 11) {
            v27 = (char*)GameData_212cf50;
            do {
              v28 = *(unsigned __int8*)(v26 + 112);
              v52[0] = 3;
              v29 = &v27[v28];
              v7 += v29[1280];
              v6 += v29[1284];
              v30 = game_Unit_GetJob(a2);
              result = game_map_MapUtil_CanEnter(a2, v30, v7, v6, v52);
              if ((result & 1) == 0) {
                break;
              }
              v31 = *(unsigned __int8*)(v26 + 112);
              v32 = v31 >= 4 ? 0 : 0x8040201u >> (8 * v31);
              v33 = *(int*)(v4 + 136);
              *(_DWORD*)(v4 + 136) = v33 + 1;
              *(_BYTE*)(v4 + 8 + v33) = v32;
              if (v7 == *(_DWORD*)(v4 + 148) && v6 == *(_DWORD*)(v4 + 152)) {
                break;
              }
              v35 = v7 + 32 * v6;
              if (v35 >= 0x400) {
                v35 = 0;
              }
              v26 =
                  *(_QWORD*)(*(_QWORD*)(*v25 + 64) +
                             8LL * *(unsigned __int16*)(*(_QWORD*)(*v11 + 72) +
                                                        2LL * v35 + 8));
            } while (*(_BYTE*)(v26 + 57) == 11);
          }
        }
      }
      v14 = *(_DWORD*)(v4 + 148);
      v15 = *(_DWORD*)(v4 + 152);
      v16 = *(_QWORD*)(v4 + 184);
      if (v16 == 0) {
        v16 = GameData_21ca2f0;
        *(_QWORD*)(v4 + 184) = GameData_21ca2f0;
      }
      LODWORD(v17) = *(_DWORD*)(v4 + 136);
      if ((int)v17 < 1) {
        v19 = 0;
      }
      else {
        v18 = 0;
        v19 = 0;
        v20 = (char*)GameData_212cf50;
        do {
          v23 = *(unsigned __int8*)(v4 + 8 + v18);
          v24 = *(_QWORD*)(v16 + 8);
          if (v23 <= 0xF) {
            v21 = *(_BYTE*)(v24 + 5);
          }
          else {
            v21 = 8;
          }
          v22 = &v20[v23];
          v14 += *v22;
          v15 += v22[256];
          result = GameRoutine_747df0(v24, v14, v15, v21);
          v17 = *(int*)(v4 + 136);
          v19 += result;
          ++v18;
        } while (v18 < v17);
        v14 = *(_DWORD*)(v4 + 148);
        v15 = *(_DWORD*)(v4 + 152);
      }
      *(_DWORD*)(v4 + 172) = v19;
      *(_DWORD*)(v4 + 156) = v14;
      *(_DWORD*)(v4 + 160) = v15;
      if ((_DWORD)v17 != 0) {
        v36 = v17 & 3;
        if ((unsigned int)v17 >= 4) {
          v38 = (unsigned int)v17 & 0xFFFFFFFC;
          v39 = (unsigned __int8*)(v4 + 11);
          v37 = 0;
          v40 = (char*)GameData_212cf50;
          do {
            v41 = *(v39 - 3);
            v37 += 4;
            v42 = v14 + v40[v41];
            *(_DWORD*)(v4 + 156) = v42;
            LODWORD(v41) = v15 + v40[v41 + 256];
            *(_DWORD*)(v4 + 160) = v41;
            v43 = *(v39 - 2);
            v44 = v42 + v40[v43];
            *(_DWORD*)(v4 + 156) = v44;
            LODWORD(v41) = v41 + v40[v43 + 256];
            *(_DWORD*)(v4 + 160) = v41;
            v45 = *(v39 - 1);
            v46 = v44 + v40[v45];
            *(_DWORD*)(v4 + 156) = v46;
            LODWORD(v41) = v41 + v40[v45 + 256];
            *(_DWORD*)(v4 + 160) = v41;
            v47 = *v39;
            v39 += 4;
            v14 = v46 + v40[v47];
            *(_DWORD*)(v4 + 156) = v14;
            v15 = v41 + v40[v47 + 256];
            *(_DWORD*)(v4 + 160) = v15;
          } while (v38 != v37);
        }
        else {
          v37 = 0;
        }
        if (v36 != 0) {
          v48 = (char*)GameData_212cf50;
          v49 = (unsigned __int8*)(v37 + v4 + 8);
          do {
            v50 = *v49++;
            --v36;
            v51 = &v48[v50];
            v14 += *v51;
            *(_DWORD*)(v4 + 156) = v14;
            v15 += v51[256];
            *(_DWORD*)(v4 + 160) = v15;
          } while (v36 != 0);
        }
      }
    }
  }
  else {
    *(_DWORD*)(result + 172) = 0;
    *(_BYTE*)(result + 176) = 0;
    *(_DWORD*)(result + 136) = 0;
    *(_DWORD*)(result + 144) = 1;
    *(_BYTE*)(result + 140) = 9;
  }
  return result;
}

__int64 game_map_IRoute_TryGetEncountPos_lambda0_Invoke(__int64 result, int* a2,
                                                        int* a3)
{
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  int v21;
  int v22;
  __int64 v23;
  char* v24;
  int v25;
  char* v26;
  char* v27;
  __int64 v28;

  if ((**(_DWORD**)(result + 16) & 0x80000000) == 0) {
    return result;
  }
  v3 = *(_QWORD*)(result + 8);
  v4 = *a2;
  v5 = *a3;
  v6 = result;
  v7 = *(unsigned __int8*)(v3 + 140);
  v8 = *(_DWORD*)(v3 + 144);
  if (v8 < 2) {
    LODWORD(v11) = v4 + 32 * v5;
    if ((unsigned int)v11 >= 0x400) {
      v11 = 0;
    }
    else {
      v11 = (unsigned int)v11;
    }
    v12 = *(_QWORD*)(*GameData_212ce98[0] + 96) + v11;
    v13 = *(unsigned __int8*)(v12 + 8);
    if (*(_BYTE*)(v12 + 8) != 0) {
      v14 = *(_QWORD*)(GameData_21ca310 + 56) +
            2224LL * *(unsigned __int8*)(v12 + 8);
      if (v13 <= 0xFA && v14 != 2224 && *(_QWORD*)(v14 - 1832) != 0) {
        v16 = *(unsigned __int8*)(*(_QWORD*)(v14 - 1784) + 16LL);
        if (v16 != v7) {
          if (*(_BYTE*)(*(_QWORD*)(v14 - 1784) + 16LL) != 0) {
            if (*(_BYTE*)(v3 + 140) == 0 && v16 == 3) {
              return result;
            }
          }
          else if (v7 == 3) {
            return result;
          }
          if ((*(_BYTE*)(v14 - 1807) & 0x10) == 0) {
            return result;
          }
        LABEL_42:
          result = IRoute_750de0(v3, v4, v5);
          if ((unsigned __int8)result < 0x10u) {
            **(_DWORD**)(v6 + 16) = v4;
          }
          else {
            v24 = (char*)GameData_212cf50 + (unsigned __int8)result;
            **(_DWORD**)(v6 + 16) = v4 + *v24;
            v5 += v24[256];
          }
          **(_DWORD**)(v6 + 24) = v5;
        }
      }
    }
  }
  else {
    v25 = 0;
    v26 = nullptr;
    v27 = nullptr;
    v28 = 0;
    result = (__int64)GameRoutine_74d660((__int64)&v25, v8, v4, v5);
    if (v26 != v27) {
      v9 = v26;
      v10 = *(_QWORD*)(*GameData_212ce98[0] + 96) + 8LL;
      do {
        v17 = *v9 + 32 * v9[1];
        if (v17 >= 0x400) {
          v17 = 0;
        }
        v18 = *(unsigned __int8*)(v10 + v17);
        if (*(_BYTE*)(v10 + v17) == 0) {
          goto LABEL_21;
        }
        v19 = *(_QWORD*)(GameData_21ca310 + 56) +
              2224LL * *(unsigned __int8*)(v10 + v17);
        if (v18 <= 0xFA && v19 != 2224 && *(_QWORD*)(v19 - 1832) != 0) {
          v21 = *(unsigned __int8*)(*(_QWORD*)(v19 - 1784) + 16LL);
          if (v21 != v7) {
            if (*(_BYTE*)(*(_QWORD*)(v19 - 1784) + 16LL) != 0) {
              if (v7 == 0 && v21 == 3) {
                goto LABEL_21;
              }
            }
            else if (v7 == 3) {
              goto LABEL_21;
            }
            if ((*(_BYTE*)(v19 - 1807) & 0x10) != 0) {
              v22 = 1;
              if (v26 == nullptr) {
                goto LABEL_41;
              }
              goto LABEL_38;
            }
          }
        }
      LABEL_21:
        v9 += 4;
      } while (v9 != v27);
    }
    v22 = 0;
    if (v26 != nullptr) {
    LABEL_38:
      v27 = v26;
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v26);
    }
  LABEL_41:
    if (v22 != 0) {
      goto LABEL_42;
    }
  }
  return result;
}

__int64 game_map_IRoute_IsSightOut_lambda0_Invoke(__int64 result, _DWORD* a2,
                                                  _DWORD* a3)
{
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  LOBYTE(v3) = 0;
  v4 = *GameData_212ce98[0];
  if (*(unsigned __int8*)(*GameData_212ce98[0] + 18) >
          (unsigned int)(unsigned __int8)(*a2 - *(_BYTE*)(*GameData_212ce98[0] +
                                                          16)) &&
      *(unsigned __int8*)(v4 + 19) >
          (unsigned int)(unsigned __int8)(*a3 - *(_BYTE*)(v4 + 17))) {
    v5 = *(_QWORD*)(v4 + 160);
    if (*(_BYTE*)(*GameData_212ce90[0] +
                  *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) == 1) {
      v6 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
    }
    else {
      v6 = 0;
    }
    v3 = (*(_DWORD*)(v5 + (v6 << 7) + 4LL * ((*a2 + 32 * *a3) >> 5) + 8) >>
          *a2) &
         1;
  }
  **(_BYTE**)(result + 8) |= v3;
  return result;
}

#pragma GCC visibility pop
