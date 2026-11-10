#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_irsensor_detail_GetIrCameraHandlePlayerNumber_plt(_QWORD);
__int64
    nn_irsensor_detail_InternalErrorHandler_Destroy_InternalErrorHandler_plt(
        _QWORD);
__int64
    nn_irsensor_detail_InternalErrorHandler_InternalErrorHandler_plt(_QWORD);
__int64 nn_irsensor_detail_Session_Destroy_Session_plt(_QWORD);
__int64 nn_irsensor_detail_Session_Session_plt(void);
__int64 nn_irsensor_detail_StatusManagerHolder_Destroy_StatusManagerHolder_plt(
    _QWORD);
__int64 nn_irsensor_detail_StatusManagerHolder_StatusManagerHolder_plt(_QWORD);
extern __int64 SdkData_e891e8;
__int64 nn_irsensor_detail_IrSensorSession_IrSensorSession(__int64 a1,
                                                           _QWORD* a2);
void nn_irsensor_detail_IrSensorSession_Destroy_IrSensorSession(void* this_);
__int64 nn_irsensor_detail_IrSensorSession_GetMomentProcessorStateDefault(
    __int64 a1, __int64 a2, __int64 a3);

__int64 nn_irsensor_detail_IrSensorSession_IrSensorSession(__int64 a1,
                                                           _QWORD* a2)
{
  __int64 v4;
  __int64 result;

  nn_irsensor_detail_Session_Session_plt();
  v4 = SdkData_e891e8;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)a1 = v4 + 16;
  *(_QWORD*)(a1 + 56) = *a2;
  nn_irsensor_detail_StatusManagerHolder_StatusManagerHolder_plt(a1 + 64);
  result = nn_irsensor_detail_InternalErrorHandler_InternalErrorHandler_plt(
      a1 + 304);
  *(_QWORD*)(a1 + 218) = 0;
  a1 += 218;
  *(_DWORD*)(a1 + 158) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 - 82) = 0;
  *(_QWORD*)(a1 - 74) = 0;
  *(_QWORD*)(a1 - 66) = 0;
  *(_QWORD*)(a1 - 58) = 0;
  *(_QWORD*)(a1 - 50) = 0;
  *(_QWORD*)(a1 - 42) = 0;
  *(_QWORD*)(a1 - 34) = 0;
  *(_QWORD*)(a1 - 26) = 0;
  *(_QWORD*)(a1 - 18) = 0;
  *(_QWORD*)(a1 - 10) = 0;
  *(_BYTE*)(a1 - 2) = 0;
  *(_BYTE*)(a1 + 80) = 1;
  *(_QWORD*)(a1 + 72) = 0x101010101010101LL;
  *(_QWORD*)(a1 + 162) = 0;
  *(_QWORD*)(a1 + 170) = 0;
  *(_QWORD*)(a1 + 178) = 0;
  *(_QWORD*)(a1 + 186) = 0;
  *(_DWORD*)(a1 + 194) = 0;
  return result;
}

void nn_irsensor_detail_IrSensorSession_Destroy_IrSensorSession(void* this_)
{
  __int64 v2;

  nn_irsensor_detail_InternalErrorHandler_Destroy_InternalErrorHandler_plt(
      (char*)this_ + 304);
  nn_irsensor_detail_StatusManagerHolder_Destroy_StatusManagerHolder_plt(
      (char*)this_ + 64);
  v2 = *((_QWORD*)this_ + 6);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  nn_irsensor_detail_Session_Destroy_Session_plt(this_);
}

__int64 nn_irsensor_detail_IrSensorSession_GetMomentProcessorStateDefault(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  float v12;
  float v13;
  float v14;
  float v15;
  int v16;
  int v17;
  float v18;
  float v19;
  float v20;
  float v21;
  int v22;
  int v23;
  float v24;
  float v25;
  int v26;
  float v27;
  float v28;
  int v29;
  int v30;
  float v31;
  float v32;
  float v33;
  float v34;

  result = nn_irsensor_detail_GetIrCameraHandlePlayerNumber_plt(a3);
  v6 = a1 + 8LL * (int)result;
  v7 = a2 + 60;
  v8 = -12;
  *(_QWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  *(_DWORD*)(a2 + 16) = 3;
  v9 = a1 + 208;
  do {
    v10 = 0;
    v11 = 0;
    v12 = 0.0f;
    v13 = 0.0f;
    if ((*(_BYTE*)(v9 + (int)result) & 1) != 0) {
      v12 = vcvts_n_f32_s32(
          (__int16)(*(_WORD*)(v6 + 222) +
                    (((unsigned int)*(__int16*)(v6 + 222) >> 28) & 7)) >>
              3,
          1u);
      v13 = vcvts_n_f32_s32((v8 + 13) * (*(__int16*)(v6 + 224) / 6), 1u);
      v11 = 1132396544;
    }
    *(_DWORD*)(v7 - 36) = v11;
    *(float*)(v7 - 32) = v12;
    *(float*)(v7 - 28) = v13;
    v14 = 0.0f;
    v15 = 0.0f;
    if (*(_BYTE*)(v9 + (int)result) == 1) {
      v14 = vcvts_n_f32_s32(
          3 * ((__int16)(*(_WORD*)(v6 + 222) +
                         (((unsigned int)*(__int16*)(v6 + 222) >> 28) & 7)) >>
               3),
          1u);
      v15 = vcvts_n_f32_s32((v8 + 13) * (*(__int16*)(v6 + 224) / 6), 1u);
      v10 = 1132396544;
    }
    *(_DWORD*)(v7 - 24) = v10;
    *(float*)(v7 - 20) = v14;
    *(float*)(v7 - 16) = v15;
    v16 = 0;
    v17 = 0;
    v18 = 0.0f;
    v19 = 0.0f;
    if (*(_BYTE*)(v9 + (int)result) == 1) {
      v18 = vcvts_n_f32_s32(
          (__int16)(5 * ((unsigned int)(__int16)(*(_WORD*)(v6 + 222) +
                                                 (((unsigned int)*(
                                                       __int16*)(v6 + 222) >>
                                                   28) &
                                                  7)) >>
                         3)),
          1u);
      v19 = vcvts_n_f32_s32((v8 + 13) * (*(__int16*)(v6 + 224) / 6), 1u);
      v17 = 1132396544;
    }
    *(_DWORD*)(v7 - 12) = v17;
    *(float*)(v7 - 8) = v18;
    *(float*)(v7 - 4) = v19;
    v20 = 0.0f;
    v21 = 0.0f;
    if (*(_BYTE*)(v9 + (int)result) == 1) {
      v20 = vcvts_n_f32_s32(
          (__int16)(7 * ((unsigned int)(__int16)(*(_WORD*)(v6 + 222) +
                                                 (((unsigned int)*(
                                                       __int16*)(v6 + 222) >>
                                                   28) &
                                                  7)) >>
                         3)),
          1u);
      v21 = vcvts_n_f32_s32((v8 + 13) * (*(__int16*)(v6 + 224) / 6), 1u);
      v16 = 1132396544;
    }
    *(_DWORD*)v7 = v16;
    *(float*)(v7 + 4) = v20;
    *(float*)(v7 + 8) = v21;
    v22 = 0;
    v23 = 0;
    v24 = 0.0f;
    v25 = 0.0f;
    if (*(_BYTE*)(v9 + (int)result) == 1) {
      v26 = (__int16)(*(_WORD*)(v6 + 222) +
                      (((unsigned int)*(__int16*)(v6 + 222) >> 28) & 7));
      v24 = vcvts_n_f32_s32((v26 & 0xFFFFFFF8) + (v26 >> 3), 1u);
      v25 = vcvts_n_f32_s32((v8 + 13) * (*(__int16*)(v6 + 224) / 6), 1u);
      v23 = 1132396544;
    }
    *(_DWORD*)(v7 + 12) = v23;
    *(float*)(v7 + 16) = v24;
    *(float*)(v7 + 20) = v25;
    v27 = 0.0f;
    v28 = 0.0f;
    if (*(_BYTE*)(v9 + (int)result) == 1) {
      v27 = vcvts_n_f32_s32(
          11 * ((__int16)(*(_WORD*)(v6 + 222) +
                          (((unsigned int)*(__int16*)(v6 + 222) >> 28) & 7)) >>
                3),
          1u);
      v28 = vcvts_n_f32_s32((v8 + 13) * (*(__int16*)(v6 + 224) / 6), 1u);
      v22 = 1132396544;
    }
    *(_DWORD*)(v7 + 24) = v22;
    *(float*)(v7 + 28) = v27;
    *(float*)(v7 + 32) = v28;
    v29 = 0;
    v30 = 0;
    v31 = 0.0f;
    v32 = 0.0f;
    if (*(_BYTE*)(v9 + (int)result) == 1) {
      v31 = vcvts_n_f32_s32(
          13 * ((__int16)(*(_WORD*)(v6 + 222) +
                          (((unsigned int)*(__int16*)(v6 + 222) >> 28) & 7)) >>
                3),
          1u);
      v32 = vcvts_n_f32_s32((v8 + 13) * (*(__int16*)(v6 + 224) / 6), 1u);
      v30 = 1132396544;
    }
    *(_DWORD*)(v7 + 36) = v30;
    *(float*)(v7 + 40) = v31;
    *(float*)(v7 + 44) = v32;
    v33 = 0.0f;
    v34 = 0.0f;
    if (*(_BYTE*)(v9 + (int)result) == 1) {
      v33 = vcvts_n_f32_s32(
          15 * ((__int16)(*(_WORD*)(v6 + 222) +
                          (((unsigned int)*(__int16*)(v6 + 222) >> 28) & 7)) >>
                3),
          1u);
      v34 = vcvts_n_f32_s32((v8 + 13) * (*(__int16*)(v6 + 224) / 6), 1u);
      v29 = 1132396544;
    }
    *(_DWORD*)(v7 + 48) = v29;
    *(float*)(v7 + 52) = v33;
    v8 += 2;
    *(float*)(v7 + 56) = v34;
    v7 += 96;
  } while (v8 != 0);
  return result;
}

#pragma GCC visibility pop
