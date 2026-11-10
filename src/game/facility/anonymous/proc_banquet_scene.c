#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_138a5a0(_QWORD);
__int64 GameRoutine_14869b0(_QWORD);
__int64 GameRoutine_1487cc0(_QWORD, _QWORD);
__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_2118bb8[])();
extern __int64 (*GameData_2118c88[])();
extern __int64 (*GameData_2118d38[])();
extern __int64 (*game_facility_anonymous_ProcBanquetScene_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4000;
extern __int64 GameData_226bb60;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64* GameData_2131480;
extern __int64* GameData_2132488;
__int64 ProcBanquetScene_Destructor(__int64 a1);
__int64 ProcBanquetScene_DeletingDestructor(__int64 a1);
__int64 ProcBanquetScene_194ebe0();
void ProcBanquetScene_194ec10();
__int64 ProcBanquetScene_Unknown18();
__int64 ProcBanquetScene_Destructor_194eee0(_QWORD* a1);
__int64 ProcBanquetScene_Unknown2();

__int64 ProcBanquetScene_Destructor(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  *(_QWORD*)a1 = game_facility_anonymous_ProcBanquetScene_vtable;
  *(_QWORD*)(a1 + 152) = GameData_2118bb8;
  v2 = a1 + 152;
  v3 = GameData_2131480;
  (*(void (**)(_QWORD))(*(_QWORD*)*GameData_2131480 + 24LL))(*GameData_2131480);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  v4 = *(_QWORD*)(a1 + 184);
  *v3 = 0;
  if (v4 != 0) {
    *(_QWORD*)(a1 + 192) = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  *(_QWORD*)a1 = GameData_2118c88;
  *(_QWORD*)(a1 + 152) = GameData_2118d38;
  GameRoutine_1958ed0(v2, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v6 = (_QWORD*)GameData_212dce8;
  v7 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
    }
    *v6 = 0;
  }
  game_facility_ReleaseGroups();
  GameData_226bb60 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcBanquetScene_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v11;

  *(_QWORD*)a1 = game_facility_anonymous_ProcBanquetScene_vtable;
  *(_QWORD*)(a1 + 152) = GameData_2118bb8;
  v2 = a1 + 152;
  v3 = GameData_2131480;
  (*(void (**)(_QWORD))(*(_QWORD*)*GameData_2131480 + 24LL))(*GameData_2131480);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  *v3 = 0;
  v4 = *(_QWORD*)(a1 + 184);
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 192) = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7);
  }
  *(_QWORD*)a1 = GameData_2118c88;
  *(_QWORD*)(a1 + 152) = GameData_2118d38;
  GameRoutine_1958ed0(v2, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v8 = (_QWORD*)GameData_212dce8;
  v9 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
    if (*v8 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v8 + 8LL))(*v8);
    }
    *v8 = 0;
  }
  game_facility_ReleaseGroups();
  GameData_226bb60 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v11);
}

__int64 ProcBanquetScene_194ebe0()
{
  __int64 v0;

  v0 = GameRoutine_138a5a0(GameData_21f4000);
  return GameRoutine_14869b0(v0);
}

void ProcBanquetScene_194ec10()
{
  if (GameData_21f3d10 != 0 && *(int*)(GameData_21f3d10 + 152) >= 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
}

__int64 ProcBanquetScene_Unknown18()
{
  __int64 result;
  __int64 v1;
  char v2;
  unsigned __int64 v3;
  __int16 v4;
  char v5;
  __int64 v6;

  v5 = 0;
  v2 = 20;
  v4 = -19282;
  v3 = 0xE597A5E95F4D4742LL;
  result = GameRoutine_1487cc0(&v2, 0x13F000000LL);
  if ((v2 & 1) != 0 && v6 != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1);
  }
  return result;
}

__int64 ProcBanquetScene_Destructor_194eee0(_QWORD* a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  *(a1 - 19) = game_facility_anonymous_ProcBanquetScene_vtable;
  v2 = a1 - 19;
  *a1 = GameData_2118bb8;
  v3 = GameData_2131480;
  (*(void (**)(_QWORD))(*(_QWORD*)*GameData_2131480 + 24LL))(*GameData_2131480);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  v4 = a1[4];
  *v3 = 0;
  if (v4 != 0) {
    a1[5] = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  *(a1 - 19) = GameData_2118c88;
  *a1 = GameData_2118d38;
  GameRoutine_1958ed0(a1, v2);
  *a1 = GameData_2132488 + 2;
  v6 = (_QWORD*)GameData_212dce8;
  v7 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
    }
    *v6 = 0;
  }
  game_facility_ReleaseGroups();
  GameData_226bb60 = 0;
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  return GameRoutine_658c00(a1 - 8);
}

__int64 ProcBanquetScene_Unknown2()
{
  __int64 result;
  __int64 v1;
  char v2;
  unsigned __int64 v3;
  __int16 v4;
  char v5;
  __int64 v6;

  v5 = 0;
  v2 = 20;
  v4 = -19282;
  v3 = 0xE597A5E95F4D4742LL;
  result = GameRoutine_1487cc0(&v2, 0x13F000000LL);
  if ((v2 & 1) != 0 && v6 != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1);
  }
  return result;
}

#pragma GCC visibility pop
