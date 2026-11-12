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
__int64 GameRoutine_182b1b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_20e2418;
extern __int64 GameData_212c610;
__int64 MapUnitInfo_182aaa0(__int64 a1, char a2);
extern __int64* GameData_212c880[5];
__int64 MapUnitInfo_DeletingDestructor(__int64 result);
__int64 game_map_MapUnitInfo_TryUpdateDataSimple_lambda1_Invoke(__int64 result,
                                                                _DWORD* a2);
__int64 GameRoutine_182b4c0();
__int64 GameRoutine_182b5a0();
__int64 LayoutAccessor_155c780(_QWORD, _QWORD);
__int64 LayoutAccessor_155cda0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155d940(_QWORD);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_ProcInst_Register(_QWORD);
extern _UNKNOWN GameData_226b308;
extern __int64 (*game_map_AnimTaskProc_vtable[])();
extern __int64* GameData_212c628;
extern __int64 GameData_212c608[2];
extern __int64 GameData_226b250;
extern __int64 GameData_226b258;
extern __int64 GameData_226b260;
extern __int64 GameData_226b270;
extern __int64 GameData_226b280;
extern __int64 GameData_226b290;
extern __int64 GameData_226b298;
extern __int64 GameData_226b2a0;
extern __int64 GameData_226b2b0;
extern __int64 GameData_226b2c0;
extern __int64 GameData_226b2d0;
extern __int64 GameData_226b2d8;
extern __int64 GameData_226b2e0;
extern __int64 GameData_226b2f0;
extern __int64 GameData_226b300;
extern char GameData_226b248;
extern char GameData_226b288;
extern char GameData_226b2c8;
extern int GameData_226b268;
extern int GameData_226b278;
extern int GameData_226b2a8;
extern int GameData_226b2b8;
extern int GameData_226b2e8;
extern int GameData_226b2f8;
__attribute__((swiftcall)) void
MapUnitInfo_Unknown4(PSEUDO_X8 x8_, __int64 result, __int64 a2);
__attribute__((swiftcall)) void
MapUnitInfo_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2);
__int64 MapUnitInfo_182b1b0(__int64 a1, __int64 a2, __int64 a3, char a4,
                            __int64 a5);
_BYTE* ProcInst_657a50_alt1(__int64, char) __asm__("ProcInst_657a50");
__int64* GameRoutine_7595d0();
__int64 LayoutAccessor_155ea30_alt1(__int64*) __asm__("LayoutAccessor_155ea30");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64 (*GameData_20e26a8[])();
extern __int64 GameData_21cd100;
extern __int64 GameData_21cd138;
extern int GameData_21d92e0;
__int64 MapUnitInfo_1828db0(__int64 result);
__int64 game_map_MapUnitInfo_CloseSimple(__int64 a1, char a2);

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

__attribute__((swiftcall)) void MapUnitInfo_Unknown4(PSEUDO_X8 x8_,
                                                     __int64 result, __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  _DWORD* v5;

  if (*(_DWORD*)(a2 + 8) == 1) {
    v3 = *(_QWORD*)(result + 376);
    if (v3 != 0) {
      if ((*(_WORD*)(v3 + 136) & 1) == 0) {
        v4 = result;
        v5 = a3;
        ProcInst_657a50(v3, 1);
        result = v4;
        a3 = v5;
      }
      *(_QWORD*)(result + 376) = 0;
    }
  }
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void MapUnitInfo_Unknown2(PSEUDO_X8 x8_,
                                                     __int64 result, __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  _DWORD* v5;

  if (*(_DWORD*)(a2 + 8) == 1) {
    v3 = *(_QWORD*)(result + 352);
    if (v3 != 0) {
      if ((*(_WORD*)(v3 + 136) & 1) == 0) {
        v4 = result;
        v5 = a3;
        ProcInst_657a50(v3, 1);
        result = v4;
        a3 = v5;
      }
      *(_QWORD*)(result + 352) = 0;
    }
  }
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

__int64 MapUnitInfo_1828db0(__int64 result)
{
  int v1;
  bool v2;
  int v3;
  __int64 v4;
  __int64 v6;
  int v7;
  __int64 v9;
  __int64* v10;

  v1 = *(_DWORD*)(result + 368);
  v2 = __OFSUB__(v1, 1);
  v3 = v1 - 1;
  if (v3 < 0 == v2) {
    *(_DWORD*)(result + 368) = v3;
    if (v3 != 0) {
      return result;
    }
    *(_DWORD*)(result + 368) = -1;
    if (GameData_21cf840 == 0 || *(int*)(GameData_21cf840 + 16) <= 0) {
      v4 = *(_QWORD*)(result + 160);
      if (v4 != 0 && (*(_BYTE*)(v4 + 417) & 0x1C) == 0 &&
          *(_BYTE*)(result + 152) == 0) {
        v6 = result;
        MapUnitInfo_182aaa0(result, 0);
        result = v6;
      }
    }
  }
  v7 = GameData_21cd100;
  if (GameData_21cd100 != 0) {
    v7 = (signed __int32)*(_DWORD*)(GameData_21cd100 + 16) > 0;
  }
  if (GameData_21cd138 != 0 && GameData_21d92e0 == 2) {
    v7 = 1;
  }
  if (v7 == 0) {
    v9 = result;
    v10 = GameRoutine_7595d0();
    return MapUnitInfo_1828ef0(v9, (__int64)v10);
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

__int64 MapUnitInfo_DeletingDestructor(__int64 result)
{
  *(_DWORD*)(result + 360) = 2;
  return result;
}

__int64 MapUnitInfo_182aaa0(__int64 a1, char a2)
{
  int v2;
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8 v15;
  __int64 v16;
  _WORD* v17;
  _WORD* v18;
  __int64 v19;
  _BYTE v20[32];
  _BYTE* v21;

  v3 = *(_QWORD*)(a1 + 376);
  if (v3 == 0) {
    goto LABEL_29;
  }
  v6 = __dynamic_cast(*(_QWORD*)(a1 + 376), GameData_212c610, &GameData_20e2418,
                      0);
  if (v6 != 0) {
    if (*(_QWORD*)(v6 + 176) == 0 || *(_QWORD*)(v6 + 168) == 0) {
      goto LABEL_25;
    }
    v7 = v6;
    result = std___1___shared_weak_count_lock(*(_QWORD*)(v6 + 168));
    v9 = v7;
    if (result != 0) {
      v10 = *(_QWORD*)(v7 + 160);
      if (v10 != 0) {
        v2 = *(unsigned __int8*)(v10 + 24);
        v11 = v10 + 152;
        if (v2 == 0) {
          v11 = 0;
        }
        v12 = v11 != *(_QWORD*)(v7 + 176);
      }
      else {
        v12 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (!v12) {
          goto LABEL_13;
        }
      }
      else {
        v13 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v13);
        v9 = v7;
        if (!v12) {
        LABEL_13:
          if ((v2 & 1) == 0) {
            goto LABEL_25;
          }
        LABEL_18:
          if (*(_QWORD*)(v9 + 264) != 0) {
            v15 = *(_BYTE*)(v9 + 280);
            v16 = *(_QWORD*)(v9 + 288);
            if ((v15 & 1) == 0) {
              v16 = v15 >> 1;
            }
            if (v16 == 2) {
              v17 = *(_WORD**)(v9 + 296);
              v18 = (_WORD*)(v9 + 281);
              if ((v15 & 1) != 0) {
                v18 = v17;
              }
              if (*v18 == 28233) {
                return result;
              }
            }
          }
        LABEL_25:
          v3 = *(_QWORD*)(a1 + 376);
          if (v3 == 0) {
            goto LABEL_29;
          }
          goto LABEL_26;
        }
      }
    }
    v14 = *(_QWORD*)(v9 + 168);
    if (v14 == 0 || *(_QWORD*)(v14 + 8) == -1) {
      goto LABEL_25;
    }
    goto LABEL_18;
  }

LABEL_26:
  if ((*(_WORD*)(v3 + 136) & 1) == 0) {
    GameRoutine_657a50(v3, 1);
  }
  *(_QWORD*)(a1 + 376) = 0;

LABEL_29:
  result = LayoutAccessor_155ea30(a1 + 48);
  if ((a2 & 1) != 0 || (result & 1) == 0) {
    LayoutAccessor_155e830(a1 + 48, 1);
    v21 = nullptr;
    *(_QWORD*)(a1 + 376) =
        GameRoutine_182b1b0(a1 + 24, a1 + 48, "In", a2 & 1, v20);
    result = (__int64)v21;
    if (v21 == v20) {
      v19 = 32;
    }
    else {
      if (v21 == nullptr) {
        return result;
      }
      v19 = 40;
    }
    return (*(__int64 (**)(void*))(*(_QWORD*)v21 + v19))((void*)v21);
  }
  return result;
}

__int64 game_map_MapUnitInfo_CloseSimple(__int64 a1, char a2)
{
  int v2;
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8 v15;
  __int64 v16;
  unsigned __int16* v17;
  unsigned __int16* v18;
  int v19;
  int v20;
  __int64 v22;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;

  v3 = *(_QWORD*)(a1 + 376);
  if (v3 == 0) {
    goto LABEL_32;
  }
  v6 = __dynamic_cast(*(_QWORD*)(a1 + 376), GameData_212c610, &GameData_20e2418,
                      0);
  if (v6 != 0) {
    if (*(_QWORD*)(v6 + 176) == 0 || *(_QWORD*)(v6 + 168) == 0) {
      goto LABEL_28;
    }
    v7 = v6;
    result = std___1___shared_weak_count_lock_alt1(*(_QWORD*)(v6 + 168));
    v9 = v7;
    if (result != 0) {
      v10 = *(_QWORD*)(v7 + 160);
      if (v10 != 0) {
        v2 = *(unsigned __int8*)(v10 + 24);
        v11 = v10 + 152;
        if (v2 == 0) {
          v11 = 0;
        }
        v12 = v11 != *(_QWORD*)(v7 + 176);
      }
      else {
        v12 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (!v12) {
          goto LABEL_13;
        }
      }
      else {
        v13 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak_alt1(v13);
        v9 = v7;
        if (!v12) {
        LABEL_13:
          if ((v2 & 1) == 0) {
            goto LABEL_28;
          }
        LABEL_18:
          if (*(_QWORD*)(v9 + 264) != 0) {
            v15 = *(_BYTE*)(v9 + 280);
            v16 = *(_QWORD*)(v9 + 288);
            if ((v15 & 1) == 0) {
              v16 = v15 >> 1;
            }
            if (v16 == 3) {
              v17 = *(unsigned __int16**)(v9 + 296);
              v18 = (unsigned __int16*)(v9 + 281);
              if ((v15 & 1) != 0) {
                v18 = v17;
              }
              v19 = *v18;
              v20 = *((unsigned __int8*)v18 + 2);
              if (v19 == 30031 && v20 == 116) {
                return result;
              }
            }
          }
        LABEL_28:
          v3 = *(_QWORD*)(a1 + 376);
          if (v3 == 0) {
            goto LABEL_32;
          }
          goto LABEL_29;
        }
      }
    }
    v14 = *(_QWORD*)(v9 + 168);
    if (v14 == 0 || *(_QWORD*)(v14 + 8) == -1) {
      goto LABEL_28;
    }
    goto LABEL_18;
  }
LABEL_29:
  if ((*(_WORD*)(v3 + 136) & 1) == 0) {
    ProcInst_657a50_alt1(v3, 1);
  }
  *(_QWORD*)(a1 + 376) = 0;
LABEL_32:
  result = LayoutAccessor_155ea30_alt1((__int64*)(a1 + 48));
  if ((a2 & 1) != 0 || (result & 1) != 0) {
    v23_.v23[0] = GameData_20e26a8;
    v23_.v23[1] = a1;
    v23_.v24 = v23_.v23;
    *(_QWORD*)(a1 + 376) = MapUnitInfo_182b1b0(a1 + 24, a1 + 48, (__int64)"Out",
                                               a2 & 1, (__int64)v23_.v23);
    result = (__int64)v23_.v24;
    if (v23_.v24 == v23_.v23) {
      v22 = 32;
    }
    else {
      if (v23_.v24 == nullptr) {
        return result;
      }
      v22 = 40;
    }
    return (*(__int64 (**)(__int64))(*v23_.v24 + v22))((__int64)v23_.v24);
  }
  return result;
}

__int64 MapUnitInfo_182b1b0(__int64 a1, __int64 a2, __int64 a3, char a4,
                            __int64 a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BYTE v18[32];
  _BYTE* v19;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_226b308,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_226b308) != 0) {
    GameData_226b248 = 15;
    GameData_226b260 = 0;
    GameData_226b268 = 0;
    GameData_226b270 = 0;
    GameData_226b278 = 0;
    GameData_226b280 = 0;
    GameData_226b2a0 = 0;
    GameData_226b2a8 = 0;
    GameData_226b2b0 = 0;
    GameData_226b2b8 = 0;
    GameData_226b2c0 = 0;
    GameData_226b2c8 = 0;
    GameData_226b2f0 = 0;
    GameData_226b2f8 = 0;
    GameData_226b300 = 0;
    GameData_226b2e8 = 0;
    GameData_226b2d8 = 0;
    GameData_226b2e0 = 0;
    GameData_226b250 = 0;
    GameData_226b258 = (__int64)GameRoutine_182b4c0;
    GameData_226b2d0 = 0;
    GameData_226b288 = 13;
    GameData_226b290 = 0;
    GameData_226b298 = (__int64)GameRoutine_182b5a0;
    __cxa_guard_release(&GameData_226b308);
  }
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       384, 16, 0);
  v11 = *(_QWORD*)(a5 + 32);
  if (v11 != 0) {
    if (v11 == a5) {
      v19 = v18;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v11 + 24LL))(v11, v18);
    }
    else {
      v19 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    }
  }
  else {
    v19 = nullptr;
  }
  v12 = GameData_212c608[0];
  *(_QWORD*)(v10 + 96) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_QWORD*)(v10 + 24) = "NULL";
  *(_QWORD*)(v10 + 138) = 0;
  *(_QWORD*)(v10 + 144) = 0;
  *(_QWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_QWORD*)(v10 + 80) = 0;
  *(_QWORD*)(v10 + 88) = 0;
  *(_QWORD*)v10 = v12 + 16;
  *(_QWORD*)(v10 + 8) = 0;
  game_ProcInst_Register(v10);
  *(_QWORD*)(v10 + 152) = a1;
  *(_QWORD*)v10 = game_map_AnimTaskProc_vtable;
  LayoutAccessor_155c780(v10 + 160, a2);
  v13 = v19;
  if (v19 != nullptr) {
    if (v19 == v18) {
      *(_QWORD*)(v10 + 368) = v10 + 336;
      (*(void (**)(_BYTE*))(*(_QWORD*)v13 + 24LL))(v13);
    }
    else {
      *(_QWORD*)(v10 + 368) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 16LL))((__int64)v19);
    }
  }
  else {
    *(_QWORD*)(v10 + 368) = 0;
  }
  LayoutAccessor_155cda0(v10 + 160, a3, 0);
  if ((a4 & 1) != 0) {
    LayoutAccessor_155d940(v10 + 160);
  }
  v14 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c628);
  if (v14 != 0) {
    v15 = *(_QWORD*)(v14 + 40);
    if (v15 != 0) {
      *(_QWORD*)(v15 + 48) = v10;
      *(_QWORD*)(v10 + 56) = *(_QWORD*)(v14 + 40);
    }
    *(_QWORD*)(v14 + 40) = v10;
    *(_QWORD*)(v10 + 24) = "AnimTaskProc";
    *(_QWORD*)(v10 + 32) = v14;
    *(_DWORD*)(v10 + 140) = game_HashString32();
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 24;
    *(_QWORD*)(v10 + 80) = 1;
    *(_QWORD*)(v10 + 8) = &GameData_226b248;
    *(_QWORD*)(v10 + 16) = &GameData_226b248;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 136LL))(v10) & 1) != 0 &&
        (*(_WORD*)(v10 + 136) & 0x100) == 0) {
      *(_WORD*)(v10 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v10 + 136) & 1) == 0) {
    ProcInst_657a50(v10, 1);
  }
  if (v19 == v18) {
    v16 = 32;
    goto LABEL_26;
  }
  if (v19 != nullptr) {
    v16 = 40;
  LABEL_26:
    (*(void (**)(__int64))(*(_QWORD*)v19 + v16))((__int64)v19);
  }
  return v10;
}

__int64 game_map_MapUnitInfo_TryUpdateDataSimple_lambda1_Invoke(__int64 result,
                                                                _DWORD* a2)
{
  __int64 v2;
  int v3;
  int v4;
  int v5;

  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * (*a2 & 0xFFFLL));
  v3 = *(unsigned __int8*)(v2 + 104);
  v4 = *(unsigned __int8*)(v2 + 273);
  if ((unsigned int)(v3 - 5) >= 2) {
    v5 = 0;
  }
  else {
    v5 = (*a2 >> 19) & 0x1F;
  }
  **(_DWORD**)(result + 8) = (v5 - ((*a2 >> 12) & 0x7F) + v4) &
                             ~((v5 - ((*a2 >> 12) & 0x7F) + v4) >> 31);
  return result;
}

#pragma GCC visibility pop
