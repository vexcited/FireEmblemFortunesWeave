#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsFflush_plt(_QWORD);
__int64 NvOsFree_plt(_QWORD);
__int64 SdkRoutine_86e8b0(_QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nn_fs_CloseFile_plt(_QWORD);
__int64 nn_fs_CreateDirectory_plt(_QWORD);
__int64 nn_fs_CreateFile_plt_8596a0(_QWORD, _QWORD);
__int64 nn_fs_GetEntryType_plt(_QWORD, _QWORD);
__int64 nn_fs_GetFileSize_plt(_QWORD, _QWORD);
__int64 nn_fs_MountHostRoot_plt(_QWORD);
__int64 nn_fs_MountHost_plt(_QWORD, _QWORD);
__int64 nn_fs_MountRom_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_OpenFile_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_QueryMountRomCacheSize_plt(_QWORD);
__int64 nn_fs_UnmountHostRoot_plt(_QWORD);
__int64 nn_fs_Unmount_plt(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 strlen_plt(_QWORD);
__int64 strncmp_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_ea4278;
extern _UNKNOWN SdkData_ea4298;
extern char* SdkData_ea4108[2];
extern char** SdkData_e89890[3];
extern char** SdkData_e89898[2];
extern char SdkData_103b028;
extern char SdkData_103b029;
extern char SdkData_103b02a;
extern char SdkData_103b02b;
extern char* SdkData_ea4100[3];
extern int SdkData_103b038;
extern int SdkData_103b03c;
void SdkRoutine_85c8b0(void*);
__int64 nvos_log_5f6880(__int64 a1, int a2, _QWORD* a3);
__int64 nvos_log_5f6d30(__int64 result);

__int64 nvos_log_5f6880(__int64 a1, int a2, _QWORD* a3)
{
  char** v6;
  __int64 v7;
  __int64 v8;
  int v9;
  void* v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  void* v16;
  unsigned int v18;
  unsigned int v20;
  unsigned int v23;
  __int64 v24;
  _QWORD* v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  void* v32;
  char** v33;
  int v34;
  unsigned int v35;
  __int64 v37;
  __int64 v39;
  int v40;
  __int64 v41;

  v41 = 0;
  v40 = 0;
  v6 = SdkData_e89890[0];
  v7 = (__int64)*SdkData_e89890[0];
  v8 = strlen_plt(*SdkData_e89890[0]);
  v9 = strncmp_plt(a1, v7, v8);
  if (v9 == 0) {
    v10 = &SdkData_ea4278;
    nn_os_LockMutex_plt(&SdkData_ea4278);
    v14 = SdkData_103b038++;
    if (v14 == 0 && (SdkData_103b028 & 1) == 0) {
      v39 = 0;
      nn_fs_QueryMountRomCacheSize_plt(&v39);
      v15 = v39;
      v16 = (void*)SdkRoutine_86e8b0(v39);
      memset_plt(v16, nullptr, v15);
      v18 = nn_fs_MountRom_plt(*v6, v16, v15);
      if ((v18 & 0x3FFFFF) == 0x7802) {
        SdkData_103b028 = 1;
      }
      else if (v18 != 0) {
        v20 = v18;
        nn_os_UnlockMutex_plt(&SdkData_ea4278);
        if (((v20 >> 9) & 0x1FFC) - 3200 < 0x12C && (v20 & 0x1FF) == 2) {
          v23 = 6;
        }
        else {
          v23 = 196611;
        }
        SdkRoutine_85c8b0(v16);
        return v23;
      }
      SdkRoutine_85c8b0(v16);
      v10 = &SdkData_ea4278;
    }
    goto LABEL_19;
  }
  v10 = &SdkData_ea4298;
  v11 = nn_os_LockMutex_plt(&SdkData_ea4298);
  v12 = SdkData_103b03c++;
  if (v12 != 0) {
  LABEL_19:
    nn_os_UnlockMutex_plt(v10);
    v24 = NvOsAlloc_plt(32);
    if (v24 == 0) {
      goto LABEL_49;
    }
    goto LABEL_20;
  }
  if ((SdkData_103b029 & 1) == 0) {
    v13 = nn_fs_MountHostRoot_plt(v11);
    if ((v13 & 0x3FFFFF) == 0x7802) {
      SdkData_103b029 = 1;
    }
    else if (v13 != 0) {
      v30 = v13;
      --SdkData_103b03c;
      nn_os_UnlockMutex_plt(&SdkData_ea4298);
      if (((v30 >> 9) & 0x1FFC) - 3200 < 0x12C && (v30 & 0x1FF) == 2) {
        return 6;
      }
      else {
        return 196611;
      }
    }
  }
  if ((SdkData_103b02a & 1) != 0) {
    goto LABEL_48;
  }
  v23 = 196611;
  v33 = SdkData_e89898[0];
  v34 = nn_fs_GetEntryType_plt(&v40, *SdkData_e89898[0]);
  if (v34 != 0) {
    if ((v34 & 0x3FFFFF) != 0x202 ||
        (unsigned int)nn_fs_CreateDirectory_plt(*v33) != 0) {
      goto LABEL_73;
    }
  }
  else if (v40 != 0) {
    goto LABEL_73;
  }
  v35 = nn_fs_MountHost_plt(SdkData_ea4108[0], *v33);
  if ((v35 & 0x3FFFFF) != 0x7802) {
    if (v35 == 0) {
      goto LABEL_83;
    }
    if (((v35 >> 9) & 0x1FFC) - 3200 < 0x12C && (v35 & 0x1FF) == 2) {
      v23 = 6;
    }
    else {
      v23 = 196611;
    }
  LABEL_73:
    nn_os_UnlockMutex_plt(&SdkData_ea4298);
    goto LABEL_74;
  }
  SdkData_103b02a = 1;
LABEL_83:
  SdkData_103b02b = 1;
LABEL_48:
  nn_os_UnlockMutex_plt(&SdkData_ea4298);
  v24 = NvOsAlloc_plt(32);
  if (v24 == 0) {
  LABEL_49:
    v23 = 6;
    if (v9 == 0) {
      goto LABEL_50;
    }
  LABEL_74:
    v37 = nn_os_LockMutex_plt(&SdkData_ea4298);
    if (--SdkData_103b03c == 0) {
      if ((SdkData_103b02a & 1) == 0 && SdkData_103b02b != 0) {
        v37 = nn_fs_Unmount_plt(SdkData_ea4108[0]);
        SdkData_103b02b = 0;
      }
      if ((SdkData_103b029 & 1) == 0) {
        nn_fs_UnmountHostRoot_plt(v37);
      }
    }
    v32 = &SdkData_ea4298;
    goto LABEL_81;
  }
LABEL_20:
  v25 = (_QWORD*)v24;
  v23 = 196611;
  v26 = nn_fs_GetEntryType_plt(&v40, a1);
  if (v26 != 0) {
    if ((v26 & 0x3FFFFF) != 0x202) {
      goto LABEL_36;
    }
    if ((a2 & 4) == 0) {
      v23 = 196627;
      NvOsFree_plt(v25);
      if (v9 != 0) {
        goto LABEL_74;
      }
    LABEL_50:
      nn_os_LockMutex_plt(&SdkData_ea4278);
      if ((SdkData_103b028 & 1) == 0 && --SdkData_103b038 == 0) {
        nn_fs_Unmount_plt(*v6);
      }
      v32 = &SdkData_ea4278;
    LABEL_81:
      nn_os_UnlockMutex_plt(v32);
      return v23;
    }
    if ((unsigned int)nn_fs_CreateFile_plt_8596a0(a1, 0) != 0) {
    LABEL_36:
      NvOsFree_plt(v25);
      if (v9 != 0) {
        goto LABEL_74;
      }
      goto LABEL_50;
    }
    v27 = 1;
  }
  else {
    v27 = v40;
    if (v40 != 1) {
      if (v40 != 0) {
        *((_DWORD*)v25 + 5) = 0;
        goto LABEL_32;
      }
      v27 = 2;
    }
  }
  *((_DWORD*)v25 + 5) = v27;
LABEL_32:
  if ((a2 & 0xA) != 0) {
    v28 = a2 & 1 | 6u;
  }
  else {
    v28 = a2 & 1;
  }
  if ((unsigned int)nn_fs_OpenFile_plt(v25, a1, v28) != 0) {
    goto LABEL_36;
  }
  if ((a2 & 8) != 0) {
    if ((unsigned int)nn_fs_GetFileSize_plt(&v41, *v25) != 0) {
      nn_fs_CloseFile_plt(*v25);
      NvOsFree_plt(v25);
      if (v9 != 0) {
        goto LABEL_74;
      }
      goto LABEL_50;
    }
    v29 = v41;
  }
  else {
    v29 = 0;
  }
  v23 = 0;
  v25[1] = v29;
  *((_DWORD*)v25 + 4) = a2;
  *((_BYTE*)v25 + 24) = 0;
  *((_BYTE*)v25 + 25) = v9 == 0;
  *((_BYTE*)v25 + 26) = 0;
  *a3 = v25;
  return v23;
}

__int64 nvos_log_5f6d30(__int64 result)
{
  __int64 v1;
  void* v2;
  __int64 v3;

  if (result != 0) {
    v1 = result;
    if (*(_BYTE*)(result + 24) == 1) {
      NvOsFflush_plt(result);
    }
    nn_fs_CloseFile_plt(*(_QWORD*)v1);
    if (*(_BYTE*)(v1 + 25) == 1) {
      v2 = &SdkData_ea4278;
      nn_os_LockMutex_plt(&SdkData_ea4278);
      if ((SdkData_103b028 & 1) == 0 && --SdkData_103b038 == 0) {
        nn_fs_Unmount_plt(SdkData_ea4100[0]);
      }
    }
    else {
      v2 = &SdkData_ea4298;
      v3 = nn_os_LockMutex_plt(&SdkData_ea4298);
      if (--SdkData_103b03c == 0) {
        if ((SdkData_103b02a & 1) == 0 && SdkData_103b02b != 0) {
          v3 = nn_fs_Unmount_plt(SdkData_ea4108[0]);
          SdkData_103b02b = 0;
        }
        if ((SdkData_103b029 & 1) == 0) {
          nn_fs_UnmountHostRoot_plt(v3);
        }
      }
    }
    nn_os_UnlockMutex_plt(v2);
    return NvOsFree_plt(v1);
  }
  return result;
}

#pragma GCC visibility pop
