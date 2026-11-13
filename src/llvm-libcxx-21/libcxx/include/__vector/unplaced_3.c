#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float llvm_libcxx_21_libcxx_include___vector_c56a30(float* a1, float* a2,
                                                    float* a3, float* a4);

float llvm_libcxx_21_libcxx_include___vector_c56a30(float* a1, float* a2,
                                                    float* a3, float* a4)
{

#pragma clang fp contract(off)
  float v4;
  float result;
  float v6;
  float v7;
  float v8;
  int v9;
  float v10;
  float v11;
  float v12;
  int v13;
  float v14;
  int v15;
  float v16;

  {
    v4 = a2[1];
    __asm__ volatile("" ::"w"(v4));
  }
  {
    result = a3[1];
    __asm__ volatile("" ::"w"(result));
  }
  if (v4 >= a1[1]) {
    if (result < v4) {
      {
        v7 = *a2;
        __asm__ volatile("" ::"w"(v7));
      }
      *a2 = *a3;
      *a3 = v7;
      {
        result = a2[1];
        __asm__ volatile("" ::"w"(result));
      }
      a2[1] = a3[1];
      a3[1] = result;
      if (a2[1] < a1[1]) {
        {
          v8 = *a1;
          __asm__ volatile("" ::"w"(v8));
        }
        *a1 = *a2;
        *a2 = v8;
        {
          v9 = *((_DWORD*)a1 + 1);
          __asm__ volatile("" ::"r"(v9));
        }
        a1[1] = a2[1];
        *((_DWORD*)a2 + 1) = v9;
        {
          result = a3[1];
          __asm__ volatile("" ::"w"(result));
        }
      }
    }
  }
  else {
    {
      v6 = *a1;
      __asm__ volatile("" ::"w"(v6));
    }
    if (result < v4) {
      *a1 = *a3;
      *a3 = v6;
      {
        result = a1[1];
        __asm__ volatile("" ::"w"(result));
      }
      a1[1] = a3[1];
    LABEL_9:
      a3[1] = result;
      goto LABEL_10;
    }
    *a1 = *a2;
    *a2 = v6;
    {
      v10 = a1[1];
      __asm__ volatile("" ::"w"(v10));
    }
    a1[1] = a2[1];
    a2[1] = v10;
    {
      result = a3[1];
      __asm__ volatile("" ::"w"(result));
    }
    if (result < v10) {
      {
        v11 = *a2;
        __asm__ volatile("" ::"w"(v11));
      }
      *a2 = *a3;
      *a3 = v11;
      {
        result = a2[1];
        __asm__ volatile("" ::"w"(result));
      }
      a2[1] = a3[1];
      goto LABEL_9;
    }
  }
LABEL_10:
  if (a4[1] < result) {
    {
      v12 = *a3;
      __asm__ volatile("" ::"w"(v12));
    }
    *a3 = *a4;
    *a4 = v12;
    {
      v13 = *((_DWORD*)a3 + 1);
      __asm__ volatile("" ::"r"(v13));
    }
    a3[1] = a4[1];
    *((_DWORD*)a4 + 1) = v13;
    {
      result = a3[1];
      __asm__ volatile("" ::"w"(result));
    }
    if (result < a2[1]) {
      {
        v14 = *a2;
        __asm__ volatile("" ::"w"(v14));
      }
      *a2 = *a3;
      *a3 = v14;
      {
        v15 = *((_DWORD*)a2 + 1);
        __asm__ volatile("" ::"r"(v15));
      }
      a2[1] = a3[1];
      *((_DWORD*)a3 + 1) = v15;
      {
        result = a2[1];
        __asm__ volatile("" ::"w"(result));
      }
      if (result < a1[1]) {
        {
          v16 = *a1;
          __asm__ volatile("" ::"w"(v16));
        }
        *a1 = *a2;
        *a2 = v16;
        {
          result = a1[1];
          __asm__ volatile("" ::"w"(result));
        }
        a1[1] = a2[1];
        a2[1] = result;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
