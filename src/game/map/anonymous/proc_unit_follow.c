#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1084780(void);
__int64 Cursor_734a80(__int64, __int64*);
__int64 GameRoutine_658c00(_QWORD);
__int64 IRoute_751080(_QWORD, _QWORD, long double);
__int64 IRoute_751300(_QWORD, _QWORD);
__int64 Image_72a260(_QWORD);
__int64 Image_72b4a0(_QWORD);
__int64 Image_72b6c0(_QWORD);
__int64 UnitActor_81ba20(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_stop_ffc40(_QWORD, _QWORD, long double);
__n128 snd_Fade_Fade_10c830(_QWORD, float);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitAction_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitFollow_vtable[])();
extern __int64 GameData_21ca300;
extern __int64 GameData_21cd100;
float Unit_6c7fa0(__int64, __int64);
void GameRoutine_6c7cb0(__int64, __int64, __int64);
__int64 ProcUnitFollow_Destructor(__int64 a1, long double a2);

__int64 ProcUnitFollow_Destructor(__int64 a1, long double a2)
{
  __int64 v2;
  char v4;
  char v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  float v12;
  __int128 v13;
  __int128 v14;
  __int64 v15;
  __int64 v16;
  long double v17;
  __int64 v18;
  int v19;
  __int64 v21;
  unsigned int v22;
  __int64 v23[26];

  v2 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitFollow_vtable;
  v4 = IRoute_751080(a1 + 160, v2, a2);
  v5 = IRoute_751300(a1 + 160, v2);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 584) = v4;
    *(_BYTE*)(v2 + 585) = v5;
    GameRoutine_6c7cb0(v2, (unsigned int)v4, (unsigned int)v5);
    v6 = *(_QWORD*)(v2 + 8);
    if (v6 != 0) {
      v7 = *(char*)(v6 + 584);
      if ((v7 & 0x80000000) == 0) {
        v8 = *(char*)(v6 + 585);
        if ((v8 & 0x80000000) == 0) {
          v9 = *(_DWORD*)(v6 + 592);
          v10 = v7 | 0x100;
          v11 = v8 | 0x100;
          v12 = (float)(unsigned int)(v9 - 1) * 2.5;
          if (v9 <= 0) {
            v12 = 0.0;
          }
          *(_QWORD*)&v13 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v10 * 5.0) + 2.5) +
                      -0x1.4000000000000p+10) +
              v12);
          v21 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v11 * 5.0) + 2.5) +
                      -0x1.4000000000000p+10) +
              v12);
          *(float*)&v22 = (float)((float)((float)((float)v10 * 5.0) + 2.5) +
                                  -0x1.4000000000000p+10) +
                          v12;
          *((_QWORD*)&v13 + 1) = v21;
          *(_OWORD*)v23 = v13;
          *(_QWORD*)&v14 = __PAIR64__(
              COERCE_UNSIGNED_INT(Unit_6c7fa0(v6, (__int64)v23)), v22);
          *((_QWORD*)&v14 + 1) = v21;
          *(_OWORD*)v23 = v14;
          Cursor_734a80(v2 + 48, v23);
          UnitActor_81ba20(v2);
        }
      }
      if (*(_QWORD*)(v2 + 264) != 0) {
        CharacterBuilder_1084780();
      }
    }
    v15 = GameData_21ca300;
    v16 = *(_QWORD*)(GameData_21ca300 + 96);
    Image_72b4a0(v16);
    Image_72b6c0(v16);
    Image_72a260(*(_QWORD*)(v15 + 152));
  }
  *(__n128*)&v17 = snd_Fade_Fade_10c830(v23, 0.0);
  snd_stop_ffc40(a1 + 368, v23, v17);
  snd_Fade_Destroy_Fade(v23);
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitAction_vtable;
  v18 = GameData_21cd100;
  v19 = *(_DWORD*)(GameData_21cd100 + 16) - 1;
  *(_DWORD*)(GameData_21cd100 + 16) = v19;
  if (v19 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v18 + 8) + 8LL))(v18 + 8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
