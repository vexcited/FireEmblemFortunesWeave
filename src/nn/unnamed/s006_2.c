#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*SdkData_e84c60[])();

extern __int64 (*SdkData_e84cd8[])();

__int64 SdkRoutine_8332c0(unsigned __int8**);

__int64 SdkRoutine_833e70(_QWORD);

__int64 SdkRoutine_8363a0(_QWORD, _QWORD);

__int64 SdkRoutine_8393e0(_QWORD);

__int64 SdkRoutine_83ae20(_QWORD);

__int64 SdkRoutine_840a60(_QWORD, _QWORD);

__int64 SdkRoutine_8571c0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_857810(void);

__int64 SdkRoutine_8578d0(_QWORD);

__int64 SdkRoutine_858a50(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_859610(_QWORD);

__int64 SdkRoutine_87c7b0(_QWORD);

__int64 SdkHr_835ee0(__int64 a1)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  unsigned __int64 v4;
  int v5;
  unsigned __int64 v6;
  __int64 result;
  unsigned __int8* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int8* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  unsigned __int8* v17;
  int v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  char* v32;
  char v33;
  __int64 (**v34)();
  __int16 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;

  v1 = *(unsigned __int8**)a1;
  v2 = *(unsigned __int8**)(a1 + 8);
  v4 = (unsigned __int64)&v2[-*(_QWORD*)a1];
  if (v2 == *(unsigned __int8**)a1) {
    v5 = 2147483611;
  }
  else {
    HIDWORD(v6) = *v1 - 74;
    LODWORD(v6) = HIDWORD(v6);
    v5 = v6 >> 1;
    if (v5 <= 4) {
      if (v5 != 0) {
        if (v5 == 1) {
          if (v4 < 2 || v1[1] != 90) {
            return SdkRoutine_83ae20(a1);
          }
          *(_QWORD*)a1 = v1 + 2;
          result = SdkRoutine_8332c0((unsigned __int8**)a1);
          if (result != 0) {
            v8 = *(unsigned __int8**)a1;
            if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8) || *v8 != 69) {
              return 0;
            }
          LABEL_17:
            *(_QWORD*)a1 = v8 + 1;
            return result;
          }
          return result;
        }
        return SdkRoutine_833e70(a1);
      }
      v9 = *(_QWORD*)(a1 + 16);
      v10 = *(_QWORD*)(a1 + 24);
      v11 = v1 + 1;
      v12 = (__int64*)(a1 + 40);
      *(_QWORD*)a1 = v11;
      v13 = (v10 - v9) >> 3;
      while (1) {
        if (v11 != v2) {
          v18 = *v11;
          v17 = v11 + 1;
          if (v18 == 69) {
            break;
          }
        }
        result = SdkHr_835ee0(a1);
        if (result == 0) {
          return result;
        }
        v15 = *(__int64**)(a1 + 24);
        if (v15 == *(__int64**)(a1 + 32)) {
          v19 = *(__int64**)(a1 + 16);
          v20 = result;
          v21 = (char*)v15 - (char*)v19;
          if (v19 == v12) {
            v14 = SdkRoutine_8578d0(2 * ((char*)v15 - (char*)v19));
            if (v14 == 0) {
            LABEL_53:
              v30 = (_QWORD*)SdkRoutine_857810();
            LABEL_54:
              SdkRoutine_87c7b0(v30);
              __udf(0);
            }
            if (v15 != v12) {
              v22 = v14;
              SdkRoutine_858a50(v14, v19, v21);
              v14 = v22;
            }
            *(_QWORD*)(a1 + 16) = v14;
          }
          else {
            v14 = SdkRoutine_859610(*(_QWORD*)(a1 + 16));
            *(_QWORD*)(a1 + 16) = v14;
            if (v14 == 0) {
              goto LABEL_53;
            }
          }
          v15 = (__int64*)(v14 + v21);
          v16 = v14 + 8 * (v21 >> 2);
          result = v20;
          *(_QWORD*)(a1 + 32) = v16;
        }
        v11 = *(unsigned __int8**)a1;
        v2 = *(unsigned __int8**)(a1 + 8);
        *v15 = result;
        *(_QWORD*)(a1 + 24) = v15 + 1;
      }
      *(_QWORD*)a1 = v17;
      v24 = SdkRoutine_8363a0(a1, v13);
      v25 = *(_QWORD**)(a1 + 4912);
      v26 = v24;
      v28 = v27;
      v29 = v25[1];
      if ((unsigned __int64)(v29 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
        v30 = (_QWORD*)SdkRoutine_8578d0(4096);
        if (v30 == nullptr) {
          goto LABEL_54;
        }
        v29 = 0;
        *v30 = v25;
        v30[1] = 0;
        v25 = v30;
        *(_QWORD*)(a1 + 4912) = v30;
      }
      v31 = v29 + 32;
      v32 = (char*)v25 + v29;
      v33 = 41;
      v25[1] = v31;
      v34 = SdkData_e84c60;
    LABEL_41:
      *((_QWORD*)v32 + 2) = v34;
      result = (__int64)(v32 + 16);
      *(_BYTE*)(result + 8) = v33;
      v35 = *(_WORD*)(result + 9);
      *(_QWORD*)(result + 16) = v26;
      *(_QWORD*)(result + 24) = v28;
      *(_WORD*)(result + 9) = v35 & 0xF000 | 0x540;
      return result;
    }
  }
  if (v5 == 5) {
    if (v2 == v1 || *v1 != 84) {
      return SdkRoutine_833e70(a1);
    }
    v23 = v4 < 2 ? 0LL : v1[1];
    v36 = SdkRoutine_8571c0("yptnk", v23, 5);
    if (v36 == 0 || v36 - (_QWORD) "yptnk" == -1) {
      return SdkRoutine_833e70(a1);
    }
    result = SdkRoutine_840a60(a1, 0);
    if (result == 0) {
      return result;
    }
    v26 = result;
    result = SdkHr_835ee0(a1);
    if (result == 0) {
      return result;
    }
    v37 = *(_QWORD**)(a1 + 4912);
    v28 = result;
    v38 = v37[1];
    if ((unsigned __int64)(v38 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
      v30 = (_QWORD*)SdkRoutine_8578d0(4096);
      if (v30 == nullptr) {
        goto LABEL_54;
      }
      v38 = 0;
      *v30 = v37;
      v30[1] = 0;
      v37 = v30;
      *(_QWORD*)(a1 + 4912) = v30;
    }
    v39 = v38 + 32;
    v32 = (char*)v37 + v38;
    v33 = 34;
    v37[1] = v39;
    v34 = SdkData_e84cd8;
    goto LABEL_41;
  }
  if (v5 != 7) {
    return SdkRoutine_833e70(a1);
  }
  *(_QWORD*)a1 = v1 + 1;
  result = SdkRoutine_8393e0(a1);
  if (result != 0) {
    v8 = *(unsigned __int8**)a1;
    if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8) || *v8 != 69) {
      return 0;
    }
    goto LABEL_17;
  }
  return result;
}

#pragma GCC visibility pop
