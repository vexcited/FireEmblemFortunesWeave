#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt_alt1(__int64, __int64,
                        unsigned __int64) __asm__("memcpy_plt");
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_fs_RomFsFileSystem_GetRequiredWorkingMemorySize_plt(_QWORD, _QWORD);
__int64 nn_fs_da290(__int64*, __int64);
__int64 nn_fs_detail_CheckMountName_plt(_QWORD);
__int64 nn_fs_detail_EnableFileSystemAccessorAccessLog_plt(_QWORD);
__int64 nn_fs_detail_IsAbortNeeded_plt(_QWORD);
__int64 nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(_QWORD, _QWORD);
__int64 nn_fs_detail_IsEnabledAccessLog_plt_85aec0(_QWORD);
__int64 nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(_QWORD);
__int64 nn_fs_detail_LogResultErrorMessage_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_MountRomOnFileImpl_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_fs_detail_OutputAccessLog_plt_85a860(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, const char*, ...);
__int64 nn_fs_df530(__int64);
__int64 nn_os_GetSystemTick_plt(_QWORD);
bool nn_fs_125640(__int64);
void __attribute__((noreturn)) nn_fs_dc4f0(const char*);
void __attribute__((noreturn)) nn_fs_dc840(const char*);
__int64 nn_fs_d9b40(void* this_, __int64 a2);
__int64 nn_fs_d9c20(void* this_, unsigned __int64* a2);
__int64 nn_fs_d9e20(void* this_, const char* a2, size_t a3);
void __attribute__((noreturn)) nn_fs_dc4d0();
void __attribute__((noreturn)) nn_fs_dc820();
__int64 nn_fs_125510(__int64 a1, __int64* a2, __int64 a3, unsigned __int64 a4,
                     __int64 a5, __int64 a6, int a7, char a8, char a9,
                     __int64* a10);
__int64* nn_fs_12e8e0(_QWORD* a1, __int64* a2, int a3, int a4);

__int64 nn_fs_d9b40(void* this_, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  unsigned int v10;

  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(this_, a2) & 1) != 0 &&
      ((v3 = nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(0)) & 1) != 0) {
    v4 = nn_os_GetSystemTick_plt(v3);
    v5 = nn_fs_df530((__int64)this_);
    v6 = v5;
    v7 = nn_os_GetSystemTick_plt(v5);
    v8 = v6;
    nn_fs_detail_OutputAccessLog_plt_85a860(
        v6, v4, v7, "FormatDevelopmentStorage", 0, ", size: %ld", this_);
  }
  else {
    v6 = nn_fs_df530((__int64)this_);
    v8 = v6;
  }
  if ((nn_fs_detail_IsAbortNeeded_plt(v8) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v8, "FormatDevelopmentStorage");
    v10 = v6;
    if (v6 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v10);
    }
  }
  else if (v6 != 0) {
    return v6;
  }
  return 0;
}

__int64 nn_fs_d9c20(void* this_, unsigned __int64* a2)
{
  unsigned int v3;
  __int64 v6;
  __int64 v7;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;
  __int64 v19;
  __int64 v20;

  v3 = 3104258;
  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(this_, a2) & 1) != 0) {
    v6 = nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(0);
    if ((v6 & 1) != 0) {
      v7 = nn_os_GetSystemTick_plt(v6);
      v10 = v7;
      v20 = 0;
      if (this_ != nullptr) {
        v17_.v18 = 0;
        v19 = 0;
        v17_.v17 = 0;
        v7 = nn_fs_da290(&v19, (__int64)&v17_.v17);
        v11 = v19;
        if ((_DWORD)v7 != 0 ||
            (_DWORD)(v7 =
                         nn_fs_RomFsFileSystem_GetRequiredWorkingMemorySize_plt(
                             &v20, v19)) != 0) {
          v3 = v7;
          if (v11 == 0) {
            goto LABEL_22;
          }
          goto LABEL_21;
        }
        if (v20 == 0) {
          v3 = 2191362;
          if (v11 == 0) {
            goto LABEL_22;
          }
          goto LABEL_21;
        }
        v3 = 0;
        *(_QWORD*)this_ = v20;
        if (v11 != 0) {
        LABEL_21:
          v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
        }
      }
    LABEL_22:
      v15 = nn_os_GetSystemTick_plt(v7);
      v16 = 0;
      if (this_ != nullptr && v3 == 0) {
        v16 = *(_QWORD*)this_;
      }
      nn_fs_detail_OutputAccessLog_plt_85a860(
          v3, v10, v15, "QueryMountDevelopmentStorageCacheSize", 0,
          ", size: %zu", v16);
      if (v3 != 0) {
        goto LABEL_26;
      }
      return 0;
    }
  }
  v20 = 0;
  if (this_ == nullptr) {
    goto LABEL_15;
  }
  v17_.v18 = 0;
  v19 = 0;
  v17_.v17 = 0;
  v12 = nn_fs_da290(&v19, (__int64)&v17_.v17);
  v13 = v19;
  if (v12 != 0 || (v12 = nn_fs_RomFsFileSystem_GetRequiredWorkingMemorySize_plt(
                       &v20, v19)) != 0) {
    v3 = v12;
    if (v13 == 0) {
      goto LABEL_15;
    }
  LABEL_14:
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    goto LABEL_15;
  }
  if (v20 != 0) {
    v3 = 0;
    *(_QWORD*)this_ = v20;
    if (v13 == 0) {
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v3 = 2191362;
  if (v13 != 0) {
    goto LABEL_14;
  }
LABEL_15:
  if (v3 == 0) {
    return 0;
  }
LABEL_26:
  result = 513026;
  if (((v3 & 0x1FF) != 2 || ((v3 >> 9) & 0x1FFF) - 4280 >= 5) &&
      (v3 & 0x3FFFFFLL) != 0x202) {
    if ((nn_fs_detail_IsAbortNeeded_plt(v3) & 1) != 0) {
      nn_fs_detail_LogResultErrorMessage_plt(
          v3, "QueryMountDevelopmentStorageCacheSize");
      LODWORD(v17_.v17) = v3;
      nn_diag_detail_AbortImpl_plt_858db0(&v17_.v17);
    }
    return v3;
  }
  return result;
}

__int64 nn_fs_d9e20(void* this_, const char* a2, size_t a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[2];
  __int64 v21;

  v6 = nn_fs_detail_IsEnabledAccessLog_plt_85aec0(1);
  if ((v6 & 1) == 0) {
    v11 = nn_fs_detail_CheckMountName_plt(this_);
    if (v11 != 0) {
      goto LABEL_24;
    }
    if (a2 == nullptr) {
      v11 = 3104258;
      goto LABEL_11;
    }
    v21 = 0;
    v20[0] = 0;
    v20[1] = 0;
    v17 = nn_fs_da290(&v21, (__int64)v20);
    v18 = v21;
    if (v17 == 0) {
      v19 = 0;
      v17 = nn_fs_RomFsFileSystem_GetRequiredWorkingMemorySize_plt(&v19, v21);
      if (v17 == 0) {
        if (v19 == 0) {
          v11 = 2191362;
          v21 = 0;
          if (v18 == 0) {
          LABEL_24:
            if (v11 == 0) {
              goto LABEL_25;
            }
          LABEL_11:
            result = 513026;
            if (((v11 & 0x1FF) != 2 || ((v11 >> 9) & 0x1FFF) - 4280 >= 5) &&
                (v11 & 0x3FFFFFLL) != 0x202) {
              if ((nn_fs_detail_IsAbortNeeded_plt(v11) & 1) != 0) {
                nn_fs_detail_LogResultErrorMessage_plt(
                    v11, "MountDevelopmentStorage");
                LODWORD(v20[0]) = v11;
                nn_diag_detail_AbortImpl_plt_858db0(v20);
              }
              return v11;
            }
            return result;
          }
        LABEL_23:
          (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
          goto LABEL_24;
        }
        v17 = nn_fs_detail_MountRomOnFileImpl_plt(this_, &v21, a2, a3);
        v18 = v21;
      }
    }
    v11 = v17;
    v21 = 0;
    if (v18 == 0) {
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  v7 = nn_os_GetSystemTick_plt(v6);
  v8 = nn_fs_detail_CheckMountName_plt(this_);
  v11 = v8;
  if ((_DWORD)v8 != 0) {
    goto LABEL_10;
  }
  if (a2 != nullptr) {
    v21 = 0;
    v20[0] = 0;
    v20[1] = 0;
    v8 = nn_fs_da290(&v21, (__int64)v20);
    v12 = v21;
    if ((_DWORD)v8 != 0 ||
        (v19 = 0,
         (_DWORD)(v8 = nn_fs_RomFsFileSystem_GetRequiredWorkingMemorySize_plt(
                      &v19, v21)) != 0)) {
    LABEL_8:
      v11 = v8;
      v21 = 0;
      if (v12 == 0) {
        goto LABEL_10;
      }
      goto LABEL_9;
    }
    if (v19 != 0) {
      v8 = nn_fs_detail_MountRomOnFileImpl_plt(this_, &v21, a2, a3);
      v12 = v21;
      goto LABEL_8;
    }
    v11 = 2191362;
    v21 = 0;
    if (v12 != 0) {
    LABEL_9:
      v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    }
  }
  else {
    v11 = 3104258;
  }
LABEL_10:
  v13 = nn_os_GetSystemTick_plt(v8);
  nn_fs_detail_OutputAccessLog_plt_85a860(
      v11, v7, v13, "MountDevelopmentStorage", 0, ", name: \"%s\", size: %zu",
      (const char*)this_, a3);
  if (v11 != 0) {
    goto LABEL_11;
  }
LABEL_25:
  if ((nn_fs_detail_IsEnabledAccessLog_plt_85aec0(1) & 1) != 0) {
    nn_fs_detail_EnableFileSystemAccessorAccessLog_plt(this_);
  }
  return 0;
}

void __attribute__((noreturn)) nn_fs_dc4d0() { nn_fs_dc4f0("basic_string"); }

void __attribute__((noreturn)) nn_fs_dc820() { nn_fs_dc840("basic_string"); }

__int64 nn_fs_125510(__int64 a1, __int64* a2, __int64 a3, unsigned __int64 a4,
                     __int64 a5, __int64 a6, int a7, char a8, char a9,
                     __int64* a10)
{
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    int v31;
    char gap12_[4];
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    unsigned __int64 v41;
    __int64 v42;
    __int64 v43;
    int v44;
    char v45;
    char v46;
    char gap118_[50];
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
  } v31_;

  memset_plt((void*)&v31_.v31, nullptr, 512, a4);
  v31_.v40 = a3;
  v31_.v41 = a4;
  v31_.v42 = a5;
  v31_.v43 = a6;
  v31_.v44 = a7;
  v31_.v45 = a8;
  v31_.v46 = a9;
  v31_.v31 = 0x10000;
  v18 = a2[5];
  v31_.v36 = a2[4];
  v31_.v37 = v18;
  v19 = a2[7];
  v31_.v38 = a2[6];
  v31_.v39 = v19;
  v20 = a2[1];
  v31_.v32 = *a2;
  v31_.v33 = v20;
  v21 = a2[3];
  v31_.v34 = a2[2];
  v31_.v35 = v21;
  if (a10 != nullptr) {
    v22 = a10[13];
    v31_.v59 = a10[12];
    v31_.v60 = v22;
    v23 = a10[15];
    v31_.v61 = a10[14];
    v31_.v62 = v23;
    v24 = a10[9];
    v31_.v55 = a10[8];
    v31_.v56 = v24;
    v25 = a10[11];
    v31_.v57 = a10[10];
    v31_.v58 = v25;
    v26 = a10[5];
    v31_.v51 = a10[4];
    v31_.v52 = v26;
    v27 = a10[7];
    v31_.v53 = a10[6];
    v31_.v54 = v27;
    v28 = a10[1];
    v31_.v47 = *a10;
    v31_.v48 = v28;
    v29 = a10[3];
    v31_.v49 = a10[2];
    v31_.v50 = v29;
  }
  if (!nn_fs_125640((__int64)&v31_.v31)) {
    return 3072514;
  }
  memcpy_plt(a1, &v31_.v31, 512);
  return 0;
}

__int64* nn_fs_12e8e0(_QWORD* a1, __int64* a2, int a3, int a4)
{
  __int64* v6;
  __int64* v8;
  __int64* v9;
  int v10;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  _QWORD* v25;
  __int64* v26;
  __int64 v27;
  _QWORD* v28;
  int v30;
  int v32;
  _QWORD* v33;
  __int64* v34;
  int* v35;
  int v36;
  int v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  int v43;
  int v45;
  __int64 v46;
  __int64* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  _QWORD* v57;
  __int64* v58;
  int v59;
  int v60;
  int v61;
  __int64* v62;
  __int64* v63;
  __int64* v64;
  _QWORD* v65;
  int v66;
  _QWORD* v67;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  int v77;
  int v78;
  int v79;
  __int64* v80;
  __int64 v81;
  int v82;

  v6 = a2;
  v82 = a4;
  if (a2 != nullptr) {
    v8 = (__int64*)a1[10];
    v9 = a1 + 9;
    if (v8 != a2) {
      goto LABEL_3;
    }
  LABEL_19:
    v8 = (__int64*)v8[1];
    v10 = *((_DWORD*)v6 + 4);
    if (v10 <= a3 || v8 == v9) {
      goto LABEL_24;
    }
    goto LABEL_63;
  }
  v6 = (__int64*)a1[10];
  v12 = a1[1];
  v13 = *((int*)v6 + 4);
  v14 = *(__int64**)(v12 + 16 * v13 + 8);
  v15 = *(__int64**)(v12 + 16LL * a3 + 8);
  if (v14 != v15) {
    memcpy_plt_alt1(*v14, *v15, 0x4000u);
    v16 = *v14;
    *v14 = *v15;
    *v15 = v16;
    v17 = a1[1];
    v13 = v17 + 16LL * (int)((unsigned __int64)(*v14 - *a1) >> 14);
    v18 = v17 + 16LL * (int)((unsigned __int64)(v16 - *a1) >> 14);
    v19 = *(_QWORD*)(v13 + 8);
    *(_QWORD*)(v13 + 8) = *(_QWORD*)(v18 + 8);
    *(_QWORD*)(v18 + 8) = v19;
    LODWORD(v13) = *((_DWORD*)v6 + 4);
  }
  v20 = *((_DWORD*)v6 + 5) - 1;
  *((_DWORD*)v6 + 4) = v13 + 1;
  *((_DWORD*)v6 + 5) = v20;
  if (v20 != 0) {
    v6 = (__int64*)a1[8];
  }
  else {
    v21 = (__int64*)a1[10];
    v22 = (__int64*)v21[1];
    v23 = *v22;
    *(_QWORD*)(*v21 + 8) = v22;
    *v22 = *v21;
    *(_QWORD*)(v23 + 8) = v21;
    *v21 = v23;
    v24 = (__int64*)*v6;
    *v6 = (__int64)(a1 + 7);
    v25 = (_QWORD*)a1[8];
    v24[1] = (__int64)v25;
    *v25 = v24;
    a1[8] = v6;
  }
  v26 = (__int64*)v6[1];
  v27 = *v26;
  *(_QWORD*)(*v6 + 8) = v26;
  *v26 = *v6;
  *(_QWORD*)(v27 + 8) = v6;
  *v6 = v27;
  *((_DWORD*)v6 + 4) = a3;
  *((_DWORD*)v6 + 5) = 1;
  v28 = a1 + 9;
  while (1) {
    v28 = (_QWORD*)v28[1];
    if (v28 == a1 + 9) {
      break;
    }
    if (a3 < (signed __int32)*((_DWORD*)v28 + 4)) {
      goto LABEL_18;
    }
  }
  v28 = a1 + 9;
LABEL_18:
  *v6 = *v28;
  *(_QWORD*)(v27 + 8) = v28;
  *(_QWORD*)(*v28 + 8LL) = v6;
  *v28 = v27;
  v8 = (__int64*)a1[10];
  v9 = a1 + 9;
  if (v8 == v6) {
    goto LABEL_19;
  }
LABEL_3:
  v10 = *((_DWORD*)v6 + 4);
  if (v10 <= a3 || v8 == v9) {
    goto LABEL_24;
  }
LABEL_63:
  v57 = a1 + 7;
  do {
    if (v6 == (__int64*)a1[10]) {
      v60 = a3;
    }
    else {
      v58 = (__int64*)*v6;
      v59 = *(_DWORD*)(*v6 + 20) + *(_DWORD*)(*v6 + 16);
      if (v59 <= a3) {
        v60 = a3;
      }
      else {
        v60 = *(_DWORD*)(*v6 + 20) + *(_DWORD*)(*v6 + 16);
      }
      if (v59 > a3) {
        while (1) {
          if (v60 != *((_DWORD*)v6 + 4)) {
          LABEL_85:
            v10 = *((_DWORD*)v6 + 4);
            if (v10 > v60) {
              goto LABEL_86;
            }
            goto LABEL_87;
          }
          v61 = *((_DWORD*)v6 + 5);
          *((_DWORD*)v6 + 4) = *((_DWORD*)v58 + 4);
          *((_DWORD*)v6 + 5) = v61 + *((_DWORD*)v58 + 5);
          if (v58 == v8) {
            v8 = *(__int64**)(v8[1] + 8);
            v62 = (__int64*)*v58;
            if (v58 != v9) {
            LABEL_72:
              v63 = (__int64*)v58[1];
              v64 = (__int64*)*v63;
              v62[1] = (__int64)v63;
              *v63 = *v58;
              v64[1] = (__int64)v58;
              v62 = v64;
              goto LABEL_75;
            }
          }
          else {
            v62 = (__int64*)*v58;
            if (v58 != v9) {
              goto LABEL_72;
            }
          }
          v63 = v58;
        LABEL_75:
          *v58 = (__int64)v57;
          v65 = (_QWORD*)a1[8];
          v62[1] = (__int64)v65;
          *v65 = v62;
          a1[8] = v58;
          if (v63 == (__int64*)a1[10]) {
            v60 = a3;
            goto LABEL_85;
          }
          v58 = (__int64*)*v63;
          v66 = *(_DWORD*)(*v63 + 20) + *(_DWORD*)(*v63 + 16);
          if (v66 <= a3) {
            v60 = a3;
          }
          else {
            v60 = v66;
          }
          if (v66 <= a3) {
            goto LABEL_85;
          }
        }
      }
    }
    if (v10 > v60) {
    LABEL_86:
      if (v8 != v9) {
        do {
          v69 = a1[1];
          v70 = *((int*)v8 + 4);
          v71 = *(__int64**)(v69 + 16 * v70 + 8);
          v72 = *(__int64**)(v69 + 16LL * v10 - 8);
          if (v71 != v72) {
            memcpy_plt_alt1(*v71, *v72, 0x4000u);
            v73 = *v71;
            *v71 = *v72;
            *v72 = v73;
            v74 = a1[1];
            v70 = v74 + 16LL * (int)((unsigned __int64)(*v71 - *a1) >> 14);
            v75 = v74 + 16LL * (int)((unsigned __int64)(v73 - *a1) >> 14);
            v76 = *(_QWORD*)(v70 + 8);
            *(_QWORD*)(v70 + 8) = *(_QWORD*)(v75 + 8);
            *(_QWORD*)(v75 + 8) = v76;
            LODWORD(v70) = *((_DWORD*)v8 + 4);
          }
          v77 = v70 + 1;
          v78 = *((_DWORD*)v8 + 5) - 1;
          *((_DWORD*)v8 + 4) = v77;
          *((_DWORD*)v8 + 5) = v78;
          v10 = *((_DWORD*)v6 + 4) - 1;
          v79 = *((_DWORD*)v6 + 5) + 1;
          *((_DWORD*)v6 + 4) = v10;
          *((_DWORD*)v6 + 5) = v79;
          if (*((_DWORD*)v8 + 5) == 0) {
            v80 = (__int64*)v8[1];
            v81 = *v80;
            *(_QWORD*)(*v8 + 8) = v80;
            *v80 = *v8;
            *(_QWORD*)(v81 + 8) = v8;
            *v8 = v81;
            if (v80 == v6) {
              v80 = (__int64*)v80[1];
            }
            *v8 = (__int64)v57;
            v67 = (_QWORD*)a1[8];
            *(_QWORD*)(v81 + 8) = v67;
            *v67 = v81;
            a1[8] = v8;
            v8 = v80;
            v10 = *((_DWORD*)v6 + 4);
          }
        } while (v10 > v60 && v8 != v9);
      }
    }
  LABEL_87:;
  } while (v10 > a3 && v8 != v9);
LABEL_24:
  v30 = *((_DWORD*)v6 + 5);
  if (v30 + v10 < a4 && v8 != v9) {
    v32 = v82;
    v33 = a1 + 7;
    do {
      v34 = (__int64*)v6[1];
      if (v34 == v9) {
        v36 = v82;
        if (v82 < a4) {
          goto LABEL_35;
        }
      }
      else {
        v35 = (int*)(v34 + 2);
        if (a4 < (signed __int32)*((_DWORD*)v34 + 4)) {
          v35 = &v82;
        }
        v36 = *v35;
        if (*v35 < a4) {
          while (1) {
          LABEL_35:
            v37 = *((_DWORD*)v6 + 5);
            if (v36 != v37 + *((_DWORD*)v6 + 4)) {
            LABEL_48:
              v10 = *((_DWORD*)v6 + 4);
              v30 = *((_DWORD*)v6 + 5);
              break;
            }
            *((_DWORD*)v6 + 5) = *((_DWORD*)v34 + 5) + v37;
            if (v34 == v8) {
              v8 = (__int64*)v8[1];
              v38 = *v34;
              if (v34 != v9) {
              LABEL_38:
                v39 = (__int64*)v34[1];
                v40 = *v39;
                *(_QWORD*)(v38 + 8) = v39;
                *v39 = *v34;
                *(_QWORD*)(v40 + 8) = v34;
                v38 = v40;
                goto LABEL_41;
              }
            }
            else {
              v38 = *v34;
              if (v34 != v9) {
                goto LABEL_38;
              }
            }
            v39 = v34;
          LABEL_41:
            *v34 = (__int64)v33;
            v41 = (_QWORD*)a1[8];
            *(_QWORD*)(v38 + 8) = v41;
            *v41 = v38;
            a1[8] = v34;
            if (v39 == v9) {
              v36 = a4;
              goto LABEL_48;
            }
            v34 = v39;
            if (a4 >= (signed __int32)*((_DWORD*)v39 + 4)) {
              v36 = *((_DWORD*)v39 + 4);
            }
            else {
              v36 = v32;
            }
            if (v36 >= a4) {
              goto LABEL_48;
            }
          }
        }
      }
      while (1) {
        v43 = v30 + v10;
        if (v30 + v10 >= v36 || v8 == v9) {
          break;
        }
        v45 = *((_DWORD*)v8 + 5);
        v46 = a1[1];
        v47 = *(__int64**)(v46 + 16LL * (v45 + *((_DWORD*)v8 + 4)) - 8);
        v48 = *(__int64**)(v46 + 16LL * v43 + 8);
        if (v47 != v48) {
          memcpy_plt_alt1(*v47, *v48, 0x4000u);
          v49 = *v47;
          *v47 = *v48;
          *v48 = v49;
          v50 = a1[1];
          v51 = v50 + 16LL * (int)((unsigned __int64)(*v47 - *a1) >> 14);
          v52 = v50 + 16LL * (int)((unsigned __int64)(v49 - *a1) >> 14);
          v53 = *(_QWORD*)(v51 + 8);
          *(_QWORD*)(v51 + 8) = *(_QWORD*)(v52 + 8);
          *(_QWORD*)(v52 + 8) = v53;
          v45 = *((_DWORD*)v8 + 5);
        }
        *((_DWORD*)v8 + 5) = v45 - 1;
        v30 = *((_DWORD*)v6 + 5) + 1;
        *((_DWORD*)v6 + 5) = v30;
        if (*((_DWORD*)v8 + 5) == 0) {
          v54 = (__int64*)v8[1];
          v55 = *v54;
          *(_QWORD*)(*v8 + 8) = v54;
          *v54 = *v8;
          *(_QWORD*)(v55 + 8) = v8;
          *v8 = v55;
          if (v54 == v6) {
            v54 = (__int64*)v54[1];
          }
          *v8 = (__int64)v33;
          v42 = (_QWORD*)a1[8];
          *(_QWORD*)(v55 + 8) = v42;
          *v42 = v55;
          a1[8] = v8;
          v8 = v54;
          v30 = *((_DWORD*)v6 + 5);
        }
        v10 = *((_DWORD*)v6 + 4);
      }
    } while (v43 < a4 && v8 != v9);
  }
  return v6;
}

#pragma GCC visibility pop
