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
__int64 ProcDivinationSceneVisitor_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ProcDivinationSceneVisitor_DeletingDestructor");
__int64 ProcDivinationSceneVisitor_Unknown22_alt1() __asm__(
    "ProcDivinationSceneVisitor_Unknown22");
__int64 GameRoutine_1450640(_QWORD);
__int64
game_facility_anonymous_ProcDivinationSceneVisitor_PrepareScene_closure_Invoke_alt1() __asm__(
    "game_facility_anonymous_ProcDivinationSceneVisitor_PrepareScene_closure_"
    "Invoke");
__int64 ProcDivinationSceneVisitor_19690a0_alt1(__int64 a1) __asm__(
    "ProcDivinationSceneVisitor_19690a0");
__int64 ProcDivinationSceneVisitor_Destructor_alt1(__int64* a1) __asm__(
    "ProcDivinationSceneVisitor_Destructor");
__int64
ProcDivinationSceneVisitor_DeletingDestructor_1969710_alt1(__int64* a1) __asm__(
    "ProcDivinationSceneVisitor_DeletingDestructor_1969710");
__attribute__((swiftcall)) void game_facility_1450640(PSEUDO_X8, __int64);
__int64 GameHr_138a920(__int64, __int64);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 SceneManager_138c000(_QWORD*, unsigned __int8*, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 game_Unit_GetNextIn_alt1(__int64,
                                 _DWORD*) __asm__("game_Unit_GetNextIn");
__int64
game_facility_ReleaseGroups_alt1() __asm__("game_facility_ReleaseGroups");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
bool GameRoutine_1389160_alt1(__int64, __int64,
                              __int64) __asm__("GameRoutine_1389160");
extern __int64 (*ProcDivinationScene_Destructor_ptr)();
extern char GameData_1aefb8d_alt1[] __asm__("GameData_1aefb8d");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void FacilitySceneBase_1958ed0(__int64, __int64);
void GameHr_19513c0(unsigned __int8*);
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void GameRoutine_a0d9a0_alt1(__int64) __asm__("GameRoutine_a0d9a0");
void __attribute__((noreturn)) String_60a1d0();
void game_facility_anonymous_19688e0();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void
game_facility_anonymous_ProcDivinationSceneVisitor_PrepareScene_closure_Invoke(
    PSEUDO_X8 x8_);
void ProcDivinationSceneVisitor_19690a0(__int64 a1);
void ProcDivinationSceneVisitor_DeletingDestructor(__int64 a1);
void ProcDivinationSceneVisitor_Unknown22();
void ProcDivinationSceneVisitor_Destructor(__int64* a1);
void ProcDivinationSceneVisitor_DeletingDestructor_1969710(__int64* a1);
_QWORD* GameRoutine_14514d0(_QWORD* result, _QWORD*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 (*GameData_211a4e0[])();
extern __int64 GameData_21f4000;
void game_facility_anonymous_ProcDivinationSceneVisitor_PrepareScene();

void game_facility_anonymous_ProcDivinationSceneVisitor_PrepareScene()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  {
    v0 = *(_QWORD*)(GameData_21f4000 + 264);
    __asm__ volatile("" ::"r"(v0));
  }
  if (v0 != 0) {
    {
      v1 = *(_QWORD*)(GameData_21f4000 + 256);
      __asm__ volatile("" ::"r"(v1));
    }
    {
      v2 = *(_QWORD*)(GameData_21f4000 + 264);
      __asm__ volatile("" ::"r"(v2));
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 != 0) {
      if (v1 == 0) {
        goto LABEL_14;
      }
      v6_.v6[0] = GameData_211a4e0;
      v6_.v7 = v6_.v6;
      v8_.v9 = v8_.v8;
      v8_.v8[0] = GameData_211a4e0;
      GameRoutine_14514d0(v8_.v8, (_QWORD*)(v1 + 272));
      if (v8_.v9 == v8_.v8) {
        v4 = 32;
      }
      else {
        if (v8_.v9 == nullptr) {
          goto LABEL_9;
        }
        v4 = 40;
      }
      (*(void (**)(__int64))(*v8_.v9 + v4))((__int64)v8_.v9);
    LABEL_9:
      if (v6_.v7 == v6_.v6) {
        v5 = 32;
      }
      else {
        if (v6_.v7 == nullptr) {
          goto LABEL_14;
        }
        v5 = 40;
      }
      (*(void (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
    LABEL_14:
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
}

__attribute__((swiftcall)) void

game_facility_anonymous_ProcDivinationSceneVisitor_PrepareScene_closure_Invoke(
    PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  struct {
    _QWORD v5[2];
    __int64 v6;
  } v5_;

  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  *(_BYTE*)(v3 + 32) = 0;
  v5_.v5[0] = 41;
  v5_.v5[1] = 32;
  v5_.v6 = v3;
  *(_QWORD*)v3 = 0x83E3BC83E3B782E3LL;
  *(_QWORD*)(v3 + 8) = 0xE3A183E3AB82E3B3LL;
  *(_QWORD*)(v3 + 16) = 0x81E3A08DE55FA983LL;
  *(_QWORD*)(v3 + 24) = 0x97BAE5A59DE65F84LL;
  game_facility_1450640((void*)(a1), (__int64)v5_.v5);
  if ((v5_.v5[0] & 1) != 0 && v5_.v6 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v4, v5_.v6);
  }
}

void ProcDivinationSceneVisitor_19690a0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 192);
  *(_QWORD*)a1 = &game_facility_anonymous_ProcDivinationScene_vtable;
  *(_QWORD*)(a1 + 152) = &ProcDivinationScene_Destructor_ptr;
  v3 = a1 + 152;
  if (v1 != 0) {
    *(_QWORD*)(a1 + 200) = v1;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v1);
  }
  v5 = GameData_212dd18[0] + 192;
  *(_QWORD*)a1 = GameData_212dd18[0] + 16;
  *(_QWORD*)(a1 + 152) = v5;
  FacilitySceneBase_1958ed0(v3, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v6 = (_QWORD*)GameData_212dce8;
  v7 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
    }
    *v6 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

void ProcDivinationSceneVisitor_DeletingDestructor(__int64 a1)
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
  *(_QWORD*)(a1 + 152) = &ProcDivinationScene_Destructor_ptr;
  v3 = a1 + 152;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 200) = v1;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v5 + v6, v1);
  }
  v7 = GameData_212dd18[0] + 192;
  *(_QWORD*)a1 = GameData_212dd18[0] + 16;
  *(_QWORD*)(a1 + 152) = v7;
  FacilitySceneBase_1958ed0(v3, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v8 = (_QWORD*)GameData_212dce8;
  v9 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
    if (*v8 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v8 + 8LL))(*v8);
    }
    *v8 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v11, a1);
}

void ProcDivinationSceneVisitor_Unknown22()
{
  _QWORD** v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  struct {
    _QWORD v14[2];
    char* v15;
  } v14_;
  struct {
    __int64 (**v16)();
    __int64 v17;
  } v16_;
  struct {
    __int128 v18;
    __int64 v19;
    __int64 v20;
    __int128* v21;
    __int64 v22;
    __int64 v23;
    char gap104_[88];
    char v24;
    char gap193_[15];
    char v25;
    char gap209_[47];
    __int64 v26;
  } v18_;

  v18_.v21 = nullptr;
  v18_.v22 = 0;
  v18_.v19 = 0;
  v18_.v20 = 0;
  v18_.v18 = (__typeof__(v18_.v18)){0};
  v18_.v23 = 0;
  v16_.v16 = game_facility_SceneManager_FacilityMapArgs_vtable;
  v16_.v17 = 0;
  GameRoutine_1389160_alt1((__int64)&v16_.v16, (__int64)&GameData_1a9b081, 6);
  v0 = (_QWORD**)GameData_212dce8;
  GameHr_138a920(*(_QWORD*)GameData_212dce8, (__int64)&v16_.v16);
  v16_.v16 = &game_facility_SceneManager_IMapArgs_vtable;
  if (v18_.v21 == &v18_.v18) {
    v1 = 32;
    goto LABEL_5;
  }
  if (v18_.v21 != nullptr) {
    v1 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*(_QWORD*)v18_.v21 + v1))((__int64)v18_.v21);
  }
  v16_.v16 = (__int64 (**)(void))0x8481E3A08DE50CLL;
  GameHr_19513c0((unsigned __int8*)&v16_.v16);
  if (((unsigned __int8)v16_.v16 & 1) != 0 && (_QWORD)v18_.v18 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v18_.v18);
  }
  game_facility_anonymous_19688e0();
  if (game_GameModeData_instance_ != 0) {
    v3 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    LODWORD(v16_.v16) = 241;
    if (v3 != 0) {
      v4 = game_UnitPool_GetFirst_alt1((int*)&v16_.v16);
      if (v4 != 0) {
        for (i = v4;; i = v6) {
          v6 = game_Unit_GetNextIn_alt1(i, &v16_.v16);
          if (*(_QWORD*)(i + 392) == v3) {
            break;
          }
          if (v6 == 0) {
            return;
          }
        }
        v16_.v16 = nullptr;
        v16_.v17 = 0;
        LOBYTE(v18_.v21) = 0;
        v18_.v24 = 0;
        v18_.v25 = 0;
        v18_.v26 = 0;
        LOBYTE(v18_.v18) = 20;
        strcpy((char*)&v18_.v18 + 9, "_D");
        *(_QWORD*)((char*)&v18_.v18 + 1) = 0x335FAC9CE6BA9FE5LL;
        GameRoutine_60a020_alt1((__int64)&v18_.v18, GameData_1aefb8d_alt1);
        v7 = *v0;
        v8 = (__int64)*GameData_2132498;
        v9 = strlen_alt1((const char*)*GameData_2132498);
        if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
          String_60a1d0();
        }
        v10 = v9;
        if (v9 >= 0x17) {
          if ((v9 | 7) == 0x17) {
            v12 = 26;
          }
          else {
            v12 = (v9 | 7) + 1;
          }
          v11 = (char*)fw_memory_HeapManager_Allocate_alt1(
              fw_memory_g_heap_manager, v12, 16, 0);
          v14_.v14[1] = v10;
          v14_.v15 = v11;
          v14_.v14[0] = v12 | 1;
        }
        else {
          LOBYTE(v14_.v14[0]) = 2 * v9;
          v11 = (char*)v14_.v14 + 1;
          if (v9 == 0) {
          LABEL_27:
            v11[v10] = 0;
            SceneManager_138c000(v7, (unsigned __int8*)v14_.v14, i,
                                 (__int64)&v16_.v16);
            if ((v14_.v14[0] & 1) != 0 && v14_.v15 != nullptr) {
              v13 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v13 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                  (__int64)v14_.v15);
            }
            GameRoutine_a0d9a0_alt1((__int64)&v16_.v16);
            return;
          }
        }
        memmove_alt1((__int64)v11, v8, v10);
        goto LABEL_27;
      }
    }
  }
}

void ProcDivinationSceneVisitor_Destructor(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  v1 = a1[5];
  *(a1 - 19) = (__int64)&game_facility_anonymous_ProcDivinationScene_vtable;
  v3 = (__int64)(a1 - 19);
  *a1 = (__int64)&ProcDivinationScene_Destructor_ptr;
  if (v1 != 0) {
    a1[6] = v1;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v1);
  }
  v5 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v5;
  FacilitySceneBase_1958ed0((__int64)a1, v3);
  *a1 = (__int64)(GameData_2132488 + 2);
  v6 = (_QWORD*)GameData_212dce8;
  v7 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
    }
    *v6 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(v3);
  GameRoutine_658c00_alt1(a1 - 8);
}

void ProcDivinationSceneVisitor_DeletingDestructor_1969710(__int64* a1)
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

  v1 = a1[5];
  *(a1 - 19) = (__int64)&game_facility_anonymous_ProcDivinationScene_vtable;
  v3 = (__int64)(a1 - 19);
  *a1 = (__int64)&ProcDivinationScene_Destructor_ptr;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[6] = v1;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v5 + v6, v1);
  }
  v7 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v7;
  FacilitySceneBase_1958ed0((__int64)a1, v3);
  *a1 = (__int64)(GameData_2132488 + 2);
  v8 = (_QWORD*)GameData_212dce8;
  v9 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
    if (*v8 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v8 + 8LL))(*v8);
    }
    *v8 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(v3);
  GameRoutine_658c00_alt1(a1 - 8);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v11, v3);
}

#pragma GCC visibility pop
