#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __getlocale_addr_plt(void);
extern _UNKNOWN SdkData_cd9970;
extern _UNKNOWN SdkData_cd9973;
extern char SdkData_bbbd5c;
const char* __nl_langinfo_l(int a1, _QWORD* a2);
const char* nl_langinfo(int a1);

const char* __nl_langinfo_l(int a1, _QWORD* a2)
{
  const char* result;
  int v3;
  unsigned int v4;
  __int64 v5;
  char v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  if (a1 == 14) {
    if (*a2 != 0) {
      return "UTF-8";
    }
    else {
      return "ASCII";
    }
  }
  v3 = a1 >> 16;
  v4 = (unsigned __int16)a1;
  if ((unsigned __int16)a1 == 0xFFFF && v3 <= 5) {
    v5 = a2[v3];
    if (v5 != 0) {
      return (const char*)(v5 + 16);
    }
    else {
      return "C";
    }
  }
  if (v3 == 5) {
    if ((unsigned __int16)a1 > 3u) {
      return &SdkData_bbbd5c;
    }
    v6 = a1;
    result = "^[yY]";
  }
  else {
    if (v3 != 2) {
      if (v3 == 1 && (unsigned __int16)a1 <= 1u) {
        v6 = a1;
        result = (const char*)&SdkData_cd9970;
        goto LABEL_21;
      }
      return &SdkData_bbbd5c;
    }
    if ((unsigned __int16)a1 > 0x31u) {
      return &SdkData_bbbd5c;
    }
    v6 = a1;
    result = (const char*)&SdkData_cd9973;
  }
LABEL_21:
  if (v4 == 0) {
    return result;
  }
  v7 = v6 & 7;
  if ((v6 & 7) == 0) {
    v9 = v4;
    if (v4 < 8) {
      return result;
    }
    goto LABEL_29;
  }
  v8 = 0;
  v9 = v4;
  do {
    do {
      v10 = *(unsigned __int8*)result++;
    } while (v10 != 0);
    --v9;
    ++v8;
  } while (v8 != v7);
  if (v4 >= 8) {
    do {
      do {
      LABEL_29:
        v11 = *(unsigned __int8*)result++;
      } while (v11 != 0);
      do {
        v12 = *(unsigned __int8*)result++;
      } while (v12 != 0);
      do {
        v13 = *(unsigned __int8*)result++;
      } while (v13 != 0);
      do {
        v14 = *(unsigned __int8*)result++;
      } while (v14 != 0);
      do {
        v15 = *(unsigned __int8*)result++;
      } while (v15 != 0);
      do {
        v16 = *(unsigned __int8*)result++;
      } while (v16 != 0);
      do {
        v17 = *(unsigned __int8*)result++;
      } while (v17 != 0);
      do {
        v18 = *(unsigned __int8*)result++;
      } while (v18 != 0);
      v9 -= 8;
    } while (v9 != 0);
  }
  return result;
}

const char* nl_langinfo(int a1)
{
  __int64* v2;
  __int64 v3;
  const char* v4;
  const char* v5;
  int v6;
  const char* result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v2 = *(__int64**)__getlocale_addr_plt();
  if (a1 == 14) {
    v3 = *v2;
    v4 = "UTF-8";
    v5 = "ASCII";
    goto LABEL_6;
  }
  v6 = a1 >> 16;
  if ((unsigned __int16)a1 == 0xFFFF && v6 <= 5) {
    v3 = v2[v6];
    v5 = "C";
    v4 = (const char*)(v3 + 16);
  LABEL_6:
    if (v3 != 0) {
      return v4;
    }
    else {
      return v5;
    }
  }
  if (v6 == 5) {
    if ((unsigned __int16)a1 <= 3u) {
      result = "^[yY]";
      goto LABEL_22;
    }
    return &SdkData_bbbd5c;
  }
  if (v6 != 2) {
    if (v6 == 1) {
      if ((unsigned __int16)a1 > 1u) {
        return &SdkData_bbbd5c;
      }
      result = (const char*)&SdkData_cd9970;
      goto LABEL_22;
    }
    return &SdkData_bbbd5c;
  }
  if ((unsigned __int16)a1 > 0x31u) {
    return &SdkData_bbbd5c;
  }
  result = (const char*)&SdkData_cd9973;
LABEL_22:
  if ((_WORD)a1 == 0) {
    return result;
  }
  if ((a1 & 7) == 0) {
    v9 = (unsigned __int16)a1;
    if ((unsigned __int16)a1 < 8u) {
      return result;
    }
    goto LABEL_30;
  }
  v8 = 0;
  v9 = (unsigned __int16)a1;
  do {
    do {
      v10 = *(unsigned __int8*)result++;
    } while (v10 != 0);
    --v9;
    ++v8;
  } while (v8 != (a1 & 7));
  if ((unsigned __int16)a1 >= 8u) {
    do {
      do {
      LABEL_30:
        v11 = *(unsigned __int8*)result++;
      } while (v11 != 0);
      do {
        v12 = *(unsigned __int8*)result++;
      } while (v12 != 0);
      do {
        v13 = *(unsigned __int8*)result++;
      } while (v13 != 0);
      do {
        v14 = *(unsigned __int8*)result++;
      } while (v14 != 0);
      do {
        v15 = *(unsigned __int8*)result++;
      } while (v15 != 0);
      do {
        v16 = *(unsigned __int8*)result++;
      } while (v16 != 0);
      do {
        v17 = *(unsigned __int8*)result++;
      } while (v17 != 0);
      do {
        v18 = *(unsigned __int8*)result++;
      } while (v18 != 0);
      v9 -= 8;
    } while (v9 != 0);
  }
  return result;
}

#pragma GCC visibility pop
