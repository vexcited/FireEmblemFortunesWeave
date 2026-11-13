#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CACHE_ENTRY_calloc_plt(void);
__int64 CACHE_ENTRY_free_plt(_QWORD, _QWORD);
__int64 FSS_free_plt(_QWORD, _QWORD);
__int64 find_in_cache(__int64 a1, unsigned __int16 a2, int a3);
__int64 save_to_cache(__int64 a1, unsigned __int16 a2, int a3, __int64 a4);
__int64 delete_fs_cache(__int64 result, __int64 a2);

__int64 find_in_cache(__int64 a1, unsigned __int16 a2, int a3)
{
  int v3;
  bool v4;
  __int64 v5;
  __int64 v6;
  int v7;
  unsigned int v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;

  v3 = *(_DWORD*)(a1 + 76);
  if (a2 == 32749) {
    v4 = (*(_DWORD*)(a1 + 76) & 0x200) != 0;
    v3 &= 0xFFFFCC03;
    *(_DWORD*)(a1 + 76) = v3;
    v5 = *(_QWORD*)(a1 + 56);
    if (v5 != 0) {
      goto LABEL_3;
    }
  LABEL_8:
    *(_DWORD*)(a1 + 72) = 302;
    return 0;
  }
  v4 = false;
  v5 = *(_QWORD*)(a1 + 56);
  if (v5 == 0) {
    goto LABEL_8;
  }
LABEL_3:
  if (a2 != 32749) {
    v4 = false;
  }
  v6 = *(_QWORD*)(a1 + 128) + 48LL;
  if (v4) {
    v7 = 0;
  }
  else {
    v7 = ((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) +
                                 24LL * *(unsigned __int16*)(a1 + 40)) +
                      44LL) +
           *(_DWORD*)(a1 + 100)) *
              *(unsigned __int16*)(a1 + 112) +
          0x8000) >>
         16;
  }
  v9 = a3 * a2 * (unsigned int)v5 % 0x3FD;
  v10 = *(_QWORD*)(v6 + 8LL * v9);
  if (v10 == 0) {
    return 0;
  }
  v11 = v3 & 0x3DFBFFF;
  if (a2 == 32749 || (v3 & 0x1C0) == 0) {
    v14 = *(_QWORD*)(v6 + 8LL * v9);
    while (*(_QWORD*)(v14 + 24) != v5 || *(unsigned __int16*)(v14 + 8) != a2 ||
           *(_DWORD*)(v14 + 12) != v11 ||
           a3 != *(unsigned __int16*)(v14 + 10) ||
           v7 != *(__int16*)(v14 + 38)) {
      v14 = *(_QWORD*)(v14 + 48);
      if (v14 == 0) {
        return 0;
      }
    }
    goto LABEL_33;
  }
  v12 = *(unsigned __int16*)(a1 + 114);
  v13 = (unsigned int)a2 - 32687;
  if ((unsigned int)v13 <= 0x20) {
    v14 = *(_QWORD*)(v6 + 8LL * v9);
    if (((1LL << (((unsigned __int8)a2 + 81) & 63)) & 0x144000041LL) != 0) {
      goto LABEL_44;
    }
    if (v13 == 20) {
      v14 = *(_QWORD*)(v6 + 8LL * v9);
      while (*(_QWORD*)(v14 + 24) != v5 || *(_WORD*)(v14 + 8) != 32707 ||
             *(_DWORD*)(v14 + 12) != v11 ||
             a3 != *(unsigned __int16*)(v14 + 10) ||
             v7 != *(__int16*)(v14 + 38) ||
             *(unsigned __int16*)(v14 + 36) != v12) {
        v14 = *(_QWORD*)(v14 + 48);
        if (v14 == 0) {
          return 0;
        }
      }
    LABEL_33:
      if (v14 != v10) {
        if (v14 == *(_QWORD*)(v10 + 40)) {
          *(_QWORD*)(v6 + 8LL * v9) = v14;
          *(_QWORD*)(v14 + 48) = v10;
          *(_QWORD*)(v10 + 40) = v14;
          *(_QWORD*)(*(_QWORD*)(v14 + 40) + 48LL) = 0;
        }
        else {
          v16 = *(_QWORD*)(v14 + 40);
          v15 = *(_QWORD*)(v14 + 48);
          if (v16 != 0) {
            *(_QWORD*)(v16 + 48) = v15;
          }
          if (v15 != 0) {
            *(_QWORD*)(v15 + 40) = *(_QWORD*)(v14 + 40);
          }
          *(_QWORD*)(v14 + 40) = *(_QWORD*)(v10 + 40);
          *(_QWORD*)(v14 + 48) = v10;
          *(_QWORD*)(v10 + 40) = v14;
          *(_QWORD*)(v6 + 8LL * v9) = v14;
        }
      }
      v17 = *(_DWORD*)(v14 + 56);
      *(_DWORD*)(v14 + 56) = v17 + 1;
      if (v17 == 0) {
        ++*(_DWORD*)(*(_QWORD*)(v14 + 24) + 284LL);
      }
      *(_BYTE*)(a1 + 109) = *(_BYTE*)(v14 + 60);
      return *(_QWORD*)(v14 + 16);
    }
  }
  if ((unsigned int)a2 - 32609 <= 0x2C) {
    v14 = *(_QWORD*)(v6 + 8LL * v9);
    if (((1LL << ((unsigned __int8)a2 - 97)) & 0x104000001005LL) != 0) {
    LABEL_44:
      while (
          *(_QWORD*)(v14 + 24) != v5 || *(unsigned __int16*)(v14 + 8) != a2 ||
          *(_DWORD*)(v14 + 12) != v11 || a3 != *(unsigned __int16*)(v14 + 10) ||
          v7 != *(__int16*)(v14 + 38) ||
          *(unsigned __int16*)(v14 + 36) != v12 ||
          *(_DWORD*)(v14 + 32) != *(_DWORD*)(a1 + 116)) {
        v14 = *(_QWORD*)(v14 + 48);
        if (v14 == 0) {
          return 0;
        }
      }
      goto LABEL_33;
    }
  }
  return 0;
}

__int64 save_to_cache(__int64 a1, unsigned __int16 a2, int a3, __int64 a4)
{
  int v4;
  _BOOL4 v5;
  unsigned int v6;
  __int64 v8;
  __int64 v9;
  __int16 v12;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v4 = *(_DWORD*)(a1 + 76);
  if (a2 == 32749) {
    v4 &= 0xFFFFCC03;
    v5 = (*(_DWORD*)(a1 + 76) & 0x200) == 0;
    *(_DWORD*)(a1 + 76) = v4;
    if (a4 == 0) {
      goto LABEL_6;
    }
  LABEL_5:
    if (*(int*)(a4 + 4) >= 5121) {
      goto LABEL_6;
    }
    v8 = *(_QWORD*)(a1 + 56);
    if (v8 == 0) {
      v6 = 302;
      *(_DWORD*)(a1 + 72) = 302;
      return v6;
    }
    v9 = *(_QWORD*)(a1 + 128);
    v12 = a3;
    v14 = a3 * a2 * (unsigned int)v8 % 0x3FD;
    v15 = CACHE_ENTRY_calloc_plt();
    if (v15 == 0) {
      return *(unsigned int*)(a1 + 72);
    }
    *(_WORD*)(v15 + 8) = a2;
    *(_WORD*)(v15 + 10) = v12;
    v16 = v9 + 48;
    *(_QWORD*)(v15 + 16) = a4;
    *(_QWORD*)(v15 + 24) = v8;
    *(_DWORD*)(v15 + 12) = v4 & 0x3DFBFFF;
    *(_DWORD*)(v15 + 56) = 1;
    *(_WORD*)(v15 + 36) = *(_WORD*)(a1 + 114);
    *(_DWORD*)(v15 + 32) = *(_DWORD*)(a1 + 116);
    if (v5) {
      *(_WORD*)(v15 + 38) =
          ((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) +
                                  24LL * *(unsigned __int16*)(a1 + 40)) +
                       44LL) +
            *(_DWORD*)(a1 + 100)) *
               (unsigned int)*(unsigned __int16*)(a1 + 112) +
           0x8000) >>
          16;
      v17 = *(_QWORD*)(v16 + 8LL * v14);
      if (v17 != 0) {
      LABEL_12:
        *(_QWORD*)(v15 + 40) = *(_QWORD*)(v17 + 40);
        *(_QWORD*)(v15 + 48) = v17;
        *(_QWORD*)(v17 + 40) = v15;
      LABEL_17:
        *(_QWORD*)(v16 + 8LL * v14) = v15;
        v6 = 0;
        **(_QWORD**)(v15 + 16) = v15;
        ++*(_DWORD*)(v8 + 280);
        ++*(_DWORD*)(v8 + 284);
        *(_BYTE*)(v15 + 60) = *(_BYTE*)(a1 + 109);
        *(_DWORD*)(a1 + 72) = 0;
        return v6;
      }
    }
    else {
      *(_WORD*)(v15 + 38) = 0;
      v17 = *(_QWORD*)(v16 + 8LL * v14);
      if (v17 != 0) {
        goto LABEL_12;
      }
    }
    *(_QWORD*)(v15 + 40) = v15;
    *(_QWORD*)(v15 + 48) = 0;
    goto LABEL_17;
  }
  v5 = true;
  if (a4 != 0) {
    goto LABEL_5;
  }
LABEL_6:
  v6 = 0;
  *(_DWORD*)(a1 + 72) = 0;
  return v6;
}

__int64 delete_fs_cache(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v3 = result;
  v4 = 0;
  v5 = *(_QWORD*)(result + 128) + 48LL;
  while (1) {
    v6 = *(_QWORD*)(v5 + 8 * v4);
    if (v6 != 0) {
      break;
    }
  LABEL_2:
    if (++v4 == 1021) {
      *(_QWORD*)(a2 + 280) = 0;
      return result;
    }
  }
  v7 = *(_QWORD*)(v5 + 8 * v4);
  while (1) {
    v8 = *(_QWORD*)(v7 + 48);
    if (*(_QWORD*)(v7 + 24) == a2) {
      break;
    }
  LABEL_7:
    v7 = v8;
    if (v8 == 0) {
      goto LABEL_2;
    }
  }
  if (*(_DWORD*)(v7 + 56) == 0) {
    v9 = *(_QWORD*)(v7 + 40);
    if (v9 == v7) {
      *(_QWORD*)(v5 + 8 * v4) = 0;
    }
    else if (v7 == v6) {
      *(_QWORD*)(v5 + 8 * v4) = v8;
      v6 = v8;
      *(_QWORD*)(v8 + 40) = *(_QWORD*)(v7 + 40);
    }
    else {
      v10 = *(_QWORD*)(v6 + 40);
      if (v7 == v10) {
        v11 = *(_QWORD*)(v10 + 40);
        *(_QWORD*)(v6 + 40) = v11;
        *(_QWORD*)(v11 + 48) = 0;
      }
      else {
        *(_QWORD*)(v8 + 40) = v9;
        *(_QWORD*)(*(_QWORD*)(v7 + 40) + 48LL) = *(_QWORD*)(v7 + 48);
      }
    }
    FSS_free_plt(v3, *(_QWORD*)(v7 + 16));
    result = CACHE_ENTRY_free_plt(v3, v7);
    goto LABEL_7;
  }
  *(_DWORD*)(v3 + 72) = 610;
  return result;
}

#pragma GCC visibility pop
