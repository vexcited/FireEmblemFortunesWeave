#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleSide_Destructor(_QWORD);
__int64 GameRoutine_1211e40(void);
__int64 GameRoutine_795d20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7960a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_796720(__int64);
__int64 GameRoutine_7992e0(_QWORD);
__int64 GameRoutine_799880(_QWORD, _QWORD);
__int64 GameRoutine_79e950(_QWORD, _QWORD);
__int64 GameRoutine_79eba0(_QWORD);
__int64 GameRoutine_7a1f40(_QWORD, _QWORD);
__int64 GameRoutine_7a2a60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7a7840(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_810fc0(_QWORD, _QWORD);
__int64 GameRoutine_8b9d00(_QWORD);
__int64 GameRoutine_8e3d20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_97e390(_QWORD, _QWORD);
__int64 GameRoutine_a28e10(_QWORD, _QWORD);
__int64 GameRoutine_c8b5a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_eacc20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ec0f80(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_Unit_CheckEquipment(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1f98580[])();
extern __int64 (*GameData_1fab650[])();
extern __int64 (*game_map_BattleArea_vtable[])();
extern __int64 (*game_map_BattleInfo_vtable[])();
extern __int64 GameData_212d210[7];
extern __int64 GameData_212d218[6];
extern __int64 GameData_21c99b8;
extern __int64 GameData_21cd148;
extern __int64 GameData_21d3f90;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_sound_g_game_sound;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d000[2];
extern __int64* GameData_212d258[2];
extern char game_script_map_event_g_active_unit;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
__int64 BattleInfo_DeletingDestructor(_QWORD* a1);
__int64 BattleInfo_7902e0(__int64 a1, unsigned __int8 a2, __int64 a3, int a4);
__int64 BattleInfo_790460(__int64 result, __int64 a2);
__int64 BattleInfo_7905d0(__int64 a1, __int64 a2, int a3);
__int64 BattleInfo_790680(__int64 result, __int64 a2);
__int64 BattleInfo_790800(__int64 a1, __int64 a2, int a3, int a4);
__int64 BattleInfo_790970(__int64 a1, __int64 a2, int a3, int a4);
__int64 BattleInfo_790a40(__int64 a1, char a2, char a3);
__int64 BattleInfo_790b00(__int64 a1, __int64 a2);
__int64 BattleInfo_795920(__int64 result, _DWORD* a2, __int64 a3, __int64 a4);
_QWORD* BattleInfo_795b40(_QWORD* result, __int64 a2, _WORD* a3, __int64 a4);
__int64 BattleInfo_795fc0(__int64 a1, __int64 a2, _DWORD* a3);
__int64 BattleInfo_796a00(__int64 a1);
__int64 BattleInfo_796b00(__int64 result);
bool BattleInfo_796d90(__int64 a1, __int64 a2);
bool BattleInfo_797b50(__int64 a1);
__int64 BattleInfo_797c80(__int64 a1);
__int64 BattleInfo_797e40(__int64 a1, unsigned __int8* a2);
__int64 BattleInfo_795fc0_alt1(_QWORD, _QWORD,
                               _QWORD) __asm__("BattleInfo_795fc0");
__int64 GameRoutine_798a60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_798a60_alt1(__int64, __int64, __int64,
                                unsigned int) __asm__("GameRoutine_798a60");
__int64 game_UnitPool_Get(_QWORD);
__int64 game_map_BattleInfo_GiveSkillFromItem_lambda0_Invoke(__int64 a1,
                                                             __int64 a2);
__int64 game_map_BattleInfo_TryRelianceBind_lambda0_Invoke(__int64 a1,
                                                           __int64 a2);
__int64 game_map_BattleInfo_TryRelianceBind_lambda1_Invoke(__int64 a1,
                                                           __int64* a2);
__int64 game_map_BattleInfo_TryRelianceBind_lambda2_Invoke(__int64 a1,
                                                           __int64 a2);
__int64 game_map_BattleInfo_TryRelianceBind_lambda3_Invoke(__int64 a1,
                                                           __int64* a2);
__int64 game_map_BattleInfo_TryRelianceBind_lambda4_Invoke(__int64 a1,
                                                           __int64* a2);

__int64 BattleInfo_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_map_BattleInfo_vtable;
  a1[1412] = game_map_BattleArea_vtable;
  v2 = a1[1413];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[1413] = 0;
  }
  a1[1] = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 287);
  BattleSide_Destructor(a1 + 192);
  BattleSide_Destructor(a1 + 97);
  BattleSide_Destructor(a1 + 2);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

__int64 BattleInfo_7902e0(__int64 a1, unsigned __int8 a2, __int64 a3, int a4)
{
  __int64 v4;
  __int64 v5;
  _BYTE* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;

  v4 = a1 + 0x2000;
  LODWORD(v5) = a4;
  if (*(_BYTE*)(a1 + 11273) != 0) {
    GameRoutine_7992e0(a1 + 16);
    GameRoutine_7992e0(a1 + 776);
    GameRoutine_7992e0(a1 + 1536);
    GameRoutine_7992e0(a1 + 2296);
    *(_DWORD*)(a1 + 11256) = 0;
    *(_WORD*)(v4 + 3080) = 0;
    *(_QWORD*)(a1 + 11276) = 0;
    *(_QWORD*)(a1 + 11282) = 0;
    GameRoutine_8b9d00(a1 + 11296);
  }
  if (a3 != 0) {
    if ((v5 & 0x80000000) != 0) {
      v9 = (_BYTE*)(a3 + 847);
      v5 = 2;
      v10 = *GameData_212c878[0];
      while (1) {
        if (*(_WORD*)(v9 - 19) != 0 && (*(v9 - 16) & 1) != 0 &&
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(v9 - 19)) +
                                72LL) < 8u) {
          LODWORD(v5) = v5 - 2;
          goto LABEL_20;
        }
        if (*(_WORD*)(v9 - 11) != 0 && (*(v9 - 8) & 1) != 0 &&
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(v9 - 11)) +
                                72LL) < 8u) {
          break;
        }
        if (*(_WORD*)(v9 - 3) != 0 && (*v9 & 1) != 0 &&
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) +
                                           8LL * *(unsigned __int16*)(v9 - 3)) +
                                72LL) < 8u) {
          goto LABEL_20;
        }
        v5 += 3;
        v9 += 24;
        if (v5 == 32) {
          LODWORD(v5) = -1;
          goto LABEL_20;
        }
      }
      LODWORD(v5) = v5 - 1;
    }
  LABEL_20:
    v11 = *(char*)(a3 + 585);
    v12 = a1 + 760LL * a2;
    v13 = *(char*)(a3 + 584);
    *(_QWORD*)(v12 + 40) = a3;
    *(_DWORD*)(v12 + 88) = v13;
    *(_DWORD*)(v12 + 92) = v11;
    *(_DWORD*)(v12 + 96) = v13;
    *(_DWORD*)(v12 + 100) = v11;
    v14 = *(_DWORD*)(a3 + 592);
    *(_DWORD*)(v12 + 56) = v5;
    *(_DWORD*)(v12 + 104) = v14;
  }
  return a1;
}

__int64 BattleInfo_790460(__int64 result, __int64 a2)
{
  __int64 v2;
  _BYTE* v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;

  if (a2 != 0) {
    v2 = result + 0x2000;
    v3 = (_BYTE*)(a2 + 847);
    v4 = 2;
    v6 = *GameData_212c878[0];
    while (*(_WORD*)(v3 - 19) == 0 || (*(v3 - 16) & 1) == 0 ||
           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v6 + 64) +
                                          8LL * *(unsigned __int16*)(v3 - 19)) +
                               72LL) >= 8u) {
      if (*(_WORD*)(v3 - 11) != 0 && (*(v3 - 8) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v6 + 64) +
                                         8LL * *(unsigned __int16*)(v3 - 11)) +
                              72LL) < 8u) {
        LODWORD(v4) = v4 - 1;
        if (*(_BYTE*)(result + 11273) == 0) {
        LABEL_19:
          v8 = *(char*)(a2 + 584);
          v9 = *(char*)(a2 + 585);
          *(_QWORD*)(result + 40) = a2;
          *(_DWORD*)(result + 88) = v8;
          *(_DWORD*)(result + 92) = v9;
          *(_DWORD*)(result + 96) = v8;
          *(_DWORD*)(result + 100) = v9;
          v10 = *(_DWORD*)(a2 + 592);
          *(_DWORD*)(result + 56) = v4;
          *(_DWORD*)(result + 104) = v10;
          return result;
        }
      LABEL_18:
        v7 = result;
        GameRoutine_7992e0(result + 16);
        GameRoutine_7992e0(v7 + 776);
        GameRoutine_7992e0(v7 + 1536);
        GameRoutine_7992e0(v7 + 2296);
        *(_DWORD*)(v7 + 11256) = 0;
        *(_WORD*)(v2 + 3080) = 0;
        *(_QWORD*)(v7 + 11276) = 0;
        *(_QWORD*)(v7 + 11282) = 0;
        GameRoutine_8b9d00(v7 + 11296);
        result = v7;
        goto LABEL_19;
      }
      if (*(_WORD*)(v3 - 3) != 0 && (*v3 & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v6 + 64) +
                                         8LL * *(unsigned __int16*)(v3 - 3)) +
                              72LL) < 8u) {
        goto LABEL_17;
      }
      v4 += 3;
      v3 += 24;
      if (v4 == 32) {
        LODWORD(v4) = -1;
        if (*(_BYTE*)(result + 11273) == 0) {
          goto LABEL_19;
        }
        goto LABEL_18;
      }
    }
    LODWORD(v4) = v4 - 2;
  LABEL_17:
    if (*(_BYTE*)(result + 11273) == 0) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  return result;
}

__int64 BattleInfo_7905d0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  int v7;
  int v8;
  int v9;

  v3 = a1 + 0x2000;
  if (*(_BYTE*)(a1 + 11273) != 0) {
    GameRoutine_7992e0(a1 + 16);
    GameRoutine_7992e0(a1 + 776);
    GameRoutine_7992e0(a1 + 1536);
    GameRoutine_7992e0(a1 + 2296);
    *(_DWORD*)(a1 + 11256) = 0;
    *(_WORD*)(v3 + 3080) = 0;
    *(_QWORD*)(a1 + 11276) = 0;
    *(_QWORD*)(a1 + 11282) = 0;
    GameRoutine_8b9d00(a1 + 11296);
  }
  if (a2 != 0) {
    v7 = *(char*)(a2 + 584);
    v8 = *(char*)(a2 + 585);
    *(_QWORD*)(a1 + 40) = a2;
    *(_DWORD*)(a1 + 88) = v7;
    *(_DWORD*)(a1 + 92) = v8;
    *(_DWORD*)(a1 + 96) = v7;
    *(_DWORD*)(a1 + 100) = v8;
    v9 = *(_DWORD*)(a2 + 592);
    *(_DWORD*)(a1 + 56) = a3;
    *(_DWORD*)(a1 + 104) = v9;
  }
  return a1;
}

__int64 BattleInfo_790680(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  int v4;
  int v6;
  int v7;
  __int64 v8;
  _BYTE* v9;
  __int64 v10;

  if (a2 != 0) {
    v2 = result + 0x2000;
    v3 = *(char*)(a2 + 584);
    v4 = *(char*)(a2 + 585);
    v6 = v4;
    v7 = v3;
    if (*(_BYTE*)(result + 11273) != 0) {
      v8 = result;
      GameRoutine_7992e0(result + 16);
      GameRoutine_7992e0(v8 + 776);
      GameRoutine_7992e0(v8 + 1536);
      GameRoutine_7992e0(v8 + 2296);
      *(_DWORD*)(v8 + 11256) = 0;
      *(_WORD*)(v2 + 3080) = 0;
      *(_QWORD*)(v8 + 11276) = 0;
      *(_QWORD*)(v8 + 11282) = 0;
      GameRoutine_8b9d00(v8 + 11296);
      v7 = *(char*)(a2 + 584);
      v6 = *(char*)(a2 + 585);
      result = v8;
    }
    *(_QWORD*)(result + 800) = a2;
    *(_DWORD*)(result + 848) = v7;
    v9 = (_BYTE*)(a2 + 847);
    *(_DWORD*)(result + 852) = v6;
    *(_DWORD*)(result + 856) = v3;
    *(_DWORD*)(result + 860) = v4;
    *(_DWORD*)(result + 864) = *(_DWORD*)(a2 + 592);
    v10 = 2;
    while (1) {
      if (*(_WORD*)(v9 - 19) != 0 && (*(v9 - 16) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v9 - 19)) +
                              72LL) < 8u) {
        LODWORD(v10) = v10 - 2;
        goto LABEL_19;
      }
      if (*(_WORD*)(v9 - 11) != 0 && (*(v9 - 8) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v9 - 11)) +
                              72LL) < 8u) {
        break;
      }
      if (*(_WORD*)(v9 - 3) != 0 && (*v9 & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v9 - 3)) +
                              72LL) < 8u) {
        goto LABEL_19;
      }
      v10 += 3;
      v9 += 24;
      if (v10 == 32) {
        LODWORD(v10) = -1;
        goto LABEL_19;
      }
    }
    LODWORD(v10) = v10 - 1;
  LABEL_19:
    *(_DWORD*)(result + 816) = v10;
  }
  return result;
}

__int64 BattleInfo_790800(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4;
  int v9;
  int v10;
  _BYTE* v11;
  __int64 v12;

  v4 = a1 + 0x2000;
  if (*(_BYTE*)(a1 + 11273) != 0) {
    GameRoutine_7992e0(a1 + 16);
    GameRoutine_7992e0(a1 + 776);
    GameRoutine_7992e0(a1 + 1536);
    GameRoutine_7992e0(a1 + 2296);
    *(_DWORD*)(a1 + 11256) = 0;
    *(_WORD*)(v4 + 3080) = 0;
    *(_QWORD*)(a1 + 11276) = 0;
    *(_QWORD*)(a1 + 11282) = 0;
    GameRoutine_8b9d00(a1 + 11296);
  }
  if (a2 != 0) {
    v9 = *(char*)(a2 + 584);
    v10 = *(char*)(a2 + 585);
    *(_QWORD*)(a1 + 800) = a2;
    v11 = (_BYTE*)(a2 + 847);
    *(_DWORD*)(a1 + 856) = a3;
    *(_DWORD*)(a1 + 860) = a4;
    *(_DWORD*)(a1 + 848) = v9;
    *(_DWORD*)(a1 + 852) = v10;
    *(_DWORD*)(a1 + 864) = *(_DWORD*)(a2 + 592);
    v12 = 2;
    while (1) {
      if (*(_WORD*)(v11 - 19) != 0 && (*(v11 - 16) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v11 - 19)) +
                              72LL) < 8u) {
        LODWORD(v12) = v12 - 2;
        goto LABEL_19;
      }
      if (*(_WORD*)(v11 - 11) != 0 && (*(v11 - 8) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v11 - 11)) +
                              72LL) < 8u) {
        break;
      }
      if (*(_WORD*)(v11 - 3) != 0 && (*v11 & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v11 - 3)) +
                              72LL) < 8u) {
        goto LABEL_19;
      }
      v12 += 3;
      v11 += 24;
      if (v12 == 32) {
        LODWORD(v12) = -1;
        goto LABEL_19;
      }
    }
    LODWORD(v12) = v12 - 1;
  LABEL_19:
    *(_DWORD*)(a1 + 816) = v12;
  }
  return a1;
}

__int64 BattleInfo_790970(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4;

  v4 = a1 + 0x2000;
  if (*(_BYTE*)(a1 + 11273) != 0) {
    GameRoutine_7992e0(a1 + 16);
    GameRoutine_7992e0(a1 + 776);
    GameRoutine_7992e0(a1 + 1536);
    GameRoutine_7992e0(a1 + 2296);
    *(_DWORD*)(a1 + 11256) = 0;
    *(_WORD*)(v4 + 3080) = 0;
    *(_QWORD*)(a1 + 11276) = 0;
    *(_QWORD*)(a1 + 11282) = 0;
    GameRoutine_8b9d00(a1 + 11296);
  }
  if (a2 != 0) {
    *(_QWORD*)(a1 + 808) = a2;
    *(_DWORD*)(a1 + 848) = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 56LL))(a2);
    *(_DWORD*)(a1 + 852) = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 64LL))(a2);
    *(_DWORD*)(a1 + 856) = a3;
    *(_DWORD*)(a1 + 860) = a4;
    *(_DWORD*)(a1 + 864) = 1;
  }
  return a1;
}

__int64 BattleInfo_790a40(__int64 a1, char a2, char a3)
{
  __int64 v3;
  _BYTE v6[3];
  __int16 v7;
  char v8;
  __int16 v9;
  int v10;

  v3 = a1 + 0x2000;
  v6[0] = 0;
  v10 = 0;
  v8 = 0;
  v6[1] = a2;
  v6[2] = a3;
  v9 = -1;
  v7 = 9;
  if (*(_BYTE*)(a1 + 11273) != 0) {
    GameRoutine_7992e0(a1 + 16);
    GameRoutine_7992e0(a1 + 776);
    GameRoutine_7992e0(a1 + 1536);
    GameRoutine_7992e0(a1 + 2296);
    *(_DWORD*)(a1 + 11256) = 0;
    *(_WORD*)(v3 + 3080) = 0;
    *(_QWORD*)(a1 + 11276) = 0;
    *(_QWORD*)(a1 + 11282) = 0;
    GameRoutine_8b9d00(a1 + 11296);
  }
  GameRoutine_799880(a1 + 776, v6);
  if ((v7 & 0x100) != 0) {
    *(_DWORD*)(a1 + 11276) |= 0x1000u;
  }
  return a1;
}

__int64 BattleInfo_790b00(__int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = a1 + 0x2000;
  if (*(_BYTE*)(a1 + 11273) != 0) {
    GameRoutine_7992e0(a1 + 16);
    GameRoutine_7992e0(a1 + 776);
    GameRoutine_7992e0(a1 + 1536);
    GameRoutine_7992e0(a1 + 2296);
    *(_DWORD*)(a1 + 11256) = 0;
    *(_WORD*)(v2 + 3080) = 0;
    *(_QWORD*)(a1 + 11276) = 0;
    *(_QWORD*)(a1 + 11282) = 0;
    GameRoutine_8b9d00(a1 + 11296);
  }
  GameRoutine_799880(a1 + 776, a2);
  if ((*(_BYTE*)(a2 + 4) & 1) != 0) {
    *(_DWORD*)(a1 + 11276) |= 0x1000u;
  }
  return a1;
}

__int64 BattleInfo_795920(__int64 result, _DWORD* a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _DWORD* v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  _DWORD* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int8* v17;
  unsigned __int8* v18;
  unsigned __int8* v19;
  unsigned int v20;
  __int64 v21;
  unsigned __int8* v22;
  unsigned __int8* v23;
  __int64 v24;
  _QWORD v25[2];
  char v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;

  if ((*(_BYTE*)(result + 11276) & 0x22) != 0) {
    return result;
  }
  v29 = v4;
  v30 = v5;
  v6 = *(_QWORD*)(a3 + 24);
  v7 = result;
  if (v6 == 0 || *(_QWORD*)(v6 + 392) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a3 + 8) + 11277LL) & 0x80) != 0) {
      return result;
    }
    result = *(_QWORD*)(a3 + 32);
    if (result == 0) {
      return result;
    }
    v8 = a4;
    v9 = a2;
    v10 = a3;
    result = (**(__int64 (***)(__int64))result)(result);
    a3 = v10;
    a2 = v9;
    a4 = v8;
    if ((result & 1) == 0) {
      return result;
    }
  }
  v11 = *(_DWORD*)(a3 + 604);
  v12 = *a2;
  v23 = nullptr;
  v24 = 0;
  v22 = nullptr;
  if ((v12 & v11) != 0) {
    v13 = a4;
    v14 = a2;
    v25[0] = GameData_1fab650;
    v25[1] = &v22;
    v27 = a3;
    v28 = v25;
    v26 = 1;
    GameRoutine_7a2a60(a3, a2, 1, v25);
    result = (__int64)v28;
    if (v28 == v25) {
      v15 = 32;
    }
    else {
      if (v28 == nullptr) {
      LABEL_13:
        v12 = *v14;
        a2 = v14;
        a4 = v13;
        goto LABEL_14;
      }
      v15 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v28 + v15))((__int64)v28);
    goto LABEL_13;
  }

LABEL_14:
  if ((v12 & *(_DWORD*)(a4 + 604)) != 0) {
    v25[0] = GameData_1fab650;
    v25[1] = &v22;
    v27 = a4;
    v28 = v25;
    v26 = 2;
    GameRoutine_7a2a60(a4, a2, 2, v25);
    result = (__int64)v28;
    if (v28 == v25) {
      v16 = 32;
      goto LABEL_19;
    }
    if (v28 != nullptr) {
      v16 = 40;
    LABEL_19:
      result = (*(__int64 (**)(__int64))(*v28 + v16))((__int64)v28);
    }
  }
  v17 = v22;
  v18 = v23;
  if (v23 != v22) {
    result = GameRoutine_8e3d20(
        v22, v23, (2 * __clz(0xAAAAAAAAAAAAAAABLL * ((v23 - v22) >> 2))) ^ 0x7E,
        1);
    v17 = v22;
    v18 = v23;
  }
  if (v18 != v17) {
    v19 = v17;
    do {
      v20 = *v19;
      v19 += 12;
      result = GameRoutine_7960a0(v7, v20, v17 + 4);
      v17 = v19;
    } while (v19 != v18);
    v17 = v22;
  }
  if (v17 != nullptr) {
    v23 = v17;
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v17);
  }
  return result;
}

_QWORD* BattleInfo_795b40(_QWORD* result, __int64 a2, _WORD* a3, __int64 a4)
{
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 i;
  __int64 v22;
  _QWORD v23[4];
  _QWORD* v24;

  if (*a3 != 0) {
    v5 = result;
    v6 = GameData_212c878[0];
    v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                    8LL * (unsigned __int16)*a3);
    if (*(_BYTE*)(v7 + 73) == 4) {
      v8 = *(_QWORD*)(a2 + 24);
      if (v8 == 0) {
        return result;
      }
      result = v23;
      v23[2] = a2;
      v23[0] = GameData_1f98580;
      v23[1] = v5;
      v9 = *(_BYTE*)(v8 + 1440);
      v24 = v23;
      if (v9 < 0) {
        v10 = *(_QWORD*)(v8 + 1400);
        v11 = *(_QWORD*)(v8 + 1392);
        if ((int)((unsigned __int64)(v10 - v11) >> 2) < 1) {
          result = v23;
        }
        else {
          v12 = 0;
          v13 = 0;
          v14 = GameData_212c880[0];
          v15 = *GameData_212c880[0];
          do {
            if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v15 + 64) +
                                     8LL * (*(_DWORD*)(v11 + v12) & 0xFFF)) +
                          104LL) == 7) {
              if (v24 == nullptr) {
                GameRoutine_60a310(0, a2, a3, a4);
              }
              (*(void (**)(_QWORD*, __int64))(*v24 + 48LL))(v24, v11 + v12);
              v15 = *v14;
              v10 = *(_QWORD*)(v8 + 1400);
              v11 = *(_QWORD*)(v8 + 1392);
            }
            ++v13;
            v12 += 4;
          } while (v13 < (int)((unsigned __int64)(v10 - v11) >> 2));
          result = v24;
          if (v24 != v23) {
            if (v24 == nullptr) {
              return result;
            }
            v22 = 40;
            return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, _WORD*))(
                *result + v22))(result, a2, a3);
          }
        }
      }
      v22 = 32;
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, _WORD*))(
          *result + v22))(result, a2, a3);
    }
    v16 = *(_QWORD**)(v7 + 24);
    v17 = v16[41];
    v18 = v16[42];
    if (v17 != v18) {
      do {
        result = (_QWORD*)GameRoutine_795d20(v5, a2, v17);
        v17 += 4;
      } while (v17 != v18);
      v16 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) +
                                   8LL * (unsigned __int16)*a3) +
                        24LL);
    }
    v20 = v16[53];
    for (i = v16[54]; v20 != i; v20 += 4) {
      result = (_QWORD*)BattleInfo_795fc0(v5, a2, v20);
    }
  }
  return result;
}

__int64 BattleInfo_795fc0(__int64 a1, __int64 a2, _DWORD* a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  unsigned __int8* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8 v13;
  unsigned __int8 v14;
  char v15;
  char v16;

  result = game_HasSkill(a2 + 520, a3);
  if ((result & 1) != 0) {
    if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8LL * (*a3 & 0xFFF)) +
                  288LL) != 0) {
      v7 = *(_QWORD*)(a1 + 11264);
      v8 = a1 + 3056;
      v9 = &v13;
      v10 = &v16;
      v13 = *(_BYTE*)(a2 + 16);
      v11 = 15;
      v16 = *(_BYTE*)(v7 + 760LL * v13 + 33);
    }
    else {
      GameRoutine_7a1f40(a2, a3);
      v12 = *(_QWORD*)(a1 + 11264);
      v8 = a1 + 3056;
      v9 = &v14;
      v10 = &v15;
      v14 = *(_BYTE*)(a2 + 16);
      v11 = 17;
      v15 = *(_BYTE*)(v12 + 760LL * v14 + 33);
    }
    result = GameRoutine_7a7840(v8, v11, v9, v10);
    *(_DWORD*)(result + 8) = *a3;
  }
  return result;
}

__int64 BattleInfo_796a00(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  char v6;
  int v7;
  int v8;

  v1 = a1 + 16;
  GameRoutine_79eba0(a1 + 16);
  result = GameRoutine_79eba0(a1 + 776);
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 11276LL) & 1) == 0 &&
          (*(_BYTE*)(a1 + 140) & 1) != 0 ||
      (*(_BYTE*)(*(_QWORD*)(a1 + 784) + 11276LL) & 1) == 0 &&
          (v1 = a1 + 776, (*(_BYTE*)(a1 + 900) & 1) != 0)) {
    if (*(_BYTE*)(*(_QWORD*)(v1 + 8) + 760LL * *(unsigned __int8*)(v1 + 17) +
                  32) != 4) {
      v4 = *(_QWORD*)(a1 +
                      760LL *
                          *(unsigned __int8*)(*(_QWORD*)(v1 + 8) +
                                              760LL *
                                                  *(unsigned __int8*)(v1 + 17) +
                                              32) +
                      40);
      if (v4 != 0) {
        v5 = *(_QWORD*)(v4 + 440);
        v6 = v5 != 0 ? *(_BYTE*)(v5 + 16) : 9;
        if (((1 << v6) & 0xF1) != 0) {
          result = *(_QWORD*)(v1 + 24);
          if (result != 0) {
            v7 = *(unsigned __int16*)(v4 + 2096);
            result = GameRoutine_1211e40();
            v8 = (result + v7) & ~(((int)result + v7) >> 31);
            if (v8 >= 10000) {
              LOWORD(v8) = 10000;
            }
            *(_WORD*)(v4 + 2096) = v8;
          }
        }
      }
    }
  }
  return result;
}

__int64 BattleInfo_796b00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if ((*(_BYTE*)(result + 11273) & 2) == 0) {
    v1 = *(unsigned int*)(result + 11256);
    v2 = result;
    *(_BYTE*)(result + 11273) |= 2u;
    if ((_DWORD)v1 != 0) {
      v3 = result + 3064;
      do {
        GameRoutine_79e950(v2 + 16, v3);
        GameRoutine_79e950(v2 + 776, v3);
        GameRoutine_79e950(v2 + 1536, v3);
        GameRoutine_79e950(v2 + 2296, v3);
        --v1;
        v3 += 64;
      } while (v1 != 0);
    }
    GameRoutine_796720(v2);
    v4 = *(_QWORD*)(v2 + 40);
    if (v4 != 0) {
      game_Unit_CheckEquipment(v4);
    }
    v5 = *(_QWORD*)(v2 + 800);
    if (v5 != 0) {
      game_Unit_CheckEquipment(v5);
    }
    return BattleInfo_796a00(v2);
  }
  return result;
}

bool BattleInfo_796d90(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  char v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if ((*(_BYTE*)(a1 + 11273) & 4) != 0) {
    return false;
  }
  v2 = *(_QWORD*)(a1 + 40);
  v3 = *(_QWORD*)(a1 + 800);
  *(_BYTE*)(a1 + 11273) |= 4u;
  if (*(_BYTE*)(a1 + 11272) != 3) {
    if (v2 != 0) {
      v5 = *(_QWORD*)(v2 + 440);
      if (v5 != 0) {
        v6 = *(_BYTE*)(v5 + 16);
        if (v3 != 0) {
          goto LABEL_6;
        }
      LABEL_9:
        v8 = 10;
        goto LABEL_13;
      }
      v6 = 9;
      if (v3 == 0) {
        goto LABEL_9;
      }
    }
    else {
      v6 = 10;
      if (v3 == 0) {
        goto LABEL_9;
      }
    }
  LABEL_6:
    v7 = *(_QWORD*)(v3 + 440);
    if (v7 != 0) {
      v8 = *(_BYTE*)(v7 + 16);
    }
    else {
      v8 = 9;
    }
  LABEL_13:
    if ((((1 << v6) & 0xF1) != 0 || ((1 << v8) & 0xF1) != 0) &&
        (GameRoutine_810fc0(v2, v3) & 1) != 0 && game_sound_g_game_sound != 0) {
      GameRoutine_a28e10(game_sound_g_game_sound, 0);
    }
  }
  if (GameData_21cd148 != 0) {
    if (v2 != 0) {
      v9 = *(unsigned __int16*)(*(_QWORD*)(v2 + 392) + 16LL);
      v10 = *(_QWORD*)(v2 + 440);
      if (v10 != 0) {
        v11 = *(unsigned __int8*)(v10 + 16);
        if (v3 != 0) {
          goto LABEL_22;
        }
      LABEL_25:
        v12 = 0xFFFFFFFFLL;
        v14 = 0xFFFFFFFFLL;
        goto LABEL_29;
      }
      v11 = 9;
      if (v3 == 0) {
        goto LABEL_25;
      }
    }
    else {
      v9 = 0xFFFFFFFFLL;
      v11 = 0xFFFFFFFFLL;
      if (v3 == 0) {
        goto LABEL_25;
      }
    }
  LABEL_22:
    v12 = *(unsigned __int16*)(*(_QWORD*)(v3 + 392) + 16LL);
    v13 = *(_QWORD*)(v3 + 440);
    if (v13 != 0) {
      v14 = *(unsigned __int8*)(v13 + 16);
    }
    else {
      v14 = 9;
    }
  LABEL_29:
    if ((GameRoutine_c8b5a0(a2, 24, v2, v9, v11, v12, v14) & 1) != 0) {
      return true;
    }
  }
  return GameData_21d3f90 != 0 &&
         (GameRoutine_eacc20(a2, 10, 0xFFFFFFFFLL, 0xFFFFFFFFLL) & 1) != 0;
}

bool BattleInfo_797b50(__int64 a1)
{
  __int64 v1;
  __int64 (***v3)(_QWORD);
  __int64 v4;
  __int64 (***v5)(_QWORD);
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;

  v1 = *(_QWORD*)(a1 + 40);
  if (v1 == 0 || *(_QWORD*)(v1 + 392) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 11277LL) & 0x80) != 0) {
      return false;
    }
    v3 = *(__int64 (****)(_QWORD))(a1 + 48);
    if (v3 == nullptr || ((**v3)(v3) & 1) == 0) {
      return false;
    }
  }
  v4 = *(_QWORD*)(a1 + 800);
  if (v4 == 0 || *(_QWORD*)(v4 + 392) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 784) + 11277LL) & 0x80) != 0) {
      return false;
    }
    v5 = *(__int64 (****)(_QWORD))(a1 + 808);
    if (v5 == nullptr || ((**v5)(v5) & 1) == 0) {
      return false;
    }
  }
  v6 = *(_QWORD*)(a1 + 40);
  if (v6 != 0 && (v7 = *(_QWORD*)(v6 + 440)) != 0) {
    v8 = *(unsigned __int8*)(v7 + 16);
    v9 = *(_QWORD*)(a1 + 800);
    if (v9 == 0) {
      goto LABEL_19;
    }
  }
  else {
    v8 = 9;
    v9 = *(_QWORD*)(a1 + 800);
    if (v9 == 0) {
      goto LABEL_19;
    }
  }
  v10 = *(_QWORD*)(v9 + 440);
  if (v10 != 0) {
    v11 = *(unsigned __int8*)(v10 + 16);
    if (v8 == v11) {
      return false;
    }
    goto LABEL_20;
  }

LABEL_19:
  v11 = 9;
  if (v8 == 9) {
    return false;
  }

LABEL_20:
  if (v8 != 0) {
    if (v8 == 3 && v11 == 0) {
      return false;
    }
  }
  else if (v11 == 3) {
    return false;
  }
  return (*(_BYTE*)(a1 + 11276) & 2) == 0;
}

__int64 BattleInfo_797c80(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  char v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  char v12;
  char v13;
  __int64 v14;
  _QWORD v15[2];
  _QWORD v16[2];
  __int64 v17;

  if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 11276LL) & 1) != 0 ||
      (*(_BYTE*)(a1 + 140) & 1) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 784) + 11276LL) & 1) != 0 ||
        (*(_BYTE*)(a1 + 900) & 1) == 0) {
      return 0;
    }
    v1 = 776;
  }
  else {
    v1 = 16;
  }
  v2 = *(_QWORD*)(a1 + v1 + 24);
  if (v2 == 0 || *(_BYTE*)(v2 + 496) != 0) {
    return 0;
  }
  v4 = *GameData_212d000[0];
  if (*GameData_212d000[0] != 0) {
    v5 = *(_QWORD*)(v2 + 440);
    if (v5 != 0) {
      v6 = *(unsigned __int8*)(v5 + 16);
    }
    else {
      v6 = 9;
    }
    v7 = *(unsigned __int16*)(*(_QWORD*)(v2 + 392) + 16LL);
    v8 = game_script_map_event_g_active_unit;
    game_script_map_event_g_active_unit = *(_BYTE*)(v2 + 2088);
    v9 = *(_QWORD**)(v4 + 424);
    if (*(_QWORD**)(v4 + 432) == v9) {
      goto LABEL_21;
    }
    while (((*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
                *(_QWORD*)*v9 + 56LL))(*v9, v7, v6, 0, 0) &
            1) == 0) {
      if (++v9 == *(_QWORD**)(v4 + 432)) {
        goto LABEL_21;
      }
    }
    if (*v9 == 0) {
    LABEL_21:
      game_script_map_event_g_active_unit = v8;
    }
    else {
      v10 = __dynamic_cast(*v9, GameData_212d210[0], GameData_212d218[0], 0);
      game_script_map_event_g_active_unit = v8;
      if (v10 != 0) {
        return 1;
      }
    }
  }
  if ((GameRoutine_ec0f80(v2) & 1) == 0) {
    v11 = *(_QWORD*)(v2 + 392);
    v16[1] = 0;
    v17 = 0;
    v15[0] = v2;
    v15[1] = v11;
    v16[0] = 0;
    v12 = GameRoutine_97e390(v16, v15);
    if ((v16[0] & 1) != 0 && v17 != 0) {
      v13 = v12;
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v17);
      v12 = v13;
    }
    if ((v12 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}

__int64 BattleInfo_797e40(__int64 a1, unsigned __int8* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  unsigned int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  unsigned int* v15;
  unsigned __int64 v16;
  int v17;
  unsigned __int64 v19;
  __int64 v20;
  int v21;
  __int64 v23;
  unsigned int v24;
  int v25;

  v2 = *(unsigned int*)(a1 + 11256);
  if ((_DWORD)v2 == 0) {
    return 0;
  }
  v3 = *a2;
  v4 = a1 + 3064;
  v5 = (unsigned int*)(a1 + 3072);
  v6 = 0;
  v7 = *GameData_212c880[0];
  while (1) {
    v8 = v4 + (v6 << 6);
    if (*(unsigned __int8*)(v8 + 2) != v3) {
      goto LABEL_4;
    }
    v9 = *(unsigned __int8*)(v8 + 4);
    if ((unsigned int)(v9 - 3) < 2) {
      break;
    }
    if (v9 != 8 || (*(_DWORD*)(v8 + 8) & 0xFFF) == 0) {
      goto LABEL_4;
    }
    v20 = *(_QWORD*)(*(_QWORD*)(v7 + 64) + 8LL * (*(_DWORD*)(v8 + 8) & 0xFFF));
    if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v20 + 104)) &
         1) == 0) {
      return 1;
    }
    v21 = *(unsigned __int8*)(v20 + 106);
    if (*(_BYTE*)(v20 + 106) == 0 || v21 == 6) {
      v23 = *(_QWORD*)(v20 + 576);
      if (v23 == 0) {
        return 1;
      }
    }
    else {
      if (v21 != 1) {
        return 1;
      }
      v23 = *(_QWORD*)(v20 + 576);
      if (v23 == 0) {
        goto LABEL_4;
      }
    }
    v24 = *(unsigned __int8*)(v23 + 72);
    v25 = *(unsigned __int8*)(v23 + 73);
    if (v24 > 7 || v25 != 1) {
      return 1;
    }
  LABEL_4:
    if (++v6 == v2) {
      return 0;
    }
  }
  if ((*(_BYTE*)(v8 + 12) & 2) == 0) {
    goto LABEL_4;
  }
  v10 = *(unsigned __int8*)(v8 + 3);
  if (*(_WORD*)(v8 + 12LL * *(unsigned __int8*)(v8 + 3) + 18) != 0) {
    return 1;
  }
  v11 = *(_DWORD*)(v8 + 8) & 0xFFF;
  if ((_DWORD)v11 == 0 ||
      (v12 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)(v7 + 64) + 8 * v11) +
                         24LL))[56] == v12[57]) {
    if (v9 == 4) {
      return 1;
    }
    goto LABEL_4;
  }
  v13 = v12[52];
  v14 = v2;
  v15 = v5;
  v16 = (v12[53] - v13) >> 2;
  while (1) {
    if (*((unsigned __int8*)v15 - 6) == v10) {
      v17 = *((unsigned __int8*)v15 - 4);
      if (v17 == 16 || v17 == 14) {
        v19 = *v15;
        if (v16 >= ((v19 >> 5) & 0x7F) + 1 &&
            ((*(_DWORD*)(v13 + 4 * ((v19 >> 5) & 0x7F)) >> v19) & 1) != 0) {
          return 1;
        }
      }
    }
    --v14;
    v15 += 16;
    if (v14 == 0) {
      goto LABEL_4;
    }
  }
}

__int64 game_map_BattleInfo_GiveSkillFromItem_lambda0_Invoke(__int64 a1,
                                                             __int64 a2)
{
  return BattleInfo_795fc0_alt1(*(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16), a2);
}

__int64 game_map_BattleInfo_TryRelianceBind_lambda0_Invoke(__int64 a1,
                                                           __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 result;

  v3 = **(_QWORD**)(a1 + 16);
  v4 = **(_QWORD**)(a1 + 24);
  v6 = *(unsigned __int8*)(a2 + 5);
  v5 = a2 + 5;
  if (v6 != 0) {
    v7 = game_UnitPool_Get(v5);
  }
  else {
    v7 = 0;
  }
  result = GameRoutine_798a60(
      v3, v4, v7, *(unsigned __int8*)(**(_QWORD**)(a1 + 32) + 277LL));
  **(_BYTE**)(a1 + 8) |= result & 1;
  return result;
}

__int64 game_map_BattleInfo_TryRelianceBind_lambda1_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 result;

  result = GameRoutine_798a60_alt1(
      **(_QWORD**)(a1 + 16), **(_QWORD**)(a1 + 24), *a2,
      *(unsigned __int8*)(**(_QWORD**)(a1 + 32) + 277LL));
  **(_BYTE**)(a1 + 8) |= result & 1;
  return result;
}

__int64 game_map_BattleInfo_TryRelianceBind_lambda2_Invoke(__int64 a1,
                                                           __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 result;

  v3 = **(_QWORD**)(a1 + 16);
  v4 = **(_QWORD**)(a1 + 24);
  v6 = *(unsigned __int8*)(a2 + 5);
  v5 = a2 + 5;
  if (v6 != 0) {
    v7 = game_UnitPool_Get(v5);
  }
  else {
    v7 = 0;
  }
  result = GameRoutine_798a60_alt1(
      v3, v4, v7,
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * **(unsigned __int16**)(a1 + 32)) +
                          91LL));
  **(_BYTE**)(a1 + 8) |= result & 1;
  return result;
}

__int64 game_map_BattleInfo_TryRelianceBind_lambda3_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 result;

  result = GameRoutine_798a60_alt1(
      **(_QWORD**)(a1 + 16), **(_QWORD**)(a1 + 24), *a2,
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * **(unsigned __int16**)(a1 + 32)) +
                          91LL));
  **(_BYTE**)(a1 + 8) |= result & 1;
  return result;
}

__int64 game_map_BattleInfo_TryRelianceBind_lambda4_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 result;

  result = GameRoutine_798a60_alt1(
      **(_QWORD**)(a1 + 16), **(_QWORD**)(a1 + 24), *a2,
      *(unsigned __int8*)(**(_QWORD**)(a1 + 32) + 91LL));
  **(_BYTE**)(a1 + 8) |= result & 1;
  return result;
}

#pragma GCC visibility pop
