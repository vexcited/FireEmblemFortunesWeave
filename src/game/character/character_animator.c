#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* CharacterModel_1070320(__int64, unsigned int);
__attribute__((swiftcall)) void GameRoutine_d2b700(PSEUDO_X8, _QWORD);
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
float*
CharacterAnimator_107a920_alt1(float* result,
                               float a2) __asm__("CharacterAnimator_107a920");
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
__n128 CharacterAnimator_Destructor_alt1(__int64 a1) __asm__(
    "CharacterAnimator_Destructor");
__attribute__((swiftcall)) void
BlendLayer_d2b700_alt1(PSEUDO_X8, _QWORD* result) __asm__("BlendLayer_d2b700");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CharacterAnimator_107a920(__int64 a1, float a2);
_BYTE* GameHr_1070320(__int64, unsigned int);
__int64
AnimLayerCtrlModule_ce3880_alt2(__int64, __int64,
                                int) __asm__("AnimLayerCtrlModule_ce3880");
extern __int64 (*CharacterAnimator_Destructor_ptr[])();
void SkeletalBlendCallback_ce4b70_alt2(__int64, int, long double) __asm__(
    "SkeletalBlendCallback_ce4b70");
__int64 CharacterAnimator_Destructor(__int64 a1);
extern __int64 (*eft_ClampCurve_ptr)();
float CharacterAnimator_1079580_alt1(__int64, int, float, float, float) __asm__(
    "CharacterAnimator_1079580");
void CharacterAnimator_Unknown5(__int64 a1);

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
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _BYTE* v30;
  __int64 v31;
  long double v32;
  __int64 v33;
  int* v34;
  int* v35;
  int v36;
  __int64 v37;
  long double v38;
  __int64 v39;
  int* v40;
  int* v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  float v46;
  void* v47;
  long double v48;
  __int64 v49;
  int* v50;
  int* v51;
  int v52;
  __int64 v53;
  char v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  int8x16_t v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  struct {
    unsigned __int64 v64;
    int* v65;
  } v64_;

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
    v24 = CharacterModel_1070c00_alt1(*(_QWORD*)(v22 + 11608), v16);
    if (v19 >= 0x0.0p+0f) {
      goto LABEL_59;
    }
    goto LABEL_56;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                            memory_order_relaxed);
  v24 = CharacterModel_1070c00_alt1(*(_QWORD*)(v22 + 11608), v16);
  if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak_alt1(v23);
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
  v25 = *(_DWORD*)(a1 + 120);
  v9 = 0x0.0p+0f;
  if (v25 < 0) {
    if (v25 > -1054720719) {
      if (v25 > -589947501) {
        if (v25 == -589947500) {
          goto LABEL_84;
        }
        v26 = -574916402;
      }
      else {
        if (v25 == -1054720718) {
          goto LABEL_84;
        }
        v26 = -1009115453;
      }
      goto LABEL_83;
    }
    if (v25 != -1689213573 && v25 != -1101902990) {
      if (v25 != -1080537169) {
        goto LABEL_141;
      }
      goto LABEL_74;
    }
  LABEL_84:
    v27 = v7[49];
    v28 = v7[50];
    if (v28 != 0) {
      goto LABEL_85;
    }
  LABEL_75:
    v29 = *(_QWORD*)(v27 + 11608);
    goto LABEL_87;
  }
  if (v25 <= 869686454) {
    if (v25 != 0 && v25 != 105782307) {
      v26 = 119788728;
      goto LABEL_83;
    }
    goto LABEL_84;
  }
  if (v25 <= 1257611789) {
    if (v25 != 869686455) {
      v26 = 1192222315;
      goto LABEL_83;
    }
  LABEL_74:
    v9 = *((float*)v24 + 7);
    v27 = v7[49];
    v28 = v7[50];
    if (v28 != 0) {
      goto LABEL_85;
    }
    goto LABEL_75;
  }
  if (v25 == 1257611790) {
    goto LABEL_84;
  }
  v26 = 1669996436;
LABEL_83:
  if (v25 == v26) {
    goto LABEL_84;
  }
LABEL_141:
  v9 = *((float*)v24 + 6);
  v27 = v7[49];
  v28 = v7[50];
  if (v28 == 0) {
    goto LABEL_75;
  }
LABEL_85:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                            memory_order_relaxed);
  v29 = *(_QWORD*)(v27 + 11608);
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak_alt1(v28);
  }
LABEL_87:
  v30 = GameHr_1070320(v29, v16);
  if (v30 == nullptr) {
    return 0x0.0p+0f;
  }
  v31 = (__int64)v30;
  AnimLayerCtrlModule_ce3880_alt2(v15, (__int64)v30, 1);
  *(float*)&v32 = v9 * 0x1.e000000000000p+5f;
  SkeletalBlendCallback_ce4b70_alt2(v15, 1, v32);
  v33 = *(_QWORD*)(v15 + 32);
  if (*(_BYTE*)(v33 + 124) == 1) {
    BlendLayer_d2b700_alt1(
        (void*)(&v64_.v64),
        (_QWORD*)(*(_QWORD*)(v33 + 96) + 56LL * *(int*)(v33 + 120)));
    v34 = (int*)v64_.v64;
    v35 = v64_.v65;
    if ((int*)v64_.v64 != v64_.v65) {
      do {
        v36 = *v34++;
        *(float*)(*(_QWORD*)(*(_QWORD*)(v15 + 24) + 72LL) + 104LL * v36 + 8) =
            a5;
      } while (v34 != v35);
      v34 = (int*)v64_.v64;
    }
    if (v34 != nullptr) {
      v64_.v65 = v34;
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, (__int64)v34);
    }
  }
  if (*(_BYTE*)(a1 + 157) == 1) {
    AnimLayerCtrlModule_ce3880_alt2(v15, v31, 0);
    *(float*)&v38 = v9 * 0x1.e000000000000p+5f;
    SkeletalBlendCallback_ce4b70_alt2(v15, 0, v38);
    v39 = *(_QWORD*)(v15 + 32);
    if (*(_BYTE*)(v39 + 52) == 1) {
      BlendLayer_d2b700_alt1(
          (void*)(&v64_.v64),
          (_QWORD*)(*(_QWORD*)(v39 + 24) + 56LL * *(int*)(v39 + 48)));
      v40 = (int*)v64_.v64;
      v41 = v64_.v65;
      if ((int*)v64_.v64 != v64_.v65) {
        do {
          v42 = *v40++;
          *(float*)(*(_QWORD*)(*(_QWORD*)(v15 + 24) + 72LL) + 104LL * v42 + 8) =
              a5;
        } while (v40 != v41);
        v40 = (int*)v64_.v64;
      }
      if (v40 != nullptr) {
        v64_.v65 = v40;
        v43 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v43 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, (__int64)v40);
      }
    }
  }
  *(_DWORD*)(a1 + 116) = *(_DWORD*)(a1 + 120);
  *(_DWORD*)(a1 + 120) = v16;
  *(_DWORD*)(a1 + 124) = game_108c8a0(v16);
  v44 = *(_QWORD*)(v15 + 24);
  if (*(float*)(v44 + 236) != 0x0.0p+0f) {
    *(_DWORD*)(v44 + 236) = *(_DWORD*)(a1 + 152);
  }
  v45 = *(_QWORD*)(a1 + 104);
  v46 = a5;
  if (v45 == 0) {
    goto LABEL_128;
  }
  v47 = game_1070860(v29, v16);
  if (v47 != nullptr) {
    AnimLayerCtrlModule_ce3880_alt2(v45, (__int64)v47, 1);
    *(float*)&v48 = v9 * 0x1.e000000000000p+5f;
    SkeletalBlendCallback_ce4b70_alt2(v45, 1, v48);
    v49 = *(_QWORD*)(v45 + 32);
    if (*(_BYTE*)(v49 + 124) == 1) {
      BlendLayer_d2b700_alt1(
          (void*)(&v64_.v64),
          (_QWORD*)(*(_QWORD*)(v49 + 96) + 56LL * *(int*)(v49 + 120)));
      v50 = (int*)v64_.v64;
      v51 = v64_.v65;
      if ((int*)v64_.v64 != v64_.v65) {
        do {
          v52 = *v50++;
          *(float*)(*(_QWORD*)(*(_QWORD*)(v45 + 24) + 72LL) + 104LL * v52 + 8) =
              a5;
        } while (v50 != v51);
        v50 = (int*)v64_.v64;
      }
      if (v50 != nullptr) {
        v64_.v65 = v50;
        v53 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v53 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, (__int64)v50);
      }
    }
  }
  else if (v16 + 906281409 < 3 || v16 == -1152263229) {
    v54 = 0;
  LABEL_121:
    v55 = v7[56];
    v46 = a5;
    if (v55 != 0) {
      *(_BYTE*)(v55 + 289) = v54;
      v56 = v7[57];
      if (v56 != 0) {
        *(_BYTE*)(v56 + 289) = v54;
      }
      v57 = v7[58];
      if (v57 != 0) {
        *(_BYTE*)(v57 + 289) = v54;
      }
    }
    v58 = *(_QWORD*)(v45 + 24);
    if (*(float*)(v58 + 236) != 0x0.0p+0f) {
      *(_DWORD*)(v58 + 236) = *(_DWORD*)(a1 + 152);
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
    v59 = *((int8x16_t*)v24 + 4);
    *(float*)(a1 + 148) = v46;
    *(_DWORD*)(a1 + 128) = 0;
    *(int32x2_t*)(a1 + 140) = vzip1_s32(
        COERCE_AS(int32x2_t, LANES128(v59).n128_u64[0]),
        COERCE_AS(int32x2_t, LANES128_OF(vextq_s8(v59, v59, 8u)).n128_u64[0]));
    if (v19 != 0x1.11098e0000000p-3f ||
        !game_108cc80(*(unsigned int*)(a1 + 116), *(_DWORD*)(a1 + 120))) {
      v64_.v64 = __PAIR64__(LODWORD(v19), v16);
      v60 = *(_QWORD*)(a1 + 56);
      v61 = *(_QWORD*)(a1 + 64);
      *(_BYTE*)(a1 + 80) = 1;
      while (v60 != v61) {
        if (*(_DWORD*)v60 != 0) {
          v62 = *(_QWORD*)(v60 + 16);
          if (v62 == 0 || *(_QWORD*)(v62 + 8) == -1) {
            goto LABEL_131;
          }
          v63 = *(_QWORD*)(v60 + 64);
          if (v63 == 0) {
            GameRoutine_60a310();
          }
          (*(void (**)(__int64, unsigned __int64*))(*(_QWORD*)v63 + 48LL))(
              v63, &v64_.v64);
          if ((*(_DWORD*)v60 & 0x80000000) != 0) {
          LABEL_131:
            *(_DWORD*)v60 = 0;
          }
        }
        v60 += 80;
      }
      *(_BYTE*)(a1 + 80) = 0;
    }
    return v9;
  }
  v54 = 1;
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

void CharacterAnimator_Unknown5(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  float* v25;
  float v26;
  float v27;
  _BYTE* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int* v35;
  int* v36;
  int v37;
  __int64 v38;
  struct {
    int* v39;
    int* v40;
  } v39_;

  if (*(_DWORD*)(a1 + 124) == 0) {
    return;
  }
  v1 = *(_QWORD*)(a1 + 96);
  if (v1 == 0) {
    return;
  }
  v2 = *(_QWORD*)(v1 + 32);
  if (*(_BYTE*)(v2 + 124) != 1) {
    return;
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
      goto LABEL_12;
    }
  }
  else {
    LODWORD(v6) = 0;
    if (v4 == 0) {
      goto LABEL_12;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v7 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt1(v4);
    a1 = v7;
  }
LABEL_12:
  if (v5 != 0) {
    goto LABEL_58;
  }
  if ((*(_BYTE*)(v2 + 124) & 1) == 0) {
    GameRoutine_8123d0_alt1();
  }
  v6 = *(_QWORD*)(*(_QWORD*)(v2 + 96) + 56LL * *(int*)(v2 + 120) + 16);
  if ((v6 & 0x100000000LL) != 0) {
  LABEL_58:
    v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 24) + 72LL) + 104LL * (int)v6);
    if (v8 != 0) {
      v10 = *(_DWORD*)(a1 + 120);
      v9 = *(_DWORD*)(a1 + 124);
      v11 = a1;
      v12 = game_108cc80(v10, v9);
      v13 = *(_QWORD*)(v8 + 16);
      if (v12) {
        v14 = v11;
        if (v13 == 0 || *(float*)v13 >= *(float*)(v13 + 8)) {
          if (*(_DWORD*)(v11 + 128) != 0) {
            if (*(_BYTE*)(v11 + 157) == 0 || (*(_BYTE*)(v11 + 156) & 1) == 0) {
              goto LABEL_53;
            }
            v15 = *(_QWORD*)(v11 + 40);
            v16 = *(_QWORD*)(v15 + 392);
            v17 = *(_QWORD*)(v15 + 400);
            if (v17 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                        memory_order_relaxed);
              v18 = *(_QWORD*)(v16 + 11608);
              if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v19 = v18;
                (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
                std___1___shared_weak_count___release_weak_alt1(v17);
                v18 = v19;
              }
            }
            else {
              v18 = *(_QWORD*)(v16 + 11608);
            }
            v28 = GameHr_1070320(v18, v9);
            v14 = v11;
            if (v28 == nullptr) {
              goto LABEL_53;
            }
            v29 = *(_QWORD*)(v11 + 40);
            v30 = (__int64)v28;
            v31 = *(_QWORD*)(v29 + 392);
            v32 = *(_QWORD*)(v29 + 400);
            if (v32 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                                        memory_order_relaxed);
              CharacterModel_1070c00_alt1(*(_QWORD*)(v31 + 11608), v9);
              if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
                std___1___shared_weak_count___release_weak_alt1(v32);
              }
            }
            else {
              CharacterModel_1070c00_alt1(*(_QWORD*)(v31 + 11608), v9);
            }
            v33 = *(_QWORD*)(v11 + 96);
            AnimLayerCtrlModule_ce3880_alt2(v33, v30, 1);
            v34 = *(_QWORD*)(v33 + 32);
            if (*(_BYTE*)(v34 + 124) == 1) {
              BlendLayer_d2b700(
                  (void*)((__int64*)&v39_.v39),
                  (__int64*)(*(_QWORD*)(v34 + 96) + 56LL * *(int*)(v34 + 120)));
              v35 = v39_.v39;
              v36 = v39_.v40;
              if (v39_.v39 != v39_.v40) {
                do {
                  v37 = *v35++;
                  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v33 + 24) + 72LL) +
                             104LL * v37 + 8) = 1065353216;
                } while (v35 != v36);
                v35 = v39_.v39;
              }
              if (v35 != nullptr) {
                v39_.v40 = v35;
                v38 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v38 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, (__int64)v35);
              }
            }
          }
          else {
            CharacterAnimator_1079580_alt1(v11, v9, 0x1.11098e0000000p-3f,
                                           0x0.0p+0f, *(float*)(v11 + 148));
          }
          v14 = v11;
        LABEL_53:
          *(_DWORD*)(v14 + 124) = 0;
        }
      }
      else if (v13 != 0 && v10 != v9 &&
               *(__int64 (**)(void))(v13 + 16) == eft_ClampCurve_ptr) {
        v20 = *(_QWORD*)(v11 + 40);
        v21 = *(_QWORD*)(v20 + 392);
        v22 = *(_QWORD*)(v20 + 400);
        if (v22 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                    memory_order_relaxed);
          v23 = CharacterModel_1070c00_alt1(*(_QWORD*)(v21 + 11608), v9);
          if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v24 = v23;
            (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
            std___1___shared_weak_count___release_weak_alt1(v22);
            v23 = v24;
          }
        }
        else {
          v23 = CharacterModel_1070c00_alt1(*(_QWORD*)(v21 + 11608), v9);
        }
        v25 = *(float**)(v8 + 16);
        if (v25 != nullptr) {
          v26 = *v25;
          v27 = v25[2];
        }
        else {
          v26 = 0x0.0p+0f;
          v27 = 0x0.0p+0f;
        }
        if ((float)((float)(*(float*)v23 * 0x1.e000000000000p+5f) + v26) >=
            v27) {
          CharacterAnimator_1079580_alt1(
              v11, *(_DWORD*)(v11 + 124), -0x1.0000000000000p+0f,
              -0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
        }
      }
    }
  }
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

void CharacterAnimator_107a920(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v5;
  int* v6;
  int* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int* v12;
  int* v13;
  int v14;
  __int64 v15;
  struct {
    int* v16;
    int* v17;
  } v16_;

  v2 = *(_QWORD*)(a1 + 96);
  if (v2 != 0) {
    v5 = *(_QWORD*)(v2 + 32);
    if (*(_BYTE*)(v5 + 124) == 1) {
      BlendLayer_d2b700_alt1(
          (void*)(&v16_.v16),
          (_QWORD*)(*(_QWORD*)(v5 + 96) + 56LL * *(int*)(v5 + 120)));
      v6 = v16_.v16;
      v7 = v16_.v17;
      if (v16_.v16 != v16_.v17) {
        do {
          v8 = *v6++;
          *(float*)(*(_QWORD*)(*(_QWORD*)(v2 + 24) + 72LL) + 104LL * v8 + 8) =
              a2;
        } while (v6 != v7);
        v6 = v16_.v16;
      }
      if (v6 != nullptr) {
        v16_.v17 = v6;
        v9 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v6);
      }
    }
  }
  v10 = *(_QWORD*)(a1 + 104);
  if (v10 != 0) {
    v11 = *(_QWORD*)(v10 + 32);
    if (*(_BYTE*)(v11 + 124) == 1) {
      BlendLayer_d2b700_alt1(
          (void*)(&v16_.v16),
          (_QWORD*)(*(_QWORD*)(v11 + 96) + 56LL * *(int*)(v11 + 120)));
      v12 = v16_.v16;
      v13 = v16_.v17;
      if (v16_.v16 != v16_.v17) {
        do {
          v14 = *v12++;
          *(float*)(*(_QWORD*)(*(_QWORD*)(v10 + 24) + 72LL) + 104LL * v14 + 8) =
              a2;
        } while (v12 != v13);
        v12 = v16_.v16;
      }
      if (v12 != nullptr) {
        v16_.v17 = v12;
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, (__int64)v12);
      }
    }
  }
  *(float*)(a1 + 148) = a2;
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
      std___1___shared_weak_count___release_weak_alt1(v5);
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

__int64 CharacterAnimator_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;

  *(_QWORD*)(a1 + 140) = 0;
  *(_BYTE*)(a1 + 156) = 0;
  *(_BYTE*)(a1 + 158) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_DWORD*)(a1 + 128) = 0;
  *(_QWORD*)a1 = CharacterAnimator_Destructor_ptr;
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
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v2);
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
    (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
  LABEL_12:
    v6 = *(_QWORD*)(v3 - 64);
    if (v6 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
    v3 -= 80;
  } while (v3 != v2);
  v7 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 64) = v2;
  v2 = v7;
  if (v7 != 0) {
    goto LABEL_15;
  }
LABEL_18:
  result = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = &game_character_CharacterBaseModule_vtable;
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  return result;
}

#pragma GCC visibility pop
