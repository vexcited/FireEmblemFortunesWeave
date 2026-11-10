#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_60eb40(__int64* result, unsigned __int64);
__int64 Cursor_730ff0(__int64, float*);
__int64 EffectConst_961520(__int64*, __int64, __int64*, int, char, int32x2_t,
                           float);
__int64 GameRoutine_9a48c0(__int64 result, __int64**);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_14a3920(__int64 result);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strstr(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_1a8d4de;
extern _UNKNOWN GameData_1aa85d1;
extern _UNKNOWN GameData_1abfad8;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a83090;
extern __int128 GameData_21a6120;
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_21309c8[5];
extern __int64 GameData_2131678;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_map_effect_g_effect_manager;
float math_Vec3_Angle(float32x4_t*, float32x4_t*);
__int64 game_map_anonymous_818500(float* a1, unsigned int* a2, __int64 a3,
                                  _DWORD** a4);
void game_map_anonymous_966e80(float32x4_t* a1, __n128 a2);
void game_map_anonymous_9683a0(float32x4_t* a1, __n128 a2);

__int64 game_map_anonymous_818500(float* a1, unsigned int* a2, __int64 a3,
                                  _DWORD** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v9;
  __int64* v10;
  __int64 result;
  unsigned __int64 v12;
  __int64 v13;
  _DWORD* v14;
  float v15;
  float v16;
  float v17;
  _BOOL8 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 primeEm;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  unsigned __int64 v30;

  v5 = *a2;
  v6 = *((_QWORD*)a1 + 1);
  if (v6 != 0) {
    v9 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = *a2;
      if (v6 <= v5) {
        v4 = (unsigned int)v5 % (unsigned int)v6;
      }
    }
    else {
      v4 = ((_DWORD)v6 - 1) & (unsigned int)v5;
    }
    v10 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
    if (v10 != nullptr) {
      result = *v10;
      if (*v10 != 0) {
        if ((v6 & v9) == 0) {
          while (1) {
            v13 = *(_QWORD*)(result + 8);
            if (v13 == v5) {
              if (*(_DWORD*)(result + 16) == (_DWORD)v5) {
                return result;
              }
            }
            else if ((v13 & v9) != v4) {
              goto LABEL_23;
            }
            result = *(_QWORD*)result;
            if (result == 0) {
              goto LABEL_23;
            }
          }
        }
        do {
          v12 = *(_QWORD*)(result + 8);
          if (v12 == v5) {
            if (*(_DWORD*)(result + 16) == (_DWORD)v5) {
              return result;
            }
          }
          else {
            if (v12 >= v6) {
              v12 %= v6;
            }
            if (v12 != v4) {
              break;
            }
          }
          result = *(_QWORD*)result;
        } while (result != 0);
      }
    }
  }
LABEL_23:
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v14 = *a4;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v5;
  v15 = a1[8];
  *(_DWORD*)(result + 16) = *v14;
  *(_DWORD*)(result + 20) = 0;
  v16 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v6 == 0 || (float)(v15 * (float)v6) < v16) {
    v17 = v16 / v15;
    v18 = true;
    if (v6 >= 3) {
      v18 = (v6 & (v6 - 1)) != 0;
    }
    v19 = v18 | (2 * v6);
    v20 = vcvtps_u64_f32(v17);
    if (v19 <= v20) {
      primeEm = v20;
    }
    else {
      primeEm = v19;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v22 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v22;
      v6 = *((_QWORD*)a1 + 1);
    }
    if (primeEm > v6) {
      goto LABEL_35;
    }
    if (primeEm < v6) {
      v24 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
        v26 = result;
        v24 = std___1___next_prime(v24);
        result = v26;
      }
      else {
        v25 = 1LL << -(char)__clz(v24 - 1);
        if (v24 >= 2) {
          v24 = v25;
        }
      }
      if (primeEm <= v24) {
        primeEm = v24;
      }
      if (primeEm < v6) {
      LABEL_35:
        v23 = result;
        GameRoutine_60eb40((__int64*)a1, primeEm);
        result = v23;
      }
    }
    v6 = *((_QWORD*)a1 + 1);
    if ((v6 & (v6 - 1)) != 0) {
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
      else {
        v4 = v5;
      }
    }
    else {
      v4 = ((_DWORD)v6 - 1) & (unsigned int)v5;
    }
  }
  v27 = *(_QWORD*)a1;
  v28 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v28 != nullptr) {
    *(_QWORD*)result = *v28;
    *v28 = result;
  }
  else {
    v29 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = result;
    *(_QWORD*)result = v29;
    *(_QWORD*)(v27 + 8 * v4) = a1 + 4;
    if (*(_QWORD*)result != 0) {
      v30 = *(_QWORD*)(*(_QWORD*)result + 8LL);
      if ((v6 & (v6 - 1)) != 0) {
        if (v30 >= v6) {
          v30 %= v6;
        }
      }
      else {
        v30 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v30) = result;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return result;
}

void game_map_anonymous_966e80(float32x4_t* a1, __n128 a2)
{
  int v3;
  int v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  float32x4_t* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  float32x4_t v24;
  unsigned int i;
  float32x4_t* v26;
  unsigned __int64 v27;
  __int64 v28;
  float32x4_t v29;
  float v30;
  __int128 v31;
  float32x4_t v32;
  float32x2_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float v37;
  float v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  unsigned int v43;
  unsigned int j;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  float32x4_t v48;
  int v49;
  int v50;
  __int64 v51;
  unsigned __int32 v52;
  __int128 v53;
  unsigned __int32 v54;
  float32x4_t v55;
  float32x4_t v56;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v4 = (v3 & 8) != 0 ? 2 : 3;
    if ((v4 & v3) == 0) {
      goto LABEL_28;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v5 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v5 + 172) == *(float*)(v5 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160);
    }
    else {
      a2 = *(__n128*)(v5 + 208);
    }
    if (LANES128(a2).n128_f32[3] == 0x1.0000000000000p+0f) {
      a2 = ((__n128 (*)(unsigned __int64, float)) *
            (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160,
                                                    LANES128(a2).n128_f32[3]);
      if (LANES128(a2).n128_f32[3] == 0x1.0000000000000p+0f) {
        goto LABEL_28;
      }
    }
  }
  v6 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0) {
    LOBYTE(v6) = *(_BYTE*)(v6 + 8) == 2;
  }
  if ((v6 & 1) != 0) {
    goto LABEL_28;
  }
  if (*GameData_212ce98[0] == 0 ||
      game_script_map_effect_g_effect_manager == 0) {
    goto LABEL_28;
  }
  v8 = LANES128(a1[12]).n128_u8[8];
  v9 = LANES128(a1[13]).n128_u64[0];
  if ((v8 & 1) == 0) {
    v9 = v8 >> 1;
  }
  if (v9 == 0) {
  LABEL_28:
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         296, 16, 0);
    v13 = a1 + 17;
    *(_DWORD*)(v11 + 48) = 0x2000;
    v14 = GameData_2131678;
    *(_WORD*)(v11 + 108) = 256;
    *(_QWORD*)(v11 + 8) = 0;
    *(_QWORD*)(v11 + 16) = 0;
    *(_DWORD*)(v11 + 32) = 0;
    *(_QWORD*)(v11 + 40) = 0;
    *(_DWORD*)(v11 + 104) = 0;
    *(_DWORD*)(v11 + 112) = -1082130432;
    *(_QWORD*)(v11 + 24) = 0;
    v12 = v11 + 24;
    *(_QWORD*)(v11 + 56) = 0;
    *(_QWORD*)(v11 + 64) = 0;
    *(_QWORD*)(v11 + 72) = 0;
    *(_WORD*)(v11 + 80) = 0;
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
    LANES128(v56).n128_u64[0] = v11 + 24;
    LANES128(v56).n128_u64[1] = v11;
    *(_QWORD*)v11 = v14 + 16;
    *(_DWORD*)(v11 + 292) = 2;
  LABEL_29:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    goto LABEL_30;
  }
  LANES128(a2).n128_u32[0] = 0x1.0000000000000p+0f;
  if ((v8 & 1) != 0) {
    v10 = LANES128(a1[13]).n128_i64[1];
  }
  else {
    v10 = (__int64)&LANES128(a1[12]).n128_i64[1] + 1;
  }
  EffectConst_961520((__int64*)&v56, v10, (__int64*)&a1[10], 5, 0,
                     COERCE_AS(int32x2_t, LANES128(a2).n128_u64[0]), 0x0.0p+0f);
  GameRoutine_9a48c0((__int64)a1, (__int64**)&v56);
  v11 = LANES128(v56).n128_i64[1];
  v12 = LANES128(v56).n128_u64[0];
  v13 = a1 + 17;
  if (LANES128(v56).n128_u64[1] != 0) {
    goto LABEL_29;
  }
LABEL_30:
  v15 = LANES128(a1[17]).n128_u64[1];
  LANES128(a1[17]).n128_u64[0] = v12;
  LANES128(a1[17]).n128_u64[1] = v11;
  if (v15 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
    }
    v11 = LANES128(a1[17]).n128_i64[1];
  }
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v16 = v11;
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v16);
    }
  }
  v17 = LANES128(v56).n128_u64[1];
  if (LANES128(v56).n128_u64[1] != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(LANES128(v56).n128_u64[1] + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  v18 = (_QWORD*)LANES128(*(v13)).n128_u64[0];
  v19 = *(_QWORD*)LANES128(*(v13)).n128_u64[0];
  if (v19 != 0 && *(_DWORD*)(v19 + 16) == *((_DWORD*)v18 + 2)) {
    v20 = LANES128(a1[19]).n128_i64[0];
    v21 = *(_QWORD*)v20;
    if (*(_QWORD*)v20 != 0 && *(_DWORD*)(v21 + 16) == *(_DWORD*)(v20 + 8)) {
      v22 = *(_QWORD*)(*(_QWORD*)(v21 + 24) + 112LL);
      if (v22 != 0 && strstr(v22, &GameData_1abfad8) != 0) {
        v23 = *(_DWORD*)(v21 + 36);
        if (v23 != 0) {
          v24 = a1[11];
          for (i = 0; i < v23; ++i) {
            if ((int)v23 > (int)i) {
              v26 = *(float32x4_t**)(v21 + 40 + 8LL * (int)i);
              if (v26 != nullptr) {
                v26[1] = v24;
                LANES128(v26[8]).n128_u8[0] = 1;
                v23 = *(_DWORD*)(v21 + 36);
              }
            }
          }
        }
        game_14a3920(v20);
        v18 = (_QWORD*)LANES128(*(v13)).n128_u64[0];
        v19 = *(_QWORD*)LANES128(*(v13)).n128_u64[0];
        if (v19 == 0) {
          goto LABEL_66;
        }
      }
    }
    if (*(_DWORD*)(v19 + 16) != *((_DWORD*)v18 + 2) ||
        (v28 = *(_QWORD*)(*(_QWORD*)(v19 + 24) + 112LL)) == 0 ||
        strstr(v28, &GameData_1aa85d1) == 0) {
    LABEL_66:
      v29 = vsubq_f32(a1[11], a1[10]);
      v30 = LANES128(v29).n128_f32[2];
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0) {
        v52 = LANES128(v29).n128_u32[0];
        v54 = LANES128(v29).n128_u32[2];
        v50 = __cxa_guard_acquire(&GameData_21a6130);
        LANES128(v29).n128_u32[0] = v52;
        v30 = *(float*)&v54;
        if (v50 != 0) {
          v51 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v51;
          __cxa_guard_release(&GameData_21a6130);
          LANES128(v29).n128_u32[0] = v52;
          v30 = *(float*)&v54;
        }
      }
      v31 = GameData_21a6120;
      v56 = COERCE_AS(float32x4_t, GameData_1a83090);
      if ((float)((float)(PSEUDO_UNFUSED(v30 * v30)) +
                  (float)(LANES128(v29).n128_f32[0] *
                          LANES128(v29).n128_f32[0])) > 0x0.0p+0f) {
        LANES128(v32).n128_u64[0] = LANES128(v29).n128_u32[0];
        LANES128(v32).n128_u64[1] = LODWORD(v30);
        LANES64(v33).n64_u64[0] =
            LANES64_OF(vadd_f32(vmul_f32(COERCE_AS(float32x2_t, LODWORD(v30)),
                                         COERCE_AS(float32x2_t, LODWORD(v30))),
                                vmul_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v29).n128_u32[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v29).n128_u32[0]))))
                .n64_u64[0];
        LANES128(v34).n128_u64[0] = LANES64_OF(vpadd_f32(v33, v33)).n64_u64[0];
        LANES128(v34).n128_u64[1] = LANES128(v34).n128_u64[0];
        v35 = vrsqrteq_f32(v34);
        v36 = vmulq_f32(v35, vrsqrtsq_f32(v35, vmulq_f32(v34, v35)));
        v55 = vbicq_s8(
            vmulq_f32(v32,
                      vmulq_f32(v36, vrsqrtsq_f32(v36, vmulq_f32(v34, v36)))),
            vceqzq_f32(v34));
        if (LANES128(v34).n128_f32[0] != 0x0.0p+0f) {
          v53 = GameData_21a6120;
          v37 = math_Vec3_Angle(&v56, &v55);
          v31 = v53;
          v38 = v37 * 0x1.ca5dc00000000p+5f;
          *((float*)&v31 + 1) = v38;
          LANES128(v39).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v40).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v39).n128_i8[8] =
              vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          LANES128(v41).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v40).n128_i8[8] =
              vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          *(int8x8_t*)&LANES128(v41).n128_i8[8] =
              vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v42).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v42).n128_i8[8] =
              vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          if (LANES128_OF(vmlsq_f32(vmulq_f32(v39, v40), v42, v41))
                  .n128_f32[1] < 0x0.0p+0f) {
            *((float*)&v31 + 1) = -v38;
          }
        }
      }
      v19 = *(_QWORD*)LANES128(*(v13)).n128_u64[0];
      if (*(_DWORD*)(v19 + 16) ==
          *(_DWORD*)(LANES128(*(v13)).n128_u64[0] + 8)) {
        v43 = *(_DWORD*)(v19 + 36);
        if (v43 != 0) {
          for (j = 0; j < v43; ++j) {
            if ((int)v43 > (int)j) {
              v45 = *(_QWORD*)(v19 + 40 + 8LL * (int)j);
              if (v45 != 0) {
                *(_OWORD*)(v45 + 48) = v31;
                *(_BYTE*)(v45 + 128) = 1;
                v43 = *(_DWORD*)(v19 + 36);
              }
            }
          }
          v19 = *(_QWORD*)LANES128(*(v13)).n128_u64[0];
        }
      }
    }
    v46 = *(_QWORD*)(v19 + 40);
    v47 = 16;
    if (*(_BYTE*)(v46 + 129) != 0) {
      v47 = 112;
    }
    v48 = *(float32x4_t*)(v46 + v47);
    v49 = LANES128(a1[12]).n128_u8[0];
    v56 = v48;
    if (v49 == 1) {
      Cursor_730ff0(*GameData_212cfc0[0], (float*)&v56);
    }
  }
  else {
    v27 = LANES128(*(a1)).n128_u64[1];
    if (v27 != 0) {
      while (1) {
        if (*(_BYTE*)v27 == 2) {
          if (*(_DWORD*)(v27 + 32) == 1) {
            LANES128(a1[1]).n128_u64[0] = v27;
            LANES128(a1[8]).n128_u16[4] &= ~0x80u;
            break;
          }
        }
        else if (*(_BYTE*)v27 == 0) {
          break;
        }
        v27 += 64LL;
      }
    }
    LANES128(a1[8]).n128_u16[4] |= 8u;
  }
}

void game_map_anonymous_9683a0(float32x4_t* a1, __n128 a2)
{
  int v3;
  int v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  float32x4_t* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  float32x4_t v22;
  unsigned int i;
  float32x4_t* v24;
  __int64 v25;
  float32x4_t v26;
  float v27;
  __int128 v28;
  float32x4_t v29;
  float32x2_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float v34;
  float v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  unsigned int v40;
  unsigned int j;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  float32x4_t v45;
  int v46;
  int v47;
  __int64 v48;
  unsigned __int32 v49;
  __int128 v50;
  unsigned __int32 v51;
  float32x4_t v52;
  float32x4_t v53;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v4 = (v3 & 8) != 0 ? 2 : 3;
    if ((v4 & v3) == 0) {
      goto LABEL_28;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v5 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v5 + 172) == *(float*)(v5 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160);
    }
    else {
      a2 = *(__n128*)(v5 + 208);
    }
    if (LANES128(a2).n128_f32[3] == 0x1.0000000000000p+0f) {
      a2 = ((__n128 (*)(unsigned __int64, float)) *
            (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160,
                                                    LANES128(a2).n128_f32[3]);
      if (LANES128(a2).n128_f32[3] == 0x1.0000000000000p+0f) {
        goto LABEL_28;
      }
    }
  }
  v6 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0) {
    LOBYTE(v6) = *(_BYTE*)(v6 + 8) == 2;
  }
  if ((v6 & 1) != 0) {
    goto LABEL_28;
  }
  if (*GameData_212ce98[0] == 0 ||
      game_script_map_effect_g_effect_manager == 0) {
    goto LABEL_28;
  }
  v8 = LANES128(a1[15]).n128_u8[8];
  v9 = LANES128(a1[16]).n128_u64[0];
  if ((v8 & 1) == 0) {
    v9 = v8 >> 1;
  }
  if (v9 == 0) {
  LABEL_28:
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         296, 16, 0);
    v13 = a1 + 19;
    *(_DWORD*)(v11 + 48) = 0x2000;
    v14 = GameData_2131678;
    *(_WORD*)(v11 + 108) = 256;
    *(_QWORD*)(v11 + 8) = 0;
    *(_QWORD*)(v11 + 16) = 0;
    *(_DWORD*)(v11 + 32) = 0;
    *(_QWORD*)(v11 + 40) = 0;
    *(_DWORD*)(v11 + 104) = 0;
    *(_DWORD*)(v11 + 112) = -1082130432;
    *(_QWORD*)(v11 + 24) = 0;
    v12 = v11 + 24;
    *(_QWORD*)(v11 + 56) = 0;
    *(_QWORD*)(v11 + 64) = 0;
    *(_QWORD*)(v11 + 72) = 0;
    *(_WORD*)(v11 + 80) = 0;
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
    LANES128(v53).n128_u64[0] = v11 + 24;
    LANES128(v53).n128_u64[1] = v11;
    *(_QWORD*)v11 = v14 + 16;
    *(_DWORD*)(v11 + 292) = 2;
  LABEL_29:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    goto LABEL_30;
  }
  LANES128(a2).n128_u32[0] = 0x1.0000000000000p+0f;
  if ((v8 & 1) != 0) {
    v10 = LANES128(a1[16]).n128_i64[1];
  }
  else {
    v10 = (__int64)&LANES128(a1[15]).n128_i64[1] + 1;
  }
  EffectConst_961520((__int64*)&v53, v10, (__int64*)&a1[11], 5, 0,
                     COERCE_AS(int32x2_t, LANES128(a2).n128_u64[0]), 0x0.0p+0f);
  GameRoutine_9a48c0((__int64)a1, (__int64**)&v53);
  v11 = LANES128(v53).n128_i64[1];
  v12 = LANES128(v53).n128_u64[0];
  v13 = a1 + 19;
  if (LANES128(v53).n128_u64[1] != 0) {
    goto LABEL_29;
  }
LABEL_30:
  v15 = LANES128(a1[19]).n128_u64[1];
  LANES128(a1[19]).n128_u64[0] = v12;
  LANES128(a1[19]).n128_u64[1] = v11;
  if (v15 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
    }
    v11 = LANES128(a1[19]).n128_i64[1];
  }
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v16 = v11;
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v16);
    }
  }
  v17 = LANES128(v53).n128_u64[1];
  if (LANES128(v53).n128_u64[1] != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(LANES128(v53).n128_u64[1] + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  v18 = (_QWORD*)LANES128(*(v13)).n128_u64[0];
  v19 = *(_QWORD*)LANES128(*(v13)).n128_u64[0];
  if (v19 != 0 && *(_DWORD*)(v19 + 16) == *((_DWORD*)v18 + 2)) {
    v20 = *(_QWORD*)(*(_QWORD*)(v19 + 24) + 112LL);
    if (v20 != 0 && strstr(v20, &GameData_1a8d4de) != 0) {
      v21 = *(_DWORD*)(v19 + 36);
      if (v21 != 0) {
        v22 = a1[10];
        for (i = 0; i < v21; ++i) {
          if ((int)v21 > (int)i) {
            v24 = *(float32x4_t**)(v19 + 40 + 8LL * (int)i);
            if (v24 != nullptr) {
              v24[1] = v22;
              LANES128(v24[8]).n128_u8[0] = 1;
              v21 = *(_DWORD*)(v19 + 36);
            }
          }
        }
      }
      game_14a3920((__int64)v18);
      v18 = (_QWORD*)LANES128(*(v13)).n128_u64[0];
      v19 = *(_QWORD*)LANES128(*(v13)).n128_u64[0];
      if (v19 == 0) {
        goto LABEL_54;
      }
    }
    if (*(_DWORD*)(v19 + 16) != *((_DWORD*)v18 + 2) ||
        (v25 = *(_QWORD*)(*(_QWORD*)(v19 + 24) + 112LL)) == 0 ||
        strstr(v25, &GameData_1aa85d1) == 0) {
    LABEL_54:
      v26 = vsubq_f32(a1[11], a1[10]);
      v27 = LANES128(v26).n128_f32[2];
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0) {
        v49 = LANES128(v26).n128_u32[0];
        v51 = LANES128(v26).n128_u32[2];
        v47 = __cxa_guard_acquire(&GameData_21a6130);
        LANES128(v26).n128_u32[0] = v49;
        v27 = *(float*)&v51;
        if (v47 != 0) {
          v48 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v48;
          __cxa_guard_release(&GameData_21a6130);
          LANES128(v26).n128_u32[0] = v49;
          v27 = *(float*)&v51;
        }
      }
      v28 = GameData_21a6120;
      v53 = COERCE_AS(float32x4_t, GameData_1a83090);
      if ((float)((float)(PSEUDO_UNFUSED(v27 * v27)) +
                  (float)(LANES128(v26).n128_f32[0] *
                          LANES128(v26).n128_f32[0])) > 0x0.0p+0f) {
        LANES128(v29).n128_u64[0] = LANES128(v26).n128_u32[0];
        LANES128(v29).n128_u64[1] = LODWORD(v27);
        LANES64(v30).n64_u64[0] =
            LANES64_OF(vadd_f32(vmul_f32(COERCE_AS(float32x2_t, LODWORD(v27)),
                                         COERCE_AS(float32x2_t, LODWORD(v27))),
                                vmul_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v26).n128_u32[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v26).n128_u32[0]))))
                .n64_u64[0];
        LANES128(v31).n128_u64[0] = LANES64_OF(vpadd_f32(v30, v30)).n64_u64[0];
        LANES128(v31).n128_u64[1] = LANES128(v31).n128_u64[0];
        v32 = vrsqrteq_f32(v31);
        v33 = vmulq_f32(v32, vrsqrtsq_f32(v32, vmulq_f32(v31, v32)));
        v52 = vbicq_s8(
            vmulq_f32(v29,
                      vmulq_f32(v33, vrsqrtsq_f32(v33, vmulq_f32(v31, v33)))),
            vceqzq_f32(v31));
        if (LANES128(v31).n128_f32[0] != 0x0.0p+0f) {
          v50 = GameData_21a6120;
          v34 = math_Vec3_Angle(&v53, &v52);
          v28 = v50;
          v35 = v34 * 0x1.ca5dc00000000p+5f;
          *((float*)&v28 + 1) = v35;
          LANES128(v36).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v53, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v37).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v36).n128_i8[8] =
              vqtbl1_s8(v53, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          LANES128(v38).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v53, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v37).n128_i8[8] =
              vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          *(int8x8_t*)&LANES128(v38).n128_i8[8] =
              vqtbl1_s8(v53, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v39).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v39).n128_i8[8] =
              vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          if (LANES128_OF(vmlsq_f32(vmulq_f32(v36, v37), v39, v38))
                  .n128_f32[1] < 0x0.0p+0f) {
            *((float*)&v28 + 1) = -v35;
          }
        }
      }
      v19 = *(_QWORD*)LANES128(*(v13)).n128_u64[0];
      if (*(_DWORD*)(v19 + 16) ==
          *(_DWORD*)(LANES128(*(v13)).n128_u64[0] + 8)) {
        v40 = *(_DWORD*)(v19 + 36);
        if (v40 != 0) {
          for (j = 0; j < v40; ++j) {
            if ((int)v40 > (int)j) {
              v42 = *(_QWORD*)(v19 + 40 + 8LL * (int)j);
              if (v42 != 0) {
                *(_OWORD*)(v42 + 48) = v28;
                *(_BYTE*)(v42 + 128) = 1;
                v40 = *(_DWORD*)(v19 + 36);
              }
            }
          }
          v19 = *(_QWORD*)LANES128(*(v13)).n128_u64[0];
        }
      }
    }
    v43 = *(_QWORD*)(v19 + 40);
    v44 = 16;
    if (*(_BYTE*)(v43 + 129) != 0) {
      v44 = 112;
    }
    v45 = *(float32x4_t*)(v43 + v44);
    v46 = LANES128(a1[12]).n128_u8[0];
    v53 = v45;
    if (v46 == 1) {
      Cursor_730ff0(*GameData_212cfc0[0], (float*)&v53);
    }
  }
}

#pragma GCC visibility pop
