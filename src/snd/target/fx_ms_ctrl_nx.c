#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_166160(_QWORD);
__int64 nn_atk_EffectAux_IsEnabled(_QWORD);
void FxMSCtrlNX_Unknown9(__int64 a1);

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

#pragma GCC visibility pop
