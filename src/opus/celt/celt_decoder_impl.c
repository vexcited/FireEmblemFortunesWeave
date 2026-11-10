#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 clt_mdct_backward_c(__int64, int*, __int16*, __int16*, int, int, int);
__int64 denormalise_bands(__int64, __int64, void* this_, unsigned __int64, int,
                          int, int, int, int);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 celt_synthesis(__int16** a1, __int64 a2, int** a3, unsigned __int64 a4,
                       int a5, int a6, int a7, int a8, int a9, int a10, int a11,
                       int a12, int a13);

__int64 celt_synthesis(__int16** a1, __int64 a2, int** a3, unsigned __int64 a4,
                       int a5, int a6, int a7, int a8, int a9, int a10, int a11,
                       int a12, int a13)
{
  int v13;
  int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  void* v23;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int* v29;
  __int64 result;
  __int64 v31;
  int v32;
  __int16** v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int16** v37;
  __int64 v38;
  int* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int* v43;
  int v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  int v48;
  int v49;
  __int64 v50;
  int v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  int v58;
  int v59;
  int v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  void* v64;
  int v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  void* v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  int v79;
  int v80;
  __int64 v81;
  int* v82;
  __int64 v83;
  int* v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  __int64 v96;
  int* v97;
  int* v98;
  int v99;
  int v100;
  int v101;
  __int16** v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  unsigned int v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  int* v111;
  int v112;
  __int64 v113;
  int v114;
  __int64 v115;
  int v116;
  __int64 v117;
  int v118;
  __int64 v119;
  int v120;
  __int64 v121;
  int v122;
  __int64 v123;
  int v124;
  __int64 v125;
  int v126;
  __int64 v127;
  __int64 v128;
  int* v129;
  int v130;
  struct {
    _BYTE v131[12];
    int v132;
    __int64 v133;
    __int64 v134;
    void* v135;
    __int64 v136;
    char gap64_[4];
    int v137;
    unsigned __int64 v138;
    int* v139;
    __int64 v140;
    char gap96_[4];
    int v141;
    int v142;
    int v143;
    int v144;
    int v145;
    __int64 v146;
    int v147;
    int v148;
    __int64 v149;
  } v131_;

  v13 = a10;
  v131_.v144 = a5;
  v131_.v145 = a6;
  v131_.v148 = a12;
  v131_.v142 = a13;
  v131_.v143 = a11;
  v19 = *((_DWORD*)a1 + 1);
  v131_.v140 = *((int*)a1 + 2);
  v20 = *((_DWORD*)a1 + 10);
  v21 = 4LL * (int)(v20 << a10);
  v22 = (int)(v20 << a10);
  v23 = (void*)&v131_.v131[-((v21 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  v25 = v21;
  v26 = *((_DWORD*)a1 + 8);
  if (a9 != 0) {
    v13 = 0;
    v27 = (unsigned int)(1 << a10);
  }
  else {
    v27 = 1;
  }
  v131_.v147 = 1 << a10;
  v131_.v133 = v27;
  if (a9 != 0) {
    v28 = v20;
  }
  else {
    v28 = v20 << a10;
  }
  v131_.v134 = v28;
  v131_.v141 = v26 - v13;
  memset_plt((void*)&v131_.v131[-((v21 + 15) & 0xFFFFFFFFFFFFFFF0LL)], nullptr,
             v21, a4);
  v131_.v146 = v22;
  v131_.v132 = a8;
  if (a7 == 1 && a8 == 2) {
    denormalise_bands((__int64)a1, a2, v23, a4, v131_.v144, v131_.v145,
                      v131_.v147, v131_.v143, v131_.v148);
    v29 = &a3[1][v19 / 2];
    result = memcpy_plt(v29, v23, v25);
    v31 = v131_.v133;
    v32 = v131_.v141;
    if ((int)v131_.v133 >= 1) {
      v131_.v139 = (int*)v23;
      v33 = a1;
      v34 = 0;
      v35 = v131_.v133;
      v36 = v19;
      v37 = v33;
      v38 = 4LL * (int)v131_.v134;
      do {
        clt_mdct_backward_c((__int64)(v37 + 9), v29,
                            (__int16*)((char*)*a3 + v34), v37[8], v36, v32,
                            v31);
        v34 += v38;
        ++v29;
        --v35;
      } while (v35 != 0);
      v39 = v131_.v139;
      v40 = 0;
      v41 = v31;
      v42 = 4LL * (int)v131_.v134;
      do {
        result = clt_mdct_backward_c((__int64)(v37 + 9), v39,
                                     (__int16*)((char*)a3[1] + v40), v37[8],
                                     v36, v32, v31);
        v40 += v42;
        ++v39;
        --v41;
      } while (v41 != 0);
    }
    goto LABEL_44;
  }
  v131_.v138 = a4;
  if (a7 != 2 || a8 != 1) {
    v57 = v131_.v147;
    v58 = v131_.v148;
    v131_.v136 = a2;
    v131_.v139 = (int*)v23;
    if ((int)v131_.v133 <= 0) {
      v73 = 2 * v22;
      v75 = v131_.v138;
      v74 = (void*)v131_.v139;
      v76 = (__int64)a1;
      if (a8 <= 1) {
        v77 = 1;
      }
      else {
        v77 = (unsigned int)a8;
      }
      v79 = v131_.v144;
      v78 = v131_.v145;
      v80 = v131_.v143;
      v81 = v131_.v136;
      v131_.v149 = 2 * v131_.v140;
      do {
        result = denormalise_bands(v76, v81, v74, v75, v79, v78, v131_.v147,
                                   v80, v58);
        v58 = v131_.v148;
        v81 += v73;
        --v77;
        v75 += v131_.v149;
      } while (v77 != 0);
    }
    else {
      v131_.v137 = v19;
      v59 = v131_.v144;
      v60 = v131_.v145;
      v61 = (__int64)a1;
      if (a8 <= 1) {
        v62 = 1;
      }
      else {
        v62 = (unsigned int)a8;
      }
      v63 = v131_.v138;
      v64 = (void*)v131_.v139;
      v65 = v131_.v143;
      v66 = v131_.v136;
      v67 = v131_.v137;
      v131_.v149 = 0;
      v131_.v135 = (void*)v62;
      v68 = v131_.v133;
      v131_.v134 = 4LL * (int)v131_.v134;
      do {
        denormalise_bands(v61, v66 + 2 * v131_.v149 * v131_.v146, v64,
                          v63 + 2 * v131_.v149 * v131_.v140, v59, v60, v57, v65,
                          v58);
        v69 = v131_.v134;
        v70 = v131_.v141;
        v71 = 0;
        v72 = v68;
        do {
          result = clt_mdct_backward_c(v61 + 72, (int*)v64,
                                       (__int16*)((char*)a3[v131_.v149] + v71),
                                       *(__int16**)(v61 + 64), v67, v70, v68);
          v71 += v69;
          v64 = (void*)((char*)v64 + 4);
          --v72;
        } while (v72 != 0);
        v66 = v131_.v136;
        v63 = v131_.v138;
        v64 = (void*)v131_.v139;
        v59 = v131_.v144;
        v60 = v131_.v145;
        v65 = v131_.v143;
        v57 = v131_.v147;
        v58 = v131_.v148;
        ++v131_.v149;
      } while ((void*)v131_.v149 != v131_.v135);
    }
    goto LABEL_44;
  }
  v43 = *a3;
  v44 = v131_.v148;
  v131_.v137 = v19;
  v45 = a2;
  v131_.v136 = v19 + ((unsigned int)v19 >> 31);
  v131_.v139 = v43;
  v131_.v149 = (__int64)&v43[v19 / 2];
  v46 = a2;
  v47 = a4;
  v49 = v131_.v144;
  v48 = v131_.v145;
  v50 = v22;
  v51 = v131_.v147;
  v52 = v131_.v143;
  denormalise_bands((__int64)a1, v46, v23, v47, v131_.v144, v131_.v145,
                    v131_.v147, v131_.v143, v131_.v148);
  result =
      denormalise_bands((__int64)a1, v45 + 2 * v50, (void*)v131_.v149,
                        v131_.v138 + 2 * v131_.v140, v49, v48, v51, v52, v44);
  v53 = v131_.v133;
  if ((int)v50 >= 1) {
    v54 = (__int64)(int)v131_.v136 >> 1;
    v55 = v50 & 7;
    if ((unsigned int)v50 < 8) {
      v56 = 0;
      if ((v50 & 7) == 0) {
        goto LABEL_41;
      }
      goto LABEL_39;
    }
    v82 = (int*)((char*)v23 + 16);
    v83 = 0;
    v84 = &v131_.v139[v54 + 4];
    do {
      v85 = *(v82 - 3);
      v83 -= 8;
      *(v82 - 4) = (*(v84 - 4) >> 1) + (*(v82 - 4) >> 1);
      v86 = (*(v84 - 3) >> 1) + (v85 >> 1);
      v87 = *(v82 - 2);
      v88 = *(v82 - 1);
      *(v82 - 3) = v86;
      *(v82 - 2) = (*(v84 - 2) >> 1) + (v87 >> 1);
      v89 = (*(v84 - 1) >> 1) + (v88 >> 1);
      v90 = *v82;
      v91 = v82[1];
      *(v82 - 1) = v89;
      *v82 = (*v84 >> 1) + (v90 >> 1);
      v92 = (v84[1] >> 1) + (v91 >> 1);
      v93 = v82[2];
      v94 = v82[3];
      v82[1] = v92;
      v82[2] = (v84[2] >> 1) + (v93 >> 1);
      v95 = v84[3];
      v84 += 8;
      v82[3] = (v95 >> 1) + (v94 >> 1);
      v82 += 8;
    } while (-(v50 & 0x7FFFFFF8) != v83);
    v56 = -v83;
    if ((v50 & 7) != 0) {
    LABEL_39:
      v96 = v56;
      v97 = (int*)((char*)v23 + 4 * v56);
      v98 = &v131_.v139[v54 + v96];
      do {
        v99 = *v98++;
        --v55;
        *v97 = (v99 >> 1) + (*v97 >> 1);
        ++v97;
      } while (v55 != 0);
    }
  }
LABEL_41:
  v100 = v131_.v141;
  v101 = v131_.v137;
  if ((int)v53 >= 1) {
    v102 = a1;
    v103 = 0;
    v104 = v53;
    v105 = 4LL * (int)v131_.v134;
    do {
      result = clt_mdct_backward_c((__int64)(v102 + 9), (int*)v23,
                                   (__int16*)((char*)*a3 + v103), v102[8], v101,
                                   v100, v53);
      v103 += v105;
      v23 = (void*)((char*)v23 + 4);
      --v104;
    } while (v104 != 0);
  }
LABEL_44:
  v106 = v131_.v146;
  if ((int)v131_.v146 >= 1) {
    v107 = v131_.v146 & 0x7FFFFFF8;
    v108 = 0;
    if (v131_.v132 <= 1) {
      v109 = 1;
    }
    else {
      v109 = (unsigned int)v131_.v132;
    }
    do {
      if (v106 >= 8) {
        v110 = 0;
        do {
          v111 = a3[v108];
          v112 = v111[v110];
          if (v112 <= -300000000) {
            v112 = -300000000;
          }
          if (v112 >= 300000000) {
            v112 = 300000000;
          }
          v111[v110] = v112;
          v113 = (__int64)&a3[v108][v110];
          v114 = *(_DWORD*)(v113 + 4);
          if (v114 <= -300000000) {
            v114 = -300000000;
          }
          if (v114 >= 300000000) {
            v114 = 300000000;
          }
          *(_DWORD*)(v113 + 4) = v114;
          v115 = (__int64)&a3[v108][v110];
          v116 = *(_DWORD*)(v115 + 8);
          if (v116 <= -300000000) {
            v116 = -300000000;
          }
          if (v116 >= 300000000) {
            v116 = 300000000;
          }
          *(_DWORD*)(v115 + 8) = v116;
          v117 = (__int64)&a3[v108][v110];
          v118 = *(_DWORD*)(v117 + 12);
          if (v118 <= -300000000) {
            v118 = -300000000;
          }
          if (v118 >= 300000000) {
            v118 = 300000000;
          }
          *(_DWORD*)(v117 + 12) = v118;
          v119 = (__int64)&a3[v108][v110];
          v120 = *(_DWORD*)(v119 + 16);
          if (v120 <= -300000000) {
            v120 = -300000000;
          }
          if (v120 >= 300000000) {
            v120 = 300000000;
          }
          *(_DWORD*)(v119 + 16) = v120;
          v121 = (__int64)&a3[v108][v110];
          v122 = *(_DWORD*)(v121 + 20);
          if (v122 <= -300000000) {
            v122 = -300000000;
          }
          if (v122 >= 300000000) {
            v122 = 300000000;
          }
          *(_DWORD*)(v121 + 20) = v122;
          v123 = (__int64)&a3[v108][v110];
          v124 = *(_DWORD*)(v123 + 24);
          if (v124 <= -300000000) {
            v124 = -300000000;
          }
          if (v124 >= 300000000) {
            v124 = 300000000;
          }
          *(_DWORD*)(v123 + 24) = v124;
          v125 = (__int64)&a3[v108][v110];
          v110 += 8;
          v126 = *(_DWORD*)(v125 + 28);
          if (v126 <= -300000000) {
            v126 = -300000000;
          }
          if (v126 >= 300000000) {
            v126 = 300000000;
          }
          *(_DWORD*)(v125 + 28) = v126;
        } while (v107 != v110);
      }
      else {
        v110 = 0;
      }
      if ((v106 & 7) != 0) {
        v127 = v110;
        v128 = v106 & 7;
        do {
          v129 = a3[v108];
          v130 = v129[v127];
          if (v130 <= -300000000) {
            v130 = -300000000;
          }
          if (v130 >= 300000000) {
            v130 = 300000000;
          }
          --v128;
          v129[v127++] = v130;
        } while (v128 != 0);
      }
      ++v108;
    } while (v108 != v109);
  }
  return result;
}

#pragma GCC visibility pop
