#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2678e0(float*, __int64, int);
float GameRoutine_2663e0(_QWORD*, __int64, __int64, float*, char);
float dtClosestHeightPointTriangle(float*, float*, float*, float*, float*);
__int64 dtNavMesh_getPolyHeight(__int64 a1, _QWORD* a2, __int64 a3, float* a4,
                                float* a5);

__int64 dtNavMesh_getPolyHeight(__int64 a1, _QWORD* a2, __int64 a3, float* a4,
                                float* a5)
{

#pragma clang fp contract(off)
  char v5;
  unsigned int v7;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int16* v14;
  __int64 v15;
  __int64* v16;
  _DWORD* v17;
  int v18;
  _DWORD* v19;
  int v20;
  _DWORD* v21;
  int v22;
  unsigned int v23;
  _DWORD* v24;
  unsigned __int16* v25;
  _DWORD* v26;
  unsigned int v27;
  _DWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  unsigned __int8* v34;
  unsigned int v35;
  unsigned int v36;
  float* v37;
  unsigned int v38;
  unsigned int v39;
  float* v40;
  unsigned int v41;
  bool v42;
  unsigned int v43;
  char v44;
  char v45;
  float v46;
  float v48[3];
  _DWORD v49[6];
  __int64 v50;

  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((*(_BYTE*)(a3 + 31) & 0xC0) == 0x40) {
    v5 = 0;
    return v5 & 1;
  }
  {
    v7 = *(unsigned __int8*)(a3 + 30);
    __asm__ volatile("" ::"r"(v7));
  }
  if (v7 == 0) {
    goto LABEL_12;
  }
  {
    v11 = a2[3];
    __asm__ volatile("" ::"r"(v11));
  }
  v12 = v7 & 3;
  if (v7 >= 4) {
    v14 = (unsigned __int16*)(a3 + 10);
    v15 = 0;
    v16 = &v50;
    do {
      v15 -= 4;
      {
        v17 = (_DWORD*)(v11 + 12LL * *(v14 - 3));
        __asm__ volatile("" ::"r"(v17));
      }
      *((_DWORD*)v16 - 6) = *v17;
      *((_DWORD*)v16 - 5) = v17[1];
      {
        v18 = v17[2];
        __asm__ volatile("" ::"r"(v18));
      }
      {
        v19 = (_DWORD*)(v11 + 12LL * *(v14 - 2));
        __asm__ volatile("" ::"r"(v19));
      }
      *((_DWORD*)v16 - 4) = v18;
      *((_DWORD*)v16 - 3) = *v19;
      *((_DWORD*)v16 - 2) = v19[1];
      {
        v20 = v19[2];
        __asm__ volatile("" ::"r"(v20));
      }
      {
        v21 = (_DWORD*)(v11 + 12LL * *(v14 - 1));
        __asm__ volatile("" ::"r"(v21));
      }
      *((_DWORD*)v16 - 1) = v20;
      *(_DWORD*)v16 = *v21;
      *((_DWORD*)v16 + 1) = v21[1];
      {
        v22 = v21[2];
        __asm__ volatile("" ::"r"(v22));
      }
      {
        v23 = *v14;
        __asm__ volatile("" ::"r"(v23));
      }
      v14 += 4;
      v24 = (_DWORD*)(v11 + 12LL * v23);
      *((_DWORD*)v16 + 2) = v22;
      *((_DWORD*)v16 + 3) = *v24;
      *((_DWORD*)v16 + 4) = v24[1];
      *((_DWORD*)v16 + 5) = v24[2];
      v16 += 6;
    } while (-(__int64)((unsigned __int8)v7 & 0xFC) != v15);
    v13 = -v15;
    if ((v7 & 3) == 0) {
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  v13 = 0;
  if ((v7 & 3) != 0) {
  LABEL_10:
    v25 = (unsigned __int16*)(a3 + 2 * v13 + 4);
    {
      v26 = &v49[3 * v13 + 2];
      __asm__ volatile("" ::"r"(v26));
    }
    do {
      {
        v27 = *v25++;
        __asm__ volatile("" ::"r"(v27));
      }
      --v12;
      v28 = (_DWORD*)(v11 + 12LL * v27);
      *(v26 - 2) = *v28;
      *(v26 - 1) = v28[1];
      *v26 = v28[2];
      v26 += 3;
    } while (v12 != 0);
  }
LABEL_12:
  {
    v29 = a2[2];
    __asm__ volatile("" ::"r"(v29));
  }
  {
    v30 = a2[5];
    __asm__ volatile("" ::"r"(v30));
  }
  v5 = GameRoutine_2678e0(a4, (__int64)v49, v7),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (a5 == nullptr || (v5 & 1) == 0) {
    return v5 & 1;
  }
  v31 = v30 + 12LL * (unsigned int)((unsigned __int64)(a3 - v29) >> 5);
  if (*(_BYTE*)(v31 + 9) == 0) {
  LABEL_26:
    GameRoutine_2663e0(a2, a3, (__int64)a4, v48, 0),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    {
      v46 = v48[1];
      __asm__ volatile("" ::"w"(v46));
    }
    goto LABEL_28;
  }
  v32 = a3 + 4;
  v33 = 0;
  while (1) {
    {
      v34 = (unsigned __int8*)(a2[7] +
                               (unsigned int)(4 * (v33 + *(_DWORD*)(v31 + 4))));
      __asm__ volatile("" ::"r"(v34));
    }
    {
      v35 = *(unsigned __int8*)(a3 + 30);
      __asm__ volatile("" ::"r"(v35));
    }
    {
      v36 = *v34;
      __asm__ volatile("" ::"r"(v36));
    }
    if (v36 >= v35) {
      break;
    }
    {
      v37 = (float*)(a2[3] + 12LL * *(unsigned __int16*)(v32 + 2LL * *v34));
      __asm__ volatile("" ::"r"(v37));
    }
    {
      v38 = v34[1];
      __asm__ volatile("" ::"r"(v38));
    }
    v39 = v38 - v35;
    if (v38 < v35) {
      goto LABEL_23;
    }
  LABEL_18:
    {
      v40 = (float*)(a2[6] + 12LL * (*(_DWORD*)v31 + v39));
      __asm__ volatile("" ::"r"(v40));
    }
    {
      v41 = v34[2];
      __asm__ volatile("" ::"r"(v41));
    }
    v42 = v41 >= v35;
    v43 = v41 - v35;
    if (!v42) {
      goto LABEL_24;
    }
  LABEL_20:
    dtClosestHeightPointTriangle(
        a4, v37, v40, (float*)(a2[6] + 12LL * (*(_DWORD*)v31 + v43)), v48),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if ((v44 & 1) != 0) {
      goto LABEL_27;
    }
  LABEL_25:
    if (++v33 >= (unsigned int)*(unsigned __int8*)(v31 + 9)) {
      goto LABEL_26;
    }
  }
  {
    v37 = (float*)(a2[6] + 12LL * (*(_DWORD*)v31 + v36 - v35));
    __asm__ volatile("" ::"r"(v37));
  }
  {
    v38 = v34[1];
    __asm__ volatile("" ::"r"(v38));
  }
  v39 = v38 - v35;
  if (v38 >= v35) {
    goto LABEL_18;
  }
LABEL_23:
  {
    v40 = (float*)(a2[3] + 12LL * *(unsigned __int16*)(v32 + 2LL * v38));
    __asm__ volatile("" ::"r"(v40));
  }
  {
    v41 = v34[2];
    __asm__ volatile("" ::"r"(v41));
  }
  v42 = v41 >= v35;
  v43 = v41 - v35;
  if (v42) {
    goto LABEL_20;
  }
LABEL_24:
  dtClosestHeightPointTriangle(
      a4, v37, v40,
      (float*)(a2[3] + 12LL * *(unsigned __int16*)(v32 + 2LL * v41)), v48),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((v45 & 1) == 0) {
    goto LABEL_25;
  }
LABEL_27:
  {
    v46 = v48[0];
    __asm__ volatile("" ::"w"(v46));
  }
LABEL_28:
  *a5 = v46;
  return v5 & 1;
}

#pragma GCC visibility pop
