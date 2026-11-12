#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_2abdc0(_QWORD* result);
extern _UNKNOWN GameData_219d128;
extern __int64 GameData_219d130;
void* SequenceSoundPlayer_2910d0();
_QWORD* nn_atk_detail_2911a0();
__int64 nn_atk_detail_2abbc0(__int64 a1);

_QWORD* nn_atk_detail_2911a0()
{
  _QWORD* v0;
  _QWORD* result;
  _QWORD* v2;

  SequenceSoundPlayer_2910d0();
  v0 = (_QWORD*)GameData_219d130;
  result = SequenceSoundPlayer_2910d0();
  if (v0 != (_QWORD*)&GameData_219d128) {
    result = v0;
    do {
      v2 = (_QWORD*)result[1];
      (*(void (**)(void*))(*(result - 1) + 16LL))((void*)(result - 1));
      SequenceSoundPlayer_2910d0();
      result = v2;
    } while (v2 != (_QWORD*)&GameData_219d128);
  }
  return result;
}

__int64 nn_atk_detail_2abbc0(__int64 a1)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;

  v1 = *(_DWORD*)(a1 + 32);
  if (v1 >= (signed __int32)*(_DWORD*)(a1 + 48)) {
    return 0;
  }
  *(_DWORD*)(a1 + 32) = v1 + 1;
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * v1);
  *(_DWORD*)(*(_QWORD*)(a1 + 40) +
             (((v2 - *(_QWORD*)a1) / 0x30uLL) & 0x7FFFFFFFFFFFFFCLL)) = v1;
  *(_DWORD*)(v2 + 88) = 0;
  *(_DWORD*)(v2 + 144) = 0;
  *(_BYTE*)(v2 + 48) = 1;
  *(_QWORD*)(v2 + 96) = 0x100007D00LL;
  *(_QWORD*)(v2 + 104) = 0;
  v3 = *(_QWORD*)(v2 + 80);
  if (*(int*)(v3 + 4) >= 1) {
    v4 = 0;
    v5 = 0;
    do {
      v7 = *(_QWORD*)(v3 + 16);
      v6 = *(_QWORD*)(v3 + 24);
      v8 = (_QWORD*)(*(_QWORD*)(v3 + 8) + v4 + v6 - v7);
      if (v6 + v4 >= v7) {
        v9 = v8;
      }
      else {
        v9 = (_QWORD*)(v6 + v4);
      }
      GameRoutine_2abdc0(v9);
      v3 = *(_QWORD*)(v2 + 80);
      ++v5;
      v4 += 104;
    } while (v5 < *(int*)(v3 + 4));
  }
  return v2;
}

#pragma GCC visibility pop
