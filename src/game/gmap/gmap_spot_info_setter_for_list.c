#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1657240(_QWORD* result);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_gmap_GmapSpotInfoSetter_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
const char* GmapSpotInfoSetterForList_Unknown8(__int64 a1, char a2);
__int64 GmapSpotInfoSetterForList_DeletingDestructor(_QWORD* a1);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameRoutine_156bee0(__int64 result, __int64, __int64, __int64, char,
                            float, float);
__int64 GameRoutine_165aa40(__int64 result, int, long double);
__int64 std___1___shared_weak_count_lock(long double);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64, long double);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64, long double);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char,
                                         long double);
void GmapSpotInfoSetterForList_Unknown6(__int64 a1, long double a2);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindPane_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
float32x4_t* GameRoutine_156c240(float32x4_t* result);
__int64 GmapSpotInfoSetterForList_Unknown9(__int64 a1, __int64* a2, int a3);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
void GameHr_165bbf0(__int64);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void GmapSpotInfoSetterForList_Unknown10(__int64 a1, char a2);

void GmapSpotInfoSetterForList_Unknown6(__int64 a1, long double a2)
{
  __int64* v3;
  long double v4;
  __int64 v5;
  float v6;
  unsigned __int64 v7;
  long double v8;
  int32x4_t* v9;
  long double v10;
  __int64 v11;
  __int64 v12;
  float v13;
  char v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  __int128 v19;
  __int128 v20;
  unsigned __int64 v21;
  float v22;
  float v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  _BYTE v40[4];

  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 8), (__int64)"L_KeyHelp", 0,
                                   a2),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(__int64**)(a1 + 8);
  *(_DWORD*)(a1 + 32) = 0;
  v5 = ui_LayoutAccessor_FindPane(v3, (__int64)"A_Info00", v4),
  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v6 = 0x0.0p+0f;
  v40[0] = 0;
  v39 = 0xFF7FFFFF7F7FFFFFLL;
  v38 = 0x7F7FFFFFFF7FFFFFLL;
  if (v5 != 0) {
    v7 = LANES128_OF(
             vmulq_f32(*(float32x4_t*)(v5 + 128), *(float32x4_t*)(v5 + 128)))
             .n128_u64[0];
    GameRoutine_156bee0(
        v5, (__int64)&v39, (__int64)&v38, (__int64)v40, 0,
        sqrtf((float)(*(float*)&v7 +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v5 + 112)) *
                              COERCE_FLOAT(*(_OWORD*)(v5 + 112)))) +
              (float)(COERCE_FLOAT(*(_OWORD*)(v5 + 144)) *
                      COERCE_FLOAT(*(_OWORD*)(v5 + 144)))) /
            *(float*)(v5 + 72),
        sqrtf((float)(*((float*)&v7 + 1) +
                      (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v5 + 112))) *
                              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v5 + 112))))) +
              (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v5 + 144))) *
                      COERCE_FLOAT(HIDWORD(*(_QWORD*)(v5 + 144))))) /
            *(float*)(v5 + 76)),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v40[0] == 1) {
      v6 = vabds_f32(*((float*)&v38 + 1), *((float*)&v39 + 1));
    }
  }
  *(float*)&v8 = (*(float (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1),
  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v6 > *(float*)&v8) {
    v9 = (int32x4_t*)ui_LayoutAccessor_FindPane(*(__int64**)(a1 + 8),
                                                (__int64)"A_Info00", v8),
    v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v9 != nullptr) {
      v10 = COERCE_LONG_DOUBLE(vdupq_laneq_s32(v9[7], 3));
      DWORD1(v10) = HIDWORD(LANES128(v9[8]).n128_u64[1]);
    }
    else {
      *(_QWORD*)&v10 = 0;
    }
    v11 = *(_QWORD*)(a1 + 40);
    v12 = *(_QWORD*)(a1 + 48);
    if (v11 != v12) {
      v13 = *((float*)&v10 + 1);
      do {
        v14 = 0;
        do {
          while (*(_DWORD*)(v11 + 64) == -1) {
            v18 = *(_QWORD*)v11;
            if (*(_QWORD*)v11 != 0) {
              v19 = *(_OWORD*)(v18 + 112);
              v20 = *(_OWORD*)(v18 + 144);
              LODWORD(v15) = HIDWORD(*(_OWORD*)(v18 + 128));
              v21 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v18 + 128),
                                          *(float32x4_t*)(v18 + 128)))
                        .n128_u64[0];
              LODWORD(v22) = HIDWORD(*(_QWORD*)(v18 + 112));
              LODWORD(v23) = HIDWORD(*(_QWORD*)(v18 + 144));
              v40[0] = 0;
              v39 = 0xFF7FFFFF7F7FFFFFLL;
              v38 = 0x7F7FFFFFFF7FFFFFLL;
              GameRoutine_156bee0(
                  v18, (__int64)&v39, (__int64)&v38, (__int64)v40, 0,
                  sqrtf((float)(*(float*)&v21 +
                                (float)(*(float*)&v19 * *(float*)&v19)) +
                        (float)(*(float*)&v20 * *(float*)&v20)) /
                      *(float*)(v18 + 72),
                  sqrtf((float)(*((float*)&v21 + 1) +
                                (float)(v22 * *((float*)&v19 + 1))) +
                        (float)(v23 * *((float*)&v20 + 1))) /
                      *(float*)(v18 + 76)),
                  v4 = COERCE_AS(__typeof__(v4),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
              v16 = 0x0.0p+0f;
              if (v40[0] == 1) {
                v16 = vabds_f32(*((float*)&v38 + 1), *((float*)&v39 + 1));
              }
            }
            else {
              v15 = 0x0.0p+0f;
              v16 = 0x0.0p+0f;
            }
            v17 = (float)(v13 - v15) + v16;
            *(float*)&v10 = (*(float (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
            if (v17 > *(float*)&v10) {
              break;
            }
            v14 = 1;
            *(_DWORD*)(v11 + 64) = *(_DWORD*)(a1 + 32);
            *(_BYTE*)(*(_QWORD*)v11 + 88LL) &= ~1u;
            v24 = *(_QWORD*)(v11 + 8);
            v11 += 72;
            *(_BYTE*)(v24 + 88) &= ~1u;
            if (v11 == v12) {
              goto LABEL_22;
            }
          }
          v11 += 72;
        } while (v11 != v12);
        if ((v14 & 1) == 0) {
          break;
        }
      LABEL_22:
        v25 = *(_QWORD*)(a1 + 40);
        v26 = *(_QWORD*)(a1 + 48);
        ++*(_DWORD*)(a1 + 32);
        if (v25 != v26) {
          do {
            if (*(_DWORD*)(v25 + 64) == -1) {
              *(_BYTE*)(*(_QWORD*)(v25 + 8) + 88LL) |= 1u;
            }
            v25 += 72;
          } while (v25 != v26);
          v25 = *(_QWORD*)(a1 + 40);
          v26 = *(_QWORD*)(a1 + 48);
        }
        while (v25 != v26) {
          if (*(_DWORD*)(v25 + 64) == -1) {
            v27 = *(_QWORD*)(v25 + 16);
            if (*(_QWORD*)(v25 + 24) != v27) {
              v28 = 0;
              v29 = 0;
              do {
                v30 = *(__int64**)(v27 + v28);
                v31 = ui_LayoutAccessor_FindAlignment(
                    v30, *(_QWORD*)(*(_QWORD*)(v25 + 40) + 8 * v29), v10),
                v4 = COERCE_AS(__typeof__(v4),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
                if (v31 != 0) {
                  Alignment_56b600(v31),
                      v4 = COERCE_AS(__typeof__(v4),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
                  if (v30[1] != 0) {
                    v32 = std___1___shared_weak_count_lock(v10),
                    v4 = COERCE_AS(__typeof__(v4),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
                    if (v32 != 0) {
                      v33 = v32;
                      if (*v30 != 0) {
                        ControlCreator_13633c0(*v30),
                            v4 = COERCE_AS(__typeof__(v4),
                                           PSEUDO_REGISTER(__n128, "v0", "=w"));
                      }
                      if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33),
                            v4 = COERCE_AS(__typeof__(v4),
                                           PSEUDO_REGISTER(__n128, "v0", "=w"));
                        std___1___shared_weak_count___release_weak(v33),
                            v4 = COERCE_AS(__typeof__(v4),
                                           PSEUDO_REGISTER(__n128, "v0", "=w"));
                      }
                    }
                  }
                }
                v27 = *(_QWORD*)(v25 + 16);
                ++v29;
                v28 += 16;
              } while (v29 < (*(_QWORD*)(v25 + 24) - v27) >> 4);
            }
          }
          v25 += 72;
        }
        v34 = *(__int64**)(a1 + 8);
        v35 = ui_LayoutAccessor_FindAlignment(v34, (__int64)"A_Info00", v10),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v35 != 0) {
          Alignment_56b600(v35),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v34[1] != 0) {
            v36 = std___1___shared_weak_count_lock(v10),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
            if (v36 != 0) {
              v37 = v36;
              if (*v34 != 0) {
                ControlCreator_13633c0(*v34),
                    v4 = COERCE_AS(__typeof__(v4),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37),
                    v4 = COERCE_AS(__typeof__(v4),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
                std___1___shared_weak_count___release_weak(v37),
                    v4 = COERCE_AS(__typeof__(v4),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
            }
          }
        }
        v11 = *(_QWORD*)(a1 + 40);
        v12 = *(_QWORD*)(a1 + 48);
      } while (v11 != v12);
    }
    if (*(int*)(a1 + 32) >= 1) {
      GameRoutine_165aa40(a1, 0, v10),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
}

float GmapSpotInfoSetterForList_Unknown7() { return 230.0; }

const char* GmapSpotInfoSetterForList_Unknown8(__int64 a1, char a2)
{
  if ((a2 & 1) != 0) {
    return "A_ItemR";
  }
  else {
    return "A_ItemL";
  }
}

__int64 GmapSpotInfoSetterForList_Unknown9(__int64 a1, __int64* a2, int a3)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float32x4_t v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v6 = *a2;
      v7 = result;
      if (*a2 == 0) {
        goto LABEL_23;
      }
      ui_LayoutAccessor_SetPaneVisible_alt1(*a2, "Gauge00", a3 < 5);
      result = ui_LayoutAccessor_SetPaneVisible_alt1(v6, "N_Gauge01", a3 > 4);
      v9 = (__int64*)*a2;
      v8 = a2[1];
      if (a3 < 5) {
        if (v8 == 0) {
          goto LABEL_23;
        }
        v17 = a2[1];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        v18 = std___1___shared_weak_count_lock_alt1(v17);
        if (v18 == 0) {
        LABEL_22:
          result = std___1___shared_weak_count___release_weak_alt1(v8);
        LABEL_23:
          if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            return std___1___shared_weak_count___release_weak_alt1(v7);
          }
          return result;
        }
        v15 = v18;
        if (v9 == nullptr) {
        LABEL_20:
          if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
            std___1___shared_weak_count___release_weak_alt1(v15);
          }
          goto LABEL_22;
        }
        v24 = 0;
        v25 = 0;
        v22 = 0;
        v23 = 0;
        v21 = 0;
        v19 = ui_LayoutAccessor_FindPane_alt1(v9, "Gauge00");
        v16 = "A_ItemL";
        LANES128(v20).n128_u64[0] = v19;
      }
      else {
        if (v8 == 0) {
          goto LABEL_23;
        }
        v10 = a2[1];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        v11 = std___1___shared_weak_count_lock_alt1(v10);
        if (v11 != 0) {
          v12 = v11;
          if (v9 != nullptr) {
            v24 = 0;
            v25 = 16777472;
            v22 = 0;
            v23 = 0;
            v21 = 0;
            LANES128(v20).n128_u64[0] =
                ui_LayoutAccessor_FindPane_alt1(v9, "Gauge01_L");
            LANES128(v20).n128_u64[1] =
                ui_LayoutAccessor_FindPane_alt1(v9, "A_ItemL");
            GameRoutine_156c240(&v20);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak_alt1(v12);
          }
        }
        result = std___1___shared_weak_count___release_weak_alt1(v8);
        v8 = a2[1];
        if (v8 == 0) {
          goto LABEL_23;
        }
        v9 = (__int64*)*a2;
        v13 = a2[1];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        v14 = std___1___shared_weak_count_lock_alt1(v13);
        if (v14 == 0) {
          goto LABEL_22;
        }
        v15 = v14;
        if (v9 == nullptr) {
          goto LABEL_20;
        }
        v24 = 0;
        v25 = 0;
        v22 = 0;
        v23 = 0;
        v21 = 0;
        LANES128(v20).n128_u64[0] =
            ui_LayoutAccessor_FindPane_alt1(v9, "Gauge01_R");
        v16 = "A_ItemR";
      }
      LANES128(v20).n128_u64[1] = ui_LayoutAccessor_FindPane_alt1(v9, v16);
      BYTE1(v25) = 1;
      BYTE3(v25) = 1;
      GameRoutine_156c240(&v20);
      goto LABEL_20;
    }
  }
  return result;
}

void GmapSpotInfoSetterForList_Unknown10(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  int v10;
  int v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  struct {
    __int64* v18;
    __int64 v19;
  } v18_;
  float v20;
  _DWORD v21[2];

  LayoutAccessor_1560070((void*)(&v18_.v18), *(__int64**)(a1 + 8),
                         "L_Festival");
  if (v18_.v19 != 0) {
    v4 = std___1___shared_weak_count_lock_alt1(v18_.v19);
    v5 = v18_.v18;
    if (v4 != 0) {
      v6 = v18_.v18;
    }
    else {
      v6 = nullptr;
    }
    if (v18_.v19 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v18_.v19);
    }
    if (v6 != nullptr) {
      LayoutAccessor_155e830((__int64)v5, a2 & 1);
      if ((a2 & 1) != 0 && (*(_BYTE*)(a1 + 80) & 1) == 0) {
        v7 = ui_LayoutAccessor_FindTextBox(v5, (__int64)"T_Txt");
        if (v7 != 0) {
          v8 = v7;
          v9 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v5, (__int64)"T_Txt");
          if (v9 != nullptr) {
            ui_text_190a0c0((float*)&v18_.v18, (__int64)v21, &v20, v9, v9[27]);
            v10 = v21[0];
            v11 = v21[1];
          }
          else {
            v10 = 0;
            v11 = 0;
          }
          v12 = *(_BYTE*)(v8 + 88);
          *(_DWORD*)(v8 + 80) = v10;
          *(_DWORD*)(v8 + 84) = v11;
          *(_BYTE*)(v8 + 88) = v12 | 0x10;
        }
        v13 = ui_LayoutAccessor_FindAlignment_alt1(v5, (__int64)"A_Txt");
        if (v13 != 0) {
          Alignment_56b600(v13);
          v14 = v5[1];
          if (v14 != 0) {
            v15 = std___1___shared_weak_count_lock_alt1(v14);
            if (v15 != 0) {
              v16 = v15;
              if (*v5 != 0) {
                ControlCreator_13633c0(*v5);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
                std___1___shared_weak_count___release_weak_alt1(v16);
              }
            }
          }
        }
        v17[0] = v6;
        v17[1] = v4;
        if (v4 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                    memory_order_relaxed);
          GameHr_165bbf0((__int64)v17);
          std___1___shared_weak_count___release_weak_alt1(v4);
        }
        else {
          GameHr_165bbf0((__int64)v17);
        }
        *(_BYTE*)(a1 + 80) = 1;
      }
    }
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt1(v4);
    }
  }
}

__int64 GmapSpotInfoSetterForList_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = &game_gmap_GmapSpotInfoSetter_vtable;
  v2 = a1[9];
  a1[9] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1 + 5;
  v4 = fw_memory_g_heap_manager_ptr;
  if (a1[5] != 0) {
    GameRoutine_1657240(a1 + 5);
    if (*v3 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v5, *v3);
    }
  }
  v6 = a1[2];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, a1);
}

#pragma GCC visibility pop
