#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 TryCreateCacheStorage(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                              _QWORD, _QWORD, _QWORD);
__int64 fs_save_data_for_application_462300_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("fs_save_data_for_application_462300");
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_fs_IsSdCardAccessible_plt(void);
__int64 nn_fs_QuerySaveDataTotalSize_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_fs__4620c0(_QWORD, _QWORD);
__int64 nn_fs_detail_CreateCacheStorage_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                            _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_fs_detail_IsAbortNeeded_plt(_QWORD);
__int64 nn_fs_detail_LogResultErrorMessage_plt(_QWORD, _QWORD);
__int64 nn_fs_EnsureApplicationCacheStorage_462250(__int64 a1, __int64 a2,
                                                   _QWORD* a3);
__int64 fs_save_data_for_application_462300(unsigned __int64* a1, _DWORD* a2,
                                            __int64 a3, __int64 a4,
                                            unsigned int a5, __int64 a6,
                                            __int64 a7, char a8, __int64 a9);
__int64 nn_fs_EnsureApplicationCacheStorage_462550(__int64 a1, __int64 a2,
                                                   __int64 a3, _QWORD* a4);
__int64 nn_fs_CreateApplicationCacheStorage(unsigned __int64* a1, _DWORD* a2,
                                            __int64 a3, __int64 a4,
                                            unsigned __int16 a5, __int64 a6,
                                            __int64 a7);

__int64 nn_fs_EnsureApplicationCacheStorage_462250(__int64 a1, __int64 a2,
                                                   _QWORD* a3)
{
  unsigned int v3;
  unsigned int v5;
  _BYTE v6[4];

  v3 = fs_save_data_for_application_462300_alt1(
      a1, v6, a2, a3[1551], 0, a3[1582], a3[1583], 1, a3 + 1692);
  if ((nn_fs_detail_IsAbortNeeded_plt(v3) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v3, "EnsureApplicationCacheStorage");
    v5 = v3;
    if (v3 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v5);
      __udf(0);
    }
  }
  else if (v3 != 0) {
    return v3;
  }
  return 0;
}

__int64 fs_save_data_for_application_462300(unsigned __int64* a1, _DWORD* a2,
                                            __int64 a3, __int64 a4,
                                            unsigned int a5, __int64 a6,
                                            __int64 a7, char a8, __int64 a9)
{
  __int64 result;
  unsigned __int64 v18;
  unsigned __int64 v19;
  int v20;
  unsigned __int64 v21;
  __int64 v22;

  if (a2 == nullptr) {
    return 3072514;
  }
  v21 = 0;
  v20 = 0;
  *a2 = 2;
  result = nn_fs__4620c0(&v20, a3);
  if ((_DWORD)result == 0) {
    if (v20 == 1) {
      *a2 = 1;
      result = TryCreateCacheStorage(&v21, 1, a3, a4, a5, a6, a7, a8 & 1, a9);
    LABEL_7:
      if ((_DWORD)result != 0) {
        return result;
      }
      goto LABEL_8;
    }
    if (v20 == 2) {
      *a2 = 2;
      result = TryCreateCacheStorage(&v21, 4, a3, a4, a5, a6, a7, a8 & 1, a9);
      goto LABEL_7;
    }
    if ((nn_fs_IsSdCardAccessible_plt() & 1) != 0) {
      *a2 = 2;
      result =
          nn_fs_detail_CreateCacheStorage_plt(a3, 4, a4, a5, a6, a7, 0, a9);
      if ((_DWORD)result == 0) {
      LABEL_17:
        v19 = 0;
      LABEL_18:
        *a1 = v19;
        return 0;
      }
      if ((result & 0x1FF) != 2 ||
          (((unsigned int)result >> 9) & 0x1FFE) - 30 > 0xF) {
        if ((result & 0x3FFFFF) != 0x402) {
          return result;
        }
        goto LABEL_17;
      }
      v22 = 0;
      result = nn_fs_QuerySaveDataTotalSize_plt(&v22, a6, a7);
      if ((_DWORD)result != 0) {
        return result;
      }
      if ((unsigned __int64)(v22 + 0x7FFF) < 0x4000) {
        goto LABEL_17;
      }
    }
    v21 = 0;
    *a2 = 1;
    result = nn_fs_detail_CreateCacheStorage_plt(a3, 1, a4, a5, a6, a7, 0, a9);
    if ((_DWORD)result == 0) {
      goto LABEL_17;
    }
    if ((result & 0x1FF) == 2 &&
        (((unsigned int)result >> 9) & 0x1FFE) - 30 <= 0xF) {
      v22 = 0;
      result = nn_fs_QuerySaveDataTotalSize_plt(&v22, a6, a7);
      if ((_DWORD)result == 0) {
        v19 = ((v22 + 0x3FFF) & 0xFFFFFFFFFFFFC000LL) + 0x4000;
        if (((v22 + 0x3FFF) & 0xFFFFFFFFFFFFC000LL) != 0xFFFFFFFFFFFFC000LL) {
          *a2 = 0;
          *a1 = v19;
          return 15362;
        }
        goto LABEL_18;
      }
    }
    else if ((result & 0x3FFFFF) == 0x402) {
    LABEL_8:
      v18 = v21;
      *a1 = v21;
      if (v18 != 0) {
        return 15362;
      }
      return 0;
    }
  }
  return result;
}

__int64 nn_fs_EnsureApplicationCacheStorage_462550(__int64 a1, __int64 a2,
                                                   __int64 a3, _QWORD* a4)
{
  __int64 v4;
  unsigned int v5;
  unsigned int v7;

  v4 = a4[1582];
  if (v4 >= 1) {
    v5 = fs_save_data_for_application_462300_alt1(a1, a2, a3, a4[1551], 0, v4,
                                                  a4[1583], 1, a4 + 1692);
    if ((nn_fs_detail_IsAbortNeeded_plt(v5) & 1) != 0) {
      nn_fs_detail_LogResultErrorMessage_plt(v5,
                                             "EnsureApplicationCacheStorage");
      v7 = v5;
      if (v5 != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v7);
        __udf(0);
      }
    }
    else if (v5 != 0) {
      return v5;
    }
  }
  return 0;
}

__int64 nn_fs_CreateApplicationCacheStorage(unsigned __int64* a1, _DWORD* a2,
                                            __int64 a3, __int64 a4,
                                            unsigned __int16 a5, __int64 a6,
                                            __int64 a7)
{
  unsigned int v7;
  unsigned int v9;
  int v10;
  int v11;

  if (*(__int16*)(a4 + 12680) < (int)a5) {
    v7 = 3107842;
    if ((nn_fs_detail_IsAbortNeeded_plt(3107842) & 1) != 0) {
      nn_fs_detail_LogResultErrorMessage_plt(3107842,
                                             "CreateApplicationCacheStorage");
      v11 = 3107842;
      nn_diag_detail_AbortImpl_plt_858db0(&v11);
    }
    return v7;
  }
  if ((signed __int64)*(_QWORD*)(a4 + 12672) < a7 + a6) {
    v7 = 3107330;
    if ((nn_fs_detail_IsAbortNeeded_plt(3107330) & 1) != 0) {
      nn_fs_detail_LogResultErrorMessage_plt(3107330,
                                             "CreateApplicationCacheStorage");
      v10 = 3107330;
      nn_diag_detail_AbortImpl_plt_858db0(&v10);
    }
    return v7;
  }
  v7 = fs_save_data_for_application_462300(a1, a2, a3, *(_QWORD*)(a4 + 12408),
                                           a5, a6, a7, 0, a4 + 13536);
  if ((nn_fs_detail_IsAbortNeeded_plt(v7) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v7, "CreateApplicationCacheStorage");
    v9 = v7;
    if (v7 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v9);
    }
  }
  else if (v7 != 0) {
    return v7;
  }
  return 0;
}

#pragma GCC visibility pop
