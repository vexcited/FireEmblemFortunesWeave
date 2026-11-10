#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_819400(_QWORD);
__int64 GameRoutine_819f40(_QWORD);
__int64 GameRoutine_81a540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 GameRoutine_e7d0a0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CmdBtlUnit_e79c10(__int64 result, int a2);
__int64 CmdBtlUnit_e79df0(__int64 result);
__int64 CharacterAnimator_1079d90(_QWORD, _QWORD);
__int64 CmdBtlUnit_e7c280_alt1(_QWORD) __asm__("CmdBtlUnit_e7c280");
__int64 CmdBtlUnit_e7ca80(_QWORD, float);
__int64 CmdbtlPartyNatives_e9cce0(_QWORD);
__int64 GameRoutine_1079580(_QWORD, _QWORD, float, float, float);
__int64 GameRoutine_10adb80(_QWORD, _QWORD);
__int64 GameRoutine_10b2280(_QWORD, _QWORD, float);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e8e50(_QWORD, _QWORD);
__int64 GameRoutine_842b40(_QWORD, _QWORD);
__int64 GameRoutine_e774a0(__int64, __int64*);
__int64 GameRoutine_e7a740(__int64 result, __int64);
__int64 GameRoutine_e7c6f0(__int64, char, float);
__int64 GameRoutine_ec0a20(_QWORD, _QWORD);
__int64 GameRoutine_ff7420(_QWORD, _QWORD);
__int64 Manager_66cc20(_QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 UnitActor_81d740(_QWORD);
__int64 UnitItem_6e8bc0(_QWORD);
__int64 Unit_6ca760(_QWORD, _QWORD);
__int64 Unit_6cb080(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_Unit_Unknown6c90c0(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _DWORD* GameData_212d168;
extern _QWORD GameData_1b01768[4];
extern _QWORD GameData_1b018e8[4];
extern _UNKNOWN GameData_1aa1728;
extern _UNKNOWN GameData_1abbaec;
extern __int64 (*GameData_1fe80f8[])();
extern __int64 (*GameData_1fe81c8[])();
extern __int64 GameData_21c99b8;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern __int64 GameData_2216820;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212d448[9];
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern char GameData_2216858;
extern float GameData_1b92038[5];
float GameRoutine_edf4a0(void);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 CmdBtlUnit_e7ada0(__int64 result);
bool CmdBtlUnit_e7c280(__int64 a1);
bool CmdBtlUnit_e7c4f0(__int64 a1);
__int64 CmdBtlUnit_e7c980(__int64 result);
__int64 CmdBtlUnit_e7cbc0(__int64 a1);
_QWORD* CmdBtlUnit_e7cc50(_QWORD* result);
_QWORD* game_cmdbtl_CmdBtlUnit_SetupLookToEnemy(_QWORD* result, __int64 a2,
                                                __int64 a3, __int64 a4);
__int64 CmdBtlUnit_e7d620(__int64 result);
float CmdBtlUnit_e7d750(_QWORD* a1);
__int64 CmdBtlUnit_e7da80(__int64 a1, _QWORD* a2, float a3);
__int64 CmdBtlUnit_e7dc80(__int64 result, _QWORD* a2);
__int64 CmdBtlUnit_e7df20(__int64 result, char a2, float a3);
__int64 CmdBtlUnit_e7e180(__int64 a1);
__int64 game_cmdbtl_CmdBtlUnit_FindLinkItem(__int64 a1, __int64 a2);
__int64 CmdBtlUnit_e7e730(_QWORD* a1, _QWORD* a2);
__int64 CmdBtlUnit_e7e800(__int64 result);
__int64 game_cmdbtl_CmdBtlUnit_CreateCharacter_lambda2_Invoke(__int64 a1,
                                                              __int64* a2);
__int64 game_cmdbtl_CmdBtlUnit_FindLinkItem_lambda0_Invoke(__int64 a1,
                                                           __int64 a2);
__int64
game_cmdbtl_CmdBtlUnit_GetLinkItem_Heal_lambda0_Invoke(__int64 a1,
                                                       unsigned __int16* a2);
__int64
game_cmdbtl_CmdBtlUnit_GetLinkItem_Attack_lambda0_Invoke(__int64 a1,
                                                         unsigned __int16* a2);

__int64 CmdBtlUnit_e79c10(__int64 result, int a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  char v16;
  unsigned int v17;

  if (*(_DWORD*)(result + 180) == a2) {
    return result;
  }
  *(_DWORD*)(result + 180) = a2;
  if (a2 == 2) {
    if (*(_BYTE*)(result + 520) == 1) {
      if ((*(_BYTE*)(result + 488) & 1) != 0 && *(_QWORD*)(result + 504) != 0) {
        v7 = result;
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v8);
        result = v7;
      }
      *(_BYTE*)(result + 520) = 0;
    }
    *(_BYTE*)(result + 191) = 0;
    v9 = result;
    GameRoutine_e7d0a0(result, 1);
    v10 = *(_QWORD*)(v9 + 208);
    result = v9;
    if (v10 != 0) {
      v6 = *(_QWORD*)(v10 + 112);
      if (v6 != 0) {
        *(_QWORD*)(v6 + 156) = 0;
        goto LABEL_24;
      }
    }
  }
  else if (a2 == 1) {
    v2 = *(unsigned __int8*)(result + 520);
    *(_DWORD*)(result + 484) = 0;
    if (v2 == 1) {
      if ((*(_BYTE*)(result + 488) & 1) != 0 && *(_QWORD*)(result + 504) != 0) {
        v3 = result;
        v4 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v4);
        result = v3;
      }
      *(_BYTE*)(result + 520) = 0;
    }
    v5 = *(_QWORD*)(result + 208);
    *(_BYTE*)(result + 191) = 0;
    if (v5 != 0) {
      v6 = *(_QWORD*)(v5 + 112);
      if (v6 != 0) {
        *(_QWORD*)(v6 + 156) = 0x3F8000003F800000LL;
      LABEL_24:
        *(_DWORD*)(v6 + 164) = 1065353216;
      }
    }
  }
  v11 = *(_QWORD*)(result + 208);
  if (v11 == 0) {
    return result;
  }
  v12 = *(_QWORD*)(v11 + 120);
  v13 = *(_DWORD*)(result + 180);
  if (v12 != 0) {
    *(_BYTE*)(v12 + 417) = v13 != 1;
    v11 = *(_QWORD*)(result + 208);
    if (v11 == 0) {
      return result;
    }
    v13 = *(_DWORD*)(result + 180);
  }
  if (v13 == 1) {
    v17 = *(_DWORD*)(v11 + 340) & 0xFFFFFFFE;
  LABEL_39:
    *(_DWORD*)(v11 + 340) = v17;
    return result;
  }
  if (v13 != 2) {
    return result;
  }
  v14 = *(_QWORD*)(result + 216);
  v15 = *(_QWORD*)(result + 224);
  if (v15 == 0) {
    if ((*(_BYTE*)(v14 + 61) & 1) != 0) {
      return result;
    }
    goto LABEL_38;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                            memory_order_relaxed);
  v16 = *(_BYTE*)(v14 + 61);
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    result = std___1___shared_weak_count___release_weak();
  }
  if ((v16 & 1) == 0) {
  LABEL_38:
    v17 = *(_DWORD*)(v11 + 340) | 1;
    goto LABEL_39;
  }
  return result;
}

__int64 CmdBtlUnit_e79df0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  unsigned __int64 v4;
  int v5;
  char v6;

  v1 = *(_QWORD*)(result + 16);
  if (v1 != 0) {
    v2 = result;
    if (*(_QWORD*)(result + 24) != 0) {
      v3 = *(_DWORD*)(v1 + 32) - 1;
      *(_DWORD*)(v1 + 32) = v3;
      if (v3 == 0) {
        v6 = 0;
        v4 = 0xBF800000BF800000LL;
        v5 = 1065353216;
        result = GameRoutine_819f40(*(_QWORD*)(v1 + 8));
        if ((_DWORD)result != *(_DWORD*)(v1 + 16)) {
          result = GameRoutine_81a540(v1, (unsigned int)result, &v4);
        }
      }
      if (*(_BYTE*)(v2 + 176) == 1) {
        v4 = *(_QWORD*)(v2 + 24);
        if (v4 != 0) {
          result = GameRoutine_a867a0(&v4);
        }
        *(_BYTE*)(v2 + 176) = 0;
      }
      else {
        result = GameRoutine_819400(*(_QWORD*)(v2 + 16));
      }
      *(_QWORD*)(v2 + 24) = 0;
    }
  }
  return result;
}

__int64 CmdBtlUnit_e7ada0(__int64 result)
{
  _BOOL4 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  char v20;
  int v21;
  unsigned int v22;
  float v23;
  __int64 v24;
  float v25;
  float v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  int v30;

  if (*(_BYTE*)(result + 172) != 1 || *(_QWORD*)(result + 24) == 0) {
    return result;
  }
  v3 = *(_QWORD*)(result + 208);
  if (v3 == 0 || (*(_BYTE*)(v3 + 342) & 1) == 0 ||
      *(_BYTE*)(result + 177) == 0 || *(_DWORD*)(result + 180) != 1) {
    return result;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(result + 16) + 440LL);
  if (v4 != 0 && (unsigned __int64)(v5 = *(unsigned __int8*)(v4 + 16)) <= 3) {
    v6 = GameData_1b018e8[v5];
  }
  else {
    v6 = 392;
  }
  v7 = *GameData_212ea58 + 672;
  if (*(_DWORD*)(v7 + v6) > 1u) {
    return result;
  }
  v8 = *(int*)(*GameData_212ea58 + 632) <= 0 && *GameData_212d168 == 2;
  if (!v8 || *GameData_212d448[0] != 0) {
    return result;
  }
  v10 = result;
  v11 = GameData_212dec0[0];
  if ((*(_BYTE*)(*GameData_212dec0[0] + 12) & 1) != 0) {
    goto LABEL_65;
  }
  if (v4 != 0 && (unsigned __int64)(v12 = *(unsigned __int8*)(v4 + 16)) <= 3) {
    v13 = GameData_1b018e8[v12];
  }
  else {
    v13 = 392;
  }
  result = GameRoutine_ec0a20(*GameData_212dec0[0], *(unsigned int*)(v7 + v13));
  if ((result & 1) != 0) {
    return result;
  }
  result = v10;
  if ((*(_BYTE*)(v10 + 172) & 1) != 0) {
  LABEL_65:
    v14 = *(_QWORD*)(*(_QWORD*)(result + 208) + 72LL);
    if (v14 == 0) {
      return result;
    }
    if (*(_BYTE*)(result + 148) != 0) {
      v15 = *(float*)(result + 144);
    }
    else {
      v15 = -1.0;
    }
    *(_BYTE*)(v14 + 88) = CmdBtlUnit_e7c280_alt1(v10) & 1;
    v16 = *(_QWORD*)(v10 + 320);
    if (v16 == 0) {
      goto LABEL_41;
    }
    result = std___1___shared_weak_count_lock(v16);
    if (result == 0) {
      goto LABEL_41;
    }
    v17 = *(_QWORD*)(v10 + 312);
    v18 = v10;
    if (v17 == 0 || *(_DWORD*)(*(_QWORD*)v17 + 64LL) != 0) {
      v19 = 1;
      goto LABEL_38;
    }
    if ((*(_BYTE*)(*v11 + 13) & 1) != 0) {
      v19 = 0;
      v1 = true;
      goto LABEL_38;
    }
    if ((GameData_2216858 & 1) != 0) {
      v19 = 0;
      v1 = (GameData_2216820 & 8) == 0;
    LABEL_38:
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        std___1___shared_weak_count___release_weak();
        v18 = v10;
      }
      if (((v1 | v19) & 1) == 0) {
        v21 = -1054720718;
        goto LABEL_44;
      }
    LABEL_41:
      v20 = CmdBtlUnit_e7c280_alt1(v10);
      v18 = v10;
      if ((v20 & 1) != 0) {
        v21 = -589947500;
      }
      else {
        v21 = 119788728;
      }
    LABEL_44:
      if (*(_BYTE*)(v18 + 140) != 0) {
        v22 = *(_DWORD*)(v18 + 136);
      }
      else {
        v22 = v21;
      }
      if (*(_BYTE*)(v18 + 168) == 1) {
        v23 = GameRoutine_edf4a0();
        v24 = CharacterAnimator_1079d90(v14, v22);
        v18 = v10;
        v25 = v23 * *(float*)(v24 + 12);
      }
      else {
        v25 = -1.0;
        if (*(_BYTE*)(v18 + 164) != 0) {
          v25 = *(float*)(v18 + 160);
        }
      }
      v26 = 1.0;
      if (*(_BYTE*)(v18 + 156) != 0) {
        v26 = *(float*)(v18 + 152);
      }
      result = GameRoutine_1079580(v14, v22, v15, v25, v26);
      v27 = *(unsigned __int8*)(v10 + 376);
      if ((v27 & 1) != 0) {
        v28 = *(_QWORD*)(v10 + 384);
      }
      else {
        v28 = v27 >> 1;
      }
      if (v28 != 0 || (v29 = v10, (*(_BYTE*)(v10 + 191) & 1) != 0)) {
        result = CmdBtlUnit_e7ca80(v10, -1.0);
        v29 = v10;
      }
      v30 = *(unsigned __int8*)(v29 + 172);
      *(_DWORD*)(v29 + 484) = v22;
      if (v30 == 1) {
        *(_BYTE*)(v29 + 172) = 0;
      }
      return result;
    }
  }
  GameRoutine_8123d0(result);
}

bool CmdBtlUnit_e7c280(__int64 a1)
{
  _BYTE* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int* v8;
  __int64 v9;
  int v10;

  if ((*(_BYTE*)(a1 + 369) & 1) != 0) {
    v1 = (_BYTE*)(a1 + 368);
    return *v1 & 1;
  }
  if ((*(_BYTE*)(a1 + 371) & 1) != 0) {
    v1 = (_BYTE*)(a1 + 370);
    return *v1 & 1;
  }
  if ((*(_BYTE*)(a1 + 373) & 1) != 0) {
    v1 = (_BYTE*)(a1 + 372);
    return *v1 & 1;
  }
  if ((*(_BYTE*)(a1 + 375) & 1) != 0) {
    v1 = (_BYTE*)(a1 + 374);
    return *v1 & 1;
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) != 0) {
    return false;
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0(a1);
    }
    if ((GameData_2216820 & 8) != 0) {
      return false;
    }
  }
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
  if (v3 == 0) {
    v6 = *(_DWORD*)(GameData_2203490 + 1068);
    v7 = GameData_2203490 + 672;
    v4 = 3;
    goto LABEL_30;
  }
  v4 = *(unsigned __int8*)(v3 + 16);
  switch ((_DWORD)v4) {
  case 0:
    v5 = 12;
    goto LABEL_22;
  case 3:
    v5 = 268;
    goto LABEL_22;
  case 1:
    v5 = 140;
  LABEL_22:
    v7 = GameData_2203490 + 672;
    v8 = (int*)(GameData_2203490 + 672 + v5);
    goto LABEL_24;
  default:
    break;
  }
  v7 = GameData_2203490 + 672;
  v8 = (int*)(GameData_2203490 + 1068);
LABEL_24:
  v6 = *v8;
  if ((_DWORD)v4 != 0) {
    v9 = 3;
    if ((_DWORD)v4 == 1) {
      v9 = 1;
    }
    if ((_DWORD)v4 == 3) {
      v4 = 2;
    }
    else {
      v4 = v9;
    }
  }
LABEL_30:
  v10 = *(_DWORD*)(v7 + (v4 << 7) + 20) + *(_DWORD*)(v7 + (v4 << 7) + 16);
  if (v10 <= 1) {
    v10 = 1;
  }
  return 3 * v6 < v10;
}

bool CmdBtlUnit_e7c4f0(__int64 a1)
{
  _BOOL4 v1;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;

  v3 = *(_DWORD*)(a1 + 484);
  v4 = *(_QWORD*)(a1 + 320);
  if (v4 == 0) {
    goto LABEL_8;
  }
  v5 = std___1___shared_weak_count_lock(v4);
  if (v5 == 0) {
    goto LABEL_8;
  }
  v6 = *(_QWORD*)(a1 + 312);
  if (v6 != 0 && *(_DWORD*)(*(_QWORD*)v6 + 64LL) == 0) {
    if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
      v7 = 0;
      v1 = true;
    }
    else {
      if ((GameData_2216858 & 1) == 0) {
        goto LABEL_42;
      }
      v7 = 0;
      v1 = (GameData_2216820 & 8) == 0;
    }
  }
  else {
    v7 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (((v1 | v7) & 1) != 0) {
      goto LABEL_8;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak();
    if (((v1 | v7) & 1) != 0) {
    LABEL_8:
      if (CmdBtlUnit_e7c280(a1)) {
        v8 = -589947500;
      }
      else {
        v8 = 119788728;
      }
      if (v3 == v8) {
        return true;
      }
      goto LABEL_15;
    }
  }
  if (v3 == -1054720718) {
    return true;
  }
LABEL_15:
  v10 = *(_QWORD*)(a1 + 320);
  if (v10 == 0) {
    goto LABEL_22;
  }
  v5 = std___1___shared_weak_count_lock(v10);
  if (v5 == 0) {
    goto LABEL_22;
  }
  v11 = *(_QWORD*)(a1 + 312);
  if (v11 == 0 || *(_DWORD*)(*(_QWORD*)v11 + 64LL) != 0) {
    v12 = 1;
    goto LABEL_20;
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
    v12 = 0;
    v1 = true;
    goto LABEL_20;
  }
  if ((GameData_2216858 & 1) == 0) {
  LABEL_42:
    GameRoutine_8123d0(v5);
  }
  v12 = 0;
  v1 = (GameData_2216820 & 8) == 0;
LABEL_20:
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (((v1 | v12) & 1) != 0) {
      goto LABEL_22;
    }
  LABEL_35:
    v13 = 1669996436;
    return v3 == 0 || v3 == v13;
  }
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak();
  if (((v1 | v12) & 1) == 0) {
    goto LABEL_35;
  }
LABEL_22:
  if (CmdBtlUnit_e7c280(a1)) {
    v13 = -1101902990;
  }
  else {
    v13 = -574916402;
  }
  return v3 == 0 || v3 == v13;
}

__int64 CmdBtlUnit_e7c980(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD v10[4];

  v3 = *(_QWORD*)(*(_QWORD*)(result + 16) + 440LL);
  if (v3 != 0 && (unsigned __int64)(v4 = *(unsigned __int8*)(v3 + 16)) <= 3) {
    v5 = GameData_1b018e8[v4];
  }
  else {
    v5 = 392;
  }
  if (*(_DWORD*)(GameData_2203490 + v5 + 672) <= 1u &&
      *(_DWORD*)(result + 200) == 0) {
    v10[2] = v1;
    v10[3] = v2;
    v6 = (_QWORD*)result;
    v10[0] = "MindLayer";
    v10[1] = 9;
    result = GameRoutine_ff7420(result + 344, v10);
    v7 = v6[27];
    v8 = v6[28];
    v9 = v6;
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v7 != 0) {
      *(_BYTE*)(v7 + 60) = v6[44] != v6[43];
    }
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      result = std___1___shared_weak_count___release_weak();
      v9 = v6;
    }
    *((_DWORD*)v9 + 50) = 1;
  }
  return result;
}

__int64 CmdBtlUnit_e7cbc0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  unsigned int v7;
  __int64 v8;

  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
  if (v1 != 0 && (unsigned __int64)(v2 = *(unsigned __int8*)(v1 + 16)) <= 3) {
    v3 = GameData_1b01768[v2];
  }
  else {
    v3 = 3;
  }
  v4 = GameData_2203490 + (v3 << 7);
  v5 = *(__int64**)(v4 + 712);
  v6 = *(__int64**)(v4 + 720);
  if (v5 == v6) {
    return 0;
  }
  v7 = 0;
  do {
    v8 = *v5;
    v5 += 2;
    if (v8 == a1) {
      break;
    }
    ++v7;
  } while (v5 != v6);
  return v7;
}

_QWORD* CmdBtlUnit_e7cc50(_QWORD* result)
{
  *(_WORD*)(result[2] + 20LL) |= 1u;
  if (result[53] == result[52]) {
    return (_QWORD*)UnitActor_81d740(result[2]);
  }
  return result;
}

_QWORD* game_cmdbtl_CmdBtlUnit_SetupLookToEnemy(_QWORD* result, __int64 a2,
                                                __int64 a3, __int64 a4)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  int v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD v30[4];
  _QWORD* v31;
  int v32;
  int v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;

  v4 = result[2];
  v5 = result;
  v34 = 0;
  v35 = nullptr;
  v6 = *(_QWORD*)(v4 + 440);
  if (v6 == 0) {
    v9 = GameData_2203490 + 672;
    v10 = (_QWORD*)(GameData_2203490 + 1056);
    v7 = 3;
    goto LABEL_19;
  }
  v7 = *(unsigned __int8*)(v6 + 16);
  if ((_DWORD)v7 != 0 && (_DWORD)v7 != 3) {
    if ((_DWORD)v7 == 1) {
      v10 = (_QWORD*)(GameData_2203490 + 672);
      v9 = GameData_2203490 + 672;
      goto LABEL_13;
    }
    v9 = GameData_2203490 + 672;
    v10 = (_QWORD*)(GameData_2203490 + 1056);
    if ((_DWORD)v7 == 0) {
      goto LABEL_19;
    }
  LABEL_16:
    if ((_DWORD)v7 == 3) {
      v7 = 2;
    }
    else {
      v7 = 3;
    }
    goto LABEL_19;
  }
  v9 = GameData_2203490 + 672;
  v10 = (_QWORD*)(GameData_2203490 + 800);
  if ((_DWORD)v7 != 1) {
    if ((_DWORD)v7 == 0) {
      goto LABEL_19;
    }
    goto LABEL_16;
  }
LABEL_13:
  if (*(int*)(v4 + 592) > 1) {
    return result;
  }
  v7 = 1;
LABEL_19:
  v11 = v9 + (v7 << 7);
  v12 = *(_QWORD*)(v11 + 88);
  if (v12 == 0) {
    goto LABEL_26;
  }
  v13 = *(_QWORD**)(v11 + 80);
  v14 = *(_QWORD*)(v11 + 88);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                            memory_order_relaxed);
  v15 = std___1___shared_weak_count_lock(v14);
  if (v15 != 0) {
    v16 = v5 == v13;
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    v16 = false;
  }
  result = (_QWORD*)std___1___shared_weak_count___release_weak();
  if (!v16) {
  LABEL_26:
    if (*((_DWORD*)v5 + 50) == 0) {
      v17 = *((_DWORD*)v5 + 32);
      v18 = (__int64*)v10[5];
      v19 = (__int64*)v10[6];
      v32 = 2139095039;
      v30[0] = GameData_1fe80f8;
      v30[1] = &v33;
      v30[2] = &v32;
      v30[3] = &v34;
      v31 = v30;
      v33 = v17;
      if (v18 == v19) {
        result = v30;
      }
      else {
        do {
          v36 = *v18;
          v20 = v18[1];
          v37 = v20;
          if (v20 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (v31 == nullptr) {
            GameRoutine_60a310(0, a2);
          }
          (*(void (**)(_QWORD*, __int64*))(*v31 + 48LL))(v31, &v36);
          v21 = v37;
          if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
            std___1___shared_weak_count___release_weak();
          }
          v18 += 2;
        } while (v18 != v19);
        result = v31;
        if (v31 != v30) {
          if (v31 != nullptr) {
            v24 = 40;
          LABEL_43:
            result =
                (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64, __int64))(
                    *result + v24))(result, a2, a3, a4);
          }
          v22 = v35;
          if (v35 == nullptr) {
            return result;
          }
          goto LABEL_45;
        }
      }
      v24 = 32;
      goto LABEL_43;
    }
  }
  v22 = (_QWORD*)v10[11];
  if (v22 == nullptr) {
    return result;
  }
  v23 = v10[10];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 2), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 2), 1u,
                            memory_order_relaxed);
  v34 = v23;
  v35 = v22;
  std___1___shared_weak_count___release_weak();
LABEL_45:
  v25 = std___1___shared_weak_count_lock(v22);
  if (v25 != 0) {
    v26 = v34;
    if (v34 != 0) {
      v27 = *(_QWORD*)(v34 + 216);
      if (v27 == 0 || *(_DWORD*)(v27 + 64) != 2) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                  memory_order_relaxed);
        v28 = v5[38];
        v5[37] = v26;
        v5[38] = v25;
        if (v28 != 0) {
          v29 = v25;
          std___1___shared_weak_count___release_weak();
          v25 = v29;
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak();
    }
  }
  result = v35;
  if (v35 != nullptr) {
    return (_QWORD*)std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64 CmdBtlUnit_e7d620(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = result;
  v2 = *(_QWORD*)(*(_QWORD*)(result + 16) + 440LL);
  if (v2 != 0 && (unsigned __int64)(v3 = *(unsigned __int8*)(v2 + 16)) <= 3) {
    v4 = GameData_1b018e8[v3];
  }
  else {
    v4 = 392;
  }
  v5 = GameData_2203490 + 672 +
       ((__int64)*(int*)(GameData_2203490 + 672 + v4) << 7);
  v6 = *(_QWORD*)(v5 + 88);
  if (v6 != 0) {
    v7 = *(_QWORD*)(v5 + 80);
    v8 = *(_QWORD*)(v5 + 88);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak();
      }
      result = std___1___shared_weak_count___release_weak();
      if (v7 != 0 && (*(_DWORD*)(v5 + 24) != 0 || *(_DWORD*)(v5 + 12) != 0)) {
        result = CmdBtlUnit_e7c4f0(v1);
        if ((result & 1) == 0) {
          return GameRoutine_e7c6f0(v1, 1, 0.5);
        }
      }
    }
    else {
      return std___1___shared_weak_count___release_weak();
    }
  }
  return result;
}

float CmdBtlUnit_e7d750(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  float v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned int v11;

  v1 = a1[26];
  if (v1 != 0) {
    v3 = *(_QWORD*)(v1 + 392);
    v4 = *(_QWORD*)(v1 + 400);
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v3 != 0) {
      v5 = *(float*)(*(_QWORD*)(v3 + 11792) + 36LL) *
           (float)(*(float*)(v3 + 32) *
                   (float)(*(float*)(v3 + 40) +
                           (float)((float)(1.0 - *(float*)(v3 + 40)) *
                                   *(float*)(v1 + 336))));
      if (v4 == 0) {
        goto LABEL_11;
      }
    }
    else {
      v5 = 1.0;
      if (v4 == 0) {
        goto LABEL_11;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    v5 = 1.0;
  }
LABEL_11:
  v6 = a1[40];
  v7 = 0.0;
  if (v6 != 0) {
    v8 = std___1___shared_weak_count_lock(v6);
    if (v8 != 0) {
      v9 = a1[39];
      if (v9 != 0) {
        v10 = *(unsigned __int8**)(v9 + 8);
        if (v10 != nullptr) {
          v11 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                          64) +
                                               8LL * *v10) +
                                    32LL) -
                1;
          if (v11 <= 4) {
            v7 = GameData_1b92038[(unsigned __int8)v11];
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak();
      }
    }
  }
  return v5 + v7;
}

__int64 CmdBtlUnit_e7da80(__int64 a1, _QWORD* a2, float a3)
{
  _QWORD* v5;
  __int64 v6;
  __int64 result;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _WORD* v18;
  __int64 v19;
  int v20;
  __int16 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  if (*(_BYTE*)(a1 + 520) == 1) {
    if ((*(_BYTE*)(a1 + 488) & 1) != 0 && *(_QWORD*)(a1 + 504) != 0) {
      v5 = a2;
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, *(_QWORD*)(a1 + 504));
      a2 = v5;
    }
    *(_BYTE*)(a1 + 520) = 0;
  }
  result = a1 + 376;
  *(_BYTE*)(a1 + 191) = 0;
  if ((_QWORD*)(a1 + 376) != a2) {
    v8 = *(unsigned __int8*)a2;
    if ((*(_BYTE*)result & 1) != 0) {
      v11 = a2[1];
      v12 = (v8 & 1) == 0;
      v13 = v8 >> 1;
      if (v12) {
        v14 = (char*)a2 + 1;
      }
      else {
        v14 = (char*)a2[2];
      }
      if (v12) {
        v15 = v13;
      }
      else {
        v15 = v11;
      }
      result = SpineModel_64dde0(result, v14, v15);
    }
    else if ((v8 & 1) != 0) {
      result = GameRoutine_64df20(result, a2[2], a2[1]);
    }
    else {
      v9 = *a2;
      v10 = a2[2];
      *(_QWORD*)(a1 + 384) = a2[1];
      *(_QWORD*)(a1 + 392) = v10;
      *(_QWORD*)result = v9;
    }
  }
  v16 = *(unsigned __int8*)(a1 + 376);
  if ((v16 & 1) != 0) {
    v17 = *(_QWORD*)(a1 + 384);
  }
  else {
    v17 = v16 >> 1;
  }
  if (v17 == 0) {
    result = CmdBtlUnit_e7c280_alt1(a1);
    v18 = &GameData_1abbaec;
    if ((result & 1) != 0) {
      v18 = &GameData_1aa1728;
    }
    if ((*(_BYTE*)(a1 + 376) & 1) != 0) {
      *(_QWORD*)(a1 + 384) = 6;
      v19 = *(_QWORD*)(a1 + 392);
    }
    else {
      *(_BYTE*)(a1 + 376) = 12;
      v19 = a1 + 377;
    }
    v20 = *(_DWORD*)v18;
    v21 = v18[2];
    *(_BYTE*)(v19 + 6) = 0;
    *(_DWORD*)v19 = v20;
    *(_WORD*)(v19 + 4) = v21;
  }
  v22 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 88LL);
  if (v22 != 0) {
    v23 = *(_QWORD*)(v22 + 32);
    v24 = (*(_BYTE*)(a1 + 376) & 1) != 0 ? *(_QWORD*)(a1 + 392) : a1 + 377;
    if (v23 != 0) {
      v25 = *(_QWORD*)(v23 + 8);
      v26 = *(_QWORD*)(v22 + 40);
      if (v25 != -1 && v26 != 0) {
        v29 = *(_QWORD*)(v26 + 392);
        v28 = *(_QWORD*)(v26 + 400);
        if (v28 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v30 = v24;
            (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
            std___1___shared_weak_count___release_weak_alt1(v28);
            v24 = v30;
          }
        }
        result = GameRoutine_10adb80(v29 + 1432, v24);
        if ((result & 0x80000000) == 0) {
          return GameRoutine_10b2280(v22, (unsigned int)result, a3);
        }
      }
    }
  }
  return result;
}

__int64 CmdBtlUnit_e7dc80(__int64 result, _QWORD* a2)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;

  if (*(_BYTE*)(result + 32) == 1) {
    if ((_QWORD*)result != a2) {
      v3 = *(unsigned __int8*)a2;
      if ((*(_BYTE*)result & 1) != 0) {
        v9 = (v3 & 1) == 0;
        v10 = v3 >> 1;
        v11 = result;
        if (v9) {
          v12 = (char*)a2 + 1;
        }
        else {
          v12 = (char*)a2[2];
        }
        if (v9) {
          v13 = v10;
        }
        else {
          v13 = a2[1];
        }
        SpineModel_64dde0(result, v12, v13);
      }
      else {
        if ((v3 & 1) == 0) {
          v4 = *a2;
          v5 = a2[2];
          *(_QWORD*)(result + 8) = a2[1];
          *(_QWORD*)(result + 16) = v5;
          *(_QWORD*)result = v4;
          goto LABEL_19;
        }
        v11 = result;
        GameRoutine_64df20(result, a2[2], a2[1]);
      }
      result = v11;
    }
  LABEL_19:
    *(_QWORD*)(result + 24) = a2[3];
    return result;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v8 = result;
    fw_text_String_CopyTerminated(result, a2[2], a2[1]);
    result = v8;
  }
  else {
    v6 = *a2;
    v7 = a2[2];
    *(_QWORD*)(result + 8) = a2[1];
    *(_QWORD*)(result + 16) = v7;
    *(_QWORD*)result = v6;
  }
  *(_QWORD*)(result + 24) = a2[3];
  *(_BYTE*)(result + 32) = 1;
  return result;
}

__int64 CmdBtlUnit_e7df20(__int64 result, char a2, float a3)
{
  bool v3;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  char v17;

  if ((*(_BYTE*)(result + 189) & 1) != 0) {
    return result;
  }
  *(float*)(result + 192) = a3;
  *(_BYTE*)(result + 189) = 1;
  v5 = *(_QWORD*)(result + 320);
  if ((a2 & 1) == 0) {
    v6 = 869686455;
    if (v5 == 0) {
      goto LABEL_27;
    }
    v12 = result;
    v13 = std___1___shared_weak_count_lock(*(_QWORD*)(result + 320));
    if (v13 == 0) {
      v5 = 0;
      result = v12;
      goto LABEL_27;
    }
    v14 = *(_QWORD*)(v12 + 312);
    v15 = v13;
    result = v12;
    if (v14 != 0 && *(_DWORD*)(*(_QWORD*)v14 + 64LL) == 0) {
      if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
        v3 = false;
        v16 = 0;
      }
      else {
        if ((GameData_2216858 & 1) == 0) {
          goto LABEL_40;
        }
        v16 = 0;
        v3 = (GameData_2216820 & 8) != 0;
      }
    }
    else {
      v16 = 1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak();
      result = v12;
    }
    v5 = 0;
    if ((v16 & 1) == 0) {
      if (v3) {
        v6 = -304822991;
      }
      else {
        v6 = 869686455;
      }
    }
    goto LABEL_27;
  }
  v6 = -1080537169;
  if (v5 == 0) {
    goto LABEL_13;
  }
  v7 = result;
  v8 = std___1___shared_weak_count_lock(*(_QWORD*)(result + 320));
  if (v8 == 0) {
    v5 = 0x100000000LL;
    result = v7;
    goto LABEL_27;
  }
  v9 = *(_QWORD*)(v7 + 312);
  v10 = v8;
  result = v7;
  if (v9 == 0 || *(_DWORD*)(*(_QWORD*)v9 + 64LL) != 0) {
    v11 = 1;
    goto LABEL_8;
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
    v3 = false;
    v11 = 0;
    goto LABEL_8;
  }
  if ((GameData_2216858 & 1) == 0) {
  LABEL_40:
    GameRoutine_8123d0(result);
  }
  v11 = 0;
  v3 = (GameData_2216820 & 8) != 0;
LABEL_8:
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v11 & 1) == 0) {
      goto LABEL_10;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak();
    result = v7;
    if ((v11 & 1) == 0) {
    LABEL_10:
      if (v3) {
        v6 = -1672613899;
      }
      else {
        v6 = -1080537169;
      }
    }
  }
LABEL_13:
  v5 = 0x100000000LL;
LABEL_27:
  v17 = *(_BYTE*)(result + 172);
  *(_BYTE*)(result + 184) = 0;
  if ((v17 & 1) == 0) {
    *(_BYTE*)(result + 172) = 1;
  }
  *(_DWORD*)(result + 144) = v5;
  *(_DWORD*)(result + 136) = v6;
  *(_BYTE*)(result + 152) = 0;
  *(_BYTE*)(result + 156) = 0;
  *(_BYTE*)(result + 160) = 0;
  *(_BYTE*)(result + 164) = 0;
  *(_BYTE*)(result + 140) = 1;
  *(_BYTE*)(result + 148) = BYTE4(v5);
  *(_BYTE*)(result + 168) = a2 & 1;
  CmdBtlUnit_e7ada0(result);
  return CmdbtlPartyNatives_e9cce0(GameData_2203490);
}

__int64 CmdBtlUnit_e7e180(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
  if (v3 != 0 && (unsigned __int64)(v4 = *(unsigned __int8*)(v3 + 16)) <= 3) {
    v5 = GameData_1b018e8[v4];
  }
  else {
    v5 = 392;
  }
  v26 = v1;
  v27 = v2;
  if (*(_DWORD*)(GameData_2203490 + 672 + v5) == 0) {
    if (v3 != 0 && (unsigned __int64)(v7 = *(unsigned __int8*)(v3 + 16)) <= 3) {
      v8 = GameData_1b01768[v7];
    }
    else {
      v8 = 3;
    }
    v9 = GameData_2203490 + 672 + (v8 << 7);
    v10 = *(__int64**)(v9 + 40);
    v11 = *(__int64**)(v9 + 48);
    if (v10 == v11) {
      goto LABEL_14;
    }
    while (1) {
      v12 = *v10;
      if (*v10 == a1) {
        break;
      }
      v10 += 2;
      if (v10 == v11) {
        goto LABEL_14;
      }
    }
    v13 = v10[1];
    if (v13 == 0) {
      goto LABEL_15;
    }
    v16 = v10[1];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
    v17 = std___1___shared_weak_count_lock(v16);
    std___1___shared_weak_count___release_weak();
    if (v17 == 0) {
    LABEL_14:
      LOBYTE(v13) = 0;
    }
    else {
      v18 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL);
      if (v18 != 0 &&
          (unsigned __int64)(v19 = *(unsigned __int8*)(v18 + 16)) <= 3) {
        v20 = GameData_1b01768[v19];
      }
      else {
        v20 = 3;
      }
      v24 = v12;
      v25 = v17;
      v21 = GameData_2203490 + (v20 << 7);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                memory_order_relaxed);
      v22 = GameRoutine_e774a0(v21 + 672, &v24);
      v23 = v25;
      LOBYTE(v13) = v22;
      if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak();
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak();
      }
    }
  LABEL_15:
    v6 = v13 ^ 1;
    return v6 & 1;
  }
  v6 = 0;
  return v6 & 1;
}

__int64 game_cmdbtl_CmdBtlUnit_FindLinkItem(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  _QWORD* v5;
  _QWORD* v6;
  _WORD* v7;
  __int64 i;
  __int64 v9;
  _BYTE v11[32];
  _BYTE* v12;
  char v13[32];
  _QWORD* v14;
  __int64 v15;

  v2 = *(_QWORD*)(a1 + 16);
  v3 = *(_QWORD*)(a2 + 32);
  v15 = 0;
  if (v3 != 0) {
    if (v3 == a2) {
      v12 = v11;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v3 + 24LL))(v3, v11);
      v4 = v12;
    }
    else {
      v4 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      v12 = v4;
    }
  }
  else {
    v4 = nullptr;
    v12 = nullptr;
  }
  v5 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v6 = v5;
  v5[2] = &v15;
  *v5 = GameData_1fe81c8;
  if (v4 != nullptr) {
    if (v4 == v11) {
      v5[8] = v5 + 4;
      (*(void (**)(_BYTE*))(*(_QWORD*)v4 + 24LL))(v4);
    }
    else {
      v5[8] = v4;
      v12 = nullptr;
    }
  }
  else {
    v5[8] = 0;
  }
  v14 = v6;
  game_UnitItemList_EachItem(v2 + 828, v13);
  v7 = (_WORD*)(v2 + 876);
  for (i = 24; i != 0; --i) {
    if (*v7 != 0) {
      (*(void (**)(_QWORD*, _WORD*))(*v6 + 48LL))(v6, v7);
    }
    v7 += 4;
  }
  (*(void (**)(_QWORD*))(*v6 + 40LL))(v6);
  if (v12 == v11) {
    v9 = 32;
    goto LABEL_19;
  }
  if (v12 != nullptr) {
    v9 = 40;
  LABEL_19:
    (*(void (**)(__int64))(*(_QWORD*)v12 + v9))((__int64)v12);
  }
  return v15;
}

__int64 CmdBtlUnit_e7e730(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  _QWORD v11[2];
  int v12;

  v2 = (_QWORD*)a1[32];
  if ((unsigned __int64)v2 >= a1[33]) {
    v7 = Manager_66cc20(a1 + 31, a2);
  }
  else if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(a1[32], a2[2], a2[1]);
    v7 = (__int64)(v2 + 3);
  }
  else {
    v5 = *a2;
    v6 = a2[2];
    v7 = (__int64)(v2 + 3);
    v2[1] = a2[1];
    v2[2] = v6;
    *v2 = v5;
  }
  a1[32] = v7;
  v8 = a1[2];
  v12 = 0;
  if ((*(_BYTE*)a2 & 1) != 0) {
    v9 = (char*)a2[2];
  }
  else {
    v9 = (char*)a2 + 1;
  }
  v11[1] = v9;
  v11[0] = game_HashString(v9);
  GameRoutine_842b40(&v12, v11);
  return Unit_6ca760(v8, &v12);
}

__int64 CmdBtlUnit_e7e800(__int64 result)
{
  char* v1;
  char* v2;
  _QWORD* v3;
  char v4;
  char* v5;
  __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  char v10;
  __int64 v11;
  _QWORD v12[2];
  int v13;

  v1 = *(char**)(result + 248);
  v2 = *(char**)(result + 256);
  v3 = (_QWORD*)result;
  if (v1 != v2) {
    do {
      v4 = *v1;
      v5 = *((char**)v1 + 2);
      v6 = v3[2];
      v13 = 0;
      if ((v4 & 1) != 0) {
        v7 = v5;
      }
      else {
        v7 = v1 + 1;
      }
      v12[1] = v7;
      v12[0] = game_HashString(v7);
      GameRoutine_842b40(&v13, v12);
      result = Unit_6cb080(v6, &v13);
      v1 += 24;
    } while (v1 != v2);
    v1 = (char*)v3[31];
    v2 = (char*)v3[32];
  }
  if (v1 != v2) {
    v8 = v2;
    v9 = fw_memory_g_heap_manager_ptr;
    do {
      v10 = *(v8 - 24);
      v8 -= 24;
      if ((v10 & 1) != 0 && *((_QWORD*)v2 - 1) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v11);
      }
      v2 = v8;
    } while (v8 != v1);
  }
  v3[32] = v1;
  return result;
}

__int64 game_cmdbtl_CmdBtlUnit_CreateCharacter_lambda2_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  result = GameRoutine_e7a740(v2, *a2);
  *(_DWORD*)(v2 + 444) = 0;
  return result;
}

__int64 game_cmdbtl_CmdBtlUnit_FindLinkItem_lambda0_Invoke(__int64 a1,
                                                           __int64 a2)
{
  __int64 v3;
  __int64 result;

  v3 = *(_QWORD*)(a1 + 64);
  if (v3 == 0) {
    GameRoutine_60a310(0, a2);
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
  if ((result & 1) != 0 && (*(_BYTE*)(a2 + 3) & 1) != 0) {
    **(_QWORD**)(a1 + 16) = a2;
  }
  return result;
}

__int64

game_cmdbtl_CmdBtlUnit_GetLinkItem_Heal_lambda0_Invoke(__int64 a1,
                                                       unsigned __int16* a2)
{
  __int64 result;
  _BYTE* v5;
  int v6;

  result = GameRoutine_6e8e50(a2, *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL));
  if ((result & 1) != 0) {
    v5 = *(_BYTE**)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2);
    if ((v5[336] & 0x40) == 0 && v5[73] == 2) {
      v6 = (unsigned __int8)v5[88] >> ((*((_BYTE*)a2 + 3) & 8) != 0);
      if (**(_DWORD**)(a1 + 16) < v6) {
        **(_QWORD**)(a1 + 8) = a2;
        **(_DWORD**)(a1 + 16) = v6;
      }
    }
  }
  return result;
}

__int64

game_cmdbtl_CmdBtlUnit_GetLinkItem_Attack_lambda0_Invoke(__int64 a1,
                                                         unsigned __int16* a2)
{
  unsigned __int8* v2;
  unsigned int v3;
  unsigned __int16* v6;
  char v7;

  if (*a2 == 0) {
    return 0;
  }
  v2 = *(unsigned __int8**)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *a2);
  v3 = v2[72];
  if (v3 > 7 || v2[73] != 1) {
    return 0;
  }
  if (v3 - 5 <= 1) {
    if ((*((_DWORD*)a2 + 1) & 0xF) * (unsigned int)v2[87] - 1 >=
            *((unsigned __int8*)a2 + 2) &&
        (*((_BYTE*)a2 + 3) & 0x20) == 0) {
      v6 = a2;
      v7 = game_Unit_Unknown6c90c0(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL));
      a2 = v6;
      if ((v7 & 1) != 0) {
        return UnitItem_6e8bc0(a2);
      }
    }
    return 0;
  }
  if ((*((_BYTE*)a2 + 3) & 0x20) != 0) {
    return 0;
  }
  return UnitItem_6e8bc0(a2);
}

#pragma GCC visibility pop
