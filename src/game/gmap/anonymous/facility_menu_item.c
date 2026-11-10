#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16a3b20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 game_1489320(_QWORD);
extern __int64 (*GameData_2028178[])();
extern __int64 GameData_21c96e8;
__int64 game_gmap_anonymous_FacilityMenuItem_ACall(__int64 a1);
__int64 GameRoutine_1328d60(_QWORD);
__int64 GameRoutine_1334ec0(_QWORD);
__int64 GameRoutine_133f460(_QWORD);
__int64 GameRoutine_133f9e0(_QWORD, _QWORD);
__int64 GameRoutine_175b880(_QWORD);
__int64 GameVariable_828dc0(_QWORD, _QWORD, _QWORD);
__int64 SpotMgr_1333f20(_QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1ad7c10;
extern __int64* GameData_212d728[2];
extern __int64 game_GameModeData_instance_;
__int64 game_gmap_anonymous_FacilityMenuItem_ACall_closure_Invoke(__int64 a1);

__int64 game_gmap_anonymous_FacilityMenuItem_ACall(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  int v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _BYTE v34[32];
  _BYTE* v35;
  _QWORD v36[4];
  _QWORD* v37;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v35 = nullptr;
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if (v3 < 0) {
    if (v4 == v5) {
      goto LABEL_26;
    }
    v10 = v4;
    while (1) {
      v7 = *v10;
      if (*(_QWORD*)(*v10 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
        break;
      }
      if (++v10 == v5) {
        goto LABEL_20;
      }
    }
  }
  else {
    if (v4 == v5) {
      goto LABEL_26;
    }
    v6 = v4;
    while (1) {
      v8 = *v6++;
      v7 = v8;
      if (*(_DWORD*)(v8 + 84) == v3) {
        break;
      }
      if (v6 == v5) {
        goto LABEL_20;
      }
    }
  }
  v36[2] = a1;
  v36[0] = GameData_2028178;
  v36[1] = v7;
  v37 = v36;
  GameRoutine_654050(v36, v34);
  if (v37 == v36) {
    v11 = 32;
    goto LABEL_18;
  }
  if (v37 != nullptr) {
    v11 = 40;
  LABEL_18:
    (*(void (**)(__int64))(*v37 + v11))((__int64)v37);
  }
  v12 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v12 + 56);
  v4 = *(__int64**)(v12 + 8);
  v5 = *(__int64**)(v12 + 16);
LABEL_20:
  if ((v3 & 0x80000000) == 0) {
    while (v4 != v5) {
      v14 = *v4++;
      v13 = v14;
      if (*(_DWORD*)(v14 + 84) == v3) {
        goto LABEL_27;
      }
    }
  LABEL_26:
    v13 = 0;
    goto LABEL_27;
  }
  if (v4 == v5) {
    goto LABEL_26;
  }
  while (1) {
    v13 = *v4;
    if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v13 + 552) == 0) {
      break;
    }
    if (++v4 == v5) {
      goto LABEL_26;
    }
  }
LABEL_27:
  v15 = *(_DWORD*)(v13 + 540);
  v16 = __OFSUB__(v15, 1);
  v17 = (unsigned int)(v15 - 1);
  if (((v17 & 0x80000000) != 0LL) == v16) {
    v18 = *(_QWORD*)(v13 + 24);
    v19 = *(_QWORD*)(v13 + 32) - v18;
    v20 = v18 + 8LL * (unsigned int)v17;
    if (v17 < v19 >> 3) {
      v13 = v20;
    }
  }
  if ((**(_BYTE**)v13 & 1) != 0) {
    v21 = *(_QWORD*)(*(_QWORD*)v13 + 16LL);
  }
  else {
    v21 = *(_QWORD*)v13 + 1LL;
  }
  game_1489320(v21);
  v22 = *(_QWORD*)(GameData_21c96e8 + 8);
  v23 = *(_DWORD*)(v22 + 56);
  v24 = *(__int64**)(v22 + 8);
  v25 = *(__int64**)(v22 + 16);
  if ((v23 & 0x80000000) == 0) {
    while (v24 != v25) {
      v27 = *v24++;
      v26 = v27;
      if (*(_DWORD*)(v27 + 84) == v23) {
        goto LABEL_44;
      }
    }
  LABEL_43:
    v26 = 0;
    goto LABEL_44;
  }
  if (v24 == v25) {
    goto LABEL_43;
  }
  while (1) {
    v26 = *v24;
    if (*(_QWORD*)(*v24 + 96) == 0 && *(_QWORD*)(v26 + 552) == 0) {
      break;
    }
    if (++v24 == v25) {
      goto LABEL_43;
    }
  }
LABEL_44:
  v28 = *(_DWORD*)(v26 + 540);
  v16 = __OFSUB__(v28, 1);
  v29 = (unsigned int)(v28 - 1);
  if (((v29 & 0x80000000) != 0LL) == v16) {
    v30 = *(_QWORD*)(v26 + 24);
    v31 = *(_QWORD*)(v26 + 32) - v30;
    v32 = v30 + 8LL * (unsigned int)v29;
    if (v29 < v31 >> 3) {
      v26 = v32;
    }
  }
  GameRoutine_16a3b20(a1, *(_QWORD*)v26, v34);
  if (v35 == v34) {
    v33 = 32;
    goto LABEL_55;
  }
  if (v35 != nullptr) {
    v33 = 40;
  LABEL_55:
    (*(void (**)(__int64))(*(_QWORD*)v35 + v33))((__int64)v35);
  }
  return 10;
}

__int64 game_gmap_anonymous_FacilityMenuItem_ACall_closure_Invoke(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  int v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  bool v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD v25[2];

  v4 = a1 + 8;
  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v4 + 8);
  if ((*(_WORD*)(v2 + 544) & 0x80) == 0) {
    v25[1] = &GameData_1ad7c10;
    v25[0] = game_HashString(&GameData_1ad7c10);
    if (game_GameModeData_instance_ != 0) {
      GameVariable_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48), v25, 1);
    }
    v2 = *(_QWORD*)(a1 + 8);
  }
  v5 = *(_QWORD*)(v3 + 8);
  if (*(_QWORD*)(v5 + 152) != 0) {
    v6 = *(_QWORD*)(v5 + 152);
  }
  else {
    v6 = *(_QWORD*)(v3 + 8);
  }
  GameRoutine_133f9e0(v2, v6);
  v7 = *(_QWORD*)(a1 + 8);
  v8 = *(__int64**)(v7 + 24);
  v9 = *(__int64**)(v7 + 32);
  if (v8 != v9) {
    do {
      v10 = *v8++;
      SpotMgr_1333f20(v10);
    } while (v8 != v9);
    v7 = *(_QWORD*)(a1 + 8);
  }
  GameRoutine_1334ec0(v7);
  GameRoutine_133f460(*(_QWORD*)(a1 + 8));
  v11 = GameData_212d728[0];
  GameRoutine_175b880(*(_QWORD*)(*GameData_212d728[0] + 8) + 5800LL);
  *(_BYTE*)(*(_QWORD*)(*v11 + 8) + 5835LL) = 1;
  v12 = *(_QWORD*)(GameData_21c96e8 + 8);
  v13 = *(_DWORD*)(v12 + 56);
  v14 = *(__int64**)(v12 + 8);
  v15 = *(__int64**)(v12 + 16);
  if ((v13 & 0x80000000) == 0) {
    while (v14 != v15) {
      v17 = *v14++;
      v16 = v17;
      if (*(_DWORD*)(v17 + 84) == v13) {
        goto LABEL_18;
      }
    }
  LABEL_17:
    v16 = 0;
    goto LABEL_18;
  }
  if (v14 == v15) {
    goto LABEL_17;
  }
  while (1) {
    v16 = *v14;
    if (*(_QWORD*)(*v14 + 96) == 0 && *(_QWORD*)(v16 + 552) == 0) {
      break;
    }
    if (++v14 == v15) {
      goto LABEL_17;
    }
  }
LABEL_18:
  v18 = *(_DWORD*)(v16 + 540);
  v19 = __OFSUB__(v18, 1);
  v20 = (unsigned int)(v18 - 1);
  if (((v20 & 0x80000000) != 0LL) == v19) {
    v21 = *(_QWORD*)(v16 + 24);
    v22 = *(_QWORD*)(v16 + 32) - v21;
    v23 = v21 + 8LL * (unsigned int)v20;
    if (v20 < v22 >> 3) {
      v16 = v23;
    }
  }
  return GameRoutine_1328d60(*(_QWORD*)v16);
}

#pragma GCC visibility pop
