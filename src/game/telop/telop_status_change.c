#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1386f80(_QWORD);
__int64 GameRoutine_155cda0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155d940(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155ea30(_QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_1563c50(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_17484f0(_QWORD*);
__int64 GameRoutine_1749800(__int64);
__int64 GameRoutine_1749970(__int64 result, long double);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_telop_TelopStatusChange_vtable[])();
extern __int64 GameData_22736d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting_ptr;
extern __int64 ui_LayoutAccessor_empty_;
__int64 TelopStatusChange_Unknown34(__int64 a1);
__int64 TelopStatusChange_Unknown35(__int64 result);
__int64 TelopStatusChange_Unknown39(__int64 result, long double a2);
__int64 TelopStatusChange_Unknown2(__int64 a1, long double a2);
__int64 TelopStatusChange_Destructor(__int64 a1);
__int64 TelopStatusChange_DeletingDestructor(__int64 a1);
__int64 TelopStatusChange_17484f0(_QWORD* a1);

__int64 TelopStatusChange_17484f0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;

  v1 = a1[47];
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
  }
  v3 = a1[45];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak();
  }
  v4 = a1[43];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak();
  }
  v5 = a1[41];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak();
  }
  v6 = a1[39];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak();
  }
  v7 = a1[37];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak();
  }
  v8 = a1[35];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak();
  }
  v9 = a1[33];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak();
  }
  v10 = a1[31];
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak();
  }
  v11 = a1[29];
  if (v11 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    result = a1[1];
    if (result == 0) {
      return result;
    }
    return std___1___shared_weak_count___release_weak();
  }
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  std___1___shared_weak_count___release_weak();
  result = a1[1];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64 TelopStatusChange_Unknown34(__int64 a1)
{
  __int64 result;
  __int64 v2;
  int v3;

  result = GameRoutine_1749800(a1 + 824);
  v2 = GameData_22736d0;
  if (GameData_22736d0 != 0 && *(_DWORD*)(GameData_22736d0 + 624) != 2) {
    result = GameRoutine_155ea30(GameData_22736d0 + 168);
    if ((result & 1) != 0 || *(_DWORD*)(v2 + 624) != 1) {
      result = GameRoutine_155cda0(v2 + 272, "Out", 0);
      if (*(_DWORD*)(v2 + 624) == 1) {
        v3 = 2;
      }
      else {
        GameRoutine_155d940(v2 + 272);
        result = GameRoutine_155e830(v2 + 168, 0);
        v3 = 1;
      }
      *(_DWORD*)(v2 + 624) = v3;
    }
  }
  return result;
}

__int64 TelopStatusChange_Unknown35(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;

  if (*(_DWORD*)(result + 840) == 0) {
    v1 = result;
    v2 = *(_QWORD*)(result + 832);
    if (v2 != 0) {
      v3 = std___1___shared_weak_count_lock(v2);
      v4 = &ui_LayoutAccessor_empty_;
      if (v3 != 0) {
        if (*(_QWORD*)(v1 + 824) != 0) {
          v4 = *(__int64**)(v1 + 824);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v5 = v4;
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
          std___1___shared_weak_count___release_weak();
          v4 = v5;
        }
      }
    }
    else {
      v4 = &ui_LayoutAccessor_empty_;
    }
    result = GameRoutine_1563c50(v4, "In", 0, 1.0);
    *(_DWORD*)(v1 + 840) = 1;
  }
  return result;
}

__int64 TelopStatusChange_Unknown39(__int64 result, long double a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;

  if (*(int*)(result + 840) >= 5) {
    v2 = *(_QWORD*)(result + 832);
    if (v2 != 0) {
      v3 = result;
      v4 = std___1___shared_weak_count_lock(v2);
      v5 = &ui_LayoutAccessor_empty_;
      if (v4 != 0) {
        if (*(_QWORD*)(v3 + 824) != 0) {
          v5 = *(__int64**)(v3 + 824);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v6 = v5;
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak();
          v5 = v6;
        }
      }
    }
    else {
      v5 = &ui_LayoutAccessor_empty_;
    }
    LODWORD(a2) = 1.0;
    return GameRoutine_1562680(v5, "Out", a2);
  }
  return result;
}

__int64 TelopStatusChange_Unknown2(__int64 a1, long double a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  int v8;
  __int64 v9;
  __int16 v10;

  v3 = game_g_game_setting_ptr;
  v4 = GameData_22736d0;
  if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 0xB) != 0) {
    LODWORD(a2) = 8.0;
    if (GameData_22736d0 != 0 && *(_DWORD*)(GameData_22736d0 + 624) != 0) {
      if ((GameRoutine_155ea30(GameData_22736d0 + 168) & 1) != 0 &&
          *(_DWORD*)(v4 + 624) == 1) {
        LODWORD(a2) = 8.0;
        goto LABEL_21;
      }
      GameRoutine_155e830(v4 + 168, 1);
      GameRoutine_155cda0(v4 + 272, "In", 0);
      if (*(_DWORD*)(v4 + 624) == 1) {
        v5 = 0;
      }
      else {
        GameRoutine_155d940(v4 + 272);
        v5 = 1;
      }
      LODWORD(a2) = 8.0;
    LABEL_20:
      *(_DWORD*)(v4 + 624) = v5;
    }
  }
  else {
    LODWORD(a2) = 1.0;
    if (GameData_22736d0 != 0 && *(_DWORD*)(GameData_22736d0 + 624) != 2) {
      if ((GameRoutine_155ea30(GameData_22736d0 + 168) & 1) == 0 &&
          *(_DWORD*)(v4 + 624) == 1) {
        LODWORD(a2) = 1.0;
        goto LABEL_21;
      }
      GameRoutine_155cda0(v4 + 272, "Out", 0);
      if (*(_DWORD*)(v4 + 624) == 1) {
        v5 = 2;
      }
      else {
        GameRoutine_155d940(v4 + 272);
        GameRoutine_155e830(v4 + 168, 0);
        v5 = 1;
      }
      LODWORD(a2) = 1.0;
      goto LABEL_20;
    }
  }

LABEL_21:
  GameRoutine_1749970(a1 + 824, a2);
  if (*(_DWORD*)(a1 + 840) == 5) {
    v6 = *(unsigned __int8*)(a1 + 1304);
    if ((v6 & 1) != 0) {
      v7 = *(_QWORD*)(a1 + 1312);
    }
    else {
      v7 = v6 >> 1;
    }
    if (v7 != 0) {
      v8 = 4;
      v9 = *(_QWORD*)(a1 + 8);
      if (v9 != 0) {
        goto LABEL_33;
      }
    }
    else if ((*(_BYTE*)(*(_QWORD*)v3 + 952LL) & 1) != 0) {
      v8 = 6;
      v9 = *(_QWORD*)(a1 + 8);
      if (v9 != 0) {
        while (1) {
        LABEL_33:
          if (*(_BYTE*)v9 == 2) {
            if (*(_DWORD*)(v9 + 32) == v8) {
              v10 = *(_WORD*)(a1 + 136);
              *(_QWORD*)(a1 + 16) = v9;
              *(_WORD*)(a1 + 136) = v10 & 0xFF7F;
              break;
            }
          }
          else if (*(_BYTE*)v9 == 0) {
            break;
          }
          v9 += 64;
        }
      }
    }
  }
  if (*(_BYTE*)(a1 + 335) == 1 &&
      (*(_BYTE*)(*(_QWORD*)v3 + 944LL) & 0xB) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 360LL))(a1);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 400LL))(a1);
}

__int64 TelopStatusChange_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_telop_TelopStatusChange_vtable;
  if ((*(_BYTE*)(a1 + 1304) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 1320);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  v4 = *(_QWORD*)(a1 + 1224);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak();
  }
  GameRoutine_17484f0((_QWORD*)(a1 + 824));
  return GameRoutine_1386f80(a1);
}

__int64 TelopStatusChange_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_telop_TelopStatusChange_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 1304) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 1320);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  v5 = *(_QWORD*)(a1 + 1224);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak();
  }
  GameRoutine_17484f0((_QWORD*)(a1 + 824));
  GameRoutine_1386f80(a1);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, a1);
}

#pragma GCC visibility pop
