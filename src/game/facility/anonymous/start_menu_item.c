#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f8a870(__int64 result, __int64*);
extern __int64 GameData_212efc0;
__int64
game_facility_anonymous_StartMenuItem_CreateConfirmDialog_closure_Invoke(
    __int64 a1);
_QWORD* ScoutBaseProc_f6c060(__int64, const char**, const char*, __int64,
                             __int64, __int64);
__attribute__((swiftcall)) void game_185a130(PSEUDO_X8, unsigned __int8);
extern __int64 (*GameData_20b2d50[])();
extern __int64 (*GameData_20b2dd0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
_QWORD* game_facility_anonymous_StartMenuItem_CreateConfirmDialog(__int64 a1);

_QWORD* game_facility_anonymous_StartMenuItem_CreateConfirmDialog(__int64 a1)
{
  __int64 v2;
  unsigned __int8 v3;
  const char* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  struct {
    char v17;
    _BYTE v18[7];
    char gap160_[8];
    const char* v19;
  } v17_;
  const char* v20;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_BYTE*)(a1 + 83);
  v20 = "MID_HeroMenu_Start_Part3_Confirm";
  game_185a130((void*)((__int64)&v17_.v17), v3);
  v15_.v15[0] = GameData_20b2d50;
  v15_.v15[1] = a1;
  if ((v17_.v17 & 1) != 0) {
    v4 = v17_.v19;
  }
  else {
    v4 = v17_.v18;
  }
  v15_.v16 = v15_.v15;
  v13_.v14 = v13_.v13;
  v11_.v12 = v11_.v11;
  v13_.v13[0] = GameData_20b2dd0;
  v11_.v11[0] = GameData_20b2dd0;
  v5 = ScoutBaseProc_f6c060(v2, &v20, v4, (__int64)v15_.v15, (__int64)v13_.v13,
                            (__int64)v11_.v11);
  if (v11_.v12 == v11_.v11) {
    v6 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v6))((__int64)v11_.v12);
LABEL_9:
  if (v13_.v14 == v13_.v13) {
    v7 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_14;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v7))((__int64)v13_.v14);
LABEL_14:
  if (v15_.v16 == v15_.v15) {
    v8 = 32;
    goto LABEL_18;
  }
  if (v15_.v16 != nullptr) {
    v8 = 40;
  LABEL_18:
    (*(void (**)(__int64))(*v15_.v16 + v8))((__int64)v15_.v16);
  }
  if ((v17_.v17 & 1) != 0 && v17_.v19 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  (__int64)v17_.v19);
  }
  return v5;
}

__int64

game_facility_anonymous_StartMenuItem_CreateConfirmDialog_closure_Invoke(
    __int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v5[2];
  char v6;

  v2 = *(_QWORD*)GameData_212efc0;
  if (*(_QWORD*)GameData_212efc0 != 0) {
    v3 = *(_QWORD*)(a1 + 8);
    LODWORD(v5[0]) = 0;
    BYTE4(v5[0]) = *(_BYTE*)(v3 + 83);
    v5[1] = -1;
    v6 = 1;
    GameRoutine_f8a870(v2, v5);
  }
  return 4;
}

#pragma GCC visibility pop
