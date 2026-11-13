#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern unsigned int GameData_1b37d88[29];
int memcmp(__int64, __int64, unsigned __int64);
unsigned int* timeline_d680(unsigned int** a1);

unsigned int* timeline_d680(unsigned int** a1)
{
  unsigned int* v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int8* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  unsigned __int8* v24;
  __int64 v25;

  v1 = *a1;
  v2 = (*a1)[1];
  if ((_DWORD)v2 == 0) {
    return v1;
  }
  v3 = *v1;
  v4 = 17;
  v5 = 0;
  while (v4 - 17 >= v3) {
    v6 = __clz((unsigned int)(v4 - v3 - 1));
    v7 = (int)v4 - (int)v3 - GameData_1b37d88[28 - v6] - 17;
    v8 = *(_QWORD*)(*((_QWORD*)v1 + 2) + 8 * (27 - v6) + 8);
    v9 = *(unsigned __int8*)(v8 + 32LL * (unsigned int)v7);
    if ((v9 & 0x7F) == 6) {
      v11 = v8 + 32 * v7;
      v12 = *(_QWORD*)(v11 + 8);
      v13 = v4 - v2 + 1;
      if (v9 == 134) {
        goto LABEL_14;
      }
    LABEL_8:
      v14 = *(_DWORD*)(v11 + 4);
      v15 = v11 + 2;
      if (v9 == 6) {
        v16 = v12;
      }
      else {
        v16 = v15;
      }
      if (v13 == 17) {
        return v1;
      }
    LABEL_15:
      v18 = v5 + 32;
      v19 = v14;
      while (2) {
        if (v4 - 16 >= v3) {
          v22 = __clz((unsigned int)(v4 - v3));
          v20 = (unsigned __int8*)(*(_QWORD*)(*((_QWORD*)v1 + 2) +
                                              8 * (27 - v22) + 8) +
                                   32LL * ((int)v4 - (int)v3 -
                                           GameData_1b37d88[28 - v22] - 16));
          v21 = *v20;
          if ((v21 & 0x7F) == 6) {
            goto LABEL_21;
          }
        }
        else {
          v20 = (unsigned __int8*)(*((_QWORD*)v1 + 1) + v18);
          v21 = *v20;
          if ((v21 & 0x7F) == 6) {
          LABEL_21:
            if (v21 == 134) {
              if ((_DWORD)v19 == v20[1]) {
                goto LABEL_25;
              }
            }
            else if ((_DWORD)v19 == *((_DWORD*)v20 + 1)) {
            LABEL_25:
              v23 = *((_QWORD*)v20 + 1);
              v24 = v20 + 2;
              if (v21 == 6) {
                v25 = v23;
              }
              else {
                v25 = (__int64)v24;
              }
              if (memcmp(v16, v25, v19) == 0) {
                return v1;
              }
            }
          }
        }
        ++v4;
        v18 += 32;
        if (1 - v2 + v4 == 17) {
          return v1;
        }
        continue;
      }
    }
  LABEL_4:
    ++v4;
    v5 += 32;
    if (v4 - v2 == 17) {
      return v1;
    }
  }
  v10 = *((_QWORD*)v1 + 1);
  v9 = *(unsigned __int8*)(v10 + v5);
  if ((v9 & 0x7F) != 6) {
    goto LABEL_4;
  }
  v11 = v10 + v5;
  v12 = *(_QWORD*)(v10 + v5 + 8);
  v13 = v4 - v2 + 1;
  if (v9 != 134) {
    goto LABEL_8;
  }
LABEL_14:
  v14 = *(unsigned __int8*)(v11 + 1);
  v16 = v11 + 2;
  if (v13 != 17) {
    goto LABEL_15;
  }
  return v1;
}

#pragma GCC visibility pop
