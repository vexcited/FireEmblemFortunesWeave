#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_617a60(_QWORD);

__int64 SdkRoutine_631ec0(void);

__int64 SdkRoutine_632040(void);

__int64 SdkRoutine_632390(__int64);

__int64 SdkRoutine_632420(void);

__int64 SdkRoutine_632550(__int64);

__int64 SdkRoutine_634ea0(void);

__int64 SdkRoutine_638990(void);

__int64 SdkRoutine_638a20(void);

__int64 SdkRoutine_63fa00(void);

__int64 SdkRoutine_875b30(_QWORD);

__int64 SdkRoutine_875f80(_QWORD);

__int64 SdkRoutine_875f90(_QWORD, _QWORD);

__int64 SdkRoutine_875fa0(_QWORD);

__int64 SdkRoutine_876070(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_8760e0(void);

__int64 SdkRoutine_8760f0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_876120(_QWORD, _QWORD);

__int64 SdkRoutine_8762c0(_QWORD, _QWORD);

__int64 SdkHr_617f10(_QWORD* a1)
{
  unsigned __int8 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned int v6;

  v2 = SdkRoutine_875f80(a1);
  result = SdkRoutine_875f90(a1 + 2, v2);
  if ((_DWORD)result == 0) {
    v4 = SdkRoutine_617a60(a1);
    result =
        SdkRoutine_876070(a1 + 3, a1[2], "vic", *(unsigned __int8*)(v4 + 4));
    if ((_DWORD)result == 0) {
      v5 = a1[2];
      v6 = SdkRoutine_8760e0();
      result = SdkRoutine_8760f0(a1 + 4, v5, v6);
      if ((_DWORD)result == 0) {
        result = SdkRoutine_876120(a1[4], a1[3]);
        if ((_DWORD)result == 0) {
          result = SdkRoutine_875fa0(a1 + 5);
          if ((_DWORD)result == 0) {
            return SdkRoutine_8762c0(a1 + 6, a1[3]);
          }
        }
      }
    }
  }
  return result;
}

__int64 SdkHr_631e20(_QWORD* a1, unsigned __int64 a2)
{
  __int64 result;
  unsigned __int64 v5;
  __int64 v6;

  result = SdkRoutine_631ec0();
  if ((_DWORD)result == 0) {
    v5 = a1[1];
    if (v5 <= a2) {
      for (; v5 < a2; a1[1] = v5) {
        v6 = *a1 + 6 * v5;
        *(_WORD*)(v6 + 4) = 0;
        *(_DWORD*)v6 = 0;
        v5 = a1[1] + 1LL;
      }
    }
    else {
      a1[1] = a2;
    }
  }
  return result;
}

__int64 SdkHr_631fc0(_QWORD* a1, unsigned __int64 a2)
{
  __int64 result;
  unsigned __int64 v5;

  result = SdkRoutine_632040();
  if ((_DWORD)result == 0) {
    v5 = a1[1];
    if (v5 <= a2) {
      for (; v5 < a2; a1[1] = v5) {
        *(_WORD*)(*a1 + 2 * v5) = 0;
        v5 = a1[1] + 1LL;
      }
    }
    else {
      a1[1] = a2;
    }
  }
  return result;
}

__int64 SdkHr_632390(__int64 a1)
{
  __int64 result;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;

  result = SdkRoutine_632420();
  v3 = *(_QWORD*)(a1 + 64);
  if (v3 != 0) {
    v4 = result;
    v5 = (**(__int64 (***)(_QWORD))v3)(*(_QWORD*)(a1 + 64));
    v6 = *(_QWORD*)(a1 + 64);
    *(_BYTE*)(v3 + 17) = 1;
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
      SdkRoutine_875b30(*(_QWORD*)(a1 + 64));
      *(_QWORD*)(a1 + 64) = 0;
    }
    result = v4;
    if (v5 != 0) {
      if (v4 != 0) {
        result = v4;
      }
      else {
        result = v5;
      }
    }
    *(_QWORD*)(a1 + 72) = 0;
  }
  return result;
}

__int64 SdkHr_634e30(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  __int64 result;
  unsigned int v5;

  v2 = SdkRoutine_634ea0();
  v3 = SdkRoutine_632550(a1);
  if (v2 != 0) {
    v3 = v2;
  }
  else if (v3 == 0) {
    LODWORD(result) = SdkRoutine_632390(a1);
    if ((_DWORD)result != 0) {
      return (unsigned int)result;
    }
    else {
      return 0;
    }
  }
  v5 = v3;
  SdkRoutine_632390(a1);
  return v5;
}

__int64 SdkHr_637730(__int64 a1, __int64 a2)
{
  __int64 result;

  result = SdkRoutine_638990();
  if ((_DWORD)result == 0 && *(_QWORD*)(a1 + 8) != a2) {
    *(_QWORD*)(a1 + 8) = a2;
  }
  return result;
}

__int64 SdkHr_637780(_QWORD* a1, unsigned __int64 a2)
{
  __int64 result;
  unsigned __int64 v5;
  _QWORD* v6;

  result = SdkRoutine_638a20();
  if ((_DWORD)result == 0) {
    v5 = a1[1];
    if (v5 <= a2) {
      for (; v5 < a2; a1[1] = v5) {
        v6 = (_QWORD*)(*a1 + (v5 << 6));
        v6[6] = 0;
        v6[7] = 0;
        v6[4] = 0;
        v6[5] = 0;
        v6[2] = 0;
        v6[3] = 0;
        *v6 = 0;
        v6[1] = 0;
        v5 = a1[1] + 1LL;
      }
    }
    else {
      a1[1] = a2;
    }
  }
  return result;
}

__int64 SdkHr_63f980(_QWORD* a1, unsigned __int64 a2)
{
  __int64 result;
  unsigned __int64 v5;

  result = SdkRoutine_63fa00();
  if ((_DWORD)result == 0) {
    v5 = a1[1];
    if (v5 <= a2) {
      for (; v5 < a2; a1[1] = v5) {
        *(_QWORD*)(*a1 + 8 * v5) = 0;
        v5 = a1[1] + 1LL;
      }
    }
    else {
      a1[1] = a2;
    }
  }
  return result;
}

#pragma GCC visibility pop
