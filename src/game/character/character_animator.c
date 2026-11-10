#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_BYTE* CharacterModel_1070320(__int64, unsigned int);
_QWORD* GameRoutine_d2b700(_QWORD* __return_ptr, _QWORD);
__int64 AnimLayerCtrlModule_ce3880(_QWORD, _QWORD, _QWORD, float);
__int64 CharacterModel_1070c00(_QWORD, _QWORD);
__int64 GameRoutine_1079580(_QWORD, _QWORD, float, float, float);
__int64 GameRoutine_108c760(_QWORD);
__int64 SkeletalBlendCallback_ce4b70(_QWORD, _QWORD, float);
__int64 SkeletalBlendCallback_ce4ec0(_QWORD, _QWORD, float);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
void* GameRoutine_1070860(__int64, int);
__int64 CharacterAnimator_Unknown8(__int64 a1);
__int64 CharacterAnimator_1079d90(__int64 a1, __int64 a2);
__int64 CharacterAnimator_1079e10(__int64 a1);
void CharacterAnimator_1079fe0(__int64 a1);
__int64 CharacterAnimator_107a6f0(__int64 a1);
__int64 CharacterAnimator_107a7e0(__int64 a1);
__int64 CharacterAnimator_107a870(__int64 a1, float a2);
float* CharacterAnimator_107a920(float* result, float a2);
bool CharacterAnimator_107aaa0(__int64 a1, int a2);
__attribute__((swiftcall)) void BlendLayer_d2b700(PSEUDO_X8, __int64*);
__int64* CharacterModel_1070c00_alt1(__int64,
                                     __int64) __asm__("CharacterModel_1070c00");
__int64
AnimLayerCtrlModule_ce3880_alt1(__int64, __int64, int,
                                double) __asm__("AnimLayerCtrlModule_ce3880");
__int64 game_108c8a0(int);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
bool game_108cc80(_BOOL8 result, int);
extern __int64 (*GameData_20069b0[])();
extern __int64 (*game_character_CharacterBaseModule_vtable)();
void* game_1070860(__int64, int);
void SkeletalBlendCallback_ce4b70_alt1(__int64, int, __n128) __asm__(
    "SkeletalBlendCallback_ce4b70");
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
float CharacterAnimator_1079580(__int64 a1, int a2, long double a3, float a4,
                                float a5);
float CharacterAnimator_107a200(__int64 a1, long double a2);
__n128 CharacterAnimator_Destructor(__int64 a1);

__int64 CharacterAnimator_Unknown8(__int64 a1)
{
  return GameRoutine_1079580(a1, 119788728, -1.0, -1.0, 1.0);
}

float CharacterAnimator_1079580(__int64 a1, int a2, long double a3, float a4,
                                float a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  _QWORD* v7;
  float v9;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  unsigned int v16;
  float v19;
  __int64 v20;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  long double v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _BYTE* v31;
  double v32;
  __int64 v33;
  __n128 v34;
  __n128 v35;
  __int64 v36;
  int* v37;
  int* v38;
  int v39;
  __int64 v40;
  __n128 v41;
  __int64 v42;
  int* v43;
  int* v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  float v49;
  void* v50;
  double v51;
  __n128 v52;
  __int64 v53;
  int* v54;
  int* v55;
  int v56;
  __int64 v57;
  char v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int8x16_t v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  struct {
    unsigned __int64 v68;
    int* v69;
  } v68_;

  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a2 == 0) {
    return 0x0.0p+0f;
  }
  v5 = *(_QWORD*)(a1 + 32);
  if (v5 == 0) {
    return 0x0.0p+0f;
  }
  v7 = *(_QWORD**)(a1 + 40);
  if (*(_QWORD*)(v5 + 8) == -1 || v7 == nullptr) {
    return 0x0.0p+0f;
  }
  v11 = v7[17];
  v9 = a4;
  if (v11 != 0) {
    v12 = 2;
    if (a2 > 105782306) {
      if (a2 <= 1257611789) {
        if (a2 == 105782307 || a2 == 119788728) {
          goto LABEL_31;
        }
        v13 = 1192222315;
        goto LABEL_20;
      }
      if (a2 == 1257611790 || a2 == 1669996436) {
        goto LABEL_31;
      }
      v14 = 2017201876;
    }
    else {
      if (a2 <= -574916403) {
        if (a2 != -1101902990 && a2 != -1054720718) {
          v13 = -589947500;
        LABEL_20:
          if (a2 != v13) {
            goto LABEL_30;
          }
        }
      LABEL_31:
        *(_DWORD*)(v11 + 128) = v12;
        goto LABEL_32;
      }
      if (a2 == -574916402) {
        goto LABEL_31;
      }
      if (a2 == 81174351) {
      LABEL_29:
        v12 = 1;
        goto LABEL_31;
      }
      v14 = 81174357;
    }
    if (a2 != v14) {
    LABEL_30:
      v12 = 0;
      goto LABEL_31;
    }
    goto LABEL_29;
  }
LABEL_32:
  v15 = *(_QWORD*)(a1 + 96);
  if (v15 == 0) {
    *(_DWORD*)(a1 + 124) = a2;
    return 0x0.0p+0f;
  }
  if (a2 == 119788728 && (v16 = *(_DWORD*)(a1 + 112)) != 0) {
    if (*(float*)&a3 == 0x0.0p+0f) {
      LODWORD(a3) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
    }
  }
  else {
    v16 = a2;
  }
  if (*(_DWORD*)(a1 + 120) == 1715476756 && v16 == -589947500 &&
      *(float*)&a3 < 0x0.0p+0f) {
    v19 = 0x1.0000000000000p+0f;
  }
  else {
    v19 = *(float*)&a3;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    if (v16 == 119788728) {
      v16 = -589947500;
    }
    else if (v16 == -574916402) {
      v16 = -1101902990;
    }
  }
  v20 = *(_QWORD*)(a1 + 40);
  v22 = *(_QWORD*)(v20 + 392);
  v23 = *(_QWORD*)(v20 + 400);
  if (v23 == 0) {
    v24 = CharacterModel_1070c00_alt1(*(_QWORD*)(v22 + 11608), v16),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v19 >= 0x0.0p+0f) {
      goto LABEL_59;
    }
    goto LABEL_56;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                            memory_order_relaxed);
  v24 = CharacterModel_1070c00_alt1(*(_QWORD*)(v22 + 11608), v16),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(__n128*)&v25 = std___1___shared_weak_count___release_weak(v23),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v19 >= 0x0.0p+0f) {
      goto LABEL_59;
    }
  LABEL_56:
    v19 = *(float*)v24;
    if (v9 >= 0x0.0p+0f) {
      goto LABEL_84;
    }
    goto LABEL_60;
  }
  if (v19 < 0x0.0p+0f) {
    goto LABEL_56;
  }
LABEL_59:
  if (v9 >= 0x0.0p+0f) {
    goto LABEL_84;
  }
LABEL_60:
  v26 = *(_DWORD*)(a1 + 120);
  v9 = 0x0.0p+0f;
  if (v26 < 0) {
    if (v26 > -1054720719) {
      if (v26 > -589947501) {
        if (v26 == -589947500) {
          goto LABEL_84;
        }
        v27 = -574916402;
      }
      else {
        if (v26 == -1054720718) {
          goto LABEL_84;
        }
        v27 = -1009115453;
      }
      goto LABEL_83;
    }
    if (v26 != -1689213573 && v26 != -1101902990) {
      if (v26 != -1080537169) {
        goto LABEL_141;
      }
      goto LABEL_74;
    }
  LABEL_84:
    v28 = v7[49];
    v29 = v7[50];
    if (v29 != 0) {
      goto LABEL_85;
    }
  LABEL_75:
    v30 = *(_QWORD*)(v28 + 11608);
    goto LABEL_87;
  }
  if (v26 <= 869686454) {
    if (v26 != 0 && v26 != 105782307) {
      v27 = 119788728;
      goto LABEL_83;
    }
    goto LABEL_84;
  }
  if (v26 <= 1257611789) {
    if (v26 != 869686455) {
      v27 = 1192222315;
      goto LABEL_83;
    }
  LABEL_74:
    v9 = *((float*)v24 + 7);
    v28 = v7[49];
    v29 = v7[50];
    if (v29 != 0) {
      goto LABEL_85;
    }
    goto LABEL_75;
  }
  if (v26 == 1257611790) {
    goto LABEL_84;
  }
  v27 = 1669996436;
LABEL_83:
  if (v26 == v27) {
    goto LABEL_84;
  }
LABEL_141:
  v9 = *((float*)v24 + 6);
  v28 = v7[49];
  v29 = v7[50];
  if (v29 == 0) {
    goto LABEL_75;
  }
LABEL_85:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                            memory_order_relaxed);
  v30 = *(_QWORD*)(v28 + 11608);
  if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v29 + 16LL))(v29, v25),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(v29),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
LABEL_87:
  v31 = CharacterModel_1070320(v30, v16),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v31 == nullptr) {
    return 0x0.0p+0f;
  }
  *(float*)&v32 = v19;
  v33 = (__int64)v31;
  AnimLayerCtrlModule_ce3880_alt1(v15, (__int64)v31, 1, v32),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  PSEUDO_LOW_LANE128(v34, n128_f32, v9 * 0x1.e000000000000p+5f);
  SkeletalBlendCallback_ce4b70_alt1(v15, 1, v34),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v36 = *(_QWORD*)(v15 + 32);
  if (*(_BYTE*)(v36 + 124) == 1) {
    BlendLayer_d2b700(
        (void*)((__int64*)&v68_.v68),
        (__int64*)(*(_QWORD*)(v36 + 96) + 56LL * *(int*)(v36 + 120))),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v37 = (int*)v68_.v68;
    v38 = v68_.v69;
    if ((int*)v68_.v68 != v68_.v69) {
      do {
        v39 = *v37++;
        *(float*)(*(_QWORD*)(*(_QWORD*)(v15 + 24) + 72LL) + 104LL * v39 + 8) =
            a5;
      } while (v37 != v38);
      v37 = (int*)v68_.v68;
    }
    if (v37 != nullptr) {
      v68_.v69 = v37;
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v40 = 56;
      }
      v35 = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v40),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  if (*(_BYTE*)(a1 + 157) == 1) {
    PSEUDO_LOW_LANE128(v35, n128_f32, v19);
    AnimLayerCtrlModule_ce3880_alt1(v15, v33, 0, LANES128(v35).n128_f64[0]),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    PSEUDO_LOW_LANE128(v41, n128_f32, v9 * 0x1.e000000000000p+5f);
    SkeletalBlendCallback_ce4b70_alt1(v15, 0, v41),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v42 = *(_QWORD*)(v15 + 32);
    if (*(_BYTE*)(v42 + 52) == 1) {
      BlendLayer_d2b700(
          (void*)((__int64*)&v68_.v68),
          (__int64*)(*(_QWORD*)(v42 + 24) + 56LL * *(int*)(v42 + 48))),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v43 = (int*)v68_.v68;
      v44 = v68_.v69;
      if ((int*)v68_.v68 != v68_.v69) {
        do {
          v45 = *v43++;
          *(float*)(*(_QWORD*)(*(_QWORD*)(v15 + 24) + 72LL) + 104LL * v45 + 8) =
              a5;
        } while (v43 != v44);
        v43 = (int*)v68_.v68;
      }
      if (v43 != nullptr) {
        v68_.v69 = v43;
        v46 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v46 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v46),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
  *(_DWORD*)(a1 + 116) = *(_DWORD*)(a1 + 120);
  *(_DWORD*)(a1 + 120) = v16;
  *(_DWORD*)(a1 + 124) = game_108c8a0(v16),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
  v47 = *(_QWORD*)(v15 + 24);
  if (*(float*)(v47 + 236) != 0x0.0p+0f) {
    *(_DWORD*)(v47 + 236) = *(_DWORD*)(a1 + 152);
  }
  v48 = *(_QWORD*)(a1 + 104);
  v49 = a5;
  if (v48 == 0) {
    goto LABEL_128;
  }
  v50 = game_1070860(v30, v16),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v50 != nullptr) {
    *(float*)&v51 = v19;
    AnimLayerCtrlModule_ce3880_alt1(v48, (__int64)v50, 1, v51),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    PSEUDO_LOW_LANE128(v52, n128_f32, v9 * 0x1.e000000000000p+5f);
    SkeletalBlendCallback_ce4b70_alt1(v48, 1, v52),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v53 = *(_QWORD*)(v48 + 32);
    if (*(_BYTE*)(v53 + 124) == 1) {
      BlendLayer_d2b700(
          (void*)((__int64*)&v68_.v68),
          (__int64*)(*(_QWORD*)(v53 + 96) + 56LL * *(int*)(v53 + 120))),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v54 = (int*)v68_.v68;
      v55 = v68_.v69;
      if ((int*)v68_.v68 != v68_.v69) {
        do {
          v56 = *v54++;
          *(float*)(*(_QWORD*)(*(_QWORD*)(v48 + 24) + 72LL) + 104LL * v56 + 8) =
              a5;
        } while (v54 != v55);
        v54 = (int*)v68_.v68;
      }
      if (v54 != nullptr) {
        v68_.v69 = v54;
        v57 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v57 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v57),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
  else if (v16 + 906281409 < 3 || v16 == -1152263229) {
    v58 = 0;
  LABEL_121:
    v59 = v7[56];
    v49 = a5;
    if (v59 != 0) {
      *(_BYTE*)(v59 + 289) = v58;
      v60 = v7[57];
      if (v60 != 0) {
        *(_BYTE*)(v60 + 289) = v58;
      }
      v61 = v7[58];
      if (v61 != 0) {
        *(_BYTE*)(v61 + 289) = v58;
      }
    }
    v62 = *(_QWORD*)(v48 + 24);
    if (*(float*)(v62 + 236) != 0x0.0p+0f) {
      *(_DWORD*)(v62 + 236) = *(_DWORD*)(a1 + 152);
    }
  LABEL_128:
    *(_DWORD*)(a1 + 152) = 1065353216;
    *(int32x2_t*)(a1 + 132) = vzip1_s32(
        *(int32x2_t*)(*(_QWORD*)(a1 + 8) + 304LL),
        COERCE_AS(
            int32x2_t,
            LANES128_OF(vextq_s8(*(int8x16_t*)(*(_QWORD*)(a1 + 8) + 304LL),
                                 *(int8x16_t*)(*(_QWORD*)(a1 + 8) + 304LL), 8u))
                .n128_u64[0]));
    v63 = *((int8x16_t*)v24 + 4);
    *(float*)(a1 + 148) = v49;
    *(_DWORD*)(a1 + 128) = 0;
    *(int32x2_t*)(a1 + 140) = vzip1_s32(
        COERCE_AS(int32x2_t, LANES128(v63).n128_u64[0]),
        COERCE_AS(int32x2_t, LANES128_OF(vextq_s8(v63, v63, 8u)).n128_u64[0]));
    if (v19 != 0x1.11098e0000000p-3f ||
        !game_108cc80(*(unsigned int*)(a1 + 116), *(_DWORD*)(a1 + 120))) {
      v68_.v68 = __PAIR64__(LODWORD(v19), v16);
      v64 = *(_QWORD*)(a1 + 56);
      v65 = *(_QWORD*)(a1 + 64);
      *(_BYTE*)(a1 + 80) = 1;
      while (v64 != v65) {
        if (*(_DWORD*)v64 != 0) {
          v66 = *(_QWORD*)(v64 + 16);
          if (v66 == 0 || *(_QWORD*)(v66 + 8) == -1) {
            goto LABEL_131;
          }
          v67 = *(_QWORD*)(v64 + 64);
          if (v67 == 0) {
            GameRoutine_60a310(),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          (*(void (**)(__int64, unsigned __int64*))(*(_QWORD*)v67 + 48LL))(
              v67, &v68_.v68),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          if ((*(_DWORD*)v64 & 0x80000000) != 0) {
          LABEL_131:
            *(_DWORD*)v64 = 0;
          }
        }
        v64 += 80;
      }
      *(_BYTE*)(a1 + 80) = 0;
    }
    return v9;
  }
  v58 = 1;
  goto LABEL_121;
}

__int64 CharacterAnimator_1079d90(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;

  v2 = *(_QWORD*)(a1 + 40);
  v3 = *(_QWORD*)(v2 + 392);
  v4 = *(_QWORD*)(v2 + 400);
  if (v4 == 0) {
    return CharacterModel_1070c00(*(_QWORD*)(v3 + 11608), a2);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  result = CharacterModel_1070c00(*(_QWORD*)(v3 + 11608), a2);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v6 = result;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    return v6;
  }
  return result;
}

__int64 CharacterAnimator_1079e10(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float* v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;

  v2 = GameRoutine_108c760(*(unsigned int*)(a1 + 120));
  if ((v2 & 1) != 0) {
    goto LABEL_28;
  }
  v3 = *(_QWORD*)(a1 + 96);
  if (v3 == 0) {
    goto LABEL_28;
  }
  v4 = *(_QWORD*)(v3 + 32);
  if (*(_BYTE*)(v4 + 124) != 1) {
    goto LABEL_28;
  }
  v5 = (__int64*)(*(_QWORD*)(v4 + 96) + 56LL * *(int*)(v4 + 120));
  v7 = *v5;
  v6 = v5[1];
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v7 != 0) {
    LODWORD(v8) = *(_DWORD*)(v7 + 108);
    if (v6 == 0) {
      goto LABEL_12;
    }
  }
  else {
    LODWORD(v8) = 0;
    if (v6 == 0) {
      goto LABEL_12;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
LABEL_12:
  if (v7 == 0) {
    if ((*(_BYTE*)(v4 + 124) & 1) == 0) {
      GameRoutine_8123d0(v2);
    }
    v8 = *(_QWORD*)(*(_QWORD*)(v4 + 96) + 56LL * *(int*)(v4 + 120) + 16);
    if ((v8 & 0x100000000LL) == 0) {
      goto LABEL_28;
    }
  }
  v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 24) + 72LL) + 104LL * (int)v8);
  if (v9 == 0) {
    goto LABEL_28;
  }
  v10 = *(float**)(v9 + 16);
  v11 = v10 != nullptr ? *v10 : 0.0f;
  v12 = *(_QWORD*)(a1 + 40);
  v13 = *(unsigned int*)(a1 + 120);
  v14 = *(_QWORD*)(v12 + 392);
  v15 = *(_QWORD*)(v12 + 400);
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
    v16 = CharacterModel_1070c00(*(_QWORD*)(v14 + 11608), v13);
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v17 = v16;
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
      v16 = v17;
    }
  }
  else {
    v16 = CharacterModel_1070c00(*(_QWORD*)(v14 + 11608), v13);
  }
  if ((float)(*(float*)(v16 + 32) * 60.0f) <= v11) {
    goto LABEL_28;
  }
  v18 = *(_QWORD*)(v9 + 16);
  if (v18 == 0) {
    if (v11 < 0.0f) {
      goto LABEL_26;
    }
  LABEL_28:
    v19 = 1;
    return v19 & 1;
  }
  if (*(float*)(v18 + 8) <= v11) {
    goto LABEL_28;
  }
LABEL_26:
  v19 = (v18 == 0) | *(_BYTE*)(v9 + 168);
  return v19 & 1;
}

void CharacterAnimator_1079fe0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float* v14;
  __int64 v15;
  _BYTE* v16;
  __int64 v17;
  void* v18;

  v1 = *(_QWORD*)(a1 + 40);
  v3 = *(_QWORD*)(v1 + 392);
  v4 = *(_QWORD*)(v1 + 400);
  if (v4 == 0) {
    v5 = *(_QWORD*)(v3 + 11608);
    v6 = *(_QWORD*)(a1 + 96);
    if (v6 != 0) {
      goto LABEL_5;
    }
  LABEL_12:
    v8 = 0.0f;
    goto LABEL_26;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v5 = *(_QWORD*)(v3 + 11608);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v6 = *(_QWORD*)(a1 + 96);
  if (v6 == 0) {
    goto LABEL_12;
  }
LABEL_5:
  v7 = *(_QWORD*)(v6 + 32);
  v8 = 0.0f;
  if (*(_BYTE*)(v7 + 124) == 1) {
    v9 = (__int64*)(*(_QWORD*)(v7 + 96) + 56LL * *(int*)(v7 + 120));
    v11 = *v9;
    v10 = v9[1];
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v11 != 0) {
      LODWORD(v12) = *(_DWORD*)(v11 + 108);
      if (v10 == 0) {
        goto LABEL_15;
      }
    }
    else {
      LODWORD(v12) = 0;
      if (v10 == 0) {
        goto LABEL_15;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
      if (v11 == 0) {
      LABEL_16:
        if ((*(_BYTE*)(v7 + 124) & 1) == 0) {
          GameRoutine_8123d0(a1);
        }
        v12 = *(_QWORD*)(*(_QWORD*)(v7 + 96) + 56LL * *(int*)(v7 + 120) + 16);
        if ((v12 & 0x100000000LL) == 0) {
          goto LABEL_23;
        }
      }
    LABEL_20:
      v13 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 24) + 72LL) + 104LL * (int)v12);
      if (v13 != 0) {
        v14 = *(float**)(v13 + 16);
        if (v14 != nullptr) {
          v8 = (float)(*v14 * 0.016667f) * 60.0f;
        }
      }
      goto LABEL_23;
    }
  LABEL_15:
    if (v11 == 0) {
      goto LABEL_16;
    }
    goto LABEL_20;
  }
LABEL_23:
  v15 = *(_QWORD*)(a1 + 96);
  if (v15 != 0) {
    v16 = CharacterModel_1070320(v5, *(_DWORD*)(a1 + 120));
    if (v16 != nullptr) {
      AnimLayerCtrlModule_ce3880(v15, v16, 1, 0.0f);
      SkeletalBlendCallback_ce4b70(v15, 1, v8);
    }
  }
LABEL_26:
  v17 = *(_QWORD*)(a1 + 104);
  if (v17 != 0) {
    v18 = GameRoutine_1070860(v5, *(_DWORD*)(a1 + 120));
    if (v18 != nullptr) {
      AnimLayerCtrlModule_ce3880(v17, v18, 1, 0.0f);
      SkeletalBlendCallback_ce4b70(v17, 1, v8);
    }
  }
}

float CharacterAnimator_107a200(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float* v9;

  v2 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)&a2 = 0;
  if (v2 == 0) {
    return *(float*)&a2;
  }
  v3 = *(_QWORD*)(v2 + 32);
  if (*(_BYTE*)(v3 + 124) != 1) {
    return *(float*)&a2;
  }
  v4 = (__int64*)(*(_QWORD*)(v3 + 96) + 56LL * *(int*)(v3 + 120));
  v6 = *v4;
  v5 = v4[1];
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v6 != 0) {
    LODWORD(v7) = *(_DWORD*)(v6 + 108);
    if (v5 == 0) {
    LABEL_10:
      if (v6 == 0) {
        goto LABEL_11;
      }
    LABEL_15:
      v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 24) + 72LL) + 104LL * (int)v7);
      if (v8 != 0) {
        v9 = *(float**)(v8 + 16);
        if (v9 != nullptr) {
          *(float*)&a2 = *v9 * 0x1.1111120000000p-6f;
        }
      }
      return *(float*)&a2;
    }
  }
  else {
    LODWORD(v7) = 0;
    if (v5 == 0) {
      goto LABEL_10;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_10;
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v5 + 16LL))(v5, a2);
  std___1___shared_weak_count___release_weak(v5);
  LODWORD(a2) = 0;
  if (v6 != 0) {
    goto LABEL_15;
  }
LABEL_11:
  if ((*(_BYTE*)(v3 + 124) & 1) == 0) {
    GameRoutine_8123d0_alt1();
  }
  v7 = *(_QWORD*)(*(_QWORD*)(v3 + 96) + 56LL * *(int*)(v3 + 120) + 16);
  if ((v7 & 0x100000000LL) != 0) {
    goto LABEL_15;
  }
  return *(float*)&a2;
}

__int64 CharacterAnimator_107a6f0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 96);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(v1 + 32);
  if (*(_BYTE*)(v2 + 124) != 1) {
    return 0;
  }
  v3 = (__int64*)(*(_QWORD*)(v2 + 96) + 56LL * *(int*)(v2 + 120));
  v5 = *v3;
  v4 = v3[1];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v5 != 0) {
    LODWORD(v6) = *(_DWORD*)(v5 + 108);
    if (v4 == 0) {
    LABEL_10:
      if (v5 != 0) {
        return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 24) + 72LL) +
                          104LL * (int)v6);
      }
      goto LABEL_11;
    }
  }
  else {
    LODWORD(v6) = 0;
    if (v4 == 0) {
      goto LABEL_10;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_10;
  }
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  if (v5 != 0) {
    return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 24) + 72LL) + 104LL * (int)v6);
  }
LABEL_11:
  if ((*(_BYTE*)(v2 + 124) & 1) == 0) {
    GameRoutine_8123d0(a1);
  }
  v6 = *(_QWORD*)(*(_QWORD*)(v2 + 96) + 56LL * *(int*)(v2 + 120) + 16);
  if ((v6 & 0x100000000LL) == 0) {
    return 0;
  }
  return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 24) + 72LL) + 104LL * (int)v6);
}

__int64 CharacterAnimator_107a7e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 40);
  v2 = *(unsigned int*)(a1 + 120);
  v3 = *(_QWORD*)(v1 + 392);
  v4 = *(_QWORD*)(v1 + 400);
  if (v4 == 0) {
    return CharacterModel_1070c00(*(_QWORD*)(v3 + 11608), v2);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  result = CharacterModel_1070c00(*(_QWORD*)(v3 + 11608), v2);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v6 = result;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    return v6;
  }
  return result;
}

__int64 CharacterAnimator_107a870(__int64 a1, float a2)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 96);
  if (v2 != 0) {
    SkeletalBlendCallback_ce4ec0(*(_QWORD*)(a1 + 96), 1, a2 * 60.0);
    if (*(_BYTE*)(a1 + 157) == 1) {
      SkeletalBlendCallback_ce4ec0(v2, 0, a2 * 60.0);
    }
  }
  result = *(_QWORD*)(a1 + 104);
  if (result != 0) {
    return SkeletalBlendCallback_ce4ec0(result, 1, a2 * 60.0);
  }
  return result;
}

float* CharacterAnimator_107a920(float* result, float a2)
{
  __int64 v2;
  float* v4;
  __int64 v5;
  long double v6;
  int* v7;
  int* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  int* v14;
  int* v15;
  int v16;
  __int64 v17;
  int* v18;
  int* v19;

  v2 = *((_QWORD*)result + 12);
  v4 = result;
  if (v2 != 0) {
    v5 = *(_QWORD*)(v2 + 32);
    if (*(_BYTE*)(v5 + 124) == 1) {
      result = (float*)GameRoutine_d2b700(&v18, *(_QWORD*)(v5 + 96) +
                                                    56LL * *(int*)(v5 + 120));
      v7 = v18;
      v8 = v19;
      if (v18 != v19) {
        do {
          v9 = *v7++;
          *(float*)(*(_QWORD*)(*(_QWORD*)(v2 + 24) + 72LL) + 104LL * v9 + 8) =
              a2;
        } while (v7 != v8);
        v7 = v18;
      }
      if (v7 != nullptr) {
        v19 = v7;
        v10 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v10 = 56;
        }
        result = (float*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v6);
      }
    }
  }
  v11 = *((_QWORD*)v4 + 13);
  if (v11 != 0) {
    v12 = *(_QWORD*)(v11 + 32);
    if (*(_BYTE*)(v12 + 124) == 1) {
      result = (float*)GameRoutine_d2b700(&v18, *(_QWORD*)(v12 + 96) +
                                                    56LL * *(int*)(v12 + 120));
      v14 = v18;
      v15 = v19;
      if (v18 != v19) {
        do {
          v16 = *v14++;
          *(float*)(*(_QWORD*)(*(_QWORD*)(v11 + 24) + 72LL) + 104LL * v16 + 8) =
              a2;
        } while (v14 != v15);
        v14 = v18;
      }
      if (v14 != nullptr) {
        v19 = v14;
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        result = (float*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v13);
      }
    }
  }
  v4[37] = a2;
  return result;
}

bool CharacterAnimator_107aaa0(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  unsigned __int64 v9;
  __int64** v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v15;

  v2 = *(_QWORD*)(a1 + 40);
  v4 = *(_QWORD*)(v2 + 392);
  v5 = *(_QWORD*)(v2 + 400);
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    v6 = *(_QWORD*)(v4 + 11608);
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  }
  else {
    v6 = *(_QWORD*)(v4 + 11608);
  }
  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v8 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v9 = GameData_22356f8 <= (unsigned __int64)a2
               ? a2 % (unsigned __int64)GameData_22356f8
               : a2;
    }
    else {
      v9 = v8 & a2;
    }
    v10 = *(__int64***)(GameData_22356f0 + 8 * v9);
    if (v10 != nullptr) {
      v11 = *v10;
      if (*v10 != nullptr) {
        v12 = 639;
        if ((GameData_22356f8 & v8) == 0) {
          while (1) {
            v15 = v11[1];
            if (v15 == a2) {
              if (*((_DWORD*)v11 + 4) == a2) {
                goto LABEL_32;
              }
            }
            else if ((v15 & v8) != v9) {
              return *(_QWORD*)(v6 + 8 * v12) != 0;
            }
            v11 = (__int64*)*v11;
            if (v11 == nullptr) {
              return *(_QWORD*)(v6 + 8 * v12) != 0;
            }
          }
        }
        while (1) {
          v13 = v11[1];
          if (v13 == a2) {
            if (*((_DWORD*)v11 + 4) == a2) {
            LABEL_32:
              v12 = *((int*)v11 + 5);
              return *(_QWORD*)(v6 + 8 * v12) != 0;
            }
          }
          else {
            if (v13 >= GameData_22356f8) {
              v13 %= (unsigned __int64)GameData_22356f8;
            }
            if (v13 != v9) {
              return *(_QWORD*)(v6 + 8 * v12) != 0;
            }
          }
          v11 = (__int64*)*v11;
          if (v11 == nullptr) {
            return *(_QWORD*)(v6 + 8 * v12) != 0;
          }
        }
      }
    }
  }
  v12 = 639;
  return *(_QWORD*)(v6 + 8 * v12) != 0;
}

__n128 CharacterAnimator_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(a1 + 140) = 0;
  *(_BYTE*)(a1 + 156) = 0;
  *(_BYTE*)(a1 + 158) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_DWORD*)(a1 + 128) = 0;
  *(_QWORD*)a1 = GameData_20069b0;
  if (*(_BYTE*)(a1 + 157) == 1) {
    *(_BYTE*)(a1 + 157) = 0;
  }
  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_18;
  }
  v3 = *(_QWORD*)(a1 + 64);
  if (v2 == v3) {
  LABEL_15:
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
    goto LABEL_18;
  }
  do {
    v4 = *(_QWORD**)(v3 - 16);
    if ((_QWORD*)(v3 - 48) == v4) {
      v5 = 32;
    }
    else {
      if (v4 == nullptr) {
        goto LABEL_12;
      }
      v5 = 40;
    }
    (*(void (**)(__int64))(*v4 + v5))((__int64)v4),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_12:
    v7 = *(_QWORD*)(v3 - 64);
    if (v7 != 0) {
      result = std___1___shared_weak_count___release_weak(v7);
    }
    v3 -= 80;
  } while (v3 != v2);
  v8 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 64) = v2;
  if (v8 != 0) {
    goto LABEL_15;
  }
LABEL_18:
  v10 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = &game_character_CharacterBaseModule_vtable;
  if (v10 != 0) {
    return std___1___shared_weak_count___release_weak(v10);
  }
  return result;
}

#pragma GCC visibility pop
