#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fd4cf8[21])();

extern __int64 (*GameData_1fd4d30[14])();

extern __int64 (*GameData_1fd4db0[])();

extern __int64 (*GameData_1fd5528[])();

extern __int64 (*GameData_1fd59c8[])();

extern __int64 (*GameData_1fd5a98[])();

extern __int64 (*GameData_209d8c0[])();

extern __int64 (*GameData_209dd28[])();

extern __int64 (*GameData_209ddf8[])();

extern __int64 GameData_212bf68;

extern __int64* GameData_212c010[3];

extern __int64* GameData_212c330[2];

extern __int64* GameData_212c370;

extern __int64 GameData_212c638;

extern __int64* GameData_212d458[7];

extern __int64 GameData_212dbc0[8];

extern char GameData_2174af0;

extern __int64 GameData_21a6070;

extern __int64 GameData_21c9608;

extern __int64 GameData_21f3c98;

extern __int64 GameData_21f3d10;

extern __int64 GameData_220b6f8;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_10c8e20(void);

__int64 GameRoutine_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD);

_QWORD* GameRoutine_1a0a790(_QWORD* __return_ptr, _QWORD);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);

__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_634d80(_QWORD);

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_688200(_QWORD);

void __attribute__((noreturn)) GameRoutine_919020(_QWORD);

_QWORD* GameRoutine_a8ed00(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a908c0(_QWORD, _QWORD);

bool GameRoutine_c13be0(__int64, __int64, __int64, __int64, char);

__int64 GameRoutine_c702b0(__int64, int, __int64, unsigned __int64);

__int64 GameRoutine_c71600(__int64, int, __int64, unsigned __int64, __int64,
                           unsigned __int64);

_QWORD* GameRoutine_ca8f80(_QWORD*);

__int64 GameRoutine_caaee0(__int64 result, int, char);

__int64 GameRoutine_cab670(__int64 result);

__int64 GameRoutine_cab8c0(__int64 result);

__int64 GameRoutine_cac2c0(__int64 result, int);

__int64 GameRoutine_cb12a0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_cb40c0(__int64*, __int64);

_QWORD* GameRoutine_cb4210(_QWORD*, __int64*);

__int64 GameRoutine_cb4e70(_QWORD, _QWORD);

__int64 GameRoutine_cba3a0(__int64, __int64*);

__int64 GameRoutine_ce5c00(void);

__int64 GameRoutine_ceca80(_QWORD, _QWORD, _QWORD);

_QWORD* GameRoutine_d2b820(_QWORD* __return_ptr, _QWORD);

__int64 GameRoutine_d6f4f0(_QWORD);

__int64 GameRoutine_d6f8d0(_QWORD);

__int64 GameRoutine_d85af0(_QWORD);

__int64 GameRoutine_d8e140(_QWORD);

__int64 GameRoutine_d8ec60(_QWORD);

__int64 GameRoutine_f60e40(_QWORD);

__int64 GameRoutine_fa2110(_QWORD);

char* GameHr_c71860(__int64 a1, int a2, unsigned int a3)
{
  char* result;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  unsigned __int64 v13;
  int v14;
  char v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  char* v19;
  char* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64* v23;
  unsigned __int64 v24;
  bool v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;
  unsigned __int64 v31;
  char v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  char* v36;
  unsigned __int64 v37;
  char* v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  int v43;
  unsigned __int64 v44;
  bool v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  char* v50;
  unsigned __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  char v55;
  __int64 v56;
  char v57;
  __int64 v58;
  char v59;
  __int64 v60;
  __int64 v61;
  char* v62;
  char* v63;
  char* v64;
  unsigned __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  bool v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  char* v73;
  unsigned __int64 v74;
  char v75;
  __int64 v76;
  __int64 v77;
  char* v78;
  char* v79;
  unsigned __int64 v80;
  char* v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  int v86;
  unsigned __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  char* v91;
  unsigned __int64 v92;
  char v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  char* v98;
  unsigned __int64 v99;
  int v100;
  char v101;
  __int64 v102;
  __int64 v103;
  char* v104;
  char* v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  char* v108;
  bool v109;
  unsigned __int64 v110;
  __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  char v114;
  __int64 v115;
  __int64 v116;
  char* v117;
  char* v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64 v121;
  char* v122;
  char* v123;
  char* v124;
  unsigned __int64 v125;
  __int64* v126;
  __int64 v127;
  unsigned __int64 v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  bool v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  __int64 v134;
  unsigned __int64 v135;
  char* v136;
  unsigned __int64 v137;
  int v138;
  char v139;
  __int64 v140;
  __int64 v141;
  char* v142;
  char* v143;
  char* v144;
  unsigned __int64 v145;
  __int64 v146;
  __int64 v147;
  int v148;
  int v149;
  __int64 v150;
  __int64 v151;
  unsigned __int64 v152;
  char* v153;
  __int64 v154;
  unsigned __int64 v155;
  char* v156;
  __int64 v157;
  unsigned __int64 v158;
  char* v159;

  result = (char*)GameRoutine_1a0a790(&v157, a3);
  v6 = *(unsigned __int8*)(a1 + 376);
  v7 = (v6 & 1) == 0;
  v8 = v6 >> 1;
  if (v7) {
    v9 = v8;
  }
  else {
    v9 = *(_QWORD*)(a1 + 384);
  }
  if (v7) {
    v10 = a1 + 377;
  }
  else {
    v10 = *(_QWORD*)(a1 + 392);
  }
  if ((v157 & 1) != 0) {
    v11 = v158;
  }
  else {
    v11 = (unsigned __int64)(unsigned __int8)v157 >> 1;
  }
  if ((v157 & 1) != 0) {
    v12 = v159;
  }
  else {
    v12 = (char*)&v157 + 1;
  }
  v13 = v11 + v9;
  if (v11 + v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_333;
  }
  v14 = *(_DWORD*)(a1 + 496);
  v149 = a2;
  if (v13 > 0x16) {
    if ((v13 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v13 | 7) + 1;
    }
    v16 = GameRoutine_651b90(GameData_2265ee0, v17, 16, 0);
    v155 = v11 + v9;
    v156 = (char*)v16;
    v154 = v17 | 1;
    v15 = v17 | 1;
  }
  else {
    v15 = 2 * v13;
    v16 = 0;
    v155 = 0;
    v156 = nullptr;
    v154 = (unsigned __int8)(2 * v13);
  }
  if ((v15 & 1) != 0) {
    v18 = (char*)v16;
  }
  else {
    v18 = (char*)&v154 + 1;
  }
  v150 = a1 + 576;
  if (v9 != 0) {
    GameRoutine_1a0b940(v18, v10, v9);
  }
  v19 = &v18[v9];
  if (v11 != 0) {
    GameRoutine_1a0b940(v19, v12, v11);
  }
  v19[v11] = 0;
  if ((v154 & 1) != 0) {
    v20 = v156;
  }
  else {
    v20 = (char*)&v154 + 1;
  }
  if ((v154 & 1) != 0) {
    v21 = v155;
  }
  else {
    v21 = (unsigned __int64)(unsigned __int8)v154 >> 1;
  }
  result = (char*)GameRoutine_c702b0(v150, v14, (__int64)v20, v21);
  if ((v154 & 1) != 0 && v156 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v22 = 56;
    }
    result = (char*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v22);
  }
  v23 = GameData_212c010[0];
  if ((*(_DWORD*)(a1 + 500) & 0x80000000) == 0) {
    v24 = *(unsigned __int8*)(a1 + 400);
    v25 = (v24 & 1) == 0;
    v26 = v24 >> 1;
    if (v25) {
      v27 = v26;
    }
    else {
      v27 = *(_QWORD*)(a1 + 408);
    }
    if (v25) {
      v28 = a1 + 401;
    }
    else {
      v28 = *(_QWORD*)(a1 + 416);
    }
    if ((v157 & 1) != 0) {
      v29 = v158;
    }
    else {
      v29 = (unsigned __int64)(unsigned __int8)v157 >> 1;
    }
    if ((v157 & 1) != 0) {
      v30 = v159;
    }
    else {
      v30 = (char*)&v157 + 1;
    }
    v31 = v29 + v27;
    if (v29 + v27 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_333;
    }
    if (v31 > 0x16) {
      if ((v31 | 7) == 0x17) {
        v34 = 26;
      }
      else {
        v34 = (v31 | 7) + 1;
      }
      v33 = GameRoutine_651b90(GameData_2265ee0, v34, 16, 0);
      v155 = v29 + v27;
      v156 = (char*)v33;
      v154 = v34 | 1;
      v32 = v34 | 1;
    }
    else {
      v32 = 2 * v31;
      v33 = 0;
      v155 = 0;
      v156 = nullptr;
      v154 = (unsigned __int8)(2 * v31);
    }
    if ((v32 & 1) != 0) {
      v35 = (char*)v33;
    }
    else {
      v35 = (char*)&v154 + 1;
    }
    if (v27 != 0) {
      GameRoutine_1a0b940(v35, v28, v27);
    }
    v36 = &v35[v27];
    if (v29 != 0) {
      GameRoutine_1a0b940(v36, v30, v29);
    }
    v36[v29] = 0;
    if ((v154 & 1) != 0) {
      v37 = v155;
    }
    else {
      v37 = (unsigned __int64)(unsigned __int8)v154 >> 1;
    }
    if ((v154 & 1) != 0) {
      v38 = v156;
    }
    else {
      v38 = (char*)&v154 + 1;
    }
    result =
        (char*)GameRoutine_a8ed00(&v151, *(_QWORD*)(*v23 + 13224), v38, v37);
    v40 = v151;
    v39 = v152;
    if (v152 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v152 + 8), 1u,
                                memory_order_relaxed);
      v41 = v152;
      if (v152 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v152 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)v41 + 16LL))(v41);
        result = (char*)GameRoutine_1a09c50(v41);
      }
    }
    if ((v154 & 1) != 0 && v156 != nullptr) {
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v42 = 56;
      }
      result = (char*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v42);
    }
    v43 = *(_DWORD*)(a1 + 500);
    if (v40 != 0) {
      v44 = *(unsigned __int8*)(a1 + 400);
      v45 = (v44 & 1) == 0;
      v46 = v44 >> 1;
      if (v45) {
        v47 = v46;
      }
      else {
        v47 = *(_QWORD*)(a1 + 408);
      }
      if (v45) {
        v48 = a1 + 401;
      }
      else {
        v48 = *(_QWORD*)(a1 + 416);
      }
      if ((v157 & 1) != 0) {
        v49 = v158;
      }
      else {
        v49 = (unsigned __int64)(unsigned __int8)v157 >> 1;
      }
      if ((v157 & 1) != 0) {
        v50 = v159;
      }
      else {
        v50 = (char*)&v157 + 1;
      }
      v51 = v49 + v47;
      if (v49 + v47 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_333;
      }
      if (v51 > 0x16) {
        if ((v51 | 7) == 0x17) {
          v61 = 26;
        }
        else {
          v61 = (v51 | 7) + 1;
        }
        v53 = GameRoutine_651b90(GameData_2265ee0, v61, 16, 0);
        v155 = v49 + v47;
        v156 = (char*)v53;
        v154 = v61 | 1;
        v52 = v61 | 1;
      }
      else {
        v52 = 2 * v51;
        v53 = 0;
        v155 = 0;
        v156 = nullptr;
        v154 = (unsigned __int8)(2 * v51);
      }
      if ((v52 & 1) != 0) {
        v62 = (char*)v53;
      }
      else {
        v62 = (char*)&v154 + 1;
      }
      if (v47 != 0) {
        GameRoutine_1a0b940(v62, v48, v47);
      }
      v63 = &v62[v47];
      if (v49 != 0) {
        GameRoutine_1a0b940(v63, v50, v49);
      }
      v63[v49] = 0;
      if ((v154 & 1) != 0) {
        v64 = v156;
      }
      else {
        v64 = (char*)&v154 + 1;
      }
      if ((v154 & 1) != 0) {
        v65 = v155;
      }
      else {
        v65 = (unsigned __int64)(unsigned __int8)v154 >> 1;
      }
      result = (char*)GameRoutine_c702b0(v150, v43, (__int64)v64, v65);
      v23 = GameData_212c010[0];
      if ((v154 & 1) != 0 && v156 != nullptr) {
        v66 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v66 = 56;
        }
        result = (char*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v66);
      }
    }
    else {
      v54 = v150 + 96LL * v43;
      v55 = *(_BYTE*)(v54 + 8);
      *(_DWORD*)v54 = 0;
      if ((v55 & 1) != 0 && *(_QWORD*)(v54 + 24) != 0) {
        v56 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v56 = 56;
        }
        result = (char*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v56);
      }
      v57 = *(_BYTE*)(v54 + 32);
      *(_QWORD*)(v54 + 16) = 0;
      *(_QWORD*)(v54 + 24) = 0;
      *(_QWORD*)(v54 + 8) = 0;
      if ((v57 & 1) != 0 && *(_QWORD*)(v54 + 48) != 0) {
        v58 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v58 = 56;
        }
        result = (char*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v58);
      }
      v59 = *(_BYTE*)(v54 + 56);
      *(_QWORD*)(v54 + 40) = 0;
      *(_QWORD*)(v54 + 48) = 0;
      *(_QWORD*)(v54 + 32) = 0;
      if ((v59 & 1) != 0 && *(_QWORD*)(v54 + 72) != 0) {
        v60 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v60 = 56;
        }
        result = (char*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v60);
      }
      *(_QWORD*)(v54 + 64) = 0;
      *(_QWORD*)(v54 + 72) = 0;
      *(_QWORD*)(v54 + 56) = 0;
      *(_QWORD*)(v54 + 80) = -1;
      *(_QWORD*)(v54 + 88) = 1065353216;
    }
    if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v39 + 16LL))(v39);
      result = (char*)GameRoutine_1a09c50(v39);
    }
  }
  v67 = *(unsigned __int8*)(a1 + 448);
  v68 = (v67 & 1) == 0;
  v69 = v67 >> 1;
  if (v68) {
    v70 = v69;
  }
  else {
    v70 = *(_QWORD*)(a1 + 456);
  }
  if (v68) {
    v71 = a1 + 449;
  }
  else {
    v71 = *(_QWORD*)(a1 + 464);
  }
  if ((v157 & 1) != 0) {
    v72 = v158;
  }
  else {
    v72 = (unsigned __int64)(unsigned __int8)v157 >> 1;
  }
  if ((v157 & 1) != 0) {
    v73 = v159;
  }
  else {
    v73 = (char*)&v157 + 1;
  }
  v74 = v72 + v70;
  if (v72 + v70 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_333;
  }
  if (v74 > 0x16) {
    if ((v74 | 7) == 0x17) {
      v77 = 26;
    }
    else {
      v77 = (v74 | 7) + 1;
    }
    v76 = GameRoutine_651b90(GameData_2265ee0, v77, 16, 0);
    v155 = v72 + v70;
    v156 = (char*)v76;
    v154 = v77 | 1;
    v75 = v77 | 1;
  }
  else {
    v75 = 2 * v74;
    v76 = 0;
    v155 = 0;
    v156 = nullptr;
    v154 = (unsigned __int8)(2 * v74);
  }
  if ((v75 & 1) != 0) {
    v78 = (char*)v76;
  }
  else {
    v78 = (char*)&v154 + 1;
  }
  if (v70 != 0) {
    GameRoutine_1a0b940(v78, v71, v70);
  }
  v79 = &v78[v70];
  if (v72 != 0) {
    GameRoutine_1a0b940(v79, v73, v72);
  }
  v79[v72] = 0;
  if ((v154 & 1) != 0) {
    v80 = v155;
  }
  else {
    v80 = (unsigned __int64)(unsigned __int8)v154 >> 1;
  }
  if ((v154 & 1) != 0) {
    v81 = v156;
  }
  else {
    v81 = (char*)&v154 + 1;
  }
  result = (char*)GameRoutine_a8ed00(&v151, *(_QWORD*)(*v23 + 13224), v81, v80);
  v83 = v151;
  v82 = v152;
  if (v152 != 0 &&
      (atomic_fetch_add_explicit((atomic_ullong* volatile)(v152 + 8), 1u,
                                 memory_order_relaxed),
       v84 = v152, v152 != 0) &&
      atomic_fetch_add((atomic_ullong* volatile)(v152 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v84 + 16LL))(v84);
    result = (char*)GameRoutine_1a09c50(v84);
    if ((v154 & 1) == 0) {
      goto LABEL_177;
    }
  }
  else if ((v154 & 1) == 0) {
    goto LABEL_177;
  }
  if (v156 != nullptr) {
    v85 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v85 = 56;
    }
    result = (char*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v85);
  }
LABEL_177:
  v86 = *(_DWORD*)(a1 + 504);
  if (v83 != 0) {
    v87 = *(unsigned __int8*)(a1 + 424);
    if ((v87 & 1) != 0) {
      v88 = *(_QWORD*)(a1 + 440);
    }
    else {
      v88 = a1 + 425;
    }
    if ((v87 & 1) != 0) {
      v89 = *(_QWORD*)(a1 + 432);
    }
    else {
      v89 = v87 >> 1;
    }
    if ((v157 & 1) != 0) {
      v90 = v158;
    }
    else {
      v90 = (unsigned __int64)(unsigned __int8)v157 >> 1;
    }
    if ((v157 & 1) != 0) {
      v91 = v159;
    }
    else {
      v91 = (char*)&v157 + 1;
    }
    v92 = v90 + v89;
    if (v90 + v89 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_333;
    }
    v148 = *(_DWORD*)(a1 + 504);
    if (v92 > 0x16) {
      if ((v92 | 7) == 0x17) {
        v103 = 26;
      }
      else {
        v103 = (v92 | 7) + 1;
      }
      result = (char*)GameRoutine_651b90(GameData_2265ee0, v103, 16, 0);
      v155 = v90 + v89;
      v156 = result;
      v154 = v103 | 1;
      v93 = v103 | 1;
    }
    else {
      v93 = 2 * v92;
      result = nullptr;
      v155 = 0;
      v156 = nullptr;
      v154 = (unsigned __int8)(2 * v92);
    }
    if ((v93 & 1) != 0) {
      v104 = result;
    }
    else {
      v104 = (char*)&v154 + 1;
    }
    if (v89 != 0) {
      result = (char*)GameRoutine_1a0b940(v104, v88, v89);
    }
    v105 = &v104[v89];
    if (v90 != 0) {
      result = (char*)GameRoutine_1a0b940(v105, v91, v90);
    }
    v105[v90] = 0;
    v106 =
        (v154 & 1) != 0 ? v155 : (unsigned __int64)(unsigned __int8)v154 >> 1;
    v107 = *(unsigned __int8*)(a1 + 448);
    v108 = (v154 & 1) != 0 ? v156 : (char*)&v154 + 1;
    v109 = (v107 & 1) == 0;
    v110 = v107 >> 1;
    v111 = v109 ? v110 : *(_QWORD*)(a1 + 456);
    v112 = v109 ? a1 + 449 : *(_QWORD*)(a1 + 464);
    v113 = v111 + v90;
    if (v111 + v90 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_333;
    }
    if (v113 > 0x16) {
      if ((v113 | 7) == 0x17) {
        v116 = 26;
      }
      else {
        v116 = (v113 | 7) + 1;
      }
      v115 = GameRoutine_651b90(GameData_2265ee0, v116, 16, 0);
      v152 = v111 + v90;
      v153 = (char*)v115;
      v151 = v116 | 1;
      v114 = v116 | 1;
    }
    else {
      v114 = 2 * v113;
      v115 = 0;
      v152 = 0;
      v153 = nullptr;
      v151 = (unsigned __int8)(2 * v113);
    }
    if ((v114 & 1) != 0) {
      v117 = (char*)v115;
    }
    else {
      v117 = (char*)&v151 + 1;
    }
    if (v111 != 0) {
      GameRoutine_1a0b940(v117, v112, v111);
    }
    if (v90 != 0) {
      GameRoutine_1a0b940(&v117[v111], v91, v90);
    }
    v117[v111 + v90] = 0;
    if ((v151 & 1) != 0) {
      v118 = v153;
    }
    else {
      v118 = (char*)&v151 + 1;
    }
    if ((v151 & 1) != 0) {
      v119 = v152;
    }
    else {
      v119 = (unsigned __int64)(unsigned __int8)v151 >> 1;
    }
    result = (char*)GameRoutine_c71600(v150, v148, (__int64)v108, v106,
                                       (__int64)v118, v119);
    v100 = v149;
    if ((v151 & 1) != 0 && v153 != nullptr) {
      v120 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v120 = 56;
      }
      result = (char*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v120);
    }
  }
  else {
    v94 = *(unsigned __int8*)(a1 + 424);
    if ((v94 & 1) != 0) {
      v95 = *(_QWORD*)(a1 + 440);
    }
    else {
      v95 = a1 + 425;
    }
    if ((v94 & 1) != 0) {
      v96 = *(_QWORD*)(a1 + 432);
    }
    else {
      v96 = v94 >> 1;
    }
    if ((v157 & 1) != 0) {
      v97 = v158;
    }
    else {
      v97 = (unsigned __int64)(unsigned __int8)v157 >> 1;
    }
    if ((v157 & 1) != 0) {
      v98 = v159;
    }
    else {
      v98 = (char*)&v157 + 1;
    }
    v99 = v97 + v96;
    if (v97 + v96 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_333;
    }
    v100 = v149;
    if (v99 > 0x16) {
      if ((v99 | 7) == 0x17) {
        v121 = 26;
      }
      else {
        v121 = (v99 | 7) + 1;
      }
      v102 = GameRoutine_651b90(GameData_2265ee0, v121, 16, 0);
      v155 = v97 + v96;
      v156 = (char*)v102;
      v154 = v121 | 1;
      v101 = v121 | 1;
    }
    else {
      v101 = 2 * v99;
      v102 = 0;
      v155 = 0;
      v156 = nullptr;
      v154 = (unsigned __int8)(2 * v99);
    }
    if ((v101 & 1) != 0) {
      v122 = (char*)v102;
    }
    else {
      v122 = (char*)&v154 + 1;
    }
    if (v96 != 0) {
      GameRoutine_1a0b940(v122, v95, v96);
    }
    v123 = &v122[v96];
    if (v97 != 0) {
      GameRoutine_1a0b940(v123, v98, v97);
    }
    v123[v97] = 0;
    if ((v154 & 1) != 0) {
      v124 = v156;
    }
    else {
      v124 = (char*)&v154 + 1;
    }
    if ((v154 & 1) != 0) {
      v125 = v155;
    }
    else {
      v125 = (unsigned __int64)(unsigned __int8)v154 >> 1;
    }
    result = (char*)GameRoutine_c702b0(v150, v86, (__int64)v124, v125);
  }
  v126 = GameData_212c010[0];
  if ((v154 & 1) != 0 && v156 != nullptr) {
    v127 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v127 = 56;
    }
    result = (char*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v127);
  }
  if (v82 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v82 + 16LL))(v82);
    result = (char*)GameRoutine_1a09c50(v82);
  }
  v128 = *(unsigned __int8*)(a1 + 232);
  if ((v128 & 1) != 0) {
    v129 = *(_QWORD*)(a1 + 240);
  }
  else {
    v129 = v128 >> 1;
  }
  if (v129 != 0) {
    v130 = *(unsigned __int8*)(a1 + 472);
    v131 = (v130 & 1) == 0;
    v132 = v130 >> 1;
    if (v131) {
      v133 = v132;
    }
    else {
      v133 = *(_QWORD*)(a1 + 480);
    }
    if (v131) {
      v134 = a1 + 473;
    }
    else {
      v134 = *(_QWORD*)(a1 + 488);
    }
    if ((v157 & 1) != 0) {
      v135 = v158;
    }
    else {
      v135 = (unsigned __int64)(unsigned __int8)v157 >> 1;
    }
    if ((v157 & 1) != 0) {
      v136 = v159;
    }
    else {
      v136 = (char*)&v157 + 1;
    }
    v137 = v135 + v133;
    if (v135 + v133 < 0xFFFFFFFFFFFFFFF7LL) {
      v138 = *(_DWORD*)(a1 + 508);
      if (v137 > 0x16) {
        if ((v137 | 7) == 0x17) {
          v141 = 26;
        }
        else {
          v141 = (v137 | 7) + 1;
        }
        v140 = GameRoutine_651b90(GameData_2265ee0, v141, 16, 0);
        v155 = v135 + v133;
        v156 = (char*)v140;
        v154 = v141 | 1;
        v139 = v141 | 1;
      }
      else {
        v139 = 2 * v137;
        v140 = 0;
        v155 = 0;
        v156 = nullptr;
        v154 = (unsigned __int8)(2 * v137);
      }
      if ((v139 & 1) != 0) {
        v142 = (char*)v140;
      }
      else {
        v142 = (char*)&v154 + 1;
      }
      if (v133 != 0) {
        GameRoutine_1a0b940(v142, v134, v133);
      }
      v143 = &v142[v133];
      if (v135 != 0) {
        GameRoutine_1a0b940(v143, v136, v135);
      }
      v143[v135] = 0;
      if ((v154 & 1) != 0) {
        v144 = v156;
      }
      else {
        v144 = (char*)&v154 + 1;
      }
      if ((v154 & 1) != 0) {
        v145 = v155;
      }
      else {
        v145 = (unsigned __int64)(unsigned __int8)v154 >> 1;
      }
      result = (char*)GameRoutine_c702b0(v150, v138, (__int64)v144, v145);
      if ((v154 & 1) != 0 && v156 != nullptr) {
        v146 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v146 = 56;
        }
        result = (char*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v146);
      }
      goto LABEL_323;
    }
  LABEL_333:
    GameRoutine_60a1d0(result);
  }
LABEL_323:
  if (v100 != 0xFFFFFFFFLL) {
    result = (char*)GameRoutine_a908c0(
        *(_QWORD*)(*v126 + 13224) + 1560LL * v100 + 208, v150);
  }
  if ((v157 & 1) != 0 && v159 != nullptr) {
    v147 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v147 = 56;
    }
    return (char*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v147);
  }
  return result;
}

__int64 GameHr_cadeb0(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  int v4;

  GameRoutine_ca8f80(a1);
  GameRoutine_d8e140(a1 + 26);
  GameRoutine_d8ec60(a1 + 26);
  GameRoutine_cb12a0(a1, a1 + 69, a1 + 72);
  GameRoutine_cb12a0(a1, a1 + 75, a1 + 78);
  GameRoutine_cb12a0(a1, a1 + 81, a1 + 84);
  GameRoutine_cab670((__int64)a1);
  result = GameRoutine_cab8c0((__int64)a1);
  if (a1[95] != 0) {
    v3 = *(_QWORD*)(GameData_21f3d10 + 216);
    v4 = *(_DWORD*)(v3 + 232);
    if (v4 <= 1) {
      v4 = 1;
    }
    *(_DWORD*)(v3 + 232) = v4;
  }
  return result;
}

__int64 GameHr_cb83a0(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 result;
  bool v8;
  unsigned __int64 add;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;

  v3 = *(_QWORD*)(a1 + 80);
  if (v3 != 0) {
    v5 = GameRoutine_1a0a0c0(v3);
    if (v5 != 0) {
      v6 = *(_QWORD*)(a1 + 72);
    }
    else {
      v6 = 0;
    }
    result = a2[1];
    if (result == 0) {
      goto LABEL_14;
    }
  }
  else {
    v6 = 0;
    v5 = 0;
    result = a2[1];
    if (result == 0) {
    LABEL_14:
      v10 = v6 == 0;
      goto LABEL_15;
    }
  }
  result = GameRoutine_1a0a0c0(result);
  if (result == 0) {
    goto LABEL_14;
  }
  v8 = v6 == *a2;
  add = atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                         0xFFFFFFFFFFFFFFFFLL);
  v10 = v8;
  if (add == 0) {
    v11 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = GameRoutine_1a09c50(v11);
  }
LABEL_15:
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = GameRoutine_1a09c50(v5);
    if (v10) {
      return result;
    }
  }
  else if (v10) {
    return result;
  }
  v12 = *(_QWORD*)(a1 + 80);
  if (v12 != 0) {
    v13 = GameRoutine_1a0a0c0(v12);
    if (v13 != 0) {
      v14 = *(_QWORD*)(a1 + 72);
      v15 = v13;
      if (v14 != 0) {
        GameRoutine_caaee0(*(_QWORD*)(a1 + 72), 0, 0);
        v16 = *(_DWORD*)(v14 + 1208);
        v17 = *(_QWORD*)(v14 + 24);
        *(_DWORD*)(v14 + 1216) = 0;
        GameRoutine_ceca80(v17, 256, v16 > 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        GameRoutine_1a09c50(v15);
      }
    }
  }
  v18 = *a2;
  result = a2[1];
  if (result != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                              memory_order_relaxed);
  }
  v19 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 72) = v18;
  *(_QWORD*)(a1 + 80) = result;
  if (v19 != 0) {
    GameRoutine_1a09c50(v19);
    result = *(_QWORD*)(a1 + 80);
  }
  if (result != 0) {
    result = GameRoutine_1a0a0c0(result);
    if (result != 0) {
      v20 = *(_QWORD*)(a1 + 72);
      v21 = result;
      if (v20 != 0) {
        v22 = *(_QWORD*)(a1 + 80);
        v23 = *(unsigned __int8*)(GameData_21f3d10 + 10);
        if (*(_BYTE*)(GameData_21f3d10 + 10) != 0) {
          v24 = 2;
        }
        else {
          v24 = 1;
        }
        if (v22 != 0) {
          v25 = GameRoutine_1a0a0c0(v22);
          if (v25 != 0) {
            v26 = *(_QWORD*)(a1 + 72);
            v27 = v25;
            if (v26 != 0) {
              v28 = *(_DWORD*)(v26 + 1208);
              v29 = *(_QWORD*)(v26 + 24);
              *(_DWORD*)(v26 + 1216) = v24;
              if (v28 > 0) {
                v30 = 1;
              }
              else {
                v30 = v23 ^ 1u;
              }
              GameRoutine_ceca80(v29, 256, v30);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
              GameRoutine_1a09c50(v27);
            }
          }
        }
        result = GameRoutine_caaee0(v20, 3, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        return GameRoutine_1a09c50(v21);
      }
    }
  }
  return result;
}

__int64 GameHr_cb9240(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 i;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;

  v1 = a1[10];
  if (v1 != 0) {
    v3 = a1[9];
    v4 = a1[10];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v5 = GameRoutine_1a0a0c0(v4);
    GameRoutine_1a09c50(v1);
    if (v5 != 0) {
      if (v3 != 0 && *(_DWORD*)(v3 + 1112) == 3 && *(_QWORD*)(v3 + 56) != 0) {
        GameRoutine_10c8e20();
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        GameRoutine_1a09c50(v5);
      }
    }
  }
  *(_QWORD*)(a1[1] + 16LL) = *(_QWORD*)(a1[1] + 8LL);
  if (*(_BYTE*)(GameData_21f3c98 + 80) == 1) {
    *(_BYTE*)(GameData_21f3c98 + 80) = 0;
  }
  v7 = GameData_21c9608;
  *(_QWORD*)(GameData_21c9608 + 176) = 0;
  *(_BYTE*)(v7 + 160) = 0;
  *(_DWORD*)(v7 + 192) = 0;
  *(_OWORD*)(v7 + 176) = *(unsigned __int64*)(v7 + 176);
  result = GameRoutine_fa2110(GameData_220b6f8);
  *(_QWORD*)(a1[11] + 16LL) = *(_QWORD*)(a1[11] + 8LL);
  v9 = *(_QWORD*)(GameData_21f3d10 + 200);
  if (v9 != 0) {
    v10 = *(_QWORD*)(v9 + 8);
    v11 = *(_QWORD*)(v9 + 16);
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
      result = GameRoutine_f60e40(v10);
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = GameRoutine_1a09c50(v11);
      }
    }
    else {
      result = GameRoutine_f60e40(v10);
    }
  }
  v12 = a1[3];
  v13 = a1[4];
  if (v12 != v13) {
    do {
      v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v12 + 24LL) + 32LL);
      if (v14 != 0) {
        v15 = *(_QWORD*)(v14 + 400);
        for (i = *(_QWORD*)(v14 + 408); i != v15; i -= 32) {
          v17 = *(_QWORD*)(i - 8);
          if (v17 != 0) {
            GameRoutine_1a09c50(v17);
          }
          result = *(_QWORD*)(i - 24);
          if (result != 0) {
            result = GameRoutine_1a09c50(result);
          }
        }
        *(_QWORD*)(v14 + 408) = v15;
      }
      v12 += 16;
    } while (v12 != v13);
    v18 = (__int64*)a1[3];
    v19 = (__int64*)a1[4];
    if (v18 != v19) {
      v20 = GameData_212d458[0];
      do {
        result = GameRoutine_cac2c0(*v18, 0);
        v21 = *(_QWORD*)(*v20 + 120);
        if ((*(_BYTE*)(v21 + 12) & 1) == 0) {
          *(_BYTE*)(v21 + 12) = 1;
        }
        v18 += 2;
      } while (v18 != v19);
    }
  }
  return result;
}

__int64 GameHr_cba580(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 i;
  __int64 v7[2];

  v2 = *(__int64**)(result + 136);
  v1 = *(__int64**)(result + 144);
  if (v1 != v2) {
    v3 = result;
    do {
      v4 = v2[1];
      v7[0] = *v2;
      v7[1] = v4;
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_cba3a0(result, v7);
        result = GameRoutine_1a09c50(v4);
      }
      else {
        result = GameRoutine_cba3a0(result, v7);
      }
      v2 += 2;
    } while (v2 != v1);
    v5 = *(_QWORD*)(v3 + 136);
    for (i = *(_QWORD*)(v3 + 144); i != v5; i -= 16) {
      result = *(_QWORD*)(i - 8);
      if (result != 0) {
        result = GameRoutine_1a09c50(result);
      }
    }
    *(_QWORD*)(v3 + 144) = v5;
  }
  return result;
}

_QWORD* GameHr_cbf8a0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* result;
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

  v0 = GameData_212c370;
  v1 = *GameData_212c370;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  v4 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 24) + 456LL))(
      *(_QWORD*)(v3 + 24));
  v5 = (__int64*)GameData_212dbc0[0];
  if ((v4 & 1) != 0) {
    v6 = *(_QWORD*)GameData_212dbc0[0];
    if (*(_BYTE*)(*(_QWORD*)GameData_212dbc0[0] + 104LL) == 1) {
      *(_BYTE*)(v6 + 104) = 0;
    }
    v4 = GameRoutine_d6f4f0(v6);
  }
  if ((GameRoutine_d85af0(v4) & 1) != 0) {
    goto LABEL_6;
  }
  v11 = *v5;
  v12 = *(unsigned __int8*)(v11 + 112);
  if ((v12 & 1) != 0) {
    v13 = *(_QWORD*)(v11 + 120);
  }
  else {
    v13 = v12 >> 1;
  }
  if (v13 != 0) {
    v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                8LL) +
                     64LL);
    v15 = *(_QWORD*)(v14 + 96);
    if (v15 != 0) {
      v16 = (v12 & 1) != 0 ? *(_QWORD*)(v11 + 128) : v11 + 113;
      if (!GameRoutine_c13be0(v15, v16, v13, *(_QWORD*)(v14 + 152), 0)) {
      LABEL_6:
        v7 = *v0;
        v8 = *(_QWORD*)(v7 +
                        8LL * (*(unsigned int (**)(__int64))(
                                  *(_QWORD*)GameData_21a6070 + 72LL))(
                                  GameData_21a6070) +
                        4384);
        v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 472LL))(v8);
        return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
            **(_QWORD**)(v9 + 24) + 448LL))(*(_QWORD*)(v9 + 24), 0);
      }
    }
    GameRoutine_d6f8d0(v11);
  }
  v17 = *v0;
  v18 = *(
      _QWORD*)(v17 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v18 != 0) {
    v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 472LL))(v18);
  }
  else {
    v19 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v19 + 24) + 448LL))(
      *(_QWORD*)(v19 + 24), 1);
  result = *(_QWORD**)(v19 + 2240);
  *(_QWORD*)(v19 + 2240) = 0;
  if (result == (_QWORD*)(v19 + 2208)) {
    v20 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v20 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(void))(*result + v20))();
}

__int64 GameHr_cd7620(__int64 result, __int64* a2, _QWORD* a3, _QWORD* a4)
{
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 (*v19)();
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
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
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64* v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
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
  __int64* v58;
  __int64 v59;
  __int64* v60;
  _BYTE v61[32];
  _BYTE* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  _QWORD v69[4];
  _QWORD* v70;
  char v71;

  v4 = *(unsigned int*)(result + 16);
  if ((_DWORD)v4 == 0x4000) {
    return result;
  }
  v5 = result;
  v6 = GameData_212c330[0];
  v7 = (_QWORD*)(GameData_212c330[0][*(unsigned int*)(result + 20)] + 16 * v4);
  if (v7[1] == 0 || *v7 != *(_QWORD*)(result + 8)) {
    return result;
  }
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v58 = nullptr;
  v60 = nullptr;
  v62 = nullptr;
  if (&v54 != a2) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      v10 = a3;
      v11 = a4;
      result = GameRoutine_64df20(&v54, a2[2], a2[1]);
      a3 = v10;
      a4 = v11;
      if ((*v10 & 1) == 0) {
        goto LABEL_8;
      }
      goto LABEL_10;
    }
    v8 = a2[1];
    v54 = *a2;
    v55 = v8;
    v56 = a2[2];
  }
  if ((*(_BYTE*)a3 & 1) == 0) {
  LABEL_8:
    v9 = a3[1];
    v48 = *a3;
    v49 = v9;
    v50 = a3[2];
    goto LABEL_11;
  }
LABEL_10:
  v12 = a4;
  result = GameRoutine_60a270(&v48, a3[2], a3[1]);
  a4 = v12;
LABEL_11:
  v52 = 0;
  v53 = 0;
  v51 = 0;
  v13 = *a4;
  v14 = a4[1];
  v15 = v14 - *a4;
  v16 = GameData_212bf68;
  if (v14 == *a4) {
    v17 = 0;
  }
  else {
    if (v15 < 0) {
      GameRoutine_919020(result);
    }
    v17 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v14 - *a4, 16, 0);
    v51 = v17;
    v52 = v17;
    v53 = v17 + v15;
    do {
      *(_BYTE*)v17 = 0;
      *(_DWORD*)(v17 + 24) = -1;
      v18 = *(_DWORD*)(v13 + 24);
      if (v18 != -1) {
        v19 = GameData_1fd4d30[v18];
        v69[0] = v17;
        ((void (*)(_QWORD*, __int64))v19)(v69, v13);
        *(_DWORD*)(v17 + 24) = v18;
      }
      v13 += 32;
      v17 += 32;
    } while (v13 != v14);
    v52 = v17;
  }
  if ((v48 & 1) != 0) {
    GameRoutine_60a270(&v63, v50, v49);
    v17 = v52;
  }
  else {
    v63 = v48;
    v64 = v49;
    v65 = v50;
  }
  v20 = v51;
  v21 = v53;
  v22 = *(_QWORD*)v16;
  v52 = 0;
  v53 = 0;
  v51 = 0;
  v66 = v20;
  v67 = v17;
  v68 = v21;
  v23 = (_QWORD*)GameRoutine_651b90(v22, 56, 16, 0);
  *v23 = GameData_1fd4db0;
  v24 = v23 + 1;
  if ((v63 & 1) != 0) {
    GameRoutine_60a270(v24, v65, v64);
    v20 = v66;
    v17 = v67;
    v21 = v68;
  }
  else {
    v25 = v64;
    *v24 = v63;
    v23[2] = v25;
    v23[3] = v65;
  }
  v23[4] = v20;
  v23[5] = v17;
  v23[6] = v21;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v70 = v23;
  GameRoutine_cb4e70(v69, v61);
  if (v70 == v69) {
    v26 = 32;
    goto LABEL_29;
  }
  if (v70 != nullptr) {
    v26 = 40;
  LABEL_29:
    (*(void (**)(void))(*v70 + v26))();
  }
  v27 = v66;
  if (v66 != 0) {
    v28 = v67;
    if (v66 == v67) {
      goto LABEL_37;
    }
    do {
      v29 = *(unsigned int*)(v28 - 8);
      v30 = v28 - 32;
      if ((_DWORD)v29 != -1) {
        ((void (*)(char*, __int64))GameData_1fd4cf8[v29])(&v71, v28 - 32);
      }
      *(_DWORD*)(v28 - 8) = -1;
      v28 -= 32;
    } while (v30 != v27);
    v67 = v27;
    if (v66 != 0) {
    LABEL_37:
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v31 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v16 + v31);
    }
  }
  if ((v63 & 1) != 0 && v65 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
      v32 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v16 + v32);
  }
  v33 = v51;
  if (v51 != 0) {
    v34 = v52;
    if (v51 == v52) {
      goto LABEL_52;
    }
    do {
      v35 = *(unsigned int*)(v34 - 8);
      v36 = v34 - 32;
      if ((_DWORD)v35 != -1) {
        ((void (*)(_QWORD*, __int64))GameData_1fd4cf8[v35])(v69, v34 - 32);
      }
      *(_DWORD*)(v34 - 8) = -1;
      v34 -= 32;
    } while (v36 != v33);
    v52 = v33;
    if (v51 != 0) {
    LABEL_52:
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v37 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v16 + v37);
    }
  }
  if ((v48 & 1) != 0 && v50 != 0) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
      v38 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v16 + v38);
  }
  v39 = *(unsigned int*)(v5 + 16);
  if ((_DWORD)v39 == 0x4000 ||
      (v40 = (_QWORD*)(v6[*(unsigned int*)(v5 + 20)] + 16 * v39))[1] == 0) {
    v41 = nullptr;
  }
  else if (*v40 == *(_QWORD*)(v5 + 8)) {
    v41 = (__int64*)v40[1];
  }
  else {
    v41 = nullptr;
  }
  v42 = v41[147];
  if (v42 >= v41[148]) {
    v43 = GameRoutine_cb40c0(v41 + 146, (__int64)&v54);
  }
  else {
    GameRoutine_cb4210((_QWORD*)v41[147], &v54);
    v43 = v42 + 176;
  }
  v41[147] = v43;
  if (v62 == v61) {
    v44 = 32;
  }
  else {
    if (v62 == nullptr) {
      goto LABEL_74;
    }
    v44 = 40;
  }
  (*(void (**)(void))(*(_QWORD*)v62 + v44))();
LABEL_74:
  if (v60 == &v59) {
    v45 = 32;
  }
  else {
    if (v60 == nullptr) {
      goto LABEL_79;
    }
    v45 = 40;
  }
  (*(void (**)(void))(*v60 + v45))();
LABEL_79:
  result = (__int64)v58;
  if (v58 == &v57) {
    v46 = 32;
    goto LABEL_83;
  }
  if (v58 != nullptr) {
    v46 = 40;
  LABEL_83:
    result = (*(__int64 (**)(void))(*v58 + v46))();
  }
  if ((v54 & 1) != 0 && v56 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
      v47 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)v16 + v47);
  }
  return result;
}

__int64 GameHr_ce02d0(__int64 a1, int* a2)
{
  __int64 result;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v12 = 0;
  v13 = 0;
  result = GameRoutine_16dcd30(a1, "DungeonSystemMenu", &v12, 0);
  v5 = v13;
  *(_QWORD*)a1 = GameData_209d8c0;
  *(_QWORD*)(a1 + 176) = GameData_209dd28;
  *(_QWORD*)(a1 + 1056) = GameData_209ddf8;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = GameRoutine_1a09c50(v5);
  }
  *(_BYTE*)(a1 + 1064) = 0;
  *(_DWORD*)(a1 + 1068) = 2;
  *(_QWORD*)a1 = GameData_1fd5528;
  *(_QWORD*)(a1 + 176) = GameData_1fd59c8;
  *(_QWORD*)(a1 + 1056) = GameData_1fd5a98;
  v6 = *a2;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  *(_DWORD*)(a1 + 1072) = v6;
  v8 = *((_QWORD*)a2 + 1);
  v7 = *((_QWORD*)a2 + 2);
  v9 = v7 - v8;
  if (v7 != v8) {
    if (v9 < 0) {
      GameRoutine_688200(result);
    }
    v10 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v7 - v8, 16, 0);
    v11 = v10 + v9;
    *(_QWORD*)(a1 + 1080) = v10;
    *(_QWORD*)(a1 + 1088) = v10;
    *(_QWORD*)(a1 + 1096) = v10 + v9;
    result = GameRoutine_1a0b950(v10, v8, v9);
    *(_QWORD*)(a1 + 1088) = v11;
  }
  GameData_2174af0 = 0;
  return result;
}

_QWORD* GameHr_ce49a0(__int64 a1, int a2)
{
  _QWORD* result;
  int* v4;
  int* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  int* v12;

  result = GameRoutine_d2b820(&v11, *(_QWORD*)(a1 + 32) + 72LL * a2);
  v4 = v11;
  v5 = v12;
  if (v11 != v12) {
    do {
      v6 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 72LL) + 104LL * *v4;
      v8 = *(_QWORD*)(v6 + 16);
      v7 = (_QWORD*)(v6 + 16);
      if (v8 != 0) {
        v9 = v7[1];
        *v7 = 0;
        v7[1] = 0;
        if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          result = (_QWORD*)GameRoutine_1a09c50(v9);
        }
      }
      ++v4;
    } while (v4 != v5);
    v4 = v11;
  }
  if (v4 != nullptr) {
    v12 = v4;
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v10 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v10);
  }
  return result;
}

__int64 GameHr_ce5aa0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  result = GameRoutine_ce5c00();
  v3 = *(_QWORD*)(a1 + 80);
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 88);
    if (v3 == v4) {
      goto LABEL_9;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        result = GameRoutine_1a09c50(v5);
      }
      v4 -= 16;
    } while (v4 != v3);
    v6 = *(_QWORD*)(a1 + 80);
    *(_QWORD*)(a1 + 88) = v3;
    if (v6 != 0) {
    LABEL_9:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v7 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7);
    }
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v8 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v8);
  }
  if ((*(_BYTE*)a1 & 1) != 0 && *(_QWORD*)(a1 + 16) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v9 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v9);
  }
  return result;
}

__int64 GameHr_ce5c00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;

  v1 = *(_QWORD*)(result + 80);
  v2 = *(_QWORD*)(result + 88);
  v3 = result;
  v4 = fminf(*(float*)(result + 24), 0.0);
  *(_BYTE*)(result + 112) = 0;
  for (*(float*)(result + 104) = v4; v2 != v1; v2 -= 16) {
    v5 = *(_QWORD*)(v2 - 8);
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      result = GameRoutine_1a09c50(v5);
    }
  }
  v6 = *(_QWORD*)(v3 + 72);
  *(_QWORD*)(v3 + 88) = v1;
  if (v6 != 0) {
    result = GameRoutine_634d80(*(_QWORD*)(v6 + 8));
  }
  v7 = *(_BYTE*)(v3 + 48);
  *(_QWORD*)(v3 + 72) = 0;
  if ((v7 & 1) != 0) {
    **(_BYTE**)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 56) = 0;
    if (*(_QWORD*)(v3 + 40) == 0) {
      return result;
    }
  }
  else {
    *(_WORD*)(v3 + 48) = 0;
    if (*(_QWORD*)(v3 + 40) == 0) {
      return result;
    }
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
    v8 = 56;
  }
  result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v8);
  *(_QWORD*)(v3 + 40) = 0;
  *(_DWORD*)(v3 + 32) = 0;
  return result;
}

#pragma GCC visibility pop
