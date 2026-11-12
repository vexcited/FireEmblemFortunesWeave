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
__int64 CausationFile_Unknown5_alt1() __asm__("CausationFile_Unknown5");
__int64 CausationFile_DeletingDestructor_9dce10_alt1(_QWORD* a1) __asm__(
    "CausationFile_DeletingDestructor_9dce10");
__int64 CausationFile_Destructor(_QWORD* a1);
__int64 CausationFile_DeletingDestructor_9dcf40_alt1(_QWORD* a1) __asm__(
    "CausationFile_DeletingDestructor_9dcf40");
__int64 game_CausationFile_EachFlag_lambda0_Invoke(__int64 a1,
                                                   unsigned __int8* a2);
__int64 game_CausationFile_EachFlag_lambda1_Invoke(__int64 a1,
                                                   unsigned __int8* a2);
__int64* GameVariable_82e4d0(int);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
extern _UNKNOWN GameData_1a8585a;
extern _UNKNOWN GameData_1a8d5b1;
extern _UNKNOWN GameData_1a98eef;
extern _UNKNOWN GameData_1abbd7d;
extern _UNKNOWN GameData_1ade279;
extern _UNKNOWN GameData_1ae5b38;
extern _UNKNOWN GameData_21f8560;
extern __int64* GameData_212c968[154];
extern __int64 GameData_21f84d8;
extern __int64 GameData_21f84e0;
extern __int64 GameData_21f84f0;
extern __int64 GameData_21f84f8;
extern __int64 GameData_21f8508;
extern __int64 GameData_21f8510;
extern __int64 GameData_21f8520;
extern __int64 GameData_21f8528;
extern __int64 GameData_21f8538;
extern __int64 GameData_21f8540;
extern __int64 GameData_21f8550;
extern __int64 GameData_21f8558;
extern __int64 game_GameModeData_instance_;
extern char GameData_21f84d0[];
extern char GameData_21f84e8;
extern char GameData_21f8500;
extern char GameData_21f8518;
extern char GameData_21f8530;
extern char GameData_21f8548;
__int64 CausationFile_9dbdc0(__int64 result);
bool CausationFile_9dc200(__int64 a1);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64
game_PrefixedLabel_Set_alt1(__int64, const char*,
                            const char*) __asm__("game_PrefixedLabel_Set");
extern char GameData_1ab3d3e_alt1[] __asm__("GameData_1ab3d3e");
extern char GameData_1af1597_alt1[] __asm__("GameData_1af1597");
void GameRoutine_9ddee0_alt1(_QWORD*) __asm__("GameRoutine_9ddee0");
void GameRoutine_9de4c0_alt1(_QWORD*) __asm__("GameRoutine_9de4c0");
void GameRoutine_9e1220_alt1(__int64, unsigned __int8*, char*,
                             _QWORD*) __asm__("GameRoutine_9e1220");
void game_9ddae0(__int64*, unsigned __int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CausationFile_Unknown5();
void CausationFile_DeletingDestructor_9dce10(_QWORD* a1);
void CausationFile_DeletingDestructor_9dcf40(_QWORD* a1);

__int64 CausationFile_9dbdc0(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;

  if (result != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f8560,
                              memory_order_acquire) &
         1) == 0) {
      v13 = result;
      v12 = __cxa_guard_acquire(&GameData_21f8560);
      result = v13;
      if (v12 != 0) {
        GameData_21f84d0[0] = 26;
        GameData_21f84e0 = (__int64)&GameData_1a8585a;
        GameData_21f84d8 = game_HashString((__int64)&GameData_1a8585a);
        GameData_21f84e8 = 27;
        GameData_21f84f8 = (__int64)&GameData_1abbd7d;
        GameData_21f84f0 = game_HashString((__int64)&GameData_1abbd7d);
        GameData_21f8500 = 28;
        GameData_21f8510 = (__int64)&GameData_1a98eef;
        GameData_21f8508 = game_HashString((__int64)&GameData_1a98eef);
        GameData_21f8518 = 29;
        GameData_21f8528 = (__int64)&GameData_1a8d5b1;
        GameData_21f8520 = game_HashString((__int64)&GameData_1a8d5b1);
        GameData_21f8530 = 30;
        GameData_21f8540 = (__int64)&GameData_1ade279;
        GameData_21f8538 = game_HashString((__int64)&GameData_1ade279);
        GameData_21f8548 = 31;
        GameData_21f8558 = (__int64)&GameData_1ae5b38;
        GameData_21f8550 = game_HashString((__int64)&GameData_1ae5b38);
        __cxa_guard_release(&GameData_21f8560);
        result = v13;
      }
    }
    v1 = 0;
    v2 = (_QWORD*)*GameData_212c968[0];
  LABEL_4:
    v3 = *(_QWORD*)&GameData_21f84d0[v1 + 8];
    if (v3 == 0) {
      goto LABEL_28;
    }
    v4 = v2[12];
    if (v4 == 0 || v2[14] == 0) {
      goto LABEL_28;
    }
    v6 = v4 - 1;
    if ((v4 & (v4 - 1)) != 0) {
      v7 = *(_QWORD*)&GameData_21f84d0[v1 + 8];
      if (v3 >= v4) {
        v7 = v3 % v4;
      }
    }
    else {
      v7 = v6 & v3;
    }
    v8 = *(_QWORD**)(v2[11] + 8 * v7);
    if (v8 == nullptr) {
      goto LABEL_28;
    }
    v9 = (_QWORD*)*v8;
    if (v9 == nullptr) {
      goto LABEL_28;
    }
    if ((v4 & v6) == 0) {
      while (1) {
        v11 = v9[1];
        if (v11 == v3) {
          if (v9[2] == v3) {
            goto LABEL_30;
          }
        }
        else if ((v11 & v6) != v7) {
          goto LABEL_28;
        }
        v9 = (_QWORD*)*v9;
        if (v9 == nullptr) {
          goto LABEL_28;
        }
      }
    }
    while (1) {
      v10 = v9[1];
      if (v10 == v3) {
        if (v9[2] == v3) {
        LABEL_30:
          if (v9[3] == result) {
            return (unsigned __int8)GameData_21f84d0[v1];
          }
        LABEL_28:
          v1 += 24;
          if (v1 == 144) {
            return 0;
          }
          goto LABEL_4;
        }
      }
      else {
        if (v10 >= v4) {
          v10 %= v4;
        }
        if (v10 != v7) {
          goto LABEL_28;
        }
      }
      v9 = (_QWORD*)*v9;
      if (v9 == nullptr) {
        goto LABEL_28;
      }
    }
  }
  return result;
}

bool CausationFile_9dc200(__int64 a1)
{
  int v2;
  unsigned __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  int v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;

  v2 = **(_DWORD**)(a1 + 24);
  v3 = (unsigned __int64*)(GameData_21f84a0 +
                           40LL * *(unsigned __int8*)(a1 + 56));
  v4 = *v3;
  if (*v3 == 0 || (LODWORD(v4) = game_GameModeData_instance_,
                   game_GameModeData_instance_ == 0)) {
  LABEL_5:
    if (v2 <= (int)v4) {
      return false;
    }
    goto LABEL_6;
  }
  v5 = game_GameVariableTable_Find(
      *(_QWORD**)(game_GameModeData_instance_ + 48), v3);
  if (v5 != 0) {
    LODWORD(v4) = *(_DWORD*)(v5 + 32);
    goto LABEL_5;
  }
  if (v2 <= 0) {
    return false;
  }
LABEL_6:
  v6 = *(unsigned __int8*)(a1 + 59);
  if (*(_BYTE*)(a1 + 59) == 0) {
    v8 = game_GameModeData_instance_;
    v10 = *(unsigned __int16*)(a1 + 60);
    if (game_GameModeData_instance_ != 0) {
      goto LABEL_11;
    }
    goto LABEL_15;
  }
  v7 = GameVariable_82e4d0(1);
  v8 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0 &&
      (v9 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)v7)) != 0) {
    if (*(_DWORD*)(v9 + 32) >= v6) {
      goto LABEL_10;
    }
  }
  else if (v6 <= 0) {
  LABEL_10:
    v10 = *(unsigned __int16*)(a1 + 60);
    if (v8 != 0) {
    LABEL_11:
      v11 = *(_DWORD*)(v8 + 80);
      return v11 >= v10;
    }
  LABEL_15:
    v11 = 0;
    return v11 >= v10;
  }
  return false;
}

_QWORD* game_CausationFile_EachFlag(__int64 a1)
{
  int v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  int v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  _BYTE v12[4];

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12[0] = 0;
  v2 = 1;
  v10_.v10[0] = GameData_1fb9ae8;
  v10_.v10[1] = a1;
  v3 = v10_.v10;
  v10_.v11 = v10_.v10;
  while (1) {
    (*(void (**)(_QWORD*, _BYTE*))(*v3 + 48LL))(v3, v12),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v3 = v10_.v11;
    if (v2 == 32) {
      break;
    }
    v12[0] = v2++;
    if (v10_.v11 == nullptr) {
    LABEL_13:
      GameRoutine_60a310_alt1(),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if (v10_.v11 == v10_.v10) {
    v5 = 32;
    goto LABEL_9;
  }
  if (v10_.v11 != nullptr) {
    v5 = 40;
  LABEL_9:
    (*(void (**)(_QWORD*, __int64))(*v10_.v11 + v5))(v10_.v11, v4),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  result = v10_.v10;
  v12[0] = 0;
  v10_.v10[0] = GameData_1fb9b68;
  v10_.v10[1] = a1;
  v10_.v11 = v10_.v10;
  v7 = 1;
  while (1) {
    (*(void (**)(_QWORD*, _BYTE*))(*result + 48LL))(result, v12),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = v10_.v11;
    if (v7 == 32) {
      break;
    }
    v12[0] = v7++;
    if (v10_.v11 == nullptr) {
      goto LABEL_13;
    }
  }
  if (v10_.v11 == v10_.v10) {
    v9 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      return result;
    }
    v9 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*v10_.v11 + v9))(v10_.v11,
                                                                      v8);
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
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  const char** v37;
  __int64 i;
  const char* v39;
  __int64 result;
  __int64 v41;
  unsigned __int8 v42[4];

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
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
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v1 + v3, (__int64)v0),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
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
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v12, (__int64)v9),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
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
  v42[0] = 32;
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
      v41 = *v18;
      if (v24 == v21) {
        if (v23 != 0) {
          ++v20;
          *(_QWORD*)(*(_QWORD*)(v23 + 24) + 16LL) = v22;
          *(_QWORD*)(*(_QWORD*)(v22 + 24) + 8LL) = v23;
        }
      }
      else {
        v42[0] = v24;
        GameRoutine_9e1220_alt1((__int64)&GameData_21f8450, v42, (char*)v42,
                                &v41),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v20 = 1;
        v21 = v24;
      }
      GameRoutine_9e1220_alt1((__int64)&GameData_21f8478, v42, (char*)v42,
                              &v41),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
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
          if ((*(_BYTE*)(v25 - 24) & 1) != 0) {
            v29 = *(_QWORD*)(v25 - 8);
            if (v29 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) != 0) {
                v30 = 128;
              }
              else {
                v30 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v28 + v30, v29),
                  result = COERCE_AS(
                      __typeof__(result),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            }
          }
          v25 -= 40;
        } while (v25 != v27);
      }
      GameData_21f84a8 = v27;
    }
  }
  else {
    game_9ddae0(&GameData_21f84a0, 32 - v26),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v31 = GameData_21f84c0;
  v32 = 0xCCCCCCCCCCCCCCCDLL * ((GameData_21f84c0 - GameData_21f84b8) >> 3);
  if (v32 > 0x1F) {
    if (GameData_21f84c0 - GameData_21f84b8 != 1280) {
      v33 = GameData_21f84b8 + 1280;
      if (GameData_21f84b8 + 1280 != GameData_21f84c0) {
        v34 = fw_memory_g_heap_manager_ptr;
        do {
          if ((*(_BYTE*)(v31 - 24) & 1) != 0) {
            v35 = *(_QWORD*)(v31 - 8);
            if (v35 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v34 + 200LL) != 0) {
                v36 = 128;
              }
              else {
                v36 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v34 + v36, v35),
                  result = COERCE_AS(
                      __typeof__(result),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            }
          }
          v31 -= 40;
        } while (v31 != v33);
      }
      GameData_21f84c0 = v33;
    }
  }
  else {
    game_9ddae0(&GameData_21f84b8, 32 - v32),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v37 = (const char**)&GameData_1fb9778;
  for (i = 0; i != 1280; i += 40) {
    v39 = *v37++;
    game_PrefixedLabel_Set_alt1(GameData_21f84a0 + i, GameData_1af1597_alt1,
                                v39),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    result = game_PrefixedLabel_Set_alt1(GameData_21f84b8 + i,
                                         GameData_1ab3d3e_alt1, v39);
  }
  return result;
}

void CausationFile_Unknown5()
{
  __int64 v0;
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 i;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 j;
  __int64 v23;
  __int64 v24;

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
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v0 + v3, (__int64)v1);
        v1 = v2;
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
      do {
        v10 = (_QWORD*)*v9;
        if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v0 + v11, (__int64)v9);
        v9 = v10;
      } while (v10 != nullptr);
    }
    GameData_21f8488 = 0;
    if (GameData_21f8480 != 0) {
      v12 = GameData_21f8480 & 7;
      if ((unsigned __int64)GameData_21f8480 >= 8) {
        v14 = GameData_21f8480 & 0xFFFFFFFFFFFFFFF8LL;
        v13 = 0;
        do {
          *(_QWORD*)(GameData_21f8478 + 8 * v13) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v13 + 8) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v13 + 16) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v13 + 24) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v13 + 32) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v13 + 40) = 0;
          *(_QWORD*)(GameData_21f8478 + 8 * v13 + 48) = 0;
          v15 = GameData_21f8478 + 8 * v13;
          v13 += 8;
          *(_QWORD*)(v15 + 56) = 0;
        } while (v14 != v13);
      }
      else {
        v13 = 0;
      }
      if (v12 != 0) {
        v16 = 8 * v13;
        do {
          --v12;
          *(_QWORD*)(GameData_21f8478 + v16) = 0;
          v16 += 8;
        } while (v12 != 0);
      }
    }
    GameData_21f8490 = 0;
  }
  v17 = GameData_21f84a0;
  for (i = GameData_21f84a8; i != v17; i -= 40) {
    if ((*(_BYTE*)(i - 24) & 1) != 0) {
      v19 = *(_QWORD*)(i - 8);
      if (v19 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v0 + v20, v19);
      }
    }
  }
  GameData_21f84a8 = v17;
  v21 = GameData_21f84b8;
  for (j = GameData_21f84c0; j != v21; j -= 40) {
    if ((*(_BYTE*)(j - 24) & 1) != 0) {
      v23 = *(_QWORD*)(j - 8);
      if (v23 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
          v24 = 128;
        }
        else {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v0 + v24, v23);
      }
    }
  }
  GameData_21f84c0 = v21;
}

void CausationFile_DeletingDestructor_9dce10(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  *a1 = GameData_1fb99d8;
  a1[1] = GameData_1fb9a08;
  v2 = a1 + 1;
  GameRoutine_9ddee0_alt1(a1 + 1);
  GameRoutine_9de4c0_alt1(v2);
  if ((_QWORD*)GameData_21c9ca8 == a1) {
    GameData_21c9ca8 = 0;
    GameData_21f8568 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
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

void CausationFile_DeletingDestructor_9dcf40(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *(a1 - 1) = GameData_1fb99d8;
  v2 = (__int64)(a1 - 1);
  *a1 = GameData_1fb9a08;
  GameRoutine_9ddee0_alt1(a1);
  GameRoutine_9de4c0_alt1(a1);
  if (GameData_21c9ca8 == v2) {
    GameData_21c9ca8 = 0;
    GameData_21f8568 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
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
