#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* ec_enc_bit_logp(__int64* result, int, char);
__int64* ec_enc_icdf(__int64* result, int, __int64, char);
__int64* opus_celt_39680(__int64* result, int*, int, int);
__int64 ec_dec_icdf(__int64*, unsigned __int8*, char);
__int64 ec_laplace_decode(__int64, unsigned int, int);
__int64 ec_tell_frac(__int64);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 quant_coarse_energy_impl_alt1(__int64, int, int, __int64, __int64, int,
                                      int, __int64, __int64, __int64, int, int,
                                      int, __int16,
                                      int) __asm__("quant_coarse_energy_impl");
int ec_dec_bit_logp(__int64*, char);
extern _UNKNOWN MovieData_a2410;
extern _UNKNOWN MovieData_a5c0d;
extern __int16 MovieData_a2418[4];
extern unsigned __int8 MovieData_a5d5d[];
__int64 quant_coarse_energy(__int64 a1, __int64 a2, int a3, int a4, __int64 a5,
                            __int64 a6, unsigned int a7, __int64 a8,
                            __int64* a9, unsigned int a10, unsigned int a11,
                            int a12, int a13, int* a14, int a15, int a16,
                            int a17);
__int64 quant_coarse_energy_impl(__int64 a1, int a2, int a3, __int64 a4,
                                 __int64 a5, int a6, int a7, __int64 a8,
                                 __int64 a9, __int64 a10, unsigned int a11,
                                 int a12, int a13, __int16 a14, int a15);
__int64 unquant_coarse_energy(__int64 result, int a2, int a3, __int64 a4,
                              int a5, __int64 a6, unsigned int a7, int a8);

__int64 quant_coarse_energy(__int64 a1, __int64 a2, int a3, int a4, __int64 a5,
                            __int64 a6, unsigned int a7, __int64 a8,
                            __int64* a9, unsigned int a10, unsigned int a11,
                            int a12, int a13, int* a14, int a15, int a16,
                            int a17)
{
  char v19;
  bool v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int16* v43;
  __int16* v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  unsigned int v59;
  __int64* v60;
  int v61;
  _BOOL4 v62;
  __int64 v63;
  unsigned int v64;
  int v65;
  __int64 v66;
  __int64 v67;
  _BOOL4 v68;
  int v69;
  int v70;
  int v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  _BYTE* v75;
  int v77;
  int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  int v83;
  __int64 v84;
  __int64 v85;
  int v86;
  signed int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  int v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 result;
  __int64 v99;
  __int64 v100;
  _BYTE* v101;
  __int64 v102;
  int v103;
  __int64 v104;
  __int64 v105;
  int v106;
  int* v107;
  int v108;
  unsigned int v109;
  int v110;
  struct {
    _BYTE v111[4];
    signed int v112;
    _BYTE* v113;
    char gap80_[4];
    int v114;
    __int64 v115;
    char gap96_[4];
    signed int v116;
    __int64 v117;
    __int64 v118;
    _BYTE* v119;
    _BYTE* v120;
    char gap136_[4];
    _BOOL4 v121;
    int v122;
    int v123;
    int* v124;
    __int64 v125;
    int v126;
    int v127;
    __int64 v128;
    __int64 v129;
    __int64 v130;
    int v131;
    unsigned int v132;
    __int64 v133;
    __int64 v134;
    __int64 v135;
    __int64 v136;
    __int64 v137;
    int v138;
    char gap252_[4];
    __int64 v139;
    __int64 v140;
    __int64 v141;
    __int64 v142;
    __int64 v143;
    __int64 v144;
    int v145;
  } v111_;

  v111_.v125 = a8;
  if (a13 != 0) {
    v19 = 1;
    v111_.v116 = *a14;
  }
  else {
    v20 = a12 > (int)((a3 - a2) * a10);
    v111_.v116 = *a14;
    if (v111_.v116 <= (int)(2 * (a3 - a2) * a10)) {
      v20 = false;
    }
    v19 = a15 == 0 && v20;
  }
  v21 = a17;
  v111_.v124 = a14;
  v111_.v131 = a3;
  v111_.v130 = a2;
  v111_.v128 = a11;
  v111_.v129 = a1;
  v22 = *(int*)(a1 + 8);
  v111_.v122 = a17;
  if ((int)a2 >= a4) {
    v58 = 0;
    goto LABEL_25;
  }
  v23 = (int)a2;
  v24 = a4;
  v25 = a4 - a2;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = a5;
  v30 = a6;
  v31 = 2 * v22;
  if ((int)a10 <= 1) {
    v32 = 1;
  }
  else {
    v32 = a10;
  }
  v33 = v25 & 7;
  v34 = v23 - a4;
  do {
    if (v33 == 0) {
      v36 = v23;
      if (v34 > 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_13;
      }
    LABEL_20:
      v39 = v24 - v36;
      v40 = v26 + 2 * v36;
      v41 = a5;
      v42 = a6;
      do {
        v43 = (__int16*)(v41 + v40);
        v44 = (__int16*)(v42 + v40);
        v39 -= 8;
        v42 += 16;
        v45 = *(__int16*)(v41 + v40);
        v41 += 16;
        v46 = (v45 >> 3) - (*v44 >> 3);
        v47 = v28 + v46 * v46;
        v48 = (v43[1] >> 3) - (v44[1] >> 3);
        v49 = v47 + v48 * v48;
        v50 = (v43[2] >> 3) - (v44[2] >> 3);
        v51 = v49 + v50 * v50;
        v52 = (v43[3] >> 3) - (v44[3] >> 3);
        v53 = v51 + v52 * v52;
        v54 = (v43[4] >> 3) - (v44[4] >> 3);
        v55 = v53 + v54 * v54;
        v56 = (v43[5] >> 3) - (v44[5] >> 3);
        v57 = v55 + v56 * v56 +
              ((v43[6] >> 3) - (v44[6] >> 3)) * ((v43[6] >> 3) - (v44[6] >> 3));
        LODWORD(v43) = (v43[7] >> 3) - (v44[7] >> 3);
        v28 = v57 + (_DWORD)v43 * (_DWORD)v43;
      } while (v39 != 0);
      goto LABEL_13;
    }
    v35 = v33;
    v36 = v23;
    do {
      v37 = 2 * v36++;
      --v35;
      v38 = (*(__int16*)(v29 + v37) >> 3) - (*(__int16*)(v30 + v37) >> 3);
      v28 += v38 * v38;
    } while (v35 != 0);
    if (v34 <= 0xFFFFFFFFFFFFFFF8LL) {
      goto LABEL_20;
    }
  LABEL_13:
    ++v27;
    v30 += v31;
    v29 += v31;
    v26 += v31;
  } while (v27 != v32);
  a3 = v111_.v131;
  LODWORD(a2) = v111_.v130;
  v21 = v111_.v122;
  v58 = v28 >> 14;
LABEL_25:
  v60 = a9 + 4;
  v59 = *((_DWORD*)a9 + 8);
  v61 = a12 << 7;
  v111_.v132 = a10;
  v62 = a15 != 0;
  v63 = *((unsigned int*)a9 + 7);
  v64 = *((_DWORD*)a9 + 6) + __clz(v59);
  v111_.v145 = *((_DWORD*)a9 + 6);
  if (v64 - 29 > a7) {
    v62 = false;
  }
  v111_.v121 = v62;
  v65 = (v64 - 29 <= a7) & (unsigned __int8)v19;
  v66 = *a9;
  v67 = a9[1];
  if (a15 != 0) {
    v68 = v64 - 29 <= a7;
  }
  else {
    v68 = v65;
  }
  LODWORD(v111_.v118) = v65;
  if (v58 >= 200) {
    v69 = 200;
  }
  else {
    v69 = v58;
  }
  v111_.v142 = v66;
  v111_.v143 = v67;
  v111_.v123 = v69;
  if (v61 >= 0x4000) {
    v61 = 0x4000;
  }
  if (a3 - (int)a2 <= 10) {
    v70 = 0x4000;
  }
  else {
    v70 = v61;
  }
  if (v21 != 0) {
    v71 = 3072;
  }
  else {
    v71 = v70;
  }
  v72 = a9[2];
  v111_.v126 = v71;
  v111_.v127 = v64 - 32;
  v111_.v144 = v72;
  v73 = a9[6];
  v111_.v140 = a9[5];
  v111_.v141 = v73;
  v74 = 2LL * (int)(v22 * a10);
  v111_.v139 = *v60;
  v75 = &v111_.v111[-((v74 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  v111_.v120 = v75;
  memset_plt(v75, 0, v74);
  v111_.v119 = v75;
  memcpy_plt(v75, a6, v74);
  v77 = v111_.v128;
  v78 = 0;
  v111_.v117 = v63;
  v79 = (int)v111_.v128;
  if (v68) {
    v111_.v115 = (int)v111_.v128;
    v110 = v21;
    v81 = (__int64)v111_.v119;
    v80 = (__int64)v111_.v120;
    v82 = v111_.v129;
    v78 = quant_coarse_energy_impl_alt1(
        v111_.v129, v111_.v130, v111_.v131, a5, (__int64)v111_.v119, a7,
        v111_.v127, (__int64)&MovieData_a5c0d + 84 * (int)v111_.v128 + 42,
        (__int64)v111_.v120, (__int64)a9, v111_.v132, v111_.v128, 1, v111_.v126,
        v110);
    if ((v111_.v118 & 1) != 0) {
      v83 = v111_.v132;
      memcpy_plt(a6, v81, 2LL * (int)(*(_DWORD*)(v82 + 8) * v111_.v132));
      v84 = v111_.v125;
      v85 = v80;
      v86 = *(_DWORD*)(v82 + 8) * v83;
      goto LABEL_48;
    }
    v77 = v111_.v128;
    v21 = v111_.v122;
    v63 = v111_.v117;
    v79 = v111_.v115;
  }
  LODWORD(v111_.v128) = v78;
  v87 = ec_tell_frac((__int64)a9);
  v88 = a9[1];
  v89 = a9[2];
  v90 = *a9;
  v111_.v112 = v87;
  v111_.v136 = v88;
  v111_.v137 = v89;
  v91 = *((_DWORD*)a9 + 7);
  v111_.v138 = *((_DWORD*)a9 + 6);
  v92 = *v60;
  v93 = a9[5];
  v94 = (unsigned int)(v91 - v63);
  v111_.v114 = v91;
  v111_.v133 = v92;
  v111_.v134 = v93;
  v111_.v135 = a9[6];
  v111_.v118 = v90;
  v111_.v113 = &v111_.v111[-((v94 + 15) & 0x1FFFFFFF0LL)];
  v111_.v115 = v94;
  memcpy_plt(v111_.v113, v90 + v63, v94);
  v95 = v111_.v143;
  *a9 = v111_.v142;
  v96 = v111_.v144;
  a9[1] = v95;
  a9[2] = v96;
  *((_DWORD*)a9 + 6) = v111_.v145;
  *((_DWORD*)a9 + 7) = v63;
  v97 = v111_.v140;
  *v60 = v111_.v139;
  a9[5] = v97;
  a9[6] = v111_.v141;
  result = quant_coarse_energy_impl_alt1(
      v111_.v129, v111_.v130, v111_.v131, a5, a6, a7, v111_.v127,
      (__int64)&MovieData_a5c0d + 84 * (int)v79, v111_.v125, (__int64)a9,
      v111_.v132, v77, 0, v111_.v126, v21);
  if (v111_.v121 &&
      ((unsigned int)v111_.v128 < (unsigned int)result ||
       (_DWORD)v111_.v128 == (_DWORD)result &&
           (v109 = a16 * a7 * v111_.v116 / (v111_.v132 << 9),
            (int)((result = ec_tell_frac((__int64)a9)) + v109) > v111_.v112))) {
    v99 = v111_.v137;
    v100 = v111_.v118;
    v101 = v111_.v113;
    v102 = v111_.v115;
    a9[1] = v111_.v136;
    a9[2] = v99;
    v103 = v111_.v138;
    *a9 = v100;
    *((_DWORD*)a9 + 6) = v103;
    *((_DWORD*)a9 + 7) = v111_.v114;
    v104 = v111_.v134;
    *v60 = v111_.v133;
    a9[5] = v104;
    a9[6] = v111_.v135;
    memcpy_plt(v100 + v111_.v117, v101, v102);
    v105 = v111_.v129;
    v106 = v111_.v132;
    memcpy_plt(a6, v111_.v119,
               2LL * (int)(*(_DWORD*)(v111_.v129 + 8) * v111_.v132));
    v84 = v111_.v125;
    v85 = (__int64)v111_.v120;
    v86 = *(_DWORD*)(v105 + 8) * v106;
  LABEL_48:
    result = memcpy_plt(v84, v85, 2LL * v86);
    v107 = v111_.v124;
    v108 = v111_.v123;
  }
  else {
    v107 = v111_.v124;
    v108 = v111_.v123 +
           ((unsigned __int64)((__int16)((unsigned int)(MovieData_a2418[v79] *
                                                        MovieData_a2418[v79]) >>
                                         15) *
                               (__int64)*v111_.v124) >>
            15);
  }
  *v107 = v108;
  return result;
}

__int64 quant_coarse_energy_impl(__int64 a1, int a2, int a3, __int64 a4,
                                 __int64 a5, int a6, int a7, __int64 a8,
                                 __int64 a9, __int64 a10, unsigned int a11,
                                 int a12, int a13, __int16 a14, int a15)
{
  unsigned int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  char v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  bool v42;
  int v43;
  int v44;
  unsigned int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  __int64 v50;
  int v52;
  int v54;
  unsigned __int8* v55;
  int v56;
  int v57;
  __int64 v58;
  int v59;
  int v60;
  int v61;
  int v63;
  struct {
    char gap80_[4];
    int v64;
    __int64 v65;
  } v64_;

  v64_.v65 = 0;
  v57 = a2;
  if (a7 + 3 <= a6) {
    ec_enc_bit_logp((__int64*)a10, a13, 3);
    a2 = v57;
  }
  if (a13 != 0) {
    v60 = 0;
    v61 = 4915;
    v54 = a15;
    if (a2 < a3) {
      goto LABEL_5;
    }
  LABEL_56:
    v19 = 0;
    goto LABEL_57;
  }
  v50 = a12;
  v60 = MovieData_a2418[v50];
  v61 = *(__int16*)((char*)&MovieData_a2410 + v50 * 2);
  v54 = a15;
  if (a2 >= a3) {
    goto LABEL_56;
  }
LABEL_5:
  v19 = 0;
  v20 = a6 + 32;
  v21 = a2;
  v59 = v20;
  if ((int)a11 <= 1) {
    v22 = 1;
  }
  else {
    v22 = a11;
  }
  v52 = a3;
  v58 = v22;
  while (2) {
    v23 = 0;
    v24 = v54 == 0 || v21 <= 1;
    v56 = 3 * a11 * (v21 - a3);
    if (v24) {
      v25 = 0;
    }
    else {
      v25 = 1;
    }
    v63 = v25;
    if (v21 >= 20) {
      v26 = 20;
    }
    else {
      v26 = v21;
    }
    v55 = (unsigned __int8*)(a8 + 2 * v26);
    do {
      v32 = *((_DWORD*)&v64_.v65 + v23);
      v33 = 2LL * (v21 + *(_DWORD*)(a1 + 8) * (int)v23);
      v34 = *(__int16*)(a4 + v33);
      v35 = *(__int16*)(a5 + v33);
      v36 = v34 << 7;
      if (v35 <= -9216) {
        v37 = -9216;
      }
      else {
        v37 = v35;
      }
      v38 = v32 + ((v60 * v37 + 128) >> 8);
      v39 = v36 - v38;
      v40 = (v36 - v38 + 0x10000) >> 17;
      v41 = v35 - a14;
      if (v41 >= -28672) {
        v41 = (__int16)v41;
      }
      else {
        v41 = -28672;
      }
      if (v40 < 0) {
        v42 = __OFSUB__(v41, v34);
        v43 = v41 - v34;
        v24 = (v43 < 0) ^ v42 | (v43 == 0);
        v44 = (v40 + ((unsigned int)v43 >> 10)) &
              ((int)(v40 + ((unsigned int)v43 >> 10)) >> 31);
        if (!v24) {
          v40 = v44;
        }
      }
      v45 = __clz(*(_DWORD*)(a10 + 32));
      v46 = v59 - *(_DWORD*)(a10 + 24);
      v64_.v64 = v40;
      v47 = v46 - v45;
      v48 = v40;
      if (v21 != a2) {
        v48 = v40;
        if (v47 + v56 <= 23) {
          v48 = v40 >= 1 ? 1 : v40;
          v64_.v64 = v48;
          if (v47 + v56 <= 15) {
            if (v48 <= -1) {
              v48 = -1;
            }
            v64_.v64 = v48;
          }
        }
      }
      if (v63 != 0) {
        v48 &= v48 >> 31;
        v64_.v64 = v48;
      }
      if (v47 >= 15) {
        opus_celt_39680((__int64*)a10, &v64_.v64, *v55 << 7, v55[1] << 6);
      LABEL_21:
        a2 = v57;
        goto LABEL_22;
      }
      if (v47 >= 2) {
        v49 = v48 > 0;
        if (v48 < 0) {
          v49 = -1;
        }
        v64_.v64 = v49;
        ec_enc_icdf((__int64*)a10, (2 * v49) ^ (v48 >> 31),
                    (__int64)MovieData_a5d5d, 2);
        goto LABEL_21;
      }
      if (v47 == 1) {
        v64_.v64 = v48 & (v48 >> 31);
        ec_enc_bit_logp((__int64*)a10, -v64_.v64, 1);
        goto LABEL_21;
      }
      v64_.v64 = -1;
    LABEL_22:
      v27 = v64_.v64;
      *(_WORD*)(a9 + 2LL * (v21 + *(_DWORD*)(a1 + 8) * (int)v23)) =
          ((unsigned int)(v39 + 64) >> 7) - ((_WORD)v64_.v64 << 10);
      v28 = v40 - v27;
      if (v40 - v27 < 0) {
        v28 = v27 - v40;
      }
      v19 += v28;
      v29 = (v27 << 17) + v38;
      v30 = (v27 << 17) + v32;
      v31 = (__int16)(4 * v27);
      if (v29 <= -3670016) {
        v29 = -3670016;
      }
      *(_WORD*)(a5 + 2LL * (v21 + *(_DWORD*)(a1 + 8) * (int)v23)) =
          (unsigned int)(v29 + 64) >> 7;
      *((_DWORD*)&v64_.v65 + v23++) = v30 - v61 * v31;
    } while (v58 != v23);
    a3 = v52;
    if (++v21 != v52) {
      continue;
    }
    break;
  }
LABEL_57:
  if (v54 != 0) {
    return 0;
  }
  else {
    return v19;
  }
}

__int64 unquant_coarse_energy(__int64 result, int a2, int a3, __int64 a4,
                              int a5, __int64 a6, unsigned int a7, int a8)
{
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  char* v17;
  int v18;
  int v19;
  int v20;
  signed int v21;
  int v22;
  char* v23;
  int v25;
  int v26;
  __int64 v27;

  v10 = a2;
  v11 = result;
  v27 = 0;
  if (a5 != 0) {
    v25 = 0;
    v26 = 4915;
    if (a2 >= a3) {
      return result;
    }
  }
  else {
    v12 = a8;
    v26 = *(__int16*)((char*)&MovieData_a2410 + v12 * 2);
    v25 = MovieData_a2418[v12];
    if (a2 >= a3) {
      return result;
    }
  }
  if ((int)a7 <= 1) {
    v13 = 1;
  }
  else {
    v13 = a7;
  }
  v23 = (char*)&MovieData_a5c0d + 84 * a8 + 42 * a5;
  v14 = 8 * *(_DWORD*)(a6 + 8) + 32;
  do {
    v15 = 0;
    if (v10 >= 20) {
      v16 = 20;
    }
    else {
      v16 = v10;
    }
    v17 = &v23[2 * v16];
    do {
      v21 = v14 - *(_DWORD*)(a6 + 24) - __clz(*(_DWORD*)(a6 + 32));
      if (v21 >= 15) {
        result = ec_laplace_decode(a6, (unsigned __int8)*v17 << 7,
                                   (unsigned __int8)v17[1] << 6);
      }
      else if (v21 < 2) {
        if (v21 == 1) {
          result = (unsigned int)-ec_dec_bit_logp((__int64*)a6, 1);
        }
        else {
          result = 0xFFFFFFFFLL;
        }
      }
      else {
        v22 = ec_dec_icdf((__int64*)a6, MovieData_a5d5d, 2);
        result = (v22 << 31 >> 31) ^ (unsigned int)(v22 >> 1);
      }
      v18 = *(__int16*)(a4 + 2LL * (v10 + *(int*)(v11 + 8) * (int)v15));
      if (v18 <= -9216) {
        LOWORD(v18) = -9216;
      }
      *(_WORD*)(a4 + 2LL * (v10 + *(int*)(v11 + 8) * (int)v15)) = v18;
      v19 = *((_DWORD*)&v27 + v15) + ((_DWORD)result << 17);
      v20 = v19 + ((v25 * *(__int16*)(a4 + 2LL * (v10 + *(int*)(v11 + 8) *
                                                            (int)v15)) +
                    128) >>
                   8);
      if (v20 <= -3670016) {
        v20 = -3670016;
      }
      *(_WORD*)(a4 + 2LL * (v10 + *(int*)(v11 + 8) * (int)v15)) =
          (unsigned int)(v20 + 64) >> 7;
      *((_DWORD*)&v27 + v15++) = v19 - v26 * (__int16)(4 * result);
    } while (v13 != v15);
    ++v10;
  } while (v10 != a3);
  return result;
}

#pragma GCC visibility pop
