#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 (*NgxData_9510e0)();
extern __int64 NgxData_9510e8;
__int64 NgxRoutine_420(unsigned __int64);
__int64 NgxRoutine_430(_QWORD, _QWORD);
_QWORD* NgxRoutine_bcd70(_QWORD*);
__int64 NgxRoutine_bec00(_QWORD*, __int64, __int64, __int64);
__int64 NgxRoutine_e3100(_QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e3720(_QWORD);
__int64 NgxRoutine_e37c0(_QWORD);
__int64 NgxRoutine_e37d0(_QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e37e0(_QWORD);

__int64 NgxHr_b3620(_QWORD* a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  __int64 v15;
  __int64 v16;
  char v17;
  char* v18;
  _BYTE* v19;
  char v20;

  if (a1[4] < a3) {
    v4 = a1[1];
    v5 = a2;
    a1[4] = a3;
    v6 = a3;
    v7 = NgxRoutine_420(a3);
    a1[1] = v7;
    if (v7 == 0) {
      NgxRoutine_430(v4, v8);
      a1[4] = 0;
    LABEL_22:
      a3 = v6;
      a2 = v5;
      goto LABEL_23;
    }
    if (v4 != 0) {
      if (a1[4] >= a1[3]) {
        v9 = a1[3];
      }
      else {
        v9 = a1[4];
      }
      a1[3] = v9;
      if (v9 == 0) {
        goto LABEL_21;
      }
      v10 = v9 & 7;
      if (v9 >= 8) {
        v13 = (_BYTE*)(v4 + 3);
        v14 = (_BYTE*)(v7 + 3);
        v15 = 0;
        v16 = -(__int64)(v9 & 0xFFFFFFFFFFFFFFF8LL);
        do {
          v15 -= 8;
          *(v14 - 3) = *(v13 - 3);
          *(v14 - 2) = *(v13 - 2);
          *(v14 - 1) = *(v13 - 1);
          *v14 = *v13;
          v14[1] = v13[1];
          v14[2] = v13[2];
          v14[3] = v13[3];
          v17 = v13[4];
          v13 += 8;
          v14[4] = v17;
          v14 += 8;
        } while (v16 != v15);
        v11 = -v15;
        if (v10 == 0) {
          goto LABEL_21;
        }
      }
      else {
        v11 = 0;
        if (v10 == 0) {
        LABEL_21:
          NgxRoutine_430(v4, v8);
          goto LABEL_22;
        }
      }
      v18 = (char*)(v4 + v11);
      v19 = (_BYTE*)(v7 + v11);
      do {
        v20 = *v18++;
        --v10;
        *v19++ = v20;
      } while (v10 != 0);
      goto LABEL_21;
    }
    a3 = v6;
    a2 = v5;
    if (a1[4] != 0) {
      v12 = 0;
      do {
        *(_BYTE*)(a1[1] + v12++) = 0;
      } while (a1[4] > v12);
    }
  }
LABEL_23:
  a1[3] = a3;
  return NgxRoutine_e3100(a1[1], a2, a3);
}

__int64 NgxHr_bcf20(__int64 result, __int64* a2)
{
  __int64 v2;
  char* v3;
  _QWORD* v4;
  __int64 v5;

  v2 = *a2;
  *(_BYTE*)result = 0;
  *(_QWORD*)(result + 8) = a2;
  v3 = (char*)a2 + *(_QWORD*)(v2 - 24);
  if (*((_DWORD*)v3 + 8) == 0) {
    v4 = *((_QWORD**)v3 + 17);
    if (v4 != nullptr) {
      v5 = result;
      NgxRoutine_bcd70(v4);
      result = v5;
    }
    *(_BYTE*)result = 1;
  }
  return result;
}

void __attribute__((noreturn)) NgxHr_bede0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v6;
  __int64 v7;

  v6 = (_QWORD*)NgxRoutine_e37c0(32);
  NgxRoutine_bec00(v6, a1, a2, a3);
  v7 = NgxRoutine_e37d0(v6, NgxData_9510e8, NgxData_9510e0);
  NgxRoutine_e37e0(v6);
  NgxRoutine_e3720(v7);
  __udf(0);
}

#pragma GCC visibility pop
