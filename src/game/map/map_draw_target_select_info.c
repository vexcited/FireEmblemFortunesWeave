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
_WORD* game_UnitItemList_EachItem(_WORD* result, __int64);
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 GameRoutine_1049fa0_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_1049fa0");
__int64 ITarget_773420(__int64*, __int64);
__int64 game_UnitItemList_Find_70f780_alt1(unsigned __int16*, __int64) __asm__(
    "game_UnitItemList_Find_70f780");
extern __int64 (*GameData_20043e8[])();
extern __int64 (*GameData_2004468[])();
extern __int64* GameData_212c880[5];
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 game_map_MapDrawTargetSelectInfo_TryAddTargetSkill(__int64 a1,
                                                           _DWORD* a2);

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
      result = (_QWORD*)((
          __int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free)(
          *(_QWORD*)v4 + v6, (__int64)v2);
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
    result =
        (_QWORD*)((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free)(
            *(_QWORD*)v4 + v8, (__int64)v7);
  }
  v9 = (__int64 (***)(_QWORD))v3[3];
  if (v9 != nullptr) {
    v10 = (__int64 (***)(_QWORD))v3[4];
    if (v9 == v10) {
      v15 = (__int64)v9;
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
      return (_QWORD*)((
          __int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free)(
          *(_QWORD*)v4 + v16, (__int64)v15);
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
  int v8;
  int v9;
  __int64* v10;
  __int16 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 result;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  __int64 (**v21)();
  _BYTE v22[4];
  unsigned __int64 v23;
  __int64 v24;
  int v25;
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
  v8 = game_UnitItemList_Find_70f780_alt1(
      (unsigned __int16*)(v3 + 828),
      *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2));
  v25 = v8;
  if (v8 < 0) {
    v26 = 0;
  }
  else if (!v7) {
    v9 = v8;
    if (game_UnitPool_Get_alt1(v22) != nullptr) {
      v10 = &game_UnitPool_Get_alt1(v22)[v9];
      v11 = *((_WORD*)v10 + 414);
      BYTE2(v26) = *((_BYTE*)v10 + 830);
      LOWORD(v26) = v11;
      BYTE3(v26) = *((_BYTE*)v10 + 831);
      HIDWORD(v26) = *((_DWORD*)v10 + 208);
    }
  }
  v19_.v19[0] = GameData_2004368;
  v19_.v19[1] = v2;
  v19_.v20 = v19_.v19;
  ITarget_773420((__int64*)&v21, (__int64)v19_.v19);
  if (v19_.v20 == v19_.v19) {
    v12 = 32;
  }
  else {
    if (v19_.v20 == nullptr) {
      goto LABEL_14;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v19_.v20 + v12))((__int64)v19_.v20);
LABEL_14:
  v13 = v2[4];
  if (v13 >= v2[5]) {
    result = GameRoutine_1049fa0_alt1(v2 + 3, (__int64)&v21);
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

__int64 game_map_MapDrawTargetSelectInfo_TryAddTargetSkill(__int64 a1,
                                                           _DWORD* a2)
{
  _QWORD* v2;
  __int64 v4;
  _WORD* v5;
  __int64 i;
  __int64 result;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  bool v13;
  int v14;
  int v15;
  __int64* v16;
  __int16 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    _QWORD v26[4];
    _QWORD* v27;
  } v26_;
  __int64 (**v28)();
  struct {
    _BYTE v29[24];
    __int64* v30;
    __int64 v31;
    char v32;
  } v29_;
  struct {
    unsigned __int16 v33;
    char gap118_[6];
    char v34;
  } v33_;

  v2 = *(_QWORD**)(a1 + 8);
  LOBYTE(v33_.v33) = 0;
  v33_.v34 = 0;
  v4 = v2[2];
  v28 = GameData_20043e8;
  *(_QWORD*)v29_.v29 = &v33_.v33;
  *(_QWORD*)&v29_.v29[8] = v2;
  *(_QWORD*)&v29_.v29[16] = a2;
  v29_.v30 = (__int64*)&v28;
  game_UnitItemList_EachItem((_WORD*)(v4 + 828), (__int64)&v28);
  v5 = (_WORD*)(v4 + 876);
  for (i = 24; i != 0; --i) {
    if (*v5 != 0) {
      if (v29_.v30 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(__int64*, _WORD*))(*v29_.v30 + 48))(v29_.v30, v5);
    }
    v5 += 4;
  }
  result = (__int64)v29_.v30;
  if (v29_.v30 == (__int64*)&v28) {
    v8 = 32;
  }
  else {
    if (v29_.v30 == nullptr) {
      goto LABEL_11;
    }
    v8 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v29_.v30 + v8))((__int64)v29_.v30);
LABEL_11:
  if (v33_.v34 != 1) {
    return result;
  }
  v9 = v2[2];
  v29_.v29[0] = 0;
  v29_.v30 = nullptr;
  v29_.v32 = 0;
  *(_DWORD*)&v29_.v29[12] = 0;
  *(_QWORD*)&v29_.v29[4] = 0;
  v28 = game_map_MapTargetSelector_vtable;
  HIDWORD(v29_.v31) = -1;
  if (v9 != 0) {
    v10 = *(unsigned __int8*)(v9 + 2088);
    v11 = *(char*)(v9 + 585);
    *(_DWORD*)&v29_.v29[12] = *(_DWORD*)(v9 + 592);
    v12 = *(char*)(v9 + 584);
    v29_.v29[0] = v10;
    v13 = v10 == 0;
    *(_DWORD*)&v29_.v29[4] = v12;
    *(_DWORD*)&v29_.v29[8] = v11;
  }
  else {
    v13 = true;
  }
  LODWORD(v29_.v31) = 0;
  v29_.v29[16] = 5;
  v14 = game_UnitItemList_Find_70f780_alt1(
      (unsigned __int16*)(v9 + 828),
      *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v33_.v33));
  *(_DWORD*)&v29_.v29[20] = v14;
  if (v14 < 0) {
    v29_.v30 = nullptr;
  }
  else if (!v13) {
    v15 = v14;
    if (game_UnitPool_Get_alt1(v29_.v29) != nullptr) {
      v16 = &game_UnitPool_Get_alt1(v29_.v29)[v15];
      v17 = *((_WORD*)v16 + 414);
      BYTE2(v29_.v30) = *((_BYTE*)v16 + 830);
      LOWORD(v29_.v30) = v17;
      BYTE3(v29_.v30) = *((_BYTE*)v16 + 831);
      HIDWORD(v29_.v30) = *((_DWORD*)v16 + 208);
    }
  }
  v18 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (v18 != 0) {
    v19 = v29_.v31 & 0xFFFFF000 | *(_WORD*)(v18 + 16) & 0xFFF;
  }
  else {
    v19 = v29_.v31 & 0xFFFFF000;
  }
  LODWORD(v29_.v31) = v19;
  v26_.v26[0] = GameData_2004468;
  v26_.v26[1] = v2;
  v26_.v27 = v26_.v26;
  ITarget_773420((__int64*)&v28, (__int64)v26_.v26);
  if (v26_.v27 == v26_.v26) {
    v20 = 32;
    goto LABEL_27;
  }
  if (v26_.v27 != nullptr) {
    v20 = 40;
  LABEL_27:
    (*(void (**)(__int64))(*v26_.v27 + v20))((__int64)v26_.v27);
  }
  v21 = v2[4];
  if (v21 >= v2[5]) {
    result = GameRoutine_1049fa0_alt1(v2 + 3, (__int64)&v28);
  }
  else {
    result = v21 + 56;
    v22 = GameData_212d1f8[0];
    *(_QWORD*)(v21 + 32) = 0;
    *(_QWORD*)v21 = v22 + 2;
    *(_BYTE*)(v21 + 8) = v29_.v29[0];
    v23 = *(_QWORD*)&v29_.v29[4];
    v24 = *(_QWORD*)&v29_.v29[12];
    *(_DWORD*)(v21 + 28) = *(_DWORD*)&v29_.v29[20];
    *(_QWORD*)(v21 + 20) = v24;
    *(_QWORD*)(v21 + 12) = v23;
    *(_QWORD*)(v21 + 32) = v29_.v30;
    v25 = v29_.v31;
    LOBYTE(v24) = v29_.v32;
    *(_QWORD*)v21 = game_map_MapTargetSelector_vtable;
    *(_BYTE*)(v21 + 48) = v24;
    *(_QWORD*)(v21 + 40) = v25;
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
