#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1a99856;

extern _UNKNOWN GameData_1abbaec;

extern __int64 (*GameData_1fe4398[])();

extern __int64 (*GameData_1fe4630[])();

extern __int64 GameData_212bf68;

extern __int64* GameData_212c010[3];

extern _UNKNOWN* GameData_212c540;

extern __int64* GameData_212c738[2];

extern __int64 GameData_212c7b0[11];

extern __int64* GameData_212d448[9];

extern char** GameData_212def8;

extern __int64* GameData_212e348;

extern __int64* GameData_212ee68[4];

extern __int128 GameData_21a6120;

extern _UNKNOWN GameData_21a6130;

extern __int64 GameData_21c9710;

extern __int64 GameData_21c99c8;

extern __int64 GameData_21ca310;

extern __int64 GameData_21caab0;

extern __int64 GameData_21f4cc0;

extern __int64 GameData_2219098;

extern __int64 GameData_22190b8;

extern __int64 GameData_22190c0;

extern __int64 GameData_22197d8;

extern __int64 GameData_221bea8;

__int64 GameRoutine_1079580(_QWORD, _QWORD, float, float, float);

__int64 GameRoutine_1084940(_QWORD, _QWORD, double);

__int64 GameRoutine_10adb80(_QWORD, _QWORD);

__int64 GameRoutine_10b2280(_QWORD, _QWORD, double);

__int64 GameRoutine_10c910(_QWORD, _QWORD);

__int64 GameRoutine_10cff0(_QWORD);

__int64 GameRoutine_1120d0(_QWORD);

__int64 GameRoutine_112290(_QWORD);

__int64 GameRoutine_1257620(_QWORD, _QWORD);

__int64 GameRoutine_155e830(_QWORD, _QWORD);

__int64 GameRoutine_16477d0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);

__int64 GameRoutine_17c4450(_QWORD, _QWORD);

__int64 GameRoutine_17c8620(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_17c89c0(_QWORD);

__int64 GameRoutine_187d070(_QWORD, _QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);

__int64 GameRoutine_1a09d30(_QWORD, _QWORD);

__int64 GameRoutine_1a09fd0(_QWORD, long double, long double);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_60a020(_QWORD, _QWORD);

__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_65c580(_QWORD, _QWORD);

__int64 GameRoutine_7a86e0(_QWORD);

__int64 GameRoutine_867df0(_QWORD);

__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_d38e30(_QWORD);

char* GameRoutine_e37f80(signed __int64*, char*, char*);

void GameRoutine_e3f8b0(_QWORD*, double, double, double, double);

__attribute__((swiftcall)) void GameRoutine_e4c790(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);

__int64 GameRoutine_e58ae0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_e5a5e0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_e5ccc0(void);

_QWORD* GameRoutine_e67b30(_QWORD*, __int64*);

void __attribute__((noreturn)) GameRoutine_e67c30(_QWORD);

__int64 GameRoutine_e927f0(_QWORD, _QWORD);

__int64 GameRoutine_e94b60();

__int64 GameRoutine_ec1530(_QWORD);

__int64 GameRoutine_f6dc60(void);

__int64 GameRoutine_f6dde0(void);

char* GameHr_e39fe0(__int64 a1, int* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  int v6;
  char* v7;
  char* result;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(v2 + 176);
  v5 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 88, 16, 0);
  *(_QWORD*)(v5 + 8) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_WORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 64) = v4;
  *(_DWORD*)(v5 + 72) = 0;
  *(_QWORD*)v5 = GameData_1fe4630;
  *(_BYTE*)(v5 + 40) = 24;
  strcpy((char*)(v5 + 41), "ImmidiateDir");
  *(_BYTE*)(v5 + 76) = 0;
  *(_BYTE*)(v5 + 84) = 0;
  *(_QWORD*)(v5 + 24) = GameData_1fe4398;
  v6 = *a2;
  v10 = v5 + 24;
  v11 = v5;
  *a2 = v6 + 1;
  if (v6 <= 0) {
    v7 = *(char**)(v2 + 136);
  }
  else {
    v7 = (char*)(*(_QWORD*)(v2 + 136) + 16LL * (unsigned int)(v6 - 1) + 16);
  }
  result = GameRoutine_e37f80((signed __int64*)(v2 + 136), v7, (char*)&v10);
  v9 = v11;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    return (char*)GameRoutine_1a09c50(v9);
  }
  return result;
}

__int64 GameHr_e4bf40(__int64 result)
{
  __int64 v1;
  unsigned __int8* v2;
  int v3;
  __int64 v5;
  __int64 v6;
  float v7;
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
  unsigned __int64 v18;
  int* v19;
  int v20;
  __int64 v21;
  long double v22;
  long double v23;
  _QWORD* v24;
  __int128 v25;
  __int128 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int8** v30;
  unsigned __int8** v31;
  unsigned __int8* v32;
  unsigned __int8* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int8* v36;
  __int64 v37;
  _BOOL4 v38;
  __int64 v39;
  __int64 v40;
  double v41;
  double v42;
  _QWORD* v43;
  double v44;
  double v45;
  unsigned __int8* v46;
  unsigned __int8* v47;
  unsigned __int64 v48;
  bool v49;
  unsigned __int64 v50;
  unsigned __int8* v51;
  unsigned __int64 v52;
  int v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  bool v57;
  unsigned __int64 v58;
  unsigned __int8* v59;
  unsigned __int64 v60;
  unsigned __int8** v61;
  unsigned __int8** v62;
  unsigned __int8* v63;
  unsigned __int8* v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int8* v67;
  int v68;
  _BOOL4 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64* v73;
  int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  bool v78;
  __int64* v79;
  int v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  bool v84;
  unsigned int v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  bool v89;
  __int64 v90;
  bool v91;
  __int64 v92;
  __int64 v93;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v101;
  __int64 v102;
  unsigned int v103;
  __int64 v104;
  __int64 v105;
  unsigned __int8* v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  int v111;

  v3 = *(_DWORD*)(result + 8);
  if (v3 == 0 || v3 == 6) {
    return result;
  }
  v5 = *(_QWORD*)(result + 128);
  v6 = result;
  if (v5 != 0) {
    v7 = *(float*)(v5 + 24);
    if (v7 < 0.0) {
      v7 = 0.0;
    }
    *(float*)(v5 + 104) = v7;
  }
  if (*(_BYTE*)(result + 224) == 1) {
    *(_BYTE*)(result + 224) = 0;
    v8 = *(_QWORD*)(*GameData_212c010[0] + 13224);
    v9 = *(_QWORD*)(v8 + 48);
    v10 = *(_QWORD*)(v8 + 56);
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
      v11 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 168LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        GameRoutine_1a09c50(v10);
      }
    }
    else {
      v11 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 168LL);
    }
    if (*(_BYTE*)(v11 + 96) == 1) {
      *(_BYTE*)(v11 + 96) = 0;
    }
  }
  v12 = *(_QWORD*)(v6 + 96);
  if (v12 != 0) {
    v111 = 1065353216;
    v110 = 0x3F80000000000000LL;
    *(_BYTE*)(v12 + 149) = 1;
    v13 = *(_QWORD*)(v6 + 96);
    v14 = *(_QWORD*)(*GameData_212ee68[0] + 8);
    v15 = *(_QWORD*)(*GameData_212ee68[0] + 16);
    v16 = v15 - v14;
    if (v15 == v14) {
      goto LABEL_25;
    }
    v17 = 0;
    v18 = 0x4EC4EC4EC4EC4EC5LL * (v16 >> 3);
    v19 = (int*)(v14 + 24);
    while (1) {
      v20 = *v19;
      v19 += 26;
      if (v20 == 1538794854) {
        break;
      }
      if (v18 == ++v17) {
        goto LABEL_25;
      }
    }
    if (v17 < 1) {
    LABEL_25:
      v21 = 0;
    }
    else {
      if (v18 <= (unsigned int)v17) {
        GameRoutine_d38e30(v13);
      }
      v21 = v14 + 104LL * (unsigned int)v17;
    }
    GameRoutine_e5a5e0(v13, v21, &v110);
    v24 = *(_QWORD**)(*(_QWORD*)(v6 + 96) + 40LL);
    v24[2] = v24[1];
    v24[5] = v24[4];
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)GameRoutine_1a09fd0(&GameData_21a6130, v22, v23) != 0) {
      v105 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v105;
      GameRoutine_1a09fe0(&GameData_21a6130);
    }
    v25 = GameData_21a6120;
    v24[8] = 0;
    v24[9] = 0x3F80000000000000LL;
    v24[10] = v25;
    v26 = *((_OWORD*)v24 + 5);
    *((_QWORD*)&v26 + 1) = DWORD2(v25);
    *((_OWORD*)v24 + 5) = v26;
  }
  v27 = GameRoutine_e58ae0(
      *(_QWORD*)(*(_QWORD*)v6 +
                 8LL * (((*(_DWORD*)(v6 + 88) - 1) & 0xFFFFFFFD) == 0) + 16),
      "GambitSub", 9);
  v109 = v6;
  if (v27 >= 1) {
    v1 = 98;
    v28 = 0;
    v108 = (unsigned int)v27;
    do {
      v29 = *(_QWORD*)(*(_QWORD*)v6 +
                       8LL * (((*(_DWORD*)(v6 + 88) - 1) & 0xFFFFFFFD) == 0) +
                       16);
      v30 = *(unsigned __int8***)(v29 + 16);
      v31 = *(unsigned __int8***)(v29 + 24);
      if (v30 == v31) {
        goto LABEL_30;
      }
      while (1) {
        v32 = *v30;
        v33 = v30[1];
        if (v33 != nullptr) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                                    memory_order_relaxed);
        }
        v34 = *v32;
        v35 = *((_QWORD*)v32 + 1);
        if ((v34 & 1) == 0) {
          v35 = v34 >> 1;
        }
        if (v35 != 9) {
          v38 = false;
          if (v33 == nullptr) {
            goto LABEL_47;
          }
        LABEL_45:
          if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(unsigned __int8*))(*(_QWORD*)v33 + 16LL))(v33);
            GameRoutine_1a09c50(v33);
          }
          goto LABEL_47;
        }
        if ((v34 & 1) != 0) {
          v36 = *((unsigned __int8**)v32 + 2);
        }
        else {
          v36 = v32 + 1;
        }
        v37 = *(_QWORD*)v36 ^ 0x75537469626D6147LL | v36[8] ^ 0x62LL;
        v38 = v37 == 0;
        if (v37 == 0) {
          v2 = v32;
        }
        if (v33 != nullptr) {
          goto LABEL_45;
        }
      LABEL_47:
        if (v38) {
          break;
        }
        v30 += 2;
        if (v30 == v31) {
          goto LABEL_30;
        }
      }
      if (v2 != nullptr) {
        v39 = *(_QWORD*)(*((_QWORD*)v2 + 3) + 16 * v28);
        if (v39 != 0) {
          GameRoutine_e4c790((void*)&v110, v109, v39, 0);
          v40 = *(_QWORD*)(v39 + 120);
          LODWORD(v42) = HIDWORD(v110);
          LODWORD(v41) = v110;
          v43 = *(_QWORD**)(v40 + 8);
          *(_QWORD*)(v40 + 120) = 0;
          *(_DWORD*)(v40 + 116) = 0;
          *(_QWORD*)(v40 + 40) = 0;
          *(_QWORD*)(v40 + 80) = 0;
          *(_QWORD*)(v40 + 88) = 0;
          *(_QWORD*)(v40 + 24) = __PAIR64__(LODWORD(v42), LODWORD(v41));
          *(_QWORD*)(v40 + 16) = __PAIR64__(LODWORD(v42), LODWORD(v41));
          GameRoutine_e3f8b0(v43, v41, v42, v44, v45);
        }
      }
    LABEL_30:
      v6 = v109;
      ++v28;
    } while (v28 != v108);
  }
  v47 = *(unsigned __int8**)(v6 + 232);
  v46 = *(unsigned __int8**)(v6 + 240);
  v106 = v46;
  while (v47 != v46) {
    v48 = *v47;
    v49 = (v48 & 1) == 0;
    v50 = v48 >> 1;
    if (v49) {
      v51 = v47 + 1;
    }
    else {
      v51 = *((unsigned __int8**)v47 + 2);
    }
    if (v49) {
      v52 = v50;
    }
    else {
      v52 = *((_QWORD*)v47 + 1);
    }
    v53 = GameRoutine_e58ae0(
        *(_QWORD*)(*(_QWORD*)v6 +
                   8LL * (((*(_DWORD*)(v6 + 88) - 1) & 0xFFFFFFFD) == 0) + 16),
        v51, v52);
    if (v53 >= 1) {
      v54 = 0;
      v107 = (unsigned int)v53;
      do {
        v55 = *v47;
        v56 = *(_QWORD*)(*(_QWORD*)v6 +
                         8LL * (((*(_DWORD*)(v6 + 88) - 1) & 0xFFFFFFFD) == 0) +
                         16);
        v57 = (v55 & 1) == 0;
        v58 = v55 >> 1;
        if (v57) {
          v59 = v47 + 1;
        }
        else {
          v59 = *((unsigned __int8**)v47 + 2);
        }
        if (v57) {
          v60 = v58;
        }
        else {
          v60 = *((_QWORD*)v47 + 1);
        }
        v61 = *(unsigned __int8***)(v56 + 16);
        v62 = *(unsigned __int8***)(v56 + 24);
        if (v61 == v62) {
          goto LABEL_66;
        }
        while (1) {
          v64 = *v61;
          v63 = v61[1];
          if (v63 != nullptr) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 8), 1u,
                                      memory_order_relaxed);
          }
          v65 = *v64;
          v66 = *((_QWORD*)v64 + 1);
          if ((v65 & 1) == 0) {
            v66 = v65 >> 1;
          }
          if (v60 != v66) {
            v69 = false;
            if (v63 == nullptr) {
              goto LABEL_89;
            }
          LABEL_87:
            if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(unsigned __int8*))(*(_QWORD*)v63 + 16LL))(v63);
              GameRoutine_1a09c50(v63);
            }
            goto LABEL_89;
          }
          if ((v65 & 1) != 0) {
            v67 = *((unsigned __int8**)v64 + 2);
          }
          else {
            v67 = v64 + 1;
          }
          v68 = GameRoutine_1a09cf0(v59, v67);
          v69 = v68 == 0;
          if (v68 == 0) {
            v1 = (__int64)v64;
          }
          if (v63 != nullptr) {
            goto LABEL_87;
          }
        LABEL_89:
          if (v69) {
            break;
          }
          v61 += 2;
          if (v61 == v62) {
            goto LABEL_66;
          }
        }
        if (v1 != 0) {
          v70 = *(_QWORD*)(*(_QWORD*)(v1 + 24) + 16 * v54);
          if (v70 != 0) {
            v71 = *(_QWORD*)(v70 + 136);
            v72 = *(_QWORD*)(v70 + 144);
            if (v72 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v72 + 8), 1u,
                                        memory_order_relaxed);
              v73 = *(__int64**)(v71 + 40);
              v74 = *((_DWORD*)v73 + 5);
              *((_DWORD*)v73 + 5) = v74 | 2;
              if (v74 != (v74 | 2)) {
                v75 = *v73;
                v76 = *(_QWORD*)(v75 + 8);
                if (v76 != 0) {
                  v77 = *(_QWORD*)(v75 + 16);
                  v78 = *(_QWORD*)(v76 + 8) == -1 || v77 == 0;
                  if (!v78 && *(_QWORD*)(v76 + 8) != -1 &&
                      (*(_BYTE*)(v75 + 61) & 1) == 0 &&
                      *(_DWORD*)(v75 + 64) != 1 &&
                      (*(_BYTE*)(v77 + 342) & 1) != 0) {
                    GameRoutine_1084940(v77, 0, 0.0);
                    *(_BYTE*)(*(_QWORD*)(v77 + 8) + 289LL) = 0;
                  }
                }
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
                GameRoutine_1a09c50(v72);
              }
            }
            else {
              v79 = *(__int64**)(v71 + 40);
              v80 = *((_DWORD*)v79 + 5);
              *((_DWORD*)v79 + 5) = v80 | 2;
              if (v80 != (v80 | 2)) {
                v81 = *v79;
                v82 = *(_QWORD*)(v81 + 8);
                if (v82 != 0) {
                  v83 = *(_QWORD*)(v81 + 16);
                  v84 = *(_QWORD*)(v82 + 8) == -1 || v83 == 0;
                  if (!v84 && *(_QWORD*)(v82 + 8) != -1 &&
                      (*(_BYTE*)(v81 + 61) & 1) == 0 &&
                      *(_DWORD*)(v81 + 64) != 1 &&
                      (*(_BYTE*)(v83 + 342) & 1) != 0) {
                    GameRoutine_1084940(v83, 0, 0.0);
                    *(_BYTE*)(*(_QWORD*)(v83 + 8) + 289LL) = 0;
                  }
                }
              }
            }
          }
        }
      LABEL_66:
        v6 = v109;
        ++v54;
      } while (v54 != v107);
    }
    v46 = v106;
    v47 += 24;
  }
  v85 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v6 +
                              8LL * (((*(_DWORD*)(v6 + 88) - 1) & 0xFFFFFFFD) ==
                                     0) +
                              16) +
                   112LL);
  if (v85 == 0) {
    goto LABEL_120;
  }
  if (v85 == 1) {
    v85 = 1;
  LABEL_120:
    v86 = *GameData_212d448[0] + 24LL * v85;
    v87 = *(_QWORD*)(v86 + 32);
    if (v87 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v87 + 16), 1u,
                                memory_order_relaxed);
      v88 = *(_QWORD*)(v86 + 40);
      v89 = *(_QWORD*)(v87 + 8) == -1 || v88 == 0;
      if (v89 || (v90 = *(_QWORD*)(v88 + 80)) == 0 ||
          (*(_QWORD*)(v90 + 8) != -1 ? (v91 = *(_QWORD*)(v88 + 88) == 0)
                                     : (v91 = true),
           v91 || *(_QWORD*)(v87 + 8) == -1)) {
        GameRoutine_1a09c50(v87);
      }
      else {
        GameRoutine_1a09c50(v87);
        v92 = *(_QWORD*)(v88 + 80);
        if (v92 != 0) {
          v93 = *(_QWORD*)(v88 + 88);
          if (*(_QWORD*)(v92 + 8) != -1 && v93 != 0) {
            v95 = *(_QWORD*)(v93 + 72);
            if (v95 != 0) {
              GameRoutine_1079580(v95, *(unsigned int*)(v95 + 112), -1.0, -1.0,
                                  1.0);
            }
            v96 = *(_QWORD*)(v93 + 88);
            if (v96 != 0) {
              v97 = *(_QWORD*)(v96 + 32);
              if (v97 != 0) {
                v98 = *(_QWORD*)(v97 + 8);
                v99 = *(_QWORD*)(v96 + 40);
                if (v98 != -1 && v99 != 0) {
                  v101 = *(_QWORD*)(v99 + 392);
                  v102 = *(_QWORD*)(v99 + 400);
                  if (v102 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v102 + 8), 1u,
                        memory_order_relaxed);
                    if (atomic_fetch_add((atomic_ullong* volatile)(v102 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v102 + 16LL))(v102);
                      GameRoutine_1a09c50(v102);
                    }
                  }
                  v103 = GameRoutine_10adb80(v101 + 1432, &GameData_1abbaec);
                  if ((v103 & 0x80000000) == 0) {
                    GameRoutine_10b2280(v96, v103, 0.0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((GameRoutine_1120d0(v6 + 152) & 1) != 0) {
    v104 = GameRoutine_112290(v6 + 152);
    GameRoutine_10c910(&v110, 1000);
    (*(void (**)(__int64, __int64*, _QWORD, double))(
        *(_QWORD*)(v104 - 5592) + 248LL))(v104 - 5592, &v110, 0, 0.0);
    GameRoutine_10cff0(&v110);
  }
  result = *(_QWORD*)(v6 + 112);
  if (result != 0) {
    return GameRoutine_e5ccc0();
  }
  return result;
}

__int64 GameHr_e51940(__int64 a1, __int64 a2)
{
  unsigned __int8* v2;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int8** v20;
  unsigned __int8** v21;
  unsigned __int8* v22;
  unsigned __int8* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int8* v26;
  _BOOL4 v27;
  __int64 v28;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;

  v4 = a1 + 25;
  v31 = a1 + 25;
  v5 = *(_QWORD*)(**(_QWORD**)(a1 + 48) +
                  8LL * (((*(_DWORD*)(*(_QWORD*)(a1 + 48) + 88LL) - 1) &
                          0xFFFFFFFD) == 0) +
                  16);
  v6 = *(unsigned __int8*)(a1 + 24);
  v7 = (v6 & 1) == 0;
  v8 = v6 >> 1;
  if (v7) {
    v9 = v4;
  }
  else {
    v9 = *(_QWORD*)(a1 + 40);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *(_QWORD*)(a1 + 32);
  }
  result = GameRoutine_e58ae0(v5, v9, v10);
  if ((int)result >= 1) {
    v13 = 0;
    v30 = (unsigned int)result;
    do {
      v14 = *(unsigned __int8*)(a1 + 24);
      v15 = *(_QWORD*)(**(_QWORD**)(a1 + 48) +
                       8LL * (((*(_DWORD*)(*(_QWORD*)(a1 + 48) + 88LL) - 1) &
                               0xFFFFFFFD) == 0) +
                       16);
      v16 = (v14 & 1) == 0;
      v17 = v14 >> 1;
      if (v16) {
        v18 = v31;
      }
      else {
        v18 = *(_QWORD*)(a1 + 40);
      }
      if (v16) {
        v19 = v17;
      }
      else {
        v19 = *(_QWORD*)(a1 + 32);
      }
      v20 = *(unsigned __int8***)(v15 + 16);
      v21 = *(unsigned __int8***)(v15 + 24);
      if (v20 == v21) {
        goto LABEL_9;
      }
      while (1) {
        v23 = *v20;
        v22 = v20[1];
        if (v22 != nullptr) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                    memory_order_relaxed);
        }
        v24 = *v23;
        v25 = *((_QWORD*)v23 + 1);
        if ((v24 & 1) == 0) {
          v25 = v24 >> 1;
        }
        if (v19 != v25) {
          v27 = false;
          if (v22 == nullptr) {
            goto LABEL_32;
          }
        LABEL_30:
          if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(unsigned __int8*))(*(_QWORD*)v22 + 16LL))(v22);
            result = GameRoutine_1a09c50(v22);
          }
          goto LABEL_32;
        }
        if ((v24 & 1) != 0) {
          v26 = *((unsigned __int8**)v23 + 2);
        }
        else {
          v26 = v23 + 1;
        }
        result = GameRoutine_1a09cf0(v18, v26);
        v27 = result == 0;
        if ((_DWORD)result == 0) {
          v2 = v23;
        }
        if (v22 != nullptr) {
          goto LABEL_30;
        }
      LABEL_32:
        if (v27) {
          break;
        }
        v20 += 2;
        if (v20 == v21) {
          goto LABEL_9;
        }
      }
      if (v2 != nullptr && *(_QWORD*)(*((_QWORD*)v2 + 3) + 16 * v13) != 0) {
        v33 = *(_QWORD*)(*((_QWORD*)v2 + 3) + 16 * v13);
        v32 = v13;
        v28 = *(_QWORD*)(a2 + 32);
        if (v28 == 0) {
          GameRoutine_60a310(0, v12);
        }
        result = (*(__int64 (**)(__int64, __int64*, int*))(
            *(_QWORD*)v28 + 48LL))(v28, &v33, &v32);
      }
    LABEL_9:
      ++v13;
    } while (v13 != v30);
  }
  return result;
}

_QWORD* GameHr_e67f20(_QWORD* result, __int64* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64* v11;
  __int64* v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  char* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v3 = result;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)GameRoutine_60a270(result, a2[2], a2[1]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    result[1] = a2[1];
    result[2] = v5;
    *result = v4;
  }
  if ((a2[3] & 1) != 0) {
    result = (_QWORD*)GameRoutine_60a270(v3 + 3, a2[5], a2[4]);
  }
  else {
    v6 = a2[3];
    v7 = a2[5];
    v3[4] = a2[4];
    v3[5] = v7;
    v3[3] = v6;
  }
  v8 = a2[6];
  v9 = a2[7];
  v10 = *((_DWORD*)a2 + 16);
  v3[9] = 0;
  v3[10] = 0;
  v3[11] = 0;
  *((_DWORD*)v3 + 16) = v10;
  v3[6] = v8;
  v3[7] = v9;
  v11 = (__int64*)a2[9];
  v12 = (__int64*)a2[10];
  v13 = (_QWORD*)GameData_212bf68;
  v14 = (char*)v12 - (char*)v11;
  if (v12 != v11) {
    if ((unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * (v14 >> 3)) >=
        0x2E8BA2E8BA2E8BBLL) {
      GameRoutine_e67c30(result);
    }
    result = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68,
                                         (char*)v12 - (char*)v11, 16, 0);
    v3[9] = result;
    v3[10] = result;
    v3[11] = (char*)result + v14;
    do {
      v15 = GameRoutine_e67b30(result, v11);
      v11 += 11;
      result = v15 + 11;
    } while (v11 != v12);
    v3[10] = result;
  }
  if ((a2[12] & 1) != 0) {
    result = (_QWORD*)GameRoutine_60a270(v3 + 12, a2[14], a2[13]);
  }
  else {
    v16 = a2[12];
    v17 = a2[14];
    v3[13] = a2[13];
    v3[14] = v17;
    v3[12] = v16;
  }
  v3[16] = 0;
  v3[17] = 0;
  v3[15] = 0;
  v18 = (char*)a2[15];
  v19 = (char*)a2[16];
  v20 = v19 - v18;
  if (v19 != v18) {
    if (0xAAAAAAAAAAAAAAABLL * (v20 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_64aa00(result);
    }
    result = (_QWORD*)GameRoutine_651b90(*v13, v19 - v18, 16, 0);
    v21 = result;
    v3[15] = result;
    v3[16] = result;
    v3[17] = (char*)result + v20;
    do {
      if ((*v18 & 1) != 0) {
        result = (_QWORD*)GameRoutine_60a270(v21, *((_QWORD*)v18 + 2),
                                             *((_QWORD*)v18 + 1));
      }
      else {
        v22 = *(_QWORD*)v18;
        v23 = *((_QWORD*)v18 + 2);
        v21[1] = *((_QWORD*)v18 + 1);
        v21[2] = v23;
        *v21 = v22;
      }
      v18 += 24;
      v21 += 3;
    } while (v18 != v19);
    v3[16] = v21;
  }
  v24 = a2[19];
  v3[18] = a2[18];
  v3[19] = v24;
  v3[20] = a2[20];
  return result;
}

__int64 GameHr_e69130(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;

  if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
    result = GameRoutine_17c4450(GameData_22197d8, *(_QWORD*)(result + 176));
    v1 = GameData_22190b8;
    if (GameData_22190b8 != 0) {
      v2 = *(_QWORD*)(GameData_22190b8 + 48);
      v3 = *(_QWORD*)(GameData_22190b8 + 56);
      v4 = ((v3 - v2) << 7) - 1;
      if (v3 == v2) {
        v4 = 0;
      }
      v5 =
          *(_QWORD*)(GameData_22190b8 + 80) + *(_QWORD*)(GameData_22190b8 + 72);
      if (v4 == v5) {
        GameRoutine_17c89c0(GameData_22190b8 + 40);
        v2 = *(_QWORD*)(v1 + 48);
        v5 = *(_QWORD*)(v1 + 80) + *(_QWORD*)(v1 + 72);
      }
      *(_DWORD*)(*(_QWORD*)(v2 + 8 * (v5 >> 10)) + 4 * (v5 & 0x3FF)) =
          *(_DWORD*)(v1 + 88);
      ++*(_QWORD*)(v1 + 80);
      v8 = 0x100000002LL;
      result = GameRoutine_17c8620(v1, &v8, 0, 0);
      *(_DWORD*)(v1 + 88) = 3;
    }
  }
  if ((*(_BYTE*)(GameData_22190c0 + 12) & 1) == 0) {
    *(_BYTE*)(GameData_22190c0 + 12) = 1;
    v6 = GameData_2219098;
    if ((*(_BYTE*)(GameData_2219098 + 10) & 1) == 0) {
      result = GameRoutine_ec1530(GameData_21f4cc0);
      if ((result & 1) == 0) {
        v7 = *(_DWORD*)(v6 + 24);
        *(_DWORD*)(v6 + 24) = v7 + 1;
        if (v7 == 0) {
          result = (**(__int64 (***)(__int64))(v6 + 16))(v6 + 16);
        }
        return GameRoutine_867df0(result);
      }
    }
  }
  return result;
}

__int64 GameHr_e81b70(__int64 a1)
{
  __int64 result;

  if (*(_BYTE*)(GameData_21c9710 + 80) == 1) {
    *(_BYTE*)(GameData_21c9710 + 80) = 0;
  }
  result = *(_QWORD*)(a1 + 208);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
  }
  return result;
}

__int64 GameHr_e92660(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD v20[4];
  int v21;
  int v22;
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

  v6 = *a2;
  if (*a2 != 0) {
    v10 = a1;
    v11 = GameData_212c738[0];
    if (a3 != 0) {
      v12 = a3;
    }
    else {
      v12 = (__int64)*GameData_212def8;
    }
    GameRoutine_60a020(*GameData_212c738[0] + 14704, v12);
    v13 = *v11;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v30 = -1;
    v31 = -1;
    v32 = -1;
    v33 = -1;
    v34 = -1;
    v20[0] = GameData_212e348 + 2;
    v20[1] = 0xFFFF0001FFFF0000LL;
    v20[2] = 0xFFFF0004FFFF0002LL;
    v20[3] = 0xFFFF0006FFFF0005LL;
    v35 = 8;
    v21 = -65529;
    v22 = -65528;
    v14 = GameRoutine_a4dbe0(v13, v6, 0, v20);
    a1 = v10;
  }
  else {
    v14 = 0;
  }
  v20[0] = v14;
  v15 = GameRoutine_e927f0(a1, v20);
  if (v15 != 0) {
    v16 = (_QWORD*)GameData_212bf68;
    v17 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 192, 16, 0);
    GameRoutine_16477d0(v17, "MID_Sys_Yes", a4, a6);
    GameRoutine_16e0c00(v15, v17);
    v18 = GameRoutine_651b90(*v16, 192, 16, 0);
    GameRoutine_16477d0(v18, "MID_Sys_No", a5, a6);
    GameRoutine_16e0c00(v15, v18);
  }
  return v15;
}

__int64 GameHr_e94ce0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  char v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];

  if (result == 0) {
    return result;
  }
  if (*(_QWORD*)(result + 272) == 0) {
    return 0;
  }
  if (GameData_21caab0 != 0) {
    v1 = *(_QWORD*)(GameData_21caab0 + 96);
    if (v1 != 0 && *(_QWORD*)(*(_QWORD*)(result + 24) + 1672LL) ==
                       *(_QWORD*)(*(_QWORD*)(v1 + 24) + 1672LL)) {
      return 0;
    }
    if (*(_DWORD*)(GameData_21caab0 + 60) == 2) {
      return 0;
    }
  }
  if (*(_QWORD*)(result + 40) != 0) {
    v2 = result;
    v3 = GameRoutine_1a09d30(*(_QWORD*)(result + 40), "Max");
    result = v2;
    if (v3 == 0) {
      v16[1] = &GameData_1a99856;
      v16[0] = GameRoutine_7a86e0(&GameData_1a99856);
      if (GameData_21caab0 == 0 ||
          (v4 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v16)) ==
              0) {
        result = v2;
        goto LABEL_16;
      }
      v5 = *(_DWORD*)(v4 + 32);
      result = v2;
      if (v5 > 0) {
        return 0;
      }
    }
  }
LABEL_16:
  if (GameData_21caab0 != 0 && *(_DWORD*)(GameData_21caab0 + 60) == 1) {
    v6 = result;
    v7 = GameRoutine_e94b60();
    result = v6;
    if ((v7 & 1) == 0) {
      return 0;
    }
  }
  if ((*(_BYTE*)(result + 49) & 0x10) == 0) {
    return 1;
  }
  v8 = *(_QWORD**)(GameData_21ca310 + 56);
  if (v8 == nullptr) {
    return 0;
  }
  v9 = 250;
  while (1) {
    v10 = v8[55];
    if (v10 != 0) {
      v11 = *(unsigned __int8*)(v10 + 16);
      if (v11 != 9 && v8[49] == result) {
        break;
      }
    }
    v12 = v8[333];
    if (v12 != 0) {
      v11 = *(unsigned __int8*)(v12 + 16);
      if (v11 != 9 && v8[327] == result) {
        break;
      }
    }
    v13 = v8[611];
    if (v13 != 0) {
      v11 = *(unsigned __int8*)(v13 + 16);
      if (v11 != 9 && v8[605] == result) {
        break;
      }
    }
    v14 = v8[889];
    if (v14 != 0) {
      v11 = *(unsigned __int8*)(v14 + 16);
      if (v11 != 9 && v8[883] == result) {
        break;
      }
    }
    v15 = v8[1167];
    if (v15 != 0) {
      v11 = *(unsigned __int8*)(v15 + 16);
      if (v11 != 9 && v8[1161] == result) {
        break;
      }
    }
    v8 += 1390;
    v9 -= 5;
    if (v9 == 0) {
      return 0;
    }
  }
  result = 1;
  if (((1 << v11) & 0xF1) == 0) {
    return 0;
  }
  return result;
}

__int64 GameHr_e96270(_QWORD* a1, int a2)
{
  __int64 v3;
  __int64 v4;

  switch (a2) {
  case 12:
    v4 = a1[42];
    if (v4 != 0) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 64LL))(v4, 1);
    }
    (*(void (**)(_QWORD*))(*a1 + 568LL))(a1);
    break;
  case 11:
    (*(void (**)(_QWORD*))(*a1 + 560LL))(a1);
    break;
  case 10:
    v3 = a1[42];
    if (v3 != 0) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 64LL))(v3, 1);
    }
    break;
  default:
    (*(void (**)(_QWORD*))(*a1 + 552LL))(a1);
    return GameRoutine_155e830(*(_QWORD*)(a1[165] + 8LL) + 848LL, 0);
  }
  return GameRoutine_155e830(*(_QWORD*)(a1[165] + 8LL) + 848LL, 0);
}

__int64 GameHr_e98d00(__int64 result)
{
  int v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  unsigned int v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;

  v1 = *(_DWORD*)(result + 400);
  v2 = *(_QWORD*)(GameData_221bea8 + 312);
  v3 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(GameData_221bea8 + 320) - v2) >> 3);
  if (v3 > v1) {
    v4 = result;
    if (*(_QWORD*)GameData_212c7b0[0] != 0) {
      v5 = v2 + 24LL * v1;
      if ((*(_BYTE*)v5 & 1) != 0) {
        v6 = *(_BYTE**)(v5 + 16);
      }
      else {
        v6 = (_BYTE*)(v5 + 1);
      }
      if (v6 != nullptr && *v6 != 0) {
        v7 = GameData_21caab0;
        if (GameData_21caab0 != 0) {
          v7 = *(unsigned __int8*)(GameData_21caab0 + 15);
        }
        v8 = *(_QWORD*)GameData_212c7b0[0] + 136LL * v7;
        v9 = *(__int64**)(v8 + 72);
        v10 = *(__int64**)(v8 + 80);
        while (v9 != v10) {
          v11 = *v9;
          result = *(_QWORD*)(*(_QWORD*)*v9 + 272LL);
          if (result != 0) {
            result = GameRoutine_1a09d30(result, v6);
            if ((_DWORD)result == 0) {
              GameRoutine_1257620(v11, 0);
              result = GameRoutine_187d070(v4, v11);
              v1 = *(_DWORD*)(v4 + 400);
              break;
            }
          }
          ++v9;
        }
      }
      LODWORD(v3) = v1 + 1;
    }
    *(_DWORD*)(v4 + 400) = v3;
  }
  return result;
}

__int64 GameHr_e98e00(__int64 result)
{
  if (0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD*)(GameData_221bea8 + 320) -
                                        *(_QWORD*)(GameData_221bea8 + 312)) >>
                              3) >
      *(int*)(result + 400)) {
    *(_DWORD*)(result + 152) = 2;
  }
  return result;
}

__int64 GameHr_e99120(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(GameData_221bea8 + 368);
  if (result != 0) {
    v3 = a1;
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result + 48LL))(result,
                                                                         &v3);
  }
  return result;
}

__int64 GameHr_e99170(__int64 a1)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 208);
  return GameRoutine_f6dc60();
}

__int64 GameHr_e991a0(__int64 a1)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 208);
  return GameRoutine_f6dde0();
}

_QWORD* GameHr_e99210(_QWORD* result)
{
  _QWORD* v1;

  v1 = *(_QWORD**)(*(_QWORD*)(GameData_221bea8 + 288) +
                   176LL * *((int*)result + 101) + 160);
  if (v1 != nullptr) {
    return X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                  PSEUDO_X8, _QWORD*, _QWORD*))(*v1 + 48LL))(
                                  (void*)v1, v1, result + 51));
  }
  return result;
}

unsigned __int64 GameHr_e99900(_QWORD* a1)
{
  __int64 v2;
  unsigned __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  if ((*(_BYTE*)(*a1 + 88LL) & 1) != 0) {
    v2 = *(_QWORD*)(*a1 + 104LL);
  }
  else {
    v2 = *a1 + 89LL;
  }
  result = GameRoutine_7a86e0(v2);
  if (result != 0) {
    v4 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v4 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
      v6 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v7 = result;
        if (result >= v4) {
          v7 = result % v4;
        }
      }
      else {
        v7 = v6 & result;
      }
      v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v11 = v9[1];
              if (v11 == result) {
                if (v9[2] == result) {
                  goto LABEL_29;
                }
              }
              else if ((v11 & v6) != v7) {
                return result;
              }
              v9 = (_QWORD*)*v9;
              if (v9 == nullptr) {
                return result;
              }
            }
          }
          do {
            v10 = v9[1];
            if (v10 == result) {
              if (v9[2] == result) {
              LABEL_29:
                v12 = v9[3];
                if (v12 != 0) {
                  a1[5] = v12;
                }
                return result;
              }
            }
            else {
              if (v10 >= v4) {
                v10 %= v4;
              }
              if (v10 != v7) {
                return result;
              }
            }
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
