#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*wld_DynamicLightModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* DynamicLightModule_Destructor_alt1(_QWORD* result) __asm__(
    "DynamicLightModule_Destructor");
__int64 DynamicLightModule_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "DynamicLightModule_DeletingDestructor");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212df10;
extern int* GameData_212df08;
__int64 DynamicLightModule_c36de0(__int64 result, _QWORD* a2);
__int64 DynamicLightModule_Unknown7(__int64 result);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void DynamicLightModule_Destructor(_QWORD* a1);
void DynamicLightModule_DeletingDestructor(_QWORD* a1);

__int64 DynamicLightModule_c36de0(__int64 result, _QWORD* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int32x4_t v18;
  int8x16_t v19;
  int8x16_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  int32x4_t v30;
  int32x4_t v31;
  int32x4_t v32;
  int8x16_t v33;
  int8x16_t v34;
  int8x16_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  unsigned __int64 v39;
  int8x16_t v40;
  int8x16_t v41;
  int8x16_t v42;
  int8x16_t v43;
  int8x16_t v44;
  int* v45;
  int v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  _QWORD* v52;
  __int64 v53;

  *(_BYTE*)(result + 16) = 0;
  *(_DWORD*)(result + 17) = 33686018;
  *(_QWORD*)result = wld_DynamicLightModule_vtable;
  *(_QWORD*)(result + 8) = a2;
  v2 = (__int64*)GameData_212c2a0;
  *(_QWORD*)(result + 160) = 0;
  *(_WORD*)(result + 168) = 0;
  *(_QWORD*)(result + 184) = 0;
  *(_QWORD*)(result + 192) = 0;
  *(_QWORD*)(result + 176) = 0;
  v4 = *v2;
  v3 = v2[1];
  v6 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v2);
  v5 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v2 + 8);
  *(_QWORD*)(result + 32) = *v2;
  *(_QWORD*)(result + 40) = v3;
  *(_QWORD*)(result + 48) = v6;
  *(_QWORD*)(result + 56) = v5;
  *(_QWORD*)(result + 112) = v6;
  *(_QWORD*)(result + 120) = v5;
  *(_QWORD*)(result + 96) = v4;
  *(_QWORD*)(result + 104) = v3;
  v7 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v2 + 8);
  *(_QWORD*)(result + 64) = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v2);
  *(_QWORD*)(result + 72) = v7;
  v8 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v2);
  v11 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v2);
  v10 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v2 + 8);
  v9 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v2);
  *(_QWORD*)(result + 144) = v8;
  *(_QWORD*)(result + 152) = v9;
  *(_QWORD*)(result + 80) = v8;
  *(_QWORD*)(result + 88) = v9;
  *(_QWORD*)(result + 128) = v11;
  *(_QWORD*)(result + 136) = v10;
  *(_DWORD*)(result + 172) = 1065353216;
  v12 = a2[54];
  v13 = a2[55];
  v14 = a2[57];
  *(_QWORD*)(result + 112) = a2[56];
  *(_QWORD*)(result + 120) = v14;
  *(_QWORD*)(result + 96) = v12;
  *(_QWORD*)(result + 104) = v13;
  v15 = a2[59];
  v16 = a2[60];
  v17 = a2[61];
  v18 = *(int32x4_t*)(result + 96);
  v19 = *(int8x16_t*)(result + 112);
  *(_QWORD*)(result + 128) = a2[58];
  *(_QWORD*)(result + 136) = v15;
  *(_QWORD*)(result + 144) = v16;
  *(_QWORD*)(result + 152) = v17;
  v20 = *(int8x16_t*)(result + 128);
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v21).n128_i8[8] =
      vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v22).n128_i8[8] =
      vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v23 = vmulq_f32(vmulq_f32(v18, v21), v22);
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v22).n128_i8[8] =
      vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v24).n128_i8[8] =
      vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v25 = vsubq_f32(v23, vmulq_f32(vmulq_f32(v18, v22), v24));
  LANES128(v25).n128_u64[0] = LANES128_OF(vpaddq_f32(v25, v25)).n128_u64[0];
  v26 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v25).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v25).n128_u64[0]), 1));
  v27 = vrecpeq_f32(v26);
  v28 = vmulq_f32(v27, vrecpsq_f32(v27, v26));
  v29 = vmulq_f32(v28, vrecpsq_f32(v28, v26));
  v30 = vzip1q_s32(v18, v20);
  v31 = vzip2q_s32(v18, v20);
  v32 = vzip1q_s32(v19, COERCE_AS(int32x4_t, 0));
  v33 = vzip2q_s32(v30, v32);
  v34 = vzip1q_s32(v31, vzip2q_s32(v19, COERCE_AS(int32x4_t, 0)));
  v35 = vzip1q_s32(v30, v32);
  LANES128(v36).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v36).n128_i8[8] =
      vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v39 = LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  *(int8x8_t*)&LANES128(v37).n128_i8[8] =
      vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[1] = v39;
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v38).n128_i8[8] =
      vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v34).n128_i8[8] =
      vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v21).n128_i8[8] =
      vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v40 = vmulq_f32(v29, vmlsq_f32(vmulq_f32(v36, v19), v34, v37));
  v41 = vmulq_f32(v29, vmlsq_f32(vmulq_f32(v37, v21), v19, v38));
  v42 = vmulq_f32(v29, vmlsq_f32(vmulq_f32(v34, v38), v21, v36));
  v43 = vmlsq_laneq_f32(
      vmlsq_lane_f32(
          vmulq_n_f32(vnegq_f32(v40), COERCE_FLOAT(*(_OWORD*)(result + 144))),
          v41, *(float32x2_t*)(result + 144), 1),
      v42, *(float32x4_t*)(result + 144), 2);
  v44 = vceqzq_f32(v26);
  *(int8x16_t*)(result + 96) = vbicq_s8(v40, v44);
  *(int8x16_t*)(result + 112) = vbicq_s8(v41, v44);
  *(int8x16_t*)(result + 128) = vbicq_s8(v42, v44);
  *(int8x16_t*)(result + 144) = vbicq_s8(v43, v44);
  LOBYTE(v12) = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                     memory_order_acquire);
  v45 = GameData_212df08;
  if ((v12 & 1) == 0) {
    v52 = a2;
    v53 = result;
    v51 = __cxa_guard_acquire(GameData_212df10);
    v45 = GameData_212df08;
    a2 = v52;
    result = v53;
    if (v51 != 0) {
      *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release(GameData_212df10);
      v45 = GameData_212df08;
      a2 = v52;
      result = v53;
    }
  }
  v46 = *v45;
  v47 = a2[64];
  v48 = v47;
  while (v48 != a2[63]) {
    v49 = *(_DWORD*)(v48 - 16);
    v48 -= 16;
    v47 -= 16;
    if (v49 == v46) {
      if (a2[64] != v47) {
        v50 = *(_QWORD*)(v47 + 8);
        goto LABEL_8;
      }
      break;
    }
  }
  v50 = 0;
LABEL_8:
  *(_QWORD*)(result + 160) = v50;
  return result;
}

void DynamicLightModule_Destructor(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = a1[22];
  *a1 = wld_DynamicLightModule_vtable;
  if (v1 != 0) {
    v2 = (_QWORD*)a1[23];
    if ((_QWORD*)v1 == v2) {
      goto LABEL_8;
    }
    do {
      v5 = *(v2 - 12);
      v2 -= 12;
      v4 = v5;
      *v2 = 0;
      if (v5 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
      }
    } while (v2 != (_QWORD*)v1);
    v6 = a1[22];
    a1[23] = v1;
    v1 = v6;
    if (v6 != 0) {
    LABEL_8:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v1);
    }
  }
}

void DynamicLightModule_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[22];
  *a1 = wld_DynamicLightModule_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = (_QWORD*)a1[23];
    if ((_QWORD*)v1 == v4) {
      goto LABEL_8;
    }
    do {
      v6 = *(v4 - 12);
      v4 -= 12;
      v5 = v6;
      *v4 = 0;
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
      }
    } while (v4 != (_QWORD*)v1);
    v7 = a1[22];
    a1[23] = v1;
    v1 = v7;
    if (v7 != 0) {
    LABEL_8:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, v1);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, (__int64)a1);
}

__int64 DynamicLightModule_Unknown7(__int64 result)
{
  float32x4_t* v1;
  __int64 v2;
  unsigned __int8 v3;
  bool v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float* v10;
  float v11;
  _BYTE* v12;
  _BYTE* v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int16x4_t v18;
  int16x4_t v19;
  int16x4_t v20;
  int16x4_t v21;
  float32x2_t* v22;
  float32x2_t* i;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  unsigned __int64 v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  _QWORD v43[8];

  v1 = *(float32x4_t**)(result + 8);
  v2 = result;
  if ((*(_BYTE*)(result + 169) & 1) != 0) {
    v3 = 1;
  }
  else {
    v3 = 1;
    LANES64(v18).n64_u64[0] =
        LANES64_OF(vmovn_s32(vmvnq_s8(
                       vceqq_f32(v1[27], *(float32x4_t*)(result + 32)))))
            .n64_u64[0];
    if ((LANES64(v18).n64_u8[0] & 1) == 0 &&
        (LANES64(v18).n64_u8[2] & 1) == 0 &&
        (LANES64(v18).n64_u8[4] & 1) == 0) {
      LANES64(v19).n64_u64[0] =
          LANES64_OF(vmovn_s32(vmvnq_s8(
                         vceqq_f32(v1[28], *(float32x4_t*)(result + 48)))))
              .n64_u64[0];
      if ((LANES64(v19).n64_u8[0] & 1) == 0 &&
          (LANES64(v19).n64_u8[2] & 1) == 0 &&
          (LANES64(v19).n64_u8[4] & 1) == 0) {
        LANES64(v20).n64_u64[0] =
            LANES64_OF(vmovn_s32(vmvnq_s8(
                           vceqq_f32(v1[29], *(float32x4_t*)(result + 64)))))
                .n64_u64[0];
        if ((LANES64(v20).n64_u8[0] & 1) == 0 &&
            (LANES64(v20).n64_u8[2] & 1) == 0 &&
            (LANES64(v20).n64_u8[4] & 1) == 0) {
          LANES64(v21).n64_u64[0] =
              LANES64_OF(vmovn_s32(vmvnq_s8(
                             vceqq_f32(v1[30], *(float32x4_t*)(result + 80)))))
                  .n64_u64[0];
          if ((LANES64(v21).n64_u8[0] & 1) == 0 &&
              (LANES64(v21).n64_u8[2] & 1) == 0) {
            v3 = LANES64(v21).n64_u8[4];
          }
        }
      }
    }
  }
  v4 = false;
  if (LANES128(v1[18]).n128_u8[1] == 1 &&
      (LANES128(v1[18]).n128_u8[0] & 1) != 0) {
    if ((LANES128(v1[18]).n128_u8[12] & 0xFD) == 1) {
      v4 = false;
    }
    else {
      v42 = *(_QWORD*)(result + 8);
      do {
        v42 = *(_QWORD*)(v42 + 736);
        v4 = v42 == 0;
      } while (v42 != 0 && *(_BYTE*)(v42 + 289) == 1 &&
               *(_BYTE*)(v42 + 288) == 1 && (*(_BYTE*)(v42 + 300) & 0xFD) != 1);
    }
  }
  v5 = *(__int64**)(result + 176);
  v6 = *(__int64**)(result + 184);
  if (v5 != v6) {
    while (1) {
      v7 = *v5;
      result = *(_QWORD*)(*v5 + 16);
      if (result != 0) {
        result = std___1___shared_weak_count_lock(result);
        if (result == 0) {
          goto LABEL_9;
        }
        v8 = *(_QWORD*)(v7 + 8);
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          break;
        }
        v9 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v9);
        if (v8 != 0) {
          goto LABEL_16;
        }
      }
    LABEL_9:
      v5 += 12;
      if (v5 == v6) {
        goto LABEL_17;
      }
    }
    if (v8 == 0) {
      goto LABEL_9;
    }
  LABEL_16:
    *(_BYTE*)(*(_QWORD*)(v7 + 24) + 92LL) = v4;
    goto LABEL_9;
  }
LABEL_17:
  if (v4) {
    v10 = *(float**)(v2 + 160);
    if (v10 != nullptr && (*(_BYTE*)(v2 + 168) & 1) != 0) {
      v11 = v10[30] *
            (float)(v10[32] +
                    (float)(PSEUDO_UNFUSED(
                        (float)(0x1.0000000000000p+0f - v10[32]) * v10[31])));
      if (v11 != *(float*)(v2 + 172)) {
        v12 = *(_BYTE**)(v2 + 176);
        v13 = *(_BYTE**)(v2 + 184);
        for (*(float*)(v2 + 172) = v11; v12 != v13; v12 += 96) {
          if (v12[80] == 1) {
            v14 = *(_QWORD*)v12;
            result = *(_QWORD*)(*(_QWORD*)v12 + 16LL);
            if (result != 0) {
              v15 = *(_DWORD*)(v2 + 172);
              result = std___1___shared_weak_count_lock(result);
              if (result != 0) {
                v16 = *(_QWORD*)(v14 + 8);
                if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v17 = result;
                  (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
                  result = std___1___shared_weak_count___release_weak(v17);
                }
                if (v16 != 0) {
                  *(_DWORD*)(*(_QWORD*)(v14 + 24) + 72LL) = v15;
                }
              }
            }
          }
        }
      }
    }
    if ((v3 & 1) != 0) {
      v22 = *(float32x2_t**)(v2 + 176);
      for (i = *(float32x2_t**)(v2 + 184); v22 != i; v22 += 12) {
        v24 = v1[27];
        v25 = v1[28];
        v26 = v1[29];
        v27 = LANES64(*(v22)).n64_u64[0];
        v28 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v24,
                            COERCE_FLOAT(*(_OWORD*)LANES64(v22[2]).n64_u64)),
                v25, v22[2], 1),
            v26, *(float32x4_t*)LANES64(v22[2]).n64_u64, 2);
        v29 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v24,
                            COERCE_FLOAT(*(_OWORD*)LANES64(v22[4]).n64_u64)),
                v25, v22[4], 1),
            v26, *(float32x4_t*)LANES64(v22[4]).n64_u64, 2);
        v30 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v24,
                            COERCE_FLOAT(*(_OWORD*)LANES64(v22[6]).n64_u64)),
                v25, v22[6], 1),
            v26, *(float32x4_t*)LANES64(v22[6]).n64_u64, 2);
        v31 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v24,
                            COERCE_FLOAT(*(_OWORD*)LANES64(v22[8]).n64_u64)),
                v25, v22[8], 1),
            v26, *(float32x4_t*)LANES64(v22[8]).n64_u64, 2);
        v32 = *(float32x4_t*)(v2 + 96);
        v33 = *(float32x4_t*)(v2 + 112);
        v34 = *(float32x4_t*)(v2 + 128);
        v35 = *(float32x4_t*)(v2 + 144);
        v36 = vaddq_f32(v31, v1[30]);
        *(float32x4_t*)v43 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v32, LANES128(v28).n128_f32[0]), v33,
                           COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                           1),
            v34, v28, 2);
        *(float32x4_t*)&v43[2] = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v32, LANES128(v29).n128_f32[0]), v33,
                           COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]),
                           1),
            v34, v29, 2);
        *(float32x4_t*)&v43[4] = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v32, LANES128(v30).n128_f32[0]), v33,
                           COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                           1),
            v34, v30, 2);
        *(float32x4_t*)&v43[6] = vaddq_f32(
            v35, vmlaq_laneq_f32(
                     vmlaq_lane_f32(
                         vmulq_n_f32(v32, LANES128(v36).n128_f32[0]), v33,
                         COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]), 1),
                     v34, v36, 2));
        result = (*(__int64 (**)(unsigned __int64, _QWORD*))(*(_QWORD*)v27 +
                                                             24LL))(v27, v43);
      }
      v37 = LANES128(v1[30]).n128_u64[1];
      *(_QWORD*)(v2 + 72) = LANES128(v1[29]).n128_u64[1];
      *(_QWORD*)(v2 + 88) = v37;
      v38 = LANES128(v1[28]).n128_u64[1];
      *(_QWORD*)(v2 + 40) = LANES128(v1[27]).n128_u64[1];
      *(_QWORD*)(v2 + 56) = v38;
      v39 = LANES128(v1[27]).n128_u64[0];
      *(_QWORD*)(v2 + 48) = LANES128(v1[28]).n128_u64[0];
      *(_QWORD*)(v2 + 32) = v39;
      v40 = LANES128(v1[29]).n128_u64[0];
      v41 = LANES128(v1[30]).n128_u64[0];
      *(_BYTE*)(v2 + 169) = 0;
      *(_QWORD*)(v2 + 80) = v41;
      *(_QWORD*)(v2 + 64) = v40;
    }
  }
  return result;
}

#pragma GCC visibility pop
