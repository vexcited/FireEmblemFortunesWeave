#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1265f00(_QWORD, _QWORD, _QWORD);
__int64 DeliveryItemChecker_Destructor(__int64 a1, __int64 a2);
__int64 DeliveryItemChecker_DeletingDestructor(__int64 a1, __int64 a2, int a3);
__int64 GameRoutine_1266080(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7a69c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 GameData_21c99b8;
__int64 DeliveryItemChecker_1265f00(_QWORD* a1, unsigned __int16* a2, int a3);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___next_prime(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_7a6cc0(__int64*, unsigned __int64);
void DeliveryItemChecker_1265c20(unsigned __int64 result, int* a2, int* a3,
                                 int* a4);
bool DeliveryItemChecker_Unknown4(__int64 a1);

__int64 DeliveryItemChecker_Destructor(__int64 a1, __int64 a2)
{
  GameRoutine_1265f00(a1, a2 + 4, *(unsigned __int16*)(a2 + 2));
  return 0;
}

__int64 DeliveryItemChecker_DeletingDestructor(__int64 a1, __int64 a2, int a3)
{
  GameRoutine_1265f00(a1, a2 + 8LL * a3 + 828, 1);
  return 0;
}

bool DeliveryItemChecker_Unknown4(__int64 a1)
{
  __int64* v1;

  v1 = (__int64*)(a1 + 32);
  do {
    v1 = (__int64*)*v1;
  } while (v1 != nullptr && (signed __int32)*((_DWORD*)v1 + 5) >=
                                (signed __int32)*(_DWORD*)(a1 + 8));
  return v1 == nullptr;
}

void DeliveryItemChecker_1265c20(unsigned __int64 result, int* a2, int* a3,
                                 int* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v10;
  __int64** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  float v18;
  __int64 v19;
  float v20;
  float v21;
  _BOOL8 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 primeEm;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  unsigned __int64 v32;

  v5 = *a2;
  v6 = *(_QWORD*)(result + 8);
  if (v6 != 0) {
    v10 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = *a2;
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
    }
    else {
      v4 = v10 & v5;
    }
    v11 = *(__int64***)(*(_QWORD*)result + 8 * v4);
    if (v11 != nullptr) {
      v12 = *v11;
      if (v12 != nullptr) {
        if ((v6 & v10) == 0) {
          while (1) {
            v14 = v12[1];
            if (v14 == v5) {
              if (*((_DWORD*)v12 + 4) == (_DWORD)v5) {
                return;
              }
            }
            else if ((v14 & v10) != v4) {
              goto LABEL_22;
            }
            v12 = (__int64*)*v12;
            if (v12 == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v13 = v12[1];
          if (v13 == v5) {
            if (*((_DWORD*)v12 + 4) == (_DWORD)v5) {
              return;
            }
          }
          else {
            if (v13 >= v6) {
              v13 %= v6;
            }
            if (v13 != v4) {
              break;
            }
          }
          v12 = (__int64*)*v12;
        } while (v12 != nullptr);
      }
    }
  }
LABEL_22:
  v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       24, 16, 0);
  v16 = *a3;
  v17 = *a4;
  v18 = *(float*)(result + 32);
  v19 = v15;
  *(_QWORD*)v15 = 0;
  *(_QWORD*)(v15 + 8) = v5;
  *(_DWORD*)(v15 + 16) = v16;
  *(_DWORD*)(v15 + 20) = v17;
  v20 = (float)(unsigned __int64)(*(_QWORD*)(result + 24) + 1LL);
  if (v6 == 0 || (float)(v18 * (float)v6) < v20) {
    v21 = v20 / v18;
    v22 = true;
    if (v6 >= 3) {
      v22 = (v6 & (v6 - 1)) != 0;
    }
    v23 = v22 | (2 * v6);
    v24 = vcvtps_u64_f32(v21);
    if (v23 <= v24) {
      v25 = v24;
    }
    else {
      v25 = v23;
    }
    if (v25 == 1) {
      v25 = 2;
    }
    else if ((v25 & (v25 - 1)) != 0) {
      primeEm = std___1___next_prime(v25);
      v6 = *(_QWORD*)(result + 8);
      v25 = primeEm;
    }
    if (v25 > v6) {
      goto LABEL_34;
    }
    if (v25 < v6) {
      v27 = vcvtps_u64_f32((float)*(unsigned __int64*)(result + 24) /
                           *(float*)(result + 32));
      if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
        v27 = std___1___next_prime(v27);
      }
      else {
        v28 = 1LL << (-(char)__clz(v27 - 1) & 63);
        if (v27 >= 2) {
          v27 = v28;
        }
      }
      if (v25 <= v27) {
        v25 = v27;
      }
      if (v25 < v6) {
      LABEL_34:
        GameRoutine_7a6cc0((__int64*)result, v25);
      }
    }
    v6 = *(_QWORD*)(result + 8);
    if ((v6 & (v6 - 1)) != 0) {
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
      else {
        v4 = v5;
      }
    }
    else {
      v4 = (v6 - 1) & v5;
    }
  }
  v29 = *(_QWORD*)result;
  v30 = *(__int64**)(*(_QWORD*)result + 8 * v4);
  if (v30 != nullptr) {
    *(_QWORD*)v19 = *v30;
    *v30 = v19;
  }
  else {
    v31 = *(_QWORD*)(result + 16);
    *(_QWORD*)(result + 16) = v19;
    *(_QWORD*)v19 = v31;
    *(_QWORD*)(v29 + 8 * v4) = result + 16;
    if (*(_QWORD*)v19 != 0) {
      v32 = *(_QWORD*)(*(_QWORD*)v19 + 8LL);
      if ((v6 & (v6 - 1)) != 0) {
        if (v32 >= v6) {
          v32 %= v6;
        }
      }
      else {
        v32 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)result + 8 * v32) = v19;
    }
  }
  ++*(_QWORD*)(result + 24);
}

__int64 DeliveryItemChecker_1265f00(_QWORD* a1, unsigned __int16* a2, int a3)
{
  unsigned __int64 v3;
  bool v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64** v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 result;
  int v14;
  int v15;
  char v16;
  int* v17;

  v15 = a3;
  v3 = a1[3];
  v4 = v3 == 0 || a1[5] == 0;
  v5 = *(
      unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 +
                                                                     64) +
                                                          8LL * *a2) +
                                               24LL) +
                                    600LL) +
                         16LL);
  v14 = *(
      unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 +
                                                                     64) +
                                                          8LL * *a2) +
                                               24LL) +
                                    600LL) +
                         16LL);
  if (!v4) {
    v6 = v3 - 1;
    if ((v3 & (v3 - 1)) != 0) {
      v7 = v5;
      if (v3 <= v5) {
        v7 = (unsigned int)v5 % (unsigned __int16)v3;
      }
    }
    else {
      v7 = ((_DWORD)v3 - 1) & (unsigned int)v5;
    }
    v8 = *(__int64***)(a1[2] + 8 * v7);
    if (v8 != nullptr) {
      v9 = *v8;
      if (v9 != nullptr) {
        if ((v3 & v6) == 0) {
          while (1) {
            v11 = v9[1];
            if (v11 == v5) {
              if (*((_DWORD*)v9 + 4) == (_DWORD)v5) {
                goto LABEL_26;
              }
            }
            else if ((v11 & v6) != v7) {
              return GameRoutine_1266080(a1 + 2, &v14, &v14, &v15);
            }
            v9 = (__int64*)*v9;
            if (v9 == nullptr) {
              return GameRoutine_1266080(a1 + 2, &v14, &v14, &v15);
            }
          }
        }
        do {
          v10 = v9[1];
          if (v10 == v5) {
            if (*((_DWORD*)v9 + 4) == (_DWORD)v5) {
            LABEL_26:
              v17 = &v14;
              result = GameRoutine_7a69c0(
                  a1 + 2, &v14, std___1_piecewise_construct_ptr, &v17, &v16);
              *(_DWORD*)(result + 20) += a3;
              return result;
            }
          }
          else {
            if (v10 >= v3) {
              v10 %= v3;
            }
            if (v10 != v7) {
              return GameRoutine_1266080(a1 + 2, &v14, &v14, &v15);
            }
          }
          v9 = (__int64*)*v9;
        } while (v9 != nullptr);
      }
    }
  }
  return GameRoutine_1266080(a1 + 2, &v14, &v14, &v15);
}

#pragma GCC visibility pop
