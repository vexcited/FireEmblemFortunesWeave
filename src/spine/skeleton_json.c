#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19e10();
__int64 __assert_fail(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0(_QWORD);
extern __int64 (*GameData_1f51898[])();
extern __int64* GameData_21322b8[2];
extern __int64* GameData_2132b08[13];
__int64 SkeletonJson_Destructor(__int64 a1);
__int64 GameRoutine_4e860(_QWORD);
_QWORD* SkeletonJson_3e980(_QWORD* result);

__int64 SkeletonJson_Destructor(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  *(_QWORD*)a1 = GameData_2132b08[0] + 2;
  v2 = *(_QWORD*)(a1 + 24);
  if ((int)v2 >= 1) {
    v3 = *(_QWORD*)(a1 + 24) & 0x7FFFFFFFLL;
    while (1) {
      v5 = v3 - 1;
      if (v2 <= v3 - 1) {
        goto LABEL_24;
      }
      v6 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v5);
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
        v2 = *(_QWORD*)(a1 + 24);
      }
      if (v2 <= v5) {
        break;
      }
      *(_QWORD*)(a1 + 24) = --v2;
      if (v2 > v5) {
        v7 = v3;
        do {
          v8 = (_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v7);
          v9 = *(v8 - 1);
          *(v8 - 1) = *v8;
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v7) = v9;
          v2 = *(_QWORD*)(a1 + 24);
        } while (v7++ < v2);
      }
      if (v3-- <= 1) {
        goto LABEL_14;
      }
    }
    __assert_fail("inIndex < _size",
                  "/Program/Externals/Spine/include\\spine/Vector.h", 126,
                  "removeAt");
  LABEL_24:
    __assert_fail("inIndex < _size",
                  "/Program/Externals/Spine/include\\spine/Vector.h", 162,
                  "operator[]");
    __udf(0);
  }

LABEL_14:
  if (*(_BYTE*)(a1 + 52) == 1) {
    v11 = *(_QWORD*)(a1 + 8);
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
  }
  *(_QWORD*)(a1 + 56) = GameData_21322b8[0] + 2;
  v12 = *(_QWORD*)(a1 + 72);
  if (v12 != 0 && (*(_BYTE*)(a1 + 80) & 1) != 0) {
    v13 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v13 +
                                                          40LL))(
        v13, v12, "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0(a1 + 56);
  v14 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 16) = GameData_1f51898;
  *(_QWORD*)(a1 + 24) = 0;
  if (v14 != 0) {
    v15 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v15 +
                                                          40LL))(
        v15, v14, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0(a1 + 16);
  return spine_SpineObject_Destroy_SpineObject_4e8a0(a1);
}

_QWORD* SkeletonJson_3e980(_QWORD* result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v10;

  v1 = result[1];
  if ((int)v1 >= 1) {
    v2 = result[1] & 0x7FFFFFFFLL;
    v3 = result;
    while (1) {
      v5 = v2 - 1;
      if (v1 <= v2 - 1) {
        break;
      }
      result = *(_QWORD**)(v3[3] + 8 * v5);
      if (result != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
        v1 = v3[1];
      }
      if (v1 <= v5) {
        __assert_fail("inIndex < _size",
                      "/Program/Externals/Spine/include\\spine/Vector.h", 126,
                      "removeAt");
        break;
      }
      v3[1] = --v1;
      if (v1 > v5) {
        v6 = v2;
        do {
          v7 = (_QWORD*)(v3[3] + 8 * v6);
          v8 = *(v7 - 1);
          *(v7 - 1) = *v7;
          *(_QWORD*)(v3[3] + 8 * v6) = v8;
          v1 = v3[1];
        } while (v6++ < v1);
      }
      if (v2-- <= 1) {
        return result;
      }
    }
    v10 = __assert_fail("inIndex < _size",
                        "/Program/Externals/Spine/include\\spine/Vector.h", 162,
                        "operator[]");
    SkeletonJson_Destructor(v10);
    return (_QWORD*)GameRoutine_4e860(v10);
  }
  return result;
}

#pragma GCC visibility pop
