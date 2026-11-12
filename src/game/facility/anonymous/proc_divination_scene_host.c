#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1389160(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_138a920(_QWORD, _QWORD);
__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 GameRoutine_1958ed0(__int64 result, __int64);
__int64 GameRoutine_19688e0(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD* GameData_2130fb8;
extern _UNKNOWN GameData_1a9b081;
extern _UNKNOWN GameData_1ae4353;
extern __int64 (*GameData_211a498)();
extern __int64 (*game_facility_SceneManager_FacilityMapArgs_vtable[])();
extern __int64 (*game_facility_SceneManager_IMapArgs_vtable)();
extern __int64 (*game_facility_anonymous_ProcDivinationScene_vtable)();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 GameData_21f4010;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2132488;
unsigned __int64 GameRoutine_19513c0(unsigned __int64 result);
__int64 ProcDivinationSceneHost_DeletingDestructor(__int64 a1);
__int64 ProcDivinationSceneHost_1968280();
__int64 ProcDivinationSceneHost_Unknown22();
_QWORD* GameRoutine_1964940(_QWORD* result, __int64);
__int64 GameRoutine_1450640(_QWORD);
__int64 GameRoutine_196abd0(void);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_7a88a0(_QWORD);
__int64 GameRoutine_94b9a0(_QWORD);
__int64 GameRoutine_a0d9a0(_QWORD);
__int64 SceneCharacter_1401850(float);
__int64 SceneCharacter_1401b10(_QWORD, _QWORD, _QWORD);
__int64 SceneCharacter_1401e50(_QWORD, float);
__int64 SceneManager_138c360(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SceneManager_138c7e0(_QWORD, _QWORD);
__int64 VolunteerArgs_9476c0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1ab613e;
extern _UNKNOWN GameData_1aefb8d;
extern _UNKNOWN* GameData_2176158;
extern _UNKNOWN* GameData_2176160;
extern __int64 GameData_21f4000;
extern __int64 GameData_226dcb0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern __int64 game_UnitListSet_instance_;
extern int game_script_hub_talk_g_choice_menu_result;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 ProcDivinationSceneHost_1966760(__int64 a1);
__int64 ProcDivinationSceneHost_19668a0(__int64 a1);
__int64 ProcDivinationSceneHost_1966af0();
__int64 ProcDivinationSceneHost_1966f00(__int64 result);
__int64 ProcDivinationSceneHost_1966fa0(__int64 result);
void ProcDivinationSceneHost_19673b0();
__int64 ProcDivinationSceneHost_1967670(__int64 a1);
__int64 ProcDivinationSceneHost_19677e0(__int64 a1);
__int64 ProcDivinationSceneHost_19678c0(__int64 result);
_QWORD* ProcDivinationSceneHost_1967920(__int64 a1);
__int64
game_facility_anonymous_ProcDivinationSceneHost_PrepareScene_closure_Invoke();
__int64 ProcDivinationSceneHost_1967c00();
__int64 ProcDivinationSceneHost_1967da0();
__int64 ProcDivinationSceneHost_Destructor(__int64* a1);
__int64 ProcDivinationSceneHost_DeletingDestructor_1968600(__int64* a1);
__attribute__((swiftcall)) void
SceneEffectManager_1950850(__attribute__((swift_indirect_result)) void*,
                           _QWORD*, __int64, unsigned int);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1967f30(void);
__int64 GameRoutine_60a020_alt1(_QWORD, _QWORD,
                                long double) __asm__("GameRoutine_60a020");
__int64 GameRoutine_67ed20(_QWORD);
__int64 ProcDivinationSceneHost_1967c00_alt1(void) __asm__(
    "ProcDivinationSceneHost_1967c00");
__int64 ProcDivinationSceneHost_1967c00_alt2(_QWORD) __asm__(
    "ProcDivinationSceneHost_1967c00");
__int64 ProcDivinationSceneHost_1967da0_alt1(void) __asm__(
    "ProcDivinationSceneHost_1967da0");
__int64 ProcDivinationSeq_1964a60(__int64, char);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SceneCharacterAnimator_1412540(_QWORD, _QWORD, _QWORD);
__int64 game_108cc80(_QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_HashString32_alt1(_QWORD, _QWORD) __asm__("game_HashString32");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern _UNKNOWN* GameData_2130228;
extern _UNKNOWN GameData_216de68;
extern __int64* GameData_212d460[6];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21ec7b8;
extern char* GameData_211b3c8[8];
extern char** msg_MessageManager_empty_text__ptr;
__int64 ProcDivinationSceneHost_1966d10();
__int64 ProcDivinationSceneHost_1966dd0(__int64 result);
__int64 ProcDivinationSceneHost_1967150(__int64 a1);
__int64 ProcDivinationSceneHost_1967270(__int64 a1);
void ProcDivinationSceneHost_19673d0();
void ProcDivinationSceneHost_1967540(__int64 a1);
__int64 ProcDivinationSceneHost_19677c0_alt1(
    __int64 result, long double a2) __asm__("ProcDivinationSceneHost_19677c0");
__int64 ProcDivinationSceneHost_1967960(__int64 result);
__attribute__((swiftcall)) void SceneEffectManager_1950850_alt1(
    PSEUDO_X8, __int64, __int64,
    unsigned int) __asm__("SceneEffectManager_1950850");
__int64 GameRoutine_60a020_alt2(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 ProcInst_657850_alt1(__int64, __int64, __int64, char,
                             __int64) __asm__("ProcInst_657850");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
char* GameHr_67ed20(_QWORD*);
char* GameRoutine_a4dbe0_alt1(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
const char*
game_HashString32_alt2(const char* result) __asm__("game_HashString32");
unsigned __int64
GameRoutine_1130770_alt1(__int64, const char*,
                         __int64*) __asm__("GameRoutine_1130770");
void GameRoutine_1967f30_alt1(__int64) __asm__("GameRoutine_1967f30");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcDivinationSceneHost_19677c0(__int64 a1);

__int64 ProcDivinationSceneHost_1966760(__int64 a1)
{
  __int64*** v2;
  __int64 v3;
  __int64** i;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  _QWORD* v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;

  v2 = *(__int64****)(game_UnitListSet_instance_ + 8);
  v3 = GameRoutine_94b9a0(a1);
  for (i = *v2;; i += 2) {
    if (i == v2[1]) {
      v6 = 0;
      goto LABEL_10;
    }
    if (v3 != 0) {
      v5 = *i;
      v6 = **i;
      if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 392) + 24LL) + 1672LL) ==
          *(_QWORD*)(*(_QWORD*)(v3 + 24) + 1672LL)) {
        break;
      }
    }
  }
  v7 = i[1];
  if (v7 != nullptr) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 1), 1u,
                              memory_order_relaxed);
    v6 = *v5;
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v7 + 16))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
LABEL_10:
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  v13 = v9;
  *v9 = v6;
  v14 = v9 + 1;
  v15 = v9 + 1;
  result = VolunteerArgs_9476c0(a1, &v13);
  if (v13 != nullptr) {
    v11 = *v8;
    v14 = v13;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    return nn_mem_StandardAllocator_Free(v11 + v12);
  }
  return result;
}

__int64 ProcDivinationSceneHost_19668a0(__int64 a1)
{
  __int64 v2;
  void* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v15[2];
  char* v16;
  _QWORD v17[2];
  char* v18;
  _QWORD v19[2];
  char v20;
  __int64 v21;
  char v22[199];
  __int64 v23;

  v19[0] = 0;
  v19[1] = 0;
  v22[23] = 0;
  v20 = 20;
  v22[135] = 0;
  v22[151] = 0;
  v23 = 0;
  strcpy(v22, "_D");
  v21 = 0x335FAC9CE6BA9FE5LL;
  GameRoutine_60a020(&v20, &GameData_1aefb8d);
  v2 = GameData_21f4000;
  v3 = GameData_2176160;
  v4 = strlen(GameData_2176160);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_30:
    String_60a1d0(v4);
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v17[1] = v5;
    v18 = v6;
    v17[0] = v7 | 1;
    goto LABEL_9;
  }
  LOBYTE(v17[0]) = 2 * v4;
  v6 = (char*)v17 + 1;
  if (v4 != 0) {
  LABEL_9:
    memmove(v6, v3, v5);
  }
  v6[v5] = 0;
  v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 232) + 40LL) + 8LL);
  v4 = strlen(v8);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_30;
  }
  v9 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v4 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11,
                                                16, 0);
    v15[1] = v9;
    v16 = v10;
    v15[0] = v11 | 1;
  }
  else {
    LOBYTE(v15[0]) = 2 * v4;
    v10 = (char*)v15 + 1;
    if (v4 == 0) {
      goto LABEL_19;
    }
  }
  memmove(v10, v8, v9);
LABEL_19:
  v10[v9] = 0;
  SceneManager_138c360(v2, v17, v15, v19);
  if ((v15[0] & 1) != 0 && v16 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
  }
  if ((v17[0] & 1) != 0 && v18 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  return GameRoutine_a0d9a0(v19);
}

__int64 ProcDivinationSceneHost_1966af0()
{
  __int64 v0;
  void* v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _QWORD v8[2];
  char* v9;

  v0 = GameData_21f4000;
  v1 = GameData_2176160;
  v2 = strlen(GameData_2176160);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v2);
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v5, 16,
                                               0);
    v8[1] = v3;
    v9 = v4;
    v8[0] = v5 | 1;
  }
  else {
    LOBYTE(v8[0]) = 2 * v2;
    v4 = (char*)v8 + 1;
    if (v2 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v4, v1, v3);
LABEL_10:
  v4[v3] = 0;
  result = SceneManager_138c7e0(v0, v8);
  if ((v8[0] & 1) != 0 && v9 != nullptr) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  return result;
}

__int64 ProcDivinationSceneHost_1966d10()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  bool v3;
  unsigned __int64 add;
  unsigned int v5;

  result = ProcDivinationSceneHost_1967c00_alt1();
  if (result != 0) {
    v1 = *(_QWORD*)(result + 128);
    v2 = *(_QWORD*)(result + 136);
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                                memory_order_relaxed);
      v3 = *(_QWORD*)(v1 + 56) == 0;
      add = atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                             0xFFFFFFFFFFFFFFFFLL);
      result = !v3;
      if (add == 0) {
        v5 = result;
        (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
        std___1___shared_weak_count___release_weak_alt1(v2);
        return v5;
      }
    }
    else {
      return *(_QWORD*)(v1 + 56) != 0;
    }
  }
  return result;
}

__int64 ProcDivinationSceneHost_1966dd0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;

  v1 = *(_QWORD*)(result + 224);
  if (v1 != 0) {
    v2 = *(_QWORD*)(v1 + 32);
    if (GameData_21ec7b8 == 0 && v2 != 0) {
      v4 = result;
      v5 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v5, v2, 0);
      v6 = *(_QWORD*)(v4 + 40);
      if (v6 != 0) {
        *(_QWORD*)(v6 + 48) = v5;
        *(_QWORD*)(v5 + 56) = *(_QWORD*)(v4 + 40);
      }
      *(_QWORD*)(v4 + 40) = v5;
      *(_QWORD*)(v5 + 24) = "talk::Seq";
      *(_QWORD*)(v5 + 32) = v4;
      *(_DWORD*)(v5 + 140) = game_HashString32();
      *(_QWORD*)(v5 + 64) = 0;
      *(_QWORD*)(v5 + 72) = 24;
      *(_QWORD*)(v5 + 80) = 1;
      *(_QWORD*)(v5 + 8) = &GameData_216de68;
      *(_QWORD*)(v5 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5);
      if ((result & 1) != 0 && (*(_WORD*)(v5 + 136) & 0x100) == 0) {
        *(_WORD*)(v5 + 136) |= 0x100u;
      }
      v7 = *(_BYTE**)(v5 + 32);
      v8 = v7[138];
      if (v8 == 0) {
        result =
            (*(__int64 (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v5 + 32));
        v8 = v7[138];
      }
      v7[138] = v8 + 1;
      *(_WORD*)(v5 + 136) |= 2u;
    }
  }
  return result;
}

__int64 ProcDivinationSceneHost_1966f00(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (*(_QWORD*)(*(_QWORD*)(result + 232) + 88LL) != 0 && v1 != 0) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 6) {
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

__int64 ProcDivinationSceneHost_1966fa0(__int64 result)
{
  int v1;
  __int64 v2;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v1 = 5;
  }
  else {
    v1 = 4;
  }
  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    while (1) {
      if (*(_BYTE*)v2 == 2) {
        if (*(_DWORD*)(v2 + 32) == v1) {
          *(_QWORD*)(result + 16) = v2;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v2 == 0) {
        return result;
      }
      v2 += 64;
    }
  }
  return result;
}

__int64 ProcDivinationSceneHost_1967150(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  char v6;

  result = ProcDivinationSeq_1964a60(a1 + 184, 0);
  if (GameData_21ec7b8 == 0) {
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v3, "MID_LGV_Divination_result_Reaction_m02", 0);
    v4 = *(_QWORD*)(a1 + 40);
    if (v4 != 0) {
      *(_QWORD*)(v4 + 48) = v3;
      *(_QWORD*)(v3 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v3;
    *(_QWORD*)(v3 + 24) = "talk::Seq";
    *(_QWORD*)(v3 + 32) = a1;
    *(_DWORD*)(v3 + 140) = game_HashString32();
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 24;
    *(_QWORD*)(v3 + 80) = 1;
    *(_QWORD*)(v3 + 8) = &GameData_216de68;
    *(_QWORD*)(v3 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3);
    if ((result & 1) != 0 && (*(_WORD*)(v3 + 136) & 0x100) == 0) {
      *(_WORD*)(v3 + 136) |= 0x100u;
    }
    v5 = *(_BYTE**)(v3 + 32);
    v6 = v5[138];
    if (v6 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v5 + 64LL))(*(_QWORD*)(v3 + 32));
      v6 = v5[138];
    }
    v5[138] = v6 + 1;
    *(_WORD*)(v3 + 136) |= 2u;
  }
  return result;
}

__int64 ProcDivinationSceneHost_1967270(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  char v6;

  result = ProcDivinationSeq_1964a60(a1 + 184, 1);
  if (GameData_21ec7b8 == 0) {
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v3, "MID_LGV_Divination_result_Reaction_m03", 0);
    v4 = *(_QWORD*)(a1 + 40);
    if (v4 != 0) {
      *(_QWORD*)(v4 + 48) = v3;
      *(_QWORD*)(v3 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v3;
    *(_QWORD*)(v3 + 24) = "talk::Seq";
    *(_QWORD*)(v3 + 32) = a1;
    *(_DWORD*)(v3 + 140) = game_HashString32();
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 24;
    *(_QWORD*)(v3 + 80) = 1;
    *(_QWORD*)(v3 + 8) = &GameData_216de68;
    *(_QWORD*)(v3 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3);
    if ((result & 1) != 0 && (*(_WORD*)(v3 + 136) & 0x100) == 0) {
      *(_WORD*)(v3 + 136) |= 0x100u;
    }
    v5 = *(_BYTE**)(v3 + 32);
    v6 = v5[138];
    if (v6 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v5 + 64LL))(*(_QWORD*)(v3 + 32));
      v6 = v5[138];
    }
    v5[138] = v6 + 1;
    *(_WORD*)(v3 + 136) |= 2u;
  }
  return result;
}

void ProcDivinationSceneHost_19673b0()
{
  if (GameData_226dcb0 != 0) {
    *(_BYTE*)(GameData_226dcb0 + 216) = 1;
  }
}

void ProcDivinationSceneHost_19673d0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  char v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int16 v13;
  char v14;

  v0 = ProcDivinationSceneHost_1967da0_alt1();
  if (v0 != 0) {
    v1 = *(_QWORD*)(v0 + 112);
    v2 = *(_QWORD*)(v0 + 120);
    v3 = v0;
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                                memory_order_relaxed);
      v4 = *(_QWORD*)(v1 + 80);
      if (v4 != 0) {
        v5 = *(_DWORD*)(v4 + 120);
      }
      else {
        v5 = 0;
      }
      v8 = *(_DWORD*)(v1 + 108);
      if (v5 == v8 || (game_108cc80(v5, v8) & 1) != 0) {
        v9 = 1;
      }
      else {
        v9 = game_108cc80(v8, v5);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if ((v9 & 1) != 0) {
          return;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
        std___1___shared_weak_count___release_weak_alt1(v2);
        if ((v9 & 1) != 0) {
          return;
        }
      }
      goto LABEL_21;
    }
    v6 = *(_QWORD*)(v1 + 80);
    if (v6 != 0) {
      v7 = *(_DWORD*)(v6 + 120);
    }
    else {
      v7 = 0;
    }
    v10 = *(_DWORD*)(v1 + 108);
    if (v7 != v10 && (game_108cc80(v7, v10) & 1) == 0 &&
        (game_108cc80(v10, v7) & 1) == 0) {
    LABEL_21:
      v11 = *(_QWORD*)(v3 + 112);
      v12 = *(_QWORD*)(v3 + 120);
      v13 = 0;
      v14 = 1;
      if (v12 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                  memory_order_relaxed);
        SceneCharacterAnimator_1412540(v11, *(unsigned int*)(v11 + 108), &v13);
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak_alt1(v12);
        }
      }
      else {
        SceneCharacterAnimator_1412540(v11, *(unsigned int*)(v11 + 108), &v13);
      }
    }
  }
}

void ProcDivinationSceneHost_1967540(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    char v7;
    _BYTE v8[23];
  } v7_;
  struct {
    __int64 v9;
    __int64 v10;
  } v9_;

  GameRoutine_1967f30_alt1(a1);
  if ((unsigned int)*(unsigned __int8*)(a1 + 240) - 2 >= 2) {
    if (*(_BYTE*)(a1 + 240) != 0) {
      return;
    }
    v4 = ProcDivinationSceneHost_1967c00();
    if (v4 == 0) {
      return;
    }
    v3 = v4;
    v7_.v8[13] = 0;
    v7_.v7 = 26;
    *(_QWORD*)v7_.v8 = 0xE35F8481E3A08DE5LL;
    *(_QWORD*)&v7_.v8[5] = 0x9583E39083E35F84LL;
  }
  else {
    v2 = ProcDivinationSceneHost_1967c00();
    if (v2 == 0) {
      return;
    }
    v3 = v2;
    v7_.v8[16] = 0;
    v7_.v7 = 32;
    *(_QWORD*)v7_.v8 = 0xE35F8481E3A08DE5LL;
    *(_QWORD*)&v7_.v8[8] = 0x9583E39083E38783LL;
  }
  SceneEffectManager_1950850_alt1((void*)(&v9_.v9), (__int64)&v7_.v7, v3, 2u);
  v5 = v9_.v10;
  if (v9_.v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9_.v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt2(v5);
  }
  if ((v7_.v7 & 1) != 0 && *(_QWORD*)&v7_.v8[15] != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, *(__int64*)&v7_.v8[15]);
  }
}

__int64 ProcDivinationSceneHost_1967670(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  result = ProcDivinationSceneHost_1967c00(a1);
  if (result != 0) {
    v2 = result;
    SceneCharacter_1401850(180.0);
    v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        40, 16, 0);
    *(_BYTE*)(v4 + 32) = 0;
    v8 = 41;
    v9 = 32;
    v10 = v4;
    *(_QWORD*)v4 = 0xE35F8481E3A08DE5LL;
    *(_QWORD*)(v4 + 8) = 0x8383E38B83E3A683LL;
    *(_QWORD*)(v4 + 16) = 0x5FA2AEE55F8883E3LL;
    *(_QWORD*)(v4 + 24) = 0x315F97BAE58080E9LL;
    SceneCharacter_1401b10(v2, &v8, 0);
    if ((v8 & 1) != 0 && v10 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*v3 + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*v3 + v5);
    }
    SceneCharacter_1401e50(v2, 1.5);
    v6 = fw_memory_HeapManager_Allocate(*v3, 40, 16, 0);
    *(_BYTE*)(v6 + 32) = 0;
    v8 = 41;
    v9 = 32;
    v10 = v6;
    *(_QWORD*)v6 = 0xE35F8481E3A08DE5LL;
    *(_QWORD*)(v6 + 8) = 0x8383E38B83E3A683LL;
    *(_QWORD*)(v6 + 16) = 0x5FA2AEE55F8883E3LL;
    *(_QWORD*)(v6 + 24) = 0x325F97BAE58080E9LL;
    result = SceneCharacter_1401b10(v2, &v8, 0);
    if ((v8 & 1) != 0 && v10 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*v3 + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(*v3 + v7);
    }
  }
  return result;
}

void ProcDivinationSceneHost_19677c0(__int64 a1)
{
  __int64 v3;
  unsigned __int8 v4;
  __int64 v5;
  const char* v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  const char* v11;
  int v12;
  const char* v13;
  __int64 v15;
  __int64 v16;
  struct {
    _WORD v17[8];
    const char* v18;
    __int64* v19;
    unsigned __int64 v20;
    unsigned __int64 v21;
    unsigned __int64 v22;
    int v23;
    int v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    int v37;
    int v38;
  } v17_;

  v3 = *(_QWORD*)(a1 + 232);
  v4 = *(_BYTE*)(a1 + 240);
  if (v3 != 0) {
    v17_.v17[0] = 0;
    if (v4 <= 3u) {
      v5 = v3;
      GameRoutine_60a020_alt2((__int64)v17_.v17, GameData_211b3c8[v4]);
      v7 = *(const char**)(v5 + 48);
      v8 = *msg_MessageManager_instance__ptr[0];
      if (v7 != nullptr && *v7 != 0) {
        v9 = *msg_MessageManager_instance__ptr[0];
        v17_.v25 = -1;
        v17_.v26 = -1;
        v17_.v27 = -1;
        v17_.v28 = -1;
        v17_.v29 = -1;
        v17_.v30 = -1;
        v17_.v31 = -1;
        v17_.v32 = -1;
        v17_.v33 = -1;
        v17_.v34 = -1;
        v17_.v35 = -1;
        v17_.v36 = -1;
        v17_.v19 = GameData_212e348 + 2;
        v17_.v20 = 0xFFFF0001FFFF0000LL;
        v17_.v21 = 0xFFFF0004FFFF0002LL;
        v17_.v22 = 0xFFFF0006FFFF0005LL;
        v17_.v37 = 8;
        v17_.v38 = 0;
        v17_.v23 = -65529;
        v17_.v24 = -65528;
        v10 = GameRoutine_a4dbe0_alt1(v9, v7, 0);
      }
      else {
        v10 = GameHr_67ed20(*(_QWORD**)(v5 + 40));
      }
      if (v10 != nullptr) {
        v11 = v10;
      }
      else {
        v11 = *msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020_alt2(v8 + 14704, v11);
      v12 = v17_.v17[0] & 1;
      if ((v17_.v17[0] & 1) != 0) {
        v13 = v17_.v18;
      }
      else {
        v13 = (char*)v17_.v17 + 1;
      }
      if (*GameData_212d460[0] == 0 && v13 != nullptr) {
        v15 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
        GameRoutine_1130770_alt1(v15, v13, nullptr);
        ProcInst_657850_alt1(v15, (__int64)GameData_2130228,
                             (__int64)"talk::Seq", 1, a1);
        v12 = v17_.v17[0] & 1;
      }
      if (v12 != 0 && v17_.v18 != nullptr) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v17_.v18);
      }
    }
  }
}

__int64 ProcDivinationSceneHost_19677e0(__int64 a1)
{
  int v1;
  __int64 result;
  int v4;
  __int64 v6;
  _QWORD v7[2];

  v1 = *(_DWORD*)(a1 + 184);
  v7[1] = &GameData_1ab613e;
  result = game_HashString(&GameData_1ab613e);
  v7[0] = result;
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v7);
    if (result != 0) {
      v4 = *(_DWORD*)(result + 32);
    }
    else {
      v4 = 0;
    }
  }
  if (v1 >= v4 || *(_BYTE*)(a1 + 240) == 3) {
    v6 = *(_QWORD*)(a1 + 8);
    if (v6 != 0) {
      while (1) {
        if (*(_BYTE*)v6 == 2) {
          if (*(_DWORD*)(v6 + 32) == 9) {
            *(_QWORD*)(a1 + 16) = v6;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            break;
          }
        }
        else if (*(_BYTE*)v6 == 0) {
          break;
        }
        v6 += 64;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 ProcDivinationSceneHost_19678b0() { return GameRoutine_196abd0(); }

__int64 ProcDivinationSceneHost_19678c0(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (game_script_hub_talk_g_choice_menu_result != 0 && v1 != 0) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 9) {
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

_QWORD* ProcDivinationSceneHost_1967920(__int64 a1)
{
  _QWORD* result;

  result = GameRoutine_1964940((_QWORD*)(a1 + 184), *(_QWORD*)(a1 + 232));
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_DWORD*)(a1 + 244) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_BYTE*)(a1 + 240) = 3;
  return result;
}

__int64 ProcDivinationSceneHost_1967960(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  char v5;

  if (GameData_21ec7b8 == 0) {
    v1 = result;
    v2 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
    GameRoutine_1130770_alt1(v2, "MID_LGV_Divination_Close_m01", nullptr);
    v3 = *(_QWORD*)(v1 + 40);
    if (v3 != 0) {
      *(_QWORD*)(v3 + 48) = v2;
      *(_QWORD*)(v2 + 56) = *(_QWORD*)(v1 + 40);
    }
    *(_QWORD*)(v1 + 40) = v2;
    *(_QWORD*)(v2 + 24) = "talk::Seq";
    *(_QWORD*)(v2 + 32) = v1;
    *(_DWORD*)(v2 + 140) = (unsigned int)game_HashString32_alt2("talk::Seq");
    *(_QWORD*)(v2 + 64) = 0;
    *(_QWORD*)(v2 + 72) = 24;
    *(_QWORD*)(v2 + 80) = 1;
    *(_QWORD*)(v2 + 8) = &GameData_216de68;
    *(_QWORD*)(v2 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2);
    if ((result & 1) != 0 && (*(_WORD*)(v2 + 136) & 0x100) == 0) {
      *(_WORD*)(v2 + 136) |= 0x100u;
    }
    v4 = *(_BYTE**)(v2 + 32);
    v5 = v4[138];
    if (v5 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v4 + 64LL))(*(_QWORD*)(v2 + 32));
      v5 = v4[138];
    }
    v4[138] = v5 + 1;
    *(_WORD*)(v2 + 136) |= 2u;
  }
  return result;
}

__int64

game_facility_anonymous_ProcDivinationSceneHost_PrepareScene_closure_Invoke()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  __int64 v3;
  _QWORD v4[2];
  __int64 v5;

  v0 = fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      40, 16, 0);
  *(_BYTE*)(v1 + 32) = 0;
  v4[0] = 41;
  v4[1] = 32;
  v5 = v1;
  *(_QWORD*)v1 = 0x83E3BC83E3B782E3LL;
  *(_QWORD*)(v1 + 8) = 0xE3A183E3AB82E3B3LL;
  *(_QWORD*)(v1 + 16) = 0x81E3A08DE55FA983LL;
  *(_QWORD*)(v1 + 24) = 0xA2AEE5A58EE65F84LL;
  result = GameRoutine_1450640(v4);
  if ((v4[0] & 1) != 0 && v5 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v3 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v3);
  }
  return result;
}

__int64 ProcDivinationSceneHost_1967c00()
{
  __int64 v0;
  void* v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  _QWORD v21[2];

  v0 = GameData_21f4000;
  v1 = GameData_2176160;
  v2 = strlen(GameData_2176160);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v2);
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v5, 16,
                                               0);
    v19 = v3;
    v20 = v4;
    v18 = v5 | 1;
    goto LABEL_9;
  }
  LOBYTE(v18) = 2 * v2;
  v4 = (char*)&v18 + 1;
  if (v2 != 0) {
  LABEL_9:
    memmove(v4, v1, v3);
  }
  v4[v3] = 0;
  v6 = *(__int64**)(v0 + 160);
  v7 = *(__int64**)(v0 + 168);
  if (v6 == v7) {
    v8 = 0;
    if ((v18 & 1) == 0) {
      return v8;
    }
    goto LABEL_23;
  }
  while (1) {
    v9 = *v6++;
    v8 = v9;
    v10 = *(_QWORD*)(v9 + 40);
    v11 = v9 + 25;
    v12 = (*(_BYTE*)(v9 + 24) & 1) != 0 ? v10 : v11;
    v13 = v20;
    v14 = (unsigned __int64)(unsigned __int8)v18 >> 1;
    if ((v18 & 1) != 0) {
      v14 = v19;
    }
    else {
      v13 = (char*)&v18 + 1;
    }
    v21[0] = v13;
    v21[1] = v14;
    v15 = game_HashString(v12);
    if (v15 == GameRoutine_7a88a0(v21)) {
      break;
    }
    if (v6 == v7) {
      v8 = 0;
      break;
    }
  }
  if ((v18 & 1) != 0) {
  LABEL_23:
    if (v20 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v16);
    }
  }
  return v8;
}

__int64 ProcDivinationSceneHost_1967da0()
{
  __int64 v0;
  void* v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  _QWORD v21[2];

  v0 = GameData_21f4000;
  v1 = GameData_2176158;
  v2 = strlen(GameData_2176158);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v2);
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v5, 16,
                                               0);
    v19 = v3;
    v20 = v4;
    v18 = v5 | 1;
    goto LABEL_9;
  }
  LOBYTE(v18) = 2 * v2;
  v4 = (char*)&v18 + 1;
  if (v2 != 0) {
  LABEL_9:
    memmove(v4, v1, v3);
  }
  v4[v3] = 0;
  v6 = *(__int64**)(v0 + 160);
  v7 = *(__int64**)(v0 + 168);
  if (v6 == v7) {
    v8 = 0;
    if ((v18 & 1) == 0) {
      return v8;
    }
    goto LABEL_23;
  }
  while (1) {
    v9 = *v6++;
    v8 = v9;
    v10 = *(_QWORD*)(v9 + 40);
    v11 = v9 + 25;
    v12 = (*(_BYTE*)(v9 + 24) & 1) != 0 ? v10 : v11;
    v13 = v20;
    v14 = (unsigned __int64)(unsigned __int8)v18 >> 1;
    if ((v18 & 1) != 0) {
      v14 = v19;
    }
    else {
      v13 = (char*)&v18 + 1;
    }
    v21[0] = v13;
    v21[1] = v14;
    v15 = game_HashString(v12);
    if (v15 == GameRoutine_7a88a0(v21)) {
      break;
    }
    if (v6 == v7) {
      v8 = 0;
      break;
    }
  }
  if ((v18 & 1) != 0) {
  LABEL_23:
    if (v20 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v16);
    }
  }
  return v8;
}

__int64 ProcDivinationSceneHost_DeletingDestructor(__int64 a1)
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

__int64 ProcDivinationSceneHost_1968280()
{
  unsigned __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;

  v0 = game_HashString(&GameData_1ae4353);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4010 + 96);
    if (v1 != 0 && *(_QWORD*)(GameData_21f4010 + 112) != 0) {
      v3 = v1 - 1;
      if ((v1 & (v1 - 1)) != 0) {
        v4 = v0;
        if (v0 >= v1) {
          v4 = v0 % v1;
        }
      }
      else {
        v4 = v3 & v0;
      }
      v5 = *(_QWORD**)(*(_QWORD*)(GameData_21f4010 + 88) + 8 * v4);
      if (v5 != nullptr) {
        v6 = (_QWORD*)*v5;
        if (v6 != nullptr) {
          if ((v1 & v3) == 0) {
            while (1) {
              v9 = v6[1];
              if (v9 == v0) {
                if (v6[2] == v0) {
                  goto LABEL_27;
                }
              }
              else if ((v9 & v3) != v4) {
                goto LABEL_25;
              }
              v6 = (_QWORD*)*v6;
              v8 = 0;
              if (v6 == nullptr) {
                return GameRoutine_14877f0(v8, 0x13F000000LL);
              }
            }
          }
          do {
            v7 = v6[1];
            if (v7 == v0) {
              if (v6[2] == v0) {
              LABEL_27:
                v8 = v6[3];
                return GameRoutine_14877f0(v8, 0x13F000000LL);
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                break;
              }
            }
            v6 = (_QWORD*)*v6;
          } while (v6 != nullptr);
        }
      }
    }
  }

LABEL_25:
  v8 = 0;
  return GameRoutine_14877f0(v8, 0x13F000000LL);
}

__int64 ProcDivinationSceneHost_Unknown22()
{
  __int64 v0;
  unsigned __int64 v1;
  __int64 v2;
  _QWORD v4[2];
  _QWORD v5[4];
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  v6 = nullptr;
  v7 = 0;
  memset(v5, 0, sizeof(v5));
  v8 = 0;
  v4[0] = game_facility_SceneManager_FacilityMapArgs_vtable;
  v4[1] = 0;
  GameRoutine_1389160(v4, &GameData_1a9b081, 6);
  GameRoutine_138a920(*(_QWORD*)GameData_212dce8, v4);
  v4[0] = &game_facility_SceneManager_IMapArgs_vtable;
  if (v6 == v5) {
    v0 = 32;
    goto LABEL_5;
  }
  if (v6 != nullptr) {
    v0 = 40;
  LABEL_5:
    (*(void (**)(_QWORD*))(*v6 + v0))(v6);
  }
  HIBYTE(v4[0]) = 0;
  LOBYTE(v4[0]) = 12;
  *(_DWORD*)((char*)v4 + 1) = -476017179;
  *(_WORD*)((char*)v4 + 5) = -31615;
  v1 = GameRoutine_19513c0((unsigned __int64)v4);
  if ((v4[0] & 1) != 0 && v5[0] != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    v1 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
  }
  return GameRoutine_19688e0(v1);
}

__int64 ProcDivinationSceneHost_Destructor(__int64* a1)
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
  *a1 = (__int64)&GameData_211a498;
  if (v1 != 0) {
    a1[6] = v1;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  v5 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v5;
  GameRoutine_1958ed0((__int64)a1, v3);
  *a1 = (__int64)(GameData_2132488 + 2);
  v6 = (_QWORD*)GameData_212dce8;
  v7 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
    }
    *v6 = 0;
  }
  game_facility_ReleaseGroups();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v3);
  return GameRoutine_658c00(a1 - 8);
}

__int64 ProcDivinationSceneHost_DeletingDestructor_1968600(__int64* a1)
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
  *a1 = (__int64)&GameData_211a498;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[6] = v1;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(v5 + v6);
  }
  v7 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v7;
  GameRoutine_1958ed0((__int64)a1, v3);
  *a1 = (__int64)(GameData_2132488 + 2);
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
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v3);
  GameRoutine_658c00(a1 - 8);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v11);
}

#pragma GCC visibility pop
