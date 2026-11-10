#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_224ae18;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_sound_g_game_sound;
extern int GameData_224ae10;
__int64 ForceContinueBGMBinder_DeletingDestructor(__int64 a1);
__int64 ForceContinueBGMBinder_Unknown4(__int64 result);
__int64 ForceContinueBGMBinder_Unknown5(__int64 result);
extern __int64 (*GameData_20430e0[])();
_QWORD* ForceContinueBGMBinder_1488be0(_QWORD* result);
__int64 ForceContinueBGMBinder_Destructor(__int64 result);
__int64 ForceContinueBGMBinder_DeletingDestructor_1488ce0(__int64 result);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1488900();
__int64 GameRoutine_1488940(_QWORD, _QWORD);
__int64 GameRoutine_2b0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_80c770(_QWORD);
__int64 game_HashString(_QWORD);
__int64 snd_a2ede0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_224ae08;
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64 GameData_212dd28;
extern __int64 GameData_21f4010;
extern __int64 GameData_224ae20;
extern char GameData_1a9f09e;
__int64 ForceContinueBGMBinder_1487e00(__int64 a1, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void
ForceContinueBGMBinder_1487fc0(PSEUDO_X8 x8_, __int64 a1, unsigned __int8 a2);

__int64 ForceContinueBGMBinder_1487e00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  char* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;

  if ((*(_BYTE*)a2 & 1) != 0) {
    v5 = *(_QWORD*)(a2 + 16);
  }
  else {
    v5 = a2 + 1;
  }
  v6 = game_HashString(v5);
  if (v6 == 0) {
    goto LABEL_31;
  }
  v7 = *(_QWORD*)(*(_QWORD*)GameData_212dd28 + 96LL);
  if (v7 == 0 || *(_QWORD*)(*(_QWORD*)GameData_212dd28 + 112LL) == 0) {
    goto LABEL_31;
  }
  v9 = v7 - 1;
  if ((v7 & (v7 - 1)) != 0) {
    v10 = v6;
    if (v6 >= v7) {
      v10 = v6 % v7;
    }
  }
  else {
    v10 = v9 & v6;
  }
  v11 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)GameData_212dd28 + 88LL) + 8 * v10);
  if (v11 == nullptr) {
    goto LABEL_31;
  }
  v12 = (_QWORD*)*v11;
  if (v12 == nullptr) {
    goto LABEL_31;
  }
  v13 = &GameData_1a9f09e;
  if ((v7 & v9) == 0) {
    while (1) {
      v15 = v12[1];
      if (v15 == v6) {
        if (v12[2] == v6) {
          goto LABEL_29;
        }
      }
      else if ((v15 & v9) != v10) {
        goto LABEL_32;
      }
      v12 = (_QWORD*)*v12;
      if (v12 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  while (1) {
    v14 = v12[1];
    if (v14 == v6) {
      break;
    }
    if (v14 >= v7) {
      v14 %= v7;
    }
    if (v14 != v10) {
      goto LABEL_32;
    }
  LABEL_18:
    v12 = (_QWORD*)*v12;
    if (v12 == nullptr) {
      goto LABEL_32;
    }
  }
  if (v12[2] != v6) {
    goto LABEL_18;
  }
LABEL_29:
  v16 = v12[3];
  if (v16 != 0) {
    v13 = *(char**)(v16 + 32);
    goto LABEL_32;
  }
LABEL_31:
  v13 = &GameData_1a9f09e;
LABEL_32:
  v17 = &GameData_1a9f09e;
  v18 = *game_sound_g_game_sound_ptr[0];
  if (a1 != 0) {
    if (*(_QWORD*)(a1 + 88) != 0) {
      v17 = *(char**)(a1 + 88);
    }
    v19 = strlen(v17);
  }
  else {
    v19 = 0;
  }
  return snd_a2ede0(v18, v17, v19, v13,
                    COERCE_UNSIGNED_INT(*(float*)&a3 * 0x1.f400000000000p+9f) &
                            (unsigned __int64)(a3 << 31 >> 63) |
                        a3 & 0x100000000LL);
}

__attribute__((swiftcall)) void

ForceContinueBGMBinder_1487fc0(PSEUDO_X8 x8_, __int64 a1, unsigned __int8 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int8 v16;
  unsigned __int8 v17;
  __int64 v18;
  int v19;
  char v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 16);
  }
  else {
    v5 = a1 + 1;
  }
  result = game_HashString(v5);
  if (result == 0) {
    goto LABEL_32;
  }
  v7 = *(_QWORD*)(GameData_21f4010 + 96);
  if (v7 == 0 || *(_QWORD*)(GameData_21f4010 + 112) == 0) {
    goto LABEL_32;
  }
  v9 = v7 - 1;
  if ((v7 & (v7 - 1)) != 0) {
    v10 = result;
    if (result >= v7) {
      v10 = result % v7;
    }
  }
  else {
    v10 = v9 & result;
  }
  v11 = *(_QWORD**)(*(_QWORD*)(GameData_21f4010 + 88) + 8 * v10);
  if (v11 == nullptr) {
    goto LABEL_32;
  }
  v12 = (_QWORD*)*v11;
  if (v12 == nullptr) {
    goto LABEL_32;
  }
  if ((v7 & v9) == 0) {
    while (1) {
      v14 = v12[1];
      if (v14 == result) {
        if (v12[2] == result) {
          goto LABEL_29;
        }
      }
      else if ((v14 & v9) != v10) {
        goto LABEL_32;
      }
      v12 = (_QWORD*)*v12;
      if (v12 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  while (1) {
    v13 = v12[1];
    if (v13 == result) {
      break;
    }
    if (v13 >= v7) {
      v13 %= v7;
    }
    if (v13 != v10) {
      goto LABEL_32;
    }
  LABEL_18:
    v12 = (_QWORD*)*v12;
    if (v12 == nullptr) {
      goto LABEL_32;
    }
  }
  if (v12[2] != result) {
    goto LABEL_18;
  }
LABEL_29:
  v15 = v12[3];
  if (v15 == 0) {
  LABEL_32:
    *(_QWORD*)a3 = 0;
    *(_DWORD*)(a3 + 8) = 0x2000;
    {
      result;
      return;
    }
  }
  game_80c770(*(_QWORD*)(v15 + 32));
  result = GameData_224ae20;
  if (GameData_224ae20 != 0) {
    v16 = a2;
    v17 = a2;
    v18 = GameData_224ae20;
    v19 = v16;
    v20 = snd_fnd_WeakHandle_isValid(a3);
    result = 0;
    if (v19 != 2 && (v20 & 1) != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_224ae08,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_224ae08) != 0) {
        GameRoutine_2b0(GameRoutine_1488900);
        __cxa_guard_release(&GameData_224ae08);
      }
      v21 = v18 + 24LL * v17;
      v24 = *(_QWORD*)(v21 + 8);
      v23 = *(_QWORD*)(v21 + 16);
      v22 = v21 + 8;
      if (v24 != v23) {
        while (1) {
          v25 = snd_fnd_WeakHandle_get(v24);
          if (v25 == snd_fnd_WeakHandle_get(a3)) {
            break;
          }
          v24 += 16LL;
          if (v24 == v23) {
            v24 = v23;
            break;
          }
        }
        v23 = *(_QWORD*)(v22 + 8);
      }
      if (v24 == v23) {
        if (v23 >= *(_QWORD*)(v22 + 16)) {
          v26 = GameRoutine_1488940(v22, a3);
        }
        else {
          *(_QWORD*)v23 = 0;
          *(_DWORD*)(v23 + 8) = 0x2000;
          GameRoutine_112180(v23, a3);
          v26 = v23 + 16;
        }
        *(_QWORD*)(v22 + 8) = v26;
        {
          1;
          return;
        }
      }
      else {
        {
          0;
          return;
        }
      }
    }
  }
  {
    result;
    return;
  }
}

_QWORD* ForceContinueBGMBinder_1488be0(_QWORD* result)
{
  *result = GameData_20430e0;
  if ((_QWORD*)GameData_224ae18 == result) {
    GameData_224ae18 = 0;
    GameData_224ae10 = 0;
  }
  return result;
}

__int64 ForceContinueBGMBinder_DeletingDestructor(__int64 a1)
{
  __int64 v1;

  if (GameData_224ae18 == a1) {
    GameData_224ae18 = 0;
    GameData_224ae10 = 0;
  }
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v1, a1);
}

__int64 ForceContinueBGMBinder_Unknown4(__int64 result)
{
  if (game_sound_g_game_sound != 0) {
    *(_BYTE*)(result + 20) = *(_BYTE*)(game_sound_g_game_sound + 3128);
  }
  return result;
}

__int64 ForceContinueBGMBinder_Unknown5(__int64 result)
{
  if (game_sound_g_game_sound != 0) {
    *(_BYTE*)(game_sound_g_game_sound + 3128) = *(_BYTE*)(result + 20);
  }
  return result;
}

__int64 ForceContinueBGMBinder_Destructor(__int64 result)
{
  if (game_sound_g_game_sound != 0) {
    *(_BYTE*)(result + 12) = *(_BYTE*)(game_sound_g_game_sound + 3128);
  }
  return result;
}

__int64 ForceContinueBGMBinder_DeletingDestructor_1488ce0(__int64 result)
{
  if (game_sound_g_game_sound != 0) {
    *(_BYTE*)(game_sound_g_game_sound + 3128) = *(_BYTE*)(result + 12);
  }
  return result;
}

#pragma GCC visibility pop
