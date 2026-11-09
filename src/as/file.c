#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_634d80(__int64, __int64);
__int64 GameRoutine_6542d0(_QWORD, _QWORD);
__int64 GameRoutine_6544c0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (**GameData_212c3c8)();
extern __int64 (*as_File_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 snd_g_fileIndex;
extern __int64* snd_g_fileIndex_ptr[2];
__int64 File_Destructor(_QWORD* a1);
__int64 File_DeletingDestructor(_QWORD* a1);
__int64 File_Unknown3(__int64 a1);
__int64 File_Unknown4(__int64 a1);
bool File_Unknown5(__int64 a1);
__int64 File_Unknown6(__int64 a1);
__int64 File_Unknown7(__int64 a1);

__int64 File_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = as_File_vtable;
  result = GameRoutine_634d80(snd_g_fileIndex, a1[17]);
  a1[17] = 0;
  return result;
}

__int64 File_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = as_File_vtable;
  GameRoutine_634d80(snd_g_fileIndex, a1[17]);
  a1[17] = 0;
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 File_Unknown3(__int64 a1)
{
  __int64 v2;
  __int64 result;
  _QWORD v4[3];
  __int64 v5;
  __int64 (**v6)();
  int v7;

  v4[0] = a1 + 8;
  v2 = *snd_g_fileIndex_ptr[0];
  v4[1] = strlen(a1 + 8);
  v4[2] = 0;
  v5 = 0;
  v6 = GameData_212c3c8;
  v7 = 1;
  *(_QWORD*)(a1 + 136) = GameRoutine_6542d0(v2, v4);
  result = v5;
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 File_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64 result;
  _QWORD v4[3];
  int v5;

  v4[0] = a1 + 8;
  v2 = *snd_g_fileIndex_ptr[0];
  v4[1] = strlen(a1 + 8);
  v4[2] = GameData_212c3c8;
  v5 = 1;
  result = GameRoutine_6544c0(v2, v4);
  *(_QWORD*)(a1 + 136) = result;
  return result;
}

bool File_Unknown5(__int64 a1)
{
  __int64 v1;
  _BOOL4 v2;

  v1 = *(_QWORD*)(a1 + 136);
  if (v1 != 0 && *(_QWORD*)(v1 + 576) != 0) {
    nn_os_AcquireReadLock(v1 + 696);
    v2 = (*(_DWORD*)(v1 + 656) & 8) != 0;
    nn_os_ReleaseReadLock(v1 + 696);
  }
  else {
    return false;
  }
  return v2;
}

__int64 File_Unknown6(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 136);
  if (v1 != 0 && *(_QWORD*)(v1 + 576) != 0) {
    return *(_QWORD*)(v1 + 592);
  }
  else {
    return 0;
  }
}

__int64 File_Unknown7(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 136);
  if (v1 != 0) {
    return *(unsigned int*)(v1 + 576);
  }
  else {
    return 0;
  }
}

#pragma GCC visibility pop
