#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_2039f68[])();
extern __int64 (*game_facility_anonymous_ProcVolunteerScene_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131398[4];
extern __int64* GameData_21313a8[2];
extern __int64* GameData_2132488;
__int64 ProcVolunteerScene_Destructor(__int64* a1);
__int64* GameRoutine_92b0a0(_QWORD*, unsigned __int8*);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN GameData_1ac690d;
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void ProcVolunteerScene_141bf80(__int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void
ProcVolunteerScene_141c170(PSEUDO_X8 x8_, __int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void
ProcVolunteerScene_141c270(PSEUDO_X8 x8_, __int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void ProcVolunteerScene_141c370(PSEUDO_X8 x8_,
                                                           __int64 a1);

void ProcVolunteerScene_141bf80(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  struct {
    __int64 v23[2];
    __int64 v24;
  } v23_;

  ProcVolunteerScene_141c370((void*)(v23_.v23), a1);
  GameRoutine_1a09ce0(v23_.v23, &GameData_1ac690d, 1);
  v4 = *a2;
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = a2 + 1;
  }
  else {
    v7 = *((unsigned __int8**)a2 + 2);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0(v23_.v23, v7, v8);
  v9 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)v23_.v23);
  v10 = v9;
  if (v9 != nullptr) {
    v11 = v9[10];
    if (v11 == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)v11 + 48LL))(v11);
  }
  if ((v23_.v23[0] & 1) != 0 && v23_.v24 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v12);
  }
  if (v10 == nullptr) {
    ProcVolunteerScene_141c170((void*)(v23_.v23), a1, a2);
    v13 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)v23_.v23);
    v14 = v13;
    if (v13 != nullptr) {
      v15 = v13[10];
      if (v15 == 0) {
        goto LABEL_38;
      }
      (*(void (**)(__int64))(*(_QWORD*)v15 + 48LL))(v15);
    }
    if ((v23_.v23[0] & 1) != 0 && v23_.v24 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
    }
    if (v14 == nullptr) {
      ProcVolunteerScene_141c270((void*)(v23_.v23), a1, a2);
      v17 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)v23_.v23);
      v18 = v17;
      if (v17 != nullptr) {
        v19 = v17[10];
        if (v19 == 0) {
          goto LABEL_38;
        }
        (*(void (**)(__int64))(*(_QWORD*)v19 + 48LL))(v19);
      }
      if ((v23_.v23[0] & 1) != 0 && v23_.v24 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
      }
      if (v18 == nullptr) {
        v21 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), a2);
        if (v21 != nullptr) {
          v22 = v21[10];
          if (v22 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v22 + 48LL))(v22);
            return;
          }
        LABEL_38:
          GameRoutine_60a310();
        }
      }
    }
  }
}

__attribute__((swiftcall)) void

ProcVolunteerScene_141c170(PSEUDO_X8 x8_, __int64 a1, unsigned __int8* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned __int64 v14;

  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 24);
  }
  else {
    v5 = a1 + 9;
  }
  v6 = strlen(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v6);
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    a3[1] = v7;
    a3[2] = v8;
    *a3 = v9 | 1;
    goto LABEL_12;
  }
  *(_BYTE*)a3 = 2 * v6;
  v8 = (__int64)a3 + 1;
  if (v6 != 0) {
  LABEL_12:
    memmove(v8, v5, v7);
  }
  *(_BYTE*)(v8 + v7) = 0;
  GameRoutine_1a09ce0(a3, &GameData_1ac690d, 1);
  v10 = *a2;
  v11 = (v10 & 1) == 0;
  v12 = v10 >> 1;
  if (v11) {
    v13 = a2 + 1;
  }
  else {
    v13 = *((unsigned __int8**)a2 + 2);
  }
  if (v11) {
    v14 = v12;
  }
  else {
    v14 = *((_QWORD*)a2 + 1);
  }
  {
    GameRoutine_1a09ce0(a3, v13, v14);
    return;
  }
}

__attribute__((swiftcall)) void

ProcVolunteerScene_141c270(PSEUDO_X8 x8_, __int64 a1, unsigned __int8* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned __int64 v14;

  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 48);
  }
  else {
    v5 = a1 + 33;
  }
  v6 = strlen(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v6);
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    a3[1] = v7;
    a3[2] = v8;
    *a3 = v9 | 1;
    goto LABEL_12;
  }
  *(_BYTE*)a3 = 2 * v6;
  v8 = (__int64)a3 + 1;
  if (v6 != 0) {
  LABEL_12:
    memmove(v8, v5, v7);
  }
  *(_BYTE*)(v8 + v7) = 0;
  GameRoutine_1a09ce0(a3, &GameData_1ac690d, 1);
  v10 = *a2;
  v11 = (v10 & 1) == 0;
  v12 = v10 >> 1;
  if (v11) {
    v13 = a2 + 1;
  }
  else {
    v13 = *((unsigned __int8**)a2 + 2);
  }
  if (v11) {
    v14 = v12;
  }
  else {
    v14 = *((_QWORD*)a2 + 1);
  }
  {
    GameRoutine_1a09ce0(a3, v13, v14);
    return;
  }
}

__attribute__((swiftcall)) void ProcVolunteerScene_141c370(PSEUDO_X8 x8_,
                                                           __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 24);
  }
  else {
    v4 = a1 + 9;
  }
  result = strlen(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (result | 7) + 1;
    }
    v7 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16, 0);
    a2[1] = v6;
    a2[2] = v7;
    *a2 = v8 | 1;
    goto LABEL_12;
  }
  *(_BYTE*)a2 = 2 * result;
  v7 = (__int64)a2 + 1;
  if (result != 0) {
  LABEL_12:
    result = memmove(v7, v4, v6);
  }
  *(_BYTE*)(v7 + v6) = 0;
  v9 = *(unsigned __int8*)(a1 + 32);
  if ((v9 & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 40);
  }
  else {
    v10 = v9 >> 1;
  }
  if (v10 != 0) {
    GameRoutine_1a09ce0(a2, &GameData_1ac690d, 1);
    if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
      v11 = *(_QWORD*)(a1 + 48);
    }
    else {
      v11 = a1 + 33;
    }
    v12 = strlen(v11);
    {
      GameRoutine_1a09ce0(a2, v11, v12);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 ProcVolunteerScene_Destructor(__int64* a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;

  *(a1 - 19) = (__int64)game_facility_anonymous_ProcVolunteerScene_vtable;
  v2 = a1 - 19;
  *a1 = (__int64)GameData_2039f68;
  v3 = GameData_21313a8[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_21313a8[0] + 24LL))(
      *GameData_21313a8[0]);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  *v3 = 0;
  v4 = a1[6];
  v5 = GameData_2131398[0] + 18;
  a1[4] = (__int64)(GameData_2131398[0] + 2);
  a1[5] = (__int64)v5;
  if (v4 != 0) {
    a1[7] = v4;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  v7 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v7;
  GameRoutine_1958ed0(a1, v2);
  *a1 = (__int64)(GameData_2132488 + 2);
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
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  return GameRoutine_658c00(a1 - 8);
}

#pragma GCC visibility pop
