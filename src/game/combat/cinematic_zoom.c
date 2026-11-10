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
_QWORD* CinematicZoom_Destructor(_QWORD* result);
void CinematicZoom_10e0dc0(__int64 a1, long double a2, long double a3,
                           long double a4, long double a5);
__int64 CinematicZoom_10e0fc0(__int64 result);

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

_QWORD* CinematicZoom_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = result[122];
  result[122] = 0;
  v2 = result;
  *result = game_combat_CinematicZoom_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 == 0) {
    goto LABEL_14;
  }
  if (*(_BYTE*)(v1 + 65) == 1) {
    GameRoutine_111eae0(v1);
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
  result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
LABEL_14:
  v8 = v2[121];
  v2[121] = 0;
  if (v8 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v9 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
  }
  *v2 = GameData_200bec8;
  if ((_QWORD*)GameData_2235738 == v2) {
    GameData_2235738 = 0;
    GameData_2236510 = 0;
  }
  return result;
}

void CinematicZoom_10e0dc0(__int64 a1, long double a2, long double a3,
                           long double a4, long double a5)
{
  float v5;
  int v6;
  float* v7;
  __int64 v8;
  float v10;
  float v11;
  float v12;
  float v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;

  v5 = *(float*)&a2;
  v6 = *(_DWORD*)(a1 + 988);
  v7 = (float*)(a1 + 36);
  v8 = 960;
  *(_QWORD*)(a1 + 984) = 0;
  *(_DWORD*)(a1 + 992) = v6;
  do {
    *(float*)&a4 = v7[5];
    if (*(float*)&a4 >= 0.0) {
      v11 = v7[1];
      if (*((_BYTE*)v7 + 16) == 1) {
        v12 = v11 - v5;
        if (v11 != 0.0 &&
            (v11 >= (float)(v5 + *(float*)&a4) || *(float*)&a4 > v11)) {
          v12 = v7[5];
        }
      }
      else {
        v12 = v7[5];
      }
      *(float*)&a4 = v5 + v12;
      v14 = v7[2];
      v15 = v7[3];
      v7[5] = *(float*)&a4;
      if (*(float*)&a4 > (float)(v15 + (float)(v11 + fmaxf(v14, 0.0)))) {
        v16 = v7[6];
        *(float*)&a2 = *(v7 - 3);
        v7[5] = -1.0;
        goto LABEL_28;
      }
    }
    v16 = v7[6];
    if (*(float*)&a4 < 0.0) {
      *(float*)&a2 = *(v7 - 3);
      goto LABEL_28;
    }
    *(float*)&a5 = v7[1];
    if (*(float*)&a4 == 0.0 && *(float*)&a5 == 0.0) {
    LABEL_22:
      *(float*)&a2 = *(v7 - 2);
      goto LABEL_28;
    }
    if (*(float*)&a4 <= *(float*)&a5) {
      *(float*)&a2 = *(v7 - 3);
      *(float*)&a3 = *(v7 - 2);
      v18 = *((unsigned int*)v7 - 1);
    }
    else {
      v17 = *(float*)&a5 + fmaxf(v7[2], 0.0);
      if (v17 >= *(float*)&a4) {
        goto LABEL_22;
      }
      *(float*)&a3 = *(v7 - 3);
      *(float*)&a2 = *(v7 - 2);
      *(float*)&a4 = *(float*)&a4 - v17;
      *(float*)&a5 = v7[3];
      v18 = *(unsigned int*)v7;
    }
    a2 = GameRoutine_618640(v18, a2, a3, a4, a5);
  LABEL_28:
    v19 = v16 * *(float*)&a2;
    if (v19 >= *(float*)(a1 + 984)) {
      v19 = *(float*)(a1 + 984);
    }
    *(float*)(a1 + 984) = v19;
    *(float*)&a4 = v7[5];
    v20 = v7[8];
    if (*(float*)&a4 < 0.0) {
      *(float*)&a2 = *(v7 - 3);
      goto LABEL_3;
    }
    *(float*)&a5 = v7[1];
    if (*(float*)&a4 == 0.0 && *(float*)&a5 == 0.0) {
    LABEL_33:
      *(float*)&a2 = *(v7 - 2);
      goto LABEL_3;
    }
    if (*(float*)&a4 <= *(float*)&a5) {
      *(float*)&a2 = *(v7 - 3);
      *(float*)&a3 = *(v7 - 2);
      a2 = GameRoutine_618640(*((unsigned int*)v7 - 1), a2, a3, a4, a5);
    }
    else {
      *(float*)&a5 = *(float*)&a5 + fmaxf(v7[2], 0.0);
      if (*(float*)&a5 >= *(float*)&a4) {
        goto LABEL_33;
      }
      *(float*)&a3 = *(v7 - 3);
      *(float*)&a2 = *(v7 - 2);
      *(float*)&a4 = *(float*)&a4 - *(float*)&a5;
      *(float*)&a5 = v7[3];
      a2 = GameRoutine_618640(*(unsigned int*)v7, a2, a3, a4, a5);
    }
  LABEL_3:
    v10 = v20 * *(float*)&a2;
    v7 += 16;
    if (*(float*)(a1 + 988) >= v10) {
      v10 = *(float*)(a1 + 988);
    }
    v8 -= 64;
    *(float*)(a1 + 988) = v10;
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

#pragma GCC visibility pop
