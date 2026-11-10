#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float indexed_matrix_7257a0(__int64 a1, __int64 a2);

float indexed_matrix_7257a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  float result;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;

  v2 = *(_QWORD*)(a1 + 32);
  if (*(_QWORD*)(v2 + 216) != 0) {
    v3 = 0;
    do {
      v4 = *(_QWORD*)(v2 + 8 * v3);
      result = *(float*)(a2 + 8 + 4 * v3++);
      *(float*)(*(_QWORD*)a1 +
                4LL * **(_QWORD**)(a1 + 24) * *(_QWORD*)(a1 + 16) +
                4 * v4 * *(_QWORD*)(a1 + 8)) = result;
      v2 = *(_QWORD*)(a1 + 32);
      v6 = *(_QWORD*)(v2 + 216);
    } while (v3 < v6);
    if (v6 != 0) {
      v7 = 0;
      do {
        v8 = *(_QWORD*)(v2 + 8 * v7);
        result = *(float*)(a2 + 116 + 4 * v7++);
        *(float*)(*(_QWORD*)a1 +
                  4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL) *
                      *(_QWORD*)(a1 + 16) +
                  4 * v8 * *(_QWORD*)(a1 + 8)) = result;
        v2 = *(_QWORD*)(a1 + 32);
        v9 = *(_QWORD*)(v2 + 216);
      } while (v7 < v9);
      if (v9 != 0) {
        v10 = 0;
        do {
          v11 = *(_QWORD*)(v2 + 8 * v10);
          result = *(float*)(a2 + 224 + 4 * v10++);
          *(float*)(*(_QWORD*)a1 +
                    4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL) *
                        *(_QWORD*)(a1 + 16) +
                    4 * v11 * *(_QWORD*)(a1 + 8)) = result;
          v2 = *(_QWORD*)(a1 + 32);
          v12 = *(_QWORD*)(v2 + 216);
        } while (v10 < v12);
        if (v12 != 0) {
          v13 = 0;
          do {
            v14 = *(_QWORD*)(v2 + 8 * v13);
            result = *(float*)(a2 + 332 + 4 * v13++);
            *(float*)(*(_QWORD*)a1 +
                      4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 24LL) *
                          *(_QWORD*)(a1 + 16) +
                      4 * v14 * *(_QWORD*)(a1 + 8)) = result;
            v2 = *(_QWORD*)(a1 + 32);
            v15 = *(_QWORD*)(v2 + 216);
          } while (v13 < v15);
          if (v15 != 0) {
            v16 = 0;
            do {
              v17 = *(_QWORD*)(v2 + 8 * v16);
              result = *(float*)(a2 + 440 + 4 * v16++);
              *(float*)(*(_QWORD*)a1 +
                        4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 32LL) *
                            *(_QWORD*)(a1 + 16) +
                        4 * v17 * *(_QWORD*)(a1 + 8)) = result;
              v2 = *(_QWORD*)(a1 + 32);
              v18 = *(_QWORD*)(v2 + 216);
            } while (v16 < v18);
            if (v18 != 0) {
              v19 = 0;
              do {
                v20 = *(_QWORD*)(v2 + 8 * v19);
                result = *(float*)(a2 + 548 + 4 * v19++);
                *(float*)(*(_QWORD*)a1 +
                          4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 40LL) *
                              *(_QWORD*)(a1 + 16) +
                          4 * v20 * *(_QWORD*)(a1 + 8)) = result;
                v2 = *(_QWORD*)(a1 + 32);
              } while (v19 < *(_QWORD*)(v2 + 216));
            }
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
