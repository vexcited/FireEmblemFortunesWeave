#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MapSortieMenu_871860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ffd090[])();
extern __int64 (*GameData_1ffd110[])();
extern __int64 GameData_21c9ce8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d458[7];
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 game_hub_anonymous_ProcChallengeBegin_Dialog(__int64 a1);
__int64 ProcChallengeBegin_fc34c0(__int64 result);
__n128 ProcChallengeBegin_fc3840(_QWORD* a1);
__int64 ProcChallengeBegin_fc3b20(__int64 a1);
__int64 game_hub_anonymous_ProcChallengeBegin_Dialog_closure_Invoke(__int64 a1);

__int64 game_hub_anonymous_ProcChallengeBegin_Dialog(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v4;
  _QWORD v5[4];
  _QWORD* v6;
  _QWORD v7[4];
  _QWORD* v8;
  _QWORD v9[4];
  _QWORD* v10;
  const char* v11;

  v11 = "MID_Dungeon_Challenger_Confirm";
  v8 = v7;
  v6 = v5;
  v9[0] = GameData_1ffd090;
  v9[1] = a1;
  v10 = v9;
  v7[0] = GameData_1ffd110;
  v5[0] = GameData_1ffd110;
  MapSortieMenu_871860(a1, &v11, v9, v7, v5);
  if (v6 == v5) {
    v1 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v6 + v1))((__int64)v6);
LABEL_6:
  if (v8 == v7) {
    v2 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_11;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v8 + v2))((__int64)v8);
LABEL_11:
  result = (__int64)v10;
  if (v10 == v9) {
    v4 = 32;
  }
  else {
    if (v10 == nullptr) {
      return result;
    }
    v4 = 40;
  }
  return (*(__int64 (**)(__int64))(*v10 + v4))((__int64)v10);
}

__int64 ProcChallengeBegin_fc34c0(__int64 result)
{
  int v1;
  __int64 v2;

  if (*(_BYTE*)(result + 176) != 0) {
    v1 = 1;
  }
  else {
    v1 = 2;
  }
  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    while (1) {
      if (*(_BYTE*)v2 == 2) {
        if (*(_DWORD*)(v2 + 32) == v1) {
          *(_QWORD*)(result + 16) = v2;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v2 == 0) {
        return result;
      }
      v2 += 64;
    }
  }
  return result;
}

__n128 ProcChallengeBegin_fc3840(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __n128 result;
  __int64* v5;
  _QWORD* i;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* j;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  bool v29;
  bool v30;
  bool v31;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;

  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      48, 16, 0);
  *(_BYTE*)(v3 + 43) = 0;
  v36 = v3;
  *(_DWORD*)(v3 + 39) = -1182604392;
  *(_QWORD*)(v3 + 24) = 0xE3BCACE980A1E8B8LL;
  *(_QWORD*)(v3 + 32) = 0x9883E3AB83E39C83LL;
  *(_QWORD*)v3 = 0x83E3A583E38183E3LL;
  *(_QWORD*)(v3 + 8) = 0xE3AA83E38883E3BCLL;
  *(_QWORD*)(v3 + 16) = 0x90E55FAB83E3A282LL;
  v5 = GameData_212d458[0];
  for (i = *(_QWORD**)(*GameData_212d458[0] + 24);
       i != *(_QWORD**)(*GameData_212d458[0] + 32); i += 2) {
    v7 = *i;
    v8 = *(unsigned __int8*)(*i + 320LL);
    v9 = *(_QWORD*)(*i + 328LL);
    if ((v8 & 1) == 0) {
      v9 = v8 >> 1;
    }
    if (v9 == 15) {
      v10 = (v8 & 1) != 0 ? *(__int64**)(v7 + 336) : (__int64*)(v7 + 321);
      v11 = *v10;
      v12 = *(__int64*)((char*)v10 + 7);
      if (v11 == 0x8AE7A688E6918CE6LL && v12 == 0x98BBE4978FE5B68ALL) {
        v14 = i[1];
        if (v14 != 0) {
          v15 = v3;
          v16 = i[1];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                    memory_order_relaxed);
          v17 = std___1___shared_weak_count_lock(v16);
          result = std___1___shared_weak_count___release_weak(v14);
          v3 = v15;
          if (v17 != 0) {
            goto LABEL_45;
          }
        }
        break;
      }
    }
  }
  for (j = *(_QWORD**)(*v5 + 24);; j += 2) {
    if (j == *(_QWORD**)(*v5 + 32)) {
      goto LABEL_47;
    }
    v7 = *j;
    v19 = *(unsigned __int8*)(*j + 320LL);
    v20 = *(_QWORD*)(*j + 328LL);
    if ((v19 & 1) == 0) {
      v20 = v19 >> 1;
    }
    if (v20 == 43) {
      v21 = (v19 & 1) != 0 ? *(__int64**)(v7 + 336) : (__int64*)(v7 + 321);
      v22 = *v21;
      v23 = v21[1];
      v24 = v21[2];
      v25 = v21[3];
      v26 = v21[4];
      v27 = *(__int64*)((char*)v21 + 35);
      v28 = *(_QWORD*)v3 == v22 && *(_QWORD*)(v3 + 8) == v23;
      v29 = v28 && *(_QWORD*)(v3 + 16) == v24;
      v30 = v29 && *(_QWORD*)(v3 + 24) == v25;
      v31 = v30 && *(_QWORD*)(v3 + 32) == v26;
      if (v31 && *(_QWORD*)(v3 + 35) == v27) {
        break;
      }
    }
  }
  v33 = j[1];
  if (v33 == 0 ||
      (v34 = j[1],
       atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16), 1u,
                                 memory_order_relaxed),
       v17 = std___1___shared_weak_count_lock(v34),
       result = std___1___shared_weak_count___release_weak(v33), v17 == 0)) {
  LABEL_47:
    *a1 = 0;
    a1[1] = 0;
    goto LABEL_48;
  }
LABEL_45:
  *a1 = v7;
  a1[1] = v17;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v17 + 16LL))(
        v17, *(long double*)&result);
    result = std___1___shared_weak_count___release_weak(v17);
  }
LABEL_48:
  if (v36 != 0) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v35 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v35);
  }
  return result;
}

__int64 ProcChallengeBegin_fc3b20(__int64 a1)
{
  unsigned __int64 v1;
  bool v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  char* v9;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  unsigned __int64 v24;
  char* v25;

  v1 = *(unsigned __int8*)(a1 + 152);
  v2 = (v1 & 1) == 0;
  v3 = v1 >> 1;
  if (v2) {
    v4 = v3;
  }
  else {
    v4 = *(_QWORD*)(a1 + 160);
  }
  if (v2) {
    v5 = a1 + 153;
  }
  else {
    v5 = *(_QWORD*)(a1 + 168);
  }
  v6 = v4 + 4;
  if (v4 + 4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(a1);
  }
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v6 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16,
                                               0);
    v24 = v4 + 4;
    v25 = v9;
    *(_DWORD*)v9 = 1599230529;
    v7 = v9 + 4;
    v23 = v8 | 1;
  }
  else {
    HIDWORD(v23) = 0;
    v24 = 0;
    v25 = nullptr;
    *(_DWORD*)((char*)&v23 + 1) = 1599230529;
    LOBYTE(v23) = 2 * v6;
    v7 = (char*)&v23 + 5;
    if (v4 == 0) {
      goto LABEL_16;
    }
  }
  memmove(v7, v5, v4);
LABEL_16:
  v7[v4] = 0;
  if ((v23 & 1) != 0) {
    v10 = v25;
  }
  else {
    v10 = (char*)&v23 + 1;
  }
  v11 = game_HashString(v10);
  if (v11 == 0) {
    goto LABEL_43;
  }
  v12 = *(_QWORD*)(GameData_21c9ce8 + 96);
  if (v12 == 0 || *(_QWORD*)(GameData_21c9ce8 + 112) == 0) {
    goto LABEL_43;
  }
  v14 = v12 - 1;
  if ((v12 & (v12 - 1)) != 0) {
    v15 = v11;
    if (v11 >= v12) {
      v15 = v11 % v12;
    }
  }
  else {
    v15 = v14 & v11;
  }
  v16 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ce8 + 88) + 8 * v15);
  if (v16 != nullptr && (v17 = (_QWORD*)*v16) != nullptr) {
    if ((v12 & v14) == 0) {
      while (1) {
        v20 = v17[1];
        if (v20 == v11) {
          if (v17[2] == v11) {
            goto LABEL_52;
          }
        }
        else if ((v20 & v14) != v15) {
          goto LABEL_43;
        }
        v17 = (_QWORD*)*v17;
        v19 = 0;
        if (v17 == nullptr) {
          goto LABEL_46;
        }
      }
    }
    do {
      v18 = v17[1];
      if (v18 == v11) {
        if (v17[2] == v11) {
        LABEL_52:
          v19 = v17[3];
          if ((v23 & 1) != 0) {
            goto LABEL_47;
          }
          return v19;
        }
      }
      else {
        if (v18 >= v12) {
          v18 %= v12;
        }
        if (v18 != v15) {
          goto LABEL_43;
        }
      }
      v17 = (_QWORD*)*v17;
    } while (v17 != nullptr);
    v19 = 0;
  LABEL_46:
    if ((v23 & 1) == 0) {
      return v19;
    }
  }
  else {
  LABEL_43:
    v19 = 0;
    if ((v23 & 1) == 0) {
      return v19;
    }
  }
LABEL_47:
  if (v25 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
  }
  return v19;
}

__int64 game_hub_anonymous_ProcChallengeBegin_Dialog_closure_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 176) = 1;
  return 4;
}

#pragma GCC visibility pop
