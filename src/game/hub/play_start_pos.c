#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_fa2110(void);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ff9198[])();
extern __int64 (*game_hub_PlayStartPos_vtable[])();
extern __int64 GameData_220b6f8;
extern int GameData_2229a68;
void PlayStartPos_Destructor(_QWORD* a1);
__attribute__((swiftcall)) void game_hub_d80c00(PSEUDO_X8, _QWORD*);
__int64 GameRoutine_d80dc0(__int64 result, __int64*);
__int64 GameRoutine_f71cb0(__int64, int);
__int64 GameRoutine_f71d40(__int64, __int64, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_hub_f71fc0(__int64, __int64, __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN GameData_1adb75f;
extern __int128 GameData_1a83460;
extern __int64* GameData_212ebb0[7];
extern __int64* GameData_212ebc0[5];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_21c9608;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3d10;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_8123d0();
__int64 PlayStartPos_fa2110(__int64 a1);
__int64 PlayStartPos_fa2260(__int64 result);
__int64 PlayStartPos_fa25b0(__int64 a1);

void PlayStartPos_Destructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_hub_PlayStartPos_vtable;
  GameRoutine_fa2110();
  v2 = a1[2];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  *a1 = GameData_1ff9198;
  if ((_QWORD*)GameData_220b6f8 == a1) {
    GameData_220b6f8 = 0;
    GameData_2229a68 = 0;
  }
}

__int64 PlayStartPos_fa2110(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  struct {
    __int64 v5;
    __int64 v6;
  } v5_;

  result = *(_QWORD*)(a1 + 16);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = result;
      if (*(_QWORD*)(a1 + 8) != 0) {
        v4 = *(_QWORD*)(*GameData_212ebc0[0] + 8);
        v5_.v5 = *(_QWORD*)(a1 + 8);
        v5_.v6 = v3;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_d80dc0(v4, &v5_.v5);
        if (v5_.v6 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v5_.v6);
        }
        result = *(_QWORD*)(a1 + 16);
        *(_QWORD*)(a1 + 8) = 0;
        *(_QWORD*)(a1 + 16) = 0;
        if (result != 0) {
          result = std___1___shared_weak_count___release_weak_alt1(result);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return std___1___shared_weak_count___release_weak_alt1(v3);
      }
    }
  }
  return result;
}

__int64 PlayStartPos_fa2260(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  float v9;
  __int128 v10;
  __int128 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float32x4_t* v16;
  __int64 v17;
  int v18;
  float32x4_t v19;
  int16x4_t v20;
  __int64 v21;
  float32x4_t v22;
  __int64* v23;
  unsigned __int32 v24;
  unsigned __int8 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  __int64 v30;
  float32x4_t v31;
  struct {
    float32x4_t* v32;
    __int64 v33;
  } v32_;

  if ((*(_BYTE*)(GameData_21c9608 + 160) & 1) != 0) {
    goto LABEL_14;
  }
  v1 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v1 == 0) {
    goto LABEL_14;
  }
  v2 = *(_QWORD*)(GameData_21ec7c0 + 72);
  v3 = result;
  v4 = *(_QWORD*)(GameData_21ec7c0 + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                            memory_order_relaxed);
  v5 = std___1___shared_weak_count_lock(v4);
  std___1___shared_weak_count___release_weak_alt1(v1);
  if (v5 == 0 || v2 == 0) {
    result = v3;
    if (v5 == 0) {
      goto LABEL_14;
    }
  }
  else {
    v7 = GameData_21c9608;
    result = v3;
    if ((*(_BYTE*)(GameData_21c9608 + 160) & 1) == 0) {
      v8 = *(_QWORD*)(*(_QWORD*)(v2 + 24) + 16LL);
      v9 = *(float*)(*(_QWORD*)(v8 + 488) + 36LL) * 0x1.ca5dc20000000p+5f;
      v10 = *(_OWORD*)(v8 + 560);
      *(_BYTE*)(GameData_21c9608 + 160) = 1;
      *(float*)(v7 + 192) = v9;
      *(_QWORD*)(v7 + 176) = v10;
      v11 = *(_OWORD*)(v7 + 176);
      *((_QWORD*)&v11 + 1) = DWORD2(v10);
      *(_OWORD*)(v7 + 176) = v11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
    result = v3;
  }
LABEL_14:
  v12 = *(_QWORD*)(result + 16);
  if (v12 != 0 && *(_QWORD*)(v12 + 8) != -1 ||
      *(_BYTE*)(GameData_21c9608 + 160) != 1 ||
      *(_DWORD*)(GameData_21f3d10 + 136) != 1) {
    return result;
  }
  v13 = result;
  v31 = *(float32x4_t*)(GameData_21c9608 + 176);
  game_hub_d80c00((void*)(&v32_.v32), *(_QWORD**)(*GameData_212ebc0[0] + 8));
  v14 = v32_.v33;
  if (v32_.v33 != 0) {
    v15 = std___1___shared_weak_count_lock(v32_.v33);
    v16 = v32_.v32;
    if (v15 == 0) {
      v17 = v13;
    LABEL_39:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_40;
    }
    v17 = v13;
    if (v32_.v32 != nullptr) {
      v18 = LANES128(v32_.v32[4]).n128_u8[0];
      LANES128(v32_.v32[13]).n128_u32[0] |= 0x20u;
      v19 = vaddq_f32(v31, COERCE_AS(float32x4_t, GameData_1a83460));
      LANES128(v16[19]).n128_u8[0] = 1;
      if (v18 == 1) {
        LANES64(v20).n64_u64[0] =
            LANES64_OF(vmovn_s32(vceqq_f32(v16[3], v19))).n64_u64[0];
        if ((LANES64(v20).n64_u8[0] & 1) != 0 &&
            (LANES64(v20).n64_u8[2] & 1) != 0 &&
            (LANES64(v20).n64_u8[4] & 1) != 0) {
          goto LABEL_36;
        }
        LANES128(v16[3]).n128_u64[0] = LANES128(v19).n128_u64[0];
        v21 = v15;
        v22 = v16[3];
        LANES128(v22).n128_u64[1] = LANES128(v19).n128_u32[2];
        v16[3] = v22;
      }
      else {
        v21 = v15;
        v16[3] = v19;
        LANES128(v16[4]).n128_u8[0] = 1;
      }
      v23 = GameData_212ebb0[0];
      v24 = GameRoutine_f71d40(*GameData_212ebb0[0], (__int64)&v16[3],
                               GameData_21f3d10 + 64);
      v25 = LANES128(v16[4]).n128_u8[0];
      LANES128(v16[13]).n128_u32[1] = v24;
      if ((v25 & 1) == 0) {
        GameRoutine_8123d0();
      }
      v26 = GameData_21f3d10;
      v27 = *v23;
      v28 = GameRoutine_f71d40(v27, (__int64)&v16[3], GameData_21f3d10 + 64);
      v29 = (GameRoutine_f71cb0(v28, v28) & 1) != 0 &&
            ((unsigned int)game_hub_f71fc0(v27, (__int64)&v16[3], v26 + 64) ==
                 0 ||
             (*(_BYTE*)(v27 + 32) & 2) != 0);
      v17 = v13;
      v15 = v21;
      LANES128(v16[13]).n128_u8[8] = v29;
    }
  LABEL_36:
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v30 = v15;
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak_alt1(v30);
      v17 = v13;
    }
    v16 = v32_.v32;
    v14 = v32_.v33;
    if (v32_.v33 == 0) {
      goto LABEL_40;
    }
    goto LABEL_39;
  }
  v16 = v32_.v32;
  v17 = v13;
LABEL_40:
  result = *(_QWORD*)(v17 + 16);
  *(_QWORD*)(v17 + 8) = v16;
  *(_QWORD*)(v17 + 16) = v14;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(result);
  }
  if (v14 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v14);
  }
  return result;
}

__int64 PlayStartPos_fa25b0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v10;
    void* v11;
  } v10_;

  if ((*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 160LL) & 1) == 0) {
    return PlayStartPos_fa2110(a1);
  }
  v2 = *(_QWORD*)(GameData_21f3d10 + 200);
  if (v2 == 0) {
    goto LABEL_16;
  }
  v3 = *(_QWORD*)(v2 + 16);
  if (v3 == 0) {
    v10_.v11 = &GameData_1adb75f;
    v10_.v10 = game_HashString((__int64)&GameData_1adb75f);
    if (game_GameModeData_instance_ == 0) {
      v5 = 0;
      result = *(_QWORD*)(a1 + 16);
      if (result == 0) {
        return result;
      }
      goto LABEL_21;
    }
    v7 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v10_.v10);
    if (v7 != 0) {
      v5 = *(_DWORD*)(v7 + 32) > 0;
      result = *(_QWORD*)(a1 + 16);
      if (result == 0) {
        return result;
      }
      goto LABEL_21;
    }
  LABEL_16:
    v5 = 0;
    result = *(_QWORD*)(a1 + 16);
    if (result == 0) {
      return result;
    }
    goto LABEL_21;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                            memory_order_relaxed);
  v10_.v11 = &GameData_1adb75f;
  v10_.v10 = game_HashString((__int64)&GameData_1adb75f);
  v5 = game_GameModeData_instance_ != 0 &&
       (v4 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v10_.v10)) != 0 &&
       *(_DWORD*)(v4 + 32) > 0;
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    result = *(_QWORD*)(a1 + 16);
    if (result == 0) {
      return result;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
    result = *(_QWORD*)(a1 + 16);
    if (result == 0) {
      return result;
    }
  }
LABEL_21:
  result = std___1___shared_weak_count_lock(result);
  if (result != 0) {
    v8 = *(_QWORD*)(a1 + 8);
    if (v8 != 0 && *(unsigned __int8*)(v8 + 8) != v5) {
      *(_BYTE*)(v8 + 8) = v5;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v9 = result;
      (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      return std___1___shared_weak_count___release_weak_alt1(v9);
    }
  }
  return result;
}

#pragma GCC visibility pop
