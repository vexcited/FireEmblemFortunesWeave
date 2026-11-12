#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_109d5e0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterAim_vtable[])();
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 CharacterAim_Destructor(__int64 a1);
__int64 CharacterAim_DeletingDestructor_alt1(__int64 a1) __asm__(
    "CharacterAim_DeletingDestructor");
extern __int64 (*GameData_2009208[])();
extern __int64 (*GameData_2009288[])();
extern __int64 (*GameData_2009308[])();
void GameRoutine_109d2e0(__int64, __int64, __int64, __int64, int);
float game_character_CharacterAim_Start(__int64 a1, _DWORD* a2, float a3);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned int* GameHr_109d5e0(unsigned int* result);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CharacterAim_DeletingDestructor(__int64 a1);
__attribute__((swiftcall)) void math_Quat_Slerp(PSEUDO_X8, float32x4_t* result,
                                                float32x4_t*, float);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
double cos(double);
double sin(double);
extern _DWORD* GameData_212d168;
extern _UNKNOWN* GameData_212c2f8;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN GameData_21a5680;
extern _UNKNOWN GameData_21a61b0;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a5670;
extern __int128 GameData_21a61a0;
extern __int64* GameData_212d448[9];
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float GameRoutine_618640(int, float result, float, float, float);
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
float32x4_t*
game_character_CharacterAim_Start_lambda0_Invoke(float32x4_t* result,
                                                 __int64 a2, float32x4_t** a3);
float32x4_t*
game_character_CharacterAim_Start_lambda1_Invoke(float32x4_t* result,
                                                 __int64 a2, __int64 a3);
float32x4_t*
game_character_CharacterAim_Start_lambda2_Invoke(float32x4_t* result,
                                                 __int64 a2, float32x4_t** a3);

__n128 CharacterAim_Destructor(__int64 a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_character_CharacterAim_vtable;
  GameRoutine_109d5e0(a1 + 56);
  *(_DWORD*)(a1 + 160) = -1082130432;
  GameRoutine_109d5e0(a1 + 56);
  v3 = *(_QWORD*)(a1 + 80);
  if (v3 != 0) {
    result = std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = &game_character_CharacterBaseModule_vtable;
  if (v4 != 0) {
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

void CharacterAim_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_character_CharacterAim_vtable;
  GameHr_109d5e0((unsigned int*)(a1 + 56));
  *(_DWORD*)(a1 + 160) = -1082130432;
  GameHr_109d5e0((unsigned int*)(a1 + 56));
  v2 = *(_QWORD*)(a1 + 80);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = &game_character_CharacterBaseModule_vtable;
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

float game_character_CharacterAim_Start(__int64 a1, _DWORD* a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 (**v10)();
  const char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  float v19;
  __int128 v20;
  float result;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;

  v3 = *(_QWORD*)(a1 + 32);
  if (v3 == 0) {
    v7 = (*(_QWORD*)0x198LL);
    goto LABEL_7;
  }
  if (*(_QWORD*)(v3 + 8) != -1) {
    v6 = *(_QWORD**)(a1 + 40);
    v7 = v6[51];
    if (a3 != -0x1.34a0000000000p+10f) {
      goto LABEL_15;
    }
  LABEL_7:
    v8 = a1 + 56;
    v9 = *(_DWORD*)(a1 + 56);
    *(_DWORD*)(a1 + 152) = 1056964608;
    *(_QWORD*)(a1 + 128) = 0x3F80000000000000LL;
    *(_DWORD*)(a1 + 160) = -1082130432;
    *(_QWORD*)(a1 + 136) = 0xB0000000BLL;
    *(_QWORD*)(a1 + 144) = 0xBF80000000000000LL;
    if (v9 != -1) {
      goto LABEL_31;
    }
    v10 = GameData_2009208;
    v11 = "Jnt_R_Arm1";
    goto LABEL_9;
  }
  v7 = (*(_QWORD*)0x198LL);
  if (a3 == -0x1.34a0000000000p+10f) {
    goto LABEL_7;
  }
  v6 = *(_QWORD**)(a1 + 40);
LABEL_15:
  v14 = v6[49];
  v13 = v6[50];
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v15 = v7;
      v16 = a3;
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
      a3 = v16;
      v7 = v15;
    }
  }
  if (*(_DWORD*)(v14 + 11784) == 33) {
    if (a3 >= 0x0.0p+0f) {
      *(float*)(a1 + 144) = a3;
      *(_QWORD*)(a1 + 148) = 0x3ECCCCCDBF800000LL;
      *(_QWORD*)(a1 + 128) = 0x3F66666600000000LL;
      *(_QWORD*)(a1 + 136) = 0x600000003LL;
      *(_DWORD*)(a1 + 160) = -1082130432;
    }
    v8 = a1 + 56;
    if (*(_DWORD*)(a1 + 56) != -1) {
      goto LABEL_31;
    }
    v10 = GameData_2009288;
    v11 = "Jnt_C_Head";
  }
  else {
    v17 = 0x1.0000000000000p-1f;
    if (a3 <= 0x1.0000000000000p-1f) {
      v17 = a3;
    }
    if (a3 >= 0x1.99999a0000000p-4f) {
      v18 = v17;
    }
    else {
      v18 = 0x1.99999a0000000p-4f;
    }
    if (v18 >= 0x0.0p+0f) {
      *(float*)(a1 + 144) = v18;
      *(_QWORD*)(a1 + 148) = 0x3F000000BF800000LL;
      *(_QWORD*)(a1 + 128) = 0x3F80000000000000LL;
      *(_QWORD*)(a1 + 136) = 0x1000000010LL;
      *(_DWORD*)(a1 + 160) = -1082130432;
    }
    v8 = a1 + 56;
    if (*(_DWORD*)(a1 + 56) != -1) {
      goto LABEL_31;
    }
    v10 = GameData_2009308;
    v11 = "Jnt_C_Spine1";
  }
LABEL_9:
  v22_.v22[0] = v10;
  v22_.v22[1] = a1;
  v22_.v23 = v22_.v22;
  GameRoutine_109d2e0(v8, v7, (__int64)v11, (__int64)v22_.v22, 0);
  if (v22_.v23 == v22_.v22) {
    v12 = 32;
  }
  else {
    if (v22_.v23 == nullptr) {
      goto LABEL_31;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v22_.v23 + v12))((__int64)v22_.v23);
LABEL_31:
  if (*(float*)(a1 + 128) != *(float*)(a1 + 132)) {
    v19 = *(float*)(a1 + 148);
    *(_DWORD*)(a1 + 160) = 0;
    *(_BYTE*)(a1 + 156) = v19 < 0x0.0p+0f;
  }
  *(_DWORD*)(a1 + 96) = *a2;
  *(_DWORD*)(a1 + 100) = a2[1];
  v20 = *(_OWORD*)(a1 + 96);
  *((_QWORD*)&v20 + 1) = (unsigned int)a2[2];
  *(_OWORD*)(a1 + 96) = v20;
  LODWORD(result) = v20;
  return result;
}

float32x4_t*

game_character_CharacterAim_Start_lambda0_Invoke(float32x4_t* result,
                                                 __int64 a2, float32x4_t** a3)
{
  float32x4_t* v3;
  float v4;
  float v5;
  float v6;
  bool v7;
  float v8;
  bool v9;
  float v10;
  float v11;
  unsigned __int64 v12;
  __int64 v13;
  float v14;
  float32x4_t** v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float32x4_t* v19;
  float32x4_t* v20;
  bool v21;
  float32x4_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  int8x16_t v27;
  int8x16_t v28;
  float v29;
  float v30;
  bool v31;
  bool v32;
  float32x4_t* v34;
  float32x4_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;
  double v39;
  double v40;
  double v41;
  unsigned int v42;
  float32x4_t v43;
  unsigned __int64 v44;
  unsigned int v45;
  float32x4_t v46;
  float32x4_t v47;
  int8x16_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  int8x16_t v55;
  float32x4_t v56;
  float32x4_t v57;
  int8x16_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  int8x16_t v62;
  float32x4_t v63;
  float32x4_t v64;
  int8x16_t v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  int v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  unsigned __int64 v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  __int64 v82;
  __int64 v83;
  int8x16_t v84;
  float32x4_t v85;
  float32x4_t v86;
  int8x16x2_t v87;
  int8x16x2_t v88;
  int8x16x2_t v89;

  v3 = (float32x4_t*)LANES128(*(result)).n128_u64[1];
  v4 = LANES128(v3[10]).n128_f32[0];
  if (v4 < 0x0.0p+0f ||
      ((v5 = LANES128(v3[9]).n128_f32[0],
        v6 = LANES128(v3[9]).n128_f32[2] +
             (float)(v5 + fmaxf(LANES128(v3[9]).n128_f32[1], 0x0.0p+0f)),
        v4 < v6)
           ? (v7 = *GameData_212d168 == 3)
           : (v7 = false),
       !v7)) {
    result = (float32x4_t*)GameHr_109d5e0(&LANES128(v3[3]).n128_u32[2]);
    LANES128(v3[10]).n128_u32[0] = -1082130432;
    return result;
  }
  v8 = (float)(*(float*)(*(_QWORD*)(LANES128(*(v3)).n128_u64[1] + 496) + 16LL) *
               0x1.0aef000000000p+4f) /
       0x1.f400000000000p+9f;
  if (LANES128(v3[9]).n128_u8[12] == 1) {
    if (v5 == 0x0.0p+0f) {
      v4 = v5 - v8;
    }
    else {
      v9 = v5 >= (float)(v4 + v8) || v4 > v5;
      v10 = v5 - v8;
      if (!v9) {
        v4 = v10;
      }
    }
  }
  v11 = v8 + v4;
  v12 = LANES128(v3[2]).n128_u64[1];
  if (v11 > v6) {
    v11 = -0x1.0000000000000p+0f;
  }
  LANES128(v3[10]).n128_f32[0] = v11;
  v13 = *(_QWORD*)(v12 + 128);
  v14 = *(float*)(v13 + 144);
  if (v14 <= 0x0.0p+0f) {
    goto LABEL_39;
  }
  v15 = a3;
  v16 = *GameData_212d448[0];
  if (*GameData_212d448[0] != 0) {
    result = (float32x4_t*)nn_os_ConvertToTimeSpan(
        *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 344LL));
    v17 = (__int64)result / 1000 - *(_QWORD*)(v16 + 136);
    v18 = 0x1.e848000000000p+19f;
  }
  else {
    result = (float32x4_t*)nn_os_ConvertToTimeSpan(
        *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 344LL));
    v17 = (__int64)result / 1000000;
    v18 = 0x1.f400000000000p+9f;
  }
  a3 = v15;
  if ((float)((float)v17 / v18) >= v14) {
  LABEL_39:
    v20 = *(float32x4_t**)(v13 + 128);
    v19 = *(float32x4_t**)(v13 + 136);
    v21 = v20 == nullptr || v19 == nullptr;
    if (v21 || *(_QWORD*)(v13 + 120) == 0) {
      goto LABEL_41;
    }
    v23 = v20[3];
    v24 = v19[3];
    v25 = vmulq_f32(v23, v23);
    v26 = vsubq_f32(v23, v24);
    v27 = vmulq_f32(v26, v26);
    LANES128(v25).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_u64[0];
    v31 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_f32[0] < 0x1.47ae160000000p-9f;
    v28 = vmulq_f32(v24, v24);
    LANES128(v27).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
            .n64_u64[0];
    LANES128(v28).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
            .n64_u64[0];
    LODWORD(v29) =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
            .n64_u32[0];
    LODWORD(v30) =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
            .n64_u32[0];
    v31 = v31 && v30 < 0x1.47ae160000000p-9f;
    v32 = v31;
    if (v32 || v29 < 0x1.47ae160000000p-9f) {
    LABEL_41:
      LANES128(*(a3[2])).n128_u32[0] &= 0x33FFFFFFu;
      v34 = *a3;
      v35 = vsubq_f32(v3[6], (*a3)[3]);
      v36 = vmulq_f32(v35, v35);
      LANES128(v36).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
              .n64_u64[0];
      LANES128(v36).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
              .n64_u64[0];
      LANES128(v36).n128_u64[1] = LANES128(v36).n128_u64[0];
      v37 = vrsqrteq_f32(v36);
      v38 = vmulq_f32(v37, vrsqrtsq_f32(v37, vmulq_f32(v36, v37)));
      v84 = vbicq_s8(
          vmulq_f32(v35,
                    vmulq_f32(v38, vrsqrtsq_f32(v38, vmulq_f32(v36, v38)))),
          vceqzq_f32(v36));
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a61b0) != 0) {
        v82 = *((_QWORD*)GameData_212c560 + 1);
        *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
        *((_QWORD*)&GameData_21a61a0 + 1) = v82;
        __cxa_guard_release((__int64)&GameData_21a61b0);
      }
      v39 = *(float*)(LANES128(*(v3)).n128_u64[1] + 324) * 0x1.0000000000000p-1;
      v40 = cos(v39);
      v41 = sin(v39);
      *(float*)&v42 = v40 + PSEUDO_UNFUSED(v41 * 0x0.0p+0);
      LANES128(v43).n128_u64[0] = GameData_21a61a0;
      *(float*)&v44 = PSEUDO_UNFUSED(v41 * -0x0.0p+0) + v40 * 0x0.0p+0;
      *(float*)&v45 = v41 + PSEUDO_UNFUSED(v40 * 0x0.0p+0);
      LANES128(v46).n128_u64[0] = __PAIR64__(v45, v44);
      LANES128(v47).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v43).n128_u64[1] = LANES128(v47).n128_u64[0];
      LANES128(v46).n128_u64[1] = __PAIR64__(v42, v44);
      HIDWORD(v44) = v45;
      v48 = vmulq_f32(v46, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v49).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                               COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v50).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v51).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v49).n128_u64[1] = LANES128(v49).n128_u64[0];
      LANES128(v50).n128_u64[1] = LANES128(v50).n128_u64[0];
      *(int8x8_t*)&LANES128(v51).n128_i8[8] =
          vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      v52 = vmulq_f32(v43, v51);
      LANES128(v43).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v43).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v48).n128_u64[0]), 1);
      v53 = vmlaq_f32(vmulq_f32(v49, v48),
                      COERCE_AS(float32x4_t, GameData_1a83800), v52);
      LANES128(v52).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v47).n128_u64[1] = LANES128(v52).n128_u64[0];
      LANES128(v52).n128_u64[1] = GameData_21a61a0;
      LANES128(v54).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v54).n128_i8[8] =
          vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v55 = vmlsq_f32(vmlaq_f32(v53, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v52, v43)),
                      v54, v47);
      LANES128(v54).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v47).n128_u64[0] = v44;
      LANES128(v46).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v48).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v47).n128_u64[1] = LANES128(v54).n128_u64[0];
      LANES128(v54).n128_u64[1] = LANES128(v46).n128_u64[0];
      LANES128(v46).n128_u64[1] = v44;
      *(int8x8_t*)&LANES128(v48).n128_i8[8] =
          vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      v56 = vmlaq_f32(vmulq_f32(v50, v55),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v47, v48));
      LANES128(v48).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v48).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v55).n128_u64[0]), 1);
      v57 = vmlaq_f32(v56, COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v46, v48));
      LANES128(v46).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v46).n128_i8[8] =
          vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v58 = vmlsq_f32(v57, v46, v54);
      LANES128(v58).n128_u32[3] = 0;
      LANES128(v55).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v84, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v46).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v55).n128_i8[8] =
          vqtbl1_s8(v84, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      *(int8x8_t*)&LANES128(v46).n128_i8[8] =
          vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v59).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v60 = vmulq_f32(v46, v55);
      *(int8x8_t*)&LANES128(v59).n128_i8[8] =
          vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v55).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v84, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v55).n128_i8[8] =
          vqtbl1_s8(v84, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v61 = vmlsq_f32(v60, v55, v59);
      v62 = vmulq_f32(v84, v58);
      LANES128(v58).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v58).n128_u64[1] = 0x3F0000003F000000LL;
      LANES128(v62).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v62, v62, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0])))
              .n64_u64[0];
      LANES128(v55).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v55).n128_u64[1] = 0x3F8000003F800000LL;
      LANES128(v62).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0])))
              .n64_u64[0];
      LANES128(v62).n128_u64[1] = LANES128(v62).n128_u64[0];
      v63 = vaddq_f32(v62, v55);
      v64 = vsqrtq_f32(vaddq_f32(v63, v63));
      v65 = vdivq_f32(v61, v64);
      LANES128(v65).n128_u32[3] = LANES128_OF(vmulq_f32(v64, v58)).n128_u32[3];
      LANES128(v64).n128_u64[0] = 0x3400000034000000LL;
      LANES128(v64).n128_u64[1] = 0x3400000034000000LL;
      v86 = vbslq_s8(vcgeq_f32(v64, v63),
                     COERCE_AS(int8x16_t, GameData_1a82dd0), v65);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a5680) != 0) {
        v83 = *((_QWORD*)GameData_212c2f8 + 1);
        *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
        *((_QWORD*)&GameData_21a5670 + 1) = v83;
        __cxa_guard_release((__int64)&GameData_21a5680);
      }
      v66 = LANES128(v3[10]).n128_f32[0];
      if (v66 < 0x0.0p+0f) {
        v67 = LANES128(v3[8]).n128_f32[0];
      LABEL_53:
        result = X8CALL_X0(float32x4_t*,
                           math_Quat_Slerp((void*)(&v85),
                                           (float32x4_t*)&GameData_21a5670,
                                           &v86, v67));
        LANES128(v86).n128_u64[0] = LANES128(v85).n128_u64[0];
        LANES128(v86).n128_u64[1] =
            LANES128_OF(vextq_s8(v85, v85, 8u)).n128_u64[0];
        v88.val[1] = v86;
        LANES128(v88.val[1]).n128_u32[3] = 0;
        LANES128(v73).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v88.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v74).n128_u64[0] =
            LANES64_OF(
                vrev64_s32(COERCE_AS(int32x2_t, LANES128(v85).n128_u64[0])))
                .n64_u64[0];
        LANES128(v75).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v88.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                .n64_u64[0];
        v76 = LANES64_OF(vqtbl1_s8(v88.val[1],
                                   COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                  .n64_u64[0];
        *(int8x8_t*)&LANES128(v73).n128_i8[8] =
            vqtbl1_s8(v88.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v74).n128_u64[1] = LANES128(v73).n128_u64[1];
        LANES128(v75).n128_u64[1] = v76;
        v77 = vmulq_f32(v73, v88.val[1]);
        LANES128(v88.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v88.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v78 = vmulq_f32(v74, v74);
        v87.val[1] = vmulq_f32(v75, v75);
        v79 = vaddq_f32(v77, v77);
        LANES128(v88.val[1]).n128_u64[1] = v76;
        v80 = vmulq_laneq_f32(v88.val[1], v86, 3);
        v81 = vaddq_f32(v80, v80);
        v87.val[0] = vsubq_f32(
            COERCE_AS(float32x4_t, GameData_1a837f0),
            vaddq_f32(vaddq_f32(v87.val[1], v87.val[1]), vaddq_f32(v78, v78)));
        v89.val[0] = vaddq_f32(v79, v81);
        v89.val[1] = vsubq_f32(v79, v81);
        LANES128(v88.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v89, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                .n64_u64[0];
        LANES128(v87.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v89, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v88.val[1]).n128_i8[8] =
            vqtbl2_s8(v89, COERCE_AS(int8x8_t, 0x706050413121110LL));
        *(int8x8_t*)&LANES128(v87.val[1]).n128_i8[8] =
            vqtbl2_s8(v89, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
        v88.val[0] = v87.val[0];
        LANES128(v79).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v88, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v79).n128_i8[8] =
            vqtbl2_s8(v88, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
        LANES128(v89.val[0]).n128_u64[0] =
            LANES64_OF(vqtbl2_s8(v88, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v89.val[0]).n128_i8[8] =
            vqtbl2_s8(v88, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
        LANES128(v88.val[0]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v87, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                .n64_u64[0];
        v88.val[1] = v34[2];
        *(int8x8_t*)&LANES128(v88.val[0]).n128_i8[8] =
            vqtbl2_s8(v87, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
        v87.val[0] = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v79, COERCE_FLOAT(*(_OWORD*)&v34[1])), v89.val[0],
                COERCE_AS(float32x2_t, LANES128(v34[1]).n128_u64[0]), 1),
            v88.val[0], v34[1], 2);
        *v34 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v79, COERCE_FLOAT(*v34)), v89.val[0],
                           COERCE_AS(float32x2_t, LANES128(*(v34)).n128_u64[0]),
                           1),
            v88.val[0], *v34, 2);
        v34[1] = v87.val[0];
        v34[2] = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v79, LANES128(v88.val[1]).n128_f32[0]), v89.val[0],
                COERCE_AS(float32x2_t, LANES128(v88.val[1]).n128_u64[0]), 1),
            v88.val[0], v88.val[1], 2);
        return result;
      }
      v68 = LANES128(v3[9]).n128_f32[0];
      if (v66 == 0x0.0p+0f && v68 == 0x0.0p+0f) {
      LABEL_47:
        v67 = LANES128(v3[8]).n128_f32[1];
        goto LABEL_53;
      }
      if (v66 <= v68) {
        v70 = LANES128(v3[8]).n128_f32[0];
        v71 = LANES128(v3[8]).n128_f32[1];
        v72 = LANES128(v3[8]).n128_i32[2];
      }
      else {
        v69 = v68 + fmaxf(LANES128(v3[9]).n128_f32[1], 0x0.0p+0f);
        if (v69 >= v66) {
          goto LABEL_47;
        }
        v71 = LANES128(v3[8]).n128_f32[0];
        v70 = LANES128(v3[8]).n128_f32[1];
        v66 = v66 - v69;
        v68 = LANES128(v3[9]).n128_f32[2];
        v72 = LANES128(v3[8]).n128_i32[3];
      }
      v67 = GameRoutine_618640(v72, v70, v71, v66, v68);
      goto LABEL_53;
    }
  }
  return result;
}

float32x4_t*

game_character_CharacterAim_Start_lambda1_Invoke(float32x4_t* result,
                                                 __int64 a2, __int64 a3)
{
  int8x16_t* v3;
  float v4;
  float v5;
  float v6;
  bool v7;
  float v8;
  bool v9;
  float v10;
  float v11;
  unsigned __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float32x4_t* v19;
  float32x4_t* v20;
  bool v21;
  float32x4_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  int8x16_t v27;
  int8x16_t v28;
  float v29;
  float v30;
  bool v31;
  bool v32;
  float32x4_t* v34;
  float32x4_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;
  int8x16_t v39;
  int8x16_t v40;
  float32x4_t v41;
  float32x4_t v42;
  unsigned __int64 v43;
  float32x4_t v44;
  int8x16_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  int8x16_t v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  int v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  unsigned __int64 v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  __int64 v66;
  float32x4_t v67;
  float32x4_t v68;
  int8x16x2_t v69;
  int8x16x2_t v70;
  int8x16x2_t v71;

  v3 = (int8x16_t*)LANES128(*(result)).n128_u64[1];
  v4 = LANES128(v3[10]).n128_f32[0];
  if (v4 < 0x0.0p+0f ||
      ((v5 = LANES128(v3[9]).n128_f32[0],
        v6 = LANES128(v3[9]).n128_f32[2] +
             (float)(v5 + fmaxf(LANES128(v3[9]).n128_f32[1], 0x0.0p+0f)),
        v4 < v6)
           ? (v7 = *GameData_212d168 == 3)
           : (v7 = false),
       !v7)) {
    result = (float32x4_t*)GameHr_109d5e0(&LANES128(v3[3]).n128_u32[2]);
    LANES128(v3[10]).n128_u32[0] = -1082130432;
    return result;
  }
  v8 = (float)(*(float*)(*(_QWORD*)(LANES128(*(v3)).n128_u64[1] + 496) + 16LL) *
               0x1.0aef000000000p+4f) /
       0x1.f400000000000p+9f;
  if (LANES128(v3[9]).n128_u8[12] == 1) {
    if (v5 == 0x0.0p+0f) {
      v4 = v5 - v8;
    }
    else {
      v9 = v5 >= (float)(v4 + v8) || v4 > v5;
      v10 = v5 - v8;
      if (!v9) {
        v4 = v10;
      }
    }
  }
  v11 = v8 + v4;
  v12 = LANES128(v3[2]).n128_u64[1];
  if (v11 > v6) {
    v11 = -0x1.0000000000000p+0f;
  }
  LANES128(v3[10]).n128_f32[0] = v11;
  v13 = *(_QWORD*)(v12 + 128);
  v14 = *(float*)(v13 + 144);
  if (v14 <= 0x0.0p+0f) {
    goto LABEL_39;
  }
  v15 = a3;
  v16 = *GameData_212d448[0];
  if (*GameData_212d448[0] != 0) {
    result = (float32x4_t*)nn_os_ConvertToTimeSpan(
        *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 344LL));
    v17 = (__int64)result / 1000 - *(_QWORD*)(v16 + 136);
    v18 = 0x1.e848000000000p+19f;
  }
  else {
    result = (float32x4_t*)nn_os_ConvertToTimeSpan(
        *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 344LL));
    v17 = (__int64)result / 1000000;
    v18 = 0x1.f400000000000p+9f;
  }
  a3 = v15;
  if ((float)((float)v17 / v18) >= v14) {
  LABEL_39:
    v20 = *(float32x4_t**)(v13 + 128);
    v19 = *(float32x4_t**)(v13 + 136);
    v21 = v20 == nullptr || v19 == nullptr;
    if (v21 || *(_QWORD*)(v13 + 120) == 0) {
      goto LABEL_41;
    }
    v23 = v20[3];
    v24 = v19[3];
    v25 = vmulq_f32(v23, v23);
    v26 = vsubq_f32(v23, v24);
    v27 = vmulq_f32(v26, v26);
    LANES128(v25).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_u64[0];
    v31 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_f32[0] < 0x1.47ae160000000p-9f;
    v28 = vmulq_f32(v24, v24);
    LANES128(v27).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
            .n64_u64[0];
    LANES128(v28).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
            .n64_u64[0];
    LODWORD(v29) =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
            .n64_u32[0];
    LODWORD(v30) =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
            .n64_u32[0];
    v31 = v31 && v30 < 0x1.47ae160000000p-9f;
    v32 = v31;
    if (v32 || v29 < 0x1.47ae160000000p-9f) {
    LABEL_41:
      **(_DWORD**)(a3 + 16) &= 0x33FFFFFFu;
      v34 = *(float32x4_t**)a3;
      v35 = *(float32x4_t*)*(_QWORD*)a3;
      v36 = vmulq_f32(v35, v35);
      LANES128(v36).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
              .n64_u64[0];
      LANES128(v36).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
              .n64_u64[0];
      LANES128(v36).n128_u64[1] = LANES128(v36).n128_u64[0];
      v37 = vrsqrteq_f32(v36);
      v38 = vmulq_f32(v37, vrsqrtsq_f32(v37, vmulq_f32(v36, v37)));
      v39 = vbicq_s8(
          vmulq_f32(v35,
                    vmulq_f32(v38, vrsqrtsq_f32(v38, vmulq_f32(v36, v38)))),
          vceqzq_f32(v36));
      v40 = v3[7];
      LANES128(v38).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v41).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v38).n128_i8[8] =
          vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v42).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v41).n128_i8[8] =
          vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v43 = LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
                .n64_u64[0];
      v44 = vmulq_f32(v38, v41);
      LANES128(v41).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
      v45 = vmulq_f32(v39, v40);
      LANES128(v42).n128_u64[1] = LANES128(v41).n128_u64[0];
      LANES128(v41).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v45).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v45, v45, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
              .n64_u64[0];
      LANES128(v40).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v40).n128_u64[1] = 0x3F8000003F800000LL;
      LANES128(v41).n128_u64[1] = v43;
      LANES128(v45).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
              .n64_u64[0];
      v46 = vmlsq_f32(v44, v41, v42);
      LANES128(v42).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v42).n128_u64[1] = 0x3F0000003F000000LL;
      LANES128(v45).n128_u64[1] = LANES128(v45).n128_u64[0];
      v47 = vaddq_f32(v45, v40);
      v48 = vsqrtq_f32(vaddq_f32(v47, v47));
      v49 = vdivq_f32(v46, v48);
      LANES128(v49).n128_u32[3] = LANES128_OF(vmulq_f32(v48, v42)).n128_u32[3];
      LANES128(v48).n128_u64[0] = 0x3400000034000000LL;
      LANES128(v48).n128_u64[1] = 0x3400000034000000LL;
      v68 = vbslq_s8(vcgeq_f32(v48, v47),
                     COERCE_AS(int8x16_t, GameData_1a82dd0), v49);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a5680) != 0) {
        v66 = *((_QWORD*)GameData_212c2f8 + 1);
        *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
        *((_QWORD*)&GameData_21a5670 + 1) = v66;
        __cxa_guard_release((__int64)&GameData_21a5680);
      }
      v50 = LANES128(v3[10]).n128_f32[0];
      if (v50 < 0x0.0p+0f) {
        v51 = LANES128(v3[8]).n128_f32[0];
      LABEL_52:
        result = X8CALL_X0(float32x4_t*,
                           math_Quat_Slerp((void*)(&v67),
                                           (float32x4_t*)&GameData_21a5670,
                                           &v68, v51));
        LANES128(v68).n128_u64[0] = LANES128(v67).n128_u64[0];
        LANES128(v68).n128_u64[1] =
            LANES128_OF(vextq_s8(v67, v67, 8u)).n128_u64[0];
        v70.val[1] = v68;
        LANES128(v70.val[1]).n128_u32[3] = 0;
        LANES128(v57).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v70.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v58).n128_u64[0] =
            LANES64_OF(
                vrev64_s32(COERCE_AS(int32x2_t, LANES128(v67).n128_u64[0])))
                .n64_u64[0];
        LANES128(v59).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v70.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                .n64_u64[0];
        v60 = LANES64_OF(vqtbl1_s8(v70.val[1],
                                   COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                  .n64_u64[0];
        *(int8x8_t*)&LANES128(v57).n128_i8[8] =
            vqtbl1_s8(v70.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v58).n128_u64[1] = LANES128(v57).n128_u64[1];
        LANES128(v59).n128_u64[1] = v60;
        v61 = vmulq_f32(v57, v70.val[1]);
        LANES128(v70.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v70.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v62 = vmulq_f32(v58, v58);
        v69.val[1] = vmulq_f32(v59, v59);
        v63 = vaddq_f32(v61, v61);
        LANES128(v70.val[1]).n128_u64[1] = v60;
        v64 = vmulq_laneq_f32(v70.val[1], v68, 3);
        v65 = vaddq_f32(v64, v64);
        v69.val[0] = vsubq_f32(
            COERCE_AS(float32x4_t, GameData_1a837f0),
            vaddq_f32(vaddq_f32(v69.val[1], v69.val[1]), vaddq_f32(v62, v62)));
        v71.val[0] = vaddq_f32(v63, v65);
        v71.val[1] = vsubq_f32(v63, v65);
        LANES128(v70.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v71, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                .n64_u64[0];
        LANES128(v69.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v71, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v70.val[1]).n128_i8[8] =
            vqtbl2_s8(v71, COERCE_AS(int8x8_t, 0x706050413121110LL));
        *(int8x8_t*)&LANES128(v69.val[1]).n128_i8[8] =
            vqtbl2_s8(v71, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
        v70.val[0] = v69.val[0];
        LANES128(v63).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v70, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v63).n128_i8[8] =
            vqtbl2_s8(v70, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
        LANES128(v71.val[0]).n128_u64[0] =
            LANES64_OF(vqtbl2_s8(v70, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v71.val[0]).n128_i8[8] =
            vqtbl2_s8(v70, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
        LANES128(v70.val[0]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v69, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                .n64_u64[0];
        v70.val[1] = v34[2];
        *(int8x8_t*)&LANES128(v70.val[0]).n128_i8[8] =
            vqtbl2_s8(v69, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
        v69.val[0] = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v63, COERCE_FLOAT(*(_OWORD*)&v34[1])), v71.val[0],
                COERCE_AS(float32x2_t, LANES128(v34[1]).n128_u64[0]), 1),
            v70.val[0], v34[1], 2);
        *v34 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v63, COERCE_FLOAT(*v34)), v71.val[0],
                           COERCE_AS(float32x2_t, LANES128(*(v34)).n128_u64[0]),
                           1),
            v70.val[0], *v34, 2);
        v34[1] = v69.val[0];
        v34[2] = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v63, LANES128(v70.val[1]).n128_f32[0]), v71.val[0],
                COERCE_AS(float32x2_t, LANES128(v70.val[1]).n128_u64[0]), 1),
            v70.val[0], v70.val[1], 2);
        return result;
      }
      v52 = LANES128(v3[9]).n128_f32[0];
      if (v50 == 0x0.0p+0f && v52 == 0x0.0p+0f) {
      LABEL_46:
        v51 = LANES128(v3[8]).n128_f32[1];
        goto LABEL_52;
      }
      if (v50 <= v52) {
        v54 = LANES128(v3[8]).n128_f32[0];
        v55 = LANES128(v3[8]).n128_f32[1];
        v56 = LANES128(v3[8]).n128_i32[2];
      }
      else {
        v53 = v52 + fmaxf(LANES128(v3[9]).n128_f32[1], 0x0.0p+0f);
        if (v53 >= v50) {
          goto LABEL_46;
        }
        v55 = LANES128(v3[8]).n128_f32[0];
        v54 = LANES128(v3[8]).n128_f32[1];
        v50 = v50 - v53;
        v52 = LANES128(v3[9]).n128_f32[2];
        v56 = LANES128(v3[8]).n128_i32[3];
      }
      v51 = GameRoutine_618640(v56, v54, v55, v50, v52);
      goto LABEL_52;
    }
  }
  return result;
}

float32x4_t*

game_character_CharacterAim_Start_lambda2_Invoke(float32x4_t* result,
                                                 __int64 a2, float32x4_t** a3)
{
  unsigned __int64 v3;
  float v4;
  float v5;
  float v6;
  bool v7;
  float v8;
  bool v9;
  float v10;
  float v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float32x4_t** v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float32x4_t* v19;
  float32x4_t* v20;
  bool v21;
  float32x4_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  int8x16_t v27;
  int8x16_t v28;
  float v29;
  float v30;
  bool v31;
  bool v32;
  int8x16_t v34;
  int8x16_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x16_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  int8x16_t v44;
  float v45;
  float v46;
  float32x4_t** v47;
  float v48;
  float v49;
  float v50;
  float v51;
  int v52;
  float32x4_t* v53;
  float32x4_t* v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  unsigned __int64 v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t** v64;
  int v65;
  __int64 v66;
  float32x4_t v67;
  float32x4_t v68;
  int8x16x2_t v69;
  int8x16x2_t v70;
  int8x16x2_t v71;

  v3 = LANES128(*(result)).n128_u64[1];
  v4 = *(float*)(v3 + 160);
  if (v4 < 0x0.0p+0f ||
      ((v5 = *(float*)(v3 + 144),
        v6 = *(float*)(v3 + 152) +
             (float)(v5 + fmaxf(*(float*)(v3 + 148), 0x0.0p+0f)),
        v4 < v6)
           ? (v7 = *GameData_212d168 == 3)
           : (v7 = false),
       !v7)) {
    result = (float32x4_t*)GameHr_109d5e0((unsigned int*)(v3 + 56));
    *(_DWORD*)(v3 + 160) = -1082130432;
    return result;
  }
  v8 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 496LL) + 16LL) *
               0x1.0aef000000000p+4f) /
       0x1.f400000000000p+9f;
  if (*(_BYTE*)(v3 + 156) == 1) {
    if (v5 == 0x0.0p+0f) {
      v4 = v5 - v8;
    }
    else {
      v9 = v5 >= (float)(v4 + v8) || v4 > v5;
      v10 = v5 - v8;
      if (!v9) {
        v4 = v10;
      }
    }
  }
  v11 = v8 + v4;
  v12 = *(_QWORD*)(v3 + 40);
  if (v11 > v6) {
    v11 = -0x1.0000000000000p+0f;
  }
  *(float*)(v3 + 160) = v11;
  v13 = *(_QWORD*)(v12 + 128);
  v14 = *(float*)(v13 + 144);
  if (v14 <= 0x0.0p+0f) {
    goto LABEL_39;
  }
  v15 = a3;
  v16 = *GameData_212d448[0];
  if (*GameData_212d448[0] != 0) {
    result = (float32x4_t*)nn_os_ConvertToTimeSpan(
        *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 344LL));
    v17 = (__int64)result / 1000 - *(_QWORD*)(v16 + 136);
    v18 = 0x1.e848000000000p+19f;
  }
  else {
    result = (float32x4_t*)nn_os_ConvertToTimeSpan(
        *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 344LL));
    v17 = (__int64)result / 1000000;
    v18 = 0x1.f400000000000p+9f;
  }
  a3 = v15;
  if ((float)((float)v17 / v18) >= v14) {
  LABEL_39:
    v20 = *(float32x4_t**)(v13 + 128);
    v19 = *(float32x4_t**)(v13 + 136);
    v21 = v20 == nullptr || v19 == nullptr;
    if (v21 || *(_QWORD*)(v13 + 120) == 0) {
      goto LABEL_41;
    }
    v23 = v20[3];
    v24 = v19[3];
    v25 = vmulq_f32(v23, v23);
    v26 = vsubq_f32(v23, v24);
    v27 = vmulq_f32(v26, v26);
    LANES128(v25).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_u64[0];
    v31 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_f32[0] < 0x1.47ae160000000p-9f;
    v28 = vmulq_f32(v24, v24);
    LANES128(v27).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
            .n64_u64[0];
    LANES128(v28).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
            .n64_u64[0];
    LODWORD(v29) =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
            .n64_u32[0];
    LODWORD(v30) =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
            .n64_u32[0];
    v31 = v31 && v30 < 0x1.47ae160000000p-9f;
    v32 = v31;
    if (v32 || v29 < 0x1.47ae160000000p-9f) {
    LABEL_41:
      v34 = *(int8x16_t*)(v3 + 112);
      v35 = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(*(float32x4_t*)(*(_QWORD*)(v3 + 8) + 432LL),
                          COERCE_FLOAT(*(_OWORD*)(v3 + 96))),
              *(float32x4_t*)(*(_QWORD*)(v3 + 8) + 448LL),
              *(float32x2_t*)(v3 + 96), 1),
          *(float32x4_t*)(*(_QWORD*)(v3 + 8) + 464LL), *(float32x4_t*)(v3 + 96),
          2);
      LANES128(v36).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v37).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v36).n128_i8[8] =
          vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      *(int8x8_t*)&LANES128(v37).n128_i8[8] =
          vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v38).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v39 = vmulq_f32(v37, v36);
      LANES128(v36).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
      v40 = vmulq_f32(v35, v34);
      LANES128(v38).n128_u64[1] = LANES128(v36).n128_u64[0];
      LANES128(v36).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v36).n128_i8[8] =
          vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v41 = vmlsq_f32(v39, v36, v38);
      LANES128(v36).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v36).n128_u64[1] = 0x3F0000003F000000LL;
      LANES128(v40).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
              .n64_u64[0];
      LANES128(v38).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v38).n128_u64[1] = 0x3F8000003F800000LL;
      LANES128(v40).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
              .n64_u64[0];
      LANES128(v40).n128_u64[1] = LANES128(v40).n128_u64[0];
      v42 = vaddq_f32(v40, v38);
      v43 = vsqrtq_f32(vaddq_f32(v42, v42));
      v44 = vdivq_f32(v41, v43);
      LANES128(v44).n128_u32[3] = LANES128_OF(vmulq_f32(v43, v36)).n128_u32[3];
      LANES128(v43).n128_u64[0] = 0x3400000034000000LL;
      LANES128(v43).n128_u64[1] = 0x3400000034000000LL;
      v68 = vbslq_s8(vcgeq_f32(v43, v42),
                     COERCE_AS(int8x16_t, GameData_1a82dd0), v44);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                                memory_order_acquire) &
           1) == 0) {
        v64 = a3;
        v65 = __cxa_guard_acquire((__int64)&GameData_21a5680);
        a3 = v64;
        if (v65 != 0) {
          v66 = *((_QWORD*)GameData_212c2f8 + 1);
          *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
          *((_QWORD*)&GameData_21a5670 + 1) = v66;
          __cxa_guard_release((__int64)&GameData_21a5680);
          a3 = v64;
        }
      }
      v45 = *(float*)(v3 + 160);
      if (v45 < 0x0.0p+0f) {
        v46 = *(float*)(v3 + 128);
        v47 = a3;
      LABEL_53:
        result = X8CALL_X0(float32x4_t*,
                           math_Quat_Slerp((void*)(&v67),
                                           (float32x4_t*)&GameData_21a5670,
                                           &v68, v46));
        v53 = v47[2];
        LANES128(v68).n128_u64[0] = LANES128(v67).n128_u64[0];
        LANES128(v68).n128_u64[1] =
            LANES128_OF(vextq_s8(v67, v67, 8u)).n128_u64[0];
        LANES128(*(v53)).n128_u32[0] &= 0x33FFFFFFu;
        v54 = *v47;
        v70.val[1] = v68;
        LANES128(v70.val[1]).n128_u32[3] = 0;
        LANES128(v55).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v70.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v56).n128_u64[0] =
            LANES64_OF(
                vrev64_s32(COERCE_AS(int32x2_t, LANES128(v68).n128_u64[0])))
                .n64_u64[0];
        LANES128(v57).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v70.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                .n64_u64[0];
        v58 = LANES64_OF(vqtbl1_s8(v70.val[1],
                                   COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                  .n64_u64[0];
        *(int8x8_t*)&LANES128(v55).n128_i8[8] =
            vqtbl1_s8(v70.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v56).n128_u64[1] = LANES128(v55).n128_u64[1];
        LANES128(v57).n128_u64[1] = v58;
        v59 = vmulq_f32(v55, v70.val[1]);
        LANES128(v70.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v70.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v60 = vmulq_f32(v56, v56);
        v69.val[1] = vmulq_f32(v57, v57);
        v61 = vaddq_f32(v59, v59);
        LANES128(v70.val[1]).n128_u64[1] = v58;
        v62 = vmulq_laneq_f32(v70.val[1], v68, 3);
        v63 = vaddq_f32(v62, v62);
        v69.val[0] = vsubq_f32(
            COERCE_AS(float32x4_t, GameData_1a837f0),
            vaddq_f32(vaddq_f32(v69.val[1], v69.val[1]), vaddq_f32(v60, v60)));
        v71.val[0] = vaddq_f32(v61, v63);
        v71.val[1] = vsubq_f32(v61, v63);
        LANES128(v70.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v71, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                .n64_u64[0];
        LANES128(v69.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v71, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v70.val[1]).n128_i8[8] =
            vqtbl2_s8(v71, COERCE_AS(int8x8_t, 0x706050413121110LL));
        *(int8x8_t*)&LANES128(v69.val[1]).n128_i8[8] =
            vqtbl2_s8(v71, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
        v70.val[0] = v69.val[0];
        LANES128(v61).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v70, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v61).n128_i8[8] =
            vqtbl2_s8(v70, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
        LANES128(v71.val[0]).n128_u64[0] =
            LANES64_OF(vqtbl2_s8(v70, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v71.val[0]).n128_i8[8] =
            vqtbl2_s8(v70, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
        LANES128(v70.val[0]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v69, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                .n64_u64[0];
        v70.val[1] = (*v47)[2];
        *(int8x8_t*)&LANES128(v70.val[0]).n128_i8[8] =
            vqtbl2_s8(v69, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
        v69.val[0] = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v61, COERCE_FLOAT(*(_OWORD*)&(*v47)[1])),
                v71.val[0],
                COERCE_AS(float32x2_t, LANES128((*v47)[1]).n128_u64[0]), 1),
            v70.val[0], (*v47)[1], 2);
        *v54 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v61, COERCE_FLOAT(**v47)), v71.val[0],
                COERCE_AS(float32x2_t, LANES128(*((*v47))).n128_u64[0]), 1),
            v70.val[0], **v47, 2);
        v54[1] = v69.val[0];
        v54[2] = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v61, LANES128(v70.val[1]).n128_f32[0]), v71.val[0],
                COERCE_AS(float32x2_t, LANES128(v70.val[1]).n128_u64[0]), 1),
            v70.val[0], v70.val[1], 2);
        return result;
      }
      v48 = *(float*)(v3 + 144);
      if (v45 == 0x0.0p+0f && v48 == 0x0.0p+0f) {
        v47 = a3;
      LABEL_47:
        v46 = *(float*)(v3 + 132);
        goto LABEL_53;
      }
      v47 = a3;
      if (v45 <= v48) {
        v50 = *(float*)(v3 + 128);
        v51 = *(float*)(v3 + 132);
        v52 = *(_DWORD*)(v3 + 136);
      }
      else {
        v49 = v48 + fmaxf(*(float*)(v3 + 148), 0x0.0p+0f);
        if (v49 >= v45) {
          goto LABEL_47;
        }
        v51 = *(float*)(v3 + 128);
        v50 = *(float*)(v3 + 132);
        v45 = v45 - v49;
        v48 = *(float*)(v3 + 152);
        v52 = *(_DWORD*)(v3 + 140);
      }
      v46 = GameRoutine_618640(v52, v50, v51, v45, v48);
      goto LABEL_53;
    }
  }
  return result;
}

#pragma GCC visibility pop
