#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 getenv_plt(_QWORD);
__int64 malloc_plt(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 strcmp_plt(void* this_, const char*, const char*);
extern _UNKNOWN* SdkData_e7db70;
extern __int64 SdkData_105aa18;
extern __int64 SdkData_e7db78;
extern char SdkData_cad634[15];
_UNKNOWN** musl_locale_777680(int a1, char* a2, const char* a3);

_UNKNOWN** musl_locale_777680(int a1, char* a2, const char* a3)
{
  int v3;
  char* v4;
  __int64 v6;
  char* v7;
  char* v8;
  char* v9;
  const char* v10;
  const char* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v3 = (unsigned __int8)*a2;
  v4 = a2;
  if (*a2 != 0) {
    goto LABEL_2;
  }
  v7 = (char*)getenv_plt("LC_ALL"),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v7 != nullptr) {
    v3 = (unsigned __int8)*v7;
    v4 = v7;
    if (*v7 != 0) {
      goto LABEL_2;
    }
  }
  if ((v8 = (char*)getenv_plt(&SdkData_cad634[12 * a1 + 6])) != nullptr &&
          (v3 = (unsigned __int8)*v8, v4 = v8, *v8 != 0) ||
      (v9 = (char*)getenv_plt("LANG")) != nullptr &&
          (v3 = (unsigned __int8)*v9, v4 = v9, *v9 != 0)) {
  LABEL_2:
    if (v3 == 47) {
      v6 = 0;
      goto LABEL_56;
    }
  }
  else {
    v3 = 67;
    v4 = "C.UTF-8";
  }
  v6 = 1;
  if (v4[1] != 0 && v4[1] != 47) {
    v6 = 2;
    if (v4[2] != 0 && v4[2] != 47) {
      v6 = 3;
      if (v4[3] != 0 && v4[3] != 47) {
        v6 = 4;
        if (v4[4] != 0 && v4[4] != 47) {
          v6 = 5;
          if (v4[5] != 0 && v4[5] != 47) {
            v6 = 6;
            if (v4[6] != 0 && v4[6] != 47) {
              v6 = 7;
              if (v4[7] != 0 && v4[7] != 47) {
                v6 = 8;
                if (v4[8] != 0 && v4[8] != 47) {
                  v6 = 9;
                  if (v4[9] != 0 && v4[9] != 47) {
                    v6 = 10;
                    if (v4[10] != 0 && v4[10] != 47) {
                      v6 = 11;
                      if (v4[11] != 0 && v4[11] != 47) {
                        v6 = 12;
                        if (v4[12] != 0 && v4[12] != 47) {
                          v6 = 13;
                          if (v4[13] != 0 && v4[13] != 47) {
                            v6 = 14;
                            if (v4[14] != 0 && v4[14] != 47) {
                              v6 = 15;
                              if (v4[15] != 0 && v4[15] != 47) {
                                v6 = 16;
                                if (v4[16] != 0 && v4[16] != 47) {
                                  v6 = 17;
                                  if (v4[17] != 0 && v4[17] != 47) {
                                    v6 = 18;
                                    if (v4[18] != 0 && v4[18] != 47) {
                                      v6 = 19;
                                      if (v4[19] != 0 && v4[19] != 47) {
                                        v6 = 20;
                                        if (v4[20] != 0 && v4[20] != 47) {
                                          v6 = 21;
                                          if (v4[21] != 0 && v4[21] != 47) {
                                            v6 = 22;
                                            if (v4[22] != 0 && v4[22] != 47) {
                                              v6 = 23;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_56:
  if (v3 == 46 || v4[v6] != 0) {
    v4 = "C.UTF-8";
  }
  else if (v3 != 67) {
    goto LABEL_60;
  }
  if (v4[1] == 0) {
    goto LABEL_73;
  }
LABEL_60:
  if ((unsigned int)strcmp_plt((void*)v4, "C.UTF-8", a3) == 0 ||
      (unsigned int)strcmp_plt((void*)v4, "POSIX", v10) == 0) {
  LABEL_73:
    if (a1 != 0 || v4[1] != 46) {
      return nullptr;
    }
    else {
      return &SdkData_e7db70;
    }
  }
  v12 = SdkData_105aa18;
  if (SdkData_105aa18 != 0) {
    while ((unsigned int)strcmp_plt((void*)v4, (const char*)(v12 + 16), v11) !=
           0) {
      v12 = *(_QWORD*)(v12 + 40);
      if (v12 == 0) {
        goto LABEL_65;
      }
    }
  }
  else {
  LABEL_65:
    v13 = (_QWORD*)malloc_plt(48),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v12 = (__int64)v13;
    if (v13 != nullptr) {
      v14 = SdkData_e7db78;
      *v13 = SdkData_e7db70;
      v13[1] = v14;
      memcpy_plt(v13 + 2, v4, v6),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      *(_BYTE*)(v12 + 16 + v6) = 0;
      *(_QWORD*)(v12 + 40) = SdkData_105aa18;
      SdkData_105aa18 = v12;
    }
    if (v12 == 0 && a1 == 0) {
      return &SdkData_e7db70;
    }
  }
  return (_UNKNOWN**)v12;
}

#pragma GCC visibility pop
