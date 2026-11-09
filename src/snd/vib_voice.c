#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1414a0(__int64, long double);
__int64 snd_Fade_CtrlTypeAHDSR_release(_QWORD, _QWORD, _QWORD, float);
__int64 snd_Fade_CtrlTypeAHDSR_setState(_QWORD, _QWORD);
__int64 snd_Param_isEnvelopeEnded(_QWORD);
__int64 snd_Param_isEnvelopeFading(_QWORD);
__int64 snd_Param_isEnvelopeReleased(_QWORD);
__int64 snd_Voice_finish(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD, long double);
void GameRoutine_651250(void*, unsigned __int64);
void VibVoice_1416c0(__int64 a1, long double a2);
__int64 VibVoice_141910(__int64 result, __int64 a2, char a3, long double a4);

void VibVoice_1416c0(__int64 a1, long double a2)
{
  GameRoutine_1414a0(a1 - 5592, a2);
  GameRoutine_651250((void*)(a1 - 5592), 0x1808u);
}

__int64 VibVoice_141910(__int64 result, __int64 a2, char a3, long double a4)
{
  __int64 v4;
  float v7;
  __int64 v8;

  v4 = result;
  if (*(int*)(result + 5792) <= 5) {
    if ((*(_BYTE*)(result + 5885) & 1) != 0) {
      return result;
    }
  LABEL_6:
    snd_fnd_WeakHandle_reset(v4 + 5864, a4);
    snd_Voice_finish(v4);
    snd_Fade_CtrlTypeAHDSR_setState(v4 + 3600, 7);
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v4 + 6136) + 104LL))(
        *(_QWORD*)(v4 + 6136));
    if ((result & 1) != 0) {
      v4 = *(_QWORD*)(v4 + 6136);
      v8 = 152;
      return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + v8))(v4);
    }
    return result;
  }
  v7 = *(float*)&a4;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 216LL))(result);
  if ((result & 1) != 0) {
    if ((*(_BYTE*)(v4 + 5885) & 1) != 0) {
      return result;
    }
    goto LABEL_6;
  }
  if ((*(_BYTE*)(v4 + 5885) & 1) == 0) {
    result = snd_Param_isEnvelopeReleased(v4 + 40);
    if ((result & 1) == 0) {
      result = snd_Param_isEnvelopeFading(v4 + 40);
      if ((result & 1) == 0) {
        result = snd_Param_isEnvelopeEnded(v4 + 40);
        if ((result & 1) == 0) {
          snd_Fade_CtrlTypeAHDSR_setState(v4 + 3600, 5);
          snd_Fade_CtrlTypeAHDSR_release(v4 + 3600, a2, a3 & 1, v7);
          v8 = 784;
          return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + v8))(v4);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
