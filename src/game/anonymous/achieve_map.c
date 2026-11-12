#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_682fb0(_QWORD);
__int64 GameRoutine_70cdd0(_QWORD);
__int64 GameRoutine_9b11a0(_QWORD*, unsigned __int64*, unsigned int);
__int64 GameRoutine_9b2000(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_util_Format(const char*, ...);
extern _UNKNOWN GameData_1a9cb6f;
extern _UNKNOWN* GameData_1f92d50;
extern _UNKNOWN* GameData_1f92dd0;
extern __int64 (*GameData_1fb3608[])();
extern __int64 (*GameData_1fb3678[])();
extern __int64 GameData_21c6980;
extern __int64 GameData_21c9868;
extern __int64 GameData_21c9870;
extern __int64* GameData_212c650[5];
extern char GameData_1a857f2[];
extern char GameData_1a9f09e;
__int64 game_anonymous_AchieveMap_Build_closure_Invoke_9b2a00(__int64 a1);
__int64 game_anonymous_AchieveMap_Build_closure_Invoke_9b2db0(__int64 a1,
                                                              char* a2);
__int64
game_anonymous_AchieveMap_Build_closure_Invoke_9b2f20(__int64 result,
                                                      unsigned __int8* a2);
__int64
game_anonymous_AchieveMap_GetMasteryCount_closure_Invoke(__int64 result,
                                                         unsigned __int8* a2);
__int64 game_HashString_alt1(_QWORD, _QWORD) __asm__("game_HashString");
__int64 GameRoutine_70cdd0_alt1(__int64) __asm__("GameRoutine_70cdd0");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString_alt2(__int64 result) __asm__("game_HashString");
__int64 game_VariableManager_SetFlag(__int64 result, int);
extern _UNKNOWN GameData_1aa48c4;
extern _UNKNOWN GameData_1ada637;
extern _UNKNOWN GameData_1ae5a5a;
extern _UNKNOWN GameData_1ae9964;
extern _UNKNOWN GameData_1af90aa;
extern _UNKNOWN GameData_21f7df0;
extern __int64 (*GameData_1fb36e8[])();
extern __int64 GameData_21f61c0[];
extern __int64 GameData_21f6250;
extern __int64 GameData_21f6268;
extern __int64 GameData_21f6270;
extern __int64 GameData_21f6280;
extern __int64 GameData_21f7d20[];
extern __int64 GameData_21f7d28;
extern __int64 GameData_21f7d30;
extern __int64 GameData_21f7d38;
extern __int64 GameData_21f7d40;
extern __int64 GameData_21f7d48;
extern __int64 GameData_21f7d50;
extern __int64 GameData_21f7d58;
extern __int64 GameData_21f7d60;
extern __int64 GameData_21f7d68;
extern __int64 GameData_21f7d70;
extern __int64 GameData_21f7d78;
extern __int64 GameData_21f7d80;
extern __int64 GameData_21f7d88;
extern __int64 GameData_21f7d90;
extern __int64 GameData_21f7d98;
extern __int64 GameData_21f7da0;
extern __int64 GameData_21f7da8;
extern __int64 GameData_21f7db0;
extern __int64 GameData_21f7db8;
extern __int64 GameData_21f7dc0;
extern __int64 GameData_21f7dc8;
extern __int64 GameData_21f7dd0;
extern __int64 GameData_21f7dd8;
extern __int64 GameData_21f7de0;
extern __int64 GameData_21f7de8;
extern __int64 game_GameModeData_instance_;
__int64* AchieveMap_9b19a0(__int64* result, unsigned __int8 a2,
                           unsigned __int8 a3);
__int64 game_anonymous_AchieveMap_GetMasteryCount(__int64 a1);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___next_prime(_QWORD);
extern __int64 GameData_21f6170;
extern __int64 GameData_21f6178;
extern __int64 GameData_21f6180;
extern __int64 GameData_21f6188;
extern __int64 GameData_21f6198;
extern __int64 GameData_21f61a0;
extern __int64 GameData_21f61a8;
extern __int64 GameData_21f61b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21f6190;
extern int GameData_21f61b8;
unsigned __int64 GameRoutine_9aef80(unsigned __int64 result);
unsigned __int64 GameRoutine_9af520(unsigned __int64 result);
unsigned __int64 AchieveMap_9aec80(unsigned __int64 result, int* a2, int* a3);
unsigned __int64 AchieveMap_9af240(unsigned __int64 result, int* a2, int* a3);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
void GameHr_9b2000(_QWORD*, __int64*);

unsigned __int64 AchieveMap_9aec80(unsigned __int64 result, int* a2, int* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v7;
  __int64 v8;
  __int64** v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  _BOOL8 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 primeEm;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  unsigned __int64 v28;

  v4 = *(unsigned int*)result;
  v7 = GameData_21f6178;
  if (GameData_21f6178 != 0) {
    v8 = GameData_21f6178 - 1;
    if ((GameData_21f6178 & (GameData_21f6178 - 1)) != 0) {
      v3 = *(unsigned int*)result;
      if (GameData_21f6178 <= v4) {
        v3 = (unsigned int)v4 % (unsigned int)GameData_21f6178;
      }
    }
    else {
      v3 = ((_DWORD)GameData_21f6178 - 1) & (unsigned int)v4;
    }
    v9 = *(__int64***)(GameData_21f6170 + 8 * v3);
    if (v9 != nullptr) {
      v10 = *v9;
      if (v10 != nullptr) {
        if ((GameData_21f6178 & v8) == 0) {
          while (1) {
            v12 = v10[1];
            if (v12 == v4) {
              if (*((_DWORD*)v10 + 4) == (_DWORD)v4) {
                return result;
              }
            }
            else if ((v12 & v8) != v3) {
              goto LABEL_22;
            }
            v10 = (__int64*)*v10;
            if (v10 == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v11 = v10[1];
          if (v11 == v4) {
            if (*((_DWORD*)v10 + 4) == (_DWORD)v4) {
              return result;
            }
          }
          else {
            if (v11 >= GameData_21f6178) {
              v11 %= (unsigned __int64)GameData_21f6178;
            }
            if (v11 != v3) {
              break;
            }
          }
          v10 = (__int64*)*v10;
        } while (v10 != nullptr);
      }
    }
  }
LABEL_22:
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v13 = *a2;
  v14 = *a3;
  v15 = result;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v4;
  v16 = *(float*)&GameData_21f6190;
  *(_DWORD*)(result + 16) = v13;
  *(_DWORD*)(result + 20) = v14;
  v17 = (float)(unsigned __int64)(GameData_21f6188 + 1);
  if (v7 == 0 || (float)(v16 * (float)v7) < v17) {
    v18 = v17 / v16;
    v19 = true;
    if (v7 >= 3) {
      v19 = (v7 & (v7 - 1)) != 0;
    }
    v20 = v19 | (2 * v7);
    v21 = vcvtps_u64_f32(v18);
    if (v20 <= v21) {
      result = v21;
    }
    else {
      result = v20;
    }
    if (result == 1) {
      result = 2;
    }
    else if ((result & (result - 1)) != 0) {
      result = std___1___next_prime(result);
      v7 = GameData_21f6178;
    }
    if (result > v7) {
      goto LABEL_34;
    }
    if (result < v7) {
      primeEm = vcvtps_u64_f32((float)(unsigned __int64)GameData_21f6188 /
                               *(float*)&GameData_21f6190);
      if (v7 < 3 || (v7 & (v7 - 1)) != 0) {
        v24 = result;
        primeEm = std___1___next_prime(primeEm);
        result = v24;
      }
      else {
        v23 = 1LL << -(char)__clz(primeEm - 1);
        if (primeEm >= 2) {
          primeEm = v23;
        }
      }
      if (result <= primeEm) {
        result = primeEm;
      }
      if (result < v7) {
      LABEL_34:
        result = GameRoutine_9aef80(result);
      }
    }
    v7 = GameData_21f6178;
    if ((v7 & (v7 - 1)) != 0) {
      if (GameData_21f6178 <= v4) {
        v3 = v4 % GameData_21f6178;
      }
      else {
        v3 = v4;
      }
    }
    else {
      v3 = ((_DWORD)GameData_21f6178 - 1) & (unsigned int)v4;
    }
  }
  v25 = GameData_21f6170;
  v26 = *(__int64**)(GameData_21f6170 + 8 * v3);
  if (v26 != nullptr) {
    *(_QWORD*)v15 = *v26;
    *v26 = v15;
  }
  else {
    v27 = GameData_21f6180;
    GameData_21f6180 = v15;
    *(_QWORD*)v15 = v27;
    *(_QWORD*)(v25 + 8 * v3) = &GameData_21f6180;
    if (*(_QWORD*)v15 != 0) {
      v28 = *(_QWORD*)(*(_QWORD*)v15 + 8LL);
      if ((v7 & (v7 - 1)) != 0) {
        if (v28 >= v7) {
          v28 %= v7;
        }
      }
      else {
        v28 &= v7 - 1;
      }
      *(_QWORD*)(GameData_21f6170 + 8 * v28) = v15;
    }
  }
  ++GameData_21f6188;
  return result;
}

unsigned __int64 AchieveMap_9af240(unsigned __int64 result, int* a2, int* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v7;
  __int64 v8;
  __int64** v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  _BOOL8 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 primeEm;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  unsigned __int64 v28;

  v4 = *(int*)result;
  v7 = GameData_21f61a0;
  if (GameData_21f61a0 != 0) {
    v8 = GameData_21f61a0 - 1;
    if ((GameData_21f61a0 & (GameData_21f61a0 - 1)) != 0) {
      v3 = *(int*)result;
      if (GameData_21f61a0 <= v4) {
        v3 = v4 % GameData_21f61a0;
      }
    }
    else {
      v3 = v8 & v4;
    }
    v9 = *(__int64***)(GameData_21f6198 + 8 * v3);
    if (v9 != nullptr) {
      v10 = *v9;
      if (v10 != nullptr) {
        if ((GameData_21f61a0 & v8) == 0) {
          while (1) {
            v12 = v10[1];
            if (v12 == v4) {
              if (*((_DWORD*)v10 + 4) == (_DWORD)v4) {
                return result;
              }
            }
            else if ((v12 & v8) != v3) {
              goto LABEL_22;
            }
            v10 = (__int64*)*v10;
            if (v10 == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v11 = v10[1];
          if (v11 == v4) {
            if (*((_DWORD*)v10 + 4) == (_DWORD)v4) {
              return result;
            }
          }
          else {
            if (v11 >= GameData_21f61a0) {
              v11 %= (unsigned __int64)GameData_21f61a0;
            }
            if (v11 != v3) {
              break;
            }
          }
          v10 = (__int64*)*v10;
        } while (v10 != nullptr);
      }
    }
  }
LABEL_22:
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v13 = *a2;
  v14 = *a3;
  v15 = result;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v4;
  v16 = *(float*)&GameData_21f61b8;
  *(_DWORD*)(result + 16) = v13;
  *(_DWORD*)(result + 20) = v14;
  v17 = (float)(unsigned __int64)(GameData_21f61b0 + 1);
  if (v7 == 0 || (float)(v16 * (float)v7) < v17) {
    v18 = v17 / v16;
    v19 = true;
    if (v7 >= 3) {
      v19 = (v7 & (v7 - 1)) != 0;
    }
    v20 = v19 | (2 * v7);
    v21 = vcvtps_u64_f32(v18);
    if (v20 <= v21) {
      result = v21;
    }
    else {
      result = v20;
    }
    if (result == 1) {
      result = 2;
    }
    else if ((result & (result - 1)) != 0) {
      result = std___1___next_prime(result);
      v7 = GameData_21f61a0;
    }
    if (result > v7) {
      goto LABEL_34;
    }
    if (result < v7) {
      primeEm = vcvtps_u64_f32((float)(unsigned __int64)GameData_21f61b0 /
                               *(float*)&GameData_21f61b8);
      if (v7 < 3 || (v7 & (v7 - 1)) != 0) {
        v24 = result;
        primeEm = std___1___next_prime(primeEm);
        result = v24;
      }
      else {
        v23 = 1LL << -(char)__clz(primeEm - 1);
        if (primeEm >= 2) {
          primeEm = v23;
        }
      }
      if (result <= primeEm) {
        result = primeEm;
      }
      if (result < v7) {
      LABEL_34:
        result = GameRoutine_9af520(result);
      }
    }
    v7 = GameData_21f61a0;
    if ((v7 & (v7 - 1)) != 0) {
      if (GameData_21f61a0 <= v4) {
        v3 = v4 % GameData_21f61a0;
      }
      else {
        v3 = v4;
      }
    }
    else {
      v3 = (GameData_21f61a0 - 1) & v4;
    }
  }
  v25 = GameData_21f6198;
  v26 = *(__int64**)(GameData_21f6198 + 8 * v3);
  if (v26 != nullptr) {
    *(_QWORD*)v15 = *v26;
    *v26 = v15;
  }
  else {
    v27 = GameData_21f61a8;
    GameData_21f61a8 = v15;
    *(_QWORD*)v15 = v27;
    *(_QWORD*)(v25 + 8 * v3) = &GameData_21f61a8;
    if (*(_QWORD*)v15 != 0) {
      v28 = *(_QWORD*)(*(_QWORD*)v15 + 8LL);
      if ((v7 & (v7 - 1)) != 0) {
        if (v28 >= v7) {
          v28 %= v7;
        }
      }
      else {
        v28 &= v7 - 1;
      }
      *(_QWORD*)(GameData_21f6198 + 8 * v28) = v15;
    }
  }
  ++GameData_21f61b0;
  return result;
}

__int64* AchieveMap_9b19a0(__int64* result, unsigned __int8 a2,
                           unsigned __int8 a3)
{
  unsigned __int64 v3;
  int v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  __int64* v14;
  unsigned __int64 v15;
  __int64 v17;
  unsigned __int64 v18;
  __int64*** v19;
  __int64** v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  char v26;

  v13 = a3 >= 0xDu || a2 >= 0xDu;
  v14 = &GameData_21f61c0[65 * a3 + 26 + 5 * a2];
  if (v13) {
    v14 = &GameData_21c6980;
  }
  v15 = *v14;
  if (v15 == 0) {
    return result;
  }
  if (GameData_21f6270 == 0 || GameData_21f6280 == 0) {
    return result;
  }
  v17 = GameData_21f6270 - 1;
  if ((GameData_21f6270 & (GameData_21f6270 - 1)) != 0) {
    v18 = v15;
    if (v15 >= GameData_21f6270) {
      v18 = v15 % GameData_21f6270;
    }
  }
  else {
    v18 = v17 & v15;
  }
  v19 = *(__int64****)(GameData_21f6268 + 8 * v18);
  if (v19 == nullptr) {
    return result;
  }
  v20 = *v19;
  if (v20 == nullptr) {
    return result;
  }
  v21 = *result;
  if ((GameData_21f6270 & v17) == 0) {
    while (1) {
      v23 = v20[1];
      if ((__int64*)v15 == v23) {
        if (v20[2] == (__int64*)v15) {
          goto LABEL_32;
        }
      }
      else if (((unsigned __int64)v23 & v17) != v18) {
        return result;
      }
      v20 = (__int64**)*v20;
      if (v20 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v22 = (unsigned __int64)v20[1];
    if (v15 == v22) {
      break;
    }
    if (v22 >= GameData_21f6270) {
      v22 %= (unsigned __int64)GameData_21f6270;
    }
    if (v22 != v18) {
      return result;
    }
  LABEL_21:
    v20 = (__int64**)*v20;
    if (v20 == nullptr) {
      return result;
    }
  }
  if (v20[2] != (__int64*)v15) {
    goto LABEL_21;
  }
LABEL_32:
  v24 = *((unsigned int*)v20 + 6);
  if ((v24 & 0x80000000) == 0 && GameData_21f6250 != 0) {
    v25 = GameData_21f6250 + (v24 << 8);
    v26 = 1;
    if (v21 != 0) {
      v3 = *(unsigned __int8*)(v21 + 48);
      if (*(_BYTE*)(v21 + 48) != 0) {
        v4 = 1 << v3;
        v5 = v25 + 40LL * (unsigned int)(v3 >> 5);
        if (game_GameModeData_instance_ != 0) {
          v6 = *(_QWORD**)(game_GameModeData_instance_ + 48);
          v7 = v25;
          v8 = game_GameVariableTable_Find(v6, (unsigned __int64*)(v5 + 40));
          if (v8 != 0) {
            v9 = *(_DWORD*)(v8 + 32);
          }
          else {
            v9 = 0;
          }
          if ((v9 & v4) == 0) {
            v11 = game_GameVariableTable_Find(v6, (unsigned __int64*)(v5 + 40));
            if (v11 != 0) {
              v10 = *(_DWORD*)(v11 + 32);
            }
            else {
              v10 = 0;
            }
            goto LABEL_48;
          }
          v26 = 0;
        }
        else {
          v7 = v25;
          v10 = 0;
        LABEL_48:
          game_VariableManager_SetFlag(v5 + 40, v10 | v4);
          v12 = *(_QWORD*)(v7 + 240);
          if (v12 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 48LL))(v12);
          }
          v26 = 1;
        }
      }
    }
    return (__int64*)(v26 & 1);
  }
  return result;
}

__int64 game_anonymous_AchieveMap_Build_closure_Invoke_9b2a00(__int64 a1)
{
  _QWORD* v1;
  unsigned __int64** v2;
  __int64 v3;
  unsigned int v4;
  __int64* v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64*** v21;
  __int64** v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v28[2];

  v1 = *(_QWORD**)(a1 + 8);
  v28[1] = (unsigned __int64)&GameData_1a9cb6f;
  v28[0] = game_HashString(&GameData_1a9cb6f);
  v2 = (unsigned __int64**)GameData_21c9868;
  v3 = GameData_21c9870;
  if (GameData_21c9868 == GameData_21c9870) {
    v4 = 0;
  }
  else {
    v4 = 0;
    v5 = GameData_212c650[0];
    do {
      if (*v2 == nullptr) {
        goto LABEL_28;
      }
      v6 = v1[872];
      if (v6 == 0 || v1[874] == 0) {
        goto LABEL_28;
      }
      v8 = **v2;
      v9 = v6 - 1;
      if ((v6 & (v6 - 1)) != 0) {
        v10 = **v2;
        if (v8 >= v6) {
          v10 = v8 % v6;
        }
      }
      else {
        v10 = v9 & v8;
      }
      v11 = *(_QWORD**)(v1[871] + 8 * v10);
      if (v11 != nullptr && (v12 = (_QWORD*)*v11) != nullptr) {
        if ((v6 & v9) == 0) {
          while (1) {
            v15 = v12[1];
            if (v8 == v15) {
              if (v12[2] == v8) {
                goto LABEL_59;
              }
            }
            else if ((v15 & v9) != v10) {
              goto LABEL_28;
            }
            v12 = (_QWORD*)*v12;
            v14 = v5;
            if (v12 == nullptr) {
              goto LABEL_31;
            }
          }
        }
        do {
          v13 = v12[1];
          if (v8 == v13) {
            if (v12[2] == v8) {
            LABEL_59:
              v16 = v12[3];
              if (v16 == 0) {
                goto LABEL_3;
              }
              goto LABEL_32;
            }
          }
          else {
            if (v13 >= v6) {
              v13 %= v6;
            }
            if (v13 != v10) {
              goto LABEL_28;
            }
          }
          v12 = (_QWORD*)*v12;
        } while (v12 != nullptr);
        v14 = v5;
      LABEL_31:
        v16 = *v14;
        if (*v14 == 0) {
          goto LABEL_3;
        }
      }
      else {
      LABEL_28:
        v16 = *v5;
        if (*v5 == 0) {
          goto LABEL_3;
        }
      }
    LABEL_32:
      v17 = v1[22];
      if (v17 != 0 && v1[24] != 0) {
        v19 = v17 - 1;
        if ((v17 & (v17 - 1)) != 0) {
          v20 = v16;
          if (v16 >= v17) {
            v20 = v16 % v17;
          }
        }
        else {
          v20 = v19 & v16;
        }
        v21 = *(__int64****)(v1[21] + 8 * v20);
        if (v21 != nullptr) {
          v22 = *v21;
          if (v22 != nullptr) {
            if ((v17 & v19) == 0) {
              while (1) {
                v24 = v22[1];
                if ((__int64*)v16 == v24) {
                  if (v22[2] == (__int64*)v16) {
                    goto LABEL_56;
                  }
                }
                else if (((unsigned __int64)v24 & v19) != v20) {
                  goto LABEL_3;
                }
                v22 = (__int64**)*v22;
                if (v22 == nullptr) {
                  goto LABEL_3;
                }
              }
            }
            do {
              v23 = (unsigned __int64)v22[1];
              if (v16 == v23) {
                if (v22[2] == (__int64*)v16) {
                LABEL_56:
                  v25 = *((unsigned int*)v22 + 6);
                  if ((v25 & 0x80000000) == 0) {
                    v26 = v1[18];
                    if (v26 != 0) {
                      v4 += GameRoutine_682fb0(v26 + (v25 << 8));
                    }
                  }
                  break;
                }
              }
              else {
                if (v23 >= v17) {
                  v23 %= v17;
                }
                if (v23 != v20) {
                  break;
                }
              }
              v22 = (__int64**)*v22;
            } while (v22 != nullptr);
          }
        }
      }
    LABEL_3:
      ++v2;
    } while (v2 != (unsigned __int64**)v3);
  }
  return GameRoutine_9b11a0(v1, v28, v4);
}

__int64 game_anonymous_AchieveMap_Build_closure_Invoke_9b2db0(__int64 a1,
                                                              char* a2)
{
  char v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[4];
  _QWORD* v7;
  char v8;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v7 = v6;
  v8 = v2;
  v6[0] = GameData_1fb3608;
  v6[1] = v3;
  v6[2] = &v8;
  GameRoutine_70cdd0(v6);
  result = (__int64)v7;
  if (v7 == v6) {
    v5 = 32;
  }
  else {
    if (v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7 + v5))((__int64)v7);
}

__int64

game_anonymous_AchieveMap_Build_closure_Invoke_9b2f20(__int64 result,
                                                      unsigned __int8* a2)
{
  _QWORD* v2;
  unsigned int v3;
  __int64 v4;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;

  v2 = *(_QWORD**)(result + 8);
  v3 = **(unsigned __int8**)(result + 16);
  v4 = (__int64)&v2[65 * **(unsigned __int8**)(result + 16) + 26 + 5 * *a2];
  if (v3 > 0xC || ((1 << v3) & 0x1AA0) == 0) {
    *(_QWORD*)v4 = 0;
    *(_QWORD*)(v4 + 8) = &GameData_1a9f09e;
    if ((*(_BYTE*)(v4 + 16) & 1) != 0) {
      **(_BYTE**)(v4 + 32) = 0;
      *(_QWORD*)(v4 + 24) = 0;
    }
    else {
      *(_WORD*)(v4 + 16) = 0;
    }
  }
  else {
    v6 = result;
    v7 = game_util_Format_alt1(
        GameData_1a857f2,
        *(&GameData_1f92dd0 + **(unsigned __int8**)(result + 16)),
        *(&GameData_1f92d50 + *a2));
    GameRoutine_60a020_alt1(v4 + 16, v7);
    if ((*(_BYTE*)(v4 + 16) & 1) != 0) {
      v8 = *(_QWORD*)(v4 + 32);
    }
    else {
      v8 = v4 + 17;
    }
    *(_QWORD*)v4 = game_HashString_alt2(v8);
    *(_QWORD*)(v4 + 8) = v8;
    v9 = **(unsigned __int8**)(v6 + 16);
    v11_.v11[0] = GameData_1fb3678;
    v11_.v11[1] = v2;
    v11_.v12 = v11_.v11;
    v11_.v11[2] = v9;
    GameHr_9b2000(v2, (__int64*)v4);
    result = (__int64)v11_.v12;
    if (v11_.v12 == v11_.v11) {
      v10 = 32;
    }
    else {
      if (v11_.v12 == nullptr) {
        return result;
      }
      v10 = 40;
    }
    return (*(__int64 (**)(__int64))(*v11_.v12 + v10))((__int64)v11_.v12);
  }
  return result;
}

__int64 game_anonymous_AchieveMap_GetMasteryCount(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  char v3;
  __int64 v4;
  int v6;
  __int64* v7;
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
  __int64 v18;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  unsigned int v21;
  char v22;

  v1 = *(_QWORD**)(a1 + 8);
  v2 = *(unsigned __int8*)(a1 + 16);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f7df0,
                            memory_order_acquire) &
       1) == 0) {
    v18 = a1;
    v6 = __cxa_guard_acquire(&GameData_21f7df0);
    a1 = v18;
    if (v6 != 0) {
      v7 = GameData_212c650[0];
      GameData_21f7d78 = (__int64)&GameData_1ae5a5a;
      v8 = GameData_212c650[0][1];
      GameData_21f7d20[0] = *GameData_212c650[0];
      GameData_21f7d28 = v8;
      GameData_21f7d30 = GameData_21f7d20[0];
      GameData_21f7d38 = v8;
      GameData_21f7d40 = GameData_21f7d20[0];
      GameData_21f7d48 = v8;
      GameData_21f7d50 = GameData_21f7d20[0];
      GameData_21f7d58 = v8;
      GameData_21f7d60 = GameData_21f7d20[0];
      GameData_21f7d68 = v8;
      v9 = game_HashString_alt2((__int64)&GameData_1ae5a5a);
      v10 = *v7;
      v11 = v7[1];
      GameData_21f7d70 = v9;
      GameData_21f7d98 = (__int64)&GameData_1ada637;
      GameData_21f7d80 = v10;
      GameData_21f7d88 = v11;
      v12 = game_HashString_alt2((__int64)&GameData_1ada637);
      v13 = *v7;
      v14 = v7[1];
      GameData_21f7d90 = v12;
      GameData_21f7db8 = (__int64)&GameData_1ae9964;
      GameData_21f7da0 = v13;
      GameData_21f7da8 = v14;
      v15 = game_HashString_alt2((__int64)&GameData_1ae9964);
      v16 = *v7;
      v17 = v7[1];
      GameData_21f7db0 = v15;
      GameData_21f7dd8 = (__int64)&GameData_1af90aa;
      GameData_21f7dc0 = v16;
      GameData_21f7dc8 = v17;
      GameData_21f7dd0 = game_HashString_alt2((__int64)&GameData_1af90aa);
      GameData_21f7de8 = (__int64)&GameData_1aa48c4;
      GameData_21f7de0 = game_HashString_alt2((__int64)&GameData_1aa48c4);
      __cxa_guard_release(&GameData_21f7df0);
      a1 = v18;
    }
  }
  v3 = *(_BYTE*)(a1 + 16);
  v21 = 0;
  v19_.v20 = v19_.v19;
  v22 = v3;
  v19_.v19[0] = GameData_1fb36e8;
  v19_.v19[1] = v1;
  v19_.v19[2] = &v22;
  v19_.v19[3] = &v21;
  GameRoutine_70cdd0_alt1((__int64)v19_.v19);
  if (v19_.v20 == v19_.v19) {
    v4 = 32;
    goto LABEL_6;
  }
  if (v19_.v20 != nullptr) {
    v4 = 40;
  LABEL_6:
    (*(void (**)(__int64))(*v19_.v20 + v4))((__int64)v19_.v20);
  }
  return GameRoutine_9b11a0(v1, (unsigned __int64*)&GameData_21f7d20[2 * v2],
                            v21);
}

__int64

game_anonymous_AchieveMap_GetMasteryCount_closure_Invoke(__int64 result,
                                                         unsigned __int8* a2)
{
  _QWORD* v2;
  bool v3;
  __int64* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64*** v10;
  __int64** v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *(_QWORD**)(result + 8);
  v3 = **(unsigned __int8**)(result + 16) >= 0xDuLL || *a2 >= 0xDuLL;
  v4 = &v2[65 * **(unsigned __int8**)(result + 16) + 26 + 5 * *a2];
  if (v3) {
    v4 = &GameData_21c6980;
  }
  v5 = *v4;
  if (v5 != 0) {
    v6 = v2[22];
    if (v6 != 0 && v2[24] != 0) {
      v8 = v6 - 1;
      if ((v6 & (v6 - 1)) != 0) {
        v9 = v5;
        if (v5 >= v6) {
          v9 = v5 % v6;
        }
      }
      else {
        v9 = v8 & v5;
      }
      v10 = *(__int64****)(v2[21] + 8 * v9);
      if (v10 != nullptr) {
        v11 = *v10;
        if (v11 != nullptr) {
          if ((v6 & v8) == 0) {
            while (1) {
              v13 = v11[1];
              if ((__int64*)v5 == v13) {
                if (v11[2] == (__int64*)v5) {
                  goto LABEL_32;
                }
              }
              else if (((unsigned __int64)v13 & v8) != v9) {
                return result;
              }
              v11 = (__int64**)*v11;
              if (v11 == nullptr) {
                return result;
              }
            }
          }
          do {
            v12 = (unsigned __int64)v11[1];
            if (v5 == v12) {
              if (v11[2] == (__int64*)v5) {
              LABEL_32:
                v14 = *((unsigned int*)v11 + 6);
                if ((v14 & 0x80000000) == 0) {
                  v15 = v2[18];
                  if (v15 != 0) {
                    v16 = result;
                    result = GameRoutine_682fb0(v15 + (v14 << 8));
                    **(_DWORD**)(v16 + 24) += result;
                  }
                }
                return result;
              }
            }
            else {
              if (v12 >= v6) {
                v12 %= v6;
              }
              if (v12 != v9) {
                return result;
              }
            }
            v11 = (__int64**)*v11;
          } while (v11 != nullptr);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
