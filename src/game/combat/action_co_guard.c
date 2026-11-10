#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* GameData_212d448[9];
extern __int64 GameData_21ec7b0;
float CharacterAnimator_1079580(__int64, int, float, float, float);
void GameRoutine_106a860(__int64, float*);
float ActionCoGuard_Unknown5(__int64 a1);

float ActionCoGuard_Unknown5(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  float v4;
  float v5;
  long double v6;
  float v7;
  long double v8;
  float v9;
  float v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  bool v17;
  unsigned int v18;
  char v19;
  char v20;
  __int64 v21;
  int v22;
  float result;
  __int64 v24;
  float v25;
  float v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  unsigned int v32;
  char v33;
  char v34;
  __int64 v35;
  int v36;
  __int64 v37;

  v1 = *(_QWORD*)(a1 + 24);
  v2 = *(_QWORD*)(a1 + 8);
  v8 = *(long double*)(v1 + 32);
  v6 = COERCE_LONG_DOUBLE(vextq_s8(*(int8x16_t*)&v8, *(int8x16_t*)&v8, 8u));
  v4 = COERCE_FLOAT(*(_QWORD*)(v1 + 40));
  *(int32x2_t*)&v6 = vzip1_s32(*(int32x2_t*)&v8, *(int32x2_t*)&v6);
  v37 = *(_QWORD*)&v6;
  v5 = v4 - *(float*)(v2 + 44);
  *(float*)&v6 = *(float*)&v8 - *(float*)(v2 + 40);
  v7 = (float)(v5 * v5) + (float)(*(float*)&v6 * *(float*)&v6);
  *(float*)&v8 = sqrtf(v7);
  if (v7 >= 0x1.0000000000000p-23) {
    v10 = *(float*)&v6 * (float)(1.0 / *(float*)&v8);
    v9 = v5 * (float)(1.0 / *(float*)&v8);
  }
  else {
    v9 = 1.0;
    v10 = 0.0;
  }
  *(float*)&v6 =
      (float)(v9 * *(float*)(v2 + 52)) + (float)(*(float*)(v2 + 48) * v10);
  v11 = *(float*)&v8 < 3.0;
  LODWORD(v8) = -1084479242;
  v11 = v11 && *(float*)&v6 < -0x1.b851ec0000000p-1;
  if (v11) {
    v24 = *(_QWORD*)(v2 + 808);
    v25 = *(float*)(v24 + 40);
    v26 = *(float*)(v24 + 44);
    if (*GameData_212d448[0] == 0 ||
        (v27 = *(_QWORD*)(*GameData_212d448[0] + 8)) == 0 ||
        (~*(_DWORD*)(v27 + 112) & 0x28000) != 0) {
      v28 = *(_QWORD*)(v24 + 88);
      v29 = *(_QWORD*)(v28 + 392);
      v30 = *(_QWORD*)(v28 + 400);
      if (v30 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                                  memory_order_relaxed);
      }
      v31 = *(_DWORD*)(v29 + 11784);
      v17 = v31 > 0x12;
      v32 = 0x1FF7Fu >> v31;
      v33 = v17;
      v34 = v33 | v32;
      if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double, long double))(*(_QWORD*)v30 + 16LL))(
            v30, v8, v6);
        std___1___shared_weak_count___release_weak(v30);
      }
      if ((v34 & 1) != 0) {
        v35 = *(_QWORD*)(v2 + 808);
        *(_DWORD*)(v2 + 844) = *(_DWORD*)(v35 + 48);
        v36 = *(_DWORD*)(v35 + 52);
        *(float*)(v2 + 852) = v25 - (float)(v10 * 0x1.3880000000000p+13);
        *(float*)(v2 + 856) = v26 - (float)(v9 * 0x1.3880000000000p+13);
        *(_QWORD*)(v2 + 860) = 0x3F00000000000000LL;
        *(_DWORD*)(v2 + 848) = v36;
      }
    }
    return CharacterAnimator_1079580(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL),
                                     -2109400973, -1.0, -1.0, 1.0);
  }
  else {
    if (GameData_21ec7b0 == 0 ||
        (v12 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
        (~*(_DWORD*)(v12 + 112) & 0x28000) != 0) {
      v13 = *(_QWORD*)(*(_QWORD*)(v2 + 808) + 88LL);
      v14 = *(_QWORD*)(v13 + 392);
      v15 = *(_QWORD*)(v13 + 400);
      if (v15 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                  memory_order_relaxed);
      }
      v16 = *(_DWORD*)(v14 + 11784);
      v17 = v16 > 0x12;
      v18 = 0x1FF7Fu >> v16;
      v19 = v17;
      v20 = v19 | v18;
      if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double, long double))(*(_QWORD*)v15 + 16LL))(
            v15, v8, v6);
        std___1___shared_weak_count___release_weak(v15);
      }
      if ((v20 & 1) != 0) {
        v21 = *(_QWORD*)(v2 + 808);
        *(_DWORD*)(v2 + 844) = *(_DWORD*)(v21 + 48);
        v22 = *(_DWORD*)(v21 + 52);
        *(_QWORD*)(v2 + 860) = 0x3F00000000000000LL;
        *(_DWORD*)(v2 + 848) = v22;
        *(_QWORD*)(v2 + 852) = v37;
      }
    }
    GameRoutine_106a860(*(_QWORD*)(a1 + 8) + 608LL, (float*)&v37);
    *(_DWORD*)(*(_QWORD*)(a1 + 8) + 652LL) = 2;
  }
  return result;
}

#pragma GCC visibility pop
