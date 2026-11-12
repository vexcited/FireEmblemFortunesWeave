#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char SdkData_bb9260[17];

extern __int64 (*SdkData_e83e50[])();

extern __int64 SdkData_e89760;

extern __int64 SdkData_e89768;

__int64 SdkRoutine_82dd20(_QWORD);

__int64 SdkRoutine_83db20(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_83e420(_QWORD, _QWORD);

__int64 SdkRoutine_83ff70(_QWORD);

__int64 SdkRoutine_841700(_QWORD);

__int64 SdkRoutine_841a00(_QWORD);

__int64 SdkRoutine_841f10(_QWORD, _QWORD);

__int64 SdkRoutine_842d00(__int64, __int64);

__int64 SdkRoutine_844f90(_QWORD);

__int64 SdkRoutine_849500(_QWORD);

__int64 SdkRoutine_849660(_QWORD);

__int64 SdkRoutine_84a900(_QWORD);

__int64 SdkRoutine_84ade0(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) SdkRoutine_84c1f0(const char*, ...);

__int64 SdkRoutine_856130(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_857220(_QWORD, _QWORD);

__int64 SdkRoutine_857810(_QWORD);

__int64 SdkRoutine_8578d0(_QWORD);

__int64 SdkRoutine_858a50(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_858b30(_QWORD, _QWORD, const char*, ...);

__int64 SdkRoutine_859610(_QWORD);

void SdkRoutine_85c8b0(void*, void*);

__int64 SdkRoutine_87c0e0(_QWORD);

__int64 SdkRoutine_87c790(_QWORD);

__int64 SdkRoutine_87c9c0(_QWORD);

__int64 SdkRoutine_87cb10(_QWORD);

void __attribute__((noreturn)) SdkHr_829060(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  SdkRoutine_87cb10(v1);
  v4 = SdkRoutine_87c790(a1);
  SdkRoutine_82dd20(v2 - 16);
  v5 = SdkRoutine_87c790(v4);
  SdkRoutine_87cb10(v1);
  v6 = SdkRoutine_87c790(v5);
  SdkRoutine_87cb10(v1);
  v7 = SdkRoutine_87c790(v6);
  SdkRoutine_87cb10(v1);
  SdkRoutine_87c790(v7);
  __udf(0);
}

__int64 SdkHr_82f0e0(__int64 a1)
{
  void* v2;
  void* v3;

  *(_QWORD*)a1 = SdkData_e89768 + 16;
  SdkRoutine_87c0e0(*(_QWORD*)(a1 + 32));
  v3 = *(void**)(a1 + 16);
  *(_QWORD*)a1 = SdkData_e89760 + 16;
  if (v3 != nullptr && (*(_BYTE*)(a1 + 24) & 1) != 0) {
    SdkRoutine_85c8b0(v3, v2);
  }
  SdkRoutine_87c9c0(a1);
  return SdkRoutine_857220(a1, 40);
}

__int64 SdkHr_837370(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;

  v2 = a1[3];
  if (v2 != 0) {
    v5 = a2[2];
    v6 = a2[3];
    v7 = a1[2];
    v8 = v5 + v2;
    if (v5 + v2 <= v6) {
      v12 = a2[1];
    }
    else {
      v9 = a2[1];
      v10 = 2 * v6;
      if (v10 <= v8 + 992) {
        v11 = v8 + 992;
      }
      else {
        v11 = v10;
      }
      a2[3] = v11;
      v12 = SdkRoutine_859610(v9);
      a2[1] = v12;
      if (v12 == 0) {
        SdkRoutine_857810(0);
        __udf(0);
      }
      v5 = a2[2];
    }
    SdkRoutine_856130(v12 + v5, v7, v2);
    a2[2] += v2;
  }
  v13 = a1[4];
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v13);
  if ((*(_WORD*)(v13 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v13);
  }
  return result;
}

__int64 SdkHr_837470(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 result;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 24 <= v3) {
    v10 = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 1016;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    v10 = SdkRoutine_859610(v6);
    a2[1] = v10;
    if (v10 == 0) {
      goto LABEL_19;
    }
    v2 = a2[2];
  }
  qmemcpy((void*)(v10 + v2), "construction vtable for ", 24);
  v11 = *(_QWORD*)(a1 + 16);
  a2[2] += 24LL;
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v11);
  if ((*(_WORD*)(v11 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v11);
  }
  v12 = a2[2];
  v13 = a2[3];
  if (v12 + 4 > v13) {
    v14 = a2[1];
    v15 = v12 + 996;
    v16 = 2 * v13;
    if (v16 <= v15) {
      v17 = v15;
    }
    else {
      v17 = v16;
    }
    a2[3] = v17;
    v10 = SdkRoutine_859610(v14);
    a2[1] = v10;
    if (v10 != 0) {
      v12 = a2[2];
      goto LABEL_17;
    }
  LABEL_19:
    SdkRoutine_857810(v10);
    __udf(0);
  }
  v10 = a2[1];
LABEL_17:
  *(_DWORD*)(v10 + v12) = 762210605;
  v18 = *(_QWORD*)(a1 + 24);
  a2[2] += 4LL;
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v18);
  if ((*(_WORD*)(v18 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v18);
  }
  return result;
}

__int64 SdkHr_837920(__int64 result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;

  v2 = *(_QWORD*)(result + 24);
  if (v2 != 0) {
    v3 = a2[2];
    v4 = a2[3];
    v5 = *(_QWORD*)(result + 16);
    v7 = v3 + v2;
    if (v3 + v2 <= v4) {
      v11 = a2[1];
    }
    else {
      v8 = a2[1];
      v9 = 2 * v4;
      if (v9 <= v7 + 992) {
        v10 = v7 + 992;
      }
      else {
        v10 = v9;
      }
      a2[3] = v10;
      v11 = SdkRoutine_859610(v8);
      a2[1] = v11;
      if (v11 == 0) {
        SdkRoutine_857810(0);
        __udf(0);
      }
      v3 = a2[2];
    }
    result = SdkRoutine_856130(v11 + v3, v5, v2);
    a2[2] += v2;
  }
  return result;
}

__int64 SdkHr_8379c0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  char v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 16);
  if (v2 != 0) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v2);
    if ((*(_WORD*)(v2 + 9) & 0xC0) != 0x40) {
      (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v2);
    }
  }
  if (*(_QWORD*)(a1 + 16) != 0 || *(_BYTE*)(a1 + 32) != 0) {
    if (*(_BYTE*)(a1 + 32) != 0) {
      v6 = 58;
    }
    else {
      v6 = 46;
    }
    v7 = a2[2];
    v8 = a2[3];
    v9 = v7 + 1;
    if (v7 + 1 <= v8) {
      v13 = a2[1];
    }
    else {
      v10 = a2[1];
      v11 = v7 + 993;
      if (2 * v8 <= v11) {
        v12 = v11;
      }
      else {
        v12 = 2 * v8;
      }
      a2[3] = v12;
      v13 = SdkRoutine_859610(v10);
      a2[1] = v13;
      if (v13 == 0) {
        SdkRoutine_857810(0);
        __udf(0);
      }
      v7 = a2[2];
      v9 = v7 + 1;
    }
    a2[2] = v9;
    *(_BYTE*)(v13 + v7) = v6;
  }
  v14 = *(_QWORD*)(a1 + 24);
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v14);
  if ((*(_WORD*)(v14 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v14);
  }
  return result;
}

__int64* SdkHr_839020(__int64* result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;

  v2 = (_QWORD*)result[1];
  if (v2 == (_QWORD*)result[2]) {
    v3 = (_QWORD*)*result;
    v4 = a2;
    v5 = result;
    v6 = (__int64)v2 - *result;
    if ((__int64*)*result == result + 3) {
      result = (__int64*)SdkRoutine_8578d0(2 * v6);
      if (result == nullptr) {
        goto LABEL_11;
      }
      v7 = (__int64)result;
      if (v2 != v3) {
        v8 = result;
        SdkRoutine_858a50(result, v3, v6);
        v7 = (__int64)v8;
      }
      result = v5;
      *v5 = v7;
    }
    else {
      v7 = SdkRoutine_859610(*result);
      result = v5;
      *v5 = v7;
      if (v7 == 0) {
      LABEL_11:
        SdkRoutine_857810(result);
        __udf(0);
      }
    }
    v2 = (_QWORD*)(v7 + v6);
    a2 = v4;
    result[2] = v7 + 8 * (v6 >> 2);
  }
  *v2 = a2;
  result[1] = (__int64)(v2 + 1);
  return result;
}

__int64 SdkHr_83d850(__int64 a1, __int64 a2)
{
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;

  if (*(_DWORD*)(a2 + 40) != 0) {
    goto LABEL_2;
  }
  v19 = *(_BYTE**)(a1 + 24);
  v20 = *(_QWORD*)(a1 + 32);
  if (v20 != 2) {
    if (v20 == 1 && *v19 == 62) {
      goto LABEL_47;
    }
  LABEL_2:
    v4 = 0;
    goto LABEL_3;
  }
  if (*(_WORD*)v19 != 15934) {
    goto LABEL_2;
  }
LABEL_47:
  *(_DWORD*)(a2 + 40) = 1;
  v37 = *(_QWORD*)(a2 + 16);
  v38 = *(_QWORD*)(a2 + 24);
  v39 = v37 + 1;
  if (v37 + 1 <= v38) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v40 = *(_QWORD*)(a2 + 8);
    v41 = v37 + 993;
    if (2 * v38 <= v41) {
      v42 = v41;
    }
    else {
      v42 = 2 * v38;
    }
    *(_QWORD*)(a2 + 24) = v42;
    result = SdkRoutine_859610(v40);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_55;
    }
    v37 = *(_QWORD*)(a2 + 16);
    v39 = v37 + 1;
  }
  *(_QWORD*)(a2 + 16) = v39;
  v4 = 1;
  *(_BYTE*)(result + v37) = 40;
LABEL_3:
  v5 = *(_BYTE*)(a1 + 9) & 0x3F;
  if (v5 == 17) {
    v6 = 15;
  }
  else {
    v6 = *(_BYTE*)(a1 + 9) & 0x3F;
  }
  SdkRoutine_83db20(*(_QWORD*)(a1 + 16), a2, v6, v5 != 17);
  if (*(_QWORD*)(a1 + 32) == 1 && *(_BYTE*)(v7 = *(_QWORD*)(a1 + 24)) == 44) {
    v8 = 1;
    v9 = *(_QWORD*)(a2 + 16);
    v10 = *(_QWORD*)(a2 + 24);
    v11 = v9 + 1;
    if (v9 + 1 <= v10) {
    LABEL_9:
      result = *(_QWORD*)(a2 + 8);
      goto LABEL_28;
    }
  }
  else {
    v13 = *(_QWORD*)(a2 + 16);
    v14 = *(_QWORD*)(a2 + 24);
    if (v13 + 1 <= v14) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v15 = *(_QWORD*)(a2 + 8);
      v16 = v13 + 993;
      v17 = 2 * v14;
      if (v17 <= v16) {
        v18 = v16;
      }
      else {
        v18 = v17;
      }
      *(_QWORD*)(a2 + 24) = v18;
      result = SdkRoutine_859610(v15);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_55;
      }
      v13 = *(_QWORD*)(a2 + 16);
    }
    *(_BYTE*)(result + v13) = 32;
    ++*(_QWORD*)(a2 + 16);
    v8 = *(_QWORD*)(a1 + 32);
    if (v8 == 0) {
      v25 = *(_QWORD*)(a2 + 16);
      v24 = *(_QWORD*)(a2 + 24);
      if (v25 + 1 > v24) {
        goto LABEL_29;
      }
    LABEL_35:
      result = *(_QWORD*)(a2 + 8);
      goto LABEL_36;
    }
    v7 = *(_QWORD*)(a1 + 24);
    v9 = *(_QWORD*)(a2 + 16);
    v10 = *(_QWORD*)(a2 + 24);
    v11 = v9 + v8;
    if (v9 + v8 <= v10) {
      goto LABEL_9;
    }
  }
  v21 = *(_QWORD*)(a2 + 8);
  v22 = 2 * v10;
  if (v22 <= v11 + 992) {
    v23 = v11 + 992;
  }
  else {
    v23 = v22;
  }
  *(_QWORD*)(a2 + 24) = v23;
  result = SdkRoutine_859610(v21);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
    goto LABEL_55;
  }
  v9 = *(_QWORD*)(a2 + 16);
LABEL_28:
  SdkRoutine_856130(result + v9, v7, v8);
  v24 = *(_QWORD*)(a2 + 24);
  v25 = *(_QWORD*)(a2 + 16) + v8;
  *(_QWORD*)(a2 + 16) = v25;
  if (v25 + 1 <= v24) {
    goto LABEL_35;
  }
LABEL_29:
  v26 = *(_QWORD*)(a2 + 8);
  v27 = v25 + 993;
  v28 = 2 * v24;
  if (v28 <= v27) {
    v29 = v27;
  }
  else {
    v29 = v28;
  }
  *(_QWORD*)(a2 + 24) = v29;
  result = SdkRoutine_859610(v26);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
    goto LABEL_55;
  }
  v25 = *(_QWORD*)(a2 + 16);
LABEL_36:
  *(_BYTE*)(result + v25) = 32;
  v30 = *(_QWORD*)(a1 + 40);
  ++*(_QWORD*)(a2 + 16);
  result = SdkRoutine_83db20(v30, a2, *(_BYTE*)(a1 + 9) & 0x3F, v5 == 17);
  if (v4 == 0) {
    return result;
  }
  --*(_DWORD*)(a2 + 40);
  v31 = *(_QWORD*)(a2 + 16);
  v32 = *(_QWORD*)(a2 + 24);
  v33 = v31 + 1;
  if (v31 + 1 <= v32) {
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_44;
  }
  v34 = *(_QWORD*)(a2 + 8);
  v35 = v31 + 993;
  if (2 * v32 <= v35) {
    v36 = v35;
  }
  else {
    v36 = 2 * v32;
  }
  *(_QWORD*)(a2 + 24) = v36;
  result = SdkRoutine_859610(v34);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
  LABEL_55:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v31 = *(_QWORD*)(a2 + 16);
  v33 = v31 + 1;
LABEL_44:
  *(_QWORD*)(a2 + 16) = v33;
  *(_BYTE*)(result + v31) = 41;
  return result;
}

__int64 SdkHr_83db20(__int64 a1, __int64 a2, unsigned __int8 a3, char a4)
{
  __int64 result;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;

  if ((a4 & 1) + (unsigned int)a3 <= (*(_WORD*)(a1 + 9) & 0x3Fu)) {
    ++*(_DWORD*)(a2 + 40);
    v7 = *(_QWORD*)(a2 + 16);
    v8 = *(_QWORD*)(a2 + 24);
    v9 = v7 + 1;
    if (v7 + 1 <= v8) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v10 = *(_QWORD*)(a2 + 8);
      v11 = v7 + 993;
      if (2 * v8 <= v11) {
        v12 = v11;
      }
      else {
        v12 = 2 * v8;
      }
      *(_QWORD*)(a2 + 24) = v12;
      result = SdkRoutine_859610(v10);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_22;
      }
      v7 = *(_QWORD*)(a2 + 16);
      v9 = v7 + 1;
    }
    *(_QWORD*)(a2 + 16) = v9;
    *(_BYTE*)(result + v7) = 40;
    (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, a1);
    if ((*(_WORD*)(a1 + 9) & 0xC0) != 0x40) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, a1);
    }
    --*(_DWORD*)(a2 + 40);
    v13 = *(_QWORD*)(a2 + 16);
    v14 = *(_QWORD*)(a2 + 24);
    v15 = v13 + 1;
    if (v13 + 1 <= v14) {
      result = *(_QWORD*)(a2 + 8);
      goto LABEL_20;
    }
    v16 = *(_QWORD*)(a2 + 8);
    v17 = v13 + 993;
    if (2 * v14 <= v17) {
      v18 = v17;
    }
    else {
      v18 = 2 * v14;
    }
    *(_QWORD*)(a2 + 24) = v18;
    result = SdkRoutine_859610(v16);
    *(_QWORD*)(a2 + 8) = result;
    if (result != 0) {
      v13 = *(_QWORD*)(a2 + 16);
      v15 = v13 + 1;
    LABEL_20:
      *(_QWORD*)(a2 + 16) = v15;
      *(_BYTE*)(result + v13) = 41;
      return result;
    }
  LABEL_22:
    SdkRoutine_857810(result);
    __udf(0);
  }
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, a1);
  if ((*(_WORD*)(a1 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, a1);
  }
  return result;
}

__int64 SdkHr_83e0a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;

  v2 = *(_QWORD*)(a2 + 16);
  if (*(_BYTE*)(a1 + 56) == 1) {
    v5 = *(_QWORD*)(a2 + 24);
    if (v2 + 2 <= v5) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v6 = *(_QWORD*)(a2 + 8);
      v7 = v2 + 994;
      v8 = 2 * v5;
      if (v8 <= v7) {
        v9 = v7;
      }
      else {
        v9 = v8;
      }
      *(_QWORD*)(a2 + 24) = v9;
      result = SdkRoutine_859610(v6);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_68;
      }
      v2 = *(_QWORD*)(a2 + 16);
    }
    *(_WORD*)(result + v2) = 14906;
    v2 = *(_QWORD*)(a2 + 16) + 2LL;
    *(_QWORD*)(a2 + 16) = v2;
  }
  v11 = *(_QWORD*)(a2 + 24);
  if (v2 + 3 <= v11) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v12 = *(_QWORD*)(a2 + 8);
    v13 = v2 + 995;
    v14 = 2 * v11;
    if (v14 <= v13) {
      v15 = v13;
    }
    else {
      v15 = v14;
    }
    *(_QWORD*)(a2 + 24) = v15;
    result = SdkRoutine_859610(v12);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_68;
    }
    v2 = *(_QWORD*)(a2 + 16);
  }
  v16 = result + v2;
  *(_BYTE*)(v16 + 2) = 119;
  *(_WORD*)v16 = 25966;
  v17 = *(_QWORD*)(a2 + 16);
  v18 = *(unsigned __int8*)(a1 + 57);
  v19 = v17 + 3;
  *(_QWORD*)(a2 + 16) = v17 + 3;
  if (v18 == 1) {
    v20 = *(_QWORD*)(a2 + 24);
    if (v17 + 5 <= v20) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v21 = *(_QWORD*)(a2 + 8);
      if (2 * v20 <= v17 + 997) {
        v22 = v17 + 997;
      }
      else {
        v22 = 2 * v20;
      }
      *(_QWORD*)(a2 + 24) = v22;
      result = SdkRoutine_859610(v21);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_68;
      }
      v19 = *(_QWORD*)(a2 + 16);
    }
    *(_WORD*)(result + v19) = 23899;
    v19 = *(_QWORD*)(a2 + 16) + 2LL;
    *(_QWORD*)(a2 + 16) = v19;
  }
  if (*(_QWORD*)(a1 + 24) != 0) {
    v23 = *(_QWORD*)(a2 + 24);
    ++*(_DWORD*)(a2 + 40);
    v24 = v19 + 1;
    if (v19 + 1 <= v23) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v25 = *(_QWORD*)(a2 + 8);
      v26 = v19 + 993;
      if (2 * v23 <= v26) {
        v27 = v26;
      }
      else {
        v27 = 2 * v23;
      }
      *(_QWORD*)(a2 + 24) = v27;
      result = SdkRoutine_859610(v25);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_68;
      }
      v19 = *(_QWORD*)(a2 + 16);
      v24 = v19 + 1;
    }
    *(_QWORD*)(a2 + 16) = v24;
    *(_BYTE*)(result + v19) = 40;
    SdkRoutine_83e420(a1 + 16, a2);
    --*(_DWORD*)(a2 + 40);
    v28 = *(_QWORD*)(a2 + 16);
    v29 = *(_QWORD*)(a2 + 24);
    v30 = v28 + 1;
    if (v28 + 1 <= v29) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v31 = *(_QWORD*)(a2 + 8);
      v32 = v28 + 993;
      if (2 * v29 <= v32) {
        v33 = v32;
      }
      else {
        v33 = 2 * v29;
      }
      *(_QWORD*)(a2 + 24) = v33;
      result = SdkRoutine_859610(v31);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_68;
      }
      v28 = *(_QWORD*)(a2 + 16);
      v30 = v28 + 1;
    }
    *(_QWORD*)(a2 + 16) = v30;
    *(_BYTE*)(result + v28) = 41;
    v19 = *(_QWORD*)(a2 + 16);
  }
  v34 = *(_QWORD*)(a2 + 24);
  if (v19 + 1 <= v34) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v35 = *(_QWORD*)(a2 + 8);
    v36 = v19 + 993;
    v37 = 2 * v34;
    if (v37 <= v36) {
      v38 = v36;
    }
    else {
      v38 = v37;
    }
    *(_QWORD*)(a2 + 24) = v38;
    result = SdkRoutine_859610(v35);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_68;
    }
    v19 = *(_QWORD*)(a2 + 16);
  }
  *(_BYTE*)(result + v19) = 32;
  v39 = *(_QWORD*)(a1 + 32);
  ++*(_QWORD*)(a2 + 16);
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v39);
  if ((*(_WORD*)(v39 + 9) & 0xC0) != 0x40) {
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v39);
  }
  if (*(_QWORD*)(a1 + 48) != 0) {
    ++*(_DWORD*)(a2 + 40);
    v40 = *(_QWORD*)(a2 + 16);
    v41 = *(_QWORD*)(a2 + 24);
    v42 = v40 + 1;
    if (v40 + 1 <= v41) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v43 = *(_QWORD*)(a2 + 8);
      v44 = v40 + 993;
      if (2 * v41 <= v44) {
        v45 = v44;
      }
      else {
        v45 = 2 * v41;
      }
      *(_QWORD*)(a2 + 24) = v45;
      result = SdkRoutine_859610(v43);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_68;
      }
      v40 = *(_QWORD*)(a2 + 16);
      v42 = v40 + 1;
    }
    *(_QWORD*)(a2 + 16) = v42;
    *(_BYTE*)(result + v40) = 40;
    SdkRoutine_83e420(a1 + 40, a2);
    --*(_DWORD*)(a2 + 40);
    v46 = *(_QWORD*)(a2 + 16);
    v47 = *(_QWORD*)(a2 + 24);
    v48 = v46 + 1;
    if (v46 + 1 <= v47) {
      result = *(_QWORD*)(a2 + 8);
      goto LABEL_66;
    }
    v49 = *(_QWORD*)(a2 + 8);
    v50 = v46 + 993;
    if (2 * v47 <= v50) {
      v51 = v50;
    }
    else {
      v51 = 2 * v47;
    }
    *(_QWORD*)(a2 + 24) = v51;
    result = SdkRoutine_859610(v49);
    *(_QWORD*)(a2 + 8) = result;
    if (result != 0) {
      v46 = *(_QWORD*)(a2 + 16);
      v48 = v46 + 1;
    LABEL_66:
      *(_QWORD*)(a2 + 16) = v48;
      *(_BYTE*)(result + v46) = 41;
      return result;
    }
  LABEL_68:
    v52 = SdkRoutine_857810(result);
    return SdkRoutine_83e420(v52, v53);
  }
  return result;
}

__int64 SdkHr_83e550(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 result;

  v2 = a2[2];
  if (*(_BYTE*)(a1 + 24) == 1) {
    v5 = a2[3];
    if (v2 + 2 <= v5) {
      v10 = a2[1];
    }
    else {
      v6 = a2[1];
      v7 = v2 + 994;
      v8 = 2 * v5;
      if (v8 <= v7) {
        v9 = v7;
      }
      else {
        v9 = v8;
      }
      a2[3] = v9;
      v10 = SdkRoutine_859610(v6);
      a2[1] = v10;
      if (v10 == 0) {
        goto LABEL_35;
      }
      v2 = a2[2];
    }
    *(_WORD*)(v10 + v2) = 14906;
    v2 = a2[2] + 2LL;
    a2[2] = v2;
  }
  v11 = a2[3];
  if (v2 + 6 <= v11) {
    v10 = a2[1];
  }
  else {
    v12 = a2[1];
    v13 = v2 + 998;
    v14 = 2 * v11;
    if (v14 <= v13) {
      v15 = v13;
    }
    else {
      v15 = v14;
    }
    a2[3] = v15;
    v10 = SdkRoutine_859610(v12);
    a2[1] = v10;
    if (v10 == 0) {
      goto LABEL_35;
    }
    v2 = a2[2];
  }
  v16 = v10 + v2;
  *(_WORD*)(v16 + 4) = 25972;
  *(_DWORD*)v16 = 1701602660;
  v17 = a2[2];
  v18 = *(unsigned __int8*)(a1 + 25);
  v19 = v17 + 6;
  a2[2] = v17 + 6;
  if (v18 == 1) {
    v20 = a2[3];
    if (v17 + 8 <= v20) {
      v10 = a2[1];
    }
    else {
      v21 = a2[1];
      if (2 * v20 <= v17 + 1000) {
        v22 = v17 + 1000;
      }
      else {
        v22 = 2 * v20;
      }
      a2[3] = v22;
      v10 = SdkRoutine_859610(v21);
      a2[1] = v10;
      if (v10 == 0) {
        goto LABEL_35;
      }
      v19 = a2[2];
    }
    *(_WORD*)(v10 + v19) = 23899;
    v19 = a2[2] + 2LL;
    a2[2] = v19;
  }
  v23 = a2[3];
  v24 = v19 + 1;
  if (v19 + 1 > v23) {
    v25 = a2[1];
    v26 = v19 + 993;
    if (2 * v23 <= v26) {
      v27 = v26;
    }
    else {
      v27 = 2 * v23;
    }
    a2[3] = v27;
    v10 = SdkRoutine_859610(v25);
    a2[1] = v10;
    if (v10 != 0) {
      v19 = a2[2];
      v24 = v19 + 1;
      goto LABEL_33;
    }
  LABEL_35:
    SdkRoutine_857810(v10);
    __udf(0);
  }
  v10 = a2[1];
LABEL_33:
  a2[2] = v24;
  *(_BYTE*)(v10 + v19) = 32;
  v28 = *(_QWORD*)(a1 + 16);
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v28);
  if ((*(_WORD*)(v28 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v28);
  }
  return result;
}

__int64 SdkHr_83eea0(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;

  v2 = a1[3];
  v3 = *(_QWORD*)(a2 + 16);
  if (v2 != 0) {
    v6 = a1[2];
    v7 = *(_QWORD*)(a2 + 24);
    v8 = v3 + v2;
    if (v3 + v2 <= v7) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v9 = *(_QWORD*)(a2 + 8);
      if (2 * v7 <= v8 + 992) {
        v10 = v8 + 992;
      }
      else {
        v10 = 2 * v7;
      }
      *(_QWORD*)(a2 + 24) = v10;
      result = SdkRoutine_859610(v9);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_35;
      }
      v3 = *(_QWORD*)(a2 + 16);
    }
    SdkRoutine_856130(result + v3, v6, v2);
    v3 = *(_QWORD*)(a2 + 16) + v2;
    *(_QWORD*)(a2 + 16) = v3;
  }
  v12 = *(_QWORD*)(a2 + 24);
  ++*(_DWORD*)(a2 + 40);
  v13 = v3 + 1;
  if (v3 + 1 <= v12) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v14 = *(_QWORD*)(a2 + 8);
    v15 = v3 + 993;
    if (2 * v12 <= v15) {
      v16 = v15;
    }
    else {
      v16 = 2 * v12;
    }
    *(_QWORD*)(a2 + 24) = v16;
    result = SdkRoutine_859610(v14);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_35;
    }
    v3 = *(_QWORD*)(a2 + 16);
    v13 = v3 + 1;
  }
  *(_QWORD*)(a2 + 16) = v13;
  *(_BYTE*)(result + v3) = 40;
  v17 = a1[4];
  (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v17);
  if ((*(_WORD*)(v17 + 9) & 0xC0) != 0x40) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v17);
  }
  --*(_DWORD*)(a2 + 40);
  v18 = *(_QWORD*)(a2 + 16);
  v19 = *(_QWORD*)(a2 + 24);
  if (v18 + 1 > v19) {
    v20 = *(_QWORD*)(a2 + 8);
    v21 = v18 + 993;
    if (2 * v19 <= v21) {
      v22 = v21;
    }
    else {
      v22 = 2 * v19;
    }
    *(_QWORD*)(a2 + 24) = v22;
    result = SdkRoutine_859610(v20);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_35;
    }
    v23 = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(a2 + 16) = v23 + 1;
    *(_BYTE*)(result + v23) = 41;
    v24 = a1[6];
    if (v24 == 0) {
      return result;
    }
    goto LABEL_27;
  }
  result = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(a2 + 16) = v18 + 1;
  *(_BYTE*)(result + v18) = 41;
  v24 = a1[6];
  if (v24 != 0) {
  LABEL_27:
    v25 = *(_QWORD*)(a2 + 16);
    v26 = *(_QWORD*)(a2 + 24);
    v27 = a1[5];
    v28 = v25 + v24;
    if (v25 + v24 <= v26) {
      result = *(_QWORD*)(a2 + 8);
      goto LABEL_34;
    }
    v29 = *(_QWORD*)(a2 + 8);
    v30 = 2 * v26;
    if (v30 <= v28 + 992) {
      v31 = v28 + 992;
    }
    else {
      v31 = v30;
    }
    *(_QWORD*)(a2 + 24) = v31;
    result = SdkRoutine_859610(v29);
    *(_QWORD*)(a2 + 8) = result;
    if (result != 0) {
      v25 = *(_QWORD*)(a2 + 16);
    LABEL_34:
      result = SdkRoutine_856130(result + v25, v27, v24);
      *(_QWORD*)(a2 + 16) += v24;
      return result;
    }
  LABEL_35:
    SdkRoutine_857810(result);
    __udf(0);
  }
  return result;
}

__int64 SdkHr_83fc40(__int64 result, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  _BYTE* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;

  v3 = (_QWORD*)result;
  if (*(_QWORD*)(result + 24) < 4u) {
    goto LABEL_26;
  }
  ++*(_DWORD*)(a2 + 40);
  v4 = *(_QWORD*)(a2 + 16);
  v5 = *(_QWORD*)(a2 + 24);
  if (v4 + 1 > v5) {
    v6 = *(_QWORD*)(a2 + 8);
    v7 = v4 + 993;
    if (2 * v5 <= v7) {
      v8 = v7;
    }
    else {
      v8 = 2 * v5;
    }
    *(_QWORD*)(a2 + 24) = v8;
    result = SdkRoutine_859610(v6);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_64;
    }
    v9 = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(a2 + 16) = v9 + 1;
    *(_BYTE*)(result + v9) = 40;
    v10 = v3[3];
    v11 = *(_QWORD*)(a2 + 16);
    if (v10 == 0) {
      goto LABEL_18;
    }
  LABEL_10:
    v13 = v3[2];
    v14 = *(_QWORD*)(a2 + 24);
    v15 = v11 + v10;
    if (v11 + v10 <= v14) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v16 = *(_QWORD*)(a2 + 8);
      if (2 * v14 <= v15 + 992) {
        v17 = v15 + 992;
      }
      else {
        v17 = 2 * v14;
      }
      *(_QWORD*)(a2 + 24) = v17;
      result = SdkRoutine_859610(v16);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_64;
      }
      v11 = *(_QWORD*)(a2 + 16);
    }
    SdkRoutine_856130(result + v11, v13, v10);
    v11 = *(_QWORD*)(a2 + 16) + v10;
    *(_QWORD*)(a2 + 16) = v11;
    goto LABEL_18;
  }
  v12 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(a2 + 16) = v4 + 1;
  *(_BYTE*)(v12 + v4) = 40;
  v10 = v3[3];
  v11 = *(_QWORD*)(a2 + 16);
  if (v10 != 0) {
    goto LABEL_10;
  }
LABEL_18:
  v18 = *(_QWORD*)(a2 + 24);
  --*(_DWORD*)(a2 + 40);
  v19 = v11 + 1;
  if (v11 + 1 <= v18) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v20 = *(_QWORD*)(a2 + 8);
    v21 = v11 + 993;
    if (2 * v18 <= v21) {
      v22 = v21;
    }
    else {
      v22 = 2 * v18;
    }
    *(_QWORD*)(a2 + 24) = v22;
    result = SdkRoutine_859610(v20);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_64;
    }
    v11 = *(_QWORD*)(a2 + 16);
    v19 = v11 + 1;
  }
  *(_QWORD*)(a2 + 16) = v19;
  *(_BYTE*)(result + v11) = 41;
LABEL_26:
  v23 = (_BYTE*)v3[4];
  if (*v23 != 110) {
    v32 = v3[5];
    if (v32 == 0) {
      goto LABEL_53;
    }
    v33 = *(_QWORD*)(a2 + 16);
    v34 = *(_QWORD*)(a2 + 24);
    v35 = v33 + v32;
    if (v33 + v32 <= v34) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v36 = *(_QWORD*)(a2 + 8);
      v37 = 2 * v34;
      if (v37 <= v35 + 992) {
        v38 = v35 + 992;
      }
      else {
        v38 = v37;
      }
      *(_QWORD*)(a2 + 24) = v38;
      result = SdkRoutine_859610(v36);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_64;
      }
      v33 = *(_QWORD*)(a2 + 16);
    }
    result = SdkRoutine_856130(result + v33, v23, v32);
    v47 = *(_QWORD*)(a2 + 16) + v32;
  LABEL_52:
    *(_QWORD*)(a2 + 16) = v47;
    goto LABEL_53;
  }
  v24 = *(_QWORD*)(a2 + 16);
  v25 = *(_QWORD*)(a2 + 24);
  if (v24 + 1 <= v25) {
    result = *(_QWORD*)(a2 + 8);
    *(_QWORD*)(a2 + 16) = v24 + 1;
    *(_BYTE*)(result + v24) = 45;
    v39 = v3[5];
    v31 = v39 - 1;
    if (v39 == 1) {
      goto LABEL_53;
    }
    goto LABEL_42;
  }
  v26 = *(_QWORD*)(a2 + 8);
  v27 = v24 + 993;
  if (2 * v25 <= v27) {
    v28 = v27;
  }
  else {
    v28 = 2 * v25;
  }
  *(_QWORD*)(a2 + 24) = v28;
  result = SdkRoutine_859610(v26);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
    goto LABEL_64;
  }
  v29 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(a2 + 16) = v29 + 1;
  *(_BYTE*)(result + v29) = 45;
  v30 = v3[5];
  v31 = v30 - 1;
  if (v30 != 1) {
  LABEL_42:
    v40 = *(_QWORD*)(a2 + 16);
    v41 = *(_QWORD*)(a2 + 24);
    v42 = v3[4];
    v43 = v40 + v31;
    if (v40 + v31 <= v41) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v44 = *(_QWORD*)(a2 + 8);
      v45 = 2 * v41;
      if (v45 <= v43 + 992) {
        v46 = v43 + 992;
      }
      else {
        v46 = v45;
      }
      *(_QWORD*)(a2 + 24) = v46;
      result = SdkRoutine_859610(v44);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_64;
      }
      v40 = *(_QWORD*)(a2 + 16);
    }
    result = SdkRoutine_856130(result + v40, v42 + 1, v31);
    v47 = *(_QWORD*)(a2 + 16) + v31;
    goto LABEL_52;
  }
LABEL_53:
  v48 = v3[3];
  if (v48 <= 3 && v48 != 0) {
    v49 = *(_QWORD*)(a2 + 16);
    v50 = *(_QWORD*)(a2 + 24);
    v51 = v3[2];
    v52 = v49 + v48;
    if (v49 + v48 <= v50) {
      result = *(_QWORD*)(a2 + 8);
      goto LABEL_62;
    }
    v53 = *(_QWORD*)(a2 + 8);
    v54 = 2 * v50;
    if (v54 <= v52 + 992) {
      v55 = v52 + 992;
    }
    else {
      v55 = v54;
    }
    *(_QWORD*)(a2 + 24) = v55;
    result = SdkRoutine_859610(v53);
    *(_QWORD*)(a2 + 8) = result;
    if (result != 0) {
      v49 = *(_QWORD*)(a2 + 16);
    LABEL_62:
      result = SdkRoutine_856130(result + v49, v51, v48);
      *(_QWORD*)(a2 + 16) += v48;
      return result;
    }
  LABEL_64:
    v56 = SdkRoutine_857810(result);
    return SdkRoutine_83ff70(v56);
  }
  return result;
}

__int64 SdkHr_840480(__int64 result, _QWORD* a2)
{
  unsigned __int8* v2;
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  int v9;
  __int64 v10;
  int v11;
  unsigned int v12;
  char v13;
  int v14;
  unsigned int v15;
  char v16;
  unsigned __int8 v17;
  int v18;
  unsigned int v19;
  char v20;
  int v21;
  unsigned int v22;
  char v23;
  unsigned __int8 v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  int v30;
  unsigned __int64 v31;
  int v32;
  unsigned int v33;
  char v34;
  int v35;
  unsigned int v36;
  char v37;
  unsigned __int8 v38;
  int v39;
  unsigned int v40;
  char v41;
  int v42;
  unsigned int v43;
  char v44;
  unsigned __int64 v45;
  int v46;
  unsigned int v47;
  char v48;
  int v49;
  unsigned int v50;
  char v51;
  unsigned __int8 v52;
  int v53;
  unsigned int v54;
  char v55;
  int v56;
  unsigned int v57;
  char v58;
  unsigned __int8 v59;
  int v60;
  unsigned int v61;
  unsigned int v62;
  int v63;
  unsigned int v64;
  int v65;
  __int64 v66;
  int v67;
  unsigned __int8 v68;
  unsigned __int64 v69;
  unsigned int v70;
  char v71;
  unsigned __int64 v72;
  int v73;
  unsigned int v74;
  char v75;
  unsigned __int8 v76;
  unsigned __int64 v77;
  int v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned int v81;
  char v82;
  int v83;
  unsigned int v84;
  char v85;
  unsigned __int8 v86;
  int v87;
  unsigned int v88;
  char v89;
  int v90;
  unsigned int v91;
  char v92;
  int v93;
  unsigned __int8 v94;
  unsigned int v95;
  char v96;
  __int64 v97;
  __int64 v98;
  int v99;
  unsigned int v100;
  char v101;
  unsigned __int8 v102;
  int v103;
  unsigned int v104;
  char v105;
  int v106;
  unsigned int v107;
  char v108;
  unsigned __int64 v109;
  int v110;
  unsigned __int64 v111;
  unsigned int v112;
  char v113;
  int v114;
  unsigned int v115;
  char v116;
  unsigned __int8 v117;
  int v118;
  int v119;
  unsigned int v120;
  unsigned int v121;
  unsigned int v122;
  int v123;
  unsigned __int64 v124;
  __int64 v125;
  unsigned __int64 v126;
  __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
  __int64 v132;
  long double v133;
  _QWORD v134[5];
  __int16 v135;

  if (*(_QWORD*)(result + 24) >= 0x20u) {
    v2 = *(unsigned __int8**)(result + 16);
    v135 = 0;
    v4 = v2[17];
    memset(v134, 0, sizeof(v134));
    v5 = v4 - 48;
    v6 = v4 - 87;
    if (v5 < 0xA) {
      v6 = v5;
    }
    v7 = v2[16];
    v8 = v7 - 48;
    v9 = 16 * v7;
    if (v8 >= 0xA) {
      v9 -= 112;
    }
    v10 = v6 + v9;
    v11 = v2[19];
    v12 = v11 - 48;
    v13 = v11 - 87;
    if (v12 < 0xA) {
      v13 = v12;
    }
    v14 = v2[18];
    v15 = v14 - 48;
    v16 = 16 * v14;
    if (v15 >= 0xA) {
      v16 -= 112;
    }
    v17 = v13 + v16;
    v18 = v2[13];
    v19 = v18 - 48;
    v20 = v18 - 87;
    if (v19 < 0xA) {
      v20 = v19;
    }
    v21 = v2[12];
    v22 = v21 - 48;
    v23 = 16 * v21;
    if (v22 >= 0xA) {
      v23 -= 112;
    }
    v24 = v20 + v23;
    v25 = v2[15];
    v26 = v25 - 48;
    v27 = v25 - 87;
    if (v26 < 0xA) {
      v27 = v26;
    }
    v28 = v2[14];
    v29 = v28 - 48;
    v30 = 16 * v28;
    if (v29 >= 0xA) {
      v30 -= 112;
    }
    v31 = ((unsigned __int64)(v27 + v30) << 56) | ((unsigned __int64)v24 << 48);
    v32 = v2[9];
    v33 = v32 - 48;
    v34 = v32 - 87;
    if (v33 < 0xA) {
      v34 = v33;
    }
    v35 = v2[8];
    v36 = v35 - 48;
    v37 = 16 * v35;
    if (v36 >= 0xA) {
      v37 -= 112;
    }
    v38 = v34 + v37;
    v39 = v2[11];
    v40 = v39 - 48;
    v41 = v39 - 87;
    if (v40 < 0xA) {
      v41 = v40;
    }
    v42 = v2[10];
    v43 = v42 - 48;
    v44 = 16 * v42;
    if (v43 >= 0xA) {
      v44 -= 112;
    }
    v45 = ((unsigned __int64)(unsigned __int8)(v41 + v44) << 40) |
          ((unsigned __int64)v38 << 32);
    v46 = v2[7];
    v47 = v46 - 48;
    v48 = v46 - 87;
    if (v47 < 0xA) {
      v48 = v47;
    }
    v49 = v2[6];
    v50 = v49 - 48;
    v51 = 16 * v49;
    if (v50 >= 0xA) {
      v51 -= 112;
    }
    v52 = v48 + v51;
    v53 = v2[3];
    v54 = v53 - 48;
    v55 = v53 - 87;
    if (v54 < 0xA) {
      v55 = v54;
    }
    v56 = v2[2];
    v57 = v56 - 48;
    v58 = 16 * v56;
    if (v57 >= 0xA) {
      v58 -= 112;
    }
    v59 = v55 + v58;
    v60 = v2[1];
    v61 = v60 - 48;
    v62 = v60 - 87;
    if (v61 < 0xA) {
      v62 = v61;
    }
    v63 = *v2;
    v64 = v63 - 48;
    v65 = 16 * v63;
    if (v64 >= 0xA) {
      v65 -= 112;
    }
    v66 = v62 + v65;
    v67 = v2[5];
    v68 = v66;
    v69 = (v66 << 56) | ((unsigned __int64)v59 << 48);
    v70 = v67 - 48;
    v71 = v67 - 87;
    v72 = v68 | ((unsigned __int64)v59 << 8) | ((unsigned __int64)v52 << 24);
    if (v70 < 0xA) {
      v71 = v70;
    }
    v73 = v2[4];
    v74 = v73 - 48;
    v75 = 16 * v73;
    if (v74 >= 0xA) {
      v75 -= 112;
    }
    v76 = v71 + v75;
    v77 = v45 | v72 & 0xFFFFFFFFFF00FFFFLL | ((unsigned __int64)v76 << 16);
    v78 = v2[21];
    v79 = v31 | v77;
    v80 = v69 & 0xFFFF0000FFFFFFFFLL | ((unsigned __int64)v76 << 40) |
          ((unsigned __int64)v52 << 32);
    v81 = v78 - 48;
    v82 = v78 - 87;
    if (v81 < 0xA) {
      v82 = v81;
    }
    v83 = v2[20];
    v84 = v83 - 48;
    v85 = 16 * v83;
    if (v84 >= 0xA) {
      v85 -= 112;
    }
    v86 = v82 + v85;
    v87 = v2[23];
    v88 = v87 - 48;
    v89 = v87 - 87;
    if (v88 < 0xA) {
      v89 = v88;
    }
    v90 = v2[22];
    v91 = v90 - 48;
    v92 = 16 * v90;
    if (v91 >= 0xA) {
      v92 -= 112;
    }
    v93 = v2[25];
    v94 = v89 + v92;
    v95 = v93 - 48;
    v96 = v93 - 87;
    v97 = (v77 >> 24) & 0xFF0000;
    v98 = (v77 >> 8) & 0xFF000000;
    if (v95 < 0xA) {
      v96 = v95;
    }
    v99 = v2[24];
    v100 = v99 - 48;
    v101 = 16 * v99;
    if (v100 >= 0xA) {
      v101 -= 112;
    }
    v102 = v96 + v101;
    v103 = v2[27];
    v104 = v103 - 48;
    v105 = v103 - 87;
    if (v104 < 0xA) {
      v105 = v104;
    }
    v106 = v2[26];
    v107 = v106 - 48;
    v108 = 16 * v106;
    if (v107 >= 0xA) {
      v108 -= 112;
    }
    v109 = ((unsigned __int64)(unsigned __int8)(v105 + v108) << 40) |
           ((unsigned __int64)v102 << 32);
    v110 = v2[29];
    v111 = v109 | (unsigned __int8)v10 | ((unsigned __int64)v17 << 8) |
           ((unsigned __int64)v94 << 24) | ((unsigned __int64)v86 << 16);
    v112 = v110 - 48;
    v113 = v110 - 87;
    if (v112 < 0xA) {
      v113 = v112;
    }
    v114 = v2[28];
    v115 = v114 - 48;
    v116 = 16 * v114;
    if (v115 >= 0xA) {
      v116 -= 112;
    }
    v117 = v113 + v116;
    v118 = v2[31];
    v119 = v2[30];
    v120 = v118 - 48;
    v121 = v118 - 87;
    if (v120 < 0xA) {
      v121 = v120;
    }
    v122 = v119 - 48;
    v123 = 16 * v119;
    if (v122 >= 0xA) {
      v123 -= 112;
    }
    v124 = ((unsigned __int64)(v121 + v123) << 56) |
           ((unsigned __int64)v117 << 48) | v111;
    *(_QWORD*)&v133 = (v111 >> 8) & 0xFF000000 | (v111 >> 24) & 0xFF0000 |
                      (unsigned __int16)(HIDWORD(v124) >> 8) & 0xFF00 |
                      (unsigned __int64)HIBYTE(v124) |
                      ((unsigned __int64)v94 << 32) & 0xFFFFFFFFFFLL |
                      ((unsigned __int64)v86 << 40) & 0xFFFFFFFFFFFFLL |
                      ((unsigned __int64)v17 << 48) | (v10 << 56);
    *((_QWORD*)&v133 + 1) =
        (v79 >> 40) & 0xFF00 | v97 | v98 | v80 | HIBYTE(v79);
    result = SdkRoutine_858b30(v134, 42, "%LaL", v133);
    if ((_DWORD)result != 0) {
      v125 = a2[2];
      v126 = a2[3];
      v127 = (int)result;
      v128 = v125 + (int)result;
      if (v128 <= v126) {
        v132 = a2[1];
      }
      else {
        v129 = a2[1];
        v130 = 2 * v126;
        if (v130 <= v128 + 992) {
          v131 = v128 + 992;
        }
        else {
          v131 = v130;
        }
        a2[3] = v131;
        v132 = SdkRoutine_859610(v129);
        a2[1] = v132;
        if (v132 == 0) {
          SdkRoutine_857810(0);
          __udf(0);
        }
        v125 = a2[2];
      }
      result = SdkRoutine_856130(v132 + v125, v134, v127);
      a2[2] += v127;
    }
  }
  return result;
}

__int64 SdkHr_840940(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 2 <= v3) {
    result = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 994;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    result = SdkRoutine_859610(v6);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_18;
    }
    v2 = a2[2];
  }
  *(_WORD*)(result + v2) = 15394;
  v11 = *(_QWORD*)(a1 + 16);
  a2[2] += 2LL;
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v11);
  if ((*(_WORD*)(v11 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v11);
  }
  v12 = a2[2];
  v13 = a2[3];
  if (v12 + 2 <= v13) {
    result = a2[1];
    goto LABEL_17;
  }
  v14 = a2[1];
  v15 = v12 + 994;
  v16 = 2 * v13;
  if (v16 <= v15) {
    v17 = v15;
  }
  else {
    v17 = v16;
  }
  a2[3] = v17;
  result = SdkRoutine_859610(v14);
  a2[1] = result;
  if (result == 0) {
  LABEL_18:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v12 = a2[2];
LABEL_17:
  *(_WORD*)(result + v12) = 8766;
  a2[2] += 2LL;
  return result;
}

__int64 SdkHr_841190(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 8 <= v3) {
    result = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 1000;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    result = SdkRoutine_859610(v6);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_25;
    }
    v2 = a2[2];
  }
  *(_QWORD*)(result + v2) = 0x64656D616E6E7527LL;
  v11 = a2[2] + 8LL;
  a2[2] = v11;
  v12 = *(_QWORD*)(a1 + 24);
  if (v12 != 0) {
    v13 = *(_QWORD*)(a1 + 16);
    v14 = a2[3];
    v15 = v11 + v12;
    if (v11 + v12 <= v14) {
      result = a2[1];
    }
    else {
      v16 = a2[1];
      if (2 * v14 <= v15 + 992) {
        v17 = v15 + 992;
      }
      else {
        v17 = 2 * v14;
      }
      a2[3] = v17;
      result = SdkRoutine_859610(v16);
      a2[1] = result;
      if (result == 0) {
        goto LABEL_25;
      }
      v11 = a2[2];
    }
    SdkRoutine_856130(result + v11, v13, v12);
    v11 = a2[2] + v12;
    a2[2] = v11;
  }
  v18 = a2[3];
  if (v11 + 1 <= v18) {
    result = a2[1];
    goto LABEL_24;
  }
  v19 = a2[1];
  v20 = v11 + 993;
  v21 = 2 * v18;
  if (v21 <= v20) {
    v22 = v20;
  }
  else {
    v22 = v21;
  }
  a2[3] = v22;
  result = SdkRoutine_859610(v19);
  a2[1] = result;
  if (result == 0) {
  LABEL_25:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v11 = a2[2];
LABEL_24:
  *(_BYTE*)(result + v11) = 39;
  ++a2[2];
  return result;
}

__int64 SdkHr_8414e0(__int64 result, _QWORD* a2)
{
  int v2;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int16 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;
  __int64 v32;
  _BYTE* v33;
  bool v34;
  bool v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  _BYTE v43[21];

  v2 = *(_DWORD*)(result + 12);
  if (v2 == 2) {
    v21 = a2[2];
    v20 = a2[3];
    if (v21 + 3 <= v20) {
      v27 = a2[1];
    }
    else {
      v22 = result;
      v23 = a2[1];
      v24 = v21 + 995;
      v25 = 2 * v20;
      if (v25 <= v24) {
        v26 = v24;
      }
      else {
        v26 = v25;
      }
      a2[3] = v26;
      v11 = SdkRoutine_859610(v23);
      a2[1] = v11;
      if (v11 == 0) {
        goto LABEL_41;
      }
      v21 = a2[2];
      v27 = v11;
      result = v22;
    }
    v28 = v27 + v21;
    *(_BYTE*)(v28 + 2) = 84;
    *(_WORD*)v28 = 21540;
    v29 = a2[2] + 3LL;
  }
  else {
    if (v2 == 1) {
      v5 = a2[2];
      v13 = a2[3];
      if (v5 + 2 <= v13) {
        v12 = a2[1];
        v19 = 20004;
      }
      else {
        v14 = result;
        v15 = a2[1];
        v16 = v5 + 994;
        v17 = 2 * v13;
        if (v17 <= v16) {
          v18 = v16;
        }
        else {
          v18 = v17;
        }
        a2[3] = v18;
        v11 = SdkRoutine_859610(v15);
        a2[1] = v11;
        if (v11 == 0) {
          goto LABEL_41;
        }
        v5 = a2[2];
        v12 = v11;
        result = v14;
        v19 = 20004;
      }
    }
    else {
      if (v2 != 0) {
        goto LABEL_29;
      }
      v5 = a2[2];
      v4 = a2[3];
      if (v5 + 2 <= v4) {
        v12 = a2[1];
      }
      else {
        v6 = result;
        v7 = a2[1];
        v8 = v5 + 994;
        v9 = 2 * v4;
        if (v9 <= v8) {
          v10 = v8;
        }
        else {
          v10 = v9;
        }
        a2[3] = v10;
        v11 = SdkRoutine_859610(v7);
        a2[1] = v11;
        if (v11 == 0) {
          goto LABEL_41;
        }
        v5 = a2[2];
        v12 = v11;
        result = v6;
      }
      v19 = 21540;
    }
    *(_WORD*)(v12 + v5) = v19;
    v29 = a2[2] + 2LL;
  }
  a2[2] = v29;
LABEL_29:
  v30 = *(_DWORD*)(result + 16);
  if (v30 == 0) {
    return result;
  }
  v31 = (unsigned int)(v30 - 1);
  v32 = 0;
  do {
    v33 = &v43[v32--];
    v33[20] = (v31 % 0xA) | 0x30;
    v34 = v31 >= 9;
    v35 = v31 == 9;
    v31 /= 0xAu;
  } while (!v35 && v34);
  v36 = a2[2];
  v37 = a2[3];
  v38 = v36 - v32;
  if (v36 - v32 <= v37) {
    v11 = a2[1];
    goto LABEL_39;
  }
  v39 = a2[1];
  v40 = 2 * v37;
  if (v40 <= v38 + 992) {
    v41 = v38 + 992;
  }
  else {
    v41 = v40;
  }
  a2[3] = v41;
  v11 = SdkRoutine_859610(v39);
  a2[1] = v11;
  if (v11 == 0) {
  LABEL_41:
    v42 = SdkRoutine_857810(v11);
    return SdkRoutine_841700(v42);
  }
  v36 = a2[2];
LABEL_39:
  result = SdkRoutine_856130(v11 + v36, &v43[v32 + 21], -v32);
  a2[2] -= v32;
  return result;
}

__int64 SdkHr_841700(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 result;
  __int64 v10;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 9 <= v3) {
    result = a2[1];
  }
  else {
    v5 = a2[1];
    v6 = v2 + 1001;
    v7 = 2 * v3;
    if (v7 <= v6) {
      v8 = v6;
    }
    else {
      v8 = v7;
    }
    a2[3] = v8;
    result = SdkRoutine_859610(v5);
    a2[1] = result;
    if (result == 0) {
      SdkRoutine_857810(0);
      __udf(0);
    }
    v2 = a2[2];
  }
  v10 = result + v2;
  *(_QWORD*)v10 = *(_QWORD*)"typename ";
  *(_BYTE*)(v10 + 8) = 32;
  a2[2] += 9LL;
  return result;
}

__int64 SdkHr_841930(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;

  (*(void (**)(_QWORD*, _QWORD))(*a2 + 16LL))(a2, *(_QWORD*)(a1 + 24));
  result = *(_QWORD*)(a1 + 24);
  if ((char)*(_WORD*)(result + 9) < -64) {
    result = (**(__int64 (***)(__int64, _QWORD*))result)(result, a2);
    if ((result & 1) != 0) {
      return result;
    }
  LABEL_5:
    v5 = a2[2];
    v6 = a2[3];
    if (v5 + 1 <= v6) {
      result = a2[1];
    }
    else {
      v7 = a2[1];
      v8 = v5 + 993;
      v9 = 2 * v6;
      if (v9 <= v8) {
        v10 = v8;
      }
      else {
        v10 = v9;
      }
      a2[3] = v10;
      result = SdkRoutine_859610(v7);
      a2[1] = result;
      if (result == 0) {
        v11 = SdkRoutine_857810(0);
        return SdkRoutine_841a00(v11);
      }
      v5 = a2[2];
    }
    *(_BYTE*)(result + v5) = 32;
    ++a2[2];
    return result;
  }
  if ((unsigned __int8)*(_WORD*)(result + 9) >= 0x40u) {
    goto LABEL_5;
  }
  return result;
}

__int64 SdkHr_841bb0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = *(_QWORD*)(a1 + 16);
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v2);
  if ((*(_WORD*)(v2 + 9) & 0xC0) != 0x40) {
    result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v2);
  }
  if (*(_QWORD*)(a1 + 40) != 0) {
    v6 = a2[2];
    v7 = a2[3];
    if (v6 + 10 <= v7) {
      v12 = a2[1];
    }
    else {
      v8 = a2[1];
      v9 = v6 + 1002;
      v10 = 2 * v7;
      if (v10 <= v9) {
        v11 = v9;
      }
      else {
        v11 = v10;
      }
      a2[3] = v11;
      v12 = SdkRoutine_859610(v8);
      a2[1] = v12;
      if (v12 == 0) {
        SdkRoutine_857810(0);
        __udf(0);
      }
      v6 = a2[2];
    }
    v13 = v12 + v6;
    *(_QWORD*)v13 = *(_QWORD*)" requires ";
    *(_WORD*)(v13 + 8) = 8307;
    v14 = *(_QWORD*)(a1 + 40);
    a2[2] += 10LL;
    result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v14);
    if ((*(_WORD*)(v14 + 9) & 0xC0) != 0x40) {
      return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v14);
    }
  }
  return result;
}

__int64 SdkHr_841ce0(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 result;
  __int64 v10;

  (*(void (**)(_QWORD*, _QWORD))(*a2 + 16LL))(a2, *(_QWORD*)(a1 + 16));
  v3 = a2[2];
  v4 = a2[3];
  if (v3 + 3 <= v4) {
    result = a2[1];
  }
  else {
    v5 = a2[1];
    v6 = v3 + 995;
    v7 = 2 * v4;
    if (v7 <= v6) {
      v8 = v6;
    }
    else {
      v8 = v7;
    }
    a2[3] = v8;
    result = SdkRoutine_859610(v5);
    a2[1] = result;
    if (result == 0) {
      SdkRoutine_857810(0);
      __udf(0);
    }
    v3 = a2[2];
  }
  v10 = result + v3;
  *(_BYTE*)(v10 + 2) = 46;
  *(_WORD*)v10 = 11822;
  a2[2] += 3LL;
  return result;
}

__int64 SdkHr_841db0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  __int64 v25;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 7 <= v3) {
    v10 = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 999;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    v10 = SdkRoutine_859610(v6);
    a2[1] = v10;
    if (v10 == 0) {
      goto LABEL_26;
    }
    v2 = a2[2];
  }
  v11 = (_DWORD*)(v10 + v2);
  *(_DWORD*)((char*)v11 + 3) = 1633968749;
  *v11 = 1835101223;
  v12 = a2[2] + 7LL;
  a2[2] = v12;
  v13 = *(_QWORD*)(a1 + 72);
  if (v13 != 0) {
    v14 = *(_QWORD*)(a1 + 64);
    v15 = a2[3];
    v16 = v12 + v13;
    if (v12 + v13 <= v15) {
      v10 = a2[1];
    }
    else {
      v17 = a2[1];
      if (2 * v15 <= v16 + 992) {
        v18 = v16 + 992;
      }
      else {
        v18 = 2 * v15;
      }
      a2[3] = v18;
      v10 = SdkRoutine_859610(v17);
      a2[1] = v10;
      if (v10 == 0) {
        goto LABEL_26;
      }
      v12 = a2[2];
    }
    SdkRoutine_856130(v10 + v12, v14, v13);
    v12 = a2[2] + v13;
    a2[2] = v12;
  }
  v19 = a2[3];
  if (v12 + 1 <= v19) {
    v10 = a2[1];
    goto LABEL_24;
  }
  v20 = a2[1];
  v21 = v12 + 993;
  v22 = 2 * v19;
  if (v22 <= v21) {
    v23 = v21;
  }
  else {
    v23 = v22;
  }
  a2[3] = v23;
  v10 = SdkRoutine_859610(v20);
  a2[1] = v10;
  if (v10 == 0) {
  LABEL_26:
    v25 = SdkRoutine_857810(v10);
    return SdkRoutine_841f10(v25, v24);
  }
  v12 = a2[2];
LABEL_24:
  v24 = a2;
  *(_BYTE*)(v10 + v12) = 39;
  v25 = a1;
  ++a2[2];
  return SdkRoutine_841f10(v25, v24);
}

__int64 SdkHr_8423a0(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  _BYTE* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  _BYTE* v42;

  ++*(_DWORD*)(a2 + 40);
  v4 = *(_QWORD*)(a2 + 16);
  v5 = *(_QWORD*)(a2 + 24);
  v6 = v4 + 1;
  if (v4 + 1 <= v5) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v7 = *(_QWORD*)(a2 + 8);
    v8 = v4 + 993;
    if (2 * v5 <= v8) {
      v9 = v8;
    }
    else {
      v9 = 2 * v5;
    }
    *(_QWORD*)(a2 + 24) = v9;
    result = SdkRoutine_859610(v7);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_44;
    }
    v4 = *(_QWORD*)(a2 + 16);
    v6 = v4 + 1;
  }
  *(_QWORD*)(a2 + 16) = v6;
  *(_BYTE*)(result + v4) = 40;
  v11 = a1[2];
  (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v11);
  if ((*(_WORD*)(v11 + 9) & 0xC0) != 0x40) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v11);
  }
  --*(_DWORD*)(a2 + 40);
  v12 = *(_QWORD*)(a2 + 16);
  v13 = *(_QWORD*)(a2 + 24);
  v14 = v12 + 1;
  if (v12 + 1 <= v13) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v15 = *(_QWORD*)(a2 + 8);
    v16 = v12 + 993;
    if (2 * v13 <= v16) {
      v17 = v16;
    }
    else {
      v17 = 2 * v13;
    }
    *(_QWORD*)(a2 + 24) = v17;
    result = SdkRoutine_859610(v15);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_44;
    }
    v12 = *(_QWORD*)(a2 + 16);
    v14 = v12 + 1;
  }
  *(_QWORD*)(a2 + 16) = v14;
  *(_BYTE*)(result + v12) = 41;
  v18 = (_BYTE*)a1[3];
  if (*v18 == 110) {
    v19 = *(_QWORD*)(a2 + 16);
    v20 = *(_QWORD*)(a2 + 24);
    if (v19 + 1 > v20) {
      v21 = *(_QWORD*)(a2 + 8);
      v22 = v19 + 993;
      if (2 * v20 <= v22) {
        v23 = v22;
      }
      else {
        v23 = 2 * v20;
      }
      *(_QWORD*)(a2 + 24) = v23;
      result = SdkRoutine_859610(v21);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_44;
      }
      v24 = *(_QWORD*)(a2 + 16);
      *(_QWORD*)(a2 + 16) = v24 + 1;
      *(_BYTE*)(result + v24) = 45;
      v25 = a1[4];
      v26 = v25 - 1;
      if (v25 == 1) {
        return result;
      }
      goto LABEL_33;
    }
    result = *(_QWORD*)(a2 + 8);
    *(_QWORD*)(a2 + 16) = v19 + 1;
    *(_BYTE*)(result + v19) = 45;
    v33 = a1[4];
    v26 = v33 - 1;
    if (v33 != 1) {
    LABEL_33:
      v34 = *(_QWORD*)(a2 + 16);
      v35 = *(_QWORD*)(a2 + 24);
      v36 = a1[3];
      v37 = v34 + v26;
      if (v34 + v26 <= v35) {
        result = *(_QWORD*)(a2 + 8);
        goto LABEL_42;
      }
      v38 = *(_QWORD*)(a2 + 8);
      v39 = 2 * v35;
      if (v39 <= v37 + 992) {
        v40 = v37 + 992;
      }
      else {
        v40 = v39;
      }
      *(_QWORD*)(a2 + 24) = v40;
      result = SdkRoutine_859610(v38);
      *(_QWORD*)(a2 + 8) = result;
      if (result != 0) {
        v34 = *(_QWORD*)(a2 + 16);
      LABEL_42:
        v41 = result + v34;
        v42 = (_BYTE*)(v36 + 1);
        goto LABEL_43;
      }
    LABEL_44:
      SdkRoutine_857810(result);
      __udf(0);
    }
  }
  else {
    v26 = a1[4];
    if (v26 != 0) {
      v27 = *(_QWORD*)(a2 + 16);
      v28 = *(_QWORD*)(a2 + 24);
      v29 = v27 + v26;
      if (v27 + v26 <= v28) {
        result = *(_QWORD*)(a2 + 8);
      }
      else {
        v30 = *(_QWORD*)(a2 + 8);
        v31 = 2 * v28;
        if (v31 <= v29 + 992) {
          v32 = v29 + 992;
        }
        else {
          v32 = v31;
        }
        *(_QWORD*)(a2 + 24) = v32;
        result = SdkRoutine_859610(v30);
        *(_QWORD*)(a2 + 8) = result;
        if (result == 0) {
          goto LABEL_44;
        }
        v27 = *(_QWORD*)(a2 + 16);
      }
      v41 = result + v27;
      v42 = v18;
    LABEL_43:
      result = SdkRoutine_856130(v41, v42, v26);
      *(_QWORD*)(a2 + 16) += v26;
    }
  }
  return result;
}

__int64 SdkHr_8426b0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 2 <= v3) {
    result = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 994;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    result = SdkRoutine_859610(v6);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_18;
    }
    v2 = a2[2];
  }
  *(_WORD*)(result + v2) = 28774;
  v11 = a2[2] + 2LL;
  a2[2] = v11;
  v12 = *(_QWORD*)(a1 + 24);
  if (v12 == 0) {
    return result;
  }
  v13 = *(_QWORD*)(a1 + 16);
  v14 = a2[3];
  v15 = v11 + v12;
  if (v11 + v12 <= v14) {
    result = a2[1];
    goto LABEL_16;
  }
  v16 = a2[1];
  if (2 * v14 <= v15 + 992) {
    v17 = v15 + 992;
  }
  else {
    v17 = 2 * v14;
  }
  a2[3] = v17;
  result = SdkRoutine_859610(v16);
  a2[1] = result;
  if (result == 0) {
  LABEL_18:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v11 = a2[2];
LABEL_16:
  result = SdkRoutine_856130(result + v11, v13, v12);
  a2[2] += v12;
  return result;
}

__int64 SdkHr_842ba0(__int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 (**v18)();
  char v19;
  __int16 v20;
  __int64 v21;

  ++*(_DWORD*)(a1 + 40);
  v4 = *(_QWORD*)(a1 + 16);
  v5 = *(_QWORD*)(a1 + 24);
  v6 = v4 + 1;
  if (v4 + 1 <= v5) {
    result = *(_QWORD*)(a1 + 8);
  }
  else {
    v7 = *(_QWORD*)(a1 + 8);
    v8 = v4 + 993;
    if (2 * v5 <= v8) {
      v9 = v8;
    }
    else {
      v9 = 2 * v5;
    }
    *(_QWORD*)(a1 + 24) = v9;
    result = SdkRoutine_859610(v7);
    *(_QWORD*)(a1 + 8) = result;
    if (result == 0) {
      goto LABEL_18;
    }
    v4 = *(_QWORD*)(a1 + 16);
    v6 = v4 + 1;
  }
  *(_QWORD*)(a1 + 16) = v6;
  *(_BYTE*)(result + v4) = 40;
  v11 = *(_QWORD*)(a2 + 16);
  v19 = 42;
  v20 = 1344;
  v18 = SdkData_e83e50;
  v21 = v11;
  (*(void (**)(__int64, __int64 (***)()))(*(_QWORD*)a1 + 16LL))(a1, &v18);
  if ((v20 & 0xC0) != 0x40) {
    (*(void (**)(__int64, __int64 (***)()))(*(_QWORD*)a1 + 24LL))(a1, &v18);
  }
  --*(_DWORD*)(a1 + 40);
  v12 = *(_QWORD*)(a1 + 16);
  v13 = *(_QWORD*)(a1 + 24);
  v14 = v12 + 1;
  if (v12 + 1 <= v13) {
    result = *(_QWORD*)(a1 + 8);
    goto LABEL_17;
  }
  v15 = *(_QWORD*)(a1 + 8);
  v16 = v12 + 993;
  if (2 * v13 <= v16) {
    v17 = v16;
  }
  else {
    v17 = 2 * v13;
  }
  *(_QWORD*)(a1 + 24) = v17;
  result = SdkRoutine_859610(v15);
  *(_QWORD*)(a1 + 8) = result;
  if (result == 0) {
  LABEL_18:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v12 = *(_QWORD*)(a1 + 16);
  v14 = v12 + 1;
LABEL_17:
  *(_QWORD*)(a1 + 16) = v14;
  *(_BYTE*)(result + v12) = 41;
  return result;
}

__int64 SdkHr_842d00(__int64 a1, __int64 a2)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v7;
  __int64 result;
  unsigned int v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  int i;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v2 = *(_DWORD*)(a2 + 32);
  v3 = *(_DWORD*)(a2 + 36);
  v4 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(a2 + 32) = -1;
  v7 = *(_QWORD*)(a1 + 16);
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v7);
  if ((*(_WORD*)(v7 + 9) & 0xC0) != 0x40) {
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v7);
  }
  v9 = *(_DWORD*)(a2 + 36);
  if (v9 == -1) {
    v10 = *(_QWORD*)(a2 + 16);
    v11 = *(_QWORD*)(a2 + 24);
    if (v10 + 3 <= v11) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v12 = *(_QWORD*)(a2 + 8);
      v13 = v10 + 995;
      v14 = 2 * v11;
      if (v14 <= v13) {
        v15 = v13;
      }
      else {
        v15 = v14;
      }
      *(_QWORD*)(a2 + 24) = v15;
      result = SdkRoutine_859610(v12);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
      LABEL_28:
        v25 = SdkRoutine_857810(result);
        *(_DWORD*)(a2 + 32) = v2;
        *(_DWORD*)(a2 + 36) = v3;
        v26 = SdkRoutine_87c790(v25);
        *(_DWORD*)(a2 + 32) = v2;
        *(_DWORD*)(a2 + 36) = v3;
        SdkRoutine_87c790(v26);
        __udf(0);
      }
      v10 = *(_QWORD*)(a2 + 16);
    }
    v24 = result + v10;
    *(_BYTE*)(v24 + 2) = 46;
    *(_WORD*)v24 = 11822;
    v4 = *(_QWORD*)(a2 + 16) + 3LL;
    goto LABEL_26;
  }
  if (v9 == 0) {
    result = (*(__int64 (**)(__int64, _QWORD, __int64))(*(_QWORD*)a2 + 40LL))(
        a2, *(_QWORD*)(a2 + 16), v4);
  LABEL_26:
    *(_QWORD*)(a2 + 16) = v4;
    goto LABEL_27;
  }
  if (v9 >= 2) {
    for (i = 1; i != v9; ++i) {
      v17 = *(_QWORD*)(a2 + 16);
      v18 = *(_QWORD*)(a2 + 24);
      if (v17 + 2 <= v18) {
        result = *(_QWORD*)(a2 + 8);
      }
      else {
        v19 = *(_QWORD*)(a2 + 8);
        v20 = v17 + 994;
        v21 = 2 * v18;
        if (v21 <= v20) {
          v22 = v20;
        }
        else {
          v22 = v21;
        }
        *(_QWORD*)(a2 + 24) = v22;
        result = SdkRoutine_859610(v19);
        *(_QWORD*)(a2 + 8) = result;
        if (result == 0) {
          goto LABEL_28;
        }
        v17 = *(_QWORD*)(a2 + 16);
      }
      *(_WORD*)(result + v17) = 8236;
      *(_DWORD*)(a2 + 32) = i;
      v23 = *(_QWORD*)(a1 + 16);
      *(_QWORD*)(a2 + 16) += 2LL;
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v23);
      if ((*(_WORD*)(v23 + 9) & 0xC0) != 0x40) {
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v23);
      }
    }
  }
LABEL_27:
  *(_DWORD*)(a2 + 32) = v2;
  *(_DWORD*)(a2 + 36) = v3;
  return result;
}

__int64 SdkHr_842ef0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 result;

  v2 = a2[2];
  v3 = a2[3];
  v6 = v2 + 1;
  if (*(_BYTE*)(a1 + 32) == 1) {
    if (v6 <= v3) {
      v10 = a2[1];
    }
    else {
      v7 = a2[1];
      v8 = v2 + 993;
      if (2 * v3 <= v8) {
        v9 = v8;
      }
      else {
        v9 = 2 * v3;
      }
      a2[3] = v9;
      v10 = SdkRoutine_859610(v7);
      a2[1] = v10;
      if (v10 == 0) {
        goto LABEL_40;
      }
      v2 = a2[2];
      v6 = v2 + 1;
    }
    a2[2] = v6;
    *(_BYTE*)(v10 + v2) = 91;
    v14 = *(_QWORD*)(a1 + 16);
    (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v14);
    if ((*(_WORD*)(v14 + 9) & 0xC0) != 0x40) {
      (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v14);
    }
    v15 = a2[2];
    v16 = a2[3];
    v17 = v15 + 1;
    if (v15 + 1 <= v16) {
      v10 = a2[1];
    }
    else {
      v18 = a2[1];
      v19 = v15 + 993;
      if (2 * v16 <= v19) {
        v20 = v19;
      }
      else {
        v20 = 2 * v16;
      }
      a2[3] = v20;
      v10 = SdkRoutine_859610(v18);
      a2[1] = v10;
      if (v10 == 0) {
        goto LABEL_40;
      }
      v15 = a2[2];
      v17 = v15 + 1;
    }
    a2[2] = v17;
    *(_BYTE*)(v10 + v15) = 93;
    v22 = *(_QWORD*)(a1 + 24);
    if ((unsigned int)*(unsigned __int8*)(v22 + 8) - 81 < 2) {
      goto LABEL_38;
    }
    goto LABEL_30;
  }
  if (v6 <= v3) {
    v10 = a2[1];
  }
  else {
    v11 = a2[1];
    v12 = v2 + 993;
    if (2 * v3 <= v12) {
      v13 = v12;
    }
    else {
      v13 = 2 * v3;
    }
    a2[3] = v13;
    v10 = SdkRoutine_859610(v11);
    a2[1] = v10;
    if (v10 == 0) {
      goto LABEL_40;
    }
    v2 = a2[2];
    v6 = v2 + 1;
  }
  a2[2] = v6;
  *(_BYTE*)(v10 + v2) = 46;
  v21 = *(_QWORD*)(a1 + 16);
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v21);
  if ((*(_WORD*)(v21 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v21);
  }
  v22 = *(_QWORD*)(a1 + 24);
  if ((unsigned int)*(unsigned __int8*)(v22 + 8) - 81 >= 2) {
  LABEL_30:
    v23 = a2[2];
    v24 = a2[3];
    if (v23 + 3 <= v24) {
      v10 = a2[1];
      goto LABEL_37;
    }
    v25 = a2[1];
    v26 = v23 + 995;
    v27 = 2 * v24;
    if (v27 <= v26) {
      v28 = v26;
    }
    else {
      v28 = v27;
    }
    a2[3] = v28;
    v10 = SdkRoutine_859610(v25);
    a2[1] = v10;
    if (v10 != 0) {
      v23 = a2[2];
    LABEL_37:
      v29 = v10 + v23;
      *(_BYTE*)(v29 + 2) = 32;
      *(_WORD*)v29 = 15648;
      v22 = *(_QWORD*)(a1 + 24);
      a2[2] += 3LL;
      goto LABEL_38;
    }
  LABEL_40:
    SdkRoutine_857810(v10);
    __udf(0);
  }
LABEL_38:
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v22);
  if ((*(_WORD*)(v22 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v22);
  }
  return result;
}

__int64 SdkHr_843170(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 result;

  v2 = a2[2];
  v3 = a2[3];
  v6 = v2 + 1;
  if (v2 + 1 <= v3) {
    v10 = a2[1];
  }
  else {
    v7 = a2[1];
    v8 = v2 + 993;
    if (2 * v3 <= v8) {
      v9 = v8;
    }
    else {
      v9 = 2 * v3;
    }
    a2[3] = v9;
    v10 = SdkRoutine_859610(v7);
    a2[1] = v10;
    if (v10 == 0) {
      goto LABEL_37;
    }
    v2 = a2[2];
    v6 = v2 + 1;
  }
  a2[2] = v6;
  *(_BYTE*)(v10 + v2) = 91;
  v11 = a1[2];
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v11);
  if ((*(_WORD*)(v11 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v11);
  }
  v12 = a2[2];
  v13 = a2[3];
  if (v12 + 5 <= v13) {
    v10 = a2[1];
  }
  else {
    v14 = a2[1];
    v15 = v12 + 997;
    v16 = 2 * v13;
    if (v16 <= v15) {
      v17 = v15;
    }
    else {
      v17 = v16;
    }
    a2[3] = v17;
    v10 = SdkRoutine_859610(v14);
    a2[1] = v10;
    if (v10 == 0) {
      goto LABEL_37;
    }
    v12 = a2[2];
  }
  v18 = v10 + v12;
  *(_BYTE*)(v18 + 4) = 32;
  *(_DWORD*)v18 = 774778400;
  v19 = a1[3];
  a2[2] += 5LL;
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v19);
  if ((*(_WORD*)(v19 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v19);
  }
  v20 = a2[2];
  v21 = a2[3];
  v22 = v20 + 1;
  if (v20 + 1 <= v21) {
    v10 = a2[1];
  }
  else {
    v23 = a2[1];
    v24 = v20 + 993;
    if (2 * v21 <= v24) {
      v25 = v24;
    }
    else {
      v25 = 2 * v21;
    }
    a2[3] = v25;
    v10 = SdkRoutine_859610(v23);
    a2[1] = v10;
    if (v10 == 0) {
      goto LABEL_37;
    }
    v20 = a2[2];
    v22 = v20 + 1;
  }
  a2[2] = v22;
  *(_BYTE*)(v10 + v20) = 93;
  v26 = a1[4];
  if ((unsigned int)*(unsigned __int8*)(v26 + 8) - 81 < 2) {
    goto LABEL_35;
  }
  v27 = a2[2];
  v28 = a2[3];
  if (v27 + 3 <= v28) {
    v10 = a2[1];
    goto LABEL_34;
  }
  v29 = a2[1];
  v30 = v27 + 995;
  v31 = 2 * v28;
  if (v31 <= v30) {
    v32 = v30;
  }
  else {
    v32 = v31;
  }
  a2[3] = v32;
  v10 = SdkRoutine_859610(v29);
  a2[1] = v10;
  if (v10 == 0) {
  LABEL_37:
    SdkRoutine_857810(v10);
    __udf(0);
  }
  v27 = a2[2];
LABEL_34:
  v33 = v10 + v27;
  *(_BYTE*)(v33 + 2) = 32;
  *(_WORD*)v33 = 15648;
  v26 = a1[4];
  a2[2] += 3LL;
LABEL_35:
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v26);
  if ((*(_WORD*)(v26 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v26);
  }
  return result;
}

__int64 SdkHr_843520(__int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;

  ++*(_DWORD*)(a2 + 40);
  v4 = *(_QWORD*)(a2 + 16);
  v5 = *(_QWORD*)(a2 + 24);
  v6 = v4 + 1;
  if (v4 + 1 <= v5) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v7 = *(_QWORD*)(a2 + 8);
    v8 = v4 + 993;
    if (2 * v5 <= v8) {
      v9 = v8;
    }
    else {
      v9 = 2 * v5;
    }
    *(_QWORD*)(a2 + 24) = v9;
    result = SdkRoutine_859610(v7);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_34;
    }
    v4 = *(_QWORD*)(a2 + 16);
    v6 = v4 + 1;
  }
  *(_QWORD*)(a2 + 16) = v6;
  *(_BYTE*)(result + v4) = 40;
  v11 = *(_QWORD*)(a1 + 16);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v11);
  if ((*(_WORD*)(v11 + 9) & 0xC0) != 0x40) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v11);
  }
  --*(_DWORD*)(a2 + 40);
  v12 = *(_QWORD*)(a2 + 16);
  v13 = *(_QWORD*)(a2 + 24);
  v14 = v12 + 1;
  if (v12 + 1 <= v13) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v15 = *(_QWORD*)(a2 + 8);
    v16 = v12 + 993;
    if (2 * v13 <= v16) {
      v17 = v16;
    }
    else {
      v17 = 2 * v13;
    }
    *(_QWORD*)(a2 + 24) = v17;
    result = SdkRoutine_859610(v15);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_34;
    }
    v12 = *(_QWORD*)(a2 + 16);
    v14 = v12 + 1;
  }
  *(_QWORD*)(a2 + 16) = v14;
  *(_BYTE*)(result + v12) = 41;
  ++*(_DWORD*)(a2 + 40);
  v18 = *(_QWORD*)(a2 + 16);
  v19 = *(_QWORD*)(a2 + 24);
  v20 = v18 + 1;
  if (v18 + 1 <= v19) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v21 = *(_QWORD*)(a2 + 8);
    v22 = v18 + 993;
    if (2 * v19 <= v22) {
      v23 = v22;
    }
    else {
      v23 = 2 * v19;
    }
    *(_QWORD*)(a2 + 24) = v23;
    result = SdkRoutine_859610(v21);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_34;
    }
    v18 = *(_QWORD*)(a2 + 16);
    v20 = v18 + 1;
  }
  *(_QWORD*)(a2 + 16) = v20;
  *(_BYTE*)(result + v18) = 40;
  v24 = *(_QWORD*)(a1 + 24);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v24);
  if ((*(_WORD*)(v24 + 9) & 0xC0) != 0x40) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v24);
  }
  --*(_DWORD*)(a2 + 40);
  v25 = *(_QWORD*)(a2 + 16);
  v26 = *(_QWORD*)(a2 + 24);
  v27 = v25 + 1;
  if (v25 + 1 <= v26) {
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_33;
  }
  v28 = *(_QWORD*)(a2 + 8);
  v29 = v25 + 993;
  if (2 * v26 <= v29) {
    v30 = v29;
  }
  else {
    v30 = 2 * v26;
  }
  *(_QWORD*)(a2 + 24) = v30;
  result = SdkRoutine_859610(v28);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
  LABEL_34:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v25 = *(_QWORD*)(a2 + 16);
  v27 = v25 + 1;
LABEL_33:
  *(_QWORD*)(a2 + 16) = v27;
  *(_BYTE*)(result + v25) = 41;
  return result;
}

__int64 SdkHr_843740(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;
  char v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;

  v2 = *(_QWORD*)(a2 + 16);
  v3 = *(_QWORD*)(a2 + 24);
  if (v2 + 1 <= v3) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v6 = *(_QWORD*)(a2 + 8);
    v7 = v2 + 993;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    *(_QWORD*)(a2 + 24) = v9;
    result = SdkRoutine_859610(v6);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_56;
    }
    v2 = *(_QWORD*)(a2 + 16);
  }
  *(_BYTE*)(result + v2) = 32;
  v11 = *(_QWORD*)(a2 + 16);
  v12 = *(_BYTE*)(a1 + 24);
  v13 = v11 + 1;
  *(_QWORD*)(a2 + 16) = v11 + 1;
  if ((v12 & 1) != 0 || *(_QWORD*)(a1 + 32) != 0) {
    v14 = *(_QWORD*)(a2 + 24);
    ++*(_DWORD*)(a2 + 40);
    v15 = v11 + 2;
    if (v11 + 2 <= v14) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v16 = *(_QWORD*)(a2 + 8);
      if (2 * v14 <= v11 + 994) {
        v17 = v11 + 994;
      }
      else {
        v17 = 2 * v14;
      }
      *(_QWORD*)(a2 + 24) = v17;
      result = SdkRoutine_859610(v16);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_56;
      }
      v13 = *(_QWORD*)(a2 + 16);
      v15 = v13 + 1;
    }
    *(_QWORD*)(a2 + 16) = v15;
    *(_BYTE*)(result + v13) = 123;
  }
  v18 = *(_QWORD*)(a1 + 16);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v18);
  if ((*(_WORD*)(v18 + 9) & 0xC0) != 0x40) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v18);
  }
  if ((*(_BYTE*)(a1 + 24) & 1) == 0 && *(_QWORD*)(a1 + 32) == 0) {
    goto LABEL_48;
  }
  --*(_DWORD*)(a2 + 40);
  v19 = *(_QWORD*)(a2 + 16);
  v20 = *(_QWORD*)(a2 + 24);
  if (v19 + 1 <= v20) {
    v25 = *(_QWORD*)(a2 + 8);
    *(_QWORD*)(a2 + 16) = v19 + 1;
    *(_BYTE*)(v25 + v19) = 125;
    if (*(_BYTE*)(a1 + 24) != 1) {
      goto LABEL_28;
    }
  }
  else {
    v21 = *(_QWORD*)(a2 + 8);
    v22 = v19 + 993;
    if (2 * v20 <= v22) {
      v23 = v22;
    }
    else {
      v23 = 2 * v20;
    }
    *(_QWORD*)(a2 + 24) = v23;
    result = SdkRoutine_859610(v21);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_56;
    }
    v24 = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(a2 + 16) = v24 + 1;
    *(_BYTE*)(result + v24) = 125;
    if (*(_BYTE*)(a1 + 24) != 1) {
    LABEL_28:
      if (*(_QWORD*)(a1 + 32) == 0) {
        goto LABEL_48;
      }
      goto LABEL_39;
    }
  }
  v26 = *(_QWORD*)(a2 + 16);
  v27 = *(_QWORD*)(a2 + 24);
  if (v26 + 9 <= v27) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v28 = *(_QWORD*)(a2 + 8);
    v29 = v26 + 1001;
    v30 = 2 * v27;
    if (v30 <= v29) {
      v31 = v29;
    }
    else {
      v31 = v30;
    }
    *(_QWORD*)(a2 + 24) = v31;
    result = SdkRoutine_859610(v28);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_56;
    }
    v26 = *(_QWORD*)(a2 + 16);
  }
  v32 = result + v26;
  *(_QWORD*)v32 = *(_QWORD*)" noexcept";
  *(_BYTE*)(v32 + 8) = 116;
  *(_QWORD*)(a2 + 16) += 9LL;
  if (*(_QWORD*)(a1 + 32) != 0) {
  LABEL_39:
    v33 = *(_QWORD*)(a2 + 16);
    v34 = *(_QWORD*)(a2 + 24);
    if (v33 + 4 <= v34) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v35 = *(_QWORD*)(a2 + 8);
      v36 = v33 + 996;
      v37 = 2 * v34;
      if (v37 <= v36) {
        v38 = v36;
      }
      else {
        v38 = v37;
      }
      *(_QWORD*)(a2 + 24) = v38;
      result = SdkRoutine_859610(v35);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_56;
      }
      v33 = *(_QWORD*)(a2 + 16);
    }
    *(_DWORD*)(result + v33) = 540945696;
    v39 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a2 + 16) += 4LL;
    (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v39);
    if ((*(_WORD*)(v39 + 9) & 0xC0) != 0x40) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v39);
    }
  }
LABEL_48:
  v40 = *(_QWORD*)(a2 + 16);
  v41 = *(_QWORD*)(a2 + 24);
  v42 = v40 + 1;
  if (v40 + 1 <= v41) {
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_55;
  }
  v43 = *(_QWORD*)(a2 + 8);
  v44 = v40 + 993;
  if (2 * v41 <= v44) {
    v45 = v44;
  }
  else {
    v45 = 2 * v41;
  }
  *(_QWORD*)(a2 + 24) = v45;
  result = SdkRoutine_859610(v43);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
  LABEL_56:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v40 = *(_QWORD*)(a2 + 16);
  v42 = v40 + 1;
LABEL_55:
  *(_QWORD*)(a2 + 16) = v42;
  *(_BYTE*)(result + v40) = 59;
  return result;
}

__int64 SdkHr_843a60(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 10 <= v3) {
    result = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 1002;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    result = SdkRoutine_859610(v6);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_18;
    }
    v2 = a2[2];
  }
  v11 = result + v2;
  *(_QWORD*)v11 = *(_QWORD*)" typename ";
  *(_WORD*)(v11 + 8) = 8293;
  v12 = *(_QWORD*)(a1 + 16);
  a2[2] += 10LL;
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v12);
  if ((*(_WORD*)(v12 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v12);
  }
  v13 = a2[2];
  v14 = a2[3];
  v15 = v13 + 1;
  if (v13 + 1 <= v14) {
    result = a2[1];
    goto LABEL_17;
  }
  v16 = a2[1];
  v17 = v13 + 993;
  if (2 * v14 <= v17) {
    v18 = v17;
  }
  else {
    v18 = 2 * v14;
  }
  a2[3] = v18;
  result = SdkRoutine_859610(v16);
  a2[1] = result;
  if (result == 0) {
  LABEL_18:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v13 = a2[2];
  v15 = v13 + 1;
LABEL_17:
  a2[2] = v15;
  *(_BYTE*)(result + v13) = 59;
  return result;
}

__int64 SdkHr_844040(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _BYTE* v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;

  v2 = a1[3];
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v2);
  if ((*(_WORD*)(v2 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v2);
  }
  v5 = a2[2];
  v6 = a2[3];
  if (v5 + 2 <= v6) {
    result = a2[1];
  }
  else {
    v7 = a2[1];
    v8 = v5 + 994;
    v9 = 2 * v6;
    if (v9 <= v8) {
      v10 = v8;
    }
    else {
      v10 = v9;
    }
    a2[3] = v10;
    result = SdkRoutine_859610(v7);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_63;
    }
    v5 = a2[2];
  }
  *(_WORD*)(result + v5) = 15406;
  v12 = a1[2];
  a2[2] += 2LL;
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v12);
  if ((*(_WORD*)(v12 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v12);
  }
  v13 = a2[2];
  v14 = a2[3];
  if (v13 + 11 <= v14) {
    result = a2[1];
  }
  else {
    v15 = a2[1];
    v16 = v13 + 1003;
    v17 = 2 * v14;
    if (v17 <= v16) {
      v18 = v16;
    }
    else {
      v18 = v17;
    }
    a2[3] = v18;
    result = SdkRoutine_859610(v15);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_63;
    }
    v13 = a2[2];
  }
  v19 = result + v13;
  *(_QWORD*)v19 = *(_QWORD*)" at offset ";
  *(_DWORD*)(v19 + 7) = 544499059;
  v20 = a2[2];
  v21 = a1[5];
  v22 = v20 + 11;
  a2[2] = v20 + 11;
  if (v21 == 0) {
    v27 = a2[3];
    if (v20 + 12 <= v27) {
      result = a2[1];
    }
    else {
      v28 = a2[1];
      if (2 * v27 <= v20 + 1004) {
        v29 = v20 + 1004;
      }
      else {
        v29 = 2 * v27;
      }
      a2[3] = v29;
      result = SdkRoutine_859610(v28);
      a2[1] = result;
      if (result == 0) {
        goto LABEL_63;
      }
      v22 = a2[2];
    }
    v21 = 1;
    *(_BYTE*)(result + v22) = 48;
    goto LABEL_54;
  }
  v23 = (_BYTE*)a1[4];
  v24 = a2[3];
  if (*v23 != 110) {
    v30 = v22 + v21;
    if (v22 + v21 <= v24) {
      result = a2[1];
    }
    else {
      v31 = a2[1];
      if (2 * v24 <= v30 + 992) {
        v32 = v30 + 992;
      }
      else {
        v32 = 2 * v24;
      }
      a2[3] = v32;
      result = SdkRoutine_859610(v31);
      a2[1] = result;
      if (result == 0) {
        goto LABEL_63;
      }
      v22 = a2[2];
    }
    v41 = result + v22;
    v42 = v23;
    goto LABEL_53;
  }
  if (v20 + 12 <= v24) {
    result = a2[1];
  }
  else {
    v25 = a2[1];
    if (2 * v24 <= v20 + 1004) {
      v26 = v20 + 1004;
    }
    else {
      v26 = 2 * v24;
    }
    a2[3] = v26;
    result = SdkRoutine_859610(v25);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_63;
    }
    v22 = a2[2];
  }
  *(_BYTE*)(result + v22) = 45;
  v33 = a2[2];
  v34 = a1[5];
  v35 = v33 + 1;
  v21 = v34 - 1;
  a2[2] = v33 + 1;
  if (v34 != 1) {
    v36 = a1[4];
    v37 = v33 + v34;
    v38 = a2[3];
    if (v37 <= v38) {
      result = a2[1];
    }
    else {
      v39 = a2[1];
      if (2 * v38 <= v37 + 992) {
        v40 = v37 + 992;
      }
      else {
        v40 = 2 * v38;
      }
      a2[3] = v40;
      result = SdkRoutine_859610(v39);
      a2[1] = result;
      if (result == 0) {
        goto LABEL_63;
      }
      v35 = a2[2];
    }
    v41 = result + v35;
    v42 = (_BYTE*)(v36 + 1);
  LABEL_53:
    SdkRoutine_856130(v41, v42, v21);
  LABEL_54:
    v35 = a2[2] + v21;
    a2[2] = v35;
  }
  v43 = a2[3];
  if (v35 + 1 <= v43) {
    result = a2[1];
    goto LABEL_62;
  }
  v44 = a2[1];
  v45 = v35 + 993;
  v46 = 2 * v43;
  if (v46 <= v45) {
    v47 = v45;
  }
  else {
    v47 = v46;
  }
  a2[3] = v47;
  result = SdkRoutine_859610(v44);
  a2[1] = result;
  if (result == 0) {
  LABEL_63:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v35 = a2[2];
LABEL_62:
  *(_BYTE*)(result + v35) = 62;
  ++a2[2];
  return result;
}

__int64 SdkHr_844370(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 (**v25)();
  char v26;
  __int16 v27;
  __int64 v28;

  v2 = *(_QWORD*)(a2 + 16);
  v3 = *(_QWORD*)(a2 + 24);
  if (v2 + 9 <= v3) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v6 = *(_QWORD*)(a2 + 8);
    v7 = v2 + 1001;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    *(_QWORD*)(a2 + 24) = v9;
    result = SdkRoutine_859610(v6);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_23;
    }
    v2 = *(_QWORD*)(a2 + 16);
  }
  v11 = result + v2;
  *(_QWORD*)v11 = *(_QWORD*)"sizeof...";
  *(_BYTE*)(v11 + 8) = 46;
  v12 = *(_QWORD*)(a2 + 16);
  v13 = *(_QWORD*)(a2 + 24);
  v14 = v12 + 9;
  ++*(_DWORD*)(a2 + 40);
  v15 = v12 + 10;
  *(_QWORD*)(a2 + 16) = v12 + 9;
  if (v12 + 10 <= v13) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v16 = *(_QWORD*)(a2 + 8);
    if (2 * v13 <= v12 + 1002) {
      v17 = v12 + 1002;
    }
    else {
      v17 = 2 * v13;
    }
    *(_QWORD*)(a2 + 24) = v17;
    result = SdkRoutine_859610(v16);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_23;
    }
    v14 = *(_QWORD*)(a2 + 16);
    v15 = v14 + 1;
  }
  *(_QWORD*)(a2 + 16) = v15;
  *(_BYTE*)(result + v14) = 40;
  v18 = *(_QWORD*)(a1 + 16);
  v26 = 42;
  v27 = 1344;
  v25 = SdkData_e83e50;
  v28 = v18;
  SdkRoutine_842d00((__int64)&v25, a2);
  --*(_DWORD*)(a2 + 40);
  v19 = *(_QWORD*)(a2 + 16);
  v20 = *(_QWORD*)(a2 + 24);
  v21 = v19 + 1;
  if (v19 + 1 <= v20) {
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_22;
  }
  v22 = *(_QWORD*)(a2 + 8);
  v23 = v19 + 993;
  if (2 * v20 <= v23) {
    v24 = v23;
  }
  else {
    v24 = 2 * v20;
  }
  *(_QWORD*)(a2 + 24) = v24;
  result = SdkRoutine_859610(v22);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
  LABEL_23:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v19 = *(_QWORD*)(a2 + 16);
  v21 = v19 + 1;
LABEL_22:
  *(_QWORD*)(a2 + 16) = v21;
  *(_BYTE*)(result + v19) = 41;
  return result;
}

__int64 SdkHr_844500(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 6 <= v3) {
    v10 = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 998;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    v10 = SdkRoutine_859610(v6);
    a2[1] = v10;
    if (v10 == 0) {
      SdkRoutine_857810(0);
      __udf(0);
    }
    v2 = a2[2];
  }
  v11 = v10 + v2;
  *(_WORD*)(v11 + 4) = 8311;
  *(_DWORD*)v11 = 1869768820;
  v12 = *(_QWORD*)(a1 + 16);
  a2[2] += 6LL;
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v12);
  if ((*(_WORD*)(v12 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v12);
  }
  return result;
}

__int64 SdkHr_844a40(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 16);
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v2);
  if ((*(_WORD*)(v2 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v2);
  }
  v5 = a2[2];
  v6 = a2[3];
  if (v5 + 2 <= v6) {
    v11 = a2[1];
  }
  else {
    v7 = a2[1];
    v8 = v5 + 994;
    v9 = 2 * v6;
    if (v9 <= v8) {
      v10 = v8;
    }
    else {
      v10 = v9;
    }
    a2[3] = v10;
    v11 = SdkRoutine_859610(v7);
    a2[1] = v11;
    if (v11 == 0) {
      SdkRoutine_857810(0);
      __udf(0);
    }
    v5 = a2[2];
  }
  *(_WORD*)(v11 + v5) = 14906;
  v12 = *(_QWORD*)(a1 + 24);
  a2[2] += 2LL;
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v12);
  if ((*(_WORD*)(v12 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v12);
  }
  return result;
}

__int64 SdkHr_844f00(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 1 <= v3) {
    v10 = a2[1];
    goto LABEL_8;
  }
  v6 = a2[1];
  v7 = v2 + 993;
  v8 = 2 * v3;
  if (v8 <= v7) {
    v9 = v7;
  }
  else {
    v9 = v8;
  }
  a2[3] = v9;
  v10 = SdkRoutine_859610(v6);
  a2[1] = v10;
  if (v10 != 0) {
    v2 = a2[2];
  LABEL_8:
    *(_BYTE*)(v10 + v2) = 126;
    v11 = *(_QWORD*)(a1 + 16);
    ++a2[2];
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v11);
  }
  v13 = SdkRoutine_857810(0);
  return SdkRoutine_844f90(v13);
}

__int64 SdkHr_844f90(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 9 <= v3) {
    v10 = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 1001;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    v10 = SdkRoutine_859610(v6);
    a2[1] = v10;
    if (v10 == 0) {
      SdkRoutine_857810(0);
      __udf(0);
    }
    v2 = a2[2];
  }
  v11 = v10 + v2;
  *(_QWORD*)v11 = *(_QWORD*)"operator ";
  *(_BYTE*)(v11 + 8) = 32;
  v12 = *(_QWORD*)(a1 + 16);
  a2[2] += 9LL;
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v12);
  if ((*(_WORD*)(v12 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v12);
  }
  return result;
}

__int64 SdkHr_845070(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 11 <= v3) {
    v10 = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 1003;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    v10 = SdkRoutine_859610(v6);
    a2[1] = v10;
    if (v10 == 0) {
      SdkRoutine_857810(0);
      __udf(0);
    }
    v2 = a2[2];
  }
  v11 = v10 + v2;
  *(_QWORD*)v11 = *(_QWORD*)"operator\"\" ";
  *(_DWORD*)(v11 + 7) = 539107954;
  v12 = *(_QWORD*)(a1 + 16);
  a2[2] += 11LL;
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v12);
  if ((*(_WORD*)(v12 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v12);
  }
  return result;
}

__int64 SdkHr_845160(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 2 <= v3) {
    v10 = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 994;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    v10 = SdkRoutine_859610(v6);
    a2[1] = v10;
    if (v10 == 0) {
      SdkRoutine_857810(0);
      __udf(0);
    }
    v2 = a2[2];
  }
  *(_WORD*)(v10 + v2) = 14906;
  v11 = *(_QWORD*)(a1 + 16);
  a2[2] += 2LL;
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v11);
  if ((*(_WORD*)(v11 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v11);
  }
  return result;
}

__int64 SdkHr_845480(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  __int64 result;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 5 <= v3) {
    v10 = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 997;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    v10 = SdkRoutine_859610(v6);
    a2[1] = v10;
    if (v10 == 0) {
      goto LABEL_34;
    }
    v2 = a2[2];
  }
  v11 = v10 + v2;
  *(_BYTE*)(v11 + 4) = 58;
  *(_DWORD*)v11 = 979661939;
  v12 = *(_DWORD*)(a1 + 12);
  v13 = a2[2] + 5LL;
  a2[2] = v13;
  if (v12 > 2) {
    if (v12 == 3) {
      v14 = "basic_istream";
    }
    else {
      if (v12 == 5) {
        v14 = "basic_iostream";
        v15 = 8;
        goto LABEL_22;
      }
      v14 = "basic_ostream";
    }
    v15 = 7;
  }
  else {
    if ((unsigned int)(v12 - 1) >= 2) {
      v14 = "allocator";
      v15 = 9;
      v16 = a2[3];
      v17 = v13 + 9;
      if (v13 + 9 > v16) {
        goto LABEL_28;
      }
      goto LABEL_16;
    }
    v14 = "basic_string";
    if ((unsigned int)v12 < 2) {
      v15 = 12;
      v16 = a2[3];
      v17 = v13 + 12;
      if (v13 + 12 > v16) {
        goto LABEL_28;
      }
      goto LABEL_16;
    }
    v15 = 6;
  }
LABEL_22:
  if (*(_DWORD*)v14 != 1769169250 || *((_WORD*)v14 + 2) != 24419) {
  LABEL_35:
    SdkRoutine_84c1f0("libc++abi: ");
  }
  v14 += 6;
  v16 = a2[3];
  v17 = v13 + v15;
  if (v13 + v15 > v16) {
  LABEL_28:
    v19 = a2[1];
    if (2 * v16 <= v17 + 992) {
      v20 = v17 + 992;
    }
    else {
      v20 = 2 * v16;
    }
    a2[3] = v20;
    v10 = SdkRoutine_859610(v19);
    a2[1] = v10;
    if (v10 != 0) {
      v13 = a2[2];
      goto LABEL_33;
    }
  LABEL_34:
    SdkRoutine_857810(v10);
    goto LABEL_35;
  }
LABEL_16:
  v10 = a2[1];
LABEL_33:
  result = SdkRoutine_856130(v10 + v13, v14, v15);
  a2[2] += v15;
  return result;
}

__int64 SdkHr_8458c0(_QWORD* a1, _QWORD* a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;

  (*(void (**)(_QWORD*, _QWORD))(*a2 + 16LL))(a2, a1[2]);
  v4 = a2[2];
  v5 = a2[3];
  if (v4 + 5 <= v5) {
    result = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v4 + 997;
    v8 = 2 * v5;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    result = SdkRoutine_859610(v6);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_25;
    }
    v4 = a2[2];
  }
  v11 = result + v4;
  *(_BYTE*)(v11 + 4) = 58;
  *(_DWORD*)v11 = 1768055131;
  v12 = a2[2] + 5LL;
  a2[2] = v12;
  v13 = a1[4];
  if (v13 != 0) {
    v14 = a1[3];
    v15 = a2[3];
    v16 = v12 + v13;
    if (v12 + v13 <= v15) {
      result = a2[1];
    }
    else {
      v17 = a2[1];
      if (2 * v15 <= v16 + 992) {
        v18 = v16 + 992;
      }
      else {
        v18 = 2 * v15;
      }
      a2[3] = v18;
      result = SdkRoutine_859610(v17);
      a2[1] = result;
      if (result == 0) {
        goto LABEL_25;
      }
      v12 = a2[2];
    }
    SdkRoutine_856130(result + v12, v14, v13);
    v12 = a2[2] + v13;
    a2[2] = v12;
  }
  v19 = a2[3];
  if (v12 + 1 <= v19) {
    result = a2[1];
    goto LABEL_24;
  }
  v20 = a2[1];
  v21 = v12 + 993;
  v22 = 2 * v19;
  if (v22 <= v21) {
    v23 = v21;
  }
  else {
    v23 = v22;
  }
  a2[3] = v23;
  result = SdkRoutine_859610(v20);
  a2[1] = result;
  if (result == 0) {
  LABEL_25:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v12 = a2[2];
LABEL_24:
  *(_BYTE*)(result + v12) = 93;
  ++a2[2];
  return result;
}

__int64 SdkHr_845d90(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 24);
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v2);
  if ((*(_WORD*)(v2 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v2);
  }
  v5 = a2[2];
  v6 = a2[3];
  v7 = v5 + 1;
  if (v5 + 1 <= v6) {
    v11 = a2[1];
  }
  else {
    v8 = a2[1];
    v9 = v5 + 993;
    if (2 * v6 <= v9) {
      v10 = v9;
    }
    else {
      v10 = 2 * v6;
    }
    a2[3] = v10;
    v11 = SdkRoutine_859610(v8);
    a2[1] = v11;
    if (v11 == 0) {
      SdkRoutine_857810(0);
      __udf(0);
    }
    v5 = a2[2];
    v7 = v5 + 1;
  }
  a2[2] = v7;
  *(_BYTE*)(v11 + v5) = 64;
  v12 = *(_QWORD*)(a1 + 16);
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v12);
  if ((*(_WORD*)(v12 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v12);
  }
  return result;
}

__int64 SdkHr_846610(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 5 <= v3) {
    v10 = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 997;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    v10 = SdkRoutine_859610(v6);
    a2[1] = v10;
    if (v10 == 0) {
      SdkRoutine_857810(0);
      __udf(0);
    }
    v2 = a2[2];
  }
  v11 = v10 + v2;
  *(_BYTE*)(v11 + 4) = 32;
  *(_DWORD*)v11 = 1936287860;
  v12 = *(_QWORD*)(a1 + 16);
  a2[2] += 5LL;
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v12);
  if ((*(_WORD*)(v12 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v12);
  }
  return result;
}

__int64 SdkHr_8466f0(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  if (*(_QWORD*)(a1 + 16) == 0) {
    goto LABEL_14;
  }
  (*(void (**)(_QWORD*))(*a2 + 16LL))(a2);
  v4 = *(_QWORD*)(a1 + 16);
  if ((char)*(_WORD*)(v4 + 9) >= -64) {
    if ((unsigned __int8)*(_WORD*)(v4 + 9) < 0x40u) {
      goto LABEL_14;
    }
  }
  else if (((**(__int64 (***)(__int64, _QWORD*))v4)(v4, a2) & 1) != 0) {
    goto LABEL_14;
  }
  v5 = a2[2];
  v6 = a2[3];
  if (v5 + 1 <= v6) {
    v11 = a2[1];
  }
  else {
    v7 = a2[1];
    v8 = v5 + 993;
    v9 = 2 * v6;
    if (v9 <= v8) {
      v10 = v8;
    }
    else {
      v10 = v9;
    }
    a2[3] = v10;
    v11 = SdkRoutine_859610(v7);
    a2[1] = v11;
    if (v11 == 0) {
      SdkRoutine_857810(0);
      __udf(0);
    }
    v5 = a2[2];
  }
  *(_BYTE*)(v11 + v5) = 32;
  ++a2[2];
LABEL_14:
  v12 = *(_QWORD*)(a1 + 24);
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v12);
  if ((*(_WORD*)(v12 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v12);
  }
  return result;
}

__int64 SdkHr_846c40(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;

  v2 = a1[2];
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v2);
  if ((*(_WORD*)(v2 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v2);
  }
  v5 = a2[2];
  v6 = a2[3];
  if (v5 + 2 <= v6) {
    result = a2[1];
  }
  else {
    v7 = a2[1];
    v8 = v5 + 994;
    v9 = 2 * v6;
    if (v9 <= v8) {
      v10 = v8;
    }
    else {
      v10 = v9;
    }
    a2[3] = v10;
    result = SdkRoutine_859610(v7);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_27;
    }
    v5 = a2[2];
  }
  *(_WORD*)(result + v5) = 10272;
  v12 = a2[2] + 2LL;
  a2[2] = v12;
  v13 = a1[4];
  if (v13 != 0) {
    v14 = a1[3];
    v15 = a2[3];
    v16 = v12 + v13;
    if (v12 + v13 <= v15) {
      result = a2[1];
    }
    else {
      v17 = a2[1];
      if (2 * v15 <= v16 + 992) {
        v18 = v16 + 992;
      }
      else {
        v18 = 2 * v15;
      }
      a2[3] = v18;
      result = SdkRoutine_859610(v17);
      a2[1] = result;
      if (result == 0) {
        goto LABEL_27;
      }
      v12 = a2[2];
    }
    SdkRoutine_856130(result + v12, v14, v13);
    v12 = a2[2] + v13;
    a2[2] = v12;
  }
  v19 = a2[3];
  if (v12 + 1 <= v19) {
    result = a2[1];
    goto LABEL_26;
  }
  v20 = a2[1];
  v21 = v12 + 993;
  v22 = 2 * v19;
  if (v22 <= v21) {
    v23 = v21;
  }
  else {
    v23 = v22;
  }
  a2[3] = v23;
  result = SdkRoutine_859610(v20);
  a2[1] = result;
  if (result == 0) {
  LABEL_27:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v12 = a2[2];
LABEL_26:
  *(_BYTE*)(result + v12) = 41;
  ++a2[2];
  return result;
}

__int64 SdkHr_848450(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 result;

  (*(void (**)(_QWORD*, _QWORD))(*a2 + 16LL))(a2, *(_QWORD*)(a1 + 16));
  v3 = a2[2];
  v4 = a2[3];
  if (v3 + 1 <= v4) {
    result = a2[1];
  }
  else {
    v5 = a2[1];
    v6 = v3 + 993;
    v7 = 2 * v4;
    if (v7 <= v6) {
      v8 = v6;
    }
    else {
      v8 = v7;
    }
    a2[3] = v8;
    result = SdkRoutine_859610(v5);
    a2[1] = result;
    if (result == 0) {
      SdkRoutine_857810(0);
      __udf(0);
    }
    v3 = a2[2];
  }
  *(_BYTE*)(result + v3) = 32;
  ++a2[2];
  return result;
}

__int64 SdkHr_8488a0(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;

  v2 = a1[2];
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v2);
  if ((*(_WORD*)(v2 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v2);
  }
  v5 = a2[2];
  v6 = a2[3];
  if (v5 + 1 <= v6) {
    result = a2[1];
  }
  else {
    v7 = a2[1];
    v8 = v5 + 993;
    v9 = 2 * v6;
    if (v9 <= v8) {
      v10 = v8;
    }
    else {
      v10 = v9;
    }
    a2[3] = v10;
    result = SdkRoutine_859610(v7);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_27;
    }
    v5 = a2[2];
  }
  *(_BYTE*)(result + v5) = 60;
  v12 = a2[2] + 1LL;
  a2[2] = v12;
  v13 = a1[4];
  if (v13 != 0) {
    v14 = a1[3];
    v15 = a2[3];
    v16 = v12 + v13;
    if (v12 + v13 <= v15) {
      result = a2[1];
    }
    else {
      v17 = a2[1];
      if (2 * v15 <= v16 + 992) {
        v18 = v16 + 992;
      }
      else {
        v18 = 2 * v15;
      }
      a2[3] = v18;
      result = SdkRoutine_859610(v17);
      a2[1] = result;
      if (result == 0) {
        goto LABEL_27;
      }
      v12 = a2[2];
    }
    SdkRoutine_856130(result + v12, v14, v13);
    v12 = a2[2] + v13;
    a2[2] = v12;
  }
  v19 = a2[3];
  if (v12 + 1 <= v19) {
    result = a2[1];
    goto LABEL_26;
  }
  v20 = a2[1];
  v21 = v12 + 993;
  v22 = 2 * v19;
  if (v22 <= v21) {
    v23 = v21;
  }
  else {
    v23 = v22;
  }
  a2[3] = v23;
  result = SdkRoutine_859610(v20);
  a2[1] = result;
  if (result == 0) {
  LABEL_27:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v12 = a2[2];
LABEL_26:
  *(_BYTE*)(result + v12) = 62;
  ++a2[2];
  return result;
}

__int64 SdkHr_848a20(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = a1[2];
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v2);
  if ((*(_WORD*)(v2 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v2);
  }
  v5 = a2[2];
  v6 = a2[3];
  if (v5 + 1 <= v6) {
    result = a2[1];
  }
  else {
    v7 = a2[1];
    v8 = v5 + 993;
    v9 = 2 * v6;
    if (v9 <= v8) {
      v10 = v8;
    }
    else {
      v10 = v9;
    }
    a2[3] = v10;
    result = SdkRoutine_859610(v7);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_23;
    }
    v5 = a2[2];
  }
  *(_BYTE*)(result + v5) = 32;
  v12 = a2[2] + 1LL;
  a2[2] = v12;
  v13 = a1[4];
  if (v13 == 0) {
    goto LABEL_19;
  }
  v14 = a1[3];
  v15 = a2[3];
  v16 = v12 + v13;
  if (v12 + v13 <= v15) {
    result = a2[1];
    goto LABEL_18;
  }
  v17 = a2[1];
  if (2 * v15 <= v16 + 992) {
    v18 = v16 + 992;
  }
  else {
    v18 = 2 * v15;
  }
  a2[3] = v18;
  result = SdkRoutine_859610(v17);
  a2[1] = result;
  if (result == 0) {
  LABEL_23:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v12 = a2[2];
LABEL_18:
  result = SdkRoutine_856130(result + v12, v14, v13);
  a2[2] += v13;
LABEL_19:
  v19 = a1[5];
  if (v19 != 0) {
    result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v19);
    if ((*(_WORD*)(v19 + 9) & 0xC0) != 0x40) {
      return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v19);
    }
  }
  return result;
}

__int64 SdkHr_848c30(__int64 a1, _QWORD* a2)
{
  __int64 result;
  int v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;

  result =
      (*(__int64 (**)(_QWORD*, _QWORD))(*a2 + 16LL))(a2, *(_QWORD*)(a1 + 16));
  v5 = *(_DWORD*)(a1 + 12);
  if ((v5 & 1) != 0) {
    v6 = a2[2];
    v7 = a2[3];
    if (v6 + 6 <= v7) {
      result = a2[1];
    }
    else {
      v8 = a2[1];
      v9 = v6 + 998;
      v10 = 2 * v7;
      if (v10 <= v9) {
        v11 = v9;
      }
      else {
        v11 = v10;
      }
      a2[3] = v11;
      result = SdkRoutine_859610(v8);
      a2[1] = result;
      if (result == 0) {
        goto LABEL_29;
      }
      v6 = a2[2];
    }
    v12 = result + v6;
    *(_WORD*)(v12 + 4) = 29811;
    *(_DWORD*)v12 = 1852793632;
    a2[2] += 6LL;
    v5 = *(_DWORD*)(a1 + 12);
  }
  if ((v5 & 2) != 0) {
    v13 = a2[2];
    v14 = a2[3];
    if (v13 + 9 <= v14) {
      result = a2[1];
    }
    else {
      v15 = a2[1];
      v16 = v13 + 1001;
      v17 = 2 * v14;
      if (v17 <= v16) {
        v18 = v16;
      }
      else {
        v18 = v17;
      }
      a2[3] = v18;
      result = SdkRoutine_859610(v15);
      a2[1] = result;
      if (result == 0) {
        goto LABEL_29;
      }
      v13 = a2[2];
    }
    v19 = result + v13;
    *(_QWORD*)v19 = *(_QWORD*)" volatile";
    *(_BYTE*)(v19 + 8) = 101;
    a2[2] += 9LL;
    v5 = *(_DWORD*)(a1 + 12);
  }
  if ((v5 & 4) == 0) {
    return result;
  }
  v20 = a2[2];
  v21 = a2[3];
  if (v20 + 9 <= v21) {
    result = a2[1];
    goto LABEL_27;
  }
  v22 = a2[1];
  v23 = v20 + 1001;
  v24 = 2 * v21;
  if (v24 <= v23) {
    v25 = v23;
  }
  else {
    v25 = v24;
  }
  a2[3] = v25;
  result = SdkRoutine_859610(v22);
  a2[1] = result;
  if (result == 0) {
  LABEL_29:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v20 = a2[2];
LABEL_27:
  v26 = result + v20;
  *(_QWORD*)v26 = *(_QWORD*)" restrict";
  *(_BYTE*)(v26 + 8) = 116;
  a2[2] += 9LL;
  return result;
}

__int64 SdkHr_848dc0(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;

  v2 = a1[3];
  v3 = a2[2];
  if (v2 != 0) {
    v6 = a1[2];
    v7 = a2[3];
    v8 = v3 + v2;
    if (v3 + v2 <= v7) {
      result = a2[1];
    }
    else {
      v9 = a2[1];
      if (2 * v7 <= v8 + 992) {
        v10 = v8 + 992;
      }
      else {
        v10 = 2 * v7;
      }
      a2[3] = v10;
      result = SdkRoutine_859610(v9);
      a2[1] = result;
      if (result == 0) {
        goto LABEL_27;
      }
      v3 = a2[2];
    }
    SdkRoutine_856130(result + v3, v6, v2);
    v3 = a2[2] + v2;
    a2[2] = v3;
  }
  v12 = a2[3];
  v13 = v3 + 1;
  if (v3 + 1 <= v12) {
    result = a2[1];
  }
  else {
    v14 = a2[1];
    v15 = v3 + 993;
    if (2 * v12 <= v15) {
      v16 = v15;
    }
    else {
      v16 = 2 * v12;
    }
    a2[3] = v16;
    result = SdkRoutine_859610(v14);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_27;
    }
    v3 = a2[2];
    v13 = v3 + 1;
  }
  a2[2] = v13;
  *(_BYTE*)(result + v3) = 40;
  v17 = a1[4];
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v17);
  if ((*(_WORD*)(v17 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v17);
  }
  v18 = a2[2];
  v19 = a2[3];
  v20 = v18 + 1;
  if (v18 + 1 <= v19) {
    result = a2[1];
    goto LABEL_26;
  }
  v21 = a2[1];
  v22 = v18 + 993;
  if (2 * v19 <= v22) {
    v23 = v22;
  }
  else {
    v23 = 2 * v19;
  }
  a2[3] = v23;
  result = SdkRoutine_859610(v21);
  a2[1] = result;
  if (result == 0) {
  LABEL_27:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v18 = a2[2];
  v20 = v18 + 1;
LABEL_26:
  a2[2] = v20;
  *(_BYTE*)(result + v18) = 41;
  return result;
}

__int64 SdkHr_848f40(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 6 <= v3) {
    v10 = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 998;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    v10 = SdkRoutine_859610(v6);
    a2[1] = v10;
    if (v10 == 0) {
      SdkRoutine_857810(0);
      __udf(0);
    }
    v2 = a2[2];
  }
  v11 = v10 + v2;
  *(_WORD*)(v11 + 4) = 29793;
  *(_DWORD*)v11 = 1869366879;
  v12 = *(_QWORD*)(a1 + 16);
  a2[2] += 6LL;
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v12);
  if ((*(_WORD*)(v12 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v12);
  }
  return result;
}

__int64 SdkHr_8491f0(_QWORD* a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;

  result = (*(__int64 (**)(_QWORD*, _QWORD))(*a2 + 16LL))(a2, a1[2]);
  v5 = a1[4];
  if (v5 != 0) {
    v6 = a2[2];
    v7 = a2[3];
    v8 = a1[3];
    v9 = v6 + v5;
    if (v6 + v5 <= v7) {
      v13 = a2[1];
    }
    else {
      v10 = a2[1];
      v11 = 2 * v7;
      if (v11 <= v9 + 992) {
        v12 = v9 + 992;
      }
      else {
        v12 = v11;
      }
      a2[3] = v12;
      v13 = SdkRoutine_859610(v10);
      a2[1] = v13;
      if (v13 == 0) {
        SdkRoutine_857810(0);
        __udf(0);
      }
      v6 = a2[2];
    }
    result = SdkRoutine_856130(v13 + v6, v8, v5);
    a2[2] += v5;
  }
  return result;
}

__int64 SdkHr_8493e0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 13 <= v3) {
    result = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 1005;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    result = SdkRoutine_859610(v6);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_18;
    }
    v2 = a2[2];
  }
  qmemcpy((void*)(result + v2), "pixel vector[", 13);
  v11 = *(_QWORD*)(a1 + 16);
  a2[2] += 13LL;
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v11);
  if ((*(_WORD*)(v11 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v11);
  }
  v12 = a2[2];
  v13 = a2[3];
  if (v12 + 1 <= v13) {
    result = a2[1];
    goto LABEL_17;
  }
  v14 = a2[1];
  v15 = v12 + 993;
  v16 = 2 * v13;
  if (v16 <= v15) {
    v17 = v15;
  }
  else {
    v17 = v16;
  }
  a2[3] = v17;
  result = SdkRoutine_859610(v14);
  a2[1] = result;
  if (result != 0) {
    v12 = a2[2];
  LABEL_17:
    *(_BYTE*)(result + v12) = 93;
    ++a2[2];
    return result;
  }
LABEL_18:
  v18 = SdkRoutine_857810(result);
  return SdkRoutine_849500(v18);
}

__int64 SdkHr_849500(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;

  v2 = *(_QWORD*)(a1 + 16);
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v2);
  if ((*(_WORD*)(v2 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v2);
  }
  v5 = a2[2];
  v6 = a2[3];
  if (v5 + 8 <= v6) {
    result = a2[1];
  }
  else {
    v7 = a2[1];
    v8 = v5 + 1000;
    v9 = 2 * v6;
    if (v9 <= v8) {
      v10 = v8;
    }
    else {
      v10 = v9;
    }
    a2[3] = v10;
    result = SdkRoutine_859610(v7);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_21;
    }
    v5 = a2[2];
  }
  *(_QWORD*)(result + v5) = 0x5B726F7463657620LL;
  v12 = *(_QWORD*)(a1 + 24);
  a2[2] += 8LL;
  if (v12 != 0) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v12);
    if ((*(_WORD*)(v12 + 9) & 0xC0) != 0x40) {
      (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v12);
    }
  }
  v13 = a2[2];
  v14 = a2[3];
  if (v13 + 1 <= v14) {
    result = a2[1];
    goto LABEL_20;
  }
  v15 = a2[1];
  v16 = v13 + 993;
  v17 = 2 * v14;
  if (v17 <= v16) {
    v18 = v16;
  }
  else {
    v18 = v17;
  }
  a2[3] = v18;
  result = SdkRoutine_859610(v15);
  a2[1] = result;
  if (result != 0) {
    v13 = a2[2];
  LABEL_20:
    *(_BYTE*)(result + v13) = 93;
    ++a2[2];
    return result;
  }
LABEL_21:
  v19 = SdkRoutine_857810(result);
  return SdkRoutine_849660(v19);
}

__int64 SdkHr_849700(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int8* v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int16 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  char v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  char v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  _QWORD* v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  __int64 v102;
  unsigned __int64 v103;

  v3 = *(_QWORD*)(a1 + 16);
  if (*(_BYTE*)(v3 + 8) != 8 || *(_QWORD*)(v3 + 24) != 4 ||
      **(_DWORD**)(v3 + 16) != 1918986339) {
    return 0;
  }
  v6 = a2[2];
  v5 = a2[3];
  v7 = a2;
  if (v6 + 1 > v5) {
    v8 = a2[1];
    v9 = v6 + 993;
    v10 = 2 * v5;
    v11 = a3;
    if (v10 > v6 + 993) {
      v9 = v10;
    }
    a2[3] = v9;
    v12 = SdkRoutine_859610(v8);
    v7[1] = v12;
    if (v12 == 0) {
      goto LABEL_153;
    }
    v13 = v7[2];
    a2 = v7;
    a3 = v11;
    v7[2] = v13 + 1;
    *(_BYTE*)(v12 + v13) = 34;
    v14 = v11[1];
    if (v14 == 0) {
      goto LABEL_146;
    }
    goto LABEL_12;
  }
  v15 = a2[1];
  a2[2] = v6 + 1;
  *(_BYTE*)(v15 + v6) = 34;
  v14 = a3[1];
  if (v14 != 0) {
  LABEL_12:
    v16 = (__int64*)*a3;
    v17 = 0;
    v18 = *a3 + 8 * v14;
    do {
      v19 = *v16;
      if (*(_BYTE*)(*v16 + 8) != 77) {
      LABEL_145:
        v98 = a2;
        (*(void (**)(_QWORD*, _QWORD, __int64))(*a2 + 40LL))(a2, a2[2], v6);
        v98[2] = v6;
        return 0;
      }
      v20 = *(_QWORD*)(v19 + 40);
      if (v20 != 0) {
        v21 = *(unsigned __int8**)(v19 + 32);
        v22 = 0;
        do {
          if (v22 > 25) {
            goto LABEL_145;
          }
          v24 = *v21++;
          v23 = v24;
          if ((unsigned int)(v24 - 48) > 9) {
            goto LABEL_145;
          }
          --v20;
          v22 = v23 + 10 * v22 - 48;
        } while (v20 != 0);
        if (v22 >= 256) {
          goto LABEL_145;
        }
        if ((v17 & 1) == 0) {
        LABEL_29:
          if (v22 <= 10) {
            goto LABEL_47;
          }
          goto LABEL_30;
        }
      }
      else {
        v22 = 0;
        if ((v17 & 1) == 0) {
          goto LABEL_29;
        }
      }
      if ((unsigned int)(v22 - 48) >= 0xA) {
        switch (v22) {
        case 7:
          goto LABEL_66;
        case 8:
          goto LABEL_50;
        case 9:
          goto LABEL_61;
        case 10:
          goto LABEL_56;
        case 11:
          goto LABEL_76;
        case 12:
          goto LABEL_40;
        case 13:
          goto LABEL_71;
        case 34:
          goto LABEL_81;
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 97:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
          break;
        case 92:
          goto LABEL_34;
        default:
          goto LABEL_86;
        }
      }
      v25 = a2[2];
      v26 = a2[3];
      if (v25 + 2 <= v26) {
        v12 = a2[1];
      }
      else {
        v27 = a2[1];
        v28 = v25 + 994;
        v29 = 2 * v26;
        if (v29 > v28) {
          v28 = v29;
        }
        a2[3] = v28;
        v12 = SdkRoutine_859610(v27);
        v7[1] = v12;
        if (v12 == 0) {
          goto LABEL_153;
        }
        v25 = v7[2];
        a2 = v7;
      }
      *(_WORD*)(v12 + v25) = 8738;
      a2[2] += 2LL;
      if (v22 <= 10) {
      LABEL_47:
        if (v22 > 8) {
          if (v22 == 9) {
          LABEL_61:
            v36 = a2[2];
            v48 = a2[3];
            if (v36 + 2 <= v48) {
              v12 = a2[1];
            }
            else {
              v49 = a2[1];
              v50 = v36 + 994;
              v51 = 2 * v48;
              if (v51 <= v50) {
                v51 = v50;
              }
              a2[3] = v51;
              v12 = SdkRoutine_859610(v49);
              v7[1] = v12;
              if (v12 == 0) {
                goto LABEL_153;
              }
              v36 = v7[2];
              a2 = v7;
            }
            v17 = 0;
            v75 = 29788;
          }
          else {
          LABEL_56:
            v36 = a2[2];
            v44 = a2[3];
            if (v36 + 2 <= v44) {
              v12 = a2[1];
            }
            else {
              v45 = a2[1];
              v46 = v36 + 994;
              v47 = 2 * v44;
              if (v47 <= v46) {
                v47 = v46;
              }
              a2[3] = v47;
              v12 = SdkRoutine_859610(v45);
              v7[1] = v12;
              if (v12 == 0) {
                goto LABEL_153;
              }
              v36 = v7[2];
              a2 = v7;
            }
            v17 = 0;
            v75 = 28252;
          }
          goto LABEL_107;
        }
        if (v22 == 7) {
        LABEL_66:
          v36 = a2[2];
          v52 = a2[3];
          if (v36 + 2 <= v52) {
            v12 = a2[1];
          }
          else {
            v53 = a2[1];
            v54 = v36 + 994;
            v55 = 2 * v52;
            if (v55 <= v54) {
              v55 = v54;
            }
            a2[3] = v55;
            v12 = SdkRoutine_859610(v53);
            v7[1] = v12;
            if (v12 == 0) {
              goto LABEL_153;
            }
            v36 = v7[2];
            a2 = v7;
          }
          v75 = 24924;
          v17 = 0;
          goto LABEL_107;
        }
        if (v22 == 8) {
        LABEL_50:
          v36 = a2[2];
          v40 = a2[3];
          if (v36 + 2 <= v40) {
            v12 = a2[1];
          }
          else {
            v41 = a2[1];
            v42 = v36 + 994;
            v43 = 2 * v40;
            if (v43 <= v42) {
              v43 = v42;
            }
            a2[3] = v43;
            v12 = SdkRoutine_859610(v41);
            v7[1] = v12;
            if (v12 == 0) {
              goto LABEL_153;
            }
            v36 = v7[2];
            a2 = v7;
          }
          v17 = 0;
          v75 = 25180;
          goto LABEL_107;
        }
        goto LABEL_86;
      }
    LABEL_30:
      if (v22 <= 12) {
        if (v22 == 11) {
        LABEL_76:
          v36 = a2[2];
          v60 = a2[3];
          if (v36 + 2 <= v60) {
            v12 = a2[1];
          }
          else {
            v61 = a2[1];
            v62 = v36 + 994;
            v63 = 2 * v60;
            if (v63 <= v62) {
              v63 = v62;
            }
            a2[3] = v63;
            v12 = SdkRoutine_859610(v61);
            v7[1] = v12;
            if (v12 == 0) {
              goto LABEL_153;
            }
            v36 = v7[2];
            a2 = v7;
          }
          v17 = 0;
          v75 = 30300;
        }
        else {
        LABEL_40:
          v36 = a2[2];
          v35 = a2[3];
          if (v36 + 2 <= v35) {
            v12 = a2[1];
          }
          else {
            v37 = a2[1];
            v38 = v36 + 994;
            v39 = 2 * v35;
            if (v39 <= v38) {
              v39 = v38;
            }
            a2[3] = v39;
            v12 = SdkRoutine_859610(v37);
            v7[1] = v12;
            if (v12 == 0) {
              goto LABEL_153;
            }
            v36 = v7[2];
            a2 = v7;
          }
          v17 = 0;
          v75 = 26204;
        }
      LABEL_107:
        *(_WORD*)(v12 + v36) = v75;
      LABEL_108:
        a2[2] += 2LL;
        goto LABEL_109;
      }
      switch (v22) {
      case 13:
      LABEL_71:
        v36 = a2[2];
        v56 = a2[3];
        if (v36 + 2 <= v56) {
          v12 = a2[1];
        }
        else {
          v57 = a2[1];
          v58 = v36 + 994;
          v59 = 2 * v56;
          if (v59 <= v58) {
            v59 = v58;
          }
          a2[3] = v59;
          v12 = SdkRoutine_859610(v57);
          v7[1] = v12;
          if (v12 == 0) {
            goto LABEL_153;
          }
          v36 = v7[2];
          a2 = v7;
        }
        v17 = 0;
        v75 = 29276;
        goto LABEL_107;
      case 34:
      LABEL_81:
        v65 = a2[2];
        v64 = a2[3];
        if (v65 + 2 <= v64) {
          v12 = a2[1];
        }
        else {
          v66 = a2[1];
          v67 = v65 + 994;
          v68 = 2 * v64;
          if (v68 <= v67) {
            v68 = v67;
          }
          a2[3] = v68;
          v12 = SdkRoutine_859610(v66);
          v7[1] = v12;
          if (v12 == 0) {
            goto LABEL_153;
          }
          v65 = v7[2];
          a2 = v7;
        }
        v17 = 0;
        *(_WORD*)(v12 + v65) = 8796;
        goto LABEL_108;
      case 92:
      LABEL_34:
        v31 = a2[2];
        v30 = a2[3];
        if (v31 + 2 <= v30) {
          v12 = a2[1];
        }
        else {
          v32 = a2[1];
          v33 = v31 + 994;
          v34 = 2 * v30;
          if (v34 <= v33) {
            v34 = v33;
          }
          a2[3] = v34;
          v12 = SdkRoutine_859610(v32);
          v7[1] = v12;
          if (v12 == 0) {
            goto LABEL_153;
          }
          v31 = v7[2];
          a2 = v7;
        }
        v17 = 0;
        *(_WORD*)(v12 + v31) = 23644;
        goto LABEL_108;
      default:
        break;
      }
    LABEL_86:
      if (v22 < 32 || v22 == 127) {
        v76 = a2[2];
        v77 = a2[3];
        v78 = v76 + 1;
        if (v76 + 1 <= v77) {
          v12 = a2[1];
        }
        else {
          v79 = a2[1];
          v80 = v76 + 993;
          if (2 * v77 > v80) {
            v80 = 2 * v77;
          }
          a2[3] = v80;
          v12 = SdkRoutine_859610(v79);
          v7[1] = v12;
          if (v12 == 0) {
            goto LABEL_153;
          }
          v76 = v7[2];
          a2 = v7;
          v78 = v76 + 1;
        }
        a2[2] = v78;
        *(_BYTE*)(v12 + v76) = 92;
        if (v22 >= 8) {
          v81 = a2[2];
          v82 = a2[3];
          v83 = v81 + 1;
          if (v81 + 1 <= v82) {
            v12 = a2[1];
          }
          else {
            v84 = a2[1];
            v85 = v81 + 993;
            if (2 * v82 > v85) {
              v85 = 2 * v82;
            }
            a2[3] = v85;
            v12 = SdkRoutine_859610(v84);
            v7[1] = v12;
            if (v12 == 0) {
              goto LABEL_153;
            }
            v81 = v7[2];
            a2 = v7;
            v83 = v81 + 1;
          }
          a2[2] = v83;
          *(_BYTE*)(v12 + v81) = 120;
          if ((unsigned int)v22 >= 0x10) {
            v86 = SdkData_bb9260[(unsigned __int64)(unsigned int)v22 >> 4];
            v87 = a2[2];
            v88 = a2[3];
            v89 = v87 + 1;
            if (v87 + 1 <= v88) {
              v12 = a2[1];
            }
            else {
              v90 = a2[1];
              v91 = v87 + 993;
              if (2 * v88 > v91) {
                v91 = 2 * v88;
              }
              a2[3] = v91;
              v12 = SdkRoutine_859610(v90);
              v7[1] = v12;
              if (v12 == 0) {
                goto LABEL_153;
              }
              v87 = v7[2];
              a2 = v7;
              v89 = v87 + 1;
            }
            a2[2] = v89;
            *(_BYTE*)(v12 + v87) = v86;
          }
        }
        v92 = SdkData_bb9260[v22 & 0xF];
        v93 = a2[2];
        v94 = a2[3];
        v95 = v93 + 1;
        if (v93 + 1 <= v94) {
          v12 = a2[1];
        }
        else {
          v96 = a2[1];
          v97 = v93 + 993;
          if (2 * v94 > v97) {
            v97 = 2 * v94;
          }
          a2[3] = v97;
          v12 = SdkRoutine_859610(v96);
          v7[1] = v12;
          if (v12 == 0) {
            goto LABEL_153;
          }
          v93 = v7[2];
          a2 = v7;
          v95 = v93 + 1;
        }
        a2[2] = v95;
        *(_BYTE*)(v12 + v93) = v92;
        v17 = 1;
      }
      else {
        v70 = a2[2];
        v69 = a2[3];
        v71 = v70 + 1;
        if (v70 + 1 <= v69) {
          v12 = a2[1];
        }
        else {
          v72 = a2[1];
          v73 = v70 + 993;
          v74 = 2 * v69;
          if (v74 <= v73) {
            v74 = v73;
          }
          a2[3] = v74;
          v12 = SdkRoutine_859610(v72);
          v7[1] = v12;
          if (v12 == 0) {
            goto LABEL_153;
          }
          v70 = v7[2];
          a2 = v7;
          v71 = v70 + 1;
        }
        v17 = 0;
        a2[2] = v71;
        *(_BYTE*)(v12 + v70) = v22;
      }
    LABEL_109:
      ++v16;
    } while (v16 != (__int64*)v18);
  }
LABEL_146:
  v99 = a2[2];
  v100 = a2[3];
  v101 = v99 + 1;
  if (v99 + 1 <= v100) {
    v12 = a2[1];
    goto LABEL_152;
  }
  v102 = a2[1];
  v103 = v99 + 993;
  if (2 * v100 > v103) {
    v103 = 2 * v100;
  }
  a2[3] = v103;
  v12 = SdkRoutine_859610(v102);
  v7[1] = v12;
  if (v12 == 0) {
  LABEL_153:
    SdkRoutine_857810(v12);
    __udf(0);
  }
  v99 = v7[2];
  a2 = v7;
  v101 = v99 + 1;
LABEL_152:
  a2[2] = v101;
  *(_BYTE*)(v12 + v99) = 34;
  return 1;
}

__int64 SdkHr_84a390(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  unsigned int v5;
  int v6;
  int v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;

  v3 = *(_QWORD*)(a1 + 24);
  v5 = *(unsigned __int16*)(v3 + 9);
  v6 = (v5 >> 8) & 3;
  if (v6 != 0) {
    if (v6 != 2) {
    LABEL_5:
      v7 = (v5 >> 10) & 3;
      if (v7 != 0 &&
          (v7 != 2 ||
           ((*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v3 + 16LL))(v3, a2) &
            1) == 0)) {
        return (*(__int64 (**)(_QWORD*, _QWORD))(*a2 + 24LL))(
            a2, *(_QWORD*)(a1 + 24));
      }
      goto LABEL_8;
    }
    if (((*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v3 + 8LL))(v3, a2) & 1) ==
        0) {
      v3 = *(_QWORD*)(a1 + 24);
      v5 = *(unsigned __int16*)(v3 + 9);
      goto LABEL_5;
    }
  }
LABEL_8:
  v8 = a2[2];
  v9 = a2[3];
  if (v8 + 1 <= v9) {
    v14 = a2[1];
  }
  else {
    v10 = a2[1];
    v11 = v8 + 993;
    v12 = 2 * v9;
    if (v12 <= v11) {
      v13 = v11;
    }
    else {
      v13 = v12;
    }
    a2[3] = v13;
    v14 = SdkRoutine_859610(v10);
    a2[1] = v14;
    if (v14 == 0) {
      SdkRoutine_857810(0);
      __udf(0);
    }
    v8 = a2[2];
  }
  *(_BYTE*)(v14 + v8) = 41;
  ++a2[2];
  return (*(__int64 (**)(_QWORD*, _QWORD))(*a2 + 24LL))(a2,
                                                        *(_QWORD*)(a1 + 24));
}

__int64 SdkHr_84a480(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 result;

  v2 = a1[3];
  v3 = a2[2];
  if (v2 != 0) {
    v6 = a1[2];
    v7 = a2[3];
    v8 = v3 + v2;
    if (v3 + v2 <= v7) {
      v11 = a2[1];
    }
    else {
      v9 = a2[1];
      if (2 * v7 <= v8 + 992) {
        v10 = v8 + 992;
      }
      else {
        v10 = 2 * v7;
      }
      a2[3] = v10;
      v11 = SdkRoutine_859610(v9);
      a2[1] = v11;
      if (v11 == 0) {
        goto LABEL_19;
      }
      v3 = a2[2];
    }
    SdkRoutine_856130(v11 + v3, v6, v2);
    v3 = a2[2] + v2;
    a2[2] = v3;
  }
  v12 = a2[3];
  v13 = v3 + 1;
  if (v3 + 1 > v12) {
    v14 = a2[1];
    v15 = v3 + 993;
    if (2 * v12 <= v15) {
      v16 = v15;
    }
    else {
      v16 = 2 * v12;
    }
    a2[3] = v16;
    v11 = SdkRoutine_859610(v14);
    a2[1] = v11;
    if (v11 != 0) {
      v3 = a2[2];
      v13 = v3 + 1;
      goto LABEL_17;
    }
  LABEL_19:
    SdkRoutine_857810(v11);
    __udf(0);
  }
  v11 = a2[1];
LABEL_17:
  a2[2] = v13;
  *(_BYTE*)(v11 + v3) = 32;
  v17 = a1[4];
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v17);
  if ((*(_WORD*)(v17 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v17);
  }
  return result;
}

__int64 SdkHr_84a5c0(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _BYTE* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 result;
  __int64 v18;
  unsigned int v19;
  int v20;
  int v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  char v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;

  v3 = *(_QWORD*)(a1 + 16);
  if (*(_BYTE*)(v3 + 8) == 11) {
    v5 = *(_QWORD*)(v3 + 16);
    if (*(_BYTE*)(v5 + 8) == 8 && *(_QWORD*)(v5 + 24) == 11) {
      v6 = *(__int64**)(v5 + 16);
      v7 = *v6;
      v8 = *(__int64*)((char*)v6 + 3);
      if (v7 == 0x6A626F5F636A626FLL && v8 == 0x7463656A626F5F63LL) {
        v35 = a2[2];
        v36 = a2[3];
        if (v35 + 3 <= v36) {
          result = a2[1];
        }
        else {
          v37 = a2[1];
          v38 = v35 + 995;
          v39 = 2 * v36;
          v40 = v3;
          if (v39 <= v38) {
            v41 = v38;
          }
          else {
            v41 = v39;
          }
          a2[3] = v41;
          result = SdkRoutine_859610(v37);
          a2[1] = result;
          if (result == 0) {
            goto LABEL_67;
          }
          v35 = a2[2];
          v3 = v40;
        }
        v42 = result + v35;
        *(_BYTE*)(v42 + 2) = 60;
        *(_WORD*)v42 = 25705;
        v28 = a2[2] + 3LL;
        a2[2] = v28;
        v43 = *(_QWORD*)(v3 + 32);
        if (v43 != 0) {
          v44 = *(_QWORD*)(v3 + 24);
          v45 = a2[3];
          v46 = v28 + v43;
          if (v28 + v43 <= v45) {
            result = a2[1];
          }
          else {
            v47 = a2[1];
            if (2 * v45 <= v46 + 992) {
              v48 = v46 + 992;
            }
            else {
              v48 = 2 * v45;
            }
            a2[3] = v48;
            result = SdkRoutine_859610(v47);
            a2[1] = result;
            if (result == 0) {
              goto LABEL_67;
            }
            v28 = a2[2];
          }
          SdkRoutine_856130(result + v28, v44, v43);
          v28 = a2[2] + v43;
          a2[2] = v28;
        }
        v49 = a2[3];
        if (v28 + 1 <= v49) {
          result = a2[1];
        }
        else {
          v50 = a2[1];
          v51 = v28 + 993;
          v52 = 2 * v49;
          if (v52 <= v51) {
            v53 = v51;
          }
          else {
            v53 = v52;
          }
          a2[3] = v53;
          result = SdkRoutine_859610(v50);
          a2[1] = result;
          if (result == 0) {
            goto LABEL_67;
          }
          v28 = a2[2];
        }
        v34 = 62;
        goto LABEL_42;
      }
    }
  }
  (*(void (**)(_QWORD*))(*a2 + 16LL))(a2);
  v10 = *(_BYTE**)(a1 + 16);
  if ((v10[10] & 3) == 0 ||
      (v10[10] & 3) == 2 &&
          ((*(__int64 (**)(_BYTE*, _QWORD*))(*(_QWORD*)v10 + 8LL))(v10, a2) &
           1) != 0) {
    v11 = a2[2];
    v12 = a2[3];
    if (v11 + 1 <= v12) {
      result = a2[1];
    }
    else {
      v13 = a2[1];
      v14 = v11 + 993;
      v15 = 2 * v12;
      if (v15 <= v14) {
        v16 = v14;
      }
      else {
        v16 = v15;
      }
      a2[3] = v16;
      result = SdkRoutine_859610(v13);
      a2[1] = result;
      if (result == 0) {
        goto LABEL_67;
      }
      v11 = a2[2];
    }
    *(_BYTE*)(result + v11) = 32;
    ++a2[2];
  }
  v18 = *(_QWORD*)(a1 + 16);
  v19 = *(unsigned __int16*)(v18 + 9);
  v20 = (v19 >> 8) & 3;
  if (v20 != 0) {
    if (v20 != 2) {
    LABEL_23:
      v21 = (v19 >> 10) & 3;
      if (v21 != 0 &&
          (v21 != 2 ||
           ((*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v18 + 16LL))(v18, a2) &
            1) == 0)) {
        goto LABEL_34;
      }
      goto LABEL_26;
    }
    if (((*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v18 + 8LL))(v18, a2) &
         1) == 0) {
      v18 = *(_QWORD*)(a1 + 16);
      v19 = *(unsigned __int16*)(v18 + 9);
      goto LABEL_23;
    }
  }
LABEL_26:
  v22 = a2[2];
  v23 = a2[3];
  if (v22 + 1 <= v23) {
    result = a2[1];
  }
  else {
    v24 = a2[1];
    v25 = v22 + 993;
    v26 = 2 * v23;
    if (v26 <= v25) {
      v27 = v25;
    }
    else {
      v27 = v26;
    }
    a2[3] = v27;
    result = SdkRoutine_859610(v24);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_67;
    }
    v22 = a2[2];
  }
  *(_BYTE*)(result + v22) = 40;
  ++a2[2];
LABEL_34:
  v28 = a2[2];
  v29 = a2[3];
  if (v28 + 1 <= v29) {
    result = a2[1];
    goto LABEL_41;
  }
  v30 = a2[1];
  v31 = v28 + 993;
  v32 = 2 * v29;
  if (v32 <= v31) {
    v33 = v31;
  }
  else {
    v33 = v32;
  }
  a2[3] = v33;
  result = SdkRoutine_859610(v30);
  a2[1] = result;
  if (result != 0) {
    v28 = a2[2];
  LABEL_41:
    v34 = 42;
  LABEL_42:
    *(_BYTE*)(result + v28) = v34;
    ++a2[2];
    return result;
  }
LABEL_67:
  v54 = SdkRoutine_857810(result);
  return SdkRoutine_84a900(v54);
}

__int64 SdkHr_84a900(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned int v10;
  int v11;
  int v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;

  result = *(_QWORD*)(a1 + 16);
  if (*(_BYTE*)(result + 8) != 11 ||
      *(_BYTE*)((v5 = *(_QWORD*)(result + 16)) + 8) != 8 ||
      *(_QWORD*)(v5 + 24) != 11 ||
      ((v6 = *(__int64**)(v5 + 16), v7 = *v6, v8 = *(__int64*)((char*)v6 + 3),
        v7 == 0x6A626F5F636A626FLL)
           ? (v9 = v8 == 0x7463656A626F5F63LL)
           : (v9 = false),
       !v9)) {
    v10 = *(unsigned __int16*)(result + 9);
    v11 = (v10 >> 8) & 3;
    if (v11 != 0) {
      if (v11 == 2) {
        if (((*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)result + 8LL))(result,
                                                                         a2) &
             1) != 0) {
          goto LABEL_15;
        }
        result = *(_QWORD*)(a1 + 16);
        v10 = *(unsigned __int16*)(result + 9);
      }
      v12 = (v10 >> 10) & 3;
      if (v12 != 0 && (v12 != 2 || ((*(__int64 (**)(__int64, _QWORD*))(
                                        *(_QWORD*)result + 16LL))(result, a2) &
                                    1) == 0)) {
        return (*(__int64 (**)(_QWORD*, _QWORD))(*a2 + 24LL))(
            a2, *(_QWORD*)(a1 + 16));
      }
    }
  LABEL_15:
    v13 = a2[2];
    v14 = a2[3];
    if (v13 + 1 <= v14) {
      v19 = a2[1];
    }
    else {
      v15 = a2[1];
      v16 = v13 + 993;
      v17 = 2 * v14;
      if (v17 <= v16) {
        v18 = v16;
      }
      else {
        v18 = v17;
      }
      a2[3] = v18;
      v19 = SdkRoutine_859610(v15);
      a2[1] = v19;
      if (v19 == 0) {
        SdkRoutine_857810(0);
        __udf(0);
      }
      v13 = a2[2];
    }
    *(_BYTE*)(v19 + v13) = 41;
    ++a2[2];
    return (*(__int64 (**)(_QWORD*, _QWORD))(*a2 + 24LL))(a2,
                                                          *(_QWORD*)(a1 + 16));
  }
  return result;
}

__int64 SdkHr_84aa60(__int64 result, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned int v15;
  int v16;
  int v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  const char* v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;

  if ((*(_BYTE*)(result + 28) & 1) == 0) {
    v3 = result;
    v4 = *(unsigned int*)(result + 24);
    *(_BYTE*)(result + 28) = 1;
    result = SdkRoutine_84ade0(*(_QWORD*)(result + 16), v4, a2);
    v6 = v5;
    if (v5 == 0) {
    LABEL_43:
      *(_BYTE*)(v3 + 28) = 0;
      return result;
    }
    v7 = result;
    (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v5);
    if ((*(_BYTE*)(v6 + 10) & 3) == 0 ||
        (*(_BYTE*)(v6 + 10) & 3) == 2 &&
            ((*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v6 + 8LL))(v6, a2) &
             1) != 0) {
      v8 = a2[2];
      v9 = a2[3];
      if (v8 + 1 <= v9) {
        v14 = a2[1];
      }
      else {
        v10 = a2[1];
        v11 = v8 + 993;
        v12 = 2 * v9;
        if (v12 <= v11) {
          v13 = v11;
        }
        else {
          v13 = v12;
        }
        a2[3] = v13;
        v14 = SdkRoutine_859610(v10);
        a2[1] = v14;
        if (v14 == 0) {
          goto LABEL_45;
        }
        v8 = a2[2];
      }
      *(_BYTE*)(v14 + v8) = 32;
      ++a2[2];
    }
    v15 = *(unsigned __int16*)(v6 + 9);
    v16 = (v15 >> 8) & 3;
    if (v16 == 0) {
      goto LABEL_21;
    }
    if (v16 == 2) {
      if (((*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v6 + 8LL))(v6, a2) &
           1) != 0) {
        goto LABEL_21;
      }
      v15 = *(unsigned __int16*)(v6 + 9);
    }
    v17 = (v15 >> 10) & 3;
    if (v17 != 0 &&
        (v17 != 2 ||
         ((*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v6 + 16LL))(v6, a2) &
          1) == 0)) {
    LABEL_29:
      if (v7 != 0) {
        v24 = "&&";
      }
      else {
        v24 = "&";
      }
      if (v7 != 0) {
        v25 = 2;
      }
      else {
        v25 = 1;
      }
      v26 = a2[2];
      v27 = a2[3];
      v28 = v26 + v25;
      if (v26 + v25 <= v27) {
        v14 = a2[1];
        goto LABEL_42;
      }
      v29 = a2[1];
      v30 = 2 * v27;
      if (v30 <= v28 + 992) {
        v31 = v28 + 992;
      }
      else {
        v31 = v30;
      }
      a2[3] = v31;
      v14 = SdkRoutine_859610(v29);
      a2[1] = v14;
      if (v14 != 0) {
        v26 = a2[2];
      LABEL_42:
        result = SdkRoutine_856130(v14 + v26, v24, v25);
        a2[2] += v25;
        goto LABEL_43;
      }
    LABEL_45:
      v32 = SdkRoutine_857810(v14);
      *(_BYTE*)(v3 + 28) = 0;
      SdkRoutine_87c790(v32);
      __udf(0);
    }
  LABEL_21:
    v18 = a2[2];
    v19 = a2[3];
    if (v18 + 1 <= v19) {
      v14 = a2[1];
    }
    else {
      v20 = a2[1];
      v21 = v18 + 993;
      v22 = 2 * v19;
      if (v22 <= v21) {
        v23 = v21;
      }
      else {
        v23 = v22;
      }
      a2[3] = v23;
      v14 = SdkRoutine_859610(v20);
      a2[1] = v14;
      if (v14 == 0) {
        goto LABEL_45;
      }
      v18 = a2[2];
    }
    *(_BYTE*)(v14 + v18) = 40;
    ++a2[2];
    goto LABEL_29;
  }
  return result;
}

__int64 SdkHr_84ac90(__int64 result, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  __int64 v8;
  char v9;
  int v10;
  __int64 v11;
  char v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  if ((*(_BYTE*)(result + 28) & 1) == 0) {
    v3 = result;
    v4 = *(unsigned int*)(result + 24);
    *(_BYTE*)(result + 28) = 1;
    result = SdkRoutine_84ade0(*(_QWORD*)(result + 16), v4, a2);
    if (v5 == 0) {
    LABEL_19:
      *(_BYTE*)(v3 + 28) = 0;
      return result;
    }
    v6 = *(unsigned __int16*)(v5 + 9);
    v7 = (v6 >> 8) & 3;
    if (v7 != 0) {
      if (v7 == 2) {
        v8 = v5;
        v9 = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v5 + 8LL))(v5, a2);
        v5 = v8;
        if ((v9 & 1) != 0) {
          goto LABEL_10;
        }
        v6 = *(unsigned __int16*)(v8 + 9);
      }
      v10 = (v6 >> 10) & 3;
      if (v10 != 0) {
        if (v10 != 2 || (v11 = v5,
                         v12 = (*(__int64 (**)(__int64, _QWORD*))(
                             *(_QWORD*)v5 + 16LL))(v5, a2),
                         v5 = v11, (v12 & 1) == 0)) {
        LABEL_18:
          result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v5);
          goto LABEL_19;
        }
      }
    }
  LABEL_10:
    v13 = a2[2];
    v14 = a2[3];
    if (v13 + 1 <= v14) {
      v20 = a2[1];
    }
    else {
      v15 = a2[1];
      v16 = v13 + 993;
      v17 = 2 * v14;
      v18 = v5;
      if (v17 <= v16) {
        v19 = v16;
      }
      else {
        v19 = v17;
      }
      a2[3] = v19;
      v20 = SdkRoutine_859610(v15);
      a2[1] = v20;
      if (v20 == 0) {
        v21 = SdkRoutine_857810(0);
        *(_BYTE*)(v3 + 28) = 0;
        SdkRoutine_87c790(v21);
        __udf(0);
      }
      v13 = a2[2];
      v5 = v18;
    }
    *(_BYTE*)(v20 + v13) = 41;
    ++a2[2];
    goto LABEL_18;
  }
  return result;
}

#pragma GCC visibility pop
