#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1b47d74;
extern __int64 (*GameData_1f959d8[])();
extern __int64 (*GameData_1f97990[])();
extern __int64 (*GameData_1f988a0[])();
extern __int64 (*GameData_1f98a78[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cff0[4];
extern _UNKNOWN* GameData_212d208;
extern __int64* GameData_212d250[3];
extern __int64 GameData_21c99b0;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd158;
extern __int64 GameData_21d3f98;
extern _UNKNOWN GameData_21d3fa0;
extern int GameData_21d3fa8;
extern _UNKNOWN GameData_21d3fb0;
extern _UNKNOWN GameData_21d3fb8;
extern __int16 GameData_21d3fcc;
extern __int16 GameData_21d3fdc;
extern __int16 GameData_21d3fec;
extern __int16 GameData_21d3ffc;
extern _UNKNOWN GameData_21d40b0;
extern _QWORD GameData_21d40b8[];
extern _UNKNOWN GameData_21d41b0;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_1a09fd0(_QWORD, _QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(void);
void __attribute__((noreturn)) GameRoutine_64aa00(void);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c9cf0(_QWORD, _QWORD);
__int64 GameRoutine_6ea8c0(_QWORD);
bool GameRoutine_6fc380(__int64);
__int64 GameRoutine_753570(int, int);
__int64 GameRoutine_753920(__int64 result, unsigned __int16*, __int64);
__int64 GameRoutine_753bb0(__int64 result);
__int64 GameRoutine_755f40(__int64, __int64, char, char, char*);
__int64 GameRoutine_757f60(__int64 result, _DWORD*, unsigned int, unsigned int,
                           __int64);
__int64 GameRoutine_779940(_DWORD*, __int64);
__int64 GameRoutine_77a740(__int64, unsigned int);
__int64 GameRoutine_77c150(__int64 result, __int64*, int, int);
__int64 GameRoutine_77e300(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_77ebc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_77ee30(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_77eea0(_QWORD, _QWORD);
__int64 GameRoutine_78d280(_QWORD, _QWORD);
__int64 GameRoutine_799290(_QWORD*);
__int64 GameRoutine_7992e0(__int64);
__int64 GameRoutine_79c7f0(__int64);
__int64 GameRoutine_79ed40(__int64, int);
__int64 GameRoutine_7a17c0(__int64, _WORD*, unsigned __int8);
__int64 GameRoutine_7a2950(_QWORD);
__int64 GameRoutine_7a3000(_QWORD*, __int64);
__int64 GameRoutine_7a3110(_QWORD*, __int64);
void __attribute__((noreturn)) GameRoutine_7a3bd0(void);
__int64 GameRoutine_7a3d80(_QWORD);
__int64 GameRoutine_84edc0(_QWORD, _QWORD);
__int64 GameRoutine_9a2850(_QWORD);
__int64 BattleInfo_7a3000();
__int64 BattleInfo_7a3110();
__int64 BattleSide_7a2950(_QWORD*);
__int64 GameHr_79c7f0(__int64);
int __cxa_guard_acquire(__int64);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __cxa_guard_release(__int64);
__int64 GameHr_7a27a0(_QWORD* a1);
__int64 GameHr_7a76a0(__int64 a1, __int64 a2, __int64 a3);
__int64 GameHr_7a88a0(__int64* a1);
__int64 BattleSide_79ed40(__int64, int);
__int64 memcpy(__int64, __int64, unsigned __int64);
void GameRoutine_7a3d80_alt1(__int64*) __asm__("GameRoutine_7a3d80");
void* GameHr_7a2f50(_QWORD* a1);
__int64 GameHr_7a3000(_QWORD* a1);
__int64 GameHr_7a3110(_QWORD* a1);
__int64 GameHr_7a3220(_QWORD* a1);
__int64 GameHr_7a3330(_QWORD* a1);
__int64 GameHr_7a3440(__int64* a1);

__int64 GameHr_77c480(__int64 a1, unsigned __int16* a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 result;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  char v14;
  int v15;
  int v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  unsigned __int8* v20;
  bool v21;
  int v22;
  bool v23;
  unsigned __int8* v24;
  int v25;
  unsigned __int8* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int8* v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned int v40;
  int v41;
  int v42;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD v47[4];
  _QWORD* v48;
  int v49;
  int v50;

  v3 = *(_QWORD*)(a1 + 8);
  v5 = *(unsigned __int8*)(v3 + 5);
  v4 = v3 + 5;
  if (v5 == 0) {
    return 0;
  }
  v6 = *(_QWORD*)(a1 + 16);
  result = GameRoutine_6ea8c0(v4);
  if (result != 0) {
    v9 = *(_QWORD*)(a1 + 8);
    v10 = result;
    v11 = *(char*)(v9 + 1);
    v12 = *(char*)(v9 + 2);
    v13 = *(_BYTE*)(v6 + 8) != 0 ? GameRoutine_6ea8c0(v6 + 8) : 0LL;
    v14 = GameRoutine_753920(v13, a2, v10);
    result = 0;
    if ((v14 & 1) != 0 && *(_BYTE*)(v6 + 8) != 0) {
      result = GameRoutine_6ea8c0(v6 + 8);
      if (result != 0) {
        v16 = *(_DWORD*)(v6 + 12);
        v15 = *(_DWORD*)(v6 + 16);
        v17 = *a2;
        v18 = GameData_212c878[0];
        if (*a2 != 0) {
          v19 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v17);
          v20 = *(unsigned __int8**)(v19 + 192);
          v21 = v20 == nullptr || *(unsigned __int8*)(v19 + 72) > 7u;
          if (v21 || v20[105] == 0) {
            v20 = nullptr;
            v24 = (unsigned __int8*)(v19 + 92);
          }
          else {
            v22 = v20[104];
            v23 = v22 == 2;
            if (v22 == 2) {
              v20 = nullptr;
            }
            v24 = v20 + 278;
            if (v23) {
              v24 = (unsigned __int8*)(v19 + 92);
            }
          }
          v25 = *v24;
          v26 = (unsigned __int8*)(v19 + 93);
          v27 = *(_QWORD*)(v19 + 24);
          v28 = result;
          v29 = result + 1744;
          if (v20 != nullptr) {
            v30 = v20 + 279;
          }
          else {
            v30 = v26;
          }
          v31 = *v30;
          LODWORD(v17) = GameRoutine_84edc0(v29, v27 + 8) + v31;
          result = v28;
        }
        else {
          v25 = 0;
        }
        v32 = *(_DWORD*)(result + 592);
        if ((unsigned int)(v32 * v32) < 2) {
          v41 = v11 - v16;
          if ((int)(v11 - v16) < 0) {
            v41 = v16 - v11;
          }
          v42 = v12 - v15;
          if ((int)(v12 - v15) < 0) {
            v42 = v15 - v12;
          }
          v35 = v42 + v41;
        }
        else if (v32 < 1) {
          v35 = 10000;
        }
        else {
          v33 = v32 + v15;
          v34 = v32 + v16;
          v35 = 10000;
          do {
            v36 = v12 - v15;
            v37 = v11 - v16;
            v38 = v16;
            if ((int)(v12 - v15) < 0) {
              v36 = v15 - v12;
            }
            do {
              ++v38;
              if (v37 >= 0) {
                v39 = v37;
              }
              else {
                v39 = -v37;
              }
              --v37;
              v40 = v39 + v36;
              if (v40 < v35) {
                v35 = v40;
              }
            } while (v38 < v34);
            ++v15;
          } while (v15 < v33);
        }
        if (v25 > v35 || v35 > (int)v17) {
          return 0;
        }
        v44 = *(_QWORD*)(*(_QWORD*)(*v18 + 64) + 8LL * *a2);
        if (*(_BYTE*)(v44 + 73) != 10) {
          return 1;
        }
        v45 = *(_QWORD*)(v44 + 192);
        if (v45 != 0) {
          LODWORD(v45) = *(_WORD*)(v45 + 16) & 0xFFF;
        }
        v49 = v45;
        v50 = 0;
        v47[0] = GameData_1f959d8;
        v47[1] = &v50;
        v48 = v47;
        GameRoutine_757f60(result, &v49, v11, v12, (__int64)v47);
        if (v48 == v47) {
          v46 = 32;
        }
        else {
          if (v48 == nullptr) {
            return v50 >= 1;
          }
          v46 = 40;
        }
        (*(void (**)(void*))(*v48 + v46))(v48);
        return v50 >= 1;
      }
    }
  }
  return result;
}

__int64 GameHr_77d760(__int64 a1, int* a2, unsigned int a3, unsigned int a4,
                      __int64 a5, int a6, int a7, __int64 a8)
{
  _BYTE* v8;
  __int64 v16;
  __int64 v17;
  char* v18;
  char* v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  bool v39;
  __int64* v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v71;
  __int64 v72;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  int v77;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  signed int v87;
  signed int v88;
  signed int v89;
  signed int v90;
  int v91;
  int v92;
  int v93;
  signed int v94;
  int v95;
  unsigned int v96;
  int v97;
  signed int v98;
  signed int v99;
  unsigned int v100;
  signed int v101;
  int v102;
  int v103;
  signed int v104;
  int v105;
  unsigned int v106;
  unsigned int v107;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  unsigned int v112;
  int v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  int v119;
  __int64 v122;
  signed int v123;
  int v124;
  signed int v125;
  int v126;
  _BYTE* v127;
  __int64 v128;
  int* v129;
  int v130;
  unsigned int v131;
  char v132[3];
  __int16 v133;
  char v134;
  __int16 v135;
  int v136;
  char v137;
  char v138;
  char v139;
  __int16 v140;
  char v141;
  __int16 v142;
  int v143;
  __int64 v144;

  v8 = (_BYTE*)(a1 + 8);
  if (*(_BYTE*)(a1 + 8) == 0) {
    goto LABEL_196;
  }
  v16 = a1;
  v17 = GameRoutine_6ea8c0(a1 + 8);
  if (v17 == 0) {
    goto LABEL_196;
  }
  v129 = a2;
  if (*(int*)a5 < 2 ||
      (v18 = *(char**)(a5 + 8), v19 = *(char**)(a5 + 16), v18 == v19)) {
  LABEL_33:
    v40 = GameData_212c880[0];
    v41 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*v129 & 0xFFF));
    if (v41 == 0) {
      goto LABEL_59;
    }
    v42 = *(unsigned __int8*)(v41 + 250);
    v128 = v16;
    if (v42 <= 14) {
      if (v42 != 13) {
        if (v42 == 14) {
          LODWORD(v43) = a3 + 32 * a4;
          v44 = GameData_212ce98[0];
          v127 = v8;
          if ((unsigned int)v43 >= 0x400) {
            v43 = 0;
          }
          else {
            v43 = (unsigned int)v43;
          }
          if (*(_BYTE*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v43 + 8) != 0) {
            v45 =
                *(_QWORD*)(GameData_21ca310 + 56) +
                2224LL *
                    *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) +
                                        v43 + 8);
            if (*(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) +
                                    v43 + 8) > 0xFAu ||
                v45 == 2224) {
              v47 = 9;
            LABEL_114:
              v85 = *(_QWORD*)(v17 + 440);
              if (v85 != 0) {
                if (v47 != *(unsigned __int8*)(v85 + 16)) {
                  goto LABEL_196;
                }
              }
              else if (v47 != 9) {
              LABEL_196:
                LOBYTE(v23) = 0;
                return v23 & 1;
              }
              v86 = *v44;
              if ((int)(a3 - 1) <= *(unsigned __int8*)(*v44 + 28)) {
                v87 = *(unsigned __int8*)(*v44 + 28);
              }
              else {
                v87 = a3 - 1;
              }
              v88 = *(unsigned __int8*)(v86 + 29);
              v89 = *(unsigned __int8*)(v86 + 31);
              if ((int)(a4 - 1) <= v88) {
                v90 = v88;
              }
              else {
                v90 = a4 - 1;
              }
              v91 = *(_DWORD*)(v16 + 20);
              v92 = a3 + v91;
              v93 = a4 + v91;
              if (v92 + 1 < *(unsigned __int8*)(*v44 + 30)) {
                v94 = v92 + 1;
              }
              else {
                v94 = *(unsigned __int8*)(*v44 + 30);
              }
              if (v93 + 1 < v89) {
                v89 = v93 + 1;
              }
              v125 = v89;
              if (v90 > v89 || v87 > v94) {
                goto LABEL_196;
              }
              v23 = 0;
              v122 = a8;
              v123 = v87;
              v124 = v87 - a3;
            LABEL_134:
              v95 = v124;
              v96 = v90 - a4;
              if ((int)(v90 - a4) < 0) {
                v96 = a4 - v90;
              }
              v131 = v96;
              v126 = 32 * v90;
              while (1) {
                v97 = *(_DWORD*)(v16 + 20);
                if ((unsigned int)(v97 * v97) < 2) {
                  v107 = v87 - a3;
                  if ((int)(v87 - a3) < 0) {
                    v107 = a3 - v87;
                  }
                  v100 = v107 + v131;
                }
                else {
                  if (v97 < 1) {
                    goto LABEL_139;
                  }
                  v98 = v97 + a4;
                  v99 = v97 + a3;
                  v100 = 10000;
                  v101 = a4;
                  do {
                    v102 = v90 - v101;
                    v103 = v95;
                    v104 = a3;
                    if (v90 - v101 < 0) {
                      v102 = v101 - v90;
                    }
                    do {
                      ++v104;
                      if (v103 >= 0) {
                        v105 = v103;
                      }
                      else {
                        v105 = -v103;
                      }
                      --v103;
                      v106 = v105 + v102;
                      if (v106 < v100) {
                        v100 = v106;
                      }
                    } while (v104 < v99);
                    ++v101;
                  } while (v101 < v98);
                }
                if (v100 == 1 && *v8 != 0) {
                  v109 = GameRoutine_6ea8c0(v8);
                  if (v109 != 0) {
                    v110 = v16;
                    v130 = v23;
                    v111 = v109;
                    v112 = a4;
                    v132[0] = 1;
                    v113 = *v129;
                    v114 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 40,
                                              16, 0);
                    *(_QWORD*)(v114 + 16) = v111;
                    *(_DWORD*)(v114 + 24) = v113;
                    v144 = v114;
                    *(_QWORD*)v114 = GameData_1f97990;
                    *(_QWORD*)(v114 + 8) = v110;
                    *(_QWORD*)(v114 + 32) = v132;
                    GameRoutine_6c8a80(v111, (unsigned int)v87,
                                       (unsigned int)v90, &v137);
                    (*(void (**)(__int64))(*(_QWORD*)v114 + 40LL))(v114);
                    if (v132[0] == 1) {
                      a4 = v112;
                      LODWORD(v115) = v87 + v126;
                      if ((unsigned int)(v87 + v126) >= 0x400) {
                        v115 = 0;
                      }
                      else {
                        v115 = (unsigned int)v115;
                      }
                      v116 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
                      if (*(__int16*)(v116 + 2LL * (unsigned int)v115 + 14440) <
                          0) {
                        v8 = v127;
                        v16 = v128;
                        v23 = v130;
                        if (*(__int16*)(v116 + 2 * v115 + 12392) < 0) {
                          v137 = 0;
                          v143 = 0;
                          v141 = 0;
                          v138 = v87;
                          v139 = v90;
                          v142 = -1;
                          v140 = 9;
                          v57 = *(__int64**)(v122 + 32);
                          if (v57 == nullptr) {
                            goto LABEL_198;
                          }
                          (*(void (**)(__int64*, char*))(*v57 + 48))(v57,
                                                                     &v137);
                          v23 = 1;
                        }
                        goto LABEL_139;
                      }
                    }
                    else {
                      a4 = v112;
                    }
                    v8 = v127;
                    v16 = v128;
                    v23 = v130;
                  }
                }
              LABEL_139:
                ++v95;
                v39 = v87++ < v94;
                if (!v39) {
                  v87 = v123;
                  v39 = v90++ < v125;
                  if (!v39) {
                    return v23 & 1;
                  }
                  goto LABEL_134;
                }
              }
            }
            if (*(_QWORD*)(v45 - 1832) != 0 && *v8 != 0) {
              v80 = v17;
              v81 = GameRoutine_6ea8c0(v8);
              if (v81 != 0 &&
                  ((v82 = v81,
                    ((*(__int64 (**)(__int64))(*(_QWORD*)v128 + 16LL))(v128) &
                     1) == 0) ||
                   (GameRoutine_6c9cf0(v82, v45 - 2224) & 1) != 0) &&
                  (v83 = *(_QWORD*)(v45 - 1784)) != 0) {
                v47 = *(unsigned __int8*)(v83 + 16);
              }
              else {
                v47 = 9;
              }
              v17 = v80;
              v16 = v128;
              goto LABEL_114;
            }
          }
          v47 = 9;
          goto LABEL_114;
        }
        goto LABEL_59;
      }
      goto LABEL_49;
    }
    if (v42 != 16) {
      if (v42 == 15) {
      LABEL_49:
        if (*v8 == 0) {
          goto LABEL_196;
        }
        v48 = GameRoutine_6ea8c0(v8);
        if (v48 == 0) {
          goto LABEL_196;
        }
        v49 = *v129;
        v50 = v48;
        v132[0] = 1;
        v51 = GameRoutine_651b90(GameData_2265ee0, 40, 16, 0);
        *(_QWORD*)(v51 + 16) = v50;
        *(_DWORD*)(v51 + 24) = v49;
        v144 = v51;
        *(_QWORD*)v51 = GameData_1f97990;
        *(_QWORD*)(v51 + 8) = v16;
        *(_QWORD*)(v51 + 32) = v132;
        GameRoutine_6c8a80(v50, a3, a4, &v137);
        (*(void (**)(__int64))(*(_QWORD*)v51 + 40LL))(v51);
        if (v132[0] != 1) {
          goto LABEL_196;
        }
        LODWORD(v55) = a3 + 32 * a4;
        v55 = (unsigned int)v55 >= 0x400 ? 0LL : (unsigned int)v55;
        v56 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
        if ((*(__int16*)(v56 + 2LL * (unsigned int)v55 + 14440) & 0x80000000) ==
                0 ||
            (*(__int16*)(v56 + 2 * v55 + 12392) & 0x80000000) == 0) {
          goto LABEL_196;
        }
        v57 = *(__int64**)(a8 + 32);
        v137 = 0;
        v143 = 0;
        v141 = 0;
        v138 = a3;
        v139 = a4;
        v142 = -1;
        v140 = 9;
        if (v57 == nullptr) {
          goto LABEL_198;
        }
      LABEL_173:
        v117 = *v57;
      LABEL_195:
        (*(void (**)(void))(v117 + 48))();
        LOBYTE(v23) = 1;
        return v23 & 1;
      }
    LABEL_59:
      if ((*v129 & 0xFFF) == 0) {
        goto LABEL_196;
      }
      GameRoutine_77c150((__int64)&v137, (__int64*)v16, a3, a4);
      v53 = (unsigned int)*v129;
      v58 = v53 & 0xFFF;
      if ((v53 & 0xFFF) == 0) {
        goto LABEL_196;
      }
      v59 = *(_QWORD*)(*v40 + 64);
      v60 = *(_QWORD*)(v59 + 8 * v58);
      if (*(_BYTE*)(v60 + 104) == 9) {
        v61 = *(_QWORD*)(v60 + 592);
        if (*v8 != 0) {
          v62 = GameRoutine_6ea8c0(v8);
        }
        else {
          v62 = 0;
        }
        v132[0] = 7;
        if ((GameRoutine_755f40(v62, v61, v138, v139, v132) & 1) == 0) {
          goto LABEL_196;
        }
        v53 = (unsigned int)*v129;
        v59 = *(_QWORD*)(*v40 + 64);
        v58 = v53 & 0xFFF;
      }
      v71 = *(_QWORD*)(v59 + 8 * v58);
      v72 = *(unsigned __int16*)(v71 + 656);
      if (*(_WORD*)(v71 + 656) != 0) {
        v73 = (__int64*)(*(_QWORD*)(v71 + 664) + 8LL);
        while (1) {
          v75 = *v73;
          v73 += 2;
          v74 = v75;
          if (*(_WORD*)(v75 + 16) != 0 &&
              *(_WORD*)(*(_QWORD*)(v74 + 48) + 16LL) != 0) {
            break;
          }
          if (--v72 == 0) {
            goto LABEL_92;
          }
        }
        if ((GameRoutine_77eea0(v16, &v137) & 1) == 0) {
          goto LABEL_196;
        }
        v59 = *(_QWORD*)(*v40 + 64);
        v58 = *v129 & 0xFFF;
      }
    LABEL_92:
      v76 = *(_QWORD*)(v59 + 8 * v58);
      if (*(_QWORD*)(v76 + 608) != 0) {
        v77 = *(unsigned __int8*)(v76 + 105);
        if (v77 == 2 || v77 == 4) {
          goto LABEL_99;
        }
        if (v77 != 3) {
          goto LABEL_196;
        }
        if (*(_BYTE*)(v76 + 279) != 0) {
        LABEL_99:
          if ((GameRoutine_753570(a3, a4) & 1) == 0) {
            goto LABEL_196;
          }
        }
        goto LABEL_100;
      }
      if (v141 != 0) {
        v79 = GameRoutine_6ea8c0(&v141);
      }
      else {
        v79 = 0;
      }
      if ((GameRoutine_77e300(v16, v129, v79) & 1) == 0) {
        v84 = (v142 & 0x8000000000000000LL) != 0
                  ? 0LL
                  : *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL) +
                        144LL * v142;
        if ((GameRoutine_77ebc0(v16, v129, v84) & 1) == 0) {
          if ((GameRoutine_77ee30((unsigned int)*v129, a3, a4) & 1) == 0) {
            goto LABEL_196;
          }
        LABEL_100:
          v57 = *(__int64**)(a8 + 32);
          goto LABEL_193;
        }
      }
      goto LABEL_172;
    }
    GameRoutine_77c150((__int64)&v137, (__int64*)v16, a3, a4);
    if (v141 != 0) {
      v63 = GameRoutine_6ea8c0(&v141);
    }
    else {
      v63 = 0;
    }
    if ((GameRoutine_77e300(v16, v129, v63) & 1) != 0) {
    LABEL_172:
      v57 = *(__int64**)(a8 + 32);
      if (v57 == nullptr) {
        goto LABEL_198;
      }
      goto LABEL_173;
    }
    v64 = a8;
    if ((v142 & 0x8000000000000000LL) == 0) {
      v65 = *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL);
      if (v65 != 0) {
        v66 = v65 + 144LL * v142;
        if ((GameRoutine_753bb0(v66) & 1) != 0) {
          v67 = *(_QWORD*)(*(_QWORD*)(*v40 + 64) + 8LL * (*v129 & 0xFFF));
          if (v67 == 0) {
            goto LABEL_74;
          }
          v68 = *(unsigned __int8*)(v67 + 250);
          if ((unsigned int)v68 > 0x25) {
            goto LABEL_184;
          }
          if (((1LL << v68) & 0x6018181) == 0) {
            if (v68 == 37 &&
                ((*(__int64 (**)(__int64))(*(_QWORD*)v66 + 272LL))(v66) & 1) !=
                    0) {
              goto LABEL_180;
            }
          }
          else {
          LABEL_74:
            if (*v8 != 0) {
              v69 = GameRoutine_6ea8c0(v8);
            }
            else {
              v69 = 0;
            }
            if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v66 + 280LL))(
                     v66, v69) &
                 1) != 0 &&
                    GameRoutine_6fc380(*(_QWORD*)(*(_QWORD*)(*v40 + 64) +
                                                  8LL * (*v129 & 0xFFF))) ||
                ((*(__int64 (**)(__int64, int*))(*(_QWORD*)v66 + 296LL))(v66,
                                                                         v129) &
                 1) != 0) {
            LABEL_180:
              v57 = *(__int64**)(v64 + 32);
              if (v57 == nullptr) {
                goto LABEL_198;
              }
              goto LABEL_173;
            }
          }
        }
      }
    }
  LABEL_184:
    v118 = *(_QWORD*)(*(_QWORD*)(*v40 + 64) + 8LL * (*v129 & 0xFFF));
    if (v118 == 0) {
      goto LABEL_196;
    }
    v119 = *(unsigned __int8*)(v118 + 105);
    if (v119 == 2 || v119 == 4) {
      goto LABEL_191;
    }
    if (v119 != 3) {
      goto LABEL_196;
    }
    if (*(_BYTE*)(v118 + 279) != 0) {
    LABEL_191:
      if ((GameRoutine_753570(a3, a4) & 1) == 0) {
        goto LABEL_196;
      }
    }
    v57 = *(__int64**)(v64 + 32);
  LABEL_193:
    v132[0] = 0;
    v136 = 0;
    v134 = 0;
    v132[1] = a3;
    v135 = -1;
    v133 = 9;
    v132[2] = a4;
    if (v57 != nullptr) {
      v117 = *v57;
      goto LABEL_195;
    }
  LABEL_198:
    GameRoutine_60a310();
  }
  v20 = *(_DWORD*)(v16 + 12);
  v21 = *(_DWORD*)(v16 + 16);
  while (1) {
    v22 = *v18;
    LOBYTE(v23) = 0;
    v24 = a3 + v22;
    if (*(unsigned __int8*)(GameData_21ca300 + 26) <=
        (unsigned int)(unsigned __int8)(a3 + *v18 -
                                        *(_BYTE*)(GameData_21ca300 + 24))) {
      break;
    }
    v25 = a4 + v18[1];
    if (*(unsigned __int8*)(GameData_21ca300 + 27) <=
        (unsigned int)(unsigned __int8)(a4 + v18[1] -
                                        *(_BYTE*)(GameData_21ca300 + 25))) {
      break;
    }
    v26 = *(_DWORD*)(v17 + 592);
    if ((unsigned int)(v26 * v26) < 2) {
      v37 = v24 - v20;
      if (v24 - v20 < 0) {
        v37 = v20 - v24;
      }
      v38 = v25 - v21;
      if (v38 < 0) {
        v38 = -v38;
      }
      v30 = v38 + v37;
    }
    else if (v26 < 1) {
      v30 = 10000;
    }
    else {
      v27 = v26 + v21;
      v28 = v26 + v20;
      v29 = a3 - v20 + v22;
      v30 = 10000;
      v31 = *(_DWORD*)(v16 + 16);
      do {
        v32 = v25 - v31;
        v33 = v29;
        v34 = *(_DWORD*)(v16 + 12);
        if ((int)(v25 - v31) < 0) {
          v32 = v31 - v25;
        }
        do {
          ++v34;
          if (v33 >= 0) {
            v35 = v33;
          }
          else {
            v35 = -v33;
          }
          --v33;
          v36 = v35 + v32;
          if (v36 < v30) {
            v30 = v36;
          }
        } while (v34 < v28);
        ++v31;
      } while (v31 < v27);
    }
    v39 = a6 <= v30 && v30 <= a7;
    if (!v39) {
      goto LABEL_196;
    }
    v18 += 4;
    if (v18 == v19) {
      goto LABEL_33;
    }
  }
  return v23 & 1;
}

__int64 GameHr_789b90(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  void* v10;

  v2 = GameData_212cff0[0];
  v3 = *GameData_212cff0[0];
  if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
    v4 = GameRoutine_6ea8c0(*GameData_212cfd0[0] + 8);
  }
  else {
    v4 = 0;
  }
  result = GameRoutine_779940((_DWORD*)(v3 + 8), v4);
  if ((result & 0x80000000) == 0 && (_DWORD)result != *(_DWORD*)(a1 + 272)) {
    v6 = *v2;
    *(_DWORD*)(a1 + 272) = result;
    GameRoutine_77a740(v6 + 8, result);
    v7 = *(_DWORD*)(a1 + 276);
    if ((v7 & 0x80000000) != 0 ||
        (v8 = *v2, *(char*)(*v2 + 12LL * v7 + 12413) < 0) ||
        *(char*)(*v2 + 12LL * v7 + 12414) < 0) {
      v7 = *(_DWORD*)(a1 + 272);
      if ((v7 & 0x80000000) != 0) {
        v10 = GameData_212d208;
        return GameRoutine_78d280(a1, v10);
      }
      v8 = *v2;
      v9 = 64;
    }
    else {
      v9 = 12408;
    }
    v10 = (void*)(v8 + v9 + 12LL * v7 + 4);
    return GameRoutine_78d280(a1, v10);
  }
  return result;
}

__int64 GameHr_7992e0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  _QWORD v18[30];

  *(_BYTE*)(a1 + 18) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 44) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 117) = 0;
  *(_DWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_DWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_DWORD*)(a1 + 40) = -1;
  *(_QWORD*)(a1 + 608) = 0;
  *(_DWORD*)(a1 + 640) = 0;
  *(_QWORD*)(a1 + 696) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 72) = -1;
  *(_QWORD*)(a1 + 80) = -1;
  *(_QWORD*)(a1 + 88) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 432) = *(_QWORD*)(a1 + 424);
  *(_QWORD*)(a1 + 464) = *(_QWORD*)(a1 + 456);
  *(_QWORD*)(a1 + 528) = *(_QWORD*)(a1 + 520);
  *(_QWORD*)(a1 + 560) = *(_QWORD*)(a1 + 552);
  *(_QWORD*)(a1 + 624) = *(_QWORD*)(a1 + 616);
  *(_QWORD*)(a1 + 656) = *(_QWORD*)(a1 + 648);
  GameRoutine_9a2850(a1 + 176);
  v2 = *(_QWORD*)(a1 + 168);
  if (v2 != 0) {
    v3 = *(_QWORD*)(a1 + 144);
    v4 = GameData_212bf68;
    do {
      v5 = *(_QWORD*)(a1 + 136);
      v6 = v3 - v5;
      v7 = v3 == v5;
      v8 = v2 - 1;
      v9 = v2 + *(_QWORD*)(a1 + 160);
      *(_QWORD*)(a1 + 168) = v8;
      v10 = 2 * v6 - 1;
      if (v7) {
        v10 = 0;
      }
      if ((unsigned __int64)(v10 - v9 + 1) >= 0x20) {
        v11 = *(_QWORD*)(v3 - 8);
        if (v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v4 + v12, v11);
          v3 = *(_QWORD*)(a1 + 144);
          v8 = *(_QWORD*)(a1 + 168);
        }
        v3 -= 8;
        *(_QWORD*)(a1 + 144) = v3;
      }
      v2 = v8;
    } while (v8 != 0);
  }
  GameRoutine_799290(v18);
  v13 = *(_QWORD*)(a1 + 136);
  v14 = *(_QWORD*)(a1 + 144);
  v15 = 2 * (v14 - v13) - 1;
  if (v14 == v13) {
    v15 = 0;
  }
  v16 = *(_QWORD*)(a1 + 168) + *(_QWORD*)(a1 + 160);
  if (v15 == v16) {
    GameRoutine_7a3d80(a1 + 128);
    v13 = *(_QWORD*)(a1 + 136);
    v16 = *(_QWORD*)(a1 + 168) + *(_QWORD*)(a1 + 160);
  }
  GameRoutine_1a0b950(*(_QWORD*)(v13 + 8 * (v16 >> 4)) + 244 * (v16 & 0xF), v18,
                      244);
  ++*(_QWORD*)(a1 + 168);
  *(_QWORD*)(a1 + 720) = *(_QWORD*)(a1 + 712);
  return a1;
}

__int64 GameHr_7a27a0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  unsigned int v16;

  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v16 = BattleSide_7a2950(a1),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d3fa0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21d3fa0) != 0) {
    GameData_21d3f98 = 0x6000004000000LL;
    __cxa_guard_release((__int64)&GameData_21d3fa0),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d3fb0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21d3fb0) != 0) {
    GameData_21d3fa8 = 0x20000;
    __cxa_guard_release((__int64)&GameData_21d3fb0),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v4 = GameData_21d3f98;
  if ((GameData_21d3f98 & a1[76]) != 0) {
    v5 = a1[70];
    v6 = v14_.v14;
    v14_.v14[0] = GameData_1f98a78;
    v14_.v14[1] = a1;
    v14_.v15 = v14_.v14;
    v14_.v14[2] = &v16;
    v7 = a1[69];
    if ((int)((unsigned __int64)(v5 - v7) >> 2) < 1) {
      goto LABEL_13;
    }
    v8 = 0;
    v9 = 0;
    v10 = GameData_212c880[0];
    v11 = *GameData_212c880[0];
    do {
      if (((v4 >> *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) +
                                       8LL * (*(_DWORD*)(v7 + v8) & 0xFFF)) +
                            250LL)) &
           1) != 0) {
        if (v14_.v15 == nullptr) {
          GameRoutine_60a310_alt1(),
              v2 = COERCE_AS(__typeof__(v2),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v3 = COERCE_AS(__typeof__(v3),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
        (*(void (**)(_QWORD*, __int64))(*v14_.v15 + 48LL))(v14_.v15, v7 + v8),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v11 = *v10;
        v5 = a1[70];
        v7 = a1[69];
        v4 = GameData_21d3f98;
      }
      ++v9;
      v8 += 4;
    } while (v9 < (int)((unsigned __int64)(v5 - v7) >> 2));
    v6 = v14_.v15;
    if (v14_.v15 == v14_.v14) {
    LABEL_13:
      v12 = 32;
      goto LABEL_14;
    }
    if (v14_.v15 != nullptr) {
      v12 = 40;
    LABEL_14:
      (*(void (**)(_QWORD*, __int64, __int64))(*v6 + v12))(v6, v2, v3),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  }
  return v16;
}

void* GameHr_7a2f50(_QWORD* a1)
{
  __int64 v1;
  int v3;
  _QWORD* v4;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d40b0,
                            memory_order_acquire) &
       1) == 0) {
    v4 = a1;
    v3 = __cxa_guard_acquire((__int64)&GameData_21d40b0);
    a1 = v4;
    if (v3 != 0) {
      GameRoutine_799290(&GameData_21d3fb8);
      __cxa_guard_release((__int64)&GameData_21d40b0);
      a1 = v4;
    }
  }
  v1 = a1[21];
  if (v1 != 0) {
    return (void*)(*(_QWORD*)(a1[17] +
                              8 * ((unsigned __int64)(v1 + a1[20] - 1) >> 4)) +
                   244LL * (((_DWORD)v1 + *((_DWORD*)a1 + 40) - 1) & 0xF));
  }
  else {
    return &GameData_21d3fb8;
  }
}

__int64 GameHr_7a3000(_QWORD* a1)
{
  __int64 v1;
  float* v2;
  int v3;
  int v4;
  float v5;
  float v6;
  float v7;
  float v8;
  int v9;
  bool v10;
  int v11;
  int v12;
  int v13;
  float v14;
  int v15;
  int v17;
  _QWORD* v18;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d40b0,
                            memory_order_acquire) &
       1) == 0) {
    v18 = a1;
    v17 = __cxa_guard_acquire((__int64)&GameData_21d40b0);
    a1 = v18;
    if (v17 != 0) {
      GameRoutine_799290(&GameData_21d3fb8);
      __cxa_guard_release((__int64)&GameData_21d40b0);
      a1 = v18;
    }
  }
  v1 = a1[21];
  if (v1 != 0) {
    v2 = (float*)(*(_QWORD*)(a1[17] +
                             8 * ((unsigned __int64)(v1 + a1[20] - 1) >> 4)) +
                  244LL * (((_DWORD)v1 + *((_DWORD*)a1 + 40) - 1) & 0xF));
    v3 = *((__int16*)v2 + 10);
    if ((v3 & 0x80000000) == 0) {
      return BattleSide_79ed40((__int64)a1, v3);
    }
  }
  else {
    v2 = (float*)&GameData_21d3fb8;
    v3 = GameData_21d3fcc;
    if ((GameData_21d3fcc & 0x80000000) == 0) {
      return BattleSide_79ed40((__int64)a1, v3);
    }
  }
  v4 = *((__int16*)v2 + 8);
  v5 = v2[6];
  v6 = v2[7];
  v7 = (float)v4;
  v8 = (float)*((__int16*)v2 + 9);
  v9 = *((__int16*)v2 + 11);
  v10 = v4 < 0;
  v11 = v9 & ~(v9 >> 31);
  v12 = v9 & (v9 >> 31);
  if (v4 >= 0) {
    v13 = 999;
  }
  else {
    v13 = 0;
  }
  v14 = v8 + (float)(v7 * v5);
  if (!v10) {
    v12 = v11;
  }
  v15 = (int)(float)(v6 * v14);
  if (v13 >= v15) {
    v13 = (int)(float)(v6 * v14);
  }
  if (v12 <= v15) {
    v3 = v13;
  }
  else {
    v3 = v12;
  }
  return BattleSide_79ed40((__int64)a1, v3);
}

__int64 GameHr_7a3110(_QWORD* a1)
{
  __int64 v1;
  float* v2;
  int v3;
  int v4;
  float v5;
  float v6;
  float v7;
  float v8;
  int v9;
  bool v10;
  int v11;
  int v12;
  int v13;
  float v14;
  int v15;
  int v17;
  _QWORD* v18;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d40b0,
                            memory_order_acquire) &
       1) == 0) {
    v18 = a1;
    v17 = __cxa_guard_acquire((__int64)&GameData_21d40b0);
    a1 = v18;
    if (v17 != 0) {
      GameRoutine_799290(&GameData_21d3fb8);
      __cxa_guard_release((__int64)&GameData_21d40b0);
      a1 = v18;
    }
  }
  v1 = a1[21];
  if (v1 != 0) {
    v2 = (float*)(*(_QWORD*)(a1[17] +
                             8 * ((unsigned __int64)(v1 + a1[20] - 1) >> 4)) +
                  244LL * (((_DWORD)v1 + *((_DWORD*)a1 + 40) - 1) & 0xF));
    v3 = *((__int16*)v2 + 18);
    if ((v3 & 0x80000000) == 0) {
      return BattleSide_79ed40((__int64)a1, v3);
    }
  }
  else {
    v2 = (float*)&GameData_21d3fb8;
    v3 = GameData_21d3fdc;
    if ((GameData_21d3fdc & 0x80000000) == 0) {
      return BattleSide_79ed40((__int64)a1, v3);
    }
  }
  v4 = *((__int16*)v2 + 16);
  v5 = v2[10];
  v6 = v2[11];
  v7 = (float)v4;
  v8 = (float)*((__int16*)v2 + 17);
  v9 = *((__int16*)v2 + 19);
  v10 = v4 < 0;
  v11 = v9 & ~(v9 >> 31);
  v12 = v9 & (v9 >> 31);
  if (v4 >= 0) {
    v13 = 999;
  }
  else {
    v13 = 0;
  }
  v14 = v8 + (float)(v7 * v5);
  if (!v10) {
    v12 = v11;
  }
  v15 = (int)(float)(v6 * v14);
  if (v13 >= v15) {
    v13 = (int)(float)(v6 * v14);
  }
  if (v12 <= v15) {
    v3 = v13;
  }
  else {
    v3 = v12;
  }
  return BattleSide_79ed40((__int64)a1, v3);
}

__int64 GameHr_7a3220(_QWORD* a1)
{
  __int64 v1;
  float* v2;
  __int64 result;
  int v4;
  float v5;
  float v6;
  float v7;
  float v8;
  int v9;
  bool v10;
  int v11;
  int v12;
  int v13;
  float v14;
  int v15;
  int v16;
  _QWORD* v17;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d40b0,
                            memory_order_acquire) &
       1) == 0) {
    v17 = a1;
    v16 = __cxa_guard_acquire((__int64)&GameData_21d40b0);
    a1 = v17;
    if (v16 != 0) {
      GameRoutine_799290(&GameData_21d3fb8);
      __cxa_guard_release((__int64)&GameData_21d40b0);
      a1 = v17;
    }
  }
  v1 = a1[21];
  if (v1 != 0) {
    v2 = (float*)(*(_QWORD*)(a1[17] +
                             8 * ((unsigned __int64)(v1 + a1[20] - 1) >> 4)) +
                  244LL * (((_DWORD)v1 + *((_DWORD*)a1 + 40) - 1) & 0xF));
    result = (unsigned int)*((__int16*)v2 + 26);
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  else {
    v2 = (float*)&GameData_21d3fb8;
    result = (unsigned int)GameData_21d3fec;
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  v4 = *((__int16*)v2 + 24);
  v5 = v2[14];
  v6 = v2[15];
  v7 = (float)v4;
  v8 = (float)*((__int16*)v2 + 25);
  v9 = *((__int16*)v2 + 27);
  v10 = v4 < 0;
  v11 = v9 & ~(v9 >> 31);
  v12 = v9 & (v9 >> 31);
  if (v4 >= 0) {
    v13 = 999;
  }
  else {
    v13 = 0;
  }
  v14 = v8 + (float)(v7 * v5);
  if (!v10) {
    v12 = v11;
  }
  v15 = (int)(float)(v6 * v14);
  if (v13 >= v15) {
    v13 = (int)(float)(v6 * v14);
  }
  if (v12 <= v15) {
    return (unsigned int)v13;
  }
  else {
    return (unsigned int)v12;
  }
}

__int64 GameHr_7a3330(_QWORD* a1)
{
  __int64 v1;
  float* v2;
  __int64 result;
  int v4;
  float v5;
  float v6;
  float v7;
  float v8;
  int v9;
  bool v10;
  int v11;
  int v12;
  int v13;
  float v14;
  int v15;
  int v16;
  _QWORD* v17;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d40b0,
                            memory_order_acquire) &
       1) == 0) {
    v17 = a1;
    v16 = __cxa_guard_acquire((__int64)&GameData_21d40b0);
    a1 = v17;
    if (v16 != 0) {
      GameRoutine_799290(&GameData_21d3fb8);
      __cxa_guard_release((__int64)&GameData_21d40b0);
      a1 = v17;
    }
  }
  v1 = a1[21];
  if (v1 != 0) {
    v2 = (float*)(*(_QWORD*)(a1[17] +
                             8 * ((unsigned __int64)(v1 + a1[20] - 1) >> 4)) +
                  244LL * (((_DWORD)v1 + *((_DWORD*)a1 + 40) - 1) & 0xF));
    result = (unsigned int)*((__int16*)v2 + 34);
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  else {
    v2 = (float*)&GameData_21d3fb8;
    result = (unsigned int)GameData_21d3ffc;
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  v4 = *((__int16*)v2 + 32);
  v5 = v2[18];
  v6 = v2[19];
  v7 = (float)v4;
  v8 = (float)*((__int16*)v2 + 33);
  v9 = *((__int16*)v2 + 35);
  v10 = v4 < 0;
  v11 = v9 & ~(v9 >> 31);
  v12 = v9 & (v9 >> 31);
  if (v4 >= 0) {
    v13 = 999;
  }
  else {
    v13 = 0;
  }
  v14 = v8 + (float)(v7 * v5);
  if (!v10) {
    v12 = v11;
  }
  v15 = (int)(float)(v6 * v14);
  if (v13 >= v15) {
    v13 = (int)(float)(v6 * v14);
  }
  if (v12 <= v15) {
    return (unsigned int)v13;
  }
  else {
    return (unsigned int)v12;
  }
}

__int64 GameHr_7a3440(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 result;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21d41b0) != 0) {
    GameRoutine_799290(GameData_21d40b8);
    __cxa_guard_release((__int64)&GameData_21d41b0);
  }
  v2 = a1[21];
  if (v2 != 0) {
    v3 = a1[20];
    v4 = a1[17];
    v5 = (_QWORD*)(*(_QWORD*)(v4 + 8 * ((unsigned __int64)(v2 + v3 - 1) >> 4)) +
                   244LL * (((_DWORD)v2 + (_DWORD)v3 - 1) & 0xF));
  }
  else {
    v4 = a1[17];
    v3 = a1[20];
    v5 = GameData_21d40b8;
  }
  v6 = a1[18];
  v7 = v3 + v2;
  if (v6 == v4) {
    v8 = 0;
  }
  else {
    v8 = 2 * (v6 - v4) - 1;
  }
  if (v8 == v7) {
    GameRoutine_7a3d80_alt1(a1 + 16);
    v4 = a1[17];
    v7 = a1[21] + a1[20];
  }
  result = memcpy(*(_QWORD*)(v4 + 8 * (v7 >> 4)) + 244 * (v7 & 0xF),
                  (__int64)v5, 0xF4u);
  ++a1[21];
  return result;
}

__int64 GameHr_7a3540(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  __int64* v5;
  __int64* v6;
  __int64 v7;

  v3 = (_QWORD*)(a1 + 812);
  v5 = GameData_212d250[0];
  *(_QWORD*)(a1 + 16) = a2;
  *(_QWORD*)(a1 + 52) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  v6 = v5 + 2;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)a1 = GameData_1f988a0;
  *(_QWORD*)(a1 + 8) = v5 + 2;
  v7 = a1 + 8;
  *(_WORD*)(a1 + 24) = 256;
  GameRoutine_799290((_QWORD*)(a1 + 184));
  *(_DWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_DWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_QWORD*)(a1 + 640) = 0;
  *(_DWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 760) = 0;
  *(_QWORD*)(a1 + 752) = 0;
  *(_QWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  *(_QWORD*)(a1 + 728) = 0;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 696) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  GameRoutine_7992e0(v7);
  *(_QWORD*)(a1 + 768) = v6;
  *(_QWORD*)(a1 + 776) = a2;
  *v3 = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_WORD*)(a1 + 784) = 1;
  GameRoutine_799290((_QWORD*)(a1 + 944));
  *(_DWORD*)(a1 + 1216) = 0;
  *(_QWORD*)(a1 + 1208) = 0;
  *(_QWORD*)(a1 + 1200) = 0;
  *(_QWORD*)(a1 + 1192) = 0;
  *(_QWORD*)(a1 + 1224) = 0;
  *(_QWORD*)(a1 + 1232) = 0;
  *(_QWORD*)(a1 + 1240) = 0;
  *(_QWORD*)(a1 + 1248) = 0;
  *(_QWORD*)(a1 + 1256) = 0;
  *(_QWORD*)(a1 + 1264) = 0;
  *(_QWORD*)(a1 + 1272) = 0;
  *(_QWORD*)(a1 + 1280) = 0;
  *(_QWORD*)(a1 + 1288) = 0;
  *(_QWORD*)(a1 + 1296) = 0;
  *(_QWORD*)(a1 + 1304) = 0;
  *(_DWORD*)(a1 + 1312) = 0;
  *(_QWORD*)(a1 + 1320) = 0;
  *(_QWORD*)(a1 + 1328) = 0;
  *(_QWORD*)(a1 + 1336) = 0;
  *(_QWORD*)(a1 + 1344) = 0;
  *(_QWORD*)(a1 + 1352) = 0;
  *(_QWORD*)(a1 + 1360) = 0;
  *(_QWORD*)(a1 + 1368) = 0;
  *(_QWORD*)(a1 + 1376) = 0;
  *(_QWORD*)(a1 + 1384) = 0;
  *(_QWORD*)(a1 + 1392) = 0;
  *(_QWORD*)(a1 + 1400) = 0;
  *(_DWORD*)(a1 + 1408) = 0;
  *(_QWORD*)(a1 + 1520) = 0;
  *(_QWORD*)(a1 + 1512) = 0;
  *(_QWORD*)(a1 + 1504) = 0;
  *(_QWORD*)(a1 + 1496) = 0;
  *(_QWORD*)(a1 + 1488) = 0;
  *(_QWORD*)(a1 + 1480) = 0;
  *(_QWORD*)(a1 + 1472) = 0;
  *(_QWORD*)(a1 + 1464) = 0;
  *(_QWORD*)(a1 + 1456) = 0;
  *(_QWORD*)(a1 + 1448) = 0;
  *(_QWORD*)(a1 + 1440) = 0;
  *(_QWORD*)(a1 + 1432) = 0;
  *(_QWORD*)(a1 + 1424) = 0;
  *(_QWORD*)(a1 + 1416) = 0;
  GameRoutine_7992e0(a1 + 768);
  *(_QWORD*)(a1 + 1528) = v6;
  *(_QWORD*)(a1 + 1536) = a2;
  v3[95] = 0;
  *(_QWORD*)(a1 + 1656) = 0;
  *(_QWORD*)(a1 + 1664) = 0;
  *(_QWORD*)(a1 + 1672) = 0;
  *(_QWORD*)(a1 + 1680) = 0;
  *(_QWORD*)(a1 + 1688) = 0;
  *(_QWORD*)(a1 + 1696) = 0;
  *(_WORD*)(a1 + 1544) = 258;
  GameRoutine_799290((_QWORD*)(a1 + 1704));
  *(_DWORD*)(a1 + 1976) = 0;
  *(_QWORD*)(a1 + 1968) = 0;
  *(_QWORD*)(a1 + 1960) = 0;
  *(_QWORD*)(a1 + 1952) = 0;
  *(_QWORD*)(a1 + 1984) = 0;
  *(_QWORD*)(a1 + 1992) = 0;
  *(_QWORD*)(a1 + 2000) = 0;
  *(_QWORD*)(a1 + 2008) = 0;
  *(_QWORD*)(a1 + 2016) = 0;
  *(_QWORD*)(a1 + 2024) = 0;
  *(_QWORD*)(a1 + 2032) = 0;
  *(_QWORD*)(a1 + 2040) = 0;
  *(_QWORD*)(a1 + 2048) = 0;
  *(_QWORD*)(a1 + 2056) = 0;
  *(_QWORD*)(a1 + 2064) = 0;
  *(_DWORD*)(a1 + 2072) = 0;
  *(_QWORD*)(a1 + 2080) = 0;
  *(_QWORD*)(a1 + 2088) = 0;
  *(_QWORD*)(a1 + 2096) = 0;
  *(_QWORD*)(a1 + 2104) = 0;
  *(_QWORD*)(a1 + 2112) = 0;
  *(_QWORD*)(a1 + 2120) = 0;
  *(_QWORD*)(a1 + 2128) = 0;
  *(_QWORD*)(a1 + 2136) = 0;
  *(_QWORD*)(a1 + 2144) = 0;
  *(_QWORD*)(a1 + 2152) = 0;
  *(_QWORD*)(a1 + 2160) = 0;
  *(_DWORD*)(a1 + 2168) = 0;
  *(_QWORD*)(a1 + 2280) = 0;
  *(_QWORD*)(a1 + 2272) = 0;
  *(_QWORD*)(a1 + 2264) = 0;
  *(_QWORD*)(a1 + 2256) = 0;
  *(_QWORD*)(a1 + 2248) = 0;
  *(_QWORD*)(a1 + 2240) = 0;
  *(_QWORD*)(a1 + 2232) = 0;
  *(_QWORD*)(a1 + 2224) = 0;
  *(_QWORD*)(a1 + 2216) = 0;
  *(_QWORD*)(a1 + 2208) = 0;
  *(_QWORD*)(a1 + 2200) = 0;
  *(_QWORD*)(a1 + 2192) = 0;
  *(_QWORD*)(a1 + 2184) = 0;
  *(_QWORD*)(a1 + 2176) = 0;
  GameRoutine_7992e0(a1 + 1528);
  *(_QWORD*)(a1 + 2288) = v6;
  *(_QWORD*)(a1 + 2296) = a2;
  v3[190] = 0;
  *(_QWORD*)(a1 + 2416) = 0;
  *(_QWORD*)(a1 + 2424) = 0;
  *(_QWORD*)(a1 + 2432) = 0;
  *(_QWORD*)(a1 + 2440) = 0;
  *(_QWORD*)(a1 + 2448) = 0;
  *(_QWORD*)(a1 + 2456) = 0;
  *(_WORD*)(a1 + 2304) = 3;
  GameRoutine_799290((_QWORD*)(a1 + 2464));
  *(_DWORD*)(a1 + 2736) = 0;
  *(_QWORD*)(a1 + 2728) = 0;
  *(_QWORD*)(a1 + 2720) = 0;
  *(_QWORD*)(a1 + 2712) = 0;
  *(_QWORD*)(a1 + 2744) = 0;
  *(_QWORD*)(a1 + 2752) = 0;
  *(_QWORD*)(a1 + 2760) = 0;
  *(_QWORD*)(a1 + 2768) = 0;
  *(_QWORD*)(a1 + 2776) = 0;
  *(_QWORD*)(a1 + 2784) = 0;
  *(_QWORD*)(a1 + 2792) = 0;
  *(_QWORD*)(a1 + 2800) = 0;
  *(_QWORD*)(a1 + 2808) = 0;
  *(_QWORD*)(a1 + 2816) = 0;
  *(_QWORD*)(a1 + 2824) = 0;
  *(_DWORD*)(a1 + 2832) = 0;
  *(_QWORD*)(a1 + 2840) = 0;
  *(_QWORD*)(a1 + 2848) = 0;
  *(_QWORD*)(a1 + 2856) = 0;
  *(_QWORD*)(a1 + 2864) = 0;
  *(_QWORD*)(a1 + 2872) = 0;
  *(_QWORD*)(a1 + 2880) = 0;
  *(_QWORD*)(a1 + 2888) = 0;
  *(_QWORD*)(a1 + 2896) = 0;
  *(_QWORD*)(a1 + 2904) = 0;
  *(_QWORD*)(a1 + 2912) = 0;
  *(_QWORD*)(a1 + 2920) = 0;
  *(_DWORD*)(a1 + 2928) = 0;
  *(_QWORD*)(a1 + 3040) = 0;
  *(_QWORD*)(a1 + 3032) = 0;
  *(_QWORD*)(a1 + 3024) = 0;
  *(_QWORD*)(a1 + 3016) = 0;
  *(_QWORD*)(a1 + 3008) = 0;
  *(_QWORD*)(a1 + 3000) = 0;
  *(_QWORD*)(a1 + 2992) = 0;
  *(_QWORD*)(a1 + 2984) = 0;
  *(_QWORD*)(a1 + 2976) = 0;
  *(_QWORD*)(a1 + 2968) = 0;
  *(_QWORD*)(a1 + 2960) = 0;
  *(_QWORD*)(a1 + 2952) = 0;
  *(_QWORD*)(a1 + 2944) = 0;
  *(_QWORD*)(a1 + 2936) = 0;
  return GameRoutine_7992e0(a1 + 2288);
}

__int64 GameHr_7a39e0(__int64 result, __int64* a2, __int64* a3,
                      unsigned __int64 a4)
{
  __int64 v5;
  __int64 v6;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;

  v5 = *(_QWORD*)(result + 16);
  v6 = *(_QWORD*)result;
  v8 = (_QWORD*)result;
  if (a4 <= (v5 - *(_QWORD*)result) >> 5) {
    v18 = *(_QWORD*)(result + 8);
    v19 = v18 - v6;
    if (a4 <= (v18 - v6) >> 5) {
      while (a2 != a3) {
        v29 = *a2;
        v30 = a2[1];
        v31 = a2[2];
        v32 = *((_DWORD*)a2 + 6);
        a2 += 4;
        *(_DWORD*)(v6 + 24) = v32;
        *(_QWORD*)(v6 + 8) = v30;
        *(_QWORD*)(v6 + 16) = v31;
        *(_QWORD*)v6 = v29;
        v6 += 32;
      }
      *(_QWORD*)(result + 8) = v6;
    }
    else {
      v20 = (__int64*)((char*)a2 + v19);
      if (v18 != v6) {
        do {
          v21 = *a2;
          v22 = a2[1];
          v23 = a2[2];
          v19 -= 32;
          v24 = *((_DWORD*)a2 + 6);
          a2 += 4;
          *(_DWORD*)(v6 + 24) = v24;
          *(_QWORD*)(v6 + 8) = v22;
          *(_QWORD*)(v6 + 16) = v23;
          *(_QWORD*)v6 = v21;
          v6 += 32;
        } while (v19 != 0);
        v18 = *(_QWORD*)(result + 8);
      }
      v25 = v18;
      if (v20 != a3) {
        v25 = v18;
        v26 = v18;
        do {
          v27 = *v20;
          v28 = v20[2];
          v25 += 32;
          *(_QWORD*)(v26 + 8) = v20[1];
          *(_QWORD*)(v26 + 16) = v28;
          *(_QWORD*)v26 = v27;
          LODWORD(v27) = *((_DWORD*)v20 + 6);
          v20 += 4;
          *(_DWORD*)(v26 + 24) = v27;
          v26 += 32;
        } while (v20 != a3);
      }
      *(_QWORD*)(result + 8) = v25;
    }
  }
  else {
    if (v6 != 0) {
      v9 = GameData_2265ee0;
      *(_QWORD*)(result + 8) = v6;
      v10 = a4;
      v11 = 128;
      if (*(_QWORD*)(v9 + 200) == 0) {
        v11 = 56;
      }
      GameRoutine_1a0a4e0(v9 + v11, v6);
      a4 = v10;
      v5 = 0;
      v8[1] = 0;
      v8[2] = 0;
      *v8 = 0;
    }
    if (a4 >> 59 != 0) {
      goto LABEL_27;
    }
    v12 = v5 >> 4;
    if (v5 >> 4 <= a4) {
      v12 = a4;
    }
    v13 = (unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFE0LL;
    v14 = 0x7FFFFFFFFFFFFFFLL;
    if (!v13) {
      v14 = v12;
    }
    if (v14 >> 59 != 0) {
    LABEL_27:
      GameRoutine_7a3bd0();
    }
    v15 = 32 * v14;
    result = GameRoutine_651b90(GameData_2265ee0, 32 * v14, 16, 0);
    *v8 = result;
    v8[1] = result;
    for (v8[2] = result + v15; a2 != a3; result += 32) {
      v16 = a2[1];
      *(_QWORD*)result = *a2;
      *(_QWORD*)(result + 8) = v16;
      *(_QWORD*)(result + 16) = a2[2];
      v17 = *((_DWORD*)a2 + 6);
      a2 += 4;
      *(_DWORD*)(result + 24) = v17;
    }
    v8[1] = result;
  }
  return result;
}

__int64 GameHr_7a67e0(__int64 a1, _WORD* a2)
{
  __int64 result;
  int v5;
  bool v6;
  __int64 v7;
  unsigned __int8 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int* v14;
  int v15;
  int v16;

  result = *(_QWORD*)(a1 + 8);
  v5 = *(_DWORD*)(*(_QWORD*)(result + 8) + 11276LL);
  v6 = (v5 & 1) == 0;
  if ((*(_DWORD*)a2 & 0xFFF) != 0) {
    if ((v5 & 1) == 0) {
      goto LABEL_9;
    }
    v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                    8LL * (*(_DWORD*)a2 & 0xFFF));
    if (v7 == *(_QWORD*)(result + 56) && (*(_WORD*)(v7 + 754) & 0x4000) == 0) {
      goto LABEL_11;
    }
    v6 = false;
  }
  if (!v6 && (v5 & 0xC000000) != 0xC000000) {
    v8 = 2;
    goto LABEL_10;
  }
LABEL_9:
  v8 = 0;
LABEL_10:
  result = GameRoutine_7a17c0(result, a2, v8);
  if ((result & 1) == 0) {
    return result;
  }
LABEL_11:
  v9 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                  8LL * (*(_DWORD*)a2 & 0xFFF));
  if ((((unsigned int)GameData_21d3fa8 >> *(_BYTE*)(v9 + 115)) & 1) != 0) {
    v10 = *(unsigned __int8*)(v9 + 250);
    if (v10 != 19) {
      v11 = *(_QWORD*)(v9 + 24);
      v12 = *(_QWORD*)(v11 + 1040);
      v13 = *(_QWORD*)(v11 + 1048);
      if (v12 == v13) {
      LABEL_16:
        switch (v10) {
        case 26:
          v14 = *(int**)(a1 + 16);
          if (*(_WORD*)(v9 + 256) != 0) {
            v15 = **(__int16**)(v9 + 264);
          }
          else {
            v15 = 0;
          }
          if (*v14 > v15) {
            v15 = *v14;
          }
          break;
        case 50:
          if (*(_WORD*)(v9 + 256) != 0) {
            v16 = **(__int16**)(v9 + 264);
          }
          else {
            v16 = 0;
          }
          v14 = *(int**)(a1 + 16);
          v15 = *v14 + v16;
          break;
        case 49:
          v14 = *(int**)(a1 + 16);
          if (*(_WORD*)(v9 + 256) != 0) {
            v15 = **(__int16**)(v9 + 264);
          }
          else {
            v15 = 0;
          }
          break;
        default:
          return result;
        }
        *v14 = v15;
      }
      else {
        while ((unsigned int)*(unsigned __int16*)(v12 + 2) - 1016 >= 3) {
          v12 += 8;
          if (v12 == v13) {
            goto LABEL_16;
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_7a74a0(__int64 a1, _WORD* a2, __int64 a3, __int64 a4)
{
  __int64 v5;
  int v7;
  bool v8;
  __int64 v9;
  unsigned __int8 v10;
  __int64 result;
  __int64 v12;

  v5 = *(_QWORD*)(a1 + 8);
  v7 = *(_DWORD*)(*(_QWORD*)(v5 + 8) + 11276LL);
  v8 = (v7 & 1) == 0;
  if ((*(_DWORD*)a2 & 0xFFF) == 0) {
  LABEL_6:
    if (!v8 && (v7 & 0xC000000) != 0xC000000) {
      v10 = 2;
      goto LABEL_10;
    }
  LABEL_9:
    v10 = 0;
  LABEL_10:
    result = GameRoutine_7a17c0(v5, a2, v10);
    if ((result & 1) == 0) {
      return result;
    }
    goto LABEL_11;
  }
  if ((v7 & 1) == 0) {
    goto LABEL_9;
  }
  v9 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                  8LL * (*(_DWORD*)a2 & 0xFFF));
  if (v9 != *(_QWORD*)(v5 + 56) || (*(_WORD*)(v9 + 754) & 0x4000) != 0) {
    v8 = false;
    goto LABEL_6;
  }
LABEL_11:
  v12 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL);
  if (v12 == 0) {
    GameRoutine_60a310();
  }
  return (*(__int64 (**)(__int64, _WORD*))(*(_QWORD*)v12 + 48LL))(v12, a2);
}

__int64 GameHr_7a75b0(__int64 a1)
{
  int v1;
  __int64 v2;
  _DWORD* v3;
  __int16 v4;
  __int64 v6;
  __int64 v7;
  unsigned int v9;
  bool v10;
  int v11;

  v1 = *(_DWORD*)(a1 + 8);
  v2 = v1 & 0xFFF;
  if ((v1 & 0xFFF) != 0) {
    v3 = &GameData_1b47d74;
    if ((*(_BYTE*)(a1 + 14) & 2) == 0) {
      v4 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v2) +
                     754LL);
      if ((v4 & 0xE0) != 0 && (v4 & 0x2000) == 0) {
        v9 = *(unsigned __int8*)(a1 + 4);
        v10 = v9 > 0x10;
        v11 = (1 << v9) & 0x16000;
        if (!v10 && v11 != 0) {
          if ((v4 & 0x80) != 0) {
            return 3;
          }
          if ((v4 & 0x20) != 0) {
            return 1;
          }
          if ((v4 & 0x40) != 0) {
            return 2;
          }
        }
      }
      if (*(_BYTE*)(a1 + 4) == 15) {
        v3 = (_DWORD*)(a1 + 8);
      }
    }
  }
  else {
    v3 = &GameData_1b47d74;
  }
  v6 = *v3 & 0xFFF;
  if ((_DWORD)v6 != 0 &&
      (*(_BYTE*)((v7 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v6)) +
                 104) == 7 ||
       (*(_WORD*)(v7 + 754) & 0x80) != 0)) {
    return 4;
  }
  else {
    return 0;
  }
}

__int64 GameHr_7a76a0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 (***v7)(_QWORD);
  __int16* v8;
  int v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  __int64 (***v13)(_QWORD);
  __int16* v14;
  int v15;
  int v16;

  v3 = *(_QWORD*)(a2 + 24);
  if (v3 != 0 && *(_QWORD*)(v3 + 392) != 0 ||
      (*(_BYTE*)(*(_QWORD*)(a2 + 8) + 11277LL) & 0x80) == 0 &&
          (v7 = *(__int64 (****)(_QWORD))(a2 + 32)) != nullptr &&
          ((**v7)(v7) & 1) != 0) {
    v8 = (__int16*)(a1 + 12LL * *(unsigned __int8*)(a2 + 16));
    v9 = GameHr_79c7f0(a2);
    v10 = v8[8];
    v8[9] = v9;
    if (v9 < v10) {
      LOWORD(v10) = v9;
    }
    v8[10] = v10;
    v8[8] = *(_DWORD*)(a2 + 96);
    v8[11] = *(_DWORD*)(a2 + 104);
    v8[12] = BattleInfo_7a3000();
    v8[13] = BattleInfo_7a3110();
  }
  v11 = *(unsigned __int8*)(a3 + 16);
  if (*(unsigned __int8*)(a2 + 16) != v11) {
    v12 = *(_QWORD*)(a3 + 24);
    if (v12 == 0 || *(_QWORD*)(v12 + 392) == 0) {
      if ((*(_BYTE*)(*(_QWORD*)(a3 + 8) + 11277LL) & 0x80) != 0) {
        return a1;
      }
      v13 = *(__int64 (****)(_QWORD))(a3 + 32);
      if (v13 == nullptr || ((**v13)(v13) & 1) == 0) {
        return a1;
      }
      v11 = *(unsigned __int8*)(a3 + 16);
    }
    v14 = (__int16*)(a1 + 12LL * v11);
    v15 = GameHr_79c7f0(a3);
    v16 = v14[8];
    v14[9] = v15;
    if (v15 < v16) {
      LOWORD(v16) = v15;
    }
    v14[10] = v16;
    v14[8] = *(_DWORD*)(a3 + 96);
    v14[11] = *(_DWORD*)(a3 + 104);
    v14[12] = BattleInfo_7a3000();
    v14[13] = BattleInfo_7a3110();
  }
  return a1;
}

_QWORD* GameHr_7a8220(_QWORD* result, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;

  v2 = (_QWORD*)result[1];
  v3 = result[2];
  v4 = result;
  if ((unsigned __int64)v2 >= v3) {
    v8 = (__int64)v2 - *result;
    v9 = 1 - 0x5555555555555555LL * (v8 >> 3);
    if (v9 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_64aa00();
    }
    v10 = GameData_212bf68;
    v11 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v3 - *result) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x555555555555555LL) {
      v12 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v13 = a2;
      v14 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 24 * v12, 16, 0);
      a2 = v13;
    }
    else {
      v14 = 0;
    }
    v15 = (_QWORD*)(v14 + v8);
    v16 = v14 + 24 * v12;
    v17 = *a2;
    v18 = a2[1];
    *a2 = 0;
    a2[1] = 0;
    v7 = v14 + v8 + 24;
    *v15 = v17;
    v15[1] = v18;
    v19 = a2[2];
    a2[2] = 0;
    v15[2] = v19;
    v20 = *v4;
    v21 = v4[1] - *v4;
    v22 = (char*)v15 - v21;
    result = (_QWORD*)GameRoutine_1a0b950((char*)v15 - v21, *v4, v21);
    *v4 = v22;
    v4[1] = v7;
    v4[2] = v16;
    if (v20 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v23 = 56;
      }
      result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v10 + v23, v20);
    }
  }
  else {
    v5 = *a2;
    v6 = a2[2];
    v7 = (__int64)(v2 + 3);
    v2[1] = a2[1];
    v2[2] = v6;
    *v2 = v5;
    a2[1] = 0;
    a2[2] = 0;
    *a2 = 0;
  }
  v4[1] = v7;
  return result;
}

__int64 GameHr_7a83a0(__int64 result, int a2)
{
  unsigned int v2;
  unsigned __int64 i;
  unsigned __int8* v4;
  unsigned int v5;
  __int64 v6;
  __int64 j;
  int v8;
  __int64 v9;
  unsigned __int8* v10;
  int v11;
  int v12;

  if (result != 0) {
    v2 = -2128831035;
    if (a2 < 8) {
      v5 = 0;
      if (a2 <= 0) {
      LABEL_13:
        if (v2 != 0) {
          return v2;
        }
        else {
          return 0xFFFFFFFFLL;
        }
      }
    }
    else {
      for (i = 7; i < (unsigned int)a2; i += 8LL) {
        v4 = (unsigned __int8*)(result + i);
        v2 = (16777619 *
              ((16777619 *
                ((16777619 *
                  ((16777619 *
                    ((16777619 *
                      ((16777619 * ((16777619 * ((16777619 * v2) ^ *(v4 - 7))) ^
                                    *(v4 - 6))) ^
                       *(v4 - 5))) ^
                     *(v4 - 4))) ^
                   *(v4 - 3))) ^
                 *(v4 - 2))) ^
               *(v4 - 1))) ^
             *v4;
      }
      v5 = a2 & 0x7FFFFFF8;
      if ((a2 & 0x7FFFFFF8) >= a2) {
        goto LABEL_13;
      }
    }
    v6 = a2 & 7;
    for (j = v5; v6 != 0; v2 = (16777619 * v2) ^ v8) {
      v8 = *(unsigned __int8*)(result + j++);
      --v6;
    }
    if (v5 - (unsigned __int64)(unsigned int)a2 <= 0xFFFFFFFFFFFFFFF8LL) {
      v9 = (unsigned int)a2 - j;
      v10 = (unsigned __int8*)(j + result + 3);
      do {
        v9 -= 8;
        v11 = (16777619 *
               ((16777619 *
                 ((16777619 *
                   ((16777619 *
                     ((16777619 * ((16777619 * ((16777619 * v2) ^ *(v10 - 3))) ^
                                   *(v10 - 2))) ^
                      *(v10 - 1))) ^
                    *v10)) ^
                  v10[1])) ^
                v10[2])) ^
              v10[3];
        v12 = v10[4];
        v10 += 8;
        v2 = (16777619 * v11) ^ v12;
      } while (v9 != 0);
    }
    goto LABEL_13;
  }
  return result;
}

__int64 GameHr_7a88a0(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int8* v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8* v13;
  __int64 v14;
  __int64 v15;

  v1 = *a1;
  if (*a1 == 0) {
    return 0;
  }
  v2 = a1[1];
  v3 = 0xCBF29CE484222325LL;
  v4 = (unsigned int)v2;
  if ((int)v2 >= 8) {
    v5 = 7;
    do {
      v6 = (unsigned __int8*)(v1 + v5);
      v5 += 8LL;
      v3 =
          (0x100000001B3LL *
           ((0x100000001B3LL *
             ((0x100000001B3LL *
               ((0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL * ((0x100000001B3LL * v3) ^ *(v6 - 7))) ^
                      *(v6 - 6))) ^
                    *(v6 - 5))) ^
                  *(v6 - 4))) ^
                *(v6 - 3))) ^
              *(v6 - 2))) ^
            *(v6 - 1))) ^
          *v6;
    } while (v5 < (a1[1] & 0x7FFFFFFFuLL));
    LODWORD(v7) = v2 & 0x7FFFFFF8;
    if ((v2 & 0x7FFFFFF8) >= (int)v2) {
      goto LABEL_14;
    }
  LABEL_9:
    v9 = a1[1] & 7;
    v10 = (unsigned int)v7;
    v7 = (unsigned int)v7;
    if ((v4 & 7) != 0) {
      do {
        v11 = *(unsigned __int8*)(v1 + v7++);
        --v9;
        v3 = (0x100000001B3LL * v3) ^ v11;
      } while (v9 != 0);
    }
    if ((unsigned __int64)(v10 - v4) <= 0xFFFFFFFFFFFFFFF8LL) {
      v12 = v4 - v7;
      v13 = (unsigned __int8*)(v7 + v1 + 3);
      do {
        v12 -= 8;
        v14 = (0x100000001B3LL *
               ((0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL * v3) ^ *(v13 - 3))) ^
                        *(v13 - 2))) ^
                      *(v13 - 1))) ^
                    *v13)) ^
                  v13[1])) ^
                v13[2])) ^
              v13[3];
        v15 = v13[4];
        v13 += 8;
        v3 = (0x100000001B3LL * v14) ^ v15;
      } while (v12 != 0);
    }
    goto LABEL_14;
  }
  LODWORD(v7) = 0;
  if ((int)v2 > 0) {
    goto LABEL_9;
  }
LABEL_14:
  if (v3 != 0) {
    return v3;
  }
  else {
    return -1;
  }
}

#pragma GCC visibility pop
