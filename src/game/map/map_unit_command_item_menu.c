#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e2be0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_20561b0[])();
extern __int64 GameData_21cd108;
extern __int64 GameData_2203490;
extern __int64* GameData_212e008[9];
extern __int64* GameData_21319c0[4];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 MapUnitCommandItemMenu_15c09e0(__int64 a1);
__int64 MapUnitCommandItemMenu_15c0b80();

__int64 MapUnitCommandItemMenu_15c09e0(__int64 a1)
{
  __int64 result;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  __int64 v13;
  _QWORD v14[4];
  _QWORD* v15;
  __int64 v16;

  result = MapUnitCommandItemMenu_15c0b80();
  if (*(_WORD*)(result + 828) == 0 || (*(_BYTE*)(result + 831) & 0x20) != 0) {
    result = MapUnitCommandItemMenu_15c0b80();
    if (*(_WORD*)(result + 836) == 0 || (*(_BYTE*)(result + 839) & 0x20) != 0) {
      result = MapUnitCommandItemMenu_15c0b80();
      if (*(_WORD*)(result + 844) == 0 ||
          (*(_BYTE*)(result + 847) & 0x20) != 0) {
        result = MapUnitCommandItemMenu_15c0b80();
        if (*(_WORD*)(result + 852) == 0 ||
            (*(_BYTE*)(result + 855) & 0x20) != 0) {
          result = MapUnitCommandItemMenu_15c0b80();
          if (*(_WORD*)(result + 860) == 0 ||
              (*(_BYTE*)(result + 863) & 0x20) != 0) {
            result = MapUnitCommandItemMenu_15c0b80();
            if (*(_WORD*)(result + 868) == 0 ||
                (*(_BYTE*)(result + 871) & 0x20) != 0) {
              v5 = *(_QWORD**)(a1 + 232);
              v6 = *(_QWORD**)(a1 + 240);
              v7 = v14;
              v14[0] = GameData_20561b0;
              v15 = v14;
              if (v5 == v6) {
                v12 = nullptr;
              }
              else {
                v8 = GameData_212e008[0];
                v9 = GameData_21319c0[0];
                while (1) {
                  if (*v5 != 0) {
                    v10 = __dynamic_cast(*v5, v8, v9, 0);
                    if (v10 != 0) {
                      v12 = (_BYTE*)v10;
                      v16 = v10;
                      if (v15 == nullptr) {
                        GameRoutine_60a310(0, v11);
                      }
                      if (((*(__int64 (**)(_QWORD*, __int64*))(*v15 + 48LL))(
                               v15, &v16) &
                           1) != 0) {
                        break;
                      }
                    }
                  }
                  if (++v5 == v6) {
                    v12 = nullptr;
                    break;
                  }
                }
                v7 = v15;
                if (v15 != v14) {
                  if (v15 == nullptr) {
                    goto LABEL_32;
                  }
                  v13 = 40;
                LABEL_31:
                  (*(void (**)(_QWORD*))(*v7 + v13))(v7);
                LABEL_32:
                  result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v12 + 48LL))(v12);
                  if ((result & 1) != 0) {
                    v12[81] = 0;
                    return GameRoutine_16e2be0(a1);
                  }
                  return result;
                }
              }
              v13 = 32;
              goto LABEL_31;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 MapUnitCommandItemMenu_15c0b80()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;

  v0 = GameData_2203490;
  if (GameData_2203490 == 0) {
    if (*(_BYTE*)(GameData_21cd108 + 8) != 0) {
      return game_UnitPool_Get(GameData_21cd108 + 8);
    }
    return 0;
  }
  v1 = *(_QWORD*)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v4 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    v1 = v4;
    if (v4 == 0) {
    LABEL_9:
      v1 = *(_QWORD*)(v0 + 656);
      v5 = *(_QWORD*)(v0 + 664);
      if (v5 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v6 = v1;
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
          v1 = v6;
        }
      }
    }
  }
  else if (v1 == 0) {
    goto LABEL_9;
  }
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  v8 = *(_QWORD*)(v7 + 88);
  if (v8 == 0) {
    return 0;
  }
  v9 = *(_QWORD*)(v7 + 80);
  v10 = *(_QWORD*)(v7 + 88);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v11 = std___1___shared_weak_count_lock(v10);
  result = std___1___shared_weak_count___release_weak(v8);
  if (v11 == 0 || v9 == 0) {
    if (v11 == 0) {
      return 0;
    }
  }
  else {
    result = *(_QWORD*)(v9 + 16);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 != 0) {
      return result;
    }
    return 0;
  }
  v13 = result;
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  std___1___shared_weak_count___release_weak(v11);
  result = v13;
  if (v9 == 0) {
    return 0;
  }
  return result;
}

#pragma GCC visibility pop
