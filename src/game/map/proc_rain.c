#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_9a4d20(_QWORD, _QWORD);
__int64 Situation_763690(__int64);
__int64 Situation_763930(unsigned int, float);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_map_kVariableSituation1000;
extern __int64 game_map_kVariableSituation200;
extern __int64 game_map_kVariableSituation800;
extern __int64* GameData_212ce90[3];
__int64 ProcRain_Unknown2(__int64 result);
__int64 ProcRain_Unknown18(float a1);
__int64 ProcRain_Unknown19(__int64 a1, char a2);

__int64 ProcRain_Unknown2(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  float v4;
  float v5;
  int v6;
  float v7;
  unsigned __int8* v8;
  unsigned int v9;
  bool v10;
  int v11;

  v1 = result;
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v3 = 2)
           : (v3 = 3),
       (v3 & v2) != 0)) {
    v4 = *(float*)(result + 160);
    v5 = *(float*)(result + 164);
    v6 = *(unsigned __int8*)(result + 177);
    *(_BYTE*)(result + 177) = 0;
    if (v5 < v4) {
      v7 = v5 + (**(float (***)(__int64))(result + 152))(result + 152);
      if (*(float*)(v1 + 160) < v7) {
        v7 = *(float*)(v1 + 160);
      }
      *(float*)(v1 + 164) = v7;
      goto LABEL_12;
    }
    if (v6 != 0) {
    LABEL_12:
      (*(void (**)(__int64))(*(_QWORD*)(v1 + 152) + 16LL))(v1 + 152);
      return (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 144LL))(v1);
    }
  }
  v8 = *(unsigned __int8**)(result + 16);
  if (v8 != nullptr) {
    v9 = *v8;
    v10 = v9 > 0x10;
    v11 = (1 << v9) & 0x1CE00;
    if (!v10 && v11 != 0) {
      *(_WORD*)(result + 136) |= 0x80u;
    }
  }
  *(_WORD*)(result + 136) |= 8u;
  return result;
}

__int64 ProcRain_Unknown18(float a1)
{
  char v3;
  char v4[23];

  if (a1 <= 0.0) {
    v3 = 12;
    strcpy(v4, "Normal");
  }
  else {
    v3 = 8;
    strcpy(v4, "Rain");
  }
  GameRoutine_9a4d20(2, &v3);
  return Situation_763930(1u, a1);
}

__int64 ProcRain_Unknown19(__int64 a1, char a2)
{
  int v2;
  __int64 v3;
  int v4;

  if ((a2 & 1) != 0) {
    v2 = 2048;
  }
  else {
    v2 = 0;
  }
  v3 = *GameData_212ce90[0];
  v4 = *(_DWORD*)(*GameData_212ce90[0] + 20);
  *(_DWORD*)(*GameData_212ce90[0] + 20) = v4 & 0xFFFFF7FF | v2;
  game_VariableManager_SetFlag(&game_map_kVariableSituation1000,
                               (v4 & 0x1000) != 0);
  game_VariableManager_SetFlag(&game_map_kVariableSituation800,
                               (*(_DWORD*)(v3 + 20) & 0x800) != 0);
  game_VariableManager_SetFlag(&game_map_kVariableSituation200,
                               (*(_DWORD*)(v3 + 20) & 0x200) != 0);
  return Situation_763690(v3);
}

#pragma GCC visibility pop
