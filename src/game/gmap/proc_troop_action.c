#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gmap_ProcTroopAction_vtable[])();
extern __int64 GameData_22506e0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcTroopAction_Destructor(__int64 a1);
__int64 ProcTroopAction_DeletingDestructor(__int64 a1);
__int64 GameRoutine_13412c0_alt1(_QWORD, _QWORD,
                                 float) __asm__("GameRoutine_13412c0");
__int64 ProcTroopAction_14b5fe0_alt1(_QWORD, _QWORD,
                                     _QWORD) __asm__("ProcTroopAction_14b5fe0");
__int64 TroopMgr_134c680(void);
__int64 UnitActor_81a540(__int64, int, __int64);
__int64 UnitActor_81ab40(_QWORD, float, float);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__n128 GameRoutine_658c00_alt1(_QWORD*) __asm__("GameRoutine_658c00");
__n128
ProcTroopAction_14b5200_alt1(__int64, unsigned __int64**,
                             __n128 result) __asm__("ProcTroopAction_14b5200");
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212ceb8;
extern _UNKNOWN GameData_1acc6e7;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a82aa0;
extern __int128 GameData_1a82b00;
extern __int128 GameData_1a82cd0;
extern __int128 GameData_1a82d00;
extern __int128 GameData_1a82da0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_21a6120;
extern __int64 GameData_212c608[2];
extern __int64 GameData_21316c8;
extern __int64 GameData_21c96e8;
extern __int64 game_GameModeData_instance_;
long double GameRoutine_752d30(_QWORD, _QWORD);
void GameRoutine_13412c0(float32x4_t*, __int64, float);
void __attribute__((noreturn)) GameRoutine_14b6540(void);
void __attribute__((noreturn))
GameRoutine_14b6540_alt1(_QWORD) __asm__("GameRoutine_14b6540");
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void ProcTroopAction_14b4920(unsigned __int64** a1);
__int64
ProcTroopAction_14b4f80_alt1(__int64 a1) __asm__("ProcTroopAction_14b4f80");
__int64 ProcTroopAction_14b5200_alt2(
    __int64 result, unsigned __int64** a2) __asm__("ProcTroopAction_14b5200");
__int64 ProcTroopAction_14b5760_alt1(__int64 result, float32x4_t*** a2) __asm__(
    "ProcTroopAction_14b5760");
__int64
ProcTroopAction_14b5fe0_alt2(float* a1, __int64* a2,
                             __int64** a3) __asm__("ProcTroopAction_14b5fe0");
__int64 UnitActor_81ab40_alt1(__int64, float,
                              float) __asm__("UnitActor_81ab40");
float MapUtil_752d30(int8x16_t*, int8x16_t*);
unsigned int* TroopMgr_134c680_alt1(_QWORD*) __asm__("TroopMgr_134c680");
unsigned int* game_gmap_SpotMgr_GetCurrentSpot_alt1() __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
__int64 ProcTroopAction_14b4f80(_QWORD* a1);
__int64 GameRoutine_13412c0_alt2(float32x4_t*, float32x4_t*,
                                 float) __asm__("GameRoutine_13412c0");
__int64 UnitActor_81a540_alt1(__int64, unsigned int,
                              __int64) __asm__("UnitActor_81a540");
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned int*
ProcTroopAction_14b4f80_alt2(__int64) __asm__("ProcTroopAction_14b4f80");
void GameRoutine_658c00_alt2(__int64*) __asm__("GameRoutine_658c00");
void __attribute__((noreturn))
GameRoutine_14b6540_alt2() __asm__("GameRoutine_14b6540");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt3(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcTroopAction_14b5200(__int64 a1, unsigned __int64** a2);
void ProcTroopAction_14b5760(_QWORD* a1, float32x4_t*** a2);
__int64 ProcTroopAction_14b5fe0(__int64 a1, __int64* a2, __int64** a3);
__int64 GameRoutine_13412c0_alt3(float32x4_t*, __int64,
                                 float) __asm__("GameRoutine_13412c0");
__int64 game_gmap_133dba0(__int64, char, long double, long double);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
extern _UNKNOWN game_g_random_mutex;
extern __int64* game_map_MapRandom_instance__ptr[3];
float cosf(float);
float sinf(float);
__int64 ProcTroopAction_14b5c40(__int64 result, float32x4_t*** a2);

void ProcTroopAction_14b4920(unsigned __int64** a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float32x4_t* v7;
  __int64 v8;
  __int64 v9;
  void* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[11];
  struct {
    __int64 v15[6];
    __int16 v16;
  } v15_;
  struct {
    char gap128_[10];
    _BYTE v17[14];
    int v18;
    char gap156_[4];
    __int64 v19;
    __int64 v20;
    __int64 v21;
    int i;
    float v23;
    __int128 v24;
    __int128 v25;
    __int128 v26;
    __int128 v27;
  } v17_;
  float32x4_t v28;

  v2 = GameData_212c608[0];
  v15_.v16 = 0;
  v14[2] = 0;
  v14[3] = "NULL";
  memset(v17_.v17, 0, sizeof(v17_.v17));
  memset(&v14[4], 0, 56);
  memset(v15_.v15, 0, sizeof(v15_.v15));
  v14[0] = GameData_212c608[0] + 16;
  v14[1] = 0;
  game_ProcInst_Register((__int64)v14);
  v17_.v18 = 0;
  v17_.v19 = 0;
  v17_.v20 = 0;
  v17_.v21 = 0;
  v17_.i = 0;
  v14[0] = game_gmap_ProcTroopAction_vtable;
  LANES128(v28).n128_u64[1] = (unsigned __int64)&GameData_1acc6e7;
  v3 = 0x0.0p+0f;
  LANES128(v28).n128_u64[0] = game_HashString((__int64)&GameData_1acc6e7);
  if (game_GameModeData_instance_ != 0) {
    v4 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), LANES128(v28).n128_u64);
    if (v4 != 0) {
      v3 = (float)*(int*)(v4 + 32);
    }
  }
  v17_.v23 = v3;
  v17_.v18 = 0;
  v17_.v24 = GameData_1a82aa0;
  v17_.v25 = GameData_1a82cd0;
  v17_.v26 = GameData_1a82da0;
  v17_.v27 = GameData_1a82b00;
  ProcTroopAction_14b5200((__int64)v14, a1);
  v5 = v17_.v19;
  v6 = v17_.v20;
  for (v17_.i = 0; v5 != v6; v5 += 48) {
    v7 = *(float32x4_t**)v5;
    v28 = vaddq_f32(
        vmulq_f32(*(float32x4_t*)(v5 + 16), COERCE_AS(float32x4_t, 0)),
        *(float32x4_t*)(v5 + 32));
    GameRoutine_13412c0_alt2(v7, &v28, 0x1.0000000000000p+0f);
  }
  ProcTroopAction_14b4f80_alt2((__int64)v14);
  v8 = v17_.v19;
  v9 = v17_.v20;
  if (v17_.v19 != v17_.v20) {
    v10 = GameData_212ceb8;
    do {
      v11 = *(_QWORD*)v8;
      v12 = *(_QWORD*)(*(_QWORD*)v8 + 376LL);
      if (v12 != 0) {
        *(_DWORD*)(*(_QWORD*)(v12 + 304) + 12LL) = 1065353216;
        v11 = *(_QWORD*)v8;
      }
      UnitActor_81a540_alt1(v11 + 112, 0x723D4B8u, (__int64)v10);
      v8 += 48;
    } while (v8 != v9);
  }
  v14[0] = game_gmap_ProcTroopAction_vtable;
  if (*(_QWORD*)GameData_21316c8 != 0) {
    *(_QWORD*)(*(_QWORD*)GameData_21316c8 + 232LL) = 0;
  }
  if (v17_.v19 != 0) {
    v17_.v20 = v17_.v19;
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v17_.v19);
  }
  v14[0] = v2 + 16;
  if ((v15_.v16 & 0x100) != 0) {
    v15_.v16 &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1((__int64)v14);
  GameRoutine_658c00_alt2(v15_.v15);
}

__int64 ProcTroopAction_14b4f80(_QWORD* a1)
{
  __int64 result;
  float32x4_t* v3;
  __int64 v4;
  int v5;
  float32x4_t*** v6;
  float32x4_t*** v7;
  float32x4_t** v8;
  float32x4_t** v9;
  float32x4_t** i;
  float32x4_t** v11;
  __int128 v12;
  float v13;
  float32x4_t* v14;
  float32x4_t v15;
  int8x16_t v16;
  __int128 v17;
  __int128 v18;

  result = (__int64)TroopMgr_134c680_alt1(a1);
  v3 = (float32x4_t*)result;
  if (result == 0) {
    v4 = *(_QWORD*)(GameData_21c96e8 + 8);
    v5 = *(_DWORD*)(v4 + 56);
    v6 = *(float32x4_t****)(v4 + 8);
    v7 = *(float32x4_t****)(v4 + 16);
    if (v5 < 0) {
      for (; v6 != v7; ++v6) {
        v8 = *v6;
        if ((*v6)[12] == nullptr && v8[69] == nullptr) {
          goto LABEL_12;
        }
      }
    }
    else if (v6 != v7) {
      while (1) {
        v9 = *v6++;
        v8 = v9;
        if (*((_DWORD*)v9 + 21) == v5) {
          break;
        }
        if (v6 == v7) {
          goto LABEL_8;
        }
      }
    LABEL_12:
      v3 = *v8;
      goto LABEL_13;
    }
  LABEL_8:
    result = (__int64)game_gmap_SpotMgr_GetCurrentSpot_alt1();
    v3 = (float32x4_t*)result;
  }
LABEL_13:
  v11 = (float32x4_t**)a1[20];
  for (i = (float32x4_t**)a1[21]; v11 != i; v11 += 6) {
    v14 = *v11;
    if ((float32x4_t*)LANES128(*((*v11))).n128_u64[0] == v3) {
      if ((LANES128(v14[6]).n128_u64[0] | LANES128(v14[34]).n128_u64[1]) != 0) {
        v18 = GameData_1a83090;
        v12 = GameData_1a82d00;
      }
      else {
        v12 = GameData_1a82dd0;
        v18 = GameData_1a83090;
      }
      v17 = v12;
    }
    else {
      v15 = vsubq_f32(v3[2], v14[3]);
      if ((float)(vmuls_lane_f32(LANES128(v15).n128_f32[2], v15, 2) +
                  (float)(LANES128(v15).n128_f32[0] *
                          LANES128(v15).n128_f32[0])) < 0x1.0000000000000p-4f) {
        continue;
      }
      LANES128(v16).n128_u64[0] = LANES128(v15).n128_u32[0];
      LANES128(v16).n128_u64[1] = LANES128(v15).n128_u32[2];
      v17 = (__int128)v16;
      v18 = GameData_1a83090;
    }
    v13 = MapUtil_752d30((int8x16_t*)&v18, (int8x16_t*)&v17);
    result = UnitActor_81ab40_alt1(
        (__int64)&v14[7], v13 * 0x1.ca5dc00000000p+5f, -0x1.0000000000000p+0f);
  }
  return result;
}

__int64 ProcTroopAction_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = game_gmap_ProcTroopAction_vtable;
  if (GameData_22506e0 != 0) {
    *(_QWORD*)(GameData_22506e0 + 232) = 0;
  }
  v2 = *(_QWORD*)(a1 + 160);
  if (v2 != 0) {
    *(_QWORD*)(a1 + 168) = v2;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v2);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcTroopAction_14b5200(__int64 a1, unsigned __int64** a2)
{

#pragma clang fp contract(off)
  unsigned __int64* v2;
  unsigned __int64* v3;
  __int64* v5;
  float32x4_t* v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float32x4_t v14;
  unsigned __int64 v15;
  float32x4_t* v16;
  float32x4_t v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int128 v24;
  __int64 v25;
  float32x4_t* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  float32x4_t v34;
  unsigned __int64 v35;
  float32x4_t* v36;
  float32x4_t v37;
  float32x4_t* v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int128 v45;
  __int64 v46;
  float32x4_t* v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  float32x4_t v64;
  float32x4_t v65;
  __int64 v66;
  __int64 v67;
  struct {
    _QWORD v68[2];
    _QWORD* v69;
    __int64 v70;
    int v71;
  } v68_;
  struct {
    _QWORD v72[2];
    _QWORD* v73;
    __int64 v74;
    int v75;
  } v72_;
  __int64* v76;

  v72_.v73 = nullptr;
  v72_.v74 = 0;
  v72_.v72[0] = 0;
  v72_.v72[1] = 0;
  v2 = *a2;
  v3 = a2[1];
  v68_.v69 = nullptr;
  v68_.v70 = 0;
  v68_.v68[0] = 0;
  v68_.v68[1] = 0;
  v72_.v75 = 1065353216;
  v68_.v71 = 1065353216;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v2 != v3) {
    v66 = a1 + 224;
    v63 = a1 + 192;
    while (1) {
      v9 = *v2;
      v10 = *(_QWORD*)(*v2 + 96);
      if (v10 != 0) {
        break;
      }
      v30 = *(_QWORD*)(v9 + 552);
      if (v30 != 0) {
        if (*(_QWORD*)(v9 + 104) != 0 ||
            *(__int16*)(v9 + 642) * *(__int16*)(v9 + 640) *
                    *(__int16*)(v9 + 644) !=
                0 ||
            *(_QWORD*)(v30 + 352) != 0) {
          goto LABEL_6;
        }
      LABEL_9:
        v11 = *(_QWORD*)v9;
        v76 = &v67;
        v67 = v11;
        if (*(int*)(ProcTroopAction_14b5fe0((__int64)v68_.v68, &v67, &v76) +
                    24) > 1) {
          goto LABEL_6;
        }
        v12 = *(_QWORD*)v9;
        v76 = &v67;
        v67 = v12;
        v13 = ProcTroopAction_14b5fe0((__int64)v68_.v68, &v67, &v76);
        v14 = *(float32x4_t*)(v12 + 32);
        v16 = *(float32x4_t**)(a1 + 168);
        v15 = *(_QWORD*)(a1 + 176);
        v17 = vaddq_f32(v14, *(float32x4_t*)(v66 + 16LL * *(int*)(v13 + 24)));
        if ((unsigned __int64)v16 < v15) {
          LANES128(*(v16)).n128_u64[0] = v9;
          v6 = v16 + 3;
          v16[1] = v14;
          v16[2] = v17;
        }
        else {
          v18 = *(_QWORD*)(a1 + 160);
          v19 = 1 - 0x5555555555555555LL * (((__int64)v16 - v18) >> 4);
          if (v19 > 0x555555555555555LL) {
            goto LABEL_75;
          }
          v64 = v17;
          v20 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v15 - v18) >> 4);
          if (2 * v20 > v19) {
            v19 = 2 * v20;
          }
          if (v20 >= 0x2AAAAAAAAAAAAAALL) {
            v21 = 0x555555555555555LL;
          }
          else {
            v21 = v19;
          }
          if (v21 > 0x555555555555555LL) {
            goto LABEL_74;
          }
          v22 = 3 * v21;
          v23 = fw_memory_HeapManager_Allocate_alt1(*v5, 48 * v21, 16, 0);
          v24 = *(_OWORD*)(v12 + 32);
          v25 = (__int64)v16 + v23 - v18;
          *(_QWORD*)v25 = v9;
          *(_OWORD*)(v25 + 16) = v24;
          *(float32x4_t*)(v25 + 32) = v64;
          if ((float32x4_t*)v18 != v16) {
            v26 = (float32x4_t*)v18;
            v27 = (_QWORD*)v23;
            do {
              *v27 = LANES128(*(v26)).n128_u64[0];
              v27[3] = LANES128(v26[1]).n128_u64[1];
              v27[2] = LANES128(v26[1]).n128_u64[0];
              v27[5] = LANES128(v26[2]).n128_u64[1];
              v28 = LANES128(v26[2]).n128_i64[0];
              v26 += 3;
              v27[4] = v28;
              v27 += 6;
            } while (v26 != v16);
          }
          v6 = (float32x4_t*)(v25 + 48);
          *(_QWORD*)(a1 + 160) = v23;
          *(_QWORD*)(a1 + 168) = v25 + 48;
          *(_QWORD*)(a1 + 176) = v23 + 16 * v22;
          if (v18 != 0) {
            v29 = 128;
            if (*(_QWORD*)(*v5 + 200) == 0) {
              v29 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(*v5 + v29, v18);
          }
        }
        *(_QWORD*)(a1 + 168) = v6;
        v7 = v68_.v68;
        v76 = &v67;
        goto LABEL_5;
      }
      v31 = *(_QWORD*)v9;
      v76 = &v67;
      v67 = v31;
      if (*(int*)(ProcTroopAction_14b5fe0((__int64)v72_.v72, &v67, &v76) + 24) >
          1) {
        goto LABEL_6;
      }
      v32 = *(_QWORD*)v9;
      v76 = &v67;
      v67 = v32;
      v33 = ProcTroopAction_14b5fe0((__int64)v72_.v72, &v67, &v76);
      v34 = *(float32x4_t*)(v32 + 32);
      v36 = *(float32x4_t**)(a1 + 168);
      v35 = *(_QWORD*)(a1 + 176);
      v37 = vaddq_f32(v34, *(float32x4_t*)(v63 + 16LL * *(int*)(v33 + 24)));
      if ((unsigned __int64)v36 >= v35) {
        v39 = *(_QWORD*)(a1 + 160);
        v40 = 1 - 0x5555555555555555LL * (((__int64)v36 - v39) >> 4);
        if (v40 > 0x555555555555555LL) {
        LABEL_75:
          GameRoutine_14b6540_alt2();
        }
        v65 = v37;
        v41 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v35 - v39) >> 4);
        if (2 * v41 > v40) {
          v40 = 2 * v41;
        }
        if (v41 >= 0x2AAAAAAAAAAAAAALL) {
          v42 = 0x555555555555555LL;
        }
        else {
          v42 = v40;
        }
        if (v42 > 0x555555555555555LL) {
        LABEL_74:
          GameRoutine_60a210_alt1();
        }
        v43 = 3 * v42;
        v44 = fw_memory_HeapManager_Allocate_alt1(*v5, 48 * v42, 16, 0);
        v45 = *(_OWORD*)(v32 + 32);
        v46 = (__int64)v36 + v44 - v39;
        *(_QWORD*)v46 = v9;
        *(_OWORD*)(v46 + 16) = v45;
        *(float32x4_t*)(v46 + 32) = v65;
        if ((float32x4_t*)v39 != v36) {
          v47 = (float32x4_t*)v39;
          v48 = (_QWORD*)v44;
          do {
            *v48 = LANES128(*(v47)).n128_u64[0];
            v48[3] = LANES128(v47[1]).n128_u64[1];
            v48[2] = LANES128(v47[1]).n128_u64[0];
            v48[5] = LANES128(v47[2]).n128_u64[1];
            v49 = LANES128(v47[2]).n128_i64[0];
            v47 += 3;
            v48[4] = v49;
            v48 += 6;
          } while (v47 != v36);
        }
        v38 = (float32x4_t*)(v46 + 48);
        *(_QWORD*)(a1 + 160) = v44;
        *(_QWORD*)(a1 + 168) = v46 + 48;
        *(_QWORD*)(a1 + 176) = v44 + 16 * v43;
        if (v39 != 0) {
          v50 = 128;
          if (*(_QWORD*)(*v5 + 200) == 0) {
            v50 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(*v5 + v50, v39);
        }
      }
      else {
        LANES128(*(v36)).n128_u64[0] = v9;
        v38 = v36 + 3;
        v36[1] = v34;
        v36[2] = v37;
      }
      *(_QWORD*)(a1 + 168) = v38;
      v76 = &v67;
      v7 = v72_.v72;
    LABEL_5:
      v67 = *(_QWORD*)v9;
      v8 = ProcTroopAction_14b5fe0((__int64)v7, &v67, &v76);
      ++*(_DWORD*)(v8 + 24);
    LABEL_6:
      if (++v2 == v3) {
        goto LABEL_49;
      }
    }
    if ((unsigned int)*(unsigned __int8*)(v10 + 32) - 1 >= 2) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
LABEL_49:
  if (*(_DWORD*)(a1 + 152) == 0) {
    v61 = *(_QWORD*)(a1 + 160);
    v62 = *(_QWORD*)(a1 + 168);
    while (v61 != v62) {
      if ((*(_WORD*)(*(_QWORD*)v61 + 544LL) & 0x1000) == 0) {
        *(_WORD*)(*(_QWORD*)v61 + 544LL) |= 0x1000u;
      }
      v61 += 48;
    }
  }
  v51 = v68_.v69;
  if (v68_.v69 != nullptr) {
    do {
      v52 = (_QWORD*)*v51;
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v53 = 128;
      }
      else {
        v53 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*v5 + v53, (__int64)v51);
      v51 = v52;
    } while (v52 != nullptr);
  }
  v54 = v68_.v68[0];
  v68_.v68[0] = 0;
  if (v54 != 0) {
    v55 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*v5 + v55, v54);
  }
  v56 = v72_.v73;
  if (v72_.v73 != nullptr) {
    do {
      v57 = (_QWORD*)*v56;
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v58 = 128;
      }
      else {
        v58 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*v5 + v58, (__int64)v56);
      v56 = v57;
    } while (v57 != nullptr);
  }
  v59 = v72_.v72[0];
  v72_.v72[0] = 0;
  if (v59 != 0) {
    v60 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v60 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*v5 + v60, v59);
  }
}

void ProcTroopAction_14b5760(_QWORD* a1, float32x4_t*** a2)
{

#pragma clang fp contract(off)
  float32x4_t** v2;
  float32x4_t** v3;
  atomic_uchar* v4;
  float32x4_t v6;
  __int128 v7;
  __int64 v8;
  float32x4_t* v9;
  float32x4_t* v10;
  unsigned int v11;
  unsigned __int64 v12;
  float32x4_t v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  atomic_uchar* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  float32x4_t v23;
  __int128 v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  float32x4_t** v32;
  float32x4_t v33;

  v2 = *a2;
  v3 = a2[1];
  if (*a2 != v3) {
    v4 = (atomic_uchar*)&GameData_21a6130;
    v32 = a2[1];
    do {
      v9 = *v2;
      v10 = *v2;
      v33 = vaddq_f32((*v2)[3], (*v2)[4]);
      GameRoutine_13412c0_alt2(v10, &v33, 0x1.0000000000000p+0f);
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)v4) != 0) {
        v31 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v31;
        __cxa_guard_release_alt1((__int64)v4);
      }
      v11 = DWORD2(GameData_21a6120);
      v12 = LANES128(*(v9)).n128_u64[0];
      LANES128(v9[4]).n128_u64[0] = GameData_21a6120;
      v13 = v9[4];
      LANES128(v13).n128_u64[1] = v11;
      v9[4] = v13;
      v15 = a1[21];
      v14 = a1[22];
      if (v15 < v14) {
        v6 = v9[3];
        v7 = *(_OWORD*)(v12 + 32);
        *(_QWORD*)v15 = v9;
        v8 = v15 + 48;
        *(float32x4_t*)(v15 + 16) = v6;
        *(_OWORD*)(v15 + 32) = v7;
      }
      else {
        v16 = v4;
        v17 = a1[20];
        v18 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v15 - v17) >> 4) + 1;
        if (v18 > 0x555555555555555LL) {
          GameRoutine_14b6540_alt2();
        }
        v19 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v14 - v17) >> 4);
        if (2 * v19 > v18) {
          v18 = 2 * v19;
        }
        if (v19 >= 0x2AAAAAAAAAAAAAALL) {
          v20 = 0x555555555555555LL;
        }
        else {
          v20 = v18;
        }
        if (v20 > 0x555555555555555LL) {
          GameRoutine_60a210_alt1();
        }
        v21 = 3 * v20;
        v22 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v20, 16, 0);
        v23 = v9[3];
        v24 = *(_OWORD*)(v12 + 32);
        v25 = v22 + v15 - v17;
        *(_QWORD*)v25 = v9;
        *(float32x4_t*)(v25 + 16) = v23;
        *(_OWORD*)(v25 + 32) = v24;
        if (v17 != v15) {
          v26 = (_QWORD*)v17;
          v27 = (_QWORD*)v22;
          do {
            *v27 = *v26;
            v27[3] = v26[3];
            v27[2] = v26[2];
            v27[5] = v26[5];
            v28 = v26[4];
            v26 += 6;
            v27[4] = v28;
            v27 += 6;
          } while (v26 != (_QWORD*)v15);
        }
        v29 = v22 + 16 * v21;
        v8 = v25 + 48;
        a1[20] = v22;
        a1[21] = v25 + 48;
        a1[22] = v29;
        if (v17 != 0) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v17);
        }
        v4 = v16;
        v3 = v32;
      }
      a1[21] = v8;
      ++v2;
    } while (v2 != v3);
  }
}

__int64 ProcTroopAction_14b5c40(__int64 result, float32x4_t*** a2)
{

#pragma clang fp contract(off)
  float32x4_t** v2;
  float32x4_t** v3;
  float32x4_t v4;
  _QWORD* v5;
  __int64* v6;
  float32x4_t* v7;
  float32x4_t* v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  long double v13;
  long double v14;
  unsigned __int64 v15;
  float32x4_t* v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  float32x4_t v26;
  __int64 v27;
  float32x4_t* v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  float32x4_t v32;
  float32x4_t v33;
  float v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;

  v2 = *a2;
  v3 = a2[1];
  if (*a2 != v3) {
    LANES128(v4).n128_u64[0] = 0x4120000041200000LL;
    LANES128(v4).n128_u64[1] = 0x4120000041200000LL;
    v5 = (_QWORD*)result;
    v6 = game_map_MapRandom_instance__ptr[0];
    v33 = v4;
    do {
      v8 = *v2;
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v9 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6);
      v10 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4);
      v11 = *(_DWORD*)v6 ^ (*(_DWORD*)v6 << 11);
      *(_DWORD*)v6 = *((_DWORD*)v6 + 1);
      *((_DWORD*)v6 + 1) = v9;
      v12 = (v11 >> 8) ^ (v10 >> 19) ^ v11 ^ v10;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6) = v10;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4) = v12;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v34 = cosf((float)((float)(v12 & 7) * 0x1.921fb60000000p+2f) *
                 0x1.0000000000000p-3f);
      *(float*)&v13 = sinf((float)((float)(v12 & 7) * 0x1.921fb60000000p+2f) *
                           0x1.0000000000000p-3f);
      *(_QWORD*)&v14 = LODWORD(v34);
      *((_QWORD*)&v14 + 1) = LODWORD(v13);
      v35 = *(float32x4_t*)&v14;
      game_gmap_133dba0((__int64)v8, 2, v13, v14);
      v16 = (float32x4_t*)v5[21];
      v15 = v5[22];
      v17 = vmulq_f32(v35, v33);
      v18 = v8[3];
      v19 = vaddq_f32(v18, v17);
      if ((unsigned __int64)v16 < v15) {
        LANES128(*(v16)).n128_u64[0] = (unsigned __int64)v8;
        v7 = v16 + 3;
        v16[1] = v19;
        v16[2] = v18;
      }
      else {
        v20 = v5[20];
        v21 = 1 - 0x5555555555555555LL * (((__int64)v16 - v20) >> 4);
        if (v21 > 0x555555555555555LL) {
          GameRoutine_14b6540_alt2();
        }
        v32 = v19;
        v36 = v17;
        v22 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v15 - v20) >> 4);
        if (2 * v22 > v21) {
          v21 = 2 * v22;
        }
        if (v22 >= 0x2AAAAAAAAAAAAAALL) {
          v23 = 0x555555555555555LL;
        }
        else {
          v23 = v21;
        }
        if (v23 > 0x555555555555555LL) {
          GameRoutine_60a210_alt1();
        }
        v24 = 3 * v23;
        v25 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v23, 16, 0);
        v26 = v8[3];
        v27 = (__int64)v16 + v25 - v20;
        *(_QWORD*)v27 = v8;
        *(float32x4_t*)(v27 + 16) = v32;
        *(float32x4_t*)(v27 + 32) = v26;
        if ((float32x4_t*)v20 != v16) {
          v28 = (float32x4_t*)v20;
          v29 = (_QWORD*)v25;
          do {
            *v29 = LANES128(*(v28)).n128_u64[0];
            v29[3] = LANES128(v28[1]).n128_u64[1];
            v29[2] = LANES128(v28[1]).n128_u64[0];
            v29[5] = LANES128(v28[2]).n128_u64[1];
            v30 = LANES128(v28[2]).n128_i64[0];
            v28 += 3;
            v29[4] = v30;
            v29 += 6;
          } while (v28 != v16);
        }
        v7 = (float32x4_t*)(v27 + 48);
        v5[20] = v25;
        v5[21] = v27 + 48;
        v5[22] = v25 + 16 * v24;
        if (v20 != 0) {
          v31 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v20);
        }
        v17 = v36;
      }
      v5[21] = v7;
      v37 = vaddq_f32(v17, *(float32x4_t*)(LANES128(*(v8)).n128_u64[0] + 32));
      result =
          GameRoutine_13412c0_alt3(v8, (__int64)&v37, 0x1.0000000000000p+0f);
      ++v2;
    } while (v2 != v3);
  }
  return result;
}

__int64 ProcTroopAction_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_gmap_ProcTroopAction_vtable;
  if (GameData_22506e0 != 0) {
    *(_QWORD*)(GameData_22506e0 + 232) = 0;
  }
  v2 = *(_QWORD*)(a1 + 160);
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 168) = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v2);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, a1);
}

__int64 ProcTroopAction_14b5fe0(__int64 a1, __int64* a2, __int64** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 result;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  _BOOL8 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 primeEm;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  _QWORD* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;

  v4 = *a2;
  v53 = *a2;
  v7 = std___1___hash_memory_alt1((__int64)&v53, 8u);
  v8 = *(_QWORD*)(a1 + 8);
  v9 = v7;
  if (v8 != 0) {
    v10 = v8 - 1;
    if ((v8 & (v8 - 1)) != 0) {
      v3 = v7;
      if (v7 >= v8) {
        v3 = v7 % v8;
      }
    }
    else {
      v3 = v10 & v7;
    }
    v11 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
    if (v11 != nullptr) {
      result = *v11;
      if (*v11 != 0) {
        if ((v8 & v10) == 0) {
          while (1) {
            v14 = *(_QWORD*)(result + 8);
            if (v14 == v9) {
              if (*(_QWORD*)(result + 16) == v4) {
                return result;
              }
            }
            else if ((v14 & v10) != v3) {
              goto LABEL_22;
            }
            result = *(_QWORD*)result;
            if (result == 0) {
              goto LABEL_22;
            }
          }
        }
        do {
          v13 = *(_QWORD*)(result + 8);
          if (v13 == v9) {
            if (*(_QWORD*)(result + 16) == v4) {
              return result;
            }
          }
          else {
            if (v13 >= v8) {
              v13 %= v8;
            }
            if (v13 != v3) {
              break;
            }
          }
          result = *(_QWORD*)result;
        } while (result != 0);
      }
    }
  }
LABEL_22:
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v16 = *a3;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v9;
  v17 = *(float*)(a1 + 32);
  v18 = *v16;
  *(_DWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 16) = v18;
  v19 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v8 == 0 || (float)(v17 * (float)v8) < v19) {
    v20 = v19 / v17;
    v21 = true;
    if (v8 >= 3) {
      v21 = (v8 & (v8 - 1)) != 0;
    }
    v22 = v21 | (2 * v8);
    v23 = vcvtps_u64_f32(v20);
    if (v22 <= v23) {
      primeEm = v23;
    }
    else {
      primeEm = v22;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v25 = result;
      primeEm = std___1___next_prime_alt1(primeEm);
      result = v25;
      v8 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm <= v8) {
      if (primeEm >= v8) {
        goto LABEL_83;
      }
      v32 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v8 < 3 || (v8 & (v8 - 1)) != 0) {
        v45 = result;
        v32 = std___1___next_prime_alt1(v32);
        result = v45;
      }
      else {
        v33 = 1LL << -(char)__clz(v32 - 1);
        if (v32 >= 2) {
          v32 = v33;
        }
      }
      if (primeEm <= v32) {
        primeEm = v32;
      }
      if (primeEm >= v8) {
        goto LABEL_83;
      }
      if (primeEm == 0) {
        v46 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v46 != 0) {
          v47 = result;
          v48 = 128;
          if (*(_QWORD*)(*v15 + 200) == 0) {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(*v15 + v48, v46);
          result = v47;
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_83;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210_alt1();
    }
    v26 = result;
    v27 = fw_memory_HeapManager_Allocate_alt1(*v15, 8 * primeEm, 16, 0);
    v28 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v27;
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v15 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*v15 + v29, v28);
    }
    v30 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v31 = 0;
      result = v26;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 48) = 0;
        v34 = *(_QWORD*)a1 + 8 * v31;
        v31 += 8;
        *(_QWORD*)(v34 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v31);
    }
    else {
      v31 = 0;
      result = v26;
    }
    if ((primeEm & 7) != 0) {
      v35 = 8 * v31;
      do {
        --v30;
        *(_QWORD*)(*(_QWORD*)a1 + v35) = 0;
        v35 += 8;
      } while (v30 != 0);
    }
    v37 = a1 + 16;
    v36 = *(_QWORD**)(a1 + 16);
    if (v36 != nullptr) {
      v38 = v36[1];
      v39 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v38 >= primeEm) {
          v38 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v38) = v37;
        v40 = (_QWORD*)*v36;
        if (*v36 == 0) {
          goto LABEL_83;
        }
        while (1) {
          v41 = v40[1];
          if (v41 >= primeEm) {
            v41 %= primeEm;
          }
          if (v41 != v38) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v41) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v36;
              goto LABEL_60;
            }
            *v36 = *v40;
            *v40 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v41);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v41) = v40;
            v40 = v36;
          }
          v41 = v38;
        LABEL_60:
          v36 = v40;
          v40 = (_QWORD*)*v40;
          v38 = v41;
          if (v40 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      v42 = v38 & v39;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = v37;
      while (1) {
        v43 = (_QWORD*)*v36;
        if (*v36 == 0) {
          break;
        }
        v44 = v43[1] & v39;
        if (v44 == v42) {
          v36 = (_QWORD*)*v36;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v44) != 0) {
          *v36 = *v43;
          *v43 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v44);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v44) = v43;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = v36;
          v36 = v43;
          v42 = v44;
        }
      }
    }
  LABEL_83:
    v8 = *(_QWORD*)(a1 + 8);
    if ((v8 & (v8 - 1)) != 0) {
      if (v9 >= v8) {
        v3 = v9 % v8;
      }
      else {
        v3 = v9;
      }
    }
    else {
      v3 = (v8 - 1) & v9;
    }
  }
  v49 = *(_QWORD*)a1;
  v50 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v50 != nullptr) {
    *(_QWORD*)result = *v50;
    *v50 = result;
  }
  else {
    v51 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *(_QWORD*)result = v51;
    *(_QWORD*)(v49 + 8 * v3) = a1 + 16;
    if (*(_QWORD*)result != 0) {
      v52 = *(_QWORD*)(*(_QWORD*)result + 8LL);
      if ((v8 & (v8 - 1)) != 0) {
        if (v52 >= v8) {
          v52 %= v8;
        }
      }
      else {
        v52 &= v8 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

#pragma GCC visibility pop
