#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterTrailModule_d3d7a0(_QWORD, _QWORD, _QWORD);
__int64 CharacterTrailModule_d3d960(void);
__int64 FileManager_10e120(_QWORD, _QWORD);
__int64 GameRoutine_10adb80(_QWORD, _QWORD, long double);
__int64 GameRoutine_10b39a0(_QWORD);
__int64 GameRoutine_118ff0(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1a8e4ab;
extern _UNKNOWN GameData_1aa1728;
extern _UNKNOWN GameData_1abbaec;
extern _UNKNOWN GameData_1af6361;
extern __int64 (*GameData_2008fd0[])();
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterFacialController_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
extern __int64 GameData_2265eb0;
extern int GameData_21d92e0;
extern int GameData_2235720;
void GameRoutine_10b2280(__int64, unsigned int, float);
void CharacterFacialController_10b2650(__int64 a1, int a2, __n128 a3);
void CharacterFacialController_10b2950(__int64 a1, __int64 a2, __n128 a3);
__int64 CharacterFacialController_10b2a20(__int64 result);
__n128 CharacterFacialController_Destructor(__int64 a1);

void CharacterFacialController_10b2650(__int64 a1, int a2, __n128 a3)
{
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void* v12;
  unsigned int v13;
  __int64 v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  void* v24;
  __int64 v25;
  __int64 v26;

  if (GameData_21d92e0 == 5) {
    return;
  }
  v3 = *(_QWORD*)(a1 + 32);
  if (v3 == 0 ||
      ((v4 = *(_QWORD*)(a1 + 40), *(_QWORD*)(v3 + 8) != -1) ? (v5 = v4 == 0)
                                                            : (v5 = true),
       v5)) {
    GameData_2235720 = 0;
  }
  else if ((*(_BYTE*)(v4 + 343) & 1) != 0) {
    return;
  }
  if (a2 <= -589947501) {
    if ((unsigned int)(a2 + 1193575789) <= 0x10 &&
        ((1 << (a2 + 109)) & 0x10403) != 0) {
      goto LABEL_13;
    }
    if (a2 != -1101902990) {
      if (a2 == -972548316) {
      LABEL_37:
        if (v3 == 0) {
          return;
        }
        if (*(_QWORD*)(v3 + 8) == -1) {
          return;
        }
        v16 = *(_QWORD*)(a1 + 40);
        if (v16 == 0) {
          return;
        }
        v10 = *(_QWORD*)(v16 + 392);
        v17 = *(_QWORD*)(v16 + 400);
        v11 = a1;
        if (v17 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
            a3 = std___1___shared_weak_count___release_weak(v17);
          }
        }
        v12 = &GameData_1af6361;
        goto LABEL_22;
      }
      goto LABEL_53;
    }
  LABEL_44:
    if (v3 == 0) {
      return;
    }
    v18 = *(_QWORD*)(v3 + 8);
    v19 = *(_QWORD*)(a1 + 40);
    if (v18 == -1 || v19 == 0) {
      return;
    }
    v22 = *(_QWORD*)(v19 + 392);
    v21 = *(_QWORD*)(v19 + 400);
    v23 = a1;
    if (v21 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        a3 = std___1___shared_weak_count___release_weak(v21);
      }
    }
    v24 = &GameData_1aa1728;
  LABEL_60:
    v13 = GameRoutine_10adb80(v22 + 1432, v24, *(long double*)&a3);
    if ((v13 & 0x80000000) != 0) {
      return;
    }
    v15 = -1.0;
    v14 = v23;
  LABEL_62:
    GameRoutine_10b2280(v14, v13, v15);
    return;
  }
  if (a2 > -77626399) {
    if (a2 == -77626398 || a2 == 1400556095 || a2 == 1715476756) {
      goto LABEL_13;
    }
  LABEL_53:
    if (v3 == 0) {
      return;
    }
    if (*(_QWORD*)(v3 + 8) == -1) {
      return;
    }
    v25 = *(_QWORD*)(a1 + 40);
    if (v25 == 0) {
      return;
    }
    v22 = *(_QWORD*)(v25 + 392);
    v26 = *(_QWORD*)(v25 + 400);
    v23 = a1;
    if (v26 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        a3 = std___1___shared_weak_count___release_weak(v26);
      }
    }
    v24 = &GameData_1abbaec;
    goto LABEL_60;
  }
  if (a2 == -589947500) {
    goto LABEL_44;
  }
  if (a2 != -270062627) {
    if (a2 == -93581017) {
      goto LABEL_37;
    }
    goto LABEL_53;
  }
LABEL_13:
  if (v3 != 0) {
    v6 = *(_QWORD*)(v3 + 8);
    v7 = *(_QWORD*)(a1 + 40);
    if (v6 != -1 && v7 != 0) {
      v10 = *(_QWORD*)(v7 + 392);
      v9 = *(_QWORD*)(v7 + 400);
      v11 = a1;
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          a3 = std___1___shared_weak_count___release_weak(v9);
        }
      }
      v12 = &GameData_1a8e4ab;
    LABEL_22:
      v13 = GameRoutine_10adb80(v10 + 1432, v12, *(long double*)&a3);
      if ((v13 & 0x80000000) != 0) {
        return;
      }
      v14 = v11;
      v15 = 0.0;
      goto LABEL_62;
    }
  }
}

void CharacterFacialController_10b2950(__int64 a1, __int64 a2, __n128 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  float v9;
  __int64 v11;
  unsigned int v12;

  v3 = *(_QWORD*)(a1 + 32);
  if (v3 != 0) {
    v4 = *(_QWORD*)(v3 + 8);
    v5 = *(_QWORD*)(a1 + 40);
    if (v4 != -1 && v5 != 0) {
      v8 = *(_QWORD*)(v5 + 392);
      v7 = *(_QWORD*)(v5 + 400);
      v9 = ((float*)&a3)[0];
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v11 = a2;
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          a3 = std___1___shared_weak_count___release_weak(v7);
          a2 = v11;
        }
      }
      v12 = GameRoutine_10adb80(v8 + 1432, a2, *(long double*)&a3);
      if ((v12 & 0x80000000) == 0) {
        GameRoutine_10b2280(a1, v12, v9);
      }
    }
  }
}

__int64 CharacterFacialController_10b2a20(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if ((*(_BYTE*)(result + 96) & 1) == 0) {
    v1 = result;
    result = GameRoutine_10b39a0(result + 120);
    v2 = *(_QWORD*)(v1 + 32);
    *(_DWORD*)(v1 + 224) = 0;
    *(_QWORD*)(v1 + 208) = 0;
    *(_QWORD*)(v1 + 216) = 0;
    *(_DWORD*)(v1 + 264) = 0;
    *(_QWORD*)(v1 + 232) = 0;
    *(_QWORD*)(v1 + 240) = 0;
    *(_DWORD*)(v1 + 352) = 0;
    *(_BYTE*)(v1 + 357) = 0;
    if (v2 != 0) {
      v3 = *(_QWORD*)(v1 + 40);
      if (*(_QWORD*)(v2 + 8) != -1 && v3 != 0) {
        v5 = *(_DWORD*)(v1 + 360);
        if (v5 != 0) {
          v6 = *(_QWORD*)(v3 + 72);
          result = *(_QWORD*)(v6 + 56);
          v7 = *(_QWORD*)(v6 + 64);
          if (result != v7) {
            do {
              if (v5 == *(_DWORD*)result) {
                *(_DWORD*)result = 0;
              }
              result += 80;
            } while (result != v7);
            result = *(_QWORD*)(v6 + 56);
            v7 = *(_QWORD*)(v6 + 64);
          }
          if (0xCCCCCCCCCCCCCCCDLL * ((v7 - result) >> 4) >= 0x40) {
            v8 = CharacterTrailModule_d3d960();
            result =
                CharacterTrailModule_d3d7a0(v6 + 56, v8, *(_QWORD*)(v6 + 64));
          }
        }
        *(_DWORD*)(v1 + 360) = 0;
      }
    }
    *(_DWORD*)(v1 + 96) |= 1u;
  }
  return result;
}

__n128 CharacterFacialController_Destructor(__int64 a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_character_CharacterFacialController_vtable;
  *(_QWORD*)(a1 + 56) = GameData_2008fd0;
  CharacterFacialController_10b2a20(a1);
  if (*(_BYTE*)(a1 + 312) == 1) {
    v3 = GameRoutine_118ff0(GameData_2265eb0);
    FileManager_10e120(v3, a1 + 296);
    *(_BYTE*)(a1 + 312) = 0;
  }
  v4 = *(_QWORD*)(a1 + 88);
  *(_QWORD*)(a1 + 56) = kaneko_WPHolder_vtable;
  if (v4 != 0) {
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(a1 + 72);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v5 + 16LL))(
        v5, *(long double*)&result);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = &game_character_CharacterBaseModule_vtable;
  if (v6 != 0) {
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

#pragma GCC visibility pop
