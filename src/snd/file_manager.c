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
__int64 FileManager_10e120(__int64 a1, __int64 a2, float a3);
__int64 FileManager_10e200(__int64 result, __int64 a2);
__int64 FileManager_10e2c0();
bool snd_FileManager__destroyFile_lambda0_Invoke(__int64 a1, __int64* a2);

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

__int64 FileManager_10e120(__int64 a1, __int64 a2, float a3)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;
  __int64 v16;

  result = snd_fnd_WeakHandle_get(a2, a3);
  v15 = result;
  if (result != 0) {
    nn_os_LockMutex(a1 + 56);
    v7 = v13;
    v13[2] = a1;
    v13[0] = GameData_1f54ae8;
    v13[1] = &v15;
    v8 = *(__int64**)(a1 + 40);
    v14 = v13;
    v9 = *v8;
    do {
      if (v9 == 0) {
        break;
      }
      v10 = *(_QWORD*)(v9 + 24);
      v16 = v9;
      if (v7 == nullptr) {
        GameRoutine_60a310(0, v5, v6);
      }
      v11 = (*(__int64 (**)(_QWORD*, __int64*))(*v7 + 48LL))(v7, &v16);
      v7 = v14;
      v9 = v10;
    } while ((v11 & 1) == 0);
    if (v7 == v13) {
      v12 = 32;
    }
    else {
      if (v7 == nullptr) {
        return nn_os_UnlockMutex(a1 + 56);
      }
      v12 = 40;
    }
    (*(void (**)(_QWORD*, __int64, __int64))(*v7 + v12))(v7, v5, v6);
    return nn_os_UnlockMutex(a1 + 56);
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
  _QWORD v11[4];
  _QWORD* v12;
  __int64 v13;
  __int64 v14;

  v13 = a2;
  if (a2 != 0) {
    v2 = result;
    nn_os_LockMutex(result + 56);
    v5 = v11;
    v11[2] = v2;
    v11[0] = GameData_1f54ae8;
    v11[1] = &v13;
    v6 = *(__int64**)(v2 + 40);
    v12 = v11;
    v7 = *v6;
    do {
      if (v7 == 0) {
        break;
      }
      v8 = *(_QWORD*)(v7 + 24);
      v14 = v7;
      if (v5 == nullptr) {
        GameRoutine_60a310(0, v3, v4);
      }
      v9 = (*(__int64 (**)(_QWORD*, __int64*))(*v5 + 48LL))(v5, &v14);
      v5 = v12;
      v7 = v8;
    } while ((v9 & 1) == 0);
    if (v5 == v11) {
      v10 = 32;
    }
    else {
      if (v5 == nullptr) {
        return nn_os_UnlockMutex(v2 + 56);
      }
      v10 = 40;
    }
    (*(void (**)(_QWORD*, __int64, __int64))(*v5 + v10))(v5, v3, v4);
    return nn_os_UnlockMutex(v2 + 56);
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
  (*(void (**)(__int64 __return_ptr, __int64, _QWORD))(
      *(_QWORD*)snd_g_proxy + 528LL))(snd_g_proxy, snd_g_proxy,
                                      **(_QWORD**)(a1 + 8));
  return v3 == v4;
}

#pragma GCC visibility pop
