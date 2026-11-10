#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* snd_g_memory_ptr[2];
__int64 Game_e7af0(__int64 result);
extern __int64* snd_Game_s_instance_ptr[3];
extern __int64 snd_g_frameCount_ptr;
void Game_e9590();
__attribute__((swiftcall)) void Manager_11ec80(PSEUDO_X8, __int64, int*);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
extern __int64* snd_g_manager_ptr[4];
extern __int64 snd_g_proxy;
float log2f(float);
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void snd_Fade_Fade_10c830(__int64, float);
void Game_Unknown29(_BYTE* a1);

__int64 Game_e7af0(__int64 result)
{
  if ((*(_BYTE*)result & 1) != 0) {
    return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] +
                                            24LL))(*snd_g_memory_ptr[0],
                                                   *(_QWORD*)(result + 16));
  }
  return result;
}

void Game_Unknown29(_BYTE* a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  unsigned __int8* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int8* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int8* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  long double v20;
  __int64 v21;
  __int64 v22;
  long double v23;
  __int64 v24;
  __int64 v25;
  long double v26;
  __int64 v27;
  __int64 v28;
  long double v29;
  float v30;
  float v31;
  __int64 v32;
  __int64 v33;
  long double v34;
  _QWORD v35[25];
  unsigned int v36;

  v2 = snd_g_manager_ptr[0];
  v3 = *snd_g_manager_ptr[0];
  v4 = (unsigned __int8*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 144LL))(a1);
  v36 = (unsigned int)snd_fnd_calcCrc32(v4, 0);
  Manager_11ec80((void*)((__int64)v35), v3, (int*)&v36);
  v5 = snd_fnd_WeakHandle_get((__int64)v35);
  v6 = *v2;
  v7 = v5;
  v8 = (unsigned __int8*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 160LL))(a1);
  v36 = (unsigned int)snd_fnd_calcCrc32(v8, 0);
  Manager_11ec80((void*)((__int64)v35), v6, (int*)&v36);
  v9 = snd_fnd_WeakHandle_get((__int64)v35);
  v10 = *v2;
  v11 = v9;
  v12 = (unsigned __int8*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 168LL))(a1);
  v36 = (unsigned int)snd_fnd_calcCrc32(v12, 0);
  Manager_11ec80((void*)((__int64)v35), v10, (int*)&v36);
  v13 = snd_fnd_WeakHandle_get((__int64)v35);
  v14 = *v2;
  v15 = v13;
  v16 = (unsigned __int8*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 152LL))(a1);
  v36 = (unsigned int)snd_fnd_calcCrc32(v16, 0);
  Manager_11ec80((void*)((__int64)v35), v14, (int*)&v36);
  v17 = snd_fnd_WeakHandle_get((__int64)v35);
  if (v7 != 0) {
    if (a1[88] == 1) {
      snd_Fade_Fade_10c830((__int64)v35, 0x0.0p+0f);
      v18 = *(_QWORD*)(v7 - 5552);
      v19 = v7 - 5552;
      *(_QWORD*)&v20 = 0;
    }
    else if (a1[91] == 1) {
      snd_Fade_Fade_10c830((__int64)v35, 0x0.0p+0f);
      v18 = *(_QWORD*)(v7 - 5552);
      v19 = v7 - 5552;
      LODWORD(v20) = 1050253722;
    }
    else {
      snd_Fade_Fade_10c830((__int64)v35, 0x0.0p+0f);
      v18 = *(_QWORD*)(v7 - 5552);
      LODWORD(v20) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
      v19 = v7 - 5552;
    }
    (*(void (**)(__int64, _QWORD*, long double))(v18 + 112))(v19, v35, v20);
    snd_Fade_Destroy_Fade(v35);
  }
  if (v15 != 0) {
    if (a1[89] == 1) {
      snd_Fade_Fade_10c830((__int64)v35, 0x0.0p+0f);
      v21 = *(_QWORD*)(v15 - 5552);
      v22 = v15 - 5552;
      *(_QWORD*)&v23 = 0;
    }
    else {
      snd_Fade_Fade_10c830((__int64)v35, 0x0.0p+0f);
      v21 = *(_QWORD*)(v15 - 5552);
      LODWORD(v23) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
      v22 = v15 - 5552;
    }
    (*(void (**)(__int64, _QWORD*, long double))(v21 + 112))(v22, v35, v23);
    snd_Fade_Destroy_Fade(v35);
  }
  if (v11 != 0) {
    if (a1[90] == 1) {
      snd_Fade_Fade_10c830((__int64)v35, 0x0.0p+0f);
      v24 = *(_QWORD*)(v11 - 5552);
      v25 = v11 - 5552;
      *(_QWORD*)&v26 = 0;
    }
    else {
      snd_Fade_Fade_10c830((__int64)v35, 0x0.0p+0f);
      v24 = *(_QWORD*)(v11 - 5552);
      LODWORD(v26) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
      v25 = v11 - 5552;
    }
    (*(void (**)(__int64, _QWORD*, long double))(v24 + 112))(v25, v35, v26);
    snd_Fade_Destroy_Fade(v35);
  }
  if (v17 != 0) {
    if (a1[90] == 1) {
      snd_Fade_Fade_10c830((__int64)v35, 0x0.0p+0f);
      v27 = *(_QWORD*)(v17 - 5552);
      v28 = v17 - 5552;
      *(_QWORD*)&v29 = 0;
    }
    else {
      snd_Fade_Fade_10c830((__int64)v35, 0x0.0p+0f);
      v27 = *(_QWORD*)(v17 - 5552);
      LODWORD(v29) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
      v28 = v17 - 5552;
    }
    (*(void (**)(__int64, _QWORD*, long double))(v27 + 112))(v28, v35, v29);
    snd_Fade_Destroy_Fade(v35);
  }
  v30 = (*(float (**)(__int64))(*(_QWORD*)snd_g_proxy + 368LL))(snd_g_proxy);
  if (v30 < 0x1.0000000000000p+0f) {
    v31 = -log2f(0x1.0000000000000p+0f / v30);
    if (v7 != 0) {
    LABEL_28:
      if ((a1[96] & 1) != 0) {
        snd_Fade_Fade_10c830((__int64)v35, 0x0.0p+0f);
        (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v7 - 5552) + 256LL))(
            v7 - 5552, v35, v31);
        snd_Fade_Destroy_Fade(v35);
      }
    }
  LABEL_30:
    if (v17 != 0 && (a1[97] & 1) != 0) {
      snd_Fade_Fade_10c830((__int64)v35, 0x0.0p+0f);
      (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v17 - 5552) + 256LL))(
          v17 - 5552, v35, v31);
      snd_Fade_Destroy_Fade(v35);
    }
    if (v11 != 0 && (a1[98] & 1) != 0) {
      snd_Fade_Fade_10c830((__int64)v35, 0x0.0p+0f);
      v32 = *(_QWORD*)(v11 - 5552);
      v33 = v11 - 5552;
      *(float*)&v34 = v31;
    LABEL_42:
      (*(void (**)(__int64, _QWORD*, long double))(v32 + 256))(v33, v35, v34);
      snd_Fade_Destroy_Fade(v35);
      return;
    }
    return;
  }
  if (v30 > 0x1.0000000000000p+0f) {
    v31 = v30 + -0x1.0000000000000p+0f;
    if (v7 == 0) {
      goto LABEL_30;
    }
    goto LABEL_28;
  }
  if (v7 != 0) {
    snd_Fade_Fade_10c830((__int64)v35, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, double))(*(_QWORD*)(v7 - 5552) + 256LL))(
        v7 - 5552, v35, 0x0.0p+0);
    snd_Fade_Destroy_Fade(v35);
  }
  if (v17 != 0) {
    snd_Fade_Fade_10c830((__int64)v35, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, double))(*(_QWORD*)(v17 - 5552) + 256LL))(
        v17 - 5552, v35, 0x0.0p+0);
    snd_Fade_Destroy_Fade(v35);
  }
  if (v11 != 0) {
    snd_Fade_Fade_10c830((__int64)v35, 0x0.0p+0f);
    v32 = *(_QWORD*)(v11 - 5552);
    *(_QWORD*)&v34 = 0;
    v33 = v11 - 5552;
    goto LABEL_42;
  }
}

void Game_e9590()
{
  _QWORD* v0;
  __int64 v1;

  v0 = (_QWORD*)*snd_Game_s_instance_ptr[0];
  v1 = *(_QWORD*)snd_g_frameCount_ptr;
  v0[41] = 0;
  v0[39] = v1;
  v0[40] = 0;
}

#pragma GCC visibility pop
