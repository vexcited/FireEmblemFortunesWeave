#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ungetc_plt(__int64, __int64);
__int64 ungetwc_plt(unsigned int, __int64);
extern _UNKNOWN SdkData_ce0108;
unsigned __int64 llvm_libcxx_libcxx_src_7d0530(__int64 a1, int a2);
__int64 llvm_libcxx_libcxx_src_7f7c80(__int64 a1, unsigned int a2);

unsigned __int64 llvm_libcxx_libcxx_src_7d0530(__int64 a1, int a2)
{
  unsigned int v2;
  unsigned __int64* v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  int v13;
  __int64 v14;
  char v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  bool v20;

  if ((unsigned int)(HIDWORD(a1) - 348) < 0xFFFFFD48) {
    return 0;
  }
  v2 = __clz((unsigned int)(a1));
  v3 = (unsigned __int64*)((char*)&SdkData_ce0108 +
                           16 * (unsigned int)(HIDWORD(a1) + 348));
  v4 = (unsigned int)((_DWORD)a1 << v2);
  v5 = v3[1];
  v6 = v5 * v4;
  v7 = (v5 * (unsigned __int128)(unsigned int)((_DWORD)a1 << v2)) >> 64;
  v8 = ~v4;
  if ((~(_BYTE)v7 & 0x3F) == 0 && v6 > v8) {
    v17 = *v3;
    v18 = v17 * v4;
    v19 = (v17 * (unsigned __int128)(unsigned int)((_DWORD)a1 << v2)) >> 64;
    v20 = __CFADD__(v19, v6);
    v6 += v19;
    if (v20) {
      ++v7;
    }
    if (v18 > v8 && (v7 & 0x3F) == 0x3F && v6 == -1) {
      return 0;
    }
  }
  v10 = v7 >> ((unsigned __int8)(v7 >> 31) + 6);
  if (a2 != 0) {
    if (a2 == 2) {
      if (v6 == 0 && (v7 & 0x3F) == 0 && (v10 & 3) == 1) {
        return 0;
      }
      LODWORD(v10) = (v10 & 1) + v10;
    }
  }
  else if ((v6 | v7 & 0x3F) != 0) {
    LODWORD(v10) = v10 + 2;
  }
  v13 = ((unsigned __int64)(217706LL * SHIDWORD(a1)) >> 16) - v2 +
        ((v7 >> 31) ^ 0xFFFFFFFE);
  if ((v10 & 0xFE000000) != 0) {
    ++v13;
  }
  if ((unsigned int)(v13 - 95) < 0xFFFFFF02) {
    return 0;
  }
  v14 = (unsigned int)(v13 + 160);
  if ((unsigned int)v10 >> 25 != 0) {
    v15 = 2;
  }
  else {
    v15 = 1;
  }
  return ((unsigned int)v10 >> v15) & 0x7FFFFF00 |
         (unsigned __int64)(v14 << 32) |
         (unsigned __int8)((unsigned int)v10 >> v15);
}

__int64 llvm_libcxx_libcxx_src_7f7c80(__int64 a1, unsigned int a2)
{
  unsigned int v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  char* v9;
  __int64 v10;
  bool v11;
  int v12;
  struct {
    _BYTE v14[12];
    int v15;
  } v14_;
  char* v16;
  struct {
    char v17;
    _BYTE v18[7];
  } v17_;
  __int64 vars0;

  if (a2 != -1) {
    v3 = a2;
    if (*(_BYTE*)(a1 + 97) != 1 || *(_BYTE*)(a1 + 96) == 0) {
      if (*(_BYTE*)(a1 + 96) == 0) {
      LABEL_17:
        v11 = true;
        *(_DWORD*)(a1 + 92) = v3;
        goto LABEL_18;
      }
      v5 = *(__int64**)(a1 + 72);
      v6 = *(_QWORD*)(a1 + 80);
      v7 = *v5;
      v14_.v15 = *(_DWORD*)(a1 + 92);
      v8 = (*(__int64 (**)(__int64*, __int64, int*, char**, _BYTE*, char*,
                           __int64*, char**))(v7 + 24))(
          v5, v6, &v14_.v15, &v16, v14_.v14, &v17_.v17, &vars0, &v16);
      if ((unsigned int)(v8 - 1) >= 2) {
        if (v8 == 3) {
          v17_.v17 = *(_DWORD*)(a1 + 92);
          v16 = v17_.v18;
        }
        while (1) {
          v9 = v16;
          if (v16 <= &v17_.v17) {
            break;
          }
          v10 = *(_QWORD*)(a1 + 64);
          --v16;
          if ((unsigned int)ungetc_plt((unsigned __int8)*(v9 - 1), v10) == -1) {
            return (unsigned int)-1;
          }
        }
        goto LABEL_17;
      }
    }
    else {
      v12 = ungetwc_plt(*(_DWORD*)(a1 + 92), *(_QWORD*)(a1 + 64));
      if (v12 != -1) {
        goto LABEL_17;
      }
    }
    return (unsigned int)-1;
  }
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    return (unsigned int)-1;
  }
  v3 = *(_DWORD*)(a1 + 92);
  v11 = v3 != -1;
LABEL_18:
  *(_BYTE*)(a1 + 96) = v11;
  return v3;
}

#pragma GCC visibility pop
