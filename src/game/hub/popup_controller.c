#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d7e7a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_PopupController_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 PopupController_Destructor(__int64 a1);
__int64 EffectLine_fb6440(void);
__int64 GameRoutine_d6d160(__int64, int, double, double);
__int64 GameRoutine_fb71a0(_QWORD);
__int64 Popup2D_f7f870(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN GameData_1a8df73;
extern _UNKNOWN GameData_1ab0bb0;
extern _UNKNOWN GameData_1ab0bce;
extern _UNKNOWN GameData_1ad3616;
extern _UNKNOWN GameData_1ad3634;
extern __int64 GameData_21d96b8;
extern __int64 GameData_21f3cb8;
extern __int64 GameData_21f3d10;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
__int64
PopupController_d7bf00_alt1(__int64 result) __asm__("PopupController_d7bf00");
bool PopupController_d7c8b0(__int64 a1, __int64 a2);
__int64 PopupController_d7c9e0(_QWORD* a1);
_DWORD* PopupController_d7ca90(_DWORD* result, int a2);
_QWORD* PopupController_d7e0e0(_QWORD* result, __int64* a2);
__int64
PopupController_d7e7a0_alt1(__int64 result) __asm__("PopupController_d7e7a0");
__attribute__((swiftcall)) void
game_zview_d163f0(PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
bool game_hub_d5ae40(__int64, float32x4_t*, __int64);
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83460;
extern __int128 GameData_1a835f0;
extern __int128 GameData_1a83800;
extern __int64* GameData_212ebd0[3];
extern __int64 GameData_212dc68;
extern __int64 GameData_21f3cc0;
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 PopupController_d7c000(__int64 result);
__int64 PopupController_d7d880(_QWORD* a1, __int64 a2);
__int64
game_hub_PopupController_TryScreenRaycast_lambda0_Invoke(__int64 a1,
                                                         float32x4_t* a2);
__int64 GameRoutine_d7fde0(__int64*, __int64);
__int64 GameRoutine_d7ff80(__int64, __int64*);
unsigned __int64* GameRoutine_d80140(unsigned __int64* result, __int64);
unsigned __int64* PopupController_d7f820(unsigned __int64* result, __int64 a2,
                                         __int64* a3, __int64 a4, __int64 a5,
                                         __int64* a6, __int64 a7);
__int64 game_hub_d6d160(__int64, int);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
long double EffectLine_fb6440_alt1(_QWORD*) __asm__("EffectLine_fb6440");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void PopupController_d7bf00(__int64 a1);
void PopupController_d7e7a0(__int64 a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
extern __int128 GameData_1a83090;
extern __int64 (*GameData_1fdd9f0[])();
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21ec7c0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void __attribute__((noreturn)) GameRoutine_8123d0();
float32x4_t* game_hub_PopupController_TryScreenRaycast(float32x4_t* result);
__int64 PopupController_d7cc30(float32x4_t* a1);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void game_db1400(PSEUDO_X8, __int64, __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_d9cfa0(__int64, __int64, __int64, __int64, unsigned int);
__int64 Registration_a4da40(__int64, __int64);
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fdd920[14])();
extern __int64 (*GameData_1fdd958[7])();
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_22127a8;
int __cxa_guard_acquire(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_919020();
void __cxa_guard_release(__int64);
__int64 PopupController_d7c300(float32x4_t* a1);
void PopupController_d7e220(__int64 a1);

__int64 PopupController_Destructor(__int64 a1)
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
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 280);
  *(_QWORD*)a1 = game_hub_PopupController_vtable;
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 288);
    if (v1 == v3) {
      goto LABEL_5;
    }
    do {
      v3 -= 80;
      GameRoutine_d7e7a0(v3);
    } while (v3 != v1);
    v4 = *(_QWORD*)(a1 + 280);
    *(_QWORD*)(a1 + 288) = v1;
    v1 = v4;
    if (v4 != 0) {
    LABEL_5:
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v1);
    }
  }
  if ((*(_BYTE*)(a1 + 256) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 272);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  if ((*(_BYTE*)(a1 + 232) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 248);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                    v8);
    }
  }
  if (*(_BYTE*)(a1 + 192) == 1 && (*(_BYTE*)(a1 + 168) & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 184);
    if (v10 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v10);
    }
  }
  if (*(_BYTE*)(a1 + 160) == 1 && (*(_BYTE*)(a1 + 136) & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 152);
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v12);
    }
  }
  v14 = *(_QWORD*)(a1 + 112);
  if (v14 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    result = *(_QWORD*)(a1 + 24);
    if (result == 0) {
      return result;
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
  std___1___shared_weak_count___release_weak(v14);
  result = *(_QWORD*)(a1 + 24);
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

void PopupController_d7bf00(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v7;
  int v8;
  int v9;

  if (*(_BYTE*)(a1 + 304) != 0) {
    v1 = *(_QWORD*)(a1 + 24);
    *(_BYTE*)(a1 + 304) = 0;
    if (v1 != 0) {
      v3 = *(_QWORD*)(a1 + 16);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                                memory_order_relaxed);
      v4 = std___1___shared_weak_count_lock_alt1(v1);
      std___1___shared_weak_count___release_weak_alt1(v1);
      if (v4 != 0) {
        if (v3 != 0) {
          if (*(_QWORD*)(v3 + 1384) != *(_QWORD*)(v3 + 1376)) {
            goto LABEL_6;
          }
          if ((*(_BYTE*)(v3 + 1760) & 0x10) != 0) {
            v9 = 1;
          }
          else {
            v8 = *(_DWORD*)(a1 + 208) | *(_DWORD*)(a1 + 120);
            if ((v8 & 1) != 0 || (v8 & 0xC0) == 0) {
            LABEL_6:
              v7 = *(_QWORD**)(v3 + 1192);
              if (v7 != nullptr) {
                EffectLine_fb6440_alt1(v7);
              }
              goto LABEL_14;
            }
            v9 = 0;
          }
          game_hub_d6d160(v3 + 16, v9);
        }
      LABEL_14:
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak_alt1(v4);
        }
      }
    }
  }
}

__int64 PopupController_d7c000(__int64 result)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v2;
  float32x4_t** v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v19;
  int v20;
  unsigned int v21;
  float v22;
  float v23;
  unsigned __int64 v24[2];

  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  v1 = *(unsigned __int8*)(result + 305);
  v2 = result;
  if (v1 == 1) {
    goto LABEL_46;
  }
  result = *(_QWORD*)(result + 24);
  v3 = (float32x4_t**)GameData_212dc68;
  if (result == 0 || (result = std___1___shared_weak_count_lock(result)) == 0) {
  LABEL_13:
    if (LANES128((*v3)[3]).n128_u8[0] != 1 || (*(_BYTE*)(v2 + 64) & 1) == 0) {
      goto LABEL_45;
    }
    v13 = *(_QWORD*)(v2 + 24);
    if (v13 != 0) {
      v14 = *(_QWORD*)(v2 + 16);
      v15 = *(_QWORD*)(v2 + 24);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                memory_order_relaxed);
      v16 = std___1___shared_weak_count_lock(v15),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
      result = std___1___shared_weak_count___release_weak(v13),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v16 != 0) {
        if (v14 != 0 && *(_DWORD*)(v14 + 1136) == 2 &&
            LANES128((*v3)[3]).n128_u8[0] == 1 &&
            (*(_BYTE*)(v14 + 1760) & 0x40) != 0) {
          result = game_hub_d5ae40(v14, *v3 + 1, 0),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
          v19 = result;
        }
        else {
          v19 = 1;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          result = std___1___shared_weak_count___release_weak(v16),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        if ((v19 & 1) == 0) {
          goto LABEL_45;
        }
      }
    }
    if (*(_BYTE*)(v2 + 218) == 1 &&
            (((v20 = *(_DWORD*)(v2 + 208) | *(_DWORD*)(v2 + 120)) & 1) != 0 ||
             (v20 & 0x406) == 0) &&
            ((v20 & 0x18) == 0 || (v20 & 1) != 0) ||
        *(_DWORD*)(GameData_21f3cc0 + 88) != *(_DWORD*)(v2 + 212) ||
        (*(_BYTE*)(v2 + 216) & 1) == 0) {
    LABEL_45:
      v1 = 3;
    LABEL_46:
      *(_DWORD*)(v2 + 96) = v1;
      return result;
    }
    v24[1] = (unsigned __int64)&GameData_1ab0bb0;
    result = game_HashString_alt1((__int64)&GameData_1ab0bb0),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
    v24[0] = result;
    if (game_GameModeData_instance_ != 0 &&
        (result = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48), v24)) != 0) {
      v21 = *(_DWORD*)(result + 32);
      if ((v21 & 0x80000000) != 0) {
      LABEL_41:
        result = (__int64)PopupController_d7ca90((_DWORD*)v2, 2),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v23 >= 0x0.0p+0f) {
          if (*(_DWORD*)(v2 + 96) == 2) {
            v23 = v23 + 0x1.0000000000000p-1f;
          }
          if (*(float*)(v2 + 100) <= v23) {
            v1 = 2;
            goto LABEL_46;
          }
        }
        goto LABEL_45;
      }
      v22 = (float)v21;
    }
    else {
      v22 = 0x0.0p+0f;
    }
    if (*(_DWORD*)(v2 + 96) == 1) {
      v22 = v22 + 0x1.0000000000000p-1f;
    }
    if (*(float*)(v2 + 100) <= v22) {
      v1 = 1;
      goto LABEL_46;
    }
    goto LABEL_41;
  }
  v4 = *(_QWORD*)(v2 + 16);
  if (v4 == 0) {
    goto LABEL_9;
  }
  v5 = LANES128((*v3)[6]).n128_u64[0];
  v6 = *(_QWORD*)(v5 + 24);
  if (v6 == 0) {
    goto LABEL_9;
  }
  v7 = *(_QWORD*)(v5 + 16);
  v8 = true;
  v9 = result;
  v10 = *(_QWORD*)(v5 + 24);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  v11 = std___1___shared_weak_count_lock(v10),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  std___1___shared_weak_count___release_weak(v6),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v11 == 0) {
    result = v9;
    goto LABEL_10;
  }
  result = v9;
  if (v4 == v7) {
    *(_DWORD*)(v2 + 96) = 0;
    v8 = false;
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_10;
    }
  }
  else if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                            0xFFFFFFFFFFFFFFFFLL) != 0) {
  LABEL_9:
    v8 = true;
    goto LABEL_10;
  }
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  std___1___shared_weak_count___release_weak(v11),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  result = v9;
  v8 = v4 != v7;
LABEL_10:
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v12 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
    result = std___1___shared_weak_count___release_weak(v12),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if (v8) {
    goto LABEL_13;
  }
  return result;
}

__int64 PopupController_d7c300(float32x4_t* a1)
{
  __int64 v2;
  int v5;
  __int64 v6;
  float32x4_t v7;
  __int128 v8;
  __int128 v9;
  __int64 v10;
  float v11;
  float32x4_t v12;
  __int64 v13;
  float v14;
  __int64 v15;
  float v16;
  float32x4_t v17;
  float v18;
  float v19;
  __int128 v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  bool v27;
  bool v28;
  float v29;
  bool v30;
  __int64 result;
  __int64 v32;
  __int128 v33;
  __int128 v34;
  float32x4_t v35;
  long double v36;

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v2 = GameData_212dbb8[0];
    if (*(_QWORD*)GameData_212dbb8[0] != 0 &&
        *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) != 0 &&
        (signed __int32)*(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 232) <=
            0 &&
        (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0 &&
        *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 139) == 0 &&
        *(int*)(*(_QWORD*)GameData_212dbb8[0] + 152LL) <= 0) {
      v5 = LANES128(a1[4]).n128_u8[0];
      LANES128(a1[5]).n128_u8[8] = 0;
      if (v5 == 1) {
        v6 = *(_QWORD*)GameData_212dc38[0];
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
          v32 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v32;
          __cxa_guard_release((__int64)&GameData_21a6130),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(__n128, "v3", "=w"));
        }
        if ((LANES128(a1[4]).n128_u8[0] & 1) == 0) {
          GameRoutine_8123d0(),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(__n128, "v3", "=w"));
        }
        v36 = ((long double (*)(__int64)) *
               (_QWORD*)(*(_QWORD*)(v6 + 16) + 16LL))(v6 + 16),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v34 = v8;
        v35 = v7;
        v33 = v9;
        (*(void (**)(__int64))(*(_QWORD*)(v6 + 16) + 24LL))(v6 + 16),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v17 = a1[3];
        v18 = COERCE_FLOAT(LANES128(a1[3]).n128_u64[1]);
        v19 =
            *((float*)&v33 + 2) +
            (float)((float)(vmuls_lane_f32(LANES128(v35).n128_f32[2],
                                           COERCE_AS(float32x2_t,
                                                     LANES128(v17).n128_u64[0]),
                                           1) +
                            (float)(LANES128(v17).n128_f32[0] *
                                    *((float*)&v36 + 2))) +
                    (float)(v18 * *((float*)&v34 + 2)));
        v20 = GameData_1a83090;
        if (v19 < 0x0.0p+0f) {
          v21 = *(float*)&v33 +
                (float)((float)(vmuls_lane_f32(
                                    LANES128(v35).n128_f32[0],
                                    COERCE_AS(float32x2_t,
                                              LANES128(v17).n128_u64[0]),
                                    1) +
                                (float)(*(float*)&v36 *
                                        LANES128(v17).n128_f32[0])) +
                        (float)(*(float*)&v34 * LANES128(v17).n128_f32[2]));
          v22 = *((float*)&v33 + 1) +
                (float)((float)(LANES128_OF(vmulq_f32(v35, v17)).n128_f32[1] +
                                (float)(LANES128(v17).n128_f32[0] *
                                        *((float*)&v36 + 1))) +
                        (float)(v18 * *((float*)&v34 + 1)));
          v23 = v16 + (float)((float)(vmuls_lane_f32(v22, v12, 3) +
                                      (float)(v21 * v11)) +
                              (float)(v19 * v14));
          if (v23 != 0x0.0p+0f) {
            v24 = 0x1.0000000000000p+0f / v23;
            v25 = *(float*)&v15 +
                  (float)((float)((float)(PSEUDO_UNFUSED(
                                      v22 * LANES128(v12).n128_f32[0])) +
                                  (float)(*(float*)&v10 * v21)) +
                          (float)(*(float*)&v13 * v19));
            DWORD2(v20) = 0;
            v26 =
                (float)((float)-(
                            float)(v24 *
                                   (float)(*((float*)&v15 + 1) +
                                           (float)((float)(vmuls_lane_f32(
                                                               v22,
                                                               COERCE_AS(
                                                                   float32x2_t,
                                                                   LANES128(v12)
                                                                       .n128_u64
                                                                           [0]),
                                                               1) +
                                                           (float)(v21 *
                                                                   *((float*)&v10 +
                                                                     1))) +
                                                   (float)(v19 *
                                                           *((float*)&v13 +
                                                             1))))) *
                        0x1.0e00000000000p+9f) +
                0x1.0e00000000000p+9f;
            *(float*)&v20 =
                (float)((float)(v25 * v24) * 0x1.e000000000000p+9f) +
                0x1.e000000000000p+9f;
            *((float*)&v20 + 1) = v26;
          }
        }
        if (*((float*)&v20 + 2) <= 0x0.0p+0f) {
          LANES128(a1[5]).n128_u64[0] = v20;
          LANES128(a1[5]).n128_u8[8] = 1;
        }
      }
    }
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v27 = *(_QWORD*)v2 == 0 ||
            *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) == 0;
      v28 = !v27 && (signed __int32)*(
                        _DWORD*)(game_hub_ProcHubSeqView_instance_ + 232) <= 0;
      if (v28 &&
          (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0 &&
          *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 139) == 0 &&
          *(int*)(*(_QWORD*)v2 + 152LL) <= 0) {
        if (LANES128(a1[5]).n128_u8[8] == 1) {
          if ((PopupController_d7cc30(a1) & 1) != 0) {
            if ((LANES128(a1[14]).n128_u8[1] & 1) != 0) {
              v29 =
                  LANES128(a1[13]).n128_f32[3] +
                  (float)((float)(*(float*)(*(_QWORD*)
                                                game_script_hub_g_frame_counter_ptr
                                                    [0] +
                                            104LL) *
                                  0x1.0aef000000000p+4f) /
                          0x1.f400000000000p+9f);
              LANES128(a1[13]).n128_f32[3] = v29;
              v30 = v29 >= 0x1.99999a0000000p-2f;
            }
            else {
              LANES128(a1[13]).n128_u32[3] = 1053609165;
              v30 = true;
            }
            LANES128(a1[14]).n128_u8[1] = 1;
            goto LABEL_42;
          }
          LANES128(a1[14]).n128_u8[1] = 1;
        }
        else {
          LANES128(a1[14]).n128_u8[1] = 0;
        }
        v30 = false;
        LANES128(a1[13]).n128_u32[3] = 0;
      LABEL_42:
        LANES128(a1[14]).n128_u8[0] = v30;
      }
    }
  }
  game_hub_PopupController_TryScreenRaycast(a1),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
  result = LANES128(a1[6]).n128_i64[1];
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  return result;
}

float32x4_t* game_hub_PopupController_TryScreenRaycast(float32x4_t* result)
{

#pragma clang fp contract(off)
  bool v1;
  bool v2;
  int v3;
  float v4;
  float v5;
  float32x4_t* v6;
  __int64 v7;
  float v8;
  float v9;
  long double v10;
  unsigned __int8 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float32x4_t v17;
  int8x16_t v18;
  _QWORD* v19;
  float v20;
  _QWORD v21[6];
  __int64 v22;
  char v23;
  long double v24;

  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v1 = GameData_21f3d10 == 0 ||
         *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) == 0;
    v2 = !v1 && (signed __int32)*(_DWORD*)(game_hub_ProcHubSeqView_instance_ +
                                           232) <= 0;
    if (v2 && (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0 &&
        *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 139) == 0 &&
        *(int*)(GameData_21f3d10 + 152) <= 0) {
      if (LANES128(result[5]).n128_u8[8] == 1) {
        if (LANES128(result[6]).n128_u32[0] == 0 ||
            ((v3 = LANES128(result[13]).n128_u32[0] |
                   LANES128(result[7]).n128_u32[2]) &
             1) == 0 &&
                (v3 & 0x406) != 0) {
          v4 = 0x1.47ae140000000p-7f;
          goto LABEL_18;
        }
        if (LANES128(*(result)).n128_u8[8] == 1 &&
            (LANES128(result[14]).n128_u8[0] & 1) == 0) {
          v6 = result;
          v7 = *(_QWORD*)GameData_212dc38[0];
          PopupController_d7ca90(result, 2),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          v9 = v8;
          v10 = ((long double (*)(__int64)) *
                 (_QWORD*)(*(_QWORD*)(v7 + 16) + 40LL))(v7 + 16),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          v11 = LANES128(v6[4]).n128_u8[0];
          v24 = v10;
          if ((v11 & 1) == 0) {
            GameRoutine_8123d0(),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          }
          result = v6;
          v12 = *(_QWORD*)(GameData_21f3d10 + 72);
          if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) == 0) {
            v12 = *(_BYTE*)(GameData_21f3d10 + 64) >> 1;
          }
          if (v12 == 10) {
            v13 = GameData_21f3d10 + 65;
            if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) != 0) {
              v13 = *(_QWORD*)(GameData_21f3d10 + 80);
            }
            v14 = *(_QWORD*)v13;
            v15 = *(unsigned __int16*)(v13 + 8);
            if (v14 == *(_QWORD*)"Hub_100_A1" &&
                v15 == *(unsigned __int16*)"A1") {
              goto LABEL_35;
            }
          }
          v17 = vsubq_f32(*(float32x4_t*)&v10, v6[3]);
          v18 = vmulq_f32(v17, v17);
          LANES128(v18).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                  .n64_u64[0];
          if (LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                  .n64_f32[0] <= (float)((float)(v9 + 0x1.8000000000000p+1f) *
                                         (float)(v9 + 0x1.8000000000000p+1f))) {
            v23 = 0;
            v22 = 0x100000001LL;
            v19 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                fw_memory_g_heap_manager, 40, 16, 0),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
            v21[4] = v19;
            *v19 = GameData_1fdd9f0;
            v19[1] = v6 + 3;
            v19[2] = &v24;
            v19[3] = &v22;
            v19[4] = &v23;
            PopupController_d7d880(v6, (__int64)v21),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            (*(void (**)(_QWORD*))(*v19 + 40LL))(v19),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            result = v6;
            if (v23 == 1) {
            LABEL_35:
              v4 = 0x1.99999a0000000p-3f;
            LABEL_18:
              v5 = v4;
              if (LANES128(result[5]).n128_f32[3] >= v4) {
                v5 = LANES128(result[5]).n128_f32[3];
              }
              goto LABEL_42;
            }
          }
        }
      }
      v5 = LANES128(result[5]).n128_f32[3];
      v20 = fabsf(
          (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                            104LL) *
                  0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f);
      if (v5 <= 0x0.0p+0f) {
        if (v5 >= 0x0.0p+0f) {
          goto LABEL_42;
        }
        v5 = v5 + v20;
        if (v5 <= 0x0.0p+0f) {
          goto LABEL_42;
        }
      }
      else {
        v5 = v5 - v20;
        if (v5 >= 0x0.0p+0f) {
          goto LABEL_42;
        }
      }
      v5 = 0x0.0p+0f;
    LABEL_42:
      LANES128(result[5]).n128_f32[3] = v5;
    }
  }
  return result;
}

bool PopupController_d7c8b0(__int64 a1, __int64 a2)
{
  _BOOL8 result;
  int v4;
  __int64 v5;
  __int64 v6;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;

  if ((*(_BYTE*)(a1 + 305) & 1) != 0) {
    return true;
  }
  v4 = *(unsigned __int8*)(a1 + 8);
  result = false;
  if (v4 != 0 && (*(_BYTE*)(a1 + 64) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 104);
    if (v5 == 0 || (unsigned int)Popup2D_f7f870(v5, a2) != 3) {
      v6 = *(_QWORD*)(a1 + 32);
      if (v6 != 0 &&
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v6 + 24) + 8LL) + 145LL) != 1) {
        return false;
      }
    }
    if (*(int*)(GameData_21f3cb8 + 32) > 0 ||
        *(_DWORD*)(GameData_21f3cb8 + 16) > 0) {
      return false;
    }
    if (game_ProcGameSkipView_instance_ != 0 &&
        (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
                1 <=
            2) {
      v8 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v9 = (v8 & 8) != 0 ? 2 : 3;
      if ((v9 & v8) == 0) {
        return false;
      }
    }
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v10 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
      if (v10 != 0 && *(_QWORD*)(v10 + 40) != 0) {
        return false;
      }
    }
    v11 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
    if (v11 != 0 && *(_QWORD*)(v11 + 40) != 0) {
      return false;
    }
    return *(_BYTE*)(GameData_21f3d10 + 10) == 1 &&
           *(_DWORD*)(GameData_21d96b8 + 24) < 1;
  }
  return result;
}

__int64 PopupController_d7c9e0(_QWORD* a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;

  v1 = a1[4];
  if (v1 != 0) {
    return GameRoutine_fb71a0(*(_QWORD*)(v1 + 1232));
  }
  v3 = a1[3];
  if (v3 == 0) {
    return 1;
  }
  v4 = a1[2];
  v5 = a1[3];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v6 = std___1___shared_weak_count_lock(v5);
  result = std___1___shared_weak_count___release_weak(v3);
  if (v6 == 0) {
    return 1;
  }
  if (v4 != 0) {
    result = GameRoutine_fb71a0(*(_QWORD*)(v4 + 1688));
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v7 = result;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    result = v7;
  }
  if (v4 == 0) {
    return 1;
  }
  return result;
}

_DWORD* PopupController_d7ca90(_DWORD* result, int a2)
{
  int v2;
  int v3;
  __int64 v4;
  struct {
    __int64 v5;
    void* v6;
  } v5_;

  if (a2 == 2) {
    v2 = result[52] | result[30];
    v3 = result[57];
    if (v3 == 1) {
      v5_.v6 = &GameData_1ab0bce;
      v4 = game_HashString_alt1((__int64)&GameData_1ab0bce);
    }
    else {
      if (v3 != 2) {
        goto LABEL_11;
      }
      v5_.v6 = &GameData_1a8df73;
      v4 = game_HashString_alt1((__int64)&GameData_1a8df73);
    }
    v5_.v5 = v4;
    if (game_GameModeData_instance_ != 0) {
      game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v5_.v5);
    }
  LABEL_11:
    if ((v2 & 0x801) == 0x800) {
      v5_.v6 = &GameData_1ad3616;
      v5_.v5 = game_HashString_alt1((__int64)&GameData_1ad3616);
      if (game_GameModeData_instance_ != 0) {
        game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v5_.v5);
      }
    }
    v5_.v6 = &GameData_1ad3634;
    result = (_DWORD*)game_HashString_alt1((__int64)&GameData_1ad3634);
    v5_.v5 = (__int64)result;
    if (game_GameModeData_instance_ != 0) {
      return (_DWORD*)game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v5_.v5);
    }
    return result;
  }
  if (a2 == 1) {
    v5_.v6 = &GameData_1ab0bb0;
    result = (_DWORD*)game_HashString_alt1((__int64)&GameData_1ab0bb0);
    v5_.v5 = (__int64)result;
    if (game_GameModeData_instance_ != 0) {
      return (_DWORD*)game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v5_.v5);
    }
  }
  return result;
}

__int64 PopupController_d7cc30(float32x4_t* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float v5;
  float v6;
  float32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 result;
  __int64 v17;
  __int64 v18;
  float32x4_t v19;
  float32x4_t v20;
  float v21;
  float32x4_t v22;
  __int128 v23;
  __int128 v24;
  __int64 v25;
  float v26;
  float32x4_t v27;
  __int64 v28;
  float v29;
  __int64 v30;
  float v31;
  float v32;
  __int128 v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float32x4_t v40;
  __int64 v41;
  float v42;
  long double v43;
  __int128 v44;
  __int128 v45;
  float32x4_t v46;
  __int64 v47;
  float v48;
  float32x4_t v49;
  __int64 v50;
  float v51;
  __int64 v52;
  float v53;
  float v54;
  __int128 v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  __int64 v62;
  unsigned __int64 v63;
  float v64;
  float v65;
  long double v66;
  __int128 v67;
  __int128 v68;
  float32x4_t v69;
  __int64 v70;
  float v71;
  float32x4_t v72;
  __int64 v73;
  float v74;
  __int64 v75;
  float v76;
  float v77;
  __int128 v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  __int64 v85;
  unsigned __int64 v86;
  float v87;
  float v88;
  long double v89;
  __int128 v90;
  __int128 v91;
  float32x4_t v92;
  __int64 v93;
  float v94;
  float32x4_t v95;
  __int64 v96;
  float v97;
  __int64 v98;
  float v99;
  float v100;
  __int128 v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  __int64 v108;
  unsigned __int64 v109;
  float v110;
  float v111;
  long double v112;
  __int128 v113;
  __int128 v114;
  float32x4_t v115;
  __int64 v116;
  float v117;
  float32x4_t v118;
  __int64 v119;
  float v120;
  __int64 v121;
  float v122;
  float v123;
  __int128 v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  __int64 v131;
  unsigned __int64 v132;
  float v133;
  float v134;
  long double v135;
  __int128 v136;
  __int128 v137;
  float32x4_t v138;
  __int64 v139;
  float v140;
  float32x4_t v141;
  __int64 v142;
  float v143;
  __int64 v144;
  float v145;
  float v146;
  __int128 v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  float v153;
  __int64 v154;
  unsigned __int64 v155;
  float v156;
  float v157;
  long double v158;
  __int128 v159;
  __int128 v160;
  float32x4_t v161;
  __int64 v162;
  float v163;
  float32x4_t v164;
  __int64 v165;
  float v166;
  __int64 v167;
  float v168;
  float v169;
  __int128 v170;
  float v171;
  float v172;
  float v173;
  float v174;
  float v175;
  float v176;
  __int64 v177;
  unsigned __int64 v178;
  float v179;
  float v180;
  long double v181;
  __int128 v182;
  __int128 v183;
  float32x4_t v184;
  __int64 v185;
  float v186;
  float32x4_t v187;
  __int64 v188;
  float v189;
  __int64 v190;
  float v191;
  float v192;
  __int128 v193;
  float v194;
  float v195;
  float v196;
  float v197;
  float v198;
  float v199;
  unsigned __int64 v200;
  float32x2_t v201;
  float v202;
  float v203;
  float32x2_t v204;
  float32x2_t v205;
  int8x8_t v206;
  int8x8_t v207;
  unsigned int v208;
  __int128 v209;
  __int128 v210;
  __int128 v211;
  __int128 v212;
  __int128 v213;
  __int128 v214;
  __int128 v215;
  __int128 v216;
  __int128 v217;
  __int128 v218;
  __int128 v219;
  __int128 v220;
  __int128 v221;
  __int128 v222;
  float32x4_t v223;
  float32x4_t v224;
  float32x4_t v225;
  float32x4_t v226;
  float32x4_t v227;
  __int128 v228;
  __int128 v229;
  float32x4_t v230;
  long double v231;
  long double v232;
  long double v233;
  long double v234;
  long double v235;
  float32x4_t v236;
  float32x4_t v237;
  float32x4_t v238;
  long double v239;
  long double v240;
  long double v241;
  float32x4_t v242;
  float32x4_t v243;
  __int64 v244;
  float32x4_t v245;
  unsigned __int64 v246;

  v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
  v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v2 = *(_QWORD*)GameData_212dc38[0];
  PopupController_d7ca90(a1, 2),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v4 = *(_QWORD*)(v2 + 16);
  v3 = v2 + 16;
  v6 = v5;
  (*(void (**)(__int64))(v4 + 40))(v3),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if ((LANES128(a1[4]).n128_u8[0] & 1) == 0) {
    GameRoutine_8123d0(),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  v8 = vsubq_f32(v7, a1[3]);
  v9 = vmulq_f32(v8, v8);
  LANES128(v9).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_f32[0] > (float)((float)(v6 + 0x1.e000000000000p+4f) *
                                (float)(v6 + 0x1.e000000000000p+4f))) {
    return 0;
  }
  v10 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v10 == 0) {
    return 0;
  }
  v11 = *(_QWORD*)(GameData_21ec7c0 + 72);
  v12 = *(_QWORD*)(GameData_21ec7c0 + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                            memory_order_relaxed);
  v13 = std___1___shared_weak_count_lock_alt1(v12),
  v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
  v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
  std___1___shared_weak_count___release_weak_alt1(v10),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if (v13 == 0 || v11 == 0) {
    result = 0;
    if (v13 == 0) {
      return result;
    }
  }
  else {
    v17 = *(_QWORD*)(v11 + 24);
    v18 = *(_QWORD*)(*(_QWORD*)(v17 + 8) + 232LL);
    if (v18 == 0) {
      goto LABEL_117;
    }
    *(float*)&v14 = *(float*)(v17 + 532) * 0x1.cccccc0000000p-2f;
    LANES128(v19).n128_u32[1] = 0;
    LANES128(v19).n128_u32[3] = 0;
    LANES128(v19).n128_f32[0] = -*(float*)&v14;
    LANES128(v19).n128_f32[2] = -*(float*)&v14;
    v245 = *(float32x4_t*)(*(_QWORD*)(v18 + 8) + 304LL);
    LANES128(v20).n128_f32[0] = *(float*)&v14;
    LANES128(v20).n128_f32[1] = *(float*)(v17 + 548) * 0x1.cccccc0000000p-1f;
    v238 = vaddq_f32(v245, v19);
    v21 = LANES128(v238).n128_f32[2];
    LANES128(v20).n128_u64[1] = v14;
    v243 = v20;
    v241 = ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v3 + 16LL))(v3),
    v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
    v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v222 = v23;
    v230 = v22;
    v214 = v24;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v32 = *((float*)&v214 + 2) +
          (float)((float)(vmuls_lane_f32(LANES128(v238).n128_f32[1], v230, 2) +
                          (float)(LANES128(v238).n128_f32[0] *
                                  *((float*)&v241 + 2))) +
                  (float)(LANES128(v238).n128_f32[2] * *((float*)&v222 + 2)));
    v33 = GameData_1a83090;
    if (v32 < 0x0.0p+0f) {
      v34 =
          *(float*)&v214 +
          (float)((float)(vmuls_lane_f32(LANES128(v230).n128_f32[0],
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v238).n128_u64[0]),
                                         1) +
                          (float)(*(float*)&v241 *
                                  LANES128(v238).n128_f32[0])) +
                  (float)(*(float*)&v222 * LANES128(v238).n128_f32[2]));
      v35 = *((float*)&v214 + 1) +
            (float)((float)(LANES128_OF(vmulq_f32(v238, v230)).n128_f32[1] +
                            (float)(LANES128(v238).n128_f32[0] *
                                    *((float*)&v241 + 1))) +
                    (float)(LANES128(v238).n128_f32[2] * *((float*)&v222 + 1)));
      v36 = v31 +
            (float)((float)(vmuls_lane_f32(v35, v27, 3) + (float)(v34 * v26)) +
                    (float)(v32 * v29));
      if (v36 != 0x0.0p+0f) {
        v37 = 0x1.0000000000000p+0f / v36;
        v38 = *(float*)&v30 +
              (float)((float)((float)(PSEUDO_UNFUSED(
                                  v35 * LANES128(v27).n128_f32[0])) +
                              (float)(*(float*)&v25 * v34)) +
                      (float)(*(float*)&v28 * v32));
        DWORD2(v33) = 0;
        v39 =
            (float)((float)-(
                        float)(v37 *
                               (float)(*((float*)&v30 + 1) +
                                       (float)((float)(vmuls_lane_f32(
                                                           v35,
                                                           COERCE_AS(
                                                               float32x2_t,
                                                               LANES128(v27)
                                                                   .n128_u64
                                                                       [0]),
                                                           1) +
                                                       (float)(v34 *
                                                               *((float*)&v25 +
                                                                 1))) +
                                               (float)(v32 *
                                                       *((float*)&v28 + 1))))) *
                    0x1.0e00000000000p+9f) +
            0x1.0e00000000000p+9f;
        *(float*)&v33 = (float)((float)(v38 * v37) * 0x1.e000000000000p+9f) +
                        0x1.e000000000000p+9f;
        *((float*)&v33 + 1) = v39;
      }
    }
    v40 = vaddq_f32(v245, v243);
    if (*((float*)&v33 + 2) == 0x0.0p+0f) {
      *(float*)&v41 = fminf(*(float*)&v33, 0x1.e000000000000p+10f);
      HIDWORD(v41) = COERCE_UNSIGNED_INT(
          fminf(*((float*)&v33 + 1), 0x1.0e00000000000p+10f));
      v244 = v41;
      *(float*)&v41 = fmaxf(*(float*)&v33, 0x0.0p+0f);
      HIDWORD(v41) = COERCE_UNSIGNED_INT(fmaxf(*((float*)&v33 + 1), 0x0.0p+0f));
      v246 = v41;
    }
    else {
      v244 = 0x4487000044F00000LL;
      v246 = 0;
    }
    v42 = LANES128(v40).n128_f32[2];
    v242 = v40;
    v43 = ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v3 + 16LL))(v3),
    v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
    v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v209 = v45;
    v215 = v44;
    v223 = v46;
    v231 = v43;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v54 = *((float*)&v209 + 2) +
          (float)((float)(vmuls_lane_f32(LANES128(v238).n128_f32[1], v223, 2) +
                          (float)(LANES128(v238).n128_f32[0] *
                                  *((float*)&v231 + 2))) +
                  (float)(v42 * *((float*)&v215 + 2)));
    v55 = GameData_1a83090;
    if (v54 < 0x0.0p+0f) {
      v56 =
          *(float*)&v209 +
          (float)((float)((float)(PSEUDO_UNFUSED(LANES128(v238).n128_f32[1] *
                                                 LANES128(v223).n128_f32[0])) +
                          (float)(*(float*)&v231 *
                                  LANES128(v238).n128_f32[0])) +
                  (float)(*(float*)&v215 * LANES128(v242).n128_f32[2]));
      v57 = *((float*)&v209 + 1) +
            (float)((float)(LANES128_OF(vmulq_f32(v238, v223)).n128_f32[1] +
                            (float)(LANES128(v238).n128_f32[0] *
                                    *((float*)&v231 + 1))) +
                    (float)(v42 * *((float*)&v215 + 1)));
      v58 = v53 +
            (float)((float)(vmuls_lane_f32(v57, v49, 3) + (float)(v56 * v48)) +
                    (float)(v54 * v51));
      if (v58 != 0x0.0p+0f) {
        v59 = 0x1.0000000000000p+0f / v58;
        v60 = *(float*)&v52 +
              (float)((float)((float)(PSEUDO_UNFUSED(
                                  v57 * LANES128(v49).n128_f32[0])) +
                              (float)(*(float*)&v47 * v56)) +
                      (float)(*(float*)&v50 * v54));
        DWORD2(v55) = 0;
        v61 =
            (float)((float)-(
                        float)(v59 *
                               (float)(*((float*)&v52 + 1) +
                                       (float)((float)(vmuls_lane_f32(
                                                           v57,
                                                           COERCE_AS(
                                                               float32x2_t,
                                                               LANES128(v49)
                                                                   .n128_u64
                                                                       [0]),
                                                           1) +
                                                       (float)(v56 *
                                                               *((float*)&v47 +
                                                                 1))) +
                                               (float)(v54 *
                                                       *((float*)&v50 + 1))))) *
                    0x1.0e00000000000p+9f) +
            0x1.0e00000000000p+9f;
        *(float*)&v55 = (float)((float)(v60 * v59) * 0x1.e000000000000p+9f) +
                        0x1.e000000000000p+9f;
        *((float*)&v55 + 1) = v61;
      }
    }
    if (*((float*)&v55 + 2) == 0x0.0p+0f) {
      LODWORD(v62) = v244;
      LODWORD(v63) = v246;
      v64 = *((float*)&v244 + 1);
      if (*(float*)&v55 < *(float*)&v244) {
        *(float*)&v62 = *(float*)&v55;
      }
      if (*((float*)&v55 + 1) < *((float*)&v244 + 1)) {
        v64 = *((float*)&v55 + 1);
      }
      *((float*)&v62 + 1) = v64;
      v65 = *((float*)&v246 + 1);
      if (*(float*)&v246 < *(float*)&v55) {
        *(float*)&v63 = *(float*)&v55;
      }
      v244 = v62;
      if (*((float*)&v246 + 1) < *((float*)&v55 + 1)) {
        v65 = *((float*)&v55 + 1);
      }
      *((float*)&v63 + 1) = v65;
      v246 = v63;
    }
    v66 = ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v3 + 16LL))(v3),
    v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
    v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v210 = v68;
    v216 = v67;
    v224 = v69;
    v232 = v66;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v77 = *((float*)&v210 + 2) +
          (float)((float)(vmuls_lane_f32(LANES128(v238).n128_f32[1], v224, 2) +
                          (float)(LANES128(v242).n128_f32[0] *
                                  *((float*)&v232 + 2))) +
                  (float)(LANES128(v238).n128_f32[2] * *((float*)&v216 + 2)));
    v78 = GameData_1a83090;
    if (v77 < 0x0.0p+0f) {
      v79 =
          *(float*)&v210 +
          (float)((float)((float)(PSEUDO_UNFUSED(LANES128(v238).n128_f32[1] *
                                                 LANES128(v224).n128_f32[0])) +
                          (float)(*(float*)&v232 *
                                  LANES128(v242).n128_f32[0])) +
                  (float)(*(float*)&v216 * LANES128(v238).n128_f32[2]));
      v80 = *((float*)&v210 + 1) +
            (float)((float)(LANES128_OF(vmulq_f32(v238, v224)).n128_f32[1] +
                            (float)(LANES128(v242).n128_f32[0] *
                                    *((float*)&v232 + 1))) +
                    (float)(LANES128(v238).n128_f32[2] * *((float*)&v216 + 1)));
      v81 = v76 +
            (float)((float)(vmuls_lane_f32(v80, v72, 3) + (float)(v79 * v71)) +
                    (float)(v77 * v74));
      if (v81 != 0x0.0p+0f) {
        v82 = 0x1.0000000000000p+0f / v81;
        v83 = *(float*)&v75 +
              (float)((float)((float)(PSEUDO_UNFUSED(
                                  v80 * LANES128(v72).n128_f32[0])) +
                              (float)(*(float*)&v70 * v79)) +
                      (float)(*(float*)&v73 * v77));
        DWORD2(v78) = 0;
        v84 =
            (float)((float)-(
                        float)(v82 *
                               (float)(*((float*)&v75 + 1) +
                                       (float)((float)(vmuls_lane_f32(
                                                           v80,
                                                           COERCE_AS(
                                                               float32x2_t,
                                                               LANES128(v72)
                                                                   .n128_u64
                                                                       [0]),
                                                           1) +
                                                       (float)(v79 *
                                                               *((float*)&v70 +
                                                                 1))) +
                                               (float)(v77 *
                                                       *((float*)&v73 + 1))))) *
                    0x1.0e00000000000p+9f) +
            0x1.0e00000000000p+9f;
        *(float*)&v78 = (float)((float)(v83 * v82) * 0x1.e000000000000p+9f) +
                        0x1.e000000000000p+9f;
        *((float*)&v78 + 1) = v84;
      }
    }
    if (*((float*)&v78 + 2) == 0x0.0p+0f) {
      LODWORD(v85) = v244;
      LODWORD(v86) = v246;
      v87 = *((float*)&v244 + 1);
      if (*(float*)&v78 < *(float*)&v244) {
        *(float*)&v85 = *(float*)&v78;
      }
      if (*((float*)&v78 + 1) < *((float*)&v244 + 1)) {
        v87 = *((float*)&v78 + 1);
      }
      *((float*)&v85 + 1) = v87;
      v88 = *((float*)&v246 + 1);
      if (*(float*)&v246 < *(float*)&v78) {
        *(float*)&v86 = *(float*)&v78;
      }
      v244 = v85;
      if (*((float*)&v246 + 1) < *((float*)&v78 + 1)) {
        v88 = *((float*)&v78 + 1);
      }
      *((float*)&v86 + 1) = v88;
      v246 = v86;
    }
    v89 = ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v3 + 16LL))(v3),
    v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
    v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v211 = v91;
    v217 = v90;
    v225 = v92;
    v233 = v89;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v100 = *((float*)&v211 + 2) +
           (float)((float)(vmuls_lane_f32(LANES128(v238).n128_f32[1], v225, 2) +
                           (float)(LANES128(v242).n128_f32[0] *
                                   *((float*)&v233 + 2))) +
                   (float)(v42 * *((float*)&v217 + 2)));
    v101 = GameData_1a83090;
    if (v100 < 0x0.0p+0f) {
      v102 =
          *(float*)&v211 +
          (float)((float)((float)(PSEUDO_UNFUSED(LANES128(v238).n128_f32[1] *
                                                 LANES128(v225).n128_f32[0])) +
                          (float)(*(float*)&v233 *
                                  LANES128(v242).n128_f32[0])) +
                  (float)(*(float*)&v217 * v42));
      v103 = *((float*)&v211 + 1) +
             (float)((float)(LANES128_OF(vmulq_f32(v238, v225)).n128_f32[1] +
                             (float)(LANES128(v242).n128_f32[0] *
                                     *((float*)&v233 + 1))) +
                     (float)(v42 * *((float*)&v217 + 1)));
      v104 =
          v99 +
          (float)((float)(vmuls_lane_f32(v103, v95, 3) + (float)(v102 * v94)) +
                  (float)(v100 * v97));
      if (v104 != 0x0.0p+0f) {
        v105 = 0x1.0000000000000p+0f / v104;
        v106 = *(float*)&v98 +
               (float)((float)((float)(PSEUDO_UNFUSED(
                                   v103 * LANES128(v95).n128_f32[0])) +
                               (float)(*(float*)&v93 * v102)) +
                       (float)(*(float*)&v96 * v100));
        DWORD2(v101) = 0;
        v107 =
            (float)((float)-(
                        float)(v105 *
                               (float)(*((float*)&v98 + 1) +
                                       (float)((float)(vmuls_lane_f32(
                                                           v103,
                                                           COERCE_AS(
                                                               float32x2_t,
                                                               LANES128(v95)
                                                                   .n128_u64
                                                                       [0]),
                                                           1) +
                                                       (float)(v102 *
                                                               *((float*)&v93 +
                                                                 1))) +
                                               (float)(v100 *
                                                       *((float*)&v96 + 1))))) *
                    0x1.0e00000000000p+9f) +
            0x1.0e00000000000p+9f;
        *(float*)&v101 = (float)((float)(v106 * v105) * 0x1.e000000000000p+9f) +
                         0x1.e000000000000p+9f;
        *((float*)&v101 + 1) = v107;
      }
    }
    if (*((float*)&v101 + 2) == 0x0.0p+0f) {
      LODWORD(v108) = v244;
      LODWORD(v109) = v246;
      v110 = *((float*)&v244 + 1);
      if (*(float*)&v101 < *(float*)&v244) {
        *(float*)&v108 = *(float*)&v101;
      }
      if (*((float*)&v101 + 1) < *((float*)&v244 + 1)) {
        v110 = *((float*)&v101 + 1);
      }
      *((float*)&v108 + 1) = v110;
      v111 = *((float*)&v246 + 1);
      if (*(float*)&v246 < *(float*)&v101) {
        *(float*)&v109 = *(float*)&v101;
      }
      v244 = v108;
      if (*((float*)&v246 + 1) < *((float*)&v101 + 1)) {
        v111 = *((float*)&v101 + 1);
      }
      *((float*)&v109 + 1) = v111;
      v246 = v109;
    }
    v112 = ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v3 + 16LL))(v3),
    v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
    v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v212 = v114;
    v218 = v113;
    v226 = v115;
    v234 = v112;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v123 = *((float*)&v212 + 2) +
           (float)((float)(vmuls_lane_f32(LANES128(v242).n128_f32[1], v226, 2) +
                           (float)(LANES128(v238).n128_f32[0] *
                                   *((float*)&v234 + 2))) +
                   (float)(LANES128(v238).n128_f32[2] * *((float*)&v218 + 2)));
    v124 = GameData_1a83090;
    if (v123 < 0x0.0p+0f) {
      v125 =
          *(float*)&v212 +
          (float)((float)(vmuls_lane_f32(LANES128(v226).n128_f32[0],
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v242).n128_u64[0]),
                                         1) +
                          (float)(*(float*)&v234 *
                                  LANES128(v238).n128_f32[0])) +
                  (float)(*(float*)&v218 * LANES128(v238).n128_f32[2]));
      v126 =
          *((float*)&v212 + 1) +
          (float)((float)(LANES128_OF(vmulq_f32(v242, v226)).n128_f32[1] +
                          (float)(LANES128(v238).n128_f32[0] *
                                  *((float*)&v234 + 1))) +
                  (float)(LANES128(v238).n128_f32[2] * *((float*)&v218 + 1)));
      v127 = v122 + (float)((float)(vmuls_lane_f32(v126, v118, 3) +
                                    (float)(v125 * v117)) +
                            (float)(v123 * v120));
      if (v127 != 0x0.0p+0f) {
        v128 = 0x1.0000000000000p+0f / v127;
        v129 = *(float*)&v121 +
               (float)((float)((float)(PSEUDO_UNFUSED(
                                   v126 * LANES128(v118).n128_f32[0])) +
                               (float)(*(float*)&v116 * v125)) +
                       (float)(*(float*)&v119 * v123));
        DWORD2(v124) = 0;
        v130 =
            (float)((float)-(
                        float)(v128 *
                               (float)(*((float*)&v121 + 1) +
                                       (float)((float)(vmuls_lane_f32(
                                                           v126,
                                                           COERCE_AS(
                                                               float32x2_t,
                                                               LANES128(v118)
                                                                   .n128_u64
                                                                       [0]),
                                                           1) +
                                                       (float)(v125 *
                                                               *((float*)&v116 +
                                                                 1))) +
                                               (float)(v123 * *((float*)&v119 +
                                                                1))))) *
                    0x1.0e00000000000p+9f) +
            0x1.0e00000000000p+9f;
        *(float*)&v124 = (float)((float)(v129 * v128) * 0x1.e000000000000p+9f) +
                         0x1.e000000000000p+9f;
        *((float*)&v124 + 1) = v130;
      }
    }
    if (*((float*)&v124 + 2) == 0x0.0p+0f) {
      LODWORD(v131) = v244;
      LODWORD(v132) = v246;
      v133 = *((float*)&v244 + 1);
      if (*(float*)&v124 < *(float*)&v244) {
        *(float*)&v131 = *(float*)&v124;
      }
      if (*((float*)&v124 + 1) < *((float*)&v244 + 1)) {
        v133 = *((float*)&v124 + 1);
      }
      *((float*)&v131 + 1) = v133;
      v134 = *((float*)&v246 + 1);
      if (*(float*)&v246 < *(float*)&v124) {
        *(float*)&v132 = *(float*)&v124;
      }
      v244 = v131;
      if (*((float*)&v246 + 1) < *((float*)&v124 + 1)) {
        v134 = *((float*)&v124 + 1);
      }
      *((float*)&v132 + 1) = v134;
      v246 = v132;
    }
    v135 = ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v3 + 16LL))(v3),
    v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
    v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v213 = v137;
    v219 = v136;
    v227 = v138;
    v235 = v135;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v146 = *((float*)&v213 + 2) +
           (float)((float)(vmuls_lane_f32(LANES128(v242).n128_f32[1], v227, 2) +
                           (float)(LANES128(v238).n128_f32[0] *
                                   *((float*)&v235 + 2))) +
                   (float)(v42 * *((float*)&v219 + 2)));
    v147 = GameData_1a83090;
    if (v146 < 0x0.0p+0f) {
      v148 =
          *(float*)&v213 +
          (float)((float)((float)(PSEUDO_UNFUSED(LANES128(v242).n128_f32[1] *
                                                 LANES128(v227).n128_f32[0])) +
                          (float)(*(float*)&v235 *
                                  LANES128(v238).n128_f32[0])) +
                  (float)(*(float*)&v219 * v42));
      v149 = *((float*)&v213 + 1) +
             (float)((float)(LANES128_OF(vmulq_f32(v242, v227)).n128_f32[1] +
                             (float)(LANES128(v238).n128_f32[0] *
                                     *((float*)&v235 + 1))) +
                     (float)(v42 * *((float*)&v219 + 1)));
      v150 = v145 + (float)((float)(vmuls_lane_f32(v149, v141, 3) +
                                    (float)(v148 * v140)) +
                            (float)(v146 * v143));
      if (v150 != 0x0.0p+0f) {
        v151 = 0x1.0000000000000p+0f / v150;
        v152 = *(float*)&v144 +
               (float)((float)((float)(PSEUDO_UNFUSED(
                                   v149 * LANES128(v141).n128_f32[0])) +
                               (float)(*(float*)&v139 * v148)) +
                       (float)(*(float*)&v142 * v146));
        DWORD2(v147) = 0;
        v153 =
            (float)((float)-(
                        float)(v151 *
                               (float)(*((float*)&v144 + 1) +
                                       (float)((float)(vmuls_lane_f32(
                                                           v149,
                                                           COERCE_AS(
                                                               float32x2_t,
                                                               LANES128(v141)
                                                                   .n128_u64
                                                                       [0]),
                                                           1) +
                                                       (float)(v148 *
                                                               *((float*)&v139 +
                                                                 1))) +
                                               (float)(v146 * *((float*)&v142 +
                                                                1))))) *
                    0x1.0e00000000000p+9f) +
            0x1.0e00000000000p+9f;
        *(float*)&v147 = (float)((float)(v152 * v151) * 0x1.e000000000000p+9f) +
                         0x1.e000000000000p+9f;
        *((float*)&v147 + 1) = v153;
      }
    }
    if (*((float*)&v147 + 2) == 0x0.0p+0f) {
      LODWORD(v154) = v244;
      LODWORD(v155) = v246;
      v156 = *((float*)&v244 + 1);
      if (*(float*)&v147 < *(float*)&v244) {
        *(float*)&v154 = *(float*)&v147;
      }
      if (*((float*)&v147 + 1) < *((float*)&v244 + 1)) {
        v156 = *((float*)&v147 + 1);
      }
      *((float*)&v154 + 1) = v156;
      v157 = *((float*)&v246 + 1);
      if (*(float*)&v246 < *(float*)&v147) {
        *(float*)&v155 = *(float*)&v147;
      }
      v244 = v154;
      if (*((float*)&v246 + 1) < *((float*)&v147 + 1)) {
        v157 = *((float*)&v147 + 1);
      }
      *((float*)&v155 + 1) = v157;
      v246 = v155;
    }
    v158 = ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v3 + 16LL))(v3),
    v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
    v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v220 = v160;
    v228 = v159;
    v236 = v161;
    v239 = v158;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v169 = *((float*)&v220 + 2) +
           (float)((float)(vmuls_lane_f32(LANES128(v242).n128_f32[1], v236, 2) +
                           (float)(LANES128(v242).n128_f32[0] *
                                   *((float*)&v239 + 2))) +
                   (float)(v21 * *((float*)&v228 + 2)));
    v170 = GameData_1a83090;
    if (v169 < 0x0.0p+0f) {
      v171 =
          *(float*)&v220 +
          (float)((float)((float)(PSEUDO_UNFUSED(LANES128(v242).n128_f32[1] *
                                                 LANES128(v236).n128_f32[0])) +
                          (float)(*(float*)&v239 *
                                  LANES128(v242).n128_f32[0])) +
                  (float)(*(float*)&v228 * v21));
      v172 = *((float*)&v220 + 1) +
             (float)((float)(LANES128_OF(vmulq_f32(v242, v236)).n128_f32[1] +
                             (float)(LANES128(v242).n128_f32[0] *
                                     *((float*)&v239 + 1))) +
                     (float)(v21 * *((float*)&v228 + 1)));
      v173 = v168 + (float)((float)(vmuls_lane_f32(v172, v164, 3) +
                                    (float)(v171 * v163)) +
                            (float)(v169 * v166));
      if (v173 != 0x0.0p+0f) {
        v174 = 0x1.0000000000000p+0f / v173;
        v175 = *(float*)&v167 +
               (float)((float)((float)(PSEUDO_UNFUSED(
                                   v172 * LANES128(v164).n128_f32[0])) +
                               (float)(*(float*)&v162 * v171)) +
                       (float)(*(float*)&v165 * v169));
        DWORD2(v170) = 0;
        v176 =
            (float)((float)-(
                        float)(v174 *
                               (float)(*((float*)&v167 + 1) +
                                       (float)((float)(vmuls_lane_f32(
                                                           v172,
                                                           COERCE_AS(
                                                               float32x2_t,
                                                               LANES128(v164)
                                                                   .n128_u64
                                                                       [0]),
                                                           1) +
                                                       (float)(v171 *
                                                               *((float*)&v162 +
                                                                 1))) +
                                               (float)(v169 * *((float*)&v165 +
                                                                1))))) *
                    0x1.0e00000000000p+9f) +
            0x1.0e00000000000p+9f;
        *(float*)&v170 = (float)((float)(v175 * v174) * 0x1.e000000000000p+9f) +
                         0x1.e000000000000p+9f;
        *((float*)&v170 + 1) = v176;
      }
    }
    if (*((float*)&v170 + 2) == 0x0.0p+0f) {
      LODWORD(v177) = v244;
      LODWORD(v178) = v246;
      v179 = *((float*)&v244 + 1);
      if (*(float*)&v170 < *(float*)&v244) {
        *(float*)&v177 = *(float*)&v170;
      }
      if (*((float*)&v170 + 1) < *((float*)&v244 + 1)) {
        v179 = *((float*)&v170 + 1);
      }
      *((float*)&v177 + 1) = v179;
      v180 = *((float*)&v246 + 1);
      if (*(float*)&v246 < *(float*)&v170) {
        *(float*)&v178 = *(float*)&v170;
      }
      v244 = v177;
      if (*((float*)&v246 + 1) < *((float*)&v170 + 1)) {
        v180 = *((float*)&v170 + 1);
      }
      *((float*)&v178 + 1) = v180;
      v246 = v178;
    }
    v181 = ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v3 + 16LL))(v3),
    v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
    v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v221 = v183;
    v229 = v182;
    v237 = v184;
    v240 = v181;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v192 = *((float*)&v221 + 2) +
           (float)((float)(vmuls_lane_f32(LANES128(v242).n128_f32[1], v237, 2) +
                           (float)(LANES128(v242).n128_f32[0] *
                                   *((float*)&v240 + 2))) +
                   (float)(v42 * *((float*)&v229 + 2)));
    v193 = GameData_1a83090;
    if (v192 < 0x0.0p+0f) {
      v194 =
          *(float*)&v221 +
          (float)((float)((float)(PSEUDO_UNFUSED(LANES128(v242).n128_f32[1] *
                                                 LANES128(v237).n128_f32[0])) +
                          (float)(*(float*)&v240 *
                                  LANES128(v242).n128_f32[0])) +
                  (float)(*(float*)&v229 * v42));
      v195 = *((float*)&v221 + 1) +
             (float)((float)(LANES128_OF(vmulq_f32(v242, v237)).n128_f32[1] +
                             (float)(LANES128(v242).n128_f32[0] *
                                     *((float*)&v240 + 1))) +
                     (float)(v42 * *((float*)&v229 + 1)));
      v196 = v191 + (float)((float)(vmuls_lane_f32(v195, v187, 3) +
                                    (float)(v194 * v186)) +
                            (float)(v192 * v189));
      if (v196 != 0x0.0p+0f) {
        v197 = 0x1.0000000000000p+0f / v196;
        v198 = *(float*)&v190 +
               (float)((float)((float)(PSEUDO_UNFUSED(
                                   v195 * LANES128(v187).n128_f32[0])) +
                               (float)(*(float*)&v185 * v194)) +
                       (float)(*(float*)&v188 * v192));
        DWORD2(v193) = 0;
        v199 =
            (float)((float)-(
                        float)(v197 *
                               (float)(*((float*)&v190 + 1) +
                                       (float)((float)(vmuls_lane_f32(
                                                           v195,
                                                           COERCE_AS(
                                                               float32x2_t,
                                                               LANES128(v187)
                                                                   .n128_u64
                                                                       [0]),
                                                           1) +
                                                       (float)(v194 *
                                                               *((float*)&v185 +
                                                                 1))) +
                                               (float)(v192 * *((float*)&v188 +
                                                                1))))) *
                    0x1.0e00000000000p+9f) +
            0x1.0e00000000000p+9f;
        *(float*)&v193 = (float)((float)(v198 * v197) * 0x1.e000000000000p+9f) +
                         0x1.e000000000000p+9f;
        *((float*)&v193 + 1) = v199;
      }
    }
    if (*((float*)&v193 + 2) == 0x0.0p+0f) {
      LODWORD(v200) = v244;
      LANES64(v201).n64_u32[0] = v246;
      v202 = *((float*)&v244 + 1);
      if (*(float*)&v193 < *(float*)&v244) {
        *(float*)&v200 = *(float*)&v193;
      }
      if (*((float*)&v193 + 1) < *((float*)&v244 + 1)) {
        v202 = *((float*)&v193 + 1);
      }
      *((float*)&v200 + 1) = v202;
      v203 = *((float*)&v246 + 1);
      if (*(float*)&v246 < *(float*)&v193) {
        LANES64(v201).n64_f32[0] = *(float*)&v193;
      }
      if (*((float*)&v246 + 1) < *((float*)&v193 + 1)) {
        v203 = *((float*)&v193 + 1);
      }
      LANES64(v201).n64_f32[1] = v203;
      PSEUDO_LOW_LANE64(v204, n64_u64, v200);
    }
    else {
      LANES64(v201).n64_u64[0] = v246;
      LANES64(v204).n64_u64[0] = v244;
    }
    PSEUDO_LOW_LANE64(v205, n64_u64, LANES128(a1[5]).n128_u64[0]);
    LANES64(v206).n64_u64[0] =
        LANES64_OF(vmvn_s8(vcge_f32(v205, v204))).n64_u64[0];
    if ((LANES64(v206).n64_u8[0] & 1) != 0 ||
        (LANES64(v207).n64_u64[0] =
             LANES64_OF(vmvn_s8(vcge_f32(v201, v205))).n64_u64[0],
         (LANES64(v207).n64_u8[0] & 1) != 0) ||
        (LANES64(v206).n64_u8[4] & 1) != 0 ||
        (LANES64(v207).n64_u8[4] & 1) != 0) {
    LABEL_117:
      result = 0;
    }
    else {
      result = 1;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v208 = result;
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v13),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v184 = COERCE_AS(__typeof__(v184), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v90 = COERCE_AS(__typeof__(v90), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v1", "=w"));
    return v208;
  }
  return result;
}

__int64 PopupController_d7d880(_QWORD* a1, __int64 a2)
{
  float v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  unsigned int v12;
  __int128 v13;
  int8x16_t v14;
  __int64 v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  int8x16_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  bool v27;
  float32x4_t v28;
  int8x8_t v29;
  unsigned __int64 v30;
  float32x4_t v31;
  float32x4_t v32;
  int8x16_t v33;
  __int128 v34;
  _QWORD v35[2];

  v3 = a1[4];
  if (v3 != 0) {
    v2 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 24) + 16LL) + 488LL) +
                   36LL) *
         0x1.ca5dc20000000p+5f;
  }
  else {
    v5 = a1[3];
    if (v5 == 0) {
      goto LABEL_10;
    }
    v6 = a1[2];
    v7 = a1[3];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v8 = std___1___shared_weak_count_lock(v7);
    std___1___shared_weak_count___release_weak(v5);
    if (v8 == 0) {
      goto LABEL_10;
    }
    if (v6 != 0) {
      v2 = *(float*)(v6 + 272);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
    if (v6 == 0) {
    LABEL_10:
      v2 = 0x0.0p+0f;
    }
  }
  v9 = *(_QWORD*)(a2 + 32);
  v35[0] = 0;
  v35[1] = 0;
  if (v9 == 0) {
    goto LABEL_21;
  }
  result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v9 + 48LL))(v9, v35);
  if ((result & 1) == 0) {
    v11 = *(_QWORD*)(a2 + 32);
    v34 = GameData_1a83460;
    if (v11 == 0) {
      goto LABEL_21;
    }
    result =
        (*(__int64 (**)(__int64, __int128*))(*(_QWORD*)v11 + 48LL))(v11, &v34);
    if ((result & 1) == 0) {
      v12 = 0;
      *(int8x8_t*)&v13 = vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a835f0),
                                   COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL));
      *((_QWORD*)&v13 + 1) = v13;
      v31 = COERCE_AS(float32x4_t, v13);
      *(int8x8_t*)&v13 = vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a835f0),
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL));
      LANES64(v29).n64_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a835f0),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      v30 = v13;
      *((int8x8_t*)&v13 + 1) = v29;
      v28 = COERCE_AS(float32x4_t, v13);
      while (1) {
        math_Quat_FromYawPitchRoll((void*)(&v33),
                                   (float)(v2 + vcvts_n_f32_u32(v12, 2u)) *
                                       0x1.1df46a0000000p-6f,
                                   0x0.0p+0f, 0x0.0p+0f);
        v14 = vmulq_f32(v33, COERCE_AS(float32x4_t, GameData_1a829d0));
        v15 = *(_QWORD*)(a2 + 32);
        LANES128(v16).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v16).n128_u64[1] = v30;
        LANES128(v17).n128_u64[0] = 1056964608;
        *(int8x8_t*)&LANES128(v17).n128_i8[8] =
            vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        v18 = vmulq_f32(v17, v16);
        LANES128(v17).n128_u64[0] = LANES64(v29).n64_u64[0];
        v19 = vmlaq_f32(vmulq_f32(v14, v31),
                        COERCE_AS(float32x4_t, GameData_1a83800), v18);
        LANES128(v18).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v18).n128_u64[1] = 1056964608;
        *(int32x2_t*)&LANES128(v17).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v14).n128_u64[0]), 1);
        LANES128(v20).n128_u64[0] = LANES128(v33).n128_u64[0];
        v21 = vmlaq_f32(v19, COERCE_AS(float32x4_t, GameData_1a83800),
                        vmulq_f32(v17, v18));
        LANES128(v18).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v18).n128_i8[8] =
            vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        v22 = vmlsq_f32(v21, v18, v28);
        LANES128(v14).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v18).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v23).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
        LANES128(v20).n128_u64[1] = LANES128(v18).n128_u64[0];
        *(int8x8_t*)&LANES128(v23).n128_i8[8] =
            vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        LANES128(v17).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v24 = vmlaq_f32(vmulq_f32(v14, v22),
                        COERCE_AS(float32x4_t, GameData_1a83800),
                        vmulq_f32(v20, v23));
        LANES128(v23).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int32x2_t*)&LANES128(v17).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v22).n128_u64[0]), 1);
        LANES128(v18).n128_u64[1] = LANES128(v23).n128_u64[0];
        LANES128(v23).n128_u64[1] = LANES128(v33).n128_u64[0];
        LANES128(v25).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v25).n128_i8[8] =
            vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        v26 = vmlsq_f32(vmlaq_f32(v24, COERCE_AS(float32x4_t, GameData_1a83800),
                                  vmulq_f32(v23, v17)),
                        v25, v18);
        LANES128(v26).n128_u32[3] = 0;
        v32 = v26;
        if (v15 == 0) {
          break;
        }
        result = (*(__int64 (**)(__int64, float32x4_t*))(*(_QWORD*)v15 + 48LL))(
            v15, &v32);
        if ((result & 1) == 0) {
          v27 = v12 == 1080;
          v12 += 360;
          if (!v27) {
            continue;
          }
        }
        return result;
      }
    LABEL_21:
      GameRoutine_60a310();
    }
  }
  return result;
}

_QWORD* PopupController_d7e0e0(_QWORD* result, __int64* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  char* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;

  v3 = result;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(result, a2[2], a2[1]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    result[1] = a2[1];
    result[2] = v5;
    *result = v4;
  }
  *((_DWORD*)v3 + 6) = *((_DWORD*)a2 + 6);
  if ((a2[4] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(v3 + 4, a2[6], a2[5]);
  }
  else {
    v6 = a2[4];
    v7 = a2[6];
    v3[5] = a2[5];
    v3[6] = v7;
    v3[4] = v6;
  }
  v3[8] = 0;
  v3[9] = 0;
  v3[7] = 0;
  v8 = (char*)a2[7];
  v9 = (char*)a2[8];
  v10 = v9 - v8;
  if (v9 != v8) {
    if (0xAAAAAAAAAAAAAAABLL * (v10 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_64aa00(result);
    }
    result = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v9 - v8, 16, 0);
    v11 = result;
    v3[7] = result;
    v3[8] = result;
    v3[9] = (char*)result + v10;
    do {
      if ((*v8 & 1) != 0) {
        result = (_QWORD*)fw_text_String_CopyTerminated(v11, *((_QWORD*)v8 + 2),
                                                        *((_QWORD*)v8 + 1));
      }
      else {
        v12 = *(_QWORD*)v8;
        v13 = *((_QWORD*)v8 + 2);
        v11[1] = *((_QWORD*)v8 + 1);
        v11[2] = v13;
        *v11 = v12;
      }
      v8 += 24;
      v11 += 3;
    } while (v8 != v9);
    v3[8] = v11;
  }
  return result;
}

void PopupController_d7e220(__int64 a1)
{
  __int64 v1;
  _BYTE* v2;
  unsigned __int64 v3;
  signed __int64 v4;
  __int64* v5;
  __int64* v6;
  bool v7;
  signed __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  char* v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64* v58;
  unsigned __int8* v60;
  signed __int64 v61;
  signed __int64 v62;
  __int64* v63;
  __int64 v64;
  struct {
    __int64 v65;
    __int64 v66;
    __int64 v67;
    int v68;
  } v65_;
  struct {
    __int64 v69;
    __int64 v70;
    unsigned __int64 v71;
  } v69_;
  struct {
    __int64 v72;
    unsigned __int64 v73;
    char* v74;
  } v72_;
  unsigned __int64 v75;

  v1 = a1;
  if ((*(_BYTE*)(a1 + 256) & 1) != 0) {
    v2 = *(_BYTE**)(a1 + 272);
    *(_QWORD*)(a1 + 264) = 0;
  }
  else {
    v2 = (_BYTE*)(a1 + 257);
    *(_BYTE*)(a1 + 256) = 0;
  }
  *v2 = 0;
  v3 = 0xCCCCCCCCCCCCCCCDLL *
       ((__int64)(*(_QWORD*)(a1 + 288) - *(_QWORD*)(a1 + 280)) >> 4);
  if ((int)v3 < 1) {
    return;
  }
  v4 = v3 & 0x7FFFFFFF;
  v58 = (__int64*)(a1 + 256);
  v5 = msg_MessageManager_instance__ptr[0];
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  while (1) {
    v8 = v4 - 1;
    v9 = (unsigned __int8*)(*(_QWORD*)(v1 + 280) + 80 * (v4 - 1));
    v10 = *v9;
    v11 = (v10 & 1) == 0;
    v12 = v10 >> 1;
    if (v11) {
      v13 = (__int64)(v9 + 1);
    }
    else {
      v13 = *((_QWORD*)v9 + 2);
    }
    if (v11) {
      v14 = v12;
    }
    else {
      v14 = *((_QWORD*)v9 + 1);
    }
    game_db1400((void*)(&v72_.v72), v13, v14);
    if ((v72_.v72 & 1) != 0) {
      v15 = v72_.v74;
    }
    else {
      v15 = (char*)&v72_.v72 + 1;
    }
    if ((Registration_a4da40(*v5, (__int64)v15) & 1) == 0) {
      goto LABEL_78;
    }
    v16 = v9[32];
    v17 = *((_QWORD*)v9 + 5);
    v18 = v16 & 1;
    v19 = v16 >> 1;
    v20 = v18 != 0 ? *((_QWORD*)v9 + 5) : v19;
    if (v20 == 0) {
      break;
    }
    v61 = v4 - 1;
    v62 = v4;
    v22 = *((__int64**)v9 + 7);
    v21 = *((__int64**)v9 + 8);
    v69_.v70 = 0;
    v69_.v71 = 0;
    v69_.v69 = 0;
    if (v22 == v21) {
      v25 = 0;
      v23 = 0;
    }
    else {
      v60 = v9;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v63 = v21;
      do {
        if ((*(_BYTE*)v22 & 1) != 0) {
          fw_text_String_CopyTerminated_alt1(&v65_.v65, v22[2], v22[1]);
        }
        else {
          v26 = *v22;
          v27 = v22[2];
          v65_.v66 = v22[1];
          v65_.v67 = v27;
          v65_.v65 = v26;
        }
        v65_.v68 = 4;
        if (v25 >= v24) {
          v29 = (__int64)(v25 - v23) >> 5;
          v30 = v29 + 1;
          if ((unsigned __int64)(v29 + 1) >> 59 != 0) {
            GameRoutine_919020();
          }
          if ((__int64)(v24 - v23) >> 4 > v30) {
            v30 = (__int64)(v24 - v23) >> 4;
          }
          if (v24 - v23 >= 0x7FFFFFFFFFFFFFE0LL) {
            v30 = 0x7FFFFFFFFFFFFFFLL;
          }
          if (v30 >> 59 != 0) {
            GameRoutine_60a210();
          }
          v64 = 32 * v30;
          v31 = fw_memory_HeapManager_Allocate_alt1(*v6, 32 * v30, 16, 0);
          v32 = v65_.v65;
          v33 = v65_.v66;
          v34 = v31 + v25 - v23;
          v35 = v31;
          v65_.v65 = 0;
          v65_.v66 = 0;
          v36 = v34 - 32 * v29;
          *(_DWORD*)(v34 + 24) = 4;
          *(_QWORD*)v34 = v32;
          *(_QWORD*)(v34 + 8) = v33;
          v37 = v65_.v67;
          v65_.v67 = 0;
          *(_QWORD*)(v34 + 16) = v37;
          if (v23 != v25) {
            v38 = 0;
            do {
              v39 = v36 + v38;
              *(_BYTE*)v39 = 0;
              *(_DWORD*)(v39 + 24) = -1;
              v40 = *(_DWORD*)(v23 + v38 + 24);
              if (v40 != -1) {
                v75 = v36 + v38;
                ((void (*)(unsigned __int64*))GameData_1fdd958[v40])(&v75);
                *(_DWORD*)(v39 + 24) = v40;
              }
              v38 += 32;
            } while (v23 + v38 != v25);
            v41 = v23;
            v6 = (__int64*)fw_memory_g_heap_manager_ptr;
            do {
              v42 = *(unsigned int*)(v41 + 24);
              if ((_DWORD)v42 != -1) {
                ((void (*)(unsigned __int64*, __int64))GameData_1fdd920[v42])(
                    &v75, v41);
              }
              *(_DWORD*)(v41 + 24) = -1;
              v41 += 32;
            } while (v41 != v25);
          }
          v25 = v34 + 32;
          v24 = v35 + v64;
          if (v23 != 0) {
            v43 = 128;
            if (*(_QWORD*)(*v6 + 200) == 0) {
              v43 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v6 + v43, v23);
          }
          v21 = v63;
          v23 = v36;
        }
        else {
          *(_BYTE*)v25 = 0;
          *(_DWORD*)(v25 + 24) = -1;
          v28 = v65_.v68;
          if (v65_.v68 != -1) {
            v75 = v25;
            ((void (*)(unsigned __int64*, __int64*))GameData_1fdd958[v65_.v68])(
                &v75, &v65_.v65);
            *(_DWORD*)(v25 + 24) = v28;
          }
          v25 += 32LL;
        }
        if (v65_.v68 != -1) {
          ((void (*)(unsigned __int64*, __int64*))GameData_1fdd920[v65_.v68])(
              &v75, &v65_.v65);
        }
        v22 += 3;
      } while (v22 != v21);
      v69_.v70 = v25;
      v69_.v71 = v24;
      v9 = v60;
      v69_.v69 = v23;
      v44 = v60[32];
      v17 = *((_QWORD*)v60 + 5);
      v18 = v44 & 1;
      v19 = v44 >> 1;
    }
    if (*(_QWORD*)GameData_212dbb8[0] != 0) {
      v45 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
    }
    else {
      v45 = 0;
    }
    if (GameData_22127a8 != 0) {
      v46 = GameData_22127a8;
    }
    else {
      v46 = v45;
    }
    if (v18 != 0) {
      v47 = v17;
    }
    else {
      v47 = v19;
    }
    if (v18 != 0) {
      v48 = *((_QWORD*)v9 + 6);
    }
    else {
      v48 = (__int64)(v9 + 33);
    }
    v8 = v61;
    v49 = GameRoutine_d9cfa0(v46, v48, v47, (__int64)&v69_.v69, 0);
    if (v23 != 0) {
      if (v23 == v25) {
        v69_.v70 = v23;
      LABEL_74:
        v52 = 128;
        if (*(_QWORD*)(*v6 + 200) == 0) {
          v52 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v6 + v52, v23);
        goto LABEL_77;
      }
      do {
        v50 = *(unsigned int*)(v25 - 8);
        v51 = v25 - 32;
        if ((_DWORD)v50 != -1) {
          ((void (*)(__int64*, unsigned __int64))GameData_1fdd920[v50])(
              &v65_.v65, v25 - 32);
        }
        *(_DWORD*)(v25 - 8) = -1;
        v25 -= 32LL;
      } while (v51 != v23);
      v69_.v70 = v23;
      v23 = v69_.v69;
      if (v69_.v69 != 0) {
        goto LABEL_74;
      }
    }
  LABEL_77:
    v1 = a1;
    v4 = v62;
    v5 = msg_MessageManager_instance__ptr[0];
    if ((v49 & 1) != 0) {
      break;
    }
  LABEL_78:
    if ((v72_.v72 & 1) != 0 && v72_.v74 != nullptr) {
      v53 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v53 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v53, (__int64)v72_.v74);
    }
    v7 = v4 <= 1;
    v4 = v8;
    if (v7) {
      return;
    }
  }
  if (v58 == &v72_.v72) {
  LABEL_95:
    if ((v72_.v72 & 1) != 0) {
      goto LABEL_96;
    }
    return;
  }
  if ((*(_BYTE*)v58 & 1) != 0) {
    if ((v72_.v72 & 1) != 0) {
      v55 = v72_.v74;
    }
    else {
      v55 = (char*)&v72_.v72 + 1;
    }
    if ((v72_.v72 & 1) != 0) {
      v56 = v72_.v73;
    }
    else {
      v56 = (unsigned __int64)(unsigned __int8)v72_.v72 >> 1;
    }
    SpineModel_64dde0(v58, (__int64)v55, v56);
    goto LABEL_95;
  }
  if ((v72_.v72 & 1) != 0) {
    GameRoutine_64df20(v58, (__int64)v72_.v74, v72_.v73);
    if ((v72_.v72 & 1) != 0) {
      goto LABEL_96;
    }
  }
  else {
    v54 = v72_.v73;
    *v58 = v72_.v72;
    v58[1] = v54;
    v58[2] = (__int64)v72_.v74;
    if ((v72_.v72 & 1) == 0) {
      return;
    }
  LABEL_96:
    if (v72_.v74 != nullptr) {
      v57 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v57 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v57, (__int64)v72_.v74);
    }
  }
}

void PopupController_d7e7a0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = *(_QWORD*)(a1 + 56);
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 64);
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_12;
    }
    v5 = *(_QWORD*)(a1 + 64);
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0) {
        v7 = *(_QWORD*)(v3 - 8);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v8, v7);
        }
      }
      v3 = v5;
    } while (v5 != v1);
    v9 = *(_QWORD*)(a1 + 56);
    *(_QWORD*)(a1 + 64) = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v10, v1);
    }
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v11 = *(_QWORD*)(a1 + 48);
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v11);
    }
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v13 = *(_QWORD*)(a1 + 16);
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
    }
  }
}

__int64

game_hub_PopupController_TryScreenRaycast_lambda0_Invoke(__int64 a1,
                                                         float32x4_t* a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  int v6;
  _QWORD v8[2];
  struct {
    _QWORD v9[18];
    unsigned __int8 v10;
  } v9_;
  float32x4_t v11;

  v2 = *(_QWORD**)(a1 + 16);
  v11 = vaddq_f32(*a2, *(float32x4_t*)*(_QWORD*)(a1 + 8));
  v4 = *GameData_212ebd0[0];
  v5 = v2[1];
  v8[0] = *v2;
  v8[1] = v5;
  game_zview_d163f0((void*)(v9_.v9), v4, v8, &v11, **(_QWORD**)(a1 + 24), 0,
                    0x1.99999a0000000p-4f);
  v6 = v9_.v10;
  if ((v9_.v10 & 1) == 0) {
    **(_BYTE**)(a1 + 32) = 1;
  }
  return v6 ^ 1u;
}

unsigned __int64* PopupController_d7f820(unsigned __int64* result, __int64 a2,
                                         __int64* a3, __int64 a4, __int64 a5,
                                         __int64* a6, __int64 a7)
{
  unsigned __int64* v11;
  __int64 v12;
  __int64 i;
  unsigned __int64* v14;
  __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  int v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64* v28;
  int v29;
  __int64* v30;
  __int64* v31;
  __int64 j;
  __int64* v33;
  __int64 v34;
  _BOOL4 v35;
  bool v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  int v50;
  int v51;
  __int64* v52;
  unsigned __int64 v53;
  __int64* v54;
  unsigned __int64* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64* v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64* v64;
  __int64 v65;
  __int64* v66;
  unsigned __int64 v67;

  if (a5 == 0) {
    return result;
  }
  v11 = result;
  while (a4 > a7 && a5 > a7) {
    if (a4 == 0) {
      return result;
    }
    v12 = -a4;
    for (i = 0;; i += 10) {
      v14 = &v11[i];
      if (*(_DWORD*)(a2 + 24) < SLODWORD(v11[i + 3])) {
        break;
      }
      if (__CFADD__(v12++, 1)) {
        return result;
      }
    }
    v16 = -v12;
    v66 = a6;
    if (-v12 >= a5) {
      if (v12 == -1) {
        return (unsigned __int64*)GameRoutine_d7fde0((__int64*)&v11[i], a2);
      }
      v25 = v16 / 2;
      v19 = (__int64)&v11[10 * (v16 / 2) + i];
      if (a3 == (__int64*)a2) {
        v18 = a3;
      }
      else {
        v18 = (__int64*)a2;
        v26 = 0xCCCCCCCCCCCCCCCDLL * (((__int64)a3 - a2) >> 4);
        do {
          v27 = v26 >> 1;
          v28 = &v18[10 * (v26 >> 1)];
          v29 = *((_DWORD*)v28 + 6);
          v30 = v28 + 10;
          v26 += ~(v26 >> 1);
          if (v29 < *(_DWORD*)(v19 + 24)) {
            v18 = v30;
          }
          else {
            v26 = v27;
          }
        } while (v26 != 0);
      }
      v17 = 0xCCCCCCCCCCCCCCCDLL * (((__int64)v18 - a2) >> 4);
    }
    else {
      v17 = a5 / 2;
      v18 = (__int64*)(a2 + 80 * (a5 / 2));
      if (v14 == (unsigned __int64*)a2) {
        v19 = a2;
      }
      else {
        v19 = (__int64)&v11[i];
        v20 = 0xCCCCCCCCCCCCCCCDLL * ((a2 - (__int64)v11 - i * 8) >> 4);
        do {
          v21 = v20 >> 1;
          v22 = v19 + 80 * (v20 >> 1);
          v23 = *(_DWORD*)(v22 + 24);
          v24 = v22 + 80;
          v20 += ~(v20 >> 1);
          if (*((_DWORD*)v18 + 6) < v23) {
            v20 = v21;
          }
          else {
            v19 = v24;
          }
        } while (v20 != 0);
      }
      v25 = 0xCCCCCCCCCCCCCCCDLL * ((v19 - (__int64)v11 - i * 8) >> 4);
    }
    v31 = v18;
    if (v19 != a2) {
      v31 = (__int64*)v19;
      if ((__int64*)a2 != v18) {
        v62 = v25;
        v63 = v17;
        v64 = a3;
        v65 = a5;
        GameRoutine_d7fde0((__int64*)v19, a2);
        v31 = (__int64*)(v19 + 80);
        for (j = a2 + 80; (__int64*)j != v18; j += 80) {
          if (v31 == (__int64*)a2) {
            a2 = j;
          }
          GameRoutine_d7fde0(v31, j);
          v31 += 10;
        }
        if (v31 != (__int64*)a2) {
          v33 = v31;
          v34 = a2;
          while (1) {
            GameRoutine_d7fde0(v33, v34);
            v34 += 80;
            v35 = v33 + 10 == (__int64*)a2;
            if ((__int64*)v34 == v18) {
              if (v33 + 10 == (__int64*)a2) {
                break;
              }
              v34 = a2 + 80;
              v33 += 20;
              while (1) {
                GameRoutine_d7fde0(v33 - 10, a2);
                v35 = v33 == (__int64*)a2;
                if ((__int64*)v34 != v18) {
                  break;
                }
                v36 = v33 == (__int64*)a2;
                v33 += 10;
                if (v36) {
                  goto LABEL_49;
                }
              }
            }
            else {
              v33 += 10;
            }
            if (v35) {
              a2 = v34;
            }
          }
        }
      LABEL_49:
        a3 = v64;
        a5 = v65;
        v25 = v62;
        v17 = v63;
      }
    }
    v37 = a5 - v17;
    a4 = -v12 - v25;
    if ((__int64)(v25 + v17) >= (__int64)(a5 - (v25 + v17) - v12)) {
      v40 = v25;
      v37 = v17;
      result = PopupController_d7f820((unsigned __int64*)v31, (__int64)v18, a3,
                                      a4, a5 - v17, v66, a7);
      v18 = (__int64*)v19;
      a6 = v66;
      a4 = v40;
      a3 = v31;
    }
    else {
      v38 = v19;
      a6 = v66;
      v39 = a3;
      result = PopupController_d7f820(v14, v38, v31, v25, v17, v66, a7);
      a3 = v39;
      v14 = (unsigned __int64*)v31;
    }
    a5 = v37;
    v11 = v14;
    a2 = (__int64)v18;
    if (v37 == 0) {
      return result;
    }
  }
  if (a4 <= a5) {
    if (v11 != (unsigned __int64*)a2) {
      v53 = 0;
      v54 = a6;
      v55 = v11;
      do {
        v56 = *v55;
        v57 = v55[2];
        ++v53;
        v54[1] = v55[1];
        v54[2] = v57;
        *v54 = v56;
        v55[1] = 0;
        v55[2] = 0;
        *v55 = 0;
        *((_DWORD*)v54 + 6) = *((_DWORD*)v55 + 6);
        v58 = v55[4];
        v59 = v55[6];
        v54[5] = v55[5];
        v54[6] = v59;
        v54[4] = v58;
        v55[5] = 0;
        v55[6] = 0;
        v55[4] = 0;
        v54[8] = 0;
        v54[9] = 0;
        v54[7] = 0;
        v54[7] = v55[7];
        v54[8] = v55[8];
        v54[9] = v55[9];
        v55[8] = 0;
        v55[9] = 0;
        v55[7] = 0;
        v55 += 10;
        v54 += 10;
      } while (v55 != (unsigned __int64*)a2);
      v67 = v53;
      v60 = a6;
      while ((__int64*)a2 != a3) {
        v61 = a3;
        if (*(_DWORD*)(a2 + 24) >= *((_DWORD*)v60 + 6)) {
          result = (unsigned __int64*)GameRoutine_d7ff80((__int64)v11, v60);
          v60 += 10;
        }
        else {
          result =
              (unsigned __int64*)GameRoutine_d7ff80((__int64)v11, (__int64*)a2);
          a2 += 80;
        }
        v11 += 10;
        a3 = v61;
        if (v54 == v60) {
          goto LABEL_85;
        }
      }
      do {
        result = (unsigned __int64*)GameRoutine_d7ff80((__int64)v11, v60);
        v11 += 10;
        v36 = v54 - 10 == v60;
        v60 += 10;
      } while (!v36);
      goto LABEL_85;
    }
  }
  else if ((__int64*)a2 != a3) {
    v41 = 0;
    v42 = 0;
    do {
      v43 = a2 + v41 * 8;
      v44 = &a6[v41];
      ++v42;
      v41 += 10;
      v45 = *(_QWORD*)v43;
      v46 = *(_QWORD*)(v43 + 16);
      v44[1] = *(_QWORD*)(v43 + 8);
      v44[2] = v46;
      *v44 = v45;
      *(_QWORD*)(v43 + 8) = 0;
      *(_QWORD*)(v43 + 16) = 0;
      *(_QWORD*)v43 = 0;
      *((_DWORD*)v44 + 6) = *(_DWORD*)(v43 + 24);
      v47 = *(_QWORD*)(v43 + 32);
      v48 = *(_QWORD*)(v43 + 48);
      v44[5] = *(_QWORD*)(v43 + 40);
      v44[6] = v48;
      v44[4] = v47;
      *(_QWORD*)(v43 + 40) = 0;
      *(_QWORD*)(v43 + 48) = 0;
      *(_QWORD*)(v43 + 32) = 0;
      v44[8] = 0;
      v44[9] = 0;
      v44[7] = 0;
      v44[7] = *(_QWORD*)(v43 + 56);
      v44[8] = *(_QWORD*)(v43 + 64);
      v44[9] = *(_QWORD*)(v43 + 72);
      *(_QWORD*)(v43 + 64) = 0;
      *(_QWORD*)(v43 + 72) = 0;
      *(_QWORD*)(v43 + 56) = 0;
    } while ((__int64*)(v43 + 80) != a3);
    result = (unsigned __int64*)(a3 - 10);
    v49 = &a6[v41];
    v67 = v42;
    while ((unsigned __int64*)a2 != v11) {
      v50 = *(_DWORD*)(a2 - 56);
      v51 = *((_DWORD*)v49 - 14);
      if (v51 >= v50) {
        v52 = v49 - 10;
      }
      else {
        v52 = (__int64*)(a2 - 80);
      }
      if (v51 >= v50) {
        v49 -= 10;
      }
      else {
        a2 -= 80;
      }
      result =
          (unsigned __int64*)(GameRoutine_d7ff80((__int64)result, v52) - 80);
      if (v49 == a6) {
        goto LABEL_85;
      }
    }
    for (; v49 != a6;
         result = (unsigned __int64*)(GameRoutine_d7ff80((__int64)result, v49) -
                                      80)) {
      v49 -= 10;
    }
    goto LABEL_85;
  }
  v67 = 0;
LABEL_85:
  if (a6 != nullptr) {
    return GameRoutine_d80140(&v67, (__int64)a6);
  }
  return result;
}

#pragma GCC visibility pop
