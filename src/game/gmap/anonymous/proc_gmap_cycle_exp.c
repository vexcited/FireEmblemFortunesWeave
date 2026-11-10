#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1314ec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1317f10(_QWORD, _QWORD);
__int64 GameRoutine_15255d0(__int64);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_7fa250(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8c4be0(_QWORD);
__int64 GmapSituation_14dbd80(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ae35f4;
extern __int64 GameData_21f1658;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212d708;
extern __int64* GameData_212d718;
extern __int64* GameData_212d728[2];
__int64 ProcGmapCycleExp_152ef30(__int64 a1);
__int64 ProcGmapCycleExp_152f200(__int64 result);
__int64 ProcGmapCycleExp_152f570();
__int64 ProcGmapCycleExp_152f5f0(__int64 a1);
__int64 ProcGmapCycleExp_152f660(__int64 result);

__int64 ProcGmapCycleExp_152ef30(__int64 a1)
{
  __int64 v2;
  __int64 result;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;
  _QWORD v9[2];

  v9[1] = &GameData_1ae35f4;
  v9[0] = game_HashString(&GameData_1ae35f4);
  v2 = game_VariableManager_SetFlag(v9, 1);
  result = GmapSituation_14dbd80(v2);
  if ((result & 1) != 0) {
    result = GameRoutine_15255d0(a1);
    *(_BYTE*)(a1 + 252) = 1;
  }
  else {
    v4 = *(unsigned __int8**)(a1 + 16);
    if (v4 != nullptr) {
      v5 = *v4;
      v6 = v5 > 0x10;
      v7 = (1 << v5) & 0x1CE00;
      if (!v6 && v7 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 ProcGmapCycleExp_152f200(__int64 result)
{
  __int64* v1;
  __int64 v2;
  int v3;
  bool v4;
  char v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8* v27;
  unsigned int v28;
  bool v29;
  int v30;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int8* v45;
  unsigned int v46;
  __int64 v47;
  int v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _BYTE v58[11];
  __int16 v59;
  char v60;

  v1 = *(__int64**)(result + 208);
  v2 = result;
  if (*(__int64**)(result + 216) == v1) {
    v10 = game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
        v11 = 2;
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
      }
      else {
        v11 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2;
      }
      v15 = *(_QWORD*)(v10 + 208);
      v14 = *(_QWORD*)(v10 + 216);
      v17 = *(_QWORD*)(v10 + 184);
      v16 = *(_QWORD*)(v10 + 192);
      v4 = v16 == v17;
      v18 = v14 - 1 + v15;
      v19 = v18 >> 7;
      v20 = v18 & 0x7F;
      v21 = 16 * (v16 - v17) - 1;
      v22 = *(_QWORD*)(v17 + 8 * v19);
      if (v4) {
        v21 = 0;
      }
      v23 = v22 + 32 * v20;
      *(_DWORD*)(v10 + 156) = *(_DWORD*)v23 & 0xFFFFFFFD | v11;
      *(_QWORD*)(v10 + 168) = *(_QWORD*)(v23 + 24);
      v24 = *(_QWORD*)(v23 + 16);
      *(_QWORD*)(v10 + 216) = v14 - 1;
      *(_QWORD*)(v10 + 160) = v24;
      if ((unsigned __int64)(v21 - (v14 + v15) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        v25 = *(_QWORD*)(v16 - 8);
        if (v25 != 0) {
          v26 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v26 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v25);
          v16 = *(_QWORD*)(v10 + 192);
        }
        *(_QWORD*)(v10 + 192) = v16 - 8;
      }
    }
    v27 = *(unsigned __int8**)(v2 + 16);
    if (v27 == nullptr) {
      goto LABEL_41;
    }
    v28 = *v27;
    v29 = v28 > 0x10;
    v30 = (1 << v28) & 0x1CE00;
    if (v29 || v30 == 0) {
      goto LABEL_41;
    }
    goto LABEL_40;
  }
  do {
    v57 = 0;
    memset(v58, 0, sizeof(v58));
    v55 = 0;
    v56 = 0;
    v53 = 0;
    v54 = 0;
    v51 = 0;
    v52 = 0;
    v50 = 0;
    v47 = *v1;
    v3 = *((_DWORD*)v1 + 3);
    v48 = *((_DWORD*)v1 + 2);
    v49 = v3;
    if (game_ProcGameSkipView_instance_ != 0 &&
        (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 1) == 0 &&
        (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3
             ? (v4 = (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) ==
                     0)
             : (v4 = false),
         v4)) {
      v5 = 3;
    }
    else {
      v5 = 1;
    }
    v58[10] = v5;
    if ((v1[2] & 1) != 0 || *((_BYTE*)v1 + 17) == 1) {
      v60 = 0;
      v59 = 256;
      result = GameRoutine_7fa250(v2, &v47, &v59);
      v8 = *(__int64**)(v2 + 216);
      v9 = (char*)v8 - (char*)(v1 + 3);
      if (v8 != v1 + 3) {
        result = memmove(v1, v1 + 3, v9 - 6);
      }
      *(_QWORD*)(v2 + 216) = (char*)v1 + v9;
      return result;
    }
    result = GameRoutine_8c4be0(&v47);
    v6 = *(__int64**)(v2 + 216);
    v7 = (char*)v6 - (char*)(v1 + 3);
    if (v6 != v1 + 3) {
      result = memmove(v1, v1 + 3, v7 - 6);
    }
    *(_QWORD*)(v2 + 216) = (char*)v1 + v7;
  } while (v1 != (__int64*)((char*)v1 + v7));
  if (v1 != *(__int64**)(v2 + 208)) {
    return result;
  }
  v12 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
      v13 = 2;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
    }
    else {
      v13 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2;
    }
    v33 = *(_QWORD*)(v12 + 208);
    v32 = *(_QWORD*)(v12 + 216);
    v35 = *(_QWORD*)(v12 + 184);
    v34 = *(_QWORD*)(v12 + 192);
    v4 = v34 == v35;
    v36 = v32 - 1 + v33;
    v37 = v36 >> 7;
    v38 = v36 & 0x7F;
    v39 = 16 * (v34 - v35) - 1;
    v40 = *(_QWORD*)(v35 + 8 * v37);
    if (v4) {
      v39 = 0;
    }
    v41 = v40 + 32 * v38;
    *(_DWORD*)(v12 + 156) = *(_DWORD*)v41 & 0xFFFFFFFD | v13;
    *(_QWORD*)(v12 + 168) = *(_QWORD*)(v41 + 24);
    v42 = *(_QWORD*)(v41 + 16);
    *(_QWORD*)(v12 + 216) = v32 - 1;
    *(_QWORD*)(v12 + 160) = v42;
    if ((unsigned __int64)(v39 - (v32 + v33) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v43 = *(_QWORD*)(v34 - 8);
      if (v43 != 0) {
        v44 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v44 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v43);
        v34 = *(_QWORD*)(v12 + 192);
      }
      *(_QWORD*)(v12 + 192) = v34 - 8;
    }
  }
  v45 = *(unsigned __int8**)(v2 + 16);
  if (v45 != nullptr) {
    v46 = *v45;
    if (v46 <= 0x10 && ((1 << v46) & 0x1CE00) != 0) {
    LABEL_40:
      *(_WORD*)(v2 + 136) |= 0x80u;
    }
  }
LABEL_41:
  *(_WORD*)(v2 + 136) |= 8u;
  return result;
}

__int64 ProcGmapCycleExp_152f570()
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

__int64 ProcGmapCycleExp_152f5f0(__int64 a1)
{
  __int64 v1;

  v1 = game_gmap_SpotMgr_GetCurrentSpot(a1);
  if (v1 != 0) {
    GameRoutine_1317f10(*(_QWORD*)(GameData_21f1658 + 16), v1 + 32);
  }
  return GameRoutine_1314ec0(*(_QWORD*)(*GameData_212d718 + 16),
                             *(_QWORD*)(GameData_21f1658 + 16) + 80LL, 0);
}

__int64 ProcGmapCycleExp_152f660(__int64 result)
{
  __int64 v1;
  __int64* v2;

  v1 = *(_QWORD*)(result + 232);
  if (v1 != 0) {
    v2 = GameData_212d708;
    GameRoutine_1317f10(*(_QWORD*)(*GameData_212d708 + 16), v1 + 32);
    return GameRoutine_1314ec0(*(_QWORD*)(*GameData_212d718 + 16),
                               *(_QWORD*)(*v2 + 16) + 80LL, 0);
  }
  return result;
}

#pragma GCC visibility pop
