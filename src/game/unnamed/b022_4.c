#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;

extern __int64 (*GameData_20aa3b0[])();

extern __int64 (*GameData_20aa810[])();

extern __int64 (*GameData_20aa9a0[])();

extern __int64 (*GameData_20ab640[])();

extern __int64 (*GameData_20abac8[])();

extern __int64 (*GameData_20abb98[])();

extern __int64 (*GameData_20abc48[])();

extern __int64 (*GameData_20abeb8[])();

extern __int64 (*GameData_20ac110[])();

extern __int64 (*GameData_20ac368[])();

extern __int64 GameData_212bf68;

extern __int64 GameData_212c470;

extern _UNKNOWN* GameData_212c540;

extern _UNKNOWN* GameData_212c548;

extern _UNKNOWN* GameData_212c730;

extern __int64* GameData_212c9a0[147];

extern __int64* GameData_212d630[11];

extern __int64* GameData_212d6a8;

extern __int64* GameData_212de58[3];

extern __int64 GameData_2131cb8[35];

extern __int64 GameData_2131da0[6];

extern __int128 GameData_21a6120;

extern _UNKNOWN GameData_21a6130;

extern __int64 GameData_21caab0;

extern int GameData_21f8110;

extern __int64 GameData_21f8118;

extern __int64 GameData_21f8120;

extern int GameData_21f8130;

extern __int64 GameData_2262ae0;

__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_14a3920(long double);

__int64 GameRoutine_155cda0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_155ea30(_QWORD);

__int64 GameRoutine_155f480(_QWORD, _QWORD);

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);

__int64 GameRoutine_16dcd30(__int64, __int64, _QWORD*, __int64);

__int64 GameRoutine_16dea40(__int64 result, char, unsigned __int8,
                            unsigned __int8);

_QWORD* GameRoutine_16e0c00(_QWORD* result, __int64);

__int64 GameRoutine_1990fb0(_QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c60(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_1a0a8e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_65c580(_QWORD, _QWORD);

__int64 GameRoutine_715440(_QWORD);

__int64 GameRoutine_7a7dc0(const char*, ...);

__int64 GameRoutine_9c6120(_QWORD, _QWORD);

__int64 GameRoutine_bc6460(_QWORD, _QWORD, _QWORD);

__int64 GameHr_170c1a0(__int64 result, __int64* a2)
{
  int v2;
  __int64 v3;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BOOL4 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  char v31;
  char* v32;
  char* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  char v41;
  char* v42;
  char* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  long double v59;
  __int64* v60;
  __int64 v61;
  unsigned int v62;
  unsigned int i;
  __int64 v64;
  __int64 v65;
  __int128 v66;
  __int64 v67;
  __int64 v68;
  const char* v69;
  int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;

  v3 = GameData_2262ae0;
  if (GameData_2262ae0 == 0) {
    return result;
  }
  v5 = result;
  v6 = (__int64*)GameRoutine_155fbe0(GameData_2262ae0 + 168, "L_TalkMenu");
  v7 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1056, 16, 0);
  v8 = v6[1];
  v67 = 0;
  v68 = 0;
  if (v8 != 0) {
    v68 = GameRoutine_1a0a0c0(v8);
    if (v68 != 0) {
      v67 = *v6;
    }
  }
  if (v6[2] == 0) {
    goto LABEL_20;
  }
  v9 = v6[1];
  if (v9 == 0) {
    goto LABEL_20;
  }
  v10 = GameRoutine_1a0a0c0(v9);
  if (v10 == 0) {
    goto LABEL_15;
  }
  v11 = *v6;
  if (*v6 != 0) {
    v2 = *(unsigned __int8*)(v11 + 24);
    v12 = v11 + 152;
    if (v2 == 0) {
      v12 = 0;
    }
    v13 = v12 != v6[2];
  }
  else {
    v13 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v13) {
    LABEL_15:
      v14 = v6[1];
      if (v14 != 0 && *(_QWORD*)(v14 + 8) != -1) {
        goto LABEL_17;
      }
    LABEL_20:
      v15 = 0;
      goto LABEL_21;
    }
  }
  else {
    v16 = v10;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    GameRoutine_1a09c50(v16);
    if (v13) {
      goto LABEL_15;
    }
  }
  if ((v2 & 1) == 0) {
    goto LABEL_20;
  }
LABEL_17:
  v15 = v6[2];
LABEL_21:
  GameRoutine_16dcd30((__int64)v7, (__int64)"TalkMenu", &v67, v15);
  v17 = v68;
  if (v68 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v68 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    GameRoutine_1a09c50(v17);
  }
  *v7 = GameData_20aa3b0;
  v7[22] = GameData_20aa810;
  GameRoutine_657850(v7, GameData_212c730, "TalkMenu", 1, v5);
  v18 = *a2;
  v19 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 96, 16, 0);
  v20 = *(_QWORD*)(v18 + 24);
  v21 = (__int64)v19;
  if ((*(_BYTE*)v20 & 1) != 0) {
    v22 = *(_QWORD*)(v20 + 16);
  }
  else {
    v22 = v20 + 1;
  }
  *v19 = GameData_212d630[0] + 2;
  v19[1] = 0;
  v23 = GameRoutine_1a09c70(v22);
  if (v23 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_85:
    GameRoutine_60a1d0(v23);
  }
  v24 = v23;
  if (v23 >= 0x17) {
    if ((v23 | 7) == 0x17) {
      v26 = 26;
    }
    else {
      v26 = (v23 | 7) + 1;
    }
    v25 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v26, 16, 0);
    *(_QWORD*)(v21 + 24) = v24;
    *(_QWORD*)(v21 + 32) = v25;
    *(_QWORD*)(v21 + 16) = v26 | 1;
    goto LABEL_35;
  }
  v25 = v21 + 17;
  *(_BYTE*)(v21 + 16) = 2 * v23;
  if (v23 != 0) {
  LABEL_35:
    GameRoutine_1a0b940(v25, v22, v24);
  }
  *(_BYTE*)(v25 + v24) = 0;
  *(_DWORD*)(v21 + 40) = 0;
  *(_QWORD*)(v21 + 48) = 0;
  *(_QWORD*)(v21 + 56) = 0;
  *(_QWORD*)(v21 + 64) = 0;
  *(_QWORD*)(v21 + 72) = 0;
  *(_QWORD*)(v21 + 88) = v18;
  *(_DWORD*)(v21 + 80) = 16843009;
  *(_QWORD*)v21 = GameData_20aa9a0;
  GameRoutine_16e0c00(v7, v21);
  v27 = a2[1];
  v28 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 96, 16, 0);
  v29 = *(char**)(v27 + 24);
  v30 = v28;
  v31 = *v29;
  v32 = *((char**)v29 + 2);
  *(_QWORD*)(v28 + 8) = 0;
  if ((v31 & 1) != 0) {
    v33 = v32;
  }
  else {
    v33 = v29 + 1;
  }
  v23 = GameRoutine_1a09c70(v33);
  if (v23 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_85;
  }
  v34 = v23;
  if (v23 >= 0x17) {
    if ((v23 | 7) == 0x17) {
      v36 = 26;
    }
    else {
      v36 = (v23 | 7) + 1;
    }
    v35 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v36, 16, 0);
    *(_QWORD*)(v30 + 24) = v34;
    *(_QWORD*)(v30 + 32) = v35;
    *(_QWORD*)(v30 + 16) = v36 | 1;
    goto LABEL_47;
  }
  v35 = v30 + 17;
  *(_BYTE*)(v30 + 16) = 2 * v23;
  if (v23 != 0) {
  LABEL_47:
    GameRoutine_1a0b940(v35, v33, v34);
  }
  *(_BYTE*)(v35 + v34) = 0;
  *(_DWORD*)(v30 + 40) = 0;
  *(_QWORD*)(v30 + 48) = 0;
  *(_QWORD*)(v30 + 56) = 0;
  *(_QWORD*)(v30 + 64) = 0;
  *(_QWORD*)(v30 + 72) = 0;
  *(_QWORD*)v30 = GameData_20aa9a0;
  *(_QWORD*)(v30 + 88) = v27;
  *(_DWORD*)(v30 + 80) = 16843009;
  GameRoutine_16e0c00(v7, v30);
  v37 = a2[2];
  v38 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 96, 16, 0);
  v39 = *(char**)(v37 + 24);
  v40 = v38;
  v41 = *v39;
  v42 = *((char**)v39 + 2);
  *(_QWORD*)(v38 + 8) = 0;
  if ((v41 & 1) != 0) {
    v43 = v42;
  }
  else {
    v43 = v39 + 1;
  }
  v23 = GameRoutine_1a09c70(v43);
  if (v23 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_85;
  }
  v44 = v23;
  if (v23 >= 0x17) {
    if ((v23 | 7) == 0x17) {
      v46 = 26;
    }
    else {
      v46 = (v23 | 7) + 1;
    }
    v45 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v46, 16, 0);
    *(_QWORD*)(v40 + 24) = v44;
    *(_QWORD*)(v40 + 32) = v45;
    *(_QWORD*)(v40 + 16) = v46 | 1;
  }
  else {
    v45 = v40 + 17;
    *(_BYTE*)(v40 + 16) = 2 * v23;
    if (v23 == 0) {
      goto LABEL_60;
    }
  }
  GameRoutine_1a0b940(v45, v43, v44);
LABEL_60:
  *(_BYTE*)(v45 + v44) = 0;
  *(_DWORD*)(v40 + 40) = 0;
  *(_QWORD*)(v40 + 48) = 0;
  *(_QWORD*)(v40 + 56) = 0;
  *(_QWORD*)(v40 + 64) = 0;
  *(_QWORD*)(v40 + 72) = 0;
  *(_QWORD*)v40 = GameData_20aa9a0;
  *(_QWORD*)(v40 + 88) = v37;
  *(_DWORD*)(v40 + 80) = 16843009;
  GameRoutine_16e0c00(v7, v40);
  GameRoutine_155cda0(v3 + 176LL * *(int*)(v3 + 992) + 464, "Wait", 0);
  v67 = 0;
  v68 = 0;
  v47 = GameData_212c540;
  v48 = *GameData_212de58[0];
  v49 = *((_QWORD*)GameData_212c540 + 1);
  v71 = *(_QWORD*)GameData_212c540;
  v72 = v49;
  v75 = v71;
  v76 = v49;
  v70 = 0;
  v69 = "UI_Deco_Bird_Select_Loop";
  v50 = *((_QWORD*)GameData_212c548 + 1);
  v73 = *(_QWORD*)GameData_212c548;
  v74 = v50;
  v51 = GameRoutine_bc6460(v48, &v67, 0);
  GameRoutine_14a10d0(&v67, v51, v52, &GameData_1a9f09e);
  v53 = v67;
  v54 = v68;
  if (v68 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v68 + 8), 1u,
                              memory_order_relaxed);
  }
  v55 = *(_QWORD*)(v3 + 280);
  *(_QWORD*)(v3 + 272) = v53;
  *(_QWORD*)(v3 + 280) = v54;
  if (v55 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
      GameRoutine_1a09c50(v55);
    }
    v54 = *(_QWORD*)(v3 + 280);
  }
  if (v54 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v54 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
      GameRoutine_1a09c50(v54);
    }
  }
  v56 = v68;
  if (v68 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v68 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
    GameRoutine_1a09c50(v56);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_21a6130) != 0) {
    v65 = v47[1];
    *(_QWORD*)&GameData_21a6120 = *v47;
    *((_QWORD*)&GameData_21a6120 + 1) = v65;
    GameRoutine_1a09fe0(&GameData_21a6130);
  }
  v66 = GameData_21a6120;
  v57 = GameRoutine_7a7dc0("L_Icon%02d", *(_DWORD*)(v3 + 992));
  v58 = GameRoutine_155f480(v3 + 168, v57);
  v59 = *(long double*)&v66;
  if (v58 != 0) {
    LODWORD(v59) = *(_DWORD*)(v58 + 124);
    DWORD1(v59) = *(_DWORD*)(v58 + 140);
  }
  v60 = *(__int64**)(v3 + 272);
  v61 = *v60;
  if (*v60 != 0 && *(_DWORD*)(v61 + 16) == *((_DWORD*)v60 + 2)) {
    v62 = *(_DWORD*)(v61 + 36);
    if (v62 != 0) {
      for (i = 0; i < v62; ++i) {
        if ((int)v62 > (int)i) {
          v64 = *(_QWORD*)(v61 + 40 + 8LL * (int)i);
          if (v64 != 0) {
            *(long double*)(v64 + 16) = v59;
            *(_BYTE*)(v64 + 128) = 1;
            v62 = *(_DWORD*)(v61 + 36);
          }
        }
      }
    }
  }
  return GameRoutine_14a3920(v59);
}

__int64 GameHr_170f8c0(__int64 a1, char a2)
{
  _QWORD* v4;
  __int64 v5;
  char v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64* v14;
  int v15;
  int v16;
  int v17;
  int* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  signed __int64 v34;
  char* v35;
  char* v36;
  signed __int64 v37;
  unsigned int v38;
  char* v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  __int64** v45;
  char* v46;
  __int64 v47;
  char* v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _QWORD* v64;
  _QWORD* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  int v75;
  _QWORD* v76;
  _QWORD* v77;
  int v78;
  __int64 v79;
  int v80;
  __int64* v82;
  __int64* v83;
  _QWORD* v84;
  int v85;
  __int64 v86;
  bool v87;
  __int64 v88;
  __int64 v89;
  signed __int64 v90;
  char* v91;
  unsigned __int8 v92;
  char v93[7];
  signed __int64 v94;
  char* v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;

  v4 = (_QWORD*)GameData_212bf68;
  v5 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1072, 16, 0);
  v6 = a2 & 1;
  v96 = 0;
  v97 = 0;
  GameRoutine_16dcd30(v5, (__int64)"HonorMenu", &v96, 0);
  v7 = GameData_212d6a8;
  v8 = v97;
  *(_QWORD*)v5 = GameData_212d6a8 + 2;
  *(_QWORD*)(v5 + 176) = v7 + 143;
  *(_QWORD*)(v5 + 1056) = v7 + 169;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    GameRoutine_1a09c50(v8);
  }
  v9 = GameData_2131cb8[0];
  *(_BYTE*)(v5 + 1068) = 0;
  *(_QWORD*)v5 = v9 + 16;
  *(_QWORD*)(v5 + 1056) = v9 + 1376;
  *(_QWORD*)(v5 + 176) = v9 + 1168;
  *(_DWORD*)(v5 + 1064) = 1;
  if (*(_QWORD*)GameData_2131da0[0] != 0) {
    v10 = GameRoutine_155ea30(*(_QWORD*)GameData_2131da0[0] + 168LL);
  }
  else {
    v10 = 0;
  }
  *(_BYTE*)(v5 + 1068) = v6;
  *(_BYTE*)(v5 + 1069) = v10 & 1;
  *(_QWORD*)v5 = GameData_20ab640;
  *(_QWORD*)(v5 + 176) = GameData_20abac8;
  *(_QWORD*)(v5 + 1056) = GameData_20abb98;
  v11 = GameRoutine_657850(v5, GameData_212c730, "ProcHonorMenu", 1, a1);
  v12 = GameRoutine_715440(v11);
  v14 = *(__int64**)(*GameData_212c9a0[0] + 64);
  v13 = *(__int64**)(*GameData_212c9a0[0] + 72);
  if (v14 == v13) {
    return v5;
  }
  v88 = 0;
  v15 = v12;
  v85 = v12;
  v82 = *(__int64**)(*GameData_212c9a0[0] + 72);
  v83 = GameData_212d630[0] + 2;
  v84 = (_QWORD*)v5;
  do {
    v86 = *v14;
    v16 = *(unsigned __int8*)(*v14 + 32);
    if (GameData_21caab0 != 0) {
      v17 = *(_DWORD*)(GameData_21caab0 + 60);
      if (v17 == 2) {
        if ((int)((unsigned __int64)(GameData_21f8120 - GameData_21f8118) >>
                  2) >= v16) {
          goto LABEL_9;
        }
      }
      else {
        if (v17 == 3 && *(int*)(GameData_21caab0 + 64) >= 2) {
          v18 = &GameData_21f8130;
          if ((int)((unsigned __int64)(GameData_21f8120 - GameData_21f8118) >>
                    2) >= v16) {
            goto LABEL_9;
          }
          goto LABEL_22;
        }
        if ((unsigned int)v16 <= 1) {
          goto LABEL_9;
        }
      }
    }
    else if ((unsigned int)v16 < 2) {
      goto LABEL_9;
    }
    v18 = &GameData_21f8110;
  LABEL_22:
    if ((int)((*((_QWORD*)v18 + 2) - *((_QWORD*)v18 + 1)) >> 2) >= v16) {
      v87 = v15 >= v16;
      v19 = GameRoutine_651b90(*v4, 88, 16, 0);
      v20 = GameData_21caab0;
      v21 = *(unsigned __int8*)(v86 + 32);
      *(_WORD*)(v19 + 80) = 257;
      LODWORD(v22) = 1;
      *(_WORD*)(v19 + 16) = 0;
      *(_DWORD*)(v19 + 40) = 0;
      *(_QWORD*)(v19 + 48) = 0;
      *(_QWORD*)(v19 + 56) = 0;
      *(_QWORD*)(v19 + 64) = 0;
      *(_QWORD*)(v19 + 72) = 0;
      *(_QWORD*)v19 = GameData_20abc48;
      *(_QWORD*)(v19 + 8) = 0;
      *(_BYTE*)(v19 + 82) = 1;
      if (v20 != 0) {
        v23 = *(_DWORD*)(v20 + 60);
        if (v23 == 2 || v23 == 3 && *(int*)(v20 + 64) >= 2) {
          v22 = (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
        }
        else {
          LODWORD(v22) = 1;
        }
      }
      *(_DWORD*)(v19 + 84) = ((v21 - v22) & ~((v21 - (int)v22) >> 31)) + 1;
      *(_BYTE*)(v19 + 82) = v87;
      GameRoutine_16e0c00((_QWORD*)v5, v19);
      GameRoutine_9c6120(&v96, *(_QWORD*)(v86 + 24));
      v25 = v96;
      v24 = v97;
      if (v97 != v96) {
        v26 = 0;
        while (2) {
          if (*(int*)v25 > 999) {
            goto LABEL_31;
          }
          v27 = GameData_21caab0;
          if (GameData_21caab0 != 0) {
            v28 =
                GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v25 + 8);
            v27 = v28 != 0 && *(_DWORD*)(v28 + 32) != 0;
          }
          if (*(unsigned __int8*)(v25 + 24) != v27) {
            goto LABEL_31;
          }
          v29 = *(_QWORD*)(v25 + 56);
          if (v29 == 0) {
            goto LABEL_31;
          }
          v92 = 12;
          strcpy(v93, "Notice");
          v30 = GameRoutine_1a09c70(v29);
          if (v30 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_156;
          }
          v31 = v30;
          if (v30 >= 0x17) {
            if ((v30 | 7) == 0x17) {
              v33 = 26;
            }
            else {
              v33 = (v30 | 7) + 1;
            }
            v32 = (char*)GameRoutine_651b90(*v4, v33, 16, 0);
            v90 = v31;
            v91 = v32;
            v89 = v33 | 1;
          }
          else {
            v32 = (char*)&v89 + 1;
            LOBYTE(v89) = 2 * v30;
            if (v30 == 0) {
            LABEL_48:
              v32[v31] = 0;
              v34 = (unsigned __int64)(unsigned __int8)v89 >> 1;
              if ((v89 & 1) != 0) {
                v35 = v91;
              }
              else {
                v35 = (char*)&v89 + 1;
              }
              if ((v89 & 1) != 0) {
                v34 = v90;
              }
              if ((v92 & 1) != 0) {
                v36 = v95;
              }
              else {
                v36 = v93;
              }
              if ((v92 & 1) != 0) {
                v37 = v94;
              }
              else {
                v37 = (unsigned __int64)v92 >> 1;
              }
              if (v37 != 0) {
                if (v34 < v37) {
                  goto LABEL_99;
                }
                v38 = (unsigned __int8)*v36;
                v39 = &v35[v34];
                v40 = v35;
                while (1) {
                  v41 = GameRoutine_1a09c60(v40, v38, v34 - v37 + 1);
                  if (v41 == 0) {
                    goto LABEL_98;
                  }
                  v42 = v41;
                  if ((unsigned int)GameRoutine_1a09cf0(v41, v36, v37) == 0) {
                    break;
                  }
                  v40 = (char*)(v42 + 1);
                  v34 = (signed __int64)&v39[-v42 - 1];
                  if (v34 < v37) {
                    goto LABEL_98;
                  }
                }
                if ((char*)v42 == v39 ||
                    (v43 = v42 - (_QWORD)v35, v42 - (_QWORD)v35 == -1)) {
                LABEL_98:
                  v5 = (__int64)v84;
                LABEL_99:
                  v4 = (_QWORD*)GameData_212bf68;
                  v15 = v85;
                  goto LABEL_100;
                }
              }
              else {
                v43 = 0;
              }
              GameRoutine_1a0a8e0(&v89, v43, v37, "Menu", 4);
              v44 = (_QWORD*)GameData_212bf68;
              v45 = (__int64**)GameRoutine_651b90(*(_QWORD*)GameData_212bf68,
                                                  112, 16, 0);
              v46 = *(char**)(v25 + 48);
              v47 = (__int64)v45;
              if ((v89 & 1) != 0) {
                v48 = v91;
              }
              else {
                v48 = (char*)&v89 + 1;
              }
              *v45 = v83;
              v45[1] = nullptr;
              v30 = GameRoutine_1a09c70(v48);
              if (v30 >= 0xFFFFFFFFFFFFFFF7LL) {
              LABEL_156:
                GameRoutine_60a1d0(v30);
              }
              v49 = v30;
              if (v30 >= 0x17) {
                if ((v30 | 7) == 0x17) {
                  v51 = 26;
                }
                else {
                  v51 = (v30 | 7) + 1;
                }
                v50 = GameRoutine_651b90(*v44, v51, 16, 0);
                *(_QWORD*)(v47 + 24) = v49;
                *(_QWORD*)(v47 + 32) = v50;
                *(_QWORD*)(v47 + 16) = v51 | 1;
              }
              else {
                v50 = v47 + 17;
                *(_BYTE*)(v47 + 16) = 2 * v30;
                if (v30 == 0) {
                LABEL_79:
                  *(_BYTE*)(v50 + v49) = 0;
                  *(_DWORD*)(v47 + 40) = 0;
                  *(_QWORD*)(v47 + 48) = 0;
                  *(_QWORD*)(v47 + 56) = 0;
                  *(_QWORD*)(v47 + 64) = 0;
                  *(_QWORD*)(v47 + 72) = 0;
                  *(_WORD*)(v47 + 80) = 257;
                  *(_BYTE*)(v47 + 82) = 1;
                  if (v46 != nullptr) {
                    v52 = v46;
                  }
                  else {
                    v52 = &GameData_1a9f09e;
                  }
                  *(_QWORD*)v47 = GameData_20abeb8;
                  v30 = GameRoutine_1a09c70(v52);
                  if (v30 >= 0xFFFFFFFFFFFFFFF7LL) {
                    goto LABEL_156;
                  }
                  v5 = (__int64)v84;
                  v53 = v30;
                  if (v30 >= 0x17) {
                    if ((v30 | 7) == 0x17) {
                      v55 = 26;
                    }
                    else {
                      v55 = (v30 | 7) + 1;
                    }
                    v54 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v55,
                                             16, 0);
                    *(_QWORD*)(v47 + 96) = v53;
                    *(_QWORD*)(v47 + 104) = v54;
                    *(_QWORD*)(v47 + 88) = v55 | 1;
                  }
                  else {
                    v54 = v47 + 89;
                    *(_BYTE*)(v47 + 88) = 2 * v30;
                    if (v30 == 0) {
                      goto LABEL_91;
                    }
                  }
                  GameRoutine_1a0b940(v54, v52, v53);
                LABEL_91:
                  *(_BYTE*)(v54 + v53) = 0;
                  *(_BYTE*)(v47 + 82) = v87;
                  GameRoutine_16e0c00(v84, v47);
                  ++v26;
                  if (v88 != 0) {
                    goto LABEL_99;
                  }
                  v15 = v85;
                  if (v85 == *(unsigned __int8*)(v86 + 32)) {
                    v56 = v47;
                  }
                  else {
                    v56 = 0;
                  }
                  v88 = v56;
                  v4 = (_QWORD*)GameData_212bf68;
                LABEL_100:
                  if ((v89 & 1) != 0 && v91 != nullptr) {
                    v57 = 128;
                    if (*(_QWORD*)(*v4 + 200LL) == 0) {
                      v57 = 56;
                    }
                    GameRoutine_1a0a4e0(*v4 + v57, v91);
                  }
                  if ((v92 & 1) != 0 && v95 != nullptr) {
                    v58 = 128;
                    if (*(_QWORD*)(*v4 + 200LL) == 0) {
                      v58 = 56;
                    }
                    GameRoutine_1a0a4e0(*v4 + v58, v95);
                  }
                LABEL_31:
                  v25 += 64;
                  if (v25 == v24) {
                    goto LABEL_111;
                  }
                  continue;
                }
              }
              GameRoutine_1a0b940(v50, v48, v49);
              goto LABEL_79;
            }
          }
          break;
        }
        GameRoutine_1a0b940(v32, v29, v31);
        goto LABEL_48;
      }
      v26 = 0;
    LABEL_111:
      if ((int)((unsigned __int64)(v99 - v98) >> 3) >= 1) {
        v59 = ((unsigned __int64)(v99 - v98) >> 3) & 0x7FFFFFFF;
        v60 = 1;
        v61 = 0;
        do {
          v63 = v61 + 1;
          v64 = *(_QWORD**)(v98 + 8 * v61);
          if (v61 + 1 < v59 &&
              (v65 = *(_QWORD**)(v98 + 8 * v61 + 8)) != nullptr &&
              *v64 == *v65) {
            ++v60;
          }
          else {
            v66 = GameRoutine_651b90(*v4, 104, 16, 0);
            *(_WORD*)(v66 + 16) = 0;
            *(_DWORD*)(v66 + 40) = 0;
            *(_QWORD*)(v66 + 48) = 0;
            *(_QWORD*)(v66 + 56) = 0;
            *(_QWORD*)(v66 + 64) = 0;
            *(_QWORD*)(v66 + 72) = 0;
            *(_QWORD*)(v66 + 88) = v64;
            *(_DWORD*)(v66 + 96) = v60;
            *(_WORD*)(v66 + 80) = 257;
            *(_QWORD*)v66 = GameData_20ac110;
            *(_QWORD*)(v66 + 8) = 0;
            *(_BYTE*)(v66 + 82) = v87;
            GameRoutine_16e0c00((_QWORD*)v5, v66);
            ++v26;
            if (v88 != 0) {
              v60 = 1;
            }
            else {
              v60 = 1;
              if (v15 == *(unsigned __int8*)(v86 + 32)) {
                v62 = v66;
              }
              else {
                v62 = 0;
              }
              v88 = v62;
            }
          }
          v61 = v63;
        } while (v59 != v63);
      }
      if (v26 <= 0) {
        v67 = GameRoutine_651b90(*v4, 88, 16, 0);
        *(_WORD*)(v67 + 16) = 0;
        *(_DWORD*)(v67 + 40) = 0;
        *(_QWORD*)(v67 + 48) = 0;
        *(_QWORD*)(v67 + 56) = 0;
        *(_QWORD*)(v67 + 64) = 0;
        *(_QWORD*)(v67 + 72) = 0;
        *(_WORD*)(v67 + 80) = 257;
        *(_BYTE*)(v67 + 82) = 1;
        *(_QWORD*)v67 = GameData_20ac368;
        *(_QWORD*)(v67 + 8) = 0;
        GameRoutine_16e0c00((_QWORD*)v5, v67);
      }
      v13 = v82;
      if (v98 != 0) {
        v68 = *v4;
        v99 = v98;
        v69 = 128;
        if (*(_QWORD*)(v68 + 200) == 0) {
          v69 = 56;
        }
        GameRoutine_1a0a4e0(v68 + v69, v98);
      }
      if (v96 != 0) {
        v70 = *v4;
        v97 = v96;
        v71 = 128;
        if (*(_QWORD*)(v70 + 200) == 0) {
          v71 = 56;
        }
        GameRoutine_1a0a4e0(v70 + v71, v96);
      }
    }
  LABEL_9:
    ++v14;
  } while (v14 != v13);
  if (v88 != 0) {
    v72 = *(_QWORD*)(v5 + 336);
    if (v72 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v72 + 168LL))(v72);
    }
    *(_QWORD*)(v5 + 336) = v88;
    GameRoutine_16dea40(v5, 1, 0, 0);
    v73 = *(_QWORD*)(v5 + 336);
    if (v73 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v73 + 160LL))(v73);
      GameRoutine_1990fb0(*(_QWORD*)GameData_212c470 + 712LL);
      v74 = *(_QWORD*)(v5 + 336);
      v75 = 4;
      if (v74 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v74 + 120LL))(v74) & 1) != 0) {
          v75 = 4;
        }
        else {
          v75 = 0;
        }
      }
    }
    else {
      v75 = 4;
    }
    v76 = *(_QWORD**)(v5 + 232);
    v77 = *(_QWORD**)(v5 + 240);
    *(_DWORD*)(v5 + 356) = *(_DWORD*)(v5 + 356) & 0xFFFFFFFB | v75;
    if (v76 != v77) {
      v78 = 0;
      do {
        v79 = *v76;
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v76 + 48LL))(*v76) & 1) != 0) {
          if (v79 == *(_QWORD*)(v5 + 336)) {
            goto LABEL_151;
          }
          ++v78;
        }
        ++v76;
      } while (v76 != v77);
    }
    v78 = -1;
  LABEL_151:
    if (v78 <= 1) {
      v80 = 1;
    }
    else {
      v80 = v78;
    }
    *(_DWORD*)(v5 + 552) = v80 - 1;
    GameRoutine_16dea40(v5, 1, 0, 0);
  }
  return v5;
}

#pragma GCC visibility pop
