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

__int64 UnitMenuItem_Unknown25(_QWORD* a1)
{
  char v2;
  __int64 result;
  char v4;
  char v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[2];
  _BYTE v15[200];

  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  result = 1;
  if ((v2 & 1) != 0 && a1[11] != 0) {
    v4 = (*(__int64 (**)(_QWORD*))(*a1 + 712LL))(a1);
    if (*((_BYTE*)a1 + 97) == 1) {
      snd_Fade_Fade_10c830(v15, 0.0f);
      snd_play_ff2d0((void*)(v14), "SE_SYS_Sortie_Exclude",
                     "SE_SYS_Sortie_Exclude", v15, 0, 65537, 0, 0.0f, 1.0f);
      snd_Fade_Destroy_Fade(v15);
      v5 = 0;
    }
    else {
      if ((v4 & 1) != 0) {
        (*(void (**)(_QWORD*))(*a1 + 360LL))(a1);
      }
      else {
        snd_Fade_Fade_10c830(v15, 0.0f);
        snd_play_ff2d0((void*)(v14), "SE_SYS_Sortie_Include",
                       "SE_SYS_Sortie_Include", v15, 0, 65537, 0, 0.0f, 1.0f);
        snd_Fade_Destroy_Fade(v15);
      }
      v5 = 1;
    }
    *((_BYTE*)a1 + 97) = v5;
    (*(void (**)(_QWORD*))(*a1 + 96LL))(a1);
    v6 = a1[1];
    if (v6 != 0) {
      v7 = __dynamic_cast(v6, GameData_212e030[0], &GameData_206e4c0, 0);
      if (v7 != 0) {
        v8 = (_QWORD*)v7;
        v9 = CmdbtlUnitSelectMenu_1637be0();
        v10 = ui_LayoutAccessor_FindPane(v8 + 119, "L_Num/T_Num");
        if (v10 != 0) {
          v13 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d690, 0);
          if (v13 != 0) {
            GameRoutine_156c910(v13, "%d", 1, v9);
          }
        }
        game_cmdbtl_CmdBtlUnitSelectMenu_UpdateInfo(v8, v11, v12);
        if ((v4 & 1) != ((*(__int64 (**)(_QWORD*))(*a1 + 712LL))(a1) & 1)) {
          game_menu_BasicMenu_Unknown16dd9a0(v8);
        }
      }
    }
    return 13;
  }
  return result;
}

#pragma GCC visibility pop
