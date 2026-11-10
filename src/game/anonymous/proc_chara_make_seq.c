#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_UnitEdit_vtable[])();
extern __int64 (*game_anonymous_CharacterHolder_vtable[])();
extern __int64 (*game_anonymous_ProcCharaMakeSeq_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcCharaMakeSeq_Destructor(__int64 a1);
__int64 CharacterAppearance_10735d0(_QWORD);
__int64 GameRoutine_1072580(_QWORD, _QWORD);
__int64 GameRoutine_10784f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1079580(_QWORD, _QWORD, float, float, float);
__int64 GameRoutine_107e140(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_10e8690(_QWORD);
__int64 GameRoutine_120f4c0(_QWORD, _QWORD);
__int64 GameRoutine_162c2a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_179c0a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ecb40(void);
__int64 ProcRegistry_65a640(_QWORD);
__int64 Seq_a85600(_QWORD);
__int64 TrickEntity_7d1480(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameView_Update(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _DWORD GameData_21d925c[32];
extern _UNKNOWN* GameData_212deb8;
extern __int64 (*GameData_1fb1658[])();
extern __int64 (*GameData_1fb16d8[])();
extern __int64 (*GameData_1fb1758[])();
extern __int64 (*GameData_1fb17d8[])();
extern __int64 (*GameData_1fb1858[])();
extern __int64 (*GameData_1fb18d8[])();
extern __int64 (*GameData_1fb1958[])();
extern __int64 (*GameData_1fb19d8[])();
extern __int64 GameData_212c638;
extern __int64 GameData_21c6978;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d3c8[3];
extern int GameData_21d92dc;
extern int GameData_21d92e0;
extern int* GameData_212deb0;
__int64 game_anonymous_ProcCharaMakeSeq_CreateCharacter(__int64 a1);
bool ProcCharaMakeSeq_97c420(__int64 a1);
__int64 game_anonymous_ProcCharaMakeSeq_CreateMenu(__int64 a1);
__int64 ProcCharaMakeSeq_97c900(__int64 result);
__int64 ProcCharaMakeSeq_97c950(__int64 a1);
__int64 ProcCharaMakeSeq_97c9b0(__int64 a1);
__int64
game_anonymous_ProcCharaMakeSeq_CreateCharacter_closure_Invoke(__int64 a1,
                                                               __int64 a2);
__int64
game_anonymous_ProcCharaMakeSeq_CreateCharacter_closure0_Invoke(__int64 a1,
                                                                __int64 a2);
__int64 game_anonymous_ProcCharaMakeSeq_CreateMenu_closure_Invoke(__int64 a1);
__int64 ProcCharaMakeSeq_97cd20(__int64 result, __int64 a2);
__int64 game_anonymous_ProcCharaMakeSeq_CreateMenu_closure0_Invoke(__int64 a1);
__int64 game_anonymous_ProcCharaMakeSeq_CreateMenu_closure1_Invoke(__int64 a1);
__int64 game_anonymous_ProcCharaMakeSeq_CreateMenu_closure2_Invoke(__int64 a1);
__int64 game_anonymous_ProcCharaMakeSeq_CreateMenu_closure3_Invoke(__int64 a1);
__int64 game_anonymous_ProcCharaMakeSeq_CreateMenu_closure4_Invoke(__int64 a1);

__int64 game_anonymous_ProcCharaMakeSeq_CreateCharacter(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD v19[4];
  _QWORD* v20;
  _BYTE v21[480];
  _QWORD* v22;
  _QWORD* v23;

  GameRoutine_179c0a0(v21, a1 + 152, 0);
  v2 = v19;
  v19[0] = GameData_1fb1658;
  v3 = *(_QWORD*)(a1 + 240);
  v20 = v19;
  if (v3 != 0) {
    goto LABEL_2;
  }
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
  v9[2] = 0;
  v10 = v9 + 3;
  v11 = v9;
  *v9 = GameData_212d3c8[0] + 2;
  v9[1] = 0;
  CharacterAppearance_10735d0(v9 + 3);
  v22 = v10;
  v23 = v11;
  GameRoutine_1072580(v10, v21);
  v12 = GameRoutine_10784f0(&v22, 0, v19);
  v13 = v23;
  *(_QWORD*)(a1 + 240) = v12;
  if (v13 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v13 + 1),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  v2 = v20;
  if (v20 == v19) {
  LABEL_2:
    v4 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_4;
    }
    v4 = 40;
  }
  (*(void (**)(_QWORD*))(*v2 + v4))(v2);
LABEL_4:
  TrickEntity_7d1480(v21);
  *(_BYTE*)(*(_QWORD*)(a1 + 240) + 289LL) = 0;
  GameRoutine_179c0a0(v21, a1 + 192, 0);
  v5 = v19;
  v19[0] = GameData_1fb16d8;
  v6 = *(_QWORD*)(a1 + 256);
  v20 = v19;
  if (v6 != 0) {
    goto LABEL_5;
  }
  v14 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
  v14[2] = 0;
  v15 = v14 + 3;
  v16 = v14;
  *v14 = GameData_212d3c8[0] + 2;
  v14[1] = 0;
  CharacterAppearance_10735d0(v14 + 3);
  v22 = v15;
  v23 = v16;
  GameRoutine_1072580(v15, v21);
  v17 = GameRoutine_10784f0(&v22, 0, v19);
  v18 = v23;
  *(_QWORD*)(a1 + 256) = v17;
  if (v18 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v18 + 1),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  v5 = v20;
  if (v20 == v19) {
  LABEL_5:
    v7 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_7;
    }
    v7 = 40;
  }
  (*(void (**)(_QWORD*))(*v5 + v7))(v5);
LABEL_7:
  result = TrickEntity_7d1480(v21);
  *(_BYTE*)(*(_QWORD*)(a1 + 256) + 289LL) = 0;
  return result;
}

bool ProcCharaMakeSeq_97c420(__int64 a1)
{
  __int64 v1;
  atomic_uchar* v2;
  int* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _BOOL8 result;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;

  v1 = *(_QWORD*)(a1 + 240);
  v2 = (atomic_uchar*)GameData_212deb8;
  v3 = GameData_212deb0;
  if (v1 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                              memory_order_acquire) &
         1) == 0) {
      v35 = a1;
      v34 = v1;
      v25 = __cxa_guard_acquire(GameData_212deb8);
      v1 = v34;
      v26 = v25;
      v2 = (atomic_uchar*)GameData_212deb8;
      v3 = GameData_212deb0;
      a1 = v35;
      if (v26 != 0) {
        *GameData_212deb0 = wld_Crc32(0, "CharacterBuilder", 16);
        __cxa_guard_release(GameData_212deb8, v27, v28, v29);
        v1 = v34;
        v2 = (atomic_uchar*)GameData_212deb8;
        v3 = GameData_212deb0;
        a1 = v35;
      }
    }
    v5 = *(_QWORD*)(v1 + 504);
    v4 = *(_QWORD*)(v1 + 512);
    v6 = v4;
    v7 = v4;
    while (v7 != v5) {
      v8 = *(_DWORD*)(v7 - 16);
      v7 -= 16;
      v6 -= 16;
      if (v8 == *v3) {
        if (v4 != v6) {
          v9 = *(_QWORD*)(v6 + 8);
          if (v9 != 0 && (*(_BYTE*)(v9 + 342) & 1) == 0) {
            return true;
          }
        }
        break;
      }
    }
  }
  v10 = *(_QWORD*)(a1 + 256);
  if (v10 != 0) {
    if ((atomic_load_explicit(v2, memory_order_acquire) & 1) == 0) {
      v36 = v10;
      v30 = __cxa_guard_acquire(GameData_212deb8);
      v10 = v36;
      v3 = GameData_212deb0;
      if (v30 != 0) {
        *GameData_212deb0 = wld_Crc32(0, "CharacterBuilder", 16);
        __cxa_guard_release(GameData_212deb8, v31, v32, v33);
        v10 = v36;
        v3 = GameData_212deb0;
      }
    }
    v11 = *v3;
    v14 = v10 + 504;
    v13 = *(_QWORD*)(v10 + 504);
    v12 = *(_QWORD*)(v14 + 8);
    v15 = v12;
    v16 = v12;
    while (v16 != v13) {
      v17 = *(_DWORD*)(v16 - 16);
      v16 -= 16;
      v15 -= 16;
      if (v17 == v11) {
        if (v12 != v15) {
          v18 = *(_QWORD*)(v15 + 8);
          if (v18 != 0 && (*(_BYTE*)(v18 + 342) & 1) == 0) {
            return true;
          }
        }
        break;
      }
    }
  }
  v19 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
  if (*(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL) == v19) {
    v20 = 0;
    if ((GameRoutine_ecb40() & 1) != 0) {
      goto LABEL_21;
    }
    return true;
  }
  v20 = *(_QWORD*)(v19 - 8);
  if ((GameRoutine_ecb40() & 1) == 0) {
    return true;
  }
LABEL_21:
  v21 = *(_QWORD*)(v20 + 64);
  if (v21 == 0) {
    return false;
  }
  v22 = *(_QWORD*)(v21 + 96);
  if (v22 == 0 || *(_DWORD*)(v22 + 240) != 5) {
    return true;
  }
  v23 = (_QWORD*)(v21 + 120);
  do {
    v23 = (_QWORD*)*v23;
    result = v23 != nullptr;
  } while (v23 != nullptr && *(_DWORD*)(v23[5] + 240LL) == 5);
  return result;
}

__int64 game_anonymous_ProcCharaMakeSeq_CreateMenu(__int64 a1)
{
  __int64 v1;
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
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[4];
  _QWORD* v19;
  _QWORD v20[4];
  _QWORD* v21;
  _QWORD v22[4];
  _QWORD* v23;
  _QWORD v24[4];
  _QWORD* v25;
  _QWORD v26[4];
  _QWORD* v27;
  _QWORD v28[4];
  _QWORD* v29;
  __int64 v30;
  __int64 v31;

  v30 = 0;
  v31 = 0;
  v1 = *(_QWORD*)(a1 + 240);
  v26[0] = GameData_1fb17d8;
  v26[1] = a1;
  v28[0] = GameData_1fb1758;
  v28[1] = a1;
  v22[0] = GameData_1fb18d8;
  v22[1] = a1;
  v29 = v28;
  v23 = v22;
  v27 = v26;
  v20[0] = GameData_1fb1958;
  v20[1] = a1;
  v24[0] = GameData_1fb1858;
  v24[1] = a1;
  v21 = v20;
  v25 = v24;
  v2 = *(_QWORD*)(a1 + 256);
  v18[0] = GameData_1fb19d8;
  v18[1] = a1;
  v19 = v18;
  v3 = *(_QWORD*)(GameData_21c6978 + 32);
  if (*(_QWORD*)(GameData_21c6978 + 24) == v3 ||
      (v4 = *(_QWORD*)(v3 - 8)) == 0) {
    v16 = 0;
    v17 = 0;
  }
  else {
    v6 = *(_QWORD*)(v4 + 24);
    v5 = *(_QWORD*)(v4 + 32);
    v16 = v6;
    v17 = v5;
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  GameRoutine_162c2a0(a1, &v30, a1 + 152, v1, v28, v26, v24, a1 + 192, v2, v22,
                      v20, v18, &v16);
  v7 = v17;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  if (v19 == v18) {
    v8 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_14;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v19 + v8))((__int64)v19);
LABEL_14:
  if (v21 == v20) {
    v9 = 32;
  }
  else {
    if (v21 == nullptr) {
      goto LABEL_19;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v21 + v9))((__int64)v21);
LABEL_19:
  if (v23 == v22) {
    v10 = 32;
  }
  else {
    if (v23 == nullptr) {
      goto LABEL_24;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v23 + v10))((__int64)v23);
LABEL_24:
  if (v25 == v24) {
    v11 = 32;
  }
  else {
    if (v25 == nullptr) {
      goto LABEL_29;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v25 + v11))((__int64)v25);
LABEL_29:
  if (v27 == v26) {
    v12 = 32;
  }
  else {
    if (v27 == nullptr) {
      goto LABEL_34;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v27 + v12))((__int64)v27);
LABEL_34:
  result = (__int64)v29;
  if (v29 == v28) {
    v14 = 32;
  }
  else {
    if (v29 == nullptr) {
      goto LABEL_39;
    }
    v14 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v29 + v14))((__int64)v29);
LABEL_39:
  v15 = v31;
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    return std___1___shared_weak_count___release_weak(v15);
  }
  return result;
}

__int64 ProcCharaMakeSeq_97c900(__int64 result)
{
  _QWORD* v1;
  __int64 v2;

  v1 = (_QWORD*)(result + 240);
  v2 = result;
  if (*(_QWORD*)(result + 240) != 0) {
    result = GameRoutine_a867a0(result + 240);
    *v1 = 0;
  }
  if (*(_QWORD*)(v2 + 256) != 0) {
    result = GameRoutine_a867a0(v2 + 256);
    *(_QWORD*)(v2 + 256) = 0;
  }
  return result;
}

__int64 ProcCharaMakeSeq_97c950(__int64 a1)
{
  __int64 v2;

  v2 = --GameData_21d92dc;
  GameData_21d92e0 = GameData_21d925c[v2];
  game_GameView_Update(a1);
  Seq_a85600(GameData_21c6978);
  return ProcRegistry_65a640(a1);
}

__int64 ProcCharaMakeSeq_97c9b0(__int64 a1)
{
  __int64 result;

  result = GameRoutine_120f4c0(a1 + 152, 4);
  if (game_GameModeData_instance_ != 0) {
    ++*(_WORD*)(game_GameModeData_instance_ + 2720);
  }
  return result;
}

__int64

game_anonymous_ProcCharaMakeSeq_CreateCharacter_closure_Invoke(__int64 a1,
                                                               __int64 a2)
{
  return GameRoutine_1079580(*(_QWORD*)(*(_QWORD*)a2 + 72LL), 3240246578LL,
                             -1.0, -1.0, 1.0);
}

__int64

game_anonymous_ProcCharaMakeSeq_CreateCharacter_closure0_Invoke(__int64 a1,
                                                                __int64 a2)
{
  return GameRoutine_1079580(*(_QWORD*)(*(_QWORD*)a2 + 72LL), 3240246578LL,
                             -1.0, -1.0, 1.0);
}

__int64 game_anonymous_ProcCharaMakeSeq_CreateMenu_closure_Invoke(__int64 a1)
{
  __int64 v1;
  _BYTE v3[480];

  v1 = *(_QWORD*)(a1 + 8);
  GameRoutine_179c0a0(v3, v1 + 152, 1);
  ProcCharaMakeSeq_97cd20(*(_QWORD*)(v1 + 240), v3);
  return TrickEntity_7d1480(v3);
}

__int64 ProcCharaMakeSeq_97cd20(__int64 result, __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _BYTE v31[32];
  _BYTE* v32;
  _QWORD* v33;
  _QWORD* v34;

  if (result != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                    memory_order_acquire);
    v3 = GameData_212deb0;
    if ((explicit & 1) == 0) {
      v24 = result;
      v25 = a2;
      v26 = __cxa_guard_acquire(GameData_212deb8);
      a2 = v25;
      v27 = v26;
      result = v24;
      if (v27 != 0) {
        *v3 = wld_Crc32(0, "CharacterBuilder", 16);
        __cxa_guard_release(GameData_212deb8, v28, v29, v30);
        result = v24;
        a2 = v25;
      }
    }
    v4 = *(_QWORD*)(result + 512);
    v5 = v4;
    do {
      if (v5 == *(_QWORD*)(result + 504)) {
        return result;
      }
      v6 = *(_DWORD*)(v5 - 16);
      v5 -= 16;
      v4 -= 16;
    } while (v6 != *v3);
    if (*(_QWORD*)(result + 512) != v4) {
      v7 = *(_QWORD*)(v4 + 8);
      if (v7 != 0) {
        v8 = *(_QWORD*)(v7 + 392);
        v9 = *(_QWORD*)(v7 + 400);
        if (v9 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                    memory_order_relaxed);
          v10 = *(_QWORD*)(v8 + 168);
          v11 = *(_QWORD*)(a2 + 472);
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v12 = a2;
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            result = std___1___shared_weak_count___release_weak(v9);
            a2 = v12;
          }
          if (v10 == v11) {
            return result;
          }
        }
        else if (*(_QWORD*)(v8 + 168) == *(_QWORD*)(a2 + 472)) {
          return result;
        }
        v13 = a2;
        if ((*(_BYTE*)(v7 + 264) & 1) != 0) {
        LABEL_17:
          v16 = (_QWORD*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
          v16[2] = 0;
          v17 = v16 + 3;
          v18 = v16;
          *v16 = GameData_212d3c8[0] + 2;
          v16[1] = 0;
          CharacterAppearance_10735d0(v16 + 3);
          v33 = v17;
          v34 = v18;
          GameRoutine_1072580(v17, v13);
          v32 = nullptr;
          GameRoutine_107e140(v7, &v33, v31);
          result = (__int64)v32;
          if (v32 == v31) {
            v19 = 32;
          }
          else {
            if (v32 == nullptr) {
              goto LABEL_30;
            }
            v19 = 40;
          }
          result = (*(__int64 (**)(void))(*(_QWORD*)v32 + v19))();
        LABEL_30:
          v23 = v34;
          if (v34 != nullptr &&
              atomic_fetch_add((atomic_ullong* volatile)(v34 + 1),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(_QWORD*))(*v23 + 16LL))(v23);
            return std___1___shared_weak_count___release_weak(v23);
          }
          return result;
        }
        GameRoutine_10e8690(*(_QWORD*)(v7 + 584));
        v14 = *(_QWORD*)(v7 + 240);
        v15 = *(_QWORD*)(v7 + 248);
        if (v14 == v15) {
        LABEL_16:
          *(_QWORD*)(v7 + 248) = v14;
          goto LABEL_17;
        }
        while (1) {
          v20 = *(_QWORD**)(v15 - 16);
          if ((_QWORD*)(v15 - 48) == v20) {
            break;
          }
          if (v20 != nullptr) {
            v21 = 40;
          LABEL_25:
            (*(void (**)(void))(*v20 + v21))();
          }
          v22 = *(_QWORD*)(v15 - 64);
          if (v22 != 0) {
            std___1___shared_weak_count___release_weak(v22);
          }
          v15 -= 80;
          if (v15 == v14) {
            goto LABEL_16;
          }
        }
        v21 = 32;
        goto LABEL_25;
      }
    }
  }
  return result;
}

__int64 game_anonymous_ProcCharaMakeSeq_CreateMenu_closure0_Invoke(__int64 a1)
{
  __int64 v1;
  _BYTE v3[480];

  v1 = *(_QWORD*)(a1 + 8);
  GameRoutine_179c0a0(v3, v1 + 152, 0);
  ProcCharaMakeSeq_97cd20(*(_QWORD*)(v1 + 240), (__int64)v3);
  return TrickEntity_7d1480(v3);
}

__int64 game_anonymous_ProcCharaMakeSeq_CreateMenu_closure1_Invoke(__int64 a1)
{
  __int64 v1;
  _BYTE v3[480];

  v1 = *(_QWORD*)(a1 + 8);
  GameRoutine_179c0a0(v3, v1 + 152, 2);
  ProcCharaMakeSeq_97cd20(*(_QWORD*)(v1 + 240), (__int64)v3);
  return TrickEntity_7d1480(v3);
}

__int64 game_anonymous_ProcCharaMakeSeq_CreateMenu_closure2_Invoke(__int64 a1)
{
  __int64 v1;
  _BYTE v3[480];

  v1 = *(_QWORD*)(a1 + 8);
  GameRoutine_179c0a0(v3, v1 + 192, 1);
  ProcCharaMakeSeq_97cd20(*(_QWORD*)(v1 + 256), (__int64)v3);
  return TrickEntity_7d1480(v3);
}

__int64 game_anonymous_ProcCharaMakeSeq_CreateMenu_closure3_Invoke(__int64 a1)
{
  __int64 v1;
  _BYTE v3[480];

  v1 = *(_QWORD*)(a1 + 8);
  GameRoutine_179c0a0(v3, v1 + 192, 0);
  ProcCharaMakeSeq_97cd20(*(_QWORD*)(v1 + 256), (__int64)v3);
  return TrickEntity_7d1480(v3);
}

__int64 game_anonymous_ProcCharaMakeSeq_CreateMenu_closure4_Invoke(__int64 a1)
{
  __int64 v1;
  _BYTE v3[480];

  v1 = *(_QWORD*)(a1 + 8);
  GameRoutine_179c0a0(v3, v1 + 192, 2);
  ProcCharaMakeSeq_97cd20(*(_QWORD*)(v1 + 256), (__int64)v3);
  return TrickEntity_7d1480(v3);
}

__int64 ProcCharaMakeSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  char v6;
  __int64 v7;

  *(_QWORD*)a1 = game_anonymous_ProcCharaMakeSeq_vtable;
  v2 = *(_QWORD*)(a1 + 256);
  *(_QWORD*)(a1 + 248) = game_anonymous_CharacterHolder_vtable;
  if (v2 != 0) {
    GameRoutine_a867a0(a1 + 256);
    *(_QWORD*)(a1 + 256) = 0;
  }
  v3 = *(_QWORD*)(a1 + 240);
  *(_QWORD*)(a1 + 232) = game_anonymous_CharacterHolder_vtable;
  if (v3 != 0) {
    GameRoutine_a867a0(a1 + 240);
    *(_QWORD*)(a1 + 240) = 0;
  }
  v4 = *(_BYTE*)(a1 + 200);
  *(_QWORD*)(a1 + 192) = game_UnitEdit_vtable;
  if ((v4 & 1) != 0 && *(_QWORD*)(a1 + 216) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  v6 = *(_BYTE*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = game_UnitEdit_vtable;
  if ((v6 & 1) != 0 && *(_QWORD*)(a1 + 176) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
