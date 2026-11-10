#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN** GameData_212e778[2];
extern _UNKNOWN** GameData_212e780;
extern __int64* game_g_frame_clock_ptr[3];
__int64 TaskSSR_b7bd00(_QWORD* a1);
__int64 TaskSSR_b7cee0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4,
                       __int64 a5);
void gfxa_TaskSSR_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2);
void gfxa_TaskSSR_Impl_Impl_lambda1_Invoke(__int64 a1, _WORD* a2);
bool gfxa_TaskSSR_Impl_draw_lambda0_Invoke(__int64 a1, __int64 a2);

__int64 TaskSSR_b7bd00(_QWORD* a1)
{
  __int64* v2;
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
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 result;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 2, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 18, *v2 + 568);
  v3 = a1[123];
  a1[123] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[122];
  a1[122] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[116];
  a1[116] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[115];
  a1[115] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[109];
  a1[109] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = a1[108];
  a1[108] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = a1[102];
  a1[102] = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  v10 = a1[101];
  a1[101] = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  v11 = a1[95];
  a1[95] = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  v12 = a1[94];
  a1[94] = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  v13 = a1[88];
  a1[88] = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  v14 = a1[87];
  a1[87] = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  v15 = a1[81];
  a1[81] = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  v16 = a1[80];
  a1[80] = 0;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
  }
  v17 = a1[74];
  a1[74] = 0;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  v18 = a1[73];
  a1[73] = 0;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
  }
  v19 = a1[67];
  a1[67] = 0;
  if (v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
  }
  v20 = a1[66];
  a1[66] = 0;
  if (v20 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
  }
  v21 = a1[60];
  a1[60] = 0;
  if (v21 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
  }
  v22 = a1[59];
  a1[59] = 0;
  if (v22 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
  }
  v23 = a1[53];
  a1[53] = 0;
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
  }
  v24 = a1[52];
  a1[52] = 0;
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
  }
  v25 = a1[51];
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak(v25);
  }
  v26 = a1[49];
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak(v26);
  }
  v27 = a1[47];
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak(v27);
  }
  v28 = a1[45];
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  GameRoutine_604050(a1 + 18);
  GameRoutine_604050(a1 + 2);
  result = a1[1];
  a1[1] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 TaskSSR_b7cee0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4,
                       __int64 a5)
{
  __int64 (**v8)(__int64);
  __int64 (**v9)(__int64);
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  __int64 v29;
  __int64 result;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  __int64 v40;
  unsigned int v41;
  unsigned int v42;
  __int64 v43;
  _QWORD v44[2];

  v8 = (__int64 (**)(__int64))GameData_212e778[0];
  v9 = (__int64 (**)(__int64))GameData_212e780;
  if ((*(_BYTE*)(a5 + 84) & 1) != 0 || (*(_BYTE*)(a1 + 1032) & 1) != 0) {
    v11 = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(
        **(_QWORD**)(a1 + 8) + 32LL))(*(_QWORD**)(a1 + 8), *(_QWORD*)(a1 + 8));
    (*(void (**)(_QWORD, _QWORD*, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v11,
                                                                   v12);
    v13 = *a4;
    v14 = (*v8)((__int64)v11);
    v15 = (*v9)((__int64)v11);
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v13 + 72LL))(v13, 0, 0, v14, v15);
    v16 = *a4;
    v17 = (*v8)((__int64)v11);
    v18 = (*v9)((__int64)v11);
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v16 + 88LL))(v16, 0, 0, v17, v18);
    v19 = *a4;
    v44[0] = 0;
    v44[1] = 0;
    (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v19 + 144LL))(v19, 0,
                                                                    v44);
    *(_BYTE*)(a1 + 1032) = 0;
  }
  v20 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a3 + 8) + 16LL))(
      *(_QWORD*)(a3 + 8));
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 32LL))(v20);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v21, v22);
  v23 = *a4;
  v24 = (*v8)(v21);
  v25 = (*v9)(v21);
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v23 + 72LL))(
      v23, 0, 0, v24, v25);
  v26 = *a4;
  v27 = (*v8)(v21);
  v28 = (*v9)(v21);
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v26 + 88LL))(
      v26, 0, 0, v27, v28);
  v29 = *a4;
  v44[0] = 0;
  v44[1] = 0;
  result = (*(__int64 (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v29 + 144LL))(
      v29, 0, v44);
  if (*(int*)(a5 + 28) >= 2) {
    v31 = (__int64*)(a3 + 16);
    v32 = 1;
    do {
      v33 = *v31++;
      v34 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
      v35 = (*(__int64 (**)(__int64))(*(_QWORD*)v34 + 32LL))(v34);
      (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v35,
                                                                     v36);
      v37 = *a4;
      v38 = (*v8)(v35);
      v39 = (*v9)(v35);
      (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)v37 + 72LL))(v37, 0, 0, v38, v39);
      v40 = *a4;
      v41 = (*v8)(v35);
      v42 = (*v9)(v35);
      (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)v40 + 88LL))(v40, 0, 0, v41, v42);
      v43 = *a4;
      v44[0] = 0;
      v44[1] = 0;
      result = (*(__int64 (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v43 +
                                                          144LL))(v43, 0, v44);
      ++v32;
    } while (v32 < *(int*)(a5 + 28));
  }
  return result;
}

void gfxa_TaskSSR_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void gfxa_TaskSSR_Impl_Impl_lambda1_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 21;
}

bool gfxa_TaskSSR_Impl_draw_lambda0_Invoke(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(a2 + 12) == *(_DWORD*)(a1 + 8);
}

#pragma GCC visibility pop
