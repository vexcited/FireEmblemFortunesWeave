#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e40be0(_QWORD, _QWORD);
__int64 GameRoutine_e40f80(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* GameData_212d448[9];
float GameRoutine_e9f200(_QWORD);
__int64 LegionStackApproach_Unknown2(__int64 result);
__int64 LegionStackApproach_Unknown4(__int64 a1);
__int64 LegionStackApproach_Unknown5(__int64 a1);

__int64 LegionStackApproach_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  int v11;
  int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  bool v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  char v24;
  char v25;
  char v26;
  char v27;
  char v28;
  char v29;
  char v30;

  v1 = result;
  if (*(_BYTE*)(result + 60) == 1) {
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v23 = 869686455;
    v24 = 1;
    result =
        GameRoutine_e40f80(*(_QWORD*)(*(_QWORD*)(result + 40) + 104LL), &v23);
  }
  else {
    v2 = *(_QWORD*)(*(_QWORD*)(result + 40) + 120LL);
    if ((*(_BYTE*)(v2 + 96) & 1) == 0) {
      *(_BYTE*)(v2 + 96) = 1;
    }
  }
  v3 = *(_QWORD**)(v1 + 40);
  v4 = v3[9];
  if (v4 != 0) {
    v5 = v3[15];
    v6 = *(_DWORD*)(v1 + 56);
    *(_QWORD*)(v5 + 120) = 0;
    *(_DWORD*)(v5 + 116) = 0;
    *(_QWORD*)(v5 + 40) = 0;
    *(_QWORD*)(v5 + 80) = 0;
    *(_QWORD*)(v5 + 88) = 0;
    v7 = *(_QWORD*)(v4 + 120);
    v8 = *(_DWORD*)(v7 + 16);
    v9 = *(_DWORD*)(v7 + 20);
    *(_QWORD*)(v5 + 120) = v4;
    *(_DWORD*)(v5 + 88) = v6;
    *(_DWORD*)(v5 + 116) = 1;
    *(_DWORD*)(v5 + 24) = v8;
    *(_DWORD*)(v5 + 28) = v9;
    return result;
  }
  v10 = v3[8];
  v11 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 8) + 40LL) + 8LL);
  if (v11 == 6 || v11 == 0) {
    v13 = *(_DWORD*)(v10 + 112);
    if (v13 != 0) {
      if (v13 != 1) {
        return result;
      }
      v14 = 0;
    }
    else {
      v14 = 1;
    }
    v15 = *GameData_212d448[0] + 24LL * v14;
    result = *(_QWORD*)(v15 + 32);
    if (result != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                                memory_order_relaxed);
      v16 = *(_QWORD*)(v15 + 40);
      if (*(_QWORD*)(result + 8) == -1 || v16 == 0) {
        return std___1___shared_weak_count___release_weak(result);
      }
      v18 = *(_QWORD*)(v16 + 80);
      if (v18 == 0) {
        return std___1___shared_weak_count___release_weak(result);
      }
      v19 = *(_QWORD*)(v18 + 8) == -1 || *(_QWORD*)(v16 + 88) == 0;
      if (v19 || *(_QWORD*)(result + 8) == -1) {
        return std___1___shared_weak_count___release_weak(result);
      }
      else {
        result = std___1___shared_weak_count___release_weak(result);
        v20 = *(_DWORD*)(v1 + 56);
        v21 = *(_QWORD*)(*(_QWORD*)(v1 + 40) + 120LL);
        *(_QWORD*)(v21 + 120) = 0;
        *(_DWORD*)(v21 + 116) = 0;
        *(_QWORD*)(v21 + 40) = 0;
        *(_QWORD*)(v21 + 80) = 0;
        *(_QWORD*)(v21 + 88) = 0;
        *(_DWORD*)(v21 + 24) = *(_DWORD*)(v16 + 40);
        v22 = *(_DWORD*)(v16 + 44);
        *(_DWORD*)(v21 + 88) = v20;
        *(_DWORD*)(v21 + 116) = 1;
        *(_DWORD*)(v21 + 28) = v22;
      }
    }
  }
  return result;
}

__int64 LegionStackApproach_Unknown4(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 40);
  v3 = *(_QWORD*)(v1 + 120);
  if (*(_BYTE*)(v3 + 96) != 0) {
    v4 = *(_QWORD*)(v3 + 8);
    *(_BYTE*)(v3 + 96) = 0;
    GameRoutine_e40be0(*(_QWORD*)(v4 + 104), 0);
    v1 = *(_QWORD*)(a1 + 40);
  }
  result = GameRoutine_e40be0(*(_QWORD*)(v1 + 104), 0);
  v6 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 120LL);
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_DWORD*)(v6 + 116) = 0;
  return result;
}

__int64 LegionStackApproach_Unknown5(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  __int64 v11;
  float v12;
  float v13;
  unsigned int v14;
  float v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;
  __int64 v21;
  bool v22;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  float v28;
  __int64 v29;
  __int64 v30;
  float v31;
  __int64 v32;
  __int64 v34;
  float v35;
  float v36;

  v1 = *(_QWORD**)(a1 + 40);
  v2 = v1[9];
  if (v2 == 0) {
    v16 = v1[8];
    LODWORD(v1) = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 8) + 40LL) + 8LL);
    if ((_DWORD)v1 == 6 || (_DWORD)v1 == 0) {
      LODWORD(v1) = *(_DWORD*)(v16 + 112);
      v14 = 1;
      if ((_DWORD)v1 != 0) {
        if ((_DWORD)v1 != 1) {
          return (v14 | (unsigned int)v1) & 1;
        }
        v14 = 0;
      }
      v1 = (_QWORD*)(*GameData_212d448[0] + 24LL * v14);
      v18 = v1[4];
      if (v18 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                                  memory_order_relaxed);
        v19 = v1[5];
        if (*(_QWORD*)(v18 + 8) != -1 && v19 != 0) {
          v21 = *(_QWORD*)(v19 + 80);
          if (v21 != 0) {
            v22 = *(_QWORD*)(v21 + 8) == -1 || *(_QWORD*)(v19 + 88) == 0;
            if (!v22 && *(_QWORD*)(v18 + 8) != -1) {
              std___1___shared_weak_count___release_weak(v18);
              v24 = *(_QWORD*)(a1 + 40);
              v25 = *(_QWORD*)(*(_QWORD*)(v24 + 64) + 8LL);
              v26 = *(__int64**)(v25 + 56);
              v27 = *(__int64**)(v25 + 64);
              if (v26 == v27) {
                v32 = a1;
                v28 = 0.6;
              }
              else {
                v28 = 0.6;
                do {
                  v30 = *v26;
                  v26 += 2;
                  v29 = v30;
                  v31 = fmaxf(GameRoutine_e9f200(v30), 0.6);
                  if ((*(_BYTE*)(v30 + 92) & (*(float*)(v30 + 88) < v31)) !=
                      0) {
                    v31 = *(float*)(v29 + 88);
                  }
                  if (v31 >= v28) {
                    v28 = v31;
                  }
                } while (v26 != v27);
                v24 = *(_QWORD*)(a1 + 40);
                v32 = a1;
              }
              v34 = *(_QWORD*)(v24 + 120);
              v10 = v28 + *(float*)(v32 + 52);
              v11 = *(_QWORD*)(*(_QWORD*)(v34 + 8) + 136LL);
              v35 = *(float*)(v34 + 16) - *(float*)(v19 + 40);
              v12 =
                  (float)((float)(*(float*)(v34 + 20) - *(float*)(v19 + 44)) *
                          (float)(*(float*)(v34 + 20) - *(float*)(v19 + 44))) +
                  (float)(v35 * v35);
              v36 = GameRoutine_e9f200(v11);
              v14 = 0;
              v15 = fmaxf(v36, 0.6);
              goto LABEL_5;
            }
          }
        }
        std___1___shared_weak_count___release_weak(v18);
      }
    }
    v14 = 1;
    return (v14 | (unsigned int)v1) & 1;
  }
  v3 = v1[15];
  v4 = *(_QWORD*)(v2 + 120);
  v5 = *(float*)(a1 + 52);
  v6 = *(_QWORD*)(v2 + 136);
  v7 = *(float*)(v4 + 16);
  v8 = *(float*)(v4 + 20);
  v9 = fmaxf(GameRoutine_e9f200(v6), 0.6);
  if ((*(_BYTE*)(v6 + 92) & (*(float*)(v6 + 88) < v9)) != 0) {
    v9 = *(float*)(v6 + 88);
  }
  v10 = v5 + v9;
  v11 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 136LL);
  v12 = (float)((float)(*(float*)(v3 + 20) - v8) *
                (float)(*(float*)(v3 + 20) - v8)) +
        (float)((float)(*(float*)(v3 + 16) - v7) *
                (float)(*(float*)(v3 + 16) - v7));
  v13 = GameRoutine_e9f200(v11);
  v14 = 0;
  v15 = fmaxf(v13, 0.6);

LABEL_5:
  if ((*(_BYTE*)(v11 + 92) & (*(float*)(v11 + 88) < v15)) != 0) {
    v15 = *(float*)(v11 + 88);
  }
  LODWORD(v1) = v12 < (float)((float)(v10 + v15) * (float)(v10 + v15));
  return (v14 | (unsigned int)v1) & 1;
}

#pragma GCC visibility pop
