#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_FinalizeMutex(_QWORD);
__int64 snd_HandlePtr_unregisterHandle(_QWORD);
__int64 snd_Obj_Destroy_Obj_126190(_QWORD*);
__n128 Param_Destructor(_QWORD*);
extern __int64* GameData_2134248[3];
extern __int64* GameData_21346b8[4];
extern __int64* snd_g_memory_ptr[2];
__int64 VoiceBase_Destructor(_QWORD* a1);

__int64 VoiceBase_Destructor(_QWORD* a1)
{
  _BYTE* v1;
  __int64* v3;
  void (***v4)(_QWORD, _QWORD);
  _QWORD* v5;
  __int64* v6;
  void (***v7)(_QWORD, _QWORD);
  void (***v8)(_QWORD, _QWORD);
  void (***v9)(_QWORD, _QWORD);
  void (***v10)(_QWORD, _QWORD);
  void (**v11)(_QWORD, _QWORD);
  bool v12;
  __int64 v13;

  v1 = a1 + 512;
  v3 = GameData_21346b8[0];
  v4 = (void (***)(_QWORD, _QWORD))a1[751];
  *a1 = GameData_21346b8[0] + 2;
  a1[699] = v3 + 154;
  a1[5] = v3 + 13;
  v5 = a1 + 5;
  v6 = snd_g_memory_ptr[0];
  if (v4 != nullptr) {
    v7 = (void (***)(_QWORD, _QWORD))a1[752];
    v8 = v4;
    if (v4 != v7) {
      v9 = v7 - 5;
      v10 = v7 - 5;
      do {
        v11 = *v10;
        v10 -= 5;
        (*v11)(v9, v8);
        v12 = v9 == v4;
        v9 = v10;
      } while (!v12);
      v8 = (void (***)(_QWORD, _QWORD))a1[751];
    }
    v13 = *v6;
    a1[752] = v4;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v13 + 24LL))(v13, v8);
  }
  nn_os_FinalizeMutex(a1 + 743);
  if ((v1[1640] & 1) == 0) {
    if ((v1[1616] & 1) == 0) {
      goto LABEL_10;
    }
  LABEL_14:
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v6 + 24LL))(*v6, a1[716]);
    if ((v1[1584] & 1) == 0) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v6 + 24LL))(*v6, a1[719]);
  if ((v1[1616] & 1) != 0) {
    goto LABEL_14;
  }

LABEL_10:
  if ((v1[1584] & 1) != 0) {
  LABEL_11:
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v6 + 24LL))(*v6, a1[712]);
  }

LABEL_12:
  a1[699] = GameData_2134248[0] + 2;
  snd_HandlePtr_unregisterHandle(a1 + 699);
  Param_Destructor(v5);
  return snd_Obj_Destroy_Obj_126190(a1);
}

#pragma GCC visibility pop
