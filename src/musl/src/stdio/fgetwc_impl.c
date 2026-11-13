#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LockFile(__int64);
__int64 UnlockFile(__int64 result);
__int64 _uflow(__int64);
__int64 __errno_location_plt(_QWORD, _QWORD);
__int64 __getlocale_addr_plt(void);
__int64 fwide_plt(_QWORD, _QWORD);
__int64 mbrtowc_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 mbtowc_plt(_QWORD, _QWORD, _QWORD);
__int64 ungetc_plt(_QWORD, _QWORD);
__int64 fgetwc_unlocked(__int64 a1);
__int64 fgetwc(__int64 a1);

__int64 fgetwc_unlocked(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  _BYTE* v8;
  _BYTE* v9;
  int v10;
  _BYTE* v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  __int64 v19;
  _BYTE v20[4];
  unsigned int v21;

  v2 = (_QWORD*)__getlocale_addr_plt();
  v3 = *v2;
  v4 = v2;
  if (*(char*)(a1 + 128) > 0) {
    *v2 = *(_QWORD*)(a1 + 200);
    v5 = *(_QWORD*)(a1 + 8);
    v6 = *(_QWORD*)(a1 + 16);
    if (v5 != v6) {
      goto LABEL_3;
    }
  LABEL_8:
    v19 = 0;
    goto LABEL_9;
  }
  fwide_plt(a1, 1);
  *v4 = *(_QWORD*)(a1 + 200);
  v5 = *(_QWORD*)(a1 + 8);
  v6 = *(_QWORD*)(a1 + 16);
  if (v5 == v6) {
    goto LABEL_8;
  }
LABEL_3:
  v7 = mbtowc_plt(&v21, v5, v6 - v5);
  v8 = *(_BYTE**)(a1 + 8);
  if (v7 != -1) {
    v9 = &v8[v7];
    if (v7 == 0) {
      ++v9;
    }
    *(_QWORD*)(a1 + 8) = v9;
  LABEL_24:
    result = v21;
    goto LABEL_25;
  }
  v11 = *(_BYTE**)(a1 + 16);
  v19 = 0;
  if (v8 == v11) {
  LABEL_9:
    v10 = _uflow(a1);
    v20[0] = v10;
    if (v10 < 0) {
      goto LABEL_23;
    }
    goto LABEL_13;
  }
  *(_QWORD*)(a1 + 8) = v8 + 1;
  v20[0] = *v8;
LABEL_13:
  v12 = mbrtowc_plt(&v21, v20, 1, &v19);
  if (v12 != -1) {
    if (v12 != -2) {
      goto LABEL_24;
    }
    do {
      v14 = *(_BYTE**)(a1 + 8);
      if (v14 == *(_BYTE**)(a1 + 16)) {
        v15 = _uflow(a1);
        v20[0] = v15;
        if ((v15 & 0x80000000) != 0) {
          *(_DWORD*)a1 |= 0x20u;
          *(_DWORD*)__errno_location_plt(v15, v16) = 84;
          goto LABEL_23;
        }
      }
      else {
        *(_QWORD*)(a1 + 8) = v14 + 1;
        v20[0] = *v14;
      }
      v13 = mbrtowc_plt(&v21, v20, 1, &v19);
    } while (v13 == -2);
    if (v13 != -1) {
      goto LABEL_24;
    }
    v17 = v20[0];
    *(_DWORD*)a1 |= 0x20u;
    ungetc_plt(v17, a1);
  }
LABEL_23:
  result = 0xFFFFFFFFLL;
LABEL_25:
  *v4 = v3;
  return result;
}

__int64 fgetwc(__int64 a1)
{
  int v2;
  __int64 result;
  unsigned int v4;

  if (*(char*)(a1 + 130) < 0) {
    return fgetwc_unlocked(a1);
  }
  v2 = LockFile(a1);
  result = fgetwc_unlocked(a1);
  if (v2 != 0) {
    v4 = result;
    UnlockFile(a1);
    return v4;
  }
  return result;
}

#pragma GCC visibility pop
