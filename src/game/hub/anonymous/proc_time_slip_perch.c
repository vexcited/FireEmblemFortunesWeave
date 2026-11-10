#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 game_g_frame_clock;
float ProcTimeSlipPerch_Unknown2(__int64 a1, float result);

float ProcTimeSlipPerch_Unknown2(__int64 a1, float result)
{
  int v2;
  __int64 v3;
  float v4;
  float v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;
  float v11;
  float v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *(_DWORD*)(a1 + 168);
  if (v2 != 0) {
    if (v2 == 1) {
      v11 = *(float*)(a1 + 160);
      v3 = *game_g_frame_clock_ptr[0];
      v12 = 0x1.e000000000000p+5f /
            (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
      if (v12 <= 0x0.0p+0f) {
        v12 = 0x1.0000000000000p+0f;
      }
      result = *(float*)(a1 + 156) + (float)(v12 * 0x1.0000000000000p-1f);
      *(float*)(a1 + 152) = result / v11;
      *(float*)(a1 + 156) = result;
      if (result > v11) {
        *(_DWORD*)(a1 + 168) = 0;
        *(_DWORD*)(a1 + 152) = 1065353216;
      }
    }
    else if (v2 == 2) {
      v3 = *game_g_frame_clock_ptr[0];
      v4 = 0x1.e000000000000p+5f /
           (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
      if (v4 <= 0x0.0p+0f) {
        v4 = 0x1.0000000000000p+0f;
      }
      result = *(float*)(a1 + 156) + (float)(v4 * 0x1.0000000000000p-1f);
      v5 = *(float*)(a1 + 164);
      *(float*)(a1 + 152) = 0x1.0000000000000p+0f - (float)(result / v5);
      *(float*)(a1 + 156) = result;
      if (result > v5) {
        v6 = *(unsigned __int8**)(a1 + 16);
        *(_DWORD*)(a1 + 152) = 0;
        *(_DWORD*)(a1 + 168) = 0;
        if (v6 != nullptr) {
          v7 = *v6;
          v8 = v7 > 0x10;
          v9 = (1 << v7) & 0x1CE00;
          if (!v8 && v9 != 0) {
            *(_WORD*)(a1 + 136) |= 0x80u;
          }
        }
        *(_WORD*)(a1 + 136) |= 8u;
      }
    }
    else {
      v3 = game_g_frame_clock;
    }
    v13 = *(_QWORD*)(v3 + 13224);
    v14 = *(_QWORD*)(v13 + 48);
    v15 = *(_QWORD*)(v13 + 56);
    if (v15 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
      v16 = *(_QWORD*)(*(_QWORD*)(v14 + 8) + 288LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v17 = a1;
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
        a1 = v17;
      }
    }
    else {
      v16 = *(_QWORD*)(*(_QWORD*)(v14 + 8) + 288LL);
    }
    if (*(_BYTE*)(v16 + 712) == 1) {
      result = *(float*)(a1 + 152);
      *(_BYTE*)(v16 + 712) = 1;
      *(float*)(v16 + 708) = result;
    }
  }
  return result;
}

#pragma GCC visibility pop
