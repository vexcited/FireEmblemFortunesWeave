#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_hub_UIBase_vtable[])();
extern __int64 GameData_220b6e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f0b8[5];
_QWORD* UIDungeonGauge_Destructor(_QWORD* result);
__int64 UIDungeonGauge_DeletingDestructor(_QWORD* a1);

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

#pragma GCC visibility pop
