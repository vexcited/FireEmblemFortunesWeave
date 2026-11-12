#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameHr_1366ac0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void game_1366bd0(PSEUDO_X8, __int64, __int64,
                                             __int64);
__int64 GameHr_1369920(__int64 result, char);
__int64 GameRoutine_1033670(__int64, int);
__int64 Manager_a4b3c0(__int64);
__int64 game_1366260(const char*, char);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 GameData_21f1dc8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 msg_MessageManager_instance_;
extern __int64 ui_Manager_instance_;
extern char GameData_21f1dd0;
extern char GameData_21f1dd8[];
extern char GameData_21f1dd9;
extern char GameData_21f1ddc;
void Manager_a4b6c0(__int64, char);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_anonymous_19b6940(__int64 a1);
void game_anonymous_19bef40(__int64 a1);
__int64 game_anonymous_1a098d0();

__int64 game_anonymous_19b6940(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;

  GameHr_1366ac0((void*)(&v7_.v7), (__int64)"Layout/Ending.arc",
                 (__int64)"Ending_AfterEpisode");
  v2 = v7_.v7;
  v3 = v7_.v8;
  v4 = *(_QWORD*)(a1 + 248);
  v7_.v7 = 0;
  v7_.v8 = 0;
  *(_QWORD*)(a1 + 240) = v2;
  *(_QWORD*)(a1 + 248) = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v7_.v8;
  if (v7_.v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7_.v8 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  return GameRoutine_1033670(a1, 0);
}

void game_anonymous_19bef40(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;
  struct {
    _QWORD v16[6];
    int v17;
    char gap68_[4];
    __int64 v18;
    __int64 v19;
    __int64 v20;
  } v16_;

  v16_.v18 = 0;
  v16_.v19 = 0;
  v16_.v20 = 0;
  v16_.v17 = 0;
  v16_.v16[0] = 0x800000018LL;
  v16_.v16[1] = 0x500000050LL;
  v16_.v16[2] = 0x10000000100000LL;
  memset(&v16_.v16[3], 0, 24);
  game_1366bd0((void*)(&v14_.v14), (__int64)"Layout/Ending.arc",
               (__int64)"Ending_StaffRoll", (__int64)v16_.v16);
  v2 = v14_.v14;
  v3 = v14_.v15;
  v4 = *(_QWORD*)(a1 + 272);
  v14_.v14 = 0;
  v14_.v15 = 0;
  *(_QWORD*)(a1 + 264) = v2;
  *(_QWORD*)(a1 + 272) = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v14_.v15;
  if (v14_.v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14_.v15 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = v16_.v18;
  if (v16_.v18 != 0) {
    v7 = v16_.v19;
    v8 = fw_memory_g_heap_manager_ptr;
    if (v16_.v18 == v16_.v19) {
      goto LABEL_18;
    }
    v9 = v16_.v19;
    do {
      v10 = *(_BYTE*)(v9 - 24);
      v9 -= 24;
      if ((v10 & 1) != 0) {
        v11 = *(_QWORD*)(v7 - 8);
        if (v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v12, v11);
        }
      }
      v7 = v9;
    } while (v9 != v6);
    v16_.v19 = v6;
    v6 = v16_.v18;
    if (v16_.v18 != 0) {
    LABEL_18:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v13, v6);
    }
  }
}

__int64 game_anonymous_1a098d0()
{
  __int64 result;

  Manager_a4b3c0(msg_MessageManager_instance_);
  Manager_a4b6c0(msg_MessageManager_instance_ + 14600, 1);
  GameHr_1369920(ui_Manager_instance_ + 1264, 1);
  GameData_21f1dd0 = 1;
  GameData_21f1dc8 = 0x101010101010101LL;
  game_1366260("Layout/Common.arc", 1);
  GameData_21f1dd8[0] = 1;
  game_1366260("Layout/CommonMenu.arc", 1);
  GameData_21f1dd9 = 1;
  result = game_1366260("Layout/Hub.arc", 1);
  GameData_21f1ddc = 1;
  return result;
}

#pragma GCC visibility pop
