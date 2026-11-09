#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*game_menu_EquipInfoItem_Info_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) String_60a1d0(void);
unsigned __int64 EquipUnitSelectMenuItem_16d25e0(__int64 a1, __int64 a2,
                                                 char* a3, __int64 a4);
unsigned __int64 EquipUnitSelectMenuItem_16d25e0(__int64 a1, __int64 a2,
                                                 char* a3, __int64 a4)
{
  __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 result;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;

  v6 = a2;
  *(_WORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_WORD*)(a1 + 80) = 257;
  *(_BYTE*)(a1 + 82) = 1;
  *(_QWORD*)a1 = game_menu_EquipInfoItem_Info_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  v8 = strlen(a2);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_34;
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11, 16, 0);
    *(_QWORD*)(a1 + 96) = v9;
    *(_QWORD*)(a1 + 104) = v10;
    *(_QWORD*)(a1 + 88) = v11 | 1;
    goto LABEL_9;
  }
  v10 = a1 + 89;
  *(_BYTE*)(a1 + 88) = 2 * v8;
  if (v8 != 0) {
  LABEL_9:
    memmove(v10, v6, v9);
  }
  *(_BYTE*)(v10 + v9) = 0;
  if (a3 != nullptr) {
    v12 = a3;
  }
  else {
    v12 = &GameData_1a9f09e;
  }
  v13 = strlen(v12);
  if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_34;
  }
  v14 = v13;
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v13 | 7) + 1;
    }
    v15 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v16, 16, 0);
    *(_QWORD*)(a1 + 120) = v14;
    *(_QWORD*)(a1 + 128) = v15;
    *(_QWORD*)(a1 + 112) = v16 | 1;
    goto LABEL_21;
  }
  v15 = a1 + 113;
  *(_BYTE*)(a1 + 112) = 2 * v13;
  if (v13 != 0) {
  LABEL_21:
    memmove(v15, v12, v14);
  }
  *(_BYTE*)(v15 + v14) = 0;
  if (a4 != 0) {
    v6 = a4;
  }
  result = strlen(v6);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_34:
    String_60a1d0();
  }
  v18 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (result | 7) + 1;
    }
    v19 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v20, 16, 0);
    *(_QWORD*)(a1 + 144) = v18;
    *(_QWORD*)(a1 + 152) = v19;
    *(_QWORD*)(a1 + 136) = v20 | 1;
  }
  else {
    v19 = a1 + 137;
    *(_BYTE*)(a1 + 136) = 2 * result;
    if (result == 0) {
      goto LABEL_33;
    }
  }
  result = memmove(v19, v6, v18);

LABEL_33:
  *(_BYTE*)(v19 + v18) = 0;
  return result;
}

#pragma GCC visibility pop
