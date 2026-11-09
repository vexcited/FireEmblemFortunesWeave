#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1b0ce1e;
void BiquadFilterBpf512_Unknown2(float a1, __int64 a2, __int64 a3);

void BiquadFilterBpf512_Unknown2(float a1, __int64 a2, __int64 a3)
{
  int v3;
  char* v4;

  v3 = (int)(float)((float)(a1 * (float)(2.0 - a1)) * 121.0) &
       ~((int)(float)((float)(a1 * (float)(2.0 - a1)) * 121.0) >> 31);
  if (v3 >= 121) {
    v3 = 121;
  }
  v4 = (char*)&GameData_1b0ce1e + 10 * (unsigned int)v3;
  *(_QWORD*)a3 = *(_QWORD*)v4;
  *(_WORD*)(a3 + 8) = *((_WORD*)v4 + 4);
}

#pragma GCC visibility pop
