#include "decomp/pseudo_helpers.h"

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
