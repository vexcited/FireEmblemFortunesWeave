#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nndetailImageJpeg_jpeg_fill_bit_buffer_plt(_QWORD, _QWORD);
__int64 nndetailImageJpeg_jpeg_huff_decode_plt(_QWORD, _QWORD);
extern __int64 SdkData_e868f0;
__int64 libjpegturbonx_4b820(__int64 a1, __int64 a2);
__int64 libjpegturbonx_4bae0(__int64 a1, _QWORD* a2);
__int64 libjpegturbonx_4bde0(__int64 a1, __int64 a2);
__int64 libjpegturbonx_4bfa0(_QWORD** a1, __int64* a2);
__int64 libjpegturbonx_53f20(__int64 a1);

__int64 libjpegturbonx_4b820(__int64 a1, __int64 a2)
{
  int v2;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  _WORD* v18;
  __int64 v19;
  __int64 result;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  __int64 v29;
  __int64 v30;
  int v31;
  struct {
    __int64 v32;
    __int64 v33;
    unsigned __int64 v34;
    __int64 v35;
    __int64 v36;
  } v32_;

  v2 = *(_DWORD*)(a1 + 552);
  v3 = *(_QWORD*)(a1 + 624);
  v32_.v34 = 0;
  v32_.v35 = 0;
  v27 = v2;
  if (*(_DWORD*)(a1 + 380) != 0 && *(_DWORD*)(v3 + 60) == 0) {
    *(_DWORD*)(*(_QWORD*)(a1 + 616) + 36LL) +=
        (signed __int32)*(_DWORD*)(v3 + 32) / 8;
    *(_DWORD*)(v3 + 32) = 0;
    result = (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 616) + 16LL))((void*)a1);
    if ((_DWORD)result == 0) {
      return result;
    }
    if (*(int*)(a1 + 448) >= 1) {
      v24 = 0;
      do {
        *(_DWORD*)(v3 + 44 + 4 * v24++) = 0;
      } while (v24 < *(int*)(a1 + 448));
    }
    *(_DWORD*)(v3 + 40) = 0;
    *(_DWORD*)(v3 + 60) = *(_DWORD*)(a1 + 380);
    if (*(_DWORD*)(a1 + 572) == 0) {
      *(_DWORD*)(v3 + 16) = 0;
    }
  }
  if (*(_DWORD*)(v3 + 16) == 0) {
    v5 = *(__int64**)(a1 + 48);
    v32_.v36 = a1;
    v6 = *v5;
    v7 = v5[1];
    v32_.v32 = *v5;
    v32_.v33 = v7;
    v8 = *(_QWORD*)(v3 + 48);
    v9 = v3 + 40;
    v10 = *(_QWORD*)(v3 + 24);
    v11 = *(_DWORD*)(v3 + 32);
    v29 = *(_QWORD*)(v3 + 40);
    v30 = v8;
    v31 = *(_DWORD*)(v3 + 56);
    if (*(int*)(a1 + 496) >= 1) {
      v12 = 0;
      while (1) {
        v17 = *(int*)(a1 + 500 + 4 * v12);
        v18 = *(_WORD**)(a2 + 8 * v12);
        v19 = *(_QWORD*)(v3 + 64 +
                         8LL * *(int*)(*(_QWORD*)(a1 + 456 + 8 * v17) + 20LL));
        if (v11 < 8) {
          result = nndetailImageJpeg_jpeg_fill_bit_buffer_plt(&v32_.v32, v10);
          if ((_DWORD)result == 0) {
            return result;
          }
          v10 = v32_.v34;
          v11 = v32_.v35;
          if ((int)v32_.v35 < 8) {
            goto LABEL_17;
          }
        }
        v21 = *(_DWORD*)(v19 +
                         4LL * (unsigned __int8)(v10 >>
                                                 ((unsigned __int8)v11 - 8)) +
                         296);
        if (v21 >> 8 > 8) {
        LABEL_17:
          v23 = nndetailImageJpeg_jpeg_huff_decode_plt(&v32_.v32, v10);
          if (v23 < 0) {
            return 0;
          }
          v10 = v32_.v34;
          v11 = v32_.v35;
          v22 = v23;
          if (v23 != 0) {
          LABEL_19:
            if (v11 < v22) {
              result =
                  nndetailImageJpeg_jpeg_fill_bit_buffer_plt(&v32_.v32, v10);
              if ((_DWORD)result == 0) {
                return result;
              }
              v10 = v32_.v34;
              v11 = v32_.v35;
            }
            v11 -= v22;
            v13 = (v10 >> v11) & ~(-1 << v22);
            if (v13 < 1 << (v22 - 1)) {
              v14 = (-1 << v22) + 1;
            }
            else {
              v14 = 0;
            }
            v15 = v14 + v13;
            goto LABEL_10;
          }
        }
        else {
          v11 -= v21 >> 8;
          v22 = (unsigned __int8)v21;
          if ((_BYTE)v21 != 0) {
            goto LABEL_19;
          }
        }
        v15 = 0;
      LABEL_10:
        ++v12;
        v16 = (unsigned int)(*((_DWORD*)&v29 + v17 + 1) + v15);
        *((_DWORD*)&v29 + v17 + 1) = v16;
        *v18 = v16 << v27;
        if (v12 >= *(int*)(a1 + 496)) {
          v6 = v32_.v32;
          v5 = *(__int64**)(a1 + 48);
          v9 = v3 + 40;
          break;
        }
      }
    }
    *v5 = v6;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL) = v32_.v33;
    v25 = v29;
    v26 = v30;
    *(_QWORD*)(v3 + 24) = v10;
    *(_DWORD*)(v3 + 32) = v11;
    *(_QWORD*)v9 = v25;
    *(_QWORD*)(v9 + 8) = v26;
    *(_DWORD*)(v9 + 16) = v31;
  }
  result = 1;
  --*(_DWORD*)(v3 + 60);
  return result;
}

__int64 libjpegturbonx_4bae0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;
  _QWORD* v9;
  __int64 result;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  int v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;

  v2 = *(_QWORD*)(a1 + 624);
  v3 = *(_DWORD*)(a1 + 544);
  v4 = *(_DWORD*)(a1 + 552);
  v6 = *(_DWORD*)(a1 + 380);
  v32 = 0;
  v33 = 0;
  if (v6 != 0 && *(_DWORD*)(v2 + 60) == 0) {
    v9 = a2;
    *(_DWORD*)(*(_QWORD*)(a1 + 616) + 36LL) += *(_DWORD*)(v2 + 32) / 8;
    *(_DWORD*)(v2 + 32) = 0;
    result = (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 616) + 16LL))((void*)a1);
    if ((_DWORD)result == 0) {
      return result;
    }
    if (*(int*)(a1 + 448) >= 1) {
      v11 = 0;
      do {
        *(_DWORD*)(v2 + 44 + 4 * v11++) = 0;
      } while (v11 < *(int*)(a1 + 448));
    }
    *(_DWORD*)(v2 + 40) = 0;
    a2 = v9;
    *(_DWORD*)(v2 + 60) = *(_DWORD*)(a1 + 380);
    if (*(_DWORD*)(a1 + 572) == 0) {
      *(_DWORD*)(v2 + 16) = 0;
    }
  }
  if (*(_DWORD*)(v2 + 16) != 0) {
    goto LABEL_16;
  }
  v7 = *(_DWORD*)(v2 + 40);
  if (v7 != 0) {
    v8 = v7 - 1;
    goto LABEL_15;
  }
  v12 = *(__int64**)(a1 + 48);
  v34 = a1;
  v13 = a2;
  v14 = *(_DWORD*)(a1 + 540);
  v15 = *(_QWORD*)(v2 + 24);
  v16 = *(_DWORD*)(v2 + 32);
  v18 = *v12;
  v17 = v12[1];
  v30 = v18;
  v31 = v17;
  if (v14 > v3) {
  LABEL_13:
    v8 = 0;
    goto LABEL_14;
  }
  v19 = *(_QWORD*)(v2 + 96);
  v20 = *v13;
  while (1) {
    while (1) {
      if (v16 < 8) {
        result = nndetailImageJpeg_jpeg_fill_bit_buffer_plt(&v30, v15);
        if ((_DWORD)result == 0) {
          return result;
        }
        v15 = v32;
        v16 = v33;
        if ((int)v33 < 8) {
          break;
        }
      }
      v24 = *(
          _DWORD*)(v19 + 296 +
                   4LL * (unsigned __int8)(v15 >> ((unsigned __int8)v16 - 8)));
      if (v24 >> 8 > 8) {
        break;
      }
      v16 -= v24 >> 8;
      v25 = (unsigned __int8)v24;
      v26 = (unsigned __int8)v24 >> 4;
      v27 = v24 & 0xF;
      if ((v24 & 0xF) == 0) {
        goto LABEL_28;
      }
    LABEL_33:
      if (v16 < v27) {
        result = nndetailImageJpeg_jpeg_fill_bit_buffer_plt(&v30, v15);
        if ((_DWORD)result == 0) {
          return result;
        }
        v15 = v32;
        v16 = v33;
      }
      v16 -= v27;
      v21 = v26 + v14;
      v22 = (v15 >> v16) & ~(-1 << v27);
      if (v22 >> (v27 - 1) != 0) {
        v23 = 0;
      }
      else {
        v23 = (-1 << v27) + 1;
      }
      *(_WORD*)(v20 + 2LL * *(int*)(SdkData_e868f0 + 4LL * v21)) =
          (unsigned __int64)(v23 + v22) << v4;
      v14 = v21 + 1;
      if (v21 >= v3) {
        goto LABEL_13;
      }
    }
    v25 = nndetailImageJpeg_jpeg_huff_decode_plt(&v30, v15);
    if ((v25 & 0x80000000) != 0) {
      return 0;
    }
    v15 = v32;
    v16 = v33;
    v26 = v25 >> 4;
    v27 = v25 & 0xF;
    if ((v25 & 0xF) != 0) {
      goto LABEL_33;
    }
  LABEL_28:
    if (v26 != 15) {
      break;
    }
    v28 = v14 + 15;
    v14 += 16;
    if (v28 >= v3) {
      goto LABEL_13;
    }
  }
  v29 = 1 << v26;
  if (v25 < 0x10) {
    goto LABEL_42;
  }
  if (v16 >= v26) {
    goto LABEL_41;
  }
  result = nndetailImageJpeg_jpeg_fill_bit_buffer_plt(&v30, v15);
  if ((_DWORD)result != 0) {
    v15 = v32;
    v16 = v33;
  LABEL_41:
    v16 -= v26;
    v29 += (v29 - 1) & (v15 >> v16);
  LABEL_42:
    v8 = v29 - 1;
  LABEL_14:
    **(_QWORD**)(a1 + 48) = v30;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL) = v31;
    *(_QWORD*)(v2 + 24) = v15;
    *(_DWORD*)(v2 + 32) = v16;
  LABEL_15:
    *(_DWORD*)(v2 + 40) = v8;
  LABEL_16:
    result = 1;
    --*(_DWORD*)(v2 + 60);
  }
  return result;
}

__int64 libjpegturbonx_4bde0(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  int v4;
  __int64* v7;
  unsigned __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  _WORD* v14;
  __int64 result;
  __int64 v16;
  struct {
    __int64 v17;
    __int64 v18;
    unsigned __int64 v19;
    __int64 v20;
    __int64 v21;
  } v17_;

  v2 = *(_QWORD*)(a1 + 624);
  v3 = *(_DWORD*)(a1 + 552);
  v4 = *(_DWORD*)(a1 + 380);
  v17_.v19 = 0;
  v17_.v20 = 0;
  if (v4 != 0 && *(_DWORD*)(v2 + 60) == 0) {
    *(_DWORD*)(*(_QWORD*)(a1 + 616) + 36LL) +=
        (signed __int32)*(_DWORD*)(v2 + 32) / 8;
    *(_DWORD*)(v2 + 32) = 0;
    result = (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 616) + 16LL))((void*)a1);
    if ((_DWORD)result == 0) {
      return result;
    }
    if (*(int*)(a1 + 448) >= 1) {
      v16 = 0;
      do {
        *(_DWORD*)(v2 + 44 + 4 * v16++) = 0;
      } while (v16 < *(int*)(a1 + 448));
    }
    *(_DWORD*)(v2 + 40) = 0;
    *(_DWORD*)(v2 + 60) = *(_DWORD*)(a1 + 380);
    if (*(_DWORD*)(a1 + 572) == 0) {
      *(_DWORD*)(v2 + 16) = 0;
    }
  }
  v7 = *(__int64**)(a1 + 48);
  v17_.v21 = a1;
  v8 = *(_QWORD*)(v2 + 24);
  v9 = *(_DWORD*)(v2 + 32);
  v10 = *v7;
  v11 = v7[1];
  v17_.v17 = *v7;
  v17_.v18 = v11;
  if (*(int*)(a1 + 496) < 1) {
    goto LABEL_13;
  }
  v12 = 0;
  v13 = 1 << v3;
  do {
    v14 = *(_WORD**)(a2 + 8 * v12);
    if (v9 <= 0) {
      result = nndetailImageJpeg_jpeg_fill_bit_buffer_plt(&v17_.v17, v8);
      if ((_DWORD)result == 0) {
        return result;
      }
      v8 = v17_.v19;
      v9 = v17_.v20 - 1;
      if (((v17_.v19 >> ((unsigned __int8)v17_.v20 - 1)) & 1) != 0) {
      LABEL_11:
        *v14 |= v13;
      }
    }
    else if (((v8 >> --v9) & 1) != 0) {
      goto LABEL_11;
    }
    ++v12;
  } while (v12 < *(int*)(a1 + 496));
  v10 = v17_.v17;
  v7 = *(__int64**)(a1 + 48);
LABEL_13:
  *v7 = v10;
  result = 1;
  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL) = v17_.v18;
  *(_QWORD*)(v2 + 24) = v8;
  *(_DWORD*)(v2 + 32) = v9;
  --*(_DWORD*)(v2 + 60);
  return result;
}

__int64 libjpegturbonx_4bfa0(_QWORD** a1, __int64* a2)
{
  _QWORD* v2;
  int v3;
  int v4;
  int v7;
  __int64* v8;
  int v9;
  int v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  unsigned __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  int* v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int16 v33;
  unsigned int v34;
  __int64 v35;
  __int64 result;
  __int64 v37;
  int* v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int16 v43;
  int v44;
  unsigned int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  int* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  _BYTE v58[4];
  int v59;
  unsigned int v60;
  __int64 v61;
  int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  struct {
    __int64 v94;
    __int64 v95;
    unsigned __int64 v96;
    __int64 v97;
    _QWORD** v98;
  } v94_;

  v2 = a1[78];
  v3 = *((_DWORD*)a1 + 136);
  v4 = *((_DWORD*)a1 + 138);
  v7 = *((_DWORD*)a1 + 95);
  v94_.v96 = 0;
  v94_.v97 = 0;
  if (v7 != 0 && *((_DWORD*)v2 + 15) == 0) {
    *((_DWORD*)a1[77] + 9) += (signed __int32)*((_DWORD*)v2 + 8) / 8;
    *((_DWORD*)v2 + 8) = 0;
    result = ((__int64 (*)(void))a1[77][2])();
    if ((_DWORD)result == 0) {
      return result;
    }
    if (*((int*)a1 + 112) >= 1) {
      v37 = 0;
      do {
        *((_DWORD*)v2 + v37++ + 11) = 0;
      } while (v37 < *((int*)a1 + 112));
    }
    *((_DWORD*)v2 + 10) = 0;
    *((_DWORD*)v2 + 15) = *((_DWORD*)a1 + 95);
    if (*((_DWORD*)a1 + 143) == 0) {
      *((_DWORD*)v2 + 4) = 0;
    }
  }
  if (*((_DWORD*)v2 + 4) != 0) {
    goto LABEL_55;
  }
  v8 = a1[6];
  v94_.v98 = a1;
  v9 = *((_DWORD*)v2 + 10);
  v10 = 1 << v4;
  v11 = v2[3];
  v12 = *((_DWORD*)v2 + 8);
  v13 = *a2;
  v14 = *((_DWORD*)a1 + 135);
  v92 = 0;
  v93 = 0;
  v90 = 0;
  v91 = 0;
  v88 = 0;
  v89 = 0;
  v86 = 0;
  v87 = 0;
  v84 = 0;
  v85 = 0;
  v82 = 0;
  v83 = 0;
  v80 = 0;
  v81 = 0;
  v78 = 0;
  v79 = 0;
  v76 = 0;
  v77 = 0;
  v74 = 0;
  v75 = 0;
  v72 = 0;
  v73 = 0;
  v70 = 0;
  v71 = 0;
  v68 = 0;
  v69 = 0;
  v66 = 0;
  v67 = 0;
  v64 = 0;
  v65 = 0;
  v56 = v2;
  v62 = 0;
  v63 = 0;
  v61 = (unsigned int)(-1 << v4);
  v16 = *v8;
  v15 = v8[1];
  v94_.v94 = v16;
  v94_.v95 = v15;
  if (v9 != 0 || v14 > v3) {
    v60 = 0;
    v44 = 0;
    if (v9 != 0) {
      goto LABEL_52;
    }
    goto LABEL_54;
  }
  v60 = 0;
  v57 = v56[12] + 296LL;
  while (1) {
    if (v12 < 8) {
      if ((unsigned int)nndetailImageJpeg_jpeg_fill_bit_buffer_plt(&v94_.v94,
                                                                   v11) == 0) {
        goto LABEL_75;
      }
      v11 = v94_.v96;
      v12 = v94_.v97;
      if ((int)v94_.v97 < 8) {
        goto LABEL_16;
      }
    }
    v18 = *(_DWORD*)(v57 + 4LL * (unsigned __int8)(v11 >>
                                                   ((unsigned __int8)v12 - 8)));
    if (v18 >> 8 > 8) {
    LABEL_16:
      v20 = nndetailImageJpeg_jpeg_huff_decode_plt(&v94_.v94, v11);
      if ((v20 & 0x80000000) != 0) {
        goto LABEL_75;
      }
      v11 = v94_.v96;
      v19 = v94_.v97;
      v21 = v20 >> 4;
      v22 = v20 & 0xF;
      if ((v20 & 0xF) != 0) {
      LABEL_18:
        if (v22 != 1) {
          v24 = v11;
          *((_DWORD*)*a1 + 10) = 121;
          ((void (*)(_QWORD**, __int64))(*a1)[1])(a1, 0xFFFFFFFFLL);
          v11 = v24;
        }
        if (v19 <= 0) {
          if ((unsigned int)nndetailImageJpeg_jpeg_fill_bit_buffer_plt(
                  &v94_.v94, v11) == 0) {
            goto LABEL_75;
          }
          v11 = v94_.v96;
          v19 = v94_.v97;
        }
        if (((v11 >> --v19) & 1) != 0) {
          v23 = v10;
        }
        else {
          v23 = v61;
        }
        goto LABEL_26;
      }
    }
    else {
      v19 = v12 - (v18 >> 8);
      v20 = (unsigned __int8)*(
          _DWORD*)(v57 +
                   4LL * (unsigned __int8)(v11 >> ((unsigned __int8)v12 - 8)));
      v21 = v20 >> 4;
      v22 = *(_DWORD*)(v57 +
                       4LL * (unsigned __int8)(v11 >>
                                               ((unsigned __int8)v12 - 8))) &
            0xF;
      if (v22 != 0) {
        goto LABEL_18;
      }
    }
    if (v21 != 15) {
      break;
    }
    v23 = 0;
  LABEL_26:
    v25 = v3;
    v12 = v19;
    if (v14 <= v3) {
      v26 = v3;
    }
    else {
      v26 = v14;
    }
    v59 = v26 + 1;
    v27 = v26 - (__int64)v14 + 1;
    v28 = (int*)(SdkData_e868f0 + 4LL * v14);
    do {
      v31 = *v28++;
      v30 = v31;
      if (*(_WORD*)(v13 + 2 * v31) != 0) {
        if (v12 > 0) {
          if (((v11 >> --v12) & 1) == 0) {
            goto LABEL_31;
          }
        LABEL_38:
          v32 = *(__int16*)(v13 + 2 * v30);
          if ((v10 & v32) == 0) {
            v33 = v61;
            if (v32 >= 0) {
              v33 = v10;
            }
            *(_WORD*)(v13 + 2 * v30) = v32 + v33;
          }
          goto LABEL_31;
        }
        if ((unsigned int)nndetailImageJpeg_jpeg_fill_bit_buffer_plt(
                &v94_.v94, v11) == 0) {
          goto LABEL_75;
        }
        v11 = v94_.v96;
        v12 = v94_.v97 - 1;
        if (((v94_.v96 >> ((unsigned __int8)v94_.v97 - 1)) & 1) != 0) {
          goto LABEL_38;
        }
      }
      else {
        v29 = __OFSUB__(v21--, 1);
        if (v21 < 0 != v29) {
          goto LABEL_43;
        }
      }
    LABEL_31:
      ++v14;
      --v27;
    } while (v27 != 0);
    v14 = v59;
  LABEL_43:
    v3 = v25;
    if (v23 != 0) {
      v34 = v60;
      v35 = *(int*)(SdkData_e868f0 + 4LL * v14);
      *(_WORD*)(v13 + 2 * v35) = v23;
      *((_DWORD*)&v61 + (int)v34 + 1) = v35;
      v60 = v34 + 1;
    }
    if (v14++ >= v25) {
      v44 = 0;
      goto LABEL_54;
    }
  }
  v9 = 1 << v21;
  if (v20 < 0x10) {
    v12 = v19;
    goto LABEL_52;
  }
  if (v19 >= v21) {
  LABEL_74:
    v12 = v19 - v21;
    v9 += (v9 - 1) & (v11 >> ((unsigned __int8)v19 - (unsigned __int8)v21));
  LABEL_52:
    if (v14 > v3) {
    LABEL_53:
      v44 = v9 - 1;
    LABEL_54:
      v2 = v56;
      *a1[6] = v94_.v94;
      a1[6][1] = v94_.v95;
      v2[3] = v11;
      *((_DWORD*)v2 + 8) = v12;
      *((_DWORD*)v2 + 10) = v44;
    LABEL_55:
      result = 1;
      --*((_DWORD*)v2 + 15);
      return result;
    }
    v38 = (int*)(SdkData_e868f0 + 4LL * v14);
    v39 = v3 - v14 + 1;
    while (1) {
      v41 = *v38++;
      v40 = v41;
      if (*(_WORD*)(v13 + 2 * v41) != 0) {
        if (v12 <= 0) {
          if ((unsigned int)nndetailImageJpeg_jpeg_fill_bit_buffer_plt(
                  &v94_.v94, v11) == 0) {
            goto LABEL_75;
          }
          v11 = v94_.v96;
          v12 = v94_.v97 - 1;
          if (((v94_.v96 >> ((unsigned __int8)v94_.v97 - 1)) & 1) != 0) {
          LABEL_65:
            v42 = *(__int16*)(v13 + 2 * v40);
            if ((v10 & v42) == 0) {
              v43 = v61;
              if (v42 >= 0) {
                v43 = v10;
              }
              *(_WORD*)(v13 + 2 * v40) = v42 + v43;
            }
          }
        }
        else if (((v11 >> --v12) & 1) != 0) {
          goto LABEL_65;
        }
      }
      if (--v39 == 0) {
        goto LABEL_53;
      }
    }
  }
  if ((unsigned int)nndetailImageJpeg_jpeg_fill_bit_buffer_plt(&v94_.v94,
                                                               v11) != 0) {
    v11 = v94_.v96;
    v19 = v94_.v97;
    goto LABEL_74;
  }
LABEL_75:
  v45 = v60;
  if ((int)v60 >= 1) {
    v46 = v60;
    v47 = v60 & 7;
    if (v47 != 0) {
      do {
        v48 = v46 - 1;
        --v47;
        *(_WORD*)(v13 + 2LL * *((int*)&v61 + v46--)) = 0;
      } while (v47 != 0);
      if (v45 < 8) {
        return 0;
      }
    }
    else {
      v48 = v60;
      if (v60 < 8) {
        return 0;
      }
    }
    v49 = v48 + 1;
    v50 = (int*)&v58[4 * v48];
    do {
      v51 = v50[2];
      v49 -= 8LL;
      *(_WORD*)(v13 + 2LL * v50[3]) = 0;
      *(_WORD*)(v13 + 2 * v51) = 0;
      v52 = *v50;
      *(_WORD*)(v13 + 2LL * v50[1]) = 0;
      *(_WORD*)(v13 + 2 * v52) = 0;
      v53 = *(v50 - 2);
      *(_WORD*)(v13 + 2LL * *(v50 - 1)) = 0;
      *(_WORD*)(v13 + 2 * v53) = 0;
      v55 = *(v50 - 4);
      v54 = *(v50 - 3);
      v50 -= 8;
      *(_WORD*)(v13 + 2 * v54) = 0;
      *(_WORD*)(v13 + 2 * v55) = 0;
    } while (v49 > 1);
  }
  return 0;
}

__int64 libjpegturbonx_53f20(__int64 a1)
{
  int v1;
  __int64 v2;
  __int64 v4;
  __int64 result;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  _BYTE* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  char v28;
  _BYTE* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;

  v1 = *(_DWORD*)(a1 + 120);
  v2 = *(_QWORD*)(a1 + 656);
  if (v1 == 1) {
    v4 = 766;
  }
  else {
    v4 = 256;
  }
  *(_DWORD*)(v2 + 56) = v1 == 1;
  result = (*(__int64 (**)(__int64, __int64, __int64, _QWORD))(
      *(_QWORD*)(a1 + 8) + 16LL))(a1, 1, v4, *(unsigned int*)(a1 + 152));
  *(_QWORD*)(v2 + 48) = result;
  if (*(int*)(a1 + 152) >= 1) {
    v6 = *(_DWORD*)(v2 + 40);
    v7 = v2 + 60;
    if (v1 == 1) {
      v8 = 0;
      while (1) {
        v9 = *(int*)(v7 + 4 * v8);
        v10 = 0;
        v11 = 0;
        v12 = v9 + 254;
        v6 /= (int)v9;
        *(_QWORD*)(*(_QWORD*)(v2 + 48) + 8 * v8) += 255LL;
        v13 = 2 * v9;
        v14 = v9 + 764;
        v15 = v13 - 2;
        v16 = v12 / v15;
        v17 = *(char**)(*(_QWORD*)(v2 + 48) + 8 * v8);
        v18 = v17 + 1;
        do {
          if (v10 > (int)v16) {
            v19 = v14 + 510LL * v11;
            do {
              v16 = v19 / v15;
              ++v11;
              v19 += 510;
            } while (v10 > (int)v16);
          }
          v17[v10] = v11 * v6;
          if (v10 >= (int)v16) {
            v21 = v14 + 510LL * v11;
            do {
              v22 = v21 / v15;
              ++v11;
              v21 += 510;
            } while (v10 >= (int)v22);
            LODWORD(v16) = v22;
            v18[v10] = v11 * v6;
            v20 = v10 | 2;
            if ((v10 | 2) <= (int)v16) {
            LABEL_14:
              v17[v20] = v11 * v6;
              result = v10 | 3;
              if ((v10 | 3) <= (int)v16) {
                goto LABEL_8;
              }
            LABEL_22:
              v25 = v14 + 510LL * v11;
              do {
                v26 = v25 / v15;
                ++v11;
                v25 += 510;
              } while (result > (int)v26);
              LODWORD(v16) = v26;
              goto LABEL_8;
            }
          }
          else {
            v18[v10] = v11 * v6;
            v20 = v10 | 2;
            if ((v10 | 2) <= (int)v16) {
              goto LABEL_14;
            }
          }
          v23 = v14 + 510LL * v11;
          do {
            v24 = v23 / v15;
            ++v11;
            v23 += 510;
          } while (v20 > (int)v24);
          LODWORD(v16) = v24;
          v17[v20] = v11 * v6;
          result = v10 | 3;
          if ((v10 | 3) > (int)v24) {
            goto LABEL_22;
          }
        LABEL_8:
          v10 += 4;
          v17[result] = v11 * v6;
        } while (v10 != 256);
        v27 = v17 - 8;
        v28 = *v17;
        v29 = v17 + 272;
        v30 = -255;
        do {
          v27[7] = v28;
          v30 += 17;
          *(v29 - 16) = v17[255];
          v27[6] = v28;
          *(v29 - 15) = v17[255];
          v27[5] = v28;
          *(v29 - 14) = v17[255];
          v27[4] = v28;
          *(v29 - 13) = v17[255];
          v27[3] = v28;
          *(v29 - 12) = v17[255];
          v27[2] = v28;
          *(v29 - 11) = v17[255];
          v27[1] = v28;
          *(v29 - 10) = v17[255];
          *v27 = v28;
          *(v29 - 9) = v17[255];
          *(v27 - 1) = v28;
          *(v29 - 8) = v17[255];
          *(v27 - 2) = v28;
          *(v29 - 7) = v17[255];
          *(v27 - 3) = v28;
          *(v29 - 6) = v17[255];
          *(v27 - 4) = v28;
          *(v29 - 5) = v17[255];
          *(v27 - 5) = v28;
          *(v29 - 4) = v17[255];
          *(v27 - 6) = v28;
          *(v29 - 3) = v17[255];
          *(v27 - 7) = v28;
          *(v29 - 2) = v17[255];
          *(v27 - 8) = v28;
          *(v29 - 1) = v17[255];
          *(v27 - 9) = v28;
          v27 -= 17;
          *v29 = v17[255];
          v29 += 17;
        } while (v30 != 0);
        if (++v8 >= *(int*)(a1 + 152)) {
          return result;
        }
      }
    }
    v31 = 0;
  LABEL_31:
    v32 = *(int*)(v7 + 4 * v31);
    v33 = 0;
    v34 = 0;
    v6 /= (int)v32;
    v35 = *(_QWORD*)(*(_QWORD*)(v2 + 48) + 8 * v31);
    v36 = 2 * v32;
    v37 = v32 + 254;
    v38 = v32 + 764;
    v39 = v36 - 2;
    v40 = v37 / v39;
    v41 = v35 + 1;
    while (1) {
      if (v33 > (int)v40) {
        v42 = v38 + 510LL * v34;
        do {
          v40 = v42 / v39;
          ++v34;
          v42 += 510;
        } while (v33 > (int)v40);
      }
      *(_BYTE*)(v35 + v33) = v34 * v6;
      if (v33 >= (int)v40) {
        v44 = v38 + 510LL * v34;
        do {
          v45 = v44 / v39;
          ++v34;
          v44 += 510;
        } while (v33 >= (int)v45);
        LODWORD(v40) = v45;
        *(_BYTE*)(v41 + v33) = v34 * v6;
        v43 = v33 | 2;
        if ((v33 | 2) > (int)v40) {
        LABEL_43:
          v46 = v38 + 510LL * v34;
          do {
            v47 = v46 / v39;
            ++v34;
            v46 += 510;
          } while (v43 > (int)v47);
          LODWORD(v40) = v47;
          *(_BYTE*)(v35 + v43) = v34 * v6;
          result = v33 | 3;
          if ((v33 | 3) <= (int)v47) {
            goto LABEL_32;
          }
        LABEL_46:
          v48 = v38 + 510LL * v34;
          do {
            v49 = v48 / v39;
            ++v34;
            v48 += 510;
          } while (result > (int)v49);
          LODWORD(v40) = v49;
          goto LABEL_32;
        }
      }
      else {
        *(_BYTE*)(v41 + v33) = v34 * v6;
        v43 = v33 | 2;
        if ((v33 | 2) > (int)v40) {
          goto LABEL_43;
        }
      }
      *(_BYTE*)(v35 + v43) = v34 * v6;
      result = v33 | 3;
      if ((v33 | 3) > (int)v40) {
        goto LABEL_46;
      }
    LABEL_32:
      v33 += 4;
      *(_BYTE*)(v35 + result) = v34 * v6;
      if (v33 == 256) {
        if (++v31 >= *(int*)(a1 + 152)) {
          return result;
        }
        goto LABEL_31;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
