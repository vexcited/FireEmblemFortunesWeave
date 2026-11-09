#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f0f310(__int64 result, __int64);
__int64 game_Unit_GetJob(_QWORD);
unsigned __int64 DangerCursorMeshData_Unknown4(__int64 a1);

unsigned __int64 DangerCursorMeshData_Unknown4(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v11;

  v2 = *(_QWORD*)(a1 + 264);
  if (v2 != 0) {
    v3 = (unsigned int)*(__int16*)(v2 + 490) - 0x61C8864680B583EBLL;
    v4 = *(_QWORD**)(v2 + 392);
    if (v4 != nullptr) {
      v3 ^= (v3 << 12) - 0x61C8864680B583EBLL + (v3 >> 4) + *v4;
    }
    v5 = (_QWORD*)game_Unit_GetJob(v2);
    if (v5 != nullptr) {
      v3 ^= *v5 - 0x61C8864680B583EBLL + (v3 << 12) + (v3 >> 4);
    }
  }
  else {
    v6 = (unsigned int)*(char*)(a1 + 248) - 0x61C8864680B583EBLL;
    v3 = ((unsigned int)*(char*)(a1 + 249) - 0x61C8864680B583EBLL + (v6 << 12) +
          (v6 >> 4)) ^
         v6;
  }
  v7 = *(_QWORD*)(a1 + 272);
  v8 = (*(unsigned int*)(a1 + 252) - 0x61C8864680B583EBLL + (v3 << 12) +
        (v3 >> 4)) ^
       v3;
  v11 = (*(unsigned __int8*)(a1 + 256) - 0x61C8864680B583EBLL + (v8 << 12) +
         (v8 >> 4)) ^
        v8;
  GameRoutine_f0f310((__int64)&v11, v7);
  v9 = 0x9E3779B97F4BBB5ELL;
  if (*(_BYTE*)(a1 + 280) != 0) {
    v9 = 0x9E3779B97F4B6254LL;
  }
  return (v9 + (v11 << 12) + (v11 >> 4)) ^ v11;
}

#pragma GCC visibility pop
