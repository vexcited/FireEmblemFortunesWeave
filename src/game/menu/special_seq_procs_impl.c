#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_667ea0(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_e91980(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fff8d8[])();
extern __int64 GameData_21ca010;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance_;
extern int GameData_222e468;
extern int game_script_hub_talk_g_choice_menu_result;
struct PseudoSret GameRoutine_febfc0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 SpecialSeqProcs_fdf8e0(__int64 a1);
__int64 SpecialSeqProcs_fdfb40(__int64 result);
__int64 SpecialSeqProcs_fdfdc0(__int64 result);
_QWORD* SpecialSeqProcs_fe14a0(_QWORD* result, __int64 a2);
__int64 SpecialSeqProcs_fe1600(__int64 a1);
__n128
SpecialSeqProcs_fe2a60_alt1(__int64 a1) __asm__("SpecialSeqProcs_fe2a60");
__int64 SpecialSeqProcs_fe2ba0(__int64 a1);
__int64 SpecialSeqProcs_fe4900(__int64 result);
__int64 SpecialSeqProcs_fe5780(__int64 result);
__int64 SpecialSeqProcs_fe5960(__int64 result);
__attribute__((swiftcall)) void game_febfc0(PSEUDO_X8);
__int64 game_menu_TalkSelectGiftMenu_HasListItem(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SpecialSeqProcs_fe2a60(__int64 a1);

__int64 SpecialSeqProcs_fdf8e0(__int64 a1)
{
  __int64 result;
  int v3;
  bool v4;
  int v5;
  __int64 v6;
  __int16 v7;
  __int64 v8;
  __int64 v9;

  v9 = *(_QWORD*)(a1 + 176);
  result = game_HashString(v9);
  v8 = result;
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &v8)) != 0) {
    v3 = *(_DWORD*)(result + 32);
    v4 = v3 <= 1;
    if (v3 == 1) {
      v5 = 2;
    }
    else {
      v5 = 1;
    }
    if (!v4) {
      v5 = 3;
    }
    v6 = *(_QWORD*)(a1 + 8);
    if (v6 != 0) {
      while (1) {
      LABEL_14:
        if (*(_BYTE*)v6 == 2) {
          if (*(_DWORD*)(v6 + 32) == v5) {
            v7 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v6;
            *(_WORD*)(a1 + 136) = v7 & 0xFF7F;
            return result;
          }
        }
        else if (*(_BYTE*)v6 == 0) {
          return result;
        }
        v6 += 64;
      }
    }
  }
  else {
    v5 = 1;
    v6 = *(_QWORD*)(a1 + 8);
    if (v6 != 0) {
      goto LABEL_14;
    }
  }
  return result;
}

__int64 SpecialSeqProcs_fdfb40(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = result;
  if (game_script_hub_talk_g_choice_menu_result == 0) {
    v2 = *(_QWORD*)(result + 176);
    v5 = *(_QWORD*)(v1 + 176);
    v4 = game_HashString(v2);
    if (game_GameModeData_instance_ == 0 ||
        (result = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), &v4)) == 0 ||
        *(int*)(result + 32) <= 0) {
      v5 = *(_QWORD*)(v1 + 176);
      v4 = game_HashString(v5);
      result = game_VariableManager_SetFlag(&v4, 1);
    }
    GameData_222e468 = 2;
  }
  v3 = *(_QWORD*)(v1 + 8);
  if (v3 != 0) {
    while (1) {
      if (*(_BYTE*)v3 == 2) {
        if (*(_DWORD*)(v3 + 32) == 4) {
          *(_QWORD*)(v1 + 16) = v3;
          *(_WORD*)(v1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v3 == 0) {
        return result;
      }
      v3 += 64;
    }
  }
  return result;
}

__int64 SpecialSeqProcs_fdfdc0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = result;
  if (game_script_hub_talk_g_choice_menu_result == 0) {
    v2 = *(_QWORD*)(result + 176);
    v5 = *(_QWORD*)(v1 + 176);
    v4 = game_HashString(v2);
    if (game_GameModeData_instance_ == 0 ||
        (result = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), &v4)) == 0 ||
        *(int*)(result + 32) <= 1) {
      v5 = *(_QWORD*)(v1 + 176);
      v4 = game_HashString(v5);
      result = game_VariableManager_SetFlag(&v4, 2);
    }
    GameData_222e468 = 2;
  }
  v3 = *(_QWORD*)(v1 + 8);
  if (v3 != 0) {
    while (1) {
      if (*(_BYTE*)v3 == 2) {
        if (*(_DWORD*)(v3 + 32) == 4) {
          *(_QWORD*)(v1 + 16) = v3;
          *(_WORD*)(v1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v3 == 0) {
        return result;
      }
      v3 += 64;
    }
  }
  return result;
}

_QWORD* SpecialSeqProcs_fe14a0(_QWORD* result, __int64 a2)
{
  _QWORD* v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int16 v10;
  _QWORD v11[4];
  _QWORD* v12;
  char v13;

  v2 = result;
  if (game_script_hub_talk_g_choice_menu_result != 0) {
    GameData_222e468 = 2;
    v3 = 4;
    v4 = result[1];
    if (v4 != 0) {
      goto LABEL_22;
    }
    return result;
  }
  result = v11;
  v13 = 0;
  v11[0] = GameData_1fff8d8;
  v11[1] = &v13;
  v12 = v11;
  v5 = *(_QWORD*)(game_TransporterConst_List_instance_ + 8);
  v6 = *(unsigned int*)(v5 + 80);
  if ((int)v6 < 1) {
    goto LABEL_13;
  }
  v7 = 0;
  v8 = 12 * v6;
  do {
    a2 = *(_QWORD*)(v5 + 8) + v7;
    if (*(_WORD*)(a2 + 2) != 0) {
      if (v12 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*))(*v12 + 48LL))(v12);
    }
    v7 += 12;
  } while (v8 != v7);
  result = v12;
  if (v12 == v11) {
  LABEL_13:
    v9 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_15;
    }
    v9 = 40;
  }
  result =
      (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v9))(result, a2);

LABEL_15:
  if (v13 != 0) {
    v3 = 1;
  }
  else {
    v3 = 2;
  }
  v4 = v2[1];
  if (v4 != 0) {
    while (1) {
    LABEL_22:
      if (*(_BYTE*)v4 == 2) {
        if (*(_DWORD*)(v4 + 32) == v3) {
          v10 = *((_WORD*)v2 + 68);
          v2[2] = v4;
          *((_WORD*)v2 + 68) = v10 & 0xFF7F;
          return result;
        }
      }
      else if (*(_BYTE*)v4 == 0) {
        return result;
      }
      v4 += 64;
    }
  }
  return result;
}

__int64 SpecialSeqProcs_fe1600(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _BYTE v3[32];
  _BYTE* v4;
  const char* v5;

  v5 = "MID_LGV_Scout_Negotiation_SP_ItemChoice_Fab_m01_001";
  result = GameRoutine_667ea0(a1, &v5);
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

void SpecialSeqProcs_fe2a60(__int64 a1)
{
  __int64 v2;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9[3];

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v2 = *(_QWORD*)(a1 + 8);
    if (v2 != 0) {
      while (1) {
        if (*(_BYTE*)v2 == 2) {
          if (*(_DWORD*)(v2 + 32) == 4) {
            *(_QWORD*)(a1 + 16) = v2;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            return;
          }
        }
        else if (*(_BYTE*)v2 == 0) {
          return;
        }
        v2 += 64;
      }
    }
    return;
  }
  game_febfc0((void*)(v9));
  if ((game_menu_TalkSelectGiftMenu_HasListItem((__int64)v9) & 1) != 0) {
    v5 = 1;
  }
  else {
    v5 = 2;
  }
  v6 = *(_QWORD*)(a1 + 8);
  if (v6 == 0) {
  LABEL_18:
    v7 = v9[0];
    if (v9[0] != 0) {
      goto LABEL_22;
    }
    return;
  }
  while (*(_BYTE*)v6 != 2) {
    if (*(_BYTE*)v6 == 0) {
      goto LABEL_18;
    }
  LABEL_15:
    v6 += 64;
  }
  if (*(_DWORD*)(v6 + 32) != v5) {
    goto LABEL_15;
  }
  *(_QWORD*)(a1 + 16) = v6;
  *(_WORD*)(a1 + 136) &= ~0x80u;
  v7 = v9[0];
  if (v9[0] != 0) {
  LABEL_22:
    v9[1] = v7;
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v7);
  }
}

__int64 SpecialSeqProcs_fe2ba0(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _BYTE v3[32];
  _BYTE* v4;
  const char* v5;

  v5 = "MID_LGV_Scout_Negotiation_SP_ItemChoice_Tob_m01_001";
  result = GameRoutine_667ea0(a1, &v5);
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

__int64 SpecialSeqProcs_fe4900(__int64 result)
{
  int v1;
  __int64 v2;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v1 = 3;
  }
  else {
    v1 = 4;
  }
  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    while (1) {
      if (*(_BYTE*)v2 == 2) {
        if (*(_DWORD*)(v2 + 32) == v1) {
          *(_QWORD*)(result + 16) = v2;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v2 == 0) {
        return result;
      }
      v2 += 64;
    }
  }
  return result;
}

__int64 SpecialSeqProcs_fe5780(__int64 result)
{
  int v1;
  __int64 v2;

  if (game_script_hub_talk_g_choice_menu_result == 2) {
    v1 = 2;
  }
  else {
    v1 = 4;
  }
  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    while (1) {
      if (*(_BYTE*)v2 == 2) {
        if (*(_DWORD*)(v2 + 32) == v1) {
          *(_QWORD*)(result + 16) = v2;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v2 == 0) {
        return result;
      }
      v2 += 64;
    }
  }
  return result;
}

__int64 SpecialSeqProcs_fe5960(__int64 result)
{
  int v1;
  __int64 v2;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v1 = 4;
  }
  else {
    v1 = 3;
  }
  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    while (1) {
      if (*(_BYTE*)v2 == 2) {
        if (*(_DWORD*)(v2 + 32) == v1) {
          *(_QWORD*)(result + 16) = v2;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v2 == 0) {
        return result;
      }
      v2 += 64;
    }
  }
  return result;
}

#pragma GCC visibility pop
