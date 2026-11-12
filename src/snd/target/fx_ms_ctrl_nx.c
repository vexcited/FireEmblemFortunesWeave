#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_166160(_QWORD);
__int64 nn_atk_EffectAux_IsEnabled(_QWORD);
void FxMSCtrlNX_updateFx(__int64 a1);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
__int64 snd_fx_FxMS_registry(_QWORD);
extern _UNKNOWN* GameData_2134a70;
extern __int64* GameData_2134a78;
__int64* FxMsCtrlNx_166160_alt1(__int64 a1,
                                float a2) __asm__("FxMsCtrlNx_166160");
__int64* snd_fx_FxMS_registry_alt1() __asm__("snd_fx_FxMS_registry");
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
__int64* FxMsCtrlNx_166160(__int64 a1);

void FxMSCtrlNX_updateFx(__int64 a1)
{
  __int64 v2;
  long double v3;
  int v4;
  __int64 v5;

  if ((nn_atk_EffectAux_IsEnabled(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL)) &
       1) != 0) {
    v2 = GameRoutine_166160(a1 + 5680);
    if (v2 != 0) {
      v4 = *(_DWORD*)(a1 + 5696);
      if (v4 >= -99) {
        *(_QWORD*)&v3 = 0;
        v5 = v2;
        if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 104LL) > v4) {
          *(float*)&v3 = 1.0;
        }
        (*(void (**)(__int64, long double))(*(_QWORD*)v2 + 192LL))(v2, v3);
        v2 = v5;
      }
      *(float*)(a1 + 5700) = (*(float (**)(__int64))(*(_QWORD*)v2 + 200LL))(v2);
    }
  }
}

__int64* FxMsCtrlNx_166160(__int64 a1)
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
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2134a70,
                                    memory_order_acquire);
    v5 = GameData_2134a78;
    if ((explicit & 1) == 0) {
      v9 = result;
      v8 = __cxa_guard_acquire_alt1((__int64)GameData_2134a70);
      v5 = GameData_2134a78;
      result = v9;
      if (v8 != 0) {
        *GameData_2134a78 = (__int64)snd_fx_FxMS_registry_alt1();
        __cxa_guard_release_alt1((__int64)GameData_2134a70);
        v5 = GameData_2134a78;
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

#pragma GCC visibility pop
