#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13741b0(__int64 result);
__int64 GameRoutine_9b11a0(_QWORD*, unsigned __int64*, unsigned int);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_1af90cb;
extern _UNKNOWN GameData_21f7e10;
extern __int64 GameData_21f61c0[];
extern __int64 GameData_21f61f8;
extern __int64 GameData_21f6200;
extern __int64 GameData_21f6210;
extern __int64 GameData_21f6228;
extern __int64 GameData_21f6240;
extern __int64 GameData_21f6248;
extern __int64 GameData_21f7e00;
extern __int64 GameData_21f7e08;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern int GameData_21d87f8;
extern int GameData_21f61c8;
void ProcAchieve_Unknown2();

void ProcAchieve_Unknown2()
{

#pragma clang fp contract(off)
  unsigned __int64 v0;
  __int128 v1;
  unsigned __int64 v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if (GameData_21f61c8 <= 0) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_11;
    }
    v0 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v0 + 172) == *(float*)(v0 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v0 + 160) + 16LL))(v0 + 160);
    }
    else {
      v1 = *(_OWORD*)(v0 + 208);
    }
    if ((*((float*)&v1 + 3) != 0x1.0000000000000p+0f ||
         LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                      (_QWORD*)(*(_QWORD*)(v0 + 160) + 16LL))(
                         v0 + 160, *((float*)&v1 + 3)))
                 .n128_f32[3] != 0x1.0000000000000p+0f) &&
        (game_ProcFadeView_instance_ == 0 ||
         *(float*)((v2 = game_ProcFadeView_instance_ +
                         ((unsigned __int64)*(
                              unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
                          << 6)) +
                   172) == *(float*)(v2 + 168))) {
    LABEL_11:
      v3 = GameData_21f6248;
      if (GameData_21f6248 != 0) {
        v4 = (_QWORD*)GameData_21f6228;
        v5 = GameData_21f6240;
        v6 = fw_memory_g_heap_manager_ptr;
        do {
          if (GameData_21f6200 == 0 || GameData_21f6210 == 0) {
            goto LABEL_37;
          }
          v8 = GameData_21f6200 - 1;
          v9 = *(_QWORD*)(v4[v5 >> 9] + 8 * (v5 & 0x1FF));
          if ((GameData_21f6200 & (GameData_21f6200 - 1)) != 0) {
            v10 = *(_QWORD*)(v4[v5 >> 9] + 8 * (v5 & 0x1FF));
            if (v9 >= GameData_21f6200) {
              v10 = v9 % GameData_21f6200;
            }
          }
          else {
            v10 = v9 & v8;
          }
          v11 = *(_QWORD**)(GameData_21f61f8 + 8 * v10);
          if (v11 == nullptr) {
          LABEL_37:
            v12 = nullptr;
          }
          else {
            v12 = (_QWORD*)*v11;
            if (*v11 != 0) {
              if ((GameData_21f6200 & v8) == 0) {
                while (1) {
                  v14 = v12[1];
                  if (v14 == v9) {
                    if (v12[2] == v9) {
                      goto LABEL_38;
                    }
                  }
                  else if ((v14 & v8) != v10) {
                    goto LABEL_37;
                  }
                  v12 = (_QWORD*)*v12;
                  if (v12 == nullptr) {
                    goto LABEL_38;
                  }
                }
              }
              do {
                v13 = v12[1];
                if (v13 == v9) {
                  if (v12[2] == v9) {
                    break;
                  }
                }
                else {
                  if (v13 >= GameData_21f6200) {
                    v13 %= (unsigned __int64)GameData_21f6200;
                  }
                  if (v13 != v10) {
                    goto LABEL_37;
                  }
                }
                v12 = (_QWORD*)*v12;
              } while (v12 != nullptr);
            }
          }
        LABEL_38:
          GameData_21f6240 = ++v5;
          GameData_21f6248 = v3 - 1;
          if (v5 >= 0x400) {
            if (*v4 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
                v15 = 128;
              }
              else {
                v15 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v15);
              v4 = (_QWORD*)GameData_21f6228;
              v5 = GameData_21f6240;
            }
            ++v4;
            v5 -= 512LL;
            GameData_21f6228 = (__int64)v4;
            GameData_21f6240 = v5;
          }
          if (v12 == nullptr) {
            break;
          }
          v16 = v12[3];
          if (v16 == 0) {
            break;
          }
          if (game_GameModeData_instance_ != 0) {
            v17 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)(*(_QWORD*)(v16 + 24) + 32LL));
            v4 = (_QWORD*)GameData_21f6228;
            v5 = GameData_21f6240;
            if (v17 != 0 && *(_BYTE*)(v17 + 32) == 1) {
              game_VariableManager_SetFlag(*(_QWORD*)(v16 + 24) + 32LL, 2);
              GameRoutine_13741b0(v16);
              return;
            }
          }
          v3 = GameData_21f6248;
        } while (GameData_21f6248 != 0);
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f7e10,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21f7e10) != 0) {
        GameData_21f7e08 = (__int64)&GameData_1af90cb;
        GameData_21f7e00 = game_HashString((__int64)&GameData_1af90cb);
        __cxa_guard_release(&GameData_21f7e10);
      }
      GameRoutine_9b11a0(GameData_21f61c0, (unsigned __int64*)&GameData_21f7e00,
                         (unsigned __int16)GameData_21d87f8);
    }
  }
}

#pragma GCC visibility pop
