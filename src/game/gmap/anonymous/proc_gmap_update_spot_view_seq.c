#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* GameData_212c780;
extern __int64 GameData_21c96e8;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_script_hub_g_frame_counter;
void GameRoutine_133f780(__int64, _DWORD*, char);
void ProcGmapUpdateSpotViewSeq_Unknown2(__int64 a1);

void ProcGmapUpdateSpotViewSeq_Unknown2(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  int v7;
  int v8;
  bool v9;
  __int64 v10;
  _DWORD*** v11;
  _DWORD*** v12;
  _DWORD** v13;
  float v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  int v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  __int64 v27;
  int v28;
  int v29;
  bool v30;
  float v31;
  float v32;
  unsigned __int8* v33;
  unsigned int v34;
  bool v35;
  int v36;
  __int16 v38;
  __int64 v39;
  __int64* v40;
  __int64* j;
  __int64 v42;
  int v43;
  int v44;
  bool v45;
  int v46;
  int v47;
  __int64 v48;
  __int64* v49;
  __int64* i;
  __int64 v51;
  int v52;
  int v53;
  bool v54;
  _BYTE* v55;
  unsigned __int8 v56;

  v2 = GameData_212c780;
  v3 = *(_QWORD*)(*GameData_212c780 + 8);
  v4 = *(__int64**)(v3 + 48);
  v5 = *(__int64**)(v3 + 56);
  if (v4 == v5) {
  LABEL_49:
    v33 = *(unsigned __int8**)(a1 + 16);
    if (v33 != nullptr) {
      v34 = *v33;
      v35 = v34 > 0x10;
      v36 = (1 << v34) & 0x1CE00;
      if (!v35 && v36 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    v38 = 8;
    goto LABEL_56;
  }
  while (1) {
    v6 = *v4;
    v7 = *(unsigned __int8*)(*v4 + 176);
    v8 = *(unsigned __int8*)(*v4 + 112);
    if (v7 == 3 && (v8 & 1) == 0) {
      if (*(float*)(v6 + 288) != 0x1.0000000000000p+0f ||
          *(float*)(v6 + 292) != 0x1.0000000000000p+0f) {
        break;
      }
      goto LABEL_4;
    }
    if (v7 == 1) {
      if (*(float*)(v6 + 288) != 0x0.0p+0f) {
        break;
      }
      goto LABEL_4;
    }
    if (v7 == 2 || (v7 == 3 ? (v9 = v8 == 0) : (v9 = true), !v9)) {
      if (*(float*)(v6 + 288) != 0x1.0000000000000p+0f ||
          *(float*)(v6 + 292) != 0x1.99999a0000000p-3f) {
        break;
      }
    }
  LABEL_4:
    if (++v4 == v5) {
      goto LABEL_49;
    }
  }
  v10 = *(_QWORD*)(GameData_21c96e8 + 8);
  v11 = *(_DWORD****)(v10 + 8);
  v12 = *(_DWORD****)(v10 + 16);
  while (v11 != v12) {
    v13 = *v11++;
    GameRoutine_133f780((__int64)v13, *v13, 0);
  }
  v14 = *(float*)(game_script_hub_g_frame_counter + 160) + *(float*)(a1 + 152);
  *(float*)(a1 + 152) = v14;
  if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 1) != 0) {
    v14 = v14 + 0x1.e000000000000p+4f;
    *(float*)(a1 + 152) = v14;
  }
  v15 = *v2;
  v16 = (int)v14;
  v17 = *(_QWORD*)(*v2 + 8);
  v18 = *(__int64**)(v17 + 48);
  v19 = *(__int64**)(v17 + 56);
  if (v18 != v19) {
    if (v16 >= 30) {
      v20 = 30;
    }
    else {
      v20 = (int)v14;
    }
    v21 = (float)v20 / 0x1.e000000000000p+4f;
    v22 = (float)((float)v20 * 0x1.99999a0000000p-1f) / 0x1.e000000000000p+4f;
    v23 = v22 + 0x1.99999a0000000p-3f;
    v24 = 0x1.0000000000000p+0f - v22;
    while (1) {
      v27 = *v18;
      v28 = *(unsigned __int8*)(*v18 + 176);
      v29 = *(unsigned __int8*)(*v18 + 112);
      if (v28 == 3 && (v29 & 1) == 0) {
        break;
      }
      if (v28 == 1) {
        v32 = *(float*)(v27 + 288);
        if ((float)(0x1.0000000000000p+0f - v21) < v32) {
          v32 = 0x1.0000000000000p+0f - v21;
        }
        *(float*)(v27 + 288) = v32;
        goto LABEL_32;
      }
      if (v28 == 2 || (v28 == 3 ? (v30 = v29 == 0) : (v30 = true), !v30)) {
        v31 = *(float*)(v27 + 288);
        if (v31 < v21) {
          v31 = v21;
        }
        *(float*)(v27 + 288) = v31;
        v26 = *(float*)(v27 + 292);
        if (v24 < v26) {
          v26 = v24;
        }
      LABEL_31:
        *(float*)(v27 + 292) = v26;
      }
    LABEL_32:
      if (++v18 == v19) {
        goto LABEL_58;
      }
    }
    v25 = *(float*)(v27 + 288);
    if (v25 < v21) {
      v25 = v21;
    }
    *(float*)(v27 + 288) = v25;
    v26 = *(float*)(v27 + 292);
    if (v26 < v23) {
      v26 = v23;
    }
    goto LABEL_31;
  }
LABEL_58:
  if (v16 <= 29) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3) {
      return;
    }
    v46 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v47 = (v46 & 8) != 0 ? 2 : 3;
    if ((v47 & v46) != 0) {
      return;
    }
    v48 = *(_QWORD*)(v15 + 8);
    v49 = *(__int64**)(v48 + 48);
    for (i = *(__int64**)(v48 + 56); v49 != i; ++v49) {
      v51 = *v49;
      v52 = *(unsigned __int8*)(*v49 + 176);
      v53 = *(unsigned __int8*)(*v49 + 112);
      if (v52 == 3 && (v53 & 1) == 0) {
        *(_QWORD*)(v51 + 288) = 0x3F8000003F800000LL;
      }
      else if (v52 == 1) {
        *(_DWORD*)(v51 + 288) = 0;
      }
      else if (v52 == 2 || (v52 == 3 ? (v54 = v53 == 0) : (v54 = true), !v54)) {
        *(_DWORD*)(v51 + 292) = 1045220557;
      }
    }
  }
  else {
    v39 = *(_QWORD*)(v15 + 8);
    v40 = *(__int64**)(v39 + 48);
    for (j = *(__int64**)(v39 + 56); v40 != j; ++v40) {
      v42 = *v40;
      v43 = *(unsigned __int8*)(*v40 + 176);
      v44 = *(unsigned __int8*)(*v40 + 112);
      if (v43 == 3 && (v44 & 1) == 0) {
        *(_QWORD*)(v42 + 288) = 0x3F8000003F800000LL;
      }
      else if (v43 == 1) {
        *(_DWORD*)(v42 + 288) = 0;
      }
      else if (v43 == 2 || (v43 == 3 ? (v45 = v44 == 0) : (v45 = true), !v45)) {
        *(_DWORD*)(v42 + 292) = 1045220557;
      }
    }
  }
  v55 = *(_BYTE**)(a1 + 16);
  if (v55 != nullptr) {
    v56 = *v55 - 9;
    if (v56 <= 7u && ((0xE7u >> v56) & 1) != 0) {
      v38 = 128;
    LABEL_56:
      *(_WORD*)(a1 + 136) |= v38;
    }
  }
}

#pragma GCC visibility pop
