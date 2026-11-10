#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_634d80(_QWORD);
__int64 GameRoutine_a934d0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fd2ca0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern __int64* GameData_212e340[2];
__int64 wld_HadesMaskLoader_HadesMaskLoader(__int64 a1, __int64 a2, __int64 a3,
                                            unsigned __int64 a4, char a5,
                                            float a6, float a7, float a8,
                                            float a9);
_QWORD* HadesMaskLoader_c73b90(_QWORD* result);
_DWORD* GameRoutine_b86ea0(_DWORD* result, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_b34420(PSEUDO_X8, _QWORD*, __int64,
                                                   unsigned __int64, __int64,
                                                   unsigned __int64, __int64);
__int64 GameRoutine_5fc1f0(__int64);
__int64 GameRoutine_c6f0a0(__int64 result, char, float);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
extern __int128 GameData_1a82e40;
extern __int128 GameData_1a83230;
extern __int128 GameData_1a83560;
extern __int128 GameData_1a83760;
extern __int64 (*GameData_1fd2d20[])();
extern __int64* game_g_frame_clock_ptr[3];
__int64 wld_HadesMaskLoader_HadesMaskLoader_lambda0_Invoke(__int64 a1,
                                                           _QWORD* a2);

__int64 wld_HadesMaskLoader_HadesMaskLoader(__int64 a1, __int64 a2, __int64 a3,
                                            unsigned __int64 a4, char a5,
                                            float a6, float a7, float a8,
                                            float a9)
{
  _QWORD* v12;
  __int64* v13;
  __int64 v14;
  bool v15;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(float*)(a1 + 32) = a6;
  *(float*)(a1 + 36) = a7;
  *(float*)(a1 + 40) = a8;
  *(float*)(a1 + 44) = a9;
  *(_BYTE*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_BYTE*)(a1 + 72) = 0;
  if ((a5 & 1) == 0) {
    v12 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
    v12[2] = 0;
    v13 = GameData_212e340[0];
    v12[8] = 0;
    *(_QWORD*)(a1 + 16) = v12 + 4;
    *(_QWORD*)(a1 + 24) = v12;
    v23 = v22;
    *v12 = v13 + 2;
    v12[1] = 0;
    v22[0] = GameData_1fd2ca0;
    v22[1] = a1;
    GameRoutine_a934d0(v22, v12 + 4);
    if (v23 == v22) {
      v14 = 32;
    }
    else {
      if (v23 == nullptr) {
        goto LABEL_7;
      }
      v14 = 40;
    }
    (*(void (**)(__int64))(*v23 + v14))((__int64)v23);
  }
LABEL_7:
  v15 = a4 < 0xB || *(_QWORD*)(a3 + a4 - 11) != 0x622E6B73614D5F30LL ||
        *(_QWORD*)(a3 + a4 - 8) != 0x78746E622E6B7361LL;
  *(_BYTE*)(a1 + 48) = v15;
  v17 = *(_QWORD*)(game_g_frame_clock + 13432);
  v18 = *(_QWORD*)(a1 + 24);
  v20 = *(_QWORD*)(a1 + 16);
  v21 = v18;
  if (v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 8) =
      (*(__int64 (**)(__int64, __int64, unsigned __int64, __int64*))(
          *(_QWORD*)v17 + 40LL))(v17, a3, a4, &v20);
  result = v21;
  if (v21 != 0) {
    return std___1___shared_weak_count___release_weak(v21);
  }
  return result;
}

_QWORD* HadesMaskLoader_c73b90(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = result[7];
  v2 = result;
  if (v1 != 0) {
    v3 = *result;
    v4 = result[8];
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
    }
    if (*(_QWORD*)(v3 + 496) == v1) {
      v9 = *(_QWORD*)(v3 + 184);
      *(_BYTE*)(v3 + 352) = 0;
      if (v9 != 0 && (unsigned int)((*(_QWORD*)(*(_QWORD*)v3 + 32LL) -
                                     *(_QWORD*)(*(_QWORD*)v3 + 24LL)) >>
                                    3) -
                             1 ==
                         *(_DWORD*)(v3 + 8)) {
        v10 = *(_QWORD*)(v9 + 1616);
        *(_QWORD*)(v9 + 1608) = 0;
        *(_QWORD*)(v9 + 1616) = 0;
        if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          result = (_QWORD*)std___1___shared_weak_count___release_weak(v10);
        }
      }
    }
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v4);
    }
    v5 = v2[8];
    v2[7] = 0;
    v2[8] = 0;
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v5);
    }
    *((_BYTE*)v2 + 72) = 0;
  }
  v6 = v2[1];
  if (v6 != 0) {
    result = (_QWORD*)GameRoutine_634d80(*(_QWORD*)(v6 + 8));
    v2[1] = 0;
  }
  v7 = v2[8];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v7);
    v8 = v2[3];
    if (v8 == 0) {
      return result;
    }
  }
  else {
    v8 = v2[3];
    if (v8 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 wld_HadesMaskLoader_HadesMaskLoader_lambda0_Invoke(__int64 a1,
                                                           _QWORD* a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;
  __int64 v14;
  __int64 result;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;

  v2 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v2 + 8) = *a2;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
  v3[1] = 0;
  v3[2] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  v3[9] = 0;
  v3[10] = 0;
  v3[11] = 0;
  v3[12] = 0;
  v3[13] = 0;
  v3[14] = 0;
  v3[15] = 0;
  v3[16] = 0;
  v3[17] = 0;
  *v3 = GameData_1fd2d20;
  v3[4] = 0;
  *((_DWORD*)v3 + 10) = -1;
  v4 = *(_QWORD*)(v2 + 64);
  *(_QWORD*)(v2 + 56) = v3 + 4;
  *(_QWORD*)(v2 + 64) = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v5 = *(_QWORD*)(v2 + 8);
    if (v5 == 0) {
      goto LABEL_8;
    }
  }
  else {
    v5 = *(_QWORD*)(v2 + 8);
    if (v5 == 0) {
      goto LABEL_8;
    }
  }
  v6 = *(_QWORD*)(v5 + 592);
  if (v6 != 0 && GameRoutine_5fc1f0(v6) != 0) {
    v7 = **(
        _QWORD**)(GameRoutine_5fc1f0(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 592LL)) +
                  40);
    v8 = *(_DWORD*)(v7 + 144);
    v9 = *(_QWORD*)(*(_QWORD*)(v7 + 128) + 8LL);
    goto LABEL_9;
  }
LABEL_8:
  GameRoutine_b34420((void*)((__int64)&v16_.v16),
                     *(_QWORD**)(*game_g_frame_clock_ptr[0] + 13424),
                     (__int64)"Graphics/Textures/common_default", 0x20u,
                     (__int64)"Cmn_Default_BC", 0xEu, 0);
  v9 = v16_.v16;
  v8 = v16_.v17;
LABEL_9:
  v10 = *(_QWORD*)(v2 + 56);
  *(_QWORD*)v10 = v9;
  *(_DWORD*)(v10 + 8) = v8;
  *(_OWORD*)(*(_QWORD*)(v2 + 56) + 16LL) = GameData_1a83760;
  v11 = *(_QWORD*)(v2 + 56);
  v12 = *(_QWORD*)(v2 + 40);
  *(_QWORD*)(v11 + 32) = *(_QWORD*)(v2 + 32);
  *(_QWORD*)(v11 + 40) = v12;
  *(_OWORD*)(*(_QWORD*)(v2 + 56) + 48LL) = GameData_1a82e40;
  *(_OWORD*)(*(_QWORD*)(v2 + 56) + 64LL) = GameData_1a83560;
  *(_DWORD*)(*(_QWORD*)(v2 + 56) + 96LL) = 1097439642;
  *(_BYTE*)(*(_QWORD*)(v2 + 56) + 100LL) = 1;
  *(_DWORD*)(*(_QWORD*)(v2 + 56) + 104LL) = 1060320051;
  *(_DWORD*)(*(_QWORD*)(v2 + 56) + 108LL) = 1040522936;
  *(_OWORD*)(*(_QWORD*)(v2 + 56) + 80LL) = GameData_1a83230;
  v13 = *(_DWORD**)v2;
  v14 = *(_QWORD*)(v2 + 64);
  v16_.v16 = *(_QWORD*)(v2 + 56);
  v16_.v17 = v14;
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
    result = (__int64)GameRoutine_b86ea0(v13, &v16_.v16);
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      result = std___1___shared_weak_count___release_weak(v14);
    }
  }
  else {
    result = (__int64)GameRoutine_b86ea0(v13, &v16_.v16);
  }
  if (*(_BYTE*)(v2 + 48) == 1) {
    result = GameRoutine_c6f0a0(*(_QWORD*)(*(_QWORD*)v2 + 392LL), 0, 0x0.0p+0f);
  }
  *(_BYTE*)(v2 + 72) = 1;
  return result;
}

#pragma GCC visibility pop
