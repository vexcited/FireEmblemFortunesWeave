#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

unsigned __int64
nerd_linear_algebra_Detail_LEigenDecompositionSymmetricTridiagonal_float(
    unsigned __int64 result, float* a2, __int64 a3, unsigned __int64 a4,
    __int64 a5, __int64 a6, float* a7);
unsigned __int64

nerd_linear_algebra_Detail_LEigenDecompositionSymmetricTridiagonal_float(
    unsigned __int64 result, float* a2, __int64 a3, unsigned __int64 a4,
    __int64 a5, __int64 a6, float* a7)
{
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
  unsigned __int64 v28;
  float v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float* v33;
  __int64 v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float* v39;
  float v40;
  __int64 v41;
  __int64 v42;
  float* v43;
  float v44;
  float v45;
  float v46;
  __int64 v47;
  float* v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  __int64 v62;
  float* v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  __int64 v80;
  unsigned __int64 v81;
  float v82;
  float v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v87;
  __int64 v88;

  if (result >= 2) {
    v88 = 8 * result;
    if (8 * result != 0) {
      v7 = 32 * a5;
      v8 = 4 * a6;
      v9 = 4 * a5;
      v10 = 2 * a5;
      v84 = result - 1;
      v85 = 0;
      v11 = 0;
      v87 = -4 * a6;
      v12 = 3 * a5;
      v13 = 7 * a5;
      v14 = 5 * a5;
      v15 = 28 * a5 + 4 * a6;
      v16 = 20 * a5 + 4 * a6;
      v17 = 16 * a5 + 4 * a6;
      v18 = 4 * a5;
      v19 = 4 * a6 + 4 * a5;
      v20 = 2 * v12;
      v21 = v12;
      v22 = 8 * v12 + 4 * a6;
      v23 = 4 * v12 + 4 * a6;
      v24 = v10 * 4 + 4 * a6;
      while (2) {
        v25 = v87;
        v26 = 4;
        v27 = 0;
        if (result != 0) {
          v28 = result - 1;
        }
        else {
          v28 = 0;
        }
        do {
          if (v28 == v27) {
            goto LABEL_14;
          }
          v29 = *(float*)(a3 + 4 * v27);
          v30 = v27;
          v31 = v26;
          v32 = v25;
          if (v29 == 0x0.0p+0f) {
            break;
          }
          v25 -= v8;
          ++v27;
          v26 += 4;
        } while (fabsf(v29 * v29) >
                 (float)((float)(fabsf(*(float*)((char*)a2 + v31 - 4) *
                                       *(float*)((char*)a2 + v31)) *
                                 0x1.0000000000000p-23f) *
                         0x1.0000000000000p-23f));
        *(_DWORD*)(a3 + 4 * v30) = 0;
        if (v30 != 0) {
          result = v30 + 1;
        LABEL_14:
          v33 = &a2[result];
          v34 = 4 * result - 8;
          v35 = *(v33 - 1);
          v36 = *(float*)(a3 + v34) * *(float*)(a3 + v34);
          v37 =
              (float)(*(float*)((char*)a2 + v34) - v35) * 0x1.0000000000000p-1f;
          v38 = sqrtf(v36 + (float)(v37 * v37));
          if (v37 <= 0x0.0p+0f) {
            v38 = -v38;
          }
          if (result >= 2) {
            v39 = a7;
            v40 = 0x0.0p+0f;
            v41 = 1;
            v42 = 0;
            v43 = &a7[(unsigned __int64)v8 / 4];
            v44 = v35 - (float)(v36 / (float)(v37 + v38));
            v45 = *a2 - v44;
            v46 = 0x1.0000000000000p+0f;
            do {
              while (1) {
                v47 = v42;
                v42 = v41;
                v48 = (float*)(a3 + 4 * v47);
                v49 = *v48;
                v50 = (float)(PSEUDO_UNFUSED(v45 * v45)) +
                      (float)(PSEUDO_UNFUSED(v49 * v49));
                if (v50 != 0x0.0p+0f) {
                  break;
                }
                a2[v47] = v44;
                if (v47 != 0) {
                  *(v48 - 1) = 0x0.0p+0f;
                }
                v40 = 0x0.0p+0f;
                v45 = a2[v42] - v44;
                v46 = 0x1.0000000000000p+0f;
                v41 = v42 + 1;
                v39 = (float*)((char*)v39 + v8);
                v43 = (float*)((char*)v43 + v8);
                if (v42 + 1 == result) {
                  goto LABEL_4;
                }
              }
              v51 = sqrtf(v50);
              v52 = a2[v42] - v44;
              if (v45 <= 0x0.0p+0f) {
                v53 = v51;
              }
              else {
                v53 = -v51;
              }
              v54 = v45 - v53;
              v55 = 0x1.0000000000000p+1f /
                    (float)((float)(PSEUDO_UNFUSED(v49 * v49)) +
                            (float)(PSEUDO_UNFUSED(v54 * v54)));
              v56 = -(float)(v54 * v54);
              v57 = v49 * v54;
              v58 = v46 * v49;
              v59 = (float)(v56 * v55) + 0x1.0000000000000p+0f;
              v60 = v57 * v55;
              a2[v47] =
                  v44 + (float)((float)((float)(v46 * v53) * v59) -
                                (float)(PSEUDO_UNFUSED(
                                    (float)(v57 * v55) *
                                    (float)((float)(v58 * v59) -
                                            (float)(PSEUDO_UNFUSED(
                                                (float)(v57 * v55) * v52))))));
              if (v47 != 0) {
                *(v48 - 1) = -(float)(v53 * v40);
              }
              v46 = -(float)((float)(v56 * v55) + 0x1.0000000000000p+0f);
              v45 = (float)-(float)(PSEUDO_UNFUSED(v60 * v58)) -
                    (float)(v52 * v59);
              if (a4 != 0) {
                v61 = -(float)(v57 * v55);
                if (a4 >= 8) {
                  v62 = 0;
                  v63 = v39;
                  do {
                    v64 = v63[(unsigned __int64)v8 / 4];
                    v62 += 8;
                    v65 = (float)(PSEUDO_UNFUSED(*v63 * v61)) +
                          (float)(v64 * v46);
                    *v63 = (float)(PSEUDO_UNFUSED(v64 * v61)) +
                           (float)(*v63 * v59);
                    v63[(unsigned __int64)v8 / 4] = v65;
                    v66 = *(float*)((char*)v63 + v19);
                    v67 = v63[(unsigned __int64)v18 / 4];
                    v63[(unsigned __int64)v18 / 4] =
                        (float)(PSEUDO_UNFUSED(v66 * v61)) + (float)(v67 * v59);
                    *(float*)((char*)v63 + v19) =
                        (float)(PSEUDO_UNFUSED(v67 * v61)) + (float)(v66 * v46);
                    v68 = *(float*)((char*)v63 + v24);
                    v69 = v63[v10];
                    v63[v10] =
                        (float)(PSEUDO_UNFUSED(v68 * v61)) + (float)(v69 * v59);
                    *(float*)((char*)v63 + v24) =
                        (float)(PSEUDO_UNFUSED(v69 * v61)) + (float)(v68 * v46);
                    v70 = *(float*)((char*)v63 + v23);
                    v71 = v63[v21];
                    v63[v21] =
                        (float)(PSEUDO_UNFUSED(v70 * v61)) + (float)(v71 * v59);
                    *(float*)((char*)v63 + v23) =
                        (float)(PSEUDO_UNFUSED(v71 * v61)) + (float)(v70 * v46);
                    v72 = *(float*)((char*)v63 + v17);
                    v73 = v63[v9];
                    v63[v9] =
                        (float)(PSEUDO_UNFUSED(v72 * v61)) + (float)(v73 * v59);
                    *(float*)((char*)v63 + v17) =
                        (float)(PSEUDO_UNFUSED(v73 * v61)) + (float)(v72 * v46);
                    v74 = *(float*)((char*)v63 + v16);
                    v75 = v63[v14];
                    v63[v14] =
                        (float)(PSEUDO_UNFUSED(v74 * v61)) + (float)(v75 * v59);
                    *(float*)((char*)v63 + v16) =
                        (float)(PSEUDO_UNFUSED(v75 * v61)) + (float)(v74 * v46);
                    v76 = *(float*)((char*)v63 + v22);
                    v77 = v63[v20];
                    v63[v20] =
                        (float)(PSEUDO_UNFUSED(v76 * v61)) + (float)(v77 * v59);
                    *(float*)((char*)v63 + v22) =
                        (float)(PSEUDO_UNFUSED(v77 * v61)) + (float)(v76 * v46);
                    v78 = *(float*)((char*)v63 + v15);
                    v79 = v63[v13];
                    v63[v13] =
                        (float)(PSEUDO_UNFUSED(v78 * v61)) + (float)(v79 * v59);
                    *(float*)((char*)v63 + v15) =
                        (float)(PSEUDO_UNFUSED(v79 * v61)) + (float)(v78 * v46);
                    v63 = (float*)((char*)v63 + v7);
                  } while ((a4 & 0xFFFFFFFFFFFFFFF8LL) != v62);
                }
                else {
                  v62 = 0;
                }
                if ((a4 & 7) != 0) {
                  v80 = v18 * v62;
                  v81 = a4 & 7;
                  do {
                    v82 = *(float*)((char*)v43 + v80);
                    v83 = *(float*)((char*)v39 + v80);
                    --v81;
                    *(float*)((char*)v39 + v80) =
                        (float)(PSEUDO_UNFUSED(v82 * v61)) + (float)(v83 * v59);
                    *(float*)((char*)v43 + v80) =
                        (float)(PSEUDO_UNFUSED(v83 * v61)) + (float)(v82 * v46);
                    v80 += v18;
                  } while (v81 != 0);
                }
              }
              v40 = v60;
              v41 = v42 + 1;
              v39 = (float*)((char*)v39 + v8);
              v43 = (float*)((char*)v43 + v8);
            } while (v42 + 1 != result);
          LABEL_4:
            *(float*)(a3 + 4 * result - 8) = -(float)(v45 * v40);
            *(v33 - 1) = v44 + (float)(v45 * v46);
          }
        LABEL_5:
          if (++v11 == v88) {
            return result;
          }
          continue;
        }
        break;
      }
      result = v84 - v85;
      if (v84 - v85 >= 2) {
        a2 = (float*)((char*)a2 + v31);
        a3 += v31;
        ++v85;
        a7 = (float*)((char*)a7 - v32);
        goto LABEL_5;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
