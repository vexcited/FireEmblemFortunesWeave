#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_819400(_QWORD);
__int64 GameRoutine_819f40(_QWORD);
__int64 GameRoutine_81a540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 GameRoutine_e7d0a0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CmdBtlUnit_e79c10(__int64 result, int a2);
__int64 CmdBtlUnit_e79df0(__int64 result);
__int64 CharacterAnimator_1079d90(_QWORD, _QWORD);
__int64 CmdBtlUnit_e7c280_alt1(_QWORD) __asm__("CmdBtlUnit_e7c280");
__int64 CmdBtlUnit_e7ca80(_QWORD, float);
__int64 CmdbtlPartyNatives_e9cce0(_QWORD);
__int64 GameRoutine_1079580(_QWORD, _QWORD, float, float, float);
__int64 GameRoutine_10adb80(_QWORD, _QWORD);
__int64 GameRoutine_10b2280(_QWORD, _QWORD, float);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e8e50(_QWORD, _QWORD);
__int64 GameRoutine_842b40(_QWORD, _QWORD);
__int64 GameRoutine_e774a0(__int64, __int64*);
__int64 GameRoutine_e7a740(__int64 result, __int64);
__int64 GameRoutine_e7c6f0(__int64, char, float);
__int64 GameRoutine_ec0a20(_QWORD, _QWORD);
__int64 GameRoutine_ff7420(_QWORD, _QWORD);
__int64 Manager_66cc20(_QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 UnitActor_81d740(_QWORD);
__int64 UnitItem_6e8bc0(_QWORD);
__int64 Unit_6ca760(_QWORD, _QWORD);
__int64 Unit_6cb080(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_Unit_Unknown6c90c0(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _DWORD* GameData_212d168;
extern _QWORD GameData_1b01768[4];
extern _QWORD GameData_1b018e8[4];
extern _UNKNOWN GameData_1aa1728;
extern _UNKNOWN GameData_1abbaec;
extern __int64 (*GameData_1fe80f8[])();
extern __int64 (*GameData_1fe81c8[])();
extern __int64 GameData_21c99b8;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern __int64 GameData_2216820;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212d448[9];
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern char GameData_2216858;
extern float GameData_1b92038[5];
float GameRoutine_edf4a0(void);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 CmdBtlUnit_e7ada0_alt3(__int64 result) __asm__("CmdBtlUnit_e7ada0");
bool CmdBtlUnit_e7c280(__int64 a1);
bool CmdBtlUnit_e7c4f0(__int64 a1);
__int64 CmdBtlUnit_e7c980(__int64 result);
__int64 CmdBtlUnit_e7cbc0(__int64 a1);
_QWORD* CmdBtlUnit_e7cc50(_QWORD* result);
_QWORD* game_cmdbtl_CmdBtlUnit_SetupLookToEnemy(_QWORD* result, __int64 a2,
                                                __int64 a3, __int64 a4);
__int64 CmdBtlUnit_e7d620(__int64 result);
float CmdBtlUnit_e7d750(_QWORD* a1);
__int64 CmdBtlUnit_e7da80(__int64 a1, _QWORD* a2, float a3);
__int64 CmdBtlUnit_e7dc80(__int64 result, _QWORD* a2);
__int64 CmdBtlUnit_e7df20(__int64 result, char a2, float a3);
__int64 CmdBtlUnit_e7e180(__int64 a1);
__int64 game_cmdbtl_CmdBtlUnit_FindLinkItem(__int64 a1, __int64 a2);
__int64 CmdBtlUnit_e7e730(_QWORD* a1, _QWORD* a2);
__int64 CmdBtlUnit_e7e800(__int64 result);
__int64 game_cmdbtl_CmdBtlUnit_CreateCharacter_lambda2_Invoke(__int64 a1,
                                                              __int64* a2);
__int64 game_cmdbtl_CmdBtlUnit_FindLinkItem_lambda0_Invoke(__int64 a1,
                                                           __int64 a2);
__int64
game_cmdbtl_CmdBtlUnit_GetLinkItem_Heal_lambda0_Invoke(__int64 a1,
                                                       unsigned __int16* a2);
__int64
game_cmdbtl_CmdBtlUnit_GetLinkItem_Attack_lambda0_Invoke(__int64 a1,
                                                         unsigned __int16* a2);
__attribute__((swiftcall)) void JostleManager_ea1180(PSEUDO_X8, _QWORD*,
                                                     __int64*);
__int64 CharacterBuilder_1083840(__int64 result);
__int64 CharacterSound_1095750(_QWORD, _QWORD, _QWORD, float);
__int64 CmdBtlUnit_e7ada0_alt2(_QWORD) __asm__("CmdBtlUnit_e7ada0");
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_a19f00(_QWORD, _QWORD);
__int64 GameRoutine_a7c6a0(__int64 result, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_UnitActor_SetZViewWeight(__int64 result, float, double);
__int64 game_cmdbtl_CmdBtlUnit_FindLinkItem_alt1(_QWORD, _QWORD) __asm__(
    "game_cmdbtl_CmdBtlUnit_FindLinkItem");
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_isActive_100100(_QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1fe8178[])();
extern __int64 (*GameData_1fe8248[])();
extern __int64 (*GameData_1fe82c8[])();
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21ec7b0;
extern __int64 GameData_22162a8;
extern __int64 fw_memory_g_heap_manager;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
void CmdBtlUnit_e79c10_alt1(__int64, int) __asm__("CmdBtlUnit_e79c10");
void CmdBtlUnit_e7aab0(__int64, char, __n128);
void CmdBtlUnit_e7ada0_alt1(__int64) __asm__("CmdBtlUnit_e7ada0");
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
void __attribute__((noreturn))
GameRoutine_8123d0_alt2(_QWORD, long double) __asm__("GameRoutine_8123d0");
void __attribute__((noreturn)) String_60a1d0();
void CmdBtlUnit_e7a740(__int64 a1, __int64 a2, double a3, double a4);
__int64 CmdBtlUnit_e7c3f0(__int64 a1, int a2, __int16 a3, float a4);
void CmdBtlUnit_e7c6f0(__int64 a1, char a2, float a3);
__n128 CmdBtlUnit_e7d0a0(__int64 a1, char a2);
__int64 CmdBtlUnit_e7d890_alt1(__int64 a1) __asm__("CmdBtlUnit_e7d890");
__attribute__((swiftcall)) void CmdBtlUnit_e7dd50(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2);
__attribute__((swiftcall)) void CmdBtlUnit_e7de70(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2);
__attribute__((swiftcall)) void CmdBtlUnit_e7e340(PSEUDO_X8 x8_, __int64 result,
                                                  int a2);
__n128 game_cmdbtl_CmdBtlUnit_SetupLookToEnemy_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);
_WORD*
game_UnitItemList_EachItem_alt1(_WORD* result,
                                __int64) __asm__("game_UnitItemList_EachItem");
__attribute__((swiftcall)) void
CharacterSound_1095750_alt1(PSEUDO_X8, __int64, const char*, __int64,
                            float) __asm__("CharacterSound_1095750");
__int64*
CharacterAnimator_1079d90_alt1(__int64,
                               __int64) __asm__("CharacterAnimator_1079d90");
__int64 CmdBtlParty_e774a0(__int64, __int64*);
__int64 GameHr_a867a0(__int64 result);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_a19f00_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_a19f00");
__int64 GameRoutine_ec0a20_alt1(__int64, int) __asm__("GameRoutine_ec0a20");
__int64 UnitActor_819400(__int64);
__int64 UnitActor_819f40(__int64);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64 snd_isActive_100100_alt1(__int64*) __asm__("snd_isActive_100100");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
float CharacterAnimator_1079580_alt1(__int64, int, float, float, float) __asm__(
    "CharacterAnimator_1079580");
float game_edf4a0();
void CmdBtlUnit_e7ca80_alt1(__int64, float) __asm__("CmdBtlUnit_e7ca80");
void GameHr_81d740(__int64, long double);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void CmdBtlUnit_e7ada0(__int64 a1);
void CmdBtlUnit_e7d890(__int64 a1, long double a2);

__int64 CmdBtlUnit_e79c10(__int64 result, int a2)
{
  int v2;
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
  int v13;
  __int64 v14;
  __int64 v15;
  char v16;
  unsigned int v17;

  if (*(_DWORD*)(result + 180) == a2) {
    return result;
  }
  *(_DWORD*)(result + 180) = a2;
  if (a2 == 2) {
    if (*(_BYTE*)(result + 520) == 1) {
      if ((*(_BYTE*)(result + 488) & 1) != 0 && *(_QWORD*)(result + 504) != 0) {
        v7 = result;
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v8);
        result = v7;
      }
      *(_BYTE*)(result + 520) = 0;
    }
    *(_BYTE*)(result + 191) = 0;
    v9 = result;
    GameRoutine_e7d0a0(result, 1);
    v10 = *(_QWORD*)(v9 + 208);
    result = v9;
    if (v10 != 0) {
      v6 = *(_QWORD*)(v10 + 112);
      if (v6 != 0) {
        *(_QWORD*)(v6 + 156) = 0;
        goto LABEL_24;
      }
    }
  }
  else if (a2 == 1) {
    v2 = *(unsigned __int8*)(result + 520);
    *(_DWORD*)(result + 484) = 0;
    if (v2 == 1) {
      if ((*(_BYTE*)(result + 488) & 1) != 0 && *(_QWORD*)(result + 504) != 0) {
        v3 = result;
        v4 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v4);
        result = v3;
      }
      *(_BYTE*)(result + 520) = 0;
    }
    v5 = *(_QWORD*)(result + 208);
    *(_BYTE*)(result + 191) = 0;
    if (v5 != 0) {
      v6 = *(_QWORD*)(v5 + 112);
      if (v6 != 0) {
        *(_QWORD*)(v6 + 156) = 0x3F8000003F800000LL;
      LABEL_24:
        *(_DWORD*)(v6 + 164) = 1065353216;
      }
    }
  }
  v11 = *(_QWORD*)(result + 208);
  if (v11 == 0) {
    return result;
  }
  v12 = *(_QWORD*)(v11 + 120);
  v13 = *(_DWORD*)(result + 180);
  if (v12 != 0) {
    *(_BYTE*)(v12 + 417) = v13 != 1;
    v11 = *(_QWORD*)(result + 208);
    if (v11 == 0) {
      return result;
    }
    v13 = *(_DWORD*)(result + 180);
  }
  if (v13 == 1) {
    v17 = *(_DWORD*)(v11 + 340) & 0xFFFFFFFE;
  LABEL_39:
    *(_DWORD*)(v11 + 340) = v17;
    return result;
  }
  if (v13 != 2) {
    return result;
  }
  v14 = *(_QWORD*)(result + 216);
  v15 = *(_QWORD*)(result + 224);
  if (v15 == 0) {
    if ((*(_BYTE*)(v14 + 61) & 1) != 0) {
      return result;
    }
    goto LABEL_38;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                            memory_order_relaxed);
  v16 = *(_BYTE*)(v14 + 61);
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    result = std___1___shared_weak_count___release_weak();
  }
  if ((v16 & 1) == 0) {
  LABEL_38:
    v17 = *(_DWORD*)(v11 + 340) | 1;
    goto LABEL_39;
  }
  return result;
}

__int64 CmdBtlUnit_e79df0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  struct {
    unsigned __int64 v4;
    int v5;
    char v6;
  } v4_;

  v1 = *(_QWORD*)(result + 16);
  if (v1 != 0) {
    v2 = result;
    if (*(_QWORD*)(result + 24) != 0) {
      v3 = *(_DWORD*)(v1 + 32) - 1;
      *(_DWORD*)(v1 + 32) = v3;
      if (v3 == 0) {
        v4_.v6 = 0;
        v4_.v4 = 0xBF800000BF800000LL;
        v4_.v5 = 1065353216;
        result = UnitActor_819f40(*(_QWORD*)(v1 + 8));
        if ((_DWORD)result != *(_DWORD*)(v1 + 16)) {
          result = UnitActor_81a540(v1, result, (__int64)&v4_.v4);
        }
      }
      if (*(_BYTE*)(v2 + 176) == 1) {
        v4_.v4 = *(_QWORD*)(v2 + 24);
        if (v4_.v4 != 0) {
          result = GameHr_a867a0((__int64)&v4_.v4);
        }
        *(_BYTE*)(v2 + 176) = 0;
      }
      else {
        result = UnitActor_819400(*(_QWORD*)(v2 + 16));
      }
      *(_QWORD*)(v2 + 24) = 0;
    }
  }
  return result;
}

void CmdBtlUnit_e7a740(__int64 a1, __int64 a2, double a3, double a4)
{

#pragma clang fp contract(off)
  _BOOL4 v4;
  __n128 v7;
  __int64 v8;
  float32x4_t* v9;
  float32x4_t v10;
  float32x4_t v11;
  int8x16_t v12;
  float32x4_t v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int128 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  long double v23;
  __int64 v24;
  int v25;
  int v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  struct {
    __int64 v38;
    __int64 v39;
    __int64 v40;
  } v38_;
  struct {
    __int64 v41;
    __int64 v42;
  } v41_;

  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*(_BYTE*)(a2 + 340) & 1) != 0) {
    return;
  }
  *(_QWORD*)(a1 + 208) = a2;
  game_UnitActor_SetZViewWeight(*(_QWORD*)(a1 + 16), 0x1.0000000000000p+0f, a4),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_DWORD*)(a2 + 336) = 1065353216;
  v8 = *(_QWORD*)(a2 + 392);
  if (v8 != 0) {
    v9 = *(float32x4_t**)(a2 + 8);
    PSEUDO_LOW_LANE128(v7, n128_f32,
                       *(float*)(v8 + 40) +
                           (float)(0x1.0000000000000p+0f - *(float*)(v8 + 40)));
    v10 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v7).n128_u64[0]), 0);
    LANES128(v10).n128_u32[3] = 0;
    v11 = vsubq_f32(v9[22], v10);
    v12 = vmulq_f32(v11, v11);
    LANES128(v12).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      LANES128(v9[22]).n128_u32[0] = LANES128(v7).n128_u32[0];
      LANES128(v9[22]).n128_u32[1] = LANES128(v7).n128_u32[0];
      v13 = v9[22];
      LANES128(v9[18]).n128_u32[2] |= 1u;
      LANES128(v13).n128_u64[1] = LANES128(v7).n128_u32[0];
      v9[22] = v13;
      v8 = *(_QWORD*)(a2 + 392);
    }
    v14 = *(__int64**)(a2 + 528);
    v15 = *(__int64**)(a2 + 536);
    if (v14 != v15) {
      v37 = *(float*)(v8 + 44) +
            (float)(0x1.0000000000000p+0f - *(float*)(v8 + 44));
      do {
        v16 = *v14++;
        v17 = *(_DWORD*)(v16 + 128);
        v18 = *(_QWORD*)v16;
        *(float*)(v16 + 112) = v37;
        *(float*)(v16 + 116) = v37;
        v19 = *(_OWORD*)(v16 + 112);
        *(_DWORD*)(v16 + 128) = v17 | 0x20;
        *((_QWORD*)&v19 + 1) = LODWORD(v37);
        *(_OWORD*)(v16 + 112) = v19;
        GameRoutine_a7c6a0(v18, v16),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      } while (v14 != v15);
    }
    CharacterBuilder_1083840(a2),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v20 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 72LL);
  if (v20 != 0) {
    v21 = *(_QWORD*)(a1 + 320);
    if (v21 == 0) {
      goto LABEL_17;
    }
    v22 = std___1___shared_weak_count_lock(v21),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v22 == 0) {
      goto LABEL_17;
    }
    v24 = *(_QWORD*)(a1 + 312);
    if (v24 != 0 && *(_DWORD*)(*(_QWORD*)v24 + 64LL) == 0) {
      if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
        v25 = 0;
        v4 = true;
      }
      else {
        if ((GameData_2216858 & 1) == 0) {
          GameRoutine_8123d0_alt1(),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v25 = 0;
        v4 = (GameData_2216820 & 8) == 0;
      }
    }
    else {
      v25 = 1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (((v4 | v25) & 1) != 0) {
        goto LABEL_17;
      }
    }
    else {
      v36 = v22;
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(__n128*)&v23 = std___1___shared_weak_count___release_weak_alt1(v36),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (((v4 | v25) & 1) != 0) {
      LABEL_17:
        if (CmdBtlUnit_e7c280(a1)) {
          v26 = -589947500;
        }
        else {
          v26 = 119788728;
        }
        goto LABEL_20;
      }
    }
    v26 = -1054720718;
  LABEL_20:
    LODWORD(v23) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
    LANES128(v7).n128_f32[0] = CharacterAnimator_1079580(
        v20, v26, v23, -0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (*(_QWORD*)(a1 + 216) == 0) {
    v27 = (_QWORD*)GameData_22162a8;
    v28 = *(_QWORD*)(a2 + 616);
    v38_.v38 = *(_QWORD*)(a2 + 608);
    v38_.v39 = v28;
    if (v28 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 16), 1u,
                                memory_order_relaxed);
    }
    v38_.v40 = *(_QWORD*)(a2 + 624);
    JostleManager_ea1180((void*)(&v41_.v41), v27, &v38_.v38),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v29 = v41_.v41;
    v30 = v41_.v42;
    v31 = *(_QWORD*)(a1 + 224);
    v41_.v41 = 0;
    v41_.v42 = 0;
    *(_QWORD*)(a1 + 216) = v29;
    *(_QWORD*)(a1 + 224) = v30;
    if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v7 = std___1___shared_weak_count___release_weak_alt1(v31);
    }
    v32 = v41_.v42;
    if (v41_.v42 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v41_.v42 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v32 + 16LL))(
          v32, *(long double*)&v7),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v7 = std___1___shared_weak_count___release_weak_alt1(v32);
    }
    if (v38_.v39 != 0) {
      v7 = std___1___shared_weak_count___release_weak_alt1(v38_.v39);
    }
  }
  v33 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
  if (v33 != 0 &&
      (unsigned __int64)(v34 = *(unsigned __int8*)(v33 + 16)) <= 3) {
    v35 = GameData_1b018e8[v34];
  }
  else {
    v35 = 392;
  }
  if (*(_DWORD*)(GameData_2203490 + v35 + 672) >= 2u) {
    CmdBtlUnit_e7aab0(a1, 1, v7),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  *(_BYTE*)(a1 + 188) = 1;
  CmdBtlUnit_e7ada0_alt1(a1),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*(_BYTE*)(a1 + 440) & 1) == 0) {
    CmdBtlUnit_e79c10_alt1(a1, 1),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_BYTE*)(a1 + 440) = 1;
  }
}

void CmdBtlUnit_e7ada0(__int64 a1)
{

#pragma clang fp contract(off)
  _BOOL4 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  bool v22;
  int v23;
  unsigned int v24;
  float v25;
  __int64* v26;
  float v27;
  float v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  int v32;

  if (*(_BYTE*)(a1 + 172) != 1 || *(_QWORD*)(a1 + 24) == 0) {
    return;
  }
  v3 = *(_QWORD*)(a1 + 208);
  if (v3 == 0 || (*(_BYTE*)(v3 + 342) & 1) == 0 || *(_BYTE*)(a1 + 177) == 0 ||
      *(_DWORD*)(a1 + 180) != 1) {
    return;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
  if (v4 != 0 && (unsigned __int64)(v5 = *(unsigned __int8*)(v4 + 16)) <= 3) {
    v6 = GameData_1b018e8[v5];
  }
  else {
    v6 = 392;
  }
  v7 = *GameData_212ea58 + 672;
  if (*(_DWORD*)(v7 + v6) > 1u) {
    return;
  }
  v8 = *(int*)(*GameData_212ea58 + 632) <= 0 && *GameData_212d168 == 2;
  if (!v8 || *GameData_212d448[0] != 0) {
    return;
  }
  v10 = a1;
  v11 = GameData_212dec0[0];
  if ((*(_BYTE*)(*GameData_212dec0[0] + 12) & 1) == 0) {
    if (v4 != 0 &&
        (unsigned __int64)(v12 = *(unsigned __int8*)(v4 + 16)) <= 3) {
      v13 = GameData_1b018e8[v12];
    }
    else {
      v13 = 392;
    }
    if ((GameRoutine_ec0a20_alt1(*GameData_212dec0[0], *(_DWORD*)(v7 + v13)) &
         1) != 0) {
      return;
    }
    a1 = v10;
    if ((*(_BYTE*)(v10 + 172) & 1) == 0) {
      goto LABEL_67;
    }
  }
  v14 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 72LL);
  if (v14 == 0) {
    return;
  }
  if (*(_BYTE*)(a1 + 148) != 0) {
    v15 = *(float*)(a1 + 144);
  }
  else {
    v15 = -0x1.0000000000000p+0f;
  }
  *(_BYTE*)(v14 + 88) = CmdBtlUnit_e7c280(v10);
  v16 = *(_QWORD*)(v10 + 320);
  if (v16 == 0) {
    goto LABEL_41;
  }
  v17 = std___1___shared_weak_count_lock_alt1(v16);
  if (v17 == 0) {
    goto LABEL_41;
  }
  v18 = *(_QWORD*)(v10 + 312);
  v19 = v10;
  if (v18 == 0 || *(_DWORD*)(*(_QWORD*)v18 + 64LL) != 0) {
    v20 = 1;
    goto LABEL_38;
  }
  if ((*(_BYTE*)(*v11 + 13) & 1) != 0) {
    v20 = 0;
    v1 = true;
    goto LABEL_38;
  }
  if ((GameData_2216858 & 1) == 0) {
  LABEL_67:
    GameRoutine_8123d0_alt1();
  }
  v20 = 0;
  v1 = (GameData_2216820 & 8) == 0;
LABEL_38:
  if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v21 = v17;
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt2(v21);
    v19 = v10;
  }
  if (((v1 | v20) & 1) == 0) {
    v23 = -1054720718;
    goto LABEL_44;
  }
LABEL_41:
  v22 = CmdBtlUnit_e7c280(v10);
  v19 = v10;
  if (v22) {
    v23 = -589947500;
  }
  else {
    v23 = 119788728;
  }
LABEL_44:
  if (*(_BYTE*)(v19 + 140) != 0) {
    v24 = *(_DWORD*)(v19 + 136);
  }
  else {
    v24 = v23;
  }
  if (*(_BYTE*)(v19 + 168) == 1) {
    v25 = game_edf4a0();
    v26 = CharacterAnimator_1079d90_alt1(v14, v24);
    v19 = v10;
    v27 = v25 * *((float*)v26 + 3);
  }
  else {
    v27 = -0x1.0000000000000p+0f;
    if (*(_BYTE*)(v19 + 164) != 0) {
      v27 = *(float*)(v19 + 160);
    }
  }
  v28 = 0x1.0000000000000p+0f;
  if (*(_BYTE*)(v19 + 156) != 0) {
    v28 = *(float*)(v19 + 152);
  }
  CharacterAnimator_1079580_alt1(v14, v24, v15, v27, v28);
  v29 = *(unsigned __int8*)(v10 + 376);
  if ((v29 & 1) != 0) {
    v30 = *(_QWORD*)(v10 + 384);
  }
  else {
    v30 = v29 >> 1;
  }
  if (v30 != 0 || (v31 = v10, (*(_BYTE*)(v10 + 191) & 1) != 0)) {
    CmdBtlUnit_e7ca80_alt1(v10, -0x1.0000000000000p+0f);
    v31 = v10;
  }
  v32 = *(unsigned __int8*)(v31 + 172);
  *(_DWORD*)(v31 + 484) = v24;
  if (v32 == 1) {
    *(_BYTE*)(v31 + 172) = 0;
  }
}

bool CmdBtlUnit_e7c280(__int64 a1)
{
  _BYTE* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int* v8;
  __int64 v9;
  int v10;

  if ((*(_BYTE*)(a1 + 369) & 1) != 0) {
    v1 = (_BYTE*)(a1 + 368);
    return *v1 & 1;
  }
  if ((*(_BYTE*)(a1 + 371) & 1) != 0) {
    v1 = (_BYTE*)(a1 + 370);
    return *v1 & 1;
  }
  if ((*(_BYTE*)(a1 + 373) & 1) != 0) {
    v1 = (_BYTE*)(a1 + 372);
    return *v1 & 1;
  }
  if ((*(_BYTE*)(a1 + 375) & 1) != 0) {
    v1 = (_BYTE*)(a1 + 374);
    return *v1 & 1;
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) != 0) {
    return false;
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0(a1);
    }
    if ((GameData_2216820 & 8) != 0) {
      return false;
    }
  }
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
  if (v3 == 0) {
    v6 = *(_DWORD*)(GameData_2203490 + 1068);
    v7 = GameData_2203490 + 672;
    v4 = 3;
    goto LABEL_30;
  }
  v4 = *(unsigned __int8*)(v3 + 16);
  switch ((_DWORD)v4) {
  case 0:
    v5 = 12;
    goto LABEL_22;
  case 3:
    v5 = 268;
    goto LABEL_22;
  case 1:
    v5 = 140;
  LABEL_22:
    v7 = GameData_2203490 + 672;
    v8 = (int*)(GameData_2203490 + 672 + v5);
    goto LABEL_24;
  default:
    break;
  }
  v7 = GameData_2203490 + 672;
  v8 = (int*)(GameData_2203490 + 1068);
LABEL_24:
  v6 = *v8;
  if ((_DWORD)v4 != 0) {
    v9 = 3;
    if ((_DWORD)v4 == 1) {
      v9 = 1;
    }
    if ((_DWORD)v4 == 3) {
      v4 = 2;
    }
    else {
      v4 = v9;
    }
  }
LABEL_30:
  v10 = *(_DWORD*)(v7 + (v4 << 7) + 20) + *(_DWORD*)(v7 + (v4 << 7) + 16);
  if (v10 <= 1) {
    v10 = 1;
  }
  return 3 * v6 < v10;
}

__int64 CmdBtlUnit_e7c3f0(__int64 a1, int a2, __int16 a3, float a4)
{

#pragma clang fp contract(off)
  bool v8;
  char v9;
  float v10;
  char v11;
  __int64 v12;
  __int64 v13;
  _QWORD v15[3];

  v8 = CmdBtlUnit_e7c280(a1);
  *(_WORD*)(a1 + 2LL * a2 + 368) = a3;
  v9 = v8 ^ CmdBtlUnit_e7c280(a1);
  if ((v9 & 1) != 0) {
    *(_BYTE*)(a1 + 191) = 1;
    if (!CmdBtlUnit_e7c4f0(a1)) {
      if (a4 <= 0x1.0000000000000p-23f) {
        v10 = 0x0.0p+0f;
        v12 = a1;
        v11 = 0;
      }
      else {
        v10 = a4;
        v11 = 1;
        v12 = a1;
      }
      CmdBtlUnit_e7c6f0(v12, v11, v10);
    }
    LOWORD(v15[0]) = 0;
    CmdBtlUnit_e7da80(a1, v15, -0x1.0000000000000p+0f);
    if ((v15[0] & 1) != 0 && v15[2] != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
    }
  }
  return v9 & 1;
}

bool CmdBtlUnit_e7c4f0(__int64 a1)
{
  _BOOL4 v1;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;

  v3 = *(_DWORD*)(a1 + 484);
  v4 = *(_QWORD*)(a1 + 320);
  if (v4 == 0) {
    goto LABEL_8;
  }
  v5 = std___1___shared_weak_count_lock(v4);
  if (v5 == 0) {
    goto LABEL_8;
  }
  v6 = *(_QWORD*)(a1 + 312);
  if (v6 != 0 && *(_DWORD*)(*(_QWORD*)v6 + 64LL) == 0) {
    if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
      v7 = 0;
      v1 = true;
    }
    else {
      if ((GameData_2216858 & 1) == 0) {
        goto LABEL_42;
      }
      v7 = 0;
      v1 = (GameData_2216820 & 8) == 0;
    }
  }
  else {
    v7 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (((v1 | v7) & 1) != 0) {
      goto LABEL_8;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak();
    if (((v1 | v7) & 1) != 0) {
    LABEL_8:
      if (CmdBtlUnit_e7c280(a1)) {
        v8 = -589947500;
      }
      else {
        v8 = 119788728;
      }
      if (v3 == v8) {
        return true;
      }
      goto LABEL_15;
    }
  }
  if (v3 == -1054720718) {
    return true;
  }
LABEL_15:
  v10 = *(_QWORD*)(a1 + 320);
  if (v10 == 0) {
    goto LABEL_22;
  }
  v5 = std___1___shared_weak_count_lock(v10);
  if (v5 == 0) {
    goto LABEL_22;
  }
  v11 = *(_QWORD*)(a1 + 312);
  if (v11 == 0 || *(_DWORD*)(*(_QWORD*)v11 + 64LL) != 0) {
    v12 = 1;
    goto LABEL_20;
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
    v12 = 0;
    v1 = true;
    goto LABEL_20;
  }
  if ((GameData_2216858 & 1) == 0) {
  LABEL_42:
    GameRoutine_8123d0(v5);
  }
  v12 = 0;
  v1 = (GameData_2216820 & 8) == 0;
LABEL_20:
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (((v1 | v12) & 1) != 0) {
      goto LABEL_22;
    }
  LABEL_35:
    v13 = 1669996436;
    return v3 == 0 || v3 == v13;
  }
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak();
  if (((v1 | v12) & 1) == 0) {
    goto LABEL_35;
  }
LABEL_22:
  if (CmdBtlUnit_e7c280(a1)) {
    v13 = -1101902990;
  }
  else {
    v13 = -574916402;
  }
  return v3 == 0 || v3 == v13;
}

void CmdBtlUnit_e7c6f0(__int64 a1, char a2, float a3)
{

#pragma clang fp contract(off)
  _BOOL4 v3;
  _BOOL4 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  char v12;
  int v13;
  unsigned int v14;
  char v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;

  if ((a2 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 320);
    if (v7 == 0) {
      goto LABEL_9;
    }
    v8 = std___1___shared_weak_count_lock(v7);
    if (v8 == 0) {
      goto LABEL_9;
    }
    v9 = *(_QWORD*)(a1 + 312);
    if (v9 == 0 || *(_DWORD*)(*(_QWORD*)v9 + 64LL) != 0) {
      v10 = 1;
      goto LABEL_7;
    }
    if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
      v10 = 0;
      v3 = true;
      goto LABEL_7;
    }
    if ((GameData_2216858 & 1) != 0) {
      v10 = 0;
      v3 = (GameData_2216820 & 8) == 0;
    LABEL_7:
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (((v3 | v10) & 1) != 0) {
          goto LABEL_9;
        }
      }
      else {
        v22 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt1(v22);
        if (((v3 | v10) & 1) != 0) {
        LABEL_9:
          if (CmdBtlUnit_e7c280(a1)) {
            v11 = -1101902990;
          }
          else {
            v11 = -574916402;
          }
        LABEL_12:
          v12 = 0;
          v13 = v11 & 0xFE;
          v14 = v11 & 0xFFFB7F00;
          v15 = 1;
          if ((*(_BYTE*)(a1 + 172) & 1) != 0) {
          LABEL_14:
            *(_DWORD*)(a1 + 136) = v14 | v13;
            *(_BYTE*)(a1 + 140) = v15;
            *(float*)(a1 + 144) = a3;
            *(_BYTE*)(a1 + 152) = 0;
            *(_BYTE*)(a1 + 156) = 0;
            *(_BYTE*)(a1 + 160) = 0;
            *(_BYTE*)(a1 + 148) = 1;
            *(_BYTE*)(a1 + 164) = 0;
            *(_BYTE*)(a1 + 168) = v12;
            CmdBtlUnit_e7ada0_alt1(a1);
            return;
          }
        LABEL_13:
          *(_BYTE*)(a1 + 172) = 1;
          goto LABEL_14;
        }
      }
      v11 = 1669996436;
      goto LABEL_12;
    }
  LABEL_41:
    GameRoutine_8123d0_alt1();
  }
  v16 = *(_DWORD*)(a1 + 484);
  v17 = *(_QWORD*)(a1 + 320);
  if (v17 != 0) {
    v18 = std___1___shared_weak_count_lock(v17);
    if (v18 != 0) {
      v19 = *(_QWORD*)(a1 + 312);
      if (v19 != 0 && *(_DWORD*)(*(_QWORD*)v19 + 64LL) == 0) {
        if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
          v20 = 0;
          v4 = true;
        }
        else {
          if ((GameData_2216858 & 1) == 0) {
            goto LABEL_41;
          }
          v20 = 0;
          v4 = (GameData_2216820 & 8) == 0;
        }
      }
      else {
        v20 = 1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (((v4 | v20) & 1) != 0) {
          goto LABEL_22;
        }
      LABEL_30:
        if (v16 == -1054720718) {
          return;
        }
      LABEL_31:
        v12 = 1;
        v15 = 0;
        v13 = 0;
        v14 = 0;
        if ((*(_BYTE*)(a1 + 172) & 1) != 0) {
          goto LABEL_14;
        }
        goto LABEL_13;
      }
      v23 = v18;
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak_alt1(v23);
      if (((v4 | v20) & 1) == 0) {
        goto LABEL_30;
      }
    }
  }
LABEL_22:
  if (CmdBtlUnit_e7c280(a1)) {
    v21 = -589947500;
  }
  else {
    v21 = 119788728;
  }
  if (v16 != v21) {
    goto LABEL_31;
  }
}

__int64 CmdBtlUnit_e7c980(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD v10[4];

  v3 = *(_QWORD*)(*(_QWORD*)(result + 16) + 440LL);
  if (v3 != 0 && (unsigned __int64)(v4 = *(unsigned __int8*)(v3 + 16)) <= 3) {
    v5 = GameData_1b018e8[v4];
  }
  else {
    v5 = 392;
  }
  if (*(_DWORD*)(GameData_2203490 + v5 + 672) <= 1u &&
      *(_DWORD*)(result + 200) == 0) {
    v10[2] = v1;
    v10[3] = v2;
    v6 = (_QWORD*)result;
    v10[0] = "MindLayer";
    v10[1] = 9;
    result = GameRoutine_ff7420(result + 344, v10);
    v7 = v6[27];
    v8 = v6[28];
    v9 = v6;
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v7 != 0) {
      *(_BYTE*)(v7 + 60) = v6[44] != v6[43];
    }
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      result = std___1___shared_weak_count___release_weak();
      v9 = v6;
    }
    *((_DWORD*)v9 + 50) = 1;
  }
  return result;
}

__int64 CmdBtlUnit_e7cbc0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  unsigned int v7;
  __int64 v8;

  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
  if (v1 != 0 && (unsigned __int64)(v2 = *(unsigned __int8*)(v1 + 16)) <= 3) {
    v3 = GameData_1b01768[v2];
  }
  else {
    v3 = 3;
  }
  v4 = GameData_2203490 + (v3 << 7);
  v5 = *(__int64**)(v4 + 712);
  v6 = *(__int64**)(v4 + 720);
  if (v5 == v6) {
    return 0;
  }
  v7 = 0;
  do {
    v8 = *v5;
    v5 += 2;
    if (v8 == a1) {
      break;
    }
    ++v7;
  } while (v5 != v6);
  return v7;
}

_QWORD* CmdBtlUnit_e7cc50(_QWORD* result)
{
  *(_WORD*)(result[2] + 20LL) |= 1u;
  if (result[53] == result[52]) {
    return (_QWORD*)UnitActor_81d740(result[2]);
  }
  return result;
}

_QWORD* game_cmdbtl_CmdBtlUnit_SetupLookToEnemy(_QWORD* result, __int64 a2,
                                                __int64 a3, __int64 a4)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  int v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD v30[4];
  _QWORD* v31;
  int v32;
  int v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;

  v4 = result[2];
  v5 = result;
  v34 = 0;
  v35 = nullptr;
  v6 = *(_QWORD*)(v4 + 440);
  if (v6 == 0) {
    v9 = GameData_2203490 + 672;
    v10 = (_QWORD*)(GameData_2203490 + 1056);
    v7 = 3;
    goto LABEL_19;
  }
  v7 = *(unsigned __int8*)(v6 + 16);
  if ((_DWORD)v7 != 0 && (_DWORD)v7 != 3) {
    if ((_DWORD)v7 == 1) {
      v10 = (_QWORD*)(GameData_2203490 + 672);
      v9 = GameData_2203490 + 672;
      goto LABEL_13;
    }
    v9 = GameData_2203490 + 672;
    v10 = (_QWORD*)(GameData_2203490 + 1056);
    if ((_DWORD)v7 == 0) {
      goto LABEL_19;
    }
  LABEL_16:
    if ((_DWORD)v7 == 3) {
      v7 = 2;
    }
    else {
      v7 = 3;
    }
    goto LABEL_19;
  }
  v9 = GameData_2203490 + 672;
  v10 = (_QWORD*)(GameData_2203490 + 800);
  if ((_DWORD)v7 != 1) {
    if ((_DWORD)v7 == 0) {
      goto LABEL_19;
    }
    goto LABEL_16;
  }
LABEL_13:
  if (*(int*)(v4 + 592) > 1) {
    return result;
  }
  v7 = 1;
LABEL_19:
  v11 = v9 + (v7 << 7);
  v12 = *(_QWORD*)(v11 + 88);
  if (v12 == 0) {
    goto LABEL_26;
  }
  v13 = *(_QWORD**)(v11 + 80);
  v14 = *(_QWORD*)(v11 + 88);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                            memory_order_relaxed);
  v15 = std___1___shared_weak_count_lock(v14);
  if (v15 != 0) {
    v16 = v5 == v13;
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    v16 = false;
  }
  result = (_QWORD*)std___1___shared_weak_count___release_weak();
  if (!v16) {
  LABEL_26:
    if (*((_DWORD*)v5 + 50) == 0) {
      v17 = *((_DWORD*)v5 + 32);
      v18 = (__int64*)v10[5];
      v19 = (__int64*)v10[6];
      v32 = 2139095039;
      v30[0] = GameData_1fe80f8;
      v30[1] = &v33;
      v30[2] = &v32;
      v30[3] = &v34;
      v31 = v30;
      v33 = v17;
      if (v18 == v19) {
        result = v30;
      }
      else {
        do {
          v36 = *v18;
          v20 = v18[1];
          v37 = v20;
          if (v20 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (v31 == nullptr) {
            GameRoutine_60a310(0, a2);
          }
          (*(void (**)(_QWORD*, __int64*))(*v31 + 48LL))(v31, &v36);
          v21 = v37;
          if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
            std___1___shared_weak_count___release_weak();
          }
          v18 += 2;
        } while (v18 != v19);
        result = v31;
        if (v31 != v30) {
          if (v31 != nullptr) {
            v24 = 40;
          LABEL_43:
            result =
                (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64, __int64))(
                    *result + v24))(result, a2, a3, a4);
          }
          v22 = v35;
          if (v35 == nullptr) {
            return result;
          }
          goto LABEL_45;
        }
      }
      v24 = 32;
      goto LABEL_43;
    }
  }
  v22 = (_QWORD*)v10[11];
  if (v22 == nullptr) {
    return result;
  }
  v23 = v10[10];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 2), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 2), 1u,
                            memory_order_relaxed);
  v34 = v23;
  v35 = v22;
  std___1___shared_weak_count___release_weak();
LABEL_45:
  v25 = std___1___shared_weak_count_lock(v22);
  if (v25 != 0) {
    v26 = v34;
    if (v34 != 0) {
      v27 = *(_QWORD*)(v34 + 216);
      if (v27 == 0 || *(_DWORD*)(v27 + 64) != 2) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                  memory_order_relaxed);
        v28 = v5[38];
        v5[37] = v26;
        v5[38] = v25;
        if (v28 != 0) {
          v29 = v25;
          std___1___shared_weak_count___release_weak();
          v25 = v29;
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak();
    }
  }
  result = v35;
  if (v35 != nullptr) {
    return (_QWORD*)std___1___shared_weak_count___release_weak();
  }
  return result;
}

__n128 CmdBtlUnit_e7d0a0(__int64 a1, char a2)
{
  char v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __n128 result;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  signed __int64 v12;
  char* v13;
  char* v14;
  char* v15;
  char* v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  signed __int64 v25;
  char* v26;
  char* v27;
  char* v28;
  char* v29;
  __int64 v30;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  signed __int64 v38;
  char* v39;
  char* v40;
  char* v41;
  char* v42;
  __int64 v43;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  char* v49;
  __int64 v50;
  signed __int64 v51;
  char* v52;
  char* v53;
  char* v54;
  char* v55;
  __int64 v56;
  __int64 v58;
  struct {
    __int64 v59;
    signed __int64 v60;
    char* v61;
  } v59_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = a2 & 1;
  if (*(_BYTE*)(a1 + 187) == (a2 & 1)) {
    return result;
  }
  v3 = *(_QWORD**)(a1 + 208);
  *(_BYTE*)(a1 + 187) = v2;
  if (v3 == nullptr) {
    return result;
  }
  v4 = v3[54];
  if (v4 != 0) {
    *(_BYTE*)(v4 + 289) = v2;
  }
  v5 = v3[55];
  if (v5 != 0) {
    *(_BYTE*)(v5 + 289) = v2;
  }
  v6 = v3[59];
  if (v6 != 0) {
    v7 = strlen(v6 + 16),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_132;
    }
    v9 = v7;
    if (v7 >= 0x17) {
      if ((v7 | 7) == 0x17) {
        v11 = 26;
      }
      else {
        v11 = (v7 | 7) + 1;
      }
      v10 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       v11, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v59_.v60 = v9;
      v59_.v61 = v10;
      v59_.v59 = v11 | 1;
    }
    else {
      v10 = (char*)&v59_.v59 + 1;
      LOBYTE(v59_.v59) = 2 * v7;
      if (v7 == 0) {
        goto LABEL_17;
      }
    }
    memmove(v10, v6 + 16, v9),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_17:
    v10[v9] = 0;
    v12 = v59_.v60;
    v13 = v59_.v61;
    if ((v59_.v59 & 1) != 0) {
      v14 = v59_.v61;
    }
    else {
      v14 = (char*)&v59_.v59 + 1;
    }
    if ((v59_.v59 & 1) == 0) {
      v12 = (unsigned __int64)(unsigned __int8)v59_.v59 >> 1;
    }
    if (v12 >= 9) {
      v15 = &v14[v12];
      v16 = v14;
      do {
        v17 = memchr(v16, 227, v12 - 8),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v17 == 0) {
          break;
        }
        if (*(_QWORD*)v17 == 0x533AAF82E3A282E3LL && *(_BYTE*)(v17 + 8) == 95) {
          if ((char*)v17 == v14) {
            *(_BYTE*)(v3[59] + 289LL) = v2;
          }
          break;
        }
        v16 = (char*)(v17 + 1);
        v12 = v15 - v16;
      } while (v15 - v16 >= 9);
    }
    if ((v59_.v59 & 1) != 0 && v13 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
    }
  }
  v20 = v3[60];
  if (v20 == 0) {
    goto LABEL_69;
  }
  v21 = strlen(v20 + 16),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v21 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_132;
  }
  v22 = v21;
  if (v21 >= 0x17) {
    if ((v21 | 7) == 0x17) {
      v24 = 26;
    }
    else {
      v24 = (v21 | 7) + 1;
    }
    v23 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v24, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v59_.v60 = v22;
    v59_.v61 = v23;
    v59_.v59 = v24 | 1;
  }
  else {
    v23 = (char*)&v59_.v59 + 1;
    LOBYTE(v59_.v59) = 2 * v21;
    if (v21 == 0) {
      goto LABEL_48;
    }
  }
  memmove(v23, v20 + 16, v22),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_48:
  v23[v22] = 0;
  v25 = v59_.v60;
  v26 = v59_.v61;
  if ((v59_.v59 & 1) != 0) {
    v27 = v59_.v61;
  }
  else {
    v27 = (char*)&v59_.v59 + 1;
  }
  if ((v59_.v59 & 1) == 0) {
    v25 = (unsigned __int64)(unsigned __int8)v59_.v59 >> 1;
  }
  if (v25 >= 9) {
    v28 = &v27[v25];
    v29 = v27;
    do {
      v30 = memchr(v29, 227, v25 - 8),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v30 == 0) {
        break;
      }
      if (*(_QWORD*)v30 == 0x533AAF82E3A282E3LL && *(_BYTE*)(v30 + 8) == 95) {
        if ((char*)v30 == v27) {
          *(_BYTE*)(v3[60] + 289LL) = v2;
        }
        break;
      }
      v29 = (char*)(v30 + 1);
      v25 = v28 - v29;
    } while (v28 - v29 >= 9);
  }
  if ((v59_.v59 & 1) != 0 && v26 != nullptr) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
  }
LABEL_69:
  v33 = v3[61];
  if (v33 == 0) {
    goto LABEL_100;
  }
  v34 = strlen(v33 + 16),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v34 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_132;
  }
  v35 = v34;
  if (v34 >= 0x17) {
    if ((v34 | 7) == 0x17) {
      v37 = 26;
    }
    else {
      v37 = (v34 | 7) + 1;
    }
    v36 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v37, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v59_.v60 = v35;
    v59_.v61 = v36;
    v59_.v59 = v37 | 1;
  }
  else {
    v36 = (char*)&v59_.v59 + 1;
    LOBYTE(v59_.v59) = 2 * v34;
    if (v34 == 0) {
      goto LABEL_79;
    }
  }
  memmove(v36, v33 + 16, v35),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_79:
  v36[v35] = 0;
  v38 = v59_.v60;
  v39 = v59_.v61;
  if ((v59_.v59 & 1) != 0) {
    v40 = v59_.v61;
  }
  else {
    v40 = (char*)&v59_.v59 + 1;
  }
  if ((v59_.v59 & 1) == 0) {
    v38 = (unsigned __int64)(unsigned __int8)v59_.v59 >> 1;
  }
  if (v38 >= 9) {
    v41 = &v40[v38];
    v42 = v40;
    do {
      v43 = memchr(v42, 227, v38 - 8),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v43 == 0) {
        break;
      }
      if (*(_QWORD*)v43 == 0x533AAF82E3A282E3LL && *(_BYTE*)(v43 + 8) == 95) {
        if ((char*)v43 == v40) {
          *(_BYTE*)(v3[61] + 289LL) = v2;
        }
        break;
      }
      v42 = (char*)(v43 + 1);
      v38 = v41 - v42;
    } while (v41 - v42 >= 9);
  }
  if ((v59_.v59 & 1) != 0 && v39 != nullptr) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v45 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v45);
  }
LABEL_100:
  v46 = v3[62];
  if (v46 == 0) {
    return result;
  }
  v47 = strlen(v46 + 16),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v47 > 0xFFFFFFFFFFFFFFF6LL) {
  LABEL_132:
    String_60a1d0(), result = COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v48 = v47;
  if (v47 >= 0x17) {
    if ((v47 | 7) == 0x17) {
      v50 = 26;
    }
    else {
      v50 = (v47 | 7) + 1;
    }
    v49 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v50, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v59_.v60 = v48;
    v59_.v61 = v49;
    v59_.v59 = v50 | 1;
  }
  else {
    v49 = (char*)&v59_.v59 + 1;
    LOBYTE(v59_.v59) = 2 * v47;
    if (v47 == 0) {
      goto LABEL_110;
    }
  }
  memmove(v49, v46 + 16, v48),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_110:
  v49[v48] = 0;
  v51 = v59_.v60;
  v52 = v59_.v61;
  if ((v59_.v59 & 1) != 0) {
    v53 = v59_.v61;
  }
  else {
    v53 = (char*)&v59_.v59 + 1;
  }
  if ((v59_.v59 & 1) == 0) {
    v51 = (unsigned __int64)(unsigned __int8)v59_.v59 >> 1;
  }
  if (v51 >= 9) {
    v54 = &v53[v51];
    v55 = v53;
    do {
      v56 = memchr(v55, 227, v51 - 8),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v56 == 0) {
        break;
      }
      if (*(_QWORD*)v56 == 0x533AAF82E3A282E3LL && *(_BYTE*)(v56 + 8) == 95) {
        if ((char*)v56 == v53) {
          *(_BYTE*)(v3[62] + 289LL) = v2;
        }
        break;
      }
      v55 = (char*)(v56 + 1);
      v51 = v54 - v55;
    } while (v54 - v55 >= 9);
  }
  if ((v59_.v59 & 1) != 0 && v52 != nullptr) {
    v58 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v58 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v58);
  }
  return result;
}

__int64 CmdBtlUnit_e7d620(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = result;
  v2 = *(_QWORD*)(*(_QWORD*)(result + 16) + 440LL);
  if (v2 != 0 && (unsigned __int64)(v3 = *(unsigned __int8*)(v2 + 16)) <= 3) {
    v4 = GameData_1b018e8[v3];
  }
  else {
    v4 = 392;
  }
  v5 = GameData_2203490 + 672 +
       ((__int64)*(int*)(GameData_2203490 + 672 + v4) << 7);
  v6 = *(_QWORD*)(v5 + 88);
  if (v6 != 0) {
    v7 = *(_QWORD*)(v5 + 80);
    v8 = *(_QWORD*)(v5 + 88);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak();
      }
      result = std___1___shared_weak_count___release_weak();
      if (v7 != 0 && (*(_DWORD*)(v5 + 24) != 0 || *(_DWORD*)(v5 + 12) != 0)) {
        result = CmdBtlUnit_e7c4f0(v1);
        if ((result & 1) == 0) {
          return GameRoutine_e7c6f0(v1, 1, 0.5);
        }
      }
    }
    else {
      return std___1___shared_weak_count___release_weak();
    }
  }
  return result;
}

float CmdBtlUnit_e7d750(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  float v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned int v11;

  v1 = a1[26];
  if (v1 != 0) {
    v3 = *(_QWORD*)(v1 + 392);
    v4 = *(_QWORD*)(v1 + 400);
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v3 != 0) {
      v5 = *(float*)(*(_QWORD*)(v3 + 11792) + 36LL) *
           (float)(*(float*)(v3 + 32) *
                   (float)(*(float*)(v3 + 40) +
                           (float)((float)(1.0 - *(float*)(v3 + 40)) *
                                   *(float*)(v1 + 336))));
      if (v4 == 0) {
        goto LABEL_11;
      }
    }
    else {
      v5 = 1.0;
      if (v4 == 0) {
        goto LABEL_11;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    v5 = 1.0;
  }
LABEL_11:
  v6 = a1[40];
  v7 = 0.0;
  if (v6 != 0) {
    v8 = std___1___shared_weak_count_lock(v6);
    if (v8 != 0) {
      v9 = a1[39];
      if (v9 != 0) {
        v10 = *(unsigned __int8**)(v9 + 8);
        if (v10 != nullptr) {
          v11 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                          64) +
                                               8LL * *v10) +
                                    32LL) -
                1;
          if (v11 <= 4) {
            v7 = GameData_1b92038[(unsigned __int8)v11];
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak();
      }
    }
  }
  return v5 + v7;
}

void CmdBtlUnit_e7d890(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  _BOOL4 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64* v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  __int64 v14;

  *(_WORD*)(*(_QWORD*)(a1 + 16) + 20LL) |= 1u;
  if (*(_QWORD*)(a1 + 424) == *(_QWORD*)(a1 + 416)) {
    GameHr_81d740(*(_QWORD*)(a1 + 16), a2);
    v4 = *(_QWORD*)(a1 + 320);
    if (v4 == 0) {
      goto LABEL_11;
    }
  LABEL_5:
    v5 = std___1___shared_weak_count_lock_alt1(v4);
    if (v5 == 0) {
      goto LABEL_11;
    }
    v6 = *(_QWORD*)(a1 + 312);
    if (v6 != 0 && *(_DWORD*)(*(_QWORD*)v6 + 64LL) == 0) {
      if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
        v7 = 0;
        v2 = true;
      }
      else {
        if ((GameData_2216858 & 1) == 0) {
          GameRoutine_8123d0_alt1();
        }
        v7 = 0;
        v2 = (GameData_2216820 & 8) == 0;
      }
    }
    else {
      v7 = 1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (((v2 | v7) & 1) != 0) {
        goto LABEL_11;
      }
    }
    else {
      v14 = v5;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak_alt2(v14);
      if (((v2 | v7) & 1) != 0) {
        goto LABEL_11;
      }
    }
    v8 = 1669996436;
    goto LABEL_14;
  }
  v4 = *(_QWORD*)(a1 + 320);
  if (v4 != 0) {
    goto LABEL_5;
  }
LABEL_11:
  if (CmdBtlUnit_e7c280(a1)) {
    v8 = -1101902990;
  }
  else {
    v8 = -574916402;
  }
LABEL_14:
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v9 = game_map_MapRandom_instance__ptr[0];
  v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((_UNKNOWN**)0x8LL));
  v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v12 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
        (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v9 + 1) = v10;
  v13 = (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9) = v11;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 4) = v13;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  if ((*(_BYTE*)(a1 + 172) & 1) == 0) {
    *(_BYTE*)(a1 + 172) = 1;
  }
  *(_DWORD*)(a1 + 136) = v8;
  *(_BYTE*)(a1 + 152) = 0;
  *(_BYTE*)(a1 + 156) = 0;
  *(_BYTE*)(a1 + 168) = 0;
  *(_DWORD*)(a1 + 144) = 1028443341;
  *(_BYTE*)(a1 + 140) = 1;
  *(_BYTE*)(a1 + 148) = 1;
  *(_BYTE*)(a1 + 164) = 1;
  *(float*)(a1 + 160) =
      (float)((float)((float)(unsigned __int16)v13 / 0x1.fffe000000000p+15f) *
              0x1.99999a0000000p-3f) +
      0x1.99999a0000000p-2f;
  CmdBtlUnit_e7ada0(a1);
}

__int64 CmdBtlUnit_e7da80(__int64 a1, _QWORD* a2, float a3)
{
  _QWORD* v5;
  __int64 v6;
  __int64 result;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _WORD* v18;
  __int64 v19;
  int v20;
  __int16 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  if (*(_BYTE*)(a1 + 520) == 1) {
    if ((*(_BYTE*)(a1 + 488) & 1) != 0 && *(_QWORD*)(a1 + 504) != 0) {
      v5 = a2;
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, *(_QWORD*)(a1 + 504));
      a2 = v5;
    }
    *(_BYTE*)(a1 + 520) = 0;
  }
  result = a1 + 376;
  *(_BYTE*)(a1 + 191) = 0;
  if ((_QWORD*)(a1 + 376) != a2) {
    v8 = *(unsigned __int8*)a2;
    if ((*(_BYTE*)result & 1) != 0) {
      v11 = a2[1];
      v12 = (v8 & 1) == 0;
      v13 = v8 >> 1;
      if (v12) {
        v14 = (char*)a2 + 1;
      }
      else {
        v14 = (char*)a2[2];
      }
      if (v12) {
        v15 = v13;
      }
      else {
        v15 = v11;
      }
      result = SpineModel_64dde0(result, v14, v15);
    }
    else if ((v8 & 1) != 0) {
      result = GameRoutine_64df20(result, a2[2], a2[1]);
    }
    else {
      v9 = *a2;
      v10 = a2[2];
      *(_QWORD*)(a1 + 384) = a2[1];
      *(_QWORD*)(a1 + 392) = v10;
      *(_QWORD*)result = v9;
    }
  }
  v16 = *(unsigned __int8*)(a1 + 376);
  if ((v16 & 1) != 0) {
    v17 = *(_QWORD*)(a1 + 384);
  }
  else {
    v17 = v16 >> 1;
  }
  if (v17 == 0) {
    result = CmdBtlUnit_e7c280_alt1(a1);
    v18 = &GameData_1abbaec;
    if ((result & 1) != 0) {
      v18 = &GameData_1aa1728;
    }
    if ((*(_BYTE*)(a1 + 376) & 1) != 0) {
      *(_QWORD*)(a1 + 384) = 6;
      v19 = *(_QWORD*)(a1 + 392);
    }
    else {
      *(_BYTE*)(a1 + 376) = 12;
      v19 = a1 + 377;
    }
    v20 = *(_DWORD*)v18;
    v21 = v18[2];
    *(_BYTE*)(v19 + 6) = 0;
    *(_DWORD*)v19 = v20;
    *(_WORD*)(v19 + 4) = v21;
  }
  v22 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 88LL);
  if (v22 != 0) {
    v23 = *(_QWORD*)(v22 + 32);
    v24 = (*(_BYTE*)(a1 + 376) & 1) != 0 ? *(_QWORD*)(a1 + 392) : a1 + 377;
    if (v23 != 0) {
      v25 = *(_QWORD*)(v23 + 8);
      v26 = *(_QWORD*)(v22 + 40);
      if (v25 != -1 && v26 != 0) {
        v29 = *(_QWORD*)(v26 + 392);
        v28 = *(_QWORD*)(v26 + 400);
        if (v28 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v30 = v24;
            (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
            std___1___shared_weak_count___release_weak_alt1(v28);
            v24 = v30;
          }
        }
        result = GameRoutine_10adb80(v29 + 1432, v24);
        if ((result & 0x80000000) == 0) {
          return GameRoutine_10b2280(v22, (unsigned int)result, a3);
        }
      }
    }
  }
  return result;
}

__int64 CmdBtlUnit_e7dc80(__int64 result, _QWORD* a2)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;

  if (*(_BYTE*)(result + 32) == 1) {
    if ((_QWORD*)result != a2) {
      v3 = *(unsigned __int8*)a2;
      if ((*(_BYTE*)result & 1) != 0) {
        v9 = (v3 & 1) == 0;
        v10 = v3 >> 1;
        v11 = result;
        if (v9) {
          v12 = (char*)a2 + 1;
        }
        else {
          v12 = (char*)a2[2];
        }
        if (v9) {
          v13 = v10;
        }
        else {
          v13 = a2[1];
        }
        SpineModel_64dde0(result, v12, v13);
      }
      else {
        if ((v3 & 1) == 0) {
          v4 = *a2;
          v5 = a2[2];
          *(_QWORD*)(result + 8) = a2[1];
          *(_QWORD*)(result + 16) = v5;
          *(_QWORD*)result = v4;
          goto LABEL_19;
        }
        v11 = result;
        GameRoutine_64df20(result, a2[2], a2[1]);
      }
      result = v11;
    }
  LABEL_19:
    *(_QWORD*)(result + 24) = a2[3];
    return result;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v8 = result;
    fw_text_String_CopyTerminated(result, a2[2], a2[1]);
    result = v8;
  }
  else {
    v6 = *a2;
    v7 = a2[2];
    *(_QWORD*)(result + 8) = a2[1];
    *(_QWORD*)(result + 16) = v7;
    *(_QWORD*)result = v6;
  }
  *(_QWORD*)(result + 24) = a2[3];
  *(_BYTE*)(result + 32) = 1;
  return result;
}

__attribute__((swiftcall)) void CmdBtlUnit_e7dd50(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  struct {
    __int64 v10;
    int v11;
  } v10_;

  *(_QWORD*)a3 = 0;
  *(_DWORD*)(a3 + 8) = 0x2000;
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 136LL);
  if (v5 != 0) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      v6 = *(_QWORD*)(a2 + 16);
    }
    else {
      v6 = a2 + 1;
    }
    if (GameData_21ec7b0 != 0 && (v7 = *(_QWORD*)(GameData_21ec7b0 + 8)) != 0 &&
            (*(_BYTE*)(v7 + 113) & 0x80) != 0 ||
        (snd_isActive_100100_alt1((__int64*)(v5 + 104)) & 1) != 0) {
      v10_.v10 = 0;
      v10_.v11 = 0x2000;
    }
    else {
      CharacterSound_1095750_alt1((void*)((__int64)&v10_.v10), v5,
                                  "V_AV_<VoiceID>_<Arg>", v6,
                                  0x1.0000000000000p+0f);
      GameRoutine_112180_alt1(v5 + 104, (__int64)&v10_.v10);
      v10_.v10 = 0;
      v10_.v11 = 0x2000;
      GameRoutine_112180_alt1((__int64)&v10_.v10, v5 + 104);
    }
    GameRoutine_112180_alt1(a3, (__int64)&v10_.v10);
  }
  result = snd_fnd_WeakHandle_isValid_alt1((__int64*)a3);
  if ((result & 1) != 0) {
    v9 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 88LL);
    if (v9 != 0 && *(_DWORD*)(v9 + 96) <= 1u) {
      GameRoutine_112180_alt1(v9 + 320, a3);
      {
        GameRoutine_a19f00_alt1(v9 + 272, v9 + 320);
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void CmdBtlUnit_e7de70(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a3 = 0;
  *(_DWORD*)(a3 + 8) = 0x2000;
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 136LL);
  if (v5 != 0) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      v6 = *(_QWORD*)(a2 + 16);
    }
    else {
      v6 = a2 + 1;
    }
    CharacterSound_1095750(v5, v6, 0, 1.0f);
    GameRoutine_112180(a3, &v9);
  }
  result = snd_fnd_WeakHandle_isValid(a3);
  if ((result & 1) != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 88LL);
    if (v8 != 0 && *(_DWORD*)(v8 + 96) <= 1u) {
      GameRoutine_112180(v8 + 320, a3);
      {
        GameRoutine_a19f00(v8 + 272, v8 + 320);
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

__int64 CmdBtlUnit_e7df20(__int64 result, char a2, float a3)
{
  bool v3;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  char v17;

  if ((*(_BYTE*)(result + 189) & 1) != 0) {
    return result;
  }
  *(float*)(result + 192) = a3;
  *(_BYTE*)(result + 189) = 1;
  v5 = *(_QWORD*)(result + 320);
  if ((a2 & 1) == 0) {
    v6 = 869686455;
    if (v5 == 0) {
      goto LABEL_27;
    }
    v12 = result;
    v13 = std___1___shared_weak_count_lock(*(_QWORD*)(result + 320));
    if (v13 == 0) {
      v5 = 0;
      result = v12;
      goto LABEL_27;
    }
    v14 = *(_QWORD*)(v12 + 312);
    v15 = v13;
    result = v12;
    if (v14 != 0 && *(_DWORD*)(*(_QWORD*)v14 + 64LL) == 0) {
      if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
        v3 = false;
        v16 = 0;
      }
      else {
        if ((GameData_2216858 & 1) == 0) {
          goto LABEL_40;
        }
        v16 = 0;
        v3 = (GameData_2216820 & 8) != 0;
      }
    }
    else {
      v16 = 1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak();
      result = v12;
    }
    v5 = 0;
    if ((v16 & 1) == 0) {
      if (v3) {
        v6 = -304822991;
      }
      else {
        v6 = 869686455;
      }
    }
    goto LABEL_27;
  }
  v6 = -1080537169;
  if (v5 == 0) {
    goto LABEL_13;
  }
  v7 = result;
  v8 = std___1___shared_weak_count_lock(*(_QWORD*)(result + 320));
  if (v8 == 0) {
    v5 = 0x100000000LL;
    result = v7;
    goto LABEL_27;
  }
  v9 = *(_QWORD*)(v7 + 312);
  v10 = v8;
  result = v7;
  if (v9 == 0 || *(_DWORD*)(*(_QWORD*)v9 + 64LL) != 0) {
    v11 = 1;
    goto LABEL_8;
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
    v3 = false;
    v11 = 0;
    goto LABEL_8;
  }
  if ((GameData_2216858 & 1) == 0) {
  LABEL_40:
    GameRoutine_8123d0(result);
  }
  v11 = 0;
  v3 = (GameData_2216820 & 8) != 0;
LABEL_8:
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v11 & 1) == 0) {
      goto LABEL_10;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak();
    result = v7;
    if ((v11 & 1) == 0) {
    LABEL_10:
      if (v3) {
        v6 = -1672613899;
      }
      else {
        v6 = -1080537169;
      }
    }
  }
LABEL_13:
  v5 = 0x100000000LL;
LABEL_27:
  v17 = *(_BYTE*)(result + 172);
  *(_BYTE*)(result + 184) = 0;
  if ((v17 & 1) == 0) {
    *(_BYTE*)(result + 172) = 1;
  }
  *(_DWORD*)(result + 144) = v5;
  *(_DWORD*)(result + 136) = v6;
  *(_BYTE*)(result + 152) = 0;
  *(_BYTE*)(result + 156) = 0;
  *(_BYTE*)(result + 160) = 0;
  *(_BYTE*)(result + 164) = 0;
  *(_BYTE*)(result + 140) = 1;
  *(_BYTE*)(result + 148) = BYTE4(v5);
  *(_BYTE*)(result + 168) = a2 & 1;
  CmdBtlUnit_e7ada0_alt3(result);
  return CmdbtlPartyNatives_e9cce0(GameData_2203490);
}

__int64 CmdBtlUnit_e7e180(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  struct {
    __int64 v24;
    __int64 v25;
  } v24_;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
  if (v3 != 0 && (unsigned __int64)(v4 = *(unsigned __int8*)(v3 + 16)) <= 3) {
    v5 = GameData_1b018e8[v4];
  }
  else {
    v5 = 392;
  }
  if (*(_DWORD*)(GameData_2203490 + 672 + v5) == 0) {
    if (v3 != 0 && (unsigned __int64)(v7 = *(unsigned __int8*)(v3 + 16)) <= 3) {
      v8 = GameData_1b01768[v7];
    }
    else {
      v8 = 3;
    }
    v9 = GameData_2203490 + 672 + (v8 << 7);
    v10 = *(__int64**)(v9 + 40);
    v11 = *(__int64**)(v9 + 48);
    if (v10 == v11) {
      goto LABEL_14;
    }
    while (1) {
      v12 = *v10;
      if (*v10 == a1) {
        break;
      }
      v10 += 2;
      if (v10 == v11) {
        goto LABEL_14;
      }
    }
    v13 = v10[1];
    if (v13 == 0) {
      goto LABEL_15;
    }
    v16 = v10[1];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
    v17 = std___1___shared_weak_count_lock_alt1(v16);
    std___1___shared_weak_count___release_weak_alt2(v13);
    if (v17 == 0) {
    LABEL_14:
      LOBYTE(v13) = 0;
    }
    else {
      v18 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
      if (v18 != 0 &&
          (unsigned __int64)(v19 = *(unsigned __int8*)(v18 + 16)) <= 3) {
        v20 = GameData_1b01768[v19];
      }
      else {
        v20 = 3;
      }
      v24_.v24 = v12;
      v24_.v25 = v17;
      v21 = GameData_2203490 + (v20 << 7);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                memory_order_relaxed);
      v22 = CmdBtlParty_e774a0(v21 + 672, &v24_.v24);
      v23 = v24_.v25;
      LOBYTE(v13) = v22;
      if (v24_.v25 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v24_.v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak_alt2(v23);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak_alt2(v17);
      }
    }
  LABEL_15:
    v6 = v13 ^ 1;
    return v6 & 1;
  }
  v6 = 0;
  return v6 & 1;
}

__attribute__((swiftcall)) void CmdBtlUnit_e7e340(PSEUDO_X8 x8_, __int64 result,
                                                  int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _WORD* v7;
  __int64 i;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  int v17;
  __int64 v18;

  switch (a2) {
  case 2:
    v15_.v15[0] = GameData_1fe82c8;
    v15_.v15[1] = result;
    v15_.v16 = v15_.v15;
    v9 = game_cmdbtl_CmdBtlUnit_FindLinkItem(result, (__int64)v15_.v15);
    result = (__int64)v15_.v16;
    if (v15_.v16 == v15_.v15) {
      v10 = 32;
    }
    else {
      if (v15_.v16 == nullptr) {
      LABEL_20:
        if (v9 == 0) {
          break;
        }
        v12 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
        v12[1] = 0;
        v12[2] = 0;
        *v12 = GameData_1fe8178;
        v13 = 2;
      LABEL_30:
        a3[1] = (__int64)v12;
        v12[4] = v9;
        v12[3] = v13;
        result = (__int64)(v12 + 3);
        *a3 = result;
        {
          result;
          return;
        }
      }
      v10 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v15_.v16 + v10))((__int64)v15_.v16);
    goto LABEL_20;
  case 1:
    v6 = *(_QWORD*)(result + 16);
    v18 = 0;
    v17 = 0;
    v15_.v15[0] = GameData_1fe8248;
    v15_.v15[1] = &v18;
    v15_.v15[2] = &v17;
    v15_.v15[3] = result;
    v15_.v16 = v15_.v15;
    game_UnitItemList_EachItem_alt1((_WORD*)(v6 + 828), (__int64)v15_.v15);
    v7 = (_WORD*)(v6 + 876);
    for (i = 24; i != 0; --i) {
      if (*v7 != 0) {
        if (v15_.v16 == nullptr) {
          GameRoutine_60a310_alt1();
        }
        (*(void (**)(_QWORD*, _WORD*))(*v15_.v16 + 48LL))(v15_.v16, v7);
      }
      v7 += 4;
    }
    result = (__int64)v15_.v16;
    if (v15_.v16 == v15_.v15) {
      v11 = 32;
    }
    else {
      if (v15_.v16 == nullptr) {
      LABEL_28:
        v9 = v18;
        if (v18 == 0) {
          break;
        }
        v12 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
        v12[1] = 0;
        v12[2] = 0;
        *v12 = GameData_1fe8178;
        v13 = 1;
        goto LABEL_30;
      }
      v11 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v15_.v16 + v11))((__int64)v15_.v16);
    goto LABEL_28;
  case 0:
    v15_.v15[0] = GameData_1fe82c8;
    v15_.v15[1] = result;
    v15_.v16 = v15_.v15;
    v4 = game_cmdbtl_CmdBtlUnit_FindLinkItem(result, (__int64)v15_.v15);
    result = (__int64)v15_.v16;
    if (v15_.v16 == v15_.v15) {
      v5 = 32;
    }
    else {
      if (v15_.v16 == nullptr) {
        goto LABEL_24;
      }
      v5 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v15_.v16 + v5))((__int64)v15_.v16);
  LABEL_24:
    if (v4 != 0) {
      v14 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      v14[1] = 0;
      v14[2] = 0;
      a3[1] = (__int64)v14;
      v14[4] = v4;
      *v14 = GameData_1fe8178;
      v14[3] = 0;
      result = (__int64)(v14 + 3);
      *a3 = result;
      {
        result;
        return;
      }
    }
    break;
  default:
    break;
  }
  *a3 = 0;
  a3[1] = 0;
  {
    result;
    return;
  }
}

__int64 game_cmdbtl_CmdBtlUnit_FindLinkItem(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  _QWORD* v5;
  _QWORD* v6;
  _WORD* v7;
  __int64 i;
  __int64 v9;
  struct {
    _BYTE v11[32];
    _BYTE* v12;
  } v11_;
  struct {
    char v13[32];
    _QWORD* v14;
  } v13_;
  __int64 v15;

  v2 = *(_QWORD*)(a1 + 16);
  v3 = *(_QWORD*)(a2 + 32);
  v15 = 0;
  if (v3 != 0) {
    if (v3 == a2) {
      v11_.v12 = v11_.v11;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v3 + 24LL))(v3, v11_.v11);
      v4 = v11_.v12;
    }
    else {
      v4 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      v11_.v12 = v4;
    }
  }
  else {
    v4 = nullptr;
    v11_.v12 = nullptr;
  }
  v5 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v6 = v5;
  v5[2] = &v15;
  *v5 = GameData_1fe81c8;
  if (v4 != nullptr) {
    if (v4 == v11_.v11) {
      v5[8] = v5 + 4;
      (*(void (**)(_BYTE*))(*(_QWORD*)v4 + 24LL))(v4);
    }
    else {
      v5[8] = v4;
      v11_.v12 = nullptr;
    }
  }
  else {
    v5[8] = 0;
  }
  v13_.v14 = v6;
  game_UnitItemList_EachItem_alt1((_WORD*)(v2 + 828), (__int64)v13_.v13);
  v7 = (_WORD*)(v2 + 876);
  for (i = 24; i != 0; --i) {
    if (*v7 != 0) {
      (*(void (**)(_QWORD*, _WORD*))(*v6 + 48LL))(v6, v7);
    }
    v7 += 4;
  }
  (*(void (**)(_QWORD*))(*v6 + 40LL))(v6);
  if (v11_.v12 == v11_.v11) {
    v9 = 32;
    goto LABEL_19;
  }
  if (v11_.v12 != nullptr) {
    v9 = 40;
  LABEL_19:
    (*(void (**)(__int64))(*(_QWORD*)v11_.v12 + v9))((__int64)v11_.v12);
  }
  return v15;
}

__int64 CmdBtlUnit_e7e730(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  _QWORD v11[2];
  int v12;

  v2 = (_QWORD*)a1[32];
  if ((unsigned __int64)v2 >= a1[33]) {
    v7 = Manager_66cc20(a1 + 31, a2);
  }
  else if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(a1[32], a2[2], a2[1]);
    v7 = (__int64)(v2 + 3);
  }
  else {
    v5 = *a2;
    v6 = a2[2];
    v7 = (__int64)(v2 + 3);
    v2[1] = a2[1];
    v2[2] = v6;
    *v2 = v5;
  }
  a1[32] = v7;
  v8 = a1[2];
  v12 = 0;
  if ((*(_BYTE*)a2 & 1) != 0) {
    v9 = (char*)a2[2];
  }
  else {
    v9 = (char*)a2 + 1;
  }
  v11[1] = v9;
  v11[0] = game_HashString(v9);
  GameRoutine_842b40(&v12, v11);
  return Unit_6ca760(v8, &v12);
}

__int64 CmdBtlUnit_e7e800(__int64 result)
{
  char* v1;
  char* v2;
  _QWORD* v3;
  char v4;
  char* v5;
  __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  char v10;
  __int64 v11;
  _QWORD v12[2];
  int v13;

  v1 = *(char**)(result + 248);
  v2 = *(char**)(result + 256);
  v3 = (_QWORD*)result;
  if (v1 != v2) {
    do {
      v4 = *v1;
      v5 = *((char**)v1 + 2);
      v6 = v3[2];
      v13 = 0;
      if ((v4 & 1) != 0) {
        v7 = v5;
      }
      else {
        v7 = v1 + 1;
      }
      v12[1] = v7;
      v12[0] = game_HashString(v7);
      GameRoutine_842b40(&v13, v12);
      result = Unit_6cb080(v6, &v13);
      v1 += 24;
    } while (v1 != v2);
    v1 = (char*)v3[31];
    v2 = (char*)v3[32];
  }
  if (v1 != v2) {
    v8 = v2;
    v9 = fw_memory_g_heap_manager_ptr;
    do {
      v10 = *(v8 - 24);
      v8 -= 24;
      if ((v10 & 1) != 0 && *((_QWORD*)v2 - 1) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v11);
      }
      v2 = v8;
    } while (v8 != v1);
  }
  v3[32] = v1;
  return result;
}

__int64 game_cmdbtl_CmdBtlUnit_CreateCharacter_lambda2_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  result = GameRoutine_e7a740(v2, *a2);
  *(_DWORD*)(v2 + 444) = 0;
  return result;
}

__n128 game_cmdbtl_CmdBtlUnit_SetupLookToEnemy_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  float v4;
  __n128 result;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = vabds_f32(**(float**)(a1 + 8), *(float*)(v2 + 128));
  PSEUDO_LOW_LANE128(result, n128_u32, **(_DWORD**)(a1 + 16));
  if (v4 < LANES128(result).n128_f32[0]) {
    v6 = *(_QWORD**)(a1 + 24);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
    }
    v7 = v6[1];
    *v6 = v2;
    v6[1] = v3;
    if (v7 != 0) {
      v8 = a1;
      result = std___1___shared_weak_count___release_weak_alt1(v7);
      a1 = v8;
    }
    **(float**)(a1 + 16) = v4;
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak_alt1(v3);
  }
  return result;
}

__int64 game_cmdbtl_CmdBtlUnit_FindLinkItem_lambda0_Invoke(__int64 a1,
                                                           __int64 a2)
{
  __int64 v3;
  __int64 result;

  v3 = *(_QWORD*)(a1 + 64);
  if (v3 == 0) {
    GameRoutine_60a310(0, a2);
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
  if ((result & 1) != 0 && (*(_BYTE*)(a2 + 3) & 1) != 0) {
    **(_QWORD**)(a1 + 16) = a2;
  }
  return result;
}

__int64

game_cmdbtl_CmdBtlUnit_GetLinkItem_Heal_lambda0_Invoke(__int64 a1,
                                                       unsigned __int16* a2)
{
  __int64 result;
  _BYTE* v5;
  int v6;

  result = GameRoutine_6e8e50(a2, *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL));
  if ((result & 1) != 0) {
    v5 = *(_BYTE**)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2);
    if ((v5[336] & 0x40) == 0 && v5[73] == 2) {
      v6 = (unsigned __int8)v5[88] >> ((*((_BYTE*)a2 + 3) & 8) != 0);
      if (**(_DWORD**)(a1 + 16) < v6) {
        **(_QWORD**)(a1 + 8) = a2;
        **(_DWORD**)(a1 + 16) = v6;
      }
    }
  }
  return result;
}

__int64

game_cmdbtl_CmdBtlUnit_GetLinkItem_Attack_lambda0_Invoke(__int64 a1,
                                                         unsigned __int16* a2)
{
  unsigned __int8* v2;
  unsigned int v3;
  unsigned __int16* v6;
  char v7;

  if (*a2 == 0) {
    return 0;
  }
  v2 = *(unsigned __int8**)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *a2);
  v3 = v2[72];
  if (v3 > 7 || v2[73] != 1) {
    return 0;
  }
  if (v3 - 5 <= 1) {
    if ((*((_DWORD*)a2 + 1) & 0xF) * (unsigned int)v2[87] - 1 >=
            *((unsigned __int8*)a2 + 2) &&
        (*((_BYTE*)a2 + 3) & 0x20) == 0) {
      v6 = a2;
      v7 = game_Unit_Unknown6c90c0(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL));
      a2 = v6;
      if ((v7 & 1) != 0) {
        return UnitItem_6e8bc0(a2);
      }
    }
    return 0;
  }
  if ((*((_BYTE*)a2 + 3) & 0x20) != 0) {
    return 0;
  }
  return UnitItem_6e8bc0(a2);
}

#pragma GCC visibility pop
