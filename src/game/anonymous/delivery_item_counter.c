#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1266c80(_QWORD, _QWORD, _QWORD);
__int64 DeliveryItemCounter_Destructor(__int64 a1, __int64 a2);
__int64 DeliveryItemCounter_DeletingDestructor(__int64 a1, __int64 a2, int a3);
__int64 GameRoutine_1266080(float*, int*, int*, int*);
__int64 GameRoutine_7a69c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 GameData_21c99b8;
__int64 DeliveryItemCounter_1266c80(__int64 a1, unsigned __int16* a2, int a3);

__int64 DeliveryItemCounter_Destructor(__int64 a1, __int64 a2)
{
  GameRoutine_1266c80(a1, a2 + 4, *(unsigned __int16*)(a2 + 2));
  return 0;
}

__int64 DeliveryItemCounter_DeletingDestructor(__int64 a1, __int64 a2, int a3)
{
  GameRoutine_1266c80(a1, a2 + 8LL * a3 + 828, 1);
  return 0;
}

__int64 DeliveryItemCounter_1266c80(__int64 a1, unsigned __int16* a2, int a3)
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
  v3 = *(_QWORD*)(a1 + 16);
  v4 = v3 == 0 || *(_QWORD*)(a1 + 32) == 0;
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
    v8 = *(__int64***)(*(_QWORD*)(a1 + 8) + 8 * v7);
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
              return GameRoutine_1266080((float*)(a1 + 8), &v14, &v14, &v15);
            }
            v9 = (__int64*)*v9;
            if (v9 == nullptr) {
              return GameRoutine_1266080((float*)(a1 + 8), &v14, &v14, &v15);
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
                  a1 + 8, &v14, std___1_piecewise_construct_ptr, &v17, &v16);
              *(_DWORD*)(result + 20) += a3;
              return result;
            }
          }
          else {
            if (v10 >= v3) {
              v10 %= v3;
            }
            if (v10 != v7) {
              return GameRoutine_1266080((float*)(a1 + 8), &v14, &v14, &v15);
            }
          }
          v9 = (__int64*)*v9;
        } while (v9 != nullptr);
      }
    }
  }
  return GameRoutine_1266080((float*)(a1 + 8), &v14, &v14, &v15);
}

#pragma GCC visibility pop
