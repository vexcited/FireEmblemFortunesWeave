#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12ef5a0(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
char* Part2SuppliedLegionFile_12ef1e0(char* result, char* a2, char* a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7);
char* Part2SuppliedLegionFile_12ef1e0(char* result, char* a2, char* a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7)
{
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  char* v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  char* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  char* v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  unsigned int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  __int64 v50;
  char* v51;
  _QWORD* v52;

  if (a5 != 0) {
    while (a4 > a7 && a5 > a7) {
      if (a4 == 0) {
        return result;
      }
      v9 = 0;
      v10 = 0;
      while (1) {
        v11 = *(_QWORD*)&result[8 * v10];
        if (*(unsigned __int16*)(*(_QWORD*)a2 + 22LL) <
            (unsigned int)*(unsigned __int16*)(v11 + 22)) {
          break;
        }
        ++v10;
        v9 -= 8LL;
        if (a4 == v10) {
          return result;
        }
      }
      v12 = a4 - v10;
      v52 = (_QWORD*)a6;
      v50 = a7;
      v51 = a3;
      v49 = &result[-v9];
      if (a4 - v10 >= a5) {
        if (a4 - 1 == v10) {
          *(_QWORD*)&result[8 * v10] = *(_QWORD*)a2;
          *(_QWORD*)a2 = v11;
          return result;
        }
        v14 = a3;
        v22 = v12 / 2;
        v23 = &result[8 * (v12 / 2)];
        if (a3 != a2) {
          v24 = (a3 - a2) >> 3;
          v14 = a2;
          do {
            v25 = v24 >> 1;
            v26 = &v14[8 * (v24 >> 1)];
            v28 = *(_QWORD*)v26;
            v27 = v26 + 8;
            v24 += ~(v24 >> 1);
            if (*(unsigned __int16*)(v28 + 22) <
                (unsigned int)*(unsigned __int16*)(*(_QWORD*)&v23[8 * v10] +
                                                   22LL)) {
              v14 = v27;
            }
            else {
              v24 = v25;
            }
          } while (v24 != 0);
        }
        v15 = &v23[-v9];
        v13 = (v14 - a2) >> 3;
      }
      else {
        v13 = a5 / 2;
        v14 = &a2[8 * (a5 / 2)];
        if (&result[-v9] == a2) {
          v15 = a2;
          v21 = a2;
        }
        else {
          v15 = &result[-v9];
          v16 = (__int64)(a2 - result + v9) >> 3;
          do {
            v17 = v16 >> 1;
            v18 = (__int64*)&v15[8 * (v16 >> 1)];
            v20 = *v18;
            v19 = (char*)(v18 + 1);
            v16 += ~(v16 >> 1);
            if (*(unsigned __int16*)(*(_QWORD*)v14 + 22LL) <
                (unsigned int)*(unsigned __int16*)(v20 + 22)) {
              v16 = v17;
            }
            else {
              v15 = v19;
            }
          } while (v16 != 0);
          v21 = &result[-v9];
        }
        v22 = (v15 - v21) >> 3;
      }
      v29 = a5 - v13;
      v30 = a4;
      v31 = a5;
      v32 = a4 - v22 - v10;
      v33 = GameRoutine_12ef5a0(v15);
      v34 = (char*)v33;
      if (v22 + v13 >= v31 + v30 - (v22 + v13) - v10) {
        a7 = v50;
        a6 = (__int64)v52;
        Part2SuppliedLegionFile_12ef1e0(v33, v14, v51, v32, v29, v52, v50);
        result = v49;
        v14 = v15;
        v29 = v13;
        v32 = v22;
        a3 = v34;
      }
      else {
        a7 = v50;
        a6 = (__int64)v52;
        Part2SuppliedLegionFile_12ef1e0(v49, v15, v33, v22, v13, v52, v50);
        a3 = v51;
        result = v34;
      }
      a4 = v32;
      a5 = v29;
      a2 = v14;
      if (v29 == 0) {
        return result;
      }
    }
    if (a4 <= a5) {
      if (result != a2) {
        v38 = -a6;
        v39 = (_QWORD*)a6;
        v40 = result;
        do {
          v41 = *(_QWORD*)v40;
          v40 += 8;
          v38 -= 8;
          *v39++ = v41;
        } while (v40 != a2);
        while (a2 != a3) {
          v42 = *(_QWORD*)a2;
          v43 = *(unsigned __int16*)(*(_QWORD*)a2 + 22LL);
          v44 = *(unsigned __int16*)(*(_QWORD*)a6 + 22LL);
          if (v43 < v44) {
            v45 = 8;
          }
          else {
            v42 = *(_QWORD*)a6;
            v45 = 0;
          }
          a2 += v45;
          if (v43 >= v44) {
            v46 = 8;
          }
          else {
            v46 = 0;
          }
          *(_QWORD*)result = v42;
          result += 8;
          a6 += v46;
          if (v39 == (_QWORD*)a6) {
            return result;
          }
        }
        return (char*)memmove(result, a6, -(a6 + v38));
      }
    }
    else if (a2 != a3) {
      v35 = 0;
      do {
        *(_QWORD*)(a6 + v35) = *(_QWORD*)&a2[v35];
        v35 += 8;
      } while (&a2[v35] != a3);
      v36 = (_QWORD*)(a6 + v35);
      while (a2 != result) {
        v37 = *(v36 - 1);
        if (*(unsigned __int16*)(v37 + 22) >=
            (unsigned int)*(unsigned __int16*)(*((_QWORD*)a2 - 1) + 22LL)) {
          --v36;
        }
        else {
          v37 = *((_QWORD*)a2 - 1);
          a2 -= 8;
        }
        *((_QWORD*)a3 - 1) = v37;
        a3 -= 8;
        if (v36 == (_QWORD*)a6) {
          return result;
        }
      }
      if ((_QWORD*)a6 != v36) {
        v47 = -8;
        do {
          v48 = *--v36;
          *(_QWORD*)&a3[v47] = v48;
          v47 -= 8;
        } while (v36 != (_QWORD*)a6);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
