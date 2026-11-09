#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern _QWORD GameData_1b01688[4];
extern __int64* GameData_212d480[2];
extern __int64* GameData_212dfc8;
extern _UNKNOWN* GameData_212dfd0;
extern __int64* GameData_2134208[5];
extern __int64* GameData_2134248[3];
extern __int64* GameData_2134250[2];
extern __int64* GameData_21346b8[4];
__n128 GameRoutine_10c830(_QWORD, double);
__n128 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_112290(_QWORD, float);
__int64 GameRoutine_112460(_QWORD);
__int64 GameRoutine_126190(_QWORD*);
__n128 GameRoutine_1264f0(_QWORD*);
__int64 GameRoutine_1a09d30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09f60(_QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a150(_QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0bae0(_QWORD);
__int64 GameRoutine_571930(_QWORD, _QWORD);
__int64 GameRoutine_571cd0(_QWORD);
__int64 GameRoutine_58d5b0(_QWORD, _QWORD);
__int64 GameRoutine_58d820(_QWORD, _QWORD);
__n128 GameRoutine_599ea0(_QWORD);
__int64 GameRoutine_59d8e0(_QWORD, _QWORD, long double);
long double GameRoutine_59d920(_QWORD, _QWORD);
__int64 GameRoutine_59e760(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
float GameRoutine_59f160(_QWORD, _QWORD, float);
__int64 GameRoutine_59f2e0(_QWORD, float, float);
float GameRoutine_59fbe0(_QWORD);
__int64 GameRoutine_5fc420(_QWORD);
__int64 GameRoutine_9b9250(float, long double, long double, long double,
                           long double);
__int64 GameRoutine_d50a0(_QWORD);
__int64 GameRoutine_d7e10(_QWORD, _QWORD, long double);
__int64 GameRoutine_d9740(_QWORD, _QWORD, float);
__int64 GameRoutine_dbd00(_QWORD, _QWORD, float);
void __attribute__((noreturn)) GameRoutine_ee1b0(void);
__int64 GameRoutine_f35a0(__int64, __int64, __int64, __int64, __int64, __int64);
__int64 GameRoutine_f77e0(void);
__int64 GameRoutine_f8300(_QWORD, _QWORD, _QWORD);

void GameHr_e70d0(__int64 a1, float a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  double v7;
  long double v8;
  __int64 v9;
  double v10;
  __int64 v11;
  __int64 v12;
  double v13;
  _BYTE v14[200];
  __int64 v15;
  __int64 v16;

  v15 = v2;
  v16 = v3;
  v5 = GameRoutine_112290(a1 + 8, a2);
  if (*(_BYTE*)(a1 + 24) == 1 &&
      (v5 == 0 || ((v5 = (*(__int64 (**)(__int64))(*(_QWORD*)(v5 - 5592) +
                                                   376LL))(v5 - 5592)) &
                   1) == 0)) {
    if ((*(_BYTE*)(a1 + 25) & 1) == 0) {
      if (*(_BYTE*)(a1 + 26) == 1) {
        v6 = GameRoutine_d50a0(v5);
        LODWORD(v7) = 1148846080;
        *(__n128*)&v8 = GameRoutine_10c830(v14, v7);
        GameRoutine_d7e10(v6, v14, v8);
        GameRoutine_10cff0(v14);
      }
      if (*(_BYTE*)(a1 + 27) == 1) {
        v9 = GameRoutine_d50a0(v5);
        LODWORD(v10) = 1148846080;
        GameRoutine_10c830(v14, v10);
        GameRoutine_d9740(v9, v14, 1.0);
        GameRoutine_10cff0(v14);
        if (*(_BYTE*)(a1 + 27) == 1) {
          v12 = GameRoutine_d50a0(v11);
          LODWORD(v13) = 1148846080;
          GameRoutine_10c830(v14, v13);
          GameRoutine_dbd00(v12, v14, 1.0);
          GameRoutine_10cff0(v14);
        }
      }
    }
    *(_DWORD*)(a1 + 24) = 0;
  }
}

__int64 GameHr_f35a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6)
{
  unsigned __int64 v7;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  char* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  char v31;
  char v32;
  __int64 v33;
  __int64 result;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  int v44;
  char v45;
  float v46;
  __int64 v47;

  *(_DWORD*)(a1 + 28) = 0;
  *(_BYTE*)(a1 + 136) = 0;
  v7 = *(int*)(a1 + 24);
  *(_QWORD*)(a1 + 96) = 0;
  *(_DWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_DWORD*)(a1 + 128) = 0;
  *(_BYTE*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 140) = 0;
  *(_DWORD*)(a1 + 80) = 1065353216;
  v9 = *(_QWORD*)(a1 + 8);
  v10 = *(char**)a1;
  v11 = v9 - *(_QWORD*)a1;
  v12 = v7 - v11;
  if (v7 > v11) {
    v13 = *(_QWORD*)(a1 + 16);
    if (v13 - v9 >= v12) {
      v33 = v9 + v12;
      GameRoutine_1a0ba50(v9, 0, v7 - v11, a4, a5, a6);
      *(_QWORD*)(a1 + 8) = v33;
      goto LABEL_21;
    }
    if ((v7 & 0x80000000) != 0) {
      GameRoutine_ee1b0();
    }
    v14 = v13 - (_QWORD)v10;
    v15 = GameData_212d480[0];
    v16 = 2 * v14;
    if (2 * v14 <= v7) {
      v16 = v7;
    }
    if (v14 >= 0x3FFFFFFFFFFFFFFFLL) {
      v17 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v16;
    }
    v18 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], v17, 32);
    v19 = v18 + v11;
    v20 = v18 + v17;
    v21 = v18 + v7;
    GameRoutine_1a0ba50(v19, 0, v12, v22, v23, v24);
    v25 = *(char**)a1;
    v26 = *(char**)(a1 + 8);
    v27 = *(_QWORD*)a1 - (_QWORD)v26;
    v28 = v19 + v27;
    if (*(char**)a1 == v26) {
      goto LABEL_16;
    }
    v29 = ((int)v26 - (int)v25) & 7LL;
    if (v29 != 0) {
      v30 = (char*)(v19 + v27);
      do {
        v31 = *v25++;
        --v29;
        *v30++ = v31;
      } while (v29 != 0);
      if (v27 > 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_15;
      }
    }
    else {
      v30 = (char*)(v19 + v27);
      if (v27 > 0xFFFFFFFFFFFFFFF8LL) {
      LABEL_15:
        v25 = *(char**)a1;
      LABEL_16:
        *(_QWORD*)a1 = v28;
        *(_QWORD*)(a1 + 8) = v21;
        *(_QWORD*)(a1 + 16) = v20;
        if (v25 != nullptr) {
          (*(void (**)(__int64))(*(_QWORD*)*v15 + 24LL))(*v15);
        }
        goto LABEL_21;
      }
    }
    do {
      *v30 = *v25;
      v30[1] = v25[1];
      v30[2] = v25[2];
      v30[3] = v25[3];
      v30[4] = v25[4];
      v30[5] = v25[5];
      v30[6] = v25[6];
      v32 = v25[7];
      v25 += 8;
      v30[7] = v32;
      v30 += 8;
    } while (v25 != v26);
    goto LABEL_15;
  }
  if (v7 < v11) {
    *(_QWORD*)(a1 + 8) = &v10[v7];
  }
LABEL_21:
  v35 = *(_QWORD*)(a1 + 48);
  result = a1 + 48;
  v36 = *(int*)(a1 + 24);
  v37 = 0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD*)(a1 + 56) - v35) >> 3);
  if (v36 <= v37) {
    if (v36 < v37) {
      *(_QWORD*)(a1 + 56) = v35 + 104LL * (int)v36;
    }
  }
  else {
    result = GameRoutine_f77e0();
  }
  v38 = *(_DWORD*)(a2 + 8);
  if (v38 != 0) {
    if (v38 == 2) {
      if (*(int*)(a1 + 24) >= 1) {
        v39 = 0;
        do {
          *(_BYTE*)(*(_QWORD*)a1 + v39) = v39;
          ++v39;
        } while (v39 < *(int*)(a1 + 24));
      }
      v40 = 1000;
      do {
        v41 = *(_DWORD*)(a1 + 24) - 1;
        v42 = GameRoutine_1a0bae0(result);
        v43 = *(_DWORD*)(a1 + 24) - 1;
        v44 = (int)(float)((float)((float)v41 + 0.9f) *
                           vcvts_n_f32_s32(v42, 0x1Fu));
        result = GameRoutine_1a0bae0(v42);
        --v40;
        v45 = *(_BYTE*)(*(_QWORD*)a1 + v44);
        v46 = (float)((float)v43 + 0.9f) * vcvts_n_f32_s32(result, 0x1Fu);
        *(_BYTE*)(*(_QWORD*)a1 + v44) = *(_BYTE*)(*(_QWORD*)a1 + (int)v46);
        *(_BYTE*)(*(_QWORD*)a1 + (int)v46) = v45;
      } while (v40 != 0);
    }
    else if (*(int*)(a1 + 24) >= 1) {
      v47 = 0;
      do {
        *(_BYTE*)(*(_QWORD*)a1 + v47) = v47;
        ++v47;
      } while (v47 < *(int*)(a1 + 24));
    }
  }
  return result;
}

__int64 GameHr_f5940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6)
{
  int v6;
  int v7;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  __int64 v18;
  int v19;
  float v20;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 result;

  v6 = *(_DWORD*)(a1 + 552);
  v7 = a3;
  *(_DWORD*)(a2 + 32) = a3;
  *(_DWORD*)(a2 + 24) = v6;
  GameRoutine_f35a0(a2, a1, a3, a4, a5, a6);
  v10 = GameData_2134208[0];
  if (*(int*)(a2 + 24) >= 1) {
    v11 = 96;
    v12 = 0;
    v13 = 0;
    do {
      *(_DWORD*)(*(_QWORD*)(a1 + 544) + v12 + 96) = GameRoutine_f8300(
          v10 + 1, *(_QWORD*)(*(_QWORD*)(a1 + 544) + v12 + 88),
          *(unsigned int*)(*(_QWORD*)(a1 + 544) + v12 + 96));
      *(_DWORD*)(*(_QWORD*)(a1 + 544) + v12 + 368) = GameRoutine_f8300(
          v10 + 1, *(_QWORD*)(*(_QWORD*)(a1 + 544) + v12 + 360),
          *(unsigned int*)(*(_QWORD*)(a1 + 544) + v12 + 368));
      v16 = GameRoutine_f8300(
          v10 + 1, *(_QWORD*)(*(_QWORD*)(a1 + 544) + v12 + 376),
          *(unsigned int*)(*(_QWORD*)(a1 + 544) + v12 + 384));
      *(_DWORD*)(*(_QWORD*)(a1 + 544) + v12 + 384) = v16;
      v17 = (_BYTE*)(*(_QWORD*)(a2 + 48) + v11);
      v18 = *(_QWORD*)(a1 + 544) + v12;
      v19 = *(_DWORD*)(v18 + 136);
      v20 = *(float*)(v18 + 140);
      *((_QWORD*)v17 - 12) = 0;
      *((_DWORD*)v17 - 22) = v7;
      *((_DWORD*)v17 - 16) = 1065353216;
      *(v17 - 8) = 0;
      *((_QWORD*)v17 - 6) = 0;
      *((_DWORD*)v17 - 10) = 0;
      *((_QWORD*)v17 - 3) = 0;
      *((_DWORD*)v17 - 4) = 0;
      *v17 = 0;
      *((_DWORD*)v17 - 1) = 0;
      if (v19 == 2 && v20 > -10000.0f) {
        if ((int)v20 != 0) {
          v22 = (int)v20 - 1;
        }
        else {
          v22 = 0;
        }
        *((_DWORD*)v17 - 23) =
            (int)(float)((float)((float)v22 + 0.9f) *
                         vcvts_n_f32_s32(GameRoutine_1a0bae0(v16), 0x1Fu));
      }
      v14 = v12 + *(_QWORD*)(a1 + 544);
      v12 += 528;
      *(_QWORD*)(*(_QWORD*)(a2 + 48) + v11 - 72) = v14;
      *(_DWORD*)(*(_QWORD*)(a2 + 48) + v11 - 84) =
          v13 + *(_DWORD*)(a2 + 36) + 1;
      LODWORD(v14) = v13 + *(_DWORD*)(a2 + 36);
      v15 = *(_QWORD*)(a2 + 48) + v11;
      ++v13;
      v11 += 104;
      *(_DWORD*)(v15 - 80) = v14 + 1;
    } while (v13 < *(int*)(a2 + 24));
  }
  v23 = GameRoutine_f8300(v10 + 1, *(_QWORD*)(a1 + 104),
                          *(unsigned int*)(a1 + 112));
  v24 = *(_QWORD*)(a1 + 376);
  v25 = *(unsigned int*)(a1 + 384);
  *(_DWORD*)(a1 + 112) = v23;
  v26 = GameRoutine_f8300(v10 + 1, v24, v25);
  v27 = *(_QWORD*)(a1 + 392);
  v28 = *(unsigned int*)(a1 + 400);
  *(_DWORD*)(a1 + 384) = v26;
  result = GameRoutine_f8300(v10 + 1, v27, v28);
  *(_DWORD*)(a1 + 400) = result;
  return result;
}

__int64 GameHr_149f60(_QWORD* a1)
{
  _BYTE* v1;
  __int64* v3;
  void (***v4)(_QWORD, _QWORD);
  _QWORD* v5;
  __int64* v6;
  void (***v7)(_QWORD, _QWORD);
  void (***v8)(_QWORD, _QWORD);
  void (***v9)(_QWORD, _QWORD);
  void (***v10)(_QWORD, _QWORD);
  void (**v11)(_QWORD, _QWORD);
  bool v12;
  __int64 v13;

  v1 = a1 + 512;
  v3 = GameData_21346b8[0];
  v4 = (void (***)(_QWORD, _QWORD))a1[751];
  *a1 = GameData_21346b8[0] + 2;
  a1[699] = v3 + 154;
  a1[5] = v3 + 13;
  v5 = a1 + 5;
  v6 = GameData_212d480[0];
  if (v4 != nullptr) {
    v7 = (void (***)(_QWORD, _QWORD))a1[752];
    v8 = v4;
    if (v4 != v7) {
      v9 = v7 - 5;
      v10 = v7 - 5;
      do {
        v11 = *v10;
        v10 -= 5;
        (*v11)(v9, v8);
        v12 = v9 == v4;
        v9 = v10;
      } while (!v12);
      v8 = (void (***)(_QWORD, _QWORD))a1[751];
    }
    v13 = *v6;
    a1[752] = v4;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v13 + 24LL))(v13, v8);
  }
  GameRoutine_1a09f60(a1 + 743);
  if ((v1[1640] & 1) == 0) {
    if ((v1[1616] & 1) == 0) {
      goto LABEL_10;
    }
  LABEL_14:
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v6 + 24LL))(*v6, a1[716]);
    if ((v1[1584] & 1) == 0) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v6 + 24LL))(*v6, a1[719]);
  if ((v1[1616] & 1) != 0) {
    goto LABEL_14;
  }
LABEL_10:
  if ((v1[1584] & 1) != 0) {
  LABEL_11:
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v6 + 24LL))(*v6, a1[712]);
  }
LABEL_12:
  a1[699] = GameData_2134248[0] + 2;
  GameRoutine_112460(a1 + 699);
  GameRoutine_1264f0(v5);
  return GameRoutine_126190(a1);
}

__int64 GameHr_1679b0(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;

  v2 = GameData_2134250[0] + 28;
  *a1 = GameData_2134250[0] + 2;
  a1[5] = v2;
  v3 = a1 + 5;
  a1[699] = GameData_2134248[0] + 2;
  GameRoutine_112460(a1 + 699);
  GameRoutine_1264f0(v3);
  return GameRoutine_126190(a1);
}

void GameHr_56f760(__int64 a1, float* a2, __int64 a3, __int64 a4, __int64 a5,
                   __int64 a6, __int64 a7, __int64 a8)
{
  int v8;
  bool v10;
  __int64 v11;
  float* v12;
  __int64 v13;
  atomic_uchar* v14;
  __int64* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  float v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  float v26;
  float v27;
  __int64 v28;
  float v29;
  unsigned __int64 v30;
  float v31;
  float v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  float v36;
  float* v37;
  char v38;
  __int64 v39;
  int v40;
  float* v41;
  int v42;
  float* v43;
  __int64 v44;
  int v46;
  int v47;
  float* v49;
  float* v50;
  float v51;
  unsigned __int64 v52;
  float v53;
  __int64 v54;
  float v55;
  __int64 v56;
  float v57;
  __int64 v58;
  unsigned __int8 v59;
  __int64 v60;
  float v61;
  __int64 v62;
  _WORD* v63;
  __int64 v64;
  __int64 v65;
  float* v66;
  float v67;
  _QWORD* v69;
  __int64* v70;
  __int64 v72;
  __int64 v73;
  unsigned int v74;
  __int64** v75;
  __int64* v76;
  __int64* v77;
  __int64* v78;
  __int64* v79;
  __int64* v80;
  __int64* v81;
  __int64 v82;
  __int64* v83;
  float* v84;
  __int64 v85;
  __int64* v86;
  __int64 v88;
  float v89;
  long double v90;
  long double v91;
  long double v92;
  long double v93;
  float v94;
  long double v95;
  long double v96;
  long double v97;
  long double v98;
  unsigned __int64 v99;
  float v100;
  float v101;
  float v102;
  __int64 v103;
  __int64 v104;
  unsigned __int8 v105;
  __int64 v106;
  float v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  float v112;
  float v113;
  __int64 v114;
  __int64 v115;
  float v116;
  unsigned __int64 v117;
  float v118;
  __int64 v119;
  float v120;
  unsigned __int64 v121;
  unsigned __int64 v122;
  float v123;
  long double v124;
  __int64 v125;
  __int64 v126;
  long double v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  float* v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;

  v8 = *(unsigned __int8*)(a3 + 29);
  v129 = a1;
  v10 = v8 == 4 || v8 == 2;
  if (v10) {
    v11 = *(unsigned int*)(a3 + 32);
    if (*(_BYTE*)(a3 + 28) != 0) {
    LABEL_9:
      v12 = a2 + 12;
      v13 = 0;
      v131 = a3 + v11;
      v14 = (atomic_uchar*)GameData_212dfd0;
      v15 = GameData_212dfc8;
      v130 = a3;
      v132 = a2 + 12;
      do {
        v133 = v13;
        v16 = a3 + *(unsigned int*)(v131 + 4 * v13);
        v18 = v16 + 8;
        v17 = *(_DWORD*)v16;
        v135 = v16 + 8;
        if (*(int*)v16 <= 1314344005) {
          if (v17 > 1129729093) {
            if (v17 == 1129729094) {
              if (*(_BYTE*)(v16 + 4) != 0) {
                v99 = 0;
                v100 = *(float*)(v129 + 32);
                do {
                  v103 = v16 + *(unsigned int*)(v18 + 4 * v99);
                  v104 = *(unsigned int*)(v103 + 8);
                  if (*(_BYTE*)(v103 + 2) == 3) {
                    (*(void (**)(float*, _QWORD))(*(_QWORD*)a2 + 48LL))(
                        a2, *(unsigned __int8*)(v103 + 1));
                    GameRoutine_59f2e0(v103 + v104, v100, (float)v105);
                  }
                  else {
                    v101 = GameRoutine_59f160(
                        v103 + v104, *(unsigned __int16*)(v103 + 4), v100);
                  }
                  v102 = v101 + 0.5;
                  if (v102 < 0.0) {
                    v102 = 0.0;
                  }
                  if (v102 > 255.0) {
                    v102 = 255.0;
                  }
                  (*(void (**)(float*, _QWORD, _QWORD))(*(_QWORD*)a2 + 56LL))(
                      a2, *(unsigned __int8*)(v103 + 1),
                      (unsigned int)(int)v102);
                  ++v99;
                } while (v99 < *(unsigned __int8*)(v16 + 4));
              }
            }
            else if (v17 == 1230392390 && *(_BYTE*)(v16 + 4) != 0) {
              v35 = 0;
              v36 = *(float*)(v129 + 32);
              do {
                v39 = v16 + *(unsigned int*)(v18 + 4 * v35);
                v40 = *(unsigned __int16*)(v39 + 4);
                v41 = (float*)(v39 + *(unsigned int*)(v39 + 8));
                v42 = v40 - 1;
                if (v40 == 1 || v36 <= *v41) {
                  v37 = v41 + 1;
                }
                else {
                  v43 = &v41[2 * v42];
                  if (v36 >= *v43) {
                    v37 = v43 + 1;
                  }
                  else {
                    if ((unsigned int)(v40 - 3) > 0xFFFFFFFD) {
                      v44 = 0;
                    }
                    else {
                      LODWORD(v44) = 0;
                      do {
                        while (1) {
                          v46 = (v42 + (int)v44) / 2;
                          if (v36 >= v41[2 * v46]) {
                            break;
                          }
                          v42 = (v42 + (int)v44) / 2;
                          v47 = v46 - 1;
                          if ((_DWORD)v44 == v42 || (_DWORD)v44 == v47) {
                            goto LABEL_56;
                          }
                        }
                        LODWORD(v44) = (v42 + (int)v44) / 2;
                      } while (v46 != v42 && v46 != v42 - 1);
                    LABEL_56:
                      v44 = (int)v44;
                    }
                    v49 = &v41[2 * v42];
                    v37 = &v41[2 * v44 + 1];
                    v51 = *v49;
                    v50 = v49 + 1;
                    if (vabds_f32(v36, v51) < 0.001) {
                      v37 = v50;
                    }
                  }
                }
                ++v35;
                v10 = *(unsigned __int16*)v37 == 0;
                v38 = (_BYTE)a2[22] & 0xFE;
                if (!v10) {
                  ++v38;
                }
                *((_BYTE*)a2 + 88) = v38;
              } while (v35 < *(unsigned __int8*)(v16 + 4));
            }
            goto LABEL_10;
          }
          if (v17 != 1095586630) {
            if (v17 == 1095781446 && *(_BYTE*)(v16 + 4) != 0) {
              v30 = 0;
              v31 = *(float*)(v129 + 32);
              do {
                v33 = v16 + *(unsigned int*)(v18 + 4 * v30);
                v34 = *(unsigned int*)(v33 + 8);
                if (*(_BYTE*)(v33 + 2) == 3) {
                  GameRoutine_59f2e0(v33 + v34, v31,
                                     v12[*(unsigned __int8*)(v33 + 1)]);
                }
                else {
                  v32 = GameRoutine_59f160(v33 + v34,
                                           *(unsigned __int16*)(v33 + 4), v31);
                }
                ++v30;
                v12[*(unsigned __int8*)(v33 + 1)] = v32;
                *((_BYTE*)a2 + 88) |= 0x10u;
              } while (v30 < *(unsigned __int8*)(v16 + 4));
            }
            goto LABEL_10;
          }
          v59 = *(_BYTE*)(v16 + 4);
          if (v59 != 0) {
            v60 = 0;
            v134 = a3 + *(unsigned int*)(v131 + 4 * v13);
            v61 = *(float*)(v129 + 32);
            while (1) {
              v62 = v16 + *(unsigned int*)(v18 + 4 * v60);
              v63 = (_WORD*)(v62 + *(unsigned int*)(v62 + 8));
              v64 = (unsigned __int16)*v63;
              if (*v63 != 0) {
                break;
              }
            LABEL_72:
              v16 = v134;
              if (++v60 >= (unsigned __int64)v59) {
                goto LABEL_10;
              }
            }
            v65 = 0;
            while (2) {
              v66 = (float*)((char*)v63 + *(unsigned int*)&v63[2 * v65 + 2]);
              v67 = v66[4];
              if (v61 >= v67 && (float)(v67 + 0.1) >= v61) {
                v69 = *((_QWORD**)v66 + 1);
                if (*v69 != 0 || v69[1] != 0 || v69[2] != 0) {
                  if ((unsigned int)GameRoutine_1a09d30(
                          *v69, "body", a3, a4, a5, a6, a7, a8, v128, v129,
                          v130, v131, v132, v133, v134, v135, v136,
                          v137) != 0) {
                    if ((atomic_load_explicit(v14, memory_order_acquire) & 1) ==
                            0 &&
                        (unsigned int)GameRoutine_1a09fd0(v14) != 0) {
                      *v15 = GameRoutine_9b9250(v94, v95, v96, v97, v98);
                      GameRoutine_1a09fe0(v14);
                    }
                    v70 = (__int64*)(*(__int64 (**)(float*))(*(_QWORD*)a2 +
                                                             16LL))(a2);
                    if (v70 != v15) {
                      do {
                        v70 = (__int64*)*v70;
                      } while (v70 != v15 && v70 != nullptr);
                    }
                    v72 = GameRoutine_58d5b0(
                        *(_QWORD*)(*((_QWORD*)a2 + 29) + 24LL), 19);
                    if (v72 != 0) {
                      goto LABEL_92;
                    }
                  }
                  else if (a2 != nullptr) {
                    v84 = a2;
                    while (1) {
                      if ((unsigned int)GameRoutine_1a09d30(
                              v84 + 44, "RootPane", a3, a4, a5, a6, a7, a8,
                              v128, v129, v130, v131, v132, v133, v134, v135,
                              v136, v137) == 0) {
                        v85 = GameRoutine_58d5b0(v84, 19);
                        if (v85 != 0 && *(_QWORD*)(v85 + 8) != 0) {
                          break;
                        }
                      }
                      if ((atomic_load_explicit(v14, memory_order_acquire) &
                           1) == 0 &&
                          (unsigned int)GameRoutine_1a09fd0(v14) != 0) {
                        *v15 = GameRoutine_9b9250(v89, v90, v91, v92, v93);
                        GameRoutine_1a09fe0(v14);
                      }
                      v86 = (__int64*)(*(__int64 (**)(float*))(*(_QWORD*)v84 +
                                                               16LL))(v84);
                      if (v86 == v15) {
                        goto LABEL_111;
                      }
                      do {
                        v86 = (__int64*)*v86;
                      } while (v86 != v15 && v86 != nullptr);
                      if (v86 != nullptr) {
                      LABEL_111:
                        v88 = GameRoutine_58d5b0(
                            *(_QWORD*)(*((_QWORD*)v84 + 29) + 24LL), 19);
                        if (v88 != 0 && *(_QWORD*)(v88 + 8) != 0) {
                          break;
                        }
                      }
                      v84 = *((float**)v84 + 3);
                      if (v84 == nullptr) {
                        goto LABEL_75;
                      }
                    }
                    v72 = GameRoutine_58d5b0(v84, 19);
                    if (v72 != 0) {
                    LABEL_92:
                      v73 = *(_QWORD*)(v72 + 8);
                      if (v73 != 0) {
                        v74 = *(unsigned __int8*)v66 - 16;
                        if (v74 >= 3) {
                          GameRoutine_1a0a150(v72);
                          __udf(0);
                        }
                        v75 = *(__int64***)(v73 + 152);
                        if (v75 != (__int64**)(v73 + 144)) {
                          v76 = *((__int64**)v66 + 1);
                          v77 = v75[1];
                          v79 = (__int64*)v76[1];
                          v78 = (__int64*)v76[2];
                          v80 = (__int64*)*v76;
                          v81 = (__int64*)*v77;
                          (*v75)[1] = (__int64)v77;
                          *v77 = (__int64)*v75;
                          v81[1] = (__int64)v75;
                          *v75 = v81;
                          *((_DWORD*)v75 + 4) = (unsigned __int8)v74 | 8;
                          v75[3] = v80;
                          v75[4] = v79;
                          v75[5] = v78;
                          *((_DWORD*)v75 + 12) = 0;
                          v83 = *(__int64**)(v73 + 128);
                          v82 = v73 + 128;
                          *v75 = v83;
                          v81[1] = v82;
                          *(_QWORD*)(*(_QWORD*)v82 + 8LL) = v75;
                          *(_QWORD*)v82 = v81;
                        }
                      }
                    }
                  }
                }
              }
            LABEL_75:
              if (++v65 == v64) {
                v12 = v132;
                v18 = v135;
                v59 = *(_BYTE*)(v134 + 4);
                goto LABEL_72;
              }
              continue;
            }
          }
        }
        else {
          if (v17 <= 1397771333) {
            if (v17 == 1314344006) {
              if (*(_BYTE*)(v16 + 4) != 0) {
                v117 = 0;
                v118 = *(float*)(v129 + 32);
                do {
                  v119 = v16 + *(unsigned int*)(v18 + 4 * v117);
                  v120 =
                      GameRoutine_59f160(v119 + *(unsigned int*)(v119 + 8),
                                         *(unsigned __int16*)(v119 + 4), v118);
                  v121 = *(unsigned __int8*)(v119 + 1);
                  if (v121 <= 3) {
                    *(_WORD*)((char*)a2 + GameData_1b01688[v121]) =
                        (int)v120 & ~(unsigned __int16)((int)v120 >> 31);
                  }
                  ++v117;
                } while (v117 < *(unsigned __int8*)(v16 + 4));
              }
            }
            else if (v17 == 1396984902 && *(_BYTE*)(v16 + 4) != 0) {
              v52 = 0;
              v53 = *(float*)(v129 + 32);
              do {
                v54 = v16 + *(unsigned int*)(v18 + 4 * v52);
                v55 = GameRoutine_59f160(v54 + *(unsigned int*)(v54 + 8),
                                         *(unsigned __int16*)(v54 + 4), v53);
                v56 = *(unsigned __int8*)(v54 + 1);
                v57 = v55;
                v58 = GameRoutine_58d820(a2, 4);
                if (v58 != 0) {
                  *(float*)(v58 + 4 * v56 + 32) = v57;
                }
                ++v52;
              } while (v52 < *(unsigned __int8*)(v16 + 4));
            }
            goto LABEL_10;
          }
          if (v17 == 1397771334) {
            if (*(_BYTE*)(v16 + 4) == 0) {
              goto LABEL_10;
            }
            v106 = 0;
            v107 = *(float*)(v129 + 32);
            while (2) {
              v108 = v16 + *(unsigned int*)(v18 + 4 * v106);
              v109 = *(unsigned int*)(v108 + 8);
              if (*(_BYTE*)(v108 + 2) == 3) {
                v110 = *(unsigned __int8*)(v108 + 1);
                v111 = GameRoutine_58d5b0(a2, 6);
                if (v111 != 0) {
                  v112 = *(float*)(v111 + 4 * v110 + 28);
                }
                else {
                  v112 = 0.0;
                }
                GameRoutine_59f2e0(v108 + v109, v107, v112);
                v18 = v16 + 8;
                v113 = v116;
                v114 = *(unsigned __int8*)(v108 + 1);
                v115 = GameRoutine_58d820(a2, 6);
                if (v115 != 0) {
                LABEL_139:
                  *(float*)(v115 + 4 * v114 + 28) = v113;
                }
              }
              else {
                v113 = GameRoutine_59f160(v108 + v109,
                                          *(unsigned __int16*)(v108 + 4), v107);
                v114 = *(unsigned __int8*)(v108 + 1);
                v115 = GameRoutine_58d820(a2, 6);
                if (v115 != 0) {
                  goto LABEL_139;
                }
              }
              if (++v106 >= (unsigned __int64)*(unsigned __int8*)(v16 + 4)) {
                goto LABEL_10;
              }
              continue;
            }
          }
          if (v17 == 1413696582) {
            if (*(_BYTE*)(v16 + 4) != 0) {
              v122 = 0;
              v123 = *(float*)(v129 + 32);
              do {
                v125 = v16 + *(unsigned int*)(v18 + 4 * v122);
                v126 = *(unsigned int*)(v125 + 8);
                if (*(_BYTE*)(v125 + 2) == 3) {
                  v127 = GameRoutine_59d920(a2, *(unsigned __int8*)(v125 + 1));
                  GameRoutine_59f2e0(v125 + v126, v123, *(float*)&v127);
                }
                else {
                  *(float*)&v124 = GameRoutine_59f160(
                      v125 + v126, *(unsigned __int16*)(v125 + 4), v123);
                }
                GameRoutine_59d8e0(a2, *(unsigned __int8*)(v125 + 1), v124);
                ++v122;
              } while (v122 < *(unsigned __int8*)(v16 + 4));
            }
          }
          else if (v17 == 1414351942 && *(_BYTE*)(v16 + 4) != 0) {
            v19 = 0;
            v20 = *(float*)(v129 + 32);
            while (1) {
              v21 = v16 + *(unsigned int*)(v18 + 4 * v19);
              v22 = *(unsigned int*)(v21 + 8);
              if (*(_BYTE*)(v21 + 2) == 3) {
                break;
              }
              v29 = GameRoutine_59f160(v21 + v22, *(unsigned __int16*)(v21 + 4),
                                       v20);
              v25 = *(unsigned __int8*)(v21 + 1);
              v27 = v29;
              v28 = GameRoutine_58d820(a2, 3);
              if (v28 != 0) {
                goto LABEL_23;
              }
            LABEL_18:
              if (++v19 >= (unsigned __int64)*(unsigned __int8*)(v16 + 4)) {
                goto LABEL_10;
              }
            }
            v23 = *(unsigned __int8*)(v21 + 1);
            v24 = GameRoutine_58d5b0(a2, 3) + 4 * v23;
            v18 = v16 + 8;
            GameRoutine_59f2e0(v21 + v22, v20, *(float*)(v24 + 24));
            v25 = *(unsigned __int8*)(v21 + 1);
            v27 = v26;
            v28 = GameRoutine_58d820(a2, 3);
            if (v28 == 0) {
              goto LABEL_18;
            }
          LABEL_23:
            *(float*)(v28 + 4 * v25 + 24) = v27;
            goto LABEL_18;
          }
        }
      LABEL_10:
        a3 = v130;
        v13 = v133 + 1;
      } while (v133 + 1 < (unsigned __int64)*(unsigned __int8*)(v130 + 28));
    }
  }
  else {
    v11 = 32;
    if (*(_BYTE*)(a3 + 28) != 0) {
      goto LABEL_9;
    }
  }
}

void GameHr_570120(__int64 a1, __int64 a2, __int64 a3)
{
  int v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  unsigned __int64 v11;
  float v12;
  __int64 v13;
  float v14;
  float* v15;
  int v16;
  unsigned __int64 v17;
  float v18;
  unsigned __int8* v19;
  float v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  unsigned __int64 v32;
  float v33;
  __int64 v34;
  __int64 v35;
  float v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  float v39;
  float v40;
  unsigned __int8* v41;
  __int64 v42;
  unsigned __int64 v43;
  float v44;
  unsigned __int8* v45;
  float v46;
  unsigned int v47;
  unsigned __int64 v48;
  float v49;
  __int64 v50;
  unsigned __int8* v51;
  int v52;
  float* v53;
  int v54;
  float* v55;
  __int64 v56;
  int v58;
  int v59;
  float* v61;
  __int64 v62;
  float* v63;
  float* v64;
  float v65;
  __int64 v66;
  float v67;
  __int64 v68;
  __int64 v69;
  int v70;
  float v71;
  unsigned int v72;
  unsigned int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  float v78;
  __int64 v79;
  float v80;
  unsigned int v81;
  int v82;
  int v83;
  int v84;
  __int64 v85;
  __int64 v87;
  __int64 v88;

  v3 = *(unsigned __int8*)(a3 + 29);
  if (v3 == 4 || v3 == 2) {
    v6 = *(unsigned int*)(a3 + 32);
    if (*(_BYTE*)(a3 + 28) != 0) {
      goto LABEL_9;
    }
  }
  else {
    v6 = 32;
    if (*(_BYTE*)(a3 + 28) != 0) {
    LABEL_9:
      v7 = 0;
      v87 = a3 + v6;
      v88 = a3;
      while (1) {
        v8 = a3 + *(unsigned int*)(v87 + 4 * v7);
        v10 = v8 + 8;
        v9 = *(_DWORD*)v8;
        if (*(int*)v8 > 1347701829) {
          if (v9 > 1397115973) {
            if (v9 == 1397115974) {
              if (*(_BYTE*)(v8 + 4) != 0) {
                v77 = 0;
                v78 = *(float*)(a1 + 32);
                do {
                  v79 = v8 + *(unsigned int*)(v10 + 4 * v77);
                  v80 = GameRoutine_59f160(v79 + *(unsigned int*)(v79 + 8),
                                           *(unsigned __int16*)(v79 + 4), v78) +
                        0.5f;
                  v81 = *(_DWORD*)(a2 + 16);
                  ++v77;
                  if (v80 < 0.0f) {
                    v80 = 0.0f;
                  }
                  v82 = (v81 >> 6) & 8;
                  v83 = ((int)(v81 << 19) >> 31) & 0xC;
                  v84 = ((v81 >> 8) & 0xC) + ((v81 >> 4) & 0x1C);
                  v85 = 20 * (((v81 >> 13) & 3) + ((v81 >> 2) & 3));
                  if (v80 > 255.0f) {
                    v80 = 255.0f;
                  }
                  *(_BYTE*)(*(_QWORD*)(a2 + 24) + v85 +
                            ((16 * (*(_DWORD*)(a2 + 16) & 3) +
                              (*(_DWORD*)(a2 + 16) & 0x30)) |
                             (unsigned int)v82) +
                            v84 + v83 + *(unsigned __int8*)(v79 + 1)) =
                      (int)v80;
                } while (v77 < *(unsigned __int8*)(v8 + 4));
              }
            }
            else if (v9 == 1398033478 && *(_BYTE*)(v8 + 4) != 0) {
              v38 = 0;
              v39 = *(float*)(a1 + 32);
              do {
                v41 = (unsigned __int8*)(v8 + *(unsigned int*)(v10 + 4 * v38));
                v42 = *((unsigned int*)v41 + 2);
                if (v41[2] == 3) {
                  GameRoutine_59f2e0(
                      &v41[v42], v39,
                      *(float*)(*(_QWORD*)(a2 + 24) +
                                16LL * (*(_DWORD*)(a2 + 16) & 3) + 20LL * *v41 +
                                4LL * v41[1]));
                }
                else {
                  v40 = GameRoutine_59f160(&v41[v42],
                                           *((unsigned __int16*)v41 + 2), v39);
                }
                ++v38;
                *(float*)(*(_QWORD*)(a2 + 24) +
                          16LL * (*(_DWORD*)(a2 + 16) & 3) + 20LL * *v41 +
                          4LL * v41[1]) = v40;
              } while (v38 < *(unsigned __int8*)(v8 + 4));
            }
          }
          else if (v9 == 1347701830) {
            if (*(_BYTE*)(v8 + 4) != 0) {
              v48 = 0;
              v49 = *(float*)(a1 + 32);
              v50 = *(_QWORD*)(a1 + 40);
              do {
                v51 = (unsigned __int8*)(v8 + *(unsigned int*)(v10 + 4 * v48));
                v52 = *((unsigned __int16*)v51 + 2);
                v53 = (float*)&v51[*((unsigned int*)v51 + 2)];
                v54 = v52 - 1;
                if (v52 == 1 || v49 <= *v53) {
                  v61 = v53 + 1;
                }
                else {
                  v55 = &v53[2 * v54];
                  if (v49 >= *v55) {
                    v61 = v55 + 1;
                  }
                  else {
                    if ((unsigned int)(v52 - 3) > 0xFFFFFFFD) {
                      v56 = 0;
                    }
                    else {
                      LODWORD(v56) = 0;
                      do {
                        while (1) {
                          v58 = (v54 + (int)v56) / 2;
                          if (v49 >= v53[2 * v58]) {
                            break;
                          }
                          v54 = (v54 + (int)v56) / 2;
                          v59 = v58 - 1;
                          if ((_DWORD)v56 == v54 || (_DWORD)v56 == v59) {
                            goto LABEL_69;
                          }
                        }
                        LODWORD(v56) = (v54 + (int)v56) / 2;
                      } while (v58 != v54 && v58 != v54 - 1);
                    LABEL_69:
                      v56 = (int)v56;
                    }
                    v63 = &v53[2 * v54];
                    v61 = &v53[2 * v56 + 1];
                    v65 = *v63;
                    v64 = v63 + 1;
                    if (vabds_f32(v49, v65) < 0.001f) {
                      v61 = v64;
                    }
                  }
                }
                v62 = *(unsigned __int16*)v61;
                if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v50 + 8 * v62) +
                                              48LL))(
                         *(_QWORD*)(v50 + 8 * v62)) &
                     1) != 0) {
                  *(_QWORD*)(*(_QWORD*)(a2 + 24) + 16LL * *v51 + 8) =
                      *(_QWORD*)(v50 + 8 * v62);
                }
                ++v48;
              } while (v48 < *(unsigned __int8*)(v8 + 4));
            }
          }
          else if (v9 == 1380078662 && *(_BYTE*)(v8 + 4) != 0) {
            v17 = 0;
            v18 = *(float*)(a1 + 32);
            do {
              v19 = (unsigned __int8*)(v8 + *(unsigned int*)(v10 + 4 * v17));
              v20 = GameRoutine_59f160(&v19[*((unsigned int*)v19 + 2)],
                                       *((unsigned __int16*)v19 + 2), v18);
              v21 = *(_DWORD*)(a2 + 16);
              ++v17;
              v22 = (v21 >> 6) & 7;
              v23 = (v21 >> 13) & 0x60;
              v24 = ((int)(v21 << 19) >> 31) & 0xC;
              v25 = ((int)(v21 << 15) >> 31) & 0x1C;
              v26 = ((int)(v21 << 14) >> 31) & 0x74;
              v27 = (v21 >> 12) & 8;
              v28 = ((v21 >> 8) & 0xC) + ((v21 >> 4) & 0x1C);
              v29 = (v21 >> 12) & 0x10;
              v30 = 5 * (((v21 >> 13) & 3) + ((v21 >> 2) & 3));
              if ((v21 & 0x300000) != 0) {
                v31 = 16;
              }
              else {
                v31 = 0;
              }
              *(float*)(*(_QWORD*)(a2 + 24) + (unsigned int)(4 * v30) +
                        ((16 * (*(_DWORD*)(a2 + 16) & 3) +
                          (*(_DWORD*)(a2 + 16) & 0x30)) |
                         (*(_DWORD*)(a2 + 16) >> 6) & 8u) +
                        v28 + v27 + v23 + v24 + v25 + v29 * v22 + v26 + v31 +
                        88LL * *v19 + 4LL * v19[1]) = v20;
            } while (v17 < *(unsigned __int8*)(v8 + 4));
          }
          goto LABEL_10;
        }
        if (v9 <= 1129139269) {
          if (v9 == 1095194182) {
            if (*(_BYTE*)(v8 + 4) != 0) {
              v43 = 0;
              v44 = *(float*)(a1 + 32);
              do {
                v45 = (unsigned __int8*)(v8 + *(unsigned int*)(v10 + 4 * v43));
                v46 = GameRoutine_59f160(&v45[*((unsigned int*)v45 + 2)],
                                         *((unsigned __int16*)v45 + 2), v44);
                v47 = *(_DWORD*)(a2 + 16);
                ++v43;
                *(float*)(*(_QWORD*)(a2 + 24) +
                          20 * (((v47 >> 13) & 3) + ((v47 >> 2) & 3)) +
                          ((16 * (v47 & 3) + (v47 & 0x30)) | (v47 >> 6) & 8) +
                          ((v47 >> 8) & 0xC) + ((v47 >> 4) & 0x1C) +
                          ((v47 >> 12) & 8) + (((int)(v47 << 19) >> 31) & 0xC) +
                          (((int)(v47 << 15) >> 31) & 0x1C) +
                          ((v47 >> 12) & 0x10) * ((v47 >> 6) & 7) +
                          (((int)(v47 << 14) >> 31) & 0x74) + 32LL * *v45 +
                          4LL * v45[1]) = v46;
              } while (v43 < *(unsigned __int8*)(v8 + 4));
            }
          }
          else if (v9 == 1128352838 && *(_BYTE*)(v8 + 4) != 0) {
            v11 = 0;
            v12 = *(float*)(a1 + 32);
            do {
              v13 = v8 + *(unsigned int*)(v10 + 4 * v11);
              v14 = GameRoutine_59f160(v13 + *(unsigned int*)(v13 + 8),
                                       *(unsigned __int16*)(v13 + 4), v12);
              ++v11;
              if (v14 < 0.0f) {
                v14 = 0.0f;
              }
              if (v14 > 1.0f) {
                v14 = 1.0f;
              }
              v15 =
                  (float*)(*(_QWORD*)(a2 + 24) +
                           16 * (*(_DWORD*)(a2 + 16) & 3) +
                           (*(_DWORD*)(a2 + 16) & 0x30u) +
                           20 * (((unsigned __int64)*(unsigned int*)(a2 + 16) >>
                                  2) &
                                 3));
              v16 = *(unsigned __int8*)v15;
              v15[1] = v14;
              *(_DWORD*)v15 = v16;
            } while (v11 < *(unsigned __int8*)(v8 + 4));
          }
          goto LABEL_10;
        }
        if (v9 != 1129139270) {
          if (v9 == 1296649286 && *(_BYTE*)(v8 + 4) != 0) {
            v32 = 0;
            v33 = *(float*)(a1 + 32);
            do {
              v34 = v8 + *(unsigned int*)(v10 + 4 * v32);
              v35 = *(unsigned __int8*)(v34 + 1);
              v36 = GameRoutine_59f160(v34 + *(unsigned int*)(v34 + 8),
                                       *(unsigned __int16*)(v34 + 4), v33);
              v37 = *(unsigned int*)(a2 + 16);
              ++v32;
              *(float*)(*(_QWORD*)(a2 + 24) +
                        ((16 * (v37 & 3) + (v37 & 0x30)) |
                         ((unsigned int)v37 >> 6) & 8) +
                        (((unsigned int)v37 >> 8) & 0xC) +
                        20 * ((v37 >> 2) & 3) + 4 * v35) = v36;
            } while (v32 < *(unsigned __int8*)(v8 + 4));
          }
          goto LABEL_10;
        }
        if (*(_BYTE*)(v8 + 4) != 0) {
          break;
        }
      LABEL_10:
        a3 = v88;
        if (++v7 >= (unsigned __int64)*(unsigned __int8*)(v88 + 28)) {
          return;
        }
      }
      v66 = 0;
      v67 = *(float*)(a1 + 32);
      while (1) {
        v68 = v8 + *(unsigned int*)(v10 + 4 * v66);
        v69 = *(unsigned int*)(v68 + 8);
        if (*(_BYTE*)(v68 + 2) == 3) {
          v70 = GameRoutine_571930(a2, *(unsigned __int8*)(v68 + 1));
          GameRoutine_59f2e0(v68 + v69, v67, (float)v70);
          v72 = *(unsigned __int8*)(v68 + 1);
          v73 = v72 - 28;
          if (v72 > 0x1C) {
            goto LABEL_86;
          }
        }
        else {
          v71 =
              GameRoutine_59f160(v68 + v69, *(unsigned __int16*)(v68 + 4), v67);
          v72 = *(unsigned __int8*)(v68 + 1);
          v73 = v72 - 28;
          if (v72 > 0x1C) {
          LABEL_86:
            if (v73 <= 7) {
              v74 = *(_QWORD*)(a2 + 8);
              v75 = v73 >> 2;
              if ((v72 & 3) > 1) {
                v76 = v74 + 16 * v75;
                if ((v72 & 3) == 2) {
                  *(float*)(v76 + 8) = v71;
                }
                else {
                  *(float*)(v76 + 12) = v71;
                }
              }
              else if ((v72 & 3) != 0) {
                *(float*)(v74 + 16 * v75 + 4) = v71;
              }
              else {
                *(float*)(v74 + 16 * v75) = v71;
              }
            }
            goto LABEL_81;
          }
        }
        GameRoutine_571cd0(a2);
      LABEL_81:
        if (++v66 >= (unsigned __int64)*(unsigned __int8*)(v8 + 4)) {
          goto LABEL_10;
        }
      }
    }
  }
}

void GameHr_5815d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                   char a6)
{
  __int64 v6;
  __int64 v7;
  float v10;
  __int16 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float32x2_t v15;
  float v16;
  float v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  float v22;
  __int64 v23;
  int v24;
  int v25;
  _QWORD v26[2];
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD _48[9];

  *(_QWORD*)(a1 + 48) = a3;
  *(_QWORD*)(a1 + 56) = a5;
  if (*(_BYTE*)(a4 + 34) == 1) {
    *(_WORD*)(a1 + 104) |= 1u;
    if (*(_BYTE*)(a4 + 35) != 1) {
    LABEL_3:
      if ((a6 & 1) == 0) {
        goto LABEL_5;
      }
      goto LABEL_4;
    }
  }
  else if (*(_BYTE*)(a4 + 35) != 1) {
    goto LABEL_3;
  }
  *(_WORD*)(a1 + 104) |= 2u;
  if ((a6 & 1) != 0) {
  LABEL_4:
    *(_WORD*)(a1 + 104) |= 0x10u;
  }
LABEL_5:
  *(_DWORD*)(a1 + 68) = *(unsigned __int16*)(a4 + 32);
  *(_OWORD*)(a1 + 80) = *(_OWORD*)(a4 + 16);
  *(_DWORD*)(a1 + 64) = *(unsigned __int16*)(a4 + 36);
  v10 = GameRoutine_59fbe0(a4);
  v11 = *(_WORD*)(a1 + 104);
  *(float*)(a1 + 40) = v10;
  if ((v11 & 0x12) != 0) {
    v12 = *(_QWORD*)(a1 + 48);
    _48[1] = v7;
    _48[2] = v6;
    _48[3] = _48[7];
    _48[4] = _48[8];
    v13 = *(_QWORD*)(a1 + 56);
    _48[0] = 0;
    v14 = v12;
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v13 + 96LL))(v13, _48);
    ((uint64_t*)&v15)[0] = *(unsigned __int64*)(a1 + 96);
    v31 = 0;
    v32 = 0;
    v16 = *(float*)_48 * ((float*)&v15)[0];
    v17 = vmuls_lane_f32(*((float*)_48 + 1), v15, 1);
    v29 = 0;
    v30 = 0;
    v27 = 0;
    v28 = 0;
    v26[0] = 0;
    v26[1] = 0;
    if ((int)(float)(*(float*)_48 * ((float*)&v15)[0]) <= 1) {
      v18 = 1;
    }
    else {
      v18 = (int)(float)(*(float*)_48 * ((float*)&v15)[0]);
    }
    if ((int)v17 <= 1) {
      v19 = 1;
    }
    else {
      v19 = (int)v17;
    }
    GameRoutine_5fc420(v26);
    v20 = *(_DWORD*)(a1 + 68);
    v21 = *(_QWORD*)(a1 + 32);
    HIDWORD(v27) = v18;
    LODWORD(v28) = v19;
    HIDWORD(v26[1]) = v20;
    LODWORD(v27) = 163;
    BYTE1(v26[0]) = 2;
    HIWORD(v26[0]) = 1;
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v21 + 48LL))(v21) & 1) == 0) {
      GameRoutine_59e760(*(_QWORD*)(a1 + 32), a2, v14, v26, 0);
    }
    v22 = *(float*)(a1 + 40);
    v23 = *(_QWORD*)(a1 + 8);
    v24 = (int)(float)(v16 * v22);
    v25 = (int)(float)(v17 * v22);
    if (v24 <= 1) {
      v24 = 1;
    }
    if (v25 <= 1) {
      v25 = 1;
    }
    HIDWORD(v27) = v24;
    LODWORD(v28) = v25;
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v23 + 48LL))(v23) & 1) == 0) {
      GameRoutine_59e760(*(_QWORD*)(a1 + 8), a2, v14, v26, 0);
    }
    if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 212LL) == 0 &&
        *(_DWORD*)(*(_QWORD*)(a1 + 8) + 212LL) == 0) {
      *(_WORD*)(a1 + 104) |= 4u;
    }
  }
}

__int64 GameHr_590940(_QWORD* a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = 0;
  GameRoutine_599ea0(a1 + 2);
  GameRoutine_599ea0(a1 + 4);
  GameRoutine_599ea0(a1 + 12);
  return GameRoutine_1a0ba50(a1 + 1, 0, 545, v3, v4, v5);
}

#pragma GCC visibility pop
