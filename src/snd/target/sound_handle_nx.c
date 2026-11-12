#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2769e0(_QWORD, _QWORD);
__int64 GameRoutine_276ac0(_QWORD);
__int64 GameRoutine_278890(_QWORD, _QWORD);
__int64 GameRoutine_27e060(_QWORD, _QWORD);
__int64 GameRoutine_27e140(_QWORD);
__int64 GameRoutine_27e180(_QWORD, _QWORD);
__int64 GameRoutine_27e260(_QWORD);
__int64 GameRoutine_2a1b90(_QWORD);
__int64 SequenceSound_28d790(_QWORD, _QWORD);
__int64 StreamSound_2964c0(_QWORD, _QWORD);
__int64 WaveSound_2ac390(_QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 strlen(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int64 snd_target_s_platform;
void __attribute__((noreturn)) GameRoutine_a36650(_QWORD, _QWORD);
__int64 SoundHandleNX_Unknown11(__int64 a1);
__n128 SoundHandleNX_Unknown19_alt1(__int64 a1, unsigned int a2) __asm__(
    "SoundHandleNX_Unknown19");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_atk_detail_BasicSound_GetRuntimeTypeInfoStatic(void);
extern _UNKNOWN* GameData_2134ff8;
extern __int64* GameData_2135000;
__int64 SoundHandleNx_2769e0(__int64 result, __int64* a2);
__int64* SoundHandleNx_276ac0(__int64* result);
_QWORD* BaseNx_278890(__int64);
__int64* GameRoutine_27e260_alt1(__int64* result) __asm__("GameRoutine_27e260");
__int64 GameRoutine_27e180_alt1(__int64 result,
                                __int64*) __asm__("GameRoutine_27e180");
__int64 SequenceSound_28d790_alt1(__int64,
                                  char) __asm__("SequenceSound_28d790");
__int64 WaveSound_2ac390_alt1(__int64, char) __asm__("WaveSound_2ac390");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void* BaseNx_2a1b90();
void __attribute__((noreturn)) snd_a36650();
__int64 SoundHandleNX_Unknown19(__int64 a1, char a2);

__int64 SoundHandleNX_Unknown11(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _DWORD v6[12];
  __int64 v7;

  v2 = ((__int64 (*)(void))GameRoutine_2a1b90)();
  nn_os_LockMutex(v2 + 840);
  GameRoutine_27e060(&v7, a1 + 32);
  if (v7 != 0) {
    StreamSound_2964c0(v7, v6);
    LODWORD(a1) = v6[1];
  }
  v3 = GameRoutine_27e140(&v7);
  v4 = GameRoutine_2a1b90(v3);
  nn_os_UnlockMutex(v4 + 840);
  return (unsigned int)a1;
}

__int64 SoundHandleNX_Unknown19(__int64 a1, char a2)
{
  void* v4;
  int v5;
  const char* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  void* v24;
  __int64 v26;

  v4 = BaseNx_2a1b90();
  nn_os_LockMutex_alt1((__int64)v4 + 840);
  v5 = *(_DWORD*)(a1 + 8);
  v6 = *(const char**)(a1 + 16);
  v7 = snd_target_s_platform;
  if (v6 == nullptr ||
      (v8 = snd_target_s_platform + 4088LL * v5, v9 = *(__int64**)(v8 + 4056),
       v10 = *(__int64**)(v8 + 4048), v9 == v10)) {
  LABEL_19:
    v22 = 32;
    if (*(_BYTE*)(v7 + 4088LL * v5 + 4136) != 0) {
      v22 = 1584;
    }
    v18 = v7 + 4088LL * v5 + 56 + v22;
    v23 = *(_QWORD*)(a1 + 32);
    v19 = (__int64*)(a1 + 32);
    if (v23 == 0) {
      goto LABEL_15;
    }
  LABEL_22:
    v21 = (unsigned int)BaseNx_278890(v18);
    if (v21 == 1) {
      goto LABEL_16;
    }
    goto LABEL_23;
  }
  v11 = v9 - v10;
  while (1) {
    v13 = *v10++;
    v12 = v13;
    if (*(_BYTE*)(v13 + 1440) == 1) {
      v14 = strlen_alt1(v6);
      v15 = *(_BYTE*)v12 >> 1;
      if ((*(_BYTE*)v12 & 1) != 0) {
        v15 = *(_QWORD*)(v12 + 8);
      }
      if (v14 == v15) {
        v16 = v14;
        if (v14 == -1) {
          snd_a36650();
        }
        v17 = (*(_BYTE*)v12 & 1) != 0 ? *(_QWORD*)(v12 + 16) : v12 + 1;
        if (memcmp_alt1(v17, (__int64)v6, v16) == 0) {
          break;
        }
      }
    }
    if (--v11 == 0) {
      goto LABEL_19;
    }
  }
  v18 = v12 + 32;
  v20 = *(_QWORD*)(a1 + 32);
  v19 = (__int64*)(a1 + 32);
  if (v20 != 0) {
    goto LABEL_22;
  }
LABEL_15:
  v21 = (unsigned int)BaseNx_278890(v18);
  if (v21 == 1) {
  LABEL_16:
    SoundHandleNx_2769e0((__int64)&v26, v19);
    if (v26 != 0) {
      SequenceSound_28d790_alt1(v26, a2);
    }
    SoundHandleNx_276ac0(&v26);
    goto LABEL_27;
  }
LABEL_23:
  if (v21 == 3) {
    GameRoutine_27e180_alt1((__int64)&v26, v19);
    if (v26 != 0) {
      WaveSound_2ac390_alt1(v26, a2);
    }
    GameRoutine_27e260_alt1(&v26);
  }
LABEL_27:
  v24 = BaseNx_2a1b90();
  return nn_os_UnlockMutex_alt1((__int64)v24 + 840);
}

__int64 SoundHandleNx_2769e0(__int64 result, __int64* a2)
{
  __int64 v2;
  _QWORD* v3;
  unsigned __int8 explicit;
  __int64* v5;

  *(_QWORD*)result = 0;
  if (a2 != nullptr) {
    v2 = *a2;
    if (*a2 != 0) {
      v3 = (_QWORD*)result;
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2134ff8,
                                      memory_order_acquire);
      v5 = GameData_2135000;
      if ((explicit & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire(GameData_2134ff8) != 0) {
        *v5 = nn_atk_detail_BasicSound_GetRuntimeTypeInfoStatic();
        __cxa_guard_release(GameData_2134ff8);
      }
      result = (**(__int64 (***)(__int64))v2)(v2);
      if ((__int64*)result == v5) {
        goto LABEL_11;
      }
      do {
        result = *(_QWORD*)result;
      } while ((__int64*)result != v5 && result != 0);
      if (result != 0) {
      LABEL_11:
        *v3 = v2;
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
        if ((result & 1) != 0) {
          result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v3 + 56LL))(*v3);
        }
        *(_QWORD*)(*v3 + 560LL) = v3;
      }
    }
  }
  return result;
}

__int64* SoundHandleNx_276ac0(__int64* result)
{
  __int64 v1;

  v1 = *result;
  if (*result != 0) {
    if (*(__int64**)(v1 + 560) != result ||
        (*(_QWORD*)(v1 + 560) = 0, *result != 0)) {
      *result = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
