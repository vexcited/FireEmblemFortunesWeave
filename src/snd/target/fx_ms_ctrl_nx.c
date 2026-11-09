#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_166160(_QWORD);
__int64 nn_atk_EffectAux_IsEnabled(_QWORD);
void FxMSCtrlNX_Unknown9(__int64 a1);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
__int64 snd_fx_FxMS_registry(_QWORD);
extern _UNKNOWN* GameData_2134a70;
extern __int64* GameData_2134a78;
__int64* FxMsCtrlNx_166160(__int64 a1, float a2);

void FxMSCtrlNX_Unknown9(__int64 a1)
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

__int64* FxMsCtrlNx_166160(__int64 a1, float a2)
{
  __int64* result;
  float v4;
  __int64 v5;
  float v6;
  unsigned __int8 explicit;
  __int64* v8;
  __int64 v10;
  int v11;
  __int64* v12;

  result = (__int64*)snd_fnd_WeakHandle_get(a1, a2);
  if (result != nullptr) {
    v5 = snd_fnd_WeakHandle_get(a1, v4);
    result = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)(v5 - 5592) + 64LL))(
        v5 - 5592);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2134a70,
                                    memory_order_acquire);
    v8 = GameData_2134a78;
    if ((explicit & 1) == 0) {
      v12 = result;
      v11 = __cxa_guard_acquire(GameData_2134a70);
      v8 = GameData_2134a78;
      result = v12;
      if (v11 != 0) {
        *GameData_2134a78 = snd_fx_FxMS_registry(v12);
        __cxa_guard_release(GameData_2134a70);
        v8 = GameData_2134a78;
        result = v12;
      }
    }
    if (result == v8) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != v8 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      v10 = snd_fnd_WeakHandle_get(a1, v6);
      if (v10 != 0) {
        return (__int64*)(v10 - 5592);
      }
      else {
        return nullptr;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
