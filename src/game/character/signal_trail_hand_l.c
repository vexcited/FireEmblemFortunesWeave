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
__int64 Signal_TrailHandL_Unknown5_alt1(
    __int64 a1, __int64 a2, __int64* a3) __asm__("Signal_TrailHandL_Unknown5");
_QWORD* timeline_57f0(_QWORD*, int);
_QWORD*
timeline_ValueWriter_Key_alt1(_QWORD*) __asm__("timeline_ValueWriter_Key");
__int64 timeline_Cursor_Next_alt1(_BYTE**) __asm__("timeline_Cursor_Next");
__int64
timeline_IKey_Serialize_alt1(__int64 result, __int64,
                             __int64*) __asm__("timeline_IKey_Serialize");
__int64
timeline_KeyWriter_Write_alt1(__int64, const char*, __int64, __int64,
                              unsigned int) __asm__("timeline_KeyWriter_Write");
bool timeline_Cursor_HasNext_alt1(_DWORD*) __asm__("timeline_Cursor_HasNext");
double timeline_Value_ToDouble_alt1(__int64) __asm__("timeline_Value_ToDouble");
unsigned __int64
timeline_Value_ToInt_alt1(__int64) __asm__("timeline_Value_ToInt");
void GameRoutine_bdff40_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_bdff40");
void Signal_TrailHandL_Unknown5(__int64 a1, __int64 a2, __int64* a3);

void Signal_TrailHandL_Unknown5(__int64 a1, __int64 a2, __int64* a3)
{

#pragma clang fp contract(off)
  int v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  double v15;
  float v16;
  int v17;

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  timeline_IKey_Serialize_alt1(a1, a2, a3),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (a2 != 0 && (*(_BYTE*)(a2 + 32) & 1) == 0) {
    while (timeline_Cursor_HasNext_alt1(*(_DWORD**)(a2 + 24))) {
      v6 = timeline_Cursor_Next_alt1(*(_BYTE***)(a2 + 24)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((unsigned int)(v6 - 2) < 9) {
        *(_DWORD*)(a1 + 32) =
            timeline_Value_ToInt_alt1(*(_QWORD*)(a2 + 24) + 16LL) >> 32,
                        v15 = COERCE_AS(
                            __typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        break;
      }
      if (v6 == 14) {
        *(_BYTE*)(a2 + 32) = 1;
        break;
      }
    }
  }
  if (a3 != nullptr) {
    if (a3[1] != 0) {
      v7 = (_QWORD*)a3[1];
    }
    else {
      v7 = (_QWORD*)*a3;
    }
    v8 = timeline_ValueWriter_Key_alt1(v7),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    timeline_57f0(v8, *(_DWORD*)(a1 + 32)),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (a2 != 0) {
    v9 = *(_QWORD*)(a1 + 40);
    v10 = *(int*)(a1 + 32);
    *(_QWORD*)(a1 + 48) = v9;
    if ((_DWORD)v10 != 0) {
      GameRoutine_bdff40_alt1((__int64*)(a1 + 40), v10),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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
        v16 = 0x0.0p+0f;
        if ((*(_BYTE*)(a2 + 32) & 1) == 0) {
          while (timeline_Cursor_HasNext_alt1(*(_DWORD**)(a2 + 24))) {
            v17 = timeline_Cursor_Next_alt1(*(_BYTE***)(a2 + 24)),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((unsigned int)(v17 - 2) < 9) {
              timeline_Value_ToDouble_alt1(*(_QWORD*)(a2 + 24) + 16LL),
                  v15 = COERCE_AS(
                      __typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v16 = v15;
              break;
            }
            if (v17 == 14) {
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
    timeline_KeyWriter_Write_alt1(
        (__int64)a3, "VertexArray", 11, *(_QWORD*)(a1 + 40),
        (*(_QWORD*)(a1 + 48) - *(_QWORD*)(a1 + 40)) >> 2),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

#pragma GCC visibility pop
