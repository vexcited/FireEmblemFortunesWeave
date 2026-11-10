#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_134b820(_QWORD* __return_ptr, _QWORD);
__int64 GameRoutine_120dd60(_QWORD);
__int64 GameRoutine_134c680(void);
__int64 GameRoutine_14c46a0(_QWORD, _QWORD);
__int64 GameRoutine_14c6620(_QWORD);
__int64 GameRoutine_1531110(__int64, __int64, long double);
__int64 GameRoutine_1531270(__int64 result, long double);
__int64 GameRoutine_153a260(__int64, __int64);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_718130(_QWORD, _QWORD);
__int64 GameRoutine_995200(_QWORD);
__int64 Impl_13261c0(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a0d058;
extern _UNKNOWN GameData_1ab570b;
extern __int64 GameData_212d748[2];
extern __int64 GameData_212d750;
extern __int64 GameData_21316c8;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21f1618;
extern __int64 GameData_21f1620;
extern __int64 GameData_21f1648;
extern __int64 GameData_22506e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64* GameData_212c790;
extern __int64* GameData_212d700[2];
extern __int64* GameData_212d728[2];
__int64 ProcGmapMove_1549420(long double a1);
__int64 ProcGmapMove_1549800(__int64 result);
__int64 ProcGmapMove_1549820(__int64 result);
__int64 ProcGmapMove_1549a40();
__int64 ProcGmapMove_1549ac0(__int64 result);
__int64 ProcGmapMove_1549c60(__int64 result);
__int64 ProcGmapMove_1549e60();
__int64 game_gmap_ProcGmapMove_CheckContinueMove_closure_Invoke(__int64 a1,
                                                                long double a2);

__int64 ProcGmapMove_1549420(long double a1)
{
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64**)(v1 + 8);
  if (v2 < 0) {
    while (1) {
      v5 = *v3;
      if (*(_QWORD*)(*v3 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
        break;
      }
      ++v3;
    }
  }
  else {
    v6 = *v3;
    v4 = v3 + 1;
    v5 = v6;
    if (*(_DWORD*)(v6 + 84) != v2) {
      do {
        v7 = *v4++;
        v5 = v7;
      } while (*(_DWORD*)(v7 + 84) != v2);
    }
  }
  v8 = *(_QWORD*)(v5 + 376);
  if (v8 != 0) {
    *(_DWORD*)(*(_QWORD*)(v8 + 304) + 12LL) = 1065353216;
  }
  return GameRoutine_1531270(*(_QWORD*)(GameData_21f1648 + 8), a1);
}

__int64 ProcGmapMove_1549800(__int64 result)
{
  if (GameData_22506e0 != 0) {
    return GameRoutine_14c6620(result);
  }
  return result;
}

__int64 ProcGmapMove_1549820(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  _QWORD* i;
  void* v17;
  __int64* v18;
  __int64 v19;
  _QWORD v20[2];

  v1 = result;
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    v20[1] = &GameData_1ab570b;
    result = game_HashString(&GameData_1ab570b);
    v20[0] = result;
    if (game_GameModeData_instance_ == 0 ||
        (result = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v20)) == 0 ||
        *(_DWORD*)(result + 32) == 0) {
      v2 = *(_QWORD*)(GameData_21c96e8 + 8);
      v3 = *(_DWORD*)(v2 + 56);
      v4 = *(__int64***)(v2 + 8);
      v5 = *(__int64***)(v2 + 16);
      if (v3 < 0) {
        for (; v4 != v5; ++v4) {
          v6 = *v4;
          if ((*v4)[12] == 0 && v6[69] == 0) {
            goto LABEL_16;
          }
        }
      }
      else if (v4 != v5) {
        while (1) {
          v7 = *v4++;
          v6 = v7;
          if (*((_DWORD*)v7 + 21) == v3) {
            break;
          }
          if (v4 == v5) {
            goto LABEL_12;
          }
        }
      LABEL_16:
        v8 = *v6;
      LABEL_17:
        result = Impl_13261c0(v8);
        if ((unsigned __int8)result != 4) {
          return result;
        }
        v9 = *(_QWORD*)(GameData_21c96e8 + 8);
        v10 = *(_DWORD*)(v9 + 56);
        v11 = *(__int64**)(v9 + 8);
        v12 = *(__int64**)(v9 + 16);
        if (v10 < 0) {
          if (v11 != v12) {
            for (i = v11 + 1;; ++i) {
              v13 = (__int64*)*(i - 1);
              if (v13[12] == 0 && v13[69] == 0) {
                break;
              }
            }
          LABEL_29:
            v17 = (void*)v13[1];
            if (v17 == nullptr) {
              return result;
            }
            if (v10 < 0) {
              if (v11 != v12) {
                while (1) {
                  v18 = (__int64*)*v11;
                  if (*(_QWORD*)(*v11 + 96) == 0 && v18[69] == 0) {
                    break;
                  }
                  if (++v11 == v12) {
                    goto LABEL_36;
                  }
                }
              LABEL_43:
                result = *v18;
                if (v17 == (void*)*v18) {
                  return result;
                }
                return GameRoutine_14c46a0(v1, 0);
              }
            }
            else {
              while (v11 != v12) {
                v19 = *v11++;
                v18 = (__int64*)v19;
                if (*(_DWORD*)(v19 + 84) == v10) {
                  goto LABEL_43;
                }
              }
            }
          LABEL_36:
            result = game_gmap_SpotMgr_GetCurrentSpot(result);
            if (v17 == (void*)result) {
              return result;
            }
            return GameRoutine_14c46a0(v1, 0);
          }
        }
        else if (v11 != v12) {
          v13 = (__int64*)*v11;
          if (*(_DWORD*)(*v11 + 84) != v10) {
            v14 = v11 + 1;
            do {
              v15 = *v14++;
              v13 = (__int64*)v15;
            } while (*(_DWORD*)(v15 + 84) != v10);
          }
          goto LABEL_29;
        }
        v17 = &GameData_1a0d058;
        if (&GameData_1a0d058 == nullptr) {
          return result;
        }
        goto LABEL_36;
      }
    LABEL_12:
      v8 = game_gmap_SpotMgr_GetCurrentSpot(result);
      goto LABEL_17;
    }
  }
  return result;
}

__int64 ProcGmapMove_1549a40()
{
  __int64 v0;
  __int64 result;
  unsigned int v2;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v0 + 16), 0);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  result = game_gameui_Footer_instance_;
  v2 = *(_DWORD*)(v0 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v0 + 5856) = v2;
  if (result != 0) {
    result = LayoutAccessor_1567000(result, 0);
    v2 = *(_DWORD*)(v0 + 5856);
  }
  *(_DWORD*)(v0 + 5856) = v2 & 0xFFFDFFFF;
  return result;
}

__int64 ProcGmapMove_1549ac0(__int64 result)
{
  __int64 v1;
  _BYTE* v2;

  v1 = *(_QWORD*)(*(_QWORD*)(GameData_21f1620 + 8) + 16LL);
  if (v1 != 0) {
    v2 = *(_BYTE**)(v1 + 72);
    if (v2 != nullptr && *v2 != 0) {
      return GameRoutine_153a260(*GameData_212d700[0], result);
    }
  }
  return result;
}

__int64 ProcGmapMove_1549c60(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;

  v1 = result;
  v2 = GameData_212d748[0];
  if (game_GameModeData_instance_ == 0 ||
      (v3 = *(_QWORD*)(game_GameModeData_instance_ + 24)) == 0 ||
      *(_BYTE*)(v3 + 152) != 4 ||
      (v4 = *(_QWORD*)GameData_212d748[0],
       v5 = *(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL),
       *(_QWORD*)(v3 + 168) != *(_QWORD*)(*(_QWORD*)v5 + 120LL))) {
    result = ProcGmapMove_1549e60();
    if ((result & 1) != 0) {
      v6 = 16;
    }
    else {
      v7 = *(_QWORD*)(*GameData_212d728[0] + 8);
      LayoutAccessor_155e830(*(_QWORD*)(v7 + 16), 1);
      result = *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
      if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
        result = GameRoutine_17b8e80(result, 1);
      }
      *(_DWORD*)(v7 + 5856) |= 0x10000u;
      v8 = *(_QWORD*)(*(_QWORD*)v2 + 8LL);
      if (*(_QWORD*)(v8 + 16) != 0) {
        v9 = *(_DWORD*)(v8 + 32);
        *(_QWORD*)v8 = 0;
        *(_QWORD*)(v8 + 8) = 0;
        *(_QWORD*)(v8 + 16) = 0;
        *(_BYTE*)(v8 + 24) = 0;
        *(_DWORD*)(v8 + 32) = v9 + 1;
      }
      v6 = 7;
    }
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = v6;
    *(_DWORD*)(v1 + 152) = 4;
    return result;
  }
  v10 = *(_QWORD*)GameData_212d750;
  *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 18;
  *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 16;
  *(_DWORD*)(result + 152) = 2;
  if (*(_BYTE*)(*(_QWORD*)v5 + 113LL) == 1) {
    v11 = *(_QWORD*)(*GameData_212c790 + 8);
    v12 = *(_DWORD*)(v11 + 56);
    v13 = *(__int64**)(v11 + 8);
    v14 = *(__int64**)(v11 + 16);
    if (v12 < 0) {
      for (; v13 != v14; ++v13) {
        v15 = *v13;
        if (*(_QWORD*)(*v13 + 96) == 0 && *(_QWORD*)(v15 + 552) == 0) {
          goto LABEL_22;
        }
      }
    }
    else {
      while (v13 != v14) {
        v16 = *v13++;
        v15 = v16;
        if (*(_DWORD*)(v16 + 84) == v12) {
          goto LABEL_22;
        }
      }
    }
    v15 = 0;
  LABEL_22:
    if (*(_BYTE*)(v15 + 512) != 0) {
      *(_BYTE*)(v15 + 512) = 0;
      if (v10 != 0) {
        result = GameRoutine_995200(v15 + 112);
        v4 = *(_QWORD*)v2;
      }
    }
  }
  v17 = *(_QWORD*)(v4 + 8);
  if (*(_QWORD*)(v17 + 16) != 0) {
    v18 = *(_DWORD*)(v17 + 32);
    *(_QWORD*)v17 = 0;
    *(_QWORD*)(v17 + 8) = 0;
    *(_QWORD*)(v17 + 16) = 0;
    *(_BYTE*)(v17 + 24) = 0;
    *(_DWORD*)(v17 + 32) = v18 + 1;
  }
  return result;
}

__int64 ProcGmapMove_1549e60()
{
  __int64 result;
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;

  result = GameRoutine_134c680();
  if (result != 0) {
    if ((GameRoutine_718130(result, 0) & 1) != 0) {
      v1 = GameRoutine_134c680();
      if (*(_BYTE*)(v1 + 113) == 1) {
        GameRoutine_134b820(&v7, v1);
        v2 = v7;
        v3 = v8;
        if (v7 != v8) {
          do {
            v4 = *v2;
            if (*(_BYTE*)(*v2 + 512) != 0) {
              v5 = GameData_21f1618;
              *(_BYTE*)(v4 + 512) = 0;
              if (v5 != 0) {
                GameRoutine_995200(v4 + 112);
              }
            }
            ++v2;
          } while (v2 != v3);
          v2 = v7;
        }
        if (v2 != nullptr) {
          v8 = v2;
          v6 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v2);
        }
      }
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 5;
      return 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 game_gmap_ProcGmapMove_CheckContinueMove_closure_Invoke(__int64 a1,
                                                                long double a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = GameData_212c790;
  v4 = *(_QWORD*)(*GameData_212c790 + 8);
  v5 = *(_DWORD*)(v4 + 56);
  v6 = *(__int64**)(v4 + 8);
  v7 = *(__int64**)(v4 + 16);
  if ((v5 & 0x80000000) == 0) {
    while (v6 != v7) {
      v9 = *v6++;
      v8 = v9;
      if (*(_DWORD*)(v9 + 84) == v5) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v8 = 0;
    goto LABEL_8;
  }
  if (v6 == v7) {
    goto LABEL_7;
  }
  while (1) {
    v8 = *v6;
    if (*(_QWORD*)(*v6 + 96) == 0 && *(_QWORD*)(v8 + 552) == 0) {
      break;
    }
    if (++v6 == v7) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v10 = GameRoutine_1531110(*(_QWORD*)(GameData_21f1648 + 8), v8, a2);
  *(_BYTE*)(*(_QWORD*)(*v3 + 8) + 60LL) = 1;
  GameRoutine_120dd60(v10);
  *(_DWORD*)(v2 + 152) = 1;
  return 2;
}

#pragma GCC visibility pop
