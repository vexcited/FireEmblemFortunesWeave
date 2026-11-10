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
  __int64 result;
  __int64 v3;
  long double v4;
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
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  __int128 v24;
  _DWORD* v25;
  int32x4_t v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int128 v38;

  result = GameRoutine_a7fda0(a1 + 80, *(_QWORD*)GameData_212dc38[0] + 16LL);
  v3 = *(_QWORD*)(a1 + 912);
  v4 = *(long double*)(*(_QWORD*)(v3 + 8) + 112LL);
  *(_QWORD*)(v3 + 16) = *(_QWORD*)&v4;
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
      result = std___1___shared_weak_count___release_weak(v7);
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
        if (*(_QWORD*)(v12 + 168) != 0) {
          v16 = game_Unit_GetJob();
        }
        else {
          v16 = 0;
        }
        v17 = *(_QWORD**)(a1 + 880);
        v18 = *(_QWORD*)(a1 + 888);
        if (v18 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                    memory_order_relaxed);
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0) {
          v35 = v17;
          v33 = (unsigned int)(*(struct PseudoSret*)(v17) =
                                   __cxa_guard_acquire(GameData_21a6130),
                               (void*)(v17));
          v17 = v35;
          if (v33 != 0) {
            v34 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v34;
            __cxa_guard_release(GameData_21a6130, *(float*)&v4);
            v17 = v35;
          }
        }
        v38 = GameData_21a6120;
        v19 = *v17;
        if (v19 == 0) {
          goto LABEL_36;
        }
        v20 = *GameData_212eba8[0];
        if (*GameData_212eba8[0] == 0) {
          goto LABEL_36;
        }
        v21 = *(_QWORD**)(v20 + 8);
        v22 = *(_QWORD**)(v20 + 16);
        if (v21 != v22) {
          while (*v21 != v19) {
            v21 += 2;
            if (v21 == v22) {
              goto LABEL_36;
            }
          }
        }
        if (v21 != v22) {
          v23 = *(_QWORD*)(v19 + 16);
          v24 = *(_OWORD*)(v23 + 560);
          v25 = (_DWORD*)(v23 + 580);
          ((uint32_t*)&v26)[2] = DWORD2(v24);
        }
        else {
        LABEL_36:
          if (*GameData_212eda8[0] == 0) {
          LABEL_39:
            v28 = *(_QWORD*)(v12 + 8);
            if (*(_BYTE*)(v28 + 145) == 1) {
              v29 = HubCharacterNatives_cf7940(v28);
              v28 = *(_QWORD*)(v12 + 8);
            }
            else {
              v29 = 0;
            }
            v30 = *(_QWORD*)(v28 + 232);
            LODWORD(v4) = *(_DWORD*)(a1 + 832);
            v31 = *(_QWORD*)(v30 + 392);
            v32 = *(_QWORD*)(v30 + 400);
            if (v32 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                                        memory_order_relaxed);
              v36 = v31;
              v37 = v32;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                                        memory_order_relaxed);
            }
            else {
              v36 = *(_QWORD*)(v30 + 392);
              v37 = 0;
            }
            GameRoutine_1016400(a1 + 992, 0, &v38, v29 + 336, &v36, v16, 0, v4);
            result = v37;
            if (v37 != 0) {
              result = std___1___shared_weak_count___release_weak(v37);
            }
            if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
              result = std___1___shared_weak_count___release_weak(v32);
            }
            if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
              result = std___1___shared_weak_count___release_weak(v18);
            }
            goto LABEL_53;
          }
          v27 = *(_QWORD*)(*GameData_212eda8[0] + 8);
          *(_QWORD*)&v24 = *(_QWORD*)(v27 + 280);
          v25 = (_DWORD*)(v27 + 168);
          v26 = vdupq_lane_s32(*(int32x2_t*)&v24, 1);
        }
        *(_QWORD*)&v4 = __PAIR64__(*v25, v24);
        *((_QWORD*)&v4 + 1) = ((uint32_t*)&v26)[2];
        v38 = *(_OWORD*)&v4;
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

#pragma GCC visibility pop
