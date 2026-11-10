#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ArcResourceAccessor_573580(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 GameRoutine_6313f0(__int64, __int64, _BYTE*, __int64*, __int64, int*);
__int64 GameRoutine_631820(__int64);
__int64 GameRoutine_632cd0(_QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 GameRoutine_636000(_QWORD);
__int64 GameRoutine_66b770(_QWORD*, __int64, _BYTE*, __int64*, __int64);
__int64 GameRoutine_a535e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a53bc0(_QWORD, _QWORD);
__int64 LayoutArchive_5725c0(_QWORD, _QWORD);
__int64 LayoutArchive_573340(_QWORD, _QWORD, _QWORD);
__int64 MultiArcResourceAccessor_574050(_QWORD, _QWORD);
__int64 Registration_17d5020(_QWORD, _QWORD);
__int64 Registration_17d5210(_QWORD, _QWORD);
__int64 RenderTask_13697d0(_QWORD*);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_GetSizeOf(_QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_AcquireWriteLock(_QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 nn_os_GetSystemTick(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 nn_os_ReleaseWriteLock(_QWORD);
__int64 nn_os_SignalTimerEvent(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_1f8f4e0[])();
extern __int64 (*GameData_1fd01c0[])();
extern __int64 (*GameData_2032be0[])();
extern __int64 (*GameData_20da560[])();
extern __int64 (*font_FontContentLoader_FsFile_vtable[])();
extern __int64 (*fs_BntxFile_vtable[])();
extern __int64 (*fs_GfxFile_vtable[])();
extern __int64 (*fs_PropertyFile_vtable[])();
extern __int64 (*fs_ResFile_vtable[])();
extern __int64 (*fs_ShaderFile_vtable[])();
extern __int64 (*msg_ProjectFile_vtable[])();
extern __int64 (*ui_IconManager_Ui2dIconArcFile_vtable[])();
extern __int64 (*ui_Ui2dArcFile_vtable[])();
extern __int64 GameData_212c3b8;
extern __int64 GameData_21323e0[5];
extern __int64 GameData_21667a8;
extern __int64 GameData_21a60c8;
extern __int64 GameData_21c6790;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c000[5];
extern __int64* GameData_212c008[4];
extern __int64* GameData_212c030[4];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_21c6798;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_637ae0(_QWORD);
void __attribute__((noreturn)) GameRoutine_64aa00(void);
void __attribute__((noreturn)) String_60a1d0();
unsigned __int64 Manager_6326c0(__int64* a1, __int64 a2);
unsigned __int64 Manager_632780(__int64 a1);
__int64 Manager_6328c0(__int64 a1, int a2);
__int64 Manager_632a80(__int64 a1);
__int64 Manager_ThreadExecutor_Unknown4(__int64 a1);
__int64 Manager_ThreadExecutor_Unknown3(_QWORD* a1);
_QWORD* fs_Manager_createFileAsync_fs_File_closure_CloneInto(_QWORD* result,
                                                             _QWORD* a2);
__int64 fs_Manager_createFileAsync_fs_File_closure_Invoke(__int64 a1,
                                                          _BYTE** a2);
__int64 fs_Manager_createFileSync_fs_File_closure_Invoke(__int64 a1,
                                                         _BYTE** a2);
_QWORD* Manager_66cc20(__int64* a1, _QWORD* a2);
_QWORD* fs_Manager_createFileSync_game_ArchiveFile_closure_Invoke(__int64 a1,
                                                                  _BYTE** a2);
_QWORD* fs_Manager_createFileSync_font_FontContentLoader_FsFile_closure_Invoke(
    __int64 a1, __int64* a2);
__int64 fs_Manager_createFileSync_msg_ProjectFile(__int64 a1);
__int64 fs_Manager_createFileSync_fs_ElfFile_closure_Invoke(__int64 a1,
                                                            __int64* a2);
_QWORD* fs_Manager_createFileSync_msg_ProjectFile_closure_Invoke(__int64 a1,
                                                                 __int64* a2);
__int64 fs_Manager_createFileAsync_msg_MessageFile_closure_Invoke(__int64 a1,
                                                                  __int64* a2);
__int64 fs_Manager_createFileSync_msg_MessageFile_closure_Invoke(__int64 a1,
                                                                 __int64* a2);
_QWORD* fs_Manager_createFileAsync_fs_ElfFile_closure_CloneInto(_QWORD* result,
                                                                _QWORD* a2);
__int64 fs_Manager_createFileAsync_fs_ElfFile_closure_Invoke(__int64 a1,
                                                             __int64* a2);
_QWORD* fs_Manager_createFileAsync_fs_GfxFile_closure_Invoke(__int64 a1,
                                                             __int64* a2);
_QWORD* fs_Manager_createFileSync_fs_GfxFile_closure_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 fs_Manager_createFileSync_fs_PropertyFile_closure_Invoke(__int64 a1,
                                                                 __int64* a2);
_QWORD* fs_Manager_createFileSync_fs_ResFile_closure_Invoke(__int64 a1,
                                                            __int64* a2);
_QWORD* fs_Manager_createFileSync_ui_Ui2dArcFile_closure_Invoke(__int64 a1,
                                                                __int64* a2);
_QWORD* fs_Manager_createFileAsync_ui_Ui2dArcFile_closure_Invoke(__int64 a1,
                                                                 __int64* a2);
__int64 Manager_136a710(__int64 result, unsigned int a2);
_QWORD* Manager_136b340(_QWORD* result, __int64 a2);
_QWORD* fs_Manager_createFileSync_ui_IconManager_Ui2dIconArcFile_closure_Invoke(
    __int64 a1, __int64* a2);
_QWORD* fs_Manager_createFileAsync_fs_BntxFile_closure_CloneInto(_QWORD* result,
                                                                 _QWORD* a2);
_QWORD* fs_Manager_createFileAsync_fs_BntxFile_closure_Invoke(__int64 a1,
                                                              __int64* a2);
_QWORD* fs_Manager_createFileAsync_fs_ShaderFile_closure_Invoke(__int64 a1,
                                                                __int64* a2);
_QWORD* fs_Manager_createFileAsync_fs_ResFile_closure_Invoke(__int64 a1,
                                                             __int64* a2);
_QWORD* fs_Manager_createFileSync_fs_ShaderFile_closure_Invoke(__int64 a1,
                                                               __int64* a2);
_QWORD* fs_Manager_createFileSync_fs_BntxFile_closure_Clone(__int64 a1);
_QWORD* fs_Manager_createFileSync_fs_BntxFile_closure_Invoke(__int64 a1,
                                                             __int64* a2);
__int64 fs_Manager_createFileAsync_fs_PropertyFile_closure_Invoke(__int64 a1,
                                                                  __int64* a2);
_QWORD* GameRoutine_632da0(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_573330(_QWORD);
__int64 GameRoutine_59e700(_QWORD, _QWORD);
__int64 GameRoutine_6313f0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_6313f0");
__int64 GameRoutine_631820_alt1(_QWORD) __asm__("GameRoutine_631820");
__int64 GameRoutine_633980(_QWORD, _QWORD);
__int64 GameRoutine_635a60(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7a8220(_QWORD, _QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snprintf(_QWORD, _QWORD, const char*, ...);
extern __int64 (*GameData_1fd07d8[])();
extern __int64 GameData_2203100;
extern __int64 eft_g_effectSystem;
extern __int64* snd_g_fileIndex_ptr[2];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                   _QWORD) __asm__("String_60a1d0");
void __attribute__((noreturn))
String_60a1d0_alt2(void) __asm__("String_60a1d0");
__int64 Manager_a527c0(__int64 result, __int64 a2);
__int64 fs_Manager_createFileSync_fs_GfxFile(__int64 a1);
unsigned __int64 Manager_136aaf0(__int64* a1, unsigned int a2, __int64 a3);
__int64 Manager_136afb0(__int64 a1, unsigned int a2, _BYTE* a3);
_QWORD*
fs_Manager_createFileAsync_ui_IconManager_Ui2dIconArcFile_closure_Invoke(
    __int64 a1, __int64* a2);
__int64
fs_Manager_createFileSync_fs_BntxFile_closure_DeletingDestructor(__int64 a1);

unsigned __int64 Manager_6326c0(__int64* a1, __int64 a2)
{
  unsigned __int64 result;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;

  result = strlen(a2);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v5 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (result | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16, 0);
    a1[1] = v5;
    a1[2] = v8;
    *a1 = v7 | 1;
    v6 = (char*)v8;
  }
  else {
    *(_BYTE*)a1 = 2 * result;
    v6 = (char*)a1 + 1;
    if (result == 0) {
      goto LABEL_10;
    }
  }
  result = memmove(v6, a2, v5);
LABEL_10:
  v6[v5] = 0;
  return result;
}

unsigned __int64 Manager_632780(__int64 a1)
{
  __int64 v2;
  __int64 i;
  int v4;
  int v5;
  unsigned __int64 result;
  int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;

  nn_os_LockMutex(a1 + 4456);
  v2 = *(_QWORD*)(a1 + 4328);
  for (i = *(_QWORD*)(a1 + 4336); v2 != i; v2 += 8) {
    v4 = atomic_load((unsigned int*)(*(_QWORD*)v2 + 764LL));
    if (v4 >= 1) {
      atomic_fetch_add((atomic_uint* volatile)(*(_QWORD*)v2 + 764LL),
                       0xFFFFFFFF);
    }
  }
  v5 = *(_DWORD*)(a1 + 4716);
  if (v5 <= 0) {
    *(_DWORD*)(a1 + 4720) = 0;
  }
  else {
    *(_DWORD*)(a1 + 4716) = v5 - 1;
    ++*(_DWORD*)(a1 + 4720);
  }
  nn_os_UnlockMutex(a1 + 4456);
  result = Manager_6328c0(a1, 0);
  v7 = atomic_load((unsigned __int8*)&GameData_21c6798);
  if (v7 == 1) {
    atomic_store(0, (unsigned __int8*)&GameData_21c6798);
    v8 = *(_QWORD*)(a1 + 4608);
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 280LL) != 0) {
      result = nn_mem_StandardAllocator_GetSizeOf(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + 56LL);
    }
    else {
      result = GameData_21667a8;
    }
    v9 = atomic_load((unsigned __int64*)&GameData_21c6790);
    v10 = result >= v9;
    v11 = result - v9;
    if (!v10) {
      v11 = 0;
    }
    if (v8 > v11) {
      return nn_os_SignalTimerEvent(a1 + 4256);
    }
  }
  return result;
}

__int64 Manager_6328c0(__int64 a1, int a2)
{
  __int64 SystemTickEv;
  int v5;
  int v6;
  __int64 v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  _DWORD* v16;

  SystemTickEv = nn_os_GetSystemTick(a1);
  v5 = 0;
  v6 = 0;
  while ((Registration_17d5020(a1 + 3944, &v16) & 1) != 0) {
    v7 = (__int64)v16;
    if (v16 == nullptr) {
      return (unsigned int)(v6 + v5);
    }
    nn_os_LockMutex(a1 + 4456);
    GameRoutine_632cd0(a1, v7);
    GameRoutine_631820(v7);
    nn_os_AcquireWriteLock(v7 + 696);
    *(_DWORD*)(v7 + 656) |= 0x40u;
    nn_os_ReleaseWriteLock(v7 + 696);
    ++v5;
  LABEL_8:
    v9 = nn_os_UnlockMutex(a1 + 4456);
    if (*(_DWORD*)(a1 + 4736) == 1) {
      v10 = nn_os_GetSystemTick(v9);
      if (nn_os_ConvertToTimeSpan(v10 - SystemTickEv) / 1000000 >=
          *(int*)(a1 + 4728)) {
        return (unsigned int)(v6 + v5);
      }
    }
    else {
      nn_os_LockMutex(a1 + 3792);
      v11 = *(_QWORD*)(a1 + 3784);
      v12 = nn_os_UnlockMutex(a1 + 3792);
      v13 = *(int*)(a1 + 4732);
      v14 = nn_os_GetSystemTick(v12);
      if (nn_os_ConvertToTimeSpan(v14 - SystemTickEv) / 1000000 >=
              *(int*)(a1 + 4724) &&
          v11 < v13) {
        return (unsigned int)(v6 + v5);
      }
    }
    if (a2 >= 1 && v6 + v5 >= a2) {
      return (unsigned int)(v6 + v5);
    }
  }
  if ((Registration_17d5210(a1 + 3744, &v16) & 1) != 0) {
    v8 = v16;
    if (v16 != nullptr) {
      nn_os_LockMutex(a1 + 4456);
      (*(void (**)(_DWORD*))(*(_QWORD*)v8 + 16LL))(v8);
      GameRoutine_632cd0(a1, v8);
      GameRoutine_631820((__int64)v8);
      nn_os_AcquireWriteLock(v8 + 174);
      v8[164] |= 0x40u;
      nn_os_ReleaseWriteLock(v8 + 174);
      ++v6;
      goto LABEL_8;
    }
  }
  return (unsigned int)(v6 + v5);
}

__int64 Manager_632a80(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  int v8;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;

  v2 = nn_os_LockMutex(a1 + 4456);
  v3 = *(_QWORD*)(a1 + 4328);
  v4 = *(_QWORD*)(a1 + 4336);
  if (v3 == v4) {
    v6 = nullptr;
    v5 = nullptr;
  }
  else {
    v5 = nullptr;
    v6 = nullptr;
    v7 = 0;
    do {
      v8 = atomic_load((unsigned int*)(*(_QWORD*)v3 + 760LL));
      if (v8 <= 0) {
        if ((unsigned __int64)v6 < v7) {
          *(_QWORD*)v6 = *(_QWORD*)v3;
          v6 += 8;
        }
        else {
          v9 = (char*)(v6 - v5);
          v10 = (v6 - v5) >> 3;
          v11 = v10 + 1;
          if ((unsigned __int64)(v10 + 1) >> 61 != 0) {
            GameRoutine_637ae0(v2);
          }
          if ((__int64)(v7 - (_QWORD)v5) >> 2 > v11) {
            v11 = (__int64)(v7 - (_QWORD)v5) >> 2;
          }
          if (v7 - (unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFF8LL) {
            v12 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v12 = v11;
          }
          if (v12 != 0) {
            if (v12 >> 61 != 0) {
              GameRoutine_60a210(v2);
            }
            v13 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
          }
          else {
            v13 = 0;
          }
          v7 = v13 + 8 * v12;
          v14 = (__int64)&v9[v13 + -8 * v10];
          *(_QWORD*)&v9[v13] = *(_QWORD*)v3;
          v6 = &v9[v13 + 8];
          v2 = memcpy(v14, v5, v9);
          if (v5 != nullptr) {
            v15 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v15 = 56;
            }
            v2 = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v5);
          }
          v5 = (char*)v14;
        }
      }
      v3 += 8;
    } while (v3 != v4);
  }
  nn_os_LockMutex(a1 + 4456);
  v16 = *(__int64**)(a1 + 4328);
  v17 = *(__int64**)(a1 + 4336);
  while (v16 != v17) {
    v18 = *v16++;
    v19 = *(_QWORD*)(v18 + 8);
    nn_os_LockMutex(v19 + 4456);
    nn_os_AcquireWriteLock(v18 + 696);
    *(_DWORD*)(v18 + 656) &= ~2u;
    nn_os_ReleaseWriteLock(v18 + 696);
    *(_QWORD*)(v18 + 792) = GameData_21a60c8;
    nn_os_UnlockMutex(v19 + 4456);
  }
  nn_os_UnlockMutex(a1 + 4456);
  if (v5 != v6) {
    v20 = v5;
    do {
      v21 = *(_QWORD*)v20;
      v20 += 8;
      GameRoutine_634d80(*(_QWORD*)(v21 + 8));
    } while (v20 != v6);
  }
  if (v5 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v5);
  }
  return nn_os_UnlockMutex(a1 + 4456);
}

__int64 Manager_ThreadExecutor_Unknown4(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(a1 + 488))(*(_QWORD*)(a1 + 496));
}

__int64 Manager_ThreadExecutor_Unknown3(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = GameData_21323e0[0];
  v3 = a1[3];
  a1[3] = 0;
  *a1 = v2 + 16;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                  v3);
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6, a1);
}

_QWORD* fs_Manager_createFileAsync_fs_File_closure_CloneInto(_QWORD* result,
                                                             _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  *a2 = GameData_1f8f4e0;
  v2 = result[1];
  v3 = result[3];
  a2[2] = result[2];
  a2[3] = v3;
  a2[1] = v2;
  return result;
}

__int64 fs_Manager_createFileAsync_fs_File_closure_Invoke(__int64 a1,
                                                          _BYTE** a2)
{
  __int64 v2;
  _BYTE* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v11[2];
  int v12;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = v5;
  v8 = v6[1];
  v11[0] = *v6;
  v11[1] = v8;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
    v12 = 0;
    GameRoutine_6313f0(v5, v2, v4, v11, **(_QWORD**)(a1 + 8), &v12);
    std___1___shared_weak_count___release_weak(v8);
  }
  else {
    v9 = *(__int64**)(a1 + 8);
    v12 = 0;
    GameRoutine_6313f0(v5, v2, v4, v11, *v9, &v12);
  }
  return v7;
}

__int64 fs_Manager_createFileSync_fs_File_closure_Invoke(__int64 a1, _BYTE** a2)
{
  __int64 v2;
  _BYTE* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  int v9;
  __int64 v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(__int64**)(a1 + 8);
  v7 = v5;
  v10[0] = 0;
  v10[1] = 0;
  v9 = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  return v7;
}

_QWORD* Manager_66cc20(__int64* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  char* v14;
  __int64 v15;

  v2 = *a1;
  v3 = a1[1] - *a1;
  v4 = 1 - 0x5555555555555555LL * (v3 >> 3);
  if (v4 > 0xAAAAAAAAAAAAAAALL) {
    GameRoutine_64aa00();
  }
  v7 = fw_memory_g_heap_manager_ptr;
  if (0x5555555555555556LL * ((a1[2] - v2) >> 3) > v4) {
    v4 = 0x5555555555555556LL * ((a1[2] - v2) >> 3);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((a1[2] - v2) >> 3) >= 0x555555555555555LL) {
    v8 = 0xAAAAAAAAAAAAAAALL;
  }
  else {
    v8 = v4;
  }
  if (v8 != 0) {
    if (v8 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_60a210(a1);
    }
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        24 * v8, 16, 0);
  }
  else {
    v9 = 0;
  }
  v10 = (_QWORD*)(v9 + v3);
  v11 = v9 + 24 * v8;
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(v9 + v3, a2[2], a2[1]);
    v2 = *a1;
    v3 = a1[1] - *a1;
  }
  else {
    v12 = a2[1];
    *v10 = *a2;
    v10[1] = v12;
    v10[2] = a2[2];
  }
  v13 = v10 + 3;
  v14 = (char*)v10 - v3;
  memcpy(v14, v2, v3);
  *a1 = (__int64)v14;
  a1[1] = (__int64)v13;
  a1[2] = v11;
  if (v2 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v15, v2);
  }
  return v13;
}

_QWORD* fs_Manager_createFileSync_game_ArchiveFile_closure_Invoke(__int64 a1,
                                                                  _BYTE** a2)
{
  __int64 v2;
  _BYTE* v4;
  _QWORD* v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v9[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 816, 16);
  v6 = *(__int64**)(a1 + 8);
  v7 = v5;
  v9[0] = 0;
  v9[1] = 0;
  GameRoutine_66b770(v5, v2, v4, v9, *v6);
  return v7;
}

_QWORD* fs_Manager_createFileSync_font_FontContentLoader_FsFile_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = (_QWORD*)v5;
  v10[0] = 0;
  v10[1] = 0;
  v9 = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  *v7 = font_FontContentLoader_FsFile_vtable;
  return v7;
}

__int64 fs_Manager_createFileSync_msg_ProjectFile(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  int v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  _DWORD* v14;
  unsigned int v15;
  unsigned int v16;
  _BYTE* v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  bool v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int64 v29;
  long double v30;
  __int64 v31;
  __int64 v32;
  _BYTE v34[48];
  __int64 v35;
  __int64 v36;

  v4 = *msg_MessageManager_instance__ptr[0] + 14600;
  v35 = v1;
  v36 = v2;
  v5 = *(_QWORD*)(a1 + 800);
  v6 = a1;
  v7 = *(_DWORD*)(v5 + 36);
  if (v7 != -1) {
    v8 = **(_DWORD**)(*(_QWORD*)(v5 + 24) + 24LL * v7);
    if (v8 >= 1) {
      v9 = v4;
      v10 = 0;
      v11 = (__int64*)fw_memory_g_heap_manager_ptr;
      while (1) {
        v13 = *(_QWORD*)(*(_QWORD*)(v6 + 800) + 24LL) +
              24LL * *(int*)(*(_QWORD*)(v6 + 800) + 32LL);
        v14 = *(_DWORD**)v13;
        v15 = *(_DWORD*)(v13 + 12);
        v16 = (8 * *v14) | 4;
        if (v16 < v15) {
          break;
        }
      LABEL_7:
        if (++v10 == v8) {
          goto LABEL_35;
        }
      }
      while (1) {
        v17 = (char*)v14 + v16;
        v18 = (unsigned __int8)*v17;
        if (*(_DWORD*)&v17[v18 + 1] == v10) {
          break;
        }
        v16 += v18 + 5;
        if (v16 >= v15) {
          goto LABEL_7;
        }
      }
      if (*v17 != 0) {
        memcpy(v34, (char*)v14 + v16 + 1, v18);
      }
      v19 = *v11;
      v34[v18] = 0;
      v20 = (_QWORD*)fw_memory_HeapManager_Allocate(v19, 48, 16, 0);
      *v20 = 0;
      v20[1] = 0;
      v21 = strlen(v34);
      if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0(v21);
      }
      v22 = v21;
      if (v21 >= 0x17) {
        if ((v21 | 7) == 0x17) {
          v24 = 26;
        }
        else {
          v24 = (v21 | 7) + 1;
        }
        v23 = fw_memory_HeapManager_Allocate(*v11, v24, 16, 0);
        v20[3] = v22;
        v20[4] = v23;
        v20[2] = v24 | 1;
      }
      else {
        v23 = (__int64)v20 + 17;
        *((_BYTE*)v20 + 16) = 2 * v21;
        if (v21 == 0) {
        LABEL_23:
          *(_BYTE*)(v23 + v22) = 0;
          v20[5] = v6;
          v25 = *((unsigned __int8*)v20 + 16);
          v26 = (v25 & 1) == 0;
          v27 = v25 >> 1;
          if (v26) {
            v28 = (char*)v20 + 17;
          }
          else {
            v28 = (char*)v20[4];
          }
          if (v26) {
            v29 = v27;
          }
          else {
            v29 = v20[3];
          }
          v20[1] = std___1___hash_memory(v28, v29);
          v11 = &fw_memory_g_heap_manager;
          if ((GameRoutine_a53bc0(v9 + 48, v20) & 1) == 0) {
            if ((v20[2] & 1) != 0 && v20[4] != 0) {
              v31 = 128;
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                v31 = 56;
              }
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v31,
                                            v30);
            }
            v12 = 128;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v12, v30);
          }
          goto LABEL_7;
        }
      }
      memcpy(v23, v34, v22);
      goto LABEL_23;
    }
  }
LABEL_35:
  v32 = *(_QWORD*)(v6 + 8);
  nn_os_LockMutex(v32 + 4456);
  nn_os_AcquireWriteLock(v6 + 696);
  *(_DWORD*)(v6 + 656) |= 4u;
  nn_os_ReleaseWriteLock(v6 + 696);
  return nn_os_UnlockMutex(v32 + 4456);
}

__int64 Manager_a527c0(__int64 result, __int64 a2)
{
  __int64 v3;
  int v4;
  unsigned __int64 v5;
  unsigned __int8* v6;
  unsigned int v7;
  __int64 v8;
  __int64 i;
  int v10;
  __int64 v11;
  unsigned __int8* v12;
  int v13;
  int v14;
  __int64 v15;
  __int64* v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  bool v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD v38[2];
  char* v39;

  if (a2 == 0) {
    return result;
  }
  v3 = result;
  v4 = -2128831035;
  result = strlen(a2);
  if ((int)result < 8) {
    v7 = 0;
    if ((int)result <= 0) {
      goto LABEL_13;
    }
  }
  else {
    v5 = 7;
    do {
      v6 = (unsigned __int8*)(a2 + v5);
      v5 += 8LL;
      v4 = (16777619 *
            ((16777619 *
              ((16777619 *
                ((16777619 *
                  ((16777619 *
                    ((16777619 * ((16777619 * ((16777619 * v4) ^ *(v6 - 7))) ^
                                  *(v6 - 6))) ^
                     *(v6 - 5))) ^
                   *(v6 - 4))) ^
                 *(v6 - 3))) ^
               *(v6 - 2))) ^
             *(v6 - 1))) ^
           *v6;
    } while (v5 < ((unsigned int)result & 0x7FFFFFFF));
    v7 = result & 0x7FFFFFF8;
    if ((result & 0x7FFFFFF8) >= (int)result) {
      goto LABEL_13;
    }
  }
  v8 = result & 7;
  for (i = v7; v8 != 0; v4 = (16777619 * v4) ^ v10) {
    v10 = *(unsigned __int8*)(a2 + i++);
    --v8;
  }
  if (v7 - (unsigned __int64)(unsigned int)result <= 0xFFFFFFFFFFFFFFF8LL) {
    v11 = (unsigned int)result - i;
    v12 = (unsigned __int8*)(i + a2 + 3);
    do {
      v11 -= 8;
      v13 = (16777619 *
             ((16777619 *
               ((16777619 *
                 ((16777619 *
                   ((16777619 * ((16777619 * ((16777619 * v4) ^ *(v12 - 3))) ^
                                 *(v12 - 2))) ^
                    *(v12 - 1))) ^
                  *v12)) ^
                v12[1])) ^
              v12[2])) ^
            v12[3];
      v14 = v12[4];
      v12 += 8;
      v4 = (16777619 * v13) ^ v14;
    } while (v11 != 0);
  }
LABEL_13:
  v16 = (__int64*)(v3 + 32);
  v15 = *(_QWORD*)(v3 + 32);
  if (v4 != 0) {
    v17 = v4;
  }
  else {
    v17 = -1;
  }
  if (v15 != 0) {
    v18 = v3 + 32;
    do {
      v19 = *(_DWORD*)(v15 + 28);
      v20 = v19 >= v17;
      if (v19 >= v17) {
        v21 = 0;
      }
      else {
        v21 = 8;
      }
      if (v20) {
        v18 = v15;
      }
      v15 = *(_QWORD*)(v15 + v21);
    } while (v15 != 0);
    if ((__int64*)v18 != v16 && v17 >= *(_DWORD*)(v18 + 28)) {
      return result;
    }
  }
  v22 = strlen(a2);
  if (v22 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(v22, v23, v24, v25, v26);
  }
  v27 = v22;
  v28 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v22 >= 0x17) {
    if ((v22 | 7) == 0x17) {
      v30 = 26;
    }
    else {
      v30 = (v22 | 7) + 1;
    }
    v29 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v30, 16, 0);
    v38[1] = v27;
    v39 = v29;
    v38[0] = v30 | 1;
  }
  else {
    LOBYTE(v38[0]) = 2 * v22;
    v29 = (char*)v38 + 1;
    if (v22 == 0) {
      goto LABEL_36;
    }
  }
  memcpy(v29, a2, v27);
LABEL_36:
  v29[v27] = 0;
  result = GameRoutine_7a8220(v3, v38);
  if ((v38[0] & 1) != 0 && v39 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*v28 + 200LL) == 0) {
      v31 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(*v28 + v31);
  }
  v32 = *v16;
  v33 = (__int64*)(v3 + 32);
  if (*v16 != 0) {
    while (1) {
      while (1) {
        v33 = (__int64*)v32;
        v34 = *(_DWORD*)(v32 + 28);
        if (v17 >= v34) {
          break;
        }
        v32 = *v33;
        v16 = v33;
        if (*v33 == 0) {
          goto LABEL_48;
        }
      }
      if (v34 >= v17) {
        break;
      }
      v32 = v33[1];
      if (v32 == 0) {
        v16 = v33 + 1;
        goto LABEL_48;
      }
    }
  }
  else {
  LABEL_48:
    v35 = fw_memory_HeapManager_Allocate(*v28, 32, 16, 0);
    *(_DWORD*)(v35 + 28) = v17;
    *(_QWORD*)v35 = 0;
    *(_QWORD*)(v35 + 8) = 0;
    *(_QWORD*)(v35 + 16) = v33;
    *v16 = v35;
    v36 = **(_QWORD**)(v3 + 24);
    if (v36 != 0) {
      *(_QWORD*)(v3 + 24) = v36;
      v37 = *v16;
    }
    else {
      v37 = v35;
    }
    result = fw_containers_BalanceAfterInsert(*(_QWORD*)(v3 + 32), v37);
    ++*(_QWORD*)(v3 + 40);
  }
  return result;
}

__int64 fs_Manager_createFileSync_fs_ElfFile_closure_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 896, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = v5;
  v10[0] = 0;
  v10[1] = 0;
  v9 = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  *(_DWORD*)(v7 + 888) = 0;
  *(_QWORD*)(v7 + 880) = 0;
  *(_QWORD*)(v7 + 872) = 0;
  *(_QWORD*)(v7 + 864) = 0;
  *(_QWORD*)(v7 + 856) = 0;
  *(_QWORD*)(v7 + 848) = 0;
  *(_QWORD*)(v7 + 840) = 0;
  *(_QWORD*)(v7 + 832) = 0;
  *(_QWORD*)(v7 + 824) = 0;
  *(_QWORD*)(v7 + 816) = 0;
  *(_QWORD*)(v7 + 808) = 0;
  *(_QWORD*)(v7 + 800) = 0;
  *(_QWORD*)v7 = GameData_212c3b8 + 16;
  return v7;
}

_QWORD* fs_Manager_createFileSync_msg_ProjectFile_closure_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 816, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = (_QWORD*)v5;
  v10[0] = 0;
  v10[1] = 0;
  v9 = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  v7[100] = 0;
  *v7 = msg_ProjectFile_vtable;
  return v7;
}

__int64 fs_Manager_createFileAsync_msg_MessageFile_closure_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 848, 16);
  v6 = *(_QWORD**)(a1 + 24);
  v7 = v5;
  v8 = v6[1];
  v10[0] = *v6;
  v10[1] = v8;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_a535e0(v5, v2, v4, v10, **(_QWORD**)(a1 + 8));
    std___1___shared_weak_count___release_weak(v8);
  }
  else {
    GameRoutine_a535e0(v5, v2, v4, v10, **(_QWORD**)(a1 + 8));
  }
  return v7;
}

__int64 fs_Manager_createFileSync_msg_MessageFile_closure_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  _QWORD v9[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 848, 16);
  v6 = *(__int64**)(a1 + 8);
  v7 = v5;
  v9[0] = 0;
  v9[1] = 0;
  GameRoutine_a535e0(v5, v2, v4, v9, *v6);
  return v7;
}

_QWORD* fs_Manager_createFileAsync_fs_ElfFile_closure_CloneInto(_QWORD* result,
                                                                _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  *a2 = GameData_1fd01c0;
  v2 = result[1];
  v3 = result[3];
  a2[2] = result[2];
  a2[3] = v3;
  a2[1] = v2;
  return result;
}

__int64 fs_Manager_createFileAsync_fs_ElfFile_closure_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD v13[2];
  int v14;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 896, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = v5;
  v8 = *v6;
  v9 = v6[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v13[0] = v8;
    v13[1] = v9;
    v10 = **(_QWORD**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v14 = 0;
    GameRoutine_6313f0(v5, v2, v4, v13, v10, &v14);
    std___1___shared_weak_count___release_weak(v9);
    *(_DWORD*)(v7 + 888) = 0;
    *(_QWORD*)(v7 + 880) = 0;
    *(_QWORD*)(v7 + 872) = 0;
    *(_QWORD*)(v7 + 864) = 0;
    *(_QWORD*)(v7 + 856) = 0;
    *(_QWORD*)(v7 + 848) = 0;
    *(_QWORD*)(v7 + 840) = 0;
    *(_QWORD*)(v7 + 832) = 0;
    *(_QWORD*)(v7 + 824) = 0;
    *(_QWORD*)(v7 + 816) = 0;
    *(_QWORD*)(v7 + 808) = 0;
    *(_QWORD*)(v7 + 800) = 0;
    *(_QWORD*)v7 = GameData_212c3b8 + 16;
    std___1___shared_weak_count___release_weak(v9);
  }
  else {
    v11 = *(_QWORD**)(a1 + 8);
    v13[0] = v8;
    v13[1] = 0;
    v14 = 0;
    GameRoutine_6313f0(v5, v2, v4, v13, *v11, &v14);
    *(_DWORD*)(v7 + 888) = 0;
    *(_QWORD*)(v7 + 880) = 0;
    *(_QWORD*)(v7 + 872) = 0;
    *(_QWORD*)(v7 + 864) = 0;
    *(_QWORD*)(v7 + 856) = 0;
    *(_QWORD*)(v7 + 848) = 0;
    *(_QWORD*)(v7 + 840) = 0;
    *(_QWORD*)(v7 + 832) = 0;
    *(_QWORD*)(v7 + 824) = 0;
    *(_QWORD*)(v7 + 816) = 0;
    *(_QWORD*)(v7 + 808) = 0;
    *(_QWORD*)(v7 + 800) = 0;
    *(_QWORD*)v7 = GameData_212c3b8 + 16;
  }
  return v7;
}

__int64 fs_Manager_createFileSync_fs_GfxFile(__int64 a1)
{
  __int64 v1;
  _DWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  _DWORD* v8;
  __int64 v9;
  __int64 (***v10)();
  __int64* v11;
  __int64 v12;
  __int64 (**v13)();
  __int64 (**v14)();
  __int64 (**v15)();
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 (**v19)();
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v24;
  _QWORD v25[2];
  __int64 v26;
  unsigned int v27;
  _BYTE v28[128];
  __int64 (**v29)();
  __int64 (**v30)();
  __int64 v31;
  __int64 (***v32)();
  __int64 v33;
  __int64* v34;
  __int64 v35;

  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    return 0;
  }
  v1 = *(_QWORD*)(eft_g_effectSystem + 112);
  if (*(_QWORD*)(v1 + 24) == 0) {
    return 0;
  }
  if (*(_BYTE*)(a1 + 10) == 1) {
    v2 = *(_DWORD**)(a1 + 40);
    if (v2 != nullptr) {
      goto LABEL_41;
    }
    goto LABEL_46;
  }
  v3 = a1;
  snprintf(v28, 128, "Effect/Particle/%s.ptcl",
           *(const char**)(*(_QWORD*)(v1 + 40) + 8LL * *(int*)(a1 + 32)));
  v25[0] = v28;
  v4 = *snd_g_fileIndex_ptr[0];
  v25[1] = strlen(v28);
  v26 = GameData_2203100;
  v27 = 1;
  nn_os_LockMutex(v4 + 4456);
  v31 = v4;
  v32 = &v29;
  v35 = v26;
  v29 = GameData_1fd07d8;
  v30 = (__int64 (**)())&v35;
  v2 = (_DWORD*)GameRoutine_635a60(v4, v25, 1, 0, 0, &v29);
  v6 = v5;
  if (v32 == &v29) {
    v7 = 4;
  }
  else {
    if (v32 == nullptr) {
      goto LABEL_11;
    }
    v7 = 5;
  }
  ((void (*)(__int64 (***)(), __int64))(*v32)[v7])(v32, v5);
LABEL_11:
  if ((v6 & 1) != 0) {
    v8 = v2;
  }
  else {
    v8 = nullptr;
  }
  nn_os_UnlockMutex(v4 + 4456);
  if ((v6 & 1) == 0) {
    goto LABEL_40;
  }
  GameRoutine_632da0(&v29, v2, v27);
  GameRoutine_633980(v2, &v29);
  (*(void (**)(_DWORD*))(*(_QWORD*)v2 + 16LL))(v2);
  GameRoutine_632cd0(v4, v2);
  GameRoutine_631820_alt1(v2);
  nn_os_AcquireWriteLock(v2 + 174);
  v2[164] |= 0x40u;
  nn_os_ReleaseWriteLock(v2 + 174);
  v10 = v32;
  v32 = nullptr;
  if (v10 != nullptr) {
    v11 = v34;
    v35 = (__int64)v10;
    if (v34 == nullptr) {
    LABEL_47:
      GameRoutine_60a310(v11, v9);
    }
    (*(void (**)(__int64*, __int64*))(*v34 + 48))(v34, &v35);
  }
  if (v34 == &v33) {
    v12 = 32;
    goto LABEL_22;
  }
  if (v34 != nullptr) {
    v12 = 40;
  LABEL_22:
    (*(void (**)(__int64*, __int64))(*v34 + v12))(v34, v9);
  }
  v13 = v29;
  if (v29 == nullptr) {
    goto LABEL_39;
  }
  v14 = v30;
  if (v29 == v30) {
    goto LABEL_36;
  }
  v15 = v30;
  do {
    v18 = (__int64)*(v15 - 10);
    v15 -= 10;
    v17 = v18;
    *v15 = nullptr;
    if (v18 != 0) {
      v35 = v17;
      v11 = (__int64*)*(v14 - 4);
      if (v11 == nullptr) {
        goto LABEL_47;
      }
      (*(void (**)(__int64*, __int64*))(*v11 + 48))(v11, &v35);
    }
    v19 = (__int64 (**)()) * (v14 - 4);
    if (v14 - 8 == v19) {
      v16 = 32;
    LABEL_27:
      (*(void (**)(__int64 (**)(), __int64))((char*)*v19 + v16))(v19, v9);
      goto LABEL_28;
    }
    if (v19 != nullptr) {
      v16 = 40;
      goto LABEL_27;
    }
  LABEL_28:
    v14 = v15;
  } while (v15 != v13);
  v30 = v13;
  if (v29 != nullptr) {
  LABEL_36:
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v20);
  }
LABEL_39:
  v2 = v8;
LABEL_40:
  a1 = v3;
  *(_QWORD*)(v3 + 40) = v2;
  *(_BYTE*)(v3 + 10) = 1;
  if (v2 != nullptr) {
  LABEL_41:
    v21 = a1;
    nn_os_AcquireReadLock(v2 + 174);
    v22 = v2[164];
    nn_os_ReleaseReadLock(v2 + 174);
    if ((v22 & 8) == 0) {
      return 0;
    }
    v24 = *(_QWORD*)(v21 + 40);
    a1 = v21;
    if (v24 != 0 && *(_QWORD*)(v24 + 592) == 0) {
      GameRoutine_634d80(*(_QWORD*)(v24 + 8));
      a1 = v21;
      *(_QWORD*)(v21 + 40) = 0;
    }
  }
LABEL_46:
  *(_BYTE*)(a1 + 8) = 1;
  return 1;
}

_QWORD* fs_Manager_createFileAsync_fs_GfxFile_closure_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  int v15;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = (_QWORD*)v5;
  v8 = *v6;
  v9 = v6[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v15 = 0;
    v13 = v8;
    v14 = v9;
    v10 = **(_QWORD**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v11 = *(__int64**)(a1 + 8);
    v15 = 0;
    v13 = v8;
    v14 = 0;
    v10 = *v11;
  }
  GameRoutine_6313f0(v5, v2, v4, &v13, v10, &v15);
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
  }
  *v7 = fs_GfxFile_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  return v7;
}

_QWORD* fs_Manager_createFileSync_fs_GfxFile_closure_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = (_QWORD*)v5;
  v9 = 0;
  v10[0] = 0;
  v10[1] = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  *v7 = GameData_212c008[0] + 2;
  return v7;
}

__int64 fs_Manager_createFileSync_fs_PropertyFile_closure_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 864, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = v5;
  v9 = 0;
  v10[0] = 0;
  v10[1] = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  *(_QWORD*)(v7 + 824) = 0;
  *(_QWORD*)(v7 + 816) = 0;
  *(_QWORD*)(v7 + 808) = 0;
  *(_QWORD*)(v7 + 800) = 0;
  *(_BYTE*)(v7 + 842) = 0;
  *(_DWORD*)(v7 + 832) = 1065353216;
  *(_WORD*)(v7 + 840) = 12034;
  *(_QWORD*)v7 = fs_PropertyFile_vtable;
  return v7;
}

_QWORD* fs_Manager_createFileSync_fs_ResFile_closure_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64* v9;
  int v10;
  _QWORD v11[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 832, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = (_QWORD*)v5;
  v10 = 0;
  v11[0] = 0;
  v11[1] = 0;
  GameRoutine_6313f0(v5, v2, v4, v11, *v6, &v10);
  v9 = GameData_212c030[0];
  v7[100] = 0;
  v7[102] = 0;
  v7[103] = 0;
  *v7 = v9 + 2;
  v7[101] = v7 + 102;
  return v7;
}

_QWORD* fs_Manager_createFileSync_ui_Ui2dArcFile_closure_Invoke(__int64 a1,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = (_QWORD*)v5;
  v9 = 0;
  v10[0] = 0;
  v10[1] = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  *v7 = ui_Ui2dArcFile_vtable;
  return v7;
}

_QWORD* fs_Manager_createFileAsync_ui_Ui2dArcFile_closure_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  int v15;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = (_QWORD*)v5;
  v8 = *v6;
  v9 = v6[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v15 = 0;
    v13 = v8;
    v14 = v9;
    v10 = **(_QWORD**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v11 = *(__int64**)(a1 + 8);
    v15 = 0;
    v13 = v8;
    v14 = 0;
    v10 = *v11;
  }
  GameRoutine_6313f0(v5, v2, v4, &v13, v10, &v15);
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
  }
  *v7 = ui_Ui2dArcFile_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  return v7;
}

__int64 Manager_136a710(__int64 result, unsigned int a2)
{
  _QWORD* v2;

  v2 = (_QWORD*)(result + 376LL * a2);
  if (*v2 != 0) {
    result = GameRoutine_636000(*(_QWORD*)(*v2 + 8LL));
    if (v2[31] == 0) {
      ArcResourceAccessor_573580(v2 + 1, *(_QWORD*)(*v2 + 592LL), ".", 0, 0, 0);
      LayoutArchive_5725c0(v2 + 2, *game_g_frame_clock_ptr[0] + 568);
      return LayoutArchive_573340(v2 + 2, RenderTask_13697d0, 0);
    }
  }
  return result;
}

unsigned __int64 Manager_136aaf0(__int64* a1, unsigned int a2, __int64 a3)
{
  __int64 v5;
  unsigned __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  char v17;
  char v18[15];
  __int64 v19;

  if (a2 > 8 || ((1 << a2) & 0x181) == 0) {
    result = strlen(a3);
    if (result >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0_alt2();
    }
    v12 = result;
    if (result >= 0x17) {
      if ((result | 7) == 0x17) {
        v15 = 26;
      }
      else {
        v15 = (result | 7) + 1;
      }
      v16 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v15, 16, 0);
      a1[1] = v12;
      a1[2] = v16;
      v13 = a3;
      *a1 = v15 | 1;
      v14 = (char*)v16;
    }
    else {
      v13 = a3;
      *(_BYTE*)a1 = 2 * result;
      v14 = (char*)a1 + 1;
      if (result == 0) {
        goto LABEL_17;
      }
    }
    result = memcpy(v14, v13, v12);
  LABEL_17:
    v14[v12] = 0;
    return result;
  }
  v17 = 4;
  strcpy(v18, "^q");
  v5 = strlen(a3);
  result = GameRoutine_1a0a680(&v17, 0, a3, v5);
  v7 = *(_QWORD*)result;
  v8 = *(_QWORD*)(result + 8);
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *a1 = v7;
  a1[1] = v8;
  v9 = *(_QWORD*)(result + 16);
  *(_QWORD*)(result + 16) = 0;
  a1[2] = v9;
  if ((v17 & 1) != 0 && v19 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  return result;
}

__int64 Manager_136afb0(__int64 a1, unsigned int a2, _BYTE* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64* v7;
  __int64 v8;
  int v11;
  int v12;
  _BYTE* v13;
  __int64 v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18[2];
  _BYTE* v19;
  __int64 v20;
  __int64 v21;

  result = 0;
  if (a2 != 14 && a3 != nullptr) {
    if (*a3 != 0) {
      v20 = v3;
      v21 = v4;
      v7 = (__int64*)(a1 + 376LL * a2);
      v8 = *v7;
      if (*v7 != 0 &&
          (nn_os_AcquireReadLock(v8 + 696), v11 = *(_DWORD*)(v8 + 656),
           nn_os_ReleaseReadLock(v8 + 696), (v11 & 8) != 0) &&
          v7[31] != 0) {
        Manager_136aaf0(v18, a2, (__int64)a3);
        v12 = v18[0] & 1;
        if ((v18[0] & 1) != 0) {
          v13 = v19;
        }
        else {
          v13 = (char*)v18 + 1;
        }
        if (v13 != nullptr && *v13 != 0 && (v14 = *v7, *v7 != 0) &&
            (nn_os_AcquireReadLock(v14 + 696), v15 = *(_DWORD*)(v14 + 656),
             nn_os_ReleaseReadLock(v14 + 696), (v15 & 8) != 0) &&
            v7[31] != 0) {
          result = GameRoutine_573330(v7 + 2);
          if (result != 0) {
            result = GameRoutine_59e700(result, v13) != 0;
            v12 = v18[0] & 1;
          }
        }
        else {
          result = 0;
        }
        if (v12 != 0 && v19 != nullptr) {
          v16 = result;
          v17 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
          return v16;
        }
      }
      else {
        return 0;
      }
    }
    else {
      return 0;
    }
  }
  return result;
}

_QWORD* Manager_136b340(_QWORD* result, __int64 a2)
{
  __int64 v2;
  _QWORD* v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;

  v2 = *result;
  v4 = result;
  if (*result != 0) {
    nn_os_AcquireReadLock(v2 + 696);
    v5 = *(_DWORD*)(v2 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v2 + 696);
    if ((v5 & 8) != 0 && v4[31] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 2);
    }
  }
  v6 = v4[47];
  if (v6 != 0) {
    nn_os_AcquireReadLock(v6 + 696);
    v7 = *(_DWORD*)(v6 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v6 + 696);
    if ((v7 & 8) != 0 && v4[78] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 49);
    }
  }
  v8 = v4[94];
  if (v8 != 0) {
    nn_os_AcquireReadLock(v8 + 696);
    v9 = *(_DWORD*)(v8 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v8 + 696);
    if ((v9 & 8) != 0 && v4[125] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 96);
    }
  }
  v10 = v4[141];
  if (v10 != 0) {
    nn_os_AcquireReadLock(v10 + 696);
    v11 = *(_DWORD*)(v10 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v10 + 696);
    if ((v11 & 8) != 0 && v4[172] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 143);
    }
  }
  v12 = v4[188];
  if (v12 != 0) {
    nn_os_AcquireReadLock(v12 + 696);
    v13 = *(_DWORD*)(v12 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v12 + 696);
    if ((v13 & 8) != 0 && v4[219] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 190);
    }
  }
  v14 = v4[235];
  if (v14 != 0) {
    nn_os_AcquireReadLock(v14 + 696);
    v15 = *(_DWORD*)(v14 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v14 + 696);
    if ((v15 & 8) != 0 && v4[266] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 237);
    }
  }
  v16 = v4[282];
  if (v16 != 0) {
    nn_os_AcquireReadLock(v16 + 696);
    v17 = *(_DWORD*)(v16 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v16 + 696);
    if ((v17 & 8) != 0 && v4[313] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 284);
    }
  }
  v18 = v4[329];
  if (v18 != 0) {
    nn_os_AcquireReadLock(v18 + 696);
    v19 = *(_DWORD*)(v18 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v18 + 696);
    if ((v19 & 8) != 0 && v4[360] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 331);
    }
  }
  v20 = v4[376];
  if (v20 != 0) {
    nn_os_AcquireReadLock(v20 + 696);
    v21 = *(_DWORD*)(v20 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v20 + 696);
    if ((v21 & 8) != 0 && v4[407] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 378);
    }
  }
  v22 = v4[423];
  if (v22 != 0) {
    nn_os_AcquireReadLock(v22 + 696);
    v23 = *(_DWORD*)(v22 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v22 + 696);
    if ((v23 & 8) != 0 && v4[454] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 425);
    }
  }
  v24 = v4[470];
  if (v24 != 0) {
    nn_os_AcquireReadLock(v24 + 696);
    v25 = *(_DWORD*)(v24 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v24 + 696);
    if ((v25 & 8) != 0 && v4[501] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 472);
    }
  }
  v26 = v4[517];
  if (v26 != 0) {
    nn_os_AcquireReadLock(v26 + 696);
    v27 = *(_DWORD*)(v26 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v26 + 696);
    if ((v27 & 8) != 0 && v4[548] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 519);
    }
  }
  v28 = v4[564];
  if (v28 != 0) {
    nn_os_AcquireReadLock(v28 + 696);
    v29 = *(_DWORD*)(v28 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v28 + 696);
    if ((v29 & 8) != 0 && v4[595] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 566);
    }
  }
  v30 = v4[611];
  if (v30 != 0) {
    nn_os_AcquireReadLock(v30 + 696);
    v31 = *(_DWORD*)(v30 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v30 + 696);
    if ((v31 & 8) != 0 && v4[642] != 0) {
      return (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 613);
    }
  }
  return result;
}

_QWORD* fs_Manager_createFileSync_ui_IconManager_Ui2dIconArcFile_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = (_QWORD*)v5;
  v9 = 0;
  v10[0] = 0;
  v10[1] = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  *v7 = ui_IconManager_Ui2dIconArcFile_vtable;
  return v7;
}

_QWORD*

fs_Manager_createFileAsync_ui_IconManager_Ui2dIconArcFile_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  int v15;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = (_QWORD*)v5;
  v8 = *v6;
  v9 = v6[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v15 = 0;
    v10 = **(_QWORD**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v13 = v8;
    v14 = v9;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v11 = *(__int64**)(a1 + 8);
    v15 = 0;
    v13 = v8;
    v14 = 0;
    v10 = *v11;
  }
  GameRoutine_6313f0_alt1(v5, v2, v4, &v13, v10, &v15);
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
  }
  *v7 = ui_Ui2dArcFile_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
    *v7 = ui_IconManager_Ui2dIconArcFile_vtable;
    std___1___shared_weak_count___release_weak(v9);
  }
  else {
    *v7 = ui_IconManager_Ui2dIconArcFile_vtable;
  }
  return v7;
}

_QWORD* fs_Manager_createFileAsync_fs_BntxFile_closure_CloneInto(_QWORD* result,
                                                                 _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  *a2 = GameData_2032be0;
  v2 = result[1];
  v3 = result[3];
  a2[2] = result[2];
  a2[3] = v3;
  a2[1] = v2;
  return result;
}

_QWORD* fs_Manager_createFileAsync_fs_BntxFile_closure_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  int v15;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = (_QWORD*)v5;
  v8 = *v6;
  v9 = v6[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v10 = **(_QWORD**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v15 = 0;
    v13 = v8;
    v14 = v9;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v11 = *(__int64**)(a1 + 8);
    v15 = 0;
    v13 = v8;
    v14 = 0;
    v10 = *v11;
  }
  GameRoutine_6313f0(v5, v2, v4, &v13, v10, &v15);
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
  }
  *v7 = fs_GfxFile_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
    *v7 = GameData_212c000[0] + 2;
    std___1___shared_weak_count___release_weak(v9);
  }
  else {
    *v7 = fs_BntxFile_vtable;
  }
  return v7;
}

_QWORD* fs_Manager_createFileAsync_fs_ShaderFile_closure_Invoke(__int64 a1,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  int v15;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = (_QWORD*)v5;
  v8 = *v6;
  v9 = v6[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v15 = 0;
    v10 = **(_QWORD**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v13 = v8;
    v14 = v9;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v11 = *(__int64**)(a1 + 8);
    v15 = 0;
    v13 = v8;
    v14 = 0;
    v10 = *v11;
  }
  GameRoutine_6313f0(v5, v2, v4, &v13, v10, &v15);
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
  }
  *v7 = fs_GfxFile_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
    *v7 = fs_ShaderFile_vtable;
    std___1___shared_weak_count___release_weak(v9);
  }
  else {
    *v7 = fs_ShaderFile_vtable;
  }
  return v7;
}

_QWORD* fs_Manager_createFileAsync_fs_ResFile_closure_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v14;
  __int64 v15;
  int v16;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 832, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = (_QWORD*)v5;
  v8 = *v6;
  v9 = v6[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v16 = 0;
    v10 = **(_QWORD**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v14 = v8;
    v15 = v9;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v11 = *(__int64**)(a1 + 8);
    v16 = 0;
    v14 = v8;
    v15 = 0;
    v10 = *v11;
  }
  GameRoutine_6313f0(v5, v2, v4, &v14, v10, &v16);
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak(v15);
  }
  *v7 = fs_GfxFile_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
    v12 = GameData_212c030[0];
    v7[100] = 0;
    v7[102] = 0;
    v7[103] = 0;
    *v7 = v12 + 2;
    v7[101] = v7 + 102;
    std___1___shared_weak_count___release_weak(v9);
  }
  else {
    v7[100] = 0;
    v7[102] = 0;
    v7[103] = 0;
    *v7 = fs_ResFile_vtable;
    v7[101] = v7 + 102;
  }
  return v7;
}

_QWORD* fs_Manager_createFileSync_fs_ShaderFile_closure_Invoke(__int64 a1,
                                                               __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = (_QWORD*)v5;
  v9 = 0;
  v10[0] = 0;
  v10[1] = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  *v7 = fs_ShaderFile_vtable;
  return v7;
}

__int64

fs_Manager_createFileSync_fs_BntxFile_closure_DeletingDestructor(__int64 a1)
{
  __int64 v1;

  v1 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v1, a1);
}

_QWORD* fs_Manager_createFileSync_fs_BntxFile_closure_Clone(__int64 a1)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 24,
                                                   16, 0);
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a1 + 16);
  *result = GameData_20da560;
  result[1] = v3;
  result[2] = v4;
  return result;
}

_QWORD* fs_Manager_createFileSync_fs_BntxFile_closure_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = (_QWORD*)v5;
  v9 = 0;
  v10[0] = 0;
  v10[1] = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  *v7 = GameData_212c000[0] + 2;
  return v7;
}

__int64 fs_Manager_createFileAsync_fs_PropertyFile_closure_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD v13[2];
  int v14;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 864, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = v5;
  v8 = *v6;
  v9 = v6[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v14 = 0;
    v13[0] = v8;
    v13[1] = v9;
    v10 = **(_QWORD**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_6313f0(v5, v2, v4, v13, v10, &v14);
    std___1___shared_weak_count___release_weak(v9);
  }
  else {
    v11 = *(_QWORD**)(a1 + 8);
    v14 = 0;
    v13[0] = v8;
    v13[1] = 0;
    GameRoutine_6313f0(v5, v2, v4, v13, *v11, &v14);
  }
  *(_QWORD*)(v7 + 824) = 0;
  *(_QWORD*)(v7 + 816) = 0;
  *(_QWORD*)(v7 + 808) = 0;
  *(_QWORD*)(v7 + 800) = 0;
  *(_BYTE*)(v7 + 842) = 0;
  *(_DWORD*)(v7 + 832) = 1065353216;
  *(_WORD*)(v7 + 840) = 12034;
  *(_QWORD*)v7 = fs_PropertyFile_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  return v7;
}

#pragma GCC visibility pop
