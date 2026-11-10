#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14d2660(_QWORD, _QWORD);
__int64 GameRoutine_1515810(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1517ac0(_QWORD, _QWORD);
__int64 GameRoutine_65f240(_QWORD, _QWORD);
__int64 GameRoutine_65f710(_QWORD);
__int64 GameRoutine_70e880(_QWORD, _QWORD);
__int64 GameRoutine_70ea50(_QWORD, _QWORD);
__int64 GameRoutine_714b20(void);
__int64 GameRoutine_889be0(_QWORD);
__int64 GameRoutine_ae07e0(_QWORD, _QWORD);
__int64 GmapExploreInfo_135d3c0(_QWORD, _QWORD, _QWORD);
__int64 Impl_13261c0(__int64);
__int64 Impl_1326560(__int64);
__int64 Impl_14def00(_QWORD);
__int64 Impl_1514580(_QWORD, _QWORD);
__int64 Impl_1521320(_QWORD, _QWORD);
__int64 SpotMgr_132ffa0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_212cf80[5];
extern __int64 GameData_2131858[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_21316e0[15];
extern __int64* GameData_2131820[5];
extern __int64* GameData_2131828[4];
extern __int64* GameData_2131830[3];
extern __int64* GameData_2131838[2];
extern char GameData_1a9f09e;
__int64 Spot_132abc0(__int64 a1);
__int64 Spot_132ac40(__int64 a1, char a2);
__int64 Spot_132ad00(__int64 a1, __int64 a2);
__int64 Spot_132adf0(__int64 a1);
__int64 Spot_132b0a0(__int64 a1);
__int64 Spot_132b100(__int64 a1, char a2);
__int64 Spot_132b230(__int64 a1, __int64 a2);
__int64 Spot_132b480(__int64 a1, __int64* a2, int a3);
__int64 Spot_132c920(__int64 result);
__int64 game_gmap_Spot_CanPopTroop_lambda0_Invoke(__int64 a1, __int64* a2);

__int64 Spot_132abc0(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 280);
  if (result != 0) {
    return ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)result + 24LL))(
                result) != 1 ||
            ((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 280) + 112LL))(
                 *(_QWORD*)(a1 + 280)) &
             1) == 0) &&
           *(_QWORD*)(a1 + 280) != 0;
  }
  return result;
}

__int64 Spot_132ac40(__int64 a1, char a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;

  if ((a2 & 1) != 0) {
    result = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      return result;
    }
    result = GameRoutine_714b20();
    if (result == 0) {
      return result;
    }
    v4 = result;
    while (*(_BYTE*)(v4 + 33) != 18) {
      if ((GameRoutine_889be0(v4) & 1) != 0 || *(_BYTE*)(v4 + 32) != 0) {
        v4 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 16LL);
        if (v4 != 0) {
          continue;
        }
      }
      return 0;
    }
  }
  return game_GameModeData_instance_ != 0 &&
         (v5 = *(_QWORD*)(game_GameModeData_instance_ + 24)) != 0 &&
         *(_BYTE*)(v5 + 152) == 4 &&
         *(_QWORD*)(v5 + 168) == *(_QWORD*)(a1 + 120);
}

__int64 Spot_132ad00(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  _BYTE v10[12];

  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      96, 16, 0);
  v5 = v4;
  if (a2 != 0) {
    result = GameRoutine_1515810(v4, a1, a2);
  }
  else {
    v7 = GameData_21316e0[0];
    *(_DWORD*)(v4 + 16) = 0;
    *(_QWORD*)v4 = v7 + 2;
    *(_QWORD*)(v4 + 8) = 0;
    if (game_gmap_GmapClock_instance_ != 0) {
      v8 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v8 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    GameRoutine_70e880(v8, 6);
    result = GameRoutine_70ea50(v8, v10);
    *(_QWORD*)(v5 + 32) = a1;
    *(_BYTE*)(v5 + 42) = 0;
    *(_WORD*)(v5 + 40) = 256;
    v9 = GameData_2131820[0];
    *(_DWORD*)(v5 + 44) = 0;
    *(_DWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_QWORD*)(v5 + 80) = 0;
    *(_BYTE*)(v5 + 88) = 0;
    *(_QWORD*)v5 = v9 + 2;
  }
  *(_QWORD*)(a1 + 280) = v5;
  return result;
}

__int64 Spot_132adf0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  _BYTE v13[12];

  v2 = *(_QWORD*)(a1 + 280);
  if (v2 == 0 ||
      (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v2 + 24LL))(v2) == 1 &&
          ((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 280) + 112LL))(
               *(_QWORD*)(a1 + 280)) &
           1) != 0 ||
      (v3 = *(_QWORD*)(a1 + 280)) == 0) {
    result = Impl_13261c0(a1);
    switch ((unsigned __int8)result) {
    case 9u:
      v5 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
      v11 = GameData_21316e0[0];
      *(_DWORD*)(v5 + 16) = 0;
      *(_QWORD*)v5 = v11 + 2;
      *(_QWORD*)(v5 + 8) = 0;
      if (game_gmap_GmapClock_instance_ != 0) {
        v12 = game_gmap_GmapClock_instance_ + 8;
      }
      else {
        v12 = game_gmap_GmapClock_kDefaultTime_ptr;
      }
      GameRoutine_70e880(v12, 6);
      result = GameRoutine_70ea50(v12, v13);
      *(_QWORD*)(v5 + 32) = a1;
      *(_BYTE*)(v5 + 42) = 0;
      *(_QWORD*)(v5 + 48) = 0;
      *(_QWORD*)(v5 + 56) = 0;
      *(_QWORD*)(v5 + 64) = 0;
      *(_DWORD*)(v5 + 72) = 0;
      *(_WORD*)(v5 + 40) = 256;
      v8 = GameData_2131830[0];
      break;
    case 8u:
      v5 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
      v9 = GameData_21316e0[0];
      *(_DWORD*)(v5 + 16) = 0;
      *(_QWORD*)v5 = v9 + 2;
      *(_QWORD*)(v5 + 8) = 0;
      if (game_gmap_GmapClock_instance_ != 0) {
        v10 = game_gmap_GmapClock_instance_ + 8;
      }
      else {
        v10 = game_gmap_GmapClock_kDefaultTime_ptr;
      }
      GameRoutine_70e880(v10, 6);
      result = GameRoutine_70ea50(v10, v13);
      *(_QWORD*)(v5 + 32) = a1;
      *(_BYTE*)(v5 + 42) = 0;
      *(_QWORD*)(v5 + 48) = 0;
      *(_QWORD*)(v5 + 56) = 0;
      *(_QWORD*)(v5 + 64) = 0;
      *(_DWORD*)(v5 + 72) = 0;
      *(_WORD*)(v5 + 40) = 256;
      v8 = GameData_2131838[0];
      break;
    case 5u:
      v5 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
      v6 = GameData_21316e0[0];
      *(_DWORD*)(v5 + 16) = 0;
      *(_QWORD*)v5 = v6 + 2;
      *(_QWORD*)(v5 + 8) = 0;
      if (game_gmap_GmapClock_instance_ != 0) {
        v7 = game_gmap_GmapClock_instance_ + 8;
      }
      else {
        v7 = game_gmap_GmapClock_kDefaultTime_ptr;
      }
      GameRoutine_70e880(v7, 6);
      result = GameRoutine_70ea50(v7, v13);
      *(_QWORD*)(v5 + 32) = a1;
      *(_BYTE*)(v5 + 42) = 0;
      *(_QWORD*)(v5 + 48) = 0;
      *(_QWORD*)(v5 + 56) = 0;
      *(_QWORD*)(v5 + 64) = 0;
      *(_DWORD*)(v5 + 72) = 0;
      *(_WORD*)(v5 + 40) = 256;
      v8 = GameData_2131828[0];
      break;
    default:
      return result;
    }
    *(_QWORD*)(a1 + 280) = v5;
    *(_QWORD*)v5 = v8 + 2;
  }
  else {
    result =
        (*(__int64 (**)(_QWORD))(*(_QWORD*)v3 + 24LL))(*(_QWORD*)(a1 + 280));
    if ((unsigned __int8)result == 5) {
      return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v3 + 160LL))(v3, 0);
    }
  }
  return result;
}

__int64 Spot_132b0a0(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 280);
  if (result != 0) {
    if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)result + 24LL))(result) ==
            1 &&
        ((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 280) + 112LL))(
             *(_QWORD*)(a1 + 280)) &
         1) != 0) {
      return 0;
    }
    else {
      return *(_QWORD*)(a1 + 280);
    }
  }
  return result;
}

__int64 Spot_132b100(__int64 a1, char a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  int v9;
  __int64 v11;
  int v12;
  _DWORD v14[2];
  char* v15;

  result = *(_QWORD*)(a1 + 280);
  if (result != 0) {
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)result + 280LL))(result, a2 & 1);
    result = *(_QWORD*)(a1 + 280);
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      *(_QWORD*)(a1 + 280) = 0;
    }
  }
  else {
    v4 = 0;
    v5 = GameData_212cf80[0];
    v6 = *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL);
    v7 = GameData_212c780;
    while (1) {
      v8 = *(_QWORD*)(v6 + 48);
      if (*(_BYTE*)(v8 + v4) != 0) {
        v9 = *(_DWORD*)(v8 + v4 + 4);
        if (v9 != 0 && *v7 != 0) {
          v15 = &GameData_1a9f09e;
          v14[0] = v9;
          v14[1] = 0;
          result = SpotMgr_132ffa0(v14);
          if (result == a1) {
            break;
          }
        }
      }
      v4 += 8;
      if (v4 == 2400) {
        return result;
      }
    }
    v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v5 + 8LL) + 48LL) + v4;
    v12 = *(_DWORD*)(v11 + 4);
    if (v12 != 0 && *v7 != 0) {
      v15 = &GameData_1a9f09e;
      v14[0] = v12;
      v14[1] = 0;
      result = SpotMgr_132ffa0(v14);
      if (result != 0) {
        *(_DWORD*)(v11 + 4) = 0;
      }
    }
  }
  return result;
}

__int64 Spot_132b230(__int64 a1, __int64 a2)
{
  __int64 (**v2)(__int64, int*);
  __int64 v5;
  char v6;
  __int64 v7;
  char v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v33;
  int v35;
  int v36;
  int v37;

  v2 = *(__int64 (***)(__int64, int*))a2;
  v35 = 0;
  if (((*v2)(a2, &v35) & 1) != 0) {
    v5 = *(int*)(a2 + 20);
    v6 = *(_BYTE*)(a1 + 176);
    *(_DWORD*)(a2 + 20) = v5 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v6;
    v7 = *(int*)(a2 + 20);
    v8 = *(_BYTE*)(a1 + 177);
    *(_DWORD*)(a2 + 20) = v7 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v8;
    v9 = *(int*)(a2 + 20);
    v10 = *(_BYTE*)(a1 + 178);
    *(_DWORD*)(a2 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v10;
    v11 = *(int*)(a2 + 20);
    v12 = *(_QWORD*)(a1 + 152);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    v13 = *(_QWORD*)(a2 + 8);
    if (v12 != 0) {
      *(_BYTE*)(v13 + v11) = 1;
      v14 = *(int*)(a2 + 20);
      v15 = *(_QWORD*)(a1 + 152);
      *(_DWORD*)(a2 + 20) = v14 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = 4;
      v36 = 0;
      if (((**(__int64 (***)(__int64, int*))a2)(a2, &v36) & 1) != 0) {
        v16 = *(__int64**)(v15 + 80);
        if (v16 != nullptr) {
          v17 = *v16;
        }
        else {
          v17 = 0;
        }
        GameRoutine_65f240(a2, v17);
        v18 = *(int*)(a2 + 20);
        v19 = *(_DWORD*)(v15 + 64);
        *(_DWORD*)(a2 + 20) = v18 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = v19;
        v20 = *(__int64**)(v15 + 72);
        if (v20 != nullptr) {
          v21 = *v20;
        }
        else {
          v21 = 0;
        }
        GameRoutine_65f240(a2, v21);
      }
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
    else {
      *(_BYTE*)(v13 + v11) = 0;
    }
    v22 = *(int*)(a2 + 20);
    v23 = *(_QWORD*)(a1 + 160);
    *(_DWORD*)(a2 + 20) = v22 + 1;
    v24 = *(_QWORD*)(a2 + 8);
    if (v23 != 0) {
      *(_BYTE*)(v24 + v22) = 1;
      v37 = 0;
      v25 = *(_QWORD*)(a1 + 160);
      if (((**(__int64 (***)(__int64, int*))a2)(a2, &v37) & 1) != 0) {
        v26 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v26 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = 1;
        v27 = *(__int64**)(v25 + 8);
        if (v27 != nullptr) {
          v28 = *v27;
        }
        else {
          v28 = 0;
        }
        GameRoutine_65f240(a2, v28);
      }
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
    else {
      *(_BYTE*)(v24 + v22) = 0;
    }
    v29 = *(int*)(a2 + 20);
    v30 = *(_QWORD*)(a1 + 280);
    *(_DWORD*)(a2 + 20) = v29 + 1;
    v31 = *(_QWORD*)(a2 + 8);
    if (v30 != 0) {
      *(_BYTE*)(v31 + v29) = 1;
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 280) + 288LL))(
          *(_QWORD*)(a1 + 280), a2);
    }
    else {
      *(_BYTE*)(v31 + v29) = 0;
    }
    v32 = *(int*)(a2 + 20);
    v33 = *(_BYTE*)(a1 + 116);
    *(_DWORD*)(a2 + 20) = v32 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32) = v33;
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
}

__int64 Spot_132b480(__int64 a1, __int64* a2, int a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  bool v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v49;
  int v50;
  int v51;
  _DWORD v52[3];

  v3 = *a2;
  v52[0] = 0;
  if (((*(__int64 (**)(__int64*, _DWORD*))(v3 + 16))(a2, v52) & 1) == 0) {
    return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
  }
  v8 = *((int*)a2 + 5);
  *((_DWORD*)a2 + 5) = v8 + 1;
  v9 = *(unsigned __int8*)(a2[1] + v8);
  if (*(unsigned __int8*)(a1 + 176) != v9) {
    v10 = *(_QWORD*)(a1 + 120);
    v11 = v9 == 1 || v10 == 0;
    if (v11 || (*(_WORD*)(v10 + 258) & 0x80) == 0) {
      *(_BYTE*)(a1 + 176) = v9;
      if (v9 == 2) {
        *(_BYTE*)(a1 + 177) = 3;
      }
      v12 = v9 == 1 || v10 == 0;
      if (!v12 && *(_QWORD*)GameRoutine_ae07e0(v10, v7) != 0) {
        game_VariableManager_SetFlag();
      }
    }
  }
  v13 = *((int*)a2 + 5);
  *((_DWORD*)a2 + 5) = v13 + 1;
  *(_BYTE*)(a1 + 177) = *(_BYTE*)(a2[1] + v13);
  v14 = *((int*)a2 + 5);
  *((_DWORD*)a2 + 5) = v14 + 1;
  *(_BYTE*)(a1 + 178) = *(_BYTE*)(a2[1] + v14);
  v15 = *((_DWORD*)a2 + 5);
  v16 = a2[1];
  if (a3 <= 19) {
    *((_DWORD*)a2 + 5) = v15 + 1;
    if (*(_BYTE*)(v16 + v15) != 0) {
      v17 = *(_QWORD*)(a1 + 144);
      if (v17 == 0) {
        v24 = *a2;
        v52[0] = 0;
        (*(void (**)(__int64*, _DWORD*))(v24 + 16))(a2, v52);
        (*(void (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
        if (a3 < 15) {
          goto LABEL_34;
        }
        goto LABEL_21;
      }
      GmapExploreInfo_135d3c0(v17, a2, (unsigned int)a3);
    }
    if (a3 < 15) {
      goto LABEL_34;
    }
  LABEL_21:
    v15 = *((_DWORD*)a2 + 5);
    v16 = a2[1];
  }
  v18 = v15 + 1LL;
  *((_DWORD*)a2 + 5) = v18;
  if (*(_BYTE*)(v16 + v15) != 1) {
    goto LABEL_25;
  }
  v19 = *(_QWORD*)(a1 + 152);
  if (v19 != 0) {
    Impl_1514580(v19, a2);
    goto LABEL_25;
  }
  v22 = v15 + 2LL;
  *((_DWORD*)a2 + 5) = v15 + 2;
  if ((unsigned int)a3 < 0x13) {
    v49 = v15 + 3;
    v50 = *(unsigned __int8*)(v16 + v18);
    *((_DWORD*)a2 + 5) = v49;
    v51 = *(unsigned __int8*)(v16 + v22);
    if (v51 != 0) {
      v49 += 4 * v51;
      *((_DWORD*)a2 + 5) = v49;
    }
    if (v50 != 0) {
      *((_DWORD*)a2 + 5) = v49 + 8;
      if (v50 != 1) {
        *((_DWORD*)a2 + 5) = v49 + 9;
        GameRoutine_65f710(a2);
      }
    }
  LABEL_25:
    if ((unsigned int)a3 < 0x10) {
      goto LABEL_44;
    }
    goto LABEL_26;
  }
  v23 = *a2;
  v52[0] = 0;
  (*(void (**)(__int64*, _DWORD*))(v23 + 16))(a2, v52);
  (*(void (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
LABEL_26:
  v20 = *((int*)a2 + 5);
  *((_DWORD*)a2 + 5) = v20 + 1;
  if (*(_BYTE*)(a2[1] + v20) == 1) {
    v21 = *(_QWORD*)(a1 + 160);
    if (v21 != 0) {
      Impl_1521320(v21, a2);
    }
    else {
      v25 = *a2;
      v52[0] = 0;
      (*(void (**)(__int64*, _DWORD*))(v25 + 16))(a2, v52);
      (*(void (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
    }
  }
LABEL_34:
  if ((a3 & 0xFFFFFFFE) == 0x12) {
    v26 = *((int*)a2 + 5);
    *((_DWORD*)a2 + 5) = v26 + 1;
    if (*(_BYTE*)(a2[1] + v26) != 0) {
      v27 = *(_QWORD**)(a1 + 168);
      if (v27 != nullptr) {
        v28 = *a2;
        v52[0] = 0;
        if (((*(__int64 (**)(__int64*, _DWORD*))(v28 + 16))(a2, v52) & 1) !=
            0) {
          v29 = *((int*)a2 + 5);
          v30 = a2[1];
          *((_DWORD*)a2 + 5) = v29 + 2;
          if (*(_BYTE*)(v30 + v29 + 1) != 0) {
            Impl_14def00(*v27);
          }
        }
      }
      else {
        v31 = *a2;
        v52[0] = 0;
        (*(void (**)(__int64*, _DWORD*))(v31 + 16))(a2, v52);
      }
      (*(void (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
    }
  }
  else if (a3 <= 12) {
    return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
  }
LABEL_44:
  v32 = *((int*)a2 + 5);
  v33 = a2[1];
  *((_DWORD*)a2 + 5) = v32 + 1;
  if (*(_BYTE*)(v33 + v32) == 0) {
    goto LABEL_69;
  }
  *((_DWORD*)a2 + 5) = v32 + 2;
  v34 = *(unsigned __int8*)(v33 + v32 + 1);
  if (v34 > 2) {
    switch (v34) {
    case 3u:
      v35 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
      GameRoutine_1517ac0(v35, a1);
      break;
    case 4u:
      Spot_132adf0(a1);
      goto LABEL_63;
    case 5u:
      v35 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
      v36 = GameData_21316e0[0];
      *(_DWORD*)(v35 + 16) = 0;
      *(_QWORD*)v35 = v36 + 2;
      *(_QWORD*)(v35 + 8) = 0;
      if (game_gmap_GmapClock_instance_ != 0) {
        v37 = game_gmap_GmapClock_instance_ + 8;
      }
      else {
        v37 = game_gmap_GmapClock_kDefaultTime_ptr;
      }
      GameRoutine_70e880(v37, 6);
      GameRoutine_70ea50(v37, v52);
      *(_QWORD*)(v35 + 32) = a1;
      *(_BYTE*)(v35 + 42) = 0;
      *(_WORD*)(v35 + 40) = 256;
      v38 = GameData_2131858[0];
      *(_DWORD*)(v35 + 44) = 0;
      *(_QWORD*)v35 = v38 + 16;
      *(_QWORD*)(v35 + 48) = Impl_1326560(a1);
      break;
    default:
      goto LABEL_63;
    }
    goto LABEL_62;
  }
  if (*(_BYTE*)(v33 + v32 + 1) == 0) {
    v35 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         56, 16, 0);
    GameRoutine_14d2660(v35, a1);
  LABEL_62:
    *(_QWORD*)(a1 + 280) = v35;
    goto LABEL_63;
  }
  if (v34 == 1) {
    v39 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         96, 16, 0);
    v40 = GameData_21316e0[0];
    *(_DWORD*)(v39 + 16) = 0;
    *(_QWORD*)v39 = v40 + 2;
    *(_QWORD*)(v39 + 8) = 0;
    if (game_gmap_GmapClock_instance_ != 0) {
      v41 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v41 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    GameRoutine_70e880(v41, 6);
    GameRoutine_70ea50(v41, v52);
    *(_QWORD*)(v39 + 32) = a1;
    *(_BYTE*)(v39 + 42) = 0;
    *(_WORD*)(v39 + 40) = 256;
    v42 = GameData_2131820[0];
    *(_DWORD*)(v39 + 44) = 0;
    *(_DWORD*)(v39 + 48) = 0;
    *(_QWORD*)(v39 + 56) = 0;
    *(_QWORD*)(v39 + 64) = 0;
    *(_QWORD*)(v39 + 72) = 0;
    *(_QWORD*)(v39 + 80) = 0;
    *(_BYTE*)(v39 + 88) = 0;
    *(_QWORD*)(a1 + 280) = v39;
    *(_QWORD*)v39 = v42 + 2;
  }
LABEL_63:
  v43 = *(_QWORD*)(a1 + 280);
  if (v43 != 0) {
    v44 = (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v43 + 24LL))(v43);
    v45 = *(_QWORD*)(a1 + 280);
    if (v44 != 1) {
      goto LABEL_67;
    }
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v45 + 112LL))(v45) & 1) == 0) {
      v45 = *(_QWORD*)(a1 + 280);
    LABEL_67:
      if (v45 != 0) {
        v46 = *((int*)a2 + 5);
        *((_DWORD*)a2 + 5) = v46 + 1;
        (*(void (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v45 + 296LL))(
            v45, a2, *(unsigned __int8*)(a2[1] + v46));
      }
    }
  }
LABEL_69:
  if ((unsigned int)a3 >= 0x11) {
    v47 = *((int*)a2 + 5);
    *((_DWORD*)a2 + 5) = v47 + 1;
    *(_BYTE*)(a1 + 116) = *(_BYTE*)(a2[1] + v47) != 0;
  }
  return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
}

__int64 Spot_132c920(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* i;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = *(_QWORD*)(result + 40);
  v2 = (__int64*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(result + 48) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v4 + v5);
  }
  for (i = (_QWORD*)v2[2]; i != nullptr;
       result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7)) {
    v8 = i;
    i = (_QWORD*)*i;
    if ((v8[2] & 1) != 0 && v8[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v7 = 128;
    }
    else {
      v7 = 56;
    }
  }
  v10 = *v2;
  *v2 = 0;
  if (v10 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
  }
  return result;
}

__int64 game_gmap_Spot_CanPopTroop_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;

  if (*(_BYTE*)(a1 + 8) != 1) {
    return 1;
  }
  v2 = *a2;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  v6 = *(__int64**)(v3 + 16);
  if ((v4 & 0x80000000) == 0) {
    if (v5 == v6) {
      v7 = 0;
    }
    else {
      while (1) {
        v8 = *v5++;
        v7 = v8;
        if (*(_DWORD*)(v8 + 84) == v4) {
          break;
        }
        if (v5 == v6) {
          return v2 != 0;
        }
      }
    }
    return v7 != v2;
  }
  if (v5 != v6) {
    while (1) {
      v7 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
        break;
      }
      if (++v5 == v6) {
        return v2 != 0;
      }
    }
    return v7 != v2;
  }
  return v2 != 0;
}

#pragma GCC visibility pop
