#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_GetValidSizeAsUtf8String_plt(_QWORD, _QWORD);
__int64 nn_lm_detail_LogPacketHeader_SetHead_plt(_QWORD, _QWORD);
__int64 nn_lm_detail_LogPacketHeader_SetPayloadSize_plt(_QWORD, _QWORD);
__int64 nn_lm_detail_LogPacketHeader_SetTail_plt(_QWORD, _QWORD);
_BYTE* nn_lm_detail_LogPacketTransmitterBase_PushDataChunkImpl(
    _QWORD* a1, unsigned int a2, unsigned __int64 a3, __int64 a4, char a5);

_BYTE* nn_lm_detail_LogPacketTransmitterBase_PushDataChunkImpl(
    _QWORD* a1, unsigned int a2, unsigned __int64 a3, __int64 a4, char a5)
{
  unsigned __int64 v6;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  bool v11;
  _BYTE* result;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  int v22;
  unsigned __int64 v23;
  bool v24;
  unsigned __int64 v25;
  char v26;
  unsigned __int64 v27;
  char v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;

  v6 = a3;
  v8 = 0;
  v9 = a2;
  v10 = a2;
  do {
    ++v8;
    v11 = v10 > 0x7F;
    v10 >>= 7;
  } while (v11);
  result = (_BYTE*)a1[4];
  v13 = a3 + a4;
  v14 = v8 + 2;
  v15 = -v8;
  if ((a5 & 1) != 0) {
    v16 = 4;
  }
  else {
    v16 = 1;
  }
  do {
    v17 = a1[2] - (_QWORD)result;
    if (v17 >= v14) {
      v18 = 1;
      if (v15 + v17 >= 0x81) {
        v19 = 127;
        do {
          v19 |= v19 << 7;
          ++v18;
        } while (v15 + v17 > v19 + v18);
      }
      v20 = v15 - v18 + v17;
      if (v20 >= v16) {
        goto LABEL_16;
      }
    }
    if (result != (_BYTE*)a1[3]) {
      nn_lm_detail_LogPacketHeader_SetTail_plt(*a1, 0);
      nn_lm_detail_LogPacketHeader_SetPayloadSize_plt(
          *a1, (unsigned int)(*((_DWORD*)a1 + 8) - *((_DWORD*)a1 + 6)));
      ((void (*)(_QWORD, _QWORD))a1[6])(a1[1], a1[4] - a1[1]);
      nn_lm_detail_LogPacketHeader_SetHead_plt(*a1, 0);
      result = (_BYTE*)a1[3];
      v17 = a1[2] - (_QWORD)result;
      a1[4] = result;
    }
    if (v17 < v14) {
      v20 = 0;
    LABEL_16:
      if (v13 - v6 >= v20) {
        v21 = v20;
      }
      else {
        v21 = v13 - v6;
      }
      if ((a5 & 1) == 0) {
        goto LABEL_22;
      }
    LABEL_20:
      v22 = nn_diag_detail_GetValidSizeAsUtf8String_plt(v6, v21);
      v23 = (unsigned int)v22;
      v24 = v22 < 0;
      result = (_BYTE*)a1[4];
      if (!v24) {
        v21 = v23;
      }
      goto LABEL_22;
    }
    v29 = v15 + v17;
    v30 = 1;
    if (v29 >= 0x81) {
      v31 = 127;
      do {
        v31 |= v31 << 7;
        ++v30;
      } while (v29 > v31 + v30);
    }
    v32 = v29 - v30;
    if (v13 - v6 >= v32) {
      v21 = v32;
    }
    else {
      v21 = v13 - v6;
    }
    if ((a5 & 1) != 0) {
      goto LABEL_20;
    }
  LABEL_22:
    v25 = v9;
    do {
      if (v25 >= 0x80) {
        v26 = 0x80;
      }
      else {
        v26 = 0;
      }
      *result = v26 & 0x80 | v25 & 0x7F;
      result = (_BYTE*)(a1[4] + 1LL);
      a1[4] = result;
      v11 = v25 > 0x7F;
      v25 >>= 7;
    } while (v11);
    v27 = v21;
    do {
      if ((v27 & 0xFFFFFF80) != 0) {
        v28 = 0x80;
      }
      else {
        v28 = 0;
      }
      *result = v28 & 0x80 | v27 & 0x7F;
      result = (_BYTE*)(a1[4] + 1LL);
      a1[4] = result;
      v11 = v27 > 0x7F;
      v27 >>= 7;
    } while (v11);
    if (v21 != 0) {
      memcpy_plt(result, v6, v21);
      result = (_BYTE*)(a1[4] + v21);
      a1[4] = result;
    }
    v6 += v21;
  } while (v6 < v13);
  return result;
}

#pragma GCC visibility pop
