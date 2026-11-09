#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SubObjectCullingJob_Unknown3(_QWORD* result);

_QWORD* SubObjectCullingJob_Unknown3(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;

  if ((int)result[5] >= 1) {
    v1 = result[5] & 0x7FFFFFFFLL;
    v2 = 0;
    do {
      v3 = *(_QWORD*)(result[3] + 16LL) + 32LL * (unsigned int)v2;
      v4 = *(_QWORD*)(v3 + 8);
      v5 = *(_DWORD*)(v3 + 16) - v4;
      if (v5 >= 1) {
        v6 = result[9];
        if (v6 != 0) {
          LODWORD(v6) = *(_DWORD*)(result[8] + 4 * v2);
        }
        if (result[11] != 0) {
          LODWORD(v6) = *(_DWORD*)(result[10] + 4 * v2) + v6;
        }
        if (result[13] != 0) {
          LODWORD(v6) = *(_DWORD*)(result[12] + 4 * v2) + v6;
        }
        if (result[15] != 0) {
          LODWORD(v6) = *(_DWORD*)(result[14] + 4 * v2) + v6;
        }
        if (result[17] != 0) {
          LODWORD(v6) = *(_DWORD*)(result[16] + 4 * v2) + v6;
        }
        if (result[19] != 0) {
          LODWORD(v6) = *(_DWORD*)(result[18] + 4 * v2) + v6;
        }
        if ((_DWORD)v6 == v5) {
          *(_QWORD*)(v3 + 16) = v4;
          *(_DWORD*)v3 = 3;
        }
      }
      ++v2;
    } while (v1 != v2);
  }
  return result;
}

#pragma GCC visibility pop
