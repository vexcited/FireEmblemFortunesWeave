#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* CharacterBuilder_107e090(_QWORD* result, __int64);
_QWORD* CharacterDie_10ba960(_QWORD* result);
_QWORD* GameRoutine_70f1c0(_QWORD* result, unsigned __int64*);
_QWORD* game_combat_CombatLegionGroup_AddCharacter(_QWORD*, __int64, __int64,
                                                   __int64, unsigned __int64);
__attribute__((swiftcall)) void
CombatLegionGroup_e57320(PSEUDO_X8, __int64, __int64, __int64, char);
__int64* CharacterModel_1070c00(__int64, __int64);
__int64* GameRoutine_e2b120(__int64);
__int64* Manager_bc6460(_QWORD*, __int64, char);
unsigned __int128 Manager_bc6460_pair(_QWORD*, __int64,
                                      char) __asm__("Manager_bc6460");
__int64 CharacterAnimator_1079e10(__int64);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 CmdBtlCombatWindow_17c3cd0(__int64 result, char);
__int64 CombatHUDWindow_183de10(__int64 result, char);
__int64 CombatLegionManager_e2fc00(_QWORD*, __int64*, __int64, int);
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_1068360(__int64 result);
__int64 GameRoutine_106dcd0(_QWORD*, char, char);
__int64 GameRoutine_10792b0(__int64 result, int);
__int64 GameRoutine_10917e0(_QWORD*, _QWORD*);
__int64 GameRoutine_10d4680(__int64);
__int64 GameRoutine_e3e720(__int64, __int64*, __int64, __int64,
                           unsigned __int64, char, unsigned __int64);
__int64 ProcManager_10ff150(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_108c8a0(int);
__int64 game_HashString(__int64 result);
__int64 game_character_1084940(__int64 result, char, float);
__int64 game_combat_1099520(__int64, int*);
__int64 game_combat_CombatCamera_SubscribeSignals(__int64, __int64);
__int64
game_combat_CombatCharacterObserver_CombatCharacterObserver(__int64 result,
                                                            _QWORD*);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
double snd_getDefineValue(__int64);
extern _DWORD* GameData_212d168;
extern _UNKNOWN* GameData_212deb8;
extern _UNKNOWN* GameData_212eda0;
extern _UNKNOWN* GameData_212fe90;
extern _UNKNOWN* GameData_212fea0;
extern _UNKNOWN* GameData_212fec0;
extern _UNKNOWN GameData_1a9d735;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1fe6cf0[])();
extern __int64 (*GameData_2006030[])();
extern __int64 (*GameData_20060b0[])();
extern __int64 (*GameData_2006198[])();
extern __int64 (*GameData_2006290[])();
extern __int64 (*GameData_2007458[])();
extern __int64 (*GameData_20074d8[])();
extern __int64 (*game_combat_CombatCharacterMove_vtable[])();
extern __int64 (*game_combat_CombatCharacter_vtable[])();
extern __int64 (*game_combat_CombatLegionGroup_vtable[])();
extern __int64* GameData_212d448[9];
extern __int64* GameData_212feb8;
extern __int64* GameData_212ffe8[4];
extern __int64* GameData_2130120[3];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d270;
extern __int64 GameData_212fe60[2];
extern __int64 GameData_212fe68;
extern __int64 GameData_21d1e38;
extern __int64 GameData_22197d8;
extern __int64 GameData_2235e30;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64 game_sound_g_game_sound;
extern char GameData_1a9f09e;
extern int* GameData_212deb0;
extern int* GameData_212ed98;
extern int* GameData_212fe88;
extern int* GameData_212fe98;
float CharacterAnimator_1079580(__int64, int, float, float, float);
float GameHr_9e1800(unsigned __int64*);
float GameRoutine_111fb80(__int64, unsigned __int64*, float*);
float game_combat_1068a00(__int64);
float32x4_t GameRoutine_1068090(float32x4_t*);
int __cxa_guard_acquire(__int64);
void CombatLegionManager_e2c0e0(__int64);
void GameRoutine_1068b40(__int64, char);
void GameRoutine_106a7f0(float, float, float);
void GameRoutine_10cd6a0(_QWORD*, char*, float, float);
void GameRoutine_110bd40();
void GameRoutine_e56ec0(__int64, _QWORD*, __int64, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_e58e80();
void __attribute__((noreturn)) GameRoutine_e58ea0();
void __cxa_guard_release(__int64);
void game_10f03a0();
void game_combat_CombatTransparent_Tick();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_combat_e566a0(__int64 a1, __int64 a2, int a3);
__int64 game_combat_1067540(__int64 a1, __int64 a2, int a3);
void game_combat_10685c0(_QWORD* a1);
__attribute__((swiftcall)) void game_combat_10690a0(PSEUDO_X8 x8_, __int64 a1);
float game_combat_106aaf0(__int64 a1, float result);
__int64 game_combat_106c820(_QWORD* a1, __int64 a2);
__int64 game_combat_106ca40(_QWORD* a1, __int64 a2);
__int64 game_combat_106cca0(_QWORD* a1, __int64 a2);
void game_combat_106d400(__int64 a1);
__int64 game_combat_106e320(_QWORD* a1);
__int64 game_combat_106eaa0(_QWORD* a1);
__int64 game_combat_109ab90(__int64 a1);

void game_combat_e566a0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 (**v9)();
  __int64* v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 (**v13)();
  _QWORD* v14;
  __int64 v15;
  atomic_ullong* v16;
  unsigned __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  unsigned int v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64* v52;
  unsigned __int64 v53;
  char* v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  char* v61;
  unsigned __int64* v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64* v66;
  int v67;
  unsigned int v68;
  unsigned int v69;
  int v70;
  int v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  struct {
    __int64 v81;
    char* v82;
  } v81_;
  _QWORD v83[2];
  __int64 v84;
  struct {
    __int64 v85;
    char* v86;
  } v85_;

  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_DWORD*)(a1 + 112) = a3;
  *(_QWORD*)(a1 + 116) = 0;
  *(_QWORD*)(a1 + 124) = 0;
  *(_QWORD*)(a1 + 132) = 0;
  *(_QWORD*)a1 = game_combat_CombatLegionGroup_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  *(_QWORD*)(a1 + 140) = 0;
  *(_DWORD*)(a1 + 148) = 0;
  v3 = *GameData_212d448[0];
  v4 = *(_QWORD*)(*GameData_212d448[0] + 8);
  if (a3 == 0) {
    v5 = 0;
    goto LABEL_5;
  }
  if (a3 == 1) {
    v5 = 1;
  LABEL_5:
    v6 = v4 + 24LL * v5;
    v7 = *(__int64**)(v6 + 600);
    v8 = *(__int64**)(v6 + 608);
    if (v7 != v8) {
      v78 = v6;
      v9 = GameData_1fe6cf0;
      v10 = (__int64*)fw_memory_g_heap_manager_ptr;
      v79 = *(__int64**)(v6 + 608);
      do {
        v11 = (__int64)(*(_QWORD*)(a1 + 96) - *(_QWORD*)(a1 + 88)) >> 3;
        v12 = (_QWORD*)fw_memory_HeapManager_Allocate(*v10, 272, 16, 0);
        v13 = v9;
        *v12 = v9;
        v14 = v12 + 4;
        v15 = (__int64)v12;
        v12[2] = 0;
        v12[1] = 0;
        v16 = (atomic_ullong*)(v12 + 1);
        GameRoutine_e3e720((__int64)(v12 + 4), v7, a1, (__int64)"Main", 4u, 0,
                           v11);
        v83[0] = v14;
        v83[1] = v15;
        atomic_fetch_add_explicit(v16, 1u, memory_order_relaxed);
        GameRoutine_e56ec0(a1, v83, (__int64)"Main", 4u);
        if (atomic_fetch_add(v16, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak(v15);
        }
        v18 = *(_QWORD**)(a1 + 48);
        v17 = *(_QWORD*)(a1 + 56);
        if ((unsigned __int64)v18 >= v17) {
          v20 = fw_memory_g_heap_manager_ptr;
          v21 = *(_QWORD*)(a1 + 40);
          v22 = (char*)v18 - v21;
          v23 = ((__int64)v18 - v21) >> 3;
          v24 = v23 + 1;
          if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
            GameRoutine_e58e80();
          }
          v25 = v17 - v21;
          if (v25 >> 2 > v24) {
            v24 = v25 >> 2;
          }
          if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
            v26 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v26 = v24;
          }
          if (v26 != 0) {
            if (v26 >> 61 != 0) {
              goto LABEL_108;
            }
            v27 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v26, 16, 0);
          }
          else {
            v27 = 0;
          }
          v28 = v27 + 8 * v26;
          v29 = (unsigned __int64)v18 - v21;
          v30 = (__int64)&v22[v27 + -8 * v23];
          *(_QWORD*)&v22[v27] = v14;
          v19 = (__int64)&v22[v27 + 8];
          memcpy(v30, v21, v29);
          *(_QWORD*)(a1 + 40) = v30;
          *(_QWORD*)(a1 + 48) = v19;
          *(_QWORD*)(a1 + 56) = v28;
          if (v21 != 0) {
            v10 = (__int64*)v20;
            v31 = 128;
            if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
              v31 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v31, v21);
            v8 = v79;
          }
          else {
            v8 = v79;
            v10 = (__int64*)v20;
          }
          v9 = GameData_1fe6cf0;
        }
        else {
          *v18 = v14;
          v19 = (__int64)(v18 + 1);
          v9 = v13;
          v10 = (__int64*)fw_memory_g_heap_manager_ptr;
        }
        *(_QWORD*)(a1 + 48) = v19;
        if (atomic_fetch_add(v16, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak(v15);
        }
        v7 += 4;
      } while (v7 != v8);
      v6 = v78;
      v3 = *GameData_212d448[0];
      if (*GameData_212d448[0] == 0) {
        goto LABEL_112;
      }
    }
    if ((*(_BYTE*)(*(_QWORD*)(v3 + 8) + 112LL) & 0x40) == 0) {
    LABEL_112:
      v32 = (_QWORD*)(v6 + 600);
      if (*(_QWORD*)(v6 + 608) != *(_QWORD*)(v6 + 600)) {
        v33 = 16;
        v34 = 0;
        while (1) {
          v35 = *(_QWORD*)(a1 + 40);
          v36 = *(_QWORD*)(a1 + 48) - v35;
          if (v36 != 0) {
            break;
          }
          v84 = 0;
          v85_.v86 = (char*)&GameData_1a9d735;
          v85_.v85 = game_HashString((__int64)&GameData_1a9d735);
          GameRoutine_70f1c0(&v84, (unsigned __int64*)&v85_.v85);
          CombatLegionGroup_e57320((void*)(&v81_.v81), a1, (__int64)&v84, 0, 1);
          v39 = v81_.v82;
          v41 = *(_QWORD*)(*v32 + v33);
          v85_.v85 = v81_.v81;
          v85_.v86 = v81_.v82;
          if (v81_.v82 != nullptr) {
            goto LABEL_39;
          }
        LABEL_41:
          game_combat_CombatLegionGroup_AddCharacter(
              (_QWORD*)a1, (__int64)&v85_.v85, v41, (__int64)"Main", 4u);
          v42 = (__int64)v85_.v86;
          if (v85_.v86 != nullptr &&
              atomic_fetch_add((atomic_ullong* volatile)(v85_.v86 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
            std___1___shared_weak_count___release_weak(v42);
            v43 = (__int64)v81_.v82;
            if (v81_.v82 != nullptr) {
            LABEL_44:
              if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
                std___1___shared_weak_count___release_weak(v43);
              }
            }
          }
          else {
            v43 = (__int64)v81_.v82;
            if (v81_.v82 != nullptr) {
              goto LABEL_44;
            }
          }
          ++v34;
          v33 += 32;
          if (v34 >= (__int64)(v32[1] - *v32) >> 5) {
            return;
          }
        }
        v37 = *(int*)(a1 + 124);
        *(_DWORD*)(a1 + 124) = v37 + 1;
        v38 =
            *(_QWORD*)(*(_QWORD*)(v35 + 8LL * (int)(v37 % (v36 >> 3))) + 56LL);
        v40 = *(_QWORD*)(v38 + 392);
        v39 = *(char**)(v38 + 400);
        v81_.v81 = v40;
        v81_.v82 = v39;
        if (v39 == nullptr) {
          v41 = *(_QWORD*)(*v32 + v33);
          v85_.v85 = v40;
          v85_.v86 = nullptr;
          goto LABEL_41;
        }
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 8), 1u,
                                  memory_order_relaxed);
        v41 = *(_QWORD*)(*v32 + v33);
        v85_.v85 = v40;
        v85_.v86 = v39;
      LABEL_39:
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 8), 1u,
                                  memory_order_relaxed);
        goto LABEL_41;
      }
    }
    return;
  }
  v44 = *(_BYTE*)(v4 + 696);
  v45 = *(_QWORD*)(v4 + 712);
  v84 = 0;
  if ((v44 & 1) != 0) {
    v46 = v45;
  }
  else {
    v46 = v4 + 697;
  }
  v85_.v86 = (char*)v46;
  v85_.v85 = game_HashString(v46);
  GameRoutine_70f1c0(&v84, (unsigned __int64*)&v85_.v85);
  v47 = *(_DWORD*)(v4 + 720);
  if (v47 >= 6) {
    v48 = 6;
  }
  else {
    v48 = *(_DWORD*)(v4 + 720);
  }
  if (v47 < 1) {
    return;
  }
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = nullptr;
  do {
    CombatLegionGroup_e57320((void*)(&v85_.v85), a1, (__int64)&v84, v49, 1);
    v53 = v85_.v85;
    if (v85_.v85 == 0) {
      goto LABEL_62;
    }
    if ((unsigned __int64)v52 < v51) {
      *v52 = v85_.v85;
      v54 = v85_.v86;
      v52[1] = (__int64)v85_.v86;
      if (v54 != nullptr) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v54 + 8), 1u,
                                  memory_order_relaxed);
      }
      v52 += 2;
    LABEL_62:
      v55 = (__int64)v85_.v86;
      if (v85_.v86 == nullptr) {
        goto LABEL_56;
      }
    LABEL_78:
      if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
        std___1___shared_weak_count___release_weak(v55);
      }
      goto LABEL_56;
    }
    v56 = (unsigned __int64)v52 - v50;
    v57 = ((__int64)v52 - v50) >> 4;
    v58 = v57 + 1;
    if ((unsigned __int64)(v57 + 1) >> 60 != 0) {
      GameRoutine_e58ea0();
    }
    if ((__int64)(v51 - v50) >> 3 > v58) {
      v58 = (__int64)(v51 - v50) >> 3;
    }
    if (v51 - v50 >= 0x7FFFFFFFFFFFFFF0LL) {
      v59 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v59 = v58;
    }
    if (v59 >> 60 != 0) {
    LABEL_108:
      GameRoutine_60a210();
    }
    v60 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v59, 16, 0);
    v61 = v85_.v86;
    v62 = (unsigned __int64*)(v60 + v56);
    *v62 = v53;
    v62[1] = (unsigned __int64)v61;
    if (v61 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v61 + 8), 1u,
                                memory_order_relaxed);
    }
    v63 = (__int64)&v62[-2 * v57];
    v51 = v60 + 16 * v59;
    v52 = (__int64*)(v62 + 2);
    memcpy(v63, v50, v56);
    if (v50 != 0) {
      v64 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v64 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v50);
    }
    v50 = v63;
    v55 = (__int64)v85_.v86;
    if (v85_.v86 != nullptr) {
      goto LABEL_78;
    }
  LABEL_56:
    ++v49;
  } while (v48 != v49);
  if (v52 == (__int64*)v50) {
    if (v52 == nullptr) {
      return;
    }
    goto LABEL_103;
  }
  if (*(int*)(v4 + 720) >= 1) {
    v65 = 0;
    v66 = game_map_MapRandom_instance__ptr[0];
    while (1) {
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v67 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v66);
      v68 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v66 + 4);
      v69 = *(_DWORD*)v66 ^ (*(_DWORD*)v66 << 11);
      *(_DWORD*)v66 = *((_DWORD*)v66 + 1);
      *((_DWORD*)v66 + 1) = v67;
      v70 = (v69 >> 8) ^ (v68 >> 19) ^ v69 ^ v68;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v66) = v68;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v66 + 4) = v70;
      v71 = v70 & 0x7FFFFFFF;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v72 = (__int64*)(v50 +
                       16LL *
                           (unsigned int)(v71 %
                                          (int)(((unsigned __int64)v52 - v50) >>
                                                4)));
      v73 = *v72;
      v74 = v72[1];
      if (v74 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v74 + 8), 1u,
                                  memory_order_relaxed);
        v85_.v86 = (char*)v74;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v74 + 8), 1u,
                                  memory_order_relaxed);
      }
      else {
        v85_.v86 = nullptr;
      }
      v85_.v85 = v73;
      game_combat_CombatLegionGroup_AddCharacter(
          (_QWORD*)a1, (__int64)&v85_.v85, 0, (__int64)"Main", 4u);
      v75 = (__int64)v85_.v86;
      if (v85_.v86 != nullptr &&
          atomic_fetch_add((atomic_ullong* volatile)(v85_.v86 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
        std___1___shared_weak_count___release_weak(v75);
        if (v74 != 0) {
        LABEL_90:
          if (atomic_fetch_add((atomic_ullong* volatile)(v74 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74);
            std___1___shared_weak_count___release_weak(v74);
          }
        }
      }
      else if (v74 != 0) {
        goto LABEL_90;
      }
      if (++v65 >= (signed __int32)*(_DWORD*)(v4 + 720)) {
        goto LABEL_99;
      }
    }
  }
  if (v50 == 0) {
    return;
  }
  do {
  LABEL_99:
    v76 = *(v52 - 1);
    if (v76 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
      std___1___shared_weak_count___release_weak(v76);
    }
    v52 -= 2;
  } while (v52 != (__int64*)v50);
  if (v50 != 0) {
  LABEL_103:
    v77 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v77 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v77,
                                  v50);
  }
}

__int64 game_combat_1067540(__int64 a1, __int64 a2, int a3)
{
  __int64* v6;
  __int64 v7;
  unsigned __int8 explicit;
  int* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  atomic_uchar* v19;
  int* v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  unsigned __int8 v25;
  int* v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;
  char* v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64 result;
  __int64 v52;
  int v53;
  struct {
    __int64 v54;
    __int64 v55;
  } v54_;
  struct {
    _QWORD v56[4];
    _QWORD* v57;
  } v56_;

  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      32, 16, 0);
  *(_DWORD*)(v7 + 24) = 0;
  *(_QWORD*)v7 = GameData_2006198;
  *(_QWORD*)(v7 + 8) = 0;
  *(_QWORD*)(a1 + 8) = v7 + 24;
  *(_QWORD*)(a1 + 16) = v7;
  *(_QWORD*)(a1 + 24) = v7 + 24;
  *(_QWORD*)(a1 + 32) = v7;
  *(_QWORD*)(v7 + 16) = 0;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                            memory_order_relaxed);
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_DWORD*)(a1 + 56) = 0;
  *(_QWORD*)a1 = game_combat_CombatCharacter_vtable;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                  memory_order_acquire);
  v9 = GameData_212deb0;
  if ((explicit & 1) == 0) {
    v53 = __cxa_guard_acquire((__int64)GameData_212deb8);
    v9 = GameData_212deb0;
    if (v53 != 0) {
      *GameData_212deb0 = wld_Crc32(0, "CharacterBuilder", 0x10u);
      __cxa_guard_release((__int64)GameData_212deb8);
      v9 = GameData_212deb0;
    }
  }
  v10 = *(_QWORD*)(a2 + 512);
  v11 = v10;
  while (v11 != *(_QWORD*)(a2 + 504)) {
    v12 = *(_DWORD*)(v11 - 16);
    v11 -= 16;
    v10 -= 16;
    if (v12 == *v9) {
      if (*(_QWORD*)(a2 + 512) != v10) {
        v13 = *(_QWORD**)(v10 + 8);
        goto LABEL_8;
      }
      break;
    }
  }
  v13 = nullptr;
LABEL_8:
  *(_QWORD*)(a1 + 72) = v13[76];
  v14 = v13[77];
  *(_QWORD*)(a1 + 80) = v14;
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
  }
  v15 = v13[78];
  v16 = *v6;
  *(_DWORD*)(a1 + 96) = a3;
  *(_BYTE*)(a1 + 100) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 88) = v15;
  v17 = fw_memory_HeapManager_Allocate(v16, 32, 16, 0);
  *(_DWORD*)(v17 + 24) = 0;
  *(_QWORD*)(v17 + 16) = 0;
  *(_QWORD*)v17 = GameData_2006198;
  *(_QWORD*)(v17 + 8) = 0;
  *(_QWORD*)(a1 + 152) = v17 + 24;
  *(_QWORD*)(a1 + 160) = v17;
  *(_QWORD*)(a1 + 168) = v17 + 24;
  *(_QWORD*)(a1 + 176) = v17;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                            memory_order_relaxed);
  *(_QWORD*)(a1 + 184) = a1;
  *(_QWORD*)(a1 + 200) = a1;
  *(_QWORD*)(a1 + 208) = v17 + 24;
  *(_QWORD*)(a1 + 216) = v17;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                            memory_order_relaxed);
  v18 = GameData_212fe60[0];
  *(_QWORD*)(a1 + 224) = a1;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  v18 += 16;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 288) = a1;
  *(_QWORD*)(a1 + 296) = v17 + 24;
  *(_QWORD*)(a1 + 304) = v17;
  *(_QWORD*)(a1 + 312) = a1;
  *(_QWORD*)(a1 + 192) = v18;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = v18;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                            memory_order_relaxed);
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  v19 = (atomic_uchar*)GameData_212eda0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  LOBYTE(v19) = atomic_load_explicit(v19, memory_order_acquire);
  v20 = GameData_212ed98;
  if (((unsigned __int8)v19 & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212eda0) != 0) {
    *v20 = wld_Crc32(0, "CharacterAnimator", 0x11u);
    __cxa_guard_release((__int64)GameData_212eda0);
  }
  v21 = *(_QWORD*)(a2 + 512);
  v22 = v21;
  while (v22 != *(_QWORD*)(a2 + 504)) {
    v23 = *(_DWORD*)(v22 - 16);
    v22 -= 16;
    v21 -= 16;
    if (v23 == *v20) {
      if (*(_QWORD*)(a2 + 512) != v21) {
        v24 = *(_QWORD*)(v21 + 8);
        goto LABEL_17;
      }
      break;
    }
  }
  v24 = 0;
LABEL_17:
  *(_QWORD*)(a1 + 368) = v24;
  v25 = atomic_load_explicit((atomic_uchar* volatile)GameData_212fe90,
                             memory_order_acquire);
  v26 = GameData_212fe88;
  if ((v25 & 1) == 0 && __cxa_guard_acquire((__int64)GameData_212fe90) != 0) {
    *v26 = wld_Crc32(0, "CharacterEffect", 0xFu);
    __cxa_guard_release((__int64)GameData_212fe90);
  }
  v27 = *(_QWORD*)(a2 + 512);
  v28 = v27;
  while (v28 != *(_QWORD*)(a2 + 504)) {
    v29 = *(_DWORD*)(v28 - 16);
    v28 -= 16;
    v27 -= 16;
    if (v29 == *v26) {
      if (*(_QWORD*)(a2 + 512) != v27) {
        v30 = *(_QWORD*)(v27 + 8);
        goto LABEL_24;
      }
      break;
    }
  }
  v30 = 0;
LABEL_24:
  v31 = GameData_212fe68;
  v32 = GameData_212fe68 + 16;
  *(_QWORD*)(a1 + 376) = v30;
  *(_QWORD*)(a1 + 384) = v32;
  v33 = *(_QWORD*)(a1 + 168);
  v34 = *(_QWORD*)(a1 + 176);
  *(_QWORD*)(a1 + 392) = a1;
  *(_QWORD*)(a1 + 400) = v33;
  *(_QWORD*)(a1 + 408) = v34;
  if (v34 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                              memory_order_relaxed);
    v33 = *(_QWORD*)(a1 + 168);
    v35 = *(_QWORD*)(a1 + 176);
  }
  else {
    v35 = 0;
  }
  v36 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)(a1 + 416) = v36;
  v37 = GameData_2130120[0];
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_DWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_DWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 496) = v32;
  *(_QWORD*)(a1 + 504) = a1;
  *(_QWORD*)(a1 + 512) = v33;
  *(_QWORD*)(a1 + 520) = v35;
  *(_QWORD*)(a1 + 384) = v37 + 2;
  *(_WORD*)(a1 + 424) = 256;
  if (v35 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 16), 1u,
                              memory_order_relaxed);
    v35 = *(_QWORD*)(a1 + 176);
    v36 = *(_QWORD*)(a1 + 184);
    v33 = *(_QWORD*)(a1 + 168);
  }
  *(_QWORD*)(a1 + 528) = v36;
  v38 = GameData_212feb8;
  *(_DWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 568) = a1;
  *(_QWORD*)(a1 + 576) = v33;
  *(_OWORD*)(a1 + 544) = (__typeof__(*(_OWORD*)(a1 + 544))){0};
  *(_QWORD*)(a1 + 584) = v35;
  *(_QWORD*)(a1 + 496) = v38 + 2;
  *(_QWORD*)(a1 + 560) = v31 + 16;
  if (v35 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 16), 1u,
                              memory_order_relaxed);
    v35 = *(_QWORD*)(a1 + 176);
    v36 = *(_QWORD*)(a1 + 184);
    v33 = *(_QWORD*)(a1 + 168);
  }
  *(_QWORD*)(a1 + 592) = v36;
  v39 = GameData_212ffe8[0];
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = v31 + 16;
  *(_QWORD*)(a1 + 616) = a1;
  *(_QWORD*)(a1 + 624) = v33;
  *(_QWORD*)(a1 + 632) = v35;
  *(_QWORD*)(a1 + 560) = v39 + 2;
  if (v35 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 16), 1u,
                              memory_order_relaxed);
    v36 = *(_QWORD*)(a1 + 184);
  }
  *(_QWORD*)(a1 + 640) = v36;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 608) = game_combat_CombatCharacterMove_vtable;
  game_combat_CombatCharacterObserver_CombatCharacterObserver(a1 + 752,
                                                              (_QWORD*)a1);
  *(_QWORD*)(a1 + 808) = a1;
  *(_QWORD*)(a1 + 800) = v31 + 16;
  v40 = *(_QWORD*)(a1 + 176);
  *(_QWORD*)(a1 + 816) = *(_QWORD*)(a1 + 168);
  *(_QWORD*)(a1 + 824) = v40;
  if (v40 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 832) = *(_QWORD*)(a1 + 184);
  v41 = (char*)GameData_212fec0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 848) = 0;
  *(_QWORD*)(a1 + 856) = 0;
  *(_DWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 800) = v41 + 16;
  GameRoutine_10917e0((_QWORD*)(a1 + 872), (_QWORD*)a1);
  v42 = *(_QWORD**)(a1 + 88);
  v56_.v57 = v56_.v56;
  v56_.v56[0] = GameData_2006030;
  v56_.v56[1] = a1;
  CharacterBuilder_107e090(v42, (__int64)v56_.v56);
  if (v56_.v57 == v56_.v56) {
    v43 = 32;
  }
  else {
    if (v56_.v57 == nullptr) {
      goto LABEL_40;
    }
    v43 = 40;
  }
  (*(void (**)(__int64))(*v56_.v57 + v43))((__int64)v56_.v57);
LABEL_40:
  v44 = *GameData_212d448[0];
  if (*GameData_212d448[0] != 0) {
    v44 = *(_QWORD*)(v44 + 8);
  }
  v45 = *(_QWORD*)(a1 + 24);
  v46 = *(_QWORD*)(a1 + 32);
  if (v46 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 16), 1u,
                              memory_order_relaxed);
    v54_.v54 = v45;
    v54_.v55 = v46;
    v56_.v56[0] = GameData_20060b0;
    v56_.v56[1] = a1;
    v56_.v57 = v56_.v56;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v54_.v54 = *(_QWORD*)(a1 + 24);
    v54_.v55 = 0;
    v56_.v56[0] = GameData_20060b0;
    v56_.v56[1] = a1;
    v56_.v57 = v56_.v56;
  }
  CombatLegionManager_e2fc00((_QWORD*)(v44 + 80), &v54_.v54, (__int64)v56_.v56,
                             1);
  if (v54_.v55 != 0) {
    std___1___shared_weak_count___release_weak(v54_.v55);
  }
  if (v56_.v57 == v56_.v56) {
    v47 = 32;
  }
  else {
    if (v56_.v57 == nullptr) {
      goto LABEL_52;
    }
    v47 = 40;
  }
  (*(void (**)(_QWORD*))(*v56_.v57 + v47))(v56_.v57);
LABEL_52:
  if (v46 != 0) {
    std___1___shared_weak_count___release_weak(v46);
  }
  v48 = *(_QWORD**)(a1 + 88);
  v49 = v48[14];
  LOBYTE(v56_.v56[1]) = 0;
  v56_.v57 = v56_.v56;
  *(_QWORD*)(v49 + 156) = 0;
  *(_DWORD*)(v49 + 164) = 1065353216;
  v56_.v56[0] = GameData_2007458;
  CharacterBuilder_1083e90(v48, (__int64)v56_.v56);
  if (v56_.v57 == v56_.v56) {
    v50 = 32;
  }
  else {
    if (v56_.v57 == nullptr) {
      goto LABEL_59;
    }
    v50 = 40;
  }
  (*(void (**)(_QWORD*))(*v56_.v57 + v50))(v56_.v57);
LABEL_59:
  LOBYTE(v56_.v56[1]) = 0;
  v56_.v56[0] = GameData_20074d8;
  v56_.v57 = v56_.v56;
  CharacterBuilder_1083e90(v48, (__int64)v56_.v56);
  result = (__int64)v56_.v57;
  if (v56_.v57 == v56_.v56) {
    v52 = 32;
    goto LABEL_63;
  }
  if (v56_.v57 != nullptr) {
    v52 = 40;
  LABEL_63:
    result = (*(__int64 (**)(_QWORD*))(*v56_.v57 + v52))(v56_.v57);
  }
  *(_BYTE*)(a1 + 100) = *(_BYTE*)(v48[1] + 289LL);
  return result;
}

void game_combat_10685c0(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  float v8;
  char v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int8 explicit;
  int* v25;
  __int64 v26;
  __int64 v27;
  int v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  struct {
    char v36[16];
    __int64 v37;
  } v36_;

  v1 = a1[10];
  if (v1 == 0) {
    return;
  }
  v2 = a1[11];
  if (*(_QWORD*)(v1 + 8) == -1 || v2 == 0) {
    return;
  }
  GameRoutine_1068360((__int64)a1);
  if (*(_DWORD*)(v2 + 384) == 0) {
    if (*GameData_212d168 == 2) {
      v5 = *(_QWORD*)(v2 + 392);
      v6 = *(_QWORD*)(v2 + 400);
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                  memory_order_relaxed);
        v7 = *(_DWORD*)(v5 + 11784);
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak(v6);
        }
      }
      else {
        v7 = *(_DWORD*)(v5 + 11784);
      }
      if (v7 <= 0x1A) {
        if (((1 << v7) & 0x410C) != 0) {
          *(_DWORD*)(*(_QWORD*)(v2 + 104) + 212LL) = 0;
          goto LABEL_18;
        }
        if (((1 << v7) & 0x5000080) != 0) {
          *(_DWORD*)(*(_QWORD*)(v2 + 104) + 212LL) = 0;
          goto LABEL_18;
        }
      }
    }
    *(_DWORD*)(v2 + 384) = 1;
  }
LABEL_18:
  v8 = 0x0.0p+0f;
  if ((*(_DWORD*)(v2 + 340) & 0x800) != 0) {
    v9 = 0;
  }
  else {
    v8 = 0x1.0000000000000p+0f;
    v9 = 1;
  }
  game_character_1084940(v2, 0, v8);
  *(_BYTE*)(*(_QWORD*)(v2 + 8) + 289LL) = v9;
  v10 = game_combat_109ab90((__int64)(a1 + 70));
  if (v10 > -77626399) {
    if (v10 != 1400556095 && v10 != -77626398) {
      goto LABEL_36;
    }
  }
  else if (v10 != -972548316 && v10 != -93581017) {
  LABEL_36:
    CharacterAnimator_1079580(a1[46], v10, 0x0.0p+0f, -0x1.0000000000000p+0f,
                              0x1.0000000000000p+0f);
    v21 = *(_QWORD*)(v2 + 112);
    *(_QWORD*)(v21 + 156) = 0x3F8000003F800000LL;
    *(_DWORD*)(v21 + 164) = 1065353216;
    v22 = *(_QWORD*)(v2 + 112);
    *(_DWORD*)(v22 + 148) = 1065353216;
    *(_DWORD*)(v22 + 152) = *(_DWORD*)(*(_QWORD*)GameData_212d270 + 512LL);
    return;
  }
  v11 = *(_QWORD*)(v2 + 112);
  *(_QWORD*)(v11 + 156) = 0;
  *(_DWORD*)(v11 + 164) = 1065353216;
  v12 = *(_QWORD*)(v2 + 104);
  v13 = *(_DWORD*)(v12 + 56);
  *(_DWORD*)(v12 + 64) = 0;
  *(_DWORD*)(v12 + 56) = v13 | 0x20000;
  v14 = *(_QWORD*)(a1[46] + 40LL);
  v15 = *(_QWORD*)(v14 + 392);
  v16 = *(_QWORD*)(v14 + 400);
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
    v17 = CharacterModel_1070c00(*(_QWORD*)(v15 + 11608), (unsigned int)v10);
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v18 = v17;
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
      v17 = v18;
    }
  }
  else {
    v17 = CharacterModel_1070c00(*(_QWORD*)(v15 + 11608), (unsigned int)v10);
  }
  CharacterAnimator_1079580(a1[46], v10, 0x0.0p+0f, *((float*)v17 + 3),
                            0x0.0p+0f);
  v19 = a1[46];
  if (*(_DWORD*)(v19 + 120) != 0) {
    v20 = game_108c8a0(0);
    if (v20 == -574916402 ||
        v20 != (unsigned int)game_108c8a0(*(_DWORD*)(v19 + 120))) {
      if ((CharacterAnimator_1079e10(v19) & 1) != 0) {
        CharacterAnimator_1079580(v19, 0, -0x1.0000000000000p+0f,
                                  -0x1.0000000000000p+0f,
                                  0x1.0000000000000p+0f);
      }
      else {
        *(_DWORD*)(v19 + 124) = 0;
      }
    }
  }
  CharacterDie_10ba960((_QWORD*)v2);
  v23 = *(_QWORD*)(v2 + 8);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212fea0,
                                  memory_order_acquire);
  v25 = GameData_212fe98;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212fea0) != 0) {
    *v25 = wld_Crc32(0, "CharacterDie", 0xCu);
    __cxa_guard_release((__int64)GameData_212fea0);
  }
  v26 = *(_QWORD*)(v23 + 512);
  v27 = v26;
  while (v27 != *(_QWORD*)(v23 + 504)) {
    v28 = *(_DWORD*)(v27 - 16);
    v27 -= 16;
    v26 -= 16;
    if (v28 == *v25) {
      if (*(_QWORD*)(v23 + 512) != v26) {
        v29 = *(_QWORD**)(v26 + 8);
        if (v29 != nullptr) {
          v30 = v29[7];
          if (v30 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v30 + 40LL))(v30);
          }
          v31 = v29[8];
          if (v31 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v31 + 40LL))(v31);
          }
          v32 = v29[4];
          if (v32 == 0 || *(_QWORD*)(v32 + 8) == -1) {
            v33 = 0;
          }
          else {
            v33 = v29[5];
          }
          ProcManager_10ff150(v33);
        }
      }
      break;
    }
  }
  v34 = *(_QWORD**)(v2 + 120);
  *(_WORD*)v36_.v36 = 0;
  GameRoutine_10cd6a0(v34, v36_.v36, 0x1.99999a0000000p-4f, 0x0.0p+0f);
  if ((v36_.v36[0] & 1) != 0 && v36_.v37 != 0) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v35,
                                  v36_.v37);
  }
}

__attribute__((swiftcall)) void game_combat_10690a0(PSEUDO_X8 x8_, __int64 a1)
{

#pragma clang fp contract(off)
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int32x2_t* v14;
  int32x2_t v15;

  if (*GameData_212d448[0] == 0) {
    goto LABEL_21;
  }
  v4 = *GameData_212d448[0] +
       24LL * (((*(_DWORD*)(a1 + 96) - 1) & 0xFFFFFFFD) != 0);
  v5 = *(_QWORD*)(v4 + 32);
  if (v5 == 0) {
    goto LABEL_21;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(v4 + 40);
  v7 = *(_QWORD*)(v5 + 8) == -1 || v6 == 0;
  if (v7 || (v8 = *(_QWORD*)(v6 + 80)) == 0 ||
      (*(_QWORD*)(v8 + 8) != -1 ? (v9 = *(_QWORD*)(v6 + 88) == 0) : (v9 = true),
       v9 || *(_QWORD*)(v5 + 8) == -1)) {
    std___1___shared_weak_count___release_weak(v5);
  LABEL_21:
    PSEUDO_LOW_LANE64(v15, n64_f32,
                      (float)(*(float*)(a1 + 52) * 0x1.8000000000000p+1f) +
                          *(float*)(a1 + 44));
    *(float*)a2 = (float)(*(float*)(a1 + 48) * 0x1.8000000000000p+1f) +
                  *(float*)(a1 + 40);
    *(_DWORD*)(a2 + 4) = LANES64(v15).n64_u32[0];
    {
      LANES64(v15).n64_f32[0];
      return;
    }
  }
  std___1___shared_weak_count___release_weak(v5);
  v10 = *(_QWORD*)(v6 + 80);
  if (v10 == 0) {
    goto LABEL_21;
  }
  v11 = *(_QWORD*)(v10 + 8);
  v12 = *(_QWORD*)(v6 + 88);
  if (v11 == -1 || v12 == 0) {
    goto LABEL_21;
  }
  v14 = *(int32x2_t**)(v12 + 408);
  if (v14 == nullptr) {
    goto LABEL_21;
  }
  LANES64(v15).n64_u64[0] =
      LANES64_OF(
          vzip1_s32(
              v14[38],
              COERCE_AS(int32x2_t,
                        LANES128_OF(
                            vextq_s8(*(int8x16_t*)LANES64(v14[38]).n64_u64,
                                     *(int8x16_t*)LANES64(v14[38]).n64_u64, 8u))
                            .n128_u64[0])))
          .n64_u64[0];
  *(int32x2_t*)a2 = v15;
  {
    LANES64(v15).n64_f32[0];
    return;
  }
}

float game_combat_106aaf0(__int64 a1, float result)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  float v7;
  float v8;
  float v9;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  __int64 v17;
  __int64 v18;
  float v19;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v43;
  float v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  bool v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  __int64 v58;
  __int64 v59;

  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s0", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s0", "=w")),
  v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w")),
  v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = *(_DWORD*)(a1 + 40);
  switch (v2) {
  case 3:
    v59 = v58;
    if (*(_DWORD*)(a1 + 44) == 2) {
      v39 = *(_QWORD*)(a1 + 8);
      *(_DWORD*)(a1 + 44) = 0;
      v40 = *(_QWORD*)(v39 + 368);
      v41 = *(_DWORD*)(v40 + 120);
      if (v41 == 869686455 || v41 == -1080537169) {
        CharacterAnimator_1079580(v40, 119788728, 0x1.0000000000000p-1f,
                                  -0x1.0000000000000p+0f,
                                  0x1.0000000000000p+0f),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s0", "=w")),
            v53 =
                COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(float, "s0", "=w"));
      }
    }
    v43 = *(_QWORD*)(a1 + 8);
    v44 = *(float*)(a1 + 64);
    v45 = *(_QWORD*)(v43 + 80);
    if (v45 == 0 ||
        ((v46 = *(_QWORD*)(v45 + 8), v47 = *(_QWORD*)(v43 + 88), v46 != -1)
             ? (v48 = v47 == 0)
             : (v48 = true),
         v48)) {
      v49 = 0x1.11570c0000000p-5f;
    }
    else {
      v49 = (float)(*(float*)(*(_QWORD*)(v47 + 304) + 16LL) *
                    0x1.0aef000000000p+4f) *
            0x1.0624de0000000p-10f;
    }
    v50 = v44 - v49;
    *(float*)(a1 + 64) = v44 - v49;
    if ((float)(v44 - v49) <= 0x0.0p+0f) {
      v50 = 0x0.0p+0f;
      *(_DWORD*)(a1 + 64) = 0;
      *(_DWORD*)(a1 + 40) = 0;
    }
    v52 = *(float*)(a1 + 128);
    v51 = *(float*)(a1 + 132);
    GameRoutine_106a7f0(v44, v51, v52),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s0", "=w")),
        v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(float, "s0", "=w"));
    v54 = v53;
    GameRoutine_106a7f0(v50, v51, v52),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s0", "=w")),
        v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(float, "s0", "=w"));
    v56 = v54 - v55;
    v57 =
        (float)(PSEUDO_UNFUSED(v56 * *(float*)(a1 + 56))) + *(float*)(v43 + 40);
    result =
        (float)(PSEUDO_UNFUSED(v56 * *(float*)(a1 + 60))) + *(float*)(v43 + 44);
    *(float*)(v43 + 40) = v57;
    *(float*)(v43 + 44) = result;
    break;
  case 2:
    v3 = *(_QWORD*)(a1 + 8);
    v4 = *(_QWORD*)(v3 + 80);
    if (v4 == 0 ||
        ((v5 = *(_QWORD*)(v3 + 88), *(_QWORD*)(v4 + 8) != -1) ? (v6 = v5 == 0)
                                                              : (v6 = true),
         v6)) {
      v7 = 0x1.11570c0000000p-5f;
    }
    else {
      v7 = (float)(*(float*)(*(_QWORD*)(v5 + 304) + 16LL) *
                   0x1.0aef000000000p+4f) *
           0x1.0624de0000000p-10f;
    }
    v8 = v7 + *(float*)(a1 + 64);
    v9 = *(float*)(a1 + 76);
    *(float*)(a1 + 64) = v8;
    if (v8 >= v9) {
      *(float*)(a1 + 64) = v9;
      *(_DWORD*)(a1 + 40) = 0;
    }
    v11 = *(_QWORD*)(a1 + 112);
    if (v11 == 0) {
      GameRoutine_60a310(),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s0", "=w")),
          v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)v11 + 48LL))((void*)(&v59), (__int64)v11),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s0", "=w")),
        v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(float, "s0", "=w"));
    v12 = *(float*)(a1 + 68);
    v13 = *(float*)(a1 + 72);
    v15 = *((float*)&v59 + 1);
    v14 = *(float*)&v59;
    v16 = *(float*)(a1 + 64) / *(float*)(a1 + 76);
    *(_QWORD*)(a1 + 48) = v59;
    v17 = *(_QWORD*)(a1 + 8);
    result =
        (float)(PSEUDO_UNFUSED(v14 * v16)) +
        (float)(PSEUDO_UNFUSED(v12 * (float)(0x1.0000000000000p+0f - v16)));
    *(float*)(v17 + 40) = result;
    *(float*)(v17 + 44) =
        (float)(PSEUDO_UNFUSED(v15 * v16)) +
        (float)(PSEUDO_UNFUSED((float)(0x1.0000000000000p+0f - v16) * v13));
    break;
  case 1:
    v59 = v58;
    v18 = *(_QWORD*)(a1 + 8);
    v19 = *(float*)(a1 + 64);
    v21 = *(_QWORD*)(v18 + 80);
    if (v21 == 0 ||
        ((v22 = *(_QWORD*)(v21 + 8), v23 = *(_QWORD*)(v18 + 88), v22 != -1)
             ? (v24 = v23 == 0)
             : (v24 = true),
         v24)) {
      v25 = 0x1.11570c0000000p-5f;
    }
    else {
      v25 = (float)(*(float*)(*(_QWORD*)(v23 + 304) + 16LL) *
                    0x1.0aef000000000p+4f) *
            0x1.0624de0000000p-10f;
    }
    v27 = *(float*)(a1 + 128);
    v26 = *(float*)(a1 + 132);
    v28 = v19 + v25;
    *(float*)(a1 + 64) = v28;
    GameRoutine_106a7f0(v28, v26, v27),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s0", "=w")),
        v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(float, "s0", "=w"));
    v30 = v29;
    GameRoutine_106a7f0(v19, v26, v27),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s0", "=w")),
        v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(float, "s0", "=w"));
    v32 = v30 - v31;
    v33 =
        (float)(PSEUDO_UNFUSED(v32 * *(float*)(a1 + 56))) + *(float*)(v18 + 40);
    result =
        (float)(PSEUDO_UNFUSED(v32 * *(float*)(a1 + 60))) + *(float*)(v18 + 44);
    *(float*)(v18 + 40) = v33;
    *(float*)(v18 + 44) = result;
    if ((unsigned int)(*(_DWORD*)(a1 + 44) - 1) <= 1) {
      v34 = *(float*)(a1 + 64);
      v35 = *(float*)(a1 + 132);
      if (v34 <= v35) {
        v36 = *(float*)(a1 + 64);
      }
      else {
        v36 = *(float*)(a1 + 132);
      }
      GameRoutine_106a7f0(v36, *(float*)(a1 + 132), *(float*)(a1 + 128)),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s0", "=w")),
          v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(float, "s0", "=w"));
      result = v37 * v37;
      if ((float)((float)(PSEUDO_UNFUSED(
                      (float)(*(float*)(a1 + 52) -
                              *(float*)(*(_QWORD*)(a1 + 8) + 44LL)) *
                      (float)(*(float*)(a1 + 52) -
                              *(float*)(*(_QWORD*)(a1 + 8) + 44LL)))) +
                  (float)((float)(*(float*)(a1 + 48) -
                                  *(float*)(*(_QWORD*)(a1 + 8) + 40LL)) *
                          (float)(*(float*)(a1 + 48) -
                                  *(float*)(*(_QWORD*)(a1 + 8) + 40LL)))) <
              result &&
          *(_DWORD*)(a1 + 40) == 1) {
        *(_DWORD*)(a1 + 40) = 3;
        if (v34 > v35) {
          *(float*)(a1 + 64) = v35;
        }
      }
    }
    break;
  default:
    break;
  }
  return result;
}

__int64 game_combat_106c820(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  bool v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  __int64 result;
  __int64 v23;
  __int64 v25;
  bool v26;
  __int64 v27;
  __int64 v28;

  v3 = a1[4];
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v5 = a1[5];
    v6 = *(_QWORD*)(v3 + 8) == -1 || v5 == 0;
    if (v6 || (v7 = *(_QWORD*)(v5 + 80)) == 0 ||
        (*(_QWORD*)(v7 + 8) != -1 ? (v8 = *(_QWORD*)(v5 + 88) == 0)
                                  : (v8 = true),
         v8 || *(_QWORD*)(v3 + 8) == -1)) {
      std___1___shared_weak_count___release_weak(v3);
    }
    else {
      std___1___shared_weak_count___release_weak(v3);
      v9 = *(_QWORD*)(a2 + 32);
      v28 = v5;
      if (v9 == 0) {
        goto LABEL_58;
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v9 + 48LL))(v9, &v28);
    }
  }
  v10 = a1[7];
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    v11 = a1[8];
    v12 = *(_QWORD*)(v10 + 8) == -1 || v11 == 0;
    if (v12 || (v13 = *(_QWORD*)(v11 + 80)) == 0 ||
        (*(_QWORD*)(v13 + 8) != -1 ? (v14 = *(_QWORD*)(v11 + 88) == 0)
                                   : (v14 = true),
         v14 || *(_QWORD*)(v10 + 8) == -1)) {
      std___1___shared_weak_count___release_weak(v10);
    }
    else {
      std___1___shared_weak_count___release_weak(v10);
      v15 = *(_QWORD*)(a2 + 32);
      v28 = v11;
      if (v15 == 0) {
        goto LABEL_58;
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v15 + 48LL))(v15, &v28);
    }
  }
  v16 = a1[10];
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                              memory_order_relaxed);
    v17 = a1[11];
    v18 = *(_QWORD*)(v16 + 8) == -1 || v17 == 0;
    if (v18 || (v19 = *(_QWORD*)(v17 + 80)) == 0 ||
        (*(_QWORD*)(v19 + 8) != -1 ? (v20 = *(_QWORD*)(v17 + 88) == 0)
                                   : (v20 = true),
         v20 || *(_QWORD*)(v16 + 8) == -1)) {
      std___1___shared_weak_count___release_weak(v16);
    }
    else {
      std___1___shared_weak_count___release_weak(v16);
      v21 = *(_QWORD*)(a2 + 32);
      v28 = v17;
      if (v21 == 0) {
        goto LABEL_58;
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v21 + 48LL))(v21, &v28);
    }
  }
  result = a1[13];
  if (result != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                              memory_order_relaxed);
    v23 = a1[14];
    if (*(_QWORD*)(result + 8) != -1 && v23 != 0) {
      v25 = *(_QWORD*)(v23 + 80);
      if (v25 != 0) {
        v26 = *(_QWORD*)(v25 + 8) == -1 || *(_QWORD*)(v23 + 88) == 0;
        if (!v26 && *(_QWORD*)(result + 8) != -1) {
          std___1___shared_weak_count___release_weak(result);
          v27 = *(_QWORD*)(a2 + 32);
          v28 = v23;
          if (v27 != 0) {
            return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v27 + 48LL))(
                v27, &v28);
          }
        LABEL_58:
          GameRoutine_60a310();
        }
      }
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 game_combat_106ca40(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  bool v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  __int64 result;
  __int64 v23;
  __int64 v25;
  bool v26;
  __int64 v27;
  __int64 v28;
  int v29;

  v3 = a1[4];
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v5 = a1[5];
    v6 = *(_QWORD*)(v3 + 8) == -1 || v5 == 0;
    if (v6 || (v7 = *(_QWORD*)(v5 + 80)) == 0 ||
        (*(_QWORD*)(v7 + 8) != -1 ? (v8 = *(_QWORD*)(v5 + 88) == 0)
                                  : (v8 = true),
         v8 || *(_QWORD*)(v3 + 8) == -1)) {
      std___1___shared_weak_count___release_weak(v3);
    }
    else {
      std___1___shared_weak_count___release_weak(v3);
      v9 = *(_QWORD*)(a2 + 32);
      v29 = 0;
      v28 = v5;
      if (v9 == 0) {
        goto LABEL_58;
      }
      (*(void (**)(__int64, int*, __int64*))(*(_QWORD*)v9 + 48LL))(v9, &v29,
                                                                   &v28);
    }
  }
  v10 = a1[7];
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    v11 = a1[8];
    v12 = *(_QWORD*)(v10 + 8) == -1 || v11 == 0;
    if (v12 || (v13 = *(_QWORD*)(v11 + 80)) == 0 ||
        (*(_QWORD*)(v13 + 8) != -1 ? (v14 = *(_QWORD*)(v11 + 88) == 0)
                                   : (v14 = true),
         v14 || *(_QWORD*)(v10 + 8) == -1)) {
      std___1___shared_weak_count___release_weak(v10);
    }
    else {
      std___1___shared_weak_count___release_weak(v10);
      v15 = *(_QWORD*)(a2 + 32);
      v28 = v11;
      v29 = 1;
      if (v15 == 0) {
        goto LABEL_58;
      }
      (*(void (**)(__int64, int*, __int64*))(*(_QWORD*)v15 + 48LL))(v15, &v29,
                                                                    &v28);
    }
  }
  v16 = a1[10];
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                              memory_order_relaxed);
    v17 = a1[11];
    v18 = *(_QWORD*)(v16 + 8) == -1 || v17 == 0;
    if (v18 || (v19 = *(_QWORD*)(v17 + 80)) == 0 ||
        (*(_QWORD*)(v19 + 8) != -1 ? (v20 = *(_QWORD*)(v17 + 88) == 0)
                                   : (v20 = true),
         v20 || *(_QWORD*)(v16 + 8) == -1)) {
      std___1___shared_weak_count___release_weak(v16);
    }
    else {
      std___1___shared_weak_count___release_weak(v16);
      v21 = *(_QWORD*)(a2 + 32);
      v28 = v17;
      v29 = 2;
      if (v21 == 0) {
        goto LABEL_58;
      }
      (*(void (**)(__int64, int*, __int64*))(*(_QWORD*)v21 + 48LL))(v21, &v29,
                                                                    &v28);
    }
  }
  result = a1[13];
  if (result != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                              memory_order_relaxed);
    v23 = a1[14];
    if (*(_QWORD*)(result + 8) != -1 && v23 != 0) {
      v25 = *(_QWORD*)(v23 + 80);
      if (v25 != 0) {
        v26 = *(_QWORD*)(v25 + 8) == -1 || *(_QWORD*)(v23 + 88) == 0;
        if (!v26 && *(_QWORD*)(result + 8) != -1) {
          std___1___shared_weak_count___release_weak(result);
          v27 = *(_QWORD*)(a2 + 32);
          v28 = v23;
          v29 = 3;
          if (v27 != 0) {
            return (*(__int64 (**)(__int64, int*, __int64*))(
                *(_QWORD*)v27 + 48LL))(v27, &v29, &v28);
          }
        LABEL_58:
          GameRoutine_60a310();
        }
      }
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 game_combat_106cca0(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  bool v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v13;
  bool v14;
  __int64 v15;
  __int64 v16;

  v3 = a1[4];
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v5 = a1[5];
    v6 = *(_QWORD*)(v3 + 8) == -1 || v5 == 0;
    if (v6 || (v7 = *(_QWORD*)(v5 + 80)) == 0 ||
        (*(_QWORD*)(v7 + 8) != -1 ? (v8 = *(_QWORD*)(v5 + 88) == 0)
                                  : (v8 = true),
         v8 || *(_QWORD*)(v3 + 8) == -1)) {
      std___1___shared_weak_count___release_weak(v3);
    }
    else {
      std___1___shared_weak_count___release_weak(v3);
      v9 = *(_QWORD*)(a2 + 32);
      v16 = v5;
      if (v9 == 0) {
        goto LABEL_30;
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v9 + 48LL))(v9, &v16);
    }
  }
  result = a1[7];
  if (result != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                              memory_order_relaxed);
    v11 = a1[8];
    if (*(_QWORD*)(result + 8) != -1 && v11 != 0) {
      v13 = *(_QWORD*)(v11 + 80);
      if (v13 != 0) {
        v14 = *(_QWORD*)(v13 + 8) == -1 || *(_QWORD*)(v11 + 88) == 0;
        if (!v14 && *(_QWORD*)(result + 8) != -1) {
          std___1___shared_weak_count___release_weak(result);
          v15 = *(_QWORD*)(a2 + 32);
          v16 = v11;
          if (v15 != 0) {
            return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v15 + 48LL))(
                v15, &v16);
          }
        LABEL_30:
          GameRoutine_60a310();
        }
      }
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

void game_combat_106d400(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  bool v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  int v8;
  __int64 v9;
  _QWORD* v10;
  bool v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  int v15;
  __int64 v16;
  _QWORD* v17;
  bool v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  int v22;
  __int64 v23;
  _QWORD* v24;
  bool v25;
  __int64 v26;
  bool v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  float v35;
  _QWORD* v36;
  __int64 v37;
  __int128 v38;
  __int64* v39;
  unsigned int v40;
  __int64 (**v41)();
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  bool v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int128 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int128 v77;
  __int64 v79;
  __int64 v80;
  __int64 v82;
  __int64 v83;
  __int64 v85;
  __int64 v86;
  __int64 v88;
  __int64 v89;
  float v90;
  __int64 v91;
  __int128 v92;
  float v93;
  __int64 v94;
  __int128 v95;
  struct {
    __int64 (**v96)();
    __int64 v97;
    __int64 v98;
    int v99;
    char gap28_[4];
    __int128 v100;
    __int128 v101;
    __int128 v102;
  } v96_;

  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD*)(a1 + 32);
  if (v2 == 0) {
  LABEL_18:
    v9 = *(_QWORD*)(a1 + 56);
    if (v9 == 0) {
      goto LABEL_35;
    }
    goto LABEL_19;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                            memory_order_relaxed);
  v3 = *(_QWORD**)(a1 + 40);
  v4 = *(_QWORD*)(v2 + 8) == -1 || v3 == nullptr;
  if (v4 || (v5 = v3[10]) == 0 ||
      (*(_QWORD*)(v5 + 8) != -1 ? (v6 = v3[11] == 0) : (v6 = true),
       v6 || *(_QWORD*)(v2 + 8) == -1)) {
    std___1___shared_weak_count___release_weak(v2),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_18;
  }
  std___1___shared_weak_count___release_weak(v2),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*GameData_212d448[0] != 0) {
    v7 = *(_QWORD*)(*GameData_212d448[0] + 8);
    v8 = 1;
    if (v7 != 0) {
      if ((*(_DWORD*)(v7 + 112) & 0x8000) != 0) {
        v8 = 2;
      }
      else {
        v8 = 1;
      }
    }
  }
  else {
    v8 = 1;
  }
  GameRoutine_10792b0(v3[46], v8),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  game_combat_1068a00((__int64)v3),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v79 = v3[10];
  if (v79 == 0 || *(_QWORD*)(v79 + 8) == -1) {
    v80 = 0;
  }
  else {
    v80 = v3[11];
  }
  game_combat_CombatCamera_SubscribeSignals(*(_QWORD*)(a1 + 128), v80),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = *(_QWORD*)(a1 + 56);
  if (v9 != 0) {
  LABEL_19:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v10 = *(_QWORD**)(a1 + 64);
    v11 = *(_QWORD*)(v9 + 8) == -1 || v10 == nullptr;
    if (v11 || (v12 = v10[10]) == 0 ||
        (*(_QWORD*)(v12 + 8) != -1 ? (v13 = v10[11] == 0) : (v13 = true),
         v13 || *(_QWORD*)(v9 + 8) == -1)) {
      std___1___shared_weak_count___release_weak(v9),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      std___1___shared_weak_count___release_weak(v9),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (*GameData_212d448[0] != 0) {
        v14 = *(_QWORD*)(*GameData_212d448[0] + 8);
        v15 = 1;
        if (v14 != 0) {
          if ((*(_DWORD*)(v14 + 112) & 0x8000) != 0) {
            v15 = 2;
          }
          else {
            v15 = 1;
          }
        }
      }
      else {
        v15 = 1;
      }
      GameRoutine_10792b0(v10[46], v15),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      game_combat_1068a00((__int64)v10),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v82 = *(_QWORD*)(a1 + 128);
      v83 = v10[10];
      if (v83 == 0 || *(_QWORD*)(v83 + 8) == -1) {
        game_combat_CombatCamera_SubscribeSignals(v82, 0),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        game_combat_CombatCamera_SubscribeSignals(v82, v10[11]),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
LABEL_35:
  v16 = *(_QWORD*)(a1 + 80);
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                              memory_order_relaxed);
    v17 = *(_QWORD**)(a1 + 88);
    v18 = *(_QWORD*)(v16 + 8) == -1 || v17 == nullptr;
    if (v18 || (v19 = v17[10]) == 0 ||
        (*(_QWORD*)(v19 + 8) != -1 ? (v20 = v17[11] == 0) : (v20 = true),
         v20 || *(_QWORD*)(v16 + 8) == -1)) {
      std___1___shared_weak_count___release_weak(v16),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      std___1___shared_weak_count___release_weak(v16),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (*GameData_212d448[0] != 0) {
        v21 = *(_QWORD*)(*GameData_212d448[0] + 8);
        v22 = 1;
        if (v21 != 0) {
          if ((*(_DWORD*)(v21 + 112) & 0x8000) != 0) {
            v22 = 2;
          }
          else {
            v22 = 1;
          }
        }
      }
      else {
        v22 = 1;
      }
      GameRoutine_10792b0(v17[46], v22),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      game_combat_1068a00((__int64)v17),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v85 = *(_QWORD*)(a1 + 128);
      v86 = v17[10];
      if (v86 == 0 || *(_QWORD*)(v86 + 8) == -1) {
        game_combat_CombatCamera_SubscribeSignals(v85, 0),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        game_combat_CombatCamera_SubscribeSignals(v85, v17[11]),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  v23 = *(_QWORD*)(a1 + 104);
  if (v23 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                              memory_order_relaxed);
    v24 = *(_QWORD**)(a1 + 112);
    v25 = *(_QWORD*)(v23 + 8) == -1 || v24 == nullptr;
    if (v25 || (v26 = v24[10]) == 0 ||
        (*(_QWORD*)(v26 + 8) != -1 ? (v27 = v24[11] == 0) : (v27 = true),
         v27 || *(_QWORD*)(v23 + 8) == -1)) {
      std___1___shared_weak_count___release_weak(v23),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      std___1___shared_weak_count___release_weak(v23),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (*GameData_212d448[0] != 0) {
        v28 = *(_QWORD*)(*GameData_212d448[0] + 8);
        v29 = 1;
        if (v28 != 0) {
          if ((*(_DWORD*)(v28 + 112) & 0x8000) != 0) {
            v29 = 2;
          }
          else {
            v29 = 1;
          }
        }
      }
      else {
        v29 = 1;
      }
      GameRoutine_10792b0(v24[46], v29),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      game_combat_1068a00((__int64)v24),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v88 = *(_QWORD*)(a1 + 128);
      v89 = v24[10];
      if (v89 == 0 || *(_QWORD*)(v89 + 8) == -1) {
        game_combat_CombatCamera_SubscribeSignals(v88, 0),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        game_combat_CombatCamera_SubscribeSignals(v88, v24[11]),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  if (*(_DWORD*)(a1 + 256) != 0) {
    goto LABEL_70;
  }
  *(_DWORD*)(a1 + 256) = 1;
  GameRoutine_110bd40(),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v45 = *(_QWORD*)(a1 + 8);
  if (v45 == 0) {
  LABEL_91:
    v47 = *(_QWORD*)(a1 + 32);
    if (v47 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 16), 1u,
                                memory_order_relaxed);
      v48 = *(_QWORD*)(a1 + 40);
      if (*(_QWORD*)(v47 + 8) != -1 && v48 != 0) {
        v49 = *(_QWORD*)(v48 + 80);
        if (v49 != 0) {
          v50 = *(_QWORD*)(v49 + 8) == -1 || *(_QWORD*)(v48 + 88) == 0;
          if (!v50 && *(_QWORD*)(v47 + 8) != -1) {
            std___1___shared_weak_count___release_weak(v47),
                v40 =
                    COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v51 = *(float*)(v45 + 164) - *(float*)(v45 + 156);
            v52 = *(float*)(v45 + 160) - *(float*)(v45 + 152);
            v53 = (float)(PSEUDO_UNFUSED(v51 * v51)) + (float)(v52 * v52);
            if (v53 >= 0x1.0000000000000p-23f) {
              v90 = 0x1.0000000000000p+0f / sqrtf(v53);
              v55 = v52 * v90;
              v54 = v51 * v90;
            }
            else {
              v54 = 0x1.0000000000000p+0f;
              v55 = 0x0.0p+0f;
            }
            v96_.v96 =
                (__int64 (**)(void))__PAIR64__(LODWORD(v54), LODWORD(v55)),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            GameRoutine_111fb80(v48 + 384, (unsigned __int64*)(v45 + 152),
                                (float*)&v96_.v96),
                v40 =
                    COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v91 = *(_QWORD*)(a1 + 128);
            *(_DWORD*)(v91 + 208) = *(_DWORD*)(v48 + 432);
            *(_DWORD*)(v91 + 212) = *(_DWORD*)(v48 + 436);
            v92 = *(_OWORD*)(v91 + 208);
            DWORD2(v92) = *(_DWORD*)(v48 + 440);
            *(_BYTE*)(v91 + 244) = 0;
            *(_DWORD*)(v91 + 240) = 0;
            *(_BYTE*)(v91 + 193) = 1;
            *((_QWORD*)&v92 + 1) = DWORD2(v92);
            *(_OWORD*)(v91 + 208) = v92;
            v58 = *(_QWORD*)(a1 + 56);
            if (v58 == 0) {
              goto LABEL_70;
            }
          LABEL_107:
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 16), 1u,
                                      memory_order_relaxed);
            v59 = *(_QWORD*)(a1 + 64);
            if (*(_QWORD*)(v58 + 8) == -1 || v59 == 0 ||
                (v60 = *(_QWORD*)(v59 + 80)) == 0 ||
                *(_QWORD*)(v60 + 8) == -1 || *(_QWORD*)(v59 + 88) == 0 ||
                *(_QWORD*)(v58 + 8) == -1) {
              std___1___shared_weak_count___release_weak(v58),
                  v40 = COERCE_AS(
                      __typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            else {
              std___1___shared_weak_count___release_weak(v58),
                  v40 = COERCE_AS(
                      __typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v62 = *(float*)(v45 + 160);
              v61 = v45 + 160;
              v63 = *(float*)(v61 - 8) - v62;
              v64 = *(float*)(v61 - 4) - *(float*)(v61 + 4);
              v65 = (float)(PSEUDO_UNFUSED(v64 * v64)) + (float)(v63 * v63);
              if (v65 >= 0x1.0000000000000p-23f) {
                v93 = 0x1.0000000000000p+0f / sqrtf(v65);
                v67 = v63 * v93;
                v66 = v64 * v93;
              }
              else {
                v66 = 0x1.0000000000000p+0f;
                v67 = 0x0.0p+0f;
              }
              v96_.v96 =
                  (__int64 (**)(void))__PAIR64__(LODWORD(v66), LODWORD(v67)),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              GameRoutine_111fb80(v59 + 384, (unsigned __int64*)v61,
                                  (float*)&v96_.v96),
                  v40 = COERCE_AS(
                      __typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v94 = *(_QWORD*)(a1 + 128);
              *(_DWORD*)(v94 + 224) = *(_DWORD*)(v59 + 432);
              *(_DWORD*)(v94 + 228) = *(_DWORD*)(v59 + 436);
              v95 = *(_OWORD*)(v94 + 224);
              DWORD2(v95) = *(_DWORD*)(v59 + 440);
              *(_BYTE*)(v94 + 252) = 0;
              *(_DWORD*)(v94 + 248) = 0;
              *(_BYTE*)(v94 + 193) = 1;
              *((_QWORD*)&v95 + 1) = DWORD2(v95);
              *(_OWORD*)(v94 + 224) = v95;
            }
            goto LABEL_70;
          }
        }
      }
      std___1___shared_weak_count___release_weak(v47),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v58 = *(_QWORD*)(a1 + 56);
    if (v58 == 0) {
      goto LABEL_70;
    }
    goto LABEL_107;
  }
  v46 = *(_DWORD*)(v45 + 112);
  if ((v46 & 0x8000) == 0) {
    if ((v46 & 0x40) != 0) {
      v68 = *(_QWORD*)(a1 + 32);
      if (v68 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v68 + 16), 1u,
                                  memory_order_relaxed);
        v69 = *(_QWORD*)(a1 + 40);
        if (*(_QWORD*)(v68 + 8) == -1 || v69 == 0 ||
            (v70 = *(_QWORD*)(v69 + 80)) == 0 || *(_QWORD*)(v70 + 8) == -1 ||
            *(_QWORD*)(v69 + 88) == 0 || *(_QWORD*)(v68 + 8) == -1) {
          std___1___shared_weak_count___release_weak(v68),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          std___1___shared_weak_count___release_weak(v68),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          GameRoutine_111fb80(v69 + 384, (unsigned __int64*)(v69 + 40),
                              (float*)(v69 + 48)),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v71 = *(_QWORD*)(a1 + 128);
          *(_DWORD*)(v71 + 208) = *(_DWORD*)(v69 + 432);
          *(_DWORD*)(v71 + 212) = *(_DWORD*)(v69 + 436);
          v72 = *(_OWORD*)(v71 + 208);
          DWORD2(v72) = *(_DWORD*)(v69 + 440);
          *(_BYTE*)(v71 + 244) = 0;
          *(_DWORD*)(v71 + 240) = 0;
          *(_BYTE*)(v71 + 193) = 1;
          *((_QWORD*)&v72 + 1) = DWORD2(v72);
          *(_OWORD*)(v71 + 208) = v72;
        }
      }
      v73 = *(_QWORD*)(a1 + 56);
      if (v73 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v73 + 16), 1u,
                                  memory_order_relaxed);
        v74 = *(_QWORD*)(a1 + 64);
        if (*(_QWORD*)(v73 + 8) == -1 || v74 == 0 ||
            (v75 = *(_QWORD*)(v74 + 80)) == 0 || *(_QWORD*)(v75 + 8) == -1 ||
            *(_QWORD*)(v74 + 88) == 0 || *(_QWORD*)(v73 + 8) == -1) {
          std___1___shared_weak_count___release_weak(v73),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          std___1___shared_weak_count___release_weak(v73),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          GameRoutine_111fb80(v74 + 384, (unsigned __int64*)(v74 + 40),
                              (float*)(v74 + 48)),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v76 = *(_QWORD*)(a1 + 128);
          *(_DWORD*)(v76 + 224) = *(_DWORD*)(v74 + 432);
          *(_DWORD*)(v76 + 228) = *(_DWORD*)(v74 + 436);
          v77 = *(_OWORD*)(v76 + 224);
          DWORD2(v77) = *(_DWORD*)(v74 + 440);
          *(_BYTE*)(v76 + 252) = 0;
          *(_DWORD*)(v76 + 248) = 0;
          *(_BYTE*)(v76 + 193) = 1;
          *((_QWORD*)&v77 + 1) = DWORD2(v77);
          *(_OWORD*)(v76 + 224) = v77;
        }
      }
      GameRoutine_106dcd0((_QWORD*)a1, 1, 0),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_70;
    }
    goto LABEL_91;
  }
  *(_QWORD*)&v96_.v100 = &v96_.v96;
  v56 = (_QWORD*)*GameData_212d448[0];
  v96_.v96 = GameData_2006290;
  game_combat_106cca0(v56, (__int64)&v96_.v96),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((__int64 (***)(void))v96_.v100 == &v96_.v96) {
    v57 = 32;
  }
  else {
    if ((_QWORD)v96_.v100 == 0) {
      goto LABEL_70;
    }
    v57 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v96_.v100 + v57))((__int64)v96_.v100),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_70:
  v30 = *(_QWORD*)(a1 + 8);
  if (v30 == 0 || (*(_WORD*)(v30 + 113) & 0x4080) == 0) {
    v31 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         112, 16, 0),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameRoutine_e2b120(v31),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v32 = *(_QWORD*)(a1 + 120);
    *(_QWORD*)(a1 + 120) = v31;
    if (v32 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v32 + 8LL))(v32),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v33 = *(_QWORD*)(a1 + 8);
  v34 = *(_QWORD*)(v33 + 208);
  if (v34 != 0) {
    v96_.v97 = *(_QWORD*)(v33 + 208);
    v96_.v96 = (__int64 (**)(void))game_HashString(v34),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v35 = GameHr_9e1800((unsigned __int64*)&v96_.v96),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v96_.v96 = nullptr;
    v96_.v97 = 0;
    v96_.v98 = v34;
    v36 = (_QWORD*)*eft_g_effectSystem_ptr[0];
    v37 = LODWORD(v35);
    *(_QWORD*)&v38 = LODWORD(v35) | ((unsigned __int64)LODWORD(v35) << 32);
    v96_.v99 = 4;
    *((_QWORD*)&v38 + 1) = v37;
    v96_.v102 = (__typeof__(v96_.v102)){0};
    v96_.v100 = (__typeof__(v96_.v100)){0};
    v96_.v101 = v38;
    v39 = ({
      unsigned __int128 r_ = Manager_bc6460_pair(v36, (__int64)&v96_.v96, 1);
      v40 = COERCE_AS(__typeof__(v40), (unsigned long long)(r_ >> 64));
      (__int64*)(unsigned long long)r_;
    });
    GameHr_14a10d0(&v96_.v96, (__int64)v39, v40, (__int64)&GameData_1a9f09e),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v41 = v96_.v96;
    v42 = v96_.v97;
    if (v96_.v97 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v96_.v97 + 8), 1u,
                                memory_order_relaxed);
    }
    v43 = *(_QWORD*)(a1 + 224);
    *(_QWORD*)(a1 + 216) = v41;
    *(_QWORD*)(a1 + 224) = v42;
    if (v43 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v43),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v42 = *(_QWORD*)(a1 + 224);
    }
    if (v42 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v42),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v44 = v96_.v97;
    if (v96_.v97 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v96_.v97 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v44),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  game_10f03a0(),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
}

__int64 game_combat_106e320(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  bool v8;
  int v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  bool v19;
  int v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  _QWORD* v26;
  __int64 result;
  __int64 v28;
  float v29;
  float v31;
  struct {
    _QWORD v33[4];
    _QWORD* v34;
  } v33_;

  v2 = a1[1];
  v1 = a1[2];
  if (v1 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak(v1);
    }
  }
  v4 = a1[4];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v5 = a1[5];
    if (*(_QWORD*)(v4 + 8) != -1 && v5 != 0) {
      v7 = *(_QWORD*)(v5 + 80);
      if (v7 != 0) {
        v8 = *(_QWORD*)(v7 + 8) == -1 || *(_QWORD*)(v5 + 88) == 0;
        if (!v8 && *(_QWORD*)(v4 + 8) != -1) {
          std___1___shared_weak_count___release_weak(v4);
          v9 = *(_DWORD*)(v2 + 156);
          *(_DWORD*)(v5 + 40) = *(_DWORD*)(v2 + 152);
          *(_DWORD*)(v5 + 44) = v9;
          v10 = *(float*)(v2 + 164) - *(float*)(v2 + 156);
          v11 = *(float*)(v2 + 160) - *(float*)(v2 + 152);
          v12 = (float)(PSEUDO_UNFUSED(v10 * v10)) + (float)(v11 * v11);
          if (v12 >= 0x1.0000000000000p-23f) {
            v29 = 0x1.0000000000000p+0f / sqrtf(v12);
            v14 = v11 * v29;
            v13 = v10 * v29;
          }
          else {
            v13 = 0x1.0000000000000p+0f;
            v14 = 0x0.0p+0f;
          }
          *(float*)(v5 + 48) = v14;
          *(float*)(v5 + 52) = v13;
          GameRoutine_1068b40(v5, 1);
          game_combat_1068a00(v5);
          v15 = a1[7];
          if (v15 == 0) {
            goto LABEL_32;
          }
          goto LABEL_19;
        }
      }
    }
    std___1___shared_weak_count___release_weak(v4);
  }
  v15 = a1[7];
  if (v15 == 0) {
    goto LABEL_32;
  }
LABEL_19:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                            memory_order_relaxed);
  v16 = a1[8];
  v17 = *(_QWORD*)(v15 + 8) == -1 || v16 == 0;
  if (v17 || (v18 = *(_QWORD*)(v16 + 80)) == 0 ||
      (*(_QWORD*)(v18 + 8) != -1 ? (v19 = *(_QWORD*)(v16 + 88) == 0)
                                 : (v19 = true),
       v19 || *(_QWORD*)(v15 + 8) == -1)) {
    std___1___shared_weak_count___release_weak(v15);
  }
  else {
    std___1___shared_weak_count___release_weak(v15);
    v20 = *(_DWORD*)(v2 + 164);
    *(_DWORD*)(v16 + 40) = *(_DWORD*)(v2 + 160);
    *(_DWORD*)(v16 + 44) = v20;
    v21 = *(float*)(v2 + 156) - *(float*)(v2 + 164);
    v22 = *(float*)(v2 + 152) - *(float*)(v2 + 160);
    v23 = (float)(PSEUDO_UNFUSED(v21 * v21)) + (float)(v22 * v22);
    if (v23 >= 0x1.0000000000000p-23f) {
      v31 = 0x1.0000000000000p+0f / sqrtf(v23);
      v25 = v22 * v31;
      v24 = v21 * v31;
    }
    else {
      v24 = 0x1.0000000000000p+0f;
      v25 = 0x0.0p+0f;
    }
    *(float*)(v16 + 48) = v25;
    *(float*)(v16 + 52) = v24;
    GameRoutine_1068b40(v16, 1);
    game_combat_1068a00(v16);
  }
LABEL_32:
  v33_.v34 = v33_.v33;
  v26 = (_QWORD*)*GameData_212d448[0];
  v33_.v33[0] = GameData_2006290;
  game_combat_106cca0(v26, (__int64)v33_.v33);
  result = (__int64)v33_.v34;
  if (v33_.v34 == v33_.v33) {
    v28 = 32;
  }
  else {
    if (v33_.v34 == nullptr) {
      return result;
    }
    v28 = 40;
  }
  return (*(__int64 (**)(__int64))(*v33_.v34 + v28))((__int64)v33_.v34);
}

__int64 game_combat_106eaa0(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;
  bool v7;
  __int64 v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  bool v13;
  __int64 v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  bool v19;
  __int64 v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  bool v25;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  __int64* v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  float32x4_t* v37;
  bool v38;
  unsigned __int64 v39;
  bool v40;
  __int64 v41;
  float32x4_t* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  float32x4_t* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  float32x4_t* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  float32x4_t* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  float32x4_t* v71;
  double v72;
  float v73;
  double v74;
  float v75;
  double v76;
  float v77;
  double v78;
  float v79;
  int8x16_t v80;
  float v81;
  float v82;
  float32x4_t v83;
  __int64 v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  __int64 v89;
  unsigned __int64 v91;
  float v92;
  float32x4_t v93;

  v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((float)((float)(*(float*)(*(_QWORD*)
                                    game_script_hub_g_frame_counter_ptr[0] +
                                160LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f) > 0x0.0p+0f) {
    v2 = a1[1];
    if (v2 == 0 || (*(_BYTE*)(v2 + 115) & 1) == 0) {
      v3 = a1[4];
      if (v3 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                  memory_order_relaxed);
        v4 = a1[5];
        v5 = *(_QWORD*)(v3 + 8) == -1 || v4 == 0;
        if (v5 || (v6 = *(_QWORD*)(v4 + 80)) == 0 ||
            (*(_QWORD*)(v6 + 8) != -1 ? (v7 = *(_QWORD*)(v4 + 88) == 0)
                                      : (v7 = true),
             v7 || *(_QWORD*)(v3 + 8) == -1)) {
          std___1___shared_weak_count___release_weak(v3),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          std___1___shared_weak_count___release_weak(v3),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          game_combat_1068a00(v4),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      v9 = a1[7];
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                  memory_order_relaxed);
        v10 = a1[8];
        v11 = *(_QWORD*)(v9 + 8) == -1 || v10 == 0;
        if (v11 || (v12 = *(_QWORD*)(v10 + 80)) == 0 ||
            (*(_QWORD*)(v12 + 8) != -1 ? (v13 = *(_QWORD*)(v10 + 88) == 0)
                                       : (v13 = true),
             v13 || *(_QWORD*)(v9 + 8) == -1)) {
          std___1___shared_weak_count___release_weak(v9),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          std___1___shared_weak_count___release_weak(v9),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          game_combat_1068a00(v10),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      v15 = a1[10];
      if (v15 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                                  memory_order_relaxed);
        v16 = a1[11];
        v17 = *(_QWORD*)(v15 + 8) == -1 || v16 == 0;
        if (v17 || (v18 = *(_QWORD*)(v16 + 80)) == 0 ||
            (*(_QWORD*)(v18 + 8) != -1 ? (v19 = *(_QWORD*)(v16 + 88) == 0)
                                       : (v19 = true),
             v19 || *(_QWORD*)(v15 + 8) == -1)) {
          std___1___shared_weak_count___release_weak(v15),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          std___1___shared_weak_count___release_weak(v15),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          game_combat_1068a00(v16),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      v21 = a1[13];
      if (v21 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                  memory_order_relaxed);
        v22 = a1[14];
        v23 = *(_QWORD*)(v21 + 8) == -1 || v22 == 0;
        if (v23 || (v24 = *(_QWORD*)(v22 + 80)) == 0 ||
            (*(_QWORD*)(v24 + 8) != -1 ? (v25 = *(_QWORD*)(v22 + 88) == 0)
                                       : (v25 = true),
             v25 || *(_QWORD*)(v21 + 8) == -1)) {
          std___1___shared_weak_count___release_weak(v21),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          std___1___shared_weak_count___release_weak(v21),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          game_combat_1068a00(v22),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      v27 = a1[1];
      v28 = *(_QWORD*)(v27 + 32);
      v29 = *(_QWORD*)(v27 + 40);
      if (v28 == v29) {
        v33 = &GameData_2235e30;
      }
      else {
        v30 = *(_DWORD*)(v27 + 56);
        v31 = 954437177 * ((unsigned __int64)(v29 - v28) >> 4) - 1;
        if (v30 < v31) {
          v31 = v30;
        }
        if (v30 >= 0) {
          v32 = v31;
        }
        else {
          v32 = 0;
        }
        v33 = (__int64*)(v28 + 144LL * v32);
      }
      v34 = *((_DWORD*)v33 + 2);
      if (v34 <= 3) {
        v35 = (__int64)&a1[3 * v34 + 3];
        v36 = *(_QWORD*)(v35 + 8);
        if (v36 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                                    memory_order_relaxed);
          v37 = *(float32x4_t**)(v35 + 16);
          v38 = *(_QWORD*)(v36 + 8) == -1 || v37 == nullptr;
          if (v38 || (v39 = LANES128(v37[5]).n128_u64[0]) == 0 ||
              (*(_QWORD*)(v39 + 8) != -1
                   ? (v40 = LANES128(v37[5]).n128_u64[1] == 0)
                   : (v40 = true),
               v40 || *(_QWORD*)(v36 + 8) == -1)) {
            std___1___shared_weak_count___release_weak(v36),
                v83 = COERCE_AS(__typeof__(v83),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          else {
            std___1___shared_weak_count___release_weak(v36),
                v83 = COERCE_AS(__typeof__(v83),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            GameRoutine_1068090(v37),
                v83 = COERCE_AS(__typeof__(v83),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
      }
      v41 = a1[4];
      if (v41 != 0) {
        v42 = nullptr;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 16), 1u,
                                  memory_order_relaxed);
        v43 = a1[5];
        if (*(_QWORD*)(v41 + 8) != -1 && v43 != 0) {
          v44 = *(_QWORD*)(v43 + 80);
          if (v44 != 0) {
            v42 = nullptr;
            if (*(_QWORD*)(v44 + 8) != -1 && *(_QWORD*)(v43 + 88) != 0) {
              if (*(_QWORD*)(v41 + 8) == -1) {
                v42 = nullptr;
              }
              else {
                v42 = (float32x4_t*)a1[5];
              }
            }
          }
          else {
            v42 = nullptr;
          }
        }
        std___1___shared_weak_count___release_weak(v41),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v34 != 0 && v42 != nullptr) {
          GameRoutine_1068090(v42),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      v45 = a1[7];
      if (v45 != 0) {
        v46 = nullptr;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 16), 1u,
                                  memory_order_relaxed);
        v47 = a1[8];
        if (*(_QWORD*)(v45 + 8) != -1 && v47 != 0) {
          v48 = *(_QWORD*)(v47 + 80);
          if (v48 != 0) {
            v46 = nullptr;
            if (*(_QWORD*)(v48 + 8) != -1 && *(_QWORD*)(v47 + 88) != 0) {
              if (*(_QWORD*)(v45 + 8) == -1) {
                v46 = nullptr;
              }
              else {
                v46 = (float32x4_t*)a1[8];
              }
            }
          }
          else {
            v46 = nullptr;
          }
        }
        std___1___shared_weak_count___release_weak(v45),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v34 != 1 && v46 != nullptr) {
          GameRoutine_1068090(v46),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      v49 = a1[10];
      if (v49 != 0) {
        v50 = nullptr;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 16), 1u,
                                  memory_order_relaxed);
        v51 = a1[11];
        if (*(_QWORD*)(v49 + 8) != -1 && v51 != 0) {
          v52 = *(_QWORD*)(v51 + 80);
          if (v52 != 0) {
            v50 = nullptr;
            if (*(_QWORD*)(v52 + 8) != -1 && *(_QWORD*)(v51 + 88) != 0) {
              if (*(_QWORD*)(v49 + 8) == -1) {
                v50 = nullptr;
              }
              else {
                v50 = (float32x4_t*)a1[11];
              }
            }
          }
          else {
            v50 = nullptr;
          }
        }
        std___1___shared_weak_count___release_weak(v49),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v34 != 2 && v50 != nullptr) {
          GameRoutine_1068090(v50),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      v53 = a1[13];
      if (v53 != 0) {
        v54 = nullptr;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 16), 1u,
                                  memory_order_relaxed);
        v55 = a1[14];
        if (*(_QWORD*)(v53 + 8) != -1 && v55 != 0) {
          v56 = *(_QWORD*)(v55 + 80);
          if (v56 != 0) {
            v54 = nullptr;
            if (*(_QWORD*)(v56 + 8) != -1 && *(_QWORD*)(v55 + 88) != 0) {
              if (*(_QWORD*)(v53 + 8) == -1) {
                v54 = nullptr;
              }
              else {
                v54 = (float32x4_t*)a1[14];
              }
            }
          }
          else {
            v54 = nullptr;
          }
        }
        std___1___shared_weak_count___release_weak(v53),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v34 != 3 && v54 != nullptr) {
          GameRoutine_1068090(v54),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      v57 = a1[4];
      if (v57 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v57 + 16), 1u,
                                  memory_order_relaxed);
        v58 = a1[5];
        if (*(_QWORD*)(v57 + 8) == -1 || v58 == 0 ||
            (v59 = *(_QWORD*)(v58 + 80)) == 0 || *(_QWORD*)(v59 + 8) == -1 ||
            *(_QWORD*)(v58 + 88) == 0 || *(_QWORD*)(v57 + 8) == -1) {
          std___1___shared_weak_count___release_weak(v57),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          std___1___shared_weak_count___release_weak(v57),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          GameRoutine_1068b40(v58, 0),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      v60 = a1[7];
      if (v60 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v60 + 16), 1u,
                                  memory_order_relaxed);
        v61 = a1[8];
        if (*(_QWORD*)(v60 + 8) == -1 || v61 == 0 ||
            (v62 = *(_QWORD*)(v61 + 80)) == 0 || *(_QWORD*)(v62 + 8) == -1 ||
            *(_QWORD*)(v61 + 88) == 0 || *(_QWORD*)(v60 + 8) == -1) {
          std___1___shared_weak_count___release_weak(v60),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          std___1___shared_weak_count___release_weak(v60),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          GameRoutine_1068b40(v61, 0),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      v63 = a1[10];
      if (v63 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 16), 1u,
                                  memory_order_relaxed);
        v64 = a1[11];
        if (*(_QWORD*)(v63 + 8) == -1 || v64 == 0 ||
            (v65 = *(_QWORD*)(v64 + 80)) == 0 || *(_QWORD*)(v65 + 8) == -1 ||
            *(_QWORD*)(v64 + 88) == 0 || *(_QWORD*)(v63 + 8) == -1) {
          std___1___shared_weak_count___release_weak(v63),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          std___1___shared_weak_count___release_weak(v63),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          GameRoutine_1068b40(v64, 0),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      v66 = a1[13];
      if (v66 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v66 + 16), 1u,
                                  memory_order_relaxed);
        v67 = a1[14];
        if (*(_QWORD*)(v66 + 8) == -1 || v67 == 0 ||
            (v68 = *(_QWORD*)(v67 + 80)) == 0 || *(_QWORD*)(v68 + 8) == -1 ||
            *(_QWORD*)(v67 + 88) == 0 || *(_QWORD*)(v66 + 8) == -1) {
          std___1___shared_weak_count___release_weak(v66),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          std___1___shared_weak_count___release_weak(v66),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          GameRoutine_1068b40(v67, 0),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
    }
  }
  v69 = a1[1];
  if (v69 == 0 || (*(_BYTE*)(v69 + 113) & 0x80) == 0) {
    v70 = a1[15];
    if (v70 != 0) {
      CombatLegionManager_e2c0e0(v70),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v71 = *(float32x4_t**)(a1[16] + 72LL);
  if (v71 != nullptr) {
    v72 = snd_getDefineValue((__int64)"SetCombatListener_PosNear"),
    v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v73 = *(float*)&v72;
    v74 = snd_getDefineValue((__int64)"SetCombatListener_PosFar"),
    v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v75 = *(float*)&v74;
    v76 = snd_getDefineValue((__int64)"SetCombatListener_LengthStepNear"),
    v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v77 = *(float*)&v76 / 0x1.9000000000000p+6f;
    v78 = snd_getDefineValue((__int64)"SetCombatListener_LengthStepFar"),
    v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v79 = *(float*)&v78 / 0x1.9000000000000p+6f;
    v93 = vsubq_f32(v71[2],
                    COERCE_FLOAT32X4_T(
                        ((long double (*)(float32x4_t*)) *
                         (_QWORD*)(LANES128(*(v71)).n128_u64[0] + 40))(v71))),
    v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v80 = vmulq_f32(v93, v93);
    LANES128(v80).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v80, v80, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0])))
            .n64_u64[0];
    LANES128(v80).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0])))
            .n64_u64[0];
    LODWORD(v81) =
        LANES64_OF(vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0])))
            .n64_u32[0];
    v91 = LANES128(v80).n128_u64[0];
    v92 = v81;
    if (vabds_f32(v79, v77) >= 0x1.0000000000000p-23f) {
      v82 = fminf(fmaxf((float)(v81 - v77) / (float)(v79 - v77), 0x0.0p+0f),
                  0x1.0000000000000p+0f);
    }
    else {
      v82 = 0x0.0p+0f;
      if (v79 > v81) {
        v82 = 0x1.0000000000000p+0f;
      }
    }
    (*(void (**)(float32x4_t*))(LANES128(*(v71)).n128_u64[0] + 40))(v71),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v84 = game_sound_g_game_sound;
    if (game_sound_g_game_sound != 0) {
      LANES128(v85).n128_u64[0] = v91;
      *(_BYTE*)(game_sound_g_game_sound + 2516) = 1;
      LANES128(v85).n128_u64[1] = v91;
      v86 = vrsqrteq_f32(v85);
      v87 = vmulq_f32(v86, vrsqrtsq_f32(v86, vmulq_f32(v85, v86)));
      v88 = vaddq_f32(
          v83,
          vmulq_n_f32(
              vmulq_n_f32(
                  vbicq_s8(
                      vmulq_f32(v93,
                                vmulq_f32(v87, vrsqrtsq_f32(
                                                   v87, vmulq_f32(v85, v87)))),
                      vceqzq_f32(v85)),
                  v92),
              (float)(v73 / 0x1.9000000000000p+6f) +
                  (float)((float)((float)(v75 / 0x1.9000000000000p+6f) -
                                  (float)(v73 / 0x1.9000000000000p+6f)) *
                          v82)));
      *(_QWORD*)(v84 + 2528) = LANES128(v88).n128_u64[0];
      *(_DWORD*)(v84 + 2536) = LANES128(v88).n128_u32[2];
    }
  }
  game_combat_CombatTransparent_Tick(),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v89 = a1[1];
  if (v89 != 0 && (*(_BYTE*)(v89 + 112) & 0x40) != 0) {
    if (GameData_22197d8 != 0) {
      CmdBtlCombatWindow_17c3cd0(GameData_22197d8, 0),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  else if (GameData_21d1e38 != 0) {
    CombatHUDWindow_183de10(GameData_21d1e38, 0),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  return GameRoutine_10d4680((__int64)(a1 + 17));
}

__int64 game_combat_109ab90(__int64 a1)
{
  __int64 v2;
  __int64 result;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int* v8;
  int v9;
  int* v10;
  int v12;
  int v13;
  __int64* v14;
  int v15;

  v2 = *(_QWORD*)(a1 + 8);
  result = 119788728;
  v4 = *(_DWORD*)(v2 + 96);
  if ((v4 & 0xFFFFFFFE) == 2) {
    return result;
  }
  v5 = *(_QWORD*)(*GameData_212d448[0] + 8);
  v6 = *(_QWORD*)(v5 + 32);
  v7 = *(_QWORD*)(v5 + 40);
  if (v6 == v7) {
    v8 = (int*)&GameData_2235e30;
  }
  else {
    v8 = (int*)(v7 - 144);
  }
  v10 = &v8[3 * v4 + 24];
  v9 = *v10;
  if (v10[1] <= 0 && v9 >= 1) {
    v15 = v8[17];
    if (v15 == 0) {
      v15 = game_combat_1099520(a1, v8);
    }
    return game_108c8a0(v15);
  }
  if ((*(_WORD*)(v5 + 113) & 0x180) != 0 ||
      (*(_BYTE*)(*(_QWORD*)(v2 + 368) + 88LL) & 1) != 0) {
    return 119788728;
  }
  result = 1817091785;
  if (v6 == v7) {
    v14 = &GameData_2235e30;
  }
  else {
    v12 = *(_DWORD*)(v5 + 56);
    v13 = 954437177 * ((unsigned __int64)(v7 - v6) >> 4) - 1;
    if (v12 < v13) {
      v13 = v12;
    }
    if (v12 < 0) {
      v13 = 0;
    }
    if (v6 == 0) {
      return result;
    }
    v14 = (__int64*)(v6 + 144LL * v13);
  }
  if (v14[7] == 0 && (*((_BYTE*)v14 + 4) & 0x80) != 0 ||
      (*(_BYTE*)v14 & 0x80) != 0) {
    return 119788728;
  }
  return result;
}

#pragma GCC visibility pop
