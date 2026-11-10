#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_fffa20(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_CharacterCollisionShape_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 CharacterCollisionShape_Destructor(_QWORD* a1);
__n128 CharacterCollisionShape_DeletingDestructor(_QWORD* a1);
__attribute__((swiftcall)) void Shape_f63ef0(PSEUDO_X8, __int128*, __int64, int,
                                             float);
__int64 CharacterCollisionShape_fff7f0_alt1(_QWORD, long double) __asm__(
    "CharacterCollisionShape_fff7f0");
__int64 GameRoutine_d6c500(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a82970;
extern __int128 GameData_1a83770;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_2000268[])();
extern __int64* GameData_212eba8[8];
extern __int64 GameData_212d310;
extern __int64 fw_memory_g_heap_manager;
void GameRoutine_fffa20_alt1(__int64) __asm__("GameRoutine_fffa20");
void CharacterCollisionShape_fff0a0(__int64 a1);
void CharacterCollisionShape_fff7f0(_QWORD* a1);

__n128 CharacterCollisionShape_Destructor(_QWORD* a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;

  *a1 = game_zview_CharacterCollisionShape_vtable;
  if (a1[2] != 0 &&
      (GameRoutine_fffa20(a1), v3 = a1[3], a1[2] = 0, a1[3] = 0, v3 != 0) &&
      atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = std___1___shared_weak_count___release_weak(v3);
    v4 = a1[3];
    if (v4 == 0) {
      return result;
    }
  }
  else {
    v4 = a1[3];
    if (v4 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__n128 CharacterCollisionShape_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = game_zview_CharacterCollisionShape_vtable;
  if (a1[2] != 0) {
    GameRoutine_fffa20(a1);
    v2 = a1[3];
    a1[2] = 0;
    a1[3] = 0;
    if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
  v3 = a1[3];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
}

void CharacterCollisionShape_fff0a0(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* i;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  float v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float32x4_t v21;
  float v22;
  float32x4_t v23;
  float v24;
  float v25;
  __int64* v26;
  __int64* v27;
  atomic_uchar* v28;
  __int64 v29;
  __int64 v30;
  float32x4_t v31;
  float v32;
  float32x4_t v33;
  float v34;
  atomic_uchar* v35;
  int v36;
  __int64 v37;
  float32x4_t* v38;
  __int64 v39;
  float32x4_t v40;
  float32x4_t v41;
  int8x16_t v42;
  float v43;
  long double v44;
  __int64 v45;
  __int64 v46;
  float32x4_t v47;
  float v48;
  int v49;
  float32x4_t v50;
  float v51;
  int v52;
  float32x4_t v53;
  __int64 v54;
  __int64 v55;
  __n128 v56;
  __int64 v57;
  __int64 v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int128 v65;
  __int128 v66;
  __int128 v67;
  float32x4_t v68;
  float32x4_t v69;

  v1 = *(_QWORD*)(a1 + 16);
  if (v1 != 0) {
    v3 = *(__int64**)(v1 + 32);
    v4 = *(__int64**)(v1 + 40);
    if (v3 != v4) {
      while (1) {
        v5 = v3[1];
        if (v5 == 0) {
          break;
        }
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                  memory_order_relaxed);
        v6 = *(_QWORD*)(v5 + 8);
        std___1___shared_weak_count___release_weak(v5);
        if (v6 == -1) {
          break;
        }
        v3 += 2;
        if (v3 == v4) {
          v3 = v4;
          goto LABEL_16;
        }
      }
    }
    if (v3 != v4) {
      for (i = v3 + 2; i != v4; i += 2) {
        v8 = i[1];
        if (v8 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                    memory_order_relaxed);
          v9 = *(_QWORD*)(v8 + 8);
          std___1___shared_weak_count___release_weak(v8);
          if (v9 != -1) {
            v10 = *i;
            v11 = i[1];
            *i = 0;
            i[1] = 0;
            v12 = v3[1];
            *v3 = v10;
            v3[1] = v11;
            if (v12 != 0) {
              std___1___shared_weak_count___release_weak(v12);
            }
            v3 += 2;
          }
        }
      }
    }
  LABEL_16:
    v13 = *(__int64**)(v1 + 40);
    if (v3 != v13) {
      do {
        v17 = *(v13 - 1);
        if (v17 != 0) {
          std___1___shared_weak_count___release_weak(v17);
        }
        v13 -= 2;
      } while (v13 != v3);
      *(_QWORD*)(v1 + 40) = v3;
    }
  }
  v14 = *(_QWORD*)(a1 + 8);
  v15 = *(float*)(a1 + 36);
  v16 = fabsf(*(float*)(*(_QWORD*)(v14 + 8) + 228LL));
  if (v15 > 0.0) {
    v15 = v15 - v16;
    if (v15 >= 0.0) {
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  if (v15 < 0.0) {
    v15 = v15 + v16;
    if (v15 > 0.0) {
    LABEL_27:
      v15 = 0.0;
    }
  }
LABEL_28:
  v18 = *(_QWORD*)(a1 + 16);
  *(float*)(a1 + 36) = v15;
  if (v18 != 0 && *(_DWORD*)(v14 + 376) != 5) {
    v19 = *(_QWORD*)(*GameData_212eba8[0] + 72);
    if (v19 != 0) {
      v20 = *(_QWORD*)(*GameData_212eba8[0] + 56);
      if (v20 != 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
          v64 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v64;
          __cxa_guard_release(&GameData_21a6130);
        }
        if (v20 != v14) {
          v21 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v14 + 16) + 560LL),
                          COERCE_AS(float32x4_t, GameData_21a6120));
          LODWORD(v22) = HIDWORD(*(_QWORD*)(*(_QWORD*)(v20 + 16) + 560LL));
          if ((float)(v22 - *(float*)(v20 + 552)) <=
                  LANES128(v21).n128_f32[1] &&
              v22 >=
                  (float)(LANES128(v21).n128_f32[1] - *(float*)(v14 + 552))) {
            v23 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(v20 + 16) + 560LL), v21);
            v24 = *(float*)(v20 + 528) + *(float*)(v14 + 528);
            if ((float)(LANES128_OF(vmulq_f32(v23, v23)).n128_f32[2] +
                        (float)(LANES128(v23).n128_f32[0] *
                                LANES128(v23).n128_f32[0])) <=
                (float)(v24 * v24)) {
            LABEL_37:
              v25 = *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 228LL) +
                    *(float*)(a1 + 32);
              *(float*)(a1 + 32) = v25;
              if (v25 > 0x1.3333340000000p-2) {
                *(float*)(a1 + 36) = fmaxf(*(float*)(a1 + 36), 1.0);
              }
              goto LABEL_51;
            }
          }
        }
      }
      v26 = *(__int64**)(v19 + 24);
      v27 = *(__int64**)(v19 + 32);
      if (v26 != v27) {
        v28 = (atomic_uchar*)&GameData_21a6130;
        do {
          v29 = *v26;
          v30 = *(_QWORD*)(a1 + 8);
          if ((atomic_load_explicit(v28, memory_order_acquire) & 1) == 0) {
            v35 = v28;
            v36 = __cxa_guard_acquire(v28);
            v28 = v35;
            if (v36 != 0) {
              v37 = *((_QWORD*)GameData_212c540 + 1);
              *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
              *((_QWORD*)&GameData_21a6120 + 1) = v37;
              __cxa_guard_release(v35);
              v28 = v35;
            }
          }
          if (v29 != v30) {
            v31 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v30 + 16) + 560LL),
                            COERCE_AS(float32x4_t, GameData_21a6120));
            LODWORD(v32) = HIDWORD(*(_QWORD*)(*(_QWORD*)(v29 + 16) + 560LL));
            if ((float)(v32 - *(float*)(v29 + 552)) <=
                    LANES128(v31).n128_f32[1] &&
                v32 >=
                    (float)(LANES128(v31).n128_f32[1] - *(float*)(v30 + 552))) {
              v33 =
                  vsubq_f32(*(float32x4_t*)(*(_QWORD*)(v29 + 16) + 560LL), v31);
              v34 = *(float*)(v29 + 528) + *(float*)(v30 + 528);
              if ((float)(LANES128_OF(vmulq_f32(v33, v33)).n128_f32[2] +
                          (float)(LANES128(v33).n128_f32[0] *
                                  LANES128(v33).n128_f32[0])) <=
                  (float)(v34 * v34)) {
                goto LABEL_37;
              }
            }
          }
          ++v26;
        } while (v26 != v27);
      }
    }
  }
  *(_DWORD*)(a1 + 32) = 0;
LABEL_51:
  v38 = *(float32x4_t**)(a1 + 16);
  if (v38 != nullptr) {
    if (LANES128(v38[2]).n128_u64[1] == LANES128(v38[2]).n128_u64[0]) {
      goto LABEL_64;
    }
    v39 = *(_QWORD*)(a1 + 8);
    v40 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v39 + 16) + 560LL),
                    COERCE_AS(float32x4_t, GameData_1a83770));
    LANES128(v40).n128_u32[3] = 0;
    v41 = vsubq_f32(*v38, v40);
    v42 = vmulq_f32(v41, v41);
    LANES128(v42).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v42, v42, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0])))
            .n64_f32[0] < 0x1.9eb8500000000p-3) {
      v43 = *(float*)(v39 + 528);
      if (*(_DWORD*)(v39 + 376) != 5) {
        v43 = v43 * 0x1.99999a0000000p-3;
      }
      if (vabds_f32(LANES128(v38[1]).n128_f32[0], v43) < 0x1.47ae160000000p-7 &&
          fabsf(LANES128(v38[1]).n128_f32[1] + -0x1.99999a0000000p-2) <
              0x1.47ae160000000p-7) {
        goto LABEL_64;
      }
    }
    GameRoutine_fffa20(a1);
    v45 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 24) = 0;
    if (v45 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
      *(__n128*)&v44 = std___1___shared_weak_count___release_weak(v45);
    }
    CharacterCollisionShape_fff7f0_alt1(a1, v44);
    v38 = *(float32x4_t**)(a1 + 16);
    if (v38 != nullptr) {
    LABEL_64:
      if (*(_BYTE*)(*(_QWORD*)GameData_212d310 + 52LL) != 1 ||
          (*(_BYTE*)((v46 = *(_QWORD*)(a1 + 8)) + 390) & 0x10) != 0 ||
          *(float*)(a1 + 36) > 0.0) {
        GameRoutine_fffa20(a1);
        return;
      }
      if (LANES128(v38[2]).n128_u64[1] == LANES128(v38[2]).n128_u64[0]) {
        v47 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v46 + 16) + 560LL),
                        COERCE_AS(float32x4_t, GameData_1a83770));
        v48 = *(float*)(v46 + 528);
        v49 = *(_DWORD*)(v46 + 376);
        LANES128(*(v38)).n128_u64[0] = LANES128(v47).n128_u64[0];
        v50 = *v38;
        LANES128(v38[1]).n128_u32[1] = 1053609165;
        if (v49 == 5) {
          v51 = v48;
        }
        else {
          v51 = v48 * 0x1.99999a0000000p-3;
        }
        LANES128(v50).n128_u64[1] = LANES128(v47).n128_u32[2];
        LANES128(v38[1]).n128_f32[0] = v51;
        LANES128(v47).n128_u32[3] = 0;
        *v38 = v50;
        v69 = v47;
        v52 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 376LL);
        v53 = vaddq_f32(v47, COERCE_AS(float32x4_t, GameData_1a82970));
        v68 = v53;
        if (v52 == 5) {
          Shape_f63ef0((void*)(&v67), (__int128*)&v69, 0x10000000000000LL, 0,
                       v51);
          Shape_f63ef0((void*)(&v66), (__int128*)&v68, 0x10000000000000LL, 0,
                       v51);
          v54 = *(_QWORD*)(a1 + 16);
          v65 = v67;
          if (*((_QWORD*)&v67 + 1) != 0) {
            atomic_fetch_add_explicit(
                (atomic_ullong* volatile)(*((_QWORD*)&v67 + 1) + 16LL), 1u,
                memory_order_relaxed);
          }
          GameRoutine_d6c500(v54 + 32, &v65);
          if (*((_QWORD*)&v65 + 1) != 0) {
            std___1___shared_weak_count___release_weak(*((_QWORD*)&v65 + 1));
          }
          v55 = *(_QWORD*)(a1 + 16);
          v65 = v66;
          if (*((_QWORD*)&v66 + 1) != 0) {
            atomic_fetch_add_explicit(
                (atomic_ullong* volatile)(*((_QWORD*)&v66 + 1) + 16LL), 1u,
                memory_order_relaxed);
          }
          GameRoutine_d6c500(v55 + 32, &v65);
          if (*((_QWORD*)&v65 + 1) != 0) {
            v56 = std___1___shared_weak_count___release_weak(
                *((_QWORD*)&v65 + 1));
          }
          v57 = *((_QWORD*)&v66 + 1);
          if (*((_QWORD*)&v66 + 1) == 0 ||
              atomic_fetch_add(
                  (atomic_ullong* volatile)(*((_QWORD*)&v66 + 1) + 8LL),
                  0xFFFFFFFFFFFFFFFFLL) != 0) {
            goto LABEL_87;
          }
          (*(void (**)(__int64, long double))(*(_QWORD*)v57 + 16LL))(
              v57, *(long double*)&v56);
          v58 = v57;
        }
        else {
          v59 = vaddq_f32(v47, v53);
          LANES128(v60).n128_u64[0] = 0x3F0000003F000000LL;
          LANES128(v60).n128_u64[1] = 0x3F0000003F000000LL;
          v61 = vmulq_f32(v59, v60);
          LANES128(v61).n128_u32[3] = 0;
          v66 = (__int128)v61;
          Shape_f63ef0((void*)(&v67), &v66, 0x10000000000000LL, 0, v51);
          v62 = *(_QWORD*)(a1 + 16);
          v66 = v67;
          if (*((_QWORD*)&v67 + 1) != 0) {
            atomic_fetch_add_explicit(
                (atomic_ullong* volatile)(*((_QWORD*)&v67 + 1) + 16LL), 1u,
                memory_order_relaxed);
          }
          GameRoutine_d6c500(v62 + 32, &v66);
          v58 = *((_QWORD*)&v66 + 1);
          if (*((_QWORD*)&v66 + 1) == 0) {
            goto LABEL_87;
          }
        }
        v56 = std___1___shared_weak_count___release_weak(v58);
      LABEL_87:
        v63 = *((_QWORD*)&v67 + 1);
        if (*((_QWORD*)&v67 + 1) != 0 &&
            atomic_fetch_add(
                (atomic_ullong* volatile)(*((_QWORD*)&v67 + 1) + 8LL),
                0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v63 + 16LL))(
              v63, *(long double*)&v56);
          std___1___shared_weak_count___release_weak(v63);
        }
      }
    }
  }
}

void CharacterCollisionShape_fff7f0(_QWORD* a1)
{

#pragma clang fp contract(off)
  float32x4_t* v1;
  __int64 v3;
  float32x4_t v4;
  float32x4_t v5;
  int8x16_t v6;
  float v7;
  __int64 v8;
  __int64 v9;
  float v10;
  _QWORD* v11;
  __int64 v12;
  float* v13;
  __int128 v14;
  float32x4_t v15;

  v1 = (float32x4_t*)a1[2];
  if (v1 != nullptr) {
    if (LANES128(v1[2]).n128_u64[1] == LANES128(v1[2]).n128_u64[0]) {
      goto LABEL_10;
    }
    v3 = a1[1];
    v4 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v3 + 16) + 560LL),
                   COERCE_AS(float32x4_t, GameData_1a83770));
    LANES128(v4).n128_u32[3] = 0;
    v5 = vsubq_f32(*v1, v4);
    v6 = vmulq_f32(v5, v5);
    LANES128(v6).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
            .n64_f32[0] < 0x1.9eb8500000000p-3f) {
      v7 = *(float*)(v3 + 528);
      if (*(_DWORD*)(v3 + 376) != 5) {
        v7 = v7 * 0x1.99999a0000000p-3f;
      }
      if (vabds_f32(LANES128(v1[1]).n128_f32[0], v7) < 0x1.47ae160000000p-7f &&
          fabsf(LANES128(v1[1]).n128_f32[1] + -0x1.99999a0000000p-2f) <
              0x1.47ae160000000p-7f) {
      LABEL_10:
        if (a1[2] != 0) {
          return;
        }
        goto LABEL_11;
      }
    }
    GameRoutine_fffa20_alt1((__int64)a1);
    v8 = a1[3];
    a1[2] = 0;
    a1[3] = 0;
    if (v8 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
        if (a1[2] != 0) {
          return;
        }
        goto LABEL_11;
      }
      goto LABEL_10;
    }
  }
LABEL_11:
  v9 = a1[1];
  v15 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v9 + 16) + 560LL),
                  COERCE_AS(float32x4_t, GameData_1a83770));
  if (*(_DWORD*)(v9 + 376) == 5) {
    v10 = *(float*)(v9 + 528);
  }
  else {
    v10 = *(float*)(v9 + 528) * 0x1.99999a0000000p-3f;
  }
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 96,
                                                16, 0);
  v12 = a1[3];
  v11[1] = 0;
  v11[2] = 0;
  v11[5] = 0;
  v11[6] = 0;
  v11[7] = 0;
  v11[8] = 0;
  v11[9] = 0;
  v11[10] = 0;
  v11[11] = 0;
  a1[3] = v11;
  *v11 = GameData_2000268;
  v11[4] = 0;
  a1[2] = v11 + 4;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = (float*)a1[2];
  v13[4] = v10;
  v13[5] = 0x1.99999a0000000p-2f;
  *(_QWORD*)v13 = LANES128(v15).n128_u64[0];
  v14 = *(_OWORD*)v13;
  *((_QWORD*)&v14 + 1) = LANES128(v15).n128_u32[2];
  *(_OWORD*)v13 = v14;
}

#pragma GCC visibility pop
