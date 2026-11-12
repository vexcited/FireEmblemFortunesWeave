#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SystemNatives_1192410();
_QWORD* system_WaitSec(float);
_QWORD* system_skip_Escape();
__int64 game_script_system_fade_In();
__int64 game_script_system_fade_IsOut();
__int64 game_script_system_fade_Out();
extern __int64* GameData_212bf18[9];
extern __int64* GameData_212bf48[3];
extern __int64 GameData_223e068;
extern __int64 GameData_223e070;
extern __int64 GameData_223e078;
extern __int64 GameData_223e080;
extern __int64 GameData_223e088;
extern __int64 GameData_223e090;
extern __int64 GameData_223e0a8;
extern __int64 GameData_223e0b0;
extern __int64 GameData_223e0b8;
extern __int64 GameData_223e0c0;
extern __int64 GameData_223e0c8;
extern __int64 GameData_223e0d0;
extern __int64 GameData_223e0e8;
extern __int64 GameData_223e0f0;
extern __int64 GameData_223e0f8;
extern __int64 GameData_223e100;
extern __int64 GameData_223e108;
extern __int64 GameData_223e110;
extern __int64 GameData_223e128;
extern __int64 GameData_223e130;
extern __int64 GameData_223e138;
extern __int64 GameData_223e140;
extern __int64 GameData_223e148;
extern __int64 GameData_223e150;
extern __int64 GameData_223e168;
extern __int64 GameData_223e170;
extern __int64 GameData_223e178;
extern __int64 GameData_223e180;
extern __int64 GameData_223e188;
extern __int64 GameData_223e190;
extern __int64 GameData_223e1a8;
extern __int64 GameData_223e1b0;
extern __int64 GameData_223e1b8;
extern __int64 GameData_223e1c0;
extern __int64 GameData_223e1c8;
extern __int64 GameData_223e1d0;
extern __int64 GameData_223e1e8;
extern __int64 GameData_223e1f0;
extern char GameData_223e098;
extern char GameData_223e0a0;
extern char GameData_223e0d8;
extern char GameData_223e0e0;
extern char GameData_223e118;
extern char GameData_223e120;
extern char GameData_223e158;
extern char GameData_223e160;
extern char GameData_223e198;
extern char GameData_223e1a0;
extern char GameData_223e1d8;
extern char GameData_223e1e0;
void anonymous_1192b00();

void anonymous_1192b00()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;

  GameData_223e078 = (__int64)"system";
  GameData_223e080 = (__int64)system_WaitSec;
  v0 = GameData_212bf18[0];
  GameData_223e088 = 0;
  GameData_223e090 = 0;
  GameData_223e098 = 0;
  GameData_223e0c8 = 0;
  GameData_223e0d0 = 0;
  GameData_223e0d8 = 0;
  GameData_223e0b8 = (__int64)"system::skip";
  GameData_223e0c0 = (__int64)system_skip_Escape;
  v1 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_223e068;
  GameData_223e0a0 = 2;
  GameData_223e0e0 = 2;
  GameData_223e068 = (__int64)"system";
  GameData_223e070 = v1;
  v2 = *v0;
  GameData_223e0e8 = (__int64)"void Escape()";
  GameData_223e0f0 = (__int64)&GameData_223e078;
  GameData_223e108 = 0;
  GameData_223e110 = 0;
  GameData_223e118 = 0;
  GameData_223e120 = 2;
  GameData_223e0a8 = (__int64)"void WaitSec(float sec)";
  GameData_223e0b0 = v2;
  GameData_223e0f8 = (__int64)"system::fade";
  GameData_223e100 = (__int64)game_script_system_fade_Out;
  GameData_223e128 = (__int64)"void Out(float sec, float r = 0.0, float g = "
                              "0.0, float b = 0.0)";
  GameData_223e130 = (__int64)&GameData_223e0b8;
  GameData_223e138 = (__int64)"system::fade";
  GameData_223e140 = (__int64)game_script_system_fade_In;
  GameData_223e148 = 0;
  GameData_223e150 = 0;
  GameData_223e158 = 0;
  GameData_223e160 = 2;
  GameData_223e168 = (__int64)"void In(float sec)";
  GameData_223e170 = (__int64)&GameData_223e0f8;
  GameData_223e178 = (__int64)"system::fade";
  GameData_223e180 = (__int64)SystemNatives_1192410;
  GameData_223e198 = 0;
  GameData_223e188 = 0;
  GameData_223e190 = 0;
  GameData_223e1a0 = 2;
  GameData_223e1a8 = (__int64)"void Wait(void)";
  GameData_223e1b0 = (__int64)&GameData_223e138;
  *v0 = (__int64)&GameData_223e1b8;
  GameData_223e1d8 = 0;
  GameData_223e1c8 = 0;
  GameData_223e1d0 = 0;
  GameData_223e1e0 = 2;
  GameData_223e1b8 = (__int64)"system::fade";
  GameData_223e1c0 = (__int64)game_script_system_fade_IsOut;
  GameData_223e1e8 = (__int64)"bool IsOut(void)";
  GameData_223e1f0 = (__int64)&GameData_223e178;
}

#pragma GCC visibility pop
