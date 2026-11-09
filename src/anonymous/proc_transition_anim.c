#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ControlCreator_13633c0(_QWORD);
__int64 GameRoutine_155ca60(__int64);
__int64 GameRoutine_155dbf0(float*);
__int64 GameRoutine_155e140(__int64*);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_156adc0(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*anonymous_ProcTransitionAnim_vtable[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 game_gameui_MenuAnimator_instance_;
__int64 ProcTransitionAnim_Destructor(__int64 a1);
__int64 ProcTransitionAnim_Unknown3(__int64 a1);

__int64 ProcTransitionAnim_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  *(_QWORD*)a1 = anonymous_ProcTransitionAnim_vtable;
  v2 = *(_QWORD*)(a1 + 152);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140((__int64*)(a1 + 168));
  GameRoutine_155ca60(a1 + 2392);
  v4 = *(_QWORD*)(a1 + 2384);
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_155ca60(a1 + 2160);
  v5 = *(_QWORD*)(a1 + 2152);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  GameRoutine_155ca60(a1 + 1928);
  v6 = *(_QWORD*)(a1 + 1920);
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  GameRoutine_155ca60(a1 + 1696);
  v7 = *(_QWORD*)(a1 + 1688);
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak(v7);
  }
  GameRoutine_155ca60(a1 + 1464);
  v8 = *(_QWORD*)(a1 + 1456);
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak(v8);
  }
  GameRoutine_155ca60(a1 + 1232);
  v9 = *(_QWORD*)(a1 + 1224);
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  GameRoutine_155ca60(a1 + 1000);
  v10 = *(_QWORD*)(a1 + 992);
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak(v10);
  }
  GameRoutine_155ca60(a1 + 768);
  v11 = *(_QWORD*)(a1 + 760);
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak(v11);
  }
  GameRoutine_155ca60(a1 + 536);
  v12 = *(_QWORD*)(a1 + 528);
  if (v12 != 0) {
    std___1___shared_weak_count___release_weak(v12);
  }
  GameRoutine_155ca60(a1 + 304);
  v13 = *(_QWORD*)(a1 + 296);
  if (v13 != 0) {
    std___1___shared_weak_count___release_weak(v13);
  }
  GameRoutine_155e140((__int64*)(a1 + 168));
  v14 = *(_QWORD*)(a1 + 264);
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  GameRoutine_1564060(a1 + 216);
  GameRoutine_1563f90(a1 + 192, *(_QWORD*)(a1 + 200));
  v15 = *(_QWORD*)(a1 + 176);
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak(v15);
  }
  v16 = *(_QWORD*)(a1 + 160);
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  game_gameui_MenuAnimator_instance_ = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcTransitionAnim_Unknown3(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 i;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  char v16;
  __int64 v17;
  __int64 v18;

  *(_BYTE*)(a1 + 2600) = 0;
  v2 = *(_QWORD*)(a1 + 176);
  if (v2 != 0 && (v3 = std___1___shared_weak_count_lock(v2)) != 0) {
    v4 = v3;
    result = ControlCreator_13633c0(*(_QWORD*)(a1 + 168));
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      result = std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    result = ControlCreator_13633c0(0);
  }
  v6 = a1 + 272;
  for (i = 2320; i != 0; i -= 232) {
    if (*(_QWORD*)v6 != -1) {
      v8 = *(_QWORD*)(v6 + 24);
      if (v8 != 0 && (v9 = std___1___shared_weak_count_lock(v8)) != 0) {
        v10 = v9;
        v11 = *(_QWORD*)(v6 + 16);
        if (v11 == 0 || *(_BYTE*)(v11 + 24) != 1) {
          goto LABEL_17;
        }
        v12 = *(_QWORD*)(v6 + 216);
        if (v12 != 0) {
          v13 = *(_QWORD*)(v6 + 208);
          v14 = *(_DWORD*)(v13 + 72);
          v15 = *(_DWORD*)(v13 + 76);
          v16 = *(_BYTE*)(v13 + 89);
          v17 = *(_QWORD*)(v13 + 48);
          *(_DWORD*)(v12 + 56) = *(_DWORD*)(v13 + 56);
          LOBYTE(v13) = *(_BYTE*)(v12 + 88);
          *(_QWORD*)(v12 + 48) = v17;
          *(_BYTE*)(v12 + 88) = v13 | 0x10;
          v18 = *(_QWORD*)(v6 + 216);
          LOBYTE(v13) = *(_BYTE*)(v18 + 88);
          *(_DWORD*)(v18 + 72) = v14;
          *(_DWORD*)(v18 + 76) = v15;
          *(_BYTE*)(v18 + 88) = v13 | 0x10;
          *(_BYTE*)(*(_QWORD*)(v6 + 216) + 89LL) = v16;
          ControlCreator_13633c0(v11);
        }
        result = GameRoutine_155dbf0((float*)(v6 + 32));
        if ((result & 1) != 0) {
        LABEL_17:
          result = GameRoutine_156adc0(v6);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          result = std___1___shared_weak_count___release_weak(v10);
        }
      }
      else {
        result = GameRoutine_156adc0(v6);
      }
    }
    v6 += 232;
  }
  return result;
}

#pragma GCC visibility pop
