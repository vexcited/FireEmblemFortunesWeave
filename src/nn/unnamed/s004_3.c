#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 (*SdkData_1045108)(_QWORD*, __int64);
extern __int64 (*SdkData_1045110)(_QWORD*);
extern __int64 (*SdkData_1045120)(_QWORD*, __int64);
extern __int64 (*SdkData_1045128)(__int64, _QWORD*);
extern char SdkData_1046f98;
extern _UNKNOWN SdkData_1046f9c;
extern __int64 SdkData_1046fa0;
extern __int64 SdkData_1046fb8;
extern _UNKNOWN SdkData_e7a968;
__int64 SdkRoutine_6666a0(__int64);
__int64 SdkRoutine_683090(__int64, __int64);
__int64 SdkRoutine_6831f0(__int64, __int64);
__int64 SdkRoutine_6b6810(_QWORD*, __int64);
__int64 SdkRoutine_858b60(_QWORD);
__int64 SdkRoutine_858b80(_QWORD);
__int64 SdkRoutine_85d430(_QWORD);
__int64 SdkRoutine_85d490(_QWORD);
__int64 SdkRoutine_86a3a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86a640(_QWORD);
__int64 SdkRoutine_8761c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_876eb0(_QWORD);
__int64 SdkRoutine_876ee0(_QWORD);
__int64 SdkRoutine_876ef0(_QWORD, _QWORD);
__int64 SdkRoutine_876f00(_QWORD, _QWORD);
__int64 SdkRoutine_878660(_QWORD);

__int64 SdkHr_6a5330(__int64 a1, __int64 a2, __int64 a3)
{
  if (a2 != 0) {
    SdkRoutine_683090(a1, a2);
  }
  if (a3 != 0) {
    SdkRoutine_6831f0(a1, a3);
  }
  return SdkRoutine_6666a0(a1);
}

__int64 SdkHr_6b0240(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                     int a5)
{
  __int64 result;
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
  unsigned int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD v47[8];

  v45 = 0;
  v46 = 0;
  v43 = 0;
  v44 = 0;
  v41 = 0;
  v42 = 0;
  v39 = 0;
  v40 = 0;
  v37 = 0;
  v38 = 0;
  v35 = 0;
  v36 = 0;
  v33 = 0;
  v34 = 0;
  v31 = 0;
  v32 = 0;
  v29 = 0;
  v30 = 0;
  v28 = 0;
  result = SdkRoutine_86a3a0(&v46, &v45, &v29, &v28, a3);
  if ((_DWORD)result == 0) {
    v27 = 0;
    if ((unsigned int)SdkRoutine_8761c0(0, a3, v46, &v27) != 0) {
      return 98547;
    }
    v10 = v27;
    memset(v47, 0, sizeof(v47));
    SdkData_1045108(v47, a2);
    SdkData_1045110(v47);
    SdkData_1045120(v47, v10);
    if ((unsigned __int8)SdkData_1045128(a1, v47) == 0) {
      SdkRoutine_86a640(v27);
      return 98547;
    }
    v11 = v41;
    v12 = v42;
    v13 = v43;
    v14 = v44;
    result = 0;
    *(_QWORD*)(a1 + 256) = a2;
    *(_DWORD*)(a1 + 264) = a5;
    *(_QWORD*)(a1 + 384) = v12;
    *(_QWORD*)(a1 + 392) = v13;
    v15 = v37;
    v16 = v38;
    v17 = v39;
    v18 = v40;
    *(_QWORD*)(a1 + 400) = v14;
    *(_QWORD*)(a1 + 352) = v16;
    *(_QWORD*)(a1 + 360) = v17;
    *(_QWORD*)(a1 + 368) = v18;
    *(_QWORD*)(a1 + 376) = v11;
    v19 = v33;
    v20 = v35;
    v21 = v36;
    *(_QWORD*)(a1 + 320) = v34;
    *(_QWORD*)(a1 + 328) = v20;
    v22 = v45;
    *(_QWORD*)(a1 + 336) = v21;
    *(_QWORD*)(a1 + 344) = v15;
    v23 = v29;
    v24 = v30;
    *(_QWORD*)(a1 + 272) = v22;
    *(_QWORD*)(a1 + 280) = v23;
    v25 = v31;
    v26 = v32;
    *(_QWORD*)(a1 + 288) = v24;
    *(_QWORD*)(a1 + 296) = v25;
    *(_QWORD*)(a1 + 304) = v26;
    *(_QWORD*)(a1 + 312) = v19;
    LODWORD(v19) = v27;
    *(_DWORD*)(a1 + 408) = v28;
    *(_DWORD*)(a1 + 412) = v19;
  }
  return result;
}

__int64 SdkHr_6b7560(unsigned __int64* a1, __int64 a2, __int64 a3, __int64 a4,
                     unsigned __int64* a5)
{
  unsigned __int64 v10;
  __int64 v11;
  _QWORD* v12;
  unsigned __int64 i;
  unsigned __int64 v14;
  _QWORD* v15;
  unsigned __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  unsigned int v19;

  SdkRoutine_858b60(a4);
  v10 = *a5;
  v11 = a4 + 8;
  if (*a5 >= 3) {
    v12 = (_QWORD*)a5[1];
  }
  else {
    v12 = a5 + 1;
  }
  if (v10 != 0) {
    for (i = 0; i < v10; ++i) {
      v14 = *((unsigned int*)v12 + i);
      if ((_DWORD)v14 != 0) {
        if (((atomic_load_explicit(
                  (atomic_uint* volatile)(v11 + ((v14 >> 3) & 0x1FFFFFFC)),
                  memory_order_acquire) >>
              v14) &
             1) != 0) {
        LABEL_23:
          *a1 = i;
          v19 = 1;
          goto LABEL_24;
        }
        v10 = *a5;
      }
    }
  }
  SdkRoutine_858b80(a4);
  SdkRoutine_858b60(a3);
  if ((SdkRoutine_85d430(a2) & 1) != 0) {
    SdkRoutine_85d490(a2);
    v15 = *(_QWORD**)(a3 + 8);
    if (v15 != nullptr) {
      SdkRoutine_6b6810(v15, a4);
    }
  }
  SdkRoutine_858b80(a3);
  SdkRoutine_858b60(a4);
  v16 = *a5;
  if (*a5 >= 3) {
    v17 = (_QWORD*)a5[1];
  }
  else {
    v17 = a5 + 1;
  }
  if (v16 != 0) {
    for (i = 0; i < v16; ++i) {
      v18 = *((unsigned int*)v17 + i);
      if ((_DWORD)v18 != 0) {
        if (((atomic_load_explicit(
                  (atomic_uint* volatile)(v11 + ((v18 >> 3) & 0x1FFFFFFC)),
                  memory_order_acquire) >>
              v18) &
             1) != 0) {
          goto LABEL_23;
        }
        v16 = *a5;
      }
    }
  }
  v19 = 0;
LABEL_24:
  SdkRoutine_858b80(a4);
  return v19;
}

__int64 SdkHr_6ead20(_BYTE* a1)
{
  __int64 result;
  _BOOL4 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned int v6;
  _BYTE v7[4];
  _QWORD* v8;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1046f98,
                            memory_order_acquire) &
       1) == 0) {
    SdkRoutine_858b60(&SdkData_1046f9c);
    if ((SdkData_1046f98 & 1) == 0) {
      SdkRoutine_876ee0(&SdkData_1046fa0);
      SdkData_1046fb8 = 0;
      SdkData_1046fa0 = (__int64)&SdkData_e7a968;
      SdkRoutine_876ef0(&SdkData_1046fa0, 2678986);
      SdkRoutine_876f00(&SdkData_1046fa0, 2679498);
      atomic_store(1u, (unsigned __int8*)&SdkData_1046f98);
    }
    SdkRoutine_858b80(&SdkData_1046f9c);
  }
  if (SdkData_1046fb8 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1046f98,
                              memory_order_acquire) &
         1) == 0) {
      SdkRoutine_858b60(&SdkData_1046f9c);
      if ((SdkData_1046f98 & 1) == 0) {
        SdkRoutine_876ee0(&SdkData_1046fa0);
        SdkData_1046fb8 = 0;
        SdkData_1046fa0 = (__int64)&SdkData_e7a968;
        SdkRoutine_876ef0(&SdkData_1046fa0, 2678986);
        SdkRoutine_876f00(&SdkData_1046fa0, 2679498);
        atomic_store(1u, (unsigned __int8*)&SdkData_1046f98);
      }
      SdkRoutine_858b80(&SdkData_1046f9c);
    }
    *a1 = *(_BYTE*)SdkData_1046fb8;
    return 0;
  }
  v8 = nullptr;
  result = SdkRoutine_878660(&v8);
  if ((_DWORD)result != 0) {
    v3 = false;
  }
  else {
    v4 = v8;
    v7[0] = 0;
    v5 = SdkRoutine_876eb0(result);
    result =
        (*(__int64 (**)(_QWORD*, _BYTE*, __int64))(*v4 + 2376LL))(v4, v7, v5);
    v3 = result == 0;
    if ((_DWORD)result == 0) {
      *a1 = v7[0];
    }
  }
  if (v8 != nullptr) {
    v6 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v8 + 8LL))(
        (void*)v8, v8);
    result = v6;
  }
  if (v3) {
    return 0;
  }
  return result;
}

#pragma GCC visibility pop
