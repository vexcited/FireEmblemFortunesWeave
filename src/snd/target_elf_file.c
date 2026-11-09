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
  GameRoutine_a392e0((__int64)&v12, "%s%s", v2, v3);
  v4 = snd_g_proxy;
  v5 = GameRoutine_190240(&v12);
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 536LL))(v4, v5);
  if ((result & 1) == 0) {
    *(_QWORD*)(a1 + 72) = 0;
    *(_BYTE*)(a1 + 81) = 1;
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

__int64 TargetElfFile_Unknown6(_QWORD* a1)
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
  GameRoutine_a392e0((__int64)&v13, "%s%s", v2, v3);
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
