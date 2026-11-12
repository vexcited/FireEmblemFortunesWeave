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
__int64 ChoiceMenu_16e7e00_alt1(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                                __int64 a5) __asm__("ChoiceMenu_16e7e00");
__int64 ChoiceMenu_16e8140(__int64 a1, __int64* a2);
__int64 ChoiceMenu_Unknown24();
__int64 ChoiceMenu_Unknown2_16e83f0(__int64 result);
__int64 ChoiceMenu_Unknown57(__int64 a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60f930_alt1() __asm__("GameRoutine_60f930");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 ChoiceMenu_16e7e00(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5);

__int64 ChoiceMenu_16e7e00(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5)
{
  __int64* v9;
  char* v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 result;
  __int64 v43;
  __int64 v44;
  struct {
    char* v45;
    _QWORD* v46;
    char* v47;
  } v45_;

  v45_.v47 = nullptr;
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  v45_.v45 = nullptr;
  v45_.v46 = nullptr;
  if (a2 != 0) {
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
    *(_QWORD*)v11 = a2;
    v12 = v11 + 8;
    v13 = (__int64)v11;
    v45_.v45 = v11;
    v45_.v46 = v11 + 8;
    v45_.v47 = v11 + 8;
    if (a3 != 0) {
      goto LABEL_3;
    }
  }
  else {
    v13 = 0;
    v12 = nullptr;
    if (a3 != 0) {
    LABEL_3:
      v14 = (unsigned __int64)&v12[-v13];
      v15 = (__int64)&v12[-v13] >> 3;
      v16 = v15 + 1;
      if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
        goto LABEL_61;
      }
      if (v14 >> 2 > v16) {
        v16 = v14 >> 2;
      }
      if (v14 >= 0x7FFFFFFFFFFFFFF8LL) {
        v17 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v17 = v16;
      }
      if (v17 != 0) {
        if (v17 >> 61 != 0) {
          goto LABEL_62;
        }
        v18 = fw_memory_HeapManager_Allocate_alt1(*v9, 8 * v17, 16, 0);
      }
      else {
        v18 = 0;
      }
      v12 = (char*)(v18 + 8 * v17);
      v20 = v18 + v14 - 8 * v15;
      *(_QWORD*)(v18 + v14) = a3;
      v19 = (char*)(v18 + v14 + 8);
      memcpy_alt1(v20, v13, v14);
      v45_.v45 = (char*)v20;
      v45_.v47 = v12;
      if (v13 != 0) {
        v21 = 128;
        if (*(_QWORD*)(*v9 + 200) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v9 + v21, v13);
      }
      v45_.v46 = v19;
      v13 = v20;
      if (a4 != 0) {
        goto LABEL_22;
      }
      goto LABEL_14;
    }
  }
  v19 = v12;
  if (a4 != 0) {
  LABEL_22:
    if (v19 >= v12) {
      v22 = &v19[-v13];
      v23 = (__int64)&v19[-v13] >> 3;
      v24 = v23 + 1;
      if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
        goto LABEL_61;
      }
      if ((__int64)&v12[-v13] >> 2 > v24) {
        v24 = (__int64)&v12[-v13] >> 2;
      }
      if ((unsigned __int64)&v12[-v13] >= 0x7FFFFFFFFFFFFFF8LL) {
        v25 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v25 = v24;
      }
      if (v25 != 0) {
        if (v25 >> 61 != 0) {
          goto LABEL_62;
        }
        v26 = fw_memory_HeapManager_Allocate_alt1(*v9, 8 * v25, 16, 0);
      }
      else {
        v26 = 0;
      }
      v27 = v26 + 8 * v25;
      v28 = (unsigned __int64)&v19[-v13];
      v29 = (__int64)&v22[v26 + -8 * v23];
      *(_QWORD*)&v22[v26] = a4;
      v19 = &v22[v26 + 8];
      memcpy_alt1(v29, v13, v28);
      v45_.v45 = (char*)v29;
      v45_.v47 = (char*)v27;
      if (v13 != 0) {
        v30 = 128;
        if (*(_QWORD*)(*v9 + 200) == 0) {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v9 + v30, v13);
      }
    }
    else {
      *(_QWORD*)v19 = a4;
      v19 += 8;
    }
    v45_.v46 = v19;
    if (a5 == 0) {
      goto LABEL_56;
    }
  LABEL_39:
    if (v19 < v45_.v47) {
      *(_QWORD*)v19 = a5;
      v31 = (__int64)(v19 + 8);
    LABEL_55:
      v45_.v46 = (_QWORD*)v31;
      goto LABEL_56;
    }
    v32 = (__int64)v45_.v45;
    v33 = v19 - v45_.v45;
    v34 = (v19 - v45_.v45) >> 3;
    v35 = v34 + 1;
    if ((unsigned __int64)(v34 + 1) >> 61 == 0) {
      v36 = v45_.v47 - v45_.v45;
      if ((v45_.v47 - v45_.v45) >> 2 > v35) {
        v35 = v36 >> 2;
      }
      if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF8LL) {
        v37 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v37 = v35;
      }
      if (v37 == 0) {
        v38 = 0;
      LABEL_51:
        v39 = v38 + 8 * v37;
        v40 = v38 + v33 - 8 * v34;
        *(_QWORD*)(v38 + v33) = a5;
        v31 = v38 + v33 + 8;
        memcpy_alt1(v40, v32, v33);
        v45_.v45 = (char*)v40;
        v45_.v47 = (char*)v39;
        if (v32 != 0) {
          v41 = 128;
          if (*(_QWORD*)(*v9 + 200) == 0) {
            v41 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v9 + v41, v32);
        }
        goto LABEL_55;
      }
      if (v37 >> 61 == 0) {
        v38 = fw_memory_HeapManager_Allocate_alt1(*v9, 8 * v37, 16, 0);
        goto LABEL_51;
      }
    LABEL_62:
      GameRoutine_60a210_alt1();
    }
  LABEL_61:
    GameRoutine_60f930_alt1();
  }
LABEL_14:
  if (a5 != 0) {
    goto LABEL_39;
  }
LABEL_56:
  result = ChoiceMenu_16e8140(a1, (__int64*)&v45_.v45);
  if (v45_.v45 != nullptr) {
    v43 = result;
    v44 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v9 + v44, (__int64)v45_.v45);
    return v43;
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
