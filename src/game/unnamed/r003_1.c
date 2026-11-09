#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fc5658[])();
extern __int64 (*GameData_1fc56e8[])();
extern __int64 (*GameData_1fc6ad0[])();
extern __int64 (*GameData_1fc7910[])();
extern __int64 (*GameData_1fcb768[])();
extern __int64 (*GameData_1fcb7f8[])();
extern __int64 (*GameData_1fcb888[])();
extern __int64 (*GameData_1fd3de0[28])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c330[2];
extern __int64* GameData_212c370;
extern __int64 GameData_212cf60;
extern __int64 GameData_212dbb8[9];
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e770[3];
extern _UNKNOWN** GameData_212e778[2];
extern _UNKNOWN** GameData_212e780;
extern _UNKNOWN** GameData_212e870[6];
extern _UNKNOWN GameData_2166898;
extern __int64 GameData_21a6070;
extern __int64 GameData_21c6978;
extern __int64 GameData_21ee260;
extern int GameData_21fdeb8;
extern int GameData_21fded0;
extern int GameData_21fdedc;
extern int GameData_21fdee0;
extern int GameData_21fdeec;
extern int GameData_21fdef4;
extern int GameData_21fdf08;
extern int GameData_21fdf10;
extern int GameData_21fdf14;
extern __int64 GameData_22127a8;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_19932a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1995760(_QWORD, _QWORD);
__int64 GameRoutine_1996450(_QWORD, _QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, long double);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5e5f00(_QWORD);
__int64 GameRoutine_5f040(_QWORD);
__int64 GameRoutine_5f050(_QWORD, _QWORD);
__int64 GameRoutine_5f060(_QWORD);
__int64 GameRoutine_5f070(_QWORD, _QWORD);
__int64 GameRoutine_5f100(_QWORD, _QWORD);
__int64 GameRoutine_5f200(_QWORD, _QWORD);
__int64 GameRoutine_5f290(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a61a80(__int64, _QWORD*);
__int64 GameRoutine_a64140(__int64 result, long double);
__int64 GameRoutine_a70a20(_QWORD, _QWORD);
__int64 GameRoutine_a738c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a73d40(_QWORD, _QWORD);
__int64 GameRoutine_a73e50(__int64 result, _QWORD*);
__int64 GameRoutine_ad6000(_QWORD, _QWORD);
__int64 GameRoutine_ad7390(_QWORD);
void __attribute__((noreturn)) GameRoutine_b32f30(_QWORD);
__int64 GameRoutine_bf1790(_QWORD);
__int64 GameRoutine_cea6b0(_QWORD);
__int64 GameRoutine_d9d220(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameHr_b4a7c0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                      unsigned int* a5)
{
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
  unsigned int* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned int v54;
  __int64 v55;
  int v56;
  __int64 v57;
  _QWORD v60[4];
  _QWORD* v61;
  _QWORD v62[6];

  v9 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
  v12 = v11;
  v13 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]);
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 32LL))(v13);
  v16 = v15;
  v17 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[2] + 16LL))(a3[2]);
  v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 32LL))(v17);
  v20 = v19;
  v21 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[3] + 16LL))(a3[3]);
  v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 32LL))(v21);
  v23 = *a4;
  v62[0] = v10;
  v62[1] = v12;
  v62[2] = v14;
  v62[3] = v16;
  v62[4] = v18;
  v62[5] = v20;
  v24 = a5;
  (*(void (**)(__int64, __int64, _QWORD*, __int64, __int64))(
      *(_QWORD*)v23 + 128LL))(v23, 3, v62, v22, v25);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *v24, v24[1]);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *v24, v24[1]);
  GameRoutine_5f040(a4[1]);
  GameRoutine_5f050(a4[1], *a4);
  v26 = a4[1];
  GameRoutine_5f100(v26, (unsigned int)GameData_21fdee0);
  GameRoutine_5f070(v26, (unsigned int)GameData_21fded0);
  GameRoutine_5f200(v26, (unsigned int)GameData_21fdf10);
  GameRoutine_5f290(v26, (unsigned int)GameData_21fdf14);
  GameRoutine_5f060(a4[1]);
  v27 = *a4;
  v28 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v29 = v28 + 16LL * *(int*)(v28 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v27 + 224LL))(v27, 3, 0, *(_QWORD*)(v29 + 24),
                              *(_QWORD*)(v29 + 32));
  v30 = *a4;
  v31 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  v32 = v31 + 16LL * *(int*)(v31 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v30 + 224LL))(v30, 3, 1, *(_QWORD*)(v32 + 24),
                              *(_QWORD*)(v32 + 32));
  v33 = (_QWORD*)(a1 + 48 + 16LL * *(int*)(a1 + 40));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 6, *v33, v33[1]);
  v34 = *a4;
  v35 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]);
  v36 = v35 + 16LL * *(int*)(v35 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v34 + 224LL))(v34, 3, 9, *(_QWORD*)(v36 + 24),
                              *(_QWORD*)(v36 + 32));
  v37 = *((_QWORD*)a5 + 2);
  v60[0] = GameData_1fc5658;
  v60[1] = a1;
  v61 = v60;
  v38 = GameRoutine_a738c0(v37, v60, 1);
  if (v61 == v60) {
    v39 = 32;
  }
  else {
    if (v61 == nullptr) {
      goto LABEL_6;
    }
    v39 = 40;
  }
  (*(void (**)(void))(*v61 + v39))();
LABEL_6:
  GameRoutine_a73d40(*((_QWORD*)a5 + 2), a4);
  GameRoutine_5f040(a4[1]);
  GameRoutine_5f050(a4[1], *a4);
  v40 = a4[1];
  GameRoutine_5f100(v40, (unsigned int)GameData_21fdee0);
  GameRoutine_5f200(v40, (unsigned int)GameData_21fdf10);
  GameRoutine_5f290(v40, (unsigned int)GameData_21fdf14);
  GameRoutine_5f060(a4[1]);
  (*(void (**)(__int64, __int64))GameData_212e770[0])(*a4 + 8LL, a1 + 16);
  v41 = *a4;
  v42 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v43 = v42 + 16LL * *(int*)(v42 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v41 + 224LL))(v41, 3, 0, *(_QWORD*)(v43 + 24),
                              *(_QWORD*)(v43 + 32));
  v44 = *a4;
  v45 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  v46 = v45 + 16LL * *(int*)(v45 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v44 + 224LL))(v44, 3, 1, *(_QWORD*)(v46 + 24),
                              *(_QWORD*)(v46 + 32));
  v47 = (_QWORD*)(a1 + 48 + 16LL * *(int*)(a1 + 40));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 6, *v47, v47[1]);
  v48 = *a4;
  v49 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]);
  v50 = v49 + 16LL * *(int*)(v49 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v48 + 224LL))(v48, 3, 9, *(_QWORD*)(v50 + 24),
                              *(_QWORD*)(v50 + 32));
  v51 = *a4;
  v52 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[3] + 16LL))(a2[3]);
  v53 = (*(__int64 (**)(__int64))(*(_QWORD*)v52 + 40LL))(v52);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v51 + 248LL))(v51, 2, 7, v53, v54, *(unsigned int*)(a1 + 200));
  v55 = *((_QWORD*)a5 + 2);
  v60[0] = GameData_1fc56e8;
  v60[1] = a1;
  v61 = v60;
  v56 = GameRoutine_a738c0(v55, v60, 1);
  if (v61 == v60) {
    v57 = 32;
    goto LABEL_10;
  }
  if (v61 != nullptr) {
    v57 = 40;
  LABEL_10:
    (*(void (**)(void))(*v61 + v57))();
  }
  GameRoutine_a73e50(*((_QWORD*)a5 + 2), a4);
  return (unsigned int)(v56 + v38);
}

__int64 GameHr_b4e260(_QWORD* a1, _QWORD* a2, __int64 a3, __int64 a4,
                      __int64* a5)
{
  _QWORD* v5;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 (**v58)(__int64);
  unsigned int v59;
  __int64 (**v60)(__int64);
  __int64 v61;
  __int64 v62;
  unsigned int v63;
  unsigned int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 (**v68)(__int64);
  unsigned int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned int v77;
  __int64 v78;
  __int64 (**v79)(__int64);
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 (**v86)(__int64);
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned int v90;
  void (**v91)(__int64, __int64);
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned int v95;
  __int64 v96;
  unsigned int v97;
  __int64 v98;
  void (**v99)(__int64, __int64);
  __int64 v100;
  unsigned int v101;
  unsigned int v102;
  __int64 v103;
  __int64 v104;
  char* v105;
  __int64 v106;
  __int64 v107;
  void (**v108)(__int64, __int64);
  __int64* v109;
  __int64 (**v110)(__int64);
  unsigned int v111;
  __int64 v112;
  __int64 (**v113)(__int64);
  unsigned int v114;
  __int64 v115;
  __int64 v116;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  _QWORD* v124;
  __int64 v125;
  _QWORD* v126;
  __int64 v127;
  _QWORD v128[3];
  int v129;
  __int64 v130;
  int v131;
  __int64 v132;
  int v133;
  __int64 v134;
  int v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  _QWORD v143[2];
  _QWORD v144[2];
  int v145;
  __int64 v146;
  int v147;
  __int64 v148;
  int v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  _QWORD v157[2];

  v5 = (_QWORD*)a1[3];
  v120 = a5[1];
  v121 = *a5;
  v7 = (__int64*)a1[1];
  v124 = (_QWORD*)a1[2];
  v8 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[1] + 16LL))(v5[1]);
  v150 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
  v151 = v9;
  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[2] + 16LL))(v5[2]);
  v152 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
  v153 = v11;
  v12 = &v153;
  v13 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[3] + 16LL))(v5[3]);
  v154 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 32LL))(v13);
  v155 = v14;
  v15 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[4] + 16LL))(v5[4]);
  v156 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 32LL))(v15);
  v157[0] = v16;
  v17 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[1] + 16LL))(v5[1]);
  v119 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 40LL))(v17);
  v143[1] = v119;
  v18 = (__int64*)v5[2];
  v19 = v144;
  v20 = *v18;
  LODWORD(v144[0]) = v21;
  v22 = (*(__int64 (**)(__int64*))(v20 + 16))(v18);
  v144[1] = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 40LL))(v22);
  v23 = v5[3];
  v145 = v24;
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
  v146 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 40LL))(v25);
  v26 = v5[4];
  v147 = v27;
  v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
  v148 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 40LL))(v28);
  v29 = v5[5];
  v149 = v30;
  v31 = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
  v136 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 32LL))(v31);
  v137 = v32;
  v33 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[6] + 16LL))(v5[6]);
  v138 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 32LL))(v33);
  v139 = v34;
  v35 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[7] + 16LL))(v5[7]);
  v140 = (*(__int64 (**)(__int64))(*(_QWORD*)v35 + 32LL))(v35);
  v141 = v36;
  v37 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[8] + 16LL))(v5[8]);
  v142 = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 32LL))(v37);
  v143[0] = v38;
  v39 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[5] + 16LL))(v5[5]);
  v128[2] = (*(__int64 (**)(__int64))(*(_QWORD*)v39 + 40LL))(v39);
  v40 = v5[6];
  v129 = v41;
  v42 = (*(__int64 (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
  v130 = (*(__int64 (**)(__int64))(*(_QWORD*)v42 + 40LL))(v42);
  v43 = v5[7];
  v131 = v44;
  v45 = (*(__int64 (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
  v132 = (*(__int64 (**)(__int64))(*(_QWORD*)v45 + 40LL))(v45);
  v46 = v5[8];
  v133 = v47;
  v126 = v5;
  v48 = (*(__int64 (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
  v49 = (*(__int64 (**)(__int64))(*(_QWORD*)v48 + 40LL))(v48);
  v50 = *v7;
  v134 = v49;
  v51 = a2[1];
  v135 = v52;
  v118 = *(_QWORD*)(v50 + 13312);
  GameRoutine_5f040(v51);
  GameRoutine_5f050(a2[1], *a2);
  v53 = a2[1];
  GameRoutine_5f070(v53, (unsigned int)GameData_21fdeb8);
  GameRoutine_5f100(v53, (unsigned int)GameData_21fdee0);
  GameRoutine_5f200(v53, (unsigned int)GameData_21fdf08);
  GameRoutine_5f290(v53, (unsigned int)GameData_21fdf14);
  GameRoutine_5f060(a2[1]);
  v54 = &v7[2 * *((int*)v7 + 66)];
  (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
      *(_QWORD*)*a2 + 224LL))(*a2, 2, 0, v54[34], v54[35]);
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a2 + 264LL))(*a2, 1);
  v55 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v5 + 16LL))(*v5);
  v56 = (*(__int64 (**)(__int64))(*(_QWORD*)v55 + 32LL))(v55);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v56, v57);
  v58 = (__int64 (**)(__int64))GameData_212e778[0];
  v59 = (*(__int64 (**)(__int64))GameData_212e778[0])(v56);
  v60 = (__int64 (**)(__int64))GameData_212e780;
  LODWORD(v56) = ((__int64 (*)(__int64))*GameData_212e780)(v56);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, v59, (unsigned int)v56);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, v59, (unsigned int)v56);
  v61 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v61 + 144LL))(v61, 0, v128);
  v62 = v150;
  v63 = (*v58)(v150);
  v64 = (*v60)(v62);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, v63, v64);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, v63, v64);
  v122 = v151;
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v62);
  v65 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v65 + 144LL))(v65, 0, v128);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v136,
                                                                 v137);
  v66 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v66 + 144LL))(v66, 0, v128);
  v67 = v152;
  v68 = v58;
  LODWORD(v58) = (*v58)(v152);
  v69 = (*v60)(v67);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, (unsigned int)v58, v69);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, (unsigned int)v58, v69);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v67,
                                                                 v153);
  v70 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v70 + 144LL))(v70, 0, v128);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v138,
                                                                 v139);
  v71 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v71 + 144LL))(v71, 0, v128);
  v72 = v154;
  LODWORD(v58) = (*v68)(v154);
  v73 = (*v60)(v72);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, (unsigned int)v58, v73);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, (unsigned int)v58, v73);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v72,
                                                                 v155);
  v74 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v74 + 144LL))(v74, 0, v128);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v140,
                                                                 v141);
  v75 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v75 + 144LL))(v75, 0, v128);
  v76 = v156;
  LODWORD(v58) = (*v68)(v156);
  v77 = (*v60)(v76);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, (unsigned int)v58, v77);
  v78 = v77;
  v79 = v60;
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, (unsigned int)v58, v78);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 96LL))(*a2, v76,
                                                                v157[0]);
  v80 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v80 + 144LL))(v80, 0, v128);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 96LL))(*a2, v142,
                                                                v143[0]);
  v81 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v81 + 144LL))(v81, 0, v128);
  v82 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v126 + 16LL))(*v126);
  v83 = (*(__int64 (**)(__int64))(*(_QWORD*)v82 + 32LL))(v82);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v83, v84);
  LODWORD(v58) = (*v68)(v83);
  LODWORD(v83) = (*v60)(v83);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, (unsigned int)v58, (unsigned int)v83);
  v85 = (unsigned int)v58;
  v86 = v68;
  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, v85, (unsigned int)v83);
  v87 = 3;
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
      *a2, 3, *(_QWORD*)(v7[17] + 144));
  v88 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v124 + 16LL))(*v124);
  v89 = (*(__int64 (**)(__int64))(*(_QWORD*)v88 + 40LL))(v88);
  (*(void (**)(_QWORD, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a2 + 248LL))(*a2, 2, 0, v89, v90, *((unsigned int*)v7 + 32));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(*a2, 3, 0);
  v91 = (void (**)(__int64, __int64))GameData_212e738;
  ((void (*)(__int64, __int64))*GameData_212e738)(*a2 + 8LL, 18);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
      *a2, 3, *(_QWORD*)(v7[25] + 144));
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v62,
                                                                 v122);
  LODWORD(v68) = (*v68)(v62);
  LODWORD(v62) = (*v79)(v62);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, (unsigned int)v68, (unsigned int)v62);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, (unsigned int)v68, (unsigned int)v62);
  v92 = *a2;
  v93 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v126 + 16LL))(*v126);
  v94 = (*(__int64 (**)(__int64))(*(_QWORD*)v93 + 40LL))(v93);
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v92 + 248LL))(v92, 2, 0, v94, v95, *((unsigned int*)v7 + 32));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(*a2, 3, 0);
  (*v91)(*a2 + 8LL, 18);
  do {
    v96 = *(v12 - 1);
    (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v96,
                                                                   *v12);
    v97 = (*v86)(v96);
    LODWORD(v96) = (*v79)(v96);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 72LL))(*a2, 0, 0, v97, (unsigned int)v96);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 88LL))(*a2, 0, 0, v97, (unsigned int)v96);
    (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 248LL))(*a2, 2, 0, *(v19 - 1), *v19,
                                *((unsigned int*)v7 + 32));
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(*a2, 3, 0);
    (*v91)(*a2 + 8LL, 18);
    --v87;
    v19 += 2;
    v12 += 2;
  } while (v87 != 0);
  v98 = 0;
  v127 = 0;
  v99 = v91;
  while (1) {
    v100 = *(_QWORD*)((char*)&v143[-1] + v98);
    v101 = (*v86)(v100);
    v102 = (*v79)(v100);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 72LL))(*a2, 0, 0, v101, v102);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 88LL))(*a2, 0, 0, v101, v102);
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
        *a2, 3, *(_QWORD*)(v7[21] + 144));
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 96LL))(
        *a2, v100, *(_QWORD*)((char*)v143 + v98));
    v103 = *(__int64*)((char*)&v148 + v98);
    v125 = *(__int64*)((char*)&v148 + v98 + 8);
    (*(void (**)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD*)*a2 + 248LL))(
        *a2, 2, 0, v103);
    v104 = (__int64)&v7[2 * SLODWORD(v7[v127 + 82]) + v127];
    (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 224LL))(*a2, 2, 1, *(_QWORD*)(v104 + 664),
                                *(_QWORD*)(v104 + 672));
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(*a2, 3, 0);
    (*v99)(*a2 + 8LL, 18);
    v105 = (char*)v157 + v98;
    (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 96LL))(
        *a2, *(_QWORD*)((char*)&v157[-1] + v98), *(_QWORD*)((char*)v157 + v98));
    (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 248LL))(*a2, 2, 0, *(__int64*)((char*)&v134 + v98),
                                *(__int64*)((char*)&v134 + v98 + 8),
                                *((unsigned int*)v7 + 32));
    v106 = (__int64)&v7[2 * SLODWORD(v7[v127 + 89]) + v127];
    (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 224LL))(*a2, 2, 1, *(_QWORD*)(v106 + 720),
                                *(_QWORD*)(v106 + 728));
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(*a2, 3, 0);
    if (v127 == -42) {
      break;
    }
    (*v99)(*a2 + 8LL, 18);
    v107 = *((_QWORD*)v105 - 3);
    v108 = v99;
    v109 = v7;
    v110 = v86;
    v111 = (*v86)(v107);
    v123 = v103;
    v112 = v98;
    v113 = v79;
    v114 = (*v79)(v107);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 72LL))(*a2, 0, 0, v111, v114);
    v115 = v111;
    v86 = v110;
    v7 = v109;
    v99 = v108;
    v116 = v114;
    v79 = v113;
    (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
        *(_QWORD*)*a2 + 88LL))(*a2, 0, 0, v115, v116);
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
        *a2, 3, *(_QWORD*)(v7[27] + 144));
    GameRoutine_5f050(a2[1], *a2);
    GameRoutine_5f100(a2[1], (unsigned int)GameData_21fdef4);
    GameRoutine_5f060(a2[1]);
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 96LL))(
        *a2, v107, *((_QWORD*)v105 - 2));
    (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
        *(_QWORD*)*a2 + 248LL))(*a2, 2, 0, v123, v125,
                                *((unsigned int*)v7 + 32));
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(*a2, 3, 0);
    (*v108)(*a2 + 8LL, 18);
    v98 = v112 - 16;
    v127 -= 14;
  }
  (*v99)(*a2 + 8LL, 18);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v121,
                                                                 v120);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, (unsigned int)v118, HIDWORD(v118));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, (unsigned int)v118, HIDWORD(v118));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
      *a2, 3, *(_QWORD*)(v7[29] + 144));
  GameRoutine_5f050(a2[1], *a2);
  GameRoutine_5f100(a2[1], (unsigned int)GameData_21fdeec);
  GameRoutine_5f060(a2[1]);
  (*(void (**)(_QWORD, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a2 + 248LL))(*a2, 2, 0, v119, v144[0],
                              *((unsigned int*)v7 + 32));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(*a2, 3, 0);
  return GameRoutine_5f040(a2[1]);
}

__int64 GameHr_b66cf0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                      __int64 a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int* v13;
  unsigned int v14;
  unsigned int v15;
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
  unsigned int v26;
  int v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 (**v37)(__int64);
  __int64 (**v38)(__int64);
  int v39;
  __int64 (*v40)(__int64);
  _QWORD v42[2];
  __int64 v43;
  __int64 (**v44)();
  __int64 v45;
  __int64 v46;
  __int64 (***v47)();

  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
  v13 = (unsigned int*)(*(_QWORD*)a1 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
    v13 = (unsigned int*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
  }
  v15 = *v13;
  v14 = v13[1];
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 112LL))(*a4, v12,
                                                                  v11);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, v15, v14);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v15, v14);
  GameRoutine_5f040(a4[1]);
  GameRoutine_5f050(a4[1], *a4);
  v16 = a4[1];
  GameRoutine_5f070(v16, (unsigned int)GameData_21fded0);
  GameRoutine_5f100(v16, (unsigned int)GameData_21fdee0);
  GameRoutine_5f200(v16, (unsigned int)GameData_21fdf08);
  GameRoutine_5f290(v16, (unsigned int)GameData_21fdf14);
  GameRoutine_5f060(a4[1]);
  v17 = *a4;
  v18 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  v19 = v18 + 16LL * *(int*)(v18 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v17 + 224LL))(v17, 3, 0, *(_QWORD*)(v19 + 24),
                              *(_QWORD*)(v19 + 32));
  v20 = *a4;
  v21 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]);
  v22 = v21 + 16LL * *(int*)(v21 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v20 + 224LL))(v20, 3, 1, *(_QWORD*)(v22 + 24),
                              *(_QWORD*)(v22 + 32));
  v23 = *a4;
  v24 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 40LL))(v24);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD))(
      *(_QWORD*)v23 + 240LL))(v23, 3, 9, v25, v26);
  v27 = GameRoutine_ad6000("TranslucencyDepth", 17);
  v28 = *(_QWORD*)(a5 + 8);
  LODWORD(v45) = v27;
  v44 = GameData_1fc6ad0;
  v47 = &v44;
  v29 = GameRoutine_a738c0(v28, &v44, 1);
  if (v47 == &v44) {
    v30 = 4;
    goto LABEL_7;
  }
  if (v47 != nullptr) {
    v30 = 5;
  LABEL_7:
    (*v47)[v30]();
  }
  v31 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 40LL))(v31);
  v33 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v34 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 40LL))(v33);
  LODWORD(v45) = 0;
  v44 = nullptr;
  v35 = *a4;
  v36 = v34;
  v37 = (__int64 (**)(__int64))GameData_212e778[0];
  HIDWORD(v45) = (*(__int64 (**)(void))GameData_212e778[0])();
  v38 = (__int64 (**)(__int64))GameData_212e780;
  v46 = ((unsigned int (*)(__int64))*GameData_212e780)(v36) | 0x100000000LL;
  v42[0] = v44;
  v42[1] = v45;
  v43 = v46;
  v39 = (*v37)(v32);
  v40 = *v38;
  HIDWORD(v42[1]) = v39;
  LODWORD(v43) = v40(v32);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD*, __int64, _QWORD,
               __int64 (***)(), _QWORD))GameData_212e870[0])(
      v35 + 8, v32, 0, v42, v36, 0, &v44, 0);
  GameRoutine_a73d40(*(_QWORD*)(a5 + 8), a4);
  return v29;
}

__int64 GameHr_b71010(__int64 result, _QWORD* a2, _QWORD* a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v8;
  _QWORD* v11;
  __int64 v12;
  unsigned int v13;
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
  _QWORD v29[6];

  if (*(_DWORD*)a4 != 3) {
    v29[4] = v4;
    v29[5] = v5;
    v6 = *(_QWORD**)(a4 + 8);
    if (v6 != nullptr) {
      v8 = (_QWORD*)result;
      v11 = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(
          **(_QWORD**)(result + 8) + 16LL))(*(_QWORD**)(result + 8),
                                            *(_QWORD*)(result + 8));
      v12 = (*(__int64 (**)(_QWORD*))(*v11 + 40LL))(v11);
      GameRoutine_19932a0(*v6, "CharaMask", 9, v12, v13);
      v14 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
      v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 32LL))(v14);
      v17 = v16;
      v18 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]);
      v29[2] = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 32LL))(v18);
      v29[3] = v19;
      v20 = a2[1];
      v29[0] = v15;
      v29[1] = v17;
      v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 32LL))(v21);
      (*(void (**)(_QWORD, __int64, _QWORD*, __int64, __int64))(
          *(_QWORD*)*a3 + 128LL))(*a3, 2, v29, v22, v23);
      v24 = *a3;
      v25 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v8 + 16LL))(*v8);
      v26 = v25 + 16LL * *(int*)(v25 + 16);
      (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)v24 + 224LL))(v24, 3, 0, *(_QWORD*)(v26 + 24),
                                  *(_QWORD*)(v26 + 32));
      GameRoutine_5f040(a3[1]);
      GameRoutine_5f050(a3[1], *a3);
      v27 = a3[1];
      GameRoutine_5f070(v27, (unsigned int)GameData_21fded0);
      GameRoutine_5f100(v27, (unsigned int)GameData_21fdee0);
      GameRoutine_5f200(v27, (unsigned int)GameData_21fdf08);
      GameRoutine_5f290(v27, (unsigned int)GameData_21fdf14);
      GameRoutine_5f060(a3[1]);
      v28 = *v6;
      if (*(_DWORD*)a4 > 2u) {
        return GameRoutine_1996450(v28, a3);
      }
      else {
        return GameRoutine_1995760(v28, a3);
      }
    }
  }
  return result;
}

__int64 GameHr_b762a0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4,
                      __int64 a5)
{
  __int64 v5;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 result;
  _QWORD v27[4];
  _QWORD* v28;

  v5 = *(_QWORD*)(a5 + 64);
  v27[0] = GameData_1fc7910;
  v27[1] = a1;
  v28 = v27;
  v10 = GameRoutine_a738c0(v5, v27, 0);
  if (v28 == v27) {
    v11 = 32;
  }
  else {
    if (v28 == nullptr) {
      goto LABEL_6;
    }
    v11 = 40;
  }
  (*(void (**)(void))(*v28 + v11))();
LABEL_6:
  GameRoutine_5f040(a4[1]);
  GameRoutine_5f050(a4[1], *a4);
  v12 = a4[1];
  GameRoutine_5f070(v12, (unsigned int)GameData_21fdedc);
  GameRoutine_5f100(v12, (unsigned int)GameData_21fdee0);
  GameRoutine_5f200(v12, (unsigned int)GameData_21fdf08);
  GameRoutine_5f290(v12, (unsigned int)GameData_21fdf14);
  GameRoutine_5f060(a4[1]);
  v13 = *a4;
  v14 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 16) + 16LL))(
      *(_QWORD*)(a2 + 16));
  v15 = v14 + 16LL * *(int*)(v14 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v13 + 224LL))(v13, 3, 0, *(_QWORD*)(v15 + 24),
                              *(_QWORD*)(v15 + 32));
  LODWORD(v13) = *(_DWORD*)(a5 + 16);
  v16 = *(_DWORD*)(a5 + 20);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, (unsigned int)v13, v16);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, (unsigned int)v13, v16);
  v17 = *a4;
  v18 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a3 + 16) + 16LL))(
      *(_QWORD*)(a3 + 16));
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 32LL))(v18);
  v21 = v20;
  v22 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 8) + 16LL))(
      *(_QWORD*)(a2 + 8));
  v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 32LL))(v22);
  (*(void (**)(__int64, __int64, __int64, __int64, __int64))(
      *(_QWORD*)v17 + 104LL))(v17, v19, v21, v23, v24);
  v25 = *a4;
  v27[0] = 0;
  v27[1] = 0x3F80000000000000LL;
  result = (*(__int64 (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v25 + 144LL))(
      v25, 0, v27);
  if (v10 >= 1) {
    return GameRoutine_a73d40(*(_QWORD*)(a5 + 64), a4);
  }
  return result;
}

__int64 GameHr_b9fa00(__int64 result, __int64* a2, _QWORD* a3, _QWORD* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  long double v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  long double v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  _QWORD v43[4];
  _QWORD* v44;

  v4 = *a4;
  v41 = a4;
  v42 = a3;
  v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 112LL);
  v40 = v5;
  if (v5 != 0) {
    v6 = 120;
    if (*(_BYTE*)(v5 + 90) != 0) {
      v6 = 89;
    }
    if ((*(_BYTE*)(v5 + v6) & 1) != 0) {
      v8 = *a2;
      v7 = a2[1];
      v9 = *((_DWORD*)a2 + 24);
      v11 = result;
      v12 = (_QWORD*)GameData_212bf68;
      v13 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 384, 16, 0);
      v14 = (_QWORD*)GameRoutine_651b90(*v12, 40, 16, 0);
      *(_QWORD*)(v13 + 32) = 0;
      *(_QWORD*)(v13 + 40) = 0;
      *(_QWORD*)(v13 + 48) = 0;
      *(_QWORD*)(v13 + 56) = 0;
      *(_QWORD*)(v13 + 64) = 0;
      *(_QWORD*)(v13 + 72) = 0;
      v14[2] = &v42;
      v14[3] = &v40;
      *v14 = GameData_1fcb768;
      v14[1] = v11;
      *(_BYTE*)(v13 + 8) = 26;
      *(_DWORD*)(v13 + 80) = v9;
      *(_QWORD*)(v13 + 240) = 0;
      *(_QWORD*)(v13 + 144) = 0;
      *(_QWORD*)(v13 + 152) = 0;
      v14[4] = &v41;
      v15 = *v12;
      v43[0] = GameData_1fcb7f8;
      v43[1] = v11;
      *(_QWORD*)(v13 + 128) = 0;
      *(_QWORD*)(v13 + 136) = 0;
      *(_QWORD*)(v13 + 112) = 0;
      *(_QWORD*)(v13 + 120) = 0;
      *(_QWORD*)(v13 + 96) = 0;
      *(_QWORD*)(v13 + 104) = 0;
      *(_QWORD*)(v13 + 256) = 0;
      *(_QWORD*)(v13 + 272) = 0;
      v44 = v43;
      strcpy((char*)(v13 + 9), "HeightFogPass");
      *(_BYTE*)(v13 + 84) = 1;
      *(_QWORD*)v13 = GameData_1fcb888;
      *(_DWORD*)(v13 + 248) = -1;
      *(_DWORD*)(v13 + 264) = -1;
      v16 = (_QWORD*)GameRoutine_651b90(v15, 40, 16, 0);
      v18 = v14[1];
      v19 = v14[2];
      *(_QWORD*)(v13 + 320) = v16;
      *v16 = GameData_1fcb768;
      v16[1] = v18;
      v20 = v14[3];
      v21 = v14[4];
      v16[2] = v19;
      v16[3] = v20;
      v16[4] = v21;
      v22 = v44;
      if (v44 != nullptr) {
        if (v44 == v43) {
          *(_QWORD*)(v13 + 368) = v13 + 336;
          (*(void (**)(_QWORD*))(*v22 + 24LL))(v22);
        }
        else {
          *(_QWORD*)(v13 + 368) = (*(__int64 (**)(void))(*v44 + 16LL))();
        }
        if (v44 == v43) {
          v23 = 32;
          goto LABEL_14;
        }
        if (v44 != nullptr) {
          v23 = 40;
        LABEL_14:
          (*(void (**)(void))(*v44 + v23))();
        }
      }
      else {
        *(_QWORD*)(v13 + 368) = 0;
      }
      v24 = 128;
      if (*(_QWORD*)(*v12 + 200LL) == 0) {
        v24 = 56;
      }
      v25 = GameRoutine_1a0a4e0(*v12 + v24, v17);
      v27 = (__int64*)a2[1];
      v26 = a2[2];
      if ((unsigned __int64)v27 >= v26) {
        v29 = *a2;
        v30 = (__int64)v27 - *a2;
        v31 = (v30 >> 3) + 1;
        if (v31 >> 61 != 0) {
          GameRoutine_b32f30(v25);
        }
        v32 = v26 - v29;
        if (v32 >> 2 > v31) {
          v31 = v32 >> 2;
        }
        if ((unsigned __int64)v32 >= 0x7FFFFFFFFFFFFFF8LL) {
          v33 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v33 = v31;
        }
        if (v33 != 0) {
          if (v33 >> 61 != 0) {
            GameRoutine_60a210(v25);
          }
          v34 = GameRoutine_651b90(*v12, 8 * v33, 16, 0);
        }
        else {
          v34 = 0;
        }
        v35 = v34 + 8 * v33;
        v36 = v34 + v30 - 8 * (v30 >> 3);
        *(_QWORD*)(v34 + v30) = v13;
        v28 = v34 + v30 + 8;
        GameRoutine_1a0b950(v36, v29, v30);
        *a2 = v36;
        a2[1] = v28;
        a2[2] = v35;
        if (v29 != 0) {
          v38 = 128;
          if (*(_QWORD*)(*v12 + 200LL) == 0) {
            v38 = 56;
          }
          GameRoutine_1a0a4e0(*v12 + v38, v37);
        }
      }
      else {
        *v27 = v13;
        v28 = (__int64)(v27 + 1);
      }
      a2[1] = v28;
      v39 = *(_QWORD*)(v28 - 8);
      v43[0] = a2;
      v43[1] = v39;
      result =
          (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v39 + 16LL))(v39, v43);
      *v42 = *(_QWORD*)(*(_QWORD*)(*a2 + ((v7 - v8) & 0x7FFFFFFF8LL)) + 272LL);
    }
  }
  return result;
}

__int64 GameHr_bd7d60(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int128 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  long double v10;
  long double v11;
  __int64 v12;
  __int64 v13;
  _DWORD* v14;
  float* v15;
  _DWORD* v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v22;
  float v23;
  float v24;
  float v25;
  float v27;
  float v28;
  float v29;
  float v30;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  float v35;
  __int64 v36;
  __int128 v37;

  v1 = *(_QWORD*)(result + 8);
  v2 = result;
  if (*(_QWORD*)(v1 + 736) != 0) {
    v1 = *(_QWORD*)(v1 + 736);
  }
  v3 = *(_QWORD*)(result + 256);
  if (v3 != 0) {
    v4 = *(_OWORD*)(v3 + 208);
    HIDWORD(v4) = 0;
  }
  else {
    v4 = *(_OWORD*)(v1 + 304);
  }
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 40LL);
  v6 = *(_QWORD*)(v5 + 24);
  if (v6 != 0) {
    v7 = *(_QWORD*)(v5 + 16);
    v8 = *(_QWORD*)(v5 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    v37 = v4;
    v9 = GameRoutine_1a0a0c0(v8);
    result = GameRoutine_1a09c50(v6);
    if (v9 != 0) {
      if (v7 != 0) {
        v12 = *(_QWORD*)(v7 + 288);
        if ((*(_BYTE*)(v12 + 840) & 1) == 0 ||
            (v13 = *(_QWORD*)(v12 + 808), v14 = *(_DWORD**)(v12 + 816),
             (_DWORD*)v13 == v14)) {
        LABEL_26:
          v15 = (float*)(v12 + 844);
        }
        else {
          LODWORD(v10) = DWORD2(v37);
          v15 = (float*)(v13 + 88);
          LODWORD(v11) = 0.5;
          while (1) {
            v17 = *(v15 - 6);
            v18 = *(v15 - 3);
            v19 = v17 - (float)(v18 * 0.5);
            v20 = v17 + (float)(v18 * 0.5);
            if (v19 <= *(float*)&v37 && *(float*)&v37 <= v20) {
              v22 = *(v15 - 5);
              v23 = *(v15 - 2);
              v24 = v22 - (float)(v23 * 0.5);
              v25 = v22 + (float)(v23 * 0.5);
              if (v24 <= *((float*)&v37 + 1) && *((float*)&v37 + 1) <= v25) {
                v27 = *(v15 - 4);
                v28 = *(v15 - 1);
                v29 = v27 - (float)(v28 * 0.5);
                v30 = v27 + (float)(v28 * 0.5);
                if (v29 <= *((float*)&v37 + 2) && *((float*)&v37 + 2) <= v30) {
                  break;
                }
              }
            }
            v16 = v15 + 1;
            v15 += 23;
            if (v16 == v14) {
              goto LABEL_26;
            }
          }
        }
        v32 = *(_QWORD*)(*(_QWORD*)(v2 + 240) + 24LL);
        v33 = *(__int64**)(v32 + 312);
        v34 = *(__int64**)(v32 + 320);
        if (v33 != v34) {
          v35 = *v15;
          do {
            v36 = *v33;
            v33 += 2;
            result = (*(__int64 (**)(__int64, const char*, __int64, float,
                                     long double, long double))(
                *(_QWORD*)v36 + 16LL))(v36, "InteriorMaskValue", 17, v35, v10,
                                       v11);
          } while (v33 != v34);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        return GameRoutine_1a09c50(v9);
      }
    }
  }
  return result;
}

unsigned __int64 GameHr_bf1ec0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64* v5;
  __int64 v6;
  float v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int16* v25;
  unsigned __int64 v26;
  __int64 v27;
  char v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  long double v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 result;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int16* v45;
  unsigned __int64 v46;
  int v47;
  __int64 v48;
  long double v49;
  __int64 v50;
  __int64 v51;
  int v52;
  _QWORD v53[3];
  int v54;
  int v55;

  v2 = *a2;
  v5 = (__int64*)GameData_212bf68;
  v6 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 72, 16, 0);
  v7 = *(float*)(v2 + 328);
  v8 = *(_QWORD*)(v2 + 24);
  v9 = v6;
  v10 = *(_QWORD*)(v2 + 80);
  v11 = *(unsigned __int8*)(v2 + 321);
  v12 = a2[2];
  v52 = *(_DWORD*)(a1 + 176);
  v14 = *(_QWORD*)(a1 + 160);
  v13 = *(_QWORD*)(a1 + 168);
  v54 = *(_DWORD*)(v2 + 324);
  v55 = v11;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_BYTE*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = 0;
  *(_QWORD*)(v6 + 36) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 44) = 0x3F8000003F800000LL;
  *(_DWORD*)(v6 + 52) = 0x10000;
  GameRoutine_ad7390(v12);
  v15 = GameRoutine_5e5f00(*(_QWORD*)(*(_QWORD*)(v12 + 8) + 592LL));
  v16 = *(_QWORD*)(v15 + 48);
  if (v16 == 0) {
    goto LABEL_17;
  }
  v51 = v15;
  if (v8 != 0) {
    v17 = GameRoutine_1a09c70(v8);
  }
  else {
    v17 = 0;
  }
  v18 = v16 + 8;
  v19 = *(unsigned __int16*)(v16 + 12);
  v20 = v16 + 8 + 16 * v19;
  v21 = *(_DWORD*)v20;
  if (*(_DWORD*)(v16 + 8) < *(_DWORD*)v20) {
    do {
      v24 = (__int64)v21 >> 3;
      if (v17 > v24) {
        v22 = (*(unsigned __int8*)(v8 + v17 + ~v24) >> (v21 & 7)) & 1;
      }
      else {
        v22 = 0;
      }
      v19 = *(unsigned __int16*)(v16 + 12 + 16 * v19 + 2 * v22);
      v23 = v21 < *(_DWORD*)(v18 + 16 * v19);
      v21 = *(_DWORD*)(v18 + 16 * v19);
    } while (v23);
    v20 = v18 + 16 * v19;
  }
  v25 = *(unsigned __int16**)(v20 + 8);
  if (v17 == *v25) {
    v5 = &GameData_2265ee0;
    if ((unsigned int)GameRoutine_1a09cf0(v25 + 1, v8) != 0 ||
        (~(v26 = v20 - v16 - 24) & 0xFFFFFFFF0LL) == 0) {
    LABEL_17:
      v27 = 0;
      goto LABEL_19;
    }
    v27 = *(_QWORD*)(v51 + 40) + 120LL * (int)(v26 >> 4);
  }
  else {
    v27 = 0;
    v5 = (__int64*)GameData_212bf68;
  }
LABEL_19:
  v53[0] = v27;
  if (*(_BYTE*)(v12 + 165) == 1) {
    v28 = GameRoutine_ad7390(v12);
    v29 = v12 + 32;
    if ((v28 & 1) == 0) {
      v29 = 0;
    }
  }
  else {
    v29 = 0;
  }
  v53[1] = v29;
  v30 = *v5;
  v53[2] = *(_QWORD*)(*(_QWORD*)(v12 + 8) + 800LL);
  v31 = GameRoutine_651b90(v30, 816, 16, 0);
  GameRoutine_a61a80(v31, v53);
  *(_QWORD*)v9 = v31;
  *(_DWORD*)(v31 + 36) = v52;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
    *(_QWORD*)(v9 + 16) = v14;
    *(_QWORD*)(v9 + 24) = v13;
    v33 = GameRoutine_1a0a0c0(v13);
    if (v33 != 0) {
      v34 = v33;
      if (v14 != 0) {
        *(_QWORD*)(v9 + 8) = GameRoutine_a70a20(v14, v31);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
        GameRoutine_1a09c50(v34);
      }
    }
  }
  else {
    *(_QWORD*)(v9 + 16) = v14;
    *(_QWORD*)(v9 + 24) = 0;
  }
  v35 = *(_QWORD*)v9;
  result = GameRoutine_a64140(*(_QWORD*)v9, v32);
  if (v10 != 0) {
    v37 = *(_QWORD*)(v35 + 168);
    *(_QWORD*)(v9 + 56) = v37;
    v38 = *(_QWORD*)(*(_QWORD*)v37 + 8LL);
    if (v38 == 0) {
      goto LABEL_42;
    }
    result = GameRoutine_1a09c70(v10);
    v39 = v38 + 8;
    v40 = *(unsigned __int16*)(v38 + 12);
    v41 = v38 + 8 + 16 * v40;
    v42 = *(_DWORD*)v41;
    if (*(_DWORD*)(v38 + 8) < *(_DWORD*)v41) {
      do {
        v44 = (__int64)v42 >> 3;
        if (result > v44) {
          v43 = (*(unsigned __int8*)(v10 + result + ~v44) >> (v42 & 7)) & 1;
        }
        else {
          v43 = 0;
        }
        v40 = *(unsigned __int16*)(v38 + 12 + 16 * v40 + 2 * v43);
        v23 = v42 < *(_DWORD*)(v39 + 16 * v40);
        v42 = *(_DWORD*)(v39 + 16 * v40);
      } while (v23);
      v41 = v39 + 16 * v40;
    }
    v45 = *(unsigned __int16**)(v41 + 8);
    if (result == *v45 &&
        (_DWORD)(result = GameRoutine_1a09cf0(v45 + 1, v10)) == 0) {
      v46 = (unsigned __int64)(v41 - v38 - 24) >> 4;
    }
    else {
    LABEL_42:
      LODWORD(v46) = -1;
    }
    *(_DWORD*)(v9 + 64) = v46;
  }
  v47 = v54;
  *(_BYTE*)(v9 + 54) = v55;
  *(_DWORD*)(v9 + 48) = 1056964608;
  *(_BYTE*)(v9 + 52) = 1;
  *(float*)(v9 + 40) = (float)v47 / v7;
  *(float*)(v9 + 44) = v7;
  if (v13 != 0) {
    result = GameRoutine_1a09c50(v13);
  }
  v48 = *(_QWORD*)(a1 + 472);
  *(_QWORD*)(a1 + 472) = v9;
  if (v48 != 0) {
    GameRoutine_bf1790(v48);
    v50 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v50 = 56;
    }
    result = GameRoutine_1a0a4e0(*v5 + v50, v49);
  }
  *(_BYTE*)(a1 + 466) = 0;
  return result;
}

__int64 GameHr_cb3210(__int64 result, _BYTE* a2, _BYTE* a3)
{
  __int64 v3;
  int v4;
  _BYTE* v5;
  char v6;

  v3 = *(_QWORD*)result;
  v4 = *(_DWORD*)(*(_QWORD*)result + 24LL);
  if (v4 != -1) {
    if (v4 == 6) {
      *a2 = *a3;
      return result;
    }
    v5 = a3;
    result = ((__int64 (*)(char*, __int64))GameData_1fd3de0[v4])(&v6, v3);
    a3 = v5;
  }
  *(_DWORD*)(v3 + 24) = -1;
  *(_BYTE*)v3 = *a3;
  *(_DWORD*)(v3 + 24) = 6;
  return result;
}

bool GameHr_cc1180(int a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int16* v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;

  v4 = *GameData_212c370;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(void))(*v7 + v8))();
LABEL_9:
  if (GameData_21ee260 != 0) {
    v9 = (unsigned __int16*)(GameData_21ee260 + 8);
  }
  else {
    v9 = (unsigned __int16*)GameData_212cf60;
  }
  v10 = ((__int16)v9[1] << 14) + (*v9 << 20) + ((__int16)v9[2] << 8);
  GameRoutine_1a09b70(&GameData_2166898);
  v11 = v10 & 0xFFFFFFFC | (v10 >> 30);
  v12 = 1812433253 * v11;
  v13 = 1812433253 * ((1812433253 * (v12 ^ (v12 >> 30)) + 1) ^
                      ((1812433253 * (v12 ^ (v12 >> 30)) + 1) >> 30)) +
        2;
  v14 = 1812433253 * (v13 ^ (v13 >> 30)) + 3;
  GameRoutine_1a09b80(&GameData_2166898);
  GameRoutine_1a09b70(&GameData_2166898);
  GameRoutine_1a09b80(&GameData_2166898);
  return (int)(((((1011558400 * v11) ^ v12) >> 8) ^ (v14 >> 19) ^
                (1011558400 * v11) ^ v12 ^ v14) &
               0x7FFFFFFF) %
                 a1 +
             1 ==
         a2;
}

__int64 GameHr_cc5f00(unsigned __int8* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  _QWORD v15[3];

  v2 = *GameData_212c370;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(void))(*v5 + v6))();
LABEL_9:
  memset(v15, 0, sizeof(v15));
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v7 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v7 = 0;
  }
  if (GameData_22127a8 != 0) {
    v8 = GameData_22127a8;
  }
  else {
    v8 = v7;
  }
  v9 = *a1;
  v10 = (v9 & 1) == 0;
  v11 = v9 >> 1;
  if (v10) {
    v12 = a1 + 1;
  }
  else {
    v12 = *((unsigned __int8**)a1 + 2);
  }
  if (v10) {
    v13 = v11;
  }
  else {
    v13 = *((_QWORD*)a1 + 1);
  }
  return GameRoutine_d9d220(v8, v12, v13, v15, 0);
}

_QWORD* GameHr_cd4660(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  int* v13;
  int v14;
  int v15;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _DWORD* v22;
  _QWORD* v23;
  int* v24;
  int v25;
  int v26;
  __int64* v28;
  __int64 v29;
  int v30;
  __int64 v32;

  v4 = *GameData_212c370;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  result = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v8 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(void))(*result + v8))();
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 == 0x4000) {
    return result;
  }
  v10 = (_QWORD*)(GameData_212c330[0][*(unsigned int*)(a1 + 20)] + 16 * v9);
  v11 = v10[1];
  if (v11 == 0 || *v10 != *(_QWORD*)(a1 + 8)) {
    return result;
  }
  v12 = *(_QWORD*)(a2 + 8);
  if ((*(_BYTE*)a2 & 1) == 0) {
    v12 = *(_BYTE*)a2 >> 1;
  }
  if (v12 > 7) {
    switch (v12) {
    case 8LL:
      if ((*(_BYTE*)a2 & 1) != 0) {
        v23 = *(_QWORD**)(a2 + 16);
      }
      else {
        v23 = (_QWORD*)(a2 + 1);
      }
      if (*v23 == 0x776F4C65736F6F4CLL) {
        v17 = 0x100000001LL;
        goto LABEL_67;
      }
      break;
    case 9LL:
      if ((*(_BYTE*)a2 & 1) != 0) {
        v28 = *(__int64**)(a2 + 16);
      }
      else {
        v28 = (__int64*)(a2 + 1);
      }
      v29 = *v28;
      v30 = *((unsigned __int8*)v28 + 8);
      if (v29 == 0x67694865736F6F4CLL && v30 == 104) {
        v17 = 0x100000003LL;
        goto LABEL_67;
      }
      break;
    case 11LL:
      v18 = (*(_BYTE*)a2 & 1) != 0 ? *(__int64**)(a2 + 16) : (__int64*)(a2 + 1);
      v19 = *v18;
      v20 = *(__int64*)((char*)v18 + 3);
      if (v19 == 0x6D6E5565736F6F4CLL && v20 == 0x65766F6D6E556573LL) {
        v17 = 0x100000004LL;
        goto LABEL_67;
      }
      break;
    default:
      break;
    }
  }
  else {
    switch (v12) {
    case 4LL:
      if ((*(_BYTE*)a2 & 1) != 0) {
        v22 = *(_DWORD**)(a2 + 16);
      }
      else {
        v22 = (_DWORD*)(a2 + 1);
      }
      if (*v22 == 1819042135) {
        v17 = 0x100000005LL;
        goto LABEL_67;
      }
      break;
    case 6LL:
      if ((*(_BYTE*)a2 & 1) != 0) {
        v24 = *(int**)(a2 + 16);
      }
      else {
        v24 = (int*)(a2 + 1);
      }
      v25 = *v24;
      v26 = *((unsigned __int16*)v24 + 2);
      if (v25 == 2036427856 && v26 == 29285) {
        v17 = 0x100000002LL;
        goto LABEL_67;
      }
      break;
    case 7LL:
      v13 = (*(_BYTE*)a2 & 1) != 0 ? *(int**)(a2 + 16) : (int*)(a2 + 1);
      v14 = *v13;
      v15 = *(int*)((char*)v13 + 3);
      if (v14 != 1634953540 || v15 != 1701601889) {
        return result;
      }
      v17 = 0x100000000LL;
    LABEL_67:
      v32 = *(_QWORD*)(v11 + 24);
      *(_DWORD*)(v32 + 368) = v17;
      *(_BYTE*)(v32 + 372) = BYTE4(v17);
      return (_QWORD*)GameRoutine_cea6b0(v32);
    default:
      return result;
    }
  }
  return result;
}

#pragma GCC visibility pop
