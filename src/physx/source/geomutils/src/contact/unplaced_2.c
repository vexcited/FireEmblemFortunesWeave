#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void physx_Gu_ConvexShape_support(PSEUDO_X8, float*,
                                                             float*);
__int64 physx_Gu_ConvexShape_contactFace(float*, float*, float*, float*,
                                         __int64);
__int64 physx_Gu_makeConvexShape(__int64, __int64, __int64);
bool physx_source_geomutils_src_contact_4685c0(__int64 a1, __int64 a2,
                                               float* a3, __int64 a4, float* a5,
                                               __int64 a6, __int64 a7);

bool physx_source_geomutils_src_contact_4685c0(__int64 a1, __int64 a2,
                                               float* a3, __int64 a4, float* a5,
                                               __int64 a6, __int64 a7)
{
  float v7;
  float v8;
  float v9;
  float v10;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  unsigned int v24;
  float v25;
  float v26;
  float v27;
  __int64 v28;
  __int64 v29;
  _BOOL8 result;
  __int64 v31;
  float* v32;
  float* v33;
  float* v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float* v43;
  float v44;
  float v45;
  float* v46;
  float v47;
  _DWORD* v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  int* v52;
  _BYTE* v53;
  int v54;
  __int64 v55;
  __int64 v56;
  int v57;
  int v58;
  __int64 v59;
  __int64 v60;
  int v61;
  int v62;
  float* v63;
  __int64 v64;
  __int64 v65;
  int v66;
  float v67;
  float v68;
  float v69;
  float v70;
  _BYTE v71[12];
  float v72[3];
  _BYTE v73[36];
  struct {
    float v74;
    float v75;
    float v76;
  } v74_;
  float v77[19];
  _DWORD v78[3];
  int v79;
  float v80[3];
  struct {
    float v81[2];
    float v82;
    char gap240_[88];
    float v83;
    float v84;
  } v81_;

  v8 = *a3;
  v7 = a3[1];
  v10 = a3[2];
  v9 = a3[3];
  v13 = v9 + v9;
  v14 = (float)(v9 * (float)(v9 + v9)) + -0x1.0000000000000p+0f;
  v15 = (float)(v8 + v8) * v10;
  v81_.v83 = (float)(v8 + v8) * v7;
  v16 = v81_.v83 + (float)(v10 * (float)(v9 + v9));
  v17 = a3[5];
  v69 = v16;
  v81_.v84 = a3[4];
  v67 = a3[6];
  v68 = v17 * v16;
  physx_Gu_makeConvexShape(a2, a4, (__int64)v77);
  v18 = v14 + (float)(v8 * (float)(v8 + v8));
  v19 = -v7;
  v20 = v15 - (float)(v7 * v13);
  v74_.v76 = -(float)(v15 + (float)(v19 * v13));
  v21 = (float)(v68 + (float)(v81_.v84 * v18)) + (float)(v67 * v20);
  v81_.v84 = *a5;
  v22 = v21;
  v74_.v74 = -v18;
  v74_.v75 = -(float)(v81_.v83 + (float)(v10 * v13));
  physx_Gu_ConvexShape_support((void*)(v81_.v81), v77, &v74_.v74);
  v23 = (float)((float)((float)(PSEUDO_UNFUSED(v69 * v81_.v81[1])) +
                        (float)(v81_.v81[0] * v18)) +
                (float)(v81_.v82 * v20)) -
        v22;
  if (v23 >= v81_.v84) {
    return *(_DWORD*)(a7 + 20480) != 0;
  }
  v24 = physx_Gu_ConvexShape_contactFace(v77, &v74_.v74, v81_.v81, v80,
                                         (__int64)v78);
  v25 = v74_.v75;
  if (v24 == 0) {
    v26 = v74_.v74;
    v27 = v74_.v76;
    v70 = v23;
    v28 = 1;
    v72[0] = (float)(PSEUDO_UNFUSED((float)(v23 * v74_.v74) *
                                    0x1.0000000000000p-1f)) +
             v81_.v81[0];
    v72[1] = (float)(PSEUDO_UNFUSED((float)(v23 * v74_.v75) *
                                    0x1.0000000000000p-1f)) +
             v81_.v81[1];
    v72[2] = (float)(PSEUDO_UNFUSED((float)(v23 * v74_.v76) *
                                    0x1.0000000000000p-1f)) +
             v81_.v82;
    goto LABEL_11;
  }
  v26 = v74_.v74;
  v27 = v74_.v76;
  v28 = v24;
  if (v24 == 1) {
    v29 = 0;
  LABEL_10:
    v43 = (float*)&v78[3 * v29];
    v44 = v43[1];
    v45 = v43[2];
    v46 = &v72[3 * v29];
    v47 = (float)((float)((float)(PSEUDO_UNFUSED(v69 * v44)) +
                          (float)(*v43 * v18)) +
                  (float)(v45 * v20)) -
          v22;
    *v46 = *v43 +
           (float)(PSEUDO_UNFUSED((float)(v26 * v47) * 0x1.0000000000000p-1f));
    v46[1] =
        v44 +
        (float)(PSEUDO_UNFUSED((float)(v25 * v47) * 0x1.0000000000000p-1f));
    v46[2] =
        v45 +
        (float)(PSEUDO_UNFUSED((float)(v47 * v27) * 0x1.0000000000000p-1f));
    *(float*)&v71[4 * v29 - 4] = v47;
    goto LABEL_11;
  }
  v31 = 0;
  v32 = (float*)&v79;
  v33 = (float*)v71;
  v34 = (float*)v73;
  do {
    v35 = *(v32 - 3);
    v36 = *(v32 - 2);
    v37 = *(v32 - 1);
    v38 = *v32;
    v31 -= 2;
    v39 = (float)((float)((float)(PSEUDO_UNFUSED(v69 * v36)) +
                          (float)(v35 * v18)) +
                  (float)(v37 * v20)) -
          v22;
    v40 = v32[1];
    v41 = v32[2];
    v32 += 6;
    *(v34 - 3) =
        v35 +
        (float)(PSEUDO_UNFUSED((float)(v26 * v39) * 0x1.0000000000000p-1f));
    *(v34 - 2) =
        v36 +
        (float)(PSEUDO_UNFUSED((float)(v25 * v39) * 0x1.0000000000000p-1f));
    v42 = (float)((float)((float)(PSEUDO_UNFUSED(v69 * v40)) +
                          (float)(v38 * v18)) +
                  (float)(v41 * v20)) -
          v22;
    *(v33 - 1) = v39;
    *v33 = v42;
    v33 += 2;
    *(v34 - 1) =
        v37 +
        (float)(PSEUDO_UNFUSED((float)(v39 * v27) * 0x1.0000000000000p-1f));
    *v34 = v38 +
           (float)(PSEUDO_UNFUSED((float)(v26 * v42) * 0x1.0000000000000p-1f));
    v34[1] =
        v40 +
        (float)(PSEUDO_UNFUSED((float)(v25 * v42) * 0x1.0000000000000p-1f));
    v34[2] =
        v41 +
        (float)(PSEUDO_UNFUSED((float)(v42 * v27) * 0x1.0000000000000p-1f));
    v34 += 6;
  } while (-(__int64)(v24 & 0xFFFFFFFE) != v31);
  v29 = -v31;
  if ((v24 & 1) != 0) {
    goto LABEL_10;
  }
LABEL_11:
  v48 = (_DWORD*)(a7 + 20480);
  v49 = *(unsigned int*)(a7 + 20480);
  if (v28 == 1) {
    v50 = 0;
    result = true;
  LABEL_19:
    if (v49 <= 0xFF) {
      v62 = *(_DWORD*)&v71[4 * v50 - 4];
      v63 = &v72[3 * v50];
      *v48 = v49 + 1;
      v64 = a7 + 80 * v49;
      v65 = *(_QWORD*)v63;
      *(float*)v64 = v26;
      *(float*)(v64 + 4) = v25;
      v66 = *((_DWORD*)v63 + 2);
      *(float*)(v64 + 8) = v27;
      *(_DWORD*)(v64 + 12) = v62;
      *(_DWORD*)(v64 + 52) = -1;
      *(_QWORD*)(v64 + 16) = v65;
      *(_DWORD*)(v64 + 24) = v66;
    }
    return result;
  }
  v51 = 0;
  v52 = (int*)v71;
  v53 = v73;
  do {
    if (v49 <= 0xFF) {
      v54 = *((_DWORD*)v53 - 1);
      v55 = a7 + 80 * v49;
      v56 = *(_QWORD*)(v53 - 12);
      *v48 = ++v49;
      *(float*)v55 = v26;
      *(float*)(v55 + 4) = v25;
      *(_DWORD*)(v55 + 52) = -1;
      *(_QWORD*)(v55 + 16) = v56;
      *(_DWORD*)(v55 + 24) = v54;
      v57 = *(v52 - 1);
      *(float*)(v55 + 8) = v27;
      *(_DWORD*)(v55 + 12) = v57;
      if (v49 <= 0xFF) {
        v58 = *((_DWORD*)v53 + 2);
        v59 = a7 + 80 * v49;
        v60 = *(_QWORD*)v53;
        *v48 = ++v49;
        *(float*)v59 = v26;
        *(float*)(v59 + 4) = v25;
        *(_DWORD*)(v59 + 52) = -1;
        *(_QWORD*)(v59 + 16) = v60;
        *(_DWORD*)(v59 + 24) = v58;
        v61 = *v52;
        *(float*)(v59 + 8) = v27;
        *(_DWORD*)(v59 + 12) = v61;
      }
    }
    v51 -= 2;
    v52 += 2;
    v53 += 24;
  } while (-(__int64)((unsigned int)v28 & 0xFFFFFFFE) != v51);
  v50 = -v51;
  result = true;
  if ((v28 & 1) != 0) {
    goto LABEL_19;
  }
  return result;
}

#pragma GCC visibility pop
