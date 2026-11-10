#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_659c60();
__int64 GameRoutine_a83620(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
bool GameRoutine_66ad10();
extern _UNKNOWN GameData_1af4e96;
extern __int64 (*scene_scenes_D_Game_vtable[])();
extern __int64 GameData_21c6978;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_66a180();
void D_Game_Destructor(_QWORD* a1);
__int64 D_Game_DeletingDestructor(_QWORD* a1);
bool D_Game_Unknown2(__int64 a1);
__int64 GameCalendar_Destructor(_QWORD*);
__int64 GameRoutine_109b270();
__int64 GameRoutine_1919df0();
__int64 GameRoutine_659aa0();
__int64 GameRoutine_7c50c0();
__int64 GameRoutine_876a40(_QWORD*, _QWORD*);
__int64 GameRoutine_9ad960();
__int64 GameSideStoryData_Destructor(_QWORD*);
__int64 GameSubquestData_Destructor(_QWORD*);
__int64 Manager_a4c820(__int64 result);
__int64 fw_task_Scheduler_Remove(__int64, __int64);
__int64 snd_a2a770(__int64, char);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
extern _DWORD* GameData_2130dd8;
extern __int64* GameData_212c5a0;
extern __int64* GameData_212c760[5];
extern __int64* GameData_212c768[4];
extern __int64* GameData_212c770[3];
extern __int64* GameData_212c778[2];
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212d6d0;
extern __int64* GameData_2130dd0;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_map_history_g_legion_pool_ptr[7];
extern __int64* game_map_history_g_ride_pool_ptr[3];
extern __int64* game_map_history_g_transporter_ptr[8];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212c6c0[2];
extern __int64 GameData_212c6c8;
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_212c7a8[12];
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_212c7c0[9];
extern __int64 GameData_212c7c8[8];
extern __int64 GameData_212c7d0[7];
extern __int64 GameData_212c7d8[6];
extern __int64 GameData_212c7e0[5];
extern __int64 GameData_212c7e8[4];
extern __int64 GameData_212cf80[5];
extern __int64 GameData_212cf88[4];
extern __int64 GameData_2130de0;
extern __int64 GameData_21c9668;
extern __int64 GameData_21c9670;
extern __int64 GameData_21c9680;
extern __int64 GameData_21c9688;
extern __int64 GameData_21c9bd8;
extern __int64 GameData_21c9be0;
extern __int64 GameData_21c9bf0;
extern __int64 GameData_21c9bf8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21ca3f0;
extern __int64 GameData_21d9f90;
extern __int64 GameData_21d9f98;
extern __int64 GameData_21d9fa0;
extern __int64 GameData_21d9fa8;
extern __int64 GameData_21ec588;
extern __int64 GameData_21eea40;
extern __int64 GameData_21f5390;
extern __int64 GameData_21f5398;
extern __int64 GameData_2240f00;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern char GameData_1a9f09e;
extern char GameData_21c9698;
extern int GameData_21d92dc;
void GameRoutine_8b6090();
void Impl_1551900();
void D_Game_66a180();

void D_Game_66a180()
{
  _QWORD* v0;
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  _QWORD* v25;
  __int64* v26;
  _QWORD* v27;
  __int64* v28;
  __int64* v29;
  _QWORD* v30;
  __int64* v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 i;
  __int64 v41;
  __int64 v49;
  __int64 j;
  __int64 v51;
  __int64 k;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  _QWORD* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  _QWORD* v74;

  if (GameData_21c9698 != 1) {
    return;
  }
  v0 = (_QWORD*)GameData_212c7d8[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212c7d8[0] + 24LL))(
      *(_QWORD*)GameData_212c7d8[0]);
  if (*v0 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v0 + 8LL))(*v0);
  }
  *v0 = 0;
  v1 = (_QWORD*)GameData_212c7e0[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212c7e0[0] + 24LL))(
      *(_QWORD*)GameData_212c7e0[0]);
  if (*v1 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v1 + 8LL))(*v1);
  }
  *v1 = 0;
  v2 = (_QWORD*)GameData_212c7d0[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212c7d0[0] + 24LL))(
      *(_QWORD*)GameData_212c7d0[0]);
  if (*v2 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v2 + 8LL))(*v2);
  }
  *v2 = 0;
  v3 = (_QWORD*)GameData_212c7c8[0];
  v4 = *(_QWORD**)GameData_212c7c8[0];
  v5 = fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)GameData_212c7c8[0] != 0) {
    v6 = v4[2];
    if (v6 != 0) {
      v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      v4[3] = v6;
      v8 = 128;
      if (*(_QWORD*)(v7 + 200) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(v7 + v8, v6);
    }
    v4[1] = GameData_212d6d0 + 2;
    v74 = v4 + 1;
    GameRoutine_876a40(&GameData_21eea40, &v74);
    *v4 = GameData_2130dd0 + 2;
    if ((_QWORD*)*v3 == v4) {
      *v3 = 0;
      *GameData_2130dd8 = 0;
    }
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v9, v4);
  }
  *v3 = 0;
  v10 = (_QWORD*)GameData_212c6c0[0];
  v11 = *(_QWORD*)GameData_212c6c0[0];
  if (*(_QWORD*)GameData_212c6c0[0] != 0) {
    GameCalendar_Destructor(*(_QWORD**)GameData_212c6c0[0]);
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v12, v11);
  }
  *v10 = 0;
  v13 = (_QWORD*)GameData_212c7c0[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212c7c0[0] + 24LL))(
      *(_QWORD*)GameData_212c7c0[0]);
  if (*v13 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v13 + 8LL))(*v13);
  }
  *v13 = 0;
  v14 = (_QWORD*)GameData_212c7b8[0];
  v15 = *(_QWORD*)GameData_212c7b8[0];
  if (*(_QWORD*)GameData_212c7b8[0] != 0) {
    GameSideStoryData_Destructor(*(_QWORD**)GameData_212c7b8[0]);
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v16, v15);
  }
  *v14 = 0;
  v17 = (_QWORD*)GameData_212c7b0[0];
  v18 = *(_QWORD*)GameData_212c7b0[0];
  if (*(_QWORD*)GameData_212c7b0[0] != 0) {
    GameSubquestData_Destructor(*(_QWORD**)GameData_212c7b0[0]);
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v19, v18);
  }
  *v17 = 0;
  v20 = (_QWORD*)GameData_212c7a8[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212c7a8[0] + 24LL))(
      *(_QWORD*)GameData_212c7a8[0]);
  if (*v20 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v20 + 8LL))(*v20);
  }
  *v20 = 0;
  v21 = (_QWORD*)GameData_212c7a0[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212c7a0[0] + 24LL))(
      *(_QWORD*)GameData_212c7a0[0]);
  if (*v21 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v21 + 8LL))(*v21);
  }
  *v21 = 0;
  v22 = GameData_212c790;
  (*(void (**)(_QWORD))(*(_QWORD*)*GameData_212c790 + 24LL))(*GameData_212c790);
  if (*v22 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v22 + 8LL))(*v22);
  }
  *v22 = 0;
  v23 = GameData_212c780;
  (*(void (**)(_QWORD))(*(_QWORD*)*GameData_212c780 + 24LL))(*GameData_212c780);
  if (*v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v23 + 8LL))(*v23);
  }
  *v23 = 0;
  v24 = GameData_212c778[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212c778[0] + 24LL))(
      *GameData_212c778[0]);
  if (*v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v24 + 8LL))(*v24);
  }
  *v24 = 0;
  v25 = (_QWORD*)GameData_212c6a0[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212c6a0[0] + 24LL))(
      *(_QWORD*)GameData_212c6a0[0]);
  if (*v25 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v25 + 8LL))(*v25);
  }
  *v25 = 0;
  v26 = GameData_212c770[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212c770[0] + 24LL))(
      *GameData_212c770[0]);
  if (*v26 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v26 + 8LL))(*v26);
  }
  *v26 = 0;
  v27 = (_QWORD*)GameData_212c6c8;
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212c6c8 + 24LL))(
      *(_QWORD*)GameData_212c6c8);
  if (*v27 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v27 + 8LL))(*v27);
  }
  *v27 = 0;
  v28 = GameData_212c768[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212c768[0] + 24LL))(
      *GameData_212c768[0]);
  if (*v28 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v28 + 8LL))(*v28);
  }
  *v28 = 0;
  v29 = GameData_212c760[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212c760[0] + 24LL))(
      *GameData_212c760[0]);
  if (*v29 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v29 + 8LL))(*v29);
  }
  *v29 = 0;
  v30 = (_QWORD*)GameData_2130de0;
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_2130de0 + 24LL))(
      *(_QWORD*)GameData_2130de0);
  if (*v30 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v30 + 8LL))(*v30);
  }
  *v30 = 0;
  if (GameData_2240f00 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_2240f00 + 24LL))(
        GameData_2240f00);
    if (GameData_2240f00 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_2240f00 + 8LL))(
          GameData_2240f00);
    }
    GameData_2240f00 = 0;
  }
  if (GameData_21ca3f0 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21ca3f0 + 8LL))(GameData_21ca3f0);
    GameData_21ca3f0 = 0;
  }
  if (GameData_21ca310 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21ca310 + 8LL))(GameData_21ca310);
    GameData_21ca310 = 0;
  }
  v31 = game_map_history_g_ride_pool_ptr[0];
  if (*game_map_history_g_ride_pool_ptr[0] != 0) {
    (*(void (**)(_QWORD))(**(_QWORD**)game_map_history_g_ride_pool_ptr[0] +
                          8LL))(*game_map_history_g_ride_pool_ptr[0]);
    *v31 = 0;
  }
  *(_QWORD*)GameData_212cf88[0] = 0;
  v32 = game_map_history_g_legion_pool_ptr[0];
  if (*game_map_history_g_legion_pool_ptr[0] != 0) {
    (*(void (**)(_QWORD))(**(_QWORD**)game_map_history_g_legion_pool_ptr[0] +
                          8LL))(*game_map_history_g_legion_pool_ptr[0]);
    *v32 = 0;
  }
  *(_QWORD*)GameData_212cf80[0] = 0;
  v33 = game_map_history_g_transporter_ptr[0];
  if (*game_map_history_g_transporter_ptr[0] != 0) {
    (*(void (**)(_QWORD))(**(_QWORD**)game_map_history_g_transporter_ptr[0] +
                          8LL))(*game_map_history_g_transporter_ptr[0]);
    *v33 = 0;
  }
  *(_QWORD*)game_TransporterConst_List_instance__ptr[0] = 0;
  GameRoutine_9ad960();
  GameRoutine_659aa0();
  v34 = GameData_21c9bd8;
  v35 = GameData_21c9be0;
  if (GameData_21c9be0 != GameData_21c9bd8) {
    v36 = 0;
    do {
      (*(void (**)(_QWORD))(**(_QWORD**)(v34 + 8 * v36) + 24LL))(
          *(_QWORD*)(v34 + 8 * v36));
      v34 = GameData_21c9bd8;
      v35 = GameData_21c9be0;
      ++v36;
    } while (v36 < (GameData_21c9be0 - GameData_21c9bd8) >> 3);
  }
  if (v35 != v34) {
    v37 = 0;
    do {
      v38 = *(_QWORD*)(v34 + 8 * v37);
      if (v38 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v38 + 8LL))(v38);
        v34 = GameData_21c9bd8;
        v35 = GameData_21c9be0;
      }
      ++v37;
    } while (v37 < (v35 - v34) >> 3);
  }
  GameData_21c9be0 = v34;
  GameData_21c9bf8 = GameData_21c9bf0;
  GameRoutine_109b270();
  Impl_1551900();
  *(_DWORD*)(*game_g_frame_clock_ptr[0] + 476) = 60;
  GameData_21d92dc = 0;
  GameRoutine_7c50c0();
  GameRoutine_8b6090();
  if (*game_sound_g_game_sound_ptr[0] != 0) {
    snd_a2a770(*game_sound_g_game_sound_ptr[0], 1);
  }
  if (GameData_21ec588 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21ec588 + 8LL))(GameData_21ec588);
    GameData_21ec588 = 0;
  }
  v39 = GameData_21f5390;
  for (i = GameData_21f5398; i != v39; i -= 32) {
    v41 = *(_QWORD*)(i - 24);
    if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
      std___1___shared_weak_count___release_weak(v41);
    }
  }
  GameData_21f5398 = v39;
  GameRoutine_1919df0();
  v49 = GameData_21c9668;
  for (j = GameData_21c9670; j != v49; j -= 16) {
    v63 = *(_QWORD*)(j - 8);
    if (v63 != 0) {
      std___1___shared_weak_count___release_weak(v63);
    }
  }
  GameData_21c9670 = v49;
  v51 = GameData_21c9680;
  for (k = GameData_21c9688; k != v51; k -= 16) {
    v64 = *(_QWORD*)(k - 8);
    if (v64 != 0) {
      std___1___shared_weak_count___release_weak(v64);
    }
  }
  GameData_21c9688 = v51;
  Manager_a4c820(*msg_MessageManager_instance__ptr[0] + 14600);
  v59 = *GameData_212c5a0;
  v60 = *(_QWORD*)(*GameData_212c5a0 + 16);
  v61 = *GameData_212c5a0 + 8;
  if (v60 != v61) {
    while ((unsigned int)strcmp(*(_QWORD*)(v60 + 16), "Game::PostWorldTick") !=
           0) {
      v60 = *(_QWORD*)(v60 + 8);
      if (v60 == v61) {
        goto LABEL_91;
      }
    }
    goto LABEL_104;
  }
LABEL_91:
  v60 = *(_QWORD*)(v59 + 32);
  if (v60 != v59 + 24) {
    while (1) {
      v62 = *(_QWORD*)(v60 + 16) != 0 ? *(char**)(v60 + 16) : &GameData_1a9f09e;
      if ((unsigned int)strcmp(v62, "Game::PostWorldTick") == 0) {
        break;
      }
      v60 = *(_QWORD*)(v60 + 8);
      if (v60 == v59 + 24) {
        goto LABEL_105;
      }
    }
  LABEL_104:
    fw_task_Scheduler_Remove(v59, v60 - 8);
  }
LABEL_105:
  if (GameData_21d9fa8 != 0) {
    v65 = (_QWORD*)GameData_21d9fa0;
    if (GameData_21d9fa0 != 0) {
      do {
        v66 = (_QWORD*)*v65;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v67 = 128;
        }
        else {
          v67 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v67, v65);
        v65 = v66;
      } while (v66 != nullptr);
    }
    GameData_21d9fa0 = 0;
    if (GameData_21d9f98 != 0) {
      v68 = GameData_21d9f98 & 7;
      if ((unsigned __int64)GameData_21d9f98 >= 8) {
        v70 = GameData_21d9f98 & 0xFFFFFFFFFFFFFFF8LL;
        v69 = 0;
        do {
          *(_QWORD*)(GameData_21d9f90 + 8 * v69) = 0;
          *(_QWORD*)(GameData_21d9f90 + 8 * v69 + 8) = 0;
          *(_QWORD*)(GameData_21d9f90 + 8 * v69 + 16) = 0;
          *(_QWORD*)(GameData_21d9f90 + 8 * v69 + 24) = 0;
          *(_QWORD*)(GameData_21d9f90 + 8 * v69 + 32) = 0;
          *(_QWORD*)(GameData_21d9f90 + 8 * v69 + 40) = 0;
          *(_QWORD*)(GameData_21d9f90 + 8 * v69 + 48) = 0;
          v71 = GameData_21d9f90 + 8 * v69;
          v69 += 8;
          *(_QWORD*)(v71 + 56) = 0;
        } while (v70 != v69);
      }
      else {
        v69 = 0;
      }
      if (v68 != 0) {
        v72 = 8 * v69;
        do {
          --v68;
          *(_QWORD*)(GameData_21d9f90 + v72) = 0;
          v72 += 8;
        } while (v68 != 0);
      }
    }
    GameData_21d9fa8 = 0;
  }
  v73 = (_QWORD*)GameData_212c7e8[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212c7e8[0] + 24LL))(
      *(_QWORD*)GameData_212c7e8[0]);
  if (*v73 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v73 + 8LL))(*v73);
  }
  *v73 = 0;
  GameData_21c9698 = 0;
}

void D_Game_Destructor(_QWORD* a1)
{
  *a1 = scene_scenes_D_Game_vtable;
  GameRoutine_659c60();
  GameRoutine_a83620(GameData_21c6978);
  GameRoutine_66a180();
}

__int64 D_Game_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = scene_scenes_D_Game_vtable;
  GameRoutine_659c60();
  GameRoutine_a83620(GameData_21c6978);
  GameRoutine_66a180();
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

bool D_Game_Unknown2(__int64 a1)
{
  bool v2;

  v2 = GameRoutine_66ad10();
  if (!v2) {
    *(_QWORD*)(*(_QWORD*)(a1 + 88) + 136LL) = &GameData_1af4e96;
    *(_BYTE*)(*(_QWORD*)(a1 + 88) + 96LL) = 1;
  }
  return v2;
}

#pragma GCC visibility pop
