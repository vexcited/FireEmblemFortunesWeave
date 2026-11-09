#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16758d0(_QWORD, _QWORD);
__int64 GameRoutine_1675d00(_QWORD);
__int64 GameRoutine_1675e00(_QWORD);
__int64 GameRoutine_80ca30(_QWORD);
__int64 ListMenuItem_16734f0(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_BgmEncountMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_SettingMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 BgmEncountMenuItem_Destructor(__int64 a1);
__int64 BgmEncountMenuItem_Unknown19(__int64 result);
__int64 BgmEncountMenuItem_Unknown20(__int64 a1);
__int64 BgmEncountMenuItem_Unknown58(__int64 a1);

__int64 BgmEncountMenuItem_Destructor(__int64 a1)
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
  *(_QWORD*)a1 = game_menu_anonymous_BgmEncountMenuItem_vtable;
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

__int64 BgmEncountMenuItem_Unknown19(__int64 result)
{
  __int64 v1;
  _QWORD v2[2];

  if (*(_BYTE*)(result + 192) == 1) {
    v1 = *(_QWORD*)(result + 128);
    v2[0] = *(_QWORD*)(result + 120);
    v2[1] = v1;
    if (v1 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_16758d0(result + 144, v2);
      return std___1___shared_weak_count___release_weak(v1);
    }
    else {
      return GameRoutine_16758d0(result + 144, v2);
    }
  }
  return result;
}

__int64 BgmEncountMenuItem_Unknown20(__int64 a1)
{
  __int64 v2;
  _QWORD v4[2];

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
  return GameRoutine_1675e00(a1);
}

__int64 BgmEncountMenuItem_Unknown58(__int64 a1)
{
  return (unsigned int)GameRoutine_80ca30(a1) &
         (*(_QWORD*)(a1 + 160) != *(_QWORD*)(a1 + 152));
}

#pragma GCC visibility pop
