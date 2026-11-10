#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2af380(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 GameData_2134788[10];
extern __int64* snd_g_memory_ptr[2];
__int64 FxSpeaker_Destructor(_QWORD* a1);
__int64 snd_coef_BiQuadCoef_BiQuadCoef(void);
extern __int64 GameData_2134790[9];
__int64 FxSpeaker_178240(_QWORD* a1);

__int64 FxSpeaker_Destructor(_QWORD* a1)
{
  __int64 v2;
  void (***v3)(_QWORD);
  __int64* v4;
  void (***v5)(_QWORD);

  v2 = GameData_2134788[0];
  v3 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  *a1 = v2 + 16;
  v4 = snd_g_memory_ptr[0];
  if (v3 != nullptr) {
    (**v3)(v3);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v3);
  }
  nn_os_FinalizeMutex(a1 + 788);
  v5 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v5);
  }
  return GameRoutine_2af380(a1);
}

__int64 FxSpeaker_178240(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  void (***v5)(_QWORD);
  __int64 v6;
  void (***v7)(_QWORD);
  __int64 v8;
  void (***v9)(_QWORD);
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 vars0;
  __int64 _8;
  __int64 vars10;
  __int64 _18;

  v2 = GameData_2134790[0];
  a1[2] = 0;
  a1[3] = 0;
  *a1 = v2 + 16;
  a1[1] = 0;
  v3 = snd_g_memory_ptr[0];
  v4 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 248, 32);
  snd_coef_BiQuadCoef_BiQuadCoef();
  v5 = (void (***)(_QWORD))a1[1];
  a1[1] = v4;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v5);
  }
  v6 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 248, 32);
  snd_coef_BiQuadCoef_BiQuadCoef();
  v7 = (void (***)(_QWORD))a1[2];
  a1[2] = v6;
  if (v7 != nullptr) {
    (**v7)(v7);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v7);
  }
  v8 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 248, 32);
  snd_coef_BiQuadCoef_BiQuadCoef();
  v9 = (void (***)(_QWORD))a1[3];
  a1[3] = v8;
  if (v9 != nullptr) {
    (**v9)(v9);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v9);
  }
  vars10 = vars0;
  _18 = _8;
  *(_WORD*)(*(_QWORD*)(a1[1] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 192LL) + 8LL) = -17536;
  v10 = *(_QWORD*)(a1[1] + 8LL * *(unsigned int*)(a1[1] + 124LL) + 128);
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  *(_DWORD*)(a1[1] + 204LL) = 0;
  *(_WORD*)(*(_QWORD*)(a1[2] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 192LL) + 8LL) = -17536;
  v11 = *(_QWORD*)(a1[2] + 8LL * *(unsigned int*)(a1[2] + 124LL) + 128);
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  *(_DWORD*)(a1[2] + 204LL) = 0;
  *(_WORD*)(*(_QWORD*)(a1[3] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 192LL) + 8LL) = -17536;
  v12 = *(_QWORD*)(a1[3] + 8LL * *(unsigned int*)(a1[3] + 124LL) + 128);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  *(_DWORD*)(a1[3] + 204LL) = 0;
  return result;
}

#pragma GCC visibility pop
