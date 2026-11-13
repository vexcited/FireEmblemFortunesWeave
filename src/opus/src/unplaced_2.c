#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MovieRoutine_70280(__int64, __int64, __int64, int, unsigned int,
                           unsigned int, unsigned int, int, int, int*);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
extern float MovieData_a7d90[1447];
__int64 opus_6fab0(_DWORD* a1, int a2);
__int64 opus_6fad0(__int64 a1);
_DWORD* opus_70140(_DWORD* a1, __int64 a2, __int64 a3, int a4, int a5,
                   unsigned int a6, unsigned int a7, int a8, int a9, int a10,
                   int* a11, __int64 a12);
unsigned __int64
opus_73380(void (*a1)(__int64, char*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
           __int64 a2, int* a3, _DWORD* a4, int a5, unsigned int a6,
           unsigned int a7, int a8, unsigned int a9, int a10);
__int64 opus_738c0(__int64 result, __int64 a2, __int64 a3);

__int64 opus_6fab0(_DWORD* a1, int a2)
{
  *a1 = 0;
  a1[2] = a2;
  return memset_plt(a1 + 3, 0, 13992);
}

__int64 opus_6fad0(__int64 a1) { return memset_plt(a1 + 12, 0, 13992); }

_DWORD* opus_70140(_DWORD* a1, __int64 a2, __int64 a3, int a4, int a5,
                   unsigned int a6, unsigned int a7, int a8, int a9, int a10,
                   int* a11, __int64 a12)
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
  int v128;
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
          v128 = v121;
        }
        else {
          v128 = a9 / 50;
        }
        MovieRoutine_70280((__int64)a1, a2, a3, v128, v119, a6, a7, a8, a10,
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

opus_73380(void (*a1)(__int64, char*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
           __int64 a2, int* a3, _DWORD* a4, int a5, unsigned int a6,
           unsigned int a7, int a8, unsigned int a9, int a10)
{
  unsigned int v12;
  int v13;
  unsigned __int64 result;
  __int64 v19;
  char* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  _DWORD* v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  char* v30;
  __int64 v31;
  int* v32;
  unsigned __int64 v33;
  int v34;
  int v35;
  unsigned __int64 v36;
  int v37;
  int v38;
  unsigned __int64 v39;
  int v40;
  int v41;
  unsigned __int64 v42;
  unsigned int v43;
  char* v44;
  __int64 v45;
  char* v46;
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
  char* v60;
  char* v61;
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
  char* v78;
  int v79;
  int v80;
  unsigned __int64 v81;
  int v82;
  unsigned __int64 v83;
  __int64 v84;
  int v85;

  if (a5 == 0) {
    return 0;
  }
  v12 = a6;
  v13 = a5;
  v85 = a10;
  if (a10 == 48000) {
    v13 = 2 * a5;
    v12 = 2 * a6;
  }
  else if (a10 == 16000) {
    v13 = 2 * a5 / 3;
    v12 = (int)(2 * a6) / 3;
  }
  v19 = 4LL * v13;
  v20 = (char*)__builtin_alloca((v19 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v84 = v19;
  memset_plt(v20, 0, v19);
  a1(a2, v20, (unsigned int)v13, v12, a7, (unsigned int)a8, a9);
  if (a8 == -2) {
    v21 = 4096 / (int)a9;
    if (v13 < 1) {
      goto LABEL_22;
    }
  }
  else {
    if (a8 <= -1) {
      v21 = 4096;
    }
    else {
      v21 = 2048;
    }
    if (v13 < 1) {
      goto LABEL_22;
    }
  }
  v22 = v13 & 7;
  if ((unsigned int)v13 < 8) {
    v23 = 0;
    if ((v13 & 7) == 0) {
      goto LABEL_22;
    }
    goto LABEL_20;
  }
  v24 = v20 + 16;
  v25 = 0;
  do {
    v25 -= 8;
    v26 = *(v24 - 3) * v21;
    *(v24 - 4) *= v21;
    *(v24 - 3) = v26;
    v27 = *(v24 - 1) * v21;
    *(v24 - 2) *= v21;
    *(v24 - 1) = v27;
    v28 = v24[1] * v21;
    *v24 *= v21;
    v24[1] = v28;
    v29 = v24[3] * v21;
    v24[2] *= v21;
    v24[3] = v29;
    v24 += 8;
  } while (-(__int64)(v13 & 0x7FFFFFF8) != v25);
  v23 = -v25;
  if ((v13 & 7) != 0) {
  LABEL_20:
    v30 = &v20[4 * v23];
    do {
      --v22;
      *(_DWORD*)v30 *= v21;
      v30 += 4;
    } while (v22 != 0);
  }
LABEL_22:
  if (v85 == 48000) {
    if (v13 >= 2) {
      v31 = (unsigned int)v13 >> 1;
      v32 = (int*)(v20 + 4);
      v33 = 0;
      do {
        v34 = *(v32 - 1);
        v35 = a4[1];
        --v31;
        v36 = (unsigned __int64)(19904LL * (v34 - *a4)) >> 15;
        v37 = *a4 + v36;
        v38 = *v32;
        v32 += 2;
        v39 = (unsigned __int64)(4936LL * (v38 - v35)) >> 15;
        *a4 = v34 + v36;
        a4[1] = v38 + v39;
        v40 = a4[2];
        v41 = v37 + v35 + v39;
        v42 = (unsigned __int64)(4936LL * -(v38 + v40)) >> 15;
        v33 += (v37 + v40 + (int)v42) * (__int64)(v37 + v40 + (int)v42);
        a4[2] = v42 - v38;
        *a3++ = v41 >> 1;
      } while (v31 != 0);
      return HIDWORD(v33);
    }
    return 0;
  }
  if (v85 != 16000) {
    if (v85 == 24000) {
      memcpy_plt(a3, v20, v84);
    }
    return 0;
  }
  v43 = 3 * v13;
  v44 = v20;
  v45 = 12LL * v13;
  v46 = (char*)__builtin_alloca((v45 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt(v46, 0, v45);
  if (v13 < 1) {
    return 0;
  }
  v47 = v13 & 7;
  if ((unsigned int)v13 >= 8) {
    v49 = (int*)(v46 + 48);
    v50 = (int*)(v44 + 16);
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
    v60 = &v44[4 * v48];
    v61 = &v46[12 * v48 + 4];
    do {
      v62 = *(_DWORD*)v60;
      v60 += 4;
      --v47;
      *((_DWORD*)v61 - 1) = v62;
      *(_DWORD*)v61 = v62;
      *((_DWORD*)v61 + 1) = v62;
      v61 += 12;
    } while (v47 != 0);
  }
  if (v43 >> 1 == 1) {
    v63 = 0;
  }
  else {
    v64 = (int*)(v46 + 8);
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
    } while (-(__int64)((v43 >> 1) & 0x7FFFFFFE) != v66);
    v63 = -v66;
  }
  result = 0;
  if ((v43 & 2) != 0) {
    v78 = &v46[8 * v63];
    v79 = a4[1];
    v80 = *(_DWORD*)v78;
    LODWORD(v78) = *((_DWORD*)v78 + 1);
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

__int64 opus_738c0(__int64 result, __int64 a2, __int64 a3)
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
  unsigned int v58;
  float v59;
  float v60;
  float v61;
  bool v62;
  float v63;
  float v64;
  unsigned int v65;
  float v66;
  float v67;
  bool v68;
  float v69;
  float v70;
  unsigned int v71;
  float v72;
  float* v73;
  float v74;
  float v75;
  bool v76;
  float v77;
  float v78;
  unsigned int v79;
  float v80;
  float v81;
  bool v82;
  float v83;
  float v84;
  unsigned int v85;
  float v86;
  float v87;
  bool v88;
  float v89;
  float v90;
  unsigned int v91;
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
    v46 = *(v44 - 3) * 0x1.0000000000000p-7f;
    *(v44 - 4) = *(v44 - 4) * 0x1.0000000000000p-7f;
    *(v44 - 3) = v46;
    v47 = *(v44 - 1) * 0x1.0000000000000p-7f;
    *(v44 - 2) = *(v44 - 2) * 0x1.0000000000000p-7f;
    *(v44 - 1) = v47;
    v48 = v44[1] * 0x1.0000000000000p-7f;
    *v44 = *v44 * 0x1.0000000000000p-7f;
    v44[1] = v48;
    v49 = v44[3] * 0x1.0000000000000p-7f;
    v44[2] = v44[2] * 0x1.0000000000000p-7f;
    v44[3] = v49;
    v44 += 8;
  } while (-(v3 & 0x7FFFFFF8) != v45);
  v43 = -v45;
  if ((v3 & 7) != 0) {
  LABEL_27:
    v50 = (float*)(a2 + 4 * v43);
    do {
      --v42;
      *v50 = *v50 * 0x1.0000000000000p-7f;
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
        v53 = 0x1.0000000000000p+0f;
        v54 = *(v52 - 1) * 0x1.0000000000000p-1f;
        if (v54 < 0x1.0000000000000p+3f) {
          v53 = -0x1.0000000000000p+0f;
          if (v54 > -0x1.0000000000000p+3f) {
            v55 = v54 < 0x0.0p+0f;
            if (v54 < 0x0.0p+0f) {
              v54 = -v54;
            }
            v56 = (float)(v54 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
            v57 = floorf(v56);
            v58 = vcvtms_s32_f32(v56);
            if (v55) {
              v53 = -(
                  float)(MovieData_a7d90[v58] +
                         (float)((float)((float)(v54 +
                                                 (float)((float)(int)v57 *
                                                         -0x1.47ae140000000p-5f)) *
                                         (float)(0x1.0000000000000p+0f -
                                                 (float)(MovieData_a7d90[v58] *
                                                         MovieData_a7d90
                                                             [v58]))) *
                                 (float)(0x1.0000000000000p+0f -
                                         (float)(MovieData_a7d90[v58] *
                                                 (float)(v54 +
                                                         (float)((float)(int)
                                                                     v57 *
                                                                 -0x1.47ae140000000p-5f))))));
            }
            else {
              v53 =
                  MovieData_a7d90[v58] +
                  (float)((float)((float)(v54 +
                                          (float)((float)(int)v57 *
                                                  -0x1.47ae140000000p-5f)) *
                                  (float)(0x1.0000000000000p+0f -
                                          (float)(MovieData_a7d90[v58] *
                                                  MovieData_a7d90[v58]))) *
                          (float)(0x1.0000000000000p+0f -
                                  (float)(MovieData_a7d90[v58] *
                                          (float)(v54 +
                                                  (float)((float)(int)v57 *
                                                          -0x1.47ae140000000p-5f)))));
            }
          }
        }
        v59 = (float)(v53 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
        v60 = 0x1.0000000000000p+0f;
        *(v52 - 1) = v59;
        v61 = *v52 * 0x1.0000000000000p-1f;
        if (v61 < 0x1.0000000000000p+3f) {
          v60 = -0x1.0000000000000p+0f;
          if (v61 > -0x1.0000000000000p+3f) {
            v62 = v61 < 0x0.0p+0f;
            if (v61 < 0x0.0p+0f) {
              v61 = -v61;
            }
            v63 = (float)(v61 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
            v64 = floorf(v63);
            v65 = vcvtms_s32_f32(v63);
            if (v62) {
              v60 = -(
                  float)(MovieData_a7d90[v65] +
                         (float)((float)((float)(v61 +
                                                 (float)((float)(int)v64 *
                                                         -0x1.47ae140000000p-5f)) *
                                         (float)(0x1.0000000000000p+0f -
                                                 (float)(MovieData_a7d90[v65] *
                                                         MovieData_a7d90
                                                             [v65]))) *
                                 (float)(0x1.0000000000000p+0f -
                                         (float)(MovieData_a7d90[v65] *
                                                 (float)(v61 +
                                                         (float)((float)(int)
                                                                     v64 *
                                                                 -0x1.47ae140000000p-5f))))));
            }
            else {
              v60 =
                  MovieData_a7d90[v65] +
                  (float)((float)((float)(v61 +
                                          (float)((float)(int)v64 *
                                                  -0x1.47ae140000000p-5f)) *
                                  (float)(0x1.0000000000000p+0f -
                                          (float)(MovieData_a7d90[v65] *
                                                  MovieData_a7d90[v65]))) *
                          (float)(0x1.0000000000000p+0f -
                                  (float)(MovieData_a7d90[v65] *
                                          (float)(v61 +
                                                  (float)((float)(int)v64 *
                                                          -0x1.47ae140000000p-5f)))));
            }
          }
        }
        v51 += 2;
        *v52 = (float)(v60 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
        v52 += 2;
      } while ((v3 & 0x7FFFFFFE) != v51);
    }
    if ((v3 & 1) != 0) {
      v66 = 0x1.0000000000000p+0f;
      v67 = *(float*)(a2 + 4 * v51) * 0x1.0000000000000p-1f;
      if (v67 < 0x1.0000000000000p+3f) {
        v66 = -0x1.0000000000000p+0f;
        if (v67 > -0x1.0000000000000p+3f) {
          v68 = v67 < 0x0.0p+0f;
          if (v67 < 0x0.0p+0f) {
            v67 = -v67;
          }
          v69 = (float)(v67 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
          v70 = floorf(v69);
          v71 = vcvtms_s32_f32(v69);
          v72 =
              MovieData_a7d90[v71] +
              (float)((float)((float)(v67 + (float)((float)(int)v70 *
                                                    -0x1.47ae140000000p-5f)) *
                              (float)(0x1.0000000000000p+0f -
                                      (float)(MovieData_a7d90[v71] *
                                              MovieData_a7d90[v71]))) *
                      (float)(0x1.0000000000000p+0f -
                              (float)(MovieData_a7d90[v71] *
                                      (float)(v67 +
                                              (float)((float)(int)v70 *
                                                      -0x1.47ae140000000p-5f)))));
          if (v68) {
            v66 = -v72;
          }
          else {
            v66 = v72;
          }
        }
      }
      *(float*)(a2 + 4 * v51) =
          (float)(v66 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
    }
  }
  else {
    if (v3 != 1) {
      v73 = (float*)(a2 + 4);
      v51 = 0;
      do {
        v74 = *(v73 - 1);
        v75 = 0x1.0000000000000p+0f;
        if (v74 < 0x1.0000000000000p+3f) {
          v75 = -0x1.0000000000000p+0f;
          if (v74 > -0x1.0000000000000p+3f) {
            v76 = v74 < 0x0.0p+0f;
            if (v74 < 0x0.0p+0f) {
              v74 = -v74;
            }
            v77 = (float)(v74 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
            v78 = floorf(v77);
            v79 = vcvtms_s32_f32(v77);
            if (v76) {
              v75 = -(
                  float)(MovieData_a7d90[v79] +
                         (float)((float)((float)(v74 +
                                                 (float)((float)(int)v78 *
                                                         -0x1.47ae140000000p-5f)) *
                                         (float)(0x1.0000000000000p+0f -
                                                 (float)(MovieData_a7d90[v79] *
                                                         MovieData_a7d90
                                                             [v79]))) *
                                 (float)(0x1.0000000000000p+0f -
                                         (float)(MovieData_a7d90[v79] *
                                                 (float)(v74 +
                                                         (float)((float)(int)
                                                                     v78 *
                                                                 -0x1.47ae140000000p-5f))))));
            }
            else {
              v75 =
                  MovieData_a7d90[v79] +
                  (float)((float)((float)(v74 +
                                          (float)((float)(int)v78 *
                                                  -0x1.47ae140000000p-5f)) *
                                  (float)(0x1.0000000000000p+0f -
                                          (float)(MovieData_a7d90[v79] *
                                                  MovieData_a7d90[v79]))) *
                          (float)(0x1.0000000000000p+0f -
                                  (float)(MovieData_a7d90[v79] *
                                          (float)(v74 +
                                                  (float)((float)(int)v78 *
                                                          -0x1.47ae140000000p-5f)))));
            }
          }
        }
        v80 = *v73;
        *(v73 - 1) = v75;
        v81 = 0x1.0000000000000p+0f;
        if (v80 < 0x1.0000000000000p+3f) {
          v81 = -0x1.0000000000000p+0f;
          if (v80 > -0x1.0000000000000p+3f) {
            v82 = v80 < 0x0.0p+0f;
            if (v80 < 0x0.0p+0f) {
              v80 = -v80;
            }
            v83 = (float)(v80 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
            v84 = floorf(v83);
            v85 = vcvtms_s32_f32(v83);
            if (v82) {
              v81 = -(
                  float)(MovieData_a7d90[v85] +
                         (float)((float)((float)(v80 +
                                                 (float)((float)(int)v84 *
                                                         -0x1.47ae140000000p-5f)) *
                                         (float)(0x1.0000000000000p+0f -
                                                 (float)(MovieData_a7d90[v85] *
                                                         MovieData_a7d90
                                                             [v85]))) *
                                 (float)(0x1.0000000000000p+0f -
                                         (float)(MovieData_a7d90[v85] *
                                                 (float)(v80 +
                                                         (float)((float)(int)
                                                                     v84 *
                                                                 -0x1.47ae140000000p-5f))))));
            }
            else {
              v81 =
                  MovieData_a7d90[v85] +
                  (float)((float)((float)(v80 +
                                          (float)((float)(int)v84 *
                                                  -0x1.47ae140000000p-5f)) *
                                  (float)(0x1.0000000000000p+0f -
                                          (float)(MovieData_a7d90[v85] *
                                                  MovieData_a7d90[v85]))) *
                          (float)(0x1.0000000000000p+0f -
                                  (float)(MovieData_a7d90[v85] *
                                          (float)(v80 +
                                                  (float)((float)(int)v84 *
                                                          -0x1.47ae140000000p-5f)))));
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
      v87 = 0x1.0000000000000p+0f;
      if (v86 < 0x1.0000000000000p+3f) {
        v87 = -0x1.0000000000000p+0f;
        if (v86 > -0x1.0000000000000p+3f) {
          v88 = v86 < 0x0.0p+0f;
          if (v86 < 0x0.0p+0f) {
            v86 = -v86;
          }
          v89 = (float)(v86 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
          v90 = floorf(v89);
          v91 = vcvtms_s32_f32(v89);
          v92 =
              MovieData_a7d90[v91] +
              (float)((float)((float)(v86 + (float)((float)(int)v90 *
                                                    -0x1.47ae140000000p-5f)) *
                              (float)(0x1.0000000000000p+0f -
                                      (float)(MovieData_a7d90[v91] *
                                              MovieData_a7d90[v91]))) *
                      (float)(0x1.0000000000000p+0f -
                              (float)(MovieData_a7d90[v91] *
                                      (float)(v86 +
                                              (float)((float)(int)v90 *
                                                      -0x1.47ae140000000p-5f)))));
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

#pragma GCC visibility pop
