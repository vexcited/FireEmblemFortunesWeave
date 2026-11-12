#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1723840(_QWORD, _QWORD, _QWORD);
__int64 ObeliskHeroRetryMenuItem_Unknown25(__int64 a1);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64 msg_MessageManager_instance_;
void GameRoutine_156c5d0(__int64, __int64, char);
void game_menu_GameMenuItem_DrawText(_QWORD*);
__int64 ObeliskHeroRetryMenuItem_Unknown55(__int64 a1);

__int64 ObeliskHeroRetryMenuItem_Unknown55(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  const char* v5;
  char* v6;
  __int64 v7;
  __int64 v8;

  game_menu_GameMenuItem_DrawText((_QWORD*)a1);
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(__int64**)(a1 + 48);
      v4 = result;
      if (v3 != nullptr) {
        if (*(_DWORD*)(a1 + 84) == 3) {
          v5 = "MID_HeroMenu_Restart_Part3";
        }
        else {
          v5 = "MID_HeroMenu_Restart";
        }
        v6 = GameRoutine_a4dbe0(msg_MessageManager_instance_, v5, 0);
        if (v6 != nullptr) {
          v7 = (__int64)v6;
          v8 = ui_LayoutAccessor_FindTextBox(v3, "T_Txt");
          if (v8 != 0) {
            GameRoutine_156c5d0(v8, v7, 0);
          }
        }
        result = LayoutAccessor_1562cf0((__int64)v3,
                                        (unsigned int*)"Large_StatusOff");
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

__int64 ObeliskHeroRetryMenuItem_Unknown25(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v1 = *(_QWORD*)(v1 + 152);
  }
  GameRoutine_1723840(v1, *(unsigned __int8*)(a1 + 83),
                      *(unsigned int*)(a1 + 84));
  return 10;
}

#pragma GCC visibility pop
