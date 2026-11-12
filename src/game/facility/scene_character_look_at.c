#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1415980(_QWORD* result);
__int64 GameRoutine_1416c80(_QWORD, _QWORD);
__int64 GameRoutine_7a88a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*game_facility_SceneCharacterLookAt_vtable[])();
extern __int64 GameData_212dce8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
_QWORD* SceneCharacterLookAt_Destructor_alt1(__int64 a1) __asm__(
    "SceneCharacterLookAt_Destructor");
__int64 SceneCharacterLookAt_1416860_alt2(__int64 a1, _QWORD* a2) __asm__(
    "SceneCharacterLookAt_1416860");
__int64 SceneCharacterLookAt_1416a00(__int64 a1, __int64 a2, float a3,
                                     float a4);
__int64 GameRoutine_14172a0(_QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 SceneCharacterLookAt_1416c80(__int64* a1, _QWORD* a2);
__attribute__((swiftcall)) void SceneCharacterMovement_1417860(PSEUDO_X8,
                                                               _QWORD);
__attribute__((swiftcall)) void game_13f9200(PSEUDO_X8, int8x16_t*);
__attribute__((swiftcall)) void game_13f9460(PSEUDO_X8, float32x4_t*);
__attribute__((swiftcall)) void math_Mtx43_MakeRotation(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1400780(_QWORD, _QWORD, float);
__int64 GameRoutine_14176e0(_QWORD, _QWORD, _QWORD);
__int64 SceneCharacterAnimator_1412540(_QWORD, _QWORD, _QWORD);
__int64 SceneCharacter_13ff750(_QWORD);
__int64 SceneObjectHolder_1461dc0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_108cc80(_QWORD, _QWORD);
__int64 game_facility_140c9a0(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
double cos(double);
double sin(double);
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN GameData_21a61b0;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a61a0;
extern float game_script_math_kDirCorrections[91];
__int64 SceneCharacterLookAt_1400060(__int64 a1, float32x4_t* a2);
__int64 SceneCharacterLookAt_Unknown2(__int64 a1);
__attribute__((swiftcall)) void SceneCharacterLookAt_14164a0(PSEUDO_X8 x8_,
                                                             __int64 a1);
__attribute__((swiftcall)) void
game_facility_SceneCharacterLookAt_ReserveSetStareCharacter_lambda0_Invoke(
    PSEUDO_X8 x8_, __int64 a1);
void game_facility_1415980(_QWORD*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SceneCharacterLookAt_Destructor(__int64 a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
void GameRoutine_14172a0_alt1(__int64*, _QWORD*) __asm__("GameRoutine_14172a0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
__int64 SceneCharacterLookAt_1416860_alt1(__int64, const char**) __asm__(
    "SceneCharacterLookAt_1416860");
__int64 game_facility_1418520(__int64, float*, float);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_2039960[])();
extern __int64 (*GameData_20399e0[])();
__int64 game_facility_SceneCharacterLookAt_ReserveResetOnRelocate(_QWORD* a1,
                                                                  float* a2,
                                                                  float a3);
const char* game_facility_SceneCharacterLookAt_ReserveSetStareCharacter(
    __int64 a1, unsigned __int8* a2, float a3);
__int64 GameHr_7a88a0(__int64*);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0();
__int64 SceneCharacterLookAt_1416860(__int64 a1, const char** a2);

__int64 SceneCharacterLookAt_1400060(__int64 a1, float32x4_t* a2)
{
  int v2;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  char v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  bool v34;
  unsigned __int64 v35;
  __int64 v36;
  float32x4_t* v37;
  float32x4_t* v38;
  float32x4_t* v39;
  float32x4_t v40;
  float v41;
  float v42;
  float v43;
  int v44;
  float v45;
  float v46;
  float v47;
  int v48;
  float v49;
  float i;
  float32x4_t* v51;
  float32x4_t* v52;
  int16x4_t v53;
  float32x4_t* v54;
  float32x4_t* v55;
  float32x4_t* v56;
  __int64 v57;
  __int64 result;
  __int64 v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;

  v2 = LANES128(*(a2)).n128_u32[0];
  if (LANES128(*(a2)).n128_u32[0] == 0) {
    goto LABEL_63;
  }
  v5 = *(_QWORD*)(a1 + 112);
  v6 = *(_QWORD*)(a1 + 120);
  if (v6 == 0) {
    if (v2 <= -574916403) {
      if (v2 <= -1054720719) {
        if (v2 == -1689213573) {
          goto LABEL_53;
        }
        v9 = -1101902990;
      }
      else {
        if (v2 == -1054720718 || v2 == -1009115453) {
          goto LABEL_53;
        }
        v9 = -589947500;
      }
    }
    else if (v2 > 1192222314) {
      if (v2 == 1192222315 || v2 == 1669996436) {
        goto LABEL_53;
      }
      v9 = 1257611790;
    }
    else {
      if (v2 == -574916402 || v2 == 105782307) {
        goto LABEL_53;
      }
      v9 = 119788728;
    }
    if (v2 != v9) {
      goto LABEL_63;
    }
  LABEL_53:
    if (v2 == *(_DWORD*)(v5 + 108)) {
      goto LABEL_63;
    }
    *(_DWORD*)(v5 + 108) = v2;
    v10 = *(_QWORD*)(a1 + 112);
    v11 = *(_QWORD*)(a1 + 120);
    if (v11 != 0) {
      goto LABEL_32;
    }
    goto LABEL_55;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                            memory_order_relaxed);
  v7 = LANES128(*(a2)).n128_u32[0];
  if (LANES128(*(a2)).n128_i32[0] <= -574916403) {
    if (v7 <= -1054720719) {
      if (v7 == -1689213573) {
        goto LABEL_27;
      }
      v8 = -1101902990;
    }
    else {
      if (v7 == -1054720718 || v7 == -1009115453) {
        goto LABEL_27;
      }
      v8 = -589947500;
    }
  }
  else if (v7 > 1192222314) {
    if (v7 == 1192222315 || v7 == 1669996436) {
      goto LABEL_27;
    }
    v8 = 1257611790;
  }
  else {
    if (v7 == -574916402 || v7 == 105782307) {
      goto LABEL_27;
    }
    v8 = 119788728;
  }
  if (v7 != v8) {
    goto LABEL_28;
  }
LABEL_27:
  if (v7 != *(_DWORD*)(v5 + 108)) {
    *(_DWORD*)(v5 + 108) = v7;
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      v10 = *(_QWORD*)(a1 + 112);
      v11 = *(_QWORD*)(a1 + 120);
      if (v11 != 0) {
        goto LABEL_32;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
      v10 = *(_QWORD*)(a1 + 112);
      v11 = *(_QWORD*)(a1 + 120);
      if (v11 != 0) {
      LABEL_32:
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        v12 = *(_QWORD*)(v10 + 80);
        if (v12 != 0) {
          v13 = *(_DWORD*)(v12 + 120);
        }
        else {
          v13 = 0;
        }
        v14 = *(_DWORD*)(v10 + 108);
        if (v13 == v14 || (game_108cc80(v13, v14) & 1) != 0) {
          v15 = 1;
        }
        else {
          v15 = game_108cc80(v14, v13);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
        if ((v15 & 1) != 0) {
          goto LABEL_63;
        }
        goto LABEL_47;
      }
    }
  LABEL_55:
    v17 = *(_QWORD*)(v10 + 80);
    if (v17 != 0) {
      v18 = *(_DWORD*)(v17 + 120);
    }
    else {
      v18 = 0;
    }
    v19 = *(_DWORD*)(v10 + 108);
    if (v18 == v19 || (game_108cc80(v18, v19) & 1) != 0 ||
        (game_108cc80(v19, v18) & 1) != 0) {
      goto LABEL_63;
    }
  LABEL_47:
    v16 = *(_QWORD*)(a1 + 112);
    v6 = *(_QWORD*)(a1 + 120);
    LANES128(v61).n128_u8[2] = 1;
    LANES128(v61).n128_u16[0] = 257;
    if (v6 == 0) {
      SceneCharacterAnimator_1412540(v16, *(unsigned int*)(v16 + 108), &v61);
      goto LABEL_63;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    SceneCharacterAnimator_1412540(v16, *(unsigned int*)(v16 + 108), &v61);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      goto LABEL_49;
    }
    goto LABEL_63;
  }
LABEL_28:
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
  LABEL_49:
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
LABEL_63:
  v20 = LANES128(a2[4]).n128_u8[0];
  if ((v20 & 1) != 0) {
    v21 = LANES128(a2[4]).n128_u64[1];
  }
  else {
    v21 = v20 >> 1;
  }
  if (v21 != 0) {
    v22 = LANES128(a2[5]).n128_u8[8];
    v23 = (v22 & 1) != 0 ? LANES128(a2[6]).n128_u64[0] : v22 >> 1;
    if (v23 != 0) {
      v24 = GameData_212dce8;
      v25 = *(__int64**)(*(_QWORD*)GameData_212dce8 + 232LL);
      v26 = *(__int64**)(*(_QWORD*)GameData_212dce8 + 240LL);
      if (v25 != v26) {
        while (1) {
          v28 = *v25++;
          v27 = v28;
          v29 = *(_QWORD*)(v28 + 40);
          v30 = v28 + 25;
          v31 = LANES128(a2[4]).n128_u8[0];
          v32 = (*(_BYTE*)(v28 + 24) & 1) != 0 ? v29 : v30;
          v33 = LANES128(a2[5]).n128_u64[0];
          v34 = (v31 & 1) == 0;
          v35 = v31 >> 1;
          if (v34) {
            v33 = (unsigned __int64)LANES128(a2[4]).n128_u64 + 1;
          }
          else {
            v35 = LANES128(a2[4]).n128_u64[1];
          }
          LANES128(v61).n128_u64[0] = v33;
          LANES128(v61).n128_u64[1] = v35;
          v36 = game_HashString(v32);
          if (v36 == GameRoutine_7a88a0(&v61)) {
            break;
          }
          if (v25 == v26) {
            goto LABEL_109;
          }
        }
        v37 = (LANES128(a2[5]).n128_u8[8] & 1) != 0
                  ? (float32x4_t*)LANES128(a2[6]).n128_u64[1]
                  : (float32x4_t*)((char*)&LANES128(a2[5]).n128_f32[2] + 1);
        v38 =
            (float32x4_t*)SceneObjectHolder_1461dc0(*(_QWORD*)(v27 + 16), v37);
        if (v38 != nullptr) {
          v39 = v38;
          game_13f9460((void*)(&v60), v38 + 13);
          math_Mtx43_MakeRotation((void*)(&v61), &v39[14]);
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21a61b0) != 0) {
            v59 = *((_QWORD*)GameData_212c560 + 1);
            *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
            *((_QWORD*)&GameData_21a61a0 + 1) = v59;
            __cxa_guard_release(&GameData_21a61b0);
          }
          v40 = vaddq_f32(
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(vmulq_n_f32(v61, *(float*)&GameData_21a61a0),
                                 v62, *(float32x2_t*)&GameData_21a61a0, 1),
                  v63, COERCE_AS(float32x4_t, GameData_21a61a0), 2),
              v64);
          v41 = fabsf(LANES128(v40).n128_f32[0]);
          v42 = fabsf(LANES128(v40).n128_f32[2]);
          if (v41 > v42) {
            v43 = (float)(v42 / v41) * 0x1.6800000000000p+5f;
            if ((float)(v43 + v43) < 0.0f) {
              v44 = -(int)(float)(0.5f - (float)(v43 + v43));
            }
            else {
              v44 = (int)(float)((float)(v43 + v43) + 0.5f);
            }
            v45 = v43 * game_script_math_kDirCorrections[v44];
            if (LANES128(v40).n128_f32[0] < 0.0f) {
              v46 = 0x1.0e00000000000p+8f;
              if (LANES128(v40).n128_f32[2] > 0.0f) {
                goto LABEL_103;
              }
              goto LABEL_101;
            }
            v46 = 0x1.6800000000000p+6f;
            if (LANES128(v40).n128_f32[2] > 0.0f) {
            LABEL_101:
              v45 = v46 - v45;
              goto LABEL_104;
            }
          LABEL_103:
            v45 = v45 + v46;
            goto LABEL_104;
          }
          v45 = 0.0f;
          if (LANES128(v40).n128_f32[2] != 0.0f) {
            v47 = (float)(v41 / v42) * 0x1.6800000000000p+5f;
            if ((float)(v47 + v47) < 0.0f) {
              v48 = -(int)(float)(0.5f - (float)(v47 + v47));
            }
            else {
              v48 = (int)(float)((float)(v47 + v47) + 0.5f);
            }
            v45 = v47 * game_script_math_kDirCorrections[v48];
            if (LANES128(v40).n128_f32[2] <= 0.0f) {
              v46 = 0x1.6800000000000p+7f;
              if (LANES128(v40).n128_f32[0] >= 0.0f) {
                goto LABEL_101;
              }
              goto LABEL_103;
            }
            if (LANES128(v40).n128_f32[0] < 0.0f) {
              v46 = 0x1.6800000000000p+8f;
              goto LABEL_101;
            }
          }
        LABEL_104:
          v49 = *(float*)(*(_QWORD*)v24 + 128LL);
          v61 = v60;
          for (i = v45 - v49; i < -0x1.6800000000000p+7f;
               i = i + 0x1.6800000000000p+8f)
            ;
          for (; i >= 0x1.6800000000000p+7f; i = i + -0x1.6800000000000p+8f)
            ;
          LANES128(v62).n128_f32[0] = i;
          LANES128(v62).n128_u64[1] = 0;
          GameRoutine_1400780(a1, &v61, 0.0f);
        }
      }
    }
  }
LABEL_109:
  v51 = (float32x4_t*)game_facility_140c9a0();
  v52 = a2 + 1;
  LANES64(v53).n64_u64[0] =
      LANES64_OF(vmovn_s32(vceqq_f32(a2[1], *v51))).n64_u64[0];
  if ((LANES64(v53).n64_u8[0] & 1) == 0 || (LANES64(v53).n64_u8[2] & 1) == 0 ||
      (LANES64(v53).n64_u8[4] & 1) == 0 ||
      LANES128(a2[2]).n128_f32[0] != LANES128(v51[1]).n128_f32[0]) {
    return GameRoutine_1400780(a1, v52, 0.0f);
  }
  v54 = a2 + 1;
  v55 = (LANES128(a2[2]).n128_u8[8] & 1) != 0
            ? (float32x4_t*)LANES128(a2[3]).n128_u64[1]
            : (float32x4_t*)((char*)&LANES128(a2[2]).n128_f32[2] + 1);
  v56 = (LANES128(v51[1]).n128_u8[8] & 1) != 0
            ? (float32x4_t*)LANES128(v51[2]).n128_u64[1]
            : (float32x4_t*)((char*)&LANES128(v51[1]).n128_f32[2] + 1);
  v57 = game_HashString(v55);
  result = game_HashString(v56);
  v52 = v54;
  if (v57 != result) {
    return GameRoutine_1400780(a1, v52, 0.0f);
  }
  return result;
}

__int64 game_facility_SceneCharacterLookAt_ReserveResetOnRelocate(_QWORD* a1,
                                                                  float* a2,
                                                                  float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
    char gap40_[8];
    __int64 v17;
    __int16 v18;
    char gap58_[14];
    __int64 v19;
  } v15_;

  v3 = a1[22];
  v4 = a1[23];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v15_.v16 = v15_.v15;
    v15_.v18 = 0;
    v15_.v15[0] = GameData_2039960;
    v15_.v15[1] = v3;
    v15_.v17 = 0x800000;
    SceneCharacterLookAt_1416c80((__int64*)(v3 + 168), v15_.v15);
    if ((v15_.v18 & 1) != 0 && v15_.v19 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v15_.v19);
    }
    if (v15_.v16 == v15_.v15) {
      v9 = 32;
    }
    else {
      if (v15_.v16 == nullptr) {
        goto LABEL_20;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v15_.v16 + v9))((__int64)v15_.v16);
  LABEL_20:
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt1(v4);
    }
  LABEL_22:
    v12 = a1[24];
    v13 = a1[25];
    if (v13 != 0) {
      goto LABEL_23;
    }
    return game_facility_1418520(v12, a2, a3);
  }
  v15_.v18 = 0;
  v15_.v15[0] = GameData_2039960;
  v15_.v15[1] = v3;
  v15_.v16 = v15_.v15;
  v15_.v17 = 0x800000;
  SceneCharacterLookAt_1416c80((__int64*)(v3 + 168), v15_.v15);
  if ((v15_.v18 & 1) != 0 && v15_.v19 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v15_.v19);
  }
  if (v15_.v16 == v15_.v15) {
    v11 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_22;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v15_.v16 + v11))((__int64)v15_.v16);
  v12 = a1[24];
  v13 = a1[25];
  if (v13 == 0) {
    return game_facility_1418520(v12, a2, a3);
  }
LABEL_23:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                            memory_order_relaxed);
  result = game_facility_1418520(v12, a2, a3);
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    return std___1___shared_weak_count___release_weak_alt1(v13);
  }
  return result;
}

void SceneCharacterLookAt_Destructor(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  *(_QWORD*)a1 = game_facility_SceneCharacterLookAt_vtable;
  game_facility_1415980((_QWORD*)(a1 + 168));
  v2 = *(__int64**)(a1 + 176);
  v3 = *(__int64**)(a1 + 184);
  if (v3 == v2) {
    v4 = (_QWORD*)(a1 + 208);
    v15 = *(__int64**)(a1 + 176);
    goto LABEL_21;
  }
  v4 = (_QWORD*)(a1 + 208);
  v5 = *(_QWORD*)(a1 + 200);
  v6 = &v2[v5 / 0x33];
  v7 = *v6 + 80 * (v5 % 0x33);
  v8 = v2[(*(_QWORD*)(a1 + 208) + v5) / 0x33] +
       80 * ((*(_QWORD*)(a1 + 208) + v5) % 0x33);
  if (v7 == v8) {
    goto LABEL_19;
  }
  v9 = fw_memory_g_heap_manager_ptr;
  do {
    if ((*(_BYTE*)(v7 + 56) & 1) != 0) {
      v10 = *(_QWORD*)(v7 + 72);
      if (v10 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v9 + v11, v10);
      }
    }
    v12 = *(_QWORD**)(v7 + 32);
    if (v12 == (_QWORD*)v7) {
      v13 = 32;
    }
    else {
      if (v12 == nullptr) {
        goto LABEL_16;
      }
      v13 = 40;
    }
    (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
  LABEL_16:
    v7 += 80LL;
    if (v7 - *v6 == 4080) {
      v14 = v6[1];
      ++v6;
      v7 = v14;
    }
  } while (v7 != v8);
  v2 = *(__int64**)(a1 + 176);
  v3 = *(__int64**)(a1 + 184);
LABEL_19:
  v15 = v3;
LABEL_21:
  *v4 = 0;
  v16 = v15 - v2;
  if (v16 >= 3) {
    v17 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v2 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v18, *v2);
        v2 = *(__int64**)(a1 + 176);
        v3 = *(__int64**)(a1 + 184);
        v15 = v3;
      }
      *(_QWORD*)(a1 + 176) = ++v2;
      v16 = v15 - v2;
    } while (v16 > 2);
  }
  if (v16 == 1) {
    v19 = 25;
  LABEL_33:
    *(_QWORD*)(a1 + 200) = v19;
  }
  else if (v16 == 2) {
    v19 = 51;
    goto LABEL_33;
  }
  if (v2 != v3) {
    v20 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v2 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v20 + v21, *v2);
      }
      ++v2;
    } while (v2 != v3);
    v22 = *(_QWORD*)(a1 + 184);
    v23 = *(_QWORD*)(a1 + 176) - v22;
    if (v23 != 0) {
      *(_QWORD*)(a1 + 184) = v22 + ((v23 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v24 = *(_QWORD*)(a1 + 168);
  if (v24 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
  }
  if ((*(_BYTE*)(a1 + 144) & 1) != 0) {
    v26 = *(_QWORD*)(a1 + 160);
    if (v26 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v26);
    }
  }
}

__int64 SceneCharacterLookAt_Unknown2(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;

  *(_DWORD*)(a1 + 120) = 0x800000;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0x80000000800000LL;
  result = SceneCharacter_13ff750(*(_QWORD*)(a1 + 8));
  if ((result & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 8);
    v5 = 0;
    v6 = &v5;
    result = GameRoutine_14176e0(&v6, &v6, *(_QWORD*)(v3 + 8));
    v4 = v5;
    if (v5 != 0) {
      *(_QWORD*)((char*)((_UNKNOWN*)0x9CLL) + v5) = 0x80000000800000LL;
      *(_DWORD*)((char*)((_UNKNOWN*)0xA4LL) + v4) = 1065353216;
    }
  }
  *(_BYTE*)(a1 + 136) = 1;
  return result;
}

__attribute__((swiftcall)) void SceneCharacterLookAt_14164a0(PSEUDO_X8 x8_,
                                                             __int64 a1)
{
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  _QWORD* result;
  float32x4_t v6;
  float32x4_t v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float i;
  double v12;
  double v13;
  double v14;
  float32x4_t v15;
  unsigned int v16;
  unsigned __int64 v17;
  unsigned int v18;
  float32x4_t v19;
  int8x16_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  int8x16_t v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  int8x16_t v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  float32x4_t v41;
  int8x16_t v42;

  if ((SceneCharacter_13ff750(*(_QWORD*)(a1 + 8)) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 8);
    LANES128(v41).n128_u64[0] = 0;
    LANES128(v42).n128_u64[0] = (unsigned __int64)&v41;
    result = (_QWORD*)GameRoutine_14176e0(&v42, &v42, *(_QWORD*)(v4 + 8));
    if (LANES128(v41).n128_u64[0] != 0) {
      v6 = *(float32x4_t*)((char*)((_UNKNOWN*)0x14CLL) +
                           LANES128(v41).n128_u64[0] + 4);
      v7 = *(float32x4_t*)((char*)((_UNKNOWN*)0x170LL) +
                           LANES128(v41).n128_u64[0]);
    LABEL_18:
      *a2 = vaddq_f32(v6, v7);
      {
        result;
        return;
      }
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a61b0) != 0) {
    v40 = *((_QWORD*)GameData_212c560 + 1);
    *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
    *((_QWORD*)&GameData_21a61a0 + 1) = v40;
    __cxa_guard_release(&GameData_21a61b0);
  }
  *a2 = COERCE_AS(float32x4_t, GameData_21a61a0);
  v8 = *(_QWORD*)(a1 + 8);
  v9 = *(_QWORD*)(v8 + 192);
  v10 = *(_QWORD*)(v8 + 200);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  for (i = *(float*)(v9 + 32); i < -0x1.6800000000000p+7;
       i = i + 0x1.6800000000000p+8)
    ;
  for (; i >= 0x1.6800000000000p+7; i = i + -0x1.6800000000000p+8)
    ;
  v12 = (float)(i * 0x1.1df46a0000000p-6) * 0.5;
  v13 = cos(v12);
  v14 = sin(v12);
  LANES128(v15).n128_u64[0] = LANES128(*(a2)).n128_u64[0];
  *(float*)&v16 = v13 + v14 * 0.0;
  *(float*)&v17 = v14 * -0.0 + v13 * 0.0;
  *(float*)&v18 = v14 + v13 * 0.0;
  LANES128(v19).n128_u64[0] = __PAIR64__(v18, v17);
  LANES128(v19).n128_u64[1] = __PAIR64__(v16, v17);
  v20 = vmulq_f32(v19, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*a2, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v19).n128_u64[0];
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*a2, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v15).n128_u64[1] = LANES128(v22).n128_u64[0];
  *(int32x2_t*)&LANES128(v23).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v20).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v21).n128_i8[8] =
      vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v24 = vmlaq_f32(vmulq_f32(v19, v20), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v15, v21));
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*a2, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v22).n128_u64[1] = LANES128(v15).n128_u64[0];
  LANES128(v15).n128_u64[1] = LANES128(*(a2)).n128_u64[0];
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v25).n128_i8[8] =
      vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v26 = vmlsq_f32(vmlaq_f32(v24, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v15, v23)),
                  v25, v22);
  LANES128(v25).n128_u64[0] = __PAIR64__(v18, v17);
  HIDWORD(v17) = v16;
  LANES128(v27).n128_u64[0] = __PAIR64__(v18, v17);
  LANES128(v22).n128_u64[0] = __PAIR64__(v18, v17);
  LANES128(v27).n128_u64[1] = v17;
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v28).n128_u64[1] = LANES128(v28).n128_u64[0];
  LANES128(v22).n128_u64[1] = LANES128(v29).n128_u64[0];
  *(int8x8_t*)&LANES128(v30).n128_i8[8] =
      vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v29).n128_u64[1] = LANES128(v27).n128_u64[0];
  LANES128(v27).n128_u64[1] = LANES128(v25).n128_u64[0];
  *(int32x2_t*)&LANES128(v31).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v26).n128_u64[0]), 1);
  v32 = vmlaq_f32(
      vmlaq_f32(vmulq_f32(v28, v26), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v22, v30)),
      COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v27, v31));
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v27).n128_i8[8] =
      vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v33 = vmlsq_f32(v32, v27, v29);
  LANES128(*(a2)).n128_u64[0] = LANES128(v33).n128_u64[0];
  v34 = *a2;
  LANES128(v34).n128_u64[1] = LANES128(v33).n128_u32[2];
  *a2 = v34;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  v35 = *(_QWORD*)(a1 + 8);
  v37 = *(_QWORD*)(v35 + 192);
  v36 = *(_QWORD*)(v35 + 200);
  if (v36 == 0) {
    v39 = *(_QWORD*)(v37 + 24);
    LANES128(v42).n128_u64[0] = *(_QWORD*)(v37 + 16);
    LANES128(v42).n128_u64[1] = v39;
    game_13f9200((void*)(&v41), &v42);
    result =
        (SceneCharacterMovement_1417860((void*)(&v42), v37), (void*)(&v42));
    v6 = vaddq_f32(v41, v42);
    v7 = *a2;
    goto LABEL_18;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                            memory_order_relaxed);
  v38 = *(_QWORD*)(v37 + 24);
  LANES128(v42).n128_u64[0] = *(_QWORD*)(v37 + 16);
  LANES128(v42).n128_u64[1] = v38;
  game_13f9200((void*)(&v41), &v42);
  result = (SceneCharacterMovement_1417860((void*)(&v42), v37), (void*)(&v42));
  *a2 = vaddq_f32(vaddq_f32(v41, v42), *a2);
  if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
    {
      (_QWORD*)std___1___shared_weak_count___release_weak(v36);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 SceneCharacterLookAt_1416860(__int64 a1, const char** a2)
{
  const char* v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v22;
    unsigned __int64 v23;
    char* v24;
  } v22_;
  __int64 v25[2];

  v3 = *a2;
  v4 = *(_QWORD*)GameData_212dce8;
  v5 = strlen_alt1(*a2);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v8, 16, 0);
    v22_.v23 = v6;
    v22_.v24 = v7;
    v22_.v22 = v8 | 1;
    goto LABEL_9;
  }
  LOBYTE(v22_.v22) = 2 * v5;
  v7 = (char*)&v22_.v22 + 1;
  if (v5 != 0) {
  LABEL_9:
    memmove_alt1((__int64)v7, (__int64)v3, v6);
  }
  v7[v6] = 0;
  v9 = *(__int64**)(v4 + 160);
  v10 = *(__int64**)(v4 + 168);
  if (v9 == v10) {
    v11 = 0;
    if ((v22_.v22 & 1) == 0) {
      goto LABEL_27;
    }
    goto LABEL_23;
  }
  while (1) {
    v12 = *v9++;
    v11 = v12;
    v13 = *(_QWORD*)(v12 + 40);
    v14 = v12 + 25;
    v15 = (*(_BYTE*)(v12 + 24) & 1) != 0 ? v13 : v14;
    v16 = v22_.v24;
    v17 = (unsigned __int64)(unsigned __int8)v22_.v22 >> 1;
    if ((v22_.v22 & 1) != 0) {
      v17 = v22_.v23;
    }
    else {
      v16 = (char*)&v22_.v22 + 1;
    }
    v25[0] = (__int64)v16;
    v25[1] = v17;
    v18 = game_HashString_alt1(v15);
    if (v18 == GameHr_7a88a0(v25)) {
      break;
    }
    if (v9 == v10) {
      v11 = 0;
      break;
    }
  }
  if ((v22_.v22 & 1) != 0) {
  LABEL_23:
    if (v22_.v24 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (__int64)v22_.v24);
    }
  }
LABEL_27:
  if (v11 == *(_QWORD*)(a1 + 8) || v11 == 0) {
    return 0;
  }
  else {
    return v11;
  }
}

__int64 SceneCharacterLookAt_1416a00(__int64 a1, __int64 a2, float a3, float a4)
{

#pragma clang fp contract(off)
  __int64 v5;
  float v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
    char gap40_[8];
    float v14;
    float v15;
    __int16 v16;
    char gap58_[14];
    __int64 v17;
  } v12_;

  v5 = *(_QWORD*)(a2 + 32);
  if (v5 != 0) {
    if (v5 == a2) {
      v12_.v13 = v12_.v12;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v5 + 24LL))(v5, v12_.v12);
    }
    else {
      v12_.v13 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    }
  }
  else {
    v12_.v13 = nullptr;
  }
  v8 = 0x1.0000000000000p+0f;
  v12_.v16 = 0;
  if (a3 <= 0x1.0000000000000p+0f) {
    v8 = a3;
  }
  if (a3 < 0x1.0000000000000p-126f) {
    v8 = 0x1.0000000000000p-126f;
  }
  v12_.v14 = v8;
  v12_.v15 = a4;
  SceneCharacterLookAt_1416c80((__int64*)(a1 + 168), v12_.v12);
  if ((v12_.v16 & 1) != 0 && v12_.v17 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v12_.v17);
  }
  result = (__int64)v12_.v13;
  if (v12_.v13 == v12_.v12) {
    v11 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (*(__int64 (**)(__int64))(*v12_.v13 + v11))((__int64)v12_.v13);
}

const char* game_facility_SceneCharacterLookAt_ReserveSetStareCharacter(
    __int64 a1, unsigned __int8* a2, float a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  const char* v4;
  bool v8;
  const char* v9;
  const char* result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    const char* v15[4];
    const char** v16;
    char gap40_[8];
    int v17;
    float v18;
  } v15_;
  struct {
    __int64 v19[2];
    __int64 v20;
  } v19_;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *a2;
  v4 = *((const char**)a2 + 2);
  v8 = (v3 & 1) == 0;
  v9 = (const char*)(v3 >> 1);
  if (v8) {
    v4 = (const char*)(a2 + 1);
  }
  if (!v8) {
    v9 = *((const char**)a2 + 1);
  }
  v15_.v15[0] = v4;
  v15_.v15[1] = v9;
  result = (const char*)SceneCharacterLookAt_1416860_alt1(a1, v15_.v15),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (result != nullptr) {
    v15_.v16 = v15_.v15;
    v15_.v18 = a3;
    v15_.v15[0] = (const char*)GameData_20399e0;
    v15_.v15[1] = result;
    v15_.v17 = 1065353216;
    if ((*a2 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v19_.v19, *((_QWORD*)a2 + 2),
                                         *((_QWORD*)a2 + 1)),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v11 = *((_QWORD*)a2 + 1);
      v19_.v19[0] = *(_QWORD*)a2;
      v19_.v19[1] = v11;
      v19_.v20 = *((_QWORD*)a2 + 2);
    }
    SceneCharacterLookAt_1416c80((__int64*)(a1 + 168), v15_.v15),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v19_.v19[0] & 1) != 0) {
      v12 = v19_.v20;
      if (v19_.v20 != 0) {
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v19_.v20),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    result = (const char*)v15_.v16;
    if (v15_.v16 == v15_.v15) {
      v14 = 32;
    }
    else {
      if (v15_.v16 == nullptr) {
        return result;
      }
      v14 = 40;
    }
    return (const char*)(*(__int64 (**)(const char**, __int64)) &
                         (*v15_.v16)[v14])(v15_.v16, v12);
  }
  return result;
}

__int64 SceneCharacterLookAt_1416c80(__int64* a1, _QWORD* a2)
{
  char* v2;
  char* v3;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  char* v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  char* v26;
  char* v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  signed __int64 v41;
  bool v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  signed __int64 v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  signed __int64 v56;
  char* v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  _QWORD* v62;
  __int64 result;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  _QWORD* v72;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;

  v2 = (char*)a1[1];
  v3 = (char*)a1[2];
  v6 = v3 - v2;
  v7 = (v3 - v2) >> 3;
  if (v3 == v2) {
    v8 = 0;
  }
  else {
    v8 = 17 * (v7 + ((v3 - v2) >> 2)) - 1;
  }
  v9 = a1[4];
  if (v8 == a1[5] + v9) {
    v10 = v9 >= 0x33;
    v11 = v9 - 51;
    if (v10) {
      a1[4] = v11;
      v12 = *(_QWORD*)v2;
      a1[1] = (__int64)(v2 + 8);
      v78 = v12;
    }
    else {
      v13 = a1[3];
      v14 = v13 - *a1;
      if (v6 >= v14) {
        v23 = v14 >> 2;
        if (v13 == *a1) {
          v24 = 1;
        }
        else {
          v24 = v23;
        }
        if (v24 >> 61 == 0) {
          v25 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
          v26 = (char*)(v25 + v6);
          v27 = (char*)(v25 + 8 * v24);
          v28 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4080, 16, 0);
          if (v6 == 8 * v24) {
            if (v3 == v2) {
              v33 = v28;
              v29 = (__int64*)fw_memory_g_heap_manager_ptr;
              v26 = (char*)fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
              v27 = v26 + 8;
              v34 = 128;
              if (*(_QWORD*)(*v29 + 200) == 0) {
                v34 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v29 + v34, v25);
              v28 = v33;
              v2 = (char*)a1[1];
              v3 = (char*)a1[2];
              v25 = (__int64)v26;
            }
            else {
              v29 = (__int64*)fw_memory_g_heap_manager_ptr;
              v26 -= 8 * ((v7 + 1 + ((unsigned __int64)(v7 + 1) >> 63)) >> 1);
            }
          }
          else {
            v29 = &fw_memory_g_heap_manager;
          }
          *(_QWORD*)v26 = v28;
          v35 = v26 + 8;
          if (v3 != v2) {
            while (1) {
              if (v26 == (char*)v25) {
                if (v35 >= v27) {
                  if (v27 == v26) {
                    v44 = 1;
                  }
                  else {
                    v44 = (v27 - v26) >> 2;
                  }
                  if (v44 >> 61 != 0) {
                    goto LABEL_91;
                  }
                  v45 =
                      fw_memory_HeapManager_Allocate_alt1(*v29, 8 * v44, 16, 0);
                  v46 = v45;
                  v39 = (char*)(v45 + ((2 * v44 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                  v47 = v35 - v26;
                  v42 = v35 == v26;
                  v35 = v39;
                  if (!v42) {
                    v35 = &v39[v47];
                    v48 =
                        (_QWORD*)(v45 + ((2 * v44 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                    do {
                      v49 = *(_QWORD*)v26;
                      v26 += 8;
                      v47 -= 8LL;
                      *v48++ = v49;
                    } while (v47 != 0);
                  }
                  v27 = (char*)(v45 + 8 * v44);
                  v50 = 128;
                  if (*(_QWORD*)(*v29 + 200) == 0) {
                    v50 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v29 + v50, v25);
                  v25 = v46;
                }
                else {
                  v41 = v35 - v26;
                  v43 = v35 - v26;
                  v42 = v35 == v26;
                  v35 +=
                      8 *
                      ((((v27 - v35) >> 3) + 1 +
                        ((unsigned __int64)(((v27 - v35) >> 3) + 1) >> 63)) >>
                       1);
                  v39 = &v35[-v41];
                  if (!v42) {
                    memmove_alt1((__int64)&v35[-v41], (__int64)v26, v43);
                  }
                }
              }
              else {
                v39 = v26;
              }
              v40 = *((_QWORD*)v3 - 1);
              v3 -= 8;
              *((_QWORD*)v39 - 1) = v40;
              v36 = v39 - 8;
              v26 = v36;
              if (v3 == (char*)a1[1]) {
                goto LABEL_31;
              }
            }
          }
          v36 = v26;
        LABEL_31:
          v37 = *a1;
          *a1 = v25;
          a1[1] = (__int64)v36;
          a1[2] = (__int64)v35;
          a1[3] = (__int64)v27;
          if (v37 != 0) {
            v38 = 128;
            if (*(_QWORD*)(*v29 + 200) == 0) {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v29 + v38, v37);
          }
          goto LABEL_67;
        }
        goto LABEL_91;
      }
      v15 = (__int64*)fw_memory_g_heap_manager_ptr;
      v16 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4080, 16, 0);
      if ((char*)v13 != v3) {
        v17 = (char*)a1[2];
        if (v17 != (char*)a1[3]) {
        LABEL_66:
          *(_QWORD*)v17 = v16;
          a1[2] += 8;
          goto LABEL_67;
        }
        v19 = *a1;
        v18 = (char*)a1[1];
        if ((unsigned __int64)v18 > *a1) {
          v20 = v17 - v18;
          v21 = ((__int64)&v18[-*a1] >> 3) + 1;
          v22 = &v18[-8 * (v21 / 2)];
          if (v20 != 0) {
            memmove_alt1((__int64)&v18[-8 * (v21 / 2)], a1[1], v20);
            v18 = (char*)a1[1];
          }
          v17 = &v22[v20];
          a1[1] = (__int64)&v18[8 * (v21 / -2)];
          a1[2] = (__int64)v17;
          goto LABEL_66;
        }
        if (v17 == (char*)v19) {
          v54 = 1;
        }
        else {
          v54 = (__int64)&v17[-v19] >> 2;
        }
        if (v54 >> 61 == 0) {
          v55 = fw_memory_HeapManager_Allocate_alt1(*v15, 8 * v54, 16, 0);
          v56 = v17 - v18;
          v42 = v17 == v18;
          v57 = (char*)(v55 + 8 * (v54 >> 2));
          v17 = v57;
          if (!v42) {
            v17 = &v57[v56];
            v58 = (_QWORD*)(v55 + 8 * (v54 >> 2));
            do {
              v59 = *(_QWORD*)v18;
              v18 += 8;
              v56 -= 8LL;
              *v58++ = v59;
            } while (v56 != 0);
          }
          *a1 = v55;
          a1[1] = (__int64)v57;
          a1[2] = (__int64)v17;
          a1[3] = v55 + 8 * v54;
          if (v19 != 0) {
            v60 = 128;
            if (*(_QWORD*)(*v15 + 200) == 0) {
              v60 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v15 + v60, v19);
            v17 = (char*)a1[2];
          }
          goto LABEL_66;
        }
      LABEL_91:
        GameRoutine_60a210_alt1();
      }
      v31 = *a1;
      v30 = (__int64*)a1[1];
      if (v30 == (__int64*)*a1) {
        v52 = a1[2];
        v51 = a1[3];
        if (v52 >= v51) {
          v66 = v51 - (_QWORD)v30;
          v42 = v66 == 0;
          v67 = v66 >> 2;
          if (v42) {
            v68 = 1;
          }
          else {
            v68 = v67;
          }
          if (v68 >> 61 != 0) {
            goto LABEL_91;
          }
          v69 = fw_memory_HeapManager_Allocate_alt1(*v15, 8 * v68, 16, 0);
          v70 = v52 - (_QWORD)v30;
          v32 = v69 + ((2 * v68 + 6) & 0xFFFFFFFFFFFFFFF8LL);
          v71 = v32;
          if ((__int64*)v52 != v30) {
            v71 = v32 + v70;
            v72 = (_QWORD*)(v69 + ((2 * v68 + 6) & 0xFFFFFFFFFFFFFFF8LL));
            v73 = v30;
            do {
              v74 = *v73++;
              v70 -= 8LL;
              *v72++ = v74;
            } while (v70 != 0);
          }
          *a1 = v69;
          a1[1] = v32;
          a1[2] = v71;
          a1[3] = v69 + 8 * v68;
          if (v30 != nullptr) {
            v75 = 128;
            if (*(_QWORD*)(*v15 + 200) == 0) {
              v75 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v15 + v75, v31);
            v32 = a1[1];
          }
        }
        else {
          v53 = (((__int64)(v51 - v52) >> 3) + 1) / 2;
          v32 = (unsigned __int64)&v30[v53];
          if ((__int64*)v52 != v30) {
            memmove_alt1((__int64)&v30[v53], a1[1], v52 - (_QWORD)v30);
            v52 = a1[2];
          }
          a1[1] = v32;
          a1[2] = v52 + 8 * v53;
        }
      }
      else {
        v32 = a1[1];
      }
      *(_QWORD*)(v32 - 8) = v16;
      v76 = a1[1];
      a1[1] = v76 - 8;
      v77 = *(_QWORD*)(v76 - 8);
      a1[1] = v76;
      v78 = v77;
    }
    GameRoutine_14172a0_alt1(a1, &v78);
  LABEL_67:
    v2 = (char*)a1[1];
    v3 = (char*)a1[2];
  }
  if (v3 == v2) {
    v62 = nullptr;
    result = a2[4];
    if (result != 0) {
    LABEL_70:
      if ((_QWORD*)result == a2) {
        v62[4] = v62;
        result = (*(__int64 (**)(_QWORD, _QWORD*))(*(_QWORD*)a2[4] + 24LL))(
            a2[4], v62);
      }
      else {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        v62[4] = result;
      }
      goto LABEL_75;
    }
  }
  else {
    v61 = a1[5] + a1[4];
    v62 = (_QWORD*)(*(_QWORD*)&v2[8 * (v61 / 0x33)] + 80 * (v61 % 0x33));
    result = a2[4];
    if (result != 0) {
      goto LABEL_70;
    }
  }
  v62[4] = 0;
LABEL_75:
  v62[6] = a2[6];
  if ((a2[7] & 1) != 0) {
    result = fw_text_String_CopyTerminated_alt1(v62 + 7, a2[9], a2[8]);
  }
  else {
    v64 = a2[7];
    v65 = a2[9];
    v62[8] = a2[8];
    v62[9] = v65;
    v62[7] = v64;
  }
  ++a1[5];
  return result;
}

__attribute__((swiftcall)) void

game_facility_SceneCharacterLookAt_ReserveSetStareCharacter_lambda0_Invoke(
    PSEUDO_X8 x8_, __int64 a1)
{
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  float32x4_t result;
  unsigned __int64 v8;
  float32x4_t v9;
  int8x16_t v10;

  v3 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(v3 + 192);
  v4 = *(_QWORD*)(v3 + 200);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v6 = *(_QWORD*)(v5 + 24);
    LANES128(v10).n128_u64[0] = *(_QWORD*)(v5 + 16);
    LANES128(v10).n128_u64[1] = v6;
    game_13f9200((void*)(&v9), &v10);
    SceneCharacterMovement_1417860((void*)(&v10), v5);
    result = vaddq_f32(v9, v10);
    *a2 = result;
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    v8 = *(_QWORD*)(v5 + 24);
    LANES128(v10).n128_u64[0] = *(_QWORD*)(v5 + 16);
    LANES128(v10).n128_u64[1] = v8;
    game_13f9200((void*)(&v9), &v10);
    SceneCharacterMovement_1417860((void*)(&v10), v5);
    result = vaddq_f32(v9, v10);
    *a2 = result;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
