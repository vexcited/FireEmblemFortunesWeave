#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_21a55c0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_21a5580;
extern __int128 GameData_21a5590;
extern __int128 GameData_21a55a0;
extern __int128 GameData_21a55b0;
long double RouteMeshData_ResetMatrix(__int64 a1);

long double RouteMeshData_ResetMatrix(__int64 a1)
{
  __int64 v2;
  float32x4_t v3;
  __int64 v4;
  __int64 v5;
  unsigned int* v6;
  float32x4_t v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float32x4_t v14;

  v2 = *((_QWORD*)GameData_212c958 + 1);
  *(_QWORD*)(a1 + 80) = *(_QWORD*)GameData_212c958;
  *(_QWORD*)(a1 + 88) = v2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a55c0) != 0) {
    v10 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
    *(_QWORD*)&GameData_21a55a0 =
        *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a55a0 + 1) = v10;
    v11 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                      (_QWORD)GameData_212c2a0);
    *(_QWORD*)&GameData_21a55b0 =
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a55b0 + 1) = v11;
    v12 = *((_QWORD*)GameData_212c2a0 + 1);
    *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
    *((_QWORD*)&GameData_21a5580 + 1) = v12;
    v13 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
    *(_QWORD*)&GameData_21a5590 =
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a5590 + 1) = v13;
    __cxa_guard_release(&GameData_21a55c0);
  }
  v3 = *(float32x4_t*)(a1 + 176);
  v4 = *(_QWORD*)(a1 + 256);
  *(_OWORD*)(a1 + 16) = GameData_21a5580;
  *(_OWORD*)(a1 + 32) = GameData_21a5590;
  *(_OWORD*)(a1 + 48) = GameData_21a55a0;
  *(_OWORD*)(a1 + 64) = GameData_21a55b0;
  if (v4 != 0) {
    v14 = v3;
    v5 = std___1___shared_weak_count_lock(v4);
    if (v5 == 0) {
    LABEL_8:
      v3 = v14;
      goto LABEL_9;
    }
    v3 = v14;
    v6 = *(unsigned int**)(a1 + 248);
    if (v6 != nullptr) {
      LANES128(v7).n128_u32[0] = 0;
      LANES128(v7).n128_u32[3] = 0;
      *(unsigned __int64*)((char*)LANES128(v7).n128_u64 + 4) = *v6;
      v3 = vaddq_f32(v14, v7);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v8 = v5;
      v14 = v3;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v8);
      goto LABEL_8;
    }
  }
LABEL_9:
  *(_OWORD*)(a1 + 16) = GameData_1a82dd0;
  *(_OWORD*)(a1 + 32) = GameData_1a83610;
  *(_OWORD*)(a1 + 48) = GameData_1a83090;
  *(float32x4_t*)(a1 + 64) = v3;
  return *(long double*)&GameData_1a83090;
}

#pragma GCC visibility pop
