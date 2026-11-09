#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern _QWORD GameData_1b01768[4];
extern int GameData_1b9abf0[];
extern __int64 (*GameData_1f8f7e8[])();
extern __int64 (*GameData_1fec818[])();
extern __int64 (*GameData_1ff12e8[])();
extern __int64 (*GameData_1ff2e90[])();
extern __int64 (*GameData_1ff2f68[])();
extern __int64 (*GameData_1ff2fe8[])();
extern __int64 (*GameData_1ff3068[])();
extern __int64 (*GameData_1ff3af8[])();
extern __int64 (*GameData_20002b8[])();
extern __int64 (*GameData_20003a0[])();
extern __int64 (*GameData_20004f8[])();
extern __int64 (*GameData_2000588[])();
extern __int64 (*GameData_2000608[])();
extern __int64 (*GameData_20023c8[])();
extern __int64 (*GameData_20023f0[])();
extern __int64 (*GameData_2002510[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cea0;
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cff0[4];
extern __int64 GameData_212d020[5];
extern __int64 GameData_212e368[4];
extern __int64* GameData_212ea58;
extern __int64 GameData_21ca310;
extern __int64 GameData_21ec7a8;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3cb8;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern char GameData_2216850;
extern char GameData_2216858;
extern __int64 GameData_226b928;
__int64 GameRoutine_10181a0(_QWORD, _QWORD);
__n128 GameRoutine_10c830(_QWORD, float);
__int64 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_176c370(_QWORD, _QWORD);
__int64 GameRoutine_1946dd0(_QWORD, _QWORD);
__int64 GameRoutine_1949b00(_QWORD);
__int64 GameRoutine_1949c20(_QWORD, _QWORD);
__int64 GameRoutine_195a5c0(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0a8a0(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_65a940(_QWORD);
__int64 GameRoutine_6ea8c0(_QWORD);
__int64 GameRoutine_710540(_QWORD, _QWORD);
__int64 GameRoutine_74d660(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_74db00(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 GameRoutine_844950(_QWORD, _QWORD);
__int64 GameRoutine_844ee0(_QWORD);
__int64 GameRoutine_8450e0(void);
__int64 GameRoutine_a5e4c0(_QWORD, _QWORD);
__int64 GameRoutine_cb10a0(void);
__int64 GameRoutine_d8cf60(_QWORD, long double);
__int64 GameRoutine_e9a800(_QWORD, _QWORD);
__int64 GameRoutine_e9bcb0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f24160(void);
__int64 GameRoutine_f25050(_QWORD);
__int64 GameRoutine_f90cd0(_QWORD);
struct PseudoSret GameRoutine_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD, double, float);

_QWORD* GameHr_ef8a80(_QWORD* result, __int64 a2, __int64 a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;

  v3 = result[30];
  if (result[31] == v3) {
    return result;
  }
  v4 = result;
  v5 = *(_QWORD*)(v3 + 32);
  if (v5 == 0) {
    GameRoutine_60a310(0, a2, a3);
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 48LL))(v5);
  v6 = (_QWORD*)v4[30];
  v7 = (_QWORD*)v4[31];
  v8 = v6 + 6;
  if (v6 + 6 != v7) {
    while (1) {
      v9 = (_QWORD*)*(v8 - 2);
      *(v8 - 2) = 0;
      if (v8 - 6 == v9) {
        break;
      }
      if (v9 != nullptr) {
        v10 = 40;
      LABEL_12:
        (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
      }
      result = (_QWORD*)v8[4];
      if (result != nullptr) {
        if (v8 == result) {
          *(v8 - 2) = v8 - 6;
          result = (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD*))(*result + 24LL))(
              result, v8 - 6);
        }
        else {
          *(v8 - 2) = result;
          v8[4] = 0;
        }
      }
      else {
        *(v8 - 2) = 0;
      }
      v8 += 6;
      if (v8 == v7) {
        v7 = (_QWORD*)v4[31];
        v6 = v8 - 6;
        if (v8 - 6 == v7) {
          goto LABEL_18;
        }
      LABEL_24:
        while (2) {
          result = (_QWORD*)*(v7 - 2);
          v13 = v7 - 6;
          if (v7 - 6 != result) {
            if (result != nullptr) {
              v12 = 40;
            LABEL_22:
              result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v12))(
                  (__int64)result);
            }
            v7 -= 6;
            if (v13 == v6) {
              goto LABEL_18;
            }
            continue;
          }
          break;
        }
        v12 = 32;
        goto LABEL_22;
      }
    }
    v10 = 32;
    goto LABEL_12;
  }
  if (v6 != v7) {
    goto LABEL_24;
  }
LABEL_18:
  v11 = (_QWORD*)v4[30];
  v4[31] = v6;
  if (v6 != v11) {
    *((_DWORD*)v4 + 38) = 1;
  }
  return result;
}

__int64 GameHr_f093a0(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64* v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 result;
  __int64* v22;
  __int64* i;
  __int64 v24;
  _QWORD v25[4];
  _QWORD* v26;

  v1 = *(_QWORD**)(a1 + 56);
  v2 = *(_QWORD**)(a1 + 64);
  if (v1 == v2) {
    v7 = *(_QWORD*)(a1 + 56);
  }
  else {
    do {
      v4 = v1[1];
      if (v4 != 0) {
        v5 = GameRoutine_1a0a0c0(v4);
        if (v5 != 0) {
          v6 = v5;
          if (*v1 != 0) {
            (*(void (**)(_QWORD))(*(_QWORD*)*v1 + 16LL))(*v1);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
            GameRoutine_1a09c50(v6);
          }
        }
      }
      v1 += 2;
    } while (v1 != v2);
    v7 = *(_QWORD*)(a1 + 56);
    v1 = *(_QWORD**)(a1 + 64);
  }
  GameRoutine_1949b00(GameData_226b928);
  v8 = GameData_226b928;
  v9 = GameData_226b928 + 32;
  do {
    v10 = *(_DWORD*)(v8 + 8);
    v11 = (v10 + 1) & 0xFFFFFF;
    if (v10 + 1 <= 0) {
      v11 = -(-(v10 + 1) & 0xFFFFFF);
    }
    *(_DWORD*)(v8 + 8) = v11;
    v12 = atomic_load((unsigned __int64*)(v9 + 32LL * (v10 & 0x3F)));
    if (v12 != 0) {
      v10 = -1;
    }
  } while (v10 < 0);
  v13 = v10 | 0xC0000000;
  v14 = (unsigned __int64*)(v9 + 32LL * (v10 & 0x3F));
  v15 = ((__int64)v1 - v7) >> 4;
  GameRoutine_1a0a8a0(v14 + 1);
  v16 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 80, 16, 0);
  v16[2] = 0;
  v17 = v16;
  v18 = GameData_212e368[0];
  v16[8] = 0;
  *v16 = v18 + 16;
  v16[1] = 0;
  v19 = v14[3];
  v14[3] = (unsigned __int64)v17;
  if (v19 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v19 + 8LL))(v19);
  }
  atomic_store(v13, v14);
  v17[1] = v8;
  *((_DWORD*)v17 + 4) = v13;
  v25[2] = v15;
  v25[0] = GameData_1ff12e8;
  v25[1] = v7;
  v26 = v25;
  GameRoutine_a5e4c0(v25, v17 + 4);
  if (v26 == v25) {
    v20 = 32;
  }
  else {
    if (v26 == nullptr) {
      goto LABEL_25;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*v26 + v20))((__int64)v26);
LABEL_25:
  GameRoutine_1946dd0(*(_QWORD*)(v8 + 16), v13);
  result = GameRoutine_1949c20(GameData_226b928, v13);
  v22 = *(__int64**)(a1 + 56);
  for (i = *(__int64**)(a1 + 64); v22 != i; v22 += 2) {
    result = v22[1];
    if (result != 0) {
      result = GameRoutine_1a0a0c0(result);
      if (result != 0) {
        v24 = result;
        result = *v22;
        if (*v22 != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 32LL))(result);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
          result = GameRoutine_1a09c50(v24);
        }
      }
    }
  }
  return result;
}

__int64 GameHr_f242a0(__int64 a1, __int64* a2, int a3)
{
  __int64 result;
  char* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  char v15;
  char v16;
  __int64 v17;
  _BYTE* v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  _BYTE* v22;
  _BYTE* v23;
  __int64 v24;
  char v25;
  char v26;
  char v27;
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  char* v35;
  _QWORD* v36;
  int v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  bool v45;
  unsigned int v46;
  __int64 v47;
  unsigned int v48;
  unsigned int v50;
  __int64 v51;
  unsigned int v52;
  bool v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  int v59;
  int v60;
  int v61;
  __int64 v62;
  char v63;
  char v64;
  _QWORD* v65;
  _QWORD* v66;
  _QWORD* v67;
  __int64* v68;
  __int64 v69;
  __int64 v70;
  unsigned int v71;
  int v72;
  bool v73;
  __int64 v74;
  int v75;
  int j;
  int k;
  __int64 v78;
  char v79;
  char v80;
  _QWORD* v81;
  _QWORD* v82;
  _QWORD* v83;
  __int64* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  _QWORD* v97;
  _QWORD* v98;
  _QWORD* v99;
  __int64* v100;
  __int64 v101;
  __int64 v102;
  unsigned int v103;
  __int64 v104;
  __int64 v105;
  unsigned int v106;
  int v107;
  __int64 v108;
  int v109;
  int v110;
  int v111;
  int i;
  __int64 v113;
  _QWORD* v114;
  _QWORD* v115;
  _QWORD* v116;
  __int64* v117;
  __int64 v118;
  int v119;
  __int64* v120;
  __int64* v121;
  __int64* v122;
  __int64 v123;
  __int64 v124;
  _BYTE v125[3];
  __int16 v126;
  char v127;
  __int16 v128;
  int v129;
  _BYTE v130[3];
  __int16 v131;
  char v132;
  __int16 v133;
  int v134;
  _BYTE v135[3];
  __int16 v136;
  char v137;
  __int16 v138;
  int v139;
  _BYTE v140[3];
  __int16 v141;
  char v142;
  __int16 v143;
  int v144;
  _BYTE v145[3];
  __int16 v146;
  char v147;
  __int16 v148;
  int v149;
  _QWORD v150[2];
  __int64* v151;
  _QWORD* v152;
  __int64 v153;
  char* v154;
  char* v155;
  __int64 v156;
  __int64* v157;
  __int64* v158;
  int v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  int v164;
  int v165[5];

  result = GameRoutine_f25050(a1);
  if ((_DWORD)result != a3) {
    return result;
  }
  v162 = 0;
  v163 = 0;
  v9 = (__int64*)(a1 + 127160);
  v160 = 0;
  v161 = 0;
  v159 = -1;
  v157 = &v160;
  v158 = &v162;
  v10 = GameData_212cff0[0];
  v122 = a2;
  v11 = *GameData_212cff0[0];
  if (*GameData_212cff0[0] != 0 && *(_BYTE*)(v11 + 32) != 0 &&
      (unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) - 7) <=
          1) {
    if ((*(_DWORD*)(v11 + 48) & 0xFFF) == 0) {
      v46 = *(unsigned __int16*)(v11 + 40);
      if (*(_WORD*)(v11 + 40) == 0) {
        v46 = *(unsigned __int16*)GameData_212cea0;
      }
      v47 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v46);
      v12 = *(_QWORD*)(v47 + 192);
      v48 = *(unsigned __int8*)(v47 + 72);
      if (v12 == 0 || v48 > 7) {
        goto LABEL_15;
      }
      v13 = *(unsigned __int8*)(v12 + 105);
      if (*(_BYTE*)(v12 + 105) == 0 || *(_BYTE*)(v12 + 104) == 2) {
        goto LABEL_15;
      }
      goto LABEL_10;
    }
    v12 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*(_DWORD*)(v11 + 48) & 0xFFF));
    if (v12 == 0) {
      goto LABEL_13;
    }
  }
  else {
    v12 = *v9;
    if (*v9 == 0) {
      goto LABEL_13;
    }
  }
  v13 = *(unsigned __int8*)(v12 + 105);
LABEL_10:
  if (v13 == 4 && *(_BYTE*)(v12 + 278) == 0 && *(_BYTE*)(v12 + 279) == 0 &&
      *(_QWORD*)(v12 + 608) != 0) {
    goto LABEL_99;
  }
LABEL_13:
  if (v11 == 0 || *(_BYTE*)(v11 + 32) == 0) {
  LABEL_19:
    v14 = *v9;
    if (*v9 == 0) {
      goto LABEL_27;
    }
    goto LABEL_20;
  }
LABEL_15:
  if ((unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) - 7) >
      1) {
    goto LABEL_19;
  }
  if ((*(_DWORD*)(v11 + 48) & 0xFFF) == 0) {
    v41 = *(unsigned __int16*)(v11 + 40);
    if (*(_WORD*)(v11 + 40) == 0) {
      v41 = *(unsigned __int16*)GameData_212cea0;
    }
    v42 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v41);
    v43 = *(_QWORD*)(v42 + 192);
    v44 = *(unsigned __int8*)(v42 + 72);
    v45 = v43 == 0 || v44 > 7;
    if (v45 || *(_BYTE*)(v43 + 105) == 0 || *(_BYTE*)(v43 + 104) != 9) {
      goto LABEL_29;
    }
    v15 = *(_BYTE*)(a1 + 127308);
    v16 = *(_BYTE*)(a1 + 127309);
  LABEL_23:
    if ((unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) -
                       7) <= 1) {
      if ((*(_DWORD*)(v11 + 48) & 0xFFF) != 0) {
        v17 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                    8LL * (*(_DWORD*)(v11 + 48) & 0xFFF)) +
                         592LL);
        if (v17 == 0) {
          goto LABEL_99;
        }
      }
      else {
        v106 = *(unsigned __int16*)(v11 + 40);
        if (v106 == 0) {
          v106 = *(unsigned __int16*)GameData_212cea0;
        }
        v17 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                          64) +
                                               8LL * v106) +
                                    192LL) +
                         592LL);
        if (v17 == 0) {
          goto LABEL_99;
        }
      }
      goto LABEL_46;
    }
  LABEL_45:
    v17 = *(_QWORD*)(*v9 + 592);
    if (v17 == 0) {
      goto LABEL_99;
    }
  LABEL_46:
    v33 = *(unsigned __int8*)(v17 + 417);
    LODWORD(v153) = 0;
    v154 = nullptr;
    v155 = nullptr;
    v156 = 0;
    GameRoutine_74d660(&v153, v33, (unsigned int)v15, (unsigned int)v16);
    v34 = v154;
    v35 = v155;
    v36 = v150;
    v150[0] = GameData_1ff2f68;
    v150[1] = &v158;
    v152 = v150;
    if (v154 == v155) {
      goto LABEL_52;
    }
    do {
      v37 = *v34;
      v38 = v152;
      v164 = v34[1];
      v165[0] = v37;
      if (v152 == nullptr) {
        goto LABEL_181;
      }
      (*(void (**)(_QWORD*, int*, int*))(*v152 + 48LL))(v152, v165, &v164);
      v34 += 4;
    } while (v34 != v35);
    v36 = v152;
    if (v152 == v150) {
    LABEL_52:
      v39 = 32;
    }
    else {
      if (v152 == nullptr) {
        goto LABEL_54;
      }
      v39 = 40;
    }
    (*(void (**)(__int64))(*v36 + v39))((__int64)v36);
  LABEL_54:
    v7 = v154;
    if (v154 != nullptr) {
      v155 = v154;
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v40 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v40);
    }
    goto LABEL_99;
  }
  v14 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                   8LL * (*(_DWORD*)(v11 + 48) & 0xFFF));
  if (v14 != 0) {
  LABEL_20:
    if (*(_BYTE*)(v14 + 104) == 9) {
      v15 = *(_BYTE*)(a1 + 127308);
      v16 = *(_BYTE*)(a1 + 127309);
      if (v11 == 0 || *(_BYTE*)(v11 + 32) == 0) {
        goto LABEL_45;
      }
      goto LABEL_23;
    }
  }
LABEL_27:
  if (v11 == 0 || *(_BYTE*)(v11 + 32) == 0) {
  LABEL_33:
    v18 = (_BYTE*)*v9;
    if (*v9 == 0) {
      goto LABEL_84;
    }
    goto LABEL_34;
  }
LABEL_29:
  if ((unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) - 7) >
      1) {
    goto LABEL_33;
  }
  if ((*(_DWORD*)(v11 + 48) & 0xFFF) != 0) {
    v18 = *(_BYTE**)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*(_DWORD*)(v11 + 48) & 0xFFF));
    if (v18 == nullptr) {
      goto LABEL_84;
    }
  }
  else {
    v50 = *(unsigned __int16*)(v11 + 40);
    if (v50 == 0) {
      v50 = *(unsigned __int16*)GameData_212cea0;
    }
    v51 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v50);
    v18 = *(_BYTE**)(v51 + 192);
    v52 = *(unsigned __int8*)(v51 + 72);
    v53 = v18 == nullptr || v52 > 7;
    if (v53 || v18[105] == 0 || v18[104] == 2) {
      goto LABEL_84;
    }
  }
LABEL_34:
  if (v18[250] == 28) {
    v19 = *(_QWORD*)(a1 + 127432);
    v120 = (__int64*)(a1 + 127160);
    v123 = *(_QWORD*)(a1 + 127440);
    if (v19 != v123) {
      v20 = (_QWORD*)GameData_212bf68;
      do {
        v21 = GameRoutine_74db00(*(unsigned int*)(v19 + 40));
        v22 = *(_BYTE**)(v21 + 8);
        v23 = *(_BYTE**)(v21 + 16);
        while (v22 != v23) {
          v25 = *(_BYTE*)(v19 + 36);
          v26 = *v22 + *(_BYTE*)(v19 + 32);
          v27 = v22[1];
          v145[0] = 0;
          v149 = 0;
          v147 = 0;
          v148 = -1;
          v146 = 9;
          v145[1] = v26;
          v145[2] = v27 + v25;
          if (*v158 == 0) {
            v28 = (_QWORD*)GameRoutine_651b90(*v20, 12368, 16, 0);
            v29 = v28 + 3;
            v30 = v28;
            v28[1] = 0;
            v28[2] = 0;
            *v28 = GameData_1ff2e90;
            GameRoutine_844ee0(v28 + 3);
            v31 = v158;
            v32 = v158[1];
            *v158 = (__int64)v29;
            v31[1] = (__int64)v30;
            if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
              GameRoutine_1a09c50(v32);
            }
          }
          *(_DWORD*)(*v158 + 12336) |= v149;
          v24 = GameRoutine_8450e0();
          GameRoutine_844950(v24, v145);
          v22 += 4;
        }
        v19 += 48;
      } while (v19 != v123);
    }
    goto LABEL_98;
  }
LABEL_84:
  if ((GameRoutine_f24160() & 1) != 0) {
    v143 = -1;
    v140[0] = 0;
    v142 = 0;
    v141 = 9;
    v54 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
    v55 = *(_DWORD*)(v54 + 8);
    LODWORD(v54) = *(_DWORD*)(v54 + 12);
    v144 = 0;
    v140[2] = v54;
    v140[1] = v55;
    if (*v158 == 0) {
      v97 =
          (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 12368, 16, 0);
      v98 = v97 + 3;
      v99 = v97;
      v97[1] = 0;
      v97[2] = 0;
      *v97 = GameData_1ff2e90;
      GameRoutine_844ee0(v97 + 3);
      v100 = v158;
      v101 = v158[1];
      *v158 = (__int64)v98;
      v100[1] = (__int64)v99;
      if (v101 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v101 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v101 + 16LL))(v101);
        GameRoutine_1a09c50(v101);
      }
    }
    *(_DWORD*)(*v158 + 12336) |= v144;
    v56 = GameRoutine_8450e0();
    GameRoutine_844950(v56, v140);
    goto LABEL_99;
  }
  v57 = *(_QWORD*)(a1 + 127360);
  if (v57 != 0) {
    v58 = *(_QWORD*)(a1 + 127192);
    if (v58 != 0) {
      v120 = (__int64*)(a1 + 127160);
      v59 = *(unsigned __int8*)(v57 + 417);
      if (*(_BYTE*)(v57 + 417) != 0) {
        v60 = 0;
        do {
          v61 = 0;
          do {
            v63 = *(_BYTE*)(v58 + 584);
            v64 = *(_BYTE*)(v58 + 585);
            v135[0] = 0;
            v139 = 0;
            v137 = 0;
            v138 = -1;
            v136 = 9;
            v135[1] = v63 + v60;
            v135[2] = v64 + v61;
            if (*v158 == 0) {
              v65 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68,
                                                12368, 16, 0);
              v66 = v65 + 3;
              v67 = v65;
              v65[1] = 0;
              v65[2] = 0;
              *v65 = GameData_1ff2e90;
              GameRoutine_844ee0(v65 + 3);
              v68 = v158;
              v69 = v158[1];
              *v158 = (__int64)v66;
              v68[1] = (__int64)v67;
              if (v69 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
                GameRoutine_1a09c50(v69);
              }
            }
            *(_DWORD*)(*v158 + 12336) |= v139;
            v62 = GameRoutine_8450e0();
            GameRoutine_844950(v62, v135);
            ++v61;
          } while (v59 != v61);
          ++v60;
        } while (v60 != v59);
      }
    LABEL_98:
      v9 = v120;
    }
  LABEL_99:
    v124 = 0;
    goto LABEL_100;
  }
  v102 = *v10;
  if (*v10 != 0 && *(_BYTE*)(v102 + 32) != 0 &&
      (unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) - 7) <=
          1) {
    v7 = *(char**)(a1 + 127192);
    if (v7 == nullptr || ((v103 = *(_DWORD*)(v102 + 52)) & 0x80000000) != 0 ||
        (v104 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL),
         v153 = v104 + 144LL * v103, v104 == 0)) {
    LABEL_167:
      v107 = *(unsigned __int8*)(v102 + 16);
      v124 = v102 + 64;
      v159 = *(_DWORD*)(v102 + 36);
      if (v107 != 0) {
        v108 = GameRoutine_6ea8c0(v102 + 16);
        if (v108 != 0) {
          v109 = *(_DWORD*)(v108 + 592);
          if (v109 >= 2 && *(_DWORD*)(v102 + 12356) == 1) {
            v119 = *(unsigned __int8*)(v102 + 69);
            if (v119 == *(unsigned __int8*)(v108 + 584)) {
              v110 = *(unsigned __int8*)(v102 + 70);
              if (v110 == *(unsigned __int8*)(v108 + 585)) {
                v111 = 0;
                v121 = (__int64*)(a1 + 127160);
                do {
                  for (i = 0; i != v109; ++i) {
                    v130[0] = 0;
                    v134 = 0;
                    v132 = 0;
                    v133 = -1;
                    v131 = 9;
                    v130[1] = v119 + v111;
                    v130[2] = v110 + i;
                    if (*v158 == 0) {
                      v114 = (_QWORD*)GameRoutine_651b90(
                          *(_QWORD*)GameData_212bf68, 12368, 16, 0);
                      v115 = v114 + 3;
                      v116 = v114;
                      v114[1] = 0;
                      v114[2] = 0;
                      *v114 = GameData_1ff2e90;
                      GameRoutine_844ee0(v114 + 3);
                      v117 = v158;
                      v118 = v158[1];
                      *v158 = (__int64)v115;
                      v117[1] = (__int64)v116;
                      if (v118 != 0 &&
                          atomic_fetch_add((atomic_ullong* volatile)(v118 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v118 + 16LL))(v118);
                        GameRoutine_1a09c50(v118);
                      }
                    }
                    *(_DWORD*)(*v158 + 12336) |= v134;
                    v113 = GameRoutine_8450e0();
                    GameRoutine_844950(v113, v130);
                  }
                  v9 = v121;
                  ++v111;
                  v124 = 0;
                } while (v111 != v109);
              }
            }
          }
        }
      }
      goto LABEL_100;
    }
    v150[0] = GameData_1ff2fe8;
    v150[1] = &v157;
    v152 = v150;
    v151 = &v153;
    (*(void (**)(__int64))(*(_QWORD*)(v104 + 144LL * v103) + 760LL))(
        v104 + 144LL * v103);
    if (v152 == v150) {
      v105 = 32;
    }
    else {
      if (v152 == nullptr) {
      LABEL_166:
        v102 = *v10;
        goto LABEL_167;
      }
      v105 = 40;
    }
    (*(void (**)(__int64))(*v152 + v105))((__int64)v152);
    goto LABEL_166;
  }
  if (*(_BYTE*)(a1 + 53056) == 0) {
    goto LABEL_99;
  }
  v159 = *(_DWORD*)(a1 + 53060);
  v124 = a1 + 90128;
LABEL_100:
  if ((*((_BYTE*)v9 + 212) & 0x10) != 0 ||
      *((_BYTE*)v9 + 24) == 1 &&
          *(_BYTE*)((v70 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                      8LL * *((unsigned __int16*)v9 + 8))) +
                    72) == 14 &&
          ((v71 = *(unsigned __int8*)(v70 + 73), v45 = v71 > 0x11,
            v72 = (1 << v71) & 0x38034, !v45)
               ? (v73 = v72 == 0)
               : (v73 = true),
           !v73)) {
    v74 = v9[4];
    if (v74 != 0) {
      v75 = *(_DWORD*)(v74 + 592);
      if (v75 >= 1) {
        for (j = 0; j != v75; ++j) {
          for (k = 0; k != v75; ++k) {
            v79 = *(_BYTE*)(v74 + 584);
            v80 = *(_BYTE*)(v74 + 585);
            v125[0] = 0;
            v129 = 0;
            v127 = 0;
            v128 = -1;
            v126 = 9;
            v125[1] = v79 + j;
            v125[2] = v80 + k;
            if (*v158 == 0) {
              v81 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68,
                                                12368, 16, 0);
              v82 = v81 + 3;
              v83 = v81;
              v81[1] = 0;
              v81[2] = 0;
              *v81 = GameData_1ff2e90;
              GameRoutine_844ee0(v81 + 3);
              v84 = v158;
              v85 = v158[1];
              *v158 = (__int64)v82;
              v84[1] = (__int64)v83;
              if (v85 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v85 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v85 + 16LL))(v85);
                GameRoutine_1a09c50(v85);
              }
            }
            *(_DWORD*)(*v158 + 12336) |= v129;
            v78 = GameRoutine_8450e0();
            GameRoutine_844950(v78, v125);
          }
        }
      }
    }
  }
  v150[0] = GameData_1ff3068;
  v150[1] = &v159;
  v152 = v150;
  v151 = v122;
  if (v124 != 0 && *(int*)(v124 + 12292) >= 1) {
    v86 = v124 + 4;
    v87 = 0;
    while (1) {
      v38 = v152;
      if (v152 == nullptr) {
        break;
      }
      (*(void (**)(_QWORD*, __int64))(*v152 + 48LL))(v152, v86);
      ++v87;
      v86 += 12;
      if (v87 >= *(int*)(v124 + 12292)) {
        goto LABEL_122;
      }
    }
  LABEL_181:
    GameRoutine_60a310(v38, v7, v8);
  }
LABEL_122:
  v88 = v162;
  if (v162 != 0 && *(int*)(v162 + 12292) >= 1) {
    v89 = v162 + 4;
    v90 = 0;
    do {
      v38 = v152;
      if (v152 == nullptr) {
        goto LABEL_181;
      }
      (*(void (**)(_QWORD*, __int64))(*v152 + 48LL))(v152, v89);
      ++v90;
      v89 += 12;
    } while (v90 < *(int*)(v88 + 12292));
  }
  v91 = v160;
  if (v160 != 0 && *(int*)(v160 + 12292) >= 1) {
    v92 = v160 + 4;
    v93 = 0;
    do {
      v38 = v152;
      if (v152 == nullptr) {
        goto LABEL_181;
      }
      (*(void (**)(_QWORD*, __int64))(*v152 + 48LL))(v152, v92);
      ++v93;
      v92 += 12;
    } while (v93 < *(int*)(v91 + 12292));
  }
  result = (__int64)v152;
  if (v152 == v150) {
    v94 = 32;
  }
  else {
    if (v152 == nullptr) {
      goto LABEL_137;
    }
    v94 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v152 + v94))((__int64)v152);
LABEL_137:
  v95 = v161;
  if (v161 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v161 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v95 + 16LL))(v95);
    result = GameRoutine_1a09c50(v95);
  }
  v96 = v163;
  if (v163 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v163 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v96 + 16LL))(v96);
    return GameRoutine_1a09c50(v96);
  }
  return result;
}

void GameHr_f2e5a0(__int64 a1, _QWORD* a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 i;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
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
  _QWORD v23[4];
  _QWORD* v24;
  char v25;
  __int64 v26;

  v26 = a3;
  if (a2 == nullptr || a3 == 0) {
    return;
  }
  v25 = 0;
  v23[0] = GameData_1ff3af8;
  v23[1] = &v25;
  v23[2] = &v26;
  v24 = v23;
  GameRoutine_710540((char*)a2 + 828, v23);
  for (i = 876; i != 1068; i += 8) {
    if (*(_WORD*)((char*)a2 + i) != 0) {
      if (v24 == nullptr) {
        GameRoutine_60a310(0, v4, v5);
      }
      (*(void (**)(_QWORD*, __int64))(*v24 + 48LL))(v24, (__int64)a2 + i);
    }
  }
  if (v24 == v23) {
    v7 = 32;
    goto LABEL_12;
  }
  if (v24 != nullptr) {
    v7 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v24 + v7))((__int64)v24);
  }
  if (v25 == 1) {
    v8 = *(_QWORD*)(GameData_21ec7c0 + 24);
    v9 = *(_QWORD*)(GameData_21ec7c0 + 32);
    if (v8 != v9) {
      while (1) {
        if ((*(_BYTE*)(*(_QWORD*)v8 + 1027LL) & 1) != 0 ||
            (v10 = *(_QWORD*)(*(_QWORD*)v8 + 16LL)) == 0) {
        LABEL_51:
          v11 = nullptr;
        }
        else {
          v11 = *(_QWORD**)(GameData_21ca310 + 56);
          if (v11 != nullptr) {
            v12 = 250;
            while (1) {
              v13 = v11[55];
              if (v13 != 0 && *(_BYTE*)(v13 + 16) != 9 && v11[49] == v10) {
                break;
              }
              v14 = v11[333];
              if (v14 != 0 && *(_BYTE*)(v14 + 16) != 9 && v11[327] == v10) {
                v11 += 278;
                break;
              }
              v15 = v11[611];
              if (v15 != 0 && *(_BYTE*)(v15 + 16) != 9 && v11[605] == v10) {
                v11 += 556;
                break;
              }
              v16 = v11[889];
              if (v16 != 0 && *(_BYTE*)(v16 + 16) != 9 && v11[883] == v10) {
                v11 += 834;
                break;
              }
              v17 = v11[1167];
              if (v17 != 0 && *(_BYTE*)(v17 + 16) != 9 && v11[1161] == v10) {
                v11 += 1112;
                break;
              }
              v18 = v11[1445];
              if (v18 != 0 && *(_BYTE*)(v18 + 16) != 9 && v11[1439] == v10) {
                v11 += 1390;
                break;
              }
              v19 = v11[1723];
              if (v19 != 0 && *(_BYTE*)(v19 + 16) != 9 && v11[1717] == v10) {
                v11 += 1668;
                break;
              }
              v20 = v11[2001];
              if (v20 != 0 && *(_BYTE*)(v20 + 16) != 9 && v11[1995] == v10) {
                v11 += 1946;
                break;
              }
              v21 = v11[2279];
              if (v21 != 0 && *(_BYTE*)(v21 + 16) != 9 && v11[2273] == v10) {
                v11 += 2224;
                break;
              }
              v22 = v11[2557];
              if (v22 != 0 && *(_BYTE*)(v22 + 16) != 9 && v11[2551] == v10) {
                v11 += 2502;
                break;
              }
              v11 += 2780;
              v12 -= 10;
              if (v12 == 0) {
                goto LABEL_51;
              }
            }
          }
        }
        if (v11 == a2) {
          break;
        }
        v8 += 16;
        if (v8 == v9) {
          return;
        }
      }
      GameRoutine_cb10a0();
    }
  }
}

__int64 GameHr_f335e0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[4];
  _QWORD* v24;
  __int64 v25;

  if (*(_QWORD*)(a1 + 152) == 0) {
    v4 = 0;
    v5 = 1;
    v19 = 0;
    v20 = 0;
    v6 = *GameData_212ea58;
    goto LABEL_31;
  }
  v2 = GameData_212ea58;
  v25 = *(_QWORD*)(a1 + 152);
  v21 = 0;
  v22 = 0;
  v24 = v23;
  v23[0] = GameData_1fec818;
  v23[1] = &v25;
  v23[2] = &v21;
  GameRoutine_e9a800(*GameData_212ea58, v23);
  if (v24 == v23) {
    v3 = 32;
  }
  else {
    if (v24 == nullptr) {
      goto LABEL_8;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v24 + v3))((__int64)v24);
LABEL_8:
  v7 = v21;
  if (v21 != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(v21 + 16) + 440LL);
    if (v8 != 0 && (unsigned __int64)(v9 = *(unsigned __int8*)(v8 + 16)) <= 3) {
      v10 = GameData_1b01768[v9];
    }
    else {
      v10 = 3;
    }
    v11 = *v2 + (v10 << 7);
    v12 = *(_QWORD*)(v11 + 760);
    if (v12 != 0) {
      v13 = *(_QWORD*)(v11 + 752);
      v14 = *(_QWORD*)(v11 + 760);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                memory_order_relaxed);
      v15 = GameRoutine_1a0a0c0(v14);
      if (v15 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v16 = v15;
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          GameRoutine_1a09c50(v16);
        }
        GameRoutine_1a09c50(v12);
        if (v7 == v13) {
          v7 = 0;
          goto LABEL_19;
        }
      }
      else {
        GameRoutine_1a09c50(v12);
      }
    }
    if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
      *(_DWORD*)(*v2 + 1204) |= 1u;
    }
    v7 = v21;
    v4 = v22;
    if (v22 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                                memory_order_relaxed);
    }
    goto LABEL_25;
  }
LABEL_19:
  v4 = 0;
LABEL_25:
  v17 = v22;
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    GameRoutine_1a09c50(v17);
  }
  v6 = *v2;
  v19 = v7;
  v20 = v4;
  if (v4 != 0) {
    v5 = 0;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v5 = 1;
  }
LABEL_31:
  GameRoutine_e9bcb0(v6, a1, 0, &v19);
  result = v20;
  if (v20 != 0) {
    result = GameRoutine_1a09c50(v20);
  }
  if ((v5 & 1) == 0) {
    return GameRoutine_1a09c50(v4);
  }
  return result;
}

void GameHr_f3e780()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  unsigned __int64 v11;
  _WORD* v12;
  __int64 v13;
  __int64 v14;
  __int16 v15;
  unsigned __int64 v16;
  _WORD* v17;
  _BYTE v18[200];

  v0 = *(_QWORD*)(GameData_2203490 + 888);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_2203490 + 880);
    v2 = *(_QWORD*)(GameData_2203490 + 888);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = GameRoutine_1a0a0c0(v2);
    GameRoutine_1a09c50(v0);
    if (v3 == 0 || v1 == 0) {
      if (v3 == 0) {
        return;
      }
    }
    else {
      v5 = *(_QWORD*)(v1 + 208);
      v15 = 0;
      *(_DWORD*)(*(_QWORD*)(v5 + 136) + 60LL) = 0;
      v6 = *(_QWORD*)(v1 + 208);
      v7 = *(_QWORD*)(v6 + 392);
      v8 = *(_QWORD*)(v6 + 400);
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
        v9 = *(_DWORD*)(v7 + 11784);
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          GameRoutine_1a09c50(v8);
        }
      }
      else {
        v9 = *(_DWORD*)(v7 + 11784);
      }
      if ((unsigned int)(v9 - 2) <= 4) {
        GameRoutine_60a020(&v15,
                           (char*)GameData_1b9abf0 + GameData_1b9abf0[v9 - 2]);
      }
      v10 = v15 & 1;
      v11 = (unsigned __int64)(unsigned __int8)v15 >> 1;
      if (v10 != 0) {
        v11 = v16;
      }
      if (v11 != 0) {
        v12 = v10 != 0 ? v17 : (__int16*)((char*)&v15 + 1);
        if (v12 != nullptr) {
          GameRoutine_10c830(v18, 0.0f);
          *(struct PseudoSret*)(&v14) =
              GameRoutine_ff2d0(v12, v12, v18, 0, 65537, 0, 0.0f, 1.0f);
          GameRoutine_10cff0(v18);
          v10 = v15 & 1;
        }
      }
      if (v10 != 0 && v17 != nullptr) {
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v13 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v13);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      GameRoutine_1a09c50(v3);
    }
  }
}

__int64 GameHr_f40b80(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  GameRoutine_10c830(&v16, 0.0f);
  *(struct PseudoSret*)(&v15) =
      GameRoutine_ff2d0("FF_Capture_Failure", "FF_Capture_Failure", &v16, 0,
                        65537, 0, 0.0f, 1.0f);
  GameRoutine_10cff0(&v16);
  result = GameRoutine_f90cd0(GameData_21ec7a8);
  v3 = *(_QWORD*)(GameData_2203490 + 888);
  if (v3 != 0) {
    v4 = *(_QWORD*)(GameData_2203490 + 880);
    v5 = *(_QWORD*)(GameData_2203490 + 888);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v6 = GameRoutine_1a0a0c0(v5);
    result = GameRoutine_1a09c50(v3);
    if (v6 == 0 || v4 == 0) {
      if (v6 == 0) {
        return result;
      }
    }
    else {
      if ((GameData_2216858 & 1) == 0) {
        GameRoutine_8123d0(result);
      }
      if (GameData_2216850 == 1) {
        v9 = *(_QWORD*)(v4 + 312);
        v8 = *(_QWORD*)(v4 + 320);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        v10 = GameRoutine_1a0a0c0(v8);
        v11 = *(_QWORD*)(v9 + 8);
        v12 = *(_QWORD*)(v9 + 16);
        v13 = v10;
        if (v12 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                    memory_order_relaxed);
          v17 = v12;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                    memory_order_relaxed);
        }
        else {
          v17 = 0;
        }
        v16 = v11;
        GameRoutine_176c370(a1, &v16);
        v14 = v17;
        if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          GameRoutine_1a09c50(v14);
        }
        if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          GameRoutine_1a09c50(v12);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          GameRoutine_1a09c50(v13);
        }
        result = GameRoutine_1a09c50(v8);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      return GameRoutine_1a09c50(v6);
    }
  }
  return result;
}

__int64 GameHr_1000ea0(__int64 a1, long double a2)
{
  _QWORD* v3;
  __int64 v4;

  *(_QWORD*)a1 = GameData_20002b8;
  if (*(_BYTE*)(a1 + 208) != 0) {
    *(_BYTE*)(a1 + 208) = 0;
    if (GameData_21f3cb8 != 0) {
      GameRoutine_d8cf60(GameData_21f3cb8, a2);
    }
  }
  v3 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_20003a0;
  if (v3 == (_QWORD*)(a1 + 160)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_9;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_9:
  *(_QWORD*)a1 = GameData_1f8f7e8;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  GameRoutine_65a940(a1);
  return GameRoutine_658c00(a1 + 88);
}

_QWORD* GameHr_1002ca0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;
  _QWORD v13[4];
  _QWORD* v14;
  _QWORD v15[4];
  _QWORD* v16;

  v2 = *(_QWORD**)(a1 + 16);
  result = v15;
  v15[0] = GameData_20004f8;
  v16 = v15;
  if (v2 != nullptr) {
    while (1) {
      (*(void (**)(_QWORD*, _QWORD*))(*result + 48LL))(result, v2 + 4);
      v2 = (_QWORD*)*v2;
      result = v16;
      if (v2 == nullptr) {
        break;
      }
      if (v16 == nullptr) {
      LABEL_24:
        GameRoutine_60a310(result, v4, v5);
      }
    }
    if (v16 != v15) {
      if (v16 != nullptr) {
        v6 = 40;
      LABEL_9:
        (*(void (**)(__int64))(*result + v6))((__int64)result);
      }
      v7 = *(_QWORD**)(a1 + 16);
      result = v13;
      v13[0] = GameData_2000588;
      v14 = v13;
      if (v7 != nullptr) {
        result = v13;
        while (1) {
          (*(void (**)(_QWORD*, _QWORD*))(*result + 48LL))(result, v7 + 4);
          v7 = (_QWORD*)*v7;
          result = v14;
          if (v7 == nullptr) {
            break;
          }
          if (v14 == nullptr) {
            goto LABEL_24;
          }
        }
        if (v14 != v13) {
          if (v14 != nullptr) {
            v8 = 40;
          LABEL_19:
            (*(void (**)(__int64))(*result + v8))((__int64)result);
          }
          v9 = *(_QWORD**)(a1 + 16);
          result = v11;
          v11[0] = GameData_2000608;
          v12 = v11;
          if (v9 == nullptr) {
            goto LABEL_28;
          }
          result = v11;
          while (1) {
            (*(void (**)(_QWORD*, _QWORD*))(*result + 48LL))(result, v9 + 4);
            v9 = (_QWORD*)*v9;
            result = v12;
            if (v9 == nullptr) {
              break;
            }
            if (v12 == nullptr) {
              goto LABEL_24;
            }
          }
          if (v12 == v11) {
          LABEL_28:
            v10 = 32;
          }
          else {
            if (v12 == nullptr) {
              return result;
            }
            v10 = 40;
          }
          return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v10))(result);
        }
      }
      v8 = 32;
      goto LABEL_19;
    }
  }
  v6 = 32;
  goto LABEL_9;
}

_QWORD* GameHr_1017b90(_QWORD* a1, _QWORD* a2)
{
  unsigned __int64 v4;
  __int64 v5;
  bool v6;
  unsigned __int64 v7;
  char* v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _BYTE v13[32];
  _BYTE* v14;

  if (a1 != a2) {
    v4 = *(unsigned __int8*)a2;
    if ((*(_BYTE*)a1 & 1) != 0) {
      v6 = (v4 & 1) == 0;
      v7 = v4 >> 1;
      if (v6) {
        v8 = (char*)a2 + 1;
      }
      else {
        v8 = (char*)a2[2];
      }
      if (v6) {
        v9 = v7;
      }
      else {
        v9 = a2[1];
      }
      GameRoutine_64dde0(a1, v8, v9);
    }
    else if ((v4 & 1) != 0) {
      GameRoutine_64df20(a1, a2[2], a2[1]);
    }
    else {
      a1[1] = a2[1];
      v5 = *a2;
      a1[2] = a2[2];
      *a1 = v5;
    }
  }
  a1[3] = a2[3];
  v10 = (_QWORD*)a2[8];
  if (v10 != nullptr) {
    if (v10 == a2 + 4) {
      v14 = v13;
      (*(void (**)(_QWORD*, _BYTE*))(*v10 + 24LL))(v10, v13);
    }
    else {
      v14 = (_BYTE*)(*(__int64 (**)(_QWORD*))(*v10 + 16LL))(v10);
    }
  }
  else {
    v14 = nullptr;
  }
  GameRoutine_10181a0(v13, a1 + 4);
  if (v14 == v13) {
    v11 = 32;
    goto LABEL_22;
  }
  if (v14 != nullptr) {
    v11 = 40;
  LABEL_22:
    (*(void (**)(__int64))(*(_QWORD*)v14 + v11))((__int64)v14);
  }
  return a1;
}

__int64 GameHr_1021960(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;

  *(_QWORD*)(a1 - 16) = GameData_20023c8;
  *(_QWORD*)a1 = GameData_20023f0;
  GameRoutine_195a5c0(a1 - 16);
  v2 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_2002510;
  if (v2 == (_QWORD*)(a1 + 160)) {
    v3 = 32;
  }
  else {
    if (v2 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v2 + v3))((__int64)v2);
LABEL_6:
  *(_QWORD*)a1 = GameData_1f8f7e8;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  GameRoutine_65a940(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
