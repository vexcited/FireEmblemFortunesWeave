#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 celt_pitch_xcorr_c(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* SdkData_e878c0;
extern _UNKNOWN* SdkData_e878c8;
extern _UNKNOWN* SdkData_e87900;
extern _UNKNOWN* SdkData_e87908;
extern _UNKNOWN* SdkData_e87910;
_DWORD* silk_P_Ana_calc_corr_st3(_DWORD* result, __int64 a2, int a3, __int64 a4,
                                 int a5, int a6, unsigned int a7);

_DWORD* silk_P_Ana_calc_corr_st3(_DWORD* result, __int64 a2, int a3, __int64 a4,
                                 int a5, int a6, unsigned int a7)
{
  char* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  unsigned int v12;
  __int64 v13;
  char* v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  _DWORD* v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  _DWORD* v36;
  char* v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  char* v48;
  char* v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  char* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  unsigned int v61;
  char* v62;
  _DWORD* v63;
  __int64 v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  __int64 i;
  char* v70;
  int v71;
  int v72;
  unsigned int v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  int v79;
  int v80;
  int v81;
  unsigned int v82;
  unsigned int v83;
  int v84;
  _DWORD* v85;
  unsigned int v86;
  int v87;
  _QWORD v88[14];
  _BYTE v89[80];
  _BYTE* v90;
  _DWORD* v91;
  _DWORD* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  char* v98;
  unsigned int v99;
  __int64 v100;
  unsigned int v101;

  v99 = a7;
  v100 = a4;
  v92 = result;
  if (a5 == 4) {
    v98 = (char*)SdkData_e87908 + 8 * a6;
    v7 = (char*)SdkData_e878c0;
    v8 = *((char*)SdkData_e87910 + a6);
    v9 = 34;
  }
  else {
    v8 = 12;
    v7 = (char*)SdkData_e878c8;
    v98 = (char*)SdkData_e87900;
    v9 = 12;
  }
  v93 = v9;
  v88[13] = 0;
  memset(v89, 0, 72);
  v88[12] = 0;
  memset(v88, 0, 88);
  if (a5 >= 1) {
    v10 = a2 + 8LL * (_DWORD)v100;
    v95 = (int)v100;
    v96 = -(__int64)a3;
    v94 = (unsigned int)a5;
    if (v8 > 0) {
      v11 = v7 + 3;
      v12 = 0;
      v13 = 0;
      v97 = v8 & 7;
      v90 = v89;
      v91 = v92 + 20;
      while (1) {
        v101 = v12;
        v14 = &v98[2 * v13];
        v15 = *v14;
        v16 = v14[1];
        result = (_DWORD*)celt_pitch_xcorr_c(
            v10, v10 + 2 * v96 - 2LL * v14[1], v88, v100,
            (unsigned int)(v16 - v15 + 1), v99);
        v17 = v16 - v15;
        if (v16 >= v15) {
          v18 = v17 + 1;
          if (v17 >= 7) {
            result = v90;
            v22 = 0;
            do {
              v23 = *((_DWORD*)v88 + v17 + (unsigned int)v22 - 1);
              *(result - 4) = *((_DWORD*)v88 + v17 + (unsigned int)v22);
              *(result - 3) = v23;
              v24 = *((_DWORD*)&v88[-1] + v17 + (unsigned int)v22 - 1);
              v25 = *((_DWORD*)&v88[-2] + v17 + (unsigned int)v22);
              *(result - 2) = *((_DWORD*)&v88[-1] + v17 + (unsigned int)v22);
              *(result - 1) = v24;
              v26 = *((_DWORD*)&v88[-2] + v17 + (unsigned int)v22 - 1);
              *result = v25;
              result[1] = v26;
              v27 = v17 - 6 + v22;
              v28 = v17 - 7 + v22;
              v22 -= 8;
              v29 = *((_DWORD*)v88 + v28);
              result[2] = *((_DWORD*)v88 + v27);
              result[3] = v29;
              result += 8;
            } while (-(__int64)(v18 & 0xFFFFFFF8) != v22);
            v19 = -v22;
            v20 = v15 - v22;
            v21 = v18 & 7;
            if (v21 == 0) {
              goto LABEL_17;
            }
          LABEL_15:
            v30 = (_DWORD*)&v88[12] + v19;
            v31 = v16 - v20;
            do {
              v32 = *((_DWORD*)v88 + v31--);
              --v21;
              *v30++ = v32;
            } while (v21 != 0);
            goto LABEL_17;
          }
          v19 = 0;
          v20 = v15;
          v21 = v18 & 7;
          if (v21 != 0) {
            goto LABEL_15;
          }
        }
      LABEL_17:
        v33 = v101;
        v34 = 0;
        if ((unsigned int)v8 >= 8) {
          v35 = 0;
          v36 = &v91[5 * v101];
          v37 = v11;
          do {
            v35 -= 8;
            v38 = (char*)&v88[12] + 4 * (*(v37 - 3) - (__int64)v15);
            v39 = *(_QWORD*)v38;
            v40 = *((_QWORD*)v38 + 1);
            LODWORD(v38) = *((_DWORD*)v38 + 4);
            *((_QWORD*)v36 - 10) = v39;
            *((_QWORD*)v36 - 9) = v40;
            *(v36 - 16) = (_DWORD)v38;
            v41 = (char*)&v88[12] + 4 * (*(v37 - 2) - (__int64)v15);
            v42 = *(_QWORD*)v41;
            v43 = *((_QWORD*)v41 + 1);
            LODWORD(v41) = *((_DWORD*)v41 + 4);
            *(_QWORD*)(v36 - 15) = v42;
            *(_QWORD*)(v36 - 13) = v43;
            *(v36 - 11) = (_DWORD)v41;
            v44 = (char*)&v88[12] + 4 * (*(v37 - 1) - (__int64)v15);
            *(v36 - 6) = *((_DWORD*)v44 + 4);
            v45 = *((_QWORD*)v44 + 1);
            *((_QWORD*)v36 - 5) = *(_QWORD*)v44;
            *((_QWORD*)v36 - 4) = v45;
            v46 = (char*)&v88[12] + 4 * (*v37 - (__int64)v15);
            *(v36 - 1) = *((_DWORD*)v46 + 4);
            v48 = v46;
            v47 = *(_QWORD*)v46;
            *(_QWORD*)(v36 - 3) = *((_QWORD*)v48 + 1);
            *(_QWORD*)(v36 - 5) = v47;
            v49 = (char*)&v88[12] + 4 * (v37[1] - (__int64)v15);
            v36[4] = *((_DWORD*)v49 + 4);
            v50 = *((_QWORD*)v49 + 1);
            *(_QWORD*)v36 = *(_QWORD*)v49;
            *((_QWORD*)v36 + 1) = v50;
            v51 = (char*)&v88[12] + 4 * (v37[2] - (__int64)v15);
            v52 = *(_QWORD*)v51;
            v53 = *((_QWORD*)v51 + 1);
            LODWORD(v51) = *((_DWORD*)v51 + 4);
            *(_QWORD*)(v36 + 5) = v52;
            *(_QWORD*)(v36 + 7) = v53;
            v36[9] = (_DWORD)v51;
            v54 = (char*)&v88[12] + 4 * (v37[3] - (__int64)v15);
            v55 = *(_QWORD*)v54;
            v56 = *((_QWORD*)v54 + 1);
            v36[14] = *((_DWORD*)v54 + 4);
            *((_QWORD*)v36 + 5) = v55;
            *((_QWORD*)v36 + 6) = v56;
            v57 = v37[4];
            v37 += 8;
            v58 = (char*)&v88[12] + 4 * (v57 - v15);
            v59 = *(_QWORD*)v58;
            v60 = *((_QWORD*)v58 + 1);
            v36[19] = *((_DWORD*)v58 + 4);
            *(_QWORD*)(v36 + 17) = v60;
            *(_QWORD*)(v36 + 15) = v59;
            v36 += 40;
          } while (-(__int64)(v8 & 0x7FFFFFF8) != v35);
          v34 = -v35;
        }
        v61 = v33;
        if (v97 != 0) {
          v62 = &v7[v34];
          v63 = &v92[5 * v34 + 5 * v33];
          v64 = v97;
          do {
            v65 = *v62++;
            --v64;
            v66 = (char*)&v88[12] + 4 * (v65 - v15);
            v67 = *(_QWORD*)v66;
            v68 = *((_QWORD*)v66 + 1);
            LODWORD(v66) = *((_DWORD*)v66 + 4);
            *(_QWORD*)v63 = v67;
            *((_QWORD*)v63 + 1) = v68;
            v63[4] = (_DWORD)v66;
            v63 += 5;
          } while (v64 != 0);
        }
        ++v13;
        v12 = v61 + v8;
        v10 += 2 * v95;
        v11 += v93;
        v7 += v93;
        if (v13 == v94) {
          return result;
        }
      }
    }
    for (i = 0; i != v94; ++i) {
      v70 = &v98[2 * i];
      v71 = *v70;
      v72 = v70[1];
      result =
          (_DWORD*)celt_pitch_xcorr_c(v10, v10 + 2 * v96 - 2LL * v70[1], v88,
                                      v100, (unsigned int)(v72 - v71 + 1), v99);
      v73 = v72 - v71;
      if (v72 >= v71) {
        v74 = v73 + 1;
        if (v73 >= 7) {
          v77 = 0;
          result = v89;
          do {
            v78 = *((_DWORD*)v88 + v73 + (unsigned int)v77 - 1);
            *(result - 4) = *((_DWORD*)v88 + v73 + (unsigned int)v77);
            *(result - 3) = v78;
            v79 = *((_DWORD*)&v88[-1] + v73 + (unsigned int)v77 - 1);
            v80 = *((_DWORD*)&v88[-2] + v73 + (unsigned int)v77);
            *(result - 2) = *((_DWORD*)&v88[-1] + v73 + (unsigned int)v77);
            *(result - 1) = v79;
            v81 = *((_DWORD*)&v88[-2] + v73 + (unsigned int)v77 - 1);
            *result = v80;
            result[1] = v81;
            v82 = v73 - 6 + v77;
            v83 = v73 - 7 + v77;
            v77 -= 8;
            v84 = *((_DWORD*)v88 + v83);
            result[2] = *((_DWORD*)v88 + v82);
            result[3] = v84;
            result += 8;
          } while (-(__int64)(v74 & 0xFFFFFFF8) != v77);
          v75 = -v77;
          v71 -= v77;
          v76 = v74 & 7;
          if (v76 == 0) {
            goto LABEL_26;
          }
        LABEL_34:
          v85 = (_DWORD*)&v88[12] + v75;
          v86 = v72 - v71;
          do {
            v87 = *((_DWORD*)v88 + v86--);
            --v76;
            *v85++ = v87;
          } while (v76 != 0);
          goto LABEL_26;
        }
        v75 = 0;
        v76 = v74 & 7;
        if (v76 != 0) {
          goto LABEL_34;
        }
      }
    LABEL_26:
      v10 += 2 * v95;
    }
  }
  return result;
}

#pragma GCC visibility pop
