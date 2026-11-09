#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern int SdkData_10450c0;
extern char SdkData_10450c4;
extern __int64 SdkData_10450c8;
extern __int64 (*SdkData_e85098[])();
extern __int64 (*SdkData_e85110[])();
extern __int64 (*SdkData_e85188[])();
__int64 SdkRoutine_833e70(unsigned __int8**);
__int64 SdkRoutine_837c80(_QWORD, _QWORD);
__int64 SdkRoutine_8578d0(_QWORD);
__int64 SdkRoutine_875d30(_QWORD);
__int64 SdkRoutine_876530(_QWORD);
__int64 SdkRoutine_8768a0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8769f0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87c7b0(_QWORD);

__int64 SdkHr_6acb00(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD*)(a1 + 8);
  if (v4 == 0) {
    return 5;
  }
  v5 = *(_QWORD*)(v4 + 40);
  if (v5 == 0) {
    return 5;
  }
  result = SdkRoutine_8769f0(v5, 3, 1);
  if ((_DWORD)result != 0) {
    if ((_DWORD)result == 196623) {
      return 9;
    }
    else {
      if ((_DWORD)result == 4) {
        return 5;
      }
      return 7;
    }
  }
  return result;
}

__int64 SdkHr_6ad560(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  _DWORD* v5;
  unsigned int v6;
  __int64 result;
  _QWORD v8[2];
  int v9;
  int v10;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  if (*(_QWORD*)(a1 + 8) != 0) {
    v4 = *(_QWORD*)(a1 + 16);
    if (v4 != 0 && *(_QWORD*)(v4 + 24) != 0 && *(_DWORD*)(a1 + 24) != 0) {
      v5 = *(_DWORD**)(a1 + 32);
      if (v5 != nullptr) {
        v6 = 0;
        while (*v5 == 48) {
          result =
              SdkRoutine_8768a0(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL), v8, v6);
          if ((_DWORD)result != 0) {
            return 7;
          }
          ++v6;
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + 4LL) = v8[0];
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + 32LL) = v8[1];
          *(_DWORD*)(*(_QWORD*)(a1 + 32) + 16LL) = v9;
          *(_DWORD*)(*(_QWORD*)(a1 + 32) + 20LL) = v10;
          *(_DWORD*)(*(_QWORD*)(a1 + 32) + 12LL) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) = 0;
          v5 = (_DWORD*)((char*)v5 + (unsigned int)*v5);
          if (v6 >= *(_DWORD*)(a1 + 24)) {
            return result;
          }
        }
      }
    }
  }
  return 5;
}

__int64 SdkHr_847380(__int64 a1)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  __int64 result;
  int v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  char* v11;
  __int16 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int8* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int8* v18;
  __int64 v19;
  unsigned __int8* v20;
  bool v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int16 v26;
  unsigned __int8* v27;
  __int64 v28;
  unsigned __int8* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int8* v33;
  unsigned int v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;

  v2 = *(unsigned __int8**)a1;
  v1 = *(unsigned __int8**)(a1 + 8);
  if (*(unsigned __int8**)a1 == v1) {
    goto LABEL_9;
  }
  if (*v2 != 85) {
    if (*v2 == 114) {
      ++v2;
      v5 = 4;
      *(_QWORD*)a1 = v2;
      if (v2 != v1) {
      LABEL_10:
        if (*v2 == 86) {
          ++v2;
          v5 |= 2u;
          *(_QWORD*)a1 = v2;
        }
      }
    LABEL_12:
      if (v2 != v1 && *v2 == 75) {
        v5 |= 1u;
        *(_QWORD*)a1 = v2 + 1;
      }
      result = SdkRoutine_833e70((unsigned __int8**)a1);
      if (result != 0 && v5 != 0) {
        v6 = *(_QWORD**)(a1 + 4912);
        v7 = v6[1];
        if ((unsigned __int64)(v7 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
          v8 = result;
          v9 = (_QWORD*)SdkRoutine_8578d0(4096);
          if (v9 == nullptr) {
            goto LABEL_58;
          }
          v7 = 0;
          *v9 = v6;
          v9[1] = 0;
          v6 = v9;
          *(_QWORD*)(a1 + 4912) = v9;
          result = v8;
        }
        v10 = v7 + 32;
        v11 = (char*)v6 + v7;
        v6[1] = v10;
        LOWORD(v10) = *(_WORD*)(result + 9);
        *((_QWORD*)v11 + 2) = SdkData_e85188;
        v11 += 16;
        v11[8] = 3;
        v12 = *(_WORD*)(v11 + 9);
        *((_DWORD*)v11 + 3) = v5;
        *((_QWORD*)v11 + 2) = result;
        *(_WORD*)(v11 + 9) = v12 & 0xF000 | v10 & 0xFC0;
        return (__int64)v11;
      }
      return result;
    }
  LABEL_9:
    v5 = 0;
    if (v2 == v1) {
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  *(_QWORD*)a1 = v2 + 1;
  if (v1 != v2 + 1) {
    if ((unsigned int)v2[1] - 58 < 0xFFFFFFF6) {
      return 0;
    }
    v13 = 0;
    v14 = 0;
    do {
      v15 = &v2[v13];
      v16 = v13;
      v17 = v14;
      v18 = &v2[v13 + 2];
      *(_QWORD*)a1 = v18;
      v19 = v2[v13 + 1];
      v14 = v19 + 10 * v14 - 48;
      if (v18 == v1) {
        break;
      }
      ++v13;
    } while ((unsigned int)*v18 - 48 <= 9);
    if (v1 - v2 - v16 - 2 >= v14) {
      v20 = &v2[10 * v17 - 46 + v16 + v19];
      *(_QWORD*)a1 = v20;
      if (v14 != 0) {
        if (v14 < 9 || (*(_QWORD*)(v15 + 2) == 0x746F7270636A626FLL
                            ? (v21 = v15[10] == 111)
                            : (v21 = false),
                        !v21)) {
          if (v20 == v1 || *v20 != 73) {
            v22 = 0;
          }
          else {
            result = SdkRoutine_837c80(a1, 0);
            v22 = result;
            if (result == 0) {
              return result;
            }
          }
          result = SdkHr_847380(a1);
          if (result != 0) {
            v23 = *(_QWORD**)(a1 + 4912);
            v24 = result;
            v25 = v23[1];
            if ((unsigned __int64)(v25 - 4032) > 0xFFFFFFFFFFFFF00FLL) {
            LABEL_40:
              v23[1] = v25 + 48;
              *(_QWORD*)((char*)v23 + v25 + 16) = SdkData_e85110;
              result = (__int64)v23 + v25 + 16;
              *(_BYTE*)(result + 8) = 2;
              v26 = *(_WORD*)((char*)v23 + v25 + 25);
              *(_QWORD*)(result + 16) = v24;
              *(_QWORD*)(result + 24) = v18;
              *(_QWORD*)(result + 32) = v14;
              *(_QWORD*)(result + 40) = v22;
            LABEL_41:
              *(_WORD*)(result + 9) = v26 & 0xF000 | 0x540;
              return result;
            }
            v9 = (_QWORD*)SdkRoutine_8578d0(4096);
            if (v9 != nullptr) {
              v25 = 0;
              *v9 = v23;
              v9[1] = 0;
              v23 = v9;
              *(_QWORD*)(a1 + 4912) = v9;
              goto LABEL_40;
            }
          LABEL_58:
            SdkRoutine_87c7b0(v9);
            __udf(0);
          }
          return result;
        }
        v27 = &v2[v16 + 11];
        v28 = (__int64)&v2[10 * v17 - 46 + v16 + v19];
        *(_QWORD*)a1 = v27;
        *(_QWORD*)(a1 + 8) = v28;
        if (v14 == 9 || (unsigned int)*v27 - 58 < 0xFFFFFFF6) {
          goto LABEL_49;
        }
        v29 = v15 + 12;
        v30 = 0;
        v31 = 10 * v17;
        v32 = v19 + v31 - 58;
        while (1) {
          *(_QWORD*)a1 = v29;
          v30 = *(v29 - 1) + 10 * v30 - 48;
          if (v32 == 0) {
            break;
          }
          v33 = v29 + 1;
          --v32;
          v34 = *v29++ - 48;
          if (v34 > 9) {
            v28 = (__int64)(v33 - 1);
            break;
          }
        }
        if ((unsigned __int64)&v2[v16 - 46 + v31 - v28 + v19] < v30) {
        LABEL_49:
          *(_QWORD*)a1 = v20;
          *(_QWORD*)(a1 + 8) = v1;
          return 0;
        }
        *(_QWORD*)a1 = v20;
        *(_QWORD*)(a1 + 8) = v1;
        if (v30 != 0) {
          result = SdkHr_847380(a1);
          if (result != 0) {
            v35 = *(_QWORD**)(a1 + 4912);
            v36 = result;
            v37 = v35[1];
            if ((unsigned __int64)(v37 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
              v9 = (_QWORD*)SdkRoutine_8578d0(4096);
              if (v9 == nullptr) {
                goto LABEL_58;
              }
              v37 = 0;
              *v9 = v35;
              v9[1] = 0;
              v35 = v9;
              *(_QWORD*)(a1 + 4912) = v9;
            }
            v35[1] = v37 + 48;
            *(_QWORD*)((char*)v35 + v37 + 16) = SdkData_e85098;
            result = (__int64)v35 + v37 + 16;
            *(_BYTE*)(result + 8) = 11;
            v26 = *(_WORD*)((char*)v35 + v37 + 25);
            *(_QWORD*)(result + 16) = v36;
            *(_QWORD*)(result + 24) = v28;
            *(_QWORD*)(result + 32) = v30;
            goto LABEL_41;
          }
          return result;
        }
      }
    }
  }
  return 0;
}

#pragma GCC visibility pop
