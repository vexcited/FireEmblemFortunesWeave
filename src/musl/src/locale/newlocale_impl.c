#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_UNKNOWN** musl_locale_777680(int, char*, const char*);
__int64 LockQuickExitState(__int64);
__int64 UnlockQuickExitState(__int64);
__int64 malloc_plt(_QWORD);
__int64 memcmp_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_105aa10;
extern _UNKNOWN SdkData_cb7898;
extern _UNKNOWN* SdkData_e7dba0;
extern __int64 SdkData_105b408;
extern __int64 SdkData_105b410;
extern __int64 SdkData_105b418;
extern __int64 SdkData_105b420;
extern __int64 SdkData_105b428;
extern __int64 SdkData_105b430;
extern __int64 SdkData_105b438;
extern char SdkData_105b400;
extern char SdkData_bbbd5c;
bool __loc_is_allocated(__int64* a1);
__int64* newlocale(char a1, char* a2, __int64* a3);

bool __loc_is_allocated(__int64* a1)
{
  return a1 != nullptr && a1 != (__int64*)&SdkData_cb7898 &&
         a1 != (__int64*)&SdkData_e7dba0 && a1 != &SdkData_105b408 &&
         a1 != &SdkData_105b438;
}

__int64* newlocale(char a1, char* a2, __int64* a3)
{
  const char* v6;
  char* v7;
  const char* v8;
  char* v9;
  const char* v10;
  char* v11;
  const char* v12;
  char* v13;
  const char* v14;
  char* v15;
  const char* v16;
  char* v17;
  _UNKNOWN** v19;
  _UNKNOWN** v20;
  _UNKNOWN** v21;
  _UNKNOWN** v22;
  const char* v23;
  const char* v24;
  const char* v25;
  const char* v26;
  const char* v27;
  const char* v28;
  _UNKNOWN** v29;
  _UNKNOWN** v30;
  _UNKNOWN** v31;
  _UNKNOWN** v32;
  _UNKNOWN** v33;
  _UNKNOWN** v34;
  _UNKNOWN** v35;

  LockQuickExitState((__int64)&SdkData_105aa10);
  if (a3 == nullptr) {
    if ((a1 & 1) != 0) {
      v7 = a2;
    }
    else {
      v7 = &SdkData_bbbd5c;
    }
    v30 = musl_locale_777680(0, v7, v6);
    if (v30 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
    v9 = (a1 & 2) != 0 ? a2 : &SdkData_bbbd5c;
    v31 = musl_locale_777680(1, v9, v8);
    if (v31 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
    v11 = (a1 & 4) != 0 ? a2 : &SdkData_bbbd5c;
    v32 = musl_locale_777680(2, v11, v10);
    if (v32 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
    v13 = (a1 & 8) != 0 ? a2 : &SdkData_bbbd5c;
    v33 = musl_locale_777680(3, v13, v12);
    if (v33 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
    v15 = (a1 & 0x10) != 0 ? a2 : &SdkData_bbbd5c;
    v34 = musl_locale_777680(4, v15, v14);
    if (v34 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
    v17 = (a1 & 0x20) != 0 ? a2 : &SdkData_bbbd5c;
    v35 = musl_locale_777680(5, v17, v16);
    if (v35 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
    goto LABEL_52;
  }
  if ((a1 & 1) != 0) {
    v30 = musl_locale_777680(0, a2, v6);
    if (v30 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  else {
    v30 = (_UNKNOWN**)*a3;
    if (v30 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  if ((a1 & 2) != 0) {
    v31 = musl_locale_777680(1, a2, v6);
    if (v31 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  else {
    v31 = (_UNKNOWN**)a3[1];
    if (v31 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  if ((a1 & 4) != 0) {
    v32 = musl_locale_777680(2, a2, v6);
    if (v32 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  else {
    v32 = (_UNKNOWN**)a3[2];
    if (v32 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  if ((a1 & 8) != 0) {
    v33 = musl_locale_777680(3, a2, v6);
    if (v33 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  else {
    v33 = (_UNKNOWN**)a3[3];
    if (v33 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  if ((a1 & 0x10) != 0) {
    v34 = musl_locale_777680(4, a2, v6);
    if (v34 != (_UNKNOWN**)-1LL) {
      goto LABEL_47;
    }
  LABEL_49:
    a3 = nullptr;
    goto LABEL_50;
  }
  v34 = (_UNKNOWN**)a3[4];
  if (v34 == (_UNKNOWN**)-1LL) {
    goto LABEL_49;
  }
LABEL_47:
  if ((a1 & 0x20) != 0) {
    v35 = musl_locale_777680(5, a2, v6);
    if (v35 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  else {
    v35 = (_UNKNOWN**)a3[5];
    if (v35 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
LABEL_52:
  if (a3 != nullptr && a3 != &SdkData_105b438 && a3 != &SdkData_105b408 &&
      a3 != (__int64*)&SdkData_cb7898 && a3 != (__int64*)&SdkData_e7dba0) {
    goto LABEL_57;
  }
  a3 = (__int64*)&SdkData_cb7898;
  if ((unsigned int)memcmp_plt(&v30, &SdkData_cb7898, 48) != 0) {
    a3 = (__int64*)&SdkData_e7dba0;
    if ((unsigned int)memcmp_plt(&v30, &SdkData_e7dba0, 48) != 0) {
      if ((SdkData_105b400 & 1) == 0) {
        SdkData_105b408 = (__int64)musl_locale_777680(0, &SdkData_bbbd5c, v23);
        SdkData_105b410 = (__int64)musl_locale_777680(1, &SdkData_bbbd5c, v24);
        SdkData_105b418 = (__int64)musl_locale_777680(2, &SdkData_bbbd5c, v25);
        SdkData_105b420 = (__int64)musl_locale_777680(3, &SdkData_bbbd5c, v26);
        SdkData_105b428 = (__int64)musl_locale_777680(4, &SdkData_bbbd5c, v27);
        v29 = musl_locale_777680(5, &SdkData_bbbd5c, v28);
        SdkData_105b400 = 1;
        SdkData_105b430 = (__int64)v29;
        SdkData_105b438 = SdkData_105b408;
      }
      a3 = &SdkData_105b408;
      if ((unsigned int)memcmp_plt(&v30, &SdkData_105b408, 48) != 0) {
        a3 = &SdkData_105b438;
        if ((unsigned int)memcmp_plt(&v30, &SdkData_105b438, 48) != 0) {
          a3 = (__int64*)malloc_plt(48);
          if (a3 != nullptr) {
          LABEL_57:
            v19 = v31;
            *a3 = (__int64)v30;
            a3[1] = (__int64)v19;
            v20 = v32;
            v21 = v33;
            v22 = v35;
            a3[4] = (__int64)v34;
            a3[5] = (__int64)v22;
            a3[2] = (__int64)v20;
            a3[3] = (__int64)v21;
          }
        }
      }
    }
  }
LABEL_50:
  UnlockQuickExitState((__int64)&SdkData_105aa10);
  return a3;
}

#pragma GCC visibility pop
