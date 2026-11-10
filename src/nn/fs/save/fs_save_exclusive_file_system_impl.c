#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_fs_Path_AppendChild_plt(_QWORD, _QWORD);
__int64 nn_fs_Path_GetString_plt(_QWORD);
__int64 nn_fs_Path_Initialize_plt(_QWORD, _QWORD);
__int64 nn_fs_Path_Path_plt(_QWORD);
__int64 nn_fs_Path_RemoveChild_plt(_QWORD);
__int64 nn_fs_detail_AllocateUnsafe_plt(_QWORD);
__int64 nn_fs_detail_Allocate_plt(_QWORD);
__int64 nn_fs_detail_DeallocateUnsafe_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_Deallocate_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_LockAllocateMutex_plt(void);
__int64 nn_fs_detail_UnlockAllocateMutex_plt(void);
__int64 nn_fs_save_ExclusiveFileSystem_CheckAccessPolicy_plt(_QWORD, _QWORD,
                                                             _QWORD, _QWORD,
                                                             _QWORD, _QWORD,
                                                             _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 std___1___shared_weak_count___release_weak_plt(_QWORD);
__int64 strcmp_plt(void* this_, const char*);
extern __int64 SdkData_e86d10;
extern __int64 SdkData_e86d18;
__int64 nn_fs_save_ExclusiveFileSystem_Initialize(_QWORD* a1, __int64 a2);
__int64 nn_fs_save_ExclusiveFileSystem_DoRenameFile(void* this_, void* a2,
                                                    void* a3);
bool fs_save_exclusive_file_system_cdf60(__int64 a1, __int64 a2);
__int64 nn_fs_save_ExclusiveFileSystem_DoRenameDirectory(void* this_, void* a2,
                                                         void* a3);
__int64 nn_fs_save_ExclusiveFileSystem_DeleteDirectoryRecursivelyInternal(
    void* this_, void* a2, char a3);
__int64 fs_save_exclusive_file_system_ce840(_QWORD* a1);

__int64 nn_fs_save_ExclusiveFileSystem_Initialize(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if (a1[1] != 0) {
    goto LABEL_10;
  }
  nn_fs_detail_LockAllocateMutex_plt();
  v4 = nn_fs_detail_AllocateUnsafe_plt(132);
  if (v4 != 0) {
    nn_fs_detail_DeallocateUnsafe_plt(v4, 132);
    v5 = nn_fs_detail_AllocateUnsafe_plt(32);
    nn_fs_detail_UnlockAllocateMutex_plt();
    *(_QWORD*)(v5 + 16) = 0;
    v6 = SdkData_e86d10;
    *(_BYTE*)(v5 + 24) = 0;
    *(_QWORD*)v5 = v6 + 16;
    *(_QWORD*)(v5 + 8) = 0;
    *(_DWORD*)(v5 + 28) = 0;
    v7 = v5 + 28;
    v8 = a1[2];
    a1[1] = v5 + 28;
    a1[2] = v5;
    if (v8 == 0) {
      goto LABEL_9;
    }
  }
  else {
    nn_fs_detail_UnlockAllocateMutex_plt();
    v7 = 0;
    v8 = a1[2];
    a1[1] = 0;
    a1[2] = 0;
    if (v8 == 0) {
      goto LABEL_9;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_plt(v8);
  }
  v7 = a1[1];
LABEL_9:
  if (v7 != 0) {
  LABEL_10:
    a1[4] = a2;
    return 0;
  }
  return 1752578;
}

__int64 nn_fs_save_ExclusiveFileSystem_DoRenameFile(void* this_, void* a2,
                                                    void* a3)
{
  __int64 v3;
  __int64 v7;
  unsigned int v8;
  _QWORD* i;
  __int64 v10;
  unsigned int v11;
  _QWORD* v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  int v17;
  __int64 v18;

  v3 = *((_QWORD*)this_ + 1);
  nn_os_SdkMutexType_Lock_plt(v3);
  v7 = *((_QWORD*)this_ + 4);
  v18 = 0;
  v8 = (*(__int64 (**)(__int64, __int64*, void*, __int64))(
      *(_QWORD*)v7 + 192LL))(v7, &v18, a2, 1);
  if (v8 != 0) {
    v17 = v8 & 0x3FFFFF;
    if ((v8 & 0x3FFFFF) != 0x2F2202) {
    LABEL_21:
      v14 = v8;
      if (v17 != 3586) {
        goto LABEL_19;
      }
    LABEL_16:
      if (fs_save_exclusive_file_system_cdf60((__int64)a3, (__int64)a2)) {
        goto LABEL_6;
      }
      goto LABEL_17;
    }
  }
  else {
    for (i = *((_QWORD**)this_ + 3); i != nullptr; i = (_QWORD*)i[1]) {
      if (((*(__int64 (**)(_QWORD*))(*i + 24LL))(i) & 1) != 0) {
        if (i[2] == v18) {
          (*(void (**)(_QWORD*))(*i + 16LL))(i);
          v14 = 3586;
          goto LABEL_16;
        }
      }
      else {
        v8 = (*(__int64 (**)(_QWORD*, __int64, __int64))(*i + 32LL))(i, v18, 1);
        if (v8 != 0) {
          v17 = v8 & 0x3FFFFF;
          goto LABEL_21;
        }
      }
    }
  }
  v10 = *((_QWORD*)this_ + 4);
  v18 = 0;
  v11 = (*(__int64 (**)(__int64, __int64*, void*, __int64))(
      *(_QWORD*)v10 + 192LL))(v10, &v18, a3, 1);
  if (v11 != 0) {
    if ((v11 & 0x3FFFFF) == 0x2F2202) {
      goto LABEL_5;
    }
    if ((v11 & 0x3FFFFF) != 0xE02) {
      if ((v11 & 0x1FF) != 2) {
        v14 = v11;
        goto LABEL_19;
      }
      v14 = v11;
      if (((v11 >> 9) & 0x1FFC) - 6600 > 0x63) {
        goto LABEL_19;
      }
      goto LABEL_5;
    }
    v14 = v11;
  LABEL_17:
    v15 = *((_QWORD*)this_ + 4);
    LODWORD(v18) = 0;
    if ((*(unsigned int (**)(__int64, __int64*, void*))(*(_QWORD*)v15 + 80LL))(
            v15, &v18, a3) == 0) {
      v14 = 1026;
    }
    goto LABEL_19;
  }
  v12 = *((_QWORD**)this_ + 3);
  if (v12 != nullptr) {
    while (((*(__int64 (**)(_QWORD*))(*v12 + 24LL))(v12) & 1) == 0 ||
           v12[2] != v18) {
      v12 = (_QWORD*)v12[1];
      if (v12 == nullptr) {
        goto LABEL_5;
      }
    }
    (*(void (**)(_QWORD*))(*v12 + 16LL))(v12);
    v14 = 3586;
    goto LABEL_17;
  }
LABEL_5:
  v13 = (*(__int64 (**)(_QWORD, void*, void*))(**((_QWORD**)this_ + 4) + 64LL))(
      *((_QWORD*)this_ + 4), a2, a3);
  if (v13 == 0) {
  LABEL_6:
    v14 = 0;
    goto LABEL_19;
  }
  v14 = v13;
  if ((v13 & 0x3FFFFF) == 0x177602 &&
      fs_save_exclusive_file_system_cdf60((__int64)a2, (__int64)a3)) {
    v14 = 0;
  }
LABEL_19:
  nn_os_SdkMutexType_Unlock_plt(v3);
  return v14;
}

bool fs_save_exclusive_file_system_cdf60(__int64 a1, __int64 a2)
{
  void* v3;
  const char* v4;

  v3 = (void*)nn_fs_Path_GetString_plt(a1);
  v4 = (const char*)nn_fs_Path_GetString_plt(a2);
  return (unsigned int)strcmp_plt(v3, v4) == 0;
}

__int64 nn_fs_save_ExclusiveFileSystem_DoRenameDirectory(void* this_, void* a2,
                                                         void* a3)
{
  __int64 v3;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  _QWORD* v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  _BYTE v15[8];
  __int64 v16;

  v3 = *((_QWORD*)this_ + 1);
  nn_os_SdkMutexType_Lock_plt(v3);
  v7 = nn_fs_save_ExclusiveFileSystem_CheckAccessPolicy_plt(this_, v15, &v16,
                                                            a2, 2, 0, 1);
  if (v7 != 0) {
    v12 = v7;
    if ((v7 & 0x3FFFFF) != 0xE02) {
      goto LABEL_12;
    }
    if (fs_save_exclusive_file_system_cdf60((__int64)a2, (__int64)a3)) {
      goto LABEL_5;
    }
    goto LABEL_10;
  }
  v8 = *((_QWORD*)this_ + 4);
  v16 = 0;
  v9 = (*(__int64 (**)(__int64, __int64*, void*, _QWORD))(
      *(_QWORD*)v8 + 192LL))(v8, &v16, a3, 0);
  if (v9 != 0) {
    if ((v9 & 0x3FFFFF) == 0x2F2202) {
      goto LABEL_4;
    }
    if ((v9 & 0x3FFFFF) != 0xE02) {
      if ((v9 & 0x1FF) != 2) {
        v12 = v9;
        goto LABEL_12;
      }
      v12 = v9;
      if (((v9 >> 9) & 0x1FFC) - 6600 > 0x63) {
        goto LABEL_12;
      }
      goto LABEL_4;
    }
    v12 = v9;
  LABEL_10:
    v13 = *((_QWORD*)this_ + 4);
    LODWORD(v16) = 0;
    if ((*(unsigned int (**)(__int64, __int64*, void*))(*(_QWORD*)v13 + 80LL))(
            v13, &v16, a3) == 0) {
      v12 = 1026;
    }
    goto LABEL_12;
  }
  v10 = *((_QWORD**)this_ + 3);
  if (v10 != nullptr) {
    while (((*(__int64 (**)(_QWORD*))(*v10 + 24LL))(v10) & 1) != 0 ||
           v10[2] != v16) {
      v10 = (_QWORD*)v10[1];
      if (v10 == nullptr) {
        goto LABEL_4;
      }
    }
    v12 = 3586;
    goto LABEL_10;
  }
LABEL_4:
  v11 = (*(__int64 (**)(_QWORD, void*, void*))(**((_QWORD**)this_ + 4) + 72LL))(
      *((_QWORD*)this_ + 4), a2, a3);
  if (v11 == 0) {
  LABEL_5:
    v12 = 0;
    goto LABEL_12;
  }
  v12 = v11;
  if ((v11 & 0x3FFFFF) == 0x177602 &&
      fs_save_exclusive_file_system_cdf60((__int64)a2, (__int64)a3)) {
    v12 = 0;
  }
LABEL_12:
  nn_os_SdkMutexType_Unlock_plt(v3);
  return v12;
}

__int64 nn_fs_save_ExclusiveFileSystem_DeleteDirectoryRecursivelyInternal(
    void* this_, void* a2, char a3)
{
  unsigned int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
  } v23_;

  v23_.v26 = 0;
  v23_.v27 = 0;
  v23_.v24 = 0;
  v23_.v25 = 0;
  v23_.v23 = 0;
  nn_fs_Path_Path_plt(&v23_.v23);
  v6 = nn_fs_Path_Initialize_plt(&v23_.v23, a2);
  if (v6 != 0) {
    goto LABEL_35;
  }
  v7 = nn_fs_detail_Allocate_plt(784);
  if (v7 == 0) {
    v6 = 1730050;
    v19 = v23_.v24;
    v23_.v24 = 0;
    if (v19 != 0) {
      goto LABEL_36;
    }
    return v6;
  }
  v8 = 1;
  v9 = v7;
  v6 = 0;
  while (2) {
    v10 = *(_QWORD*)this_;
    v22 = 0;
    v11 = (*(__int64 (**)(void*, __int64*, __int64*, __int64))(v10 + 112))(
        this_, &v22, &v23_.v23, 2);
    if (v11 != 0 ||
        (v21 = 0, (v11 = (*(__int64 (**)(__int64, __int64*, __int64, __int64))(
                       *(_QWORD*)v22 + 16LL))(v22, &v21, v9, 1)) != 0)) {
      v12 = false;
    LABEL_13:
      v6 = v11;
    }
    else {
      while (1) {
        v12 = v21 == 0;
        if (v21 == 0) {
          break;
        }
        v11 = nn_fs_Path_AppendChild_plt(&v23_.v23, v9);
        if (v11 == 0) {
          v11 = (*(__int64 (**)(void*, __int64*))(*(_QWORD*)this_ + 24LL))(
              this_, &v23_.v23);
          if (v11 == 0) {
            v11 = nn_fs_Path_RemoveChild_plt(&v23_.v23);
            if (v11 == 0) {
              v21 = 0;
              v11 = (*(__int64 (**)(__int64, __int64*, __int64, __int64))(
                  *(_QWORD*)v22 + 16LL))(v22, &v21, v9, 1);
              if (v11 == 0) {
                continue;
              }
            }
          }
        }
        goto LABEL_13;
      }
    }
    v13 = v22;
    v22 = 0;
    if (v13 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    }
    if (!v12) {
      goto LABEL_34;
    }
    while (1) {
      v14 = *(_QWORD*)this_;
      v21 = 0;
      v22 = 0;
      v15 = (*(__int64 (**)(void*, __int64*, __int64*, __int64))(v14 + 112))(
          this_, &v21, &v23_.v23, 1);
      if (v15 == 0) {
        v16 = 1;
        v15 = (*(__int64 (**)(__int64, __int64*, __int64, __int64))(
            *(_QWORD*)v21 + 16LL))(v21, &v22, v9, 1);
        if (v15 == 0) {
          v17 = v21;
          v21 = 0;
          if (v17 == 0) {
            goto LABEL_21;
          }
        LABEL_20:
          (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
          goto LABEL_21;
        }
      }
      v16 = 0;
      v6 = v15;
      v17 = v21;
      v21 = 0;
      if (v17 != 0) {
        goto LABEL_20;
      }
    LABEL_21:
      if (v16 == 0) {
        goto LABEL_34;
      }
      if (v22 >= 1) {
        break;
      }
      if ((a3 & 1) == 0 && v8 < 2 ||
          (v18 = (*(__int64 (**)(void*, __int64*))(*(_QWORD*)this_ + 40LL))(
               this_, &v23_.v23)) == 0) {
        if (--v8 == 0) {
          v6 = 0;
          goto LABEL_34;
        }
        v18 = nn_fs_Path_RemoveChild_plt(&v23_.v23);
        if (v18 == 0) {
          continue;
        }
      }
      goto LABEL_38;
    }
    v18 = nn_fs_Path_AppendChild_plt(&v23_.v23, v9);
    if (v18 == 0) {
      ++v8;
      continue;
    }
    break;
  }
LABEL_38:
  v6 = v18;
LABEL_34:
  nn_fs_detail_Deallocate_plt(v9, 784);
LABEL_35:
  v19 = v23_.v24;
  v23_.v24 = 0;
  if (v19 != 0) {
  LABEL_36:
    nn_fs_detail_Deallocate_plt(v19, v23_.v25);
  }
  return v6;
}

__int64 fs_save_exclusive_file_system_ce840(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 result;

  v2 = a1[6];
  v3 = SdkData_e86d18 + 128;
  *a1 = SdkData_e86d18 + 16;
  a1[1] = v3;
  v4 = a1 + 1;
  nn_os_SdkMutexType_Lock_plt(v2);
  v5 = a1[4];
  if (v5 != 0) {
    v6 = *(_QWORD**)(v5 + 24);
    if (v6 != nullptr) {
      if (v6 == v4) {
        *(_QWORD*)(v5 + 24) = a1[2];
        nn_os_SdkMutexType_Unlock_plt(v2);
        v8 = a1[7];
        if (v8 == 0) {
          goto LABEL_10;
        }
        goto LABEL_8;
      }
      while (1) {
        v7 = v6;
        v6 = (_QWORD*)v6[1];
        if (v6 == nullptr) {
          break;
        }
        if (v6 == v4) {
          v7[1] = a1[2];
          break;
        }
      }
    }
  }
  nn_os_SdkMutexType_Unlock_plt(v2);
  v8 = a1[7];
  if (v8 == 0) {
    goto LABEL_10;
  }
LABEL_8:
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_plt(v8);
  }
LABEL_10:
  result = a1[5];
  a1[5] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
