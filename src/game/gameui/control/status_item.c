#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AsyncLoadThumbImage_188f620(void);
__int64 GameRoutine_1890220(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_18a57c0(void);
__int64 GameRoutine_18a82e0(void);
__int64 GameRoutine_18a8b50(void);
__int64 GameRoutine_18a8f40(void);
__int64 GameRoutine_18a9940(void);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 StatusItem_188e530(__int64 a1, __int64 a2);
__int64 StatusItem_188e720(_QWORD* a1);
__int64 StatusItem_188e7e0(__int64 a1);
__int64 StatusItem_188e890(__int64 a1, __int64* a2);
__int64 Element_18850d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1888c80(__int64, __int64, __int64);
__int64 GameRoutine_18b26a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576600(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
__n128 GameRoutine_188d7a0(_QWORD*);
extern __int64 (*GameData_2100080[])();
extern __int64 (*GameData_2100120[])();
extern __int64 (*GameData_21002f8[])();
extern __int64 (*StatusItem_188e7e0_ptr[])();
extern __int64 (
    *game_gameui_control_StatusItem_Destroy_StatusItem_188ecc0_ptr[])();
extern __int64 (*game_gameui_control_StatusItem_vtable[])();
extern __int64* GameData_2132080[6];
extern __int64 GameData_21000c8;
extern __int64 GameData_21000d8;
extern __int64 GameData_21000e8;
extern __int64 GameData_21000f8;
extern __int64 GameData_2100108;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_21000c0;
extern char* GameData_21000d0;
extern char* GameData_21000e0;
extern char* GameData_21000f0;
extern char* GameData_2100100;
__attribute__((swiftcall)) void StatusItem_188dba0(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2, __int64 a3);
__attribute__((swiftcall)) void StatusItem_188de10(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2);

__attribute__((swiftcall)) void StatusItem_188dba0(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 result;
  __int64 v25;
  __int64 v26;

  v8 = (_QWORD*)LayoutEx_579160(1176, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_2100120;
  GameRoutine_18b26a0(v8 + 3, a1, a2, a3);
  v10[138] = 0;
  v10[139] = 0;
  v10[140] = 0;
  v10[3] = game_gameui_control_StatusItem_vtable;
  v10[141] = 0;
  v10[142] = 0;
  v10[143] = 0;
  v10[145] = 0;
  v10[132] = StatusItem_188e7e0_ptr;
  v10[12] = GameData_2100080;
  *((_DWORD*)v10 + 288) = 42;
  *(_QWORD*)((char*)v10 + 1166) = 0;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v13 = GameData_21000f8;
  v12[6] = GameData_21000f0;
  v12[7] = v13;
  v14 = GameData_2100108;
  v12[8] = GameData_2100100;
  v12[9] = v14;
  v15 = GameData_21000d8;
  v12[2] = GameData_21000d0;
  v12[3] = v15;
  v16 = GameData_21000e8;
  v12[4] = GameData_21000e0;
  v12[5] = v16;
  v17 = GameData_21000c8;
  *v12 = GameData_21000c0;
  v12[1] = v17;
  v18 = GameRoutine_576600(a1, "Name");
  if (v18 != 0) {
    v25 = v18;
    v26 = strlen(v18);
    if (v26 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)v12, (__int64)&v25);
    }
  }
  v19 = GameRoutine_576600(a1, v12[2]);
  if (v19 != 0) {
    v25 = v19;
    v26 = strlen(v19);
    if (v26 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)(v12 + 2),
                          (__int64)&v25);
    }
  }
  v20 = GameRoutine_576600(a1, v12[4]);
  if (v20 != 0) {
    v25 = v20;
    v26 = strlen(v20);
    if (v26 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)(v12 + 4),
                          (__int64)&v25);
    }
  }
  v21 = GameRoutine_576600(a1, v12[6]);
  if (v21 != 0) {
    v25 = v21;
    v26 = strlen(v21);
    if (v26 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)(v12 + 6),
                          (__int64)&v25);
    }
  }
  v22 = GameRoutine_576600(a1, v12[8]);
  if (v22 != 0) {
    v25 = v22;
    v26 = strlen(v22);
    if (v26 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)(v12 + 8),
                          (__int64)&v25);
    }
  }
  GameRoutine_188d7a0(v9);
  v23 = 128;
  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
    v23 = 56;
  }
  result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v23);
  *a4 = v9;
  a4[1] = v10;
  v10[3] = game_gameui_control_StatusItem_Destroy_StatusItem_188ecc0_ptr;
  v10[12] = GameData_21002f8;
  v10[132] = StatusItem_188e7e0_ptr;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void StatusItem_188de10(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  int v13;

  v6 = (_QWORD*)LayoutEx_579160(1176, 8);
  v7 = v6 + 3;
  v8 = v6;
  v6[1] = 0;
  v6[2] = 0;
  *v6 = GameData_2100120;
  Element_18850d0(v6 + 3, a1, a2);
  v9 = v8 + 134;
  v10 = GameData_2132080[0];
  v8[3] = GameData_2132080[0] + 2;
  v8[12] = v10 + 51;
  v8[132] = v10 + 56;
  *((_DWORD*)v8 + 266) = *(_DWORD*)(a1 + 1040);
  *((_BYTE*)v8 + 1068) = *(_BYTE*)(a1 + 1044);
  if ((*(_BYTE*)(a1 + 1048) & 1) != 0) {
    fw_text_String_CopyTerminated(v9, *(_QWORD*)(a1 + 1064),
                                  *(_QWORD*)(a1 + 1056));
  }
  else {
    v11 = *(_QWORD*)(a1 + 1048);
    v12 = *(_QWORD*)(a1 + 1064);
    v8[135] = *(_QWORD*)(a1 + 1056);
    v8[136] = v12;
    *v9 = v11;
  }
  v8[138] = 0;
  v8[139] = 0;
  v8[3] = game_gameui_control_StatusItem_vtable;
  v8[140] = 0;
  v8[141] = 0;
  v8[142] = 0;
  v8[143] = 0;
  v8[12] = GameData_2100080;
  v8[132] = StatusItem_188e7e0_ptr;
  v13 = *(_DWORD*)(a1 + 1128);
  v8[145] = 0;
  *((_DWORD*)v8 + 288) = v13;
  *(_QWORD*)((char*)v8 + 1166) = 0;
  GameRoutine_188d7a0(v7);
  *a3 = v7;
  a3[1] = v8;
  v8[3] = game_gameui_control_StatusItem_Destroy_StatusItem_188ecc0_ptr;
  v8[12] = GameData_21002f8;
  v8[132] = StatusItem_188e7e0_ptr;
}

__int64 StatusItem_188e530(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  char v16[4];
  char v17[4];

  *(_QWORD*)(a1 + 1136) = a2;
  *(_BYTE*)(a1 + 1145) = 1;
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, "T_Txt", 0);
  v4 = *(_QWORD*)(a1 + 1088);
  if (v4 != 0) {
    v5 = std___1___shared_weak_count_lock(v4);
    if (v5 != 0) {
      v6 = v5;
      if (*(_QWORD*)(a1 + 1080) != 0) {
        AsyncLoadThumbImage_188f620();
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  LayoutAccessor_1562cf0(a1 + 88, "HellPoint");
  LayoutAccessor_15636c0(a1 + 88, "HellPoint", 0);
  result = *(_QWORD*)(a1 + 1104);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v8 = *(_QWORD*)(a1 + 1096);
      v9 = result;
      if (v8 != 0) {
        v16[0] = 1;
        v10 = game_Unit_GetParam(a2, v16, 1);
        v11 = *(char*)(a2 + 807);
        v17[0] = 1;
        v12 = (v10 / 5 + v11) & ~((v10 / 5 + v11) >> 31);
        v13 = game_Unit_GetParam(a2, v17, 0);
        GameRoutine_1890220(v8, v12,
                            (v13 / 5) & (unsigned int)~((v13 / 5) >> 31),
                            0xFFFFFFFFLL, 1, 0, 0xFFFFFFFFLL);
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v8 + 40LL))(v8, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        result = std___1___shared_weak_count___release_weak(v9);
      }
    }
  }
  v14 = *(_QWORD*)(a1 + 1112);
  if (v14 != 0) {
    *(_BYTE*)(v14 + 88) &= ~1u;
  }
  v15 = *(_QWORD*)(a1 + 1120);
  if (v15 != 0) {
    *(_BYTE*)(v15 + 88) &= ~1u;
  }
  return result;
}

__int64 StatusItem_188e720(_QWORD* a1)
{
  __int64 v2;
  int v3;
  unsigned int v5;

  if (((*(__int64 (**)(_QWORD*))(a1[129] + 8LL))(a1 + 129) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) & 1) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a1[1] + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return 0;
    }
  }
  v3 = *((unsigned __int8*)a1 + 1145);
  if ((v3 & 1) == 0 && *((_DWORD*)a1 + 282) == 42) {
    return 0;
  }
  v5 = v3 ^ 1;
  if (a1[142] != 0) {
    return 1;
  }
  else {
    return v5;
  }
}

__int64 StatusItem_188e7e0(__int64 a1)
{
  __int64 v2;
  int v3;
  unsigned int v5;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 8LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 1032) + 144LL))(a1 - 1032) &
       1) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 1032) + 32LL))(a1 - 1032) &
       1) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 - 1024) + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return 0;
    }
  }
  v3 = *(unsigned __int8*)(a1 + 113);
  if ((v3 & 1) == 0 && *(_DWORD*)(a1 + 96) == 42) {
    return 0;
  }
  v5 = v3 ^ 1;
  if (*(_QWORD*)(a1 + 104) != 0) {
    return 1;
  }
  else {
    return v5;
  }
}

__int64 StatusItem_188e890(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = result;
      result = *a2;
      if (*a2 != 0) {
        if (*(_QWORD*)(a1 + 1136) != 0) {
          if (*(_BYTE*)(a1 + 1146) == 1) {
            result = GameRoutine_18a9940();
          }
          else if (*(_BYTE*)(a1 + 1145) == 1) {
            result = GameRoutine_18a8f40();
          }
          else {
            result = GameRoutine_18a82e0();
          }
        }
        else if (*(_DWORD*)(a1 + 1128) == 42) {
          result = GameRoutine_18a57c0();
        }
        else {
          result = GameRoutine_18a8b50();
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
