#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10e800(_QWORD);
__int64 GameRoutine_10eb50(_QWORD, _QWORD);
__int64 GameRoutine_10ede0(_QWORD, _QWORD);
__int64 GameRoutine_10f100(_QWORD, _QWORD);
__int64 GameRoutine_190020(_QWORD, _QWORD);
__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 GameRoutine_190240(_QWORD);
__int64 GameRoutine_190260(_QWORD, _QWORD, _QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
extern __int64 snd_g_proxy_ptr[2];
extern __int64* GameData_2134c50[9];
extern __int64* snd_g_memory_ptr[2];
__int64 WaveReader_Destructor(__int64 a1);
__int64 WaveReader_Unknown3(__int64 result);
__int64 WaveReader_Unknown4(__int64 result);
__int64 WaveReader_Unknown6(__int64 a1, __int64 a2, char a3, char a4, char a5);
__int64 WaveReader_Unknown8(__int64 a1, int a2, int a3);
__int64 WaveReader_Unknown9();
__int64 WaveReader_Unknown10(__int64 a1, __int64 a2, int a3);
__int64 WaveReader_Unknown13(__int64 result);
__int64 WaveReader_188ee0(__int64 a1);
__int64 WaveReader_1897c0(_QWORD* a1, unsigned int a2);
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64 WaveReader_Unknown14(__int64 a1, int a2);
__int64 GameRoutine_190260_alt1(unsigned __int8*, unsigned __int8*,
                                unsigned __int64) __asm__("GameRoutine_190260");
unsigned __int64
GameRoutine_190020_alt1(__int64*, const char*) __asm__("GameRoutine_190020");

__int64 WaveReader_Destructor(__int64 a1)
{
  __int64 result;

  *(_QWORD*)a1 = GameData_2134c50[0] + 2;
  nn_os_FinalizeMutex(a1 + 120);
  result = nn_os_FinalizeMutex(a1 + 88);
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] +
                                            24LL))(*snd_g_memory_ptr[0],
                                                   *(_QWORD*)(a1 + 32));
  }
  return result;
}

__int64 WaveReader_Unknown3(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;
  void (****v4)(_QWORD);
  void (***v5)(_QWORD);
  __int64 v6;
  __int64 v7;
  void (***v8)(_QWORD);
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v1 = *(_QWORD**)(result + 160);
  v2 = result;
  if (v1 != nullptr) {
    v3 = snd_g_memory_ptr[0];
    if (*v1 != 0) {
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v1 + 24LL))(*v1) & 1) != 0) {
        (*(void (**)(_QWORD))(***(_QWORD***)(v2 + 160) + 40LL))(
            **(_QWORD**)(v2 + 160));
      }
      v4 = *(void (*****)(_QWORD))(v2 + 160);
      v5 = *v4;
      *v4 = nullptr;
      (**v5)(v5);
      (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3,
                                                                        v5);
      v1 = *(_QWORD**)(v2 + 160);
    }
    v6 = v1[1];
    if (v6 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6) & 1) != 0) {
        (*(void (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(v2 + 160) + 8LL) + 40LL))(
            *(_QWORD*)(*(_QWORD*)(v2 + 160) + 8LL));
      }
      v7 = *(_QWORD*)(v2 + 160);
      v8 = *(void (****)(_QWORD))(v7 + 8);
      *(_QWORD*)(v7 + 8) = 0;
      (**v8)(v8);
      (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3,
                                                                        v8);
      v1 = *(_QWORD**)(v2 + 160);
    }
    v9 = v1[2];
    if (v9 != 0) {
      v10 = *v3;
      v1[2] = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v10 + 24LL))(v10, v9);
      v1 = *(_QWORD**)(v2 + 160);
    }
    v11 = v1[9];
    if (v11 != 0) {
      v12 = *v3;
      v1[9] = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v12 + 24LL))(v12, v11);
      v1 = *(_QWORD**)(v2 + 160);
    }
    v13 = v1[10];
    if (v13 == 0 || (v14 = *v3, v1[10] = 0,
                     result = (*(__int64 (**)(__int64, __int64))(
                         *(_QWORD*)v14 + 24LL))(v14, v13),
                     *(_QWORD*)(v2 + 160) != 0)) {
      v15 = *v3;
      *(_QWORD*)(v2 + 160) = 0;
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 24LL))(v15);
    }
  }
  if (*(_QWORD*)(v2 + 48) != 0) {
    v16 = GameRoutine_10e800(result);
    v17 = *(_QWORD*)(v2 + 48);
    *(_QWORD*)(v2 + 48) = 0;
    return GameRoutine_10f100(v16, v17);
  }
  return result;
}

__int64 WaveReader_Unknown4(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;

  v1 = *(_DWORD*)(result + 72);
  v2 = result;
  if (v1 != 2) {
    if (v1 != 1) {
      return result;
    }
    v3 = GameRoutine_10e800(result);
    v4 = GameRoutine_190240(v2 + 16);
    result = GameRoutine_10ede0(v3, v4);
    *(_QWORD*)(v2 + 48) = result;
    v5 = 2;
    goto LABEL_4;
  }
  result = snd_fnd_WeakHandle_isValid(*(_QWORD*)(result + 48) + 24LL);
  if ((result & 1) != 0) {
    v6 = GameRoutine_10e800(result);
    result = GameRoutine_10eb50(v6, *(_QWORD*)(v2 + 48));
    if ((result & 1) != 0) {
      v5 = 3;
    LABEL_4:
      *(_DWORD*)(v2 + 72) = v5;
    }
  }
  return result;
}

__int64 WaveReader_Unknown6(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  __int64 result;

  result = GameRoutine_190200(a1 + 16, a2);
  *(_BYTE*)(a1 + 40) = a3;
  *(_BYTE*)(a1 + 41) = a4;
  *(_BYTE*)(a1 + 43) = a5;
  if ((a3 & 1) == 0 && (a5 & 1) != 0) {
    result = (*(__int64 (**)(_QWORD, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
        *(_QWORD*)snd_g_proxy_ptr[0],
        "#SoundLibrary : scrub play needed on memory option.\n");
    *(_BYTE*)(a1 + 40) = 1;
  }
  *(_DWORD*)(a1 + 72) = 1;
  return result;
}

__int64 WaveReader_Unknown8(__int64 a1, int a2, int a3)
{
  int v4;
  __int64 v5;
  __int64 result;
  __int64 v8;
  int v9;
  __int64 v10;

  if (a3 == 1) {
    v8 = snd_fnd_WeakHandle_get(*(_QWORD*)(a1 + 48) + 24LL);
    v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 80LL))(v8) + a2;
    goto LABEL_7;
  }
  if (a3 != 0) {
    v9 = *(_DWORD*)(a1 + 76) + a2;
  LABEL_7:
    v4 = v9 & ~(v9 >> 31);
    v10 = *(_QWORD*)(a1 + 48);
    *(_DWORD*)(a1 + 76) = v4;
    result = snd_fnd_WeakHandle_get(v10 + 24);
    if (result == 0) {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v4 = a2 & ~(a2 >> 31);
  v5 = *(_QWORD*)(a1 + 48);
  *(_DWORD*)(a1 + 76) = v4;
  result = snd_fnd_WeakHandle_get(v5 + 24);
  if (result != 0) {
  LABEL_8:
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 80LL))(result);
  }

LABEL_9:
  if (v4 > (int)result) {
    result = snd_fnd_WeakHandle_get(*(_QWORD*)(a1 + 48) + 24LL);
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 80LL))(result);
    }
    *(_DWORD*)(a1 + 76) = result;
  }
  return result;
}

__int64 WaveReader_Unknown9()
{
  WaveReader_188d70();
  return 1;
}

__int64 WaveReader_Unknown10(__int64 a1, __int64 a2, int a3)
{
  WaveReader_188d70(a1, a2, a3);
  return 1;
}

__int64 WaveReader_Unknown13(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 160);
  *(_DWORD*)(result + 76) = 0;
  if (v1 != 0) {
    *(_DWORD*)(v1 + 68) = 0;
  }
  return result;
}

__int64 WaveReader_188ee0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  unsigned int v5;
  __int64 v6[5];

  if (*(_QWORD*)(a1 + 160) != 0) {
    return 1;
  }
  v6[3] = v1;
  v6[4] = v2;
  GameRoutine_190020_alt1(v6, ".opus");
  result = GameRoutine_190260_alt1((unsigned __int8*)(a1 + 16),
                                   (unsigned __int8*)v6, 0) != -1;
  if ((v6[0] & 1) != 0) {
    v5 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        (void*)(*(_QWORD**)snd_g_memory_ptr[0]), *snd_g_memory_ptr[0], v6[2]);
    return v5;
  }
  return result;
}

__int64 WaveReader_Unknown14(__int64 a1, int a2)
{
  __int64 result;
  unsigned int v5;
  int v6;
  __int64 v7;

  result = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 64LL))(
      a1, *(unsigned int*)(*(_QWORD*)(a1 + 160) + 64LL), 0);
  *(_DWORD*)(*(_QWORD*)(a1 + 160) + 68LL) = 0;
  if (a2 >= 1) {
    do {
      (*(void (**)(__int64, _QWORD, __int64))(*(_QWORD*)a1 + 72LL))(
          a1, *(_QWORD*)(*(_QWORD*)(a1 + 160) + 72LL), 8);
      v5 = bswap32(**(_DWORD**)(*(_QWORD*)(a1 + 160) + 72LL));
      v6 =
          (v5 + *(_DWORD*)(a1 + 76)) & ~((int)(v5 + *(_DWORD*)(a1 + 76)) >> 31);
      v7 = *(_QWORD*)(a1 + 48);
      *(_DWORD*)(a1 + 76) = v6;
      result = snd_fnd_WeakHandle_get_alt1(v7 + 24);
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 80LL))(result);
      }
      if (v6 > (int)result) {
        result = snd_fnd_WeakHandle_get_alt1(*(_QWORD*)(a1 + 48) + 24LL);
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 80LL))(result);
        }
        *(_DWORD*)(a1 + 76) = result;
      }
      --a2;
      *(_DWORD*)(*(_QWORD*)(a1 + 160) + 68LL) += v5 + 8;
    } while (a2 != 0);
  }
  return result;
}

__int64 WaveReader_1897c0(_QWORD* a1, unsigned int a2)
{
  __int64 v4;
  unsigned __int8* v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;

  (*(void (**)(_QWORD*, _QWORD, _QWORD))(*a1 + 64LL))(
      a1, (unsigned int)(*(_DWORD*)(a1[20] + 68LL) + *(_DWORD*)(a1[20] + 64LL)),
      0);
  (*(void (**)(_QWORD*, _QWORD, __int64))(*a1 + 72LL))(
      a1, *(_QWORD*)(a1[20] + 72LL), 8);
  v4 = a1[20];
  v5 = *(unsigned __int8**)(v4 + 72);
  v6 = *(_DWORD*)(v4 + 68);
  v7 = *v5;
  v8 = v5[1];
  v9 = v5[2];
  v10 = v5[3];
  v11 = snd_fnd_WeakHandle_get(a1[6] + 24LL);
  if (v11 != 0) {
    LODWORD(v11) = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 80LL))(v11);
  }
  if (v6 + ((v7 << 24) | (v8 << 16) | (v9 << 8) | v10) + 8 >= (int)v11) {
    return a2;
  }
  else {
    return 99999;
  }
}

#pragma GCC visibility pop
