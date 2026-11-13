#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c9cf0(_QWORD, _QWORD);
__int64 GameRoutine_752850(void);
__int64 GameRoutine_788a40(void);
__int64 GameRoutine_f0a0d0(__int64, int);
__int64 GameRoutine_f235c0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_1f94310[])();
extern __int64 (*game_map_MapDrawTargetLine_vtable[])();
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d038[2];
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd130;
extern __int64 GameData_21ed070;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern int GameData_21d92e0;
__int64 MapDrawTargetLine_Destructor(__int64 a1);
__int64 MapDrawTargetLine_f21270_alt1() __asm__("MapDrawTargetLine_f21270");
bool MapDrawTargetLine_f21470(__int64 a1, __int64 a2);
bool MapDrawTargetLine_Unknown6(__int64 a1);
__int64 game_map_MapDrawTargetLine_UpdateMesh_lambda0_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3);
__int64 game_map_MapDrawTargetLine_UpdateMesh_lambda1_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3);
__int64* GameRoutine_752850_alt1(unsigned int, unsigned int,
                                 unsigned __int8) __asm__("GameRoutine_752850");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_UnitPool_GetFirst(int*);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool game_gameui_UnitUtil_CheckDangerCritical(__int64, __int64);
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_740050();
void MapDrawTargetLine_Unknown2(__int64 a1);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64* MapDrawTargetLine_f21270();
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void game_80c7f0(PSEUDO_X8, __int64 result);
__attribute__((swiftcall)) void game_map_fe9ec0(PSEUDO_X8, __int64);
__int64* GameRoutine_64dfe0(__int64* result, __int64*);
__int64* GameRoutine_752850_alt2(int, int,
                                 unsigned __int8) __asm__("GameRoutine_752850");
__int64* GameRoutine_f155c0(__int64* result, char*, char*, unsigned __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* fw_containers_BalanceAfterInsert(__int64* result, __int64*);
__int64 CharacterController_d42d20(__int64 result, char*, char*,
                                   unsigned __int64);
__int64 GameHr_788a40();
__int64 GameRoutine_112180(__int64, __int64);
__int64 PrimitiveDrawStack_f525a0(__int64*, __int64);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_map_BattleUtil_EachFactorSkill_7a8c20(__int64 result, __int64,
                                                   char, __int64, __int64);
__int64 game_map_f54910(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
extern _QWORD GameData_1b98ed8[3];
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a83440;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1f98e48[])();
extern __int64 (*GameData_1ff2d90[])();
extern __int64 (*GameData_1ff2e10[])();
extern __int64 (*game_map_TargetMeshData_vtable[])();
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212f8b0[14];
extern __int64 GameData_212d018[6];
float Height_7c4d10(__int64, float, float);
float Unit_6c7fa0(__int64, _OWORD*);
float game_map_CursorDrawInfo_GetHeightTop(__int64, int, int, int, int,
                                           __int64);
float32x4_t* GameRoutine_f54fe0(float32x4_t* result);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
long double MapDrawConst_fcc280(__int64, unsigned int**);
unsigned __int64 HeightCellMap_1003040(unsigned __int64 result,
                                       unsigned __int8*, int, int);
void PrimitiveDrawStack_f51430(__int64, __int64);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a250(const char*);
void __cxa_guard_release(__int64);
void snd_Fade_Fade_10c830(__int64, float);
void MapDrawTargetLine_Unknown3(__int64 a1);
void MapDrawTargetLine_Unknown4(__int64 a1);

__int64 MapDrawTargetLine_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_map_MapDrawTargetLine_vtable;
  v2 = a1 + 144;
  if ((snd_fnd_WeakHandle_isValid(a1 + 144) & 1) != 0) {
    v3 = snd_fnd_WeakHandle_get(v2);
    (*(void (**)(__int64))(*(_QWORD*)(v3 - 5592) + 264LL))(v3 - 5592);
  }
  v4 = *(_QWORD*)(a1 + 168);
  if (v4 != 0) {
    *(_QWORD*)(a1 + 176) = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                  v4);
  }
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 136);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  GameRoutine_f235c0(*(_QWORD*)(a1 + 96));
  GameRoutine_f235c0(*(_QWORD*)(a1 + 72));
  GameRoutine_f235c0(*(_QWORD*)(a1 + 48));
  return GameRoutine_f235c0(*(_QWORD*)(a1 + 24));
}

void MapDrawTargetLine_Unknown2(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64* v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;

  v1 = *(unsigned __int8*)(a1 + 8);
  *(float*)(a1 + 160) =
      *(float*)(a1 + 160) +
      (float)((float)(*(float*)(*(_QWORD*)
                                    game_script_hub_g_frame_counter_ptr[0] +
                                160LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f);
  if (v1 != 1) {
    return;
  }
  v3 = GameData_212d038[0];
  *(_QWORD*)(a1 + 176) = *(_QWORD*)(a1 + 168);
  v4 = *(_QWORD*)v3;
  v5 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  v6 = GameData_212d020[0];
  v7 = *(_QWORD*)v3;
  v8 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 24LL);
  v9 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  if (v9 == 0) {
    goto LABEL_7;
  }
  v10 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 96LL);
  v11 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                            memory_order_relaxed);
  v12 = std___1___shared_weak_count_lock_alt1(v11);
  std___1___shared_weak_count___release_weak_alt2(v9);
  if (v12 == 0) {
    v7 = *(_QWORD*)v3;
  LABEL_7:
    if (*(_BYTE*)(v7 + 156) != 0) {
      v13 = 8;
    }
    else {
      v13 = 127472;
    }
    goto LABEL_15;
  }
  if (v10 != 0) {
    v13 = 254936;
  }
  else if (*(_BYTE*)(*(_QWORD*)v3 + 156LL) != 0) {
    v13 = 8;
  }
  else {
    v13 = 127472;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt2(v12);
  }
LABEL_15:
  v14 = *(_QWORD*)(v8 + v13 + 127192);
  v15 = (*(_QWORD*)(v8 + v13 + 127168) | v14) == 0 || v8 == 0;
  if (v15 || *(_DWORD*)(v8 + v13) != 0) {
    if (*(_DWORD*)(*(_QWORD*)v6 + 4368LL) == 1) {
      v16 = *(char*)(v4 + 82);
      v17 = *(char*)(v4 + 83);
      LODWORD(v18) = v16 + 32 * v17;
      if ((unsigned int)v18 >= 0x400) {
        v18 = 0;
      }
      else {
        v18 = (unsigned int)v18;
      }
      v19 =
          *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v18 + 8);
      if (*(_BYTE*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v18 + 8) != 0) {
        v20 =
            *(_QWORD*)(GameData_21ca310 + 56) +
            2224LL * *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) +
                                         v18 + 8);
        v14 = v20 - 2224;
        v21 = v19 > 0xFA || v20 == 2224;
        if (!v21 && *(_QWORD*)(v20 - 1832) != 0) {
          v22 = *(_QWORD*)(v20 - 1784);
          v23 = v22 != 0 ? *(unsigned __int8*)(v22 + 16) : 9;
          if (v23 == v5) {
            goto LABEL_34;
          }
        }
      }
    }
    else {
      v16 = *(char*)(v4 + 82);
      v17 = *(char*)(v4 + 83);
    }
    v14 = (__int64)GameRoutine_752850_alt1(v16, v17, v5);
  }
LABEL_34:
  v48 = 6;
  v24 = game_UnitPool_GetFirst(&v48);
  if (v24 != 0) {
    v25 = *(_QWORD*)(v24 + 432);
    v26 = v24;
    if (v25 == 0) {
      v25 = *(_QWORD*)(v24 + 440);
      if (v25 != 0) {
        v27 = *(unsigned __int8*)(v25 + 16);
        if (v27 <= 8) {
          v47 = 24LL * *(unsigned __int8*)(v25 + 16) + 556024;
          while (1) {
            if (v27 <= 1) {
              v25 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v47);
              if (v25 != 0) {
                break;
              }
            }
            ++v27;
            v47 += 24;
            if (v27 == 9) {
              goto LABEL_38;
            }
          }
        }
        else {
        LABEL_38:
          v25 = 0;
        }
      }
    }
    v28 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
    LABEL_41:
      v29 = v25;
      if (MapDrawTargetLine_f21470(v14, v26) &&
          game_gameui_UnitUtil_CheckDangerCritical(v26, v14)) {
        v31 = *(__int64**)(a1 + 176);
        v30 = *(_QWORD*)(a1 + 184);
        if ((unsigned __int64)v31 >= v30) {
          v33 = *(_QWORD*)(a1 + 168);
          v34 = (char*)v31 - v33;
          v35 = ((__int64)v31 - v33) >> 3;
          v36 = v35 + 1;
          if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
            GameRoutine_740050();
          }
          v37 = v30 - v33;
          if (v37 >> 2 > v36) {
            v36 = v37 >> 2;
          }
          if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
            v38 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v38 = v36;
          }
          if (v38 != 0) {
            if (v38 >> 61 != 0) {
              GameRoutine_60a210();
            }
            v39 = fw_memory_HeapManager_Allocate(*v28, 8 * v38, 16, 0);
          }
          else {
            v39 = 0;
          }
          v40 = v39 + 8 * v38;
          v41 = (unsigned __int64)v31 - v33;
          v42 = (__int64)&v34[v39 + -8 * v35];
          *(_QWORD*)&v34[v39] = v26;
          v32 = (__int64)&v34[v39 + 8];
          memcpy_alt1(v42, v33, v41);
          *(_QWORD*)(a1 + 168) = v42;
          *(_QWORD*)(a1 + 176) = v32;
          *(_QWORD*)(a1 + 184) = v40;
          if (v33 != 0) {
            v43 = 128;
            if (*(_QWORD*)(*v28 + 200) == 0) {
              v43 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v28 + v43, v33);
          }
        }
        else {
          *v31 = v26;
          v32 = (__int64)(v31 + 1);
        }
        *(_QWORD*)(a1 + 176) = v32;
      }
      if (v29 == 0) {
        break;
      }
      v25 = *(_QWORD*)(v29 + 432);
      v26 = v29;
      if (v25 == 0) {
        v44 = *(_QWORD*)(v29 + 440);
        v26 = v29;
        if (v44 != 0) {
          v45 = *(unsigned __int8*)(v44 + 16);
          v25 = 0;
          v26 = v29;
          if (v45 <= 8) {
            v46 = 24LL * (unsigned int)v45 + 556024;
            while (1) {
              if (v45 <= 1) {
                v25 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v46);
                if (v25 != 0) {
                  break;
                }
              }
              ++v45;
              v46 += 24;
              if (v45 == 9) {
                v25 = 0;
                v26 = v29;
                goto LABEL_41;
              }
            }
            v26 = v29;
          }
        }
      }
    }
  }
}

__int64* MapDrawTargetLine_f21270()
{
  __int64 v0;
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  bool v19;
  __int64 v20;

  v0 = GameData_212d038[0];
  v1 = *(_QWORD*)GameData_212d038[0];
  v2 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  v3 = GameData_212d020[0];
  v4 = *(_QWORD*)GameData_212d038[0];
  v5 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 24LL);
  v6 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  if (v6 == 0) {
    goto LABEL_6;
  }
  v7 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 96LL);
  v8 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  v9 = std___1___shared_weak_count_lock_alt1(v8);
  std___1___shared_weak_count___release_weak_alt2(v6);
  if (v9 == 0) {
    v4 = *(_QWORD*)v0;
  LABEL_6:
    if (*(_BYTE*)(v4 + 156) != 0) {
      v10 = 8;
    }
    else {
      v10 = 127472;
    }
    goto LABEL_14;
  }
  if (v7 != 0) {
    v10 = 254936;
  }
  else if (*(_BYTE*)(*(_QWORD*)v0 + 156LL) != 0) {
    v10 = 8;
  }
  else {
    v10 = 127472;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt2(v9);
  }
LABEL_14:
  v11 = *(_QWORD*)(v5 + v10 + 127192);
  v12 = (*(_QWORD*)(v5 + v10 + 127168) | v11) == 0 || v5 == 0;
  if (!v12 && *(_DWORD*)(v5 + v10) == 0) {
    return (__int64*)v11;
  }
  if (*(_DWORD*)(*(_QWORD*)v3 + 4368LL) != 1) {
    v13 = *(char*)(v1 + 82);
    v14 = *(char*)(v1 + 83);
    return GameRoutine_752850_alt1(v13, v14, v2);
  }
  v13 = *(char*)(v1 + 82);
  v14 = *(char*)(v1 + 83);
  LODWORD(v15) = v13 + 32 * v14;
  if ((unsigned int)v15 >= 0x400) {
    v15 = 0;
  }
  else {
    v15 = (unsigned int)v15;
  }
  v16 = *(_QWORD*)(*GameData_212ce98[0] + 96) + v15;
  v17 = *(unsigned __int8*)(v16 + 8);
  if (*(_BYTE*)(v16 + 8) == 0) {
    return GameRoutine_752850_alt1(v13, v14, v2);
  }
  v18 =
      *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * *(unsigned __int8*)(v16 + 8);
  v11 = v18 - 2224;
  v19 = v17 > 0xFA || v18 == 2224;
  if (v19 || *(_QWORD*)(v18 - 1832) == 0) {
    return GameRoutine_752850_alt1(v13, v14, v2);
  }
  v20 = *(_QWORD*)(v18 - 1784);
  if (v20 != 0) {
    if (*(unsigned __int8*)(v20 + 16) == v2) {
      return (__int64*)v11;
    }
    return GameRoutine_752850_alt1(v13, v14, v2);
  }
  if (v2 != 9) {
    return GameRoutine_752850_alt1(v13, v14, v2);
  }
  return (__int64*)v11;
}

bool MapDrawTargetLine_f21470(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v11[4];
  _QWORD* v12;
  char v13;

  if (a1 == 0) {
    v3 = GameData_212ce90[0];
    v4 = *GameData_212ce90[0];
    if ((*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) == 0) {
    LABEL_12:
      if ((*(_BYTE*)(v4 + 21) & 1) == 0 &&
          (*(_QWORD*)(a2 + 392) == 0 || (*(_BYTE*)(a2 + 417) & 0x1C) != 0 ||
           (*(float (**)(__int64))(*(_QWORD*)(a2 + 152) + 16LL))(a2 + 152) <=
               0.0f ||
           *(_BYTE*)(*(_QWORD*)(a2 + 440) + 16LL) != 1 ||
           (*(_BYTE*)(a2 + 417) & 0x20) == 0)) {
        return false;
      }
      return *(_QWORD*)(a2 + 2200) != 0;
    }
    v6 = (unsigned int)*(char*)(a2 + 584);
    v7 = (unsigned int)*(char*)(a2 + 585);
    v13 = 0;
    v12 = v11;
    v8 = *(_QWORD*)(*GameData_212ce98[0] + 160) + 8LL;
    v11[0] = GameData_1f94310;
    v11[1] = v8;
    v11[2] = &v13;
    GameRoutine_6c8a80(a2, v6, v7, v11);
    if (v12 == v11) {
      v9 = 32;
    }
    else {
      if (v12 == nullptr) {
      LABEL_10:
        if (v13 != 1) {
          return false;
        }
        v4 = *v3;
        goto LABEL_12;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v12 + v9))((__int64)v12);
    goto LABEL_10;
  }
  if ((GameRoutine_6c9cf0(a1, a2) & 1) == 0) {
    return false;
  }
  return *(_QWORD*)(a2 + 2200) != 0;
}

void MapDrawTargetLine_Unknown3(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  int v25;
  _QWORD* v26;
  _QWORD* v27;
  __int64 v28;
  int v29;
  _QWORD* v30;
  _QWORD* v31;
  __int64 v32;
  int v33;
  _QWORD* v34;
  _QWORD* v35;
  __int64 v36;
  bool v37;
  int v38;
  int v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  bool v43;
  __int64 v44;
  int v45;
  int v46;
  char v47;
  float32x4_t v48;
  float32x4_t v49;
  int v50;
  int v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v61;
  float32x4_t v62;
  float32x4_t v63;
  float v64;
  float v65;
  float v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  float v70;
  unsigned __int64 v71;
  float32x4_t v72;
  float32x4_t v73;
  __int64 v74;
  int v75;
  int v76;
  int v77;
  char v78;
  __int64 v79;
  char v80;
  __int64 v81;
  bool v82;
  int v83;
  int v84;
  int v85;
  char v86;
  __int64 v87;
  char v88;
  char v89;
  unsigned int v90;
  char* v91;
  char* v92;
  unsigned __int64 v93;
  __int64 v94;
  float32x4_t v95;
  float32x4_t v96;
  int v97;
  float v98;
  unsigned int v99;
  __int128 v100;
  int v101;
  int v102;
  int v103;
  float v104;
  float v105;
  float v106;
  float32x4_t v107;
  __int128 v108;
  __int128 v109;
  __int64** v110;
  __int64 v111;
  float32x4_t** v112;
  __int64** v113;
  unsigned __int64 v114;
  __int64 v115;
  _QWORD* i;
  unsigned __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64* v121;
  __int64* v122;
  __int128 v123;
  __int128 v124;
  __int128 v125;
  __int64 v126;
  unsigned int v127;
  __int128 v128;
  __int64 v129;
  __int64 v130;
  __int128 v131;
  __int128 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  int v136;
  __int64 v137;
  __int64 v138;
  __int128 v139;
  __int128 v140;
  __int64 v141;
  __int128 v142;
  __int128 v143;
  __int128 v144;
  __int64 v145;
  int v146;
  __int128 v147;
  unsigned int v148;
  __int128 v149;
  char v150;
  __int64 v151;
  int v152;
  unsigned int v153;
  __int128 v154;
  __int64 v155;
  float32x4_t* v156;
  __int64** v157;
  unsigned __int64 v158;
  __int64 v159;
  __int64* v160;
  __int64* v161;
  __int64 v162;
  float32x4_t* v163;
  unsigned __int64 v164;
  float32x4_t* v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  char* v168;
  float32x4_t v169;
  float v170;
  float32x4_t v171;
  int8x16_t v172;
  __int64 v173;
  char* v174;
  char* v175;
  char* v176;
  void (**v177)(char*);
  __int64 v178;
  __int64 v179;
  unsigned __int64 v180;
  __int64 v181;
  int v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  float32x4_t* v186;
  __int64 v187;
  __int64 v188;
  float v189;
  float v190;
  float v191;
  float v192;
  float v193;
  unsigned __int64 v194;
  float32x4_t* v195;
  float32x4_t* v196;
  float32x4_t* v197;
  __int64* v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  unsigned __int64 v203;
  __int64 v204;
  __int64 v205;
  void (***v206)(_QWORD);
  void (***v207)(_QWORD);
  void (**v208)(_QWORD);
  __int64 v209;
  int v210;
  __int64 v211;
  float v212;
  float v213;
  float v214;
  float32x4_t v215;
  __int64 v216;
  __int64 v217;
  char v218;
  char v219;
  __int64 v220;
  unsigned int v221;
  float32x4_t v222;
  float32x4_t v223;
  float32x4_t v224;
  float32x4_t v225;
  float32x4_t v226;
  int v227;
  float32x4_t v228;
  float32x4_t v229;
  float32x4_t v230;
  int v231;
  __int64 v232;
  int v233;
  __int64 v234;
  float v235;
  char v236;
  __int64* v237;
  struct {
    __int128 v238;
    float32x4_t v239;
    __int128 v240;
    __int128 v241;
    __int128 v242;
    __int64 v243;
    __int64 v244;
    char* v245;
    char* v246;
    char gap288_[8];
    char* v247;
    char* v248;
    char gap312_[8];
    __int64 v249;
    unsigned int v250;
    char gap332_[4];
    __int64 v251;
    __int64 v252;
    __int128 v253;
    __int64 v254;
    __int64 v255;
    __int64 v256;
    __int64 v257;
    __int64 v258;
    __int64 v259;
    int v260;
    char gap420_[4];
    __int64 v261;
    __int64 v262;
    char gap440_[8];
    __int128 v263;
    __int128 v264;
    __int64 v265;
    __int64 v266;
    __int128 v267;
    __int64 v268;
    int v269;
    char gap524_[4];
    __int64 v270;
    __int64 v271;
    unsigned __int8 v272;
    char gap545_[15];
    int v273;
    char v274;
    char gap565_[11];
    __int64 v275;
    __int64 v276;
    unsigned __int8 v277;
  } v238_;
  struct {
    _QWORD v278[4];
    _QWORD* v279;
  } v278_;
  struct {
    _QWORD v280[4];
    _QWORD* v281;
  } v280_;
  __int64 v282;
  _QWORD v283[2];

  v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = fw_memory_g_heap_manager_ptr;
  v3 = GameData_212f8b0[0];
  if (*(_BYTE*)(a1 + 8) != 1) {
    goto LABEL_272;
  }
  v4 = *(_QWORD**)(a1 + 16);
  v5 = (_QWORD*)(a1 + 24);
  v220 = a1 + 16;
  if (v4 != (_QWORD*)(a1 + 24)) {
    do {
      v20 = v4[6];
      *((_BYTE*)v4 + 272) = 0;
      if (((*(__int64 (**)(void*))(v20 + 48))((void*)&v4[6]) & 1) != 0) {
        v21 = 1036831949;
      }
      else {
        v21 = 0;
        *((_DWORD*)v4 + 69) = 0;
      }
      v22 = (_QWORD*)v4[1];
      *((_DWORD*)v4 + 70) = v21;
      if (v22 != nullptr) {
        do {
          v23 = v22;
          v22 = (_QWORD*)*v22;
        } while (v22 != nullptr);
      }
      else {
        do {
          v23 = (_QWORD*)v4[2];
          v37 = v4 == (_QWORD*)*v23;
          v4 = v23;
        } while (!v37);
      }
      v4 = v23;
    } while (v23 != v5);
  }
  v6 = *(_QWORD**)(a1 + 40);
  if (v6 != (_QWORD*)(a1 + 48)) {
    do {
      v24 = v6[6];
      *((_BYTE*)v6 + 272) = 0;
      if (((*(__int64 (**)(void*))(v24 + 48))((void*)&v6[6]) & 1) != 0) {
        v25 = 1036831949;
      }
      else {
        v25 = 0;
        *((_DWORD*)v6 + 69) = 0;
      }
      v26 = (_QWORD*)v6[1];
      *((_DWORD*)v6 + 70) = v25;
      if (v26 != nullptr) {
        do {
          v27 = v26;
          v26 = (_QWORD*)*v26;
        } while (v26 != nullptr);
      }
      else {
        do {
          v27 = (_QWORD*)v6[2];
          v37 = v6 == (_QWORD*)*v27;
          v6 = v27;
        } while (!v37);
      }
      v6 = v27;
    } while (v27 != (_QWORD*)(a1 + 48));
  }
  v7 = *(_QWORD**)(a1 + 64);
  if (v7 != (_QWORD*)(a1 + 72)) {
    do {
      v28 = v7[6];
      *((_BYTE*)v7 + 272) = 0;
      if (((*(__int64 (**)(void*))(v28 + 48))((void*)&v7[6]) & 1) != 0) {
        v29 = 1036831949;
      }
      else {
        v29 = 0;
        *((_DWORD*)v7 + 69) = 0;
      }
      v30 = (_QWORD*)v7[1];
      *((_DWORD*)v7 + 70) = v29;
      if (v30 != nullptr) {
        do {
          v31 = v30;
          v30 = (_QWORD*)*v30;
        } while (v30 != nullptr);
      }
      else {
        do {
          v31 = (_QWORD*)v7[2];
          v37 = v7 == (_QWORD*)*v31;
          v7 = v31;
        } while (!v37);
      }
      v7 = v31;
    } while (v31 != (_QWORD*)(a1 + 72));
  }
  v8 = *(_QWORD**)(a1 + 88);
  if (v8 != (_QWORD*)(a1 + 96)) {
    do {
      v32 = v8[6];
      *((_BYTE*)v8 + 272) = 0;
      if (((*(__int64 (**)(void*))(v32 + 48))((void*)&v8[6]) & 1) != 0) {
        v33 = 1036831949;
      }
      else {
        v33 = 0;
        *((_DWORD*)v8 + 69) = 0;
      }
      v34 = (_QWORD*)v8[1];
      *((_DWORD*)v8 + 70) = v33;
      if (v34 != nullptr) {
        do {
          v35 = v34;
          v34 = (_QWORD*)*v34;
        } while (v34 != nullptr);
      }
      else {
        do {
          v35 = (_QWORD*)v8[2];
          v37 = v8 == (_QWORD*)*v35;
          v8 = v35;
        } while (!v37);
      }
      v8 = v35;
    } while (v35 != (_QWORD*)(a1 + 96));
  }
  v9 = (__int64*)GameData_212d038[0];
  v10 = *(_QWORD*)GameData_212d038[0];
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1) & 1) == 0) {
    goto LABEL_271;
  }
  v11 = *v9;
  v12 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  v13 = v11;
  v14 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 24LL);
  v15 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  if (v15 == 0) {
    goto LABEL_52;
  }
  v16 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 96LL);
  v17 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                            memory_order_relaxed);
  v18 = std___1___shared_weak_count_lock_alt1(v17),
  v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
  std___1___shared_weak_count___release_weak_alt2(v15),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v18 == 0) {
    v13 = *(_QWORD*)GameData_212d038[0];
  LABEL_52:
    if (*(_BYTE*)(v13 + 156) != 0) {
      v19 = 8;
    }
    else {
      v19 = 127472;
    }
    goto LABEL_60;
  }
  if (v16 != 0) {
    v19 = 254936;
  }
  else if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
    v19 = 8;
  }
  else {
    v19 = 127472;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
    std___1___shared_weak_count___release_weak_alt2(v18),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
  }
LABEL_60:
  v36 = *(_QWORD*)(v14 + v19 + 127192);
  v37 = (*(_QWORD*)(v14 + v19 + 127168) | v36) == 0 || v14 == 0;
  if (!v37 && *(_DWORD*)(v14 + v19) == 0) {
    v3 = GameData_212f8b0[0];
    if (v36 != 0) {
      goto LABEL_79;
    }
  LABEL_81:
    v46 = 1;
    v219 = 1;
    goto LABEL_82;
  }
  v3 = GameData_212f8b0[0];
  if (*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) == 1) {
    v38 = *(char*)(v11 + 82);
    v39 = *(char*)(v11 + 83);
    LODWORD(v40) = v38 + 32 * v39;
    if ((unsigned int)v40 >= 0x400) {
      v40 = 0;
    }
    else {
      v40 = (unsigned int)v40;
    }
    v41 = *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v40 + 8);
    if (*(_BYTE*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v40 + 8) != 0) {
      v42 = *(_QWORD*)(GameData_21ca310 + 56) +
            2224LL * *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) +
                                         v40 + 8);
      v36 = v42 - 2224;
      v43 = v41 > 0xFA || v42 == 2224;
      if (!v43 && *(_QWORD*)(v42 - 1832) != 0) {
        v44 = *(_QWORD*)(v42 - 1784);
        v45 = v44 != 0 ? *(unsigned __int8*)(v44 + 16) : 9;
        if (v45 == v12) {
          goto LABEL_79;
        }
      }
    }
  }
  else {
    v38 = *(char*)(v11 + 82);
    v39 = *(char*)(v11 + 83);
  }
  v36 = (__int64)GameRoutine_752850_alt2(v38, v39, v12),
  v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v36 == 0) {
    goto LABEL_81;
  }
LABEL_79:
  v46 = *(_DWORD*)(v36 + 592);
  v219 = 0;
LABEL_82:
  v231 = v46;
  v47 = GameHr_788a40(),
  v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v216 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v216;
    __cxa_guard_release((__int64)&GameData_21a6130),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v217 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v217;
    __cxa_guard_release((__int64)&GameData_21a6130),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  game_map_fe9ec0((void*)(&v238_.v238), v10),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((unsigned __int8)v238_.v241 == 1 && (_QWORD)v238_.v240 == v36) {
    v49 = v238_.v239;
    v50 = (char)v238_.v238;
    v51 = SBYTE1(v238_.v238);
    v47 = 1;
    LANES128(v49).n128_u32[3] = 0;
    v52 = v231;
    v223 = v49;
    v225 = v49;
    goto LABEL_109;
  }
  v53 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 24LL);
  v54 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  if (v54 != 0 &&
      (v55 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 96LL),
       v56 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL),
       atomic_fetch_add_explicit((atomic_ullong* volatile)(v54 + 16), 1u,
                                 memory_order_relaxed),
       v57 = std___1___shared_weak_count_lock_alt1(v56),
       std___1___shared_weak_count___release_weak_alt2(v54), v57 != 0)) {
    if (v55 != 0) {
      v58 = 254936;
    }
    else if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
      v58 = 8;
    }
    else {
      v58 = 127472;
    }
    v52 = v231;
    if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57),
          v104 =
              COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
      std___1___shared_weak_count___release_weak_alt2(v57),
          v104 =
              COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    v3 = GameData_212f8b0[0];
  }
  else {
    v3 = GameData_212f8b0[0];
    if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
      v58 = 8;
    }
    else {
      v58 = 127472;
    }
    v52 = v231;
  }
  v59 = v53 + v58;
  if ((*(_QWORD*)(v53 + v58 + 127168) | *(_QWORD*)(v53 + v58 + 127192)) == 0 ||
      v53 == 0) {
    LOBYTE(v61) = *(_BYTE*)(v10 + 82);
  LABEL_108:
    v63 = *(float32x4_t*)(v10 + 48);
    v62 = *(float32x4_t*)(v10 + 64);
    v51 = *(char*)(v10 + 83);
    v50 = (char)v61;
    LANES128(v63).n128_u32[3] = 0;
    LANES128(v62).n128_u32[3] = 0;
    v223 = v63;
    v225 = v62;
    goto LABEL_109;
  }
  v61 = *(unsigned __int8*)(v10 + 82);
  if (*(_DWORD*)v59 != 0) {
    goto LABEL_108;
  }
  v210 = *(unsigned __int8*)(v59 + 127308);
  v51 = *(char*)(v59 + 127309);
  if (v61 == v210 && *(unsigned __int8*)(v10 + 83) == (unsigned __int8)v51) {
    v47 = 1;
    goto LABEL_108;
  }
  v50 = (char)v210;
  v212 = 0x0.0p+0f;
  if (v52 <= 0) {
    v213 = 0x0.0p+0f;
  }
  else {
    v213 = (float)(unsigned int)(v52 - 1) * 0x1.4000000000000p+1f;
  }
  LANES128(v48).n128_f32[0] =
      (float)((float)((float)(unsigned int)((char)v210 + 256) *
                      0x1.4000000000000p+2f) +
              0x1.4000000000000p+1f) +
      -0x1.4000000000000p+10f;
  v214 = (float)((float)((float)(unsigned int)(v51 + 256) *
                         0x1.4000000000000p+2f) +
                 0x1.4000000000000p+1f) +
         -0x1.4000000000000p+10f;
  if (*GameData_212ce80[0] != 0) {
    v235 = v213;
    v230 = v48;
    v212 = Height_7c4d10(*(_QWORD*)(*GameData_212ce80[0] + 61456),
                         LANES128(v48).n128_f32[0], v214),
    v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
    v213 = v235;
    v214 = (float)((float)((float)(unsigned int)(v51 + 256) *
                           0x1.4000000000000p+2f) +
                   0x1.4000000000000p+1f) +
           -0x1.4000000000000p+10f;
    v48 = v230;
  }
  LANES128(v48).n128_f32[1] = v212;
  v47 = 1;
  LANES128(v48).n128_f32[2] = v214;
  v215 = vaddq_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a83440), v213),
                   v48);
  LANES128(v215).n128_u32[3] = 0;
  v223 = v215;
  v225 = v215;
LABEL_109:
  LOBYTE(v238_.v238) = v50;
  BYTE1(v238_.v238) = v51;
  WORD1(v238_.v238) = 0;
  HeightCellMap_1003040(*(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 8LL) + 72LL,
                        (unsigned __int8*)&v238_.v238, v52, v52),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
  v65 = v64;
  v236 = v50;
  v66 = game_map_CursorDrawInfo_GetHeightTop(*(_QWORD*)GameData_212d038[0], v50,
                                             v51, v52, v52, 0),
  v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
  LODWORD(v238_.v238) = 6;
  v67 = game_UnitPool_GetFirst((int*)&v238_.v238),
  v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v67 == 0) {
    v182 = 0;
    goto LABEL_270;
  }
  v68 = *(_QWORD*)(v67 + 432);
  v69 = v67;
  v70 = fmaxf(v65 + 0x1.4000000000000p+1f, v66 + -0x1.8000000000000p+0f);
  if (v68 == 0) {
    v68 = *(_QWORD*)(v67 + 440);
    if (v68 != 0) {
      v71 = *(unsigned __int8*)(v68 + 16);
      if (v71 <= 8) {
        v211 = 24LL * *(unsigned __int8*)(v68 + 16) + 556024;
        while (1) {
          if (v71 <= 1) {
            v68 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v211);
            if (v68 != 0) {
              break;
            }
          }
          ++v71;
          v211 += 24;
          if (v71 == 9) {
            goto LABEL_113;
          }
        }
      }
      else {
      LABEL_113:
        v68 = 0;
      }
    }
  }
  v72 = v223;
  v227 = 0;
  v218 = v219 | v47;
  LANES128(v72).n128_f32[1] = v70;
  v233 = v51 << 24;
  v224 = v72;
  v73 = v225;
  LANES128(v73).n128_f32[1] = v70;
  v226 = v73;
LABEL_116:
  while (2) {
    v74 = v68;
    if (!MapDrawTargetLine_f21470(v36, v69)) {
      goto LABEL_256;
    }
    v282 = *(_QWORD*)(v69 + 2200);
    if (v282 == 0) {
      goto LABEL_256;
    }
    v280_.v280[0] = GameData_1ff2d90;
    v280_.v280[1] = &v282;
    v280_.v281 = v280_.v280;
    if (v52 < 1) {
      goto LABEL_256;
    }
    v75 = 0;
  LABEL_120:
    v76 = v233;
    v77 = v52;
    while (1) {
      LODWORD(v238_.v238) = (char)(v75 + v236);
      LODWORD(v283[0]) = v76 >> 24;
      if (v280_.v281 == nullptr) {
      LABEL_334:
        GameRoutine_60a310(),
            v104 =
                COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v78 = (*(__int64 (**)(_QWORD*, __int128*, _QWORD*))(*v280_.v281 + 48LL))(
          v280_.v281, &v238_.v238, v283),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
      if ((v78 & 1) != 0) {
        break;
      }
      --v77;
      v76 += 0x1000000;
      if (v77 == 0) {
        if (++v75 != v52) {
          goto LABEL_120;
        }
        break;
      }
    }
    if (v280_.v281 == v280_.v280) {
      v80 = v78;
      v79 = 32;
    }
    else {
      if (v280_.v281 == nullptr) {
        if ((v78 & 1) == 0) {
          goto LABEL_256;
        }
        goto LABEL_132;
      }
      v79 = 40;
      v80 = v78;
    }
    (*(void (**)(_QWORD*))(*v280_.v281 + v79))(v280_.v281),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
    if ((v80 & 1) == 0) {
      goto LABEL_256;
    }
  LABEL_132:
    if ((v219 & 1) != 0) {
      goto LABEL_141;
    }
    v283[0] = 0;
    if (v36 == 0) {
      goto LABEL_141;
    }
    *(_QWORD*)&v238_.v238 = GameData_1f98e48;
    *((_QWORD*)&v238_.v238 + 1) = v283;
    *(_QWORD*)&v238_.v240 = &v238_.v238;
    game_map_BattleUtil_EachFactorSkill_7a8c20(v69, v36, 1, 0,
                                               (__int64)&v238_.v238),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
    if ((__int128*)v238_.v240 == &v238_.v238) {
      v81 = 32;
    }
    else {
      if ((_QWORD)v238_.v240 == 0) {
        goto LABEL_139;
      }
      v81 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v238_.v240 + v81))((__int64)v238_.v240),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
  LABEL_139:
    if (v283[0] == 0) {
    LABEL_141:
      v82 = false;
      goto LABEL_142;
    }
    v82 = ((*(unsigned __int8*)(v283[0] + 250LL) - 1) & 0xFE) == 0;
  LABEL_142:
    v83 = 0;
    v278_.v278[0] = GameData_1ff2e10;
    v278_.v278[1] = &v282;
    v278_.v279 = v278_.v278;
    do {
      v84 = v233;
      v85 = v231;
      do {
        LODWORD(v238_.v238) = (char)(v83 + v236);
        LODWORD(v283[0]) = v84 >> 24;
        if (v278_.v279 == nullptr) {
          goto LABEL_334;
        }
        v86 = (*(__int64 (**)(_QWORD*, __int128*, _QWORD*))(
            *v278_.v279 + 48LL))(v278_.v279, &v238_.v238, v283),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
        if ((v86 & 1) != 0) {
          goto LABEL_148;
        }
        --v85;
        v84 += 0x1000000;
      } while (v85 != 0);
      ++v83;
    } while (v83 != v231);
  LABEL_148:
    if (v278_.v279 == v278_.v278) {
      v88 = v86;
      v87 = 32;
      goto LABEL_152;
    }
    if (v278_.v279 != nullptr) {
      v87 = 40;
      v88 = v86;
    LABEL_152:
      (*(void (**)(_QWORD*))(*v278_.v279 + v87))(v278_.v279),
          v104 =
              COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
      v86 = v88;
    }
    v89 = v82 | v86;
    if ((v86 & 1) != 0) {
      v90 = 3;
    }
    else {
      v90 = 2;
    }
    if ((v89 & 1) == 0) {
      v92 = *(char**)(a1 + 168);
      v91 = *(char**)(a1 + 176);
      if (v92 != v91) {
        v93 = v91 - v92 - 8;
        if ((~(_BYTE)v93 & 0x18) != 0) {
          v94 = ((unsigned __int8)((unsigned int)v93 >> 3) + 1) & 3;
          while (*(_QWORD*)v92 != v69) {
            v92 += 8;
            if (--v94 == 0) {
              goto LABEL_162;
            }
          }
        }
        else {
        LABEL_162:
          if (v93 >= 0x18) {
            v92 += 16;
            while (1) {
              if (*((_QWORD*)v92 - 2) == v69) {
                v92 -= 16;
                goto LABEL_164;
              }
              if (*((_QWORD*)v92 - 1) == v69) {
                v92 -= 8;
                goto LABEL_164;
              }
              if (*(_QWORD*)v92 == v69) {
                goto LABEL_164;
              }
              if (*((_QWORD*)v92 + 1) == v69) {
                break;
              }
              v168 = v92 + 16;
              v92 += 32;
              if (v168 == v91) {
                goto LABEL_163;
              }
            }
            v92 += 8;
          }
          else {
          LABEL_163:
            v92 = *(char**)(a1 + 176);
          }
        }
      }
    LABEL_164:
      v90 = v92 != v91;
    }
    v95 = v224;
    v96 = v226;
    if ((v218 & 1) == 0) {
      v97 = *(_DWORD*)(v36 + 592);
      v98 = (float)(unsigned int)(v97 - 1) * 0x1.4000000000000p+1f;
      if (v97 <= 0) {
        v98 = 0x0.0p+0f;
      }
      *(float*)&v99 =
          (float)((float)((float)((float)(unsigned int)(*(char*)(v36 + 584) +
                                                        256) *
                                  0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f) +
          v98;
      *(float*)&v221 =
          (float)((float)((float)((float)(unsigned int)(*(char*)(v36 + 585) +
                                                        256) *
                                  0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f) +
          v98;
      *(_QWORD*)&v100 = v99;
      v228 = COERCE_AS(float32x4_t, v99);
      *((_QWORD*)&v100 + 1) = v221;
      v238_.v238 = v100;
      Unit_6c7fa0(v36, &v238_.v238),
          v104 =
              COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
      v102 = *(char*)(v36 + 585);
      v103 = *(_DWORD*)(v36 + 592);
      LOBYTE(v238_.v238) = *(_BYTE*)(v36 + 584);
      v101 = (char)v238_.v238;
      BYTE1(v238_.v238) = v102;
      WORD1(v238_.v238) = 0;
      HeightCellMap_1003040(*(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 8LL) +
                                72LL,
                            (unsigned __int8*)&v238_.v238, v103, v103),
          v104 =
              COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
      v105 = v104;
      v106 = game_map_CursorDrawInfo_GetHeightTop(*(_QWORD*)GameData_212d038[0],
                                                  v101, v102, v103, v103, 0),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
      v107 = v228;
      LANES128(v107).n128_f32[1] =
          fmaxf(v105 + 0x1.4000000000000p+1f, v106 + -0x1.8000000000000p+0f);
      v95 = v107;
      LANES128(v95).n128_u32[2] = v221;
      v96 = v95;
    }
    v222 = v96;
    v229 = v95;
    game_map_f54910((__int64)&v238_.v238),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
    LOBYTE(v238_.v270) = 0;
    v238_.v272 = 0;
    LOBYTE(v238_.v273) = 0;
    v238_.v274 = 0;
    LOBYTE(v238_.v275) = 0;
    v238_.v277 = 0;
    BYTE4(v238_.v259) = 0;
    *(_QWORD*)&v238_.v238 = game_map_TargetMeshData_vtable;
    v238_.v266 = a1;
    v238_.v261 = v36;
    v238_.v262 = v69;
    v238_.v264 = LANES128(v222).n128_u64[0];
    v238_.v263 = LANES128(v229).n128_u64[0];
    *(_QWORD*)&v109 = LANES128(v229).n128_u64[0];
    *(_QWORD*)&v108 = LANES128(v222).n128_u64[0];
    *((_QWORD*)&v108 + 1) = LANES128(v222).n128_u32[2];
    v238_.v267 = (__typeof__(v238_.v267)){0};
    v238_.v268 = 0;
    v238_.v269 = 1065353216;
    v238_.v260 = 1;
    *((_QWORD*)&v109 + 1) = LANES128(v229).n128_u32[2];
    LODWORD(v238_.v265) = v90;
    v110 = (__int64**)(v220 + 24LL * v90);
    v112 = (float32x4_t**)(v110 + 1);
    v111 = (__int64)v110[1];
    v113 = v110 + 1;
    v114 = v69 - 0x61C8864680B583EBLL;
    v115 = (__int64)(v110 + 1);
    v238_.v263 = v109;
    v238_.v264 = v108;
    if (v111 != 0) {
      for (i = (_QWORD*)v111; i != nullptr; i = (_QWORD*)*i) {
        v117 = i[4];
        if (v114 >= v117) {
          if (v117 >= v114) {
            v52 = v231;
            while (1) {
              while (1) {
                v118 = *(_QWORD*)(v111 + 32);
                if (v114 >= v118) {
                  break;
                }
                v111 = *(_QWORD*)v111;
                if (v111 == 0) {
                  goto LABEL_335;
                }
              }
              if (v118 >= v114) {
                break;
              }
              v111 = *(_QWORD*)(v111 + 8);
              if (v111 == 0) {
              LABEL_335:
                String_60a250("map::at:  key not found"),
                    v104 = COERCE_AS(__typeof__(v104),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v64 = COERCE_AS(__typeof__(v64),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
              }
            }
            v150 = 0;
            goto LABEL_215;
          }
          ++i;
        }
      }
      while (1) {
        while (1) {
          v119 = *(_QWORD*)(v111 + 32);
          v115 = v111;
          if (v114 >= v119) {
            break;
          }
          v111 = *(_QWORD*)v111;
          v113 = (__int64**)v115;
          if (*(_QWORD*)v115 == 0) {
            goto LABEL_186;
          }
        }
        if (v119 >= v114) {
          break;
        }
        v111 = *(_QWORD*)(v111 + 8);
        if (v111 == 0) {
          v113 = (__int64**)(v115 + 8);
          goto LABEL_186;
        }
      }
    }
    else {
    LABEL_186:
      v120 = v115;
      v115 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 480, 16, 0),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
      *(_QWORD*)(v115 + 32) = v114;
      game_map_f54910(v115 + 48),
          v104 =
              COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
      *(_QWORD*)(v115 + 296) = 0;
      *(_QWORD*)(v115 + 304) = 0;
      *(_QWORD*)(v115 + 320) = 0;
      *(_QWORD*)(v115 + 328) = 0;
      v121 = (__int64*)v115;
      *(_QWORD*)(v115 + 336) = 0;
      *(_QWORD*)(v115 + 344) = 0;
      *(_DWORD*)(v115 + 352) = 0;
      *(_QWORD*)(v115 + 360) = 0;
      *(_QWORD*)(v115 + 368) = 0;
      *(_QWORD*)(v115 + 376) = 0;
      *(_QWORD*)(v115 + 384) = 0;
      *(_BYTE*)(v115 + 400) = 0;
      *(_BYTE*)(v115 + 416) = 0;
      *(_BYTE*)(v115 + 432) = 0;
      *(_QWORD*)(v115 + 48) = game_map_TargetMeshData_vtable;
      *(_BYTE*)(v115 + 436) = 0;
      *(_BYTE*)(v115 + 448) = 0;
      *(_BYTE*)(v115 + 464) = 0;
      *(_BYTE*)(v115 + 284) = 0;
      *(_QWORD*)v115 = 0;
      *(_QWORD*)(v115 + 8) = 0;
      *(_QWORD*)(v115 + 16) = v120;
      *(_DWORD*)(v115 + 392) = 1065353216;
      *(_DWORD*)(v115 + 288) = 1;
      *v113 = (__int64*)v115;
      v122 = (__int64*)**v110;
      if (v122 != nullptr) {
        *v110 = v122;
        v121 = *v113;
      }
      fw_containers_BalanceAfterInsert(v110[1], v121),
          v104 =
              COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
      v110[2] = (__int64*)((char*)v110[2] + 1);
    }
    *(_QWORD*)(v115 + 56) = *((_QWORD*)&v238_.v238 + 1);
    v123 = v238_.v240;
    *(float32x4_t*)(v115 + 64) = v238_.v239;
    *(_OWORD*)(v115 + 80) = v123;
    v124 = v238_.v241;
    v125 = v238_.v242;
    v126 = v238_.v244;
    *(_QWORD*)(v115 + 128) = v238_.v243;
    *(_QWORD*)(v115 + 136) = v126;
    *(_OWORD*)(v115 + 96) = v124;
    *(_OWORD*)(v115 + 112) = v125;
    if ((__int128*)(v115 + 48) != &v238_.v238) {
      GameRoutine_f155c0((__int64*)(v115 + 144), v238_.v245, v238_.v246,
                         (v238_.v246 - v238_.v245) >> 6),
          v104 =
              COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
      CharacterController_d42d20(v115 + 168, v238_.v247, v238_.v248,
                                 (v238_.v248 - v238_.v247) >> 4),
          v104 =
              COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    v127 = v238_.v250;
    v128 = v238_.v253;
    v129 = v238_.v251;
    v130 = v238_.v252;
    *(_QWORD*)(v115 + 192) = v238_.v249;
    *(_QWORD*)(v115 + 224) = v128;
    *(_QWORD*)(v115 + 208) = v129;
    *(_QWORD*)(v115 + 216) = v130;
    v131 = *(_OWORD*)(v115 + 192);
    *((_QWORD*)&v131 + 1) = v127;
    v132 = *(_OWORD*)(v115 + 224);
    *((_QWORD*)&v132 + 1) = DWORD2(v128);
    *(_OWORD*)(v115 + 192) = v131;
    v133 = v238_.v254;
    v134 = v238_.v255;
    *(_OWORD*)(v115 + 224) = v132;
    *(_QWORD*)(v115 + 240) = v133;
    *(_QWORD*)(v115 + 248) = v134;
    v135 = v238_.v257;
    v136 = v238_.v260;
    *(_QWORD*)(v115 + 256) = v238_.v256;
    *(_QWORD*)(v115 + 264) = v135;
    *(_DWORD*)(v115 + 288) = v136;
    v137 = v238_.v259;
    *(_QWORD*)(v115 + 272) = v238_.v258;
    *(_QWORD*)(v115 + 280) = v137;
    v138 = v238_.v262;
    *(_QWORD*)(v115 + 296) = v238_.v261;
    *(_QWORD*)(v115 + 304) = v138;
    v139 = v238_.v263;
    v140 = v238_.v264;
    v141 = v238_.v266;
    *(_QWORD*)(v115 + 352) = v238_.v265;
    *(_QWORD*)(v115 + 360) = v141;
    *(_QWORD*)(v115 + 320) = v139;
    *(_QWORD*)(v115 + 336) = v140;
    v142 = *(_OWORD*)(v115 + 320);
    v143 = *(_OWORD*)(v115 + 336);
    *((_QWORD*)&v142 + 1) = DWORD2(v139);
    *((_QWORD*)&v143 + 1) = DWORD2(v140);
    *(_OWORD*)(v115 + 320) = v142;
    *(_OWORD*)(v115 + 336) = v143;
    v144 = v238_.v267;
    v145 = v238_.v268;
    *(_DWORD*)(v115 + 392) = v238_.v269;
    *(_QWORD*)(v115 + 384) = v145;
    v146 = *(unsigned __int8*)(v115 + 416);
    *(_QWORD*)(v115 + 368) = v144;
    v147 = *(_OWORD*)(v115 + 368);
    *((_QWORD*)&v147 + 1) = DWORD2(v144);
    *(_OWORD*)(v115 + 368) = v147;
    if (v146 == v238_.v272) {
      if (v146 != 0) {
        v148 = v238_.v271;
        *(_QWORD*)(v115 + 400) = v238_.v270;
        v149 = *(_OWORD*)(v115 + 400);
        *((_QWORD*)&v149 + 1) = v148;
        *(_OWORD*)(v115 + 400) = v149;
      }
    }
    else if (v146 != 0) {
      *(_BYTE*)(v115 + 416) = 0;
    }
    else {
      v151 = v238_.v271;
      *(_QWORD*)(v115 + 400) = v238_.v270;
      *(_QWORD*)(v115 + 408) = v151;
      *(_BYTE*)(v115 + 416) = 1;
    }
    *(_DWORD*)(v115 + 432) = v238_.v273;
    v152 = v238_.v277;
    *(_BYTE*)(v115 + 436) = v238_.v274;
    if (*(unsigned __int8*)(v115 + 464) == v152) {
      if (*(_BYTE*)(v115 + 464) != 0) {
        v153 = v238_.v276;
        *(_QWORD*)(v115 + 448) = v238_.v275;
        v154 = *(_OWORD*)(v115 + 448);
        *((_QWORD*)&v154 + 1) = v153;
        *(_OWORD*)(v115 + 448) = v154;
      }
    }
    else if (*(_BYTE*)(v115 + 464) != 0) {
      *(_BYTE*)(v115 + 464) = 0;
    }
    else {
      v155 = v238_.v276;
      *(_QWORD*)(v115 + 448) = v238_.v275;
      *(_QWORD*)(v115 + 456) = v155;
      *(_BYTE*)(v115 + 464) = 1;
    }
    v156 = *v112;
    v157 = v110 + 1;
    v111 = (__int64)(v110 + 1);
    if (*v112 != nullptr) {
      while (1) {
        while (1) {
          v111 = (__int64)v156;
          v158 = LANES128(v156[2]).n128_u64[0];
          if (v114 >= v158) {
            break;
          }
          v156 = *(float32x4_t**)v111;
          v157 = (__int64**)v111;
          if (*(_QWORD*)v111 == 0) {
            goto LABEL_211;
          }
        }
        if (v158 >= v114) {
          break;
        }
        v156 = *(float32x4_t**)(v111 + 8);
        if (v156 == nullptr) {
          v157 = (__int64**)(v111 + 8);
          goto LABEL_211;
        }
      }
    }
    else {
    LABEL_211:
      v159 = v111;
      v111 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 480, 16, 0),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
      *(_QWORD*)(v111 + 32) = v114;
      game_map_f54910(v111 + 48),
          v104 =
              COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
      *(_QWORD*)(v111 + 296) = 0;
      *(_QWORD*)(v111 + 304) = 0;
      *(_QWORD*)(v111 + 320) = 0;
      *(_QWORD*)(v111 + 328) = 0;
      v160 = (__int64*)v111;
      *(_QWORD*)(v111 + 336) = 0;
      *(_QWORD*)(v111 + 344) = 0;
      *(_DWORD*)(v111 + 352) = 0;
      *(_QWORD*)(v111 + 360) = 0;
      *(_QWORD*)(v111 + 368) = 0;
      *(_QWORD*)(v111 + 376) = 0;
      *(_QWORD*)(v111 + 384) = 0;
      *(_BYTE*)(v111 + 400) = 0;
      *(_BYTE*)(v111 + 416) = 0;
      *(_BYTE*)(v111 + 432) = 0;
      *(_QWORD*)(v111 + 48) = game_map_TargetMeshData_vtable;
      *(_BYTE*)(v111 + 436) = 0;
      *(_BYTE*)(v111 + 448) = 0;
      *(_BYTE*)(v111 + 464) = 0;
      *(_BYTE*)(v111 + 284) = 0;
      *(_QWORD*)v111 = 0;
      *(_QWORD*)(v111 + 8) = 0;
      *(_QWORD*)(v111 + 16) = v159;
      *(_DWORD*)(v111 + 392) = 1065353216;
      *(_DWORD*)(v111 + 288) = 1;
      *v157 = (__int64*)v111;
      v161 = (__int64*)**v110;
      if (v161 != nullptr) {
        *v110 = v161;
        v160 = *v157;
      }
      fw_containers_BalanceAfterInsert(v110[1], v160),
          v104 =
              COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
      v110[2] = (__int64*)((char*)v110[2] + 1);
    }
    v52 = v231;
    v150 = 1;
  LABEL_215:
    v162 = *(_QWORD*)(v111 + 48);
    *(_BYTE*)(v111 + 272) = 1;
    if (((*(__int64 (**)(__int64))(v162 + 48))((__int64)(v111 + 48)) & 1) !=
        0) {
      *(_DWORD*)(v111 + 280) = 1036831949;
      if ((v150 & 1) != 0) {
        goto LABEL_242;
      }
    }
    else {
      *(_DWORD*)(v111 + 276) = 1065353216;
      *(_DWORD*)(v111 + 280) = 0;
      if ((v150 & 1) != 0) {
        goto LABEL_242;
      }
    }
    v163 = *v112;
    if (*v112 == nullptr) {
      goto LABEL_242;
    }
    v164 = v238_.v262 - 0x61C8864680B583EBLL;
    v165 = *v112;
    while (1) {
      v166 = LANES128(v165[2]).n128_u64[0];
      if (v164 >= v166) {
        break;
      }
    LABEL_221:
      v165 = (float32x4_t*)LANES128(*(v165)).n128_u64[0];
      if (v165 == nullptr) {
        goto LABEL_242;
      }
    }
    if (v166 < v164) {
      v165 = (float32x4_t*)((char*)v165 + 8);
      goto LABEL_221;
    }
    while (1) {
      while (1) {
        v167 = LANES128(v163[2]).n128_u64[0];
        if (v164 >= v167) {
          break;
        }
        v163 = (float32x4_t*)LANES128(*(v163)).n128_u64[0];
        if (v163 == nullptr) {
          goto LABEL_335;
        }
      }
      if (v167 >= v164) {
        break;
      }
      v163 = (float32x4_t*)LANES128(*(v163)).n128_u64[1];
      if (v163 == nullptr) {
        goto LABEL_335;
      }
    }
    LANES128(v163[20]).n128_u64[0] = LANES128(v229).n128_u64[0];
    v169 = v163[20];
    LANES128(v169).n128_u64[1] = LANES128(v229).n128_u32[2];
    v163[20] = v169;
    v170 = LANES128(v163[24]).n128_f32[1];
    if (v170 < 0x1.0000000000000p+0f) {
      v171 = vsubq_f32(v163[21], v222);
      LANES128(v171).n128_u32[1] = 0;
      v172 = vmulq_f32(v171, v171);
      LANES128(v172).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v172, v172, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v172).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v172).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v172).n128_u64[0])))
              .n64_f32[0] > 0x0.0p+0f) {
        if (v170 < 0x1.0000000000000p+0f) {
          v170 = 0x1.0000000000000p+0f;
        }
        LANES128(v163[24]).n128_f32[1] = v170;
      }
    }
  LABEL_242:
    *(_QWORD*)&v238_.v238 = v3 + 2;
    if (v238_.v247 != nullptr) {
      v238_.v248 = v238_.v247;
      v173 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v173 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v173, (__int64)v238_.v247),
          v104 =
              COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    v174 = v238_.v245;
    if (v238_.v245 != nullptr) {
      if (v238_.v245 == v238_.v246) {
        goto LABEL_252;
      }
      v175 = v238_.v246 - 64;
      v176 = v238_.v246 - 64;
      do {
        v177 = *(void (***)(char*))v176,
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
        v176 -= 64;
        (*v177)(v175);
        v37 = v175 == v174;
        v175 = v176;
      } while (!v37);
      v238_.v246 = v174;
      v174 = v238_.v245;
      if (v238_.v245 != nullptr) {
      LABEL_252:
        v178 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v178 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v178, (__int64)v174),
            v104 =
                COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
      }
    }
    ++v227;
  LABEL_256:
    if (v74 != 0) {
      v68 = *(_QWORD*)(v74 + 432);
      v69 = v74;
      if (v68 == 0) {
        v179 = *(_QWORD*)(v74 + 440);
        v69 = v74;
        if (v179 != 0) {
          v180 = *(unsigned __int8*)(v179 + 16);
          v68 = 0;
          v69 = v74;
          if (v180 <= 8) {
            v181 = 24LL * (unsigned int)v180 + 556024;
            while (1) {
              if (v180 <= 1) {
                v68 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v181);
                if (v68 != 0) {
                  break;
                }
              }
              ++v180;
              v181 += 24;
              if (v180 == 9) {
                v68 = 0;
                v69 = v74;
                goto LABEL_116;
              }
            }
            v69 = v74;
          }
        }
      }
      continue;
    }
    break;
  }
  v2 = fw_memory_g_heap_manager_ptr;
  v3 = GameData_212f8b0[0];
  v182 = v227;
LABEL_270:
  *(_DWORD*)(a1 + 192) = v182;
LABEL_271:
  *(_BYTE*)(a1 + 8) = 0;
LABEL_272:
  v232 = a1;
  v183 = a1 + 16;
  v184 = 16;
  v185 = game_script_hub_g_frame_counter_ptr[0];
  v237 = v3 + 2;
  do {
    v186 = *(float32x4_t**)v183;
    v234 = v184;
    if (*(_QWORD*)v183 != v183 + 8) {
      do {
        v189 =
            (float)(*(float*)(*(_QWORD*)v185 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
        v190 = LANES128(v186[17]).n128_f32[2];
        if (v190 <= 0x0.0p+0f) {
          if (LANES128(v186[17]).n128_u8[0] != 0) {
            v193 = 0x1.0000000000000p+0f;
          }
          else {
            v193 = 0x0.0p+0f;
          }
        }
        else {
          v191 = v189 / v190;
          v192 = LANES128(v186[17]).n128_f32[1];
          if (LANES128(v186[17]).n128_u8[0] != 0) {
            v193 = fminf(fmaxf(v191 + v192, 0x1.51eb860000000p-2f),
                         0x1.0000000000000p+0f);
          }
          else {
            v193 = fminf(fmaxf(v192 - v191, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
          }
        }
        LANES128(v186[17]).n128_f32[1] = v193;
        v194 = LANES128(v186[3]).n128_u64[0];
        LANES128(v186[15]).n128_f32[0] = v189 + LANES128(v186[15]).n128_f32[0];
        (*(void (**)(float32x4_t*))(v194 + 40))(v186 + 3),
            v104 =
                COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
        GameRoutine_f54fe0(v186 + 3),
            v104 =
                COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
        v195 = (float32x4_t*)LANES128(*(v186)).n128_u64[1];
        if ((LANES128(v186[17]).n128_u8[0] & 1) != 0 ||
            LANES128(v186[17]).n128_f32[1] > 0x0.0p+0f) {
          if (v195 != nullptr) {
            do {
              v197 = v195;
              v195 = (float32x4_t*)LANES128(*(v195)).n128_u64[0];
            } while (v195 != nullptr);
          }
          else {
            do {
              v197 = (float32x4_t*)LANES128(v186[1]).n128_u64[0];
              v37 = v186 == (float32x4_t*)LANES128(*(v197)).n128_u64[0];
              v186 = v197;
            } while (!v37);
          }
        }
        else {
          v196 = v186;
          if (v195 != nullptr) {
            do {
              v197 = v195;
              v195 = (float32x4_t*)LANES128(*(v195)).n128_u64[0];
            } while (v195 != nullptr);
          }
          else {
            do {
              v197 = (float32x4_t*)LANES128(v196[1]).n128_u64[0];
              v37 = v196 == (float32x4_t*)LANES128(*(v197)).n128_u64[0];
              v196 = v197;
            } while (!v37);
          }
          if (*(float32x4_t**)v183 == v186) {
            *(_QWORD*)v183 = v197;
          }
          v198 = *(__int64**)(v183 + 8);
          --*(_QWORD*)(v183 + 16);
          GameRoutine_64dfe0(v198, (__int64*)v186),
              v104 = COERCE_AS(__typeof__(v104),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v199 = LANES128(v186[10]).n128_i64[1];
          LANES128(v186[3]).n128_u64[0] = (unsigned __int64)v237;
          if (v199 != 0) {
            v200 = *(_QWORD*)v2;
            LANES128(v186[11]).n128_u64[0] = v199;
            v201 = 128;
            if (*(_QWORD*)(v200 + 200) == 0) {
              v201 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(v200 + v201, v199),
                v104 = COERCE_AS(__typeof__(v104),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
          v202 = LANES128(v186[9]).n128_i64[0];
          if (v202 != 0) {
            v203 = LANES128(v186[9]).n128_u64[1];
            if (v202 == v203) {
              goto LABEL_276;
            }
            v204 = v185;
            v205 = v2;
            v206 = (void (***)(_QWORD))(v203 - 64),
            v104 =
                COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
            v207 = (void (***)(_QWORD))(v203 - 64),
            v104 =
                COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(float, "s0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w"));
            do {
              v208 = *v207;
              v207 -= 8;
              (*v208)(v206);
              v37 = v206 == (void (***)(_QWORD))v202,
              v104 = COERCE_AS(__typeof__(v104),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              v206 = v207;
            } while (!v37);
            v209 = LANES128(v186[9]).n128_i64[0];
            v2 = v205;
            v185 = v204;
            LANES128(v186[9]).n128_u64[1] = v202;
            v202 = v209;
            if (v209 != 0) {
            LABEL_276:
              v187 = 128;
              if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
                v187 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v2 + v187, v202),
                  v104 = COERCE_AS(__typeof__(v104),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v64 = COERCE_AS(__typeof__(v64),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
          }
          v188 = 128;
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
            v188 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v2 + v188,
                                             (__int64)v186),
              v104 = COERCE_AS(__typeof__(v104),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v186 = v197;
      } while (v197 != (float32x4_t*)(v183 + 8));
    }
    v184 = v234 + 24;
    v183 = v232 + v234 + 24;
  } while (v234 != 88);
}

void MapDrawTargetLine_Unknown4(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  int v9;
  const char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _BYTE* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  unsigned int v24;
  __int64 v25;
  unsigned int v26;
  int v27;
  long double v28;
  __int64 v29;
  __int128 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  _QWORD* v41;
  _QWORD* v42;
  __int64 v43;
  _QWORD* v44;
  _QWORD* v45;
  const char* v46;
  __int64 v47;
  __int64 v48;
  struct {
    __int64 v49;
    int v50;
  } v49_;
  _BYTE v51[24];
  struct {
    __int64 v52;
    unsigned __int64 v53;
    __int64 v54;
    char gap72_[8];
    long double v55;
    __int128 v56;
    __int64 v57;
    int v58;
    char gap124_[4];
    __int64 v59;
    __int64 v60;
    __int64 v61;
    char v62;
  } v52_;

  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v2 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 24LL);
  v3 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  if (v3 != 0 &&
      (v4 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 96LL),
       v5 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL),
       atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                 memory_order_relaxed),
       v6 = std___1___shared_weak_count_lock_alt1(v5),
       std___1___shared_weak_count___release_weak_alt2(v3), v6 != 0)) {
    if (v4 != 0) {
      v7 = 254936;
    }
    else if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
      v7 = 8;
    }
    else {
      v7 = 127472;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
      std___1___shared_weak_count___release_weak_alt2(v6),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
  }
  else if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
    v7 = 8;
  }
  else {
    v7 = 127472;
  }
  v8 = (*(_QWORD*)(v2 + v7 + 127168) | *(_QWORD*)(v2 + v7 + 127192)) == 0 ||
       v2 == 0;
  if (!v8 && *(_DWORD*)(v2 + v7) == 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1) & 1) != 0) {
    if (*(_BYTE*)(a1 + 116) == 1) {
      v9 = *(_DWORD*)(a1 + 192);
      if (v9 > (signed __int32)*(_DWORD*)(a1 + 112)) {
        if (v9 == 2) {
          v10 = "VIB_Danger_Signal2";
        }
        else if (v9 == 1) {
          v10 = "VIB_Danger_Signal1";
        }
        else {
          if (v9 < 3) {
            goto LABEL_84;
          }
          v10 = "VIB_Danger_Signal3";
        }
        game_80c7f0((void*)((__int64)&v52_.v52), (__int64)v10),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
    }
  LABEL_84:
    v11 = *(unsigned int*)(a1 + 192);
    *(_WORD*)v51 = 0;
    *(_BYTE*)(a1 + 116) = 1;
    *(_DWORD*)(a1 + 112) = v11;
    if ((_DWORD)v11 != 0) {
      if ((_DWORD)v11 == 2) {
        v51[0] = 32;
        v46 = "VIB_Danger_Zone2";
      }
      else {
        v51[0] = 32;
        if ((_DWORD)v11 == 1) {
          v46 = "VIB_Danger_Zone1";
        }
        else {
          v46 = "VIB_Danger_Zone3";
        }
      }
      v48 = *(_QWORD*)v46;
      v47 = *((_QWORD*)v46 + 1);
      v11 = 16;
      v51[17] = 0;
      *(_QWORD*)&v51[1] = v48;
      *(_QWORD*)&v51[9] = v47;
    }
    goto LABEL_27;
  }
  if (*(_BYTE*)(a1 + 116) == 1) {
    *(_BYTE*)(a1 + 116) = 0;
  }
  v11 = 0;
  *(_WORD*)v51 = 0;
LABEL_27:
  v13 = (_BYTE*)(a1 + 120);
  v12 = *(unsigned __int8*)(a1 + 120);
  v14 = *(_QWORD*)(a1 + 128);
  if ((v12 & 1) == 0) {
    v14 = v12 >> 1;
  }
  if (v14 != v11 ||
      ((v12 & 1) != 0 ? (v15 = *(_QWORD*)(a1 + 136)) : (v15 = a1 + 121),
       memcmp(v15, (__int64)&v51[1], v11) != 0)) {
    if (v13 != v51) {
      if ((v12 & 1) != 0) {
        SpineModel_64dde0((__int64*)(a1 + 120), (__int64)&v51[1], v11),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
      else {
        v16 = *(_QWORD*)&v51[8];
        *(_QWORD*)v13 = *(_QWORD*)v51;
        *(_QWORD*)(a1 + 128) = v16;
        *(_QWORD*)(a1 + 136) = *(_QWORD*)&v51[16];
      }
    }
    if ((snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 144)) & 1) != 0) {
      v17 = snd_fnd_WeakHandle_get_alt1(a1 + 144),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
      (*(void (**)(__int64))(*(_QWORD*)(v17 - 5592) + 264LL))(v17 - 5592),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    v18 = *(unsigned __int8*)(a1 + 120);
    v19 = *(_QWORD*)(a1 + 128);
    if ((v18 & 1) == 0) {
      v19 = v18 >> 1;
    }
    if (v19 != 0) {
      if ((v18 & 1) != 0) {
        v20 = *(_QWORD*)(a1 + 136);
      }
      else {
        v20 = a1 + 121;
      }
      if (v20 != 0) {
        snd_Fade_Fade_10c830((__int64)&v52_.v52, 0x0.0p+0f),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
        snd_play_ff2d0((void*)(handle), v20, v20, (__int64)&v52_.v52, 0,
                       0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
        snd_Fade_Destroy_Fade(&v52_.v52),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
      else {
        v49_.v49 = 0;
        v49_.v50 = 0x2000;
      }
      GameRoutine_112180(a1 + 144, (__int64)&v49_.v49),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
  }
  if ((v51[0] & 1) != 0 && *(_QWORD*)&v51[16] != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, *(__int64*)&v51[16]),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  v22 = 0;
  v23 = (__int64*)GameData_212d018[0];
  do {
    v24 = v22 - 1;
    if ((unsigned int)(v22 - 1) > 2) {
      LOBYTE(v26) = 0;
      v27 = 7;
      v25 = 0x6772615470614D12LL;
    }
    else {
      v25 = GameData_1b98ed8[v24];
      v26 = 0x5F0000u >> (8 * v24);
      v27 = v22 + 7;
    }
    BYTE2(v52_.v53) = v26;
    v52_.v52 = v25;
    v52_.v57 = 0x700000000LL;
    v52_.v58 = 0;
    BYTE4(v52_.v61) = 0;
    v52_.v62 = 0;
    v52_.v59 = 0;
    v52_.v60 = 0;
    LOWORD(v52_.v61) = 0;
    LOWORD(v52_.v53) = 29797;
    HIBYTE(v52_.v53) = 0;
    LODWORD(v49_.v49) = v27;
    *(_DWORD*)((char*)&v52_.v53 + 3) = 1937011265;
    *(_QWORD*)v51 = &v49_.v49;
    *(_QWORD*)&v51[8] = 1;
    v28 = MapDrawConst_fcc280(a1, (unsigned int**)v51),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v29 = *v23;
    v52_.v55 = v28;
    v52_.v56 = v30;
    v52_.v58 = 1;
    v52_.v57 = 0x1200000001LL;
    v31 = *(_QWORD*)(v29 + 24);
    if (v31 >= *(_QWORD*)(v29 + 32)) {
      v33 = PrimitiveDrawStack_f525a0((__int64*)(v29 + 16), (__int64)&v52_.v52),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    else {
      if ((v52_.v52 & 1) != 0) {
        fw_text_String_CopyTerminated(*(__int64**)(v29 + 24), v52_.v54,
                                      v52_.v53),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
      else {
        *(_QWORD*)(v31 + 8) = v52_.v53;
        v32 = v52_.v52;
        *(_QWORD*)(v31 + 16) = v52_.v54;
        *(_QWORD*)v31 = v32;
      }
      v34 = v52_.v58;
      v33 = v31 + 112;
      *(_QWORD*)(v31 + 56) = *((_QWORD*)&v52_.v56 + 1);
      *(long double*)(v31 + 32) = v52_.v55;
      v35 = v52_.v56;
      v36 = v52_.v57;
      *(_DWORD*)(v31 + 72) = v34;
      *(_QWORD*)(v31 + 64) = v36;
      *(_QWORD*)(v31 + 48) = v35;
      v37 = v52_.v60;
      *(_QWORD*)(v31 + 80) = v52_.v59;
      *(_QWORD*)(v31 + 88) = v37;
      v38 = v52_.v61;
      *(_BYTE*)(v31 + 104) = v52_.v62;
      *(_QWORD*)(v31 + 96) = v38;
    }
    *(_QWORD*)(v29 + 24) = v33;
    v39 = (_QWORD*)(a1 + 16 + 24 * v22);
    *(_QWORD*)(v29 + 8) =
        0x6DB6DB6DB6DB6DB7LL * ((v33 - *(_QWORD*)(v29 + 16)) >> 4) - 1;
    v42 = (_QWORD*)*v39;
    v41 = v39 + 1;
    v40 = v42;
    if (v42 != v41) {
      do {
        PrimitiveDrawStack_f51430(*v23, (__int64)(v40 + 6)),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v44 = (_QWORD*)v40[1];
        if (v44 != nullptr) {
          do {
            v45 = v44;
            v44 = (_QWORD*)*v44;
          } while (v44 != nullptr);
        }
        else {
          do {
            v45 = (_QWORD*)v40[2];
            v8 = v40 == (_QWORD*)*v45;
            v40 = v45;
          } while (!v8);
        }
        v40 = v45;
      } while (v45 != v41);
    }
    *(_QWORD*)(*v23 + 8) = 1024;
    if ((v52_.v52 & 1) != 0 && v52_.v54 != 0) {
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v52_.v54),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    ++v22;
  } while (v22 != 4);
}

bool MapDrawTargetLine_Unknown6(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;

  v2 = GameData_212d020[0];
  v3 = *(_QWORD*)GameData_212d020[0];
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  if ((GameRoutine_f0a0d0(v3, v4) & 1) == 0) {
    return false;
  }
  v5 = *(_QWORD*)v2;
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  if (GameData_21ed070 != 0) {
    if (v6 != 0) {
      return false;
    }
  }
  else if (*(_BYTE*)(v5 + 196) == 1) {
    if (*(_DWORD*)(v5 + 192) != v6) {
      return false;
    }
  }
  else if (GameData_21d92e0 != v6) {
    return false;
  }
  return *(_DWORD*)(*(_QWORD*)v2 + 4368LL) != 7 ||
         (GameRoutine_788a40() & 1) != 0 &&
             *(_BYTE*)(*(_QWORD*)(GameData_21cd130 + 48) + 240LL) == 1;
}

__int64 game_map_MapDrawTargetLine_UpdateMesh_lambda0_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3)
{
  return (*(_DWORD*)(**(_QWORD**)(a1 + 8) + 4LL * ((*a2 + 32 * *a3) >> 5) +
                     2120) >>
          *a2) &
         1;
}

__int64 game_map_MapDrawTargetLine_UpdateMesh_lambda1_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3)
{
  return (*(_DWORD*)(**(_QWORD**)(a1 + 8) + 4LL * ((*a2 + 32 * *a3) >> 5) +
                     2376) >>
          *a2) &
         1;
}

#pragma GCC visibility pop
