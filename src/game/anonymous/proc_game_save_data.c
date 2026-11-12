#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_8768e0(_QWORD* result);
__int64 GameRoutine_18d3b00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18d3e20(_QWORD);
__int64 GameRoutine_18d4020(_QWORD, _QWORD);
__int64 GameRoutine_18d4350(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_66aae0(_QWORD);
__int64 GameRoutine_715780(_QWORD, _QWORD);
__int64 GameRoutine_877520(__int64, unsigned __int8*);
__int64 GameRoutine_8a9d70(_QWORD);
__int64 Stream_6604e0(_QWORD, _QWORD);
__int64 Stream_DeletingDestructor(_QWORD, _QWORD);
__int64 Stream_Destructor(_QWORD, _QWORD);
__int64 TimelineFile_890160(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_GameSaveConst_Header_Commit(__int64);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_oe_GetProgramTotalActiveTime(_QWORD);
__int64 nn_os_ConvertToTick(_QWORD);
__int64 strlen(_QWORD);
bool GameRoutine_8759f0(unsigned __int8*, __int64);
bool GameRoutine_8789c0(_QWORD*);
extern _UNKNOWN GameData_1abf89f;
extern __int64 (*GameData_1fa5d80[])();
extern __int64 (*GameData_1fa5e10[])();
extern __int64 (*GameData_1fa5e90[])();
extern __int64 (*GameData_1fa5f00[])();
extern __int64 (*GameData_1fa5fa0[])();
extern __int64 GameData_21d8800;
extern __int64 GameData_21d8808;
extern __int64 GameData_21d8830;
extern __int64 GameData_21d8838;
extern __int64 GameData_21eea58;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern int GameData_21d87f8;
extern int GameData_21d8828;
int* GameRoutine_8767a0(int* result);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 game_anonymous_ProcGameSaveData_SaveTask(__int64 result);
__int64 game_anonymous_ProcGameSaveData_DeleteTask(__int64 result, __int64 a2);
__int64 game_anonymous_ProcGameSaveData_DisposeTask(__int64 result, __int64 a2);
__int64 game_anonymous_ProcGameSaveData_SkippedTask(__int64 result, __int64 a2);
__int64 ProcGameSaveData_87b030(__int64 result);
__int64 ProcGameSaveData_87b460(__int64 result);
__int64
ProcGameSaveData_87b6b0_alt2(__int64 a1,
                             __int64 a2) __asm__("ProcGameSaveData_87b6b0");
__int64 game_anonymous_ProcGameSaveData_SaveTask_closure_Invoke(__int64 a1,
                                                                __int64 a2);
__int64 game_anonymous_ProcGameSaveData_StatusTask_closure_Clone(__int64 a1);
__int64
game_anonymous_ProcGameSaveData_StatusTask_closure_CloneInto(__int64 result,
                                                             __int64 a2);
_QWORD* GameRoutine_658c00(_QWORD* result);
__int64 GameRoutine_18d3a00(__int64);
__int64 GameRoutine_18d4880(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_ProcInst_Unregister(__int64 result);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_YieldThread(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (**game_anonymous_MountBind_vtable_ptr)();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcGameSaveData_vtable[])();
extern __int64 GameData_21f61c0[];
extern __int64 GameData_2241720;
extern __int64 GameData_2265e90;
extern int GameData_21668e0;
extern int GameData_21f61c8;
__int64 game_anonymous_ProcGameSaveData_StatusTask(__int64 result, _QWORD* a2,
                                                   int a3);
_QWORD* ProcGameSaveData_Destructor_alt1(__int64 a1) __asm__(
    "ProcGameSaveData_Destructor");
__int64 GameRoutine_18d3e20_alt1(__int64) __asm__("GameRoutine_18d3e20");
__int64 GameRoutine_18d4020_alt1(__int64,
                                 __int64) __asm__("GameRoutine_18d4020");
__int64 GameRoutine_18d4350_alt1(__int64, __int64, __int64,
                                 __int64) __asm__("GameRoutine_18d4350");
__int64 GameRoutine_8a9d70_alt1(__int64 result) __asm__("GameRoutine_8a9d70");
__int64 Stream_Destructor_alt1(__int64, _DWORD*) __asm__("Stream_Destructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
extern __int64 GameData_21f61c0_alt1 __asm__("GameData_21f61c0");
void GameHr_6604e0(__int64, __int64);
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void ProcGameSaveData_87b6b0_alt1(__int64, const char*) __asm__(
    "ProcGameSaveData_87b6b0");
void Stream_DeletingDestructor_alt1(__int64,
                                    int) __asm__("Stream_DeletingDestructor");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void nn_os_YieldThread_alt1() __asm__("nn_os_YieldThread");
void ProcGameSaveData_Destructor(__int64 a1);
__int64 GameRoutine_66aae0_alt1() __asm__("GameRoutine_66aae0");
__int64 GameRoutine_715780_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_715780");
__int64 TimelineFile_890160_alt1(const char*) __asm__("TimelineFile_890160");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_oe_GetProgramTotalActiveTime_alt1() __asm__(
    "nn_oe_GetProgramTotalActiveTime");
bool GameHr_8789c0(const char**);
extern char GameData_1abf89f_alt1[] __asm__("GameData_1abf89f");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void save_Task_Open(__int64, __int64*, char);
void ProcGameSaveData_87b6b0(__int64 a1, const char* a2);

__int64 game_anonymous_ProcGameSaveData_SaveTask(__int64 result)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  int v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BYTE* v19;
  _BYTE* v20;
  __int64 v21;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;

  v1 = *(unsigned __int8**)(result + 160);
  v2 = *(unsigned __int8**)(result + 168);
  if (v1 != v2) {
    while (1) {
      v3 = *v1;
      v1 += 32;
      if (v3 == 1) {
        break;
      }
      if (v1 == v2) {
        return result;
      }
    }
    v4 = result;
    LODWORD(v22_.v22[0]) = 0;
    v5 = GameData_21eea58;
    v6 = v22_.v22;
    v7 = *(_DWORD*)(game_GameModeData_instance_ + 2716);
    v8 = GameData_21eea58 + 464;
    if ((unsigned int)(v7 + 1) < 0x5F5E0FF) {
      v9 = v7 + 1;
    }
    else {
      v9 = 99999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 2716) = v9;
    Stream_Destructor_alt1(v8, v22_.v22);
    GameRoutine_8a9d70_alt1(v5 + 464);
    Stream_DeletingDestructor_alt1(v5 + 464, 0);
    v10 = GameData_21eea58;
    game_GameSaveConst_Header_Commit(GameData_21eea58 + 96);
    GameRoutine_8759f0((unsigned __int8*)(v10 + 96), v10 + 208);
    GameRoutine_877520(v10 + 336, (unsigned __int8*)(v10 + 96));
    GameHr_6604e0(GameData_21eea58 + 336, GameData_21eea58 + 336);
    v11 = GameData_21eea58;
    v12 = game_util_Format_alt1("%s/%s", "000", "Global");
    ProcGameSaveData_87b6b0_alt1(v4, v12);
    GameRoutine_18d4350_alt1(*(_QWORD*)(v4 + 304), v11 + 484, *(int*)(v4 + 320),
                             4);
    v13 = *(int*)(v4 + 320);
    v14 = *(_QWORD*)(v4 + 304);
    *(_DWORD*)(v4 + 320) = v13 + 4;
    v15 = *(_QWORD*)(v11 + 472);
    v16 = *(int*)(v11 + 484);
    GameRoutine_18d4350_alt1(v14, v15, v13 + 4, v16);
    v17 = *(int*)(v4 + 320);
    v18 = *(_QWORD*)(v4 + 304);
    *(_DWORD*)(v4 + 320) = v17 + v16;
    GameRoutine_18d4020_alt1(v18, v17 + v16);
    result = GameRoutine_18d3e20_alt1(*(_QWORD*)(v4 + 304));
    v22_.v23 = v22_.v22;
    v22_.v22[0] = GameData_1fa5d80;
    v22_.v22[1] = v4;
    v20 = *(_BYTE**)(v4 + 160);
    v19 = *(_BYTE**)(v4 + 168);
    if (v20 == v19) {
      goto LABEL_17;
    }
    do {
      if (*v20 == 1) {
        if (v22_.v23 == nullptr) {
          GameRoutine_60a310_alt1();
        }
        result =
            (*(__int64 (**)(_QWORD*, _BYTE*))(*v22_.v23 + 48LL))(v22_.v23, v20);
      }
      v20 += 32;
    } while (v20 != v19);
    v6 = v22_.v23;
    if (v22_.v23 == v22_.v22) {
    LABEL_17:
      v21 = 32;
    }
    else {
      if (v22_.v23 == nullptr) {
        return result;
      }
      v21 = 40;
    }
    return (*(__int64 (**)(_QWORD*))(*v6 + v21))(v6);
  }
  return result;
}

__int64 game_anonymous_ProcGameSaveData_DeleteTask(__int64 result, __int64 a2)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int8* v4;
  int v5;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;

  v2 = *(unsigned __int8**)(result + 160);
  v3 = *(unsigned __int8**)(result + 168);
  if (v2 != v3) {
    v4 = *(unsigned __int8**)(result + 160);
    while (1) {
      v5 = *v4;
      v4 += 32;
      if (v5 == 6) {
        break;
      }
      if (v4 == v3) {
        return result;
      }
    }
    v7[0] = GameData_1fa5e10;
    v7[1] = result;
    v8 = v7;
    do {
      if (*v2 == 6) {
        if (v8 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        (*(void (**)(_QWORD*, unsigned __int8*))(*v8 + 48LL))(v8, v2);
      }
      v2 += 32;
    } while (v2 != v3);
    result = (__int64)v8;
    if (v8 == v7) {
      v6 = 32;
    }
    else {
      if (v8 == nullptr) {
        return result;
      }
      v6 = 40;
    }
    return (*(__int64 (**)(_QWORD*, __int64))(*v8 + v6))(v8, a2);
  }
  return result;
}

__int64 game_anonymous_ProcGameSaveData_DisposeTask(__int64 result, __int64 a2)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int8* v4;
  int v5;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;

  v2 = *(unsigned __int8**)(result + 160);
  v3 = *(unsigned __int8**)(result + 168);
  if (v2 != v3) {
    v4 = *(unsigned __int8**)(result + 160);
    while (1) {
      v5 = *v4;
      v4 += 32;
      if (v5 == 7) {
        break;
      }
      if (v4 == v3) {
        return result;
      }
    }
    v7[0] = GameData_1fa5e90;
    v7[1] = result;
    v8 = v7;
    do {
      if (*v2 == 7) {
        if (v8 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        (*(void (**)(_QWORD*, unsigned __int8*))(*v8 + 48LL))(v8, v2);
      }
      v2 += 32;
    } while (v2 != v3);
    result = (__int64)v8;
    if (v8 == v7) {
      v6 = 32;
    }
    else {
      if (v8 == nullptr) {
        return result;
      }
      v6 = 40;
    }
    return (*(__int64 (**)(_QWORD*, __int64))(*v8 + v6))(v8, a2);
  }
  return result;
}

__int64 game_anonymous_ProcGameSaveData_SkippedTask(__int64 result, __int64 a2)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int8* v4;
  int v5;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;

  v2 = *(unsigned __int8**)(result + 160);
  v3 = *(unsigned __int8**)(result + 168);
  if (v2 != v3) {
    v4 = *(unsigned __int8**)(result + 160);
    while (1) {
      v5 = *v4;
      v4 += 32;
      if (v5 == 8) {
        break;
      }
      if (v4 == v3) {
        return result;
      }
    }
    v7[0] = GameData_1fa5fa0;
    v7[1] = result;
    v8 = v7;
    do {
      if (*v2 == 8) {
        if (v8 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        (*(void (**)(_QWORD*, unsigned __int8*))(*v8 + 48LL))(v8, v2);
      }
      v2 += 32;
    } while (v2 != v3);
    result = (__int64)v8;
    if (v8 == v7) {
      v6 = 32;
    }
    else {
      if (v8 == nullptr) {
        return result;
      }
      v6 = 40;
    }
    return (*(__int64 (**)(_QWORD*, __int64))(*v8 + v6))(v8, a2);
  }
  return result;
}

__int64 ProcGameSaveData_87b030(__int64 result)
{
  unsigned int v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;

  v1 = atomic_load((unsigned int*)(*(_QWORD*)(result + 304) + 804LL));
  if (v1 == 0) {
    v2 = *(unsigned __int8**)(result + 16);
    if (v2 != nullptr) {
      v3 = *v2;
      v4 = v3 > 0x10;
      v5 = (1 << v3) & 0x1CE00;
      if (!v4 && v5 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 ProcGameSaveData_87b460(__int64 result)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  __int64 v3;
  unsigned __int64 v4;
  const char* v5;
  const char* v6;
  const char* v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  const char* v11;
  int v12;
  __int64 v13;
  char v14;
  int v15;
  bool v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  int v20;
  char v21;
  __int64 ProgramTotalActiveTimeEv;
  __int64 v23;
  __int64 v24;
  const char* v25[2];

  v1 = *(unsigned __int8**)(result + 160);
  v2 = *(unsigned __int8**)(result + 168);
  if (v1 != v2) {
    v3 = *(_QWORD*)(result + 160);
    while (*(_BYTE*)v3 != 3) {
      v3 += 32;
      if ((unsigned __int8*)v3 == v2) {
        goto LABEL_10;
      }
    }
    v4 = *(unsigned __int8*)(v3 + 8);
    v5 = (const char*)(v3 + 9);
    v8 = v3 + 16;
    v6 = *(const char**)(v3 + 16);
    v7 = *(const char**)(v8 + 8);
    v9 = result;
    v10 = (v4 & 1) == 0;
    v11 = (const char*)(v4 >> 1);
    if (!v10) {
      v5 = v7;
      v11 = v6;
    }
    v25[0] = v5;
    v25[1] = v11;
    result = GameHr_8789c0(v25);
    v1 = *(unsigned __int8**)(v9 + 160);
    v2 = *(unsigned __int8**)(v9 + 168);
  }
LABEL_10:
  while (v1 != v2) {
    v12 = *v1;
    v1 += 32;
    if (v12 == 4) {
      result = TimelineFile_890160_alt1(GameData_1abf89f_alt1);
      if (result != 0) {
        v13 = result;
        if (game_GameModeData_instance_ != 0) {
          v14 = *(_BYTE*)(game_GameModeData_instance_ + 14);
          v15 = *(_DWORD*)(game_GameModeData_instance_ + 8);
          v16 = *(_BYTE*)(game_GameModeData_instance_ + 15) == 9;
        }
        else {
          v14 = 0;
          v16 = false;
          v15 = 0;
        }
        v17 = GameData_21d87f8;
        v18 = GameData_21d8828;
        GameRoutine_8767a0((int*)(GameData_21eea58 + 592));
        GameRoutine_66aae0_alt1();
        if (game_GameModeData_instance_ != 0) {
          GameRoutine_715780_alt1(game_GameModeData_instance_, v13);
        }
        GameRoutine_8768e0((_QWORD*)(GameData_21eea58 + 592));
        v19 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v20 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
          *(_DWORD*)(game_GameModeData_instance_ + 8) = v15;
          v10 = v20 == 9;
          v21 = !v16;
          if (!v10) {
            v21 = 1;
          }
          if ((v21 & 1) == 0) {
            *(_BYTE*)(v19 + 14) = v14;
          }
        }
        ProgramTotalActiveTimeEv = nn_oe_GetProgramTotalActiveTime_alt1();
        v23 = nn_os_ConvertToTick(ProgramTotalActiveTimeEv);
        GameData_21d87f8 = v17;
        GameData_21d8800 = v23;
        GameData_21d8808 = 0;
        GameData_21d8808 = nn_os_ConvertToTick(
            1000000000LL *
            (HIBYTE(v17) + 3600 * (unsigned __int16)v17 + 60 * BYTE2(v17)));
        v24 = nn_oe_GetProgramTotalActiveTime_alt1();
        GameData_21d8830 = nn_os_ConvertToTick(v24);
        GameData_21d8838 = 0;
        GameData_21d8828 = v18;
        result = nn_os_ConvertToTick(
            1000000000LL *
            (HIBYTE(v18) + 3600 * (unsigned __int16)v18 + 60 * BYTE2(v18)));
        GameData_21d8838 = result;
      }
      return result;
    }
  }
  return result;
}

void ProcGameSaveData_87b6b0(__int64 a1, const char* a2)
{
  __int64 v2;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v10[2];
    char* v11;
  } v10_;

  v2 = *(_QWORD*)(a1 + 304);
  v5 = strlen_alt1(a2);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v8, 16, 0);
    v10_.v10[1] = v6;
    v10_.v11 = v7;
    v10_.v10[0] = v8 | 1;
  }
  else {
    LOBYTE(v10_.v10[0]) = 2 * v5;
    v7 = (char*)v10_.v10 + 1;
    if (v5 == 0) {
      goto LABEL_10;
    }
  }
  memcpy_alt1((__int64)v7, (__int64)a2, v6);
LABEL_10:
  v7[v6] = 0;
  save_Task_Open(v2, v10_.v10, 1);
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v10_.v11);
  }
  *(_DWORD*)(a1 + 320) = 0;
}

__int64 game_anonymous_ProcGameSaveData_SaveTask_closure_Invoke(__int64 a1,
                                                                __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = GameData_21eea58;
  if ((*(_BYTE*)(a2 + 8) & 1) != 0) {
    v4 = *(_QWORD*)(a2 + 24);
  }
  else {
    v4 = a2 + 9;
  }
  ProcGameSaveData_87b6b0_alt2(v2, v4);
  GameRoutine_18d4350(*(_QWORD*)(v2 + 304), *(_QWORD*)(v3 + 216),
                      *(int*)(v2 + 320), 256);
  v5 = *(int*)(v2 + 320);
  v6 = *(_QWORD*)(v2 + 304);
  *(_DWORD*)(v2 + 320) = v5 + 256;
  GameRoutine_18d4350(v6, v3 + 356, v5 + 256, 4);
  v7 = *(int*)(v2 + 320);
  v8 = *(_QWORD*)(v2 + 304);
  *(_DWORD*)(v2 + 320) = v7 + 4;
  v9 = *(_QWORD*)(v3 + 344);
  v10 = *(int*)(v3 + 356);
  GameRoutine_18d4350(v8, v9, v7 + 4, v10);
  v11 = *(int*)(v2 + 320);
  v12 = *(_QWORD*)(v2 + 304);
  *(_DWORD*)(v2 + 320) = v11 + v10;
  GameRoutine_18d4020(v12, v11 + v10);
  return GameRoutine_18d3e20(*(_QWORD*)(v2 + 304));
}

__int64 game_anonymous_ProcGameSaveData_StatusTask(__int64 result, _QWORD* a2,
                                                   int a3)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  int v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    unsigned __int64 v18;
    __int64 v19;
  } v17_;
  struct {
    _BYTE v20[32];
    _BYTE* v21;
  } v20_;
  struct {
    __int64 v22;
    unsigned __int64 v23;
    __int64 v24;
  } v22_;

  v4 = result;
  if ((a2[1] & 1) != 0) {
    result = fw_text_String_CopyTerminated_alt1(&v22_.v22, a2[3], a2[2]);
  }
  else {
    v5 = a2[2];
    v6 = a2[3];
    v22_.v22 = a2[1];
    v22_.v23 = v5;
    v22_.v24 = v6;
  }
  v7 = v22_.v22 & 1;
  v8 = (unsigned __int64)(unsigned __int8)v22_.v22 >> 1;
  if (v7 != 0) {
    v8 = v22_.v23;
  }
  if (v8 != 0) {
    v9 = *(_QWORD*)(v4 + 304);
    if (v7 != 0) {
      fw_text_String_CopyTerminated_alt1(&v17_.v17, v22_.v24, v22_.v23);
    }
    else {
      v17_.v17 = v22_.v22;
      v17_.v18 = v22_.v23;
      v17_.v19 = v22_.v24;
    }
    v10 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 40, 16,
                                              0);
    *(_DWORD*)(v10 + 8) = a3;
    v20_.v21 = (_BYTE*)v10;
    *(_QWORD*)v10 = GameData_1fa5f00;
    v11 = v17_.v17;
    v12 = v17_.v18;
    v17_.v17 = 0;
    v17_.v18 = 0;
    *(_QWORD*)(v10 + 16) = v11;
    *(_QWORD*)(v10 + 24) = v12;
    v13 = v17_.v19;
    v17_.v19 = 0;
    *(_QWORD*)(v10 + 32) = v13;
    GameRoutine_18d4880(v9, (__int64)v20_.v20);
    result = (__int64)v20_.v21;
    if (v20_.v21 == v20_.v20) {
      v14 = 32;
    }
    else {
      if (v20_.v21 == nullptr) {
        goto LABEL_15;
      }
      v14 = 40;
    }
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)v20_.v21 + v14))((__int64)v20_.v21);
  LABEL_15:
    if ((v17_.v17 & 1) != 0 && v17_.v19 != 0) {
      v15 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v15 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          fw_memory_g_heap_manager + v15, v17_.v19);
    }
    v7 = v22_.v22 & 1;
  }
  if (v7 != 0 && v22_.v24 != 0) {
    v16 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v16,
                                              v22_.v24);
  }
  return result;
}

__int64 game_anonymous_ProcGameSaveData_StatusTask_closure_Clone(__int64 a1)
{
  __int64 result;
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  *(_QWORD*)result = GameData_1fa5f00;
  v3 = *(_BYTE*)(a1 + 16);
  *(_DWORD*)(result + 8) = *(_DWORD*)(a1 + 8);
  if ((v3 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 24);
    v6 = *(_QWORD*)(a1 + 32);
    v8 = result;
    fw_text_String_CopyTerminated(result + 16, v6, v7);
    return v8;
  }
  else {
    v4 = *(_QWORD*)(a1 + 24);
    v5 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(result + 16) = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(result + 24) = v4;
    *(_QWORD*)(result + 32) = v5;
  }
  return result;
}

__int64

game_anonymous_ProcGameSaveData_StatusTask_closure_CloneInto(__int64 result,
                                                             __int64 a2)
{
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a2 = GameData_1fa5f00;
  *(_DWORD*)(a2 + 8) = *(_DWORD*)(result + 8);
  if ((*(_BYTE*)(result + 16) & 1) != 0) {
    return fw_text_String_CopyTerminated(a2 + 16, *(_QWORD*)(result + 32),
                                         *(_QWORD*)(result + 24));
  }
  v2 = *(_QWORD*)(result + 16);
  v3 = *(_QWORD*)(result + 32);
  *(_QWORD*)(a2 + 24) = *(_QWORD*)(result + 24);
  *(_QWORD*)(a2 + 32) = v3;
  *(_QWORD*)(a2 + 16) = v2;
  return result;
}

void ProcGameSaveData_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  int v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  unsigned int* v9;
  unsigned int v10;
  unsigned int v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = *(_QWORD*)(a1 + 312);
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)a1 = game_anonymous_ProcGameSaveData_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  if (--GameData_21668e0 == 0) {
    (*(void (**)(__int64))((char*)((_UNKNOWN**)0x8LL) +
                           (_QWORD)game_anonymous_MountBind_vtable_ptr))(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v8 = (_QWORD*)GameData_2265e90;
    GameRoutine_18d3a00(*(_QWORD*)GameData_2265e90);
    v9 = (unsigned int*)(*v8 + 804LL);
    v10 = atomic_load(v9);
    if (v10 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v11 = atomic_load(v9);
      } while (v11 != 0);
    }
  }
  v3 = GameData_2241720;
  if (GameData_2241720 != 0) {
    v4 = *(_DWORD*)(GameData_2241720 + 1736) - 1;
    *(_DWORD*)(GameData_2241720 + 1736) = v4;
    if (v4 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v3 + 1728) + 8LL))(v3 + 1728);
    }
  }
  if (--GameData_21f61c8 == 0) {
    (*(void (**)(__int64))(GameData_21f61c0_alt1 + 8))(
        (__int64)&GameData_21f61c0_alt1);
  }
  v5 = *(_QWORD*)(a1 + 312);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v6 = *(_QWORD**)(a1 + 272);
  if (v6 == (_QWORD*)(a1 + 240)) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_21;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_21:
  v12 = *(_QWORD**)(a1 + 224);
  if (v12 == (_QWORD*)(a1 + 192)) {
    v13 = 32;
    goto LABEL_25;
  }
  if (v12 != nullptr) {
    v13 = 40;
  LABEL_25:
    (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
  }
  v14 = *(_QWORD*)(a1 + 160);
  if (v14 != 0) {
    v15 = *(_QWORD*)(a1 + 168);
    v16 = fw_memory_g_heap_manager_ptr;
    if (v14 == v15) {
      goto LABEL_37;
    }
    do {
      if ((*(_BYTE*)(v15 - 24) & 1) != 0) {
        v17 = *(_QWORD*)(v15 - 8);
        if (v17 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
            v18 = 128;
          }
          else {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v16 + v18, v17);
        }
      }
      v15 -= 32;
    } while (v15 != v14);
    v19 = *(_QWORD*)(a1 + 160);
    *(_QWORD*)(a1 + 168) = v14;
    v14 = v19;
    if (v19 != 0) {
    LABEL_37:
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v16 + v20, v14);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

#pragma GCC visibility pop
