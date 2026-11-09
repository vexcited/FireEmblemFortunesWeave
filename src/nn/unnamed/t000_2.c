#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

__int64 SdkRoutine_47b000(__int64, _QWORD*);
__int64 SdkRoutine_47b780(__int64, _QWORD*);
__int64 SdkRoutine_47bc80(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_47bda0(_QWORD*, __int64, __int64);
__int64 SdkRoutine_47c140(__int64 result, __int64, unsigned __int64,
                          unsigned __int64*);
__int64 SdkRoutine_48a6b0(_QWORD*, __int64, __int64);
__int64 SdkRoutine_48ce20(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_856170(_QWORD);
__int64 SdkRoutine_857150(_QWORD);
__int64 SdkRoutine_858b80(_QWORD);
__int64 SdkRoutine_85d750(_QWORD);
__int64 SdkRoutine_86aa30(_QWORD);

__int64 SdkHr_48d060(_QWORD* a1)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64* v4;
  __int64 result;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;

  v1 = *a1;
  v2 = *(_QWORD*)a1[1];
  v3 = *(_QWORD*)a1[2];
  if (v3 == 2) {
    v6 = SdkRoutine_86aa30(*a1);
    v7 = v2 & 0xFFF;
    if (v6 != 0) {
      v8 = v6;
      if ((v2 & 0xFFF) == 0) {
        return SdkRoutine_48ce20(v1 + 952, v2, v8 + 104);
      }
      result = SdkRoutine_48a6b0((_QWORD*)(v1 + 960), v2, v6 + 104);
      if ((result & 1) != 0) {
        return result;
      }
      SdkRoutine_856170(result);
    }
    v31 = 0;
    v32 = 0;
    v29 = 0;
    v30 = 0;
    v27 = 0;
    v28 = 0;
    v25 = 0;
    v26 = 0;
    v24 = nullptr;
    if (v7 != 0) {
      v9 = SdkRoutine_48a6b0((_QWORD*)(v1 + 960), v2, (__int64)&v24);
      if ((v9 & 1) == 0) {
        goto LABEL_44;
      }
      v10 = v24;
      v24 = nullptr;
      if (v10 == nullptr) {
        return SdkRoutine_47b780(v1 + 960, &v24);
      }
    }
    else {
      SdkRoutine_48ce20(v1 + 952, v2, &v24);
      v10 = v24;
      v24 = nullptr;
      if (v10 == nullptr) {
        return SdkRoutine_47b780(v1 + 960, &v24);
      }
    }
    if ((SdkRoutine_85d750(v1 + 968) & 1) != 0) {
      v12 = *(_QWORD*)(v1 + 976);
      v13 = *(_QWORD**)(v12 + 8);
      *v13 = v10;
      *(_QWORD*)(v12 + 8) = v10;
      v10[1] = v13;
      *v10 = v12;
      SdkRoutine_858b80(v1 + 968);
    }
    else {
      v21 = *(_QWORD*)(v1 + 992);
      *v10 = v21;
      v22 = v21;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(v1 + 992), (unsigned __int64*)&v22,
          (unsigned __int64)v10, memory_order_release, memory_order_relaxed);
      if (v22 != v21) {
        v23 = v22;
        do {
          *v10 = v22;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(v1 + 992), (unsigned __int64*)&v23,
              (unsigned __int64)v10, memory_order_release,
              memory_order_relaxed);
          v20 = v23 == v22;
          v22 = v23;
        } while (!v20);
      }
    }
    return SdkRoutine_47b780(v1 + 960, &v24);
  }
  if (v3 != 1) {
    result = SdkRoutine_857150(a1);
  LABEL_43:
    v9 = SdkRoutine_856170(result);
  LABEL_44:
    SdkRoutine_856170(v9);
    __udf(0);
  }
  v4 = (unsigned __int64*)SdkRoutine_86aa30(*a1);
  if (v4 == nullptr) {
    v35 = 0;
    v36 = 0;
    v33 = 0;
    v34 = 0;
    v31 = 0;
    v32 = 0;
    v29 = 0;
    v30 = 0;
    v27 = 0;
    v28 = 0;
    v25 = 0;
    v26 = 0;
    v24 = nullptr;
    if ((v2 & 0xFFF) != 0) {
      if ((v2 & 0x3FF) == 0) {
        SdkRoutine_47c140(*(_QWORD*)(v1 + 80), v1 + 88, v2,
                          (unsigned __int64*)&v24);
        result = SdkRoutine_47b000(v1 + 128, &v24);
        v14 = v24;
        v24 = nullptr;
        if (v14 == nullptr) {
          return result;
        }
        goto LABEL_28;
      }
      v11 = SdkRoutine_47bda0((_QWORD*)(v1 + 128), v2, (__int64)&v24);
      if ((v11 & 1) == 0) {
        SdkRoutine_856170(v11);
        return SdkRoutine_48ce20(v1 + 952, v2, v8 + 104);
      }
    }
    else {
      SdkRoutine_47bc80(v1 + 72, v2, &v24);
    }
    result = SdkRoutine_47b000(v1 + 128, &v24);
    v14 = v24;
    v24 = nullptr;
    if (v14 == nullptr) {
      return result;
    }
  LABEL_28:
    result = SdkRoutine_85d750(v1 + 88);
    if ((result & 1) != 0) {
      v15 = *(_QWORD*)(v1 + 96);
      v16 = *(_QWORD**)(v15 + 8);
      *v16 = v14;
      *(_QWORD*)(v15 + 8) = v14;
      v14[1] = v16;
      *v14 = v15;
      return SdkRoutine_858b80(v1 + 88);
    }
    else {
      v17 = *(_QWORD*)(v1 + 112);
      *v14 = v17;
      v18 = v17;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(v1 + 112), (unsigned __int64*)&v18,
          (unsigned __int64)v14, memory_order_release, memory_order_relaxed);
      if (v18 != v17) {
        v19 = v18;
        do {
          *v14 = v18;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(v1 + 112), (unsigned __int64*)&v19,
              (unsigned __int64)v14, memory_order_release,
              memory_order_relaxed);
          v20 = v19 == v18;
          v18 = v19;
        } while (!v20);
      }
    }
    return result;
  }
  if ((v2 & 0xFFF) == 0) {
    return SdkRoutine_47bc80(v1 + 72, v2, v4);
  }
  if ((v2 & 0x3FF) == 0) {
    return SdkRoutine_47c140(*(_QWORD*)(v1 + 80), v1 + 88, v2, v4);
  }
  result = SdkRoutine_47bda0((_QWORD*)(v1 + 128), v2, (__int64)v4);
  if ((result & 1) == 0) {
    goto LABEL_43;
  }
  return result;
}

#pragma GCC visibility pop
