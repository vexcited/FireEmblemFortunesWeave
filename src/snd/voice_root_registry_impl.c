#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 snd_Voice_registry(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
extern _UNKNOWN* GameData_212e220;
extern _UNKNOWN* GameData_212e240;
extern __int64* GameData_212e218;
extern __int64* GameData_212e238;
__int64* VoiceRootRegistry_a1b100(__int64 a1);
__int64* VoiceRootRegistry_a1b740();
__int64* snd_Voice_registry_alt1() __asm__("snd_Voice_registry");
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

__int64* VoiceRootRegistry_a1b100(__int64 a1)
{
  __int64* result;
  __int64 v3;
  unsigned __int8 explicit;
  __int64* v5;
  __int64 v7;
  int v8;
  __int64* v9;

  result = (__int64*)snd_fnd_WeakHandle_get_alt1(a1);
  if (result != nullptr) {
    v3 = snd_fnd_WeakHandle_get_alt1(a1);
    result = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)(v3 - 5592) + 64LL))(
        v3 - 5592);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212e220,
                                    memory_order_acquire);
    v5 = GameData_212e218;
    if ((explicit & 1) == 0) {
      v9 = result;
      v8 = __cxa_guard_acquire_alt1((__int64)GameData_212e220);
      v5 = GameData_212e218;
      result = v9;
      if (v8 != 0) {
        *GameData_212e218 = (__int64)snd_Voice_registry_alt1();
        __cxa_guard_release_alt1((__int64)GameData_212e220);
        v5 = GameData_212e218;
        result = v9;
      }
    }
    if (result == v5) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != v5 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      v7 = snd_fnd_WeakHandle_get_alt1(a1);
      if (v7 != 0) {
        return (__int64*)(v7 - 5592);
      }
      else {
        return nullptr;
      }
    }
  }
  return result;
}

__int64* VoiceRootRegistry_a1b740()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212e240,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212e240) != 0) {
    *GameData_212e238 = 0;
    __cxa_guard_release_alt1((__int64)GameData_212e240);
  }
  return GameData_212e238;
}

#pragma GCC visibility pop
