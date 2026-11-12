#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BonusExpList_7ffb30(_QWORD);
__int64 GameRoutine_1314ec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1317f10(_QWORD, _QWORD);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_7dbc20(_QWORD, _QWORD);
__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);
__int64 GameVariable_828dc0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 MiasmaManager_14a7290(__int64*);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ad447e;
extern _UNKNOWN GameData_1ad7c7a;
extern _UNKNOWN GameData_1ad7fc2;
extern _UNKNOWN GameData_1ad7fdb;
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_21d99e8;
extern __int64 GameData_21d99f8;
extern __int64 GameData_21f1628;
extern __int64 GameData_21f61c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212d708;
extern __int64* GameData_212d718;
extern __int64* GameData_212d728[2];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_8c43b0(void);
__int64 ProcDestroyMiasmaSeq_14abed0_alt1(__int64 a1) __asm__(
    "ProcDestroyMiasmaSeq_14abed0");
__int64 ProcDestroyMiasmaSeq_14ac250(__int64 a1);
__int64 ProcDestroyMiasmaSeq_14ac2b0(__int64 result);
__int64 ProcDestroyMiasmaSeq_14ac520(__int64 result);
__int64 ProcDestroyMiasmaSeq_14ac580(__int64 a1);
__int64 ProcDestroyMiasmaSeq_14ac600(__int64 result);
__int64 ProcDestroyMiasmaSeq_14ac670();
__int64 game_gmap_anonymous_ProcDestroyMiasmaSeq_ShowExpResult_closure_Invoke(
    __int64 a1, __int64* a2);
_QWORD* game_telop_17549a0(__int64, __int64**, int, __int64);
__int64 GameRoutine_8b03f0(__int64, int, char);
__int64 Troop_133ed80(__int64 result, __int64);
__int64 game_ProcInst_Unregister(__int64 result);
__n128 GameRoutine_658c00(_QWORD*);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak();
bool MiasmaManager_14a9ce0(__int64, __int64*);
extern __int64 (*GameData_2044a20[])();
extern __int64 (*GameData_2044b88[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gmap_anonymous_ProcDestroyMiasmaSeq_vtable[])();
extern __int64* GameData_212c790;
extern __int64 GameData_21c96e8;
extern __int64 GameData_22416b0;
__n128 game_gmap_anonymous_ProcDestroyMiasmaSeq_ShowExpResult(__int64 a1);
__int64 ProcDestroyMiasmaSeq_14abea0(__int64 result);
__int64 ProcDestroyMiasmaSeq_14ac160(__int64 result);
__n128 ProcDestroyMiasmaSeq_Destructor(__int64 a1);
__n128 ProcDestroyMiasmaSeq_DeletingDestructor(__int64 a1);
__int64 GameRoutine_9b11a0_alt1(_QWORD*, unsigned __int64*,
                                int) __asm__("GameRoutine_9b11a0");
__int64 GameVariable_828dc0_alt1(__int64, unsigned __int64*,
                                 int) __asm__("GameVariable_828dc0");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
void MiasmaManager_14a7290_alt1(_QWORD*) __asm__("MiasmaManager_14a7290");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
unsigned __int64 ProcDestroyMiasmaSeq_14abed0(__int64 a1);

__n128 game_gmap_anonymous_ProcDestroyMiasmaSeq_ShowExpResult(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* i;
  __int64 v10;
  __n128 result;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  struct {
    _BYTE v17[32];
    _BYTE* v18;
  } v17_;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  struct {
    __int64* v21;
    __int64* v22;
    __int64 v23;
  } v21_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v21_.v22 = nullptr;
  v21_.v23 = 0;
  v21_.v21 = nullptr;
  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v4 = *(__int64**)(v1 + 8);
  v3 = *(__int64**)(v1 + 16);
  if (v2 < 0) {
    if (v4 == v3) {
      goto LABEL_25;
    }
    for (i = v4 + 1;; ++i) {
      v10 = *(i - 1);
      if (*(_QWORD*)(v10 + 96) == 0 && *(_QWORD*)(v10 + 552) == 0) {
        break;
      }
    }
    if ((*(_DWORD*)(v10 + 84) & 0x80000000) != 0) {
      goto LABEL_25;
    }
    do {
      do {
        v5 = *v4++;
      } while (*(_QWORD*)(v5 + 96) != 0);
    } while (*(_QWORD*)(v5 + 552) != 0);
  }
  else {
    if (v4 == v3) {
      goto LABEL_25;
    }
    v7 = *v4;
    v6 = v4 + 1;
    v5 = v7;
    if (*(_DWORD*)(v7 + 84) != v2) {
      do {
        v8 = *v6++;
        v5 = v8;
      } while (*(_DWORD*)(v8 + 84) != v2);
    }
  }
  v19_.v19[0] = GameData_2044a20;
  v19_.v19[1] = &v21_.v21;
  v19_.v20 = v19_.v19;
  Troop_133ed80(v5, (__int64)v19_.v19),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v19_.v20 == v19_.v19) {
    v13 = 32;
    goto LABEL_18;
  }
  if (v19_.v20 != nullptr) {
    v13 = 40;
  LABEL_18:
    (*(void (**)(__int64))(*v19_.v20 + v13))((__int64)v19_.v20),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v14 = v21_.v21;
  if (v21_.v22 != v21_.v21) {
    v17_.v18 = nullptr;
    game_telop_17549a0(a1, &v21_.v21, 1, (__int64)v17_.v17),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v17_.v18 == v17_.v17) {
      v15 = 32;
      goto LABEL_24;
    }
    if (v17_.v18 != nullptr) {
      v15 = 40;
    LABEL_24:
      (*(void (**)(__int64))(*(_QWORD*)v17_.v18 + v15))((__int64)v17_.v18),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  LABEL_25:
    v14 = v21_.v21;
  }
  if (v14 != nullptr) {
    v21_.v22 = v14;
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
  }
  return result;
}

__int64 ProcDestroyMiasmaSeq_14abea0(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(***(_QWORD***)(result + 208) + 112LL);
  if (v1 != 0) {
    return GameRoutine_8b03f0(result, *(unsigned __int16*)(v1 + 90), 1);
  }
  return result;
}

unsigned __int64 ProcDestroyMiasmaSeq_14abed0(__int64 a1)
{
  __int64** v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  signed __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  unsigned __int64 result;
  struct {
    __int64 v12;
    void* v13;
  } v12_;

  v1 = *(__int64***)(a1 + 208);
  v3 = *v1;
  v4 = **v1;
  if (v4 != 0) {
    MiasmaManager_14a7290_alt1((_QWORD*)**v1);
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    v1 = *(__int64***)(a1 + 208);
    v3 = *v1;
  }
  v6 = v1[1];
  v7 = (char*)v6 - (char*)(v3 + 1);
  if (v6 != v3 + 1) {
    memmove_alt1((__int64)v3, (__int64)(v3 + 1), (char*)v6 - (char*)(v3 + 1));
  }
  v1[1] = (__int64*)((char*)v3 + v7);
  v8 = **(_QWORD**)(a1 + 208);
  v9 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 8LL);
  v12_.v13 = &GameData_1ad7fdb;
  if (v9 == v8) {
    v10 = 3;
  }
  else {
    v10 = 2;
  }
  *(_DWORD*)(a1 + 152) = v10;
  v12_.v12 = game_HashString_alt1((__int64)&GameData_1ad7fdb);
  GameRoutine_9b11a0_alt1(&GameData_21f61c0, (unsigned __int64*)&v12_.v12, 1);
  v12_.v13 = &GameData_1ad7c7a;
  result = game_HashString_alt1((__int64)&GameData_1ad7c7a);
  v12_.v12 = result;
  if (game_GameModeData_instance_ != 0) {
    return GameVariable_828dc0_alt1(
        *(_QWORD*)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v12_.v12, 1);
  }
  return result;
}

__int64 ProcDestroyMiasmaSeq_14ac160(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64** v3;
  __int64** v4;
  __int64* v5;
  __int64 v6;
  __int64*** v7;
  __int64*** v8;
  __int64** v9;

  v1 = result;
  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(__int64***)(v2 + 8);
  v4 = *(__int64***)(v2 + 16);
  if (v3 != v4) {
    while (1) {
      v5 = *v3;
      v6 = (*v3)[12];
      if (v6 != 0 && (unsigned int)*(unsigned __int8*)(v6 + 32) - 3 <= 1) {
        result = *(_QWORD*)(GameData_22416b0 + 8);
        v7 = *(__int64****)(result + 48);
        v8 = *(__int64****)(result + 56);
        if (v7 != v8) {
          while (1) {
            v9 = *v7++;
            if (*v9 == v5) {
              break;
            }
            if (v7 == v8) {
              goto LABEL_4;
            }
          }
          result = MiasmaManager_14a9ce0(result, *v3);
          if ((result & 1) != 0) {
            break;
          }
        }
      }
    LABEL_4:
      if (++v3 == v4) {
        goto LABEL_12;
      }
    }
    *(_QWORD*)(v1 + 240) = v5;
  }
LABEL_12:
  if (*(_QWORD*)(v1 + 240) == 0) {
    *(_DWORD*)(v1 + 152) = 4;
  }
  return result;
}

__int64 ProcDestroyMiasmaSeq_14ac250(__int64 a1)
{
  __int64 v1;
  __int64* v2;

  v1 = *(_QWORD*)(a1 + 240);
  v2 = GameData_212d708;
  if (v1 != 0) {
    GameRoutine_1317f10(*(_QWORD*)(*GameData_212d708 + 16), v1 + 48);
  }
  return GameRoutine_1314ec0(*(_QWORD*)(*GameData_212d718 + 16),
                             *(_QWORD*)(*v2 + 16) + 80LL, 0);
}

__int64 ProcDestroyMiasmaSeq_14ac2b0(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if (*(float*)(*(_QWORD*)(GameData_21f1628 + 16) + 796LL) ==
      *(float*)(*(_QWORD*)(GameData_21f1628 + 16) + 792LL)) {
    v1 = *(unsigned __int8**)(result + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
  }
  return result;
}

__int64 ProcDestroyMiasmaSeq_14ac520(__int64 result)
{
  _DWORD* v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;

  v1 = *(_DWORD**)(result + 248);
  if (*(_QWORD*)v1 == 0 || *(_DWORD*)(*(_QWORD*)v1 + 16LL) != v1[2]) {
    v2 = *(unsigned __int8**)(result + 16);
    if (v2 != nullptr) {
      v3 = *v2;
      v4 = v3 > 0x10;
      v5 = (1 << v3) & 0x1CE00;
      if (!v4 && v5 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
  }
  return result;
}

__int64 ProcDestroyMiasmaSeq_14ac580(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _BYTE v3[32];
  _BYTE* v4;
  const char* v5;

  v5 = "MID_Gmap_ShowHellGate_Message";
  result = game_menu_Dialog__CreateBind_game_menu_Dialog(a1, &v5);
  if (result != 0) {
    v4 = nullptr;
    GameRoutine_6680e0(v3, result + 1248);
    result = (__int64)v4;
    if (v4 == v3) {
      v2 = 32;
    }
    else {
      if (v4 == nullptr) {
        return result;
      }
      v2 = 40;
    }
    return (*(__int64 (**)(void*))(*(_QWORD*)v4 + v2))((void*)v4);
  }
  return result;
}

__int64 ProcDestroyMiasmaSeq_14ac600(__int64 result)
{
  __int64* v1;

  if ((*(_BYTE*)(result + 264) & 1) == 0) {
    v1 = GameData_212d708;
    GameRoutine_1317f10(*(_QWORD*)(*GameData_212d708 + 16), result + 224);
    return GameRoutine_1314ec0(*(_QWORD*)(*GameData_212d718 + 16),
                               *(_QWORD*)(*v1 + 16) + 80LL, 0);
  }
  return result;
}

__int64 ProcDestroyMiasmaSeq_14ac670()
{
  __int64 v0;
  __int64 result;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v0 + 16), 1);
  result = game_hub_ProgressEventView_instance_;
  if (game_hub_ProgressEventView_instance_ != 0) {
    result = GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
  }
  *(_DWORD*)(v0 + 5856) |= 0x10000u;
  return result;
}

__int64 game_gmap_anonymous_ProcDestroyMiasmaSeq_ShowExpResult_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  char v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  int v23;
  int v24;
  int v25;
  int v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  unsigned int v33;
  int v34;
  __int64 result;
  __int64* v36;
  int v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  void* v51;

  v2 = *a2;
  v51 = &GameData_1ad7fc2;
  v50 = game_HashString(&GameData_1ad7fc2);
  if (game_GameModeData_instance_ != 0 &&
      (v4 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &v50)) != 0) {
    v5 = *(_DWORD*)(v4 + 32);
  }
  else {
    v5 = 20;
  }
  v51 = &GameData_1ad447e;
  v50 = game_HashString(&GameData_1ad447e);
  if (game_GameModeData_instance_ != 0 &&
      (v6 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &v50)) != 0) {
    v7 = *(_DWORD*)(v6 + 32);
  }
  else {
    v7 = 200;
  }
  v8 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  if ((int)v8 < 1) {
    v10 = 0;
    v15 = *(_QWORD*)(v2 + 440);
    if (v15 != 0) {
    LABEL_21:
      v16 = *(_BYTE*)(v15 + 16);
      goto LABEL_24;
    }
  }
  else {
    v9 = *(_DWORD*)(v2 + 504);
    v10 = 0;
    v11 = *(_DWORD*)(GameData_21d9968 + 4LL * (unsigned int)(v8 - 1));
    if (v11 >= v9) {
      v11 = *(_DWORD*)(v2 + 504);
    }
    if (v9 >= *(_DWORD*)GameData_21d9968) {
      v12 = v11;
    }
    else {
      v12 = *(_DWORD*)GameData_21d9968;
    }
    while (1) {
      v13 = (unsigned int)(v10 + v8) >> 1;
      v14 = *(_DWORD*)(GameData_21d9968 + 4LL * v13);
      if (v12 == v14) {
        break;
      }
      if (v12 < v14) {
        LODWORD(v8) = (unsigned int)(v10 + v8) >> 1;
      }
      else {
        v10 = v13 + 1;
      }
      if (v10 >= (int)v8) {
        v15 = *(_QWORD*)(v2 + 440);
        if (v15 == 0) {
          goto LABEL_23;
        }
        goto LABEL_21;
      }
    }
    v10 = v13 + 1;
    v15 = *(_QWORD*)(v2 + 440);
    if (v15 != 0) {
      goto LABEL_21;
    }
  }
LABEL_23:
  v16 = 9;
LABEL_24:
  if (((1 << v16) & 0xF1) != 0) {
    goto LABEL_49;
  }
  v17 = *(_QWORD*)(v2 + 392);
  if (v10 == *(unsigned __int8*)(v17 + 445)) {
    if (game_GameModeData_instance_ == 0) {
      v18 = 0;
      v20 = *(unsigned __int8*)(v17 + 442);
      if (*(_BYTE*)(v17 + 442) != 0) {
        goto LABEL_48;
      }
      goto LABEL_41;
    }
    v18 = *(_DWORD*)(game_GameModeData_instance_ + 68);
    v19 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    if (v19 != 0) {
      v18 += *(char*)(v19 + 128);
    }
    v20 = *(unsigned __int8*)(v17 + 442);
    if (*(_BYTE*)(v17 + 442) == 0) {
    LABEL_41:
      v21 = v18 + *(char*)(v17 + 443);
      if (v21 <= 1) {
        v21 = 1;
      }
      if (v21 >= 99) {
        v21 = 99;
      }
      if (*(_BYTE*)(v17 + 443) != 0) {
        v20 = v21;
      }
      else {
        v20 = v18;
      }
    }
  }
  else {
    v20 = v10 - *(char*)(v17 + 446);
    if (v20 <= 1) {
      v20 = 1;
    }
    if (v20 >= 99) {
      v20 = 99;
    }
    if (*(_BYTE*)(v17 + 446) == 0) {
      v20 = v10;
    }
  }
LABEL_48:
  v10 = *(unsigned __int8*)(v17 + 447);
  if (*(_BYTE*)(v17 + 447) == 0) {
    v24 = *(char*)(v17 + 448);
    if (v24 != 0) {
      v25 = v20 + v24;
      if (v25 <= 1) {
        v25 = 1;
      }
      if (v25 >= 99) {
        v10 = 99;
      }
      else {
        v10 = v25;
      }
      v22 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        goto LABEL_50;
      }
    }
    else {
      v10 = v20;
      v22 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        goto LABEL_50;
      }
    }
    goto LABEL_58;
  }
LABEL_49:
  v22 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
  LABEL_50:
    v23 = *(_DWORD*)(v22 + 68);
    goto LABEL_59;
  }
LABEL_58:
  v23 = 0;
LABEL_59:
  LODWORD(v51) = 51300;
  v26 = v5 & ~(v5 >> 31);
  if (v26 >= 100) {
    v26 = 100;
  }
  v27 = (unsigned int)(2 * v26);
  v28 = GameRoutine_7dbc20(GameData_21d99e8, (unsigned int)(v23 - v10));
  if (v28 >= 0x1F4) {
    v29 = 500;
  }
  else {
    v29 = v28;
  }
  v30 = v27 | (v29 << 32);
  if (v23 <= 1) {
    v31 = 1;
  }
  else {
    v31 = v23;
  }
  if (v31 >= 99) {
    v31 = 99;
  }
  v32 = (v31 << 15) | 1u;
  v33 = GameRoutine_7dbc20(GameData_21d99f8, (unsigned int)v10);
  if (v33 >= 0x1F4) {
    v34 = 500;
  }
  else {
    v34 = v33;
  }
  v50 = v30 | v32 | (unsigned int)(v34 << 23) | 0xC80000000000LL;
  result = BonusExpList_7ffb30(&v50);
  v36 = *(__int64**)(a1 + 8);
  v37 = (int)result * v7 / 100;
  v38 = v36[1];
  v39 = v36[2];
  if (v38 >= v39) {
    v41 = *v36;
    v42 = v38 - *v36;
    v43 = 1 - 0x5555555555555555LL * (v42 >> 3);
    if (v43 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_8c43b0();
    }
    v44 = fw_memory_g_heap_manager_ptr;
    v45 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v39 - v41) >> 3);
    if (2 * v45 > v43) {
      v43 = 2 * v45;
    }
    if (v45 >= 0x555555555555555LL) {
      v46 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v46 = v43;
    }
    if (v46 != 0) {
      if (v46 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v47 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v46, 16, 0);
    }
    else {
      v47 = 0;
    }
    v48 = v47 + v42;
    *(_QWORD*)v48 = v2;
    *(_DWORD*)(v48 + 8) = v37;
    *(_DWORD*)(v48 + 12) = 0;
    v40 = v47 + v42 + 24;
    *(_WORD*)(v48 + 16) = 1;
    result = memcpy(v47, v41, v42);
    *v36 = v47;
    v36[1] = v40;
    v36[2] = v47 + 24 * v46;
    if (v41 != 0) {
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)v44 + 200LL) == 0) {
        v49 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v44 + v49, v41);
    }
  }
  else {
    *(_QWORD*)v38 = v2;
    *(_DWORD*)(v38 + 8) = v37;
    *(_DWORD*)(v38 + 12) = 0;
    v40 = v38 + 24;
    *(_WORD*)(v38 + 16) = 1;
  }
  v36[1] = v40;
  return result;
}

__n128 ProcDestroyMiasmaSeq_Destructor(__int64 a1)
{
  __int64 v1;
  _QWORD* v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 256);
  *(_QWORD*)a1 = game_gmap_anonymous_ProcDestroyMiasmaSeq_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
  }
  v3 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_2044b88;
  if (v3 == (_QWORD*)(a1 + 160)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_9;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_9:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

__n128 ProcDestroyMiasmaSeq_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 256);
  *(_QWORD*)a1 = game_gmap_anonymous_ProcDestroyMiasmaSeq_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
  }
  v3 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_2044b88;
  if (v3 == (_QWORD*)(a1 + 160)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_9;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_9:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((_QWORD*)(a1 + 88));
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
}

#pragma GCC visibility pop
