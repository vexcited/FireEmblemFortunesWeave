#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 encode_size(_QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 opus_packet_get_nb_frames_plt(_QWORD, _QWORD);
__int64 opus_packet_get_samples_per_frame_plt(_QWORD, _QWORD);
__int64 opus_packet_parse_impl(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                               _QWORD, _QWORD);
__int64 opus_repacketizer_out_range_impl(char* a1, unsigned int a2, int a3,
                                         _BYTE* a4, int a5, int a6, int a7);
__int64 opus_packet_pad(_BYTE* a1, unsigned int a2, int a3);

__int64 opus_repacketizer_out_range_impl(char* a1, unsigned int a2, int a3,
                                         _BYTE* a4, int a5, int a6, int a7)
{
  unsigned int v7;
  __int64 v8;
  __int64 v10;
  __int16* v11;
  int v12;
  char v13;
  int v14;
  int v15;
  _BYTE* v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  char* v21;
  _BYTE* v22;
  int v23;
  int v24;
  _BYTE* v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  char v30;
  char v31;
  char v32;
  bool v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int16* v38;
  __int64 v39;
  int v40;
  bool v41;
  int v42;
  int v43;
  int v44;
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
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  char* v67;
  int v68;
  int v69;
  int v70;
  int v71;
  _BYTE* v72;
  _BYTE* v73;
  int v74;
  int v75;
  __int64 v76;
  char v77;
  __int64 v78;
  char* v79;
  int v80;
  _BYTE* v81;
  __int16* v82;
  unsigned int v83;
  _BYTE* v84;
  int v85;
  char* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  char* v92;
  char* v93;
  _BYTE* v94;
  _BYTE* v95;
  _BYTE* v96;
  _BYTE* v97;
  _BYTE* v98;
  _BYTE* v99;
  _BYTE* v100;
  __int64 v101;
  char* v102;
  __int64* v103;
  __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  char* v108;
  int v109;
  char* v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;

  v7 = -1;
  if ((a2 & 0x80000000) != 0) {
    return v7;
  }
  v8 = a3 - a2;
  if (a3 <= (int)a2) {
    return v7;
  }
  if (a3 > *((_DWORD*)a1 + 1)) {
    return (unsigned int)-1;
  }
  v10 = a2;
  v11 = (__int16*)&a1[2 * a2 + 392];
  if (a6 == 0) {
    v12 = 0;
    if ((_DWORD)v8 != 2) {
      goto LABEL_10;
    }
  LABEL_14:
    v14 = (unsigned __int16)*v11;
    v15 = *(unsigned __int16*)&a1[2 * a2 + 394];
    if (v15 != v14) {
      v20 = v12 + (__int16)v15 + (__int16)v14;
      if ((__int16)v14 > 251) {
        ++v20;
      }
      if (v20 + 2 > a5) {
        return (unsigned int)-2;
      }
      v21 = a1;
      v12 = v20 + 2;
      v22 = a4;
      v23 = a7;
      v24 = a6;
      *a4 = *a1 & 0xFC | 2;
      v25 = a4 + 1;
      v26 = encode_size((unsigned int)*v11, a4 + 1);
      a6 = v24;
      a7 = v23;
      a4 = v22;
      v27 = v26;
      a1 = v21;
      v16 = &v25[v27];
      if (v23 == 0) {
        goto LABEL_91;
      }
      goto LABEL_20;
    }
    v12 += 2 * (__int16)v14 + 1;
    if (v12 > a5) {
      return (unsigned int)-2;
    }
    v13 = *a1 & 0xFC | 1;
    goto LABEL_17;
  }
  if (v11[(int)v8 - 1] <= 251) {
    v12 = 1;
  }
  else {
    v12 = 2;
  }
  if ((_DWORD)v8 == 2) {
    goto LABEL_14;
  }
LABEL_10:
  if ((_DWORD)v8 == 1) {
    v12 += *v11 + 1;
    if (v12 > a5) {
      return (unsigned int)-2;
    }
    v13 = *a1 & 0xFC;
  LABEL_17:
    *a4 = v13;
    v16 = a4 + 1;
    goto LABEL_19;
  }
  v16 = a4;
  if ((int)v8 > 2) {
    goto LABEL_21;
  }
LABEL_19:
  if (a7 == 0) {
    goto LABEL_91;
  }
LABEL_20:
  if (v12 < a5) {
  LABEL_21:
    if (a6 != 0) {
      if (v11[(int)v8 - 1] <= 251) {
        v17 = 3;
      }
      else {
        v17 = 4;
      }
      v18 = *v11;
      v19 = v8 - 2;
      if ((int)v8 < 2) {
      LABEL_36:
        v12 = v17 + v8 * v18;
        if (v12 <= a5) {
          v30 = *a1;
          v31 = 1;
          a4[1] = v8;
          *a4 = v30 | 3;
          v32 = v8;
          v16 = a4 + 2;
          v34 = a5 - v12;
          v33 = a5 == v12;
          if (a7 == 0) {
          LABEL_84:
            if ((int)v8 < 2) {
              v77 = 1;
            }
            else {
              v77 = v31;
            }
            if ((v77 & 1) == 0) {
              v112 = v10;
              v78 = (unsigned int)(v8 - 1);
              v109 = a6;
              v79 = a1;
              v80 = a7;
              v81 = a4;
              v82 = v11;
              do {
                v83 = *v82++;
                v16 += (int)encode_size(v83, v16);
                --v78;
              } while (v78 != 0);
              a6 = v109;
              v10 = v112;
              a4 = v81;
              a7 = v80;
              a1 = v79;
            }
            goto LABEL_91;
          }
        LABEL_77:
          if (!v33) {
            a4[1] = v32 | 0x40;
            v71 = (v34 - 1) / 255;
            if (v34 >= 256) {
              v108 = a1;
              v111 = v10;
              v72 = v16;
              v73 = a4;
              v74 = a7;
              v75 = a6;
              if (v71 <= 1) {
                v76 = 1;
              }
              else {
                v76 = (unsigned int)v71;
              }
              memset_plt(v72, 255, v76);
              a6 = v75;
              a1 = v108;
              v10 = v111;
              a4 = v73;
              a7 = v74;
              v16 = &v73[v76 + 2];
            }
            v12 = a5;
            *v16++ = v71 + v34 - 1;
          }
          goto LABEL_84;
        }
        return (unsigned int)-2;
      }
    }
    else {
      v17 = 2;
      v18 = *v11;
      v19 = v8 - 2;
      if ((int)v8 < 2) {
        goto LABEL_36;
      }
    }
    v28 = v8 - 1;
    v29 = 2 * v10 + 394;
    while (*(unsigned __int16*)&a1[v29] == (unsigned __int16)v18) {
      --v28;
      v29 += 2;
      if (v28 == 0) {
        goto LABEL_36;
      }
    }
    v35 = v8 - 1;
    v36 = ((int)v8 - 1) & 7LL;
    if (v19 >= 7) {
      v38 = v11 + 7;
      v39 = 0;
      do {
        v40 = *(v38 - 7);
        v39 -= 8;
        v41 = v40 <= 251;
        v42 = v17 + v40;
        v43 = *(v38 - 6);
        if (v41) {
          v44 = 1;
        }
        else {
          v44 = 2;
        }
        v41 = v43 <= 251;
        v45 = v42 + v43;
        v46 = *(v38 - 5);
        if (v41) {
          v47 = 1;
        }
        else {
          v47 = 2;
        }
        v41 = v46 <= 251;
        v48 = v45 + v44 + v47 + v46;
        v49 = *(v38 - 4);
        if (v41) {
          v50 = 1;
        }
        else {
          v50 = 2;
        }
        v41 = v49 <= 251;
        v51 = v50 + v49;
        if (v41) {
          v52 = 1;
        }
        else {
          v52 = 2;
        }
        v53 = v48 + v51 + v52;
        v54 = *(v38 - 3);
        if (v54 <= 251) {
          v55 = 1;
        }
        else {
          v55 = 2;
        }
        v56 = v54 + v55;
        v57 = *(v38 - 2);
        v58 = v56 + v57;
        if (v57 <= 251) {
          v59 = 1;
        }
        else {
          v59 = 2;
        }
        v60 = v53 + v58 + v59;
        v61 = *(v38 - 1);
        if (v61 <= 251) {
          v62 = 1;
        }
        else {
          v62 = 2;
        }
        v63 = v61 + v62;
        v64 = *v38;
        v38 += 8;
        v65 = v63 + v64;
        if (v64 <= 251) {
          v66 = 1;
        }
        else {
          v66 = 2;
        }
        v17 = v60 + v65 + v66;
      } while (-(__int64)(v35 & 0xFFFFFFF8) != v39);
      v37 = -v39;
    }
    else {
      v37 = 0;
    }
    if (v36 != 0) {
      v67 = &a1[2 * v37 + 392 + 2 * v10];
      do {
        v68 = *(__int16*)v67;
        v67 += 2;
        v69 = v17 + v68;
        if (v68 <= 251) {
          v70 = 1;
        }
        else {
          v70 = 2;
        }
        --v36;
        v17 = v69 + v70;
      } while (v36 != 0);
    }
    v12 = v17 + v11[v35];
    if (v12 <= a5) {
      v31 = 0;
      *a4 = *a1 | 3;
      v32 = v8 | 0x80;
      a4[1] = v8 | 0x80;
      v16 = a4 + 2;
      v34 = a5 - v12;
      v33 = a5 == v12;
      if (a7 == 0) {
        goto LABEL_84;
      }
      goto LABEL_77;
    }
    return (unsigned int)-2;
  }
LABEL_91:
  v84 = a4;
  v85 = a7;
  if (a6 != 0) {
    v86 = a1;
    v16 += (int)encode_size((unsigned int)v11[(int)v8 - 1], v16);
    a1 = v86;
  }
  if ((int)v8 >= 1) {
    v87 = v8 & 7;
    if ((unsigned int)v8 >= 8) {
      v89 = v10;
      v90 = 0;
      v110 = a1;
      v113 = v10;
      v91 = -(v8 & 0x7FFFFFF8);
      v92 = &a1[2 * v89 + 406];
      v93 = &a1[8 * v89 + 32];
      do {
        memmove_plt(v16, *((_QWORD*)v93 - 3), *((__int16*)v92 - 7));
        v94 = &v16[*((__int16*)v92 - 7)];
        memmove_plt(v94, *((_QWORD*)v93 - 2), *((__int16*)v92 - 6));
        v95 = &v94[*((__int16*)v92 - 6)];
        memmove_plt(v95, *((_QWORD*)v93 - 1), *((__int16*)v92 - 5));
        v96 = &v95[*((__int16*)v92 - 5)];
        memmove_plt(v96, *(_QWORD*)v93, *((__int16*)v92 - 4));
        v97 = &v96[*((__int16*)v92 - 4)];
        memmove_plt(v97, *((_QWORD*)v93 + 1), *((__int16*)v92 - 3));
        v98 = &v97[*((__int16*)v92 - 3)];
        memmove_plt(v98, *((_QWORD*)v93 + 2), *((__int16*)v92 - 2));
        v99 = &v98[*((__int16*)v92 - 2)];
        memmove_plt(v99, *((_QWORD*)v93 + 3), *((__int16*)v92 - 1));
        v100 = &v99[*((__int16*)v92 - 1)];
        memmove_plt(v100, *((_QWORD*)v93 + 4), *(__int16*)v92);
        v101 = *(__int16*)v92;
        v90 -= 8;
        v92 += 16;
        v93 += 64;
        v16 = &v100[v101];
      } while (v91 != v90);
      a1 = v110;
      v10 = v113;
      v88 = -v90;
    }
    else {
      v88 = 0;
    }
    if (v87 != 0) {
      v102 = &a1[2 * v88 + 392 + 2 * v10];
      v103 = (__int64*)&a1[8 * v88 + 8 + 8 * v10];
      do {
        v104 = *v103++;
        memmove_plt(v16, v104, *(__int16*)v102);
        v105 = *(__int16*)v102;
        v102 += 2;
        --v87;
        v16 += v105;
      } while (v87 != 0);
    }
  }
  if (v85 != 0) {
    v106 = (unsigned __int64)&v84[a5];
    if ((unsigned __int64)v16 < v106) {
      memset_plt(v16, 0, v106 - (_QWORD)v16);
    }
  }
  return (unsigned int)v12;
}

__int64 opus_packet_pad(_BYTE* a1, unsigned int a2, int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  _BYTE* v9;
  int v10;
  _BYTE* v11;
  char* v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char v18[4];
  int v19;
  __int64 v20;
  _DWORD v21[27];
  char v22[4];
  __int64 v23;
  __int64 v24;

  if ((int)a2 >= 1) {
    if (a2 == a3) {
      return 0;
    }
    if ((int)a2 <= a3) {
      v23 = v3;
      v24 = v4;
      memset_plt(v18, 0, 496);
      v9 = &a1[a3];
      v10 = a3;
      v11 = a1;
      v12 = &v9[-a2];
      memmove_plt(v12, a1, a2);
      v18[0] = *v12;
      v13 = opus_packet_get_samples_per_frame_plt(v12, 8000);
      v21[24] = v13;
      v14 = opus_packet_get_nb_frames_plt(v12, a2);
      if (v14 < 1) {
        return 4294967292LL;
      }
      v15 = v14;
      if (v14 * v13 > 960) {
        return 4294967292LL;
      }
      v22[0] = 0;
      result = opus_packet_parse_impl(v12, a2, 0, v22, &v20, v21, 0, 0);
      if ((int)result >= 1) {
        v16 = v19 + v15;
        v19 += v15;
      LABEL_10:
        v17 = opus_repacketizer_out_range_impl(v18, 0, v16, v11, v10, 0, 1);
        return v17 & (unsigned int)(v17 >> 31);
      }
      if ((_DWORD)result == 0) {
        v16 = v19;
        goto LABEL_10;
      }
      return result;
    }
  }
  return 0xFFFFFFFFLL;
}

#pragma GCC visibility pop
