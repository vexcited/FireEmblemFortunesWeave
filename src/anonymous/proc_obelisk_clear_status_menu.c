#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 ProcObeliskClearStatusMenu_Unknown85(__int64 a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1789cf0(_QWORD, _QWORD);
__int64 Impl_717e30(_QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158ca00(_QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_2001010[])();
extern __int64 (*anonymous_ProcObeliskClearStatusMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr[])();
extern __int64 GameData_212db10[3];
extern __int64 GameData_2259500;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_menu_UnitGridSelectMenu_listeners_;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e0c0[7];
extern __int64* GameData_212e0c8[6];
extern __int64* GameData_21319b0[6];
struct PseudoSret GameRoutine_1560070(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__n128 ProcObeliskClearStatusMenu_DeletingDestructor(_QWORD* a1);
__n128 ProcObeliskClearStatusMenu_Unknown88(__int64 a1);
_QWORD* anonymous_ProcObeliskClearStatusMenu_CreateBindClear_closure0_Invoke(
    __int64 a1, __int64* a2);
__int64 ProcList_9bd480(__int64);
__int64 game_ProcList_Call_9bcfa0(__int64, __int64);
extern __int64 (*GameData_2001190[])();
extern __int64 (*GameData_2001210[])();
extern __int64 (*GameData_2001290[])();
__int64 anonymous_ProcObeliskClearStatusMenu_CreateBindClear(__int64 a1,
                                                             char a2);
const char* ProcObeliskClearStatusMenu_Unknown149(__int64 a1);
const char* ProcObeliskClearStatusMenu_Unknown150(__int64 a1);
const char* ProcObeliskClearStatusMenu_Unknown3(__int64 a1);
const char* ProcObeliskClearStatusMenu_Unknown5(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158ca00_alt1(
    _QWORD*, __int64,
    unsigned int) __asm__("ProcObeliskUnitMergeRouteSelectMenu_158ca00");

__int64 anonymous_ProcObeliskClearStatusMenu_CreateBindClear(__int64 a1,
                                                             char a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  struct {
    __int64 (**v8)();
    char v9;
    char gap9_[23];
    __int64 (***v10)();
  } v8_;

  v3 = ProcList_9bd480(a1);
  v8_.v8 = GameData_2001190;
  v8_.v10 = &v8_.v8;
  game_ProcList_Call_9bcfa0(v3, (__int64)&v8_.v8);
  if (v8_.v10 == &v8_.v8) {
    v4 = 4;
  }
  else {
    if (v8_.v10 == nullptr) {
      goto LABEL_6;
    }
    v4 = 5;
  }
  ((__int64 (*)(__int64))(*v8_.v10)[v4])((__int64)v8_.v10);
LABEL_6:
  v8_.v9 = a2;
  v8_.v8 = GameData_2001210;
  v8_.v10 = &v8_.v8;
  game_ProcList_Call_9bcfa0(v3, (__int64)&v8_.v8);
  if (v8_.v10 == &v8_.v8) {
    v5 = 4;
  }
  else {
    if (v8_.v10 == nullptr) {
      goto LABEL_11;
    }
    v5 = 5;
  }
  ((__int64 (*)(__int64))(*v8_.v10)[v5])((__int64)v8_.v10);
LABEL_11:
  v8_.v8 = GameData_2001290;
  v8_.v10 = &v8_.v8;
  game_ProcList_Call_9bcfa0(v3, (__int64)&v8_.v8);
  result = (__int64)v8_.v10;
  if (v8_.v10 == &v8_.v8) {
    v7 = 4;
  }
  else {
    if (v8_.v10 == nullptr) {
      return result;
    }
    v7 = 5;
  }
  return ((__int64 (*)(__int64))(*v8_.v10)[v7])((__int64)v8_.v10);
}

__n128 ProcObeliskClearStatusMenu_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;

  v1 = a1 + 134;
  v3 = GameData_212e0c0[0];
  *a1 = GameData_212e0c0[0] + 2;
  a1[132] = v3 + 179;
  a1[22] = v3 + 153;
  v4 = (_QWORD*)game_menu_UnitGridSelectMenu_listeners_;
  if (game_menu_UnitGridSelectMenu_listeners_ != GameData_2259500) {
    v5 = GameData_2259500 - game_menu_UnitGridSelectMenu_listeners_ - 8;
    if ((~(_BYTE)v5 & 0x18) != 0) {
      v6 = ((unsigned __int8)((unsigned int)v5 >> 3) + 1) & 3;
      while ((_QWORD*)*v4 != v1) {
        ++v4;
        if (--v6 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v5 < 0x18) {
        goto LABEL_21;
      }
      v4 += 2;
      while (1) {
        if ((_QWORD*)*(v4 - 2) == v1) {
          v4 -= 2;
          goto LABEL_17;
        }
        if ((_QWORD*)*(v4 - 1) == v1) {
          --v4;
          goto LABEL_17;
        }
        if ((_QWORD*)*v4 == v1) {
          goto LABEL_17;
        }
        if ((_QWORD*)v4[1] == v1) {
          break;
        }
        v7 = v4 + 2;
        v4 += 4;
        if (v7 == (_QWORD*)GameData_2259500) {
          goto LABEL_21;
        }
      }
      ++v4;
    }
  }
LABEL_17:
  if (v4 != (_QWORD*)GameData_2259500) {
    v8 = GameData_2259500 - (_QWORD)(v4 + 1);
    if ((_QWORD*)GameData_2259500 != v4 + 1) {
      memmove(v4, v4 + 1, GameData_2259500 - (_QWORD)(v4 + 1));
    }
    GameData_2259500 = (__int64)v4 + v8;
  }
LABEL_21:
  v9 = (_QWORD*)a1[144];
  if (v9 == a1 + 140) {
    v10 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_26;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
LABEL_26:
  v11 = (_QWORD*)a1[138];
  if (v11 == v1) {
    v12 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_31;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
LABEL_31:
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v13 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v13);
}

__int64 ProcObeliskClearStatusMenu_Unknown85(__int64 a1)
{
  ui_LayoutAccessor_SetPaneVisible(a1 + 848, "T_Get_Skill", 0);
  return ui_LayoutAccessor_SetPaneVisible(a1 + 848, "T_Get_CombatArts", 0);
}

__n128 ProcObeliskClearStatusMenu_Unknown88(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __n128 result;
  __int64 v5;
  unsigned int v6;
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e008[0], GameData_212e0c8[0], 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v3 != 0) {
      v5 = v3;
      LayoutAccessor_1560070((void*)(&v7_.v7), (__int64*)(a1 + 848),
                             (__int64)"L_CompareInfo"),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (game_GameModeData_instance_ != 0) {
        v6 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      }
      else {
        v6 = 0;
      }
      ProcObeliskUnitMergeRouteSelectMenu_158ca00_alt1(&v7_.v7,
                                                       *(_QWORD*)(v5 + 88), v6),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v7_.v8 != 0) {
        return std___1___shared_weak_count___release_weak(v7_.v8);
      }
    }
  }
  return result;
}

const char* ProcObeliskClearStatusMenu_Unknown149(__int64 a1)
{
  if (*(_BYTE*)(a1 + 1184) != 0) {
    return "MID_ClearStatus_Title";
  }
  else {
    return "MID_ChapterStatus_Title";
  }
}

const char* ProcObeliskClearStatusMenu_Unknown150(__int64 a1)
{
  if (*(_BYTE*)(a1 + 1184) != 0) {
    return "MID_ClearStatus_Help";
  }
  else {
    return "MID_ChapterStatus_Title_Help";
  }
}

const char* ProcObeliskClearStatusMenu_Unknown3(__int64 a1)
{
  if (*(_BYTE*)(a1 + 128) != 0) {
    return "MID_ClearStatus_Title";
  }
  else {
    return "MID_ChapterStatus_Title";
  }
}

const char* ProcObeliskClearStatusMenu_Unknown5(__int64 a1)
{
  if (*(_BYTE*)(a1 + 128) != 0) {
    return "MID_ClearStatus_Help";
  }
  else {
    return "MID_ChapterStatus_Title_Help";
  }
}

_QWORD* anonymous_ProcObeliskClearStatusMenu_CreateBindClear_closure0_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  _QWORD* result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  _QWORD v19[4];
  _QWORD* v20;
  __int64 v21;

  v3 = *a2;
  Impl_717e30(*(unsigned __int8*)(a1 + 8));
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1200, 16, 0);
  GameRoutine_1789cf0(v5, "ObeliskClearStatusMenu");
  *(_QWORD*)v5 = anonymous_ProcObeliskClearStatusMenu_vtable;
  *(_QWORD*)(v5 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr;
  *(_QWORD*)(v5 + 176) = GameData_2001010;
  *(_BYTE*)(v5 + 1184) = 1;
  ProcInst_657850(v5, GameData_212c730, "ProcObeliskClearStatusMenu", 1, v3);
  v7 = *(unsigned __int8*)(a1 + 8);
  result = v19;
  v9 = *(_QWORD*)(game_GameModeData_instance_ + 176);
  *(_QWORD*)(v9 + 2424) = *(_QWORD*)(v9 + 2416);
  v10 = v9 + 216LL * v7;
  v20 = v19;
  v19[0] = GameData_212db10[0] + 16;
  v19[1] = v9;
  v11 = *(_QWORD*)(v10 + 256);
  v12 = *(_QWORD*)(v10 + 264);
  if (v11 == v12) {
    goto LABEL_7;
  }
  do {
    v21 = v11;
    if (v20 == nullptr) {
      GameRoutine_60a310(0, v6);
    }
    (*(void (**)(_QWORD*, __int64*))(*v20 + 48LL))(v20, &v21);
    v11 += 2224;
  } while (v11 != v12);
  result = v20;
  if (v20 == v19) {
  LABEL_7:
    v13 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_9;
    }
    v13 = 40;
  }
  result =
      (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v13))(result, v6);
LABEL_9:
  v14 = *(__int64**)(v9 + 2416);
  v15 = *(__int64**)(v9 + 2424);
  if (v14 != v15) {
    v16 = GameData_21319b0[0] + 2;
    do {
      v17 = *v14++;
      v18 = fw_memory_HeapManager_Allocate(*v4, 96, 16, 0);
      *(_WORD*)(v18 + 16) = 0;
      *(_DWORD*)(v18 + 40) = 0;
      *(_QWORD*)(v18 + 48) = 0;
      *(_QWORD*)(v18 + 56) = 0;
      *(_QWORD*)(v18 + 64) = 0;
      *(_QWORD*)(v18 + 72) = 0;
      *(_WORD*)(v18 + 80) = 257;
      *(_BYTE*)(v18 + 82) = 1;
      *(_QWORD*)v18 = v16;
      *(_QWORD*)(v18 + 8) = 0;
      *(_QWORD*)(v18 + 88) = v17;
      result = (_QWORD*)BasicMenuCursor_16e0c00(v5, v18);
    } while (v14 != v15);
  }
  return result;
}

#pragma GCC visibility pop
