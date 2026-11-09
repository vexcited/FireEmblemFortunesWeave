#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2a6df0(_QWORD);
__int64 GameRoutine_2a70d0(_QWORD, _QWORD);
__int64 GameRoutine_2a7620(_QWORD);
__int64 GameRoutine_2a76e0(void);
__int64 GameRoutine_2a9e00(_QWORD);
unsigned __int64 GameRoutine_2a5720(unsigned __int64 result, int);
unsigned __int64 Disposer_Unknown2(unsigned __int64 result, unsigned __int64 a2,
                                   unsigned __int64 a3);
unsigned __int64 Disposer_Unknown2(unsigned __int64 result, unsigned __int64 a2,
                                   unsigned __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;
  void (*v21)(_QWORD, __int64, _QWORD);
  __int64 v22;
  __int64 v23;

  v3 = *(_QWORD*)(*(_QWORD*)(result + 24) + 400LL);
  if (v3 != 0) {
    v4 = *(unsigned int*)(v3 + 196);
    if ((int)v4 >= 1) {
      v5 = 532;
      v8 = result;
      v9 = 0;
      do {
        v10 = *(_QWORD*)(v8 + 24);
        v11 = v10 + v5;
        if (*(_DWORD*)(v10 + v5 - 64) != 3) {
          v12 = *(_QWORD*)(v11 - 116);
          v13 = *(_QWORD*)(v11 - 100);
          v14 = GameRoutine_2a9e00(*(_QWORD*)(v10 + 400));
          result = GameRoutine_2a5720(v13, v14);
          if (a2 <= v12 + result && a3 >= *(_QWORD*)(v11 - 116)) {
            goto LABEL_4;
          }
        }
        v15 = *(_QWORD*)(v8 + 24);
        v16 = v15 + v5;
        if (*(_DWORD*)(v15 + v5) != 3) {
          v17 = *(_QWORD*)(v16 - 52);
          v18 = *(_QWORD*)(v16 - 36);
          v19 = GameRoutine_2a9e00(*(_QWORD*)(v15 + 400));
          result = GameRoutine_2a5720(v18, v19);
          if (a2 <= v17 + result && a3 >= *(_QWORD*)(v16 - 52)) {
          LABEL_4:
            v9 = 1;
          }
        }
        v5 += 128;
        --v4;
      } while (v4 != 0);
      if ((v9 & 1) != 0) {
        v20 = *(_QWORD*)(v8 + 24);
        v21 = *(void (**)(_QWORD, __int64, _QWORD))(v20 + 384);
        if (v21 != nullptr) {
          v21(*(_QWORD*)(v8 + 24), 3, *(_QWORD*)(v20 + 392));
          *(_QWORD*)(v20 + 384) = 0;
          *(_QWORD*)(v20 + 392) = 0;
          v20 = *(_QWORD*)(v8 + 24);
        }
        v22 = *(_QWORD*)(v20 + 400);
        if (v22 != 0) {
          GameRoutine_2a76e0();
          v22 = GameRoutine_2a7620(*(_QWORD*)(v20 + 400));
          *(_QWORD*)(v20 + 400) = 0;
          *(_WORD*)(v20 + 192) = 0;
          v20 = *(_QWORD*)(v8 + 24);
        }
        v23 = GameRoutine_2a6df0(v22);
        return GameRoutine_2a70d0(v23, v20);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
