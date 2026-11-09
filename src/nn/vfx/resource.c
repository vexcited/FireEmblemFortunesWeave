#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* GameRoutine_5b75e0(_BYTE* result, __int64);
__int64 GameRoutine_5b6b00(_QWORD, _QWORD);
__int64 GameRoutine_5c02c0(const char*, ...);
__int64 GameRoutine_5c96e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5c9b40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5deed0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5e6140(_QWORD, _QWORD);
__int64 GameRoutine_5fe3b0(_QWORD, _QWORD);
__int64 GameRoutine_603fb0(_QWORD, _QWORD);
__int64 GameRoutine_6064a0(_QWORD);
__int64 GameRoutine_606650(_QWORD, _QWORD);
__int64 nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(_QWORD);
__int64 Resource_5c6100(__int64 a1, __int64 a2);

__int64 Resource_5c6100(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 FirstBlockEv;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  *(_QWORD*)(a1 + 1192) = 0;
  if (a2 != 0) {
    *(_QWORD*)(a1 + 1112) = a2;
    if (*(_QWORD*)(a1 + 1336) == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  GameRoutine_5c02c0(
      "Heap is not set in the argument of the resource destruction method.");
  if (*(_QWORD*)(a1 + 1336) != 0) {
  LABEL_3:
    v3 = *(_QWORD*)(a1 + 1112);
    --*(_DWORD*)(a1 + 1128);
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3);
  }

LABEL_4:
  v4 = *(_QWORD*)(a1 + 1200);
  if (v4 != 0) {
    FirstBlockEv = nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(v4);
    GameRoutine_603fb0(FirstBlockEv, *(_QWORD*)(a1 + 16));
    *(_QWORD*)(a1 + 1200) = 0;
  }
  v6 = *(_QWORD*)(a1 + 1272);
  if (v6 != 0) {
    v7 = nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(v6);
    GameRoutine_603fb0(v7, *(_QWORD*)(a1 + 16));
    *(_QWORD*)(a1 + 1272) = 0;
  }
  GameRoutine_5c96e0(a1 + 1216, *(_QWORD*)(a1 + 16), a1 + 1104);
  GameRoutine_5c9b40(a1 + 1288, *(_QWORD*)(a1 + 16), a1 + 1104);
  v8 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 120) = 0;
  if (v8 != 0) {
    v9 = *(_QWORD*)(a1 + 1112);
    --*(_DWORD*)(a1 + 1128);
    (*(void (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
    *(_QWORD*)(a1 + 112) = 0;
  }
  if (*(_QWORD*)(a1 + 136) != 0) {
    v10 = *(_QWORD*)(a1 + 1112);
    --*(_DWORD*)(a1 + 1128);
    (*(void (**)(__int64))(*(_QWORD*)v10 + 24LL))(v10);
    *(_QWORD*)(a1 + 136) = 0;
  }
  result = *(_QWORD*)(a1 + 152);
  if (result != 0) {
    result = GameRoutine_5e6140(result, *(_QWORD*)(a1 + 16));
    *(_QWORD*)(a1 + 152) = 0;
  }
  if (*(int*)(a1 + 160) >= 1) {
    v12 = 0;
    do {
      v13 = *(_QWORD*)(a1 + 16);
      v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 168) + 40LL) + 8 * v12);
      GameRoutine_6064a0(*(_QWORD*)(v14 + 128));
      result = GameRoutine_606650(*(_QWORD*)(v14 + 136), v13);
      ++v12;
    } while (v12 < *(int*)(a1 + 160));
  }
  v15 = *(_QWORD*)(a1 + 168);
  if (v15 != 0) {
    result = *(_QWORD*)(v15 + 64);
    if (*(_QWORD*)(v15 + 72) == result) {
      result = GameRoutine_5fe3b0(result, *(_QWORD*)(a1 + 16));
    }
    *(_QWORD*)(v15 + 72) = 0;
    *(_QWORD*)(a1 + 168) = 0;
  }
  if (*(int*)(a1 + 76) >= 1) {
    v16 = 0;
    do {
      v19 = *(_QWORD*)(a1 + 88);
      if (*(int*)(v19 + 56 * v16 + 4) >= 1) {
        v20 = 0;
        v21 = 0;
        v22 = 56 * v16;
        do {
          v23 = *(_QWORD*)(v19 + v22 + 24);
          GameRoutine_5b6b00(v23 + v20, *(_QWORD*)(a1 + 16));
          GameRoutine_5b75e0((_BYTE*)(v23 + v20), *(_QWORD*)(a1 + 16));
          v19 = *(_QWORD*)(a1 + 88);
          ++v21;
          v20 += 992;
        } while (v21 < *(int*)(v19 + v22 + 4));
      }
      v17 = *(_QWORD*)(a1 + 1112);
      v18 = *(_QWORD*)(v19 + 56 * v16 + 32);
      --*(_DWORD*)(a1 + 1128);
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v17 + 24LL))(v17, v18);
      ++v16;
    } while (v16 < *(int*)(a1 + 76));
  }
  if (*(_QWORD*)(a1 + 88) != 0) {
    v24 = *(_QWORD*)(a1 + 1112);
    --*(_DWORD*)(a1 + 1128);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 24LL))(v24);
    *(_QWORD*)(a1 + 88) = 0;
  }
  if (*(_QWORD*)(a1 + 96) != 0) {
    v25 = *(_QWORD*)(a1 + 1112);
    --*(_DWORD*)(a1 + 1128);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 24LL))(v25);
    *(_QWORD*)(a1 + 96) = 0;
  }
  if (*(_BYTE*)(a1 + 320) == 1) {
    result = GameRoutine_5deed0(a1 + 240, *(_QWORD*)(a1 + 16), a1 + 1104);
  }
  if (*(_BYTE*)(a1 + 752) == 1) {
    return GameRoutine_5deed0(a1 + 672, *(_QWORD*)(a1 + 16), a1 + 1104);
  }
  return result;
}

#pragma GCC visibility pop
