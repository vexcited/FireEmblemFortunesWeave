#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* ATSParser_53c7b0(_QWORD*, __int64, unsigned __int64);
__int64* ac4_dsi_parser_55e160(__int64**, unsigned int*);
__int64* nn_fs_dc120(__int64* result, __int64*);
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ABitReader_getBits_plt(_QWORD, _QWORD);
__int64 nandroid_ABitReader_numBitsLeft_plt(_QWORD);
__int64 nandroid_ABitReader_skipBits_plt(_QWORD, _QWORD);
__int64 nandroid_AC4DSIParser_parseBitrateDsi_plt(_QWORD);
__int64 nandroid_AC4DSIParser_parseLanguageTag_plt(_QWORD, _QWORD);
__int64 nandroid_AC4DSIParser_parseSubstreamDSI_plt(_QWORD, _QWORD);
__int64 nandroid_AC4DSIParser_parseSubstreamGroupDSI_plt(_QWORD, _QWORD);
__int64 nn_movie_detail_AllocateMemory(__int64, _QWORD**);
__int64 nn_os_GetTlsValue_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e888c0;
extern __int64 SdkData_e88c48;
extern void (*SdkData_e88338[493])();
unsigned __int64* ATSParser_53c680(unsigned __int64*, __int64,
                                   unsigned __int64);
unsigned __int8* nandroid_55f480(unsigned __int8* result, unsigned __int64);
__int64 nandroid_AC4DSIParser_AC4DSIParser(void* this_, void* a2);
__int64 nandroid_AC4DSIParser_parseLanguageTag(void* this_, unsigned int a2);
__int64 nandroid_AC4DSIParser_parseSubstreamDSI(void* this_, unsigned int a2);
__int64 nandroid_AC4DSIParser_parseSubstreamGroupDSI(void* this_,
                                                     unsigned int a2);
bool nandroid_AC4DSIParser_parseBitrateDsi(void* this_);
__int64 nandroid_AC4DSIParser_parse(void* this_);

__int64 nandroid_AC4DSIParser_AC4DSIParser(void* this_, void* a2)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  __int64 v7;
  __int64 result;
  int v9;

  *(_QWORD*)this_ = SdkData_e888c0 + 16;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v5 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v9 = __cxa_guard_acquire_plt(SdkData_e88330);
    v5 = SdkData_e88338[0];
    if (v9 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v5 = SdkData_e88338[0];
    }
  }
  v6 = nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  *((_QWORD*)this_ + 2) = 0;
  *((_QWORD*)this_ + 3) = v6;
  *((_QWORD*)this_ + 4) = 0;
  v7 = SdkData_e88c48;
  *((_QWORD*)this_ + 6) = a2;
  *(_QWORD*)this_ = v7 + 16;
  *((_QWORD*)this_ + 1) = (char*)this_ + 16;
  result = nandroid_ABitReader_numBitsLeft_plt(a2);
  *((_QWORD*)this_ + 5) = result;
  return result;
}

__int64 nandroid_AC4DSIParser_parseLanguageTag(void* this_, unsigned int a2)
{
  unsigned int v4;
  unsigned int v5;
  __int64 v7;
  unsigned __int64 v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64* v12;
  _QWORD* v13;
  unsigned int v14;
  _QWORD* v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  unsigned __int64* v19;
  unsigned __int64 v20;
  char* v21;
  unsigned __int64 v22;
  struct {
    __int64 v23;
    unsigned __int64 v24;
    char* v25;
  } v23_;
  struct {
    _QWORD v26[5];
    __int16 v27;
  } v26_;

  if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(
          *((_QWORD*)this_ + 6)) >= 6) {
    v4 = nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 6);
    if (v4 - 42 >= 0xFFFFFFD8) {
      v5 = v4;
      if (nandroid_ABitReader_numBitsLeft_plt(*((_QWORD*)this_ + 6)) >=
          (unsigned __int64)(8 * v4)) {
        v7 = 0;
        v26_.v27 = 0;
        v8 = v5;
        memset(v26_.v26, 0, sizeof(v26_.v26));
        do {
          *((_BYTE*)v26_.v26 + v7++) =
              nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 8);
        } while (v5 != v7);
        v23_.v24 = 0;
        v23_.v25 = nullptr;
        v23_.v23 = 0;
        *((_BYTE*)v26_.v26 + v5) = 0;
        if (v5 >= 0x17) {
          if ((v5 | 7LL) == 0x17) {
            v10 = 26;
          }
          else {
            v10 = (v5 | 7LL) + 1;
          }
          v9 = (char*)SdkRoutine_85e050(v10);
          v23_.v24 = v8;
          v23_.v25 = v9;
          v23_.v23 = v10 | 1;
        }
        else {
          LOBYTE(v23_.v23) = 2 * v5;
          v9 = (char*)&v23_.v23 + 1;
        }
        memcpy_plt(v9, v26_.v26, v8);
        v9[v8] = 0;
        v12 = (__int64*)((char*)this_ + 16);
        v11 = *((_QWORD*)this_ + 2);
        if (v11 != 0) {
          while (1) {
            while (1) {
              v13 = (_QWORD*)v11;
              v14 = *(_DWORD*)(v11 + 32);
              if (a2 >= v14) {
                break;
              }
              v11 = *v13;
              v12 = v13;
              if (*v13 == 0) {
                goto LABEL_21;
              }
            }
            if (v14 >= a2) {
              break;
            }
            v11 = v13[1];
            if (v11 == 0) {
              v12 = v13 + 1;
              goto LABEL_21;
            }
          }
        }
        else {
          v13 = (_QWORD*)((char*)this_ + 16);
        LABEL_21:
          v15 = v13;
          v16 = nn_movie_detail_AllocateMemory(112, *((_QWORD***)this_ + 3));
          *(_DWORD*)(v16 + 32) = a2;
          *(_QWORD*)(v16 + 72) = 0;
          *(_QWORD*)(v16 + 80) = 0;
          v13 = (_QWORD*)v16;
          v17 = (__int64*)v16;
          *(_QWORD*)(v16 + 88) = 0;
          *(_QWORD*)(v16 + 96) = 0;
          *(_QWORD*)(v16 + 104) = 0;
          *(_QWORD*)v16 = 0;
          *(_QWORD*)(v16 + 8) = 0;
          *(_QWORD*)(v16 + 16) = v15;
          *(_QWORD*)(v16 + 40) = -1;
          *(_QWORD*)(v16 + 48) = 0xFFFFFFFFLL;
          *(_QWORD*)(v16 + 56) = 0x10000;
          *(_QWORD*)(v16 + 64) = 0;
          *v12 = v16;
          v18 = **((_QWORD**)this_ + 1);
          if (v18 != 0) {
            *((_QWORD*)this_ + 1) = v18;
            v17 = (__int64*)*v12;
          }
          nn_fs_dc120(*((__int64**)this_ + 2), v17);
          ++*((_QWORD*)this_ + 4);
        }
        v19 = v13 + 8;
        if (v13 + 8 != &v23_.v23) {
          if ((*(_BYTE*)v19 & 1) == 0) {
            if ((v23_.v23 & 1) != 0) {
              ATSParser_53c7b0(v19, (__int64)v23_.v25, v23_.v24);
              if ((v23_.v23 & 1) == 0) {
                return 1;
              }
            }
            else {
              v20 = v23_.v24;
              *v19 = v23_.v23;
              v13[9] = v20;
              v13[10] = v23_.v25;
              if ((v23_.v23 & 1) == 0) {
                return 1;
              }
            }
            goto LABEL_37;
          }
          if ((v23_.v23 & 1) != 0) {
            v21 = v23_.v25;
          }
          else {
            v21 = (char*)&v23_.v23 + 1;
          }
          if ((v23_.v23 & 1) != 0) {
            v22 = v23_.v24;
          }
          else {
            v22 = (unsigned __int64)(unsigned __int8)v23_.v23 >> 1;
          }
          ATSParser_53c680(v19, (__int64)v21, v22);
        }
        if ((v23_.v23 & 1) == 0) {
          return 1;
        }
      LABEL_37:
        SdkRoutine_857220(v23_.v25, v23_.v23 & 0xFFFFFFFFFFFFFFFELL);
        return 1;
      }
    }
  }
  return 0;
}

__int64 nandroid_AC4DSIParser_parseSubstreamDSI(void* this_, unsigned int a2)
{
  __int64 v3;
  unsigned int v4;
  int v6;
  unsigned int v7;
  __int64* v8;
  unsigned int v9;

  v3 = *((_QWORD*)this_ + 6);
  v9 = a2;
  if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(v3) < 5) {
    return 0;
  }
  v6 = nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 5);
  if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(
          *((_QWORD*)this_ + 6)) < 2) {
    return 0;
  }
  nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 2);
  if (nandroid_ABitReader_numBitsLeft_plt(*((_QWORD*)this_ + 6)) == 0) {
    return 0;
  }
  if ((unsigned int)nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 1) ==
      1) {
    if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(
            *((_QWORD*)this_ + 6)) < 5) {
      return 0;
    }
    nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 5);
  }
  if ((unsigned int)(v6 - 7) <= 3) {
    if (nandroid_ABitReader_numBitsLeft_plt(*((_QWORD*)this_ + 6)) == 0) {
      return 0;
    }
    nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 1);
  }
  if (nandroid_ABitReader_numBitsLeft_plt(*((_QWORD*)this_ + 6)) != 0) {
    v4 = 1;
    if ((unsigned int)nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6),
                                                      1) != 1) {
      return v4;
    }
    if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(
            *((_QWORD*)this_ + 6)) >= 3) {
      v7 = nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 3);
      v8 = ac4_dsi_parser_55e160((__int64**)this_ + 1, &v9);
      if (v7 <= 1 && *(_DWORD*)v8 == -1) {
        *(_DWORD*)ac4_dsi_parser_55e160((__int64**)this_ + 1, &v9) = v6;
      }
      *((_DWORD*)ac4_dsi_parser_55e160((__int64**)this_ + 1, &v9) + 3) = v7;
      if (nandroid_ABitReader_numBitsLeft_plt(*((_QWORD*)this_ + 6)) != 0 &&
          ((unsigned int)nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6),
                                                         1) != 1 ||
           (nandroid_AC4DSIParser_parseLanguageTag_plt(this_, v9) & 1) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

__int64 nandroid_AC4DSIParser_parseSubstreamGroupDSI(void* this_,
                                                     unsigned int a2)
{
  __int64 v3;
  int v4;
  unsigned int v5;
  int v7;
  int v8;
  int v9;
  unsigned int v10;

  v3 = *((_QWORD*)this_ + 6);
  v10 = a2;
  if (nandroid_ABitReader_numBitsLeft_plt(v3) != 0) {
    nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 1);
    if (nandroid_ABitReader_numBitsLeft_plt(*((_QWORD*)this_ + 6)) != 0) {
      nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 1);
      if (nandroid_ABitReader_numBitsLeft_plt(*((_QWORD*)this_ + 6)) != 0) {
        v4 = nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 1);
        if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(
                *((_QWORD*)this_ + 6)) < 8) {
          return 0;
        }
        v7 = nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 8);
        if (v7 != 0) {
          v8 = v7;
          if (v4 == 1) {
            while ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(
                       *((_QWORD*)this_ + 6)) >= 2) {
              nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 2);
              if (nandroid_ABitReader_numBitsLeft_plt(*((_QWORD*)this_ + 6)) ==
                  0) {
                break;
              }
              if ((unsigned int)nandroid_ABitReader_getBits_plt(
                      *((_QWORD*)this_ + 6), 1) == 1) {
                if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(
                        *((_QWORD*)this_ + 6)) < 5) {
                  return 0;
                }
                nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 5);
              }
              if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(
                      *((_QWORD*)this_ + 6)) < 0x18) {
                break;
              }
              nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 24);
              if (--v8 == 0) {
                goto LABEL_32;
              }
            }
          }
          else {
            while ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(
                       *((_QWORD*)this_ + 6)) >= 2) {
              nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 2);
              if (nandroid_ABitReader_numBitsLeft_plt(*((_QWORD*)this_ + 6)) ==
                  0) {
                break;
              }
              if ((unsigned int)nandroid_ABitReader_getBits_plt(
                      *((_QWORD*)this_ + 6), 1) == 1) {
                if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(
                        *((_QWORD*)this_ + 6)) < 5) {
                  return 0;
                }
                nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 5);
              }
              if (nandroid_ABitReader_numBitsLeft_plt(*((_QWORD*)this_ + 6)) ==
                  0) {
                break;
              }
              if ((unsigned int)nandroid_ABitReader_getBits_plt(
                      *((_QWORD*)this_ + 6), 1) == 1) {
                if (nandroid_ABitReader_numBitsLeft_plt(
                        *((_QWORD*)this_ + 6)) == 0) {
                  return 0;
                }
                if ((unsigned int)nandroid_ABitReader_getBits_plt(
                        *((_QWORD*)this_ + 6), 1) != 1) {
                  if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(
                          *((_QWORD*)this_ + 6)) < 4) {
                    return 0;
                  }
                  nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 4);
                }
                if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(
                        *((_QWORD*)this_ + 6)) < 6) {
                  return 0;
                }
                nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 6);
              }
              if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(
                      *((_QWORD*)this_ + 6)) < 4) {
                return 0;
              }
              nandroid_ABitReader_skipBits_plt(*((_QWORD*)this_ + 6), 4);
              if (--v8 == 0) {
                goto LABEL_32;
              }
            }
          }
        }
        else {
        LABEL_32:
          if (nandroid_ABitReader_numBitsLeft_plt(*((_QWORD*)this_ + 6)) != 0) {
            v5 = 1;
            if ((unsigned int)nandroid_ABitReader_getBits_plt(
                    *((_QWORD*)this_ + 6), 1) != 1) {
              return v5;
            }
            if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(
                    *((_QWORD*)this_ + 6)) >= 3) {
              v9 = nandroid_ABitReader_getBits_plt(*((_QWORD*)this_ + 6), 3);
              *((_DWORD*)ac4_dsi_parser_55e160((__int64**)this_ + 1, &v10) +
                3) = v9;
              if (nandroid_ABitReader_numBitsLeft_plt(*((_QWORD*)this_ + 6)) !=
                      0 &&
                  ((unsigned int)nandroid_ABitReader_getBits_plt(
                       *((_QWORD*)this_ + 6), 1) != 1 ||
                   (nandroid_AC4DSIParser_parseLanguageTag_plt(this_, v10) &
                    1) != 0)) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

bool nandroid_AC4DSIParser_parseBitrateDsi(void* this_)
{
  unsigned __int64 v2;

  v2 = nandroid_ABitReader_numBitsLeft_plt(*((_QWORD*)this_ + 6));
  if (v2 >= 0x42) {
    nandroid_ABitReader_skipBits_plt(*((_QWORD*)this_ + 6), 2);
    nandroid_ABitReader_skipBits_plt(*((_QWORD*)this_ + 6), 32);
    nandroid_ABitReader_skipBits_plt(*((_QWORD*)this_ + 6), 32);
  }
  return v2 > 0x41;
}

__int64 nandroid_AC4DSIParser_parse(void* this_)
{
  _QWORD* v2;
  unsigned int v3;
  unsigned int v4;
  __int64 result;
  unsigned int v6;
  unsigned int v7;
  int v8;
  int j;
  __int64 v10;
  char v11;
  char** v12;
  unsigned int v13;
  char* v14;
  __int64* v15;
  __int64* v16;
  unsigned int v17;
  char* v18;
  __int64 v19;
  unsigned int v20;
  __int64* v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned int v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned int v33;
  int v34;
  char* v35;
  int v36;
  __int64* v37;
  __int64* v38;
  unsigned int v39;
  char* v40;
  __int64 v41;
  unsigned int v42;
  __int64* v43;
  __int64 v44;
  unsigned int v45;
  unsigned int v46;
  char v47;
  int v48;
  bool v49;
  int v50;
  int v51;
  int v52;
  int v53;
  bool v54;
  int v55;
  int v56;
  __int64 v57;
  char v58;
  unsigned int v59;
  __int64* v60;
  __int64 i;
  char v62;
  char* v63;
  int v64;
  __int64 v65;
  char v66;
  __int64 v67;
  unsigned __int64 v68;
  char* v69;
  __int64* v70;
  __int64* v71;
  unsigned int v72;
  char* v73;
  __int64 v74;
  unsigned int v75;
  __int64* v76;
  __int64 v77;
  unsigned int v78;
  unsigned int v79;
  __int64 v80;
  int v81;
  _BOOL4 v82;
  int v83;
  unsigned int v84;

  v2 = (_QWORD*)((char*)this_ + 48);
  if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(
          *((_QWORD*)this_ + 6)) < 3) {
    return 0;
  }
  v3 = nandroid_ABitReader_getBits_plt(*v2, 3);
  if (v3 > 1) {
    return 0;
  }
  v4 = v3;
  if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 0x15) {
    return 0;
  }
  v6 = nandroid_ABitReader_getBits_plt(*v2, 7);
  nandroid_ABitReader_skipBits_plt(*v2, 1);
  nandroid_ABitReader_skipBits_plt(*v2, 4);
  v7 = nandroid_ABitReader_getBits_plt(*v2, 9);
  if (v6 >= 2) {
    if (v4 == 0) {
      return 0;
    }
    result = nandroid_ABitReader_numBitsLeft_plt(*v2);
    if (result == 0) {
      return result;
    }
    if ((unsigned int)nandroid_ABitReader_getBits_plt(*v2, 1) == 1) {
      if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 0x11) {
        return 0;
      }
      v8 = nandroid_ABitReader_getBits_plt(*v2, 16);
      if ((unsigned int)nandroid_ABitReader_getBits_plt(*v2, 1) == 1) {
        if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 0x80) {
          return 0;
        }
        nandroid_ABitReader_getBits_plt(*v2, 8);
        nandroid_ABitReader_getBits_plt(*v2, 8);
        nandroid_ABitReader_getBits_plt(*v2, 8);
        nandroid_ABitReader_getBits_plt(*v2, 8);
        nandroid_ABitReader_getBits_plt(*v2, 8);
        nandroid_ABitReader_getBits_plt(*v2, 8);
        nandroid_ABitReader_getBits_plt(*v2, 8);
        nandroid_ABitReader_getBits_plt(*v2, 8);
        nandroid_ABitReader_getBits_plt(*v2, 8);
        nandroid_ABitReader_getBits_plt(*v2, 8);
        nandroid_ABitReader_getBits_plt(*v2, 8);
        nandroid_ABitReader_getBits_plt(*v2, 8);
        nandroid_ABitReader_getBits_plt(*v2, 8);
        nandroid_ABitReader_getBits_plt(*v2, 8);
        nandroid_ABitReader_getBits_plt(*v2, 8);
        nandroid_ABitReader_getBits_plt(*v2, 8);
      }
    }
    else {
      v8 = -1;
    }
  LABEL_18:
    if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 0x42) {
      return 0;
    }
    nandroid_ABitReader_skipBits_plt(*v2, 2);
    nandroid_ABitReader_skipBits_plt(*v2, 32);
    nandroid_ABitReader_skipBits_plt(*v2, 32);
    v10 = *v2;
    v11 = nandroid_ABitReader_numBitsLeft_plt(*v2);
    nandroid_ABitReader_skipBits_plt(v10, v11 & 7);
    j = 1;
    v84 = 0;
    if (v7 != 0) {
      goto LABEL_20;
    }
    return 1;
  }
  v8 = -1;
  if (v4 == 1) {
    goto LABEL_18;
  }
  j = 0;
  v84 = 0;
  if (v7 == 0) {
    return 1;
  }
LABEL_20:
  v12 = (char**)((char*)this_ + 16);
  v13 = 0;
  v81 = v8;
  v83 = j;
  while (1) {
    v14 = *v12;
    v15 = (__int64*)((char*)this_ + 16);
    v16 = (__int64*)((char*)this_ + 16);
    if (*v12 != nullptr) {
      while (1) {
        while (1) {
          v16 = (__int64*)v14;
          v17 = *((_DWORD*)v14 + 8);
          if (v13 >= v17) {
            break;
          }
          v14 = (char*)*v16;
          v15 = v16;
          if (*v16 == 0) {
            goto LABEL_28;
          }
        }
        if (v17 >= v13) {
          break;
        }
        v14 = (char*)v16[1];
        if (v14 == nullptr) {
          v15 = v16 + 1;
          goto LABEL_28;
        }
      }
    }
    else {
    LABEL_28:
      v18 = (char*)v16;
      v19 = nn_movie_detail_AllocateMemory(112, *((_QWORD***)this_ + 3));
      v20 = v84;
      *(_QWORD*)(v19 + 72) = 0;
      *(_QWORD*)(v19 + 80) = 0;
      *(_QWORD*)(v19 + 88) = 0;
      *(_QWORD*)(v19 + 96) = 0;
      v16 = (__int64*)v19;
      v21 = (__int64*)v19;
      *(_QWORD*)(v19 + 104) = 0;
      *(_QWORD*)v19 = 0;
      *(_QWORD*)(v19 + 8) = 0;
      *(_QWORD*)(v19 + 16) = v18;
      *(_DWORD*)(v19 + 32) = v20;
      *(_QWORD*)(v19 + 40) = -1;
      *(_QWORD*)(v19 + 48) = 0xFFFFFFFFLL;
      *(_QWORD*)(v19 + 56) = 0x10000;
      *(_QWORD*)(v19 + 64) = 0;
      *v15 = v19;
      v22 = **((_QWORD**)this_ + 1);
      if (v22 != 0) {
        *((_QWORD*)this_ + 1) = v22;
        v21 = (__int64*)*v15;
      }
      nn_fs_dc120(*((__int64**)this_ + 2), v21);
      ++*((_QWORD*)this_ + 4);
    }
    *((_DWORD*)v16 + 11) = v8;
    if (v4 == 0) {
      if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 0xB) {
        return 0;
      }
      v82 = nandroid_ABitReader_getBits_plt(*v2, 1) == 1;
      v27 = nandroid_ABitReader_getBits_plt(*v2, 5);
      v23 = nandroid_ABitReader_getBits_plt(*v2, 5);
      v28 = 0;
      v80 = 0;
      if (v27 != 6) {
        goto LABEL_47;
      }
    LABEL_46:
      if (!v82) {
        goto LABEL_131;
      }
      goto LABEL_47;
    }
    if (j == 0) {
      v82 = false;
      v27 = 0;
      v23 = 0;
      v80 = 0;
      v28 = 0;
      goto LABEL_47;
    }
    if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 0x10) {
      return 0;
    }
    v23 = nandroid_ABitReader_getBits_plt(*v2, 8);
    v24 = nandroid_ABitReader_getBits_plt(*v2, 8);
    if (v24 == 255) {
      if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 0x10) {
        return 0;
      }
      v24 = nandroid_ABitReader_getBits_plt(*v2, 16) + 255;
    }
    if (v23 >= 3) {
      v25 = nandroid_ABitReader_numBitsLeft_plt(*v2);
      v26 = 8 * v24;
      if (v25 < v26) {
        return 0;
      }
      nandroid_ABitReader_skipBits_plt(*v2, v26);
      v8 = v81;
      goto LABEL_172;
    }
    v29 = *((_QWORD*)this_ + 5);
    v30 = nandroid_ABitReader_numBitsLeft_plt(*((_QWORD*)this_ + 6));
    if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(
            *((_QWORD*)this_ + 6)) < 5) {
      return 0;
    }
    v28 = (unsigned __int64)(v29 - v30) >> 3;
    j = v83;
    v27 = nandroid_ABitReader_getBits_plt(*v2, 5);
    v82 = v27 == 31;
    v31 = v24;
    v8 = v81;
    v80 = v31;
    if (v27 == 6) {
      goto LABEL_46;
    }
  LABEL_47:
    v79 = v27;
    if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 4) {
      return 0;
    }
    nandroid_ABitReader_getBits_plt(*v2, 3);
    if ((unsigned int)nandroid_ABitReader_getBits_plt(*v2, 1) == 1) {
      if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 5) {
        return 0;
      }
      v78 = v23;
      v32 = v28;
      v33 = v7;
      v34 = nandroid_ABitReader_getBits_plt(*v2, 5);
      v35 = *v12;
      v36 = v34;
      v37 = (__int64*)((char*)this_ + 16);
      v38 = (__int64*)((char*)this_ + 16);
      if (*v12 != nullptr) {
        while (1) {
          while (1) {
            v38 = (__int64*)v35;
            v39 = *((_DWORD*)v35 + 8);
            if (v84 >= v39) {
              break;
            }
            v35 = (char*)*v38;
            v37 = v38;
            if (*v38 == 0) {
              goto LABEL_57;
            }
          }
          if (v39 >= v84) {
            break;
          }
          v35 = (char*)v38[1];
          if (v35 == nullptr) {
            v37 = v38 + 1;
            goto LABEL_57;
          }
        }
      }
      else {
      LABEL_57:
        v40 = (char*)v38;
        v41 = nn_movie_detail_AllocateMemory(112, *((_QWORD***)this_ + 3));
        v42 = v84;
        *(_QWORD*)(v41 + 72) = 0;
        *(_QWORD*)(v41 + 80) = 0;
        *(_QWORD*)(v41 + 88) = 0;
        *(_QWORD*)(v41 + 96) = 0;
        v38 = (__int64*)v41;
        v43 = (__int64*)v41;
        *(_QWORD*)(v41 + 104) = 0;
        *(_QWORD*)v41 = 0;
        *(_QWORD*)(v41 + 8) = 0;
        *(_QWORD*)(v41 + 16) = v40;
        *(_DWORD*)(v41 + 32) = v42;
        *(_QWORD*)(v41 + 40) = -1;
        *(_QWORD*)(v41 + 48) = 0xFFFFFFFFLL;
        *(_QWORD*)(v41 + 56) = 0x10000;
        *(_QWORD*)(v41 + 64) = 0;
        *v37 = v41;
        v44 = **((_QWORD**)this_ + 1);
        if (v44 != 0) {
          *((_QWORD*)this_ + 1) = v44;
          v43 = (__int64*)*v37;
        }
        nn_fs_dc120(*((__int64**)this_ + 2), v43);
        ++*((_QWORD*)this_ + 4);
      }
      *((_DWORD*)v38 + 12) = v36;
      v7 = v33;
      v8 = v81;
      j = v83;
      v28 = v32;
      v23 = v78;
    }
    if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 2) {
      return 0;
    }
    v45 = v7;
    nandroid_ABitReader_getBits_plt(*v2, 2);
    v46 = v23 - 1;
    v47 = j ^ 1;
    if (v23 - 1 > 1) {
      v47 = 1;
    }
    if ((v47 & 1) == 0) {
      if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 2) {
        return 0;
      }
      nandroid_ABitReader_getBits_plt(*v2, 2);
    }
    if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 0xF) {
      return 0;
    }
    nandroid_ABitReader_getBits_plt(*v2, 5);
    nandroid_ABitReader_getBits_plt(*v2, 10);
    if (j == 0) {
      v7 = v45;
      if (v82) {
        goto LABEL_103;
      }
      goto LABEL_95;
    }
    if (v23 != 0) {
      result = nandroid_ABitReader_numBitsLeft_plt(*v2);
      if (result == 0) {
        return result;
      }
      if ((unsigned int)nandroid_ABitReader_getBits_plt(*v2, 1) != 1) {
        goto LABEL_79;
      }
      if (v46 <= 1) {
        if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 5) {
          return 0;
        }
        v48 = nandroid_ABitReader_getBits_plt(*v2, 5);
        *(_DWORD*)ac4_dsi_parser_55e160((__int64**)this_ + 1, &v84) = v48;
        if ((unsigned int)(v48 - 11) <= 3) {
          if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 3) {
            return 0;
          }
          nandroid_ABitReader_getBits_plt(*v2, 1);
          nandroid_ABitReader_getBits_plt(*v2, 2);
        }
      }
    }
    if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 0x18) {
      return 0;
    }
    nandroid_ABitReader_getBits_plt(*v2, 24);
  LABEL_79:
    v49 = v46 > 1;
    v7 = v45;
    if (!v49) {
      result = nandroid_ABitReader_numBitsLeft_plt(*v2);
      if (result == 0) {
        return result;
      }
      if ((unsigned int)nandroid_ABitReader_getBits_plt(*v2, 1) == 1) {
        result = nandroid_ABitReader_numBitsLeft_plt(*v2);
        if (result == 0) {
          return result;
        }
        if ((unsigned int)nandroid_ABitReader_getBits_plt(*v2, 1) == 1) {
          if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 2) {
            return 0;
          }
          nandroid_ABitReader_skipBits_plt(*v2, 2);
        }
      }
      result = nandroid_ABitReader_numBitsLeft_plt(*v2);
      if (result == 0) {
        return result;
      }
      if ((unsigned int)nandroid_ABitReader_getBits_plt(*v2, 1) == 1) {
        if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 9) {
          return 0;
        }
        if ((unsigned int)nandroid_ABitReader_getBits_plt(*v2, 1) != 1) {
          *((_BYTE*)ac4_dsi_parser_55e160((__int64**)this_ + 1, &v84) + 18) = 0;
        }
        v50 = nandroid_ABitReader_getBits_plt(*v2, 8);
        if (nandroid_ABitReader_numBitsLeft_plt(*v2) <
            (unsigned __int64)(unsigned int)(8 * v50)) {
          return 0;
        }
        for (; v50 != 0; --v50) {
          nandroid_ABitReader_skipBits_plt(*v2, 8);
        }
      }
    }
    v8 = v81;
    if (v82) {
    LABEL_103:
      if (v23 != 0) {
        if ((nandroid_AC4DSIParser_parseSubstreamGroupDSI_plt(this_, v84) &
             1) == 0) {
          return 0;
        }
      }
      else if ((nandroid_AC4DSIParser_parseSubstreamDSI_plt(this_, v84) & 1) ==
               0) {
        return 0;
      }
      goto LABEL_129;
    }
  LABEL_95:
    result = nandroid_ABitReader_numBitsLeft_plt(*v2);
    if (result == 0) {
      return result;
    }
    nandroid_ABitReader_getBits_plt(*v2, 1);
    if (v79 < 3) {
      if (v23 != 0) {
        if ((nandroid_AC4DSIParser_parseSubstreamGroupDSI_plt(this_, v84) &
             1) == 0) {
          return 0;
        }
      LABEL_108:
        if ((nandroid_AC4DSIParser_parseSubstreamGroupDSI_plt(this_, v84) &
             1) == 0) {
          return 0;
        }
        goto LABEL_129;
      }
      if ((nandroid_AC4DSIParser_parseSubstreamDSI_plt(this_, v84) & 1) == 0) {
        return 0;
      }
      goto LABEL_128;
    }
    if (v79 - 3 < 2) {
      if (v23 != 0) {
        if ((nandroid_AC4DSIParser_parseSubstreamGroupDSI_plt(this_, v84) &
             1) == 0 ||
            (nandroid_AC4DSIParser_parseSubstreamGroupDSI_plt(this_, v84) &
             1) == 0) {
          return 0;
        }
        goto LABEL_108;
      }
      if ((nandroid_AC4DSIParser_parseSubstreamDSI_plt(this_, v84) & 1) == 0 ||
          (nandroid_AC4DSIParser_parseSubstreamDSI_plt(this_, v84) & 1) == 0) {
        return 0;
      }
      goto LABEL_128;
    }
    if (v79 == 5) {
      break;
    }
    if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 7) {
      return 0;
    }
    v53 = nandroid_ABitReader_getBits_plt(*v2, 7);
    if (nandroid_ABitReader_numBitsLeft_plt(*v2) <
        (unsigned __int64)(unsigned int)(8 * v53)) {
      return 0;
    }
    for (; v53 != 0; --v53) {
      nandroid_ABitReader_getBits_plt(*v2, 8);
    }
  LABEL_129:
    if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 2) {
      return 0;
    }
    v54 = (unsigned int)nandroid_ABitReader_getBits_plt(*v2, 1) == 1;
    *((_BYTE*)ac4_dsi_parser_55e160((__int64**)this_ + 1, &v84) + 17) = v54;
    j = v83;
    if ((unsigned int)nandroid_ABitReader_getBits_plt(*v2, 1) == 1) {
    LABEL_131:
      if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 7) {
        return 0;
      }
      v55 = nandroid_ABitReader_getBits_plt(*v2, 7);
      if (v55 != 0) {
        v56 = v55;
        while ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) >=
               0xF) {
          nandroid_ABitReader_getBits_plt(*v2, 5);
          nandroid_ABitReader_getBits_plt(*v2, 10);
          if (--v56 == 0) {
            goto LABEL_136;
          }
        }
        return 0;
      }
    LABEL_136:
      j = v83;
    }
    if (v23 != 0) {
      result = nandroid_ABitReader_numBitsLeft_plt(*v2);
      if (result == 0) {
        return result;
      }
      if ((unsigned int)nandroid_ABitReader_getBits_plt(*v2, 1) == 1 &&
          (nandroid_AC4DSIParser_parseBitrateDsi_plt(this_) & 1) == 0) {
        return 0;
      }
      result = nandroid_ABitReader_numBitsLeft_plt(*v2);
      if (result == 0) {
        return result;
      }
      if ((unsigned int)nandroid_ABitReader_getBits_plt(*v2, 1) == 1) {
        v57 = *v2;
        v58 = nandroid_ABitReader_numBitsLeft_plt(*v2);
        nandroid_ABitReader_skipBits_plt(v57, v58 & 7);
        if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 0x10) {
          return 0;
        }
        v59 = nandroid_ABitReader_getBits_plt(*v2, 16);
        if (nandroid_ABitReader_numBitsLeft_plt(*v2) <
            (unsigned __int64)(8 * v59)) {
          return 0;
        }
        v60 = ac4_dsi_parser_55e160((__int64**)this_ + 1, &v84);
        if ((v60[6] & 1) != 0) {
          *(_BYTE*)v60[8] = 0;
          v60[7] = 0;
        }
        else {
          *((_WORD*)v60 + 24) = 0;
        }
        nandroid_55f480((unsigned __int8*)v60 + 48, v59);
        if (v59 != 0) {
          for (i = 0; i != v59; v63[i++] = v62) {
            v62 = nandroid_ABitReader_getBits_plt(*v2, 8);
            if ((v60[6] & 1) != 0) {
              v63 = (char*)v60[8];
            }
            else {
              v63 = (char*)v60 + 49;
            }
          }
        }
        if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 5) {
          return 0;
        }
        v64 = nandroid_ABitReader_getBits_plt(*v2, 5);
        if (nandroid_ABitReader_numBitsLeft_plt(*v2) <
            (unsigned __int64)(unsigned int)(11 * v64)) {
          return 0;
        }
        v8 = v81;
        for (j = v83; v64 != 0; --v64) {
          nandroid_ABitReader_skipBits_plt(*v2, 3);
          nandroid_ABitReader_skipBits_plt(*v2, 8);
        }
      }
    }
    v65 = *v2;
    v66 = nandroid_ABitReader_numBitsLeft_plt(*v2);
    nandroid_ABitReader_skipBits_plt(v65, v66 & 7);
    if (j != 0) {
      v67 = *((_QWORD*)this_ + 5);
      v68 = v28 + v80 -
            ((unsigned __int64)(v67 - nandroid_ABitReader_numBitsLeft_plt(
                                          *((_QWORD*)this_ + 6))) >>
             3);
      if (nandroid_ABitReader_numBitsLeft_plt(*((_QWORD*)this_ + 6)) <
          8 * v68) {
        return 0;
      }
      nandroid_ABitReader_skipBits_plt(*v2, 8 * v68);
    }
    v69 = *v12;
    v70 = (__int64*)((char*)this_ + 16);
    v71 = (__int64*)((char*)this_ + 16);
    if (*v12 != nullptr) {
      while (1) {
        while (1) {
          v71 = (__int64*)v69;
          v72 = *((_DWORD*)v69 + 8);
          if (v84 >= v72) {
            break;
          }
          v69 = (char*)*v71;
          v70 = v71;
          if (*v71 == 0) {
            goto LABEL_168;
          }
        }
        if (v72 >= v84) {
          break;
        }
        v69 = (char*)v71[1];
        if (v69 == nullptr) {
          v70 = v71 + 1;
          goto LABEL_168;
        }
      }
    }
    else {
    LABEL_168:
      v73 = (char*)v71;
      v74 = nn_movie_detail_AllocateMemory(112, *((_QWORD***)this_ + 3));
      v75 = v84;
      *(_QWORD*)(v74 + 72) = 0;
      *(_QWORD*)(v74 + 80) = 0;
      *(_QWORD*)(v74 + 88) = 0;
      *(_QWORD*)(v74 + 96) = 0;
      v71 = (__int64*)v74;
      v76 = (__int64*)v74;
      *(_QWORD*)(v74 + 104) = 0;
      *(_QWORD*)v74 = 0;
      *(_QWORD*)(v74 + 8) = 0;
      *(_QWORD*)(v74 + 16) = v73;
      *(_DWORD*)(v74 + 32) = v75;
      *(_QWORD*)(v74 + 40) = -1;
      *(_QWORD*)(v74 + 48) = 0xFFFFFFFFLL;
      *(_QWORD*)(v74 + 56) = 0x10000;
      *(_QWORD*)(v74 + 64) = 0;
      *v70 = v74;
      v77 = **((_QWORD**)this_ + 1);
      if (v77 != 0) {
        *((_QWORD*)this_ + 1) = v77;
        v76 = (__int64*)*v70;
      }
      nn_fs_dc120(*((__int64**)this_ + 2), v76);
      ++*((_QWORD*)this_ + 4);
    }
    if (*((_DWORD*)v71 + 10) == -1) {
      return 0;
    }
  LABEL_172:
    v13 = v84 + 1;
    v84 = v13;
    if (v13 >= v7) {
      return 1;
    }
  }
  if (v23 == 0) {
  LABEL_128:
    if ((nandroid_AC4DSIParser_parseSubstreamDSI_plt(this_, v84) & 1) == 0) {
      return 0;
    }
    goto LABEL_129;
  }
  if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(*v2) < 3) {
    return 0;
  }
  v51 = nandroid_ABitReader_getBits_plt(*v2, 3);
  v52 = v51 + 2;
  if (v51 == -2) {
    goto LABEL_129;
  }
  while ((nandroid_AC4DSIParser_parseSubstreamGroupDSI_plt(this_, v84) & 1) !=
         0) {
    if (--v52 == 0) {
      goto LABEL_129;
    }
  }
  return 0;
}

#pragma GCC visibility pop
