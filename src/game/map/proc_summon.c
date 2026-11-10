#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1084780(void);
__int64 Cursor_734a80(__int64, __int64*);
__int64 GameRoutine_12272a0(_QWORD, _QWORD);
__int64 GameRoutine_6c47b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 UnitActor_81ba20(_QWORD);
__int64 Unit_6ca760(_QWORD, _QWORD);
__int64 game_6d7270(__int64, __int64, int);
__int64 game_HasSkill(_QWORD, _QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_1f94210[])();
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_21309c8[5];
extern __int64 GameData_21ca310;
extern __int64 game_GameModeData_instance_;
float Unit_6c7fa0(__int64, __int64);
long double UnitActor_8194d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 game_map_ProcSummon_CreateImpl_closure_Invoke(__int64 result,
                                                      __int64* a2);

__int64 game_map_ProcSummon_CreateImpl_closure_Invoke(__int64 result,
                                                      __int64* a2)
{
  __int64 v2;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BOOL8 v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  float v17;
  __int128 v18;
  __int128 v19;
  __int64 v20;
  long double v21;
  int v22;
  int v23;
  int v24;
  __int128* v25;
  char* v26;
  char* v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  __int128 v33;
  __int64 v34;
  __int128* v35;
  int v36;
  int v37;

  v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556216LL);
  if (v2 == 0) {
    return result;
  }
  v4 = result;
  game_6d7270(v2, a2[2], *(unsigned __int8*)(*a2 + 498));
  v5 = *((unsigned __int8*)a2 + 8);
  v6 = *(_QWORD*)(v2 + 392);
  v7 = game_GameModeData_instance_;
  LOBYTE(v37) = *((_BYTE*)a2 + 8);
  if (game_GameModeData_instance_ != 0) {
    v7 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  v8 = game_g_shared_system_skills_ptr;
  v9 = v6 != v7 && (*(_BYTE*)(v2 + 418) & 8) == 0 &&
           (LODWORD(v33) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                      game_g_shared_system_skills_ptr) &
                           0xFFF,
            (game_HasSkill(v2 + 1744, &v33) & 1) == 0) ||
       v5 == 9;
  GameRoutine_6c47b0(v2, &v37, v9, 0);
  v10 = *((_DWORD*)a2 + 9);
  v11 = *(_QWORD*)(v2 + 8);
  *(_BYTE*)(v2 + 584) = *((_DWORD*)a2 + 8);
  *(_BYTE*)(v2 + 585) = v10;
  if (v11 != 0) {
    v12 = *(char*)(v11 + 584);
    if ((v12 & 0x80000000) == 0) {
      v13 = *(char*)(v11 + 585);
      if ((v13 & 0x80000000) == 0) {
        v14 = *(_DWORD*)(v11 + 592);
        v15 = v12 | 0x100;
        v16 = v13 | 0x100;
        v17 = (float)(unsigned int)(v14 - 1) * 2.5;
        if (v14 <= 0) {
          v17 = 0.0;
        }
        *(_QWORD*)&v18 = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)v15 * 5.0) + 2.5) +
                    -0x1.4000000000000p+10) +
            v17);
        v31 = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)v16 * 5.0) + 2.5) +
                    -0x1.4000000000000p+10) +
            v17);
        *(float*)&v32 = (float)((float)((float)((float)v15 * 5.0) + 2.5) +
                                -0x1.4000000000000p+10) +
                        v17;
        *((_QWORD*)&v18 + 1) = v31;
        v33 = v18;
        *(_QWORD*)&v19 = __PAIR64__(
            COERCE_UNSIGNED_INT(Unit_6c7fa0(v11, (__int64)&v33)), v32);
        *((_QWORD*)&v19 + 1) = v31;
        v33 = v19;
        Cursor_734a80(v2 + 48, (__int64*)&v33);
        UnitActor_81ba20(v2);
      }
    }
    if (*(_QWORD*)(v2 + 264) != 0) {
      CharacterBuilder_1084780();
    }
  }
  v20 = *a2;
  if (*a2 != 0) {
    LOBYTE(v20) = *(_BYTE*)(v20 + 2088);
  }
  *(_BYTE*)(v2 + 2089) = v20;
  LODWORD(v33) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1C4LL) + v8 + 4) & 0xFFF;
  Unit_6ca760(v2, &v33);
  v21 = UnitActor_8194d0(v2);
  if (*GameData_212ce90[0] != 0 &&
      *(unsigned __int8*)(*GameData_212ce90[0] + 24) ==
          *((unsigned __int8*)a2 + 8)) {
    v22 = *(_DWORD*)(v2 + 416);
    if ((v22 & 1) == 0) {
      *(_DWORD*)(v2 + 416) = v22 & 0xFFFEFFFE | 1;
      *(_WORD*)(v2 + 20) |= 4u;
    }
  }
  if ((*(_WORD*)(v2 + 417) & 0x4004) == 0) {
    v23 = *(char*)(v2 + 584);
    v24 = *(char*)(v2 + 585);
    v25 = &v33;
    v26 = *(char**)(v2 + 600);
    v27 = *(char**)(v2 + 608);
    v34 = v2;
    v35 = &v33;
    v28 = *(_QWORD*)(*GameData_212ce98[0] + 96);
    *(_QWORD*)&v33 = GameData_1f94210;
    *((_QWORD*)&v33 + 1) = v28;
    if (v26 == v27) {
      goto LABEL_31;
    }
    do {
      v29 = *v26 + v23;
      v36 = v26[1] + v24;
      v37 = v29;
      if (v35 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(__int128*, int*, int*, long double))(*(_QWORD*)v35 + 48LL))(
          v35, &v37, &v36, v21);
      v26 += 4;
    } while (v26 != v27);
    v25 = v35;
    if (v35 == &v33) {
    LABEL_31:
      v30 = 32;
      goto LABEL_32;
    }
    if (v35 != nullptr) {
      v30 = 40;
    LABEL_32:
      (*(void (**)(__int64))(*(_QWORD*)v25 + v30))((__int64)v25);
    }
  }
  if (*GameData_21309c8[0] != 0) {
    GameRoutine_12272a0(*GameData_21309c8[0], v2);
  }
  result = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 32LL);
  if (result != 0) {
    *(_QWORD*)&v33 = v2;
    return (*(__int64 (**)(__int64, __int128*))(*(_QWORD*)result + 48LL))(
        result, &v33);
  }
  return result;
}

#pragma GCC visibility pop
