#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f91110[])();
extern __int64 (*game_MapTerrainFile_vtable[])();
extern __int64 GameData_21ca0d0;
extern __int64 GameData_21ca0d8;
extern __int64 GameData_21ca0e8;
extern __int64 GameData_21ca0f0;
extern __int64 GameData_21ca100;
extern __int64 GameData_21ca108;
extern __int64 GameData_21ca118;
extern __int64 GameData_21ca120;
extern __int64 GameData_21ca130;
extern __int64 GameData_21ca138;
extern __int64 GameData_21ca160;
extern __int64 GameData_21ca1b0;
extern __int64 GameData_21ca1b8;
extern __int64 GameData_21ca1c8;
extern __int64 GameData_21ca1d0;
extern __int64 GameData_21ca1e0;
extern __int64 GameData_21ca1e8;
extern __int64 GameData_21ca1f0;
extern __int64 GameData_21ca1f8;
extern __int64 GameData_21ca208;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_map_g_hint_data;
extern int GameData_21ca210;
__int64 MapTerrainFile_Destructor(_QWORD* a1);
__int64 MapTerrainFile_6b38a0();

__int64 MapTerrainFile_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_MapTerrainFile_vtable;
  result = MapTerrainFile_6b38a0();
  *a1 = GameData_1f91110;
  if ((_QWORD*)GameData_21ca208 == a1) {
    GameData_21ca208 = 0;
    GameData_21ca210 = 0;
  }
  return result;
}

__int64 MapTerrainFile_6b38a0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;

  game_map_g_hint_data = 0;
  v1 = GameData_21ca0d0;
  v0 = GameData_21ca0d8;
  v2 = fw_memory_g_heap_manager_ptr;
  if (GameData_21ca0d0 != GameData_21ca0d8) {
    v3 = GameData_21ca0d8;
    do {
      v4 = *(_BYTE*)(v3 - 24);
      v3 -= 24;
      if ((v4 & 1) != 0) {
        v5 = *(_QWORD*)(v0 - 8);
        if (v5 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
        }
      }
      v0 = v3;
    } while (v3 != v1);
  }
  GameData_21ca0d8 = v1;
  v9 = GameData_21ca0e8;
  v8 = GameData_21ca0f0;
  if (GameData_21ca0e8 != GameData_21ca0f0) {
    v10 = GameData_21ca0f0;
    do {
      v11 = *(_BYTE*)(v10 - 24);
      v10 -= 24;
      if ((v11 & 1) != 0) {
        v12 = *(_QWORD*)(v8 - 8);
        if (v12 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
            v13 = 128;
          }
          else {
            v13 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v13, v12);
        }
      }
      v8 = v10;
    } while (v10 != v9);
  }
  GameData_21ca0f0 = v9;
  GameData_21ca160 = 0;
  GameData_21ca108 = GameData_21ca100;
  GameData_21ca120 = GameData_21ca118;
  GameData_21ca138 = GameData_21ca130;
  v15 = GameData_21ca1b0;
  v14 = GameData_21ca1b8;
  if (GameData_21ca1b0 != GameData_21ca1b8) {
    v16 = GameData_21ca1b8;
    do {
      v17 = *(_BYTE*)(v16 - 24);
      v16 -= 24;
      if ((v17 & 1) != 0) {
        v18 = *(_QWORD*)(v14 - 8);
        if (v18 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
            v19 = 128;
          }
          else {
            v19 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v19, v18);
        }
      }
      v14 = v16;
    } while (v16 != v15);
  }
  GameData_21ca1b8 = v15;
  GameData_21ca1d0 = GameData_21ca1c8;
  if (GameData_21ca1f8 != 0) {
    v20 = (_QWORD*)GameData_21ca1f0;
    if (GameData_21ca1f0 != 0) {
      do {
        v21 = (_QWORD*)*v20;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v22, v20);
        v20 = v21;
      } while (v21 != nullptr);
    }
    GameData_21ca1f0 = 0;
    if (GameData_21ca1e8 != 0) {
      v23 = GameData_21ca1e8 & 7;
      if ((unsigned __int64)GameData_21ca1e8 >= 8) {
        v25 = GameData_21ca1e8 & 0xFFFFFFFFFFFFFFF8LL;
        v24 = 0;
        do {
          *(_QWORD*)(GameData_21ca1e0 + 8 * v24) = 0;
          *(_QWORD*)(GameData_21ca1e0 + 8 * v24 + 8) = 0;
          *(_QWORD*)(GameData_21ca1e0 + 8 * v24 + 16) = 0;
          *(_QWORD*)(GameData_21ca1e0 + 8 * v24 + 24) = 0;
          *(_QWORD*)(GameData_21ca1e0 + 8 * v24 + 32) = 0;
          *(_QWORD*)(GameData_21ca1e0 + 8 * v24 + 40) = 0;
          *(_QWORD*)(GameData_21ca1e0 + 8 * v24 + 48) = 0;
          v26 = GameData_21ca1e0 + 8 * v24;
          v24 += 8;
          *(_QWORD*)(v26 + 56) = 0;
        } while (v25 != v24);
      }
      else {
        v24 = 0;
      }
      if (v23 != 0) {
        v27 = 8 * v24;
        do {
          --v23;
          *(_QWORD*)(GameData_21ca1e0 + v27) = 0;
          v27 += 8;
        } while (v23 != 0);
      }
    }
    GameData_21ca1f8 = 0;
  }
  return result;
}

#pragma GCC visibility pop
