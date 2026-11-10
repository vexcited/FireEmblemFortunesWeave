#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_kpr_detail_GetUtf8CodeComposerCompositionCount_plt(void* this_);
__int64 nn_kpr_detail_GetUtf8CodeComposerMode_plt(void* this_);
__int64 nn_kpr_detail_GetUtf8CodeComposerOutputCount_plt(void* this_);
__int64 nn_util_ConvertStringUtf16NativeToUtf8_plt_858a90(_QWORD, _QWORD,
                                                          _QWORD, _QWORD);
__int64 nn_util_ConvertStringUtf8ToUtf16Native_plt_858a60(_QWORD, _QWORD,
                                                          _QWORD, _QWORD);
extern _DWORD SdkData_ca97b0[406];
extern _UNKNOWN SdkData_ca92c4;
extern char SdkData_bb5d88;
extern char SdkData_bb5d8c;
extern char SdkData_bb6e00;
extern char SdkData_bb6e04;
__int64 nn_kpr_detail_ProcessRomaji(void* a1);

__int64 nn_kpr_detail_ProcessRomaji(void* a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  int v5;
  bool v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  bool v11;
  __int64 v13;
  char* v14;
  __int64 v15;
  char* v16;
  __int64 i;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned int v23;
  char* v24;
  unsigned __int64 v25;
  unsigned __int8* v26;
  unsigned __int8* v27;
  unsigned int v28;
  __int64 v29;
  int v30;
  int v31;
  bool v32;
  int v33;
  unsigned int v34;
  int v35;
  char* v37;
  int v38;
  int v39;
  int v40;
  __int64 v41;
  char v42;
  unsigned int v43;
  int v44;
  int v45;
  __int64 v46;
  int v47;
  unsigned int v48;
  __int64 v49;
  int v50;
  int v51;
  int v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  __int64 v61;
  int v62;
  int v63;
  char v64;
  char v65;
  int v66;
  int v67;
  unsigned int v68;
  int v69;
  unsigned int v70;
  __int64 v71;
  unsigned int v72;
  int v73;
  int v74;
  int v75;
  __int64 v76;
  char v77;
  unsigned int v78;
  __int64 v79;
  int v80;
  int v81;
  __int64 v82;
  unsigned int v83;
  char v84;
  int v85;
  int v86;
  __int64 v87;
  char v88;
  unsigned int v89;
  __int64 v90;
  int v91;
  int v92;
  __int64 v93;
  unsigned int v94;
  char v95;
  __int64 v96;
  unsigned int v97;
  int j;
  int v99;
  int v100;
  __int64 v101;
  int v102;
  int v103;
  int v104;
  int v105;
  bool v106;
  bool v107;
  int v109;
  _WORD v110[2];
  int v111;
  struct {
    _QWORD v112[2];
    int v113;
  } v112_;
  struct {
    __int64 v114;
    int v115;
  } v114_;

  result = nn_kpr_detail_GetUtf8CodeComposerCompositionCount_plt(a1);
  v3 = (int)result - 1LL;
  v4 = *((_DWORD*)a1 + 7);
  if (v4 < (int)v3) {
    v5 = *((char*)a1 + v3);
    v6 = v5 <= -1;
    v7 = v5 & 0xF0;
    v8 = v5 & 0xE0;
    v9 = v5 & 0xF8;
    v10 = !v6 || v7 == 224;
    v11 = v10 || v8 == 192;
    if (!v11 && v9 != 240) {
      LODWORD(v3) = result - 2;
    }
  }
  if ((unsigned int)*((unsigned __int8*)a1 + (int)v3) - 123 <= 0xFFFFFFE5) {
    if (v4 >= (int)v3 || *((_BYTE*)a1 + (int)v3 - 1) != 110) {
    LABEL_77:
      v52 = *((_DWORD*)a1 + 6) + v4;
      goto LABEL_78;
    }
    v13 = nn_kpr_detail_GetUtf8CodeComposerMode_plt(a1);
    if ((_DWORD)v13 == 2) {
      v14 = &SdkData_bb5d88;
    LABEL_19:
      v40 = nn_kpr_detail_GetUtf8CodeComposerCompositionCount_plt(a1);
      v41 = *((int*)a1 + 7);
      v42 = *((_BYTE*)a1 + v41);
      if (v42 < 0) {
        if ((v42 & 0xE0) == 0xC0) {
          v43 = 2;
        }
        else if ((v42 & 0xF0) == 0xE0) {
          v43 = 3;
        }
        else if ((v42 & 0xF8) == 0xF0) {
          v43 = 4;
        }
        else {
          v43 = 0;
        }
      }
      else {
        v43 = 1;
      }
      v49 = v41 + v43;
      if (v40 > (int)v49) {
        memcpy_plt((char*)a1 + v41, (char*)a1 + v49, (unsigned int)(v40 - v49));
      }
      *((_DWORD*)a1 + 6) -= v43;
      v50 = nn_kpr_detail_GetUtf8CodeComposerCompositionCount_plt(a1);
      v51 = *((_DWORD*)a1 + 7);
      if (*((int*)a1 + 6) < 1) {
        v50 = *((_DWORD*)a1 + 7);
      }
      else if (v50 != v51) {
        memmove_plt((char*)a1 + v50 - (v50 - (__int64)v51) + 3, (char*)a1 + v51,
                    v50 - (__int64)v51);
        v50 = *((_DWORD*)a1 + 7);
      }
      result = memcpy_plt((char*)a1 + v50, v14, 3);
      v4 = *((_DWORD*)a1 + 7);
      *((_DWORD*)a1 + 6) += 3;
      goto LABEL_77;
    }
    if ((_DWORD)v13 == 3) {
      v14 = &SdkData_bb5d8c;
      goto LABEL_19;
    }
  LABEL_305:
    nn_detail_UnexpectedDefaultImpl_plt_857150(v13);
  }
  v114_.v115 = 0;
  result = nn_kpr_detail_GetUtf8CodeComposerOutputCount_plt(a1);
  v15 = *((unsigned int*)a1 + 6);
  if ((int)v15 <= 0) {
    return result;
  }
  v16 = (char*)a1 + (int)result;
  for (i = 0; i != v15; ++i) {
    v114_.v114 = 0;
    if (v16[i] != 0) {
      v18 = 0;
      v19 = (unsigned int)(v15 - i);
      v20 = (char*)&SdkData_ca92c4;
      do {
        v21 = *((__int16*)v20 + 1);
        if ((v21 & 0x8000000000000000LL) == 0) {
          goto LABEL_22;
        }
        v22 = (unsigned __int8)v20[1];
        v23 = (unsigned __int8)v16[i + v18];
        v24 = (char*)&SdkData_ca92c4 - 4 * v21;
        v20 = v24;
        if (v22 != 0) {
          v25 = v22;
          do {
            result = v25 >> 1;
            v26 = (unsigned __int8*)&v20[4 * (v25 >> 1)];
            v28 = *v26;
            v27 = v26 + 4;
            v25 += ~(v25 >> 1);
            if (v28 < v23) {
              v20 = (char*)v27;
            }
            else {
              v25 = result;
            }
          } while (v25 != 0);
        }
        if (v20 == &v24[4 * v22] || (unsigned __int8)*v20 != v23) {
          goto LABEL_22;
        }
        ++v18;
      } while (v18 != v19);
      v29 = *((__int16*)v20 + 1);
      if ((v29 & 0x8000000000000000LL) == 0) {
        v30 = (unsigned __int8)v20[1];
        v31 = SdkData_ca97b0[v29];
        LODWORD(v114_.v114) = v31;
        if (v30 == 2) {
          HIDWORD(v114_.v114) = SdkData_ca97b0[(unsigned __int16)(v29 + 1)];
          v32 = BYTE4(v114_.v114) != 0;
        }
        else {
          v32 = false;
        }
        v114_.v115 = v19;
        v13 = nn_kpr_detail_GetUtf8CodeComposerMode_plt(a1);
        v44 = *((_DWORD*)a1 + 6);
        v45 = v13;
        if (v44 <= (int)v19) {
        LABEL_221:
          v112_.v113 = 0;
          v112_.v112[0] = 0;
          v112_.v112[1] = 0;
          v111 = 0;
          if (v45 == 2) {
            v111 = v31;
          }
          else {
            if (v45 != 3) {
              goto LABEL_305;
            }
            v110[0] = 0;
            if ((v31 & 0x80) != 0) {
              if ((v31 & 0xE0) == 0xC0) {
                v93 = 2;
              }
              else if ((v31 & 0xF0) == 0xE0) {
                v93 = 3;
              }
              else if ((v31 & 0xF8) == 0xF0) {
                v93 = 4;
              }
              else {
                v93 = 0;
              }
            }
            else {
              v93 = 1;
            }
            nn_util_ConvertStringUtf8ToUtf16Native_plt_858a60(v110, 1,
                                                              &v114_.v114, v93);
            if ((unsigned int)v110[0] - 12353 <= 0x5E) {
              v110[0] += 96;
            }
            nn_util_ConvertStringUtf16NativeToUtf8_plt_858a90(&v111, 4, v110,
                                                              1);
            LOBYTE(v31) = v111;
          }
          if ((v31 & 0x80) != 0) {
            if ((v31 & 0xE0) == 0xC0) {
              v94 = 2;
            }
            else if ((v31 & 0xF0) == 0xE0) {
              v94 = 3;
            }
            else if ((v31 & 0xF8) == 0xF0) {
              v94 = 4;
            }
            else {
              v94 = 0;
            }
          }
          else {
            v94 = 1;
          }
          result = memcpy_plt(v112_.v112, &v111, v94);
          if (v32) {
            v111 = 0;
            if (v45 == 2) {
              v95 = BYTE4(v114_.v114);
              v111 = HIDWORD(v114_.v114);
            }
            else {
              v110[0] = 0;
              if ((v114_.v114 & 0x8000000000LL) != 0) {
                if ((BYTE4(v114_.v114) & 0xE0) == 0xC0) {
                  v96 = 2;
                }
                else if ((BYTE4(v114_.v114) & 0xF0) == 0xE0) {
                  v96 = 3;
                }
                else if ((BYTE4(v114_.v114) & 0xF8) == 0xF0) {
                  v96 = 4;
                }
                else {
                  v96 = 0;
                }
              }
              else {
                v96 = 1;
              }
              nn_util_ConvertStringUtf8ToUtf16Native_plt_858a60(
                  v110, 1, (char*)&v114_.v114 + 4, v96);
              if ((unsigned int)v110[0] - 12353 <= 0x5E) {
                v110[0] += 96;
              }
              nn_util_ConvertStringUtf16NativeToUtf8_plt_858a90(&v111, 4, v110,
                                                                1);
              v95 = v111;
            }
            if (v95 < 0) {
              if ((v95 & 0xE0) == 0xC0) {
                v97 = 2;
              }
              else if ((v95 & 0xF0) == 0xE0) {
                v97 = 3;
              }
              else if ((v95 & 0xF8) == 0xF0) {
                v97 = 4;
              }
              else {
                v97 = 0;
              }
            }
            else {
              v97 = 1;
            }
            result = memcpy_plt((unsigned __int64)v112_.v112 | v94, &v111, v97);
            v94 += v97;
          }
          if (v114_.v115 >= 1) {
            for (j = 0; j < v114_.v115; ++j) {
              result =
                  nn_kpr_detail_GetUtf8CodeComposerCompositionCount_plt(a1);
              v101 = (int)result - 1LL;
              if ((signed __int32)*((_DWORD*)a1 + 7) < (int)v101) {
                v102 = *((char*)a1 + v101);
                v6 = v102 <= -1;
                v103 = v102 & 0xF0;
                v104 = v102 & 0xE0;
                v105 = v102 & 0xF8;
                v106 = !v6 || v103 == 224;
                v107 = v106 || v104 == 192;
                if (!v107 && v105 != 240) {
                  LODWORD(v101) = result - 2;
                }
              }
              v99 = *((char*)a1 + (int)v101);
              if (v99 < 0) {
                if ((v99 & 0xE0) == 0xC0) {
                  v100 = -2;
                }
                else if ((v99 & 0xF0) == 0xE0) {
                  v100 = -3;
                }
                else if ((v99 & 0xF8) == 0xF0) {
                  v100 = -4;
                }
                else {
                  v100 = 0;
                }
              }
              else {
                v100 = -1;
              }
              *((_DWORD*)a1 + 6) += v100;
            }
          }
          if (v94 == 0) {
            return result;
          }
          v109 = nn_kpr_detail_GetUtf8CodeComposerCompositionCount_plt(a1);
          result = memcpy_plt((char*)a1 + v109, v112_.v112, v94);
          v52 = *((_DWORD*)a1 + 6) + v94 + *((_DWORD*)a1 + 7);
        LABEL_78:
          *((_DWORD*)a1 + 6) = 0;
          *((_DWORD*)a1 + 7) = v52;
          return result;
        }
        v46 = *((int*)a1 + 7);
        v47 = *((unsigned __int8*)a1 + v46);
        if (v44 - (_DWORD)v19 == 2) {
          if ((v47 & 0x80) != 0) {
            if ((v47 & 0xE0) == 0xC0) {
              v48 = 2;
            }
            else if ((v47 & 0xF0) == 0xE0) {
              v48 = 3;
            }
            else if ((v47 & 0xF8) == 0xF0) {
              v48 = 4;
            }
            else {
              v48 = 0;
            }
          }
          else {
            v48 = 1;
          }
          v71 = v46 + v48;
          v72 = v44 - v48;
          *((_DWORD*)a1 + 6) = v72;
          *((_DWORD*)a1 + 7) = v71;
          v73 = *((char*)a1 + v71);
          if (v73 < 0) {
            if ((v73 & 0xE0) == 0xC0) {
            LABEL_167:
              v74 = 2;
            LABEL_220:
              *((_DWORD*)a1 + 6) = v72 - v74;
              *((_DWORD*)a1 + 7) = v74 + v71;
              goto LABEL_221;
            }
          LABEL_231:
            if ((v73 & 0xF0) == 0xE0) {
              v74 = 3;
            }
            else if ((v73 & 0xF8) == 0xF0) {
              v74 = 4;
            }
            else {
              v74 = 0;
            }
            goto LABEL_220;
          }
        }
        else {
          if (v47 != *((unsigned __int8*)a1 + v46 + 1)) {
            goto LABEL_221;
          }
          if ((_DWORD)v13 == 2) {
            v53 = &SdkData_bb6e00;
          }
          else {
            if ((_DWORD)v13 != 3) {
              goto LABEL_305;
            }
            v53 = &SdkData_bb6e04;
          }
          v69 = *v53;
          if (v69 < 0) {
            if ((v69 & 0xE0) == 0xC0) {
              v70 = 2;
            }
            else if ((v69 & 0xF0) == 0xE0) {
              v70 = 3;
            }
            else if ((v69 & 0xF8) == 0xF0) {
              v70 = 4;
            }
            else {
              v70 = 0;
            }
          }
          else {
            v70 = 1;
          }
          v86 = nn_kpr_detail_GetUtf8CodeComposerCompositionCount_plt(a1);
          v87 = *((int*)a1 + 7);
          v88 = *((_BYTE*)a1 + v87);
          if (v88 < 0) {
            if ((v88 & 0xE0) == 0xC0) {
              v89 = 2;
            }
            else if ((v88 & 0xF0) == 0xE0) {
              v89 = 3;
            }
            else if ((v88 & 0xF8) == 0xF0) {
              v89 = 4;
            }
            else {
              v89 = 0;
            }
          }
          else {
            v89 = 1;
          }
          v90 = v87 + v89;
          if (v86 > (int)v90) {
            memcpy_plt((char*)a1 + v87, (char*)a1 + v90,
                       (unsigned int)(v86 - v90));
          }
          *((_DWORD*)a1 + 6) -= v89;
          v91 = nn_kpr_detail_GetUtf8CodeComposerCompositionCount_plt(a1);
          v92 = *((_DWORD*)a1 + 7);
          if (*((int*)a1 + 6) < 1) {
            v91 = *((_DWORD*)a1 + 7);
          }
          else if (v91 != v92) {
            memmove_plt((char*)a1 + v91 + v70 - (v91 - (__int64)v92),
                        (char*)a1 + v92, v91 - (__int64)v92);
            v91 = *((_DWORD*)a1 + 7);
          }
          v13 = memcpy_plt((char*)a1 + v91, v53, v70);
          v71 = *((int*)a1 + 7);
          v72 = *((_DWORD*)a1 + 6) + v70;
          *((_DWORD*)a1 + 6) = v72;
          LOBYTE(v73) = *((_BYTE*)a1 + v71);
          if ((v73 & 0x80) != 0) {
            if ((v73 & 0xE0) == 0xC0) {
              goto LABEL_167;
            }
            goto LABEL_231;
          }
        }
        v74 = 1;
        goto LABEL_220;
      }
    }
  LABEL_22:;
  }
  v33 = *((_DWORD*)a1 + 7);
  if ((_DWORD)v15 == 4) {
    v38 = *((char*)a1 + v33);
    if (v38 < 0) {
      if ((v38 & 0xE0) == 0xC0) {
        v39 = 2;
      }
      else if ((v38 & 0xF0) == 0xE0) {
        v39 = 3;
      }
      else if ((v38 & 0xF8) == 0xF0) {
        v39 = 4;
      }
      else {
        v39 = 0;
      }
    }
    else {
      v39 = 1;
    }
    v33 += v39;
    LODWORD(v15) = 4 - v39;
    *((_DWORD*)a1 + 6) = v15;
    *((_DWORD*)a1 + 7) = v33;
  LABEL_88:
    if ((_DWORD)v15 != 3) {
      goto LABEL_107;
    }
    v54 = v33 + 1LL;
    v55 = v33 + 2LL;
    v56 = *((unsigned __int8*)a1 + v33);
    if (v56 == 108 || v56 == 120) {
      v57 = *((unsigned __int8*)a1 + v54);
      if (v57 == 119) {
        if (*((_BYTE*)a1 + v55) == 104) {
          return result;
        }
        goto LABEL_104;
      }
      if (v57 == 116) {
        if (*((_BYTE*)a1 + v55) == 115) {
          return result;
        }
        goto LABEL_104;
      }
    }
    else {
      v57 = *((unsigned __int8*)a1 + v54);
    }
    if (v56 != v57) {
      goto LABEL_104;
    }
    if (v56 == 121) {
      goto LABEL_105;
    }
    if (v56 == 119) {
      v58 = *((unsigned __int8*)a1 + v55);
      goto LABEL_100;
    }
    v58 = *((unsigned __int8*)a1 + v55);
    if (v58 == 121) {
      return result;
    }
    v65 = v56 - 99;
    if ((unsigned int)(v56 - 99) <= 0x15) {
      if (((1 << v65) & 0x110003) == 0) {
        if (((1 << v65) & 0x200200) != 0) {
          goto LABEL_126;
        }
        if (v56 != 116) {
          goto LABEL_104;
        }
        if (v58 == 115) {
          return result;
        }
      }
    LABEL_100:
      if (v58 == 104) {
        return result;
      }
      if (v56 != 108) {
        goto LABEL_105;
      }
    LABEL_126:
      if (v58 == 116 || v58 == 119) {
        return result;
      }
      goto LABEL_105;
    }
  LABEL_104:
    if ((v56 & 0x80) != 0) {
      if ((v56 & 0xE0) == 0xC0) {
        v59 = 2;
      }
      else if ((v56 & 0xF0) == 0xE0) {
        v59 = 3;
      }
      else if ((v56 & 0xF8) == 0xF0) {
        v59 = 4;
      }
      else {
        v59 = 0;
      }
      goto LABEL_106;
    }
  LABEL_105:
    v59 = 1;
  LABEL_106:
    v60 = v59 + v33;
    LODWORD(v15) = 3 - v59;
    *((_DWORD*)a1 + 6) = v15;
    *((_DWORD*)a1 + 7) = v60;
  LABEL_107:
    if ((_DWORD)v15 == 2) {
      goto LABEL_108;
    }
    return result;
  }
  if ((_DWORD)v15 != 2) {
    goto LABEL_88;
  }
  if (*((_BYTE*)a1 + v33) == 110) {
    v34 = (unsigned __int8)(((unsigned __int8)(*((_BYTE*)a1 + v33 + 1) - 97) >>
                             1) |
                            ((*((_BYTE*)a1 + v33 + 1) - 97) << 7));
    v6 = v34 > 0xC;
    v35 = (1 << v34) & 0x1495;
    if (v6 || v35 == 0) {
      v13 = nn_kpr_detail_GetUtf8CodeComposerMode_plt(a1);
      if ((_DWORD)v13 == 2) {
        v37 = &SdkData_bb5d88;
      }
      else {
        if ((_DWORD)v13 != 3) {
          goto LABEL_305;
        }
        v37 = &SdkData_bb5d8c;
      }
      v67 = *v37;
      if (v67 < 0) {
        if ((v67 & 0xE0) == 0xC0) {
          v68 = 2;
        }
        else if ((v67 & 0xF0) == 0xE0) {
          v68 = 3;
        }
        else if ((v67 & 0xF8) == 0xF0) {
          v68 = 4;
        }
        else {
          v68 = 0;
        }
      }
      else {
        v68 = 1;
      }
      v75 = nn_kpr_detail_GetUtf8CodeComposerCompositionCount_plt(a1);
      v76 = *((int*)a1 + 7);
      v77 = *((_BYTE*)a1 + v76);
      if (v77 < 0) {
        if ((v77 & 0xE0) == 0xC0) {
          v78 = 2;
        }
        else if ((v77 & 0xF0) == 0xE0) {
          v78 = 3;
        }
        else if ((v77 & 0xF8) == 0xF0) {
          v78 = 4;
        }
        else {
          v78 = 0;
        }
      }
      else {
        v78 = 1;
      }
      v79 = v76 + v78;
      if (v75 > (int)v79) {
        memcpy_plt((char*)a1 + v76, (char*)a1 + v79, (unsigned int)(v75 - v79));
      }
      *((_DWORD*)a1 + 6) -= v78;
      v80 = nn_kpr_detail_GetUtf8CodeComposerCompositionCount_plt(a1);
      v81 = *((_DWORD*)a1 + 7);
      if (*((int*)a1 + 6) < 1) {
        v80 = *((_DWORD*)a1 + 7);
      }
      else if (v80 != v81) {
        memmove_plt((char*)a1 + v80 + v68 - (v80 - (__int64)v81),
                    (char*)a1 + v81, v80 - (__int64)v81);
        v80 = *((_DWORD*)a1 + 7);
      }
      result = memcpy_plt((char*)a1 + v80, v37, v68);
      v82 = *((int*)a1 + 7);
      v83 = *((_DWORD*)a1 + 6) + v68;
      *((_DWORD*)a1 + 6) = v83;
      v84 = *((_BYTE*)a1 + v82);
      if (v84 < 0) {
        if ((v84 & 0xE0) == 0xC0) {
          v85 = 2;
        }
        else if ((v84 & 0xF0) == 0xE0) {
          v85 = 3;
        }
        else if ((v84 & 0xF8) == 0xF0) {
          v85 = 4;
        }
        else {
          v85 = 0;
        }
      }
      else {
        v85 = 1;
      }
      *((_DWORD*)a1 + 6) = v83 - v85;
      *((_DWORD*)a1 + 7) = v85 + v82;
      return result;
    }
  }
LABEL_108:
  v61 = *((int*)a1 + 7);
  v62 = *((unsigned __int8*)a1 + v61);
  v63 = *((unsigned __int8*)a1 + v61 + 1);
  if (v62 == v63 || v62 != 119 && v63 == 121) {
    return result;
  }
  v64 = v62 - 99;
  if ((unsigned int)(v62 - 99) <= 0x15) {
    if (((1 << v64) & 0x110003) != 0) {
      if (v63 != 104) {
        if (v62 != 108) {
          goto LABEL_136;
        }
      LABEL_117:
        if (v63 != 116 && v63 != 119) {
        LABEL_136:
          v66 = 1;
          goto LABEL_137;
        }
      }
      return result;
    }
    if (((1 << v64) & 0x200200) != 0) {
      goto LABEL_117;
    }
    if (v62 == 116) {
      if (v63 != 104 && v63 != 115) {
        goto LABEL_136;
      }
      return result;
    }
  }
  if ((v62 & 0x80) == 0) {
    goto LABEL_136;
  }
  if ((v62 & 0xE0) == 0xC0) {
    v66 = 2;
  }
  else if ((v62 & 0xF0) == 0xE0) {
    v66 = 3;
  }
  else if ((v62 & 0xF8) == 0xF0) {
    v66 = 4;
  }
  else {
    v66 = 0;
  }
LABEL_137:
  *((_DWORD*)a1 + 6) = 2 - v66;
  *((_DWORD*)a1 + 7) = v66 + v61;
  return result;
}

#pragma GCC visibility pop
