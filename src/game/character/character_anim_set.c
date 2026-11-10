#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7f7720(_QWORD);
__int64* game_character_CharacterAnimSet_LoadAsync_lambda0_Invoke(__int64 a1);
__int64 GameRoutine_1075d50(__int64, __int64);
extern __int64 (*GameData_2006430[])();
extern __int64 (*GameData_20065c0[])();
extern __int64 GameData_21323e8[4];
__int64 (***game_character_CharacterAnimSet_LoadAsync_lambda0_Invoke_1072100(
    __int64 (***result)(), __int64 a2, atomic_uint* a3))();

__int64 (***game_character_CharacterAnimSet_LoadAsync_lambda0_Invoke_1072100(
    __int64 (***result)(), __int64 a2, atomic_uint* a3))()
{
  int v5;
  __int64 (***v6)();
  int v7;
  unsigned int v8;
  signed int v9;
  signed int add;
  signed int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (**v17)();
  __int64 (*v18)();
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 (***v22)();
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  atomic_uint* v32;
  unsigned int v33;
  _QWORD v34[4];
  struct {
    __int64 (**v35)();
    __int64 v36;
    char gap64_[16];
    __int64 (***v37)();
  } v35_;

  v5 = *((_DWORD*)result + 2);
  if (v5 >= 1) {
    v6 = result;
    v32 = a3;
    v7 = v5 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                       *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                      2) &
                     0xFFFFFFFE) +
                    2);
    if (v7 <= 1) {
      v8 = 1;
    }
    else {
      v8 = v7;
    }
    while (1) {
      add = atomic_fetch_add(a3, v8);
      v9 = *((_DWORD*)v6 + 2);
      if (v9 > add) {
        break;
      }
    LABEL_6:
      v8 >>= 1;
      if (v8 <= 1) {
        v8 = 1;
      }
      if (add >= v9) {
        return result;
      }
    }
    v33 = v8;
    v11 = add + v8;
    v12 = add;
    v13 = 8LL * add;
    if (v9 >= v11) {
      v9 = v11;
    }
    v14 = v9;
    v15 = 48LL * add;
    while (1) {
      v17 = v6[2];
      v18 = *v17;
      v19 = *((_QWORD*)*v17 + v12);
      if (v19 == 0) {
        goto LABEL_15;
      }
      v35_.v37 = nullptr;
      v20 = GameRoutine_1075d50(v19, (__int64)&v35_.v35);
      if (v35_.v37 == &v35_.v35) {
        v21 = 4;
      }
      else {
        if (v35_.v37 == nullptr) {
          goto LABEL_22;
        }
        v21 = 5;
      }
      ((__int64 (*)(__int64))(*v35_.v37)[v21])((__int64)v35_.v37);
    LABEL_22:
      if ((v20 & 1) != 0) {
        v35_.v35 = GameData_20065c0;
        v35_.v36 = v19;
        v22 = &v35_.v35;
      }
      else {
        v22 = nullptr;
      }
      v35_.v37 = v22;
      v23 = *(_QWORD*)v17[1] + v15;
      result = *(__int64 (****)())(v23 + 32);
      *(_QWORD*)(v23 + 32) = 0;
      if ((__int64 (***)(void))v23 == result) {
        v24 = 4;
      }
      else {
        if (result == nullptr) {
          goto LABEL_30;
        }
        v24 = 5;
      }
      result = (__int64 (***)(void))((__int64 (*)(__int64))(*result)[v24])(
          (__int64)result);
    LABEL_30:
      if (v35_.v37 != nullptr) {
        if (v35_.v37 != &v35_.v35) {
          *(_QWORD*)(v23 + 32) = v35_.v37;
          goto LABEL_40;
        }
        *(_QWORD*)(v23 + 32) = v23;
        ((void (*)(__int64 (***)(void), __int64))(*v35_.v37)[3])(v35_.v37, v23);
      }
      else {
        *(_QWORD*)(v23 + 32) = 0;
      }
      result = v35_.v37;
      if (v35_.v37 == &v35_.v35) {
        v25 = 4;
        goto LABEL_39;
      }
      if (v35_.v37 != nullptr) {
        v25 = 5;
      LABEL_39:
        result = (__int64 (***)(void))((__int64 (*)(__int64))(*v35_.v37)[v25])(
            (__int64)v35_.v37);
      }
    LABEL_40:
      v26 = *((_QWORD*)v18 + v12);
      v27 = *(unsigned __int8*)(v26 + 8);
      v28 = *(_QWORD*)(v26 + 16);
      if ((v27 & 1) == 0) {
        v28 = v27 >> 1;
      }
      if (v28 != 0) {
        goto LABEL_15;
      }
      v29 = *(_QWORD*)v17[1];
      v30 = v29 + v15;
      if (*(_QWORD*)(v29 + v15 + 32) != 0) {
        goto LABEL_15;
      }
      result = &v35_.v35;
      v35_.v35 = GameData_2006430;
      v35_.v36 = (__int64)v18 + v13;
      v35_.v37 = &v35_.v35;
      if ((__int64 (***)(void))v30 == &v35_.v35) {
        goto LABEL_13;
      }
      if (v30 == *(_QWORD*)(v30 + 32)) {
        v35_.v37 = nullptr;
        v34[0] = GameData_2006430;
        v34[1] = (char*)v18 + v13;
        (*(void (**)(_QWORD, __int64 (***)(void)))(
            **(_QWORD**)(v30 + 32) + 24LL))(*(_QWORD*)(v30 + 32), &v35_.v35);
        (*(void (**)(_QWORD))(**(_QWORD**)(v30 + 32) + 32LL))(
            *(_QWORD*)(v30 + 32));
        *(_QWORD*)(v30 + 32) = 0;
        v35_.v37 = &v35_.v35;
        (*(void (**)(_QWORD*, __int64))(v34[0] + 24LL))(v34, v30);
        (*(void (**)(_QWORD*))(v34[0] + 32LL))(v34);
      }
      else {
        v31 = (_QWORD*)(v29 + v15);
        *v31 = GameData_2006430;
        v31[1] = v35_.v36;
        ((void (*)(__int64 (***)(void)))(*v35_.v37)[4])(v35_.v37);
        v35_.v37 = *(__int64 (****)())(v30 + 32);
      }
      *(_QWORD*)(v30 + 32) = v30;
      result = v35_.v37;
      if (v35_.v37 == &v35_.v35) {
      LABEL_13:
        v16 = 4;
      }
      else {
        if (v35_.v37 == nullptr) {
          goto LABEL_15;
        }
        v16 = 5;
      }
      result = (__int64 (***)(void))((__int64 (*)(__int64))(*result)[v16])(
          (__int64)result);
    LABEL_15:
      ++v12;
      v15 += 48;
      v13 += 8;
      if (v12 >= v14) {
        v9 = *((_DWORD*)v6 + 2);
        a3 = v32;
        v8 = v33;
        add = v12;
        goto LABEL_6;
      }
    }
  }
  return result;
}

__int64* game_character_CharacterAnimSet_LoadAsync_lambda0_Invoke(__int64 a1)
{
  __int64* result;
  __int64 v2;

  result = *(__int64**)(a1 + 8);
  v2 = *result;
  *result = 0;
  if (v2 != 0) {
    return (__int64*)GameRoutine_7f7720(result);
  }
  return result;
}

#pragma GCC visibility pop
