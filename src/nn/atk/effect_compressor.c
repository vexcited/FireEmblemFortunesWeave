#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2afd90(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
bool EffectCompressor_17a0d0(__int64 a1, unsigned int a2);
__int64 EffectCompressor_17a160(__int64 a1, __int64 a2);

bool EffectCompressor_17a0d0(__int64 a1, unsigned int a2)
{
  int v4;
  char v5;
  _QWORD v7[3];

  v7[0] = 0x100000000LL;
  v7[1] = 0x300000002LL;
  v7[2] = 0x500000004LL;
  v4 = GameRoutine_2afd90(a2);
  v5 = (a2 > 3) | *(_BYTE*)(a1 + 24);
  if (((a2 > 3) | *(_BYTE*)(a1 + 24) & 1) == 0) {
    *(_DWORD*)(a1 + 96) = a2;
    if (v4 >= 1) {
      memcpy(a1 + 100, v7, 4LL * (unsigned int)v4);
    }
  }
  return (v5 & 1) == 0;
}

__int64 EffectCompressor_17a160(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  int* v7;
  _DWORD* v8;
  __int64 v9;
  int v10;
  _DWORD* v11;
  int* v12;
  int v13;

  result = GameRoutine_2afd90(*(unsigned int*)(a1 + 96));
  if ((int)result >= 1) {
    v5 = result & 7;
    if ((unsigned int)result < 8) {
      v6 = 0;
      if ((result & 7) == 0) {
        return result;
      }
      goto LABEL_8;
    }
    v7 = (int*)(a1 + 128);
    v8 = (_DWORD*)(a2 + 16);
    v9 = 0;
    do {
      v9 -= 8;
      *(v8 - 4) = *(v7 - 7);
      *(v8 - 3) = *(v7 - 6);
      *(v8 - 2) = *(v7 - 5);
      *(v8 - 1) = *(v7 - 4);
      *v8 = *(v7 - 3);
      v8[1] = *(v7 - 2);
      v8[2] = *(v7 - 1);
      v10 = *v7;
      v7 += 8;
      v8[3] = v10;
      v8 += 8;
    } while (-(result & 0x7FFFFFF8) != v9);
    v6 = -v9;
    if ((result & 7) != 0) {
    LABEL_8:
      v11 = (_DWORD*)(a2 + 4 * v6);
      v12 = (int*)(a1 + 4 * v6 + 100);
      do {
        v13 = *v12++;
        --v5;
        *v11++ = v13;
      } while (v5 != 0);
    }
  }
  return result;
}

#pragma GCC visibility pop
