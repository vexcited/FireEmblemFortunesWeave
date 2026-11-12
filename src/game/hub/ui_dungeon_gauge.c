#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_hub_UIBase_vtable[])();
extern __int64 GameData_220b6e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f0b8[5];
_QWORD* UIDungeonGauge_Destructor(_QWORD* result);
__int64 UIDungeonGauge_DeletingDestructor(_QWORD* a1);
__attribute__((swiftcall)) void GameRoutine_eb68e0(PSEUDO_X8, int);
__int64 GameRoutine_16247c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16249f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 UIBase_da1870(void);
__int64 Unit_6c8300(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_225ca88;
extern char GameData_1a9f09e;
__int64 UIDungeonGauge_Unknown2_alt1() __asm__("UIDungeonGauge_Unknown2");
__attribute__((swiftcall)) void game_eb68e0(PSEUDO_X8, int);
__int64 GameRoutine_16247c0_alt1(__int64 result, int,
                                 char) __asm__("GameRoutine_16247c0");
__int64 Unit_6c8300_alt1(_QWORD*, char) __asm__("Unit_6c8300");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_16249f0_alt1(__int64, __int64, unsigned int, unsigned int,
                              unsigned int, unsigned int,
                              unsigned int) __asm__("GameRoutine_16249f0");
void UIBase_da1870_alt1(float*) __asm__("UIBase_da1870");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void UIDungeonGauge_Unknown2(float* a1);

_QWORD* UIDungeonGauge_Destructor(_QWORD* result)
{
  __int64 v1;
  char* v2;
  char* v3;
  unsigned __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;

  *result = game_hub_UIBase_vtable;
  v1 = GameData_220b6e0;
  v3 = *(char**)(GameData_220b6e0 + 136);
  v2 = *(char**)(GameData_220b6e0 + 144);
  if (v3 != v2) {
    v4 = v2 - v3 - 8;
    if ((~(_BYTE)v4 & 0x18) != 0) {
      v5 = ((unsigned __int8)((unsigned int)v4 >> 3) + 1) & 3;
      while (*(_QWORD**)v3 != result) {
        v3 += 8;
        if (--v5 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v4 < 0x18) {
        return result;
      }
      for (v3 += 16;; v3 += 32) {
        if (*((_QWORD**)v3 - 2) == result) {
          v3 -= 16;
          goto LABEL_17;
        }
        if (*((_QWORD**)v3 - 1) == result) {
          v3 -= 8;
          goto LABEL_17;
        }
        if (*(_QWORD**)v3 == result) {
          goto LABEL_17;
        }
        if (*((_QWORD**)v3 + 1) == result) {
          break;
        }
        v6 = v3 + 16;
        if (v6 == v2) {
          return result;
        }
      }
      v3 += 8;
    }
  }

LABEL_17:
  v7 = v3 + 8;
  if (v3 == v2 || v7 == v2) {
    if (v3 != v2) {
    LABEL_28:
      *(_QWORD*)(v1 + 144) = v3;
    }
  }
  else {
    do {
      if (*(_QWORD**)v7 != result) {
        *(_QWORD*)v3 = *(_QWORD*)v7;
        v3 += 8;
      }
      v7 += 8;
    } while (v7 != v2);
    if (v3 != *(char**)(v1 + 144)) {
      goto LABEL_28;
    }
  }
  return result;
}

__int64 UIDungeonGauge_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  char* v2;
  char* v3;
  unsigned __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  __int64 v9;

  *a1 = GameData_212f0b8[0] + 2;
  v1 = GameData_220b6e0;
  v3 = *(char**)(GameData_220b6e0 + 136);
  v2 = *(char**)(GameData_220b6e0 + 144);
  if (v3 != v2) {
    v4 = v2 - v3 - 8;
    if ((~(_BYTE)v4 & 0x18) != 0) {
      v5 = ((unsigned __int8)((unsigned int)v4 >> 3) + 1) & 3;
      while (*(_QWORD**)v3 != a1) {
        v3 += 8;
        if (--v5 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v4 < 0x18) {
        goto LABEL_29;
      }
      v3 += 16;
      while (1) {
        if (*((_QWORD**)v3 - 2) == a1) {
          v3 -= 16;
          goto LABEL_17;
        }
        if (*((_QWORD**)v3 - 1) == a1) {
          v3 -= 8;
          goto LABEL_17;
        }
        if (*(_QWORD**)v3 == a1) {
          goto LABEL_17;
        }
        if (*((_QWORD**)v3 + 1) == a1) {
          break;
        }
        v6 = v3 + 16;
        v3 += 32;
        if (v6 == v2) {
          goto LABEL_29;
        }
      }
      v3 += 8;
    }
  }

LABEL_17:
  v7 = v3 + 8;
  if (v3 == v2 || v7 == v2) {
    if (v3 != v2) {
    LABEL_28:
      *(_QWORD*)(v1 + 144) = v3;
    }
  }
  else {
    do {
      if (*(_QWORD**)v7 != a1) {
        *(_QWORD*)v3 = *(_QWORD*)v7;
        v3 += 8;
      }
      v7 += 8;
    } while (v7 != v2);
    if (v3 != *(char**)(v1 + 144)) {
      goto LABEL_28;
    }
  }

LABEL_29:
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, a1);
}

void UIDungeonGauge_Unknown2(float* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  int v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  struct {
    __int64 v12;
    __int64* v13;
    __int64* v14;
    char gap24_[8];
    unsigned int v15;
    unsigned int v16;
    unsigned int v17;
    unsigned int v18;
    __int64* v19;
    unsigned __int64 v20;
    unsigned __int64 v21;
    unsigned __int64 v22;
    int v23;
    int v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
  } v12_;

  UIBase_da1870_alt1(a1);
  v1 = GameData_225ca88;
  if (*(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 200LL) == 0) {
    if (GameData_225ca88 != 0 && *(_BYTE*)(GameData_225ca88 + 1977) == 1) {
      v4 = *(_DWORD*)(GameData_225ca88 + 1984);
      *(_BYTE*)(GameData_225ca88 + 1977) = 0;
      *(_DWORD*)(v1 + 1984) = (v4 & ~(v4 >> 31)) + 1;
      *(_DWORD*)(v1 + 1980) = 2;
    }
    return;
  }
  if (GameData_225ca88 != 0) {
    GameRoutine_16247c0_alt1(GameData_225ca88, 1, 0);
    v2 = GameData_225ca88;
    if ((*(_BYTE*)(GameData_225ca88 + 1977) & 1) == 0) {
      v3 = *(_DWORD*)(GameData_225ca88 + 1984);
      if (v3 < 1) {
        if (v3 != 0) {
          goto LABEL_11;
        }
      }
      else {
        *(_DWORD*)(GameData_225ca88 + 1984) = 0;
      }
      *(_BYTE*)(v2 + 1977) = 1;
      *(_DWORD*)(v2 + 1980) = 2;
    }
  }
LABEL_11:
  if ((*(_QWORD*)(*(_QWORD*)GameData_212c6a0[0] + 328LL) & 4LL) != 0) {
    v5 = 1;
  }
  else {
    v5 = *(_DWORD*)(*(_QWORD*)GameData_212c6a0[0] + 308LL);
  }
  game_eb68e0((void*)((__int64)&v12_.v12), v5);
  v6 = (__int64)v12_.v13;
  if (v12_.v14 == v12_.v13) {
    if (v12_.v14 == nullptr) {
      return;
    }
  }
  else {
    v7 = *v12_.v13;
    v8 = *(_BYTE**)(Unit_6c8300_alt1((_QWORD*)*v12_.v13, 0) + 32);
    if (v8 != nullptr) {
      v12_.v25 = -1;
      v12_.v26 = -1;
      v12_.v27 = -1;
      v12_.v28 = -1;
      v9 = *msg_MessageManager_instance__ptr[0];
      v12_.v29 = -1;
      v12_.v30 = -1;
      v12_.v31 = -1;
      v12_.v32 = -1;
      v12_.v33 = -1;
      v12_.v34 = -1;
      v12_.v35 = -1;
      v12_.v36 = -1;
      v12_.v19 = GameData_212e348 + 2;
      v12_.v20 = 0xFFFF0001FFFF0000LL;
      v12_.v21 = 0xFFFF0004FFFF0002LL;
      v12_.v22 = 0xFFFF0006FFFF0005LL;
      v12_.v37 = 8;
      v12_.v23 = -65529;
      v12_.v24 = -65528;
      v10 = GameRoutine_a4dbe0_alt1(v9, v8, 0);
    }
    else {
      v10 = &GameData_1a9f09e;
    }
    GameRoutine_16249f0_alt1((__int64)v10, v7, v12_.v15, v12_.v15, v12_.v16,
                             v12_.v17, v12_.v18);
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v6);
}

#pragma GCC visibility pop
