#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_1594bd0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1829460(_QWORD, _QWORD);
__int64 GameRoutine_1829dc0(_QWORD);
__int64 GameRoutine_182aaa0(void);
__int64 GameRoutine_182ac80(_QWORD, _QWORD);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 GameRoutine_72add0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_72af70(_QWORD);
__int64 GameRoutine_747df0(void);
__int64 GameRoutine_8224a0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetUnknown4(_QWORD, _QWORD);
__int64 game_Unit_GetUnknown5(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_20e2488[])();
extern __int64 (*GameData_20e24a8[])();
extern __int64 (*GameData_20e25f8[])();
extern __int64 (*game_map_MapUnitInfo_vtable[])();
extern __int64 GameData_21ca2f0;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cf840;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfc0[10];
extern int GameData_226b310;
__int64 MapUnitInfo_Destructor(__int64 a1);
__int64 MapUnitInfo_1828ea0(__int64 result);
__int64 MapUnitInfo_1828ef0(__int64 result, __int64 a2);
__int64 MapUnitInfo_Unknown5(__int64 result);
__int64 MapUnitInfo_1829400(__int64 result);
__int64 MapUnitInfo_Unknown6(__int64 result);

__int64 MapUnitInfo_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;

  *(_QWORD*)a1 = game_map_MapUnitInfo_vtable;
  *(_QWORD*)(a1 + 8) = GameData_20e2488;
  *(_QWORD*)(a1 + 24) = GameData_20e24a8;
  v2 = *(_QWORD*)(a1 + 376);
  if (v2 != 0) {
    if ((*(_WORD*)(v2 + 136) & 1) == 0) {
      GameRoutine_657a50(v2, 1);
    }
    *(_QWORD*)(a1 + 376) = 0;
  }
  v3 = *(_QWORD*)(a1 + 32);
  if (v3 != 0) {
    *(_BYTE*)(v3 + 2376) = 1;
  }
  v4 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_155e140(a1 + 48);
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 240);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                    v5);
    }
  }
  if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 192);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                    v7);
    }
  }
  GameRoutine_155e140(a1 + 48);
  v9 = *(_QWORD*)(a1 + 144);
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  GameRoutine_1564060(a1 + 96);
  GameRoutine_1563f90(a1 + 72, *(_QWORD*)(a1 + 80));
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v11 = *(_QWORD*)(a1 + 40);
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    result = std___1___shared_weak_count___release_weak(v11);
  }
  *(_QWORD*)a1 = GameData_20e25f8;
  if (GameData_21cf840 == a1) {
    GameData_21cf840 = 0;
    GameData_226b310 = 0;
  }
  return result;
}

__int64 MapUnitInfo_1828ea0(__int64 result)
{
  __int64 v1;

  if (GameData_21cf840 == 0 || *(int*)(GameData_21cf840 + 16) <= 0) {
    v1 = *(_QWORD*)(result + 160);
    if (v1 != 0 && (*(_BYTE*)(v1 + 417) & 0x1C) == 0 &&
        *(_BYTE*)(result + 152) == 0) {
      return GameRoutine_182aaa0();
    }
  }
  return result;
}

__int64 MapUnitInfo_1828ef0(__int64 result, __int64 a2)
{
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  bool v27;
  char v28;
  int v29;
  int v30;
  char v31[4];
  char v32[4];

  v2 = result;
  if (a2 == 0) {
    v9 = *(unsigned __int8*)(result + 152);
    *(_QWORD*)(result + 160) = 0;
    if (v9 == 0) {
      return GameRoutine_182ac80(result, 0);
    }
    return result;
  }
  v3 = *(char*)(a2 + 584);
  v4 = *(char*)(a2 + 585);
  v6 = *GameData_212cfc0[0];
  if (*GameData_212cfc0[0] != 0 && GameData_21ca2f0 != 0) {
    result = *(_QWORD*)(GameData_21ca2f0 + 8);
    LODWORD(v7) = *(_DWORD*)(*(_QWORD*)(v6 + 48) + 8LL) +
                  32 * *(_DWORD*)(*(_QWORD*)(v6 + 48) + 12LL);
    v7 = (unsigned int)v7 >= 0x400 ? 0LL : (unsigned int)v7;
    if (*(unsigned __int8*)(result + v7 + 64) != 255) {
      result = GameRoutine_747df0();
      if ((_DWORD)result != 255) {
        v8 = *(_QWORD*)(v6 + 48);
        v3 = *(_DWORD*)(v8 + 8);
        v4 = *(_DWORD*)(v8 + 12);
      }
    }
  }
  if (*(_BYTE*)(v2 + 360) == 1) {
    *(_BYTE*)(v2 + 360) = 0;
    goto LABEL_40;
  }
  v10 = *(_QWORD*)(v2 + 160);
  if (v10 != 0 && v10 == a2 && *(_DWORD*)(v2 + 352) == v3 &&
      *(_DWORD*)(v2 + 356) == v4 && (*(_BYTE*)(v2 + 362) & 1) == 0) {
    v11 = *(_DWORD*)(v2 + 344);
    result = GameRoutine_8224a0(11);
    v12 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), result);
      if (result == 0) {
        if (v11 != 0) {
          goto LABEL_40;
        }
        goto LABEL_23;
      }
      v12 = *(_DWORD*)(result + 32);
    }
    if (v11 != v12) {
      goto LABEL_40;
    }
  LABEL_23:
    if (*(_QWORD*)(v2 + 160) != a2) {
      return result;
    }
    if (*(_BYTE*)(v2 + 361) == ((*(_DWORD*)(a2 + 416) & 0x10000) != 0)) {
      v13 = *(_WORD*)(a2 + 1952) != 0 ? a2 + 1952 : 0LL;
      if (*(_QWORD*)(v2 + 272) == v13) {
        v14 = *(_DWORD*)(v2 + 312);
        v31[0] = 6;
        result = game_Unit_GetParam(a2, v31, 1);
        if (v14 == (_DWORD)result) {
          v15 = *(_DWORD*)(v2 + 320);
          v32[0] = 7;
          result = game_Unit_GetParam(a2, v32, 1);
          if (v15 == (_DWORD)result) {
            v16 = *(_DWORD*)(v2 + 280);
            v17 = *(_WORD*)(a2 + 1952) != 0 ? a2 + 1952 : 0LL;
            result = GameRoutine_1594bd0(a2, v17, 1);
            if (v16 == (_DWORD)result) {
              v18 = *(_DWORD*)(v2 + 296);
              result = game_Unit_GetUnknown4(a2, 1);
              if (v18 == (_DWORD)result) {
                v19 = *(_DWORD*)(v2 + 304);
                result = game_Unit_GetUnknown5(a2, 1);
                if (v19 == (_DWORD)result &&
                    *(_DWORD*)(v2 + 248) == *(__int16*)(a2 + 492)) {
                  return result;
                }
              }
            }
          }
        }
      }
    }
  }

LABEL_40:
  v20 = GameData_212ce98[0];
  if (*(int*)(a2 + 592) >= 2) {
    LODWORD(v21) = v3 + 32 * v4;
    if ((unsigned int)v21 >= 0x400) {
      v21 = 0;
    }
    else {
      v21 = (unsigned int)v21;
    }
    v22 = *(_QWORD*)(*GameData_212ce98[0] + 96) + v21;
    v23 = *(unsigned __int8*)(v22 + 8);
    if (*(_BYTE*)(v22 + 8) == 0 ||
        ((v24 = *(_QWORD*)(GameData_21ca310 + 56) +
                2224LL * *(unsigned __int8*)(v22 + 8),
          v25 = v24 - 2224, v23 <= 0xFA)
             ? (v26 = v24 == 2224)
             : (v26 = true),
         v26 || *(_QWORD*)(v24 - 1832) == 0)) {
      v25 = 0;
    }
    v27 = v25 == a2;
    goto LABEL_54;
  }
  if (*(_DWORD*)(v2 + 352) == v3) {
    v27 = *(_DWORD*)(v2 + 356) == v4;
  LABEL_54:
    v28 = !v27;
    goto LABEL_58;
  }
  v28 = 1;

LABEL_58:
  v29 = (a2 != *(_QWORD*)(v2 + 160)) & (unsigned __int8)v28;
  if (v29 == 1) {
    result = GameRoutine_72add0(*GameData_212ce98[0], a2, v3, v4);
  }
  v30 = *(unsigned __int8*)(v2 + 152);
  *(_DWORD*)(v2 + 352) = v3;
  *(_DWORD*)(v2 + 356) = v4;
  if (v30 != 0 || ((result = GameRoutine_1829460(v2, a2)) & 1) == 0) {
  LABEL_68:
    if (v29 == 0) {
      return result;
    }
    return GameRoutine_72af70(*v20);
  }
  if (*(_QWORD*)(a2 + 392) == 0 || (*(_BYTE*)(a2 + 417) & 0x1C) != 0) {
    if (*(_QWORD*)(v2 + 160) != 0) {
      *(_QWORD*)(v2 + 160) = 0;
    }
    if (*(_BYTE*)(v2 + 152) == 0) {
      result = GameRoutine_182ac80(v2, 0);
    }
    goto LABEL_68;
  }
  MapUnitInfo_1828ea0(v2);
  result = GameRoutine_1829dc0(v2);
  if (v29 != 0) {
    return GameRoutine_72af70(*v20);
  }
  return result;
}

__int64 MapUnitInfo_Unknown5(__int64 result)
{
  __int64 v1;

  v1 = result;
  if (*(_BYTE*)(result + 152) == 0) {
    result = GameRoutine_182ac80(result, 0);
  }
  *(_QWORD*)(v1 + 160) = 0;
  return result;
}

__int64 MapUnitInfo_1829400(__int64 result)
{
  __int64 v1;

  v1 = result;
  if (*(_BYTE*)(result + 144) == 0) {
    result = GameRoutine_182ac80(result - 8, 0);
  }
  *(_QWORD*)(v1 + 152) = 0;
  return result;
}

__int64 MapUnitInfo_Unknown6(__int64 result)
{
  *(_DWORD*)(result + 368) = 2;
  return result;
}

#pragma GCC visibility pop
