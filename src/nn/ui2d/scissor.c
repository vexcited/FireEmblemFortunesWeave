#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_58c910(__int64, _BYTE*, __int64);
__int64 GameRoutine_5fdf40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Pane_58f460(__int64 result, __int64, __int64);
extern __int64 (*nn_ui2d_Scissor_vtable[])();
__int64 Scissor_597560(_QWORD* a1, _BYTE* a2, __int64 a3);
__int64 Scissor_Unknown27(__int64 result, __int64 a2, __int64 a3);

__int64 Scissor_597560(_QWORD* a1, _BYTE* a2, __int64 a3)
{
  __int64 result;

  result = GameRoutine_58c910((__int64)a1, a2, a3);
  *a1 = nn_ui2d_Scissor_vtable;
  return result;
}

__int64 Scissor_Unknown27(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int128 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  int v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  bool v41;
  float v42;
  float v43;
  float v44;
  float v45;
  bool v46;
  __int64 v47;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int128 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;

  if ((*(_BYTE*)(result + 88) & 1) == 0 || *(_BYTE*)(result + 90) == 0) {
    return Pane_58f460(result, a2, a3);
  }
  v5 = *(_OWORD*)(result + 112);
  v6 = (float)*(int*)(a2 + 224);
  v7 = *(float*)(a2 + 264);
  v8 = *(float*)(a2 + 268);
  v9 = *(float*)(a2 + 256);
  v10 = *(float*)(a2 + 260);
  v11 = *(float*)(result + 140);
  v12 = (float)*(int*)(a2 + 228);
  v13 = *((float*)&v5 + 3);
  if (*(_QWORD*)(a2 + 224) == 0) {
    v12 = *(float*)(a2 + 268);
    v6 = *(float*)(a2 + 264);
  }
  if ((*(_BYTE*)(a2 + 404) & 0x10) != 0) {
    v13 = *((float*)&v5 + 3) - *(float*)(a2 + 392);
    v11 = v11 - *(float*)(a2 + 396);
    v14 = 1.0;
  }
  else {
    v14 = 1.0;
    if ((*(_BYTE*)(a2 + 404) & 0x80) != 0) {
      v15 = *(_QWORD*)(a2 + 192);
      if (v15 != 0) {
        v14 = *(float*)(v15 + 40) / v6;
        v13 = *((float*)&v5 + 3) / v14;
        v11 = v11 / (float)(*(float*)(v15 + 44) / v12);
      }
    }
  }
  v16 = *(unsigned __int8*)(result + 91);
  v17 = v16 & 3;
  v18 = (v16 >> 2) & 3;
  v19 = (float)((float)(*(float*)&v5 * *(float*)(result + 80)) / v14) * 0.5;
  v20 =
      (float)((float)(*(float*)(result + 132) * *(float*)(result + 84)) / v14) *
      0.5;
  v21 = fabsf(v19);
  v22 = v13 - v19;
  v23 = v13 + v19;
  v24 = fabsf(v20);
  if (v17 == 1) {
    v13 = v23;
  }
  v25 = v11 + v20;
  v26 = v11 - v20;
  v27 = v21 + v21;
  v28 = v24 + v24;
  if (v17 == 2) {
    v13 = v22;
  }
  if (v18 == 1) {
    v11 = v26;
  }
  v29 = v13 - (float)(v27 * 0.5);
  if (v18 == 2) {
    v11 = v25;
  }
  v30 = v8 / v12;
  if ((*(_BYTE*)(a2 + 404) & 0x18) != 0) {
    v11 = -v11;
  }
  v31 = v7 / v6;
  v32 = v9 + (float)((float)(v29 + (float)(v6 * 0.5)) * (float)(v7 / v6));
  v33 = v31 * v27;
  v34 =
      v10 +
      (float)((float)((float)(v11 - (float)(v28 * 0.5)) + (float)(v12 * 0.5)) *
              v30);
  v35 = v30 * v28;
  if (v32 >= v9) {
    v36 = v32;
  }
  else {
    v36 = *(float*)(a2 + 256);
  }
  if (v32 >= v9) {
    v37 = v33;
  }
  else {
    v37 = v33 - (float)(v9 - v32);
  }
  v38 = v7 + v9;
  v39 = (float)(v7 + v9) - v36;
  if ((float)(v36 + v37) <= v38) {
    v40 = v37;
  }
  else {
    v40 = v39;
  }
  v41 = v34 < v10;
  v42 = v35 - (float)(v10 - v34);
  if (v34 >= v10) {
    v43 = v34;
  }
  else {
    v43 = *(float*)(a2 + 260);
  }
  v44 = v8 + v10;
  if (!v41) {
    v42 = v35;
  }
  v45 = v44 - v43;
  if ((float)(v43 + v42) <= v44) {
    v45 = v42;
  }
  v46 = v43 < v44 && v36 < v38;
  if (v46 && v40 > 0.0 && v45 > 0.0) {
    v63 = v3;
    v64 = v4;
    v47 = result;
    HIDWORD(v61) = 0;
    v62 = 0;
    LODWORD(v60) = (int)(float)(v36 + 0.5);
    HIDWORD(v60) = (int)(float)(v43 + 0.5);
    LODWORD(v61) = (int)(float)((float)(v36 + v40) + 0.5) - v60;
    *(_QWORD*)((char*)&v61 + 4) =
        (unsigned int)((int)(float)((float)(v43 + v45) + 0.5) - HIDWORD(v60));
    v50 = *(_QWORD*)(a2 + 312);
    v56 = *(_QWORD*)(a2 + 304);
    v57 = v50;
    v51 = *(_QWORD*)(a2 + 328);
    v58 = *(_QWORD*)(a2 + 320);
    v59 = v51;
    GameRoutine_5fdf40(a3, 0, 1, &v60);
    v52 = v61;
    *(_QWORD*)(a2 + 304) = v60;
    *(_QWORD*)(a2 + 312) = v52;
    v53 = v62;
    *(_QWORD*)(a2 + 320) = *((_QWORD*)&v61 + 1);
    *(_QWORD*)(a2 + 328) = v53;
    Pane_58f460(v47, a2, a3);
    result = GameRoutine_5fdf40(a3, 0, 1, &v56);
    v54 = v57;
    *(_QWORD*)(a2 + 304) = v56;
    *(_QWORD*)(a2 + 312) = v54;
    v55 = v59;
    *(_QWORD*)(a2 + 320) = v58;
    *(_QWORD*)(a2 + 328) = v55;
  }
  return result;
}

#pragma GCC visibility pop
