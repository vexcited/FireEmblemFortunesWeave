#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16d650(void);
__int64 GameRoutine_2af320(void);
__int64 nn_os_InitializeMutex(_QWORD, _QWORD, _QWORD);
__int64 snd_coef_BiQuadCoef_setType(_QWORD, _QWORD);
extern __int64 GameData_2134740[19];
extern __int64* snd_g_memory_ptr[2];
float Biquad_16afe0(__int64 a1, float a2, float a3, float a4, float a5,
                    float a6, float a7);
__int64 Biquad_16cf50(__int64 a1);
float Biquad_16afe0(__int64 a1, float a2, float a3, float a4, float a5,
                    float a6, float a7)
{
  *(float*)(*(_QWORD*)(a1 + 16) + 8LL) = a5 / a2;
  *(float*)(*(_QWORD*)(a1 + 16) + 12LL) = a6 / a2;
  *(float*)(*(_QWORD*)(a1 + 16) + 16LL) = a7 / a2;
  **(float**)(a1 + 16) = a3 / a2;
  *(float*)(*(_QWORD*)(a1 + 16) + 4LL) = a4 / a2;
  return *(float*)(*(_QWORD*)(a1 + 16) + 4LL);
}

__int64 Biquad_16cf50(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  void (***v6)(_QWORD);

  GameRoutine_2af320();
  v2 = GameData_2134740[0];
  *(_WORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  v3 = (__int64*)(a1 + 104);
  *(_QWORD*)(a1 + 132) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_BYTE*)(a1 + 120) = 0;
  *(_QWORD*)a1 = v2 + 16;
  nn_os_InitializeMutex(a1 + 128, 1, 0);
  v4 = snd_g_memory_ptr[0];
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24, 32);
  GameRoutine_16d650();
  v6 = (void (***)(_QWORD))*v3;
  *v3 = v5;
  if (v6 != nullptr) {
    (**v6)(v6);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v6);
    v5 = *v3;
  }
  snd_coef_BiQuadCoef_setType(*(_QWORD*)(v5 + 8), 0);
  return snd_coef_BiQuadCoef_setType(*(_QWORD*)(*v3 + 16), 0);
}

#pragma GCC visibility pop
