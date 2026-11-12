#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16f9b50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8aef60(_QWORD);
__int64 GameRoutine_931120(_QWORD);
__int64 GameRoutine_932600(_QWORD);
__int64 ItemSeq_8af940(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 RidePool_93d820(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 GameData_212cf88[4];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e030[4];
extern __int64* GameData_212e090[13];
__int64
game_facility_anonymous_ReleaseRideMenuItem_ACall_closure_Invoke(__int64 a1);
_QWORD* GameRoutine_e92660(__int64, _BYTE**, __int64, __int64, __int64,
                           __int64);
_QWORD* ProcObeliskDepositoryRideMenu_9d0620(__int64, __int64, __int64, __int64,
                                             __int64);
__int64* game_UnitPool_Get(_BYTE*);
__int64 ObeliskDestinyMenuItem_1a06b90(_QWORD*, __int64, int);
char* GameRoutine_67ed20(_QWORD*);
extern __int64 (*GameData_20af778[])();
extern __int64 (*GameData_20af7f8[])();
void* game_97b2f0(__int64);
__int64 game_facility_anonymous_ReleaseRideMenuItem_ACall(_QWORD* a1);
__int64* game_8aef60(__int64, unsigned __int16*);
__int64 GameRoutine_932600_alt1(unsigned __int8*) __asm__("GameRoutine_932600");
__int64 ItemSeq_8af940_alt1(__int64, __int64*, __int64, const char**,
                            const char**, char) __asm__("ItemSeq_8af940");
__int64 Message_16f9b50(__int64);
__int64 RidePool_93d820_alt1(__int64 result) __asm__("RidePool_93d820");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
unsigned __int8* Unit_931120(unsigned __int8*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 game_facility_anonymous_ReleaseRideMenuItem_ACall(_QWORD* a1)
{
  __int64 v2;
  _BYTE* v3;
  int v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  void* v8;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    _QWORD v17[4];
    _QWORD* v18;
  } v17_;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;
  const char* v23;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v4 = *(unsigned __int8*)(v2 + 3);
  v3 = (_BYTE*)(v2 + 3);
  if (v4 == 0) {
    v10 = a1[1];
    if (*(_QWORD*)(v10 + 152) != 0) {
      v7 = *(_QWORD*)(v10 + 152);
    }
    else {
      v7 = a1[1];
    }
  LABEL_13:
    v23 = "MID_ReleaselMenu_Confirm";
    v19_.v20 = v19_.v19;
    v17_.v18 = v17_.v17;
    v21_.v21[0] = GameData_20af778;
    v21_.v21[1] = a1;
    v21_.v22 = v21_.v21;
    v19_.v19[0] = GameData_20af7f8;
    v17_.v17[0] = GameData_20af7f8;
    v11 = ProcObeliskDepositoryRideMenu_9d0620(
        v7, (__int64)&v23, (__int64)v21_.v21, (__int64)v19_.v19,
        (__int64)v17_.v17);
    goto LABEL_16;
  }
  v5 = game_UnitPool_Get(v3);
  v6 = a1[1];
  if (*(_QWORD*)(v6 + 152) != 0) {
    v7 = *(_QWORD*)(v6 + 152);
  }
  else {
    v7 = a1[1];
  }
  if (v5 == nullptr) {
    goto LABEL_13;
  }
  v23 = "MID_ReleaseMenu_OwnerConfirm";
  if (*((_BYTE*)v5 + 2136) != 0) {
    v8 = game_97b2f0((__int64)(v5 + 263));
  }
  else {
    v8 = GameRoutine_67ed20((_QWORD*)v5[49]);
  }
  v21_.v21[0] = GameData_20af778;
  v21_.v21[1] = a1;
  v19_.v20 = v19_.v19;
  v17_.v18 = v17_.v17;
  v21_.v22 = v21_.v21;
  v19_.v19[0] = GameData_20af7f8;
  v17_.v17[0] = GameData_20af7f8;
  v11 = GameRoutine_e92660(v7, (_BYTE**)&v23, (__int64)v8, (__int64)v21_.v21,
                           (__int64)v19_.v19, (__int64)v17_.v17);
LABEL_16:
  v12 = v11;
  if (v17_.v18 == v17_.v17) {
    v13 = 32;
  }
  else {
    if (v17_.v18 == nullptr) {
      goto LABEL_21;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v17_.v18 + v13))((__int64)v17_.v18);
LABEL_21:
  if (v19_.v20 == v19_.v19) {
    v14 = 32;
  }
  else {
    if (v19_.v20 == nullptr) {
      goto LABEL_26;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v19_.v20 + v14))((__int64)v19_.v20);
LABEL_26:
  if (v21_.v22 == v21_.v21) {
    v15 = 32;
    goto LABEL_30;
  }
  if (v21_.v22 != nullptr) {
    v15 = 40;
  LABEL_30:
    (*(void (**)(__int64))(*v21_.v22 + v15))((__int64)v21_.v22);
  }
  v16 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  ObeliskDestinyMenuItem_1a06b90(v12 + 187, v16, 1);
  return 12;
}

__int64

game_facility_anonymous_ReleaseRideMenuItem_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int8* v3;
  __int64 v4;
  unsigned __int16* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  const char* v13[2];
  struct {
    const char* v14;
    const char* v15;
    __int64 v16;
  } v14_;
  const char* v17;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = GameData_212cf88[0];
  v3 = Unit_931120(
      (unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] +
                                               8LL) +
                                    120LL) +
                         ((__int64)*(int*)(v1 + 40) << 6)));
  v4 = GameRoutine_932600_alt1(
      (unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 8LL) + 120LL) +
                         ((__int64)*(int*)(v1 + 40) << 6)));
  if (v4 != 0 && *(v5 = *(unsigned __int16**)(v4 + 24)) != 0) {
    v6 = *(_QWORD*)(v1 + 8);
    v17 = (const char*)v3;
    v14_.v15 = nullptr;
    v14_.v16 = 0;
    v14_.v14 = nullptr;
    v13[0] = "MID_ReleaseMenu_GetItem_Result";
    if (*(_QWORD*)(v6 + 152) != 0) {
      v7 = *(_QWORD*)(v6 + 152);
    }
    else {
      v7 = v6;
    }
    game_8aef60((__int64)&v14_.v14, v5);
    ItemSeq_8af940_alt1(v7, (__int64*)&v14_.v14, 0, v13, &v17, 0);
    if (v14_.v14 != nullptr) {
      v14_.v15 = v14_.v14;
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, (__int64)v14_.v14);
    }
  }
  else {
    v9 = *(_QWORD*)(v1 + 8);
    v13[0] = (const char*)v3;
    if (*(_QWORD*)(v9 + 152) != 0) {
      v10 = *(_QWORD*)(v9 + 152);
    }
    else {
      v10 = v9;
    }
    v14_.v14 = "MID_ReleaseMenu_Result";
    v14_.v15 = (_BYTE*)(((__int128*)0x10LL) + 6);
    v13[1] = (const char*)strlen_alt1((const char*)v3);
    Message_16f9b50(v10);
  }
  RidePool_93d820_alt1(*(unsigned int*)(v1 + 40));
  v11 = __dynamic_cast(*(_QWORD*)(v1 + 8), GameData_212e030[0],
                       GameData_212e090[0], 0);
  (*(void (**)(__int64))(*(_QWORD*)v11 + 1112LL))(v11);
  return 2;
}

#pragma GCC visibility pop
