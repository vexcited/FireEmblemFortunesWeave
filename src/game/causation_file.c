#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_9ddae0(_QWORD, _QWORD);
__int64 GameRoutine_9ddee0(_QWORD);
__int64 GameRoutine_9de4c0(_QWORD);
__int64 GameRoutine_9e1220(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_PrefixedLabel_Set(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_1ab3d3e;
extern _UNKNOWN GameData_1af1597;
extern _UNKNOWN* GameData_1fb9778;
extern __int64 (*GameData_1fb99d8[])();
extern __int64 (*GameData_1fb9a08[])();
extern __int64 (*GameData_1fb9aa8[])();
extern __int64 (*GameData_1fb9ae8[])();
extern __int64 (*GameData_1fb9b68[])();
extern __int64 GameData_21c9ca8;
extern __int64 GameData_21f8450;
extern __int64 GameData_21f8458;
extern __int64 GameData_21f8460;
extern __int64 GameData_21f8468;
extern __int64 GameData_21f8478;
extern __int64 GameData_21f8480;
extern __int64 GameData_21f8488;
extern __int64 GameData_21f8490;
extern __int64 GameData_21f84a0;
extern __int64 GameData_21f84a8;
extern __int64 GameData_21f84b8;
extern __int64 GameData_21f84c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21f8568;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
_QWORD* game_CausationFile_EachFlag(__int64 a1);
__int64 CausationFile_Unknown4();
__int64 CausationFile_Unknown5();
__int64 CausationFile_DeletingDestructor_9dce10(_QWORD* a1);
__int64 CausationFile_Destructor(_QWORD* a1);
__int64 CausationFile_DeletingDestructor_9dcf40(_QWORD* a1);
__int64 game_CausationFile_EachFlag_lambda0_Invoke(__int64 a1,
                                                   unsigned __int8* a2);
__int64 game_CausationFile_EachFlag_lambda1_Invoke(__int64 a1,
                                                   unsigned __int8* a2);

_QWORD* game_CausationFile_EachFlag(__int64 a1)
{
  int v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;
  _BYTE v11[4];

  v11[0] = 0;
  v2 = 1;
  v9[0] = GameData_1fb9ae8;
  v9[1] = a1;
  result = v9;
  v10 = v9;
  while (1) {
    (*(void (**)(_QWORD*, _BYTE*))(*result + 48LL))(result, v11);
    result = v10;
    if (v2 == 32) {
      break;
    }
    v11[0] = v2++;
    if (v10 == nullptr) {
    LABEL_13:
      GameRoutine_60a310(result);
    }
  }
  if (v10 == v9) {
    v5 = 32;
    goto LABEL_9;
  }
  if (v10 != nullptr) {
    v5 = 40;
  LABEL_9:
    (*(void (**)(_QWORD*, __int64))(*v10 + v5))(v10, v4);
  }
  result = v9;
  v11[0] = 0;
  v9[0] = GameData_1fb9b68;
  v9[1] = a1;
  v10 = v9;
  v6 = 1;
  while (1) {
    (*(void (**)(_QWORD*, _BYTE*))(*result + 48LL))(result, v11);
    result = v10;
    if (v6 == 32) {
      break;
    }
    v11[0] = v6++;
    if (v10 == nullptr) {
      goto LABEL_13;
    }
  }
  if (v10 == v9) {
    v8 = 32;
  }
  else {
    if (v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*v10 + v8))(v10, v7);
}

__int64 CausationFile_Unknown4()
{
  _QWORD* v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  int v20;
  unsigned __int8 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 i;
  __int64 v37;
  __int64 result;
  __int64 v39;
  _BYTE v40[4];

  if (GameData_21f8468 != 0) {
    v0 = (_QWORD*)GameData_21f8460;
    if (GameData_21f8460 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v2 = (_QWORD*)*v0;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v3);
        v0 = v2;
      } while (v2 != nullptr);
    }
    GameData_21f8460 = 0;
    if (GameData_21f8458 != 0) {
      v4 = GameData_21f8458 & 7;
      if ((unsigned __int64)GameData_21f8458 >= 8) {
        v6 = GameData_21f8458 & 0xFFFFFFFFFFFFFFF8LL;
        v5 = 0;
        do {
          *(_QWORD*)(GameData_21f8450 + 8 * v5) = 0;
          *(_QWORD*)(GameData_21f8450 + 8 * v5 + 8) = 0;
          *(_QWORD*)(GameData_21f8450 + 8 * v5 + 16) = 0;
          *(_QWORD*)(GameData_21f8450 + 8 * v5 + 24) = 0;
          *(_QWORD*)(GameData_21f8450 + 8 * v5 + 32) = 0;
          *(_QWORD*)(GameData_21f8450 + 8 * v5 + 40) = 0;
          *(_QWORD*)(GameData_21f8450 + 8 * v5 + 48) = 0;
          v7 = GameData_21f8450 + 8 * v5;
          v5 += 8;
          *(_QWORD*)(v7 + 56) = 0;
        } while (v6 != v5);
      }
      else {
        v5 = 0;
      }
      if (v4 != 0) {
        v8 = 8 * v5;
        do {
          --v4;
          *(_QWORD*)(GameData_21f8450 + v8) = 0;
          v8 += 8;
        } while (v4 != 0);
      }
    }
    GameData_21f8468 = 0;
  }
  if (GameData_21f8490 != 0) {
    v9 = (_QWORD*)GameData_21f8488;
    if (GameData_21f8488 != 0) {
      v10 = fw_memory_g_heap_manager_ptr;
      do {
        v11 = (_QWORD*)*v9;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v12);
        v9 = v11;
      } while (v11 != nullptr);
    }
    GameData_21f8488 = 0;
    if (GameData_21f8480 != 0) {
      v13 = GameData_21f8480 & 7;
      if ((unsigned __int64)GameData_21f8480 >= 8) {
        v15 = GameData_21f8480 & 0xFFFFFFFFFFFFFFF8LL;
        v14 = 0;
        do {
          *(_QWORD*)(GameData_21f8478 + 8 * v14) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v14 + 8) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v14 + 16) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v14 + 24) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v14 + 32) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v14 + 40) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v14 + 48) = 0;
          v16 = GameData_21f8478 + 8 * v14;
          v14 += 8;
          *(_QWORD*)(v16 + 56) = 0;
        } while (v15 != v14);
      }
      else {
        v14 = 0;
      }
      if (v13 != 0) {
        v17 = 8 * v14;
        do {
          --v13;
          *(_QWORD*)(GameData_21f8478 + v17) = 0;
          v17 += 8;
        } while (v13 != 0);
      }
    }
    GameData_21f8490 = 0;
  }
  v40[0] = 32;
  v18 = *(__int64**)(GameData_21c9ca8 + 64);
  v19 = *(__int64**)(GameData_21c9ca8 + 72);
  if (v18 != v19) {
    v20 = 1;
    v21 = 32;
    v22 = 0;
    do {
      v23 = v22;
      v22 = *v18;
      v24 = *(unsigned __int8*)(*v18 + 56);
      v39 = *v18;
      if (v24 == v21) {
        if (v23 != 0) {
          ++v20;
          *(_QWORD*)(*(_QWORD*)(v23 + 24) + 16LL) = v22;
          *(_QWORD*)(*(_QWORD*)(v22 + 24) + 8LL) = v23;
        }
      }
      else {
        v40[0] = v24;
        GameRoutine_9e1220(&GameData_21f8450, v40, v40, &v39);
        v20 = 1;
        v21 = v24;
      }
      GameRoutine_9e1220(&GameData_21f8478, v40, v40, &v39);
      ++v18;
      **(_DWORD**)(v22 + 24) = v20;
    } while (v18 != v19);
  }
  v25 = GameData_21f84a8;
  v26 = 0xCCCCCCCCCCCCCCCDLL * ((GameData_21f84a8 - GameData_21f84a0) >> 3);
  if (v26 > 0x1F) {
    if (GameData_21f84a8 - GameData_21f84a0 != 1280) {
      v27 = GameData_21f84a0 + 1280;
      if (GameData_21f84a0 + 1280 != GameData_21f84a8) {
        v28 = fw_memory_g_heap_manager_ptr;
        do {
          if ((*(_BYTE*)(v25 - 24) & 1) != 0 && *(_QWORD*)(v25 - 8) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) != 0) {
              v29 = 128;
            }
            else {
              v29 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v28 + v29);
          }
          v25 -= 40;
        } while (v25 != v27);
      }
      GameData_21f84a8 = v27;
    }
  }
  else {
    GameRoutine_9ddae0(&GameData_21f84a0, 32 - v26);
  }
  v30 = GameData_21f84c0;
  v31 = 0xCCCCCCCCCCCCCCCDLL * ((GameData_21f84c0 - GameData_21f84b8) >> 3);
  if (v31 > 0x1F) {
    if (GameData_21f84c0 - GameData_21f84b8 != 1280) {
      v32 = GameData_21f84b8 + 1280;
      if (GameData_21f84b8 + 1280 != GameData_21f84c0) {
        v33 = fw_memory_g_heap_manager_ptr;
        do {
          if ((*(_BYTE*)(v30 - 24) & 1) != 0 && *(_QWORD*)(v30 - 8) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v33 + 200LL) != 0) {
              v34 = 128;
            }
            else {
              v34 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v33 + v34);
          }
          v30 -= 40;
        } while (v30 != v32);
      }
      GameData_21f84c0 = v32;
    }
  }
  else {
    GameRoutine_9ddae0(&GameData_21f84b8, 32 - v31);
  }
  v35 = (__int64*)&GameData_1fb9778;
  for (i = 0; i != 1280; i += 40) {
    v37 = *v35++;
    game_PrefixedLabel_Set(GameData_21f84a0 + i, &GameData_1af1597, v37);
    result =
        game_PrefixedLabel_Set(GameData_21f84b8 + i, &GameData_1ab3d3e, v37);
  }
  return result;
}

__int64 CausationFile_Unknown5()
{
  __int64 v0;
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 i;
  __int64 v20;
  __int64 v21;
  __int64 j;
  __int64 v23;

  v0 = fw_memory_g_heap_manager_ptr;
  if (GameData_21f8468 != 0) {
    v1 = (_QWORD*)GameData_21f8460;
    if (GameData_21f8460 != 0) {
      do {
        v2 = (_QWORD*)*v1;
        if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v3);
        v1 = v2;
      } while (v2 != nullptr);
    }
    GameData_21f8460 = 0;
    if (GameData_21f8458 != 0) {
      v5 = GameData_21f8458 & 7;
      if ((unsigned __int64)GameData_21f8458 >= 8) {
        v7 = GameData_21f8458 & 0xFFFFFFFFFFFFFFF8LL;
        v6 = 0;
        do {
          *(_QWORD*)(GameData_21f8450 + 8 * v6) = 0;
          *(_QWORD*)(GameData_21f8450 + 8 * v6 + 8) = 0;
          *(_QWORD*)(GameData_21f8450 + 8 * v6 + 16) = 0;
          *(_QWORD*)(GameData_21f8450 + 8 * v6 + 24) = 0;
          *(_QWORD*)(GameData_21f8450 + 8 * v6 + 32) = 0;
          *(_QWORD*)(GameData_21f8450 + 8 * v6 + 40) = 0;
          *(_QWORD*)(GameData_21f8450 + 8 * v6 + 48) = 0;
          v8 = GameData_21f8450 + 8 * v6;
          v6 += 8;
          *(_QWORD*)(v8 + 56) = 0;
        } while (v7 != v6);
      }
      else {
        v6 = 0;
      }
      if (v5 != 0) {
        v9 = 8 * v6;
        do {
          --v5;
          *(_QWORD*)(GameData_21f8450 + v9) = 0;
          v9 += 8;
        } while (v5 != 0);
      }
    }
    GameData_21f8468 = 0;
  }
  if (GameData_21f8490 != 0) {
    v10 = (_QWORD*)GameData_21f8488;
    if (GameData_21f8488 != 0) {
      do {
        v11 = (_QWORD*)*v10;
        if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v12);
        v10 = v11;
      } while (v11 != nullptr);
    }
    GameData_21f8488 = 0;
    if (GameData_21f8480 != 0) {
      v13 = GameData_21f8480 & 7;
      if ((unsigned __int64)GameData_21f8480 >= 8) {
        v15 = GameData_21f8480 & 0xFFFFFFFFFFFFFFF8LL;
        v14 = 0;
        do {
          *(_QWORD*)(GameData_21f8478 + 8 * v14) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v14 + 8) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v14 + 16) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v14 + 24) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v14 + 32) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v14 + 40) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v14 + 48) = 0;
          v16 = GameData_21f8478 + 8 * v14;
          v14 += 8;
          *(_QWORD*)(v16 + 56) = 0;
        } while (v15 != v14);
      }
      else {
        v14 = 0;
      }
      if (v13 != 0) {
        v17 = 8 * v14;
        do {
          --v13;
          *(_QWORD*)(GameData_21f8478 + v17) = 0;
          v17 += 8;
        } while (v13 != 0);
      }
    }
    GameData_21f8490 = 0;
  }
  v18 = GameData_21f84a0;
  for (i = GameData_21f84a8; i != v18; i -= 40) {
    if ((*(_BYTE*)(i - 24) & 1) != 0 && *(_QWORD*)(i - 8) != 0) {
      if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
        v20 = 128;
      }
      else {
        v20 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v20);
    }
  }
  GameData_21f84a8 = v18;
  v21 = GameData_21f84b8;
  for (j = GameData_21f84c0; j != v21; j -= 40) {
    if ((*(_BYTE*)(j - 24) & 1) != 0 && *(_QWORD*)(j - 8) != 0) {
      if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
        v23 = 128;
      }
      else {
        v23 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v23);
    }
  }
  GameData_21f84c0 = v21;
  return result;
}

__int64 CausationFile_DeletingDestructor_9dce10(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  *a1 = GameData_1fb99d8;
  a1[1] = GameData_1fb9a08;
  v2 = a1 + 1;
  GameRoutine_9ddee0(a1 + 1);
  GameRoutine_9de4c0(v2);
  if ((_QWORD*)GameData_21c9ca8 == a1) {
    GameData_21c9ca8 = 0;
    GameData_21f8568 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

__int64 CausationFile_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 result;

  *(a1 - 1) = GameData_1fb99d8;
  v2 = a1 - 1;
  *a1 = GameData_1fb9a08;
  GameRoutine_9ddee0(a1);
  result = GameRoutine_9de4c0(a1);
  *v2 = GameData_1fb9aa8;
  if ((_QWORD*)GameData_21c9ca8 == v2) {
    GameData_21c9ca8 = 0;
    GameData_21f8568 = 0;
  }
  return result;
}

__int64 CausationFile_DeletingDestructor_9dcf40(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  *(a1 - 1) = GameData_1fb99d8;
  v2 = a1 - 1;
  *a1 = GameData_1fb9a08;
  GameRoutine_9ddee0(a1);
  GameRoutine_9de4c0(a1);
  if ((_QWORD*)GameData_21c9ca8 == v2) {
    GameData_21c9ca8 = 0;
    GameData_21f8568 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

__int64 game_CausationFile_EachFlag_lambda0_Invoke(__int64 a1,
                                                   unsigned __int8* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
  if (v2 == 0) {
    GameRoutine_60a310((unsigned __int8)v2);
  }
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 48LL))(
      v2, GameData_21f84a0 + 40LL * *a2);
}

__int64 game_CausationFile_EachFlag_lambda1_Invoke(__int64 a1,
                                                   unsigned __int8* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
  if (v2 == 0) {
    GameRoutine_60a310((unsigned __int8)v2);
  }
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 48LL))(
      v2, GameData_21f84b8 + 40LL * *a2);
}

#pragma GCC visibility pop
