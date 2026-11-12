#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 (*snd_FileManager_vtable[])();
__int64 FileManager_Destructor(_QWORD* a1);
__int64 GameRoutine_10de50(__int64, __int64);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
extern __int64 (*GameData_1f54ae8[])();
extern __int64 GameData_2178e68;
extern __int64 snd_g_proxy;
extern __int64 snd_s_target;
extern __int64* snd_g_memory_ptr[2];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 FileManager_10def0(__int64 a1);
__int64 FileManager_10e120_alt1(__int64 a1, __int64 a2,
                                float a3) __asm__("FileManager_10e120");
__int64 FileManager_10e200(__int64 result, __int64 a2);
__int64 FileManager_10e2c0();
bool snd_FileManager__destroyFile_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 snd_fnd_WeakHandle_set(__int64, __int64);
extern __int64 snd_g_proxy_ptr[2];
__attribute__((swiftcall)) void FileManager_10df70(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2, unsigned int a3);
__attribute__((swiftcall)) void FileManager_10e040(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2, unsigned int a3);
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 FileManager_10e120(__int64 a1, __int64 a2);

__int64 FileManager_Destructor(_QWORD* a1)
{
  *a1 = snd_FileManager_vtable;
  return nn_os_FinalizeMutex(a1 + 7);
}

__int64 FileManager_10def0(__int64 a1)
{
  __int64 v2;

  v2 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 88, 32);
  GameRoutine_10de50(v2, a1);
  GameData_2178e68 = v2;
  return v2;
}

__attribute__((swiftcall)) void FileManager_10df70(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2, unsigned int a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v6;

  v6 = (*(__int64 (**)(_QWORD, _QWORD, __int64, _QWORD))(
      **(_QWORD**)snd_g_proxy_ptr[0] + 512LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                               *(_QWORD*)(a1 + 8), a2, a3);
  nn_os_LockMutex(a1 + 56);
  *(_QWORD*)(*(_QWORD*)(a1 + 32) + v6) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 32) + v6 + 8) = 0;
  if (**(_QWORD**)(a1 + 48) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 32) + *(_QWORD*)(a1 + 24) + 8LL) = v6;
    *(_QWORD*)(*(_QWORD*)(a1 + 32) + v6) = **(_QWORD**)(a1 + 48);
  }
  else {
    *(_QWORD*)(a1 + 16) = v6;
  }
  *(_QWORD*)(a1 + 24) = v6;
  nn_os_UnlockMutex(a1 + 56);
  *(_QWORD*)a4 = 0;
  *(_DWORD*)(a4 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set(a4, v6);
    return;
  }
}

__attribute__((swiftcall)) void FileManager_10e040(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2, unsigned int a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v6;

  v6 = (*(__int64 (**)(_QWORD, _QWORD, __int64, _QWORD))(
      **(_QWORD**)snd_g_proxy_ptr[0] + 520LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                               *(_QWORD*)(a1 + 8), a2, a3);
  nn_os_LockMutex(a1 + 56);
  *(_QWORD*)(*(_QWORD*)(a1 + 32) + v6) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 32) + v6 + 8) = 0;
  if (**(_QWORD**)(a1 + 48) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 32) + *(_QWORD*)(a1 + 24) + 8LL) = v6;
    *(_QWORD*)(*(_QWORD*)(a1 + 32) + v6) = **(_QWORD**)(a1 + 48);
  }
  else {
    *(_QWORD*)(a1 + 16) = v6;
  }
  *(_QWORD*)(a1 + 24) = v6;
  nn_os_UnlockMutex(a1 + 56);
  *(_QWORD*)a4 = 0;
  *(_DWORD*)(a4 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set(a4, v6);
    return;
  }
}

__int64 FileManager_10e120(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  __int64 v14;
  __int64 v15;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  result = snd_fnd_WeakHandle_get_alt1(a2),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v14 = result;
  if (result != 0) {
    nn_os_LockMutex_alt1(a1 + 56),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v6 = v12_.v12;
    v12_.v12[2] = a1;
    v12_.v12[0] = GameData_1f54ae8;
    v12_.v12[1] = &v14;
    v7 = *(__int64**)(a1 + 40);
    v12_.v13 = v12_.v12;
    v8 = *v7;
    do {
      if (v8 == 0) {
        break;
      }
      v9 = *(_QWORD*)(v8 + 24);
      v15 = v8;
      if (v6 == nullptr) {
        GameRoutine_60a310_alt1(),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      v10 = (*(__int64 (**)(_QWORD*, __int64*))(*v6 + 48LL))(v6, &v15),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v6 = v12_.v13;
      v8 = v9;
    } while ((v10 & 1) == 0);
    if (v6 == v12_.v12) {
      v11 = 32;
    }
    else {
      if (v6 == nullptr) {
        return nn_os_UnlockMutex_alt1(a1 + 56);
      }
      v11 = 40;
    }
    (*(void (**)(_QWORD*, __int64, __int64))(*v6 + v11))(v6, v4, v5),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    return nn_os_UnlockMutex_alt1(a1 + 56);
  }
  return result;
}

__int64 FileManager_10e200(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  __int64 v13;
  __int64 v14;

  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v13 = a2;
  if (a2 != 0) {
    v2 = result;
    nn_os_LockMutex_alt1(result + 56),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v5 = v11_.v11;
    v11_.v11[2] = v2;
    v11_.v11[0] = GameData_1f54ae8;
    v11_.v11[1] = &v13;
    v6 = *(__int64**)(v2 + 40);
    v11_.v12 = v11_.v11;
    v7 = *v6;
    do {
      if (v7 == 0) {
        break;
      }
      v8 = *(_QWORD*)(v7 + 24);
      v14 = v7;
      if (v5 == nullptr) {
        GameRoutine_60a310_alt1(),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      v9 = (*(__int64 (**)(_QWORD*, __int64*))(*v5 + 48LL))(v5, &v14),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v5 = v11_.v12;
      v7 = v8;
    } while ((v9 & 1) == 0);
    if (v5 == v11_.v11) {
      v10 = 32;
    }
    else {
      if (v5 == nullptr) {
        return nn_os_UnlockMutex_alt1(v2 + 56);
      }
      v10 = 40;
    }
    (*(void (**)(_QWORD*, __int64, __int64))(*v5 + v10))(v5, v3, v4),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    return nn_os_UnlockMutex_alt1(v2 + 56);
  }
  return result;
}

__int64 FileManager_10e2c0()
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)snd_s_target + 296LL))(
      snd_s_target);
}

bool snd_FileManager__destroyFile_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v2 = *(__int64**)(a1 + 8);
  v3 = *a2;
  v4 = *v2;
  if (*a2 != *v2) {
    return false;
  }
  v6 = *(_QWORD**)(a1 + 16);
  v7 = v6[4];
  v8 = (__int64*)(v7 + v3);
  v10 = *(_QWORD*)(v7 + v3);
  v9 = *(_QWORD*)(v7 + v3 + 8);
  if (v10 == 0) {
    v6[2] = v9;
    v11 = *v8;
    v12 = v8[1];
    if (v12 != 0) {
      goto LABEL_5;
    }
  LABEL_7:
    v6[3] = v11;
    goto LABEL_8;
  }
  *(_QWORD*)(v7 + v10 + 8) = v9;
  v7 = v6[4];
  v8 = (__int64*)(v7 + v3);
  v11 = *(_QWORD*)(v7 + v3);
  v12 = *(_QWORD*)(v7 + v3 + 8);
  if (v12 == 0) {
    goto LABEL_7;
  }
LABEL_5:
  *(_QWORD*)(v7 + v12) = v11;
  v8 = (__int64*)(v6[4] + v3);
LABEL_8:
  *v8 = 0;
  *(_QWORD*)(v6[4] + v3 + 8) = 0;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
      *(_QWORD*)snd_g_proxy + 528LL))((void*)snd_g_proxy, snd_g_proxy,
                                      **(_QWORD**)(a1 + 8));
  return v3 == v4;
}

#pragma GCC visibility pop
