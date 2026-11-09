#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern _UNKNOWN GameData_2140050;
extern _UNKNOWN GameData_2140060;
extern _UNKNOWN GameData_2140070;
struct PseudoSret GameRoutine_10e040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_112290(_QWORD, float);
__int64 GameRoutine_1163b0(_QWORD);
__int64 GameRoutine_118ff0(_QWORD);
__int64 GameRoutine_a2af20(_QWORD, _QWORD, const char*, ...);

__int64 GameHr_f38b0(const char* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;
  _QWORD v7[2];
  _BYTE v8[256];

  v1 = GameRoutine_a2af20(v8, 256, "%s/data_snd.elf", a1);
  v2 = GameRoutine_1163b0(v1);
  v3 = GameRoutine_118ff0(v2);
  *(struct PseudoSret*)(v7) = GameRoutine_10e040(v3, v8, 64);
  GameRoutine_112180(&GameData_2140050, v7);
  v5 = GameRoutine_112290(&GameData_2140050, v4);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 48LL))(v5);
}

__int64 GameHr_f3930(const char* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;
  _QWORD v7[2];
  _BYTE v8[256];

  v1 = GameRoutine_a2af20(v8, 256, "%s/data_sndSystem.elf", a1);
  v2 = GameRoutine_1163b0(v1);
  v3 = GameRoutine_118ff0(v2);
  *(struct PseudoSret*)(v7) = GameRoutine_10e040(v3, v8, 64);
  GameRoutine_112180(&GameData_2140060, v7);
  v5 = GameRoutine_112290(&GameData_2140060, v4);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 48LL))(v5);
}

__int64 GameHr_f39b0(const char* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;
  _QWORD v7[2];
  _BYTE v8[256];

  v1 = GameRoutine_a2af20(v8, 256, "%s/data_sndVibration.elf", a1);
  v2 = GameRoutine_1163b0(v1);
  v3 = GameRoutine_118ff0(v2);
  *(struct PseudoSret*)(v7) = GameRoutine_10e040(v3, v8, 64);
  GameRoutine_112180(&GameData_2140070, v7);
  v5 = GameRoutine_112290(&GameData_2140070, v4);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 48LL))(v5);
}

#pragma GCC visibility pop
