#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ConstructString_1901f0(_QWORD);
__int64 GameRoutine_14a650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14ab40(_QWORD);
__int64 GameRoutine_14ad40(_QWORD);
__int64 GameRoutine_179810(_QWORD);
__int64 GameRoutine_190240(_QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 GameRoutine_6542d0(_QWORD, _QWORD);
__int64 GameRoutine_6544c0(_QWORD, _QWORD);
__int64 GameRoutine_a392e0(__int64, const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_AcquireWriteLock(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 nn_os_ReleaseWriteLock(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*snd_Memory_vtable_ptr)();
extern __int64 (*snd_TargetElfFile_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 snd_g_proxy;
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64* snd_g_memory_ptr[2];
__int64 TargetElfFile_Destructor(_QWORD* a1);
__int64 TargetElfFile_DeletingDestructor(_QWORD* a1);
__int64 TargetElfFile_Unknown5(__int64 a1);
__int64 TargetElfFile_Unknown6(_QWORD* a1);
__int64 TargetElfFile_Unknown7(__int64 a1);
__int64 TargetElfFile_Unknown9(__int64 a1);
__int64 TargetElfFile_Unknown10(__int64 a1);
__int64 TargetElfFile_Unknown14(_QWORD* a1);
__int64 TargetElfFile_Unknown15(_QWORD* a1);
_DWORD* GameRoutine_6544c0_alt1(__int64, __int64) __asm__("GameRoutine_6544c0");
_QWORD*
ConstructString_1901f0_alt1(_QWORD* result) __asm__("ConstructString_1901f0");
__int64 GameRoutine_190240_alt1(__int64) __asm__("GameRoutine_190240");
__int64 GameRoutine_a392e0_alt1(__int64, __int64,
                                ...) __asm__("GameRoutine_a392e0");
__int64 fs_Manager_createFileAsync_fs_File(__int64, __int64);
__int64 nn_os_AcquireWriteLock_alt1(__int64) __asm__("nn_os_AcquireWriteLock");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_ReleaseWriteLock_alt1(__int64) __asm__("nn_os_ReleaseWriteLock");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");

__int64 TargetElfFile_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;

  v1 = a1[11];
  *a1 = snd_TargetElfFile_vtable;
  v3 = snd_g_memory_ptr[0];
  if (v1 != 0) {
    (*(void (**)(_QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0]);
  }
  v4 = a1[9];
  if (v4 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v4 + 8));
    a1[9] = 0;
  }
  if (a1[12] != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
    a1[12] = 0;
  }
  return GameRoutine_179810(a1);
}

__int64 TargetElfFile_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;

  v1 = a1[11];
  *a1 = snd_TargetElfFile_vtable;
  v3 = snd_g_memory_ptr[0];
  if (v1 != 0) {
    (*(void (**)(_QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0]);
  }
  v4 = a1[9];
  if (v4 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v4 + 8));
    a1[9] = 0;
  }
  if (a1[12] != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
    a1[12] = 0;
  }
  GameRoutine_179810(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v5);
}

__int64 TargetElfFile_Unknown5(__int64 a1)
{
  const char* v2;
  const char* v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  char* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v12[2];
    char* v13;
  } v12_;
  struct {
    _QWORD v14[3];
    __int64 v15;
    __int64 (**v16)();
    int v17;
  } v14_;

  ConstructString_1901f0_alt1(v12_.v12);
  v2 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 128LL))(
      snd_g_proxy);
  v3 = (const char*)GameRoutine_190240_alt1(a1 + 40);
  GameRoutine_a392e0_alt1((__int64)v12_.v12, (__int64)"%s%s", v2, v3);
  v4 = snd_g_proxy;
  v5 = GameRoutine_190240_alt1((__int64)v12_.v12);
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 536LL))(v4, v5);
  if ((result & 1) == 0) {
    *(_QWORD*)(a1 + 72) = 0;
    *(_BYTE*)(a1 + 81) = 1;
    if ((v12_.v12[0] & 1) == 0) {
      return result;
    }
    return (*(__int64 (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                           24LL))(*snd_g_memory_ptr[0],
                                                  v12_.v13);
  }
  v7 = v12_.v13;
  v14_.v14[2] = 0;
  v14_.v15 = 0;
  v14_.v17 = 0;
  v8 = *snd_g_fileIndex_ptr[0];
  v9 = (unsigned __int64)LOBYTE(v12_.v12[0]) >> 1;
  if ((v12_.v12[0] & 1) != 0) {
    v9 = v12_.v12[1];
  }
  else {
    v7 = (char*)v12_.v12 + 1;
  }
  v14_.v14[0] = v7;
  v14_.v14[1] = v9;
  v14_.v16 = &snd_Memory_vtable_ptr;
  v10 = fs_Manager_createFileAsync_fs_File(v8, (__int64)v14_.v14);
  if (v14_.v15 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v14_.v15);
  }
  *(_QWORD*)(a1 + 72) = v10;
  v11 = *(_QWORD*)(v10 + 8);
  nn_os_LockMutex_alt1(v11 + 4456);
  nn_os_AcquireWriteLock_alt1(v10 + 696);
  *(_DWORD*)(v10 + 656) |= 4u;
  nn_os_ReleaseWriteLock_alt1(v10 + 696);
  result = nn_os_UnlockMutex_alt1(v11 + 4456);
  if ((v12_.v12[0] & 1) != 0) {
    return (*(__int64 (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                           24LL))(*snd_g_memory_ptr[0],
                                                  v12_.v13);
  }
  return result;
}

__int64 TargetElfFile_Unknown6(_QWORD* a1)
{
  const char* v2;
  const char* v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  unsigned __int64 v8;
  _DWORD* v9;
  _DWORD* v10;
  __int64 v11;
  __int64 result;
  struct {
    _QWORD v13[2];
    char* v14;
  } v13_;
  struct {
    _QWORD v15[3];
    int v16;
  } v15_;

  ConstructString_1901f0_alt1(v13_.v13);
  v2 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 128LL))(
      snd_g_proxy);
  v3 = (const char*)GameRoutine_190240_alt1((__int64)(a1 + 5));
  GameRoutine_a392e0_alt1((__int64)v13_.v13, (__int64)"%s%s", v2, v3);
  v4 = snd_g_proxy;
  v5 = GameRoutine_190240_alt1((__int64)v13_.v13);
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 536LL))(v4, v5) & 1) !=
      0) {
    v6 = v13_.v14;
    v15_.v16 = 0;
    v7 = *snd_g_fileIndex_ptr[0];
    v8 = (unsigned __int64)LOBYTE(v13_.v13[0]) >> 1;
    if ((v13_.v13[0] & 1) != 0) {
      v8 = v13_.v13[1];
    }
    else {
      v6 = (char*)v13_.v13 + 1;
    }
    v15_.v15[0] = v6;
    v15_.v15[1] = v8;
    v15_.v15[2] = &snd_Memory_vtable_ptr;
    v9 = GameRoutine_6544c0_alt1(v7, (__int64)v15_.v15);
    a1[9] = v9;
    v10 = v9;
    v11 = *((_QWORD*)v9 + 1);
    nn_os_LockMutex_alt1(v11 + 4456);
    nn_os_AcquireWriteLock_alt1((__int64)(v10 + 174));
    v10[164] |= 4u;
    nn_os_ReleaseWriteLock_alt1((__int64)(v10 + 174));
    nn_os_UnlockMutex_alt1(v11 + 4456);
  }
  else {
    a1[9] = 0;
  }
  result = (*(__int64 (**)(_QWORD*))(*a1 + 56LL))(a1);
  if ((v13_.v13[0] & 1) != 0) {
    return (*(__int64 (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                           24LL))(*snd_g_memory_ptr[0],
                                                  v13_.v14);
  }
  return result;
}

__int64 TargetElfFile_Unknown7(__int64 a1)
{
  __int64 v2;
  int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  char v10;

  if ((*(_BYTE*)(a1 + 81) & 1) != 0 || (*(_BYTE*)(a1 + 80) & 1) != 0) {
    return 1;
  }
  v2 = *(_QWORD*)(a1 + 72);
  if (v2 != 0) {
    nn_os_AcquireReadLock(v2 + 696);
    v4 = *(_DWORD*)(v2 + 656);
    nn_os_ReleaseReadLock(v2 + 696);
    v5 = a1;
    *(_BYTE*)(a1 + 80) = (v4 & 8) != 0;
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
    v10 = *(_BYTE*)(v5 + 80);
  }
  else {
    v10 = 0;
  }
  return v10 & 1;
}

__int64 TargetElfFile_Unknown9(__int64 a1)
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

__int64 TargetElfFile_Unknown10(__int64 a1)
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

__int64 TargetElfFile_Unknown14(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;

  v2 = a1[11];
  if (v2 == 0) {
    v3 = (*(__int64 (**)(_QWORD*))(*a1 + 72LL))(a1);
    v4 = (*(__int64 (**)(_QWORD*))(*a1 + 80LL))(a1);
    v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 120, 32);
    GameRoutine_14a650(v5, v3, v4);
    v2 = v5;
    a1[11] = v5;
  }
  return GameRoutine_14ab40(v2);
}

__int64 TargetElfFile_Unknown15(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;

  v2 = a1[11];
  if (v2 == 0) {
    v3 = (*(__int64 (**)(_QWORD*))(*a1 + 72LL))(a1);
    v4 = (*(__int64 (**)(_QWORD*))(*a1 + 80LL))(a1);
    v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 120, 32);
    GameRoutine_14a650(v5, v3, v4);
    v2 = v5;
    a1[11] = v5;
  }
  return GameRoutine_14ad40(v2);
}

#pragma GCC visibility pop
