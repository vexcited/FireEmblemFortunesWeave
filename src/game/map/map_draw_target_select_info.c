#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_map_MapDrawTargetSelectInfo_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* MapDrawTargetSelectInfo_Destructor(_QWORD* result, long double a2);
__int64 GameRoutine_1049fa0(_QWORD, _QWORD);
__int64 GameRoutine_6c9ab0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_773420(_QWORD, _QWORD);
__int64 GameRoutine_842b40(_QWORD, _QWORD);
__int64 UnitItem_6e8bc0(_QWORD, _QWORD);
__int64 game_UnitItemList_Find_70f780(_QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
extern __int64 (*GameData_2004368[])();
extern __int64 (*game_map_MapTargetSelector_vtable[])();
extern __int64 GameData_21c99b0;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d1f8[2];
void __attribute__((noreturn)) GameRoutine_60a310(void);
__int64
game_map_MapDrawTargetSelectInfo_GetHash_lambda0_Invoke(__int64 result,
                                                        unsigned __int16* a2);
__int64 game_map_MapDrawTargetSelectInfo_TryAddTargetItem(__int64 a1,
                                                          unsigned __int16* a2);
__int64 game_map_MapDrawTargetSelectInfo_EachTargetItem_lambda0_Invoke(
    __int64 result, unsigned __int16* a2);
__int64 game_map_MapDrawTargetSelectInfo_TryAddTargetSkill_lambda0_Invoke(
    __int64 result, __int16* a2);

_QWORD* MapDrawTargetSelectInfo_Destructor(_QWORD* result, long double a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 (***v9)(_QWORD);
  __int64 (***v10)(_QWORD);
  __int64 (***v11)(_QWORD);
  __int64 (***v12)(_QWORD);
  __int64 (**v13)(_QWORD);
  bool v14;
  __int64 v15;
  __int64 v16;

  v2 = (_QWORD*)result[1545];
  v3 = result;
  *result = game_map_MapDrawTargetSelectInfo_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v2 != nullptr) {
    do {
      v5 = (_QWORD*)*v2;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v6 = 128;
      }
      else {
        v6 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6, a2);
      v2 = v5;
    } while (v5 != nullptr);
  }
  v7 = v3[1543];
  v3[1543] = 0;
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v8 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, a2);
  }
  v9 = (__int64 (***)(_QWORD))v3[3];
  if (v9 != nullptr) {
    v10 = (__int64 (***)(_QWORD))v3[4];
    if (v9 == v10) {
      goto LABEL_16;
    }
    v11 = v10 - 7;
    v12 = v10 - 7;
    do {
      v13 = *v12;
      v12 -= 7;
      result = (_QWORD*)(*v13)(v11);
      v14 = v11 == v9;
      v11 = v12;
    } while (!v14);
    v15 = v3[3];
    v3[4] = v9;
    if (v15 != 0) {
    LABEL_16:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v16 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v16, a2);
    }
  }
  return result;
}

__int64

game_map_MapDrawTargetSelectInfo_GetHash_lambda0_Invoke(__int64 result,
                                                        unsigned __int16* a2)
{
  **(_QWORD**)(result + 8) ^=
      **(_QWORD**)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2) +
      (**(_QWORD**)(result + 8) << 12) + (**(_QWORD**)(result + 8) >> 4) -
      0x61C8864680B583EBLL;
  return result;
}

__int64 game_map_MapDrawTargetSelectInfo_TryAddTargetItem(__int64 a1,
                                                          unsigned __int16* a2)
{
  _QWORD* v2;
  __int64 v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  bool v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int16 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 result;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD v19[4];
  _QWORD* v20;
  __int64 (**v21)();
  _BYTE v22[4];
  unsigned __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  char v28;

  v2 = *(_QWORD**)(a1 + 8);
  v22[0] = 0;
  v21 = game_map_MapTargetSelector_vtable;
  v3 = v2[2];
  v26 = 0;
  HIDWORD(v27) = -1;
  v28 = 0;
  LODWORD(v24) = 0;
  v23 = 0;
  if (v3 != 0) {
    v4 = *(unsigned __int8*)(v3 + 2088);
    v5 = *(char*)(v3 + 585);
    LODWORD(v24) = *(_DWORD*)(v3 + 592);
    v6 = *(char*)(v3 + 584);
    v22[0] = v4;
    v7 = v4 == 0;
    v23 = __PAIR64__(v5, v6);
  }
  else {
    v7 = true;
  }
  LODWORD(v27) = 0;
  BYTE4(v24) = 3;
  v8 = game_UnitItemList_Find_70f780(
      v3 + 828, *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2));
  v25 = v8;
  if ((v8 & 0x80000000) != 0) {
    v26 = 0;
  }
  else if (!v7) {
    v9 = v8;
    if (game_UnitPool_Get(v22) != 0) {
      v10 = game_UnitPool_Get(v22) + 8LL * v9;
      v11 = *(_WORD*)(v10 + 828);
      BYTE2(v26) = *(_BYTE*)(v10 + 830);
      LOWORD(v26) = v11;
      BYTE3(v26) = *(_BYTE*)(v10 + 831);
      HIDWORD(v26) = *(_DWORD*)(v10 + 832);
    }
  }
  v19[0] = GameData_2004368;
  v19[1] = v2;
  v20 = v19;
  GameRoutine_773420(&v21, v19);
  if (v20 == v19) {
    v12 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_14;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v20 + v12))((__int64)v20);
LABEL_14:
  v13 = v2[4];
  if (v13 >= v2[5]) {
    result = GameRoutine_1049fa0(v2 + 3, &v21);
  }
  else {
    result = v13 + 56;
    v15 = GameData_212d1f8[0];
    *(_QWORD*)(v13 + 32) = 0;
    *(_QWORD*)v13 = v15 + 2;
    *(_BYTE*)(v13 + 8) = v22[0];
    v16 = v23;
    v17 = v24;
    *(_DWORD*)(v13 + 28) = v25;
    *(_QWORD*)(v13 + 20) = v17;
    *(_QWORD*)(v13 + 12) = v16;
    *(_QWORD*)(v13 + 32) = v26;
    v18 = v27;
    LOBYTE(v17) = v28;
    *(_QWORD*)v13 = game_map_MapTargetSelector_vtable;
    *(_BYTE*)(v13 + 48) = v17;
    *(_QWORD*)(v13 + 40) = v18;
  }
  v2[4] = result;
  return result;
}

__int64 game_map_MapDrawTargetSelectInfo_EachTargetItem_lambda0_Invoke(
    __int64 result, unsigned __int16* a2)
{
  __int64 v2;
  unsigned int v3;
  int v4;
  __int64 v7;
  __int64 v8;

  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2);
  v3 = *(unsigned __int8*)(v2 + 72);
  v4 = *(unsigned __int8*)(v2 + 73);
  if (v3 <= 7 && v4 == 1) {
    v7 = result;
    result = UnitItem_6e8bc0(a2, *(_QWORD*)(*(_QWORD*)(result + 8) + 16LL));
    if ((result & 1) != 0) {
      v8 = *(_QWORD*)(*(_QWORD*)(v7 + 16) + 32LL);
      if (v8 == 0) {
        GameRoutine_60a310();
      }
      return (*(__int64 (**)(__int64, unsigned __int16*))(*(_QWORD*)v8 + 48LL))(
          v8, a2);
    }
  }
  return result;
}

__int64 game_map_MapDrawTargetSelectInfo_TryAddTargetSkill_lambda0_Invoke(
    __int64 result, __int16* a2)
{
  __int64 v3;
  __int64 v4;
  __int16 v5;
  __int64 v6;
  __int16 v7;
  int v8;

  if ((*(_BYTE*)(*(_QWORD*)(result + 8) + 8LL) & 1) == 0) {
    v3 = result;
    v4 = *(_QWORD*)(*(_QWORD*)(result + 16) + 16LL);
    v5 = **(_DWORD**)(result + 24);
    v8 = 0;
    GameRoutine_842b40(&v8, *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                       8LL * (v5 & 0xFFF)));
    result = GameRoutine_6c9ab0(v4, &v8, a2);
    if ((result & 1) == 0) {
      v6 = *(_QWORD*)(v3 + 8);
      if (*(_BYTE*)(v6 + 8) == 1) {
        v7 = *a2;
        *(_BYTE*)(v6 + 2) = *((_BYTE*)a2 + 2);
        *(_WORD*)v6 = v7;
        *(_BYTE*)(v6 + 3) = *((_BYTE*)a2 + 3);
        *(_DWORD*)(v6 + 4) = *((_DWORD*)a2 + 1);
      }
      else {
        *(_QWORD*)v6 = 0;
        *(_QWORD*)v6 = *(_QWORD*)a2;
        *(_BYTE*)(v6 + 8) = 1;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
