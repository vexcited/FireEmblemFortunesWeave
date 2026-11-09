#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1a86d37;

extern _UNKNOWN GameData_1a86fa8;

extern _UNKNOWN GameData_1ad7c10;

extern __int64 (*GameData_201dc20[])();

extern __int64 GameData_212bf68;

extern __int64 GameData_212c608[2];

extern __int64 GameData_212c6a0[3];

extern __int64* GameData_212c878[6];

extern __int64* GameData_212c880[5];

extern __int64* GameData_212c8a0;

extern _UNKNOWN* GameData_212c8a8;

extern __int64* GameData_212ccd0[45];

extern _QWORD GameData_212d330;

extern __int64 GameData_212d750;

extern __int64 GameData_21306a0[7];

extern __int64 GameData_21306c0[3];

extern __int64* GameData_2130920[5];

extern _UNKNOWN GameData_2170050;

extern __int64 GameData_21c9600;

extern __int64 GameData_21c96e8;

extern __int64 GameData_21ca310;

extern __int64 GameData_21caab0;

extern __int64 GameData_21d9988;

extern __int64 GameData_21d9990;

extern __int64 GameData_22506e0;

extern __int64 GameData_22549a8;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_11f44e0(_QWORD, _QWORD);

__int64 GameRoutine_121d220(__int64 result, __int64, int, __int64, __int64,
                            __int64);

__int64 GameRoutine_1226120(__int64 result, __int64);

_QWORD* GameRoutine_1244680(float*, unsigned __int64*, __int64*);

__int64 GameRoutine_1274f90(_QWORD*, __int64, unsigned int, _DWORD*);

__int64 GameRoutine_128e990(__int64 result, _DWORD*);

__int64 GameRoutine_128f580(__int64);

__int64 GameRoutine_128f6c0(_QWORD, _QWORD);

__int64 GameRoutine_1290c20(__int64, __int64, int);

__int64 GameRoutine_1292980(_QWORD, _QWORD);

__int64 GameRoutine_12a1580(_QWORD);

void __attribute__((noreturn)) GameRoutine_12b6e10(_QWORD);

__int64 GameRoutine_12b7f80(__int64 result, _QWORD*, unsigned __int64, __int64*,
                            signed __int64);

__int64 GameRoutine_12c45b0(_QWORD*, __int64, char);

__int64 GameRoutine_12c4780(_QWORD*, __int64, __int64);

__int64 GameRoutine_12eaba0(__int64 result, _QWORD*, unsigned __int64, __int64*,
                            signed __int64);

__int64 GameRoutine_1307600(__int64, __int64, unsigned int, __int64);

__int64 GameRoutine_13080e0(_QWORD, _QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09d00(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(void);

void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);

void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_65a7c0(_QWORD);

__int64 GameRoutine_65c580(_QWORD, _QWORD);

__int64 GameRoutine_682780(_QWORD);

__int64 GameRoutine_6e8bc0(_QWORD, _QWORD);

__int64 GameRoutine_6ea9d0(_QWORD);

__int64 GameRoutine_716d80(_QWORD, _QWORD);

__int64 GameRoutine_7a86e0(_QWORD);

__int64 GameRoutine_828dc0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_84cb50(_QWORD, _QWORD);

__int64 GameRoutine_8679c0(_QWORD);

__int64 GameRoutine_8cfec0(_QWORD, _QWORD);

__int64 GameRoutine_d5d770(_QWORD, _QWORD);

__int64 GameRoutine_dbced0(_QWORD, _QWORD);

__int64 GameHr_126a9c0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = (_QWORD*)GameData_212bf68;
  v5 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 208, 16, 0);
  v6 = (_QWORD*)GameRoutine_651b90(*v4, 8, 16, 0);
  v7 = GameData_212c608[0];
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *v6 = v2;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)v5 = v7 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  v8 = GameRoutine_65a7c0(v5);
  *(_QWORD*)(v5 + 152) = v6;
  *(_QWORD*)(v5 + 160) = v6 + 1;
  *(_QWORD*)(v5 + 168) = v6 + 1;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_BYTE*)(v5 + 200) = 0;
  *(_QWORD*)v5 = GameData_201dc20;
  GameRoutine_8679c0(v8);
  return GameRoutine_657850(v5, &GameData_2170050, "ProcAccept", 1, v3);
}

__int64 GameHr_1292300(__int64 a1, int a2, __int64 a3)
{
  int v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int* v13;
  int* v14;
  int v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  _DWORD* v19;
  int v20;
  int v21;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _DWORD* v38;
  unsigned __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int8 v47;
  int v48;
  unsigned int v51;
  int v52;
  int v53;
  bool v54;
  __int64 v55;
  __int64 v56;
  unsigned int v57;
  __int64 v58;
  _QWORD* v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _QWORD* v64;
  _QWORD* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  int v70;
  int v72;
  __int64 v73;
  int v74;
  int v75;
  int v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  _QWORD* v80;
  __int64 v81;
  _DWORD* v82;
  __int64 v83;
  char v84;
  int v85;
  __int64 v86;
  int v87;
  __int64 v88;
  int v89;
  __int64 v90;
  int v91;
  int v92;
  int v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  _QWORD* v97;
  int v98[3];

  if ((GameRoutine_11f44e0(*(_QWORD*)(a1 + 8), 0) & 1) == 0 ||
      (unsigned __int8)GameRoutine_128f580(*(_QWORD*)(a1 + 8)) != 2) {
    return 0;
  }
  v5 = *(__int16*)(a3 + 2);
  result = 0;
  if ((v5 & 0x80000000) == 0 && *(_BYTE*)a3 == 0) {
    (**(void (***)(__int64, _QWORD))(*(_QWORD*)GameData_21306c0[0] + 8LL))(
        *(_QWORD*)GameData_21306c0[0] + 8LL, *(_QWORD*)(a1 + 8));
    GameRoutine_121d220(a1 + 2288, *(_QWORD*)(a1 + 8), 0, v7, v8, v9);
    v98[0] = 2;
    GameRoutine_1274f90(*(_QWORD**)GameData_21306a0[0], *(_QWORD*)(a1 + 8),
                        0xFFFFFFFF, v98);
    v87 = 0;
    v88 = 0;
    GameRoutine_12a1580(&v89);
    v84 = 0;
    v83 = 0;
    v82 = nullptr;
    v85 = -1;
    GameRoutine_12a1580(&v72);
    v10 = *(_QWORD*)(a1 + 8);
    v86 = a1 + 2288;
    v81 = v10;
    v11 = GameData_212bf68;
    v12 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 32, 16, 0);
    v13 = (int*)v12;
    v69 = v5;
    if (a2 == 47) {
      v14 = (int*)(v12 + 4);
      *(_DWORD*)v12 = 13;
      v15 = 17412;
    }
    else {
      *(_DWORD*)v12 = 15;
      v14 = (int*)(v12 + 12);
      if ((*(_BYTE*)(v10 + 1980) & 1) != 0) {
        v16 = 0xD0000000ELL;
      }
      else {
        v16 = 0xE0000000DLL;
      }
      *(_QWORD*)(v12 + 4) = v16;
      v15 = 1028;
    }
    v70 = v15;
    v17 = GameData_2130920[0];
    v18 = GameData_212c880[0];
    v19 = GameData_212c8a8;
  LABEL_23:
    v23 = *v13;
    v24 = *(_QWORD**)(a1 + 8);
    v25 = *(_QWORD*)(*v18 + 64);
    v26 = *(_QWORD*)(v25 + 8LL * *((int*)v17 + v23));
    if (v26 == 0) {
      goto LABEL_49;
    }
    v27 = *(_QWORD*)(v25 + 8LL * *((int*)v17 + v23));
    while (1) {
      v29 = *(unsigned int*)(*(_QWORD*)(v27 + 24) + 4LL);
      v30 = v29 & 0xFFF;
      if ((v29 & 0xFFF) == 0) {
        v31 = v24[182];
        v32 = (v24[183] - v31) >> 2;
        goto LABEL_40;
      }
      v31 = v24[182];
      v32 = (v24[183] - v31) >> 2;
      if (v32 < ((v29 >> 5) & 0x7F) + 1 ||
          ((*(_DWORD*)(v31 + 4 * ((v29 >> 5) & 0x7F)) >> v29) & 1) == 0 ||
          (v33 = v24[187], v34 = v24[186], v33 == v34)) {
      LABEL_25:
        v28 = 0xFFFFFFFFLL;
      }
      else {
        v35 = (v33 - v34) >> 2;
        v36 = 0;
        while (((*(_DWORD*)(v34 + 4 * v36) ^ (unsigned int)v29) & 0xFFF) != 0) {
          if (v35 == ++v36) {
            goto LABEL_25;
          }
        }
        v28 = (unsigned int)v36;
        if ((v36 & 0x80000000) == 0) {
        LABEL_36:
          if ((v28 & 0x80000000) == 0) {
            v37 = v24[186];
          LABEL_38:
            v38 = (_DWORD*)(v37 + 4 * v28);
            goto LABEL_50;
          }
        LABEL_40:
          v39 = *(unsigned __int16*)(v26 + 16);
          v40 = (v39 >> 5) & 0x7F;
          if (v32 >= v40 + 1) {
            v41 = v39 & 0xFFF;
            if (((*(_DWORD*)(v31 + 4LL * (unsigned int)v40) >> v41) & 1) != 0) {
              v42 = v24[187];
              v37 = v24[186];
              if (v42 != v37) {
                v43 = (v42 - v37) >> 2;
                v44 = 0;
                while ((*(_DWORD*)(v37 + 4 * v44) & 0xFFF) != v41) {
                  if (v43 == ++v44) {
                    goto LABEL_49;
                  }
                }
                if ((v44 & 0x8000000000000000LL) == 0) {
                  v28 = (unsigned int)v44;
                  goto LABEL_38;
                }
              }
            }
          }
        LABEL_49:
          v38 = v19;
        LABEL_50:
          if ((*(_WORD*)v38 & 0xFFF) == 0 ||
              (GameRoutine_128e990((__int64)v24, v38) & 1) == 0) {
            goto LABEL_22;
          }
          v45 = *v18;
          v82 = v38;
          v46 = *(_QWORD*)(*(_QWORD*)(v45 + 64) + 8LL * (*v38 & 0xFFF));
          v47 = GameRoutine_128f580(*(_QWORD*)(a1 + 8));
          v20 = 0;
          if (v47 == 0 || *(_BYTE*)(v46 + 104) != 3) {
            goto LABEL_16;
          }
          v48 = *(unsigned __int8*)(v46 + 106);
          if (v48 != 3) {
            if (v48 == 2) {
              if (v47 == 4) {
                v20 = 5;
                goto LABEL_16;
              }
            }
            else if (v48 == 1 && v47 <= 9u) {
              if (((1 << v47) & 0x38A) != 0) {
                v20 = 1;
                goto LABEL_16;
              }
              if (((1 << v47) & 0x50) != 0) {
                v20 = 6;
                goto LABEL_16;
              }
              if (v47 == 2) {
                v52 = v70;
                if (*(__int16*)(v46 + 330) <= 0) {
                  v53 = 3;
                }
                else {
                  v53 = 4;
                }
                v54 = (_DWORD)v23 == 15 && a2 == 38;
                HIDWORD(v83) = v53;
                if (v54) {
                  v52 = 5124;
                }
                LODWORD(v83) = v52;
                if ((GameRoutine_128f6c0(&v81, &v72) & 1) == 0) {
                  goto LABEL_22;
                }
              LABEL_92:
                v55 = *v18;
                v87 = HIDWORD(v73);
                v56 = *(_QWORD*)(*(_QWORD*)(v55 + 64) + 8LL * (*v38 & 0xFFF));
                v91 = v74;
                v88 = v56;
                v89 = v72;
                v90 = v73;
                v94 = v77;
                v92 = v75;
                GameRoutine_1226120((__int64)&v78, (__int64)&v95);
                v93 = v76;
              LABEL_93:
                if (v88 != 0) {
                  GameRoutine_1290c20(a1, (__int64)&v87, v69);
                  v57 = 1;
                }
                else {
                  v57 = 0;
                }
                v58 = 128;
                if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
                  v58 = 56;
                }
                GameRoutine_1a0a4e0(*(_QWORD*)v11 + v58);
                v59 = v80;
                if (v80 != nullptr) {
                  do {
                    v60 = (_QWORD*)*v59;
                    if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
                      v61 = 128;
                    }
                    else {
                      v61 = 56;
                    }
                    GameRoutine_1a0a4e0(*(_QWORD*)v11 + v61);
                    v59 = v60;
                  } while (v60 != nullptr);
                }
                v62 = v79;
                v79 = 0;
                if (v62 != 0) {
                  v63 = 128;
                  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
                    v63 = 56;
                  }
                  GameRoutine_1a0a4e0(*(_QWORD*)v11 + v63);
                }
                v64 = v97;
                if (v97 != nullptr) {
                  do {
                    v65 = (_QWORD*)*v64;
                    if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
                      v66 = 128;
                    }
                    else {
                      v66 = 56;
                    }
                    GameRoutine_1a0a4e0(*(_QWORD*)v11 + v66);
                    v64 = v65;
                  } while (v65 != nullptr);
                }
                v67 = v96;
                v96 = 0;
                if (v67 != 0) {
                  v68 = 128;
                  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
                    v68 = 56;
                  }
                  GameRoutine_1a0a4e0(*(_QWORD*)v11 + v68);
                }
                return v57;
              }
            }
          LABEL_15:
            v20 = 0;
            goto LABEL_16;
          }
          if (v47 == 5) {
            if (*(_BYTE*)(v46 + 250) != 0) {
              goto LABEL_15;
            }
            v20 = 8;
          }
          else {
            if (v47 != 4) {
              if (v47 != 2 || *(_BYTE*)(v46 + 250) != 13) {
                goto LABEL_15;
              }
              if ((_DWORD)v23 == 15 && a2 == 38) {
                v51 = 5124;
              }
              else {
                v51 = v70;
              }
              v83 = v51 | 0x200000000LL;
              if ((GameRoutine_1292980(&v81, &v72) & 1) != 0) {
                goto LABEL_92;
              }
            LABEL_22:
              if (++v13 == v14) {
                goto LABEL_93;
              }
              goto LABEL_23;
            }
            if (*(_BYTE*)(v46 + 250) != 28) {
              goto LABEL_15;
            }
            v20 = 7;
          }
        LABEL_16:
          v21 = v70;
          HIDWORD(v83) = v20;
          if ((_DWORD)v23 == 15 && a2 == 38) {
            v21 = 5124;
          }
          LODWORD(v83) = v21;
          goto LABEL_22;
        }
      }
      v27 = *(_QWORD*)(v25 + 8 * v30);
      if (v27 == 0) {
        goto LABEL_36;
      }
    }
  }
  return result;
}

__int64 GameHr_1294280(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  int v10;
  __int64* v11;
  __int64* v12;
  _DWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _DWORD* v27;
  unsigned __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int8 v38;
  int v39;
  int v40;
  int v42;
  __int64 v43;
  __int64 v44;
  int v45;
  unsigned int v46;
  __int64 v47;
  _QWORD* v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  unsigned int v60;
  int v61;
  int v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;
  _QWORD* v68;
  _DWORD* v69;
  __int64 v70;
  char v71;
  int v72;
  __int64 v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  unsigned int v77;
  int v78;
  int v79;
  int v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  _QWORD* v84;
  int v85[3];

  if ((GameRoutine_11f44e0(*(_QWORD*)(a1 + 8), 0) & 1) == 0 ||
      (unsigned __int8)GameRoutine_128f580(*(_QWORD*)(a1 + 8)) != 3) {
    return 0;
  }
  result = 0;
  if ((*(__int16*)(a3 + 2) & 0x80000000) == 0 && *(_BYTE*)a3 == 0) {
    v58 = *(__int16*)(a3 + 2);
    (**(void (***)(__int64, _QWORD))(*(_QWORD*)GameData_21306c0[0] + 8LL))(
        *(_QWORD*)GameData_21306c0[0] + 8LL, *(_QWORD*)(a1 + 8));
    v85[0] = 2;
    GameRoutine_1274f90(*(_QWORD**)GameData_21306a0[0], *(_QWORD*)(a1 + 8),
                        0xFFFFFFFF, v85);
    v74 = 0;
    v75 = 0;
    GameRoutine_12a1580(&v76);
    v71 = 0;
    v70 = 0;
    v69 = nullptr;
    v72 = -1;
    v73 = 0;
    GameRoutine_12a1580(&v59);
    v6 = *(_QWORD**)(a1 + 8);
    v68 = v6;
    v7 = GameData_212bf68;
    v8 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 20, 16, 0);
    v9 = 0;
    v10 = 26;
    *(_QWORD*)v8 = 0x1C0000001ALL;
    *(_QWORD*)(v8 + 8) = 0x1B00000019LL;
    *(_DWORD*)(v8 + 16) = 24;
    v11 = GameData_2130920[0];
    v12 = GameData_212c880[0];
    v13 = GameData_212c8a8;
  LABEL_6:
    v14 = *(_QWORD*)(*v12 + 64);
    v15 = *(_QWORD*)(v14 + 8LL * *((int*)v11 + v10));
    if (v15 == 0) {
      goto LABEL_32;
    }
    v16 = *(_QWORD*)(v14 + 8LL * *((int*)v11 + v10));
    while (1) {
      v18 = *(unsigned int*)(*(_QWORD*)(v16 + 24) + 4LL);
      v19 = v18 & 0xFFF;
      if ((v18 & 0xFFF) == 0) {
        v20 = v6[182];
        v21 = (v6[183] - v20) >> 2;
        goto LABEL_23;
      }
      v20 = v6[182];
      v21 = (v6[183] - v20) >> 2;
      if (v21 < ((v18 >> 5) & 0x7F) + 1 ||
          ((*(_DWORD*)(v20 + 4 * ((v18 >> 5) & 0x7F)) >> v18) & 1) == 0 ||
          (v22 = v6[187], v23 = v6[186], v22 == v23)) {
      LABEL_8:
        v17 = 0xFFFFFFFFLL;
      }
      else {
        v24 = (v22 - v23) >> 2;
        v25 = 0;
        while (((*(_DWORD*)(v23 + 4 * v25) ^ (unsigned int)v18) & 0xFFF) != 0) {
          if (v24 == ++v25) {
            goto LABEL_8;
          }
        }
        v17 = (unsigned int)v25;
        if ((v25 & 0x80000000) == 0) {
        LABEL_19:
          if ((v17 & 0x80000000) == 0) {
            v26 = v6[186];
          LABEL_21:
            v27 = (_DWORD*)(v26 + 4 * v17);
            goto LABEL_33;
          }
        LABEL_23:
          v28 = *(unsigned __int16*)(v15 + 16);
          v29 = (v28 >> 5) & 0x7F;
          if (v21 >= v29 + 1) {
            v30 = v28 & 0xFFF;
            if (((*(_DWORD*)(v20 + 4LL * (unsigned int)v29) >> v30) & 1) != 0) {
              v31 = v6[187];
              v26 = v6[186];
              if (v31 != v26) {
                v32 = (v31 - v26) >> 2;
                v33 = 0;
                while ((*(_DWORD*)(v26 + 4 * v33) & 0xFFF) != v30) {
                  if (v32 == ++v33) {
                    goto LABEL_32;
                  }
                }
                if ((v33 & 0x8000000000000000LL) == 0) {
                  v17 = (unsigned int)v33;
                  goto LABEL_21;
                }
              }
            }
          }
        LABEL_32:
          v27 = v13;
        LABEL_33:
          if ((*(_WORD*)v27 & 0xFFF) == 0 ||
              (GameRoutine_128e990(*(_QWORD*)(a1 + 8), v27) & 1) == 0) {
            goto LABEL_78;
          }
          v34 = *(_QWORD*)(a1 + 8);
          v35 = *v27 & 0xFFF;
          v36 = *(_QWORD*)(*v12 + 64);
          v69 = v27;
          v37 = *(_QWORD*)(v36 + 8 * v35);
          v38 = GameRoutine_128f580(v34);
          v39 = 0;
          if (v38 != 0 && *(_BYTE*)(v37 + 104) == 3) {
            v40 = *(unsigned __int8*)(v37 + 106);
            if (v40 == 3) {
              if (v38 == 5) {
                if (*(_BYTE*)(v37 + 250) == 0) {
                  v39 = 8;
                  goto LABEL_74;
                }
              }
              else if (v38 == 4) {
                if (*(_BYTE*)(v37 + 250) == 28) {
                  v39 = 7;
                  goto LABEL_74;
                }
              }
              else if (v38 == 2 && *(_BYTE*)(v37 + 250) == 13) {
                v39 = 2;
                goto LABEL_74;
              }
            }
            else if (v40 == 2) {
              if (v38 == 4) {
                v39 = 5;
                goto LABEL_74;
              }
            }
            else if (v40 == 1 && v38 <= 9u) {
              if (((1 << v38) & 0x38A) != 0) {
                HIDWORD(v70) = 1;
                if (v10 == 26) {
                  v42 = 1040;
                }
                else {
                  v42 = 16;
                }
                LODWORD(v70) = v42;
                if ((GameRoutine_128f6c0(&v68, &v59) & 1) != 0 &&
                    (v75 == 0 || v74 < v60 || v78 < 0 ||
                     v74 <= v60 && (v78 | (v79 << 16)) > (v61 | (v62 << 16)))) {
                  v43 = *v12;
                  v74 = v60;
                  v44 = *(_QWORD*)(*(_QWORD*)(v43 + 64) + 8LL * (*v27 & 0xFFF));
                  v77 = v60;
                  v78 = v61;
                  v79 = v62;
                  v75 = v44;
                  v76 = v59;
                  v81 = v64;
                  GameRoutine_1226120((__int64)&v65, (__int64)&v82);
                  v80 = v63;
                  if (v10 != 26 && v9 < 4) {
                  LABEL_79:
                    ++v9;
                    v6 = *(_QWORD**)(a1 + 8);
                    v10 = *(_DWORD*)(v8 + 4 * v9);
                    goto LABEL_6;
                  }
                LABEL_82:
                  if (v75 != 0) {
                    GameRoutine_1290c20(a1, (__int64)&v74, v58);
                    v46 = 1;
                  }
                  else {
                    v46 = 0;
                  }
                  v47 = 128;
                  if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
                    v47 = 56;
                  }
                  GameRoutine_1a0a4e0(*(_QWORD*)v7 + v47);
                  v48 = v67;
                  if (v67 != nullptr) {
                    do {
                      v49 = (_QWORD*)*v48;
                      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
                        v50 = 128;
                      }
                      else {
                        v50 = 56;
                      }
                      GameRoutine_1a0a4e0(*(_QWORD*)v7 + v50);
                      v48 = v49;
                    } while (v49 != nullptr);
                  }
                  v51 = v66;
                  v66 = 0;
                  if (v51 != 0) {
                    v52 = 128;
                    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
                      v52 = 56;
                    }
                    GameRoutine_1a0a4e0(*(_QWORD*)v7 + v52);
                  }
                  v53 = v84;
                  if (v84 != nullptr) {
                    do {
                      v54 = (_QWORD*)*v53;
                      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
                        v55 = 128;
                      }
                      else {
                        v55 = 56;
                      }
                      GameRoutine_1a0a4e0(*(_QWORD*)v7 + v55);
                      v53 = v54;
                    } while (v54 != nullptr);
                  }
                  v56 = v83;
                  v83 = 0;
                  if (v56 != 0) {
                    v57 = 128;
                    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
                      v57 = 56;
                    }
                    GameRoutine_1a0a4e0(*(_QWORD*)v7 + v57);
                  }
                  return v46;
                }
              LABEL_78:
                if (v9 <= 3) {
                  goto LABEL_79;
                }
                goto LABEL_82;
              }
              if (((1 << v38) & 0x50) != 0) {
                v39 = 6;
                goto LABEL_74;
              }
              if (v38 == 2) {
                if (*(__int16*)(v37 + 330) <= 0) {
                  v39 = 3;
                }
                else {
                  v39 = 4;
                }
                goto LABEL_74;
              }
            }
            v39 = 0;
          }
        LABEL_74:
          HIDWORD(v70) = v39;
          if (v10 == 26) {
            v45 = 1040;
          }
          else {
            v45 = 16;
          }
          LODWORD(v70) = v45;
          goto LABEL_78;
        }
      }
      v16 = *(_QWORD*)(v14 + 8 * v19);
      if (v16 == 0) {
        goto LABEL_19;
      }
    }
  }
  return result;
}

__int64 GameHr_1298700(__int64 a1, __int64 a2, __int64 a3)
{
  int v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  _DWORD* v12;
  int v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _DWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int8 v39;
  int v40;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  __int64 v45;
  _QWORD* v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _DWORD v56[2];
  unsigned int v57;
  int v58;
  int v59;
  int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  _DWORD* v66;
  __int64 v67;
  char v68;
  int v69;
  __int64 v70;
  unsigned int v71;
  __int64 v72;
  _DWORD v73[6];
  __int64 v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  int v78[3];

  if ((GameRoutine_11f44e0(*(_QWORD*)(a1 + 8), 0) & 1) == 0 ||
      (unsigned __int8)GameRoutine_128f580(*(_QWORD*)(a1 + 8)) != 8) {
    return 0;
  }
  v5 = *(__int16*)(a3 + 2);
  result = 0;
  if ((v5 & 0x80000000) == 0 && *(_BYTE*)a3 == 0) {
    (**(void (***)(__int64, _QWORD))(*(_QWORD*)GameData_21306c0[0] + 8LL))(
        *(_QWORD*)GameData_21306c0[0] + 8LL, *(_QWORD*)(a1 + 8));
    v78[0] = 2;
    GameRoutine_1274f90(*(_QWORD**)GameData_21306a0[0], *(_QWORD*)(a1 + 8),
                        0xFFFFFFFF, v78);
    v71 = 0;
    v72 = 0;
    GameRoutine_12a1580(v73);
    v68 = 0;
    v67 = 0;
    v66 = nullptr;
    v69 = -1;
    v70 = 0;
    GameRoutine_12a1580(v56);
    v65 = *(_QWORD*)(a1 + 8);
    LODWORD(v67) = 1152;
    v7 = GameData_212bf68;
    v8 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 12, 16, 0);
    v9 = 0;
    *(_QWORD*)v8 = 0x2E0000002FLL;
    *(_DWORD*)(v8 + 8) = 45;
    v10 = GameData_2130920[0];
    v11 = GameData_212c880[0];
    v12 = GameData_212c8a8;
    while (1) {
      v14 = *(_QWORD**)(a1 + 8);
      v15 = *(_QWORD*)(*v11 + 64);
      v16 = *(_QWORD*)(v15 + 8LL * *((int*)v10 + *(int*)(v8 + v9)));
      if (v16 == 0) {
        goto LABEL_38;
      }
      v17 = *(_QWORD*)(v15 + 8LL * *((int*)v10 + *(int*)(v8 + v9)));
      while (1) {
        v19 = *(unsigned int*)(*(_QWORD*)(v17 + 24) + 4LL);
        v20 = v19 & 0xFFF;
        if ((v19 & 0xFFF) == 0) {
          v21 = v14[182];
          v22 = (v14[183] - v21) >> 2;
          goto LABEL_29;
        }
        v21 = v14[182];
        v22 = (v14[183] - v21) >> 2;
        if (v22 >= ((v19 >> 5) & 0x7F) + 1 &&
            ((*(_DWORD*)(v21 + 4 * ((v19 >> 5) & 0x7F)) >> v19) & 1) != 0) {
          v23 = v14[187];
          v24 = v14[186];
          if (v23 != v24) {
            break;
          }
        }
      LABEL_14:
        v18 = 0xFFFFFFFFLL;
      LABEL_15:
        v17 = *(_QWORD*)(v15 + 8 * v20);
        if (v17 == 0) {
          goto LABEL_25;
        }
      }
      v25 = (v23 - v24) >> 2;
      v26 = 0;
      while (((*(_DWORD*)(v24 + 4 * v26) ^ (unsigned int)v19) & 0xFFF) != 0) {
        if (v25 == ++v26) {
          goto LABEL_14;
        }
      }
      v18 = (unsigned int)v26;
      if ((v26 & 0x80000000) != 0) {
        goto LABEL_15;
      }
    LABEL_25:
      if ((v18 & 0x80000000) == 0) {
        v27 = v14[186];
      LABEL_27:
        v28 = (_DWORD*)(v27 + 4 * v18);
        goto LABEL_39;
      }
    LABEL_29:
      v29 = *(unsigned __int16*)(v16 + 16);
      v30 = (v29 >> 5) & 0x7F;
      if (v22 >= v30 + 1) {
        v31 = v29 & 0xFFF;
        if (((*(_DWORD*)(v21 + 4LL * (unsigned int)v30) >> v31) & 1) != 0) {
          v32 = v14[187];
          v27 = v14[186];
          if (v32 != v27) {
            v33 = (v32 - v27) >> 2;
            v34 = 0;
            while ((*(_DWORD*)(v27 + 4 * v34) & 0xFFF) != v31) {
              if (v33 == ++v34) {
                goto LABEL_38;
              }
            }
            if ((v34 & 0x8000000000000000LL) == 0) {
              v18 = (unsigned int)v34;
              goto LABEL_27;
            }
          }
        }
      }
    LABEL_38:
      v28 = v12;
    LABEL_39:
      if ((*(_WORD*)v28 & 0xFFF) != 0 &&
          (GameRoutine_128e990((__int64)v14, v28) & 1) != 0) {
        v35 = *(_QWORD*)(a1 + 8);
        v36 = *v28 & 0xFFF;
        v37 = *(_QWORD*)(*v11 + 64);
        v66 = v28;
        v38 = *(_QWORD*)(v37 + 8 * v36);
        v39 = GameRoutine_128f580(v35);
        v13 = 0;
        if (v39 == 0 || *(_BYTE*)(v38 + 104) != 3) {
          goto LABEL_10;
        }
        v40 = *(unsigned __int8*)(v38 + 106);
        if (v40 == 3) {
          if (v39 == 5) {
            if (*(_BYTE*)(v38 + 250) == 0) {
              v13 = 8;
              goto LABEL_10;
            }
            goto LABEL_9;
          }
          if (v39 == 4) {
            if (*(_BYTE*)(v38 + 250) == 28) {
              v13 = 7;
              goto LABEL_10;
            }
            goto LABEL_9;
          }
          if (v39 != 2 || *(_BYTE*)(v38 + 250) != 13) {
            goto LABEL_9;
          }
          v13 = 2;
        }
        else if (v40 == 2) {
          if (v39 != 4) {
            goto LABEL_9;
          }
          v13 = 5;
        }
        else {
          if (v40 == 1 && v39 <= 9u) {
            if (((1 << v39) & 0x38A) != 0) {
              HIDWORD(v67) = 1;
              if ((GameRoutine_128f6c0(&v65, v56) & 1) != 0 &&
                  (v72 == 0 || v71 < v57)) {
                v42 = *v11;
                v71 = v57;
                v43 = *(_QWORD*)(*(_QWORD*)(v42 + 64) + 8LL * (*v28 & 0xFFF));
                v73[2] = v57;
                v72 = v43;
                v73[0] = v56[0];
                v73[1] = v56[1];
                v74 = v61;
                v73[3] = v58;
                v73[4] = v59;
                GameRoutine_1226120((__int64)&v62, (__int64)&v75);
                v73[5] = v60;
              }
              goto LABEL_11;
            }
            if (((1 << v39) & 0x50) != 0) {
              v13 = 6;
              goto LABEL_10;
            }
            if (v39 == 2) {
              if (*(__int16*)(v38 + 330) <= 0) {
                v13 = 3;
              }
              else {
                v13 = 4;
              }
              goto LABEL_10;
            }
          }
        LABEL_9:
          v13 = 0;
        }
      LABEL_10:
        HIDWORD(v67) = v13;
      }
    LABEL_11:
      v9 += 4;
      if (v9 == 12) {
        if (v72 != 0) {
          GameRoutine_1290c20(a1, (__int64)&v71, v5);
          v44 = 1;
        }
        else {
          v44 = 0;
        }
        v45 = 128;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
          v45 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)v7 + v45);
        v46 = v64;
        if (v64 != nullptr) {
          do {
            v47 = (_QWORD*)*v46;
            if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
              v48 = 128;
            }
            else {
              v48 = 56;
            }
            GameRoutine_1a0a4e0(*(_QWORD*)v7 + v48);
            v46 = v47;
          } while (v47 != nullptr);
        }
        v49 = v63;
        v63 = 0;
        if (v49 != 0) {
          v50 = 128;
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
            v50 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v7 + v50);
        }
        v51 = v77;
        if (v77 != nullptr) {
          do {
            v52 = (_QWORD*)*v51;
            if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
              v53 = 128;
            }
            else {
              v53 = 56;
            }
            GameRoutine_1a0a4e0(*(_QWORD*)v7 + v53);
            v51 = v52;
          } while (v52 != nullptr);
        }
        v54 = v76;
        v76 = 0;
        if (v54 != 0) {
          v55 = 128;
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
            v55 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v7 + v55);
        }
        return v44;
      }
    }
  }
  return result;
}

__int64* GameHr_12b3420(__int64* result, __int64 a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64* v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64* v45;
  unsigned __int64* v46;
  __int64* v47;
  _QWORD* v48;
  __int64* v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v53;
  unsigned __int64 v54;
  _QWORD* v55;
  _QWORD* v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64* v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v63;
  unsigned __int64 v64;
  _QWORD* v65;
  _QWORD* v66;
  unsigned __int64 v67;
  __int64 v68;
  _QWORD* v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  _QWORD* v77;
  __int64 v78;
  int v79;

  v2 = *(_QWORD*)(a2 + 8);
  v77 = nullptr;
  v78 = 0;
  v75 = 0;
  v76 = 0;
  v4 = result;
  v79 = 1065353216;
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  v6 = *(unsigned __int8*)(v2 + v5);
  *(_DWORD*)(a2 + 20) = v5 + 2;
  v7 = v6 | (*(unsigned __int8*)(v2 + v5 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v5 + 3;
  v8 = *(unsigned __int8*)(v2 + v5 + 2);
  *(_DWORD*)(a2 + 20) = v5 + 4;
  v9 = *result;
  v10 = v7 | (v8 << 16) | (*(unsigned __int8*)(v2 + v5 + 3) << 24);
  v11 = GameData_212bf68;
  if (v10 > (result[2] - *result) >> 3) {
    v12 = result[1] - v9;
    v13 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v10, 16, 0);
    result = (__int64*)GameRoutine_1a0b950(v13, v9, v12);
    *v4 = v13;
    v4[1] = v13 + v12;
    v4[2] = v13 + 8 * v10;
    if (v9 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v14 = 56;
      }
      result = (__int64*)GameRoutine_1a0a4e0(*(_QWORD*)v11 + v14);
    }
  }
  v15 = (unsigned __int64)(float)(unsigned int)v10;
  if (v15 == 1) {
    v15 = 2;
  LABEL_11:
    result = (__int64*)GameRoutine_8cfec0(&v75, v15);
    goto LABEL_12;
  }
  if ((v15 & (v15 - 1)) != 0) {
    result = (__int64*)GameRoutine_1a09d00(
        (unsigned __int64)(float)(unsigned int)v10);
    v15 = (unsigned __int64)result;
  }
  if (v15 != 0) {
    goto LABEL_11;
  }
LABEL_12:
  if ((_DWORD)v10 != 0) {
    v16 = 0;
    do {
      v17 = *(int*)(a2 + 20);
      v18 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v17 + 1;
      v19 = *(unsigned __int8*)(v18 + v17);
      *(_DWORD*)(a2 + 20) = v17 + 2;
      v20 = v19 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v17 + 3;
      v21 = v20 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 2) << 16);
      *(_DWORD*)(a2 + 20) = v17 + 4;
      v22 = v21 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 3) << 24);
      *(_DWORD*)(a2 + 20) = v17 + 5;
      v23 = v22 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 4) << 32);
      *(_DWORD*)(a2 + 20) = v17 + 6;
      v24 = v23 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 5) << 40);
      *(_DWORD*)(a2 + 20) = v17 + 7;
      v25 = *(unsigned __int8*)(v18 + v17 + 6);
      *(_DWORD*)(a2 + 20) = v17 + 8;
      v26 = v24 | (v25 << 48) |
            ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 7) << 56);
      v74 = v26;
      if (v76 != 0 && v78 != 0) {
        v27 = v76 - 1;
        if ((v76 & (v76 - 1)) != 0) {
          v28 = v26;
          if (v26 >= v76) {
            v28 = v26 % v76;
          }
        }
        else {
          v28 = v27 & v26;
        }
        v29 = *(_QWORD**)(v75 + 8 * v28);
        if (v29 != nullptr) {
          v30 = (_QWORD*)*v29;
          if (v30 != nullptr) {
            if ((v76 & v27) == 0) {
              while (1) {
                v32 = v30[1];
                if (v26 == v32) {
                  if (v30[2] == v26) {
                    goto LABEL_52;
                  }
                }
                else if ((v32 & v27) != v28) {
                  goto LABEL_35;
                }
                v30 = (_QWORD*)*v30;
                if (v30 == nullptr) {
                  goto LABEL_35;
                }
              }
            }
            do {
              v31 = v30[1];
              if (v26 == v31) {
                if (v30[2] == v26) {
                  goto LABEL_52;
                }
              }
              else {
                if (v31 >= v76) {
                  v31 %= v76;
                }
                if (v31 != v28) {
                  break;
                }
              }
              v30 = (_QWORD*)*v30;
            } while (v30 != nullptr);
          }
        }
      }
    LABEL_35:
      v34 = (unsigned __int64*)v4[1];
      v33 = v4[2];
      if ((unsigned __int64)v34 >= v33) {
        v36 = (_QWORD*)*v4;
        v37 = (__int64)v34 - *v4;
        v38 = (v37 >> 3) + 1;
        if (v38 >> 61 != 0) {
          GameRoutine_12b6e10(result);
        }
        v39 = v33 - (_QWORD)v36;
        if (v39 >> 2 > v38) {
          v38 = v39 >> 2;
        }
        if ((unsigned __int64)v39 >= 0x7FFFFFFFFFFFFFF8LL) {
          v40 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v40 = v38;
        }
        if (v40 != 0) {
          if (v40 >> 61 != 0) {
            GameRoutine_60a210(result);
          }
          v41 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v40, 16, 0);
        }
        else {
          v41 = 0;
        }
        v42 = v41 + 8 * v40;
        v43 = v41 + v37 - 8 * (v37 >> 3);
        *(_QWORD*)(v41 + v37) = v26;
        v35 = v41 + v37 + 8;
        GameRoutine_1a0b950(v43, v36, v37);
        *v4 = v43;
        v4[1] = v35;
        v4[2] = v42;
        if (v36 != nullptr) {
          v44 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v44 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v44);
        }
      }
      else {
        *v34 = v26;
        v35 = (__int64)(v34 + 1);
      }
      v4[1] = v35;
      result = GameRoutine_1244680((float*)&v75, &v74, (__int64*)&v74);
    LABEL_52:
      ++v16;
    } while (v16 != (_DWORD)v10);
  }
  v46 = (unsigned __int64*)*v4;
  v45 = (unsigned __int64*)v4[1];
  v47 = GameData_212ccd0[0];
  if ((unsigned __int64*)*v4 != v45) {
    v48 = (_QWORD*)*GameData_212ccd0[0];
    v49 = (__int64*)GameData_212bf68;
    while (1) {
      v50 = *v46;
      if (*v46 == 0) {
        goto LABEL_84;
      }
      v51 = v48[12];
      if (v51 == 0 || v48[14] == 0) {
        goto LABEL_84;
      }
      v53 = v51 - 1;
      if ((v51 & (v51 - 1)) != 0) {
        v54 = *v46;
        if (v50 >= v51) {
          v54 = v50 % v51;
        }
      }
      else {
        v54 = v53 & v50;
      }
      v55 = *(_QWORD**)(v48[11] + 8 * v54);
      if (v55 == nullptr) {
        goto LABEL_84;
      }
      v56 = (_QWORD*)*v55;
      if (v56 == nullptr) {
        goto LABEL_84;
      }
      if ((v51 & v53) == 0) {
        while (1) {
          v58 = v56[1];
          if (v58 == v50) {
            if (v56[2] == v50) {
              goto LABEL_80;
            }
          }
          else if ((v58 & v53) != v54) {
            goto LABEL_84;
          }
          v56 = (_QWORD*)*v56;
          if (v56 == nullptr) {
            goto LABEL_84;
          }
        }
      }
      while (1) {
        v57 = v56[1];
        if (v57 == v50) {
          break;
        }
        if (v57 >= v51) {
          v57 %= v51;
        }
        if (v57 != v54) {
          goto LABEL_84;
        }
      LABEL_69:
        v56 = (_QWORD*)*v56;
        if (v56 == nullptr) {
          goto LABEL_84;
        }
      }
      if (v56[2] != v50) {
        goto LABEL_69;
      }
    LABEL_80:
      if (v56[3] == 0) {
        goto LABEL_84;
      }
      if (++v46 == v45) {
        goto LABEL_118;
      }
    }
  }
  v49 = &GameData_2265ee0;
LABEL_84:
  if (v46 != v45) {
    v59 = v46 + 1;
    if (v46 + 1 != v45) {
      do {
        v60 = *v59;
        if (*v59 != 0) {
          v61 = *(_QWORD*)(*v47 + 96);
          if (v61 != 0 && *(_QWORD*)(*v47 + 112) != 0) {
            v63 = v61 - 1;
            if ((v61 & (v61 - 1)) != 0) {
              v64 = *v59;
              if (v60 >= v61) {
                v64 = v60 % v61;
              }
            }
            else {
              v64 = v63 & v60;
            }
            v65 = *(_QWORD**)(*(_QWORD*)(*v47 + 88) + 8 * v64);
            if (v65 != nullptr) {
              v66 = (_QWORD*)*v65;
              if (v66 != nullptr) {
                if ((v61 & v63) == 0) {
                  while (1) {
                    v68 = v66[1];
                    if (v68 == v60) {
                      if (v66[2] == v60) {
                        goto LABEL_113;
                      }
                    }
                    else if ((v68 & v63) != v64) {
                      goto LABEL_87;
                    }
                    v66 = (_QWORD*)*v66;
                    if (v66 == nullptr) {
                      goto LABEL_87;
                    }
                  }
                }
                do {
                  v67 = v66[1];
                  if (v67 == v60) {
                    if (v66[2] == v60) {
                    LABEL_113:
                      if (v66[3] != 0) {
                        *v46++ = v60;
                      }
                      break;
                    }
                  }
                  else {
                    if (v67 >= v61) {
                      v67 %= v61;
                    }
                    if (v67 != v64) {
                      break;
                    }
                  }
                  v66 = (_QWORD*)*v66;
                } while (v66 != nullptr);
              }
            }
          }
        }
      LABEL_87:
        ++v59;
      } while (v59 != v45);
      v45 = (unsigned __int64*)v4[1];
    }
  }
  if (v46 != v45) {
    v4[1] = (__int64)v46;
  }
LABEL_118:
  v69 = v77;
  if (v77 != nullptr) {
    do {
      v70 = (_QWORD*)*v69;
      if (*(_QWORD*)(*v49 + 200) != 0) {
        v71 = 128;
      }
      else {
        v71 = 56;
      }
      result = (__int64*)GameRoutine_1a0a4e0(*v49 + v71);
      v69 = v70;
    } while (v70 != nullptr);
  }
  v72 = v75;
  v75 = 0;
  if (v72 != 0) {
    v73 = 128;
    if (*(_QWORD*)(*v49 + 200) == 0) {
      v73 = 56;
    }
    return (__int64*)GameRoutine_1a0a4e0(*v49 + v73);
  }
  return result;
}

__int64 GameHr_12b8260(__int64 result, __int64* a2, unsigned __int64 a3,
                       __int64* a4)
{
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned __int64 v28;
  __int64 v29;
  __int64* v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  __int64 v44;
  __int64 v45;

  switch (a3) {
  case 0uLL:
    return result;
  case 2uLL:
    v4 = *(a2 - 1);
    v5 = *(unsigned __int8*)(v4 + 8);
    v6 = *(unsigned __int8*)(*(_QWORD*)result + 8LL);
    v7 = v6 & 0xFE;
    if ((v5 & 0xFE) == 4) {
      if (v7 == 4 && v5 < v6) {
        goto LABEL_10;
      }
    }
    else if (v7 == 4) {
    LABEL_10:
      *a4 = v4;
      v9 = *(_QWORD*)result;
    LABEL_39:
      a4[1] = v9;
      return result;
    }
    *a4 = *(_QWORD*)result;
    v9 = *(a2 - 1);
    goto LABEL_39;
  case 1uLL:
    *a4 = *(_QWORD*)result;
    return result;
  default:
    break;
  }
  if ((__int64)a3 <= 8) {
    if ((__int64*)result == a2) {
      return result;
    }
    v10 = *(_QWORD*)result;
    result += 8;
    *a4 = v10;
    if ((__int64*)result == a2) {
      return result;
    }
    v11 = 0;
    v12 = a4;
    v13 = a4;
  LABEL_18:
    v16 = *v13++;
    v15 = v16;
    v17 = *(unsigned __int8*)(*(_QWORD*)result + 8LL);
    v18 = *(unsigned __int8*)(v16 + 8);
    v19 = v18 & 0xFE;
    if ((v17 & 0xFE) == 4) {
      if (v19 != 4 || v17 >= v18) {
      LABEL_35:
        *v13 = *(_QWORD*)result;
        goto LABEL_17;
      }
    }
    else if (v19 != 4) {
      goto LABEL_35;
    }
    v12[1] = v15;
    v14 = a4;
    if (v12 == a4) {
      goto LABEL_16;
    }
    v21 = v11;
    while (1) {
      v22 = (__int64*)((char*)a4 + v21);
      v23 = *(__int64*)((char*)a4 + v21 - 8);
      v24 = *(unsigned __int8*)(*(_QWORD*)result + 8LL);
      v25 = *(unsigned __int8*)(v23 + 8);
      v26 = v25 & 0xFE;
      if ((v24 & 0xFE) == 4) {
        if (v26 != 4 || v24 >= v25) {
          v14 = v12;
          goto LABEL_16;
        }
      }
      else if (v26 != 4) {
        v14 = (__int64*)((char*)a4 + v21);
      LABEL_16:
        *v14 = *(_QWORD*)result;
      LABEL_17:
        result += 8;
        v11 += 8;
        v12 = v13;
        if ((__int64*)result == a2) {
          return result;
        }
        goto LABEL_18;
      }
      --v12;
      v21 -= 8;
      *v22 = v23;
      if (v21 == 0) {
        v14 = a4;
        goto LABEL_16;
      }
    }
  }
  v28 = a3 >> 1;
  v29 = result;
  v33 = (__int64*)(result + 8 * (a3 >> 1));
  v34 = 8 * (a3 >> 1);
  GameRoutine_12b7f80(result, v33, v28, a4, v28);
  result = GameRoutine_12b7f80((__int64)v33, a2, a3 - v28, &a4[v28], a3 - v28);
  if (v34 != 0) {
    v35 = v33;
    v36 = a4;
    v37 = a2;
    v38 = (__int64*)v29;
    while (1) {
      if (v35 == a2) {
        while (v38 != v33) {
          v44 = *v38++;
          *v36++ = v44;
        }
        return result;
      }
      v39 = *v35;
      v40 = *(unsigned __int8*)(*v35 + 8);
      v41 = *(unsigned __int8*)(*v38 + 8);
      v42 = v41 & 0xFE;
      if ((v40 & 0xFE) == 4) {
        if (v42 != 4 || v40 >= v41) {
        LABEL_53:
          *v36 = *v38++;
          goto LABEL_43;
        }
      }
      else if (v42 != 4) {
        goto LABEL_53;
      }
      ++v35;
      *v36 = v39;
    LABEL_43:
      ++v36;
      if (v38 == v33) {
        goto LABEL_59;
      }
    }
  }
  v35 = v33;
  v36 = a4;
  v37 = a2;
LABEL_59:
  while (v35 != v37) {
    v45 = *v35++;
    *v36++ = v45;
  }
  return result;
}

__int64 GameHr_12c4be0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  bool v14;
  __int64 v15;
  unsigned __int64 v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 392LL);
  result = GameRoutine_682780(1);
  if (v2 == result) {
    GameRoutine_12c45b0(&v28, *(_QWORD*)(a1 + 8), 0);
    v22 = *(_QWORD*)(a1 + 8);
    HIWORD(v27) = 0;
    if ((GameRoutine_12c4780(&v28, *(_QWORD*)(v22 + 400), (__int64)&v25) & 1) !=
        0) {
      *(_QWORD*)(a1 + 96) = v25;
      v23 = v27;
      *(_DWORD*)(a1 + 104) = v26;
      *(_DWORD*)(a1 + 108) = v23;
    }
    if (v30 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v24 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v24);
    }
    result = v29;
    if (v29 != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
    }
  }
  else {
    v4 = *(_QWORD*)(a1 + 8);
    if (*(_BYTE*)(v4 + 1880) != 0) {
      v5 = *(_QWORD*)(v4 + 400);
      v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                      8LL * *(unsigned __int8*)(v4 + 1880));
      if (v6 != 0 && *(_BYTE*)(v5 + 96) == 2) {
        v8 = *(_QWORD*)(v5 + 112);
        if (v8 != 0 &&
            *(unsigned __int8*)(v6 + 32) == *(unsigned __int8*)(v8 + 32)) {
          *(_QWORD*)(a1 + 96) = v6;
          v9 = *(_QWORD*)(v4 + 392);
          if (v9 != 0) {
            v10 = *(_QWORD*)(v4 + 1904);
            if (v10 == 0) {
              goto LABEL_22;
            }
            v11 = v4 + 1904;
            v12 = *(unsigned __int8*)(v9 + 48);
            v9 = v11;
            do {
              v13 = *(unsigned __int8*)(v10 + 26);
              v14 = v13 >= v12;
              if (v13 >= v12) {
                v15 = 0;
              }
              else {
                v15 = 8;
              }
              if (v14) {
                v9 = v10;
              }
              v10 = *(_QWORD*)(v10 + v15);
            } while (v10 != 0);
            if (v9 != v11 && v12 >= *(unsigned __int8*)(v9 + 26)) {
              LODWORD(v9) = *(_WORD*)(v9 + 28) & 0xFFF;
            }
            else {
            LABEL_22:
              LODWORD(v9) = 0;
            }
          }
          v16 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
          if ((int)v16 < 1) {
            v17 = 0;
          }
          else {
            v17 = 0;
            v18 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v16 - 1));
            if (v18 >= (int)v9) {
              v18 = v9;
            }
            if ((int)v9 >= *(_DWORD*)GameData_21d9988) {
              v19 = v18;
            }
            else {
              v19 = *(_DWORD*)GameData_21d9988;
            }
            while (1) {
              v20 = (unsigned int)(v17 + v16) >> 1;
              v21 = *(_DWORD*)(GameData_21d9988 + 4LL * v20);
              if (v19 == v21) {
                break;
              }
              if (v19 < v21) {
                LODWORD(v16) = (unsigned int)(v17 + v16) >> 1;
              }
              else {
                v17 = v20 + 1;
              }
              if (v17 >= (int)v16) {
                goto LABEL_45;
              }
            }
            v17 = v20 + 1;
          }
        LABEL_45:
          *(_DWORD*)(a1 + 104) = v17;
          *(_DWORD*)(a1 + 108) = 1;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_12eae80(__int64 result, __int64* a2, unsigned __int64 a3,
                       __int64* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  switch (a3) {
  case 0uLL:
    return result;
  case 2uLL:
    v4 = *(a2 - 1);
    v5 = *(_QWORD*)result;
    if ((*(_WORD*)(v4 + 40) != 0) !=
        (*(_WORD*)(*(_QWORD*)result + 40LL) != 0)) {
      if (*(_WORD*)(v4 + 40) != 0) {
      LABEL_7:
        *a4 = v4;
        v6 = *(_QWORD*)result;
      LABEL_29:
        a4[1] = v6;
        return result;
      }
    }
    else if (*(unsigned __int16*)(v4 + 16) <
             (unsigned int)*(unsigned __int16*)(v5 + 16)) {
      goto LABEL_7;
    }
    *a4 = v5;
    v6 = *(a2 - 1);
    goto LABEL_29;
  case 1uLL:
    *a4 = *(_QWORD*)result;
    return result;
  default:
    break;
  }
  if ((__int64)a3 <= 8) {
    if ((__int64*)result == a2) {
      return result;
    }
    v7 = *(_QWORD*)result;
    result += 8;
    *a4 = v7;
    if ((__int64*)result == a2) {
      return result;
    }
    v8 = 0;
    v9 = a4;
    v10 = a4;
  LABEL_15:
    v12 = *(_QWORD*)result;
    v14 = *v10++;
    v13 = v14;
    if ((*(_WORD*)(*(_QWORD*)result + 40LL) != 0) !=
        (*(_WORD*)(v14 + 40) != 0)) {
      if (*(_WORD*)(*(_QWORD*)result + 40LL) == 0) {
        goto LABEL_25;
      }
    }
    else if (*(unsigned __int16*)(v12 + 16) >=
             (unsigned int)*(unsigned __int16*)(v13 + 16)) {
    LABEL_25:
      *v10 = v12;
      goto LABEL_14;
    }
    v9[1] = v13;
    v11 = a4;
    if (v9 == a4) {
      goto LABEL_13;
    }
    v15 = v8;
    while (1) {
      v16 = (__int64*)((char*)a4 + v15);
      v17 = *(__int64*)((char*)a4 + v15 - 8);
      if ((*(_WORD*)(*(_QWORD*)result + 40LL) != 0) !=
          (*(_WORD*)(v17 + 40) != 0)) {
        if (*(_WORD*)(*(_QWORD*)result + 40LL) == 0) {
          v11 = (__int64*)((char*)a4 + v15);
        LABEL_13:
          *v11 = *(_QWORD*)result;
        LABEL_14:
          result += 8;
          v8 += 8;
          v9 = v10;
          if ((__int64*)result == a2) {
            return result;
          }
          goto LABEL_15;
        }
      }
      else if (*(unsigned __int16*)(*(_QWORD*)result + 16LL) >=
               (unsigned int)*(unsigned __int16*)(v17 + 16)) {
        v11 = v9;
        goto LABEL_13;
      }
      --v9;
      v15 -= 8;
      *v16 = v17;
      if (v15 == 0) {
        v11 = a4;
        goto LABEL_13;
      }
    }
  }
  v18 = a3 >> 1;
  v19 = result;
  v23 = (__int64*)(result + 8 * (a3 >> 1));
  v24 = 8 * (a3 >> 1);
  GameRoutine_12eaba0(result, v23, v18, a4, v18);
  result = GameRoutine_12eaba0((__int64)v23, a2, a3 - v18, &a4[v18], a3 - v18);
  if (v24 != 0) {
    v25 = v23;
    v26 = a4;
    v27 = a2;
    v28 = (__int64*)v19;
    while (1) {
      if (v25 == a2) {
        while (v28 != v23) {
          v31 = *v28++;
          *v26++ = v31;
        }
        return result;
      }
      v29 = *v25;
      v30 = *v28;
      if ((*(_WORD*)(*v25 + 40) != 0) != (*(_WORD*)(*v28 + 40) != 0)) {
        if (*(_WORD*)(*v25 + 40) == 0) {
          goto LABEL_38;
        }
      }
      else if (*(unsigned __int16*)(v29 + 16) >=
               (unsigned int)*(unsigned __int16*)(v30 + 16)) {
      LABEL_38:
        *v26 = v30;
        ++v28;
        goto LABEL_34;
      }
      ++v25;
      *v26 = v29;
    LABEL_34:
      ++v26;
      if (v28 == v23) {
        goto LABEL_44;
      }
    }
  }
  v25 = v23;
  v26 = a4;
  v27 = a2;
LABEL_44:
  while (v25 != v27) {
    v32 = *v25++;
    *v26++ = v32;
  }
  return result;
}

__int64 GameHr_12f4020(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  _DWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;

  LODWORD(v16) = 17;
  result = GameRoutine_6ea9d0(&v16);
  if (result != 0) {
    v3 = *(_QWORD*)(result + 432);
    v4 = result;
    if (v3 == 0) {
      v3 = *(_QWORD*)(result + 440);
      if (v3 != 0) {
        v5 = *(unsigned __int8*)(v3 + 16);
        if (v5 <= 8) {
          v15 = v5 - 3;
          while (1) {
            if (v15 == 0) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v3 != 0) {
                break;
              }
            }
            if (++v15 == 6) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v3 = 0;
        }
      }
    }
    v6 = (_DWORD*)GameData_212d330;
    while (1) {
    LABEL_8:
      v7 = v3;
      LODWORD(v16) = *v6 & 0xFFF;
      result = GameRoutine_84cb50(v4 + 1744, &v16);
      if ((result & 1) != 0 &&
          ((v9 = *(_QWORD*)(v4 + 440)) == 0 ? (v10 = 9)
                                            : (v10 = *(_BYTE*)(v9 + 16)),
           ((1 << v10) & 0xF1) != 0)) {
        if (v7 == 0) {
          return result;
        }
      }
      else {
        v11 = *(_QWORD*)(a1 + 32);
        v16 = v4;
        if (v11 == 0) {
          GameRoutine_60a310(0, v8);
        }
        result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(
            v11, &v16);
        if (v7 == 0 || (_DWORD)result == 1) {
          return result;
        }
      }
      v3 = *(_QWORD*)(v7 + 432);
      v4 = v7;
      if (v3 == 0) {
        v12 = *(_QWORD*)(v7 + 440);
        v4 = v7;
        if (v12 != 0) {
          v13 = *(unsigned __int8*)(v12 + 16);
          v3 = 0;
          v4 = v7;
          if (v13 <= 8) {
            v14 = v13 - 3;
            while (1) {
              if (v14 == 0) {
                v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v3 != 0) {
                  break;
                }
              }
              if (++v14 == 6) {
                v3 = 0;
                v4 = v7;
                goto LABEL_8;
              }
            }
            v4 = v7;
          }
        }
      }
    }
  }
  return result;
}

bool GameHr_1307960(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  __int64* v12;
  __int64 v13;
  unsigned int v14;
  unsigned __int16* v15;
  __int64 v16;
  unsigned int v17;
  unsigned __int16* v18;

  v2 = a2 + 828;
  v5 = GameRoutine_13080e0(a2, a2 + 828);
  if ((v5 & 0x80000000) == 0) {
    v6 = v5;
    v7 = GameRoutine_1307600(a2, v2, v5, a1);
    if ((v7 & 0x80000000) == 0) {
      v8 = v7;
      v9 = 0;
      v10 = v6;
      v11 = v7;
      v12 = GameData_212c878[0];
      while (v10 != -1) {
        if (v11 == -1 ||
            ((*(_QWORD*)(a1 + 8LL * v11) ^ *(_QWORD*)(v2 + 8LL * v10)) &
             0xFFFFFFFFFEFFFFFFLL) != 0) {
          return true;
        }
        if (v10 <= 4) {
          ++v10;
        }
        else {
          v10 = 0;
        }
        if (v10 != v6) {
          v16 = *v12;
          v17 = 0;
          do {
            v18 = (unsigned __int16*)(v2 + 8LL * v10);
            if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v16 + 64) +
                                               8LL * *v18) +
                                    72LL) > 7u) {
              if (v17 > 0x1C) {
                goto LABEL_14;
              }
            }
            else {
              if ((GameRoutine_6e8bc0(v18, a2) & 1) != 0 || v17 > 0x1C) {
                goto LABEL_14;
              }
              v16 = *v12;
            }
            ++v17;
            if ((int)v10 <= 4) {
              ++v10;
            }
            else {
              v10 = 0;
            }
          } while (v10 != v6);
        }
        v10 = -1;
      LABEL_14:
        if (v11 <= 4) {
          ++v11;
        }
        else {
          v11 = 0;
        }
        if (v11 != v8) {
          v13 = *v12;
          v14 = 0;
          do {
            v15 = (unsigned __int16*)(a1 + 8LL * v11);
            if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v13 + 64) +
                                               8LL * *v15) +
                                    72LL) > 7u) {
              if (v14 > 0x1C) {
                goto LABEL_5;
              }
            }
            else {
              if ((GameRoutine_6e8bc0(v15, a2) & 1) != 0 || v14 > 0x1C) {
                goto LABEL_5;
              }
              v13 = *v12;
            }
            ++v14;
            if ((int)v11 <= 4) {
              ++v11;
            }
            else {
              v11 = 0;
            }
          } while (v11 != v8);
        }
        v11 = -1;
      LABEL_5:
        if (++v9 == 30) {
          return false;
        }
      }
      if (v11 == -1) {
        return false;
      }
    }
    return true;
  }
  return (GameRoutine_13080e0(a2, a1) & 0x80000000) == 0;
}

__int64 GameHr_13176d0(__int64 a1, long double a2, double a3, long double a4)
{
  __int64* v4;
  float v6;
  float v7;
  int v8;
  float v9;
  float v10;
  __int64 result;
  __int64 v12;
  __int64* v13;
  int v14;

  v4 = (__int64*)(a1 + 656);
  if (*(float*)(a1 + 668) == *(float*)(a1 + 664)) {
    (*(void (**)(__int64))(*v4 + 16))(a1 + 656);
  }
  else {
    LODWORD(a2) = *(_DWORD*)(a1 + 688);
  }
  v6 = 1.0;
  v7 = 0.0;
  v8 = *(_DWORD*)(a1 + 960);
  LODWORD(a4) = 0.75;
  if (*(float*)&a2 <= 1.0) {
    v6 = *(float*)&a2;
  }
  if (*(float*)&a2 >= 0.0) {
    *(float*)&a2 = v6;
  }
  else {
    *(float*)&a2 = 0.0;
  }
  v9 = 0.15;
  v14 = LODWORD(a2);
  if (v8 != 2) {
    v9 = 0.75;
  }
  if (v8 == 3) {
    v10 = 0.0;
  }
  else {
    v10 = v9;
  }
  if (*(_BYTE*)(a1 + 680) == 1) {
    result = (*(__int64 (**)(__int64*, long double, float, long double))(
        *v4 + 24))(v4, a2, *(float*)&a2, a4);
  }
  else {
    if (v10 >= *(float*)(a1 + 664)) {
      result = (*(__int64 (**)(__int64*, int*, __int64))(
          *(_QWORD*)(a1 + 656) + 8LL))(v4, &v14, a1 + 688);
      if ((result & 1) == 0) {
        return result;
      }
      (*(void (**)(__int64*))(*v4 + 16))(v4);
      v12 = *v4;
      v13 = v4;
    }
    else {
      (*(void (**)(__int64*))(*v4 + 16))(v4);
      v12 = *v4;
      v13 = v4;
    }
    result = (*(__int64 (**)(__int64*))(v12 + 24))(v13);
    v7 = v10;
  }
  *(float*)(a1 + 664) = v7;
  *(_DWORD*)(a1 + 668) = 0;
  *(_WORD*)(a1 + 680) = 256;
  return result;
}

__int64 GameHr_131e240()
{
  *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 18;
  return 4;
}

__int64 GameHr_131e440(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  void* v25;
  char* v26;
  _QWORD v27[2];
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BYTE v37[13];
  __int64 v38;

  v1 = *(_QWORD*)(a1 + 8);
  v38 = 0;
  v36 = 0;
  memset(v37, 0, sizeof(v37));
  v2 = *(_QWORD*)(v1 + 88);
  v27[0] = 0;
  v27[1] = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v3 = GameRoutine_1a09c70(v2);
  if (v3 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0();
  }
  v4 = v3;
  if (v3 >= 0x17) {
    if ((v3 | 7) == 0x17) {
      v6 = 26;
    }
    else {
      v6 = (v3 | 7) + 1;
    }
    v5 = (char*)GameRoutine_651b90(GameData_2265ee0, v6, 16, 0);
    v25 = (void*)v4;
    v26 = v5;
    v24 = v6 | 1;
  }
  else {
    LOBYTE(v24) = 2 * v3;
    v5 = (char*)&v24 + 1;
    if (v3 == 0) {
      goto LABEL_10;
    }
  }
  GameRoutine_1a0b940(v5, v2, v4);
LABEL_10:
  v5[v4] = 0;
  GameRoutine_dbced0(v27, &v24);
  if ((v24 & 1) != 0 && v26 != nullptr) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v7 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7);
  }
  v8 = (__int64*)GameData_212c6a0[0];
  v9 = *(_QWORD*)GameData_212c6a0[0] + 48LL;
  *(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 40LL) = 1;
  GameRoutine_d5d770(v9, v27);
  v10 = *v8;
  v25 = &GameData_1a86d37;
  *(_BYTE*)(v10 + 944) = 1;
  v24 = GameRoutine_7a86e0(&GameData_1a86d37);
  if (GameData_21caab0 != 0) {
    v11 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &v24);
    if (v11 != 0 && *(_DWORD*)(v11 + 32) != 0) {
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 18;
      goto LABEL_44;
    }
  }
  v12 = *(_QWORD*)(GameData_21c96e8 + 8);
  v13 = *(_DWORD*)(v12 + 56);
  v14 = *(__int64**)(v12 + 8);
  v15 = *(__int64**)(v12 + 16);
  if (v13 < 0) {
    for (; v14 != v15; ++v14) {
      v16 = *v14;
      if (*(_QWORD*)(*v14 + 96) == 0 && *(_QWORD*)(v16 + 552) == 0) {
        goto LABEL_26;
      }
    }
  }
  else {
    while (v14 != v15) {
      v17 = *v14++;
      v16 = v17;
      if (*(_DWORD*)(v17 + 84) == v13) {
        goto LABEL_26;
      }
    }
  }
  v16 = 0;
LABEL_26:
  if ((*(_QWORD*)(v16 + 96) | *(_QWORD*)(v16 + 552)) == 0 &&
      GameData_21caab0 != 0 && *(_DWORD*)(GameData_21caab0 + 60) == 3 &&
      (*(_DWORD*)(v16 + 84) & 0x80000000) != 0) {
    v25 = &GameData_1a86fa8;
    v24 = GameRoutine_7a86e0(&GameData_1a86fa8);
    GameRoutine_716d80(&v24, 1);
  }
  v18 = *(unsigned __int8*)(v1 + 86);
  v19 = v18 == 5 || v18 == 3;
  if (v19 && GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 5;
    v18 = *(unsigned __int8*)(v1 + 86);
  }
  if (v18 == 4 && GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 6;
  }
  *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 19;
  if (*(_BYTE*)(v1 + 86) == 3) {
    v25 = &GameData_1ad7c10;
    v24 = GameRoutine_7a86e0(&GameData_1ad7c10);
    if (GameData_21caab0 != 0) {
      GameRoutine_828dc0(*(_QWORD*)(GameData_21caab0 + 48), &v24, 1);
    }
  }
LABEL_44:
  if ((v33 & 1) != 0 && v35 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v20 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v20);
  }
  if ((v29 & 1) != 0 && v31 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v21 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v21);
  }
  if ((v27[0] & 1) != 0 && v28 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v22 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v22);
  }
  return 4;
}

__int64 GameHr_131f450()
{
  __int64 v1;
  int v2;

  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 11;
    return 4;
  }
  else {
    v1 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 11;
      v2 = 5;
    }
    else {
      v1 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 11;
      v2 = 12;
    }
    *(_DWORD*)(v1 + 152) = v2;
    return 4;
  }
}

__int64 GameHr_1320300()
{
  __int64 v1;
  int v2;

  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 8;
    return 4;
  }
  else {
    v1 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 8;
      v2 = 5;
    }
    else {
      v1 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 8;
      v2 = 12;
    }
    *(_DWORD*)(v1 + 152) = v2;
    return 4;
  }
}

#pragma GCC visibility pop
