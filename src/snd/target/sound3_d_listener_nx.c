#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_277cf0(_QWORD, float);
__int64 GameRoutine_277d00(_QWORD, float);
__int64 GameRoutine_277d10(_QWORD, float);
__int64 GameRoutine_277d20(_QWORD, float);
__int64 GameRoutine_277d30(_QWORD, float);
__int64 GameRoutine_2a1b90(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int64 snd_g_memory;
extern __int64 snd_target_s_platform;
extern __int64* GameData_21347e8[10];
void Sound3DListenerNX_Destructor(__int64 a1);
__n128 Sound3DListenerNX_Unknown2(__int64 a1, float a2);
__n128 Sound3DListenerNX_Unknown3(__int64 a1, float a2);
__n128 Sound3DListenerNX_Unknown4(__int64 a1, float a2);
__n128 Sound3DListenerNX_Unknown5(__int64 a1, float a2);
__n128 Sound3DListenerNX_Unknown6(__int64 a1, float a2);
_QWORD* Sound3DListenerNX_Unknown7(__int64 a1);
float Sound3DListenerNX_Unknown8(__int64 a1);
float Sound3DListenerNX_Unknown9(__int64 a1);
float Sound3DListenerNX_Unknown10(__int64 a1);
extern __int128 GameData_1a83610;
float32x4_t nn_atk_277c50(float32x4_t*, float32x4_t*);
void* BaseNx_2a1b90();
__n128 Sound3DListenerNX_Unknown11(float32x4_t* a1, __int64 a2);

void Sound3DListenerNX_Destructor(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  long double v11;
  __int64 v12;

  v3 = *(_DWORD*)(a1 + 8);
  v2 = *(_DWORD*)(a1 + 12);
  *(_QWORD*)a1 = GameData_21347e8[0] + 2;
  v4 = *(_QWORD*)(a1 + 16);
  if (v4 + 136 != snd_target_s_platform + 4088LL * v2 + 96LL * v3 + 3824) {
    v5 = *(__int64**)(v4 + 144);
    v6 = *v5;
    *(_QWORD*)(*(_QWORD*)(v4 + 136) + 8LL) = v5;
    *v5 = *(_QWORD*)(v4 + 136);
    *(_QWORD*)(v6 + 8) = v4 + 136;
    *(_QWORD*)(v4 + 136) = v6;
  }
  v7 = GameRoutine_2a1b90(a1);
  v8 = nn_os_LockMutex(v7 + 840);
  v9 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (v9 != 0) {
    v8 =
        (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
  }
  v10 = GameRoutine_2a1b90(v8);
  *(__n128*)&v11 = nn_os_UnlockMutex(v10 + 840);
  v12 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (v12 != 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)snd_g_memory + 24LL))(
        snd_g_memory, v11);
  }
}

__n128 Sound3DListenerNX_Unknown2(__int64 a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  v5 = GameRoutine_277d20(*(_QWORD*)(a1 + 16), a2);
  v6 = GameRoutine_2a1b90(v5);
  return nn_os_UnlockMutex(v6 + 840);
}

__n128 Sound3DListenerNX_Unknown3(__int64 a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  v5 = GameRoutine_277d30(*(_QWORD*)(a1 + 16), a2);
  v6 = GameRoutine_2a1b90(v5);
  return nn_os_UnlockMutex(v6 + 840);
}

__n128 Sound3DListenerNX_Unknown4(__int64 a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  v5 = GameRoutine_277cf0(*(_QWORD*)(a1 + 16), a2);
  v6 = GameRoutine_2a1b90(v5);
  return nn_os_UnlockMutex(v6 + 840);
}

__n128 Sound3DListenerNX_Unknown5(__int64 a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  v5 = GameRoutine_277d00(*(_QWORD*)(a1 + 16), a2);
  v6 = GameRoutine_2a1b90(v5);
  return nn_os_UnlockMutex(v6 + 840);
}

__n128 Sound3DListenerNX_Unknown6(__int64 a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  v5 = GameRoutine_277d10(*(_QWORD*)(a1 + 16), a2);
  v6 = GameRoutine_2a1b90(v5);
  return nn_os_UnlockMutex(v6 + 840);
}

_QWORD* Sound3DListenerNX_Unknown7(__int64 a1)
{
  return X8CALL_X0(_QWORD*,
                   (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                           _QWORD, _QWORD))(
                       *(_QWORD*)snd_target_s_platform + 560LL))(
                       (void*)snd_target_s_platform, snd_target_s_platform,
                       *(unsigned int*)(a1 + 12), *(unsigned int*)(a1 + 8)));
}

float Sound3DListenerNX_Unknown8(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;

  v2 = GameRoutine_2a1b90(a1);
  v3 = nn_os_LockMutex(v2 + 840);
  v4 = *(float*)(*(_QWORD*)(a1 + 16) + 100LL);
  v5 = GameRoutine_2a1b90(v3);
  nn_os_UnlockMutex(v5 + 840);
  return v4;
}

float Sound3DListenerNX_Unknown9(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;

  v2 = GameRoutine_2a1b90(a1);
  v3 = nn_os_LockMutex(v2 + 840);
  v4 = *(float*)(*(_QWORD*)(a1 + 16) + 96LL);
  v5 = GameRoutine_2a1b90(v3);
  nn_os_UnlockMutex(v5 + 840);
  return v4;
}

float Sound3DListenerNX_Unknown10(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;

  v2 = GameRoutine_2a1b90(a1);
  v3 = nn_os_LockMutex(v2 + 840);
  v4 = *(float*)(*(_QWORD*)(a1 + 16) + 104LL);
  v5 = GameRoutine_2a1b90(v3);
  nn_os_UnlockMutex(v5 + 840);
  return v4;
}

__n128 Sound3DListenerNX_Unknown11(float32x4_t* a1, __int64 a2)
{
  float* v2;
  float32x4_t v4;
  float32x4_t v5;
  float32x4_t v6;
  float32x4_t v7;
  int8x16_t v8;
  float32x4_t v9;
  float32x4_t v10;
  int8x16_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  int8x16_t v16;
  float32x4_t v17;
  float32x4_t v18;
  int8x16_t v19;
  float32x4_t v20;
  int32x4_t v21;
  int8x16_t v22;
  int8x16_t v23;
  int8x16_t v24;
  int32x4_t v25;
  int32x4_t v26;
  int32x4_t v27;
  int32x4_t v28;
  char* v29;
  char* v30;
  struct {
    __int64 v32;
    unsigned __int64 v33;
    float v34;
  } v32_;

  v2 = (float*)(a2 + 40);
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)(a2 + 40) + 1048LL))((void*)(&v32_.v32), a2 + 40);
  LANES128(v4).n128_u64[0] = v32_.v33;
  LANES128(v5).n128_u32[3] = 0;
  LANES128(v5).n128_f32[0] = v2[1412] + *(float*)&v32_.v33;
  LANES128(v5).n128_f32[1] = v2[1413] + *((float*)&v32_.v33 + 1);
  LANES128(v4).n128_u64[1] = LODWORD(v32_.v34);
  LANES128(v5).n128_f32[2] = v2[1414] + v32_.v34;
  v6 = vsubq_f32(v4, v5);
  v7 = vnegq_f32(v4);
  v8 = vmulq_f32(v6, v6);
  LANES128(v8).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  LANES128(v8).n128_u64[1] = LANES128(v8).n128_u64[0];
  v9 = vrsqrteq_f32(v8);
  v10 = vmulq_f32(v9, vrsqrtsq_f32(v9, vmulq_f32(v8, v9)));
  v11 = vbicq_s8(
      vmulq_f32(v6, vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v8, v10)))),
      vceqzq_f32(v8));
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v13).n128_i8[8] =
      vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v14).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v10).n128_i8[8] =
      vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v15 = vmlsq_f32(vmulq_f32(v12, v13), v10, v14);
  v16 = vmulq_f32(v15, v15);
  LANES128(v16).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v16, v16, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
          .n64_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
          .n64_u64[0];
  LANES128(v16).n128_u64[1] = LANES128(v16).n128_u64[0];
  v17 = vrsqrteq_f32(v16);
  v18 = vmulq_f32(v17, vrsqrtsq_f32(v17, vmulq_f32(v16, v17)));
  v19 = vbicq_s8(
      vmulq_f32(v15, vmulq_f32(v18, vrsqrtsq_f32(v18, vmulq_f32(v16, v18)))),
      vceqzq_f32(v16));
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v20).n128_i8[8] =
      vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v8).n128_i8[8] =
      vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v21 = vmlsq_f32(vmulq_f32(v10, v20), v8, v13);
  v22 = vmulq_f32(v19, v7);
  LANES128(v22).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
          .n64_u64[0];
  v23 = vmulq_f32(v21, v7);
  v24 = vmulq_f32(v11, v7);
  LANES128(v23).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
          .n64_u64[0];
  LANES128(v24).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
          .n64_u64[0];
  v25 = vzip1q_s32(v19, v11);
  LANES128(v19).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
          .n64_u32[1];
  LANES128(v11).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
          .n64_u32[1];
  v26 = vzip2q_s32(v19, v11);
  v27 = vzip1q_s32(v21, COERCE_AS(int32x4_t, 0));
  LANES128(v21).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
          .n64_u32[1];
  v28 = vzip2q_s32(v21, COERCE_AS(int32x4_t, 0));
  a1[2] = vzip1q_s32(v25, v27);
  a1[3] = vzip2q_s32(v25, v27);
  a1 += 2;
  a1[2] = vzip1q_s32(v26, v28);
  a1[3] = vzip2q_s32(v26, v28);
  v29 = (char*)BaseNx_2a1b90();
  nn_os_LockMutex(v29 + 840);
  nn_atk_277c50((float32x4_t*)LANES128(a1[-1]).n128_u64[0], a1);
  v30 = (char*)BaseNx_2a1b90();
  return nn_os_UnlockMutex(v30 + 840);
}

#pragma GCC visibility pop
