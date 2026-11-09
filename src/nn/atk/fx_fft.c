#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2af380(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 GameData_2134718[24];
extern __int64* snd_g_memory_ptr[2];
__int64 FxFFT_Destructor(_QWORD* a1);

__int64 FxFFT_Destructor(_QWORD* a1)
{
  __int64 v2;
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
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = GameData_2134718[0];
  v3 = a1[22];
  a1[22] = 0;
  *a1 = v2 + 16;
  v4 = snd_g_memory_ptr[0];
  if (v3 != 0) {
    (*(void (**)(_QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0]);
  }
  v5 = a1[21];
  a1[21] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v6 = a1[20];
  a1[20] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v7 = a1[19];
  a1[19] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v8 = a1[18];
  a1[18] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v9 = a1[14];
  a1[14] = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v10 = a1[16];
  a1[16] = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  if (a1[15] != 0) {
    v11 = *v4;
    a1[15] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 24LL))(v11);
  }
  v12 = a1[13];
  a1[13] = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  nn_os_FinalizeMutex(a1 + 23);
  v13 = a1[22];
  a1[22] = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v14 = a1[21];
  a1[21] = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v15 = a1[20];
  a1[20] = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v16 = a1[19];
  a1[19] = 0;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v17 = a1[18];
  a1[18] = 0;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v18 = a1[16];
  a1[16] = 0;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v19 = a1[14];
  a1[14] = 0;
  if (v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v20 = a1[13];
  a1[13] = 0;
  if (v20 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  return GameRoutine_2af380(a1);
}

#pragma GCC visibility pop
