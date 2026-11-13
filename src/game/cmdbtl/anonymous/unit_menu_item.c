#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 CmdbtlUnitSelectMenu_1637be0(void);
__int64 GameRoutine_156c910(__int64 result, const char*, int, ...);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_cmdbtl_CmdBtlUnitSelectMenu_UpdateInfo(_QWORD*, __int64, __int64);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e030[4];
extern __int64 GameData_206e4c0;
extern __int64 GameData_212d690;
__int64 UnitMenuItem_Unknown25(_QWORD* a1);
__int64 CmdbtlUnitSelectMenu_1637be0_alt1(__int64) __asm__(
    "CmdbtlUnitSelectMenu_1637be0");
__int64 game_menu_BasicMenu_Unknown16dd9a0_alt1(__int64 result) __asm__(
    "game_menu_BasicMenu_Unknown16dd9a0");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, __int64, __int64, __int64, unsigned int,
                    unsigned int, int, float, float) __asm__("snd_play_ff2d0");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
void game_cmdbtl_CmdBtlUnitSelectMenu_UpdateInfo_alt1(_QWORD*) __asm__(
    "game_cmdbtl_CmdBtlUnitSelectMenu_UpdateInfo");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");

__int64 UnitMenuItem_Unknown25(_QWORD* a1)
{
  _QWORD handle[2];
  char v2;
  __int64 result;
  char v4;
  char v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v9;
  unsigned int v10;
  __int64 v11;
  __int64 v14;
  _QWORD v15[25];

  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  result = 1;
  if ((v2 & 1) != 0 && a1[11] != 0) {
    v4 = (*(__int64 (**)(_QWORD*))(*a1 + 712LL))(a1);
    if (*((_BYTE*)a1 + 97) == 1) {
      snd_Fade_Fade_10c830_alt1((__int64)v15, 0x0.0p+0f);
      snd_play_ff2d0_alt1((void*)(handle), (__int64)"SE_SYS_Sortie_Exclude",
                          (__int64)"SE_SYS_Sortie_Exclude", (__int64)v15, 0,
                          0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade_alt1(v15);
      v5 = 0;
    }
    else {
      if ((v4 & 1) != 0) {
        (*(void (**)(_QWORD*))(*a1 + 360LL))(a1);
      }
      else {
        snd_Fade_Fade_10c830_alt1((__int64)v15, 0x0.0p+0f);
        snd_play_ff2d0_alt1((void*)(handle), (__int64)"SE_SYS_Sortie_Include",
                            (__int64)"SE_SYS_Sortie_Include", (__int64)v15, 0,
                            0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
        snd_Fade_Destroy_Fade_alt1(v15);
      }
      v5 = 1;
    }
    *((_BYTE*)a1 + 97) = v5;
    (*(void (**)(_QWORD*))(*a1 + 96LL))(a1);
    v6 = a1[1];
    if (v6 != 0) {
      v7 = __dynamic_cast(v6, GameData_212e030[0], &GameData_206e4c0, 0);
      if (v7 != 0) {
        v9 = (_QWORD*)v7;
        v10 = CmdbtlUnitSelectMenu_1637be0_alt1(v7);
        v11 = ui_LayoutAccessor_FindPane_alt1(v9 + 119, (__int64)"L_Num/T_Num");
        if (v11 != 0) {
          v14 = __dynamic_cast(v11, GameData_212d670[0], GameData_212d690, 0);
          if (v14 != 0) {
            GameRoutine_156c910(v14, "%d", 1, v10);
          }
        }
        game_cmdbtl_CmdBtlUnitSelectMenu_UpdateInfo_alt1(v9);
        if ((v4 & 1) != ((*(__int64 (**)(_QWORD*))(*a1 + 712LL))(a1) & 1)) {
          game_menu_BasicMenu_Unknown16dd9a0_alt1((__int64)v9);
        }
      }
    }
    return 13;
  }
  return result;
}

#pragma GCC visibility pop
