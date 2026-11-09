#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_UIBase_vtable[])();
extern __int64 (*game_hub_UIEnemyDiscovery_vtable[])();
extern __int64 GameData_220b6e0;
__int64 UIEnemyDiscovery_Destructor(_QWORD* a1);

__int64 UIEnemyDiscovery_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 result;
  __int64 v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  char* v9;
  char* v10;

  v1 = a1[9];
  *a1 = game_hub_UIEnemyDiscovery_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  *a1 = game_hub_UIBase_vtable;
  v4 = GameData_220b6e0;
  v6 = *(char**)(GameData_220b6e0 + 136);
  v5 = *(char**)(GameData_220b6e0 + 144);
  if (v6 != v5) {
    v7 = v5 - v6 - 8;
    if ((~(_BYTE)v7 & 0x18) != 0) {
      v8 = ((unsigned __int8)((unsigned int)v7 >> 3) + 1) & 3;
      while (*(_QWORD**)v6 != a1) {
        v6 += 8;
        if (--v8 == 0) {
          goto LABEL_11;
        }
      }
    }
    else {
    LABEL_11:
      if (v7 < 0x18) {
        return result;
      }
      for (v6 += 16;; v6 += 32) {
        if (*((_QWORD**)v6 - 2) == a1) {
          v6 -= 16;
          goto LABEL_22;
        }
        if (*((_QWORD**)v6 - 1) == a1) {
          v6 -= 8;
          goto LABEL_22;
        }
        if (*(_QWORD**)v6 == a1) {
          goto LABEL_22;
        }
        if (*((_QWORD**)v6 + 1) == a1) {
          break;
        }
        v9 = v6 + 16;
        if (v9 == v5) {
          return result;
        }
      }
      v6 += 8;
    }
  }

LABEL_22:
  if (v6 != v5) {
    v10 = v6 + 8;
    if (v6 + 8 != v5) {
      do {
        if (*(_QWORD**)v10 != a1) {
          *(_QWORD*)v6 = *(_QWORD*)v10;
          v6 += 8;
        }
        v10 += 8;
      } while (v10 != v5);
      v5 = *(char**)(v4 + 144);
    }
  }
  if (v6 != v5) {
    *(_QWORD*)(v4 + 144) = v6;
  }
  return result;
}

#pragma GCC visibility pop
