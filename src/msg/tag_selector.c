#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*msg_TagSelector_vtable[])();
__int64 TagSelector_Unknown3(__int64 a1, unsigned __int16 a2,
                             unsigned __int16 a3);
_QWORD* TagSelector_Destructor(_QWORD* result);
__int64 TagSelector_Unknown2(__int64 result);
__int64 TagSelector_Unknown3(__int64 a1, unsigned __int16 a2,
                             unsigned __int16 a3)
{
  unsigned __int64 v3;
  _BOOL4 v4;
  unsigned __int16* v5;
  unsigned __int64 i;
  int v7;
  int v8;

  v3 = *(unsigned int*)(a1 + 136);
  v4 = *(_DWORD*)(a1 + 136) == 0;
  if ((int)v3 >= 1) {
    v5 = (unsigned __int16*)(a1 + 10);
    for (i = 1;; ++i) {
      v7 = *(v5 - 1);
      if (v7 == 0xFFFF) {
        break;
      }
      if (v7 == a2) {
        v8 = *v5;
        v4 = v8 == a3 || v8 == 0xFFFF;
        if (i >= v3) {
          return v4 ^ (unsigned int)(*(_DWORD*)(a1 + 140) == 1);
        }
      }
      else {
        v4 = false;
        if (i >= v3) {
          return v4 ^ (unsigned int)(*(_DWORD*)(a1 + 140) == 1);
        }
      }
      v5 += 2;
      if (v4) {
        return v4 ^ (unsigned int)(*(_DWORD*)(a1 + 140) == 1);
      }
    }
    v4 = true;
  }
  return v4 ^ (unsigned int)(*(_DWORD*)(a1 + 140) == 1);
}

_QWORD* TagSelector_Destructor(_QWORD* result)
{
  result[2] = -1;
  result[3] = -1;
  result[4] = -1;
  result[5] = -1;
  *result = msg_TagSelector_vtable;
  result[1] = -1;
  result[6] = -1;
  result[7] = -1;
  result[8] = -1;
  result[9] = -1;
  result[10] = -1;
  result[11] = -1;
  result[12] = -1;
  result[13] = -1;
  result[14] = -1;
  result[15] = -1;
  result[16] = -1;
  result[17] = 0;
  return result;
}

__int64 TagSelector_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(unsigned int*)(result + 136);
  if ((unsigned int)v1 <= 0x1F) {
    v2 = result + 8;
    *(_DWORD*)(result + 136) = v1 + 1;
    *(_DWORD*)(result + 8 + 4 * v1) = -65536;
    v3 = *(unsigned int*)(result + 136);
    if ((unsigned int)v3 <= 0x1F) {
      *(_DWORD*)(result + 136) = v3 + 1;
      *(_DWORD*)(v2 + 4 * v3) = -65535;
      v4 = *(unsigned int*)(result + 136);
      if ((unsigned int)v4 <= 0x1F) {
        *(_DWORD*)(result + 136) = v4 + 1;
        *(_DWORD*)(v2 + 4 * v4) = -65534;
        v5 = *(unsigned int*)(result + 136);
        if ((unsigned int)v5 <= 0x1F) {
          *(_DWORD*)(result + 136) = v5 + 1;
          *(_DWORD*)(v2 + 4 * v5) = -65532;
          v6 = *(unsigned int*)(result + 136);
          if ((unsigned int)v6 <= 0x1F) {
            *(_DWORD*)(result + 136) = v6 + 1;
            *(_DWORD*)(v2 + 4 * v6) = -65531;
            v7 = *(unsigned int*)(result + 136);
            if ((unsigned int)v7 <= 0x1F) {
              *(_DWORD*)(result + 136) = v7 + 1;
              *(_DWORD*)(v2 + 4 * v7) = -65530;
              v8 = *(unsigned int*)(result + 136);
              if ((unsigned int)v8 <= 0x1F) {
                *(_DWORD*)(result + 136) = v8 + 1;
                *(_DWORD*)(v2 + 4 * v8) = -65529;
                v9 = *(unsigned int*)(result + 136);
                if ((unsigned int)v9 <= 0x1F) {
                  *(_DWORD*)(result + 136) = v9 + 1;
                  *(_DWORD*)(v2 + 4 * v9) = -65528;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
