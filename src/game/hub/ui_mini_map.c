#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_UIBase_vtable[])();
extern __int64 (*game_hub_UIMiniMap_vtable[])();
extern __int64 GameData_220b6e0;
__int64 UIMiniMap_Destructor(_QWORD* a1);

__int64 UIMiniMap_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  char* v15;

  *a1 = game_hub_UIMiniMap_vtable;
  v2 = a1[11];
  a1[11] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[7];
  if (v3 != 0) {
    *(_BYTE*)(v3 + 2376) = 1;
  }
  v4 = a1[8];
  a1[7] = 0;
  a1[8] = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_155e140(a1[9]);
  v5 = a1[10];
  a1[9] = 0;
  a1[10] = 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  result = a1[11];
  a1[11] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v7 = a1[10];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = a1[8];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak(v8);
  }
  *a1 = game_hub_UIBase_vtable;
  v9 = GameData_220b6e0;
  v11 = *(char**)(GameData_220b6e0 + 136);
  v10 = *(char**)(GameData_220b6e0 + 144);
  if (v11 != v10) {
    v12 = v10 - v11 - 8;
    if ((~(_BYTE)v12 & 0x18) != 0) {
      v13 = ((unsigned __int8)((unsigned int)v12 >> 3) + 1) & 3;
      while (*(_QWORD**)v11 != a1) {
        v11 += 8;
        if (--v13 == 0) {
          goto LABEL_24;
        }
      }
    }
    else {
    LABEL_24:
      if (v12 < 0x18) {
        return result;
      }
      for (v11 += 16;; v11 += 32) {
        if (*((_QWORD**)v11 - 2) == a1) {
          v11 -= 16;
          goto LABEL_35;
        }
        if (*((_QWORD**)v11 - 1) == a1) {
          v11 -= 8;
          goto LABEL_35;
        }
        if (*(_QWORD**)v11 == a1) {
          goto LABEL_35;
        }
        if (*((_QWORD**)v11 + 1) == a1) {
          break;
        }
        v14 = v11 + 16;
        if (v14 == v10) {
          return result;
        }
      }
      v11 += 8;
    }
  }

LABEL_35:
  if (v11 != v10) {
    v15 = v11 + 8;
    if (v11 + 8 != v10) {
      do {
        if (*(_QWORD**)v15 != a1) {
          *(_QWORD*)v11 = *(_QWORD*)v15;
          v11 += 8;
        }
        v15 += 8;
      } while (v15 != v10);
      v10 = *(char**)(v9 + 144);
    }
  }
  if (v11 != v10) {
    *(_QWORD*)(v9 + 144) = v11;
  }
  return result;
}

#pragma GCC visibility pop
