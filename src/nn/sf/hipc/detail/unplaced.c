#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_b8cb0(__int64, char);
__int64 nn_sf_hipc_detail_b8c00(__int64 a1, unsigned int* a2);

__int64 nn_sf_hipc_detail_b8c00(__int64 a1, unsigned int* a2)
{
  unsigned int v2;
  int v3;
  int v4;
  int v5;
  char v6;
  unsigned int v7;
  __int64 v8;
  __int64 result;
  int v10;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)a1 = a2;
  v2 = *a2;
  v3 = a2[1];
  if (v3 < 0) {
    v7 = a2[2];
    v6 = v7 & 1;
    v5 = (v7 >> 1) & 0xF;
    v4 = (v7 >> 5) & 0xF;
  }
  else {
    LOBYTE(v4) = 0;
    LOBYTE(v5) = 0;
    v6 = 0;
  }
  *(_BYTE*)(a1 + 8) = v6;
  v8 = a1 + 8;
  *(_BYTE*)(a1 + 9) = v5;
  *(_BYTE*)(a1 + 10) = v4;
  *(_BYTE*)(a1 + 11) = BYTE2(v2) & 0xF;
  *(_BYTE*)(a1 + 13) = HIBYTE(v2) & 0xF;
  *(_WORD*)(a1 + 14) = v2 >> 28;
  *(_DWORD*)(a1 + 16) = (unsigned __int16)(4 * (v3 & 0x3FF));
  *(_WORD*)(a1 + 20) = v2;
  *(_WORD*)(a1 + 22) = v3 < 0;
  *(_WORD*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 12) = (v2 >> 20) & 0xF;
  result = SdkRoutine_b8cb0(a1 + 8, v3 < 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v8 + 18) = result;
  *(_DWORD*)(v8 + 26) = v10;
  return result;
}

#pragma GCC visibility pop
