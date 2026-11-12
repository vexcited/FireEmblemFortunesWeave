#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_bd7800(void);
__int64 GameRoutine_bd7d60(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterMaterial_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* CharacterMaterial_bd7600(_QWORD* result);
__int64 CharacterMaterial_Unknown7(__int64 a1);
__int64 CharacterMaterial_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "CharacterMaterial_DeletingDestructor");
__int64 Material_ade2c0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern char GameData_2167610;
extern char GameData_2167614;
extern int GameData_2167618;
extern int GameData_216761c;
float tanf(float);
void CharacterMaterial_bd7800(__int64 a1, __int64 a2);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CharacterMaterial_DeletingDestructor(_QWORD* a1);

_QWORD* CharacterMaterial_bd7600(_QWORD* result)
{
  double v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64* i;
  __int64 v12;
  __int64* v13;
  __int64* j;
  __int64 v15;

  v2 = result[32];
  v3 = result;
  v4 = *(_QWORD*)(result[30] + 24LL);
  if (v2 != 0) {
    v5 = *(__int64**)(v4 + 312);
    v6 = *(__int64**)(v4 + 320);
    if (v5 == v6) {
      goto LABEL_6;
    }
    do {
      v7 = *v5;
      v5 += 2;
      result = (_QWORD*)(*(__int64 (**)(__int64, const char*, __int64,
                                        long double))(*(_QWORD*)v7 + 32LL))(
          v7, "HeadJointPos", 12, *(long double*)(v2 + 208));
    } while (v5 != v6);
    if (v3[32] != 0) {
      v5 = *(__int64**)(v4 + 312);
    LABEL_6:
      v8 = v3[33];
      if (v8 != 0) {
        v9 = *(__int64**)(v4 + 320);
        if (v5 != v9) {
          LODWORD(v1) = *(_DWORD*)(v8 + 212);
          do {
            v10 = *v5;
            v5 += 2;
            result = (_QWORD*)(*(__int64 (**)(__int64, const char*, __int64,
                                              double))(*(_QWORD*)v10 + 24LL))(
                v10, "RimBiasParams", 13, v1);
          } while (v5 != v9);
        }
        return result;
      }
      goto LABEL_13;
    }
  LABEL_12:
    v5 = *(__int64**)(v4 + 312);
  LABEL_13:
    for (i = *(__int64**)(v4 + 320); v5 != i;
         result =
             (_QWORD*)(*(__int64 (**)(__int64, const char*, __int64, double))(
                 *(_QWORD*)v12 + 16LL))(v12, "RimBiasEnabled", 14, 0.0)) {
      v12 = *v5;
      v5 += 2;
    }
    return result;
  }
  if (result[33] != 0) {
    goto LABEL_12;
  }
  v13 = *(__int64**)(v4 + 312);
  for (j = *(__int64**)(v4 + 320); v13 != j;
       result =
           (_QWORD*)(*(__int64 (**)(__int64, const char*, __int64, double))(
               *(_QWORD*)v15 + 16LL))(v15, "RimBiasEnabled", 14, 0.0)) {
    v15 = *v13;
    v13 += 2;
  }
  return result;
}

__int64 CharacterMaterial_Unknown7(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;

  GameRoutine_bd7800();
  v2 = *(_QWORD*)(a1 + 264);
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 240) + 24LL);
  if (v2 != 0) {
    v4 = *(float*)(v2 + 212);
  }
  else {
    v4 = 0.0;
  }
  v5 = *(__int64**)(v3 + 312);
  v6 = *(__int64**)(v3 + 320);
  while (v5 != v6) {
    v7 = *v5;
    v5 += 2;
    (*(void (**)(__int64, const char*, __int64, float))(*(_QWORD*)v7 + 16LL))(
        v7, "RootPositionY", 13, v4);
  }
  return GameRoutine_bd7d60(a1);
}

void CharacterMaterial_bd7800(__int64 a1, __int64 a2)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  bool v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  float32x4_t v18;
  float32x4_t v19;
  int8x16_t v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  _BYTE* v43;
  int v44;
  unsigned __int64 v45;
  __int64 v46;
  _BYTE* v47;
  int v48;
  float v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 i;
  float v56;
  int v57;
  __int64 v58;
  float v59;
  float v60;
  float v61;
  float v62;

  v3 = *(_QWORD*)(a1 + 80) & 0xFLL;
  v7 = GameData_2167614 == 1;
  v4 = *(_QWORD*)(a1 + 80) & 0xFFFFFFFFFFFFFFF6LL |
       (unsigned __int8)GameData_2167610 ^ 1LL |
       (8LL * *(unsigned __int8*)(a1 + 88));
  *(_DWORD*)(a1 + 36) = 1065353216;
  v5 = v4 & 0xFFFFFFFFFFFFFFFBLL;
  v6 = v4 & 0xB;
  *(_QWORD*)(a1 + 80) = v5;
  v7 = v7 && v6 == 0;
  if (!v7) {
    v8 = 0x1.0000000000000p+0;
    goto LABEL_33;
  }
  v9 = *(_QWORD*)(a1 + 128);
  if (v9 == 0 || *(_QWORD*)(v9 + 8) == -1) {
    v12 = *(_QWORD*)(a1 + 240);
    v13 = *(_QWORD*)(v12 + 40);
    v14 = *(_QWORD*)(v12 + 48);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
    v15 = std___1___shared_weak_count_lock(v14);
    if (*(int*)v13 <= 0) {
      v11 = 0;
      v10 = 0;
    }
    else {
      v16 = *(__int64**)(v13 + 112);
      v11 = *v16;
      v10 = v16[1];
      if (v10 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                  memory_order_relaxed);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v17 = v15;
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v17);
    }
    std___1___shared_weak_count___release_weak(v14);
  }
  else {
    v10 = std___1___shared_weak_count_lock(v9);
    if (v10 != 0) {
      v11 = *(_QWORD*)(a1 + 120);
    }
    else {
      v11 = 0;
    }
  }
  LANES128(v18).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v18).n128_u64[1] = 0x3F0000003F000000LL;
  v19 = vsubq_f32(
      vmulq_f32(
          vaddq_f32(
              *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(a1 + 240) + 24LL) + 48LL),
              *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(a1 + 240) + 24LL) + 64LL)),
          v18),
      COERCE_FLOAT32X4_T(
          ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v11 + 40LL))(v11)));
  v20 = vmulq_f32(v19, v19);
  LANES128(v20).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
          .n64_u64[0];
  LODWORD(v62) =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
          .n64_u32[0];
  v21 = (*(float (**)(__int64))(*(_QWORD*)v11 + 72LL))(v11);
  v8 = 0.0;
  v22 = tanf(v21 * 0x1.0000000000000p-1) / 0x1.7247460000000p-2;
  v23 = *(float*)(a1 + 76);
  v24 = v23 + 0x1.99999a0000000p+1;
  v25 = (float)(v23 + *(float*)&GameData_2167618) + *(float*)(a1 + 72);
  if ((float)(v24 + 0x1.99999a0000000p-4) >= v25) {
    v25 = v24 + 0x1.99999a0000000p-4;
  }
  v26 = (float)(v22 * v22) * v62;
  if (v26 < (float)(v25 * v25)) {
    if (v26 > 0x1.d97f640000000p+0) {
      v27 = fmaxf(v24, 0x1.75c2900000000p+0);
      v28 = -sqrtf(v62);
      if (v26 > (float)(v27 * v27)) {
        v8 = (float)((float)(0x1.0000000000000p+0 -
                             (float)((float)(v25 + (float)(v28 * v22)) /
                                     (float)(v25 - v27))) *
                     0.0) +
             (float)((float)((float)(v25 + (float)(v28 * v22)) /
                             (float)(v25 - v27)) *
                     0x1.cccccc0000000p-1);
        if (v10 == 0) {
          goto LABEL_30;
        }
      LABEL_28:
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
        }
        goto LABEL_30;
      }
      v29 = (float)(v27 + (float)(v28 * v22)) /
            (float)(v27 + -0x1.5c28f60000000p+0);
      if (v29 != 0x1.0000000000000p+0) {
        v59 = (float)(v29 * 0x1.0000000000000p-1) + 0x1.cccccc0000000p-1;
        v60 = fmaxf(v59, 0x1.6666660000000p+0);
        v61 = fminf(v59, 0x1.6666660000000p+0);
        if (v29 <= 0x1.0000000000000p+0) {
          v8 = v61;
        }
        else {
          v8 = v60;
        }
        if (v10 == 0) {
          goto LABEL_30;
        }
        goto LABEL_28;
      }
    }
    v8 = 0x1.6666660000000p+0;
  }
  if (v10 != 0) {
    goto LABEL_28;
  }
LABEL_30:
  v30 = *(_QWORD*)(a1 + 80);
  v31 = 4;
  *(float*)(a1 + 36) = v8;
  if (v8 > 0.0) {
    v31 = 0;
  }
  v5 = v30 & 0xFFFFFFFFFFFFFFFBLL | v31;
  *(_QWORD*)(a1 + 80) = v5;
LABEL_33:
  v32 = v5 & 0xF;
  if ((v3 != 0) != (v32 != 0)) {
    v33 = *(_QWORD*)(*(_QWORD*)(a1 + 240) + 24LL);
    v34 = *(_QWORD*)(v33 + 320) - *(_QWORD*)(v33 + 312);
    if (v34 != 0) {
      v35 = v34 >> 4;
      v36 = 0;
      v37 = v32 == 0;
      do {
        v38 = *(int*)(a1 + 24);
        v39 = *(_QWORD*)(*(_QWORD*)(v33 + 312) + v36);
        v40 = *(_QWORD*)(v39 + 264);
        v41 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v39 + 272) - v40) >> 3);
        if (v41 > v38 && *(_BYTE*)(v40 + 24LL * (int)v38 + 20) == 1) {
          v42 = v40 + 24LL * (int)v38;
          v44 = *(unsigned __int8*)(v42 + 21);
          v43 = (_BYTE*)(v42 + 21);
          if (v44 != v37) {
            *v43 = v37;
            Material_ade2c0(v39, a2);
            v40 = *(_QWORD*)(v39 + 264);
            v41 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v39 + 272) - v40) >> 3);
          }
        }
        v45 = *(int*)(a1 + 28);
        if (v41 > v45 && *(_BYTE*)(v40 + 24LL * (int)v45 + 20) == 1) {
          v46 = v40 + 24LL * (int)v45;
          v48 = *(unsigned __int8*)(v46 + 21);
          v47 = (_BYTE*)(v46 + 21);
          if (v48 != v37) {
            *v47 = v37;
            Material_ade2c0(v39, a2);
          }
        }
        --v35;
        v36 += 16;
      } while (v35 != 0);
      v8 = *(float*)(a1 + 36);
    }
  }
  if (v32 != 0) {
    v49 = 0.0;
  }
  else {
    v49 = v8 * (float)(*(float*)&GameData_216761c * *(float*)(a1 + 32));
  }
  if (*(float*)(a1 + 40) != v49) {
    v50 = *(_QWORD*)(a1 + 240);
    *(float*)(a1 + 40) = v49;
    v51 = *(_QWORD*)(v50 + 24);
    v52 = *(_QWORD*)(v51 + 320) - *(_QWORD*)(v51 + 312);
    if (v52 != 0) {
      v53 = v52 >> 4;
      v54 = 0;
      for (i = 0; v53 != i; ++i) {
        v57 = *(_DWORD*)(*(_QWORD*)(a1 + 48) + 4 * i);
        v58 = *(_QWORD*)(*(_QWORD*)(v51 + 312) + v54);
        if (v57 == 1) {
          v56 = 0.0;
        }
        else {
          if (v57 != 0) {
            goto LABEL_54;
          }
          v56 = v49;
        }
        (*(void (**)(_QWORD, const char*, __int64, float))(
            *(_QWORD*)v58 + 16LL))(*(_QWORD*)(*(_QWORD*)(v51 + 312) + v54),
                                   "OutlineScale", 12, v49);
        (*(void (**)(__int64, const char*, __int64, float))(
            *(_QWORD*)v58 + 16LL))(v58, "PostOutlineScale", 16, v56);
      LABEL_54:
        v54 += 16;
      }
    }
  }
}

void CharacterMaterial_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *a1 = game_character_CharacterMaterial_vtable;
  v2 = a1[28];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = a1[16];
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = a1[6];
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[7] = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v6 + v7, v4);
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v8, (__int64)a1);
}

#pragma GCC visibility pop
