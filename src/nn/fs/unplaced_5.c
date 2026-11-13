#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_fs_detail_GetFileSystemProxyServiceObject_plt(PSEUDO_X8);
__int64 SdkRoutine_11fca0(__int64, __int64, __int64, _QWORD*, unsigned int);
__int64 SdkRoutine_120140(__int64, __int64, __int64, _QWORD*, unsigned int);
__int64 nn_fs_HierarchicalRomFileTable_DumpDirectory_plt(_QWORD, _QWORD,
                                                         _QWORD);
__int64 nn_fs_IStorage_CheckAccessRange_plt(__int64, __int64, __int64);
__int64 nn_fs_detail_Allocate_plt(unsigned __int64);
__int64 nn_fs_detail_Deallocate_plt(__int64, unsigned __int64);
__int64 nn_os_SleepThread_plt(_QWORD);
__int64 nn_util_SNPrintf_plt(_QWORD, _QWORD, const char*, ...);
void __attribute__((noreturn)) nn_fs_10de70();
__int64 nn_fs_10dae0(__int64 a1);
__int64 nn_fs_11f0e0(void* this_, unsigned int a2, int a3);

__int64 nn_fs_10dae0(__int64 a1)
{
  int v1;
  int v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  int v12;
  _DWORD* v13;
  unsigned __int64 v14;
  _DWORD* v15;
  __int64 v16;
  _DWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _DWORD* v22;
  char v23;
  char* v24;
  char* v25;
  _DWORD* v26;
  _DWORD* v27;
  __int64 v28;
  char v29;
  __int64* v30;
  __int64 v31;
  int v33;
  int v34;
  struct {
    _QWORD* v35;
    __int64 v36;
  } v35_;
  __int64 v37;
  struct {
    _QWORD v38[2];
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
  } v38_;
  __int64 v49;
  __int64 v50;

  if (**(_QWORD**)a1 == 0) {
    return 3104258;
  }
  v1 = 5;
  v3 = 0;
  v4 = **(__int64***)(a1 + 8);
  do {
    v33 = v1;
    v34 = v3;
    if (*v4 == 0) {
      v5 = nn_fs_detail_Allocate_plt(0x28u);
      if (v5 != 0) {
        *(_BYTE*)(v5 + 32) = 0;
        *(_QWORD*)(v5 + 16) = 0;
        *(_QWORD*)(v5 + 24) = 0;
        *(_QWORD*)v5 = 0;
        *(_QWORD*)(v5 + 8) = 0;
      }
      v6 = (_QWORD*)*v4;
      *v4 = v5;
      if (v6 != nullptr) {
        v7 = v6[1];
        if (v7 != 0) {
          v8 = v6[3];
          v6[2] = v7;
          nn_fs_detail_Deallocate_plt(v7, v8 - v7);
        }
        nn_fs_detail_Deallocate_plt((__int64)v6, 0x28u);
        v5 = *v4;
      }
      if (v5 == 0) {
        return 1751042;
      }
    }
    v50 = 0;
    nn_fs_detail_GetFileSystemProxyServiceObject_plt((void*)(&v50));
    v49 = 0;
    v38_.v38[0] = &v49;
    v9 = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v50 + 352LL))(v50,
                                                                    v38_.v38);
    if (v9 != 0) {
      goto LABEL_45;
    }
    v38_.v47 = 0;
    v38_.v48 = 0;
    v38_.v45 = 0;
    v38_.v46 = 0;
    v38_.v43 = 0;
    v38_.v44 = 0;
    v38_.v41 = 0;
    v38_.v42 = 0;
    v38_.v39 = 0;
    v38_.v40 = 0;
    v38_.v38[0] = 0;
    v38_.v38[1] = 0;
    v35_.v36 = 96;
    v37 = 0;
    v35_.v35 = v38_.v38;
    v10 = (*(__int64 (**)(__int64, __int64*, _QWORD**))(*(_QWORD*)v49 + 32LL))(
        v49, &v37, &v35_.v35);
    if (v10 != 0) {
    LABEL_43:
      v9 = v10;
      goto LABEL_45;
    }
    v9 = 1751042;
    while (v37 != 0) {
      v11 = *v4;
      v12 = (unsigned __int16)v38_.v44;
      v13 = *(_DWORD**)(*v4 + 16);
      v14 = *(_QWORD*)(*v4 + 24);
      if ((unsigned __int64)v13 >= v14) {
        v16 = *(_QWORD*)(v11 + 8);
        v17 = (_DWORD*)((char*)v13 - v16);
        v18 = (((__int64)v13 - v16) >> 2) + 1;
        if (v18 >> 62 != 0) {
          nn_fs_10de70();
        }
        v19 = v14 - v16;
        if (v19 >> 1 > v18) {
          v18 = v19 >> 1;
        }
        if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFFCLL) {
          v20 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v20 = v18;
        }
        if (v20 != 0) {
          v21 = nn_fs_detail_Allocate_plt(4 * v20);
          if (v21 == 0) {
            *(_BYTE*)(v11 + 32) = 1;
          }
          v22 = (_DWORD*)((char*)v17 + v21);
          if ((*(_BYTE*)(v11 + 32) & 1) != 0) {
          LABEL_29:
            v23 = 1;
            v24 = *(char**)(v11 + 8);
            v25 = *(char**)(v11 + 16);
            v26 = (_DWORD*)((char*)v22 + ((char*)v24 - (char*)v25));
            if (v25 == v24) {
            LABEL_39:
              v15 = v22 + 1;
              v28 = *(_QWORD*)(v11 + 24);
              *(_QWORD*)(v11 + 8) = v26;
              *(_QWORD*)(v11 + 16) = v15;
              *(_QWORD*)(v11 + 24) = v21 + 4 * v20;
              if (v24 != nullptr) {
                nn_fs_detail_Deallocate_plt((__int64)v24, v28 - (_QWORD)v24);
              }
              goto LABEL_41;
            }
          LABEL_33:
            if ((v23 & 1) == 0) {
              v27 = v26;
              do {
                if ((*(_BYTE*)(v11 + 32) & 1) == 0) {
                  *(_DWORD*)v27 = *(_DWORD*)v24;
                }
                v24 += 4;
                ++v27;
              } while (v24 != v25);
              v24 = *(char**)(v11 + 8);
            }
            goto LABEL_39;
          }
        }
        else {
          v21 = 0;
          v22 = v17;
          if ((*(_BYTE*)(v11 + 32) & 1) != 0) {
            goto LABEL_29;
          }
        }
        *(_DWORD*)v22 = v12;
        v23 = *(_BYTE*)(v11 + 32);
        v24 = *(char**)(v11 + 8);
        v25 = *(char**)(v11 + 16);
        v26 = (_DWORD*)((char*)v22 + ((char*)v24 - (char*)v25));
        if (v25 == v24) {
          goto LABEL_39;
        }
        goto LABEL_33;
      }
      if ((*(_BYTE*)(v11 + 32) & 1) == 0) {
        *(_DWORD*)v13 = (unsigned __int16)v38_.v44;
      }
      v15 = v13 + 1;
    LABEL_41:
      v29 = *(_BYTE*)(v11 + 32);
      *(_QWORD*)(v11 + 16) = v15;
      if ((v29 & 1) != 0) {
        goto LABEL_45;
      }
      v38_.v47 = 0;
      v38_.v48 = 0;
      v38_.v45 = 0;
      v38_.v46 = 0;
      v38_.v43 = 0;
      v38_.v44 = 0;
      v38_.v41 = 0;
      v38_.v42 = 0;
      v38_.v39 = 0;
      v38_.v40 = 0;
      v38_.v38[0] = 0;
      v38_.v38[1] = 0;
      v35_.v36 = 96;
      v37 = 0;
      v35_.v35 = v38_.v38;
      v10 = (*(__int64 (**)(__int64, __int64*, _QWORD**))(
          *(_QWORD*)v49 + 32LL))(v49, &v37, &v35_.v35);
      if (v10 != 0) {
        goto LABEL_43;
      }
    }
    v9 = 0;
  LABEL_45:
    if (v49 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v49 + 8LL))(v49);
    }
    if (v50 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v50 + 8LL))(v50);
    }
    if (v9 == 0) {
      v30 = *(__int64**)(a1 + 24);
      v31 = *v30;
      *v30 = 0;
      **(_QWORD**)(a1 + 16) = v31;
      return v9;
    }
    if ((v9 & 0x3FFFFF) != 0x2F6802) {
      break;
    }
    nn_os_SleepThread_plt(1000000LL * v33);
    v1 = 2 * v33;
    v3 = v34 + 1;
  } while (v34 != 4);
  return v9;
}

__int64 nn_fs_11f0e0(void* this_, unsigned int a2, int a3)
{
  unsigned int v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  struct {
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
  } v19_;

  v6 = 1752066;
  v7 = nn_fs_detail_Allocate_plt(0x301u);
  if (v7 != 0) {
    v8 = (const char*)v7;
    v9 = nn_fs_detail_Allocate_plt(0x400u);
    if (v9 != 0) {
      v10 = v9;
      v18 = 0;
      v19_.v19 = 0;
      v19_.v20 = 0;
      v19_.v21 = 0;
      v11 = SdkRoutine_11fca0((__int64)this_, (__int64)&v19_.v19, (__int64)v8,
                              &v18, a2);
      if (v11 == 0) {
        v14 = v19_.v20;
        v13 = HIDWORD(v19_.v20);
        v15 = v18;
        v8[v18] = 0;
        if (v15 != 0) {
          nn_util_SNPrintf_plt(v10, 1024, "+ / %s [%08X]\n", v8, a2);
        }
        else {
          nn_util_SNPrintf_plt(v10, 1024, "+ / (null) [%08X]\n", a2);
        }
        while (v14 != -1) {
          v11 = nn_fs_HierarchicalRomFileTable_DumpDirectory_plt(
              this_, v14, (unsigned int)(a3 + 1));
          if (v11 != 0) {
            goto LABEL_4;
          }
          v16 = *((_QWORD*)this_ + 9);
          v19_.v20 = 0;
          v19_.v21 = 0;
          v19_.v19 = 0;
          if (v16 == 0) {
            v6 = 3533826;
            goto LABEL_5;
          }
          v11 = nn_fs_IStorage_CheckAccessRange_plt(v14, 24,
                                                    *((_QWORD*)this_ + 11));
          if (v11 != 0) {
            goto LABEL_4;
          }
          v11 = (*(__int64 (**)(_QWORD, _QWORD, __int64*, __int64))(
              **((_QWORD**)this_ + 9) + 16LL))(*((_QWORD*)this_ + 9),
                                               *((_QWORD*)this_ + 10) + v14,
                                               &v19_.v19, 24);
          if (v11 != 0) {
            goto LABEL_4;
          }
          v14 = HIDWORD(v19_.v19);
        }
        if (v13 == -1) {
        LABEL_20:
          v6 = 0;
          goto LABEL_5;
        }
        while (1) {
          v18 = 0;
          v19_.v19 = 0;
          v19_.v21 = 0;
          v19_.v22 = 0;
          v19_.v20 = 0;
          v11 = SdkRoutine_120140((__int64)this_ + 136, (__int64)&v19_.v19,
                                  (__int64)v8, &v18, v13);
          if (v11 != 0) {
            break;
          }
          v17 = HIDWORD(v19_.v19);
          v8[v18] = 0;
          nn_util_SNPrintf_plt(v10, 1024, "+ / %s [%08X]\n", v8, v13);
          v13 = v17;
          if (v17 == -1) {
            goto LABEL_20;
          }
        }
      }
    LABEL_4:
      v6 = v11;
    LABEL_5:
      nn_fs_detail_Deallocate_plt(v10, 0x400u);
    }
    nn_fs_detail_Deallocate_plt((__int64)v8, 0x301u);
  }
  return v6;
}

#pragma GCC visibility pop
