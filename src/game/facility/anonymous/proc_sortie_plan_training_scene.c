#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_2040ad8[])();
extern __int64 (
    *game_facility_anonymous_ProcSortiePlanTrainingScene_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ddc0[3];
extern __int64* GameData_2132488;
__int64 ProcSortiePlanTrainingScene_Destructor(__int64 a1);
__int64 ProcSortiePlanTrainingScene_DeletingDestructor(__int64 a1);
__int64 ProcSortiePlanTrainingScene_Destructor_1467280(__int64* a1);
__int64 ProcSortiePlanTrainingScene_DeletingDestructor_1467440(__int64* a1);

__int64 ProcSortiePlanTrainingScene_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;

  *(_QWORD*)a1 = game_facility_anonymous_ProcSortiePlanTrainingScene_vtable;
  *(_QWORD*)(a1 + 152) = GameData_2040ad8;
  v2 = a1 + 152;
  v3 = *(_QWORD**)(a1 + 224);
  v4 = *(_QWORD**)(a1 + 232);
  *(_QWORD*)(a1 + 192) = GameData_212ddc0[0] + 2;
  *(_QWORD*)(a1 + 208) = *(_QWORD*)(a1 + 200);
  if (v3 != v4) {
    do {
      if (*v3 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
      }
      ++v3;
    } while (v3 != v4);
    v3 = *(_QWORD**)(a1 + 224);
  }
  *(_QWORD*)(a1 + 232) = v3;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v3 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                  v3);
  }
  v7 = *(_QWORD*)(a1 + 200);
  if (v7 != 0) {
    v8 = *v5;
    *(_QWORD*)(a1 + 208) = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(v8 + v9, v7);
  }
  v10 = GameData_212dd18[0] + 192;
  *(_QWORD*)a1 = GameData_212dd18[0] + 16;
  *(_QWORD*)(a1 + 152) = v10;
  GameRoutine_1958ed0(v2, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v11 = (_QWORD*)GameData_212dce8;
  v12 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 24LL))(v12);
    if (*v11 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v11 + 8LL))(*v11);
    }
    *v11 = 0;
  }
  game_facility_ReleaseGroups();
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcSortiePlanTrainingScene_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v14;

  *(_QWORD*)a1 = game_facility_anonymous_ProcSortiePlanTrainingScene_vtable;
  *(_QWORD*)(a1 + 152) = GameData_2040ad8;
  v2 = a1 + 152;
  v3 = *(_QWORD**)(a1 + 224);
  v4 = *(_QWORD**)(a1 + 232);
  *(_QWORD*)(a1 + 192) = GameData_212ddc0[0] + 2;
  *(_QWORD*)(a1 + 208) = *(_QWORD*)(a1 + 200);
  if (v3 != v4) {
    do {
      if (*v3 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
      }
      ++v3;
    } while (v3 != v4);
    v3 = *(_QWORD**)(a1 + 224);
  }
  *(_QWORD*)(a1 + 232) = v3;
  v5 = fw_memory_g_heap_manager_ptr;
  if (v3 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                  v3);
  }
  v7 = *(_QWORD*)(a1 + 200);
  if (v7 != 0) {
    v8 = *(_QWORD*)v5;
    *(_QWORD*)(a1 + 208) = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(v8 + v9, v7);
  }
  v10 = GameData_212dd18[0] + 192;
  *(_QWORD*)a1 = GameData_212dd18[0] + 16;
  *(_QWORD*)(a1 + 152) = v10;
  GameRoutine_1958ed0(v2, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v11 = (_QWORD*)GameData_212dce8;
  v12 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 24LL))(v12);
    if (*v11 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v11 + 8LL))(*v11);
    }
    *v11 = 0;
  }
  game_facility_ReleaseGroups();
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v14 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v14 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v14, a1);
}

__int64 ProcSortiePlanTrainingScene_Destructor_1467280(__int64* a1)
{
  __int64* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;

  *(a1 - 19) =
      (__int64)game_facility_anonymous_ProcSortiePlanTrainingScene_vtable;
  v2 = a1 - 19;
  *a1 = (__int64)GameData_2040ad8;
  v3 = (_QWORD*)a1[9];
  v4 = (_QWORD*)a1[10];
  a1[5] = (__int64)(GameData_212ddc0[0] + 2);
  a1[7] = a1[6];
  if (v3 != v4) {
    do {
      if (*v3 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
      }
      ++v3;
    } while (v3 != v4);
    v3 = (_QWORD*)a1[9];
  }
  a1[10] = (__int64)v3;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v3 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                  v3);
  }
  v7 = a1[6];
  if (v7 != 0) {
    v8 = *v5;
    a1[7] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(v8 + v9, v7);
  }
  v10 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v10;
  GameRoutine_1958ed0(a1, v2);
  *a1 = (__int64)(GameData_2132488 + 2);
  v11 = (_QWORD*)GameData_212dce8;
  v12 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 24LL))(v12);
    if (*v11 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v11 + 8LL))(*v11);
    }
    *v11 = 0;
  }
  game_facility_ReleaseGroups();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  return GameRoutine_658c00(a1 - 8);
}

__int64 ProcSortiePlanTrainingScene_DeletingDestructor_1467440(__int64* a1)
{
  __int64* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v14;

  *(a1 - 19) =
      (__int64)game_facility_anonymous_ProcSortiePlanTrainingScene_vtable;
  v2 = a1 - 19;
  *a1 = (__int64)GameData_2040ad8;
  v3 = (_QWORD*)a1[9];
  v4 = (_QWORD*)a1[10];
  a1[5] = (__int64)(GameData_212ddc0[0] + 2);
  a1[7] = a1[6];
  if (v3 != v4) {
    do {
      if (*v3 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
      }
      ++v3;
    } while (v3 != v4);
    v3 = (_QWORD*)a1[9];
  }
  a1[10] = (__int64)v3;
  v5 = fw_memory_g_heap_manager_ptr;
  if (v3 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                  v3);
  }
  v7 = a1[6];
  if (v7 != 0) {
    v8 = *(_QWORD*)v5;
    a1[7] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(v8 + v9, v7);
  }
  v10 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v10;
  GameRoutine_1958ed0(a1, v2);
  *a1 = (__int64)(GameData_2132488 + 2);
  v11 = (_QWORD*)GameData_212dce8;
  v12 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 24LL))(v12);
    if (*v11 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v11 + 8LL))(*v11);
    }
    *v11 = 0;
  }
  game_facility_ReleaseGroups();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  GameRoutine_658c00(a1 - 8);
  v14 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v14 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v14, v2);
}

#pragma GCC visibility pop
