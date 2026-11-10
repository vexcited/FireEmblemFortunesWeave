#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ConstructString_1901f0(_QWORD);
__int64 GameRoutine_190240(_QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 GameRoutine_6542d0(_QWORD, _QWORD);
__int64 GameRoutine_6544c0(_QWORD, _QWORD);
__int64 GameRoutine_a392e0(_QWORD, const char*, ...);
__int64 GameRoutine_a392e0_alt1(__int64, const char*,
                                ...) __asm__("GameRoutine_a392e0");
__int64 ProxySnd_179810(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_CloseFile(_QWORD);
__int64 nn_fs_ReadFile_1a0a620(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_AcquireWriteLock(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 nn_os_ReleaseWriteLock(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fbe808[])();
extern __int64 (*snd_Memory_vtable_ptr)();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 snd_g_memory;
extern __int64 snd_g_proxy;
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64* snd_g_memory_ptr[2];
__int64 TargetFile_Destructor(__int64 a1);
__int64 TargetFile_DeletingDestructor(__int64 a1);
__int64 TargetFile_Unknown5(__int64 a1);
__int64 TargetFile_Unknown6(_QWORD* a1);
__int64 TargetFile_Unknown7(__int64 a1);
__int64 TargetFile_Unknown9(__int64 a1);
__int64 TargetFile_Unknown10(__int64 a1);
__int64 TargetFile_Unknown12(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 TargetFile_Unknown13(__int64 result);
_BYTE* GameRoutine_190120(_BYTE* result, unsigned __int8*);
_QWORD*
ConstructString_1901f0_alt1(_QWORD* result) __asm__("ConstructString_1901f0");
_QWORD* GameRoutine_a3a3a0(_QWORD*, __int64, unsigned __int64);
__int64* GameRoutine_a3a260(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_190240_alt1(__int64) __asm__("GameRoutine_190240");
__int64 GameRoutine_a392e0_alt2(__int64, __int64,
                                ...) __asm__("GameRoutine_a392e0");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_GetFileSize(_QWORD, _QWORD);
__int64 nn_fs_OpenFile(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0();
__int64 TargetFile_Unknown11(__int64 a1);

__int64 TargetFile_Destructor(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 72);
  *(_QWORD*)a1 = GameData_1fbe808;
  if (v1 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v1 + 8));
    *(_QWORD*)(a1 + 72) = 0;
  }
  if (*(_BYTE*)(a1 + 92) == 1) {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 104LL))(a1);
    *(_BYTE*)(a1 + 92) = 0;
  }
  if (*(_QWORD*)(a1 + 96) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
    *(_QWORD*)(a1 + 96) = 0;
  }
  return ProxySnd_179810(a1);
}

__int64 TargetFile_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 72);
  *(_QWORD*)a1 = GameData_1fbe808;
  if (v1 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v1 + 8));
    *(_QWORD*)(a1 + 72) = 0;
  }
  if (*(_BYTE*)(a1 + 92) == 1) {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 104LL))(a1);
    *(_BYTE*)(a1 + 92) = 0;
  }
  if (*(_QWORD*)(a1 + 96) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
    *(_QWORD*)(a1 + 96) = 0;
  }
  ProxySnd_179810(a1);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

__int64 TargetFile_Unknown5(__int64 a1)
{
  const char* v2;
  const char* v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  _BYTE* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8 v12;
  _BYTE v13[15];
  _BYTE* v14;
  _QWORD v15[3];
  __int64 v16;
  __int64 (**v17)();
  int v18;

  ConstructString_1901f0(&v12);
  v2 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 128LL))(
      snd_g_proxy);
  v3 = (const char*)GameRoutine_190240(a1 + 40);
  GameRoutine_a392e0(&v12, "%s%s", v2, v3);
  v4 = snd_g_proxy;
  v5 = GameRoutine_190240(&v12);
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 536LL))(v4, v5);
  if ((result & 1) == 0) {
    *(_QWORD*)(a1 + 72) = 0;
    *(_BYTE*)(a1 + 94) = 1;
    if ((v12 & 1) == 0) {
      return result;
    }
    return (*(__int64 (**)(_QWORD, _BYTE*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                            24LL))(*snd_g_memory_ptr[0], v14);
  }
  v7 = v14;
  v15[2] = 0;
  v16 = 0;
  v18 = 0;
  v8 = *snd_g_fileIndex_ptr[0];
  v9 = (unsigned __int64)v12 >> 1;
  if ((v12 & 1) != 0) {
    v9 = *(_QWORD*)&v13[7];
  }
  else {
    v7 = v13;
  }
  v15[0] = v7;
  v15[1] = v9;
  v17 = &snd_Memory_vtable_ptr;
  v10 = GameRoutine_6542d0(v8, v15);
  if (v16 != 0) {
    std___1___shared_weak_count___release_weak(v16);
  }
  *(_QWORD*)(a1 + 72) = v10;
  v11 = *(_QWORD*)(v10 + 8);
  nn_os_LockMutex(v11 + 4456);
  nn_os_AcquireWriteLock(v10 + 696);
  *(_DWORD*)(v10 + 656) |= 4u;
  nn_os_ReleaseWriteLock(v10 + 696);
  result = nn_os_UnlockMutex(v11 + 4456);
  if ((v12 & 1) != 0) {
    return (*(__int64 (**)(_QWORD, _BYTE*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                            24LL))(*snd_g_memory_ptr[0], v14);
  }
  return result;
}

__int64 TargetFile_Unknown6(_QWORD* a1)
{
  const char* v2;
  const char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  unsigned __int8 v13;
  _BYTE v14[15];
  _BYTE* v15;
  _QWORD v16[3];
  int v17;

  ConstructString_1901f0(&v13);
  v2 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 128LL))(
      snd_g_proxy);
  v3 = (const char*)GameRoutine_190240(a1 + 5);
  GameRoutine_a392e0_alt1((__int64)&v13, "%s%s", v2, v3);
  v4 = snd_g_proxy;
  v5 = GameRoutine_190240(&v13);
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 536LL))(v4, v5) & 1) !=
      0) {
    v6 = v15;
    v17 = 0;
    v7 = *snd_g_fileIndex_ptr[0];
    v8 = (unsigned __int64)v13 >> 1;
    if ((v13 & 1) != 0) {
      v8 = *(_QWORD*)&v14[7];
    }
    else {
      v6 = v14;
    }
    v16[0] = v6;
    v16[1] = v8;
    v16[2] = &snd_Memory_vtable_ptr;
    v9 = GameRoutine_6544c0(v7, v16);
    a1[9] = v9;
    v10 = v9;
    v11 = *(_QWORD*)(v9 + 8);
    nn_os_LockMutex(v11 + 4456);
    nn_os_AcquireWriteLock(v10 + 696);
    *(_DWORD*)(v10 + 656) |= 4u;
    nn_os_ReleaseWriteLock(v10 + 696);
    nn_os_UnlockMutex(v11 + 4456);
  }
  else {
    a1[9] = 0;
  }
  result = (*(__int64 (**)(_QWORD*))(*a1 + 56LL))(a1);
  if ((v13 & 1) != 0) {
    return (*(__int64 (**)(_QWORD, _BYTE*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                            24LL))(*snd_g_memory_ptr[0], v15);
  }
  return result;
}

__int64 TargetFile_Unknown7(__int64 a1)
{
  __int64 v2;
  int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  char v10;

  if ((*(_BYTE*)(a1 + 94) & 1) != 0 || (*(_BYTE*)(a1 + 93) & 1) != 0) {
    return 1;
  }
  v2 = *(_QWORD*)(a1 + 72);
  if (v2 != 0) {
    nn_os_AcquireReadLock(v2 + 696);
    v4 = *(_DWORD*)(v2 + 656);
    nn_os_ReleaseReadLock(v2 + 696);
    v5 = a1;
    *(_BYTE*)(a1 + 93) = (v4 & 8) != 0;
    if ((v4 & 8) != 0 && (*(_BYTE*)(a1 + 68) & 1) != 0) {
      *(_QWORD*)(a1 + 104) =
          (*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
      v6 = *snd_g_memory_ptr[0];
      v7 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
      v8 = (*(__int64 (**)(__int64, _QWORD, __int64))(*(_QWORD*)v6 + 16LL))(
          v6, v7, 32);
      v5 = a1;
      *(_QWORD*)(a1 + 96) = v8;
      if (v8 != 0) {
        memcpy(v8, *(_QWORD*)(*(_QWORD*)(a1 + 72) + 592LL),
               *(_QWORD*)(a1 + 104));
        v9 = *(_QWORD*)(a1 + 72);
        v5 = a1;
        if (v9 != 0) {
          GameRoutine_634d80(*(_QWORD*)(v9 + 8));
          v5 = a1;
          *(_QWORD*)(a1 + 72) = 0;
        }
      }
    }
    v10 = *(_BYTE*)(v5 + 93);
  }
  else {
    v10 = 0;
  }
  return v10 & 1;
}

__int64 TargetFile_Unknown9(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 96);
  if (result == 0) {
    v3 = *(_QWORD*)(a1 + 72);
    if (v3 != 0) {
      return *(_QWORD*)(v3 + 592);
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 TargetFile_Unknown10(__int64 a1)
{
  __int64 v1;
  unsigned int* v2;

  v1 = *(_QWORD*)(a1 + 72);
  if (v1 != 0) {
    v2 = (unsigned int*)(v1 + 576);
  }
  else {
    v2 = (unsigned int*)(a1 + 104);
  }
  return *v2;
}

__int64 TargetFile_Unknown11(__int64 a1)
{
  const char* v2;
  const char* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  int v19;
  __int64 v21;
  struct {
    _QWORD v22[2];
    char* v23;
  } v22_;
  _QWORD v24[3];
  struct {
    __int64 v25;
    unsigned __int64 v26;
    char* v27;
  } v25_;
  struct {
    __int64 v28[2];
    __int64 v29;
  } v28_;

  ConstructString_1901f0_alt1(v28_.v28);
  v2 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 128LL))(
      snd_g_proxy);
  v3 = (const char*)GameRoutine_190240_alt1(a1 + 40);
  GameRoutine_a392e0_alt2((__int64)v28_.v28, (__int64)"%s%s", v2, v3);
  v4 = snd_g_proxy;
  v5 = GameRoutine_190240_alt1((__int64)v28_.v28);
  v6 = strlen(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16,
                                               0);
    v22_.v22[1] = v7;
    v22_.v23 = v8;
    v22_.v22[0] = v9 | 1;
    goto LABEL_9;
  }
  LOBYTE(v22_.v22[0]) = 2 * v6;
  v8 = (char*)v22_.v22 + 1;
  if (v6 != 0) {
  LABEL_9:
    memmove(v8, v5, v7);
  }
  v8[v7] = 0;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD*))(
      *(_QWORD*)v4 + 184LL))((void*)(v24), v4, v22_.v22);
  GameRoutine_190120(&v25_.v25, (unsigned __int8*)v24);
  if ((v28_.v28[0] & 1) != 0) {
    if ((v25_.v25 & 1) != 0) {
      v10 = v25_.v27;
    }
    else {
      v10 = (char*)&v25_.v25 + 1;
    }
    if ((v25_.v25 & 1) != 0) {
      v11 = v25_.v26;
    }
    else {
      v11 = (unsigned __int64)(unsigned __int8)v25_.v25 >> 1;
    }
    GameRoutine_a3a260(v28_.v28, (__int64)v10, v11);
  }
  else if ((v25_.v25 & 1) != 0) {
    GameRoutine_a3a3a0(v28_.v28, (__int64)v25_.v27, v25_.v26);
  }
  else {
    v28_.v28[0] = v25_.v25;
    v28_.v28[1] = v25_.v26;
    v28_.v29 = (__int64)v25_.v27;
  }
  v12 = snd_g_memory_ptr[0];
  if ((v25_.v25 & 1) != 0) {
    (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v25_.v27);
  }
  if ((v24[0] & 1) != 0 && v24[2] != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  if ((v22_.v22[0] & 1) != 0 && v22_.v23 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
  }
  v15 = snd_g_proxy;
  v16 = GameRoutine_190240_alt1((__int64)v28_.v28);
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v15 + 536LL))(v15, v16) &
       1) != 0) {
    v17 = GameRoutine_190240_alt1((__int64)v28_.v28);
    v18 = 1;
    v19 = nn_fs_OpenFile(a1 + 80, v17, 1);
    *(_DWORD*)(a1 + 88) = v19;
    if (v19 == 0) {
      v21 = *(_QWORD*)(a1 + 80);
      *(_BYTE*)(a1 + 92) = 1;
      *(_DWORD*)(a1 + 88) = nn_fs_GetFileSize(a1 + 104, v21);
      if ((v28_.v28[0] & 1) == 0) {
        return v18;
      }
      goto LABEL_36;
    }
  }
  v18 = 0;
  if ((v28_.v28[0] & 1) != 0) {
  LABEL_36:
    (*(void (**)(__int64, __int64))(*(_QWORD*)*v12 + 24LL))(*v12, v28_.v29);
  }
  return v18;
}

__int64 TargetFile_Unknown12(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  int v13;
  __int64 v14;
  __int64 v15;

  v4 = *(_QWORD*)(a1 + 96);
  if (v4 != 0) {
    v7 = *(_QWORD*)(a1 + 104);
  }
  else {
    v8 = *(_QWORD*)(a1 + 72);
    if (v8 == 0) {
      if (*(_BYTE*)(a1 + 92) != 1) {
        return 0;
      }
      v11 = *(_QWORD*)(a1 + 80);
      v15 = 0;
      v13 = nn_fs_ReadFile_1a0a620(&v15, v11, a3, a2, a4);
      v14 = v15;
      *(_DWORD*)(a1 + 88) = v13;
      if (v13 != 0) {
        return 0;
      }
      else {
        return v14;
      }
    }
    v7 = *(_QWORD*)(v8 + 576);
    v4 = *(_QWORD*)(v8 + 592);
  }
  if (a4 + a3 >= v7) {
    v9 = v7 - a3;
  }
  else {
    v9 = a4;
  }
  memcpy(a2, v4 + a3, v9);
  return v9;
}

__int64 TargetFile_Unknown13(__int64 result)
{
  __int64 v1;

  if (*(_BYTE*)(result + 92) == 1) {
    v1 = result;
    result = nn_fs_CloseFile(*(_QWORD*)(result + 80));
    *(_BYTE*)(v1 + 92) = 0;
  }
  return result;
}

#pragma GCC visibility pop
