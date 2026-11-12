#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_6ed030(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
__int64 GetItemMenuItem_Unknown55(__int64 a1);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameHr_6ed030(__int64);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameHr_a51e10(__int64, unsigned int, unsigned int, int);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");

__int64 GetItemMenuItem_Unknown55(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  char* v5;
  unsigned int v6;
  __int64* v7;
  const char* v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  bool v15;
  unsigned __int64 v16;
  _BYTE* v17;
  _BYTE* v18;
  _BYTE* v19;

  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v3 = *(__int64**)(a1 + 48);
      v4 = result;
      if (v3 != nullptr) {
        LayoutAccessor_1562cf0(*(_QWORD*)(a1 + 48), "Action");
        v5 = GameHr_6ed030(*(_QWORD*)(a1 + 88));
        v6 = *(_DWORD*)(a1 + 96);
        v7 = msg_MessageManager_instance__ptr[0];
        if (v5 != nullptr) {
          v8 = v5;
        }
        else {
          v8 = *msg_MessageManager_empty_text__ptr;
        }
        GameRoutine_60a020_alt1(*msg_MessageManager_instance__ptr[0] + 14704,
                                v8);
        GameHr_a51e10(*v7 + 14704, 1u, v6, 0);
        v9 = GameRoutine_a4dbe0_alt1(*v7, "MID_HonorLvMenu_GetItem", 0);
        if (v9 != nullptr) {
          v10 = (__int64)v9;
          v11 = ui_LayoutAccessor_FindTextBox_alt1(v3, (__int64)"T_Txt");
          if (v11 != 0) {
            GameRoutine_156c5d0_alt1(v11, v10, 0);
          }
        }
        result = ui_LayoutAccessor_FindPane_alt1(v3, (__int64)"Icon");
        if (result != 0) {
          result = __dynamic_cast(result, GameData_212d670[0],
                                  GameData_212d678[0], 0);
          if (result != 0) {
            v12 = *(_QWORD*)(a1 + 88);
            if (v12 != 0) {
              v13 = *(_QWORD*)(v12 + 24);
              v14 = *(unsigned __int8*)(v13 + 560);
              v15 = (v14 & 1) == 0;
              if ((v14 & 1) != 0) {
                v16 = *(_QWORD*)(v13 + 568);
              }
              else {
                v16 = v14 >> 1;
              }
              v17 = *(_BYTE**)(v13 + 576);
              v18 = (_BYTE*)(v13 + 561);
              if (!v15) {
                v18 = v17;
              }
              if (v16 != 0) {
                v19 = v18;
              }
              else {
                v19 = nullptr;
              }
              result = Manager_136a920(ui_Manager_instance_ + 1264, result, 0,
                                       2u, v19);
            }
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak_alt1(v4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
