#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_179780(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1798b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a1efd0(__int16*);
__int64 GameRoutine_a1efe0(_QWORD);
__int64 GameRoutine_a3a490(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Voice_setLabel(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_set(_QWORD);
extern _UNKNOWN* GameData_212e270;
extern __int16 GameData_21fa828;
extern __int16 GameData_21fa878;
extern __int16 GameData_21fa8c8;
extern __int64 GameData_212e2c0[4];
extern __int64 GameData_212e2c8[3];
extern __int64 GameData_21fa810;
extern __int64 GameData_21fa818;
extern __int64 GameData_21fa860;
extern __int64 GameData_21fa868;
extern __int64 GameData_21fa8b0;
extern __int64 GameData_21fa8b8;
extern __int64* GameData_212e268;
extern int GameData_21fa820;
extern int GameData_21fa870;
extern int GameData_21fa8c0;
extern int GameData_226b690;
__int64 ProxySnd_Unknown52(__int64 a1, __int64 a2, _BYTE* a3);
_QWORD* ProxySnd_Unknown64(__int64 a1, __int64 a2, __int64 a3, unsigned int a4);
__int64 ProxySnd_Unknown65(__int64 a1, __int64 a2, __int64 a3, unsigned int a4);
__int64 ProxySnd_Unknown66(__int64 a1, void (***a2)(_QWORD));
__int64 ProxySnd_a1e400(__int64 a1);
__int64 ProxySnd_Unknown69(__int64 a1, __int64 a2, unsigned int a3);
__int64 ProxySnd_Unknown70(__int64 a1, void (***a2)(_QWORD));

__int64 ProxySnd_Unknown52(__int64 a1, __int64 a2, _BYTE* a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  char v7;
  char v8;
  unsigned __int8* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int16 v13;
  char v14;
  char v15;
  char v16;
  __int64 v17;
  __int64 v18;

  if (*a3 != 86 || a3[1] != 95) {
    return 0;
  }
  v5 = (unsigned __int8)a3[2];
  if (v5 == 69) {
    if (a3[3] != 78) {
      goto LABEL_11;
    }
  }
  else if (v5 != 74 || a3[3] != 80) {
    goto LABEL_11;
  }
  if (a3[4] == 95) {
    return 1;
  }

LABEL_11:
  v17 = v3;
  v18 = v4;
  v13 = 24406;
  if (GameData_226b690 != 0) {
    v7 = 69;
  }
  else {
    v7 = 74;
  }
  if (GameData_226b690 != 0) {
    v8 = 78;
  }
  else {
    v8 = 80;
  }
  v14 = v7;
  v15 = v8;
  v16 = 95;
  if (v5 != 0) {
    v9 = a3 + 3;
    v10 = 5;
    do {
      *((_BYTE*)&v13 + v10) = v5;
      v11 = *v9++;
      LOBYTE(v5) = v11;
      ++v10;
    } while (v11 != 0);
    v12 = (unsigned int)v10;
  }
  else {
    v12 = 5;
  }
  *((_BYTE*)&v13 + v12) = 0;
  snd_Voice_setLabel(a2, &v13);
  return 1;
}

_QWORD* ProxySnd_Unknown64(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  _QWORD* v11;
  __int64 v13;
  __int64 v14;

  nn_os_LockMutex(&GameData_21fa828);
  nn_os_LockMutex(&GameData_21fa828);
  v7 = (unsigned __int16)GameData_21fa820;
  v8 = HIWORD(GameData_21fa820);
  nn_os_UnlockMutex(&GameData_21fa828);
  if (v7 >= v8) {
    v14 = GameRoutine_a1efd0(&GameData_21fa828);
    nn_diag_detail_AbortImpl_1a0a590(v14);
    __udf(0);
  }
  v9 = 2LL * (unsigned __int16)GameData_21fa820;
  v10 = *(unsigned __int16*)(GameData_21fa818 + v9);
  LOWORD(GameData_21fa820) = GameData_21fa820 + 1;
  *(_WORD*)(GameData_21fa818 + v9) = -1;
  v11 = (_QWORD*)(GameData_21fa810 + 112LL * v10);
  nn_os_UnlockMutex(&GameData_21fa828);
  GameRoutine_179780(v11, a2, a3, a4);
  v13 = GameData_212e2c0[0];
  v11[9] = 0;
  v11[10] = 0;
  *(_QWORD*)((char*)v11 + 87) = 0;
  v11[12] = 0;
  v11[13] = 0;
  *v11 = v13 + 16;
  return v11;
}

__int64 ProxySnd_Unknown65(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;

  nn_os_LockMutex(&GameData_21fa878);
  nn_os_LockMutex(&GameData_21fa878);
  v7 = (unsigned __int16)GameData_21fa870;
  v8 = HIWORD(GameData_21fa870);
  nn_os_UnlockMutex(&GameData_21fa878);
  if (v7 >= v8) {
    v14 = GameRoutine_a1efd0(&GameData_21fa878);
    nn_diag_detail_AbortImpl_1a0a590(v14);
    __udf(0);
  }
  v9 = 2LL * (unsigned __int16)GameData_21fa870;
  v10 = *(unsigned __int16*)(GameData_21fa868 + v9);
  LOWORD(GameData_21fa870) = GameData_21fa870 + 1;
  *(_WORD*)(GameData_21fa868 + v9) = -1;
  v11 = GameData_21fa860 + 112LL * v10;
  nn_os_UnlockMutex(&GameData_21fa878);
  GameRoutine_1798b0(v11, a2, a3, a4);
  v13 = GameData_212e2c8[0];
  *(_QWORD*)(v11 + 72) = 0;
  *(_WORD*)(v11 + 80) = 0;
  *(_QWORD*)(v11 + 88) = 0;
  *(_QWORD*)(v11 + 96) = 0;
  *(_QWORD*)(v11 + 104) = 0;
  *(_QWORD*)v11 = v13 + 16;
  return v11;
}

__int64 ProxySnd_Unknown66(__int64 a1, void (***a2)(_QWORD))
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  unsigned __int16 v6;
  unsigned __int64 v7;
  __int64 v9;
  int v10;

  v9 = 0;
  v10 = 0x2000;
  snd_fnd_WeakHandle_set(&v9);
  v3 = ProxySnd_a1e400(&v9);
  (**a2)(a2);
  if (v3 != 0) {
    v4 = &GameData_21fa860;
  }
  else {
    v4 = &GameData_21fa810;
  }
  nn_os_LockMutex(v4 + 3);
  v5 = v4[1];
  v6 = *((_WORD*)v4 + 8) - 1;
  v7 = ((unsigned __int64)a2 - *v4) >> 4;
  *((_WORD*)v4 + 8) = v6;
  *(_WORD*)(v5 + 2LL * v6) =
      (v7 * (unsigned __int128)0x2492492492492493uLL) >> 64;
  return nn_os_UnlockMutex(v4 + 3);
}

__int64 ProxySnd_a1e400(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  unsigned __int8 explicit;
  __int64* v5;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;

  if (snd_fnd_WeakHandle_get(a1) == 0) {
    return 0;
  }
  v2 = snd_fnd_WeakHandle_get(a1);
  v3 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212e270,
                                  memory_order_acquire);
  v5 = GameData_212e268;
  if ((explicit & 1) == 0) {
    v12 = v3;
    v8 = __cxa_guard_acquire(GameData_212e270);
    v5 = GameData_212e268;
    v3 = v12;
    if (v8 != 0) {
      *GameData_212e268 = GameRoutine_a1efe0(v12);
      __cxa_guard_release(GameData_212e270, v9, v10, v11);
      v5 = GameData_212e268;
      v3 = v12;
    }
  }
  if (v3 == v5) {
    return snd_fnd_WeakHandle_get(a1);
  }
  do {
    v3 = (__int64*)*v3;
  } while (v3 != v5 && v3 != nullptr);
  if (v3 != nullptr) {
    return snd_fnd_WeakHandle_get(a1);
  }
  else {
    return 0;
  }
}

__int64 ProxySnd_Unknown69(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v11;

  nn_os_LockMutex(&GameData_21fa8c8);
  nn_os_LockMutex(&GameData_21fa8c8);
  v5 = (unsigned __int16)GameData_21fa8c0;
  v6 = HIWORD(GameData_21fa8c0);
  nn_os_UnlockMutex(&GameData_21fa8c8);
  if (v5 >= v6) {
    v11 = GameRoutine_a1efd0(&GameData_21fa8c8);
    nn_diag_detail_AbortImpl_1a0a590(v11);
    __udf(0);
  }
  v7 = 2LL * (unsigned __int16)GameData_21fa8c0;
  v8 = *(unsigned __int16*)(GameData_21fa8b8 + v7);
  LOWORD(GameData_21fa8c0) = GameData_21fa8c0 + 1;
  *(_WORD*)(GameData_21fa8b8 + v7) = -1;
  v9 = GameData_21fa8b0 + 72LL * v8;
  nn_os_UnlockMutex(&GameData_21fa8c8);
  GameRoutine_a3a490(v9, a2, a3);
  return v9;
}

__int64 ProxySnd_Unknown70(__int64 a1, void (***a2)(_QWORD))
{
  (**a2)(a2);
  nn_os_LockMutex(&GameData_21fa8c8);
  LOWORD(GameData_21fa8c0) = GameData_21fa8c0 - 1;
  *(_WORD*)(GameData_21fa8b8 + 2LL * (unsigned __int16)GameData_21fa8c0) =
      ((unsigned __int64)a2 - GameData_21fa8b0) / 0x48;
  return nn_os_UnlockMutex(&GameData_21fa8c8);
}

#pragma GCC visibility pop
