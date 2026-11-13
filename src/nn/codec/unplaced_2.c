#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_370a20(__int64 result, int a2, __int64 a3, int a4);

__int64 nn_codec_370a20(__int64 result, int a2, __int64 a3, int a4)
{
  int v4;
  unsigned int v5;
  unsigned __int64 v6;
  unsigned int v7;
  unsigned int v8;
  bool v9;
  int* v10;
  int* v11;
  int v12;
  int v13;
  int v14;
  unsigned __int64 v15;
  _DWORD* v16;
  unsigned __int64 v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int* v41;
  int* v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int* v48;
  int* v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  unsigned int v57;
  int v58;
  unsigned int v59;
  int v60;
  int v61;
  __int64 v62;
  int v63;
  __int64 v64;
  int v65;
  int v66;
  signed int v67;
  int* v68;
  int v69;
  int v70;
  int* v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int* v77;
  int* v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int* v83;
  int* v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int* v89;
  int* v90;
  int v91;
  int v92;
  int v93;
  int v94;
  __int64 v95;
  signed int v96;
  int* v97;
  int* v98;
  int v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  int v102;
  int* v103;
  int* v104;
  int v105;
  int v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  __int64 v109;
  unsigned int v110;
  int* v111;
  int* v112;
  int v113;
  int v114;
  int v115;
  unsigned __int64 v116;
  unsigned int v117;
  int* v118;
  int* v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;

  v4 = 1 << a2;
  if (1 << a2 >= 3) {
    if (v4 == 3) {
      v5 = 0;
      v6 = 1;
    }
    else {
      v6 = 1;
      v5 = 0;
      v109 = 0;
      do {
        v110 = 1 << a2;
        do {
          v110 >>= 1;
          v9 = (v110 & ~v5) == 0;
          v5 ^= v110;
        } while (v9);
        if (v6 < v5) {
          v111 = (int*)(result + 8 * v6);
          v112 = (int*)(result + 8LL * v5);
          v113 = *v111;
          v114 = v111[1];
          v115 = v112[1];
          *v111 = *v112;
          v111[1] = v115;
          *v112 = v113;
          v112[1] = v114;
        }
        v116 = v6 + 1;
        v117 = 1 << a2;
        do {
          v117 >>= 1;
          v9 = (v117 & ~v5) == 0;
          v5 ^= v117;
        } while (v9);
        if (v116 < v5) {
          v118 = (int*)(result + 8 * v116);
          v119 = (int*)(result + 8LL * v5);
          v120 = *v118;
          v121 = v118[1];
          v122 = v119[1];
          *v118 = *v119;
          v118[1] = v122;
          *v119 = v120;
          v119[1] = v121;
        }
        v6 += 2LL;
        v109 += 2;
      } while (v109 != (((unsigned int)(v4 - 1) - 1LL) & 0xFFFFFFFFFFFFFFFELL));
    }
    if ((((_BYTE)v4 - 2) & 1) != 0) {
      v7 = 1 << a2;
      do {
        v7 >>= 1;
        v8 = v5 ^ v7;
        v9 = (v7 & ~v5) == 0;
        v5 ^= v7;
      } while (v9);
      if (v6 < v8) {
        v10 = (int*)(result + 8 * v6);
        v11 = (int*)(result + 8LL * v8);
        v12 = *v10;
        v13 = v10[1];
        v14 = v11[1];
        *v10 = *v11;
        v10[1] = v14;
        *v11 = v12;
        v11[1] = v13;
      }
    }
  }
  v15 = (unsigned int)(2 << a2);
  if ((int)v15 >= 1) {
    v16 = (_DWORD*)(result + 16);
    v17 = 0;
    do {
      v18 = *(v16 - 4);
      v19 = *(v16 - 3);
      v20 = *(v16 - 2);
      v21 = *(v16 - 1);
      v17 += 8LL;
      v22 = v20 + v18;
      v23 = v16[1];
      v24 = v16[2];
      v25 = v16[3];
      v26 = v21 + v19;
      v27 = v25 + v23;
      v28 = v19 - v21;
      v29 = v23 - v25;
      v30 = (v24 + *(int*)v16) >> 1;
      v31 = (v18 - v20) >> 1;
      v32 = (*(int*)v16 - v24) >> 1;
      v28 >>= 1;
      v29 >>= 1;
      *(_DWORD*)v16 = (v22 >> 1) - v30;
      v16[1] = (v26 >> 1) - (v27 >> 1);
      *(v16 - 4) = v30 + (v22 >> 1);
      *(v16 - 3) = (v27 >> 1) + (v26 >> 1);
      *(v16 - 2) = v31 - v29;
      *(v16 - 1) = v28 + v32;
      v16[2] = v29 + v31;
      v16[3] = v28 - v32;
      v16 += 8;
    } while (v17 < v15);
  }
  if (a2 >= 3) {
    v33 = 3;
    v123 = 4 * a4;
    v124 = a2;
    do {
      if (a2 != 31) {
        v34 = 0;
        v35 = 0;
        v125 = v33;
        v36 = (unsigned int)(1 << v33);
        v37 = (int)v36 >> 1;
        v38 = v36 & 0xFFFFFFFE;
        v39 = 2 * v36;
        v40 = v123 >> v33;
        do {
          v41 = (int*)(result + 4LL * v34);
          v35 += (int)v36;
          v42 = (int*)(result + 4LL * (v38 + v34));
          v43 = *v41 >> 1;
          v44 = v41[1] >> 1;
          v45 = v42[1] >> 1;
          v46 = *v42 >> 1;
          *v41 = v43 + v46;
          v41[1] = v44 + v45;
          *v42 = v43 - v46;
          v42[1] = v44 - v45;
          LODWORD(v42) = v37 + v34;
          v47 = (v36 & 0xFFFFFFFE) + ((int)v36 >> 1) + v34;
          v34 += v39;
          v48 = (int*)(result + 4LL * v47);
          v49 = (int*)(result + 4LL * (int)v42);
          v50 = v48[1] >> 1;
          LODWORD(v41) = *v48 >> 1;
          v51 = *v49 >> 1;
          v52 = v49[1] >> 1;
          *v49 = v51 - v50;
          v49[1] = v52 + (int)v41;
          *v48 = v51 + v50;
          v48[1] = v52 - (int)v41;
        } while (v35 < v4);
        v126 = v37 / 4;
        if (v37 >= 8) {
          v53 = 2;
          v54 = v37 + 2;
          v55 = v38 + 2;
          v56 = 1;
          v57 = (v37 & 0xFFFFFFFE) - 2;
          v58 = v37 + 2 + v38;
          v59 = v57 + v37;
          v60 = v57 + v38;
          v61 = v57 + v37 + v38;
          if (v126 <= 2) {
            v62 = 2;
          }
          else {
            v62 = (unsigned int)v126;
          }
          do {
            v63 = 0;
            v64 = 0;
            v65 = *(_DWORD*)(a3 + 4 * v56 * v40);
            v66 = v65 << 16;
            v67 = v65 & 0xFFFF0000;
            do {
              v64 += v36;
              v68 = (int*)(result + 4LL * (v55 + v63));
              v69 = v68[1];
              v70 = ((unsigned __int64)(*v68 * (__int64)v66) >> 32) -
                    ((unsigned __int64)(v69 * (__int64)v67) >> 32);
              v71 = (int*)(result + 4LL * (v53 + v63));
              v72 = ((unsigned __int64)(v69 * (__int64)v66) >> 32) +
                    ((unsigned __int64)(*v68 * (__int64)v67) >> 32);
              v73 = *v71 >> 1;
              v74 = v71[1] >> 1;
              v75 = v72 + v74;
              v76 = v74 - v72;
              *v71 = v70 + v73;
              v71[1] = v75;
              v77 = (int*)(result + 4LL * (v54 + v63));
              *v68 = v73 - v70;
              v68[1] = v76;
              v78 = (int*)(result + 4LL * (v58 + v63));
              v79 = v78[1];
              LODWORD(v71) = ((unsigned __int64)(*v78 * (__int64)v66) >> 32) -
                             ((unsigned __int64)(v79 * (__int64)v67) >> 32);
              v80 = ((unsigned __int64)(v79 * (__int64)v66) >> 32) +
                    ((unsigned __int64)(*v78 * (__int64)v67) >> 32);
              v81 = *v77 >> 1;
              v82 = v77[1] >> 1;
              *v77 = v81 - v80;
              v77[1] = (int)v71 + v82;
              *v78 = v80 + v81;
              v78[1] = v82 - (int)v71;
              v83 = (int*)(result + 4LL * (v60 + v63));
              v84 = (int*)(result + 4LL * (int)(v57 + v63));
              v85 = v83[1];
              LODWORD(v71) = ((unsigned __int64)(v85 * (__int64)v66) >> 32) -
                             ((unsigned __int64)(*v83 * (__int64)v67) >> 32);
              v86 = ((unsigned __int64)(*v83 * (__int64)v66) >> 32) +
                    ((unsigned __int64)(v85 * (__int64)v67) >> 32);
              v87 = *v84 >> 1;
              v88 = v84[1] >> 1;
              *v84 = v87 - (int)v71;
              v84[1] = v86 + v88;
              *v83 = (int)v71 + v87;
              v83[1] = v88 - v86;
              LODWORD(v83) = v61 + v63;
              LODWORD(v84) = v59 + v63;
              v63 += v39;
              v89 = (int*)(result + 4LL * (int)v83);
              v90 = (int*)(result + 4LL * (int)v84);
              v91 = v89[1];
              LODWORD(v71) = ((unsigned __int64)(v91 * (__int64)v66) >> 32) -
                             ((unsigned __int64)(*v89 * (__int64)v67) >> 32);
              v92 = ((unsigned __int64)(*v89 * (__int64)v66) >> 32) +
                    ((unsigned __int64)(v91 * (__int64)v67) >> 32);
              v93 = *v90 >> 1;
              v94 = v90[1] >> 1;
              *v90 = v93 - v92;
              v90[1] = v94 - (int)v71;
              *v89 = v92 + v93;
              v89[1] = (int)v71 + v94;
            } while (v64 < v4);
            ++v56;
            v61 -= 2;
            v59 -= 2;
            v57 -= 2;
            v60 -= 2;
            v58 += 2;
            v54 += 2;
            v53 += 2;
            v55 += 2;
          } while (v56 != v62);
        }
        v33 = v125;
        a2 = v124;
        v95 = 0;
        v96 = ((((int)v36 >> 1) + ((unsigned int)v36 >> 31)) & 0xFFFFFFFE) -
              2 * v126;
        do {
          v97 = (int*)(result + 4LL * v96);
          v95 += (int)v36;
          v98 = (int*)(result + 4LL * (v38 + v96));
          v99 = *v97 >> 1;
          v100 = (unsigned __int64)(1518469120LL * *v98) >> 32;
          v101 = (unsigned __int64)(1518469120LL * v98[1]) >> 32;
          v102 = v100 - v101;
          LODWORD(v100) = v101 + v100;
          LODWORD(v101) = v97[1] >> 1;
          *v97 = v102 + v99;
          v97[1] = v100 + v101;
          *v98 = v99 - v102;
          v98[1] = v101 - v100;
          LODWORD(v98) = v38 + v37 + v96;
          LODWORD(v100) = v37 + v96;
          v96 += v39;
          v103 = (int*)(result + 4LL * (int)v98);
          v104 = (int*)(result + 4LL * (int)v100);
          v105 = *v104 >> 1;
          v106 = v104[1] >> 1;
          v107 = (unsigned __int64)(1518469120LL * *v103) >> 32;
          v108 = (unsigned __int64)(1518469120LL * v103[1]) >> 32;
          LODWORD(v97) = v107 - v108;
          LODWORD(v107) = v108 + v107;
          *v104 = v105 - v107;
          v104[1] = (int)v97 + v106;
          *v103 = v107 + v105;
          v103[1] = v106 - (int)v97;
        } while (v95 < v4);
      }
      v9 = v33++ == a2;
    } while (!v9);
  }
  return result;
}

#pragma GCC visibility pop
