#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16425d0(__int64 (*)());
__int64 GameRoutine_17871c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1787b80(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_ProcInst_Register(_QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_PageTab_Update(_QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
bool GameRoutine_16427c0(__int64);
extern _UNKNOWN GameData_1a9e7d2;
extern _UNKNOWN GameData_1ad7c96;
extern _UNKNOWN* GameData_21319e0;
extern __int64 GameData_20702e8;
extern __int64 GameData_20718c8;
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131d78[11];
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130240[8];
extern __int64* GameData_21319e8[10];
extern __int64* GameData_21319f0[9];
__int64 BanquetDecide_Unknown30(__int64 a1, char a2);
void* BanquetDecide_Unknown67();
__int64 BanquetDecide_Unknown100(__int64 a1);
__int64 BanquetDecide_Unknown107(_QWORD* a1);
__int64 BanquetDecide_Unknown109(__int64 a1);
__int64 BanquetDecide_Unknown112(__int64 a1);
__int64 BanquetDecide_Unknown137(__int64 a1);
__int64 BanquetDecide_Unknown141(__int64 a1);
__int64 BanquetDecide_Unknown146(__int64 a1);
_DWORD* BanquetDecide_Unknown149(__int64 a1);
__int64 BanquetDecide_Unknown157(__int64 a1);
__int64 BanquetDecide_Unknown158(__int64 a1);
__int64 BanquetDecide_Unknown150(__int64 a1);

__int64 BanquetDecide_Unknown30(__int64 a1, char a2)
{
  __int64 result;
  char v4;

  result = ui_LayoutAccessor_FindPane(a1 + 952, "L_MenuItem00");
  if (result != 0) {
    if ((a2 & 1) != 0) {
      v4 = -1;
    }
    else {
      v4 = 40;
    }
    *(_BYTE*)(result + 89) = v4;
  }
  return result;
}

void* BanquetDecide_Unknown67()
{
  void* result;

  if (GameData_21f3d10 == 0) {
    return &GameData_1ad7c96;
  }
  result = &GameData_1ad7c96;
  if (*(_BYTE*)(GameData_21f3d10 + 9) == 1 &&
      *(_DWORD*)(GameData_21f3d10 + 136) == 1) {
    return &GameData_1a9e7d2;
  }
  return result;
}

__int64 BanquetDecide_Unknown100(__int64 a1)
{
  __int64 v1;
  __int64 (*v2)();

  v1 = *(_QWORD*)(a1 + 1056);
  if ((*(_BYTE*)(v1 + 356) & 1) != 0) {
    return 0;
  }
  v2 = (__int64 (*)())__dynamic_cast(v1, GameData_21319e8[0], &GameData_20702e8,
                                     0);
  if ((GameRoutine_16425d0(v2) & 1) != 0) {
    return 12;
  }
  else {
    return 1;
  }
}

__int64 BanquetDecide_Unknown107(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;

  if ((*(unsigned int (**)(_QWORD*))(*a1 + 1120LL))(a1) != 0 &&
      (*(_BYTE*)(a1[132] + 356LL) & 1) == 0) {
    v3 = a1[22];
    v2 = a1 + 22;
    (*(void (**)(_QWORD*))(v3 + 144))(v2);
    v4 = GameData_21319e8[0];
    v5 = __dynamic_cast(v2[110], GameData_21319e8[0], &GameData_20702e8, 0);
    GameRoutine_17871c0(v5, 1, 1);
    *(_BYTE*)(__dynamic_cast(v2[110], v4, &GameData_20702e8, 0) + 440) = 1;
  }
  return 0;
}

__int64 BanquetDecide_Unknown109(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  void* v10;
  _BYTE* v11;
  char v12;

  if ((*(_BYTE*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1) != 0) {
    return 0;
  }
  if (*(_QWORD*)(a1 + 152) != 0) {
    v1 = *(_QWORD*)(a1 + 152);
  }
  else {
    v1 = a1;
  }
  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      512, 16, 0);
  memset(v2 + 144, 0, 368, v3, v4, v5);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  *(_WORD*)(v2 + 136) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = "NULL";
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 138) = 0;
  *(_QWORD*)(v2 + 144) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)v2 = v6 + 16;
  *(_QWORD*)(v2 + 8) = 0;
  game_ProcInst_Register(v2);
  v7 = GameData_2130240[0];
  *(_BYTE*)(v2 + 168) = 0;
  *(_BYTE*)(v2 + 172) = 0;
  *(_QWORD*)(v2 + 192) = 0;
  *(_QWORD*)(v2 + 200) = 0;
  *(_QWORD*)(v2 + 208) = 0;
  *(_QWORD*)(v2 + 216) = 0;
  *(_QWORD*)(v2 + 240) = 0;
  *(_QWORD*)(v2 + 248) = 0;
  *(_QWORD*)(v2 + 256) = 0;
  *(_QWORD*)(v2 + 264) = 0;
  *(_QWORD*)(v2 + 272) = 0;
  *(_QWORD*)(v2 + 336) = 0;
  *(_QWORD*)(v2 + 344) = 0;
  *(_QWORD*)(v2 + 320) = 0;
  *(_QWORD*)(v2 + 328) = 0;
  *(_QWORD*)(v2 + 304) = 0;
  *(_QWORD*)(v2 + 312) = 0;
  *(_QWORD*)(v2 + 288) = 0;
  *(_QWORD*)(v2 + 296) = 0;
  *(_DWORD*)(v2 + 376) = 0;
  *(_QWORD*)(v2 + 384) = 0;
  *(_QWORD*)(v2 + 392) = 0;
  *(_QWORD*)(v2 + 400) = 0;
  *(_QWORD*)(v2 + 448) = 0;
  *(_QWORD*)(v2 + 464) = 0;
  *(_QWORD*)(v2 + 472) = 0;
  *(_BYTE*)(v2 + 480) = 0;
  *(_QWORD*)(v2 + 496) = 0;
  *(_QWORD*)(v2 + 152) = 0;
  *(_QWORD*)(v2 + 160) = v7 + 2;
  *(_QWORD*)(v2 + 232) = 0;
  *(_QWORD*)(v2 + 224) = v2 + 232;
  *(_DWORD*)(v2 + 280) = 1065353216;
  *(_QWORD*)(v2 + 352) = 1;
  *(_QWORD*)(v2 + 368) = 0xFFFFFFFFLL;
  *(_DWORD*)(v2 + 408) = 2;
  v8 = GameData_2131d78[0] + 440;
  *(_QWORD*)v2 = GameData_2131d78[0] + 16;
  *(_QWORD*)(v2 + 176) = v8;
  *(_QWORD*)(v2 + 184) = 0;
  v9 = *(_QWORD*)(v1 + 40);
  if (v9 != 0) {
    *(_QWORD*)(v9 + 48) = v2;
    *(_QWORD*)(v2 + 56) = *(_QWORD*)(v1 + 40);
  }
  *(_QWORD*)(v1 + 40) = v2;
  *(_QWORD*)(v2 + 24) = "InfoUnitTroopSequence";
  *(_QWORD*)(v2 + 32) = v1;
  *(_DWORD*)(v2 + 140) = game_HashString32();
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 24;
  *(_QWORD*)(v2 + 80) = 1;
  v10 = GameData_21319e0;
  *(_QWORD*)(v2 + 8) = GameData_21319e0;
  *(_QWORD*)(v2 + 16) = v10;
  (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2) & 1) != 0 &&
      (*(_WORD*)(v2 + 136) & 0x100) == 0) {
    *(_WORD*)(v2 + 136) |= 0x100u;
  }
  v11 = *(_BYTE**)(v2 + 32);
  v12 = v11[138];
  if (v12 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v11 + 64LL))(*(_QWORD*)(v2 + 32));
    v12 = v11[138];
  }
  v11[138] = v12 + 1;
  *(_WORD*)(v2 + 136) |= 2u;
  return 9;
}

__int64 BanquetDecide_Unknown112(__int64 a1)
{
  __int64 v1;
  __int64 (*v2)();

  v1 = *(_QWORD*)(a1 + 1056);
  if ((*(_BYTE*)(v1 + 356) & 1) != 0) {
    return 0;
  }
  v2 = (__int64 (*)())__dynamic_cast(v1, GameData_21319e8[0], &GameData_20702e8,
                                     0);
  if ((GameRoutine_16425d0(v2) & 1) != 0) {
    return 12;
  }
  else {
    return 1;
  }
}

__int64 BanquetDecide_Unknown137(__int64 a1)
{
  __int64 v1;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  int v6;
  __int64 v7;
  int v8;
  int* v9;
  int* i;
  __int64 result;
  __int64 v12;
  _DWORD* v13;
  _DWORD* j;

  v1 = *(_QWORD*)(a1 + 1056);
  v3 = *(
      _QWORD**)(__dynamic_cast(v1, GameData_21319e8[0], &GameData_20702e8, 0) +
                304);
  if (v3 != nullptr) {
    v4 = (_QWORD*)v3[29];
    v5 = (_QWORD*)v3[30];
    if (v4 == v5) {
      v8 = -1;
    }
    else {
      v6 = 0;
      do {
        v7 = *v4;
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 48LL))(*v4) & 1) != 0) {
          v6 += (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 40LL))(v7) & 1;
        }
        ++v4;
      } while (v4 != v5);
      v8 = v6 - 1;
    }
    v9 = (int*)v3[101];
    for (i = (int*)v3[102]; v9 != i; ++v9) {
      *v9 = v8;
    }
    v1 = *(_QWORD*)(a1 + 1056);
  }
  result =
      *(_QWORD*)(__dynamic_cast(v1, GameData_21319e8[0], &GameData_20702e8, 0) +
                 312);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_21319f0[0], &GameData_20718c8, 0);
    if (result != 0) {
      v12 = result;
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 1304LL))(result);
      v13 = *(_DWORD**)(v12 + 808);
      for (j = *(_DWORD**)(v12 + 816); v13 != j; ++v13) {
        *v13 = result - 1;
      }
    }
  }
  return result;
}

__int64 BanquetDecide_Unknown141(__int64 a1)
{
  __int64 v1;

  v1 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20702e8, 0);
  if (GameRoutine_16427c0(v1)) {
    return 12;
  }
  else {
    return 3;
  }
}

__int64 BanquetDecide_Unknown146(__int64 a1)
{
  __int64 v1;

  v1 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20702e8, 0);
  return GameRoutine_17871c0(v1, 1, 1);
}

_DWORD* BanquetDecide_Unknown149(__int64 a1)
{
  __int64 v1;
  _DWORD* result;
  int v3;
  int v4;
  _DWORD* v5;

  v1 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20702e8, 0);
  *(_BYTE*)(v1 + 440) = 1;
  result = *(_DWORD**)(v1 + 312);
  if (result != nullptr) {
    result = (_DWORD*)__dynamic_cast(result, GameData_21319f0[0],
                                     &GameData_20718c8, 0);
  }
  v3 = result[164];
  v4 = result[165];
  if (v4 != v3) {
    result[166] = v4;
    result[165] = v3;
    v5 = result;
    game_menu_PageTab_Update(result + 164);
    return (_DWORD*)game_menu_BasicMenu_Unknown16de4d0(v5);
  }
  return result;
}

__int64 BanquetDecide_Unknown150(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  int v4;

  v1 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20702e8, 0);
  *(_BYTE*)(v1 + 440) = 1;
  result = *(_QWORD*)(v1 + 312);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_21319f0[0], &GameData_20718c8, 0);
    v3 = result;
    v4 = *(_DWORD*)(result + 660);
    if (v4 == 0) {
      return result;
    }
    goto LABEL_3;
  }
  v3 = 0;
  v4 = (*(_DWORD*)0x294LL);
  if ((*(_DWORD*)0x294LL) != 0) {
  LABEL_3:
    *(_DWORD*)(v3 + 664) = v4;
    *(_DWORD*)(v3 + 660) = 0;
    game_menu_PageTab_Update(v3 + 656);
    return game_menu_BasicMenu_Unknown16de4d0(v3);
  }
  return result;
}

__int64 BanquetDecide_Unknown157(__int64 a1)
{
  __int64 v1;

  v1 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20702e8, 0);
  return GameRoutine_1787b80(v1);
}

__int64 BanquetDecide_Unknown158(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 1056);
  v6 =
      *(_QWORD*)(__dynamic_cast(v1, GameData_21319e8[0], &GameData_20702e8, 0) +
                 304);
  if (v6 != 0) {
    v7 = *(_QWORD*)(v6 + 808);
    v8 = *(_QWORD*)(v6 + 816);
    if (v7 != v8) {
      memset(v7, 0, v8 - v7, v3, v4, v5);
      v1 = *(_QWORD*)(a1 + 1056);
    }
  }
  v9 = __dynamic_cast(v1, GameData_21319e8[0], &GameData_20702e8, 0);
  return GameRoutine_1787b80(v9);
}

#pragma GCC visibility pop
