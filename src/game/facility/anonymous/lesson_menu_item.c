#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1433810(void);
__int64 GameRoutine_60a020(_QWORD);
__int64 GameRoutine_871860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_125b8e0(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ffa390[])();
extern __int64 (*GameData_1ffa410[])();
extern __int64 GameData_21c9718;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212dcd0;
__int64 LessonMenuItem_ACall(_QWORD* a1);
__int64 GameRoutine_1433810_alt1(_QWORD, _QWORD) __asm__("GameRoutine_1433810");
extern __int64 GameData_21f3ff8;
__int64 game_facility_anonymous_LessonMenuItem_ACall_closure_Invoke(__int64 a1,
                                                                    __int64 a2);

__int64 LessonMenuItem_ACall(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  unsigned int v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  _QWORD v18[4];
  _QWORD* v19;
  _QWORD v20[4];
  _QWORD* v21;
  _QWORD v22[4];
  _QWORD* v23;
  __int16 v24;
  __int64 v25;
  char* v26;
  char* v27;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[11];
  v24 = 0;
  v3 = *(unsigned __int8*)(v2 + 48);
  if ((_DWORD)v3 == 1) {
    goto LABEL_10;
  }
  if ((_DWORD)v3 != 2) {
    goto LABEL_13;
  }
  v3 = *(_QWORD*)(v2 + 64);
  if (v3 == 0) {
    goto LABEL_13;
  }
  v4 = *(_BYTE**)(v2 + 104);
  if (v4 == nullptr) {
    goto LABEL_13;
  }
  v5 = (unsigned __int8)*v4;
  if (*v4 != 0) {
    if (GameData_21c9718 != 0 && (v7 = GameSubquestData_125b8e0()) != 0 &&
        *(_BYTE*)(v7 + 9) == 3) {
    LABEL_10:
      GameRoutine_60a020(&v24);
      v5 = (unsigned __int8)v24;
      v3 = v25;
    }
    else {
    LABEL_13:
      v5 = 0;
    }
  }
  if ((v5 & 1) == 0) {
    v3 = v5 >> 1;
  }
  if (v3 == 0) {
    v12 = a1[11];
    if (v12 != 0) {
      v13 = *(unsigned __int16*)(v12 + 16);
    }
    else {
      v13 = -1;
    }
    *(_DWORD*)(*GameData_212dcd0 + 8) = v13;
    GameRoutine_1433810();
    result = 2;
    if ((v24 & 1) == 0) {
      return result;
    }
    goto LABEL_44;
  }
  v8 = a1[1];
  if (*(_QWORD*)(v8 + 152) != 0) {
    v9 = *(_QWORD*)(v8 + 152);
  }
  else {
    v9 = a1[1];
  }
  if ((v5 & 1) != 0) {
    v10 = v26;
  }
  else {
    v10 = (char*)&v24 + 1;
  }
  v27 = v10;
  v21 = v20;
  v22[0] = GameData_1ffa390;
  v22[1] = a1;
  v23 = v22;
  v19 = v18;
  v20[0] = GameData_1ffa410;
  v18[0] = GameData_1ffa410;
  GameRoutine_871860(v9, &v27, v22, v20, v18);
  if (v19 == v18) {
    v11 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_30;
    }
    v11 = 40;
  }
  (*(void (**)(void*))(*v19 + v11))(v19);

LABEL_30:
  if (v21 == v20) {
    v14 = 32;
  }
  else {
    if (v21 == nullptr) {
      goto LABEL_35;
    }
    v14 = 40;
  }
  (*(void (**)(void*))(*v21 + v14))(v21);

LABEL_35:
  if (v23 == v22) {
    v15 = 32;
  }
  else {
    if (v23 == nullptr) {
      goto LABEL_40;
    }
    v15 = 40;
  }
  (*(void (**)(void*))(*v23 + v15))(v23);

LABEL_40:
  result = 12;
  if ((v24 & 1) == 0) {
    return result;
  }

LABEL_44:
  if (v26 != nullptr) {
    v16 = result;
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
    return v16;
  }
  return result;
}

__int64 game_facility_anonymous_LessonMenuItem_ACall_closure_Invoke(__int64 a1,
                                                                    __int64 a2)
{
  __int64 v2;
  int v3;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
  if (v2 != 0) {
    v3 = *(unsigned __int16*)(v2 + 16);
  }
  else {
    v3 = -1;
  }
  *(_DWORD*)(GameData_21f3ff8 + 8) = v3;
  GameRoutine_1433810_alt1(a1, a2);
  return 4;
}

#pragma GCC visibility pop
