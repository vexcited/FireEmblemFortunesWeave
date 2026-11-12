#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_3328d0(__int64, unsigned int, unsigned int, unsigned int,
                           float, float, float, float);
__int64 GameRoutine_3697a0(__int64 result, __int64, __int64, unsigned int,
                           __int64*, float, float, __int64, int, int, char);
__int64 GameRoutine_55b6d0(atomic_uint*, unsigned int);
__int64 physx_Dy_FeatherstoneArticulation_saveVelocity(__int64 result);
__int64
physx_Dy_FeatherstoneArticulation_writebackInternalConstraints(__int64 result,
                                                               char);
__int64 physx_Dy_createFinalizeSolverContacts(__int64, __int64,
                                              __int64 (***)(_QWORD, _QWORD),
                                              __int64, double, long double,
                                              long double, float, float);
__int64 physx_Dy_createFinalizeSolverContacts4(__int64, __int64, __int64, float,
                                               float, int32x2_t, float, float);
__int64 physx_Dy_createFinalizeSolverContactsStep(__int64, __int64, __int64,
                                                  long double, float32x2_t,
                                                  long double, long double,
                                                  long double, float, float,
                                                  float);
extern _UNKNOWN* GameData_21358b8;
extern _UNKNOWN* GameData_21358c0;
extern _UNKNOWN* GameData_21358c8;
long double GameHr_3696c0(unsigned int, __int64, __int64);
void GameRoutine_55bec0();
__int64 physx_source_lowleveldynamics_src_32d400(__int64 a1, __int64 a2,
                                                 __int64* a3);
__int64 physx_source_lowleveldynamics_src_33c600(__int64 a1, unsigned int a2,
                                                 __int64 a3, __int64 a4,
                                                 int a5);
__int64 physx_source_lowleveldynamics_src_34f960(
    __int64 a1, __int64* a2, __int64 a3, __int64 (***a4)(_QWORD, _QWORD),
    __int64 a5, double a6, long double a7, long double a8, float a9, float a10);
__int64 physx_source_lowleveldynamics_src_358d40(__int64 a1, __int64* a2,
                                                 __int64 a3, __int64 a4,
                                                 long double a5, float32x2_t a6,
                                                 long double a7, long double a8,
                                                 long double a9, float a10,
                                                 float a11, float a12);
__int64 physx_source_lowleveldynamics_src_35c5c0(__int64 result);
void physx_source_lowleveldynamics_src_3678e0(__int64 a1);
void physx_source_lowleveldynamics_src_3681c0(int* a1, __int64 a2, _QWORD* a3,
                                              char a4);
__int64 physx_source_lowleveldynamics_src_373020(__int64 a1, __int64 a2,
                                                 _QWORD* a3, __int64 a4,
                                                 float a5, float a6,
                                                 int32x2_t a7, float a8,
                                                 float a9);

__int64 physx_source_lowleveldynamics_src_32d400(__int64 a1, __int64 a2,
                                                 __int64* a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  float* v16;
  unsigned int* v17;
  unsigned int v18;
  float* v19;
  float v20;
  float v21;
  float v22;
  float* v23;
  float v24;
  float v25;
  float v26;
  float v27;
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
  float* v40;
  unsigned int v41;
  float v42;
  float v43;
  float* v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float* v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float* v60;
  float* v61;
  float v62;
  float v63;
  float v64;
  float v65;
  __int64 v66;
  unsigned int v67;
  float* v68;
  float* v69;
  float v70;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = a3[6];
  v4 = (_QWORD*)a3[2];
  v5 = *(unsigned int*)(a2 + 808);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  if ((unsigned int)v5 >= 2) {
    v6 = *(_QWORD*)(a2 + 800);
    v7 = *(_QWORD*)(a2 + 840);
    v8 = *a3;
    v9 = 1;
    result = 24;
    v11 = *(_QWORD*)(a2 + 704);
    v12 = *(_QWORD*)(a2 + 672);
    do {
      v17 = (unsigned int*)(v7 + 8 * v9);
      v18 = *((unsigned __int8*)v17 + 4);
      v19 = (float*)(v8 + 32LL * *(unsigned int*)(v6 + 40 * v9 + 32));
      v20 = *v19;
      v21 = v19[1];
      v22 = v19[2];
      v23 = (float*)(v11 + 12 * v9);
      v25 = v23[1];
      v24 = v23[2];
      v26 = (float)(v21 * v24) - (float)(PSEUDO_UNFUSED(v22 * v25));
      v27 = (float)(v22 * *v23) - (float)(PSEUDO_UNFUSED(v20 * v24));
      v28 = (float)(v20 * v25) - (float)(PSEUDO_UNFUSED(v21 * *v23));
      v29 = (float)(v20 * v27) - (float)(PSEUDO_UNFUSED(v21 * v26));
      v30 = (float)(v21 * v28) - (float)(PSEUDO_UNFUSED(v22 * v27));
      v31 = (float)(v22 * v26) - (float)(PSEUDO_UNFUSED(v20 * v28));
      if (*((_BYTE*)v17 + 4) != 0) {
        v32 = *v17;
        if (v18 >= 4) {
          v33 = 0x0.0p+0f;
          v34 = 0x0.0p+0f;
          v40 = (float*)(v3 + 8 + 4 * v32);
          v35 = 0;
          v36 = 0x0.0p+0f;
          v37 = 0x0.0p+0f;
          v38 = 0x0.0p+0f;
          v39 = 0x0.0p+0f;
          do {
            v41 = v32 + v35;
            v42 = *(v40 - 2);
            v43 = *(v40 - 1);
            v35 += 4;
            v44 = (float*)(v12 + 24LL * v41);
            v45 = v39 + (float)(PSEUDO_UNFUSED(v42 * *v44));
            v46 = v38 + (float)(PSEUDO_UNFUSED(v42 * v44[1]));
            v47 = v37 + (float)(PSEUDO_UNFUSED(v42 * v44[2]));
            v48 = v44[4];
            v49 = v44[5];
            v50 = v36 + (float)(PSEUDO_UNFUSED(v42 * v44[3]));
            v51 = (float*)(v12 + 24LL * (v41 + 1));
            v52 = v34 + (float)(PSEUDO_UNFUSED(v42 * v48));
            v53 = v33 + (float)(PSEUDO_UNFUSED(v42 * v49));
            v54 = v45 + (float)(PSEUDO_UNFUSED(v43 * *v51));
            v55 = v46 + (float)(PSEUDO_UNFUSED(v43 * v51[1]));
            v56 = v43 * v51[3];
            v57 = v47 + (float)(PSEUDO_UNFUSED(v43 * v51[2]));
            v58 = v51[4];
            v59 = v51[5];
            v60 = (float*)(v12 + 24LL * (v41 + 2));
            v61 = (float*)(v12 + 24LL * (v41 + 3));
            v62 = v52 + (float)(PSEUDO_UNFUSED(v43 * v58));
            v63 = v53 + (float)(PSEUDO_UNFUSED(v43 * v59));
            v64 = *v40;
            v65 = v40[1];
            v40 += 4;
            v39 = (float)(v54 + (float)(PSEUDO_UNFUSED(v64 * *v60))) +
                  (float)(PSEUDO_UNFUSED(v65 * *v61));
            v38 = (float)(v55 + (float)(PSEUDO_UNFUSED(v64 * v60[1]))) +
                  (float)(PSEUDO_UNFUSED(v65 * v61[1]));
            v37 = (float)(v57 + (float)(PSEUDO_UNFUSED(v64 * v60[2]))) +
                  (float)(PSEUDO_UNFUSED(v65 * v61[2]));
            v36 = (float)((float)(v50 + v56) +
                          (float)(PSEUDO_UNFUSED(v64 * v60[3]))) +
                  (float)(PSEUDO_UNFUSED(v65 * v61[3]));
            v34 = (float)(v62 + (float)(PSEUDO_UNFUSED(v64 * v60[4]))) +
                  (float)(PSEUDO_UNFUSED(v65 * v61[4]));
            v33 = (float)(v63 + (float)(PSEUDO_UNFUSED(v64 * v60[5]))) +
                  (float)(PSEUDO_UNFUSED(v65 * v61[5]));
          } while ((v18 & 0xFC) != v35);
        }
        else {
          v33 = 0x0.0p+0f;
          v34 = 0x0.0p+0f;
          v35 = 0;
          v36 = 0x0.0p+0f;
          v37 = 0x0.0p+0f;
          v38 = 0x0.0p+0f;
          v39 = 0x0.0p+0f;
        }
        v66 = v18 & 3;
        if (v66 != 0) {
          v67 = v32 + v35;
          v68 = (float*)(v3 + 4 * v35 + 4 * v32);
          do {
            v69 = (float*)(v12 + 24LL * v67);
            v70 = *v68++;
            ++v67;
            --v66;
            v39 = v39 + (float)(PSEUDO_UNFUSED(v70 * *v69));
            v38 = v38 + (float)(PSEUDO_UNFUSED(v70 * v69[1]));
            v37 = v37 + (float)(PSEUDO_UNFUSED(v70 * v69[2]));
            v36 = v36 + (float)(PSEUDO_UNFUSED(v70 * v69[3]));
            v34 = v34 + (float)(PSEUDO_UNFUSED(v70 * v69[4]));
            v33 = v33 + (float)(PSEUDO_UNFUSED(v70 * v69[5]));
          } while (v66 != 0);
        }
        v13 = (float)(PSEUDO_UNFUSED(v38 * (float)-v22)) + (float)(v21 * v37);
        v14 = (float)(PSEUDO_UNFUSED(v37 * (float)-v20)) + (float)(v22 * v39);
        v15 = (float)(PSEUDO_UNFUSED(v39 * (float)-v21)) + (float)(v20 * v38);
        v30 =
            v30 +
            (float)((float)((float)(v38 * v33) -
                            (float)(PSEUDO_UNFUSED(v37 * v34))) +
                    (float)((float)((float)(PSEUDO_UNFUSED(v34 * (float)-v22)) +
                                    (float)(v21 * v33)) +
                            (float)((float)(PSEUDO_UNFUSED(v34 * (float)-v22)) +
                                    (float)(v21 * v33))));
        v31 =
            v31 +
            (float)((float)((float)(v37 * v36) -
                            (float)(PSEUDO_UNFUSED(v39 * v33))) +
                    (float)((float)((float)(PSEUDO_UNFUSED(v33 * (float)-v20)) +
                                    (float)(v22 * v36)) +
                            (float)((float)(PSEUDO_UNFUSED(v33 * (float)-v20)) +
                                    (float)(v22 * v36))));
        v29 =
            v29 +
            (float)((float)((float)(v39 * v34) -
                            (float)(PSEUDO_UNFUSED(v38 * v36))) +
                    (float)((float)((float)(PSEUDO_UNFUSED(v36 * (float)-v21)) +
                                    (float)(v20 * v34)) +
                            (float)((float)(PSEUDO_UNFUSED(v36 * (float)-v21)) +
                                    (float)(v20 * v34))));
      }
      else {
        v13 = 0x0.0p+0f;
        v14 = 0x0.0p+0f;
        v15 = 0x0.0p+0f;
      }
      v16 = (float*)&v4[4 * v9++];
      *v16 = v13;
      v16[1] = v14;
      v16[2] = v15;
      v16[3] = 0x0.0p+0f;
      v16[4] = v30;
      v16[5] = v31;
      v16[6] = v29;
      v16[7] = 0x0.0p+0f;
    } while (v9 != v5);
  }
  return result;
}

__int64 physx_source_lowleveldynamics_src_33c600(__int64 a1, unsigned int a2,
                                                 __int64 a3, __int64 a4, int a5)
{
  __int64 v6;
  __int64 v7;
  __int64 result;
  int* v9;
  unsigned __int8 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  float* v17;
  __int64 v18;
  int v19;
  float* v20;
  float* v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float* v26;
  float* v27;
  unsigned int v28;
  unsigned int v29;
  __int64 v30;
  float* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  float* v36;
  __int64 v37;
  int v38;
  __int64 v39;
  float* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  float* v44;
  float v45;
  float v46;
  float v47;
  float v48;
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
  float v62;
  float v63;
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
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  __int64 v92;
  __int64 v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  int* v105;
  __int64 v106;
  int v107;
  __int64 v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  float* v117;
  __int64 v118;
  __int64 v119;
  float* v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  unsigned int v126;
  unsigned int v127;
  float v128;
  unsigned int v129;
  float v130;
  unsigned int v131;
  float v132;
  unsigned int v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  int v139;
  unsigned int v140;
  float* v141;
  __int64 v142;
  unsigned int v143;
  float v144;
  float v145;
  float v146;
  float v147;
  __int64 i;
  _DWORD* v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;

  v6 = *(_QWORD*)(a1 + 840);
  v7 = *(_QWORD*)(a1 + 800);
  result = a2;
  v9 = (int*)(v6 + 8LL * a2);
  v152 = v6;
  v10 = *((_BYTE*)v9 + 4);
  if (v10 != 0) {
    v11 = *v9;
    v12 = *(_QWORD*)(a1 + 672);
    v13 = *((unsigned __int8*)v9 + 4);
    v14 = 0;
    v15 = *(_DWORD*)(a1 + 896) + a5;
    v149 = (_DWORD*)(v6 + 8LL * a2);
    v16 = v11 + a5 + (v11 + a5) * v15;
    do {
      v17 = (float*)(a4 + 32 * v14);
      if (v10 >= 4u) {
        v18 = 0;
        do {
          v19 = v11 + v18;
          v20 = (float*)(v12 + 24LL * (unsigned int)(v11 + v18));
          v21 = (float*)(v12 + 24LL * (unsigned int)(v11 + v18 + 1));
          v22 = v20[2];
          v23 = (float)((float)(PSEUDO_UNFUSED(v20[4] * v17[1])) +
                        (float)(v20[3] * *v17)) +
                (float)(v20[5] * v17[2]);
          v24 = *v20;
          v25 = v20[1];
          LODWORD(v20) = v16 + v18;
          v18 += 4;
          *(float*)(a3 + 4LL * (unsigned int)v20) =
              v23 + (float)((float)((float)(PSEUDO_UNFUSED(v25 * v17[5])) +
                                    (float)(v24 * v17[4])) +
                            (float)(v22 * v17[6]));
          *(float*)(a3 + 4LL * (unsigned int)((_DWORD)v20 + 1)) =
              (float)((float)((float)(PSEUDO_UNFUSED(v21[4] * v17[1])) +
                              (float)(v21[3] * *v17)) +
                      (float)(v21[5] * v17[2])) +
              (float)((float)((float)(PSEUDO_UNFUSED(v21[1] * v17[5])) +
                              (float)(*v21 * v17[4])) +
                      (float)(v21[2] * v17[6]));
          v26 = (float*)(v12 + 24LL * (unsigned int)(v19 + 2));
          v27 = (float*)(v12 + 24LL * (unsigned int)(v19 + 3));
          *(float*)(a3 + 4LL * (unsigned int)((_DWORD)v20 + 2)) =
              (float)((float)((float)(PSEUDO_UNFUSED(v26[4] * v17[1])) +
                              (float)(v26[3] * *v17)) +
                      (float)(v26[5] * v17[2])) +
              (float)((float)((float)(PSEUDO_UNFUSED(v26[1] * v17[5])) +
                              (float)(*v26 * v17[4])) +
                      (float)(v26[2] * v17[6]));
          *(float*)(a3 + 4LL * (unsigned int)((_DWORD)v20 + 3)) =
              (float)((float)((float)(PSEUDO_UNFUSED(v27[4] * v17[1])) +
                              (float)(v27[3] * *v17)) +
                      (float)(v27[5] * v17[2])) +
              (float)((float)((float)(PSEUDO_UNFUSED(v27[1] * v17[5])) +
                              (float)(*v27 * v17[4])) +
                      (float)(v27[2] * v17[6]));
        } while ((v10 & 0xFC) != v18);
      }
      else {
        LODWORD(v18) = 0;
      }
      if ((v10 & 3) != 0) {
        v28 = v16 + v18;
        v29 = v11 + v18;
        v30 = v10 & 3;
        do {
          v31 = (float*)(v12 + 24LL * v29++);
          --v30;
          *(float*)(a3 + 4LL * v28++) =
              (float)((float)((float)(PSEUDO_UNFUSED(v31[4] * v17[1])) +
                              (float)(v31[3] * *v17)) +
                      (float)(v31[5] * v17[2])) +
              (float)((float)((float)(PSEUDO_UNFUSED(v31[1] * v17[5])) +
                              (float)(*v31 * v17[4])) +
                      (float)(v31[2] * v17[6]));
        } while (v30 != 0);
      }
      ++v14;
      v16 += v15;
    } while (v14 != v13);
    v32 = *(unsigned int*)(v7 + 40LL * a2 + 32);
    if ((_DWORD)v32 != 0) {
      v33 = *(_QWORD*)(a1 + 704);
      v34 = *(_QWORD*)(a1 + 672);
      v35 = v13 & 3;
      v36 = (float*)(a4 + 64);
      v37 = a4 + 16;
      v150 = v33;
      v151 = v7;
      v38 = 4 * v15;
      v39 = -(__int64)((unsigned __int8)v13 & 0xFC);
      while (1) {
        v40 = (float*)(v150 + 12 * result);
        v41 = v32;
        if (v10 < 4u) {
          break;
        }
        v43 = 0;
        v44 = v36;
        do {
          v46 = *(v44 - 15);
          v45 = *(v44 - 14);
          v48 = v40[1];
          v47 = v40[2];
          v49 = *v40;
          v43 -= 4;
          v50 = *(v44 - 16);
          *(v44 - 13) = 0x0.0p+0f;
          *(v44 - 9) = 0x0.0p+0f;
          *(v44 - 5) = 0x0.0p+0f;
          *(v44 - 1) = 0x0.0p+0f;
          v44[3] = 0x0.0p+0f;
          v44[7] = 0x0.0p+0f;
          v44[11] = 0x0.0p+0f;
          v44[15] = 0x0.0p+0f;
          v51 = (float)(v48 * v45) - (float)(PSEUDO_UNFUSED(v47 * v46));
          v52 = (float)(v47 * v50) - (float)(PSEUDO_UNFUSED(v49 * v45));
          v53 = (float)(v49 * v46) - (float)(PSEUDO_UNFUSED(v48 * v50));
          v54 = *(v44 - 11) + v52;
          v55 = *(v44 - 10);
          *(v44 - 12) = v51 + *(v44 - 12);
          *(v44 - 11) = v54;
          v57 = *(v44 - 7);
          v56 = *(v44 - 6);
          v58 = *v40;
          v59 = v53 + v55;
          v60 = *(v44 - 8);
          *(v44 - 10) = v59;
          v62 = v40[1];
          v61 = v40[2];
          v63 = (float)(v62 * v56) - (float)(PSEUDO_UNFUSED(v61 * v57));
          v64 = (float)(v61 * v60) - (float)(PSEUDO_UNFUSED(v58 * v56));
          v65 = (float)(v58 * v57) - (float)(PSEUDO_UNFUSED(v62 * v60));
          v66 = *(v44 - 3) + v64;
          v67 = *(v44 - 2);
          *(v44 - 4) = v63 + *(v44 - 4);
          *(v44 - 3) = v66;
          v68 = *v40;
          v70 = v44[1];
          v69 = v44[2];
          v71 = v65 + v67;
          v72 = *v44;
          *(v44 - 2) = v71;
          v74 = v40[1];
          v73 = v40[2];
          v75 = (float)(v74 * v69) - (float)(PSEUDO_UNFUSED(v73 * v70));
          v76 = (float)(v73 * v72) - (float)(PSEUDO_UNFUSED(v68 * v69));
          v77 = (float)(v68 * v70) - (float)(PSEUDO_UNFUSED(v74 * v72));
          v78 = v44[5] + v76;
          v79 = v44[6];
          v44[4] = v75 + v44[4];
          v44[5] = v78;
          v81 = v44[9];
          v80 = v44[10];
          v82 = *v40;
          v83 = v77 + v79;
          v84 = v44[8];
          v44[6] = v83;
          v86 = v40[1];
          v85 = v40[2];
          v87 = (float)(v86 * v80) - (float)(PSEUDO_UNFUSED(v85 * v81));
          v88 = (float)(v85 * v84) - (float)(PSEUDO_UNFUSED(v82 * v80));
          v89 = (float)(v82 * v81) - (float)(PSEUDO_UNFUSED(v86 * v84));
          v90 = v44[13] + v88;
          v91 = v44[14];
          v44[12] = v87 + v44[12];
          v44[13] = v90;
          v44[14] = v89 + v91;
          v44 += 32;
        } while (v39 != v43);
        v42 = -v43;
        if (v35 != 0) {
          goto LABEL_21;
        }
      LABEL_23:
        v153 = v41;
        v105 = (int*)(v152 + 8 * v41);
        v106 = *((unsigned __int8*)v105 + 4);
        if (*((_BYTE*)v105 + 4) != 0) {
          v107 = *v105;
          v108 = 0;
          v109 = a5 + *v105;
          v110 = *v149 + v15 * v109;
          v111 = a5 + *v149;
          v112 = v107 + v15 * (a5 + 3 + *v149);
          v113 = v107 + v15 * v111;
          v114 = v107 + v15 * (a5 + 1 + *v149);
          v115 = v111 + v15 * v109;
          v116 = v107 + v15 * (a5 + 2 + *v149);
          while (1) {
            v117 = (float*)(v34 + 24LL * (unsigned int)(v107 + v108));
            if (v10 >= 4u) {
              break;
            }
            v118 = 0;
            if (v35 != 0) {
              goto LABEL_32;
            }
          LABEL_25:
            ++v108;
            v110 += v15;
            ++v112;
            ++v113;
            ++v114;
            ++v116;
            ++v109;
            v115 += v15;
            if (v108 == v106) {
              goto LABEL_14;
            }
          }
          v119 = 0;
          v120 = v36;
          v121 = v116;
          v122 = v114;
          v123 = v113;
          v124 = v112;
          v125 = v110;
          do {
            v126 = a5 + v123;
            v127 = a5 + v122;
            v119 -= 4;
            v123 += v38;
            v122 += v38;
            v128 = (float)((float)((float)(PSEUDO_UNFUSED(v117[4] *
                                                          *(v120 - 15))) +
                                   (float)(v117[3] * *(v120 - 16))) +
                           (float)(v117[5] * *(v120 - 14))) +
                   (float)((float)((float)(PSEUDO_UNFUSED(v117[1] *
                                                          *(v120 - 11))) +
                                   (float)(*v117 * *(v120 - 12))) +
                           (float)(v117[2] * *(v120 - 10)));
            *(float*)(a3 + 4LL * v126) = v128;
            v129 = a5 + v125;
            v125 += 4;
            *(float*)(a3 + 4LL * v129) = v128;
            v130 =
                (float)((float)((float)(PSEUDO_UNFUSED(v117[4] * *(v120 - 7))) +
                                (float)(v117[3] * *(v120 - 8))) +
                        (float)(v117[5] * *(v120 - 6))) +
                (float)((float)((float)(PSEUDO_UNFUSED(v117[1] * *(v120 - 3))) +
                                (float)(*v117 * *(v120 - 4))) +
                        (float)(v117[2] * *(v120 - 2)));
            *(float*)(a3 + 4LL * v127) = v130;
            *(float*)(a3 + 4LL * (v129 + 1)) = v130;
            v131 = a5 + v121;
            v121 += v38;
            v132 = (float)((float)((float)(PSEUDO_UNFUSED(v117[4] * v120[1])) +
                                   (float)(v117[3] * *v120)) +
                           (float)(v117[5] * v120[2])) +
                   (float)((float)((float)(PSEUDO_UNFUSED(v117[1] * v120[5])) +
                                   (float)(*v117 * v120[4])) +
                           (float)(v117[2] * v120[6]));
            *(float*)(a3 + 4LL * v131) = v132;
            *(float*)(a3 + 4LL * (v129 + 2)) = v132;
            v133 = a5 + v124;
            v124 += v38;
            v134 = (float)((float)(PSEUDO_UNFUSED(v117[4] * v120[9])) +
                           (float)(v117[3] * v120[8])) +
                   (float)(v117[5] * v120[10]);
            v135 = v120[12];
            v136 = v120[13];
            v137 = v120[14];
            v120 += 32;
            v138 =
                v134 + (float)((float)((float)(PSEUDO_UNFUSED(v117[1] * v136)) +
                                       (float)(*v117 * v135)) +
                               (float)(v117[2] * v137));
            *(float*)(a3 + 4LL * v133) = v138;
            *(float*)(a3 + 4LL * (v129 + 3)) = v138;
          } while (v39 != v119);
          v118 = -v119;
          if (v35 == 0) {
            goto LABEL_25;
          }
        LABEL_32:
          v139 = v111 + v118;
          v140 = v115 + v118;
          v141 = (float*)(v37 + 32 * v118);
          v142 = v35;
          v143 = v109 + v15 * v139;
          do {
            --v142;
            v144 = (float)((float)(PSEUDO_UNFUSED(v117[4] * *(v141 - 3))) +
                           (float)(v117[3] * *(v141 - 4))) +
                   (float)(v117[5] * *(v141 - 2));
            v145 = (float)(PSEUDO_UNFUSED(v117[1] * v141[1])) +
                   (float)(*v117 * *v141);
            v146 = v141[2];
            v141 += 8;
            v147 = v144 + (float)(v145 + (float)(v117[2] * v146));
            *(float*)(a3 + 4LL * v143) = v147;
            *(float*)(a3 + 4LL * v140) = v147;
            v143 += v15;
            ++v140;
          } while (v142 != 0);
          goto LABEL_25;
        }
      LABEL_14:
        result = v153;
        v32 = *(unsigned int*)(v151 + 40 * v153 + 32);
        if ((_DWORD)v32 == 0) {
          return result;
        }
      }
      v42 = 0;
      if (v35 == 0) {
        goto LABEL_23;
      }
    LABEL_21:
      v92 = v37 + 32 * v42;
      v93 = v35;
      do {
        v95 = *(float*)(v92 - 12);
        v94 = *(float*)(v92 - 8);
        v97 = v40[1];
        v96 = v40[2];
        v98 = *v40;
        --v93;
        v99 = *(float*)(v92 - 16);
        *(_DWORD*)(v92 - 4) = 0;
        *(_DWORD*)(v92 + 12) = 0;
        v100 = (float)(v97 * v94) - (float)(PSEUDO_UNFUSED(v96 * v95));
        v101 = (float)(v96 * v99) - (float)(PSEUDO_UNFUSED(v98 * v94));
        v102 = (float)(v98 * v95) - (float)(PSEUDO_UNFUSED(v97 * v99));
        v103 = *(float*)(v92 + 4) + v101;
        v104 = *(float*)(v92 + 8);
        *(float*)v92 = v100 + *(float*)v92;
        *(float*)(v92 + 4) = v103;
        *(float*)(v92 + 8) = v102 + v104;
        v92 += 32;
      } while (v93 != 0);
      goto LABEL_23;
    }
  }
  else {
    for (i = *(unsigned int*)(v7 + 40LL * a2 + 32); (_DWORD)i != 0;
         i = *(unsigned int*)(v7 + 40 * i + 32)) {
      result = i;
    }
  }
  return result;
}

__int64 physx_source_lowleveldynamics_src_34f960(
    __int64 a1, __int64* a2, __int64 a3, __int64 (***a4)(_QWORD, _QWORD),
    __int64 a5, double a6, long double a7, long double a8, float a9, float a10)
{

#pragma clang fp contract(off)
  __int64 v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  __int16 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  __int16 v23;
  bool v24;
  int v25;
  __int64 v26;
  char v27;
  unsigned int v28;
  char v29;
  int v30;
  unsigned int v31;
  char v32;
  unsigned int v33;
  bool v34;
  bool v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  float v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  unsigned int v51;
  __int64 v52;
  float v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  unsigned int v64;
  __int64 v65;
  int* v66;
  float v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  __int64 v78;
  __int64 v79;
  float v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  char v91;
  __int64 v92;
  int v93;
  unsigned int v94;
  char v95;
  __int64 v96;
  unsigned int v97;
  unsigned int v98;
  __int64 v99;
  char v100;
  int v101;
  int v102;
  int v103;
  int v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  unsigned int v114;
  int v115;
  unsigned int v116;
  unsigned int v117;
  __int64 v118;
  _DWORD* v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  __int64 v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  __int64 v136;
  __int64 v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int* v144;
  __int64 v145;
  __int64 v146;
  int v147;
  int v148;
  int v149;
  int v150;
  __int64 v151;
  __int64 v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  bool v159;
  __int64 v160;
  __int64 v161;
  int v162;
  unsigned int v163;
  char v164;
  __int64 v165;
  char v166;
  unsigned int v167;
  unsigned int v168;
  __int64 v169;
  __int64 v170;
  int v171;
  int v172;
  int v173;
  int v174;
  __int64 v175;
  char v176;
  __int64 v177;
  int v178;
  int v179;
  int v180;
  int v181;
  unsigned int v182;
  int v183;
  unsigned int v184;
  unsigned int v185;
  __int64 v186;
  int* v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  int v191;
  int v192;
  int v193;
  int v194;
  __int64 v195;
  __int64 v196;
  int v197;
  int v198;
  int v199;
  int v200;
  __int64 v201;
  __int64 v202;
  int v203;
  int v204;
  int v205;
  int v206;
  __int64 v207;
  int v208;
  int v209;
  int v210;
  int v211;
  __int64 v212;
  __int64 v213;
  int v214;
  int v215;
  int v216;
  int v217;
  char v218;
  int v219;
  unsigned int v220;
  char v221;
  unsigned int v222;
  unsigned int v223;
  __int64 v224;
  __int64 v225;
  unsigned int v226;
  unsigned int v227;
  __int64 v228;
  int i;
  float v230;
  float v231;
  char v232;
  float v233;
  float v234;
  float v235;
  __int64 v237;
  __int64 v238;
  int v239;
  unsigned int v240;
  char v241;
  __int64 v242;
  char v243;
  unsigned int v244;
  unsigned int v245;
  __int64 v246;
  __int64 v247;
  int v248;
  int v249;
  int v250;
  int v251;
  __int64 v252;
  char v253;
  __int64 v254;
  int v255;
  int v256;
  int v257;
  int v258;
  unsigned int v259;
  int v260;
  unsigned int v261;
  unsigned int v262;
  __int64 v263;
  int* v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  int v268;
  int v269;
  int v270;
  int v271;
  __int64 v272;
  __int64 v273;
  int v274;
  int v275;
  int v276;
  int v277;
  __int64 v278;
  __int64 v279;
  int v280;
  int v281;
  int v282;
  int v283;
  __int64 v284;
  int v285;
  int v286;
  int v287;
  int v288;
  __int64 v289;
  __int64 v290;
  int v291;
  int v292;
  int v293;
  int v294;

  v10 = *a2;
  v11 = a3 + 16;
  v12 = *(float*)(*(_QWORD*)(a1 + 40) + 76LL);
  v13 = *(float*)(*(_QWORD*)(a1 + 48) + 76LL);
  *(_DWORD*)(a3 + 20496) = 0;
  if (v12 >= v13) {
    v14 = v13;
  }
  else {
    v14 = v12;
  }
  v15 = 0x1.0000000000000p+0f;
  if (v10 != 0) {
    v16 = *(_WORD*)(v10 + 48);
    v17 = 64;
    v18 = v16 & 2;
    if ((v16 & 2) == 0) {
      v17 = 16;
    }
    if ((v16 & 0x80) != 0) {
      v19 = 32;
    }
    else {
      v19 = v17;
    }
    if ((v16 & 4) == 0) {
      v15 = *(float*)v10;
      v20 = *(float*)(v10 + 4);
      v22 = *(float*)(v10 + 8);
      v21 = *(float*)(v10 + 12);
      v23 = *(_WORD*)(v10 + 48);
      v24 = (v23 & 0x20) != 0;
      v25 = *((unsigned __int8*)a2 + 33);
      if (*((_BYTE*)a2 + 33) != 0) {
        v26 = a2[1];
        v27 = *(_WORD*)(v10 + 48);
        v28 = v16 & 0x82;
        if ((v23 & 0x20) != 0) {
          if (v28 != 0) {
            v29 = v18 | 4;
            v28 = 0;
            v30 = 0;
            v31 = 0;
            v32 = 0;
            if ((*(_WORD*)(v10 + 48) & 0x80) != 0) {
              v29 = 5;
            }
            do {
              if (v30 != 0) {
                v33 = *(unsigned __int8*)(v10 + 46);
                v10 += 64;
                v34 = v33 >= v31;
                v36 = v33 - v31;
                v35 = v36 != 0 && v34;
                LODWORD(v37) = v36 << v29;
                if (v35) {
                  v37 = (unsigned int)v37;
                }
                else {
                  v37 = 0;
                }
                v26 += v37;
              }
              v31 = *(unsigned __int8*)(v10 + 46);
              if (*(_BYTE*)(v10 + 46) != 0) {
                if ((v32 & 1) != 0) {
                  v38 = v19;
                }
                else {
                  v38 = 0;
                }
                v26 += v38;
                v39 = v11 + 80LL * v28;
                v40 = *(float*)(v26 + 28);
                if (v40 != 0x0.0p+0f) {
                  ++v28;
                  *(_QWORD*)v39 = *(_QWORD*)(v10 + 16);
                  v41 = *(_DWORD*)(v10 + 24);
                  v42 = *(_DWORD*)(v10 + 28);
                  *(_BYTE*)(v39 + 48) = *(_BYTE*)(v10 + 47);
                  *(_DWORD*)(v39 + 8) = v41;
                  v43 = *(_DWORD*)v26;
                  v44 = *(_DWORD*)(v26 + 8);
                  v45 = *(_DWORD*)(v26 + 12);
                  *(_DWORD*)(v39 + 20) = *(_DWORD*)(v26 + 4);
                  *(_DWORD*)(v39 + 24) = v44;
                  *(_DWORD*)(v39 + 12) = v45;
                  *(_DWORD*)(v39 + 16) = v43;
                  v46 = *(_DWORD*)(v10 + 32);
                  *(_DWORD*)(v39 + 44) = *(_DWORD*)(v10 + 36);
                  v47 = *(_DWORD*)(v10 + 40);
                  *(_DWORD*)(v39 + 56) = v46;
                  *(_DWORD*)(v39 + 60) = v42;
                  *(_DWORD*)(v39 + 64) = v47;
                  v48 = *(_DWORD*)(v26 + 16);
                  v49 = *(_DWORD*)(v26 + 20);
                  *(float*)(v39 + 28) = v40;
                  *(_DWORD*)(v39 + 32) = v48;
                  v50 = *(_DWORD*)(v26 + 24);
                  *(_DWORD*)(v39 + 36) = v49;
                  *(_DWORD*)(v39 + 40) = v50;
                }
                v51 = v31 - 1;
                if (v31 != 1) {
                  if (v31 != 2) {
                    v64 = v51 & 0xFFFFFFFE;
                    do {
                      v65 = v11 + 80LL * v28;
                      v66 = (int*)(v26 + v19);
                      v67 = *(float*)(v26 + v19 + 28);
                      if (v67 != 0x0.0p+0f) {
                        ++v28;
                        *(_QWORD*)v65 = *(_QWORD*)(v10 + 16);
                        v68 = *(_DWORD*)(v10 + 24);
                        v69 = *(_DWORD*)(v10 + 28);
                        *(_BYTE*)(v65 + 48) = *(_BYTE*)(v10 + 47);
                        *(_DWORD*)(v65 + 8) = v68;
                        v70 = *v66;
                        v71 = v66[2];
                        v72 = v66[3];
                        *(_DWORD*)(v65 + 20) = v66[1];
                        *(_DWORD*)(v65 + 24) = v71;
                        *(_DWORD*)(v65 + 12) = v72;
                        *(_DWORD*)(v65 + 16) = v70;
                        v73 = *(_DWORD*)(v10 + 32);
                        *(_DWORD*)(v65 + 44) = *(_DWORD*)(v10 + 36);
                        v74 = *(_DWORD*)(v10 + 40);
                        *(_DWORD*)(v65 + 56) = v73;
                        *(_DWORD*)(v65 + 60) = v69;
                        *(_DWORD*)(v65 + 64) = v74;
                        v75 = v66[4];
                        v76 = v66[5];
                        *(float*)(v65 + 28) = v67;
                        *(_DWORD*)(v65 + 32) = v75;
                        v77 = v66[6];
                        *(_DWORD*)(v65 + 36) = v76;
                        *(_DWORD*)(v65 + 40) = v77;
                      }
                      v78 = v11 + 80LL * v28;
                      v79 = v26 + 2 * v19;
                      v80 = *(float*)(v79 + 28);
                      if (v80 != 0x0.0p+0f) {
                        ++v28;
                        *(_QWORD*)v78 = *(_QWORD*)(v10 + 16);
                        v81 = *(_DWORD*)(v10 + 24);
                        v82 = *(_DWORD*)(v10 + 28);
                        *(_BYTE*)(v78 + 48) = *(_BYTE*)(v10 + 47);
                        *(_DWORD*)(v78 + 8) = v81;
                        v83 = *(_DWORD*)v79;
                        v84 = *(_DWORD*)(v79 + 8);
                        v85 = *(_DWORD*)(v79 + 12);
                        *(_DWORD*)(v78 + 20) = *(_DWORD*)(v79 + 4);
                        *(_DWORD*)(v78 + 24) = v84;
                        *(_DWORD*)(v78 + 12) = v85;
                        *(_DWORD*)(v78 + 16) = v83;
                        v86 = *(_DWORD*)(v10 + 32);
                        *(_DWORD*)(v78 + 44) = *(_DWORD*)(v10 + 36);
                        v87 = *(_DWORD*)(v10 + 40);
                        *(_DWORD*)(v78 + 56) = v86;
                        *(_DWORD*)(v78 + 60) = v82;
                        *(_DWORD*)(v78 + 64) = v87;
                        v88 = *(_DWORD*)(v79 + 16);
                        v89 = *(_DWORD*)(v79 + 20);
                        *(float*)(v78 + 28) = v80;
                        *(_DWORD*)(v78 + 32) = v88;
                        v90 = *(_DWORD*)(v79 + 24);
                        *(_DWORD*)(v78 + 36) = v89;
                        *(_DWORD*)(v78 + 40) = v90;
                      }
                      v26 = (__int64)v66 + v19;
                      v64 -= 2;
                    } while (v64 != 0);
                  }
                  if ((v51 & 1) != 0) {
                    v52 = v11 + 80LL * v28;
                    v26 += v19;
                    v53 = *(float*)(v26 + 28);
                    if (v53 != 0x0.0p+0f) {
                      ++v28;
                      *(_QWORD*)v52 = *(_QWORD*)(v10 + 16);
                      v54 = *(_DWORD*)(v10 + 24);
                      v55 = *(_DWORD*)(v10 + 28);
                      *(_BYTE*)(v52 + 48) = *(_BYTE*)(v10 + 47);
                      *(_DWORD*)(v52 + 8) = v54;
                      v56 = *(_DWORD*)v26;
                      v57 = *(_DWORD*)(v26 + 8);
                      v58 = *(_DWORD*)(v26 + 12);
                      *(_DWORD*)(v52 + 20) = *(_DWORD*)(v26 + 4);
                      *(_DWORD*)(v52 + 24) = v57;
                      *(_DWORD*)(v52 + 12) = v58;
                      *(_DWORD*)(v52 + 16) = v56;
                      v59 = *(_DWORD*)(v10 + 32);
                      *(_DWORD*)(v52 + 44) = *(_DWORD*)(v10 + 36);
                      v60 = *(_DWORD*)(v10 + 40);
                      *(_DWORD*)(v52 + 56) = v59;
                      *(_DWORD*)(v52 + 60) = v55;
                      *(_DWORD*)(v52 + 64) = v60;
                      v61 = *(_DWORD*)(v26 + 16);
                      v62 = *(_DWORD*)(v26 + 20);
                      *(float*)(v52 + 28) = v53;
                      *(_DWORD*)(v52 + 32) = v61;
                      v63 = *(_DWORD*)(v26 + 24);
                      *(_DWORD*)(v52 + 36) = v62;
                      *(_DWORD*)(v52 + 40) = v63;
                    }
                  }
                }
                v32 = 1;
              }
              ++v30;
            } while (v30 != v25);
            goto LABEL_115;
          }
          v159 = (v27 & 0x80) == 0;
          v160 = 4 * v19;
          v161 = 3 * v19;
          v162 = 0;
          v163 = 0;
          v164 = 0;
          v165 = 2 * v19;
          if (v159) {
            v166 = 4;
          }
          else {
            v166 = 5;
          }
          while (1) {
            if (v162 != 0) {
              v167 = *(unsigned __int8*)(v10 + 46);
              v10 += 64;
              v34 = v167 >= v163;
              v168 = v167 - v163;
              v35 = v168 != 0 && v34;
              LODWORD(v169) = v168 << v166;
              if (v35) {
                v169 = (unsigned int)v169;
              }
              else {
                v169 = 0;
              }
              v26 += v169;
            }
            v163 = *(unsigned __int8*)(v10 + 46);
            if (*(_BYTE*)(v10 + 46) == 0) {
              goto LABEL_73;
            }
            v170 = v11 + 80LL * v28;
            v172 = *(_DWORD*)(v10 + 28);
            v171 = *(_DWORD*)(v10 + 32);
            v173 = *(_DWORD*)(v10 + 36);
            v174 = *(_DWORD*)(v10 + 40);
            v175 = (v164 & 1) != 0 ? v19 : 0LL;
            v26 += v175;
            v176 = *(_BYTE*)(v10 + 47);
            v177 = *(_QWORD*)(v10 + 16);
            *(_DWORD*)(v170 + 28) = 2139095039;
            *(_DWORD*)(v170 + 44) = v173;
            *(_DWORD*)(v170 + 56) = v171;
            *(_DWORD*)(v170 + 60) = v172;
            *(_DWORD*)(v170 + 64) = v174;
            *(_BYTE*)(v170 + 48) = v176;
            *(_QWORD*)v170 = v177;
            *(_DWORD*)(v170 + 8) = *(_DWORD*)(v10 + 24);
            v178 = *(_DWORD*)v26;
            v179 = *(_DWORD*)(v26 + 4);
            v180 = *(_DWORD*)(v26 + 8);
            v181 = *(_DWORD*)(v26 + 12);
            *(_QWORD*)(v170 + 32) = 0;
            *(_DWORD*)(v170 + 40) = 0;
            *(_DWORD*)(v170 + 20) = v179;
            *(_DWORD*)(v170 + 24) = v180;
            *(_DWORD*)(v170 + 12) = v181;
            *(_DWORD*)(v170 + 16) = v178;
            v182 = v163 - 1;
            if (v163 != 1) {
              break;
            }
            v164 = 1;
            ++v28;
          LABEL_73:
            if (++v162 == v25) {
              goto LABEL_115;
            }
          }
          if (v163 - 2 >= 3) {
            v184 = v182 & 0xFFFFFFFC;
            v185 = v28 + 2;
            do {
              v186 = v26;
              v187 = (int*)(v26 + v19);
              v184 -= 4;
              v188 = v11 + 80LL * (v185 - 1);
              v189 = *(_QWORD*)(v10 + 16);
              *(_BYTE*)(v188 + 48) = v176;
              *(_DWORD*)(v188 + 28) = 2139095039;
              *(_DWORD*)(v188 + 44) = v173;
              *(_DWORD*)(v188 + 56) = v171;
              *(_DWORD*)(v188 + 60) = v172;
              *(_DWORD*)(v188 + 64) = v174;
              *(_QWORD*)v188 = v189;
              v190 = v11 + 80LL * v185;
              *(_DWORD*)(v188 + 8) = *(_DWORD*)(v10 + 24);
              v191 = *v187;
              v192 = v187[1];
              v193 = v187[2];
              v194 = v187[3];
              *(_QWORD*)(v188 + 32) = 0;
              *(_DWORD*)(v188 + 40) = 0;
              *(_DWORD*)(v188 + 20) = v192;
              *(_DWORD*)(v188 + 24) = v193;
              *(_DWORD*)(v188 + 12) = v194;
              *(_DWORD*)(v188 + 16) = v191;
              v195 = *(_QWORD*)(v10 + 16);
              *(_BYTE*)(v190 + 48) = v176;
              *(_DWORD*)(v190 + 28) = 2139095039;
              *(_DWORD*)(v190 + 44) = v173;
              *(_DWORD*)(v190 + 56) = v171;
              *(_DWORD*)(v190 + 60) = v172;
              *(_DWORD*)(v190 + 64) = v174;
              *(_QWORD*)v190 = v195;
              v196 = v11 + 80LL * (v185 + 1);
              *(_DWORD*)(v190 + 8) = *(_DWORD*)(v10 + 24);
              v197 = *(_DWORD*)(v186 + 2 * v19);
              v198 = *(_DWORD*)(v186 + v165 + 4);
              v199 = *(_DWORD*)(v186 + v165 + 8);
              v200 = *(_DWORD*)(v186 + v165 + 12);
              *(_QWORD*)(v190 + 32) = 0;
              *(_DWORD*)(v190 + 40) = 0;
              *(_DWORD*)(v190 + 20) = v198;
              *(_DWORD*)(v190 + 24) = v199;
              *(_DWORD*)(v190 + 12) = v200;
              *(_DWORD*)(v190 + 16) = v197;
              v201 = *(_QWORD*)(v10 + 16);
              *(_BYTE*)(v196 + 48) = v176;
              *(_DWORD*)(v196 + 28) = 2139095039;
              *(_DWORD*)(v196 + 44) = v173;
              *(_DWORD*)(v196 + 56) = v171;
              *(_DWORD*)(v196 + 60) = v172;
              *(_DWORD*)(v196 + 64) = v174;
              *(_QWORD*)v196 = v201;
              LODWORD(v201) = v185 + 2;
              v185 += 4;
              v202 = v11 + 80LL * (unsigned int)v201;
              *(_DWORD*)(v196 + 8) = *(_DWORD*)(v10 + 24);
              v203 = *(_DWORD*)(v186 + 3 * v19);
              v204 = *(_DWORD*)(v186 + v161 + 4);
              v205 = *(_DWORD*)(v186 + v161 + 8);
              v206 = *(_DWORD*)(v186 + v161 + 12);
              *(_QWORD*)(v196 + 32) = 0;
              *(_DWORD*)(v196 + 40) = 0;
              *(_DWORD*)(v196 + 20) = v204;
              *(_DWORD*)(v196 + 24) = v205;
              *(_DWORD*)(v196 + 12) = v206;
              *(_DWORD*)(v196 + 16) = v203;
              v207 = *(_QWORD*)(v10 + 16);
              *(_BYTE*)(v202 + 48) = v176;
              *(_DWORD*)(v202 + 28) = 2139095039;
              *(_DWORD*)(v202 + 44) = v173;
              *(_DWORD*)(v202 + 56) = v171;
              *(_DWORD*)(v202 + 60) = v172;
              *(_DWORD*)(v202 + 64) = v174;
              *(_QWORD*)v202 = v207;
              v208 = *(_DWORD*)(v186 + v160 + 12);
              v209 = *(_DWORD*)(v186 + 4 * v19);
              v26 = (__int64)v187 + 2 * v19 + v19;
              *(_DWORD*)(v202 + 8) = *(_DWORD*)(v10 + 24);
              *(_DWORD*)(v202 + 12) = v208;
              v210 = *(_DWORD*)(v186 + v160 + 4);
              v211 = *(_DWORD*)(v186 + v160 + 8);
              *(_QWORD*)(v202 + 32) = 0;
              *(_DWORD*)(v202 + 40) = 0;
              *(_DWORD*)(v202 + 16) = v209;
              *(_DWORD*)(v202 + 20) = v210;
              *(_DWORD*)(v202 + 24) = v211;
            } while (v184 != 0);
            v28 = v185 - 1;
            v183 = v182 & 3;
            if (v183 == 0) {
              goto LABEL_91;
            }
          }
          else {
            ++v28;
            v183 = v182 & 3;
            if (v183 == 0) {
            LABEL_91:
              v164 = 1;
              goto LABEL_73;
            }
          }
          do {
            v212 = v11 + 80LL * v28;
            v26 += v19;
            ++v28;
            --v183;
            v213 = *(_QWORD*)(v10 + 16);
            *(_BYTE*)(v212 + 48) = v176;
            *(_DWORD*)(v212 + 28) = 2139095039;
            *(_DWORD*)(v212 + 44) = v173;
            *(_DWORD*)(v212 + 56) = v171;
            *(_DWORD*)(v212 + 60) = v172;
            *(_DWORD*)(v212 + 64) = v174;
            *(_QWORD*)v212 = v213;
            *(_DWORD*)(v212 + 8) = *(_DWORD*)(v10 + 24);
            v214 = *(_DWORD*)v26;
            v215 = *(_DWORD*)(v26 + 4);
            v216 = *(_DWORD*)(v26 + 8);
            v217 = *(_DWORD*)(v26 + 12);
            *(_QWORD*)(v212 + 32) = 0;
            *(_DWORD*)(v212 + 40) = 0;
            *(_DWORD*)(v212 + 20) = v215;
            *(_DWORD*)(v212 + 24) = v216;
            *(_DWORD*)(v212 + 12) = v217;
            *(_DWORD*)(v212 + 16) = v214;
          } while (v183 != 0);
          goto LABEL_91;
        }
        if (v14 != 0x0.0p+0f) {
          if (v28 != 0) {
            v91 = v18 | 4;
            v92 = 2 * v19;
            v28 = 0;
            v93 = 0;
            v94 = 0;
            v95 = 0;
            v96 = 3 * v19;
            if ((*(_WORD*)(v10 + 48) & 0x80) != 0) {
              v91 = 5;
            }
            while (1) {
              if (v93 != 0) {
                v97 = *(unsigned __int8*)(v10 + 46);
                v10 += 64;
                v34 = v97 >= v94;
                v98 = v97 - v94;
                v35 = v98 != 0 && v34;
                LODWORD(v99) = v98 << v91;
                if (v35) {
                  v99 = (unsigned int)v99;
                }
                else {
                  v99 = 0;
                }
                v26 += v99;
              }
              v94 = *(unsigned __int8*)(v10 + 46);
              if (*(_BYTE*)(v10 + 46) == 0) {
                goto LABEL_50;
              }
              v100 = *(_BYTE*)(v10 + 47);
              v102 = *(_DWORD*)(v10 + 28);
              v101 = *(_DWORD*)(v10 + 32);
              v103 = *(_DWORD*)(v10 + 36);
              v104 = *(_DWORD*)(v10 + 40);
              v105 = (v95 & 1) != 0 ? v19 : 0LL;
              v26 += v105;
              v106 = v11 + 80LL * v28;
              v107 = *(_QWORD*)(v10 + 16);
              *(_BYTE*)(v106 + 48) = v100;
              *(_DWORD*)(v106 + 44) = v103;
              *(_DWORD*)(v106 + 56) = v101;
              *(_DWORD*)(v106 + 60) = v102;
              *(_DWORD*)(v106 + 64) = v104;
              *(_QWORD*)v106 = v107;
              *(_DWORD*)(v106 + 8) = *(_DWORD*)(v10 + 24);
              v108 = *(_DWORD*)v26;
              v109 = *(_DWORD*)(v26 + 8);
              v110 = *(_DWORD*)(v26 + 12);
              *(_DWORD*)(v106 + 20) = *(_DWORD*)(v26 + 4);
              *(_DWORD*)(v106 + 24) = v109;
              *(_DWORD*)(v106 + 12) = v110;
              *(_DWORD*)(v106 + 16) = v108;
              v111 = *(_DWORD*)(v26 + 16);
              v112 = *(_DWORD*)(v26 + 20);
              *(float*)(v106 + 28) = v14;
              *(_DWORD*)(v106 + 32) = v111;
              v113 = *(_DWORD*)(v26 + 24);
              *(_DWORD*)(v106 + 36) = v112;
              *(_DWORD*)(v106 + 40) = v113;
              v114 = v94 - 1;
              if (v94 != 1) {
                break;
              }
              v95 = 1;
              ++v28;
            LABEL_50:
              if (++v93 == v25) {
                goto LABEL_115;
              }
            }
            if (v94 - 2 >= 3) {
              v116 = v114 & 0xFFFFFFFC;
              v117 = v28 + 2;
              do {
                v118 = v26;
                v119 = (_DWORD*)(v26 + v19);
                v116 -= 4;
                v120 = v11 + 80LL * (v117 - 1);
                v121 = *(_QWORD*)(v10 + 16);
                *(_BYTE*)(v120 + 48) = v100;
                *(_DWORD*)(v120 + 44) = v103;
                *(_DWORD*)(v120 + 56) = v101;
                *(_DWORD*)(v120 + 60) = v102;
                *(_DWORD*)(v120 + 64) = v104;
                *(_QWORD*)v120 = v121;
                v122 = v11 + 80LL * v117;
                *(_DWORD*)(v120 + 8) = *(_DWORD*)(v10 + 24);
                v123 = v119[1];
                v124 = v119[2];
                v125 = v119[3];
                *(_DWORD*)(v120 + 16) = *v119;
                *(_DWORD*)(v120 + 20) = v123;
                v126 = v119[4];
                v127 = v119[5];
                *(_DWORD*)(v120 + 24) = v124;
                *(_DWORD*)(v120 + 12) = v125;
                *(float*)(v120 + 28) = v14;
                *(_DWORD*)(v120 + 32) = v126;
                v128 = v119[6];
                *(_DWORD*)(v120 + 36) = v127;
                *(_DWORD*)(v120 + 40) = v128;
                v129 = *(_QWORD*)(v10 + 16);
                *(_BYTE*)(v122 + 48) = v100;
                *(_DWORD*)(v122 + 44) = v103;
                *(_DWORD*)(v122 + 56) = v101;
                *(_DWORD*)(v122 + 60) = v102;
                *(_DWORD*)(v122 + 64) = v104;
                *(_QWORD*)v122 = v129;
                *(_DWORD*)(v122 + 8) = *(_DWORD*)(v10 + 24);
                v130 = *(_DWORD*)(v118 + 2 * v19);
                v131 = *(_DWORD*)(v118 + v92 + 8);
                v132 = *(_DWORD*)(v118 + v92 + 12);
                *(_DWORD*)(v122 + 20) = *(_DWORD*)(v118 + v92 + 4);
                *(_DWORD*)(v122 + 24) = v131;
                *(_DWORD*)(v122 + 12) = v132;
                *(_DWORD*)(v122 + 16) = v130;
                v133 = *(_DWORD*)(v118 + v92 + 16);
                v134 = *(_DWORD*)(v118 + v92 + 20);
                *(float*)(v122 + 28) = v14;
                *(_DWORD*)(v122 + 32) = v133;
                v135 = *(_DWORD*)(v118 + v92 + 24);
                v136 = v11 + 80LL * (v117 + 1);
                *(_DWORD*)(v122 + 36) = v134;
                *(_DWORD*)(v122 + 40) = v135;
                v137 = *(_QWORD*)(v10 + 16);
                *(_BYTE*)(v136 + 48) = v100;
                *(_DWORD*)(v136 + 44) = v103;
                *(_DWORD*)(v136 + 56) = v101;
                *(_DWORD*)(v136 + 60) = v102;
                *(_DWORD*)(v136 + 64) = v104;
                *(_QWORD*)v136 = v137;
                *(_DWORD*)(v136 + 8) = *(_DWORD*)(v10 + 24);
                v138 = *(_DWORD*)(v118 + 3 * v19);
                v139 = *(_DWORD*)(v118 + v96 + 8);
                v140 = *(_DWORD*)(v118 + v96 + 12);
                *(_DWORD*)(v136 + 20) = *(_DWORD*)(v118 + v96 + 4);
                *(_DWORD*)(v136 + 24) = v139;
                *(_DWORD*)(v136 + 12) = v140;
                *(_DWORD*)(v136 + 16) = v138;
                v141 = *(_DWORD*)(v118 + v96 + 16);
                v142 = *(_DWORD*)(v118 + v96 + 20);
                v143 = *(_DWORD*)(v118 + v96 + 24);
                v144 = (int*)(v118 + 4 * v19);
                *(float*)(v136 + 28) = v14;
                *(_DWORD*)(v136 + 32) = v141;
                *(_DWORD*)(v136 + 36) = v142;
                *(_DWORD*)(v136 + 40) = v143;
                LODWORD(v136) = v117 + 2;
                v117 += 4;
                v145 = v11 + 80LL * (unsigned int)v136;
                v146 = *(_QWORD*)(v10 + 16);
                *(_BYTE*)(v145 + 48) = v100;
                *(_DWORD*)(v145 + 44) = v103;
                *(_DWORD*)(v145 + 56) = v101;
                *(_DWORD*)(v145 + 60) = v102;
                *(_DWORD*)(v145 + 64) = v104;
                *(_QWORD*)v145 = v146;
                v147 = *v144;
                v26 = (__int64)v119 + 2 * v19 + v19;
                *(_DWORD*)(v145 + 8) = *(_DWORD*)(v10 + 24);
                *(_DWORD*)(v145 + 16) = v147;
                v148 = v144[2];
                *(_DWORD*)(v145 + 20) = v144[1];
                *(_DWORD*)(v145 + 24) = v148;
                v149 = v144[4];
                *(_DWORD*)(v145 + 12) = v144[3];
                *(float*)(v145 + 28) = v14;
                *(_DWORD*)(v145 + 32) = v149;
                v150 = v144[6];
                *(_DWORD*)(v145 + 36) = v144[5];
                *(_DWORD*)(v145 + 40) = v150;
              } while (v116 != 0);
              v28 = v117 - 1;
              v115 = v114 & 3;
              if (v115 == 0) {
                goto LABEL_68;
              }
            }
            else {
              ++v28;
              v115 = v114 & 3;
              if (v115 == 0) {
              LABEL_68:
                v95 = 1;
                goto LABEL_50;
              }
            }
            do {
              v151 = v11 + 80LL * v28;
              v26 += v19;
              ++v28;
              --v115;
              v152 = *(_QWORD*)(v10 + 16);
              *(_BYTE*)(v151 + 48) = v100;
              *(_DWORD*)(v151 + 44) = v103;
              *(_DWORD*)(v151 + 56) = v101;
              *(_DWORD*)(v151 + 60) = v102;
              *(_DWORD*)(v151 + 64) = v104;
              *(_QWORD*)v151 = v152;
              *(_DWORD*)(v151 + 8) = *(_DWORD*)(v10 + 24);
              v153 = *(_DWORD*)v26;
              v154 = *(_DWORD*)(v26 + 8);
              v155 = *(_DWORD*)(v26 + 12);
              *(_DWORD*)(v151 + 20) = *(_DWORD*)(v26 + 4);
              *(_DWORD*)(v151 + 24) = v154;
              *(_DWORD*)(v151 + 12) = v155;
              *(_DWORD*)(v151 + 16) = v153;
              v156 = *(_DWORD*)(v26 + 16);
              v157 = *(_DWORD*)(v26 + 20);
              *(float*)(v151 + 28) = v14;
              *(_DWORD*)(v151 + 32) = v156;
              v158 = *(_DWORD*)(v26 + 24);
              *(_DWORD*)(v151 + 36) = v157;
              *(_DWORD*)(v151 + 40) = v158;
            } while (v115 != 0);
            goto LABEL_68;
          }
          v159 = (v27 & 0x80) == 0;
          v237 = 4 * v19;
          v238 = 3 * v19;
          v239 = 0;
          v240 = 0;
          v241 = 0;
          v242 = 2 * v19;
          if (v159) {
            v243 = 4;
          }
          else {
            v243 = 5;
          }
          while (1) {
            if (v239 != 0) {
              v244 = *(unsigned __int8*)(v10 + 46);
              v10 += 64;
              v34 = v244 >= v240;
              v245 = v244 - v240;
              v35 = v245 != 0 && v34;
              LODWORD(v246) = v245 << v243;
              if (v35) {
                v246 = (unsigned int)v246;
              }
              else {
                v246 = 0;
              }
              v26 += v246;
            }
            v240 = *(unsigned __int8*)(v10 + 46);
            if (*(_BYTE*)(v10 + 46) == 0) {
              goto LABEL_121;
            }
            v247 = v11 + 80LL * v28;
            v249 = *(_DWORD*)(v10 + 28);
            v248 = *(_DWORD*)(v10 + 32);
            v250 = *(_DWORD*)(v10 + 36);
            v251 = *(_DWORD*)(v10 + 40);
            v252 = (v241 & 1) != 0 ? v19 : 0LL;
            v26 += v252;
            v253 = *(_BYTE*)(v10 + 47);
            v254 = *(_QWORD*)(v10 + 16);
            *(float*)(v247 + 28) = v14;
            *(_DWORD*)(v247 + 44) = v250;
            *(_DWORD*)(v247 + 56) = v248;
            *(_DWORD*)(v247 + 60) = v249;
            *(_DWORD*)(v247 + 64) = v251;
            *(_BYTE*)(v247 + 48) = v253;
            *(_QWORD*)v247 = v254;
            *(_DWORD*)(v247 + 8) = *(_DWORD*)(v10 + 24);
            v255 = *(_DWORD*)v26;
            v256 = *(_DWORD*)(v26 + 4);
            v257 = *(_DWORD*)(v26 + 8);
            v258 = *(_DWORD*)(v26 + 12);
            *(_QWORD*)(v247 + 32) = 0;
            *(_DWORD*)(v247 + 40) = 0;
            *(_DWORD*)(v247 + 20) = v256;
            *(_DWORD*)(v247 + 24) = v257;
            *(_DWORD*)(v247 + 12) = v258;
            *(_DWORD*)(v247 + 16) = v255;
            v259 = v240 - 1;
            if (v240 != 1) {
              break;
            }
            v241 = 1;
            ++v28;
          LABEL_121:
            if (++v239 == v25) {
              goto LABEL_115;
            }
          }
          if (v240 - 2 >= 3) {
            v261 = v259 & 0xFFFFFFFC;
            v262 = v28 + 2;
            do {
              v263 = v26;
              v264 = (int*)(v26 + v19);
              v261 -= 4;
              v265 = v11 + 80LL * (v262 - 1);
              v266 = *(_QWORD*)(v10 + 16);
              *(_BYTE*)(v265 + 48) = v253;
              *(_DWORD*)(v265 + 44) = v250;
              *(_DWORD*)(v265 + 56) = v248;
              *(_DWORD*)(v265 + 60) = v249;
              *(_DWORD*)(v265 + 64) = v251;
              *(_QWORD*)v265 = v266;
              v267 = v11 + 80LL * v262;
              *(_DWORD*)(v265 + 8) = *(_DWORD*)(v10 + 24);
              v268 = *v264;
              v269 = v264[1];
              v270 = v264[2];
              v271 = v264[3];
              *(_QWORD*)(v265 + 32) = 0;
              *(_DWORD*)(v265 + 40) = 0;
              *(_DWORD*)(v265 + 16) = v268;
              *(_DWORD*)(v265 + 20) = v269;
              *(_DWORD*)(v265 + 24) = v270;
              *(float*)(v265 + 28) = v14;
              *(_DWORD*)(v265 + 12) = v271;
              v272 = *(_QWORD*)(v10 + 16);
              *(_BYTE*)(v267 + 48) = v253;
              *(_DWORD*)(v267 + 44) = v250;
              *(_DWORD*)(v267 + 56) = v248;
              *(_DWORD*)(v267 + 60) = v249;
              *(_DWORD*)(v267 + 64) = v251;
              *(_QWORD*)v267 = v272;
              v273 = v11 + 80LL * (v262 + 1);
              *(_DWORD*)(v267 + 8) = *(_DWORD*)(v10 + 24);
              v274 = *(_DWORD*)(v263 + 2 * v19);
              v275 = *(_DWORD*)(v263 + v242 + 4);
              v276 = *(_DWORD*)(v263 + v242 + 8);
              v277 = *(_DWORD*)(v263 + v242 + 12);
              *(_QWORD*)(v267 + 32) = 0;
              *(_DWORD*)(v267 + 40) = 0;
              *(_DWORD*)(v267 + 16) = v274;
              *(_DWORD*)(v267 + 20) = v275;
              *(_DWORD*)(v267 + 24) = v276;
              *(float*)(v267 + 28) = v14;
              *(_DWORD*)(v267 + 12) = v277;
              v278 = *(_QWORD*)(v10 + 16);
              *(_BYTE*)(v273 + 48) = v253;
              *(_DWORD*)(v273 + 44) = v250;
              *(_DWORD*)(v273 + 56) = v248;
              *(_DWORD*)(v273 + 60) = v249;
              *(_DWORD*)(v273 + 64) = v251;
              *(_QWORD*)v273 = v278;
              LODWORD(v278) = v262 + 2;
              v262 += 4;
              v279 = v11 + 80LL * (unsigned int)v278;
              *(_DWORD*)(v273 + 8) = *(_DWORD*)(v10 + 24);
              v280 = *(_DWORD*)(v263 + 3 * v19);
              v281 = *(_DWORD*)(v263 + v238 + 4);
              v282 = *(_DWORD*)(v263 + v238 + 8);
              v283 = *(_DWORD*)(v263 + v238 + 12);
              *(_QWORD*)(v273 + 32) = 0;
              *(_DWORD*)(v273 + 40) = 0;
              *(_DWORD*)(v273 + 16) = v280;
              *(_DWORD*)(v273 + 20) = v281;
              *(_DWORD*)(v273 + 24) = v282;
              *(float*)(v273 + 28) = v14;
              *(_DWORD*)(v273 + 12) = v283;
              v284 = *(_QWORD*)(v10 + 16);
              *(_BYTE*)(v279 + 48) = v253;
              *(_DWORD*)(v279 + 44) = v250;
              *(_DWORD*)(v279 + 56) = v248;
              *(_DWORD*)(v279 + 60) = v249;
              *(_DWORD*)(v279 + 64) = v251;
              *(_QWORD*)v279 = v284;
              v285 = *(_DWORD*)(v263 + v237 + 12);
              v286 = *(_DWORD*)(v263 + 4 * v19);
              v26 = (__int64)v264 + 2 * v19 + v19;
              *(_DWORD*)(v279 + 8) = *(_DWORD*)(v10 + 24);
              *(_DWORD*)(v279 + 12) = v285;
              v287 = *(_DWORD*)(v263 + v237 + 4);
              v288 = *(_DWORD*)(v263 + v237 + 8);
              *(_QWORD*)(v279 + 32) = 0;
              *(_DWORD*)(v279 + 40) = 0;
              *(_DWORD*)(v279 + 16) = v286;
              *(_DWORD*)(v279 + 20) = v287;
              *(_DWORD*)(v279 + 24) = v288;
              *(float*)(v279 + 28) = v14;
            } while (v261 != 0);
            v28 = v262 - 1;
            v260 = v259 & 3;
            if (v260 == 0) {
              goto LABEL_139;
            }
          }
          else {
            ++v28;
            v260 = v259 & 3;
            if (v260 == 0) {
            LABEL_139:
              v241 = 1;
              goto LABEL_121;
            }
          }
          do {
            v289 = v11 + 80LL * v28;
            v26 += v19;
            ++v28;
            --v260;
            v290 = *(_QWORD*)(v10 + 16);
            *(_BYTE*)(v289 + 48) = v253;
            *(float*)(v289 + 28) = v14;
            *(_DWORD*)(v289 + 44) = v250;
            *(_DWORD*)(v289 + 56) = v248;
            *(_DWORD*)(v289 + 60) = v249;
            *(_DWORD*)(v289 + 64) = v251;
            *(_QWORD*)v289 = v290;
            *(_DWORD*)(v289 + 8) = *(_DWORD*)(v10 + 24);
            v291 = *(_DWORD*)v26;
            v292 = *(_DWORD*)(v26 + 4);
            v293 = *(_DWORD*)(v26 + 8);
            v294 = *(_DWORD*)(v26 + 12);
            *(_QWORD*)(v289 + 32) = 0;
            *(_DWORD*)(v289 + 40) = 0;
            *(_DWORD*)(v289 + 20) = v292;
            *(_DWORD*)(v289 + 24) = v293;
            *(_DWORD*)(v289 + 12) = v294;
            *(_DWORD*)(v289 + 16) = v291;
          } while (v260 != 0);
          goto LABEL_139;
        }
        v218 = v18 | 4;
        v219 = 0;
        v220 = 0;
        v221 = 0;
        if ((*(_WORD*)(v10 + 48) & 0x80) != 0) {
          v218 = 5;
        }
        do {
          if (v219 != 0) {
            v222 = *(unsigned __int8*)(v10 + 46);
            v10 += 64;
            v34 = v222 >= v220;
            v223 = v222 - v220;
            v35 = v223 != 0 && v34;
            LODWORD(v224) = v223 << v218;
            if (v35) {
              v224 = (unsigned int)v224;
            }
            else {
              v224 = 0;
            }
            v26 += v224;
          }
          v220 = *(unsigned __int8*)(v10 + 46);
          if (*(_BYTE*)(v10 + 46) != 0) {
            if ((v221 & 1) != 0) {
              v225 = v19;
            }
            else {
              v225 = 0;
            }
            v26 += v225;
            v226 = v220 - 1;
            if (v220 != 1) {
              if (v220 - 2 >= 7) {
                v227 = v226 & 0xFFFFFFF8;
                do {
                  v228 = v26;
                  v227 -= 8;
                  v26 = v26 + (v19 | 0x80) + v19 + v19 + v19 + v19 + v19 + v19 +
                        v19 - 128;
                } while (v227 != 0);
                v26 = v228 + v19 + 2 * v19 + 3 * v19 + 2 * v19;
              }
              for (i = v226 & 7; i != 0; --i) {
                v26 += v19;
              }
            }
            v221 = 1;
          }
          ++v219;
        } while (v219 != v25);
      }
      v28 = 0;
    LABEL_115:
      LOBYTE(v10) = (v23 & 0x10) != 0;
      goto LABEL_116;
    }
    v24 = false;
    LOBYTE(v10) = 0;
  }
  else {
    v24 = false;
  }
  v28 = 0;
  v22 = 0x1.0000000000000p+0f;
  v20 = 0x1.0000000000000p+0f;
  v21 = 0x1.0000000000000p+0f;
LABEL_116:
  v230 = *(float*)a1;
  v231 = *(float*)(a1 + 4);
  *(_DWORD*)(a3 + 20496) = v28;
  v232 = v10 | *(_BYTE*)(a1 + 150);
  *(_QWORD*)(a1 + 136) = v11;
  *(_DWORD*)(a1 + 144) = v28;
  *(_BYTE*)(a1 + 149) = v24;
  *(_BYTE*)(a1 + 150) = v232;
  v233 = v15 * v230;
  v234 = *(float*)(a1 + 8);
  v235 = *(float*)(a1 + 12);
  *(float*)a1 = v233;
  *(float*)(a1 + 4) = v20 * v231;
  *(float*)(a1 + 8) = v22 * v234;
  *(float*)(a1 + 12) = v21 * v235;
  return physx_Dy_createFinalizeSolverContacts(a1, a3 + 20512, a4, a5, a6, a7,
                                               a8, a9, a10);
}

__int64 physx_source_lowleveldynamics_src_358d40(__int64 a1, __int64* a2,
                                                 __int64 a3, __int64 a4,
                                                 long double a5, float32x2_t a6,
                                                 long double a7, long double a8,
                                                 long double a9, float a10,
                                                 float a11, float a12)
{

#pragma clang fp contract(off)
  int v12;
  float v13;
  int v14;
  float v15;
  __int64 v16;
  float v17;
  __int64 v18;
  __int16 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  float v23;
  float v24;
  float v25;
  __int16 v26;
  bool v27;
  int v28;
  __int64 v29;
  char v30;
  unsigned int v31;
  char v32;
  int v33;
  unsigned int v34;
  char v35;
  unsigned int v36;
  bool v37;
  bool v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  float v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  unsigned int v54;
  __int64 v55;
  float v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  unsigned int v67;
  __int64 v68;
  int* v69;
  float v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  __int64 v81;
  __int64 v82;
  float v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  float v94;
  char v95;
  __int64 v96;
  int v97;
  unsigned int v98;
  char v99;
  __int64 v100;
  unsigned int v101;
  unsigned int v102;
  __int64 v103;
  char v104;
  int v105;
  int v106;
  int v107;
  int v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  unsigned int v118;
  int v119;
  unsigned int v120;
  unsigned int v121;
  __int64 v122;
  _DWORD* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  __int64 v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  __int64 v140;
  __int64 v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int* v148;
  __int64 v149;
  __int64 v150;
  int v151;
  int v152;
  int v153;
  int v154;
  __int64 v155;
  __int64 v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  bool v163;
  __int64 v164;
  __int64 v165;
  int v166;
  unsigned int v167;
  char v168;
  __int64 v169;
  char v170;
  unsigned int v171;
  unsigned int v172;
  __int64 v173;
  __int64 v174;
  int v175;
  int v176;
  int v177;
  int v178;
  __int64 v179;
  char v180;
  __int64 v181;
  int v182;
  int v183;
  int v184;
  int v185;
  unsigned int v186;
  int v187;
  unsigned int v188;
  unsigned int v189;
  __int64 v190;
  int* v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  int v195;
  int v196;
  int v197;
  int v198;
  __int64 v199;
  __int64 v200;
  int v201;
  int v202;
  int v203;
  int v204;
  __int64 v205;
  __int64 v206;
  int v207;
  int v208;
  int v209;
  int v210;
  __int64 v211;
  int v212;
  int v213;
  int v214;
  int v215;
  __int64 v216;
  __int64 v217;
  int v218;
  int v219;
  int v220;
  int v221;
  char v222;
  int v223;
  unsigned int v224;
  char v225;
  unsigned int v226;
  unsigned int v227;
  __int64 v228;
  __int64 v229;
  unsigned int v230;
  unsigned int v231;
  __int64 v232;
  int i;
  float v234;
  float v235;
  float v236;
  char v237;
  __int64 v239;
  __int64 v240;
  int v241;
  unsigned int v242;
  char v243;
  __int64 v244;
  char v245;
  unsigned int v246;
  unsigned int v247;
  __int64 v248;
  __int64 v249;
  int v250;
  int v251;
  int v252;
  int v253;
  __int64 v254;
  char v255;
  __int64 v256;
  int v257;
  int v258;
  int v259;
  int v260;
  unsigned int v261;
  int v262;
  unsigned int v263;
  unsigned int v264;
  __int64 v265;
  int* v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  int v270;
  int v271;
  int v272;
  int v273;
  __int64 v274;
  __int64 v275;
  int v276;
  int v277;
  int v278;
  int v279;
  __int64 v280;
  __int64 v281;
  int v282;
  int v283;
  int v284;
  int v285;
  __int64 v286;
  int v287;
  int v288;
  int v289;
  int v290;
  __int64 v291;
  __int64 v292;
  int v293;
  int v294;
  int v295;
  int v296;

  v12 = *(_DWORD*)(a1 + 128);
  *(_DWORD*)(a3 + 20496) = 0;
  if (v12 == 8 ||
      (v13 = 0x0.0p+0f, (*(_BYTE*)(*(_QWORD*)(a1 + 24) + 62LL) & 1) == 0)) {
    v13 = *(float*)(a1 + 4);
  }
  v14 = *(_DWORD*)(a1 + 132);
  *(float*)(a1 + 4) = v13;
  if (v14 == 8 ||
      (v15 = 0x0.0p+0f, (*(_BYTE*)(*(_QWORD*)(a1 + 32) + 62LL) & 1) == 0)) {
    v15 = *(float*)(a1 + 12);
  }
  v16 = *a2;
  v17 = 0x1.0000000000000p+0f;
  v18 = a3 + 16;
  *(float*)(a1 + 12) = v15;
  if (v16 != 0) {
    v19 = *(_WORD*)(v16 + 48);
    v20 = 64;
    v21 = v19 & 2;
    if ((v19 & 2) == 0) {
      v20 = 16;
    }
    if ((v19 & 0x80) != 0) {
      v22 = 32;
    }
    else {
      v22 = v20;
    }
    if ((v19 & 4) == 0) {
      v17 = *(float*)v16;
      v23 = *(float*)(v16 + 4);
      v24 = *(float*)(v16 + 8);
      v25 = *(float*)(v16 + 12);
      v26 = *(_WORD*)(v16 + 48);
      v27 = (v26 & 0x20) != 0;
      v28 = *((unsigned __int8*)a2 + 33);
      if (*((_BYTE*)a2 + 33) != 0) {
        v29 = a2[1];
        v30 = *(_WORD*)(v16 + 48);
        v31 = v19 & 0x82;
        if ((v26 & 0x20) != 0) {
          if (v31 != 0) {
            v32 = v21 | 4;
            v31 = 0;
            v33 = 0;
            v34 = 0;
            v35 = 0;
            if ((*(_WORD*)(v16 + 48) & 0x80) != 0) {
              v32 = 5;
            }
            do {
              if (v33 != 0) {
                v36 = *(unsigned __int8*)(v16 + 46);
                v16 += 64;
                v37 = v36 >= v34;
                v39 = v36 - v34;
                v38 = v39 != 0 && v37;
                LODWORD(v40) = v39 << v32;
                if (v38) {
                  v40 = (unsigned int)v40;
                }
                else {
                  v40 = 0;
                }
                v29 += v40;
              }
              v34 = *(unsigned __int8*)(v16 + 46);
              if (*(_BYTE*)(v16 + 46) != 0) {
                if ((v35 & 1) != 0) {
                  v41 = v22;
                }
                else {
                  v41 = 0;
                }
                v29 += v41;
                v42 = v18 + 80LL * v31;
                v43 = *(float*)(v29 + 28);
                if (v43 != 0x0.0p+0f) {
                  ++v31;
                  *(_QWORD*)v42 = *(_QWORD*)(v16 + 16);
                  v44 = *(_DWORD*)(v16 + 24);
                  v45 = *(_DWORD*)(v16 + 28);
                  *(_BYTE*)(v42 + 48) = *(_BYTE*)(v16 + 47);
                  *(_DWORD*)(v42 + 8) = v44;
                  v46 = *(_DWORD*)v29;
                  v47 = *(_DWORD*)(v29 + 8);
                  v48 = *(_DWORD*)(v29 + 12);
                  *(_DWORD*)(v42 + 20) = *(_DWORD*)(v29 + 4);
                  *(_DWORD*)(v42 + 24) = v47;
                  *(_DWORD*)(v42 + 12) = v48;
                  *(_DWORD*)(v42 + 16) = v46;
                  v49 = *(_DWORD*)(v16 + 32);
                  *(_DWORD*)(v42 + 44) = *(_DWORD*)(v16 + 36);
                  v50 = *(_DWORD*)(v16 + 40);
                  *(_DWORD*)(v42 + 56) = v49;
                  *(_DWORD*)(v42 + 60) = v45;
                  *(_DWORD*)(v42 + 64) = v50;
                  v51 = *(_DWORD*)(v29 + 16);
                  v52 = *(_DWORD*)(v29 + 20);
                  *(float*)(v42 + 28) = v43;
                  *(_DWORD*)(v42 + 32) = v51;
                  v53 = *(_DWORD*)(v29 + 24);
                  *(_DWORD*)(v42 + 36) = v52;
                  *(_DWORD*)(v42 + 40) = v53;
                }
                v54 = v34 - 1;
                if (v34 != 1) {
                  if (v34 != 2) {
                    v67 = v54 & 0xFFFFFFFE;
                    do {
                      v68 = v18 + 80LL * v31;
                      v69 = (int*)(v29 + v22);
                      v70 = *(float*)(v29 + v22 + 28);
                      if (v70 != 0x0.0p+0f) {
                        ++v31;
                        *(_QWORD*)v68 = *(_QWORD*)(v16 + 16);
                        v71 = *(_DWORD*)(v16 + 24);
                        v72 = *(_DWORD*)(v16 + 28);
                        *(_BYTE*)(v68 + 48) = *(_BYTE*)(v16 + 47);
                        *(_DWORD*)(v68 + 8) = v71;
                        v73 = *v69;
                        v74 = v69[2];
                        v75 = v69[3];
                        *(_DWORD*)(v68 + 20) = v69[1];
                        *(_DWORD*)(v68 + 24) = v74;
                        *(_DWORD*)(v68 + 12) = v75;
                        *(_DWORD*)(v68 + 16) = v73;
                        v76 = *(_DWORD*)(v16 + 32);
                        *(_DWORD*)(v68 + 44) = *(_DWORD*)(v16 + 36);
                        v77 = *(_DWORD*)(v16 + 40);
                        *(_DWORD*)(v68 + 56) = v76;
                        *(_DWORD*)(v68 + 60) = v72;
                        *(_DWORD*)(v68 + 64) = v77;
                        v78 = v69[4];
                        v79 = v69[5];
                        *(float*)(v68 + 28) = v70;
                        *(_DWORD*)(v68 + 32) = v78;
                        v80 = v69[6];
                        *(_DWORD*)(v68 + 36) = v79;
                        *(_DWORD*)(v68 + 40) = v80;
                      }
                      v81 = v18 + 80LL * v31;
                      v82 = v29 + 2 * v22;
                      v83 = *(float*)(v82 + 28);
                      if (v83 != 0x0.0p+0f) {
                        ++v31;
                        *(_QWORD*)v81 = *(_QWORD*)(v16 + 16);
                        v84 = *(_DWORD*)(v16 + 24);
                        v85 = *(_DWORD*)(v16 + 28);
                        *(_BYTE*)(v81 + 48) = *(_BYTE*)(v16 + 47);
                        *(_DWORD*)(v81 + 8) = v84;
                        v86 = *(_DWORD*)v82;
                        v87 = *(_DWORD*)(v82 + 8);
                        v88 = *(_DWORD*)(v82 + 12);
                        *(_DWORD*)(v81 + 20) = *(_DWORD*)(v82 + 4);
                        *(_DWORD*)(v81 + 24) = v87;
                        *(_DWORD*)(v81 + 12) = v88;
                        *(_DWORD*)(v81 + 16) = v86;
                        v89 = *(_DWORD*)(v16 + 32);
                        *(_DWORD*)(v81 + 44) = *(_DWORD*)(v16 + 36);
                        v90 = *(_DWORD*)(v16 + 40);
                        *(_DWORD*)(v81 + 56) = v89;
                        *(_DWORD*)(v81 + 60) = v85;
                        *(_DWORD*)(v81 + 64) = v90;
                        v91 = *(_DWORD*)(v82 + 16);
                        v92 = *(_DWORD*)(v82 + 20);
                        *(float*)(v81 + 28) = v83;
                        *(_DWORD*)(v81 + 32) = v91;
                        v93 = *(_DWORD*)(v82 + 24);
                        *(_DWORD*)(v81 + 36) = v92;
                        *(_DWORD*)(v81 + 40) = v93;
                      }
                      v29 = (__int64)v69 + v22;
                      v67 -= 2;
                    } while (v67 != 0);
                  }
                  if ((v54 & 1) != 0) {
                    v55 = v18 + 80LL * v31;
                    v29 += v22;
                    v56 = *(float*)(v29 + 28);
                    if (v56 != 0x0.0p+0f) {
                      ++v31;
                      *(_QWORD*)v55 = *(_QWORD*)(v16 + 16);
                      v57 = *(_DWORD*)(v16 + 24);
                      v58 = *(_DWORD*)(v16 + 28);
                      *(_BYTE*)(v55 + 48) = *(_BYTE*)(v16 + 47);
                      *(_DWORD*)(v55 + 8) = v57;
                      v59 = *(_DWORD*)v29;
                      v60 = *(_DWORD*)(v29 + 8);
                      v61 = *(_DWORD*)(v29 + 12);
                      *(_DWORD*)(v55 + 20) = *(_DWORD*)(v29 + 4);
                      *(_DWORD*)(v55 + 24) = v60;
                      *(_DWORD*)(v55 + 12) = v61;
                      *(_DWORD*)(v55 + 16) = v59;
                      v62 = *(_DWORD*)(v16 + 32);
                      *(_DWORD*)(v55 + 44) = *(_DWORD*)(v16 + 36);
                      v63 = *(_DWORD*)(v16 + 40);
                      *(_DWORD*)(v55 + 56) = v62;
                      *(_DWORD*)(v55 + 60) = v58;
                      *(_DWORD*)(v55 + 64) = v63;
                      v64 = *(_DWORD*)(v29 + 16);
                      v65 = *(_DWORD*)(v29 + 20);
                      *(float*)(v55 + 28) = v56;
                      *(_DWORD*)(v55 + 32) = v64;
                      v66 = *(_DWORD*)(v29 + 24);
                      *(_DWORD*)(v55 + 36) = v65;
                      *(_DWORD*)(v55 + 40) = v66;
                    }
                  }
                }
                v35 = 1;
              }
              ++v33;
            } while (v33 != v28);
            goto LABEL_118;
          }
          v163 = (v30 & 0x80) == 0;
          v164 = 4 * v22;
          v165 = 3 * v22;
          v166 = 0;
          v167 = 0;
          v168 = 0;
          v169 = 2 * v22;
          if (v163) {
            v170 = 4;
          }
          else {
            v170 = 5;
          }
          while (1) {
            if (v166 != 0) {
              v171 = *(unsigned __int8*)(v16 + 46);
              v16 += 64;
              v37 = v171 >= v167;
              v172 = v171 - v167;
              v38 = v172 != 0 && v37;
              LODWORD(v173) = v172 << v170;
              if (v38) {
                v173 = (unsigned int)v173;
              }
              else {
                v173 = 0;
              }
              v29 += v173;
            }
            v167 = *(unsigned __int8*)(v16 + 46);
            if (*(_BYTE*)(v16 + 46) == 0) {
              goto LABEL_76;
            }
            v174 = v18 + 80LL * v31;
            v176 = *(_DWORD*)(v16 + 28);
            v175 = *(_DWORD*)(v16 + 32);
            v177 = *(_DWORD*)(v16 + 36);
            v178 = *(_DWORD*)(v16 + 40);
            v179 = (v168 & 1) != 0 ? v22 : 0LL;
            v29 += v179;
            v180 = *(_BYTE*)(v16 + 47);
            v181 = *(_QWORD*)(v16 + 16);
            *(_DWORD*)(v174 + 28) = 2139095039;
            *(_DWORD*)(v174 + 44) = v177;
            *(_DWORD*)(v174 + 56) = v175;
            *(_DWORD*)(v174 + 60) = v176;
            *(_DWORD*)(v174 + 64) = v178;
            *(_BYTE*)(v174 + 48) = v180;
            *(_QWORD*)v174 = v181;
            *(_DWORD*)(v174 + 8) = *(_DWORD*)(v16 + 24);
            v182 = *(_DWORD*)v29;
            v183 = *(_DWORD*)(v29 + 4);
            v184 = *(_DWORD*)(v29 + 8);
            v185 = *(_DWORD*)(v29 + 12);
            *(_QWORD*)(v174 + 32) = 0;
            *(_DWORD*)(v174 + 40) = 0;
            *(_DWORD*)(v174 + 20) = v183;
            *(_DWORD*)(v174 + 24) = v184;
            *(_DWORD*)(v174 + 12) = v185;
            *(_DWORD*)(v174 + 16) = v182;
            v186 = v167 - 1;
            if (v167 != 1) {
              break;
            }
            v168 = 1;
            ++v31;
          LABEL_76:
            if (++v166 == v28) {
              goto LABEL_118;
            }
          }
          if (v167 - 2 >= 3) {
            v188 = v186 & 0xFFFFFFFC;
            v189 = v31 + 2;
            do {
              v190 = v29;
              v191 = (int*)(v29 + v22);
              v188 -= 4;
              v192 = v18 + 80LL * (v189 - 1);
              v193 = *(_QWORD*)(v16 + 16);
              *(_BYTE*)(v192 + 48) = v180;
              *(_DWORD*)(v192 + 28) = 2139095039;
              *(_DWORD*)(v192 + 44) = v177;
              *(_DWORD*)(v192 + 56) = v175;
              *(_DWORD*)(v192 + 60) = v176;
              *(_DWORD*)(v192 + 64) = v178;
              *(_QWORD*)v192 = v193;
              v194 = v18 + 80LL * v189;
              *(_DWORD*)(v192 + 8) = *(_DWORD*)(v16 + 24);
              v195 = *v191;
              v196 = v191[1];
              v197 = v191[2];
              v198 = v191[3];
              *(_QWORD*)(v192 + 32) = 0;
              *(_DWORD*)(v192 + 40) = 0;
              *(_DWORD*)(v192 + 20) = v196;
              *(_DWORD*)(v192 + 24) = v197;
              *(_DWORD*)(v192 + 12) = v198;
              *(_DWORD*)(v192 + 16) = v195;
              v199 = *(_QWORD*)(v16 + 16);
              *(_BYTE*)(v194 + 48) = v180;
              *(_DWORD*)(v194 + 28) = 2139095039;
              *(_DWORD*)(v194 + 44) = v177;
              *(_DWORD*)(v194 + 56) = v175;
              *(_DWORD*)(v194 + 60) = v176;
              *(_DWORD*)(v194 + 64) = v178;
              *(_QWORD*)v194 = v199;
              v200 = v18 + 80LL * (v189 + 1);
              *(_DWORD*)(v194 + 8) = *(_DWORD*)(v16 + 24);
              v201 = *(_DWORD*)(v190 + 2 * v22);
              v202 = *(_DWORD*)(v190 + v169 + 4);
              v203 = *(_DWORD*)(v190 + v169 + 8);
              v204 = *(_DWORD*)(v190 + v169 + 12);
              *(_QWORD*)(v194 + 32) = 0;
              *(_DWORD*)(v194 + 40) = 0;
              *(_DWORD*)(v194 + 20) = v202;
              *(_DWORD*)(v194 + 24) = v203;
              *(_DWORD*)(v194 + 12) = v204;
              *(_DWORD*)(v194 + 16) = v201;
              v205 = *(_QWORD*)(v16 + 16);
              *(_BYTE*)(v200 + 48) = v180;
              *(_DWORD*)(v200 + 28) = 2139095039;
              *(_DWORD*)(v200 + 44) = v177;
              *(_DWORD*)(v200 + 56) = v175;
              *(_DWORD*)(v200 + 60) = v176;
              *(_DWORD*)(v200 + 64) = v178;
              *(_QWORD*)v200 = v205;
              LODWORD(v205) = v189 + 2;
              v189 += 4;
              v206 = v18 + 80LL * (unsigned int)v205;
              *(_DWORD*)(v200 + 8) = *(_DWORD*)(v16 + 24);
              v207 = *(_DWORD*)(v190 + 3 * v22);
              v208 = *(_DWORD*)(v190 + v165 + 4);
              v209 = *(_DWORD*)(v190 + v165 + 8);
              v210 = *(_DWORD*)(v190 + v165 + 12);
              *(_QWORD*)(v200 + 32) = 0;
              *(_DWORD*)(v200 + 40) = 0;
              *(_DWORD*)(v200 + 20) = v208;
              *(_DWORD*)(v200 + 24) = v209;
              *(_DWORD*)(v200 + 12) = v210;
              *(_DWORD*)(v200 + 16) = v207;
              v211 = *(_QWORD*)(v16 + 16);
              *(_BYTE*)(v206 + 48) = v180;
              *(_DWORD*)(v206 + 28) = 2139095039;
              *(_DWORD*)(v206 + 44) = v177;
              *(_DWORD*)(v206 + 56) = v175;
              *(_DWORD*)(v206 + 60) = v176;
              *(_DWORD*)(v206 + 64) = v178;
              *(_QWORD*)v206 = v211;
              v212 = *(_DWORD*)(v190 + v164 + 12);
              v213 = *(_DWORD*)(v190 + 4 * v22);
              v29 = (__int64)v191 + 2 * v22 + v22;
              *(_DWORD*)(v206 + 8) = *(_DWORD*)(v16 + 24);
              *(_DWORD*)(v206 + 12) = v212;
              v214 = *(_DWORD*)(v190 + v164 + 4);
              v215 = *(_DWORD*)(v190 + v164 + 8);
              *(_QWORD*)(v206 + 32) = 0;
              *(_DWORD*)(v206 + 40) = 0;
              *(_DWORD*)(v206 + 16) = v213;
              *(_DWORD*)(v206 + 20) = v214;
              *(_DWORD*)(v206 + 24) = v215;
            } while (v188 != 0);
            v31 = v189 - 1;
            v187 = v186 & 3;
            if (v187 == 0) {
              goto LABEL_94;
            }
          }
          else {
            ++v31;
            v187 = v186 & 3;
            if (v187 == 0) {
            LABEL_94:
              v168 = 1;
              goto LABEL_76;
            }
          }
          do {
            v216 = v18 + 80LL * v31;
            v29 += v22;
            ++v31;
            --v187;
            v217 = *(_QWORD*)(v16 + 16);
            *(_BYTE*)(v216 + 48) = v180;
            *(_DWORD*)(v216 + 28) = 2139095039;
            *(_DWORD*)(v216 + 44) = v177;
            *(_DWORD*)(v216 + 56) = v175;
            *(_DWORD*)(v216 + 60) = v176;
            *(_DWORD*)(v216 + 64) = v178;
            *(_QWORD*)v216 = v217;
            *(_DWORD*)(v216 + 8) = *(_DWORD*)(v16 + 24);
            v218 = *(_DWORD*)v29;
            v219 = *(_DWORD*)(v29 + 4);
            v220 = *(_DWORD*)(v29 + 8);
            v221 = *(_DWORD*)(v29 + 12);
            *(_QWORD*)(v216 + 32) = 0;
            *(_DWORD*)(v216 + 40) = 0;
            *(_DWORD*)(v216 + 20) = v219;
            *(_DWORD*)(v216 + 24) = v220;
            *(_DWORD*)(v216 + 12) = v221;
            *(_DWORD*)(v216 + 16) = v218;
          } while (v187 != 0);
          goto LABEL_94;
        }
        v94 = *(float*)(a1 + 200);
        if (v94 != 0x0.0p+0f) {
          if (v31 != 0) {
            v95 = v21 | 4;
            v96 = 2 * v22;
            v31 = 0;
            v97 = 0;
            v98 = 0;
            v99 = 0;
            v100 = 3 * v22;
            if ((*(_WORD*)(v16 + 48) & 0x80) != 0) {
              v95 = 5;
            }
            while (1) {
              if (v97 != 0) {
                v101 = *(unsigned __int8*)(v16 + 46);
                v16 += 64;
                v37 = v101 >= v98;
                v102 = v101 - v98;
                v38 = v102 != 0 && v37;
                LODWORD(v103) = v102 << v95;
                if (v38) {
                  v103 = (unsigned int)v103;
                }
                else {
                  v103 = 0;
                }
                v29 += v103;
              }
              v98 = *(unsigned __int8*)(v16 + 46);
              if (*(_BYTE*)(v16 + 46) == 0) {
                goto LABEL_53;
              }
              v104 = *(_BYTE*)(v16 + 47);
              v106 = *(_DWORD*)(v16 + 28);
              v105 = *(_DWORD*)(v16 + 32);
              v107 = *(_DWORD*)(v16 + 36);
              v108 = *(_DWORD*)(v16 + 40);
              v109 = (v99 & 1) != 0 ? v22 : 0LL;
              v29 += v109;
              v110 = v18 + 80LL * v31;
              v111 = *(_QWORD*)(v16 + 16);
              *(_BYTE*)(v110 + 48) = v104;
              *(_DWORD*)(v110 + 44) = v107;
              *(_DWORD*)(v110 + 56) = v105;
              *(_DWORD*)(v110 + 60) = v106;
              *(_DWORD*)(v110 + 64) = v108;
              *(_QWORD*)v110 = v111;
              *(_DWORD*)(v110 + 8) = *(_DWORD*)(v16 + 24);
              v112 = *(_DWORD*)v29;
              v113 = *(_DWORD*)(v29 + 8);
              v114 = *(_DWORD*)(v29 + 12);
              *(_DWORD*)(v110 + 20) = *(_DWORD*)(v29 + 4);
              *(_DWORD*)(v110 + 24) = v113;
              *(_DWORD*)(v110 + 12) = v114;
              *(_DWORD*)(v110 + 16) = v112;
              v115 = *(_DWORD*)(v29 + 16);
              v116 = *(_DWORD*)(v29 + 20);
              *(float*)(v110 + 28) = v94;
              *(_DWORD*)(v110 + 32) = v115;
              v117 = *(_DWORD*)(v29 + 24);
              *(_DWORD*)(v110 + 36) = v116;
              *(_DWORD*)(v110 + 40) = v117;
              v118 = v98 - 1;
              if (v98 != 1) {
                break;
              }
              v99 = 1;
              ++v31;
            LABEL_53:
              if (++v97 == v28) {
                goto LABEL_118;
              }
            }
            if (v98 - 2 >= 3) {
              v120 = v118 & 0xFFFFFFFC;
              v121 = v31 + 2;
              do {
                v122 = v29;
                v123 = (_DWORD*)(v29 + v22);
                v120 -= 4;
                v124 = v18 + 80LL * (v121 - 1);
                v125 = *(_QWORD*)(v16 + 16);
                *(_BYTE*)(v124 + 48) = v104;
                *(_DWORD*)(v124 + 44) = v107;
                *(_DWORD*)(v124 + 56) = v105;
                *(_DWORD*)(v124 + 60) = v106;
                *(_DWORD*)(v124 + 64) = v108;
                *(_QWORD*)v124 = v125;
                v126 = v18 + 80LL * v121;
                *(_DWORD*)(v124 + 8) = *(_DWORD*)(v16 + 24);
                v127 = v123[1];
                v128 = v123[2];
                v129 = v123[3];
                *(_DWORD*)(v124 + 16) = *v123;
                *(_DWORD*)(v124 + 20) = v127;
                v130 = v123[4];
                v131 = v123[5];
                *(_DWORD*)(v124 + 24) = v128;
                *(_DWORD*)(v124 + 12) = v129;
                *(float*)(v124 + 28) = v94;
                *(_DWORD*)(v124 + 32) = v130;
                v132 = v123[6];
                *(_DWORD*)(v124 + 36) = v131;
                *(_DWORD*)(v124 + 40) = v132;
                v133 = *(_QWORD*)(v16 + 16);
                *(_BYTE*)(v126 + 48) = v104;
                *(_DWORD*)(v126 + 44) = v107;
                *(_DWORD*)(v126 + 56) = v105;
                *(_DWORD*)(v126 + 60) = v106;
                *(_DWORD*)(v126 + 64) = v108;
                *(_QWORD*)v126 = v133;
                *(_DWORD*)(v126 + 8) = *(_DWORD*)(v16 + 24);
                v134 = *(_DWORD*)(v122 + 2 * v22);
                v135 = *(_DWORD*)(v122 + v96 + 8);
                v136 = *(_DWORD*)(v122 + v96 + 12);
                *(_DWORD*)(v126 + 20) = *(_DWORD*)(v122 + v96 + 4);
                *(_DWORD*)(v126 + 24) = v135;
                *(_DWORD*)(v126 + 12) = v136;
                *(_DWORD*)(v126 + 16) = v134;
                v137 = *(_DWORD*)(v122 + v96 + 16);
                v138 = *(_DWORD*)(v122 + v96 + 20);
                *(float*)(v126 + 28) = v94;
                *(_DWORD*)(v126 + 32) = v137;
                v139 = *(_DWORD*)(v122 + v96 + 24);
                v140 = v18 + 80LL * (v121 + 1);
                *(_DWORD*)(v126 + 36) = v138;
                *(_DWORD*)(v126 + 40) = v139;
                v141 = *(_QWORD*)(v16 + 16);
                *(_BYTE*)(v140 + 48) = v104;
                *(_DWORD*)(v140 + 44) = v107;
                *(_DWORD*)(v140 + 56) = v105;
                *(_DWORD*)(v140 + 60) = v106;
                *(_DWORD*)(v140 + 64) = v108;
                *(_QWORD*)v140 = v141;
                *(_DWORD*)(v140 + 8) = *(_DWORD*)(v16 + 24);
                v142 = *(_DWORD*)(v122 + 3 * v22);
                v143 = *(_DWORD*)(v122 + v100 + 8);
                v144 = *(_DWORD*)(v122 + v100 + 12);
                *(_DWORD*)(v140 + 20) = *(_DWORD*)(v122 + v100 + 4);
                *(_DWORD*)(v140 + 24) = v143;
                *(_DWORD*)(v140 + 12) = v144;
                *(_DWORD*)(v140 + 16) = v142;
                v145 = *(_DWORD*)(v122 + v100 + 16);
                v146 = *(_DWORD*)(v122 + v100 + 20);
                v147 = *(_DWORD*)(v122 + v100 + 24);
                v148 = (int*)(v122 + 4 * v22);
                *(float*)(v140 + 28) = v94;
                *(_DWORD*)(v140 + 32) = v145;
                *(_DWORD*)(v140 + 36) = v146;
                *(_DWORD*)(v140 + 40) = v147;
                LODWORD(v140) = v121 + 2;
                v121 += 4;
                v149 = v18 + 80LL * (unsigned int)v140;
                v150 = *(_QWORD*)(v16 + 16);
                *(_BYTE*)(v149 + 48) = v104;
                *(_DWORD*)(v149 + 44) = v107;
                *(_DWORD*)(v149 + 56) = v105;
                *(_DWORD*)(v149 + 60) = v106;
                *(_DWORD*)(v149 + 64) = v108;
                *(_QWORD*)v149 = v150;
                v151 = *v148;
                v29 = (__int64)v123 + 2 * v22 + v22;
                *(_DWORD*)(v149 + 8) = *(_DWORD*)(v16 + 24);
                *(_DWORD*)(v149 + 16) = v151;
                v152 = v148[2];
                *(_DWORD*)(v149 + 20) = v148[1];
                *(_DWORD*)(v149 + 24) = v152;
                v153 = v148[4];
                *(_DWORD*)(v149 + 12) = v148[3];
                *(float*)(v149 + 28) = v94;
                *(_DWORD*)(v149 + 32) = v153;
                v154 = v148[6];
                *(_DWORD*)(v149 + 36) = v148[5];
                *(_DWORD*)(v149 + 40) = v154;
              } while (v120 != 0);
              v31 = v121 - 1;
              v119 = v118 & 3;
              if (v119 == 0) {
                goto LABEL_71;
              }
            }
            else {
              ++v31;
              v119 = v118 & 3;
              if (v119 == 0) {
              LABEL_71:
                v99 = 1;
                goto LABEL_53;
              }
            }
            do {
              v155 = v18 + 80LL * v31;
              v29 += v22;
              ++v31;
              --v119;
              v156 = *(_QWORD*)(v16 + 16);
              *(_BYTE*)(v155 + 48) = v104;
              *(_DWORD*)(v155 + 44) = v107;
              *(_DWORD*)(v155 + 56) = v105;
              *(_DWORD*)(v155 + 60) = v106;
              *(_DWORD*)(v155 + 64) = v108;
              *(_QWORD*)v155 = v156;
              *(_DWORD*)(v155 + 8) = *(_DWORD*)(v16 + 24);
              v157 = *(_DWORD*)v29;
              v158 = *(_DWORD*)(v29 + 8);
              v159 = *(_DWORD*)(v29 + 12);
              *(_DWORD*)(v155 + 20) = *(_DWORD*)(v29 + 4);
              *(_DWORD*)(v155 + 24) = v158;
              *(_DWORD*)(v155 + 12) = v159;
              *(_DWORD*)(v155 + 16) = v157;
              v160 = *(_DWORD*)(v29 + 16);
              v161 = *(_DWORD*)(v29 + 20);
              *(float*)(v155 + 28) = v94;
              *(_DWORD*)(v155 + 32) = v160;
              v162 = *(_DWORD*)(v29 + 24);
              *(_DWORD*)(v155 + 36) = v161;
              *(_DWORD*)(v155 + 40) = v162;
            } while (v119 != 0);
            goto LABEL_71;
          }
          v163 = (v30 & 0x80) == 0;
          v239 = 4 * v22;
          v240 = 3 * v22;
          v241 = 0;
          v242 = 0;
          v243 = 0;
          v244 = 2 * v22;
          if (v163) {
            v245 = 4;
          }
          else {
            v245 = 5;
          }
          while (1) {
            if (v241 != 0) {
              v246 = *(unsigned __int8*)(v16 + 46);
              v16 += 64;
              v37 = v246 >= v242;
              v247 = v246 - v242;
              v38 = v247 != 0 && v37;
              LODWORD(v248) = v247 << v245;
              if (v38) {
                v248 = (unsigned int)v248;
              }
              else {
                v248 = 0;
              }
              v29 += v248;
            }
            v242 = *(unsigned __int8*)(v16 + 46);
            if (*(_BYTE*)(v16 + 46) == 0) {
              goto LABEL_124;
            }
            v249 = v18 + 80LL * v31;
            v251 = *(_DWORD*)(v16 + 28);
            v250 = *(_DWORD*)(v16 + 32);
            v252 = *(_DWORD*)(v16 + 36);
            v253 = *(_DWORD*)(v16 + 40);
            v254 = (v243 & 1) != 0 ? v22 : 0LL;
            v29 += v254;
            v255 = *(_BYTE*)(v16 + 47);
            v256 = *(_QWORD*)(v16 + 16);
            *(float*)(v249 + 28) = v94;
            *(_DWORD*)(v249 + 44) = v252;
            *(_DWORD*)(v249 + 56) = v250;
            *(_DWORD*)(v249 + 60) = v251;
            *(_DWORD*)(v249 + 64) = v253;
            *(_BYTE*)(v249 + 48) = v255;
            *(_QWORD*)v249 = v256;
            *(_DWORD*)(v249 + 8) = *(_DWORD*)(v16 + 24);
            v257 = *(_DWORD*)v29;
            v258 = *(_DWORD*)(v29 + 4);
            v259 = *(_DWORD*)(v29 + 8);
            v260 = *(_DWORD*)(v29 + 12);
            *(_QWORD*)(v249 + 32) = 0;
            *(_DWORD*)(v249 + 40) = 0;
            *(_DWORD*)(v249 + 20) = v258;
            *(_DWORD*)(v249 + 24) = v259;
            *(_DWORD*)(v249 + 12) = v260;
            *(_DWORD*)(v249 + 16) = v257;
            v261 = v242 - 1;
            if (v242 != 1) {
              break;
            }
            v243 = 1;
            ++v31;
          LABEL_124:
            if (++v241 == v28) {
              goto LABEL_118;
            }
          }
          if (v242 - 2 >= 3) {
            v263 = v261 & 0xFFFFFFFC;
            v264 = v31 + 2;
            do {
              v265 = v29;
              v266 = (int*)(v29 + v22);
              v263 -= 4;
              v267 = v18 + 80LL * (v264 - 1);
              v268 = *(_QWORD*)(v16 + 16);
              *(_BYTE*)(v267 + 48) = v255;
              *(_DWORD*)(v267 + 44) = v252;
              *(_DWORD*)(v267 + 56) = v250;
              *(_DWORD*)(v267 + 60) = v251;
              *(_DWORD*)(v267 + 64) = v253;
              *(_QWORD*)v267 = v268;
              v269 = v18 + 80LL * v264;
              *(_DWORD*)(v267 + 8) = *(_DWORD*)(v16 + 24);
              v270 = *v266;
              v271 = v266[1];
              v272 = v266[2];
              v273 = v266[3];
              *(_QWORD*)(v267 + 32) = 0;
              *(_DWORD*)(v267 + 40) = 0;
              *(_DWORD*)(v267 + 16) = v270;
              *(_DWORD*)(v267 + 20) = v271;
              *(_DWORD*)(v267 + 24) = v272;
              *(float*)(v267 + 28) = v94;
              *(_DWORD*)(v267 + 12) = v273;
              v274 = *(_QWORD*)(v16 + 16);
              *(_BYTE*)(v269 + 48) = v255;
              *(_DWORD*)(v269 + 44) = v252;
              *(_DWORD*)(v269 + 56) = v250;
              *(_DWORD*)(v269 + 60) = v251;
              *(_DWORD*)(v269 + 64) = v253;
              *(_QWORD*)v269 = v274;
              v275 = v18 + 80LL * (v264 + 1);
              *(_DWORD*)(v269 + 8) = *(_DWORD*)(v16 + 24);
              v276 = *(_DWORD*)(v265 + 2 * v22);
              v277 = *(_DWORD*)(v265 + v244 + 4);
              v278 = *(_DWORD*)(v265 + v244 + 8);
              v279 = *(_DWORD*)(v265 + v244 + 12);
              *(_QWORD*)(v269 + 32) = 0;
              *(_DWORD*)(v269 + 40) = 0;
              *(_DWORD*)(v269 + 16) = v276;
              *(_DWORD*)(v269 + 20) = v277;
              *(_DWORD*)(v269 + 24) = v278;
              *(float*)(v269 + 28) = v94;
              *(_DWORD*)(v269 + 12) = v279;
              v280 = *(_QWORD*)(v16 + 16);
              *(_BYTE*)(v275 + 48) = v255;
              *(_DWORD*)(v275 + 44) = v252;
              *(_DWORD*)(v275 + 56) = v250;
              *(_DWORD*)(v275 + 60) = v251;
              *(_DWORD*)(v275 + 64) = v253;
              *(_QWORD*)v275 = v280;
              LODWORD(v280) = v264 + 2;
              v264 += 4;
              v281 = v18 + 80LL * (unsigned int)v280;
              *(_DWORD*)(v275 + 8) = *(_DWORD*)(v16 + 24);
              v282 = *(_DWORD*)(v265 + 3 * v22);
              v283 = *(_DWORD*)(v265 + v240 + 4);
              v284 = *(_DWORD*)(v265 + v240 + 8);
              v285 = *(_DWORD*)(v265 + v240 + 12);
              *(_QWORD*)(v275 + 32) = 0;
              *(_DWORD*)(v275 + 40) = 0;
              *(_DWORD*)(v275 + 16) = v282;
              *(_DWORD*)(v275 + 20) = v283;
              *(_DWORD*)(v275 + 24) = v284;
              *(float*)(v275 + 28) = v94;
              *(_DWORD*)(v275 + 12) = v285;
              v286 = *(_QWORD*)(v16 + 16);
              *(_BYTE*)(v281 + 48) = v255;
              *(_DWORD*)(v281 + 44) = v252;
              *(_DWORD*)(v281 + 56) = v250;
              *(_DWORD*)(v281 + 60) = v251;
              *(_DWORD*)(v281 + 64) = v253;
              *(_QWORD*)v281 = v286;
              v287 = *(_DWORD*)(v265 + v239 + 12);
              v288 = *(_DWORD*)(v265 + 4 * v22);
              v29 = (__int64)v266 + 2 * v22 + v22;
              *(_DWORD*)(v281 + 8) = *(_DWORD*)(v16 + 24);
              *(_DWORD*)(v281 + 12) = v287;
              v289 = *(_DWORD*)(v265 + v239 + 4);
              v290 = *(_DWORD*)(v265 + v239 + 8);
              *(_QWORD*)(v281 + 32) = 0;
              *(_DWORD*)(v281 + 40) = 0;
              *(_DWORD*)(v281 + 16) = v288;
              *(_DWORD*)(v281 + 20) = v289;
              *(_DWORD*)(v281 + 24) = v290;
              *(float*)(v281 + 28) = v94;
            } while (v263 != 0);
            v31 = v264 - 1;
            v262 = v261 & 3;
            if (v262 == 0) {
              goto LABEL_142;
            }
          }
          else {
            ++v31;
            v262 = v261 & 3;
            if (v262 == 0) {
            LABEL_142:
              v243 = 1;
              goto LABEL_124;
            }
          }
          do {
            v291 = v18 + 80LL * v31;
            v29 += v22;
            ++v31;
            --v262;
            v292 = *(_QWORD*)(v16 + 16);
            *(_BYTE*)(v291 + 48) = v255;
            *(float*)(v291 + 28) = v94;
            *(_DWORD*)(v291 + 44) = v252;
            *(_DWORD*)(v291 + 56) = v250;
            *(_DWORD*)(v291 + 60) = v251;
            *(_DWORD*)(v291 + 64) = v253;
            *(_QWORD*)v291 = v292;
            *(_DWORD*)(v291 + 8) = *(_DWORD*)(v16 + 24);
            v293 = *(_DWORD*)v29;
            v294 = *(_DWORD*)(v29 + 4);
            v295 = *(_DWORD*)(v29 + 8);
            v296 = *(_DWORD*)(v29 + 12);
            *(_QWORD*)(v291 + 32) = 0;
            *(_DWORD*)(v291 + 40) = 0;
            *(_DWORD*)(v291 + 20) = v294;
            *(_DWORD*)(v291 + 24) = v295;
            *(_DWORD*)(v291 + 12) = v296;
            *(_DWORD*)(v291 + 16) = v293;
          } while (v262 != 0);
          goto LABEL_142;
        }
        v222 = v21 | 4;
        v223 = 0;
        v224 = 0;
        v225 = 0;
        if ((*(_WORD*)(v16 + 48) & 0x80) != 0) {
          v222 = 5;
        }
        do {
          if (v223 != 0) {
            v226 = *(unsigned __int8*)(v16 + 46);
            v16 += 64;
            v37 = v226 >= v224;
            v227 = v226 - v224;
            v38 = v227 != 0 && v37;
            LODWORD(v228) = v227 << v222;
            if (v38) {
              v228 = (unsigned int)v228;
            }
            else {
              v228 = 0;
            }
            v29 += v228;
          }
          v224 = *(unsigned __int8*)(v16 + 46);
          if (*(_BYTE*)(v16 + 46) != 0) {
            if ((v225 & 1) != 0) {
              v229 = v22;
            }
            else {
              v229 = 0;
            }
            v29 += v229;
            v230 = v224 - 1;
            if (v224 != 1) {
              if (v224 - 2 >= 7) {
                v231 = v230 & 0xFFFFFFF8;
                do {
                  v232 = v29;
                  v231 -= 8;
                  v29 = v29 + (v22 | 0x80) + v22 + v22 + v22 + v22 + v22 + v22 +
                        v22 - 128;
                } while (v231 != 0);
                v29 = v232 + v22 + 2 * v22 + 3 * v22 + 2 * v22;
              }
              for (i = v230 & 7; i != 0; --i) {
                v29 += v22;
              }
            }
            v225 = 1;
          }
          ++v223;
        } while (v223 != v28);
      }
      v31 = 0;
    LABEL_118:
      LOBYTE(v16) = (v26 & 0x10) != 0;
      goto LABEL_119;
    }
    v27 = false;
    LOBYTE(v16) = 0;
  }
  else {
    v27 = false;
  }
  v31 = 0;
  v24 = 0x1.0000000000000p+0f;
  v23 = 0x1.0000000000000p+0f;
  v25 = 0x1.0000000000000p+0f;
LABEL_119:
  v234 = *(float*)a1;
  v235 = v13 * v23;
  v236 = *(float*)(a1 + 8);
  *(_DWORD*)(a3 + 20496) = v31;
  v237 = *(_BYTE*)(a1 + 166);
  *(_QWORD*)(a1 + 152) = v18;
  *(_DWORD*)(a1 + 160) = v31;
  *(_BYTE*)(a1 + 165) = v27;
  *(_BYTE*)(a1 + 166) = v16 | v237;
  *(float*)a1 = v17 * v234;
  *(float*)(a1 + 4) = v235;
  *(float*)(a1 + 8) = v24 * v236;
  *(float*)(a1 + 12) = v15 * v25;
  return physx_Dy_createFinalizeSolverContactsStep(a1, a3 + 20512, a4, a5, a6,
                                                   a7, a8, a9, a10, a11, a12);
}

__int64 physx_source_lowleveldynamics_src_35c5c0(__int64 result)
{
  unsigned __int8* v1;
  int v2;
  _DWORD* v3;
  int v4;
  __int64 v5;
  int v6;
  int i;
  int v8;
  _DWORD* v9;
  int v10;
  _DWORD* v11;

  v1 = *(unsigned __int8**)(result + 32);
  if (v1 == nullptr) {
    return result;
  }
  v2 = v1[1];
  if (v1[1] == 0) {
    return result;
  }
  v4 = *v1;
  v3 = v1 + 176;
  v5 = 40;
  if (v4 == 2) {
    v5 = 24;
  }
  if (v2 != 1) {
    for (i = v2 & 0xFE; i != 0; i -= 2) {
      v8 = v3[20];
      if ((v8 & 4) != 0) {
        if ((v8 & 0x20) == 0) {
          goto LABEL_16;
        }
      }
      else {
        v3[7] = 0;
        v3[3] = 0;
        if ((v8 & 0x20) == 0) {
        LABEL_16:
          v9 = &v3[v5];
          v10 = v3[v5 + 20];
          if ((v10 & 4) != 0) {
            goto LABEL_17;
          }
          goto LABEL_21;
        }
      }
      v3[11] = 0;
      v3[7] = 0;
      v3[3] = 0;
      v3[15] = 0;
      v9 = &v3[v5];
      v10 = v3[v5 + 20];
      if ((v10 & 4) != 0) {
      LABEL_17:
        if ((v10 & 0x20) != 0) {
          goto LABEL_22;
        }
        goto LABEL_13;
      }
    LABEL_21:
      v9[7] = 0;
      v9[3] = 0;
      if ((v10 & 0x20) != 0) {
      LABEL_22:
        v11 = &v3[v5];
        v11[11] = 0;
        v11[7] = 0;
        v11[3] = 0;
        v11[15] = 0;
      }
    LABEL_13:
      v3 = &v9[v5];
    }
  }
  if ((v2 & 1) != 0) {
    v6 = v3[20];
    if ((v6 & 4) == 0) {
      v3[7] = 0;
      v3[3] = 0;
    }
    if ((v6 & 0x20) != 0) {
      v3[11] = 0;
      v3[7] = 0;
      v3[3] = 0;
      v3[15] = 0;
    }
  }
  return result;
}

void physx_source_lowleveldynamics_src_3678e0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  void (**v14)(void);
  __int64 v15;
  unsigned int* v16;
  __int64 v17;
  unsigned int v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 i;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64* v36;
  __int64 v37;
  unsigned int* v38;
  __int64 v39;
  unsigned int v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 j;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  void (**v53)(void);
  unsigned int* v54;
  __int64 v55;
  unsigned int v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 k;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  unsigned int v70;
  __int64 v71;
  int v72;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;

  v2 = *(_QWORD*)(a1 + 184);
  v3 = *(_QWORD*)(a1 + 192);
  v4 = *(unsigned int*)(a1 + 64);
  v5 = *(_QWORD*)(a1 + 88);
  v6 = *(unsigned int*)(a1 + 40);
  v7 = *(__int64**)(a1 + 32);
  v76 = 0xFFFFFFFFLL;
  v77 = 0xFFFFFFFFLL;
  v78 = 0xFFFFFFFFLL;
  v79 = 0xFFFFFFFFLL;
  v80 = 0xFFFFFFFFLL;
  v81 = 0xFFFFFFFFLL;
  v82 = 0xFFFFFFFFLL;
  v83 = 0xFFFFFFFFLL;
  v84 = 0xFFFFFFFFLL;
  v85 = 0xFFFFFFFFLL;
  v86 = 0xFFFFFFFFLL;
  v87 = 0xFFFFFFFFLL;
  v88 = 0xFFFFFFFFLL;
  v89 = 0xFFFFFFFFLL;
  v90 = 0xFFFFFFFFLL;
  v91 = 0xFFFFFFFFLL;
  v92 = 0xFFFFFFFFLL;
  v93 = 0xFFFFFFFFLL;
  v94 = 0xFFFFFFFFLL;
  v8 = *(_QWORD*)(a1 + 8);
  v9 = *(unsigned int*)(a1 + 24);
  v95 = 0xFFFFFFFFLL;
  v96 = 0xFFFFFFFFLL;
  v97 = 0xFFFFFFFFLL;
  v98 = 0xFFFFFFFFLL;
  v99 = 0xFFFFFFFFLL;
  v100 = 0xFFFFFFFFLL;
  v11 = *(_DWORD*)a1;
  v10 = *(_DWORD*)(a1 + 4);
  v101 = 0xFFFFFFFFLL;
  v102 = 0xFFFFFFFFLL;
  v103 = 0xFFFFFFFFLL;
  v104 = 0xFFFFFFFFLL;
  v105 = 0xFFFFFFFFLL;
  v106 = 0xFFFFFFFFLL;
  v107 = 0xFFFFFFFFLL;
  v108 = 0xFFFFFFFFLL;
  v109 = 0xFFFFFFFFLL;
  v110 = 0xFFFFFFFFLL;
  v111 = 0xFFFFFFFFLL;
  v112 = 0xFFFFFFFFLL;
  v113 = 0xFFFFFFFFLL;
  v114 = 0xFFFFFFFFLL;
  v115 = 0xFFFFFFFFLL;
  v116 = 0xFFFFFFFFLL;
  v117 = 0xFFFFFFFFLL;
  v118 = 0xFFFFFFFFLL;
  v119 = 0xFFFFFFFFLL;
  v120 = 0xFFFFFFFFLL;
  v121 = 0xFFFFFFFFLL;
  v122 = 0xFFFFFFFFLL;
  v123 = 0xFFFFFFFFLL;
  v124 = 0xFFFFFFFFLL;
  v125 = 0xFFFFFFFFLL;
  v126 = 0xFFFFFFFFLL;
  v127 = 0xFFFFFFFFLL;
  v128 = 0xFFFFFFFFLL;
  v129 = 0xFFFFFFFFLL;
  v130 = 0xFFFFFFFFLL;
  v131 = 0xFFFFFFFFLL;
  v132 = 0xFFFFFFFFLL;
  v133 = 0xFFFFFFFFLL;
  v134 = 0xFFFFFFFFLL;
  v135 = 0xFFFFFFFFLL;
  v136 = 0xFFFFFFFFLL;
  v137 = 0xFFFFFFFFLL;
  v138 = 0xFFFFFFFFLL;
  v139 = 0xFFFFFFFFLL;
  if ((_DWORD)v4 != 0) {
    v13 = *(_QWORD*)(a1 + 48);
    v12 = *(_QWORD*)(a1 + 56);
    v69 = v5;
    v70 = v9;
    v71 = v8;
    v72 = v10;
    v73 = v7;
    v74 = v6;
    if (v11 != 0) {
      v140 = v13 + 256;
      while (1) {
        if (v3 != 0) {
          *(_QWORD*)v3 = 0;
          *(_DWORD*)(v3 + 8) = 0;
        }
        v14 = (void (**)(void))(v11 == 1 ? GameData_21358b8 : GameData_21358c0);
        if ((int)v4 >= 1) {
          break;
        }
      LABEL_27:
        v28 = v73;
        v29 = v74;
        if ((_DWORD)v74 != 0) {
          do {
            v30 = *v28;
            v28 += 9;
            GameRoutine_3328d0(v30, 0, 0, v3 != 0, *(float*)(a1 + 144),
                               *(float*)(a1 + 148), 0x0.0p+0f,
                               0x1.99999a0000000p-1f);
            --v29;
          } while (v29 != 0);
        }
        if (--v11 == 0) {
          goto LABEL_30;
        }
      }
      v15 = 0;
      while (1) {
        v16 = (unsigned int*)(v12 + 8 * v15);
        v17 = *v16;
        v18 = *((unsigned __int16*)v16 + 2);
        v19 = *(_QWORD*)(v13 + (v17 << 6) + 32);
        v20 = ((v19 + 383) >> 6) - (v19 >> 6);
        v21 = v20 + 1;
        for (i = (v20 + 1) & 7; i != 0; --i) {
          v19 += 64LL;
          --v21;
        }
        if (v20 >= 7) {
          do {
            v21 -= 8LL;
            v19 += 512LL;
          } while (v21 != 0);
        }
        if (*((_WORD*)v16 + 2) != 0) {
          if (v18 >= 8) {
            break;
          }
          v23 = 0;
          v24 = v18 & 7;
          if ((v18 & 7) != 0) {
            goto LABEL_24;
          }
        }
      LABEL_12:
        v14[*((unsigned __int16*)v16 + 3)]();
        if (++v15 == v4) {
          goto LABEL_27;
        }
      }
      v25 = 0;
      v26 = v140 + (v17 << 6);
      do {
        v25 -= 8;
        v26 += 512;
      } while (-(__int64)((unsigned __int16)v18 & 0xFFF8) != v25);
      v23 = -v25;
      v24 = v18 & 7;
      if ((v18 & 7) == 0) {
        goto LABEL_12;
      }
    LABEL_24:
      v27 = v13 + 8 + (v23 << 6) + (v17 << 6);
      do {
        --v24;
        v27 += 64;
      } while (v24 != 0);
      goto LABEL_12;
    }
  LABEL_30:
    GameHr_3696c0(v70, v71, v69);
    v31 = v74;
    if ((_DWORD)v74 != 0) {
      v32 = v73;
      do {
        v33 = *v32;
        v32 += 9;
        physx_Dy_FeatherstoneArticulation_saveVelocity(v33);
        --v31;
      } while (v31 != 0);
    }
    v34 = *(_QWORD*)(a1 + 192) + 12LL;
    if (v3 == 0) {
      v34 = 0;
    }
    v75 = v34;
    if (v72 >= 2) {
      v35 = 0;
      while (1) {
        LODWORD(v140) = v35;
        v36 = v73;
        if (v75 != 0) {
          *(_QWORD*)v75 = 0;
          *(_DWORD*)(v75 + 8) = 0;
        }
        if ((int)v4 >= 1) {
          break;
        }
      LABEL_57:
        v50 = v74;
        if ((_DWORD)v74 != 0) {
          do {
            v51 = *v36;
            v36 += 9;
            GameRoutine_3328d0(v51, 1u, 0, v3 != 0, *(float*)(a1 + 144),
                               *(float*)(a1 + 148), 0x0.0p+0f,
                               0x1.99999a0000000p-1f);
            --v50;
          } while (v50 != 0);
        }
        v35 = v140 + 1;
        if ((_DWORD)v140 == v72 - 2) {
          v34 = v75;
          goto LABEL_62;
        }
      }
      v37 = 0;
      while (1) {
        v38 = (unsigned int*)(v12 + 8 * v37);
        v39 = *v38;
        v40 = *((unsigned __int16*)v38 + 2);
        v41 = *(_QWORD*)(v13 + (v39 << 6) + 32);
        v42 = ((v41 + 383) >> 6) - (v41 >> 6);
        v43 = v42 + 1;
        for (j = (v42 + 1) & 7; j != 0; --j) {
          v41 += 64LL;
          --v43;
        }
        if (v42 >= 7) {
          do {
            v43 -= 8LL;
            v41 += 512LL;
          } while (v43 != 0);
        }
        if (*((_WORD*)v38 + 2) != 0) {
          if (v40 >= 8) {
            break;
          }
          v45 = 0;
          v46 = v40 & 7;
          if ((v40 & 7) != 0) {
            goto LABEL_54;
          }
        }
      LABEL_42:
        (*((void (**)(void))GameData_21358c0 +
           *((unsigned __int16*)v38 + 3)))();
        if (++v37 == v4) {
          goto LABEL_57;
        }
      }
      v47 = v13 + 256 + (v39 << 6);
      v48 = 0;
      do {
        v48 -= 8;
        v47 += 512;
      } while (-(__int64)((unsigned __int16)v40 & 0xFFF8) != v48);
      v45 = -v48;
      v46 = v40 & 7;
      if ((v40 & 7) == 0) {
        goto LABEL_42;
      }
    LABEL_54:
      v49 = v13 + 8 + (v45 << 6) + (v39 << 6);
      do {
        --v46;
        v49 += 64;
      } while (v46 != 0);
      goto LABEL_42;
    }
  LABEL_62:
    v140 = *(_QWORD*)(a1 + 168);
    if (v34 != 0) {
      *(_QWORD*)v34 = 0;
      *(_DWORD*)(v34 + 8) = 0;
    }
    if ((int)v4 >= 1) {
      v52 = 0;
      v53 = (void (**)(void))GameData_21358c8;
      while (1) {
        v54 = (unsigned int*)(v12 + 8 * v52);
        v55 = *v54;
        v56 = *((unsigned __int16*)v54 + 2);
        v57 = *(_QWORD*)(v13 + (v55 << 6) + 32);
        v58 = ((v57 + 383) >> 6) - (v57 >> 6);
        v59 = v58 + 1;
        for (k = (v58 + 1) & 7; k != 0; --k) {
          v57 += 64LL;
          --v59;
        }
        if (v58 >= 7) {
          do {
            v59 -= 8LL;
            v57 += 512LL;
          } while (v59 != 0);
        }
        if (*((_WORD*)v54 + 2) != 0) {
          if (v56 >= 8) {
            break;
          }
          v61 = 0;
          v62 = v56 & 7;
          if ((v56 & 7) != 0) {
            goto LABEL_78;
          }
        }
      LABEL_66:
        v53[*((unsigned __int16*)v54 + 3)]();
        if (++v52 == v4) {
          goto LABEL_81;
        }
      }
      v63 = v13 + 256 + (v55 << 6);
      v64 = 0;
      do {
        v64 -= 8;
        v63 += 512;
      } while (-(__int64)((unsigned __int16)v56 & 0xFFF8) != v64);
      v61 = -v64;
      v62 = v56 & 7;
      if ((v56 & 7) == 0) {
        goto LABEL_66;
      }
    LABEL_78:
      v65 = v13 + 8 + (v61 << 6) + (v55 << 6);
      do {
        --v62;
        v65 += 64;
      } while (v62 != 0);
      goto LABEL_66;
    }
  LABEL_81:
    v67 = v73;
    v66 = v74;
    if ((_DWORD)v74 != 0) {
      do {
        GameRoutine_3328d0(*v67, 1u, 0, v3 != 0, *(float*)(a1 + 144),
                           *(float*)(a1 + 148), 0x0.0p+0f,
                           0x1.99999a0000000p-1f);
        v68 = *v67;
        v67 += 9;
        physx_Dy_FeatherstoneArticulation_writebackInternalConstraints(v68, 0);
        --v66;
      } while (v66 != 0);
    }
  }
  else {
    GameRoutine_3697a0(v9, v8, v5, v6, v7, *(float*)(a1 + 144),
                       *(float*)(a1 + 148), v2, v11, v10, v3 != 0);
  }
}

void physx_source_lowleveldynamics_src_3681c0(int* a1, __int64 a2, _QWORD* a3,
                                              char a4)
{

#pragma clang fp contract(off)
  int v4;
  __int64 v5;
  unsigned int v6;
  int* v7;
  float v8;
  float v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  char v23;
  void (**v24)(void);
  int v25;
  int v26;
  int v27;
  _QWORD* v28;
  int v29;
  int v30;
  int v31;
  signed int v32;
  unsigned int v33;
  int v34;
  signed int v35;
  signed int v36;
  int v37;
  __int64 v38;
  unsigned int* v39;
  __int64 v40;
  unsigned int v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 i;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  int v52;
  __int64 v53;
  __int64 v54;
  unsigned int v55;
  __int64* v56;
  __int64 v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  __int64 v64;
  int v65;
  unsigned int v66;
  int v67;
  int v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  unsigned int v72;
  __int64 v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  _QWORD* v79;
  int v80;
  int v81;
  signed int v82;
  __int64 v83;
  int v84;
  _QWORD* v85;
  __int64 v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  unsigned int v92;
  signed int v93;
  int v94;
  signed int v95;
  int v96;
  __int64 v97;
  __int64 v98;
  unsigned int* v99;
  __int64 v100;
  unsigned int v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  __int64 j;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  int v111;
  int v112;
  int v113;
  __int64 v114;
  unsigned int v115;
  __int64* v116;
  __int64 v117;
  int v118;
  __int64 v119;
  atomic_uint* v120;
  int v121;
  _QWORD* v122;
  int v123;
  void (**v124)(void);
  int v125;
  int v126;
  int v127;
  int v128;
  signed int v129;
  unsigned int v130;
  signed int v131;
  signed int v132;
  int v133;
  __int64 v134;
  __int64 v135;
  unsigned int* v136;
  __int64 v137;
  unsigned int v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  __int64 k;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  __int64* v157;
  __int64 v158;
  int v159;
  int v160;
  int v161;
  unsigned int v162;
  __int64 v163;
  unsigned __int64 v164;
  _QWORD* v165;
  char* v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  unsigned int v180;
  char v181;
  int v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  int v187;
  int v188;
  atomic_uint* v189;
  __int64 v190;
  int v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  int v197;
  int v198;
  int v199;
  unsigned int v200;
  __int64 v201;
  int v202;
  int v203;
  int v204;
  int v205;
  int v206;
  int v207;
  int v208;
  int v209;
  int v210;
  __int64 v211;
  __int64 v212;
  int v213;
  unsigned int v214;
  int* v215;
  int v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  int v220;
  int v221;
  int v222;
  __int64 v223;
  int v224;
  int v225;
  int v226;
  struct {
    char v227;
    char gap209_[15];
    __int64 v228;
    __int64 v229;
    char gap240_[24];
    __int64 v230;
    __int64 v231;
    char gap280_[24];
    __int64 v232;
    __int64 v233;
    char gap320_[24];
    __int64 v234;
    __int64 v235;
    char gap360_[24];
    __int64 v236;
    __int64 v237;
    char gap400_[24];
    __int64 v238;
    __int64 v239;
    char gap440_[24];
    __int64 v240;
    __int64 v241;
    char gap480_[24];
    __int64 v242;
    __int64 v243;
    char gap520_[24];
    __int64 v244;
    __int64 v245;
    char gap560_[24];
    __int64 v246;
    __int64 v247;
    char gap600_[24];
    __int64 v248;
    __int64 v249;
    char gap640_[24];
    __int64 v250;
    __int64 v251;
    char gap680_[24];
    __int64 v252;
    __int64 v253;
    char gap720_[24];
    __int64 v254;
    __int64 v255;
    char gap760_[24];
    __int64 v256;
    __int64 v257;
    char gap800_[24];
    __int64 v258;
    __int64 v259;
    char gap840_[24];
    __int64 v260;
    __int64 v261;
    char gap880_[24];
    __int64 v262;
    __int64 v263;
    char gap920_[24];
    __int64 v264;
    __int64 v265;
    char gap960_[24];
    __int64 v266;
    __int64 v267;
    char gap1000_[24];
    __int64 v268;
    __int64 v269;
    char gap1040_[24];
    __int64 v270;
    __int64 v271;
    char gap1080_[24];
    __int64 v272;
    __int64 v273;
    char gap1120_[24];
    __int64 v274;
    __int64 v275;
    char gap1160_[24];
    __int64 v276;
    __int64 v277;
    char gap1200_[24];
    __int64 v278;
    __int64 v279;
    char gap1240_[24];
    __int64 v280;
    __int64 v281;
    char gap1280_[24];
    __int64 v282;
    __int64 v283;
    char gap1320_[24];
    __int64 v284;
    __int64 v285;
    char gap1360_[24];
    __int64 v286;
    __int64 v287;
    char gap1400_[24];
    __int64 v288;
    __int64 v289;
    char gap1440_[24];
    __int64 v290;
    __int64 v291;
    char gap1480_[8];
    char v292;
    char v293;
    char v294;
    char gap1491_[5];
    char* v295;
    __int64 v296;
    __int64 v297;
    __int64 v298;
    int v299;
    char gap1532_[4];
    atomic_uint* v300;
    __int64 v301;
    _QWORD* v302;
  } v227_;

  v4 = a1[6];
  v5 = *((_QWORD*)a1 + 2);
  v6 = a1[24];
  v7 = a1;
  v8 = *((float*)a1 + 36);
  v9 = *((float*)a1 + 37);
  v10 = *a1;
  v11 = *((_QWORD*)a1 + 6);
  v12 = *((_QWORD*)a1 + 9);
  v227_.v228 = 0xFFFFFFFFLL;
  v227_.v229 = 0xFFFFFFFFLL;
  v227_.v230 = 0xFFFFFFFFLL;
  v227_.v231 = 0xFFFFFFFFLL;
  v227_.v232 = 0xFFFFFFFFLL;
  v227_.v233 = 0xFFFFFFFFLL;
  v227_.v234 = 0xFFFFFFFFLL;
  v227_.v235 = 0xFFFFFFFFLL;
  v227_.v236 = 0xFFFFFFFFLL;
  v227_.v237 = 0xFFFFFFFFLL;
  v227_.v238 = 0xFFFFFFFFLL;
  v227_.v239 = 0xFFFFFFFFLL;
  v227_.v240 = 0xFFFFFFFFLL;
  v227_.v241 = 0xFFFFFFFFLL;
  v227_.v242 = 0xFFFFFFFFLL;
  v227_.v243 = 0xFFFFFFFFLL;
  v227_.v244 = 0xFFFFFFFFLL;
  v227_.v245 = 0xFFFFFFFFLL;
  v227_.v246 = 0xFFFFFFFFLL;
  v227_.v247 = 0xFFFFFFFFLL;
  v227_.v248 = 0xFFFFFFFFLL;
  v227_.v249 = 0xFFFFFFFFLL;
  v227_.v250 = 0xFFFFFFFFLL;
  v227_.v251 = 0xFFFFFFFFLL;
  v227_.v252 = 0xFFFFFFFFLL;
  v227_.v253 = 0xFFFFFFFFLL;
  v227_.v254 = 0xFFFFFFFFLL;
  v227_.v255 = 0xFFFFFFFFLL;
  v227_.v256 = 0xFFFFFFFFLL;
  v227_.v257 = 0xFFFFFFFFLL;
  v227_.v258 = 0xFFFFFFFFLL;
  v227_.v259 = 0xFFFFFFFFLL;
  v227_.v260 = 0xFFFFFFFFLL;
  v227_.v261 = 0xFFFFFFFFLL;
  v227_.v262 = 0xFFFFFFFFLL;
  v227_.v263 = 0xFFFFFFFFLL;
  v227_.v264 = 0xFFFFFFFFLL;
  v227_.v265 = 0xFFFFFFFFLL;
  v227_.v266 = 0xFFFFFFFFLL;
  v227_.v267 = 0xFFFFFFFFLL;
  v227_.v268 = 0xFFFFFFFFLL;
  v227_.v269 = 0xFFFFFFFFLL;
  v227_.v270 = 0xFFFFFFFFLL;
  v227_.v271 = 0xFFFFFFFFLL;
  v171 = v4;
  v13 = a1[10];
  v227_.v272 = 0xFFFFFFFFLL;
  v227_.v273 = 0xFFFFFFFFLL;
  v227_.v274 = 0xFFFFFFFFLL;
  v227_.v275 = 0xFFFFFFFFLL;
  v227_.v276 = 0xFFFFFFFFLL;
  v227_.v277 = 0xFFFFFFFFLL;
  v227_.v278 = 0xFFFFFFFFLL;
  v227_.v279 = 0xFFFFFFFFLL;
  v227_.v280 = 0xFFFFFFFFLL;
  v227_.v281 = 0xFFFFFFFFLL;
  v227_.v282 = 0xFFFFFFFFLL;
  v227_.v283 = 0xFFFFFFFFLL;
  v227_.v284 = 0xFFFFFFFFLL;
  v227_.v285 = 0xFFFFFFFFLL;
  v227_.v286 = 0xFFFFFFFFLL;
  v227_.v287 = 0xFFFFFFFFLL;
  v227_.v288 = 0xFFFFFFFFLL;
  v227_.v289 = 0xFFFFFFFFLL;
  v227_.v290 = 0xFFFFFFFFLL;
  v227_.v291 = 0xFFFFFFFFLL;
  v185 = *((_QWORD*)a1 + 4);
  v14 = (unsigned int)a1[20];
  v227_.v301 = a2;
  v227_.v302 = nullptr;
  v227_.v297 = v5;
  v227_.v293 = 0;
  v183 = v13;
  v201 = v14;
  v178 = a1[16];
  v227_.v295 = &v227_.v227;
  v227_.v296 = 0x2000000000LL;
  v15 = GameRoutine_55b6d0((atomic_uint*)(a1 + 28), v6);
  v16 = *((_QWORD*)v7 + 7);
  v17 = 0;
  v18 = 0;
  v197 = 0;
  v200 = v6;
  v19 = 0;
  v20 = 0;
  v184 = 0;
  v204 = v15 - v6;
  v21 = 0;
  v22 = 0;
  v174 = v10 - 1;
  v175 = v10 - 1;
  v176 = 0;
  v214 = v6;
  v215 = v7;
  v196 = v12;
  v227_.v302 = a3;
  v23 = 1;
  v227_.v294 = 1;
  do {
    v181 = v23;
    if ((v23 & 1) != 0) {
      v24 = (void (**)(void))GameData_21358c0;
    }
    else {
      v24 = (void (**)(void))GameData_21358b8;
    }
    v180 = v174 + v22;
    if (HIDWORD(v184) < v174 + v22) {
      v25 = v176;
      v182 = v19;
      v26 = v197;
      v172 = v183 * (v175 - HIDWORD(v184));
      v173 = v197 + v172;
      v190 = -(__int64)v19;
      while (1) {
        v198 = v26;
        v187 = v25;
        if (v7[33] < v25) {
          v27 = 30000;
          while (v7[33] < v187) {
            if (--v27 == 0) {
              GameRoutine_55bec0();
              v27 = 10000;
            }
          }
        }
        v28 = v227_.v302;
        if (((unsigned __int8)v181 & (v227_.v302 != nullptr)) == 1) {
          *v227_.v302 = 0;
          *((_DWORD*)v28 + 2) = 0;
        }
        v227_.v292 = a4 & 1 | ((unsigned int)(v10 - HIDWORD(v184)) < 4);
        if ((_DWORD)v201 != 0) {
          v211 = 0;
          v202 = v18;
          v193 = v17;
          v216 = v184 * v178;
          while (1) {
            if (v7[29] < v21) {
              v30 = 30000;
              while (v7[29] < v21) {
                if (--v30 == 0) {
                  GameRoutine_55bec0();
                  v30 = 10000;
                }
              }
            }
            v20 += *(_DWORD*)(v12 + 4 * v211);
            v31 = v204;
            if (v204 < v20) {
              break;
            }
          LABEL_21:
            v29 = *(_DWORD*)(v12 + 4 * v211++);
            v21 += v29;
            if (v211 == v201) {
              goto LABEL_54;
            }
          }
          v206 = v21;
          v32 = v200;
          v33 = 0;
          v220 = v20;
          while (1) {
            v34 = v31;
            v35 = v20 - v31;
            v36 = v32;
            v37 = v35 >= v32 ? v32 : v35;
            if (v37 >= 1) {
              break;
            }
          LABEL_50:
            v32 -= v37;
            if (v36 == v37) {
              v32 = v214;
              v31 = GameRoutine_55b6d0((atomic_uint*)(v215 + 28), v214) - v214;
              v20 = v220;
              v33 += v37;
              if (v31 >= v220) {
                goto LABEL_52;
              }
            }
            else {
              v31 = v37 + v34;
              v20 = v220;
              v33 += v37;
              if (v37 + v34 >= v220) {
              LABEL_52:
                v200 = v32;
                v204 = v31;
                if (v33 != 0) {
                  __builtin_arm_dmb(0xBu);
                  v7 = v215;
                  GameRoutine_55b6d0((atomic_uint*)(v215 + 29), v33);
                }
                else {
                  v7 = v215;
                }
                v21 = v206;
                v17 = v193;
                v12 = v196;
                v18 = v202;
                goto LABEL_21;
              }
            }
          }
          v38 = v34 - v216;
          while (2) {
            v39 = (unsigned int*)(v16 + 8 * v38);
            v40 = *v39;
            v41 = *((unsigned __int16*)v39 + 2);
            v42 = *(_QWORD*)(v11 + (v40 << 6) + 32);
            v43 = ((v42 + 383) >> 6) - (v42 >> 6);
            v44 = v43 + 1;
            for (i = (v43 + 1) & 7; i != 0; --i) {
              v42 += 64LL;
              --v44;
            }
            if (v43 >= 7) {
              do {
                v44 -= 8LL;
                v42 += 512LL;
              } while (v44 != 0);
            }
            if (*((_WORD*)v39 + 2) != 0) {
              if (v41 >= 8) {
                v48 = 0;
                v49 = v11 + 256 + (v40 << 6);
                do {
                  v48 -= 8;
                  v49 += 512;
                } while (-(__int64)((unsigned __int16)v41 & 0xFFF8) != v48);
                v46 = -v48;
                v47 = v41 & 7;
                if ((v41 & 7) != 0) {
                  goto LABEL_47;
                }
              }
              else {
                v46 = 0;
                v47 = v41 & 7;
                if ((v41 & 7) == 0) {
                  goto LABEL_35;
                }
              LABEL_47:
                v50 = v11 + 8 + (v46 << 6) + (v40 << 6);
                do {
                  --v47;
                  v50 += 64;
                } while (v47 != 0);
              }
            }
          LABEL_35:
            v24[*((unsigned __int16*)v39 + 3)]();
            if (++v38 >= v37 + v34 - v216) {
              goto LABEL_50;
            }
            continue;
          }
        }
      LABEL_54:
        if (v7[29] < v21) {
          v51 = 30000;
          while (v7[29] < v21) {
            if (--v51 == 0) {
              GameRoutine_55bec0();
              v51 = 10000;
            }
          }
        }
        v26 = v198 + v183;
        if ((int)v17 < v198 + (int)v183) {
          break;
        }
      LABEL_9:
        v25 = v187 + v183;
        v182 += v183;
        v190 -= v183;
        LODWORD(v184) = v184 + 1;
        if (++HIDWORD(v184) >= v180) {
          v19 = v182;
          v176 += v172;
          v197 = v173;
          goto LABEL_3;
        }
      }
      v199 = v198 + v183;
      v207 = v21;
      v221 = v20;
      while (1) {
        v52 = v18 >= v26 ? v26 : v18;
        if ((int)v17 < v52) {
          break;
        }
        if (v18 == (_DWORD)v17) {
          goto LABEL_71;
        }
      LABEL_61:
        if ((int)v17 >= v26) {
          goto LABEL_9;
        }
      }
      v53 = v52;
      v54 = (int)v17;
      v55 = 0;
      v56 = (__int64*)(v185 + 72 * (v190 + v54));
      do {
        v57 = *v56;
        v56 += 9;
        GameRoutine_3328d0(v57, 0, 0, a3 != nullptr, v8, v9, 0x0.0p+0f,
                           0x1.99999a0000000p-1f);
        ++v54;
        ++v55;
      } while (v54 < v53);
      __builtin_arm_dmb(0xBu);
      v7 = v215;
      GameRoutine_55b6d0((atomic_uint*)(v215 + 33), v55);
      v17 = (unsigned int)v54;
      v21 = v207;
      v26 = v199;
      v12 = v196;
      v20 = v221;
      if (v18 != (_DWORD)v17) {
        goto LABEL_61;
      }
    LABEL_71:
      v58 = GameRoutine_55b6d0((atomic_uint*)(v7 + 32), 2u);
      v26 = v199;
      v17 = (unsigned int)(v58 - 2);
      v18 = v58;
      goto LABEL_61;
    }
  LABEL_3:
    v23 = 0;
    ++v175;
    v22 = 1;
  } while ((v181 & 1) != 0);
  v191 = v19;
  v194 = v17;
  v203 = v18;
  v208 = v21;
  v223 = *((_QWORD*)v7 + 1);
  v217 = *((_QWORD*)v7 + 11);
  v59 = v183;
  v60 = GameRoutine_55b6d0((atomic_uint*)(v7 + 30), 0x20u);
  if (v7[33] < v176) {
    v61 = 30000;
    while (v7[33] < v176) {
      if (--v61 == 0) {
        GameRoutine_55bec0();
        v61 = 10000;
      }
    }
  }
  v62 = v60 - 32;
  if (v7[29] < v208) {
    v63 = 30000;
    while (v7[29] < v208) {
      if (--v63 == 0) {
        GameRoutine_55bec0();
        v63 = 10000;
      }
    }
  }
  v222 = v20;
  v64 = v12;
  if (v62 >= (int)v183) {
    v65 = 32;
    v66 = 0;
  }
  else {
    v65 = 32;
    v66 = 0;
    do {
      if (v59 - v62 >= 32) {
        v67 = 32;
      }
      else {
        v67 = v59 - v62;
      }
      if (v59 - v62 >= 1) {
        if (v67 <= 1) {
          v68 = 1;
        }
        else {
          v68 = v67;
        }
        v69 = (__int64*)(v185 + 72LL * v62);
        v62 += v68;
        do {
          v70 = *v69;
          v69 += 9;
          physx_Dy_FeatherstoneArticulation_saveVelocity(v70);
          --v68;
        } while (v68 != 0);
        v7 = v215;
        v59 = v183;
      }
      v65 -= v67;
      if (v65 == 0) {
        v65 = 32;
        v62 = GameRoutine_55b6d0((atomic_uint*)(v7 + 30), 0x20u) - 32;
      }
      v66 += v67;
    } while (v62 < v59);
  }
  if (v171 > v62 - v59) {
    v71 = 32LL * (v62 - v59);
    if (v65 >= v171 - (v62 - v59)) {
      v72 = v171 - (v62 - v59);
    }
    else {
      v72 = v65;
    }
    v73 = v223 + v71;
    while (1) {
      GameHr_3696c0(v72, v73, v217 + v71);
      v66 += v72;
      v74 = GameRoutine_55b6d0((atomic_uint*)(v7 + 30), 0x20u) - v59 - 32;
      if (v74 >= v171) {
        break;
      }
      v75 = v171 - v74;
      v71 = 32LL * v74;
      v73 = v223 + v71;
      if (v75 >= 32) {
        v72 = 32;
      }
      else {
        v72 = v75;
      }
    }
  }
  if (v66 != 0) {
    __builtin_arm_dmb(0xBu);
    GameRoutine_55b6d0((atomic_uint*)(v7 + 31), v66);
  }
  v76 = v208;
  v77 = v191;
  if (v7[31] < v59 + v171) {
    v78 = 30000;
    while (v7[31] < v59 + v171) {
      if (--v78 == 0) {
        GameRoutine_55bec0();
        v77 = v191;
        v78 = 10000;
      }
    }
  }
  v227_.v294 = 0;
  v79 = (_QWORD*)((char*)a3 + 12);
  if (a3 == nullptr) {
    v79 = nullptr;
  }
  v227_.v302 = v79;
  if ((unsigned int)v7[1] < 2) {
    LODWORD(v83) = v194;
    goto LABEL_183;
  }
  v80 = v77;
  v81 = v176;
  v82 = v200;
  v83 = v194;
  v188 = v80;
  v192 = -(__int64)v80;
  HIDWORD(v184) = 1;
  do {
    v177 = v81;
    if (v7[33] < v81) {
      v84 = 30000;
      while (v7[33] < v177) {
        if (--v84 == 0) {
          GameRoutine_55bec0();
          v84 = 10000;
        }
      }
    }
    if (a3 != nullptr) {
      v85 = v227_.v302;
      *v227_.v302 = 0;
      *((_DWORD*)v85 + 2) = 0;
    }
    if ((_DWORD)v201 != 0) {
      v86 = 0;
      v212 = v83;
      v87 = v208;
      v224 = v184 * v178;
      while (1) {
        v209 = v87;
        if (v7[29] < v87) {
          v89 = 30000;
          while (v7[29] < v209) {
            if (--v89 == 0) {
              GameRoutine_55bec0();
              v89 = 10000;
            }
          }
        }
        v222 += *(_DWORD*)(v64 + 4 * v86);
        if (v204 < v222) {
          break;
        }
      LABEL_129:
        v88 = *(_DWORD*)(v64 + 4 * v86++);
        v87 = v88 + v209;
        if (v86 == v201) {
          goto LABEL_163;
        }
      }
      v90 = v204;
      v91 = v222;
      v218 = v86;
      v92 = 0;
      while (1) {
        v93 = v91 - v90;
        v94 = v90;
        v95 = v82;
        v96 = v93 >= v82 ? v82 : v93;
        if (v96 >= 1) {
          break;
        }
      LABEL_158:
        v82 = v95 - v96;
        if (v95 == v96) {
          v7 = v215;
          v82 = v214;
          v90 = GameRoutine_55b6d0((atomic_uint*)(v215 + 28), v214) - v214;
          v91 = v222;
          v92 += v96;
          if (v90 >= v222) {
            goto LABEL_160;
          }
        }
        else {
          v7 = v215;
          v90 = v96 + v94;
          v91 = v222;
          v92 += v96;
          if (v96 + v94 >= v222) {
          LABEL_160:
            v204 = v90;
            if (v92 != 0) {
              __builtin_arm_dmb(0xBu);
              GameRoutine_55b6d0((atomic_uint*)(v7 + 29), v92);
            }
            v64 = v196;
            v83 = v212;
            v86 = v218;
            goto LABEL_129;
          }
        }
      }
      v97 = v90 - v224;
      v98 = v96 + v90 - v224;
      while (1) {
        v99 = (unsigned int*)(v16 + 8 * v97);
        v100 = *v99;
        v101 = *((unsigned __int16*)v99 + 2);
        v102 = *(_QWORD*)(v11 + (v100 << 6) + 32);
        v103 = ((v102 + 383) >> 6) - (v102 >> 6);
        v104 = v103 + 1;
        for (j = (v103 + 1) & 7; j != 0; --j) {
          v102 += 64LL;
          --v104;
        }
        if (v103 >= 7) {
          do {
            v104 -= 8LL;
            v102 += 512LL;
          } while (v104 != 0);
        }
        if (*((_WORD*)v99 + 2) != 0) {
          if (v101 >= 8) {
            break;
          }
          v106 = 0;
          v107 = v101 & 7;
          if ((v101 & 7) != 0) {
            goto LABEL_155;
          }
        }
      LABEL_143:
        (*((void (**)(void))GameData_21358c0 +
           *((unsigned __int16*)v99 + 3)))();
        if (++v97 >= v98) {
          goto LABEL_158;
        }
      }
      v108 = v11 + 256 + (v100 << 6);
      v109 = 0;
      do {
        v109 -= 8;
        v108 += 512;
      } while (-(__int64)((unsigned __int16)v101 & 0xFFF8) != v109);
      v106 = -v109;
      v107 = v101 & 7;
      if ((v101 & 7) == 0) {
        goto LABEL_143;
      }
    LABEL_155:
      v110 = v11 + 8 + (v106 << 6) + (v100 << 6);
      do {
        --v107;
        v110 += 64;
      } while (v107 != 0);
      goto LABEL_143;
    }
    v87 = v208;
  LABEL_163:
    v208 = v87;
    if (v7[29] < v87) {
      v111 = 30000;
      while (v7[29] < v208) {
        if (--v111 == 0) {
          GameRoutine_55bec0();
          v111 = 10000;
        }
      }
    }
    v112 = v197 + v183;
    v197 = v112;
    v200 = v82;
    if ((int)v83 < v112) {
      while (1) {
        v113 = v203 >= v112 ? v112 : v203;
        if ((int)v83 < v113) {
          break;
        }
        if (v203 == (_DWORD)v83) {
          goto LABEL_180;
        }
      LABEL_170:
        if ((int)v83 >= v112) {
          goto LABEL_118;
        }
      }
      v114 = v113;
      v83 = (int)v83;
      v115 = 0;
      v116 = (__int64*)(v185 + 72 * (v192 + (int)v83));
      do {
        v117 = *v116;
        v116 += 9;
        GameRoutine_3328d0(v117, 1u, 0, a3 != nullptr, v8, v9, 0x0.0p+0f,
                           0x1.99999a0000000p-1f);
        ++v83;
        ++v115;
      } while (v83 < v114);
      __builtin_arm_dmb(0xBu);
      GameRoutine_55b6d0((atomic_uint*)(v7 + 33), v115);
      v112 = v197;
      v82 = v200;
      v64 = v196;
      if (v203 != (_DWORD)v83) {
        goto LABEL_170;
      }
    LABEL_180:
      v118 = GameRoutine_55b6d0((atomic_uint*)(v7 + 32), 2u);
      v112 = v197;
      v83 = (unsigned int)(v118 - 2);
      v203 = v118;
      goto LABEL_170;
    }
  LABEL_118:
    v81 = v177 + v183;
    LODWORD(v184) = v184 + 1;
    ++HIDWORD(v184);
    v188 += v183;
    v192 -= v183;
  } while (HIDWORD(v184) < v7[1]);
  v59 = v183;
  v76 = v208;
  v176 = v177 + v183;
  v191 = v188;
LABEL_183:
  v119 = *((_QWORD*)v7 + 19);
  v120 = *((atomic_uint**)v7 + 21);
  v227_.v299 = v7[40];
  v195 = v119;
  v227_.v298 = v119;
  v189 = v120;
  v227_.v300 = v120;
  v227_.v293 = 1;
  if (v7[33] < v176) {
    v121 = 30000;
    while (v7[33] < v176) {
      if (--v121 == 0) {
        GameRoutine_55bec0();
        v121 = 10000;
      }
    }
  }
  if (a3 != nullptr) {
    v122 = v227_.v302;
    *v227_.v302 = 0;
    *((_DWORD*)v122 + 2) = 0;
  }
  v123 = v204;
  v213 = v83;
  if ((_DWORD)v201 != 0) {
    v219 = 0;
    v225 = v184 * v178;
    v124 = (void (**)(void))GameData_21358c8;
    while (1) {
      v126 = v123;
      if (v7[29] < v76) {
        v127 = 30000;
        while (v7[29] < v76) {
          if (--v127 == 0) {
            GameRoutine_55bec0();
            v127 = 10000;
          }
        }
      }
      v222 += *(_DWORD*)(v196 + 4 * v219);
      v123 = v126;
      if (v126 < v222) {
        break;
      }
    LABEL_193:
      v125 = *(_DWORD*)(v196 + 4 * v219++);
      v76 += v125;
      if (v219 == v201) {
        goto LABEL_226;
      }
    }
    v210 = v76;
    v128 = v222;
    v129 = v200;
    v130 = 0;
    while (1) {
      v131 = v128 - v123;
      v205 = v123;
      v132 = v129;
      v133 = v131 >= v129 ? v129 : v131;
      if (v133 >= 1) {
        break;
      }
    LABEL_222:
      v129 = v132 - v133;
      if (v132 == v133) {
        v7 = v215;
        v129 = v214;
        v123 = GameRoutine_55b6d0((atomic_uint*)(v215 + 28), v214) - v214;
        v128 = v222;
        v130 += v133;
        if (v123 >= v222) {
          goto LABEL_224;
        }
      }
      else {
        v7 = v215;
        v123 = v133 + v205;
        v128 = v222;
        v130 += v133;
        if (v133 + v205 >= v222) {
        LABEL_224:
          v200 = v129;
          if (v130 != 0) {
            __builtin_arm_dmb(0xBu);
            v148 = v123;
            GameRoutine_55b6d0((atomic_uint*)(v7 + 29), v130);
            v123 = v148;
          }
          v59 = v183;
          v76 = v210;
          goto LABEL_193;
        }
      }
    }
    v134 = v123 - v225;
    v135 = v133 + v123 - v225;
    while (1) {
      v136 = (unsigned int*)(v16 + 8 * v134);
      v137 = *v136;
      v138 = *((unsigned __int16*)v136 + 2);
      v139 = *(_QWORD*)(v11 + (v137 << 6) + 32);
      v140 = ((v139 + 383) >> 6) - (v139 >> 6);
      v141 = v140 + 1;
      for (k = (v140 + 1) & 7; k != 0; --k) {
        v139 += 64LL;
        --v141;
      }
      if (v140 >= 7) {
        do {
          v141 -= 8LL;
          v139 += 512LL;
        } while (v141 != 0);
      }
      if (*((_WORD*)v136 + 2) != 0) {
        if (v138 >= 8) {
          break;
        }
        v143 = 0;
        v144 = v138 & 7;
        if ((v138 & 7) != 0) {
          goto LABEL_219;
        }
      }
    LABEL_207:
      v124[*((unsigned __int16*)v136 + 3)]();
      if (++v134 >= v135) {
        goto LABEL_222;
      }
    }
    v145 = v11 + 256 + (v137 << 6);
    v146 = 0;
    do {
      v146 -= 8;
      v145 += 512;
    } while (-(__int64)((unsigned __int16)v138 & 0xFFF8) != v146);
    v143 = -v146;
    v144 = v138 & 7;
    if ((v138 & 7) == 0) {
      goto LABEL_207;
    }
  LABEL_219:
    v147 = v11 + 8 + (v143 << 6) + (v137 << 6);
    do {
      --v144;
      v147 += 64;
    } while (v144 != 0);
    goto LABEL_207;
  }
LABEL_226:
  v149 = v203;
  if (v7[29] < v76) {
    v150 = 30000;
    while (v7[29] < v76) {
      if (--v150 == 0) {
        GameRoutine_55bec0();
        v150 = 10000;
      }
    }
  }
  v151 = v213;
  v152 = v59;
  v153 = v197 + v59;
  v226 = v176 + v152;
  if (v213 < v153) {
    do {
      if (v149 >= v153) {
        v154 = v153;
      }
      else {
        v154 = v149;
      }
      v155 = v154 - v151;
      if (v154 <= v151) {
        v154 = v151;
        if (v149 == v151) {
          goto LABEL_246;
        }
      }
      else {
        v156 = v151;
        v157 = (__int64*)(v185 - 72LL * v191 + 72LL * v151);
        do {
          GameRoutine_3328d0(*v157, 0, 0, a3 != nullptr, v8, v9, 0x0.0p+0f,
                             0x1.99999a0000000p-1f);
          v158 = *v157;
          v157 += 9;
          physx_Dy_FeatherstoneArticulation_writebackInternalConstraints(v158,
                                                                         0);
          --v155;
        } while (v155 != 0);
        if (v154 == v156) {
          if (v149 == v154) {
            goto LABEL_246;
          }
        }
        else {
          __builtin_arm_dmb(0xBu);
          GameRoutine_55b6d0((atomic_uint*)(v7 + 33), v154 - v156);
          if (v149 == v154) {
          LABEL_246:
            v159 = GameRoutine_55b6d0((atomic_uint*)(v7 + 32), 2u);
            v154 = v159 - 2;
            v149 = v159;
          }
        }
      }
      v151 = v154;
    } while (v154 < v153);
  }
  if (v7[33] < v226) {
    v160 = 30000;
    while (v7[33] < v226) {
      if (--v160 == 0) {
        GameRoutine_55bec0();
        v160 = 10000;
      }
    }
  }
  if ((_DWORD)v227_.v296 != 0) {
    v161 = GameRoutine_55b6d0(v189, v227_.v296);
    if ((_DWORD)v227_.v296 != 0) {
      v162 = v161 - v227_.v296;
      v163 = 0;
      v164 = 0;
      do {
        v165 = (_QWORD*)(v195 + 40LL * v162);
        ++v164;
        ++v162;
        v166 = &v227_.v295[v163];
        v163 += 40;
        *v165 = *(_QWORD*)v166;
        v167 = *((_QWORD*)v166 + 1);
        v168 = *((_QWORD*)v166 + 2);
        v170 = *((_QWORD*)v166 + 3);
        v169 = *((_QWORD*)v166 + 4);
        v165[3] = v170;
        v165[4] = v169;
        v165[1] = v167;
        v165[2] = v168;
      } while (v164 < (unsigned int)v227_.v296);
    }
  }
}

__int64 physx_source_lowleveldynamics_src_373020(__int64 a1, __int64 a2,
                                                 _QWORD* a3, __int64 a4,
                                                 float a5, float a6,
                                                 int32x2_t a7, float a8,
                                                 float a9)
{

#pragma clang fp contract(off)
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  float* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int16 v21;
  __int64 v22;
  char v23;
  int v24;
  float v25;
  float v26;
  float v27;
  float v28;
  __int16 v29;
  int v30;
  __int64 v31;
  int v32;
  unsigned int v33;
  char v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  char v38;
  unsigned int v39;
  bool v40;
  bool v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  float v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  unsigned int v57;
  __int64 v58;
  float v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  __int64 v70;
  __int64 v71;
  int v72;
  int v73;
  int v74;
  int v75;
  unsigned int v76;
  char v77;
  __int64 v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  unsigned int v84;
  __int64 v85;
  int* v86;
  float v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  __int64 v98;
  __int64 v99;
  float v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  unsigned int v111;
  unsigned int v112;
  __int64 v113;
  int* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  int v118;
  int v119;
  int v120;
  int v121;
  __int64 v122;
  __int64 v123;
  int v124;
  int v125;
  int v126;
  int v127;
  __int64 v128;
  __int64 v129;
  int v130;
  int v131;
  int v132;
  int v133;
  __int64 v134;
  int v135;
  int v136;
  int v137;
  int v138;
  __int64 v139;
  __int64 v140;
  int v141;
  int v142;
  int v143;
  int v144;
  __int64 v145;
  int v146;
  unsigned int v147;
  char v148;
  __int64 v149;
  __int64 v150;
  char v151;
  unsigned int v152;
  __int64 v153;
  char v154;
  int v155;
  int v156;
  int v157;
  int v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  int v162;
  int v163;
  int v164;
  unsigned int v165;
  unsigned int v166;
  int v167;
  unsigned int v168;
  int v169;
  unsigned int v170;
  unsigned int v171;
  __int64 v172;
  _DWORD* v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  __int64 v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  __int64 v190;
  __int64 v191;
  int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  int v197;
  __int64 v198;
  __int64 v199;
  int v200;
  int v201;
  int v202;
  int v203;
  __int64 v204;
  __int64 v205;
  int v206;
  int v207;
  int v208;
  int v209;
  int v210;
  int v211;
  unsigned int v212;
  unsigned int v213;
  __int64 v214;
  int* v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  int v219;
  int v220;
  int v221;
  int v222;
  __int64 v223;
  __int64 v224;
  int v225;
  int v226;
  int v227;
  int v228;
  __int64 v229;
  __int64 v230;
  int v231;
  int v232;
  int v233;
  int v234;
  __int64 v235;
  int v236;
  int v237;
  int v238;
  int v239;
  __int64 v240;
  __int64 v241;
  int v242;
  int v243;
  int v244;
  int v245;
  unsigned int v246;
  float v247;
  float v248;
  char v249;
  float v250;
  float v251;
  float v252;
  int v254;
  unsigned int v255;
  char v256;
  char v257;
  unsigned int v258;
  unsigned int v259;
  __int64 v260;
  __int64 v261;
  unsigned int v262;
  unsigned int v263;
  __int64 v264;
  int i;

  v9 = a2 + 16;
  v10 = 0;
  v11 = 0;
  *(_WORD*)(a3[2] + 60LL) = 0;
  *(_WORD*)(a3[26] + 60LL) = 0;
  *(_WORD*)(a3[50] + 60LL) = 0;
  *(_WORD*)(a3[74] + 60LL) = 0;
  *(_DWORD*)(a2 + 20496) = 0;
  while (1) {
    v12 = (float*)&a3[24 * v10];
    *((_QWORD*)v12 + 17) = v9 + 80LL * v11;
    v13 = *(__int64**)(a1 + 8 * v10);
    if (v11 + *((unsigned __int16*)v13 + 18) > 0x40) {
      return 1;
    }
    v14 = *v13;
    if (v10 == 3) {
      v15 = v13[1];
      v16 = *((_QWORD*)v12 + 5);
      v17 = *((_QWORD*)v12 + 6);
      if (*(float*)(v16 + 76) >= *(float*)(v17 + 76)) {
        v18 = *(float*)(v17 + 76);
      }
      else {
        v18 = *(float*)(v16 + 76);
      }
      if (v14 == 0) {
        goto LABEL_120;
      }
    }
    else {
      v15 = v13[1];
      v19 = *((_QWORD*)v12 + 5);
      v20 = *((_QWORD*)v12 + 6);
      if (*(float*)(v19 + 76) >= *(float*)(v20 + 76)) {
        v18 = *(float*)(v20 + 76);
      }
      else {
        v18 = *(float*)(v19 + 76);
      }
      if (v14 == 0) {
        goto LABEL_120;
      }
    }
    v21 = *(_WORD*)(v14 + 48);
    v22 = 64;
    v23 = v21 & 2;
    if ((v21 & 2) == 0) {
      v22 = 16;
    }
    if ((v21 & 0x80) != 0) {
      v22 = 32;
    }
    if ((v21 & 4) != 0) {
      goto LABEL_120;
    }
    v24 = *((unsigned __int8*)v13 + 33);
    if (v24 == 0) {
      goto LABEL_120;
    }
    v26 = *(float*)v14;
    v25 = *(float*)(v14 + 4);
    v28 = *(float*)(v14 + 8);
    v27 = *(float*)(v14 + 12);
    v29 = *(_WORD*)(v14 + 48);
    v30 = v21 & 0x82;
    if ((v29 & 0x20) != 0) {
      v31 = 2 * v22;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = v11;
      v36 = 4 * v22;
      v37 = 3 * v22;
      if ((*(_WORD*)(v14 + 48) & 0x80) != 0) {
        v38 = 5;
      }
      else {
        v38 = v23 | 4;
      }
      while (1) {
        if (v32 != 0) {
          v39 = *(unsigned __int8*)(v14 + 46);
          v14 += 64;
          v40 = v39 >= v33;
          v42 = v39 - v33;
          v41 = v42 != 0 && v40;
          LODWORD(v43) = v42 << v38;
          if (v41) {
            v43 = (unsigned int)v43;
          }
          else {
            v43 = 0;
          }
          v15 += v43;
        }
        v33 = *(unsigned __int8*)(v14 + 46);
        if (*(_BYTE*)(v14 + 46) == 0) {
          goto LABEL_24;
        }
        if (v30 != 0) {
          if ((v34 & 1) != 0) {
            v44 = v22;
          }
          else {
            v44 = 0;
          }
          v15 += v44;
          v45 = v9 + 80LL * v35;
          v46 = *(float*)(v15 + 28);
          if (v46 != 0x0.0p+0f) {
            ++v35;
            *(_QWORD*)v45 = *(_QWORD*)(v14 + 16);
            v47 = *(_DWORD*)(v14 + 24);
            v48 = *(_DWORD*)(v14 + 28);
            *(_BYTE*)(v45 + 48) = *(_BYTE*)(v14 + 47);
            *(_DWORD*)(v45 + 8) = v47;
            v49 = *(_DWORD*)v15;
            v50 = *(_DWORD*)(v15 + 8);
            v51 = *(_DWORD*)(v15 + 12);
            *(_DWORD*)(v45 + 20) = *(_DWORD*)(v15 + 4);
            *(_DWORD*)(v45 + 24) = v50;
            *(_DWORD*)(v45 + 12) = v51;
            *(_DWORD*)(v45 + 16) = v49;
            v52 = *(_DWORD*)(v14 + 32);
            *(_DWORD*)(v45 + 44) = *(_DWORD*)(v14 + 36);
            v53 = *(_DWORD*)(v14 + 40);
            *(_DWORD*)(v45 + 56) = v52;
            *(_DWORD*)(v45 + 60) = v48;
            *(_DWORD*)(v45 + 64) = v53;
            v54 = *(_DWORD*)(v15 + 16);
            v55 = *(_DWORD*)(v15 + 20);
            *(float*)(v45 + 28) = v46;
            *(_DWORD*)(v45 + 32) = v54;
            v56 = *(_DWORD*)(v15 + 24);
            *(_DWORD*)(v45 + 36) = v55;
            *(_DWORD*)(v45 + 40) = v56;
          }
          v57 = v33 - 1;
          if (v33 != 1) {
            if (v33 != 2) {
              v84 = v57 & 0xFFFFFFFE;
              do {
                v85 = v9 + 80LL * v35;
                v86 = (int*)(v15 + v22);
                v87 = *(float*)(v15 + v22 + 28);
                if (v87 != 0x0.0p+0f) {
                  ++v35;
                  *(_QWORD*)v85 = *(_QWORD*)(v14 + 16);
                  v88 = *(_DWORD*)(v14 + 24);
                  v89 = *(_DWORD*)(v14 + 28);
                  *(_BYTE*)(v85 + 48) = *(_BYTE*)(v14 + 47);
                  *(_DWORD*)(v85 + 8) = v88;
                  v90 = *v86;
                  v91 = v86[2];
                  v92 = v86[3];
                  *(_DWORD*)(v85 + 20) = v86[1];
                  *(_DWORD*)(v85 + 24) = v91;
                  *(_DWORD*)(v85 + 12) = v92;
                  *(_DWORD*)(v85 + 16) = v90;
                  v93 = *(_DWORD*)(v14 + 32);
                  *(_DWORD*)(v85 + 44) = *(_DWORD*)(v14 + 36);
                  v94 = *(_DWORD*)(v14 + 40);
                  *(_DWORD*)(v85 + 56) = v93;
                  *(_DWORD*)(v85 + 60) = v89;
                  *(_DWORD*)(v85 + 64) = v94;
                  v95 = v86[4];
                  v96 = v86[5];
                  *(float*)(v85 + 28) = v87;
                  *(_DWORD*)(v85 + 32) = v95;
                  v97 = v86[6];
                  *(_DWORD*)(v85 + 36) = v96;
                  *(_DWORD*)(v85 + 40) = v97;
                }
                v98 = v15 + v31;
                v99 = v9 + 80LL * v35;
                v100 = *(float*)(v98 + 28);
                if (v100 != 0x0.0p+0f) {
                  ++v35;
                  *(_QWORD*)v99 = *(_QWORD*)(v14 + 16);
                  v101 = *(_DWORD*)(v14 + 24);
                  v102 = *(_DWORD*)(v14 + 28);
                  *(_BYTE*)(v99 + 48) = *(_BYTE*)(v14 + 47);
                  *(_DWORD*)(v99 + 8) = v101;
                  v103 = *(_DWORD*)v98;
                  v104 = *(_DWORD*)(v98 + 8);
                  v105 = *(_DWORD*)(v98 + 12);
                  *(_DWORD*)(v99 + 20) = *(_DWORD*)(v98 + 4);
                  *(_DWORD*)(v99 + 24) = v104;
                  *(_DWORD*)(v99 + 12) = v105;
                  *(_DWORD*)(v99 + 16) = v103;
                  v106 = *(_DWORD*)(v14 + 32);
                  *(_DWORD*)(v99 + 44) = *(_DWORD*)(v14 + 36);
                  v107 = *(_DWORD*)(v14 + 40);
                  *(_DWORD*)(v99 + 56) = v106;
                  *(_DWORD*)(v99 + 60) = v102;
                  *(_DWORD*)(v99 + 64) = v107;
                  v108 = *(_DWORD*)(v98 + 16);
                  v109 = *(_DWORD*)(v98 + 20);
                  *(float*)(v99 + 28) = v100;
                  *(_DWORD*)(v99 + 32) = v108;
                  v110 = *(_DWORD*)(v98 + 24);
                  *(_DWORD*)(v99 + 36) = v109;
                  *(_DWORD*)(v99 + 40) = v110;
                }
                v15 = (__int64)&v86[(unsigned __int64)v22 / 4];
                v84 -= 2;
              } while (v84 != 0);
            }
            if ((v57 & 1) != 0) {
              v58 = v9 + 80LL * v35;
              v15 += v22;
              v59 = *(float*)(v15 + 28);
              if (v59 != 0x0.0p+0f) {
                ++v35;
                *(_QWORD*)v58 = *(_QWORD*)(v14 + 16);
                v60 = *(_DWORD*)(v14 + 24);
                v61 = *(_DWORD*)(v14 + 28);
                *(_BYTE*)(v58 + 48) = *(_BYTE*)(v14 + 47);
                *(_DWORD*)(v58 + 8) = v60;
                v62 = *(_DWORD*)v15;
                v63 = *(_DWORD*)(v15 + 8);
                v64 = *(_DWORD*)(v15 + 12);
                *(_DWORD*)(v58 + 20) = *(_DWORD*)(v15 + 4);
                *(_DWORD*)(v58 + 24) = v63;
                *(_DWORD*)(v58 + 12) = v64;
                *(_DWORD*)(v58 + 16) = v62;
                v65 = *(_DWORD*)(v14 + 32);
                *(_DWORD*)(v58 + 44) = *(_DWORD*)(v14 + 36);
                v66 = *(_DWORD*)(v14 + 40);
                *(_DWORD*)(v58 + 56) = v65;
                *(_DWORD*)(v58 + 60) = v61;
                *(_DWORD*)(v58 + 64) = v66;
                v67 = *(_DWORD*)(v15 + 16);
                v68 = *(_DWORD*)(v15 + 20);
                *(float*)(v58 + 28) = v59;
                *(_DWORD*)(v58 + 32) = v67;
                v69 = *(_DWORD*)(v15 + 24);
                *(_DWORD*)(v58 + 36) = v68;
                *(_DWORD*)(v58 + 40) = v69;
              }
            }
          }
          goto LABEL_23;
        }
        v70 = v9 + 80LL * v35;
        if ((v34 & 1) != 0) {
          v71 = v22;
        }
        else {
          v71 = 0;
        }
        v73 = *(_DWORD*)(v14 + 28);
        v72 = *(_DWORD*)(v14 + 32);
        v74 = *(_DWORD*)(v14 + 36);
        v75 = *(_DWORD*)(v14 + 40);
        v76 = v33 - 1;
        v15 += v71;
        v77 = *(_BYTE*)(v14 + 47);
        v78 = *(_QWORD*)(v14 + 16);
        *(_DWORD*)(v70 + 28) = 2139095039;
        *(_BYTE*)(v70 + 48) = v77;
        *(_DWORD*)(v70 + 44) = v74;
        *(_DWORD*)(v70 + 56) = v72;
        *(_DWORD*)(v70 + 60) = v73;
        *(_DWORD*)(v70 + 64) = v75;
        *(_QWORD*)v70 = v78;
        *(_DWORD*)(v70 + 8) = *(_DWORD*)(v14 + 24);
        v79 = *(_DWORD*)v15;
        v80 = *(_DWORD*)(v15 + 4);
        v81 = *(_DWORD*)(v15 + 8);
        v82 = *(_DWORD*)(v15 + 12);
        *(_QWORD*)(v70 + 32) = 0;
        *(_DWORD*)(v70 + 40) = 0;
        *(_DWORD*)(v70 + 20) = v80;
        *(_DWORD*)(v70 + 24) = v81;
        *(_DWORD*)(v70 + 12) = v82;
        *(_DWORD*)(v70 + 16) = v79;
        if (v33 == 1) {
          v34 = 1;
          ++v35;
          goto LABEL_24;
        }
        if (v33 - 2 >= 3) {
          break;
        }
        ++v35;
        v83 = v76 & 3;
        if ((v76 & 3) != 0) {
          goto LABEL_59;
        }
      LABEL_23:
        v34 = 1;
      LABEL_24:
        if (++v32 == v24) {
          goto LABEL_95;
        }
      }
      v111 = v76 & 0xFFFFFFFC;
      v112 = v35 + 2;
      do {
        v113 = v15;
        v114 = (int*)(v15 + v22);
        v111 -= 4;
        v115 = v9 + 80LL * (v112 - 1);
        v116 = *(_QWORD*)(v14 + 16);
        *(_BYTE*)(v115 + 48) = v77;
        *(_DWORD*)(v115 + 28) = 2139095039;
        *(_DWORD*)(v115 + 44) = v74;
        *(_DWORD*)(v115 + 56) = v72;
        *(_DWORD*)(v115 + 60) = v73;
        *(_DWORD*)(v115 + 64) = v75;
        *(_QWORD*)v115 = v116;
        v117 = v9 + 80LL * v112;
        *(_DWORD*)(v115 + 8) = *(_DWORD*)(v14 + 24);
        v118 = *v114;
        v119 = v114[1];
        v120 = v114[2];
        v121 = v114[3];
        *(_QWORD*)(v115 + 32) = 0;
        *(_DWORD*)(v115 + 40) = 0;
        *(_DWORD*)(v115 + 20) = v119;
        *(_DWORD*)(v115 + 24) = v120;
        *(_DWORD*)(v115 + 12) = v121;
        *(_DWORD*)(v115 + 16) = v118;
        v122 = *(_QWORD*)(v14 + 16);
        *(_BYTE*)(v117 + 48) = v77;
        *(_DWORD*)(v117 + 28) = 2139095039;
        *(_DWORD*)(v117 + 44) = v74;
        *(_DWORD*)(v117 + 56) = v72;
        *(_DWORD*)(v117 + 60) = v73;
        *(_DWORD*)(v117 + 64) = v75;
        *(_QWORD*)v117 = v122;
        v123 = v9 + 80LL * (v112 + 1);
        *(_DWORD*)(v117 + 8) = *(_DWORD*)(v14 + 24);
        v124 = *(_DWORD*)(v113 + 2 * v22);
        v125 = *(_DWORD*)(v113 + v31 + 4);
        v126 = *(_DWORD*)(v113 + v31 + 8);
        v127 = *(_DWORD*)(v113 + v31 + 12);
        *(_QWORD*)(v117 + 32) = 0;
        *(_DWORD*)(v117 + 40) = 0;
        *(_DWORD*)(v117 + 20) = v125;
        *(_DWORD*)(v117 + 24) = v126;
        *(_DWORD*)(v117 + 12) = v127;
        *(_DWORD*)(v117 + 16) = v124;
        v128 = *(_QWORD*)(v14 + 16);
        *(_BYTE*)(v123 + 48) = v77;
        *(_DWORD*)(v123 + 28) = 2139095039;
        *(_DWORD*)(v123 + 44) = v74;
        *(_DWORD*)(v123 + 56) = v72;
        *(_DWORD*)(v123 + 60) = v73;
        *(_DWORD*)(v123 + 64) = v75;
        *(_QWORD*)v123 = v128;
        LODWORD(v128) = v112 + 2;
        v112 += 4;
        v129 = v9 + 80LL * (unsigned int)v128;
        *(_DWORD*)(v123 + 8) = *(_DWORD*)(v14 + 24);
        v130 = *(_DWORD*)(v113 + 3 * v22);
        v131 = *(_DWORD*)(v113 + v37 + 4);
        v132 = *(_DWORD*)(v113 + v37 + 8);
        v133 = *(_DWORD*)(v113 + v37 + 12);
        *(_QWORD*)(v123 + 32) = 0;
        *(_DWORD*)(v123 + 40) = 0;
        *(_DWORD*)(v123 + 20) = v131;
        *(_DWORD*)(v123 + 24) = v132;
        *(_DWORD*)(v123 + 12) = v133;
        *(_DWORD*)(v123 + 16) = v130;
        v134 = *(_QWORD*)(v14 + 16);
        *(_BYTE*)(v129 + 48) = v77;
        *(_DWORD*)(v129 + 28) = 2139095039;
        *(_DWORD*)(v129 + 44) = v74;
        *(_DWORD*)(v129 + 56) = v72;
        *(_DWORD*)(v129 + 60) = v73;
        *(_DWORD*)(v129 + 64) = v75;
        *(_QWORD*)v129 = v134;
        v135 = *(_DWORD*)(v113 + v36 + 12);
        v136 = *(_DWORD*)(v113 + 4 * v22);
        v15 = (__int64)&v114[(unsigned __int64)v22 / 2 +
                             (unsigned __int64)v22 / 4];
        *(_DWORD*)(v129 + 8) = *(_DWORD*)(v14 + 24);
        *(_DWORD*)(v129 + 12) = v135;
        v137 = *(_DWORD*)(v113 + v36 + 4);
        v138 = *(_DWORD*)(v113 + v36 + 8);
        *(_QWORD*)(v129 + 32) = 0;
        *(_DWORD*)(v129 + 40) = 0;
        *(_DWORD*)(v129 + 16) = v136;
        *(_DWORD*)(v129 + 20) = v137;
        *(_DWORD*)(v129 + 24) = v138;
      } while (v111 != 0);
      v35 = v112 - 1;
      v83 = v76 & 3;
      if ((v76 & 3) == 0) {
        goto LABEL_23;
      }
      do {
      LABEL_59:
        v139 = v9 + 80LL * v35;
        v15 += v22;
        ++v35;
        --v83;
        v140 = *(_QWORD*)(v14 + 16);
        *(_BYTE*)(v139 + 48) = v77;
        *(_DWORD*)(v139 + 28) = 2139095039;
        *(_DWORD*)(v139 + 44) = v74;
        *(_DWORD*)(v139 + 56) = v72;
        *(_DWORD*)(v139 + 60) = v73;
        *(_DWORD*)(v139 + 64) = v75;
        *(_QWORD*)v139 = v140;
        *(_DWORD*)(v139 + 8) = *(_DWORD*)(v14 + 24);
        v141 = *(_DWORD*)v15;
        v142 = *(_DWORD*)(v15 + 4);
        v143 = *(_DWORD*)(v15 + 8);
        v144 = *(_DWORD*)(v15 + 12);
        *(_QWORD*)(v139 + 32) = 0;
        *(_DWORD*)(v139 + 40) = 0;
        *(_DWORD*)(v139 + 20) = v142;
        *(_DWORD*)(v139 + 24) = v143;
        *(_DWORD*)(v139 + 12) = v144;
        *(_DWORD*)(v139 + 16) = v141;
      } while (v83 != 0);
      goto LABEL_23;
    }
    if (v18 == 0x0.0p+0f) {
      break;
    }
    v145 = 4 * v22;
    v146 = 0;
    v147 = 0;
    v148 = 0;
    v35 = v11;
    v149 = 2 * v22;
    v150 = 3 * v22;
    if ((v21 & 0x80) != 0) {
      v151 = 5;
    }
    else {
      v151 = v23 | 4;
    }
    do {
      if (v146 != 0) {
        v152 = *(unsigned __int8*)(v14 + 46);
        v14 += 64;
        v41 = v152 > v147;
        LODWORD(v153) = (v152 - v147) << v151;
        if (v41) {
          v153 = (unsigned int)v153;
        }
        else {
          v153 = 0;
        }
        v15 += v153;
      }
      v147 = *(unsigned __int8*)(v14 + 46);
      if (*(_BYTE*)(v14 + 46) != 0) {
        v154 = *(_BYTE*)(v14 + 47);
        v156 = *(_DWORD*)(v14 + 28);
        v155 = *(_DWORD*)(v14 + 32);
        v157 = *(_DWORD*)(v14 + 36);
        v158 = *(_DWORD*)(v14 + 40);
        if ((v148 & 1) != 0) {
          v159 = v22;
        }
        else {
          v159 = 0;
        }
        v15 += v159;
        v160 = v9 + 80LL * v35;
        v161 = *(_QWORD*)(v14 + 16);
        *(_BYTE*)(v160 + 48) = v154;
        *(float*)(v160 + 28) = v18;
        *(_DWORD*)(v160 + 44) = v157;
        *(_DWORD*)(v160 + 56) = v155;
        *(_DWORD*)(v160 + 60) = v156;
        *(_DWORD*)(v160 + 64) = v158;
        *(_QWORD*)v160 = v161;
        *(_DWORD*)(v160 + 8) = *(_DWORD*)(v14 + 24);
        v162 = *(_DWORD*)v15;
        v163 = *(_DWORD*)(v15 + 8);
        v164 = *(_DWORD*)(v15 + 12);
        *(_DWORD*)(v160 + 20) = *(_DWORD*)(v15 + 4);
        *(_DWORD*)(v160 + 24) = v163;
        *(_DWORD*)(v160 + 12) = v164;
        *(_DWORD*)(v160 + 16) = v162;
        if (v30 != 0) {
          v165 = v35 + 1;
          v166 = v147 - 1;
          *(_QWORD*)(v160 + 32) = *(_QWORD*)(v15 + 16);
          *(_DWORD*)(v160 + 40) = *(_DWORD*)(v15 + 24);
          if (v147 == 1) {
            goto LABEL_65;
          }
          if (v147 - 2 >= 3) {
            v170 = v166 & 0xFFFFFFFC;
            v171 = v35 + 2;
            do {
              v172 = v15;
              v173 = (_DWORD*)(v15 + v22);
              v170 -= 4;
              v174 = v9 + 80LL * (v171 - 1);
              v175 = *(_QWORD*)(v14 + 16);
              *(_BYTE*)(v174 + 48) = v154;
              *(_DWORD*)(v174 + 44) = v157;
              *(_DWORD*)(v174 + 56) = v155;
              *(_DWORD*)(v174 + 60) = v156;
              *(_DWORD*)(v174 + 64) = v158;
              *(_QWORD*)v174 = v175;
              v176 = v9 + 80LL * v171;
              *(_DWORD*)(v174 + 8) = *(_DWORD*)(v14 + 24);
              v177 = v173[1];
              v178 = v173[2];
              v179 = v173[3];
              *(_DWORD*)(v174 + 16) = *v173;
              *(_DWORD*)(v174 + 20) = v177;
              v180 = v173[4];
              v181 = v173[5];
              *(_DWORD*)(v174 + 24) = v178;
              *(_DWORD*)(v174 + 12) = v179;
              *(float*)(v174 + 28) = v18;
              *(_DWORD*)(v174 + 32) = v180;
              v182 = v173[6];
              *(_DWORD*)(v174 + 36) = v181;
              *(_DWORD*)(v174 + 40) = v182;
              v183 = *(_QWORD*)(v14 + 16);
              *(_BYTE*)(v176 + 48) = v154;
              *(_DWORD*)(v176 + 44) = v157;
              *(_DWORD*)(v176 + 56) = v155;
              *(_DWORD*)(v176 + 60) = v156;
              *(_DWORD*)(v176 + 64) = v158;
              *(_QWORD*)v176 = v183;
              *(_DWORD*)(v176 + 8) = *(_DWORD*)(v14 + 24);
              v184 = *(_DWORD*)(v172 + 2 * v22);
              v185 = *(_DWORD*)(v172 + v149 + 8);
              v186 = *(_DWORD*)(v172 + v149 + 12);
              *(_DWORD*)(v176 + 20) = *(_DWORD*)(v172 + v149 + 4);
              *(_DWORD*)(v176 + 24) = v185;
              *(_DWORD*)(v176 + 12) = v186;
              *(_DWORD*)(v176 + 16) = v184;
              v187 = *(_DWORD*)(v172 + v149 + 16);
              v188 = *(_DWORD*)(v172 + v149 + 20);
              *(float*)(v176 + 28) = v18;
              *(_DWORD*)(v176 + 32) = v187;
              v189 = *(_DWORD*)(v172 + v149 + 24);
              v190 = v9 + 80LL * (v171 + 1);
              *(_DWORD*)(v176 + 36) = v188;
              *(_DWORD*)(v176 + 40) = v189;
              v191 = *(_QWORD*)(v14 + 16);
              *(_BYTE*)(v190 + 48) = v154;
              *(_DWORD*)(v190 + 44) = v157;
              *(_DWORD*)(v190 + 56) = v155;
              *(_DWORD*)(v190 + 60) = v156;
              *(_DWORD*)(v190 + 64) = v158;
              *(_QWORD*)v190 = v191;
              *(_DWORD*)(v190 + 8) = *(_DWORD*)(v14 + 24);
              v192 = *(_DWORD*)(v172 + 3 * v22);
              v193 = *(_DWORD*)(v172 + v150 + 8);
              v194 = *(_DWORD*)(v172 + v150 + 12);
              *(_DWORD*)(v190 + 20) = *(_DWORD*)(v172 + v150 + 4);
              *(_DWORD*)(v190 + 24) = v193;
              *(_DWORD*)(v190 + 12) = v194;
              *(_DWORD*)(v190 + 16) = v192;
              v195 = *(_DWORD*)(v172 + v150 + 16);
              v196 = *(_DWORD*)(v172 + v150 + 20);
              v197 = *(_DWORD*)(v172 + v150 + 24);
              *(float*)(v190 + 28) = v18;
              *(_DWORD*)(v190 + 32) = v195;
              *(_DWORD*)(v190 + 36) = v196;
              *(_DWORD*)(v190 + 40) = v197;
              LODWORD(v190) = v171 + 2;
              v171 += 4;
              v198 = v9 + 80LL * (unsigned int)v190;
              v199 = *(_QWORD*)(v14 + 16);
              *(_BYTE*)(v198 + 48) = v154;
              *(_DWORD*)(v198 + 44) = v157;
              *(_DWORD*)(v198 + 56) = v155;
              *(_DWORD*)(v198 + 60) = v156;
              *(_DWORD*)(v198 + 64) = v158;
              *(_QWORD*)v198 = v199;
              v200 = *(_DWORD*)(v172 + 4 * v22);
              v15 = (__int64)&v173[(unsigned __int64)v22 / 2 +
                                   (unsigned __int64)v22 / 4];
              *(_DWORD*)(v198 + 8) = *(_DWORD*)(v14 + 24);
              *(_DWORD*)(v198 + 16) = v200;
              v201 = *(_DWORD*)(v172 + v145 + 8);
              *(_DWORD*)(v198 + 20) = *(_DWORD*)(v172 + v145 + 4);
              *(_DWORD*)(v198 + 24) = v201;
              v202 = *(_DWORD*)(v172 + v145 + 16);
              *(_DWORD*)(v198 + 12) = *(_DWORD*)(v172 + v145 + 12);
              *(float*)(v198 + 28) = v18;
              *(_DWORD*)(v198 + 32) = v202;
              v203 = *(_DWORD*)(v172 + v145 + 24);
              *(_DWORD*)(v198 + 36) = *(_DWORD*)(v172 + v145 + 20);
              *(_DWORD*)(v198 + 40) = v203;
            } while (v170 != 0);
            v35 = v171 - 1;
            v167 = v166 & 3;
            if ((v166 & 3) == 0) {
              goto LABEL_94;
            }
          }
          else {
            ++v35;
            v167 = v166 & 3;
            if ((v166 & 3) == 0) {
            LABEL_94:
              v148 = 1;
              goto LABEL_66;
            }
          }
          do {
            v204 = v9 + 80LL * v35;
            v15 += v22;
            ++v35;
            --v167;
            v205 = *(_QWORD*)(v14 + 16);
            *(_BYTE*)(v204 + 48) = v154;
            *(_DWORD*)(v204 + 44) = v157;
            *(_DWORD*)(v204 + 56) = v155;
            *(_DWORD*)(v204 + 60) = v156;
            *(_DWORD*)(v204 + 64) = v158;
            *(_QWORD*)v204 = v205;
            *(_DWORD*)(v204 + 8) = *(_DWORD*)(v14 + 24);
            v206 = *(_DWORD*)v15;
            v207 = *(_DWORD*)(v15 + 8);
            v208 = *(_DWORD*)(v15 + 12);
            *(_DWORD*)(v204 + 20) = *(_DWORD*)(v15 + 4);
            *(_DWORD*)(v204 + 24) = v207;
            *(_DWORD*)(v204 + 12) = v208;
            *(_DWORD*)(v204 + 16) = v206;
            v209 = *(_DWORD*)(v15 + 16);
            v210 = *(_DWORD*)(v15 + 20);
            *(float*)(v204 + 28) = v18;
            *(_DWORD*)(v204 + 32) = v209;
            v211 = *(_DWORD*)(v15 + 24);
            *(_DWORD*)(v204 + 36) = v210;
            *(_DWORD*)(v204 + 40) = v211;
          } while (v167 != 0);
          goto LABEL_94;
        }
        v165 = v35 + 1;
        v168 = v147 - 1;
        *(_QWORD*)(v160 + 32) = 0;
        *(_DWORD*)(v160 + 40) = 0;
        if (v147 == 1) {
        LABEL_65:
          v148 = 1;
          v35 = v165;
          goto LABEL_66;
        }
        if (v147 - 2 >= 3) {
          v212 = v168 & 0xFFFFFFFC;
          v213 = v35 + 2;
          do {
            v214 = v15;
            v215 = (int*)(v15 + v22);
            v212 -= 4;
            v216 = v9 + 80LL * (v213 - 1);
            v217 = *(_QWORD*)(v14 + 16);
            *(_BYTE*)(v216 + 48) = v154;
            *(_DWORD*)(v216 + 44) = v157;
            *(_DWORD*)(v216 + 56) = v155;
            *(_DWORD*)(v216 + 60) = v156;
            *(_DWORD*)(v216 + 64) = v158;
            *(_QWORD*)v216 = v217;
            v218 = v9 + 80LL * v213;
            *(_DWORD*)(v216 + 8) = *(_DWORD*)(v14 + 24);
            v219 = *v215;
            v220 = v215[1];
            v221 = v215[2];
            v222 = v215[3];
            *(_QWORD*)(v216 + 32) = 0;
            *(_DWORD*)(v216 + 40) = 0;
            *(_DWORD*)(v216 + 16) = v219;
            *(_DWORD*)(v216 + 20) = v220;
            *(_DWORD*)(v216 + 24) = v221;
            *(float*)(v216 + 28) = v18;
            *(_DWORD*)(v216 + 12) = v222;
            v223 = *(_QWORD*)(v14 + 16);
            *(_BYTE*)(v218 + 48) = v154;
            *(_DWORD*)(v218 + 44) = v157;
            *(_DWORD*)(v218 + 56) = v155;
            *(_DWORD*)(v218 + 60) = v156;
            *(_DWORD*)(v218 + 64) = v158;
            *(_QWORD*)v218 = v223;
            v224 = v9 + 80LL * (v213 + 1);
            *(_DWORD*)(v218 + 8) = *(_DWORD*)(v14 + 24);
            v225 = *(_DWORD*)(v214 + 2 * v22);
            v226 = *(_DWORD*)(v214 + v149 + 4);
            v227 = *(_DWORD*)(v214 + v149 + 8);
            v228 = *(_DWORD*)(v214 + v149 + 12);
            *(_QWORD*)(v218 + 32) = 0;
            *(_DWORD*)(v218 + 40) = 0;
            *(_DWORD*)(v218 + 16) = v225;
            *(_DWORD*)(v218 + 20) = v226;
            *(_DWORD*)(v218 + 24) = v227;
            *(float*)(v218 + 28) = v18;
            *(_DWORD*)(v218 + 12) = v228;
            v229 = *(_QWORD*)(v14 + 16);
            *(_BYTE*)(v224 + 48) = v154;
            *(_DWORD*)(v224 + 44) = v157;
            *(_DWORD*)(v224 + 56) = v155;
            *(_DWORD*)(v224 + 60) = v156;
            *(_DWORD*)(v224 + 64) = v158;
            *(_QWORD*)v224 = v229;
            LODWORD(v229) = v213 + 2;
            v213 += 4;
            v230 = v9 + 80LL * (unsigned int)v229;
            *(_DWORD*)(v224 + 8) = *(_DWORD*)(v14 + 24);
            v231 = *(_DWORD*)(v214 + 3 * v22);
            v232 = *(_DWORD*)(v214 + v150 + 4);
            v233 = *(_DWORD*)(v214 + v150 + 8);
            v234 = *(_DWORD*)(v214 + v150 + 12);
            *(_QWORD*)(v224 + 32) = 0;
            *(_DWORD*)(v224 + 40) = 0;
            *(_DWORD*)(v224 + 16) = v231;
            *(_DWORD*)(v224 + 20) = v232;
            *(_DWORD*)(v224 + 24) = v233;
            *(float*)(v224 + 28) = v18;
            *(_DWORD*)(v224 + 12) = v234;
            v235 = *(_QWORD*)(v14 + 16);
            *(_BYTE*)(v230 + 48) = v154;
            *(_DWORD*)(v230 + 44) = v157;
            *(_DWORD*)(v230 + 56) = v155;
            *(_DWORD*)(v230 + 60) = v156;
            *(_DWORD*)(v230 + 64) = v158;
            *(_QWORD*)v230 = v235;
            v236 = *(_DWORD*)(v214 + v145 + 12);
            v237 = *(_DWORD*)(v214 + 4 * v22);
            v15 = (__int64)&v215[(unsigned __int64)v22 / 2 +
                                 (unsigned __int64)v22 / 4];
            *(_DWORD*)(v230 + 8) = *(_DWORD*)(v14 + 24);
            *(_DWORD*)(v230 + 12) = v236;
            v238 = *(_DWORD*)(v214 + v145 + 4);
            v239 = *(_DWORD*)(v214 + v145 + 8);
            *(_QWORD*)(v230 + 32) = 0;
            *(_DWORD*)(v230 + 40) = 0;
            *(_DWORD*)(v230 + 16) = v237;
            *(_DWORD*)(v230 + 20) = v238;
            *(_DWORD*)(v230 + 24) = v239;
            *(float*)(v230 + 28) = v18;
          } while (v212 != 0);
          v35 = v213 - 1;
          v169 = v168 & 3;
          if ((v168 & 3) == 0) {
            goto LABEL_94;
          }
        }
        else {
          ++v35;
          v169 = v168 & 3;
          if ((v168 & 3) == 0) {
            goto LABEL_94;
          }
        }
        do {
          v240 = v9 + 80LL * v35;
          v15 += v22;
          ++v35;
          --v169;
          v241 = *(_QWORD*)(v14 + 16);
          *(_BYTE*)(v240 + 48) = v154;
          *(float*)(v240 + 28) = v18;
          *(_DWORD*)(v240 + 44) = v157;
          *(_DWORD*)(v240 + 56) = v155;
          *(_DWORD*)(v240 + 60) = v156;
          *(_DWORD*)(v240 + 64) = v158;
          *(_QWORD*)v240 = v241;
          *(_DWORD*)(v240 + 8) = *(_DWORD*)(v14 + 24);
          v242 = *(_DWORD*)v15;
          v243 = *(_DWORD*)(v15 + 4);
          v244 = *(_DWORD*)(v15 + 8);
          v245 = *(_DWORD*)(v15 + 12);
          *(_QWORD*)(v240 + 32) = 0;
          *(_DWORD*)(v240 + 40) = 0;
          *(_DWORD*)(v240 + 20) = v243;
          *(_DWORD*)(v240 + 24) = v244;
          *(_DWORD*)(v240 + 12) = v245;
          *(_DWORD*)(v240 + 16) = v242;
        } while (v169 != 0);
        goto LABEL_94;
      }
    LABEL_66:
      ++v146;
    } while (v146 != v24);
  LABEL_95:
    v246 = v35 - v11;
    *(_DWORD*)(a2 + 20496) = v35;
    if (v246 == 0) {
      return 1;
    }
    v247 = *v12;
    v248 = v12[1];
    *((_DWORD*)v12 + 36) = v246;
    ++v10;
    v249 = *((_BYTE*)v12 + 150) | ((v29 & 0x10) != 0);
    *((_BYTE*)v12 + 149) = (v29 & 0x20) != 0;
    v250 = v26 * v247;
    v251 = v12[2];
    v252 = v12[3];
    *((_BYTE*)v12 + 150) = v249;
    v11 = v35;
    *v12 = v250;
    v12[1] = v25 * v248;
    v12[2] = v28 * v251;
    v12[3] = v27 * v252;
    if (v10 == 4) {
      return physx_Dy_createFinalizeSolverContacts4(a2 + 20512, (__int64)a3, a4,
                                                    a5, a6, a7, a8, a9);
    }
  }
  v254 = 0;
  v255 = 0;
  v256 = 0;
  v257 = v23 | 4;
  if ((v21 & 0x80) != 0) {
    v257 = 5;
  }
  do {
    if (v254 != 0) {
      v258 = *(unsigned __int8*)(v14 + 46);
      v14 += 64;
      v40 = v258 >= v255;
      v259 = v258 - v255;
      v41 = v259 != 0 && v40;
      LODWORD(v260) = v259 << v257;
      if (v41) {
        v260 = (unsigned int)v260;
      }
      else {
        v260 = 0;
      }
      v15 += v260;
    }
    v255 = *(unsigned __int8*)(v14 + 46);
    if (*(_BYTE*)(v14 + 46) != 0) {
      if ((v256 & 1) != 0) {
        v261 = v22;
      }
      else {
        v261 = 0;
      }
      v15 += v261;
      v262 = v255 - 1;
      if (v255 != 1) {
        if (v255 - 2 >= 7) {
          v263 = v262 & 0xFFFFFFF8;
          do {
            v264 = v15;
            v263 -= 8;
            v15 = v15 + (v22 | 0x80) + v22 + v22 + v22 + v22 + v22 + v22 + v22 -
                  128;
          } while (v263 != 0);
          v15 = v264 + v22 + 2 * v22 + 3 * v22 + 2 * v22;
        }
        for (i = v262 & 7; i != 0; --i) {
          v15 += v22;
        }
      }
      v256 = 1;
    }
    ++v254;
  } while (v254 != v24);
LABEL_120:
  *(_DWORD*)(a2 + 20496) = v11;
  return 1;
}

#pragma GCC visibility pop
