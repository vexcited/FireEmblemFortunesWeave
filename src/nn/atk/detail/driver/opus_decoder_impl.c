#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2ba4a0(void);
extern __int64* GameData_2135570;
__int64 OpusDecoderImpl_Destructor(__int64 a1);
__int64 OpusDecoderImpl_2b9fa0(__int64 a1);
_QWORD* OpusDecoderImpl_2ba030(_QWORD* result, __int64 a2, __int64 a3,
                               __int64 a4, __int64 a5);
__int64 OpusDecoderImpl_Unknown2(__int64 a1, __int64 a2, __int64 a3);
bool OpusDecoderImpl_Unknown4(__int64 a1, __int64 a2, __int64 a3, int a4,
                              int a5);
__int64 OpusDecoderImpl_Unknown5(__int64 a1);
__int64 OpusDecoderImpl_Unknown6(__int64 result);
__int64 nn_os_GetSystemTick(_QWORD);
bool OpusDecoderImpl_Unknown3(_QWORD* a1, __int64* a2);
__attribute__((swiftcall)) void OpusDecoderImpl_Unknown7(PSEUDO_X8 x8_,
                                                         _QWORD* result);
bool OpusDecoderImpl_2ba4a0(__int64 a1, __int64 a2, __int64* a3, int a4);
__int64 nn_os_GetSystemTick_alt1() __asm__("nn_os_GetSystemTick");

__int64 OpusDecoderImpl_Destructor(__int64 a1)
{
  __int64 result;

  *(_QWORD*)a1 = GameData_2135570 + 2;
  result = *(_QWORD*)(a1 + 48);
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
    if ((result & 1) != 0) {
      result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 48) + 40LL))(
          *(_QWORD*)(a1 + 48));
    }
    *(_QWORD*)(a1 + 48) = 0;
    *(_QWORD*)(a1 + 8) = 0;
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 24) = 0;
    *(_QWORD*)(a1 + 32) = 0;
    *(_DWORD*)(a1 + 40) = 0;
  }
  return result;
}

__int64 OpusDecoderImpl_2b9fa0(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 48);
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
    if ((result & 1) != 0) {
      result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 48) + 40LL))(
          *(_QWORD*)(a1 + 48));
    }
    *(_QWORD*)(a1 + 48) = 0;
    *(_QWORD*)(a1 + 8) = 0;
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 24) = 0;
    *(_QWORD*)(a1 + 32) = 0;
    *(_DWORD*)(a1 + 40) = 0;
  }
  return result;
}

_QWORD* OpusDecoderImpl_2ba030(_QWORD* result, __int64 a2, __int64 a3,
                               __int64 a4, __int64 a5)
{
  __int64 v5;

  result[6] = a5;
  result[1] = a2;
  result[2] = a2 + 4096;
  v5 = (a2 + 7936 + a4 - 1) & -a4;
  result[3] = v5;
  result[4] = a3 + a2 - v5;
  return result;
}

__int64 OpusDecoderImpl_Unknown2(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  unsigned int v7;
  int v8;
  int v9;
  __int64 v10;
  int v12;
  int v13;

  v13 =
      (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a3 + 48LL))(a3, 0, 0);
  if ((v13 & 0x80000000) == 0) {
    (*(void (**)(__int64, _QWORD, __int64, int*))(*(_QWORD*)a3 + 32LL))(
        a3, *(_QWORD*)(a1 + 8), 32, &v13);
    if ((v13 & 0x80000000) == 0) {
      v6 = *(_QWORD*)(a1 + 8);
      v7 = *(char*)(v6 + 9);
      v8 = *(_DWORD*)(v6 + 12);
      v9 = *(__int16*)(v6 + 28);
      if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 48) + 24LL))(
               *(_QWORD*)(a1 + 48)) &
           1) != 0) {
        (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 48) + 40LL))(
            *(_QWORD*)(a1 + 48));
      }
      v10 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
          **(_QWORD**)(a1 + 48) + 16LL))(*(_QWORD*)(a1 + 48), (unsigned int)v8,
                                         v7);
      if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(
              **(_QWORD**)(a1 + 48) + 32LL))(*(_QWORD*)(a1 + 48),
                                             (unsigned int)v8, v7,
                                             *(_QWORD*)(a1 + 24), v10) == 0) {
        (*(void (**)(__int64, _QWORD, __int64, int*))(*(_QWORD*)a3 + 32LL))(
            a3, *(_QWORD*)(a1 + 8), 8, &v13);
        if ((v13 & 0x80000000) == 0 && **(_DWORD**)(a1 + 8) == -2147483644) {
          if (v8 > 15999) {
            if (v8 == 24000) {
              v12 = 480;
              goto LABEL_20;
            }
            if (v8 == 16000) {
              v12 = 320;
              goto LABEL_20;
            }
          }
          else {
            if (v8 == 8000) {
              v12 = 160;
              goto LABEL_20;
            }
            if (v8 == 12000) {
              v12 = 240;
            LABEL_20:
              *(_DWORD*)(a1 + 40) = v12;
              *(_DWORD*)(a2 + 8) = v12;
              *(_DWORD*)a2 = v7;
              *(_DWORD*)(a2 + 4) = v8;
              *(_DWORD*)(a2 + 24) = v9;
              *(_QWORD*)(a2 + 16) = (unsigned int)(2 * v12);
              return 1;
            }
          }
          v12 = 960;
          goto LABEL_20;
        }
      }
    }
  }
  return 0;
}

bool OpusDecoderImpl_Unknown3(_QWORD* a1, __int64* a2)
{
  __int64 v2;
  __int64 SystemTickEv;
  __int64 v7;
  unsigned int* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  struct {
    char gap8_[4];
    int v16;
    __int64 v17;
  } v16_;

  v16_.v17 = v2;
  SystemTickEv = nn_os_GetSystemTick_alt1();
  v7 = *a2;
  v8 = (unsigned int*)a1[1];
  v9 = SystemTickEv;
  v16_.v16 = 0;
  (*(void (**)(__int64*, unsigned int*, __int64, int*))(v7 + 32))(a2, v8, 8,
                                                                  &v16_.v16);
  if (v16_.v16 < 0) {
    return false;
  }
  v10 = bswap32(*v8);
  v11 = nn_os_GetSystemTick_alt1();
  v12 = a1[10];
  a1[9] += v11 - v9;
  a1[10] = v12 + 8;
  v13 = nn_os_GetSystemTick_alt1();
  v14 = (*(__int64 (**)(__int64*, __int64, __int64))(*a2 + 48))(a2, v10, 2);
  a1[9] += nn_os_GetSystemTick_alt1() - v13;
  return v14 >= 0;
}

bool OpusDecoderImpl_Unknown4(__int64 a1, __int64 a2, __int64 a3, int a4,
                              int a5)
{
  char v9;
  _BOOL8 result;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;

  v9 = GameRoutine_2ba4a0();
  result = a5 == 2;
  if (a5 != 2 && (v9 & 1) != 0) {
    if (a4 >= 1) {
      v11 = a4 & 7;
      if ((unsigned int)a4 >= 8) {
        v13 = (__int64*)(a2 + 32);
        v14 = 0;
        do {
          v15 = *(v13 - 3);
          v14 -= 8;
          *(v13 - 4) += 2LL * *(int*)(a1 + 40);
          v16 = v15 + 2LL * *(int*)(a1 + 40);
          v17 = *(v13 - 2);
          v18 = *(v13 - 1);
          *(v13 - 3) = v16;
          *(v13 - 2) = v17 + 2LL * *(int*)(a1 + 40);
          v19 = v18 + 2LL * *(int*)(a1 + 40);
          v20 = *v13;
          v21 = v13[1];
          *(v13 - 1) = v19;
          *v13 = v20 + 2LL * *(int*)(a1 + 40);
          v22 = v21 + 2LL * *(int*)(a1 + 40);
          v23 = v13[2];
          v24 = v13[3];
          v13[1] = v22;
          v13[2] = v23 + 2LL * *(int*)(a1 + 40);
          v13[3] = v24 + 2LL * *(int*)(a1 + 40);
          v13 += 8;
        } while (-(__int64)(a4 & 0x7FFFFFF8) != v14);
        v12 = -v14;
        if ((a4 & 7) == 0) {
          return true;
        }
      }
      else {
        v12 = 0;
        if ((a4 & 7) == 0) {
          return true;
        }
      }
      v25 = (_QWORD*)(a2 + 8 * v12);
      do {
        --v11;
        *v25++ += 2LL * *(int*)(a1 + 40);
      } while (v11 != 0);
    }
    return true;
  }
  return result;
}

__int64 OpusDecoderImpl_Unknown5(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 48) + 64LL))(
      *(_QWORD*)(a1 + 48));
}

__int64 OpusDecoderImpl_Unknown6(__int64 result)
{
  *(_QWORD*)(result + 56) = 0;
  *(_DWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  return result;
}

__attribute__((swiftcall)) void OpusDecoderImpl_Unknown7(PSEUDO_X8 x8_,
                                                         _QWORD* result)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;

  v2 = result[8];
  *a2 = result[7];
  a2[1] = v2;
  v3 = result[10];
  a2[2] = result[9];
  a2[3] = v3;
  {
    result;
    return;
  }
}

bool OpusDecoderImpl_2ba4a0(__int64 a1, __int64 a2, __int64* a3, int a4)
{
  unsigned int* v4;
  __int64 SystemTickEv;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  _BOOL8 result;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int16 v36;
  __int64 v37;
  int v38;
  int v39;
  __int64 v40;

  v4 = *(unsigned int**)(a1 + 8);
  SystemTickEv = nn_os_GetSystemTick_alt1();
  v10 = *a3;
  v11 = SystemTickEv;
  LODWORD(v40) = 0;
  (*(void (**)(__int64*, unsigned int*, __int64, __int64*))(v10 + 32))(a3, v4,
                                                                       8, &v40);
  if ((v40 & 0x80000000) != 0) {
    return false;
  }
  v12 = bswap32(*v4);
  v13 = nn_os_GetSystemTick_alt1();
  v14 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 72) += v13 - v11;
  *(_QWORD*)(a1 + 80) = v14 + 8;
  v15 = nn_os_GetSystemTick_alt1();
  v16 = *a3;
  v17 = v15;
  LODWORD(v40) = 0;
  (*(void (**)(__int64*, unsigned int*, __int64, __int64*))(v16 + 32))(
      a3, v4 + 2, v12, &v40);
  if ((v40 & 0x80000000) != 0) {
    return false;
  }
  v18 = nn_os_GetSystemTick_alt1();
  v19 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 72) += v18 - v17;
  *(_QWORD*)(a1 + 80) = v19 + v12;
  v20 = nn_os_GetSystemTick_alt1();
  v21 = *(_QWORD*)(a1 + 48);
  v40 = 0;
  v23 = *(_QWORD*)(a1 + 8);
  v22 = *(_QWORD*)(a1 + 16);
  v39 = 0;
  v24 = (*(__int64 (**)(__int64, __int64*, int*, __int64, __int64, __int64,
                        __int64))(*(_QWORD*)v21 + 72LL))(v21, &v40, &v39, v22,
                                                         3840, v23, 4096);
  result = v24 == 0;
  if (v24 == 0) {
    if (*(int*)(a1 + 40) >= 1 && a4 >= 1) {
      v26 = 0;
      v27 = 0;
      do {
        if ((unsigned int)a4 >= 8) {
          v28 = 0;
          v29 = (_QWORD*)(a2 + 32);
          do {
            *(_WORD*)(*(v29 - 4) + 2 * v27) =
                *(_WORD*)(*(_QWORD*)(a1 + 16) + v26 + 2 * v28);
            *(_WORD*)(*(v29 - 3) + 2 * v27) =
                *(_WORD*)(*(_QWORD*)(a1 + 16) + v26 + 2 * v28 + 2);
            *(_WORD*)(*(v29 - 2) + 2 * v27) =
                *(_WORD*)(*(_QWORD*)(a1 + 16) + v26 + 2 * v28 + 4);
            *(_WORD*)(*(v29 - 1) + 2 * v27) =
                *(_WORD*)(*(_QWORD*)(a1 + 16) + v26 + 2 * v28 + 6);
            *(_WORD*)(*v29 + 2 * v27) =
                *(_WORD*)(*(_QWORD*)(a1 + 16) + v26 + 2 * v28 + 8);
            *(_WORD*)(v29[1] + 2 * v27) =
                *(_WORD*)(*(_QWORD*)(a1 + 16) + v26 + 2 * v28 + 10);
            *(_WORD*)(v29[2] + 2 * v27) =
                *(_WORD*)(*(_QWORD*)(a1 + 16) + v26 + 2 * v28 + 12);
            v30 = v29[3];
            v29 += 8;
            v31 = *(_QWORD*)(a1 + 16) + v26 + 2 * v28;
            v28 += 8;
            *(_WORD*)(v30 + 2 * v27) = *(_WORD*)(v31 + 14);
          } while ((a4 & 0x7FFFFFF8) != v28);
        }
        else {
          v28 = 0;
        }
        if ((a4 & 7) != 0) {
          v32 = (__int64*)(a2 + 8 * v28);
          v33 = v26 + 2 * v28;
          v34 = a4 & 7;
          do {
            v35 = *v32++;
            --v34;
            v36 = *(_WORD*)(*(_QWORD*)(a1 + 16) + v33);
            v33 += 2;
            *(_WORD*)(v35 + 2 * v27) = v36;
          } while (v34 != 0);
        }
        ++v27;
        v26 += 2LL * (unsigned int)a4;
      } while (v27 < *(int*)(a1 + 40));
    }
    v37 = nn_os_GetSystemTick_alt1() - v20;
    v38 = *(_DWORD*)(a1 + 64);
    *(_QWORD*)(a1 + 56) += v37;
    *(_DWORD*)(a1 + 64) = v38 + v39;
    return true;
  }
  return result;
}

#pragma GCC visibility pop
