#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 opus_src_7fb80(__int64 a1);

__int64 opus_src_7fb80(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  signed int v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 96);
  v2 = *(_QWORD*)(a1 + 32);
  v3 = __clz(v1) ^ 0x1F;
  if ((_DWORD)v1 == 0) {
    v3 = -1;
  }
  v4 = v1 >> ((v2 - 1) * v3 / v2);
  while (1) {
    result = (int)v4;
    LODWORD(v4) = v4 + 1;
    v6 = 1;
    v7 = 1;
    v8 = v2;
    do {
      if (v7 > v1 / result) {
        goto LABEL_4;
      }
      if (v6 <= 0x7FFFFFFFFFFFFFFFLL / (int)v4) {
        v6 *= (int)v4;
      }
      else {
        v6 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v7 *= result;
      --v8;
    } while (v8 != 0);
    if (v7 <= v1 && v6 > v1) {
      return result;
    }
    if (v7 > v1) {
    LABEL_4:
      LODWORD(v4) = result - 1;
      continue;
    }
  }
}

#pragma GCC visibility pop
