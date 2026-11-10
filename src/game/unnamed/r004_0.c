#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1f9a420[])();

extern __int64 (*GameData_1fdac90[])();

extern __int64 (*GameData_1fdb138[])();

extern __int64 (*GameData_1fdb398[])();

extern __int64 (*GameData_1fdb418[])();

extern __int64 (*GameData_1fdb498[])();

extern __int64 (*GameData_1fdc1d8[36])();

extern __int64 (*GameData_1fdcc28[])();

extern __int64 (*GameData_1fdf460[])();

extern __int64 (*GameData_2003418[])();

extern __int64 GameData_212bf68;

extern __int64 GameData_212c6a0[3];

extern __int64* GameData_212d468[5];

extern __int64 GameData_212dbb8[9];

extern __int64 GameData_212dbe8[3];

extern __int64 GameData_212dc38[7];

extern __int64* GameData_212eba8[8];

extern __int64* GameData_212ec50[3];

extern __int64* GameData_212ed08[13];

extern _DWORD* GameData_212edf8;

extern __int64* GameData_212ee20[6];

extern __int64* GameData_212ee30[4];

extern __int64* GameData_212ee80;

extern _DWORD* GameData_212ee88;

extern __int64* GameData_212ee90;

extern _DWORD* GameData_212ee98;

extern _DWORD* GameData_212eee0;

extern _DWORD* GameData_212fdb8;

extern __int64 GameData_21c9608;

extern __int64 GameData_21c9680;

extern __int64 GameData_21c9710;

extern int GameData_21d92e0;

extern __int64 GameData_21d96b8;

extern __int64 GameData_21ec7c0;

extern __int64 GameData_21f3ca0;

extern __int64 GameData_21f3cb0;

extern __int64 GameData_21f3cb8;

extern __int64 GameData_21f3d10;

extern __int64 GameData_2203490;

extern __int64 GameData_220b6e8;

extern __int64 GameData_220b6f0;

extern __int64 GameData_220f818;

extern int GameData_220f850;

extern __int64 GameData_220f8a0;

extern __int64 GameData_220f8b0;

extern __int64 GameData_220f8b8;

extern int GameData_2213838;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_10289e0(void);

__int64 GameRoutine_103bd50(void);

__int64 GameRoutine_1070320(_QWORD, _QWORD);

__int64 GameRoutine_1070860(_QWORD, _QWORD);

__int64 GameRoutine_1071880(_QWORD, _QWORD);

__int64 GameRoutine_10cb00(_QWORD, _QWORD);

__int64 GameRoutine_10cff0(_QWORD);

__int64 GameRoutine_1553130(_QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a0a040(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);

__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a310(void);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_654050(_QWORD, _QWORD);

__int64 GameRoutine_66b000(_QWORD, _QWORD);

__int64 GameRoutine_66b160(_QWORD);

void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD, long double);

__int64 GameRoutine_8232c0(_QWORD);

__int64 GameRoutine_a2e490(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a2f5a0(_QWORD);

__int64 GameRoutine_caaee0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_ce4ec0(_QWORD, _QWORD, float);

__int64 GameRoutine_ce91a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_ce9560(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);

__int64 GameRoutine_cea6b0(_QWORD);

__int64 GameRoutine_ced840(_QWORD*);

__int64 GameRoutine_cefcf0(void);

__int64 GameRoutine_cf1100(_QWORD);

__int64 GameRoutine_d17440(void);

_QWORD* GameRoutine_d1b660(_QWORD* __return_ptr);

__int64 GameRoutine_d1d300(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_d1d460(void);

__int64 GameRoutine_d1d480(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_d1d920(__int64);

__int64 GameRoutine_d2a680(_QWORD, _QWORD, float);

_QWORD* GameRoutine_d2b700(_QWORD* __return_ptr, _QWORD);

__int64 GameRoutine_d2c6a0(_QWORD);

__int64 GameRoutine_d4d300(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_d55430(_QWORD);

__int64 GameRoutine_d58340(void);

__int64 GameRoutine_d8ce40(_QWORD);

__int64 GameRoutine_d8cf60(__int64 result);

__int64 GameRoutine_da4bc0(_QWORD);

__int64 GameRoutine_da51e0(_QWORD);

__int64 GameRoutine_da5c00(_QWORD);

__int64 GameRoutine_dad3f0(void);

__int64 GameRoutine_dbc400(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_edb740(void);

__int64 GameRoutine_f482e0(void);

__int64 GameRoutine_f8f3e0(_QWORD, _QWORD);

__int64 GameRoutine_fb4d30(_QWORD);

__int64 GameRoutine_fe83e0(void);

__int64 GameHr_ce8cc0(__int64 result, _QWORD* a2, __int64 a3,
                      unsigned __int64 a4, __int64* a5, signed __int64 a6)
{
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v15;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  char* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;

  if (a4 < 2) {
    return result;
  }
  v8 = (char*)result;
  if (a4 == 2) {
    v9 = *(_QWORD*)(a3 + 32);
    if (v9 != 0) {
      result = (*(__int64 (**)(__int64, _QWORD*, char*))(*(_QWORD*)v9 + 48LL))(
          v9, a2 - 2, v8);
      if ((result & 1) != 0) {
        v10 = *(_QWORD*)v8;
        *(_QWORD*)v8 = *(a2 - 2);
        *(a2 - 2) = v10;
        v11 = *((_QWORD*)v8 + 1);
        *((_QWORD*)v8 + 1) = *(a2 - 1);
        *(a2 - 1) = v11;
      }
      return result;
    }
    goto LABEL_61;
  }
  v12 = a4;
  if ((__int64)a4 <= 0) {
    if ((_QWORD*)result == a2) {
      return result;
    }
    v17 = (_QWORD*)(result + 16);
    if ((_QWORD*)(result + 16) == a2) {
      return result;
    }
    v18 = 0;
    v19 = (_QWORD*)result;
    while (1) {
      v20 = *(_QWORD*)(a3 + 32);
      if (v20 == 0) {
        break;
      }
      v21 = v17;
      result = (*(__int64 (**)(__int64, _QWORD*, _QWORD*))(
          *(_QWORD*)v20 + 48LL))(v20, v17, v19);
      if ((result & 1) != 0) {
        v22 = *v21;
        v23 = v19[3];
        *v21 = 0;
        v21[1] = 0;
        v24 = v18;
        v61 = v22;
        v62 = v23;
        while (1) {
          v25 = &v8[v24];
          v26 = *(_QWORD*)&v8[v24];
          v27 = *(_QWORD*)&v8[v24 + 8];
          v28 = *(_QWORD*)&v8[v24 + 24];
          *(_QWORD*)v25 = 0;
          *((_QWORD*)v25 + 1) = 0;
          *((_QWORD*)v25 + 2) = v26;
          *((_QWORD*)v25 + 3) = v27;
          if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
            result = GameRoutine_1a09c50(v28);
          }
          if (v24 == 0) {
            break;
          }
          v29 = *(_QWORD*)(a3 + 32);
          if (v29 == 0) {
            goto LABEL_61;
          }
          v24 -= 16;
          result = (*(__int64 (**)(__int64, __int64*, char*))(
              *(_QWORD*)v29 + 48LL))(v29, &v61, &v8[v24]);
          if ((result & 1) == 0) {
            v30 = &v8[v24 + 16];
            goto LABEL_25;
          }
        }
        v30 = v8;
      LABEL_25:
        v31 = v61;
        v32 = v62;
        v33 = *((_QWORD*)v30 + 1);
        v61 = 0;
        v62 = 0;
        *(_QWORD*)v30 = v31;
        *((_QWORD*)v30 + 1) = v32;
        if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
          result = GameRoutine_1a09c50(v33);
        }
        v34 = v62;
        if (v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
          result = GameRoutine_1a09c50(v34);
        }
      }
      v17 = v21 + 2;
      v18 += 16;
      v19 = v21;
      if (v21 + 2 == a2) {
        return result;
      }
    }
  LABEL_61:
    GameRoutine_60a310();
  }
  v13 = a4 >> 1;
  v15 = a4 - (a4 >> 1);
  if ((__int64)a4 <= a6) {
    GameRoutine_ce91a0(result, result + 16 * v13, a3, a4 >> 1, a5);
    v35 = &a5[2 * v13];
    result = GameRoutine_ce91a0(&v8[16 * v13], a2, a3, v12 - (v12 >> 1), v35);
    v36 = &a5[2 * v12];
    v37 = v35;
    v38 = a5;
    while (v37 != v36) {
      v39 = *(_QWORD*)(a3 + 32);
      if (v39 == 0) {
        goto LABEL_61;
      }
      result = (*(__int64 (**)(__int64, __int64*, __int64*))(
          *(_QWORD*)v39 + 48LL))(v39, v37, v38);
      if ((result & 1) != 0) {
        v40 = *v37;
        v41 = v37[1];
        *v37 = 0;
        v37[1] = 0;
        v42 = *((_QWORD*)v8 + 1);
        *(_QWORD*)v8 = v40;
        *((_QWORD*)v8 + 1) = v41;
        if (v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
          result = GameRoutine_1a09c50(v42);
        }
        v37 += 2;
      }
      else {
        v43 = *v38;
        v44 = v38[1];
        *v38 = 0;
        v38[1] = 0;
        v45 = *((_QWORD*)v8 + 1);
        *(_QWORD*)v8 = v43;
        *((_QWORD*)v8 + 1) = v44;
        if (v45 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
          result = GameRoutine_1a09c50(v45);
        }
        v38 += 2;
      }
      v8 += 16;
      if (v38 == v35) {
        if (v37 != v36) {
          v52 = 0;
          do {
            v53 = &v37[v52];
            v54 = &v8[v52 * 8];
            v55 = v37[v52];
            v56 = v37[v52 + 1];
            *v53 = 0;
            v53[1] = 0;
            v57 = *(_QWORD*)&v8[v52 * 8 + 8];
            *(_QWORD*)v54 = v55;
            *((_QWORD*)v54 + 1) = v56;
            if (v57 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
              result = GameRoutine_1a09c50(v57);
            }
            v52 += 2;
          } while (v53 + 2 != v36);
        }
        goto LABEL_56;
      }
    }
    if (v38 != v35) {
      v46 = 0;
      do {
        v47 = &v38[v46];
        v48 = &v8[v46 * 8];
        v49 = v38[v46];
        v50 = v38[v46 + 1];
        *v47 = 0;
        v47[1] = 0;
        v51 = *(_QWORD*)&v8[v46 * 8 + 8];
        *(_QWORD*)v48 = v49;
        *((_QWORD*)v48 + 1) = v50;
        if (v51 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
          result = GameRoutine_1a09c50(v51);
        }
        v46 += 2;
      } while (v47 + 2 != v35);
    }
  LABEL_56:
    v58 = a5 + 1;
    do {
      v60 = *v58;
      v58 += 2;
      v59 = v60;
      if (v60 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
        result = GameRoutine_1a09c50(v59);
      }
      --v12;
    } while (v12 != 0);
  }
  else {
    GameHr_ce8cc0(result, result + 16 * v13, a3, a4 >> 1, a5, a6);
    GameHr_ce8cc0(&v8[16 * v13], a2, a3, v15, a5, a6);
    return GameRoutine_ce9560(v8, &v8[16 * v13], a2, a3, v13, v15, a5, a6);
  }
  return result;
}

void GameHr_d1aa20(float* a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v8;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64* v16;
  unsigned int v17;
  __int64 v18;
  __int64* v19;
  signed __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  int v38;
  int v39;
  __int64* v40;
  unsigned int v41;
  __int64* v42;
  signed __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  long double v61;
  __int64 v62;
  _DWORD* v63;
  unsigned __int64 v64;
  char* v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned int v73;
  unsigned int v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64* v84;
  __int64* v85;
  __int64* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char* v91;
  char* v92;
  char* v93;
  char v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  char* v104;
  char* v105;
  unsigned __int64 v106;
  __int64* v107;
  __int64* v108;
  int v109;
  float* v110;

  v4 = *(_QWORD*)a1;
  v110 = a1;
  v99 = v4;
  v5 = v4 + 88LL * a2;
  if (*(_QWORD*)(v5 + 168) == 0 || a4 == a3) {
    return;
  }
  v8 = a3;
  v98 = v5;
  v100 = *(_QWORD*)(v5 + 168);
  v9 = nullptr;
  v105 = nullptr;
  v106 = 0;
  v104 = nullptr;
  if ((a2 & 1) != 0) {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    while (1) {
      v14 = *(_DWORD*)(v8 + 16);
      v16 = *(__int64**)(v8 + 8);
      LODWORD(v107) = *(_DWORD*)v8;
      v15 = (int)v107;
      v108 = v16;
      v109 = v14;
      v17 = GameRoutine_d2c6a0((unsigned int)v107);
      v18 = GameRoutine_1070860(*((_QWORD*)v110 + 2), v17);
      if (v18 != 0) {
        v19 = (__int64*)v18;
        if (v12 >= v11) {
          v20 = v12 - v10;
          v21 = 1 - 0x5555555555555555LL * ((__int64)(v12 - v10) >> 3);
          if (v21 > 0xAAAAAAAAAAAAAAALL) {
            goto LABEL_117;
          }
          if (0x5555555555555556LL * ((__int64)(v11 - v10) >> 3) > v21) {
            v21 = 0x5555555555555556LL * ((__int64)(v11 - v10) >> 3);
          }
          if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v11 - v10) >> 3) >=
              0x555555555555555LL) {
            v21 = 0xAAAAAAAAAAAAAAALL;
          }
          if (v21 > 0xAAAAAAAAAAAAAAALL) {
            goto LABEL_116;
          }
          v22 = 3 * v21;
          v23 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 24 * v21, 16, 0);
          v24 = v23 + v20;
          *(_DWORD*)v24 = v15;
          *(_QWORD*)(v24 + 8) = v16;
          *(_DWORD*)(v24 + 16) = v14;
          v13 = v23 + v20 + 24 * (v20 / -24);
          if (v10 != v12) {
            v25 = v10;
            v26 = v23 + v20 + 24 * (v20 / -24);
            do {
              *(_DWORD*)v26 = *(_DWORD*)v25;
              *(_QWORD*)(v26 + 8) = *(_QWORD*)(v25 + 8);
              v27 = *(_DWORD*)(v25 + 16);
              v25 += 24;
              *(_DWORD*)(v26 + 16) = v27;
              v26 += 24;
            } while (v25 != v12);
          }
          v11 = v23 + 8 * v22;
          v12 = v24 + 24;
          if (v10 != 0) {
            v28 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v28 = 56;
            }
            GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v28, v10);
          }
        }
        else {
          *(_DWORD*)v12 = v15;
          *(_QWORD*)(v12 + 8) = v16;
          v13 = v10;
          v9 = v105;
          *(_DWORD*)(v12 + 16) = v14;
          v12 += 24LL;
        }
        if ((unsigned __int64)v9 >= v106) {
          v9 = (char*)GameRoutine_d1d480(&v104, v19, &v108);
        }
        else {
          if ((*(_BYTE*)v19 & 1) != 0) {
            GameRoutine_60a270(v9, v19[2], v19[1]);
          }
          else {
            v29 = *v19;
            v30 = v19[2];
            *((_QWORD*)v9 + 1) = v19[1];
            *((_QWORD*)v9 + 2) = v30;
            *(_QWORD*)v9 = v29;
          }
          v31 = v19[4];
          *((_QWORD*)v9 + 3) = v19[3];
          *((_QWORD*)v9 + 4) = v31;
          v32 = v19[5];
          v33 = v19[6];
          v34 = v19[7];
          v35 = v19[8];
          *((_QWORD*)v9 + 9) = v16;
          *((_QWORD*)v9 + 7) = v34;
          *((_QWORD*)v9 + 8) = v35;
          *((_QWORD*)v9 + 5) = v32;
          *((_QWORD*)v9 + 6) = v33;
          v9 += 80;
        }
        v105 = v9;
        v10 = v13;
      }
      else {
        v13 = v10;
      }
      v8 += 24;
      if (v8 == a4) {
        goto LABEL_57;
      }
    }
  }
  v13 = 0;
  v36 = 0;
  v37 = 0;
  do {
    v38 = *(_DWORD*)(v8 + 16);
    v40 = *(__int64**)(v8 + 8);
    LODWORD(v107) = *(_DWORD*)v8;
    v39 = (int)v107;
    v108 = v40;
    v109 = v38;
    v41 = GameRoutine_d2c6a0((unsigned int)v107);
    v18 = GameRoutine_1070320(*((_QWORD*)v110 + 2), v41);
    if (v18 != 0) {
      v42 = (__int64*)v18;
      if (v37 >= v36) {
        v43 = v37 - v13;
        v44 = 1 - 0x5555555555555555LL * ((__int64)(v37 - v13) >> 3);
        if (v44 > 0xAAAAAAAAAAAAAAALL) {
        LABEL_117:
          GameRoutine_d1d460();
        }
        if (0x5555555555555556LL * ((__int64)(v36 - v13) >> 3) > v44) {
          v44 = 0x5555555555555556LL * ((__int64)(v36 - v13) >> 3);
        }
        if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v36 - v13) >> 3) >=
            0x555555555555555LL) {
          v44 = 0xAAAAAAAAAAAAAAALL;
        }
        if (v44 > 0xAAAAAAAAAAAAAAALL) {
        LABEL_116:
          GameRoutine_60a210(v18);
        }
        v45 = 3 * v44;
        v46 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 24 * v44, 16, 0);
        v47 = v46 + v43;
        *(_DWORD*)v47 = v39;
        *(_QWORD*)(v47 + 8) = v40;
        *(_DWORD*)(v47 + 16) = v38;
        v48 = v46 + v43 + 24 * (v43 / -24);
        if (v13 != v37) {
          v49 = v13;
          v50 = v46 + v43 + 24 * (v43 / -24);
          do {
            *(_DWORD*)v50 = *(_DWORD*)v49;
            *(_QWORD*)(v50 + 8) = *(_QWORD*)(v49 + 8);
            v51 = *(_DWORD*)(v49 + 16);
            v49 += 24;
            *(_DWORD*)(v50 + 16) = v51;
            v50 += 24;
          } while (v49 != v37);
        }
        v36 = v46 + 8 * v45;
        v37 = v47 + 24;
        if (v13 != 0) {
          v52 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v52 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v52, v13);
        }
        v13 = v48;
      }
      else {
        *(_DWORD*)v37 = v39;
        *(_QWORD*)(v37 + 8) = v40;
        v9 = v105;
        *(_DWORD*)(v37 + 16) = v38;
        v37 += 24LL;
      }
      if ((unsigned __int64)v9 >= v106) {
        v9 = (char*)GameRoutine_d1d480(&v104, v42, &v108);
        v105 = v9;
      }
      else {
        if ((*(_BYTE*)v42 & 1) != 0) {
          GameRoutine_60a270(v9, v42[2], v42[1]);
        }
        else {
          v53 = *v42;
          v54 = v42[2];
          *((_QWORD*)v9 + 1) = v42[1];
          *((_QWORD*)v9 + 2) = v54;
          *(_QWORD*)v9 = v53;
        }
        v55 = v42[4];
        *((_QWORD*)v9 + 3) = v42[3];
        *((_QWORD*)v9 + 4) = v55;
        v56 = v42[5];
        v57 = v42[6];
        v58 = v42[7];
        v59 = v42[8];
        *((_QWORD*)v9 + 9) = v40;
        *((_QWORD*)v9 + 7) = v58;
        *((_QWORD*)v9 + 8) = v59;
        *((_QWORD*)v9 + 5) = v56;
        *((_QWORD*)v9 + 6) = v57;
        v9 += 80;
        v105 = v9;
      }
    }
    v8 += 24;
  } while (v8 != a4);
LABEL_57:
  if (v9 != v104) {
    v60 = (_QWORD*)GameRoutine_d2a680(*(_QWORD*)(v100 + 32) + 72LL, &v104,
                                      v110[2]);
    v62 = *(_QWORD*)(v100 + 32);
    if ((*(_BYTE*)(v62 + 124) & 1) != 0) {
      v60 = GameRoutine_d2b700(&v101, *(_QWORD*)(v62 + 96) +
                                          56LL * *(int*)(v62 + 120));
    }
    else {
      v102 = 0;
      v103 = 0;
      v101 = 0;
    }
    if (v105 != v104) {
      v63 = (_DWORD*)(v13 + 16);
      v64 = 0;
      do {
        v67 = (unsigned int)*(v63 - 4);
        v68 = *(_QWORD*)(v99 + 176);
        if (v68 != 0) {
          v69 = *(_QWORD*)(v68 + 40);
          v70 = *(_QWORD*)(v69 + 392);
          v71 = *(_QWORD*)(v69 + 400);
          if (v71 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v71 + 8), 1u,
                                      memory_order_relaxed);
            v72 = *(_QWORD*)(v70 + 11608);
            if (atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v73 = v67;
              (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
              GameRoutine_1a09c50(v71);
              v67 = v73;
            }
          }
          else {
            v72 = *(_QWORD*)(v70 + 11608);
          }
          v74 = GameRoutine_d2c6a0(v67);
          LODWORD(v67) = GameRoutine_1071880(v72, v74);
        }
        HIDWORD(v107) = v67;
        LODWORD(v108) = 1065353216;
        LODWORD(v107) = *(_DWORD*)(v101 + 4 * v64);
        v75 = (int)v107;
        LODWORD(v108) = *v63;
        v60 = (_QWORD*)GameRoutine_d1d300(v98 + 112, &v107);
        v76 = *(_QWORD*)(v100 + 24);
        v77 = *(_QWORD*)(*(_QWORD*)(v76 + 72) + 104LL * v75);
        if (v77 != 0) {
          v78 = *(_QWORD*)(v77 + 16);
          if (v78 != 0) {
            *(float*)&v61 = (*(float (**)(_QWORD, float, float, float))(
                v78 + 16))(*(_QWORD*)(v78 + 24), v110[3] * 60.0,
                           *(float*)(v78 + 4), *(float*)(v78 + 8));
            *(_DWORD*)v78 = LODWORD(v61);
            *(_WORD*)(v77 + 168) = 0;
          }
        }
        v66 = v104;
        v65 = v105;
        ++v64;
        v63 += 6;
        *(_BYTE*)(v76 + 249) = 1;
      } while (0xCCCCCCCCCCCCCCCDLL * ((v65 - v66) >> 4) > v64);
    }
    v79 = *(_QWORD*)(v100 + 32);
    if (*(_BYTE*)(v79 + 124) != 1) {
      goto LABEL_93;
    }
    v80 = (__int64*)(*(_QWORD*)(v79 + 96) + 56LL * *(int*)(v79 + 120));
    v82 = *v80;
    v81 = v80[1];
    if (v81 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v81 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v82 != 0) {
      LODWORD(v83) = *(_DWORD*)(v82 + 108);
      if (v81 == 0) {
        goto LABEL_82;
      }
    }
    else {
      LODWORD(v83) = 0;
      if (v81 == 0) {
      LABEL_82:
        if (v82 != 0) {
          goto LABEL_85;
        }
        if ((*(_BYTE*)(v79 + 124) & 1) == 0) {
          GameRoutine_8123d0(v60, v61);
        }
        v83 = *(_QWORD*)(*(_QWORD*)(v79 + 96) + 56LL * *(int*)(v79 + 120) + 16);
        if ((v83 & 0x100000000LL) != 0) {
        LABEL_85:
          if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v100 + 24) + 72LL) +
                         104LL * (int)v83 + 16) != 0) {
            GameRoutine_d1b660(&v107);
            v85 = v107;
            v84 = v108;
            if (v107 != v108) {
              v86 = v107;
              do {
                v87 = *v86++;
                GameRoutine_ce4ec0(v100, 1, *(float*)(v87 + 8));
              } while (v86 != v84);
            }
            if (v85 != nullptr) {
              v88 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v88 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v88, v85);
            }
          }
        }
      LABEL_93:
        if (v101 != 0) {
          v102 = v101;
          v89 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v89 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v89, v101);
        }
        goto LABEL_97;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v81 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v81 + 16LL))(v81);
      v60 = (_QWORD*)GameRoutine_1a09c50(v81);
    }
    goto LABEL_82;
  }
LABEL_97:
  if (v13 != 0) {
    v90 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v90 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v90, v13);
  }
  v91 = v104;
  if (v104 != nullptr) {
    v92 = v105;
    if (v104 == v105) {
      goto LABEL_112;
    }
    v93 = v105;
    do {
      v94 = *(v93 - 80);
      v93 -= 80;
      if ((v94 & 1) != 0) {
        v95 = *((_QWORD*)v92 - 8);
        if (v95 != 0) {
          if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
            v96 = 128;
          }
          else {
            v96 = 56;
          }
          GameRoutine_1a0a4e0(GameData_2265ee0 + v96, v95);
        }
      }
      v92 = v93;
    } while (v93 != v91);
    v105 = v91;
    v91 = v104;
    if (v104 != nullptr) {
    LABEL_112:
      v97 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v97 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v97, v91);
    }
  }
}

_QWORD* GameHr_d2e1c0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  void (*v11)(__int64);
  __int64 v12;
  __int64 v13;
  __int64* v14;
  int v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  void (*v26)(__int64);
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* result;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  _QWORD v52[4];
  _QWORD* v53;

  v2 = (_QWORD*)GameData_212bf68;
  v3 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8, 16, 0);
  if (GameData_220f818 == 0) {
    *GameData_212eee0 = 1;
  }
  GameData_220f818 = (__int64)v3;
  *v3 = GameData_1fdcc28;
  GameRoutine_d58340();
  v4 = GameRoutine_651b90(*v2, 24, 16, 0);
  v5 = v4;
  v6 = GameData_212ec50[0];
  if (*GameData_212ec50[0] == 0) {
    *GameData_212ec50[0] = v4;
    *GameData_212ee88 = 1;
  }
  v7 = GameData_212ee80;
  v8 = *v2;
  *(_BYTE*)(v5 + 16) = 0;
  *(_QWORD*)v5 = v7 + 2;
  *(_QWORD*)(v5 + 8) = 0;
  v9 = (_QWORD*)GameRoutine_651b90(v8, 24, 16, 0);
  v10 = *(_QWORD*)v5;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  *(_QWORD*)(v5 + 8) = v9;
  v11 = *(void (**)(__int64))(v10 + 16);
  *v6 = v5;
  v11(v5);
  v12 = GameRoutine_651b90(*v2, 280, 16, 0);
  v13 = v12;
  v14 = GameData_212ed08[0];
  if (*GameData_212ed08[0] == 0) {
    *GameData_212ed08[0] = v12;
    *GameData_212edf8 = 1;
  }
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 24) = 0;
  *(_QWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)(v12 + 80) = 0;
  *(_QWORD*)(v12 + 88) = 0;
  *(_QWORD*)(v12 + 96) = 0;
  *(_QWORD*)(v12 + 104) = 0;
  *(_QWORD*)(v12 + 112) = 0;
  *(_QWORD*)(v12 + 120) = 0;
  *(_QWORD*)(v12 + 128) = 0;
  *(_QWORD*)(v12 + 136) = 0;
  *(_QWORD*)(v12 + 144) = 0;
  *(_QWORD*)(v12 + 152) = 0;
  *(_QWORD*)(v12 + 160) = 0;
  *(_QWORD*)(v12 + 168) = 0;
  *(_QWORD*)(v12 + 176) = 0;
  *(_QWORD*)(v12 + 184) = 0;
  *(_QWORD*)(v12 + 192) = 0;
  *(_QWORD*)(v12 + 200) = 0;
  *(_QWORD*)v12 = GameData_1fdb138;
  *(_QWORD*)(v12 + 8) = 0;
  *(_DWORD*)(v12 + 216) = 0;
  *(_DWORD*)(v12 + 232) = 0;
  *(_BYTE*)(v12 + 240) = 0;
  *(_QWORD*)(v12 + 244) = 0;
  *(_QWORD*)(v12 + 252) = 0;
  *(_BYTE*)(v12 + 260) = 0;
  *(_QWORD*)(v12 + 208) = GameData_1f9a420;
  *(_QWORD*)(v12 + 224) = GameData_1f9a420;
  *(_QWORD*)(v12 + 264) = 0;
  *(_WORD*)(v12 + 272) = 0;
  if (GameData_21d96b8 == 0 ||
      ((v15 = *(_DWORD*)(GameData_21d96b8 + 8)) != 3 ? (v16 = 12) : (v16 = 14),
       v15 == 2)) {
    v16 = 13;
  }
  GameRoutine_1553130(v16);
  v17 = *(_QWORD*)v13;
  *v14 = v13;
  *(_BYTE*)(v13 + 272) = 1;
  (*(void (**)(__int64))(v17 + 16))(v13);
  v18 = (_QWORD*)GameRoutine_651b90(*v2, 32, 16, 0);
  if (GameData_220b6e8 == 0) {
    GameData_220f850 = 1;
  }
  v18[2] = 0;
  v18[3] = 0;
  GameData_220b6e8 = (__int64)v18;
  *v18 = GameData_1fdac90;
  v18[1] = 0;
  GameRoutine_d17440();
  v19 = GameRoutine_651b90(*v2, 80, 16, 0);
  v20 = (__int64*)v19;
  v21 = GameData_212ee20[0];
  if (*GameData_212ee20[0] == 0) {
    *GameData_212ee20[0] = v19;
    *GameData_212ee98 = 1;
  }
  *(_WORD*)(v19 + 48) = 0;
  v22 = GameData_212ee90;
  *(_QWORD*)(v19 + 52) = 0;
  *(_QWORD*)(v19 + 64) = 0;
  *(_DWORD*)(v19 + 72) = 0;
  *(_QWORD*)(v19 + 16) = 0;
  *(_QWORD*)(v19 + 24) = 0;
  *(_QWORD*)(v19 + 32) = 0;
  *(_BYTE*)(v19 + 40) = 0;
  *(_QWORD*)v19 = v22 + 2;
  *(_QWORD*)(v19 + 8) = 0;
  GameRoutine_1a0a040(v19 + 48, 1, 0);
  v23 = *v20;
  *v21 = (__int64)v20;
  (*(void (**)(__int64*))(v23 + 16))(v20);
  v24 = GameRoutine_651b90(*v2, 256, 16, 0);
  GameRoutine_cefcf0();
  v25 = GameData_212eba8[0];
  v26 = *(void (**)(__int64))(*(_QWORD*)v24 + 16LL);
  *GameData_212eba8[0] = v24;
  v26(v24);
  v27 = GameRoutine_651b90(*v2, 16, 16, 0);
  if (GameData_220f8a0 == 0) {
    GameData_2213838 = 1;
  }
  *(_DWORD*)(v27 + 8) = 0;
  GameData_220f8a0 = v27;
  *(_QWORD*)v27 = GameData_1fdf460;
  GameRoutine_dad3f0();
  v28 = GameRoutine_651b90(*v2, 1200, 16, 0);
  GameRoutine_d1d920(v28);
  *(_QWORD*)GameData_212dc38[0] = v28;
  (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
  v29 = GameRoutine_651b90(*v2, 88, 16, 0);
  GameRoutine_fe83e0();
  *GameData_212ee30[0] = v29;
  (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
  v30 = (_QWORD*)GameRoutine_651b90(*v2, 8, 16, 0);
  if (GameData_220f8b8 == 0) {
    *GameData_212fdb8 = 1;
  }
  GameData_220f8b8 = (__int64)v30;
  *v30 = GameData_2003418;
  GameRoutine_103bd50();
  v31 = (_QWORD*)GameRoutine_651b90(*v2, 80, 16, 0);
  v32 = a1[8];
  v31[1] = 0;
  v31[2] = 0;
  v31[8] = 0;
  *v31 = GameData_1fdb498;
  a1[7] = v31 + 4;
  a1[8] = v31;
  if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    GameRoutine_1a09c50(v32);
  }
  v33 = a1[7];
  v52[0] = GameData_1fdb398;
  v52[1] = a1;
  v53 = v52;
  GameRoutine_654050(v52, v33);
  if (v53 == v52) {
    v34 = 32;
  }
  else {
    if (v53 == nullptr) {
      goto LABEL_29;
    }
    v34 = 40;
  }
  (*(void (**)(void))(*v53 + v34))();
LABEL_29:
  v35 = a1[7];
  v36 = a1[8];
  v50 = v35;
  v51 = v36;
  if (v36 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                              memory_order_relaxed);
    v52[0] = v35;
    v52[1] = v36;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_66b160(v52);
    GameRoutine_1a09c50(v36);
  }
  else {
    v52[0] = v35;
    v52[1] = 0;
    GameRoutine_66b160(v52);
  }
  GameRoutine_66b000(&GameData_21c9680, &v50);
  if (v51 != 0) {
    GameRoutine_1a09c50(v51);
  }
  v37 = (_QWORD*)GameRoutine_651b90(*v2, 80, 16, 0);
  v38 = a1[10];
  v37[1] = 0;
  v37[2] = 0;
  *v37 = GameData_1fdb498;
  v37[8] = 0;
  a1[9] = v37 + 4;
  a1[10] = v37;
  if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
    GameRoutine_1a09c50(v38);
  }
  v39 = a1[9];
  v52[0] = GameData_1fdb418;
  v52[1] = a1;
  v53 = v52;
  GameRoutine_654050(v52, v39);
  if (v53 == v52) {
    v40 = 32;
  }
  else {
    if (v53 == nullptr) {
      goto LABEL_42;
    }
    v40 = 40;
  }
  (*(void (**)(void))(*v53 + v40))();
LABEL_42:
  v41 = GameData_21c9710;
  v42 = a1[9];
  v43 = a1[10];
  v48 = v42;
  v49 = (_QWORD*)v43;
  if (v43 != 0) {
    v44 = GameData_21c9710;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                              memory_order_relaxed);
    v52[0] = v42;
    v52[1] = v43;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_f8f3e0(v44, v52);
    GameRoutine_1a09c50(v43);
  }
  else {
    v52[0] = v42;
    v52[1] = 0;
    GameRoutine_f8f3e0(GameData_21c9710, v52);
  }
  GameRoutine_66b000(v41 + 16, &v48);
  result = v49;
  if (v49 != nullptr) {
    result = (_QWORD*)GameRoutine_1a09c50(v49);
  }
  if (GameData_21d92e0 != 1) {
    v46 = *(_QWORD*)(*v25 + 8);
    v47 = *(_QWORD*)(*v25 + 16);
    *(_BYTE*)(*v25 + 200) = 1;
    while (v46 != v47) {
      result = *(_QWORD**)v46;
      if (*(_QWORD*)(*(_QWORD*)v46 + 600LL) == 0) {
        result = (_QWORD*)GameRoutine_ced840(result);
      }
      v46 += 16;
    }
  }
  return result;
}

__int64 GameHr_d4a880(__int64 result, _DWORD* a2, _DWORD* a3)
{
  _DWORD* v3;
  int v4;
  _DWORD* v5;
  char v6;

  v3 = *(_DWORD**)result;
  v4 = *(_DWORD*)(*(_QWORD*)result + 96LL);
  if (v4 != -1) {
    if (v4 == 3) {
      *a2 = *a3;
      return result;
    }
    v5 = a3;
    result = ((__int64 (*)(char*, _DWORD*))GameData_1fdc1d8[v4])(&v6, v3);
    a3 = v5;
  }
  v3[24] = -1;
  *v3 = *a3;
  v3[24] = 3;
  return result;
}

bool GameHr_d4d480(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  float v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  float v19;
  float v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v5 = *a1;
      v6 = a1[1];
      v7 = *(a2 - 1);
      v8 = *(float*)(v6 + 236);
      v9 = *(float*)(v7 + 236);
      if (v8 < *(float*)(*a1 + 236)) {
        if (v9 >= v8) {
          *a1 = v6;
          a1[1] = v5;
          v22 = *(a2 - 1);
          if (*(float*)(v22 + 236) < *(float*)(v5 + 236)) {
            a1[1] = v22;
            *(a2 - 1) = v5;
          }
        }
        else {
          *a1 = v7;
          *(a2 - 1) = v5;
        }
        return true;
      }
      if (v9 >= v8) {
        return true;
      }
      a1[1] = v7;
      *(a2 - 1) = v6;
      v21 = a1[1];
    LABEL_49:
      v34 = *a1;
      if (*(float*)(v21 + 236) < *(float*)(*a1 + 236)) {
        *a1 = v21;
        a1[1] = v34;
      }
      return true;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_13;
      }
      GameRoutine_d4d300(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    }
    v17 = *a1;
    v16 = a1[1];
    v18 = a1[2];
    v19 = *(float*)(v16 + 236);
    v20 = *(float*)(v18 + 236);
    if (v19 >= *(float*)(*a1 + 236)) {
      if (v20 < v19) {
        a1[1] = v18;
        a1[2] = v16;
        if (*(float*)(v18 + 236) < *(float*)(v17 + 236)) {
          *a1 = v18;
          a1[1] = v17;
        }
        goto LABEL_46;
      }
    }
    else {
      if (v20 < v19) {
        *a1 = v18;
      LABEL_44:
        a1[2] = v17;
        v16 = v17;
        goto LABEL_46;
      }
      *a1 = v16;
      a1[1] = v17;
      if (*(float*)(v18 + 236) < *(float*)(v17 + 236)) {
        a1[1] = v18;
        goto LABEL_44;
      }
    }
    v16 = v18;
  LABEL_46:
    v32 = *(a2 - 1);
    if (*(float*)(v32 + 236) >= *(float*)(v16 + 236)) {
      return true;
    }
    a1[2] = v32;
    *(a2 - 1) = v16;
    v33 = a1[1];
    v21 = a1[2];
    if (*(float*)(v21 + 236) >= *(float*)(v33 + 236)) {
      return true;
    }
    a1[1] = v21;
    a1[2] = v33;
    goto LABEL_49;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v3 = *(a2 - 1);
    v4 = *a1;
    if (*(float*)(v3 + 236) < *(float*)(*a1 + 236)) {
      *a1 = v3;
      *(a2 - 1) = v4;
    }
    return true;
  }
LABEL_13:
  v10 = *a1;
  v11 = a1[1];
  v13 = a1 + 2;
  v12 = a1[2];
  v14 = *(float*)(v11 + 236);
  v15 = *(float*)(v12 + 236);
  if (v14 >= *(float*)(*a1 + 236)) {
    if (v15 < v14) {
      a1[1] = v12;
      a1[2] = v11;
      if (*(float*)(v12 + 236) < *(float*)(v10 + 236)) {
        *a1 = v12;
        a1[1] = v10;
      }
    }
  }
  else {
    if (v15 >= v14) {
      *a1 = v11;
      a1[1] = v10;
      if (*(float*)(v12 + 236) >= *(float*)(v10 + 236)) {
        goto LABEL_32;
      }
      a1[1] = v12;
    }
    else {
      *a1 = v12;
    }
    a1[2] = v10;
  }
LABEL_32:
  v23 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v24 = 24;
  v25 = 0;
  while (1) {
    v27 = *v23;
    v28 = *v13;
    if (*(float*)(*v23 + 236) < *(float*)(v28 + 236)) {
      v29 = v24;
      do {
        v30 = v29 - 8;
        *(__int64*)((char*)a1 + v29) = v28;
        if (v29 == 8) {
          v26 = a1;
          goto LABEL_35;
        }
        v31 = (char*)a1 + v29;
        v29 -= 8;
        v28 = *((_QWORD*)v31 - 2);
      } while (*(float*)(v27 + 236) < *(float*)(v28 + 236));
      v26 = (__int64*)((char*)a1 + v30);
    LABEL_35:
      ++v25;
      *v26 = v27;
      if (v25 == 8) {
        return v23 + 1 == a2;
      }
    }
    v13 = v23++;
    v24 += 8;
    if (v23 == a2) {
      return true;
    }
  }
}

__int64 GameHr_d56560()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;

  v0 = *(_QWORD*)(GameData_220b6f0 + 8);
  v1 = *(_QWORD*)(GameData_220b6f0 + 16);
  if (v0 == v1) {
    return GameData_220f8b0 != 0 &&
           (v4 = *(_QWORD*)(GameData_220f8b0 + 8)) != 0 &&
           (v5 = *(_QWORD*)(v4 + 8)) != 0 && *(_QWORD*)(v5 + 32) == 0;
  }
  else {
    while (1) {
      if (GameData_21d92e0 != 1) {
        v2 = *(_QWORD*)(*(_QWORD*)v0 + 8LL);
        if ((*(_BYTE*)(v2 + 152) & 1) != 0 && (*(_BYTE*)(v2 + 145) & 1) == 0) {
          return 1;
        }
      }
      v0 += 16;
      if (v0 == v1) {
        return GameData_220f8b0 != 0 &&
               (v4 = *(_QWORD*)(GameData_220f8b0 + 8)) != 0 &&
               (v5 = *(_QWORD*)(v4 + 8)) != 0 && *(_QWORD*)(v5 + 32) == 0;
      }
    }
  }
}

__int64 GameHr_d56600()
{
  __int64 v0;
  __int64* v1;
  __int64* i;
  __int64 v3;
  __int64 result;

  v0 = GameData_220f8b0;
  v1 = *(__int64**)(GameData_220f8b0 + 56);
  for (i = *(__int64**)(GameData_220f8b0 + 64); v1 != i;
       result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3)) {
    v3 = *v1++;
  }
  ++*(_QWORD*)(v0 + 80);
  return result;
}

__int64 GameHr_d56710()
{
  __int64 result;

  if (*(_DWORD*)(GameData_21d96b8 + 8) == 1) {
    return GameRoutine_cf1100(GameData_220b6f0);
  }
  return result;
}

__int64 GameHr_d567f0()
{
  __int64 v0;
  __int64 v1;
  __int64 result;

  v0 = GameData_21d96b8;
  v1 = GameData_21f3cb0;
  if ((*(_BYTE*)(GameData_21f3cb0 + 920) & 1) == 0) {
    result = GameRoutine_8232c0(GameData_21f3cb0 + 16);
    *(_BYTE*)(v1 + 920) = 1;
  }
  *(_BYTE*)(v0 + 52) = 1;
  return result;
}

__int64 GameHr_d70880()
{
  __int64 v0;
  int v1;

  v0 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL);
  v1 = *(_DWORD*)(v0 + 232);
  if (v1 <= 3) {
    v1 = 3;
  }
  *(_DWORD*)(v0 + 232) = v1;
  return GameRoutine_f482e0();
}

__int64 GameHr_d86750()
{
  __int64 result;

  if ((*(_BYTE*)(GameData_21c9608 + 945) & 1) == 0) {
    *(_BYTE*)(GameData_21c9608 + 945) = 1;
    return GameRoutine_10289e0();
  }
  return result;
}

__int64 GameHr_d884c0()
{
  __int64 result;
  __int64 v1;
  int v2;
  __int64 v3;

  result = GameRoutine_fb4d30(GameData_21f3ca0);
  v1 = *(_QWORD*)(GameData_21ec7c0 + 120);
  if (*(_DWORD*)(v1 + 8) != 1) {
    *(_DWORD*)(v1 + 8) = 1;
    result = GameRoutine_d55430(GameData_21f3d10);
    if ((result & 1) != 0) {
      v2 = 2;
    }
    else {
      v2 = 1;
    }
    v3 = *GameData_212eba8[0];
    *(_DWORD*)(v3 + 192) = v2;
    *(_DWORD*)(v3 + 196) = 1;
  }
  *(_BYTE*)(*(_QWORD*)GameData_212dc38[0] + 1056LL) = 1;
  *(_DWORD*)(GameData_220f8a0 + 8) = 1;
  return result;
}

__int64 GameHr_da3130()
{
  __int64 v0;
  __int64 result;

  v0 = GameRoutine_da4bc0(0);
  GameRoutine_da51e0(v0);
  result = GameRoutine_d8ce40(GameData_21f3cb8);
  if (*(_DWORD*)(GameData_21f3d10 + 140) != 1) {
    *(_DWORD*)(GameData_21f3d10 + 140) = 1;
  }
  return result;
}

__int64 GameHr_da48a0()
{
  __int64 result;
  __int64 v1;
  __int64* v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  _QWORD v7[3];

  result = GameRoutine_da5c00(v7);
  v1 = v7[0];
  v2 = (__int64*)v7[1];
  if (v7[0] != v7[1]) {
    v3 = (__int64*)v7[0];
    v4 = (_QWORD*)GameData_212c6a0[0];
    do {
      v5 = *v3++;
      result = GameRoutine_dbc400(*v4, *(_QWORD*)(v5 + 264),
                                  *(_DWORD*)(v5 + 752) == 0);
    } while (v3 != v2);
  }
  if (v1 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v6 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v6, v1);
  }
  return result;
}

__int64 GameHr_da4960()
{
  __int64 result;
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  unsigned __int8 v8;
  __int64 v9;
  _QWORD v10[3];

  result = GameRoutine_da5c00(v10);
  v1 = v10[0];
  v2 = (__int64*)v10[1];
  if (v10[0] != v10[1]) {
    v3 = (__int64*)v10[0];
    do {
      GameRoutine_caaee0(*v3, 0, 0);
      v4 = *(_QWORD*)(*v3 + 24);
      *(_BYTE*)(v4 + 372) = 1;
      *(_DWORD*)(v4 + 368) = 1;
      result = GameRoutine_cea6b0(v4);
      *(_QWORD*)(*v3 + 1068) = 0x3F80000000000000LL;
      v6 = *v3++;
      v5 = v6;
      v7 = *(float*)(v6 + 1056);
      v8 = *(_BYTE*)(v6 + 1060);
      *(_BYTE*)(v6 + 1060) = 1;
      if ((v8 & (v7 > 1.0)) == 0) {
        v7 = 1.0;
      }
      *(float*)(v5 + 1056) = v7;
    } while (v3 != v2);
  }
  if (v1 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v9 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v9, v1);
  }
  return result;
}

__int64 GameHr_da6b30()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  _BYTE v3[200];

  if ((*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 896LL) & 1) == 0) {
    v0 = *(_QWORD*)GameData_212dbe8[0];
    if (*(_DWORD*)(*(_QWORD*)GameData_212dbe8[0] + 8LL) == 3) {
      v1 = *GameData_212d468[0];
      if (*(_DWORD*)(*(_QWORD*)GameData_212dbb8[0] + 140LL) == 1) {
        result = GameRoutine_a2f5a0(*GameData_212d468[0]);
      }
      else {
        GameRoutine_10cb00(v3, "FadeTime_BGM_Hub_Out");
        GameRoutine_a2e490(v1, v3, 0);
        result = GameRoutine_10cff0(v3);
        *(_BYTE*)(v1 + 3016) = 0;
      }
      *(_DWORD*)(v0 + 8) = 4;
    }
  }
  return result;
}

__int64 GameHr_da6f70()
{
  __int64 result;

  result = GameRoutine_d8cf60(GameData_21f3cb8);
  if (*(_DWORD*)(GameData_21f3d10 + 140) != 0) {
    *(_DWORD*)(GameData_21f3d10 + 140) = 0;
  }
  return result;
}

__int64 GameHr_da77a0()
{
  __int64 v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 result;

  v0 = GameData_21c9608;
  v1 = *(_QWORD*)(GameData_21c9608 + 904);
  v2 = (_QWORD*)(GameData_21c9608 + 904);
  *(_QWORD*)(GameData_21c9608 + 896) = 0;
  if (v1 != 0) {
    *(_QWORD*)(v0 + 912) = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v3 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v3, v1);
  }
  v2[1] = 0;
  v2[2] = 0;
  *v2 = 0;
  return result;
}

bool GameHr_e0abc0(unsigned __int64* a1, unsigned __int64* a2)
{
  __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64* v23;
  __int64 v24;
  int v25;
  unsigned __int64* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v11 = *a1;
      v12 = a1[1];
      v13 = *(a2 - 1);
      if (v12 < *a1) {
        if (v13 >= v12) {
          *a1 = v12;
          a1[1] = v11;
          v22 = *(a2 - 1);
          if (v22 >= v11) {
            return true;
          }
          a1[1] = v22;
        }
        else {
          *a1 = v13;
        }
        *(a2 - 1) = v11;
        return true;
      }
      if (v13 >= v12) {
        return true;
      }
      a1[1] = v13;
      *(a2 - 1) = v12;
      v21 = a1[1];
    LABEL_73:
      v37 = *a1;
      if (v21 >= *a1) {
        return true;
      }
      *a1 = v21;
      a1[1] = v37;
      return true;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_16;
      }
      v5 = *a1;
      v4 = a1[1];
      v6 = a1[2];
      if (v4 >= *a1) {
        if (v6 < v4) {
          a1[1] = v6;
          a1[2] = v4;
          if (v6 >= v5) {
            v7 = v5;
            v8 = v6;
          }
          else {
            *a1 = v6;
            a1[1] = v5;
            v7 = v6;
            v8 = v5;
          }
          goto LABEL_63;
        }
        v7 = *a1;
        v8 = a1[1];
      }
      else {
        if (v6 < v4) {
          *a1 = v6;
          a1[2] = v5;
          v7 = v6;
          v8 = v4;
        LABEL_51:
          v4 = v5;
        LABEL_63:
          v33 = a1[3];
          if (v33 >= v4) {
            v4 = a1[3];
          }
          else {
            a1[2] = v33;
            a1[3] = v4;
            if (v33 < v8) {
              a1[1] = v33;
              a1[2] = v8;
              if (v33 < v7) {
                *a1 = v33;
                a1[1] = v7;
              }
            }
          }
          v34 = *(a2 - 1);
          if (v34 >= v4) {
            return true;
          }
          a1[3] = v34;
          *(a2 - 1) = v4;
          v35 = a1[2];
          v21 = a1[3];
          if (v21 >= v35) {
            return true;
          }
          a1[2] = v21;
          a1[3] = v35;
        LABEL_71:
          v36 = a1[1];
          if (v21 >= v36) {
            return true;
          }
          a1[1] = v21;
          a1[2] = v36;
          goto LABEL_73;
        }
        *a1 = v4;
        a1[1] = v5;
        if (v6 < v5) {
          a1[1] = v6;
          a1[2] = v5;
          v7 = v4;
          v8 = v6;
          goto LABEL_51;
        }
        v7 = v4;
        v8 = v5;
      }
      v4 = v6;
      goto LABEL_63;
    }
    v19 = *a1;
    v18 = a1[1];
    v20 = a1[2];
    if (v18 >= *a1) {
      if (v20 < v18) {
        a1[1] = v20;
        a1[2] = v18;
        if (v20 < v19) {
          *a1 = v20;
          a1[1] = v19;
        }
        goto LABEL_57;
      }
    }
    else {
      if (v20 < v18) {
        *a1 = v20;
      LABEL_55:
        a1[2] = v19;
        v18 = v19;
      LABEL_57:
        v32 = *(a2 - 1);
        if (v32 >= v18) {
          return true;
        }
        a1[2] = v32;
        *(a2 - 1) = v18;
        v21 = a1[2];
        goto LABEL_71;
      }
      *a1 = v18;
      a1[1] = v19;
      if (v20 < v19) {
        a1[1] = v20;
        goto LABEL_55;
      }
    }
    v18 = v20;
    goto LABEL_57;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 != 2) {
  LABEL_16:
    v15 = a1 + 2;
    v14 = a1[2];
    v16 = *a1;
    v17 = a1[1];
    if (v17 >= *a1) {
      if (v14 < v17) {
        a1[1] = v14;
        a1[2] = v17;
        if (v14 < v16) {
          *a1 = v14;
          a1[1] = v16;
        }
      }
      goto LABEL_39;
    }
    if (v14 >= v17) {
      *a1 = v17;
      a1[1] = v16;
      if (v14 >= v16) {
      LABEL_39:
        v23 = a1 + 3;
        if (a1 + 3 == a2) {
          return true;
        }
        v24 = 24;
        v25 = 0;
        while (1) {
          v27 = *v23;
          v28 = *v15;
          if (*v23 < v28) {
            v29 = v24;
            do {
              v30 = v29 - 8;
              *(unsigned __int64*)((char*)a1 + v29) = v28;
              if (v29 == 8) {
                v26 = a1;
                goto LABEL_42;
              }
              v31 = (char*)a1 + v29;
              v29 -= 8;
              v28 = *((_QWORD*)v31 - 2);
            } while (v27 < v28);
            v26 = (unsigned __int64*)((char*)a1 + v30);
          LABEL_42:
            ++v25;
            *v26 = v27;
            if (v25 == 8) {
              return v23 + 1 == a2;
            }
          }
          v15 = v23++;
          v24 += 8;
          if (v23 == a2) {
            return true;
          }
        }
      }
      a1[1] = v14;
    }
    else {
      *a1 = v14;
    }
    a1[2] = v16;
    goto LABEL_39;
  }
  v9 = *(a2 - 1);
  v10 = *a1;
  if (v9 >= *a1) {
    return true;
  }
  *a1 = v9;
  *(a2 - 1) = v10;
  return true;
}

__int64 GameHr_e6fcd0()
{
  __int64 result;

  result = *(_QWORD*)(GameData_2203490 + 640);
  if (result != 0) {
    return GameRoutine_edb740();
  }
  return result;
}

#pragma GCC visibility pop
