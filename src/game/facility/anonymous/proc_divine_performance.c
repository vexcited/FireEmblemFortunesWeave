#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1958ed0(__int64 result, __int64);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_7a88a0(_QWORD);
__int64 SceneCharacter_1400a90(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern _DWORD* GameData_2130fb8;
extern _UNKNOWN* GameData_2176158;
extern __int64 (*GameData_211b828[])();
extern __int64 (*game_facility_anonymous_ProcDivinePerformance_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 GameData_21f4000;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_2132488;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 ProcDivinePerformance_196d6e0(__int64 result);
unsigned __int64
ProcDivinePerformance_196d760_alt1() __asm__("ProcDivinePerformance_196d760");
__int64 ProcDivinePerformance_Destructor(__int64* a1);
__int64 ProcDivinePerformance_DeletingDestructor_alt1(__int64* a1) __asm__(
    "ProcDivinePerformance_DeletingDestructor");
__attribute__((swiftcall)) void
GameRoutine_1950740(__attribute__((swift_indirect_result)) void*, _QWORD*,
                    __int64, unsigned int);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__n128
game_facility_anonymous_ProcDivinePerformance_StartPerformance_closure_Invoke_alt1() __asm__(
    "game_facility_anonymous_ProcDivinePerformance_StartPerformance_closure_"
    "Invoke");
__attribute__((swiftcall)) void
ForceContinueBGMBinder_1487fc0(PSEUDO_X8, __int64, unsigned __int8);
__attribute__((swiftcall)) void game_facility_1953090(PSEUDO_X8, _QWORD*,
                                                      _QWORD*, __int64, float);
__int64 GameHr_7a88a0(__int64*);
__int64 ProcOpening_142ea60(__int64);
__int64 SceneCharacter_1401ce0(__int64, _QWORD*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_facility_14107c0(__int64, __int64);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN GameData_1a87a98;
extern __int64 (*GameData_211b6f8[])();
extern __int64 GameData_2241740;
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_anonymous_ProcDivinePerformance_StartPerformance(__int64 a1);
void ProcDivinePerformance_196d3c0(__int64 a1);
__int64 SceneCharacter_1400a90_alt1(_QWORD*,
                                    __int64) __asm__("SceneCharacter_1400a90");
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64
game_facility_ReleaseGroups_alt1() __asm__("game_facility_ReleaseGroups");
extern __int64 (*ProcDivinePerformance_Destructor_ptr[])();
void FacilitySceneBase_1958ed0(__int64, __int64);
void GameRoutine_1950740_alt1(__int64, __int64,
                              unsigned int) __asm__("GameRoutine_1950740");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void ProcDivinePerformance_196d760();
void game_facility_anonymous_ProcDivinePerformance_StartPerformance_closure_Invoke();
void ProcDivinePerformance_DeletingDestructor(__int64* a1);

void game_facility_anonymous_ProcDivinePerformance_StartPerformance(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  void* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  char* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  float v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  struct {
    __int64 v33;
    __int64 v34;
  } v33_;
  struct {
    __int64 v35;
    __int64 v36;
    __int64 v37;
  } v35_;
  struct {
    __int64 v38[3];
    char gap72_[8];
    __int64* v39;
  } v38_;

  v2 = *(_QWORD*)GameData_212dce8;
  v3 = GameData_2176158;
  v4 = strlen_alt1((const char*)GameData_2176158);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v5 = v4;
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v4 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8, 16, 0);
    v38_.v38[1] = v5;
    v38_.v38[2] = (__int64)v7;
    v38_.v38[0] = v8 | 1;
    goto LABEL_9;
  }
  LOBYTE(v38_.v38[0]) = 2 * v4;
  v7 = (char*)v38_.v38 + 1;
  if (v4 != 0) {
  LABEL_9:
    memmove_alt1((__int64)v7, (__int64)v3, v5);
  }
  v7[v5] = 0;
  v9 = *(__int64**)(v2 + 160);
  v10 = *(__int64**)(v2 + 168);
  if (v9 == v10) {
    v11 = 0;
    if ((v38_.v38[0] & 1) == 0) {
      goto LABEL_27;
    }
    goto LABEL_23;
  }
  while (1) {
    v12 = *v9++;
    v11 = v12;
    v13 = *(_QWORD*)(v12 + 40);
    v14 = v12 + 25;
    v15 = (*(_BYTE*)(v12 + 24) & 1) != 0 ? v13 : v14;
    v16 = (char*)v38_.v38[2];
    v17 = (unsigned __int64)LOBYTE(v38_.v38[0]) >> 1;
    if ((v38_.v38[0] & 1) != 0) {
      v17 = v38_.v38[1];
    }
    else {
      v16 = (char*)v38_.v38 + 1;
    }
    v35_.v35 = (__int64)v16;
    v35_.v36 = v17;
    v18 = game_HashString_alt1(v15);
    if (v18 == GameHr_7a88a0(&v35_.v35)) {
      break;
    }
    if (v9 == v10) {
      v11 = 0;
      break;
    }
  }
  if ((v38_.v38[0] & 1) != 0) {
  LABEL_23:
    if (v38_.v38[2] != 0) {
      v19 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v19, v38_.v38[2]);
    }
  }
LABEL_27:
  if (v11 != 0) {
    v20 = fw_memory_HeapManager_Allocate_alt1(*v6, 48, 16, 0);
    *(_BYTE*)(v20 + 44) = 0;
    v35_.v35 = 49;
    v35_.v36 = 44;
    v35_.v37 = v20;
    *(_DWORD*)(v20 + 40) = -1199445571;
    *(_QWORD*)(v20 + 16) = 0xB383E3A783E3B782LL;
    *(_QWORD*)(v20 + 24) = 0x5F8481E3A08DE55FLL;
    *(_QWORD*)(v20 + 32) = 0x8AE69C9EE690B5E7LL;
    *(_QWORD*)v20 = 0x83E3A383E3AD82E3LL;
    *(_QWORD*)(v20 + 8) = 0xE3BC83E3A283E3A9LL;
    game_facility_14107c0((__int64)v38_.v38, (__int64)&v35_.v35);
    SceneCharacter_1401ce0(v11, v38_.v38);
    if ((v38_.v38[0] & 1) != 0 && v38_.v38[2] != 0) {
      v21 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v21, v38_.v38[2]);
    }
    if ((v35_.v35 & 1) != 0 && v35_.v37 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v22, v35_.v37);
    }
    BYTE4(v38_.v38[2]) = 0;
    LOBYTE(v38_.v38[0]) = 38;
    LODWORD(v38_.v38[2]) = -1971133521;
    *(__int64*)((char*)&v38_.v38[1] + 1) = 0xAF8CE6A8AAE95F84LL;
    *(__int64*)((char*)v38_.v38 + 1) = 0x81E3A08DE55F4553LL;
    ForceContinueBGMBinder_1487fc0((void*)((__int64)&v35_.v35),
                                   (__int64)v38_.v38, 1u);
    if ((v38_.v38[0] & 1) != 0 && v38_.v38[2] != 0) {
      v23 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v23, v38_.v38[2]);
    }
  }
  v24 = (float)((float)(int)ProcOpening_142ea60((__int64)&GameData_1a87a98) *
                0x1.0aaaaa0000000p+4f) /
        0x1.f400000000000p+9f;
  v25 = (_QWORD*)GameData_2241740;
  v26 = fw_memory_HeapManager_Allocate_alt1(*v6, 32, 16, 0);
  *(_BYTE*)(v26 + 27) = 0;
  v35_.v35 = 33;
  v35_.v36 = 27;
  v35_.v37 = v26;
  *(_DWORD*)(v26 + 23) = -1229199995;
  *(_QWORD*)(v26 + 16) = 0x8581E98883E3AF82LL;
  *(_QWORD*)v26 = 0x82E38481E3A08DE5LL;
  *(_QWORD*)(v26 + 8) = 0xE3A782E39583E3A8LL;
  v38_.v38[0] = (__int64)GameData_211b6f8;
  v38_.v39 = v38_.v38;
  game_facility_1953090((void*)(&v33_.v33), v25, &v35_.v35, (__int64)v38_.v38,
                        v24);
  v27 = v33_.v33;
  v28 = v33_.v34;
  v29 = *(_QWORD*)(a1 + 192);
  v33_.v33 = 0;
  v33_.v34 = 0;
  *(_QWORD*)(a1 + 184) = v27;
  *(_QWORD*)(a1 + 192) = v28;
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    std___1___shared_weak_count___release_weak_alt2(v29);
  }
  v30 = v33_.v34;
  if (v33_.v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak_alt2(v30);
  }
  if (v38_.v39 == v38_.v38) {
    v31 = 32;
    goto LABEL_53;
  }
  if (v38_.v39 != nullptr) {
    v31 = 40;
  LABEL_53:
    (*(void (**)(__int64))(*v38_.v39 + v31))((__int64)v38_.v39);
  }
  if ((v35_.v35 & 1) != 0 && v35_.v37 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v32, v35_.v37);
  }
}

void ProcDivinePerformance_196d3c0(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;
  void* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int8* v29;
  unsigned int v30;
  bool v31;
  int v32;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  _QWORD* v37;
  struct {
    __int64 v38;
    unsigned __int64 v39;
    char* v40;
  } v38_;
  __int64 v41[2];

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      v24 = *(_QWORD*)(a1 + 184);
      if ((*(_BYTE*)(v24 + 136) & 1) != 0) {
        goto LABEL_50;
      }
      v25 = *(_QWORD**)(v24 + 96);
      *(_QWORD*)(v24 + 96) = 0;
      *(_BYTE*)(v24 + 136) = 1;
      if (v25 == (_QWORD*)(v24 + 64)) {
        v26 = 32;
      }
      else {
        if (v25 == nullptr) {
          goto LABEL_48;
        }
        v26 = 40;
      }
      (*(void (**)(__int64))(*v25 + v26))((__int64)v25);
    LABEL_48:
      v27 = *(_QWORD*)(v24 + 112);
      v28 = *(_QWORD*)(v24 + 120);
      if (v27 == v28) {
      LABEL_49:
        *(_QWORD*)(v24 + 120) = v27;
        goto LABEL_50;
      }
      while (1) {
        v35 = *(_QWORD**)(v28 - 16);
        *(_QWORD*)(v28 - 16) = 0;
        if ((_QWORD*)(v28 - 48) == v35) {
          v36 = 32;
        }
        else {
          if (v35 == nullptr) {
            goto LABEL_60;
          }
          v36 = 40;
        }
        (*(void (**)(__int64))(*v35 + v36))((__int64)v35);
        v37 = *(_QWORD**)(v28 - 16);
        if ((_QWORD*)(v28 - 48) == v37) {
          v34 = 32;
        }
        else {
          if (v37 == nullptr) {
            goto LABEL_60;
          }
          v34 = 40;
        }
        (*(void (**)(__int64))(*v37 + v34))((__int64)v37);
      LABEL_60:
        v28 -= 64;
        if (v28 == v27) {
          goto LABEL_49;
        }
      }
    }
  }
  v4 = GameData_21f4000;
  v5 = GameData_2176158;
  v6 = strlen_alt1((const char*)GameData_2176158);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v9, 16, 0);
    v38_.v39 = v7;
    v38_.v40 = v8;
    v38_.v38 = v9 | 1;
    goto LABEL_15;
  }
  LOBYTE(v38_.v38) = 2 * v6;
  v8 = (char*)&v38_.v38 + 1;
  if (v6 != 0) {
  LABEL_15:
    memmove_alt1((__int64)v8, (__int64)v5, v7);
  }
  v8[v7] = 0;
  v10 = *(__int64**)(v4 + 160);
  v11 = *(__int64**)(v4 + 168);
  if (v10 == v11) {
    v12 = 0;
    if ((v38_.v38 & 1) == 0) {
      goto LABEL_33;
    }
    goto LABEL_29;
  }
  while (1) {
    v13 = *v10++;
    v12 = v13;
    v14 = *(_QWORD*)(v13 + 40);
    v15 = v13 + 25;
    v16 = (*(_BYTE*)(v13 + 24) & 1) != 0 ? v14 : v15;
    v17 = v38_.v40;
    v18 = (unsigned __int64)(unsigned __int8)v38_.v38 >> 1;
    if ((v38_.v38 & 1) != 0) {
      v18 = v38_.v39;
    }
    else {
      v17 = (char*)&v38_.v38 + 1;
    }
    v41[0] = (__int64)v17;
    v41[1] = v18;
    v19 = game_HashString_alt1(v16);
    if (v19 == GameHr_7a88a0(v41)) {
      break;
    }
    if (v10 == v11) {
      v12 = 0;
      break;
    }
  }
  if ((v38_.v38 & 1) != 0) {
  LABEL_29:
    if (v38_.v40 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, (__int64)v38_.v40);
    }
  }
LABEL_33:
  if (v12 == 0) {
    return;
  }
  v21 = *(_QWORD*)(v12 + 128);
  v22 = *(_QWORD*)(v12 + 136);
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
    v23 = *(_QWORD*)(v21 + 56);
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v23 != 0) {
        return;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak_alt2(v22);
      if (v23 != 0) {
        return;
      }
    }
  }
  else if (*(_QWORD*)(v21 + 56) != 0) {
    return;
  }
LABEL_50:
  v29 = *(unsigned __int8**)(a1 + 16);
  if (v29 != nullptr) {
    v30 = *v29;
    v31 = v30 > 0x10;
    v32 = (1 << v30) & 0x1CE00;
    if (!v31 && v32 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(a1 + 136) |= 8u;
}

__int64 ProcDivinePerformance_196d6e0(__int64 result)
{
  int v1;
  int v2;
  int v3;
  __int64 v4;

  if (game_ProcGameSkipView_instance_ != 0 &&
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 <=
          2) {
    v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v2 = (v1 & 8) != 0 ? 2 : 3;
    v3 = v2 & v1;
    v4 = *(_QWORD*)(result + 8);
    if (v3 == 0 && v4 != 0) {
      while (1) {
        if (*(_BYTE*)v4 == 2) {
          if (*(_DWORD*)(v4 + 32) == 0) {
            *(_QWORD*)(result + 16) = v4;
            *(_WORD*)(result + 136) &= ~0x80u;
            return result;
          }
        }
        else if (*(_BYTE*)v4 == 0) {
          return result;
        }
        v4 += 64;
      }
    }
  }
  return result;
}

void ProcDivinePerformance_196d760()
{
  __int64 v0;
  void* v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    unsigned __int64 v18;
    char* v19;
  } v17_;
  __int64 v20[2];

  v0 = GameData_21f4000;
  v1 = GameData_2176158;
  v2 = strlen_alt1((const char*)GameData_2176158);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v5, 16, 0);
    v17_.v18 = v3;
    v17_.v19 = v4;
    v17_.v17 = v5 | 1;
    goto LABEL_9;
  }
  LOBYTE(v17_.v17) = 2 * v2;
  v4 = (char*)&v17_.v17 + 1;
  if (v2 != 0) {
  LABEL_9:
    memmove_alt1((__int64)v4, (__int64)v1, v3);
  }
  v4[v3] = 0;
  v6 = *(__int64**)(v0 + 160);
  v7 = *(__int64**)(v0 + 168);
  if (v6 == v7) {
    v8 = nullptr;
    if ((v17_.v17 & 1) == 0) {
      goto LABEL_27;
    }
    goto LABEL_23;
  }
  while (1) {
    v9 = *v6++;
    v8 = (_QWORD*)v9;
    v10 = *(_QWORD*)(v9 + 40);
    v11 = v9 + 25;
    v12 = (*(_BYTE*)(v9 + 24) & 1) != 0 ? v10 : v11;
    v13 = v17_.v19;
    v14 = (unsigned __int64)(unsigned __int8)v17_.v17 >> 1;
    if ((v17_.v17 & 1) != 0) {
      v14 = v17_.v18;
    }
    else {
      v13 = (char*)&v17_.v17 + 1;
    }
    v20[0] = (__int64)v13;
    v20[1] = v14;
    v15 = game_HashString_alt1(v12);
    if (v15 == GameHr_7a88a0(v20)) {
      break;
    }
    if (v6 == v7) {
      v8 = nullptr;
      break;
    }
  }
  if ((v17_.v17 & 1) != 0) {
  LABEL_23:
    if (v17_.v19 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v17_.v19);
    }
  }
LABEL_27:
  if (v8 != nullptr) {
    BYTE2(v17_.v17) = 1;
    LOWORD(v17_.v17) = 257;
    SceneCharacter_1400a90_alt1(v8, (__int64)&v17_.v17);
  }
}

void game_facility_anonymous_ProcDivinePerformance_StartPerformance_closure_Invoke()
{
  __int64 v0;
  __int64 v1;
  struct {
    char v2;
    _BYTE v3[13];
    char v4;
    char gap15_[1];
    __int64 v5;
  } v2_;
  char v6;
  unsigned __int64 v7;
  _BYTE v8[11];
  char v9;
  __int64 v10;

  v9 = 0;
  v2_.v4 = 0;
  v6 = 38;
  *(_DWORD*)&v8[7] = -1699813958;
  *(_QWORD*)v8 = 0xBAA2E79C9EE690B5LL;
  v7 = 0xE75F8481E3A08DE5LL;
  v2_.v2 = 26;
  *(_QWORD*)v2_.v3 = 0xE75F8481E3A08DE5LL;
  *(_QWORD*)&v2_.v3[5] = 0x8AB8E4A49BE75F84LL;
  GameRoutine_1950740_alt1((__int64)&v6, (__int64)&v2_.v2, 1u);
  v0 = v10;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v0 + 16LL))(v0);
    std___1___shared_weak_count___release_weak_alt2(v0);
    if ((v2_.v2 & 1) == 0) {
      return;
    }
  }
  else if ((v2_.v2 & 1) == 0) {
    return;
  }
  if (v2_.v5 != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1, v2_.v5);
  }
}

__int64 ProcDivinePerformance_Destructor(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;

  v1 = a1[5];
  *(a1 - 19) = (__int64)game_facility_anonymous_ProcDivinePerformance_vtable;
  v3 = (__int64)(a1 - 19);
  *a1 = (__int64)GameData_211b828;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v4 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v4;
  GameRoutine_1958ed0((__int64)a1, v3);
  *a1 = (__int64)(GameData_2132488 + 2);
  v5 = (_QWORD*)GameData_212dce8;
  v6 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    if (*v5 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v5 + 8LL))(*v5);
    }
    *v5 = 0;
  }
  game_facility_ReleaseGroups();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v3);
  return GameRoutine_658c00(a1 - 8);
}

void ProcDivinePerformance_DeletingDestructor(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v8;

  v1 = a1[5];
  *(a1 - 19) = (__int64)game_facility_anonymous_ProcDivinePerformance_vtable;
  v3 = (__int64)(a1 - 19);
  *a1 = (__int64)ProcDivinePerformance_Destructor_ptr;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt2(v1);
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
