#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 snd_debug_block0();
extern __int64* GameData_212bf18[9];
extern __int64* GameData_212bf48[3];
extern __int64 GameData_21fc930;
extern __int64 GameData_21fc938;
extern __int64 GameData_21fc940;
extern __int64 GameData_21fc948;
extern __int64 GameData_21fc950;
extern __int64 GameData_21fc958;
extern __int64 GameData_21fc970;
extern __int64 GameData_21fc978;
extern __int64 GameData_21fc980;
extern __int64 GameData_21fc988;
extern __int64 GameData_21fcdc0;
extern __int64 GameData_21fcdc8;
extern char GameData_21fc960;
extern char GameData_21fc968;
void snd_debug_a41030();
void snd_debug_a410a0();
void snd_debug_a420c0();

void snd_debug_a41030()
{
  __int64 v0;
  __int64 v1;

  v0 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_21fc930;
  GameData_21fc930 = (__int64)"snd::bus";
  GameData_21fc938 = v0;
  v1 = *GameData_212bf18[0];
  *GameData_212bf18[0] = (__int64)&GameData_21fc940;
  GameData_21fc940 = (__int64)"snd::bus";
  GameData_21fc948 = (__int64)snd_debug_block0;
  GameData_21fc950 = 0;
  GameData_21fc958 = 0;
  GameData_21fc960 = 0;
  GameData_21fc968 = 2;
  GameData_21fc970 = (__int64)"void Change(const string& id)";
  GameData_21fc978 = v1;
}

void snd_debug_a410a0()
{
  __int64 v0;

  v0 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_21fc980;
  GameData_21fc980 = (__int64)"snd::def";
  GameData_21fc988 = v0;
}

void snd_debug_a420c0()
{
  __int64 v0;

  v0 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_21fcdc0;
  GameData_21fcdc0 = (__int64)"snd::evt";
  GameData_21fcdc8 = v0;
}

#pragma GCC visibility pop
