#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Param_Destructor(_QWORD);
extern __int64* GameData_2134c00[3];
extern __int64* GameData_2134c08[2];
extern __int64* snd_g_memory_ptr[2];
__int64 WaveMixer_Destructor(_QWORD* a1);

__int64 WaveMixer_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
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
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  v2 = a1[717];
  *a1 = GameData_2134c00[0] + 2;
  v3 = snd_g_memory_ptr[0];
  if (v2 != 0) {
    v4 = *snd_g_memory_ptr[0];
    a1[717] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
  }
  if (a1[718] != 0) {
    v5 = *v3;
    a1[718] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
  }
  if (a1[719] != 0) {
    v6 = *v3;
    a1[719] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
  }
  if (a1[720] != 0) {
    v7 = *v3;
    a1[720] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
  }
  if (a1[721] != 0) {
    v8 = *v3;
    a1[721] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
  }
  if (a1[722] != 0) {
    v9 = *v3;
    a1[722] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
  }
  if (a1[723] != 0) {
    v10 = *v3;
    a1[723] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 24LL))(v10);
  }
  if (a1[724] != 0) {
    v11 = *v3;
    a1[724] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 24LL))(v11);
  }
  if (a1[725] != 0) {
    v12 = *v3;
    a1[725] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v12 + 24LL))(v12);
  }
  v13 = GameData_2134c08[0];
  v14 = a1[710];
  a1[709] = GameData_2134c08[0] + 2;
  if (v14 != 0) {
    v15 = *v3;
    a1[710] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v15 + 24LL))(v15);
  }
  if (a1[711] != 0) {
    v16 = *v3;
    a1[711] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v16 + 24LL))(v16);
  }
  if (a1[712] != 0) {
    v17 = *v3;
    a1[712] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v17 + 24LL))(v17);
  }
  if (a1[713] != 0) {
    v18 = *v3;
    a1[713] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v18 + 24LL))(v18);
  }
  v19 = a1[703];
  a1[702] = v13 + 2;
  if (v19 != 0) {
    v20 = *v3;
    a1[703] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v20 + 24LL))(v20);
  }
  if (a1[704] != 0) {
    v21 = *v3;
    a1[704] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v21 + 24LL))(v21);
  }
  if (a1[705] != 0) {
    v22 = *v3;
    a1[705] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v22 + 24LL))(v22);
  }
  if (a1[706] != 0) {
    v23 = *v3;
    a1[706] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v23 + 24LL))(v23);
  }
  v24 = a1[696];
  a1[695] = v13 + 2;
  if (v24 != 0) {
    v25 = *v3;
    a1[696] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v25 + 24LL))(v25);
  }
  if (a1[697] != 0) {
    v26 = *v3;
    a1[697] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v26 + 24LL))(v26);
  }
  if (a1[698] != 0) {
    v27 = *v3;
    a1[698] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v27 + 24LL))(v27);
  }
  if (a1[699] != 0) {
    v28 = *v3;
    a1[699] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v28 + 24LL))(v28);
  }
  return Param_Destructor(a1);
}

#pragma GCC visibility pop
