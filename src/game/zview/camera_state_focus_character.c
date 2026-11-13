#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* GameRoutine_d20f00(_QWORD* result);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_CameraStateFocusCharacter_vtable[])();
extern __int64 GameData_220b6f0;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* CameraStateFocusCharacter_Destructor(__int64 a1);
__int64 GameRoutine_1016400(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, long double);
__int64 GameRoutine_a7fda0(_QWORD, _QWORD);
__int64 HubCharacterNatives_cf7940(_QWORD);
__int64 __cxa_guard_release(_QWORD, float);
__int64 game_Unit_GetJob(void);
extern _QWORD GameData_21a6130[];
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 GameData_212dc38[7];
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212eda8[10];
struct PseudoSret __cxa_guard_acquire(_QWORD);
__int64 CameraStateFocusCharacter_Unknown2(__int64 a1);
bool GameRoutine_d27d30(__int64);
extern __int64* GameData_212ed08[13];
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float GameRoutine_1016910(__int64, float);
float GameRoutine_1016b40(float32x4_t*, float);
float GameRoutine_d21160(__int64);
void CameraStateFocusCharacter_Unknown3(__int64 a1);
__int64
HubCharacterNatives_cf7940_alt1(__int64) __asm__("HubCharacterNatives_cf7940");
__int64 game_1016400(float32x4_t*, unsigned __int32, unsigned __int32*,
                     unsigned __int32*, unsigned __int64*, _QWORD*, char,
                     float);
__int64 game_Unit_GetJob_alt1(__int64) __asm__("game_Unit_GetJob");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 wld_a7fda0(__int64 result, _DWORD*);
extern _UNKNOWN GameData_21a6130_alt1 __asm__("GameData_21a6130");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

_QWORD* CameraStateFocusCharacter_Destructor(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  *(_QWORD*)a1 = game_zview_CameraStateFocusCharacter_vtable;
  if (*(_BYTE*)(a1 + 1312) == 1) {
    v2 = *(__int64**)(a1 + 880);
    v3 = *(_QWORD*)(a1 + 888);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      v4 = *v2;
      if (v4 != 0 && GameData_220b6f0 != 0) {
        v5 = *(_QWORD**)(GameData_220b6f0 + 8);
        v6 = *(_QWORD**)(GameData_220b6f0 + 16);
        if (v5 != v6) {
          while (*v5 != v4) {
            v5 += 2;
            if (v5 == v6) {
              v5 = *(_QWORD**)(GameData_220b6f0 + 16);
              break;
            }
          }
        }
        if (v5 == v6) {
          v7 = 0;
        }
        else {
          v7 = v4;
        }
      }
      else {
        v7 = 0;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
    }
    else {
      v7 = *v2;
      if (*v2 == 0 || GameData_220b6f0 == 0) {
        goto LABEL_25;
      }
      v8 = *(_QWORD**)(GameData_220b6f0 + 8);
      v9 = *(_QWORD**)(GameData_220b6f0 + 16);
      if (v8 != v9) {
        while (*v8 != v7) {
          v8 += 2;
          if (v8 == v9) {
            goto LABEL_25;
          }
        }
      }
      if (v8 == v9) {
        goto LABEL_25;
      }
    }
    if (v7 != 0) {
      v10 = *(_QWORD*)(v7 + 24);
      if (*(_BYTE*)(v10 + 336) == 1) {
        *(_BYTE*)(v10 + 336) = 0;
      }
    }
  LABEL_25:
    *(_BYTE*)(a1 + 1312) = 0;
  }
  v11 = *(_QWORD*)(a1 + 1232);
  if (v11 != 0) {
    *(_QWORD*)(a1 + 1240) = v11;
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  v11);
  }
  v13 = *(_QWORD*)(a1 + 1224);
  if (v13 != 0) {
    std___1___shared_weak_count___release_weak(v13);
  }
  v14 = *(_QWORD*)(a1 + 1112);
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
  }
  return GameRoutine_d20f00((_QWORD*)a1);
}

__int64 CameraStateFocusCharacter_Unknown2(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v3;
  __int128 v4;
  __int128 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int128 v25;
  _DWORD* v26;
  int32x4_t v27;
  __int64 v28;
  __int128 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float v33;
  unsigned __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  _QWORD* v38;
  struct {
    unsigned __int64 v39;
    __int64 v40;
  } v39_;
  __int128 v41;

  result = wld_a7fda0(a1 + 80, (_DWORD*)(*(_QWORD*)GameData_212dc38[0] + 16LL));
  v3 = *(_QWORD*)(a1 + 912);
  v4 = *(_OWORD*)(*(_QWORD*)(v3 + 8) + 112LL);
  *(_QWORD*)(v3 + 16) = v4;
  v5 = *(_OWORD*)(v3 + 16);
  *((_QWORD*)&v5 + 1) = DWORD2(v4);
  *(_OWORD*)(v3 + 16) = v5;
  LODWORD(v5) = *(_DWORD*)(a1 + 164);
  v6 = *(__int64**)(a1 + 880);
  v7 = *(_QWORD*)(a1 + 888);
  *(_DWORD*)(a1 + 836) = *(_DWORD*)(a1 + 168);
  *(_DWORD*)(a1 + 832) = v5;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    v8 = *v6;
    if (v8 != 0 && (v9 = *GameData_212eba8[0], *GameData_212eba8[0] != 0)) {
      v10 = *(_QWORD**)(v9 + 8);
      v11 = *(_QWORD**)(v9 + 16);
      if (v10 != v11) {
        while (*v10 != v8) {
          v10 += 2;
          if (v10 == v11) {
            v10 = v11;
            break;
          }
        }
      }
      if (v10 == v11) {
        v12 = 0;
      }
      else {
        v12 = v8;
      }
    }
    else {
      v12 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      result = std___1___shared_weak_count___release_weak_alt1(v7);
    }
    goto LABEL_21;
  }
  v12 = *v6;
  if (*v6 != 0) {
    v13 = *GameData_212eba8[0];
    if (*GameData_212eba8[0] != 0) {
      v14 = *(_QWORD**)(v13 + 8);
      v15 = *(_QWORD**)(v13 + 16);
      if (v14 != v15) {
        while (*v14 != v12) {
          v14 += 2;
          if (v14 == v15) {
            goto LABEL_53;
          }
        }
      }
      if (v14 != v15) {
      LABEL_21:
        if (v12 == 0) {
          goto LABEL_53;
        }
        v16 = *(_QWORD*)(v12 + 168);
        if (v16 != 0) {
          v17 = (_QWORD*)game_Unit_GetJob_alt1(v16);
        }
        else {
          v17 = nullptr;
        }
        v18 = *(_QWORD**)(a1 + 880);
        v19 = *(_QWORD*)(a1 + 888);
        if (v19 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                    memory_order_relaxed);
        }
        if ((atomic_load_explicit(
                 (atomic_uchar* volatile)&GameData_21a6130_alt1,
                 memory_order_acquire) &
             1) == 0) {
          v38 = v18;
          v36 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6130_alt1);
          v18 = v38;
          if (v36 != 0) {
            v37 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v37;
            __cxa_guard_release_alt1((__int64)&GameData_21a6130_alt1);
            v18 = v38;
          }
        }
        v41 = GameData_21a6120;
        v20 = *v18;
        if (v20 == 0) {
          goto LABEL_36;
        }
        v21 = *GameData_212eba8[0];
        if (*GameData_212eba8[0] == 0) {
          goto LABEL_36;
        }
        v22 = *(_QWORD**)(v21 + 8);
        v23 = *(_QWORD**)(v21 + 16);
        if (v22 != v23) {
          while (*v22 != v20) {
            v22 += 2;
            if (v22 == v23) {
              goto LABEL_36;
            }
          }
        }
        if (v22 != v23) {
          v24 = *(_QWORD*)(v20 + 16);
          v25 = *(_OWORD*)(v24 + 560);
          v26 = (_DWORD*)(v24 + 580);
          LANES128(v27).n128_u32[2] = DWORD2(v25);
        }
        else {
        LABEL_36:
          if (*GameData_212eda8[0] == 0) {
          LABEL_39:
            v30 = *(_QWORD*)(v12 + 8);
            if (*(_BYTE*)(v30 + 145) == 1) {
              v31 = HubCharacterNatives_cf7940_alt1(v30);
              v30 = *(_QWORD*)(v12 + 8);
            }
            else {
              v31 = 0;
            }
            v32 = *(_QWORD*)(v30 + 232);
            v33 = *(float*)(a1 + 832);
            v34 = *(_QWORD*)(v32 + 392);
            v35 = *(_QWORD*)(v32 + 400);
            if (v35 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 8), 1u,
                                        memory_order_relaxed);
              v39_.v39 = v34;
              v39_.v40 = v35;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 16), 1u,
                                        memory_order_relaxed);
            }
            else {
              v39_.v39 = *(_QWORD*)(v32 + 392);
              v39_.v40 = 0;
            }
            game_1016400((float32x4_t*)(a1 + 992), 0, (unsigned __int32*)&v41,
                         (unsigned __int32*)(v31 + 336), &v39_.v39, v17, 0,
                         v33);
            result = v39_.v40;
            if (v39_.v40 != 0) {
              result =
                  std___1___shared_weak_count___release_weak_alt1(v39_.v40);
            }
            if (v35 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
              result = std___1___shared_weak_count___release_weak_alt1(v35);
            }
            if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
              result = std___1___shared_weak_count___release_weak_alt1(v19);
            }
            goto LABEL_53;
          }
          v28 = *(_QWORD*)(*GameData_212eda8[0] + 8);
          *(_QWORD*)&v25 = *(_QWORD*)(v28 + 280);
          v26 = (_DWORD*)(v28 + 168);
          v27 = vdupq_lane_s32(*(int32x2_t*)&v25, 1);
        }
        *(_QWORD*)&v29 = __PAIR64__(*v26, v25);
        *((_QWORD*)&v29 + 1) = LANES128(v27).n128_u32[2];
        v41 = v29;
        goto LABEL_39;
      }
    }
  }
LABEL_53:
  *(_DWORD*)(a1 + 532) = 0;
  *(_QWORD*)(a1 + 516) = 0x42480000C2480000LL;
  *(_QWORD*)(a1 + 524) = 0;
  *(_QWORD*)(a1 + 492) = 0;
  *(_QWORD*)(a1 + 500) = 0;
  *(_QWORD*)(a1 + 508) = 0;
  return result;
}

void CameraStateFocusCharacter_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  float v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  bool v17;
  bool v18;
  float v19;
  float v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int128 v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  __int64 v36;
  int v37;
  __int128 v38;
  int v39;
  __int128 v40;
  __int128 v41;

  v2 = *(__int64**)(a1 + 880);
  v3 = *(_QWORD*)(a1 + 888);
  v4 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL) *
       0x1.0aef000000000p+4f;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v5 = *v2;
    if (v5 != 0 && GameData_220b6f0 != 0) {
      v6 = *(_QWORD**)(GameData_220b6f0 + 8);
      v7 = *(_QWORD**)(GameData_220b6f0 + 16);
      if (v6 != v7) {
        while (*v6 != v5) {
          v6 += 2;
          if (v6 == v7) {
            v6 = *(_QWORD**)(GameData_220b6f0 + 16);
            break;
          }
        }
      }
      if (v6 == v7) {
        v8 = 0;
      }
      else {
        v8 = v5;
      }
    }
    else {
      v8 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    v8 = *v2;
    if (*v2 == 0 || GameData_220b6f0 == 0) {
      goto LABEL_23;
    }
    v9 = *(_QWORD**)(GameData_220b6f0 + 8);
    v10 = *(_QWORD**)(GameData_220b6f0 + 16);
    if (v9 != v10) {
      while (*v9 != v8) {
        v9 += 2;
        if (v9 == v10) {
          goto LABEL_23;
        }
      }
    }
    if (v9 == v10) {
      goto LABEL_23;
    }
  }
  if (v8 == 0) {
  LABEL_23:
    v11 = 0;
    goto LABEL_24;
  }
  v11 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 232LL);
LABEL_24:
  v12 = v4 / 0x1.f400000000000p+9f;
  v13 = 0x1.0000000000000p+0f;
  if (*(_BYTE*)(a1 + 1313) == 1) {
    v14 = *(float*)(a1 + 544);
    if (v14 > 0x0.0p+0f) {
      v15 = *(float*)(*(_QWORD*)(a1 + 928) + 92LL) / v14;
      v16 = 0x1.0000000000000p+0f;
      if (v15 <= 0x1.0000000000000p+0f) {
        v16 = v15;
      }
      v17 = v15 < 0x0.0p+0f;
      v13 = 0x0.0p+0f;
      if (!v17) {
        v13 = v16;
      }
    }
  }
  *(_QWORD*)(a1 + 1200) = v11;
  *(float*)(a1 + 1208) = v13;
  *(float*)(a1 + 1304) = v13;
  v18 = GameRoutine_d27d30(*GameData_212ed08[0]);
  v19 = *(float*)(a1 + 1308);
  v20 = *(float*)(a1 + 1304);
  *(_BYTE*)(a1 + 1060) = v18;
  v21 = fabsf(v12 + v12);
  if (v19 > v20) {
    v19 = v19 - v21;
    if (v19 >= v20) {
      goto LABEL_36;
    }
  LABEL_35:
    v19 = v20;
    goto LABEL_36;
  }
  if (v19 < v20) {
    v19 = v21 + v19;
    if (v19 > v20) {
      goto LABEL_35;
    }
  }
LABEL_36:
  *(float*)(a1 + 1308) = v19;
  GameRoutine_1016910(a1 + 992, v12);
  GameRoutine_1016b40((float32x4_t*)(a1 + 992), v12);
  v22 = *(_QWORD*)(a1 + 880);
  v23 = *(_QWORD*)(a1 + 888);
  *(_DWORD*)(a1 + 488) = *(_DWORD*)(a1 + 1004);
  *(_DWORD*)(a1 + 544) = *(_DWORD*)(a1 + 992);
  v24 = *(_OWORD*)(a1 + 1024);
  *(_QWORD*)(a1 + 640) = v24;
  v25 = *(_OWORD*)(a1 + 640);
  *((_QWORD*)&v25 + 1) = DWORD2(v24);
  *(_OWORD*)(a1 + 640) = v25;
  if (v23 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                              memory_order_relaxed);
  }
  v26 = *(_OWORD*)(a1 + 1008);
  if (*(_BYTE*)(v22 + 32) != 0) {
    *(_QWORD*)(v22 + 16) = v26;
    v27 = *(_OWORD*)(v22 + 16);
    *((_QWORD*)&v27 + 1) = DWORD2(v26);
    *(_OWORD*)(v22 + 16) = v27;
    if (v23 == 0) {
      goto LABEL_44;
    }
  }
  else {
    *(_BYTE*)(v22 + 32) = 1;
    *(_OWORD*)(v22 + 16) = v26;
    if (v23 == 0) {
      goto LABEL_44;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
  }
LABEL_44:
  v28 = *(__int64**)(a1 + 880);
  v29 = *(_QWORD*)(a1 + 888);
  if (v29 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                              memory_order_relaxed);
    v30 = *v28;
    if (v30 != 0 && GameData_220b6f0 != 0) {
      v31 = *(_QWORD**)(GameData_220b6f0 + 8);
      v32 = *(_QWORD**)(GameData_220b6f0 + 16);
      if (v31 != v32) {
        while (*v31 != v30) {
          v31 += 2;
          if (v31 == v32) {
            v31 = *(_QWORD**)(GameData_220b6f0 + 16);
            break;
          }
        }
      }
      if (v31 == v32) {
        v33 = 0;
      }
      else {
        v33 = v30;
      }
    }
    else {
      v33 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
      std___1___shared_weak_count___release_weak(v29);
    }
  LABEL_64:
    if (v33 != 0) {
      v36 = *(_QWORD*)(v33 + 24);
      v37 = *(_DWORD*)(a1 + 1056);
      v38 = *(_OWORD*)(a1 + 1040);
      v39 = *(unsigned __int8*)(v36 + 336);
      *(_QWORD*)(v36 + 272) = 0;
      if (v39 == 1) {
        *(_QWORD*)(v36 + 288) = v38;
        *(_QWORD*)(v36 + 304) = v38;
        v40 = *(_OWORD*)(v36 + 288);
        v41 = *(_OWORD*)(v36 + 304);
        *((_QWORD*)&v40 + 1) = DWORD2(v38);
        *((_QWORD*)&v41 + 1) = DWORD2(v38);
        *(_OWORD*)(v36 + 288) = v40;
        *(_OWORD*)(v36 + 304) = v41;
      }
      else {
        DWORD3(v38) = 0;
        *(_BYTE*)(v36 + 336) = 1;
        *(_OWORD*)(v36 + 288) = v38;
        *(_OWORD*)(v36 + 304) = v38;
      }
      *(_DWORD*)(v36 + 320) = v37;
      *(_BYTE*)(a1 + 1312) = 1;
    }
    goto LABEL_69;
  }
  v33 = *v28;
  if (*v28 != 0 && GameData_220b6f0 != 0) {
    v34 = *(_QWORD**)(GameData_220b6f0 + 8);
    v35 = *(_QWORD**)(GameData_220b6f0 + 16);
    if (v34 != v35) {
      while (*v34 != v33) {
        v34 += 2;
        if (v34 == v35) {
          goto LABEL_69;
        }
      }
    }
    if (v34 != v35) {
      goto LABEL_64;
    }
  }
LABEL_69:
  *(_DWORD*)(a1 + 836) = *(_DWORD*)(a1 + 996);
  *(_DWORD*)(a1 + 832) = *(_DWORD*)(a1 + 1000);
  GameRoutine_d21160(a1);
  *(_BYTE*)(a1 + 1313) = 1;
}

#pragma GCC visibility pop
