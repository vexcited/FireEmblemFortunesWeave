#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_109d5e0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_IKSlopeCargo_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 IKSlopeCargo_Destructor(_QWORD* a1);
__int64 IKSlopeCargo_DeletingDestructor(_QWORD* a1);
extern __int128 GameData_1a83610;
extern __int64 (*GameData_200f3e8[])();
void GameRoutine_109d2e0(__int64, __int64, __int64, __int64, unsigned int);
void game_character_IKSlopeCargo_IKSlopeCargo(__int64 a1, _QWORD* a2,
                                              __int64 a3);
__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__attribute__((swiftcall)) void
GameRoutine_109da60(PSEUDO_X8, float32x4_t*, float32x4_t*, int8x16_t result);
__int64 GameRoutine_10fdef0(float32x4_t*, float32x4_t*, float32x4_t*,
                            float32x4_t*, _DWORD*);
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a837f0;
extern __int128 GameData_21a6180;
float exp2f(float);
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
void game_character_IKSlopeCargo_IKSlopeCargo_lambda0_Invoke(__int64 a1,
                                                             __int64 a2,
                                                             float32x4_t** a3);

void game_character_IKSlopeCargo_IKSlopeCargo(__int64 a1, _QWORD* a2,
                                              __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;

  *(_QWORD*)(a1 + 24) = a2;
  *(_DWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_WORD*)(a1 + 16) = 256;
  v9 = v8;
  *(_QWORD*)a1 = game_character_IKSlopeCargo_vtable;
  *(_QWORD*)(a1 + 8) = a3;
  *(_DWORD*)(a1 + 40) = -1;
  *(_DWORD*)(a1 + 112) = 1065353216;
  v8[0] = GameData_200f3e8;
  v8[1] = a1;
  *(_OWORD*)(a1 + 96) = GameData_1a83610;
  GameRoutine_109d2e0(a1 + 40, a2[51], (__int64)"Loc_C_Trans", (__int64)v8, 1u);
  if (v9 == v8) {
    v5 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v9 + v5))((__int64)v9);
LABEL_6:
  v6 = a2[49];
  v7 = a2[50];
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    *(_DWORD*)(a1 + 112) = *(_DWORD*)(v6 + 32);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  else {
    *(_DWORD*)(a1 + 112) = *(_DWORD*)(v6 + 32);
  }
  *(_BYTE*)(a1 + 16) = 1;
}

__int64 IKSlopeCargo_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_character_IKSlopeCargo_vtable;
  GameRoutine_109d5e0(a1 + 5);
  result = a1[8];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 IKSlopeCargo_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_character_IKSlopeCargo_vtable;
  GameRoutine_109d5e0(a1 + 5);
  v2 = a1[8];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

void game_character_IKSlopeCargo_IKSlopeCargo_lambda0_Invoke(__int64 a1,
                                                             __int64 a2,
                                                             float32x4_t** a3)
{
  __int64 v3;
  __int64 v4;
  float32x4_t* v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  float32x4_t v10;
  int8x16_t v11;
  float32x2_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  int8x16_t v22;
  int8x16_t v23;
  float v24;
  float32x4_t v25;
  int8x16_t v26;
  float32x4_t v27;
  float v28;
  int8x16_t v29;
  int8x16_t v30;
  int8x16_t v31;
  float v32;
  float32x4_t v33;
  int8x16_t v34;
  unsigned __int64 v35;
  float32x4_t v36;
  int8x16_t v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x16_t v40;
  __int128* v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  float v44;
  int8x16_t v45;
  float v46;
  __int128 v47;
  unsigned __int32 v48;
  float32x4_t v49;
  int8x16_t v50;
  float32x4_t v51;
  float32x4_t v52;
  int8x16_t v53;
  __int128 v54;
  int8x16_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  unsigned __int64 v59;
  float32x4_t v60;
  int8x16_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  int8x16_t v65;
  float32x4_t v66;
  int8x16_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  __int64 v75;
  int v76;
  __int64 v77;
  __int64 v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  int8x16_t v94;
  int8x16x2_t v95;
  int8x16x2_t v96;
  int8x16x2_t v97;

  v3 = *(_QWORD*)(a1 + 8);
  if (**(_DWORD**)(v3 + 8) == 0) {
    v4 = *(_QWORD*)(v3 + 24);
    LANES128(*(a3[2])).n128_u32[0] &= 0x33FFFFFFu;
    v5 = *a3;
    v6 = (*a3)[2];
    v7 = (*a3)[3];
    v8 = **a3;
    LANES128(v89).n128_u64[1] = 0;
    v90 = (__typeof__(v90)){0};
    v92 = (__typeof__(v92)){0};
    v91 = (__typeof__(v91)){0};
    v9 = vmulq_f32(v6, v6);
    v10 = vsubq_f32(COERCE_AS(float32x4_t, 0), v8);
    v85 = v7;
    v11 = vmulq_f32(v10, v10);
    LANES64(v12).n64_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
            .n64_u64[0];
    LANES128(v13).n128_u64[0] = LANES64_OF(vpadd_f32(v12, v12)).n64_u64[0];
    LANES128(v9).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
            .n64_u64[0];
    LANES128(v13).n128_u64[1] = LANES128(v13).n128_u64[0];
    LANES128(v9).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
            .n64_u64[0];
    LANES128(v9).n128_u64[1] = LANES128(v9).n128_u64[0];
    v14 = vrsqrteq_f32(v13);
    v15 = vrsqrteq_f32(v9);
    v16 = vmulq_f32(v14, vrsqrtsq_f32(v14, vmulq_f32(v13, v14)));
    v17 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v9, v15)));
    v18 = vbicq_s8(
        vmulq_f32(v6, vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v13, v16)))),
        vceqzq_f32(v13));
    LANES128(v13).n128_f32[0] = *(float*)(v3 + 112) * 0x1.6666660000000p+0f;
    v19 = vmulq_n_f32(v18, LANES128(v13).n128_f32[0]);
    v20 = vbicq_s8(
        vmulq_f32(v10, vmulq_f32(v17, vrsqrtsq_f32(v17, vmulq_f32(v9, v17)))),
        vceqzq_f32(v9));
    v21 = vaddq_f32(v7, v19);
    v83 = vmulq_n_f32(v20, LANES128(v13).n128_f32[0]);
    v22 = vsubq_f32(v21, v83);
    v79 = v21;
    v80 = v19;
    LANES128(v21).n128_u64[0] =
        LANES128(v22).n128_u32[0] | 0xC2C8000000000000LL;
    LANES128(v13).n128_u64[0] = LANES128(v22).n128_u64[0];
    LANES128(v13).n128_u64[1] = LANES128(v22).n128_u32[2];
    v89 = v13;
    LANES128(v13).n128_u32[1] = 1128792064;
    LANES128(v13).n128_u64[1] = LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u32[0];
    v94 = v13;
    LANES128(v21).n128_u64[1] = LANES128(v13).n128_u64[1];
    v93 = v21;
    GameRoutine_1085a10((void*)(&v87), v4 + 160, &v94, &v93, 0);
    v23 = vaddq_f32(v79, v83);
    v24 = LANES128(v87).n128_f32[1];
    LANES128(v89).n128_u32[1] = LANES128(v87).n128_u32[1];
    LANES128(v25).n128_u64[0] =
        LANES128(v23).n128_u32[0] | 0xC2C8000000000000LL;
    LANES128(v26).n128_u64[0] = LANES128(v23).n128_u64[0];
    LANES128(v26).n128_u64[1] = LANES128(v23).n128_u32[2];
    v90 = v26;
    LANES128(v26).n128_u32[1] = 1128792064;
    LANES128(v26).n128_u64[1] = LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u32[0];
    v94 = v26;
    LANES128(v25).n128_u64[1] = LANES128(v26).n128_u64[1];
    v93 = v25;
    GameRoutine_1085a10((void*)(&v87), v4 + 160, &v94, &v93, 0);
    v27 = vsubq_f32(v85, v80);
    v28 = LANES128(v87).n128_f32[1];
    LANES128(v90).n128_u32[1] = LANES128(v87).n128_u32[1];
    v29 = vsubq_f32(v27, v83);
    v81 = v27;
    LANES128(v27).n128_u64[0] =
        LANES128(v29).n128_u32[0] | 0xC2C8000000000000LL;
    LANES128(v30).n128_u64[0] = LANES128(v29).n128_u64[0];
    LANES128(v30).n128_u64[1] = LANES128(v29).n128_u32[2];
    v91 = v30;
    LANES128(v30).n128_u32[1] = 1128792064;
    LANES128(v30).n128_u64[1] = LANES128_OF(vextq_s8(v29, v29, 8u)).n128_u32[0];
    v94 = v30;
    LANES128(v27).n128_u64[1] = LANES128(v30).n128_u64[1];
    v93 = v27;
    GameRoutine_1085a10((void*)(&v87), v4 + 160, &v94, &v93, 0);
    v31 = vaddq_f32(v81, v83);
    v32 = LANES128(v87).n128_f32[1];
    LANES128(v91).n128_u32[1] = LANES128(v87).n128_u32[1];
    LANES128(v33).n128_u64[0] =
        LANES128(v31).n128_u32[0] | 0xC2C8000000000000LL;
    LANES128(v34).n128_u64[0] = LANES128(v31).n128_u64[0];
    LANES128(v34).n128_u64[1] = LANES128(v31).n128_u32[2];
    v92 = v34;
    LANES128(v34).n128_u32[1] = 1128792064;
    LANES128(v34).n128_u64[1] = LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u32[0];
    v94 = v34;
    LANES128(v33).n128_u64[1] = LANES128(v34).n128_u64[1];
    v93 = v33;
    GameRoutine_1085a10((void*)(&v87), v4 + 160, &v94, &v93, 0);
    v35 = *(_QWORD*)(v3 + 104);
    LANES128(v86).n128_u64[0] = *(_QWORD*)(v3 + 96);
    LANES128(v86).n128_u64[1] = v35;
    LANES128(v92).n128_u32[1] = LANES128(v87).n128_u32[1];
    v36 = v85;
    LANES128(v36).n128_f32[1] =
        (float)((float)((float)(v24 + v28) + v32) + LANES128(v87).n128_f32[1]) *
        0x1.0000000000000p-2f;
    v82 = v36;
    v84 = LANES128(v36).n128_f32[1];
    v37 = vmulq_f32(v86, v86);
    LANES128(v37).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v37, v37, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0])))
            .n64_u64[0];
    LANES128(v37).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0])))
            .n64_u64[0];
    LANES128(v37).n128_u64[1] = LANES128(v37).n128_u64[0];
    v38 = vrsqrteq_f32(v37);
    v39 = vmulq_f32(v38, vrsqrtsq_f32(v38, vmulq_f32(v37, v38)));
    v40 = vbicq_s8(
        vmulq_f32(v86, vmulq_f32(v39, vrsqrtsq_f32(v39, vmulq_f32(v37, v39)))),
        vceqzq_f32(v37));
    v86 = v40;
    if (LANES128(v37).n128_f32[0] == 0x0.0p+0f) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) != 0) {
        v41 = &GameData_21a6180;
      }
      else {
        v76 = __cxa_guard_acquire((__int64)&GameData_21a6190);
        v41 = &GameData_21a6180;
        if (v76 != 0) {
          v77 = *((_QWORD*)GameData_212c558 + 1);
          *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
          *((_QWORD*)&GameData_21a6180 + 1) = v77;
          __cxa_guard_release((__int64)&GameData_21a6190);
          v41 = &GameData_21a6180;
        }
      }
    }
    else {
      if (LANES128(v40).n128_f32[1] < 0x0.0p+0f) {
        v86 = vnegq_f32(v40);
      }
      v41 = (__int128*)&v86;
    }
    v43 = *(_QWORD*)v41;
    v42 = *((_QWORD*)v41 + 1);
    LANES128(v93).n128_u64[0] = v43;
    LANES128(v93).n128_u64[1] = v42;
    GameRoutine_10fdef0(&v89, &v90, &v91, &v92, &v93);
    LANES128(v45).n128_u64[1] = LANES128(v82).n128_u64[1];
    v44 = *(float*)(v3 + 32);
    v87 = v82;
    LANES128(v45).n128_u64[0] = 0;
    v88 = v93;
    if (v44 > 0x0.0p+0f) {
      LANES128(v45).n128_f32[0] =
          0x1.0000000000000p+0f - exp2f(v44 * -0x1.df851e0000000p+4f);
    }
    if (*(float*)(v3 + 100) == 0x0.0p+0f) {
      LANES128(v45).n128_f32[0] = 0x1.0000000000000p+0f;
    }
    v46 = *(float*)(v3 + 84) + (float)((float)(v84 - *(float*)(v3 + 84)) *
                                       LANES128(v45).n128_f32[0]);
    *(_DWORD*)(v3 + 80) = LANES128(v85).n128_u32[0];
    *(float*)(v3 + 84) = v46;
    v47 = *(_OWORD*)(v3 + 80);
    *((_QWORD*)&v47 + 1) = LANES128(v85).n128_u32[2];
    *(_OWORD*)(v3 + 80) = v47;
    GameRoutine_109da60((void*)(&v94), (float32x4_t*)(v3 + 96), &v88, v45);
    v48 = LANES128(v94).n128_u32[2];
    *(_QWORD*)(v3 + 96) = LANES128(v94).n128_u64[0];
    v49 = *(float32x4_t*)(v3 + 96);
    LANES128(v49).n128_u64[1] = v48;
    v50 = vmulq_f32(v49, v49);
    *(float32x4_t*)(v3 + 96) = v49;
    LANES128(v50).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v50, v50, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
            .n64_u64[0];
    LANES128(v50).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v50).n128_f32[0] == 0x0.0p+0f) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
        v78 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v78;
        __cxa_guard_release((__int64)&GameData_21a6190);
      }
      v53 = COERCE_AS(int8x16_t, GameData_21a6180);
    }
    else {
      LANES128(v50).n128_u64[1] = LANES128(v50).n128_u64[0];
      v51 = vrsqrteq_f32(v50);
      v52 = vmulq_f32(v51, vrsqrtsq_f32(v51, vmulq_f32(v50, v51)));
      v53 = vbicq_s8(
          vmulq_f32(v49,
                    vmulq_f32(v52, vrsqrtsq_f32(v52, vmulq_f32(v50, v52)))),
          vceqzq_f32(v50));
      if (LANES128(v53).n128_f32[1] < 0x0.0p+0f) {
        v53 = vnegq_f32(v53);
      }
    }
    *(_QWORD*)(v3 + 96) = LANES128(v53).n128_u64[0];
    v54 = *(_OWORD*)(v3 + 96);
    *((_QWORD*)&v54 + 1) = LANES128(v53).n128_u32[2];
    *(_OWORD*)(v3 + 96) = v54;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
      v75 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v75;
      __cxa_guard_release((__int64)&GameData_21a6190);
    }
    v55 = *(int8x16_t*)(v3 + 96);
    LANES128(v56).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v56).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                  COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v58).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v57).n128_i8[8] =
        vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v59 = LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
              .n64_u64[0];
    v60 = vmulq_f32(v56, v57);
    v61 = vmulq_f32(COERCE_AS(float32x4_t, GameData_21a6180), v55);
    *(int8x8_t*)&LANES128(v58).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                  COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v61).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v61, v61, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0])))
            .n64_u64[0];
    LANES128(v55).n128_u64[0] = 0x3F8000003F800000LL;
    LANES128(v55).n128_u64[1] = 0x3F8000003F800000LL;
    LANES128(v57).n128_u64[1] = v59;
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0])))
            .n64_u64[0];
    v62 = vmlsq_f32(v60, v57, v58);
    LANES128(v58).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v58).n128_u64[1] = 0x3F0000003F000000LL;
    LANES128(v61).n128_u64[1] = LANES128(v61).n128_u64[0];
    v63 = vaddq_f32(v61, v55);
    v64 = vsqrtq_f32(vaddq_f32(v63, v63));
    v65 = vdivq_f32(v62, v64);
    LANES128(v65).n128_u32[3] = LANES128_OF(vmulq_f32(v64, v58)).n128_u32[3];
    LANES128(v64).n128_u64[0] = 0x3400000034000000LL;
    LANES128(v64).n128_u64[1] = 0x3400000034000000LL;
    v66 = vbslq_s8(vcgeq_f32(v64, v63), COERCE_AS(int8x16_t, GameData_1a82dd0),
                   v65);
    v67 = v66;
    LANES128(v67).n128_u32[3] = 0;
    LANES128(v63).n128_u64[0] =
        LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v66).n128_u64[0])))
            .n64_u64[0];
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
            .n64_u64[0];
    LANES128(v68).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v69).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v63).n128_i8[8] =
        vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    *(int8x8_t*)&LANES128(v64).n128_i8[8] =
        vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v68).n128_u64[1] = LANES128(v63).n128_u64[1];
    LANES128(v69).n128_u64[1] = LANES128(v64).n128_u64[1];
    v70 = vmulq_f32(v63, v63);
    v96.val[1] = vmulq_f32(v64, v64);
    v71 = vmulq_f32(v68, v67);
    v72 = vmulq_laneq_f32(v69, v66, 3);
    v73 = vaddq_f32(v71, v71);
    v95.val[1] = vaddq_f32(v72, v72);
    v97.val[0] = vaddq_f32(v95.val[1], v73);
    v97.val[1] = vsubq_f32(v73, v95.val[1]);
    v96.val[0] = vsubq_f32(
        COERCE_AS(float32x4_t, GameData_1a837f0),
        vaddq_f32(vaddq_f32(v96.val[1], v96.val[1]), vaddq_f32(v70, v70)));
    LANES128(v95.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v97, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
            .n64_u64[0];
    LANES128(v96.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v97, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v95.val[1]).n128_i8[8] =
        vqtbl2_s8(v97, COERCE_AS(int8x8_t, 0x706050413121110LL));
    *(int8x8_t*)&LANES128(v96.val[1]).n128_i8[8] =
        vqtbl2_s8(v97, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
    v95.val[0] = v96.val[0];
    LANES128(v97.val[0]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v95, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v97.val[0]).n128_i8[8] =
        vqtbl2_s8(v95, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
    LANES128(v97.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v95, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v97.val[1]).n128_i8[8] =
        vqtbl2_s8(v95, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
    LANES128(v95.val[0]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v96, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
            .n64_u64[0];
    LANES128(v95.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v96, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL)))
            .n64_u64[0];
    v74 = v5[2];
    v96.val[1] = v5[3];
    LANES128(v95.val[0]).n128_u64[1] = LANES128(v95.val[1]).n128_u64[0];
    v95.val[1] = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v97.val[0], COERCE_FLOAT(*(_OWORD*)&v5[1])),
                       v97.val[1],
                       COERCE_AS(float32x2_t, LANES128(v5[1]).n128_u64[0]), 1),
        v95.val[0], v5[1], 2);
    *v5 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v97.val[0], COERCE_FLOAT(*v5)), v97.val[1],
                       COERCE_AS(float32x2_t, LANES128(*(v5)).n128_u64[0]), 1),
        v95.val[0], *v5, 2);
    v5[1] = v95.val[1];
    v5[2] = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v97.val[0], LANES128(v74).n128_f32[0]),
                       v97.val[1],
                       COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0]), 1),
        v95.val[0], v74, 2);
    v5[3] = vaddq_f32(
        vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v97.val[0], LANES128(v96.val[1]).n128_f32[0]),
                v97.val[1],
                COERCE_AS(float32x2_t, LANES128(v96.val[1]).n128_u64[0]), 1),
            v95.val[0], v96.val[1], 2),
        COERCE_AS(float32x4_t, 0));
    LANES128(v96.val[1]).n128_u32[1] = *(_DWORD*)(v3 + 84);
    v5[3] = v96.val[1];
  }
}

#pragma GCC visibility pop
