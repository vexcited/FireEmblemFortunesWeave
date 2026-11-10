#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18a7690(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c878[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21f1e08;
__attribute__((swiftcall)) void
MenuItemMorphSkill_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2);
__attribute__((swiftcall)) void

MenuItemMorphSkill_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  __int64 v16;

  if (*(_DWORD*)(a2 + 8) == 45 && GameData_21f1e08 != 0) {
    v3 = *(_QWORD*)(GameData_21f1e08 + 144);
    if (v3 != 0) {
      v4 = *(_QWORD*)(GameData_21f1e08 + 136);
      v5 = result;
      v6 = *(_QWORD*)(GameData_21f1e08 + 144);
      v7 = a3;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      v8 = std___1___shared_weak_count_lock(v6);
      result = std___1___shared_weak_count___release_weak(v3);
      a3 = v7;
      if (v8 != 0) {
        if (v4 != 0) {
          v9 = *(_QWORD*)(v5 + 32);
          v10 = v5;
          if (v9 != 0 && *(_QWORD*)v9 != 0) {
            v16 = 0x100000000LL;
            LOWORD(v16) = *(_WORD*)(v9 + 16);
            if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * (unsigned __int16)v16) +
                          73LL) == 17) {
              nn_os_LockMutex(&game_g_random_mutex);
              v11 = game_map_MapRandom_instance__ptr[0];
              v12 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                               (unsigned __int64)((_UNKNOWN**)0x8LL));
              v13 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                               (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
              v14 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                    (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
              *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                  *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
              *((_DWORD*)v11 + 1) = v12;
              v15 = (v14 >> 8) ^ (v13 >> 19) ^ v14 ^ v13;
              *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11) = v13;
              *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11 + 4) = v15;
              nn_os_UnlockMutex(&game_g_random_mutex);
              v10 = v5;
              HIDWORD(v16) =
                  (16 * ((_WORD)v15 -
                         1000 *
                             (unsigned __int16)((v15 & 0x7FFFFFFFu) / 0x3E8)) +
                   16) &
                      0x3FF0 |
                  1;
            }
            result = GameRoutine_18a7690(v4, &v16, *(_QWORD*)(v10 + 24), 0);
            a3 = v7;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          result = std___1___shared_weak_count___release_weak(v8);
          a3 = v7;
        }
      }
    }
  }
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
