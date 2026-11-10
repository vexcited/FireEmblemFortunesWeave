#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcmp_plt(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
__int64 movie_media_property_4c1ea0(__int64 result, _DWORD* a2, __int64 a3,
                                    int a4, _DWORD* a5, int a6);

__int64 movie_media_property_4c1ea0(__int64 result, _DWORD* a2, __int64 a3,
                                    int a4, _DWORD* a5, int a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v12;
  __int64 v13;
  __int64 i;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char v17;
  unsigned __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v6 = (unsigned int)*a2;
  LODWORD(v7) = a6;
  v12 = result;
  if ((int)v6 > 0) {
    v13 = result + 32;
    for (i = 0; i != v6; ++i) {
      if (*(_BYTE*)(v13 + 28) == 1) {
        v15 = strlen_plt(a3);
        v16 = v15 <= 0x18 ? v15 : 23LL;
        result = memcmp_plt(v13, a3, v16);
        if ((_DWORD)result == 0 && *(_DWORD*)(v13 + 24) == a4) {
          v17 = 1;
          LODWORD(v6) = i;
          if (a4 > 3) {
            goto LABEL_16;
          }
          goto LABEL_11;
        }
      }
      v13 += 64;
    }
    if ((int)v6 > 23) {
      return result;
    }
  }
  v17 = 0;
  if (a4 <= 3) {
  LABEL_11:
    if (a4 <= 1) {
      *(_DWORD*)(v12 + ((__int64)(int)v6 << 6)) = *a5;
      result = strlen_plt(a3);
      if ((_DWORD)result == 0) {
        return result;
      }
      goto LABEL_36;
    }
    goto LABEL_26;
  }
LABEL_16:
  if (a4 <= 5) {
    if (a4 != 4) {
      *(_DWORD*)(v12 + ((__int64)(int)v6 << 6)) = *a5;
      result = strlen_plt(a3);
      if ((_DWORD)result == 0) {
        return result;
      }
      goto LABEL_36;
    }
  LABEL_26:
    *(_QWORD*)(v12 + ((__int64)(int)v6 << 6)) = *(_QWORD*)a5;
    result = strlen_plt(a3);
    if ((_DWORD)result == 0) {
      return result;
    }
    goto LABEL_36;
  }
  if (a4 == 6) {
    *(_QWORD*)(v12 + ((__int64)(int)v6 << 6)) = *(_QWORD*)a5;
    result = strlen_plt(a3);
    if ((_DWORD)result == 0) {
      return result;
    }
    goto LABEL_36;
  }
  if (a4 == 7) {
    v18 = strlen_plt(a5);
    v19 = (_QWORD*)(v12 + ((__int64)(int)v6 << 6));
    if (v18 <= 0x20) {
      v20 = v18;
    }
    else {
      v20 = 31;
    }
    *v19 = 0;
    v19[1] = 0;
    v19[2] = 0;
    v19[3] = 0;
    memcpy_plt(v12 + ((__int64)(int)v6 << 6), a5, v20);
    result = strlen_plt(a3);
    if ((_DWORD)result == 0) {
      return result;
    }
  LABEL_36:
    v22 = v12 + ((__int64)(int)v6 << 6);
    if ((unsigned int)result <= 0x18) {
      v23 = (unsigned int)result;
    }
    else {
      v23 = 23;
    }
    *(_QWORD*)(v22 + 32) = 0;
    v24 = v22 + 32;
    *(_QWORD*)(v24 + 8) = 0;
    *(_QWORD*)(v24 + 16) = 0;
    result = memcpy_plt(v24, a3, v23);
    *(_DWORD*)(v24 + 24) = a4;
    *(_BYTE*)(v24 + 28) = 1;
    if ((v17 & 1) == 0) {
      ++*a2;
    }
    return result;
  }
  v21 = v12 + ((__int64)(int)v6 << 6);
  if ((unsigned int)v7 >= 0x18) {
    v7 = 24;
  }
  else {
    v7 = (unsigned int)v7;
  }
  *(_QWORD*)(v21 + 8) = 0;
  *(_QWORD*)(v21 + 16) = 0;
  *(_QWORD*)v21 = 0;
  memcpy_plt(v12 + ((__int64)(int)v6 << 6), a5, v7);
  *(_DWORD*)(v21 + 24) = v7;
  result = strlen_plt(a3);
  if ((_DWORD)result != 0) {
    goto LABEL_36;
  }
  return result;
}

#pragma GCC visibility pop
