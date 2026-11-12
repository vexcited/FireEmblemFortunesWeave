#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_GameSituation_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GameSituation_Destructor(_QWORD* a1);
__int64 GameSituation_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "GameSituation_DeletingDestructor");
_QWORD* GameRoutine_9010a0(_QWORD* result);
_QWORD* game_UnitPool_Find_6ead60(__int64*, _DWORD*);
__attribute__((swiftcall)) void game_907570(PSEUDO_X8, __int64);
__int64 AssetTableFile_7e8000(__int64);
__int64 AssetTableFile_7e95e0(__int64, __int64, unsigned int);
__int64 AssetTableFile_7e9aa0(__int64, __int64, __int64*);
__int64 GameConverge_8e7ca0(__int64, unsigned __int64*);
__int64 GameReliance_8e17a0(_QWORD*, __int64, __int64);
__int64 GameRoutine_7152e0();
__int64 GameRoutine_715440();
__int64 GameRoutine_9011a0(_QWORD*, __int16*);
__int64 GameRoutine_91c600(__int64);
__int64 GameSituation_906e20_alt1(_QWORD, _QWORD,
                                  _QWORD) __asm__("GameSituation_906e20");
__int64 Situation_7659e0(__int64, __int64);
__int64 TrickEntity_7d1480(__int64 result);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString(__int64 result);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (***GameData_212dae8)();
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64* game_vstring_kEmpty_ptr[2];
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21d9ce8;
extern __int64 GameData_21d9cf0;
extern __int64 GameData_21d9d00;
extern __int64 GameData_21d9d18;
extern __int64 GameData_21d9d20;
extern __int64 GameData_21d9d30;
extern __int64 GameData_21d9d38;
extern __int64 GameData_21d9d48;
extern __int64 GameData_21d9d50;
extern __int64 GameData_21d9d60;
extern __int64 GameData_21d9d68;
extern __int64 GameData_21d9d70;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char GameData_21d9d78;
extern int GameData_21d9d7c;
__int64 GameSituation_906320(__int64 a1, __int64* a2);
__int64 GameSituation_906440(__int64 a1, __int64* a2);
bool GameSituation_906560(__int64 a1, __int64* a2);
bool GameSituation_906690(__int64 a1, __int64* a2);
bool GameSituation_9067c0(__int64 a1, __int64* a2);
__int64 GameSituation_906910(__int64 a1, __int64* a2);
__int64* GameSituation_906a40(__int64 a1, __int64* a2);
__int64 GameSituation_906b70(__int64 a1, __int64* a2);
__int64 GameSituation_906c90(__int64 a1, __int64* a2);
__attribute__((swiftcall)) void
GameSituation_906e20(PSEUDO_X8 x8_, __int64 unused_int0, __int64 a1, char a2);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GameSituation_DeletingDestructor(_QWORD* a1);

__int64 GameSituation_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_GameSituation_vtable;
  result = a1[1];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    a1[1] = 0;
  }
  return result;
}

void GameSituation_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_GameSituation_vtable;
  v2 = a1[1];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[1] = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
}

__int64 GameSituation_906320(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  char v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  struct {
    __int64 v17;
    int v18;
    char v19;
    char v20;
    char gap14_[2];
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    char gap36_[4];
    __int64 v26;
    __int64 v27;
    _QWORD* v28;
  } v17_;
  int v29;
  __int64 v30;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 != 0) {
    v4 = game_GameModeData_instance_;
    if (game_gmap_GmapClock_instance_ != 0) {
      v5 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v5 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v6 = *(_QWORD*)v5;
    v17_.v18 = *(_DWORD*)(v5 + 8);
    v17_.v17 = v6;
    if (game_GameModeData_instance_ != 0) {
      v7 = *(_BYTE*)(game_GameModeData_instance_ + 12);
      v8 = *(_BYTE*)(game_GameModeData_instance_ + 15);
      v9 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v4 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    else {
      v7 = 0;
      v8 = 0;
      v9 = 0;
    }
    v17_.v19 = v7;
    v17_.v20 = v8;
    v17_.v21 = v9;
    v17_.v22 = v4;
    v10 = GameRoutine_715440();
    v11 = game_GameModeData_instance_;
    v17_.v23 = v10;
    if (game_GameModeData_instance_ != 0) {
      v11 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    }
    v17_.v24 = v11;
    v12 = GameRoutine_7152e0();
    v13 = game_GameModeData_instance_;
    v17_.v25 = v12;
    if (game_GameModeData_instance_ != 0) {
      v13 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v30 = v13;
    v29 = 241;
    v14 = game_UnitPool_Find_6ead60(&v30, &v29);
    v15 = *(_QWORD*)(v3 + 392);
    v17_.v28 = v14;
    if (v15 != 0) {
      v15 = *(_QWORD*)(*(_QWORD*)(v15 + 24) + 1784LL);
    }
    v17_.v26 = v15;
    v17_.v27 = v3;
  }
  else {
    game_907570((void*)((__int64)&v17_.v17), a2[1]);
  }
  return GameSituation_906e20_alt1(v2, &v17_.v17, 1);
}

__int64 GameSituation_906440(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  char v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  struct {
    __int64 v17;
    char gap8_[8];
    unsigned __int8 v18;
  } v17_;
  struct {
    __int64 v19;
    int v20;
    char v21;
    char v22;
    char gap78_[2];
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    char gap100_[4];
    __int64 v28;
    __int64 v29;
    _QWORD* v30;
  } v19_;
  int v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 != 0) {
    v4 = game_GameModeData_instance_;
    if (game_gmap_GmapClock_instance_ != 0) {
      v5 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v5 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v6 = *(_QWORD*)v5;
    v19_.v20 = *(_DWORD*)(v5 + 8);
    v19_.v19 = v6;
    if (game_GameModeData_instance_ != 0) {
      v7 = *(_BYTE*)(game_GameModeData_instance_ + 12);
      v8 = *(_BYTE*)(game_GameModeData_instance_ + 15);
      v9 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v4 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    else {
      v7 = 0;
      v8 = 0;
      v9 = 0;
    }
    v19_.v21 = v7;
    v19_.v22 = v8;
    v19_.v23 = v9;
    v19_.v24 = v4;
    v10 = GameRoutine_715440();
    v11 = game_GameModeData_instance_;
    v19_.v25 = v10;
    if (game_GameModeData_instance_ != 0) {
      v11 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    }
    v19_.v26 = v11;
    v12 = GameRoutine_7152e0();
    v13 = game_GameModeData_instance_;
    v19_.v27 = v12;
    if (game_GameModeData_instance_ != 0) {
      v13 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v17_.v17 = v13;
    v31 = 241;
    v14 = game_UnitPool_Find_6ead60(&v17_.v17, &v31);
    v15 = *(_QWORD*)(v3 + 392);
    v19_.v30 = v14;
    if (v15 != 0) {
      v15 = *(_QWORD*)(*(_QWORD*)(v15 + 24) + 1784LL);
    }
    v19_.v28 = v15;
    v19_.v29 = v3;
  }
  else {
    game_907570((void*)((__int64)&v19_.v19), a2[1]);
  }
  GameSituation_906e20_alt1(v2, &v19_.v19, 0);
  return v17_.v18;
}

bool GameSituation_906560(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  char v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  struct {
    __int64 v17[7];
    __int16 v18;
  } v17_;
  struct {
    __int64 v19;
    int v20;
    char v21;
    char v22;
    char gap78_[2];
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    char gap100_[4];
    __int64 v28;
    __int64 v29;
    _QWORD* v30;
  } v19_;
  int v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 != 0) {
    v4 = game_GameModeData_instance_;
    if (game_gmap_GmapClock_instance_ != 0) {
      v5 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v5 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v6 = *(_QWORD*)v5;
    v19_.v20 = *(_DWORD*)(v5 + 8);
    v19_.v19 = v6;
    if (game_GameModeData_instance_ != 0) {
      v7 = *(_BYTE*)(game_GameModeData_instance_ + 12);
      v8 = *(_BYTE*)(game_GameModeData_instance_ + 15);
      v9 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v4 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    else {
      v7 = 0;
      v8 = 0;
      v9 = 0;
    }
    v19_.v21 = v7;
    v19_.v22 = v8;
    v19_.v23 = v9;
    v19_.v24 = v4;
    v10 = GameRoutine_715440();
    v11 = game_GameModeData_instance_;
    v19_.v25 = v10;
    if (game_GameModeData_instance_ != 0) {
      v11 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    }
    v19_.v26 = v11;
    v12 = GameRoutine_7152e0();
    v13 = game_GameModeData_instance_;
    v19_.v27 = v12;
    if (game_GameModeData_instance_ != 0) {
      v13 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v17_.v17[0] = v13;
    v31 = 241;
    v14 = game_UnitPool_Find_6ead60(v17_.v17, &v31);
    v15 = *(_QWORD*)(v3 + 392);
    v19_.v30 = v14;
    if (v15 != 0) {
      v15 = *(_QWORD*)(*(_QWORD*)(v15 + 24) + 1784LL);
    }
    v19_.v28 = v15;
    v19_.v29 = v3;
  }
  else {
    game_907570((void*)((__int64)&v19_.v19), a2[1]);
  }
  GameSituation_906e20_alt1(v2, &v19_.v19, 0);
  return (v17_.v18 & 0x1E) == 0;
}

bool GameSituation_906690(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  char v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  struct {
    __int64 v17[7];
    __int16 v18;
  } v17_;
  struct {
    __int64 v19;
    int v20;
    char v21;
    char v22;
    char gap78_[2];
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    char gap100_[4];
    __int64 v28;
    __int64 v29;
    _QWORD* v30;
  } v19_;
  int v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 != 0) {
    v4 = game_GameModeData_instance_;
    if (game_gmap_GmapClock_instance_ != 0) {
      v5 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v5 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v6 = *(_QWORD*)v5;
    v19_.v20 = *(_DWORD*)(v5 + 8);
    v19_.v19 = v6;
    if (game_GameModeData_instance_ != 0) {
      v7 = *(_BYTE*)(game_GameModeData_instance_ + 12);
      v8 = *(_BYTE*)(game_GameModeData_instance_ + 15);
      v9 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v4 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    else {
      v7 = 0;
      v8 = 0;
      v9 = 0;
    }
    v19_.v21 = v7;
    v19_.v22 = v8;
    v19_.v23 = v9;
    v19_.v24 = v4;
    v10 = GameRoutine_715440();
    v11 = game_GameModeData_instance_;
    v19_.v25 = v10;
    if (game_GameModeData_instance_ != 0) {
      v11 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    }
    v19_.v26 = v11;
    v12 = GameRoutine_7152e0();
    v13 = game_GameModeData_instance_;
    v19_.v27 = v12;
    if (game_GameModeData_instance_ != 0) {
      v13 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v17_.v17[0] = v13;
    v31 = 241;
    v14 = game_UnitPool_Find_6ead60(v17_.v17, &v31);
    v15 = *(_QWORD*)(v3 + 392);
    v19_.v30 = v14;
    if (v15 != 0) {
      v15 = *(_QWORD*)(*(_QWORD*)(v15 + 24) + 1784LL);
    }
    v19_.v28 = v15;
    v19_.v29 = v3;
  }
  else {
    game_907570((void*)((__int64)&v19_.v19), a2[1]);
  }
  GameSituation_906e20_alt1(v2, &v19_.v19, 0);
  return (v17_.v18 & 0x11E) == 0;
}

bool GameSituation_9067c0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  char v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  struct {
    __int64 v17[6];
    __int64 v18;
    __int16 v19;
  } v17_;
  struct {
    __int64 v20;
    int v21;
    char v22;
    char v23;
    char gap78_[2];
    int v24;
    int v25;
    int v26;
    int v27;
    int v28;
    char gap100_[4];
    __int64 v29;
    __int64 v30;
    _QWORD* v31;
  } v20_;
  int v32;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 != 0) {
    v4 = game_GameModeData_instance_;
    if (game_gmap_GmapClock_instance_ != 0) {
      v5 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v5 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v6 = *(_QWORD*)v5;
    v20_.v21 = *(_DWORD*)(v5 + 8);
    v20_.v20 = v6;
    if (game_GameModeData_instance_ != 0) {
      v7 = *(_BYTE*)(game_GameModeData_instance_ + 12);
      v8 = *(_BYTE*)(game_GameModeData_instance_ + 15);
      v9 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v4 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    else {
      v7 = 0;
      v8 = 0;
      v9 = 0;
    }
    v20_.v22 = v7;
    v20_.v23 = v8;
    v20_.v24 = v9;
    v20_.v25 = v4;
    v10 = GameRoutine_715440();
    v11 = game_GameModeData_instance_;
    v20_.v26 = v10;
    if (game_GameModeData_instance_ != 0) {
      v11 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    }
    v20_.v27 = v11;
    v12 = GameRoutine_7152e0();
    v13 = game_GameModeData_instance_;
    v20_.v28 = v12;
    if (game_GameModeData_instance_ != 0) {
      v13 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v17_.v17[0] = v13;
    v32 = 241;
    v14 = game_UnitPool_Find_6ead60(v17_.v17, &v32);
    v15 = *(_QWORD*)(v3 + 392);
    v20_.v31 = v14;
    if (v15 != 0) {
      v15 = *(_QWORD*)(*(_QWORD*)(v15 + 24) + 1784LL);
    }
    v20_.v29 = v15;
    v20_.v30 = v3;
  }
  else {
    game_907570((void*)((__int64)&v20_.v20), a2[1]);
  }
  GameSituation_906e20_alt1(v2, &v20_.v20, 0);
  return (v17_.v19 & 0x19E) == 0 && (v17_.v18 == 0 || (v17_.v19 & 0x60) == 0 ||
                                     (*(_BYTE*)(v17_.v18 + 36) & 2) == 0);
}

__int64 GameSituation_906910(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  char v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  struct {
    __int64 v17[5];
    __int64 v18;
  } v17_;
  struct {
    __int64 v19;
    int v20;
    char v21;
    char v22;
    char gap78_[2];
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    char gap100_[4];
    __int64 v28;
    __int64 v29;
    _QWORD* v30;
  } v19_;
  int v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 != 0) {
    v4 = game_GameModeData_instance_;
    if (game_gmap_GmapClock_instance_ != 0) {
      v5 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v5 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v6 = *(_QWORD*)v5;
    v19_.v20 = *(_DWORD*)(v5 + 8);
    v19_.v19 = v6;
    if (game_GameModeData_instance_ != 0) {
      v7 = *(_BYTE*)(game_GameModeData_instance_ + 12);
      v8 = *(_BYTE*)(game_GameModeData_instance_ + 15);
      v9 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v4 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    else {
      v7 = 0;
      v8 = 0;
      v9 = 0;
    }
    v19_.v21 = v7;
    v19_.v22 = v8;
    v19_.v23 = v9;
    v19_.v24 = v4;
    v10 = GameRoutine_715440();
    v11 = game_GameModeData_instance_;
    v19_.v25 = v10;
    if (game_GameModeData_instance_ != 0) {
      v11 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    }
    v19_.v26 = v11;
    v12 = GameRoutine_7152e0();
    v13 = game_GameModeData_instance_;
    v19_.v27 = v12;
    if (game_GameModeData_instance_ != 0) {
      v13 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v17_.v17[0] = v13;
    v31 = 241;
    v14 = game_UnitPool_Find_6ead60(v17_.v17, &v31);
    v15 = *(_QWORD*)(v3 + 392);
    v19_.v30 = v14;
    if (v15 != 0) {
      v15 = *(_QWORD*)(*(_QWORD*)(v15 + 24) + 1784LL);
    }
    v19_.v28 = v15;
    v19_.v29 = v3;
  }
  else {
    game_907570((void*)((__int64)&v19_.v19), a2[1]);
  }
  GameSituation_906e20_alt1(v2, &v19_.v19, 0);
  if (v17_.v18 != 0) {
    return *(_QWORD*)(v17_.v18 + 64);
  }
  else {
    return 0;
  }
}

__int64* GameSituation_906a40(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  char v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  struct {
    __int64 v17[5];
    __int64 v18;
  } v17_;
  struct {
    __int64 v19;
    int v20;
    char v21;
    char v22;
    char gap78_[2];
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    char gap100_[4];
    __int64 v28;
    __int64 v29;
    _QWORD* v30;
  } v19_;
  int v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 != 0) {
    v4 = game_GameModeData_instance_;
    if (game_gmap_GmapClock_instance_ != 0) {
      v5 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v5 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v6 = *(_QWORD*)v5;
    v19_.v20 = *(_DWORD*)(v5 + 8);
    v19_.v19 = v6;
    if (game_GameModeData_instance_ != 0) {
      v7 = *(_BYTE*)(game_GameModeData_instance_ + 12);
      v8 = *(_BYTE*)(game_GameModeData_instance_ + 15);
      v9 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v4 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    else {
      v7 = 0;
      v8 = 0;
      v9 = 0;
    }
    v19_.v21 = v7;
    v19_.v22 = v8;
    v19_.v23 = v9;
    v19_.v24 = v4;
    v10 = GameRoutine_715440();
    v11 = game_GameModeData_instance_;
    v19_.v25 = v10;
    if (game_GameModeData_instance_ != 0) {
      v11 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    }
    v19_.v26 = v11;
    v12 = GameRoutine_7152e0();
    v13 = game_GameModeData_instance_;
    v19_.v27 = v12;
    if (game_GameModeData_instance_ != 0) {
      v13 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v17_.v17[0] = v13;
    v31 = 241;
    v14 = game_UnitPool_Find_6ead60(v17_.v17, &v31);
    v15 = *(_QWORD*)(v3 + 392);
    v19_.v30 = v14;
    if (v15 != 0) {
      v15 = *(_QWORD*)(*(_QWORD*)(v15 + 24) + 1784LL);
    }
    v19_.v28 = v15;
    v19_.v29 = v3;
  }
  else {
    game_907570((void*)((__int64)&v19_.v19), a2[1]);
  }
  GameSituation_906e20_alt1(v2, &v19_.v19, 0);
  if (v17_.v18 != 0) {
    return (__int64*)(v17_.v18 + 72);
  }
  else {
    return game_vstring_kEmpty_ptr[0];
  }
}

__int64 GameSituation_906b70(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  char v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  struct {
    __int64 v17;
    char gap8_[9];
    unsigned __int8 v18;
  } v17_;
  struct {
    __int64 v19;
    int v20;
    char v21;
    char v22;
    char gap78_[2];
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    char gap100_[4];
    __int64 v28;
    __int64 v29;
    _QWORD* v30;
  } v19_;
  int v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 != 0) {
    v4 = game_GameModeData_instance_;
    if (game_gmap_GmapClock_instance_ != 0) {
      v5 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v5 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v6 = *(_QWORD*)v5;
    v19_.v20 = *(_DWORD*)(v5 + 8);
    v19_.v19 = v6;
    if (game_GameModeData_instance_ != 0) {
      v7 = *(_BYTE*)(game_GameModeData_instance_ + 12);
      v8 = *(_BYTE*)(game_GameModeData_instance_ + 15);
      v9 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v4 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    else {
      v7 = 0;
      v8 = 0;
      v9 = 0;
    }
    v19_.v21 = v7;
    v19_.v22 = v8;
    v19_.v23 = v9;
    v19_.v24 = v4;
    v10 = GameRoutine_715440();
    v11 = game_GameModeData_instance_;
    v19_.v25 = v10;
    if (game_GameModeData_instance_ != 0) {
      v11 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    }
    v19_.v26 = v11;
    v12 = GameRoutine_7152e0();
    v13 = game_GameModeData_instance_;
    v19_.v27 = v12;
    if (game_GameModeData_instance_ != 0) {
      v13 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v17_.v17 = v13;
    v31 = 241;
    v14 = game_UnitPool_Find_6ead60(&v17_.v17, &v31);
    v15 = *(_QWORD*)(v3 + 392);
    v19_.v30 = v14;
    if (v15 != 0) {
      v15 = *(_QWORD*)(*(_QWORD*)(v15 + 24) + 1784LL);
    }
    v19_.v28 = v15;
    v19_.v29 = v3;
  }
  else {
    game_907570((void*)((__int64)&v19_.v19), a2[1]);
  }
  GameSituation_906e20_alt1(v2, &v19_.v19, 0);
  return v17_.v18;
}

__int64 GameSituation_906c90(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  char v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  unsigned int v16;
  struct {
    __int64 v18;
    char gap8_[8];
    char v19;
    unsigned __int8 v20;
  } v18_;
  struct {
    __int64 v21;
    int v22;
    char v23;
    char v24;
    char gap78_[2];
    int v25;
    int v26;
    int v27;
    int v28;
    int v29;
    char gap100_[4];
    __int64 v30;
    __int64 v31;
    _QWORD* v32;
  } v21_;
  int v33;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 != 0) {
    v4 = game_GameModeData_instance_;
    if (game_gmap_GmapClock_instance_ != 0) {
      v5 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v5 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v6 = *(_QWORD*)v5;
    v21_.v22 = *(_DWORD*)(v5 + 8);
    v21_.v21 = v6;
    if (game_GameModeData_instance_ != 0) {
      v7 = *(_BYTE*)(game_GameModeData_instance_ + 12);
      v8 = *(_BYTE*)(game_GameModeData_instance_ + 15);
      v9 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v4 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    else {
      v7 = 0;
      v8 = 0;
      v9 = 0;
    }
    v21_.v23 = v7;
    v21_.v24 = v8;
    v21_.v25 = v9;
    v21_.v26 = v4;
    v10 = GameRoutine_715440();
    v11 = game_GameModeData_instance_;
    v21_.v27 = v10;
    if (game_GameModeData_instance_ != 0) {
      v11 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    }
    v21_.v28 = v11;
    v12 = GameRoutine_7152e0();
    v13 = game_GameModeData_instance_;
    v21_.v29 = v12;
    if (game_GameModeData_instance_ != 0) {
      v13 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v18_.v18 = v13;
    v33 = 241;
    v14 = game_UnitPool_Find_6ead60(&v18_.v18, &v33);
    v15 = *(_QWORD*)(v3 + 392);
    v21_.v32 = v14;
    if (v15 != 0) {
      v15 = *(_QWORD*)(*(_QWORD*)(v15 + 24) + 1784LL);
    }
    v21_.v30 = v15;
    v21_.v31 = v3;
  }
  else {
    game_907570((void*)((__int64)&v21_.v21), a2[1]);
  }
  GameSituation_906e20_alt1(v2, &v21_.v21, 0);
  if ((unsigned int)v18_.v20 - 1 >= 2) {
    v16 = 1;
  }
  else {
    v16 = 2;
  }
  if (v18_.v19 == 2) {
    return v16;
  }
  else {
    return 0;
  }
}

__attribute__((swiftcall)) void

GameSituation_906e20(PSEUDO_X8 x8_, __int64 unused_int0, __int64 a1, char a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  int v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  _QWORD* v20;
  __int64 v21;
  int v22;
  int v23;
  _DWORD* v25;
  __int64 v26;
  char v27;
  __int64 v28;
  unsigned int v29;
  int v30;
  char v31;
  int* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 result;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 (***v51)();
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 (*v55)(_QWORD);
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 (*v63)(_QWORD);
  __int64 v64;
  _QWORD* v65;
  __int64 v66;
  struct {
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
    char gap200_[8];
    __int64 v91;
    char gap216_[8];
    __int64 v92;
    char gap232_[96];
    __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
    int v101;
    char gap396_[4];
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
  } v67_;
  _QWORD v111[3];

  *(_BYTE*)(a3 + 16) = 0;
  *(_QWORD*)(a3 + 24) = 0;
  *(_QWORD*)(a3 + 32) = 0;
  *(_QWORD*)(a3 + 40) = 0;
  *(_QWORD*)(a3 + 48) = 0;
  *(_WORD*)(a3 + 56) = 0;
  v6 = *(_QWORD**)(a1 + 40);
  v7 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)a3 = v6;
  *(_QWORD*)(a3 + 8) = v7;
  v8 = GameRoutine_9010a0(v6);
  if (v8 != nullptr) {
    v9 = GameRoutine_9011a0(v8, (__int16*)a1);
  }
  else {
    v9 = 0;
  }
  v10 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a3 + 32) = v9;
  if (v10 != 0) {
    v11 = *(_QWORD*)(v10 + 440);
    v12 = 3;
    if (v11 != 0) {
      v13 = *(unsigned __int8*)(v11 + 16);
      if (v13 == 6) {
        v14 = 4;
      }
      else {
        v14 = 3;
      }
      if (v13 == 5) {
        v12 = 2;
      }
      else {
        v12 = v14;
      }
    }
  }
  else {
    v15 = *(_QWORD*)(a1 + 40);
    if (v15 == 0) {
      v12 = 0;
      LOBYTE(v19) = 0;
      *(_BYTE*)(a3 + 16) = 0;
      v20 = *(_QWORD**)(a1 + 48);
      if (v20 == nullptr) {
        goto LABEL_72;
      }
      goto LABEL_29;
    }
    v67_.v68 = *(_QWORD*)(*(_QWORD*)(v15 + 24) + 1080LL);
    v67_.v67 = game_HashString(v67_.v68);
    if (game_GameModeData_instance_ != 0 &&
            (v16 = game_GameVariableTable_Find(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)&v67_.v67)) != 0 &&
            *(_DWORD*)(v16 + 32) != 0 ||
        (*(_BYTE*)(v15 + 49) & 1) != 0 && game_GameModeData_instance_ != 0 &&
            (*(_BYTE*)(v15 + 49) & 8) == 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
            (GameConverge_8e7ca0(*(_QWORD*)(game_GameModeData_instance_ + 176),
                                 (unsigned __int64*)v15) &
             1) == 0) {
      v12 = 2;
    }
    else {
      v12 = 1;
    }
  }
  v17 = *(_QWORD*)(a1 + 40);
  *(_BYTE*)(a3 + 16) = v12;
  if (v17 != 0 && game_GameModeData_instance_ != 0 &&
      (v18 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)(*(_QWORD*)(v17 + 24) + 1112LL))) != 0) {
    v19 = *(_DWORD*)(v18 + 32);
    v20 = *(_QWORD**)(a1 + 48);
    if (v20 == nullptr) {
      goto LABEL_72;
    }
  }
  else {
    LOBYTE(v19) = 0;
    v20 = *(_QWORD**)(a1 + 48);
    if (v20 == nullptr) {
      goto LABEL_72;
    }
  }
LABEL_29:
  v21 = v20[55];
  if (v21 == 0) {
    goto LABEL_72;
  }
  v22 = *(unsigned __int8*)(v21 + 16);
  v23 = (1 << v22) & 0xF1;
  if (v22 != 3 && v22 != 0) {
    if (v23 == 0) {
      goto LABEL_72;
    }
  }
  else if (v23 == 0) {
  LABEL_48:
    v28 = v20[49];
    if (v28 != 0) {
      v29 = *(unsigned __int8*)(v28 + 50);
      if (v29 <= 0xA) {
        LOBYTE(v30) = 1;
        if (((1 << v29) & 0x21E) != 0) {
          *(_BYTE*)(a3 + 17) = 0;
          if ((a2 & 1) != 0) {
            goto LABEL_74;
          }
          goto LABEL_82;
        }
        if (((1 << v29) & 0x1E0) != 0) {
          goto LABEL_73;
        }
        if (v29 == 10) {
          if (game_GameModeData_instance_ != 0) {
            *(_BYTE*)(a3 + 17) =
                *(_BYTE*)(game_GameModeData_instance_ + 12) != 1;
            if ((a2 & 1) != 0) {
              goto LABEL_74;
            }
            goto LABEL_82;
          }
        LABEL_81:
          *(_BYTE*)(a3 + 17) = 1;
          if ((a2 & 1) != 0) {
            goto LABEL_74;
          }
        LABEL_82:
          v37 = 0;
          goto LABEL_83;
        }
      }
      if (v29 != 0) {
      LABEL_72:
        LOBYTE(v30) = v19;
        goto LABEL_73;
      }
    }
    if (*(_BYTE*)(a1 + 12) == 0) {
      goto LABEL_81;
    }
    if (game_GameModeData_instance_ == 0 ||
        (v30 = *(_DWORD*)(game_GameModeData_instance_ + 60)) != 1) {
      if (GameData_21ca2f8 != 0) {
        if ((unsigned __int8)Situation_7659e0(GameData_21ca2f8, (__int64)v20) ==
            1) {
          v31 = 0;
        }
        else {
          v31 = v19;
        }
        *(_BYTE*)(a3 + 17) = v31;
        if ((a2 & 1) != 0) {
          goto LABEL_74;
        }
        goto LABEL_82;
      }
      goto LABEL_72;
    }
  LABEL_73:
    *(_BYTE*)(a3 + 17) = v30;
    if ((a2 & 1) == 0) {
      goto LABEL_82;
    }
  LABEL_74:
    v67_.v91 = 0;
    v67_.v92 = 0;
    v67_.v67 = 0;
    v67_.v68 = 0;
    v67_.v69 = 0;
    v67_.v70 = 0;
    v67_.v71 = 0;
    v67_.v72 = 0;
    v67_.v73 = 0;
    v67_.v74 = 0;
    v67_.v75 = 0;
    v67_.v76 = 0;
    v67_.v77 = 0;
    v67_.v78 = 0;
    v67_.v79 = 0;
    v67_.v80 = 0;
    v67_.v101 = 1065353216;
    v32 = (int*)GameData_21d9d18;
    v33 = GameData_21d9d20;
    v67_.v81 = 0;
    v67_.v82 = 0;
    v67_.v83 = 0;
    v67_.v84 = 0;
    v67_.v85 = 0;
    v67_.v86 = 0;
    v67_.v87 = 0;
    v67_.v88 = 0;
    v67_.v89 = 0;
    v67_.v90 = 0;
    v67_.v93 = 0;
    v67_.v94 = 0;
    v67_.v96 = 0;
    v67_.v97 = 0;
    v67_.v98 = 0;
    v67_.v99 = 0;
    v67_.v100 = 0;
    v67_.v102 = 0;
    v67_.v103 = 0;
    v67_.v104 = 0;
    v67_.v105 = 0;
    v67_.v106 = 0;
    v67_.v107 = 0;
    v67_.v108 = 0;
    v67_.v109 = 0;
    v67_.v110 = 0;
    if (GameData_21d9d18 != GameData_21d9d20) {
      do {
        v34 = *v32++;
        *(_QWORD*)(GameData_21d9d00 + 8 * v34) = 0;
      } while (v32 != (int*)v33);
      v32 = (int*)GameData_21d9d18;
    }
    GameData_21d9d20 = (__int64)v32;
    GameData_21d9d60 = 0;
    GameData_21d9d68 = 0;
    GameData_21d9d70 = 0;
    GameData_21d9d78 = 8;
    GameData_21d9d7c = 0;
    GameData_21d9cf0 = GameData_21d9ce8;
    GameData_21d9d50 = GameData_21d9d48;
    GameData_21d9d38 = GameData_21d9d30;
    v35 = *(_QWORD*)(a1 + 48);
    if (v35 != 0) {
      AssetTableFile_7e9aa0((__int64)&v67_.v67, v35,
                            game_vstring_kEmpty_ptr[0]);
    }
    else {
      v36 = *(_QWORD*)(a1 + 40);
      GameData_21d9d20 = (__int64)v32;
      GameData_21d9d38 = GameData_21d9d30;
      GameData_21d9d50 = GameData_21d9d48;
      GameData_21d9d60 = 0;
      GameData_21d9d68 = 0;
      GameData_21d9d70 = 0;
      GameData_21d9d78 = 8;
      GameData_21d9d7c = 0;
      AssetTableFile_7e95e0((__int64)&v67_.v67, v36, 0);
      AssetTableFile_7e8000((__int64)&v67_.v67);
    }
    v37 = v67_.v95;
    TrickEntity_7d1480((__int64)&v67_.v67);
  LABEL_83:
    v38 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a3 + 24) = v37;
    v67_.v67 = v38;
    result = GameRoutine_91c600((__int64)&v67_.v67);
    *(_QWORD*)(a3 + 48) = result;
    if (result == 0) {
      LOWORD(v40) = 8;
      goto LABEL_107;
    }
    if ((unsigned __int8)(v12 - 2) < 3u) {
      v40 = 0x400040002uLL >> (16 * ((v12 - 2) & 0xFu));
      goto LABEL_107;
    }
    v41 = result;
    v67_.v68 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 24LL) + 1240LL);
    result = game_HashString(v67_.v68);
    v67_.v67 = result;
    if (game_GameModeData_instance_ == 0 ||
        (result = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v67_.v67)) == 0 ||
        *(_DWORD*)(result + 32) == 0) {
      LOWORD(v40) = 16;
      goto LABEL_107;
    }
    v42 = *(_QWORD*)(v41 + 24);
    v43 = *(_QWORD*)(v42 + 56);
    v44 = *(_QWORD*)(v42 + 64);
    if (v44 != v43) {
      while (1) {
        if (*(_QWORD*)v43 != 0) {
          v53 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v54 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)v43);
            if (v54 != 0) {
              v55 = *(__int64 (**)(_QWORD))(v54 + 72);
              v56 = *(_QWORD*)(v54 + 80);
              v57 = (_QWORD*)(v54 + (v56 >> 1));
              if ((v56 & 1) != 0) {
                v55 = *(__int64 (**)(_QWORD))((char*)v55 + *v57);
              }
              result = v55(v57);
            }
            else {
              result = 1;
            }
          }
          if (*(_BYTE*)(v43 + 16) != ((v53 == 0) | result & 1)) {
            break;
          }
        }
        v43 += 24;
        LOWORD(v40) = 16;
        if (v43 == v44) {
          goto LABEL_107;
        }
      }
    }
    if (*(_DWORD*)(a1 + 24) >= (int)*(unsigned __int16*)(v41 + 34)) {
      v45 = 0;
    }
    else {
      v45 = 64;
    }
    if (*(_WORD*)(v41 + 34) != 0) {
      v46 = v45;
    }
    else {
      v46 = 0;
    }
    if (*(_BYTE*)(v41 + 33) != 0) {
      v47 = *(_QWORD*)(a1 + 56);
      if (v47 == 0) {
      LABEL_126:
        v46 |= 0x20u;
        goto LABEL_127;
      }
      v48 = *(_QWORD*)(a1 + 40);
      v67_.v67 = 0;
      v67_.v68 = v48;
      if (v48 != 0) {
        v48 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v48 + 24) + 1784LL) + 272LL);
      }
      v49 = *(_QWORD*)(v47 + 392);
      v67_.v69 = v48;
      v111[0] = v47;
      v111[1] = v49;
      if (v49 != 0) {
        v50 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v49 + 24) + 1784LL) + 272LL);
        v111[2] = v50;
        v51 = GameData_212dae8;
        if (v48 == 0 || v50 == 0) {
        LABEL_122:
          if (*((_BYTE*)v51 + 10) != 0) {
            if (*((unsigned __int8*)v51 + 11) <
                (unsigned int)*(unsigned __int8*)(v41 + 33)) {
              v46 |= 0x20u;
            }
            goto LABEL_127;
          }
          goto LABEL_126;
        }
        v52 = *(_QWORD**)(game_GameModeData_instance_ + 128);
        result = GameReliance_8e17a0(v52, (__int64)&v67_.v67, (__int64)v111);
        if ((result & 0x80000000) == 0) {
          v51 = (__int64 (***)(void))(v52[1] + 56LL * (unsigned int)result);
          goto LABEL_122;
        }
      }
      v51 = &game_GameReliance_Impl_Data_vtable_ptr;
      goto LABEL_122;
    }
  LABEL_127:
    v58 = *(_QWORD*)(v41 + 24);
    v59 = *(_QWORD*)(v58 + 8);
    v60 = *(_QWORD*)(v58 + 16);
    if (v60 != v59) {
      while (1) {
        if (*(_QWORD*)v59 != 0) {
          v61 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v62 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)v59);
            if (v62 != 0) {
              v63 = *(__int64 (**)(_QWORD))(v62 + 72);
              v64 = *(_QWORD*)(v62 + 80);
              v65 = (_QWORD*)(v62 + (v64 >> 1));
              if ((v64 & 1) != 0) {
                v63 = *(__int64 (**)(_QWORD))((char*)v63 + *v65);
              }
              result = v63(v65);
            }
            else {
              result = 1;
            }
          }
          if (*(_BYTE*)(v59 + 16) != ((v61 == 0) | result & 1)) {
            break;
          }
        }
        v59 += 24;
        if (v59 == v60) {
          goto LABEL_139;
        }
      }
      v46 |= 0x80u;
    }
  LABEL_139:
    if ((*(_BYTE*)(v41 + 36) & 1) != 0 ||
        (v66 = *(_QWORD*)(a1 + 40)) != 0 && game_GameModeData_instance_ != 0 &&
            (result = game_GameVariableTable_Find(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)(*(_QWORD*)(v66 + 24) + 992LL))) != 0 &&
            *(_DWORD*)(result + 32) != 0) {
      if (v46 <= 1) {
        LOWORD(v40) = 1;
      }
      else {
        LOWORD(v40) = v46;
      }
    }
    else {
      LOWORD(v40) = v46 | 0x100;
    }
  LABEL_107:
    *(_WORD*)(a3 + 56) = v40;
    if (v9 != 0) {
      result = (__int64)GameRoutine_9010a0(*(_QWORD**)(v9 + 88));
      if (result != 0) {
        result = GameRoutine_9011a0((_QWORD*)result, (__int16*)a1);
        v9 = result;
      }
      *(_QWORD*)(a3 + 40) = v9;
    }
    {
      result;
      return;
    }
  }
  if (game_GameModeData_instance_ != 0 &&
          (*(_WORD*)(game_GameModeData_instance_ + 92) & 0x180) != 0 ||
      *(_BYTE*)(a1 + 12) == 0 || (unsigned __int8)v19 == 2) {
    v25 = (_DWORD*)game_g_shared_system_skills_ptr;
    LODWORD(v67_.v67) = *(_DWORD*)((_BYTE*)((_UNKNOWN**)0x8LL) +
                                   game_g_shared_system_skills_ptr) &
                        0xFFF;
    if ((game_HasSkill(v20 + 218, (unsigned int*)&v67_.v67) & 1) == 0) {
      LODWORD(v67_.v67) = *v25 & 0xFFF;
      if ((game_HasSkill(v20 + 218, (unsigned int*)&v67_.v67) & 1) == 0 ||
          ((v26 = v20[55]) == 0 ? (v27 = 9) : (v27 = *(_BYTE*)(v26 + 16)),
           ((1 << v27) & 0xF1) == 0)) {
        *(_BYTE*)(a3 + 17) = 2;
        if ((a2 & 1) != 0) {
          goto LABEL_74;
        }
        goto LABEL_82;
      }
    }
    goto LABEL_81;
  }
  goto LABEL_48;
}

#pragma GCC visibility pop
