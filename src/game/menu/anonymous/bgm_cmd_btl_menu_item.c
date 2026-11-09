#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_159e7c0(_QWORD, _QWORD);
__int64 GameRoutine_1675d00(__int64*);
__int64 GameRoutine_1677660(_QWORD);
__int64 GameRoutine_1677840(_QWORD);
__int64 ListMenuItem_16734f0(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_BgmCmdBtlMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_SettingMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_16758d0(__int64, _QWORD*);
__int64 BgmCmdBtlMenuItem_Destructor(__int64 a1);
void BgmCmdBtlMenuItem_Unknown19(__int64 a1);
__int64 BgmCmdBtlMenuItem_Unknown20(__int64 a1);
__int64 BgmCmdBtlMenuItem_Unknown39(_QWORD* a1, char a2);
__int64 BgmCmdBtlMenuItem_Unknown40(__int64 a1, char a2);

__int64 BgmCmdBtlMenuItem_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;

  v1 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_menu_anonymous_BgmCmdBtlMenuItem_vtable;
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 160);
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_12;
    }
    v5 = *(_QWORD*)(a1 + 160);
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0) {
        v7 = *(_QWORD*)(v3 - 8);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
        }
      }
      v3 = v5;
    } while (v5 != v1);
    v9 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 160) = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v1);
    }
  }
  v11 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)a1 = game_menu_anonymous_SettingMenuItem_vtable;
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = *(_QWORD*)(a1 + 112);
  if (v12 != 0) {
    std___1___shared_weak_count___release_weak(v12);
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v14 = *(_QWORD*)(a1 + 32);
    if (v14 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v14);
    }
  }
  return result;
}

void BgmCmdBtlMenuItem_Unknown19(__int64 a1)
{
  __int64 v1;
  _QWORD v2[2];

  if (*(_BYTE*)(a1 + 194) == 1) {
    v1 = *(_QWORD*)(a1 + 128);
    v2[0] = *(_QWORD*)(a1 + 120);
    v2[1] = v1;
    if (v1 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_16758d0(a1 + 144, v2);
      std___1___shared_weak_count___release_weak(v1);
    }
    else {
      GameRoutine_16758d0(a1 + 144, v2);
    }
  }
}

__int64 BgmCmdBtlMenuItem_Unknown20(__int64 a1)
{
  __int64 v2;
  __int64 v4[2];

  ListMenuItem_16734f0(a1);
  v2 = *(_QWORD*)(a1 + 128);
  v4[0] = *(_QWORD*)(a1 + 120);
  v4[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1675d00(v4);
    std___1___shared_weak_count___release_weak(v2);
  }
  else {
    GameRoutine_1675d00(v4);
  }
  return GameRoutine_1677660(a1);
}

__int64 BgmCmdBtlMenuItem_Unknown39(_QWORD* a1, char a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 0;
  }
  if ((a1[23] & 1) == 0) {
    a1[22] = 0;
    goto LABEL_6;
  }
  v4 = a1[22];
  if (v4 >= -1 - 0x5555555555555555LL * ((__int64)(a1[20] - a1[19]) >> 3)) {
    if ((a2 & 1) != 0) {
      *((_BYTE*)a1 + 184) = 0;
      goto LABEL_7;
    }
    return 0;
  }
  a1[22] = v4 + 1;

LABEL_6:
  *((_BYTE*)a1 + 184) = 1;

LABEL_7:
  GameRoutine_1677840(a1);
  (*(void (**)(_QWORD*))(*a1 + 440LL))(a1);
  v5 = a1[16];
  if (v5 != 0) {
    v6 = a1[15];
    v7 = a1[16];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v8 = std___1___shared_weak_count_lock(v7);
    if (v8 != 0) {
      v9 = v8;
      if (v6 != 0) {
        GameRoutine_159e7c0(v6, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
    std___1___shared_weak_count___release_weak(v5);
  }
  GameRoutine_1677660(a1);
  return 1;
}

__int64 BgmCmdBtlMenuItem_Unknown40(__int64 a1, char a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) != 0) {
    if ((*(_BYTE*)(a1 + 184) & 1) != 0) {
      v4 = *(_QWORD*)(a1 + 176);
      if (v4 == 0) {
        goto LABEL_8;
      }
      goto LABEL_7;
    }
    if ((a2 & 1) != 0) {
      v4 = 0xAAAAAAAAAAAAAAABLL *
           ((__int64)(*(_QWORD*)(a1 + 160) - *(_QWORD*)(a1 + 152)) >> 3);
    LABEL_7:
      *(_QWORD*)(a1 + 176) = v4 - 1;
      LOBYTE(v4) = 1;
    LABEL_8:
      *(_BYTE*)(a1 + 184) = v4;
      GameRoutine_1677840(a1);
      (*(void (**)(__int64))(*(_QWORD*)a1 + 440LL))(a1);
      v5 = *(_QWORD*)(a1 + 128);
      if (v5 != 0) {
        v6 = *(_QWORD*)(a1 + 120);
        v7 = *(_QWORD*)(a1 + 128);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                  memory_order_relaxed);
        v8 = std___1___shared_weak_count_lock(v7);
        if (v8 != 0) {
          v9 = v8;
          if (v6 != 0) {
            GameRoutine_159e7c0(v6, 1);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            std___1___shared_weak_count___release_weak(v9);
          }
        }
        std___1___shared_weak_count___release_weak(v5);
      }
      GameRoutine_1677660(a1);
      return 1;
    }
  }
  return 0;
}

#pragma GCC visibility pop
