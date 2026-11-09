#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_58d5b0(__int64, int);
__int64 LayoutEx_57a480(__int64, __int64, float);
__int64 LayoutEx_57cf40(__int64, __int64);
__int64 strcmp(_QWORD, _QWORD);
__int64 StateMachineEventHandler_Unknown2(__int64 result, __int64* a2,
                                          __int64* a3, __int64* a4);
__int64 StateMachineEventHandler_Unknown3(__int64 result, __int64 a2, int a3);
__int64 StateMachineEventHandler_Unknown4(__int64 result, double a2, float a3);
__int64 StateMachineEventHandler_Unknown2(__int64 result, __int64* a2,
                                          __int64* a3, __int64* a4)
{
  __int64 v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;

  v4 = *(_QWORD*)(result + 8);
  if (v4 != 0) {
    v5 = *(__int64***)(v4 + 152);
    if (v5 != (__int64**)(v4 + 144)) {
      v6 = v5[1];
      v7 = (__int64*)*v6;
      (*v5)[1] = (__int64)v6;
      *v6 = (__int64)*v5;
      v7[1] = (__int64)v5;
      *v5 = v7;
      v5[3] = a3;
      v5[4] = a4;
      v5[5] = a2;
      *((_DWORD*)v5 + 12) = 0;
      *((_DWORD*)v5 + 4) = 6;
      v9 = *(__int64**)(v4 + 128);
      v8 = v4 + 128;
      *v5 = v9;
      v7[1] = v8;
      *(_QWORD*)(*(_QWORD*)v8 + 8LL) = v5;
      *(_QWORD*)v8 = v7;
    }
  }
  return result;
}

__int64 StateMachineEventHandler_Unknown3(__int64 result, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64** v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;

  if (a3 == 1) {
    v3 = *(_QWORD*)(result + 8);
    v4 = result;
    if (v3 != 0 && *(_QWORD*)(v3 + 32) != 0) {
      v5 = *(unsigned int*)(v3 + 112);
      if ((int)v5 >= 1) {
        v7 = 0;
        while (1) {
          result = strcmp(*(_QWORD*)(v3 + 8 * v7 + 48) + 176LL, a2);
          if ((_DWORD)result == 0) {
            break;
          }
          if (v5 == ++v7) {
            return result;
          }
        }
        result =
            LayoutEx_57a480(v3, (__int64)"ScreenDecideIndex", (float)(int)v7);
        v8 = *(_QWORD*)(v4 + 8);
        v9 = *(__int64***)(v8 + 152);
        if (v9 != (__int64**)(v8 + 144)) {
          v10 = v9[1];
          v11 = (__int64*)*v10;
          (*v9)[1] = (__int64)v10;
          *v10 = (__int64)*v9;
          v11[1] = (__int64)v9;
          *v9 = v11;
          v9[3] = nullptr;
          v9[4] = nullptr;
          v9[5] = nullptr;
          *((_DWORD*)v9 + 12) = 0;
          *((_DWORD*)v9 + 4) = 11;
          v13 = *(__int64**)(v8 + 128);
          v12 = v8 + 128;
          *v9 = v13;
          v11[1] = v12;
          *(_QWORD*)(*(_QWORD*)v12 + 8LL) = v9;
          *(_QWORD*)v12 = v11;
        }
      }
    }
  }
  return result;
}

__int64 StateMachineEventHandler_Unknown4(__int64 result, double a2, float a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;

  v3 = *(_QWORD*)(result + 8);
  if (v3 != 0 && *(int*)(v3 + 200) >= 1) {
    v5 = 96;
    v6 = 0;
    do {
      v7 = *(_QWORD*)(v3 + 192) + v5;
      v8 = strcmp(v7 - 32, "body");
      result = v3;
      if (v8 == 0 ||
          (result = LayoutEx_57cf40(*(_QWORD*)v3, v7 - 32)) != 0 &&
              (result = GameRoutine_58d5b0(
                   *(_QWORD*)(*(_QWORD*)(result + 232) + 24LL), 19)) != 0 &&
              (result = *(_QWORD*)(result + 8)) != 0) {
        result = LayoutEx_57a480(result, v7, a3);
      }
      ++v6;
      v5 += 128;
    } while (v6 < *(int*)(v3 + 200));
  }
  return result;
}

#pragma GCC visibility pop
