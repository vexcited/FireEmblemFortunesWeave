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
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__int64 Cursor_734a80(_QWORD, _QWORD);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1317f10(float32x4_t*, float32x4_t*);
__int64 GameRoutine_13407e0(__int64 result, long double, long double);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(_QWORD, _QWORD);
extern _UNKNOWN GameData_216de68;
extern __int64* GameData_212d460[6];
extern __int64* GameData_212d708;
extern __int64 GameData_21f1628;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
void game_gmap_133f280(__int64);
__int64 ProcGmapMove_1549b00(__int64 result);
__int64 ProcGmapMove_1549f60(__int64 a1, __int64 a2);
__int64 game_gmap_ProcGmapMove_CheckContinueMove_closure0_Invoke(__int64 a1);
__int64 ProcGmapMove_154ac20(__int64 a1, __n128 a2, long double a3);
void ProcGmapMove_154b040();
__int64 GameRoutine_17bcf90(_QWORD);
__int64 SpotMgr_1333f20(_QWORD);
__int64 SpotMgr_1334560(_QWORD);
__int64 TroopMgr_134d2e0(_QWORD);
extern __int64 GameData_21c9700;
extern __int64 GameData_21f1650;
extern __int64 GameData_21f1658;
__int64 ProcGmapMove_1547480(__int64 a1);
__int64 ProcGmapMove_1549620();

__int64 ProcGmapMove_1547480(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  int v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;

  *(_DWORD*)(a1 + 216) = 0;
  v1 = *(_QWORD*)(GameData_21f1658 + 16);
  if (*(_BYTE*)(v1 + 169) == 1) {
    v2 = **(_QWORD**)(*(_QWORD*)(GameData_21f1650 + 8) + 8LL);
    (*(void (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
  }
  *(_BYTE*)(v1 + 169) = 0;
  v3 = GameData_212c790;
  v4 = *GameData_212c790;
  *(_BYTE*)(*(_QWORD*)(*GameData_212c790 + 8) + 60LL) = 1;
  v5 = TroopMgr_134d2e0(*(_QWORD*)(v4 + 8));
  v6 = GameData_212d728[0];
  v7 = *GameData_212d728[0];
  *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5835LL) = 1;
  *(_BYTE*)(*(_QWORD*)(v7 + 8) + 5837LL) = 1;
  result = GameRoutine_17bcf90(v5);
  v9 = *v6;
  *(_DWORD*)(*(_QWORD*)(*v6 + 8) + 5856LL) |= 0x10u;
  *(_DWORD*)(*(_QWORD*)(v9 + 8) + 5856LL) &= ~0x10u;
  v10 = *(_QWORD*)(*v3 + 8);
  v11 = *(_DWORD*)(v10 + 56);
  v12 = *(__int64**)(v10 + 8);
  v13 = *(__int64**)(v10 + 16);
  if ((v11 & 0x80000000) == 0) {
    while (v12 != v13) {
      v15 = (__int64*)*v12++;
      v14 = v15;
      if (*((_DWORD*)v15 + 21) == v11) {
        goto LABEL_10;
      }
    }
  LABEL_9:
    v14 = nullptr;
    goto LABEL_10;
  }
  if (v12 == v13) {
    goto LABEL_9;
  }
  while (1) {
    v14 = (__int64*)*v12;
    if (*(_QWORD*)(*v12 + 96) == 0 && v14[69] == 0) {
      break;
    }
    if (++v12 == v13) {
      goto LABEL_9;
    }
  }
LABEL_10:
  if ((v14[12] | v14[69]) == 0) {
    v16 = *((_DWORD*)v14 + 135);
    v17 = __OFSUB__(v16, 1);
    v18 = (unsigned int)(v16 - 1);
    if (((v18 & 0x80000000) != 0LL) == v17) {
      v19 = v14[3];
      v20 = v14[4] - v19;
      v21 = (__int64*)(v19 + 8LL * (unsigned int)v18);
      if (v18 < v20 >> 3) {
        v14 = v21;
      }
    }
    v22 = *v14;
    result = *(_QWORD*)(*v14 + 280);
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
      if ((unsigned __int8)result != 1 ||
          ((result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v22 + 280) + 112LL))(
                *(_QWORD*)(v22 + 280))) &
           1) == 0) {
        v23 = *(_QWORD*)(v22 + 280);
        if (v23 != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 64LL))(v23);
          if ((unsigned __int8)result == 5) {
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 48LL))(v23);
            if ((result & 1) != 0) {
              result = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 72LL))(v23);
              *(_BYTE*)(*(_QWORD*)(*v6 + 8) + 5835LL) = 1;
            }
          }
        }
      }
    }
  }
  return result;
}

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

__int64 ProcGmapMove_1549620()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64* v16;
  __int64 v17;
  _QWORD* i;
  __int64* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* j;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 result;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  v3 = *(__int64**)(v0 + 16);
  if ((v1 & 0x80000000) == 0) {
    if (v2 != v3) {
      v4 = v2;
      do {
        v6 = *v4++;
        v5 = v6;
        if (*(_DWORD*)(v6 + 84) == v1) {
          goto LABEL_14;
        }
      } while (v4 != v3);
    }
  LABEL_13:
    v5 = 0;
    goto LABEL_14;
  }
  if (v2 == v3) {
    goto LABEL_13;
  }
  v7 = v2;
  while (1) {
    v5 = *v7;
    if (*(_QWORD*)(*v7 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
      break;
    }
    if (++v7 == v3) {
      goto LABEL_13;
    }
  }
LABEL_14:
  v8 = *(_DWORD*)(v5 + 540);
  v9 = __OFSUB__(v8, 1);
  v10 = (unsigned int)(v8 - 1);
  if (((v10 & 0x80000000) != 0LL) == v9) {
    v11 = *(_QWORD*)(v5 + 24);
    v12 = *(_QWORD*)(v5 + 32) - v11;
    v13 = v11 + 8LL * (unsigned int)v10;
    if (v10 < v12 >> 3) {
      v5 = v13;
    }
  }
  if (game_GameModeData_instance_ == 0 ||
      (v14 = *(_QWORD*)(game_GameModeData_instance_ + 24)) == 0 ||
      *(_BYTE*)(v14 + 152) != 4 ||
      *(_QWORD*)(v14 + 168) != *(_QWORD*)(*(_QWORD*)v5 + 120LL)) {
    if (v1 < 0) {
      if (v2 != v3) {
        for (i = v2 + 1;; ++i) {
          v15 = (_QWORD*)*(i - 1);
          if (v15[12] == 0 && v15[69] == 0) {
            break;
          }
        }
      LABEL_32:
        if (v15[4] == v15[3]) {
          if (v1 < 0) {
            for (j = v2 + 1;; ++j) {
              v20 = (_QWORD*)*(j - 1);
              if (v20[12] == 0 && v20[69] == 0) {
                break;
              }
            }
          }
          else {
            v21 = *v2;
            v19 = v2 + 1;
            v20 = (_QWORD*)v21;
            if (*(_DWORD*)(v21 + 84) != v1) {
              do {
                v22 = *v19++;
                v20 = (_QWORD*)v22;
              } while (*(_DWORD*)(v22 + 84) != v1);
            }
          }
          v24 = (__int64*)v20[3];
          v25 = (__int64*)v20[4];
          while (v24 != v25) {
            v26 = *v24++;
            SpotMgr_1333f20(v26);
          }
        }
      }
    }
    else if (v2 != v3) {
      v15 = (_QWORD*)*v2;
      if (*(_DWORD*)(*v2 + 84) != v1) {
        v16 = v2 + 1;
        do {
          v17 = *v16++;
          v15 = (_QWORD*)v17;
        } while (*(_DWORD*)(v17 + 84) != v1);
      }
      goto LABEL_32;
    }
    return SpotMgr_1334560(*(_QWORD*)(GameData_21c9700 + 8));
  }
  return result;
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

__int64 ProcGmapMove_1549b00(__int64 result)
{
  __int64 v1;
  _BYTE* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  char v9;

  v1 = *(_QWORD*)(*(_QWORD*)(GameData_21f1620 + 8) + 16LL);
  if (v1 != 0) {
    v2 = *(_BYTE**)(v1 + 72);
    if (v2 != nullptr && *v2 != 0 && *GameData_212d460[0] == 0) {
      v4 = result;
      v5 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v5, v2, 0);
      v7 = *(_QWORD*)(v4 + 40);
      if (v7 != 0) {
        *(_QWORD*)(v7 + 48) = v5;
        *(_QWORD*)(v5 + 56) = *(_QWORD*)(v4 + 40);
      }
      *(_QWORD*)(v4 + 40) = v5;
      *(_QWORD*)(v5 + 24) = "talk::Seq";
      *(_QWORD*)(v5 + 32) = v4;
      *(_DWORD*)(v5 + 140) = game_HashString32("talk::Seq", v6);
      *(_QWORD*)(v5 + 64) = 0;
      *(_QWORD*)(v5 + 72) = 24;
      *(_QWORD*)(v5 + 80) = 1;
      *(_QWORD*)(v5 + 8) = &GameData_216de68;
      *(_QWORD*)(v5 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5);
      if ((result & 1) != 0 && (*(_WORD*)(v5 + 136) & 0x100) == 0) {
        *(_WORD*)(v5 + 136) |= 0x100u;
      }
      v8 = *(_BYTE**)(v5 + 32);
      v9 = v8[138];
      if (v9 == 0) {
        result =
            (*(__int64 (**)(_QWORD))(*(_QWORD*)v8 + 64LL))(*(_QWORD*)(v5 + 32));
        v9 = v8[138];
      }
      v8[138] = v9 + 1;
      *(_WORD*)(v5 + 136) |= 2u;
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

__int64 ProcGmapMove_1549f60(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 result;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;

  v3 = *(_QWORD*)(a2 + 32);
  if (v3 != 0) {
    if (v3 == a2) {
      v6_.v7 = v6_.v6;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v3 + 24LL))(v3, v6_.v6);
    }
    else {
      v6_.v7 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    }
  }
  else {
    v6_.v7 = nullptr;
  }
  GameRoutine_654050(v6_.v6, (_QWORD*)(a1 + 1152));
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v5 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
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

__int64 game_gmap_ProcGmapMove_CheckContinueMove_closure0_Invoke(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float32x4_t* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;

  v1 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 3;
  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  if (v4 < 0) {
    while (1) {
      v6 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
        break;
      }
      ++v5;
    }
  }
  else {
    v8 = *v5;
    v7 = v5 + 1;
    v6 = v8;
    if (*(_DWORD*)(v8 + 84) != v4) {
      do {
        v9 = *v7++;
        v6 = v9;
      } while (*(_DWORD*)(v9 + 84) != v4);
    }
  }
  game_gmap_133f280(v6);
  v10 = *(_QWORD*)(*v2 + 8);
  v11 = *(_DWORD*)(v10 + 56);
  v12 = *(__int64**)(v10 + 8);
  if (v11 < 0) {
    while (1) {
      v14 = *v12;
      if (*(_QWORD*)(*v12 + 96) == 0 && *(_QWORD*)(v14 + 552) == 0) {
        break;
      }
      ++v12;
    }
  }
  else {
    v15 = *v12;
    v13 = v12 + 1;
    v14 = v15;
    if (*(_DWORD*)(v15 + 84) != v11) {
      do {
        v16 = *v13++;
        v14 = v16;
      } while (*(_DWORD*)(v16 + 84) != v11);
    }
  }
  v17 = *(float32x4_t**)(*(_QWORD*)(v14 + 32) - 8LL);
  if (v17 != nullptr) {
    GameRoutine_1317f10(*(float32x4_t**)(*GameData_212d708 + 16), v17 + 2);
  }
  *(_DWORD*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5856LL) |= 0x10u;
  *(_QWORD*)(v1 + 152) = 0;
  v18 = *(_QWORD**)(v1 + 192);
  *(_QWORD*)(v1 + 192) = 0;
  if (v18 == (_QWORD*)(v1 + 160)) {
    v19 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_22;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*v18 + v19))((__int64)v18);
LABEL_22:
  v20 = *(_QWORD*)(v1 + 8);
  if (v20 == 0) {
    return 3;
  }
  while (*(_BYTE*)v20 != 2) {
    if (*(_BYTE*)v20 == 0) {
      return 3;
    }
  LABEL_25:
    v20 += 64;
  }
  if (*(_DWORD*)(v20 + 32) != 4) {
    goto LABEL_25;
  }
  *(_QWORD*)(v1 + 16) = v20;
  *(_WORD*)(v1 + 136) &= ~0x80u;
  return 3;
}

__int64 ProcGmapMove_154ac20(__int64 a1, __n128 a2, long double a3)
{

#pragma clang fp contract(off)
  int v4;
  int v5;
  unsigned __int64 v6;
  __int128 v7;
  __int64 result;
  __int64 v9;
  int v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  __int64 v16;
  int v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  bool v23;
  int v24;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v5 = (v4 & 8) != 0 ? 2 : 3;
    if ((v5 & v4) == 0) {
      result = *(_QWORD*)(a1 + 224);
      if (result != 0) {
        goto LABEL_36;
      }
      goto LABEL_29;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v6 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v6 + 172) == *(float*)(v6 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160);
    }
    else {
      v7 = *(_OWORD*)(v6 + 208);
    }
    if (*((float*)&v7 + 3) == 0x1.0000000000000p+0f) {
      a2 = ((__n128 (*)(unsigned __int64, float)) *
            (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160,
                                                    *((float*)&v7 + 3));
      LANES128(a2).n128_u32[0] = LANES128(a2).n128_u32[3];
      result = *(_QWORD*)(a1 + 224);
      if (LANES128(a2).n128_f32[3] != 0x1.0000000000000p+0f) {
        if (result != 0) {
          goto LABEL_25;
        }
        goto LABEL_16;
      }
      if (result != 0) {
        goto LABEL_36;
      }
    LABEL_29:
      v16 = *(_QWORD*)(GameData_21c96e8 + 8);
      v17 = *(_DWORD*)(v16 + 56);
      v18 = *(__int64**)(v16 + 8);
      if (v17 < 0) {
        while (1) {
          result = *v18;
          if (*(_QWORD*)(*v18 + 96) == 0 && *(_QWORD*)(result + 552) == 0) {
            break;
          }
          ++v18;
        }
      }
      else {
        v20 = *v18;
        v19 = v18 + 1;
        result = v20;
        if (*(_DWORD*)(v20 + 84) != v17) {
          do {
            v21 = *v19++;
            result = v21;
          } while (*(_DWORD*)(v21 + 84) != v17);
        }
      }
    LABEL_36:
      result = GameRoutine_13407e0(result, *(long double*)&a2, a3);
      v15 = *(unsigned __int8**)(a1 + 16);
      if (v15 != nullptr) {
      LABEL_37:
        v22 = *v15;
        v23 = v22 > 0x10;
        v24 = (1 << v22) & 0x1CE00;
        if (!v23 && v24 != 0) {
          *(_WORD*)(a1 + 136) |= 0x80u;
        }
      }
    LABEL_42:
      *(_WORD*)(a1 + 136) |= 8u;
      return result;
    }
  }
  result = *(_QWORD*)(a1 + 224);
  if (result != 0) {
    goto LABEL_25;
  }
LABEL_16:
  v9 = *(_QWORD*)(GameData_21c96e8 + 8);
  v10 = *(_DWORD*)(v9 + 56);
  v11 = *(__int64**)(v9 + 8);
  if (v10 < 0) {
    while (1) {
      result = *v11;
      if (*(_QWORD*)(*v11 + 96) == 0 && *(_QWORD*)(result + 552) == 0) {
        break;
      }
      ++v11;
    }
  }
  else {
    v13 = *v11;
    v12 = v11 + 1;
    result = v13;
    if (*(_DWORD*)(v13 + 84) != v10) {
      do {
        v14 = *v12++;
        result = v14;
      } while (*(_DWORD*)(v14 + 84) != v10);
    }
  }
LABEL_25:
  if (*(float*)(result + 276) != *(float*)(result + 272)) {
    return result;
  }
  v15 = *(unsigned __int8**)(a1 + 16);
  if (v15 != nullptr) {
    goto LABEL_37;
  }
  goto LABEL_42;
}

void ProcGmapMove_154b040()
{
  int v0;
  int v1;
  unsigned __int64 v2;
  __int128 v3;
  __int64 v4;
  __int128 v5;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v0 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v1 = (v0 & 8) != 0 ? 2 : 3;
    if ((v1 & v0) == 0) {
      goto LABEL_13;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v2 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v2 + 172) == *(float*)(v2 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v2 + 160) + 16LL))(v2 + 160);
    }
    else {
      v3 = *(_OWORD*)(v2 + 208);
    }
    if (*((float*)&v3 + 3) == 1.0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v2 + 160) + 16LL))(
                        v2 + 160, *((float*)&v3 + 3)))
                .n128_f32[3] == 1.0f) {
    LABEL_13:
      v4 = *(_QWORD*)(GameData_21f1628 + 16);
      if ((*(_BYTE*)(v4 + 966) & 1) == 0) {
        v5 = *(_OWORD*)(*(_QWORD*)(*GameData_212d708 + 16) + 80LL);
        Cursor_734a80(v4 + 784, &v5);
      }
    }
  }
}

#pragma GCC visibility pop
