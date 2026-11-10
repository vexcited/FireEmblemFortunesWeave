#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_fontll_412cc0_alt1(
    __int64*, __int64*, __int64*, __int64*, __int64*,
    __int64 (**)(__int64*, __int64*)) __asm__("nn_fontll_412cc0");
__int64 nn_fontll_412cc0(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                         __int64* a5, __int64 (**a6)(__int64*, __int64*));
bool nn_fontll_412ec0(__int64* a1, __int64* a2,
                      __int64 (**a3)(__int64*, __int64*));
__int64* nn_fontll_413280(__int64* a1, __int64* a2, __int64* a3,
                          __int64 (**a4)(__int64*, _QWORD*));

__int64 nn_fontll_412cc0(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                         __int64* a5, __int64 (**a6)(__int64*, __int64*))
{
  char v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v12 = (*a6)(a2, a1);
  v13 = (*a6)(a3, a2);
  if ((v12 & 1) != 0) {
    v14 = *a1;
    if ((v13 & 1) != 0) {
      *a1 = *a3;
    LABEL_9:
      *a3 = v14;
      goto LABEL_10;
    }
    *a1 = *a2;
    *a2 = v14;
    if (((*a6)(a3, a2) & 1) != 0) {
      v14 = *a2;
      *a2 = *a3;
      goto LABEL_9;
    }
  }
  else if ((v13 & 1) != 0) {
    v15 = *a2;
    *a2 = *a3;
    *a3 = v15;
    if (((*a6)(a2, a1) & 1) != 0) {
      v16 = *a1;
      *a1 = *a2;
      *a2 = v16;
    }
  }
LABEL_10:
  if (((*a6)(a4, a3) & 1) != 0) {
    v17 = *a3;
    *a3 = *a4;
    *a4 = v17;
    if (((*a6)(a3, a2) & 1) != 0) {
      v18 = *a2;
      *a2 = *a3;
      *a3 = v18;
      if (((*a6)(a2, a1) & 1) != 0) {
        v19 = *a1;
        *a1 = *a2;
        *a2 = v19;
      }
    }
  }
  result = (*a6)(a5, a4);
  if ((result & 1) != 0) {
    v21 = *a4;
    *a4 = *a5;
    *a5 = v21;
    result = (*a6)(a4, a3);
    if ((result & 1) != 0) {
      v22 = *a3;
      *a3 = *a4;
      *a4 = v22;
      result = (*a6)(a3, a2);
      if ((result & 1) != 0) {
        v23 = *a2;
        *a2 = *a3;
        *a3 = v23;
        result = (*a6)(a2, a1);
        if ((result & 1) != 0) {
          v24 = *a1;
          *a1 = *a2;
          *a2 = v24;
        }
      }
    }
  }
  return result;
}

bool nn_fontll_412ec0(__int64* a1, __int64* a2,
                      __int64 (**a3)(__int64*, __int64*))
{
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  char v10;
  char v11;
  __int64 v12;
  __int64* v13;
  char v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  char v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v41;

  v6 = a2 - a1;
  if (v6 > 2) {
    switch (v6) {
    case 3LL:
      v9 = a2 - 1;
      v10 = (*a3)(a1 + 1, a1);
      v11 = (*a3)(v9, a1 + 1);
      if ((v10 & 1) != 0) {
        v12 = *a1;
        if ((v11 & 1) != 0) {
          *a1 = *v9;
          *v9 = v12;
        }
        else {
          *a1 = a1[1];
          a1[1] = v12;
          if (((*a3)(v9, a1 + 1) & 1) != 0) {
            v28 = a1[1];
            a1[1] = *v9;
            *v9 = v28;
          }
        }
        return true;
      }
      if ((v11 & 1) == 0) {
        return true;
      }
      v23 = a1[1];
      a1[1] = *v9;
      *v9 = v23;
      break;
    case 4LL:
      v18 = a2 - 1;
      v19 = (*a3)(a1 + 1, a1);
      v20 = (*a3)(a1 + 2, a1 + 1);
      if ((v19 & 1) != 0) {
        v21 = *a1;
        if ((v20 & 1) != 0) {
          v22 = a1[2];
          a1[2] = v21;
          *a1 = v22;
        }
        else {
          *a1 = a1[1];
          a1[1] = v21;
          if (((*a3)(a1 + 2, a1 + 1) & 1) != 0) {
            v36 = a1[1];
            a1[1] = a1[2];
            a1[2] = v36;
          }
        }
      }
      else if ((v20 & 1) != 0) {
        v26 = a1[1];
        a1[1] = a1[2];
        a1[2] = v26;
        if (((*a3)(a1 + 1, a1) & 1) != 0) {
          v27 = *a1;
          *a1 = a1[1];
          a1[1] = v27;
        }
      }
      if (((*a3)(v18, a1 + 2) & 1) == 0) {
        return true;
      }
      v37 = a1[2];
      a1[2] = *v18;
      *v18 = v37;
      if (((*a3)(a1 + 2, a1 + 1) & 1) == 0) {
        return true;
      }
      v38 = a1[1];
      a1[1] = a1[2];
      a1[2] = v38;
      break;
    case 5LL:
      nn_fontll_412cc0_alt1(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1, a3);
      return true;
    default:
      goto LABEL_13;
    }
    if (((*a3)(a1 + 1, a1) & 1) != 0) {
      v39 = *a1;
      *a1 = a1[1];
      a1[1] = v39;
    }
    return true;
  }
  if ((unsigned __int64)v6 < 2) {
    return true;
  }
  if (v6 == 2) {
    v7 = a2 - 1;
    if (((*a3)(a2 - 1, a1) & 1) != 0) {
      v8 = *a1;
      *a1 = *v7;
      *v7 = v8;
    }
    return true;
  }
LABEL_13:
  v14 = (*a3)(a1 + 1, a1);
  v13 = a1 + 2;
  v15 = (*a3)(a1 + 2, a1 + 1);
  if ((v14 & 1) != 0) {
    v16 = *a1;
    if ((v15 & 1) != 0) {
      v17 = a1[2];
      a1[2] = v16;
      *a1 = v17;
    }
    else {
      *a1 = a1[1];
      a1[1] = v16;
      if (((*a3)(a1 + 2, a1 + 1) & 1) != 0) {
        v29 = a1[1];
        a1[1] = *v13;
        *v13 = v29;
      }
    }
  }
  else if ((v15 & 1) != 0) {
    v24 = a1[1];
    a1[1] = a1[2];
    a1[2] = v24;
    if (((*a3)(a1 + 1, a1) & 1) != 0) {
      v25 = *a1;
      *a1 = a1[1];
      a1[1] = v25;
    }
  }
  v30 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v31 = a1 + 2;
  v32 = 0;
  v33 = 0;
  while (((*a3)(v30, v31) & 1) == 0) {
  LABEL_40:
    v31 = v30++;
    v32 += 8;
    if (v30 == a2) {
      return true;
    }
  }
  v34 = v32;
  v41 = *v30;
  do {
    v35 = (__int64*)((char*)a1 + v34);
    *(__int64*)((char*)a1 + v34 + 24) = *(__int64*)((char*)a1 + v34 + 16);
    if (v34 == -16) {
      ++v33;
      *a1 = v41;
      if (v33 != 8) {
        goto LABEL_40;
      }
      return v30 + 1 == a2;
    }
    v34 -= 8;
  } while (((*a3)(&v41, v35 + 1) & 1) != 0);
  ++v33;
  *(__int64*)((char*)a1 + v34 + 24) = v41;
  if (v33 != 8) {
    goto LABEL_40;
  }
  return v30 + 1 == a2;
}

__int64* nn_fontll_413280(__int64* a1, __int64* a2, __int64* a3,
                          __int64 (**a4)(__int64*, _QWORD*))
{
  __int64 v4;
  __int64 v5;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  bool v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  signed __int64 v25;
  char v26;
  __int64* v27;
  char v28;
  __int64* v29;
  __int64 v30;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64* v43;
  __int64* v44;
  __int64* v45;
  signed __int64 v46;
  __int64 v47;
  __int64* v48;
  _QWORD v49[3];

  if (a1 == a2) {
    return a3;
  }
  v49[1] = v4;
  v49[2] = v5;
  v45 = a3;
  v48 = a2;
  v8 = a2 - a1;
  v46 = (char*)a2 - (char*)a1;
  v9 = v8 - 2;
  if (v8 >= 2) {
    v10 = v9 >> 1;
    v11 = v9 >> 1;
    do {
      if (v10 >= v11) {
        v13 = (2 * (v11 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
        v14 = &a1[v13];
        if ((__int64)(2 * v11 + 2) < v8 &&
            ((*a4)(&a1[v13], v14 + 1) & 1) != 0) {
          ++v14;
          v13 = 2 * v11 + 2;
        }
        v15 = &a1[v11];
        if (((*a4)(v14, v15) & 1) == 0) {
          v49[0] = *v15;
          do {
            v16 = v14;
            *v15 = *v14;
            if (v10 < v13) {
              break;
            }
            v17 = (2 * v13) | 1;
            v18 = 2 * v13 + 2;
            v14 = &a1[v17];
            if (v18 < v8 && ((*a4)(&a1[v17], v14 + 1) & 1) != 0) {
              ++v14;
              v17 = v18;
            }
            v15 = v16;
            v13 = v17;
          } while (((*a4)(v14, v49) & 1) == 0);
          *v16 = v49[0];
        }
      }
      v12 = (__int64)v11-- <= 0;
    } while (!v12);
  }
  v19 = v45;
  v20 = v48;
  if (v48 != v45) {
    if (v8 < 2) {
      v20 = v48;
      do {
        if (((*a4)(v20, a1) & 1) != 0) {
          v21 = *v20;
          *v20 = *a1;
          *a1 = v21;
        }
        ++v20;
      } while (v20 != v45);
      goto LABEL_45;
    }
    v20 = v48;
    v22 = a1 + 1;
    do {
      if (((*a4)(v20, a1) & 1) != 0) {
        v23 = *v20;
        *v20 = *a1;
        *a1 = v23;
        if (v46 == 16) {
          v24 = v22;
          v25 = 1;
          if (((*a4)(v22, a1) & 1) == 0) {
            goto LABEL_38;
          }
        }
        else {
          v26 = (*a4)(v22, a1 + 2);
          if ((v26 & 1) != 0) {
            v24 = a1 + 2;
          }
          else {
            v24 = v22;
          }
          if ((v26 & 1) != 0) {
            v25 = 2;
          }
          else {
            v25 = 1;
          }
          if (((*a4)(v24, a1) & 1) == 0) {
          LABEL_38:
            v49[0] = *a1;
            v27 = a1;
            do {
              v29 = v24;
              *v27 = *v24;
              if ((__int64)((unsigned __int64)(v8 - 2) >> 1) < v25) {
                break;
              }
              v30 = (2 * v25) | 1;
              v24 = &a1[v30];
              if (2 * v25 + 2 < v8 && ((*a4)(&a1[v30], v24 + 1) & 1) != 0) {
                ++v24;
                v30 = 2 * v25 + 2;
              }
              v28 = (*a4)(v24, v49);
              v27 = v29;
              v25 = v30;
            } while ((v28 & 1) == 0);
            *v29 = v49[0];
            v22 = a1 + 1;
            v19 = v45;
          }
        }
      }
      ++v20;
    } while (v20 != v19);
  }
LABEL_45:
  if (v8 >= 2) {
    do {
      v32 = 0;
      v33 = a1;
      v47 = *a1;
      do {
        v34 = &v33[v32];
        v35 = (2 * v32) | 1;
        v36 = v34 + 1;
        v37 = 2 * v32 + 2;
        if (v37 < v8) {
          v38 = v34 + 2;
          if (((*a4)(v34 + 1, v34 + 2) & 1) != 0) {
            v36 = v38;
            v35 = v37;
          }
        }
        *v33 = *v36;
        v33 = v36;
        v32 = v35;
      } while (v35 <= (__int64)((unsigned __int64)(v8 - 2) >> 1));
      v39 = v48 - 1;
      v48 = v39;
      if (v36 == v39) {
        *v36 = v47;
      }
      else {
        *v36 = *v39;
        *v39 = v47;
        v40 = ((char*)v36 - (char*)a1 + 8) >> 3;
        v12 = v40 < 2;
        v41 = v40 - 2;
        if (!v12) {
          v42 = v41 >> 1;
          v43 = &a1[v41 >> 1];
          if (((*a4)(v43, v36) & 1) != 0) {
            v49[0] = *v36;
            do {
              v44 = v43;
              *v36 = *v43;
              if (v42 == 0) {
                break;
              }
              v42 = (v42 - 1) >> 1;
              v43 = &a1[v42];
              v36 = v44;
            } while (((*a4)(v43, v49) & 1) != 0);
            *v44 = v49[0];
          }
        }
      }
      v12 = v8-- <= 2;
    } while (!v12);
  }
  return v20;
}

#pragma GCC visibility pop
