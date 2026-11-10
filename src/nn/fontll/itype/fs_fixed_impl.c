#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

int* fixed_norm(int* result);

int* fixed_norm(int* result)
{
  int v1;
  int v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned int v6;
  unsigned __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  unsigned int v11;
  unsigned __int64 v12;
  unsigned int v13;
  unsigned __int64 v14;
  char v15;
  unsigned int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned int v19;
  bool v20;
  unsigned int v21;
  unsigned __int64 v22;
  unsigned int v23;
  unsigned int v24;
  bool v25;
  int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  unsigned int v32;
  int v33;
  int v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  int v38;
  int v39;
  unsigned int v40;
  int v41;
  unsigned int v42;
  int v43;
  int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  int v48;
  int v49;
  unsigned int v50;
  int v51;
  unsigned int v52;
  int v53;
  int v54;
  unsigned int v55;
  int v56;
  unsigned int v57;
  int v58;
  int v59;
  unsigned int v60;
  int v61;
  int v62;
  unsigned int v63;
  int v64;
  int v65;
  int v66;
  unsigned int v67;
  int v68;
  int v69;
  int v70;
  unsigned int v71;
  int v72;
  int v73;
  int v74;
  unsigned int v75;
  int v76;
  int v77;
  int v78;
  unsigned int v79;
  int v80;
  int v81;
  int v82;
  unsigned int v83;
  int v84;
  int v85;
  int v86;
  unsigned int v87;
  int v88;
  int v89;
  int v90;
  unsigned int v91;
  int v92;
  int v93;
  unsigned int v94;
  int v95;
  unsigned int v96;
  unsigned __int64 v97;
  int v98;
  int v99;
  __int64 v100;
  unsigned int v101;
  int v102;
  unsigned __int64 v103;
  int v104;
  __int64 v105;
  unsigned int v106;
  int v107;
  unsigned __int64 v108;
  int v109;

  v2 = *result;
  v1 = result[1];
  if (v1 == 0) {
    if (v2 < 0) {
      v8 = -65536;
    }
    else {
      v8 = 0x10000;
    }
    *result = v8;
    return result;
  }
  if (v2 == 0) {
    if (v1 < 0) {
      v9 = -65536;
    }
    else {
      v9 = 0x10000;
    }
    result[1] = v9;
    return result;
  }
  if (v2 >= 0) {
    v3 = (unsigned int)v2;
  }
  else {
    v3 = (unsigned int)-v2;
  }
  if (v1 >= 0) {
    v4 = (unsigned int)v1;
  }
  else {
    v4 = (unsigned int)-v1;
  }
  if ((unsigned int)v3 <= (unsigned int)v4) {
    v5 = (unsigned int)v4;
  }
  else {
    v5 = (unsigned int)v3;
  }
  if ((unsigned int)v5 > 0x10000) {
    if ((unsigned int)v3 >> 14 != 0) {
      v12 = ((unsigned __int64)((unsigned int)v5 >> 1) + (v3 << 16)) / v5;
      if (v2 >= 0) {
        v2 = v12;
      }
      else {
        v2 = -(int)v12;
      }
      if ((unsigned int)v4 >> 14 != 0) {
      LABEL_18:
        v7 = ((unsigned __int64)((unsigned int)v5 >> 1) + (v4 << 16)) / v5;
        if (v1 >= 0) {
          v1 = v7;
        }
        else {
          v1 = -(int)v7;
        }
        if (v2 == 0) {
        LABEL_67:
          v16 = 0;
          v15 = 1;
          goto LABEL_68;
        }
        goto LABEL_44;
      }
    }
    else {
      v6 = (((unsigned int)v5 >> 1) + ((_DWORD)v3 << 16)) / (unsigned int)v5;
      if (v2 >= 0) {
        v2 = v6;
      }
      else {
        v2 = -v6;
      }
      if ((unsigned int)v4 >> 14 != 0) {
        goto LABEL_18;
      }
    }
    v13 = (((unsigned int)v5 >> 1) + ((_DWORD)v4 << 16)) / (unsigned int)v5;
    if (v1 >= 0) {
      v1 = v13;
    }
    else {
      v1 = -v13;
    }
    if (v2 == 0) {
      goto LABEL_67;
    }
  LABEL_44:
    if (v2 >= 0) {
      LODWORD(v3) = v2;
    }
    else {
      LODWORD(v3) = -v2;
    }
    goto LABEL_47;
  }
  if ((unsigned int)v5 <= 0xFF) {
    v10 = (unsigned int)v5 >> 1;
    if ((unsigned int)v3 > 0xB503) {
      v17 = (v10 | (unsigned __int64)(v3 << 8)) / v5;
      if (v17 >= 0x7FFFFFFF) {
        LODWORD(v17) = 0x7FFFFFFF;
      }
      if (v2 >= 0) {
        v2 = v17;
      }
      else {
        v2 = -(int)v17;
      }
    }
    else {
      v11 = ((unsigned int)v10 | ((_DWORD)v3 << 8)) / (unsigned int)v5;
      if (v2 >= 0) {
        v2 = v11;
      }
      else {
        v2 = -v11;
      }
    }
    v18 = (v10 | (unsigned __int64)(v4 << 8)) / v5;
    v19 = ((unsigned int)v10 | ((_DWORD)v4 << 8)) / (unsigned int)v5;
    if (v18 >= 0x7FFFFFFF) {
      LODWORD(v18) = 0x7FFFFFFF;
    }
    v20 = v1 < 0;
    if (v1 >= 0) {
      v1 = v18;
    }
    else {
      v1 = -(int)v18;
    }
    if (v20) {
      v19 = -v19;
    }
    if ((unsigned int)v4 <= 0xB503) {
      v1 = v19;
    }
    if (v2 == 0) {
      goto LABEL_67;
    }
    goto LABEL_44;
  }
LABEL_47:
  v14 = ((unsigned int)v3 * (unsigned __int64)(unsigned int)v3 + 0x8000) >> 16;
  if (v14 >= 0x7FFFFFFF) {
    LODWORD(v14) = 0x7FFFFFFF;
  }
  v15 = 0;
  if ((unsigned int)v3 <= 0xB503) {
    v16 = (unsigned int)(v2 * v2 + 0x8000) >> 16;
  }
  else {
    v16 = v14;
  }
LABEL_68:
  if (v1 >= 0) {
    v21 = v1;
  }
  else {
    v21 = -v1;
  }
  v22 = (v21 * (unsigned __int64)v21 + 0x8000) >> 16;
  if (v22 >= 0x7FFFFFFF) {
    LODWORD(v22) = 0x7FFFFFFF;
  }
  if (v21 <= 0xB503) {
    v23 = (unsigned int)(v1 * v1 + 0x8000) >> 16;
  }
  else {
    v23 = v22;
  }
  if (v1 == 0) {
    v23 = 0;
  }
  v24 = v23 + v16;
  v25 = v24 >= 0x10000;
  if (v24 >= 0x10000) {
    v26 = -65536;
  }
  else {
    v26 = 0;
  }
  v27 = v26 + v24;
  if (v25) {
    v28 = 0x20000;
  }
  else {
    v28 = 0;
  }
  v29 = 2 * v27;
  v30 = v28 | 0x8000;
  if (v29 >= (v28 | 0x8000u)) {
    v31 = 0x10000;
  }
  else {
    v30 = 0;
    v31 = 0;
  }
  v32 = v29 - v30;
  v33 = v31 | v28;
  v34 = v33 | 0x4000;
  v35 = 2 * v32;
  if (v35 >= (v33 | 0x4000u)) {
    v36 = 0x8000;
  }
  else {
    v34 = 0;
    v36 = 0;
  }
  v37 = v35 - v34;
  v38 = v36 | v33;
  v39 = v38 | 0x2000;
  v40 = 2 * v37;
  if (v40 >= (v38 | 0x2000u)) {
    v41 = 0x4000;
  }
  else {
    v39 = 0;
    v41 = 0;
  }
  v42 = v40 - v39;
  v43 = v41 | v38;
  v44 = v43 | 0x1000;
  v45 = 2 * v42;
  if (v45 >= (v43 | 0x1000u)) {
    v46 = 0x2000;
  }
  else {
    v44 = 0;
    v46 = 0;
  }
  v47 = v45 - v44;
  v48 = v46 | v43;
  v49 = v48 | 0x800;
  v50 = 2 * v47;
  if (v50 >= (v48 | 0x800u)) {
    v51 = 4096;
  }
  else {
    v49 = 0;
    v51 = 0;
  }
  v52 = v50 - v49;
  v53 = v51 | v48;
  v54 = v53 | 0x400;
  v55 = 2 * v52;
  if (v55 >= (v53 | 0x400u)) {
    v56 = 2048;
  }
  else {
    v54 = 0;
    v56 = 0;
  }
  v57 = v55 - v54;
  v58 = v56 | v53;
  v59 = v58 + 512;
  v60 = 2 * v57;
  if (v60 >= v58 + 512) {
    v61 = 1024;
  }
  else {
    v59 = 0;
    v61 = 0;
  }
  v62 = v61 + v58;
  v63 = 2 * (v60 - v59);
  v64 = v62 + 256;
  if (v63 >= v62 + 256) {
    v65 = 512;
  }
  else {
    v64 = 0;
    v65 = 0;
  }
  v66 = v65 + v62;
  v67 = 2 * (v63 - v64);
  v68 = v66 + 128;
  if (v67 >= v66 + 128) {
    v69 = 256;
  }
  else {
    v68 = 0;
    v69 = 0;
  }
  v70 = v69 + v66;
  v71 = 2 * (v67 - v68);
  v72 = v70 + 64;
  if (v71 >= v70 + 64) {
    v73 = 128;
  }
  else {
    v72 = 0;
    v73 = 0;
  }
  v74 = v73 + v70;
  v75 = 2 * (v71 - v72);
  v76 = v74 + 32;
  if (v75 >= v74 + 32) {
    v77 = 64;
  }
  else {
    v76 = 0;
    v77 = 0;
  }
  v78 = v77 + v74;
  v79 = 2 * (v75 - v76);
  v80 = v78 + 16;
  if (v79 >= v78 + 16) {
    v81 = 32;
  }
  else {
    v80 = 0;
    v81 = 0;
  }
  v82 = v81 + v78;
  v83 = 2 * (v79 - v80);
  v84 = v82 + 8;
  if (v83 >= v82 + 8) {
    v85 = 16;
  }
  else {
    v84 = 0;
    v85 = 0;
  }
  v86 = v85 + v82;
  v87 = 2 * (v83 - v84);
  v88 = v86 + 4;
  if (v87 >= v86 + 4) {
    v89 = 8;
  }
  else {
    v88 = 0;
    v89 = 0;
  }
  v90 = v89 + v86;
  v91 = 2 * (v87 - v88);
  v92 = v90 + 2;
  if (v91 >= v90 + 2) {
    v93 = 4;
  }
  else {
    v92 = 0;
    v93 = 0;
  }
  v94 = v93 + v90;
  if (v94 >= 2 * (v91 - v92)) {
    v95 = 0;
  }
  else {
    v95 = 2;
  }
  v96 = v95 + v94;
  if (v96 != 0) {
    v97 = v96 >> 1;
    if ((v15 & 1) != 0) {
      *result = 0;
      if (v1 == 0) {
      LABEL_151:
        result[1] = v1;
        return result;
      }
    }
    else {
      if (v2 >= 0) {
        v100 = (unsigned int)v2;
      }
      else {
        v100 = (unsigned int)-v2;
      }
      if ((unsigned int)v100 >> 14 != 0) {
        v103 = ((unsigned __int64)(v96 >> 2) + (v100 << 16)) / v97;
        if (v103 >= 0x7FFFFFFF) {
          LODWORD(v103) = 0x7FFFFFFF;
        }
        if (v2 >= 0) {
          v104 = v103;
        }
        else {
          v104 = -(int)v103;
        }
        *result = v104;
        if (v1 == 0) {
          goto LABEL_151;
        }
      }
      else {
        v101 = ((v96 >> 2) + ((_DWORD)v100 << 16)) / (unsigned int)v97;
        if (v2 >= 0) {
          v102 = v101;
        }
        else {
          v102 = -v101;
        }
        *result = v102;
        if (v1 == 0) {
          goto LABEL_151;
        }
      }
    }
    if (v1 >= 0) {
      v105 = (unsigned int)v1;
    }
    else {
      v105 = (unsigned int)-v1;
    }
    if ((unsigned int)v105 >> 14 != 0) {
      v108 = ((unsigned __int64)(v96 >> 2) + (v105 << 16)) / v97;
      if (v108 >= 0x7FFFFFFF) {
        LODWORD(v108) = 0x7FFFFFFF;
      }
      if (v1 >= 0) {
        v109 = v108;
      }
      else {
        v109 = -(int)v108;
      }
      result[1] = v109;
    }
    else {
      v106 = ((v96 >> 2) + ((_DWORD)v105 << 16)) / (unsigned int)v97;
      if (v1 >= 0) {
        v107 = v106;
      }
      else {
        v107 = -v106;
      }
      result[1] = v107;
    }
  }
  else {
    if (v2 > -1) {
      v98 = 0x7FFFFFFF;
    }
    else {
      v98 = -2147483647;
    }
    if (v1 > -1) {
      v99 = 0x7FFFFFFF;
    }
    else {
      v99 = -2147483647;
    }
    *result = v98;
    result[1] = v99;
  }
  return result;
}

#pragma GCC visibility pop
