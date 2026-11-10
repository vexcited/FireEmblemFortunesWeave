#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1570b30(_QWORD, _QWORD);
__int64 GameRoutine_157d6f0(_QWORD, _QWORD);
__int64 GameRoutine_15e0120(_QWORD);
__int64 GameRoutine_15e0200(_QWORD);
__int64 GameRoutine_15e04f0(_QWORD);
__int64 GameRoutine_19ed040(_QWORD);
__int64 GameRoutine_19ed2b0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);

extern __int64 (
    *game_facility_anonymous_RelianceMemoryChildMenuItem_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_LayoutAccessor_empty_;
__int64 RelianceMemoryChildMenuItem_Destructor(__int64 a1);
__int64 RelianceMemoryChildMenuItem_Unknown20(__int64 a1);
__int64 RelianceMemoryChildMenuItem_Unknown21(__int64 a1);
__int64 RelianceMemoryChildMenuItem_Unknown55(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 RelianceMemoryChildMenuItem_19ed040(__int64 a1);
__int64 RelianceMemoryChildMenuItem_19ed2b0(__int64 a1, int a2);

__int64 RelianceMemoryChildMenuItem_Destructor(__int64 a1)
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
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  __int64 v19;

  v1 = *(_QWORD*)(a1 + 416);
  *(_QWORD*)a1 = game_facility_anonymous_RelianceMemoryChildMenuItem_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 424) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = *(_QWORD*)(a1 + 360);
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 368) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = *(_QWORD*)(a1 + 304);
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 312) = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11);
  }
  v12 = *(_QWORD*)(a1 + 248);
  if (v12 != 0) {
    v13 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 256) = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(v13 + v14);
  }
  v15 = *(_QWORD*)(a1 + 192);
  if (v15 != 0) {
    v16 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 200) = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(v16 + v17);
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v19 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19);
  }
  return result;
}

__int64 RelianceMemoryChildMenuItem_Unknown20(__int64 a1)
{
  __int64 v2;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  GameRoutine_19ed2b0(a1, 1);
  return GameRoutine_19ed040(a1);
}

__int64 RelianceMemoryChildMenuItem_Unknown21(__int64 a1)
{
  __int64 v2;

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  GameRoutine_19ed2b0(a1, 0);
  return GameRoutine_19ed040(a1);
}

__int64 RelianceMemoryChildMenuItem_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  _QWORD v10[5];
  _BYTE v11[20];

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v9 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v9);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  v5 = *(_BYTE*)(a1 + 160);
  GameRoutine_15e0120(v11);
  if ((v5 & 1) == 0) {
    GameRoutine_15e0200(v11);
  }
  v6 = *(_QWORD*)(a1 + 88);
  v10[0] = v6;
  if (v6 != 0) {
    v6 = *(_QWORD*)(v6 + 392);
  }
  v10[1] = v6;
  memset(&v10[2], 0, 13);
  v10[4] = 0;
  BYTE5(v10[3]) = 6;
  v10[2] = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1) & 1;
  *(_DWORD*)((char*)&v10[2] + 1) =
      (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1) & 1;
  WORD1(v10[2]) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 576LL))(a1) & 1;
  BYTE4(v10[2]) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 600LL))(a1) & 1;
  GameRoutine_1570b30(v4, v10);
  v7 = GameRoutine_155fbe0(v4, "L_Level");
  GameRoutine_157d6f0(v7, a1 + 104);
  GameRoutine_19ed2b0(a1, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL) == a1);
  GameRoutine_19ed040(a1);
  return GameRoutine_15e04f0(v11);
}

__int64 RelianceMemoryChildMenuItem_19ed040(__int64 a1)
{
  _BYTE* v1;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  atomic_ullong* v8;
  __int64 result;
  const char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  const char* v14;
  int v15;
  const char* v16;
  __int64 v17;
  __int64 v18;

  v1 = (_BYTE*)(a1 + 169);
  v3 = 0;
  v4 = ui_LayoutAccessor_empty__ptr[0];
  do {
    v5 = *(_QWORD*)(a1 + 56);
    if (v5 != 0) {
      v6 = std___1___shared_weak_count_lock(v5);
      if (v6 != 0) {
        v7 = v6;
        v8 = (atomic_ullong*)(v6 + 8);
        result = *(_QWORD*)(a1 + 48);
        if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (result != 0) {
            goto LABEL_7;
          }
        }
        else {
          v11 = result;
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
          result = v11;
          if (v11 != 0) {
          LABEL_7:
            if ((int)v3 <= 2) {
              goto LABEL_8;
            }
            goto LABEL_14;
          }
        }
      }
    }
    result = (__int64)v4;
    if ((int)v3 <= 2) {
    LABEL_8:
      if ((_DWORD)v3 == 1) {
        v10 = "L_RankC";
      }
      else {
        if ((_DWORD)v3 != 2) {
          goto LABEL_2;
        }
        v10 = "L_RankB";
      }
      goto LABEL_18;
    }
  LABEL_14:
    if ((_DWORD)v3 == 3) {
      v10 = "L_RankA";
    }
    else {
      if ((_DWORD)v3 != 4) {
        goto LABEL_2;
      }
      v10 = "L_RankS";
    }
  LABEL_18:
    GameRoutine_1560070((void*)&v17, result, v10);
    result = v18;
    if (v18 == 0) {
      v12 = 0;
    LABEL_32:
      if (v12 == 0) {
        goto LABEL_2;
      }
    LABEL_40:
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        result = std___1___shared_weak_count___release_weak(v12);
      }
      goto LABEL_2;
    }
    v12 = std___1___shared_weak_count_lock(v18);
    result = v18;
    if (v12 != 0) {
      v13 = v17;
    }
    else {
      v13 = 0;
    }
    if (v18 != 0) {
      result = std___1___shared_weak_count___release_weak(v18);
    }
    if (v13 == 0) {
      goto LABEL_32;
    }
    if (*v1 == 1) {
      if (*(_BYTE*)(a1 + 162) == 1 && v3 == **(unsigned __int8**)(a1 + 96)) {
        if (*(_BYTE*)(a1 + 79) != 0) {
          v14 = "Decide";
        }
        else {
          v14 = "Select";
        }
      }
      else {
        v14 = "Default";
      }
      LayoutAccessor_1562680(v13, v14, 1.0);
      v16 = "CanTalk";
    }
    else {
      v15 = (unsigned __int8)*(v1 - 1);
      LayoutAccessor_1562680(v13, "Default", 1.0);
      if (v15 != 0) {
        v16 = "CantTalk";
      }
      else {
        v16 = "None";
      }
    }
    result = LayoutAccessor_1562680(v13, v16, 1.0);
    if (v12 != 0) {
      goto LABEL_40;
    }
  LABEL_2:
    ++v3;
    v1 += 56;
  } while (v3 != 5);
  return result;
}

__int64 RelianceMemoryChildMenuItem_19ed2b0(__int64 a1, int a2)
{
  __int64 v2;
  int v3;
  int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  _BOOL4 v13;
  __int64 result;
  char* v15;
  unsigned int v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;

  v2 = a1 + 169;
  v3 = *(unsigned __int8*)(a1 + 169);
  v6 = *(unsigned __int8*)(a1 + 225);
  v7 = *(unsigned __int8*)(a1 + 281);
  v8 = *(unsigned __int8*)(a1 + 337);
  v9 = *(unsigned __int8*)(a1 + 393);
  v10 = *(_QWORD*)(a1 + 56);
  *(_BYTE*)(v2 - 7) = a2;
  if (v10 == 0) {
    goto LABEL_5;
  }
  v11 = std___1___shared_weak_count_lock(v10);
  if (v11 == 0) {
    goto LABEL_5;
  }
  v12 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v19 = v11;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v19);
    if (v12 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v12 == nullptr) {
  LABEL_5:
    v12 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  v13 = (unsigned int)(v6 + v3 + v7 + v8 + v9) > 1;
  ui_LayoutAccessor_SetPaneVisible(v12, "L_Base/L_ArrowL",
                                   a2 & (unsigned int)v13);
  result = ui_LayoutAccessor_SetPaneVisible(v12, "L_Base/L_ArrowR",
                                            a2 & (unsigned int)v13);
  if (*(_BYTE*)(a1 + 162) != 1) {
    return result;
  }
  v15 = *(char**)(a1 + 96);
  v16 = (unsigned __int8)*v15;
  v17 = 56LL * (unsigned __int8)*v15;
  if ((*(_BYTE*)(v2 + v17) & 1) != 0) {
    return result;
  }
  if (*v15 == 0) {
    if ((*(_BYTE*)(a1 + 225) & 1) != 0) {
      v18 = 1;
    }
    else {
      if ((*(_BYTE*)(a1 + 281) & 1) == 0) {
        if ((*(_BYTE*)(a1 + 337) & 1) == 0) {
          if (*(_BYTE*)(v2 + v17 + 224) != 1) {
            return result;
          }
          goto LABEL_33;
        }
        goto LABEL_28;
      }
      v18 = 2;
    }
    goto LABEL_34;
  }
  v18 = v16 - 1;
  if ((*(_BYTE*)(v2 + 56LL * (int)(v16 - 1)) & 1) != 0) {
    goto LABEL_34;
  }
  if (v16 <= 3) {
    v18 = v16 + 1;
    if ((*(_BYTE*)(v2 + 56LL * (v16 + 1)) & 1) != 0) {
      goto LABEL_34;
    }
    if (v16 == 1) {
      if ((*(_BYTE*)(a1 + 337) & 1) == 0) {
        if ((*(_BYTE*)(v2 + v17 + 168) & 1) == 0) {
          return result;
        }
      LABEL_33:
        v18 = 4;
        goto LABEL_34;
      }
    LABEL_28:
      v18 = 3;
      goto LABEL_34;
    }
  }
  v18 = v16 - 2;
  if ((*(_BYTE*)(v2 + 56LL * (int)(v16 - 2)) & 1) != 0) {
    goto LABEL_34;
  }
  if (v16 >= 3) {
    v18 = v16 - 3;
    if ((*(_BYTE*)(v2 + 56LL * (int)(v16 - 3)) & 1) != 0) {
      goto LABEL_34;
    }
    if (v16 == 3) {
      return result;
    }
    v18 = v16 - 4;
    v20 = 56LL * (int)(v16 - 4);
  }
  else {
    v18 = v16 + 2;
    v20 = 56LL * (v16 + 2);
  }
  if ((*(_BYTE*)(v2 + v20) & 1) != 0) {
  LABEL_34:
    *v15 = v18;
  }
  return result;
}

#pragma GCC visibility pop
