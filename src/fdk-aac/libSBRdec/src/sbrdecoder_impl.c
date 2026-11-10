#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_DecodePs_plt(_QWORD, _QWORD);
__int64 nn_codec_FDKmemcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKmemmove_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKsprintf_plt(_QWORD, const char*, ...);
__int64 nn_codec_decodeSbrData_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_initHeaderData_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_resetFreqBandTables_plt(_QWORD, _QWORD);
__int64 nn_codec_resetSbrDec_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_sbr_dec_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                             _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD,
                             _DWORD, _DWORD);
extern char SdkData_bbbd5c;
__int64 nn_codec_sbrDecoder_Apply(unsigned int* a1, _WORD* a2, _DWORD* a3,
                                  _DWORD* a4, unsigned __int8* a5, int a6,
                                  int a7, bool* a8);
__int64 nn_codec_sbrDecoder_GetLibInfo(_DWORD* a1);

__int64 nn_codec_sbrDecoder_Apply(unsigned int* a1, _WORD* a2, _DWORD* a3,
                                  _DWORD* a4, unsigned __int8* a5, int a6,
                                  int a7, bool* a8)
{
  __int64 v8;
  _BOOL4 v9;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  _WORD* v18;
  unsigned int v20;
  int v21;
  unsigned int v22;
  int v23;
  unsigned int v25;
  __int64 v26;
  int v27;
  __int64* v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  unsigned int* v39;
  unsigned int* v40;
  unsigned int v41;
  char v42;
  unsigned int v43;
  __int64 v44;
  unsigned int v45;
  char v46;
  int v47;
  __int64* v48;
  __int64 v49;
  unsigned int v50;
  __int64 v51;
  __int64 v52;
  int v53;
  int v54;
  int v55;
  int v56;
  __int64 v57;
  int v58;
  int v59;
  int v60;
  unsigned int v61;
  unsigned int v62;
  _WORD* v63;
  unsigned int v64;
  unsigned __int8* v65;
  unsigned int v66;
  unsigned int v67;
  int v68;
  _WORD* v69;
  unsigned int v70;
  __int16 v71;
  _WORD* v72;
  __int16 v73;
  __int16 v74;
  __int16 v75;
  __int16 v76;
  __int16 v77;
  __int16 v78;
  int v79;
  int v80;
  __int64 v81;
  unsigned int v85;
  _WORD* v86;
  unsigned int* v87;
  unsigned __int8* v88;
  unsigned int v89;
  int v90;
  __int64 v91;
  __int64 v93;
  int v94;
  __int64 v95;
  __int64 v96;
  int v97;

  v8 = a1[855];
  if ((int)v8 < 1) {
    return 1;
  }
  v9 = *a8;
  v14 = 0;
  v95 = (unsigned int)*a3;
  do {
    if (*(_QWORD*)&a1[v14] == 0) {
      return 1;
    }
    v14 += 2;
  } while (2 * v8 != v14);
  if ((_DWORD)v8 != 1 || *(_DWORD*)(*(_QWORD*)a1 + 104LL) != 0) {
    v9 = false;
  }
  if (a6 == 0 && *((_BYTE*)a1 + 3438) == 1 && (int)v95 >= 2) {
    v15 = (unsigned int)*a3;
    v16 = *(int*)(**(_QWORD**)a1 + 1480LL) *
          (__int64)*(int*)(**(_QWORD**)a1 + 1476LL);
    v17 = -2 * v16;
    v18 = &a2[(v95 - 1) * v16];
    do {
      nn_codec_FDKmemmove_plt(
          v18, &a2[((_DWORD)v15 - 1) * *((unsigned __int16*)a1 + 1718)],
          2 * (unsigned int)*((unsigned __int16*)a1 + 1718));
      v18 = (_WORD*)((char*)v18 + v17);
    } while (v15-- > 2);
  }
  v20 = a1[861];
  v21 = v9;
  if (v9) {
    if ((v20 & 0x4000) == 0) {
      goto LABEL_15;
    }
  }
  else {
    v25 = v20 & 0xFFFFFFDF;
    a1[861] = v25;
    if ((v25 & 0x4000) == 0) {
    LABEL_15:
      *((_BYTE*)a1 + 3440) = 0;
      if ((int)a1[855] < 1) {
        goto LABEL_16;
      }
      goto LABEL_22;
    }
  }
  ++*((_BYTE*)a1 + 3440);
  if ((int)a1[855] >= 1) {
  LABEL_22:
    v86 = a2;
    v26 = 0;
    v23 = 0;
    v87 = a1 + 16;
    if ((int)v95 <= 2) {
      v27 = 2;
    }
    else {
      v27 = v95;
    }
    v85 = v27;
    while (1) {
      v28 = *(__int64**)&a1[2 * v26];
      if (v21 != 0 && v28[1] == 0) {
        v21 = 0;
      }
      v97 = *((_DWORD*)v28 + 26);
      if (v97 == 1) {
        v29 = 2;
      }
      else {
        v29 = 1;
      }
      v89 = v29;
      v90 = v23;
      if (a7 == 0) {
        *((_BYTE*)v28 + *((unsigned __int8*)v28 + 114) + 112) = 1;
        v28 = *(__int64**)&a1[2 * v26];
        v97 = *((_DWORD*)v28 + 26);
      }
      v30 = *((unsigned __int8*)v28 + 114);
      v31 = *v28;
      v32 = v28[1];
      v33 = *((unsigned __int8*)v28 + v30 + 115);
      v34 = *((_QWORD*)a1 + 426);
      v35 = *((unsigned __int16*)a1 + 1718);
      v36 = *((unsigned int*)v28 + 27);
      v91 = v32 + 608 * v30;
      v93 = *v28 + 608 * v30;
      if ((*((_BYTE*)a1 + 3445) & 0x40) != 0) {
        v37 = *((unsigned __int8*)a1 + 3439);
        if (*((unsigned __int8*)a1 + 3440) <= v37) {
          v30 = ((int)v30 + 1) % (v37 + 1);
          v33 = *((unsigned __int8*)v28 + v30 + 115);
          *((_BYTE*)v28 + 114) = v30;
          v93 = v31 + 608LL * (unsigned int)v30;
          v91 = v32 + 608LL * (unsigned int)v30;
        }
        else {
          v38 = 104 * v26;
          v87[v38] = 1;
          a1[v38 + 68] = 1;
          v30 = *((unsigned __int8*)v28 + 114);
        }
      }
      v96 = v34;
      v94 = v35;
      v39 = &v87[104 * v26];
      v40 = &v39[52 * v33];
      *((_BYTE*)v40 + 5) = *((_BYTE*)v28 + v30 + 112);
      v41 = *v40;
      if (*v40 != 0) {
        v42 = *((_BYTE*)v40 + 4);
        if ((v42 & 1) == 0) {
          goto LABEL_40;
        }
      }
      else {
        v43 = nn_codec_initHeaderData_plt(&v39[52 * v33], a1[857], a1[858]);
        if (v43 != 0) {
          return v43;
        }
        v44 = a1[861];
        *v40 = 1;
        v45 = nn_codec_resetFreqBandTables_plt(v40, v44);
        if (v45 != 0) {
          v22 = v45;
          *v40 = 0;
          return v22;
        }
        v41 = *v40;
        if (*v40 == 1) {
          v46 = *((_BYTE*)v40 + 7);
          *((_BYTE*)v40 + 36) = v46;
          *((_BYTE*)v40 + 37) = v46;
        }
        v34 = v96;
        v42 = *((_BYTE*)v40 + 4) | 1;
        *((_BYTE*)v40 + 4) = v42;
        if ((v42 & 1) == 0) {
        LABEL_40:
          v22 = 0;
          if (v41 != 3) {
            goto LABEL_55;
          }
          goto LABEL_57;
        }
      }
      if ((int)v36 < 1) {
        v22 = 0;
        *((_BYTE*)v40 + 4) = v42 & 0xFE;
        if (v41 != 3) {
          goto LABEL_55;
        }
      }
      else {
        v47 = v21;
        v22 = 0;
        v48 = v28;
        do {
          v49 = *v48++;
          v50 = nn_codec_resetSbrDec_plt(v49 + 1352, v40, v49 + 1216,
                                         a1[861] & 0x10,
                                         *((unsigned __int8*)a1 + 3438));
          if (v50 != 0) {
            v22 = v50;
          }
          --v36;
        } while (v36 != 0);
        v41 = *v40;
        v34 = v96;
        v21 = v47;
        *((_BYTE*)v40 + 4) &= ~1u;
        if (v41 != 3) {
        LABEL_55:
          if (v41 != 2 || *((_BYTE*)v40 + 5) != 0) {
            goto LABEL_63;
          }
        }
      }
    LABEL_57:
      v51 = 0;
      if (v97 == 1) {
        v52 = v91;
      }
      else {
        v52 = 0;
      }
      if (v97 == 1) {
        v51 = v28[1] + 1216;
      }
      nn_codec_decodeSbrData_plt(v40, v93, *v28 + 1216, v52, v51);
      v34 = v96;
      v22 = 0;
      *v40 = 3;
    LABEL_63:
      if (v21 != 0 && v34 != 0) {
        *(_BYTE*)(v34 + 15) = *((_BYTE*)v28 + 114);
        v53 = nn_codec_DecodePs_plt(v34, *((unsigned __int8*)v40 + 5));
        v34 = v96;
        if (v53 != 0) {
          v54 = 32;
        }
        else {
          v54 = 0;
        }
        a1[861] |= v54;
      }
      v55 = *a5;
      if (v55 == 255) {
        return 5;
      }
      v88 = a5;
      if (v97 == 1) {
        v56 = a5[1];
        if (v56 == 255) {
          return 5;
        }
        v57 = *v28;
        if (*(_QWORD*)(*v28 + 1976) == 0 || *(_QWORD*)(v28[1] + 1976) == 0) {
          return 5;
        }
        v58 = a7;
        if (a6 == 0) {
        LABEL_81:
          v59 = v94;
          v60 = v21;
          v61 = 1;
          v62 = 1;
          v55 *= 2 * v94;
          v56 *= 2 * v94;
          goto LABEL_82;
        }
      }
      else {
        v57 = *v28;
        if (*(_QWORD*)(*v28 + 1976) == 0) {
          return 5;
        }
        v56 = a5[1];
        v58 = a7;
        if (a6 == 0) {
          goto LABEL_81;
        }
      }
      v59 = v94;
      v60 = v21;
      if (v21 != 0) {
        v61 = v85;
      }
      else {
        v61 = v95;
      }
      v62 = v95;
    LABEL_82:
      v63 = &v86[v56];
      nn_codec_sbr_dec_plt(v57 + 1352, &v86[v55], &v86[v55], v28[1] + 1352, v63,
                           v62, v61, v40, v93, v57 + 1216, *v40 == 3, v34,
                           a1[861], v59);
      if (v97 == 1) {
        nn_codec_sbr_dec_plt(v28[1] + 1352, v63, v63, 0, 0, v62, v61, v40, v91,
                             v28[1] + 1216, *v40 == 3, 0, a1[861], v94);
      }
      if (v96 != 0) {
        *(_BYTE*)(v96 + 12) = (a1[861] & 0x20) != 0;
      }
      v64 = v89;
      v23 = v90;
      a7 = v58;
      v21 = v60;
      if (v60 == 0) {
        v65 = v88;
        goto LABEL_100;
      }
      v65 = v88;
      if ((a1[861] & 0x20) == 0) {
        v66 = 2 * v94 / (unsigned int)*((unsigned __int8*)a1 + 3438);
        if (a6 != 0) {
          if (v66 >= 2) {
            v67 = v66 >> 1;
            v68 = (v66 >> 1) & 7;
            if (v68 != 0) {
              v69 = v86;
              v70 = v66 >> 1;
              do {
                v71 = v69[2];
                --v70;
                --v68;
                v69[1] = *v69;
                v72 = v69 + 4;
                v69[3] = v71;
                v69 += 4;
              } while (v68 != 0);
              if (v67 - 1 < 7) {
                goto LABEL_99;
              }
              do {
              LABEL_98:
                v73 = v72[2];
                v70 -= 8;
                v72[1] = *v72;
                v74 = v72[4];
                v72[3] = v73;
                v75 = v72[6];
                v72[5] = v74;
                v76 = v72[8];
                v72[7] = v75;
                v77 = v72[10];
                v72[9] = v76;
                v78 = v72[12];
                v72[11] = v77;
                v72[13] = v78;
                v72[15] = v72[14];
                v72[17] = v72[16];
                v72[19] = v72[18];
                v72[21] = v72[20];
                v72[23] = v72[22];
                v72[25] = v72[24];
                v72[27] = v72[26];
                v72[29] = v72[28];
                v72[31] = v72[30];
                v72 += 32;
              } while (v70 != 0);
              goto LABEL_99;
            }
            v72 = v86;
            v70 = v66 >> 1;
            if (v67 - 1 >= 7) {
              goto LABEL_98;
            }
          }
        }
        else {
          nn_codec_FDKmemcpy_plt(&v86[v66], v86, 2 * v66);
        }
      }
    LABEL_99:
      v64 = 2;
    LABEL_100:
      if ((int)(v64 + v90) >= (int)v95) {
        v79 = 8;
      }
      else {
        v79 = 0;
      }
      if (v22 != 0) {
        v80 = 11;
      }
      else {
        v23 = v64 + v90;
        v80 = v79;
      }
      if (v80 != 0) {
        if (v80 == 8) {
          goto LABEL_17;
        }
        return v22;
      }
      ++v26;
      if (v22 != 0) {
        v81 = 0;
      }
      else {
        v81 = v64;
      }
      a5 = &v65[v81];
      if (v26 >= (int)a1[855]) {
        goto LABEL_17;
      }
    }
  }
LABEL_16:
  v22 = 0;
  v23 = 0;
LABEL_17:
  *a3 = v23;
  *a4 = a1[858];
  *a8 = (a1[861] & 0x20) != 0;
  a1[861] &= 0xFFFF3FFF;
  return v22;
}

__int64 nn_codec_sbrDecoder_GetLibInfo(_DWORD* a1)
{
  unsigned int v2;
  _DWORD* v3;

  if (a1 == nullptr) {
    return 0xFFFFFFFFLL;
  }
  if (a1[6] != 0) {
    if (a1[24] != 0) {
      if (a1[42] != 0) {
        if (a1[60] != 0) {
          if (a1[78] != 0) {
            if (a1[96] != 0) {
              if (a1[114] != 0) {
                if (a1[132] != 0) {
                  if (a1[150] != 0) {
                    if (a1[168] != 0) {
                      if (a1[186] != 0) {
                        if (a1[204] != 0) {
                          if (a1[222] != 0) {
                            if (a1[240] != 0) {
                              if (a1[258] != 0) {
                                if (a1[276] != 0) {
                                  if (a1[294] != 0) {
                                    if (a1[312] != 0) {
                                      if (a1[330] != 0) {
                                        if (a1[348] != 0) {
                                          if (a1[366] != 0) {
                                            if (a1[384] != 0) {
                                              if (a1[402] != 0) {
                                                if (a1[420] != 0) {
                                                  if (a1[438] != 0) {
                                                    if (a1[456] != 0) {
                                                      if (a1[474] != 0) {
                                                        if (a1[492] != 0) {
                                                          if (a1[510] != 0) {
                                                            if (a1[528] != 0) {
                                                              if (a1[546] !=
                                                                  0) {
                                                                if (a1[564] !=
                                                                    0) {
                                                                  return 0xFFFFFFFFLL;
                                                                }
                                                                v2 = 31;
                                                              }
                                                              else {
                                                                v2 = 30;
                                                              }
                                                            }
                                                            else {
                                                              v2 = 29;
                                                            }
                                                          }
                                                          else {
                                                            v2 = 28;
                                                          }
                                                        }
                                                        else {
                                                          v2 = 27;
                                                        }
                                                      }
                                                      else {
                                                        v2 = 26;
                                                      }
                                                    }
                                                    else {
                                                      v2 = 25;
                                                    }
                                                  }
                                                  else {
                                                    v2 = 24;
                                                  }
                                                }
                                                else {
                                                  v2 = 23;
                                                }
                                              }
                                              else {
                                                v2 = 22;
                                              }
                                            }
                                            else {
                                              v2 = 21;
                                            }
                                          }
                                          else {
                                            v2 = 20;
                                          }
                                        }
                                        else {
                                          v2 = 19;
                                        }
                                      }
                                      else {
                                        v2 = 18;
                                      }
                                    }
                                    else {
                                      v2 = 17;
                                    }
                                  }
                                  else {
                                    v2 = 16;
                                  }
                                }
                                else {
                                  v2 = 15;
                                }
                              }
                              else {
                                v2 = 14;
                              }
                            }
                            else {
                              v2 = 13;
                            }
                          }
                          else {
                            v2 = 12;
                          }
                        }
                        else {
                          v2 = 11;
                        }
                      }
                      else {
                        v2 = 10;
                      }
                    }
                    else {
                      v2 = 9;
                    }
                  }
                  else {
                    v2 = 8;
                  }
                }
                else {
                  v2 = 7;
                }
              }
              else {
                v2 = 6;
              }
            }
            else {
              v2 = 5;
            }
          }
          else {
            v2 = 4;
          }
        }
        else {
          v2 = 3;
        }
      }
      else {
        v2 = 2;
      }
    }
    else {
      v2 = 1;
    }
  }
  else {
    v2 = 0;
  }
  v3 = &a1[18 * v2];
  *((_QWORD*)v3 + 3) = 0x2020C0000000005LL;
  nn_codec_FDKsprintf_plt(v3 + 9, "%d.%d.%d", 2, 2, 12);
  *((_QWORD*)v3 + 1) = &SdkData_bbbd5c;
  *((_QWORD*)v3 + 2) = &SdkData_bbbd5c;
  *(_QWORD*)v3 = "SBR Decoder";
  v3[8] = 63;
  return 0;
}

#pragma GCC visibility pop
