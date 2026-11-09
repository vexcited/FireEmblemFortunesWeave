#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_2134710[25];
extern __int64* snd_g_memory_ptr[2];
_QWORD* BiQuad4_Destructor_16ac50(_QWORD* result);

_QWORD* BiQuad4_Destructor_16ac50(_QWORD* result)
{
  _QWORD* v1;
  void (***v2)(_QWORD);
  __int64* v3;
  void (***v4)(_QWORD);
  void (***v5)(_QWORD);
  void (***v6)(_QWORD);
  void (***v7)(_QWORD);
  void (***v8)(_QWORD);
  void (***v9)(_QWORD);
  void (***v10)(_QWORD);
  void (***v11)(_QWORD);
  void (***v12)(_QWORD);
  void (***v13)(_QWORD);
  void (***v14)(_QWORD);
  void (***v15)(_QWORD);
  void (***v16)(_QWORD);
  void (***v17)(_QWORD);
  void (***v18)(_QWORD);

  v1 = result;
  v2 = (void (***)(_QWORD))result[1];
  *result = GameData_2134710[0] + 16;
  result[1] = 0;
  v3 = snd_g_memory_ptr[0];
  if (v2 != nullptr) {
    (**v2)(v2);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v2);
  }
  v4 = (void (***)(_QWORD))v1[2];
  v1[2] = 0;
  if (v4 != nullptr) {
    (**v4)(v4);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v4);
  }
  v5 = (void (***)(_QWORD))v1[3];
  v1[3] = 0;
  if (v5 != nullptr) {
    (**v5)(v5);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v5);
  }
  v6 = (void (***)(_QWORD))v1[4];
  v1[4] = 0;
  if (v6 != nullptr) {
    (**v6)(v6);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v6);
  }
  v7 = (void (***)(_QWORD))v1[5];
  v1[5] = 0;
  if (v7 != nullptr) {
    (**v7)(v7);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v7);
  }
  v8 = (void (***)(_QWORD))v1[6];
  v1[6] = 0;
  if (v8 != nullptr) {
    (**v8)(v8);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v8);
  }
  v9 = (void (***)(_QWORD))v1[7];
  v1[7] = 0;
  if (v9 != nullptr) {
    (**v9)(v9);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v9);
  }
  v10 = (void (***)(_QWORD))v1[8];
  v1[8] = 0;
  if (v10 != nullptr) {
    (**v10)(v10);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v10);
    v11 = (void (***)(_QWORD))v1[8];
    v1[8] = 0;
    if (v11 != nullptr) {
      (**v11)(v11);
      result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
          *(_QWORD*)*v3 + 24LL))(*v3, v11);
    }
    v12 = (void (***)(_QWORD))v1[7];
    v1[7] = 0;
    if (v12 != nullptr) {
      goto LABEL_19;
    }
  }
  else {
    v12 = (void (***)(_QWORD))v1[7];
    v1[7] = 0;
    v1[8] = 0;
    if (v12 != nullptr) {
    LABEL_19:
      (**v12)(v12);
      result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
          *(_QWORD*)*v3 + 24LL))(*v3, v12);
    }
  }
  v13 = (void (***)(_QWORD))v1[6];
  v1[6] = 0;
  if (v13 != nullptr) {
    (**v13)(v13);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v13);
  }
  v14 = (void (***)(_QWORD))v1[5];
  v1[5] = 0;
  if (v14 != nullptr) {
    (**v14)(v14);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v14);
  }
  v15 = (void (***)(_QWORD))v1[4];
  v1[4] = 0;
  if (v15 != nullptr) {
    (**v15)(v15);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v15);
  }
  v16 = (void (***)(_QWORD))v1[3];
  v1[3] = 0;
  if (v16 != nullptr) {
    (**v16)(v16);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v16);
  }
  v17 = (void (***)(_QWORD))v1[2];
  v1[2] = 0;
  if (v17 != nullptr) {
    (**v17)(v17);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v17);
  }
  v18 = (void (***)(_QWORD))v1[1];
  v1[1] = 0;
  if (v18 != nullptr) {
    (**v18)(v18);
    return (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v18);
  }
  return result;
}

#pragma GCC visibility pop
