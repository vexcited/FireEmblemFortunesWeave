#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_149380(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_149420(_QWORD, _QWORD);
__int64 SdkRoutine_1494c0(_QWORD);
__int64 SdkRoutine_1495c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_149870(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_149b80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_14a000(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, double);
__int64 __errno_location_plt(_QWORD, _QWORD);
extern _UNKNOWN SdkData_bdd560;
extern _UNKNOWN SdkData_bdd600;
extern _UNKNOWN SdkData_bdd680;
__int64 nlib_printf_140890(char* a1, __int64 a2, unsigned __int8* a3,
                           unsigned int** a4);

__int64 nlib_printf_140890(char* a1, __int64 a2, unsigned __int8* a3,
                           unsigned int** a4)
{
  unsigned __int64 v5;
  int v6;
  int v7;
  char* v8;
  unsigned __int8* v9;
  unsigned int** v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  unsigned int* v15;
  unsigned int* v16;
  unsigned int* v17;
  unsigned int* v18;
  unsigned __int64 v19;
  unsigned int v20;
  unsigned int* v21;
  unsigned int* v22;
  unsigned int* v23;
  unsigned __int64 v24;
  unsigned int v25;
  int v26;
  unsigned __int8* v27;
  unsigned __int8 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  double* v32;
  int v33;
  int v34;
  unsigned int v35;
  __int64 v36;
  unsigned int* v37;
  __int64 v38;
  __int64 v39;
  double* v40;
  unsigned int v41;
  char* v42;
  char* v43;
  char* v44;
  __int64 v45;
  unsigned __int64 v46;
  double* v47;
  double* v48;
  double* v49;
  double* v50;
  char* v51;
  double* v52;
  unsigned __int8* v53;
  int v54;
  unsigned int* v55;
  __int64 v56;
  int v57;
  char v59;
  unsigned __int16* v60;
  int v61;
  char v63;
  char v65;
  char* v66;
  char* v67;
  char v68;
  __int64 v69;
  char* v70;
  char v72;
  unsigned __int64 v73;
  char* v74;
  char v75;
  char v76;
  char* v77;
  unsigned __int64 v78;
  char* v79;
  __int64 v80;
  unsigned __int64 v81;
  char* v82;
  __int64 v83;
  char* v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  char v88;
  unsigned __int64 v89;
  __int64 i;
  char* v91;
  char* v92;
  char* v93;
  char* v94;
  char* v95;
  char* v96;
  char* v97;
  char* v98;
  __int64 v99;
  unsigned int v100;
  unsigned int* v101;
  unsigned int* v102;
  unsigned int* v103;
  unsigned int* v104;
  char* v105;
  unsigned __int8* v106;

  v106 = a3;
  if (a2 < 0 || a3 == nullptr || a1 != nullptr && a2 == 0 ||
      a1 == nullptr && a2 != 0) {
    *(_DWORD*)__errno_location_plt(a1, a2) = 22;
    return 4294967274LL;
  }
  v5 = (unsigned __int64)&a1[a2];
  v105 = a1;
  v103 = nullptr;
  v104 = nullptr;
  v101 = nullptr;
  v102 = nullptr;
  v6 = *a3;
  if (*a3 == 0) {
    goto LABEL_9;
  }
  while (2) {
    while (v6 != 37) {
      v8 = v105;
      if ((unsigned __int64)v105 < v5) {
        *v105 = v6;
      }
      ++a3;
      v105 = v8 + 1;
      v106 = a3;
      v6 = *a3;
      if (*a3 == 0) {
        goto LABEL_9;
      }
    }
    v9 = a3 + 1;
    v10 = a4;
    v98 = a1;
    v99 = a2;
    v11 = 0;
    v12 = a3[1];
    if (v12 <= 0x2A) {
      do {
        if (v12 == 32) {
          v13 = 4;
        }
        else {
          if (v12 != 35) {
            goto LABEL_29;
          }
          v13 = 8;
        }
      LABEL_27:
        v11 |= v13;
        v14 = *++v9;
        v12 = v14;
      } while (v14 <= 0x2A);
    }
    switch (v12) {
    case '0':
      v13 = 16;
      goto LABEL_27;
    case '-':
      v13 = 1;
      goto LABEL_27;
    case '+':
      v13 = 2;
      goto LABEL_27;
    default:
      break;
    }
  LABEL_29:
    v106 = v9;
    v15 = *a4;
    v16 = a4[1];
    v100 = v11;
    v101 = v15;
    v102 = v16;
    v17 = a4[3];
    v103 = a4[2];
    v104 = v17;
    if (((unsigned int)v17 & 0x80000000) != 0 &&
        (LODWORD(v104) = (_DWORD)v17 + 8, (unsigned int)v17 <= 0xFFFFFFF8)) {
      v18 = (unsigned int*)((char*)v102 + (int)v17);
    }
    else {
      v18 = v101;
      v101 += 2;
    }
    v19 = SdkRoutine_149380(&v106, &v100, *v18);
    if ((v19 & 1) != 0) {
      v20 = *((_DWORD*)v10 + 6);
      if ((v20 & 0x80000000) == 0 ||
          (*((_DWORD*)v10 + 6) = v20 + 8, v20 >= 0xFFFFFFF9)) {
        *v10 += 2;
      }
    }
    v21 = v10[1];
    v101 = *v10;
    v102 = v21;
    v22 = v10[3];
    v103 = v10[2];
    v104 = v22;
    if (((unsigned int)v22 & 0x80000000) != 0 &&
        (LODWORD(v104) = (_DWORD)v22 + 8, (unsigned int)v22 <= 0xFFFFFFF8)) {
      v23 = (unsigned int*)((char*)v102 + (int)v22);
    }
    else {
      v23 = v101;
      v101 += 2;
    }
    v24 = SdkRoutine_149420(&v106, *v23);
    if ((v24 & 1) != 0) {
      v25 = *((_DWORD*)v10 + 6);
      if ((v25 & 0x80000000) == 0 ||
          (*((_DWORD*)v10 + 6) = v25 + 8, v25 >= 0xFFFFFFF9)) {
        *v10 += 2;
      }
    }
    v26 = SdkRoutine_1494c0(&v106);
    v27 = v106;
    v28 = *v106;
    v29 = HIDWORD(v19);
    v30 = HIDWORD(v24);
    switch (*v106) {
    case 0u:
      v44 = v105;
      if ((unsigned __int64)v105 < v5) {
        *v105 = 37;
      }
      v105 = v44 + 1;
      v106 = v27 - 1;
      goto LABEL_372;
    case 0x25u:
      v43 = v105;
      if ((unsigned __int64)v105 < v5) {
        *v105 = 37;
      }
      v105 = v43 + 1;
      goto LABEL_372;
    case 0x45u:
    case 0x46u:
    case 0x47u:
    case 0x65u:
    case 0x66u:
    case 0x67u:
      v31 = *((int*)v10 + 7);
      if ((v31 & 0x80000000) != 0 &&
          (*((_DWORD*)v10 + 7) = v31 + 16, (unsigned int)v31 <= 0xFFFFFFF0)) {
        v32 = (double*)((char*)v10[2] + v31);
      }
      else {
        v32 = (double*)*v10;
        *v10 += 2;
      }
      v105 = (char*)SdkRoutine_14a000(v105, v5, v100, HIDWORD(v24), v29, *v32);
      goto LABEL_372;
    case 0x58u:
      v34 = 0;
      v35 = v100 & 0xFFFFFFD9 | 0x20;
      goto LABEL_74;
    case 0x63u:
      v36 = *((int*)v10 + 6);
      if ((v36 & 0x80000000) != 0 &&
          (*((_DWORD*)v10 + 6) = v36 + 8, (unsigned int)v36 <= 0xFFFFFFF8)) {
        v37 = (unsigned int*)((char*)v10[1] + v36);
      }
      else {
        v37 = *v10;
        *v10 += 2;
      }
      SdkRoutine_1495c0(&v105, v5, v100, HIDWORD(v19), *v37);
      goto LABEL_372;
    case 0x64u:
    case 0x69u:
      v33 = 0;
      v34 = 1;
      v35 = v100 | 0x40;
      goto LABEL_77;
    case 0x6Fu:
      v41 = v100;
      v33 = 0;
      v34 = 0;
      goto LABEL_76;
    case 0x70u:
      LODWORD(v29) = 16;
      v34 = 0;
      v35 = v100 & 0xFFFFFFC9 | 0x30;
      goto LABEL_74;
    case 0x73u:
      v38 = v100;
      v39 = *((int*)v10 + 6);
      if (v26 == 108) {
        if ((v39 & 0x80000000) != 0 &&
            (*((_DWORD*)v10 + 6) = v39 + 8, (unsigned int)v39 <= 0xFFFFFFF8)) {
          v40 = (double*)((char*)v10[1] + v39);
        }
        else {
          v40 = (double*)*v10;
          *v10 += 2;
        }
        SdkRoutine_149b80(&v105, v5, v38, HIDWORD(v19), HIDWORD(v24),
                          *(_QWORD*)v40);
      }
      else {
        if ((v39 & 0x80000000) != 0 &&
            (*((_DWORD*)v10 + 6) = v39 + 8, (unsigned int)v39 <= 0xFFFFFFF8)) {
          v50 = (double*)((char*)v10[1] + v39);
        }
        else {
          v50 = (double*)*v10;
          *v10 += 2;
        }
        SdkRoutine_149870(&v105, v5, v38, HIDWORD(v19), HIDWORD(v24),
                          *(_QWORD*)v50);
      }
      goto LABEL_372;
    case 0x75u:
      v41 = v100;
      v33 = 0;
      v34 = 1;
    LABEL_76:
      v35 = v41 & 0xFFFFFFF9;
      goto LABEL_77;
    case 0x78u:
      v34 = 0;
      v35 = v100 & 0xFFFFFFF9;
    LABEL_74:
      v33 = 1;
    LABEL_77:
      v45 = *((int*)v10 + 6);
      v100 = v35;
      if ((v35 & 0x40) == 0) {
        if (v26 <= 105) {
          if (v26 == 72) {
            if ((v45 & 0x80000000) != 0 && (*((_DWORD*)v10 + 6) = v45 + 8,
                                            (unsigned int)v45 <= 0xFFFFFFF8)) {
              v46 = *((unsigned __int8*)v10[1] + v45);
            }
            else {
              v53 = (unsigned __int8*)*v10;
              *v10 += 2;
              v46 = *v53;
            }
            goto LABEL_158;
          }
          if (v26 != 76) {
            if (v26 != 104) {
              goto LABEL_102;
            }
            if ((v45 & 0x80000000) != 0 && (*((_DWORD*)v10 + 6) = v45 + 8,
                                            (unsigned int)v45 <= 0xFFFFFFF8)) {
              v46 = *(unsigned __int16*)((char*)v10[1] + v45);
            }
            else {
              v60 = (unsigned __int16*)*v10;
              *v10 += 2;
              v46 = *v60;
            }
          LABEL_158:
            v57 = 0;
            if ((v35 & 4) != 0) {
              v56 = 1;
              if ((v35 & 8) == 0 || v46 == 0) {
                v65 = 1;
              }
              else {
                v65 = v34;
              }
              if ((v65 & 1) != 0) {
                goto LABEL_166;
              }
            }
            else {
              v56 = (v35 & 2) != 0;
              if ((v35 & 8) == 0 || v46 == 0) {
                v63 = 1;
              }
              else {
                v63 = v34;
              }
              if ((v63 & 1) != 0) {
                goto LABEL_166;
              }
            }
            goto LABEL_176;
          }
        }
        else if (v26 > 115) {
          if (v26 != 116 && v26 != 122) {
          LABEL_102:
            if ((v45 & 0x80000000) != 0 && (*((_DWORD*)v10 + 6) = v45 + 8,
                                            (unsigned int)v45 <= 0xFFFFFFF8)) {
              v46 = *(unsigned int*)((char*)v10[1] + v45);
            }
            else {
              v55 = *v10;
              *v10 += 2;
              v46 = *v55;
            }
            goto LABEL_158;
          }
        }
        else if (v26 != 106 && v26 != 108) {
          goto LABEL_102;
        }
      LABEL_107:
        if ((v45 & 0x80000000) != 0 &&
            (*((_DWORD*)v10 + 6) = v45 + 8, (unsigned int)v45 <= 0xFFFFFFF8)) {
          v48 = (double*)((char*)v10[1] + v45);
        }
        else {
          v48 = (double*)*v10;
          *v10 += 2;
        }
        v46 = *(_QWORD*)v48;
        goto LABEL_158;
      }
      if (v26 > 105) {
        if (v26 <= 115) {
          if (v26 != 106 && v26 != 108) {
            goto LABEL_129;
          }
        LABEL_112:
          if ((v45 & 0x80000000) != 0 && (*((_DWORD*)v10 + 6) = v45 + 8,
                                          (unsigned int)v45 <= 0xFFFFFFF8)) {
            v49 = (double*)((char*)v10[1] + v45);
          }
          else {
            v49 = (double*)*v10;
            *v10 += 2;
          }
          v46 = *(_QWORD*)v49;
          if ((v46 & 0x8000000000000000LL) == 0) {
            goto LABEL_158;
          }
          v46 = -(__int64)v46;
        LABEL_146:
          v56 = 1;
          v57 = 1;
          if ((v35 & 8) == 0 || v46 == 0) {
            v59 = 1;
          }
          else {
            v59 = v34;
          }
          if ((v59 & 1) != 0) {
            goto LABEL_166;
          }
          goto LABEL_176;
        }
        if (v26 == 116) {
          goto LABEL_112;
        }
        if (v26 == 122) {
          goto LABEL_107;
        }
      LABEL_129:
        if ((v45 & 0x80000000) != 0 &&
            (*((_DWORD*)v10 + 6) = v45 + 8, (unsigned int)v45 <= 0xFFFFFFF8)) {
          v52 = (double*)((char*)v10[1] + v45);
        }
        else {
          v52 = (double*)*v10;
          *v10 += 2;
        }
        v54 = *(_DWORD*)v52;
      LABEL_142:
        if (v54 >= 0) {
          v46 = (unsigned int)v54;
        }
        else {
          v46 = (unsigned int)-v54;
        }
        if ((v54 & 0x80000000) == 0) {
          goto LABEL_158;
        }
        goto LABEL_146;
      }
      if (v26 == 72) {
        if ((v45 & 0x80000000) != 0 &&
            (*((_DWORD*)v10 + 6) = v45 + 8, (unsigned int)v45 <= 0xFFFFFFF8)) {
          v51 = (char*)v10[1] + v45;
        }
        else {
          v51 = (char*)*v10;
          *v10 += 2;
        }
        v54 = *v51;
        goto LABEL_142;
      }
      if (v26 == 76) {
        goto LABEL_112;
      }
      if (v26 != 104) {
        goto LABEL_129;
      }
      if ((v45 & 0x80000000) != 0 &&
          (*((_DWORD*)v10 + 6) = v45 + 8, (unsigned int)v45 <= 0xFFFFFFF8)) {
        v47 = (double*)((char*)v10[1] + v45);
      }
      else {
        v47 = (double*)*v10;
        *v10 += 2;
      }
      v61 = *(_DWORD*)v47;
      if ((v61 & 0x8000) == 0) {
        v46 = v61 & 0x7FFF;
        goto LABEL_158;
      }
      v46 = -(__int64)(__int16)v61;
      v57 = 1;
      v56 = 1;
      if ((v35 & 8) == 0 || v46 == 0) {
        v72 = 1;
      }
      else {
        v72 = v34;
      }
      if ((v72 & 1) != 0) {
      LABEL_166:
        if ((v34 & 1) != 0) {
          goto LABEL_188;
        }
        if ((v33 & 1) != 0) {
          goto LABEL_185;
        }
        goto LABEL_224;
      }
    LABEL_176:
      v66 = v105;
      if ((unsigned __int64)v105 < v5) {
        *v105 = 48;
      }
      v67 = v66 + 1;
      v105 = v66 + 1;
      LODWORD(v30) = HIDWORD(v24) - (SHIDWORD(v24) > 0);
      if (v33 != 0) {
        if ((unsigned __int64)v67 < v5) {
          if ((v35 & 0x20) != 0) {
            v68 = 88;
          }
          else {
            v68 = 120;
          }
          *v67 = v68;
        }
        v56 |= 2uLL;
        v105 = v66 + 2;
        LODWORD(v30) = v30 - ((int)v30 > 0);
        if ((v34 & 1) == 0) {
        LABEL_185:
          if (v46 >= 0x10) {
            if (v46 >= 0x100) {
              if (v46 >= 0x1000) {
                if (v46 >= 0x10000) {
                  if (v46 >= 0x100000) {
                    if (v46 >> 24 != 0) {
                      if (v46 >> 28 != 0) {
                        if (HIDWORD(v46) != 0) {
                          if (v46 >> 36 != 0) {
                            if (v46 >> 40 != 0) {
                              if (v46 >> 44 != 0) {
                                if (HIWORD(v46) != 0) {
                                  if (v46 >> 52 != 0) {
                                    if (HIBYTE(v46) != 0) {
                                      v70 = (char*)&SdkData_bdd600;
                                      if (v46 >> 60 != 0) {
                                        v69 = 16;
                                      }
                                      else {
                                        v69 = 15;
                                      }
                                    }
                                    else {
                                      v69 = 14;
                                      v70 = (char*)&SdkData_bdd600;
                                    }
                                  }
                                  else {
                                    v69 = 13;
                                    v70 = (char*)&SdkData_bdd600;
                                  }
                                }
                                else {
                                  v69 = 12;
                                  v70 = (char*)&SdkData_bdd600;
                                }
                              }
                              else {
                                v69 = 11;
                                v70 = (char*)&SdkData_bdd600;
                              }
                            }
                            else {
                              v69 = 10;
                              v70 = (char*)&SdkData_bdd600;
                            }
                          }
                          else {
                            v69 = 9;
                            v70 = (char*)&SdkData_bdd600;
                          }
                        }
                        else {
                          v69 = 8;
                          v70 = (char*)&SdkData_bdd600;
                        }
                      }
                      else {
                        v69 = 7;
                        v70 = (char*)&SdkData_bdd600;
                      }
                    }
                    else {
                      v69 = 6;
                      v70 = (char*)&SdkData_bdd600;
                    }
                  }
                  else {
                    v69 = 5;
                    v70 = (char*)&SdkData_bdd600;
                  }
                }
                else {
                  v69 = 4;
                  v70 = (char*)&SdkData_bdd600;
                }
              }
              else {
                v69 = 3;
                v70 = (char*)&SdkData_bdd600;
              }
            }
            else {
              v69 = 2;
              v70 = (char*)&SdkData_bdd600;
            }
          }
          else {
            v69 = 1;
            v70 = (char*)&SdkData_bdd600;
          }
          goto LABEL_308;
        }
      LABEL_188:
        if (v46 >= 0xA) {
          if (v46 >= 0x64) {
            if (v46 >= 0x3E8) {
              if (v46 >> 4 >= 0x271) {
                if (v46 >> 5 >= 0xC35) {
                  if (v46 >= 0xF4240) {
                    if (v46 >= 0x989680) {
                      if (v46 >= 0x5F5E100) {
                        if (v46 >= 0x3B9ACA00) {
                          if (v46 >= 0x2540BE400LL) {
                            if (v46 >= 0x174876E800LL) {
                              if (v46 >= 0xE8D4A51000LL) {
                                if (v46 >= 0x9184E72A000LL) {
                                  if (v46 >= 0x5AF3107A4000LL) {
                                    if (v46 >= 0x38D7EA4C68000LL) {
                                      if (v46 >= 0x2386F26FC10000LL) {
                                        if (v46 >= 0x16345785D8A0000LL) {
                                          if (v46 >= 0xDE0B6B3A7640000LL) {
                                            v70 = (char*)&SdkData_bdd560;
                                            if (v46 < 0x8AC7230489E80000LL) {
                                              v69 = 19;
                                            }
                                            else {
                                              v69 = 20;
                                            }
                                          }
                                          else {
                                            v69 = 18;
                                            v70 = (char*)&SdkData_bdd560;
                                          }
                                        }
                                        else {
                                          v69 = 17;
                                          v70 = (char*)&SdkData_bdd560;
                                        }
                                      }
                                      else {
                                        v69 = 16;
                                        v70 = (char*)&SdkData_bdd560;
                                      }
                                    }
                                    else {
                                      v69 = 15;
                                      v70 = (char*)&SdkData_bdd560;
                                    }
                                  }
                                  else {
                                    v69 = 14;
                                    v70 = (char*)&SdkData_bdd560;
                                  }
                                }
                                else {
                                  v69 = 13;
                                  v70 = (char*)&SdkData_bdd560;
                                }
                              }
                              else {
                                v69 = 12;
                                v70 = (char*)&SdkData_bdd560;
                              }
                            }
                            else {
                              v69 = 11;
                              v70 = (char*)&SdkData_bdd560;
                            }
                          }
                          else {
                            v69 = 10;
                            v70 = (char*)&SdkData_bdd560;
                          }
                        }
                        else {
                          v69 = 9;
                          v70 = (char*)&SdkData_bdd560;
                        }
                      }
                      else {
                        v69 = 8;
                        v70 = (char*)&SdkData_bdd560;
                      }
                    }
                    else {
                      v69 = 7;
                      v70 = (char*)&SdkData_bdd560;
                    }
                  }
                  else {
                    v69 = 6;
                    v70 = (char*)&SdkData_bdd560;
                  }
                }
                else {
                  v69 = 5;
                  v70 = (char*)&SdkData_bdd560;
                }
              }
              else {
                v69 = 4;
                v70 = (char*)&SdkData_bdd560;
              }
            }
            else {
              v69 = 3;
              v70 = (char*)&SdkData_bdd560;
            }
          }
          else {
            v69 = 2;
            v70 = (char*)&SdkData_bdd560;
          }
        }
        else {
          v69 = 1;
          v70 = (char*)&SdkData_bdd560;
        }
        goto LABEL_308;
      }
      ++v56;
      if (v34 != 0) {
        goto LABEL_188;
      }
    LABEL_224:
      if (v46 >= 8) {
        if (v46 >= 0x40) {
          if (v46 >= 0x200) {
            if (v46 >= 0x1000) {
              if (v46 >= 0x8000) {
                if (v46 >= 0x40000) {
                  if (v46 >= 0x200000) {
                    if (v46 >> 24 != 0) {
                      if (v46 >> 27 != 0) {
                        if (v46 >> 30 != 0) {
                          if (v46 >> 33 != 0) {
                            if (v46 >> 36 != 0) {
                              if (v46 >> 39 != 0) {
                                if (v46 >> 42 != 0) {
                                  if (v46 >> 45 != 0) {
                                    if (HIWORD(v46) != 0) {
                                      if (v46 >> 51 != 0) {
                                        if (v46 >> 54 != 0) {
                                          if (v46 >> 57 != 0) {
                                            if (v46 >> 60 != 0) {
                                              if ((__int64)v46 > -1) {
                                                v69 = 21;
                                              }
                                              else {
                                                v69 = 22;
                                              }
                                            }
                                            else {
                                              v69 = 20;
                                            }
                                          }
                                          else {
                                            v69 = 19;
                                          }
                                        }
                                        else {
                                          v69 = 18;
                                        }
                                      }
                                      else {
                                        v69 = 17;
                                      }
                                    }
                                    else {
                                      v69 = 16;
                                    }
                                  }
                                  else {
                                    v69 = 15;
                                  }
                                }
                                else {
                                  v69 = 14;
                                }
                              }
                              else {
                                v69 = 13;
                              }
                            }
                            else {
                              v69 = 12;
                            }
                          }
                          else {
                            v69 = 11;
                          }
                        }
                        else {
                          v69 = 10;
                        }
                      }
                      else {
                        v69 = 9;
                      }
                    }
                    else {
                      v69 = 8;
                    }
                  }
                  else {
                    v69 = 7;
                  }
                }
                else {
                  v69 = 6;
                }
              }
              else {
                v69 = 5;
              }
            }
            else {
              v69 = 4;
            }
          }
          else {
            v69 = 3;
          }
        }
        else {
          v69 = 2;
        }
      }
      else {
        v69 = 1;
      }
      v70 = (char*)&SdkData_bdd680;
    LABEL_308:
      v73 = v69 + v56;
      if ((int)v29 >= 1 && (v35 & 1) == 0) {
        if ((((v30 & 0x80000000) != 0LL) & (v35 >> 4)) != 0) {
          v76 = 48;
        }
        else {
          v76 = 32;
        }
        v77 = v105;
        if (v73 < (unsigned int)v29 && (int)v30 < (int)v29) {
          v78 = (unsigned int)v29 - 1LL;
          do {
            if ((unsigned __int64)v77 < v5) {
              *v77 = v76;
            }
            ++v77;
            LODWORD(v29) = v29 - 1;
            if (v73 >= v78) {
              break;
            }
            --v78;
          } while ((int)v30 < (int)v29);
        }
        v105 = v77;
      }
      if ((int)v30 >= 1) {
        v79 = v105;
        if (v73 < (unsigned int)v30) {
          v80 = ((int)v30 - (int)v73) & 7LL;
          if (v80 != 0) {
            v81 = (unsigned int)v30 - v80;
            do {
              if ((unsigned __int64)v79 < v5) {
                *v79 = 48;
              }
              ++v79;
              --v80;
            } while (v80 != 0);
          }
          else {
            v81 = (unsigned int)v30;
          }
          if (v73 - (unsigned int)v30 <= 0xFFFFFFFFFFFFFFF8LL) {
            do {
              if ((unsigned __int64)v79 < v5) {
                *v79 = 48;
              }
              if ((unsigned __int64)(v79 + 1) < v5) {
                v79[1] = 48;
              }
              if ((unsigned __int64)(v79 + 2) < v5) {
                v79[2] = 48;
              }
              if ((unsigned __int64)(v79 + 3) < v5) {
                v79[3] = 48;
              }
              if ((unsigned __int64)(v79 + 4) < v5) {
                v79[4] = 48;
              }
              if ((unsigned __int64)(v79 + 5) < v5) {
                v79[5] = 48;
              }
              if ((unsigned __int64)(v79 + 6) < v5) {
                v79[6] = 48;
              }
              if ((unsigned __int64)(v79 + 7) < v5) {
                v79[7] = 48;
              }
              v79 += 8;
              v81 -= 8LL;
            } while (v73 < v81);
          }
          LODWORD(v29) = v29 + v73 - v30;
        }
        v105 = v79;
        if (v57 != 0) {
        LABEL_311:
          v74 = v105;
          if ((unsigned __int64)v105 < v5) {
            v75 = 45;
          LABEL_360:
            *v74 = v75;
          }
        LABEL_361:
          v82 = v74 + 1;
          goto LABEL_362;
        }
      }
      else if (v57 != 0) {
        goto LABEL_311;
      }
      if ((v35 & 2) != 0) {
        v74 = v105;
        if ((unsigned __int64)v105 < v5) {
          v75 = 43;
          goto LABEL_360;
        }
        goto LABEL_361;
      }
      v82 = v105;
      if ((v35 & 4) != 0) {
        if ((unsigned __int64)v105 < v5) {
          *v105 = 32;
        }
        ++v82;
      }
    LABEL_362:
      v83 = v69 + 1;
      v84 = &v70[8 * v69 - 8];
      do {
        v86 = *(_QWORD*)v84;
        v84 -= 8;
        v85 = v86;
        v87 = v46 / v86;
        if (v33 == 0 || (int)v87 <= 9) {
          v88 = v87 + 48;
          if ((unsigned __int64)v82 >= v5) {
            goto LABEL_366;
          }
        LABEL_365:
          *v82 = v88;
          goto LABEL_366;
        }
        v88 = (v35 & 0x20 ^ 0x61) + v87 - 10;
        if ((unsigned __int64)v82 < v5) {
          goto LABEL_365;
        }
      LABEL_366:
        v46 -= v87 * v85;
        ++v82;
        --v83;
      } while (v83 > 1);
      v105 = v82;
      if ((int)v29 >= 1 && (v35 & 1) != 0) {
        v89 = (unsigned int)v29;
        if (v73 < (unsigned int)v29) {
          for (i = ((_BYTE)v29 - (_BYTE)v73) & 7; i != 0; v105 = v82) {
            if ((unsigned __int64)v82 < v5) {
              *v82 = 32;
              v82 = v105;
            }
            ++v82;
            --v89;
            --i;
          }
          if (v73 - (unsigned int)v29 <= 0xFFFFFFFFFFFFFFF8LL) {
            do {
              if ((unsigned __int64)v82 < v5) {
                *v82 = 32;
                v82 = v105;
              }
              v91 = v82 + 1;
              v105 = v82 + 1;
              if ((unsigned __int64)(v82 + 1) < v5) {
                *v91 = 32;
                v91 = v105;
              }
              v92 = v91 + 1;
              v105 = v92;
              if ((unsigned __int64)v92 < v5) {
                *v92 = 32;
                v92 = v105;
              }
              v93 = v92 + 1;
              v105 = v93;
              if ((unsigned __int64)v93 < v5) {
                *v93 = 32;
                v93 = v105;
              }
              v94 = v93 + 1;
              v105 = v94;
              if ((unsigned __int64)v94 < v5) {
                *v94 = 32;
                v94 = v105;
              }
              v95 = v94 + 1;
              v105 = v95;
              if ((unsigned __int64)v95 < v5) {
                *v95 = 32;
                v95 = v105;
              }
              v96 = v95 + 1;
              v105 = v96;
              if ((unsigned __int64)v96 < v5) {
                *v96 = 32;
                v96 = v105;
              }
              v97 = v96 + 1;
              v105 = v97;
              if ((unsigned __int64)v97 < v5) {
                *v97 = 32;
                v97 = v105;
              }
              v82 = v97 + 1;
              v89 -= 8LL;
              v105 = v97 + 1;
            } while (v73 < v89);
          }
        }
      }
    LABEL_372:
      a1 = v98;
      a2 = v99;
      a4 = v10;
      a3 = v106 + 1;
      v106 = a3;
      v6 = *a3;
      if (*a3 != 0) {
        continue;
      }
    LABEL_9:
      v7 = (int)v105;
      if ((unsigned __int64)v105 >= v5) {
        if (a2 != 0) {
          *(_BYTE*)(v5 - 1) = 0;
        }
      }
      else {
        *v105 = 0;
      }
      return (unsigned int)(v7 - (_DWORD)a1);
    default:
      v42 = v105;
      if ((unsigned __int64)v105 < v5) {
        *v105 = 37;
      }
      if ((unsigned __int64)(v42 + 1) < v5) {
        v42[1] = v28;
      }
      v105 = v42 + 2;
      goto LABEL_372;
    }
  }
}

#pragma GCC visibility pop
