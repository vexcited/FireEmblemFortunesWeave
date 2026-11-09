#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_128ce70(_QWORD);
__int64 GameRoutine_128df90(_QWORD, _QWORD);
__int64 GameRoutine_128e230(_QWORD, _QWORD);
__int64 AIInterferenceSimulator_Destructor(__int64 a1, __int64 a2);
__int64 AiBattleSimulator_11fc090(_QWORD, _QWORD);
__int64 AiInterferenceSimulator_128e230(__int64, __int64);
__int64 BattleInfo_790800(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 BattleInfo_790970(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_11fbb20(_QWORD);
__int64 GameRoutine_11fbe50(_QWORD, _QWORD);
__int64 GameRoutine_11fc220(_QWORD);
__int64 GameRoutine_11fd9e0(_QWORD);
__int64 GameRoutine_790ba0(_QWORD);
__int64 GameRoutine_7992e0(_QWORD);
__int64 GameRoutine_799aa0(_QWORD, _QWORD);
__int64 GameRoutine_799b90(_QWORD, _QWORD);
__int64 GameRoutine_8b9d00(_QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
__int64 AiInterferenceSimulator_128e230(__int64 a1, __int64 a2);
__int64 AiInterferenceSimulator_129b480(__int64 a1, __int64 a2, int a3, int a4);

__int64 AIInterferenceSimulator_Destructor(__int64 a1, __int64 a2)
{
  GameRoutine_128df90(a1, a2);
  *(_DWORD*)(a1 + 15788) = *(__int16*)(*(_QWORD*)(a2 + 40) + 490LL);
  GameRoutine_128e230(a1, a2);
  return GameRoutine_128ce70(a1);
}

__int64 AiInterferenceSimulator_128e230(__int64 a1, __int64 a2)
{
  __int64 v3;
  _QWORD* v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  __int64 result;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  int v22;

  v3 = a1 + 12288;
  GameRoutine_7992e0(a1 + 4488);
  GameRoutine_7992e0(a1 + 5248);
  GameRoutine_7992e0(a1 + 6008);
  GameRoutine_7992e0(a1 + 6768);
  *(_DWORD*)(a1 + 15728) = 0;
  *(_WORD*)(v3 + 3456) = 0;
  v5 = (_QWORD*)(a1 + 15748);
  *(_QWORD*)(a1 + 15748) = 0;
  *(_QWORD*)(a1 + 15754) = 0;
  GameRoutine_8b9d00(a1 + 15768);
  v6 = *(_DWORD*)(a2 + 8);
  v7 = *(_DWORD*)(a2 + 16);
  v8 = *(_QWORD*)(a2 + 64);
  if (v8 != 0 && *(_BYTE*)(v8 + 104) == 3) {
    v7 = -1;
  }
  v18 = *(_DWORD*)(a2 + 60);
  v19 = *(_DWORD*)(a2 + 56);
  v9 = *(_QWORD*)(a2 + 40);
  if (v6 < 0) {
    v6 = *(char*)(a1 + 600);
    v10 = *(char*)(a1 + 601);
    if (*(int*)(a2 + 72) >= 1) {
      v11 = 9;
    }
    else {
      v11 = 13;
    }
  }
  else {
    v10 = *(_DWORD*)(a2 + 12);
    v11 = 1;
  }
  v22 = v11;
  if (v9 != 0) {
    v12 = 0;
  }
  else {
    v12 = *(_QWORD*)(a1 + 4464);
  }
  if (v9 != 0) {
    v13 = a1 + 2240;
  }
  else {
    v13 = 0;
  }
  v20 = *(_QWORD*)(a2 + 24);
  v21 = *(_QWORD*)(a2 + 64);
  if (*(_BYTE*)(v3 + 3457) != 0) {
    GameRoutine_7992e0(a1 + 4488);
    GameRoutine_7992e0(a1 + 5248);
    GameRoutine_7992e0(a1 + 6008);
    GameRoutine_7992e0(a1 + 6768);
    *(_DWORD*)(a1 + 15728) = 0;
    *(_WORD*)(v3 + 3456) = 0;
    *v5 = 0;
    *(_QWORD*)(a1 + 15754) = 0;
    GameRoutine_8b9d00(a1 + 15768);
  }
  *(_DWORD*)(a1 + 4564) = v10;
  *(_DWORD*)(a1 + 4572) = v10;
  v14 = *(_DWORD*)(a1 + 608);
  *(_DWORD*)(a1 + 4528) = v7;
  *(_DWORD*)(a1 + 4560) = v6;
  *(_DWORD*)(a1 + 4568) = v6;
  *(_QWORD*)(a1 + 4512) = a1 + 16;
  *(_DWORD*)(a1 + 4576) = v14;
  BattleInfo_790800(a1 + 4472, v13, v19, v18);
  BattleInfo_790970(a1 + 4472, v12, v19, v18);
  if (*(_BYTE*)(v3 + 3457) != 0) {
    GameRoutine_7992e0(a1 + 4488);
    GameRoutine_7992e0(a1 + 5248);
    GameRoutine_7992e0(a1 + 6008);
    GameRoutine_7992e0(a1 + 6768);
    *(_DWORD*)(a1 + 15728) = 0;
    *(_WORD*)(v3 + 3456) = 0;
    *v5 = 0;
    *(_QWORD*)(a1 + 15754) = 0;
    GameRoutine_8b9d00(a1 + 15768);
  }
  GameRoutine_799aa0(a1 + 4488, v21);
  if (*(_BYTE*)(v3 + 3457) != 0) {
    GameRoutine_7992e0(a1 + 4488);
    GameRoutine_7992e0(a1 + 5248);
    GameRoutine_7992e0(a1 + 6008);
    GameRoutine_7992e0(a1 + 6768);
    *(_DWORD*)(a1 + 15728) = 0;
    *(_WORD*)(v3 + 3456) = 0;
    *v5 = 0;
    *(_QWORD*)(a1 + 15754) = 0;
    GameRoutine_8b9d00(a1 + 15768);
  }
  GameRoutine_799b90(a1 + 4488, v20);
  v15 = *(_DWORD*)(a2 + 72);
  if (*(_BYTE*)(v3 + 3457) != 0) {
    GameRoutine_7992e0(a1 + 4488);
    GameRoutine_7992e0(a1 + 5248);
    GameRoutine_7992e0(a1 + 6008);
    GameRoutine_7992e0(a1 + 6768);
    *(_DWORD*)(a1 + 15728) = 0;
    *(_WORD*)(v3 + 3456) = 0;
    *v5 = 0;
    *(_QWORD*)(a1 + 15754) = 0;
    GameRoutine_8b9d00(a1 + 15768);
  }
  v16 = *(_DWORD*)(a1 + 15748);
  *(_DWORD*)(a1 + 4580) = v15;
  *(_DWORD*)(a1 + 5340) = v15;
  *(_DWORD*)(a1 + 15748) = v16 | v22;
  result = GameRoutine_790ba0(a1 + 4472);
  *(_BYTE*)(v3 + 3457) |= 1u;
  return result;
}

__int64 AiInterferenceSimulator_129b480(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4;
  int v5;
  int v7;
  unsigned int v12;
  __int64 v13;
  int v14;
  int v15;
  _DWORD** v16;
  __int64 v17;
  _BYTE* v18;
  __int64 v19;
  float v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  float v26;
  float v27;
  bool v28;
  float v29;
  float v30;
  _BYTE v31[4];

  if (a2 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(a2 + 440);
  if (v4 != 0) {
    v5 = *(unsigned __int8*)(v4 + 16);
  }
  else {
    v5 = 9;
  }
  v7 = *(unsigned __int8*)(*(_QWORD*)(**(_QWORD**)(a1 + 8) + 440LL) + 16LL);
  if (v7 == v5) {
    return 0;
  }
  if (*(_BYTE*)(*(_QWORD*)(**(_QWORD**)(a1 + 8) + 440LL) + 16LL) != 0) {
    if (v5 == 0 && v7 == 3) {
      return 0;
    }
  }
  else if (v5 == 3) {
    return 0;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 8LL))(a1) & 1) == 0) {
    return 0;
  }
  if ((unsigned int)(a3 + 32 * a4) >= 0x400) {
    v12 = 0;
  }
  else {
    v12 = a3 + 32 * a4;
  }
  v13 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL * v12);
  if ((v13 & 0x10000000000LL) != 0) {
    if ((v13 & 0x20000000000LL) != 0) {
      v20 = (float)BYTE4(v13) / 200.0;
      v21 = *(float*)(a1 + 16696);
      *(_QWORD*)(a1 + 16688) += (unsigned int)v13;
      if (v21 < v20) {
        *(float*)(a1 + 16696) = v20;
      }
      ++*(_DWORD*)(a1 + 16680);
    }
  }
  else if ((GameRoutine_11fd9e0(**(_QWORD**)(a1 + 8)) & 1) != 0) {
    *(_QWORD*)(a1 + 16592) = 0;
    *(_QWORD*)(a1 + 16616) = 0;
    v14 = *(_DWORD*)(a1 + 16672);
    v15 = *(_DWORD*)(a1 + 16676);
    *(_QWORD*)(a1 + 16624) = 0;
    *(_QWORD*)(a1 + 16632) = 0;
    *(_QWORD*)(a1 + 16640) = 0;
    *(_QWORD*)(a1 + 16600) = -1;
    *(_QWORD*)(a1 + 16648) = -1;
    v16 = *(_DWORD***)(a1 + 8);
    *(_DWORD*)(a1 + 16608) = -1;
    *(_QWORD*)(a1 + 16656) = 0;
    *(_DWORD*)(a1 + 16664) = -1;
    v17 = *GameData_212c878[0];
    v18 = (char*)*v16 + 847;
    v19 = 2;
    while (1) {
      if (*(_WORD*)(v18 - 19) != 0 && (*(v18 - 16) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v17 + 64) +
                                         8LL * *(unsigned __int16*)(v18 - 19)) +
                              72LL) < 8u) {
        LODWORD(v19) = v19 - 2;
        goto LABEL_39;
      }
      if (*(_WORD*)(v18 - 11) != 0 && (*(v18 - 8) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v17 + 64) +
                                         8LL * *(unsigned __int16*)(v18 - 11)) +
                              72LL) < 8u) {
        break;
      }
      if (*(_WORD*)(v18 - 3) != 0 && (*v18 & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v17 + 64) +
                                         8LL * *(unsigned __int16*)(v18 - 3)) +
                              72LL) < 8u) {
        goto LABEL_39;
      }
      v19 += 3;
      v18 += 24;
      if (v19 == 32) {
        LODWORD(v19) = -1;
        goto LABEL_39;
      }
    }
    LODWORD(v19) = v19 - 1;
  LABEL_39:
    *(_QWORD*)(a1 + 16592) = *v16;
    *(_DWORD*)(a1 + 16600) = v14;
    *(_DWORD*)(a1 + 16604) = v15;
    *(_DWORD*)(a1 + 16608) = v19;
    *(_QWORD*)(a1 + 16632) = a2;
    *(_DWORD*)(a1 + 16648) = a3;
    *(_DWORD*)(a1 + 16652) = a4;
    *(_QWORD*)(a1 + 16656) = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                        8LL * (*v16[2] & 0xFFF));
    GameRoutine_128df90(a1 + 48, (_QWORD*)(a1 + 16592));
    AiInterferenceSimulator_128e230(a1 + 48, a1 + 16592);
    GameRoutine_11fbb20(a1 + 48);
    GameRoutine_11fbe50(a1 + 48, 0);
    GameRoutine_11fbe50(a1 + 48, 1);
    AiBattleSimulator_11fc090(a1 + 48, 0);
    AiBattleSimulator_11fc090(a1 + 48, 1);
    GameRoutine_11fc220(a1 + 48);
    v22 = a1;
    if (*(_BYTE*)(a1 + 28) != 1 ||
        *(int*)(a1 + 16320) >= 1 && *(float*)(a1 + 16328) > 0.0) {
      v23 = *(unsigned int*)(a1 + 15832);
      v24 = *(_QWORD*)(a1 + 4512);
      if (v24 != 0) {
        v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 160LL))(v24);
      }
      else {
        v31[0] = 0;
        v25 = game_Unit_GetParam(a1 + 2288, v31, 1);
      }
      if (v25 < 1) {
        v29 = 0.0;
      }
      else {
        v26 = *(float*)(a1 + 16576) / (float)(unsigned int)v25;
        v27 = 1.0;
        if (v26 <= 1.0) {
          v27 = *(float*)(a1 + 16576) / (float)(unsigned int)v25;
        }
        v28 = v26 < 0.0;
        v29 = 0.0;
        if (!v28) {
          v29 = v27;
        }
      }
      v30 = *(float*)(a1 + 16696);
      v22 = a1;
      *(_QWORD*)(a1 + 16688) += v23;
      if (v30 < v29) {
        *(float*)(a1 + 16696) = v29;
      }
      ++*(_DWORD*)(a1 + 16680);
      *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL * v12) =
          *(unsigned int*)(a1 + 15832) |
          ((unsigned __int64)(float)(v29 * 200.0) << 32) | 0x20000000000LL;
    }
    *(_QWORD*)(*(_QWORD*)(v22 + 40) + 8LL * v12) |= 0x10000000000uLL;
  }
  return 1;
}

#pragma GCC visibility pop
