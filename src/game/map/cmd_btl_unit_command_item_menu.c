#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
bool ItemMenuItem_Unknown71(__int64);
extern __int64 (*game_map_anonymous_CmdBtlItemMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_ItemMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 UnitMenuItem_15b81a0(__int64, __int64, char*);
__int64
game_map_CmdBtlUnitCommandItemMenu_AddItemList_lambda0_Invoke(__int64 a1,
                                                              int* a2);
__int64
game_map_CmdBtlUnitCommandItemMenu_AddItemList_lambda1_Invoke(__int64 result,
                                                              int* a2);
__int64* MapUnitCommandItemMenu_15c0b80();
__int64 GameRoutine_6c6da0(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_UnitItemList_Sort(__int64, unsigned int, int);
extern __int64 (*GameData_20563e0[])();
extern __int64 (*GameData_2056460[])();
unsigned __int64
UnitMenuItem_15b81a0_alt1(__int64, const char*,
                          const char*) __asm__("UnitMenuItem_15b81a0");
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void Util_157bd60(__int64, __int64, __int64, int*);
__int64* game_map_CmdBtlUnitCommandItemMenu_AddItemList(_QWORD* a1);

__int64* game_map_CmdBtlUnitCommandItemMenu_AddItemList(_QWORD* a1)
{
  __int64* result;
  __int64 v3;
  char v4;
  char v5;
  int v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  bool v13;
  __int64 v14;
  bool v15;
  bool v17;
  __int64 v18;
  bool v19;
  bool v21;
  __int64 v22;
  bool v23;
  bool v25;
  __int64 v26;
  bool v27;
  bool v29;
  bool v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  bool v34;
  bool v35;
  char v36;
  int v37;
  int v38;
  struct {
    _QWORD v39[4];
    _QWORD* v40;
  } v39_;
  struct {
    _QWORD v41[4];
    __int64* v42;
  } v41_;
  char v43;
  __int64* v44;

  result = MapUnitCommandItemMenu_15c0b80();
  v44 = result;
  if (result == nullptr) {
    return result;
  }
  v3 = (__int64)result;
  v4 = game_UnitItemList_Sort((__int64)result + 828, 0, 6);
  v5 = game_UnitItemList_Sort(v3 + 828, 6u, 24);
  if ((v4 & 1) != 0 || (v5 & 1) != 0) {
    v6 = *(_DWORD*)(v3 + 416);
    if ((v6 & 0x10000000) == 0) {
      *(_DWORD*)(v3 + 416) = v6 | 0x10000000;
      game_6c51e0(v3);
      GameRoutine_6c6da0(v3);
      game_6c6ec0(v3);
      *(_DWORD*)(v3 + 416) &= ~0x10000000u;
    }
  }
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
  UnitMenuItem_15b81a0_alt1(v8, "MID_SysMenu_Item", "MID_Sys_WeaponEndure");
  v33 = v8;
  BasicMenuCursor_16e0c00_alt1(a1, v8);
  v9 = fw_memory_HeapManager_Allocate_alt1(*v7, 104, 16, 0);
  *(_WORD*)(v9 + 16) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 88) = v3;
  *(_DWORD*)(v9 + 40) = 0;
  *(_BYTE*)(v9 + 96) = 0;
  *(_WORD*)(v9 + 80) = 257;
  *(_BYTE*)(v9 + 82) = 1;
  *(_QWORD*)v9 = game_map_anonymous_ItemMenuItem_vtable;
  *(_QWORD*)(v9 + 8) = 0;
  *(_BYTE*)(v9 + 96) = ItemMenuItem_Unknown71(v9);
  *(_QWORD*)v9 = game_map_anonymous_CmdBtlItemMenuItem_vtable;
  BasicMenuCursor_16e0c00_alt1(a1, v9);
  v36 = *(_BYTE*)(v3 + 831);
  v37 = *(unsigned __int16*)(v3 + 828);
  v10 = fw_memory_HeapManager_Allocate_alt1(*v7, 104, 16, 0);
  *(_WORD*)(v10 + 16) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 257;
  *(_BYTE*)(v10 + 82) = 1;
  *(_QWORD*)(v10 + 88) = v3;
  *(_DWORD*)(v10 + 40) = 1;
  *(_QWORD*)v10 = game_map_anonymous_ItemMenuItem_vtable;
  *(_QWORD*)(v10 + 8) = 0;
  *(_BYTE*)(v10 + 96) = 0;
  v11 = ItemMenuItem_Unknown71(v10);
  *(_QWORD*)v10 = game_map_anonymous_CmdBtlItemMenuItem_vtable;
  *(_BYTE*)(v10 + 96) = v11;
  BasicMenuCursor_16e0c00_alt1(a1, v10);
  v13 = (*(_BYTE*)(v3 + 839) & 0x20) == 0 && *(_WORD*)(v3 + 836) != 0;
  v35 = v13;
  v14 = fw_memory_HeapManager_Allocate_alt1(*v7, 104, 16, 0);
  *(_WORD*)(v14 + 16) = 0;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_WORD*)(v14 + 80) = 257;
  *(_BYTE*)(v14 + 82) = 1;
  *(_QWORD*)(v14 + 88) = v3;
  *(_QWORD*)v14 = game_map_anonymous_ItemMenuItem_vtable;
  *(_QWORD*)(v14 + 8) = 0;
  *(_BYTE*)(v14 + 96) = 0;
  *(_DWORD*)(v14 + 40) = 2;
  v15 = ItemMenuItem_Unknown71(v14);
  *(_QWORD*)v14 = game_map_anonymous_CmdBtlItemMenuItem_vtable;
  *(_BYTE*)(v14 + 96) = v15;
  BasicMenuCursor_16e0c00_alt1(a1, v14);
  v17 = (*(_BYTE*)(v3 + 847) & 0x20) == 0 && *(_WORD*)(v3 + 844) != 0;
  v34 = v17;
  v18 = fw_memory_HeapManager_Allocate_alt1(*v7, 104, 16, 0);
  *(_WORD*)(v18 + 16) = 0;
  *(_QWORD*)(v18 + 48) = 0;
  *(_QWORD*)(v18 + 56) = 0;
  *(_QWORD*)(v18 + 64) = 0;
  *(_QWORD*)(v18 + 72) = 0;
  *(_WORD*)(v18 + 80) = 257;
  *(_BYTE*)(v18 + 82) = 1;
  *(_QWORD*)(v18 + 88) = v3;
  *(_QWORD*)v18 = game_map_anonymous_ItemMenuItem_vtable;
  *(_QWORD*)(v18 + 8) = 0;
  *(_BYTE*)(v18 + 96) = 0;
  *(_DWORD*)(v18 + 40) = 3;
  v19 = ItemMenuItem_Unknown71(v18);
  *(_QWORD*)v18 = game_map_anonymous_CmdBtlItemMenuItem_vtable;
  *(_BYTE*)(v18 + 96) = v19;
  BasicMenuCursor_16e0c00_alt1(a1, v18);
  v21 = (*(_BYTE*)(v3 + 855) & 0x20) == 0 && *(_WORD*)(v3 + 852) != 0;
  v22 = fw_memory_HeapManager_Allocate_alt1(*v7, 104, 16, 0);
  *(_WORD*)(v22 + 16) = 0;
  *(_QWORD*)(v22 + 48) = 0;
  *(_QWORD*)(v22 + 56) = 0;
  *(_QWORD*)(v22 + 64) = 0;
  *(_QWORD*)(v22 + 72) = 0;
  *(_WORD*)(v22 + 80) = 257;
  *(_BYTE*)(v22 + 82) = 1;
  *(_QWORD*)(v22 + 88) = v3;
  *(_QWORD*)v22 = game_map_anonymous_ItemMenuItem_vtable;
  *(_QWORD*)(v22 + 8) = 0;
  *(_BYTE*)(v22 + 96) = 0;
  *(_DWORD*)(v22 + 40) = 4;
  v23 = ItemMenuItem_Unknown71(v22);
  *(_QWORD*)v22 = game_map_anonymous_CmdBtlItemMenuItem_vtable;
  *(_BYTE*)(v22 + 96) = v23;
  BasicMenuCursor_16e0c00_alt1(a1, v22);
  v25 = (*(_BYTE*)(v3 + 863) & 0x20) == 0 && *(_WORD*)(v3 + 860) != 0;
  v26 = fw_memory_HeapManager_Allocate_alt1(*v7, 104, 16, 0);
  *(_WORD*)(v26 + 16) = 0;
  *(_QWORD*)(v26 + 48) = 0;
  *(_QWORD*)(v26 + 56) = 0;
  *(_QWORD*)(v26 + 64) = 0;
  *(_QWORD*)(v26 + 72) = 0;
  *(_WORD*)(v26 + 80) = 257;
  *(_BYTE*)(v26 + 82) = 1;
  *(_QWORD*)(v26 + 88) = v3;
  *(_QWORD*)v26 = game_map_anonymous_ItemMenuItem_vtable;
  *(_QWORD*)(v26 + 8) = 0;
  *(_BYTE*)(v26 + 96) = 0;
  *(_DWORD*)(v26 + 40) = 5;
  v27 = ItemMenuItem_Unknown71(v26);
  *(_QWORD*)v26 = game_map_anonymous_CmdBtlItemMenuItem_vtable;
  *(_BYTE*)(v26 + 96) = v27;
  BasicMenuCursor_16e0c00_alt1(a1, v26);
  v29 = (*(_BYTE*)(v3 + 871) & 0x20) == 0 && *(_WORD*)(v3 + 868) != 0;
  v30 = (v36 & 0x20) != 0 || v37 == 0;
  if (v30 && !v35 && !v34 && !v21 && !v25 && !v29) {
    *(_BYTE*)(v33 + 81) = 0;
  }
  v43 = 0;
  v38 = 1;
  v41_.v41[0] = GameData_20563e0;
  v41_.v41[1] = a1;
  v41_.v42 = v41_.v41;
  v41_.v41[2] = &v44;
  v39_.v39[0] = GameData_2056460;
  v39_.v39[1] = a1;
  v39_.v39[2] = &v43;
  v39_.v40 = v39_.v39;
  Util_157bd60((__int64)v44, (__int64)v41_.v41, (__int64)v39_.v39, &v38);
  if (v39_.v40 == v39_.v39) {
    v31 = 32;
    goto LABEL_51;
  }
  if (v39_.v40 != nullptr) {
    v31 = 40;
  LABEL_51:
    (*(void (**)(__int64))(*v39_.v40 + v31))((__int64)v39_.v40);
  }
  result = v41_.v42;
  if (v41_.v42 == v41_.v41) {
    v32 = 32;
  }
  else {
    if (v41_.v42 == nullptr) {
      return result;
    }
    v32 = 40;
  }
  return (__int64*)(*(__int64 (**)(__int64))(*v41_.v42 + v32))(
      (__int64)v41_.v42);
}

__int64

game_map_CmdBtlUnitCommandItemMenu_AddItemList_lambda0_Invoke(__int64 a1,
                                                              int* a2)
{
  __int64 v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(__int64**)(a1 + 16);
  v4 = *a2;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  v6 = *v3;
  v7 = (_QWORD*)v5;
  *(_WORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_DWORD*)(v5 + 40) = v4;
  *(_BYTE*)(v5 + 96) = 0;
  *(_WORD*)(v5 + 80) = 257;
  *(_BYTE*)(v5 + 82) = 1;
  *(_QWORD*)(v5 + 88) = v6;
  *(_QWORD*)v5 = game_map_anonymous_ItemMenuItem_vtable;
  *(_QWORD*)(v5 + 8) = 0;
  *(_BYTE*)(v5 + 96) = ItemMenuItem_Unknown71(v5);
  *v7 = game_map_anonymous_CmdBtlItemMenuItem_vtable;
  return BasicMenuCursor_16e0c00(v2, v7);
}

__int64

game_map_CmdBtlUnitCommandItemMenu_AddItemList_lambda1_Invoke(__int64 result,
                                                              int* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = *a2;
  v3 = *(_QWORD*)(result + 8);
  if (*a2 == 2 || v2 == 1) {
    if ((**(_BYTE**)(result + 16) & 1) == 0) {
      v5 = result;
      v6 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
      UnitMenuItem_15b81a0(v6, (__int64)"MID_Menu_Magic", "MID_Sys_Remaining");
      result = BasicMenuCursor_16e0c00(v3, v6);
      **(_BYTE**)(v5 + 16) = 1;
    }
  }
  else if (v2 == 0) {
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        144, 16, 0);
    UnitMenuItem_15b81a0(v4, (__int64)"MID_Menu_ExclusiveItem",
                         "MID_Sys_WeaponEndure");
    return BasicMenuCursor_16e0c00(v3, v4);
  }
  return result;
}

#pragma GCC visibility pop
