#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a7fda0(_QWORD, _QWORD);
__int64 GameRoutine_d21160(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21f3cb0;
float CameraStateDirect_Unknown2(__int64 a1);
__int64 CameraStateDirect_Unknown3(__int64 result);

float CameraStateDirect_Unknown2(__int64 a1)
{
  __int64 v2;
  __int128 v3;
  __int128 v4;
  float result;

  GameRoutine_a7fda0(a1 + 80, *(_QWORD*)GameData_212dc38[0] + 16LL);
  v2 = *(_QWORD*)(a1 + 912);
  v3 = *(_OWORD*)(*(_QWORD*)(v2 + 8) + 112LL);
  *(_QWORD*)(v2 + 16) = v3;
  v4 = *(_OWORD*)(v2 + 16);
  *((_QWORD*)&v4 + 1) = DWORD2(v3);
  *(_OWORD*)(v2 + 16) = v4;
  LODWORD(v4) = *(_DWORD*)(a1 + 164);
  result = *(float*)(a1 + 168);
  *(float*)(a1 + 836) = result;
  *(_DWORD*)(a1 + 832) = v4;
  return result;
}

__int64 CameraStateDirect_Unknown3(__int64 result)
{
  __int128* v1;
  __int64 v2;
  __int64 v3;
  __int128 v4;
  __int128 v5;
  __int64 v6;
  int v7;
  int v8;

  v1 = *(__int128**)(GameData_21f3cb0 + 960);
  if (v1 != nullptr) {
    v2 = *(_QWORD*)(result + 880);
    v3 = *(_QWORD*)(result + 888);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
    }
    v4 = *v1;
    if (*(_BYTE*)(v2 + 32) != 0) {
      *(_QWORD*)(v2 + 16) = v4;
      v5 = *(_OWORD*)(v2 + 16);
      *((_QWORD*)&v5 + 1) = DWORD2(v4);
      *(_OWORD*)(v2 + 16) = v5;
      if (v3 == 0) {
        goto LABEL_11;
      }
    }
    else {
      *(_BYTE*)(v2 + 32) = 1;
      *(_OWORD*)(v2 + 16) = v4;
      if (v3 == 0) {
      LABEL_11:
        *(_DWORD*)(result + 832) = *((_DWORD*)v1 + 4);
        v7 = *((_DWORD*)v1 + 5);
        *(_DWORD*)(result + 836) = v7;
        *(_DWORD*)(result + 516) = v7;
        *(_DWORD*)(result + 520) = *((_DWORD*)v1 + 5);
        *(_DWORD*)(result + 540) = *((_DWORD*)v1 + 6);
        *(_DWORD*)(result + 488) = *((_DWORD*)v1 + 12);
        v8 = *((_DWORD*)v1 + 8);
        *(_QWORD*)(result + 524) = 0;
        *(_DWORD*)(result + 532) = 0;
        *(_QWORD*)(result + 492) = 0;
        *(_QWORD*)(result + 500) = 0;
        *(_QWORD*)(result + 508) = 0;
        *(_DWORD*)(result + 544) = v8;
        return GameRoutine_d21160();
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = result;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
      result = v6;
    }
    goto LABEL_11;
  }
  return result;
}

#pragma GCC visibility pop
