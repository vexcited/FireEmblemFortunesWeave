#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDKmemclear_plt(_QWORD, _QWORD);
extern _UNKNOWN SdkData_c2cb48;
extern _UNKNOWN SdkData_c2cd50;
extern _UNKNOWN SdkData_c2cf58;
extern _UNKNOWN SdkData_c2d0f8;
extern _UNKNOWN SdkData_c2d108;
extern _UNKNOWN SdkData_c2d118;
extern _UNKNOWN SdkData_c2d128;
extern _UNKNOWN SdkData_c2d138;
extern _UNKNOWN SdkData_c2d148;
extern _UNKNOWN SdkData_c2d158;
extern _UNKNOWN SdkData_c2d168;
extern _UNKNOWN SdkData_c2d178;
__int64 nn_codec_FDKaacEnc_getChannelAssignment(int a1, int a2);
__int64 nn_codec_FDKaacEnc_InitChannelMapping(int a1, int a2, __int64 a3);

__int64 nn_codec_FDKaacEnc_getChannelAssignment(int a1, int a2)
{
  _DWORD* v2;

  v2 = &SdkData_c2cf58;
  if (a2 == 1) {
    v2 = &SdkData_c2cd50;
  }
  if (a2 == 0) {
    v2 = &SdkData_c2cb48;
  }
  if (a1 == v2[117]) {
    return (__int64)(v2 + 118);
  }
  if (a1 == v2[104]) {
    return (__int64)(v2 + 105);
  }
  if (a1 == v2[91]) {
    return (__int64)(v2 + 92);
  }
  if (a1 == v2[78]) {
    return (__int64)(v2 + 79);
  }
  if (a1 == v2[65]) {
    return (__int64)(v2 + 66);
  }
  if (a1 == v2[52]) {
    return (__int64)(v2 + 53);
  }
  if (a1 == v2[39]) {
    return (__int64)(v2 + 40);
  }
  if (a1 == v2[26]) {
    return (__int64)(v2 + 27);
  }
  return (__int64)&v2[13 * (a1 == v2[13]) + 1];
}

__int64 nn_codec_FDKaacEnc_InitChannelMapping(int a1, int a2, __int64 a3)
{
  __int64 result;
  _DWORD* v7;
  _DWORD* v8;
  int v9;
  unsigned int v10;
  _DWORD* v11;
  int v12;
  unsigned int v13;
  _DWORD* v14;
  unsigned int v15;
  _DWORD* v16;
  int v17;
  unsigned int v18;
  _DWORD* v19;
  int v20;
  unsigned int v21;
  _DWORD* v22;
  unsigned int v23;
  _DWORD* v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  _DWORD* v28;
  unsigned int v29;
  _DWORD* v30;
  unsigned int v31;
  _DWORD* v32;
  unsigned int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  _DWORD* v37;
  unsigned int v38;
  _DWORD* v39;
  unsigned int v40;
  _DWORD* v41;
  unsigned int v42;
  _DWORD* v43;
  int v44;
  unsigned int v45;
  _DWORD* v46;
  int v47;
  unsigned int v48;
  _DWORD* v49;
  unsigned int v50;
  _DWORD* v51;
  int v52;
  unsigned int v53;
  _DWORD* v54;
  unsigned int v55;
  _DWORD* v56;

  nn_codec_FDKmemclear_plt(a3, 208);
  result = 12512;
  if (a1 <= 4) {
    if (a1 > 2) {
      if (a1 == 3) {
        v7 = &SdkData_c2d118;
      }
      else {
        v7 = &SdkData_c2d128;
      }
    }
    else if (a1 == 1) {
      v7 = &SdkData_c2d0f8;
    }
    else {
      if (a1 != 2) {
        return result;
      }
      v7 = &SdkData_c2d108;
    }
  }
  else if (a1 <= 6) {
    if (a1 == 5) {
      v7 = &SdkData_c2d138;
    }
    else {
      v7 = &SdkData_c2d148;
    }
  }
  else {
    switch (a1) {
    case 7:
      v7 = &SdkData_c2d158;
      break;
    case 33:
      v7 = &SdkData_c2d168;
      break;
    case 34:
      v7 = &SdkData_c2d178;
      break;
    default:
      return result;
    }
  }
  *(_DWORD*)a3 = a1;
  *(_DWORD*)(a3 + 4) = v7[1];
  *(_DWORD*)(a3 + 8) = v7[2];
  *(_DWORD*)(a3 + 12) = v7[3];
  if (a1 > 5) {
    if ((unsigned int)(a1 - 33) >= 2 && a1 == 6) {
      v16 = &SdkData_c2cf58;
      if (a2 == 1) {
        v16 = &SdkData_c2cd50;
      }
      if (a2 == 0) {
        v16 = &SdkData_c2cb48;
      }
      v17 = v16[117];
      if (v17 == 6) {
        v18 = 9;
      }
      else if (v16[104] == 6) {
        v18 = 8;
      }
      else if (v16[91] == 6) {
        v18 = 7;
      }
      else if (v16[78] == 6) {
        v18 = 6;
      }
      else if (v16[65] == 6) {
        v18 = 5;
      }
      else if (v16[52] == 6) {
        v18 = 4;
      }
      else if (v16[39] == 6) {
        v18 = 3;
      }
      else if (v16[26] == 6) {
        v18 = 2;
      }
      else {
        v18 = v16[13] == 6;
      }
      *(_QWORD*)(a3 + 16) = 0;
      *(_DWORD*)(a3 + 36) = 515396064;
      *(_DWORD*)(a3 + 24) = 1;
      *(_DWORD*)(a3 + 28) = v16[13 * v18 + 1];
      if (v17 == 6) {
        v38 = 9;
      }
      else if (v16[104] == 6) {
        v38 = 8;
      }
      else if (v16[91] == 6) {
        v38 = 7;
      }
      else if (v16[78] == 6) {
        v38 = 6;
      }
      else if (v16[65] == 6) {
        v38 = 5;
      }
      else if (v16[52] == 6) {
        v38 = 4;
      }
      else if (v16[39] == 6) {
        v38 = 3;
      }
      else if (v16[26] == 6) {
        v38 = 2;
      }
      else {
        v38 = v16[13] == 6;
      }
      *(_QWORD*)(a3 + 40) = 1;
      v39 = &v16[13 * v38];
      *(_DWORD*)(a3 + 60) = 751619264;
      *(_DWORD*)(a3 + 48) = 2;
      *(_DWORD*)(a3 + 52) = v39[2];
      *(_DWORD*)(a3 + 56) = v39[3];
      if (v17 == 6) {
        v40 = 9;
      }
      else if (v16[104] == 6) {
        v40 = 8;
      }
      else if (v16[91] == 6) {
        v40 = 7;
      }
      else if (v16[78] == 6) {
        v40 = 6;
      }
      else if (v16[65] == 6) {
        v40 = 5;
      }
      else if (v16[52] == 6) {
        v40 = 4;
      }
      else if (v16[39] == 6) {
        v40 = 3;
      }
      else if (v16[26] == 6) {
        v40 = 2;
      }
      else {
        v40 = v16[13] == 6;
      }
      *(_DWORD*)(a3 + 84) = 751619264;
      *(_DWORD*)(a3 + 72) = 2;
      v41 = &v16[13 * v40];
      *(_QWORD*)(a3 + 64) = 0x100000001LL;
      *(_DWORD*)(a3 + 76) = v41[4];
      *(_DWORD*)(a3 + 80) = v41[5];
      if (v17 == 6) {
        v42 = 9;
      }
      else if (v16[104] == 6) {
        v42 = 8;
      }
      else if (v16[91] == 6) {
        v42 = 7;
      }
      else if (v16[78] == 6) {
        v42 = 6;
      }
      else if (v16[65] == 6) {
        v42 = 5;
      }
      else if (v16[52] == 6) {
        v42 = 4;
      }
      else if (v16[39] == 6) {
        v42 = 3;
      }
      else if (v16[26] == 6) {
        v42 = 2;
      }
      else {
        v42 = v16[13] == 6;
      }
      v35 = 0;
      v34 = 100;
      *(_DWORD*)(a3 + 88) = 3;
      *(_DWORD*)(a3 + 108) = 128849016;
      *(_DWORD*)(a3 + 96) = 1;
      v36 = 92;
      v37 = &v16[13 * v42 + 6];
    }
    else {
      v11 = &SdkData_c2cf58;
      if (a2 == 1) {
        v11 = &SdkData_c2cd50;
      }
      if (a2 == 0) {
        v11 = &SdkData_c2cb48;
      }
      v12 = v11[117];
      if (a1 == v12) {
        v13 = 9;
      }
      else if (a1 == v11[104]) {
        v13 = 8;
      }
      else if (a1 == v11[91]) {
        v13 = 7;
      }
      else if (a1 == v11[78]) {
        v13 = 6;
      }
      else if (a1 == v11[65]) {
        v13 = 5;
      }
      else if (a1 == v11[52]) {
        v13 = 4;
      }
      else if (a1 == v11[39]) {
        v13 = 3;
      }
      else if (a1 == v11[26]) {
        v13 = 2;
      }
      else {
        v13 = a1 == v11[13];
      }
      *(_QWORD*)(a3 + 16) = 0;
      *(_DWORD*)(a3 + 36) = 386547072;
      *(_DWORD*)(a3 + 24) = 1;
      *(_DWORD*)(a3 + 28) = v11[13 * v13 + 1];
      if (a1 == v12) {
        v27 = 9;
      }
      else if (a1 == v11[104]) {
        v27 = 8;
      }
      else if (a1 == v11[91]) {
        v27 = 7;
      }
      else if (a1 == v11[78]) {
        v27 = 6;
      }
      else if (a1 == v11[65]) {
        v27 = 5;
      }
      else if (a1 == v11[52]) {
        v27 = 4;
      }
      else if (a1 == v11[39]) {
        v27 = 3;
      }
      else if (a1 == v11[26]) {
        v27 = 2;
      }
      else {
        v27 = a1 == v11[13];
      }
      *(_QWORD*)(a3 + 40) = 1;
      v28 = &v11[13 * v27];
      *(_DWORD*)(a3 + 60) = 558345728;
      *(_DWORD*)(a3 + 48) = 2;
      *(_DWORD*)(a3 + 52) = v28[2];
      *(_DWORD*)(a3 + 56) = v28[3];
      if (a1 == v12) {
        v29 = 9;
      }
      else if (a1 == v11[104]) {
        v29 = 8;
      }
      else if (a1 == v11[91]) {
        v29 = 7;
      }
      else if (a1 == v11[78]) {
        v29 = 6;
      }
      else if (a1 == v11[65]) {
        v29 = 5;
      }
      else if (a1 == v11[52]) {
        v29 = 4;
      }
      else if (a1 == v11[39]) {
        v29 = 3;
      }
      else if (a1 == v11[26]) {
        v29 = 2;
      }
      else {
        v29 = a1 == v11[13];
      }
      *(_DWORD*)(a3 + 72) = 2;
      *(_DWORD*)(a3 + 84) = 558345728;
      v30 = &v11[13 * v29];
      *(_QWORD*)(a3 + 64) = 0x100000001LL;
      *(_DWORD*)(a3 + 76) = v30[4];
      *(_DWORD*)(a3 + 80) = v30[5];
      if (a1 == v12) {
        v31 = 9;
      }
      else if (a1 == v11[104]) {
        v31 = 8;
      }
      else if (a1 == v11[91]) {
        v31 = 7;
      }
      else if (a1 == v11[78]) {
        v31 = 6;
      }
      else if (a1 == v11[65]) {
        v31 = 5;
      }
      else if (a1 == v11[52]) {
        v31 = 4;
      }
      else if (a1 == v11[39]) {
        v31 = 3;
      }
      else if (a1 == v11[26]) {
        v31 = 2;
      }
      else {
        v31 = a1 == v11[13];
      }
      *(_DWORD*)(a3 + 108) = 558345728;
      *(_DWORD*)(a3 + 96) = 2;
      v32 = &v11[13 * v31];
      *(_QWORD*)(a3 + 88) = 0x200000001LL;
      *(_DWORD*)(a3 + 100) = v32[6];
      *(_DWORD*)(a3 + 104) = v32[7];
      if (a1 == v12) {
        v33 = 9;
      }
      else if (a1 == v11[104]) {
        v33 = 8;
      }
      else if (a1 == v11[91]) {
        v33 = 7;
      }
      else if (a1 == v11[78]) {
        v33 = 6;
      }
      else if (a1 == v11[65]) {
        v33 = 5;
      }
      else if (a1 == v11[52]) {
        v33 = 4;
      }
      else if (a1 == v11[39]) {
        v33 = 3;
      }
      else if (a1 == v11[26]) {
        v33 = 2;
      }
      else {
        v33 = a1 == v11[13];
      }
      v34 = 124;
      v35 = 0;
      *(_DWORD*)(a3 + 112) = 3;
      *(_DWORD*)(a3 + 132) = 85899344;
      *(_DWORD*)(a3 + 120) = 1;
      v36 = 116;
      v37 = &v11[13 * v33 + 8];
    }
  }
  else if (a1 <= 2) {
    if (a1 == 1) {
      v22 = &SdkData_c2cf58;
      if (a2 == 1) {
        v22 = &SdkData_c2cd50;
      }
      if (a2 == 0) {
        v22 = &SdkData_c2cb48;
      }
      if (v22[117] == 1) {
        v23 = 9;
      }
      else if (v22[104] == 1) {
        v23 = 8;
      }
      else if (v22[91] == 1) {
        v23 = 7;
      }
      else if (v22[78] == 1) {
        v23 = 6;
      }
      else if (v22[65] == 1) {
        v23 = 5;
      }
      else if (v22[52] == 1) {
        v23 = 4;
      }
      else if (v22[39] == 1) {
        v23 = 3;
      }
      else if (v22[26] == 1) {
        v23 = 2;
      }
      else {
        v23 = v22[13] == 1;
      }
      v35 = 0;
      *(_DWORD*)(a3 + 16) = 0;
      v34 = 28;
      v36 = 20;
      *(_DWORD*)(a3 + 36) = 0x7FFFFFFF;
      v37 = &v22[13 * v23 + 1];
      *(_DWORD*)(a3 + 24) = 1;
    }
    else {
      v14 = &SdkData_c2cf58;
      if (a2 == 1) {
        v14 = &SdkData_c2cd50;
      }
      if (a2 == 0) {
        v14 = &SdkData_c2cb48;
      }
      if (v14[117] == 2) {
        v15 = 9;
      }
      else if (v14[104] == 2) {
        v15 = 8;
      }
      else if (v14[91] == 2) {
        v15 = 7;
      }
      else if (v14[78] == 2) {
        v15 = 6;
      }
      else if (v14[65] == 2) {
        v15 = 5;
      }
      else if (v14[52] == 2) {
        v15 = 4;
      }
      else if (v14[39] == 2) {
        v15 = 3;
      }
      else if (v14[26] == 2) {
        v15 = 2;
      }
      else {
        v15 = v14[13] == 2;
      }
      v35 = 0;
      v34 = 32;
      v43 = &v14[13 * v15];
      v36 = 20;
      *(_DWORD*)(a3 + 16) = 1;
      *(_DWORD*)(a3 + 36) = 0x7FFFFFFF;
      *(_DWORD*)(a3 + 24) = 2;
      v44 = v43[1];
      v37 = v43 + 2;
      *(_DWORD*)(a3 + 28) = v44;
    }
  }
  else if (a1 == 3) {
    v19 = &SdkData_c2cf58;
    if (a2 == 1) {
      v19 = &SdkData_c2cd50;
    }
    if (a2 == 0) {
      v19 = &SdkData_c2cb48;
    }
    v20 = v19[117];
    if (v20 == 3) {
      v21 = 9;
    }
    else if (v19[104] == 3) {
      v21 = 8;
    }
    else if (v19[91] == 3) {
      v21 = 7;
    }
    else if (v19[78] == 3) {
      v21 = 6;
    }
    else if (v19[65] == 3) {
      v21 = 5;
    }
    else if (v19[52] == 3) {
      v21 = 4;
    }
    else if (v19[39] == 3) {
      v21 = 3;
    }
    else if (v19[26] == 3) {
      v21 = 2;
    }
    else {
      v21 = v19[13] == 3;
    }
    *(_QWORD*)(a3 + 16) = 0;
    *(_DWORD*)(a3 + 36) = 858993472;
    *(_DWORD*)(a3 + 24) = 1;
    *(_DWORD*)(a3 + 28) = v19[13 * v21 + 1];
    if (v20 == 3) {
      v45 = 9;
    }
    else if (v19[104] == 3) {
      v45 = 8;
    }
    else if (v19[91] == 3) {
      v45 = 7;
    }
    else if (v19[78] == 3) {
      v45 = 6;
    }
    else if (v19[65] == 3) {
      v45 = 5;
    }
    else if (v19[52] == 3) {
      v45 = 4;
    }
    else if (v19[39] == 3) {
      v45 = 3;
    }
    else if (v19[26] == 3) {
      v45 = 2;
    }
    else {
      v45 = v19[13] == 3;
    }
    *(_DWORD*)(a3 + 40) = 1;
    v35 = 0;
    v34 = 56;
    *(_DWORD*)(a3 + 60) = 1288490240;
    *(_DWORD*)(a3 + 48) = 2;
    v46 = &v19[13 * v45];
    v36 = 44;
    v47 = v46[2];
    v37 = v46 + 3;
    *(_DWORD*)(a3 + 52) = v47;
  }
  else if (a1 == 4) {
    v24 = &SdkData_c2cf58;
    if (a2 == 1) {
      v24 = &SdkData_c2cd50;
    }
    if (a2 == 0) {
      v24 = &SdkData_c2cb48;
    }
    v25 = v24[117];
    if (v25 == 4) {
      v26 = 9;
    }
    else if (v24[104] == 4) {
      v26 = 8;
    }
    else if (v24[91] == 4) {
      v26 = 7;
    }
    else if (v24[78] == 4) {
      v26 = 6;
    }
    else if (v24[65] == 4) {
      v26 = 5;
    }
    else if (v24[52] == 4) {
      v26 = 4;
    }
    else if (v24[39] == 4) {
      v26 = 3;
    }
    else if (v24[26] == 4) {
      v26 = 2;
    }
    else {
      v26 = v24[13] == 4;
    }
    *(_QWORD*)(a3 + 16) = 0;
    *(_DWORD*)(a3 + 36) = 644245120;
    *(_DWORD*)(a3 + 24) = 1;
    *(_DWORD*)(a3 + 28) = v24[13 * v26 + 1];
    if (v25 == 4) {
      v53 = 9;
    }
    else if (v24[104] == 4) {
      v53 = 8;
    }
    else if (v24[91] == 4) {
      v53 = 7;
    }
    else if (v24[78] == 4) {
      v53 = 6;
    }
    else if (v24[65] == 4) {
      v53 = 5;
    }
    else if (v24[52] == 4) {
      v53 = 4;
    }
    else if (v24[39] == 4) {
      v53 = 3;
    }
    else if (v24[26] == 4) {
      v53 = 2;
    }
    else {
      v53 = v24[13] == 4;
    }
    v35 = 1;
    *(_QWORD*)(a3 + 40) = 1;
    *(_DWORD*)(a3 + 60) = 858993472;
    *(_DWORD*)(a3 + 48) = 2;
    v54 = &v24[13 * v53];
    *(_DWORD*)(a3 + 52) = v54[2];
    *(_DWORD*)(a3 + 56) = v54[3];
    if (v25 == 4) {
      v55 = 9;
    }
    else if (v24[104] == 4) {
      v55 = 8;
    }
    else if (v24[91] == 4) {
      v55 = 7;
    }
    else if (v24[78] == 4) {
      v55 = 6;
    }
    else if (v24[65] == 4) {
      v55 = 5;
    }
    else if (v24[52] == 4) {
      v55 = 4;
    }
    else if (v24[39] == 4) {
      v55 = 3;
    }
    else if (v24[26] == 4) {
      v55 = 2;
    }
    else {
      v55 = v24[13] == 4;
    }
    *(_DWORD*)(a3 + 84) = 644245120;
    *(_DWORD*)(a3 + 64) = 0;
    v34 = 76;
    v56 = &v24[13 * v55];
    *(_DWORD*)(a3 + 72) = 1;
    v36 = 68;
    v37 = v56 + 4;
  }
  else {
    v8 = &SdkData_c2cf58;
    if (a2 == 1) {
      v8 = &SdkData_c2cd50;
    }
    if (a2 == 0) {
      v8 = &SdkData_c2cb48;
    }
    v9 = v8[117];
    if (v9 == 5) {
      v10 = 9;
    }
    else if (v8[104] == 5) {
      v10 = 8;
    }
    else if (v8[91] == 5) {
      v10 = 7;
    }
    else if (v8[78] == 5) {
      v10 = 6;
    }
    else if (v8[65] == 5) {
      v10 = 5;
    }
    else if (v8[52] == 5) {
      v10 = 4;
    }
    else if (v8[39] == 5) {
      v10 = 3;
    }
    else if (v8[26] == 5) {
      v10 = 2;
    }
    else {
      v10 = v8[13] == 5;
    }
    *(_QWORD*)(a3 + 16) = 0;
    *(_DWORD*)(a3 + 36) = 558345728;
    *(_DWORD*)(a3 + 24) = 1;
    *(_DWORD*)(a3 + 28) = v8[13 * v10 + 1];
    if (v9 == 5) {
      v48 = 9;
    }
    else if (v8[104] == 5) {
      v48 = 8;
    }
    else if (v8[91] == 5) {
      v48 = 7;
    }
    else if (v8[78] == 5) {
      v48 = 6;
    }
    else if (v8[65] == 5) {
      v48 = 5;
    }
    else if (v8[52] == 5) {
      v48 = 4;
    }
    else if (v8[39] == 5) {
      v48 = 3;
    }
    else if (v8[26] == 5) {
      v48 = 2;
    }
    else {
      v48 = v8[13] == 5;
    }
    *(_QWORD*)(a3 + 40) = 1;
    v49 = &v8[13 * v48];
    *(_DWORD*)(a3 + 48) = 2;
    *(_DWORD*)(a3 + 60) = 794568960;
    *(_DWORD*)(a3 + 52) = v49[2];
    *(_DWORD*)(a3 + 56) = v49[3];
    if (v9 == 5) {
      v50 = 9;
    }
    else if (v8[104] == 5) {
      v50 = 8;
    }
    else if (v8[91] == 5) {
      v50 = 7;
    }
    else if (v8[78] == 5) {
      v50 = 6;
    }
    else if (v8[65] == 5) {
      v50 = 5;
    }
    else if (v8[52] == 5) {
      v50 = 4;
    }
    else if (v8[39] == 5) {
      v50 = 3;
    }
    else if (v8[26] == 5) {
      v50 = 2;
    }
    else {
      v50 = v8[13] == 5;
    }
    *(_DWORD*)(a3 + 84) = 794568960;
    *(_DWORD*)(a3 + 64) = 1;
    v51 = &v8[13 * v50];
    *(_DWORD*)(a3 + 72) = 2;
    v36 = 68;
    v34 = 80;
    v52 = v51[4];
    v37 = v51 + 5;
    *(_DWORD*)(a3 + 76) = v52;
    v35 = 1;
  }
  *(_DWORD*)(a3 + v34) = *v37;
  *(_DWORD*)(a3 + v36) = v35;
  return 0;
}

#pragma GCC visibility pop
