#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 GameData_212bf68;
extern __int64 GameData_21f3d10;
extern __int64 GameData_2265ee0;
unsigned __int64 GameRoutine_18f34a0(__int64, unsigned __int8*);
__int64 GameRoutine_18f3d00(_QWORD, _QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

unsigned __int64 GameHr_18f3890(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 result;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;

  v3 = a1 + 728;
  if ((_QWORD*)v3 != a2) {
    v3 = GameRoutine_18f3d00(v3, *a2);
  }
  v4 = *(unsigned __int8*)(GameData_21f3d10 + 40);
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = v6;
  }
  else {
    v7 = *(_QWORD*)(GameData_21f3d10 + 48);
  }
  if (v5) {
    v8 = GameData_21f3d10 + 41;
  }
  else {
    v8 = *(_QWORD*)(GameData_21f3d10 + 56);
  }
  v9 = v7 + 3;
  if (v7 + 3 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v3);
  }
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v9 | 7) + 1;
    }
    v10 = (char*)GameRoutine_651b90(GameData_2265ee0, v11, 16, 0);
    v15 = v7 + 3;
    v16 = v10;
    v14 = v11 | 1;
  }
  else {
    v15 = 0;
    v16 = nullptr;
    v14 = (unsigned __int8)(2 * v9);
    v10 = (char*)&v14 + 1;
    if (v7 == 0) {
      goto LABEL_18;
    }
  }
  GameRoutine_1a0b940(v10, v8, v7);
LABEL_18:
  *(_DWORD*)&v10[v7] = 3227999;
  result = GameRoutine_18f34a0(a1, (unsigned __int8*)&v14);
  if ((v14 & 1) != 0 && v16 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v13 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v13);
  }
  *(_BYTE*)(a1 + 777) = 1;
  return result;
}

#pragma GCC visibility pop
