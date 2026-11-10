#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* BasicInfo_15e5fa0(_QWORD* result);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16477d0(__int64, __int64, __int64, __int64);
__int64 HubTalkNatives_e14270(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int16 GameData_225d6f4;
extern __int64 GameData_225d6f8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RouteMenuItem_166e340(__int64 a1, __int64 a2, __int64* a3, __int64* a4,
                              __int64* a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9);
__int64 RouteMenuItem_166e450(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5);
__int64 game_menu_anonymous_RouteMenuItem_ACall_closure_Invoke(__int64 a1);
__int64 game_menu_anonymous_RouteMenuItem_ACall_closure0_Invoke(__int64 a1);
__int64 game_menu_anonymous_RouteMenuItem_ACall_closure1_Invoke();

__int64 RouteMenuItem_166e340(__int64 a1, __int64 a2, __int64* a3, __int64* a4,
                              __int64* a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9)
{
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v15 = HubTalkNatives_e14270(a1, a2);
  if (v15 != 0) {
    v16 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         192, 16, 0);
    GameRoutine_16477d0(v17, *a3, a6, a9);
    BasicMenuCursor_16e0c00(v15, v17);
    v18 = fw_memory_HeapManager_Allocate(*v16, 192, 16, 0);
    GameRoutine_16477d0(v18, *a4, a7, a9);
    BasicMenuCursor_16e0c00(v15, v18);
    v19 = fw_memory_HeapManager_Allocate(*v16, 192, 16, 0);
    GameRoutine_16477d0(v19, *a5, a8, a9);
    BasicMenuCursor_16e0c00(v15, v19);
  }
  return v15;
}

__int64 RouteMenuItem_166e450(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5)
{
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  v8 = HubTalkNatives_e14270(a1, a2);
  if (v8 != 0) {
    v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         192, 16, 0);
    GameRoutine_16477d0(v10, (__int64)"MID_Sys_Yes", a3, a5);
    BasicMenuCursor_16e0c00(v8, v10);
    v11 = fw_memory_HeapManager_Allocate(*v9, 192, 16, 0);
    GameRoutine_16477d0(v11, (__int64)"MID_Sys_No", a4, a5);
    BasicMenuCursor_16e0c00(v8, v11);
  }
  return v8;
}

__int64 game_menu_anonymous_RouteMenuItem_ACall_closure_Invoke(__int64 a1)
{
  LOBYTE(GameData_225d6f4) = *(_BYTE*)(*(_QWORD*)(a1 + 8) + 96LL);
  HIBYTE(GameData_225d6f4) = 1;
  if (GameData_225d6f8 != 0) {
    BasicInfo_15e5fa0((_QWORD*)GameData_225d6f8);
  }
  return 7;
}

__int64 game_menu_anonymous_RouteMenuItem_ACall_closure0_Invoke(__int64 a1)
{
  LOBYTE(GameData_225d6f4) = *(_BYTE*)(*(_QWORD*)(a1 + 8) + 96LL);
  GameData_225d6f4 = (unsigned __int8)GameData_225d6f4;
  if (GameData_225d6f8 != 0) {
    BasicInfo_15e5fa0((_QWORD*)GameData_225d6f8);
  }
  return 7;
}

__int64 game_menu_anonymous_RouteMenuItem_ACall_closure1_Invoke()
{
  if (GameData_225d6f8 != 0) {
    BasicInfo_15e5fa0((_QWORD*)GameData_225d6f8);
  }
  return 3;
}

#pragma GCC visibility pop
