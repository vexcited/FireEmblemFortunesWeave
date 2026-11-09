#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleInfoWindowBase_DeletingDestructor(_QWORD*);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1832b70(__int64, unsigned int, char);
__int64 GameRoutine_1835440(void);
__int64 GameRoutine_18357c0(__int64, char, char);
__int64 GameRoutine_183f160(__int64 result);
__int64 GameRoutine_18ae960(_QWORD, _QWORD);
__int64 GameRoutine_18aee60(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_20e3528[])();
extern __int64 (*GameData_20e3558[])();
extern __int64 (*GameData_20e3600[])();
extern __int64 (*game_map_BattleInfoWindow_vtable[])();
extern __int64 GameData_212d220[5];
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_21c99b8;
extern __int64 GameData_21cd0e8;
extern __int64 GameData_21d3f58;
extern __int64 GameData_21f1e08;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_empty_item;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cfd0[8];
extern int GameData_226b318;
__int64 BattleInfoWindow_DeletingDestructor(_QWORD* a1);
__int64 BattleInfoWindow_183eeb0(_QWORD* a1);
__int64 BattleInfoWindow_Unknown2(_QWORD* a1);
__int64 BattleInfoWindow_183f070(_QWORD* a1);
__int64 BattleInfoWindow_Unknown3(__int64 result);
void BattleInfoWindow_183fa50();
__int64 BattleInfoWindow_Unknown25(__int64 a1);
__int64 BattleInfoWindow_Unknown21(__int64 a1, __int64 a2, __int64 a3, char a4);
__int64 BattleInfoWindow_Unknown24(__int64 a1, char a2, char a3);
__int64 BattleInfoWindow_18403e0(__int64 a1);
__int64 BattleInfoWindow_1840400(__int64 a1);

__int64 BattleInfoWindow_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_map_BattleInfoWindow_vtable;
  a1[30] = GameData_20e3528;
  a1[31] = GameData_20e3558;
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
  a1[30] = GameData_20e3600;
  if ((_QWORD*)GameData_21d3f58 == a1) {
    GameData_21d3f58 = 0;
    GameData_226b318 = 0;
  }
  return BattleInfoWindowBase_DeletingDestructor(a1);
}

__int64 BattleInfoWindow_183eeb0(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  *(a1 - 30) = game_map_BattleInfoWindow_vtable;
  v2 = a1 - 30;
  *a1 = GameData_20e3528;
  a1[1] = GameData_20e3558;
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
  *a1 = GameData_20e3600;
  if ((_QWORD*)GameData_21d3f58 == v2) {
    GameData_21d3f58 = 0;
    GameData_226b318 = 0;
  }
  return BattleInfoWindowBase_DeletingDestructor(v2);
}

__int64 BattleInfoWindow_Unknown2(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = game_map_BattleInfoWindow_vtable;
  a1[30] = GameData_20e3528;
  a1[31] = GameData_20e3558;
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
  a1[30] = GameData_20e3600;
  if ((_QWORD*)GameData_21d3f58 == a1) {
    GameData_21d3f58 = 0;
    GameData_226b318 = 0;
  }
  BattleInfoWindowBase_DeletingDestructor(a1);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

__int64 BattleInfoWindow_183f070(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(a1 - 30) = game_map_BattleInfoWindow_vtable;
  v2 = a1 - 30;
  *a1 = GameData_20e3528;
  a1[1] = GameData_20e3558;
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
  *a1 = GameData_20e3600;
  if ((_QWORD*)GameData_21d3f58 == v2) {
    GameData_21d3f58 = 0;
    GameData_226b318 = 0;
  }
  BattleInfoWindowBase_DeletingDestructor(v2);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v2);
}

__int64 BattleInfoWindow_Unknown3(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = result;
  if (*(_QWORD*)GameData_212d220[0] == 0 ||
      *(int*)(*(_QWORD*)GameData_212d220[0] + 256LL) <= 0) {
    if ((GameRoutine_1832b70(result, 0, 0) & 1) != 0) {
      *(_BYTE*)(v1 + 204) = 1;
      GameRoutine_183f160(v1);
    }
    if ((*(_BYTE*)(v1 + 299) & 1) == 0) {
      *(_BYTE*)(v1 + 299) = 1;
      v2 = (__int64*)GameData_212d8b0[0];
      v3 = *(_QWORD*)GameData_212d8b0[0];
      if (*(_QWORD*)GameData_212d8b0[0] != 0) {
        *(_BYTE*)(v3 + 256) = 0;
        GameRoutine_18aee60(v3, v1 + 24);
        GameRoutine_18ae960(v3, 1);
        v4 = *(_QWORD*)(v3 + 240);
        *(_QWORD*)(v3 + 232) = 0;
        *(_QWORD*)(v3 + 240) = 0;
        if (v4 != 0) {
          std___1___shared_weak_count___release_weak(v4);
        }
        *(_BYTE*)(v3 + 257) = 0;
        *(_DWORD*)(v3 + 248) = -1;
        v5 = *v2;
        if (*v2 != 0) {
          *(_QWORD*)(v5 + 268) = 0x44048000C46D8000LL;
          *(_QWORD*)(v5 + 276) = 0xC4048000446D8000LL;
        }
      }
    }
    return GameRoutine_155e830(v1 + 24, 1);
  }
  return result;
}

void BattleInfoWindow_183fa50()
{
  if (GameData_21d3f58 != 0) {
    *(_BYTE*)(GameData_21d3f58 + 296) = 1;
    if (GameData_21f1e08 != 0) {
      GameRoutine_18ae960(GameData_21f1e08, 0);
    }
  }
}

__int64 BattleInfoWindow_Unknown25(__int64 a1)
{
  unsigned int v1;
  __int64 result;
  __int64 v4;
  unsigned __int16* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  __int64 v12;
  int v13;
  __int64 v15;
  unsigned int v17;
  int v18;

  if (GameData_21cd0e8 == 0) {
    return 0;
  }
  v1 = *(unsigned __int8*)(GameData_21cd0e8 + 32);
  if (v1 > 0x1B) {
    return 0;
  }
  result = 1;
  if (((1 << v1) & 0x370) == 0) {
    if (((1 << v1) & 0x8000008) != 0) {
      return result;
    }
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 152);
  if (v4 == 0) {
    return 0;
  }
  v5 = (unsigned __int16*)(v4 + 60);
  if (*(_WORD*)(v4 + 60) != 0) {
  LABEL_8:
    v7 = *v5;
    if (v7 == 0) {
      goto LABEL_13;
    }
    goto LABEL_9;
  }
  v6 = *(unsigned int*)(v4 + 56);
  if ((v6 & 0x80000000) == 0) {
    v5 = (unsigned __int16*)(*(_QWORD*)(v4 + 40) + 8 * v6 + 828);
    goto LABEL_8;
  }
  v7 = (unsigned __int16)game_g_empty_item;
  if ((_WORD)game_g_empty_item != 0) {
  LABEL_9:
    v8 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v7);
    v9 = *(unsigned __int8*)(v8 + 72);
    v10 = *(unsigned __int8*)(v8 + 73);
    if (v9 <= 7 && v10 == 7) {
      return result;
    }
  }

LABEL_13:
  v12 = *(_QWORD*)(v4 + 72);
  if (v12 == 0 ||
      (((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v12 + 104)) & 1) ==
          0) {
    return 0;
  }
  v13 = *(unsigned __int8*)(v12 + 106);
  if (*(_BYTE*)(v12 + 106) == 0 || v13 == 6) {
    v15 = *(_QWORD*)(v12 + 576);
    if (v15 != 0) {
      goto LABEL_28;
    }
    return 0;
  }
  if (v13 == 1) {
    v15 = *(_QWORD*)(v12 + 576);
    if (v15 == 0) {
      return result;
    }
  LABEL_28:
    if (*(unsigned __int8*)(v15 + 72) <= 7u && *(_BYTE*)(v15 + 73) == 1) {
      return result;
    }
    goto LABEL_34;
  }
  v15 = *(_QWORD*)(v12 + 576);
  if (v15 == 0) {
    return 0;
  }

LABEL_34:
  v17 = *(unsigned __int8*)(v15 + 72);
  v18 = *(unsigned __int8*)(v15 + 73);
  if (v17 > 7 || v18 != 7) {
    return 0;
  }
  return result;
}

__int64 BattleInfoWindow_Unknown21(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v10;

  v4 = *(_QWORD*)(a3 + 8);
  v5 = *(unsigned __int8*)(v4 + 3068);
  v6 = v4 + 3064;
  if (v5 == 1) {
    goto LABEL_5;
  }
  v7 = v4 + 3086;
  do {
    v8 = *(unsigned __int8*)(v7 + 46);
    v7 += 64;
  } while (v8 != 1);
  while (v5 != 24) {
  LABEL_5:
    v5 = *(unsigned __int8*)(v6 + 68);
    v6 += 64;
  }
  if (*GameData_212cfd0[0] != 0) {
    v10 = 0;
    if (*(_BYTE*)(*GameData_212cfd0[0] + 20) == 27) {
      LODWORD(v10) = 1953396079;
      return GameRoutine_1835440();
    }
  }
  else {
    v10 = 0;
  }
  if ((a4 & 1) != 0) {
    strcpy((char*)&v10 + 1, "g");
  }
  else {
    strcpy((char*)&v10 + 1, "dure");
  }
  return GameRoutine_1835440();
}

__int64 BattleInfoWindow_Unknown24(__int64 a1, char a2, char a3)
{
  __int64 v3;
  int v4;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  int v15;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  unsigned __int8 v21;
  __int64 v22;

  if (a2 != 4) {
    if (a2 != 5) {
      return GameRoutine_18357c0(a1, a2, a3 & 1);
    }
    v3 = *(_QWORD*)(a1 + 288);
    if (v3 == 0) {
      return GameRoutine_18357c0(a1, a2, a3 & 1);
    }
    if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v3 + 104)) & 1) ==
        0) {
      goto LABEL_26;
    }
    v4 = *(unsigned __int8*)(v3 + 106);
    if (*(_BYTE*)(v3 + 106) == 0 || v4 == 6) {
      v6 = *(_QWORD*)(v3 + 576);
      if (v6 == 0) {
        goto LABEL_26;
      }
    }
    else {
      if (v4 != 1) {
        goto LABEL_26;
      }
      v6 = *(_QWORD*)(v3 + 576);
      if (v6 == 0) {
        return GameRoutine_18357c0(a1, a2, a3 & 1);
      }
    }
    v14 = *(unsigned __int8*)(v6 + 72);
    v15 = *(unsigned __int8*)(v6 + 73);
    if (v14 > 7 || v15 != 1) {
    LABEL_26:
      v17 = *(_QWORD**)(a1 + 152);
      v18 = v17[100];
      if (v18 == 0 || *(_QWORD*)(v18 + 392) == 0) {
        if ((*(_BYTE*)(v17[98] + 11277LL) & 0x80) != 0) {
          return GameRoutine_1562cf0(a1 + 24, "Info_Battle_PlayerOnly");
        }
        v19 = (_QWORD*)v17[101];
        if (v19 == nullptr) {
          return GameRoutine_1562cf0(a1 + 24, "Info_Battle_PlayerOnly");
        }
        v20 = a1;
        v21 =
            (unsigned __int8)(*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*)) *
                              v19)(v19, v19);
        a1 = v20;
        if ((v21 & 1) == 0) {
          return GameRoutine_1562cf0(a1 + 24, "Info_Battle_PlayerOnly");
        }
      }
      return GameRoutine_1562cf0(a1 + 24, "Info_Battle_TargetUnit_HPOff");
    }
    return GameRoutine_18357c0(a1, a2, a3 & 1);
  }
  v7 = *(_QWORD*)(a1 + 152);
  v8 = (__int64*)(v7 + 60);
  if (*(_WORD*)(v7 + 60) != 0) {
    v9 = *(_QWORD*)(v7 + 40);
    if (v9 == 0) {
      goto LABEL_33;
    }
  }
  else {
    v13 = *(unsigned int*)(v7 + 56);
    if ((v13 & 0x80000000) != 0) {
      v8 = &game_g_empty_item;
      v9 = *(_QWORD*)(v7 + 40);
      if (v9 == 0) {
        goto LABEL_33;
      }
    }
    else {
      v8 = (__int64*)(*(_QWORD*)(v7 + 40) + 8 * v13 + 828);
      v9 = *(_QWORD*)(v7 + 40);
      if (v9 == 0) {
        goto LABEL_33;
      }
    }
  }
  v10 = *(_QWORD*)(v9 + 440);
  if (v10 != 0) {
    v11 = *(unsigned __int8*)(v10 + 16);
    v12 = *(_QWORD*)(v7 + 800);
    if (v12 == 0) {
      goto LABEL_37;
    }
    goto LABEL_34;
  }

LABEL_33:
  v11 = 9;
  v12 = *(_QWORD*)(v7 + 800);
  if (v12 != 0) {
  LABEL_34:
    v22 = *(_QWORD*)(v12 + 440);
    if (v22 != 0) {
      if (v11 != *(unsigned __int8*)(v22 + 16)) {
        return GameRoutine_18357c0(a1, a2, a3 & 1);
      }
      goto LABEL_38;
    }
  }

LABEL_37:
  if (v11 != 9) {
    return GameRoutine_18357c0(a1, a2, a3 & 1);
  }

LABEL_38:
  if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *(unsigned __int16*)v8) +
                          88LL) >>
          ((*((_BYTE*)v8 + 3) & 8) != 0) !=
      0) {
    return GameRoutine_18357c0(a1, a2, a3 & 1);
  }
  return GameRoutine_1562cf0(a1 + 24, "Info_Battle_TargetUnit_HPOff");
}

__int64 BattleInfoWindow_18403e0(__int64 a1)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 248) + 32LL))(a1 - 248);
}

__int64 BattleInfoWindow_1840400(__int64 a1)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 248) + 24LL))(a1 - 248);
}

#pragma GCC visibility pop
