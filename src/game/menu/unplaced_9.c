#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_878ea0(PSEUDO_X8, const char**);
__int64* GameRoutine_714e40();
__int64 AssetTableFile_7e95e0(__int64, __int64, unsigned int);
__int64 GameHr_111bd80(__int64, __int64, __int64, int);
__int64 GameHr_111be90(__int64, __int64);
__int64 GameHr_7e8000(__int64);
__int64 GameRoutine_185a020(unsigned __int8);
__int64 SpineSlotChecker_19220e0(__int64 result, const char*, char);
__int64 SpineSlotChecker_1924b40(_QWORD*);
__int64 game_111c720(unsigned __int8*);
char* game_util_Format(const char*, ...);
extern __int64* GameData_2132348[4];
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
extern __int64 GameData_226b6b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char GameData_21d9d78;
extern int GameData_21d9d7c;
unsigned __int64 strlen(const char*);
void TrickEntity_7d1480(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_menu_16a7080();

void game_menu_16a7080()
{
  int v0;
  __int64 v1;
  int* v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
  } v11_;
  struct {
    char* v23;
    unsigned __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    char gap288_[8];
    __int64 v47;
    char gap304_[8];
    __int64 v48;
    char gap320_[96];
    __int64 v49;
    _BYTE* v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    int v57;
    char gap484_[4];
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
  } v23_;
  struct {
    _BYTE v67[4];
    int v68;
    char gap584_[2];
    unsigned __int8 v69;
    char gap587_[48];
    char v70;
  } v67_;

  v23_.v23 = game_util_Format("%s/%s", "000", "Auto");
  v23_.v24 = strlen(v23_.v23);
  GameRoutine_878ea0((void*)((__int64)v67_.v67), (const char**)&v23_.v23);
  if (v67_.v67[0] != 0 && (v67_.v70 & 0x40) == 0) {
    v0 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v0 = *(_DWORD*)(game_GameModeData_instance_ + 8);
    }
    if (v67_.v68 == v0) {
      v1 = GameRoutine_185a020(v67_.v69);
      if (v1 != 0) {
        v23_.v47 = 0;
        v23_.v48 = 0;
        v23_.v23 = nullptr;
        v23_.v24 = 0;
        v23_.v25 = 0;
        v23_.v26 = 0;
        v23_.v27 = 0;
        v23_.v28 = 0;
        v23_.v29 = 0;
        v23_.v30 = 0;
        v23_.v31 = 0;
        v23_.v32 = 0;
        v23_.v33 = 0;
        v23_.v34 = 0;
        v23_.v57 = 1065353216;
        v2 = (int*)GameData_21d9d18;
        v3 = GameData_21d9d20;
        v23_.v35 = 0;
        v23_.v36 = 0;
        v23_.v37 = 0;
        v23_.v38 = 0;
        v23_.v39 = 0;
        v23_.v40 = 0;
        v23_.v41 = 0;
        v23_.v42 = 0;
        v23_.v43 = 0;
        v23_.v44 = 0;
        v23_.v45 = 0;
        v23_.v46 = 0;
        v23_.v49 = 0;
        v23_.v50 = nullptr;
        v23_.v52 = 0;
        v23_.v53 = 0;
        v23_.v54 = 0;
        v23_.v55 = 0;
        v23_.v56 = 0;
        v23_.v58 = 0;
        v23_.v59 = 0;
        v23_.v60 = 0;
        v23_.v61 = 0;
        v23_.v62 = 0;
        v23_.v63 = 0;
        v23_.v64 = 0;
        v23_.v65 = 0;
        v23_.v66 = 0;
        if (GameData_21d9d18 != GameData_21d9d20) {
          do {
            v4 = *v2++;
            *(_QWORD*)(GameData_21d9d00 + 8 * v4) = 0;
          } while (v2 != (int*)v3);
          v2 = (int*)GameData_21d9d18;
        }
        GameData_21d9d20 = (__int64)v2;
        GameData_21d9d60 = 0;
        GameData_21d9d68 = 0;
        GameData_21d9d70 = 0;
        GameData_21d9d7c = 0;
        GameData_21d9d38 = GameData_21d9d30;
        GameData_21d9cf0 = GameData_21d9ce8;
        GameData_21d9d50 = GameData_21d9d48;
        GameData_21d9d78 = 8;
        AssetTableFile_7e95e0((__int64)&v23_.v23, v1, 0);
        if ((GameHr_7e8000((__int64)&v23_.v23) & 1) != 0 &&
            v23_.v50 != nullptr && *v23_.v50 != 0 &&
            (SpineSlotChecker_1924b40(&v23_.v23) & 1) == 0) {
          v11_.v11 = 0;
          v11_.v12 = 0;
          v11_.v13 = 0;
          v11_.v14 = 0;
          v11_.v15 = 0;
          v11_.v16 = 0;
          v11_.v17 = 0;
          v11_.v18 = 0;
          v11_.v19 = 0;
          v11_.v20 = 0;
          v11_.v21 = 0;
          v11_.v22 = 0;
          if (v23_.v51 != 0) {
            v5 = *(const char**)(v23_.v51 + 40);
            if (v5 != nullptr && *v5 != 0) {
              SpineSlotChecker_19220e0((__int64)&v11_.v11, v5,
                                       *(_BYTE*)(v23_.v51 + 48));
            }
          }
          if ((game_111c720((unsigned __int8*)&v11_.v11) & 1) != 0) {
            v6 = GameRoutine_714e40();
            GameHr_111bd80(*GameData_2132348[0], (__int64)v6, v23_.v51, 1);
          }
          else if (v23_.v51 != 0) {
            GameHr_111be90(GameData_226b6b0, v23_.v51);
          }
          if ((v11_.v20 & 1) != 0 && v11_.v22 != 0) {
            v7 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v7 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v11_.v22);
          }
          if ((v11_.v17 & 1) != 0 && v11_.v19 != 0) {
            v8 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v8 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v11_.v19);
          }
          if ((v11_.v14 & 1) != 0 && v11_.v16 != 0) {
            v9 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v9 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v11_.v16);
          }
          if ((v11_.v11 & 1) != 0 && v11_.v13 != 0) {
            v10 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v10 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v11_.v13);
          }
        }
        TrickEntity_7d1480((__int64)&v23_.v23);
      }
    }
  }
}

#pragma GCC visibility pop
