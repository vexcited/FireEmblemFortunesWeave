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
__n128 MapPanelTargetSelectSub_Unknown4(__int64 a1);

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
  long double v10;
  __int64 v11;
  __int64 v12;
  int v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  __int64* v21;
  __int64 v22;
  unsigned __int8* v23;
  unsigned __int8* v24;
  unsigned int v25;
  unsigned int v26;
  __int16 v28;
  __int64 v29;
  float32x4_t v30;
  float32x4_t* v31;
  float32x4_t* v32;
  float32x4_t* v33;
  float32x4_t v34;
  float32x4_t v35;
  int8x16_t v36;
  bool v37;
  float32x4_t v38;
  long double v39;
  __int64 v40;
  float32x4_t* v41;
  float32x4_t* v42;
  float32x4_t* v43;
  void (**v44)(float32x4_t*, long double);
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  float32x4_t* v48;
  float32x4_t* v49;
  __int64 v50;
  float32x4_t* v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  unsigned __int64 v57;
  float32x4_t* v58;
  struct {
    _QWORD v59[4];
    _QWORD* v60;
  } v59_;
  struct {
    __int64 v61[4];
    __int64* v62;
    char gap88_[56];
    float32x4_t* v63;
    float32x4_t* v64;
    char gap160_[8];
    __int64 v65;
    __int64 v66;
    char gap184_[40];
    float32x4_t v67;
  } v61_;
  unsigned __int8** v68;
  struct {
    __int64 v69;
    __int64 v70;
    __int64 v71;
  } v69_;

  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_BYTE*)(a1 + 8) != 1) {
    goto LABEL_78;
  }
  v2 = *(_QWORD**)(a1 + 16);
  v3 = (_QWORD*)(a1 + 24);
  if (v2 != (_QWORD*)(a1 + 24)) {
    do {
      v12 = v2[6];
      *((_BYTE*)v2 + 272) = 0;
      if (((*(__int64 (**)(void*))(v12 + 48))(&v2[6]) & 1) != 0) {
        v13 = 1036831949;
      }
      else {
        v13 = 0;
        *((_DWORD*)v2 + 69) = 0;
      }
      v14 = (_QWORD*)v2[1];
      *((_DWORD*)v2 + 70) = v13;
      if (v14 != nullptr) {
        do {
          v15 = v14;
          v14 = (_QWORD*)*v14;
        } while (v14 != nullptr);
      }
      else {
        do {
          v15 = (_QWORD*)v2[2];
          v37 = v2 == (_QWORD*)*v15;
          v2 = v15;
        } while (!v37);
      }
      v2 = v15;
    } while (v15 != v3);
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
  v9 = std___1___shared_weak_count_lock(v8),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(__n128*)&v10 = std___1___shared_weak_count___release_weak(v6),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v9 != 0) {
    if (v7 != 0) {
      v11 = 254936;
    }
    else if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
      v11 = 8;
    }
    else {
      v11 = 127472;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v9 + 16LL))(v9, v10),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak(v9),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  else {
  LABEL_18:
    v11 =
        *(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0 ? 8LL : 127472LL;
  }
  v16 = DeployData_f25050(v5 + v11),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v16 > 2) {
    goto LABEL_77;
  }
  v69_.v70 = 0;
  v69_.v71 = 0;
  v69_.v69 = 0;
  v61_.v62 = v61_.v61;
  *(_DWORD*)(a1 + 40) = 2 * v16 + 31;
  v61_.v61[0] = (__int64)GameData_1ff2578;
  v61_.v61[1] = (__int64)&v69_.v69;
  game_map_DeployData_TargetEnumerateSubTarget(v5 + v11, v61_.v61, v16),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v61_.v62 == v61_.v61) {
    v17 = 32;
  }
  else {
    if (v61_.v62 == nullptr) {
      goto LABEL_32;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))(*v61_.v62 + v17))((__int64)v61_.v62),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_32:
  v18 = v69_.v69;
  v68 = (unsigned __int8**)&v69_.v69;
  v19 = *(char**)(*(_QWORD*)v4 + 248LL);
  v20 = *(char**)(*(_QWORD*)v4 + 256LL);
  if (v19 == v20 || v69_.v69 == v69_.v70) {
    goto LABEL_73;
  }
  v21 = GameData_212f8b0[0] + 2;
  do {
    v23 = *v68;
    v24 = v68[1];
    if (*v68 == v24) {
      goto LABEL_38;
    }
    v25 = *v19;
    v26 = v19[1];
    while (*v23 != (unsigned __int8)v25 || v23[1] != (unsigned __int8)v26) {
      v23 += 4;
      if (v23 == v24) {
        goto LABEL_38;
      }
    }
    game_map_f54910((__int64)v61_.v61),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v59_.v60 = v59_.v59;
    v59_.v59[0] = GameData_1ff25f8;
    v59_.v59[1] = &v68;
    v28 = MapDrawConst_fcbcc0(a1, 1, v25, v26, (__int64)v59_.v59, 1),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v59_.v60 == v59_.v59) {
      v29 = 32;
    }
    else {
      if (v59_.v60 == nullptr) {
        goto LABEL_49;
      }
      v29 = 40;
    }
    (*(void (**)(__int64))(*v59_.v60 + v29))((__int64)v59_.v60),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_49:
    GameRoutine_fcacb0(a1, (__int64)v61_.v61, 1, v25, v26, v28),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v45 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v45;
      __cxa_guard_release(&GameData_21a6130),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v30 = COERCE_AS(float32x4_t, GameData_21a6120);
    v32 = v61_.v63;
    v31 = v61_.v64;
    if (v61_.v64 != v61_.v63) {
      v33 = v61_.v63;
      do {
        v34 = v33[1];
        v33 += 4;
        v30 = vaddq_f32(v30, v34);
      } while (v33 != v61_.v64);
      v30 = vmulq_n_f32(v30, 0x1.0000000000000p+0f /
                                 (float)(unsigned __int64)(((char*)v61_.v64 -
                                                            (char*)v61_.v63) >>
                                                           6));
      LANES128(v30).n128_u32[3] = 0;
    }
    v35 = vsubq_f32(v30, v61_.v67);
    v36 = vmulq_f32(v35, v35);
    LANES128(v36).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
            .n64_u64[0];
    v37 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
                .n64_f32[0] <= 0x0.0p+0f ||
        v61_.v64 == v61_.v63;
    if (!v37) {
      do {
        v32[1] = vsubq_f32(v32[1], v35);
        v32 += 4;
      } while (v32 != v31);
    }
    LANES128(v38).n128_u64[0] = LANES128(v30).n128_u64[0];
    LANES128(v38).n128_u64[1] = LANES128(v30).n128_u32[2];
    v61_.v67 = v38;
    GameRoutine_f176c0((__int64***)(a1 + 16), (__int64)v61_.v61),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v61_.v61[0] = (__int64)v21;
    if (v61_.v65 != 0) {
      v61_.v66 = v61_.v65;
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v40 = 56;
      }
      *(__n128*)&v39 = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v40),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v41 = v61_.v63;
    if (v61_.v63 != nullptr) {
      if (v61_.v63 == v61_.v64) {
        goto LABEL_35;
      }
      v42 = v61_.v64 - 4;
      v43 = v61_.v64 - 4;
      do {
        v44 =
            (void (**)(float32x4_t*, long double))LANES128(*(v43)).n128_u64[0],
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v43 -= 4;
        (*v44)(v42, v39);
        v37 = v42 == v41;
        v42 = v43;
      } while (!v37);
      v61_.v64 = v41;
      if (v61_.v63 != nullptr) {
      LABEL_35:
        v22 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v22),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  LABEL_38:
    v19 += 4;
  } while (v19 != v20);
  v18 = v69_.v69;
LABEL_73:
  if (v18 != 0) {
    v69_.v70 = v18;
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v46),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
LABEL_77:
  *(_BYTE*)(a1 + 8) = 0;
LABEL_78:
  v49 = *(float32x4_t**)(a1 + 16);
  v47 = (_QWORD*)(a1 + 16);
  v48 = v49;
  if (v49 != (float32x4_t*)(v47 + 1)) {
    v50 = game_script_hub_g_frame_counter_ptr[0];
    do {
      v52 = LANES128(v48[17]).n128_f32[2];
      v53 = (float)(*(float*)(*(_QWORD*)v50 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v52 <= 0x0.0p+0f) {
        if (LANES128(v48[17]).n128_u8[0] != 0) {
          v56 = 0x1.0000000000000p+0f;
        }
        else {
          v56 = 0x0.0p+0f;
        }
      }
      else {
        v54 = v53 / v52;
        v55 = LANES128(v48[17]).n128_f32[1];
        if (LANES128(v48[17]).n128_u8[0] != 0) {
          v56 = fminf(fmaxf(v54 + v55, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v56 = fminf(fmaxf(v55 - v54, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v48[17]).n128_f32[1] = v56;
      v57 = LANES128(v48[3]).n128_u64[0];
      LANES128(v48[15]).n128_f32[0] = v53 + LANES128(v48[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v57 + 40))(v48 + 3),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
      GameRoutine_f54fe0(v48 + 3),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if ((LANES128(v48[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v48[17]).n128_f32[1] > 0x0.0p+0f) {
        v58 = (float32x4_t*)LANES128(*(v48)).n128_u64[1];
        if (v58 != nullptr) {
          do {
            v51 = v58;
            v58 = (float32x4_t*)LANES128(*(v58)).n128_u64[0];
          } while (v58 != nullptr);
        }
        else {
          do {
            v51 = (float32x4_t*)LANES128(v48[1]).n128_u64[0];
            v37 = v48 == (float32x4_t*)LANES128(*(v51)).n128_u64[0];
            v48 = v51;
          } while (!v37);
        }
      }
      else {
        v51 = (float32x4_t*)MapPanelTargetSelect_f17c00(v47, v48),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v48 = v51;
    } while (v51 != (float32x4_t*)(v47 + 1));
  }
}

__n128 MapPanelTargetSelectSub_Unknown4(__int64 a1)
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
  __n128 result;
  __int64 v11;
  struct {
    _QWORD v12[2];
    __int64 v13;
    char gap24_[8];
    int8x16_t v14;
    int8x16_t v15;
    __int64 v16;
    int v17;
    char gap76_[4];
    __int64 v18;
    __int64 v19;
    __int16 v20;
    char gap98_[2];
    char v21;
    char gap101_[3];
    char v22;
  } v12_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v12_.v12[0] = 0;
  v12_.v12[1] = 0;
  v12_.v13 = 0;
  v12_.v17 = 0;
  v12_.v21 = 0;
  v12_.v22 = 0;
  v12_.v18 = 0;
  v12_.v19 = 0;
  v12_.v20 = 0;
  v12_.v16 = 0x700000000LL;
  GameRoutine_60a020((__int64)v12_.v12, (__int64)"MapPanelDeployArtsSelect"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(unsigned int*)(a1 + 40);
  if ((unsigned int)v2 >= 0x2C) {
    String_60a250("array::at"),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v3 = *(float32x4_t*)GameData_212c958;
  v4 = GameData_221fdd8 + 32 * v2;
  v6 = *(float32x4_t*)(v4 + 16);
  v5 = *(float32x4_t*)(v4 + 32);
  v12_.v16 = 0xE00000000LL;
  v12_.v17 = 1;
  v7 = vmulq_f32(v3, v5);
  v8 = vmulq_f32(v3, v6);
  LODWORD(v9) = LANES128_OF(vextq_s8(v7, v7, 8u)).n128_u32[0];
  LANES128(v6).n128_u32[0] = LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u32[0];
  HIDWORD(v9) = LANES64_OF(vdup_laneq_s32(v7, 3)).n64_u32[0];
  LANES128(v7).n128_u64[1] = v9;
  LANES128(v6).n128_u32[1] = LANES64_OF(vdup_laneq_s32(v8, 3)).n64_u32[0];
  LANES128(v8).n128_u64[1] = LANES128(v6).n128_u64[0];
  v12_.v14 = v8;
  v12_.v15 = v7;
  GameRoutine_f172c0(0x1.0000000000000p+0f, a1, (_QWORD*)(a1 + 16),
                     (__int64)v12_.v12),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v12_.v12[0] & 1) != 0 && v12_.v13 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  return result;
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
