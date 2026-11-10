#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*kaneko_disposable_DisposableProcInst_vtable[])();
extern __int64 (*kaneko_disposable_EveryFrameProc_vtable[])();
__int64 EveryFrameProc_Destructor(__int64 a1);
__int64 EveryFrameProc_Unknown3(__int64 a1);

__int64 EveryFrameProc_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(_QWORD*)a1 = kaneko_disposable_EveryFrameProc_vtable;
  v2 = *(_QWORD*)(a1 + 288);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
    v3 = *(_QWORD**)(a1 + 288);
    *(_QWORD*)(a1 + 288) = 0;
    if (v3 == (_QWORD*)(a1 + 256)) {
      v4 = 32;
    }
    else {
      if (v3 == nullptr) {
        goto LABEL_11;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
    v5 = *(_QWORD**)(a1 + 288);
    if (v5 == (_QWORD*)(a1 + 256)) {
      v6 = 32;
    }
    else {
      if (v5 == nullptr) {
        goto LABEL_11;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
  }
LABEL_11:
  v7 = *(_QWORD**)(a1 + 240);
  if (v7 == (_QWORD*)(a1 + 208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_16;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_16:
  v9 = *(_QWORD*)(a1 + 176);
  *(_QWORD*)a1 = kaneko_disposable_DisposableProcInst_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = *(_QWORD*)(a1 + 160);
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 EveryFrameProc_Unknown3(__int64 a1)
{
  float v2;
  float v3;
  __int64 result;
  __int64 (*v5)(__int64, float*);
  float v6;

  v2 = *(float*)(a1 + 196);
  v3 = *(float*)(a1 + 192) +
       (float)((float)(*(float*)(*(_QWORD*)(a1 + 200) + 16LL) * 16.683f) /
               1000.0f);
  *(float*)(a1 + 192) = v3;
  if (v3 > v2) {
    v3 = v2;
    *(float*)(a1 + 192) = v2;
  }
  result = *(_QWORD*)(a1 + 240);
  if (result == 0) {
    if (v3 < v2) {
      return result;
    }
    goto LABEL_8;
  }
  v5 = *(__int64 (**)(__int64, float*))(*(_QWORD*)result + 48LL);
  v6 = v3 / v2;
  result = v5(result, &v6);
  if (v3 >= v2 || (result & 1) == 0) {
  LABEL_8:
    if ((*(_WORD*)(a1 + 136) & 1) == 0) {
      return ProcInst_657a50(a1, 1);
    }
  }
  return result;
}

#pragma GCC visibility pop
