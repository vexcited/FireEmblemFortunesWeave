#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1679b0(_QWORD*);
extern __int64* GameData_2134428;
extern __int64* snd_g_memory_ptr[2];
__int64 FxSpectrum_Destructor_16f0e0(_QWORD* a1);

__int64 FxSpectrum_Destructor_16f0e0(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = GameData_2134428;
  v3 = a1[831];
  *a1 = GameData_2134428 + 2;
  a1[5] = v2 + 33;
  a1[699] = v2 + 174;
  v4 = snd_g_memory_ptr[0];
  if (v3 != 0) {
    v5 = *snd_g_memory_ptr[0];
    a1[831] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
    v6 = a1[830];
    a1[830] = 0;
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    }
    v7 = a1[829];
    a1[829] = 0;
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    }
    v8 = a1[828];
    a1[828] = 0;
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    }
    v9 = a1[827];
    a1[827] = 0;
    if (v9 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    }
    v10 = a1[831];
    a1[831] = 0;
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    }
  }
  v11 = a1[830];
  a1[830] = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v12 = a1[829];
  a1[829] = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v13 = a1[828];
  a1[828] = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v14 = a1[827];
  a1[827] = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  return GameRoutine_1679b0(a1);
}

#pragma GCC visibility pop
