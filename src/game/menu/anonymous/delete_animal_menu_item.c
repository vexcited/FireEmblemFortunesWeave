#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameHr_e92660(__int64, _BYTE**, const char*, __int64, __int64, __int64);
_QWORD* ProcObeliskDepositoryRideMenu_9d0620(__int64, __int64, __int64, __int64,
                                             __int64);
__attribute__((swiftcall)) void
RidePool_93c6a0(PSEUDO_X8, __int64, unsigned __int8*, __int64, char);
__int64* game_8aef60(__int64, unsigned __int16*);
__int64* game_UnitPool_Get(_BYTE*);
__int64 GameRoutine_932600(unsigned __int8*);
__int64 ItemSeq_8af940(__int64, unsigned __int16**, __int64, const char**,
                       const char**, char);
__int64 Message_16f9b50(__int64);
__int64 RidePool_93d820(__int64 result);
char* GameHr_67ed20(_QWORD*);
extern __int64 (*GameData_2125e40[])();
extern __int64 (*GameData_2125ec0[])();
extern __int64 GameData_212cf88[4];
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 strlen(const char*);
unsigned __int8* Unit_931120(unsigned __int8*);
void* game_97b2f0(__int64);
void ObeliskDestinyMenuItem_1a06b90(_QWORD*, __int64, int);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_menu_anonymous_DeleteAnimalMenuItem_ACall(_QWORD* a1);
__int64
game_menu_anonymous_DeleteAnimalMenuItem_ACall_closure_Invoke(__int64 a1);

__int64 game_menu_anonymous_DeleteAnimalMenuItem_ACall(_QWORD* a1)
{
  __int64 v2;
  _BYTE* v3;
  int v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  const char* v8;
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
    v21_.v21[0] = GameData_2125e40;
    v21_.v21[1] = a1;
    v21_.v22 = v21_.v21;
    v19_.v19[0] = GameData_2125ec0;
    v17_.v17[0] = GameData_2125ec0;
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
    v8 = (const char*)game_97b2f0((__int64)(v5 + 263));
  }
  else {
    v8 = GameHr_67ed20((_QWORD*)v5[49]);
  }
  v21_.v21[0] = GameData_2125e40;
  v21_.v21[1] = a1;
  v19_.v20 = v19_.v19;
  v17_.v18 = v17_.v17;
  v21_.v22 = v21_.v21;
  v19_.v19[0] = GameData_2125ec0;
  v17_.v17[0] = GameData_2125ec0;
  v11 = GameHr_e92660(v7, (_BYTE**)&v23, v8, (__int64)v21_.v21,
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

game_menu_anonymous_DeleteAnimalMenuItem_ACall_closure_Invoke(__int64 a1)
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
  unsigned __int8* v11;
  __int64 v12;
  unsigned __int8* v13;
  unsigned int v14;
  bool v15;
  int v16;
  const char* v19;
  const char* v20[2];
  struct {
    const char* v21;
    const char* v22;
    __int64 v23;
  } v21_;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = GameData_212cf88[0];
  v3 = Unit_931120(
      (unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] +
                                               8LL) +
                                    120LL) +
                         ((__int64)*(int*)(v1 + 40) << 6)));
  v4 = GameRoutine_932600(
      (unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 8LL) + 120LL) +
                         ((__int64)*(int*)(v1 + 40) << 6)));
  if (v4 != 0 && *(v5 = *(unsigned __int16**)(v4 + 24)) != 0) {
    v6 = *(_QWORD*)(v1 + 8);
    v21_.v22 = nullptr;
    v21_.v23 = 0;
    v21_.v21 = nullptr;
    v19 = (const char*)v3;
    v20[0] = "MID_ReleaseMenu_GetItem_Result";
    if (*(_QWORD*)(v6 + 152) != 0) {
      v7 = *(_QWORD*)(v6 + 152);
    }
    else {
      v7 = v6;
    }
    game_8aef60((__int64)&v21_.v21, v5);
    ItemSeq_8af940(v7, (unsigned __int16**)&v21_.v21, 0, v20, &v19, 0);
    if (v21_.v21 != nullptr) {
      v21_.v22 = v21_.v21;
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                    (__int64)v21_.v21);
    }
  }
  else {
    v9 = *(_QWORD*)(v1 + 8);
    v20[0] = (const char*)v3;
    if (*(_QWORD*)(v9 + 152) != 0) {
      v10 = *(_QWORD*)(v9 + 152);
    }
    else {
      v10 = v9;
    }
    v21_.v21 = "MID_ReleaseMenu_Result";
    v21_.v22 = (_BYTE*)(((__int128*)0x10LL) + 6);
    v20[1] = (const char*)strlen((const char*)v3);
    Message_16f9b50(v10);
  }
  RidePool_93d820(*(unsigned int*)(v1 + 40));
  v11 = *(unsigned __int8**)(v1 + 112);
  if (v11 != nullptr) {
    RidePool_93c6a0((void*)((__int64)&v21_.v21), *(_QWORD*)(*(_QWORD*)v2 + 8LL),
                    v11, 0, 1);
  }
  v12 = *(_QWORD*)(v1 + 8);
  v13 = *(unsigned __int8**)(v12 + 16);
  if (v13 != nullptr) {
    v14 = *v13;
    v15 = v14 > 0x10;
    v16 = (1 << v14) & 0x1CE00;
    if (!v15 && v16 != 0) {
      *(_WORD*)(v12 + 136) |= 0x80u;
    }
  }
  return 2;
}

#pragma GCC visibility pop
