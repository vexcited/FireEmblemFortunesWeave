#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11945e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 MapInfo_825040(_QWORD, _QWORD);
__int64 MapInfo_825790(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fd3278[3])();
extern __int64 (*decltype_c81af0_ptr[6])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_evt_EventManagerBase_ProcRunEventBase_vtable)();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d210[7];
extern __int64 GameData_212d218[6];
extern __int64 GameData_21cd128;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130638[4];
extern char GameData_21f250c;
extern char game_script_map_event_g_active_unit;
extern char* GameData_212db30[15];
extern int GameData_220b68c;
void __attribute__((noreturn)) GameRoutine_c8c1e0(void);
__int64 ProcRunEvent_Destructor_c8bd80_alt1(__int64 a1) __asm__(
    "ProcRunEvent_Destructor_c8bd80");
__int64 ProcRunEvent_DeletingDestructor_c8be80_alt1(__int64 a1) __asm__(
    "ProcRunEvent_DeletingDestructor_c8be80");
__int64 ProcRunEvent_Unknown4(__int64 result);
__int64 ProcRunEvent_Unknown5(__int64 result);
__int64 ProcRunEvent_Unknown20(__int64 a1);
__int64 ProcRunEvent_Unknown19_11dcdb0(__int64 a1);
__int64 ProcRunEvent_Unknown21(__int64 a1);
__int64 ProcRunEvent_Unknown22(__int64 result);
__int64 ProcRunEvent_11945e0(__int64, __int64, __int64*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void __attribute__((noreturn))
GameRoutine_c8c1e0_alt1() __asm__("GameRoutine_c8c1e0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcRunEvent_Destructor_c8bd80(__int64 a1);
void ProcRunEvent_DeletingDestructor_c8be80(__int64 a1);

void ProcRunEvent_Destructor_c8bd80(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  GameData_220b68c = 0;
  game_script_map_event_g_active_unit = GameData_21f250c;
  *(_QWORD*)a1 = &game_evt_EventManagerBase_ProcRunEventBase_vtable;
  if (*(_QWORD*)(a1 + 168) != 0) {
    v2 = *(_QWORD**)(a1 + 160);
    v3 = a1 + 152;
    v4 = *(_QWORD**)(*(_QWORD*)(a1 + 152) + 8LL);
    *(_QWORD*)(*v2 + 8LL) = v4;
    *v4 = *v2;
    *(_QWORD*)(a1 + 168) = 0;
    if (v2 != (_QWORD*)(a1 + 152)) {
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        v6 = (_QWORD*)v2[1];
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v7, (__int64)v2);
        v2 = v6;
      } while (v6 != (_QWORD*)v3);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

void ProcRunEvent_DeletingDestructor_c8be80(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  GameData_220b68c = 0;
  game_script_map_event_g_active_unit = *GameData_212db30[0];
  *(_QWORD*)a1 = GameData_2130638[0] + 2;
  v2 = fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)(a1 + 168) != 0) {
    v3 = *(_QWORD**)(a1 + 160);
    v4 = a1 + 152;
    v5 = *(_QWORD**)(*(_QWORD*)(a1 + 152) + 8LL);
    *(_QWORD*)(*v3 + 8LL) = v5;
    *v5 = *v3;
    *(_QWORD*)(a1 + 168) = 0;
    if (v3 != (_QWORD*)(a1 + 152)) {
      do {
        v6 = (_QWORD*)v3[1];
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v7, (__int64)v3);
        v3 = v6;
      } while (v6 != (_QWORD*)v4);
    }
  }
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v8, a1);
}

__int64 ProcRunEvent_Unknown4(__int64 result)
{
  if (((*(_DWORD*)(result + 200) - 20) & 0xFFFFFFF7) != 0) {
    result = GameData_21cd128;
    if (GameData_21cd128 != 0) {
      return MapInfo_825040(GameData_21cd128, 18);
    }
  }
  return result;
}

__int64 ProcRunEvent_Unknown5(__int64 result)
{
  if (((*(_DWORD*)(result + 200) - 20) & 0xFFFFFFF7) != 0) {
    result = GameData_21cd128;
    if (GameData_21cd128 != 0) {
      return MapInfo_825790();
    }
  }
  return result;
}

__int64 ProcRunEvent_Unknown20(__int64 a1)
{
  __int64 result;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 (*v13)();
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v19;
    __int64 v20;
    __int64 v21;
  } v19_;
  __int64 v22;

  result = *(_QWORD*)(a1 + 176);
  if (result != 0) {
    v3 = __dynamic_cast(result, GameData_212d210[0], GameData_212d218[0], 0);
    if (v3 != 0) {
      v4 = *(_BYTE*)(v3 + 8);
      v5 = *(_QWORD*)(v3 + 24);
      v19_.v19 = 0;
      v19_.v20 = 0;
      v19_.v21 = 0;
      v6 = *(_QWORD*)(v3 + 64);
      v7 = *(_QWORD*)(v3 + 72);
      v8 = fw_memory_g_heap_manager_ptr;
      if ((v4 & 1) != 0) {
        v9 = v5;
      }
      else {
        v9 = v3 + 9;
      }
      v10 = v7 - v6;
      if (v7 != v6) {
        if (v10 < 0) {
          GameRoutine_c8c1e0_alt1();
        }
        v11 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v7 - v6, 16, 0);
        v19_.v19 = v11;
        v19_.v21 = v11 + v10;
        do {
          *(_BYTE*)v11 = 0;
          *(_DWORD*)(v11 + 24) = -1;
          v12 = *(_DWORD*)(v6 + 24);
          if (v12 != -1) {
            v13 = GameData_1fd3278[v12];
            v22 = v11;
            ((void (*)(__int64*, __int64))v13)(&v22, v6);
            *(_DWORD*)(v11 + 24) = v12;
          }
          v6 += 32;
          v11 += 32;
        } while (v6 != v7);
        v19_.v20 = v11;
      }
      ProcRunEvent_11945e0(a1, v9, &v19_.v19);
      v14 = v19_.v19;
      if (v19_.v19 != 0) {
        v15 = v19_.v20;
        if (v19_.v19 == v19_.v20) {
          goto LABEL_20;
        }
        do {
          v16 = *(unsigned int*)(v15 - 8);
          v17 = v15 - 32;
          if ((_DWORD)v16 != -1) {
            ((void (*)(__int64*, __int64))decltype_c81af0_ptr[v16])(&v22,
                                                                    v15 - 32);
          }
          *(_DWORD*)(v15 - 8) = -1;
          v15 -= 32;
        } while (v17 != v14);
        v19_.v20 = v14;
        v14 = v19_.v19;
        if (v19_.v19 != 0) {
        LABEL_20:
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v18, v14);
        }
      }
    }
    return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 176) + 88LL))(
        *(_QWORD*)(a1 + 176));
  }
  return result;
}

__int64 ProcRunEvent_Unknown19_11dcdb0(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 176);
  if (result != 0) {
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 96LL))(result,
                                                                        a1);
  }
  return result;
}

__int64 ProcRunEvent_Unknown21(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 176);
  if (result != 0) {
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 104LL))(result,
                                                                         a1);
  }
  return result;
}

__int64 ProcRunEvent_Unknown22(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (*(_QWORD*)(result + 168) != 0 && v1 != 0) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 0) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64;
    }
  }
  return result;
}

#pragma GCC visibility pop
