#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_2043cf8[])();
extern __int64 (*game_facility_anonymous_ProcConversation_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2132488;
__int64 ProcConversation_Destructor_1496620_alt1(__int64 a1) __asm__(
    "ProcConversation_Destructor_1496620");
__int64 ProcConversation_DeletingDestructor_1496750_alt1(__int64 a1) __asm__(
    "ProcConversation_DeletingDestructor_1496750");
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21f4000;
extern __int64 GameData_22420e0;
float GameRoutine_144f360(__int64);
void ProcConversation_1496480();
void game_facility_anonymous_ProcConversation_PlaySpecialTelop_closure_Invoke();
__int64 ProcConversation_Destructor_14968a0_alt1(__int64* a1) __asm__(
    "ProcConversation_Destructor_14968a0");
__int64 ProcConversation_DeletingDestructor_14969d0_alt1(__int64* a1) __asm__(
    "ProcConversation_DeletingDestructor_14969d0");
_QWORD* ProcConversation_1495fa0(_QWORD* result);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64
game_facility_ReleaseGroups_alt1() __asm__("game_facility_ReleaseGroups");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64 (*ProcConversation_Destructor_14968a0_ptr[])();
float GameHr_144f360(__int64);
void FacilitySceneBase_1958ed0(__int64, __int64);
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcConversation_Destructor_1496620(__int64 a1);
void ProcConversation_DeletingDestructor_1496750(__int64 a1);
void ProcConversation_Destructor_14968a0(__int64* a1);
void ProcConversation_DeletingDestructor_14969d0(__int64* a1);
__attribute__((swiftcall)) void game_facility_144f120(PSEUDO_X8, __int64,
                                                      __int64);
__int64 GameHr_14127e0(__int64, unsigned __int8*);
__int64 SceneManager_138e5e0(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
char* game_util_Format(const char*, ...);
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1ae3834[];
float game_facility_14107c0(__int64, __int64);
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
void game_facility_anonymous_ProcConversation_PlaySpecialTelop();
_QWORD* SceneCharacter_14020c0(__int64);
__attribute__((swiftcall)) void
SceneTalk_1497520(PSEUDO_X8, __int64, __int64, __int64, __int64, __int64, int);
const char* game_HashString32(const char* result);
extern _UNKNOWN GameData_216de68;
extern __int16 GameData_224ae48;
extern __int64 GameData_21ec7b8;
unsigned __int64 GameRoutine_1130770(__int64, const char*, __int64*);
void ProcConversation_1496100(__int64 a1);

void game_facility_anonymous_ProcConversation_PlaySpecialTelop()
{
  __int64* v0;
  char* v1;
  __int64 v2;
  __int64 v3;
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    __int64 v31;
    __int64 v32;
  } v31_;
  struct {
    _QWORD v33[2];
    __int64 v34;
  } v33_;
  struct {
    __int64 v35;
    unsigned __int64 v36;
    char* v37;
  } v35_;

  v0 = (__int64*)GameData_212dce8;
  v1 = (char*)&v35_.v35 + 1;
  v2 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
  if (v2 == 0) {
    goto LABEL_26;
  }
  v3 = v2;
  v4 = game_util_Format(GameData_1ae3834, 0);
  v5 = strlen(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_65;
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16,
                                               0);
    v35_.v36 = v6;
    v35_.v37 = v7;
    v35_.v35 = v8 | 1;
    goto LABEL_10;
  }
  v7 = (char*)&v35_.v35 + 1;
  LOBYTE(v35_.v35) = 2 * v5;
  if (v5 != 0) {
  LABEL_10:
    memmove((__int64)v7, (__int64)v4, v6);
  }
  v7[v6] = 0;
  game_facility_14107c0((__int64)v33_.v33, (__int64)&v35_.v35);
  v9 = *(_QWORD*)(v3 + 112);
  v10 = *(_QWORD*)(v3 + 120);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    GameHr_14127e0(v9, (unsigned __int8*)v33_.v33);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak_alt1(v10);
    }
    if ((v33_.v33[0] & 1) == 0) {
      goto LABEL_21;
    }
    goto LABEL_17;
  }
  GameHr_14127e0(v9, (unsigned __int8*)v33_.v33);
  if ((v33_.v33[0] & 1) != 0) {
  LABEL_17:
    if (v33_.v34 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v33_.v34);
    }
  }
LABEL_21:
  if ((v35_.v35 & 1) != 0 && v35_.v37 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (__int64)v35_.v37);
  }
LABEL_26:
  v13 = SceneManager_138e5e0(*v0);
  if (v13 == 0) {
    goto LABEL_51;
  }
  v14 = v13;
  v15 = game_util_Format(GameData_1ae3834, 1);
  v16 = strlen(v15);
  if (v16 > 0xFFFFFFFFFFFFFFF6LL) {
  LABEL_65:
    String_60a1d0();
  }
  v17 = v16;
  if (v16 >= 0x17) {
    if ((v16 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v16 | 7) + 1;
    }
    v1 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v18,
                                               16, 0);
    v35_.v36 = v17;
    v35_.v37 = v1;
    v35_.v35 = v18 | 1;
    goto LABEL_35;
  }
  LOBYTE(v35_.v35) = 2 * v16;
  if (v16 != 0) {
  LABEL_35:
    memmove((__int64)v1, (__int64)v15, v17);
  }
  v1[v17] = 0;
  game_facility_14107c0((__int64)v33_.v33, (__int64)&v35_.v35);
  v19 = *(_QWORD*)(v14 + 112);
  v20 = *(_QWORD*)(v14 + 120);
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                              memory_order_relaxed);
    GameHr_14127e0(v19, (unsigned __int8*)v33_.v33);
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak_alt1(v20);
    }
    if ((v33_.v33[0] & 1) == 0) {
      goto LABEL_46;
    }
    goto LABEL_42;
  }
  GameHr_14127e0(v19, (unsigned __int8*)v33_.v33);
  if ((v33_.v33[0] & 1) != 0) {
  LABEL_42:
    if (v33_.v34 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v33_.v34);
    }
  }
LABEL_46:
  if ((v35_.v35 & 1) != 0 && v35_.v37 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v35_.v37);
  }
LABEL_51:
  v23 = *(_QWORD*)(*v0 + 264);
  if (v23 != 0) {
    v24 = *(_QWORD*)(*v0 + 256);
    v25 = *(_QWORD*)(*v0 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                              memory_order_relaxed);
    v26 = std___1___shared_weak_count_lock_alt1(v25);
    std___1___shared_weak_count___release_weak_alt1(v23);
    if (v26 != 0) {
      if (v24 != 0) {
        v27 = fw_memory_g_heap_manager_ptr;
        v28 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
        v33_.v33[0] = 49;
        v33_.v33[1] = 41;
        v33_.v34 = v28;
        *(_WORD*)(v28 + 40) = 173;
        *(_QWORD*)(v28 + 16) = 0x83E38683E35FAF82LL;
        *(_QWORD*)(v28 + 24) = 0x5FA882E39E83E3ABLL;
        *(_QWORD*)(v28 + 32) = 0xB8E4B1A9E89ABCE4LL;
        *(_QWORD*)v28 = 0x83E3A183E3AB82E3LL;
        *(_QWORD*)(v28 + 8) = 0xE3BC83E3AF83E3A9LL;
        game_facility_144f120((void*)(&v31_.v31), v24, (__int64)v33_.v33);
        v29 = v31_.v32;
        if (v31_.v32 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v31_.v32 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
          std___1___shared_weak_count___release_weak_alt1(v29);
        }
        if ((v33_.v33[0] & 1) != 0 && v33_.v34 != 0) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v27 + v30, v33_.v34);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        std___1___shared_weak_count___release_weak_alt1(v26);
      }
    }
  }
}

_QWORD* ProcConversation_1495fa0(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = result[24];
  if (v1 != 0 && (*(_BYTE*)(v1 + 136) & 1) == 0) {
    result = *(_QWORD**)(v1 + 96);
    *(_QWORD*)(v1 + 96) = 0;
    *(_BYTE*)(v1 + 136) = 1;
    if (result == (_QWORD*)(v1 + 64)) {
      v2 = 32;
    }
    else {
      if (result == nullptr) {
        goto LABEL_8;
      }
      v2 = 40;
    }
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v2))((__int64)result);
  LABEL_8:
    v3 = *(_QWORD*)(v1 + 112);
    v4 = *(_QWORD*)(v1 + 120);
    if (v3 == v4) {
    LABEL_9:
      *(_QWORD*)(v1 + 120) = v3;
      return result;
    }
    while (1) {
      result = *(_QWORD**)(v4 - 16);
      *(_QWORD*)(v4 - 16) = 0;
      if ((_QWORD*)(v4 - 48) == result) {
        v6 = 32;
      }
      else {
        if (result == nullptr) {
          goto LABEL_13;
        }
        v6 = 40;
      }
      (*(void (**)(__int64))(*result + v6))((__int64)result);
      result = *(_QWORD**)(v4 - 16);
      if ((_QWORD*)(v4 - 48) == result) {
        v5 = 32;
      }
      else {
        if (result == nullptr) {
          goto LABEL_13;
        }
        v5 = 40;
      }
      result =
          (_QWORD*)(*(__int64 (**)(__int64))(*result + v5))((__int64)result);
    LABEL_13:
      v4 -= 64;
      if (v4 == v3) {
        goto LABEL_9;
      }
    }
  }
  return result;
}

void ProcConversation_1496100(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  char v4;
  const char* v5;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  char v10;
  __int64 v11;
  struct {
    __int64 v12[2];
    const char* v13;
  } v12_;

  v2 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
  if (v2 != 0) {
    v3 = SceneCharacter_14020c0(v2);
    SceneTalk_1497520((void*)(v12_.v12), (__int64)"Thermae", 7, (__int64)v3,
                      (__int64)"m01", 3, 3);
    v4 = v12_.v12[0] & 1;
    if ((v12_.v12[0] & 1) != 0) {
      v5 = v12_.v13;
    }
    else {
      v5 = (char*)v12_.v12 + 1;
    }
  }
  else {
    v4 = 0;
    LOWORD(v12_.v12[0]) = 0;
    v5 = (char*)v12_.v12 + 1;
  }
  if (GameData_21ec7b8 == 0 && v5 != nullptr) {
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v7, v5, nullptr);
    v8 = *(_QWORD*)(a1 + 40);
    if (v8 != 0) {
      *(_QWORD*)(v8 + 48) = v7;
      *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v7;
    *(_QWORD*)(v7 + 24) = "talk::Seq";
    *(_QWORD*)(v7 + 32) = a1;
    *(_DWORD*)(v7 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 24;
    *(_QWORD*)(v7 + 80) = 1;
    *(_QWORD*)(v7 + 8) = &GameData_216de68;
    *(_QWORD*)(v7 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
        (*(_WORD*)(v7 + 136) & 0x100) == 0) {
      *(_WORD*)(v7 + 136) |= 0x100u;
    }
    v9 = *(_BYTE**)(v7 + 32);
    v10 = v9[138];
    if (v10 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v9 + 64LL))(*(_QWORD*)(v7 + 32));
      v10 = v9[138];
    }
    v9[138] = v10 + 1;
    *(_WORD*)(v7 + 136) |= 2u;
    v4 = v12_.v12[0] & 1;
  }
  GameData_224ae48 = 258;
  if (v4 != 0 && v12_.v13 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v12_.v13);
  }
}

void ProcConversation_1496480()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  long double v4;

  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v0 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4000 + 256);
    v2 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock_alt1(v2),
    v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v0),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v3 != 0) {
      if (v1 != 0) {
        *(float*)&v4 = GameHr_144f360(v1),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v3 + 16LL))(v3, v4),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v3),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
}

void game_facility_anonymous_ProcConversation_PlaySpecialTelop_closure_Invoke()
{
  if (GameData_22420e0 != 0) {
    *(_WORD*)(GameData_22420e0 + 880) = 1;
  }
}

void ProcConversation_Destructor_1496620(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  v2 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)a1 = game_facility_anonymous_ProcConversation_vtable;
  *(_QWORD*)(a1 + 152) = ProcConversation_Destructor_14968a0_ptr;
  v3 = a1 + 152;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v4 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
    v3 = v4;
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

void ProcConversation_DeletingDestructor_1496750(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v9;

  v2 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)a1 = game_facility_anonymous_ProcConversation_vtable;
  *(_QWORD*)(a1 + 152) = ProcConversation_Destructor_14968a0_ptr;
  v3 = a1 + 152;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v4 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
    v3 = v4;
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
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, a1);
}

void ProcConversation_Destructor_14968a0(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;

  v1 = a1[6];
  *(a1 - 19) = (__int64)game_facility_anonymous_ProcConversation_vtable;
  v3 = (__int64)(a1 - 19);
  *a1 = (__int64)ProcConversation_Destructor_14968a0_ptr;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  v4 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v4;
  FacilitySceneBase_1958ed0((__int64)a1, v3);
  *a1 = (__int64)(GameData_2132488 + 2);
  v5 = (_QWORD*)GameData_212dce8;
  v6 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    if (*v5 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v5 + 8LL))(*v5);
    }
    *v5 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(v3);
  GameRoutine_658c00_alt1(a1 - 8);
}

void ProcConversation_DeletingDestructor_14969d0(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v8;

  v1 = a1[6];
  *(a1 - 19) = (__int64)game_facility_anonymous_ProcConversation_vtable;
  v3 = (__int64)(a1 - 19);
  *a1 = (__int64)ProcConversation_Destructor_14968a0_ptr;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  v4 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v4;
  FacilitySceneBase_1958ed0((__int64)a1, v3);
  *a1 = (__int64)(GameData_2132488 + 2);
  v5 = (_QWORD*)GameData_212dce8;
  v6 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    if (*v5 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v5 + 8LL))(*v5);
    }
    *v5 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(v3);
  GameRoutine_658c00_alt1(a1 - 8);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v3);
}

#pragma GCC visibility pop
