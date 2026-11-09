#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern _QWORD GameData_1b01768[4];
extern __int64 (*GameData_1fde9f0[])();
extern __int64 (*GameData_1fdea98[])();
extern __int64 (*GameData_1fdedb0[])();
extern __int64 (*GameData_1feca98[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212ce30;
extern _UNKNOWN* GameData_212ce38;
extern __int64* GameData_212d458[7];
extern __int64* GameData_212ea58;
extern __int64* GameData_212f038[3];
extern __int64* GameData_212f040[2];
extern __int64 GameData_21c9608;
extern __int64 GameData_2203490;
__n128 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b4ef0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b50a0(_QWORD);
__int64 GameRoutine_6b71e0(_QWORD);
__int64 GameRoutine_6b7f00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c47a00(_QWORD, _QWORD);
__int64 GameRoutine_c48320(_QWORD, _QWORD);
__int64 GameRoutine_d92a40(__int64 result);
__int64 GameRoutine_d930a0(_QWORD);
void __attribute__((noreturn)) GameRoutine_d95550(_QWORD);
__int64 GameRoutine_d95860(_QWORD);
__int64 GameRoutine_d964b0(_QWORD);
__n128 GameRoutine_d97500(_QWORD*, __n128 result);
void __attribute__((noreturn)) GameRoutine_da3110(long double);
__int64 GameRoutine_e73070(_QWORD, _QWORD);
__int64 GameRoutine_e9aba0(_QWORD, _QWORD);
__int64 GameRoutine_e9b550(_QWORD, _QWORD, _QWORD, long double);

__int64 GameHr_d93d00(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  unsigned int* v20;
  __int64 v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 i;
  unsigned __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned int* v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  unsigned int* v61;
  unsigned int v62;
  __int64 v63;
  __int64 v64;
  char* v65;
  __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 j;
  __int64 v88;
  __int64 v89;
  __int64* v90;
  __int64* v91;
  _QWORD* v92;
  __int64* v93;
  float v94;
  float v95;
  __int64 v96;
  __int64 v97;
  __int64* v98;
  __int64 v99;
  float v100;
  float v101;
  float v102;
  bool v105;
  bool v106;
  __int64 v108;
  __int64** v109;
  unsigned __int64 v110;
  __int64 v111;
  __int64 v112;
  char* v113;
  __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  char* v119;
  unsigned __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  unsigned __int64 v125;
  __int64 v126;
  __int64 result;
  __int64 v128;
  __int64* v129;
  __int64* v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  _QWORD v135[7];
  _BYTE v136[16];
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  _QWORD v142[7];
  __int16 v143;
  int v144;
  __int64 v145;
  __int64 v146;
  __int16 v147;
  __int64 v148;
  __int64* v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  char* v154;
  _QWORD v155[3];

  v147 = 0;
  v2 = *(_QWORD*)(a2 + 592);
  v3 = *(_QWORD*)(a2 + 576);
  v143 = 257;
  v145 = v2;
  v146 = v3;
  v148 = 0;
  v149 = nullptr;
  v150 = 0;
  v142[5] = 0;
  v142[6] = 0;
  v144 = 0;
  v142[4] = -1;
  memset(&v135[4], 0, 24);
  v142[0] = GameData_212ce30 + 2;
  memset(&v142[1], 0, 24);
  v135[0] = 0x2000;
  v135[1] = 256;
  v135[2] = 2048;
  v135[3] = 16;
  GameRoutine_6b4ef0(v136, v142, v135);
  if (*(_QWORD*)(*(_QWORD*)(v138 +
                            8 * ((unsigned __int64)(v141 + v140 - 1) >> 9)) +
                 8 * ((v141 + v140 - 1) & 0x1FF)) == 0) {
    goto LABEL_101;
  }
  v151 = 0x706F6F4C73690CLL;
  v154 = (char*)&v147;
  GameRoutine_c48320(v136, &v151);
  if ((v151 & 1) != 0 && v153 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v4 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4, v153);
  }
  v154 = (char*)&v147 + 1;
  v151 = 0x5265646F4D736914LL;
  v152 = 7105647;
  v5 = (__int64**)GameRoutine_c48320(v136, &v151);
  if ((v151 & 1) != 0 && v153 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v9 = 56;
    }
    v5 = (__int64**)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v9, v153);
  }
  v10 = *(_QWORD*)(*(_QWORD*)(v138 +
                              8 * ((unsigned __int64)(v141 + v140 - 1) >> 9)) +
                   8 * ((v141 + v140 - 1) & 0x1FF));
  if (v10 == 0) {
    goto LABEL_101;
  }
  v151 = 0x6E696F7079617712LL;
  v152 = 29556;
  if ((*(_BYTE*)v10 & 0x7F) == 8 &&
      (v11 = GameRoutine_1a09c70((char*)&v151 + 1), v12 = *(_QWORD*)(v10 + 1),
       v155[0] = (char*)&v151 + 1, v155[1] = v11,
       v5 = (__int64**)GameRoutine_6b7f00(v12, 0, v12,
                                          *(unsigned int*)(v12 + 4), v155),
       v13 != *(_DWORD*)(v12 + 4))) {
    v15 = *(unsigned int*)v5;
    if (v13 >= v15) {
      v17 = v13 - v15;
      v18 = __clz(v17 + 16);
      v16 =
          v5[2][27 - v18 + 1] +
          32LL * (unsigned int)(v17 - *((_DWORD*)GameData_212ce38 + 28 - v18));
    }
    else {
      v16 = (__int64)&v5[1][4 * v13];
    }
    v14 = v16 + 16;
    if ((v151 & 1) == 0) {
      goto LABEL_25;
    }
  }
  else {
    v14 = 0;
    if ((v151 & 1) == 0) {
      goto LABEL_25;
    }
  }
  if (v153 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v19 = 56;
    }
    v5 = (__int64**)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v19, v153);
  }
LABEL_25:
  if (v14 == 0 || (*(_BYTE*)v14 & 0x7F) != 7) {
    goto LABEL_101;
  }
  v20 = *(unsigned int**)(v14 + 1);
  v21 = v148;
  v22 = v149;
  v23 = v20[1];
  v24 = (__int64)v149 - v148;
  v25 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v149 - v148) >> 3);
  v26 = v23 - v25;
  if (v23 <= v25) {
    if (v23 >= v25) {
      goto LABEL_42;
    }
    v38 = v148 + 24LL * (unsigned int)v23;
    goto LABEL_41;
  }
  if (0xAAAAAAAAAAAAAAABLL * ((v150 - (__int64)v149) >> 3) >= v26) {
    GameRoutine_1a0ba50(
        v149, 0,
        24 * ((24 * (unsigned __int64)(unsigned int)v26 - 24) / 0x18) + 24, v6,
        v7, v8);
    v38 = (__int64)&v22[3 * ((24 * (unsigned __int64)(unsigned int)v26 - 24) /
                             0x18) +
                        3];
  LABEL_41:
    v149 = (__int64*)v38;
    goto LABEL_42;
  }
  if (0x5555555555555556LL * ((v150 - v148) >> 3) > v23) {
    v23 = 0x5555555555555556LL * ((v150 - v148) >> 3);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((v150 - v148) >> 3) >= 0x555555555555555LL) {
    v23 = 0xAAAAAAAAAAAAAAALL;
  }
  if (v23 > 0xAAAAAAAAAAAAAAALL) {
  LABEL_170:
    GameRoutine_60a210(v5);
  }
  v27 = 3 * v23;
  v28 = GameData_212bf68;
  v29 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 24 * v23, 16, 0);
  v30 = v29 + v24;
  v31 = v29;
  v32 = v29 + 8 * v27;
  v33 = 24 * ((24 * (unsigned __int64)(unsigned int)v26 - 24) / 0x18) + 24;
  GameRoutine_1a0ba50(v29 + v24, 0, v33, v34, v35, v36);
  GameRoutine_1a0b950(v31, v21, v24);
  v148 = v31;
  v149 = (__int64*)(v30 + v33);
  v150 = v32;
  if (v21 != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) == 0) {
      v37 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v28 + v37, v21);
  }
LABEL_42:
  v133 = v20[1];
  if ((_DWORD)v133 != 0) {
    v39 = 0;
    for (i = 0; i != v133; ++i) {
      v41 = *v20;
      if (i >= v41) {
        v43 = i - v41;
        v44 = __clz(v43 + 16);
        v42 = *(_QWORD*)(*((_QWORD*)v20 + 2) + 8 * (27 - v44) + 8) +
              16LL *
                  (unsigned int)(v43 - *((_DWORD*)GameData_212ce38 + 28 - v44));
      }
      else {
        v42 = *((_QWORD*)v20 + 1) + 16 * i;
      }
      v45 = v138;
      v46 = ((v139 - v138) << 6) - 1;
      if (v139 == v138) {
        v46 = 0;
      }
      v47 = v141 + v140;
      if (v46 == v141 + v140) {
        GameRoutine_6b71e0(&v137);
        v45 = v138;
        v47 = v141 + v140;
      }
      *(_QWORD*)(*(_QWORD*)(v45 + 8 * (v47 >> 9)) + 8 * (v47 & 0x1FF)) = v42;
      v48 = v141++;
      v49 = *(_QWORD*)(*(_QWORD*)(v138 +
                                  8 * ((unsigned __int64)(v140 + v48) >> 9)) +
                       8 * ((v140 + v48) & 0x1FF));
      if (v49 == 0) {
        goto LABEL_94;
      }
      v50 = v148;
      v151 = 0x65756C61760ALL;
      if ((*(_BYTE*)v49 & 0x7F) == 8 &&
          (v51 = GameRoutine_1a09c70((char*)&v151 + 1),
           v52 = *(_QWORD*)(v49 + 1), v155[0] = (char*)&v151 + 1, v155[1] = v51,
           v53 = (unsigned int*)GameRoutine_6b7f00(
               v52, 0, v52, *(unsigned int*)(v52 + 4), v155),
           v54 != *(_DWORD*)(v52 + 4))) {
        v56 = *v53;
        if (v54 >= v56) {
          v58 = v54 - v56;
          v59 = __clz(v58 + 16);
          v57 = *(_QWORD*)(*((_QWORD*)v53 + 2) + 8 * (27 - v59) + 8) +
                32LL * (unsigned int)(v58 -
                                      *((_DWORD*)GameData_212ce38 + 28 - v59));
        }
        else {
          v57 = *((_QWORD*)v53 + 1) + 32 * v54;
        }
        v55 = v57 + 16;
        if ((v151 & 1) != 0) {
        LABEL_62:
          if (v153 != 0) {
            v60 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v60 = 56;
            }
            GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v60, v153);
          }
        }
      }
      else {
        v55 = 0;
        if ((v151 & 1) != 0) {
          goto LABEL_62;
        }
      }
      if (v55 != 0 && (*(_BYTE*)v55 & 0x7F) == 7) {
        v61 = *(unsigned int**)(v55 + 1);
        v62 = v61[1];
        v63 = v62 >= 6 ? 6LL : v62;
        if (v62 != 0) {
          v64 = 16 * v63;
          v65 = (char*)(v50 + v39);
          v66 = 0;
          v67 = 0;
          do {
            v68 = *v61;
            if (v67 >= v68) {
              v70 = v67 - v68;
              v71 = __clz(v70 + 16);
              v69 = *(_QWORD*)(*((_QWORD*)v61 + 2) + 8 * (27 - v71) + 8) +
                    16LL * (unsigned int)(v70 - *((_DWORD*)GameData_212ce38 +
                                                  28 - v71));
            }
            else {
              v69 = *((_QWORD*)v61 + 1) + v66;
            }
            v72 = v138;
            v73 = ((v139 - v138) << 6) - 1;
            if (v139 == v138) {
              v73 = 0;
            }
            v74 = v141 + v140;
            if (v73 == v141 + v140) {
              GameRoutine_6b71e0(&v137);
              v72 = v138;
              v74 = v141 + v140;
            }
            *(_QWORD*)(*(_QWORD*)(v72 + 8 * (v74 >> 9)) + 8 * (v74 & 0x1FF)) =
                v69;
            LOWORD(v151) = 0;
            v154 = v65;
            ++v141;
            GameRoutine_c47a00(v136, &v151);
            if ((v151 & 1) != 0 && v153 != 0) {
              v75 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v75 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v75, v153);
            }
            v76 = v139;
            v77 = v141;
            v78 = ((v139 - v138) << 6) - 1;
            if (v139 == v138) {
              v78 = 0;
            }
            --v141;
            if ((unsigned __int64)(v78 - (v77 + v140) + 1) >= 0x400) {
              v79 = *(_QWORD*)(v139 - 8);
              if (v79 != 0) {
                v80 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v80 = 56;
                }
                GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v80, v79);
                v76 = v139;
              }
              v139 = v76 - 8;
            }
            ++v67;
            v66 += 16;
            v65 += 4;
          } while (v64 != v66);
        }
      }
    LABEL_94:
      v81 = v139;
      v82 = v141;
      v83 = ((v139 - v138) << 6) - 1;
      if (v139 == v138) {
        v83 = 0;
      }
      --v141;
      if ((unsigned __int64)(v83 - (v82 + v140) + 1) >= 0x400) {
        v84 = *(_QWORD*)(v139 - 8);
        if (v84 != 0) {
          v85 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v85 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v85, v84);
          v81 = v139;
        }
        v139 = v81 - 8;
      }
      v39 += 24;
    }
  }
LABEL_101:
  if (*(unsigned __int8*)(a1 + 12) != (unsigned __int8)v147) {
    *(_BYTE*)(a1 + 12) = v147;
    (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
  }
  if (*(unsigned __int8*)(a1 + 13) != HIBYTE(v147)) {
    *(_BYTE*)(a1 + 13) = HIBYTE(v147);
    (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
  }
  v86 = *(_QWORD*)(a1 + 56);
  for (j = *(_QWORD*)(a1 + 64); j != v86; j -= 16) {
    v88 = *(_QWORD*)(j - 8);
    if (v88 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v88 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v88 + 16LL))(v88);
      GameRoutine_1a09c50(v88);
    }
  }
  v89 = a1;
  v90 = (__int64*)v148;
  v91 = v149;
  *(_QWORD*)(a1 + 64) = v86;
  if (v90 != v91) {
    v92 = (_QWORD*)GameData_212bf68;
    v93 = GameData_212f038[0] + 2;
    v129 = GameData_212f038[0] + 2;
    v131 = GameData_212f040[0] + 2;
    do {
      v94 = *((float*)v90 + 2);
      v95 = *((float*)v90 + 5);
      v134 = *v90;
      v132 = *(__int64*)((char*)v90 + 12);
      v96 = GameRoutine_651b90(*v92, 136, 16, 0);
      *(_QWORD*)(v96 + 16) = 0;
      *(_QWORD*)v96 = GameData_1fdea98;
      *(_QWORD*)(v96 + 72) = 0;
      *(_QWORD*)(v96 + 80) = 0;
      *(_QWORD*)(v96 + 48) = 0;
      *(_QWORD*)(v96 + 56) = 0;
      *(_DWORD*)(v96 + 64) = 0;
      v97 = *v92;
      *(_QWORD*)(v96 + 8) = 0;
      *(_QWORD*)(v96 + 24) = v93;
      v98 = (__int64*)(v96 + 24);
      *(_QWORD*)(v96 + 32) = v89;
      *(_QWORD*)(v96 + 40) = 0;
      v5 = (__int64**)GameRoutine_651b90(v97, 32, 16, 0);
      v99 = *(_QWORD*)(v96 + 80);
      v5[1] = nullptr;
      v5[2] = nullptr;
      *v5 = v131;
      *(_QWORD*)(v96 + 72) = v5 + 3;
      *(_QWORD*)(v96 + 80) = v5;
      if (v99 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v99 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v99 + 16LL))(v99);
        GameRoutine_1a09c50(v99);
      }
      v100 = *(float*)(v96 + 40);
      v101 = *(float*)(v96 + 44);
      v102 = *(float*)(v96 + 48);
      *(_QWORD*)(v96 + 24) = GameData_1fde9f0;
      *(_QWORD*)(v96 + 88) = 0;
      *(_QWORD*)(v96 + 96) = 0;
      *(_QWORD*)(v96 + 104) = 0;
      *(_QWORD*)(v96 + 112) = 0;
      *(_QWORD*)(v96 + 120) = 0;
      *(_QWORD*)(v96 + 128) = 0;
      if (v100 != *(float*)&v134 || v101 != *((float*)&v134 + 1) ||
          v102 != v94) {
        *(_QWORD*)(v96 + 40) = v134;
        *(float*)(v96 + 48) = v94;
        v5 = (__int64**)GameRoutine_d964b0(v98);
      }
      if (*(_BYTE*)(v89 + 13) == 1) {
        if (*(_BYTE*)(*(_QWORD*)(v96 + 32) + 13LL) != 0) {
          if (*(float*)(v96 + 52) != 0.0f ||
              (*(float*)(v96 + 56) == 0.0f ? (v105 = *(float*)(v96 + 60) == v95)
                                           : (v105 = false),
               !v105)) {
            *(_QWORD*)(v96 + 52) = 0;
          LABEL_142:
            v108 = *v98;
            *(float*)(v96 + 60) = v95;
            v5 = (__int64**)(*(__int64 (**)(__int64*))(v108 + 24))(v98);
          }
        }
      }
      else if ((*(_BYTE*)(*(_QWORD*)(v96 + 32) + 13LL) & 1) == 0) {
        v106 = *(float*)(v96 + 52) == *(float*)&v132 &&
               *(float*)(v96 + 56) == *((float*)&v132 + 1);
        if (!v106 || *(float*)(v96 + 60) != v95) {
          *(_QWORD*)(v96 + 52) = v132;
          goto LABEL_142;
        }
      }
      v109 = *(__int64***)(v89 + 64);
      v110 = *(_QWORD*)(v89 + 72);
      if ((unsigned __int64)v109 >= v110) {
        v112 = *(_QWORD*)(v89 + 56);
        v113 = (char*)v109 - v112;
        v114 = ((__int64)v109 - v112) >> 4;
        v115 = v114 + 1;
        if ((unsigned __int64)(v114 + 1) >> 60 != 0) {
          GameRoutine_d95550(v5);
        }
        v116 = v110 - v112;
        if (v116 >> 3 > v115) {
          v115 = v116 >> 3;
        }
        if ((unsigned __int64)v116 >= 0x7FFFFFFFFFFFFFF0LL) {
          v117 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v117 = v115;
        }
        if (v117 >> 60 != 0) {
          goto LABEL_170;
        }
        v118 = GameRoutine_651b90(*v92, 16 * v117, 16, 0);
        v119 = &v113[v118];
        v120 = v118 + 16 * v117;
        *(_QWORD*)v119 = v98;
        *((_QWORD*)v119 + 1) = v96;
        v121 = (__int64)&v113[v118 + -16 * v114];
        v111 = (__int64)&v113[v118 + 16];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v96 + 8), 1u,
                                  memory_order_relaxed);
        GameRoutine_1a0b950(v121, v112, v113);
        v89 = a1;
        *(_QWORD*)(a1 + 56) = v121;
        *(_QWORD*)(a1 + 64) = v111;
        *(_QWORD*)(a1 + 72) = v120;
        v92 = (_QWORD*)GameData_212bf68;
        if (v112 != 0) {
          v122 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v122 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v122, v112);
        }
        v93 = v129;
      }
      else {
        *v109 = v98;
        v109[1] = (__int64*)v96;
        v111 = (__int64)(v109 + 2);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v96 + 8), 1u,
                                  memory_order_relaxed);
      }
      *(_QWORD*)(v89 + 64) = v111;
      if (atomic_fetch_add((atomic_ullong* volatile)(v96 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v96 + 16LL))(v96);
        GameRoutine_1a09c50(v96);
      }
      v90 += 3;
    } while (v90 != v91);
  }
  if (*(_BYTE*)(v89 + 12) == 1) {
    GameRoutine_d92a40(v89);
  }
  else {
    GameRoutine_d930a0(v89);
  }
  v123 = *(_QWORD*)(v89 + 56);
  if (*(_QWORD*)(v89 + 64) != v123) {
    v124 = 0;
    v125 = 0;
    do {
      v126 = *(_QWORD*)(v123 + v124);
      v124 += 16;
      *(_DWORD*)(v126 + 40) = v125++;
      v123 = *(_QWORD*)(v89 + 56);
    } while (v125 < (*(_QWORD*)(v89 + 64) - v123) >> 4);
  }
  GameRoutine_d95860(v89);
  GameRoutine_6b50a0(v136);
  result = (*(__int64 (**)(_QWORD*))(v142[0] + 24LL))(v142);
  if (v148 != 0) {
    v149 = (__int64*)v148;
    v128 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v128 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v128, v148);
  }
  return result;
}

__int64 GameHr_d975f0(_QWORD* a1, __n128 a2)
{
  __int64 v3;
  __int64 v4;

  *a1 = GameData_1fdedb0;
  GameRoutine_d97500(a1, a2);
  v3 = a1[3];
  if (v3 != 0) {
    GameRoutine_1a09c50(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
    v4 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4, a1);
}

void GameHr_da5c00(__int64* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  long double v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  v1 = *(_QWORD**)(GameData_21c9608 + 904);
  v2 = *(_QWORD**)(GameData_21c9608 + 912);
  if (v1 != v2) {
    v4 = GameData_212d458[0];
    do {
      v5 = *(_QWORD**)(*v4 + 24);
      v6 = *(_QWORD**)(*v4 + 32);
      if (v5 != v6) {
        while (1) {
          v7 = *v5;
          if (*(_QWORD*)(*v5 + 264LL) == *v1) {
            break;
          }
          v5 += 2;
          if (v5 == v6) {
            goto LABEL_3;
          }
        }
        v8 = v5[1];
        if (v8 != 0) {
          v9 = v5[1];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                    memory_order_relaxed);
          v10 = GameRoutine_1a0a0c0(v9);
          *(__n128*)&v12 = GameRoutine_1a09c50(v8);
          if (v10 != 0) {
            v14 = (_QWORD*)a1[1];
            v13 = a1[2];
            if ((unsigned __int64)v14 >= v13) {
              v16 = *a1;
              v17 = (__int64)v14 - *a1;
              v18 = (v17 >> 3) + 1;
              if (v18 >> 61 != 0) {
                GameRoutine_da3110(v12);
              }
              v19 = v13 - v16;
              if (v19 >> 2 > v18) {
                v18 = v19 >> 2;
              }
              if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
                v20 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v20 = v18;
              }
              if (v20 != 0) {
                if (v20 >> 61 != 0) {
                  GameRoutine_60a210(v11);
                }
                v21 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v20,
                                         16, 0);
              }
              else {
                v21 = 0;
              }
              v22 = v21 + 8 * v20;
              v23 = v21 + v17 - 8 * (v17 >> 3);
              *(_QWORD*)(v21 + v17) = v7;
              v15 = v21 + v17 + 8;
              GameRoutine_1a0b950(v23, v16, v17);
              *a1 = v23;
              a1[2] = v22;
              if (v16 != 0) {
                v24 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v24 = 56;
                }
                GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v24, v16);
              }
              v4 = GameData_212d458[0];
            }
            else {
              *v14 = v7;
              v15 = (__int64)(v14 + 1);
            }
            a1[1] = v15;
            if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64, long double))(*(_QWORD*)v10 + 16LL))(v10,
                                                                         v12);
              GameRoutine_1a09c50(v10);
            }
          }
        }
      }
    LABEL_3:
      ++v1;
    } while (v1 != v2);
  }
}

__n128 GameHr_e9b1b0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __n128 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD v37[4];
  _QWORD* v38;

  v2 = a1[155];
  if (v2 != 0 && (v3 = GameRoutine_1a0a0c0(v2)) != 0) {
    v4 = a1[154];
    if (v4 != 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(v4 + 16) + 440LL);
      if (v5 != 0 &&
          (unsigned __int64)(v6 = *(unsigned __int8*)(v5 + 16)) <= 3) {
        v7 = GameData_1b01768[v6];
      }
      else {
        v7 = 3;
      }
      v9 = v3;
      v8 = *GameData_212ea58 + (v7 << 7) + 672;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v9 = 0;
      v8 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v10 = v3;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      GameRoutine_1a09c50(v10);
    }
  }
  else {
    v8 = 0;
    v9 = 0;
    v4 = 0;
  }
  v35 = 0;
  v36 = 0;
  v37[0] = GameData_1feca98;
  v37[1] = &v35;
  v38 = v37;
  GameRoutine_e9aba0(a1, v37);
  if (v38 == v37) {
    v12 = 32;
  }
  else {
    if (v38 == nullptr) {
      goto LABEL_18;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v38 + v12))((__int64)v38);
LABEL_18:
  if (v36 == 0) {
    goto LABEL_48;
  }
  v13 = GameRoutine_1a0a0c0(v36);
  v14 = v35;
  if (v13 != 0) {
    v15 = v35;
  }
  else {
    v15 = 0;
  }
  if (v36 != 0) {
    result = GameRoutine_1a09c50(v36);
  }
  if (v15 != 0) {
    v16 = *(_QWORD*)(*(_QWORD*)(v14 + 16) + 440LL);
    if (v16 != 0 &&
        (unsigned __int64)(v17 = *(unsigned __int8*)(v16 + 16)) <= 3) {
      v18 = GameData_1b01768[v17];
    }
    else {
      v18 = 3;
    }
    v19 = GameData_2203490 + (v18 << 7);
    v20 = *(_QWORD*)(v19 + 760);
    if (v20 != 0) {
      v21 = *(_QWORD*)(v19 + 752);
      v22 = *(_QWORD*)(v19 + 760);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                memory_order_relaxed);
      v23 = GameRoutine_1a0a0c0(v22);
      if (v23 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v24 = v23;
          (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
          GameRoutine_1a09c50(v24);
        }
        result = GameRoutine_1a09c50(v20);
        if (v21 != v15) {
          goto LABEL_45;
        }
        v25 = *(_QWORD*)(*(_QWORD*)(v14 + 16) + 440LL);
        if (v25 != 0 &&
            (unsigned __int64)(v26 = *(unsigned __int8*)(v25 + 16)) <= 3) {
          v27 = GameData_1b01768[v26];
        }
        else {
          v27 = 3;
        }
        v8 = GameData_2203490 + (v27 << 7) + 672;
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v9 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) != 0) {
          v4 = v14;
          v9 = v13;
          goto LABEL_45;
        }
        (*(void (**)(__int64, long double))(*(_QWORD*)v9 + 16LL))(
            v9, *(long double*)&result);
        v20 = v9;
        v9 = v13;
        v4 = v14;
      }
      result = GameRoutine_1a09c50(v20);
    }
  }
LABEL_45:
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v13 + 16LL))(
        v13, *(long double*)&result);
    result = GameRoutine_1a09c50(v13);
  }
LABEL_48:
  if (v8 != 0) {
    v28 = a1[157];
    if (v28 != 0) {
      v29 = GameRoutine_1a0a0c0(v28);
      if (v29 != 0) {
        v30 = v29;
        if (a1[156] != 0) {
          v33 = a1[156];
          v34 = v29;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                                    memory_order_relaxed);
          GameRoutine_e73070(v8, &v33);
          if (v34 != 0) {
            result = GameRoutine_1a09c50(v34);
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v30 + 16LL))(
              v30, *(long double*)&result);
          result = GameRoutine_1a09c50(v30);
        }
      }
    }
  }
  if (v4 != 0) {
    GameRoutine_e9b550(a1, *(unsigned int*)(v4 + 8), 2, *(long double*)&result);
  }
  v31 = a1[155];
  a1[154] = 0;
  a1[155] = 0;
  if (v31 != 0) {
    result = GameRoutine_1a09c50(v31);
  }
  v32 = a1[157];
  a1[156] = 0;
  a1[157] = 0;
  if (v32 != 0) {
    result = GameRoutine_1a09c50(v32);
  }
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v9 + 16LL))(
        v9, *(long double*)&result);
    return GameRoutine_1a09c50(v9);
  }
  return result;
}

#pragma GCC visibility pop
