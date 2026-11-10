#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

char* evalprim(__int64*, char*, int);
extern char SdkData_bbbd5c;
extern char SdkData_bc1c55[];
extern char SdkData_cd9b2b[71];
char* evalbinop(__int64 a1, char* a2, unsigned int a3, int a4);

char* evalbinop(__int64 a1, char* a2, unsigned int a3, int a4)
{
  int v4;
  char* v7;
  char* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned __int64 v13;
  char* v14;
  unsigned __int64 v15;

  v4 = a4 - 1;
  v7 = evalprim((__int64*)a1, a2, a4 - 1);
  v8 = v7;
  v9 = 0;
  v10 = 0;
  LODWORD(v11) = 6;
  switch (*v7) {
  case '!':
    v9 = 0;
    v10 = 3;
    goto LABEL_11;
  case '%':
    LODWORD(v11) = 9;
    goto LABEL_15;
  case '&':
    v9 = 0;
    v10 = 1;
    goto LABEL_11;
  case '*':
    LODWORD(v11) = 8;
    goto LABEL_15;
  case '+':
    goto LABEL_15;
  case '-':
    LODWORD(v11) = 7;
    goto LABEL_15;
  case '/':
    LODWORD(v11) = 10;
    goto LABEL_15;
  case '<':
    v9 = 1;
    v10 = 5;
    goto LABEL_11;
  case '=':
    v9 = 0;
    v10 = 2;
    goto LABEL_11;
  case '>':
    v9 = 1;
    v10 = 4;
    goto LABEL_11;
  case '|':
  LABEL_11:
    LODWORD(v11) = v10;
    if (v7[1] == SdkData_cd9b2b[v10]) {
      *(_DWORD*)(a1 + 16) = v10;
      v8 = v7 + 2;
      v12 = (unsigned __int8)SdkData_bc1c55[(unsigned int)v10];
      if (a3 >= v12) {
        return v8;
      }
    LABEL_18:
      v13 = *(_QWORD*)a1;
      while (2) {
        v14 = evalbinop(a1, v8, v12, v4);
        v15 = *(_QWORD*)a1;
        v8 = v14;
        switch ((int)v11) {
        case 0:
          v13 = (v13 | v15) != 0;
          goto LABEL_20;
        case 1:
          v13 = v13 != 0 && v15 != 0;
          goto LABEL_20;
        case 2:
          v13 = v13 == v15;
          goto LABEL_20;
        case 3:
          v13 = v13 != v15;
          goto LABEL_20;
        case 4:
          v13 = v13 >= v15;
          goto LABEL_20;
        case 5:
          v13 = v13 <= v15;
          goto LABEL_20;
        case 6:
          v13 = v13 > v15;
          goto LABEL_20;
        case 7:
          v13 = v13 < v15;
          goto LABEL_20;
        case 8:
          v13 += v15;
          goto LABEL_20;
        case 9:
          v13 -= v15;
          goto LABEL_20;
        case 10:
          v13 *= v15;
          goto LABEL_20;
        case 11:
          if (v15 == 0) {
            return &SdkData_bbbd5c;
          }
          v13 %= v15;
          goto LABEL_20;
        case 12:
          if (v15 == 0) {
            return &SdkData_bbbd5c;
          }
          v13 /= v15;
        LABEL_20:
          v11 = *(int*)(a1 + 16);
          *(_QWORD*)a1 = v13;
          v12 = (unsigned __int8)SdkData_bc1c55[v11];
          if (a3 < v12) {
            continue;
          }
          return v8;
        default:
          return &SdkData_bbbd5c;
        }
      }
    }
    if (v9 != 0) {
    LABEL_15:
      LODWORD(v11) = v11 + 2;
      v8 = v7 + 1;
      *(_DWORD*)(a1 + 16) = v11;
      v12 = (unsigned __int8)SdkData_bc1c55[(unsigned int)v11];
      if (a3 >= v12) {
        return v8;
      }
      goto LABEL_18;
    }
  LABEL_17:
    *(_DWORD*)(a1 + 16) = (unsigned int)((__int64*)0xCLL) + 1;
    return v8;
  default:
    goto LABEL_17;
  }
}

#pragma GCC visibility pop
