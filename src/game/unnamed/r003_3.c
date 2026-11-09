#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int128 GameData_1a83090;
extern __int128 GameData_1a837f0;
extern char GameData_1abbc8d[];
extern char GameData_1ade8ad[];
extern __int64 (*GameData_1fd08e0[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c370;
extern __int64 GameData_212c6a0[3];
extern int* GameData_212df08;
extern _UNKNOWN* GameData_212df10;
extern int* GameData_212ea00;
extern _UNKNOWN* GameData_212ea08;
extern _UNKNOWN* GameData_212ea28;
extern char GameData_2167610;
extern char GameData_2167620;
extern __int64 GameData_21a6070;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_1083780(_QWORD, _QWORD);
__int64 GameRoutine_1971f0(_QWORD, _QWORD);
__int64 GameRoutine_1976c0(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a200(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, long double);
__int64 GameRoutine_1a0a540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
_QWORD* GameRoutine_540(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_6380e0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_64aa00(long double, long double,
                                                  long double, long double);
__int64 GameRoutine_64be60();
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b7aa0(_QWORD);
__int64 GameRoutine_a7bee0(__int64, __int64);
__int64 GameRoutine_a7c000(_QWORD);
__int64 GameRoutine_ad6000(_QWORD, _QWORD);
__int64 GameRoutine_ade2c0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_bda1f0(void);
__int64 GameRoutine_bda220(void);

__int64 GameHr_bd6740(__int64 a1, __int64 a2, _QWORD* a3, char a4)
{
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  long double v16;
  __int64 v17;
  unsigned __int8 explicit;
  int* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  _QWORD** v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  bool v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  _QWORD* v52;
  __int64 v53;
  _QWORD* v54;
  unsigned int v55;
  __int64* v56;
  __int64* i;
  __int64 v58;
  _BOOL4 v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  int v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  _BYTE* v73;
  int v74;
  unsigned __int64 v75;
  __int64 v76;
  _BYTE* v77;
  int v78;
  __int64** v79;
  __int64** j;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  long double v88;
  unsigned __int64 v89;
  _BYTE* v90;
  char* v91;
  __int64 v92;
  __int64 v93;
  int v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  int v98;
  __int64 v99;
  int v100;
  __int64 v101;
  __int64 v102;
  bool v103;
  __int64 v104;
  _BYTE* v105;
  __int64 v106;
  char* v107;
  __int64 v108;
  long double v109;
  char v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  long double v114;
  unsigned __int64 v115;
  _BYTE* v116;
  char* v117;
  __int64 v118;
  _BYTE* v119;
  __int64 v120;
  char* v121;
  __int64 v122;
  long double v123;
  char v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  long double v128;
  unsigned __int64 v129;
  _BYTE* v130;
  char* v131;
  __int64 v132;
  _BYTE* v133;
  __int64 v134;
  char* v135;
  long double v136;
  char v137;
  __int64 v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  __int64 v141;
  __int64 v142;
  int v143;
  bool v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  bool v149;
  __int64 v150;
  unsigned __int8 v151;
  int* v152;
  __int64 v153;
  __int64 v154;
  int v155;
  __int64 v156;
  __int64 v157;
  _QWORD* v158;
  __int64 v159;
  unsigned __int64 v160;
  unsigned __int64 v161;
  char v162;
  _QWORD* v163;
  _QWORD v164[2];
  __int64 v165;
  _QWORD v166[2];
  unsigned __int64 v167;
  __int64 (*v168)();
  __int64 v169;
  _BYTE v170[256];
  _BYTE* v171;
  __int64 v172;
  __int64 v173;
  char* v174;
  __int64 v175;
  _BYTE v176[8];
  char v177;
  _QWORD v178[2];
  int v179;
  __int64 v180;
  __int64 v181;

  *(_BYTE*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 17) = 33686018;
  *(_QWORD*)a1 = GameData_1fd08e0;
  *(_QWORD*)(a1 + 8) = a2;
  *(_DWORD*)(a1 + 24) = GameRoutine_ad6000("CharaOutline", 12);
  v7 = GameRoutine_ad6000("CharaTransparentOutline", 23);
  *(_QWORD*)(a1 + 48) = 0;
  v8 = (__int64*)GameData_212ea28;
  *(_QWORD*)(a1 + 32) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 28) = v7;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_BYTE*)(a1 + 88) = 0;
  *(_DWORD*)(a1 + 114) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_BYTE*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 40) = 1065353216;
  *(_WORD*)(a1 + 112) = 256;
  v10 = *v8;
  v9 = v8[1];
  *(_QWORD*)(a1 + 96) = v10;
  *(_QWORD*)(a1 + 104) = v9;
  *(_QWORD*)(a1 + 176) = 0xFFFFFFFF00000000LL;
  *(_OWORD*)(a1 + 144) = GameData_1a837f0;
  *(_OWORD*)(a1 + 160) = GameData_1a83090;
  *(_DWORD*)(a1 + 192) = GameRoutine_ad6000("CharaForward", 12);
  *(_DWORD*)(a1 + 196) = GameRoutine_ad6000("CharaForwardTransparent", 23);
  *(_DWORD*)(a1 + 200) = GameRoutine_ad6000("CharaDepth", 10);
  *(_DWORD*)(a1 + 204) = GameRoutine_ad6000("CharaTransparentPreDepth", 24);
  result = GameRoutine_ad6000("CharaGmapOutlineMask", 20);
  *(_DWORD*)(a1 + 208) = result;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  v17 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 232) = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v19 = GameData_212df08;
  if ((explicit & 1) == 0) {
    result = GameRoutine_1a09fd0(GameData_212df10);
    if ((_DWORD)result != 0) {
      *v19 = (unsigned int)GameRoutine_540(v158, 0, "ModelModule", 11);
      result = GameRoutine_1a09fe0(GameData_212df10);
    }
  }
  v20 = *(_QWORD*)(v17 + 512);
  v21 = v20;
  do {
    v22 = *(_DWORD*)(v21 - 16);
    v21 -= 16;
    v20 -= 16;
  } while (v22 != *v19);
  v23 = *(_QWORD*)(v20 + 8);
  *(_QWORD*)(a1 + 248) = 0;
  v162 = a4;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 240) = v23;
  v24 = *(_QWORD***)(v23 + 24);
  v163 = a3;
  v25 = (char*)v24[40] - (char*)v24[39];
  v26 = *(_QWORD*)(a1 + 48);
  v27 = *(_QWORD*)(a1 + 56);
  v28 = v25 >> 4;
  v29 = v27 - v26;
  v30 = (v27 - v26) >> 2;
  v31 = (v25 >> 4) - v30;
  if (v25 >> 4 <= v30) {
    if (v25 >> 4 >= v30) {
      goto LABEL_20;
    }
    v45 = v26 + 4 * v28;
    goto LABEL_19;
  }
  v32 = *(_QWORD*)(a1 + 64);
  if (v31 <= (v32 - v27) >> 2) {
    result = GameRoutine_1a0ba50(
        *(_QWORD*)(a1 + 56), 0,
        (((v25 >> 2) - v29 - 4) & 0xFFFFFFFFFFFFFFFCLL) + 4, v13, v14, v15);
    v45 = v27 + 4 * v31;
  LABEL_19:
    *(_QWORD*)(a1 + 56) = v45;
    goto LABEL_20;
  }
  if (v28 >> 62 != 0) {
    GameRoutine_bda1f0();
  }
  v33 = v32 - v26;
  if (v33 >> 1 > v28) {
    v28 = v33 >> 1;
  }
  v34 = (unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFFCLL;
  v35 = 0x3FFFFFFFFFFFFFFFLL;
  if (!v34) {
    v35 = v28;
  }
  if (v35 >> 62 != 0) {
    GameRoutine_60a210(result);
  }
  v161 = v35;
  v36 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 4 * v35, 16, 0);
  v37 = *(_QWORD*)(a1 + 48);
  v38 = v36 + v29;
  v39 = v36;
  v40 = v27 - v37;
  GameRoutine_1a0ba50(v36 + v29, 0,
                      (((v25 >> 2) - v29 - 4) & 0xFFFFFFFFFFFFFFFCLL) + 4, v41,
                      v42, v43);
  result = GameRoutine_1a0b950(v38 - v40, v37, v40);
  *(_QWORD*)(a1 + 48) = v38 - v40;
  *(_QWORD*)(a1 + 56) = v38 + 4 * v31;
  *(_QWORD*)(a1 + 64) = v39 + 4 * v161;
  if (v37 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v44 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v44, v16);
  }
LABEL_20:
  v46 = v24[39];
  v47 = v24[40];
  if (v46 != v47) {
    v48 = 0;
    do {
      v49 = *v46;
      v50 = *(_QWORD*)(*v46 + 16);
      if (v50 == 0) {
        goto LABEL_29;
      }
      v51 = *(_QWORD**)(v50 + 56);
      v52 = *(_QWORD**)(v50 + 64);
      if (v51 != v52) {
        while (1) {
          result = GameRoutine_1a0a540(*v51, "outline_mode", 12);
          if ((_DWORD)result == 0) {
            break;
          }
          if (++v51 == v52) {
            goto LABEL_29;
          }
        }
      }
      if (v51 == v52) {
      LABEL_29:
        v53 = *(_QWORD*)(v49 + 8);
        if (v53 == 0) {
          goto LABEL_22;
        }
        v51 = *(_QWORD**)(v53 + 80);
        v54 = *(_QWORD**)(v53 + 88);
        if (v51 != v54) {
          while (1) {
            result = GameRoutine_1a0a540(*v51, "outline_mode", 12);
            if ((_DWORD)result == 0) {
              break;
            }
            if (++v51 == v54) {
              goto LABEL_22;
            }
          }
        }
        if (v51 == v54) {
          goto LABEL_22;
        }
      }
      v55 = *(_DWORD*)(*v51 + 16LL);
      if (v55 <= 1) {
        *(_DWORD*)(*(_QWORD*)(a1 + 48) + 4 * v48) = v55;
      }
    LABEL_22:
      ++v48;
      v46 += 2;
    } while (v46 != v47);
  }
  if ((v162 & 1) != 0) {
    v56 = v24[39];
    for (i = v24[40]; v56 != i;
         result = (*(__int64 (**)(__int64, const char*, __int64, double))(
             *(_QWORD*)v58 + 16LL))(v58, "GradationEnabled", 16, 0.0)) {
      v58 = *v56;
      v56 += 2;
    }
  }
  v59 = (*(_QWORD*)(a1 + 80) & 0xFLL) != 0;
  v60 = 2;
  if (GameData_2167610 != 0) {
    v60 = 0;
  }
  v61 = *(_QWORD*)(a1 + 80) & 0xFFFFFFFFFFFFFFFDLL | v60;
  *(_QWORD*)(a1 + 80) = v61;
  v62 = v61 & 0xF;
  if (v59 != (v62 != 0)) {
    v63 = *(_QWORD*)(*(_QWORD*)(a1 + 240) + 24LL);
    v64 = *(_QWORD*)(v63 + 320) - *(_QWORD*)(v63 + 312);
    if (v64 != 0) {
      v65 = v64 >> 4;
      v66 = 0;
      v67 = v62 == 0;
      do {
        v68 = *(int*)(a1 + 24);
        v69 = *(_QWORD*)(*(_QWORD*)(v63 + 312) + v66);
        v70 = *(_QWORD*)(v69 + 264);
        v71 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v69 + 272) - v70) >> 3);
        if (v71 > v68 && *(_BYTE*)(v70 + 24LL * (int)v68 + 20) == 1) {
          v72 = v70 + 24LL * (int)v68;
          v74 = *(unsigned __int8*)(v72 + 21);
          v73 = (_BYTE*)(v72 + 21);
          if (v74 != v67) {
            *v73 = v67;
            result = GameRoutine_ade2c0(v69, v12);
            v70 = *(_QWORD*)(v69 + 264);
            v71 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v69 + 272) - v70) >> 3);
          }
        }
        v75 = *(int*)(a1 + 28);
        if (v71 > v75 && *(_BYTE*)(v70 + 24LL * (int)v75 + 20) == 1) {
          v76 = v70 + 24LL * (int)v75;
          v78 = *(unsigned __int8*)(v76 + 21);
          v77 = (_BYTE*)(v76 + 21);
          if (v78 != v67) {
            *v77 = v67;
            result = GameRoutine_ade2c0(v69, v12);
          }
        }
        --v65;
        v66 += 16;
      } while (v65 != 0);
    }
  }
  v79 = (__int64**)v24[39];
  for (j = (__int64**)v24[40]; v79 != j;
       result = (*(__int64 (**)(long double))(v82 + 16))(v16)) {
    v81 = *v79;
    v79 += 2;
    v82 = *v81;
    if (GameData_2167620 != 0) {
      *(float*)&v16 = 1.0;
    }
    else {
      *(float*)&v16 = 0.0;
    }
  }
  *(_BYTE*)(a1 + 112) = GameData_2167620;
  if (v163 != nullptr) {
    v83 = v163[76];
    v84 = v163[77];
    if (v84 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v84 + 16), 1u,
                                memory_order_relaxed);
    }
    v85 = v163[78];
    v86 = *(_QWORD*)(a1 + 224);
    *(_QWORD*)(a1 + 216) = v83;
    *(_QWORD*)(a1 + 224) = v84;
    if (v86 != 0) {
      GameRoutine_1a09c50(v86);
      v84 = *(_QWORD*)(a1 + 224);
    }
    *(_QWORD*)(a1 + 232) = v85;
    if (v84 == 0 || *(_QWORD*)(v84 + 8) == -1) {
      v85 = 0;
    }
    v169 = 0;
    v179 = 0;
    v176[0] = 0;
    v177 = 0;
    v165 = 12;
    v164[0] = "Jnt_C_Head";
    v167 = 0;
    v168 = GameRoutine_64be60;
    v174 = (char*)v164;
    v175 = 12;
    v166[0] = v170;
    v166[1] = 256;
    v171 = v170;
    v178[0] = "-{}";
    v178[1] = "";
    v180 = 0;
    v181 = 1;
    v172 = (__int64)v166;
    v173 = 1;
    v87 = GameRoutine_6380e0(v178, &v172);
    if (v177 == 1) {
      v87 = GameRoutine_1a0a200(v176);
    }
    v89 = v167;
    if (v167 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_191;
    }
    v90 = v171;
    if (v167 >= 0x17) {
      if ((v167 | 7) == 0x17) {
        v104 = 26;
      }
      else {
        v104 = (v167 | 7) + 1;
      }
      v91 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v104, 16, 0);
      v173 = v89;
      v174 = v91;
      v172 = v104 | 1;
    }
    else {
      LOBYTE(v172) = 2 * v167;
      v91 = (char*)&v172 + 1;
      if (v167 == 0) {
        goto LABEL_86;
      }
    }
    GameRoutine_1a0b940(v91, v90, v89);
  LABEL_86:
    v105 = v171;
    v91[v89] = 0;
    if (v105 != v170 && v105 != nullptr) {
      v106 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v106 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v106, v88);
    }
    if ((v172 & 1) != 0) {
      v107 = v174;
    }
    else {
      v107 = (char*)&v172 + 1;
    }
    v108 = GameRoutine_1083780(v85, v107);
    v110 = v172;
    *(_QWORD*)(a1 + 256) = v108;
    if ((v110 & 1) != 0 && v174 != nullptr) {
      v111 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v111 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v111, v109);
    }
    v112 = *(_QWORD*)(a1 + 224);
    if (v112 == 0 || *(_QWORD*)(v112 + 8) == -1) {
      v113 = 0;
    }
    else {
      v113 = *(_QWORD*)(a1 + 232);
    }
    v167 = 0;
    v168 = GameRoutine_64be60;
    v169 = 0;
    v179 = 0;
    v176[0] = 0;
    v164[0] = "Loc_C_Trans";
    v165 = 12;
    v177 = 0;
    v166[0] = v170;
    v166[1] = 256;
    v178[0] = "-{}";
    v178[1] = "";
    v171 = v170;
    v180 = 0;
    v181 = 1;
    v174 = (char*)v164;
    v175 = 12;
    v172 = (__int64)v166;
    v173 = 1;
    v87 = GameRoutine_6380e0(v178, &v172);
    if (v177 == 1) {
      v87 = GameRoutine_1a0a200(v176);
    }
    v115 = v167;
    if (v167 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_191;
    }
    v116 = v171;
    if (v167 >= 0x17) {
      if ((v167 | 7) == 0x17) {
        v118 = 26;
      }
      else {
        v118 = (v167 | 7) + 1;
      }
      v117 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v118, 16, 0);
      v173 = v115;
      v174 = v117;
      v172 = v118 | 1;
    }
    else {
      LOBYTE(v172) = 2 * v167;
      v117 = (char*)&v172 + 1;
      if (v167 == 0) {
        goto LABEL_114;
      }
    }
    GameRoutine_1a0b940(v117, v116, v115);
  LABEL_114:
    v119 = v171;
    v117[v115] = 0;
    if (v119 != v170 && v119 != nullptr) {
      v120 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v120 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v120, v114);
    }
    if ((v172 & 1) != 0) {
      v121 = v174;
    }
    else {
      v121 = (char*)&v172 + 1;
    }
    v122 = GameRoutine_1083780(v113, v121);
    v124 = v172;
    *(_QWORD*)(a1 + 264) = v122;
    if ((v124 & 1) != 0 && v174 != nullptr) {
      v125 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v125 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v125, v123);
    }
    v126 = *(_QWORD*)(a1 + 224);
    if (v126 == 0 || *(_QWORD*)(v126 + 8) == -1) {
      v127 = 0;
    }
    else {
      v127 = *(_QWORD*)(a1 + 232);
    }
    v164[0] = "Jnt_C_Head";
    v167 = 0;
    v168 = GameRoutine_64be60;
    v169 = 0;
    v179 = 0;
    v165 = 12;
    v174 = (char*)v164;
    v175 = 12;
    v176[0] = 0;
    v177 = 0;
    v166[0] = v170;
    v166[1] = 256;
    v171 = v170;
    v178[0] = "-{}";
    v178[1] = "";
    v180 = 0;
    v181 = 1;
    v172 = (__int64)v166;
    v173 = 1;
    v87 = GameRoutine_6380e0(v178, &v172);
    if (v177 == 1) {
      v87 = GameRoutine_1a0a200(v176);
    }
    v129 = v167;
    if (v167 < 0xFFFFFFFFFFFFFFF7LL) {
      v130 = v171;
      if (v167 >= 0x17) {
        if ((v167 | 7) == 0x17) {
          v132 = 26;
        }
        else {
          v132 = (v167 | 7) + 1;
        }
        v131 =
            (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v132, 16, 0);
        v173 = v129;
        v174 = v131;
        v172 = v132 | 1;
      }
      else {
        LOBYTE(v172) = 2 * v167;
        v131 = (char*)&v172 + 1;
        if (v167 == 0) {
        LABEL_142:
          v133 = v171;
          v131[v129] = 0;
          if (v133 != v170 && v133 != nullptr) {
            v134 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v134 = 56;
            }
            GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v134, v128);
          }
          if ((v172 & 1) != 0) {
            v135 = v174;
          }
          else {
            v135 = (char*)&v172 + 1;
          }
          result = GameRoutine_1083780(v127, v135);
          v137 = v172;
          *(_QWORD*)(a1 + 272) = result;
          if ((v137 & 1) != 0 && v174 != nullptr) {
            v138 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v138 = 56;
            }
            result =
                GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v138, v136);
          }
          goto LABEL_187;
        }
      }
      GameRoutine_1a0b940(v131, v130, v129);
      goto LABEL_142;
    }
  LABEL_191:
    GameRoutine_60a1d0(v87);
  }
  v92 = *(_QWORD*)(*v24[21] + 8LL);
  if (v92 == 0) {
    LODWORD(v139) = -1;
    LODWORD(v140) = -1;
    goto LABEL_174;
  }
  v93 = v92 + 8;
  v94 = *(_DWORD*)(v92 + 8);
  v95 = v92 + 12;
  v96 = *(unsigned __int16*)(v92 + 12);
  v97 = v92 + 8 + 16 * v96;
  v98 = *(_DWORD*)v97;
  v99 = v97;
  if (v94 < *(_DWORD*)v97) {
    v100 = *(_DWORD*)v97;
    v101 = *(unsigned __int16*)(v92 + 12);
    do {
      if ((unsigned int)(v100 >> 3) <= 9) {
        result = v100 & 7;
        v102 = ((unsigned __int8)GameData_1ade8ad[~(v100 >> 3) + 10] >>
                (v100 & 7)) &
               1;
      }
      else {
        v102 = 0;
      }
      v101 = *(unsigned __int16*)(v95 + 16 * v101 + 2 * v102);
      v103 = v100 < *(_DWORD*)(v93 + 16 * v101);
      v100 = *(_DWORD*)(v93 + 16 * v101);
    } while (v103);
    v99 = v93 + 16 * v101;
  }
  v141 = *(_QWORD*)(v99 + 8);
  if (*(_WORD*)v141 == 10 &&
      ((v142 = *(_QWORD*)(v141 + 2), v143 = *(unsigned __int16*)(v141 + 10),
        v142 == 0x65485F435F746E4ALL)
           ? (v144 = v143 == 25697)
           : (v144 = false),
       v144)) {
    v139 = (unsigned __int64)(v99 - v92 - 24) >> 4;
    if (v94 < v98) {
      goto LABEL_166;
    }
  }
  else {
    LODWORD(v139) = -1;
    if (v94 < v98) {
      do {
      LABEL_166:
        if ((unsigned int)(v98 >> 3) <= 0xA) {
          v145 = ((unsigned __int8)GameData_1abbc8d[~(v98 >> 3) + 11] >>
                  (v98 & 7)) &
                 1;
        }
        else {
          v145 = 0;
        }
        v96 = *(unsigned __int16*)(v95 + 16 * v96 + 2 * v145);
        v103 = v98 < *(_DWORD*)(v93 + 16 * v96);
        v98 = *(_DWORD*)(v93 + 16 * v96);
      } while (v103);
      v97 = v93 + 16 * v96;
    }
  }
  v146 = *(_QWORD*)(v97 + 8);
  if (*(_WORD*)v146 == 11 &&
      ((v147 = *(_QWORD*)(v146 + 2), v148 = *(_QWORD*)(v146 + 5),
        v147 == 0x72545F435F636F4CLL)
           ? (v149 = v148 == 0x736E6172545F435FLL)
           : (v149 = false),
       v149)) {
    v140 = (unsigned __int64)(v97 - v92 - 24) >> 4;
  }
  else {
    LODWORD(v140) = -1;
  }
LABEL_174:
  if (((unsigned int)v140 & (unsigned int)v139) != 0xFFFFFFFF) {
    v150 = *(_QWORD*)(a1 + 8);
    v151 = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea08,
                                memory_order_acquire);
    v152 = GameData_212ea00;
    if ((v151 & 1) == 0) {
      v159 = v150;
      v160 = (unsigned int)GameRoutine_1a09fd0(GameData_212ea08);
      v150 = v159;
      if ((_DWORD)v160 != 0) {
        *v152 = (unsigned int)GameRoutine_540((_QWORD*)v160, 0, "LocatorModule",
                                              13);
        GameRoutine_1a09fe0(GameData_212ea08);
        v150 = v159;
      }
    }
    v153 = *(_QWORD*)(v150 + 512);
    v154 = v153;
    do {
      if (v154 == *(_QWORD*)(v150 + 504)) {
        goto LABEL_181;
      }
      v155 = *(_DWORD*)(v154 - 16);
      v154 -= 16;
      v153 -= 16;
    } while (v155 != *v152);
    if (*(_QWORD*)(v150 + 512) == v153 || (v156 = *(_QWORD*)(v153 + 8)) == 0) {
    LABEL_181:
      v156 = GameRoutine_bda220();
    }
    v157 = v156;
    *(_QWORD*)(a1 + 248) = v156;
    if ((_DWORD)v139 != -1) {
      *(_QWORD*)(a1 + 256) = GameRoutine_a7c000(v156);
      v157 = *(_QWORD*)(a1 + 248);
    }
    if ((_DWORD)v140 != -1) {
      *(_QWORD*)(a1 + 264) = GameRoutine_a7c000(v157);
      v157 = *(_QWORD*)(a1 + 248);
    }
    result = GameRoutine_a7bee0(v157, (__int64)"Jnt_C_Head");
    *(_QWORD*)(a1 + 272) = result;
  }
LABEL_187:
  *(_BYTE*)(a1 + 117) = 1;
  return result;
}

__int64 GameHr_cc5980(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  char* v7;
  char* v8;
  unsigned __int64 v9;
  unsigned int i;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  long double v16;
  long double v17;
  long double v18;
  long double v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  char* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  long double v29;
  __int64 v30;
  __int64 result;
  long double v32;
  char* v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  char* v39;

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
  v7 = nullptr;
  v8 = nullptr;
  if ((unsigned int)GameRoutine_1976c0(a1) != 0) {
    v9 = 0;
    for (i = 0; i < (unsigned int)GameRoutine_1976c0(a1); ++i) {
      v13 = GameRoutine_1971f0(a1, i);
      if ((*(_BYTE*)v13 & 1) != 0) {
        v14 = *(_QWORD*)(v13 + 16);
      }
      else {
        v14 = v13 + 1;
      }
      v15 = GameRoutine_1a09c70(v14);
      if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
        GameRoutine_60a1d0(v15);
      }
      v20 = v15;
      if (v15 >= 0x17) {
        if ((v15 | 7) == 0x17) {
          v22 = 26;
        }
        else {
          v22 = (v15 | 7) + 1;
        }
        v21 = (char*)GameRoutine_651b90(GameData_2265ee0, v22, 16, 0);
        v38 = v20;
        v39 = v21;
        v37 = v22 | 1;
      }
      else {
        v21 = (char*)&v37 + 1;
        LOBYTE(v37) = 2 * v15;
        if (v15 == 0) {
          goto LABEL_25;
        }
      }
      v15 = GameRoutine_1a0b940(v21, v14, v20);
    LABEL_25:
      v21[v20] = 0;
      if ((unsigned __int64)v8 < v9) {
        v11 = v37;
        v12 = v39;
        *((_QWORD*)v8 + 1) = v38;
        *((_QWORD*)v8 + 2) = v12;
        *(_QWORD*)v8 = v11;
        v8 += 24;
      }
      else {
        v23 = (char*)(v8 - v7);
        v24 = 0xAAAAAAAAAAAAAAABLL * ((v8 - v7) >> 3) + 1;
        if (v24 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_64aa00(v16, v17, v18, v19);
        }
        if (0x5555555555555556LL * ((__int64)(v9 - (_QWORD)v7) >> 3) > v24) {
          v24 = 0x5555555555555556LL * ((__int64)(v9 - (_QWORD)v7) >> 3);
        }
        if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v9 - (_QWORD)v7) >> 3) >=
            0x555555555555555LL) {
          v25 = 0xAAAAAAAAAAAAAAALL;
        }
        else {
          v25 = v24;
        }
        if (v25 != 0) {
          if (v25 > 0xAAAAAAAAAAAAAAALL) {
            GameRoutine_60a210(v15);
          }
          v26 = GameRoutine_651b90(GameData_2265ee0, 24 * v25, 16, 0);
        }
        else {
          v26 = 0;
        }
        v27 = (__int64*)&v23[v26];
        v9 = v26 + 24 * v25;
        v28 = v38;
        v8 = &v23[v26 + 24];
        *v27 = v37;
        v27[1] = v28;
        v27[2] = (__int64)v39;
        GameRoutine_1a0b950(v26, v7, v23);
        if (v7 != nullptr) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v30 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v30, v29);
        }
        v7 = (char*)v26;
      }
    }
  }
  result = GameRoutine_6b7aa0(*(_QWORD*)GameData_212c6a0[0] + 232LL);
  if (v7 != nullptr) {
    if (v7 != v8) {
      v33 = v8;
      do {
        v34 = *(v33 - 24);
        v33 -= 24;
        if ((v34 & 1) != 0 && *((_QWORD*)v8 - 1) != 0) {
          if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
            v35 = 128;
          }
          else {
            v35 = 56;
          }
          GameRoutine_1a0a4e0(GameData_2265ee0 + v35, v32);
        }
        v8 = v33;
      } while (v33 != v7);
    }
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v36 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v36, v32);
  }
  return result;
}

#pragma GCC visibility pop
