#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 setlocale_plt(_QWORD, _QWORD);
__int64 strchr_plt(void* this_, const char*);
__int64 strcpy_plt(void* this_, char*);
__int64 strrchr_plt(_QWORD, _QWORD);
__int64 strstr_plt(void* this_, const char*);
extern _UNKNOWN SdkData_cad9b0;
extern _UNKNOWN SdkData_cadb30;
extern _UNKNOWN SdkData_cadcb0;
extern _UNKNOWN SdkData_cade30;
extern _UNKNOWN SdkData_cadfb0;
extern _UNKNOWN SdkData_cae130;
extern _UNKNOWN SdkData_cae2b0;
extern _UNKNOWN SdkData_cae430;
extern _UNKNOWN SdkData_cae5b0;
extern _UNKNOWN SdkData_cae730;
extern _UNKNOWN SdkData_cae8b0;
extern _UNKNOWN SdkData_caea30;
extern _UNKNOWN SdkData_caebb0;
extern unsigned int SdkData_cad830[96];
__int64 btowc(unsigned __int8 a1);

__int64 btowc(unsigned __int8 a1)
{
  __int64 v1;
  char* v2;
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v9;
  unsigned int* v12;
  __int64 v21;
  __int64 v25;
  _BYTE v26[30];

  v1 = a1;
  v2 = (char*)setlocale_plt(0, 0);
  strcpy_plt((void*)v26, v2);
  v5 = strstr_plt((void*)v26, "8859");
  if (v5 == 0) {
  LABEL_37:
    if ((unsigned int)v1 >= 0x80) {
      return 0xFFFFFFFFLL;
    }
    else {
      return (unsigned int)v1;
    }
  }
  if ((unsigned int)(v1 - 32) < 0x5F) {
    return (unsigned int)v1;
  }
  v8 = v5;
  result = 0xFFFFFFFFLL;
  if ((unsigned int)v1 >= 0x20 && (unsigned int)(v1 - 127) >= 0x21) {
    v9 = v1 - 160;
    if (strstr_plt((void*)v26, "10") != 0) {
      return SdkData_cad830[v9];
    }
    if (strstr_plt((void*)v26, "11") != 0) {
      v12 = (unsigned int*)&SdkData_cad9b0;
      return v12[(int)v9];
    }
    if (strstr_plt((void*)v26, "13") != 0) {
      v12 = (unsigned int*)&SdkData_cadb30;
      return v12[(int)v9];
    }
    if (strstr_plt((void*)v26, "14") != 0) {
      v12 = (unsigned int*)&SdkData_cadcb0;
      return v12[(int)v9];
    }
    if (strstr_plt((void*)v26, "15") != 0) {
      v12 = (unsigned int*)&SdkData_cade30;
      return v12[(int)v9];
    }
    if (strstr_plt((void*)v26, "16") != 0) {
      v12 = (unsigned int*)&SdkData_cadfb0;
      return v12[(int)v9];
    }
    if (strchr_plt((void*)v26, (const char*)((__int64*)0x30LL) + 1) != 0) {
      return (unsigned int)v1;
    }
    if (strchr_plt((void*)v26, (const char*)((__int64*)0x30LL) + 2) != 0) {
      v12 = (unsigned int*)&SdkData_cae130;
      return v12[(int)v9];
    }
    if (strchr_plt((void*)v26, (const char*)((__int64*)0x30LL) + 3) != 0) {
      v12 = (unsigned int*)&SdkData_cae2b0;
      return v12[(int)v9];
    }
    if (strchr_plt((void*)v26, (const char*)((__int64*)0x30LL) + 4) != 0) {
      v12 = (unsigned int*)&SdkData_cae430;
      return v12[(int)v9];
    }
    v21 = strchr_plt((void*)v26, (const char*)((__int64*)0x30LL) + 5);
    if (v21 != strrchr_plt(v8, 53)) {
      v12 = (unsigned int*)&SdkData_cae5b0;
      return v12[(int)v9];
    }
    if (strchr_plt((void*)v26, (const char*)((__int64*)0x30LL) + 6) != 0) {
      v12 = (unsigned int*)&SdkData_cae730;
      return v12[(int)v9];
    }
    if (strchr_plt((void*)v26, (const char*)((__int64*)0x30LL) + 7) != 0) {
      v12 = (unsigned int*)&SdkData_cae8b0;
      return v12[(int)v9];
    }
    if (strrchr_plt(v8, 56) - v8 != 1) {
      v12 = (unsigned int*)&SdkData_caea30;
      return v12[(int)v9];
    }
    v25 = strchr_plt((void*)v26, (const char*)((__int64*)0x38LL) + 1);
    if (v25 != strrchr_plt(v8, 57)) {
      v12 = (unsigned int*)&SdkData_caebb0;
      return v12[(int)v9];
    }
    goto LABEL_37;
  }
  return result;
}

#pragma GCC visibility pop
