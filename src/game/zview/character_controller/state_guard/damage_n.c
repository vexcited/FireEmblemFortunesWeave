#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d48660(_QWORD, _QWORD, _QWORD);
__int64 DamageN_Unknown3_alt1(__int64 a1) __asm__("DamageN_Unknown3");
__int64 DamageN_Unknown5(__int64 a1);
void CharacterController_d48660(__int64, unsigned __int32, int*);
void DamageN_Unknown3(__int64 a1);

void DamageN_Unknown3(__int64 a1)
{
  __int64 v1;
  struct {
    int v2;
    char v3;
    char gap5_[3];
    char v4;
    char gap9_[3];
    char v5;
    char gap13_[3];
    char v6;
    char gap17_[3];
    char v7;
    char gap21_[3];
    int v8;
    char v9;
  } v2_;

  v1 = *(_QWORD*)(a1 + 8);
  v2_.v4 = 0;
  v2_.v5 = 0;
  v2_.v6 = 0;
  v2_.v7 = 0;
  v2_.v2 = 0;
  v2_.v3 = 1;
  v2_.v9 = 1;
  v2_.v8 = 1036831949;
  CharacterController_d48660(v1, 0xB8DB7A9F, &v2_.v2);
}

__int64 DamageN_Unknown5(__int64 a1)
{
  __int64 v1;
  _QWORD v3[4];

  v1 = *(_QWORD*)(a1 + 8);
  memset(v3, 0, sizeof(v3));
  *(_BYTE*)(v1 + 128) = 0;
  return GameRoutine_d48660(*(_QWORD*)(a1 + 8), 1817091785, v3);
}

#pragma GCC visibility pop
