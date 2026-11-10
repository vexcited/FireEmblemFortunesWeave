#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d7e7a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_PopupController_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 PopupController_Destructor(__int64 a1);
__int64 EffectLine_fb6440(void);
__int64 GameRoutine_d6d160(__int64, int, double, double);
__int64 GameRoutine_fb71a0(_QWORD);
__int64 Popup2D_f7f870(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN GameData_1a8df73;
extern _UNKNOWN GameData_1ab0bb0;
extern _UNKNOWN GameData_1ab0bce;
extern _UNKNOWN GameData_1ad3616;
extern _UNKNOWN GameData_1ad3634;
extern __int64 GameData_21d96b8;
extern __int64 GameData_21f3cb8;
extern __int64 GameData_21f3d10;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
__int64 PopupController_d7bf00(__int64 result);
bool PopupController_d7c8b0(__int64 a1, __int64 a2);
__int64 PopupController_d7c9e0(_QWORD* a1);
_DWORD* PopupController_d7ca90(_DWORD* result, int a2);
_QWORD* PopupController_d7e0e0(_QWORD* result, __int64* a2);
__int64 PopupController_d7e7a0(__int64 result);

__int64 PopupController_Destructor(__int64 a1)
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
  __int64 result;

  v1 = *(_QWORD*)(a1 + 280);
  *(_QWORD*)a1 = game_hub_PopupController_vtable;
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 288);
    if (v1 == v3) {
      goto LABEL_5;
    }
    do {
      v3 -= 80;
      GameRoutine_d7e7a0(v3);
    } while (v3 != v1);
    v4 = *(_QWORD*)(a1 + 280);
    *(_QWORD*)(a1 + 288) = v1;
    v1 = v4;
    if (v4 != 0) {
    LABEL_5:
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v1);
    }
  }
  if ((*(_BYTE*)(a1 + 256) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 272);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  if ((*(_BYTE*)(a1 + 232) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 248);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                    v8);
    }
  }
  if (*(_BYTE*)(a1 + 192) == 1 && (*(_BYTE*)(a1 + 168) & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 184);
    if (v10 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v10);
    }
  }
  if (*(_BYTE*)(a1 + 160) == 1 && (*(_BYTE*)(a1 + 136) & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 152);
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v12);
    }
  }
  v14 = *(_QWORD*)(a1 + 112);
  if (v14 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    result = *(_QWORD*)(a1 + 24);
    if (result == 0) {
      return result;
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
  std___1___shared_weak_count___release_weak(v14);
  result = *(_QWORD*)(a1 + 24);
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 PopupController_d7bf00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  double v5;
  double v6;
  int v7;
  int v8;

  if (*(_BYTE*)(result + 304) != 0) {
    v1 = *(_QWORD*)(result + 24);
    v2 = result;
    *(_BYTE*)(result + 304) = 0;
    if (v1 != 0) {
      v3 = *(_QWORD*)(result + 16);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                                memory_order_relaxed);
      v4 = std___1___shared_weak_count_lock(v1);
      result = std___1___shared_weak_count___release_weak(v1);
      if (v4 != 0) {
        if (v3 != 0) {
          if (*(_QWORD*)(v3 + 1384) != *(_QWORD*)(v3 + 1376)) {
            goto LABEL_6;
          }
          if ((*(_BYTE*)(v3 + 1760) & 0x10) != 0) {
            v8 = 1;
          }
          else {
            v7 = *(_DWORD*)(v2 + 208) | *(_DWORD*)(v2 + 120);
            if ((v7 & 1) != 0 || (v7 & 0xC0) == 0) {
            LABEL_6:
              result = *(_QWORD*)(v3 + 1192);
              if (result != 0) {
                result = EffectLine_fb6440();
              }
              goto LABEL_14;
            }
            v8 = 0;
          }
          result = GameRoutine_d6d160(v3 + 16, v8, v5, v6);
        }
      LABEL_14:
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak(v4);
        }
      }
    }
  }
  return result;
}

bool PopupController_d7c8b0(__int64 a1, __int64 a2)
{
  _BOOL8 result;
  int v4;
  __int64 v5;
  __int64 v6;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;

  if ((*(_BYTE*)(a1 + 305) & 1) != 0) {
    return true;
  }
  v4 = *(unsigned __int8*)(a1 + 8);
  result = false;
  if (v4 != 0 && (*(_BYTE*)(a1 + 64) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 104);
    if (v5 == 0 || (unsigned int)Popup2D_f7f870(v5, a2) != 3) {
      v6 = *(_QWORD*)(a1 + 32);
      if (v6 != 0 &&
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v6 + 24) + 8LL) + 145LL) != 1) {
        return false;
      }
    }
    if (*(int*)(GameData_21f3cb8 + 32) > 0 ||
        *(_DWORD*)(GameData_21f3cb8 + 16) > 0) {
      return false;
    }
    if (game_ProcGameSkipView_instance_ != 0 &&
        (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
                1 <=
            2) {
      v8 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v9 = (v8 & 8) != 0 ? 2 : 3;
      if ((v9 & v8) == 0) {
        return false;
      }
    }
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v10 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
      if (v10 != 0 && *(_QWORD*)(v10 + 40) != 0) {
        return false;
      }
    }
    v11 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
    if (v11 != 0 && *(_QWORD*)(v11 + 40) != 0) {
      return false;
    }
    return *(_BYTE*)(GameData_21f3d10 + 10) == 1 &&
           *(_DWORD*)(GameData_21d96b8 + 24) < 1;
  }
  return result;
}

__int64 PopupController_d7c9e0(_QWORD* a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;

  v1 = a1[4];
  if (v1 != 0) {
    return GameRoutine_fb71a0(*(_QWORD*)(v1 + 1232));
  }
  v3 = a1[3];
  if (v3 == 0) {
    return 1;
  }
  v4 = a1[2];
  v5 = a1[3];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v6 = std___1___shared_weak_count_lock(v5);
  result = std___1___shared_weak_count___release_weak(v3);
  if (v6 == 0) {
    return 1;
  }
  if (v4 != 0) {
    result = GameRoutine_fb71a0(*(_QWORD*)(v4 + 1688));
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v7 = result;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    result = v7;
  }
  if (v4 == 0) {
    return 1;
  }
  return result;
}

_DWORD* PopupController_d7ca90(_DWORD* result, int a2)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  void* v6;

  if (a2 == 2) {
    v2 = result[52] | result[30];
    v3 = result[57];
    if (v3 == 1) {
      v6 = &GameData_1ab0bce;
      v4 = game_HashString(&GameData_1ab0bce);
    }
    else {
      if (v3 != 2) {
        goto LABEL_11;
      }
      v6 = &GameData_1a8df73;
      v4 = game_HashString(&GameData_1a8df73);
    }
    v5 = v4;
    if (game_GameModeData_instance_ != 0) {
      game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                  &v5);
    }
  LABEL_11:
    if ((v2 & 0x801) == 0x800) {
      v6 = &GameData_1ad3616;
      v5 = game_HashString(&GameData_1ad3616);
      if (game_GameModeData_instance_ != 0) {
        game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v5);
      }
    }
    v6 = &GameData_1ad3634;
    result = (_DWORD*)game_HashString(&GameData_1ad3634);
    v5 = (__int64)result;
    if (game_GameModeData_instance_ != 0) {
      return (_DWORD*)game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v5);
    }
    return result;
  }
  if (a2 == 1) {
    v6 = &GameData_1ab0bb0;
    result = (_DWORD*)game_HashString(&GameData_1ab0bb0);
    v5 = (__int64)result;
    if (game_GameModeData_instance_ != 0) {
      return (_DWORD*)game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v5);
    }
  }
  return result;
}

_QWORD* PopupController_d7e0e0(_QWORD* result, __int64* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  char* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;

  v3 = result;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(result, a2[2], a2[1]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    result[1] = a2[1];
    result[2] = v5;
    *result = v4;
  }
  *((_DWORD*)v3 + 6) = *((_DWORD*)a2 + 6);
  if ((a2[4] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(v3 + 4, a2[6], a2[5]);
  }
  else {
    v6 = a2[4];
    v7 = a2[6];
    v3[5] = a2[5];
    v3[6] = v7;
    v3[4] = v6;
  }
  v3[8] = 0;
  v3[9] = 0;
  v3[7] = 0;
  v8 = (char*)a2[7];
  v9 = (char*)a2[8];
  v10 = v9 - v8;
  if (v9 != v8) {
    if (0xAAAAAAAAAAAAAAABLL * (v10 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_64aa00(result);
    }
    result = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v9 - v8, 16, 0);
    v11 = result;
    v3[7] = result;
    v3[8] = result;
    v3[9] = (char*)result + v10;
    do {
      if ((*v8 & 1) != 0) {
        result = (_QWORD*)fw_text_String_CopyTerminated(v11, *((_QWORD*)v8 + 2),
                                                        *((_QWORD*)v8 + 1));
      }
      else {
        v12 = *(_QWORD*)v8;
        v13 = *((_QWORD*)v8 + 2);
        v11[1] = *((_QWORD*)v8 + 1);
        v11[2] = v13;
        *v11 = v12;
      }
      v8 += 24;
      v11 += 3;
    } while (v8 != v9);
    v3[8] = v11;
  }
  return result;
}

__int64 PopupController_d7e7a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = *(_QWORD*)(result + 56);
  v2 = result;
  if (v1 != 0) {
    v3 = *(_QWORD*)(result + 64);
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_12;
    }
    v5 = *(_QWORD*)(result + 64);
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0) {
        v7 = *(_QWORD*)(v3 - 8);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
        }
      }
      v3 = v5;
    } while (v5 != v1);
    v9 = *(_QWORD*)(v2 + 56);
    *(_QWORD*)(v2 + 64) = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v1);
    }
  }
  if ((*(_BYTE*)(v2 + 32) & 1) != 0) {
    v11 = *(_QWORD*)(v2 + 48);
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v11);
    }
  }
  if ((*(_BYTE*)v2 & 1) != 0) {
    v13 = *(_QWORD*)(v2 + 16);
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
    }
  }
  return result;
}

#pragma GCC visibility pop
