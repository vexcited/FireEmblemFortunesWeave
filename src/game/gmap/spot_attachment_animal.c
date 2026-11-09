#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13261c0(_QWORD);
__int64 GameRoutine_1347cc0(_QWORD, _QWORD);
__int64 GameRoutine_14d3b40();
__int64 GameRoutine_14d3c10();
__int64 GameRoutine_14d3ca0();
__int64 GameRoutine_14d3e20();
__int64 GameRoutine_14d3e30();
__int64 GameRoutine_14d3e60();
__int64 GameRoutine_14d3f10();
__int64 GameRoutine_14d3f50();
__int64 GameRoutine_14d3ff0();
__int64 GameRoutine_14d40f0();
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65f240(_QWORD, _QWORD);
__int64 TroopMgr_13485a0(void);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strchr(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_2252030;
extern __int128 GameData_21c9610;
extern __int128 GameData_21c9630;
extern __int64 (*game_gmap_anonymous_ProcAnimalSeq_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_21c99c8;
extern __int64 GameData_2251af8;
extern __int64 GameData_2251b00;
extern __int64 GameData_2251b08;
extern __int64 GameData_2251b18;
extern __int64 GameData_2251b28;
extern __int64 GameData_2251b38;
extern __int64 GameData_2251b40;
extern __int64 GameData_2251b48;
extern __int64 GameData_2251b58;
extern __int64 GameData_2251b68;
extern __int64 GameData_2251b78;
extern __int64 GameData_2251b80;
extern __int64 GameData_2251b88;
extern __int64 GameData_2251b98;
extern __int64 GameData_2251ba8;
extern __int64 GameData_2251bb8;
extern __int64 GameData_2251bc0;
extern __int64 GameData_2251bc8;
extern __int64 GameData_2251bd8;
extern __int64 GameData_2251be8;
extern __int64 GameData_2251bf8;
extern __int64 GameData_2251c00;
extern __int64 GameData_2251c08;
extern __int64 GameData_2251c18;
extern __int64 GameData_2251c28;
extern __int64 GameData_2251c38;
extern __int64 GameData_2251c40;
extern __int64 GameData_2251c48;
extern __int64 GameData_2251c58;
extern __int64 GameData_2251c68;
extern __int64 GameData_2251c78;
extern __int64 GameData_2251c80;
extern __int64 GameData_2251c88;
extern __int64 GameData_2251c98;
extern __int64 GameData_2251ca8;
extern __int64 GameData_2251cb8;
extern __int64 GameData_2251cc0;
extern __int64 GameData_2251cc8;
extern __int64 GameData_2251cd8;
extern __int64 GameData_2251ce8;
extern __int64 GameData_2251cf8;
extern __int64 GameData_2251d00;
extern __int64 GameData_2251d08;
extern __int64 GameData_2251d18;
extern __int64 GameData_2251d28;
extern __int64 GameData_2251d38;
extern __int64 GameData_2251d40;
extern __int64 GameData_2251d48;
extern __int64 GameData_2251d58;
extern __int64 GameData_2251d68;
extern __int64 GameData_2251d78;
extern __int64 GameData_2251d80;
extern __int64 GameData_2251d88;
extern __int64 GameData_2251d98;
extern __int64 GameData_2251da8;
extern __int64 GameData_2251db8;
extern __int64 GameData_2251dc0;
extern __int64 GameData_2251dc8;
extern __int64 GameData_2251dd8;
extern __int64 GameData_2251de8;
extern __int64 GameData_2251df8;
extern __int64 GameData_2251e00;
extern __int64 GameData_2251e08;
extern __int64 GameData_2251e18;
extern __int64 GameData_2251e28;
extern __int64 GameData_2251e38;
extern __int64 GameData_2251e40;
extern __int64 GameData_2251e48;
extern __int64 GameData_2251e58;
extern __int64 GameData_2251e68;
extern __int64 GameData_2251e78;
extern __int64 GameData_2251e80;
extern __int64 GameData_2251e88;
extern __int64 GameData_2251e98;
extern __int64 GameData_2251ea8;
extern __int64 GameData_2251eb8;
extern __int64 GameData_2251ec0;
extern __int64 GameData_2251ec8;
extern __int64 GameData_2251ed8;
extern __int64 GameData_2251ee8;
extern __int64 GameData_2251ef8;
extern __int64 GameData_2251f00;
extern __int64 GameData_2251f08;
extern __int64 GameData_2251f18;
extern __int64 GameData_2251f28;
extern __int64 GameData_2251f38;
extern __int64 GameData_2251f40;
extern __int64 GameData_2251f48;
extern __int64 GameData_2251f58;
extern __int64 GameData_2251f68;
extern __int64 GameData_2251f78;
extern __int64 GameData_2251f80;
extern __int64 GameData_2251f88;
extern __int64 GameData_2251f98;
extern __int64 GameData_2251fa8;
extern __int64 GameData_2251fb8;
extern __int64 GameData_2251fc0;
extern __int64 GameData_2251fc8;
extern __int64 GameData_2251fd8;
extern __int64 GameData_2251fe8;
extern __int64 GameData_2251ff8;
extern __int64 GameData_2252000;
extern __int64 GameData_2252008;
extern __int64 GameData_2252018;
extern __int64 GameData_2252028;
extern __int64 GameData_2252038;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c790;
extern char GameData_2251af0;
extern char GameData_2251b30;
extern char GameData_2251b70;
extern char GameData_2251bb0;
extern char GameData_2251bf0;
extern char GameData_2251c30;
extern char GameData_2251c70;
extern char GameData_2251cb0;
extern char GameData_2251cf0;
extern char GameData_2251d30;
extern char GameData_2251d70;
extern char GameData_2251db0;
extern char GameData_2251df0;
extern char GameData_2251e30;
extern char GameData_2251e70;
extern char GameData_2251eb0;
extern char GameData_2251ef0;
extern char GameData_2251f30;
extern char GameData_2251f70;
extern char GameData_2251fb0;
extern char GameData_2251ff0;
extern int GameData_2251b10;
extern int GameData_2251b20;
extern int GameData_2251b50;
extern int GameData_2251b60;
extern int GameData_2251b90;
extern int GameData_2251ba0;
extern int GameData_2251bd0;
extern int GameData_2251be0;
extern int GameData_2251c10;
extern int GameData_2251c20;
extern int GameData_2251c50;
extern int GameData_2251c60;
extern int GameData_2251c90;
extern int GameData_2251ca0;
extern int GameData_2251cd0;
extern int GameData_2251ce0;
extern int GameData_2251d10;
extern int GameData_2251d20;
extern int GameData_2251d50;
extern int GameData_2251d60;
extern int GameData_2251d90;
extern int GameData_2251da0;
extern int GameData_2251dd0;
extern int GameData_2251de0;
extern int GameData_2251e10;
extern int GameData_2251e20;
extern int GameData_2251e50;
extern int GameData_2251e60;
extern int GameData_2251e90;
extern int GameData_2251ea0;
extern int GameData_2251ed0;
extern int GameData_2251ee0;
extern int GameData_2251f10;
extern int GameData_2251f20;
extern int GameData_2251f50;
extern int GameData_2251f60;
extern int GameData_2251f90;
extern int GameData_2251fa0;
extern int GameData_2251fd0;
extern int GameData_2251fe0;
extern int GameData_2252010;
extern int GameData_2252020;
float GameRoutine_14d2c20(__int64);
__int64 SpotAttachmentAnimal_Unknown35(__int64 a1);
__int64 SpotAttachmentAnimal_14d2d00(__int64 a1);
__int64 SpotAttachmentAnimal_Unknown11(__int64 a1, __int64 a2);
__int64 SpotAttachmentAnimal_Unknown36(__int64 a1, __int64 a2);
float SpotAttachmentAnimal_Unknown38(__int64 a1);

__int64 SpotAttachmentAnimal_Unknown35(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 result;
  __int64 v10;
  __int64 v11;

  v1 = *(_QWORD*)(a1 + 32);
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_QWORD**)(v3 + 8);
  v5 = *(_QWORD**)(v3 + 16);
  while (v4 != v5) {
    v6 = (_QWORD*)*v4;
    if (*(_QWORD*)*v4 == v1 && v6[12] == 0) {
      v7 = v6[69];
      if (v7 != 0 && v6[13] == 0 &&
          *((__int16*)v6 + 321) * *((__int16*)v6 + 320) *
                  *((__int16*)v6 + 322) ==
              0 &&
          *(_QWORD*)(v7 + 352) != 0) {
        TroopMgr_13485a0();
        v1 = *(_QWORD*)(a1 + 32);
        break;
      }
    }
    ++v4;
  }
  result = GameRoutine_13261c0(v1);
  if ((unsigned __int8)result == 6 && *(_QWORD*)(v1 + 152) != 0) {
    v10 = *(_QWORD*)(a1 + 32);
    result = GameRoutine_13261c0(v10);
    v11 = *(_QWORD*)(v10 + 152);
    *(_DWORD*)(v11 + 64) = 0;
    *(_QWORD*)(v11 + 72) = 0;
    *(_QWORD*)(v11 + 80) = 0;
  }
  return result;
}

__int64 SpotAttachmentAnimal_14d2d00(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v21;
  _BYTE v22[11];
  char v23;
  __int64 v24;
  _QWORD v25[2];
  char* v26;

  v1 = *(_QWORD*)(a1 + 8);
  v23 = 0;
  v21 = 22;
  *(_DWORD*)&v22[7] = 1604946407;
  *(_QWORD*)v22 = 0xE7958BE55F444950LL;
  if (v1 != 0) {
    v2 = strchr(v1, 95);
    if (v2 != 0) {
      v1 = v2 + 1;
    }
  }
  v3 = strlen(v1);
  v4 = (_QWORD*)GameRoutine_1a09ce0(&v21, v1, v3);
  v6 = v4[1];
  v5 = (char*)v4[2];
  v25[0] = *v4;
  v25[1] = v6;
  v26 = v5;
  v4[1] = 0;
  v4[2] = 0;
  *v4 = 0;
  if ((v21 & 1) != 0 && v24 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                  v24);
  }
  if ((v25[0] & 1) != 0) {
    v8 = v26;
  }
  else {
    v8 = (char*)v25 + 1;
  }
  v9 = game_HashString(v8);
  if (v9 == 0) {
    goto LABEL_36;
  }
  v10 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v10 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_36;
  }
  v12 = v10 - 1;
  if ((v10 & (v10 - 1)) != 0) {
    v13 = v9;
    if (v9 >= v10) {
      v13 = v9 % v10;
    }
  }
  else {
    v13 = v12 & v9;
  }
  v14 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v13);
  if (v14 != nullptr && (v15 = (_QWORD*)*v14) != nullptr) {
    if ((v10 & v12) == 0) {
      while (1) {
        v18 = v15[1];
        if (v18 == v9) {
          if (v15[2] == v9) {
            goto LABEL_45;
          }
        }
        else if ((v18 & v12) != v13) {
          goto LABEL_36;
        }
        v15 = (_QWORD*)*v15;
        v17 = 0;
        if (v15 == nullptr) {
          goto LABEL_39;
        }
      }
    }
    do {
      v16 = v15[1];
      if (v16 == v9) {
        if (v15[2] == v9) {
        LABEL_45:
          v17 = v15[3];
          if ((v25[0] & 1) != 0) {
            goto LABEL_40;
          }
          return v17;
        }
      }
      else {
        if (v16 >= v10) {
          v16 %= v10;
        }
        if (v16 != v13) {
          goto LABEL_36;
        }
      }
      v15 = (_QWORD*)*v15;
    } while (v15 != nullptr);
    v17 = 0;
  LABEL_39:
    if ((v25[0] & 1) == 0) {
      return v17;
    }
  }
  else {
  LABEL_36:
    v17 = 0;
    if ((v25[0] & 1) == 0) {
      return v17;
    }
  }

LABEL_40:
  if (v26 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19,
                                  v26);
  }
  return v17;
}

__int64 SpotAttachmentAnimal_Unknown11(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 result;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  char* v10;
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *(_QWORD*)(a1 + 32);
  result = GameRoutine_13261c0(v2);
  v6 = *(_QWORD*)(v2 + 152);
  if ((unsigned __int8)result != 6 || v6 == 0) {
    return result;
  }
  v8 = *(_QWORD*)(a1 + 48);
  if (v8 == 0) {
    goto LABEL_14;
  }
  v9 = *(_QWORD*)(*GameData_212c790 + 8);
  v10 = *(char**)(v9 + 8);
  v11 = *(char**)(v9 + 16);
  if (v10 == v11) {
    goto LABEL_14;
  }
  v12 = v11 - v10 - 8;
  if ((~(_BYTE)v12 & 0x18) != 0) {
    v13 = ((unsigned __int8)((unsigned int)v12 >> 3) + 1) & 3;
    do {
      v14 = *(_QWORD*)v10;
      v10 += 8;
      if (v8 == v14) {
        goto LABEL_15;
      }
    } while (--v13 != 0);
  }
  if (v12 >= 0x18) {
    while (v8 != *(_QWORD*)v10 && v8 != *((_QWORD*)v10 + 1) &&
           v8 != *((_QWORD*)v10 + 2) && v8 != *((_QWORD*)v10 + 3)) {
      v10 += 32;
      if (v10 == v11) {
        goto LABEL_14;
      }
    }
  }
  else {
  LABEL_14:
    GameRoutine_14d2c20(a1);
    v8 = *(_QWORD*)(a1 + 48);
  }

LABEL_15:
  v15 = *(_QWORD*)(a1 + 32);
  *(_BYTE*)(a1 + 40) = 1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2252030,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2252030) != 0) {
    GameData_2251b38 = 0;
    GameData_2251b40 = (__int64)GameRoutine_14d3b40;
    GameData_2251c78 = 0;
    GameData_2251c80 = (__int64)GameRoutine_14d3e30;
    GameData_2251dc0 = (__int64)GameRoutine_14d3e30;
    GameData_2251af8 = 0;
    GameData_2251b00 = 0;
    GameData_2251b08 = 0;
    GameData_2251d50 = 3;
    GameData_2251af0 = 2;
    GameData_2251b10 = 1;
    GameData_2251b78 = 0;
    GameData_2251b80 = (__int64)GameRoutine_14d3c10;
    GameData_2251bf0 = 2;
    GameData_2251c10 = 2;
    GameData_2251d30 = 2;
    GameData_2251d80 = (__int64)GameRoutine_14d3f10;
    GameData_2251e00 = (__int64)GameRoutine_14d3f50;
    GameData_2251bb8 = 0;
    GameData_2251bc0 = (__int64)GameRoutine_14d3ca0;
    GameData_2251e70 = 2;
    GameData_2251ec0 = (__int64)GameRoutine_14d3f50;
    GameData_2251f70 = 2;
    GameData_2251b18 = 0;
    GameData_2251b20 = 0;
    GameData_2251c38 = 0;
    GameData_2251c40 = (__int64)GameRoutine_14d3e20;
    GameData_2251b28 = 0;
    GameData_2251b30 = 13;
    GameData_2251b48 = 0;
    GameData_2251b50 = 0;
    GameData_2251b58 = 0;
    GameData_2251b60 = 0;
    GameData_2251b68 = 0;
    GameData_2251b70 = 13;
    GameData_2251b88 = 0;
    GameData_2251cb8 = 0;
    GameData_2251cc0 = (__int64)GameRoutine_14d3e60;
    GameData_2251b90 = 0;
    GameData_2251b98 = 0;
    GameData_2251ba0 = 0;
    GameData_2251ba8 = 0;
    GameData_2251bb0 = 13;
    GameData_2251bc8 = 0;
    GameData_2251bd0 = 0;
    GameData_2251bd8 = 0;
    GameData_2251be0 = 0;
    GameData_2251be8 = 0;
    GameData_2251c00 = 0;
    GameData_2251c08 = 0;
    GameData_2251bf8 = 0;
    GameData_2251c18 = 0;
    GameData_2251c20 = 0;
    GameData_2251c28 = 0;
    GameData_2251c30 = 13;
    GameData_2251c48 = 0;
    GameData_2251c50 = 0;
    GameData_2251c58 = 0;
    GameData_2251c60 = 0;
    GameData_2251c68 = 0;
    GameData_2251c70 = 13;
    GameData_2251c88 = 0;
    GameData_2251c90 = 0;
    GameData_2251c98 = 0;
    GameData_2251ca0 = 0;
    GameData_2251ca8 = 0;
    GameData_2251cb0 = 13;
    GameData_2251cc8 = 0;
    GameData_2251cd0 = 0;
    GameData_2251cd8 = 0;
    GameData_2251ce0 = 0;
    GameData_2251ce8 = 0;
    GameData_2251cf0 = 12;
    GameData_2251d08 = 0;
    GameData_2251d00 = 0;
    GameData_2251cf8 = 0;
    GameData_2251d10 = 5;
    GameData_2251d18 = 0;
    GameData_2251d20 = 0;
    GameData_2251d28 = 0;
    GameData_2251d38 = 0;
    GameData_2251d40 = 0;
    GameData_2251d48 = 0;
    GameData_2251d58 = 0;
    GameData_2251d60 = 0;
    GameData_2251d68 = 0;
    GameData_2251d70 = 13;
    GameData_2251d78 = 0;
    GameData_2251d88 = 0;
    GameData_2251d90 = 0;
    GameData_2251d98 = 0;
    GameData_2251da0 = 0;
    GameData_2251da8 = 0;
    GameData_2251db0 = 13;
    GameData_2251db8 = 0;
    GameData_2251dc8 = 0;
    GameData_2251dd0 = 0;
    GameData_2251dd8 = 0;
    GameData_2251de0 = 0;
    GameData_2251de8 = 0;
    GameData_2251df0 = 13;
    GameData_2251df8 = 0;
    GameData_2251e08 = 0;
    GameData_2251e10 = 0;
    GameData_2251e18 = 0;
    GameData_2251e20 = 0;
    GameData_2251e28 = 0;
    GameData_2251e30 = 12;
    GameData_2251e48 = 0;
    GameData_2251e40 = 0;
    GameData_2251e38 = 0;
    GameData_2251e50 = 5;
    GameData_2251e58 = 0;
    GameData_2251e60 = 0;
    GameData_2251e68 = 0;
    GameData_2251e78 = 0;
    GameData_2251e80 = 0;
    GameData_2251e88 = 0;
    GameData_2251e90 = 4;
    GameData_2251e98 = 0;
    GameData_2251ea0 = 0;
    GameData_2251ea8 = 0;
    GameData_2251eb0 = 13;
    GameData_2251eb8 = 0;
    GameData_2251ec8 = 0;
    GameData_2251ed0 = 0;
    GameData_2251ed8 = 0;
    GameData_2251ee0 = 0;
    GameData_2251ee8 = 0;
    GameData_2251ef0 = 13;
    GameData_2251ef8 = 0;
    GameData_2251f00 = (__int64)GameRoutine_14d3ff0;
    GameData_2251f08 = 0;
    GameData_2251f10 = 0;
    GameData_2251f18 = 0;
    GameData_2251f20 = 0;
    GameData_2251f28 = 0;
    GameData_2251f30 = 12;
    GameData_2251f48 = 0;
    GameData_2251f40 = 0;
    GameData_2251f38 = 0;
    GameData_2251f50 = 5;
    GameData_2251f58 = 0;
    GameData_2251f60 = 0;
    GameData_2251f68 = 0;
    GameData_2251f78 = 0;
    GameData_2251f80 = 0;
    GameData_2251f88 = 0;
    GameData_2251f90 = 5;
    GameData_2251f98 = 0;
    GameData_2251fa0 = 0;
    GameData_2251fa8 = 0;
    GameData_2251fb0 = 13;
    GameData_2251fb8 = 0;
    GameData_2251fc0 = (__int64)GameRoutine_14d40f0;
    GameData_2251fc8 = 0;
    GameData_2251fd0 = 0;
    GameData_2251fd8 = 0;
    GameData_2251fe0 = 0;
    GameData_2251fe8 = 0;
    GameData_2251ff0 = 0;
    GameData_2252018 = 0;
    GameData_2252020 = 0;
    GameData_2252028 = 0;
    GameData_2252010 = 0;
    GameData_2252008 = 0;
    GameData_2252000 = 0;
    GameData_2251ff8 = 0;
    __cxa_guard_release(&GameData_2252030);
  }
  v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       240, 16, 0);
  v17 = GameData_212c608[0];
  *(_QWORD*)(v16 + 96) = 0;
  *(_QWORD*)(v16 + 104) = 0;
  *(_QWORD*)(v16 + 112) = 0;
  *(_QWORD*)(v16 + 120) = 0;
  *(_QWORD*)(v16 + 128) = 0;
  *(_WORD*)(v16 + 136) = 0;
  *(_QWORD*)(v16 + 16) = 0;
  *(_QWORD*)(v16 + 24) = "NULL";
  *(_QWORD*)(v16 + 138) = 0;
  *(_QWORD*)(v16 + 144) = 0;
  *(_QWORD*)(v16 + 32) = 0;
  *(_QWORD*)(v16 + 40) = 0;
  *(_QWORD*)(v16 + 48) = 0;
  *(_QWORD*)(v16 + 56) = 0;
  *(_QWORD*)(v16 + 64) = 0;
  *(_QWORD*)(v16 + 72) = 0;
  *(_QWORD*)(v16 + 80) = 0;
  *(_QWORD*)(v16 + 88) = 0;
  *(_QWORD*)v16 = v17 + 16;
  *(_QWORD*)(v16 + 8) = 0;
  game_ProcInst_Register(v16);
  *(_QWORD*)(v16 + 152) = 0;
  *(_QWORD*)(v16 + 192) = 0;
  *(_QWORD*)(v16 + 208) = v15;
  *(_QWORD*)(v16 + 216) = v6;
  GameData_2252038 = v16;
  *(_QWORD*)(v16 + 224) = v8;
  *(_QWORD*)v16 = game_gmap_anonymous_ProcAnimalSeq_vtable;
  return GameRoutine_657850(v16, &GameData_2251af0, "ProcAnimalSeq", 1, a2);
}

__int64 SpotAttachmentAnimal_Unknown36(__int64 a1, __int64 a2)
{
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  char v9;
  __int64 v10;
  char v11;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v4;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = 9;
  GameRoutine_65f240(a2, ((__int64)*(__int16*)(a1 + 22) << 24) +
                             ((__int64)*(__int16*)(a1 + 20) << 32) +
                             ((__int64)*(__int16*)(a1 + 24) << 18) +
                             ((__int64)*(__int16*)(a1 + 26) << 12) +
                             ((__int64)*(__int16*)(a1 + 28) << 6) +
                             *(__int16*)(a1 + 30));
  result = GameRoutine_65f240(a2, ((__int64)*(__int16*)(a1 + 10) << 24) +
                                      ((__int64)*(__int16*)(a1 + 8) << 32) +
                                      ((__int64)*(__int16*)(a1 + 12) << 18) +
                                      ((__int64)*(__int16*)(a1 + 14) << 12) +
                                      ((__int64)*(__int16*)(a1 + 16) << 6) +
                                      *(__int16*)(a1 + 18));
  v8 = *(int*)(a2 + 20);
  v9 = *(_BYTE*)(a1 + 41);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v9;
  v10 = *(int*)(a2 + 20);
  v11 = *(_BYTE*)(a1 + 40);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = v11;
  return result;
}

float SpotAttachmentAnimal_Unknown38(__int64 a1)
{
  __int64 v1;
  char v3;
  __int128 v4;
  __int64 v5;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int128* v12;
  float result;

  v1 = *(_QWORD*)(a1 + 32);
  v3 = GameRoutine_13261c0(v1);
  v5 = *(_QWORD*)(v1 + 152);
  if (v3 == 6 && v5 != 0) {
    *(_DWORD*)(v5 + 64) = 1;
    v7 = *(__int64**)(v5 + 8);
    v8 = *v7;
    *(_QWORD*)(v5 + 72) = *v7;
    v9 = *(_QWORD*)(a1 + 32);
    v10 = SpotAttachmentAnimal_14d2d00(v8);
    v11 = GameRoutine_1347cc0(v9, v10);
    if (v11 != 0) {
      *(_QWORD*)(a1 + 48) = v11;
      v12 = &GameData_21c9630;
      if (game_GameModeData_instance_ != 0 &&
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v12 = &GameData_21c9610;
      }
      *(_DWORD*)(v11 + 64) = *(_DWORD*)v12;
      *(_DWORD*)(v11 + 68) = *((_DWORD*)v12 + 1);
      v4 = *(_OWORD*)(v11 + 64);
      *((_QWORD*)&v4 + 1) = *((unsigned int*)v12 + 2);
      *(_OWORD*)(v11 + 64) = v4;
    }
  }
  LODWORD(result) = v4;
  return result;
}

#pragma GCC visibility pop
