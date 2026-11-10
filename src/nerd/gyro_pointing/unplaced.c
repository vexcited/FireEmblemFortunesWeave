#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 SdkRoutine_879ee0(_QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
extern __int64 (*SdkData_ea8dd0)();
extern void (*SdkData_ea8dd8)();
struct PseudoSret SdkRoutine_702080(_QWORD, _QWORD, _QWORD);
__int64 nerd_gyro_pointing_6ff380(__int64 result, unsigned __int64 a2,
                                  __int64 a3, unsigned __int64 a4);
__int64 (*nerd_SetAssertionFailedCallback(__int64 (*a1)()))();
void(__attribute__((noreturn)) *
     nerd_SetVerifyFailedCallback(void(__attribute__((noreturn)) * a1)()))();
void __attribute__((noreturn)) nerd_gyro_pointing_6ff850(__int64 a1);
__int64 nerd_gyro_pointing_CompareBitwise(__int64 a1, __int64 a2);

__int64 nerd_gyro_pointing_6ff380(__int64 result, unsigned __int64 a2,
                                  __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  _BYTE* v7;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _BYTE* v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  bool v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  _BYTE* v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  _BYTE* v51;
  __int64 v52;
  unsigned __int64 v53;
  _BYTE* v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  _BYTE* v59;
  unsigned __int64 v60;
  _BYTE* v61;
  __int64 v62;
  _BYTE* v63;
  __int64 v64;
  unsigned __int64 v65;
  _BYTE* v66;
  unsigned __int64 v67;
  _BYTE* v68;
  __int64 v69;
  struct {
    _BYTE v70[768];
    unsigned __int64 v71;
    unsigned __int64 v72;
    unsigned __int64 v73;
  } v70_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v4 = *(_QWORD*)(result + 768);
  v5 = result;
  if (v4 == 0) {
    *(_QWORD*)(result + 776) = a2;
    return result;
  }
  v6 = *(_QWORD*)(result + 776);
  if (a2 == v6) {
    return result;
  }
  v7 = v70_.v70;
  memset_plt((void*)v70_.v70, nullptr, 792, a4),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v11 = *(_QWORD*)(v5 + 784);
  v12 = v4 & 3;
  v70_.v72 = a2;
  if (v11 >= v4) {
    v13 = 0;
  }
  else {
    v13 = v6;
  }
  if (v4 >= 4) {
    v15 = 0;
    v14 = 0;
    v16 = v5 + 12 * v11 + 12 * v13 - 12 * v4;
    do {
      v17 = v11 - v4 + v13 + v14;
      v18 = &v70_.v70[v15];
      v14 += 4;
      if (v17 >= v6) {
        v19 = v6;
      }
      else {
        v19 = 0;
      }
      v20 = (__int64*)(v16 - 12 * v19 + v15);
      v21 = *v20;
      LODWORD(v20) = *((_DWORD*)v20 + 2);
      *(_QWORD*)v18 = v21;
      *((_DWORD*)v18 + 2) = (_DWORD)v20;
      if (v17 + 1 >= v6) {
        v22 = v6;
      }
      else {
        v22 = 0;
      }
      v23 = v16 - 12 * v22 + v15;
      v9 = *(_QWORD*)(v23 + 12);
      *((_DWORD*)v18 + 5) = *(_DWORD*)(v23 + 20);
      v24 = v17 + 2;
      v25 = v17 + 3;
      *(_QWORD*)(v18 + 12) = v9;
      if (v24 >= v6) {
        v26 = v6;
      }
      else {
        v26 = 0;
      }
      v27 = v16 - 12 * v26;
      if (v25 >= v6) {
        v28 = v6;
      }
      else {
        v28 = 0;
      }
      v29 = v27 + v15;
      v30 = *(_QWORD*)(v29 + 24);
      v31 = v16 - 12 * v28 + v15;
      v15 += 48;
      *((_DWORD*)v18 + 8) = *(_DWORD*)(v29 + 32);
      LODWORD(v29) = *(_DWORD*)(v31 + 44);
      v32 = *(_QWORD*)(v31 + 36);
      *((_QWORD*)v18 + 3) = v30;
      *((_DWORD*)v18 + 11) = v29;
      *(_QWORD*)(v18 + 36) = v32;
    } while ((v4 & 0xFFFFFFFFFFFFFFFCLL) != v14);
    v7 = &v70_.v70[v15];
    if ((v4 & 3) == 0) {
      goto LABEL_30;
    }
    goto LABEL_25;
  }
  v14 = 0;
  if ((v4 & 3) != 0) {
  LABEL_25:
    v33 = v13 + v14 + v11 - v4;
    v34 = v5 + 12 * v33;
    do {
      v35 = v33++ >= v6;
      if (v35) {
        v36 = v6;
      }
      else {
        v36 = 0;
      }
      --v12;
      v37 = v34 - 12 * v36;
      v34 += 12;
      v38 = *(_QWORD*)v37;
      LODWORD(v37) = *(_DWORD*)(v37 + 8);
      *(_QWORD*)v7 = v38;
      *((_DWORD*)v7 + 2) = v37;
      v7 += 12;
    } while (v12 != 0);
  }
LABEL_30:
  v39 = v70_.v72;
  v70_.v71 = v4;
  *(_QWORD*)(v5 + 768) = 0;
  *(_QWORD*)(v5 + 784) = 0;
  result = nerd_gyro_pointing_6ff380(v5, v39, v9, v10),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v40 = v70_.v73;
  v41 = v4 & 3;
  v42 = 0;
  v43 = v5;
  if (v70_.v73 >= v4) {
    v44 = 0;
  }
  else {
    v44 = v39;
  }
  if (v4 >= 4) {
    v45 = v70_.v73 - v4 + v44;
    v46 = 0;
    v42 = 0;
    v47 = &v70_.v70[12 * v70_.v73 + 12 * v44 - 12 * v4];
    do {
      v48 = v45 + v42;
      v49 = v5 + v46;
      v42 += 4;
      if (v48 >= v39) {
        v50 = v39;
      }
      else {
        v50 = 0;
      }
      v51 = &v47[v46 + -12 * v50];
      v52 = *(_QWORD*)v51;
      LODWORD(v51) = *((_DWORD*)v51 + 2);
      *(_QWORD*)v49 = v52;
      *(_DWORD*)(v49 + 8) = (_DWORD)v51;
      if (v48 + 1 >= v39) {
        v53 = v39;
      }
      else {
        v53 = 0;
      }
      v54 = &v47[v46 + -12 * v53];
      v55 = *(_QWORD*)(v54 + 12);
      *(_DWORD*)(v49 + 20) = *((_DWORD*)v54 + 5);
      v56 = v48 + 2;
      v57 = v48 + 3;
      *(_QWORD*)(v49 + 12) = v55;
      if (v56 >= v39) {
        v58 = v39;
      }
      else {
        v58 = 0;
      }
      v59 = &v47[-12 * v58];
      if (v57 >= v39) {
        v60 = v39;
      }
      else {
        v60 = 0;
      }
      v61 = &v59[v46];
      v62 = *((_QWORD*)v61 + 3);
      v63 = &v47[v46 + -12 * v60];
      v46 += 48;
      *(_DWORD*)(v49 + 32) = *((_DWORD*)v61 + 8);
      result = *((unsigned int*)v63 + 11);
      v64 = *(_QWORD*)(v63 + 36);
      *(_QWORD*)(v49 + 24) = v62;
      *(_DWORD*)(v49 + 44) = result;
      *(_QWORD*)(v49 + 36) = v64;
    } while ((v4 & 0xFFFFFFFFFFFFFFFCLL) != v42);
    v43 = v5 + v46;
  }
  if ((v4 & 3) != 0) {
    v65 = v44 + v42 + v40 - v4;
    v66 = &v70_.v70[12 * v65];
    do {
      v35 = v65++ >= v39;
      if (v35) {
        v67 = v39;
      }
      else {
        v67 = 0;
      }
      --v41;
      v68 = &v66[-12 * v67];
      v66 += 12;
      v69 = *(_QWORD*)v68;
      LODWORD(v68) = *((_DWORD*)v68 + 2);
      *(_QWORD*)v43 = v69;
      *(_DWORD*)(v43 + 8) = (_DWORD)v68;
      v43 += 12;
    } while (v41 != 0);
  }
  *(_QWORD*)(v5 + 768) = v4;
  return result;
}

__int64 (*nerd_SetAssertionFailedCallback(__int64 (*a1)()))()
{
  __int64 (*v1)();

  v1 = SdkData_ea8dd0;
  SdkData_ea8dd0 = a1;
  return v1;
}

void(__attribute__((noreturn)) *
     nerd_SetVerifyFailedCallback(void(__attribute__((noreturn)) * a1)()))()
{
  void(__attribute__((noreturn)) * v1)();

  v1 = SdkData_ea8dd8;
  SdkData_ea8dd8 = a1;
  return v1;
}

void __attribute__((noreturn)) nerd_gyro_pointing_6ff850(__int64 a1)
{
  nn_diag_detail_AbortImpl_plt_856170(a1);
}

__int64 nerd_gyro_pointing_CompareBitwise(__int64 a1, __int64 a2)
{
  _BOOL4 v3;
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
  _QWORD v20[364];
  _QWORD v21[364];
  _QWORD v22[18];
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD v32[28];

  v3 = *(float*)a1 == *(float*)a2 && *(float*)(a1 + 4) == *(float*)(a2 + 4) &&
       *(float*)(a1 + 8) == *(float*)(a2 + 8) &&
       *(float*)(a1 + 12) == *(float*)(a2 + 12) &&
       *(float*)(a1 + 16) == *(float*)(a2 + 16) &&
       *(float*)(a1 + 20) == *(float*)(a2 + 20) &&
       *(float*)(a1 + 24) == *(float*)(a2 + 24) &&
       *(float*)(a1 + 28) == *(float*)(a2 + 28) &&
       *(float*)(a1 + 32) == *(float*)(a2 + 32) &&
       *(float*)(a1 + 36) == *(float*)(a2 + 36) &&
       *(float*)(a1 + 40) == *(float*)(a2 + 40) &&
       *(float*)(a1 + 44) == *(float*)(a2 + 44) &&
       *(float*)(a1 + 48) == *(float*)(a2 + 48) &&
       *(float*)(a1 + 52) == *(float*)(a2 + 52) &&
       *(float*)(a1 + 56) == *(float*)(a2 + 56) &&
       *(float*)(a1 + 60) == *(float*)(a2 + 60) &&
       *(float*)(a1 + 64) == *(float*)(a2 + 64) &&
       *(float*)(a1 + 68) == *(float*)(a2 + 68) &&
       *(float*)(a1 + 72) == *(float*)(a2 + 72) &&
       *(float*)(a1 + 76) == *(float*)(a2 + 76) &&
       *(float*)(a1 + 80) == *(float*)(a2 + 80) &&
       *(float*)(a1 + 84) == *(float*)(a2 + 84) &&
       *(float*)(a1 + 88) == *(float*)(a2 + 88) &&
       *(float*)(a1 + 92) == *(float*)(a2 + 92) &&
       *(float*)(a1 + 96) == *(float*)(a2 + 96) &&
       *(float*)(a1 + 100) == *(float*)(a2 + 100) &&
       *(float*)(a1 + 104) == *(float*)(a2 + 104) &&
       *(float*)(a1 + 108) == *(float*)(a2 + 108) &&
       *(float*)(a1 + 112) == *(float*)(a2 + 112) &&
       *(float*)(a1 + 116) == *(float*)(a2 + 116) &&
       *(float*)(a1 + 120) == *(float*)(a2 + 120);
  v4 = *(_QWORD*)(a1 + 128);
  v5 = *(_QWORD*)(a1 + 136);
  v6 = *(_QWORD*)(a2 + 168);
  v7 = v5 + 2;
  v23 = *(_QWORD*)(a2 + 160);
  v26 = v6;
  v32[0] = v4;
  v32[1] = v4 + 1;
  v8 = v5 + 1;
  v24 = v23 + 1;
  v25 = v23 + 2;
  v27 = v6 + 1;
  v28 = v6 + 2;
  v29 = v6 + 3;
  v30 = v6 + 4;
  v31 = v6 + 5;
  v32[2] = v4 + 2;
  v32[3] = v5;
  v9 = *(_QWORD*)(a1 + 144);
  v10 = *(_QWORD*)(a1 + 152);
  v32[4] = v8;
  v32[5] = v7;
  v11 = v9 + 2;
  v32[6] = v9;
  v32[7] = v9 + 1;
  v12 = *(_QWORD*)(a1 + 160);
  v13 = *(_QWORD*)(a1 + 168);
  v32[8] = v11;
  v32[9] = v10;
  v32[12] = v10 + 3;
  v32[13] = v10 + 4;
  v32[14] = v10 + 5;
  v32[15] = v10 + 6;
  v14 = *(_QWORD*)(a2 + 144);
  v15 = *(_QWORD*)(a2 + 152);
  v32[16] = v10 + 7;
  v32[17] = v10 + 8;
  v32[10] = v10 + 1;
  v32[11] = v10 + 2;
  v16 = v12 + 2;
  v22[6] = v14;
  v22[9] = v15;
  v32[18] = v12;
  v32[19] = v12 + 1;
  v17 = *(_QWORD*)(a2 + 128);
  v18 = *(_QWORD*)(a2 + 136);
  v32[20] = v16;
  v32[21] = v13;
  v32[22] = v13 + 1;
  v32[23] = v13 + 2;
  v32[24] = v13 + 3;
  v32[25] = v13 + 4;
  v32[26] = v13 + 5;
  v22[7] = v14 + 1;
  v22[8] = v14 + 2;
  v22[17] = v15 + 8;
  v22[11] = v15 + 2;
  v22[12] = v15 + 3;
  v22[10] = v15 + 1;
  v22[13] = v15 + 4;
  v22[14] = v15 + 5;
  v22[15] = v15 + 6;
  v22[16] = v15 + 7;
  v22[0] = v17;
  v22[3] = v18;
  v22[1] = v17 + 1;
  v22[2] = v17 + 2;
  v22[4] = v18 + 1;
  v22[5] = v18 + 2;
  *(struct PseudoSret*)(v21) = SdkRoutine_702080(a1 + 176, v32, v32);
  *(struct PseudoSret*)(v20) = SdkRoutine_702080(a2 + 176, v22, v22);
  return v3 & (unsigned int)SdkRoutine_879ee0(v21, v20);
}

#pragma GCC visibility pop
