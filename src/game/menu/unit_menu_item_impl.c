#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*game_menu_EquipMenuItem_Info_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 UnitMenuItem_15b7ee0(__int64 a1);
unsigned __int64 UnitMenuItem_15b81a0(__int64 a1, __int64 a2, char* a3);

__int64 UnitMenuItem_15b7ee0(__int64 a1)
{
  char v2;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 584LL))(a1) & 1) != 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 576LL))(a1) & 1) != 0) {
    v2 = 0;
  }
  else if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1) & 1) != 0) {
    v2 = 1;
  }
  else {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 712LL))(a1) ^ 1;
  }
  return v2 & 1;
}

unsigned __int64 UnitMenuItem_15b81a0(__int64 a1, __int64 a2, char* a3)
{
  unsigned __int64 result;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;

  *(_WORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_WORD*)(a1 + 80) = 257;
  *(_BYTE*)(a1 + 82) = 1;
  *(_DWORD*)(a1 + 40) = -1;
  *(_QWORD*)a1 = game_menu_EquipMenuItem_Info_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  result = strlen(a2);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_23;
  }
  v7 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (result | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    *(_QWORD*)(a1 + 104) = v7;
    *(_QWORD*)(a1 + 112) = v8;
    *(_QWORD*)(a1 + 96) = v9 | 1;
    goto LABEL_9;
  }
  v8 = a1 + 97;
  *(_BYTE*)(a1 + 96) = 2 * result;
  if (result != 0) {
  LABEL_9:
    memmove(v8, a2, v7);
  }
  *(_BYTE*)(v8 + v7) = 0;
  if (a3 != nullptr) {
    v10 = a3;
  }
  else {
    v10 = &GameData_1a9f09e;
  }
  result = strlen(v10);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_23:
    String_60a1d0(result);
  }
  v11 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (result | 7) + 1;
    }
    v12 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13, 16, 0);
    *(_QWORD*)(a1 + 128) = v11;
    *(_QWORD*)(a1 + 136) = v12;
    *(_QWORD*)(a1 + 120) = v13 | 1;
  }
  else {
    v12 = a1 + 121;
    *(_BYTE*)(a1 + 120) = 2 * result;
    if (result == 0) {
      goto LABEL_22;
    }
  }
  result = memmove(v12, v10, v11);

LABEL_22:
  *(_BYTE*)(v12 + v11) = 0;
  return result;
}

#pragma GCC visibility pop
