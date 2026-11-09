#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ad3360(_QWORD, _QWORD);
__int64 GameRoutine_b367c0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_oe_SetCpuBoostMode(_QWORD);
__int64 nn_os_ClearEvent(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern __int64 (*scene_scenes_A_Boot_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_g_frame_clock;
extern __int64 game_g_game_setting;
extern __int64 snd_g_fileIndex;
extern __int64* as_g_script_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
_QWORD* A_Boot_Destructor(_QWORD* result);
__int64 A_Boot_DeletingDestructor(_QWORD* a1);
__int64 A_Boot_Unknown2(__int64 a1);

_QWORD* A_Boot_Destructor(_QWORD* result)
{
  *result = scene_scenes_A_Boot_vtable;
  *(_BYTE*)(game_g_game_setting + 976) = 0;
  return result;
}

__int64 A_Boot_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;

  *a1 = scene_scenes_A_Boot_vtable;
  *(_BYTE*)(game_g_game_setting + 976) = 0;
  v1 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v1, a1);
}

__int64 A_Boot_Unknown2(__int64 a1)
{
  int v1;
  unsigned int v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;

  v1 = *(_DWORD*)(a1 + 100);
  v2 = 1;
  if (v1 > 2) {
    if (v1 == 3) {
      v11 = 4;
    }
    else {
      if (v1 != 4) {
        if (v1 == 5) {
          v2 = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 88) + 136LL) = "Game";
          *(_BYTE*)(*(_QWORD*)(a1 + 88) + 96LL) = 1;
        }
        return v2;
      }
      v11 = 5;
    }
    goto LABEL_27;
  }
  switch (v1) {
  case 0:
    v6 = as_g_script_manager_ptr;
    v7 = *as_g_script_manager_ptr;
    if (*(_BYTE*)(*as_g_script_manager_ptr + 4785) == 1) {
      v8 = a1;
      nn_os_LockMutex(v7 + 4792);
      a1 = v8;
    }
    v9 = *(_QWORD*)(v7 + 16);
    if (v9 != 0) {
      while (*(int*)(v9 + 312) > 0) {
        v9 = *(_QWORD*)(v9 + 48);
        if (v9 == 0) {
          goto LABEL_17;
        }
      }
      if ((*(_BYTE*)(v7 + 4785) & 1) != 0) {
        nn_os_UnlockMutex(v7 + 4792);
      }
      return 1;
    }
  LABEL_17:
    if (*(_BYTE*)(v7 + 4785) == 1) {
      v10 = a1;
      nn_os_UnlockMutex(v7 + 4792);
      a1 = v10;
    }
    if (*(_BYTE*)(*v6 + 4785) == 1) {
      if ((*(_BYTE*)(*v6 + 4784) & 1) != 0) {
        return 1;
      }
      *(_BYTE*)(*v6 + 4785) = 0;
    }
    v11 = *(_DWORD*)(a1 + 100) + 1;
  LABEL_27:
    *(_DWORD*)(a1 + 100) = v11;
    return 1;
  case 1:
    if (*(_QWORD*)(game_g_frame_clock + 16608) == 0) {
      v11 = 2;
      goto LABEL_27;
    }
    return 1;
  case 2:
    v3 = a1;
    v4 = game_g_frame_clock_ptr[0];
    GameRoutine_ad3360(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 13408), 0);
    GameRoutine_b367c0(*(_QWORD*)(*v4 + 13424));
    nn_oe_SetCpuBoostMode(0);
    v5 = snd_g_fileIndex;
    if (*(_DWORD*)(snd_g_fileIndex + 4736) != 0) {
      *(_DWORD*)(snd_g_fileIndex + 4736) = 0;
      nn_os_ClearEvent(v5 + 4144);
    }
    ++*(_DWORD*)(v3 + 100);
    return 1;
  default:
    break;
  }
  return v2;
}

#pragma GCC visibility pop
