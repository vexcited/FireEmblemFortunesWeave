#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_715440(_QWORD);
__int64 Impl_13261c0(_QWORD);
__int64 game_gmap_MakeFarmMenu_CreateBind(_QWORD, _QWORD);
__int64 game_gmap_SpotAttachmentFarm_GetGrowthData(_QWORD);
__int64 game_gmap_SpotMgr_CountSpotAttachment(_QWORD);
extern __int64* GameData_212c790;
extern __int64 GameData_21c96e8;
extern __int64 game_GameModeData_instance_;
extern char* game_menu_g_mid_cause_shortage_material_ptr[2];
__int64 MakeFarmItem_Unknown25(_QWORD* a1);
__int64 MakeFarmItem_Unknown70(_WORD* a1, __int64 a2);

__int64 MakeFarmItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = a1[1];
  }
  v4 = *(_QWORD*)(GameData_21c96e8 + 8);
  v5 = *(__int64**)(v4 + 8);
  v6 = *(__int64**)(v4 + 16);
  v7 = *(_DWORD*)(v4 + 56);
  if (v7 < 0) {
    for (; v5 != v6; ++v5) {
      v8 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v8 + 552) == 0) {
        goto LABEL_13;
      }
    }
  }
  else {
    while (v5 != v6) {
      v9 = *v5++;
      v8 = v9;
      if (*(_DWORD*)(v9 + 84) == v7) {
        goto LABEL_13;
      }
    }
  }
  v8 = 0;
LABEL_13:
  v11 = *(_DWORD*)(v8 + 540);
  v12 = __OFSUB__(v11, 1);
  v13 = (unsigned int)(v11 - 1);
  if (((v13 & 0x80000000) != 0LL) == v12) {
    v14 = *(_QWORD*)(v8 + 24);
    v15 = *(_QWORD*)(v8 + 32) - v14;
    v16 = v14 + 8LL * (unsigned int)v13;
    if (v13 < v15 >> 3) {
      v8 = v16;
    }
  }
  game_gmap_MakeFarmMenu_CreateBind(v3, *(_QWORD*)v8);
  return 9;
}

__int64 MakeFarmItem_Unknown70(_WORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  bool v9;
  int v10;
  __int64 v11;
  unsigned __int8* v12;
  int v13;
  int v14;
  __int64 v15;
  int v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  bool v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 result;
  int v28;
  __int64 v29;
  unsigned int v30;

  v4 = (*(__int64 (**)(_WORD*))(*(_QWORD*)a1 + 592LL))(a1);
  v5 = GameRoutine_60a020(a2 + 8, v4);
  if ((a1[42] & 0x80) != 0) {
    v5 = GameRoutine_60a020(
        a2 + 32, *(_QWORD*)game_menu_g_mid_cause_shortage_material_ptr[0]);
  }
  v6 = game_gmap_SpotAttachmentFarm_GetGrowthData(v5);
  v7 = v6;
  if (game_GameModeData_instance_ == 0 ||
      ((v8 = *(unsigned __int8*)(v6 + 88),
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3)
           ? (v9 = v8 == 0)
           : (v9 = true),
       v9)) {
    v10 = GameRoutine_715440(v6);
    v11 = *(unsigned __int16*)(v7 + 56);
    if (*(_WORD*)(v7 + 56) != 0 &&
        (v12 = *(unsigned __int8**)(v7 + 64), v10 >= *v12)) {
      v13 = v11 - 1;
      v29 = 1;
      while (v11 != v29) {
        v30 = v12[v29++];
        if (v10 < v30) {
          v13 = v29 - 2;
          break;
        }
      }
    }
    else {
      v13 = 0;
    }
    v8 = *(unsigned __int8*)(*(_QWORD*)(v7 + 80) + v13);
  }
  v14 = game_gmap_SpotMgr_CountSpotAttachment(1);
  v15 = *(_QWORD*)(*GameData_212c790 + 8);
  v16 = *(_DWORD*)(v15 + 56);
  v17 = *(__int64**)(v15 + 8);
  v18 = *(__int64**)(v15 + 16);
  if ((v16 & 0x80000000) == 0) {
    while (v17 != v18) {
      v20 = *v17++;
      v19 = v20;
      if (*(_DWORD*)(v20 + 84) == v16) {
        goto LABEL_20;
      }
    }
  LABEL_19:
    v19 = 0;
    goto LABEL_20;
  }
  if (v17 == v18) {
    goto LABEL_19;
  }
  while (1) {
    v19 = *v17;
    if (*(_QWORD*)(*v17 + 96) == 0 && *(_QWORD*)(v19 + 552) == 0) {
      break;
    }
    if (++v17 == v18) {
      goto LABEL_19;
    }
  }
LABEL_20:
  v21 = *(_DWORD*)(v19 + 540);
  v22 = __OFSUB__(v21, 1);
  v23 = (unsigned int)(v21 - 1);
  if (((v23 & 0x80000000) != 0LL) == v22) {
    v24 = *(_QWORD*)(v19 + 24);
    v25 = *(_QWORD*)(v19 + 32) - v24;
    v26 = v24 + 8LL * (unsigned int)v23;
    if (v23 < v25 >> 3) {
      v19 = v26;
    }
  }
  result = Impl_13261c0(*(_QWORD*)v19);
  if ((unsigned __int8)result == 14) {
    v28 = v8 - v14 + 1;
  }
  else {
    v28 = v8 - v14;
  }
  *(_DWORD*)(a2 + 72) = v28;
  return result;
}

#pragma GCC visibility pop
