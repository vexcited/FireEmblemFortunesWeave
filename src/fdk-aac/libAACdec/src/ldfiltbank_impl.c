#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_dct_IV_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_imdct_gain_plt(_QWORD, _QWORD, _QWORD);
extern __int64 SdkData_e87c38;
extern __int64 SdkData_e87c40;
int* nn_codec_scaleValuesWithFactor(int* result, int, int, unsigned int);
__int64 nn_codec_InvMdctTransformLowDelay_fdk(void* this_, int* a2, _WORD* a3,
                                              __int16* a4, int* a5, int a6);

__int64 nn_codec_InvMdctTransformLowDelay_fdk(void* this_, int* a2, _WORD* a3,
                                              __int16* a4, int* a5, int a6)
{
  int v8;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int16* v16;
  __int64 v17;
  char* v18;
  __int16* v19;
  _WORD* v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  void* v27;
  char v28;
  int v29;
  int v30;
  int v31;
  int v32;
  void* v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int* v43;
  unsigned int v44;
  int v45;
  int v46;
  _WORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int16* v51;
  __int16* v52;
  char* v53;
  int v54;
  __int64 v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  __int64 v61;
  int v62;
  unsigned __int64 v63;
  int v64;
  int v65;
  __int64 v66;
  int v67;
  int v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  _WORD* v74;
  __int16* v75;
  __int16* v76;
  __int64 v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  __int16* v83;
  _WORD* v84;
  __int16* v85;
  int v86;
  int v87;
  int v88;
  __int64 v89;
  int v91;
  int v92;
  int v93;
  int* v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  signed int v105;
  int v106;

  v106 = 0;
  v105 = (int)a2;
  v8 = (int)a5;
  if (a6 == 512) {
    v11 = SdkData_e87c38;
  }
  else {
    v11 = SdkData_e87c40;
  }
  nn_codec_imdct_gain_plt(&v106, &v105, (unsigned int)a6);
  nn_codec_dct_IV_plt(this_, (unsigned int)a6, &v105);
  if (v106 != 0) {
    nn_codec_scaleValuesWithFactor((int*)this_, v106, a6, v105);
    goto LABEL_6;
  }
  if (v105 != 0) {
    if (v105 >= 1) {
      v27 = this_;
      if ((unsigned int)v105 >= 0x1F) {
        v28 = 31;
      }
      else {
        v28 = v105;
      }
      v29 = a6 & 3;
      if ((a6 & 3) != 0) {
        *(_DWORD*)this_ <<= v28;
        v27 = (void*)((char*)this_ + 4);
        if (v29 != 1) {
          *((_DWORD*)this_ + 1) <<= v28;
          if (v29 != 2) {
            v27 = (void*)((char*)this_ + 12);
            *((_DWORD*)this_ + 2) <<= v28;
            if ((unsigned int)a6 >= 4) {
              goto LABEL_27;
            }
            goto LABEL_45;
          }
          v27 = (void*)((char*)this_ + 8);
        }
      }
      if ((unsigned int)a6 >= 4) {
      LABEL_27:
        v30 = a6 >> 2;
        v31 = (a6 >> 2) & 3;
        if (v31 != 0) {
          v30 &= 0xFFFFFFFC;
          do {
            --v31;
            v32 = *((_DWORD*)v27 + 1) << v28;
            *(_DWORD*)v27 <<= v28;
            *((_DWORD*)v27 + 1) = v32;
            v33 = (void*)((char*)v27 + 16);
            v34 = *((_DWORD*)v27 + 3) << v28;
            *((_DWORD*)v27 + 2) <<= v28;
            *((_DWORD*)v27 + 3) = v34;
            v27 = (void*)((char*)v27 + 16);
          } while (v31 != 0);
          v27 = v33;
        }
        if ((unsigned int)((a6 >> 2) - 1) >= 3) {
          do {
            v30 -= 4;
            v35 = *((_DWORD*)v27 + 1) << v28;
            *(_DWORD*)v27 <<= v28;
            *((_DWORD*)v27 + 1) = v35;
            v36 = *((_DWORD*)v27 + 3) << v28;
            *((_DWORD*)v27 + 2) <<= v28;
            *((_DWORD*)v27 + 3) = v36;
            v37 = *((_DWORD*)v27 + 5) << v28;
            *((_DWORD*)v27 + 4) <<= v28;
            *((_DWORD*)v27 + 5) = v37;
            v38 = *((_DWORD*)v27 + 7) << v28;
            *((_DWORD*)v27 + 6) <<= v28;
            *((_DWORD*)v27 + 7) = v38;
            v39 = *((_DWORD*)v27 + 9) << v28;
            *((_DWORD*)v27 + 8) <<= v28;
            *((_DWORD*)v27 + 9) = v39;
            v40 = *((_DWORD*)v27 + 11) << v28;
            *((_DWORD*)v27 + 10) <<= v28;
            *((_DWORD*)v27 + 11) = v40;
            v41 = *((_DWORD*)v27 + 13) << v28;
            *((_DWORD*)v27 + 12) <<= v28;
            *((_DWORD*)v27 + 13) = v41;
            v42 = *((_DWORD*)v27 + 15) << v28;
            *((_DWORD*)v27 + 14) <<= v28;
            *((_DWORD*)v27 + 15) = v42;
            v27 = (void*)((char*)v27 + 64);
          } while (v30 != 0);
        }
        goto LABEL_6;
      }
    LABEL_45:
      v104 = 0;
      LODWORD(v12) = 0;
      v26 = (unsigned int)(a6 / 2);
      if ((int)v26 <= 0) {
        goto LABEL_59;
      }
      goto LABEL_46;
    }
    v43 = (int*)this_;
    if ((unsigned int)-v105 < 0x1F) {
      v44 = -v105;
    }
    else {
      LOBYTE(v44) = 31;
    }
    v45 = a6 & 3;
    if ((a6 & 3) != 0) {
      *(int*)this_ >>= v44;
      v43 = (int*)((char*)this_ + 4);
      if (v45 != 1) {
        *((int*)this_ + 1) >>= v44;
        if (v45 == 2) {
          v43 = (int*)((char*)this_ + 8);
        }
        else {
          v43 = (int*)((char*)this_ + 12);
          *((int*)this_ + 2) >>= v44;
        }
      }
    }
    if ((unsigned int)a6 < 4) {
      goto LABEL_45;
    }
    v91 = a6 >> 2;
    v92 = (a6 >> 2) & 3;
    if (v92 != 0) {
      v91 &= 0xFFFFFFFC;
      do {
        --v92;
        v93 = v43[1] >> v44;
        *v43 >>= v44;
        v43[1] = v93;
        v94 = v43 + 4;
        v95 = v43[3] >> v44;
        v43[2] >>= v44;
        v43[3] = v95;
        v43 += 4;
      } while (v92 != 0);
      v43 = v94;
    }
    if ((unsigned int)((a6 >> 2) - 1) >= 3) {
      do {
        v91 -= 4;
        v96 = v43[1] >> v44;
        *v43 >>= v44;
        v43[1] = v96;
        v97 = v43[3] >> v44;
        v43[2] >>= v44;
        v43[3] = v97;
        v98 = v43[5] >> v44;
        v43[4] >>= v44;
        v43[5] = v98;
        v99 = v43[7] >> v44;
        v43[6] >>= v44;
        v43[7] = v99;
        v100 = v43[9] >> v44;
        v43[8] >>= v44;
        v43[9] = v100;
        v101 = v43[11] >> v44;
        v43[10] >>= v44;
        v43[11] = v101;
        v102 = v43[13] >> v44;
        v43[12] >>= v44;
        v43[13] = v102;
        v103 = v43[15] >> v44;
        v43[14] >>= v44;
        v43[15] = v103;
        v43 += 16;
      } while (v91 != 0);
    }
  }
LABEL_6:
  v12 = (unsigned int)(a6 / 4);
  if (a6 < 4) {
    v104 = 0;
    v26 = (unsigned int)(a6 / 2);
    if ((int)v12 >= (int)v26) {
      goto LABEL_59;
    }
    goto LABEL_46;
  }
  v13 = 0;
  v14 = -1;
  v15 = 2LL * ((unsigned int)a6 >> 1);
  v16 = &a4[2 * a6];
  v17 = v11 + 2LL * (((unsigned int)a6 >> 1) + a6);
  v18 = (char*)this_ + v15 * 2;
  v19 = &a4[v15];
  v20 = &a3[(int)(((unsigned int)(3 * a6) >> 2) - 1) * (__int64)v8];
  do {
    v21 = *(_DWORD*)&v18[4 * v13];
    v22 = v21 +
          ((int)((unsigned __int64)(*(__int16*)(v11 +
                                                2LL * (unsigned int)(2 * a6) +
                                                2 * v13) *
                                    (__int64)*(int*)&v19[2 * v13]) >>
                 16) >>
           1);
    v23 =
        *(int*)&v18[4 * v14] +
        (__int64)((int)((unsigned __int64)(*(__int16*)(v11 +
                                                       2LL *
                                                           (((unsigned int)a6 >>
                                                             1) +
                                                            2 * a6) +
                                                       2 * v13) *
                                           (__int64)*(int*)&v16[2 * v13]) >>
                        16) >>
                  1);
    *(_DWORD*)&v19[2 * v13] = v23;
    v24 = *(__int16*)(v17 + 2 * v14--);
    v25 = (int)(((unsigned __int64)(v24 * v23) >> 16) +
                ((unsigned __int64)(*(__int16*)(v17 + 2 * v13) *
                                    (__int64)*(int*)&a4[2 * v13]) >>
                 16)) >>
          13;
    if (v25 <= -32768) {
      v25 = -32768;
    }
    if (v25 >= 0x7FFF) {
      LOWORD(v25) = 0x7FFF;
    }
    *v20 = v25;
    *(_DWORD*)&a4[2 * v13] = v22;
    *(_DWORD*)&v16[2 * v13++] = v21;
    v20 -= v8;
  } while (v12 != v13);
  v104 = 1;
  v26 = (unsigned int)(a6 / 2);
  if ((int)v12 < (int)v26) {
  LABEL_46:
    v46 = ~(_DWORD)v12;
    v47 = a3;
    v48 = 2LL * a6;
    v49 = 2LL * (int)v26;
    v50 = v11 + v48 * 2;
    v51 = &a4[v48];
    v52 = &a4[v49];
    v53 = (char*)this_ + v49 * 2;
    if (3 * a6 >= 0) {
      v54 = 3 * a6;
    }
    else {
      v54 = 3 * a6 + 3;
    }
    v55 = (int)v12;
    v56 = v46 + (v54 >> 2);
    v57 = v46 + v26;
    v58 = v8 * v56;
    do {
      v59 = *(_DWORD*)&v53[4 * v55];
      v60 = v59 + ((int)((unsigned __int64)(*(__int16*)(v50 + 2 * v55) *
                                            (__int64)*(int*)&v52[2 * v55]) >>
                         16) >>
                   1);
      v61 = *((int*)this_ + v57) +
            (__int64)((int)((unsigned __int64)(*(__int16*)(v11 +
                                                           2LL * ((int)v26 +
                                                                  2 * a6) +
                                                           2 * v55) *
                                               (__int64)*(int*)&v51[2 * v55]) >>
                            16) >>
                      1);
      *(_DWORD*)&v52[2 * v55] = v61;
      v62 = *(_DWORD*)&a4[2 * v55];
      v63 = (unsigned __int64)(*(__int16*)(v11 + 2LL * ((int)v26 + a6) +
                                           2 * v55) *
                               (__int64)v62) >>
            16;
      v64 = ((unsigned __int64)(*(__int16*)(v11 + 2LL * v57) * v61) >> 16) +
            ((unsigned __int64)(*(__int16*)(v11 + 2LL * (int)v26 + 2 * v55) *
                                (__int64)v62) >>
             16);
      v65 = a6 + v57--;
      v66 = *(__int16*)(v11 + 2LL * v65);
      v67 = v64 >> 12;
      if (v67 <= -32768) {
        v67 = -32768;
      }
      if (v67 >= 0x7FFF) {
        LOWORD(v67) = 0x7FFF;
      }
      *v47 = v67;
      v47 += v8;
      v68 = (int)(((unsigned __int64)(v66 * v61) >> 16) + v63) >> 13;
      if (v68 <= -32768) {
        v68 = -32768;
      }
      if (v68 >= 0x7FFF) {
        LOWORD(v68) = 0x7FFF;
      }
      a3[v58] = v68;
      *(_DWORD*)&a4[2 * v55] = v60;
      *(_DWORD*)&v51[2 * v55++] = v59;
      v58 -= v8;
    } while ((int)v26 != v55);
  }
LABEL_59:
  if (v104 == 0) {
    return 1;
  }
  v69 = v12;
  v70 = (unsigned int)(3 * a6) >> 2;
  v71 = v12 & 3;
  if ((unsigned int)(v12 - 1) < 3) {
    v72 = 0;
    if ((v12 & 3) == 0) {
      return 1;
    }
    goto LABEL_82;
  }
  v73 = 0;
  v74 = a3;
  v75 = a4 + 4;
  v76 = (__int16*)(v11 + 2 * v26 + 4);
  do {
    v73 -= 4;
    v77 = (*(v76 - 2) * (__int64)*((int*)v75 - 2)) << 16 >> 44;
    if ((int)v77 <= -32768) {
      LODWORD(v77) = -32768;
    }
    if ((int)v77 >= 0x7FFF) {
      LOWORD(v77) = 0x7FFF;
    }
    v74[(int)v70 * (__int64)v8] = v77;
    v78 = (int)((unsigned __int64)(*(v76 - 1) * (__int64)*((int*)v75 - 1)) >>
                16) >>
          12;
    if (v78 <= -32768) {
      v78 = -32768;
    }
    if (v78 >= 0x7FFF) {
      LOWORD(v78) = 0x7FFF;
    }
    v74[v8 + (int)v70 * (__int64)v8] = v78;
    v79 = (int)((unsigned __int64)(*v76 * (__int64)*(int*)v75) >> 16) >> 12;
    if (v79 <= -32768) {
      v79 = -32768;
    }
    if (v79 >= 0x7FFF) {
      LOWORD(v79) = 0x7FFF;
    }
    v74[((int)v70 + 2) * (__int64)v8] = v79;
    v80 = *((_DWORD*)v75 + 1);
    v81 = v76[1];
    v75 += 8;
    v76 += 4;
    v82 = (int)((unsigned __int64)(v81 * (__int64)v80) >> 16) >> 12;
    if (v82 <= -32768) {
      v82 = -32768;
    }
    if (v82 >= 0x7FFF) {
      LOWORD(v82) = 0x7FFF;
    }
    v74[((int)v70 + 3) * (__int64)v8] = v82;
    v74 += 4 * v8;
  } while (-(__int64)(v69 & 0x7FFFFFFC) != v73);
  v72 = -v73;
  if (v71 != 0) {
  LABEL_82:
    v83 = &a4[2 * v72];
    v84 = &a3[(v72 + v70) * v8];
    v85 = (__int16*)(v11 + 2 * v72 + 2 * v26);
    do {
      v87 = *(_DWORD*)v83;
      v83 += 2;
      v86 = v87;
      v88 = *v85++;
      v89 = (v88 * (__int64)v86) << 16 >> 44;
      if ((int)v89 <= -32768) {
        LODWORD(v89) = -32768;
      }
      if ((int)v89 >= 0x7FFF) {
        LOWORD(v89) = 0x7FFF;
      }
      --v71;
      *v84 = v89;
      v84 += v8;
    } while (v71 != 0);
  }
  return 1;
}

#pragma GCC visibility pop
