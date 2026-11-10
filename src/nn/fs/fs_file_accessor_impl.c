#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fs_file_accessor_c3500_alt1(_QWORD) __asm__("fs_file_accessor_c3500");
__int64 fs_file_accessor_c35c0_alt1(_QWORD) __asm__("fs_file_accessor_c35c0");
__int64 fs_file_accessor_c3680_alt1(_QWORD) __asm__("fs_file_accessor_c3680");
__int64 fs_file_accessor_c3750_alt1(_QWORD) __asm__("fs_file_accessor_c3750");
__int64 fs_file_accessor_c3820_alt1(_QWORD) __asm__("fs_file_accessor_c3820");
__int64 fs_file_accessor_c3900_alt1(_QWORD) __asm__("fs_file_accessor_c3900");
__int64 fs_file_accessor_c39e0_alt1(_QWORD) __asm__("fs_file_accessor_c39e0");
__int64 fs_file_accessor_c3ad0_alt1(_QWORD) __asm__("fs_file_accessor_c3ad0");
__int64 fs_file_accessor_c3bd0_alt1(_QWORD) __asm__("fs_file_accessor_c3bd0");
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_fs_detail_FileDataCacheAccessor_Read_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__int64 nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(_QWORD);
__int64 nn_fs_detail_IsEnabledAccessLog_plt_85a3e0_alt1(void) __asm__(
    "nn_fs_detail_IsEnabledAccessLog_plt_85a3e0");
__int64 nn_fs_detail_IsEnabledHandleAccessLog_plt_85a3f0(_QWORD);
__int64 nn_fs_detail_OutputAccessLog_plt_85a420(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_fs_detail_OutputAccessLog_plt_85a420_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, const char*,
    ...) __asm__("nn_fs_detail_OutputAccessLog_plt_85a420");
__int64 nn_fs_detail_ReadViaPathBasedFileDataCache_plt(_QWORD, _QWORD, _QWORD,
                                                       _QWORD, _QWORD, _QWORD,
                                                       _QWORD, _QWORD, _QWORD,
                                                       _QWORD, _QWORD);
__int64 nn_fs_detail_TryGetGlobalFileDataCacheAccessor_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_os_ReleaseReadLock_plt(_QWORD);
__int64 nn_fs_detail_FileAccessor_ReadWithCacheAccessLog(__int64 a1, _QWORD* a2,
                                                         __int64 a3, __int64 a4,
                                                         unsigned __int64 a5,
                                                         __int64 a6, char a7,
                                                         char a8);
__int64 fs_file_accessor_c3500(_QWORD** a1);
__int64 fs_file_accessor_c35c0(_QWORD** a1);
__int64 fs_file_accessor_c3680(_QWORD** a1);
__int64 fs_file_accessor_c3750(_QWORD** a1);
__int64 fs_file_accessor_c3820(_QWORD** a1);
__int64 fs_file_accessor_c3900(_QWORD** a1);
__int64 fs_file_accessor_c39e0(_QWORD** a1);
__int64 fs_file_accessor_c3ad0(_QWORD** a1);
__int64 fs_file_accessor_c3bd0(_QWORD** a1);
__int64 fs_file_accessor_c3fd0(_QWORD** a1);

__int64 nn_fs_detail_FileAccessor_ReadWithCacheAccessLog(__int64 a1, _QWORD* a2,
                                                         __int64 a3, __int64 a4,
                                                         unsigned __int64 a5,
                                                         __int64 a6, char a7,
                                                         char a8)
{
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  const char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  int* v52;
  __int64* v53;
  __int64* v54;
  __int64* v55;
  unsigned __int64* v56;
  _QWORD* v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  _QWORD* v83;

  v82 = a3;
  v83 = a2;
  v80 = a1;
  v81 = a5;
  v78 = 0;
  v79 = 0;
  v76 = 0;
  v77 = 0;
  v74 = 0;
  v75 = 0;
  v72 = 0;
  v73 = 0;
  v70 = 0;
  v71 = 0;
  v68 = 0;
  v69 = 0;
  v66 = 0;
  v67 = 0;
  v64 = 0;
  v65 = 0;
  v62 = 0;
  v63 = 0;
  v16 = nn_os_GetSystemTick_plt(a1);
  v17 = v16;
  v60 = v16;
  if ((a7 & 1) != 0) {
    v18 = nn_fs_detail_ReadViaPathBasedFileDataCache_plt(
        *(_QWORD*)(a1 + 16), *(unsigned int*)(a1 + 40), *(_QWORD*)(a1 + 24),
        *(_QWORD*)(a1 + 48), *(unsigned int*)(a1 + 56), a2, a3, a4, a5, a6,
        &v62);
    v19 = v18;
    v61 = v18;
    goto LABEL_3;
  }
  if ((a8 & 1) == 0) {
  LABEL_30:
    v28 = nn_os_GetSystemTick_plt(v16);
    v19 = 3104258;
    if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(v28) & 1) == 0 ||
        ((v29 = nn_fs_detail_IsEnabledHandleAccessLog_plt_85a3f0(a1)) & 1) ==
            0) {
      if (a2 != nullptr) {
        if (a5 != 0) {
          if (a4 != 0) {
            if (a3 < 0) {
              return 3103234;
            }
            else if ((a5 & 0x8000000000000000LL) != 0) {
              return 3103746;
            }
            else if ((a3 ^ 0x7FFFFFFFFFFFFFFFuLL) < a5) {
              return 1538562;
            }
            else {
              return (*(unsigned int (**)(_QWORD, _QWORD*, __int64, __int64,
                                          unsigned __int64, __int64))(
                  **(_QWORD**)(a1 + 16) + 16LL))(*(_QWORD*)(a1 + 16), a2, a3,
                                                 a4, a5, a6);
            }
          }
        }
        else {
          v19 = 0;
          *a2 = 0;
        }
      }
      return v19;
    }
    v30 = nn_os_GetSystemTick_plt(v29);
    v31 = v30;
    if (a2 != nullptr) {
      if (a5 != 0) {
        if (a4 != 0) {
          if (a3 < 0) {
            v19 = 3103234;
          }
          else if ((a5 & 0x8000000000000000LL) != 0) {
            v19 = 3103746;
          }
          else if ((a3 ^ 0x7FFFFFFFFFFFFFFFuLL) < a5) {
            v19 = 1538562;
          }
          else {
            v30 = (*(__int64 (**)(_QWORD, _QWORD*, __int64, __int64,
                                  unsigned __int64, __int64))(
                **(_QWORD**)(a1 + 16) + 16LL))(*(_QWORD*)(a1 + 16), a2, a3, a4,
                                               a5, a6);
            v19 = v30;
          }
        }
      }
      else {
        v19 = 0;
        *a2 = 0;
      }
    }
    v27 = nn_os_GetSystemTick_plt(v30);
    v32 = 0;
    v23 = v19;
    if (v19 == 0 && a2 != nullptr) {
      v32 = *a2;
    }
    v24 = ", offset: %ld, size: %zu, read_size: %zu";
    v34 = v32;
    v26 = v31;
    goto LABEL_56;
  }
  v51 = nullptr;
  v52 = nullptr;
  if ((nn_fs_detail_TryGetGlobalFileDataCacheAccessor_plt(&v51) & 1) == 0) {
    v16 = (__int64)v52;
    if (v52 != nullptr) {
      v16 = nn_os_ReleaseReadLock_plt(v52);
    }
    goto LABEL_30;
  }
  v19 = nn_fs_detail_FileDataCacheAccessor_Read_plt(v51, *(_QWORD*)(a1 + 16),
                                                    a2, a3, a4, a5, a6, &v62);
  v61 = v19;
  v18 = (__int64)v52;
  if (v52 != nullptr) {
    v18 = nn_os_ReleaseReadLock_plt(v52);
  }
LABEL_3:
  v20 = nn_os_GetSystemTick_plt(v18);
  v21 = v20;
  v59 = v20;
  if ((unsigned __int8)v79 != 1) {
    if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(v20) & 1) == 0 ||
        (nn_fs_detail_IsEnabledHandleAccessLog_plt_85a3f0(a1) & 1) == 0) {
      return v19;
    }
    v25 = 0;
    v23 = v19;
    if (v19 == 0 && a2 != nullptr) {
      v25 = *a2;
    }
    v24 = ", offset: %ld, size: %zu, read_size: %zu";
    v34 = v25;
  LABEL_21:
    v26 = v17;
    v27 = v21;
  LABEL_56:
    nn_fs_detail_OutputAccessLog_plt_85a420(
        v23, v26, v27, "ReadFile", a1, v24, a3, a5, v34, v35, v36, v37, v38,
        v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50);
    return v19;
  }
  if (BYTE1(v79) == 1) {
    if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(v20) & 1) == 0 ||
        (nn_fs_detail_IsEnabledHandleAccessLog_plt_85a3f0(a1) & 1) == 0) {
      return v19;
    }
    v22 = 0;
    v23 = v19;
    if (v19 == 0 && a2 != nullptr) {
      v22 = *a2;
    }
    v34 = v22;
    v37 = v65;
    v38 = v66;
    v47 = v75;
    v48 = v76;
    v45 = v73;
    v46 = v74;
    v43 = v71;
    v44 = v72;
    v41 = v69;
    v42 = v70;
    v39 = v67;
    v40 = v68;
    v35 = v63;
    v36 = v64;
    v49 = v77;
    v50 = v78;
    v24 = ", offset: %ld, size: %zu, read_size: %zu, fetched: [{ offset: %ld, "
          "size: %lu }, { offset: %ld, size: %lu }, { "
          "offset: %ld, size: %lu }, { offset: %ld, size: %lu }, { offset: "
          "%ld, size: %lu }, { offset: %ld, size: %lu }, "
          "{ offset: %ld, size: %lu }, { offset: %ld, size: %lu }], "
          "fetch_exceeded: true";
    goto LABEL_21;
  }
  if ((int)v62 <= 3) {
    if ((int)v62 > 1) {
      v51 = &v80;
      v52 = &v61;
      v53 = &v60;
      v54 = &v59;
      v55 = &v82;
      v56 = &v81;
      v57 = &v83;
      v58 = &v62;
      if ((_DWORD)v62 == 2) {
        return (unsigned int)fs_file_accessor_c3680_alt1(&v51);
      }
      else {
        return (unsigned int)fs_file_accessor_c3750_alt1(&v51);
      }
    }
    if ((_DWORD)v62 == 0) {
      v51 = &v80;
      v52 = &v61;
      v53 = &v60;
      v54 = &v59;
      v55 = &v82;
      v56 = &v81;
      v57 = &v83;
      return (unsigned int)fs_file_accessor_c3500_alt1(&v51);
    }
    if ((_DWORD)v62 == 1) {
      v51 = &v80;
      v52 = &v61;
      v53 = &v60;
      v54 = &v59;
      v55 = &v82;
      v56 = &v81;
      v57 = &v83;
      v58 = &v62;
      return (unsigned int)fs_file_accessor_c35c0_alt1(&v51);
    }
  }
  else {
    if ((int)v62 <= 5) {
      v51 = &v80;
      v52 = &v61;
      v53 = &v60;
      v54 = &v59;
      v55 = &v82;
      v56 = &v81;
      v57 = &v83;
      v58 = &v62;
      if ((_DWORD)v62 == 4) {
        return (unsigned int)fs_file_accessor_c3820_alt1(&v51);
      }
      else {
        return (unsigned int)fs_file_accessor_c3900_alt1(&v51);
      }
    }
    switch ((_DWORD)v62) {
    case 6:
      v51 = &v80;
      v52 = &v61;
      v53 = &v60;
      v54 = &v59;
      v55 = &v82;
      v56 = &v81;
      v57 = &v83;
      v58 = &v62;
      return (unsigned int)fs_file_accessor_c39e0_alt1(&v51);
    case 7:
      v51 = &v80;
      v52 = &v61;
      v53 = &v60;
      v54 = &v59;
      v55 = &v82;
      v56 = &v81;
      v57 = &v83;
      v58 = &v62;
      return (unsigned int)fs_file_accessor_c3ad0_alt1(&v51);
    case 8:
      v51 = &v80;
      v52 = &v61;
      v53 = &v60;
      v54 = &v59;
      v55 = &v82;
      v56 = &v81;
      v57 = &v83;
      v58 = &v62;
      return (unsigned int)fs_file_accessor_c3bd0_alt1(&v51);
    default:
      break;
    }
  }
  return *(unsigned int*)(nn_detail_UnexpectedDefaultImpl_plt_857150(v20) + 40);
}

__int64 fs_file_accessor_c3500(_QWORD** a1)
{
  unsigned int** v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;

  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(a1) & 1) != 0 &&
      (nn_fs_detail_IsEnabledHandleAccessLog_plt_85a3f0(**a1) & 1) != 0) {
    v2 = (unsigned int**)(a1 + 1);
    v3 = *(unsigned int*)a1[1];
    v4 = (__int64*)*a1[6];
    if ((_DWORD)v3 != 0 || v4 == nullptr) {
      v6 = 0;
    }
    else {
      v6 = *v4;
    }
    nn_fs_detail_OutputAccessLog_plt_85a420_alt1(
        v3, *a1[2], *a1[3], "ReadFile", **a1,
        ", offset: %ld, size: %zu, read_size: %zu, fetched: []", *a1[4], *a1[5],
        v6);
  }
  else {
    v2 = (unsigned int**)(a1 + 1);
  }
  return **v2;
}

__int64 fs_file_accessor_c35c0(_QWORD** a1)
{
  unsigned int** v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;

  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(a1) & 1) != 0 &&
      (nn_fs_detail_IsEnabledHandleAccessLog_plt_85a3f0(**a1) & 1) != 0) {
    v2 = (unsigned int**)(a1 + 1);
    v3 = *(unsigned int*)a1[1];
    v4 = (__int64*)*a1[6];
    if ((_DWORD)v3 != 0 || v4 == nullptr) {
      v6 = 0;
    }
    else {
      v6 = *v4;
    }
    nn_fs_detail_OutputAccessLog_plt_85a420_alt1(
        v3, *a1[2], *a1[3], "ReadFile", **a1,
        ", offset: %ld, size: %zu, read_size: %zu, fetched: [{ "
        "offset: %ld, size: %lu }]",
        *a1[4], *a1[5], v6, a1[7][1], a1[7][2]);
  }
  else {
    v2 = (unsigned int**)(a1 + 1);
  }
  return **v2;
}

__int64 fs_file_accessor_c3680(_QWORD** a1)
{
  unsigned int** v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;

  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(a1) & 1) != 0 &&
      (nn_fs_detail_IsEnabledHandleAccessLog_plt_85a3f0(**a1) & 1) != 0) {
    v2 = (unsigned int**)(a1 + 1);
    v3 = *(unsigned int*)a1[1];
    v4 = (__int64*)*a1[6];
    if ((_DWORD)v3 != 0 || v4 == nullptr) {
      v6 = 0;
    }
    else {
      v6 = *v4;
    }
    nn_fs_detail_OutputAccessLog_plt_85a420_alt1(
        v3, *a1[2], *a1[3], "ReadFile", **a1,
        ", offset: %ld, size: %zu, read_size: %zu, fetched: [{ "
        "offset: %ld, size: %lu }, { offset: %ld, size: %lu }]",
        *a1[4], *a1[5], v6, a1[7][1], a1[7][2], a1[7][3], a1[7][4]);
  }
  else {
    v2 = (unsigned int**)(a1 + 1);
  }
  return **v2;
}

__int64 fs_file_accessor_c3750(_QWORD** a1)
{
  unsigned int** v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  _QWORD* v7;

  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(a1) & 1) != 0 &&
      (nn_fs_detail_IsEnabledHandleAccessLog_plt_85a3f0(**a1) & 1) != 0) {
    v2 = (unsigned int**)(a1 + 1);
    v3 = *(unsigned int*)a1[1];
    v4 = (__int64*)*a1[6];
    if ((_DWORD)v3 != 0 || v4 == nullptr) {
      v6 = 0;
    }
    else {
      v6 = *v4;
    }
    v7 = a1[7];
    nn_fs_detail_OutputAccessLog_plt_85a420_alt1(
        v3, *a1[2], *a1[3], "ReadFile", **a1,
        ", offset: %ld, size: %zu, read_size: %zu, fetched: [{ offset: %ld, "
        "size: %lu }, { offset: %ld, size: %lu }, { offs"
        "et: %ld, size: %lu }]",
        *a1[4], *a1[5], v6, v7[1], v7[2], v7[3], v7[4], v7[5], v7[6]);
  }
  else {
    v2 = (unsigned int**)(a1 + 1);
  }
  return **v2;
}

__int64 fs_file_accessor_c3820(_QWORD** a1)
{
  unsigned int** v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  _QWORD* v7;

  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(a1) & 1) != 0 &&
      (nn_fs_detail_IsEnabledHandleAccessLog_plt_85a3f0(**a1) & 1) != 0) {
    v2 = (unsigned int**)(a1 + 1);
    v3 = *(unsigned int*)a1[1];
    v4 = (__int64*)*a1[6];
    if ((_DWORD)v3 != 0 || v4 == nullptr) {
      v6 = 0;
    }
    else {
      v6 = *v4;
    }
    v7 = a1[7];
    nn_fs_detail_OutputAccessLog_plt_85a420_alt1(
        v3, *a1[2], *a1[3], "ReadFile", **a1,
        ", offset: %ld, size: %zu, read_size: %zu, fetched: [{ offset: %ld, "
        "size: %lu }, { offset: %ld, size: %lu }, { offs"
        "et: %ld, size: %lu }, { offset: %ld, size: %lu }]",
        *a1[4], *a1[5], v6, v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v7[7],
        v7[8]);
  }
  else {
    v2 = (unsigned int**)(a1 + 1);
  }
  return **v2;
}

__int64 fs_file_accessor_c3900(_QWORD** a1)
{
  unsigned int** v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  _QWORD* v7;

  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0_alt1() & 1) != 0 &&
      (nn_fs_detail_IsEnabledHandleAccessLog_plt_85a3f0(**a1) & 1) != 0) {
    v2 = (unsigned int**)(a1 + 1);
    v3 = *(unsigned int*)a1[1];
    v4 = (__int64*)*a1[6];
    if ((_DWORD)v3 != 0 || v4 == nullptr) {
      v6 = 0;
    }
    else {
      v6 = *v4;
    }
    v7 = a1[7];
    nn_fs_detail_OutputAccessLog_plt_85a420_alt1(
        v3, *a1[2], *a1[3], "ReadFile", **a1,
        ", offset: %ld, size: %zu, read_size: %zu, fetched: [{ offset: %ld, "
        "size: %lu }, { offset: %ld, size: %lu }, { offs"
        "et: %ld, size: %lu }, { offset: %ld, size: %lu }, { offset: %ld, "
        "size: %lu }]",
        *a1[4], *a1[5], v6, v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v7[7],
        v7[8], v7[9], v7[10]);
  }
  else {
    v2 = (unsigned int**)(a1 + 1);
  }
  return **v2;
}

__int64 fs_file_accessor_c39e0(_QWORD** a1)
{
  unsigned int** v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  _QWORD* v7;

  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(a1) & 1) != 0 &&
      (nn_fs_detail_IsEnabledHandleAccessLog_plt_85a3f0(**a1) & 1) != 0) {
    v2 = (unsigned int**)(a1 + 1);
    v3 = *(unsigned int*)a1[1];
    v4 = (__int64*)*a1[6];
    if ((_DWORD)v3 != 0 || v4 == nullptr) {
      v6 = 0;
    }
    else {
      v6 = *v4;
    }
    v7 = a1[7];
    nn_fs_detail_OutputAccessLog_plt_85a420_alt1(
        v3, *a1[2], *a1[3], "ReadFile", **a1,
        ", offset: %ld, size: %zu, read_size: %zu, fetched: [{ offset: %ld, "
        "size: %lu }, { offset: %ld, size: %lu }, { offs"
        "et: %ld, size: %lu }, { offset: %ld, size: %lu }, { offset: %ld, "
        "size: %lu }, { offset: %ld, size: %lu }]",
        *a1[4], *a1[5], v6, v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v7[7],
        v7[8], v7[9], v7[10], v7[11], v7[12]);
  }
  else {
    v2 = (unsigned int**)(a1 + 1);
  }
  return **v2;
}

__int64 fs_file_accessor_c3ad0(_QWORD** a1)
{
  unsigned int** v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  _QWORD* v7;

  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(a1) & 1) != 0 &&
      (nn_fs_detail_IsEnabledHandleAccessLog_plt_85a3f0(**a1) & 1) != 0) {
    v2 = (unsigned int**)(a1 + 1);
    v3 = *(unsigned int*)a1[1];
    v4 = (__int64*)*a1[6];
    if ((_DWORD)v3 != 0 || v4 == nullptr) {
      v6 = 0;
    }
    else {
      v6 = *v4;
    }
    v7 = a1[7];
    nn_fs_detail_OutputAccessLog_plt_85a420_alt1(
        v3, *a1[2], *a1[3], "ReadFile", **a1,
        ", offset: %ld, size: %zu, read_size: %zu, fetched: [{ offset: %ld, "
        "size: %lu }, { offset: %ld, size: %lu }, { offs"
        "et: %ld, size: %lu }, { offset: %ld, size: %lu }, { offset: %ld, "
        "size: %lu }, { offset: %ld, size: %lu }, { offset"
        ": %ld, size: %lu }]",
        *a1[4], *a1[5], v6, v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v7[7],
        v7[8], v7[9], v7[10], v7[11], v7[12], v7[13], v7[14]);
  }
  else {
    v2 = (unsigned int**)(a1 + 1);
  }
  return **v2;
}

__int64 fs_file_accessor_c3bd0(_QWORD** a1)
{
  unsigned int** v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  _QWORD* v7;

  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(a1) & 1) != 0 &&
      (nn_fs_detail_IsEnabledHandleAccessLog_plt_85a3f0(**a1) & 1) != 0) {
    v2 = (unsigned int**)(a1 + 1);
    v3 = *(unsigned int*)a1[1];
    v4 = (__int64*)*a1[6];
    if ((_DWORD)v3 != 0 || v4 == nullptr) {
      v6 = 0;
    }
    else {
      v6 = *v4;
    }
    v7 = a1[7];
    nn_fs_detail_OutputAccessLog_plt_85a420_alt1(
        v3, *a1[2], *a1[3], "ReadFile", **a1,
        ", offset: %ld, size: %zu, read_size: %zu, fetched: [{ offset: %ld, "
        "size: %lu }, { offset: %ld, size: %lu }, { offs"
        "et: %ld, size: %lu }, { offset: %ld, size: %lu }, { offset: %ld, "
        "size: %lu }, { offset: %ld, size: %lu }, { offset"
        ": %ld, size: %lu }, { offset: %ld, size: %lu }]",
        *a1[4], *a1[5], v6, v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v7[7],
        v7[8], v7[9], v7[10], v7[11], v7[12], v7[13], v7[14], v7[15], v7[16]);
  }
  else {
    v2 = (unsigned int**)(a1 + 1);
  }
  return **v2;
}

__int64 fs_file_accessor_c3fd0(_QWORD** a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v9;

  v1 = a1[1];
  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(a1) & 1) != 0 &&
      ((v3 = nn_fs_detail_IsEnabledHandleAccessLog_plt_85a3f0(**a1)) & 1) !=
          0) {
    v4 = nn_os_GetSystemTick_plt(v3);
    v1 = (_QWORD*)*((unsigned int*)v1 + 9);
    v5 = v4;
    v6 = nn_os_GetSystemTick_plt(v4);
    v7 = (__int64*)*a1[4];
    if ((_DWORD)v1 != 0 || v7 == nullptr) {
      v9 = 0;
    }
    else {
      v9 = *v7;
    }
    nn_fs_detail_OutputAccessLog_plt_85a420_alt1(
        v1, v5, v6, "ReadFile", **a1,
        ", offset: %ld, size: %zu, read_size: %zu", *a1[2], *a1[3], v9);
  }
  else {
    LODWORD(v1) = *((_DWORD*)v1 + 9);
  }
  return (unsigned int)v1;
}

#pragma GCC visibility pop
