#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_17e5d20(_QWORD, _QWORD);
__int64 GameRoutine_17e5d20_alt1(_QWORD*, int) __asm__("GameRoutine_17e5d20");
__int64 GameRoutine_17e6a30(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 PageTab_16e6880(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 game_sound_PlayPageBackSe(_QWORD);
__int64 game_sound_PlayPageSendSe(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 TutorialInfoImpl_17e5b40(__int64 result, __int64 a2);
__int64 TutorialInfoImpl_17e6660(__int64 a1, unsigned __int8 a2, char a3);
__int64 TutorialInfoImpl_17e67b0(__int64 a1, char a2);
__int64 TutorialInfoImpl_17e68f0(_QWORD* a1, __int64 a2);
__int64 TutorialInfoImpl_17e6c00(__int64 a1);

__int64 TutorialInfoImpl_17e5b40(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  int v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  int v23;
  int v24;
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
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;

  if (*(_QWORD*)(result + 256) != a2) {
    v39 = v2;
    v40 = v3;
    *(_QWORD*)(result + 256) = a2;
    v4 = result;
    v5 = *(__int64***)(a2 + 40);
    v6 = *v5;
    v7 = v5[1];
    if (*v5 == v7) {
      v14 = -1;
    }
    else {
      v8 = 0;
      v9 = GameData_212e348 + 2;
      do {
        v10 = *v6++;
        v11 = *(_QWORD*)(v10 + 48);
        if (v11 == 0) {
          break;
        }
        v25 = -1;
        v26 = -1;
        v27 = -1;
        v28 = -1;
        v29 = -1;
        v30 = -1;
        v31 = -1;
        v32 = -1;
        v12 = *msg_MessageManager_instance__ptr[0];
        v33 = -1;
        v34 = -1;
        v35 = -1;
        v36 = -1;
        v37 = 8;
        v38 = 0;
        v23 = -65529;
        v24 = -65528;
        v22[0] = v9;
        v22[1] = 0xFFFF0001FFFF0000LL;
        v22[2] = 0xFFFF0004FFFF0002LL;
        v22[3] = 0xFFFF0006FFFF0005LL;
        v13 = (_BYTE*)GameRoutine_a4dbe0(v12, v11, 0, v22);
        if (v13 == nullptr) {
          break;
        }
        if (*v13 == 0) {
          break;
        }
        ++v8;
      } while (v6 != v7);
      v14 = v8 - 1;
    }
    *(_DWORD*)(v4 + 128) = v14;
    *(_QWORD*)(v4 + 132) = 0;
    GameRoutine_1560070(&v20, v4 + 24, "L_PageTab");
    if (v21 != 0) {
      v15 = std___1___shared_weak_count_lock(v21);
      if (v15 != 0) {
        v16 = v20;
        v17 = v15;
        if (v20 != 0) {
          *(_DWORD*)(v4 + 168) = 1;
          v18 = v21;
          if (v21 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                      memory_order_relaxed);
          }
          v19 = *(_QWORD*)(v4 + 232);
          *(_QWORD*)(v4 + 224) = v16;
          *(_QWORD*)(v4 + 232) = v18;
          if (v19 != 0) {
            std___1___shared_weak_count___release_weak(v19);
          }
          PageTab_16e6880(v4 + 128, 2, 14, 15);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v17);
        }
      }
      if (v21 != 0) {
        std___1___shared_weak_count___release_weak(v21);
      }
    }
    return GameRoutine_17e5d20(v4, 0);
  }
  return result;
}

__int64 TutorialInfoImpl_17e6660(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v4;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8 v12;
  int v13;
  __int64 v14;
  __int64 v15;

  v4 = *(_QWORD*)(a1 + 272);
  if (v4 != 0) {
    v7 = std___1___shared_weak_count_lock(v4);
    if (v7 != 0) {
      v8 = *(_BYTE**)(a1 + 264);
      if (v8 != nullptr) {
        if ((v8[240] & 1) != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v9 = v7;
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            std___1___shared_weak_count___release_weak(v9);
          }
          return 0;
        }
        v11 = v7;
        v12 = (unsigned __int8)(*(_QWORD * (**)(_BYTE * __return_ptr, _QWORD))(
            *(_QWORD*)v8 + 160LL))(v8, *(_QWORD*)(a1 + 264));
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((v12 & 1) != 0) {
            return 0;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
          if ((v12 & 1) != 0) {
            return 0;
          }
        }
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        v10 = v7;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
  if ((game_menu_PageTab_Move(a1 + 128, 1, a2 & (unsigned __int8)~a3 & 1) &
       1) == 0) {
    return 0;
  }
  v13 = *(_DWORD*)(a1 + 132);
  v14 = *(_QWORD*)(a1 + 144);
  if (v13 < (unsigned __int64)((*(_QWORD*)(a1 + 152) - v14) >> 2)) {
    v13 = *(_DWORD*)(v14 + 4LL * v13);
  }
  v15 = GameRoutine_17e5d20_alt1((_QWORD*)a1, v13);
  game_sound_PlayPageSendSe(v15);
  return 1;
}

__int64 TutorialInfoImpl_17e67b0(__int64 a1, char a2)
{
  __int64 v3;
  __int64 v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8 v10;
  int v11;
  __int64 v12;
  __int64 v13;

  v3 = *(_QWORD*)(a1 + 272);
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3);
    if (v5 != 0) {
      v6 = *(_BYTE**)(a1 + 264);
      if (v6 != nullptr) {
        if ((v6[240] & 1) != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v7 = v5;
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            std___1___shared_weak_count___release_weak(v7);
          }
          return 0;
        }
        v9 = v5;
        v10 = (unsigned __int8)(*(_QWORD * (**)(_BYTE * __return_ptr, _QWORD))(
            *(_QWORD*)v6 + 160LL))(v6, *(_QWORD*)(a1 + 264));
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((v10 & 1) != 0) {
            return 0;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
          if ((v10 & 1) != 0) {
            return 0;
          }
        }
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        v8 = v5;
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v8);
      }
    }
  }
  if ((game_menu_PageTab_Move(a1 + 128, 0xFFFFFFFFLL, a2 & 1) & 1) == 0) {
    return 0;
  }
  v11 = *(_DWORD*)(a1 + 132);
  v12 = *(_QWORD*)(a1 + 144);
  if (v11 < (unsigned __int64)((*(_QWORD*)(a1 + 152) - v12) >> 2)) {
    v11 = *(_DWORD*)(v12 + 4LL * v11);
  }
  v13 = GameRoutine_17e5d20_alt1((_QWORD*)a1, v11);
  game_sound_PlayPageBackSe(v13);
  return 1;
}

__int64 TutorialInfoImpl_17e68f0(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int8 v11;
  __int64 result;

  v3 = a1[38];
  if (v3 != 0) {
    if ((*(_WORD*)(v3 + 136) & 1) == 0) {
      ProcInst_657a50(v3, 1);
    }
    a1[38] = 0;
  }
  v5 = a1[34];
  if (v5 != 0) {
    v6 = std___1___shared_weak_count_lock(v5);
    if (v6 != 0) {
      v7 = (_BYTE*)a1[33];
      if (v7 != nullptr) {
        if ((v7[240] & 1) != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v8 = v6;
            (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
            std___1___shared_weak_count___release_weak(v8);
          }
          goto LABEL_15;
        }
        v10 = v6;
        v11 = (unsigned __int8)(*(_QWORD * (**)(_BYTE * __return_ptr, _QWORD))(
            *(_QWORD*)v7 + 160LL))(v7, a1[33]);
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((v11 & 1) != 0) {
          LABEL_15:
            result = GameRoutine_17e6a30(a1, a2);
            a1[38] = result;
            return result;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
          if ((v11 & 1) != 0) {
            goto LABEL_15;
          }
        }
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        v9 = v6;
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
  }
  return TutorialInfoImpl_17e5b40((__int64)a1, a2);
}

__int64 TutorialInfoImpl_17e6c00(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8 v9;

  v1 = *(_QWORD*)(a1 + 152);
  v3 = *(_QWORD*)(v1 + 272);
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock(v3);
    if (v4 != 0) {
      v5 = *(_BYTE**)(v1 + 264);
      if (v5 != nullptr) {
        if ((v5[240] & 1) != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v6 = v4;
            (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
            std___1___shared_weak_count___release_weak(v6);
          }
          return 1;
        }
        v8 = v4;
        v9 = (unsigned __int8)(*(_QWORD * (**)(_BYTE * __return_ptr, _QWORD))(
            *(_QWORD*)v5 + 160LL))(v5, *(_QWORD*)(v1 + 264));
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((v9 & 1) != 0) {
            return 1;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak(v8);
          if ((v9 & 1) != 0) {
            return 1;
          }
        }
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        v7 = v4;
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
  TutorialInfoImpl_17e5b40(*(_QWORD*)(a1 + 152), *(_QWORD*)(a1 + 160));
  *(_QWORD*)(*(_QWORD*)(a1 + 152) + 304LL) = 0;
  return 0;
}

#pragma GCC visibility pop
