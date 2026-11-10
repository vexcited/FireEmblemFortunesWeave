#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_1b4100(__int64* result, _QWORD*);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN** GameData_212bff8;
extern __int64 (*GameData_219a968)(__int64);
extern char GameData_1a9f09e;
unsigned int* GameRoutine_25f940(unsigned int*, __int64);
__int64 asCScriptCode_SetCode(__int64 a1, char* a2, __int64 a3, char a4);

__int64 asCScriptCode_SetCode(__int64 a1, char* a2, __int64 a3, char a4)
{
  __int64 v4;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v24;
  unsigned __int64 i;
  unsigned __int64 v26;
  struct {
    unsigned __int64 v27;
    __int64 v28;
  } v27_;

  v27_.v28 = v4;
  v27_.v27 = 0;
  if (a3 == 0) {
    return 4294967291LL;
  }
  if (a2 == nullptr) {
    a2 = &GameData_1a9f09e;
  }
  GameRoutine_25f940((unsigned int*)a1, (__int64)a2);
  if ((*(_BYTE*)(a1 + 40) & 1) == 0) {
    v9 = *(_QWORD*)(a1 + 24);
    if (v9 != 0) {
      GameData_219a968(v9);
    }
  }
  v24 = strlen(a3);
  v27_.v27 = v24;
  *(_QWORD*)(a1 + 32) = v24;
  if ((a4 & 1) == 0) {
    *(_QWORD*)(a1 + 24) = a3;
    *(_BYTE*)(a1 + 40) = 1;
    v26 = 0;
    GameRoutine_1b4100((__int64*)(a1 + 56), &v26);
    if (v24 != 0) {
    LABEL_14:
      for (i = 0; i < v24; ++i) {
        if (*(_BYTE*)(a3 + i) == 10) {
          v26 = i + 1;
          GameRoutine_1b4100((__int64*)(a1 + 56), &v26);
        }
      }
    }
  LABEL_18:
    GameRoutine_1b4100((__int64*)(a1 + 56), &v27_.v27);
    return 0;
  }
  *(_BYTE*)(a1 + 40) = 0;
  v10 = ((__int64 (*)(unsigned __int64))*GameData_212bff8)(v24);
  *(_QWORD*)(a1 + 24) = v10;
  if (v10 != 0) {
    memcpy(v10, a3, v24);
    v26 = 0;
    GameRoutine_1b4100((__int64*)(a1 + 56), &v26);
    if (v24 != 0) {
      goto LABEL_14;
    }
    goto LABEL_18;
  }
  return 4294967269LL;
}

#pragma GCC visibility pop
