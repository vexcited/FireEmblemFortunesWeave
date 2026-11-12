#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MovieRoutine_51580(__int64, __int64, __int16*, unsigned int*,
                           unsigned int, unsigned int, unsigned int);
__int64 ec_dec_icdf(__int64*, unsigned __int8*, char);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 opus_silk_52100(__int64*, __int64, __int64, unsigned int, int);
__int64 opus_silk_52610(__int64, int, unsigned int);
__int64 opus_silk_55ea0(_QWORD);
__int64 opus_silk_55ea0_alt1(_DWORD*) __asm__("opus_silk_55ea0");
__int64 silk_decode_indices(__int64, __int64*, int, int, int);
__int64 silk_resampler(_DWORD*, __int64, __int64, int);
__int64 silk_stereo_decode_mid_only(__int64*, _DWORD*);
__int64 silk_stereo_decode_pred(__int64*, _DWORD*);
bool ec_dec_bit_logp(__int64*, char);
extern _DWORD MovieData_a5f60[3];
extern _UNKNOWN* MovieData_c0a48;
unsigned __int16* opus_silk_59ee0(unsigned __int16* result, _DWORD*, _DWORD*,
                                  int*, int, int);
__int64 silk_InitDecoder(__int64 a1);
__int64 silk_Decode(_DWORD* a1, int* a2, unsigned int a3, int a4, __int64* a5,
                    char* a6, int* a7, unsigned int a8);

__int64 silk_InitDecoder(__int64 a1)
{
  __int64 result;

  ((void (*)(void))opus_silk_55ea0)();
  result = opus_silk_55ea0(a1 + 4288);
  *(_QWORD*)(a1 + 8576) = 0;
  *(_DWORD*)(a1 + 8584) = 0;
  *(_DWORD*)(a1 + 8596) = 0;
  return result;
}

__int64 silk_Decode(_DWORD* a1, int* a2, unsigned int a3, int a4, __int64* a5,
                    char* a6, int* a7, unsigned int a8)
{
  __int64 v8;
  __int64 v13;
  _DWORD* v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 result;
  int v24;
  int v25;
  unsigned int v27;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  int v42;
  int v43;
  unsigned int v44;
  __int64 v45;
  int* v46;
  char v47;
  char v48;
  __int64 i;
  unsigned int v50;
  int v51;
  int v52;
  bool v53;
  _BYTE* v54;
  int v55;
  __int64 v56;
  int v57;
  char* v58;
  __int64 v59;
  char* v60;
  int v61;
  bool v62;
  int v63;
  unsigned int v64;
  __int64 v65;
  int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  int v70;
  unsigned int v71;
  _DWORD* v73;
  int v74;
  int v75;
  __int64 v76;
  int v77;
  __int64 v78;
  char* v79;
  int v80;
  __int64 v81;
  __int64 v82;
  _DWORD* v83;
  int v84;
  __int64 v85;
  _WORD* v86;
  __int64 v87;
  int v88;
  int v89;
  __int64 v90;
  _WORD* v91;
  __int16 v92;
  __int64 v94;
  _WORD* v95;
  __int16 v96;
  __int64 v97;
  _WORD* v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64 v101;
  int v102;
  __int64 v103;
  __int64 v104;
  _BYTE* v105;
  __int64 v106;
  __int64 v107;
  int v108;
  _DWORD* v109;
  __int64 v110;
  int v111;
  _DWORD* v112;
  __int64 v113;
  struct {
    __int64 v114;
    _DWORD* v115;
    char* v116;
    __int64 v117;
    __int64 v118;
    char gap40_[4];
    _BOOL4 v119;
    char* v120;
    char gap56_[4];
    unsigned int v121;
    __int64 v122;
    _DWORD* v123;
    char gap80_[4];
    unsigned int v124;
  } v114_;
  _BYTE v125[640];
  struct {
    __int64 v126;
    _DWORD* v127;
    __int64 v128;
  } v126_;
  _QWORD v129[2];

  LODWORD(v8) = a2[1];
  v114_.v121 = a8;
  v114_.v120 = a6;
  v13 = (__int64)a1;
  v126_.v128 = 0;
  v129[0] = 0;
  v126_.v126 = 0;
  v126_.v127 = nullptr;
  if (a4 != 0 && (int)v8 >= 1) {
    v14 = a1 + 600;
    v15 = 0;
    do {
      *v14 = 0;
      ++v15;
      v14 += 1072;
      v8 = a2[1];
    } while (v15 < v8);
  }
  if ((int)v8 <= (signed __int32)a1[2148]) {
    v17 = 0;
    if ((_DWORD)v8 != 1) {
      goto LABEL_12;
    }
  }
  else {
    v16 = opus_silk_55ea0_alt1(a1 + 1072);
    LODWORD(v8) = a2[1];
    v17 = v16;
    if ((_DWORD)v8 != 1) {
      goto LABEL_12;
    }
  }
  if (*(_DWORD*)(v13 + 8592) == 2) {
    v114_.v119 = a2[3] == 1000 * *(_DWORD*)(v13 + 2316);
    v18 = *(_DWORD*)(v13 + 2400);
    v114_.v124 = a3;
    if (v18 != 0) {
      goto LABEL_34;
    }
    goto LABEL_13;
  }
LABEL_12:
  v114_.v119 = false;
  v19 = *(_DWORD*)(v13 + 2400);
  v114_.v124 = a3;
  if (v19 != 0) {
    goto LABEL_34;
  }
LABEL_13:
  if ((int)v8 >= 1) {
    v20 = v13;
    v21 = 0;
    v114_.v122 = v13;
    do {
      v22 = a2[4];
      result = 4294967093LL;
      if (v22 <= 19) {
        if (v22 != 0 && v22 != 10) {
          return result;
        }
        v24 = 2;
        v25 = 1;
      }
      else {
        switch (v22) {
        case 60:
          v24 = 4;
          v25 = 3;
          break;
        case 40:
          v24 = 4;
          v25 = 2;
          break;
        case 20:
          v24 = 4;
          v25 = 1;
          break;
        default:
          return result;
        }
      }
      *(_DWORD*)(v20 + 2404) = v25;
      *(_DWORD*)(v20 + 2324) = v24;
      v27 = a2[3] >> 10;
      if (v27 > 0xF || ((1 << v27) & 0x8880) == 0) {
        return 4294967096LL;
      }
      v29 = opus_silk_52610(v20, v27 + 1, a2[2]);
      v8 = a2[1];
      v17 += v29;
      ++v21;
      v20 += 4288;
    } while (v21 < v8);
    v13 = v114_.v122;
    a3 = v114_.v124;
  }
LABEL_34:
  v30 = *a2;
  if (*a2 == 2) {
    if ((_DWORD)v8 == 2 &&
        (*(_DWORD*)(v13 + 8588) == 1 || *(_DWORD*)(v13 + 8592) == 1)) {
      *(_DWORD*)(v13 + 8576) = 0;
      *(_DWORD*)(v13 + 8584) = 0;
      memcpy_plt(v13 + 6736, v13 + 2448, 304);
      v30 = *a2;
    }
    else {
      v30 = 2;
    }
  }
  *(_DWORD*)(v13 + 8588) = v30;
  LODWORD(v31) = a2[1];
  *(_DWORD*)(v13 + 8592) = v31;
  if ((unsigned int)(a2[2] - 48001) < 0xFFFF63BF) {
    return 4294967096LL;
  }
  v114_.v118 = v13 + 6600;
  if (a3 != 1 && *(_DWORD*)(v13 + 2400) == 0) {
    if ((int)v31 >= 1) {
      v114_.v122 = v13;
      v32 = v13 + 2416;
      v33 = 0;
      do {
        v34 = v114_.v122 + 4288 * v33;
        if (*(int*)(v34 + 2404) >= 1) {
          v35 = 0;
          do {
            *(_DWORD*)(v32 + 4 * v35++) = ec_dec_bit_logp(a5, 1);
          } while (v35 < *(int*)(v34 + 2404));
        }
        *(_DWORD*)(v34 + 2428) = ec_dec_bit_logp(a5, 1);
        ++v33;
        v32 += 4288;
        v31 = a2[1];
      } while (v33 < v31);
      v13 = v114_.v122;
      if ((int)v31 >= 1) {
        v36 = (int*)(v114_.v122 + 2460);
        v37 = v114_.v122 + 2432;
        v38 = 0;
        do {
          v39 = v114_.v122 + 4288 * v38;
          v40 = *(_DWORD*)(v39 + 2428);
          *(_DWORD*)(v39 + 2440) = 0;
          *(_QWORD*)(v39 + 2432) = 0;
          if (v40 != 0) {
            v41 = *(_DWORD*)(v39 + 2404);
            if (v41 == 1) {
              *(_DWORD*)(v39 + 2432) = 1;
            }
            else {
              v42 = ec_dec_icdf(
                  a5, *((unsigned __int8**)MovieData_c0a48 + v41 - 2), 8);
              v43 = *(_DWORD*)(v39 + 2404);
              if (v43 >= 1) {
                v44 = v42 + 1;
                if ((unsigned int)v43 >= 8) {
                  v45 = 0;
                  v46 = v36;
                  do {
                    *(v46 - 7) = (v44 >> v45) & 1;
                    *(v46 - 6) = (v44 >> (v45 + 1)) & 1;
                    *(v46 - 5) = (v44 >> (v45 + 2)) & 1;
                    *(v46 - 4) = (v44 >> (v45 + 3)) & 1;
                    *(v46 - 3) = (v44 >> (v45 + 4)) & 1;
                    *(v46 - 2) = (v44 >> (v45 + 5)) & 1;
                    v47 = v45 + 6;
                    v48 = v45 + 7;
                    v45 += 8;
                    *(v46 - 1) = (v44 >> v47) & 1;
                    *v46 = (v44 >> v48) & 1;
                    v46 += 8;
                  } while (v45 != (v43 & 0x7FFFFFF8));
                }
                else {
                  v45 = 0;
                }
                for (i = v43 & 7; i != 0; ++v45) {
                  --i;
                  *(_DWORD*)(v37 + 4 * v45) = (v44 >> v45) & 1;
                }
              }
            }
          }
          ++v38;
          v36 += 1072;
          v37 += 4288;
        } while (v38 < a2[1]);
        v13 = v114_.v122;
        LODWORD(v31) = a2[1];
      }
    }
    v50 = v114_.v124;
    if (v114_.v124 == 0 && *(int*)(v13 + 2404) >= 1) {
      if ((int)v31 < 1) {
        goto LABEL_76;
      }
      v114_.v122 = v13;
      v114_.v123 = nullptr;
      v106 = 0;
      v114_.v115 = (_DWORD*)(v13 + 6720);
      v114_.v116 = (char*)(v13 + 4288);
      v114_.v117 = v13 + 2432;
      do {
        if ((int)v31 >= 1) {
          if (v106 != 0) {
            if (*(_DWORD*)(v114_.v117 + 4 * v106) != 0) {
              memset_plt(v125, 0, 640);
              if ((_DWORD)v31 == 2) {
                silk_stereo_decode_pred(a5, &v126_.v126);
                if (v114_.v115[v106] == 0) {
                  silk_stereo_decode_mid_only(a5, (_DWORD*)v129 + 1);
                }
              }
              if (*(_DWORD*)(v114_.v117 + 4 * (v106 - 1)) != 0) {
                v108 = 2;
              }
              else {
                v108 = 0;
              }
              silk_decode_indices(v13, a5, v106, 1, v108);
              opus_silk_52100(a5, (__int64)v125,
                              (unsigned int)*(char*)(v13 + 2789),
                              *(char*)(v13 + 2790), *(_DWORD*)(v13 + 2328));
              LODWORD(v31) = a2[1];
            }
            if ((int)v31 >= 2) {
              v109 = v114_.v116;
              v110 = 1;
              do {
                if (*(_DWORD*)((char*)v114_.v123 + (_QWORD)v109 + 2432) != 0) {
                  memset_plt(v125, 0, 640);
                  if (*(_DWORD*)((char*)v114_.v123 + (_QWORD)v109 + 2428) !=
                      0) {
                    v111 = 2;
                  }
                  else {
                    v111 = 0;
                  }
                  silk_decode_indices((__int64)v109, a5, v106, 1, v111);
                  opus_silk_52100(a5, (__int64)v125,
                                  (unsigned int)*((char*)v109 + 2789),
                                  *((char*)v109 + 2790), v109[582]);
                  LODWORD(v31) = a2[1];
                }
                ++v110;
                v109 += 1072;
              } while (v110 < (int)v31);
            }
          }
          else {
            if (*(_DWORD*)(v13 + 2432) != 0) {
              memset_plt(v125, 0, 640);
              if ((_DWORD)v31 == 2) {
                silk_stereo_decode_pred(a5, &v126_.v126);
                if (*v114_.v115 == 0) {
                  silk_stereo_decode_mid_only(a5, (_DWORD*)v129 + 1);
                }
              }
              silk_decode_indices(v13, a5, 0, 1, 0);
              opus_silk_52100(a5, (__int64)v125,
                              (unsigned int)*(char*)(v13 + 2789),
                              *(char*)(v13 + 2790), *(_DWORD*)(v13 + 2328));
              LODWORD(v31) = a2[1];
            }
            if ((int)v31 >= 2) {
              v112 = v114_.v116;
              v113 = 1;
              do {
                if (v112[608] != 0) {
                  memset_plt(v125, 0, 640);
                  silk_decode_indices((__int64)v112, a5, 0, 1, 0);
                  opus_silk_52100(a5, (__int64)v125,
                                  (unsigned int)*((char*)v112 + 2789),
                                  *((char*)v112 + 2790), v112[582]);
                  LODWORD(v31) = a2[1];
                }
                ++v113;
                v112 += 1072;
              } while (v113 < (int)v31);
            }
          }
        }
        v13 = v114_.v122;
        ++v106;
        v107 = *(int*)(v114_.v122 + 2404);
        ++v114_.v123;
      } while (v106 < v107);
    }
  }
  v50 = v114_.v124;
  if ((_DWORD)v31 != 2) {
    goto LABEL_76;
  }
  if (v114_.v124 != 0) {
    if (v114_.v124 != 2 ||
        *(_DWORD*)(v13 + 4LL * *(int*)(v13 + 2400) + 2432) != 1) {
      v51 = *(__int16*)(v114_.v118 + 1978);
      LODWORD(v126_.v126) = *(__int16*)(v114_.v118 + 1976);
      HIDWORD(v126_.v126) = v51;
      goto LABEL_76;
    }
    silk_stereo_decode_pred(a5, &v126_.v126);
    if (*(_DWORD*)(v13 + 4LL * *(int*)(v13 + 2400) + 6720) == 0) {
    LABEL_72:
      silk_stereo_decode_mid_only(a5, (_DWORD*)v129 + 1);
      goto LABEL_76;
    }
  }
  else {
    silk_stereo_decode_pred(a5, &v126_.v126);
    if (*(_DWORD*)(v13 + 4LL * *(int*)(v13 + 2400) + 6704) == 0) {
      goto LABEL_72;
    }
  }
  HIDWORD(v129[0]) = 0;
LABEL_76:
  v52 = a2[1];
  v53 = v52 == 2 && HIDWORD(v129[0]) == 0;
  LODWORD(v114_.v123) = HIDWORD(v129[0]) == 0;
  if (v53) {
    if (*(_DWORD*)(v13 + 8596) == 1) {
      memset_plt(v13 + 5572, 0, 1024);
      v54 = (_BYTE*)v114_.v118;
      *(_DWORD*)(v13 + 8476) = 0;
      *(_DWORD*)(v13 + 6596) = 100;
      *v54 = 10;
      *(_DWORD*)(v13 + 6664) = 1;
      v52 = a2[1];
    }
    else {
      v52 = 2;
    }
  }
  v55 = a2[2];
  v56 = *(int*)(v13 + 2328);
  v57 = *a2;
  v58 = v114_.v120;
  LODWORD(v114_.v118) = v52 * a2[3];
  LODWORD(v114_.v117) = v57 * v55;
  if ((int)v114_.v118 >= v57 * v55) {
    v59 = 2LL * ((int)v56 + 2) * v52;
    v58 = (char*)&v114_.v114 - ((v59 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    memset_plt(v58, 0, v59);
  }
  v60 = &v58[2 * v56 + 4];
  v126_.v127 = v58;
  v126_.v128 = (__int64)v60;
  if (v50 != 0) {
    if (*(_DWORD*)(v13 + 8596) != 0) {
      LODWORD(v114_.v123) = 0;
      if (v50 == 2 && v52 == 2) {
        LODWORD(v114_.v123) =
            *(_DWORD*)(v13 + 4LL * *(int*)(v13 + 6688) + 6720) == 1;
        goto LABEL_93;
      }
    }
    else {
      LODWORD(v114_.v123) = 1;
    }
  }
  if (v52 < 1) {
  LABEL_121:
    v73 = v126_.v127;
    *v126_.v127 = *(_DWORD*)(v13 + 8580);
    v114_.v123 = v73;
    v74 = v129[0];
    *(_DWORD*)(v13 + 8580) = *(_DWORD*)((char*)v73 + 2 * SLODWORD(v129[0]));
    goto LABEL_122;
  }
LABEL_93:
  v61 = *(_DWORD*)(v13 + 2400);
  v62 = __OFSUB__(v61, 1);
  v63 = v61 - 1;
  if (v63 < 0 != v62) {
    v64 = 0;
  }
  else {
    v64 = 2;
  }
  if (v63 < 0 == v62 && v50 == 2) {
    if (*(_DWORD*)(v13 + 4LL * (unsigned int)v63 + 2432) != 0) {
      v64 = 2;
    }
    else {
      v64 = 0;
    }
  }
  v17 += MovieRoutine_51580(v13, (__int64)a5, (__int16*)v58 + 2,
                            (unsigned int*)v129, v50, v64, v114_.v121);
  ++*(_DWORD*)(v13 + 2400);
  if (a2[1] < 2) {
    goto LABEL_121;
  }
  v114_.v116 = v60;
  v65 = v13;
  v66 = -2;
  v67 = v13 + 6720;
  v68 = 1;
  do {
    if ((_DWORD)v114_.v123 != 0) {
      v70 = *(_DWORD*)(v65 + 2400);
      if (v66 + v70 + 1 < 1) {
        v71 = 0;
      }
      else if (v114_.v124 == 2) {
        if (*(_DWORD*)(v67 + 4LL * (unsigned int)(v70 + v66)) != 0) {
          v71 = 2;
        }
        else {
          v71 = 0;
        }
      }
      else if (*(_DWORD*)(v65 + 8596) != 0) {
        v71 = 1;
      }
      else {
        v71 = 2;
      }
      v17 += MovieRoutine_51580(
          v67 - 2432, (__int64)a5, (__int16*)(&v126_.v127)[v68] + 2,
          (unsigned int*)v129, v114_.v124, v71, v114_.v121);
    }
    else {
      memset_plt((&v126_.v127)[v68] + 1, 0, 2LL * SLODWORD(v129[0]));
    }
    ++v68;
    --v66;
    ++*(_DWORD*)(v67 - 32);
    v67 += 4288;
    v69 = a2[1];
  } while (v68 < v69);
  if ((_DWORD)v69 != 2 || *a2 != 2) {
    v50 = v114_.v124;
    v13 = v65;
    goto LABEL_121;
  }
  v102 = *(_DWORD*)(v65 + 2316);
  v13 = v65;
  v114_.v123 = v126_.v127;
  opus_silk_59ee0((unsigned __int16*)(v65 + 8576), v126_.v127, v114_.v116,
                  (int*)&v126_.v126, v102, v129[0]);
  v74 = v129[0];
  v50 = v114_.v124;
LABEL_122:
  v75 = a2[2] * v74 / (1000 * *(__int16*)(v13 + 2316));
  *a7 = v75;
  v76 = 2LL * v75;
  v77 = *a2;
  if (*a2 == 2) {
    v78 = v76;
  }
  else {
    v78 = 0;
  }
  if (v77 == 2) {
    v79 = (char*)&v114_.v114 - ((v78 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  }
  else {
    v79 = v114_.v120;
  }
  memset_plt((char*)&v114_.v114 - ((v78 + 15) & 0xFFFFFFFFFFFFFFF0LL), 0, v78);
  v80 = a2[1];
  if ((int)v114_.v118 < (int)v114_.v117) {
    v81 = *(int*)(v13 + 2328);
    v82 = 2LL * ((int)v81 + 2) * v80;
    v83 = (_DWORD*)((char*)&v114_.v114 - ((v82 + 15) & 0xFFFFFFFFFFFFFFF0LL));
    memcpy_plt(v83, v114_.v120, v82);
    v114_.v123 = v83;
    v126_.v127 = v83;
    v126_.v128 = (__int64)v83 + 2 * v81 + 4;
    v50 = v114_.v124;
  }
  if (v77 >= v80) {
    v84 = v80;
  }
  else {
    v84 = v77;
  }
  if (v84 >= 1) {
    v85 = v13;
    v86 = v114_.v120;
    v87 = 0;
    do {
      v89 = silk_resampler((_DWORD*)(v85 + 4288 * v87 + 2448), (__int64)v79,
                           (__int64)(&v126_.v127)[v87] + 2, v129[0]);
      v77 = *a2;
      if (*a2 == 2) {
        if (*a7 < 1) {
          v77 = 2;
        }
        else {
          v90 = 0;
          v91 = v86;
          do {
            v92 = *(_WORD*)&v79[2 * v90++];
            *v91 = v92;
            v91 += 2;
          } while (v90 < *a7);
          v77 = *a2;
        }
      }
      v80 = a2[1];
      ++v87;
      v17 += v89;
      ++v86;
      if (v77 >= v80) {
        v88 = a2[1];
      }
      else {
        v88 = v77;
      }
    } while (v87 < v88);
    v13 = v85;
    v50 = v114_.v124;
  }
  if (v77 != 2 || v80 != 1) {
  LABEL_161:
    result = v17;
    if (*(_DWORD*)(v13 + 4188) != 2) {
      goto LABEL_162;
    }
  LABEL_156:
    a2[5] = MovieData_a5f60[(*(_DWORD*)(v13 + 2316) - 8) >> 2] *
            *(_DWORD*)(v13 + 2308);
    if (v50 == 1) {
      goto LABEL_163;
    }
  LABEL_157:
    *(_DWORD*)(v13 + 8596) = HIDWORD(v129[0]);
    return result;
  }
  if (!v114_.v119) {
    if (*a7 >= 1) {
      v97 = 0;
      v98 = v114_.v120 + 2;
      do {
        ++v97;
        *v98 = *(v98 - 1);
        v98 += 2;
      } while (v97 < *a7);
    }
    goto LABEL_161;
  }
  result = (unsigned int)silk_resampler((_DWORD*)(v13 + 6736), (__int64)v79,
                                        (__int64)v114_.v123 + 2, v129[0]) +
           v17;
  if (*a7 >= 1) {
    v94 = 0;
    v95 = v114_.v120 + 2;
    do {
      v96 = *(_WORD*)&v79[2 * v94++];
      *v95 = v96;
      v95 += 2;
    } while (v94 < *a7);
  }
  if (*(_DWORD*)(v13 + 4188) == 2) {
    goto LABEL_156;
  }
LABEL_162:
  a2[5] = 0;
  if (v50 != 1) {
    goto LABEL_157;
  }
LABEL_163:
  v99 = *(unsigned int*)(v13 + 8592);
  if ((int)v99 >= 1) {
    v100 = v99 & 7;
    if ((unsigned int)v99 >= 8) {
      v103 = 0;
      v101 = 0;
      do {
        v104 = v13 + v103;
        *(_BYTE*)(v13 + 6600 + v103) = 10;
        *(_BYTE*)(v13 + 10888 + v103) = 10;
        v101 += 8;
        *(_BYTE*)(v13 + 15176 + v103) = 10;
        *(_BYTE*)(v13 + 19464 + v103) = 10;
        *(_BYTE*)(v13 + 23752 + v103) = 10;
        *(_BYTE*)(v13 + 28040 + v103) = 10;
        *(_BYTE*)(v13 + 32328 + v103) = 10;
        v103 += 34304;
        *(_BYTE*)(v104 + 2312) = 10;
      } while (34304 * ((v99 >> 3) & 0xFFFFFFF) != v103);
    }
    else {
      v101 = 0;
    }
    if ((v99 & 7) != 0) {
      v105 = (_BYTE*)(v13 + 4288 * v101 + 2312);
      do {
        *v105 = 10;
        v105 += 4288;
        --v100;
      } while (v100 != 0);
    }
  }
  return result;
}

#pragma GCC visibility pop
