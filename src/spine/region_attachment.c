#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __assert_fail(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 spine_Bone_getD(_QWORD);
__int64 spine_Sequence_apply(_QWORD, _QWORD, _QWORD);
__int64 spine_Slot_getBone(_QWORD);
float spine_Bone_getA(_QWORD);
float spine_Bone_getB(_QWORD);
float spine_Bone_getC(_QWORD);
float spine_Bone_getWorldX(void);
float spine_Bone_getWorldY(_QWORD);
float RegionAttachment_1bbc0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                             __int64 a5);
float RegionAttachment_1bbc0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                             __int64 a5)
{
  __int64 v6;
  __int64 v9;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  float* v21;
  float* v22;
  float v23;
  float v24;
  float* v25;
  __int64 v26;
  float* v27;
  float v28;
  float v29;
  __int64 v30;
  float* v31;
  float v32;
  float v33;
  float result;

  if (*(_QWORD*)(a3 + 8) < (unsigned __int64)(a4 + 8)) {
    __assert_fail("worldVertices.size() >= (offset + 8)",
                  "/Program/Externals/Spine/src/spine/RegionAttachment.cpp",
                  131, "computeWorldVertices");
    __udf(0);
  }
  v6 = a1[25];
  v9 = *(_QWORD*)(a3 + 24);
  if (v6 != 0) {
    spine_Sequence_apply(v6, a2, a1);
  }
  v11 = spine_Slot_getBone(a2);
  v12 = spine_Bone_getWorldX();
  v13 = spine_Bone_getWorldY(v11);
  v14 = spine_Bone_getA(v11);
  v15 = spine_Bone_getB(v11);
  v16 = spine_Bone_getC(v11);
  spine_Bone_getD(v11);
  if (a1[10] >= 8u) {
    v18 = a1[12];
    v19 = *(float*)(v18 + 24);
    v20 = *(float*)(v18 + 28);
    v21 = (float*)(v9 + 4 * a4);
    *v21 = v12 + (float)((float)(v15 * v20) + (float)(v19 * v14));
    v21[1] = v13 + (float)((float)(v17 * v20) + (float)(v19 * v16));
    if (a1[10] >= 2u) {
      v22 = (float*)a1[12];
      v23 = *v22;
      v24 = v22[1];
      v25 = (float*)(v9 + 4 * (a5 + a4));
      *v25 = v12 + (float)((float)(v15 * v24) + (float)(v23 * v14));
      v25[1] = v13 + (float)((float)(v17 * v24) + (float)(v23 * v16));
      if (a1[10] >= 4u) {
        v26 = a1[12];
        v27 = (float*)(v9 + 4 * (a5 + a4) + 4 * a5);
        v28 = *(float*)(v26 + 8);
        v29 = *(float*)(v26 + 12);
        *v27 = v12 + (float)((float)(v15 * v29) + (float)(v28 * v14));
        v27[1] = v13 + (float)((float)(v17 * v29) + (float)(v28 * v16));
        if (a1[10] >= 6u) {
          v30 = a1[12];
          v31 = &v27[a5];
          v32 = *(float*)(v30 + 16);
          v33 = *(float*)(v30 + 20);
          result = v13 + (float)((float)(v17 * v33) + (float)(v32 * v16));
          *v31 = v12 + (float)((float)(v15 * v33) + (float)(v32 * v14));
          v31[1] = result;
          return result;
        }
      }
    }
  }
  __assert_fail("inIndex < _size",
                "/Program/Externals/Spine/include\\spine/Vector.h", 162,
                "operator[]");
  __udf(0);
}

#pragma GCC visibility pop
