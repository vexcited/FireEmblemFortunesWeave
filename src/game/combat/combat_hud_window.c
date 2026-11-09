#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleInfoWindowBase_DeletingDestructor(_QWORD*);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_15636c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1832b70(__int64, unsigned int, char);
__int64 GameRoutine_18334c0(__int64 result, char, unsigned __int8, int, int);
__int64 GameRoutine_18337f0(__int64, char, int, int, char);
__int64 GameRoutine_1837780(_QWORD, _QWORD);
__int64 GameRoutine_79d030(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20e3318[])();
extern __int64 (*GameData_20e3348[])();
extern __int64 (*GameData_20e33f0[])();
extern __int64 (*game_combat_CombatHUDWindow_vtable[])();
extern __int64 GameData_212d690;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21d1e38;
extern __int64 GameData_21ec7b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_empty_item;
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212d670[3];
extern int GameData_226b314;
__int64 CombatHUDWindow_DeletingDestructor(_QWORD* a1);
__int64 CombatHUDWindow_183d930(_QWORD* a1);
__int64 CombatHUDWindow_Unknown2(_QWORD* a1);
__int64 CombatHUDWindow_183daf0(_QWORD* a1);
_BYTE* CombatHUDWindow_Unknown3(_BYTE* result);
__int64 CombatHUDWindow_183e0d0(__int64 a1);
__int64 CombatHUDWindow_183e450(__int64 result);
__int64 CombatHUDWindow_183e6e0(__int64 result, unsigned int a2);
const char* CombatHUDWindow_Unknown28(__int64 a1, char a2);
__int64 CombatHUDWindow_Unknown16(__int64 a1, __int64 a2);
__int64 CombatHUDWindow_Unknown18(__int64 a1, __int64 a2);
__int64 CombatHUDWindow_Unknown20(__int64 a1, __int64 a2);
__int64 CombatHUDWindow_Unknown21(__int64 a1, __int64 a2);
__int64 CombatHUDWindow_Unknown29(__int64 a1);
__int64 CombatHUDWindow_183ea70(__int64 a1);
__int64 GameRoutine_1014aa0(_QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD);
float LayoutAccessor_15637c0(_QWORD, _QWORD, _QWORD);
__int64 CombatHudWindow_1832b70(__int64 a1, unsigned int a2, char a3);

__int64 CombatHudWindow_1832b70(__int64 a1, unsigned int a2, char a3)
{
  char v3;
  __int64 v4;
  char v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v3 = a3 | (*(unsigned __int8*)(a1 + 128) != (unsigned __int8)a2);
  if ((a3 & 1 | (*(unsigned __int8*)(a1 + 128) != (unsigned __int8)a2)) != 0) {
    v4 = a1 + 24;
    v6 = a3;
    v8 = (*(__int64 (**)(__int64, bool))(*(_QWORD*)a1 + 224LL))(
        a1, (unsigned __int8)a2 == 0);
    if ((LayoutAccessor_1563280(v4, v8, 1) & 1) != 0 &&
        LayoutAccessor_15637c0(v4, v8, 1) < 1.0) {
      v6 = 1;
    }
    v9 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 224LL))(a1, a2);
    LayoutAccessor_1562680(v4, v9, 1.0);
    *(_BYTE*)(a1 + 128) = a2;
    *(_BYTE*)(a1 + 197) = (unsigned __int8)a2 == 1;
    if ((v6 & 1) != 0) {
      v10 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 224LL))(a1, 0);
      GameRoutine_15638b0(v4, v10, 0);
      LayoutAccessor_15636c0(v4, v10, 0);
      if ((unsigned __int8)a2 == 1) {
        GameRoutine_1014aa0(*(_QWORD*)(a1 + 136));
        GameRoutine_1014aa0(*(_QWORD*)(a1 + 144));
        *(_BYTE*)(a1 + 197) = 0;
      }
    }
  }
  return v3 & 1;
}

__int64 CombatHUDWindow_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_combat_CombatHUDWindow_vtable;
  a1[30] = GameData_20e3318;
  a1[31] = GameData_20e3348;
  v2 = a1[1];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = a1[2];
  a1[1] = 0;
  a1[2] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 3);
  a1[30] = GameData_20e33f0;
  if ((_QWORD*)GameData_21d1e38 == a1) {
    GameData_21d1e38 = 0;
    GameData_226b314 = 0;
  }
  return BattleInfoWindowBase_DeletingDestructor(a1);
}

__int64 CombatHUDWindow_183d930(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  *(a1 - 30) = game_combat_CombatHUDWindow_vtable;
  v2 = a1 - 30;
  *a1 = GameData_20e3318;
  a1[1] = GameData_20e3348;
  v3 = *(a1 - 29);
  if (v3 != 0) {
    *(_BYTE*)(v3 + 2376) = 1;
  }
  v4 = *(a1 - 28);
  *(a1 - 29) = 0;
  *(a1 - 28) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_155e140(a1 - 27);
  *a1 = GameData_20e33f0;
  if ((_QWORD*)GameData_21d1e38 == v2) {
    GameData_21d1e38 = 0;
    GameData_226b314 = 0;
  }
  return BattleInfoWindowBase_DeletingDestructor(v2);
}

__int64 CombatHUDWindow_Unknown2(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = game_combat_CombatHUDWindow_vtable;
  a1[30] = GameData_20e3318;
  a1[31] = GameData_20e3348;
  v2 = a1[1];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = a1[2];
  a1[1] = 0;
  a1[2] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 3);
  a1[30] = GameData_20e33f0;
  if ((_QWORD*)GameData_21d1e38 == a1) {
    GameData_21d1e38 = 0;
    GameData_226b314 = 0;
  }
  BattleInfoWindowBase_DeletingDestructor(a1);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

__int64 CombatHUDWindow_183daf0(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(a1 - 30) = game_combat_CombatHUDWindow_vtable;
  v2 = a1 - 30;
  *a1 = GameData_20e3318;
  a1[1] = GameData_20e3348;
  v3 = *(a1 - 29);
  if (v3 != 0) {
    *(_BYTE*)(v3 + 2376) = 1;
  }
  v4 = *(a1 - 28);
  *(a1 - 29) = 0;
  *(a1 - 28) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_155e140(a1 - 27);
  *a1 = GameData_20e33f0;
  if ((_QWORD*)GameData_21d1e38 == v2) {
    GameData_21d1e38 = 0;
    GameData_226b314 = 0;
  }
  BattleInfoWindowBase_DeletingDestructor(v2);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v2);
}

_BYTE* CombatHUDWindow_Unknown3(_BYTE* result)
{
  __int64 v1;
  _BYTE* v2;

  if (GameData_21d1e38 == 0 || *(int*)(GameData_21d1e38 + 256) <= 0) {
    if (GameData_21ec7b0 != 0) {
      v1 = *(_QWORD*)(GameData_21ec7b0 + 8);
      if (v1 != 0 && (*(_BYTE*)(v1 + 113) & 0x40) != 0) {
        return (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)result + 32LL))(
            result);
      }
    }
    if (result[291] == 1) {
      return (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)result + 32LL))(result);
    }
    else {
      v2 = result;
      GameRoutine_1832b70((__int64)result, 0, 0);
      return (_BYTE*)GameRoutine_155e830(v2 + 24, 1);
    }
  }
  return result;
}

__int64 CombatHUDWindow_183e0d0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  int v10;

  v1 = *(_QWORD*)(a1 + 152);
  if (v1 == 0) {
    goto LABEL_35;
  }
  v2 = *(_QWORD*)(v1 + 40);
  if (v2 != 0) {
    v2 = *(_QWORD*)(v2 + 440);
    if (v2 != 0) {
      LODWORD(v2) = *(unsigned __int8*)(v2 + 16);
      v3 = *(_QWORD*)(v1 + 800);
      if (v3 == 0) {
        goto LABEL_9;
      }
    }
    else {
      LODWORD(v2) = 9;
      v3 = *(_QWORD*)(v1 + 800);
      if (v3 == 0) {
      LABEL_9:
        LOBYTE(v2) = (_DWORD)v2 != 0;
        return v2 & 1;
      }
    }
    v4 = *(_QWORD*)(v3 + 440);
    if (v4 != 0) {
      v5 = *(unsigned __int8*)(v4 + 16);
      if (v5 == 4) {
        goto LABEL_9;
      }
    }
    else {
      v5 = 9;
    }
    if ((_DWORD)v2 == 3) {
      LOBYTE(v2) = v5 == 0;
      return v2 & 1;
    }
    if ((_DWORD)v2 != 2) {
      if ((_DWORD)v2 == 1) {
        if ((GameRoutine_79d030(v1 + 16) & 1) != 0) {
          if (((v6 = *(unsigned __int16*)(v1 + 60), *(_WORD*)(v1 + 60) != 0) ||
               ((int)(v7 = *(unsigned int*)(v1 + 56)) <= -1
                    ? (v8 = &game_g_empty_item)
                    : (v8 = (__int64*)(*(_QWORD*)(v1 + 40) + 8 * v7 + 828)),
                (v6 = *(unsigned __int16*)v8) != 0)) &&
                  (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                        8LL * v6) +
                             73LL) &
                   0xFE) == 2 ||
              (v9 = *(_QWORD*)(v1 + 72)) != 0 &&
                  (unsigned int)(v10 = *(unsigned __int8*)(v9 + 250)) <= 0x1F &&
                  ((1 << v10) & 0x80000600) != 0) {
            if (v5 >= 4) {
              goto LABEL_35;
            }
          LABEL_34:
            LODWORD(v2) = 0xDu >> (v5 & 0xF);
            return v2 & 1;
          }
        }
        if (v5 < 4) {
          goto LABEL_34;
        }
      }
    LABEL_35:
      LOBYTE(v2) = 0;
      return v2 & 1;
    }
    LOBYTE(v2) = v5 == 0 || v5 == 3;
  }
  return v2 & 1;
}

__int64 CombatHUDWindow_183e450(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _BYTE* v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  char v13;
  __int64 v14;
  const char* v15;
  _BYTE v16[4];

  v1 = *(_QWORD*)(result + 152);
  if (v1 != 0) {
    *(_BYTE*)(result + 291) = 0;
    v2 = *(_QWORD*)(v1 + 72);
    if (v2 != 0) {
      LOBYTE(v2) = (*(_WORD*)(v2 + 754) & 2) == 0;
      *(_BYTE*)(result + 291) = v2;
    }
    if (*(_QWORD*)(v1 + 40) != 0 && (*(_BYTE*)(result + 289) & 1) != 0 &&
        (v2 & 1) == 0) {
      v3 = (_BYTE*)result;
      (*(void (**)(__int64))(*(_QWORD*)result + 24LL))(result);
      (*(void (**)(_BYTE*))(*(_QWORD*)v3 + 208LL))(v3);
      v4 = *(_QWORD*)v3;
      v5 = *((_QWORD*)v3 + 19);
      v16[0] = 0;
      v6 = (*(__int64 (**)(_BYTE*, _BYTE*))(v4 + 40))(v3, v16);
      v7 = *(_QWORD*)(v5 + 40);
      v8 = v6;
      if (v3[290] != 0) {
        v9 = 64;
      }
      else {
        v9 = 72;
      }
      (*(void (**)(_BYTE*, _QWORD))(*(_QWORD*)v3 + v9))(v3, 0);
      (*(void (**)(_BYTE*, _QWORD, __int64))(*(_QWORD*)v3 + 80LL))(v3, v8 & 1,
                                                                   v7);
      (*(void (**)(_BYTE*, _QWORD))(*(_QWORD*)v3 + 88LL))(v3, 0);
      CombatHUDWindow_183e6e0(v3, 0);
      (*(void (**)(_BYTE*, _QWORD))(*(_QWORD*)v3 + 104LL))(v3, 0);
      (*(void (**)(_BYTE*, _QWORD))(*(_QWORD*)v3 + 112LL))(v3, 0);
      (*(void (**)(_BYTE*, _QWORD))(*(_QWORD*)v3 + 120LL))(v3, 0);
      (*(void (**)(_BYTE*, _QWORD))(*(_QWORD*)v3 + 184LL))(v3, 0);
      v10 = *((_QWORD*)v3 + 19);
      v16[0] = 1;
      v11 = (*(__int64 (**)(_BYTE*, _BYTE*))(*(_QWORD*)v3 + 40LL))(v3, v16);
      v12 = *(_QWORD*)(v10 + 800);
      v13 = v11;
      if (v3[290] != 0) {
        v14 = 64;
      }
      else {
        v14 = 72;
      }
      (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v3 + v14))(v3, 1);
      (*(void (**)(_BYTE*, _QWORD, __int64))(*(_QWORD*)v3 + 80LL))(v3, v13 & 1,
                                                                   v12);
      (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v3 + 88LL))(v3, 1);
      CombatHUDWindow_183e6e0(v3, 1);
      (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v3 + 104LL))(v3, 1);
      (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v3 + 112LL))(v3, 1);
      (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v3 + 120LL))(v3, 1);
      (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v3 + 184LL))(v3, 1);
      GameRoutine_1837780(v3, 1);
      (*(void (**)(_BYTE*, _QWORD, __int64))(*(_QWORD*)v3 + 192LL))(
          v3, *(unsigned __int8*)(*GameData_212cfd0[0] + 20), 1);
      if (v3[290] != 0) {
        v15 = "Pos_OnMap";
      }
      else {
        v15 = "Pos_Combat";
      }
      return GameRoutine_1562680(v3 + 24, v15, 1.0);
    }
  }
  return result;
}

__int64 CombatHUDWindow_183e6e0(__int64 result, unsigned int a2)
{
  unsigned __int8 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  char v12;
  const char* v13;
  const char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8 v18[4];

  v2 = a2;
  v3 = result;
  v4 = *(_QWORD*)(result + 152) + 760LL * a2;
  v5 = *(_QWORD*)(v4 + 40);
  if (v5 != 0 && *(_QWORD*)(v5 + 392) != 0 ||
      (*(_BYTE*)(*(_QWORD*)(v4 + 24) + 11277LL) & 0x80) == 0 &&
          (result = *(_QWORD*)(v4 + 48)) != 0 &&
          ((result = (**(__int64 (***)(__int64))result)(result)) & 1) != 0) {
    v6 = *(_DWORD*)(v4 + 116);
    if (v6 >= 1) {
      v7 = *(_QWORD*)(v4 + 24);
      v8 = v7 + 3064;
      if (*(_BYTE*)(v7 + 3068) != 1) {
        do {
          v9 = *(unsigned __int8*)(v8 + 68);
          v8 += 64;
        } while (v9 != 1);
      }
      v10 = *(__int16*)(v8 + 12LL * *(unsigned __int8*)(v4 + 32) + 16);
      v11 = *(_QWORD*)v3;
      v18[0] = v2;
      v12 = (*(__int64 (**)(__int64, unsigned __int8*))(v11 + 40))(v3, v18);
      if ((v12 & 1) != 0) {
        *(_DWORD*)(v3 + 260) = v10;
        *(_DWORD*)(v3 + 264) = v10;
        v13 = "L_PlayerHP_Gauge";
        v14 = "T_PlayerHP_Num";
        *(_DWORD*)(v3 + 268) = v6;
      }
      else {
        v13 = "L_TargetHP_Gauge";
        v14 = "T_TargetHP_Num";
        *(_DWORD*)(v3 + 272) = v10;
        *(_DWORD*)(v3 + 276) = v10;
        *(_DWORD*)(v3 + 280) = v6;
      }
      v15 = GameRoutine_155fbe0(v3 + 24, v13);
      GameRoutine_1562680(v15, "GaugeSize", 0.0);
      GameRoutine_15638b0(v15, "GaugeSize", 0);
      GameRoutine_15636c0(v15, "GaugeSize", 0);
      v16 = ui_LayoutAccessor_FindPane(v3 + 24, v14);
      if (v16 != 0) {
        v17 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d690, 0);
        if (v17 != 0) {
          GameRoutine_156c910(v17, "%d", 1);
        }
      }
      GameRoutine_18334c0(v3, v12 & 1, v2, v10, v10);
      return GameRoutine_18337f0(v3, v12 & 1, v10, v6, 1);
    }
  }
  return result;
}

const char* CombatHUDWindow_Unknown28(__int64 a1, char a2)
{
  if (a2 != 0) {
    return "Combat_Out";
  }
  else {
    return "Combat_In";
  }
}

__int64 CombatHUDWindow_Unknown16(__int64 a1, __int64 a2)
{
  return GameRoutine_1562680(a2, "KeyOff", 1.0);
}

__int64 CombatHUDWindow_Unknown18(__int64 a1, __int64 a2)
{
  return GameRoutine_1562680(a2, "KeyOff", 1.0);
}

__int64 CombatHUDWindow_Unknown20(__int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = GameRoutine_155fbe0(a1 + 24, a2);
  return ui_LayoutAccessor_SetPaneVisible(v2, "A_Cost", 0);
}

__int64 CombatHUDWindow_Unknown21(__int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = GameRoutine_155fbe0(a1 + 24, a2);
  return ui_LayoutAccessor_SetPaneVisible(v2, "A_Cost", 0);
}

__int64 CombatHUDWindow_Unknown29(__int64 a1)
{
  __int64 result;
  int v3;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
  if (*(_BYTE*)(a1 + 215) == 1) {
    *(_BYTE*)(a1 + 215) = 0;
  }
  v3 = *(unsigned __int8*)(a1 + 213);
  *(_DWORD*)(a1 + 220) = -1;
  if (v3 == 1) {
    *(_BYTE*)(a1 + 213) = 0;
  }
  *(_DWORD*)(a1 + 216) = -1;
  return result;
}

__int64 CombatHUDWindow_183ea70(__int64 a1)
{
  __int64 v1;
  __int64 result;
  int v4;

  v1 = a1 - 248;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 248) + 32LL))(a1 - 248);
  if (*(_BYTE*)(v1 + 215) == 1) {
    *(_BYTE*)(a1 - 33) = 0;
  }
  v4 = *(unsigned __int8*)(a1 - 35);
  *(_DWORD*)(a1 - 28) = -1;
  if (v4 == 1) {
    *(_BYTE*)(a1 - 35) = 0;
  }
  *(_DWORD*)(a1 - 32) = -1;
  return result;
}

#pragma GCC visibility pop
