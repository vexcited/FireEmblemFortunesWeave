#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1079580(_QWORD, _QWORD, float, float, float);
__int64 GameRoutine_1084940(_QWORD, _QWORD, float);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212d4d8;
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern int* GameData_212d4d0;
__int64 MapCharacter_9da660(__int64 a1);
__int64 MapCharacter_9daac0(__int64 result, unsigned int a2);
__int64 game_map_MapCharacter_Create_lambda0_Invoke(__int64 a1, float* a2);
__int64 game_map_MapCharacter_SetForce_lambda0_Invoke(__int64 result,
                                                      __int64 a2);

__int64 MapCharacter_9da660(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 16);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(v1 + 392);
  v3 = *(_QWORD*)(v1 + 400);
  if (v3 == 0) {
    return *(_QWORD*)(v2 + 168);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                            memory_order_relaxed);
  result = *(_QWORD*)(v2 + 168);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v5 = result;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
    return v5;
  }
  return result;
}

__int64 MapCharacter_9daac0(__int64 result, unsigned int a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;

  v2 = *(_QWORD*)(result + 16);
  if (v2 == 0) {
    goto LABEL_33;
  }
  v5 = *(_QWORD*)(v2 + 392);
  v4 = *(_QWORD*)(v2 + 400);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = result;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
      result = v6;
    }
  }
  v7 = *(_QWORD*)(v5 + 11608);
  v8 = GameData_22356f8 == 0 || GameData_2235708 == 0;
  if (v8 || ((v9 = GameData_22356f8 - 1,
              (GameData_22356f8 & (GameData_22356f8 - 1)) == 0)
                 ? (v10 = v9 & (int)a2)
             : GameData_22356f8 <= (unsigned __int64)(int)a2
                 ? (v10 = (int)a2 % (unsigned __int64)GameData_22356f8)
                 : (v10 = (int)a2),
             (v11 = *(__int64***)(GameData_22356f0 + 8 * v10)) == nullptr)) {
    if (*(_QWORD*)(v7 + 5112) != 0) {
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  v12 = *v11;
  if (*v11 == nullptr) {
  LABEL_31:
    if (*(_QWORD*)(v7 + 5112) != 0) {
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  if ((GameData_22356f8 & v9) == 0) {
    while (1) {
      v14 = v12[1];
      if (v14 == a2) {
        if (*((_DWORD*)v12 + 4) == a2) {
          goto LABEL_34;
        }
      }
      else if ((v14 & v9) != v10) {
        goto LABEL_31;
      }
      v12 = (__int64*)*v12;
      if (v12 == nullptr) {
        goto LABEL_31;
      }
    }
  }
  while (1) {
    v13 = v12[1];
    if (v13 == a2) {
      break;
    }
    if (v13 >= GameData_22356f8) {
      v13 %= (unsigned __int64)GameData_22356f8;
    }
    if (v13 != v10) {
      goto LABEL_31;
    }
  LABEL_19:
    v12 = (__int64*)*v12;
    if (v12 == nullptr) {
      goto LABEL_31;
    }
  }
  if (*((_DWORD*)v12 + 4) != a2) {
    goto LABEL_19;
  }
LABEL_34:
  if (*(_QWORD*)(v7 + 8LL * *((int*)v12 + 5)) != 0) {
  LABEL_32:
    v15 = result;
    GameRoutine_1079580(*(_QWORD*)(*(_QWORD*)(result + 16) + 72LL), a2, -1.0,
                        -1.0, 1.0);
    result = v15;
  }
LABEL_33:
  *(_DWORD*)(result + 28) = a2;
  return result;
}

__int64 game_map_MapCharacter_Create_lambda0_Invoke(__int64 a1, float* a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 16);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 24);
  if (*(_QWORD*)(v2 + 8) == -1 || v3 == 0) {
    return 0;
  }
  GameRoutine_1084940(v3, 0, *a2);
  return 1;
}

__int64 game_map_MapCharacter_SetForce_lambda0_Invoke(__int64 result,
                                                      __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  float v9;
  __int64 v10;
  __int64* v11;
  __int64* i;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4d8,
                                  memory_order_acquire);
  v3 = GameData_212d4d0;
  if ((explicit & 1) == 0) {
    v14 = result;
    v15 = a2;
    v16 = __cxa_guard_acquire(GameData_212d4d8);
    a2 = v15;
    v17 = v16;
    result = v14;
    if (v17 != 0) {
      *v3 = wld_Crc32(0, "CharacterMaterial", 17);
      __cxa_guard_release(GameData_212d4d8, v18, v19, v20);
      a2 = v15;
      result = v14;
    }
  }
  v4 = *(_QWORD*)(a2 + 512);
  v5 = v4;
  while (v5 != *(_QWORD*)(a2 + 504)) {
    v6 = *(_DWORD*)(v5 - 16);
    v5 -= 16;
    v4 -= 16;
    if (v6 == *v3) {
      if (*(_QWORD*)(a2 + 512) == v4) {
        return result;
      }
      v7 = *(_QWORD*)(v4 + 8);
      if (v7 == 0) {
        return result;
      }
      v8 = *(unsigned __int8*)(result + 8);
      if (v8 > 1) {
        if (v8 == 3) {
          v9 = 4.0;
        }
        else if (v8 == 2) {
          v9 = 3.0;
        }
        else {
          v9 = 0.0;
        }
      LABEL_16:
        v10 = *(_QWORD*)(*(_QWORD*)(v7 + 240) + 24LL);
      }
      else {
        if (*(_BYTE*)(result + 8) != 0) {
          v9 = 2.0;
          goto LABEL_16;
        }
        v9 = 1.0;
        v10 = *(_QWORD*)(*(_QWORD*)(v7 + 240) + 24LL);
        *(_WORD*)(v7 + 113) = 256;
      }
      v11 = *(__int64**)(v10 + 312);
      for (i = *(__int64**)(v10 + 320); v11 != i;
           result = (*(__int64 (**)(__int64, const char*, __int64, float))(
               *(_QWORD*)v13 + 16LL))(v13, "Game_RimPattern", 15, v9)) {
        v13 = *v11;
        v11 += 2;
      }
      return result;
    }
  }
  return result;
}

#pragma GCC visibility pop
