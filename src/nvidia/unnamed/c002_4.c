#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN** CudaDriverData_1423090;

extern __int64 CudaDriverData_14230e0;

__int64 CudaDriverRoutine_10d1b0(__int64, unsigned int**);

__int64 CudaDriverRoutine_10da00(__int64 result, char);

__int64 CudaDriverRoutine_127eb0(_QWORD, _QWORD);

__int64 CudaDriverRoutine_129b40(__int64, _QWORD*, int,
                                 __int64 (*)(_QWORD*, __int64), __int64);

__int64 CudaDriverRoutine_12a5e0(__int64);

__int64 CudaDriverRoutine_12a640(__int64, __int64*);

__int64 CudaDriverRoutine_12e340(_QWORD);

__int64 CudaDriverRoutine_12e510(__int64, __int64);

__int64 CudaDriverRoutine_1dc9c0(_QWORD);

__int64 CudaDriverRoutine_1fc4a0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_1fc5a0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_b4720(_QWORD);

__int64 CudaDriverRoutine_ed630(__int64, __int64, const char*, ...);

__int64 CudaDriverHr_10dda0(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  const char* v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _BYTE v20[4];
  _BYTE v21[4];

  if (*(_BYTE*)(a1 + 352) != 0) {
    return 0;
  }
  v3 = CudaDriverData_14230e0;
  v4 = *(_QWORD*)CudaDriverData_14230e0;
  *(_QWORD*)(a1 + 344) = *(_QWORD*)(*(_QWORD*)CudaDriverData_14230e0 + 24LL);
  *(_QWORD*)(v4 + 24) = a1;
  v5 = *(_QWORD*)(a1 + 344);
  if (v5 != 0) {
    *(_QWORD*)(v5 + 336) = a1;
  }
  *(_BYTE*)(a1 + 352) = 1;
  v6 = *(_QWORD*)(v4 + 16);
  if (v6 != 0) {
    while (1) {
      v7 = CudaDriverRoutine_10d1b0(a1, (unsigned int**)v6);
      if (v7 != 0) {
        break;
      }
      v6 = *(_QWORD*)(v6 + 176);
      if (v6 == 0) {
        goto LABEL_8;
      }
    }
    v10 = v7;
  LABEL_12:
    CudaDriverRoutine_10da00(a1, 0);
    return v10;
  }
  else {
  LABEL_8:
    if ((unsigned __int8)CudaDriverRoutine_1dc9c0(a1) != 0) {
      v8 = *(_QWORD*)v3;
      v9 = *(_QWORD*)(*(_QWORD*)v3 + 304LL);
      if (v9 == 0) {
        v11 = *(_QWORD**)(v8 + 16);
        if (v11 != nullptr) {
          while (2) {
            v12 = (_QWORD*)v11[22];
            if (v12 != nullptr) {
              do {
                if ((unsigned __int8)CudaDriverRoutine_127eb0(v12, v11) != 0) {
                  if ((unsigned int)CudaDriverRoutine_1fc4a0(v11 + 23, v12, 1,
                                                             v20) == 0) {
                    v10 = 2;
                    goto LABEL_31;
                  }
                  if (v20[0] != 0) {
                    v13 = (*(__int64 (**)(_QWORD, _QWORD))(*v12 + 21048LL))(
                        *v12, *v11);
                    if ((_DWORD)v13 != 0) {
                      v14 = v13;
                      v15 = CudaDriverRoutine_b4720(v13);
                      if (v15 != 0) {
                        v16 = *(const char**)(v15 + 8);
                      }
                      else {
                        v16 = "UNRECOGNIZED_ERROR";
                      }
                      CudaDriverRoutine_ed630(
                          (__int64)"CUDA", 0,
                          "Failed to enable peer mapping in the OS abstraction "
                          "layer: %s\n",
                          v16);
                      CudaDriverRoutine_1fc5a0(v11 + 23, v12, 1, 0);
                      v10 = v14;
                    LABEL_31:
                      v17 = (_QWORD*)(*(_QWORD*)v3 + 16LL);
                      do {
                        v18 = (_QWORD*)*v17;
                        if (*v17 == 0) {
                          break;
                        }
                        v17 = v18 + 22;
                        v19 = (_QWORD*)v18[22];
                        if (v19 != nullptr) {
                          if (v18 == v11) {
                            do {
                              if (v19 == v12) {
                                break;
                              }
                              if ((unsigned __int8)CudaDriverRoutine_127eb0(
                                      v19, v18) != 0 &&
                                  (unsigned int)CudaDriverRoutine_1fc5a0(
                                      v18 + 23, v19, 1, v21) != 0 &&
                                  v21[0] != 0) {
                                (*(void (**)(_QWORD, _QWORD))(*v19 + 21056LL))(
                                    *v19, *v18);
                              }
                              v19 = (_QWORD*)v19[22];
                            } while (v19 != nullptr);
                          }
                          else {
                            do {
                              if ((unsigned __int8)CudaDriverRoutine_127eb0(
                                      v19, v18) != 0 &&
                                  (unsigned int)CudaDriverRoutine_1fc5a0(
                                      v18 + 23, v19, 1, v21) != 0 &&
                                  v21[0] != 0) {
                                (*(void (**)(_QWORD, _QWORD))(*v19 + 21056LL))(
                                    *v19, *v18);
                              }
                              v19 = (_QWORD*)v19[22];
                            } while (v19 != nullptr);
                          }
                        }
                      } while (v18 != v11);
                      goto LABEL_12;
                    }
                  }
                }
                v12 = (_QWORD*)v12[22];
              } while (v12 != nullptr);
              v11 = (_QWORD*)v11[22];
              if (v11 != nullptr) {
                continue;
              }
            }
            break;
          }
          v8 = *(_QWORD*)v3;
          v9 = *(_QWORD*)(*(_QWORD*)v3 + 304LL);
        }
        else {
          v9 = 0;
        }
      }
      *(_QWORD*)(v8 + 304) = v9 + 1;
      return 0;
    }
    else {
      return 0;
    }
  }
}

void CudaDriverHr_12a820(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4;
  __int64 v5;
  unsigned __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  _DWORD* v12;
  _QWORD v13[2];

  if (*(_BYTE*)(a3 + 24) != 0) {
    v4 = *(_WORD*)(a2 + 56);
    if ((v4 & 0x200) == 0) {
      return;
    }
    v5 = *(_QWORD*)a3;
    v6 = *(_QWORD*)(a3 + 8);
    if ((unsigned __int8)v4 != 16) {
      goto LABEL_8;
    }
  }
  else {
    if (a2 == 0) {
      return;
    }
    v5 = *(_QWORD*)a3;
    v6 = *(_QWORD*)(a3 + 8);
    if ((unsigned __int8)*(_WORD*)(a2 + 56) != 16) {
      goto LABEL_8;
    }
  }
  if (*(_QWORD*)a2 <= v6) {
    v8 = v5;
    v9 = a2;
    v10 = CudaDriverRoutine_129b40(
        v5, (_QWORD*)a2, 1,
        (__int64 (*)(_QWORD*, __int64))CudaDriverRoutine_12a5e0, 0);
    a2 = v9;
    v7 = v10;
    v5 = v8;
    goto LABEL_10;
  }
LABEL_8:
  v7 = 0;
LABEL_10:
  v13[0] = v5;
  v13[1] = v6;
  v11 = CudaDriverRoutine_129b40(
      v5, (_QWORD*)a2, 0,
      (__int64 (*)(_QWORD*, __int64))CudaDriverRoutine_12a640, (__int64)v13);
  if (v7 != 0 || (v7 = v11, v11 != 0)) {
    v12 = *(_DWORD**)(a3 + 16);
    if (*v12 == 0) {
      *v12 = v7;
    }
  }
}

__int64 CudaDriverHr_131b40(__int64 a1)
{
  unsigned int* v1;
  __int64 v2;
  __int64 v3;
  void* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  int v14;
  unsigned int v15;
  __int64 v16;
  unsigned __int64 v17;
  int v18;
  __int64 v19;
  _QWORD v20[3];

  if (a1 == 0) {
    return 5;
  }
  v1 = *(unsigned int**)(a1 + 8);
  if (v1 == nullptr) {
    return 5;
  }
  if (*(_QWORD*)(a1 + 16) == 0) {
    return 5;
  }
  if (*(_QWORD*)(a1 + 40) == 0) {
    return 5;
  }
  v2 = *(unsigned int*)(a1 + 28);
  if ((_DWORD)v2 == 0) {
    return 5;
  }
  v3 = *((_QWORD*)v1 + 1);
  v20[0] = *(_QWORD*)(a1 + 16);
  v20[1] = v3;
  v5 = CudaDriverData_1423090[*v1];
  v6 = CudaDriverRoutine_12e510(32, v2);
  v7 = v6;
  if (*(_DWORD*)(a1 + 28) != 0) {
    v8 = 0;
    v9 = 0;
    do {
      v10 = v6 + v8;
      ++v9;
      *(_BYTE*)v10 = *(_BYTE*)(*(_QWORD*)(a1 + 40) + v8);
      *(_BYTE*)(v10 + 1) = *(_BYTE*)(*(_QWORD*)(a1 + 40) + v8 + 1);
      *(_BYTE*)(v10 + 2) = *(_BYTE*)(*(_QWORD*)(a1 + 40) + v8 + 2);
      *(_BYTE*)(v10 + 3) = *(_BYTE*)(*(_QWORD*)(a1 + 40) + v8 + 3);
      *(_DWORD*)(v10 + 4) = *(_DWORD*)(*(_QWORD*)(a1 + 40) + v8 + 4);
      *(_DWORD*)(v10 + 8) = *(_DWORD*)(*(_QWORD*)(a1 + 40) + v8 + 8);
      *(_DWORD*)(v10 + 12) = *(_DWORD*)(*(_QWORD*)(a1 + 40) + v8 + 12);
      *(_DWORD*)(v10 + 16) = *(_DWORD*)(*(_QWORD*)(a1 + 40) + v8 + 16);
      *(_DWORD*)(v10 + 20) = *(_DWORD*)(*(_QWORD*)(a1 + 40) + v8 + 20);
      *(_DWORD*)(v10 + 24) = *(_DWORD*)(*(_QWORD*)(a1 + 40) + v8 + 24);
      v11 = *(_QWORD*)(a1 + 40) + v8;
      v8 += 32;
      *(_DWORD*)(v10 + 28) = *(_DWORD*)(v11 + 28);
      v12 = *(unsigned int*)(a1 + 28);
    } while (v9 < v12);
  }
  else {
    v12 = 0;
  }
  v14 =
      (*((__int64 (**)(_QWORD*, _QWORD, __int64, unsigned __int64, _QWORD))v5 +
         13))(v20, *(unsigned int*)(a1 + 24), v6, v12, 0);
  if (v14 != 0) {
    if (v14 == 37) {
      v15 = 4;
    }
    else {
      v15 = 8;
    }
  }
  else {
    if (*(_DWORD*)(a1 + 28) != 0) {
      v16 = 0;
      v17 = 0;
      do {
        ++v17;
        *(_BYTE*)(*(_QWORD*)(a1 + 40) + v16) = *(_BYTE*)(v7 + v16);
        *(_BYTE*)(*(_QWORD*)(a1 + 40) + v16 + 1) = *(_BYTE*)(v7 + v16 + 1);
        *(_BYTE*)(*(_QWORD*)(a1 + 40) + v16 + 2) = *(_BYTE*)(v7 + v16 + 2);
        *(_BYTE*)(*(_QWORD*)(a1 + 40) + v16 + 3) = *(_BYTE*)(v7 + v16 + 3);
        *(_DWORD*)(*(_QWORD*)(a1 + 40) + v16 + 4) = *(_DWORD*)(v7 + v16 + 4);
        *(_DWORD*)(*(_QWORD*)(a1 + 40) + v16 + 8) = *(_DWORD*)(v7 + v16 + 8);
        *(_DWORD*)(*(_QWORD*)(a1 + 40) + v16 + 12) = *(_DWORD*)(v7 + v16 + 12);
        *(_DWORD*)(*(_QWORD*)(a1 + 40) + v16 + 16) = *(_DWORD*)(v7 + v16 + 16);
        *(_DWORD*)(*(_QWORD*)(a1 + 40) + v16 + 20) = *(_DWORD*)(v7 + v16 + 20);
        *(_DWORD*)(*(_QWORD*)(a1 + 40) + v16 + 24) = *(_DWORD*)(v7 + v16 + 24);
        v18 = *(_DWORD*)(v7 + v16 + 28);
        v19 = *(_QWORD*)(a1 + 40) + v16;
        v16 += 32;
        *(_DWORD*)(v19 + 28) = v18;
      } while (v17 < *(unsigned int*)(a1 + 28));
    }
    v15 = 0;
  }
  CudaDriverRoutine_12e340(v7);
  return v15;
}

#pragma GCC visibility pop
