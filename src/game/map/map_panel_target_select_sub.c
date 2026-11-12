#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_74e080(_QWORD, _QWORD);
__int64
game_map_MapPanelTargetSelectSub_UpdateTarget_lambda0_Invoke(__int64 a1,
                                                             __int64 a2);
__int64 game_map_MapPanelTargetSelectSub_UpdateTarget_lambda1_Invoke(
    __int64 a1, _DWORD* a2, _DWORD* a3);
_QWORD* MapPanelTargetSelect_f17c00(_QWORD*, _QWORD*);
_QWORD* game_map_DeployData_TargetEnumerateSubTarget(__int64, __int64*, int);
__int64 DeployData_f25050(__int64);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_f176c0(__int64***, __int64);
__int64 GameRoutine_fcacb0(__int64, __int64, __int64, __int64, __int64,
                           __int16);
__int64 MapDrawConst_fcbcc0(__int64, int, unsigned __int8, unsigned __int8,
                            __int64, char);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_map_f54910(__int64);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1ff2578[])();
extern __int64 (*GameData_1ff25f8[])();
extern __int64* GameData_212f8b0[14];
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d038[2];
extern __int64 GameData_221fdd8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float32x4_t* GameRoutine_f54fe0(float32x4_t* result);
void GameRoutine_f172c0(float, __int64, _QWORD*, __int64);
void __attribute__((noreturn)) String_60a250(const char*);
void game_map_MapPanelTargetSelectSub_UpdateTarget(__int64 a1);
__n128 MapPanelTargetSelectSub_Unknown4_alt1(__int64 a1) __asm__(
    "MapPanelTargetSelectSub_Unknown4");
_QWORD* game_map_DeployData_TargetEnumerateSubTarget_alt1(
    __int64, __int64,
    unsigned int) __asm__("game_map_DeployData_TargetEnumerateSubTarget");
__int64* MapPanelTargetSelect_f17c00_alt1(__int64**, __int64*) __asm__(
    "MapPanelTargetSelect_f17c00");
__int64 GameHr_fcacb0(__int64, __int64, __int64, __int64, __int64, __int16);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_f172c0_alt1(float, __int64, _QWORD*,
                                __int64) __asm__("GameRoutine_f172c0");
__int64 MapPanelTargetSelect_f176c0(__int64**, __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapPanelTargetSelectSub_Unknown4(__int64 a1);

void game_map_MapPanelTargetSelectSub_UpdateTarget(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  char* v19;
  __int64* v20;
  __int64 v21;
  unsigned __int8* v22;
  unsigned __int8* v23;
  unsigned int v24;
  unsigned int v25;
  __int16 v27;
  __int64 v28;
  float32x4_t v29;
  float32x4_t* v30;
  float32x4_t* v31;
  float32x4_t* v32;
  float32x4_t v33;
  float32x4_t v34;
  int8x16_t v35;
  bool v36;
  float32x4_t v37;
  __int64 v38;
  __int64 v39;
  void (***v40)(_QWORD);
  void (***v41)(_QWORD);
  void (**v42)(_QWORD);
  __int64 v43;
  __int64 v44;
  __int64** v45;
  float32x4_t* v46;
  float32x4_t* v47;
  __int64 v48;
  __int64* v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  unsigned __int64 v55;
  __int64* v56;
  struct {
    _QWORD v57[4];
    _QWORD* v58;
  } v57_;
  struct {
    _QWORD v59[4];
    _QWORD* v60;
    char gap88_[56];
    float32x4_t* v61;
    __int64 v62;
    char gap160_[8];
    __int64 v63;
    __int64 v64;
    char gap184_[40];
    float32x4_t v65;
  } v59_;
  __int64* v66;
  struct {
    __int64 v67;
    __int64 v68;
    __int64 v69;
  } v67_;

  if (*(_BYTE*)(a1 + 8) != 1) {
    goto LABEL_78;
  }
  v2 = *(_QWORD**)(a1 + 16);
  v3 = (_QWORD*)(a1 + 24);
  if (v2 != (_QWORD*)(a1 + 24)) {
    do {
      v11 = v2[6];
      *((_BYTE*)v2 + 272) = 0;
      if (((*(__int64 (**)(void*))(v11 + 48))((void*)&v2[6]) & 1) != 0) {
        v12 = 1036831949;
      }
      else {
        v12 = 0;
        *((_DWORD*)v2 + 69) = 0;
      }
      v13 = (_QWORD*)v2[1];
      *((_DWORD*)v2 + 70) = v12;
      if (v13 != nullptr) {
        do {
          v14 = v13;
          v13 = (_QWORD*)*v13;
        } while (v13 != nullptr);
      }
      else {
        do {
          v14 = (_QWORD*)v2[2];
          v36 = v2 == (_QWORD*)*v14;
          v2 = v14;
        } while (!v36);
      }
      v2 = v14;
    } while (v14 != v3);
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1) & 1) == 0) {
    goto LABEL_77;
  }
  v4 = GameData_212d020[0];
  v5 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 24LL);
  v6 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  if (v6 == 0) {
    goto LABEL_18;
  }
  v7 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 96LL);
  v8 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  v9 = std___1___shared_weak_count_lock_alt1(v8);
  std___1___shared_weak_count___release_weak_alt1(v6);
  if (v9 != 0) {
    if (v7 != 0) {
      v10 = 254936;
    }
    else if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
      v10 = 8;
    }
    else {
      v10 = 127472;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak_alt1(v9);
    }
  }
  else {
  LABEL_18:
    v10 =
        *(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0 ? 8LL : 127472LL;
  }
  v15 = DeployData_f25050(v5 + v10);
  if (v15 > 2) {
    goto LABEL_77;
  }
  v67_.v68 = 0;
  v67_.v69 = 0;
  v67_.v67 = 0;
  v59_.v60 = v59_.v59;
  *(_DWORD*)(a1 + 40) = 2 * v15 + 31;
  v59_.v59[0] = GameData_1ff2578;
  v59_.v59[1] = &v67_.v67;
  game_map_DeployData_TargetEnumerateSubTarget_alt1(v5 + v10, (__int64)v59_.v59,
                                                    v15);
  if (v59_.v60 == v59_.v59) {
    v16 = 32;
  }
  else {
    if (v59_.v60 == nullptr) {
      goto LABEL_32;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*v59_.v60 + v16))((__int64)v59_.v60);
LABEL_32:
  v17 = v67_.v67;
  v66 = &v67_.v67;
  v18 = *(char**)(*(_QWORD*)v4 + 248LL);
  v19 = *(char**)(*(_QWORD*)v4 + 256LL);
  if (v18 == v19 || v67_.v67 == v67_.v68) {
    goto LABEL_73;
  }
  v20 = GameData_212f8b0[0] + 2;
  do {
    v22 = (unsigned __int8*)*v66;
    v23 = (unsigned __int8*)v66[1];
    if ((unsigned __int8*)*v66 == v23) {
      goto LABEL_38;
    }
    v24 = *v18;
    v25 = v18[1];
    while (*v22 != (unsigned __int8)v24 || v22[1] != (unsigned __int8)v25) {
      v22 += 4;
      if (v22 == v23) {
        goto LABEL_38;
      }
    }
    game_map_f54910((__int64)v59_.v59);
    v57_.v58 = v57_.v57;
    v57_.v57[0] = GameData_1ff25f8;
    v57_.v57[1] = &v66;
    v27 = MapDrawConst_fcbcc0(a1, 1, v24, v25, (__int64)v57_.v57, 1);
    if (v57_.v58 == v57_.v57) {
      v28 = 32;
    }
    else {
      if (v57_.v58 == nullptr) {
        goto LABEL_49;
      }
      v28 = 40;
    }
    (*(void (**)(__int64))(*v57_.v58 + v28))((__int64)v57_.v58);
  LABEL_49:
    GameHr_fcacb0(a1, (__int64)v59_.v59, 1, v24, v25, v27);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
      v43 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v43;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
    }
    v29 = COERCE_AS(float32x4_t, GameData_21a6120);
    v31 = v59_.v61;
    v30 = (float32x4_t*)v59_.v62;
    if ((float32x4_t*)v59_.v62 != v59_.v61) {
      v32 = v59_.v61;
      do {
        v33 = v32[1];
        v32 += 4;
        v29 = vaddq_f32(v29, v33);
      } while (v32 != (float32x4_t*)v59_.v62);
      v29 = vmulq_n_f32(
          v29,
          0x1.0000000000000p+0f /
              (float)(unsigned __int64)((v59_.v62 - (__int64)v59_.v61) >> 6));
      LANES128(v29).n128_u32[3] = 0;
    }
    v34 = vsubq_f32(v29, v59_.v65);
    v35 = vmulq_f32(v34, v34);
    LANES128(v35).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v35, v35, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
            .n64_u64[0];
    v36 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
                .n64_f32[0] <= 0x0.0p+0f ||
        v59_.v62 == (_QWORD)v59_.v61;
    if (!v36) {
      do {
        v31[1] = vsubq_f32(v31[1], v34);
        v31 += 4;
      } while (v31 != v30);
    }
    LANES128(v37).n128_u64[0] = LANES128(v29).n128_u64[0];
    LANES128(v37).n128_u64[1] = LANES128(v29).n128_u32[2];
    v59_.v65 = v37;
    MapPanelTargetSelect_f176c0((__int64**)(a1 + 16), (__int64)v59_.v59);
    v59_.v59[0] = v20;
    if (v59_.v63 != 0) {
      v59_.v64 = v59_.v63;
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v59_.v63);
    }
    v39 = (__int64)v59_.v61;
    if (v59_.v61 != nullptr) {
      if (v59_.v61 == (float32x4_t*)v59_.v62) {
        goto LABEL_35;
      }
      v40 = (void (***)(_QWORD))(v59_.v62 - 64);
      v41 = (void (***)(_QWORD))(v59_.v62 - 64);
      do {
        v42 = *v41;
        v41 -= 8;
        (*v42)(v40);
        v36 = v40 == (void (***)(_QWORD))v39;
        v40 = v41;
      } while (!v36);
      v59_.v62 = v39;
      v39 = (__int64)v59_.v61;
      if (v59_.v61 != nullptr) {
      LABEL_35:
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v39);
      }
    }
  LABEL_38:
    v18 += 4;
  } while (v18 != v19);
  v17 = v67_.v67;
LABEL_73:
  if (v17 != 0) {
    v67_.v68 = v17;
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v17);
  }
LABEL_77:
  *(_BYTE*)(a1 + 8) = 0;
LABEL_78:
  v47 = *(float32x4_t**)(a1 + 16);
  v45 = (__int64**)(a1 + 16);
  v46 = v47;
  if (v47 != (float32x4_t*)(v45 + 1)) {
    v48 = game_script_hub_g_frame_counter_ptr[0];
    do {
      v50 = LANES128(v46[17]).n128_f32[2];
      v51 = (float)(*(float*)(*(_QWORD*)v48 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v50 <= 0x0.0p+0f) {
        if (LANES128(v46[17]).n128_u8[0] != 0) {
          v54 = 0x1.0000000000000p+0f;
        }
        else {
          v54 = 0x0.0p+0f;
        }
      }
      else {
        v52 = v51 / v50;
        v53 = LANES128(v46[17]).n128_f32[1];
        if (LANES128(v46[17]).n128_u8[0] != 0) {
          v54 = fminf(fmaxf(v52 + v53, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v54 = fminf(fmaxf(v53 - v52, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v46[17]).n128_f32[1] = v54;
      v55 = LANES128(v46[3]).n128_u64[0];
      LANES128(v46[15]).n128_f32[0] = v51 + LANES128(v46[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v55 + 40))(v46 + 3);
      GameRoutine_f54fe0(v46 + 3);
      if ((LANES128(v46[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v46[17]).n128_f32[1] > 0x0.0p+0f) {
        v56 = (__int64*)LANES128(*(v46)).n128_u64[1];
        if (v56 != nullptr) {
          do {
            v49 = v56;
            v56 = (__int64*)*v56;
          } while (v56 != nullptr);
        }
        else {
          do {
            v49 = (__int64*)LANES128(v46[1]).n128_u64[0];
            v36 = v46 == (float32x4_t*)*v49;
            v46 = (float32x4_t*)v49;
          } while (!v36);
        }
      }
      else {
        v49 = MapPanelTargetSelect_f17c00_alt1(v45, (__int64*)v46);
      }
      v46 = (float32x4_t*)v49;
    } while (v49 != (__int64*)(v45 + 1));
  }
}

void MapPanelTargetSelectSub_Unknown4(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  float32x4_t v3;
  __int64 v4;
  float32x4_t v5;
  float32x4_t v6;
  int8x16_t v7;
  int8x16_t v8;
  unsigned __int64 v9;
  __int64 v10;
  struct {
    _QWORD v11[2];
    __int64 v12;
    char gap24_[8];
    int8x16_t v13;
    int8x16_t v14;
    __int64 v15;
    int v16;
    char gap76_[4];
    __int64 v17;
    __int64 v18;
    __int16 v19;
    char gap98_[2];
    char v20;
    char gap101_[3];
    char v21;
  } v11_;

  v11_.v11[0] = 0;
  v11_.v11[1] = 0;
  v11_.v12 = 0;
  v11_.v16 = 0;
  v11_.v20 = 0;
  v11_.v21 = 0;
  v11_.v17 = 0;
  v11_.v18 = 0;
  v11_.v19 = 0;
  v11_.v15 = 0x700000000LL;
  GameRoutine_60a020_alt1((__int64)v11_.v11, "MapPanelDeployArtsSelect");
  v2 = *(unsigned int*)(a1 + 40);
  if ((unsigned int)v2 >= 0x2C) {
    String_60a250("array::at");
  }
  v3 = *(float32x4_t*)GameData_212c958;
  v4 = GameData_221fdd8 + 32 * v2;
  v6 = *(float32x4_t*)(v4 + 16);
  v5 = *(float32x4_t*)(v4 + 32);
  v11_.v15 = 0xE00000000LL;
  v11_.v16 = 1;
  v7 = vmulq_f32(v3, v5);
  v8 = vmulq_f32(v3, v6);
  LODWORD(v9) = LANES128_OF(vextq_s8(v7, v7, 8u)).n128_u32[0];
  LANES128(v6).n128_u32[0] = LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u32[0];
  HIDWORD(v9) = LANES64_OF(vdup_laneq_s32(v7, 3)).n64_u32[0];
  LANES128(v7).n128_u64[1] = v9;
  LANES128(v6).n128_u32[1] = LANES64_OF(vdup_laneq_s32(v8, 3)).n64_u32[0];
  LANES128(v8).n128_u64[1] = LANES128(v6).n128_u64[0];
  v11_.v13 = v8;
  v11_.v14 = v7;
  GameRoutine_f172c0_alt1(0x1.0000000000000p+0f, a1, (_QWORD*)(a1 + 16),
                          (__int64)v11_.v11);
  if ((v11_.v11[0] & 1) != 0 && v11_.v12 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v11_.v12);
  }
}

__int64 game_map_MapPanelTargetSelectSub_UpdateTarget_lambda0_Invoke(__int64 a1,
                                                                     __int64 a2)
{
  __int64 v2;
  int v4;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = *(unsigned __int16*)(a2 + 1);
  return GameRoutine_74e080(v2, &v4);
}

__int64 game_map_MapPanelTargetSelectSub_UpdateTarget_lambda1_Invoke(__int64 a1,
                                                                     _DWORD* a2,
                                                                     _DWORD* a3)
{
  char** v3;
  char* v4;
  char* v5;

  v3 = **(char****)(a1 + 8);
  v4 = *v3;
  v5 = v3[1];
  if (v4 == v5) {
    return 0;
  }
  while (*a2 != *v4 || *a3 != v4[1]) {
    v4 += 4;
    if (v4 == v5) {
      return 0;
    }
  }
  return 1;
}

#pragma GCC visibility pop
