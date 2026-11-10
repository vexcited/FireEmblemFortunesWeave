#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_906320(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_13261c0(__int64);
__int64 GameRoutine_133cc40(__int64);
__int64 GameRoutine_133d560(_QWORD, _QWORD);
__int64 GameRoutine_1340cb0(__int64 result, long double, long double);
__int64 GameRoutine_1341640(__int64 result);
__int64 GameRoutine_1345d80(char);
__int64 GameRoutine_134aaa0(_QWORD);
__int64 GameRoutine_1351170(_QWORD);
__int64 GameRoutine_1353fb0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13542e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9728b0(void);
__int64 GameRoutine_995200(_QWORD);
__int64 GameRoutine_ae0560(void);
__int64 GameSubquestData_125b8e0(_QWORD);
__int64 TroopMgr_134a4a0_alt1(_QWORD) __asm__("TroopMgr_134a4a0");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GetHero(void);
__int64 game_HashString(_QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD);
__int64 game_gmap_TroopMgr_CountPlayerTroop_1349100(_QWORD, _QWORD);
__int64 game_gmap_TroopMgr_CountTroop_134e600(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 wmemchr(void);
extern _UNKNOWN GameData_1a86cf1;
extern _UNKNOWN GameData_1a8ab96;
extern _UNKNOWN GameData_1ade186;
extern __int64 (*GameData_202bb48[])();
extern __int64 (*GameData_202ceb8[])();
extern __int64 (*GameData_202d0c8[])();
extern __int64 (*game_gmap_TroopMgr_Impl_vtable[])();
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_21c96e8;
extern __int64 GameData_21eea40;
extern __int64 GameData_21eea50;
extern __int64 GameData_21f1618;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212ca68[122];
extern __int64* GameData_212d728[2];
void __attribute__((noreturn)) GameRoutine_13549e0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_888610(void);
__int64 TroopMgr_Unknown2(__int64 a1);
__int64 TroopMgr_1345b40();
__int64 TroopMgr_1345be0();
__int64 TroopMgr_1345d00();
__int64 TroopMgr_13460a0(__int64 a1);
__int64 TroopMgr_13461e0();
__int64 TroopMgr_1346380(__int64 a1);
__int64 TroopMgr_13463f0(__int64 result);
unsigned __int64 TroopMgr_13464c0(unsigned __int64 result, long double a2,
                                  long double a3);
__int64 TroopMgr_1347360(__int64 result);
__int64 TroopMgr_1347760();
__int64 TroopMgr_1347860();
void TroopMgr_13486a0();
unsigned __int64 TroopMgr_1348ec0();
__int64 TroopMgr_1349260(unsigned __int8 a1);
__int64 TroopMgr_134a480();
__int64 TroopMgr_134a9e0();
__int64 TroopMgr_134aa80();
__int64 TroopMgr_134b0e0(__int64 result, __int64 a2);
__int64 TroopMgr_134b560(__int64 a1, __int64 a2);
__int64 GameRoutine_1332940(__int64, __int64, __int64, int);
__int64 GameRoutine_133f780(__int64 result, _DWORD*, char);
__int64 GameRoutine_6e5900(_QWORD, _QWORD);
__int64 GameRoutine_ae4560(_QWORD);
__int64 TroopMgr_1341640(__int64 result);
__int64 TroopMgr_1351170(__int64*);
__int64 UnitActor_819400(_QWORD);
char* TroopMgr_1353fb0(signed __int64*, char*, char*);
extern _UNKNOWN GameData_1ad7cf2;
extern __int64 (*GameData_202d048[])();
extern __int64 (*GameData_202db48[])();
extern __int64 GameData_21c9e80;
void __attribute__((noreturn))
GameRoutine_13549e0_alt1(_QWORD) __asm__("GameRoutine_13549e0");
void __attribute__((noreturn))
GameRoutine_888610_alt1(_QWORD) __asm__("GameRoutine_888610");
__int64 game_gmap_TroopMgr_RequestEscapeSpecial(__int64 result);
__int64 TroopMgr_1349f40(__int64 result);
__int64 TroopMgr_134a200(__int64 result, __int64 a2);
__int64 TroopMgr_134a4a0(__int64 result);
void TroopMgr_134a720();
__int64 TroopMgr_134e920(__int64 result);
__int64 TroopMgr_134ebe0(__int64 result);
__int64 game_gmap_TroopMgr_OnUpdateChapter(__int64 a1);
__int64 game_gmap_TroopMgr_Impl_OnDeserialize_closure_Invoke(__int64 a1,
                                                             __int64 a2);
__int64 game_gmap_TroopMgr_Impl_EndMovePlayer_closure_Invoke(__int64 a1,
                                                             __int64* a2);
__int64 TroopMgr_1354a00(__int64 result, __int64 a2);
char* game_gmap_TroopMgr_Impl_UpdateCorps_closure_Invoke_1354fc0(__int64 a1,
                                                                 int* a2);
__int64 game_gmap_TroopMgr_GetAroundTroop_lambda0_Invoke(__int64 result,
                                                         __int64* a2);
bool game_gmap_TroopMgr_TryDisposOtherClan_lambda0_Invoke(__int64 a1,
                                                          __int64* a2);
__int64 game_gmap_TroopMgr_RequestEscapeSpecial_lambda0_Invoke(__int64 result,
                                                               __int64 a2);
__int64 game_gmap_TroopMgr_GetCorpsList_lambda0_Invoke(__int64 result,
                                                       __int64* a2);
__int64 game_gmap_TroopMgr_GetEncountEnemyList_lambda0_Invoke(__int64 result,
                                                              __int64* a2);
__int64 game_gmap_TroopMgr_GetEncountEnemyList_lambda1_Invoke(__int64 result,
                                                              __int64* a2);
bool game_gmap_TroopMgr_HasFixedPlayer_lambda0_Invoke(__int64 a1, __int64 a2);
bool game_gmap_TroopMgr_HasNotFixedPlayer_lambda0_Invoke(__int64 a1,
                                                         __int64 a2);
__int64 game_gmap_TroopMgr_OnUpdateChapter_lambda0_Invoke(__int64 a1,
                                                          __int64* a2);
__int64 game_gmap_TroopMgr_DisposResonanceEnemy_lambda0_Invoke(__int64 result,
                                                               __int64** a2);

__int64 TroopMgr_Unknown2(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      64, 16, 0);
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  v4 = (__int64*)fw_memory_HeapManager_Allocate(*v2, 24, 16, 0);
  v5 = GameData_21eea40;
  v4[1] = (__int64)&GameData_21eea40;
  v4[2] = v3;
  GameData_21eea40 = (__int64)v4;
  *v4 = v5;
  *(_QWORD*)(v5 + 8) = v4;
  *(_QWORD*)v3 = game_gmap_TroopMgr_Impl_vtable;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_BYTE*)(v3 + 60) = 0;
  *(_QWORD*)(v3 + 8) = 0;
  ++GameData_21eea50;
  *(_QWORD*)(a1 + 8) = v3;
  *(_DWORD*)(v3 + 56) = -1;
  return GameRoutine_1351170(v3 + 8);
}

__int64 TroopMgr_1345b40()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 result;
  __int64 v5;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  v3 = *(__int64**)(v0 + 16);
  if (v1 < 0) {
    if (v2 == v3) {
      return 0;
    }
    else {
      while (1) {
        result = *v2;
        if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(result + 552) == 0) {
          break;
        }
        if (++v2 == v3) {
          return 0;
        }
      }
    }
  }
  else if (v2 == v3) {
    return 0;
  }
  else {
    while (1) {
      v5 = *v2++;
      result = v5;
      if (*(_DWORD*)(v5 + 84) == v1) {
        break;
      }
      if (v2 == v3) {
        return 0;
      }
    }
  }
  return result;
}

__int64 TroopMgr_1345be0()
{
  __int64 v0;
  __int64 v1;
  int* v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  int v10;
  __int64 v11;
  _QWORD v12[2];

  v0 = *(_QWORD*)(*GameData_212c790 + 8);
  v12[1] = &GameData_1ade186;
  v12[0] = game_HashString(&GameData_1ade186);
  if (game_GameModeData_instance_ == 0 ||
      (v1 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v12)) == 0 ||
      *(int*)(v1 + 32) < 1 ||
      (v2 = *(int**)(v0 + 32), *(int**)(v0 + 40) == v2) || (v3 = *v2) < 0 ||
      (v4 = *(__int64**)(v0 + 8), v5 = *(__int64**)(v0 + 16), v4 == v5)) {
  LABEL_9:
    v8 = *(__int64**)(v0 + 8);
    v9 = *(__int64**)(v0 + 16);
    v10 = *(_DWORD*)(v0 + 56);
    if (v10 < 0) {
      if (v8 != v9) {
        while (1) {
          result = *v8;
          if (*(_QWORD*)(*v8 + 96) == 0 && *(_QWORD*)(result + 552) == 0) {
            break;
          }
          if (++v8 == v9) {
            return 0;
          }
        }
        return result;
      }
    }
    else if (v8 != v9) {
      while (1) {
        v11 = *v8++;
        result = v11;
        if (*(_DWORD*)(v11 + 84) == v10) {
          break;
        }
        if (v8 == v9) {
          return 0;
        }
      }
      return result;
    }
    return 0;
  }
  while (1) {
    v7 = *v4++;
    result = v7;
    if (*(_DWORD*)(v7 + 84) == v3) {
      return result;
    }
    if (v4 == v5) {
      goto LABEL_9;
    }
  }
}

__int64 TroopMgr_1345d00()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  __int64 result;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v0 = *(_QWORD*)(GameData_21c96e8 + 8);
    v1 = *(__int64**)(v0 + 8);
    v2 = *(__int64**)(v0 + 16);
    while (v1 != v2) {
      result = *v1;
      if ((*(_QWORD*)(*v1 + 96) | *(_QWORD*)(*v1 + 552)) == 0 &&
          *(_DWORD*)(result + 84) == -1) {
        return result;
      }
      ++v1;
    }
  }
  return 0;
}

__int64 TroopMgr_13460a0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[2];

  v11[1] = &GameData_1ade186;
  result = game_HashString(&GameData_1ade186);
  v11[0] = result;
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v11);
    v4 = result != 0 && *(_DWORD*)(result + 32) > 0;
  }
  v5 = *(_QWORD*)(GameData_21c96e8 + 8);
  v6 = *(__int64**)(v5 + 8);
  v7 = *(__int64**)(v5 + 16);
  if (v6 != v7) {
    if ((v4 & 1) != 0) {
      while (1) {
        v10 = *v6;
        if (*(_QWORD*)(*v6 + 96) == 0 && *(_QWORD*)(v10 + 552) == 0 &&
            (*(_DWORD*)(v10 + 84) & 0x80000000) == 0) {
          v9 = *(_QWORD*)(a1 + 32);
          v11[0] = *v6;
          if (v9 == 0) {
            goto LABEL_20;
          }
          result =
              (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v9 + 48LL))(v9, v11);
        }
        if (++v6 == v7) {
          return result;
        }
      }
    }
    do {
      v8 = *v6;
      if (*(_QWORD*)(*v6 + 96) == 0 && *(_QWORD*)(v8 + 552) == 0 &&
          (*(_DWORD*)(v8 + 84) & 0x80000000) != 0) {
        v9 = *(_QWORD*)(a1 + 32);
        v11[0] = *v6;
        if (v9 == 0) {
        LABEL_20:
          GameRoutine_60a310(v9, v3);
        }
        result =
            (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v9 + 48LL))(v9, v11);
      }
      ++v6;
    } while (v6 != v7);
  }
  return result;
}

__int64 TroopMgr_13461e0()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64 result;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int* v8;
  int v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  int v15;
  __int64 v16;
  _QWORD v17[2];

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  if (v1 < 0) {
    while (1) {
      result = *v2;
      if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(result + 552) == 0) {
        break;
      }
      ++v2;
    }
    if ((*(_DWORD*)(result + 84) & 0x80000000) != 0) {
      v17[1] = &GameData_1ade186;
      v17[0] = game_HashString(&GameData_1ade186);
      if (game_GameModeData_instance_ != 0) {
        v7 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v17);
        if (v7 != 0 && *(int*)(v7 + 32) >= 1) {
          v8 = *(int**)(v0 + 32);
          if (*(int**)(v0 + 40) != v8) {
            v9 = *v8;
            if ((v9 & 0x80000000) == 0) {
              v10 = *(__int64**)(v0 + 8);
              v11 = *(__int64**)(v0 + 16);
              while (v10 != v11) {
                v12 = *v10++;
                result = v12;
                if (*(_DWORD*)(v12 + 84) == v9) {
                  goto LABEL_9;
                }
              }
            }
          }
        }
      }
      v13 = *(__int64**)(v0 + 8);
      v14 = *(__int64**)(v0 + 16);
      v15 = *(_DWORD*)(v0 + 56);
      if (v15 < 0) {
        if (v13 != v14) {
          while (1) {
            result = *v13;
            if (*(_QWORD*)(*v13 + 96) == 0 && *(_QWORD*)(result + 552) == 0) {
              break;
            }
            if (++v13 == v14) {
              return 0;
            }
          }
          goto LABEL_9;
        }
      }
      else if (v13 != v14) {
        while (1) {
          v16 = *v13++;
          result = v16;
          if (*(_DWORD*)(v16 + 84) == v15) {
            break;
          }
          if (v13 == v14) {
            return 0;
          }
        }
        goto LABEL_9;
      }
      return 0;
    }
  }
  else {
    v5 = *v2;
    v4 = v2 + 1;
    result = v5;
    if (*(_DWORD*)(v5 + 84) != v1) {
      do {
        v6 = *v4++;
        result = v6;
      } while (*(_DWORD*)(v6 + 84) != v1);
    }
  }

LABEL_9:
  if ((*(_WORD*)(result + 544) & 0x10) != 0) {
    return GameRoutine_1345d80(1);
  }
  return result;
}

__int64 TroopMgr_1346380(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64**)(v1 + 8);
  v4 = *(__int64**)(v1 + 16);
  if (v2 < 0) {
    if (v3 != v4) {
      while (1) {
        v5 = (_QWORD*)*v3;
        if (*(_QWORD*)(*v3 + 96) == 0 && v5[69] == 0) {
          break;
        }
        if (++v3 == v4) {
          return game_gmap_SpotMgr_GetCurrentSpot(a1);
        }
      }
      return *v5;
    }
    return game_gmap_SpotMgr_GetCurrentSpot(a1);
  }
  if (v3 == v4) {
    return game_gmap_SpotMgr_GetCurrentSpot(a1);
  }
  while (1) {
    v6 = *v3++;
    v5 = (_QWORD*)v6;
    if (*(_DWORD*)(v6 + 84) == v2) {
      break;
    }
    if (v3 == v4) {
      return game_gmap_SpotMgr_GetCurrentSpot(a1);
    }
  }
  return *v5;
}

__int64 TroopMgr_13463f0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;

  v7 = result;
  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  *(_DWORD*)(v1 + 56) = result;
  if ((result & 0x80000000) != 0) {
    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5844LL) = 0;
  }
  else {
    v2 = *(_QWORD*)(v1 + 40);
    v3 = wmemchr();
    v4 = *(_QWORD*)(v1 + 32);
    v5 = *(_QWORD*)(v1 + 40);
    if (v3 != 0) {
      v2 = v3;
    }
    if (v2 != v5) {
      v6 = v5 - (v2 + 4);
      if (v5 != v2 + 4) {
        memmove(v2, v2 + 4, v5 - (v2 + 4));
        v4 = *(_QWORD*)(v1 + 32);
      }
      *(_QWORD*)(v1 + 40) = v2 + v6;
    }
    return GameRoutine_1353fb0(v1 + 32, v4, &v7);
  }
  return result;
}

unsigned __int64 TroopMgr_13464c0(unsigned __int64 result, long double a2,
                                  long double a3)
{
  __int64 v3;
  unsigned __int64* v4;
  unsigned __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64* v11;
  unsigned __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  bool v30;
  __int16 v31;
  __int16 v32;
  _BOOL4 v33;
  __int64* v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int16 v53;
  __int64* v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v59;
  unsigned __int64 v60;
  _QWORD* v61;
  _QWORD* v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  unsigned __int64 v67;
  char* v68;
  char* v69;
  __int64 v70;
  __int64 v71;
  char* v72;
  __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  char* v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int16 v81;
  __int16 v82;
  __int64* v83;
  __int64* v84;
  char* v85;
  __int64* v86;
  __int64 v87;
  __int64 v88;
  _QWORD* v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  bool v93;
  __int64* v94;
  unsigned __int64 v95;
  __int64 v96;
  bool v97;
  char* v98;
  __int64 v99;
  __int64 v100;
  __int64* v101;
  __int64 v102;
  __int64 v103;
  __int64* v104;
  __int64 v105;
  __int64 v106;
  bool v107;
  __int16 v108;
  __int64 v109;
  __int64* v110;
  __int64 v111;
  __int64 v112;
  __int16 v113;
  _BOOL4 v114;
  _QWORD* v115;
  _QWORD* v116;
  __int64 v117;
  __int16 v118;
  _QWORD* v119;
  __int64 v120;
  _QWORD* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  unsigned __int64 v125;
  __int64 v126;
  unsigned __int64 v127;
  _QWORD* v128;
  __int64 v129;
  int v130;
  _QWORD v131[4];
  _QWORD* v132;

  v3 = *(_QWORD*)(GameData_21c96e8 + 8);
  v128 = nullptr;
  v129 = 0;
  v126 = 0;
  v127 = 0;
  v130 = 1065353216;
  v4 = *(unsigned __int64**)(v3 + 8);
  v5 = *(unsigned __int64**)(v3 + 16);
  if (v4 != v5) {
    do {
      v6 = (__int64*)*v4;
      v7 = *(_QWORD*)(*v4 + 96);
      v8 = *(_QWORD*)(*v4 + 552);
      v125 = *v4;
      if ((v7 | v8) == 0) {
        v9 = *v6;
        v131[0] = &v125;
        result = GameRoutine_13542e0(&v126, &v125, v131);
        *(_QWORD*)(result + 24) = v9;
      }
      ++v4;
    } while (v4 != v5);
    v4 = *(unsigned __int64**)(v3 + 8);
    v5 = *(unsigned __int64**)(v3 + 16);
  }
  if (GameData_21f1618 == 0 || v4 == v5) {
    goto LABEL_106;
  }
  do {
    v10 = *v4;
    if ((*(_QWORD*)(*v4 + 96) | *(_QWORD*)(*v4 + 552)) == 0) {
      v11 = *(unsigned __int64**)(v3 + 8);
      v12 = *(unsigned __int64**)(v3 + 16);
      while (1) {
        if (v11 == v12) {
          goto LABEL_10;
        }
        v14 = (__int64*)*v11;
        v15 = *(_QWORD*)(*v11 + 96);
        v16 = *(_QWORD*)(*v11 + 552);
        v125 = *v11;
        if ((v15 | v16) == 0) {
          goto LABEL_15;
        }
        v17 = (__int64*)v10;
        if (*(_QWORD*)(v10 + 32) != *(_QWORD*)(v10 + 24)) {
          if ((v18 = *(_QWORD*)(v10 + 96), v19 = *(_QWORD*)(v10 + 552),
               (v18 | v19) == 0) ||
              v18 == 0 && v19 != 0 && *(_QWORD*)(v10 + 104) == 0 &&
                  *(__int16*)(v10 + 642) * *(__int16*)(v10 + 640) *
                          *(__int16*)(v10 + 644) ==
                      0 &&
                  *(_QWORD*)(v19 + 352) == 0 ||
              (v17 = (__int64*)v10, (*(_WORD*)(v10 + 544) & 3) != 2)) {
            v17 = *(__int64**)(v10 + 24);
          }
        }
        v20 = *v17;
        v13 = *v14;
        v21 = *(_QWORD*)v10;
        if (v20 == *v14) {
          v29 = (__int64*)v14[3];
          if ((__int64*)v14[4] == v29) {
            if (v21 != v20) {
              goto LABEL_24;
            }
            goto LABEL_55;
          }
          if (v15 == 0 && (v16 != 0 ? (v30 = v14[13] == 0) : (v30 = false),
                           v30 &&
                               *((__int16*)v14 + 321) * *((__int16*)v14 + 320) *
                                       *((__int16*)v14 + 322) ==
                                   0 &&
                               *(_QWORD*)(v16 + 352) == 0) ||
              (v14[68] & 3) != 2) {
            v20 = *v29;
          }
          if (v21 == v20) {
            break;
          }
        }
      LABEL_24:
        if (v21 == v13) {
          v22 = *(__int64**)(v10 + 24);
          v23 = v13;
          if (*(__int64**)(v10 + 32) != v22) {
            if ((v24 = *(_QWORD*)(v10 + 96), v25 = *(_QWORD*)(v10 + 552),
                 (v24 | v25) == 0) ||
                v24 == 0 && v25 != 0 && *(_QWORD*)(v10 + 104) == 0 &&
                    *(__int16*)(v10 + 642) * *(__int16*)(v10 + 640) *
                            *(__int16*)(v10 + 644) ==
                        0 &&
                    *(_QWORD*)(v25 + 352) == 0 ||
                (v23 = v13, (*(_WORD*)(v10 + 544) & 3) != 2)) {
              v23 = *v22;
            }
          }
          v26 = (__int64*)v14[3];
          if ((__int64*)v14[4] == v26) {
            if (v23 == v13) {
              goto LABEL_14;
            }
          }
          else {
            v27 = v14[12];
            v28 = v14[69];
            if ((v27 | v28) != 0) {
              if ((v27 != 0 || v28 == 0 || v14[13] != 0 ||
                   *((__int16*)v14 + 321) * *((__int16*)v14 + 320) *
                           *((__int16*)v14 + 322) !=
                       0 ||
                   *(_QWORD*)(v28 + 352) != 0) &&
                  (v14[68] & 3) == 2) {
                if (v23 == v13) {
                  goto LABEL_75;
                }
              }
              else if (v23 == *v26) {
              LABEL_75:
                if (v27 != 0 || v28 == 0 || v14[13] != 0 ||
                    *((__int16*)v14 + 321) * *((__int16*)v14 + 320) *
                            *((__int16*)v14 + 322) !=
                        0 ||
                    *(_QWORD*)(v28 + 352) != 0) {
                  v32 = *((_WORD*)v14 + 272);
                  if ((v32 & 3) == 2) {
                    goto LABEL_80;
                  }
                }
              LABEL_77:
                v32 = *((_WORD*)v14 + 272);
                if ((v32 & 3) != 2) {
                  v32 = ~v32 & 2 | v32 & 0xFFFE;
                  *((_WORD*)v14 + 272) = v32;
                }
                if ((v27 | v28) != 0) {
                LABEL_80:
                  if (v27 == 0 && v28 != 0 && v14[13] == 0 &&
                          *((__int16*)v14 + 321) * *((__int16*)v14 + 320) *
                                  *((__int16*)v14 + 322) ==
                              0 &&
                          *(_QWORD*)(v28 + 352) == 0 ||
                      (v32 & 3) != 2) {
                    goto LABEL_13;
                  }
                }
                else {
                LABEL_13:
                  v13 = *v26;
                }
              LABEL_14:
                v131[0] = &v125;
                result = GameRoutine_13542e0(&v126, &v125, v131);
                *(_QWORD*)(result + 24) = v13;
              }
            }
            else if (v23 == *v26) {
              goto LABEL_77;
            }
          }
        }
      LABEL_15:
        ++v11;
      }
      if (v15 != 0 || v16 == 0 || v14[13] != 0 ||
          *((__int16*)v14 + 321) * *((__int16*)v14 + 320) *
                  *((__int16*)v14 + 322) !=
              0 ||
          *(_QWORD*)(v16 + 352) != 0) {
        v31 = *((_WORD*)v14 + 272);
        if ((v31 & 3) == 2) {
          goto LABEL_49;
        }
      }
      else {
        v31 = *((_WORD*)v14 + 272);
        if ((v31 & 3) == 2) {
          v33 = true;
        LABEL_90:
          if (v16 != 0 && v33 &&
              *((__int16*)v14 + 321) * *((__int16*)v14 + 320) *
                      *((__int16*)v14 + 322) ==
                  0 &&
              *(_QWORD*)(v16 + 352) == 0) {
          LABEL_51:
            v13 = *v29;
            goto LABEL_55;
          }
        LABEL_50:
          if ((v31 & 3) != 2) {
            goto LABEL_51;
          }
        LABEL_55:
          v131[0] = &v125;
          result = GameRoutine_13542e0(&v126, &v125, v131);
          v14 = (__int64*)v125;
          *(_QWORD*)(result + 24) = v13;
          v21 = *(_QWORD*)v10;
          v13 = *v14;
          goto LABEL_24;
        }
      }
      v31 = ~v31 & 2 | v31 & 0xFFFE;
      *((_WORD*)v14 + 272) = v31;
    LABEL_49:
      if (v15 == 0) {
        v33 = v14[13] == 0;
        goto LABEL_90;
      }
      goto LABEL_50;
    }
  LABEL_10:
    ++v4;
  } while (v4 != v5);
  v4 = *(unsigned __int64**)(v3 + 8);
  v5 = *(unsigned __int64**)(v3 + 16);

LABEL_106:
  if (v4 == v5) {
    goto LABEL_162;
  }
  while (2) {
    v36 = v127;
    v37 = *v4;
    v125 = *v4;
    if (v127 != 0 && v129 != 0) {
      v131[0] = v37;
      result = std___1___hash_memory(v131, 8);
      v39 = v36 - 1;
      if ((v36 & (v36 - 1)) != 0) {
        v40 = result;
        if (result >= v36) {
          v40 = result % v36;
        }
      }
      else {
        v40 = result & v39;
      }
      v41 = *(_QWORD**)(v126 + 8 * v40);
      if (v41 != nullptr) {
        v42 = (_QWORD*)*v41;
        if (v42 != nullptr) {
          if ((v36 & v39) == 0) {
            while (1) {
              v44 = v42[1];
              if (result == v44) {
                if (v42[2] == v37) {
                  goto LABEL_110;
                }
              }
              else if ((v44 & v39) != v40) {
                goto LABEL_134;
              }
              v42 = (_QWORD*)*v42;
              if (v42 == nullptr) {
                goto LABEL_134;
              }
            }
          }
          do {
            v43 = v42[1];
            if (result == v43) {
              if (v42[2] == v37) {
                goto LABEL_110;
              }
            }
            else {
              if (v43 >= v36) {
                v43 %= v36;
              }
              if (v43 != v40) {
                break;
              }
            }
            v42 = (_QWORD*)*v42;
          } while (v42 != nullptr);
        }
      }
    }
  LABEL_134:
    v45 = *(_QWORD*)(v37 + 96);
    if (v45 != 0 && *(_BYTE*)(v45 + 32) == 1) {
      if (*(_QWORD*)(v37 + 32) != *(_QWORD*)(v37 + 24) &&
          (*(_WORD*)(v37 + 544) & 3) != 2) {
        v37 = *(_QWORD*)(v37 + 24);
      }
      v46 = *(_QWORD*)v37;
      v131[0] = GameData_202bb48;
      v132 = v131;
      v47 = game_gmap_TroopMgr_CountTroop_134e600(v46, v131);
      if (v132 == v131) {
        v48 = 32;
      LABEL_143:
        (*(void (**)(void))(*v132 + v48))();
      }
      else if (v132 != nullptr) {
        v48 = 40;
        goto LABEL_143;
      }
      v131[1] = &GameData_1a86cf1;
      v131[0] = game_HashString(&GameData_1a86cf1);
      if (game_GameModeData_instance_ != 0 &&
          (v49 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v131)) != 0) {
        v50 = *(_DWORD*)(v49 + 32);
      }
      else {
        v50 = 0;
      }
      v34 = (__int64*)v125;
      if (v47 >= v50) {
        v53 = *(_WORD*)(v125 + 544);
        if ((v53 & 3) != 2) {
          *(_WORD*)(v125 + 544) = ~v53 & 2 | v53 & 0xFFFE;
        }
      }
      else if (*(_QWORD*)(v125 + 32) != *(_QWORD*)(v125 + 24)) {
        if ((v51 = *(_QWORD*)(v125 + 96), v52 = *(_QWORD*)(v125 + 552),
             (v51 | v52) == 0) ||
            v51 == 0 && v52 != 0 && *(_QWORD*)(v125 + 104) == 0 &&
                *(__int16*)(v125 + 642) * *(__int16*)(v125 + 640) *
                        *(__int16*)(v125 + 644) ==
                    0 &&
                *(_QWORD*)(v52 + 352) == 0 ||
            (*(_WORD*)(v125 + 544) & 3) != 2) {
          v34 = *(__int64**)(v125 + 24);
        }
      }
      v35 = *v34;
      v131[0] = &v125;
      result = GameRoutine_13542e0(&v126, &v125, v131);
      *(_QWORD*)(result + 24) = v35;
    }
  LABEL_110:
    if (++v4 != v5) {
      continue;
    }
    break;
  }
  v4 = *(unsigned __int64**)(v3 + 8);
  v5 = *(unsigned __int64**)(v3 + 16);

LABEL_162:
  if (v4 != v5) {
    do {
      v56 = v127;
      v57 = *v4;
      v125 = *v4;
      if (v127 != 0 && v129 != 0) {
        v131[0] = v57;
        result = std___1___hash_memory(v131, 8);
        v59 = v56 - 1;
        if ((v56 & (v56 - 1)) != 0) {
          v60 = result;
          if (result >= v56) {
            v60 = result % v56;
          }
        }
        else {
          v60 = result & v59;
        }
        v61 = *(_QWORD**)(v126 + 8 * v60);
        if (v61 != nullptr) {
          v62 = (_QWORD*)*v61;
          if (v62 != nullptr) {
            if ((v56 & v59) == 0) {
              while (1) {
                v64 = v62[1];
                if (result == v64) {
                  if (v62[2] == v57) {
                    goto LABEL_166;
                  }
                }
                else if ((v64 & v59) != v60) {
                  goto LABEL_190;
                }
                v62 = (_QWORD*)*v62;
                if (v62 == nullptr) {
                  goto LABEL_190;
                }
              }
            }
            do {
              v63 = v62[1];
              if (result == v63) {
                if (v62[2] == v57) {
                  goto LABEL_166;
                }
              }
              else {
                if (v63 >= v56) {
                  v63 %= v56;
                }
                if (v63 != v60) {
                  break;
                }
              }
              v62 = (_QWORD*)*v62;
            } while (v62 != nullptr);
          }
        }
      }
    LABEL_190:
      v65 = *(_QWORD*)(v57 + 96);
      if (v65 != 0 && *(_BYTE*)(v65 + 32) == 2) {
        v66 = v128;
        if (v128 != nullptr) {
          v67 = 0;
          v68 = nullptr;
          v69 = nullptr;
          do {
            v70 = v66[2];
            v71 = *(_QWORD*)(v70 + 96);
            if (v71 != 0 && *(_BYTE*)(v71 + 32) == 1 &&
                *(_QWORD*)v125 == v66[3]) {
              if ((unsigned __int64)v68 < v67) {
                *(_QWORD*)v68 = v70;
                v68 += 8;
              }
              else {
                v72 = (char*)(v68 - v69);
                v73 = (v68 - v69) >> 3;
                v74 = v73 + 1;
                if ((unsigned __int64)(v73 + 1) >> 61 != 0) {
                  GameRoutine_888610();
                }
                if ((__int64)(v67 - (_QWORD)v69) >> 2 > v74) {
                  v74 = (__int64)(v67 - (_QWORD)v69) >> 2;
                }
                if (v67 - (unsigned __int64)v69 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v75 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v75 = v74;
                }
                if (v75 != 0) {
                  if (v75 >> 61 != 0) {
                    GameRoutine_60a210(result);
                  }
                  v76 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                       8 * v75, 16, 0);
                  v70 = v66[2];
                }
                else {
                  v76 = 0;
                }
                v67 = v76 + 8 * v75;
                v77 = (char*)(v68 - v69);
                v78 = (__int64)&v72[v76 + -8 * v73];
                *(_QWORD*)&v72[v76] = v70;
                v68 = &v72[v76 + 8];
                result = memcpy(v78, v69, v77);
                if (v69 != nullptr) {
                  v79 = 128;
                  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                    v79 = 56;
                  }
                  result = nn_mem_StandardAllocator_Free(
                      fw_memory_g_heap_manager + v79);
                }
                v69 = (char*)v78;
              }
            }
            v66 = (_QWORD*)*v66;
          } while (v66 != nullptr);
          if (v68 != v69) {
            v80 = v125;
            v81 = *(_WORD*)(v125 + 544);
            if ((v81 & 3) != 1) {
              if ((v81 & 2) != 0) {
                v82 = v81 & 0xFFFC | 1;
              }
              else {
                v82 = v81 | 1;
              }
              *(_WORD*)(v125 + 544) = v82;
            }
            v83 = *(__int64**)(v80 + 24);
            v84 = *(__int64**)(v80 + 32);
            v85 = v69;
            if (v84 == v83) {
              v86 = (__int64*)v80;
            }
            else {
              v86 = *(__int64**)(v80 + 24);
            }
            v87 = *v86;
            while (1) {
              v89 = *(_QWORD**)v85;
              if (v87 == **(_QWORD**)v85) {
                v90 = (__int64*)v89[3];
                v88 = v87;
                if ((__int64*)v89[4] != v90) {
                  if ((v91 = v89[12], v92 = v89[69], (v91 | v92) == 0) ||
                      v91 == 0 &&
                          (v92 != 0 ? (v93 = v89[13] == 0) : (v93 = false),
                           v93 &&
                               *((__int16*)v89 + 321) * *((__int16*)v89 + 320) *
                                       *((__int16*)v89 + 322) ==
                                   0 &&
                               *(_QWORD*)(v92 + 352) == 0) ||
                      (v88 = v87, (v89[68] & 3) != 2)) {
                    v88 = *v90;
                  }
                }
                if (*(_QWORD*)v80 == v88) {
                  break;
                }
              }
              v85 += 8;
              if (v85 == v68) {
                goto LABEL_248;
              }
            }
            if (v84 != v83) {
              *(_QWORD*)(v80 + 32) = v84 - 1;
              if (v83 != v84 - 1) {
                v94 = v84 - 2;
                if (v83 < v94) {
                  v95 = (unsigned __int64)(v83 + 1);
                  do {
                    v96 = *(_QWORD*)(v95 - 8);
                    *(_QWORD*)(v95 - 8) = *v94;
                    *v94-- = v96;
                    v97 = v95 >= (unsigned __int64)v94;
                    v95 += 8LL;
                  } while (!v97);
                }
              }
              GameRoutine_133d560(v80 + 24, v80);
              v80 = v125;
              v83 = *(__int64**)(v125 + 24);
              v84 = *(__int64**)(v125 + 32);
            }
          LABEL_248:
            v98 = v69;
            while (1) {
              v100 = *(_QWORD*)v98;
              v101 = (__int64*)v80;
              if (v84 != v83) {
                if ((v102 = *(_QWORD*)(v80 + 96), v103 = *(_QWORD*)(v80 + 552),
                     (v102 | v103) == 0) ||
                    v102 == 0 && v103 != 0 && *(_QWORD*)(v80 + 104) == 0 &&
                        *(__int16*)(v80 + 642) * *(__int16*)(v80 + 640) *
                                *(__int16*)(v80 + 644) ==
                            0 &&
                        *(_QWORD*)(v103 + 352) == 0 ||
                    (v101 = (__int64*)v80, (*(_WORD*)(v80 + 544) & 3) != 2)) {
                  v101 = v83;
                }
              }
              v99 = *v101;
              if (v99 == *(_QWORD*)v100) {
                v104 = *(__int64**)(v100 + 24);
                if (*(__int64**)(v100 + 32) != v104) {
                  if ((v105 = *(_QWORD*)(v100 + 96),
                       v106 = *(_QWORD*)(v100 + 552), (v105 | v106) == 0) ||
                      v105 == 0 &&
                          (v106 != 0 ? (v107 = *(_QWORD*)(v100 + 104) == 0)
                                     : (v107 = false),
                           v107 &&
                               *(__int16*)(v100 + 642) *
                                       *(__int16*)(v100 + 640) *
                                       *(__int16*)(v100 + 644) ==
                                   0 &&
                               *(_QWORD*)(v106 + 352) == 0) ||
                      (*(_WORD*)(v100 + 544) & 3) != 2) {
                    v99 = *v104;
                  }
                }
                if (*(_QWORD*)v80 == v99) {
                  break;
                }
              }
              v98 += 8;
              if (v98 == v68) {
                goto LABEL_277;
              }
            }
            v108 = *(_WORD*)(v80 + 544);
            if ((v108 & 3) != 2) {
              *(_WORD*)(v80 + 544) = ~v108 & 2 | v108 & 0xFFFE;
            }
          }
        LABEL_277:
          if (v69 != nullptr) {
            v109 = 128;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
              v109 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v109);
          }
        }
        v54 = (__int64*)v125;
        v110 = *(__int64**)(v125 + 24);
        if (*(__int64**)(v125 + 32) != v110) {
          v111 = *(_QWORD*)(v125 + 96);
          v112 = *(_QWORD*)(v125 + 552);
          if ((v111 | v112) == 0 ||
              v111 == 0 && v112 != 0 && *(_QWORD*)(v125 + 104) == 0 &&
                  *(__int16*)(v125 + 642) * *(__int16*)(v125 + 640) *
                          *(__int16*)(v125 + 644) ==
                      0 &&
                  *(_QWORD*)(v112 + 352) == 0 ||
              (((v113 = *(_WORD*)(v125 + 544)) & 1) == 0
                   ? (v114 = (v113 & 2) == 0)
                   : (v114 = true),
               v114)) {
            v115 = v128;
            if (v128 != nullptr) {
              while (1) {
                v117 = *(_QWORD*)(v115[2] + 96LL);
                if (v117 != 0 && *(_BYTE*)(v117 + 32) == 1) {
                  if ((v111 | v112) == 0 ||
                      v111 == 0 && v112 != 0 && *(_QWORD*)(v125 + 104) == 0 &&
                          *(__int16*)(v125 + 642) * *(__int16*)(v125 + 640) *
                                  *(__int16*)(v125 + 644) ==
                              0 &&
                          *(_QWORD*)(v112 + 352) == 0 ||
                      (v116 = (_QWORD*)v125,
                       (*(_WORD*)(v125 + 544) & 3) != 2)) {
                    v116 = *(_QWORD**)(v125 + 24);
                  }
                  if (*v116 == v115[3]) {
                    break;
                  }
                }
                v115 = (_QWORD*)*v115;
                if (v115 == nullptr) {
                  goto LABEL_289;
                }
              }
              v118 = *(_WORD*)(v125 + 544);
              if ((v118 & 3) != 2) {
                *(_WORD*)(v125 + 544) = ~v118 & 2 | v118 & 0xFFFE;
              }
            }
          }
        LABEL_289:
          if ((v111 | v112) == 0 ||
              v111 == 0 && v112 != 0 && v54[13] == 0 &&
                  *((__int16*)v54 + 321) * *((__int16*)v54 + 320) *
                          *((__int16*)v54 + 322) ==
                      0 &&
                  *(_QWORD*)(v112 + 352) == 0 ||
              (v54[68] & 3) != 2) {
            v54 = v110;
          }
        }
        v55 = *v54;
        v131[0] = &v125;
        result = GameRoutine_13542e0(&v126, &v125, v131);
        *(_QWORD*)(result + 24) = v55;
      }
    LABEL_166:
      ++v4;
    } while (v4 != v5);
    v4 = *(unsigned __int64**)(v3 + 8);
    v5 = *(unsigned __int64**)(v3 + 16);
  }
  while (v4 != v5) {
    result = *v4;
    if ((*(_QWORD*)(*v4 + 96) | *(_QWORD*)(*v4 + 552)) != 0) {
      result = GameRoutine_1340cb0(result, a2, a3);
    }
    ++v4;
  }
  v119 = v128;
  *(_BYTE*)(v3 + 60) = 1;
  if (v119 != nullptr) {
    v120 = fw_memory_g_heap_manager_ptr;
    do {
      v121 = (_QWORD*)*v119;
      if (*(_QWORD*)(*(_QWORD*)v120 + 200LL) != 0) {
        v122 = 128;
      }
      else {
        v122 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v120 + v122);
      v119 = v121;
    } while (v121 != nullptr);
  }
  v123 = v126;
  v126 = 0;
  if (v123 != 0) {
    v124 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v124 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v124);
  }
  return result;
}

__int64 TroopMgr_1347360(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  int v4;
  __int64* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  __int64* v13;
  char* v14;
  char* v15;
  unsigned __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 i;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(__int64**)(v1 + 8);
  v3 = *(__int64**)(v1 + 16);
  v4 = *(_DWORD*)(v1 + 56);
  if (v4 < 0) {
    if (v2 == v3) {
      goto LABEL_34;
    }
    v13 = *(__int64**)(v1 + 8);
    while (1) {
      v6 = (_QWORD*)*v13;
      if (*(_QWORD*)(*v13 + 96) == 0 && v6[69] == 0) {
        break;
      }
      if (++v13 == v3) {
      LABEL_6:
        v6 = nullptr;
        break;
      }
    }
  }
  else {
    if (v2 == v3) {
      goto LABEL_34;
    }
    v5 = *(__int64**)(v1 + 8);
    while (1) {
      v7 = *v5++;
      v6 = (_QWORD*)v7;
      if (*(_DWORD*)(v7 + 84) == v4) {
        break;
      }
      if (v5 == v3) {
        goto LABEL_6;
      }
    }
  }
  if (v2 != v3) {
    do {
      v8 = *v2;
      if ((*(_QWORD*)(*v2 + 96) | *(_QWORD*)(*v2 + 552)) != 0) {
        if ((result = GameRoutine_1341640(*v2), v6[4] == v6[3]) ||
            *(_QWORD*)(v8 + 32) == *(_QWORD*)(v8 + 24) ||
            (v9 = *(_QWORD*)(v8 + 96), v10 = *(_QWORD*)(v8 + 552),
             (v9 | v10) != 0) &&
                (v9 != 0 ||
                 (v10 != 0 ? (v11 = *(_QWORD*)(v8 + 104) == 0) : (v11 = false),
                  !v11 ||
                      *(__int16*)(v8 + 642) * *(__int16*)(v8 + 640) *
                              *(__int16*)(v8 + 644) !=
                          0 ||
                      *(_QWORD*)(v10 + 352) != 0)) &&
                (*(_WORD*)(v8 + 544) & 3) == 2) {
          if (*(_BYTE*)(*(_QWORD*)v8 + 113LL) == 1 &&
              *(_BYTE*)(v8 + 512) != 0) {
            v12 = GameData_21f1618;
            *(_BYTE*)(v8 + 512) = 0;
            if (v12 != 0) {
              result = GameRoutine_995200(v8 + 112);
            }
          }
        }
      }
      ++v2;
    } while (v2 != v3);
    v2 = *(__int64**)(v1 + 8);
    v3 = *(__int64**)(v1 + 16);
  }

LABEL_34:
  if (v2 != v3) {
    v14 = nullptr;
    v15 = nullptr;
    v16 = 0;
    v17 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v18 = (_QWORD*)*v2;
      v19 = *(_QWORD*)(*v2 + 96);
      if (v19 != 0 && *(_BYTE*)(v19 + 32) == 2) {
        for (i = *(_QWORD*)(v1 + 8); i != *(_QWORD*)(v1 + 16); i += 8) {
          v21 = *(_QWORD*)(*(_QWORD*)i + 96LL);
          if (v21 != 0 && *(_BYTE*)(v21 + 32) == 1 && *v18 == **(_QWORD**)i) {
            if ((unsigned __int64)v15 < v16) {
              *(_QWORD*)v15 = v18;
              v15 += 8;
            }
            else {
              v22 = (char*)(v15 - v14);
              v23 = (v15 - v14) >> 3;
              v24 = v23 + 1;
              if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
                GameRoutine_888610();
              }
              if ((__int64)(v16 - (_QWORD)v14) >> 2 > v24) {
                v24 = (__int64)(v16 - (_QWORD)v14) >> 2;
              }
              if (v16 - (unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
                v25 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v25 = v24;
              }
              if (v25 != 0) {
                if (v25 >> 61 != 0) {
                  GameRoutine_60a210(result);
                }
                v26 = fw_memory_HeapManager_Allocate(*v17, 8 * v25, 16, 0);
              }
              else {
                v26 = 0;
              }
              v16 = v26 + 8 * v25;
              v27 = (char*)(v15 - v14);
              v28 = (__int64)&v22[v26 + -8 * v23];
              *(_QWORD*)&v22[v26] = v18;
              v15 = &v22[v26 + 8];
              result = memcpy(v28, v14, v27);
              if (v14 != nullptr) {
                v29 = 128;
                if (*(_QWORD*)(*v17 + 200LL) == 0) {
                  v29 = 56;
                }
                result = nn_mem_StandardAllocator_Free(*v17 + v29);
              }
              v14 = (char*)v28;
            }
            break;
          }
        }
      }
      ++v2;
    } while (v2 != v3);
    if (v14 != v15) {
      v30 = *(_QWORD*)(v1 + 16);
      if (v30 != *(_QWORD*)(v1 + 8)) {
        v31 = v14;
        do {
          v32 = *(_QWORD*)(v1 + 8);
          if (v30 != v32) {
            v33 = (v30 - v32) >> 3;
            v34 = 0;
            while (*(_QWORD*)(v32 + 8 * v34) != *(_QWORD*)v31) {
              if (v33 == ++v34) {
                goto LABEL_66;
              }
            }
            if ((v34 & 0x8000000000000000LL) == 0) {
              v35 = (unsigned int)v34;
              if ((unsigned int)v34 >= v33) {
                GameRoutine_13549e0();
              }
              if (*(_QWORD*)(v32 + 8LL * (unsigned int)v34) != 0) {
                GameRoutine_133cc40(*(_QWORD*)(v32 + 8LL * (unsigned int)v34));
                if (*(_QWORD*)(*v17 + 200LL) != 0) {
                  v36 = 128;
                }
                else {
                  v36 = 56;
                }
                result = nn_mem_StandardAllocator_Free(*v17 + v36);
                v32 = *(_QWORD*)(v1 + 8);
                v30 = *(_QWORD*)(v1 + 16);
              }
              v37 = v32 + 8 * v35;
              v38 = v30 - (v37 + 8);
              if (v30 != v37 + 8) {
                result = memmove(v37, v37 + 8, v30 - (v37 + 8));
              }
              v30 = v37 + v38;
              *(_QWORD*)(v1 + 16) = v37 + v38;
            }
          }
        LABEL_66:
          v31 += 8;
        } while (v31 != v15);
      }
    }
    if (v14 != nullptr) {
      v39 = 128;
      if (*(_QWORD*)(*v17 + 200LL) == 0) {
        v39 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*v17 + v39);
    }
  }
  *(_BYTE*)(v1 + 60) = 0;
  return result;
}

__int64 TroopMgr_1347760()
{
  __int64 v0;
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_QWORD**)(v0 + 8);
  v2 = *(_QWORD**)(v0 + 16);
  if (v1 == v2) {
    return 0;
  }
  v3 = *(_QWORD**)(v0 + 8);
  while (1) {
    v4 = *v3;
    v5 = *(_QWORD*)(*v3 + 96LL);
    if (v5 != 0 && *(_BYTE*)(v5 + 32) == 1) {
      v6 = *(__int64**)(v4 + 24);
      if (*(__int64**)(v4 + 32) != v6 && (*(_WORD*)(v4 + 544) & 3) != 2) {
        v7 = *v6;
        if (*v6 != 0) {
          break;
        }
      }
    }
  LABEL_3:
    if (++v3 == v2) {
      return 0;
    }
  }
  v8 = *(_QWORD*)(v7 + 120);
  if (v8 != GameRoutine_ae0560()) {
    v9 = v1;
    while (1) {
      v10 = (_QWORD*)*v9;
      if (*(_QWORD*)*v9 == v7 && v10[12] == 0 && v10[69] == 0) {
        break;
      }
      if (++v9 == v2) {
        goto LABEL_3;
      }
    }
  }
  return 1;
}

__int64 TroopMgr_1347860()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(__int64**)(v0 + 8);
  v2 = *(__int64**)(v0 + 16);
  while (v1 != v2) {
    v3 = *v1;
    v4 = *(_QWORD*)(*v1 + 96);
    if (v4 != 0 && *(_BYTE*)(v4 + 32) == 1) {
      v5 = *(__int64**)(v3 + 24);
      if (*(__int64**)(v3 + 32) != v5 && (*(_WORD*)(v3 + 544) & 3) != 2) {
        v6 = *v5;
        if (*v5 != 0 && (unsigned __int8)GameRoutine_13261c0(*v5) == 8) {
          v7 = *(_QWORD*)(v6 + 280);
          if (v7 != 0 &&
              ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7) !=
                   1 ||
               ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v6 + 280) + 112LL))(
                    *(_QWORD*)(v6 + 280)) &
                1) == 0)) {
            v8 = *(_QWORD*)(v6 + 280);
            if (v8 != 0 && (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v8 +
                                                             24LL))(v8) == 4) {
              return v6;
            }
          }
        }
      }
    }
    ++v1;
  }
  return 0;
}

void TroopMgr_13486a0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int16* v3;
  _WORD* v4;
  __int16 v5;

  v0 = *(_QWORD*)(*GameData_212c790 + 8);
  v1 = *(_QWORD*)(v0 + 8);
  v2 = *(_QWORD*)(v0 + 16);
  if (v1 != v2) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v3 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v3 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    do {
      v4 = *(_WORD**)v1;
      if (*(__int16*)(*(_QWORD*)v1 + 642LL) *
                  *(__int16*)(*(_QWORD*)v1 + 640LL) *
                  *(__int16*)(*(_QWORD*)v1 + 644LL) !=
              0 &&
          ((__int64)*(__int16*)(*(_QWORD*)v1 + 642LL) << 24) +
                  ((__int64)*(__int16*)(*(_QWORD*)v1 + 640LL) << 32) +
                  ((__int64)*(__int16*)(*(_QWORD*)v1 + 644LL) << 18) +
                  ((__int64)(__int16)v4[323] << 12) +
                  ((__int64)(__int16)v4[324] << 6) + (__int16)v4[325] <
              (unsigned __int64)(((__int64)v3[1] << 24) + ((__int64)*v3 << 32) +
                                 ((__int64)v3[2] << 18) +
                                 ((__int64)v3[3] << 12) +
                                 ((__int64)v3[4] << 6) + v3[5])) {
        v5 = v4[272];
        if ((v5 & 0x40) == 0) {
          v4[272] = v5 | 0x40;
        }
      }
      v1 += 8;
    } while (v1 != v2);
  }
}

unsigned __int64 TroopMgr_1348ec0()
{
  unsigned __int64 result;
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  _QWORD* v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  _QWORD* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  _BYTE* v12;
  int v13;
  bool v14;
  __int64 v15;
  __int64** v16;
  __int64** v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int16 v23;
  _QWORD v24[4];
  _QWORD* v25;

  result = game_HashString(&GameData_1a8ab96);
  v1 = *GameData_212ca68[0];
  v2 = *(_QWORD*)(*GameData_212ca68[0] + 96);
  if ((v2 & (v2 - 1)) != 0) {
    v3 = result;
    if (result >= v2) {
      v3 = result % v2;
    }
    v4 = *(_QWORD**)(*(_QWORD*)(v1 + 88) + 8 * v3);
    do {
      do {
        v4 = (_QWORD*)*v4;
      } while (v4[1] != result);
    } while (v4[2] != result);
  }
  else {
    v4 = *(_QWORD**)(*(_QWORD*)(v1 + 88) + 8 * ((v2 - 1) & result));
    do {
      do {
        v4 = (_QWORD*)*v4;
      } while (v4[1] != result);
    } while (v4[2] != result);
  }
  v5 = *(__int64***)(v4[3] + 40LL);
  v6 = *v5;
  v7 = v5[1];
  if (*v5 != v7) {
    v8 = (_QWORD*)GameData_212c7b0[0];
    v9 = GameData_212c780;
    v10 = GameData_212c790;
    do {
      v11 = *v6;
      v12 = *(_BYTE**)(*v6 + 48);
      if (v12 == nullptr) {
        goto LABEL_13;
      }
      if (*v12 == 0) {
        goto LABEL_13;
      }
      result = GameSubquestData_125b8e0(*v8);
      if (result == 0) {
        goto LABEL_13;
      }
      v13 = *(unsigned __int8*)(*(_QWORD*)result + 112LL);
      v14 = v13 == 3 || v13 == 0;
      if (v14 && *(_BYTE*)(result + 9) == 2 &&
          *(_BYTE*)(*(_QWORD*)(*v9 + 8) + 208LL) != 1) {
        goto LABEL_13;
      }
      v15 = *(_QWORD*)(*v10 + 8);
      v16 = *(__int64***)(v15 + 8);
      v17 = *(__int64***)(v15 + 16);
      if (v16 == v17) {
        goto LABEL_13;
      }
      while (1) {
        v19 = *v16++;
        v18 = v19;
        if (v19[11] == v11) {
          break;
        }
        if (v16 == v17) {
          goto LABEL_13;
        }
      }
      v20 = *v18;
      v24[0] = GameData_202ceb8;
      v25 = v24;
      v21 = game_gmap_TroopMgr_CountPlayerTroop_1349100(v20, v24);
      result = (unsigned __int64)v25;
      if (v25 == v24) {
        v22 = 32;
      }
      else {
        if (v25 == nullptr) {
          goto LABEL_33;
        }
        v22 = 40;
      }
      result = (*(__int64 (**)(void))(*v25 + v22))();
    LABEL_33:
      if (v21 <= 0) {
        v23 = *((_WORD*)v18 + 272);
        if ((v23 & 0x40) == 0) {
          *((_WORD*)v18 + 272) = v23 | 0x40;
        }
      }
    LABEL_13:
      ++v6;
    } while (v6 != v7);
  }
  return result;
}

__int64 TroopMgr_1349260(unsigned __int8 a1)
{
  int v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  _QWORD v5[2];
  _QWORD v6[4];
  __int64 v7;

  if (game_gmap_GmapClock_instance_ == 0) {
    return 0;
  }
  if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
      0) {
    return 0;
  }
  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  if (v1 == a1) {
    return 0;
  }
  result = game_GetHero();
  if (result != 0) {
    v5[0] = 0;
    v5[1] = result;
    GameRoutine_906320(v6, game_GameModeData_instance_ + 136, v5);
    if (v7 == 0) {
      return 0;
    }
    result = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v7 + 64));
    if (result != 0) {
      v3 = *(_QWORD*)(result + 120);
      v4 = result;
      if (v3 == GameRoutine_ae0560()) {
        return 0;
      }
      else {
        return v4;
      }
    }
  }
  return result;
}

__int64 game_gmap_TroopMgr_RequestEscapeSpecial(__int64 result)
{
  __int64* v1;
  __int64* v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 (*v12)(_QWORD);
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  char* i;
  __int64 v29;
  __int64 v30;
  __int16 v31;
  __int64 v32;
  _QWORD v33[4];
  _QWORD* v34;
  char v35;
  __int64 v36;

  v1 = *(__int64**)(GameData_21c9e80 + 64);
  v2 = *(__int64**)(GameData_21c9e80 + 72);
  if (v1 != v2) {
    v3 = nullptr;
    v4 = nullptr;
    v5 = 0;
    do {
      v6 = *v1;
      v7 = *(__int64**)(*v1 + 24);
      v8 = *v7;
      v9 = v7[1];
      if (v9 != *v7) {
        while (1) {
          if (*(_QWORD*)v8 != 0) {
            v10 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v11 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), v8);
              if (v11 != 0) {
                v12 = *(__int64 (**)(_QWORD))(v11 + 72);
                v13 = *(_QWORD*)(v11 + 80);
                v14 = (_QWORD*)(v11 + (v13 >> 1));
                if ((v13 & 1) != 0) {
                  v12 = *(__int64 (**)(_QWORD))((char*)v12 + *v14);
                }
                result = v12(v14);
              }
              else {
                result = 1;
              }
            }
            if (*(_BYTE*)(v8 + 16) != ((v10 == 0) | result & 1)) {
              break;
            }
          }
          v8 += 24;
          if (v8 == v9) {
            goto LABEL_4;
          }
        }
        result = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v6 + 48));
        if (result != 0) {
          v15 = *(_QWORD*)(v6 + 64);
          if (v15 != 0) {
            v16 = *(_QWORD*)(GameData_21c96e8 + 8);
            v17 = *(_QWORD**)(v16 + 8);
            v18 = *(_QWORD**)(v16 + 16);
            while (v17 != v18) {
              v19 = (_QWORD*)*v17;
              if (*(_QWORD*)*v17 == result && v19[69] == v15) {
                if ((unsigned __int64)v4 < v5) {
                  *(_QWORD*)v4 = v19;
                  v4 += 8;
                }
                else {
                  v20 = (char*)(v4 - v3);
                  v21 = (v4 - v3) >> 3;
                  v22 = v21 + 1;
                  if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
                    GameRoutine_888610_alt1(result);
                  }
                  if ((__int64)(v5 - (_QWORD)v3) >> 2 > v22) {
                    v22 = (__int64)(v5 - (_QWORD)v3) >> 2;
                  }
                  if (v5 - (unsigned __int64)v3 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v23 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v23 = v22;
                  }
                  if (v23 != 0) {
                    if (v23 >> 61 != 0) {
                      GameRoutine_60a210(result);
                    }
                    v24 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0);
                  }
                  else {
                    v24 = 0;
                  }
                  v5 = v24 + 8 * v23;
                  v25 = (char*)(v4 - v3);
                  v26 = (__int64)&v20[v24 + -8 * v21];
                  *(_QWORD*)&v20[v24] = v19;
                  v4 = &v20[v24 + 8];
                  result = memcpy(v26, v3, v25);
                  if (v3 != nullptr) {
                    v27 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v27 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
                  }
                  v3 = (char*)v26;
                }
                break;
              }
              ++v17;
            }
          }
        }
      }
    LABEL_4:
      ++v1;
    } while (v1 != v2);
    if (v3 != v4) {
      for (i = v3; i != v4; i += 8) {
        v29 = *(_QWORD*)i;
        v35 = 0;
        v33[0] = GameData_202d048;
        v33[1] = &v35;
        v33[2] = &v36;
        v34 = v33;
        v36 = v29;
        GameRoutine_ae4560(v33);
        result = (__int64)v34;
        if (v34 == v33) {
          v30 = 32;
        }
        else {
          if (v34 == nullptr) {
            goto LABEL_47;
          }
          v30 = 40;
        }
        result = (*(__int64 (**)(void))(*v34 + v30))();
      LABEL_47:
        if ((v35 & 1) == 0) {
          v31 = *(_WORD*)(v36 + 544);
          if ((v31 & 0x40) == 0) {
            *(_WORD*)(v36 + 544) = v31 | 0x40;
          }
        }
      }
    }
    if (v3 != nullptr) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
    }
  }
  return result;
}

__int64 TroopMgr_1349f40(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(__int64**)(v1 + 8);
  v3 = *(__int64**)(v1 + 16);
  if (v2 != v3) {
    v4 = nullptr;
    v5 = nullptr;
    v6 = 0;
    do {
      v7 = *v2;
      if ((*(_WORD*)(*v2 + 544) & 0x40) != 0) {
        if ((unsigned __int64)v5 < v6) {
          *(_QWORD*)v5 = v7;
          v5 += 8;
        }
        else {
          v8 = (char*)(v5 - v4);
          v9 = (v5 - v4) >> 3;
          v10 = v9 + 1;
          if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
            GameRoutine_888610_alt1(result);
          }
          if ((__int64)(v6 - (_QWORD)v4) >> 2 > v10) {
            v10 = (__int64)(v6 - (_QWORD)v4) >> 2;
          }
          if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL) {
            v11 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v11 = v10;
          }
          if (v11 != 0) {
            if (v11 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v12 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
          }
          else {
            v12 = 0;
          }
          v6 = v12 + 8 * v11;
          v13 = (char*)(v5 - v4);
          v14 = (__int64)&v8[v12 + -8 * v9];
          *(_QWORD*)&v8[v12] = v7;
          v5 = &v8[v12 + 8];
          result = memcpy(v14, v4, v13);
          if (v4 != nullptr) {
            v15 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v15 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
          }
          v4 = (char*)v14;
        }
      }
      ++v2;
    } while (v2 != v3);
    if (v4 != v5) {
      v16 = GameData_21c96e8;
      if (GameData_21c96e8 != 0) {
        v17 = v4;
      LABEL_25:
        v18 = *(_QWORD*)(v16 + 8);
        v20 = *(_QWORD*)(v18 + 8);
        v19 = *(_QWORD*)(v18 + 16);
        if (v19 == v20) {
          goto LABEL_40;
        }
        v21 = (v19 - v20) >> 3;
        v22 = 0;
        while (*(_QWORD*)(v20 + 8 * v22) != *(_QWORD*)v17) {
          if (v21 == ++v22) {
            goto LABEL_40;
          }
        }
        if ((v22 & 0x8000000000000000LL) == 0) {
          v23 = (unsigned int)v22;
          if ((unsigned int)v22 >= v21) {
            GameRoutine_13549e0_alt1(result);
          }
          if (*(_QWORD*)(v20 + 8LL * (unsigned int)v22) != 0) {
            GameRoutine_133cc40(*(_QWORD*)(v20 + 8LL * (unsigned int)v22));
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v24 = 128;
            }
            else {
              v24 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
            v20 = *(_QWORD*)(v18 + 8);
            v19 = *(_QWORD*)(v18 + 16);
          }
          v25 = v20 + 8 * v23;
          v26 = v19 - (v25 + 8);
          if (v19 != v25 + 8) {
            result = memmove(v25, v25 + 8, v19 - (v25 + 8));
          }
          *(_QWORD*)(v18 + 16) = v25 + v26;
        }
      LABEL_40:
        while (1) {
          v17 += 8;
          if (v17 == v5) {
            break;
          }
          v16 = GameData_21c96e8;
          if (GameData_21c96e8 != 0) {
            goto LABEL_25;
          }
        }
      }
    }
    if (v4 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
    }
  }
  return result;
}

__int64 TroopMgr_134a200(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  char* v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  if (a2 != 0) {
    v2 = *(__int64**)(result + 8);
    v3 = *(__int64**)(result + 16);
    v4 = result;
    if (v2 != v3) {
      v6 = nullptr;
      v7 = nullptr;
      v8 = 0;
      do {
        v9 = *v2;
        if (*(_QWORD*)(*v2 + 96) == a2) {
          if ((unsigned __int64)v7 < v8) {
            *(_QWORD*)v7 = v9;
            v7 += 8;
          }
          else {
            v10 = (char*)(v7 - v6);
            v11 = (v7 - v6) >> 3;
            v12 = v11 + 1;
            if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
              GameRoutine_888610_alt1(result);
            }
            if ((__int64)(v8 - (_QWORD)v6) >> 2 > v12) {
              v12 = (__int64)(v8 - (_QWORD)v6) >> 2;
            }
            if (v8 - (unsigned __int64)v6 >= 0x7FFFFFFFFFFFFFF8LL) {
              v13 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v13 = v12;
            }
            if (v13 != 0) {
              if (v13 >> 61 != 0) {
                GameRoutine_60a210(result);
              }
              v14 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
            }
            else {
              v14 = 0;
            }
            v8 = v14 + 8 * v13;
            v15 = (char*)(v7 - v6);
            v16 = (__int64)&v10[v14 + -8 * v11];
            *(_QWORD*)&v10[v14] = v9;
            v7 = &v10[v14 + 8];
            result = memcpy(v16, v6, v15);
            if (v6 != nullptr) {
              v17 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v17 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
            }
            v6 = (char*)v16;
          }
        }
        ++v2;
      } while (v2 != v3);
      if (v6 != v7) {
        v18 = *(_QWORD*)(v4 + 16);
        if (v18 != *(_QWORD*)(v4 + 8)) {
          v19 = v6;
          do {
            v20 = *(_QWORD*)(v4 + 8);
            if (v18 != v20) {
              v21 = (v18 - v20) >> 3;
              v22 = 0;
              while (*(_QWORD*)(v20 + 8 * v22) != *(_QWORD*)v19) {
                if (v21 == ++v22) {
                  goto LABEL_27;
                }
              }
              if ((v22 & 0x8000000000000000LL) == 0) {
                v23 = (unsigned int)v22;
                if ((unsigned int)v22 >= v21) {
                  GameRoutine_13549e0_alt1(result);
                }
                if (*(_QWORD*)(v20 + 8LL * (unsigned int)v22) != 0) {
                  GameRoutine_133cc40(
                      *(_QWORD*)(v20 + 8LL * (unsigned int)v22));
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) != 0) {
                    v24 = 128;
                  }
                  else {
                    v24 = 56;
                  }
                  result = nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
                  v20 = *(_QWORD*)(v4 + 8);
                  v18 = *(_QWORD*)(v4 + 16);
                }
                v25 = v20 + 8 * v23;
                v26 = v18 - (v25 + 8);
                if (v18 != v25 + 8) {
                  result = memmove(v25, v25 + 8, v18 - (v25 + 8));
                }
                v18 = v25 + v26;
                *(_QWORD*)(v4 + 16) = v25 + v26;
              }
            }
          LABEL_27:
            v19 += 8;
          } while (v19 != v7);
        }
      }
      if (v6 != nullptr) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
      }
    }
  }
  return result;
}

__int64 TroopMgr_134a480()
{
  __int64 result;

  if (GameData_21c96e8 != 0) {
    return TroopMgr_134a4a0_alt1(*(_QWORD*)(GameData_21c96e8 + 8));
  }
  return result;
}

__int64 TroopMgr_134a4a0(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v1 = *(__int64**)(result + 8);
  v2 = *(__int64**)(result + 16);
  if (v1 != v2) {
    v3 = result;
    v4 = nullptr;
    v5 = nullptr;
    v6 = 0;
    do {
      v7 = *v1;
      if ((*(_BYTE*)(*v1 + 546) & 8) != 0) {
        if ((unsigned __int64)v5 < v6) {
          *(_QWORD*)v5 = v7;
          v5 += 8;
        }
        else {
          v8 = (char*)(v5 - v4);
          v9 = (v5 - v4) >> 3;
          v10 = v9 + 1;
          if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
            GameRoutine_888610_alt1(result);
          }
          if ((__int64)(v6 - (_QWORD)v4) >> 2 > v10) {
            v10 = (__int64)(v6 - (_QWORD)v4) >> 2;
          }
          if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL) {
            v11 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v11 = v10;
          }
          if (v11 != 0) {
            if (v11 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v12 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
          }
          else {
            v12 = 0;
          }
          v6 = v12 + 8 * v11;
          v13 = (char*)(v5 - v4);
          v14 = (__int64)&v8[v12 + -8 * v9];
          *(_QWORD*)&v8[v12] = v7;
          v5 = &v8[v12 + 8];
          result = memcpy(v14, v4, v13);
          if (v4 != nullptr) {
            v15 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v15 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
          }
          v4 = (char*)v14;
        }
      }
      ++v1;
    } while (v1 != v2);
    if (v4 != v5) {
      v16 = *(_QWORD*)(v3 + 16);
      if (v16 != *(_QWORD*)(v3 + 8)) {
        v17 = v4;
        do {
          v18 = *(_QWORD*)(v3 + 8);
          if (v16 != v18) {
            v19 = (v16 - v18) >> 3;
            v20 = 0;
            while (*(_QWORD*)(v18 + 8 * v20) != *(_QWORD*)v17) {
              if (v19 == ++v20) {
                goto LABEL_26;
              }
            }
            if ((v20 & 0x8000000000000000LL) == 0) {
              v21 = (unsigned int)v20;
              if ((unsigned int)v20 >= v19) {
                GameRoutine_13549e0_alt1(result);
              }
              if (*(_QWORD*)(v18 + 8LL * (unsigned int)v20) != 0) {
                GameRoutine_133cc40(*(_QWORD*)(v18 + 8LL * (unsigned int)v20));
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v22 = 128;
                }
                else {
                  v22 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
                v18 = *(_QWORD*)(v3 + 8);
                v16 = *(_QWORD*)(v3 + 16);
              }
              v23 = v18 + 8 * v21;
              v24 = v16 - (v23 + 8);
              if (v16 != v23 + 8) {
                result = memmove(v23, v23 + 8, v16 - (v23 + 8));
              }
              v16 = v23 + v24;
              *(_QWORD*)(v3 + 16) = v23 + v24;
            }
          }
        LABEL_26:
          v17 += 8;
        } while (v17 != v5);
      }
    }
    if (v4 != nullptr) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
    }
  }
  return result;
}

void TroopMgr_134a720()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(__int64**)(v0 + 8);
  v2 = *(__int64**)(v0 + 16);
  if (v1 != v2) {
    v3 = nullptr;
    v4 = nullptr;
    v5 = 0;
    v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v7 = *v1;
      v8 = UnitActor_819400(*v1 + 112);
      v9 = *(_QWORD*)(v7 + 96);
      *(_QWORD*)(v7 + 120) = 0;
      if (v9 == 0) {
        v10 = *(_QWORD*)(v7 + 552);
        v11 = v10 != 0 && *(_QWORD*)(v7 + 104) == 0;
        if (v11 &&
            *(__int16*)(v7 + 642) * *(__int16*)(v7 + 640) *
                    *(__int16*)(v7 + 644) ==
                0 &&
            *(_QWORD*)(v10 + 352) == 0) {
          if ((unsigned __int64)v4 < v5) {
            *(_QWORD*)v4 = v7;
            v4 += 8;
          }
          else {
            v12 = (char*)(v4 - v3);
            v13 = (v4 - v3) >> 3;
            v14 = v13 + 1;
            if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
              GameRoutine_888610_alt1(v8);
            }
            if ((__int64)(v5 - (_QWORD)v3) >> 2 > v14) {
              v14 = (__int64)(v5 - (_QWORD)v3) >> 2;
            }
            if (v5 - (unsigned __int64)v3 >= 0x7FFFFFFFFFFFFFF8LL) {
              v15 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v15 = v14;
            }
            if (v15 != 0) {
              if (v15 >> 61 != 0) {
                GameRoutine_60a210(v8);
              }
              v16 = fw_memory_HeapManager_Allocate(*v6, 8 * v15, 16, 0);
            }
            else {
              v16 = 0;
            }
            v5 = v16 + 8 * v15;
            v17 = (char*)(v4 - v3);
            v18 = (__int64)&v12[v16 + -8 * v13];
            *(_QWORD*)&v12[v16] = v7;
            v4 = &v12[v16 + 8];
            v8 = memcpy(v18, v3, v17);
            if (v3 != nullptr) {
              v19 = 128;
              if (*(_QWORD*)(*v6 + 200LL) == 0) {
                v19 = 56;
              }
              v8 = nn_mem_StandardAllocator_Free(*v6 + v19);
            }
            v3 = (char*)v18;
          }
        }
      }
      ++v1;
    } while (v1 != v2);
    if (v3 != v4 && *(_QWORD*)(*(_QWORD*)(GameData_21c96e8 + 8) + 16LL) !=
                        *(_QWORD*)(*(_QWORD*)(GameData_21c96e8 + 8) + 8LL)) {
      v20 = v3;
      do {
        v21 = *(_QWORD*)(GameData_21c96e8 + 8);
        v23 = *(_QWORD*)(v21 + 8);
        v22 = *(_QWORD*)(v21 + 16);
        if (v22 != v23) {
          v24 = (v22 - v23) >> 3;
          v25 = 0;
          while (*(_QWORD*)(v23 + 8 * v25) != *(_QWORD*)v20) {
            if (v24 == ++v25) {
              goto LABEL_33;
            }
          }
          if ((v25 & 0x8000000000000000LL) == 0) {
            v26 = (unsigned int)v25;
            if ((unsigned int)v25 >= v24) {
              GameRoutine_13549e0_alt1(v8);
            }
            if (*(_QWORD*)(v23 + 8LL * (unsigned int)v25) != 0) {
              GameRoutine_133cc40(*(_QWORD*)(v23 + 8LL * (unsigned int)v25));
              if (*(_QWORD*)(*v6 + 200LL) != 0) {
                v27 = 128;
              }
              else {
                v27 = 56;
              }
              v8 = nn_mem_StandardAllocator_Free(*v6 + v27);
              v23 = *(_QWORD*)(v21 + 8);
              v22 = *(_QWORD*)(v21 + 16);
            }
            v28 = v23 + 8 * v26;
            v29 = v22 - (v28 + 8);
            if (v22 != v28 + 8) {
              v8 = memmove(v28, v28 + 8, v22 - (v28 + 8));
            }
            *(_QWORD*)(v21 + 16) = v28 + v29;
          }
        }
      LABEL_33:
        v20 += 8;
      } while (v20 != v4);
    }
    if (v3 != nullptr) {
      v30 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v30);
    }
  }
}

__int64 TroopMgr_134a9e0()
{
  __int64 v0;
  __int64 result;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;

  if (GameData_21c96e8 == 0) {
    goto LABEL_7;
  }
  v3[0] = GameData_202d0c8;
  v4 = v3;
  TroopMgr_13460a0((__int64)v3);
  if (v4 == v3) {
    v0 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_7;
    }
    v0 = 40;
  }
  (*(void (**)(void))(*v4 + v0))();

LABEL_7:
  result = GameRoutine_9728b0();
  if (GameData_21c96e8 != 0) {
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    *(_DWORD*)(v2 + 56) = -1;
    *(_QWORD*)(v2 + 40) = *(_QWORD*)(v2 + 32);
  }
  return result;
}

__int64 TroopMgr_134aa80()
{
  __int64 result;

  if (GameData_21c96e8 != 0) {
    return GameRoutine_134aaa0(*(_QWORD*)(GameData_21c96e8 + 8));
  }
  return result;
}

__int64 TroopMgr_134b0e0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(__int64**)(v2 + 8);
  v4 = *(__int64**)(v2 + 16);
  if (v3 != v4) {
    v5 = result;
    do {
      v6 = *v3++;
      v7 = *(_QWORD*)(v5 + 32);
      v8 = v6;
      if (v7 == 0) {
        GameRoutine_60a310(0, a2);
      }
      result =
          (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v7 + 48LL))(v7, &v8);
    } while (v3 != v4);
  }
  return result;
}

__int64 TroopMgr_134b560(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 result;
  _DWORD* v6;
  _DWORD* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  int v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[2];

  v18[1] = &GameData_1ade186;
  v18[0] = game_HashString(&GameData_1ade186);
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v18);
    if (result != 0 && *(int*)(result + 32) >= 1) {
      v6 = *(_DWORD**)(a1 + 32);
      v7 = *(_DWORD**)(a1 + 40);
      while (v6 != v7) {
        if ((*v6 & 0x80000000) == 0) {
          v8 = *(__int64**)(a1 + 8);
          v9 = *(__int64**)(a1 + 16);
          if (v8 != v9) {
            while (1) {
              v11 = *v8++;
              v10 = v11;
              if (*(_DWORD*)(v11 + 84) == *v6) {
                break;
              }
              if (v8 == v9) {
                goto LABEL_5;
              }
            }
            v12 = *(_QWORD*)(a2 + 32);
            v18[0] = v10;
            if (v12 == 0) {
              goto LABEL_28;
            }
            result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v12 + 48LL))(
                v12, v18);
          }
        }
      LABEL_5:
        ++v6;
      }
      return result;
    }
  }
  v13 = *(__int64**)(a1 + 8);
  v14 = *(__int64**)(a1 + 16);
  v15 = *(_DWORD*)(a1 + 56);
  if (v15 < 0) {
    for (; v13 != v14; ++v13) {
      v16 = *v13;
      if (*(_QWORD*)(*v13 + 96) == 0 && *(_QWORD*)(v16 + 552) == 0) {
        goto LABEL_21;
      }
    }
  }
  else {
    while (v13 != v14) {
      v17 = *v13++;
      v16 = v17;
      if (*(_DWORD*)(v17 + 84) == v15) {
        goto LABEL_21;
      }
    }
  }
  v16 = 0;

LABEL_21:
  v12 = *(_QWORD*)(a2 + 32);
  v18[0] = v16;
  if (v12 == 0) {
  LABEL_28:
    GameRoutine_60a310(v12, v4);
  }
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v12 + 48LL))(v12, v18);
}

__int64 TroopMgr_134e920(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(__int64**)(v1 + 8);
  v3 = *(__int64**)(v1 + 16);
  if (v2 != v3) {
    v4 = nullptr;
    v5 = nullptr;
    v6 = 0;
    do {
      v7 = *v2;
      if ((*(_WORD*)(*v2 + 544) & 0x200) != 0) {
        if ((unsigned __int64)v5 < v6) {
          *(_QWORD*)v5 = v7;
          v5 += 8;
        }
        else {
          v8 = (char*)(v5 - v4);
          v9 = (v5 - v4) >> 3;
          v10 = v9 + 1;
          if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
            GameRoutine_888610_alt1(result);
          }
          if ((__int64)(v6 - (_QWORD)v4) >> 2 > v10) {
            v10 = (__int64)(v6 - (_QWORD)v4) >> 2;
          }
          if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL) {
            v11 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v11 = v10;
          }
          if (v11 != 0) {
            if (v11 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v12 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
          }
          else {
            v12 = 0;
          }
          v6 = v12 + 8 * v11;
          v13 = (char*)(v5 - v4);
          v14 = (__int64)&v8[v12 + -8 * v9];
          *(_QWORD*)&v8[v12] = v7;
          v5 = &v8[v12 + 8];
          result = memcpy(v14, v4, v13);
          if (v4 != nullptr) {
            v15 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v15 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
          }
          v4 = (char*)v14;
        }
      }
      ++v2;
    } while (v2 != v3);
    if (v4 != v5) {
      v16 = GameData_21c96e8;
      if (GameData_21c96e8 != 0) {
        v17 = v4;
      LABEL_25:
        v18 = *(_QWORD*)(v16 + 8);
        v20 = *(_QWORD*)(v18 + 8);
        v19 = *(_QWORD*)(v18 + 16);
        if (v19 == v20) {
          goto LABEL_40;
        }
        v21 = (v19 - v20) >> 3;
        v22 = 0;
        while (*(_QWORD*)(v20 + 8 * v22) != *(_QWORD*)v17) {
          if (v21 == ++v22) {
            goto LABEL_40;
          }
        }
        if ((v22 & 0x8000000000000000LL) == 0) {
          v23 = (unsigned int)v22;
          if ((unsigned int)v22 >= v21) {
            GameRoutine_13549e0_alt1(result);
          }
          if (*(_QWORD*)(v20 + 8LL * (unsigned int)v22) != 0) {
            GameRoutine_133cc40(*(_QWORD*)(v20 + 8LL * (unsigned int)v22));
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v24 = 128;
            }
            else {
              v24 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
            v20 = *(_QWORD*)(v18 + 8);
            v19 = *(_QWORD*)(v18 + 16);
          }
          v25 = v20 + 8 * v23;
          v26 = v19 - (v25 + 8);
          if (v19 != v25 + 8) {
            result = memmove(v25, v25 + 8, v19 - (v25 + 8));
          }
          *(_QWORD*)(v18 + 16) = v25 + v26;
        }
      LABEL_40:
        while (1) {
          v17 += 8;
          if (v17 == v5) {
            break;
          }
          v16 = GameData_21c96e8;
          if (GameData_21c96e8 != 0) {
            goto LABEL_25;
          }
        }
      }
    }
    if (v4 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
    }
  }
  return result;
}

__int64 TroopMgr_134ebe0(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(__int64**)(v1 + 8);
  v3 = *(__int64**)(v1 + 16);
  if (v2 != v3) {
    v4 = nullptr;
    v5 = nullptr;
    v6 = 0;
    do {
      v7 = *v2;
      if ((*(_WORD*)(*v2 + 544) & 0x700) != 0) {
        if ((unsigned __int64)v5 < v6) {
          *(_QWORD*)v5 = v7;
          v5 += 8;
        }
        else {
          v8 = (char*)(v5 - v4);
          v9 = (v5 - v4) >> 3;
          v10 = v9 + 1;
          if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
            GameRoutine_888610_alt1(result);
          }
          if ((__int64)(v6 - (_QWORD)v4) >> 2 > v10) {
            v10 = (__int64)(v6 - (_QWORD)v4) >> 2;
          }
          if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL) {
            v11 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v11 = v10;
          }
          if (v11 != 0) {
            if (v11 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v12 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
          }
          else {
            v12 = 0;
          }
          v6 = v12 + 8 * v11;
          v13 = (char*)(v5 - v4);
          v14 = (__int64)&v8[v12 + -8 * v9];
          *(_QWORD*)&v8[v12] = v7;
          v5 = &v8[v12 + 8];
          result = memcpy(v14, v4, v13);
          if (v4 != nullptr) {
            v15 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v15 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
          }
          v4 = (char*)v14;
        }
      }
      ++v2;
    } while (v2 != v3);
    if (v4 != v5) {
      v16 = GameData_21c96e8;
      if (GameData_21c96e8 != 0) {
        v17 = v4;
      LABEL_25:
        v18 = *(_QWORD*)(v16 + 8);
        v20 = *(_QWORD*)(v18 + 8);
        v19 = *(_QWORD*)(v18 + 16);
        if (v19 == v20) {
          goto LABEL_40;
        }
        v21 = (v19 - v20) >> 3;
        v22 = 0;
        while (*(_QWORD*)(v20 + 8 * v22) != *(_QWORD*)v17) {
          if (v21 == ++v22) {
            goto LABEL_40;
          }
        }
        if ((v22 & 0x8000000000000000LL) == 0) {
          v23 = (unsigned int)v22;
          if ((unsigned int)v22 >= v21) {
            GameRoutine_13549e0_alt1(result);
          }
          if (*(_QWORD*)(v20 + 8LL * (unsigned int)v22) != 0) {
            GameRoutine_133cc40(*(_QWORD*)(v20 + 8LL * (unsigned int)v22));
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v24 = 128;
            }
            else {
              v24 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
            v20 = *(_QWORD*)(v18 + 8);
            v19 = *(_QWORD*)(v18 + 16);
          }
          v25 = v20 + 8 * v23;
          v26 = v19 - (v25 + 8);
          if (v19 != v25 + 8) {
            result = memmove(v25, v25 + 8, v19 - (v25 + 8));
          }
          *(_QWORD*)(v18 + 16) = v25 + v26;
        }
      LABEL_40:
        while (1) {
          v17 += 8;
          if (v17 == v5) {
            break;
          }
          v16 = GameData_21c96e8;
          if (GameData_21c96e8 != 0) {
            goto LABEL_25;
          }
        }
      }
    }
    if (v4 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
    }
  }
  return result;
}

__int64 game_gmap_TroopMgr_OnUpdateChapter(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v9[0] = GameData_202db48;
    v10 = v9;
    TroopMgr_13460a0((__int64)v9);
    a1 = (__int64)v10;
    if (v10 == v9) {
      v1 = 32;
    }
    else {
      if (v10 == nullptr) {
        goto LABEL_8;
      }
      v1 = 40;
    }
    a1 = (*(__int64 (**)(void))(*v10 + v1))();
  }
LABEL_8:
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if (v3 < 0) {
    if (v4 == v5) {
      return TroopMgr_134ebe0(a1);
    }
    while (1) {
      v6 = *v4;
      if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
        break;
      }
      if (++v4 == v5) {
        return TroopMgr_134ebe0(a1);
      }
    }
  }
  else {
    if (v4 == v5) {
      return TroopMgr_134ebe0(a1);
    }
    while (1) {
      v7 = *v4++;
      v6 = v7;
      if (*(_DWORD*)(v7 + 84) == v3) {
        break;
      }
      if (v4 == v5) {
        return TroopMgr_134ebe0(a1);
      }
    }
  }
  if (*(_BYTE*)(v6 + 512) != 0) {
    *(_BYTE*)(v6 + 512) = 0;
    if (GameData_21f1618 != 0) {
      a1 = GameRoutine_995200(v6 + 112);
    }
  }
  return TroopMgr_134ebe0(a1);
}

__int64 game_gmap_TroopMgr_Impl_OnDeserialize_closure_Invoke(__int64 a1,
                                                             __int64 a2)
{
  __int64 v2;
  int v4;

  v2 = *(_QWORD*)(a1 + 8) + 32LL;
  v4 = *(_DWORD*)(*(_QWORD*)a2 + 84LL);
  return GameRoutine_6e5900(v2, &v4);
}

__int64 game_gmap_TroopMgr_Impl_EndMovePlayer_closure_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  bool v6;

  v2 = *a2;
  result = TroopMgr_1341640(*a2);
  if (*(_QWORD*)(v2 + 32) == *(_QWORD*)(v2 + 24) ||
      (v4 = *(_QWORD*)(v2 + 96), v5 = *(_QWORD*)(v2 + 552), (v4 | v5) != 0) &&
          (v4 != 0 ||
           (v5 != 0 ? (v6 = *(_QWORD*)(v2 + 104) == 0) : (v6 = false),
            !v6 ||
                *(__int16*)(v2 + 642) * *(__int16*)(v2 + 640) *
                        *(__int16*)(v2 + 644) !=
                    0 ||
                *(_QWORD*)(v5 + 352) != 0)) &&
          (*(_WORD*)(v2 + 544) & 3) == 2) {
    if (*(_BYTE*)(*(_QWORD*)v2 + 113LL) == 1 && *(_BYTE*)(v2 + 512) == 2) {
      *(_BYTE*)(v2 + 512) = 0;
      if (GameData_21f1618 != 0) {
        return GameRoutine_995200(v2 + 112);
      }
    }
  }
  return result;
}

__int64 TroopMgr_1354a00(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  char* v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  if (a2 != 0) {
    v2 = *(__int64**)(result + 8);
    v3 = *(__int64**)(result + 16);
    v4 = result;
    if (v2 != v3) {
      v6 = nullptr;
      v7 = nullptr;
      v8 = 0;
      do {
        v9 = *v2;
        if (*(_QWORD*)(*v2 + 88) == a2) {
          if ((unsigned __int64)v7 < v8) {
            *(_QWORD*)v7 = v9;
            v7 += 8;
          }
          else {
            v10 = (char*)(v7 - v6);
            v11 = (v7 - v6) >> 3;
            v12 = v11 + 1;
            if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
              GameRoutine_888610_alt1(result);
            }
            if ((__int64)(v8 - (_QWORD)v6) >> 2 > v12) {
              v12 = (__int64)(v8 - (_QWORD)v6) >> 2;
            }
            if (v8 - (unsigned __int64)v6 >= 0x7FFFFFFFFFFFFFF8LL) {
              v13 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v13 = v12;
            }
            if (v13 != 0) {
              if (v13 >> 61 != 0) {
                GameRoutine_60a210(result);
              }
              v14 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
            }
            else {
              v14 = 0;
            }
            v8 = v14 + 8 * v13;
            v15 = (char*)(v7 - v6);
            v16 = (__int64)&v10[v14 + -8 * v11];
            *(_QWORD*)&v10[v14] = v9;
            v7 = &v10[v14 + 8];
            result = memcpy(v16, v6, v15);
            if (v6 != nullptr) {
              v17 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v17 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
            }
            v6 = (char*)v16;
          }
        }
        ++v2;
      } while (v2 != v3);
      if (v6 != v7) {
        v18 = *(_QWORD*)(v4 + 16);
        if (v18 != *(_QWORD*)(v4 + 8)) {
          v19 = v6;
          do {
            v20 = *(_QWORD*)(v4 + 8);
            if (v18 != v20) {
              v21 = (v18 - v20) >> 3;
              v22 = 0;
              while (*(_QWORD*)(v20 + 8 * v22) != *(_QWORD*)v19) {
                if (v21 == ++v22) {
                  goto LABEL_27;
                }
              }
              if ((v22 & 0x8000000000000000LL) == 0) {
                v23 = (unsigned int)v22;
                if ((unsigned int)v22 >= v21) {
                  GameRoutine_13549e0_alt1(result);
                }
                if (*(_QWORD*)(v20 + 8LL * (unsigned int)v22) != 0) {
                  GameRoutine_133cc40(
                      *(_QWORD*)(v20 + 8LL * (unsigned int)v22));
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) != 0) {
                    v24 = 128;
                  }
                  else {
                    v24 = 56;
                  }
                  result = nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
                  v20 = *(_QWORD*)(v4 + 8);
                  v18 = *(_QWORD*)(v4 + 16);
                }
                v25 = v20 + 8 * v23;
                v26 = v18 - (v25 + 8);
                if (v18 != v25 + 8) {
                  result = memmove(v25, v25 + 8, v18 - (v25 + 8));
                }
                v18 = v25 + v26;
                *(_QWORD*)(v4 + 16) = v25 + v26;
              }
            }
          LABEL_27:
            v19 += 8;
          } while (v19 != v7);
        }
      }
      if (v6 != nullptr) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
      }
    }
  }
  return result;
}

char* game_gmap_TroopMgr_Impl_UpdateCorps_closure_Invoke_1354fc0(__int64 a1,
                                                                 int* a2)
{
  int v2;
  _QWORD* v3;
  char* result;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  int v8;

  v2 = *a2;
  v3 = *(_QWORD**)(a1 + 8);
  v8 = v2;
  if (v2 < 0) {
    return TroopMgr_1353fb0(v3 + 4, (char*)v3[4], (char*)&v8);
  }
  v5 = (__int64*)v3[1];
  v6 = (__int64*)v3[2];
  result = (char*)(v3 + 1);
  if (v5 == v6) {
  LABEL_5:
    *(_DWORD*)(TroopMgr_1351170((__int64*)result) + 84) = v2;
    return TroopMgr_1353fb0(v3 + 4, (char*)v3[4], (char*)&v8);
  }
  while (1) {
    v7 = *v5++;
    if (*(_DWORD*)(v7 + 84) == v2) {
      return result;
    }
    if (v5 == v6) {
      goto LABEL_5;
    }
  }
}

__int64 game_gmap_TroopMgr_GetAroundTroop_lambda0_Invoke(__int64 result,
                                                         __int64* a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *a2;
  if ((*(_WORD*)(*a2 + 544) & 0x10) == 0) {
    v3 = *(__int64**)(result + 8);
    v5 = (_QWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 3) + 1;
      if (v9 >> 61 != 0) {
        GameRoutine_888610_alt1(result);
      }
      v10 = v4 - v7;
      v11 = fw_memory_g_heap_manager_ptr;
      if (v10 >> 2 > v9) {
        v9 = v10 >> 2;
      }
      if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
        v12 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v12 = v9;
      }
      if (v12 != 0) {
        if (v12 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 8 * v12;
      v15 = v13 + v8 - 8 * (v8 >> 3);
      *(_QWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 8;
      result = memcpy(v15, v7, v8);
      *v3 = v15;
      v3[1] = v6;
      v3[2] = v14;
      if (v7 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
      }
    }
    else {
      *v5 = v2;
      v6 = (__int64)(v5 + 1);
    }
    v3[1] = v6;
  }
  return result;
}

bool game_gmap_TroopMgr_TryDisposOtherClan_lambda0_Invoke(__int64 a1,
                                                          __int64* a2)
{
  __int64 v2;

  v2 = *a2;
  return *(_QWORD*)(*a2 + 552) == *(_QWORD*)(a1 + 8) &&
         (*(_BYTE*)(v2 + 546) & 8) == 0 && (*(_WORD*)(v2 + 544) & 0x40) == 0;
}

__int64 game_gmap_TroopMgr_RequestEscapeSpecial_lambda0_Invoke(__int64 result,
                                                               __int64 a2)
{
  _QWORD* v2;

  v2 = **(_QWORD***)(result + 16);
  if (*(_QWORD*)(*(_QWORD*)a2 + 48LL) == *(_QWORD*)(*v2 + 120LL) &&
      *(_QWORD*)(*(_QWORD*)a2 + 64LL) == v2[69]) {
    **(_BYTE**)(result + 8) = 1;
  }
  return result;
}

__int64 game_gmap_TroopMgr_GetCorpsList_lambda0_Invoke(__int64 result,
                                                       __int64* a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *a2;
  if ((*(_DWORD*)(*a2 + 84) & 0x80000000) == 0) {
    v3 = *(__int64**)(result + 8);
    v5 = (_QWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 3) + 1;
      if (v9 >> 61 != 0) {
        GameRoutine_888610_alt1(result);
      }
      v10 = v4 - v7;
      v11 = fw_memory_g_heap_manager_ptr;
      if (v10 >> 2 > v9) {
        v9 = v10 >> 2;
      }
      if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
        v12 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v12 = v9;
      }
      if (v12 != 0) {
        if (v12 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 8 * v12;
      v15 = v13 + v8 - 8 * (v8 >> 3);
      *(_QWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 8;
      result = memcpy(v15, v7, v8);
      *v3 = v15;
      v3[1] = v6;
      v3[2] = v14;
      if (v7 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
      }
    }
    else {
      *v5 = v2;
      v6 = (__int64)(v5 + 1);
    }
    v3[1] = v6;
  }
  return result;
}

__int64 game_gmap_TroopMgr_GetEncountEnemyList_lambda0_Invoke(__int64 result,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 96);
  if (v3 != 0 && *(_BYTE*)(v3 + 32) == 1 &&
      ((**(_BYTE**)(result + 16) & 1) == 0 && *(_BYTE*)(v3 + 129) == 0 &&
           (game_GameModeData_instance_ == 0 ||
            *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) &&
           (*(_WORD*)(v2 + 544) & 0x100) == 0 &&
           ((v16 = *(_QWORD*)(v2 + 88)) == 0 ||
            (v17 = *(_BYTE**)(v16 + 48)) == nullptr || *v17 == 0) ||
       *(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) - **(_QWORD**)(result + 8) <=
           8u)) {
    v4 = *(__int64**)(result + 24);
    v6 = (_QWORD*)v4[1];
    v5 = v4[2];
    if ((unsigned __int64)v6 >= v5) {
      v8 = *v4;
      v9 = (__int64)v6 - *v4;
      v10 = (v9 >> 3) + 1;
      if (v10 >> 61 != 0) {
        GameRoutine_888610_alt1(result);
      }
      v11 = v5 - v8;
      v12 = fw_memory_g_heap_manager_ptr;
      if (v11 >> 2 > v10) {
        v10 = v11 >> 2;
      }
      if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
        v13 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v13 = v10;
      }
      if (v13 != 0) {
        if (v13 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v14 = result;
        v15 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
      }
      else {
        v14 = result;
        v15 = 0;
      }
      v18 = v15 + 8 * v13;
      v19 = v15 + v9 - 8 * (v9 >> 3);
      *(_QWORD*)(v15 + v9) = v2;
      v7 = v15 + v9 + 8;
      memcpy(v19, v8, v9);
      *v4 = v19;
      v4[1] = v7;
      v4[2] = v18;
      if (v8 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v20);
      }
      result = v14;
    }
    else {
      *v6 = v2;
      v7 = (__int64)(v6 + 1);
    }
    v4[1] = v7;
    v21 = *(_QWORD*)(v2 + 96);
    if (v21 != 0 && *(_BYTE*)(v21 + 129) != 0 ||
        game_GameModeData_instance_ != 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 1 ||
        (*(_WORD*)(v2 + 544) & 0x100) != 0 ||
        (v22 = *(_QWORD*)(v2 + 88)) != 0 &&
            (v23 = *(_BYTE**)(v22 + 48)) != nullptr && *v23 != 0) {
      **(_BYTE**)(result + 32) = 1;
    }
  }
  return result;
}

__int64 game_gmap_TroopMgr_GetEncountEnemyList_lambda1_Invoke(__int64 result,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _BYTE* v24;

  v2 = *(_QWORD*)(*(_QWORD*)(result + 8) + 8LL);
  if (*(_BYTE*)(v2 + 176) == 3 && (*(_BYTE*)(v2 + 112) & 1) == 0) {
    v3 = *a2;
    if ((*(_WORD*)(*a2 + 544) & 0x100) == 0) {
      v4 = *(_QWORD*)(v3 + 96);
      if (v4 != 0 && *(_BYTE*)(v4 + 32) == 1 &&
          ((**(_BYTE**)(result + 24) & 1) == 0 && *(_BYTE*)(v4 + 129) == 0 &&
               (game_GameModeData_instance_ == 0 ||
                *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) &&
               ((v17 = *(_QWORD*)(v3 + 88)) == 0 ||
                (v18 = *(_BYTE**)(v17 + 48)) == nullptr || *v18 == 0) ||
           *(_QWORD*)(*(_QWORD*)(result + 16) + 8LL) -
                   **(_QWORD**)(result + 16) <=
               8u)) {
        v5 = *(__int64**)(result + 32);
        v7 = (_QWORD*)v5[1];
        v6 = v5[2];
        if ((unsigned __int64)v7 >= v6) {
          v9 = *v5;
          v10 = (__int64)v7 - *v5;
          v11 = (v10 >> 3) + 1;
          if (v11 >> 61 != 0) {
            GameRoutine_888610_alt1(result);
          }
          v12 = v6 - v9;
          v13 = fw_memory_g_heap_manager_ptr;
          if (v12 >> 2 > v11) {
            v11 = v12 >> 2;
          }
          if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
            v14 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v14 = v11;
          }
          if (v14 != 0) {
            if (v14 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v15 = result;
            v16 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
          }
          else {
            v15 = result;
            v16 = 0;
          }
          v19 = v16 + 8 * v14;
          v20 = v16 + v10 - 8 * (v10 >> 3);
          *(_QWORD*)(v16 + v10) = v3;
          v8 = v16 + v10 + 8;
          memcpy(v20, v9, v10);
          *v5 = v20;
          v5[1] = v8;
          v5[2] = v19;
          if (v9 != 0) {
            v21 = 128;
            if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
              v21 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v21);
          }
          result = v15;
        }
        else {
          *v7 = v3;
          v8 = (__int64)(v7 + 1);
        }
        v5[1] = v8;
        v22 = *(_QWORD*)(v3 + 96);
        if (v22 != 0 && *(_BYTE*)(v22 + 129) != 0 ||
            game_GameModeData_instance_ != 0 &&
                *(_DWORD*)(game_GameModeData_instance_ + 60) == 1 ||
            (*(_WORD*)(v3 + 544) & 0x100) != 0 ||
            (v23 = *(_QWORD*)(v3 + 88)) != 0 &&
                (v24 = *(_BYTE**)(v23 + 48)) != nullptr && *v24 != 0) {
          **(_BYTE**)(result + 40) = 1;
        }
      }
    }
  }
  return result;
}

bool game_gmap_TroopMgr_HasFixedPlayer_lambda0_Invoke(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(*(_QWORD*)a2 + 544LL) & 0x10) != 0;
}

bool game_gmap_TroopMgr_HasNotFixedPlayer_lambda0_Invoke(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(*(_QWORD*)a2 + 544LL) & 0x10) == 0;
}

__int64 game_gmap_TroopMgr_OnUpdateChapter_lambda0_Invoke(__int64 a1,
                                                          __int64* a2)
{
  __int64 v2;
  _DWORD* v3;
  __int64 result;

  v2 = *a2;
  v3 = (_DWORD*)game_gmap_SpotMgr_GetCurrentSpot(a1);
  result = GameRoutine_133f780(v2, v3, 1);
  if (*(_BYTE*)(v2 + 512) != 0) {
    *(_BYTE*)(v2 + 512) = 0;
    if (GameData_21f1618 != 0) {
      return GameRoutine_995200(v2 + 112);
    }
  }
  return result;
}

__int64 game_gmap_TroopMgr_DisposResonanceEnemy_lambda0_Invoke(__int64 result,
                                                               __int64** a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  _QWORD v8[2];

  if ((**(_BYTE**)(result + 8) & 1) == 0) {
    v2 = (*a2)[12];
    if (v2 != 0 && *(_BYTE*)(v2 + 32) == 1) {
      v3 = **a2;
      v4 = *(_QWORD*)(result + 16);
      v5 = result;
      v8[1] = &GameData_1ad7cf2;
      v8[0] = game_HashString(&GameData_1ad7cf2);
      if (game_GameModeData_instance_ != 0 &&
          (v6 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v8)) != 0) {
        v7 = *(_DWORD*)(v6 + 32);
      }
      else {
        v7 = 0;
      }
      result = GameRoutine_1332940(v3, 0, v4, v7);
      if ((result & 1) != 0) {
        **(_BYTE**)(v5 + 8) = 1;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
