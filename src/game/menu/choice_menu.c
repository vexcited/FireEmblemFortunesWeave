#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_1565800(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16df7a0(__int64 result);
__int64 GameRoutine_16e7bd0(__int64);
__int64 GameRoutine_82dfe0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_menu_BasicMenu_Unknown57(void);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*game_menu_anonymous_ChoiceMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_212d460[6];
extern __int64* GameData_212d630[11];
extern char GameData_2262914;
extern int game_script_hub_talk_g_choice_menu_result;
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60f930(void);
__int64 ChoiceMenu_16e7e00(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5);
__int64 ChoiceMenu_16e8140(__int64 a1, __int64* a2);
__int64 ChoiceMenu_Unknown24();
__int64 ChoiceMenu_Unknown2_16e83f0(__int64 result);
__int64 ChoiceMenu_Unknown57(__int64 a1);
__int64 ChoiceMenu_16e7e00(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5)
{
  _QWORD* v8;
  _QWORD* v9;
  char* v11;
  char* v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  char* v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 result;
  __int64 v42;
  __int64 v43;
  char* v44;
  _QWORD* v45;
  char* v46;

  v46 = nullptr;
  v8 = a1;
  v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v44 = nullptr;
  v45 = nullptr;
  if (a2 != 0) {
    a1 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
    *a1 = a2;
    v11 = (char*)(a1 + 1);
    v12 = (char*)a1;
    v44 = (char*)a1;
    v45 = a1 + 1;
    v46 = (char*)(a1 + 1);
    if (a3 != 0) {
      goto LABEL_3;
    }
  }
  else {
    v12 = nullptr;
    v11 = nullptr;
    if (a3 != 0) {
    LABEL_3:
      v13 = v11 - v12;
      v14 = (v11 - v12) >> 3;
      v15 = v14 + 1;
      if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
        goto LABEL_61;
      }
      if (v13 >> 2 > v15) {
        v15 = v13 >> 2;
      }
      if (v13 >= 0x7FFFFFFFFFFFFFF8LL) {
        v16 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v16 = v15;
      }
      if (v16 != 0) {
        if (v16 >> 61 != 0) {
          goto LABEL_62;
        }
        v17 = fw_memory_HeapManager_Allocate(*v9, 8 * v16, 16, 0);
      }
      else {
        v17 = 0;
      }
      v11 = (char*)(v17 + 8 * v16);
      v19 = v17 + v13 - 8 * v14;
      *(_QWORD*)(v17 + v13) = a3;
      v18 = (char*)(v17 + v13 + 8);
      a1 = (_QWORD*)memcpy(v19, v12, v13);
      v44 = (char*)v19;
      v46 = v11;
      if (v12 != nullptr) {
        v20 = 128;
        if (*(_QWORD*)(*v9 + 200LL) == 0) {
          v20 = 56;
        }
        a1 = (_QWORD*)nn_mem_StandardAllocator_Free(*v9 + v20, v12);
      }
      v45 = v18;
      v12 = (char*)v19;
      if (a4 != 0) {
        goto LABEL_22;
      }
      goto LABEL_14;
    }
  }
  v18 = v11;
  if (a4 != 0) {
  LABEL_22:
    if (v18 >= v11) {
      v21 = (char*)(v18 - v12);
      v22 = (v18 - v12) >> 3;
      v23 = v22 + 1;
      if ((unsigned __int64)(v22 + 1) >> 61 != 0) {
        goto LABEL_61;
      }
      if ((v11 - v12) >> 2 > v23) {
        v23 = (v11 - v12) >> 2;
      }
      if ((unsigned __int64)(v11 - v12) >= 0x7FFFFFFFFFFFFFF8LL) {
        v24 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v24 = v23;
      }
      if (v24 != 0) {
        if (v24 >> 61 != 0) {
          goto LABEL_62;
        }
        v25 = fw_memory_HeapManager_Allocate(*v9, 8 * v24, 16, 0);
      }
      else {
        v25 = 0;
      }
      v26 = v25 + 8 * v24;
      v27 = (char*)(v18 - v12);
      v28 = (__int64)&v21[v25 + -8 * v22];
      *(_QWORD*)&v21[v25] = a4;
      v18 = &v21[v25 + 8];
      a1 = (_QWORD*)memcpy(v28, v12, v27);
      v44 = (char*)v28;
      v46 = (char*)v26;
      if (v12 != nullptr) {
        v29 = 128;
        if (*(_QWORD*)(*v9 + 200LL) == 0) {
          v29 = 56;
        }
        a1 = (_QWORD*)nn_mem_StandardAllocator_Free(*v9 + v29, v12);
      }
    }
    else {
      *(_QWORD*)v18 = a4;
      v18 += 8;
    }
    v45 = v18;
    if (a5 == 0) {
      goto LABEL_56;
    }
  LABEL_39:
    if (v18 < v46) {
      *(_QWORD*)v18 = a5;
      v30 = (__int64)(v18 + 8);
    LABEL_55:
      v45 = (_QWORD*)v30;
      goto LABEL_56;
    }
    v31 = v44;
    v32 = (char*)(v18 - v44);
    v33 = (v18 - v44) >> 3;
    v34 = v33 + 1;
    if ((unsigned __int64)(v33 + 1) >> 61 == 0) {
      v35 = v46 - v44;
      if ((v46 - v44) >> 2 > v34) {
        v34 = v35 >> 2;
      }
      if ((unsigned __int64)v35 >= 0x7FFFFFFFFFFFFFF8LL) {
        v36 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v36 = v34;
      }
      if (v36 == 0) {
        v37 = 0;
      LABEL_51:
        v38 = v37 + 8 * v36;
        v39 = (__int64)&v32[v37 + -8 * v33];
        *(_QWORD*)&v32[v37] = a5;
        v30 = (__int64)&v32[v37 + 8];
        memcpy(v39, v31, v32);
        v44 = (char*)v39;
        v46 = (char*)v38;
        if (v31 != nullptr) {
          v40 = 128;
          if (*(_QWORD*)(*v9 + 200LL) == 0) {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v40, v31);
        }
        goto LABEL_55;
      }
      if (v36 >> 61 == 0) {
        v37 = fw_memory_HeapManager_Allocate(*v9, 8 * v36, 16, 0);
        goto LABEL_51;
      }
    LABEL_62:
      GameRoutine_60a210(a1);
    }
  LABEL_61:
    GameRoutine_60f930();
  }

LABEL_14:
  if (a5 != 0) {
    goto LABEL_39;
  }

LABEL_56:
  result = ChoiceMenu_16e8140(v8, &v44);
  if (v44 != nullptr) {
    v42 = result;
    v43 = 128;
    if (*(_QWORD*)(*v9 + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*v9 + v43, v44);
    return v42;
  }
  return result;
}

__int64 ChoiceMenu_16e8140(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  void* v6;
  _BYTE* v7;
  char v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64** v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;

  game_script_hub_talk_g_choice_menu_result = 0;
  GameRoutine_82dfe0(game_GameModeData_instance_ + 40, 0xFFFFFFFFLL);
  if (a2[1] == *a2) {
    return 0;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
  }
  if (a1 == 0) {
    return 0;
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1072, 16, 0);
  GameRoutine_16e7bd0(v4);
  v5 = *(_QWORD*)(a1 + 40);
  if (v5 != 0) {
    *(_QWORD*)(v5 + 48) = v4;
    *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v4;
  *(_QWORD*)(v4 + 24) = "ChoiceMenu";
  *(_QWORD*)(v4 + 32) = a1;
  *(_DWORD*)(v4 + 140) = game_HashString32();
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 24;
  *(_QWORD*)(v4 + 80) = 1;
  v6 = GameData_212c730;
  *(_QWORD*)(v4 + 8) = GameData_212c730;
  *(_QWORD*)(v4 + 16) = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
      (*(_WORD*)(v4 + 136) & 0x100) == 0) {
    *(_WORD*)(v4 + 136) |= 0x100u;
  }
  v7 = *(_BYTE**)(v4 + 32);
  v8 = v7[138];
  if (v8 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v4 + 32));
    v8 = v7[138];
  }
  v7[138] = v8 + 1;
  *(_WORD*)(v4 + 136) |= 2u;
  v9 = *a2;
  if (a2[1] != *a2) {
    v10 = 0;
    v11 = GameData_212d630[0] + 2;
    do {
      v14 = (__int64**)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
      v15 = *(_QWORD*)(v9 + 8 * v10);
      v16 = (__int64)v14;
      *v14 = v11;
      v14[1] = nullptr;
      v17 = strlen(v15);
      if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
        GameRoutine_60a1d0();
      }
      v18 = v17;
      if (v17 >= 0x17) {
        if ((v17 | 7) == 0x17) {
          v12 = 26;
        }
        else {
          v12 = (v17 | 7) + 1;
        }
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v12, 16, 0);
        *(_QWORD*)(v16 + 24) = v18;
        *(_QWORD*)(v16 + 32) = v13;
        *(_QWORD*)(v16 + 16) = v12 | 1;
      }
      else {
        v13 = v16 + 17;
        *(_BYTE*)(v16 + 16) = 2 * v17;
        if (v17 == 0) {
          goto LABEL_20;
        }
      }
      memmove(v13, v15, v18);
    LABEL_20:
      *(_BYTE*)(v13 + v18) = 0;
      *(_QWORD*)(v16 + 64) = 0;
      *(_QWORD*)(v16 + 72) = 0;
      *(_QWORD*)(v16 + 48) = 0;
      *(_QWORD*)(v16 + 56) = 0;
      *(_QWORD*)v16 = game_menu_anonymous_ChoiceMenuItem_vtable;
      *(_DWORD*)(v16 + 40) = v10;
      GameRoutine_16e0c00((_QWORD*)v4, v16);
      v9 = *a2;
      ++v10;
    } while (v10 < (a2[1] - *a2) >> 3);
  }
  *(_BYTE*)(v4 + 1056) = GameData_2262914;
  return v4;
}

__int64 ChoiceMenu_Unknown24()
{
  if (*GameData_212d460[0] != 0) {
    return 19;
  }
  else {
    return 2;
  }
}

__int64 ChoiceMenu_Unknown2_16e83f0(__int64 result)
{
  int v1;
  int v2;
  __int64 v3;
  int v4;
  unsigned __int8* v5;
  unsigned int v6;
  bool v7;
  int v8;

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3) {
    return GameRoutine_16df7a0(result);
  }
  v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
  v2 = (v1 & 8) != 0 ? 2 : 3;
  if ((v2 & v1) != 0) {
    return GameRoutine_16df7a0(result);
  }
  v3 = result;
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)result + 800LL))(result);
  result = v3;
  if (v4 != 2) {
    return GameRoutine_16df7a0(result);
  }
  v5 = *(unsigned __int8**)(v3 + 16);
  if (v5 != nullptr) {
    v6 = *v5;
    v7 = v6 > 0x10;
    v8 = (1 << v6) & 0x1CE00;
    if (!v7 && v8 != 0) {
      *(_WORD*)(v3 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v3 + 136) |= 8u;
  return result;
}

__int64 ChoiceMenu_Unknown57(__int64 a1)
{
  game_menu_BasicMenu_Unknown57();
  return GameRoutine_1565800(
      0, 0, 0, 2 * (unsigned int)*(unsigned __int8*)(a1 + 1056), 0);
}

#pragma GCC visibility pop
