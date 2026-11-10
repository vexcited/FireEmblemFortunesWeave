#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_7c41f0(__int64, int, int);
float Height_7c4d10(__int64 a1, float a2, float a3);
_QWORD* game_map_Height_UpdateImpl_lambda0_Invoke(__int64 a1, int* a2, int* a3);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__int64 GameRoutine_2b0();
__int64 Registration_a5aca0(__int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern __int128 GameData_1a82a60;
extern __int128 GameData_1a82ed0;
extern __int128 GameData_1a83360;
extern __int128 GameData_1a83640;
extern __int128 GameData_1a83810;
float32x4_t* Height_7c41f0(__int64 a1, int a2, int a3);

float32x4_t* Height_7c41f0(__int64 a1, int a2, int a3)
{

#pragma clang fp contract(off)
  float32x4_t v3;
  unsigned __int64 v4;
  unsigned int v5;
  float32x4_t v6;
  float* v7;
  float* v8;
  float* v9;
  float* v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  float32x4_t* result;
  int v25;
  int v26;
  int v27;
  float v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  float v33;
  float v34;
  __int64 v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  __int64 v41;
  float v42;
  float v43;
  __int64 v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  __int64 v50;
  float v51;
  float v52;
  __int64 v53;
  float v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  struct {
    _BYTE v59[4];
    int v60;
    char gap72_[40];
    __int64 v61;
    char gap120_[24];
    char v62;
  } v59_;

  LANES128(v6).n128_f32[0] = (float)a2 * 0x1.4000000000000p+2f;
  LANES128(v3).n128_f32[0] = LANES128(v6).n128_f32[0];
  LANES128(v3).n128_u32[1] = 1128792064;
  HIDWORD(v4) = 0;
  *(float*)&v4 = (float)a3 * 0x1.4000000000000p+2f;
  v5 = a2 + 32 * a3;
  LANES128(v6).n128_u32[1] = -1027080192;
  if (v5 >= 0x400) {
    v5 = 0;
  }
  v7 = (float*)(a1 + 20LL * v5);
  LANES128(v3).n128_u64[1] = v4;
  v8 = v7 + 5122;
  v9 = v7 + 10242;
  LANES128(v6).n128_u64[1] = v4;
  v55 = v3;
  v56 = v6;
  v57 = vaddq_f32(v6, COERCE_AS(float32x4_t, GameData_1a83810));
  v58 = vaddq_f32(v3, COERCE_AS(float32x4_t, GameData_1a83810));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
    Registration_a5aca0((__int64)&GameData_21fdd90);
    v9 = v7 + 10242;
    GameRoutine_2b0();
    __cxa_guard_release(&GameData_21fde98);
  }
  v10 = v7 + 2;
  collision_670c60((void*)((__int64)v59_.v59), &v58, &v57, 720896);
  if ((v59_.v62 & 1) == 0) {
    v14 = -1027080192;
    *v9 = -0x1.9000000000000p+6f;
    *v8 = -0x1.9000000000000p+6f;
    goto LABEL_14;
  }
  v11 = v59_.v60;
  v12 = v59_.v61;
  *(_DWORD*)v9 = v59_.v60;
  *(_DWORD*)v8 = v11;
  *(_DWORD*)v10 = v11;
  if ((v12 & 0x80000) != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
      Registration_a5aca0((__int64)&GameData_21fdd90);
      GameRoutine_2b0();
      __cxa_guard_release(&GameData_21fde98);
    }
    collision_670c60((void*)((__int64)v59_.v59), &v58, &v57, 196608);
    if ((v59_.v62 & 1) != 0) {
      v13 = v59_.v60;
      v12 = v59_.v61;
      *(_DWORD*)v8 = v59_.v60;
      *(_DWORD*)v10 = v13;
    }
  }
  if ((v12 & 0x20000) != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
      Registration_a5aca0((__int64)&GameData_21fdd90);
      GameRoutine_2b0();
      __cxa_guard_release(&GameData_21fde98);
    }
    collision_670c60((void*)((__int64)v59_.v59), &v58, &v57, 0x10000);
    if ((v59_.v62 & 1) != 0) {
      v14 = v59_.v60;
    LABEL_14:
      *(_DWORD*)v10 = v14;
    }
  }
  v57 = vaddq_f32(v56, COERCE_AS(float32x4_t, GameData_1a83360));
  v58 = vaddq_f32(v55, COERCE_AS(float32x4_t, GameData_1a83360));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
    Registration_a5aca0((__int64)&GameData_21fdd90);
    GameRoutine_2b0();
    __cxa_guard_release(&GameData_21fde98);
  }
  collision_670c60((void*)((__int64)v59_.v59), &v58, &v57, 720896);
  if ((v59_.v62 & 1) != 0) {
    v15 = v59_.v60;
    v16 = v59_.v61;
    *((_DWORD*)v9 + 1) = v59_.v60;
    *((_DWORD*)v8 + 1) = v15;
    *((_DWORD*)v10 + 1) = v15;
    if ((v16 & 0x80000) != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
        Registration_a5aca0((__int64)&GameData_21fdd90);
        GameRoutine_2b0();
        __cxa_guard_release(&GameData_21fde98);
      }
      collision_670c60((void*)((__int64)v59_.v59), &v58, &v57, 196608);
      if ((v59_.v62 & 1) != 0) {
        v17 = v59_.v60;
        v16 = v59_.v61;
        *((_DWORD*)v8 + 1) = v59_.v60;
        *((_DWORD*)v10 + 1) = v17;
      }
    }
    if ((v16 & 0x20000) != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
        Registration_a5aca0((__int64)&GameData_21fdd90);
        GameRoutine_2b0();
        __cxa_guard_release(&GameData_21fde98);
      }
      collision_670c60((void*)((__int64)v59_.v59), &v58, &v57, 0x10000);
      if ((v59_.v62 & 1) != 0) {
        *((_DWORD*)v10 + 1) = v59_.v60;
      }
    }
  }
  else {
    v9[1] = -0x1.9000000000000p+6f;
    v8[1] = -0x1.9000000000000p+6f;
    v10[1] = -0x1.9000000000000p+6f;
  }
  v57 = vaddq_f32(v56, COERCE_AS(float32x4_t, GameData_1a83640));
  v58 = vaddq_f32(v55, COERCE_AS(float32x4_t, GameData_1a83640));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
    Registration_a5aca0((__int64)&GameData_21fdd90);
    GameRoutine_2b0();
    __cxa_guard_release(&GameData_21fde98);
  }
  collision_670c60((void*)((__int64)v59_.v59), &v58, &v57, 720896);
  if ((v59_.v62 & 1) != 0) {
    v18 = v59_.v60;
    v19 = v59_.v61;
    *((_DWORD*)v9 + 2) = v59_.v60;
    *((_DWORD*)v8 + 2) = v18;
    *((_DWORD*)v10 + 2) = v18;
    if ((v19 & 0x80000) != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
        Registration_a5aca0((__int64)&GameData_21fdd90);
        GameRoutine_2b0();
        __cxa_guard_release(&GameData_21fde98);
      }
      collision_670c60((void*)((__int64)v59_.v59), &v58, &v57, 196608);
      if ((v59_.v62 & 1) != 0) {
        v20 = v59_.v60;
        v19 = v59_.v61;
        *((_DWORD*)v8 + 2) = v59_.v60;
        *((_DWORD*)v10 + 2) = v20;
      }
    }
    if ((v19 & 0x20000) != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
        Registration_a5aca0((__int64)&GameData_21fdd90);
        GameRoutine_2b0();
        __cxa_guard_release(&GameData_21fde98);
      }
      collision_670c60((void*)((__int64)v59_.v59), &v58, &v57, 0x10000);
      if ((v59_.v62 & 1) != 0) {
        *((_DWORD*)v10 + 2) = v59_.v60;
      }
    }
  }
  else {
    v9[2] = -0x1.9000000000000p+6f;
    v8[2] = -0x1.9000000000000p+6f;
    v10[2] = -0x1.9000000000000p+6f;
  }
  v57 = vaddq_f32(v56, COERCE_AS(float32x4_t, GameData_1a82ed0));
  v58 = vaddq_f32(v55, COERCE_AS(float32x4_t, GameData_1a82ed0));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
    Registration_a5aca0((__int64)&GameData_21fdd90);
    GameRoutine_2b0();
    __cxa_guard_release(&GameData_21fde98);
  }
  collision_670c60((void*)((__int64)v59_.v59), &v58, &v57, 720896);
  if ((v59_.v62 & 1) != 0) {
    v21 = v59_.v60;
    v22 = v59_.v61;
    *((_DWORD*)v9 + 3) = v59_.v60;
    *((_DWORD*)v8 + 3) = v21;
    *((_DWORD*)v10 + 3) = v21;
    if ((v22 & 0x80000) != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
        Registration_a5aca0((__int64)&GameData_21fdd90);
        GameRoutine_2b0();
        __cxa_guard_release(&GameData_21fde98);
      }
      collision_670c60((void*)((__int64)v59_.v59), &v58, &v57, 196608);
      if ((v59_.v62 & 1) != 0) {
        v23 = v59_.v60;
        v22 = v59_.v61;
        *((_DWORD*)v8 + 3) = v59_.v60;
        *((_DWORD*)v10 + 3) = v23;
      }
    }
    if ((v22 & 0x20000) != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
        Registration_a5aca0((__int64)&GameData_21fdd90);
        GameRoutine_2b0();
        __cxa_guard_release(&GameData_21fde98);
      }
      collision_670c60((void*)((__int64)v59_.v59), &v58, &v57, 0x10000);
      if ((v59_.v62 & 1) != 0) {
        *((_DWORD*)v10 + 3) = v59_.v60;
      }
    }
  }
  else {
    v9[3] = -0x1.9000000000000p+6f;
    v8[3] = -0x1.9000000000000p+6f;
    v10[3] = -0x1.9000000000000p+6f;
  }
  v57 = vaddq_f32(v56, COERCE_AS(float32x4_t, GameData_1a82a60));
  v58 = vaddq_f32(v55, COERCE_AS(float32x4_t, GameData_1a82a60));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
    Registration_a5aca0((__int64)&GameData_21fdd90);
    GameRoutine_2b0();
    __cxa_guard_release(&GameData_21fde98);
  }
  result = X8CALL_X0(float32x4_t*, collision_670c60((void*)((__int64)v59_.v59),
                                                    &v58, &v57, 720896));
  if ((v59_.v62 & 1) != 0) {
    v25 = v59_.v60;
    v26 = v59_.v61;
    *((_DWORD*)v9 + 4) = v59_.v60;
    *((_DWORD*)v8 + 4) = v25;
    *((_DWORD*)v10 + 4) = v25;
    if ((v26 & 0x80000) != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
        Registration_a5aca0((__int64)&GameData_21fdd90);
        GameRoutine_2b0();
        __cxa_guard_release(&GameData_21fde98);
      }
      result =
          X8CALL_X0(float32x4_t*, collision_670c60((void*)((__int64)v59_.v59),
                                                   &v58, &v57, 196608));
      if ((v59_.v62 & 1) != 0) {
        v27 = v59_.v60;
        v26 = v59_.v61;
        *((_DWORD*)v8 + 4) = v59_.v60;
        *((_DWORD*)v10 + 4) = v27;
      }
    }
    if ((v26 & 0x20000) != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
        Registration_a5aca0((__int64)&GameData_21fdd90);
        GameRoutine_2b0();
        __cxa_guard_release(&GameData_21fde98);
      }
      result =
          X8CALL_X0(float32x4_t*, collision_670c60((void*)((__int64)v59_.v59),
                                                   &v58, &v57, 0x10000));
      if ((v59_.v62 & 1) != 0) {
        *((_DWORD*)v10 + 4) = v59_.v60;
      }
    }
  }
  else {
    v9[4] = -0x1.9000000000000p+6f;
    v8[4] = -0x1.9000000000000p+6f;
    v10[4] = -0x1.9000000000000p+6f;
  }
  v28 = *v10;
  v29 = v10[1];
  v30 = v10[2];
  v31 = v10[3];
  v32 = 1;
  v33 = v10[4];
  if (*v10 >= v29) {
    v34 = *v10;
  }
  else {
    v34 = v10[1];
  }
  v35 = *v10 < v29;
  if (v34 < v30) {
    v34 = v10[2];
    v35 = 2;
  }
  if (v34 < v31) {
    v34 = v10[3];
    v35 = 3;
  }
  if (v34 < v33) {
    v35 = 4;
  }
  v36 = v10[v35];
  if (v29 >= v28) {
    v32 = 0;
  }
  else {
    v28 = v10[1];
  }
  if (v30 < v28) {
    v28 = v10[2];
    v32 = 2;
  }
  if (v31 < v28) {
    v28 = v10[3];
    v32 = 3;
  }
  if (v33 < v28) {
    v32 = 4;
  }
  if ((float)(v36 - v10[v32]) > 0x1.4000000000000p+1f) {
    *v10 = v36;
    v10[1] = v36;
    v10[2] = v36;
    v10[3] = v36;
    v10[4] = v36;
  }
  v37 = *v8;
  v38 = v8[1];
  v39 = v8[2];
  v40 = v8[3];
  v41 = 1;
  v42 = v8[4];
  if (*v8 >= v38) {
    v43 = *v8;
  }
  else {
    v43 = v8[1];
  }
  v44 = *v8 < v38;
  if (v43 < v39) {
    v43 = v8[2];
    v44 = 2;
  }
  if (v43 < v40) {
    v43 = v8[3];
    v44 = 3;
  }
  if (v43 < v42) {
    v44 = 4;
  }
  v45 = v8[v44];
  if (v38 >= v37) {
    v41 = 0;
  }
  else {
    v37 = v8[1];
  }
  if (v39 < v37) {
    v37 = v8[2];
    v41 = 2;
  }
  if (v40 < v37) {
    v37 = v8[3];
    v41 = 3;
  }
  if (v42 < v37) {
    v41 = 4;
  }
  if ((float)(v45 - v8[v41]) > 0x1.4000000000000p+1f) {
    *v8 = v45;
    v8[1] = v45;
    v8[2] = v45;
    v8[3] = v45;
    v8[4] = v45;
  }
  v46 = *v9;
  v47 = v9[1];
  v48 = v9[2];
  v49 = v9[3];
  v50 = 1;
  v51 = v9[4];
  if (*v9 >= v47) {
    v52 = *v9;
  }
  else {
    v52 = v9[1];
  }
  v53 = *v9 < v47;
  if (v52 < v48) {
    v52 = v9[2];
    v53 = 2;
  }
  if (v52 < v49) {
    v52 = v9[3];
    v53 = 3;
  }
  if (v52 < v51) {
    v53 = 4;
  }
  v54 = v9[v53];
  if (v47 >= v46) {
    v50 = 0;
  }
  else {
    v46 = v9[1];
  }
  if (v48 < v46) {
    v46 = v9[2];
    v50 = 2;
  }
  if (v49 < v46) {
    v46 = v9[3];
    v50 = 3;
  }
  if (v51 < v46) {
    v50 = 4;
  }
  if ((float)(v54 - v9[v50]) > 0x1.4000000000000p+1f) {
    *v9 = v54;
    v9[1] = v54;
    v9[2] = v54;
    v9[3] = v54;
    v9[4] = v54;
  }
  return result;
}

float Height_7c4d10(__int64 a1, float a2, float a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  float v10;
  unsigned int v11;
  float* v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  int v19;
  int v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;

  v3 = (int)(float)((float)(a2 + 1280.0f) * 0.2f);
  v4 = (int)(float)((float)(a3 + 1280.0f) * 0.2f);
  if (v3 >= 287) {
    v5 = 287;
  }
  else {
    v5 = (int)(float)((float)(a2 + 1280.0f) * 0.2f);
  }
  v6 = v5 - 256;
  if (v3 < 256) {
    v6 = 0;
  }
  if (v4 >= 287) {
    v7 = 287;
  }
  else {
    v7 = (int)(float)((float)(a3 + 1280.0f) * 0.2f);
  }
  v8 = v7 - 256;
  if (v4 >= 256) {
    v9 = v8;
  }
  else {
    v9 = 0;
  }
  v10 = a2 - (float)((float)v6 * 5.0f);
  v11 = v6 + 32 * v9;
  if (v11 >= 0x400) {
    v11 = 0;
  }
  v12 = (float*)(a1 + 20LL * v11);
  if (v10 <= 5.0f) {
    v13 = v10;
  }
  else {
    v13 = 5.0f;
  }
  if (v10 >= 0.0f) {
    v14 = v13;
  }
  else {
    v14 = 0.0f;
  }
  v15 = a3 - (float)((float)v9 * 5.0f);
  if (v15 <= 5.0f) {
    v16 = v15;
  }
  else {
    v16 = 5.0f;
  }
  if (v15 >= 0.0f) {
    v17 = v16;
  }
  else {
    v17 = 0.0f;
  }
  v18 = v12[4];
  if ((float)(v14 + v17) <= 5.0f) {
    v19 = 1;
  }
  else {
    v19 = 8;
  }
  if ((float)(v14 + v17) <= 5.0f) {
    v20 = 2;
  }
  else {
    v20 = 4;
  }
  if (v17 >= v14) {
    v19 = v20;
  }
  if (v19 > 3) {
    if (v19 == 4) {
      v26 = v12[2];
      v22 = v12[3];
      v29 = v18 + (float)((float)(v22 + v26) * -0.5f);
      v21 = v22 + (float)(v29 * 2.0f);
      v24 = v26 + (float)(v29 * 2.0f);
    }
    else {
      v24 = v12[1];
      v26 = v12[2];
      v27 = v18 + (float)((float)(v24 + v26) * -0.5f);
      v21 = v24 + (float)(v27 * 2.0f);
      v22 = v26 + (float)(v27 * 2.0f);
    }
    v25 = v26;
  }
  else {
    v21 = *v12;
    if (v19 == 1) {
      v24 = v12[1];
      v28 = v18 + (float)((float)(*v12 + v24) * -0.5f);
      v22 = *v12 + (float)(v28 * 2.0f);
      v25 = v24 + (float)(v28 * 2.0f);
    }
    else {
      v22 = v12[3];
      v23 = v18 + (float)((float)(*v12 + v22) * -0.5f);
      v24 = *v12 + (float)(v23 * 2.0f);
      v25 = v22 + (float)(v23 * 2.0f);
    }
  }
  return (float)(v21 + (float)((float)(v14 * (float)(v24 - v21)) / 5.0f)) +
         (float)((float)(v17 *
                         (float)((float)(v22 +
                                         (float)((float)(v14 *
                                                         (float)(v25 - v22)) /
                                                 5.0f)) -
                                 (float)(v21 +
                                         (float)((float)(v14 *
                                                         (float)(v24 - v21)) /
                                                 5.0f)))) /
                 5.0f);
}

_QWORD* game_map_Height_UpdateImpl_lambda0_Invoke(__int64 a1, int* a2, int* a3)
{
  _QWORD* result;

  result = GameRoutine_7c41f0(*(_QWORD*)(a1 + 8), *a2, *a3);
  **(_BYTE**)(a1 + 16) = 1;
  return result;
}

#pragma GCC visibility pop
