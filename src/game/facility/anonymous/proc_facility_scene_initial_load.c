#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_facility_ReleaseGroups();
extern __int64 (*GameData_2119820[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_FacilitySceneBase_vtable[])();
extern __int64 (
    *game_facility_anonymous_ProcFacilitySceneInitialLoad_vtable[])();
extern __int64 GameData_212dce8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2241730;
void GameRoutine_658c00(__int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ProcFacilitySceneInitialLoad_Destructor_1959ba0(__int64 a1);
void ProcFacilitySceneInitialLoad_DeletingDestructor(__int64 a1);
void ProcFacilitySceneInitialLoad_Destructor_1959e00(_QWORD* a1);

void ProcFacilitySceneInitialLoad_Destructor_1959ba0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;

  *(_QWORD*)a1 = game_facility_anonymous_ProcFacilitySceneInitialLoad_vtable;
  *(_QWORD*)(a1 + 152) = GameData_2119820;
  v2 = *(_QWORD**)(a1 + 224);
  if (v2 != nullptr) {
    *(_QWORD*)(a1 + 224) = 0;
    v3 = 40;
    v4 = 32;
    if (v2 == (_QWORD*)(a1 + 192)) {
      v3 = 32;
    }
    (*(void (**)(__int64))(*v2 + v3))((__int64)v2);
    v5 = *(_QWORD**)(a1 + 224);
    if (v5 == (_QWORD*)(a1 + 192)) {
      goto LABEL_7;
    }
    if (v5 != nullptr) {
      v4 = 40;
    LABEL_7:
      (*(void (**)(__int64))(*v5 + v4))((__int64)v5);
    }
  }
  *(_QWORD*)(a1 + 152) = game_facility_FacilitySceneBase_vtable;
  v6 = (_QWORD*)GameData_212dce8;
  v7 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
    }
    *v6 = 0;
  }
  game_facility_ReleaseGroups();
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
}

void ProcFacilitySceneInitialLoad_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v9;

  *(_QWORD*)a1 = game_facility_anonymous_ProcFacilitySceneInitialLoad_vtable;
  *(_QWORD*)(a1 + 152) = GameData_2119820;
  v2 = *(_QWORD**)(a1 + 224);
  if (v2 != nullptr) {
    *(_QWORD*)(a1 + 224) = 0;
    v3 = 40;
    v4 = 32;
    if (v2 == (_QWORD*)(a1 + 192)) {
      v3 = 32;
    }
    (*(void (**)(__int64))(*v2 + v3))((__int64)v2);
    v5 = *(_QWORD**)(a1 + 224);
    if (v5 == (_QWORD*)(a1 + 192)) {
      goto LABEL_7;
    }
    if (v5 != nullptr) {
      v4 = 40;
    LABEL_7:
      (*(void (**)(__int64))(*v5 + v4))((__int64)v5);
    }
  }
  *(_QWORD*)(a1 + 152) = game_facility_FacilitySceneBase_vtable;
  v6 = (_QWORD*)GameData_212dce8;
  v7 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
    }
    *v6 = 0;
  }
  game_facility_ReleaseGroups();
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                a1);
}

void ProcFacilitySceneInitialLoad_Destructor_1959e00(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;

  *(a1 - 19) = game_facility_anonymous_ProcFacilitySceneInitialLoad_vtable;
  v2 = (__int64)(a1 - 19);
  *a1 = GameData_2119820;
  v3 = (_QWORD*)a1[9];
  if (v3 != nullptr) {
    a1[9] = 0;
    v4 = 40;
    v5 = 32;
    if (v3 == a1 + 5) {
      v4 = 32;
    }
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
    v6 = (_QWORD*)a1[9];
    if (v6 == a1 + 5) {
      goto LABEL_7;
    }
    if (v6 != nullptr) {
      v5 = 40;
    LABEL_7:
      (*(void (**)(__int64))(*v6 + v5))((__int64)v6);
    }
  }
  *a1 = game_facility_FacilitySceneBase_vtable;
  v7 = (_QWORD*)GameData_212dce8;
  v8 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
    if (*v7 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v7 + 8LL))(*v7);
    }
    *v7 = 0;
  }
  game_facility_ReleaseGroups();
  *(a1 - 19) = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  GameRoutine_658c00(a1 - 8);
}

#pragma GCC visibility pop
