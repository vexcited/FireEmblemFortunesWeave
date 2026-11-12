#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* fs_645610(__int64* result, __int64* a2, __int64* a3);
__int64* fs_645770(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                   __int64* a5);
bool fs_645980(__int64* a1, __int64* a2);

__int64* fs_645610(__int64* result, __int64* a2, __int64* a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  __int64 v31;
  __int64 v32;

  v3 = *a2;
  v4 = (_QWORD*)*result;
  v5 = *(_QWORD*)(*a2 + 752);
  v6 = *(_QWORD*)(*result + 752);
  v7 = v5 < v6;
  if (v5 == v6) {
    v8 = *(_QWORD*)(v3 + 576);
    v9 = v4[72];
    v7 = v8 < v9;
    if (v8 == v9) {
      v7 = (signed __int64)*(_QWORD*)(v3 + 744) < (signed __int64)v4[93];
    }
  }
  if (v7) {
    v10 = *a3;
    v11 = *(_QWORD*)(*a3 + 752);
    v12 = v11 < v5;
    if (v11 == v5 && (v13 = *(_QWORD*)(v10 + 576), v14 = *(_QWORD*)(v3 + 576),
                      v12 = v13 < v14, v13 == v14)) {
      if ((signed __int64)*(_QWORD*)(v10 + 744) >=
          (signed __int64)*(_QWORD*)(v3 + 744)) {
      LABEL_9:
        *result = v3;
        *a2 = (__int64)v4;
        v15 = *a3;
        v16 = v4[94];
        v17 = *(_QWORD*)(*a3 + 752);
        v18 = v17 < v16;
        if (v17 == v16 && (v19 = *(_QWORD*)(v15 + 576), v20 = v4[72],
                           v18 = v19 < v20, v19 == v20)) {
          if ((signed __int64)*(_QWORD*)(v15 + 744) >= (signed __int64)v4[93]) {
            return result;
          }
        }
        else if (!v18) {
          return result;
        }
        *a2 = v15;
        *a3 = (__int64)v4;
        return result;
      }
    }
    else if (!v12) {
      goto LABEL_9;
    }
    *result = v10;
    *a3 = (__int64)v4;
    return result;
  }
  v21 = *a3;
  v22 = *(_QWORD*)(*a3 + 752);
  v23 = v22 < v5;
  if (v22 == v5 && (v24 = *(_QWORD*)(v21 + 576), v25 = *(_QWORD*)(v3 + 576),
                    v23 = v24 < v25, v24 == v25)) {
    if ((signed __int64)*(_QWORD*)(v21 + 744) >=
        (signed __int64)*(_QWORD*)(v3 + 744)) {
      return result;
    }
  }
  else if (!v23) {
    return result;
  }
  *a2 = v21;
  *a3 = v3;
  v26 = *a2;
  v27 = *result;
  v28 = *(_QWORD*)(*a2 + 752);
  v29 = *(_QWORD*)(*result + 752);
  v30 = v28 < v29;
  if (v28 == v29) {
    v31 = *(_QWORD*)(v26 + 576);
    v32 = *(_QWORD*)(v27 + 576);
    v30 = v31 < v32;
    if (v31 == v32) {
      if ((signed __int64)*(_QWORD*)(v26 + 744) >=
          (signed __int64)*(_QWORD*)(v27 + 744)) {
        return result;
      }
      goto LABEL_31;
    }
  }
  if (v30) {
  LABEL_31:
    *result = v26;
    *a2 = v27;
  }
  return result;
}

__int64* fs_645770(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                   __int64* a5)
{
  __int64* result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  bool v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  bool v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  bool v57;
  __int64 v58;
  __int64 v59;

  result = fs_645610(a1, a2, a3);
  v11 = *a4;
  v12 = *a3;
  v13 = *(_QWORD*)(*a4 + 752);
  v14 = *(_QWORD*)(*a3 + 752);
  v15 = v13 < v14;
  if (v13 == v14) {
    v16 = *(_QWORD*)(v11 + 576);
    v17 = *(_QWORD*)(v12 + 576);
    v15 = v16 < v17;
    if (v16 == v17) {
      v15 = (signed __int64)*(_QWORD*)(v11 + 744) <
            (signed __int64)*(_QWORD*)(v12 + 744);
    }
  }
  if (v15) {
    *a3 = v11;
    *a4 = v12;
    v18 = *a3;
    v19 = *a2;
    v20 = *(_QWORD*)(*a3 + 752);
    v21 = *(_QWORD*)(*a2 + 752);
    v22 = v20 < v21;
    if (v20 == v21) {
      v23 = *(_QWORD*)(v18 + 576);
      v24 = *(_QWORD*)(v19 + 576);
      v22 = v23 < v24;
      if (v23 == v24) {
        v22 = (signed __int64)*(_QWORD*)(v18 + 744) <
              (signed __int64)*(_QWORD*)(v19 + 744);
      }
    }
    if (v22) {
      *a2 = v18;
      *a3 = v19;
      v25 = *a2;
      v26 = *a1;
      v27 = *(_QWORD*)(*a2 + 752);
      v28 = *(_QWORD*)(*a1 + 752);
      v29 = v27 < v28;
      if (v27 == v28) {
        v30 = *(_QWORD*)(v25 + 576);
        v31 = *(_QWORD*)(v26 + 576);
        v29 = v30 < v31;
        if (v30 == v31) {
          v29 = (signed __int64)*(_QWORD*)(v25 + 744) <
                (signed __int64)*(_QWORD*)(v26 + 744);
        }
      }
      if (v29) {
        *a1 = v25;
        *a2 = v26;
      }
    }
  }
  v32 = *a5;
  v33 = *a4;
  v34 = *(_QWORD*)(*a5 + 752);
  v35 = *(_QWORD*)(*a4 + 752);
  v36 = v34 < v35;
  if (v34 == v35) {
    v37 = *(_QWORD*)(v32 + 576);
    v38 = *(_QWORD*)(v33 + 576);
    v36 = v37 < v38;
    if (v37 == v38) {
      v36 = (signed __int64)*(_QWORD*)(v32 + 744) <
            (signed __int64)*(_QWORD*)(v33 + 744);
    }
  }
  if (v36) {
    *a4 = v32;
    *a5 = v33;
    v39 = *a4;
    v40 = *a3;
    v41 = *(_QWORD*)(*a4 + 752);
    v42 = *(_QWORD*)(*a3 + 752);
    v43 = v41 < v42;
    if (v41 == v42) {
      v44 = *(_QWORD*)(v39 + 576);
      v45 = *(_QWORD*)(v40 + 576);
      v43 = v44 < v45;
      if (v44 == v45) {
        v43 = (signed __int64)*(_QWORD*)(v39 + 744) <
              (signed __int64)*(_QWORD*)(v40 + 744);
      }
    }
    if (v43) {
      *a3 = v39;
      *a4 = v40;
      v46 = *a3;
      v47 = *a2;
      v48 = *(_QWORD*)(*a3 + 752);
      v49 = *(_QWORD*)(*a2 + 752);
      v50 = v48 < v49;
      if (v48 == v49) {
        v51 = *(_QWORD*)(v46 + 576);
        v52 = *(_QWORD*)(v47 + 576);
        v50 = v51 < v52;
        if (v51 == v52) {
          v50 = (signed __int64)*(_QWORD*)(v46 + 744) <
                (signed __int64)*(_QWORD*)(v47 + 744);
        }
      }
      if (v50) {
        *a2 = v46;
        *a3 = v47;
        v53 = *a2;
        v54 = *a1;
        v55 = *(_QWORD*)(*a2 + 752);
        v56 = *(_QWORD*)(*a1 + 752);
        v57 = v55 < v56;
        if (v55 == v56) {
          v58 = *(_QWORD*)(v53 + 576);
          v59 = *(_QWORD*)(v54 + 576);
          v57 = v58 < v59;
          if (v58 == v59) {
            v57 = (signed __int64)*(_QWORD*)(v53 + 744) <
                  (signed __int64)*(_QWORD*)(v54 + 744);
          }
        }
        if (v57) {
          *a1 = v53;
          *a2 = v54;
        }
      }
    }
  }
  return result;
}

bool fs_645980(__int64* a1, __int64* a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v13;
  __int64 v14;
  int v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  bool v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  bool v49;
  __int64 v50;
  __int64 v51;

  v2 = a2 - a1;
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      fs_645610(a1, a1 + 1, a2 - 1);
      return true;
    case 4LL:
      fs_645610(a1, a1 + 1, a1 + 2);
      v32 = (_QWORD*)*(a2 - 1);
      v33 = (_QWORD*)a1[2];
      v34 = v32[94];
      v35 = v33[94];
      v36 = v34 < v35;
      if (v34 == v35 &&
          (v37 = v32[72], v38 = v33[72], v36 = v37 < v38, v37 == v38)) {
        if ((signed __int64)v32[93] >= (signed __int64)v33[93]) {
          return true;
        }
      }
      else if (!v36) {
        return true;
      }
      a1[2] = (__int64)v32;
      *(a2 - 1) = (__int64)v33;
      v40 = (_QWORD*)a1[1];
      v39 = (_QWORD*)a1[2];
      v41 = v39[94];
      v42 = v40[94];
      v43 = v41 < v42;
      if (v41 == v42) {
        v44 = v39[72];
        v45 = v40[72];
        v43 = v44 < v45;
        if (v44 == v45) {
          v43 = (signed __int64)v39[93] < (signed __int64)v40[93];
        }
      }
      if (v43) {
        a1[1] = (__int64)v39;
        a1[2] = (__int64)v40;
        v46 = *a1;
        v47 = v39[94];
        v48 = *(_QWORD*)(*a1 + 752);
        v49 = v47 < v48;
        if (v47 == v48) {
          v50 = v39[72];
          v51 = *(_QWORD*)(v46 + 576);
          v49 = v50 < v51;
          if (v50 == v51) {
            v49 =
                (signed __int64)v39[93] < (signed __int64)*(_QWORD*)(v46 + 744);
          }
        }
        if (v49) {
          *a1 = (__int64)v39;
          a1[1] = v46;
        }
      }
      return true;
    case 5LL:
      fs_645770(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    default:
      break;
    }
  }
  else {
    if ((unsigned __int64)v2 < 2) {
      return true;
    }
    if (v2 == 2) {
      v3 = (_QWORD*)*(a2 - 1);
      v4 = *a1;
      v5 = v3[94];
      v6 = *(_QWORD*)(*a1 + 752);
      v7 = v5 < v6;
      if (v5 == v6 &&
          (v8 = v3[72], v9 = *(_QWORD*)(v4 + 576), v7 = v8 < v9, v8 == v9)) {
        if ((signed __int64)v3[93] >= (signed __int64)*(_QWORD*)(v4 + 744)) {
          return true;
        }
      }
      else if (!v7) {
        return true;
      }
      *a1 = (__int64)v3;
      *(a2 - 1) = v4;
      return true;
    }
  }
  v10 = (__int64)(a1 + 2);
  fs_645610(a1, a1 + 1, a1 + 2);
  v13 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v14 = 0;
  v15 = 0;
  while (2) {
    v16 = (_QWORD*)*v13;
    v17 = *(_QWORD*)v10;
    v18 = *(_QWORD*)(*v13 + 752);
    v19 = *(_QWORD*)(*(_QWORD*)v10 + 752LL);
    v20 = v18 < v19;
    if (v18 == v19) {
      v21 = v16[72];
      v22 = *(_QWORD*)(v17 + 576);
      v20 = v21 < v22;
      if (v21 == v22) {
        v20 = (signed __int64)v16[93] < (signed __int64)*(_QWORD*)(v17 + 744);
      }
    }
    if (!v20) {
      goto LABEL_17;
    }
    *v13 = v17;
    v23 = v14;
    while (1) {
      v24 = (char*)a1 + v23;
      v25 = v16[94];
      v26 = *(_QWORD**)((char*)a1 + v23 + 8);
      v27 = v26[94];
      if (v25 != v27) {
        if (v25 >= v27) {
          goto LABEL_16;
        }
        goto LABEL_25;
      }
      v28 = v16[72];
      v29 = v26[72];
      if (v28 == v29) {
        if ((signed __int64)v16[93] >= (signed __int64)v26[93]) {
          goto LABEL_16;
        }
        goto LABEL_25;
      }
      if (v28 >= v29) {
        break;
      }
    LABEL_25:
      v10 -= 8;
      v23 -= 8;
      *((_QWORD*)v24 + 2) = v26;
      if (v23 == -16) {
        v10 = (__int64)a1;
        goto LABEL_16;
      }
    }
    v10 = (__int64)a1 + v23 + 16;
  LABEL_16:
    ++v15;
    *(_QWORD*)v10 = v16;
    if (v15 != 8) {
    LABEL_17:
      v10 = (__int64)v13++;
      v14 += 8;
      if (v13 != a2) {
        continue;
      }
      return true;
    }
    return v13 + 1 == a2;
  }
}

#pragma GCC visibility pop
