#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_111eae0(_QWORD);
__int64 GameRoutine_111ed70(_QWORD);
__int64 GameRoutine_111f3e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_200bec8[])();
extern __int64 (*GameData_200bef8[])();
extern __int64 (*game_combat_CinematicZoom_vtable[])();
extern __int64 GameData_21ec7b0;
extern __int64 GameData_2235738;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212fff0[3];
extern char GameData_1a9f09e;
extern int GameData_2236510;
long double GameRoutine_618640(_QWORD, long double, long double, long double,
                               long double);
__int64 game_combat_CinematicZoom_CinematicZoom(__int64 a1);
__int64 CinematicZoom_10e0a60(__int64 result);
_QWORD* CinematicZoom_Destructor_alt1(_QWORD* result) __asm__(
    "CinematicZoom_Destructor");
void CinematicZoom_10e0dc0_alt1(
    __int64 a1, long double a2, long double a3, long double a4,
    long double a5) __asm__("CinematicZoom_10e0dc0");
__int64 CinematicZoom_10e0fc0(__int64 result);
float GameRoutine_618640_alt1(int, float result, float, float,
                              float) __asm__("GameRoutine_618640");
void CinematicZoom_10e1030(int a1);
__int64 GameRoutine_111ef70(__int64, __int64, ...);
__int64 GameRoutine_65f9a0(_QWORD*, unsigned int*, unsigned int);
__int64 game_6616e0(float*, unsigned int*);
__int64 game_combat_10e0730(__int64, __int64);
const char* game_HashString32(const char* result);
__int64 game_combat_CinematicZoom_CinematicZoom_lambda0_Invoke(__int64 a1,
                                                               __int64 a2);
void GameHr_111eae0(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CinematicZoom_Destructor(_QWORD* a1);
float task_618640(int, float result, float, float, float);
void CinematicZoom_10e0dc0(__int64 a1, float a2, long double a3, long double a4,
                           long double a5);

__int64 game_combat_CinematicZoom_CinematicZoom(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD v10[4];
  _QWORD* v11;

  if (*GameData_212fff0[0] == 0) {
    *GameData_212fff0[0] = a1;
    GameData_2236510 = 1;
  }
  *(_QWORD*)a1 = game_combat_CinematicZoom_vtable;
  CinematicZoom_10e0a60(a1 + 8);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      12, 16, 0);
  *(_QWORD*)v3 = 0;
  *(_QWORD*)(a1 + 968) = v3;
  *(_WORD*)(v3 + 8) = 1;
  v4 = fw_memory_HeapManager_Allocate(*v2, 80, 16, 0);
  *(_QWORD*)(v4 + 48) = 0;
  *(_WORD*)(v4 + 64) = 1;
  *(_QWORD*)(a1 + 976) = v4;
  *(_DWORD*)(a1 + 20) = 1;
  *(_DWORD*)(a1 + 84) = 1;
  *(_DWORD*)(a1 + 148) = 1;
  *(_DWORD*)(a1 + 532) = 1;
  *(_QWORD*)v4 = "GameData/Combat/CombatCineZoom.bprop";
  *(_QWORD*)(v4 + 8) = 0;
  *(_DWORD*)(a1 + 596) = 1;
  *(_DWORD*)(a1 + 724) = 1;
  *(_DWORD*)(a1 + 788) = 1;
  *(_DWORD*)(a1 + 404) = 1;
  *(_QWORD*)(a1 + 984) = 0;
  *(_DWORD*)(a1 + 992) = 0;
  v9 = v8;
  v8[0] = GameData_200bef8;
  v8[1] = a1;
  v11 = v10;
  v10[0] = GameData_200bef8;
  v10[1] = a1;
  GameRoutine_111f3e0(v10, v4 + 16);
  if (v11 == v10) {
    v5 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v11 + v5))((__int64)v11);
LABEL_8:
  GameRoutine_111ed70(v4);
  result = (__int64)v9;
  if (v9 == v8) {
    v7 = 32;
  }
  else {
    if (v9 == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (*(__int64 (**)(__int64))(*v9 + v7))((__int64)v9);
}

__int64 CinematicZoom_10e0a60(__int64 result)
{
  *(_BYTE*)(result + 8) = 0;
  *(_QWORD*)(result + 12) = 0;
  *(_QWORD*)(result + 20) = 0;
  *(_QWORD*)(result + 28) = 0;
  *(_QWORD*)(result + 36) = 0;
  *(_BYTE*)(result + 44) = 0;
  *(_BYTE*)(result + 72) = 0;
  *(_QWORD*)(result + 284) = 0;
  *(_QWORD*)(result + 292) = 0;
  *(_QWORD*)(result + 268) = 0;
  *(_QWORD*)(result + 276) = 0;
  *(_QWORD*)result = &GameData_1a9f09e;
  *(_QWORD*)(result + 64) = &GameData_1a9f09e;
  *(_QWORD*)(result + 128) = &GameData_1a9f09e;
  *(_QWORD*)(result + 192) = &GameData_1a9f09e;
  *(_QWORD*)(result + 256) = &GameData_1a9f09e;
  *(_QWORD*)(result + 320) = &GameData_1a9f09e;
  *(_QWORD*)(result + 384) = &GameData_1a9f09e;
  *(_QWORD*)(result + 448) = &GameData_1a9f09e;
  *(_QWORD*)(result + 512) = &GameData_1a9f09e;
  *(_QWORD*)(result + 348) = 0;
  *(_QWORD*)(result + 356) = 0;
  *(_QWORD*)(result + 332) = 0;
  *(_QWORD*)(result + 340) = 0;
  *(_QWORD*)(result + 576) = &GameData_1a9f09e;
  *(_QWORD*)(result + 640) = &GameData_1a9f09e;
  *(_QWORD*)(result + 704) = &GameData_1a9f09e;
  *(_QWORD*)(result + 768) = &GameData_1a9f09e;
  *(_QWORD*)(result + 832) = &GameData_1a9f09e;
  *(_QWORD*)(result + 896) = &GameData_1a9f09e;
  *(_QWORD*)(result + 48) = 3212836864LL;
  *(_QWORD*)(result + 56) = 1065353216;
  *(_QWORD*)(result + 76) = 0;
  *(_QWORD*)(result + 412) = 0;
  *(_QWORD*)(result + 420) = 0;
  *(_QWORD*)(result + 396) = 0;
  *(_QWORD*)(result + 404) = 0;
  *(_QWORD*)(result + 84) = 0;
  *(_QWORD*)(result + 92) = 0;
  *(_QWORD*)(result + 100) = 0;
  *(_BYTE*)(result + 108) = 0;
  *(_QWORD*)(result + 112) = 3212836864LL;
  *(_QWORD*)(result + 120) = 1065353216;
  *(_BYTE*)(result + 136) = 0;
  *(_BYTE*)(result + 172) = 0;
  *(_QWORD*)(result + 164) = 0;
  *(_QWORD*)(result + 156) = 0;
  *(_QWORD*)(result + 476) = 0;
  *(_QWORD*)(result + 484) = 0;
  *(_QWORD*)(result + 460) = 0;
  *(_QWORD*)(result + 468) = 0;
  *(_QWORD*)(result + 148) = 0;
  *(_QWORD*)(result + 140) = 0;
  *(_QWORD*)(result + 176) = 3212836864LL;
  *(_QWORD*)(result + 184) = 1065353216;
  *(_BYTE*)(result + 200) = 0;
  *(_QWORD*)(result + 204) = 0;
  *(_QWORD*)(result + 212) = 0;
  *(_QWORD*)(result + 220) = 0;
  *(_QWORD*)(result + 228) = 0;
  *(_BYTE*)(result + 236) = 0;
  *(_QWORD*)(result + 540) = 0;
  *(_QWORD*)(result + 548) = 0;
  *(_QWORD*)(result + 524) = 0;
  *(_QWORD*)(result + 532) = 0;
  *(_QWORD*)(result + 240) = 3212836864LL;
  *(_QWORD*)(result + 248) = 1065353216;
  *(_BYTE*)(result + 264) = 0;
  *(_BYTE*)(result + 300) = 0;
  *(_QWORD*)(result + 304) = 3212836864LL;
  *(_QWORD*)(result + 312) = 1065353216;
  *(_BYTE*)(result + 328) = 0;
  *(_BYTE*)(result + 364) = 0;
  *(_QWORD*)(result + 368) = 3212836864LL;
  *(_QWORD*)(result + 376) = 1065353216;
  *(_BYTE*)(result + 392) = 0;
  *(_BYTE*)(result + 428) = 0;
  *(_QWORD*)(result + 604) = 0;
  *(_QWORD*)(result + 612) = 0;
  *(_QWORD*)(result + 588) = 0;
  *(_QWORD*)(result + 596) = 0;
  *(_QWORD*)(result + 432) = 3212836864LL;
  *(_QWORD*)(result + 440) = 1065353216;
  *(_BYTE*)(result + 456) = 0;
  *(_BYTE*)(result + 492) = 0;
  *(_QWORD*)(result + 496) = 3212836864LL;
  *(_QWORD*)(result + 504) = 1065353216;
  *(_BYTE*)(result + 520) = 0;
  *(_BYTE*)(result + 556) = 0;
  *(_QWORD*)(result + 560) = 3212836864LL;
  *(_QWORD*)(result + 568) = 1065353216;
  *(_BYTE*)(result + 584) = 0;
  *(_QWORD*)(result + 668) = 0;
  *(_QWORD*)(result + 676) = 0;
  *(_QWORD*)(result + 652) = 0;
  *(_QWORD*)(result + 660) = 0;
  *(_BYTE*)(result + 620) = 0;
  *(_QWORD*)(result + 624) = 3212836864LL;
  *(_QWORD*)(result + 632) = 1065353216;
  *(_BYTE*)(result + 648) = 0;
  *(_BYTE*)(result + 684) = 0;
  *(_QWORD*)(result + 688) = 3212836864LL;
  *(_QWORD*)(result + 696) = 1065353216;
  *(_BYTE*)(result + 712) = 0;
  *(_BYTE*)(result + 748) = 0;
  *(_QWORD*)(result + 732) = 0;
  *(_QWORD*)(result + 740) = 0;
  *(_QWORD*)(result + 716) = 0;
  *(_QWORD*)(result + 724) = 0;
  *(_QWORD*)(result + 752) = 3212836864LL;
  *(_QWORD*)(result + 760) = 1065353216;
  *(_BYTE*)(result + 776) = 0;
  *(_BYTE*)(result + 812) = 0;
  *(_QWORD*)(result + 816) = 3212836864LL;
  *(_QWORD*)(result + 824) = 1065353216;
  *(_BYTE*)(result + 840) = 0;
  *(_BYTE*)(result + 876) = 0;
  *(_QWORD*)(result + 880) = 3212836864LL;
  *(_QWORD*)(result + 796) = 0;
  *(_QWORD*)(result + 804) = 0;
  *(_QWORD*)(result + 780) = 0;
  *(_QWORD*)(result + 788) = 0;
  *(_QWORD*)(result + 888) = 1065353216;
  *(_BYTE*)(result + 904) = 0;
  *(_BYTE*)(result + 940) = 0;
  *(_QWORD*)(result + 924) = 0;
  *(_QWORD*)(result + 932) = 0;
  *(_QWORD*)(result + 908) = 0;
  *(_QWORD*)(result + 916) = 0;
  *(_QWORD*)(result + 944) = 3212836864LL;
  *(_QWORD*)(result + 952) = 1065353216;
  *(_QWORD*)(result + 860) = 0;
  *(_QWORD*)(result + 868) = 0;
  *(_QWORD*)(result + 844) = 0;
  *(_QWORD*)(result + 852) = 0;
  return result;
}

void CinematicZoom_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[122];
  a1[122] = 0;
  *a1 = game_combat_CinematicZoom_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 == 0) {
    goto LABEL_14;
  }
  if (*(_BYTE*)(v1 + 65) == 1) {
    GameHr_111eae0(v1);
  }
  v4 = *(_QWORD**)(v1 + 48);
  if (v4 == (_QWORD*)(v1 + 16)) {
    v5 = 32;
    goto LABEL_8;
  }
  if (v4 != nullptr) {
    v5 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
  }
  v6 = *(_QWORD*)(v1 + 8);
  *(_QWORD*)(v1 + 8) = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 40LL))(v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v7 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v1);
LABEL_14:
  v8 = a1[121];
  a1[121] = 0;
  if (v8 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, v8);
  }
  *a1 = GameData_200bec8;
  if ((_QWORD*)GameData_2235738 == a1) {
    GameData_2235738 = 0;
    GameData_2236510 = 0;
  }
}

void CinematicZoom_10e0dc0(__int64 a1, float a2, long double a3, long double a4,
                           long double a5)
{

#pragma clang fp contract(off)
  int v6;
  __int64 v7;
  __int64 v8;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  int v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;

  v6 = *(_DWORD*)(a1 + 988);
  v7 = a1 + 36;
  v8 = 960;
  *(_QWORD*)(a1 + 984) = 0;
  *(_DWORD*)(a1 + 992) = v6;
  do {
    v12 = *(float*)(v7 + 20);
    if (v12 >= 0x0.0p+0f) {
      v13 = *(float*)(v7 + 4);
      if (*(_BYTE*)(v7 + 16) == 1) {
        v14 = v13 - a2;
        if (v13 != 0x0.0p+0f && (v13 >= (float)(a2 + v12) || v12 > v13)) {
          v14 = *(float*)(v7 + 20);
        }
      }
      else {
        v14 = *(float*)(v7 + 20);
      }
      v12 = a2 + v14;
      v16 = *(float*)(v7 + 8);
      v17 = *(float*)(v7 + 12);
      *(float*)(v7 + 20) = v12;
      if (v12 > (float)(v17 + (float)(v13 + fmaxf(v16, 0x0.0p+0f)))) {
        v18 = *(float*)(v7 + 24);
        v19 = *(float*)(v7 - 12);
        *(_DWORD*)(v7 + 20) = -1082130432;
        goto LABEL_28;
      }
    }
    v18 = *(float*)(v7 + 24);
    if (v12 < 0x0.0p+0f) {
      v19 = *(float*)(v7 - 12);
      goto LABEL_28;
    }
    v20 = *(float*)(v7 + 4);
    if (v12 == 0x0.0p+0f && v20 == 0x0.0p+0f) {
    LABEL_22:
      v19 = *(float*)(v7 - 8);
      goto LABEL_28;
    }
    if (v12 <= v20) {
      v22 = *(float*)(v7 - 12);
      v23 = *(float*)(v7 - 8);
      v24 = *(_DWORD*)(v7 - 4);
    }
    else {
      v21 = v20 + fmaxf(*(float*)(v7 + 8), 0x0.0p+0f);
      if (v21 >= v12) {
        goto LABEL_22;
      }
      v23 = *(float*)(v7 - 12);
      v22 = *(float*)(v7 - 8);
      v12 = v12 - v21;
      v20 = *(float*)(v7 + 12);
      v24 = *(_DWORD*)v7;
    }
    v19 = task_618640(v24, v22, v23, v12, v20);
  LABEL_28:
    v25 = v18 * v19;
    if (v25 >= *(float*)(a1 + 984)) {
      v25 = *(float*)(a1 + 984);
    }
    *(float*)(a1 + 984) = v25;
    v26 = *(float*)(v7 + 20);
    v27 = *(float*)(v7 + 32);
    if (v26 < 0x0.0p+0f) {
      v10 = *(float*)(v7 - 12);
      goto LABEL_3;
    }
    v28 = *(float*)(v7 + 4);
    if (v26 == 0x0.0p+0f && v28 == 0x0.0p+0f) {
    LABEL_33:
      v10 = *(float*)(v7 - 8);
      goto LABEL_3;
    }
    if (v26 <= v28) {
      v10 = task_618640(*(_DWORD*)(v7 - 4), *(float*)(v7 - 12),
                        *(float*)(v7 - 8), v26, v28);
    }
    else {
      v29 = v28 + fmaxf(*(float*)(v7 + 8), 0x0.0p+0f);
      if (v29 >= v26) {
        goto LABEL_33;
      }
      v10 = task_618640(*(_DWORD*)v7, *(float*)(v7 - 8), *(float*)(v7 - 12),
                        v26 - v29, *(float*)(v7 + 12));
    }
  LABEL_3:
    v11 = v27 * v10;
    v7 += 64;
    if (*(float*)(a1 + 988) >= v11) {
      v11 = *(float*)(a1 + 988);
    }
    v8 -= 64;
    *(float*)(a1 + 988) = v11;
  } while (v8 != 0);
}

__int64 CinematicZoom_10e0fc0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;

  if ((GameData_21ec7b0 == 0 || (v1 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
       (*(_BYTE*)(v1 + 113) & 0x80) == 0) &&
      GameData_2235738 != 0) {
    v2 = GameData_2235738 + ((__int64)(int)result << 6);
    if (*(_BYTE*)(v2 + 16) == 1) {
      v3 = v2 + 8;
      if (*(float*)(v3 + 16) != *(float*)(v3 + 20)) {
        v4 = *(float*)(v3 + 36);
        *(_DWORD*)(v3 + 48) = 0;
        *(_BYTE*)(v3 + 44) = v4 < 0.0;
      }
    }
  }
  return result;
}

void CinematicZoom_10e1030(int a1)
{
  __int64 v1;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  int v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  int v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  int v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  int v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  int v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  int v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  int v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  int v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  int v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  int v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  int v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  int v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  int v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  int v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  int v92;

  v1 = GameData_2235738;
  if (GameData_2235738 == 0) {
    return;
  }
  if (a1 == *(_DWORD*)(GameData_2235738 + 20)) {
    v3 = *(float*)(GameData_2235738 + 56);
    if (v3 >= 0x0.0p+0f) {
      v4 = *(float*)(GameData_2235738 + 40);
      if (v3 != 0x0.0p+0f || v4 != 0x0.0p+0f) {
        if (v3 <= v4) {
          v6 = *(float*)(GameData_2235738 + 24);
          v7 = *(float*)(GameData_2235738 + 28);
          v8 = *(_DWORD*)(GameData_2235738 + 32);
        }
        else {
          v5 = v4 + fmaxf(*(float*)(GameData_2235738 + 44), 0x0.0p+0f);
          if (v5 >= v3) {
            goto LABEL_14;
          }
          v7 = *(float*)(GameData_2235738 + 24);
          v6 = *(float*)(GameData_2235738 + 28);
          v3 = v3 - v5;
          v4 = *(float*)(GameData_2235738 + 48);
          v8 = *(_DWORD*)(GameData_2235738 + 36);
        }
        GameRoutine_618640_alt1(v8, v6, v7, v3, v4);
      }
    }
  }
LABEL_14:
  if (a1 == *(_DWORD*)(v1 + 84)) {
    v9 = *(float*)(v1 + 120);
    if (v9 >= 0x0.0p+0f) {
      v10 = *(float*)(v1 + 104);
      if (v9 != 0x0.0p+0f || v10 != 0x0.0p+0f) {
        if (v9 <= v10) {
          v12 = *(float*)(v1 + 88);
          v13 = *(float*)(v1 + 92);
          v14 = *(_DWORD*)(v1 + 96);
        }
        else {
          v11 = v10 + fmaxf(*(float*)(v1 + 108), 0x0.0p+0f);
          if (v11 >= v9) {
            goto LABEL_24;
          }
          v13 = *(float*)(v1 + 88);
          v12 = *(float*)(v1 + 92);
          v9 = v9 - v11;
          v10 = *(float*)(v1 + 112);
          v14 = *(_DWORD*)(v1 + 100);
        }
        GameRoutine_618640_alt1(v14, v12, v13, v9, v10);
      }
    }
  }
LABEL_24:
  if (a1 == *(_DWORD*)(v1 + 148)) {
    v15 = *(float*)(v1 + 184);
    if (v15 >= 0x0.0p+0f) {
      v16 = *(float*)(v1 + 168);
      if (v15 != 0x0.0p+0f || v16 != 0x0.0p+0f) {
        if (v15 <= v16) {
          v18 = *(float*)(v1 + 152);
          v19 = *(float*)(v1 + 156);
          v20 = *(_DWORD*)(v1 + 160);
        }
        else {
          v17 = v16 + fmaxf(*(float*)(v1 + 172), 0x0.0p+0f);
          if (v17 >= v15) {
            goto LABEL_34;
          }
          v19 = *(float*)(v1 + 152);
          v18 = *(float*)(v1 + 156);
          v15 = v15 - v17;
          v16 = *(float*)(v1 + 176);
          v20 = *(_DWORD*)(v1 + 164);
        }
        GameRoutine_618640_alt1(v20, v18, v19, v15, v16);
      }
    }
  }
LABEL_34:
  if (a1 == *(_DWORD*)(v1 + 212)) {
    v21 = *(float*)(v1 + 248);
    if (v21 >= 0x0.0p+0f) {
      v22 = *(float*)(v1 + 232);
      if (v21 != 0x0.0p+0f || v22 != 0x0.0p+0f) {
        if (v21 <= v22) {
          v24 = *(float*)(v1 + 216);
          v25 = *(float*)(v1 + 220);
          v26 = *(_DWORD*)(v1 + 224);
        }
        else {
          v23 = v22 + fmaxf(*(float*)(v1 + 236), 0x0.0p+0f);
          if (v23 >= v21) {
            goto LABEL_44;
          }
          v25 = *(float*)(v1 + 216);
          v24 = *(float*)(v1 + 220);
          v21 = v21 - v23;
          v22 = *(float*)(v1 + 240);
          v26 = *(_DWORD*)(v1 + 228);
        }
        GameRoutine_618640_alt1(v26, v24, v25, v21, v22);
      }
    }
  }
LABEL_44:
  if (a1 == *(_DWORD*)(v1 + 276)) {
    v27 = *(float*)(v1 + 312);
    if (v27 >= 0x0.0p+0f) {
      v28 = *(float*)(v1 + 296);
      if (v27 != 0x0.0p+0f || v28 != 0x0.0p+0f) {
        if (v27 <= v28) {
          v30 = *(float*)(v1 + 280);
          v31 = *(float*)(v1 + 284);
          v32 = *(_DWORD*)(v1 + 288);
        }
        else {
          v29 = v28 + fmaxf(*(float*)(v1 + 300), 0x0.0p+0f);
          if (v29 >= v27) {
            goto LABEL_54;
          }
          v30 = *(float*)(v1 + 284);
          v31 = *(float*)(v1 + 280);
          v27 = v27 - v29;
          v28 = *(float*)(v1 + 304);
          v32 = *(_DWORD*)(v1 + 292);
        }
        GameRoutine_618640_alt1(v32, v30, v31, v27, v28);
      }
    }
  }
LABEL_54:
  if (a1 == *(_DWORD*)(v1 + 340)) {
    v33 = *(float*)(v1 + 376);
    if (v33 >= 0x0.0p+0f) {
      v34 = *(float*)(v1 + 360);
      if (v33 != 0x0.0p+0f || v34 != 0x0.0p+0f) {
        if (v33 <= v34) {
          v36 = *(float*)(v1 + 344);
          v37 = *(float*)(v1 + 348);
          v38 = *(_DWORD*)(v1 + 352);
        }
        else {
          v35 = v34 + fmaxf(*(float*)(v1 + 364), 0x0.0p+0f);
          if (v35 >= v33) {
            goto LABEL_64;
          }
          v36 = *(float*)(v1 + 348);
          v37 = *(float*)(v1 + 344);
          v33 = v33 - v35;
          v34 = *(float*)(v1 + 368);
          v38 = *(_DWORD*)(v1 + 356);
        }
        GameRoutine_618640_alt1(v38, v36, v37, v33, v34);
      }
    }
  }
LABEL_64:
  if (a1 == *(_DWORD*)(v1 + 404)) {
    v39 = *(float*)(v1 + 440);
    if (v39 >= 0x0.0p+0f) {
      v40 = *(float*)(v1 + 424);
      if (v39 != 0x0.0p+0f || v40 != 0x0.0p+0f) {
        if (v39 <= v40) {
          v42 = *(float*)(v1 + 408);
          v43 = *(float*)(v1 + 412);
          v44 = *(_DWORD*)(v1 + 416);
        }
        else {
          v41 = v40 + fmaxf(*(float*)(v1 + 428), 0x0.0p+0f);
          if (v41 >= v39) {
            goto LABEL_74;
          }
          v42 = *(float*)(v1 + 412);
          v43 = *(float*)(v1 + 408);
          v39 = v39 - v41;
          v40 = *(float*)(v1 + 432);
          v44 = *(_DWORD*)(v1 + 420);
        }
        GameRoutine_618640_alt1(v44, v42, v43, v39, v40);
      }
    }
  }
LABEL_74:
  if (a1 == *(_DWORD*)(v1 + 468)) {
    v45 = *(float*)(v1 + 504);
    if (v45 >= 0x0.0p+0f) {
      v46 = *(float*)(v1 + 488);
      if (v45 != 0x0.0p+0f || v46 != 0x0.0p+0f) {
        if (v45 <= v46) {
          v48 = *(float*)(v1 + 472);
          v49 = *(float*)(v1 + 476);
          v50 = *(_DWORD*)(v1 + 480);
        }
        else {
          v47 = v46 + fmaxf(*(float*)(v1 + 492), 0x0.0p+0f);
          if (v47 >= v45) {
            goto LABEL_84;
          }
          v48 = *(float*)(v1 + 476);
          v49 = *(float*)(v1 + 472);
          v45 = v45 - v47;
          v46 = *(float*)(v1 + 496);
          v50 = *(_DWORD*)(v1 + 484);
        }
        GameRoutine_618640_alt1(v50, v48, v49, v45, v46);
      }
    }
  }
LABEL_84:
  if (a1 == *(_DWORD*)(v1 + 532)) {
    v51 = *(float*)(v1 + 568);
    if (v51 >= 0x0.0p+0f) {
      v52 = *(float*)(v1 + 552);
      if (v51 != 0x0.0p+0f || v52 != 0x0.0p+0f) {
        if (v51 <= v52) {
          v54 = *(float*)(v1 + 536);
          v55 = *(float*)(v1 + 540);
          v56 = *(_DWORD*)(v1 + 544);
        }
        else {
          v53 = v52 + fmaxf(*(float*)(v1 + 556), 0x0.0p+0f);
          if (v53 >= v51) {
            goto LABEL_94;
          }
          v54 = *(float*)(v1 + 540);
          v55 = *(float*)(v1 + 536);
          v51 = v51 - v53;
          v52 = *(float*)(v1 + 560);
          v56 = *(_DWORD*)(v1 + 548);
        }
        GameRoutine_618640_alt1(v56, v54, v55, v51, v52);
      }
    }
  }
LABEL_94:
  if (a1 == *(_DWORD*)(v1 + 596)) {
    v57 = *(float*)(v1 + 632);
    if (v57 >= 0x0.0p+0f) {
      v58 = *(float*)(v1 + 616);
      if (v57 != 0x0.0p+0f || v58 != 0x0.0p+0f) {
        if (v57 <= v58) {
          v60 = *(float*)(v1 + 600);
          v61 = *(float*)(v1 + 604);
          v62 = *(_DWORD*)(v1 + 608);
        }
        else {
          v59 = v58 + fmaxf(*(float*)(v1 + 620), 0x0.0p+0f);
          if (v59 >= v57) {
            goto LABEL_104;
          }
          v60 = *(float*)(v1 + 604);
          v61 = *(float*)(v1 + 600);
          v57 = v57 - v59;
          v58 = *(float*)(v1 + 624);
          v62 = *(_DWORD*)(v1 + 612);
        }
        GameRoutine_618640_alt1(v62, v60, v61, v57, v58);
      }
    }
  }
LABEL_104:
  if (a1 == *(_DWORD*)(v1 + 660)) {
    v63 = *(float*)(v1 + 696);
    if (v63 >= 0x0.0p+0f) {
      v64 = *(float*)(v1 + 680);
      if (v63 != 0x0.0p+0f || v64 != 0x0.0p+0f) {
        if (v63 <= v64) {
          v66 = *(float*)(v1 + 664);
          v67 = *(float*)(v1 + 668);
          v68 = *(_DWORD*)(v1 + 672);
        }
        else {
          v65 = v64 + fmaxf(*(float*)(v1 + 684), 0x0.0p+0f);
          if (v65 >= v63) {
            goto LABEL_114;
          }
          v66 = *(float*)(v1 + 668);
          v67 = *(float*)(v1 + 664);
          v63 = v63 - v65;
          v64 = *(float*)(v1 + 688);
          v68 = *(_DWORD*)(v1 + 676);
        }
        GameRoutine_618640_alt1(v68, v66, v67, v63, v64);
      }
    }
  }
LABEL_114:
  if (a1 == *(_DWORD*)(v1 + 724)) {
    v69 = *(float*)(v1 + 760);
    if (v69 >= 0x0.0p+0f) {
      v70 = *(float*)(v1 + 744);
      if (v69 != 0x0.0p+0f || v70 != 0x0.0p+0f) {
        if (v69 <= v70) {
          v72 = *(float*)(v1 + 728);
          v73 = *(float*)(v1 + 732);
          v74 = *(_DWORD*)(v1 + 736);
        }
        else {
          v71 = v70 + fmaxf(*(float*)(v1 + 748), 0x0.0p+0f);
          if (v71 >= v69) {
            goto LABEL_124;
          }
          v72 = *(float*)(v1 + 732);
          v73 = *(float*)(v1 + 728);
          v69 = v69 - v71;
          v70 = *(float*)(v1 + 752);
          v74 = *(_DWORD*)(v1 + 740);
        }
        GameRoutine_618640_alt1(v74, v72, v73, v69, v70);
      }
    }
  }
LABEL_124:
  if (a1 == *(_DWORD*)(v1 + 788)) {
    v75 = *(float*)(v1 + 824);
    if (v75 >= 0x0.0p+0f) {
      v76 = *(float*)(v1 + 808);
      if (v75 != 0x0.0p+0f || v76 != 0x0.0p+0f) {
        if (v75 <= v76) {
          v78 = *(float*)(v1 + 792);
          v79 = *(float*)(v1 + 796);
          v80 = *(_DWORD*)(v1 + 800);
        }
        else {
          v77 = v76 + fmaxf(*(float*)(v1 + 812), 0x0.0p+0f);
          if (v77 >= v75) {
            goto LABEL_134;
          }
          v78 = *(float*)(v1 + 796);
          v79 = *(float*)(v1 + 792);
          v75 = v75 - v77;
          v76 = *(float*)(v1 + 816);
          v80 = *(_DWORD*)(v1 + 804);
        }
        GameRoutine_618640_alt1(v80, v78, v79, v75, v76);
      }
    }
  }
LABEL_134:
  if (a1 == *(_DWORD*)(v1 + 852)) {
    v81 = *(float*)(v1 + 888);
    if (v81 >= 0x0.0p+0f) {
      v82 = *(float*)(v1 + 872);
      if (v81 != 0x0.0p+0f || v82 != 0x0.0p+0f) {
        if (v81 <= v82) {
          v84 = *(float*)(v1 + 856);
          v85 = *(float*)(v1 + 860);
          v86 = *(_DWORD*)(v1 + 864);
        }
        else {
          v83 = v82 + fmaxf(*(float*)(v1 + 876), 0x0.0p+0f);
          if (v83 >= v81) {
            goto LABEL_144;
          }
          v84 = *(float*)(v1 + 860);
          v85 = *(float*)(v1 + 856);
          v81 = v81 - v83;
          v82 = *(float*)(v1 + 880);
          v86 = *(_DWORD*)(v1 + 868);
        }
        GameRoutine_618640_alt1(v86, v84, v85, v81, v82);
      }
    }
  }
LABEL_144:
  if (a1 == *(_DWORD*)(v1 + 916)) {
    v87 = *(float*)(v1 + 952);
    if (v87 >= 0x0.0p+0f) {
      v88 = *(float*)(v1 + 936);
      if (v87 != 0x0.0p+0f || v88 != 0x0.0p+0f) {
        if (v87 <= v88) {
          v90 = *(float*)(v1 + 920);
          v91 = *(float*)(v1 + 924);
          v92 = *(_DWORD*)(v1 + 928);
        }
        else {
          v89 = v88 + fmaxf(*(float*)(v1 + 940), 0x0.0p+0f);
          if (v89 >= v87) {
            return;
          }
          v90 = *(float*)(v1 + 924);
          v91 = *(float*)(v1 + 920);
          v87 = v87 - v89;
          v88 = *(float*)(v1 + 944);
          v92 = *(_DWORD*)(v1 + 932);
        }
        GameRoutine_618640_alt1(v92, v90, v91, v87, v88);
      }
    }
  }
}

__int64 game_combat_CinematicZoom_CinematicZoom_lambda0_Invoke(__int64 a1,
                                                               __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  unsigned int v5;
  float* v6;
  unsigned int v7;
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
  unsigned int v26;
  unsigned int v27[2];

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a2 + 8);
  if (*(_BYTE*)(a2 + 64) == 1) {
    v26 = (unsigned int)game_HashString32("CineZoom");
    GameRoutine_65f9a0((_QWORD*)v3, &v26, 0);
  }
  else {
    v5 = (unsigned int)game_HashString32("CineZoom");
    v6 = *(float**)(v3 + 120);
    v7 = *(_DWORD*)(v3 + 20);
    v27[0] = v5;
    v27[1] = v7;
    game_6616e0(v6, v27);
    v8 = *(int*)(v3 + 20);
    *(_DWORD*)(v3 + 20) = v8 + 1;
    *(_BYTE*)(*(_QWORD*)(v3 + 8) + v8) = 15;
    v9 = *(int*)(v3 + 20);
    *(_DWORD*)(v3 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(v3 + 8) + v9) = 0;
  }
  GameRoutine_111ef70(a2, (__int64)"%s[%d]", "CineZoom", 0);
  game_combat_10e0730(v2 + 8, a2);
  if (*(_BYTE*)(a2 + 64) != 0) {
    v10 = 24;
  }
  else {
    v10 = 8;
  }
  (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v10))((void*)*(_QWORD**)(a2 + 8));
  GameRoutine_111ef70(a2, (__int64)"%s[%d]", "CineZoom", 1);
  game_combat_10e0730(v2 + 72, a2);
  if (*(_BYTE*)(a2 + 64) != 0) {
    v11 = 24;
  }
  else {
    v11 = 8;
  }
  (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v11))((void*)*(_QWORD**)(a2 + 8));
  GameRoutine_111ef70(a2, (__int64)"%s[%d]", "CineZoom", 2);
  game_combat_10e0730(v2 + 136, a2);
  if (*(_BYTE*)(a2 + 64) != 0) {
    v12 = 24;
  }
  else {
    v12 = 8;
  }
  (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v12))((void*)*(_QWORD**)(a2 + 8));
  GameRoutine_111ef70(a2, (__int64)"%s[%d]", "CineZoom", 3);
  game_combat_10e0730(v2 + 200, a2);
  if (*(_BYTE*)(a2 + 64) != 0) {
    v13 = 24;
  }
  else {
    v13 = 8;
  }
  (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v13))((void*)*(_QWORD**)(a2 + 8));
  GameRoutine_111ef70(a2, (__int64)"%s[%d]", "CineZoom", 4);
  game_combat_10e0730(v2 + 264, a2);
  if (*(_BYTE*)(a2 + 64) != 0) {
    v14 = 24;
  }
  else {
    v14 = 8;
  }
  (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v14))((void*)*(_QWORD**)(a2 + 8));
  GameRoutine_111ef70(a2, (__int64)"%s[%d]", "CineZoom", 5);
  game_combat_10e0730(v2 + 328, a2);
  if (*(_BYTE*)(a2 + 64) != 0) {
    v15 = 24;
  }
  else {
    v15 = 8;
  }
  (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v15))((void*)*(_QWORD**)(a2 + 8));
  GameRoutine_111ef70(a2, (__int64)"%s[%d]", "CineZoom", 6);
  game_combat_10e0730(v2 + 392, a2);
  if (*(_BYTE*)(a2 + 64) != 0) {
    v16 = 24;
  }
  else {
    v16 = 8;
  }
  (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v16))((void*)*(_QWORD**)(a2 + 8));
  GameRoutine_111ef70(a2, (__int64)"%s[%d]", "CineZoom", 7);
  game_combat_10e0730(v2 + 456, a2);
  if (*(_BYTE*)(a2 + 64) != 0) {
    v17 = 24;
  }
  else {
    v17 = 8;
  }
  (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v17))((void*)*(_QWORD**)(a2 + 8));
  GameRoutine_111ef70(a2, (__int64)"%s[%d]", "CineZoom", 8);
  game_combat_10e0730(v2 + 520, a2);
  if (*(_BYTE*)(a2 + 64) != 0) {
    v18 = 24;
  }
  else {
    v18 = 8;
  }
  (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v18))((void*)*(_QWORD**)(a2 + 8));
  GameRoutine_111ef70(a2, (__int64)"%s[%d]", "CineZoom", 9);
  game_combat_10e0730(v2 + 584, a2);
  if (*(_BYTE*)(a2 + 64) != 0) {
    v19 = 24;
  }
  else {
    v19 = 8;
  }
  (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v19))((void*)*(_QWORD**)(a2 + 8));
  GameRoutine_111ef70(a2, (__int64)"%s[%d]", "CineZoom", 10);
  game_combat_10e0730(v2 + 648, a2);
  if (*(_BYTE*)(a2 + 64) != 0) {
    v20 = 24;
  }
  else {
    v20 = 8;
  }
  (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v20))((void*)*(_QWORD**)(a2 + 8));
  GameRoutine_111ef70(a2, (__int64)"%s[%d]", "CineZoom", 11);
  game_combat_10e0730(v2 + 712, a2);
  if (*(_BYTE*)(a2 + 64) != 0) {
    v21 = 24;
  }
  else {
    v21 = 8;
  }
  (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v21))((void*)*(_QWORD**)(a2 + 8));
  GameRoutine_111ef70(a2, (__int64)"%s[%d]", "CineZoom", 12);
  game_combat_10e0730(v2 + 776, a2);
  if (*(_BYTE*)(a2 + 64) != 0) {
    v22 = 24;
  }
  else {
    v22 = 8;
  }
  (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v22))((void*)*(_QWORD**)(a2 + 8));
  GameRoutine_111ef70(a2, (__int64)"%s[%d]", "CineZoom", 13);
  game_combat_10e0730(v2 + 840, a2);
  if (*(_BYTE*)(a2 + 64) != 0) {
    v23 = 24;
  }
  else {
    v23 = 8;
  }
  (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v23))((void*)*(_QWORD**)(a2 + 8));
  GameRoutine_111ef70(a2, (__int64)"%s[%d]", "CineZoom", 14);
  game_combat_10e0730(v2 + 904, a2);
  if (*(_BYTE*)(a2 + 64) != 0) {
    v24 = 24;
  }
  else {
    v24 = 8;
  }
  return (*(__int64 (**)(void*))(**(_QWORD**)(a2 + 8) + v24))(
      (void*)*(_QWORD**)(a2 + 8));
}

#pragma GCC visibility pop
