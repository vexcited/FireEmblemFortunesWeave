#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_3185e0(__int64, __int64, __int64, unsigned __int64,
                          unsigned int, int, int, int, int, int*);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
extern float SdkData_c1f948[1447];
__int64 opus_317e10(_DWORD* a1, int a2, __int64 a3, unsigned __int64 a4);
_DWORD* opus_3184a0(_DWORD* a1, __int64 a2, __int64 a3, int a4, int a5, int a6,
                    int a7, int a8, int a9, int a10, int* a11, __int64 a12);
unsigned __int64
opus_31b6e0(void (*a1)(__int64, void*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
            __int64 a2, int* a3, _DWORD* a4, int a5, unsigned int a6,
            unsigned int a7, unsigned int a8, int a9, int a10);
__int64 opus_31bc20(__int64 result, __int64 a2, __int64 a3);
__int64* opus_31c2e0(__int64* result, __int64 a2, __int64 a3);

__int64 opus_317e10(_DWORD* a1, int a2, __int64 a3, unsigned __int64 a4)
{
  *a1 = 0;
  a1[2] = a2;
  return memset_plt((void*)(a1 + 3), nullptr, 13992, a4);
}

_DWORD* opus_3184a0(_DWORD* a1, __int64 a2, __int64 a3, int a4, int a5, int a6,
                    int a7, int a8, int a9, int a10, int* a11, __int64 a12)
{
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v24;
  _DWORD* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  float v34;
  int v35;
  char v36;
  char v37;
  char v38;
  float v39;
  float v40;
  int v41;
  float* v42;
  float v43;
  int v44;
  float v45;
  int v46;
  float* v47;
  float v48;
  int v49;
  int v50;
  float* v51;
  float v52;
  int v53;
  int v54;
  _DWORD* v55;
  bool v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  float v68;
  float v69;
  int v70;
  int v71;
  int v72;
  __int64 v73;
  __int64 v74;
  int v75;
  int v76;
  __int64 v77;
  int v78;
  float* v79;
  float* v80;
  int v81;
  float v82;
  float v83;
  _DWORD* v84;
  float v85;
  int v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  int v97;
  float v98;
  float v99;
  int v100;
  unsigned int v101;
  int v102;
  unsigned int v103;
  int v104;
  float v105;
  int v106;
  float v107;
  int v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  __int64 v117;
  unsigned int v119;
  unsigned int v120;
  int v121;
  int v126;
  int v127;
  unsigned __int64 v128;
  _DWORD* result;
  unsigned int v130;
  int v131;

  v117 = a12;
  if (a3 != 0) {
    v119 = a1[1860];
    v120 = a4 & 0xFFFFFFFE;
    v131 = a5;
    if (95 * a9 / 50 < (int)(a4 & 0xFFFFFFFE)) {
      v120 = 95 * a9 / 50;
    }
    v130 = v120;
    v121 = v120 - v119;
    if (v121 >= 1) {
      v126 = a9 / 50;
      do {
        v127 = v121 - v126;
        if (v121 <= v126) {
          v128 = (unsigned int)v121;
        }
        else {
          v128 = (unsigned int)v126;
        }
        SdkRoutine_3185e0((__int64)a1, a2, a3, v128, v119, a6, a7, a8, a10,
                          a11);
        v119 += v126;
        v121 = v127;
      } while (v127 > 0);
    }
    a5 = v131;
    v117 = a12;
    a1[1860] = v130 - v131;
  }
  result = a1;
  v12 = a1[1862];
  v13 = a1[1861];
  v14 = v13 - v12;
  if (v13 < v12) {
    v14 = v13 - v12 + 100;
  }
  v15 = a1[2];
  v16 = a1[1863] + a5 / (v15 / 400);
  v17 = a1[1862];
  a1[1863] = v16;
  if (v16 >= 8) {
    v18 = v16 - 15;
    if ((unsigned int)v16 < 0xF) {
      v18 = 0;
    }
    v19 = v18 + 7;
    v20 = v16 - (v19 & 0xFFFFFFF8) - 8;
    v17 = v12 + (v19 >> 3) + 1;
    a1[1863] = v20;
    a1[1862] = v17;
  }
  if (v17 >= 100) {
    a1[1862] = v17 - 100;
  }
  v21 = v15 / 50;
  if (v12 == 99) {
    v22 = 0;
  }
  else {
    v22 = v12 + 1;
  }
  if (v13 != v12 && a5 > v21) {
    v12 = v22;
  }
  v24 = v12 - (v12 == v13);
  if (v24 < 0) {
    v24 = 99;
  }
  v25 = a1 + 1901;
  v26 = (__int64*)&a1[16 * (__int64)v24 + 1901];
  v27 = *v26;
  v28 = v26[1];
  v29 = v26[3];
  *(_QWORD*)(v117 + 16) = v26[2];
  *(_QWORD*)(v117 + 24) = v29;
  *(_QWORD*)v117 = v27;
  *(_QWORD*)(v117 + 8) = v28;
  v30 = v26[4];
  v31 = v26[5];
  v33 = v26[6];
  v32 = v26[7];
  *(_QWORD*)(v117 + 48) = v33;
  *(_QWORD*)(v117 + 56) = v32;
  *(_QWORD*)(v117 + 32) = v30;
  *(_QWORD*)(v117 + 40) = v31;
  if ((_DWORD)v27 != 0) {
    v34 = *(float*)(v117 + 4);
    if (v24 == 99) {
      v35 = 0;
    }
    else {
      v35 = v24 + 1;
    }
    if (v35 == a1[1861]) {
      v36 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0x1.0000000000000p+0f;
      v40 = *(float*)(v117 + 4);
      if (v24 >= 1) {
        v41 = v24 - 1;
      }
      else {
        v41 = 99;
      }
      if (v41 == a1[1861]) {
      LABEL_107:
        v68 = v40 / v39;
        v69 = v34 + -0x1.99999a0000000p-3f;
        if (v68 <= v69) {
          v68 = v69;
        }
        if (v24 <= 94) {
          v70 = 5;
        }
        else {
          v70 = -95;
        }
        v71 = v24 - 99;
        if (v24 <= 98) {
          v71 = v24 + 1;
        }
        v72 = v70 + v24;
        *(float*)(v117 + 4) = v68;
        v73 = v71;
        v74 = v72;
        v75 = v72 + 1;
        if (v14 >= 16) {
          v76 = v75;
        }
        else {
          v73 = v24;
          v76 = v24 + 1;
        }
        if (v14 >= 16) {
          v77 = v74;
        }
        else {
          v77 = v24;
        }
        if (v14 >= 16) {
          v78 = v71;
        }
        else {
          v78 = v24;
        }
        v79 = (float*)&v25[16 * v73];
        v80 = (float*)&v25[16 * v77];
        v81 = a1[1861];
        v82 = v79[9];
        v83 = v80[5];
        v84 = a1 + 1906;
        v85 = 0x1.99999a0000000p-4f;
        if (v82 >= 0x1.99999a0000000p-4f) {
          v85 = v79[9];
        }
        if (v76 == 100) {
          v86 = 0;
        }
        else {
          v86 = v76;
        }
        v87 = v83 * v85;
        if (v86 == v81) {
          v88 = 0x1.0000000000000p+0f;
          v89 = 0x0.0p+0f;
        }
        else {
          v88 = 0x1.0000000000000p+0f;
          v89 = 0x0.0p+0f;
          do {
            if (v78 == 99) {
              v78 = 0;
            }
            else {
              ++v78;
            }
            if (v78 == v81) {
              break;
            }
            v90 = *(float*)&a1[16 * (__int64)v78 + 1910];
            if ((float)((float)(v87 + (float)((float)(v82 - v90) *
                                              -0x1.4000000000000p+3f)) /
                        v85) < v88) {
              v88 = (float)(v87 + (float)((float)(v82 - v90) *
                                          -0x1.4000000000000p+3f)) /
                    v85;
            }
            if ((float)((float)(v87 + (float)((float)(v82 - v90) *
                                              0x1.4000000000000p+3f)) /
                        v85) > v89) {
              v89 = (float)(v87 + (float)((float)(v82 - v90) *
                                          0x1.4000000000000p+3f)) /
                    v85;
            }
            if (v90 < 0x1.99999a0000000p-4f) {
              v90 = 0x1.99999a0000000p-4f;
            }
            v91 = *(float*)&v84[16 * (__int64)v86];
            v85 = v85 + v90;
            if (v86 == 99) {
              v86 = 0;
            }
            else {
              ++v86;
            }
            v87 = v87 + (float)(v90 * v91);
          } while (v86 != v81);
        }
        v92 = v87 / v85;
        *(float*)(v117 + 20) = v92;
        if (v92 >= v88) {
          v93 = v88;
        }
        else {
          v93 = v92;
        }
        if (v92 <= v89) {
          v94 = v89;
        }
        else {
          v94 = v92;
        }
        v95 = fmaxf(v93, 0x0.0p+0f);
        v96 = fminf(v94, 0x1.0000000000000p+0f);
        if (v14 <= 9) {
          v97 = a1[1859];
          v98 = v95;
          v99 = v96;
          if (v97 >= 2) {
            if (v97 >= 16) {
              v97 = 16;
            }
            v100 = v97 - 1;
            v101 = v97 - 2;
            v102 = (v97 - 1) & 3;
            if (v101 >= 3) {
              v99 = v96;
              v98 = v95;
              v103 = v100 & 0xFFFFFFFC;
              do {
                v56 = __OFSUB__(v24, 1);
                v104 = v24 - 1;
                if (v104 < 0 != v56) {
                  v104 = 99;
                }
                v105 = *(float*)&v84[16 * (__int64)v104];
                if (v98 >= v105) {
                  v98 = *(float*)&v84[16 * (__int64)v104];
                }
                if (v99 <= v105) {
                  v99 = *(float*)&v84[16 * (__int64)v104];
                }
                v56 = __OFSUB__(v104, 1);
                v106 = v104 - 1;
                if (v106 < 0 != v56) {
                  v106 = 99;
                }
                v107 = *(float*)&v84[16 * (__int64)v106];
                if (v98 >= v107) {
                  v98 = *(float*)&v84[16 * (__int64)v106];
                }
                if (v99 <= v107) {
                  v99 = *(float*)&v84[16 * (__int64)v106];
                }
                v56 = __OFSUB__(v106, 1);
                v108 = v106 - 1;
                if (v108 < 0 != v56) {
                  v108 = 99;
                }
                v109 = *(float*)&v84[16 * (__int64)v108];
                if (v98 >= v109) {
                  v98 = *(float*)&v84[16 * (__int64)v108];
                }
                if (v99 <= v109) {
                  v99 = *(float*)&v84[16 * (__int64)v108];
                }
                v56 = __OFSUB__(v108, 1);
                v24 = v108 - 1;
                if (v24 < 0 != v56) {
                  v24 = 99;
                }
                v110 = *(float*)&v84[16 * (__int64)v24];
                if (v98 >= v110) {
                  v98 = *(float*)&v84[16 * (__int64)v24];
                }
                if (v99 <= v110) {
                  v99 = *(float*)&v84[16 * (__int64)v24];
                }
                v103 -= 4;
              } while (v103 != 0);
            }
            else {
              v99 = v96;
              v98 = v95;
            }
            for (; v102 != 0; --v102) {
              v56 = __OFSUB__(v24--, 1);
              if (v24 < 0 != v56) {
                v24 = 99;
              }
              v111 = *(float*)&v84[16 * (__int64)v24];
              if (v98 >= v111) {
                v98 = *(float*)&v84[16 * (__int64)v24];
              }
              if (v99 <= v111) {
                v99 = *(float*)&v84[16 * (__int64)v24];
              }
            }
          }
          v112 = v98 + (float)(v82 * -0x1.99999a0000000p-4f);
          if (v112 < 0x0.0p+0f) {
            v112 = 0x0.0p+0f;
          }
          v113 = v112 - v95;
          v114 = v99 + (float)(v82 * 0x1.99999a0000000p-4f);
          if (v114 > 0x1.0000000000000p+0f) {
            v114 = 0x1.0000000000000p+0f;
          }
          v115 = (float)((float)v14 * -0x1.99999a0000000p-4f) +
                 0x1.0000000000000p+0f;
          v95 = v95 + (float)(v115 * v113);
          v96 = v96 + (float)(v115 * (float)(v114 - v96));
        }
        *(float*)(v117 + 24) = v95;
        *(float*)(v117 + 28) = v96;
        return result;
      }
    }
    else {
      v42 = (float*)&v25[16 * (__int64)v35];
      v43 = v42[1];
      v44 = *((_DWORD*)v42 + 8);
      if (v34 <= v43) {
        v45 = v43;
      }
      else {
        v45 = *(float*)(v117 + 4);
      }
      v40 = v34 + v43;
      if ((signed __int32)*(_DWORD*)(v117 + 32) > v44) {
        v44 = *(_DWORD*)(v117 + 32);
      }
      *(_DWORD*)(v117 + 32) = v44;
      if (v35 == 99) {
        v46 = 0;
      }
      else {
        v46 = v35 + 1;
      }
      if (v46 == a1[1861]) {
        v36 = 0;
        v37 = 0;
        v38 = 1;
        v39 = 0x1.0000000000000p+1f;
        v34 = v45;
        if (v24 >= 1) {
          v41 = v24 - 1;
        }
        else {
          v41 = 99;
        }
        if (v41 == a1[1861]) {
          goto LABEL_107;
        }
      }
      else {
        v47 = (float*)&v25[16 * (__int64)v46];
        v48 = v47[1];
        v49 = *((_DWORD*)v47 + 8);
        v40 = v40 + v48;
        if (v45 <= v48) {
          v34 = v48;
        }
        else {
          v34 = v45;
        }
        if (v44 > v49) {
          v49 = v44;
        }
        *(_DWORD*)(v117 + 32) = v49;
        if (v46 == 99) {
          v50 = 0;
        }
        else {
          v50 = v46 + 1;
        }
        if (v50 == a1[1861]) {
          v36 = 0;
          v38 = 0;
          v37 = 1;
          v39 = 0x1.8000000000000p+1f;
          if (v24 >= 1) {
            v41 = v24 - 1;
          }
          else {
            v41 = 99;
          }
          if (v41 == a1[1861]) {
            goto LABEL_107;
          }
        }
        else {
          v37 = 0;
          v38 = 0;
          v51 = (float*)&v25[16 * (__int64)v50];
          v52 = v51[1];
          v53 = *((_DWORD*)v51 + 8);
          v40 = v40 + v52;
          if (v34 <= v52) {
            v34 = v52;
          }
          v39 = 0x1.0000000000000p+2f;
          if (v49 <= v53) {
            v49 = v53;
          }
          *(_DWORD*)(v117 + 32) = v49;
          v36 = 1;
          if (v24 >= 1) {
            v41 = v24 - 1;
          }
          else {
            v41 = 99;
          }
          if (v41 == a1[1861]) {
            goto LABEL_107;
          }
        }
      }
    }
    v54 = *(_DWORD*)(v117 + 32);
    v55 = a1 + 1909;
    if (v54 <= (signed __int32)a1[16 * (__int64)v41 + 1909]) {
      v54 = a1[16 * (__int64)v41 + 1909];
    }
    v56 = __OFSUB__(v41, 1);
    v57 = v41 - 1;
    *(_DWORD*)(v117 + 32) = v54;
    if (v57 < 0 != v56) {
      v58 = 99;
    }
    else {
      v58 = v57;
    }
    if (v58 != a1[1861]) {
      v59 = *(_DWORD*)(v117 + 32);
      if (v59 <= (signed __int32)v55[16 * (__int64)v58]) {
        v59 = v55[16 * (__int64)v58];
      }
      v56 = __OFSUB__(v58, 1);
      v60 = v58 - 1;
      *(_DWORD*)(v117 + 32) = v59;
      if (v60 < 0 != v56) {
        v60 = 99;
      }
      if (v60 != a1[1861]) {
        v61 = *(_DWORD*)(v117 + 32);
        if (v61 <= (signed __int32)v55[16 * (__int64)v60]) {
          v61 = v55[16 * (__int64)v60];
        }
        *(_DWORD*)(v117 + 32) = v61;
        if ((v36 & 1) == 0) {
          v62 = v60 - 1;
          if (v60 < 1) {
            v62 = 99;
          }
          if (v62 != a1[1861]) {
            v63 = *(_DWORD*)(v117 + 32);
            if (v63 <= (signed __int32)v55[16 * (__int64)v62]) {
              v63 = v55[16 * (__int64)v62];
            }
            *(_DWORD*)(v117 + 32) = v63;
            if ((v37 & 1) == 0) {
              v64 = v62 - 1;
              if (v62 < 1) {
                v64 = 99;
              }
              if (v64 != a1[1861]) {
                v65 = *(_DWORD*)(v117 + 32);
                if (v65 <= (signed __int32)v55[16 * (__int64)v64]) {
                  v65 = v55[16 * (__int64)v64];
                }
                *(_DWORD*)(v117 + 32) = v65;
                if ((v38 & 1) == 0) {
                  v66 = v64 - 1;
                  if (v64 < 1) {
                    v66 = 99;
                  }
                  if (v66 != a1[1861]) {
                    v67 = v55[16 * (__int64)v66];
                    if ((signed __int32)*(_DWORD*)(v117 + 32) > v67) {
                      v67 = *(_DWORD*)(v117 + 32);
                    }
                    *(_DWORD*)(v117 + 32) = v67;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_107;
  }
  return result;
}

unsigned __int64

opus_31b6e0(void (*a1)(__int64, void*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
            __int64 a2, int* a3, _DWORD* a4, int a5, unsigned int a6,
            unsigned int a7, unsigned int a8, int a9, int a10)
{
  unsigned int v12;
  int v13;
  unsigned __int64 result;
  __int64 v19;
  void* v20;
  unsigned __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  _DWORD* v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  _DWORD* v31;
  __int64 v32;
  int* v33;
  unsigned __int64 v34;
  int v35;
  int v36;
  unsigned __int64 v37;
  int v38;
  int v39;
  unsigned __int64 v40;
  int v41;
  int v42;
  unsigned __int64 v43;
  unsigned int v44;
  void* v45;
  void* v46;
  __int64 v47;
  __int64 v48;
  int* v49;
  int* v50;
  __int64 v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int* v60;
  _DWORD* v61;
  int v62;
  __int64 v63;
  int* v64;
  int* v65;
  __int64 v66;
  int v67;
  int v68;
  int v69;
  int v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  int v73;
  int v74;
  int v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  int* v78;
  int v79;
  int v80;
  unsigned __int64 v81;
  int v82;
  unsigned __int64 v83;
  struct {
    __int64 v84;
    char gap8_[4];
    int v85;
  } v84_;

  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (a5 == 0) {
    return 0;
  }
  v12 = a6;
  v13 = a5;
  v84_.v85 = a10;
  if (a10 == 48000) {
    v13 = 2 * a5;
    v12 = 2 * a6;
  }
  else if (a10 == 16000) {
    v13 = 2 * a5 / 3;
    v12 = (int)(2 * a6) / 3;
  }
  v19 = 4LL * v13;
  v20 = (void*)((char*)&v84_.v84 - ((v19 + 15) & 0xFFFFFFFFFFFFFFF0LL));
  v84_.v84 = v19;
  memset_plt(v20, nullptr, v19, (unsigned __int64)a4),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  a1(a2, v20, (unsigned int)v13, v12, a7, a8, (unsigned int)a9),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (a8 == -2) {
    v22 = 4096 / a9;
    if (v13 < 1) {
      goto LABEL_22;
    }
  }
  else {
    if ((int)a8 <= -1) {
      v22 = 4096;
    }
    else {
      v22 = 2048;
    }
    if (v13 < 1) {
      goto LABEL_22;
    }
  }
  v23 = v13 & 7;
  if ((unsigned int)v13 < 8) {
    v24 = 0;
    if ((v13 & 7) == 0) {
      goto LABEL_22;
    }
    goto LABEL_20;
  }
  v25 = (_DWORD*)((char*)v20 + 16);
  v26 = 0;
  do {
    v26 -= 8;
    v27 = *(v25 - 3) * v22;
    *(v25 - 4) *= v22;
    *(v25 - 3) = v27;
    v28 = *(v25 - 1) * v22;
    *(v25 - 2) *= v22;
    *(v25 - 1) = v28;
    v29 = v25[1] * v22;
    *v25 *= v22;
    v25[1] = v29;
    v30 = v25[3] * v22;
    v25[2] *= v22;
    v25[3] = v30;
    v25 += 8;
  } while (-(__int64)(v13 & 0x7FFFFFF8) != v26);
  v24 = -v26;
  if ((v13 & 7) != 0) {
  LABEL_20:
    v31 = (_DWORD*)((char*)v20 + 4 * v24);
    do {
      --v23;
      *v31++ *= v22;
    } while (v23 != 0);
  }
LABEL_22:
  if (v84_.v85 == 48000) {
    if (v13 >= 2) {
      v32 = (unsigned int)v13 >> 1;
      v33 = (int*)((char*)v20 + 4);
      v34 = 0;
      do {
        v35 = *(v33 - 1);
        v36 = a4[1];
        --v32;
        v37 = (unsigned __int64)(19904LL * (v35 - *a4)) >> 15;
        v38 = *a4 + v37;
        v39 = *v33;
        v33 += 2;
        v40 = (unsigned __int64)(4936LL * (v39 - v36)) >> 15;
        *a4 = v35 + v37;
        a4[1] = v39 + v40;
        v41 = a4[2];
        v42 = v38 + v36 + v40;
        v43 = (unsigned __int64)(4936LL * -(v39 + v41)) >> 15;
        v34 += (v38 + v41 + (int)v43) * (__int64)(v38 + v41 + (int)v43);
        a4[2] = v43 - v39;
        *a3++ = v42 >> 1;
      } while (v32 != 0);
      return HIDWORD(v34);
    }
    return 0;
  }
  if (v84_.v85 != 16000) {
    if (v84_.v85 == 24000) {
      memcpy_plt(a3, v20, v84_.v84),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    }
    return 0;
  }
  v44 = 3 * v13;
  v45 = v20;
  v46 = (void*)((char*)&v84_.v84 - ((12LL * v13 + 15) & 0xFFFFFFFFFFFFFFF0LL));
  memset_plt(v46, nullptr, 12 * v13, v21),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v13 < 1) {
    return 0;
  }
  v47 = v13 & 7;
  if ((unsigned int)v13 >= 8) {
    v49 = (int*)((char*)v46 + 48);
    v50 = (int*)((char*)v45 + 16);
    v51 = 0;
    do {
      v52 = *(v50 - 4);
      v53 = *(v50 - 3);
      v51 -= 8;
      *(v49 - 12) = v52;
      *(v49 - 11) = v52;
      *(v49 - 10) = v52;
      *(v49 - 9) = v53;
      *(v49 - 8) = v53;
      *(v49 - 7) = v53;
      v54 = *(v50 - 2);
      v55 = *(v50 - 1);
      *(v49 - 6) = v54;
      *(v49 - 5) = v54;
      *(v49 - 4) = v54;
      *(v49 - 3) = v55;
      *(v49 - 2) = v55;
      *(v49 - 1) = v55;
      v56 = *v50;
      v57 = v50[1];
      *v49 = *v50;
      v49[1] = v56;
      v49[2] = v56;
      v49[3] = v57;
      v49[4] = v57;
      v49[5] = v57;
      v58 = v50[2];
      v59 = v50[3];
      v50 += 8;
      v49[6] = v58;
      v49[7] = v58;
      v49[8] = v58;
      v49[9] = v59;
      v49[10] = v59;
      v49[11] = v59;
      v49 += 24;
    } while (-(__int64)(v13 & 0x7FFFFFF8) != v51);
    v48 = -v51;
  }
  else {
    v48 = 0;
  }
  if ((v13 & 7) != 0) {
    v60 = (int*)((char*)v45 + 4 * v48);
    v61 = (_DWORD*)((char*)v46 + 12 * v48 + 4);
    do {
      v62 = *v60++;
      --v47;
      *(v61 - 1) = v62;
      *v61 = v62;
      v61[1] = v62;
      v61 += 3;
    } while (v47 != 0);
  }
  if (v44 >> 1 == 1) {
    v63 = 0;
  }
  else {
    v64 = (int*)((char*)v46 + 8);
    v65 = a3 + 1;
    v66 = 0;
    do {
      v67 = *(v64 - 2);
      v68 = *(v64 - 1);
      v69 = a4[1];
      v66 -= 2;
      v70 = v69 + *a4;
      v71 = (unsigned __int64)(19904LL * (v67 - *a4)) >> 15;
      v72 = (unsigned __int64)(4936LL * (v68 - v69)) >> 15;
      *a4 = v67 + v71;
      a4[1] = v68 + v72;
      a4[2] = ((unsigned __int64)(4936LL * -(v68 + a4[2])) >> 15) - v68;
      *(v65 - 1) = (v70 + (int)v71 + (int)v72) >> 1;
      v73 = *v64;
      v74 = v64[1];
      v64 += 4;
      LODWORD(v72) = a4[1];
      v75 = v72 + *a4;
      v76 = (unsigned __int64)(19904LL * (v73 - *a4)) >> 15;
      v77 = (unsigned __int64)(4936LL * (v74 - (int)v72)) >> 15;
      *a4 = v73 + v76;
      a4[1] = v74 + v77;
      a4[2] = ((unsigned __int64)(4936LL * -(v74 + a4[2])) >> 15) - v74;
      *v65 = (v75 + (int)v76 + (int)v77) >> 1;
      v65 += 2;
    } while (-(__int64)((v44 >> 1) & 0x7FFFFFFE) != v66);
    v63 = -v66;
  }
  result = 0;
  if ((v44 & 2) != 0) {
    v78 = (int*)((char*)v46 + 8 * v63);
    v79 = a4[1];
    v80 = *v78;
    LODWORD(v78) = v78[1];
    v81 = (unsigned __int64)(19904LL * (v80 - *a4)) >> 15;
    v82 = v79 + *a4 + v81;
    v83 = (unsigned __int64)(4936LL * ((int)v78 - v79)) >> 15;
    *a4 = v80 + v81;
    a4[1] = (_DWORD)v78 + v83;
    a4[2] =
        ((unsigned __int64)(4936LL * (-a4[2] - (int)v78)) >> 15) - (_DWORD)v78;
    a3[v63] = (v82 + (int)v83) >> 1;
  }
  return result;
}

__int64 opus_31bc20(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  float* v7;
  __int64 v8;
  int v9;
  char* v10;
  __int64 v11;
  float v12;
  __int64 v13;
  __int64 v14;
  float* v15;
  char* v16;
  float v17;
  char* v18;
  float v19;
  int v20;
  char* v21;
  float v22;
  int v23;
  char* v24;
  float v25;
  int v26;
  char* v27;
  float v28;
  int v29;
  char* v30;
  float v31;
  int v32;
  char* v33;
  float v34;
  float v35;
  float v36;
  float* v37;
  __int64 v38;
  __int64 v39;
  int v40;
  float v41;
  __int64 v42;
  __int64 v43;
  float* v44;
  __int64 v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float* v50;
  __int64 v51;
  float* v52;
  float v53;
  float v54;
  bool v55;
  float v56;
  float v57;
  signed int v58;
  float v59;
  float v60;
  float v61;
  bool v62;
  float v63;
  float v64;
  signed int v65;
  float v66;
  float v67;
  bool v68;
  float v69;
  float v70;
  signed int v71;
  float v72;
  float* v73;
  float v74;
  float v75;
  bool v76;
  float v77;
  float v78;
  signed int v79;
  float v80;
  float v81;
  bool v82;
  float v83;
  float v84;
  signed int v85;
  float v86;
  float v87;
  bool v88;
  float v89;
  float v90;
  signed int v91;
  float v92;

  v3 = *(unsigned int*)(result + 20);
  if ((int)v3 < 1) {
    return result;
  }
  v4 = *(_DWORD*)(result + 16);
  v5 = v3 & 7;
  if ((unsigned int)v3 < 8) {
    v6 = 0;
    if ((v3 & 7) == 0) {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v7 = (float*)(a2 + 16);
  v8 = 7;
  do {
    *(v7 - 4) = (float)*(char*)(*(_QWORD*)result + v8 - 7);
    *(v7 - 3) = (float)*(char*)(*(_QWORD*)result + v8 - 6);
    *(v7 - 2) = (float)*(char*)(*(_QWORD*)result + v8 - 5);
    *(v7 - 1) = (float)*(char*)(*(_QWORD*)result + v8 - 4);
    *v7 = (float)*(char*)(*(_QWORD*)result + v8 - 3);
    v7[1] = (float)*(char*)(*(_QWORD*)result + v8 - 2);
    v7[2] = (float)*(char*)(*(_QWORD*)result + v8 - 1);
    v9 = *(char*)(*(_QWORD*)result + v8);
    v8 += 8;
    v7[3] = (float)v9;
    v7 += 8;
  } while (v8 - (v3 & 0x7FFFFFF8) != 7);
  v6 = v8 - 7;
  if ((v3 & 7) != 0) {
    do {
    LABEL_8:
      --v5;
      *(float*)(a2 + 4 * v6) = (float)*(char*)(*(_QWORD*)result + v6);
      ++v6;
    } while (v5 != 0);
  }
LABEL_9:
  if (v4 >= 1) {
    v10 = *(char**)(result + 8);
    v11 = 0;
    while (1) {
      v12 = *(float*)(a2 + 4 * v11);
      if ((unsigned int)v4 >= 8) {
        break;
      }
      v13 = 0;
      if ((v4 & 7) != 0) {
        goto LABEL_18;
      }
    LABEL_11:
      ++v11;
      ++v10;
      if (v11 == v3) {
        goto LABEL_21;
      }
    }
    v14 = 0;
    v15 = (float*)(a3 + 16);
    v16 = v10;
    do {
      v14 -= 8;
      v17 = (float)*v16;
      v18 = &v16[v3];
      v16 += 8 * v3;
      v19 = v12 + (float)(v17 * *(v15 - 4));
      *(float*)(a2 + 4 * v11) = v19;
      v20 = *v18;
      v21 = &v18[v3];
      v22 = v19 + (float)((float)v20 * *(v15 - 3));
      *(float*)(a2 + 4 * v11) = v22;
      v23 = *v21;
      v24 = &v21[v3];
      v25 = v22 + (float)((float)v23 * *(v15 - 2));
      *(float*)(a2 + 4 * v11) = v25;
      v26 = *v24;
      v27 = &v24[v3];
      v28 = v25 + (float)((float)v26 * *(v15 - 1));
      *(float*)(a2 + 4 * v11) = v28;
      v29 = *v27;
      v30 = &v27[v3];
      v31 = v28 + (float)((float)v29 * *v15);
      *(float*)(a2 + 4 * v11) = v31;
      v32 = *v30;
      v33 = &v30[v3];
      v34 = v31 + (float)((float)v32 * v15[1]);
      *(float*)(a2 + 4 * v11) = v34;
      v35 = v34 + (float)((float)*v33 * v15[2]);
      *(float*)(a2 + 4 * v11) = v35;
      v36 = v15[3];
      v15 += 8;
      v12 = v35 + (float)((float)v33[v3] * v36);
      *(float*)(a2 + 4 * v11) = v12;
    } while (-(__int64)(v4 & 0x7FFFFFF8) != v14);
    v13 = -v14;
    if ((v4 & 7) == 0) {
      goto LABEL_11;
    }
  LABEL_18:
    v37 = (float*)(a3 + 4 * v13);
    v38 = v3 * v13;
    v39 = v4 & 7;
    do {
      v40 = v10[v38];
      v41 = *v37++;
      v38 += v3;
      --v39;
      v12 = v12 + (float)((float)v40 * v41);
      *(float*)(a2 + 4 * v11) = v12;
    } while (v39 != 0);
    goto LABEL_11;
  }
LABEL_21:
  v42 = v3 & 7;
  if ((unsigned int)v3 < 8) {
    v43 = 0;
    if ((v3 & 7) == 0) {
      goto LABEL_29;
    }
    goto LABEL_27;
  }
  v44 = (float*)(a2 + 16);
  v45 = 0;
  do {
    v45 -= 8;
    v46 = *(v44 - 3) * 0.0078125f;
    *(v44 - 4) = *(v44 - 4) * 0.0078125f;
    *(v44 - 3) = v46;
    v47 = *(v44 - 1) * 0.0078125f;
    *(v44 - 2) = *(v44 - 2) * 0.0078125f;
    *(v44 - 1) = v47;
    v48 = v44[1] * 0.0078125f;
    *v44 = *v44 * 0.0078125f;
    v44[1] = v48;
    v49 = v44[3] * 0.0078125f;
    v44[2] = v44[2] * 0.0078125f;
    v44[3] = v49;
    v44 += 8;
  } while (-(v3 & 0x7FFFFFF8) != v45);
  v43 = -v45;
  if ((v3 & 7) != 0) {
  LABEL_27:
    v50 = (float*)(a2 + 4 * v43);
    do {
      --v42;
      *v50 = *v50 * 0.0078125f;
      ++v50;
    } while (v42 != 0);
  }
LABEL_29:
  v51 = v3 - 1;
  if (*(_DWORD*)(result + 24) != 0) {
    if (v3 != 1) {
      v52 = (float*)(a2 + 4);
      v51 = 0;
      do {
        v53 = 1.0f;
        v54 = *(v52 - 1) * 0.5f;
        if (v54 < 8.0f) {
          v53 = -1.0f;
          if (v54 > -8.0f) {
            v55 = v54 < 0.0f;
            if (v54 < 0.0f) {
              v54 = -v54;
            }
            v56 = (float)(v54 * 25.0f) + 0.5f;
            v57 = floorf(v56);
            v58 = vcvtms_s32_f32(v56);
            if (v55) {
              v53 = -(
                  float)(SdkData_c1f948[v58] +
                         (float)((float)((float)(v54 + (float)((float)(int)v57 *
                                                               -0.04f)) *
                                         (float)(1.0f -
                                                 (float)(SdkData_c1f948[v58] *
                                                         SdkData_c1f948
                                                             [v58]))) *
                                 (float)(1.0f -
                                         (float)(SdkData_c1f948[v58] *
                                                 (float)(v54 +
                                                         (float)((float)(int)
                                                                     v57 *
                                                                 -0.04f))))));
            }
            else {
              v53 = SdkData_c1f948[v58] +
                    (float)((float)((float)(v54 +
                                            (float)((float)(int)v57 * -0.04f)) *
                                    (float)(1.0f -
                                            (float)(SdkData_c1f948[v58] *
                                                    SdkData_c1f948[v58]))) *
                            (float)(1.0f -
                                    (float)(SdkData_c1f948[v58] *
                                            (float)(v54 +
                                                    (float)((float)(int)v57 *
                                                            -0.04f)))));
            }
          }
        }
        v59 = (float)(v53 * 0.5f) + 0.5f;
        v60 = 1.0f;
        *(v52 - 1) = v59;
        v61 = *v52 * 0.5f;
        if (v61 < 8.0f) {
          v60 = -1.0f;
          if (v61 > -8.0f) {
            v62 = v61 < 0.0f;
            if (v61 < 0.0f) {
              v61 = -v61;
            }
            v63 = (float)(v61 * 25.0f) + 0.5f;
            v64 = floorf(v63);
            v65 = vcvtms_s32_f32(v63);
            if (v62) {
              v60 = -(
                  float)(SdkData_c1f948[v65] +
                         (float)((float)((float)(v61 + (float)((float)(int)v64 *
                                                               -0.04f)) *
                                         (float)(1.0f -
                                                 (float)(SdkData_c1f948[v65] *
                                                         SdkData_c1f948
                                                             [v65]))) *
                                 (float)(1.0f -
                                         (float)(SdkData_c1f948[v65] *
                                                 (float)(v61 +
                                                         (float)((float)(int)
                                                                     v64 *
                                                                 -0.04f))))));
            }
            else {
              v60 = SdkData_c1f948[v65] +
                    (float)((float)((float)(v61 +
                                            (float)((float)(int)v64 * -0.04f)) *
                                    (float)(1.0f -
                                            (float)(SdkData_c1f948[v65] *
                                                    SdkData_c1f948[v65]))) *
                            (float)(1.0f -
                                    (float)(SdkData_c1f948[v65] *
                                            (float)(v61 +
                                                    (float)((float)(int)v64 *
                                                            -0.04f)))));
            }
          }
        }
        v51 += 2;
        *v52 = (float)(v60 * 0.5f) + 0.5f;
        v52 += 2;
      } while ((v3 & 0x7FFFFFFE) != v51);
    }
    if ((v3 & 1) != 0) {
      v66 = 1.0f;
      v67 = *(float*)(a2 + 4 * v51) * 0.5f;
      if (v67 < 8.0f) {
        v66 = -1.0f;
        if (v67 > -8.0f) {
          v68 = v67 < 0.0f;
          if (v67 < 0.0f) {
            v67 = -v67;
          }
          v69 = (float)(v67 * 25.0f) + 0.5f;
          v70 = floorf(v69);
          v71 = vcvtms_s32_f32(v69);
          v72 =
              SdkData_c1f948[v71] +
              (float)((float)((float)(v67 + (float)((float)(int)v70 * -0.04f)) *
                              (float)(1.0f - (float)(SdkData_c1f948[v71] *
                                                     SdkData_c1f948[v71]))) *
                      (float)(1.0f -
                              (float)(SdkData_c1f948[v71] *
                                      (float)(v67 + (float)((float)(int)v70 *
                                                            -0.04f)))));
          if (v68) {
            v66 = -v72;
          }
          else {
            v66 = v72;
          }
        }
      }
      *(float*)(a2 + 4 * v51) = (float)(v66 * 0.5f) + 0.5f;
    }
  }
  else {
    if (v3 != 1) {
      v73 = (float*)(a2 + 4);
      v51 = 0;
      do {
        v74 = *(v73 - 1);
        v75 = 1.0f;
        if (v74 < 8.0f) {
          v75 = -1.0f;
          if (v74 > -8.0f) {
            v76 = v74 < 0.0f;
            if (v74 < 0.0f) {
              v74 = -v74;
            }
            v77 = (float)(v74 * 25.0f) + 0.5f;
            v78 = floorf(v77);
            v79 = vcvtms_s32_f32(v77);
            if (v76) {
              v75 = -(
                  float)(SdkData_c1f948[v79] +
                         (float)((float)((float)(v74 + (float)((float)(int)v78 *
                                                               -0.04f)) *
                                         (float)(1.0f -
                                                 (float)(SdkData_c1f948[v79] *
                                                         SdkData_c1f948
                                                             [v79]))) *
                                 (float)(1.0f -
                                         (float)(SdkData_c1f948[v79] *
                                                 (float)(v74 +
                                                         (float)((float)(int)
                                                                     v78 *
                                                                 -0.04f))))));
            }
            else {
              v75 = SdkData_c1f948[v79] +
                    (float)((float)((float)(v74 +
                                            (float)((float)(int)v78 * -0.04f)) *
                                    (float)(1.0f -
                                            (float)(SdkData_c1f948[v79] *
                                                    SdkData_c1f948[v79]))) *
                            (float)(1.0f -
                                    (float)(SdkData_c1f948[v79] *
                                            (float)(v74 +
                                                    (float)((float)(int)v78 *
                                                            -0.04f)))));
            }
          }
        }
        v80 = *v73;
        *(v73 - 1) = v75;
        v81 = 1.0f;
        if (v80 < 8.0f) {
          v81 = -1.0f;
          if (v80 > -8.0f) {
            v82 = v80 < 0.0f;
            if (v80 < 0.0f) {
              v80 = -v80;
            }
            v83 = (float)(v80 * 25.0f) + 0.5f;
            v84 = floorf(v83);
            v85 = vcvtms_s32_f32(v83);
            if (v82) {
              v81 = -(
                  float)(SdkData_c1f948[v85] +
                         (float)((float)((float)(v80 + (float)((float)(int)v84 *
                                                               -0.04f)) *
                                         (float)(1.0f -
                                                 (float)(SdkData_c1f948[v85] *
                                                         SdkData_c1f948
                                                             [v85]))) *
                                 (float)(1.0f -
                                         (float)(SdkData_c1f948[v85] *
                                                 (float)(v80 +
                                                         (float)((float)(int)
                                                                     v84 *
                                                                 -0.04f))))));
            }
            else {
              v81 = SdkData_c1f948[v85] +
                    (float)((float)((float)(v80 +
                                            (float)((float)(int)v84 * -0.04f)) *
                                    (float)(1.0f -
                                            (float)(SdkData_c1f948[v85] *
                                                    SdkData_c1f948[v85]))) *
                            (float)(1.0f -
                                    (float)(SdkData_c1f948[v85] *
                                            (float)(v80 +
                                                    (float)((float)(int)v84 *
                                                            -0.04f)))));
            }
          }
        }
        *v73 = v81;
        v73 += 2;
        v51 += 2;
      } while ((v3 & 0x7FFFFFFE) != v51);
    }
    if ((v3 & 1) != 0) {
      v86 = *(float*)(a2 + 4 * v51);
      v87 = 1.0f;
      if (v86 < 8.0f) {
        v87 = -1.0f;
        if (v86 > -8.0f) {
          v88 = v86 < 0.0f;
          if (v86 < 0.0f) {
            v86 = -v86;
          }
          v89 = (float)(v86 * 25.0f) + 0.5f;
          v90 = floorf(v89);
          v91 = vcvtms_s32_f32(v89);
          v92 =
              SdkData_c1f948[v91] +
              (float)((float)((float)(v86 + (float)((float)(int)v90 * -0.04f)) *
                              (float)(1.0f - (float)(SdkData_c1f948[v91] *
                                                     SdkData_c1f948[v91]))) *
                      (float)(1.0f -
                              (float)(SdkData_c1f948[v91] *
                                      (float)(v86 + (float)((float)(int)v90 *
                                                            -0.04f)))));
          if (v88) {
            v87 = -v92;
          }
          else {
            v87 = v92;
          }
        }
      }
      *(float*)(a2 + 4 * v51) = v87;
    }
  }
  return result;
}

__int64* opus_31c2e0(__int64* result, __int64 a2, __int64 a3)
{
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  char* v11;
  __int64 v12;
  float* v13;
  float v14;
  int v15;
  float v16;
  float v17;
  int v18;
  float v19;
  float v20;
  int v21;
  float v22;
  int v23;
  __int64 v24;
  char* v25;
  float* v26;
  int v27;
  char* v28;
  __int64 v29;
  char* v30;
  float v31;
  __int64 v32;
  __int64 v33;
  float* v34;
  char* v35;
  float v36;
  char* v37;
  int v38;
  char* v39;
  float v40;
  float v41;
  int v42;
  char* v43;
  float v44;
  float v45;
  int v46;
  char* v47;
  float v48;
  float v49;
  int v50;
  char* v51;
  float v52;
  float v53;
  float v54;
  float* v55;
  __int64 v56;
  __int64 v57;
  int v58;
  float v59;
  char* v60;
  __int64 v61;
  char* v62;
  float v63;
  __int64 v64;
  __int64 v65;
  float* v66;
  char* v67;
  float v68;
  char* v69;
  int v70;
  char* v71;
  float v72;
  float v73;
  int v74;
  char* v75;
  float v76;
  float v77;
  int v78;
  char* v79;
  float v80;
  float v81;
  int v82;
  char* v83;
  float v84;
  float v85;
  float v86;
  float* v87;
  __int64 v88;
  __int64 v89;
  int v90;
  float v91;
  unsigned __int64 v92;
  float* v93;
  float v94;
  float v95;
  bool v96;
  float v97;
  float v98;
  unsigned int v99;
  float v100;
  float v101;
  float v102;
  bool v103;
  float v104;
  float v105;
  unsigned int v106;
  float v107;
  float v108;
  bool v109;
  float v110;
  float v111;
  float v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  char* v117;
  float* v118;
  float v119;
  int v120;
  float v121;
  float v122;
  int v123;
  float v124;
  float v125;
  int v126;
  float v127;
  int v128;
  float* v129;
  char* v130;
  int v131;
  char* v132;
  __int64 v133;
  float v134;
  __int64 v135;
  __int64 v136;
  float* v137;
  char* v138;
  float v139;
  char* v140;
  int v141;
  char* v142;
  float v143;
  float v144;
  int v145;
  char* v146;
  float v147;
  float v148;
  int v149;
  char* v150;
  float v151;
  float v152;
  int v153;
  char* v154;
  float v155;
  float v156;
  float v157;
  float* v158;
  __int64 v159;
  __int64 v160;
  int v161;
  float v162;
  char* v163;
  __int64 v164;
  float v165;
  __int64 v166;
  __int64 v167;
  float* v168;
  char* v169;
  float v170;
  char* v171;
  int v172;
  char* v173;
  float v174;
  float v175;
  int v176;
  char* v177;
  float v178;
  float v179;
  int v180;
  char* v181;
  float v182;
  float v183;
  int v184;
  char* v185;
  float v186;
  float v187;
  float v188;
  float* v189;
  __int64 v190;
  __int64 v191;
  int v192;
  float v193;
  unsigned __int64 v194;
  float* v195;
  float v196;
  float v197;
  bool v198;
  float v199;
  float v200;
  unsigned int v201;
  float v202;
  float v203;
  float v204;
  bool v205;
  float v206;
  float v207;
  unsigned int v208;
  float v209;
  float v210;
  bool v211;
  float v212;
  float v213;
  float v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  char* v220;
  float* v221;
  float v222;
  int v223;
  float v224;
  float v225;
  int v226;
  float v227;
  float v228;
  int v229;
  float v230;
  int v231;
  float* v232;
  char* v233;
  int v234;
  __int64 v235;
  __int64 v236;
  float* v237;
  __int64 v238;
  float* v239;
  float* v240;
  float v241;
  float v242;
  float v243;
  float v244;
  float v245;
  float v246;
  float v247;
  float v248;
  float v249;
  float v250;
  float v251;
  float* v252;
  float* v253;
  float* v254;
  float v255;
  float v256;
  float v257;
  __int64 v258;
  char* v259;
  __int64 v260;
  float v261;
  __int64 v262;
  __int64 v263;
  float* v264;
  char* v265;
  float v266;
  char* v267;
  int v268;
  char* v269;
  float v270;
  float v271;
  int v272;
  char* v273;
  float v274;
  float v275;
  int v276;
  char* v277;
  float v278;
  float v279;
  int v280;
  char* v281;
  float v282;
  float v283;
  float v284;
  float* v285;
  __int64 v286;
  __int64 v287;
  int v288;
  float v289;
  char* v290;
  __int64 v291;
  float v292;
  __int64 v293;
  __int64 v294;
  float* v295;
  char* v296;
  float v297;
  char* v298;
  int v299;
  char* v300;
  float v301;
  float v302;
  int v303;
  char* v304;
  float v305;
  float v306;
  int v307;
  char* v308;
  float v309;
  float v310;
  int v311;
  char* v312;
  float v313;
  float v314;
  float v315;
  float* v316;
  __int64 v317;
  __int64 v318;
  int v319;
  float v320;
  __int64 v321;
  float* v322;
  float* v323;
  float* v324;
  float v325;
  float v326;
  float v327;
  float v328;
  float v329;
  float v330;
  bool v331;
  float v332;
  float v333;
  unsigned int v334;
  float v335;
  float v336;
  float v337;
  float v338;
  float v339;
  bool v340;
  float v341;
  float v342;
  unsigned int v343;
  float v344;
  float v345;
  float v346;
  float v347;
  bool v348;
  float v349;
  float v350;
  float v351;
  float v352;
  _QWORD v353[2];
  _QWORD v354[14];
  _QWORD v355[2];
  _QWORD v356[14];
  _QWORD v357[2];
  _QWORD v358[16];
  _BYTE v359[112];

  v5 = *((unsigned int*)result + 7);
  if ((int)v5 < 1) {
    return result;
  }
  v6 = *((_DWORD*)result + 6);
  v7 = *result;
  v8 = v5 & 7;
  v10 = 0;
  memset(v358, 0, 112);
  v357[0] = 0;
  v357[1] = 0;
  if ((unsigned int)v5 >= 8) {
    v11 = (char*)(v7 + 3);
    v12 = 0;
    v13 = (float*)v358;
    do {
      v12 -= 8;
      v14 = (float)*(v11 - 2);
      v15 = *(v11 - 1);
      *(v13 - 4) = (float)*(v11 - 3);
      *(v13 - 3) = v14;
      v16 = (float)v15;
      v17 = (float)*v11;
      v18 = v11[1];
      *(v13 - 2) = v16;
      *(v13 - 1) = v17;
      v19 = (float)v18;
      v20 = (float)v11[2];
      v21 = v11[3];
      *v13 = v19;
      v13[1] = v20;
      v22 = (float)v21;
      v23 = v11[4];
      v11 += 8;
      v13[2] = v22;
      v13[3] = (float)v23;
      v13 += 8;
    } while (-(v5 & 0x7FFFFFF8) != v12);
    v10 = -v12;
  }
  v24 = (unsigned int)(3 * v5);
  if ((v5 & 7) != 0) {
    v25 = (char*)(v7 + v10);
    v26 = (float*)v357 + v10;
    do {
      v27 = *v25++;
      --v8;
      *v26++ = (float)v27;
    } while (v8 != 0);
  }
  v28 = (char*)result[1];
  memset(v356, 0, sizeof(v356));
  v355[0] = 0;
  v355[1] = 0;
  if (v6 >= 1) {
    v29 = 0;
    v30 = v28;
    while (1) {
      v31 = *((float*)v357 + v29);
      if ((unsigned int)v6 >= 8) {
        break;
      }
      v32 = 0;
      if ((v6 & 7) != 0) {
        goto LABEL_18;
      }
    LABEL_11:
      *((float*)v357 + v29++) = v31;
      ++v30;
      if (v29 == v5) {
        goto LABEL_21;
      }
    }
    v33 = 0;
    v34 = (float*)(a3 + 16);
    v35 = v30;
    do {
      v33 -= 8;
      v36 = (float)*v35;
      v37 = &v35[v24];
      v35 += 8 * (unsigned int)(3 * v5);
      v38 = *v37;
      v39 = &v37[v24];
      v40 = v31 + (float)(v36 * *(v34 - 4));
      v41 = (float)v38;
      v42 = *v39;
      v43 = &v39[v24];
      v44 = v40 + (float)(v41 * *(v34 - 3));
      v45 = (float)v42;
      v46 = *v43;
      v47 = &v43[v24];
      v48 = v44 + (float)(v45 * *(v34 - 2));
      v49 = (float)v46;
      v50 = *v47;
      v51 = &v47[v24];
      v52 = (float)((float)(v48 + (float)(v49 * *(v34 - 1))) +
                    (float)((float)v50 * *v34)) +
            (float)((float)*v51 * v34[1]);
      v53 = v34[2];
      v54 = v34[3];
      v34 += 8;
      v31 = (float)(v52 + (float)((float)v51[v24] * v53)) +
            (float)((float)v51[v24 + v24] * v54);
    } while (-(__int64)(v6 & 0x7FFFFFF8) != v33);
    v32 = -v33;
    if ((v6 & 7) == 0) {
      goto LABEL_11;
    }
  LABEL_18:
    v55 = (float*)(a3 + 4 * v32);
    v56 = v24 * v32;
    v57 = v6 & 7;
    do {
      v58 = v30[v56];
      v59 = *v55++;
      v56 += v24;
      --v57;
      v31 = v31 + (float)((float)v58 * v59);
    } while (v57 != 0);
    goto LABEL_11;
  }
LABEL_21:
  v60 = (char*)result[2];
  v61 = 0;
  v62 = v60;
  do {
    v63 = *((float*)v357 + v61);
    if ((unsigned int)v5 < 8) {
      v64 = 0;
      if ((v5 & 7) == 0) {
        goto LABEL_22;
      }
    LABEL_29:
      v87 = (float*)(a2 + 4 * v64);
      v88 = v24 * v64;
      v89 = v5 & 7;
      do {
        v90 = v62[v88];
        v91 = *v87++;
        v88 += v24;
        --v89;
        v63 = v63 + (float)((float)v90 * v91);
      } while (v89 != 0);
      goto LABEL_22;
    }
    v65 = 0;
    v66 = (float*)(a2 + 16);
    v67 = v62;
    do {
      v65 -= 8;
      v68 = (float)*v67;
      v69 = &v67[v24];
      v67 += 8 * (unsigned int)(3 * v5);
      v70 = *v69;
      v71 = &v69[v24];
      v72 = v63 + (float)(v68 * *(v66 - 4));
      v73 = (float)v70;
      v74 = *v71;
      v75 = &v71[v24];
      v76 = v72 + (float)(v73 * *(v66 - 3));
      v77 = (float)v74;
      v78 = *v75;
      v79 = &v75[v24];
      v80 = v76 + (float)(v77 * *(v66 - 2));
      v81 = (float)v78;
      v82 = *v79;
      v83 = &v79[v24];
      v84 = (float)((float)(v80 + (float)(v81 * *(v66 - 1))) +
                    (float)((float)v82 * *v66)) +
            (float)((float)*v83 * v66[1]);
      v85 = v66[2];
      v86 = v66[3];
      v66 += 8;
      v63 = (float)(v84 + (float)((float)v83[v24] * v85)) +
            (float)((float)v83[v24 + v24] * v86);
    } while (-(v5 & 0x7FFFFFF8) != v65);
    v64 = -v65;
    if ((v5 & 7) != 0) {
      goto LABEL_29;
    }
  LABEL_22:
    *((float*)v357 + v61++) = v63;
    ++v62;
  } while (v61 != v5);
  v92 = 0;
  if (v5 != 1) {
    v93 = (float*)v357 + 1;
    do {
      v94 = 0x1.0000000000000p+0f;
      v95 = (float)(*(v93 - 1) * 0x1.0000000000000p-7f) * 0x1.0000000000000p-1f;
      if (v95 < 0x1.0000000000000p+3f) {
        v94 = -0x1.0000000000000p+0f;
        if (v95 > -0x1.0000000000000p+3f) {
          v96 = v95 < 0x0.0p+0f;
          if (v95 < 0x0.0p+0f) {
            v95 = -v95;
          }
          v97 = (float)(v95 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
          v98 = floorf(v97);
          v99 = vcvtms_s32_f32(v97);
          if (v96) {
            v94 = -(
                float)(SdkData_c1f948[v99] +
                       (float)((float)((float)(v95 +
                                               (float)((float)(int)v98 *
                                                       -0x1.47ae140000000p-5f)) *
                                       (float)(0x1.0000000000000p+0f -
                                               (float)(SdkData_c1f948[v99] *
                                                       SdkData_c1f948[v99]))) *
                               (float)(0x1.0000000000000p+0f -
                                       (float)(SdkData_c1f948[v99] *
                                               (float)(v95 +
                                                       (float)((float)(int)v98 *
                                                               -0x1.47ae140000000p-5f))))));
          }
          else {
            v94 =
                SdkData_c1f948[v99] +
                (float)((float)((float)(v95 + (float)((float)(int)v98 *
                                                      -0x1.47ae140000000p-5f)) *
                                (float)(0x1.0000000000000p+0f -
                                        (float)(SdkData_c1f948[v99] *
                                                SdkData_c1f948[v99]))) *
                        (float)(0x1.0000000000000p+0f -
                                (float)(SdkData_c1f948[v99] *
                                        (float)(v95 +
                                                (float)((float)(int)v98 *
                                                        -0x1.47ae140000000p-5f)))));
          }
        }
      }
      v100 = (float)(v94 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
      v101 = 0x1.0000000000000p+0f;
      *(v93 - 1) = v100;
      v102 = (float)(*v93 * 0x1.0000000000000p-7f) * 0x1.0000000000000p-1f;
      if (v102 < 0x1.0000000000000p+3f) {
        v101 = -0x1.0000000000000p+0f;
        if (v102 > -0x1.0000000000000p+3f) {
          v103 = v102 < 0x0.0p+0f;
          if (v102 < 0x0.0p+0f) {
            v102 = -v102;
          }
          v104 = (float)(v102 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
          v105 = floorf(v104);
          v106 = vcvtms_s32_f32(v104);
          if (v103) {
            v101 = -(
                float)(SdkData_c1f948[v106] +
                       (float)((float)((float)(v102 +
                                               (float)((float)(int)v105 *
                                                       -0x1.47ae140000000p-5f)) *
                                       (float)(0x1.0000000000000p+0f -
                                               (float)(SdkData_c1f948[v106] *
                                                       SdkData_c1f948[v106]))) *
                               (float)(0x1.0000000000000p+0f -
                                       (float)(SdkData_c1f948[v106] *
                                               (float)(v102 +
                                                       (float)((float)(int)
                                                                   v105 *
                                                               -0x1.47ae140000000p-5f))))));
          }
          else {
            v101 =
                SdkData_c1f948[v106] +
                (float)((float)((float)(v102 +
                                        (float)((float)(int)v105 *
                                                -0x1.47ae140000000p-5f)) *
                                (float)(0x1.0000000000000p+0f -
                                        (float)(SdkData_c1f948[v106] *
                                                SdkData_c1f948[v106]))) *
                        (float)(0x1.0000000000000p+0f -
                                (float)(SdkData_c1f948[v106] *
                                        (float)(v102 +
                                                (float)((float)(int)v105 *
                                                        -0x1.47ae140000000p-5f)))));
          }
        }
      }
      v92 += 2LL;
      *v93 = (float)(v101 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
      v93 += 2;
    } while ((v5 & 0x7FFFFFFE) != v92);
  }
  if ((v5 & 1) != 0) {
    v107 = 0x1.0000000000000p+0f;
    v108 = (float)(*(float*)&v357[v92 / 2] * 0x1.0000000000000p-7f) *
           0x1.0000000000000p-1f;
    if (v108 < 0x1.0000000000000p+3f) {
      v107 = -0x1.0000000000000p+0f;
      if (v108 > -0x1.0000000000000p+3f) {
        v109 = v108 < 0x0.0p+0f;
        if (v108 < 0x0.0p+0f) {
          v108 = -v108;
        }
        v110 = (float)(v108 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
        v111 =
            v108 + (float)((float)(int)floorf(v110) * -0x1.47ae140000000p-5f);
        v112 = SdkData_c1f948[vcvtms_s32_f32(v110)];
        if (v109) {
          v107 =
              -(float)(v112 +
                       (float)((float)(v111 * (float)(0x1.0000000000000p+0f -
                                                      (float)(v112 * v112))) *
                               (float)(0x1.0000000000000p+0f -
                                       (float)(v112 * v111))));
        }
        else {
          v107 = v112 +
                 (float)((float)(v111 * (float)(0x1.0000000000000p+0f -
                                                (float)(v112 * v112))) *
                         (float)(0x1.0000000000000p+0f - (float)(v112 * v111)));
        }
      }
    }
    *(float*)&v357[v92 / 2] =
        (float)(v107 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
  }
  v113 = *result;
  v114 = v5 & 7;
  if ((unsigned int)v5 >= 8) {
    v116 = 0;
    v117 = (char*)(v5 + v113 + 3);
    v118 = (float*)v356;
    do {
      v116 -= 8;
      v119 = (float)*(v117 - 2);
      v120 = *(v117 - 1);
      *(v118 - 4) = (float)*(v117 - 3);
      *(v118 - 3) = v119;
      v121 = (float)v120;
      v122 = (float)*v117;
      v123 = v117[1];
      *(v118 - 2) = v121;
      *(v118 - 1) = v122;
      v124 = (float)v123;
      v125 = (float)v117[2];
      v126 = v117[3];
      *v118 = v124;
      v118[1] = v125;
      v127 = (float)v126;
      v128 = v117[4];
      v117 += 8;
      v118[2] = v127;
      v118[3] = (float)v128;
      v118 += 8;
    } while (-(v5 & 0x7FFFFFF8) != v116);
    v115 = -v116;
    if ((v5 & 7) != 0) {
      goto LABEL_64;
    }
  }
  else {
    v115 = 0;
    if ((v5 & 7) == 0) {
      goto LABEL_66;
    }
  LABEL_64:
    v129 = (float*)v355 + v115;
    v130 = (char*)(v113 + v115 + v5);
    do {
      v131 = *v130++;
      --v114;
      *v129++ = (float)v131;
    } while (v114 != 0);
  }
LABEL_66:
  if (v6 >= 1) {
    v132 = &v28[v5];
    v133 = 0;
    while (1) {
      v134 = *((float*)v355 + v133);
      if ((unsigned int)v6 >= 8) {
        break;
      }
      v135 = 0;
      if ((v6 & 7) != 0) {
        goto LABEL_75;
      }
    LABEL_68:
      *((float*)v355 + v133++) = v134;
      ++v132;
      if (v133 == v5) {
        goto LABEL_78;
      }
    }
    v136 = 0;
    v137 = (float*)(a3 + 16);
    v138 = v132;
    do {
      v136 -= 8;
      v139 = (float)*v138;
      v140 = &v138[v24];
      v138 += 8 * (unsigned int)(3 * v5);
      v141 = *v140;
      v142 = &v140[v24];
      v143 = v134 + (float)(v139 * *(v137 - 4));
      v144 = (float)v141;
      v145 = *v142;
      v146 = &v142[v24];
      v147 = v143 + (float)(v144 * *(v137 - 3));
      v148 = (float)v145;
      v149 = *v146;
      v150 = &v146[v24];
      v151 = v147 + (float)(v148 * *(v137 - 2));
      v152 = (float)v149;
      v153 = *v150;
      v154 = &v150[v24];
      v155 = (float)((float)(v151 + (float)(v152 * *(v137 - 1))) +
                     (float)((float)v153 * *v137)) +
             (float)((float)*v154 * v137[1]);
      v156 = v137[2];
      v157 = v137[3];
      v137 += 8;
      v134 = (float)(v155 + (float)((float)v154[v24] * v156)) +
             (float)((float)v154[v24 + v24] * v157);
    } while (-(__int64)(v6 & 0x7FFFFFF8) != v136);
    v135 = -v136;
    if ((v6 & 7) == 0) {
      goto LABEL_68;
    }
  LABEL_75:
    v158 = (float*)(a3 + 4 * v135);
    v159 = v24 * v135;
    v160 = v6 & 7;
    do {
      v161 = v132[v159];
      v162 = *v158++;
      v159 += v24;
      --v160;
      v134 = v134 + (float)((float)v161 * v162);
    } while (v160 != 0);
    goto LABEL_68;
  }
LABEL_78:
  v163 = &v60[v5];
  v164 = 0;
  memset(v359, 0, sizeof(v359));
  v358[14] = 0;
  v358[15] = 0;
  v353[0] = 0;
  v353[1] = 0;
  memset(v354, 0, sizeof(v354));
  while (2) {
    v165 = *((float*)v355 + v164);
    if ((unsigned int)v5 >= 8) {
      v167 = 0;
      v168 = (float*)(a2 + 16);
      v169 = v163;
      do {
        v167 -= 8;
        v170 = (float)*v169;
        v171 = &v169[v24];
        v169 += 8 * (unsigned int)(3 * v5);
        v172 = *v171;
        v173 = &v171[v24];
        v174 = v165 + (float)(v170 * *(v168 - 4));
        v175 = (float)v172;
        v176 = *v173;
        v177 = &v173[v24];
        v178 = v174 + (float)(v175 * *(v168 - 3));
        v179 = (float)v176;
        v180 = *v177;
        v181 = &v177[v24];
        v182 = v178 + (float)(v179 * *(v168 - 2));
        v183 = (float)v180;
        v184 = *v181;
        v185 = &v181[v24];
        v186 = (float)((float)(v182 + (float)(v183 * *(v168 - 1))) +
                       (float)((float)v184 * *v168)) +
               (float)((float)*v185 * v168[1]);
        v187 = v168[2];
        v188 = v168[3];
        v168 += 8;
        v165 = (float)(v186 + (float)((float)v185[v24] * v187)) +
               (float)((float)v185[v24 + v24] * v188);
      } while (-(v5 & 0x7FFFFFF8) != v167);
      v166 = -v167;
      if ((v5 & 7) != 0) {
        goto LABEL_86;
      }
    }
    else {
      v166 = 0;
      if ((v5 & 7) == 0) {
        goto LABEL_79;
      }
    LABEL_86:
      v189 = (float*)(a2 + 4 * v166);
      v190 = v24 * v166;
      v191 = v5 & 7;
      do {
        v192 = v163[v190];
        v193 = *v189++;
        v190 += v24;
        --v191;
        v165 = v165 + (float)((float)v192 * v193);
      } while (v191 != 0);
    }
  LABEL_79:
    *((float*)v355 + v164++) = v165;
    ++v163;
    if (v164 != v5) {
      continue;
    }
    break;
  }
  v194 = 0;
  if (v5 != 1) {
    v195 = (float*)v355 + 1;
    do {
      v196 = 0x1.0000000000000p+0f;
      v197 =
          (float)(*(v195 - 1) * 0x1.0000000000000p-7f) * 0x1.0000000000000p-1f;
      if (v197 < 0x1.0000000000000p+3f) {
        v196 = -0x1.0000000000000p+0f;
        if (v197 > -0x1.0000000000000p+3f) {
          v198 = v197 < 0x0.0p+0f;
          if (v197 < 0x0.0p+0f) {
            v197 = -v197;
          }
          v199 = (float)(v197 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
          v200 = floorf(v199);
          v201 = vcvtms_s32_f32(v199);
          if (v198) {
            v196 = -(
                float)(SdkData_c1f948[v201] +
                       (float)((float)((float)(v197 +
                                               (float)((float)(int)v200 *
                                                       -0x1.47ae140000000p-5f)) *
                                       (float)(0x1.0000000000000p+0f -
                                               (float)(SdkData_c1f948[v201] *
                                                       SdkData_c1f948[v201]))) *
                               (float)(0x1.0000000000000p+0f -
                                       (float)(SdkData_c1f948[v201] *
                                               (float)(v197 +
                                                       (float)((float)(int)
                                                                   v200 *
                                                               -0x1.47ae140000000p-5f))))));
          }
          else {
            v196 =
                SdkData_c1f948[v201] +
                (float)((float)((float)(v197 +
                                        (float)((float)(int)v200 *
                                                -0x1.47ae140000000p-5f)) *
                                (float)(0x1.0000000000000p+0f -
                                        (float)(SdkData_c1f948[v201] *
                                                SdkData_c1f948[v201]))) *
                        (float)(0x1.0000000000000p+0f -
                                (float)(SdkData_c1f948[v201] *
                                        (float)(v197 +
                                                (float)((float)(int)v200 *
                                                        -0x1.47ae140000000p-5f)))));
          }
        }
      }
      v202 = (float)(v196 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
      v203 = 0x1.0000000000000p+0f;
      *(v195 - 1) = v202;
      v204 = (float)(*v195 * 0x1.0000000000000p-7f) * 0x1.0000000000000p-1f;
      if (v204 < 0x1.0000000000000p+3f) {
        v203 = -0x1.0000000000000p+0f;
        if (v204 > -0x1.0000000000000p+3f) {
          v205 = v204 < 0x0.0p+0f;
          if (v204 < 0x0.0p+0f) {
            v204 = -v204;
          }
          v206 = (float)(v204 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
          v207 = floorf(v206);
          v208 = vcvtms_s32_f32(v206);
          if (v205) {
            v203 = -(
                float)(SdkData_c1f948[v208] +
                       (float)((float)((float)(v204 +
                                               (float)((float)(int)v207 *
                                                       -0x1.47ae140000000p-5f)) *
                                       (float)(0x1.0000000000000p+0f -
                                               (float)(SdkData_c1f948[v208] *
                                                       SdkData_c1f948[v208]))) *
                               (float)(0x1.0000000000000p+0f -
                                       (float)(SdkData_c1f948[v208] *
                                               (float)(v204 +
                                                       (float)((float)(int)
                                                                   v207 *
                                                               -0x1.47ae140000000p-5f))))));
          }
          else {
            v203 =
                SdkData_c1f948[v208] +
                (float)((float)((float)(v204 +
                                        (float)((float)(int)v207 *
                                                -0x1.47ae140000000p-5f)) *
                                (float)(0x1.0000000000000p+0f -
                                        (float)(SdkData_c1f948[v208] *
                                                SdkData_c1f948[v208]))) *
                        (float)(0x1.0000000000000p+0f -
                                (float)(SdkData_c1f948[v208] *
                                        (float)(v204 +
                                                (float)((float)(int)v207 *
                                                        -0x1.47ae140000000p-5f)))));
          }
        }
      }
      v194 += 2LL;
      *v195 = (float)(v203 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
      v195 += 2;
    } while ((v5 & 0x7FFFFFFE) != v194);
  }
  if ((v5 & 1) != 0) {
    v209 = 0x1.0000000000000p+0f;
    v210 = (float)(*(float*)&v355[v194 / 2] * 0x1.0000000000000p-7f) *
           0x1.0000000000000p-1f;
    if (v210 < 0x1.0000000000000p+3f) {
      v209 = -0x1.0000000000000p+0f;
      if (v210 > -0x1.0000000000000p+3f) {
        v211 = v210 < 0x0.0p+0f;
        if (v210 < 0x0.0p+0f) {
          v210 = -v210;
        }
        v212 = (float)(v210 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
        v213 =
            v210 + (float)((float)(int)floorf(v212) * -0x1.47ae140000000p-5f);
        v214 = SdkData_c1f948[vcvtms_s32_f32(v212)];
        if (v211) {
          v209 =
              -(float)(v214 +
                       (float)((float)(v213 * (float)(0x1.0000000000000p+0f -
                                                      (float)(v214 * v214))) *
                               (float)(0x1.0000000000000p+0f -
                                       (float)(v214 * v213))));
        }
        else {
          v209 = v214 +
                 (float)((float)(v213 * (float)(0x1.0000000000000p+0f -
                                                (float)(v214 * v214))) *
                         (float)(0x1.0000000000000p+0f - (float)(v214 * v213)));
        }
      }
    }
    *(float*)&v355[v194 / 2] =
        (float)(v209 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
  }
  v215 = *result;
  v216 = (unsigned int)(2 * v5);
  v217 = v5 & 7;
  if ((unsigned int)v5 >= 8) {
    v219 = 0;
    v220 = (char*)(v216 + v215 + 3);
    v221 = (float*)v354;
    do {
      v219 -= 8;
      v222 = (float)*(v220 - 2);
      v223 = *(v220 - 1);
      *(v221 - 4) = (float)*(v220 - 3);
      *(v221 - 3) = v222;
      v224 = (float)v223;
      v225 = (float)*v220;
      v226 = v220[1];
      *(v221 - 2) = v224;
      *(v221 - 1) = v225;
      v227 = (float)v226;
      v228 = (float)v220[2];
      v229 = v220[3];
      *v221 = v227;
      v221[1] = v228;
      v230 = (float)v229;
      v231 = v220[4];
      v220 += 8;
      v221[2] = v230;
      v221[3] = (float)v231;
      v221 += 8;
    } while (-(v5 & 0x7FFFFFF8) != v219);
    v218 = -v219;
    if ((v5 & 7) != 0) {
      goto LABEL_121;
    }
  }
  else {
    v218 = 0;
    if ((v5 & 7) == 0) {
      goto LABEL_123;
    }
  LABEL_121:
    v232 = (float*)v353 + v218;
    v233 = (char*)(v215 + v218 + v216);
    do {
      v234 = *v233++;
      --v217;
      *v232++ = (float)v234;
    } while (v217 != 0);
  }
LABEL_123:
  v235 = v5 & 7;
  if ((unsigned int)v5 >= 8) {
    v237 = (float*)(a2 + 16);
    v238 = 0;
    v239 = (float*)v359;
    v240 = (float*)v356;
    do {
      v238 -= 8;
      v241 = *(v237 - 3) * *(v240 - 3);
      v242 = *(v237 - 2) * *(v240 - 2);
      v243 = *v237;
      v244 = v237[1];
      v245 = *(v237 - 1) * *(v240 - 1);
      v246 = *v240;
      v247 = v240[1];
      *(v239 - 4) = *(v237 - 4) * *(v240 - 4);
      *(v239 - 3) = v241;
      v248 = v237[2];
      v249 = v237[3];
      *(v239 - 2) = v242;
      *(v239 - 1) = v245;
      v237 += 8;
      *v239 = v243 * v246;
      v239[1] = v244 * v247;
      v250 = v240[2];
      v251 = v240[3];
      v240 += 8;
      v239[2] = v248 * v250;
      v239[3] = v249 * v251;
      v239 += 8;
    } while (-(v5 & 0x7FFFFFF8) != v238);
    v236 = -v238;
    if ((v5 & 7) != 0) {
      goto LABEL_129;
    }
  }
  else {
    v236 = 0;
    if ((v5 & 7) == 0) {
      goto LABEL_131;
    }
  LABEL_129:
    v252 = (float*)&v358[14] + v236;
    v253 = (float*)v355 + v236;
    v254 = (float*)(a2 + 4 * v236);
    do {
      v255 = *v254++;
      v256 = v255;
      v257 = *v253++;
      --v235;
      *v252++ = v256 * v257;
    } while (v235 != 0);
  }
LABEL_131:
  v258 = (unsigned int)(2 * v5);
  if (v6 >= 1) {
    v259 = &v28[v258];
    v260 = 0;
    while (1) {
      v261 = *((float*)v353 + v260);
      if ((unsigned int)v6 >= 8) {
        break;
      }
      v262 = 0;
      if ((v6 & 7) != 0) {
        goto LABEL_140;
      }
    LABEL_133:
      *((float*)v353 + v260++) = v261;
      ++v259;
      if (v260 == v5) {
        goto LABEL_143;
      }
    }
    v263 = 0;
    v264 = (float*)(a3 + 16);
    v265 = v259;
    do {
      v263 -= 8;
      v266 = (float)*v265;
      v267 = &v265[v24];
      v265 += 8 * (unsigned int)(3 * v5);
      v268 = *v267;
      v269 = &v267[v24];
      v270 = v261 + (float)(v266 * *(v264 - 4));
      v271 = (float)v268;
      v272 = *v269;
      v273 = &v269[v24];
      v274 = v270 + (float)(v271 * *(v264 - 3));
      v275 = (float)v272;
      v276 = *v273;
      v277 = &v273[v24];
      v278 = v274 + (float)(v275 * *(v264 - 2));
      v279 = (float)v276;
      v280 = *v277;
      v281 = &v277[v24];
      v282 = (float)((float)(v278 + (float)(v279 * *(v264 - 1))) +
                     (float)((float)v280 * *v264)) +
             (float)((float)*v281 * v264[1]);
      v283 = v264[2];
      v284 = v264[3];
      v264 += 8;
      v261 = (float)(v282 + (float)((float)v281[v24] * v283)) +
             (float)((float)v281[v24 + v24] * v284);
    } while (-(__int64)(v6 & 0x7FFFFFF8) != v263);
    v262 = -v263;
    if ((v6 & 7) == 0) {
      goto LABEL_133;
    }
  LABEL_140:
    v285 = (float*)(a3 + 4 * v262);
    v286 = v24 * v262;
    v287 = v6 & 7;
    do {
      v288 = v259[v286];
      v289 = *v285++;
      v286 += v24;
      --v287;
      v261 = v261 + (float)((float)v288 * v289);
    } while (v287 != 0);
    goto LABEL_133;
  }
LABEL_143:
  v290 = &v60[v258];
  v291 = 0;
  while (2) {
    v292 = *((float*)v353 + v291);
    if ((unsigned int)v5 >= 8) {
      v294 = 0;
      v295 = (float*)v359;
      v296 = v290;
      do {
        v294 -= 8;
        v297 = (float)*v296;
        v298 = &v296[v24];
        v296 += 8 * (unsigned int)(3 * v5);
        v299 = *v298;
        v300 = &v298[v24];
        v301 = v292 + (float)(v297 * *(v295 - 4));
        v302 = (float)v299;
        v303 = *v300;
        v304 = &v300[v24];
        v305 = v301 + (float)(v302 * *(v295 - 3));
        v306 = (float)v303;
        v307 = *v304;
        v308 = &v304[v24];
        v309 = v305 + (float)(v306 * *(v295 - 2));
        v310 = (float)v307;
        v311 = *v308;
        v312 = &v308[v24];
        v313 = (float)((float)(v309 + (float)(v310 * *(v295 - 1))) +
                       (float)((float)v311 * *v295)) +
               (float)((float)*v312 * v295[1]);
        v314 = v295[2];
        v315 = v295[3];
        v295 += 8;
        v292 = (float)(v313 + (float)((float)v312[v24] * v314)) +
               (float)((float)v312[v24 + v24] * v315);
      } while (-(v5 & 0x7FFFFFF8) != v294);
      v293 = -v294;
      if ((v5 & 7) != 0) {
        goto LABEL_151;
      }
    }
    else {
      v293 = 0;
      if ((v5 & 7) == 0) {
        goto LABEL_144;
      }
    LABEL_151:
      v316 = (float*)&v358[14] + v293;
      v317 = v24 * v293;
      v318 = v5 & 7;
      do {
        v319 = v290[v317];
        v320 = *v316++;
        v317 += v24;
        --v318;
        v292 = v292 + (float)((float)v319 * v320);
      } while (v318 != 0);
    }
  LABEL_144:
    *((float*)v353 + v291++) = v292;
    ++v290;
    if (v291 != v5) {
      continue;
    }
    break;
  }
  v321 = 0;
  if (v5 != 1) {
    v322 = (float*)(a2 + 4);
    v323 = (float*)v357 + 1;
    v324 = (float*)v353 + 1;
    do {
      v328 = *(v324 - 1) * 0x1.0000000000000p-7f;
      v329 = 0x1.0000000000000p+0f;
      if (v328 < 0x1.0000000000000p+3f) {
        v329 = -0x1.0000000000000p+0f;
        if (v328 > -0x1.0000000000000p+3f) {
          v330 = -v328;
          v331 = v328 < 0x0.0p+0f;
          if (v328 >= 0x0.0p+0f) {
            v330 = *(v324 - 1) * 0x1.0000000000000p-7f;
          }
          v332 = (float)(v330 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
          v333 = floorf(v332);
          v334 = vcvtms_s32_f32(v332);
          v335 =
              SdkData_c1f948[v334] +
              (float)((float)((float)(v330 + (float)((float)(int)v333 *
                                                     -0x1.47ae140000000p-5f)) *
                              (float)(0x1.0000000000000p+0f -
                                      (float)(SdkData_c1f948[v334] *
                                              SdkData_c1f948[v334]))) *
                      (float)(0x1.0000000000000p+0f -
                              (float)(SdkData_c1f948[v334] *
                                      (float)(v330 +
                                              (float)((float)(int)v333 *
                                                      -0x1.47ae140000000p-5f)))));
          v329 = -v335;
          if (!v331) {
            v329 = v335;
          }
        }
      }
      v336 = *v324;
      *(v324 - 1) = (float)(PSEUDO_UNFUSED(
                        (float)(0x1.0000000000000p+0f - *(v323 - 1)) * v329)) +
                    (float)(*(v323 - 1) * *(v322 - 1));
      v337 = v336 * 0x1.0000000000000p-7f;
      v338 = 0x1.0000000000000p+0f;
      if (v337 < 0x1.0000000000000p+3f) {
        v338 = -0x1.0000000000000p+0f;
        if (v337 > -0x1.0000000000000p+3f) {
          v339 = -v337;
          v340 = v337 < 0x0.0p+0f;
          if (v337 >= 0x0.0p+0f) {
            v339 = v337;
          }
          v341 = (float)(v339 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
          v342 = floorf(v341);
          v343 = vcvtms_s32_f32(v341);
          v344 =
              SdkData_c1f948[v343] +
              (float)((float)((float)(v339 + (float)((float)(int)v342 *
                                                     -0x1.47ae140000000p-5f)) *
                              (float)(0x1.0000000000000p+0f -
                                      (float)(SdkData_c1f948[v343] *
                                              SdkData_c1f948[v343]))) *
                      (float)(0x1.0000000000000p+0f -
                              (float)(SdkData_c1f948[v343] *
                                      (float)(v339 +
                                              (float)((float)(int)v342 *
                                                      -0x1.47ae140000000p-5f)))));
          v338 = -v344;
          if (!v340) {
            v338 = v344;
          }
        }
      }
      v325 = *v323;
      v323 += 2;
      v326 = v325;
      v327 = *v322;
      v322 += 2;
      v321 -= 2;
      *v324 = (float)(PSEUDO_UNFUSED((float)(0x1.0000000000000p+0f - v326) *
                                     v338)) +
              (float)(v326 * v327);
      v324 += 2;
    } while (-(v5 & 0x7FFFFFFE) != v321);
    v321 = -v321;
  }
  if ((v5 & 1) != 0) {
    v345 = 0x1.0000000000000p+0f;
    v346 = *((float*)v353 + v321) * 0x1.0000000000000p-7f;
    if (v346 < 0x1.0000000000000p+3f) {
      v345 = -0x1.0000000000000p+0f;
      if (v346 > -0x1.0000000000000p+3f) {
        v347 = -v346;
        v348 = v346 < 0x0.0p+0f;
        if (v346 >= 0x0.0p+0f) {
          v347 = *((float*)v353 + v321) * 0x1.0000000000000p-7f;
        }
        v349 = (float)(v347 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
        v350 =
            v347 + (float)((float)(int)floorf(v349) * -0x1.47ae140000000p-5f);
        v351 = SdkData_c1f948[vcvtms_s32_f32(v349)];
        v352 = v351 +
               (float)((float)(v350 * (float)(0x1.0000000000000p+0f -
                                              (float)(v351 * v351))) *
                       (float)(0x1.0000000000000p+0f - (float)(v351 * v350)));
        v345 = -v352;
        if (!v348) {
          v345 = v352;
        }
      }
    }
    *((float*)v353 + v321) =
        (float)(PSEUDO_UNFUSED(
            (float)(0x1.0000000000000p+0f - *((float*)v357 + v321)) * v345)) +
        (float)(*((float*)v357 + v321) * *(float*)(a2 + 4 * v321));
  }
  return (__int64*)memcpy_plt(a2, v353, 4 * v5);
}

#pragma GCC visibility pop
