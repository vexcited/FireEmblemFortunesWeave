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
__int64 GameRoutine_1a06650(_QWORD, _QWORD, _QWORD);
__int64 ProcObeliskDepositoryRideMenu_9d0620(_QWORD, _QWORD, _QWORD, _QWORD,
                                             _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fff758[])();
extern __int64 (*GameData_1fff7d8[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212fbc0[2];
__int64 GiftTransportMenu_ff0050(__int64 a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
extern __int64 (*game_menu_TransportMenuItem_vtable[])();
extern __int64 GameData_2232000;
__int64 game_menu_anonymous_GiftTransportMenu_ACall_closure_Invoke(__int64 a1);
__int64 game_menu_anonymous_GiftTransportMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned __int16* a2);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

__int64 GiftTransportMenu_Unknown85(__int64 a1)
{
  GameRoutine_170b4c0();
  return ui_LayoutAccessor_SetPaneVisible(a1 + 848, "L_EquipPool/L_Num", 0);
}

__int64 GiftTransportMenu_ff0050(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int16* v11;
  _QWORD v12[4];
  _QWORD* v13;
  _QWORD v14[4];
  _QWORD* v15;
  _QWORD v16[4];
  _QWORD* v17;
  const char* v18;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    return 1;
  }
  v3 = a1;
  v4 = __dynamic_cast(v2, GameData_212e008[0], GameData_212fbc0[0], 0);
  if (v4 == 0) {
    return 1;
  }
  v5 = v4;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 480LL))(v4) & 1) != 0) {
    return 1;
  }
  v18 = "MID_Menu_ItemSend_Confirm";
  v15 = v14;
  v13 = v12;
  v16[0] = GameData_1fff758;
  v16[1] = v3;
  v17 = v16;
  v14[0] = GameData_1fff7d8;
  v12[0] = GameData_1fff7d8;
  v7 = ProcObeliskDepositoryRideMenu_9d0620(v3, &v18, v16, v14, v12);
  if (v13 == v12) {
    v8 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_11;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v13 + v8))((__int64)v13);

LABEL_11:
  if (v15 == v14) {
    v9 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_16;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v15 + v9))((__int64)v15);

LABEL_16:
  if (v17 == v16) {
    v10 = 32;
    goto LABEL_20;
  }
  if (v17 != nullptr) {
    v10 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*v17 + v10))((__int64)v17);
  }
  v11 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 560LL))(v5);
  GameRoutine_1a06650(
      v7 + 1496, *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v11),
      1);
  return 12;
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
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;

  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  result = v12_.v12;
  *(_QWORD*)(v4 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v4;
  v12_.v12[0] = GameData_1fff858;
  v12_.v12[1] = a1;
  v12_.v13 = v12_.v12;
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
      if (v12_.v13 == nullptr) {
        GameRoutine_60a310_alt1(),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*))(*v12_.v13 + 48LL))(v12_.v13),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v9 += 12;
  } while (v10 != v9);
  result = v12_.v13;
  if (v12_.v13 == v12_.v12) {
  LABEL_12:
    v11 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v11))(result,
                                                                     v3);
}

__int64 game_menu_anonymous_GiftTransportMenu_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = __dynamic_cast(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL),
                      GameData_212e008[0], GameData_212fbc0[0], 0);
  v2 = *(unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v1 + 560LL))(v1);
  GameData_2232000 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v2);
  return 4;
}

__int64 game_menu_anonymous_GiftTransportMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned __int16* a2)
{
  __int64 v2;
  int v3;
  int v4;
  __int64 v6;
  __int64 v8;
  int v9;

  if (a2[2] != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * a2[2]);
    v3 = *(unsigned __int8*)(v2 + 72);
    if ((((0x10000000000LL << v3) | (1LL << *(_BYTE*)(v2 + 73))) &
         0xFFBFFFFFFFA39FFFLL) != 0) {
      v4 = *(_DWORD*)(v2 + 336) & 3;
      if (v3 != 15 && v4 == 0) {
        v6 = *(_QWORD*)(result + 8);
        v8 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
        *(_WORD*)(v8 + 16) = 0;
        *(_QWORD*)(v8 + 48) = 0;
        *(_QWORD*)(v8 + 56) = 0;
        v9 = *a2;
        *(_QWORD*)(v8 + 64) = 0;
        *(_QWORD*)(v8 + 72) = 0;
        *(_WORD*)(v8 + 80) = 257;
        *(_BYTE*)(v8 + 82) = 1;
        *(_QWORD*)(v8 + 88) = 0;
        *(_DWORD*)(v8 + 40) = v9;
        *(_QWORD*)v8 = game_menu_TransportMenuItem_vtable;
        *(_QWORD*)(v8 + 8) = 0;
        return BasicMenuCursor_16e0c00(v6, v8);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
