#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_gmap_1317f10(float32x4_t*, float32x4_t*);
extern __int64* GameData_212d708;
extern __int64 GameData_2241420;
__int64 game_gmap_anonymous_14ce640(__int64 result);
bool game_gmap_anonymous_1690120(_DWORD* a1, int* a2);

__int64 game_gmap_anonymous_14ce640(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  float32x4_t v4;
  unsigned __int64 v5;
  float32x4_t v6;

  v1 = *(_QWORD*)(result + 160);
  if (v1 != 0) {
    v2 = *(_QWORD**)(GameData_2241420 + 312);
    v3 = *(_QWORD**)(GameData_2241420 + 320);
    if (v2 != v3) {
      while (v1 != *v2) {
        v2 += 6;
        if (v2 == v3) {
          return result;
        }
      }
      LANES128(v4).n128_u64[0] = v2[2];
      v5 = LANES64_OF(vzip2_s32(COERCE_AS(int32x2_t, LANES128(v4).n128_u64[0]),
                                ((int32x2_t){0})))
               .n64_u64[0];
      LANES128(v4).n128_u32[1] = 0;
      LANES128(v4).n128_u64[1] = v5;
      v6 = v4;
      return game_gmap_1317f10(*(float32x4_t**)(*GameData_212d708 + 16), &v6);
    }
  }
  return result;
}

bool game_gmap_anonymous_1690120(_DWORD* a1, int* a2)
{
  __int64 v2;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int* v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int* v23;
  __int64 v24;
  int v25;
  _DWORD* v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;

  v2 = a2 - (__typeof__(a2))a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v11 = *(_DWORD*)a1;
      v12 = a1[1];
      v13 = *(a2 - 1);
      if (v12 < (signed __int32)*a1) {
        if (v13 >= v12) {
          *(_DWORD*)a1 = v12;
          a1[1] = v11;
          v22 = *(a2 - 1);
          if (v22 >= v11) {
            return true;
          }
          a1[1] = v22;
        }
        else {
          *(_DWORD*)a1 = v13;
        }
        *(a2 - 1) = v11;
        return true;
      }
      if (v13 >= v12) {
        return true;
      }
      a1[1] = v13;
      *(a2 - 1) = v12;
      v21 = a1[1];
    LABEL_73:
      v37 = *(_DWORD*)a1;
      if (v21 >= (signed __int32)*a1) {
        return true;
      }
      *(_DWORD*)a1 = v21;
      a1[1] = v37;
      return true;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_16;
      }
      v5 = *(_DWORD*)a1;
      v4 = a1[1];
      v6 = a1[2];
      if (v4 >= (signed __int32)*a1) {
        if (v6 < v4) {
          a1[1] = v6;
          a1[2] = v4;
          if (v6 >= v5) {
            v7 = v5;
            v8 = v6;
          }
          else {
            *(_DWORD*)a1 = v6;
            a1[1] = v5;
            v7 = v6;
            v8 = v5;
          }
          goto LABEL_63;
        }
        v7 = *(_DWORD*)a1;
        v8 = a1[1];
      }
      else {
        if (v6 < v4) {
          *(_DWORD*)a1 = v6;
          a1[2] = v5;
          v7 = v6;
          v8 = v4;
        LABEL_51:
          v4 = v5;
        LABEL_63:
          v33 = a1[3];
          if (v33 >= v4) {
            v4 = a1[3];
          }
          else {
            a1[2] = v33;
            a1[3] = v4;
            if (v33 < v8) {
              a1[1] = v33;
              a1[2] = v8;
              if (v33 < v7) {
                *(_DWORD*)a1 = v33;
                a1[1] = v7;
              }
            }
          }
          v34 = *(a2 - 1);
          if (v34 >= v4) {
            return true;
          }
          a1[3] = v34;
          *(a2 - 1) = v4;
          v35 = a1[2];
          v21 = a1[3];
          if (v21 >= v35) {
            return true;
          }
          a1[2] = v21;
          a1[3] = v35;
        LABEL_71:
          v36 = a1[1];
          if (v21 >= v36) {
            return true;
          }
          a1[1] = v21;
          a1[2] = v36;
          goto LABEL_73;
        }
        *(_DWORD*)a1 = v4;
        a1[1] = v5;
        if (v6 < v5) {
          a1[1] = v6;
          a1[2] = v5;
          v7 = v4;
          v8 = v6;
          goto LABEL_51;
        }
        v7 = v4;
        v8 = v5;
      }
      v4 = v6;
      goto LABEL_63;
    }
    v19 = *(_DWORD*)a1;
    v18 = a1[1];
    v20 = a1[2];
    if (v18 >= (signed __int32)*a1) {
      if (v20 < v18) {
        a1[1] = v20;
        a1[2] = v18;
        if (v20 < v19) {
          *(_DWORD*)a1 = v20;
          a1[1] = v19;
        }
        goto LABEL_57;
      }
    }
    else {
      if (v20 < v18) {
        *(_DWORD*)a1 = v20;
      LABEL_55:
        a1[2] = v19;
        v18 = v19;
      LABEL_57:
        v32 = *(a2 - 1);
        if (v32 >= v18) {
          return true;
        }
        a1[2] = v32;
        *(a2 - 1) = v18;
        v21 = a1[2];
        goto LABEL_71;
      }
      *(_DWORD*)a1 = v18;
      a1[1] = v19;
      if (v20 < v19) {
        a1[1] = v20;
        goto LABEL_55;
      }
    }
    v18 = v20;
    goto LABEL_57;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 != 2) {
  LABEL_16:
    v15 = a1 + 2;
    v14 = a1[2];
    v16 = *(_DWORD*)a1;
    v17 = a1[1];
    if (v17 >= (signed __int32)*a1) {
      if (v14 < v17) {
        a1[1] = v14;
        a1[2] = v17;
        if (v14 < v16) {
          *(_DWORD*)a1 = v14;
          a1[1] = v16;
        }
      }
      goto LABEL_39;
    }
    if (v14 >= v17) {
      *(_DWORD*)a1 = v17;
      a1[1] = v16;
      if (v14 >= v16) {
      LABEL_39:
        v23 = a1 + 3;
        if (a1 + 3 == a2) {
          return true;
        }
        v24 = 12;
        v25 = 0;
        while (1) {
          v27 = *v23;
          v28 = *v15;
          if (*v23 < v28) {
            v29 = v24;
            do {
              v30 = v29 - 4;
              *(_DWORD*)((char*)a1 + v29) = v28;
              if (v29 == 4) {
                v26 = a1;
                goto LABEL_42;
              }
              v31 = (char*)a1 + v29;
              v29 -= 4;
              v28 = *((_DWORD*)v31 - 2);
            } while (v27 < v28);
            v26 = (_DWORD*)((char*)a1 + v30);
          LABEL_42:
            ++v25;
            *(_DWORD*)v26 = v27;
            if (v25 == 8) {
              return v23 + 1 == a2;
            }
          }
          v15 = v23++;
          v24 += 4;
          if (v23 == a2) {
            return true;
          }
        }
      }
      a1[1] = v14;
    }
    else {
      *(_DWORD*)a1 = v14;
    }
    a1[2] = v16;
    goto LABEL_39;
  }
  v9 = *(a2 - 1);
  v10 = *(_DWORD*)a1;
  if (v9 >= (signed __int32)*a1) {
    return true;
  }
  *(_DWORD*)a1 = v9;
  *(a2 - 1) = v10;
  return true;
}

#pragma GCC visibility pop
