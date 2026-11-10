#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterTrailModule_d3d630(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_200c598[])();
extern __int64 (*game_character_IKLeftArm_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 IKLeftArm_10e5930(__int64 a1, __int64* a2, __int64 a3);
__n128 IKLeftArm_Destructor_10e5bb0(_QWORD* a1);
__int64 IKLeftArm_DeletingDestructor(_QWORD* a1);
__n128 IKLeftArm_Destructor_10e5dc0(_QWORD* a1);
__int64 game_character_IKLeftArm_IKLeftArm_lambda0_Invoke(__int64 result,
                                                          int* a2);
__int64 GameRoutine_109f1e0(__int64, _BYTE*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__n128 IKLeftArm_10e5930_alt1(_QWORD*, __int64*,
                              __int64) __asm__("IKLeftArm_10e5930");
bool GameRoutine_ad7390(_QWORD*);
extern _UNKNOWN* GameData_200c5b0;
extern _UNKNOWN* GameData_212df10;
extern __int64 (*GameData_200c608[])();
extern __int64 (*IKLeftArm_Destructor_10e5dc0_ptr[])();
extern __int64* GameData_212fe80;
extern __int64* GameData_2130088[8];
extern char* GameData_200c5a8[3];
extern char* GameData_200c5b8;
extern int* GameData_212df08;
float powf(long double, float);
float32x4_t GameRoutine_10d95c0(__int64);
long double GameRoutine_10d9a00(__int64);
void game_10d9020(_QWORD*, __int64, __int64*);
void game_character_IKLeftArm_IKLeftArm(__int64 a1, _QWORD* a2, __int64 a3);
void IKLeftArm_Unknown4(__int64 a1);

void game_character_IKLeftArm_IKLeftArm(__int64 a1, _QWORD* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64* v5;
  __int64 v6;
  __n128 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  unsigned __int8 explicit;
  int* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v30;
  __int64 v31;
  long double v32;
  __int64 v33;
  struct {
    __int64 v34[4];
    __int64* v35;
  } v34_;
  __int64 v36[2];

  v5 = GameData_2130088[0];
  *(_QWORD*)(a1 + 24) = a2;
  *(_DWORD*)(a1 + 32) = 0;
  *(_QWORD*)a1 = v5 + 2;
  *(_QWORD*)(a1 + 8) = a3;
  *(_WORD*)(a1 + 16) = 256;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      32, 16, 0);
  *(_QWORD*)v6 = GameData_212fe80 + 2;
  *(_QWORD*)(v6 + 8) = 0;
  *(_DWORD*)(v6 + 24) = 0;
  *(_QWORD*)(a1 + 48) = v6 + 24;
  *(_QWORD*)(a1 + 56) = v6;
  *(_QWORD*)(a1 + 64) = v6 + 24;
  *(_QWORD*)(a1 + 72) = v6;
  *(_QWORD*)(v6 + 16) = 0;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)a1 = game_character_IKLeftArm_vtable;
  *(_QWORD*)(a1 + 40) = IKLeftArm_Destructor_10e5dc0_ptr;
  *(_DWORD*)(a1 + 184) = 1028443341;
  v8 = a2[49];
  v9 = a2[50];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    v10 = *(_DWORD*)(v8 + 11784);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v10 == 3) {
        return;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      v7 = std___1___shared_weak_count___release_weak(v9);
      if (v10 == 3) {
        return;
      }
    }
  }
  else if (*(_DWORD*)(v8 + 11784) == 3) {
    return;
  }
  v11 = a2[49];
  v12 = a2[50];
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  v13 = *(_QWORD*)(v11 + 448);
  if (v13 != 0 && *(_BYTE*)(v13 + 165) == 1) {
    v14 = GameRoutine_ad7390((_QWORD*)v13);
    if (v12 == 0) {
      goto LABEL_17;
    }
  }
  else {
    v14 = false;
    if (v12 == 0) {
      goto LABEL_17;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    v7 = std___1___shared_weak_count___release_weak(v12);
  }
LABEL_17:
  if (!v14) {
    v15 = a2[56];
    if (v15 != 0) {
      v16 = a2[49];
      v17 = a2[50];
      if (v17 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                  memory_order_relaxed);
        v18 = *(_DWORD*)(v16 + 11784) - 2;
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v18 > 6) {
            return;
          }
        }
        else {
          (*(void (**)(__int64, long double))(*(_QWORD*)v17 + 16LL))(
              v17, *(long double*)&v7);
          std___1___shared_weak_count___release_weak(v17);
          if (v18 >= 7) {
            return;
          }
        }
      }
      else if ((unsigned int)(*(_DWORD*)(v16 + 11784) - 2) >= 7) {
        return;
      }
      v19 = a2[51];
      if (v19 != 0) {
        explicit = atomic_load_explicit(
            (atomic_uchar* volatile)GameData_212df10, memory_order_acquire);
        v21 = GameData_212df08;
        if ((explicit & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire(GameData_212df10) != 0) {
          *v21 = wld_Crc32(0, "ModelModule", 0xBu);
          __cxa_guard_release(GameData_212df10);
        }
        v22 = *(_QWORD*)(v19 + 512);
        v23 = v22;
        do {
          if (v23 == *(_QWORD*)(v19 + 504)) {
            return;
          }
          v24 = *(_DWORD*)(v23 - 16);
          v23 -= 16;
          v22 -= 16;
        } while (v24 != *v21);
        if (*(_QWORD*)(v19 + 512) == v22) {
          return;
        }
        v25 = *(_QWORD*)(v22 + 8);
        if (v25 == 0) {
          return;
        }
        v26 = *(_QWORD*)(v25 + 24);
        if (v26 == 0) {
          return;
        }
        v27 = GameRoutine_109f1e0(v15, "Loc_C_Handle");
        *(_QWORD*)(a1 + 160) = v27;
        if (v27 == 0) {
          return;
        }
        v28 = GameRoutine_109f1e0(v19, "Loc_L_Weapon");
        *(_QWORD*)(a1 + 168) = v28;
        if (v28 == 0) {
          return;
        }
        v34_.v34[0] = (__int64)GameData_200c5a8[0];
        v34_.v34[1] = (__int64)GameData_200c5b0[0];
        v34_.v34[2] = (__int64)GameData_200c5b8;
        game_10d9020((_QWORD*)(a1 + 80), v26, v34_.v34);
        if (*(_QWORD*)(a1 + 80) == 0 ||
            *(_QWORD*)(a1 + 96) - *(_QWORD*)(a1 + 88) != 96) {
          return;
        }
        v30 = a2[9];
        v31 = *(_QWORD*)(a1 + 72);
        v36[0] = *(_QWORD*)(a1 + 64);
        v36[1] = v31;
        if (v31 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                                    memory_order_relaxed);
        }
        v34_.v34[0] = (__int64)GameData_200c608;
        v34_.v34[1] = a1;
        v34_.v35 = v34_.v34;
        *(__n128*)&v32 =
            IKLeftArm_10e5930_alt1((_QWORD*)(v30 + 56), v36, (__int64)v34_.v34);
        if (v34_.v35 == v34_.v34) {
          v33 = 32;
        }
        else {
          if (v34_.v35 == nullptr) {
          LABEL_45:
            if (v31 != 0) {
              std___1___shared_weak_count___release_weak(v31);
            }
            *(_BYTE*)(a1 + 16) = 1;
            return;
          }
          v33 = 40;
        }
        (*(void (**)(void*))(*v34_.v35 + v33))(v34_.v35);
        goto LABEL_45;
      }
    }
  }
}

__n128 IKLeftArm_10e5930(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  __n128 result;
  __int64 v5;
  __int64 v6;

  v3 = a2[1];
  v5 = *a2;
  v6 = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
  }
  CharacterTrailModule_d3d630(a1, &v5, a3, 1);
  if (v6 != 0) {
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

void IKLeftArm_Unknown4(__int64 a1)
{
  float32x4_t* v1;
  float32x4_t* v2;
  bool v3;
  float v4;
  float v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  float v9;
  __int64 v10;
  float v11;
  bool v12;
  float v13;
  float v14;
  __int64 v15;
  _QWORD* v16;
  float32x4_t v17;
  __int128 v18;
  int* v19;
  int* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  float32x4_t* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  float32x4_t* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;

  v1 = *(float32x4_t**)(a1 + 160);
  v2 = *(float32x4_t**)(a1 + 168);
  v3 = v1 == nullptr || v2 == nullptr;
  if (!v3 && **(_DWORD**)(a1 + 8) == 0) {
    v4 = *(float*)(a1 + 176);
    v5 = *(float*)(a1 + 180);
    v6 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(a1 + 96) - 24LL) + 48LL);
    v7 = vsubq_f32(v6, v2[3]);
    v8 = vaddq_f32(v7, v1[3]);
    if (v4 != v5) {
      LANES128(v7).n128_u32[0] = *(_DWORD*)(a1 + 184);
      if (LANES128(v7).n128_f32[0] > 0.0) {
        if (LANES128(v7).n128_f32[0] >= 1.0) {
          v4 = *(float*)(a1 + 180);
        }
        else {
          v9 = *(float*)(a1 + 32);
          if (v9 > 0.0) {
            v46 = v8;
            v47 =
                *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(a1 + 96) - 24LL) + 48LL);
            v10 = a1;
            LANES128(v7).n128_f32[0] = 1.0 - LANES128(v7).n128_f32[0];
            v11 = 1.0 - powf(*(long double*)&v7, v9 * 0x1.df851e0000000p+4);
            if (v11 > 0.0) {
              v12 = v11 < 1.0;
              v13 = v4 + (float)((float)(v5 - v4) * v11);
              if (v12) {
                v4 = v13;
              }
              else {
                v4 = v5;
              }
            }
            v8 = v46;
            v6 = v47;
            a1 = v10;
          }
        }
      }
      v14 = *(float*)(a1 + 180);
      *(float*)(a1 + 176) = v4;
      if (vabds_f32(v14, v4) < 0x1.a36e2e0000000p-14) {
        *(float*)(a1 + 176) = v14;
      }
    }
    v15 = *(_QWORD*)(a1 + 96);
    v16 = (_QWORD*)a1;
    v17 = vaddq_f32(
        v6, vmulq_n_f32(vsubq_f32(v8, v6), COERCE_FLOAT(*(_QWORD*)(a1 + 176))));
    *(_QWORD*)(v15 - 16) = LANES128(v17).n128_u64[0];
    v18 = *(_OWORD*)(v15 - 16);
    *((_QWORD*)&v18 + 1) = LANES128(v17).n128_u32[2];
    *(_OWORD*)(v15 - 16) = v18;
    GameRoutine_10d95c0(a1 + 80);
    GameRoutine_10d9a00((__int64)(v16 + 10));
    v19 = (int*)v16[14];
    v20 = (int*)v16[15];
    if (v19 != v20) {
      v21 = *(_QWORD**)(v16[10] + 168LL);
      do {
        v22 = *v19;
        if ((_DWORD)v22 == -1) {
          break;
        }
        v23 = v21[2];
        if (v23 != 0) {
          v25 = v21[3];
          v24 = v21[4];
          v26 = *(unsigned __int16*)(v23 + 96 * v22 + 42);
          v27 = (_QWORD*)(v25 + 96 * v22);
          v28 = (float32x4_t*)(v24 + (v22 << 6));
          v30 = v27[4];
          v29 = v27[5];
          v31 = v27[7];
          v32 = (float32x4_t*)(v24 + (v26 << 6));
          LANES128(v28[1]).n128_u64[0] = v27[6];
          LANES128(v28[1]).n128_u64[1] = v31;
          LANES128(*(v28)).n128_u64[0] = v30;
          LANES128(*(v28)).n128_u64[1] = v29;
          v34 = v27[10];
          v33 = v27[11];
          v37 = v27 + 8;
          v36 = v27[8];
          v35 = v37[1];
          v38 = *v28;
          v39 = v28[1];
          LANES128(v28[3]).n128_u64[0] = v34;
          LANES128(v28[3]).n128_u64[1] = v33;
          LANES128(v28[2]).n128_u64[0] = v36;
          LANES128(v28[2]).n128_u64[1] = v35;
          v40 = v28[2];
          v41 = vmulq_f32(v28[3],
                          *(float32x4_t*)(v25 + 96LL * (unsigned int)v26 + 16));
          v42 = *v32;
          v43 = v32[1];
          v28[3] = v41;
          v44 = v32[2];
          v45 = v32[3];
          *v28 = vmlaq_laneq_f32(
              vmlaq_lane_f32(vmulq_n_f32(v42, LANES128(v38).n128_f32[0]), v43,
                             COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                             1),
              v44, v38, 2);
          v28[1] = vmlaq_laneq_f32(
              vmlaq_lane_f32(vmulq_n_f32(v42, LANES128(v39).n128_f32[0]), v43,
                             COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]),
                             1),
              v44, v39, 2);
          v28[2] = vmlaq_laneq_f32(
              vmlaq_lane_f32(vmulq_n_f32(v42, LANES128(v40).n128_f32[0]), v43,
                             COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                             1),
              v44, v40, 2);
          v28[3] = vaddq_f32(
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v42, LANES128(v41).n128_f32[0]), v43,
                      COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]), 1),
                  v44, v41, 2),
              v45);
        }
        ++v19;
      } while (v19 != v20);
    }
  }
}

__n128 IKLeftArm_Destructor_10e5bb0(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[14];
  *a1 = game_character_IKLeftArm_vtable;
  a1[5] = GameData_200c598;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[15] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v7 = a1[11];
  if (v7 != 0) {
    v8 = *v3;
    a1[12] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(v8 + v9);
  }
  v10 = a1[9];
  a1[5] = kaneko_WPHolder_vtable;
  if (v10 != 0) {
    result = std___1___shared_weak_count___release_weak(v10);
  }
  v11 = a1[7];
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    return std___1___shared_weak_count___release_weak(v11);
  }
  return result;
}

__int64 IKLeftArm_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[14];
  *a1 = game_character_IKLeftArm_vtable;
  a1[5] = GameData_200c598;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[15] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = a1[11];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[12] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = a1[9];
  a1[5] = kaneko_WPHolder_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = a1[7];
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
}

__n128 IKLeftArm_Destructor_10e5dc0(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[9];
  *(a1 - 5) = game_character_IKLeftArm_vtable;
  *a1 = GameData_200c598;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[10] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v7 = a1[6];
  if (v7 != 0) {
    v8 = *v3;
    a1[7] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(v8 + v9);
  }
  v10 = a1[4];
  *a1 = kaneko_WPHolder_vtable;
  if (v10 != 0) {
    result = std___1___shared_weak_count___release_weak(v10);
  }
  v11 = a1[2];
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    return std___1___shared_weak_count___release_weak(v11);
  }
  return result;
}

__int64 game_character_IKLeftArm_IKLeftArm_lambda0_Invoke(__int64 result,
                                                          int* a2)
{
  int v2;
  float v3;

  v2 = *a2;
  v3 = 0.0;
  if (*a2 <= -574916403) {
    if (v2 == -1101902990 || v2 == -1080537169 || v2 == -589947500) {
      goto LABEL_16;
    }
  }
  else {
    if (v2 <= 387327020) {
      if (v2 != -574916402 && v2 != 119788728) {
        goto LABEL_17;
      }
    LABEL_16:
      v3 = 1.0;
      goto LABEL_17;
    }
    if (v2 == 869686455 || v2 == 387327021) {
      goto LABEL_16;
    }
  }
LABEL_17:
  *(float*)(*(_QWORD*)(result + 8) + 180LL) = v3;
  return result;
}

#pragma GCC visibility pop
