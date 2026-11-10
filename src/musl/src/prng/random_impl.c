#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LockQuickExitState(__int64);
__int64 UnlockQuickExitState(__int64);
extern _UNKNOWN SdkData_105aab4;
extern int SdkData_105aab0;
extern int SdkData_ea8f30;
extern int SdkData_ea8f34;
extern int* SdkData_ea8f38;
int* initstate(unsigned int a1, int* a2, unsigned __int64 a3);

int* initstate(unsigned int a1, int* a2, unsigned __int64 a3)
{
  int v7;
  int* v8;
  int v9;
  int* v10;
  unsigned int v11;
  _BOOL4 v12;
  unsigned int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  _DWORD* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  int* v32;
  __int64 i;

  if (a3 < 8) {
    return nullptr;
  }
  LockQuickExitState((__int64)&SdkData_105aab4);
  v7 = SdkData_105aab0;
  v8 = SdkData_ea8f38;
  v9 = SdkData_ea8f34 << 8;
  *(SdkData_ea8f38 - 1) =
      (SdkData_ea8f34 << 8) | (SdkData_ea8f30 << 16) | SdkData_105aab0;
  v10 = v8 - 1;
  if (a3 >= 0x20) {
    if (a3 >= 0x40) {
      if (a3 >= 0x80) {
        v12 = a3 < 0x100;
        if (a3 >= 0x100) {
          v13 = 63;
        }
        else {
          v13 = 31;
        }
      }
      else {
        v12 = false;
        v13 = 15;
      }
    }
    else {
      v12 = false;
      v13 = 7;
    }
    v14 = a1;
    if (a3 < 0x40) {
      v12 = true;
    }
    SdkData_ea8f38 = a2 + 1;
    if (v12) {
      v15 = 3;
    }
    else {
      v15 = 1;
    }
    SdkData_ea8f30 = v13;
    SdkData_ea8f34 = v15;
    SdkData_105aab0 = 0;
    if (v13 == 7) {
      v16 = 0;
    }
    else {
      v17 = a2 + 4;
      v16 = 0;
      do {
        v18 = 0x5851F42D4C957F2DLL * v14 + 1;
        v16 += 8;
        v19 = HIDWORD(v18);
        v20 = 0x5851F42D4C957F2DLL * v18 + 1;
        v21 = HIDWORD(v20);
        v22 = 0x5851F42D4C957F2DLL * v20 + 1;
        *(v17 - 3) = v19;
        *(v17 - 2) = v21;
        v23 = HIDWORD(v22);
        v24 = 0x5851F42D4C957F2DLL * v22 + 1;
        v25 = HIDWORD(v24);
        v26 = 0x5851F42D4C957F2DLL * v24 + 1;
        *(v17 - 1) = v23;
        *v17 = v25;
        v27 = HIDWORD(v26);
        v28 = 0x5851F42D4C957F2DLL * v26 + 1;
        v29 = HIDWORD(v28);
        v30 = 0x5851F42D4C957F2DLL * v28 + 1;
        v17[1] = v27;
        v17[2] = v29;
        v31 = HIDWORD(v30);
        v14 = 0x5851F42D4C957F2DLL * v30 + 1;
        v17[3] = v31;
        v17[4] = HIDWORD(v14);
        v17 += 8;
      } while (v13 - 7LL != v16);
    }
    v32 = &a2[v16];
    for (i = 1; i != 8; ++i) {
      v14 = 0x5851F42D4C957F2DLL * v14 + 1;
      v32[i] = HIDWORD(v14);
    }
    v7 = 0;
    a2[1] |= 1u;
    v11 = v13 << 16;
    v9 = v15 << 8;
  }
  else {
    a2[1] = a1;
    v11 = 0;
    SdkData_ea8f30 = 0;
    SdkData_ea8f38 = a2 + 1;
  }
  *a2 = v9 | v11 | v7;
  UnlockQuickExitState((__int64)&SdkData_105aab4);
  return v10;
}

#pragma GCC visibility pop
