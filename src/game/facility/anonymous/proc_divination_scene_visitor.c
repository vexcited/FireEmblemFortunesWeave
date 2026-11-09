#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1389160(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_138a920(_QWORD, _QWORD);
__int64 GameRoutine_138c000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1958ed0(__int64 result, __int64);
__int64 GameRoutine_19688e0(__int64);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_a0d9a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_Unit_GetNextIn(_QWORD, _QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern _DWORD* GameData_2130fb8;
extern _UNKNOWN GameData_1a9b081;
extern _UNKNOWN GameData_1aefb8d;
extern _UNKNOWN** GameData_2132498;
extern __int64 (*GameData_211a498)();
extern __int64 (*game_facility_SceneManager_FacilityMapArgs_vtable[])();
extern __int64 (*game_facility_SceneManager_IMapArgs_vtable)();
extern __int64 (*game_facility_anonymous_ProcDivinationScene_vtable)();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_2132488;
unsigned __int64 GameRoutine_19513c0(unsigned __int64 result);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 ProcDivinationSceneVisitor_DeletingDestructor(__int64 a1);
__int64 ProcDivinationSceneVisitor_Unknown22();

__int64 ProcDivinationSceneVisitor_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v11;

  v1 = *(_QWORD*)(a1 + 192);
  *(_QWORD*)a1 = &game_facility_anonymous_ProcDivinationScene_vtable;
  *(_QWORD*)(a1 + 152) = &GameData_211a498;
  v3 = a1 + 152;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 200) = v1;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(v5 + v6);
  }
  v7 = GameData_212dd18[0] + 192;
  *(_QWORD*)a1 = GameData_212dd18[0] + 16;
  *(_QWORD*)(a1 + 152) = v7;
  GameRoutine_1958ed0(v3, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v8 = (_QWORD*)GameData_212dce8;
  v9 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
    if (*v8 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v8 + 8LL))(*v8);
    }
    *v8 = 0;
  }
  game_facility_ReleaseGroups();
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v11);
}

__int64 ProcDivinationSceneVisitor_Unknown22()
{
  __int64* v0;
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 i;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[2];
  char* v15;
  __int64 (**v16)();
  __int64 v17;
  __int128 v18;
  __int64 v19;
  __int64 v20;
  __int128* v21;
  __int64 v22;
  __int64 v23;
  char v24;
  char v25;
  __int64 v26;

  v21 = nullptr;
  v22 = 0;
  v19 = 0;
  v20 = 0;
  v18 = 0u;
  v23 = 0;
  v16 = game_facility_SceneManager_FacilityMapArgs_vtable;
  v17 = 0;
  GameRoutine_1389160(&v16, &GameData_1a9b081, 6);
  v0 = (__int64*)GameData_212dce8;
  GameRoutine_138a920(*(_QWORD*)GameData_212dce8, &v16);
  v16 = &game_facility_SceneManager_IMapArgs_vtable;
  if (v21 == &v18) {
    v1 = 32;
    goto LABEL_5;
  }
  if (v21 != nullptr) {
    v1 = 40;
  LABEL_5:
    (*(void (**)(void))(*(_QWORD*)v21 + v1))();
  }
  v16 = (__int64 (**)())0x8481E3A08DE50CLL;
  v2 = GameRoutine_19513c0((unsigned __int64)&v16);
  if (((unsigned __int8)v16 & 1) != 0 && (_QWORD)v18 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    v2 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
  }
  result = GameRoutine_19688e0(v2);
  if (game_GameModeData_instance_ != 0) {
    v5 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    LODWORD(v16) = 241;
    if (v5 != 0) {
      result = game_UnitPool_GetFirst(&v16);
      if (result != 0) {
        for (i = result;; i = result) {
          result = game_Unit_GetNextIn(i, &v16);
          if (*(_QWORD*)(i + 392) == v5) {
            break;
          }
          if (result == 0) {
            return result;
          }
        }
        v16 = nullptr;
        v17 = 0;
        LOBYTE(v21) = 0;
        v24 = 0;
        v25 = 0;
        v26 = 0;
        LOBYTE(v18) = 20;
        strcpy((char*)&v18 + 9, "_D");
        *(_QWORD*)((char*)&v18 + 1) = 0x335FAC9CE6BA9FE5LL;
        GameRoutine_60a020(&v18, &GameData_1aefb8d);
        v7 = *v0;
        v8 = (__int64)*GameData_2132498;
        v9 = strlen(*GameData_2132498);
        if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
          GameRoutine_60a1d0(v9);
        }
        v10 = v9;
        if (v9 >= 0x17) {
          if ((v9 | 7) == 0x17) {
            v12 = 26;
          }
          else {
            v12 = (v9 | 7) + 1;
          }
          v11 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v12, 16, 0);
          v14[1] = v10;
          v15 = v11;
          v14[0] = v12 | 1;
        }
        else {
          LOBYTE(v14[0]) = 2 * v9;
          v11 = (char*)v14 + 1;
          if (v9 == 0) {
          LABEL_27:
            v11[v10] = 0;
            GameRoutine_138c000(v7, v14, i, &v16);
            if ((v14[0] & 1) != 0 && v15 != nullptr) {
              v13 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v13 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
            }
            return GameRoutine_a0d9a0(&v16);
          }
        }
        memmove(v11, v8, v10);
        goto LABEL_27;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
