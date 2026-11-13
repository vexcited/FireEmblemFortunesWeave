#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_283c20(_QWORD);
bool GameRoutine_283cd0(__int64);
extern __int64 (*nn_atk_detail_driver_OpusDecoderImpl_vtable[])();
extern __int64 (*nn_atk_detail_driver_OpusDecoder_vtable[])();
extern __int64 (*nn_codec_OpusDecoder_vtable[])();
__int64 nn_atk_detail_2a9ac0(__int64 a1, __int64 a2);
_QWORD* nn_atk_detail_2b9a20(_QWORD* a1);

__int64 nn_atk_detail_2a9ac0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  float* v29;
  float* v30;
  float v31;
  float v32;
  __int64 v33;
  __int64 v34;
  float* v35;
  float* v36;
  __int64 v37;
  float v38;
  float v39;
  float v40;
  __int64 v41;
  float* v42;
  float* v43;
  float v44;
  float v45;
  __int64 result;
  __int64 v49;
  __int64 v50;

  result = *(_QWORD*)(a1 + 352);
  if (result == 0) {
    return result;
  }
  result = ((__int64 (*)(__int64))GameRoutine_283cd0)(result);
  if (a2 == 0 || (result & 1) == 0) {
    return result;
  }
  v49 = GameRoutine_283c20(*(_QWORD*)(a1 + 352));
  result = a1;
  v50 = a2;
  v2 = *(unsigned __int8*)(a2 + 192);
  if (v2 == *(unsigned __int8*)(v49 + 192)) {
    if (*(_BYTE*)(a2 + 192) == 0) {
      return result;
    }
  }
  else {
    *(_BYTE*)(v49 + 192) = v2;
    *(_WORD*)(a1 + 232) |= 8u;
    if ((*(_BYTE*)(v49 + 192) & 1) == 0) {
      return result;
    }
  }
  v3 = *(_DWORD*)(v49 + 208);
  if (v3 >= (signed __int32)*(_DWORD*)(a2 + 208)) {
    v3 = *(_DWORD*)(a2 + 208);
  }
  if (v3 < 1) {
    goto LABEL_28;
  }
  v4 = v3 & 3;
  if ((unsigned int)v3 < 4) {
    i = 0;
    if (v4 == 0) {
      goto LABEL_28;
    }
    goto LABEL_34;
  }
  v6 = -(__int64)(v3 & 0x7FFFFFFC);
  v7 = 3;
  do {
    v8 = *(_QWORD*)(v49 + 200) + v7;
    v9 = *(unsigned __int8*)(*(_QWORD*)(a2 + 200) + v7 - 3);
    if (v9 != *(unsigned __int8*)(v8 - 3)) {
      *(_BYTE*)(v8 - 3) = v9;
      *(_WORD*)(a1 + 232) |= 8u;
    }
    v10 = *(_QWORD*)(v49 + 200) + v7;
    v11 = *(unsigned __int8*)(*(_QWORD*)(a2 + 200) + v7 - 2);
    if (v11 != *(unsigned __int8*)(v10 - 2)) {
      *(_BYTE*)(v10 - 2) = v11;
      *(_WORD*)(a1 + 232) |= 8u;
    }
    v12 = *(_QWORD*)(v49 + 200) + v7;
    v13 = *(unsigned __int8*)(*(_QWORD*)(a2 + 200) + v7 - 1);
    if (v13 == *(unsigned __int8*)(v12 - 1)) {
      v14 = *(_QWORD*)(v49 + 200);
      v15 = *(unsigned __int8*)(*(_QWORD*)(a2 + 200) + v7);
      if (v15 == *(unsigned __int8*)(v14 + v7)) {
        goto LABEL_17;
      }
    }
    else {
      *(_BYTE*)(v12 - 1) = v13;
      *(_WORD*)(a1 + 232) |= 8u;
      v14 = *(_QWORD*)(v49 + 200);
      v15 = *(unsigned __int8*)(*(_QWORD*)(a2 + 200) + v7);
      if (v15 == *(unsigned __int8*)(v14 + v7)) {
        goto LABEL_17;
      }
    }
    *(_BYTE*)(v14 + v7) = v15;
    *(_WORD*)(a1 + 232) |= 8u;
  LABEL_17:
    v7 += 4;
  } while (v6 + v7 != 3);
  for (i = v7 - 3; v4 != 0; --v4) {
  LABEL_34:
    v21 = *(_QWORD*)(v49 + 200);
    v22 = *(unsigned __int8*)(*(_QWORD*)(a2 + 200) + i);
    if (v22 != *(unsigned __int8*)(v21 + i)) {
      *(_BYTE*)(v21 + i) = v22;
      *(_WORD*)(a1 + 232) |= 8u;
    }
    ++i;
  }
LABEL_28:
  if (*(_DWORD*)(a1 + 392) == 1) {
    v16 = a1;
    v17 = v50;
    v18 = v49;
    result = (__int64)X8CALL_X0(
        _QWORD*,
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
            **(_QWORD**)(result + 384) + 56LL))(
            (void*)*(_QWORD**)(result + 384), *(_QWORD*)(result + 384)));
    if ((int)result >= 1) {
      v19 = result & 3;
      if ((unsigned int)result >= 4) {
        v23 = v17 + 8;
        v24 = v18 + 8;
        v25 = 0;
        do {
          v26 = *(float*)(v23 - 8);
          if (v26 != *(float*)(v24 - 8)) {
            *(float*)(v24 - 8) = v26;
            *(_WORD*)(v16 + 232) |= 8u;
          }
          v27 = *(float*)(v23 - 4);
          if (v27 != *(float*)(v24 - 4)) {
            *(float*)(v24 - 4) = v27;
            *(_WORD*)(v16 + 232) |= 8u;
          }
          if (*(float*)v23 != *(float*)v24) {
            *(_DWORD*)v24 = *(_DWORD*)v23;
            *(_WORD*)(v16 + 232) |= 8u;
          }
          v28 = *(float*)(v23 + 4);
          if (v28 != *(float*)(v24 + 4)) {
            *(float*)(v24 + 4) = v28;
            *(_WORD*)(v16 + 232) |= 8u;
          }
          v25 -= 4;
          v23 += 16;
          v24 += 16;
        } while (-(result & 0x7FFFFFFC) != v25);
        v20 = -v25;
        if ((result & 3) != 0) {
          goto LABEL_47;
        }
      }
      else {
        v20 = 0;
        if ((result & 3) == 0) {
          goto LABEL_51;
        }
      LABEL_47:
        v29 = (float*)(v18 + 4 * v20);
        v30 = (float*)(v17 + 4 * v20);
        do {
          v31 = *v30++;
          v32 = v31;
          if (v31 != *v29) {
            *v29 = v32;
            *(_WORD*)(v16 + 232) |= 8u;
          }
          ++v29;
          --v19;
        } while (v19 != 0);
      }
    LABEL_51:
      v33 = result & 3;
      if ((unsigned int)result >= 4) {
        v35 = (float*)(v17 + 108);
        v36 = (float*)(v18 + 108);
        v37 = 0;
        do {
          v38 = *(v35 - 3);
          if (v38 != *(v36 - 3)) {
            *(v36 - 3) = v38;
            *(_WORD*)(v16 + 232) |= 8u;
          }
          v39 = *(v35 - 2);
          if (v39 != *(v36 - 2)) {
            *(v36 - 2) = v39;
            *(_WORD*)(v16 + 232) |= 8u;
          }
          v40 = *(v35 - 1);
          if (v40 != *(v36 - 1)) {
            *(v36 - 1) = v40;
            *(_WORD*)(v16 + 232) |= 8u;
          }
          if (*v35 != *v36) {
            *v36 = *v35;
            *(_WORD*)(v16 + 232) |= 8u;
          }
          v35 += 4;
          v37 -= 4;
          v36 += 4;
        } while (-(result & 0x7FFFFFFC) != v37);
        v34 = -v37;
        if ((result & 3) != 0) {
          goto LABEL_65;
        }
      }
      else {
        v34 = 0;
        if ((result & 3) == 0) {
          return result;
        }
      LABEL_65:
        v41 = 4 * v34 + 96;
        v42 = (float*)(v18 + v41);
        v43 = (float*)(v17 + v41);
        do {
          v44 = *v43++;
          v45 = v44;
          if (v44 != *v42) {
            *v42 = v45;
            *(_WORD*)(v16 + 232) |= 8u;
          }
          ++v42;
          --v33;
        } while (v33 != 0);
      }
    }
  }
  return result;
}

_QWORD* nn_atk_detail_2b9a20(_QWORD* a1)
{
  _QWORD* result;

  *a1 = nn_atk_detail_driver_OpusDecoder_vtable;
  a1[1] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[2] = nn_codec_OpusDecoder_vtable;
  a1[3] = 0;
  result = a1 + 8;
  result[9] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  *((_DWORD*)result + 10) = 0;
  result[6] = 0;
  result[7] = 0;
  *result = nn_atk_detail_driver_OpusDecoderImpl_vtable;
  result[1] = 0;
  return result;
}

#pragma GCC visibility pop
