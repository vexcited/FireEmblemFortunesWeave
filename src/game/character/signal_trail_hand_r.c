#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_57f0(_QWORD, _QWORD);
__int64 GameRoutine_bdff40(void);
__int64 timeline_Cursor_HasNext(_QWORD);
__int64 timeline_Cursor_Next(_QWORD);
__int64 timeline_IKey_Serialize(void);
__int64 timeline_KeyWriter_Write(_QWORD, _QWORD, _QWORD);
__int64 timeline_ValueWriter_Key(_QWORD, _QWORD, _QWORD);
__int64 timeline_Value_ToDouble(_QWORD);
__int64 timeline_Value_ToInt(_QWORD);
__int64 Signal_TrailHandR_Unknown5(__int64 a1, __int64 a2, __int64* a3);

__int64 Signal_TrailHandR_Unknown5(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  double v15;
  float v16;

  result = timeline_IKey_Serialize();
  if (a2 != 0 && (*(_BYTE*)(a2 + 32) & 1) == 0) {
    while (1) {
      result = timeline_Cursor_HasNext(*(_QWORD*)(a2 + 24));
      if ((result & 1) == 0) {
        break;
      }
      result = timeline_Cursor_Next(*(_QWORD*)(a2 + 24));
      if ((unsigned int)(result - 2) < 9) {
        result = timeline_Value_ToInt(*(_QWORD*)(a2 + 24) + 16LL);
        *(_DWORD*)(a1 + 32) = HIDWORD(result);
        break;
      }
      if ((_DWORD)result == 14) {
        *(_BYTE*)(a2 + 32) = 1;
        break;
      }
    }
  }
  if (a3 != nullptr) {
    if (a3[1] != 0) {
      v7 = a3[1];
    }
    else {
      v7 = *a3;
    }
    v8 = timeline_ValueWriter_Key(v7, "VertexArraySize", 15);
    result = GameRoutine_57f0(v8, *(unsigned int*)(a1 + 32));
  }
  if (a2 != 0) {
    result = a1 + 40;
    v9 = *(_QWORD*)(a1 + 40);
    v10 = *(_DWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 48) = v9;
    if (v10 != 0) {
      result = GameRoutine_bdff40();
      v11 = *(_QWORD*)(a1 + 40);
      v9 = *(_QWORD*)(a1 + 48);
    }
    else {
      v11 = v9;
    }
    v12 = v9 - v11;
    if ((v12 & 0x3FFFFFFFCLL) != 0) {
      v13 = (unsigned int)(v12 >> 2);
      v14 = 0;
      do {
        v16 = 0.0;
        if ((*(_BYTE*)(a2 + 32) & 1) == 0) {
          while (1) {
            result = timeline_Cursor_HasNext(*(_QWORD*)(a2 + 24));
            if ((result & 1) == 0) {
              break;
            }
            result = timeline_Cursor_Next(*(_QWORD*)(a2 + 24));
            if ((unsigned int)(result - 2) < 9) {
              result = timeline_Value_ToDouble(*(_QWORD*)(a2 + 24) + 16LL);
              v16 = v15;
              break;
            }
            if ((_DWORD)result == 14) {
              *(_BYTE*)(a2 + 32) = 1;
              break;
            }
          }
        }
        *(float*)(v11 + 4 * v14++) = v16;
      } while (v14 != v13);
    }
  }
  if (a3 != nullptr) {
    return timeline_KeyWriter_Write(a3, "VertexArray", 11);
  }
  return result;
}

#pragma GCC visibility pop
