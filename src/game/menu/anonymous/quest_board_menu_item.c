#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_BaseQuestMenuItem_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 QuestBoardMenuItem_DeletingDestructor(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_162aea0(_QWORD, _QWORD);
__int64 GameRoutine_16824c0(_QWORD);
__int64 GameRoutine_1683020(_QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_717fc0(_QWORD, _QWORD);
__int64 GameRoutine_821090(_QWORD);
__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 GameSubquestData_1267be0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_1267cf0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 HelpQuestInfo_15d4830(_QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN GameData_1ad0ee4;
extern _UNKNOWN GameData_1aebe59;
extern _UNKNOWN* GameData_2130b30;
extern __int64 GameData_20e4358;
extern __int64 GameData_20e5958;
extern __int64 GameData_225e7a0;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e030[4];
__int64
game_menu_anonymous_QuestBoardMenuItem_ACall_closure_Invoke_1849c00(__int64 a1);
__int64 game_menu_anonymous_QuestBoardMenuItem_ACall_closure_Invoke_1849da0(
    __int64 result, __int64* a2);
__int64
game_menu_anonymous_QuestBoardMenuItem_ACall_closure_Invoke_1849fd0(__int64 a1);
__int64 game_menu_anonymous_QuestBoardMenuItem_ACall_closure1_Invoke_184a720(
    __int64 a1, __int64* a2);
__int64 game_menu_anonymous_QuestBoardMenuItem_ACall_closure1_Invoke_184a830(
    __int64 a1, __int64* a2);
__int64 game_menu_anonymous_QuestBoardMenuItem_ACall_closure1_Invoke_184a9b0(
    __int64 a1, __int64* a2);
__int64 game_menu_anonymous_QuestBoardMenuItem_ACall_closure1_Invoke_184acf0(
    __int64 a1);
__int64 game_menu_anonymous_QuestBoardMenuItem_ACall_closure1_Invoke_184b110(
    __int64 result);
__int64 game_menu_anonymous_QuestBoardMenuItem_ACall_closure1_Invoke_184b2c0(
    __int64 result, __int64* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_173eee0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1849a70(_QWORD);
__int64 ProcList_9bd480(_QWORD);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*GameData_20e5e60[])();
extern __int64 (*GameData_20e5ee0[])();
extern __int64 (*GameData_20e5f60[])();
extern __int64 (*GameData_20e5fe0[])();
__int64 game_menu_anonymous_QuestBoardMenuItem_ACall_closure_Invoke(__int64 a1);
__int64
game_menu_anonymous_QuestBoardMenuItem_ACall_closure1_Invoke(__int64 result,
                                                             __int64* a2);

__int64 QuestBoardMenuItem_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = &game_menu_anonymous_BaseQuestMenuItem_vtable;
  v2 = *(_QWORD*)(a1 + 112);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 32);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                    v5);
    }
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, a1);
}

__int64 game_menu_anonymous_QuestBoardMenuItem_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = ProcList_9bd480(*(_QWORD*)(v1 + 8));
  if (v2 == 0) {
    goto LABEL_22;
  }
  v3 = v2;
  v10[0] = GameData_20e5e60;
  v10[1] = v1;
  v11 = v10;
  game_ProcList_Call_9bcfa0(v2, v10);
  if (v11 == v10) {
    v4 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_7;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v11 + v4))((__int64)v11);
LABEL_7:
  v10[0] = GameData_20e5ee0;
  v10[1] = v1;
  v11 = v10;
  game_ProcList_Call_9bcfa0(v3, v10);
  if (v11 == v10) {
    v5 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_12;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v11 + v5))((__int64)v11);
LABEL_12:
  v10[0] = GameData_20e5f60;
  v10[1] = v1;
  v11 = v10;
  game_ProcList_Call_9bcfa0(v3, v10);
  if (v11 == v10) {
    v6 = 32;
    goto LABEL_16;
  }
  if (v11 != nullptr) {
    v6 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v11 + v6))((__int64)v11);
  }
  v10[0] = GameData_20e5fe0;
  v10[1] = v1;
  v11 = v10;
  game_ProcList_Call_9bcfa0(v3, v10);
  if (v11 == v10) {
    v7 = 32;
    goto LABEL_21;
  }
  if (v11 != nullptr) {
    v7 = 40;
  LABEL_21:
    (*(void (**)(__int64))(*v11 + v7))((__int64)v11);
  }
LABEL_22:
  snd_Fade_Fade_10c830(v10, 0.0f);
  snd_play_ff2d0((void*)(&v9), "SE_SYS_Stamp", "SE_SYS_Stamp", v10, 0, 65537, 0,
                 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v10);
  return 2;
}

__int64

game_menu_anonymous_QuestBoardMenuItem_ACall_closure_Invoke_1849c00(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;

  GameRoutine_1560070((void*)&v5, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 848LL,
                      "L_Info/L_Stamp");
  result = v6;
  if (v6 != 0) {
    v2 = std___1___shared_weak_count_lock(v6);
    v3 = v5;
    result = v6;
    if (v6 != 0) {
      result = std___1___shared_weak_count___release_weak(v6);
    }
    if (v2 == 0 || v3 == 0) {
      if (v2 == 0) {
        return result;
      }
    }
    else {
      result = LayoutAccessor_1562680(v3, "Wait", 1.0);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      return std___1___shared_weak_count___release_weak(v2);
    }
  }
  return result;
}

__int64 game_menu_anonymous_QuestBoardMenuItem_ACall_closure_Invoke_1849da0(
    __int64 result, __int64* a2)
{
  __int64 v2;
  _BYTE* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE v7[32];
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BYTE v12[4];

  v2 = *a2;
  v3 = *(_BYTE**)(*(_QWORD*)(result + 8) + 152LL);
  v10 = 0;
  v11 = 0;
  v8 = nullptr;
  v9 = 0;
  if (v3[9] == 3) {
    v3[9] = 4;
    v12[0] = 1;
    if ((*(_BYTE*)(*(_QWORD*)v3 + 161LL) & 4) != 0) {
      GameSubquestData_1267be0(v3, &v9, v7, v12);
    }
    else {
      v4 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
      GameSubquestData_1267cf0(v4, v3, &v9, v7, v12);
      ProcInst_657850(v4, GameData_2130b30, "ProcReward", 1, v2);
    }
    result = (__int64)v8;
    if (v8 == v7) {
      v5 = 32;
    }
    else {
      if (v8 == nullptr) {
        goto LABEL_10;
      }
      v5 = 40;
    }
    result = (*(__int64 (**)(void*))(*(_QWORD*)v8 + v5))((void*)v8);
  }
LABEL_10:
  if (v9 != 0) {
    v10 = v9;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v9);
  }
  return result;
}

__int64

game_menu_anonymous_QuestBoardMenuItem_ACall_closure_Invoke_1849fd0(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e030[0], &GameData_20e5958, 0);
    if (result != 0) {
      v2 = result;
      v3 = *(_QWORD*)(result + 336);
      if (v3 != 0) {
        v4 = __dynamic_cast(v3, GameData_212e008[0], &GameData_20e4358, 0);
        if (v4 != 0) {
          v5 = v4;
          v6 = LayoutAccessor_155fbe0(v2 + 952, "L_Info");
          v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 560LL))(v5);
          HelpQuestInfo_15d4830(v6, v7);
        }
      }
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 1152LL))(v2);
      if ((result & 1) != 0) {
        v8 = GameData_225e7a0;
        if (GameData_225e7a0 != 0) {
          GameRoutine_16824c0(GameData_225e7a0);
          return GameRoutine_1683020(*(_QWORD*)(v8 + 168));
        }
      }
    }
  }
  return result;
}

__int64 game_menu_anonymous_QuestBoardMenuItem_ACall_closure1_Invoke_184a720(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  char v4;

  v2 = *a2;
  GameRoutine_887920(&v4, &GameData_1aebe59);
  return GameRoutine_162aea0(v2, &v4);
}

__int64 game_menu_anonymous_QuestBoardMenuItem_ACall_closure1_Invoke_184a830(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  const char* v8;

  v2 = *a2;
  v8 = "LGV_XXX_Notice_Unlock_Quest_001";
  v6 = *(_QWORD*)(GameRoutine_821090(37) + 8);
  v5 = game_HashString(v6);
  result = GameRoutine_717fc0(&v5, 1);
  if ((result & 1) != 0) {
    result = game_menu_Dialog__CreateBind_game_menu_Dialog(v2, &v8);
    if (result != 0) {
      v7 = nullptr;
      GameRoutine_6680e0(&v5, result + 1248);
      result = (__int64)v7;
      if (v7 == &v5) {
        v4 = 32;
      }
      else {
        if (v7 == nullptr) {
          return result;
        }
        v4 = 40;
      }
      return (*(__int64 (**)(void*))(*v7 + v4))(v7);
    }
  }
  return result;
}

__int64 game_menu_anonymous_QuestBoardMenuItem_ACall_closure1_Invoke_184a9b0(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  char v4;

  v2 = *a2;
  GameRoutine_887920(&v4, &GameData_1ad0ee4);
  return GameRoutine_162aea0(v2, &v4);
}

__int64

game_menu_anonymous_QuestBoardMenuItem_ACall_closure1_Invoke_184acf0(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 160) = 1;
  return 2;
}

__int64

game_menu_anonymous_QuestBoardMenuItem_ACall_closure1_Invoke(__int64 result,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v6[2];
  __int64 v7;
  __int64 v8;

  v2 = *(_QWORD*)(result + 8);
  if (*(_BYTE*)(v2 + 160) == 1) {
    v3 = *a2;
    LayoutAccessor_1560070((void*)(&v7), *(_QWORD*)(v2 + 8) + 848LL,
                           "L_Info/L_Stamp");
    if (v8 != 0) {
      v4 = std___1___shared_weak_count_lock(v8);
      if (v4 != 0) {
        v5 = v7;
      }
      else {
        v5 = 0;
      }
      if (v8 != 0) {
        std___1___shared_weak_count___release_weak(v8);
      }
      if (v5 != 0) {
        v7 = v5;
        v8 = v4;
        if (v4 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                    memory_order_relaxed);
        }
        v6[0] = "In";
        v6[1] = 2;
        GameRoutine_173eee0(v3, &v7, v6);
        if (v8 != 0) {
          std___1___shared_weak_count___release_weak(v8);
        }
      }
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
    }
    GameRoutine_1849a70(v2);
    snd_Fade_Fade_10c830(&v7, 0.0f);
    snd_play_ff2d0((void*)(v6), "SE_SYS_Stamp", "SE_SYS_Stamp", &v7, 0, 65537,
                   0, 0.0f, 1.0f);
    return snd_Fade_Destroy_Fade(&v7);
  }
  return result;
}

__int64 game_menu_anonymous_QuestBoardMenuItem_ACall_closure1_Invoke_184b110(
    __int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(result + 8);
  if (*(_BYTE*)(v1 + 160) == 1) {
    GameRoutine_1560070((void*)&v4, *(_QWORD*)(v1 + 8) + 848LL,
                        "L_Info/L_Stamp");
    result = v5;
    if (v5 != 0) {
      v2 = std___1___shared_weak_count_lock(v5);
      v3 = v4;
      result = v5;
      if (v5 != 0) {
        result = std___1___shared_weak_count___release_weak(v5);
      }
      if (v2 != 0 && v3 != 0) {
        result = LayoutAccessor_1562680(v3, "Wait", 1.0);
      }
      else if (v2 == 0) {
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
        return std___1___shared_weak_count___release_weak(v2);
      }
    }
  }
  return result;
}

__int64 game_menu_anonymous_QuestBoardMenuItem_ACall_closure1_Invoke_184b2c0(
    __int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BYTE v10[32];
  _BYTE* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BYTE v17[4];

  v4 = *(_QWORD*)(result + 8);
  if (*(_BYTE*)(v4 + 160) != 1) {
    return result;
  }
  v15 = v2;
  v16 = v3;
  v5 = *(_BYTE**)(v4 + 152);
  v13 = 0;
  v14 = 0;
  v11 = nullptr;
  v6 = *a2;
  v12 = 0;
  if (v5[9] == 3) {
    v5[9] = 4;
    v17[0] = 1;
    if ((*(_BYTE*)(*(_QWORD*)v5 + 161LL) & 4) != 0) {
      GameSubquestData_1267be0(v5, &v12, v10, v17);
    }
    else {
      v7 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
      GameSubquestData_1267cf0(v7, v5, &v12, v10, v17);
      ProcInst_657850(v7, GameData_2130b30, "ProcReward", 1, v6);
    }
    result = (__int64)v11;
    if (v11 == v10) {
      v8 = 32;
    }
    else {
      if (v11 == nullptr) {
        goto LABEL_11;
      }
      v8 = 40;
    }
    result = (*(__int64 (**)(void*))(*(_QWORD*)v11 + v8))((void*)v11);
  }
LABEL_11:
  if (v12 != 0) {
    v13 = v12;
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v12);
  }
  return result;
}

#pragma GCC visibility pop
