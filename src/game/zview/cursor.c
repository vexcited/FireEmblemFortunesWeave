#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern __int64 (*GameData_1ff5f10[])();
extern __int64 (*game_zview_Cursor_vtable[])();
extern __int64 GameData_220f870;
extern int GameData_22230f8;
__int64 Cursor_Destructor_f565b0(_QWORD* a1);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_d740c0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_21a5680;
extern _UNKNOWN* GameData_212c2f8;
extern __int128 GameData_21a5670;
extern __int64 (*GameData_1fd87b8[])();
extern __int64 (*GameData_1fd87d8[])();
extern __int64 (*game_zview_Cursor_Impl_vtable[])();
extern __int64 GameData_212d310;
extern __int64 GameData_212eca0;
extern __int64 GameData_2131678;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d2f0;
extern __int64* GameData_212ec58[2];
extern __int64* GameData_212ed20[10];
struct PseudoSret GameRoutine_d75140(_QWORD, _QWORD, _QWORD);
__int64 Cursor_f566c0_alt1(__int64 a1, __int64 a2,
                           __int64 a3) __asm__("Cursor_f566c0");
__int64 Cursor_f57c50(__int64 a1);
__n128
Cursor_Impl_Destructor_alt1(__int64 a1) __asm__("Cursor_Impl_Destructor");
__int64* Manager_bc6460(float*, float32x4_t*, char);
unsigned __int128 Manager_bc6460_pair(float*, float32x4_t*,
                                      char) __asm__("Manager_bc6460");
__int64 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_14a1390_alt1(__int64*, char) __asm__("GameRoutine_14a1390");
__int64 GameRoutine_14a3920(__int64 result);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a837f0;
extern __int128 GameData_21a6120;
extern __int64* eft_g_effectSystem_ptr[3];
extern char GameData_1a9f09e;
__int64 Cursor_f57960(__int64 a1);
__attribute__((swiftcall)) void game_d74a00(PSEUDO_X8, float*);
__int64 game_zview_cf22c0(__int64, __int64, char);
__int64 game_zview_d16b40(float, double, double, double, double, double,
                          long double, __int64, __int64, __int128*,
                          unsigned __int64*, __int64);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6180;
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ebd0[3];
extern __int64* GameData_212ed08[13];
extern __int64* GameData_212eda8[10];
extern __int64 GameData_212dc38[7];
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float game_d26b60(__int64);
void game_cfc7c0(__int64, float*, char, float);
void Cursor_f56980(int8x16_t* a1);
__attribute__((swiftcall)) void game_d75140(PSEUDO_X8, __int64, int);
__int64 GameRoutine_d740c0_alt1(__int64, int*) __asm__("GameRoutine_d740c0");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 Cursor_f566c0(__int64 a1, __int64 a2);
__int64 GameHr_14a1390(__int64*, char);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void Cursor_Impl_Destructor(__int64 a1);

__int64 Cursor_Destructor_f565b0(_QWORD* a1)
{
  __int64 result;

  result = a1[1];
  *a1 = game_zview_Cursor_vtable;
  a1[1] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  *a1 = GameData_1ff5f10;
  if ((_QWORD*)GameData_220f870 == a1) {
    GameData_220f870 = 0;
    GameData_22230f8 = 0;
  }
  return result;
}

__int64 Cursor_f566c0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
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
  unsigned int v22;
  __int64 v23;
  struct {
    __int64 v24;
    __int64 v25;
  } v24_;
  struct {
    __int64 v26;
    int v27;
  } v26_;

  v2 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v2 + 356) & 1) == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(v2 + 344);
  v4 = *(_DWORD*)(v2 + 352);
  v26_.v26 = v3;
  v26_.v27 = v4;
  if ((GameRoutine_d740c0_alt1(a2, (int*)&v26_.v26) & 1) != 0) {
    return 0;
  }
  game_d75140((void*)(&v24_.v24), a2, 4);
  v7 = v24_.v24;
  v8 = v24_.v25;
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v24_.v24 == v24_.v25) {
  LABEL_9:
    if (v7 != 0) {
      v10 = *v9;
      v24_.v25 = v7;
      v11 = 128;
      if (*(_QWORD*)(v10 + 200) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v10 + v11, v7);
    }
    game_d75140((void*)(&v24_.v24), a2, 8);
    v7 = v24_.v24;
    v12 = v24_.v25;
    if (v24_.v24 == v24_.v25) {
    LABEL_17:
      if (v7 != 0) {
        v13 = *v9;
        v24_.v25 = v7;
        v14 = 128;
        if (*(_QWORD*)(v13 + 200) == 0) {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v13 + v14, v7);
      }
      game_d75140((void*)(&v24_.v24), a2, 16);
      v7 = v24_.v24;
      v15 = v24_.v25;
      if (v24_.v24 == v24_.v25) {
      LABEL_25:
        if (v7 != 0) {
          v16 = *v9;
          v24_.v25 = v7;
          v17 = 128;
          if (*(_QWORD*)(v16 + 200) == 0) {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v16 + v17, v7);
        }
        game_d75140((void*)(&v24_.v24), a2, 32);
        v7 = v24_.v24;
        v18 = v24_.v25;
        if (v24_.v24 == v24_.v25) {
        LABEL_33:
          result = 0;
          if (v7 == 0) {
            return result;
          }
          goto LABEL_36;
        }
        while ((GameRoutine_d740c0_alt1(v7, (int*)&v26_.v26) & 1) == 0) {
          v7 += 40;
          if (v7 == v18) {
            v7 = v24_.v24;
            goto LABEL_33;
          }
        }
      }
      else {
        while ((GameRoutine_d740c0_alt1(v7, (int*)&v26_.v26) & 1) == 0) {
          v7 += 40;
          if (v7 == v15) {
            v7 = v24_.v24;
            goto LABEL_25;
          }
        }
      }
    }
    else {
      while ((GameRoutine_d740c0_alt1(v7, (int*)&v26_.v26) & 1) == 0) {
        v7 += 40;
        if (v7 == v12) {
          v7 = v24_.v24;
          goto LABEL_17;
        }
      }
    }
  }
  else {
    while ((GameRoutine_d740c0_alt1(v7, (int*)&v26_.v26) & 1) == 0) {
      v7 += 40;
      if (v7 == v8) {
        v7 = v24_.v24;
        goto LABEL_9;
      }
    }
  }
  result = 1;
  *(_DWORD*)a2 = *(_DWORD*)v7;
  *(_DWORD*)(a2 + 4) = *(_DWORD*)(v7 + 4);
  *(_DWORD*)(a2 + 8) = *(_DWORD*)(v7 + 8);
  *(_DWORD*)(a2 + 12) = *(_DWORD*)(v7 + 12);
  *(_DWORD*)(a2 + 16) = *(_DWORD*)(v7 + 16);
  *(_DWORD*)(a2 + 20) = *(_DWORD*)(v7 + 20);
  v19 = *(_QWORD*)(v7 + 24);
  v20 = *(_QWORD*)(v7 + 32);
  v7 = v24_.v24;
  *(_QWORD*)(a2 + 24) = v19;
  *(_QWORD*)(a2 + 32) = v20;
  if (v7 == 0) {
    return result;
  }
LABEL_36:
  v21 = *v9;
  v22 = result;
  v24_.v25 = v7;
  v23 = 128;
  if (*(_QWORD*)(v21 + 200) == 0) {
    v23 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(v21 + v23, v7);
  return v22;
}

void Cursor_f56980(int8x16_t* a1)
{
  float v2;
  float v3;
  float v4;
  __int64 v5;
  long double v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  double v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  int8x16_t v30;
  __int128 v31;
  double v32;
  float v33;
  __int64 v34;
  float v35;
  float v36;
  float v37;
  unsigned __int64 v38;
  float v39;
  int8x16_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int8x16_t v43;
  int8x16_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int128 v55;
  int8x16_t v56[3];
  int8x16_t v57;

  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(float, "s1", "=w"));
  LANES128(a1[18]).n128_u32[0] = LANES128(a1[17]).n128_u32[2];
  LANES128(a1[18]).n128_u32[1] = LANES128(a1[17]).n128_u32[3];
  v2 = game_d26b60(*GameData_212ed08[0]),
  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(float, "s1", "=w"));
  v4 = LANES128(a1[13]).n128_f32[1];
  v5 = game_script_hub_g_frame_counter_ptr[0];
  LODWORD(v6) = LANES128(a1[18]).n128_u32[2];
  v7 = *(_QWORD*)game_script_hub_g_frame_counter_ptr[0];
  v8 = v4 * (float)(v2 * 0x1.0000000000000p+4f);
  v9 = v4 * (float)(v3 * 0x1.0000000000000p+4f);
  v10 = v8 - *(float*)&v6;
  *(float*)&v11 =
      (float)((float)(*(float*)(*(_QWORD*)
                                    game_script_hub_g_frame_counter_ptr[0] +
                                160LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f) *
      0x1.2c00000000000p+7f;
  v12 = LANES128(a1[18]).n128_f32[3];
  v13 = v9 - v12;
  if ((float)(v8 - *(float*)&v6) != 0x0.0p+0f || v13 != 0x0.0p+0f) {
    v14 = sqrtf((float)(PSEUDO_UNFUSED(v13 * v13)) + (float)(v10 * v10));
    v10 = v10 / v14;
    v13 = v13 / v14;
  }
  v15 = fabsf(*(float*)&v11 * fabsf(v10));
  v16 = *(float*)&v6 + v15;
  v17 = *(float*)&v6 - v15;
  v18 = sqrtf((float)(PSEUDO_UNFUSED(v3 * v3)) + (float)(v2 * v2));
  if (v16 > v8) {
    v16 = v8;
  }
  if (*(float*)&v6 >= v8) {
    v16 = LANES128(a1[18]).n128_f32[2];
  }
  if (v17 < v8) {
    v17 = v8;
  }
  v19 = *(float*)&v11 * fabsf(v13);
  if (*(float*)&v6 > v8) {
    v20 = v17;
  }
  else {
    v20 = v16;
  }
  LANES128(a1[18]).n128_f32[2] = v20;
  v21 = fabsf(v19);
  *(float*)&v6 = v12 + v21;
  *(float*)&v11 = v12 - v21;
  if (*(float*)&v6 > v9) {
    *(float*)&v6 = v9;
  }
  if (v12 >= v9) {
    *(float*)&v6 = v12;
  }
  if (*(float*)&v11 < v9) {
    *(float*)&v11 = v9;
  }
  if (v12 > v9) {
    v22 = *(float*)&v11;
  }
  else {
    v22 = *(float*)&v6;
  }
  LANES128(a1[18]).n128_f32[3] = v22;
  *(float*)(*(_QWORD*)GameData_212dc38[0] + 1152LL) = v18;
  v23 = (float)(*(float*)(v7 + 160) * 0x1.0aef000000000p+4f) /
        0x1.f400000000000p+9f;
  v24 = LANES128(a1[18]).n128_f32[2] * v23;
  v25 = v23 * LANES128(a1[18]).n128_f32[3];
  v26 = v24 + LANES128(a1[17]).n128_f32[2];
  v27 = LANES128(a1[17]).n128_f32[3];
  LANES128(a1[17]).n128_f32[2] = v26;
  v28 = v25 + v27;
  v29 = LANES128(a1[18]).n128_f32[0];
  LANES128(a1[17]).n128_f32[3] = v28;
  if ((float)((float)(PSEUDO_UNFUSED(
                  (float)(v28 - LANES128(a1[18]).n128_f32[1]) *
                  (float)(v28 - LANES128(a1[18]).n128_f32[1]))) +
              (float)((float)(v26 - v29) * (float)(v26 - v29))) != 0x0.0p+0f) {
    LANES128(v30).n128_u64[0] = LANES128(a1[17]).n128_u64[1];
    *(_QWORD*)&v31 = LANES128(a1[18]).n128_u64[0];
    LANES128(v30).n128_u32[1] = LANES128(a1[10]).n128_u32[2];
    *(_QWORD*)&v32 = DWORD1(v31);
    DWORD1(v31) = LANES128(v30).n128_u32[1];
    LANES128(v30).n128_u64[1] = HIDWORD(LANES128(a1[17]).n128_u64[1]);
    *((_QWORD*)&v31 + 1) = HIDWORD(LANES128(a1[18]).n128_u64[0]);
    v55 = v31;
    v56[0] = v30;
    game_zview_d16b40(0x1.cccccc0000000p-2f, LANES128(v30).n128_f64[1],
                      LANES128(v30).n128_f64[0], *(double*)&v31, v32, v11, v6,
                      *GameData_212ebd0[0],
                      (__int64)&LANES128(a1[21]).n128_i64[1], (__int128*)v56,
                      (unsigned __int64*)&v55, (__int64)v56),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(float, "s1", "=w"));
    *(int32x2_t*)&LANES128(a1[17]).n128_i8[8] = vzip1_s32(
        COERCE_AS(int32x2_t, LANES128(v56[0]).n128_u64[0]),
        COERCE_AS(int32x2_t,
                  LANES128_OF(vextq_s8(v56[0], v56[0], 8u)).n128_u64[0]));
  }
  if (LANES128(a1[11]).n128_u8[10] == 1 &&
      sqrtf((float)(PSEUDO_UNFUSED(LANES128(a1[18]).n128_f32[3] *
                                   LANES128(a1[18]).n128_f32[3])) +
            (float)(LANES128(a1[18]).n128_f32[2] *
                    LANES128(a1[18]).n128_f32[2])) > 0x1.0000000000000p+3f) {
    LANES128(a1[12]).n128_f32[1] =
        fmaxf(LANES128(a1[12]).n128_f32[1], 0x1.99999a0000000p-3f);
  }
  v33 = *(float*)(*(_QWORD*)v5 + 160LL);
  v34 = *GameData_212eba8[0];
  *(_QWORD*)&v55 = *(_QWORD*)(*(_QWORD*)(*GameData_212eda8[0] + 8) + 280LL);
  game_d74a00((void*)((__int64)v56), (float*)&v55),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(float, "s1", "=w"));
  if (game_zview_cf22c0(v34, (__int64)v56, 1) != 0) {
    v35 = (float)(v33 * 0x1.0aef000000000p+4f) / 0x1.f400000000000p+9f;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0) {
      v51 = (float)(v33 * 0x1.0aef000000000p+4f) / 0x1.f400000000000p+9f;
      v52 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6190),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(float, "s1", "=w"));
      v35 = v51;
      if (v52 != 0) {
        v53 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v53;
        __cxa_guard_release_alt1((__int64)&GameData_21a6190),
            v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(float, "s1", "=w"));
        v35 = v51;
      }
    }
    v36 = (float)(PSEUDO_UNFUSED((float)((float)(v35 * 0x1.921fb60000000p+1f) *
                                         0x1.3333340000000p-2f) *
                                 0x1.0000000000000p-1f)) +
          (float)(roundf((float)((float)((float)(v35 * 0x1.921fb60000000p+1f) *
                                         0x1.3333340000000p-2f) *
                                 0x1.0000000000000p-1f) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    if (v36 <= 0x1.921fb60000000p+0f) {
      v39 = 0x1.0000000000000p+0f;
      if (v36 >= -0x1.921fb60000000p+0f) {
      LABEL_36:
        v40 = vmulq_f32(COERCE_AS(float32x4_t, GameData_21a6180),
                        COERCE_AS(float32x4_t, GameData_21a6180));
        LANES128(v40).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
                .n64_u64[0];
        LANES128(v40).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
                .n64_u64[0];
        LANES128(v40).n128_u64[1] = LANES128(v40).n128_u64[0];
        v41 = vrsqrteq_f32(v40);
        v42 = vmulq_f32(v41, vrsqrtsq_f32(v41, vmulq_f32(v40, v41)));
        v43 = vmulq_n_f32(
            vbicq_s8(vmulq_f32(COERCE_AS(float32x4_t, GameData_21a6180),
                               vmulq_f32(v42, vrsqrtsq_f32(
                                                  v42, vmulq_f32(v40, v42)))),
                     vceqzq_f32(v40)),
            v36 *
                (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
                                                     (_QWORD)GameData_212c190) -
                                           (float)((float)(*(float*)((char*)((
                                                                         _UNKNOWN**)0x8LL) +
                                                                     (_QWORD)
                                                                         GameData_212c190 +
                                                                     4) +
                                                           (float)((float)-(
                                                                       float)(*(float*)((char*)((
                                                                                            _UNKNOWN**)0x8LL) +
                                                                                        (_QWORD)
                                                                                            GameData_212c190) -
                                                                              (float)((float)(*((float*)
                                                                                                    GameData_212c190 +
                                                                                                1) -
                                                                                              (float)(*(float*)
                                                                                                          GameData_212c190 *
                                                                                                      (float)(v36 *
                                                                                                              v36))) *
                                                                                      (float)(v36 *
                                                                                              v36))) *
                                                                   (float)(v36 *
                                                                           v36))) *
                                                   (float)(v36 * v36))) *
                                (float)(v36 * v36)) +
                        0x1.0000000000000p+0f));
        LANES128(v40).n128_u64[0] =
            LANES64_OF(vdup_lane_s32(
                           COERCE_AS(int32x2_t, LANES128(v43).n128_u64[0]), 1))
                .n64_u64[0];
        LANES128(v43).n128_f32[3] =
            v39 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c188) -
                                       (float)((float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                     GameData_212c188 +
                                                                 4) +
                                                       (float)((float)-(
                                                                   float)(*(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        GameData_212c188) -
                                                                          (float)((float)(*((float*)
                                                                                                GameData_212c188 +
                                                                                            1) -
                                                                                          (float)(*(float*)
                                                                                                      GameData_212c188 *
                                                                                                  (float)(v36 *
                                                                                                          v36))) *
                                                                                  (float)(v36 *
                                                                                          v36))) *
                                                               (float)(v36 *
                                                                       v36))) *
                                               (float)(v36 * v36))) *
                            (float)(v36 * v36)) +
                    0x1.0000000000000p+0f);
        v44 = a1[19];
        LANES128(v45).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        v57 = v43;
        LANES128(v46).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v47).n128_u64[0] = LANES128(a1[19]).n128_u64[0];
        LANES128(v45).n128_u64[1] = LANES128(v45).n128_u64[0];
        LANES128(v47).n128_u64[1] = LANES128(v46).n128_u64[0];
        LANES128(v48).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v49 = vmulq_f32(v43, v45);
        LANES128(v43).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v48).n128_u64[1] = LANES128(v40).n128_u64[0];
        *(int8x8_t*)&LANES128(v43).n128_i8[8] =
            vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        v50 = vmlaq_f32(v49, COERCE_AS(float32x4_t, GameData_1a83800),
                        vmulq_f32(v47, v43));
        LANES128(v47).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v46).n128_u64[1] = LANES128(v47).n128_u64[0];
        LANES128(v47).n128_u64[1] = LANES128(a1[19]).n128_u64[0];
        LANES128(v44).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v44).n128_i8[8] =
            vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        a1[19] =
            vmlsq_f32(vmlaq_f32(v50, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v47, v48)),
                      v44, v46);
        goto LABEL_37;
      }
      v37 = -0x1.921fb60000000p+1f;
    }
    else {
      v37 = 0x1.921fb60000000p+1f;
    }
    v36 = v37 - v36;
    v39 = -0x1.0000000000000p+0f;
    goto LABEL_36;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21a5680) != 0) {
    v54 = *((_QWORD*)GameData_212c2f8 + 1);
    *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
    *((_QWORD*)&GameData_21a5670 + 1) = v54;
    __cxa_guard_release_alt1((__int64)&GameData_21a5680),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v38 = LANES128_OF(vextq_s8(COERCE_AS(int8x16_t, GameData_21a5670),
                             COERCE_AS(int8x16_t, GameData_21a5670), 8u))
            .n128_u64[0];
  LANES128(a1[19]).n128_u64[0] = GameData_21a5670;
  LANES128(a1[19]).n128_u64[1] = v38;
LABEL_37:
  game_cfc7c0((__int64)&a1[8], &LANES128(a1[17]).n128_f32[2], 0,
              (float)(*(float*)(*(_QWORD*)v5 + 160LL) * 0x1.0aef000000000p+4f) /
                  0x1.f400000000000p+9f),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(float, "s1", "=w"));
}

__int64 Cursor_f57960(__int64 a1)
{

#pragma clang fp contract(off)
  _DWORD* v2;
  unsigned __int8 explicit;
  _QWORD* v4;
  float* v5;
  __int64 v6;
  __int64* v7;
  unsigned int v8;
  __n128 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  __int128 v18;
  __int64 v19;
  __int64 v21;
  struct {
    float32x4_t v22;
    const char* v23;
    int v24;
    char gap28_[4];
    __int128 v25;
    __int128 v26;
    __int64 v27;
    __int64 v28;
  } v22_;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(a1 + 321) == 1 && (*(_BYTE*)(a1 + 320) & 1) != 0) {
    v2 = *(_DWORD**)(a1 + 416);
    if (*(_QWORD*)v2 == 0 || *(_DWORD*)(*(_QWORD*)v2 + 16LL) != v2[2]) {
      explicit = atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                      memory_order_acquire);
      v4 = GameData_212c540;
      if ((explicit & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
        v21 = v4[1];
        *(_QWORD*)&GameData_21a6120 = *v4;
        *((_QWORD*)&GameData_21a6120 + 1) = v21;
        __cxa_guard_release(&GameData_21a6130),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v22_.v22 = (__typeof__(v22_.v22)){0};
      v5 = (float*)*eft_g_effectSystem_ptr[0];
      v22_.v24 = 6;
      v22_.v25 = GameData_21a6120;
      v6 = v4[1];
      v22_.v27 = *v4;
      v22_.v28 = v6;
      v22_.v26 = GameData_1a837f0;
      v22_.v23 = "UI_ZoomView_Cursor";
      v7 = ({
        unsigned __int128 r_ = Manager_bc6460_pair(v5, &v22_.v22, 1);
        v8 = COERCE_AS(__typeof__(v8), (unsigned long long)(r_ >> 64));
        (__int64*)(unsigned long long)r_;
      });
      GameRoutine_14a10d0(&v22_.v22, (__int64)v7, v8,
                          (__int64)&GameData_1a9f09e),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v11 = LANES128(v22_.v22).n128_u64[1];
      v10 = LANES128(v22_.v22).n128_u64[0];
      if (LANES128(v22_.v22).n128_u64[1] != 0) {
        atomic_fetch_add_explicit(
            (atomic_ullong* volatile)(LANES128(v22_.v22).n128_u64[1] + 8), 1u,
            memory_order_relaxed);
      }
      v12 = *(_QWORD*)(a1 + 424);
      *(_QWORD*)(a1 + 416) = v10;
      *(_QWORD*)(a1 + 424) = v11;
      if (v12 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v9 = std___1___shared_weak_count___release_weak_alt1(v12),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v11 = *(_QWORD*)(a1 + 424);
      }
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)v11 + 16LL))(v11),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v9 = std___1___shared_weak_count___release_weak_alt1(v11),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v13 = LANES128(v22_.v22).n128_u64[1];
      if (LANES128(v22_.v22).n128_u64[1] != 0 &&
          atomic_fetch_add(
              (atomic_ullong* volatile)(LANES128(v22_.v22).n128_u64[1] + 8),
              0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v13 + 16LL))(
            v13, *(long double*)&v9),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v13),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  else {
    GameRoutine_14a1390_alt1((__int64*)(a1 + 416), 1),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v14 = *(_QWORD*)(a1 + 416);
  v15 = *(_QWORD*)v14;
  if (*(_QWORD*)v14 != 0 && *(_DWORD*)(v15 + 16) == *(_DWORD*)(v14 + 8)) {
    v16 = *(_DWORD*)(v15 + 36);
    if (v16 != 0) {
      *(_QWORD*)&v18 = *(_QWORD*)(a1 + 280);
      v17 = 0;
      DWORD1(v18) = *(_DWORD*)(a1 + 168);
      *((_QWORD*)&v18 + 1) = (unsigned int)HIDWORD(*(_QWORD*)(a1 + 280));
      do {
        if ((int)v16 > (int)v17) {
          v19 = *(_QWORD*)(v15 + 40 + 8LL * (int)v17);
          if (v19 != 0) {
            *(_OWORD*)(v19 + 16) = v18;
            *(_BYTE*)(v19 + 128) = 1;
            v16 = *(_DWORD*)(v15 + 36);
          }
        }
        ++v17;
      } while (v17 < v16);
    }
  }
  return GameRoutine_14a3920(v14);
}

__int64 Cursor_f57c50(__int64 a1)
{
  __int64 v2;
  __int128 v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  char v17;
  __int64 result;
  atomic_ullong* v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;

  *(_BYTE*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 28) = 0;
  *(_BYTE*)(a1 + 32) = 0;
  *(_BYTE*)(a1 + 36) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)a1 = game_zview_Cursor_Impl_vtable;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_WORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 16) = GameData_212ec58[0] + 2;
  v2 = GameData_212eca0;
  *(_DWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 184) = 0;
  *(_BYTE*)(a1 + 188) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_BYTE*)(a1 + 189) = 1;
  *(_BYTE*)(a1 + 220) = 0;
  *(_BYTE*)(a1 + 224) = 0;
  *(_BYTE*)(a1 + 240) = 0;
  *(_BYTE*)(a1 + 248) = 0;
  *(_BYTE*)(a1 + 252) = 0;
  *(_BYTE*)(a1 + 256) = 0;
  *(_DWORD*)(a1 + 260) = 0;
  *(_WORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_DWORD*)(a1 + 208) = 0;
  *(_BYTE*)(a1 + 232) = 0;
  *(_DWORD*)(a1 + 236) = 0;
  *(_DWORD*)(a1 + 268) = 0;
  *(_WORD*)(a1 + 272) = 256;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 128) = v2 + 16;
  *(_QWORD*)(a1 + 212) = 1065353216;
  *(_DWORD*)(a1 + 228) = -1027080192;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a5680) != 0) {
    v23 = *((_QWORD*)GameData_212c2f8 + 1);
    *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
    *((_QWORD*)&GameData_21a5670 + 1) = v23;
    __cxa_guard_release(&GameData_21a5680);
  }
  v3 = GameData_21a5670;
  *(_WORD*)(a1 + 320) = 256;
  *(_OWORD*)(a1 + 304) = v3;
  v4 = GameData_212d2f0;
  *(_DWORD*)(a1 + 336) = 0;
  *(_BYTE*)(a1 + 344) = 0;
  *(_BYTE*)(a1 + 356) = 0;
  *(_BYTE*)(a1 + 360) = 0;
  *(_BYTE*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 328) = v4 + 2;
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      296, 16, 0);
  *(_QWORD*)(v6 + 16) = 0;
  v7 = GameData_2131678;
  *(_DWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_DWORD*)(v6 + 48) = 0x2000;
  v8 = v7 + 16;
  *(_DWORD*)(v6 + 104) = 0;
  *(_WORD*)(v6 + 108) = 256;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_WORD*)(v6 + 80) = 0;
  *(_DWORD*)(v6 + 112) = -1082130432;
  *(_WORD*)(v6 + 116) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_BYTE*)(v6 + 160) = 0;
  *(_BYTE*)(v6 + 288) = 0;
  *(_QWORD*)(v6 + 272) = 0;
  *(_QWORD*)(v6 + 280) = 0;
  *(_QWORD*)(v6 + 256) = 0;
  *(_QWORD*)(v6 + 264) = 0;
  *(_QWORD*)(v6 + 240) = 0;
  *(_QWORD*)(v6 + 248) = 0;
  *(_QWORD*)(v6 + 224) = 0;
  *(_QWORD*)(v6 + 232) = 0;
  *(_QWORD*)(v6 + 208) = 0;
  *(_QWORD*)(v6 + 216) = 0;
  *(_QWORD*)(v6 + 192) = 0;
  *(_QWORD*)(v6 + 200) = 0;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 184) = 0;
  *(_QWORD*)(v6 + 168) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_DWORD*)(v6 + 127) = 0;
  *(_DWORD*)(v6 + 292) = 2;
  *(_QWORD*)(a1 + 392) = v6;
  *(_QWORD*)(v6 + 24) = 0;
  v9 = v6 + 24;
  *(_QWORD*)v6 = v8;
  *(_QWORD*)(v6 + 8) = 0;
  v10 = *v5;
  *(_QWORD*)(a1 + 384) = v9;
  v11 = fw_memory_HeapManager_Allocate(v10, 296, 16, 0);
  *(_QWORD*)(v11 + 8) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  *(_QWORD*)v11 = v8;
  v12 = v11;
  *(_DWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_DWORD*)(v11 + 48) = 0x2000;
  *(_DWORD*)(v11 + 104) = 0;
  *(_WORD*)(v11 + 108) = 256;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  *(_WORD*)(v11 + 80) = 0;
  *(_DWORD*)(v11 + 112) = -1082130432;
  *(_WORD*)(v11 + 116) = 0;
  *(_WORD*)(v11 + 136) = 0;
  *(_BYTE*)(v11 + 160) = 0;
  *(_BYTE*)(v11 + 288) = 0;
  *(_QWORD*)(v11 + 272) = 0;
  *(_QWORD*)(v11 + 280) = 0;
  *(_QWORD*)(v11 + 256) = 0;
  *(_QWORD*)(v11 + 264) = 0;
  *(_QWORD*)(v11 + 240) = 0;
  *(_QWORD*)(v11 + 248) = 0;
  *(_QWORD*)(v11 + 224) = 0;
  *(_QWORD*)(v11 + 232) = 0;
  *(_QWORD*)(v11 + 208) = 0;
  *(_QWORD*)(v11 + 216) = 0;
  *(_QWORD*)(v11 + 192) = 0;
  *(_QWORD*)(v11 + 200) = 0;
  *(_QWORD*)(v11 + 176) = 0;
  *(_QWORD*)(v11 + 184) = 0;
  *(_QWORD*)(v11 + 168) = 0;
  *(_QWORD*)(v11 + 120) = 0;
  *(_DWORD*)(v11 + 127) = 0;
  *(_DWORD*)(v11 + 292) = 2;
  *(_QWORD*)(a1 + 408) = v11;
  v13 = *v5;
  *(_QWORD*)(v12 + 24) = 0;
  *(_QWORD*)(a1 + 400) = v12 + 24;
  v14 = fw_memory_HeapManager_Allocate(v13, 296, 16, 0);
  *(_QWORD*)(v14 + 24) = 0;
  *(_QWORD*)(v14 + 8) = 0;
  *(_QWORD*)(v14 + 16) = 0;
  *(_QWORD*)v14 = v8;
  *(_DWORD*)(v14 + 32) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_DWORD*)(v14 + 48) = 0x2000;
  *(_DWORD*)(v14 + 104) = 0;
  *(_WORD*)(v14 + 108) = 256;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(a1 + 416) = v14 + 24;
  *(_QWORD*)(a1 + 424) = v14;
  v15 = *(_BYTE*)(a1 + 356);
  *(_QWORD*)(v14 + 72) = 0;
  *(_WORD*)(v14 + 80) = 0;
  *(_DWORD*)(v14 + 112) = -1082130432;
  *(_WORD*)(v14 + 116) = 0;
  *(_WORD*)(v14 + 136) = 0;
  *(_BYTE*)(v14 + 160) = 0;
  *(_BYTE*)(v14 + 288) = 0;
  *(_QWORD*)(v14 + 272) = 0;
  *(_QWORD*)(v14 + 280) = 0;
  *(_QWORD*)(v14 + 256) = 0;
  *(_QWORD*)(v14 + 264) = 0;
  *(_QWORD*)(v14 + 240) = 0;
  *(_QWORD*)(v14 + 248) = 0;
  *(_QWORD*)(v14 + 224) = 0;
  *(_QWORD*)(v14 + 232) = 0;
  *(_QWORD*)(v14 + 208) = 0;
  *(_QWORD*)(v14 + 216) = 0;
  *(_QWORD*)(v14 + 192) = 0;
  *(_QWORD*)(v14 + 200) = 0;
  *(_QWORD*)(v14 + 176) = 0;
  *(_QWORD*)(v14 + 184) = 0;
  *(_QWORD*)(v14 + 168) = 0;
  *(_QWORD*)(v14 + 120) = 0;
  *(_DWORD*)(v14 + 127) = 0;
  *(_DWORD*)(v14 + 292) = 2;
  *(_BYTE*)(a1 + 464) = 0;
  *(_WORD*)(a1 + 480) = 256;
  *(_BYTE*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_DWORD*)(a1 + 344) = 7;
  *(_WORD*)(a1 + 348) = 0;
  *(_DWORD*)(a1 + 352) = 1;
  if ((v15 & 1) == 0) {
    *(_BYTE*)(a1 + 356) = 1;
  }
  if (*(_QWORD*)GameData_212d310 != 0 &&
      *(_DWORD*)(*(_QWORD*)GameData_212d310 + 8LL) == 1) {
    v16 = 2048;
  }
  else {
    v16 = 0x11000000000000LL;
  }
  v17 = *(_BYTE*)(a1 + 376);
  *(_QWORD*)(a1 + 360) = v16;
  *(_QWORD*)(a1 + 368) = 1050253722;
  if ((v17 & 1) == 0) {
    *(_BYTE*)(a1 + 376) = 1;
  }
  result = fw_memory_HeapManager_Allocate(*v5, 56, 16, 0);
  *(_QWORD*)(result + 8) = 0;
  v19 = (atomic_ullong*)(result + 8);
  *(_QWORD*)(result + 16) = 0;
  v20 = result;
  v21 = GameData_212ed20[0];
  *(_QWORD*)(result + 40) = a1 + 344;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)result = v21 + 2;
  *(_QWORD*)(result + 24) = 0xC27000003EE66666LL;
  *(_QWORD*)(result + 32) = 0x1C1F00000LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 8), 1u,
                            memory_order_relaxed);
  v22 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a1 + 144) = result + 24;
  *(_QWORD*)(a1 + 152) = result;
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    result = std___1___shared_weak_count___release_weak(v22);
  }
  if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      return result;
    }
  LABEL_17:
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    return std___1___shared_weak_count___release_weak(v20);
  }
  (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
  result = std___1___shared_weak_count___release_weak(v20);
  if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    goto LABEL_17;
  }
  return result;
}

void Cursor_Impl_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  *(_QWORD*)a1 = game_zview_Cursor_Impl_vtable;
  GameHr_14a1390((__int64*)(a1 + 384), 1);
  GameHr_14a1390((__int64*)(a1 + 400), 1);
  GameHr_14a1390((__int64*)(a1 + 416), 1);
  v2 = *(_QWORD*)(a1 + 424);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt2(v2);
  }
  v3 = *(_QWORD*)(a1 + 408);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt2(v3);
  }
  v4 = *(_QWORD*)(a1 + 392);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt2(v4);
  }
  v5 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a1 + 128) = GameData_1fd87d8;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt2(v5);
  }
  *(_QWORD*)(a1 + 16) = GameData_1fd87b8;
  if (*(_BYTE*)(a1 + 28) == 1) {
    v6 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL * *(int*)(a1 + 24));
    (*(void (**)(__int64))(*(_QWORD*)v6 + 40LL))(v6);
    if (*(_BYTE*)(a1 + 28) == 1) {
      *(_BYTE*)(a1 + 28) = 0;
    }
  }
  v7 = *(_QWORD**)(a1 + 40);
  v8 = *(_QWORD**)(a1 + 48);
  if (v7 != v8) {
    do {
      if (*v7 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v7 + 8LL))(*v7);
        *v7 = 0;
      }
      ++v7;
    } while (v7 != v8);
    v7 = *(_QWORD**)(a1 + 40);
  }
  v9 = *(_QWORD**)(a1 + 96);
  *(_QWORD*)(a1 + 48) = v7;
  if (v9 == (_QWORD*)(a1 + 64)) {
    v10 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_27;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
  v7 = *(_QWORD**)(a1 + 40);
LABEL_27:
  if (v7 != nullptr) {
    *(_QWORD*)(a1 + 48) = v7;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v7);
  }
}

#pragma GCC visibility pop
