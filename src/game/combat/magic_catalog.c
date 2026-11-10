#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_111ed70(_QWORD);
__int64 GameRoutine_111f3e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2008160[])();
extern __int64 (*game_combat_MagicCatalog_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ff98[9];
extern int GameData_2235740;
__int64 game_combat_MagicCatalog_MagicCatalog(__int64 a1);
__int64 MagicCatalog_109c060_alt1(_QWORD) __asm__("MagicCatalog_109c060");
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 MagicCatalog_109bf60(__int64 result, __int64 a2);
__int64 MagicCatalog_109c060(__int64 result, long double a2);

__int64 game_combat_MagicCatalog_MagicCatalog(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD v10[4];
  _QWORD* v11;

  if (*GameData_212ff98[0] == 0) {
    *GameData_212ff98[0] = a1;
    GameData_2235740 = 1;
  }
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_DWORD*)(a1 + 32) = 0;
  *(_QWORD*)a1 = game_combat_MagicCatalog_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      12, 16, 0);
  *(_QWORD*)v3 = 0;
  *(_QWORD*)(a1 + 40) = v3;
  *(_WORD*)(v3 + 8) = 1;
  v4 = fw_memory_HeapManager_Allocate(*v2, 80, 16, 0);
  *(_QWORD*)(v4 + 48) = 0;
  *(_WORD*)(v4 + 64) = 1;
  *(_QWORD*)(a1 + 48) = v4;
  *(_QWORD*)v4 = "GameData/Combat/CombatMagic.bprop";
  *(_QWORD*)(v4 + 8) = 0;
  v9 = v8;
  v11 = v10;
  v8[0] = GameData_2008160;
  v8[1] = a1;
  v10[0] = GameData_2008160;
  v10[1] = a1;
  GameRoutine_111f3e0(v10, v4 + 16);
  if (v11 == v10) {
    v5 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v11 + v5))((__int64)v11);
LABEL_8:
  GameRoutine_111ed70(v4);
  result = (__int64)v9;
  if (v9 == v8) {
    v7 = 32;
  }
  else {
    if (v9 == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (*(__int64 (**)(__int64))(*v9 + v7))((__int64)v9);
}

__int64 MagicCatalog_109bf60(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = *(_QWORD*)(result + 8);
  v4 = result;
  if (a2 != v2) {
    v5 = fw_memory_g_heap_manager_ptr;
    do {
      v6 = v2;
      result = MagicCatalog_109c060_alt1(v2 - 120);
      if ((*(_BYTE*)(v2 - 160) & 1) != 0 && *(_QWORD*)(v2 - 144) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8, v7);
      }
      if ((*(_BYTE*)(v2 - 184) & 1) != 0 && *(_QWORD*)(v2 - 168) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v9, v7);
      }
      v2 -= 216;
      if ((*(_BYTE*)(v6 - 216) & 1) != 0 && *(_QWORD*)(v6 - 200) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v10, v7);
      }
    } while (v2 != a2);
  }
  *(_QWORD*)(v4 + 8) = a2;
  return result;
}

__int64 MagicCatalog_109c060(__int64 result, long double a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v2 = *(_QWORD*)(result + 96);
  v3 = (__int64*)result;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v5 = *(_QWORD*)(result + 104);
    if (v2 == v5) {
      goto LABEL_18;
    }
    do {
      if ((*(_BYTE*)(v5 - 32) & 1) != 0 && *(_QWORD*)(v5 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6, a2);
      }
      if ((*(_BYTE*)(v5 - 56) & 1) != 0 && *(_QWORD*)(v5 - 40) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, a2);
      }
      v5 -= 64;
    } while (v5 != v2);
    v8 = v3[12];
    v3[13] = v2;
    if (v8 != 0) {
    LABEL_18:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v9 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, a2);
    }
  }
  v10 = v3[9];
  if (v10 != 0) {
    v11 = v3[10];
    if (v10 == v11) {
      goto LABEL_38;
    }
    do {
      if ((*(_BYTE*)(v11 - 32) & 1) != 0 && *(_QWORD*)(v11 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12, a2);
      }
      if ((*(_BYTE*)(v11 - 56) & 1) != 0 && *(_QWORD*)(v11 - 40) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v13, a2);
      }
      v11 -= 64;
    } while (v11 != v10);
    v14 = v3[9];
    v3[10] = v10;
    if (v14 != 0) {
    LABEL_38:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v15 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v15, a2);
    }
  }
  v16 = v3[6];
  if (v16 != 0) {
    v17 = v3[7];
    if (v16 == v17) {
      goto LABEL_58;
    }
    do {
      if ((*(_BYTE*)(v17 - 32) & 1) != 0 && *(_QWORD*)(v17 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v18, a2);
      }
      if ((*(_BYTE*)(v17 - 56) & 1) != 0 && *(_QWORD*)(v17 - 40) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v19 = 128;
        }
        else {
          v19 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v19, a2);
      }
      v17 -= 64;
    } while (v17 != v16);
    v20 = v3[6];
    v3[7] = v16;
    if (v20 != 0) {
    LABEL_58:
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v21 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v21, a2);
    }
  }
  v22 = v3[3];
  if (v22 != 0) {
    v23 = v3[4];
    if (v22 == v23) {
      goto LABEL_78;
    }
    do {
      if ((*(_BYTE*)(v23 - 32) & 1) != 0 && *(_QWORD*)(v23 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v24 = 128;
        }
        else {
          v24 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v24, a2);
      }
      if ((*(_BYTE*)(v23 - 56) & 1) != 0 && *(_QWORD*)(v23 - 40) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v25, a2);
      }
      v23 -= 64;
    } while (v23 != v22);
    v26 = v3[3];
    v3[4] = v22;
    if (v26 != 0) {
    LABEL_78:
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v27 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v27, a2);
    }
  }
  v28 = *v3;
  if (*v3 != 0) {
    v29 = v3[1];
    if (v28 == v29) {
      goto LABEL_98;
    }
    do {
      if ((*(_BYTE*)(v29 - 32) & 1) != 0 && *(_QWORD*)(v29 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v30 = 128;
        }
        else {
          v30 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v30, a2);
      }
      if ((*(_BYTE*)(v29 - 56) & 1) != 0 && *(_QWORD*)(v29 - 40) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v31, a2);
      }
      v29 -= 64;
    } while (v29 != v28);
    v32 = *v3;
    v3[1] = v28;
    if (v32 != 0) {
    LABEL_98:
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v33 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v33, a2);
    }
  }
  return result;
}

#pragma GCC visibility pop
