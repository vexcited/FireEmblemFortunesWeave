#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19e10();
__int64 __assert_fail(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0(_QWORD);
extern __int64 (*GameData_1f50fd8[])();
extern __int64 (*GameData_1f51538[])();
extern __int64 (*GameData_1f51570[])();
extern __int64 (*GameData_1f515a8[])();
extern __int64* GameData_2132a40[6];
extern __int64* GameData_2132a48[5];
extern __int64* GameData_2132a68;
__int64 Skeleton_Destructor(_QWORD* a1);
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0_alt1(_QWORD*) __asm__(
    "spine_SpineObject_Destroy_SpineObject_4e8a0");

__int64 Skeleton_Destructor(_QWORD* a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  bool v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  _QWORD* v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;

  *a1 = GameData_2132a40[0] + 2;
  v2 = a1[3];
  if ((int)v2 >= 1) {
    v3 = a1[3] & 0x7FFFFFFFLL;
    while (1) {
      v5 = v3 - 1;
      if (v2 <= v3 - 1) {
        goto LABEL_82;
      }
      v6 = *(_QWORD*)(a1[5] + 8 * v5);
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
        v2 = a1[3];
      }
      if (v2 <= v5) {
        break;
      }
      a1[3] = --v2;
      if (v2 > v5) {
        v7 = v3;
        do {
          v8 = (_QWORD*)(a1[5] + 8 * v7);
          v9 = *(v8 - 1);
          *(v8 - 1) = *v8;
          *(_QWORD*)(a1[5] + 8 * v7) = v9;
          v2 = a1[3];
          v10 = v7++ >= v2;
        } while (!v10);
      }
      v4 = v3-- > 1;
      if (!v4) {
        goto LABEL_14;
      }
    }
  LABEL_81:
    __assert_fail("inIndex < _size",
                  "/Program/Externals/Spine/include\\spine/Vector.h", 126,
                  "removeAt");
  LABEL_82:
    __assert_fail("inIndex < _size",
                  "/Program/Externals/Spine/include\\spine/Vector.h", 162,
                  "operator[]");
    __udf(0);
  }
LABEL_14:
  v11 = a1[7];
  if ((int)v11 >= 1) {
    v12 = a1[7] & 0x7FFFFFFFLL;
    do {
      v13 = v12 - 1;
      if (v11 <= v12 - 1) {
        goto LABEL_82;
      }
      v14 = *(_QWORD*)(a1[9] + 8 * v13);
      if (v14 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
        v11 = a1[7];
      }
      if (v11 <= v13) {
        goto LABEL_81;
      }
      a1[7] = --v11;
      if (v11 > v13) {
        v15 = v12;
        do {
          v16 = (_QWORD*)(a1[9] + 8 * v15);
          v17 = *(v16 - 1);
          *(v16 - 1) = *v16;
          *(_QWORD*)(a1[9] + 8 * v15) = v17;
          v11 = a1[7];
          v10 = v15++ >= v11;
        } while (!v10);
      }
      v4 = v12-- > 1;
    } while (v4);
  }
  v18 = a1[15];
  if ((int)v18 >= 1) {
    v19 = a1[15] & 0x7FFFFFFFLL;
    do {
      v20 = v19 - 1;
      if (v18 <= v19 - 1) {
        goto LABEL_82;
      }
      v21 = *(_QWORD*)(a1[17] + 8 * v20);
      if (v21 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
        v18 = a1[15];
      }
      if (v18 <= v20) {
        goto LABEL_81;
      }
      a1[15] = --v18;
      if (v18 > v20) {
        v22 = v19;
        do {
          v23 = (_QWORD*)(a1[17] + 8 * v22);
          v24 = *(v23 - 1);
          *(v23 - 1) = *v23;
          *(_QWORD*)(a1[17] + 8 * v22) = v24;
          v18 = a1[15];
          v10 = v22++ >= v18;
        } while (!v10);
      }
      v4 = v19-- > 1;
    } while (v4);
  }
  v25 = a1[19];
  if ((int)v25 >= 1) {
    v26 = a1[19] & 0x7FFFFFFFLL;
    do {
      v27 = v26 - 1;
      if (v25 <= v26 - 1) {
        goto LABEL_82;
      }
      v28 = *(_QWORD*)(a1[21] + 8 * v27);
      if (v28 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28);
        v25 = a1[19];
      }
      if (v25 <= v27) {
        goto LABEL_81;
      }
      a1[19] = --v25;
      if (v25 > v27) {
        v29 = v26;
        do {
          v30 = (_QWORD*)(a1[21] + 8 * v29);
          v31 = *(v30 - 1);
          *(v30 - 1) = *v30;
          *(_QWORD*)(a1[21] + 8 * v29) = v31;
          v25 = a1[19];
          v10 = v29++ >= v25;
        } while (!v10);
      }
      v4 = v26-- > 1;
    } while (v4);
  }
  v32 = a1[23];
  if ((int)v32 >= 1) {
    v33 = a1[23] & 0x7FFFFFFFLL;
    do {
      v34 = v33 - 1;
      if (v32 <= v33 - 1) {
        goto LABEL_82;
      }
      v35 = *(_QWORD*)(a1[25] + 8 * v34);
      if (v35 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v35 + 8LL))(v35);
        v32 = a1[23];
      }
      if (v32 <= v34) {
        goto LABEL_81;
      }
      a1[23] = --v32;
      if (v32 > v34) {
        v36 = v33;
        do {
          v37 = (_QWORD*)(a1[25] + 8 * v36);
          v38 = *(v37 - 1);
          *(v37 - 1) = *v37;
          *(_QWORD*)(a1[25] + 8 * v36) = v38;
          v32 = a1[23];
          v10 = v36++ >= v32;
        } while (!v10);
      }
      v4 = v33-- > 1;
    } while (v4);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0_alt1(a1 + 31);
  a1[26] = GameData_2132a68 + 2;
  a1[27] = 0;
  v39 = a1[29];
  if (v39 != 0) {
    v40 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v40 +
                                                          40LL))(
        v40, v39, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0_alt1(a1 + 26);
  v41 = a1[25];
  a1[22] = GameData_1f515a8;
  a1[23] = 0;
  if (v41 != 0) {
    v42 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v42 +
                                                          40LL))(
        v42, v41, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0_alt1(a1 + 22);
  v43 = a1[21];
  a1[18] = GameData_1f51570;
  a1[19] = 0;
  if (v43 != 0) {
    v44 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v44 +
                                                          40LL))(
        v44, v43, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0_alt1(a1 + 18);
  v45 = a1[17];
  a1[14] = GameData_1f51538;
  a1[15] = 0;
  if (v45 != 0) {
    v46 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v46 +
                                                          40LL))(
        v46, v45, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0_alt1(a1 + 14);
  v47 = GameData_2132a48[0] + 2;
  a1[10] = GameData_2132a48[0] + 2;
  a1[11] = 0;
  v48 = a1[13];
  if (v48 != 0) {
    v49 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v49 +
                                                          40LL))(
        v49, v48, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0_alt1(a1 + 10);
  v50 = a1[9];
  a1[6] = v47;
  a1[7] = 0;
  if (v50 != 0) {
    v51 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v51 +
                                                          40LL))(
        v51, v50, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0_alt1(a1 + 6);
  v52 = a1[5];
  a1[2] = GameData_1f50fd8;
  a1[3] = 0;
  if (v52 != 0) {
    v53 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v53 +
                                                          40LL))(
        v53, v52, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0_alt1(a1 + 2);
  return spine_SpineObject_Destroy_SpineObject_4e8a0_alt1(a1);
}

#pragma GCC visibility pop
