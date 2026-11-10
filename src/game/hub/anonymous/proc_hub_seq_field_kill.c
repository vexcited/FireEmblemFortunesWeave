#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_7a96a0(float);
__int64 GameRoutine_d783a0(_QWORD, float);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqEncounterBase_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqFieldKill_vtable[])();
extern __int64 GameData_212dc38[7];
extern __int64 GameData_220d638;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64* GameData_212ec50[3];
float GameRoutine_d78a40(_QWORD);
float powf(_QWORD, float, float);
__int64 ProcHubSeqFieldKill_Destructor(__int64 a1);
__int64 ProcHubSeqFieldKill_DeletingDestructor(__int64 a1);
void ProcHubSeqFieldKill_Unknown3(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_e00100(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, float);
__attribute__((swiftcall)) void GameRoutine_e1b4d0(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_eb5940(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_eb68e0(PSEUDO_X8, int);
__attribute__((swiftcall)) void game_hub_e01240(PSEUDO_X8, _QWORD*, __int64);
__attribute__((swiftcall)) void game_hub_e1bfe0(PSEUDO_X8, __int64, __int64,
                                                __int64*);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__attribute__((swiftcall)) void math_Quat_Rotate(PSEUDO_X8, int8x16_t*,
                                                 int8x16_t*);
__int64 BonusExpList_7ff4f0(__int64, __int64*);
__int64 BonusExpList_7ffb30(__int64);
__int64 CharacterControllerEnemy_10c5990(__int64, char);
__int64 GameRoutine_1033a80(__int64, char);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_6c47b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e18130(__int64 result);
__int64 HubCharacterNatives_cee710(__int64, unsigned __int32, __int64, __int64,
                                   __int64, float);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString(__int64 result);
__int64 game_UnitPool_GetFirst(int*);
__int64 game_UnitPool_GetFirst_alt1(_QWORD) __asm__("game_UnitPool_GetFirst");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
char** GameRoutine_d5ffa0(char** result, __int64, __int64, unsigned __int64);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1a99717;
extern _UNKNOWN GameData_1af1e9b;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a83090;
extern __int64* GameData_212d458[7];
extern __int64* GameData_212eec0[4];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dc48[5];
extern __int64 GameData_21c9608;
extern __int64 GameData_21ca310;
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_220d630;
extern __int64 GameData_22167c8;
extern __int64 GameData_22167d0;
extern __int64 game_GameModeData_instance_;
extern char GameData_2216858;
float atan2f(long double, float);
void CharacterRotate_d519c0(int8x16_t*);
void GameRoutine_da5c00(__int64*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_65c760();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) GameRoutine_cba660();
void __attribute__((noreturn)) GameRoutine_da3110();
void __attribute__((noreturn)) GameRoutine_da5e00();
__int64 ProcHubSeqFieldKill_da3180();
__int64 ProcHubSeqFieldKill_da3200(_QWORD* a1);
void ProcHubSeqFieldKill_da36a0();
void ProcHubSeqFieldKill_da3c40();
__int64 ProcHubSeqFieldKill_da4120();
void ProcHubSeqFieldKill_da4660(__int64 a1);
char** ProcHubSeqFieldKill_da4bc0(char** result);

__int64 ProcHubSeqFieldKill_da3180()
{
  __int64 v0;
  __int64 v1;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0(),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v0 = GameData_22167c8;
  v1 = GameData_22167d0;
  while (v0 != v1) {
    if (*(_DWORD*)(v0 + 64) == 1) {
      result = GameRoutine_1033a80(v0, 1);
    }
    v0 += 88;
  }
  return result;
}

__int64 ProcHubSeqFieldKill_da3200(_QWORD* a1)
{

#pragma clang fp contract(off)
  int v2;
  __int64 result;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float v15;
  float v16;
  __int64 v17;
  __int64 v18;
  int v19;
  _QWORD* v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  int v25;
  float v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  int v30;
  float v31;
  unsigned int v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  bool v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57[3];
  struct {
    int v58;
    char gap68_[4];
    __int64 v59;
  } v58_;
  struct {
    __int64 v60;
    void* v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
  } v60_;
  _BYTE v65[20];

  if ((*(_QWORD*)(*(_QWORD*)GameData_212c6a0[0] + 328LL) & 4LL) != 0) {
    v2 = 1;
  }
  else {
    v2 = *(_DWORD*)(*(_QWORD*)GameData_212c6a0[0] + 308LL);
  }
  GameRoutine_eb68e0((void*)((__int64)&v58_.v58), v2);
  result = X8CALL_X0(__int64, GameRoutine_eb5940((void*)(v57)));
  v4 = v57[1];
  v51 = v57[0];
  if (v57[0] != v57[1]) {
    v5 = v58_.v58;
    v6 = 0;
    v53 = v57[1];
    v52 = v58_.v58;
    v7 = v57[0];
    do {
      v9 = *(_QWORD*)v7;
      v56 = v7;
      v10 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
      if (*(unsigned __int8*)(*(_QWORD*)v7 + 498LL) >= (int)v10) {
        v11 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
      }
      else {
        v11 = *(unsigned __int8*)(*(_QWORD*)v7 + 498LL);
      }
      if (*(_BYTE*)(*(_QWORD*)v7 + 498LL) != 0) {
        v12 = v11;
      }
      else {
        v12 = 1;
      }
      if (v12 == (_DWORD)v10) {
        v13 = 0;
      }
      else {
        v13 = *(_DWORD*)(GameData_21d9968 + 4LL * v12);
      }
      v14 = *(_DWORD*)(v9 + 504);
      v60_.v61 = &GameData_1a99717;
      v15 = 0x0.0p+0f;
      v16 = 0x0.0p+0f;
      v60_.v60 = game_HashString((__int64)&GameData_1a99717);
      if (game_GameModeData_instance_ != 0) {
        v17 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v60_.v60);
        if (v17 != 0) {
          v16 = (float)*(int*)(v17 + 32);
        }
      }
      v60_.v61 = &GameData_1af1e9b;
      v60_.v60 = game_HashString((__int64)&GameData_1af1e9b);
      if (game_GameModeData_instance_ != 0) {
        v18 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v60_.v60);
        if (v18 != 0) {
          v15 = (float)*(int*)(v18 + 32);
        }
      }
      LODWORD(v60_.v60) = 2;
      result = game_UnitPool_GetFirst((int*)&v60_.v60);
      if (result != 0) {
        v19 = v5;
        v20 = *(_QWORD**)(result + 432);
        if (v20 == nullptr) {
          v21 = *(_QWORD*)(result + 440);
          if (v21 != 0 &&
              (unsigned int)(v22 = *(unsigned __int8*)(v21 + 16)) <= 8) {
            while (1) {
              if (v22 == 0) {
                v20 = *(_QWORD**)(*(_QWORD*)(GameData_21ca310 + 56) + 556024LL);
                if (v20 != nullptr) {
                  break;
                }
              }
              if (++v22 == 9) {
                goto LABEL_27;
              }
            }
          }
          else {
          LABEL_27:
            v20 = nullptr;
          }
        }
        v60_.v60 = v9;
        v60_.v61 = (void*)result;
        v54 = v14;
        v23 = v13;
        v60_.v63 = 0;
        v60_.v64 = 257;
        v60_.v62 = 0;
        v24 = BonusExpList_7ff4f0((__int64)v65, &v60_.v60);
        result = BonusExpList_7ffb30(v24);
        v25 = result;
        if (v20 != nullptr) {
          do {
            v27 = (_QWORD*)v20[54];
            if (v27 == nullptr) {
              v29 = v20[55];
              if (v29 != 0 &&
                  (unsigned int)(v30 = *(unsigned __int8*)(v29 + 16)) <= 8) {
                while (1) {
                  if (v30 == 0) {
                    v27 = *(_QWORD**)(*(_QWORD*)(GameData_21ca310 + 56) +
                                      556024LL);
                    if (v27 != nullptr) {
                      break;
                    }
                  }
                  if (++v30 == 9) {
                    goto LABEL_30;
                  }
                }
              }
              else {
              LABEL_30:
                v27 = nullptr;
              }
            }
            v60_.v63 = 0;
            v60_.v64 = 257;
            v60_.v62 = 0;
            v60_.v60 = v9;
            v60_.v61 = v20;
            v28 = BonusExpList_7ff4f0((__int64)v65, &v60_.v60);
            result = BonusExpList_7ffb30(v28);
            v25 += result;
            v20 = v27;
          } while (v27 != nullptr);
        }
        v26 = (float)v25;
        v13 = v23;
        v5 = v19;
        v4 = v53;
        v14 = v54;
      }
      else {
        v26 = 0x0.0p+0f;
      }
      v31 = (float)(v16 / 0x1.9000000000000p+6f) *
            (float)(v26 / 0x1.4000000000000p+2f);
      if (v6 >= v5) {
        v31 = (float)(v15 / 0x1.9000000000000p+6f) * v31;
      }
      v32 = vcvtps_s32_f32(v31);
      v33 = a1[25];
      v34 = a1[26];
      v35 = (int)(v14 + v32) >= v13;
      if (v33 < v34) {
        *(_QWORD*)v33 = v9;
        *(_DWORD*)(v33 + 8) = v32;
        v8 = v33 + 16;
        *(_BYTE*)(v33 + 12) = v35;
      }
      else {
        v36 = a1[24];
        v55 = v6;
        v37 = v4;
        v38 = a1;
        v39 = v33 - v36;
        v40 = (__int64)(v33 - v36) >> 4;
        v41 = v40 + 1;
        if ((unsigned __int64)(v40 + 1) >> 60 != 0) {
          GameRoutine_da5e00();
        }
        v42 = v34 - v36;
        if (v42 >> 3 > v41) {
          v41 = v42 >> 3;
        }
        if ((unsigned __int64)v42 >= 0x7FFFFFFFFFFFFFF0LL) {
          v43 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v43 = v41;
        }
        if (v43 != 0) {
          if (v43 >> 60 != 0) {
            GameRoutine_60a210();
          }
          v44 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v43, 16, 0);
        }
        else {
          v44 = 0;
        }
        v45 = v44 + v39;
        v46 = v44 + 16 * v43;
        *(_QWORD*)v45 = v9;
        v47 = v44 + v39 - 16 * v40;
        *(_DWORD*)(v45 + 8) = v32;
        *(_BYTE*)(v45 + 12) = v35;
        v8 = v44 + v39 + 16;
        result = memcpy(v47, v36, v39);
        a1 = v38;
        v38[24] = v47;
        v38[25] = v8;
        v38[26] = v46;
        if (v36 != 0) {
          v48 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v48 = 56;
          }
          result = nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v48);
        }
        v4 = v37;
        v6 = v55;
        v5 = v52;
      }
      a1[25] = v8;
      ++v6;
      v7 = v56 + 8;
    } while (v56 + 8 != v4);
  }
  if (v51 != 0) {
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v49 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v49);
  }
  if (v58_.v59 != 0) {
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v50 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v50);
  }
  return result;
}

void ProcHubSeqFieldKill_da36a0()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64* v10;
    __int64 v11;
  } v10_;
  float32x4_t v12;
  __int64 v13[3];
  _QWORD v14[3];

  GameRoutine_da5c00(v13);
  v0 = v13[0];
  v1 = v13[1];
  if (v13[0] != v13[1]) {
    v2 = (__int64*)GameData_212dc48[0];
    v3 = fw_memory_g_heap_manager_ptr;
    do {
      LODWORD(v4) = 0;
      v5 = *v2;
      v6 = *(_QWORD*)(*(_QWORD*)v0 + 24LL);
      HIDWORD(v4) = fminf(*(float*)(v6 + 548) * 0x1.0000000000000p-1f,
                          0x1.3333340000000p+0f);
      v12 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v6 + 16) + 560LL),
                      COERCE_AS(float32x4_t, v4));
      GameRoutine_e1b4d0((void*)(v14));
      game_hub_e1bfe0((void*)(&v10_.v10), v5, (__int64)v14, (__int64*)&v12);
      if ((v14[0] & 1) != 0 && v14[2] != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7);
      }
      v8 = v10_.v11;
      if (v10_.v11 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v10_.v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
      v0 += 8;
    } while (v0 != v1);
    v0 = v13[0];
  }
  if (v0 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v9);
  }
}

void ProcHubSeqFieldKill_da3c40()
{
  float v0;
  float32x4_t v1;
  float v2;
  float v3;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  int8x16_t* v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  long double v20;
  __int64 v22;
  __int64 v23[3];

  if ((*(_BYTE*)(GameData_220d630 + 64) & 1) == 0) {
    GameRoutine_8123d0();
  }
  v0 = 0x0.0p+0f;
  v1 = vsubq_f32(COERCE_AS(float32x4_t, 0),
                 *(float32x4_t*)(GameData_220d630 + 48));
  v2 = LANES128(v1).n128_f32[2];
  v3 = vmuls_lane_f32(LANES128(v1).n128_f32[2], v1, 2) +
       (float)(LANES128(v1).n128_f32[0] * LANES128(v1).n128_f32[0]);
  if (v3 > 0x0.0p+0f) {
    if (LANES128(v1).n128_f32[0] != 0x0.0p+0f ||
        LANES128(v1).n128_f32[2] != 0x0.0p+0f) {
      v4 = sqrtf(v3);
      LANES128(v1).n128_f32[0] = LANES128(v1).n128_f32[0] / v4;
      v2 = LANES128(v1).n128_f32[2] / v4;
    }
    v0 = (float)(atan2f(*(long double*)&v1, v2) * 0x1.ca5dc20000000p+5f) *
         0x1.1df46a0000000p-6f;
  }
  GameRoutine_da5c00(v23);
  v5 = v23[0];
  v6 = v23[1];
  if (v23[0] != v23[1]) {
    v7 = GameData_212d458[0];
    while (1) {
      v8 = *(_QWORD*)(*(_QWORD*)v5 + 56LL);
      if (*(_DWORD*)(*(_QWORD*)v5 + 1112LL) == 1 && v8 != 0) {
        if (*(_BYTE*)(v8 + 76) != 1 || *(_DWORD*)(v8 + 72) != 9) {
          *(_DWORD*)(v8 + 80) = 9;
          *(_BYTE*)(v8 + 84) = 1;
        }
        if ((*(_BYTE*)(v8 + 160) & 1) == 0 && (*(_BYTE*)(v8 + 161) & 1) != 0) {
          GameRoutine_e18130(v8 + 64);
        }
      }
      v11 = *(_QWORD*)v5;
      if ((*(_BYTE*)(*(_QWORD*)v5 + 1329LL) & 1) == 0) {
        *(_BYTE*)(v11 + 1329) = 1;
      }
      v12 = *(_QWORD**)(*(_QWORD*)(v11 + 24) + 16LL);
      if (v12[107] != 0) {
        v13 = v12[108];
        v12[107] = 0;
        v12[108] = 0;
        if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak(v13);
        }
      }
      v14 = (int8x16_t*)v12[61];
      v15 = LANES128(v14[11]).n128_u8[4];
      LANES128(v14[2]).n128_f32[0] = v0;
      LANES128(v14[2]).n128_f32[1] = v0;
      if (v15 == 1) {
        LANES128(v14[11]).n128_u8[4] = 0;
      }
      CharacterRotate_d519c0(v14);
      v16 = *(_QWORD*)(*v7 + 80);
      if (v16 != 0) {
        v17 = *(_QWORD*)(*v7 + 72);
        v18 = *(_QWORD*)(*v7 + 80);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                  memory_order_relaxed);
        v19 = std___1___shared_weak_count_lock(v18);
        *(__n128*)&v20 = std___1___shared_weak_count___release_weak(v16);
        if (v19 != 0 && v17 != 0) {
          break;
        }
        if (v19 != 0) {
          goto LABEL_37;
        }
      }
    LABEL_9:
      v5 += 8;
      if (v5 == v6) {
        v5 = v23[0];
        goto LABEL_40;
      }
    }
    HubCharacterNatives_cee710(*(_QWORD*)(*(_QWORD*)v5 + 24LL), 0x537ACA3Fu,
                               0x100000000LL, 0, 0, 0x1.4000000000000p+1f);
  LABEL_37:
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v19 + 16LL))(v19, v20);
      std___1___shared_weak_count___release_weak(v19);
    }
    goto LABEL_9;
  }
LABEL_40:
  if (v5 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v22);
  }
}

__int64 ProcHubSeqFieldKill_da4120()
{
  __int64 result;
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  _BOOL8 v8;
  __int64 v9;
  unsigned int v10;
  char v11[4];
  int v12;
  int v13;

  v12 = 2;
  result = game_UnitPool_GetFirst_alt1(&v12);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 432);
    if (v1 == 0) {
      v1 = *(_QWORD*)(result + 440);
      if (v1 != 0) {
        v2 = *(unsigned __int8*)(v1 + 16);
        if (v2 < 9) {
          while (1) {
            if (v2 == 0) {
              v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556024LL);
              if (v1 != 0) {
                break;
              }
            }
            if (++v2 == 9) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v1 = 0;
        }
      }
    }
    v3 = game_g_shared_system_skills_ptr;
    while (1) {
    LABEL_8:
      v4 = v1;
      v5 = game_GameModeData_instance_;
      v11[0] = 9;
      if (game_GameModeData_instance_ != 0) {
        v5 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      v8 = true;
      if (*(_QWORD*)(result + 392) != v5 &&
          (*(_BYTE*)(result + 418) & 8) == 0) {
        v6 = result;
        v13 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v3) & 0xFFF;
        v7 = game_HasSkill(result + 1744, &v13);
        result = v6;
        if ((v7 & 1) != 0 && v11[0] != 9) {
          v8 = false;
        }
      }
      result = GameRoutine_6c47b0(result, v11, v8, 0);
      if (v4 == 0) {
        break;
      }
      v1 = *(_QWORD*)(v4 + 432);
      result = v4;
      if (v1 == 0) {
        v9 = *(_QWORD*)(v4 + 440);
        result = v4;
        if (v9 != 0) {
          v10 = *(unsigned __int8*)(v9 + 16);
          v1 = 0;
          result = v4;
          if (v10 <= 8) {
            while (1) {
              if (v10 == 0) {
                v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556024LL);
                if (v1 != 0) {
                  break;
                }
              }
              if (++v10 == 9) {
                v1 = 0;
                result = v4;
                goto LABEL_8;
              }
            }
            result = v4;
          }
        }
      }
    }
  }
  return result;
}

void ProcHubSeqFieldKill_da4660(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  unsigned __int64 v3;
  __int64* v4;
  __int64* v5;
  __int128 v6;
  __int128 v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  int8x16_t v13;
  __int64 v14;
  struct {
    __int64 v15;
    __int64 v16;
  } v15_;
  struct {
    _QWORD v17[2];
    __int64 v18;
  } v17_;
  struct {
    __int128 v19;
    int8x16_t v20;
    char v21;
  } v19_;
  __int128 v22;
  float32x4_t v23;
  int8x16_t v24[2];

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v1 = *(_QWORD*)(a1 + 152);
  if (*(_QWORD*)(a1 + 160) != v1) {
    v3 = 0;
    v4 = game_map_MapRandom_instance__ptr[0];
    v5 = GameData_212eec0[0];
    do {
      LANES128(v19_.v20).n128_u8[0] = 0;
      v19_.v19 = (__typeof__(v19_.v19)){0};
      v17_.v17[1] = 0;
      v17_.v18 = 0;
      v6 = *(_OWORD*)(a1 + 176);
      v17_.v17[0] = 0;
      v19_.v21 = 0;
      *(_QWORD*)&v7 = v6;
      *((_QWORD*)&v7 + 1) = DWORD2(v6);
      v19_.v19 = v7;
      nn_os_LockMutex(&game_g_random_mutex),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v8 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4);
      v9 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4 + 4);
      v10 = *(_DWORD*)v4 ^ (*(_DWORD*)v4 << 11);
      *(_DWORD*)v4 = *((_DWORD*)v4 + 1);
      *((_DWORD*)v4 + 1) = v8;
      v11 = (v10 >> 8) ^ (v9 >> 19) ^ v10 ^ v9;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) = v9;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4 + 4) = v11;
      nn_os_UnlockMutex(&game_g_random_mutex),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      math_Quat_FromYawPitchRoll(
          (void*)(v24),
          (float)((float)(unsigned __int16)v11 / 0x1.fffe000000000p+15f) *
              0x1.921fb60000000p+2f,
          0x0.0p+0f, 0x0.0p+0f),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v22 = GameData_1a83090;
      math_Quat_Rotate((void*)(&v23), v24, (int8x16_t*)&v22),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      GameRoutine_e00100((void*)(&v22), v12, &v19_.v19, &v23,
                         fminf(vcvts_n_f32_u32(v3, 3u), 0x1.0000000000000p+0f)),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v19_.v21 == 1) {
        LANES128(v13).n128_u64[0] = v22;
        LANES128(v13).n128_u64[1] = DWORD2(v22);
        v19_.v20 = v13;
      }
      else {
        v19_.v21 = 1;
        v19_.v20 = COERCE_AS(int8x16_t, v22);
      }
      GameRoutine_60a020(
          (__int64)v17_.v17,
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 152) + 8 * v3) + 8LL)),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      game_hub_e01240((void*)(&v15_.v15), (_QWORD*)*v5, (__int64)v17_.v17),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v15_.v16 != 0) {
        std___1___shared_weak_count___release_weak(v15_.v16),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      if ((v17_.v17[0] & 1) != 0 && v17_.v18 != 0) {
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v14),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      v1 = *(_QWORD*)(a1 + 152);
      ++v3;
    } while (v3 < (*(_QWORD*)(a1 + 160) - v1) >> 3);
  }
  *(_QWORD*)(a1 + 160) = v1;
}

char** ProcHubSeqFieldKill_da4bc0(char** result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  char* v27;
  char* v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  bool v33;
  __int64 v34;
  char* v35;
  char* v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  char* v50;
  char* v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  char v63;
  __int64 v64;

  v1 = GameData_220d630;
  if ((*(_BYTE*)(GameData_220d630 + 64) & 1) == 0) {
    GameRoutine_8123d0();
  }
  v2 = *(_QWORD*)(GameData_220d630 + 24);
  if (*(_QWORD*)(GameData_220d630 + 32) != v2) {
    v63 = (char)result;
    v3 = 0;
    v4 = nullptr;
    v5 = nullptr;
    v6 = 0;
    do {
      if ((unsigned __int64)v5 < v6) {
        *(_QWORD*)v5 = *(_QWORD*)(v2 + 8 * v3);
        v5 += 8;
      }
      else {
        v7 = (char*)(v5 - v4);
        v8 = (v5 - v4) >> 3;
        v9 = v8 + 1;
        if ((unsigned __int64)(v8 + 1) >> 61 != 0) {
        LABEL_111:
          GameRoutine_da3110();
        }
        if ((__int64)(v6 - (_QWORD)v4) >> 2 > v9) {
          v9 = (__int64)(v6 - (_QWORD)v4) >> 2;
        }
        if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL) {
          v10 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v10 = v9;
        }
        if (v10 != 0) {
          if (v10 >> 61 != 0) {
          LABEL_110:
            GameRoutine_60a210();
          }
          v11 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
        }
        else {
          v11 = 0;
        }
        v12 = *(_QWORD*)(v2 + 8 * v3);
        v6 = v11 + 8 * v10;
        v13 = (__int64)&v7[v11 + -8 * v8];
        *(_QWORD*)&v7[v11] = v12;
        v5 = &v7[v11 + 8];
        memcpy(v13, v4, v7);
        if (v4 != nullptr) {
          v14 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
        }
        v4 = (char*)v13;
      }
      v2 = *(_QWORD*)(v1 + 24);
      ++v3;
    } while (v3 < (*(_QWORD*)(v1 + 32) - v2) >> 3);
    if ((v63 & 1) != 0) {
      v15 = *(_QWORD*)(GameData_21ec7c0 + 24);
      v16 = *(_QWORD*)(GameData_21ec7c0 + 32);
      v17 = v16 - v15;
      if (v16 != v15) {
        if (v17 < 0) {
          GameRoutine_cba660();
        }
        v18 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
        v19 = v18;
        v20 = 0;
        do {
          v21 = v15 + v20;
          v22 = (_QWORD*)(v18 + v20);
          *v22 = *(_QWORD*)(v15 + v20);
          v23 = *(_QWORD*)(v15 + v20 + 8);
          v22[1] = v23;
          if (v23 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                                      memory_order_relaxed);
          }
          v20 += 16;
        } while (v21 + 16 != v16);
        v24 = v20 - 8;
        v25 = (__int64*)v18;
        v26 = v18 + v20 - 16;
        while (1) {
          v27 = *(char**)(v1 + 24);
          v28 = *(char**)(v1 + 32);
          v29 = *v25;
          if (v27 != v28) {
            v30 = v28 - v27 - 8;
            if ((~(_BYTE)v30 & 0x18) != 0) {
              v31 = ((unsigned __int8)((unsigned int)v30 >> 3) + 1) & 3;
              while (*(_QWORD*)v27 != v29) {
                v27 += 8;
                if (--v31 == 0) {
                  goto LABEL_38;
                }
              }
            }
            else {
            LABEL_38:
              if (v30 < 0x18) {
              LABEL_39:
                v32 = *(_QWORD*)(v29 + 56);
                v33 = *(_DWORD*)(v29 + 1112) != 1 || v32 == 0;
                if (!v33 && *(_BYTE*)(v32 + 36) == 1 &&
                    (unsigned int)CharacterControllerEnemy_10c5990(v32, 0) ==
                        1) {
                  v34 = *v25;
                  if ((unsigned __int64)v5 >= v6) {
                    v36 = (char*)(v5 - v4);
                    v37 = (v5 - v4) >> 3;
                    v38 = v37 + 1;
                    if ((unsigned __int64)(v37 + 1) >> 61 != 0) {
                      goto LABEL_111;
                    }
                    if ((__int64)(v6 - (_QWORD)v4) >> 2 > v38) {
                      v38 = (__int64)(v6 - (_QWORD)v4) >> 2;
                    }
                    if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v39 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v39 = v38;
                    }
                    if (v39 != 0) {
                      if (v39 >> 61 != 0) {
                        goto LABEL_110;
                      }
                      v40 = *v25;
                      v41 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v39, 16,
                          0);
                      v34 = v40;
                    }
                    else {
                      v41 = 0;
                    }
                    v6 = v41 + 8 * v39;
                    v42 = (__int64)&v36[v41 + -8 * v37];
                    *(_QWORD*)&v36[v41] = v34;
                    v5 = &v36[v41 + 8];
                    memcpy(v42, v4, v36);
                    if (v4 != nullptr) {
                      v43 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v43 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v43);
                    }
                    v4 = (char*)v42;
                  }
                  else {
                    *(_QWORD*)v5 = v34;
                    v5 += 8;
                  }
                }
                goto LABEL_32;
              }
              v27 += 16;
              while (1) {
                if (*((_QWORD*)v27 - 2) == v29) {
                  v27 -= 16;
                  goto LABEL_31;
                }
                if (*((_QWORD*)v27 - 1) == v29) {
                  v27 -= 8;
                  goto LABEL_31;
                }
                if (*(_QWORD*)v27 == v29) {
                  goto LABEL_31;
                }
                if (*((_QWORD*)v27 + 1) == v29) {
                  break;
                }
                v35 = v27 + 16;
                v27 += 32;
                if (v35 == v28) {
                  goto LABEL_39;
                }
              }
              v27 += 8;
            }
          }
        LABEL_31:
          if (v27 == v28) {
            goto LABEL_39;
          }
        LABEL_32:
          v33 = v26 == (_QWORD)v25;
          v25 += 2;
          if (v33) {
            do {
              v44 = *(_QWORD*)(v19 + v24);
              if (v44 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
                std___1___shared_weak_count___release_weak(v44);
              }
              v24 -= 16;
            } while (v24 != -8);
            v45 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v45 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v45);
            break;
          }
        }
      }
    }
    v46 = GameData_21c9608;
    v47 = *(_QWORD*)(GameData_21c9608 + 328);
    if (v4 == v5) {
      v48 = 0;
      v50 = nullptr;
    }
    else {
      v64 = *(_QWORD*)(GameData_21c9608 + 328);
      v48 = 0;
      v49 = 0;
      v50 = nullptr;
      v51 = v4;
      do {
        v52 = *(_QWORD*)(*(_QWORD*)v51 + 264LL);
        if ((unsigned __int64)v50 < v49) {
          *(_QWORD*)v50 = v52;
          v50 += 8;
        }
        else {
          v53 = &v50[-v48];
          v54 = (__int64)&v50[-v48] >> 3;
          v55 = v54 + 1;
          if ((unsigned __int64)(v54 + 1) >> 61 != 0) {
            GameRoutine_65c760();
          }
          if ((__int64)(v49 - v48) >> 2 > v55) {
            v55 = (__int64)(v49 - v48) >> 2;
          }
          if (v49 - v48 >= 0x7FFFFFFFFFFFFFF8LL) {
            v56 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v56 = v55;
          }
          if (v56 != 0) {
            if (v56 >> 61 != 0) {
              goto LABEL_110;
            }
            v57 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v56, 16, 0);
          }
          else {
            v57 = 0;
          }
          v49 = v57 + 8 * v56;
          v58 = &v50[-v48];
          v59 = (__int64)&v53[v57 + -8 * v54];
          *(_QWORD*)&v53[v57] = v52;
          v50 = &v53[v57 + 8];
          memcpy(v59, v48, v58);
          if (v48 != 0) {
            v60 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v60 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v60);
          }
          v48 = v59;
        }
        v51 += 8;
      } while (v51 != v5);
      LOBYTE(v47) = v64;
      v46 = GameData_21c9608;
    }
    *(_QWORD*)(v46 + 896) = v47 & 1;
    result = GameRoutine_d5ffa0((char**)(v46 + 904), v48, (__int64)v50,
                                (__int64)&v50[-v48] >> 3);
    if (v48 != 0) {
      v61 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v61 = 56;
      }
      result = (char**)nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v61);
    }
    if (v4 != nullptr) {
      v62 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v62 = 56;
      }
      return (char**)nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v62);
    }
  }
  return result;
}

__int64 ProcHubSeqFieldKill_Destructor(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 192);
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqFieldKill_vtable;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 200) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqEncounterBase_vtable;
  if (v6 != 0) {
    v7 = *v3;
    *(_QWORD*)(a1 + 160) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcHubSeqFieldKill_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 192);
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqFieldKill_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 200) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqEncounterBase_vtable;
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 160) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, a1);
}

void ProcHubSeqFieldKill_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  __int64 v12;
  float v13;

  v1 = a1;
  v2 = game_script_hub_g_frame_counter_ptr[0];
  v3 = (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                         104LL) *
               16.683f) /
       1000.0f;
  if (*(_BYTE*)(a1 + 225) == 1) {
    v4 = 1.0f;
    if (*(_BYTE*)(a1 + 224) == 0) {
      v4 = 0.0f;
    }
    v5 = *(float*)(a1 + 228);
    v6 = fabsf(v3 / 0.05f);
    if (v5 <= v4) {
      if (v5 >= v4) {
        goto LABEL_10;
      }
      v5 = v6 + v5;
      if (v5 <= v4) {
        goto LABEL_10;
      }
    }
    else {
      v5 = v5 - v6;
      if (v5 >= v4) {
        goto LABEL_10;
      }
    }
    v5 = v4;
  LABEL_10:
    *(float*)(a1 + 228) = v5;
    v7 = powf(a1, v5, 0.5f);
    a1 = GameRoutine_7a96a0(v7 * 0.05f);
    v8 = *(_QWORD*)GameData_212dc38[0];
    v9 = *(float*)(*(_QWORD*)GameData_212dc38[0] + 1016LL);
    *(float*)(v8 + 1012) = -v7;
    *(float*)(v8 + 1008) = (float)(0.0f - v7) + v9;
  }
  if (*(_BYTE*)(v1 + 216) == 0) {
    return;
  }
  v10 = *(float*)(v1 + 220);
  v11 = fabsf(v3 / 1.1f);
  if (v10 > 0.0f) {
    v10 = v10 - v11;
    if (v10 >= 0.0f) {
      goto LABEL_18;
    }
  LABEL_17:
    v10 = 0.0f;
    goto LABEL_18;
  }
  if (v10 < 0.0f) {
    v10 = v11 + v10;
    if (v10 > 0.0f) {
      goto LABEL_17;
    }
  }

LABEL_18:
  *(float*)(v1 + 220) = v10;
  **(float**)(GameData_220d638 + 16) = powf(a1, v10, 1.25f) * 0.3f;
  v12 = *GameData_212ec50[0];
  GameRoutine_d783a0(*(_QWORD*)(*GameData_212ec50[0] + 8), 0.0f);
  v13 = GameRoutine_d78a40(*(_QWORD*)(v12 + 8));
  if (v13 == 1.0f) {
    if (*(_BYTE*)(v12 + 16) != 1) {
      return;
    }
  }
  else {
    *(_BYTE*)(v12 + 16) = 1;
  }
  *(float*)(*(_QWORD*)v2 + 156LL) = v13;
}

#pragma GCC visibility pop
