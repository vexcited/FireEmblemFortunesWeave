#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1b0c5f4;
void BiquadFilterLpf_Unknown2(float a1, __int64 a2, __int64 a3);

void BiquadFilterLpf_Unknown2(float a1, __int64 a2, __int64 a3)
{
  int v3;
  char* v4;

  v3 = (int)(float)(a1 * 111.0) & ~((int)(float)(a1 * 111.0) >> 31);
  if (v3 >= 111) {
    v3 = 111;
  }
  v4 = (char*)&GameData_1b0c5f4 + 10 * (unsigned int)v3;
  *(_QWORD*)a3 = *(_QWORD*)v4;
  *(_WORD*)(a3 + 8) = *((_WORD*)v4 + 4);
}

#pragma GCC visibility pop
