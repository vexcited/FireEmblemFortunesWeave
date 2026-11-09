#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int128 GameData_1a82c50;

extern char GameData_1ac00b9[11];

extern _UNKNOWN* GameData_1f50948;

extern __int64 (*GameData_1fc4e60[])();

extern __int64 (*GameData_1fc50d8[])();

extern __int64 (*GameData_1fcef08[])();

extern __int64 (*GameData_1fcef58[])();

extern __int64 GameData_212bf68;

extern __int64* GameData_212c010[3];

extern _UNKNOWN* GameData_212c028;

extern __int64* GameData_212de58[3];

extern __int64 (*GameData_212e358[2])();

extern _UNKNOWN** GameData_212e738;

extern __int64* GameData_212e768;

extern _UNKNOWN** GameData_212e778[2];

extern _UNKNOWN** GameData_212e780;

extern _UNKNOWN* GameData_212e938;

extern char* GameData_2132380;

extern __int64 GameData_21a60d8;

extern __int64 GameData_21c6978;

extern _UNKNOWN GameData_21fdd90;

extern _UNKNOWN GameData_21fde98;

extern __int64 GameData_21fdfb8;

extern __int64 GameData_2265ae0;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_18dd060(_QWORD);

__int64 GameRoutine_18dd220(_QWORD);

__int64 GameRoutine_193ab40(_QWORD);

__int64 GameRoutine_193ac30(_QWORD, _QWORD);

__int64 GameRoutine_1943280(_QWORD);

__int64 GameRoutine_1a09bb0(_QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09f60(_QWORD);

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

_QWORD* GameRoutine_1a0a790(_QWORD* __return_ptr, _QWORD);

__int64 GameRoutine_1a0ab60(void);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_5fb840(void);

__int64 GameRoutine_5fb900(_QWORD);

__int64 GameRoutine_5fba80(_QWORD, _QWORD);

__int64 GameRoutine_604050(_QWORD);

__int64 GameRoutine_6040f0(_QWORD, _QWORD);

__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);

void __attribute__((noreturn)) GameRoutine_60a250(_QWORD);

__int64 GameRoutine_649700(_QWORD, _QWORD);

__int64 GameRoutine_649a00(_QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_7a8220(_QWORD, _QWORD);

__int64 GameRoutine_7d6200(_QWORD, _QWORD);

__int64 GameRoutine_a5aca0(_QWORD);

__int64 GameRoutine_a5d040(_QWORD);

__int64 GameRoutine_a82d00(__int64, _QWORD*);

void __attribute__((noreturn)) GameRoutine_a85d00(void);

void __attribute__((noreturn)) GameRoutine_a864d0(void);

__int64 GameRoutine_a93ea0(float*, unsigned __int8*, __int64, __int64**);

__int64 GameRoutine_a98560(__int64 result);

__int64 GameRoutine_a991b0(_QWORD, _QWORD);

__int64 GameRoutine_a993a0(_QWORD, _QWORD, _QWORD);

_QWORD* GameRoutine_a99c80(_QWORD* __return_ptr, _QWORD, _QWORD);

__int64 GameRoutine_ad5500(_QWORD*, __int64, __int64, unsigned int);

__int64 GameRoutine_adc400(__int64, __int64, __int64, __int64, __int64, _QWORD*,
                           __int64*, __int64);

__int64 GameRoutine_b31d20(__int64*);

void __attribute__((noreturn)) GameRoutine_b32f50(void);

void __attribute__((noreturn)) GameRoutine_b32fb0(_QWORD);

__int64 GameRoutine_b45400(__int64 result, __int64, __int64);

__int64 GameRoutine_b45570(__int64, __int64, __int64, int*, int*);

int* GameRoutine_b46570(int* result, int*, int*, int*);

__int64 GameRoutine_b47890(__int64 result, __int64, __int64, __int64);

__int64 GameRoutine_b48e70(_QWORD, _QWORD);

__int64 GameRoutine_b48f90(_QWORD, _QWORD);

__int64 GameRoutine_b4a3f0(_QWORD, _QWORD);

__int64 GameRoutine_b4a510(_QWORD, _QWORD);

__int64 GameRoutine_b4a7c0(__int64, _QWORD*, _QWORD*, _QWORD*, unsigned int*);

__int64 GameRoutine_b4bb60(__int64, unsigned __int8*, __int64*);

__int64 GameRoutine_b509c0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_b53170(_QWORD*, __int64, unsigned __int64, __int64*);

__int64 GameRoutine_b53d40(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_b5a4b0(__int64, __int64);

__int64 GameRoutine_b5a9c0(__int64, _QWORD*, _QWORD*, __int64*, int*);

__int64 GameRoutine_b60f30(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_b6c7b0(__int64, __int64, _QWORD*, __int64);

__int64 GameRoutine_b869a0(_QWORD);

__int64 GameRoutine_b873c0(_QWORD, _QWORD);

__int64 GameRoutine_bb8650(_QWORD);

__int64 GameRoutine_bc56a0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_bc57c0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_bf88a0(_QWORD);

__int64 GameRoutine_bf9b40(_QWORD);

__int64 GameRoutine_c4a820(_QWORD);

__int64 GameRoutine_c65820(_QWORD);

__int64 GameHr_a83fa0(_QWORD* a1, __int64 a2, __int64 a3)
{
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int* v32;
  int* v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int* v39;
  int* v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int* v46;
  int* v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int* v53;
  int* v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int* v60;
  int* v61;
  __int64 v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  int* v67;
  int* v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int* v74;
  int* v75;
  __int64 v76;
  int v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int* v81;
  int* v82;
  __int64 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  int* v88;
  int* v89;
  __int64 v90;
  int v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  int* v95;
  int* v96;
  __int64 v97;
  int v98;
  _QWORD v100[2];
  int v101;

  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[4] - 8LL) + 40LL) + 16LL) +
            48LL) = 0;
  v6 = (_QWORD*)GameData_212bf68;
  v7 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 80, 16, 0);
  v9 = (_QWORD*)a1[4];
  v8 = a1[5];
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v7[8] = 0;
  v7[9] = 0;
  if ((unsigned __int64)v9 >= v8) {
    v11 = a1[3];
    v12 = (char*)v9 - v11;
    v13 = ((__int64)v9 - v11) >> 3;
    v14 = v13 + 1;
    if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
      GameRoutine_a85d00();
    }
    v15 = v8 - v11;
    if (v15 >> 2 > v14) {
      v14 = v15 >> 2;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
      v16 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v16 = v14;
    }
    if (v16 != 0) {
      if (v16 >> 61 != 0) {
        GameRoutine_60a210(v7);
      }
      v17 = v7;
      v18 = GameRoutine_651b90(*v6, 8 * v16, 16, 0);
      v7 = v17;
    }
    else {
      v18 = 0;
    }
    v19 = v18 + 8 * v16;
    v20 = (__int64)&v12[v18 + -8 * v13];
    *(_QWORD*)&v12[v18] = v7;
    v10 = (__int64)&v12[v18 + 8];
    GameRoutine_1a0b950(v20, v11, v12);
    a1[3] = v20;
    a1[4] = v10;
    a1[5] = v19;
    if (v11 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v21 = 56;
      }
      GameRoutine_1a0a4e0(*v6 + v21, v11);
    }
  }
  else {
    *v9 = v7;
    v10 = (__int64)(v9 + 1);
  }
  a1[4] = v10;
  GameRoutine_60a060(*(_QWORD*)(v10 - 8), a2, a3);
  GameRoutine_a82d00((__int64)a1, *(_QWORD**)(v10 - 8));
  v22 = GameData_212de58[0];
  GameRoutine_bc57c0(*GameData_212de58[0], a2, a3);
  v23 = *(_QWORD*)(*(_QWORD*)(v10 - 8) + 40LL);
  v24 = *(_QWORD*)(v23 + 24);
  if (v24 != 0) {
    v25 = *(_QWORD*)(v23 + 16);
    v26 = *(_QWORD*)(v23 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                              memory_order_relaxed);
    v27 = GameRoutine_1a0a0c0(v26);
    GameRoutine_1a09c50(v24);
    if (v27 != 0) {
      if (v25 != 0) {
        v28 = *v22;
        v100[0] = v25;
        v100[1] = v27;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_bc56a0(v28, 0, v100, 1);
        GameRoutine_1a09c50(v27);
        v29 = *v22;
        v101 = 0;
        v30 = **(_QWORD**)(*(_QWORD*)(v29 + 296) - 24LL);
        v32 = *(int**)(v30 + 24);
        v33 = *(int**)(v30 + 32);
        v31 = v30 + 24;
        if (v32 == v33) {
          goto LABEL_26;
        }
        v34 = 0;
        do {
          v35 = *v32++;
          if (v35 == 0) {
            ++v34;
          }
        } while (v32 != v33);
        if (v34 == 0) {
        LABEL_26:
          GameRoutine_7d6200(v31, &v101);
          v29 = *v22;
        }
        v100[0] = v25;
        v100[1] = v27;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_bc56a0(v29, 1, v100, 1);
        GameRoutine_1a09c50(v27);
        v36 = *v22;
        v101 = 0;
        v37 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v36 + 296) - 24LL) + 8LL);
        v39 = *(int**)(v37 + 24);
        v40 = *(int**)(v37 + 32);
        v38 = v37 + 24;
        if (v39 == v40) {
          goto LABEL_33;
        }
        v41 = 0;
        do {
          v42 = *v39++;
          if (v42 == 0) {
            ++v41;
          }
        } while (v39 != v40);
        if (v41 == 0) {
        LABEL_33:
          GameRoutine_7d6200(v38, &v101);
          v36 = *v22;
        }
        v100[0] = v25;
        v100[1] = v27;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_bc56a0(v36, 2, v100, 1);
        GameRoutine_1a09c50(v27);
        v43 = *v22;
        v101 = 0;
        v44 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v43 + 296) - 24LL) + 16LL);
        v46 = *(int**)(v44 + 24);
        v47 = *(int**)(v44 + 32);
        v45 = v44 + 24;
        if (v46 == v47) {
          goto LABEL_40;
        }
        v48 = 0;
        do {
          v49 = *v46++;
          if (v49 == 0) {
            ++v48;
          }
        } while (v46 != v47);
        if (v48 == 0) {
        LABEL_40:
          GameRoutine_7d6200(v45, &v101);
          v43 = *v22;
        }
        v100[0] = v25;
        v100[1] = v27;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_bc56a0(v43, 3, v100, 1);
        GameRoutine_1a09c50(v27);
        v50 = *v22;
        v101 = 0;
        v51 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v50 + 296) - 24LL) + 24LL);
        v53 = *(int**)(v51 + 24);
        v54 = *(int**)(v51 + 32);
        v52 = v51 + 24;
        if (v53 == v54) {
          goto LABEL_47;
        }
        v55 = 0;
        do {
          v56 = *v53++;
          if (v56 == 0) {
            ++v55;
          }
        } while (v53 != v54);
        if (v55 == 0) {
        LABEL_47:
          GameRoutine_7d6200(v52, &v101);
          v50 = *v22;
        }
        v100[0] = v25;
        v100[1] = v27;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_bc56a0(v50, 4, v100, 1);
        GameRoutine_1a09c50(v27);
        v57 = *v22;
        v101 = 0;
        v58 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v57 + 296) - 24LL) + 32LL);
        v60 = *(int**)(v58 + 24);
        v61 = *(int**)(v58 + 32);
        v59 = v58 + 24;
        if (v60 == v61) {
          goto LABEL_54;
        }
        v62 = 0;
        do {
          v63 = *v60++;
          if (v63 == 0) {
            ++v62;
          }
        } while (v60 != v61);
        if (v62 == 0) {
        LABEL_54:
          GameRoutine_7d6200(v59, &v101);
          v57 = *v22;
        }
        v100[0] = v25;
        v100[1] = v27;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_bc56a0(v57, 5, v100, 1);
        GameRoutine_1a09c50(v27);
        v64 = *v22;
        v101 = 0;
        v65 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v64 + 296) - 24LL) + 40LL);
        v67 = *(int**)(v65 + 24);
        v68 = *(int**)(v65 + 32);
        v66 = v65 + 24;
        if (v67 == v68) {
          goto LABEL_61;
        }
        v69 = 0;
        do {
          v70 = *v67++;
          if (v70 == 0) {
            ++v69;
          }
        } while (v67 != v68);
        if (v69 == 0) {
        LABEL_61:
          GameRoutine_7d6200(v66, &v101);
          v64 = *v22;
        }
        v100[0] = v25;
        v100[1] = v27;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_bc56a0(v64, 6, v100, 1);
        GameRoutine_1a09c50(v27);
        v71 = *v22;
        v101 = 0;
        v72 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v71 + 296) - 24LL) + 48LL);
        v74 = *(int**)(v72 + 24);
        v75 = *(int**)(v72 + 32);
        v73 = v72 + 24;
        if (v74 == v75) {
          goto LABEL_68;
        }
        v76 = 0;
        do {
          v77 = *v74++;
          if (v77 == 0) {
            ++v76;
          }
        } while (v74 != v75);
        if (v76 == 0) {
        LABEL_68:
          GameRoutine_7d6200(v73, &v101);
          v71 = *v22;
        }
        v100[0] = v25;
        v100[1] = v27;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_bc56a0(v71, 7, v100, 1);
        GameRoutine_1a09c50(v27);
        v78 = *v22;
        v101 = 0;
        v79 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v78 + 296) - 24LL) + 56LL);
        v81 = *(int**)(v79 + 24);
        v82 = *(int**)(v79 + 32);
        v80 = v79 + 24;
        if (v81 == v82) {
          goto LABEL_75;
        }
        v83 = 0;
        do {
          v84 = *v81++;
          if (v84 == 0) {
            ++v83;
          }
        } while (v81 != v82);
        if (v83 == 0) {
        LABEL_75:
          GameRoutine_7d6200(v80, &v101);
          v78 = *v22;
        }
        v100[0] = v25;
        v100[1] = v27;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_bc56a0(v78, 8, v100, 1);
        GameRoutine_1a09c50(v27);
        v85 = *v22;
        v101 = 0;
        v86 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v85 + 296) - 24LL) + 64LL);
        v88 = *(int**)(v86 + 24);
        v89 = *(int**)(v86 + 32);
        v87 = v86 + 24;
        if (v88 == v89) {
          goto LABEL_82;
        }
        v90 = 0;
        do {
          v91 = *v88++;
          if (v91 == 0) {
            ++v90;
          }
        } while (v88 != v89);
        if (v90 == 0) {
        LABEL_82:
          GameRoutine_7d6200(v87, &v101);
          v85 = *v22;
        }
        v100[0] = v25;
        v100[1] = v27;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_bc56a0(v85, 9, v100, 1);
        GameRoutine_1a09c50(v27);
        v92 = *v22;
        v101 = 0;
        v93 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v92 + 296) - 24LL) + 72LL);
        v95 = *(int**)(v93 + 24);
        v96 = *(int**)(v93 + 32);
        v94 = v93 + 24;
        if (v95 == v96) {
          goto LABEL_89;
        }
        v97 = 0;
        do {
          v98 = *v95++;
          if (v98 == 0) {
            ++v97;
          }
        } while (v95 != v96);
        if (v97 == 0) {
        LABEL_89:
          GameRoutine_7d6200(v94, &v101);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        GameRoutine_1a09c50(v27);
      }
    }
  }
  GameRoutine_18dd220(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v10 - 8) + 40LL) + 368LL));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_21fde98) != 0) {
    GameRoutine_a5aca0(&GameData_21fdd90);
    GameRoutine_2b0(GameData_212e358[0], &GameData_21fdd90, &GameData_1f50948);
    GameRoutine_1a09fe0(&GameData_21fde98);
  }
  return GameRoutine_a5d040(&GameData_21fdd90);
}

__int64 GameHr_a988a0(__int64 result, __int64 a2, __int64* a3)
{
  int v3;
  _QWORD* v4;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD v25[9];
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v3 = *(_DWORD*)(result + 208);
  v31 = a2;
  if (v3 == 0 && *(_QWORD*)(result + 32) != 0) {
    v4 = (_QWORD*)result;
    result = GameRoutine_1a0a0c0(*(_QWORD*)(result + 32));
    if (result != 0) {
      v6 = v4[3];
      if (v6 != 0) {
        v7 = a3;
        if ((unsigned __int64)a3[3] >= 2) {
          v8 = result;
          v9 = v7;
          GameRoutine_a993a0(v4 + 21, &v31, &v31);
          v10 = v9[3];
          v11 = *(_QWORD*)(v6 + 296);
          v12 = (unsigned int)v10;
          v13 = 80;
          if (*(_QWORD*)(v31 + 32) == 0) {
            v13 = 72;
          }
          v14 = *(_QWORD*)(v31 + v13);
          v27 = 2;
          v28 = v10;
          v26 = v14;
          v15 = (v9[1] - *v9) >> 2;
          v29 = *v9;
          v30 = v15;
          GameRoutine_a99c80(v25, v11, &v26);
          GameRoutine_193ac30(v4 + 5, v25);
          GameRoutine_193ab40(v25);
          v19 = v4[17];
          v20 = v4[18];
          v21 = 0xAAAAAAAAAAAAAAABLL * (v20 - v19);
          if (v12 <= v21) {
            v22 = (__int64)v4;
            if (v12 < v21) {
              v20 = v19 + 3 * v12;
              v4[18] = v20;
            }
          }
          else {
            GameRoutine_a991b0(v4 + 17, v12 - v21);
            v19 = v4[17];
            v20 = v4[18];
            v22 = (__int64)v4;
          }
          if (v19 != v20) {
            GameRoutine_1a0ba50(v19, 0, 3 * ((v20 - v19 - 3) / 3uLL) + 3, v16,
                                v17, v18);
            v22 = (__int64)v4;
          }
          v23 = v22;
          GameRoutine_a98560(v22);
          result = v8;
          *(_DWORD*)(v23 + 208) = 2;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v24 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        return GameRoutine_1a09c50(v24);
      }
    }
  }
  return result;
}

_QWORD* GameHr_ade0e0(_QWORD* result, _QWORD* a2, __int64 a3, __int64 a4,
                      unsigned int a5)
{
  int* v5;
  int* i;
  unsigned int v11;
  _QWORD* v12;
  unsigned int v13;
  __int64 v14;

  if (result[40] != 0) {
    v5 = (int*)result[33];
    for (i = (int*)result[34]; v5 != i; v5 += 6) {
      result = *(_QWORD**)v5;
      if (*(_QWORD*)v5 != 0) {
        v11 = *(_DWORD*)(GameData_21fdfb8 + 4LL * v5[4]);
        if (v11 >= 6) {
          GameRoutine_60a250("bitset test argument out of range");
        }
        if (((*a2 >> v11) & 1) != 0) {
          GameRoutine_ad5500(result, a3, a4, a5);
          v12 = *(_QWORD**)v5;
          v13 = GameRoutine_5fba80(*(_QWORD*)(*(_QWORD*)v5 + 120LL),
                                   *(_QWORD*)(*(_QWORD*)v5 + 200LL));
          v14 = v12[15];
          if ((v13 & 0x80000000) != 0) {
            v13 = *(_DWORD*)(v14 + 224) & ~(*(int*)(v14 + 224) >> 31);
          }
          v12[17] = *(_QWORD*)(v14 + 136) + ((unsigned __int64)v13 << 6);
          GameRoutine_5fb840();
          result = (_QWORD*)GameRoutine_5fb900(v12[17]);
          v12[18] = result[1];
        }
      }
    }
  }
  return result;
}

_QWORD* GameHr_b31f90(_QWORD* result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = (__int64*)result[2];
  result[2] = 0;
  *result = GameData_1fc4e60;
  if (v1 != nullptr) {
    v2 = v1[102];
    v1[102] = 0;
    if (v2 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    }
    v3 = v1[101];
    v1[101] = 0;
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
    }
    v4 = v1[100];
    v1[100] = 0;
    if (v4 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
    }
    v5 = v1[96];
    v1[96] = 0;
    if (v5 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    }
    GameRoutine_b31d20(v1);
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v6 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v6, v1);
  }
  return result;
}

__int64 GameHr_b32070(_QWORD* a1)
{
  __int64* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = (__int64*)a1[2];
  a1[2] = 0;
  *a1 = GameData_1fc4e60;
  v3 = GameData_212bf68;
  if (v1 != nullptr) {
    v4 = v1[102];
    v1[102] = 0;
    if (v4 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
    }
    v5 = v1[101];
    v1[101] = 0;
    if (v5 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    }
    v6 = v1[100];
    v1[100] = 0;
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    }
    v7 = v1[96];
    v1[96] = 0;
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    }
    GameRoutine_b31d20(v1);
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v3 + v8, v1);
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)v3 + v9, a1);
}

__int64 GameHr_b32170(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(__int64**)(result + 16);
  *(_QWORD*)(result + 16) = 0;
  if (v1 != nullptr) {
    v2 = v1[102];
    v1[102] = 0;
    if (v2 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    }
    v3 = v1[101];
    v1[101] = 0;
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
    }
    v4 = v1[100];
    v1[100] = 0;
    if (v4 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
    }
    v5 = v1[96];
    v1[96] = 0;
    if (v5 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    }
    GameRoutine_b31d20(v1);
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v6 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v6, v1);
  }
  return result;
}

__int64 GameHr_b3cae0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      _QWORD* a9, __int64 a10)
{
  _QWORD* v10;
  __int64 v11;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  bool v37;
  __int64 v38;
  __int64 v39;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _QWORD v58[2];
  __int64 v59;

  v10 = a9;
  v11 = a10;
  *(_WORD*)(a1 + 352) = 0;
  v15 = a6;
  v16 = a5;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_BYTE*)(a1 + 376) = 18;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_WORD*)(a1 + 328) = 0;
  *(_BYTE*)(a1 + 410) = 0;
  *(_QWORD*)(a1 + 416) = a2;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 16) = a4;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 320) = a9;
  strcpy((char*)(a1 + 377), "<no_name>");
  *(_QWORD*)(a1 + 400) = 0x200000000LL;
  *(_WORD*)(a1 + 408) = 256;
  *(_QWORD*)a1 = GameData_1fc50d8;
  *(_QWORD*)(a1 + 8) = a3;
  GameRoutine_60a060(a1 + 328, a5, a6);
  GameRoutine_60a060(a1 + 352, a7, a8);
  v17 = **(_QWORD**)(a1 + 416);
  v18 = *(_QWORD*)(v17 + 112);
  if (v18 != 0) {
    v19 = v18 + 8;
    v20 = *(unsigned __int16*)(v18 + 12);
    v21 = v18 + 8 + 16 * v20;
    v22 = *(_DWORD*)v21;
    if (*(_DWORD*)(v18 + 8) < *(_DWORD*)v21) {
      do {
        if ((unsigned int)(v22 >> 3) <= 9) {
          v23 = ((unsigned __int8)GameData_1ac00b9[~(v22 >> 3) + 10] >>
                 (v22 & 7)) &
                1;
        }
        else {
          v23 = 0;
        }
        v20 = *(unsigned __int16*)(v18 + 12 + 16 * v20 + 2 * v23);
        v37 = v22 < *(_DWORD*)(v19 + 16 * v20);
        v22 = *(_DWORD*)(v19 + 16 * v20);
      } while (v37);
      v21 = v19 + 16 * v20;
    }
    v24 = *(_QWORD*)(v21 + 8);
    if (*(_WORD*)v24 == 10) {
      v25 = *(_QWORD*)(v24 + 2);
      v26 = *(unsigned __int16*)(v24 + 10);
      if (v25 == 0x615065726F6E6749LL && v26 == 29555) {
        v28 = v21 - v18 - 24;
        if ((~v28 & 0xFFFFFFFF0LL) != 0) {
          v29 = *(_QWORD*)(v17 + 104);
          if (v29 != 0) {
            v57 = v29 + ((__int64)(int)(v28 >> 4) << 6);
            v31 = *(_QWORD*)(a1 + 424);
            v30 = *(_QWORD*)(a1 + 432);
            if (v31 != v30) {
              v32 = *(_QWORD*)(a1 + 432);
              do {
                v33 = *(_BYTE*)(v32 - 24);
                v32 -= 24;
                if ((v33 & 1) != 0) {
                  v34 = *(_QWORD*)(v30 - 8);
                  if (v34 != 0) {
                    if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                      v35 = 128;
                    }
                    else {
                      v35 = 56;
                    }
                    GameRoutine_1a0a4e0(GameData_2265ee0 + v35, v34);
                  }
                }
                v30 = v32;
              } while (v32 != v31);
            }
            *(_QWORD*)(a1 + 432) = v31;
            v10 = a9;
            v36 = *(unsigned int*)(v57 + 16);
            v37 = *(_BYTE*)(v57 + 20) == 0 || (int)v36 < 1;
            if (!v37) {
              v41 = 0;
              v56 = 8 * v36;
              while (1) {
                v42 = *(_QWORD*)(*(_QWORD*)(v57 + 8) + v41);
                v43 = GameRoutine_1a09c70(v42 + 2);
                if (v43 >= 0xFFFFFFFFFFFFFFF7LL) {
                  GameRoutine_60a1d0(v43, v44, v45);
                }
                v46 = v43;
                if (v43 >= 0x17) {
                  break;
                }
                v47 = (char*)v58 + 1;
                LOBYTE(v58[0]) = 2 * v43;
                if (v43 != 0) {
                  goto LABEL_41;
                }
              LABEL_42:
                v47[v46] = 0;
                GameRoutine_7a8220(a1 + 424, v58);
                if ((v58[0] & 1) != 0 && v59 != 0) {
                  v55 = 128;
                  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                    v55 = 56;
                  }
                  GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v55, v59);
                }
                v10 = a9;
                v41 += 8;
                if (v56 == v41) {
                  goto LABEL_31;
                }
              }
              v48 = v16;
              v49 = v15;
              v50 = a7;
              v51 = a8;
              if ((v43 | 7) == 0x17) {
                v52 = 26;
              }
              else {
                v52 = (v43 | 7) + 1;
              }
              v53 = GameRoutine_651b90(GameData_2265ee0, v52, 16, 0);
              v54 = v52 | 1;
              a8 = v51;
              a7 = v50;
              v15 = v49;
              v16 = v48;
              v11 = a10;
              v47 = (char*)v53;
              v58[1] = v46;
              v59 = v53;
              v58[0] = v54;
            LABEL_41:
              GameRoutine_1a0b940(v47, v42 + 2, v46);
              goto LABEL_42;
            }
          }
        }
      }
    }
  }
LABEL_31:
  GameRoutine_adc400(a1, v16, v15, a7, a8, v10, (__int64*)(a1 + 424), v11);
  v38 = *(_QWORD*)(**(_QWORD**)(a1 + 416) + 8LL);
  v39 = GameRoutine_1a09c70(v38 + 2);
  return GameRoutine_60a060(a1 + 376, v38 + 2, v39);
}

__int64 GameHr_b45570(__int64 a1, __int64 a2, __int64 a3, int* a4, int* a5)
{
  __int64 result;
  float v11;
  int v12;
  __int64 v13;
  __int64 v14;
  float v15;
  int v16;
  __int64 v17;
  __int64 v18;
  float v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  float v27;
  int v28;
  __int64 v29;
  __int64 v30;
  float v31;
  int v32;
  __int64 v33;
  __int64 v34;
  float v35;
  int v36;
  __int64 v37;
  __int64 v38;

  result = GameRoutine_b45400(a1, a2, a3);
  v11 = *(float*)a3;
  if (*(float*)a4 < *(float*)a3) {
    *(_DWORD*)a3 = *a4;
    *(float*)a4 = v11;
    v12 = *(_DWORD*)(a3 + 4);
    *(_DWORD*)(a3 + 4) = a4[1];
    a4[1] = v12;
    v13 = *(_QWORD*)(a3 + 8);
    *(_QWORD*)(a3 + 8) = *((_QWORD*)a4 + 1);
    *((_QWORD*)a4 + 1) = v13;
    v14 = *(_QWORD*)(a3 + 16);
    *(_QWORD*)(a3 + 16) = *((_QWORD*)a4 + 2);
    *((_QWORD*)a4 + 2) = v14;
    v15 = *(float*)a2;
    if (*(float*)a3 < *(float*)a2) {
      *(_DWORD*)a2 = *(_DWORD*)a3;
      *(float*)a3 = v15;
      v16 = *(_DWORD*)(a2 + 4);
      *(_DWORD*)(a2 + 4) = *(_DWORD*)(a3 + 4);
      *(_DWORD*)(a3 + 4) = v16;
      v17 = *(_QWORD*)(a2 + 8);
      *(_QWORD*)(a2 + 8) = *(_QWORD*)(a3 + 8);
      *(_QWORD*)(a3 + 8) = v17;
      v18 = *(_QWORD*)(a2 + 16);
      *(_QWORD*)(a2 + 16) = *(_QWORD*)(a3 + 16);
      *(_QWORD*)(a3 + 16) = v18;
      v19 = *(float*)a1;
      if (*(float*)a2 < *(float*)a1) {
        *(_DWORD*)a1 = *(_DWORD*)a2;
        *(float*)a2 = v19;
        v20 = *(_DWORD*)(a1 + 4);
        *(_DWORD*)(a1 + 4) = *(_DWORD*)(a2 + 4);
        *(_DWORD*)(a2 + 4) = v20;
        v21 = *(_QWORD*)(a1 + 8);
        *(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
        *(_QWORD*)(a2 + 8) = v21;
        v22 = *(_QWORD*)(a1 + 16);
        *(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
        *(_QWORD*)(a2 + 16) = v22;
      }
    }
  }
  v23 = *a4;
  if (*(float*)a5 < *(float*)a4) {
    *a4 = *a5;
    *a5 = v23;
    v24 = a4[1];
    a4[1] = a5[1];
    a5[1] = v24;
    v25 = *((_QWORD*)a4 + 1);
    *((_QWORD*)a4 + 1) = *((_QWORD*)a5 + 1);
    *((_QWORD*)a5 + 1) = v25;
    v26 = *((_QWORD*)a4 + 2);
    *((_QWORD*)a4 + 2) = *((_QWORD*)a5 + 2);
    *((_QWORD*)a5 + 2) = v26;
    v27 = *(float*)a3;
    if (*(float*)a4 < *(float*)a3) {
      *(_DWORD*)a3 = *a4;
      *(float*)a4 = v27;
      v28 = *(_DWORD*)(a3 + 4);
      *(_DWORD*)(a3 + 4) = a4[1];
      a4[1] = v28;
      v29 = *(_QWORD*)(a3 + 8);
      *(_QWORD*)(a3 + 8) = *((_QWORD*)a4 + 1);
      *((_QWORD*)a4 + 1) = v29;
      v30 = *(_QWORD*)(a3 + 16);
      *(_QWORD*)(a3 + 16) = *((_QWORD*)a4 + 2);
      *((_QWORD*)a4 + 2) = v30;
      v31 = *(float*)a2;
      if (*(float*)a3 < *(float*)a2) {
        *(_DWORD*)a2 = *(_DWORD*)a3;
        *(float*)a3 = v31;
        v32 = *(_DWORD*)(a2 + 4);
        *(_DWORD*)(a2 + 4) = *(_DWORD*)(a3 + 4);
        *(_DWORD*)(a3 + 4) = v32;
        v33 = *(_QWORD*)(a2 + 8);
        *(_QWORD*)(a2 + 8) = *(_QWORD*)(a3 + 8);
        *(_QWORD*)(a3 + 8) = v33;
        v34 = *(_QWORD*)(a2 + 16);
        *(_QWORD*)(a2 + 16) = *(_QWORD*)(a3 + 16);
        *(_QWORD*)(a3 + 16) = v34;
        v35 = *(float*)a1;
        if (*(float*)a2 < *(float*)a1) {
          *(_DWORD*)a1 = *(_DWORD*)a2;
          *(float*)a2 = v35;
          v36 = *(_DWORD*)(a1 + 4);
          *(_DWORD*)(a1 + 4) = *(_DWORD*)(a2 + 4);
          *(_DWORD*)(a2 + 4) = v36;
          v37 = *(_QWORD*)(a1 + 8);
          *(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
          *(_QWORD*)(a2 + 8) = v37;
          v38 = *(_QWORD*)(a1 + 16);
          *(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
          *(_QWORD*)(a2 + 16) = v38;
        }
      }
    }
  }
  return result;
}

bool GameHr_b457c0(__int64 a1, __int64 a2)
{
  signed __int64 v2;
  float v3;
  float v4;
  int v5;
  __int64 v6;
  __int64 v7;
  float* v8;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  float v15;
  float v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  float v26;
  float v27;
  int v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  int v33;
  float v34;
  bool v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;

  v2 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 3);
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      GameRoutine_b45400(a1, a1 + 24, a2 - 24);
      break;
    case 4LL:
      GameRoutine_b45400(a1, a1 + 24, a1 + 48);
      v26 = *(float*)(a2 - 24);
      v27 = *(float*)(a1 + 48);
      if (v26 < v27) {
        *(float*)(a1 + 48) = v26;
        *(float*)(a2 - 24) = v27;
        v28 = *(_DWORD*)(a1 + 52);
        *(_DWORD*)(a1 + 52) = *(_DWORD*)(a2 - 20);
        *(_DWORD*)(a2 - 20) = v28;
        v29 = *(_QWORD*)(a1 + 56);
        *(_QWORD*)(a1 + 56) = *(_QWORD*)(a2 - 16);
        *(_QWORD*)(a2 - 16) = v29;
        v30 = *(_QWORD*)(a1 + 64);
        *(_QWORD*)(a1 + 64) = *(_QWORD*)(a2 - 8);
        *(_QWORD*)(a2 - 8) = v30;
        v31 = *(float*)(a1 + 48);
        v32 = *(float*)(a1 + 24);
        if (v31 < v32) {
          v33 = *(_DWORD*)(a1 + 28);
          *(float*)(a1 + 48) = v32;
          v34 = *(float*)a1;
          v35 = v31 < *(float*)a1;
          v36 = *(_DWORD*)(a1 + 52);
          *(_DWORD*)(a1 + 52) = v33;
          v37 = *(_QWORD*)(a1 + 32);
          v38 = *(_QWORD*)(a1 + 40);
          v39 = *(_QWORD*)(a1 + 56);
          v40 = *(_QWORD*)(a1 + 64);
          *(float*)(a1 + 24) = v31;
          *(_DWORD*)(a1 + 28) = v36;
          *(_QWORD*)(a1 + 56) = v37;
          *(_QWORD*)(a1 + 64) = v38;
          *(_QWORD*)(a1 + 32) = v39;
          *(_QWORD*)(a1 + 40) = v40;
          if (v35) {
            v41 = *(_DWORD*)(a1 + 4);
            *(_DWORD*)(a1 + 4) = v36;
            *(float*)a1 = v31;
            *(float*)(a1 + 24) = v34;
            *(_DWORD*)(a1 + 28) = v41;
            v42 = *(_QWORD*)(a1 + 8);
            v43 = *(_QWORD*)(a1 + 16);
            *(_QWORD*)(a1 + 8) = v39;
            *(_QWORD*)(a1 + 16) = v40;
            *(_QWORD*)(a1 + 32) = v42;
            *(_QWORD*)(a1 + 40) = v43;
          }
        }
      }
      return true;
    case 5LL:
      GameRoutine_b45570(a1, a1 + 24, a1 + 48, (int*)(a1 + 72),
                         (int*)(a2 - 24));
      break;
    default:
      goto LABEL_11;
    }
    return true;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v3 = *(float*)(a2 - 24);
    v4 = *(float*)a1;
    if (v3 < *(float*)a1) {
      *(float*)a1 = v3;
      *(float*)(a2 - 24) = v4;
      v5 = *(_DWORD*)(a1 + 4);
      *(_DWORD*)(a1 + 4) = *(_DWORD*)(a2 - 20);
      *(_DWORD*)(a2 - 20) = v5;
      v6 = *(_QWORD*)(a1 + 8);
      *(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 - 16);
      *(_QWORD*)(a2 - 16) = v6;
      v7 = *(_QWORD*)(a1 + 16);
      *(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 - 8);
      *(_QWORD*)(a2 - 8) = v7;
    }
    return true;
  }
LABEL_11:
  v8 = (float*)(a1 + 48);
  GameRoutine_b45400(a1, a1 + 24, a1 + 48);
  v11 = a1 + 72;
  if (a1 + 72 == a2) {
    return true;
  }
  v12 = 0;
  v13 = 0;
  while (1) {
    v15 = *(float*)v11;
    v16 = *v8;
    if (*(float*)v11 < *v8) {
      v17 = *(_DWORD*)(v11 + 4);
      v18 = *(_QWORD*)(v11 + 8);
      v19 = *(_QWORD*)(v11 + 16);
      v20 = v12;
      do {
        v21 = a1 + v20;
        v22 = *(_DWORD*)(a1 + v20 + 52);
        *(float*)(v21 + 72) = v16;
        *(_DWORD*)(v21 + 76) = v22;
        v23 = *(_QWORD*)(a1 + v20 + 64);
        *(_QWORD*)(v21 + 80) = *(_QWORD*)(a1 + v20 + 56);
        *(_QWORD*)(v21 + 88) = v23;
        if (v20 == -48) {
          v14 = a1;
          goto LABEL_14;
        }
        v16 = *(float*)(v21 + 24);
        v20 -= 24;
      } while (v15 < v16);
      v14 = a1 + v20 + 72;
    LABEL_14:
      ++v13;
      *(float*)v14 = v15;
      *(_DWORD*)(v14 + 4) = v17;
      *(_QWORD*)(v14 + 8) = v18;
      *(_QWORD*)(v14 + 16) = v19;
      if (v13 == 8) {
        return v11 + 24 == a2;
      }
    }
    v8 = (float*)v11;
    v11 += 24;
    v12 += 24;
    if (v11 == a2) {
      return true;
    }
  }
}

bool GameHr_b466c0(int* a1, int* a2)
{
  __int64 v2;
  int v3;
  int v4;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int* v22;
  int v23;
  int v24;
  int v25;
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
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int* v43;
  __int64 v44;
  int v45;
  int* v46;
  int v47;
  int v48;
  int v49;
  __int64 v50;
  _DWORD* v51;
  int v52;

  v2 = ((char*)a2 - (char*)a1) >> 3;
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      v18 = a1[2];
      v19 = *a1;
      v20 = *(a2 - 2);
      if (v18 >= *a1) {
        if (v20 < v18) {
          a1[2] = v20;
          *(a2 - 2) = v18;
          v28 = a1[3];
          a1[3] = *(a2 - 1);
          *(a2 - 1) = v28;
          v29 = a1[2];
          v30 = *a1;
          if (v29 < *a1) {
            v31 = a1[1];
            v32 = a1[3];
            *a1 = v29;
            a1[1] = v32;
            a1[2] = v30;
            a1[3] = v31;
          }
        }
        return true;
      }
      if (v20 >= v18) {
        v36 = a1[1];
        v37 = a1[3];
        *a1 = v18;
        a1[1] = v37;
        a1[2] = v19;
        a1[3] = v36;
        v38 = *(a2 - 2);
        if (v38 < v19) {
          a1[2] = v38;
          *(a2 - 2) = v19;
          v39 = a1[3];
          a1[3] = *(a2 - 1);
          *(a2 - 1) = v39;
        }
        return true;
      }
      *a1 = v20;
      *(a2 - 2) = v19;
      goto LABEL_17;
    case 4LL:
      GameRoutine_b46570(a1, a1 + 2, a1 + 4, a2 - 2);
      return true;
    case 5LL:
      GameRoutine_b46570(a1, a1 + 2, a1 + 4, a1 + 6);
      v7 = *(a2 - 2);
      v8 = a1[6];
      if (v7 < v8) {
        a1[6] = v7;
        *(a2 - 2) = v8;
        v9 = a1[7];
        a1[7] = *(a2 - 1);
        *(a2 - 1) = v9;
        v10 = a1[6];
        v11 = a1[4];
        if (v10 < v11) {
          v12 = a1[5];
          v13 = a1[7];
          a1[6] = v11;
          a1[7] = v12;
          v14 = a1[2];
          a1[4] = v10;
          a1[5] = v13;
          if (v10 < v14) {
            v15 = a1[3];
            a1[2] = v10;
            a1[3] = v13;
            a1[4] = v14;
            a1[5] = v15;
            v16 = *a1;
            if (v10 < *a1) {
              v17 = a1[1];
              *a1 = v10;
              a1[1] = v13;
              a1[2] = v16;
              a1[3] = v17;
            }
          }
        }
      }
      return true;
    default:
      break;
    }
  }
  else {
    if ((unsigned __int64)v2 < 2) {
      return true;
    }
    if (v2 == 2) {
      v3 = *(a2 - 2);
      v4 = *a1;
      if (v3 < *a1) {
        *a1 = v3;
        *(a2 - 2) = v4;
      LABEL_17:
        v21 = a1[1];
        a1[1] = *(a2 - 1);
        *(a2 - 1) = v21;
      }
      return true;
    }
  }
  v22 = a1 + 4;
  v23 = a1[4];
  v24 = a1[2];
  v25 = *a1;
  if (v24 >= *a1) {
    if (v23 < v24) {
      v33 = a1[3];
      v34 = a1[5];
      a1[2] = v23;
      a1[3] = v34;
      a1[4] = v24;
      a1[5] = v33;
      if (v23 < v25) {
        v35 = a1[1];
        *a1 = v23;
        a1[1] = v34;
        a1[2] = v25;
        a1[3] = v35;
      }
    }
  }
  else if (v23 >= v24) {
    v40 = a1[1];
    v41 = a1[3];
    *a1 = v24;
    a1[1] = v41;
    a1[2] = v25;
    a1[3] = v40;
    if (v23 < v25) {
      v42 = a1[5];
      a1[4] = v25;
      a1[5] = v40;
      a1[2] = v23;
      a1[3] = v42;
    }
  }
  else {
    v26 = a1[1];
    v27 = a1[5];
    *a1 = v23;
    a1[1] = v27;
    a1[4] = v25;
    a1[5] = v26;
  }
  v43 = a1 + 6;
  if (a1 + 6 == a2) {
    return true;
  }
  v44 = 0;
  v45 = 0;
  while (1) {
    v47 = *v22;
    if (*v43 < *v22) {
      v49 = *v43;
      v48 = v43[1];
      v50 = v44;
      do {
        v51 = (int*)((char*)a1 + v50);
        v52 = *(int*)((char*)a1 + v50 + 20);
        v51[6] = v47;
        v51[7] = v52;
        if (v50 == -16) {
          v46 = a1;
          goto LABEL_35;
        }
        v47 = v51[2];
        v50 -= 8;
      } while (v47 > v49);
      v46 = (int*)((char*)a1 + v50 + 24);
    LABEL_35:
      ++v45;
      *v46 = v49;
      v46[1] = v48;
      if (v45 == 8) {
        return v43 + 2 == a2;
      }
    }
    v22 = v43;
    v43 += 2;
    v44 += 8;
    if (v43 == a2) {
      return true;
    }
  }
}

bool GameHr_b47a60(__int64 a1, __int64 a2)
{
  __int64 v2;
  float v3;
  float v4;
  float v7;
  float v8;
  int v9;
  __int64 v10;
  float v11;
  float v12;
  int v13;
  float v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  float v19;
  bool v20;
  __int64 v21;
  int v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  int v27;
  __int64 v28;
  float v29;
  float v30;
  float* v31;
  float v32;
  int v33;
  int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  float v38;
  float v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  float v52;
  int v53;
  __int64 v54;
  int v55;
  int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  float v63;
  float v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;

  v2 = (a2 - a1) >> 4;
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      v24 = *(float*)(a1 + 16);
      v25 = *(float*)a1;
      v26 = *(float*)(a2 - 16);
      if (v24 >= *(float*)a1) {
        if (v26 < v24) {
          *(float*)(a1 + 16) = v26;
          *(float*)(a2 - 16) = v24;
          v36 = *(_DWORD*)(a1 + 20);
          *(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 - 12);
          *(_DWORD*)(a2 - 12) = v36;
          v37 = *(_QWORD*)(a1 + 24);
          *(_QWORD*)(a1 + 24) = *(_QWORD*)(a2 - 8);
          *(_QWORD*)(a2 - 8) = v37;
          v38 = *(float*)(a1 + 16);
          v39 = *(float*)a1;
          if (v38 < *(float*)a1) {
            v40 = *(_DWORD*)(a1 + 4);
            v41 = *(_DWORD*)(a1 + 20);
            *(float*)a1 = v38;
            *(float*)(a1 + 16) = v39;
            *(_DWORD*)(a1 + 4) = v41;
            *(_DWORD*)(a1 + 20) = v40;
            v42 = *(_QWORD*)(a1 + 8);
            *(_QWORD*)(a1 + 8) = *(_QWORD*)(a1 + 24);
            *(_QWORD*)(a1 + 24) = v42;
          }
        }
        return true;
      }
      if (v26 >= v24) {
        v49 = *(_DWORD*)(a1 + 4);
        v50 = *(_DWORD*)(a1 + 20);
        *(float*)a1 = v24;
        *(float*)(a1 + 16) = v25;
        *(_DWORD*)(a1 + 4) = v50;
        *(_DWORD*)(a1 + 20) = v49;
        v51 = *(_QWORD*)(a1 + 8);
        *(_QWORD*)(a1 + 8) = *(_QWORD*)(a1 + 24);
        *(_QWORD*)(a1 + 24) = v51;
        v52 = *(float*)(a2 - 16);
        if (v52 < v25) {
          *(float*)(a1 + 16) = v52;
          *(float*)(a2 - 16) = v25;
          v53 = *(_DWORD*)(a1 + 20);
          *(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 - 12);
          *(_DWORD*)(a2 - 12) = v53;
          v54 = *(_QWORD*)(a1 + 24);
          *(_QWORD*)(a1 + 24) = *(_QWORD*)(a2 - 8);
          *(_QWORD*)(a2 - 8) = v54;
        }
        return true;
      }
      *(float*)a1 = v26;
      *(float*)(a2 - 16) = v25;
      goto LABEL_18;
    case 4LL:
      GameRoutine_b47890(a1, a1 + 16, a1 + 32, a2 - 16);
      return true;
    case 5LL:
      GameRoutine_b47890(a1, a1 + 16, a1 + 32, a1 + 48);
      v7 = *(float*)(a2 - 16);
      v8 = *(float*)(a1 + 48);
      if (v7 < v8) {
        *(float*)(a1 + 48) = v7;
        *(float*)(a2 - 16) = v8;
        v9 = *(_DWORD*)(a1 + 52);
        *(_DWORD*)(a1 + 52) = *(_DWORD*)(a2 - 12);
        *(_DWORD*)(a2 - 12) = v9;
        v10 = *(_QWORD*)(a1 + 56);
        *(_QWORD*)(a1 + 56) = *(_QWORD*)(a2 - 8);
        *(_QWORD*)(a2 - 8) = v10;
        v11 = *(float*)(a1 + 48);
        v12 = *(float*)(a1 + 32);
        if (v11 < v12) {
          v13 = *(_DWORD*)(a1 + 36);
          *(float*)(a1 + 48) = v12;
          v14 = *(float*)(a1 + 16);
          v15 = *(_DWORD*)(a1 + 52);
          *(_DWORD*)(a1 + 52) = v13;
          v16 = *(_QWORD*)(a1 + 40);
          v17 = *(_QWORD*)(a1 + 56);
          *(float*)(a1 + 32) = v11;
          *(_DWORD*)(a1 + 36) = v15;
          *(_QWORD*)(a1 + 56) = v16;
          *(_QWORD*)(a1 + 40) = v17;
          if (v11 < v14) {
            v18 = *(_DWORD*)(a1 + 20);
            *(float*)(a1 + 32) = v14;
            v19 = *(float*)a1;
            v20 = v11 < *(float*)a1;
            *(_DWORD*)(a1 + 36) = v18;
            v21 = *(_QWORD*)(a1 + 24);
            *(float*)(a1 + 16) = v11;
            *(_DWORD*)(a1 + 20) = v15;
            *(_QWORD*)(a1 + 24) = v17;
            *(_QWORD*)(a1 + 40) = v21;
            if (v20) {
              v22 = *(_DWORD*)(a1 + 4);
              *(_DWORD*)(a1 + 4) = v15;
              v23 = *(_QWORD*)(a1 + 8);
              *(float*)a1 = v11;
              *(float*)(a1 + 16) = v19;
              *(_QWORD*)(a1 + 8) = v17;
              *(_DWORD*)(a1 + 20) = v22;
              *(_QWORD*)(a1 + 24) = v23;
            }
          }
        }
      }
      return true;
    default:
      break;
    }
  }
  else {
    if ((unsigned __int64)v2 < 2) {
      return true;
    }
    if (v2 == 2) {
      v3 = *(float*)(a2 - 16);
      v4 = *(float*)a1;
      if (v3 < *(float*)a1) {
        *(float*)a1 = v3;
        *(float*)(a2 - 16) = v4;
      LABEL_18:
        v27 = *(_DWORD*)(a1 + 4);
        *(_DWORD*)(a1 + 4) = *(_DWORD*)(a2 - 12);
        *(_DWORD*)(a2 - 12) = v27;
        v28 = *(_QWORD*)(a1 + 8);
        *(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 - 8);
        *(_QWORD*)(a2 - 8) = v28;
      }
      return true;
    }
  }
  v29 = *(float*)(a1 + 16);
  v30 = *(float*)a1;
  v31 = (float*)(a1 + 32);
  v32 = *(float*)(a1 + 32);
  if (v29 >= *(float*)a1) {
    if (v32 < v29) {
      v43 = *(_DWORD*)(a1 + 20);
      v44 = *(_DWORD*)(a1 + 36);
      v45 = *(_QWORD*)(a1 + 24);
      *(float*)(a1 + 16) = v32;
      *(float*)(a1 + 32) = v29;
      *(_DWORD*)(a1 + 36) = v43;
      v46 = *(_QWORD*)(a1 + 40);
      *(_DWORD*)(a1 + 20) = v44;
      *(_QWORD*)(a1 + 40) = v45;
      *(_QWORD*)(a1 + 24) = v46;
      if (v32 < v30) {
        v47 = *(_DWORD*)(a1 + 4);
        *(_DWORD*)(a1 + 4) = v44;
        v48 = *(_QWORD*)(a1 + 8);
        *(float*)a1 = v32;
        *(float*)(a1 + 16) = v30;
        *(_QWORD*)(a1 + 8) = v46;
      LABEL_33:
        *(_DWORD*)(a1 + 20) = v47;
        *(_QWORD*)(a1 + 24) = v48;
      }
    }
  }
  else {
    if (v32 < v29) {
      v33 = *(_DWORD*)(a1 + 4);
      v34 = *(_DWORD*)(a1 + 36);
      *(float*)a1 = v32;
      *(float*)(a1 + 32) = v30;
      *(_DWORD*)(a1 + 4) = v34;
      *(_DWORD*)(a1 + 36) = v33;
      v35 = *(_QWORD*)(a1 + 8);
      *(_QWORD*)(a1 + 8) = *(_QWORD*)(a1 + 40);
      *(_QWORD*)(a1 + 40) = v35;
      goto LABEL_34;
    }
    v55 = *(_DWORD*)(a1 + 20);
    v56 = *(_DWORD*)(a1 + 4);
    v57 = *(_QWORD*)(a1 + 24);
    *(float*)a1 = v29;
    *(float*)(a1 + 16) = v30;
    *(_DWORD*)(a1 + 4) = v55;
    v58 = *(_QWORD*)(a1 + 8);
    *(_DWORD*)(a1 + 20) = v56;
    *(_QWORD*)(a1 + 8) = v57;
    *(_QWORD*)(a1 + 24) = v58;
    if (v32 < v30) {
      v47 = *(_DWORD*)(a1 + 36);
      *(_DWORD*)(a1 + 36) = v56;
      v48 = *(_QWORD*)(a1 + 40);
      *(float*)(a1 + 16) = v32;
      *(float*)(a1 + 32) = v30;
      *(_QWORD*)(a1 + 40) = v58;
      goto LABEL_33;
    }
  }
LABEL_34:
  v59 = a1 + 48;
  if (a1 + 48 == a2) {
    return true;
  }
  v60 = 0;
  v61 = 0;
  while (1) {
    v63 = *(float*)v59;
    v64 = *v31;
    if (*(float*)v59 < *v31) {
      v65 = *(_DWORD*)(v59 + 4);
      v66 = *(_QWORD*)(v59 + 8);
      v67 = v60;
      do {
        v68 = a1 + v67;
        v69 = *(_DWORD*)(a1 + v67 + 36);
        *(float*)(v68 + 48) = v64;
        *(_DWORD*)(v68 + 52) = v69;
        *(_QWORD*)(v68 + 56) = *(_QWORD*)(a1 + v67 + 40);
        if (v67 == -32) {
          v62 = a1;
          goto LABEL_37;
        }
        v64 = *(float*)(v68 + 16);
        v67 -= 16;
      } while (v63 < v64);
      v62 = a1 + v67 + 48;
    LABEL_37:
      ++v61;
      *(float*)v62 = v63;
      *(_DWORD*)(v62 + 4) = v65;
      *(_QWORD*)(v62 + 8) = v66;
      if (v61 == 8) {
        return v59 + 16 == a2;
      }
    }
    v31 = (float*)v59;
    v59 += 16;
    v60 += 16;
    if (v59 == a2) {
      return true;
    }
  }
}

__int64 GameHr_b72830(_QWORD* a1, __int64 a2, _QWORD* a3)
{
  __int64 v6;

  *a1 = GameRoutine_b48f90(a2, *a3);
  a1[3] = GameRoutine_b5a4b0(a2, a3[1]);
  a1[4] = GameRoutine_b4a3f0(a2, a3[2]);
  a1[5] = GameRoutine_b4a3f0(a2, a3[3]);
  v6 = a3[5];
  if (v6 != 0) {
    a1[2] = GameRoutine_b48f90(a2, v6);
  }
  a1[1] = GameRoutine_b48f90(a2, a3[4]);
  return GameRoutine_1a0b950(a1 + 6, a3 + 8, 1105);
}

__int64 GameHr_b79df0(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = GameData_212c010[0];
  GameRoutine_6040f0(a1 + 25, *GameData_212c010[0] + 568);
  GameRoutine_6040f0(a1 + 41, *v2 + 568);
  GameRoutine_604050(a1 + 41);
  GameRoutine_604050(a1 + 25);
  v3 = a1[19];
  a1[19] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[18];
  a1[18] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[12];
  a1[12] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  result = a1[11];
  a1[11] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v7 = a1[10];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = GameRoutine_1a09c50(v7);
  }
  v8 = a1[8];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = GameRoutine_1a09c50(v8);
  }
  v9 = a1[6];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = GameRoutine_1a09c50(v9);
  }
  v10 = a1[4];
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    result = GameRoutine_1a09c50(v10);
    v11 = a1[2];
    if (v11 == 0) {
      return result;
    }
  }
  else {
    v11 = a1[2];
    if (v11 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    return GameRoutine_1a09c50(v11);
  }
  return result;
}

__int64 GameHr_b7b290(_QWORD* a1, __int64 a2, _QWORD* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;

  a1[4] = GameRoutine_b48f90(a2, a3[19]);
  a1[1] = GameRoutine_b48f90(a2, a3[16]);
  a1[3] = GameRoutine_b48f90(a2, a3[18]);
  a1[2] = GameRoutine_b5a4b0(a2, a3[17]);
  *a1 = GameRoutine_b48f90(a2, a3[15]);
  v6 = a3[22];
  if (v6 != 0) {
    a1[7] = GameRoutine_b48f90(a2, v6);
  }
  v7 = a3[20];
  if (v7 != 0) {
    a1[5] = GameRoutine_b48f90(a2, v7);
  }
  v8 = a3[21];
  if (v8 != 0) {
    a1[6] = GameRoutine_b5a4b0(a2, v8);
  }
  a1[9] = GameRoutine_b4a3f0(a2, a3[12]);
  result = GameRoutine_b4a3f0(a2, a3[13]);
  a1[10] = result;
  return result;
}

__int64 GameHr_b7b380(__int64* a1, _QWORD* a2, __int64 a3)
{
  int v3;
  int v4;
  __int64 v7;
  int v8;
  char* v9;
  unsigned __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  int v20;
  __int64 result;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  _QWORD v39[2];
  char* v40;
  char v41[16];
  __int64 v42;
  _QWORD v43[2];
  __int64 v44;
  __int64 v45;
  int v46;
  int v47;
  __int64 v48;
  char v49;
  int v50;

  v3 = *(_DWORD*)(a3 + 16);
  v4 = *(_DWORD*)(a3 + 20);
  v50 = 0;
  v48 = 0x100000001LL;
  v49 = 1;
  v45 = 0xD00000000LL;
  v46 = v3;
  v47 = v4;
  v7 = 2;
  a1[1] = GameRoutine_b509c0(a2, "SSRColor", &v45);
  do {
    v41[0] = 28;
    strcpy(&v41[1], "SSRMipMapColor");
    v8 = 1 << (v7 - 1);
    v46 = v3 / v8;
    v47 = v4 / v8;
    GameRoutine_1a0a790(v39, v7 - 1);
    if ((v39[0] & 1) != 0) {
      v9 = v40;
    }
    else {
      v9 = (char*)v39 + 1;
    }
    if ((v39[0] & 1) != 0) {
      v10 = v39[1];
    }
    else {
      v10 = (unsigned __int64)LOBYTE(v39[0]) >> 1;
    }
    v11 = (_QWORD*)GameRoutine_1a09ce0(v41, v9, v10);
    v13 = v11[1];
    v12 = v11[2];
    v43[0] = *v11;
    v43[1] = v13;
    v44 = v12;
    v11[1] = 0;
    v11[2] = 0;
    *v11 = 0;
    v14 = GameRoutine_b4bb60((__int64)a2, (unsigned __int8*)v43, &v45);
    v15 = v43[0];
    a1[v7] = v14;
    if ((v15 & 1) != 0 && v44 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v16 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v16, v44);
    }
    if ((v39[0] & 1) != 0 && v40 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v17 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v17, v40);
    }
    if ((v41[0] & 1) != 0 && v42 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v18 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v18, v42);
    }
    ++v7;
  } while (v7 != 9);
  v19 = (_QWORD*)*a2;
  v50 = 0;
  v48 = 0x100000001LL;
  v49 = 1;
  v45 = 0x1500000000LL;
  v20 = *(_DWORD*)(a3 + 20);
  v46 = *(_DWORD*)(a3 + 16);
  v47 = v20;
  result = GameRoutine_b53170(v19, (__int64)"SSRDepth", 8u, &v45);
  v22 = (_QWORD*)a2[1];
  v23 = result;
  v25 = (__int64*)v22[5];
  v24 = v22[6];
  if ((unsigned __int64)v25 >= v24) {
    v27 = v22[4];
    v28 = (char*)v25 - v27;
    v29 = ((__int64)v25 - v27) >> 3;
    v30 = v29 + 1;
    if ((unsigned __int64)(v29 + 1) >> 61 != 0) {
      GameRoutine_b32f50();
    }
    v31 = v24 - v27;
    if (v31 >> 2 > v30) {
      v30 = v31 >> 2;
    }
    if ((unsigned __int64)v31 >= 0x7FFFFFFFFFFFFFF8LL) {
      v32 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v32 = v30;
    }
    if (v32 != 0) {
      if (v32 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v33 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v32, 16, 0);
    }
    else {
      v33 = 0;
    }
    v34 = v33 + 8 * v32;
    v35 = (char*)v25 - v27;
    v36 = (__int64)&v28[v33 + -8 * v29];
    *(_QWORD*)&v28[v33] = v23;
    v26 = (__int64)&v28[v33 + 8];
    result = GameRoutine_1a0b950(v36, v27, v35);
    v22[4] = v36;
    v22[5] = v26;
    v22[6] = v34;
    if (v27 != 0) {
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v37 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v37, v27);
    }
  }
  else {
    *v25 = result;
    v26 = (__int64)(v25 + 1);
  }
  v22[5] = v26;
  *a1 = v23;
  return result;
}

__int64 GameHr_b7bd00(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
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
  __int64 result;

  v2 = GameData_212c010[0];
  GameRoutine_6040f0(a1 + 2, *GameData_212c010[0] + 568);
  GameRoutine_6040f0(a1 + 18, *v2 + 568);
  v3 = a1[123];
  a1[123] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[122];
  a1[122] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[116];
  a1[116] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[115];
  a1[115] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[109];
  a1[109] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = a1[108];
  a1[108] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = a1[102];
  a1[102] = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  v10 = a1[101];
  a1[101] = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  v11 = a1[95];
  a1[95] = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  v12 = a1[94];
  a1[94] = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  v13 = a1[88];
  a1[88] = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  v14 = a1[87];
  a1[87] = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  v15 = a1[81];
  a1[81] = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  v16 = a1[80];
  a1[80] = 0;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
  }
  v17 = a1[74];
  a1[74] = 0;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  v18 = a1[73];
  a1[73] = 0;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
  }
  v19 = a1[67];
  a1[67] = 0;
  if (v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
  }
  v20 = a1[66];
  a1[66] = 0;
  if (v20 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
  }
  v21 = a1[60];
  a1[60] = 0;
  if (v21 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
  }
  v22 = a1[59];
  a1[59] = 0;
  if (v22 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
  }
  v23 = a1[53];
  a1[53] = 0;
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
  }
  v24 = a1[52];
  a1[52] = 0;
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
  }
  v25 = a1[51];
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    GameRoutine_1a09c50(v25);
  }
  v26 = a1[49];
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    GameRoutine_1a09c50(v26);
  }
  v27 = a1[47];
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    GameRoutine_1a09c50(v27);
  }
  v28 = a1[45];
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    GameRoutine_1a09c50(v28);
  }
  GameRoutine_604050(a1 + 18);
  GameRoutine_604050(a1 + 2);
  result = a1[1];
  a1[1] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 GameHr_b7cee0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4,
                      __int64 a5)
{
  __int64 (**v8)(__int64);
  __int64 (**v9)(__int64);
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  __int64 v29;
  __int64 result;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  __int64 v40;
  unsigned int v41;
  unsigned int v42;
  __int64 v43;
  _QWORD v44[2];

  v8 = (__int64 (**)(__int64))GameData_212e778[0];
  v9 = (__int64 (**)(__int64))GameData_212e780;
  if ((*(_BYTE*)(a5 + 84) & 1) != 0 || (*(_BYTE*)(a1 + 1032) & 1) != 0) {
    v11 = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(
        **(_QWORD**)(a1 + 8) + 32LL))(*(_QWORD**)(a1 + 8), *(_QWORD*)(a1 + 8));
    (*(void (**)(_QWORD, _QWORD*, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v11,
                                                                   v12);
    v13 = *a4;
    v14 = (*v8)((__int64)v11);
    v15 = (*v9)((__int64)v11);
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v13 + 72LL))(v13, 0, 0, v14, v15);
    v16 = *a4;
    v17 = (*v8)((__int64)v11);
    v18 = (*v9)((__int64)v11);
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v16 + 88LL))(v16, 0, 0, v17, v18);
    v19 = *a4;
    v44[0] = 0;
    v44[1] = 0;
    (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v19 + 144LL))(v19, 0,
                                                                    v44);
    *(_BYTE*)(a1 + 1032) = 0;
  }
  v20 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a3 + 8) + 16LL))(
      *(_QWORD*)(a3 + 8));
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 32LL))(v20);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v21, v22);
  v23 = *a4;
  v24 = (*v8)(v21);
  v25 = (*v9)(v21);
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v23 + 72LL))(
      v23, 0, 0, v24, v25);
  v26 = *a4;
  v27 = (*v8)(v21);
  v28 = (*v9)(v21);
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v26 + 88LL))(
      v26, 0, 0, v27, v28);
  v29 = *a4;
  v44[0] = 0;
  v44[1] = 0;
  result = (*(__int64 (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v29 + 144LL))(
      v29, 0, v44);
  if (*(int*)(a5 + 28) >= 2) {
    v31 = (__int64*)(a3 + 16);
    v32 = 1;
    do {
      v33 = *v31++;
      v34 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
      v35 = (*(__int64 (**)(__int64))(*(_QWORD*)v34 + 32LL))(v34);
      (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v35,
                                                                     v36);
      v37 = *a4;
      v38 = (*v8)(v35);
      v39 = (*v9)(v35);
      (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)v37 + 72LL))(v37, 0, 0, v38, v39);
      v40 = *a4;
      v41 = (*v8)(v35);
      v42 = (*v9)(v35);
      (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)v40 + 88LL))(v40, 0, 0, v41, v42);
      v43 = *a4;
      v44[0] = 0;
      v44[1] = 0;
      result = (*(__int64 (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v43 +
                                                          144LL))(v43, 0, v44);
      ++v32;
    } while (v32 < *(int*)(a5 + 28));
  }
  return result;
}

__int64 GameHr_b7d840(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;

  v2 = GameData_212c010[0];
  GameRoutine_6040f0(a1 + 11, *GameData_212c010[0] + 568);
  GameRoutine_6040f0(a1 + 27, *v2 + 568);
  GameRoutine_604050(a1 + 27);
  GameRoutine_604050(a1 + 11);
  v3 = a1[5];
  a1[5] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[4];
  a1[4] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[3];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    GameRoutine_1a09c50(v5);
  }
  result = a1[1];
  a1[1] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 GameHr_b7fb70(__int64* a1, _QWORD* a2, __int64* a3)
{
  _QWORD* v4;
  _QWORD* v5;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v5 = (_QWORD*)*a1;
  v4 = (_QWORD*)a1[1];
  if (v5 == v4 && 0xAAAAAAAAAAAAAAABLL * ((a1[2] - (__int64)v5) >> 3) <= 6) {
    v8 = GameData_212bf68;
    v4 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 168, 16, 0);
    *a1 = (__int64)v4;
    a1[1] = (__int64)v4;
    a1[2] = (__int64)(v4 + 21);
    if (v5 != nullptr) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v9 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v8 + v9, v5);
      v4 = (_QWORD*)a1[1];
    }
  }
  v10 = a1[2];
  if ((unsigned __int64)v4 >= v10) {
    v14 = *a1;
    v15 = (__int64)v4 - *a1;
    v16 = 1 - 0x5555555555555555LL * (v15 >> 3);
    if (v16 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_a864d0();
    }
    v17 = GameData_212bf68;
    v18 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v10 - v14) >> 3);
    if (2 * v18 > v16) {
      v16 = 2 * v18;
    }
    if (v18 >= 0x555555555555555LL) {
      v19 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v19 = v16;
    }
    if (v19 != 0) {
      if (v19 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(v4);
      }
      v20 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 24 * v19, 16, 0);
    }
    else {
      v20 = 0;
    }
    v21 = (_QWORD*)(v20 + v15);
    v22 = a2[1];
    *v21 = *a2;
    v21[1] = v22;
    v23 = *a3;
    v13 = v20 + v15 + 24;
    v21[2] = v23;
    GameRoutine_1a0b950(v20, v14, v15);
    *a1 = v20;
    a1[1] = v13;
    a1[2] = v20 + 24 * v19;
    if (v14 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
        v24 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v17 + v24, v14);
    }
  }
  else {
    v11 = a2[1];
    *v4 = *a2;
    v4[1] = v11;
    v12 = *a3;
    v13 = (__int64)(v4 + 3);
    v4[2] = v12;
  }
  a1[1] = v13;
  return v13 - 24;
}

_QWORD* GameHr_b82060(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
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
  __int64 v18;
  __int64 v19;
  int* v20;
  int** v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  int v87;
  int* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  int v94;
  _QWORD* v95;
  __int64 v96;
  __int64 v97;
  _QWORD* result;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  _QWORD* v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  _QWORD* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;

  v1 = *(_QWORD*)(a1 + 360);
  *(_QWORD*)(a1 + 360) = 0;
  v3 = GameData_212bf68;
  if (v1 != 0) {
    GameRoutine_c4a820(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v3 + v4, v1);
  }
  v5 = *(_QWORD*)(a1 + 384);
  *(_QWORD*)(a1 + 384) = 0;
  if (v5 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v3 + v6, v5);
  }
  v7 = GameData_212c010[0];
  if (*(_QWORD*)(a1 + 184) != 0 && (*(_BYTE*)(a1 + 200) & 1) != 0) {
    v8 = *GameData_212c010[0];
    v9 = *(_QWORD*)(a1 + 192);
    v146 = *(_QWORD*)(a1 + 184);
    v147 = v9;
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_649700(v8, &v146);
    v10 = v147;
    if (v147 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v147 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      GameRoutine_1a09c50(v10);
    }
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v11 = *v7;
    v12 = *(_QWORD*)(a1 + 176);
    v146 = *(_QWORD*)(a1 + 168);
    v147 = v12;
    if (v12 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_649700(v11, &v146);
    v13 = v147;
    if (v147 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v147 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      GameRoutine_1a09c50(v13);
    }
  }
  if (*(_QWORD*)(a1 + 152) != 0) {
    v14 = *v7;
    v15 = *(_QWORD*)(a1 + 160);
    v146 = *(_QWORD*)(a1 + 152);
    v147 = v15;
    if (v15 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_649700(v14, &v146);
    v16 = v147;
    if (v147 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v147 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      GameRoutine_1a09c50(v16);
    }
  }
  if (*(_QWORD*)(a1 + 208) != 0) {
    v17 = *v7;
    v18 = *(_QWORD*)(a1 + 216);
    v146 = *(_QWORD*)(a1 + 208);
    v147 = v18;
    if (v18 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_649700(v17, &v146);
    v19 = v147;
    if (v147 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v147 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      GameRoutine_1a09c50(v19);
    }
  }
  v21 = (int**)(a1 + 16);
  v20 = *(int**)(a1 + 16);
  if (*v20 >= 2) {
    if (*(_BYTE*)((v22 = *((_QWORD*)v20 + 14)) + 92) != 1 ||
        *(_BYTE*)((v23 = *((_QWORD*)v20 + 23) + 20LL * *(int*)(v22 + 88)) +
                  8) == 1 &&
            (*(_BYTE*)(v23 + 16) & 1) == 0 && *(_DWORD*)(v23 + 4) == 1 ||
        (*(_BYTE*)(v22 + 92) = 0, v20 = *v21, **v21 >= 2)) {
      v24 = *((_QWORD*)v20 + 14);
      if (*(_BYTE*)(v24 + 92) == 1) {
        v25 = *((_QWORD*)v20 + 23) + 20LL * *(int*)(v24 + 88);
        if (*(_BYTE*)(v25 + 8) != 1 || (*(_BYTE*)(v25 + 16) & 1) != 0) {
          goto LABEL_54;
        }
        *(_BYTE*)(v24 + 92) = 0;
      }
      v26 = *((_QWORD*)v20 + 23);
      v27 = *((_QWORD*)v20 + 24);
      while (v26 != v27) {
        if (*(_BYTE*)(v26 + 8) == 1 && *(_DWORD*)(v26 + 4) == 1) {
          v29 = *(unsigned __int8*)(v26 + 16);
          *(_BYTE*)(v26 + 8) = 0;
          if (v29 == 1) {
            *(_BYTE*)(v26 + 16) = 0;
          }
        }
        v26 += 20;
      }
    LABEL_54:
      v30 = *((_QWORD*)v20 + 14);
      v31 = *(_QWORD*)(v30 + 56);
      *(_QWORD*)(v30 + 48) = 0;
      *(_QWORD*)(v30 + 56) = 0;
      if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
        GameRoutine_1a09c50(v31);
      }
    }
  }
  v32 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    GameRoutine_1a09c50(v32);
  }
  v33 = *v21;
  if (**v21 >= 3) {
    if (*(_BYTE*)((v34 = *((_QWORD*)v33 + 14)) + 140) != 1 ||
        *(_BYTE*)((v35 = *((_QWORD*)v33 + 23) + 20LL * *(int*)(v34 + 136)) +
                  8) == 1 &&
            (*(_BYTE*)(v35 + 16) & 1) == 0 && *(_DWORD*)(v35 + 4) == 2 ||
        (*(_BYTE*)(v34 + 140) = 0, v33 = *v21, **v21 >= 3)) {
      v36 = *((_QWORD*)v33 + 14);
      if (*(_BYTE*)(v36 + 140) == 1) {
        v37 = *((_QWORD*)v33 + 23) + 20LL * *(int*)(v36 + 136);
        if (*(_BYTE*)(v37 + 8) != 1 || (*(_BYTE*)(v37 + 16) & 1) != 0) {
          goto LABEL_80;
        }
        *(_BYTE*)(v36 + 140) = 0;
      }
      v38 = *((_QWORD*)v33 + 23);
      v39 = *((_QWORD*)v33 + 24);
      while (v38 != v39) {
        if (*(_BYTE*)(v38 + 8) == 1 && *(_DWORD*)(v38 + 4) == 2) {
          v41 = *(unsigned __int8*)(v38 + 16);
          *(_BYTE*)(v38 + 8) = 0;
          if (v41 == 1) {
            *(_BYTE*)(v38 + 16) = 0;
          }
        }
        v38 += 20;
      }
    LABEL_80:
      v42 = *((_QWORD*)v33 + 14);
      v43 = *(_QWORD*)(v42 + 104);
      *(_QWORD*)(v42 + 96) = 0;
      *(_QWORD*)(v42 + 104) = 0;
      if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
        GameRoutine_1a09c50(v43);
      }
    }
  }
  v44 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  if (v44 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
    GameRoutine_1a09c50(v44);
  }
  v45 = *v21;
  if (**v21 >= 4) {
    if (*(_BYTE*)((v46 = *((_QWORD*)v45 + 14)) + 188) != 1 ||
        *(_BYTE*)((v47 = *((_QWORD*)v45 + 23) + 20LL * *(int*)(v46 + 184)) +
                  8) == 1 &&
            (*(_BYTE*)(v47 + 16) & 1) == 0 && *(_DWORD*)(v47 + 4) == 3 ||
        (*(_BYTE*)(v46 + 188) = 0, v45 = *v21, **v21 >= 4)) {
      v48 = *((_QWORD*)v45 + 14);
      if (*(_BYTE*)(v48 + 188) == 1) {
        v49 = *((_QWORD*)v45 + 23) + 20LL * *(int*)(v48 + 184);
        if (*(_BYTE*)(v49 + 8) != 1 || (*(_BYTE*)(v49 + 16) & 1) != 0) {
          goto LABEL_106;
        }
        *(_BYTE*)(v48 + 188) = 0;
      }
      v50 = *((_QWORD*)v45 + 23);
      v51 = *((_QWORD*)v45 + 24);
      while (v50 != v51) {
        if (*(_BYTE*)(v50 + 8) == 1 && *(_DWORD*)(v50 + 4) == 3) {
          v53 = *(unsigned __int8*)(v50 + 16);
          *(_BYTE*)(v50 + 8) = 0;
          if (v53 == 1) {
            *(_BYTE*)(v50 + 16) = 0;
          }
        }
        v50 += 20;
      }
    LABEL_106:
      v54 = *((_QWORD*)v45 + 14);
      v55 = *(_QWORD*)(v54 + 152);
      *(_QWORD*)(v54 + 144) = 0;
      *(_QWORD*)(v54 + 152) = 0;
      if (v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
        GameRoutine_1a09c50(v55);
      }
    }
  }
  v56 = *(_QWORD*)(a1 + 72);
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  if (v56 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
    GameRoutine_1a09c50(v56);
  }
  v57 = *v21;
  if (**v21 >= 5) {
    if (*(_BYTE*)((v58 = *((_QWORD*)v57 + 14)) + 236) != 1 ||
        *(_BYTE*)((v59 = *((_QWORD*)v57 + 23) + 20LL * *(int*)(v58 + 232)) +
                  8) == 1 &&
            (*(_BYTE*)(v59 + 16) & 1) == 0 && *(_DWORD*)(v59 + 4) == 4 ||
        (*(_BYTE*)(v58 + 236) = 0, v57 = *v21, **v21 >= 5)) {
      v60 = *((_QWORD*)v57 + 14);
      if (*(_BYTE*)(v60 + 236) == 1) {
        v61 = *((_QWORD*)v57 + 23) + 20LL * *(int*)(v60 + 232);
        if (*(_BYTE*)(v61 + 8) != 1 || (*(_BYTE*)(v61 + 16) & 1) != 0) {
          goto LABEL_132;
        }
        *(_BYTE*)(v60 + 236) = 0;
      }
      v62 = *((_QWORD*)v57 + 23);
      v63 = *((_QWORD*)v57 + 24);
      while (v62 != v63) {
        if (*(_BYTE*)(v62 + 8) == 1 && *(_DWORD*)(v62 + 4) == 4) {
          v65 = *(unsigned __int8*)(v62 + 16);
          *(_BYTE*)(v62 + 8) = 0;
          if (v65 == 1) {
            *(_BYTE*)(v62 + 16) = 0;
          }
        }
        v62 += 20;
      }
    LABEL_132:
      v66 = *((_QWORD*)v57 + 14);
      v67 = *(_QWORD*)(v66 + 200);
      *(_QWORD*)(v66 + 192) = 0;
      *(_QWORD*)(v66 + 200) = 0;
      if (v67 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67);
        GameRoutine_1a09c50(v67);
      }
    }
  }
  v68 = *(_QWORD*)(a1 + 88);
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  if (v68 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v68 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68);
    GameRoutine_1a09c50(v68);
  }
  v69 = *v21;
  if (**v21 >= 6) {
    if (*(_BYTE*)((v70 = *((_QWORD*)v69 + 14)) + 284) != 1 ||
        *(_BYTE*)((v71 = *((_QWORD*)v69 + 23) + 20LL * *(int*)(v70 + 280)) +
                  8) == 1 &&
            (*(_BYTE*)(v71 + 16) & 1) == 0 && *(_DWORD*)(v71 + 4) == 5 ||
        (*(_BYTE*)(v70 + 284) = 0, v69 = *v21, **v21 >= 6)) {
      v72 = *((_QWORD*)v69 + 14);
      if (*(_BYTE*)(v72 + 284) == 1) {
        v73 = *((_QWORD*)v69 + 23) + 20LL * *(int*)(v72 + 280);
        if (*(_BYTE*)(v73 + 8) != 1 || (*(_BYTE*)(v73 + 16) & 1) != 0) {
          goto LABEL_158;
        }
        *(_BYTE*)(v72 + 284) = 0;
      }
      v74 = *((_QWORD*)v69 + 23);
      v75 = *((_QWORD*)v69 + 24);
      while (v74 != v75) {
        if (*(_BYTE*)(v74 + 8) == 1 && *(_DWORD*)(v74 + 4) == 5) {
          v77 = *(unsigned __int8*)(v74 + 16);
          *(_BYTE*)(v74 + 8) = 0;
          if (v77 == 1) {
            *(_BYTE*)(v74 + 16) = 0;
          }
        }
        v74 += 20;
      }
    LABEL_158:
      v78 = *((_QWORD*)v69 + 14);
      v79 = *(_QWORD*)(v78 + 248);
      *(_QWORD*)(v78 + 240) = 0;
      *(_QWORD*)(v78 + 248) = 0;
      if (v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79);
        GameRoutine_1a09c50(v79);
      }
    }
  }
  v80 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  if (v80 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80);
    GameRoutine_1a09c50(v80);
  }
  v81 = *v21;
  if (**v21 >= 1) {
    v82 = *((_QWORD*)v81 + 14);
    if (*(_BYTE*)(v82 + 44) == 1) {
      v83 = *((_QWORD*)v81 + 23) + 20LL * *(int*)(v82 + 40);
      if (*(_BYTE*)(v83 + 8) != 1 || (*(_BYTE*)(v83 + 16) & 1) != 0) {
        goto LABEL_179;
      }
      *(_BYTE*)(v82 + 44) = 0;
    }
    v85 = *((_QWORD*)v81 + 23);
    v84 = *((_QWORD*)v81 + 24);
    while (v85 != v84) {
      if (*(_BYTE*)(v85 + 8) == 1 && *(_DWORD*)(v85 + 4) == 0) {
        v87 = *(unsigned __int8*)(v85 + 16);
        *(_BYTE*)(v85 + 8) = 0;
        if (v87 == 1) {
          *(_BYTE*)(v85 + 16) = 0;
        }
      }
      v85 += 20;
    }
  }
LABEL_179:
  v88 = *v21;
  if (**v21 < 1) {
    goto LABEL_197;
  }
  v89 = *((_QWORD*)v88 + 14);
  if (*(_BYTE*)(v89 + 44) == 1) {
    v90 = *((_QWORD*)v88 + 23) + 20LL * *(int*)(v89 + 40);
    if (*(_BYTE*)(v90 + 8) != 1 || (*(_BYTE*)(v90 + 16) & 1) != 0) {
      goto LABEL_194;
    }
    *(_BYTE*)(v89 + 44) = 0;
  }
  v91 = *((_QWORD*)v88 + 23);
  v92 = *((_QWORD*)v88 + 24);
  while (v91 != v92) {
    if (*(_BYTE*)(v91 + 8) == 1 && *(_DWORD*)(v91 + 4) == 0) {
      v94 = *(unsigned __int8*)(v91 + 16);
      *(_BYTE*)(v91 + 8) = 0;
      if (v94 == 1) {
        *(_BYTE*)(v91 + 16) = 0;
      }
    }
    v91 += 20;
  }
LABEL_194:
  v95 = *((_QWORD**)v88 + 14);
  v96 = v95[1];
  *v95 = 0;
  v95[1] = 0;
  if (v96 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v96 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v96 + 16LL))(v96);
    GameRoutine_1a09c50(v96);
  }
LABEL_197:
  GameRoutine_649a00(*v7, a1 + 16);
  v97 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  if (v97 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v97 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v97 + 16LL))(v97);
    GameRoutine_1a09c50(v97);
  }
  result = *(_QWORD**)(a1 + 544);
  if (result == (_QWORD*)(a1 + 512)) {
    v99 = 32;
    goto LABEL_204;
  }
  if (result != nullptr) {
    v99 = 40;
  LABEL_204:
    result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v99))(result);
  }
  v100 = *(_QWORD*)(a1 + 504);
  if (v100 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v100 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v100 + 16LL))(v100);
    result = (_QWORD*)GameRoutine_1a09c50(v100);
  }
  v101 = *(_QWORD*)(a1 + 488);
  if (v101 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v101 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v101 + 16LL))(v101);
    result = (_QWORD*)GameRoutine_1a09c50(v101);
  }
  v102 = *(_QWORD*)(a1 + 472);
  if (v102 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v102 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v102 + 16LL))(v102);
    result = (_QWORD*)GameRoutine_1a09c50(v102);
  }
  v103 = *(_QWORD*)(a1 + 392);
  *(_QWORD*)(a1 + 392) = 0;
  if (v103 != 0) {
    GameRoutine_c65820(v103);
    v104 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v104 = 56;
    }
    result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v3 + v104, v103);
  }
  v105 = *(_QWORD*)(a1 + 384);
  *(_QWORD*)(a1 + 384) = 0;
  if (v105 != 0) {
    v106 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v106 = 56;
    }
    result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v3 + v106, v105);
  }
  v107 = *(_QWORD**)(a1 + 376);
  *(_QWORD*)(a1 + 376) = 0;
  if (v107 != nullptr) {
    v108 = v107[4];
    if (v108 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v108 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v108 + 16LL))(v108);
      GameRoutine_1a09c50(v108);
    }
    v109 = v107[2];
    v107[2] = 0;
    if (v109 != 0) {
      v110 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v110 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v3 + v110, v109);
    }
    v111 = v107[1];
    if (v111 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v111 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v111 + 16LL))(v111);
      GameRoutine_1a09c50(v111);
    }
    v112 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v112 = 56;
    }
    result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v3 + v112, v107);
  }
  v113 = *(_QWORD*)(a1 + 368);
  *(_QWORD*)(a1 + 368) = 0;
  if (v113 != 0) {
    GameRoutine_18dd060(v113);
    v114 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v114 = 56;
    }
    result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v3 + v114, v113);
  }
  v115 = *(_QWORD*)(a1 + 360);
  *(_QWORD*)(a1 + 360) = 0;
  if (v115 != 0) {
    GameRoutine_c4a820(v115);
    v116 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v116 = 56;
    }
    result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v3 + v116, v115);
  }
  v117 = *(_QWORD*)(a1 + 216);
  if (v117 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v117 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v117 + 16LL))(v117);
    result = (_QWORD*)GameRoutine_1a09c50(v117);
  }
  v118 = *(_QWORD*)(a1 + 192);
  if (v118 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v118 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v118 + 16LL))(v118);
    result = (_QWORD*)GameRoutine_1a09c50(v118);
  }
  v119 = *(_QWORD*)(a1 + 176);
  if (v119 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v119 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v119 + 16LL))(v119);
    result = (_QWORD*)GameRoutine_1a09c50(v119);
  }
  v120 = *(_QWORD*)(a1 + 160);
  if (v120 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v120 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v120 + 16LL))(v120);
    result = (_QWORD*)GameRoutine_1a09c50(v120);
  }
  v121 = *(_QWORD**)(a1 + 144);
  *(_QWORD*)(a1 + 144) = 0;
  if (v121 != nullptr) {
    v122 = v121[27];
    v121[27] = 0;
    if (v122 != 0) {
      GameRoutine_1943280(v122);
      v123 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v123 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v3 + v123, v122);
    }
    v124 = v121[24];
    if (v124 != 0) {
      v125 = *(_QWORD*)v3;
      v121[25] = v124;
      v126 = 128;
      if (*(_QWORD*)(v125 + 200) == 0) {
        v126 = 56;
      }
      GameRoutine_1a0a4e0(v125 + v126, v124);
    }
    v127 = v121[1];
    if (v127 != 0) {
      GameRoutine_1a09c50(v127);
    }
    v128 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v128 = 56;
    }
    result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v3 + v128, v121);
  }
  v129 = *(_QWORD*)(a1 + 120);
  if (v129 != 0) {
    v130 = *(_QWORD*)(a1 + 128);
    if (v129 == v130) {
      goto LABEL_291;
    }
    do {
      v131 = *(_QWORD*)(v130 - 40);
      v132 = v130;
      if (v131 != 0) {
        *(_QWORD*)(v130 - 32) = v131;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v133 = 128;
        }
        else {
          v133 = 56;
        }
        result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v3 + v133, v131);
      }
      v134 = *(_QWORD*)(v130 - 64);
      if (v134 != 0) {
        *(_QWORD*)(v130 - 56) = v134;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v135 = 128;
        }
        else {
          v135 = 56;
        }
        result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v3 + v135, v134);
      }
      v130 -= 96;
      if ((*(_BYTE*)(v132 - 96) & 1) != 0) {
        v136 = *(_QWORD*)(v132 - 80);
        if (v136 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v137 = 128;
          }
          else {
            v137 = 56;
          }
          result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v3 + v137, v136);
        }
      }
    } while (v130 != v129);
    v138 = *(_QWORD*)(a1 + 120);
    *(_QWORD*)(a1 + 128) = v129;
    v129 = v138;
    if (v138 != 0) {
    LABEL_291:
      v139 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v139 = 56;
      }
      result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v3 + v139, v129);
    }
  }
  v140 = *(_QWORD*)(a1 + 104);
  if (v140 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v140 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v140 + 16LL))(v140);
    result = (_QWORD*)GameRoutine_1a09c50(v140);
  }
  v141 = *(_QWORD*)(a1 + 88);
  if (v141 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v141 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v141 + 16LL))(v141);
    result = (_QWORD*)GameRoutine_1a09c50(v141);
  }
  v142 = *(_QWORD*)(a1 + 72);
  if (v142 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v142 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v142 + 16LL))(v142);
    result = (_QWORD*)GameRoutine_1a09c50(v142);
  }
  v143 = *(_QWORD*)(a1 + 56);
  if (v143 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v143 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v143 + 16LL))(v143);
    result = (_QWORD*)GameRoutine_1a09c50(v143);
  }
  v144 = *(_QWORD*)(a1 + 40);
  if (v144 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v144 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v144 + 16LL))(v144);
    result = (_QWORD*)GameRoutine_1a09c50(v144);
  }
  v145 = *(_QWORD*)(a1 + 24);
  if (v145 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v145 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v145 + 16LL))(v145);
    return (_QWORD*)GameRoutine_1a09c50(v145);
  }
  return result;
}

__int64 GameHr_b86660(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
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
  __int64 result;
  _QWORD v36[12];
  int v37;
  __int64 v38;
  __int64 v39;
  int v40;

  *(_BYTE*)(*(_QWORD*)(a1 + 16) + 48LL) = 1;
  v2 = *(_QWORD*)(a1 + 16);
  v3 = *(_QWORD*)(a1 + 24);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v36[10] = v2;
  v36[11] = v3;
  v4 = *(_QWORD*)(a1 + 184);
  v37 = 0;
  v38 = 0x200000001LL;
  v39 = 0x400000003LL;
  v40 = 5;
  GameRoutine_bb8650(v4);
  v5 = *(_QWORD**)(a1 + 152);
  v6 = v5[4];
  v7 = v5[5];
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD**)(a1 + 152);
  }
  v36[0] = v6;
  v36[1] = v7;
  v9 = v5[6];
  v8 = v5[7];
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD**)(a1 + 152);
  }
  v36[2] = v9;
  v36[3] = v8;
  v11 = v5[8];
  v10 = v5[9];
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD**)(a1 + 152);
  }
  v36[4] = v11;
  v36[5] = v10;
  v13 = v5[10];
  v12 = v5[11];
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  v36[6] = v13;
  v36[7] = v12;
  v14 = *(_QWORD*)(a1 + 208);
  v16 = *(_QWORD*)(v14 + 48);
  v15 = *(_QWORD*)(v14 + 56);
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
  }
  v36[8] = v16;
  v36[9] = v15;
  GameRoutine_b873c0(*(_QWORD*)(a1 + 184) + 1320LL, v36);
  v17 = *(_QWORD*)(a1 + 168);
  v18 = *(_QWORD*)(a1 + 184);
  v19 = *(_QWORD*)(v17 + 464);
  v20 = *(_QWORD*)(v17 + 472);
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                              memory_order_relaxed);
  }
  v21 = *(_QWORD*)(v18 + 1408);
  *(_QWORD*)(v18 + 1400) = v19;
  *(_QWORD*)(v18 + 1408) = v20;
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    GameRoutine_1a09c50(v21);
  }
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    GameRoutine_1a09c50(v20);
  }
  v22 = *(_QWORD*)(a1 + 208);
  v23 = *(_QWORD*)(a1 + 184);
  v24 = *(_QWORD*)(v22 + 64);
  v25 = *(_QWORD*)(v22 + 72);
  if (v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
  }
  v26 = *(_QWORD*)(v23 + 1440);
  *(_QWORD*)(v23 + 1432) = v24;
  *(_QWORD*)(v23 + 1440) = v25;
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    GameRoutine_1a09c50(v26);
  }
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    GameRoutine_1a09c50(v25);
  }
  v27 = *(_QWORD*)(a1 + 184);
  v28 = *(_QWORD*)(a1 + 464);
  v29 = *(_QWORD*)(a1 + 472);
  if (v29 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                              memory_order_relaxed);
  }
  v30 = *(_QWORD*)(v27 + 1600);
  *(_QWORD*)(v27 + 1592) = v28;
  *(_QWORD*)(v27 + 1600) = v29;
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    GameRoutine_1a09c50(v30);
  }
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    GameRoutine_1a09c50(v29);
  }
  v31 = *(_QWORD*)(a1 + 184);
  v33 = *(_QWORD*)(a1 + 496);
  v32 = *(_QWORD*)(a1 + 504);
  if (v32 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                              memory_order_relaxed);
  }
  v34 = *(_QWORD*)(v31 + 1616);
  *(_QWORD*)(v31 + 1608) = v33;
  *(_QWORD*)(v31 + 1616) = v32;
  if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
    GameRoutine_1a09c50(v34);
  }
  *(_BYTE*)(a1 + 228) = 1;
  *(_BYTE*)(a1 + 225) = 1;
  result = GameRoutine_b869a0(v36);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return GameRoutine_1a09c50(v3);
  }
  return result;
}

__int64 GameHr_b869a0(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(result + 72);
  v2 = (_QWORD*)result;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = GameRoutine_1a09c50(v1);
  }
  v3 = v2[7];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = GameRoutine_1a09c50(v3);
  }
  v4 = v2[5];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = GameRoutine_1a09c50(v4);
  }
  v5 = v2[3];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = GameRoutine_1a09c50(v5);
    v6 = v2[1];
    if (v6 == 0) {
      return result;
    }
  }
  else {
    v6 = v2[1];
    if (v6 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return GameRoutine_1a09c50(v6);
  }
  return result;
}

__int64 GameHr_b86ad0(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 360);
  result = *(_QWORD*)(v1 + 8);
  *(_DWORD*)(v1 + 48) = -1;
  *(_QWORD*)(v1 + 52) = 0;
  *(_DWORD*)(v1 + 80) = -1;
  *(_QWORD*)(v1 + 84) = 0;
  *(_DWORD*)(v1 + 92) = -1;
  *(_QWORD*)(v1 + 96) = 0;
  *(_BYTE*)(v1 + 192) = 0;
  *(_BYTE*)(v1 + 112) = 1;
  *(_OWORD*)(v1 + 32) = GameData_1a82c50;
  if (result != 0) {
    result = GameRoutine_1a0a0c0(result);
    if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
      v4 = result;
      (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      result = GameRoutine_1a09c50(v4);
    }
  }
  *(_BYTE*)(*(_QWORD*)(a1 + 392) + 24LL) = 1;
  if (*(_BYTE*)(a1 + 448) == 1) {
    *(_BYTE*)(a1 + 448) = 0;
  }
  v5 = *(_QWORD*)(a1 + 384);
  if (*(_BYTE*)(v5 + 16) == 1) {
    *(_BYTE*)(v5 + 16) = 0;
  }
  *(_BYTE*)(*(_QWORD*)(a1 + 208) + 1220LL) = 1;
  v6 = *(_QWORD*)(a1 + 480);
  if (*(_BYTE*)(v6 + 64) == 1) {
    *(_BYTE*)(v6 + 64) = 0;
  }
  return result;
}

__int64 GameHr_b86bc0(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64*** v11;
  __int64*** v12;
  char v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v5 = *(_QWORD*)(a1 + 16);
  v4 = *(_QWORD*)(a1 + 24);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v8 = GameRoutine_1a0a0c0(v4);
  result = GameRoutine_1a09c50(v4);
  v10 = *(_QWORD*)(v5 + 288);
  v11 = *(__int64****)(v10 + 888);
  v12 = *(__int64****)(v10 + 896);
  if (v11 != v12) {
    v13 = a3 & 1;
    do {
      v14 = **v11;
      v15 = (*v11)[1];
      while (v14 != v15) {
        v16 = *(_QWORD*)(*v14 + 120);
        result = GameRoutine_1a0ab60();
        v17 = *v14;
        if (result != 0) {
          v18 = result;
        }
        else {
          v18 = v16;
        }
        if (((a4 ^ (v18 == *(_QWORD*)(v17 + 120))) & 1) == 0) {
          *(_BYTE*)(v17 + 92) = v13;
          *(_BYTE*)(*v14 + 93) = v13;
        }
        v14 += 2;
      }
      v11 += 2;
    } while (v11 != v12);
  }
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return GameRoutine_1a09c50(v8);
  }
  return result;
}

__int64 GameHr_b86d00(__int64 a1, float a2, __int64 a3, int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v9;
  __int64*** v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64*** i;

  v4 = *(_QWORD*)(a1 + 16);
  v5 = *(_QWORD*)(a1 + 24);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                            memory_order_relaxed);
  v17 = GameRoutine_1a0a0c0(v5);
  result = GameRoutine_1a09c50(v5);
  v9 = *(_QWORD*)(v4 + 288);
  v10 = *(__int64****)(v9 + 888);
  for (i = *(__int64****)(v9 + 896); v10 != i; v10 += 2) {
    v11 = **v10;
    v12 = (*v10)[1];
    while (v11 != v12) {
      v13 = *v11;
      v14 = v11[1];
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                  memory_order_relaxed);
      }
      v15 = *(_QWORD*)(v13 + 120);
      result = GameRoutine_1a0ab60();
      if (result != 0) {
        v16 = result;
      }
      else {
        v16 = v15;
      }
      if (((a4 ^ (v16 == *(_QWORD*)(v13 + 120))) & 1) == 0) {
        *(float*)(v13 + 72) = a2;
      }
      if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        result = GameRoutine_1a09c50(v14);
      }
      v11 += 2;
    }
  }
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    return GameRoutine_1a09c50(v17);
  }
  return result;
}

_DWORD* GameHr_b86ea0(_DWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _DWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v3 = *a2;
  v2 = a2[1];
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v4 = *((_QWORD*)result + 63);
  *((_QWORD*)result + 62) = v3;
  *((_QWORD*)result + 63) = v2;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v5 = result;
    v6 = a2;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    GameRoutine_1a09c50(v4);
    result = v5;
    a2 = v6;
  }
  *((_BYTE*)result + 352) = *a2 != 0;
  v7 = *((_QWORD*)result + 23);
  if (v7 != 0 && (unsigned int)((*(_QWORD*)(*(_QWORD*)result + 32LL) -
                                 *(_QWORD*)(*(_QWORD*)result + 24LL)) >>
                                3) -
                         1 ==
                     result[2]) {
    v9 = *a2;
    v8 = a2[1];
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
    v10 = *(_QWORD*)(v7 + 1616);
    *(_QWORD*)(v7 + 1608) = v9;
    *(_QWORD*)(v7 + 1616) = v8;
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      return (_DWORD*)GameRoutine_1a09c50(v10);
    }
  }
  return result;
}

__int64 GameHr_b87160(__int64 result, char a2, unsigned int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  __int64 v14;

  if (a3 >= 3) {
    GameRoutine_60a250("bitset set argument out of range");
  }
  v3 = 1LL << a3;
  if ((a2 & 1) != 0) {
    v4 = *(_QWORD*)(result + 112) | v3;
  }
  else {
    v4 = *(_QWORD*)(result + 112) & ~v3;
  }
  *(_QWORD*)(result + 112) = v4;
  v5 = *(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL);
  v6 = *(_QWORD*)(v5 + 24);
  v7 = *(_QWORD*)(v5 + 32);
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  v9 = *(_QWORD*)(v6 + 368);
  v8 = *(_QWORD*)(v6 + 376);
  v10 = v8;
  v11 = v8;
  while (v11 != v9) {
    v12 = *(_QWORD*)(v11 - 24);
    v11 -= 24;
    v10 -= 24;
    if (*(char**)(v12 + 8) == GameData_2132380) {
      if (v8 != v10) {
        v13 = *(_BYTE**)(v10 + 16);
        if (v13 != nullptr) {
          if ((*(_BYTE*)(result + 112) & 7) != 0) {
            if (v13[8] != 0) {
              v14 = *(_QWORD*)v13;
              v13[8] = 0;
              result = (*(__int64 (**)(_BYTE*))(v14 + 48))(v13);
            }
          }
          else if ((v13[8] & 1) == 0) {
            v13[8] = 1;
            result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v13 + 40LL))(v13);
          }
        }
      }
      break;
    }
  }
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    return GameRoutine_1a09c50(v7);
  }
  return result;
}

bool GameHr_b872a0(__int64 a1)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  int v10;
  float v11;

  v1 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 304LL);
  v2 = *(_QWORD*)(GameData_21a60d8 + 13224);
  if (v1 == -1) {
    v5 = 0;
    v4 = *(_QWORD*)(v2 + 48);
    v6 = *(_QWORD*)(v2 + 56);
    if (v6 == 0) {
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v3 = v2 + 1560LL * v1;
  v4 = *(_QWORD*)(v3 + 1752);
  v5 = *(_QWORD*)(v3 + 1760);
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  v6 = v5;
  if (v4 == 0) {
    v4 = *(_QWORD*)(v2 + 48);
    v6 = *(_QWORD*)(v2 + 56);
    if (v6 == 0) {
    LABEL_7:
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        GameRoutine_1a09c50(v5);
      }
      goto LABEL_10;
    }
  LABEL_6:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    goto LABEL_7;
  }
LABEL_10:
  v7 = **(_QWORD**)(v4 + 8);
  v8 = *(float*)(v7 + 332);
  v9 = *(float*)(v7 + 368);
  v10 = *(unsigned __int8*)(v7 + 336);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    GameRoutine_1a09c50(v6);
  }
  if (v10 != 0) {
    v11 = v8;
  }
  else {
    v11 = v9;
  }
  return v11 >= 1.0;
}

_QWORD* GameHr_b873c0(_QWORD* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
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
  __int64 v18;

  v3 = *a2;
  v2 = a2[1];
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v6 = a1[1];
  *a1 = v3;
  a1[1] = v2;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    GameRoutine_1a09c50(v6);
  }
  v8 = a2[2];
  v7 = a2[3];
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  v9 = a1[3];
  a1[2] = v8;
  a1[3] = v7;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    GameRoutine_1a09c50(v9);
  }
  v11 = a2[4];
  v10 = a2[5];
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  v12 = a1[5];
  a1[4] = v11;
  a1[5] = v10;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    GameRoutine_1a09c50(v12);
  }
  v14 = a2[6];
  v13 = a2[7];
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  v15 = a1[7];
  a1[6] = v14;
  a1[7] = v13;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    GameRoutine_1a09c50(v15);
  }
  v17 = a2[8];
  v16 = a2[9];
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
  }
  v18 = a1[9];
  a1[8] = v17;
  a1[9] = v16;
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    GameRoutine_1a09c50(v18);
  }
  return a1;
}

_QWORD* GameHr_b87610(__int64* a1, _QWORD* a2, __int64* a3)
{
  _QWORD* result;
  _QWORD* v5;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v5 = (_QWORD*)*a1;
  result = (_QWORD*)a1[1];
  if (v5 == result &&
      0xAAAAAAAAAAAAAAABLL * ((a1[2] - (__int64)v5) >> 3) <= 6) {
    v8 = GameData_212bf68;
    result =
        (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 168, 16, 0);
    *a1 = (__int64)result;
    a1[1] = (__int64)result;
    a1[2] = (__int64)(result + 21);
    if (v5 != nullptr) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v9 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v8 + v9, v5);
      result = (_QWORD*)a1[1];
    }
  }
  v10 = a1[2];
  if ((unsigned __int64)result >= v10) {
    v14 = *a1;
    v15 = (__int64)result - *a1;
    v16 = 1 - 0x5555555555555555LL * (v15 >> 3);
    if (v16 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_a864d0();
    }
    v17 = GameData_212bf68;
    v18 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v10 - v14) >> 3);
    if (2 * v18 > v16) {
      v16 = 2 * v18;
    }
    if (v18 >= 0x555555555555555LL) {
      v19 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v19 = v16;
    }
    if (v19 != 0) {
      if (v19 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v20 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 24 * v19, 16, 0);
    }
    else {
      v20 = 0;
    }
    v21 = (_QWORD*)(v20 + v15);
    v22 = a2[1];
    *v21 = *a2;
    v21[1] = v22;
    v23 = *a3;
    v13 = v20 + v15 + 24;
    v21[2] = v23;
    result = (_QWORD*)GameRoutine_1a0b950(v20, v14, v15);
    *a1 = v20;
    a1[1] = v13;
    a1[2] = v20 + 24 * v19;
    if (v14 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
        v24 = 56;
      }
      result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v17 + v24, v14);
    }
  }
  else {
    v11 = a2[1];
    *result = *a2;
    result[1] = v11;
    v12 = *a3;
    v13 = (__int64)(result + 3);
    result[2] = v12;
  }
  a1[1] = v13;
  return result;
}

__int64 GameHr_b87860(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 128) = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a1 + 120) = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  GameRoutine_bf9b40(a1 + 56);
  v5 = a1 + 32;
  return GameRoutine_bf88a0(&v5);
}

__int64 GameHr_b87970(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  result = GameRoutine_1a09f60(a1 + 160);
  v3 = *(_QWORD*)(a1 + 48);
  if (v3 != 0) {
    *(_QWORD*)(a1 + 56) = v3;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v4 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4, v3);
  }
  return result;
}

__int64 GameHr_b87ec0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(result + 24);
  v2 = result;
  *(_QWORD*)(result + 24) = 0;
  if (v1 != 0) {
    GameRoutine_6040f0(v1 + 80, *GameData_212c010[0] + 568);
    GameRoutine_604050(v1 + 80);
    v3 = *(_QWORD*)(v1 + 32);
    *(_QWORD*)(v1 + 32) = 0;
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
    }
    v4 = *(_QWORD*)(v1 + 24);
    *(_QWORD*)(v1 + 24) = 0;
    if (v4 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
    }
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v5 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5, v1);
  }
  v6 = *(_QWORD*)(v2 + 16);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return GameRoutine_1a09c50(v6);
  }
  return result;
}

__int64 GameHr_b885a0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 result;

  v4 = *(_QWORD**)a2;
  v6 = **(__int64***)(a1 + 8);
  v7 = v6[65];
  v8 = v6[66];
  v9 = *v6;
  v10 = v6[1];
  v11 = v6[9];
  v12 = v6[15];
  v13 = v6[7];
  *v4 = GameRoutine_b4a3f0(a3, v6[63]);
  v4[1] = GameRoutine_b4a3f0(a3, v7);
  v4[2] = GameRoutine_b4a3f0(a3, v8);
  v4[3] = GameRoutine_b48f90(a3, v12);
  v14 = *(_QWORD**)(a2 + 8);
  *v14 = GameRoutine_b48e70(a3, v9);
  v14[3] = GameRoutine_b4a510(a3, v10);
  v14[1] = GameRoutine_b48e70(a3, v13);
  result = GameRoutine_b48e70(a3, v11);
  v14[2] = result;
  return result;
}

__int64 GameHr_b88790(__int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD* v3;
  __int64* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  float v12;
  __int64 v13;
  __int64 v14;
  float v15;
  bool v16;
  int v17;
  __int64 v18;
  float* v19;
  float v20;
  float v21;
  __int64 v23;
  float v24;
  __int64 v25;

  v3 = *(_QWORD**)(a1 + 8);
  v6 = (__int64*)(*v3 + 13304LL);
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v6 = (__int64*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v7 = *v6;
  v8 = HIDWORD(*v6);
  v23 = *v6;
  v9 = GameRoutine_1a09bb0(*(_QWORD*)(GameData_2265ae0 + 128));
  v11 = *(_QWORD**)a2;
  v10 = *(_QWORD**)(a2 + 8);
  v12 = (float)(v9 / 1000000);
  v13 = v3[1];
  v14 = v3[3];
  v15 = v12 / 1000.0;
  v25 = v13;
  LODWORD(v13) = *(_DWORD*)(v14 + 40);
  v16 = (int)v13 < -1;
  v17 = ((_BYTE)v13 + 1) & 1;
  if (v16) {
    v17 = -v17;
  }
  *(_DWORD*)(v14 + 40) = v17;
  v24 = v12 / 1000.0;
  v18 = *(_QWORD*)(v14 + 8LL * v17 + 24);
  v19 = (float*)(*(__int64 (**)(__int64))(*(_QWORD*)v18 + 56LL))(v18);
  v19[2] = v15;
  v20 = 1.0 / (float)(int)v7;
  v21 = 1.0 / (float)(int)v8;
  if ((_DWORD)v7 == 0) {
    v20 = 0.0;
  }
  if (v8 == 0) {
    v21 = 0.0;
  }
  *v19 = v20;
  v19[1] = v21;
  (*(void (**)(__int64))(*(_QWORD*)v18 + 64LL))(v18);
  return GameRoutine_b4a7c0(v14, v11, v10, a3, (unsigned int*)&v23);
}

__int64 GameHr_ba96c0(__int64 a1, _QWORD** a2, __int64 a3)
{
  _QWORD* v4;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 result;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  char v19;
  int v20;

  v6 = **(_QWORD**)(a1 + 8);
  v7 = *(unsigned __int8*)(v6 + 16700);
  v8 = *(_QWORD*)(v6 + 16672);
  v9 = (__int64*)(v6 + 13304);
  v10 = (__int64*)(v8 + 24);
  if (v7 != 0) {
    v9 = v10;
  }
  v11 = *v9;
  v12 = HIDWORD(*v9);
  v4 = *a2;
  *v4 = GameRoutine_b48f90(a3, ***(_QWORD***)(a1 + 16));
  v20 = 0;
  v16 = v11;
  v17 = v12;
  v13 = a2[1];
  v15 = 0x1400000000LL;
  v18 = 0x100000001LL;
  v19 = 1;
  result = GameRoutine_b53d40(a3, "RadialBlurDst", &v15);
  *v13 = result;
  return result;
}

__int64 GameHr_bad460(__int64 a1, __int64 a2, __int64* a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  int v12;
  int v13;
  __int64 v14;
  bool v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64 result;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  char v25;
  char v26;
  int v27;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_QWORD*)(a2 + 24);
  v26 = 0;
  *(_BYTE*)(*v3 + 16700LL) = 0;
  v7 = *v3;
  v8 = v3[7];
  v9 = v3[19];
  v10 = *(_QWORD**)a2;
  v11 = *(_QWORD**)(a2 + 8);
  v12 = *(_DWORD*)(*v3 + 13312LL);
  v13 = *(_DWORD*)(*v3 + 13316LL);
  v25 = *(_BYTE*)(v4 + 120);
  LODWORD(v4) = *(unsigned __int8*)(v7 + 16700);
  v14 = *(_QWORD*)(v8 + 1220);
  v21 = v12;
  v22 = v13;
  v15 = (_DWORD)v4 == 0;
  v16 = (__int64*)(v7 + 13304);
  v17 = *(_QWORD*)(v7 + 16672);
  v18 = (__int64*)(v17 + 24);
  v20 = v17;
  if (v15) {
    v18 = v16;
  }
  v23 = *v18;
  v24 = v14;
  v27 = 1065353216;
  ((void (*)(__int64, __int64))*GameData_212e738)(*a3 + 8, 49);
  result = GameRoutine_b5a9c0(v9, v10, v11, a3, (int*)&v20);
  *(_BYTE*)(*v3 + 16700LL) = 1;
  **(_BYTE**)(a1 + 16) = 1;
  return result;
}

__int64 GameHr_bad890(__int64 a1, __int64** a2, __int64 a3)
{
  __int64 v3;
  int v6;
  __int64 result;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  char v12;
  int v13;

  v3 = *(_QWORD*)(a1 + 16);
  **a2 = GameRoutine_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  v11 = 0x100000001LL;
  v13 = 0;
  v8 = 0x1500000000LL;
  v12 = 1;
  v6 = *(_DWORD*)(*(_QWORD*)v3 + 13316LL);
  v9 = *(_DWORD*)(*(_QWORD*)v3 + 13312LL);
  v10 = v6;
  result = GameRoutine_b60f30(a3, "FullDepth", &v8);
  *a2[1] = result;
  return result;
}

__int64 GameHr_bb4d60(__int64 a1, __int64* a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v21[33];
  int v22;
  int v23;
  int v24;
  int v25;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(v3 + 104);
  v24 = *(_DWORD*)(v4 + 180);
  v5 = *(_DWORD*)(v4 + 232);
  v25 = v5;
  v21[0] = *(_QWORD*)(v3 + 8);
  if (v24 >= 1) {
    v6 = *(__int64**)(v3 + 72);
    v7 = *(_QWORD*)(v4 + 208);
    v8 = 0;
    do {
      v9 = *v6;
      v6 += 2;
      v10 = &v21[v8];
      v11 = 8 * v8++;
      v10[17] = v9;
      v10[1] = *(_QWORD*)(v7 + v11);
    } while (v8 < v24);
    v5 = v25;
  }
  if (v5 >= 1) {
    v12 = *(__int64**)(v3 + 88);
    v13 = *(_QWORD*)(v4 + 264);
    v14 = 0;
    do {
      v15 = *v12;
      v12 += 2;
      v16 = &v21[v14];
      v17 = 8 * v14++;
      v16[25] = v15;
      v16[9] = *(_QWORD*)(v13 + v17);
    } while (v14 < v25);
  }
  v18 = *a2;
  v19 = a2[1];
  v22 = *(_DWORD*)(v3 + 144);
  v23 = *(_DWORD*)(v3 + 148);
  return GameRoutine_b6c7b0(v18, v19, a3, (__int64)v21);
}

__int64 GameHr_bbc460(__int64 result, char a2)
{
  char v2;
  __int64 v3;
  _BOOL4 v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  char v8;
  __int64 v9;
  _QWORD v10[2];
  char* v11;
  __int64* v12;

  v2 = a2 & 1;
  if (*(_BYTE*)(result + 1668) != (a2 & 1)) {
    v3 = result;
    v4 = (a2 & 1) == 0;
    v5 = *(_QWORD*)(*GameData_212c010[0] + 13232);
    v6 = GameData_212bf68;
    v7 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 32, 16, 0);
    v10[0] = 33;
    v10[1] = 24;
    v11 = v7;
    strcpy(v7, "co_disable_depth_prepass");
    v12 = v10;
    result = GameRoutine_a93ea0((float*)v5, (unsigned __int8*)v10,
                                (__int64)GameData_212c028, &v12);
    v8 = v10[0];
    *(_DWORD*)(result + 40) = v4;
    if ((v8 & 1) != 0 && v11 != nullptr) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v9 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)v6 + v9, v11);
    }
    *(_BYTE*)(v5 + 40) = 1;
    *(_BYTE*)(v3 + 1668) = v2;
  }
  return result;
}

__int64 GameHr_bbc730(_QWORD* a1, __int64 a2, unsigned __int64 a3, __int64* a4)
{
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;

  v8 = (_QWORD*)GameData_212bf68;
  v9 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 48, 16, 0);
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v9, v10, v11);
  }
  v12 = *a4;
  v13 = v9;
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (a3 | 7) + 1;
    }
    v14 = GameRoutine_651b90(*v8, v15, 16, 0);
    *(_QWORD*)(v13 + 16) = a3;
    *(_QWORD*)(v13 + 24) = v14;
    *(_QWORD*)(v13 + 8) = v15 | 1;
    goto LABEL_9;
  }
  v14 = v9 + 9;
  *(_BYTE*)(v9 + 8) = 2 * a3;
  if (a3 != 0) {
  LABEL_9:
    v9 = GameRoutine_1a0b940(v14, a2, a3);
  }
  *(_BYTE*)(v14 + a3) = 0;
  *(_QWORD*)(v13 + 40) = v12;
  *(_BYTE*)(v13 + 32) = 1;
  *(_QWORD*)v13 = GameData_1fcef08;
  v17 = (__int64*)a1[4];
  v16 = a1[5];
  if ((unsigned __int64)v17 >= v16) {
    v19 = a1[3];
    v20 = (char*)v17 - v19;
    v21 = ((__int64)v17 - v19) >> 3;
    v22 = v21 + 1;
    if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
      GameRoutine_b32fb0(v9);
    }
    v23 = v16 - v19;
    if (v23 >> 2 > v22) {
      v22 = v23 >> 2;
    }
    if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v22;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        GameRoutine_60a210(v9);
      }
      v25 = GameRoutine_651b90(*v8, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v27 = (char*)v17 - v19;
    v28 = (__int64)&v20[v25 + -8 * v21];
    *(_QWORD*)&v20[v25] = v13;
    v18 = (__int64)&v20[v25 + 8];
    GameRoutine_1a0b950(v28, v19, v27);
    a1[3] = v28;
    a1[4] = v18;
    a1[5] = v26;
    if (v19 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v8 + 200LL) == 0) {
        v29 = 56;
      }
      GameRoutine_1a0a4e0(*v8 + v29, v19);
    }
  }
  else {
    *v17 = v13;
    v18 = (__int64)(v17 + 1);
  }
  a1[4] = v18;
  return *(_QWORD*)(v18 - 8);
}

__int64 GameHr_bbc900(_QWORD* a1, __int64 a2, unsigned __int64 a3, __int64* a4)
{
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;

  v8 = (_QWORD*)GameData_212bf68;
  v9 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 48, 16, 0);
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v9, v10, v11);
  }
  v12 = *a4;
  v13 = v9;
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (a3 | 7) + 1;
    }
    v14 = GameRoutine_651b90(*v8, v15, 16, 0);
    *(_QWORD*)(v13 + 16) = a3;
    *(_QWORD*)(v13 + 24) = v14;
    *(_QWORD*)(v13 + 8) = v15 | 1;
    goto LABEL_9;
  }
  v14 = v9 + 9;
  *(_BYTE*)(v9 + 8) = 2 * a3;
  if (a3 != 0) {
  LABEL_9:
    v9 = GameRoutine_1a0b940(v14, a2, a3);
  }
  *(_BYTE*)(v14 + a3) = 0;
  *(_QWORD*)(v13 + 40) = v12;
  *(_BYTE*)(v13 + 32) = 1;
  *(_QWORD*)v13 = GameData_1fcef58;
  v17 = (__int64*)a1[4];
  v16 = a1[5];
  if ((unsigned __int64)v17 >= v16) {
    v19 = a1[3];
    v20 = (char*)v17 - v19;
    v21 = ((__int64)v17 - v19) >> 3;
    v22 = v21 + 1;
    if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
      GameRoutine_b32fb0(v9);
    }
    v23 = v16 - v19;
    if (v23 >> 2 > v22) {
      v22 = v23 >> 2;
    }
    if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v22;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        GameRoutine_60a210(v9);
      }
      v25 = GameRoutine_651b90(*v8, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v27 = (char*)v17 - v19;
    v28 = (__int64)&v20[v25 + -8 * v21];
    *(_QWORD*)&v20[v25] = v13;
    v18 = (__int64)&v20[v25 + 8];
    GameRoutine_1a0b950(v28, v19, v27);
    a1[3] = v28;
    a1[4] = v18;
    a1[5] = v26;
    if (v19 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v8 + 200LL) == 0) {
        v29 = 56;
      }
      GameRoutine_1a0a4e0(*v8 + v29, v19);
    }
  }
  else {
    *v17 = v13;
    v18 = (__int64)(v17 + 1);
  }
  a1[4] = v18;
  return *(_QWORD*)(v18 - 8);
}

__int64 GameHr_bbcad0(_QWORD* a1, __int64 a2, unsigned __int64 a3, __int64* a4)
{
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;
  __int64 v29;
  __int64 v30;

  v8 = (_QWORD*)GameData_212bf68;
  v9 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 80, 16, 0);
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v9, v10, v11);
  }
  v12 = *a4;
  v13 = v9;
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (a3 | 7) + 1;
    }
    v14 = GameRoutine_651b90(*v8, v15, 16, 0);
    *(_QWORD*)(v13 + 16) = a3;
    *(_QWORD*)(v13 + 24) = v14;
    *(_QWORD*)(v13 + 8) = v15 | 1;
    goto LABEL_9;
  }
  v14 = v9 + 9;
  *(_BYTE*)(v9 + 8) = 2 * a3;
  if (a3 != 0) {
  LABEL_9:
    v9 = GameRoutine_1a0b940(v14, a2, a3);
  }
  *(_BYTE*)(v14 + a3) = 0;
  *(_BYTE*)(v13 + 32) = 1;
  v16 = GameData_212e768;
  *(_BYTE*)(v13 + 72) = 1;
  v18 = (__int64*)a1[4];
  v17 = a1[5];
  *(_QWORD*)(v13 + 40) = v12;
  *(_QWORD*)(v13 + 48) = 0;
  *(_DWORD*)(v13 + 76) = 0;
  *(_QWORD*)v13 = v16 + 2;
  *(_QWORD*)(v13 + 56) = 0x100000001LL;
  *(_QWORD*)(v13 + 64) = 0x100000001LL;
  if ((unsigned __int64)v18 >= v17) {
    v20 = a1[3];
    v21 = (char*)v18 - v20;
    v22 = ((__int64)v18 - v20) >> 3;
    v23 = v22 + 1;
    if ((unsigned __int64)(v22 + 1) >> 61 != 0) {
      GameRoutine_b32fb0(v9);
    }
    v24 = v17 - v20;
    if (v24 >> 2 > v23) {
      v23 = v24 >> 2;
    }
    if ((unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL) {
      v25 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v25 = v23;
    }
    if (v25 != 0) {
      if (v25 >> 61 != 0) {
        GameRoutine_60a210(v9);
      }
      v26 = GameRoutine_651b90(*v8, 8 * v25, 16, 0);
    }
    else {
      v26 = 0;
    }
    v27 = v26 + 8 * v25;
    v28 = (char*)v18 - v20;
    v29 = (__int64)&v21[v26 + -8 * v22];
    *(_QWORD*)&v21[v26] = v13;
    v19 = (__int64)&v21[v26 + 8];
    GameRoutine_1a0b950(v29, v20, v28);
    a1[3] = v29;
    a1[4] = v19;
    a1[5] = v27;
    if (v20 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*v8 + 200LL) == 0) {
        v30 = 56;
      }
      GameRoutine_1a0a4e0(*v8 + v30, v20);
    }
  }
  else {
    *v18 = v13;
    v19 = (__int64)(v18 + 1);
  }
  a1[4] = v19;
  return *(_QWORD*)(v19 - 8);
}

__int64 GameHr_bbcfd0(__int64 a1, __int64 a2, _QWORD* a3)
{
  return (*(__int64 (**)(__int64, __int64))GameData_212e938)(*a3 + 8LL, 1);
}

#pragma GCC visibility pop
