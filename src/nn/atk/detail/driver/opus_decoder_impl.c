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

#pragma GCC visibility pop
