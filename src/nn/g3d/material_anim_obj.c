#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5e1980(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5e7480(_QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_5e76a0(_QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_5e77c0(_QWORD, _QWORD, _QWORD, float);
__int64 MaterialAnimObj_Unknown5(__int64 a1, _QWORD* a2);
float MaterialAnimObj_Unknown3(__int64 a1);
__int64 MaterialAnimObj_Unknown7(__int64 result, _QWORD* a2);
__int64 MaterialAnimObj_5e1be0(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4);

__int64 MaterialAnimObj_Unknown5(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 32LL))(a1, *a2);
}

float MaterialAnimObj_Unknown3(__int64 a1)
{
  float result;
  __int64 v2;
  int v4;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  float* v19;

  result = *(float*)(a1 + 64);
  if (result != **(float**)(a1 + 8)) {
    v2 = *(unsigned __int16*)(a1 + 100);
    if (*(_WORD*)(a1 + 100) != 0) {
      v4 = *(_DWORD*)(a1 + 60);
      if (v4 >= 1 && v4 <= *(_DWORD*)(a1 + 56)) {
        v15 = v2 << 6;
        v16 = 0;
        v17 = 0;
        do {
          v18 = *(_QWORD*)(a1 + 112) + v16;
          GameRoutine_5e1980(a1, v18, v17);
          v16 += 64;
          v17 +=
              *(unsigned __int16*)(v18 + 50) + *(unsigned __int16*)(v18 + 52);
        } while (v15 != v16);
      }
      else {
        v6 = v2 << 6;
        v7 = 0;
        v8 = 0;
        do {
          v9 = *(_QWORD*)(a1 + 112);
          v10 = v9 + v7;
          v11 = **(float**)(a1 + 8);
          v12 = *(unsigned __int16*)(v9 + v7 + 40);
          if (v12 != 0xFFFF) {
            GameRoutine_5e7480(v9 + v7, *(_QWORD*)(a1 + 72) + 4 * v12,
                               *(_QWORD*)(a1 + 136) + 2LL * v8, 0,
                               **(float**)(a1 + 8));
          }
          v13 = *(unsigned __int16*)(v10 + 42);
          if (v13 != 0xFFFF) {
            GameRoutine_5e76a0(
                v9 + v7, *(_QWORD*)(a1 + 72) + 4 * v13,
                *(_QWORD*)(a1 + 136) +
                    2LL * (v8 + *(unsigned __int16*)(v9 + v7 + 50)),
                0, v11);
          }
          v14 = v9 + v7;
          if (*(__int16*)(v14 + 46) != -1) {
            GameRoutine_5e77c0(
                v10, *(_QWORD*)(a1 + 72) + 4LL * *(unsigned __int16*)(v14 + 44),
                0, v11);
          }
          v7 += 64;
          v8 += *(unsigned __int16*)(v14 + 50) + *(unsigned __int16*)(v14 + 52);
        } while (v6 != v7);
      }
    }
    v19 = *(float**)(a1 + 8);
    result = *v19;
    *(float*)(a1 + 64) = *v19;
  }
  return result;
}

__int64 MaterialAnimObj_Unknown7(__int64 result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  int v9;
  unsigned __int16* v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  bool v14;
  _DWORD* v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  __int64 (*v21)(_QWORD*, _QWORD);

  if (*(_WORD*)(result + 100) != 0) {
    v2 = 4LL * *(unsigned __int16*)(result + 100);
    v3 = 32;
    v5 = (_QWORD*)result;
    v6 = 0;
    v7 = 0;
    do {
      v8 = v5[14];
      v9 = *(_DWORD*)(v5[11] + v6);
      v10 = (unsigned __int16*)(v8 + v3);
      if ((v9 & 0x80000000) == 0) {
        v11 = *(_DWORD*)(v5[11] + v6) & 0x7FFF;
        result = MaterialAnimObj_5e1be0(
            v5, a2[6] + ((unsigned __int64)(v9 & 0x7FFF) << 7), v10 - 16, v7);
        v12 = v10[7];
        v13 = v10[8];
        v14 = v12 == 0xFFFF && (_DWORD)v13 == 0xFFFF;
        if (!v14) {
          if (v12 == 0xFFFF) {
            v15 = (_DWORD*)(*(_QWORD*)(v8 + v3) + 8 * v13 + 4);
          }
          else {
            v15 = (_DWORD*)(v5[9] + 4LL * *(unsigned __int16*)(v8 + v3 + 12));
          }
          v16 = a2[2];
          v17 = *(_DWORD*)(v16 + 4LL * (v11 >> 5));
          v18 = *v15 != 0;
          v14 = (v17 & (1 << v9)) == 0;
          v19 = v17 & ~(1 << v9);
          v20 = !v14;
          *(_DWORD*)(v16 + 4LL * (v11 >> 5)) = v19 | (v18 << v9);
          v21 = (__int64 (*)(_QWORD*, _QWORD))a2[13];
          if (v21 != nullptr && v18 != v20) {
            result = v21(a2, v9 & 0x7FFF);
          }
        }
      }
      v6 += 4;
      v3 += 64;
      v7 += v10[9] + v10[10];
    } while (v2 != v6);
  }
  return result;
}

__int64 MaterialAnimObj_5e1be0(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4)
{
  __int64 v4;
  int v5;
  _QWORD* v8;
  unsigned __int16* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned int* v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  unsigned __int16* v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 (*v46)(__int64);
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 (*v52)(__int64);
  __int64 v53;

  v4 = *(_QWORD*)(result + 72);
  v5 = *(unsigned __int16*)(a3 + 50);
  v8 = (_QWORD*)result;
  if (*(_WORD*)(a3 + 50) != 0) {
    v9 = *(unsigned __int16**)(a3 + 8);
    a4 = (int)a4;
    v10 = 0;
    v11 = v4 + 4LL * *(unsigned __int16*)(a3 + 40);
    do {
      v12 = *(unsigned __int16*)(v8[17] + 2 * a4);
      if (v12 != 0xFFFF) {
        v13 = *(_QWORD*)(*(_QWORD*)a2 + 80LL);
        v14 = v13 + 32 * v12;
        if ((*(_DWORD*)(v14 + 20) & 0x80000000) == 0) {
          *(_DWORD*)(*(_QWORD*)(a2 + 16) + 4LL * ((unsigned int)v12 >> 5)) |=
              1 << v12;
          *(_BYTE*)(a2 + 44) |= 1u;
          v13 = *(_QWORD*)(*(_QWORD*)a2 + 80LL);
        }
        v15 = *(unsigned __int16*)(v14 + 24);
        if ((*(_DWORD*)(v13 + 32 * v15 + 20) & 0x80000000) == 0) {
          *(_DWORD*)(*(_QWORD*)(a2 + 16) + ((v15 >> 3) & 0x1FFC)) |= 1 << v15;
          *(_BYTE*)(a2 + 44) |= 1u;
        }
        v16 = v9[5];
        v17 = *(_QWORD*)(a2 + 72) + *(unsigned __int16*)(v14 + 18);
        v18 = v9[4];
        result = v9[6];
        if (v16 + (int)v18 + (int)result > (unsigned int)v18) {
          v19 = v16 + result;
          result = v9[4];
          v20 = v19 & 7;
          if ((v19 & 7) != 0) {
            v21 = 48LL * v9[4] + 20;
            result = v9[4];
            do {
              v22 = *(_DWORD*)(v11 + 4 * result++);
              --v20;
              v23 = *(unsigned int*)(*(_QWORD*)(a3 + 24) + v21);
              v21 += 48;
              *(_DWORD*)(v17 + v23) = v22;
            } while (v20 != 0);
          }
          v24 = (unsigned int)(v19 + v18);
          if ((unsigned __int64)(v18 - v24) <= 0xFFFFFFFFFFFFFFF8LL) {
            v25 = v24 - result;
            v26 = 3 * result;
            result = v11 + 16 + 4 * result;
            v27 = 16 * v26;
            do {
              v25 -= 8;
              *(_DWORD*)(v17 + *(unsigned int*)(*(_QWORD*)(a3 + 24) + v27 +
                                                20)) = *(_DWORD*)(result - 16);
              *(_DWORD*)(v17 + *(unsigned int*)(*(_QWORD*)(a3 + 24) + v27 +
                                                68)) = *(_DWORD*)(result - 12);
              *(_DWORD*)(v17 + *(unsigned int*)(*(_QWORD*)(a3 + 24) + v27 +
                                                116)) = *(_DWORD*)(result - 8);
              *(_DWORD*)(v17 + *(unsigned int*)(*(_QWORD*)(a3 + 24) + v27 +
                                                164)) = *(_DWORD*)(result - 4);
              *(_DWORD*)(v17 + *(unsigned int*)(*(_QWORD*)(a3 + 24) + v27 +
                                                212)) = *(_DWORD*)result;
              *(_DWORD*)(v17 + *(unsigned int*)(*(_QWORD*)(a3 + 24) + v27 +
                                                260)) = *(_DWORD*)(result + 4);
              *(_DWORD*)(v17 + *(unsigned int*)(*(_QWORD*)(a3 + 24) + v27 +
                                                308)) = *(_DWORD*)(result + 8);
              v28 = *(_DWORD*)(result + 12);
              result += 32;
              v29 = *(_QWORD*)(a3 + 24) + v27;
              v27 += 384;
              *(_DWORD*)(v17 + *(unsigned int*)(v29 + 356)) = v28;
            } while (v25 != 0);
          }
        }
        if (v9[8] != 0) {
          v30 = v9[7];
          v31 = v9[8] + v30;
          result = 8 * v30;
          do {
            ++v30;
            v32 = (unsigned int*)(*(_QWORD*)(a3 + 32) + result);
            result += 8;
            *(_DWORD*)(v17 + *v32) = v32[1];
          } while (v30 < v31);
        }
      }
      ++v10;
      v9 += 12;
      ++a4;
    } while (v10 != v5);
    v4 = v8[9];
  }
  v33 = *(unsigned __int16*)(a3 + 52);
  if (*(_WORD*)(a3 + 52) != 0) {
    v34 = 2LL * (int)a4;
    v35 = 0;
    v36 = v4 + 4LL * *(unsigned __int16*)(a3 + 42);
    v37 = (unsigned __int16*)(*(_QWORD*)(a3 + 16) + 10LL);
    do {
      v38 = *(unsigned __int16*)(v8[17] + v34);
      if ((_DWORD)v38 != 0xFFFF) {
        if ((__int16)*(v37 - 1) == -1) {
          v41 = *(_QWORD*)(a2 + 80);
          v42 = *(int*)(*(_QWORD*)(a3 + 32) + 8LL * *v37 + 4);
          v53 = *(_QWORD*)(*(_QWORD*)(a2 + 88) +
                           8LL * *(unsigned __int16*)(v8[17] + v34));
          v43 = *(_QWORD*)(v8[18] + 8 * v42);
          v44 = *(_QWORD*)(v8[19] + 8 * v42);
          v45 = *(_QWORD*)(v41 + 8LL * *(unsigned __int16*)(v8[17] + v34));
          *(_QWORD*)(v41 + 8LL * *(unsigned __int16*)(v8[17] + v34)) = v43;
          *(_QWORD*)(*(_QWORD*)(a2 + 88) + 8LL * (unsigned int)v38) = v44;
          v46 = *(__int64 (**)(__int64))(a2 + 120);
          if (v46 != nullptr &&
              (v45 != v43 ||
               v53 != *(_QWORD*)(*(_QWORD*)(a2 + 88) + 8 * v38))) {
            result = v46(a2);
          }
        }
        else {
          LODWORD(v39) = *(_DWORD*)(v36 + 4LL * v35);
          if ((v39 & 0x80000000) != 0) {
            v39 = 0;
          }
          else {
            v40 = *(unsigned __int16*)(v8[13] + 108LL);
            if ((unsigned int)v39 >= v40) {
              LODWORD(v39) = v40 - 1;
            }
            v39 = (int)v39;
          }
          v47 = *(_QWORD*)(a2 + 80);
          v48 = *(_QWORD*)(v8[18] + 8 * v39);
          v49 = *(_QWORD*)(v8[19] + 8 * v39);
          v50 = *(_QWORD*)(v47 + 8 * v38);
          v51 = *(_QWORD*)(*(_QWORD*)(a2 + 88) + 8 * v38);
          *(_QWORD*)(v47 + 8 * v38) = v48;
          *(_QWORD*)(*(_QWORD*)(a2 + 88) + 8 * v38) = v49;
          v52 = *(__int64 (**)(__int64))(a2 + 120);
          if (v52 != nullptr &&
              (v50 != v48 ||
               v51 != *(_QWORD*)(*(_QWORD*)(a2 + 88) + 8 * v38))) {
            result = v52(a2);
          }
          ++v35;
        }
      }
      --v33;
      v37 += 8;
      v34 += 2;
    } while (v33 != 0);
  }
  return result;
}

#pragma GCC visibility pop
