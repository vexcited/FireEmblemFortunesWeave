#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_170b4c0(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fff858[])();
extern __int64 (*game_menu_EmptyTransportMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_TransporterConst_List_instance_;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 GiftTransportMenu_Unknown85(__int64 a1);
_QWORD* GiftTransportMenu_Unknown128(__int64 a1);

__int64 GiftTransportMenu_Unknown85(__int64 a1)
{
  GameRoutine_170b4c0();
  return ui_LayoutAccessor_SetPaneVisible(a1 + 848, "L_EquipPool/L_Num", 0);
}

_QWORD* GiftTransportMenu_Unknown128(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      96, 16, 0);
  *(_WORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  v4 = v2;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_DWORD*)(v2 + 40) = -1;
  *(_QWORD*)v2 = game_menu_EmptyTransportMenuItem_vtable;
  v5 = *(_QWORD*)(a1 + 344);
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  result = v12;
  *(_QWORD*)(v4 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v4;
  v12[0] = GameData_1fff858;
  v12[1] = a1;
  v13 = v12;
  v7 = *(_QWORD*)(game_TransporterConst_List_instance_ + 8);
  v8 = *(unsigned int*)(v7 + 80);
  if ((int)v8 < 1) {
    goto LABEL_12;
  }
  v9 = 0;
  v10 = 12 * v8;
  do {
    v3 = *(_QWORD*)(v7 + 8) + v9;
    if (*(_WORD*)(v3 + 2) != 0) {
      if (v13 == nullptr) {
        GameRoutine_60a310(0, v3);
      }
      (*(void (**)(_QWORD*))(*v13 + 48LL))(v13);
    }
    v9 += 12;
  } while (v10 != v9);
  result = v13;
  if (v13 == v12) {
  LABEL_12:
    v11 = 32;
  }
  else {
    if (v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v11))(result,
                                                                     v3);
}

#pragma GCC visibility pop
