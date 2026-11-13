#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CmdbtlPartyNatives_e9a800(_QWORD*, __int64);
_QWORD* game_map_MapBattleHUD_DamagePopupFactory(_QWORD* result, __int64, int,
                                                 int);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fec818[])();
extern __int64* GameData_212d448[9];
extern __int64* GameData_212d570[7];
extern __int64* GameData_212ea58;
extern __int64 fw_memory_g_heap_manager;
extern char GameData_2234878;
float CmdBtlUnit_e7d750(_QWORD*);
int __cxa_guard_acquire(__int64);
void __attribute__((noreturn)) GameRoutine_ea6540();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_cmdbtl_ea9100(__int64 result, _QWORD* a2, _QWORD* a3,
                           unsigned __int64 a4);
void game_cmdbtl_1042c40(__int64 a1, int a2);

__int64 game_cmdbtl_ea9100(__int64 result, _QWORD* a2, _QWORD* a3,
                           unsigned __int64 a4)
{
  __int64 v4;
  char* v5;
  _QWORD* v8;
  char** v9;
  char* v10;
  __int64 v11;
  char* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  char* v29;
  __int64 v30;
  __int64 v31;

  v4 = *(_QWORD*)(result + 16);
  v5 = *(char**)result;
  v8 = a2;
  v9 = (char**)result;
  if (a4 <= 0xAAAAAAAAAAAAAAABLL * ((v4 - *(_QWORD*)result) >> 3)) {
    v12 = *(char**)(result + 8);
    if (a4 <= 0xAAAAAAAAAAAAAAABLL * ((v12 - v5) >> 3)) {
      if (a2 != a3) {
        do {
          *(_QWORD*)v5 = *v8;
          v18 = v8[1];
          v17 = v8[2];
          if (v17 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                      memory_order_relaxed);
          }
          v19 = *((_QWORD*)v5 + 2);
          *((_QWORD*)v5 + 1) = v18;
          *((_QWORD*)v5 + 2) = v17;
          if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
            result = std___1___shared_weak_count___release_weak(v19);
          }
          v8 += 3;
          v5 += 24;
        } while (v8 != a3);
        v12 = v9[1];
      }
      for (; v12 != v5; v12 -= 24) {
        v31 = *((_QWORD*)v12 - 1);
        if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
          result = std___1___shared_weak_count___release_weak(v31);
        }
      }
      v9[1] = v5;
    }
    else {
      v13 = (_QWORD*)((char*)a2 + ((char*)v12 - (char*)v5));
      if (v12 != v5) {
        do {
          *(_QWORD*)v5 = *v8;
          v15 = v8[1];
          v14 = v8[2];
          if (v14 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                      memory_order_relaxed);
          }
          v16 = *((_QWORD*)v5 + 2);
          *((_QWORD*)v5 + 1) = v15;
          *((_QWORD*)v5 + 2) = v14;
          if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
            result = std___1___shared_weak_count___release_weak(v16);
          }
          v8 += 3;
          v5 += 24;
        } while (v8 != v13);
        v12 = v9[1];
      }
      v28 = v12;
      if (v13 != a3) {
        v28 = v12;
        v29 = v12;
        do {
          *(_QWORD*)v29 = *v13;
          *((_QWORD*)v29 + 1) = v13[1];
          v30 = v13[2];
          *((_QWORD*)v29 + 2) = v30;
          if (v30 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                                      memory_order_relaxed);
          }
          v13 += 3;
          v29 += 24;
          v28 += 24;
        } while (v13 != a3);
      }
      v9[1] = v28;
    }
  }
  else {
    if (v5 != nullptr) {
      v10 = *(char**)(result + 8);
      if (v5 == v10) {
        goto LABEL_27;
      }
      do {
        v11 = *((_QWORD*)v10 - 1);
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
        v10 -= 24;
      } while (v10 != v5);
      v20 = *v9;
      v9[1] = v5;
      v5 = v20;
      if (v20 != nullptr) {
      LABEL_27:
        v21 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v21,
                                      (__int64)v5);
      }
      v4 = 0;
      v9[1] = nullptr;
      v9[2] = nullptr;
      *v9 = nullptr;
    }
    if (a4 > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_60;
    }
    v22 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 3);
    v23 = 2 * v22;
    if (2 * v22 <= a4) {
      v23 = a4;
    }
    v24 = v22 >= 0x555555555555555LL ? 0xAAAAAAAAAAAAAAALL : v23;
    if (v24 > 0xAAAAAAAAAAAAAAALL) {
    LABEL_60:
      GameRoutine_ea6540();
    }
    v25 = 3 * v24;
    result = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 24 * v24,
                                            16, 0);
    *v9 = (char*)result;
    v9[1] = (char*)result;
    for (v9[2] = (char*)(result + 8 * v25); v8 != a3; result += 24) {
      v26 = v8[1];
      *(_QWORD*)result = *v8;
      *(_QWORD*)(result + 8) = v26;
      v27 = v8[2];
      *(_QWORD*)(result + 16) = v27;
      if (v27 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                  memory_order_relaxed);
      }
      v8 += 3;
    }
    v9[1] = (char*)result;
  }
  return result;
}

void game_cmdbtl_1042c40(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  __int64 v4;
  float32x4_t* v5;
  float v6;
  unsigned __int64 v7;
  float32x4_t* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    float32x4_t* v16;
    __int64 v17;
  } v16_;
  struct {
    float32x4_t v18;
    float32x4_t** v19;
    char gap40_[8];
    float32x4_t* v20;
  } v18_;
  __int64 v21;

  GameData_2234878 = 1;
  v21 = a1;
  v16_.v16 = nullptr;
  v16_.v17 = 0;
  v18_.v20 = &v18_.v18;
  v3 = (_QWORD*)*GameData_212ea58;
  LANES128(v18_.v18).n128_u64[0] = (unsigned __int64)GameData_1fec818;
  LANES128(v18_.v18).n128_u64[1] = (unsigned __int64)&v21;
  v18_.v19 = &v16_.v16;
  CmdbtlPartyNatives_e9a800(v3, (__int64)&v18_.v18);
  if (v18_.v20 == &v18_.v18) {
    v4 = 32;
  }
  else {
    if (v18_.v20 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(void*))(LANES128(*(v18_.v20)).n128_u64[0] + v4))(
      (void*)v18_.v20);
LABEL_6:
  v5 = v16_.v16;
  if (v16_.v16 != nullptr) {
    v6 = CmdBtlUnit_e7d750(v16_.v16);
    v7 = LANES128(v16_.v16[13]).n128_u64[0];
    if (v7 != 0) {
      v8 = (float32x4_t*)(*(_QWORD*)(v7 + 8) + 304LL);
    }
    else {
      v8 = v16_.v16 + 7;
    }
    {
      __typeof__(v9) z_ = (__typeof__(v9)){0};
      LODWORD(z_) = 0;
      v9 = z_;
    }
    *((float*)&v9 + 1) = v6;
    v18_.v18 = vaddq_f32(COERCE_AS(float32x4_t, v9), *v8);
  }
  v10 = v16_.v17;
  if (v16_.v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16_.v17 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
    if (v5 != nullptr) {
      goto LABEL_17;
    }
  }
  else if (v5 != nullptr) {
    goto LABEL_17;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v15 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v15;
    __cxa_guard_release((__int64)&GameData_21a6130);
  }
  v18_.v18 = COERCE_AS(float32x4_t, GameData_21a6120);
LABEL_17:
  v11 = GameData_212d448[0];
  v12 = *GameData_212d448[0];
  if (*GameData_212d448[0] == 0 || (v13 = *(_QWORD*)(v12 + 8)) == 0 ||
      (*(_BYTE*)(v13 + 113) & 0x40) == 0) {
    if (*GameData_212d570[0] != 0) {
      game_map_MapBattleHUD_DamagePopupFactory(*(_QWORD**)GameData_212d570[0],
                                               (__int64)&v18_.v18, -a2, 0);
      v12 = *v11;
    }
    if (v12 != 0) {
      v14 = *(_QWORD*)(v12 + 128);
      if (v14 != 0) {
        *(_DWORD*)(v14 + 464) = 1062557013;
      }
    }
  }
}

#pragma GCC visibility pop
