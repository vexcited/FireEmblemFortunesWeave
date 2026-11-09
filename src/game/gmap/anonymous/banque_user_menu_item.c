#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_2071168;
extern __int64* GameData_212e008[9];
__int64 BanqueUserMenuItem_Unknown5(_QWORD* a1);

__int64 BanqueUserMenuItem_Unknown5(_QWORD* a1)
{
  __int64 v2;
  char* v3;
  char* v4;
  int v5;
  char* v6;
  _QWORD* v7;
  int v8;
  char v9;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 480LL))(a1) & 1) != 0) {
    v2 = a1[1];
    v3 = *(char**)(v2 + 232);
    v4 = *(char**)(v2 + 240);
    if (v3 != v4) {
      v5 = -1;
      v6 = v3;
      while (1) {
        v7 = *(_QWORD**)v6;
        v6 += 8;
        if (v7 == a1) {
          break;
        }
        ++v5;
        if (v6 == v4) {
          goto LABEL_8;
        }
      }
      v8 = v5 + 1;
      if (v5 != -1) {
        v11 = v4 - v3 - 8;
        v12 = (v11 >> 3) + 1;
        if (v11 >= 0x18) {
          v17 = v12 & 0x3FFFFFFFFFFFFFFCLL;
          v18 = 0;
          v19 = 0;
          while (-v5 != v18) {
            if (v8 == (v19 | 2)) {
              v3 += 8;
              break;
            }
            if (v8 == (v19 | 3)) {
              v3 += 16;
              break;
            }
            v19 += 4;
            if (v8 == v19) {
              v3 += 24;
              break;
            }
            v3 += 32;
            v18 -= 4;
            v17 -= 4;
            if (v17 == 0) {
              v13 = -v18;
              v14 = v12 & 3;
              if (v14 != 0) {
                goto LABEL_12;
              }
              goto LABEL_15;
            }
          }
        }
        else {
          v13 = 0;
          v14 = v12 & 3;
          if (v14 == 0) {
          LABEL_15:
            v16 = 0;
          LABEL_28:
            v20 =
                __dynamic_cast(v16, GameData_212e008[0], &GameData_2071168, 0);
            v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 480LL))(v20) ^ 1;
            return v9 & 1;
          }
        LABEL_12:
          v15 = v13 - v5;
          while (v15 != 0) {
            v3 += 8;
            ++v15;
            if (--v14 == 0) {
              goto LABEL_15;
            }
          }
        }
        v16 = *(_QWORD*)v3;
        goto LABEL_28;
      }
    }
  }

LABEL_8:
  v9 = 1;
  return v9 & 1;
}

#pragma GCC visibility pop
