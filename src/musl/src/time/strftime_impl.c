#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void __tm_to_secs(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void week_num(PSEUDO_X8, _QWORD);
__int64 __nl_langinfo_l_plt(_QWORD, _QWORD);
__int64 __tm_to_tzname_plt(_QWORD);
__int64 abs_plt(_QWORD);
__int64 snprintf_plt(_QWORD, _QWORD, const char*, ...);
__int64 strftime_l(_QWORD, _QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
extern char SdkData_bbbd5c;
char* __strftime_fmt_1(const char* a1, __int64* a2, int a3, int* a4, __int64 a5,
                       int a6);

char* __strftime_fmt_1(const char* a1, __int64* a2, int a3, int* a4, __int64 a5,
                       int a6)
{
  char* result;
  const char* v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  int v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  int v26;
  int v27;
  _QWORD* v29;
  __int64 v30;
  int v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;

  result = nullptr;
  v9 = "%m/%d/%y";
  v10 = 48;
  v11 = 131112;
  switch (a3) {
  case '%':
    v36 = 1;
    result = "%";
    goto LABEL_85;
  case 'A':
    v39 = a4[6];
    if (v39 > 6) {
      goto LABEL_47;
    }
    v19 = v39 + 131079;
    goto LABEL_81;
  case 'B':
    v32 = a4[4];
    if (v32 > 0xB) {
      goto LABEL_47;
    }
    v19 = v32 + 131098;
    goto LABEL_81;
  case 'C':
    v14 = (a4[5] + 1900LL) / 100;
    goto LABEL_61;
  case 'D':
    goto LABEL_74;
  case 'F':
    v9 = "%Y-%m-%d";
    goto LABEL_74;
  case 'G':
  case 'g':
    v12 = a4[5];
    v13 = (unsigned int)a4[7];
    v14 = v12 + 1900;
    if ((int)v13 > 2) {
      if ((unsigned int)v13 >= 0x169) {
        v20 = a6;
        v21 = a3;
        v22 =
            (unsigned int)X8CALL_X0(_QWORD*, week_num((void*)(_QWORD*)v13, a4));
        a3 = v21;
        a6 = v20;
        if (v22 == 1) {
          v14 = v12 + 1901;
        }
        else {
          v14 = v12 + 1900;
        }
      }
    }
    else {
      v15 = a6;
      v16 = a3;
      v17 = (unsigned int)X8CALL_X0(_QWORD*, week_num((void*)(_QWORD*)v13, a4));
      a3 = v16;
      a6 = v15;
      if (v17 == 1) {
        v14 = v12 + 1900;
      }
      else {
        v14 = v12 + 1899;
      }
    }
    if (a3 == 103) {
      v10 = 48;
      v14 %= 100;
    LABEL_61:
      v23 = 2;
    }
    else {
      v10 = 48;
      v23 = 4;
    }
    goto LABEL_62;
  case 'H':
    v14 = a4[2];
    goto LABEL_61;
  case 'I':
    v40 = a4[2];
    v41 = v40 - 12;
    if ((int)v40 <= 12) {
      v41 = a4[2];
    }
    if ((_DWORD)v40 != 0) {
      v14 = v41;
    }
    else {
      v14 = 12;
    }
    v23 = 2;
    v10 = 48;
    goto LABEL_62;
  case 'M':
    v14 = a4[1];
    goto LABEL_61;
  case 'R':
    v9 = "%H:%M";
    goto LABEL_74;
  case 'S':
    v14 = *a4;
    goto LABEL_61;
  case 'T':
    v9 = "%H:%M:%S";
    goto LABEL_74;
  case 'U':
    v14 = (a4[7] - a4[6] + 7) / 7u;
    goto LABEL_61;
  case 'V':
    v37 = a6;
    v38 = (unsigned int)X8CALL_X0(_QWORD*, week_num((void*)"%m/%d/%y", a4));
    a6 = v37;
    v14 = v38;
    v10 = 48;
    goto LABEL_61;
  case 'W':
    v10 = 48;
    v14 = (a4[7] + 7 * ((a4[6] + 6) / 7u) - (a4[6] + 6) + 7) / 7;
    goto LABEL_61;
  case 'X':
    v11 = 131114;
    goto LABEL_73;
  case 'Y':
    v30 = a4[5];
    v14 = v30 + 1900;
    if ((int)v30 < 8100) {
      v23 = 4;
    LABEL_62:
      if (a6 != 0) {
        v43 = a6;
      }
      else {
        v43 = v10;
      }
      if (v43 == 95) {
        v31 = snprintf_plt(a1, 100, "%*lld", v23, v14);
      }
      else if (v43 == 45) {
        v31 = snprintf_plt(a1, 100, "%lld", v14);
      }
      else {
        v31 = snprintf_plt(a1, 100, "%0*lld", v23, v14);
      }
    }
    else {
      v31 = snprintf_plt(a1, 100, "+%lld", v14);
    }
    goto LABEL_70;
  case 'Z':
    if (a4[8] < 0) {
      goto LABEL_78;
    }
    v42 = __tm_to_tzname_plt(a4);
    goto LABEL_82;
  case 'a':
    v25 = a4[6];
    if (v25 > 6) {
      goto LABEL_47;
    }
    v19 = v25 | 0x20000;
    goto LABEL_81;
  case 'b':
  case 'h':
    v18 = a4[4];
    if (v18 > 0xB) {
    LABEL_47:
      a1 = "-";
    }
    else {
      v19 = v18 + 131086;
    LABEL_81:
      v42 = __nl_langinfo_l_plt(v19, a5);
    LABEL_82:
      a1 = (const char*)v42;
    }
    v36 = strlen_plt(a1);
    goto LABEL_84;
  case 'c':
    goto LABEL_73;
  case 'd':
    goto LABEL_20;
  case 'e':
    v10 = 95;
  LABEL_20:
    v14 = a4[3];
    goto LABEL_61;
  case 'j':
    v44 = a4[7];
    v23 = 3;
    v14 = v44 + 1;
    goto LABEL_62;
  case 'm':
    v14 = a4[4] + 1LL;
    goto LABEL_61;
  case 'n':
    *a2 = 1;
    return "\n";
  case 'p':
    if (a4[2] <= 11) {
      v19 = 131110;
    }
    else {
      v19 = 131111;
    }
    goto LABEL_81;
  case 'r':
    v11 = 131115;
    goto LABEL_73;
  case 's':
    v27 = a6;
    v29 = X8CALL_X0(_QWORD*, __tm_to_secs((void*)"%m/%d/%y", a4));
    a6 = v27;
    v10 = 48;
    v23 = 1;
    v14 = (__int64)v29 - *((_QWORD*)a4 + 5);
    goto LABEL_62;
  case 't':
    v36 = 1;
    result = "\t";
    goto LABEL_85;
  case 'u':
    v26 = a4[6];
    v23 = 1;
    if (v26 == 0) {
      v26 = 7;
    }
    v14 = v26;
    goto LABEL_62;
  case 'w':
    v14 = a4[6];
    v23 = 1;
    goto LABEL_62;
  case 'x':
    v11 = 131113;
  LABEL_73:
    v9 = (const char*)__nl_langinfo_l_plt(v11, a5);
  LABEL_74:
    v45 = strftime_l(a1, 100, v9);
    *a2 = v45;
    if (v45 != 0) {
      return (char*)a1;
    }
    else {
      return nullptr;
    }
  case 'y':
    v24 = (a4[5] + 1900LL) % 100;
    v10 = 48;
    if (v24 >= 0) {
      v14 = (a4[5] + 1900LL) % 100;
    }
    else {
      v14 = -v24;
    }
    goto LABEL_61;
  case 'z':
    if (a4[8] < 0) {
    LABEL_78:
      *a2 = 0;
      return &SdkData_bbbd5c;
    }
    else {
      v33 = *((_QWORD*)a4 + 5);
      v34 = v33 / 3600;
      v35 = abs_plt((unsigned int)(v33 % 3600));
      v31 = snprintf_plt(a1, 100, "%+.2ld%.2d", v34, v35 / 60);
    LABEL_70:
      v36 = v31;
    LABEL_84:
      result = (char*)a1;
    LABEL_85:
      *a2 = v36;
    }
    return result;
  default:
    return result;
  }
}

#pragma GCC visibility pop
