#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AssetTableFile_7e8000(_QWORD);
__int64 AssetTableFile_7e95e0(_QWORD, _QWORD, _QWORD);
__int64 CharacterAppearance_10735d0(_QWORD);
__int64 GameRoutine_1072580(_QWORD, _QWORD);
__int64 GameRoutine_10784f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1827b90(_QWORD);
__int64 GameRoutine_1829460(_QWORD, _QWORD);
__int64 GameRoutine_1829dc0(_QWORD);
__int64 GameRoutine_7c5ed0(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 MapInfo_825790(void);
__int64 MapUnitInfo_182aaa0(_QWORD, _QWORD);
__int64 TrickEntity_7d1480(_QWORD, long double);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_HashString32(void);
__int64 game_ProcInst_Register(void);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1ae2edc;
extern _UNKNOWN GameData_21c6868;
extern __int64 (*GameData_1ffb888[])();
extern __int64 (*game_map_ProcZoomSeq_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d0d0[2];
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 GameData_21d9ce8;
extern __int64 GameData_21d9cf0;
extern __int64 GameData_21d9d00;
extern __int64 GameData_21d9d18;
extern __int64 GameData_21d9d20;
extern __int64 GameData_21d9d30;
extern __int64 GameData_21d9d38;
extern __int64 GameData_21d9d48;
extern __int64 GameData_21d9d50;
extern __int64 GameData_21d9d60;
extern __int64 GameData_21d9d68;
extern __int64 GameData_21d9d70;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c890[3];
extern __int64* GameData_212cff8[3];
extern __int64* GameData_212d3c8[3];
extern __int64* GameData_212d560[9];
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern char GameData_21d9d78;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_21d9d7c;
__int64 game_map_ProcMapSeqZoomViewer_ViewerZoomIn(__int64 a1);
void game_map_ProcMapSeqZoomViewer_ViewerZoomIn_closure_Invoke(__int64 a1,
                                                               __int64 a2);

__int64 game_map_ProcMapSeqZoomViewer_ViewerZoomIn(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  int* v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  _QWORD* v28;
  long double v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD v33[4];
  _QWORD* v34;
  _QWORD* v35;
  _QWORD* v36;
  _QWORD v37[48];
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;

  v2 = *(_QWORD*)GameData_212d0d0[0];
  if (*(_QWORD*)GameData_212d0d0[0] != 0 && *(_BYTE*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 160);
    *(_BYTE*)(v2 + 152) = 0;
    GameRoutine_1829460(v2, v3);
    GameRoutine_1829dc0(v2);
    MapUnitInfo_182aaa0(v2, 0);
    if (*GameData_212cff8[0] != 0) {
      MapInfo_825790();
    }
  }
  v4 = *GameData_212d560[0];
  if (*GameData_212d560[0] != 0) {
    *(_BYTE*)(v4 + 224) = 1;
    v5 = LayoutAccessor_155ea30(v4 + 40) & 1;
    LayoutAccessor_155e830(v4 + 40, 0);
    if (v5 != (LayoutAccessor_155ea30(v4 + 40) & 1)) {
      GameRoutine_1827b90(v4);
    }
  }
  *(_DWORD*)(a1 + 152) = 1;
  v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      152, 16, 0);
  v8 = GameData_212c608[0];
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_WORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 24) = "NULL";
  *(_QWORD*)(v7 + 138) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)v7 = v8 + 16;
  *(_QWORD*)(v7 + 8) = 0;
  game_ProcInst_Register();
  *(_QWORD*)v7 = game_map_ProcZoomSeq_vtable;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21c6868) != 0) {
    GameData_21c67d0 = 0;
    GameData_21c67d8 = 0;
    GameData_21c67e0 = 0;
    GameData_21c67b0 = 0;
    GameData_21c67b8 = 0;
    GameData_21c67c0 = 0;
    GameData_21c67c8 = 0;
    GameData_21c6808 = 0;
    GameData_21c6810 = 0;
    GameData_21c6818 = 0;
    GameData_21c67a8 = 3;
    GameData_21c6820 = 0;
    GameData_21c6828 = 0;
    GameData_21c6850 = 0;
    GameData_21c6858 = 0;
    GameData_21c6860 = 0;
    GameData_21c6848 = 0;
    GameData_21c6838 = 0;
    GameData_21c6840 = 0;
    GameData_21c6830 = 0;
    GameData_21c67e8 = 14;
    GameData_21c67f0 = 0;
    GameData_21c67f8 = 16;
    GameData_21c6800 = 1;
    __cxa_guard_release(&GameData_21c6868);
  }
  v9 = *(_QWORD*)(a1 + 40);
  if (v9 != 0) {
    *(_QWORD*)(v9 + 48) = v7;
    *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v7;
  *(_QWORD*)(v7 + 24) = "ProcZoomSeq";
  *(_QWORD*)(v7 + 32) = a1;
  *(_DWORD*)(v7 + 140) = game_HashString32();
  *(_QWORD*)(v7 + 8) = &GameData_21c67a8;
  *(_QWORD*)(v7 + 16) = &GameData_21c67a8;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 24;
  *(_QWORD*)(v7 + 80) = 1;
  (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
      (*(_WORD*)(v7 + 136) & 0x100) == 0) {
    *(_WORD*)(v7 + 136) |= 0x100u;
  }
  *(_QWORD*)(a1 + 224) = v7;
  GameRoutine_7c5ed0(v7, 1);
  v37[25] = 0;
  v37[27] = 0;
  memset(v37, 0, 192);
  v38 = 1065353216;
  v10 = (int*)GameData_21d9d18;
  v11 = GameData_21d9d20;
  v37[40] = 0;
  v37[41] = 0;
  memset(&v37[43], 0, 40);
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  if (GameData_21d9d18 != GameData_21d9d20) {
    do {
      v12 = *v10++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v12) = 0;
    } while (v10 != (int*)v11);
    v10 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v10;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  v13 = game_HashString(&GameData_1ae2edc);
  if (v13 == 0) {
    goto LABEL_41;
  }
  v14 = *(_QWORD*)(*GameData_212c890[0] + 96);
  if (v14 == 0 || *(_QWORD*)(*GameData_212c890[0] + 112) == 0) {
    goto LABEL_41;
  }
  v16 = v14 - 1;
  if ((v14 & (v14 - 1)) != 0) {
    v17 = v13;
    if (v13 >= v14) {
      v17 = v13 % v14;
    }
  }
  else {
    v17 = v16 & v13;
  }
  v18 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v17);
  if (v18 == nullptr || (v19 = (_QWORD*)*v18) == nullptr) {
  LABEL_41:
    v21 = 0;
    goto LABEL_42;
  }
  if ((v14 & v16) == 0) {
    while (1) {
      v22 = v19[1];
      if (v22 == v13) {
        if (v19[2] == v13) {
          goto LABEL_54;
        }
      }
      else if ((v22 & v16) != v17) {
        goto LABEL_41;
      }
      v19 = (_QWORD*)*v19;
      v21 = 0;
      if (v19 == nullptr) {
        goto LABEL_42;
      }
    }
  }
  while (1) {
    v20 = v19[1];
    if (v20 == v13) {
      break;
    }
    if (v20 >= v14) {
      v20 %= v14;
    }
    if (v20 != v17) {
      goto LABEL_41;
    }
  LABEL_31:
    v19 = (_QWORD*)*v19;
    if (v19 == nullptr) {
      goto LABEL_41;
    }
  }
  if (v19[2] != v13) {
    goto LABEL_31;
  }
LABEL_54:
  v21 = v19[3];
LABEL_42:
  v23 = (int*)GameData_21d9d18;
  v24 = GameData_21d9d20;
  if (GameData_21d9d18 != GameData_21d9d20) {
    do {
      v25 = *v23++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v25) = 0;
    } while (v23 != (int*)v24);
    v23 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v23;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  AssetTableFile_7e95e0(v37, v21, 0);
  AssetTableFile_7e8000(v37);
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 11832, 16, 0);
  v26[2] = 0;
  v27 = v26 + 3;
  v28 = v26;
  *v26 = GameData_212d3c8[0] + 2;
  v26[1] = 0;
  CharacterAppearance_10735d0(v26 + 3);
  v35 = v27;
  v36 = v28;
  GameRoutine_1072580(v27, v37);
  v33[0] = GameData_1ffb888;
  v34 = v33;
  *(_QWORD*)(a1 + 232) = GameRoutine_10784f0(&v35, 0x2000, v33);
  if (v34 == v33) {
    v30 = 32;
  LABEL_49:
    (*(void (**)(__int64))(*v34 + v30))((__int64)v34);
  }
  else if (v34 != nullptr) {
    v30 = 40;
    goto LABEL_49;
  }
  v31 = v36;
  if (v36 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v36 + 1),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v31 + 16LL))(v31);
    *(__n128*)&v29 = std___1___shared_weak_count___release_weak(v31);
  }
  return TrickEntity_7d1480(v37, v29);
}

void game_map_ProcMapSeqZoomViewer_ViewerZoomIn_closure_Invoke(__int64 a1,
                                                               __int64 a2)
{
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)a2 + 8LL) + 289LL) = 0;
}

#pragma GCC visibility pop
