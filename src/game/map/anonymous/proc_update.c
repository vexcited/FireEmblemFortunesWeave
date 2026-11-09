#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7d5160(_QWORD, _QWORD);
extern __int64 GameData_22400f8;
extern __int64* GameData_212cfb8[11];
__int64 ProcUpdate_Unknown2(__int64 a1);

__int64 ProcUpdate_Unknown2(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  result = GameRoutine_7d5160(*(_QWORD*)(*GameData_212cfb8[0] + 16), 1);
  if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
    *(_DWORD*)(GameData_22400f8 + 12) |= 0x402u;
  }
  v3 = *(unsigned __int8**)(a1 + 16);
  if (v3 != nullptr) {
    v4 = *v3;
    v5 = v4 > 0x10;
    v6 = (1 << v4) & 0x1CE00;
    if (!v5 && v6 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(a1 + 136) |= 8u;
  return result;
}

#pragma GCC visibility pop
