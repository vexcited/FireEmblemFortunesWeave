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
__int64 ProcTroopAction_14b4f80(__int64 a1);
__int64 ProcTroopAction_14b5200(__int64 result, unsigned __int64** a2);
__int64 ProcTroopAction_14b5760(__int64 result, float32x4_t*** a2);
__int64 ProcTroopAction_14b5fe0(float* a1, __int64* a2, __int64** a3);

void ProcTroopAction_14b4920(unsigned __int64** a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  float v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  float32x4_t* v7;
  __int64* v8;
  __int64* v9;
  void* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[11];
  struct {
    _QWORD v15[6];
    __int16 v16;
  } v15_;
  struct {
    char gap128_[10];
    _BYTE v17[14];
    int v18;
    char gap156_[4];
    __int64* v19;
    __int64* v20;
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
  v17_.v19 = nullptr;
  v17_.v20 = nullptr;
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
  ProcTroopAction_14b5200_alt1((__int64)v14, a1,
                               COERCE_AS(__n128, GameData_1a82da0));
  v5 = v17_.v19;
  v6 = v17_.v20;
  for (v17_.i = 0; v5 != v6; v5 += 6) {
    v7 = (float32x4_t*)*v5;
    v28 =
        vaddq_f32(vmulq_f32(*((float32x4_t*)v5 + 1), COERCE_AS(float32x4_t, 0)),
                  *((float32x4_t*)v5 + 2));
    GameRoutine_13412c0(v7, (__int64)&v28, 0x1.0000000000000p+0f);
  }
  ProcTroopAction_14b4f80((__int64)v14);
  v8 = v17_.v19;
  v9 = v17_.v20;
  if (v17_.v19 != v17_.v20) {
    v10 = GameData_212ceb8;
    do {
      v11 = *v8;
      v12 = *(_QWORD*)(*v8 + 376);
      if (v12 != 0) {
        *(_DWORD*)(*(_QWORD*)(v12 + 304) + 12LL) = 1065353216;
        v11 = *v8;
      }
      UnitActor_81a540(v11 + 112, 119788728, (__int64)v10);
      v8 += 6;
    } while (v8 != v9);
  }
  v14[0] = game_gmap_ProcTroopAction_vtable;
  if (*(_QWORD*)GameData_21316c8 != 0) {
    *(_QWORD*)(*(_QWORD*)GameData_21316c8 + 232LL) = 0;
  }
  if (v17_.v19 != nullptr) {
    v17_.v20 = v17_.v19;
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v13);
  }
  v14[0] = v2 + 16;
  if ((v15_.v16 & 0x100) != 0) {
    v15_.v16 &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1((__int64)v14);
  GameRoutine_658c00_alt1(v15_.v15);
}

__int64 ProcTroopAction_14b4f80(__int64 a1)
{
  __int64 result;
  __int64 v3;
  float32x4_t* v4;
  __int64 v5;
  int v6;
  float32x4_t*** v7;
  float32x4_t*** v8;
  float32x4_t** v9;
  float32x4_t** v10;
  float32x4_t** i;
  float32x4_t** v12;
  __int128 v13;
  long double v14;
  float32x4_t* v15;
  float32x4_t v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;

  result = TroopMgr_134c680();
  v4 = (float32x4_t*)result;
  if (result == 0) {
    v5 = *(_QWORD*)(GameData_21c96e8 + 8);
    v6 = *(_DWORD*)(v5 + 56);
    v7 = *(float32x4_t****)(v5 + 8);
    v8 = *(float32x4_t****)(v5 + 16);
    if (v6 < 0) {
      for (; v7 != v8; ++v7) {
        v9 = *v7;
        if ((*v7)[12] == nullptr && v9[69] == nullptr) {
          goto LABEL_12;
        }
      }
    }
    else if (v7 != v8) {
      while (1) {
        v10 = *v7++;
        v9 = v10;
        if (*((_DWORD*)v10 + 21) == v6) {
          break;
        }
        if (v7 == v8) {
          goto LABEL_8;
        }
      }
    LABEL_12:
      v4 = *v9;
      goto LABEL_13;
    }
  LABEL_8:
    result = game_gmap_SpotMgr_GetCurrentSpot(0, v3);
    v4 = (float32x4_t*)result;
  }
LABEL_13:
  v12 = *(float32x4_t***)(a1 + 160);
  for (i = *(float32x4_t***)(a1 + 168); v12 != i; v12 += 6) {
    v15 = *v12;
    if ((float32x4_t*)LANES128(*((*v12))).n128_u64[0] == v4) {
      if ((LANES128(v15[6]).n128_u64[0] | LANES128(v15[34]).n128_u64[1]) != 0) {
        v19 = GameData_1a83090;
        v13 = GameData_1a82d00;
      }
      else {
        v13 = GameData_1a82dd0;
        v19 = GameData_1a83090;
      }
      v18 = v13;
    }
    else {
      v16 = vsubq_f32(v4[2], v15[3]);
      if ((float)(vmuls_lane_f32(LANES128(v16).n128_f32[2], v16, 2) +
                  (float)(LANES128(v16).n128_f32[0] *
                          LANES128(v16).n128_f32[0])) < 0x1.0000000000000p-4) {
        continue;
      }
      *(_QWORD*)&v17 = LANES128(v16).n128_u32[0];
      *((_QWORD*)&v17 + 1) = LANES128(v16).n128_u32[2];
      v18 = v17;
      v19 = GameData_1a83090;
    }
    v14 = GameRoutine_752d30(&v19, &v18);
    result = UnitActor_81ab40(&v15[7], *(float*)&v14 * 0x1.ca5dc00000000p+5,
                              -0x1.0000000000000p+0);
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

__int64 ProcTroopAction_14b5200(__int64 result, unsigned __int64** a2)
{
  unsigned __int64* v2;
  unsigned __int64* v3;
  __int64 v4;
  _QWORD* v5;
  float32x4_t* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  float32x4_t* v10;
  float32x4_t* v11;
  __int64 v12;
  float32x4_t v13;
  unsigned __int64 v14;
  float32x4_t* v15;
  float32x4_t v16;
  float32x4_t* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  float32x4_t v23;
  __int64 v24;
  float32x4_t* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float32x4_t* v30;
  float32x4_t* v31;
  float32x4_t v32;
  unsigned __int64 v33;
  float32x4_t* v34;
  float32x4_t v35;
  float32x4_t* v36;
  float32x4_t* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  float32x4_t v43;
  __int64 v44;
  float32x4_t* v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  _QWORD* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  float32x4_t v62;
  float32x4_t v63;
  __int64 v64;
  float32x4_t* v65;
  _QWORD v66[2];
  _QWORD* v67;
  __int64 v68;
  int v69;
  _QWORD v70[2];
  _QWORD* v71;
  __int64 v72;
  int v73;
  float32x4_t** v74;

  v71 = nullptr;
  v72 = 0;
  v70[0] = 0;
  v70[1] = 0;
  v2 = *a2;
  v3 = a2[1];
  v4 = result;
  v67 = nullptr;
  v68 = 0;
  v66[0] = 0;
  v66[1] = 0;
  v73 = 1065353216;
  v69 = 1065353216;
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v2 != v3) {
    v64 = result + 224;
    v61 = result + 192;
    while (1) {
      v8 = *v2;
      v9 = *(_QWORD*)(*v2 + 96);
      if (v9 != 0) {
        break;
      }
      v29 = *(_QWORD*)(v8 + 552);
      if (v29 != 0) {
        if (*(_QWORD*)(v8 + 104) != 0 ||
            *(__int16*)(v8 + 642) * *(__int16*)(v8 + 640) *
                    *(__int16*)(v8 + 644) !=
                0 ||
            *(_QWORD*)(v29 + 352) != 0) {
          goto LABEL_6;
        }
      LABEL_9:
        v10 = *(float32x4_t**)v8;
        v74 = &v65;
        v65 = v10;
        result = ProcTroopAction_14b5fe0_alt1(v66, &v65, &v74);
        if (*(int*)(result + 24) > 1) {
          goto LABEL_6;
        }
        v11 = *(float32x4_t**)v8;
        v74 = &v65;
        v65 = v11;
        v12 = ProcTroopAction_14b5fe0_alt1(v66, &v65, &v74);
        v13 = v11[2];
        v15 = *(float32x4_t**)(v4 + 168);
        v14 = *(_QWORD*)(v4 + 176);
        v16 = vaddq_f32(v13, *(float32x4_t*)(v64 + 16LL * *(int*)(v12 + 24)));
        if ((unsigned __int64)v15 < v14) {
          LANES128(*(v15)).n128_u64[0] = v8;
          v6 = v15 + 3;
          v15[1] = v13;
          v15[2] = v16;
        }
        else {
          v17 = *(float32x4_t**)(v4 + 160);
          v18 = 1 - 0x5555555555555555LL * (v15 - v17);
          if (v18 > 0x555555555555555LL) {
            goto LABEL_75;
          }
          v62 = v16;
          v19 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v14 - (_QWORD)v17) >> 4);
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
            goto LABEL_74;
          }
          v21 = 3 * v20;
          v22 = fw_memory_HeapManager_Allocate(*v5, 48 * v20, 16, 0);
          v23 = v11[2];
          v24 = v22 + (char*)v15 - (char*)v17;
          *(_QWORD*)v24 = v8;
          *(float32x4_t*)(v24 + 16) = v23;
          *(float32x4_t*)(v24 + 32) = v62;
          if (v17 != v15) {
            v25 = v17;
            v26 = (_QWORD*)v22;
            do {
              *v26 = LANES128(*(v25)).n128_u64[0];
              v26[3] = LANES128(v25[1]).n128_u64[1];
              v26[2] = LANES128(v25[1]).n128_u64[0];
              v26[5] = LANES128(v25[2]).n128_u64[1];
              v27 = LANES128(v25[2]).n128_i64[0];
              v25 += 3;
              v26[4] = v27;
              v26 += 6;
            } while (v25 != v15);
          }
          v6 = (float32x4_t*)(v24 + 48);
          *(_QWORD*)(v4 + 160) = v22;
          *(_QWORD*)(v4 + 168) = v24 + 48;
          *(_QWORD*)(v4 + 176) = v22 + 16 * v21;
          if (v17 != nullptr) {
            v28 = 128;
            if (*(_QWORD*)(*v5 + 200LL) == 0) {
              v28 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v5 + v28);
          }
        }
        *(_QWORD*)(v4 + 168) = v6;
        v7 = v66;
        v74 = &v65;
        goto LABEL_5;
      }
      v30 = *(float32x4_t**)v8;
      v74 = &v65;
      v65 = v30;
      result = ProcTroopAction_14b5fe0_alt1(v70, &v65, &v74);
      if (*(int*)(result + 24) > 1) {
        goto LABEL_6;
      }
      v31 = *(float32x4_t**)v8;
      v74 = &v65;
      v65 = v31;
      v12 = ProcTroopAction_14b5fe0_alt1(v70, &v65, &v74);
      v32 = v31[2];
      v34 = *(float32x4_t**)(v4 + 168);
      v33 = *(_QWORD*)(v4 + 176);
      v35 = vaddq_f32(v32, *(float32x4_t*)(v61 + 16LL * *(int*)(v12 + 24)));
      if ((unsigned __int64)v34 >= v33) {
        v37 = *(float32x4_t**)(v4 + 160);
        v38 = 1 - 0x5555555555555555LL * (v34 - v37);
        if (v38 > 0x555555555555555LL) {
        LABEL_75:
          GameRoutine_14b6540();
        }
        v63 = v35;
        v39 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v33 - (_QWORD)v37) >> 4);
        if (2 * v39 > v38) {
          v38 = 2 * v39;
        }
        if (v39 >= 0x2AAAAAAAAAAAAAALL) {
          v40 = 0x555555555555555LL;
        }
        else {
          v40 = v38;
        }
        if (v40 > 0x555555555555555LL) {
        LABEL_74:
          GameRoutine_60a210(v12);
        }
        v41 = 3 * v40;
        v42 = fw_memory_HeapManager_Allocate(*v5, 48 * v40, 16, 0);
        v43 = v31[2];
        v44 = v42 + (char*)v34 - (char*)v37;
        *(_QWORD*)v44 = v8;
        *(float32x4_t*)(v44 + 16) = v43;
        *(float32x4_t*)(v44 + 32) = v63;
        if (v37 != v34) {
          v45 = v37;
          v46 = (_QWORD*)v42;
          do {
            *v46 = LANES128(*(v45)).n128_u64[0];
            v46[3] = LANES128(v45[1]).n128_u64[1];
            v46[2] = LANES128(v45[1]).n128_u64[0];
            v46[5] = LANES128(v45[2]).n128_u64[1];
            v47 = LANES128(v45[2]).n128_i64[0];
            v45 += 3;
            v46[4] = v47;
            v46 += 6;
          } while (v45 != v34);
        }
        v36 = (float32x4_t*)(v44 + 48);
        *(_QWORD*)(v4 + 160) = v42;
        *(_QWORD*)(v4 + 168) = v44 + 48;
        *(_QWORD*)(v4 + 176) = v42 + 16 * v41;
        if (v37 != nullptr) {
          v48 = 128;
          if (*(_QWORD*)(*v5 + 200LL) == 0) {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v5 + v48);
        }
      }
      else {
        LANES128(*(v34)).n128_u64[0] = v8;
        v36 = v34 + 3;
        v34[1] = v32;
        v34[2] = v35;
      }
      *(_QWORD*)(v4 + 168) = v36;
      v74 = &v65;
      v7 = v70;
    LABEL_5:
      v65 = *(float32x4_t**)v8;
      result = ProcTroopAction_14b5fe0_alt1(v7, &v65, &v74);
      ++*(_DWORD*)(result + 24);
    LABEL_6:
      if (++v2 == v3) {
        goto LABEL_49;
      }
    }
    if ((unsigned int)*(unsigned __int8*)(v9 + 32) - 1 >= 2) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
LABEL_49:
  if (*(_DWORD*)(v4 + 152) == 0) {
    v59 = *(_QWORD*)(v4 + 160);
    v60 = *(_QWORD*)(v4 + 168);
    while (v59 != v60) {
      if ((*(_WORD*)(*(_QWORD*)v59 + 544LL) & 0x1000) == 0) {
        *(_WORD*)(*(_QWORD*)v59 + 544LL) |= 0x1000u;
      }
      v59 += 48;
    }
  }
  v49 = v67;
  if (v67 != nullptr) {
    do {
      v50 = (_QWORD*)*v49;
      if (*(_QWORD*)(*v5 + 200LL) != 0) {
        v51 = 128;
      }
      else {
        v51 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt2(*v5 + v51);
      v49 = v50;
    } while (v50 != nullptr);
  }
  v52 = v66[0];
  v66[0] = 0;
  if (v52 != 0) {
    v53 = 128;
    if (*(_QWORD*)(*v5 + 200LL) == 0) {
      v53 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt2(*v5 + v53);
  }
  v54 = v71;
  if (v71 != nullptr) {
    do {
      v55 = (_QWORD*)*v54;
      if (*(_QWORD*)(*v5 + 200LL) != 0) {
        v56 = 128;
      }
      else {
        v56 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt2(*v5 + v56);
      v54 = v55;
    } while (v55 != nullptr);
  }
  v57 = v70[0];
  v70[0] = 0;
  if (v57 != 0) {
    v58 = 128;
    if (*(_QWORD*)(*v5 + 200LL) == 0) {
      v58 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt2(*v5 + v58);
  }
  return result;
}

__int64 ProcTroopAction_14b5760(__int64 result, float32x4_t*** a2)
{
  float32x4_t** v2;
  float32x4_t** v3;
  atomic_uchar* v4;
  _QWORD* v5;
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
  _QWORD* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  float32x4_t v22;
  __int128 v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float32x4_t** v31;
  float32x4_t v32;

  v2 = *a2;
  v3 = a2[1];
  if (*a2 != v3) {
    v4 = (atomic_uchar*)&GameData_21a6130;
    v5 = (_QWORD*)result;
    v31 = a2[1];
    do {
      v9 = *v2;
      v10 = *v2;
      v32 = vaddq_f32((*v2)[3], (*v2)[4]);
      result = GameRoutine_13412c0_alt1(v10, &v32, 1.0f);
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0) {
        result = __cxa_guard_acquire(v4);
        if ((_DWORD)result != 0) {
          v30 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v30;
          result = __cxa_guard_release(v4);
        }
      }
      v11 = DWORD2(GameData_21a6120);
      v12 = LANES128(*(v9)).n128_u64[0];
      LANES128(v9[4]).n128_u64[0] = GameData_21a6120;
      v13 = v9[4];
      LANES128(v13).n128_u64[1] = v11;
      v9[4] = v13;
      v15 = v5[21];
      v14 = v5[22];
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
        v17 = (_QWORD*)v5[20];
        v18 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v15 - (_QWORD)v17) >> 4) + 1;
        if (v18 > 0x555555555555555LL) {
          GameRoutine_14b6540_alt1(result);
        }
        v19 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v14 - (_QWORD)v17) >> 4);
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
          GameRoutine_60a210(result);
        }
        v21 = 3 * v20;
        result = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v20, 16, 0);
        v22 = v9[3];
        v23 = *(_OWORD*)(v12 + 32);
        v24 = result + v15 - (_QWORD)v17;
        *(_QWORD*)v24 = v9;
        *(float32x4_t*)(v24 + 16) = v22;
        *(_OWORD*)(v24 + 32) = v23;
        if (v17 != (_QWORD*)v15) {
          v25 = v17;
          v26 = (_QWORD*)result;
          do {
            *v26 = *v25;
            v26[3] = v25[3];
            v26[2] = v25[2];
            v26[5] = v25[5];
            v27 = v25[4];
            v25 += 6;
            v26[4] = v27;
            v26 += 6;
          } while (v25 != (_QWORD*)v15);
        }
        v28 = result + 16 * v21;
        v8 = v24 + 48;
        v5[20] = result;
        v5[21] = v24 + 48;
        v5[22] = v28;
        if (v17 != nullptr) {
          v29 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v29 = 56;
          }
          result = nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
        }
        v4 = v16;
        v3 = v31;
      }
      v5[21] = v8;
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

__int64 ProcTroopAction_14b5fe0(float* a1, __int64* a2, __int64** a3)
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
  __int64* v37;
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
  __int64* v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;

  v4 = *a2;
  v53 = *a2;
  v7 = std___1___hash_memory(&v53, 8);
  v8 = *((_QWORD*)a1 + 1);
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
  v17 = a1[8];
  v18 = *v16;
  *(_DWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 16) = v18;
  v19 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
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
      primeEm = std___1___next_prime(primeEm);
      result = v25;
      v8 = *((_QWORD*)a1 + 1);
    }
    if (primeEm <= v8) {
      if (primeEm >= v8) {
        goto LABEL_83;
      }
      v32 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v8 < 3 || (v8 & (v8 - 1)) != 0) {
        v45 = result;
        v32 = std___1___next_prime(v32);
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
          nn_mem_StandardAllocator_Free_alt1(*v15 + v48);
          result = v47;
        }
        *((_QWORD*)a1 + 1) = 0;
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
      nn_mem_StandardAllocator_Free_alt1(*v15 + v29);
    }
    v30 = primeEm & 7;
    *((_QWORD*)a1 + 1) = primeEm;
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
    v37 = (__int64*)(a1 + 4);
    v36 = *((_QWORD**)a1 + 2);
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
    v8 = *((_QWORD*)a1 + 1);
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
  v50 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
  if (v50 != nullptr) {
    *(_QWORD*)result = *v50;
    *v50 = result;
  }
  else {
    v51 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = result;
    *(_QWORD*)result = v51;
    *(_QWORD*)(v49 + 8 * v3) = a1 + 4;
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
  ++*((_QWORD*)a1 + 3);
  return result;
}

#pragma GCC visibility pop
