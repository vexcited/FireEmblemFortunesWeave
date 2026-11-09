#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(void);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155ea30(_QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1827b90(_QWORD*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*GameData_20e2220[])();
extern __int64 (*GameData_20e22f8[])();
extern __int64 (*game_map_MapTerrainInfo_vtable[])();
extern __int64 GameData_212d690;
extern __int64 GameData_21ed0a0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d560[9];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212fc70[2];
extern char* GameData_20e2230[8];
extern int GameData_226b240;
__int64 MapTerrainInfo_Destructor(_QWORD* a1);
__int64 MapTerrainInfo_1827f00(__int64 a1, int a2, int a3, char a4);
__int64 MapTerrainInfo_18280a0(__int64 a1);
__int64 MapTerrainInfo_Unknown4(_QWORD* a1);
__int64 MapTerrainInfo_1828150(__int64 a1);
__int64 MapTerrainInfo_Unknown5(__int64 result);

__int64 MapTerrainInfo_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
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
  __int64 result;
  __int64 v25;

  *a1 = game_map_MapTerrainInfo_vtable;
  a1[1] = GameData_20e2220;
  v2 = a1[3];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = a1[4];
  a1[3] = 0;
  a1[4] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 5);
  v4 = a1[48];
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[49] = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7, v4);
  }
  v8 = a1[45];
  if (v8 != 0) {
    v9 = *v5;
    a1[46] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10, v8);
  }
  v11 = a1[41];
  if (v11 != 0) {
    v12 = *v5;
    a1[42] = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(v12 + v13, v11);
  }
  v14 = a1[36];
  if (v14 != 0) {
    v15 = *v5;
    a1[37] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(v15 + v16, v14);
  }
  v17 = a1[33];
  if (v17 != 0) {
    v18 = *v5;
    a1[34] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(v18 + v19, v17);
  }
  v20 = a1[29];
  if (v20 != 0) {
    v21 = *v5;
    a1[30] = v20;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(v21 + v22, v20);
  }
  GameRoutine_155e140(a1 + 5);
  v23 = a1[17];
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
  }
  GameRoutine_1564060(a1 + 11);
  GameRoutine_1563f90(a1 + 8, a1[9]);
  result = a1[6];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v25 = a1[4];
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    result = std___1___shared_weak_count___release_weak(v25);
  }
  *a1 = GameData_20e22f8;
  if ((_QWORD*)GameData_21ed0a0 == a1) {
    GameData_21ed0a0 = 0;
    GameData_226b240 = 0;
  }
  return result;
}

__int64 MapTerrainInfo_1827f00(__int64 a1, int a2, int a3, char a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v7 = GameRoutine_155fbe0(a1 + 40, GameData_20e2230[a2]);
  v8 = v7;
  if (a3 != 0 || (a4 & 1) != 0) {
    GameRoutine_155e830(v7, 1);
    if ((unsigned int)(a2 - 4) >= 4 && a2 != 0) {
      v16 = ui_LayoutAccessor_FindPane(v8, "T_Minus");
      *(_BYTE*)(v16 + 88) = *(_BYTE*)(v16 + 88) & 0xFE | (a3 < 0);
      v12 = ui_LayoutAccessor_FindPane(v8, "T_Plus");
      v13 = *(_BYTE*)(v12 + 88) & 0xFE;
      if (a3 > 0) {
        ++v13;
      }
    }
    else {
      v11 = ui_LayoutAccessor_FindPane(v8, "T_Plus");
      *(_BYTE*)(v11 + 88) &= ~1u;
      v12 = ui_LayoutAccessor_FindPane(v8, "T_Minus");
      v13 = *(_BYTE*)(v12 + 88) & 0xFE;
    }
    *(_BYTE*)(v12 + 88) = v13;
    v14 = ui_LayoutAccessor_FindPane(v8, "T_Num");
    if (v14 != 0) {
      v15 = __dynamic_cast(v14, GameData_212d670[0], GameData_212d690, 0);
      if (v15 != 0) {
        GameRoutine_156c910(v15, "%d", 1);
      }
    }
    result = ui_LayoutAccessor_FindAlignment(v8, "A_Num");
    if (result != 0) {
      return Alignment_56b600();
    }
  }
  else {
    v9 = ui_LayoutAccessor_FindPane(v7, "T_Plus");
    *(_BYTE*)(v9 + 88) &= ~1u;
    result = ui_LayoutAccessor_FindPane(v8, "T_Minus");
    *(_BYTE*)(result + 88) &= ~1u;
  }
  return result;
}

__int64 MapTerrainInfo_18280a0(__int64 a1)
{
  __int64 result;

  result = ui_LayoutAccessor_FindPane(a1, "Skill_Bg");
  if (result != 0) {
    return __dynamic_cast(result, GameData_212d670[0], GameData_212fc70[0], 0);
  }
  return result;
}

__int64 MapTerrainInfo_Unknown4(_QWORD* a1)
{
  int v2;
  __int64 result;

  v2 = GameRoutine_155ea30(a1 + 5) & 1;
  GameRoutine_155e830(a1 + 5, 0);
  result = GameRoutine_155ea30(a1 + 5);
  if (v2 != (result & 1)) {
    return GameRoutine_1827b90(a1);
  }
  return result;
}

__int64 MapTerrainInfo_1828150(__int64 a1)
{
  int v2;
  __int64 result;

  v2 = GameRoutine_155ea30(a1 + 32) & 1;
  GameRoutine_155e830(a1 + 32, 0);
  result = GameRoutine_155ea30(a1 + 32);
  if (v2 != (result & 1)) {
    return GameRoutine_1827b90((_QWORD*)(a1 - 8));
  }
  return result;
}

__int64 MapTerrainInfo_Unknown5(__int64 result)
{
  __int64 v1;
  int v2;

  if (*(_QWORD*)(result + 152) != 0) {
    v1 = result;
    if (*GameData_212d560[0] == 0 || *(int*)(*GameData_212d560[0] + 16) <= 0) {
      v2 = GameRoutine_155ea30(result + 40) & 1;
      GameRoutine_155e830(v1 + 40, 1);
      result = GameRoutine_155ea30(v1 + 40);
      if (v2 != (result & 1)) {
        *(_BYTE*)(v1 + 425) = 1;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
