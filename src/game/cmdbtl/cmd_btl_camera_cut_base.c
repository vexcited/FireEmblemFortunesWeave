#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
float CmdBtlCameraCutBase_e82b40(__int64 a1, _QWORD* a2);

float CmdBtlCameraCutBase_e82b40(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  float v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = a2[1];
  v3 = 0.5;
  if (v2 != 0) {
    v5 = std___1___shared_weak_count_lock(v2);
    if (v5 != 0) {
      if (*a2 != 0) {
        v6 = *(_QWORD*)(*a2 + 208LL);
        if (v6 != 0) {
          v7 = *(_QWORD*)(v6 + 392);
          v8 = *(_QWORD*)(v6 + 400);
          if (v8 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (v7 != 0) {
            v3 = *(float*)(*(_QWORD*)(v7 + 11792) + 40LL) *
                 (float)(*(float*)(v7 + 32) *
                         (float)(*(float*)(v7 + 40) +
                                 (float)((float)(1.0 - *(float*)(v7 + 40)) *
                                         *(float*)(v6 + 336))));
          }
          if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
            v9 = v5;
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
            std___1___shared_weak_count___release_weak();
            v5 = v9;
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak();
      }
    }
  }
  return v3;
}

#pragma GCC visibility pop
