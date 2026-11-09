#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_17fca10(_QWORD, float, float, float, float, float, float);
__int64 GameRoutine_17fcb90(_QWORD, float, float, float, float, float, float);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_cutscene_PostEffectActor_vtable[])();
extern __int64 GameData_212c638;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern __int64* game_g_frame_clock_ptr[3];
extern unsigned int GameData_1c0b528[3];
float GameRoutine_17fb700(_QWORD, _QWORD);
float GameRoutine_618640(_QWORD, double, float);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 PostEffectActor_Unknown8(__int64 result, __int64 a2);
__int64 PostEffectActor_Unknown4(__int64 result, double a2, float a3);
void PostEffectActor_Unknown9(__int64 a1, __int64 a2);
_QWORD* PostEffectActor_Destructor(_QWORD* result);
__int64 GameRoutine_17fb4a0(_QWORD, float, float);
void __attribute__((noreturn)) GameRoutine_1800840(long double);
float PostEffectActor_17fb700(__int64 a1, __int64* a2, long double a3);
_OWORD* PostEffectActor_17fca10(_OWORD* result, float a2, float a3, float a4,
                                float a5, float a6, float a7);
_OWORD* PostEffectActor_17fcb90(_OWORD* result, float a2, float a3, float a4,
                                float a5, float a6, float a7);

float PostEffectActor_17fb700(__int64 a1, __int64* a2, long double a3)
{
  float result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  float v9;

  if ((int)**(float**)a1 == -2) {
    GameRoutine_17fb4a0(a2, *(float*)(a1 + 8), *(float*)(a1 + 12));
    return result;
  }
  v4 = *a2;
  v5 = a2[1];
  *(_QWORD*)&a3 = 0;
  v6 = v5 - *a2;
  v7 = v6 >> 2;
  v8 = (v6 >> 2) / 3uLL;
  if ((int)v8 < 1) {
    v9 = 0.0;
    return v9 + (float)((float)(*(float*)&a3 - v9) * *(float*)(a1 + 16));
  }
  if (v5 == v4 || v7 <= 1 || v6 == 8) {
    goto LABEL_14;
  }
  v9 = *(float*)(v4 + 4);
  if ((_DWORD)v8 != 1) {
    if (v7 > 3 && v6 != 16 && v7 > 5) {
      LODWORD(a3) = *(_DWORD*)(v4 + 16);
      return v9 + (float)((float)(*(float*)&a3 - v9) * *(float*)(a1 + 16));
    }
  LABEL_14:
    GameRoutine_1800840(a3);
  }
  return v9 + (float)((float)(*(float*)&a3 - v9) * *(float*)(a1 + 16));
}

_OWORD* PostEffectActor_17fca10(_OWORD* result, float a2, float a3, float a4,
                                float a5, float a6, float a7)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _OWORD* v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  char v18;
  __int64 v19;
  int v20;
  __int128 v21;

  v7 = *(_QWORD*)(game_g_frame_clock + 13224);
  v8 = *(_QWORD*)(v7 + 48);
  v9 = *(_QWORD*)(v7 + 56);
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    v10 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 192LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = result;
      v12 = a7;
      v13 = a6;
      v14 = a5;
      v15 = a4;
      v16 = a3;
      v17 = a2;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
      a2 = v17;
      a3 = v16;
      result = v11;
      a4 = v15;
      a5 = v14;
      a6 = v13;
      a7 = v12;
    }
  }
  else {
    v10 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 192LL);
  }
  v18 = *(_BYTE*)(v10 + 272);
  v19 = *(_QWORD*)(v10 + 328);
  *(_QWORD*)(v10 + 256) = *(_QWORD*)(v10 + 320);
  *(_QWORD*)(v10 + 264) = v19;
  if ((v18 & 1) == 0) {
    *(_BYTE*)(v10 + 272) = 1;
  }
  v20 = *(_DWORD*)(v10 + 408);
  *(_BYTE*)(v10 + 376) = 1;
  *(_BYTE*)(v10 + 456) = 1;
  *(_BYTE*)(v10 + 536) = 1;
  *(_BYTE*)(v10 + 616) = 1;
  *(_BYTE*)(v10 + 696) = 1;
  *(_BYTE*)(v10 + 776) = 1;
  *(_WORD*)(v10 + 89) = 257;
  *(_DWORD*)(v10 + 372) = v20;
  *(_DWORD*)(v10 + 452) = *(_DWORD*)(v10 + 488);
  *(_DWORD*)(v10 + 532) = *(_DWORD*)(v10 + 568);
  *(_DWORD*)(v10 + 612) = *(_DWORD*)(v10 + 648);
  *(_DWORD*)(v10 + 692) = *(_DWORD*)(v10 + 728);
  *(_DWORD*)(v10 + 772) = *(_DWORD*)(v10 + 808);
  v21 = *result;
  *(float*)(v10 + 372) = a2;
  *(_BYTE*)(v10 + 376) = 1;
  *(float*)(v10 + 452) = a3;
  *(_BYTE*)(v10 + 456) = 1;
  *(float*)(v10 + 532) = a4;
  *(_BYTE*)(v10 + 536) = 1;
  *(float*)(v10 + 612) = a5;
  *(_BYTE*)(v10 + 616) = 1;
  *(float*)(v10 + 692) = a6;
  *(_BYTE*)(v10 + 696) = 1;
  *(float*)(v10 + 772) = a7;
  *(_BYTE*)(v10 + 776) = 1;
  *(_OWORD*)(v10 + 256) = v21;
  return result;
}

_OWORD* PostEffectActor_17fcb90(_OWORD* result, float a2, float a3, float a4,
                                float a5, float a6, float a7)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _OWORD* v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  char v18;
  __int64 v19;
  int v20;
  __int128 v21;

  v7 = *(_QWORD*)(game_g_frame_clock + 13224);
  v8 = *(_QWORD*)(v7 + 48);
  v9 = *(_QWORD*)(v7 + 56);
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    v10 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 184LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = result;
      v12 = a7;
      v13 = a6;
      v14 = a5;
      v15 = a4;
      v16 = a3;
      v17 = a2;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
      a2 = v17;
      a3 = v16;
      result = v11;
      a4 = v15;
      a5 = v14;
      a6 = v13;
      a7 = v12;
    }
  }
  else {
    v10 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 184LL);
  }
  v18 = *(_BYTE*)(v10 + 192);
  v19 = *(_QWORD*)(v10 + 248);
  *(_QWORD*)(v10 + 176) = *(_QWORD*)(v10 + 240);
  *(_QWORD*)(v10 + 184) = v19;
  if ((v18 & 1) == 0) {
    *(_BYTE*)(v10 + 192) = 1;
  }
  v20 = *(_DWORD*)(v10 + 328);
  *(_BYTE*)(v10 + 296) = 1;
  *(_BYTE*)(v10 + 376) = 1;
  *(_BYTE*)(v10 + 456) = 1;
  *(_BYTE*)(v10 + 536) = 1;
  *(_BYTE*)(v10 + 616) = 1;
  *(_BYTE*)(v10 + 696) = 1;
  *(_WORD*)(v10 + 89) = 257;
  *(_DWORD*)(v10 + 292) = v20;
  *(_DWORD*)(v10 + 372) = *(_DWORD*)(v10 + 408);
  *(_DWORD*)(v10 + 452) = *(_DWORD*)(v10 + 488);
  *(_DWORD*)(v10 + 532) = *(_DWORD*)(v10 + 568);
  *(_DWORD*)(v10 + 612) = *(_DWORD*)(v10 + 648);
  *(_DWORD*)(v10 + 692) = *(_DWORD*)(v10 + 728);
  v21 = *result;
  *(float*)(v10 + 292) = a2;
  *(_BYTE*)(v10 + 296) = 1;
  *(float*)(v10 + 372) = a3;
  *(_BYTE*)(v10 + 376) = 1;
  *(float*)(v10 + 452) = a4;
  *(_BYTE*)(v10 + 456) = 1;
  *(float*)(v10 + 532) = a5;
  *(_BYTE*)(v10 + 536) = 1;
  *(float*)(v10 + 612) = a6;
  *(_BYTE*)(v10 + 616) = 1;
  *(float*)(v10 + 692) = a7;
  *(_BYTE*)(v10 + 696) = 1;
  *(_OWORD*)(v10 + 176) = v21;
  return result;
}

__int64 PostEffectActor_Unknown8(__int64 result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  _QWORD v13[2];

  v2 = *(_QWORD**)(result + 8);
  for (i = *(_QWORD**)(result + 16); v2 != i; v2 += 3) {
    v6 = std___1___shared_weak_count_lock(v2[1]);
    v7 = *(_QWORD*)(a2 + 32);
    v8 = *(unsigned __int8*)(*v2 + 144LL);
    v9 = *v2 + 145LL;
    v10 = *(_QWORD*)(*v2 + 152LL);
    v11 = (v8 & 1) == 0;
    v12 = v8 >> 1;
    if (v11) {
      v10 = v12;
    }
    else {
      v9 = *(_QWORD*)(*v2 + 160LL);
    }
    v13[0] = v9;
    v13[1] = v10;
    if (v7 == 0) {
      GameRoutine_60a310(0, v5);
    }
    result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v7 + 48LL))(v7, v13);
    v2[2] = result;
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak(v6);
    }
  }
  return result;
}

__int64 PostEffectActor_Unknown4(__int64 result, double a2, float a3)
{
  __int64 v3;
  _QWORD* v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int128 v10;
  float v11;
  __int64 v12;
  float v13;
  float v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE* v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64* v34;
  __int64 v35;
  __int128 v36;
  float v37;
  __int64 v38;
  float v39;
  float v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _BYTE* v46;
  __int64 v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  float v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64* v61;
  __int64 v62;
  __int128 v63;
  float v64;
  __int64 v65;
  float v66;
  float v67;
  unsigned int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  _BYTE* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64* v86;
  __int64 v87;
  __int128 v88;
  float v89;
  __int64 v90;
  float v91;
  float v92;
  unsigned int v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  _BYTE* v98;
  __int64 v99;
  float v100;
  float v101;
  char v102;
  float v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  float v108;
  int v109;
  __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  __int64* v113;
  __int64 v114;
  __int128 v115;
  float v116;
  __int64 v117;
  float v118;
  float v119;
  unsigned int v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  float v127;
  float v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  float v133;
  __int64 v134;
  __int64 v135;
  unsigned __int64 v136;
  __int64* v137;
  __int64 v138;
  __int128 v139;
  float v140;
  __int64 v141;
  float v142;
  float v143;
  unsigned int v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  _BYTE* v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  __int64* v162;
  __int64 v163;
  __int128 v164;
  float v165;
  __int64 v166;
  float v167;
  float v168;
  unsigned int v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  _BYTE* v174;
  __int64 v175;
  float v176;
  float v177;
  float v178;
  float v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  float v184;
  __int64 v185;
  __int64 v186;
  unsigned __int64 v187;
  __int64* v188;
  __int64 v189;
  int v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  unsigned __int64 v203;
  _QWORD* v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  unsigned __int64 v212;
  _QWORD* v213;
  int v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int128 v221;
  __int128 v222;
  _QWORD v223[3];
  __int64 v224;
  float v225;
  float v226;
  float v227;

  v3 = *(_QWORD*)(result + 80);
  v5 = (_QWORD*)result;
  v6 = (unsigned __int64)(*(_QWORD*)(result + 88) - v3) >> 2;
  while ((int)v6 >= 1) {
    LODWORD(v6) = v6 - 1;
    if (*(float*)(v3 + 4LL * (unsigned int)v6) <= a3) {
      if ((v6 & 0x80000000) != 0) {
        break;
      }
      v7 = (__int64*)(*(_QWORD*)(result + 56) + 16 * (v6 & 0x7FFFFFFF));
      result = v7[1];
      if (result == 0) {
        break;
      }
      result = std___1___shared_weak_count_lock(result);
      if (result == 0) {
        break;
      }
      v8 = *v7;
      if (v8 != 0) {
        v9 = game_g_frame_clock_ptr[0];
        if (*(_BYTE*)(v8 + 24) == 1) {
          v10 = *(_OWORD*)(v8 + 32);
          v11 = 1.0;
          v12 = result;
          v13 = *(float*)(v8 + 8);
          v224 = v8 + 32;
          v225 = v13;
          v226 = a3;
          if ((unsigned int)(int)*(float*)&v10 <= 0xFFFFFFFD) {
            v14 = a3 - v13;
            v11 = 0.0;
            if (v14 > 0.0) {
              v11 = 1.0;
              if (v14 < *((float*)&v10 + 1)) {
                v15 = (int)*(float*)&v10 - 1;
                if (v15 > 2) {
                  v16 = 0;
                }
                else {
                  v16 = GameData_1c0b528[v15];
                }
                v11 = GameRoutine_618640(v16, 0.0, 1.0);
              }
            }
          }
          v227 = v11;
          v22 = GameRoutine_17fb700(&v224, v8 + 56);
          v23 = GameRoutine_17fb700(&v224, v8 + 88);
          v24 = GameRoutine_17fb700(&v224, v8 + 120);
          v25 = *(_DWORD*)(v8 + 144);
          v26 = *(_QWORD*)(*v9 + 13224);
          v27 = *(_QWORD*)(v26 + 48);
          v28 = *(_QWORD*)(v26 + 56);
          if (v28 != 0) {
            result = v12;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                      memory_order_relaxed);
            v29 = *(_QWORD*)(*(_QWORD*)(v27 + 8) + 168LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v30 = v24;
              (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
              std___1___shared_weak_count___release_weak(v28);
              v24 = v30;
              goto LABEL_32;
            }
          }
          else {
            v29 = *(_QWORD*)(*(_QWORD*)(v27 + 8) + 168LL);
          LABEL_32:
            result = v12;
          }
          *(float*)(v29 + 92) = v22;
          *(float*)(v29 + 252) = v23;
          *(float*)(v29 + 332) = v24;
          *(_DWORD*)(v29 + 172) = v25;
          *(_BYTE*)(v29 + 96) = 1;
          *(_BYTE*)(v29 + 256) = 1;
          *(_BYTE*)(v29 + 336) = 1;
          *(_BYTE*)(v29 + 176) = 1;
        }
        else {
          v17 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
          v18 = *(_QWORD*)(v17 + 48);
          v19 = *(_QWORD*)(v17 + 56);
          if (v19 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                      memory_order_relaxed);
            v20 = *(_BYTE**)(*(_QWORD*)(v18 + 8) + 168LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v21 = result;
              (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
              std___1___shared_weak_count___release_weak(v19);
              result = v21;
            }
          }
          else {
            v20 = *(_BYTE**)(*(_QWORD*)(v18 + 8) + 168LL);
          }
          if (v20[96] == 1) {
            v20[96] = 0;
          }
          if (v20[256] == 1) {
            v20[256] = 0;
          }
          if (v20[336] == 1) {
            v20[336] = 0;
          }
          if (v20[176] == 1) {
            v20[176] = 0;
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v31 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v31);
      }
      break;
    }
  }
  v32 = v5[16];
  v33 = (unsigned __int64)(v5[17] - v32) >> 2;
  while ((int)v33 >= 1) {
    LODWORD(v33) = v33 - 1;
    if (*(float*)(v32 + 4LL * (unsigned int)v33) <= a3) {
      if ((v33 & 0x80000000) != 0) {
        break;
      }
      v34 = (__int64*)(v5[13] + 16 * (v33 & 0x7FFFFFFF));
      result = v34[1];
      if (result == 0) {
        break;
      }
      result = std___1___shared_weak_count_lock(result);
      if (result == 0) {
        break;
      }
      v35 = *v34;
      if (v35 != 0) {
        if (*(_BYTE*)(v35 + 24) == 1) {
          v36 = *(_OWORD*)(v35 + 32);
          v37 = 1.0;
          v38 = result;
          v39 = *(float*)(v35 + 8);
          v224 = v35 + 32;
          v225 = v39;
          v226 = a3;
          if ((unsigned int)(int)*(float*)&v36 <= 0xFFFFFFFD) {
            v40 = a3 - v39;
            v37 = 0.0;
            if (v40 > 0.0) {
              v37 = 1.0;
              if (v40 < *((float*)&v36 + 1)) {
                v41 = (int)*(float*)&v36 - 1;
                if (v41 > 2) {
                  v42 = 0;
                }
                else {
                  v42 = GameData_1c0b528[v41];
                }
                v37 = GameRoutine_618640(v42, 0.0, 1.0);
              }
            }
          }
          v227 = v37;
          v221 = *(_OWORD*)(v35 + 48);
          v48 = GameRoutine_17fb700(&v224, v35 + 72);
          v49 = GameRoutine_17fb700(&v224, v35 + 104);
          v50 = GameRoutine_17fb700(&v224, v35 + 136);
          v51 = GameRoutine_17fb700(&v224, v35 + 168);
          v52 = GameRoutine_17fb700(&v224, v35 + 200);
          v53 = *(_QWORD*)(game_g_frame_clock + 13224);
          v54 = *(_QWORD*)(v53 + 48);
          v55 = *(_QWORD*)(v53 + 56);
          if (v55 != 0) {
            result = v38;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 8), 1u,
                                      memory_order_relaxed);
            v56 = *(_QWORD*)(*(_QWORD*)(v54 + 8) + 200LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v57 = v52;
              (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
              std___1___shared_weak_count___release_weak(v55);
              v52 = v57;
              goto LABEL_73;
            }
          }
          else {
            v56 = *(_QWORD*)(*(_QWORD*)(v54 + 8) + 200LL);
          LABEL_73:
            result = v38;
          }
          if ((*(_BYTE*)(v56 + 352) & 1) == 0) {
            *(_BYTE*)(v56 + 352) = 1;
          }
          *(float*)(v56 + 452) = v48;
          *(float*)(v56 + 164) = v49;
          *(float*)(v56 + 244) = v50;
          *(float*)(v56 + 532) = v51;
          *(float*)(v56 + 612) = v52;
          *(_WORD*)(v56 + 89) = 257;
          *(_BYTE*)(v56 + 456) = 1;
          *(_BYTE*)(v56 + 168) = 1;
          *(_BYTE*)(v56 + 248) = 1;
          *(_BYTE*)(v56 + 536) = 1;
          *(_BYTE*)(v56 + 616) = 1;
          *(_OWORD*)(v56 + 336) = v221;
        }
        else {
          v43 = *(_QWORD*)(game_g_frame_clock + 13224);
          v44 = *(_QWORD*)(v43 + 48);
          v45 = *(_QWORD*)(v43 + 56);
          if (v45 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                                      memory_order_relaxed);
            v46 = *(_BYTE**)(*(_QWORD*)(v44 + 8) + 200LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v47 = result;
              (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
              std___1___shared_weak_count___release_weak(v45);
              result = v47;
            }
          }
          else {
            v46 = *(_BYTE**)(*(_QWORD*)(v44 + 8) + 200LL);
          }
          if (v46[90] == 1) {
            v46[90] = 0;
          }
          if (v46[352] == 1) {
            v46[352] = 0;
          }
          if (v46[456] == 1) {
            v46[456] = 0;
          }
          if (v46[168] == 1) {
            v46[168] = 0;
          }
          if (v46[248] == 1) {
            v46[248] = 0;
          }
          if (v46[536] == 1) {
            v46[536] = 0;
          }
          if (v46[616] == 1) {
            v46[616] = 0;
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v58 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v58);
      }
      break;
    }
  }
  v59 = v5[22];
  v60 = (unsigned __int64)(v5[23] - v59) >> 2;
  while ((int)v60 >= 1) {
    LODWORD(v60) = v60 - 1;
    if (*(float*)(v59 + 4LL * (unsigned int)v60) <= a3) {
      if ((v60 & 0x80000000) == 0) {
        v61 = (__int64*)(v5[19] + 16 * (v60 & 0x7FFFFFFF));
        result = v61[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock(result);
          if (result != 0) {
            v62 = *v61;
            if (v62 != 0) {
              if (*(_BYTE*)(v62 + 24) == 1) {
                v63 = *(_OWORD*)(v62 + 32);
                v64 = 1.0;
                v65 = result;
                v66 = *(float*)(v62 + 8);
                v224 = v62 + 32;
                v225 = v66;
                v226 = a3;
                if ((unsigned int)(int)*(float*)&v63 <= 0xFFFFFFFD) {
                  v67 = a3 - v66;
                  v64 = 0.0;
                  if (v67 > 0.0) {
                    v64 = 1.0;
                    if (v67 < *((float*)&v63 + 1)) {
                      v68 = (int)*(float*)&v63 - 1;
                      if (v68 > 2) {
                        v69 = 0;
                      }
                      else {
                        v69 = GameData_1c0b528[v68];
                      }
                      v64 = GameRoutine_618640(v69, 0.0, 1.0);
                    }
                  }
                }
                v75 = *(_QWORD*)(v62 + 48);
                v76 = *(_QWORD*)(v62 + 56);
                v227 = v64;
                v223[0] = v75;
                v223[1] = v76;
                v77 = GameRoutine_17fb700(&v224, v62 + 72);
                v78 = GameRoutine_17fb700(&v224, v62 + 104);
                v79 = GameRoutine_17fb700(&v224, v62 + 136);
                v80 = GameRoutine_17fb700(&v224, v62 + 168);
                v81 = GameRoutine_17fb700(&v224, v62 + 200);
                v82 = GameRoutine_17fb700(&v224, v62 + 232);
                GameRoutine_17fca10(v223, v77, v78, v79, v80, v81, v82);
                result = v65;
              }
              else {
                v70 = *(_QWORD*)(game_g_frame_clock + 13224);
                v71 = *(_QWORD*)(v70 + 48);
                v72 = *(_QWORD*)(v70 + 56);
                if (v72 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v72 + 8),
                                            1u, memory_order_relaxed);
                  v73 = *(_BYTE**)(*(_QWORD*)(v71 + 8) + 192LL);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v74 = result;
                    (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
                    std___1___shared_weak_count___release_weak(v72);
                    result = v74;
                  }
                }
                else {
                  v73 = *(_BYTE**)(*(_QWORD*)(v71 + 8) + 192LL);
                }
                if (v73[90] == 1) {
                  v73[90] = 0;
                }
                if (v73[272] == 1) {
                  v73[272] = 0;
                }
                if (v73[376] == 1) {
                  v73[376] = 0;
                }
                if (v73[536] == 1) {
                  v73[536] = 0;
                }
                if (v73[616] == 1) {
                  v73[616] = 0;
                }
                if (v73[456] == 1) {
                  v73[456] = 0;
                }
                if (v73[696] == 1) {
                  v73[696] = 0;
                }
                if (v73[776] == 1) {
                  v73[776] = 0;
                }
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v83 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
              result = std___1___shared_weak_count___release_weak(v83);
            }
          }
        }
      }
      break;
    }
  }
  v84 = v5[28];
  v85 = (unsigned __int64)(v5[29] - v84) >> 2;
  while ((int)v85 >= 1) {
    LODWORD(v85) = v85 - 1;
    if (*(float*)(v84 + 4LL * (unsigned int)v85) <= a3) {
      if ((v85 & 0x80000000) == 0) {
        v86 = (__int64*)(v5[25] + 16 * (v85 & 0x7FFFFFFF));
        result = v86[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock(result);
          if (result != 0) {
            v87 = *v86;
            if (v87 != 0) {
              if (*(_BYTE*)(v87 + 24) == 1) {
                v88 = *(_OWORD*)(v87 + 32);
                v89 = 1.0;
                v90 = result;
                v91 = *(float*)(v87 + 8);
                v224 = v87 + 32;
                v225 = v91;
                v226 = a3;
                if ((unsigned int)(int)*(float*)&v88 <= 0xFFFFFFFD) {
                  v92 = a3 - v91;
                  v89 = 0.0;
                  if (v92 > 0.0) {
                    v89 = 1.0;
                    if (v92 < *((float*)&v88 + 1)) {
                      v93 = (int)*(float*)&v88 - 1;
                      if (v93 > 2) {
                        v94 = 0;
                      }
                      else {
                        v94 = GameData_1c0b528[v93];
                      }
                      v89 = GameRoutine_618640(v94, 0.0, 1.0);
                    }
                  }
                }
                v227 = v89;
                v100 = GameRoutine_17fb700(&v224, v87 + 56);
                v101 = GameRoutine_17fb700(&v224, v87 + 88);
                v102 = *(_BYTE*)(v87 + 112);
                v222 = *(_OWORD*)(v87 + 128);
                v103 = GameRoutine_17fb700(&v224, v87 + 152);
                v104 = *(_QWORD*)(game_g_frame_clock + 13224);
                v105 = *(_QWORD*)(v104 + 48);
                v106 = *(_QWORD*)(v104 + 56);
                if (v106 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v106 + 8),
                                            1u, memory_order_relaxed);
                  v107 = *(_QWORD*)(*(_QWORD*)(v105 + 8) + 104LL);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v106 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v108 = v103;
                    (*(void (**)(__int64))(*(_QWORD*)v106 + 16LL))(v106);
                    std___1___shared_weak_count___release_weak(v106);
                    v103 = v108;
                  }
                }
                else {
                  v107 = *(_QWORD*)(*(_QWORD*)(v105 + 8) + 104LL);
                }
                *(float*)(v107 + 164) = v100;
                *(float*)(v107 + 244) = v101;
                result = v90;
                *(_WORD*)(v107 + 89) = 257;
                *(_BYTE*)(v107 + 168) = 1;
                *(_BYTE*)(v107 + 248) = 1;
                if ((v102 & 1) != 0) {
                  *(_DWORD*)(v107 + 764) = 1;
                  *(_BYTE*)(v107 + 768) = 1;
                  if ((*(_BYTE*)(v107 + 432) & 1) == 0) {
                    *(_BYTE*)(v107 + 432) = 1;
                  }
                  *(float*)(v107 + 532) = v103;
                  *(_BYTE*)(v107 + 536) = 1;
                  *(_OWORD*)(v107 + 416) = v222;
                }
                else {
                  *(_BYTE*)(v107 + 768) = 1;
                  v109 = *(unsigned __int8*)(v107 + 432);
                  *(_DWORD*)(v107 + 764) = 2;
                  if (v109 == 1) {
                    *(_BYTE*)(v107 + 432) = 0;
                  }
                  if (*(_BYTE*)(v107 + 536) == 1) {
                    *(_BYTE*)(v107 + 536) = 0;
                  }
                }
              }
              else {
                v95 = *(_QWORD*)(game_g_frame_clock + 13224);
                v96 = *(_QWORD*)(v95 + 48);
                v97 = *(_QWORD*)(v95 + 56);
                if (v97 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v97 + 8),
                                            1u, memory_order_relaxed);
                  v98 = *(_BYTE**)(*(_QWORD*)(v96 + 8) + 104LL);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v97 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v99 = result;
                    (*(void (**)(__int64))(*(_QWORD*)v97 + 16LL))(v97);
                    std___1___shared_weak_count___release_weak(v97);
                    result = v99;
                  }
                }
                else {
                  v98 = *(_BYTE**)(*(_QWORD*)(v96 + 8) + 104LL);
                }
                if (v98[90] == 1) {
                  v98[90] = 0;
                }
                if (v98[168] == 1) {
                  v98[168] = 0;
                }
                if (v98[248] == 1) {
                  v98[248] = 0;
                }
                if (v98[768] == 1) {
                  v98[768] = 0;
                }
                if (v98[432] == 1) {
                  v98[432] = 0;
                }
                if (v98[536] == 1) {
                  v98[536] = 0;
                }
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v110 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
              result = std___1___shared_weak_count___release_weak(v110);
            }
          }
        }
      }
      break;
    }
  }
  v111 = v5[34];
  v112 = (unsigned __int64)(v5[35] - v111) >> 2;
  while ((int)v112 >= 1) {
    LODWORD(v112) = v112 - 1;
    if (*(float*)(v111 + 4LL * (unsigned int)v112) <= a3) {
      if ((v112 & 0x80000000) != 0) {
        break;
      }
      v113 = (__int64*)(v5[31] + 16 * (v112 & 0x7FFFFFFF));
      result = v113[1];
      if (result == 0) {
        break;
      }
      result = std___1___shared_weak_count_lock(result);
      if (result == 0) {
        break;
      }
      v114 = *v113;
      if (v114 != 0) {
        if (*(_BYTE*)(v114 + 24) == 1) {
          v115 = *(_OWORD*)(v114 + 32);
          v116 = 1.0;
          v117 = result;
          v118 = *(float*)(v114 + 8);
          v224 = v114 + 32;
          v225 = v118;
          v226 = a3;
          if ((unsigned int)(int)*(float*)&v115 <= 0xFFFFFFFD) {
            v119 = a3 - v118;
            v116 = 0.0;
            if (v119 > 0.0) {
              v116 = 1.0;
              if (v119 < *((float*)&v115 + 1)) {
                v120 = (int)*(float*)&v115 - 1;
                if (v120 > 2) {
                  v121 = 0;
                }
                else {
                  v121 = GameData_1c0b528[v120];
                }
                v116 = GameRoutine_618640(v121, 0.0, 1.0);
              }
            }
          }
          v227 = v116;
          v127 = GameRoutine_17fb700(&v224, v114 + 56);
          v128 = GameRoutine_17fb700(&v224, v114 + 88);
          v129 = *(_QWORD*)(game_g_frame_clock + 13224);
          v130 = *(_QWORD*)(v129 + 48);
          v131 = *(_QWORD*)(v129 + 56);
          if (v131 != 0) {
            result = v117;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v131 + 8), 1u,
                                      memory_order_relaxed);
            v132 = *(_QWORD*)(*(_QWORD*)(v130 + 8) + 96LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v131 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v133 = v128;
              (*(void (**)(__int64))(*(_QWORD*)v131 + 16LL))(v131);
              std___1___shared_weak_count___release_weak(v131);
              v128 = v133;
              goto LABEL_189;
            }
          }
          else {
            v132 = *(_QWORD*)(*(_QWORD*)(v130 + 8) + 96LL);
          LABEL_189:
            result = v117;
          }
          *(float*)(v132 + 92) = v127;
          *(float*)(v132 + 172) = v128;
          *(_BYTE*)(v132 + 96) = 1;
          *(_BYTE*)(v132 + 176) = 1;
        }
        else {
          v122 = *(_QWORD*)(game_g_frame_clock + 13224);
          v123 = *(_QWORD*)(v122 + 48);
          v124 = *(_QWORD*)(v122 + 56);
          if (v124 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v124 + 8), 1u,
                                      memory_order_relaxed);
            v125 = *(_QWORD*)(*(_QWORD*)(v123 + 8) + 96LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v124 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v126 = result;
              (*(void (**)(__int64))(*(_QWORD*)v124 + 16LL))(v124);
              std___1___shared_weak_count___release_weak(v124);
              result = v126;
            }
          }
          else {
            v125 = *(_QWORD*)(*(_QWORD*)(v123 + 8) + 96LL);
          }
          if (*(_BYTE*)(v125 + 96) == 1) {
            *(_BYTE*)(v125 + 96) = 0;
          }
          if (*(_BYTE*)(v125 + 176) == 1) {
            *(_BYTE*)(v125 + 176) = 0;
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v134 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v134);
      }
      break;
    }
  }
  v135 = v5[40];
  v136 = (unsigned __int64)(v5[41] - v135) >> 2;
  while ((int)v136 >= 1) {
    LODWORD(v136) = v136 - 1;
    if (*(float*)(v135 + 4LL * (unsigned int)v136) <= a3) {
      if ((v136 & 0x80000000) == 0) {
        v137 = (__int64*)(v5[37] + 16 * (v136 & 0x7FFFFFFF));
        result = v137[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock(result);
          if (result != 0) {
            v138 = *v137;
            if (v138 != 0) {
              if (*(_BYTE*)(v138 + 24) == 1) {
                v139 = *(_OWORD*)(v138 + 32);
                v140 = 1.0;
                v141 = result;
                v142 = *(float*)(v138 + 8);
                v224 = v138 + 32;
                v225 = v142;
                v226 = a3;
                if ((unsigned int)(int)*(float*)&v139 <= 0xFFFFFFFD) {
                  v143 = a3 - v142;
                  v140 = 0.0;
                  if (v143 > 0.0) {
                    v140 = 1.0;
                    if (v143 < *((float*)&v139 + 1)) {
                      v144 = (int)*(float*)&v139 - 1;
                      if (v144 > 2) {
                        v145 = 0;
                      }
                      else {
                        v145 = GameData_1c0b528[v144];
                      }
                      v140 = GameRoutine_618640(v145, 0.0, 1.0);
                    }
                  }
                }
                v151 = *(_QWORD*)(v138 + 48);
                v152 = *(_QWORD*)(v138 + 56);
                v227 = v140;
                v223[0] = v151;
                v223[1] = v152;
                v153 = GameRoutine_17fb700(&v224, v138 + 72);
                v154 = GameRoutine_17fb700(&v224, v138 + 104);
                v155 = GameRoutine_17fb700(&v224, v138 + 136);
                v156 = GameRoutine_17fb700(&v224, v138 + 168);
                v157 = GameRoutine_17fb700(&v224, v138 + 200);
                v158 = GameRoutine_17fb700(&v224, v138 + 232);
                GameRoutine_17fcb90(v223, v153, v154, v155, v156, v157, v158);
                result = v141;
              }
              else {
                v146 = *(_QWORD*)(game_g_frame_clock + 13224);
                v147 = *(_QWORD*)(v146 + 48);
                v148 = *(_QWORD*)(v146 + 56);
                if (v148 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v148 + 8),
                                            1u, memory_order_relaxed);
                  v149 = *(_BYTE**)(*(_QWORD*)(v147 + 8) + 184LL);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v148 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v150 = result;
                    (*(void (**)(__int64))(*(_QWORD*)v148 + 16LL))(v148);
                    std___1___shared_weak_count___release_weak(v148);
                    result = v150;
                  }
                }
                else {
                  v149 = *(_BYTE**)(*(_QWORD*)(v147 + 8) + 184LL);
                }
                if (v149[90] == 1) {
                  v149[90] = 0;
                }
                if (v149[192] == 1) {
                  v149[192] = 0;
                }
                if (v149[296] == 1) {
                  v149[296] = 0;
                }
                if (v149[376] == 1) {
                  v149[376] = 0;
                }
                if (v149[456] == 1) {
                  v149[456] = 0;
                }
                if (v149[536] == 1) {
                  v149[536] = 0;
                }
                if (v149[616] == 1) {
                  v149[616] = 0;
                }
                if (v149[696] == 1) {
                  v149[696] = 0;
                }
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v159 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
              result = std___1___shared_weak_count___release_weak(v159);
            }
          }
        }
      }
      break;
    }
  }
  v160 = v5[46];
  v161 = (unsigned __int64)(v5[47] - v160) >> 2;
  while ((int)v161 >= 1) {
    LODWORD(v161) = v161 - 1;
    if (*(float*)(v160 + 4LL * (unsigned int)v161) <= a3) {
      if ((v161 & 0x80000000) != 0) {
        break;
      }
      v162 = (__int64*)(v5[43] + 16 * (v161 & 0x7FFFFFFF));
      result = v162[1];
      if (result == 0) {
        break;
      }
      result = std___1___shared_weak_count_lock(result);
      if (result == 0) {
        break;
      }
      v163 = *v162;
      if (v163 != 0) {
        if (*(_BYTE*)(v163 + 24) == 1) {
          v164 = *(_OWORD*)(v163 + 32);
          v165 = 1.0;
          v166 = result;
          v167 = *(float*)(v163 + 8);
          v224 = v163 + 32;
          v225 = v167;
          v226 = a3;
          if ((unsigned int)(int)*(float*)&v164 <= 0xFFFFFFFD) {
            v168 = a3 - v167;
            v165 = 0.0;
            if (v168 > 0.0) {
              v165 = 1.0;
              if (v168 < *((float*)&v164 + 1)) {
                v169 = (int)*(float*)&v164 - 1;
                if (v169 > 2) {
                  v170 = 0;
                }
                else {
                  v170 = GameData_1c0b528[v169];
                }
                v165 = GameRoutine_618640(v170, 0.0, 1.0);
              }
            }
          }
          v227 = v165;
          v176 = GameRoutine_17fb700(&v224, v163 + 56);
          v177 = GameRoutine_17fb700(&v224, v163 + 88);
          v178 = GameRoutine_17fb700(&v224, v163 + 120);
          v179 = GameRoutine_17fb700(&v224, v163 + 152);
          v180 = *(_QWORD*)(game_g_frame_clock + 13224);
          v181 = *(_QWORD*)(v180 + 48);
          v182 = *(_QWORD*)(v180 + 56);
          if (v182 != 0) {
            result = v166;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v182 + 8), 1u,
                                      memory_order_relaxed);
            v183 = *(_QWORD*)(*(_QWORD*)(v181 + 8) + 176LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v182 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v184 = v179;
              (*(void (**)(__int64))(*(_QWORD*)v182 + 16LL))(v182);
              std___1___shared_weak_count___release_weak(v182);
              v179 = v184;
              goto LABEL_262;
            }
          }
          else {
            v183 = *(_QWORD*)(*(_QWORD*)(v181 + 8) + 176LL);
          LABEL_262:
            result = v166;
          }
          *(float*)(v183 + 92) = v176;
          *(float*)(v183 + 172) = v177;
          *(float*)(v183 + 252) = v178;
          *(float*)(v183 + 332) = v179;
          *(_BYTE*)(v183 + 96) = 1;
          *(_BYTE*)(v183 + 176) = 1;
          *(_BYTE*)(v183 + 256) = 1;
          *(_BYTE*)(v183 + 336) = 1;
        }
        else {
          v171 = *(_QWORD*)(game_g_frame_clock + 13224);
          v172 = *(_QWORD*)(v171 + 48);
          v173 = *(_QWORD*)(v171 + 56);
          if (v173 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v173 + 8), 1u,
                                      memory_order_relaxed);
            v174 = *(_BYTE**)(*(_QWORD*)(v172 + 8) + 176LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v173 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v175 = result;
              (*(void (**)(__int64))(*(_QWORD*)v173 + 16LL))(v173);
              std___1___shared_weak_count___release_weak(v173);
              result = v175;
            }
          }
          else {
            v174 = *(_BYTE**)(*(_QWORD*)(v172 + 8) + 176LL);
          }
          if (v174[96] == 1) {
            v174[96] = 0;
          }
          if (v174[176] == 1) {
            v174[176] = 0;
          }
          if (v174[256] == 1) {
            v174[256] = 0;
          }
          if (v174[336] == 1) {
            v174[336] = 0;
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v185 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v185);
      }
      break;
    }
  }
  v186 = v5[52];
  v187 = (unsigned __int64)(v5[53] - v186) >> 2;
  while ((int)v187 >= 1) {
    LODWORD(v187) = v187 - 1;
    if (*(float*)(v186 + 4LL * (unsigned int)v187) <= a3) {
      if ((v187 & 0x80000000) == 0) {
        v188 = (__int64*)(v5[49] + 16 * (v187 & 0x7FFFFFFF));
        result = v188[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock(result);
          if (result != 0) {
            v189 = *v188;
            if (*v188 != 0) {
              if (*(_BYTE*)(v189 + 24) == 1) {
                v190 = *(_DWORD*)(v189 + 48);
                v191 = *(_QWORD*)(game_g_frame_clock + 13224);
                v192 = *(_QWORD*)(v191 + 48);
                v193 = *(_QWORD*)(v191 + 56);
                if (v193 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v193 + 8),
                                            1u, memory_order_relaxed);
                  v194 = *(_QWORD*)(*(_QWORD*)(v192 + 8) + 256LL);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v193 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v195 = result;
                    (*(void (**)(__int64))(*(_QWORD*)v193 + 16LL))(v193);
                    std___1___shared_weak_count___release_weak(v193);
                    result = v195;
                  }
                }
                else {
                  v194 = *(_QWORD*)(*(_QWORD*)(v192 + 8) + 256LL);
                }
                *(_DWORD*)(v194 + 164) = v190;
                *(_WORD*)(v194 + 89) = 257;
                *(_BYTE*)(v194 + 168) = 1;
              }
              else {
                v196 = *(_QWORD*)(game_g_frame_clock + 13224);
                v197 = *(_QWORD*)(v196 + 48);
                v198 = *(_QWORD*)(v196 + 56);
                if (v198 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v198 + 8),
                                            1u, memory_order_relaxed);
                  v199 = *(_QWORD*)(*(_QWORD*)(v197 + 8) + 256LL);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v198 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v200 = result;
                    (*(void (**)(__int64))(*(_QWORD*)v198 + 16LL))(v198);
                    std___1___shared_weak_count___release_weak(v198);
                    result = v200;
                  }
                }
                else {
                  v199 = *(_QWORD*)(*(_QWORD*)(v197 + 8) + 256LL);
                }
                if (*(_BYTE*)(v199 + 90) == 1) {
                  *(_BYTE*)(v199 + 90) = 0;
                }
                if (*(_BYTE*)(v199 + 168) == 1) {
                  *(_BYTE*)(v199 + 168) = 0;
                }
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v201 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
              result = std___1___shared_weak_count___release_weak(v201);
            }
          }
        }
      }
      break;
    }
  }
  v202 = v5[58];
  v203 = (unsigned __int64)(v5[59] - v202) >> 2;
  while ((int)v203 >= 1) {
    LODWORD(v203) = v203 - 1;
    if (*(float*)(v202 + 4LL * (unsigned int)v203) <= a3) {
      if ((v203 & 0x80000000) == 0) {
        v204 = (_QWORD*)(v5[55] + 16 * (v203 & 0x7FFFFFFF));
        result = v204[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock(result);
          if (result != 0) {
            if (*v204 != 0 && (*(_BYTE*)(*v204 + 24LL) & 1) == 0) {
              v205 = *(_QWORD*)(game_g_frame_clock + 13224);
              v206 = *(_QWORD*)(v205 + 48);
              v207 = *(_QWORD*)(v205 + 56);
              if (v207 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v207 + 8),
                                          1u, memory_order_relaxed);
                v208 = *(_QWORD*)(*(_QWORD*)(v206 + 8) + 320LL);
                if (atomic_fetch_add((atomic_ullong* volatile)(v207 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v209 = result;
                  (*(void (**)(__int64))(*(_QWORD*)v207 + 16LL))(v207);
                  std___1___shared_weak_count___release_weak(v207);
                  result = v209;
                }
              }
              else {
                v208 = *(_QWORD*)(*(_QWORD*)(v206 + 8) + 320LL);
              }
              *(_DWORD*)(v208 + 172) = 0;
              *(_BYTE*)(v208 + 176) = 1;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v210 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
              result = std___1___shared_weak_count___release_weak(v210);
            }
          }
        }
      }
      break;
    }
  }
  v211 = v5[64];
  v212 = (unsigned __int64)(v5[65] - v211) >> 2;
  while ((int)v212 >= 1) {
    LODWORD(v212) = v212 - 1;
    if (*(float*)(v211 + 4LL * (unsigned int)v212) <= a3) {
      if ((v212 & 0x80000000) == 0) {
        v213 = (_QWORD*)(v5[61] + 16 * (v212 & 0x7FFFFFFF));
        result = v213[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock(result);
          if (result != 0) {
            if (*v213 != 0) {
              v214 = *(unsigned __int8*)(*v213 + 24LL);
              v215 = *(_QWORD*)(game_g_frame_clock + 13224);
              v216 = *(_QWORD*)(v215 + 48);
              v217 = *(_QWORD*)(v215 + 56);
              if (v217 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v217 + 8),
                                          1u, memory_order_relaxed);
                v218 = *(_QWORD*)(*(_QWORD*)(v216 + 8) + 112LL);
                if (atomic_fetch_add((atomic_ullong* volatile)(v217 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v219 = result;
                  (*(void (**)(__int64))(*(_QWORD*)v217 + 16LL))(v217);
                  std___1___shared_weak_count___release_weak(v217);
                  result = v219;
                }
              }
              else {
                v218 = *(_QWORD*)(*(_QWORD*)(v216 + 8) + 112LL);
              }
              if (v214 != 0) {
                *(_WORD*)(v218 + 89) = 256;
              }
              else if (*(_BYTE*)(v218 + 90) == 1) {
                *(_BYTE*)(v218 + 90) = 0;
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v220 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
              return std___1___shared_weak_count___release_weak(v220);
            }
          }
        }
      }
      return result;
    }
  }
  return result;
}

void PostEffectActor_Unknown9(__int64 a1, __int64 a2)
{
  if ((*(_BYTE*)(a2 + 6) & 1) == 0) {
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                               32LL) -
                                    8LL) +
                         40LL) +
              226LL) = 1;
  }
}

_QWORD* PostEffectActor_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
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
  __int64 v40;
  __int64 v41;
  __int64 v42;
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
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;

  v1 = result[64];
  v2 = result;
  *result = game_cutscene_PostEffectActor_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[65] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = v2[61];
  if (v6 != 0) {
    v7 = v2[62];
    if (v6 == v7) {
      goto LABEL_12;
    }
    do {
      result = *(_QWORD**)(v7 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v7 -= 16;
    } while (v7 != v6);
    v8 = v2[61];
    v2[62] = v6;
    v6 = v8;
    if (v8 != 0) {
    LABEL_12:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v9 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, v6);
    }
  }
  v10 = v2[58];
  if (v10 != 0) {
    v11 = *(_QWORD*)v3;
    v2[59] = v10;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v11 + v12, v10);
  }
  v13 = v2[55];
  if (v13 != 0) {
    v14 = v2[56];
    if (v13 == v14) {
      goto LABEL_26;
    }
    do {
      result = *(_QWORD**)(v14 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v14 -= 16;
    } while (v14 != v13);
    v15 = v2[55];
    v2[56] = v13;
    v13 = v15;
    if (v15 != 0) {
    LABEL_26:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v16 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16, v13);
    }
  }
  v17 = v2[52];
  if (v17 != 0) {
    v18 = *(_QWORD*)v3;
    v2[53] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v18 + v19, v17);
  }
  v20 = v2[49];
  if (v20 != 0) {
    v21 = v2[50];
    if (v20 == v21) {
      goto LABEL_40;
    }
    do {
      result = *(_QWORD**)(v21 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v21 -= 16;
    } while (v21 != v20);
    v22 = v2[49];
    v2[50] = v20;
    v20 = v22;
    if (v22 != 0) {
    LABEL_40:
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v23 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23, v20);
    }
  }
  v24 = v2[46];
  if (v24 != 0) {
    v25 = *(_QWORD*)v3;
    v2[47] = v24;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v25 + v26, v24);
  }
  v27 = v2[43];
  if (v27 != 0) {
    v28 = v2[44];
    if (v27 == v28) {
      goto LABEL_54;
    }
    do {
      result = *(_QWORD**)(v28 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v28 -= 16;
    } while (v28 != v27);
    v29 = v2[43];
    v2[44] = v27;
    v27 = v29;
    if (v29 != 0) {
    LABEL_54:
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v30 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v30, v27);
    }
  }
  v31 = v2[40];
  if (v31 != 0) {
    v32 = *(_QWORD*)v3;
    v2[41] = v31;
    v33 = 128;
    if (*(_QWORD*)(v32 + 200) == 0) {
      v33 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v32 + v33, v31);
  }
  v34 = v2[37];
  if (v34 != 0) {
    v35 = v2[38];
    if (v34 == v35) {
      goto LABEL_68;
    }
    do {
      result = *(_QWORD**)(v35 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v35 -= 16;
    } while (v35 != v34);
    v36 = v2[37];
    v2[38] = v34;
    v34 = v36;
    if (v36 != 0) {
    LABEL_68:
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v37 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v37, v34);
    }
  }
  v38 = v2[34];
  if (v38 != 0) {
    v39 = *(_QWORD*)v3;
    v2[35] = v38;
    v40 = 128;
    if (*(_QWORD*)(v39 + 200) == 0) {
      v40 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v39 + v40, v38);
  }
  v41 = v2[31];
  if (v41 != 0) {
    v42 = v2[32];
    if (v41 == v42) {
      goto LABEL_82;
    }
    do {
      result = *(_QWORD**)(v42 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v42 -= 16;
    } while (v42 != v41);
    v43 = v2[31];
    v2[32] = v41;
    v41 = v43;
    if (v43 != 0) {
    LABEL_82:
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v44 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v44, v41);
    }
  }
  v45 = v2[28];
  if (v45 != 0) {
    v46 = *(_QWORD*)v3;
    v2[29] = v45;
    v47 = 128;
    if (*(_QWORD*)(v46 + 200) == 0) {
      v47 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v46 + v47, v45);
  }
  v48 = v2[25];
  if (v48 != 0) {
    v49 = v2[26];
    if (v48 == v49) {
      goto LABEL_96;
    }
    do {
      result = *(_QWORD**)(v49 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v49 -= 16;
    } while (v49 != v48);
    v50 = v2[25];
    v2[26] = v48;
    v48 = v50;
    if (v50 != 0) {
    LABEL_96:
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v51 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v51, v48);
    }
  }
  v52 = v2[22];
  if (v52 != 0) {
    v53 = *(_QWORD*)v3;
    v2[23] = v52;
    v54 = 128;
    if (*(_QWORD*)(v53 + 200) == 0) {
      v54 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v53 + v54, v52);
  }
  v55 = v2[19];
  if (v55 != 0) {
    v56 = v2[20];
    if (v55 == v56) {
      goto LABEL_110;
    }
    do {
      result = *(_QWORD**)(v56 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v56 -= 16;
    } while (v56 != v55);
    v57 = v2[19];
    v2[20] = v55;
    v55 = v57;
    if (v57 != 0) {
    LABEL_110:
      v58 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v58 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v58, v55);
    }
  }
  v59 = v2[16];
  if (v59 != 0) {
    v60 = *(_QWORD*)v3;
    v2[17] = v59;
    v61 = 128;
    if (*(_QWORD*)(v60 + 200) == 0) {
      v61 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v60 + v61, v59);
  }
  v62 = v2[13];
  if (v62 != 0) {
    v63 = v2[14];
    if (v62 == v63) {
      goto LABEL_124;
    }
    do {
      result = *(_QWORD**)(v63 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v63 -= 16;
    } while (v63 != v62);
    v64 = v2[13];
    v2[14] = v62;
    v62 = v64;
    if (v64 != 0) {
    LABEL_124:
      v65 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v65 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v65, v62);
    }
  }
  v66 = v2[10];
  if (v66 != 0) {
    v67 = *(_QWORD*)v3;
    v2[11] = v66;
    v68 = 128;
    if (*(_QWORD*)(v67 + 200) == 0) {
      v68 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v67 + v68, v66);
  }
  v69 = v2[7];
  if (v69 != 0) {
    v70 = v2[8];
    if (v69 == v70) {
      goto LABEL_138;
    }
    do {
      result = *(_QWORD**)(v70 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v70 -= 16;
    } while (v70 != v69);
    v71 = v2[7];
    v2[8] = v69;
    v69 = v71;
    if (v71 != 0) {
    LABEL_138:
      v72 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v72 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v72, v69);
    }
  }
  v73 = v2[4];
  if (v73 != 0) {
    v74 = *(_QWORD*)v3;
    v2[5] = v73;
    v75 = 128;
    if (*(_QWORD*)(v74 + 200) == 0) {
      v75 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v74 + v75, v73);
  }
  v76 = v2[1];
  if (v76 != 0) {
    v77 = v2[2];
    if (v76 == v77) {
      goto LABEL_152;
    }
    do {
      result = *(_QWORD**)(v77 - 16);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v77 -= 24;
    } while (v77 != v76);
    v78 = v2[1];
    v2[2] = v76;
    v76 = v78;
    if (v78 != 0) {
    LABEL_152:
      v79 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v79 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v79, v76);
    }
  }
  return result;
}

#pragma GCC visibility pop
