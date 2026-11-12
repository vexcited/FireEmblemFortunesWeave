#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_15d2910(__int64, unsigned __int16*);
__int64 GameRoutine_16425d0(__int64 (*)());
__int64 GameRoutine_16e2460(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1788180(void);
__int64 GameRoutine_96bae0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_ProcInst_Register(_QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_PageTab_Update(_QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
bool GameRoutine_16427c0(__int64);
extern _UNKNOWN GameData_1a9e7d2;
extern _UNKNOWN GameData_1ad7c96;
extern _UNKNOWN* GameData_21319e0;
extern __int64 GameData_20702e8;
extern __int64 GameData_2071180;
extern __int64 GameData_20718c8;
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131d78[11];
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64* GameData_212e008[9];
extern __int64* GameData_2130240[8];
extern __int64* GameData_21319e8[10];
extern __int64* GameData_21319f0[9];
extern __int64* game_g_empty_item_ptr;
void* BanquetUser_1642d70();
__int64 BanquetUser_1642e30(__int64 a1);
__int64 BanquetUser_1642f30(__int64 a1);
__int64 BanquetUser_1643150(__int64 a1);
__int64 BanquetUser_16431a0(__int64 a1);
__int64 BanquetUser_Unknown137(__int64 a1);
__int64 BanquetUser_1643200(__int64 a1);
__int64 BanquetUser_16432f0(__int64 a1);
bool BanquetUser_Unknown148(__int64 a1);
_DWORD* BanquetUser_Unknown149(__int64 a1);
__int64 BanquetUser_Unknown155(__int64 a1, char a2);
__int64 BanquetUser_Unknown156(__int64 a1, char a2);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__int64 BanquetUser_1642dc0(__int64 a1, int a2);
__int64 BanquetUser_Unknown150(__int64 a1);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");

void* BanquetUser_1642d70()
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

__int64 BanquetUser_1642dc0(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  _QWORD v5[27];

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (a2 == 1) {
    v5[25] = v2;
    v5[26] = v3;
    snd_Fade_Fade_10c830_alt1((__int64)v5, 0x0.0p+0f),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    snd_play_ff2d0_alt1((__int64)"SE_SYS_NG", (__int64)"SE_SYS_NG", (__int64)v5,
                        0, 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return snd_Fade_Destroy_Fade_alt1(v5);
  }
  return result;
}

__int64 BanquetUser_1642e30(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int16* v7;
  __int64 v8;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0 && (v3 = __dynamic_cast(v2, GameData_212e008[0],
                                      &GameData_2071180, 0)) != 0) {
    v4 = (int*)v3;
    v5 = *(_QWORD*)(a1 + 1056);
    if (v5 != 0) {
      v6 = __dynamic_cast(v5, GameData_21319e8[0], &GameData_20702e8, 0);
    }
    else {
      v6 = 0;
    }
    if (((*(__int64 (**)(int*))(*(_QWORD*)v4 + 480LL))(v4) & 1) == 0) {
      v7 =
          (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                        game_TransporterConst_List_instance__ptr
                                                            [0] +
                                                    8LL) +
                                         8LL) +
                              12LL * v4[10] + 4);
      goto LABEL_9;
    }
  }
  else {
    v6 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                        &GameData_20702e8, 0);
  }
  v7 = (unsigned __int16*)game_g_empty_item_ptr;

LABEL_9:
  v8 = GameRoutine_155fbe0(v6 + 200, "L_InfoDetail");
  return GameRoutine_15d2910(v8, v7);
}

__int64 BanquetUser_1642f30(__int64 a1)
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
    return 1;
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

__int64 BanquetUser_1643150(__int64 a1)
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

__int64 BanquetUser_16431a0(__int64 a1)
{
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1) != 0) {
    return 1;
  }
  else {
    return GameRoutine_1788180();
  }
}

__int64 BanquetUser_Unknown137(__int64 a1)
{
  __int64 result;

  result = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                          &GameData_20702e8, 0);
  *(_BYTE*)(result + 440) = 0;
  return result;
}

__int64 BanquetUser_1643200(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;

  GameRoutine_1567590("Tutorial", 0);
  GameRoutine_1567590("TroopList", 0);
  v2 = GameData_21319e8[0];
  v3 = *(_QWORD*)(__dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                                 &GameData_20702e8, 0) +
                  312);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 240LL))(v3, 1);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 248LL))(v3, 1);
  v4 = *(
      _QWORD*)(__dynamic_cast(*(_QWORD*)(a1 + 1056), v2, &GameData_20702e8, 0) +
               320);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 240LL))(v4, 1);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 248LL))(v4, 1);
}

__int64 BanquetUser_16432f0(__int64 a1)
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

bool BanquetUser_Unknown148(__int64 a1)
{
  return (*(_BYTE*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1) == 0;
}

_DWORD* BanquetUser_Unknown149(__int64 a1)
{
  __int64 v1;
  _DWORD* result;
  int v3;
  int v4;
  _DWORD* v5;

  v1 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20702e8, 0);
  *(_BYTE*)(v1 + 440) = 0;
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

__int64 BanquetUser_Unknown150(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  int v4;

  v1 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20702e8, 0);
  *(_BYTE*)(v1 + 440) = 0;
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

__int64 BanquetUser_Unknown155(__int64 a1, char a2)
{
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  char v10;

  v4 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20702e8, 0);
  if ((GameRoutine_96bae0(v4 + 384) & 1) == 0 ||
      (*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 1120LL))(a1) == 1 ||
      (*(_BYTE*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1) != 0) {
    goto LABEL_12;
  }
  v5 = GameRoutine_16e2460(a1, 0, 0);
  v6 = *(_QWORD*)(a1 + 232);
  v7 = v5;
  if (*(_QWORD*)(a1 + 240) != v6) {
    v8 = 0;
    while (1) {
      v9 = *(_QWORD*)(v6 + 8 * v8);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 48LL))(v9) & 1) != 0 &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 40LL))(v9) & 1) != 0) {
        break;
      }
      v6 = *(_QWORD*)(a1 + 232);
      if (++v8 >= (unsigned __int64)((*(_QWORD*)(a1 + 240) - v6) >> 3)) {
        goto LABEL_11;
      }
    }
    if (v7 == (_DWORD)v8) {
      goto LABEL_10;
    }
  LABEL_12:
    v10 = 0;
    return v10 & 1;
  }

LABEL_11:
  if (v7 != -1) {
    goto LABEL_12;
  }

LABEL_10:
  v10 = a2 | (*(_DWORD*)(a1 + 1064) != 0);
  return v10 & 1;
}

__int64 BanquetUser_Unknown156(__int64 a1, char a2)
{
  __int64 v4;
  int v5;
  _QWORD* v6;
  _QWORD* v7;
  int v8;
  int v9;
  __int64 v10;
  char v11;

  v4 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20702e8, 0);
  if ((GameRoutine_96bae0(v4 + 384) & 1) == 0 ||
      (*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 1120LL))(a1) == 1 ||
      (*(_BYTE*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1) != 0) {
    goto LABEL_12;
  }
  v5 = GameRoutine_16e2460(a1, 0, 0);
  v6 = *(_QWORD**)(a1 + 232);
  v7 = *(_QWORD**)(a1 + 240);
  v8 = v5;
  if (v6 != v7) {
    v9 = 0;
    do {
      v10 = *v6;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v6 + 48LL))(*v6) & 1) != 0) {
        v9 += (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 40LL))(v10) & 1;
      }
      ++v6;
    } while (v6 != v7);
    if (v8 == v9 - 1) {
      goto LABEL_10;
    }
  LABEL_12:
    v11 = 0;
    return v11 & 1;
  }
  if (v5 != -1) {
    goto LABEL_12;
  }

LABEL_10:
  v11 = a2 | (*(_DWORD*)(a1 + 1064) == 0);
  return v11 & 1;
}

#pragma GCC visibility pop
