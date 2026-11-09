#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1f94210[])();
extern __int64 (*game_map_Image_RemoveScope_vtable[])();
extern __int64* GameData_212ce98[2];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
_QWORD* RemoveScope_Destructor(_QWORD* result, __int64 a2, __int64 a3,
                               __int64 a4);
_QWORD* RemoveScope_Destructor(_QWORD* result, __int64 a2, __int64 a3,
                               __int64 a4)
{
  __int64 v4;
  int v5;
  int v6;
  char* v7;
  char* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  int v14;
  int v15;

  *result = game_map_Image_RemoveScope_vtable;
  v4 = result[1];
  if (v4 != 0 && (*(_WORD*)(v4 + 417) & 0x4004) == 0) {
    v5 = *(char*)(v4 + 585);
    v6 = *(char*)(v4 + 584);
    result = v12;
    v7 = *(char**)(v4 + 600);
    v8 = *(char**)(v4 + 608);
    v12[2] = v4;
    v13 = v12;
    v9 = *(_QWORD*)(*GameData_212ce98[0] + 96);
    v12[0] = GameData_1f94210;
    v12[1] = v9;
    if (v7 == v8) {
      goto LABEL_9;
    }
    do {
      v10 = *v7 + v6;
      v14 = v7[1] + v5;
      v15 = v10;
      if (v13 == nullptr) {
        GameRoutine_60a310(0, a2, a3, a4);
      }
      (*(void (**)(_QWORD*, int*, int*))(*v13 + 48LL))(v13, &v15, &v14);
      v7 += 4;
    } while (v7 != v8);
    result = v13;
    if (v13 == v12) {
    LABEL_9:
      v11 = 32;
    }
    else {
      if (v13 == nullptr) {
        return result;
      }
      v11 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(*result + v11))(
        result, a2, a3);
  }
  return result;
}

#pragma GCC visibility pop
