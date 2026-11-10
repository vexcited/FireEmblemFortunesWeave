#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_717b40(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_2042fd8[])();
extern __int64 (*GameData_2043fd8[])();
extern __int64 (*GameData_2044078[])();
extern __int64 (*game_facility_anonymous_Impl_vtable[])();
extern __int64 GameData_21ca208;
extern __int64 GameData_21ca2e8;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21cd0d8;
extern __int64 GameData_224ade8;
extern __int64 GameData_224b470;
extern __int64 GameData_224b478;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_2131288;
extern int GameData_224ade4;
__int64 Impl_Destructor_14870f0(_QWORD* a1);
__int64 Impl_Destructor_1499ce0(_QWORD* a1);
_QWORD* Impl_1499ec0(_QWORD* result);
__int64 Impl_Destructor_149a1f0(_QWORD* a1);
__int64 Impl_DeletingDestructor_149a240(_QWORD* a1);
__int16* TimelineFile_890840(__int16* result);
__int64 GameConst_7f8cc0(int, __int64);
__int64 GameConst_7f8fd0(int, __int64);
__int64 GameVariable_828a00(__int64, __int64);
__int64 Impl_71f220(__int64 result);
__int64 game_anonymous_Impl_UpdateRoute(__int64);
extern __int64 (*GameData_1f93458[])();
extern __int64 (*GameData_1f934e8[])();
extern __int64 (*GameData_1f9f9b0[])();
extern __int64 GameData_21f1720;
extern __int64 GameData_21f1728;
extern __int64 game_GameModeData_instance_;
__int16* Impl_1499f40(__int16* result, int a2, int a3);

__int64 Impl_Destructor_14870f0(_QWORD* a1)
{
  __int64* v2;
  __int64 result;

  *a1 = game_facility_anonymous_Impl_vtable;
  v2 = GameData_2131288;
  (*(void (**)(_QWORD))(*(_QWORD*)*GameData_2131288 + 24LL))(*GameData_2131288);
  result = *v2;
  if (*v2 != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  *v2 = 0;
  *a1 = GameData_2042fd8;
  if ((_QWORD*)GameData_224ade8 == a1) {
    GameData_224ade8 = 0;
    GameData_224ade4 = 0;
  }
  return result;
}

__int64 Impl_Destructor_1499ce0(_QWORD* a1)
{
  __int64* v2;
  __int64 result;

  *a1 = game_facility_anonymous_Impl_vtable;
  v2 = GameData_212cfb8[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212cfb8[0] + 24LL))(
      *GameData_212cfb8[0]);
  if (*v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v2 + 8LL))(*v2);
  }
  *v2 = 0;
  (*(void (**)(__int64))(*(_QWORD*)GameData_21ca2e8 + 24LL))(GameData_21ca2e8);
  if (GameData_21ca2e8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21ca2e8 + 8LL))(GameData_21ca2e8);
  }
  GameData_21ca2e8 = 0;
  (*(void (**)(__int64))(*(_QWORD*)GameData_21ca300 + 24LL))(GameData_21ca300);
  if (GameData_21ca300 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21ca300 + 8LL))(GameData_21ca300);
  }
  GameData_21ca300 = 0;
  (*(void (**)(__int64))(*(_QWORD*)GameData_21ca2f8 + 24LL))(GameData_21ca2f8);
  if (GameData_21ca2f8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21ca2f8 + 8LL))(GameData_21ca2f8);
  }
  GameData_21ca2f8 = 0;
  (*(void (**)(__int64))(*(_QWORD*)GameData_21cd0d8 + 24LL))(GameData_21cd0d8);
  if (GameData_21cd0d8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21cd0d8 + 8LL))(GameData_21cd0d8);
  }
  GameData_21cd0d8 = 0;
  (*(void (**)(__int64))(*(_QWORD*)GameData_21ca208 + 24LL))(GameData_21ca208);
  result = GameData_21ca208;
  if (GameData_21ca208 != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_21ca208 + 8LL))(
        GameData_21ca208);
  }
  GameData_21ca208 = 0;
  *a1 = GameData_2043fd8;
  if ((_QWORD*)GameData_224b470 == a1) {
    GameData_224b470 = 0;
  }
  return result;
}

_QWORD* Impl_1499ec0(_QWORD* result)
{
  *result = GameData_2043fd8;
  if ((_QWORD*)GameData_224b470 == result) {
    GameData_224b470 = 0;
  }
  return result;
}

__int16* Impl_1499f40(__int16* result, int a2, int a3)
{
  char v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v17;
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;

  if (GameData_224b478 == 0) {
    return result;
  }
  v4 = (char)result;
  v20_.v20[0] = GameData_1f9f9b0;
  v20_.v21 = v20_.v20;
  GameVariable_828a00(game_GameModeData_instance_ + 40, (__int64)v20_.v20);
  if (v20_.v21 == v20_.v20) {
    v6 = 32;
    goto LABEL_6;
  }
  if (v20_.v21 != nullptr) {
    v6 = 40;
  LABEL_6:
    (*(void (**)(__int64))(*v20_.v21 + v6))((__int64)v20_.v21);
  }
  result = (__int16*)game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_22;
  }
  *(_BYTE*)(game_GameModeData_instance_ + 15) = v4;
  result = (__int16*)game_anonymous_Impl_UpdateRoute((__int64)result);
  v7 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_22;
  }
  *(_DWORD*)(game_GameModeData_instance_ + 60) = a2;
  v20_.v20[0] = GameData_1f93458;
  v20_.v20[1] = v7;
  v20_.v21 = v20_.v20;
  GameConst_7f8cc0(a2, (__int64)v20_.v20);
  if (v20_.v21 == v20_.v20) {
    v8 = 32;
  }
  else {
    if (v20_.v21 == nullptr) {
      goto LABEL_14;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v20_.v21 + v8))((__int64)v20_.v21);
LABEL_14:
  result = (__int16*)Impl_71f220(v7);
  v9 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_22;
  }
  *(_DWORD*)(game_GameModeData_instance_ + 64) = a3;
  v20_.v20[0] = GameData_1f934e8;
  v20_.v20[1] = v9;
  v20_.v21 = v20_.v20;
  GameConst_7f8fd0(a3, (__int64)v20_.v20);
  if (v20_.v21 == v20_.v20) {
    v10 = 32;
  }
  else {
    if (v20_.v21 == nullptr) {
      goto LABEL_20;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v20_.v21 + v10))((__int64)v20_.v21);
LABEL_20:
  result = (__int16*)Impl_71f220(v9);
  if (game_GameModeData_instance_ != 0) {
    v11 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    v12 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    v13 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    goto LABEL_23;
  }
LABEL_22:
  v12 = 0;
  v11 = 0;
  v13 = 0;
LABEL_23:
  v14 = GameData_21f1720;
  if (GameData_21f1720 != GameData_21f1728) {
    if (v11 != 0) {
      while (1) {
        v15 = *(_QWORD*)v14;
        if (v12 == *(char*)(*(_QWORD*)v14 + 88LL) &&
            v13 == *(char*)(v15 + 89) &&
            (*(_BYTE*)(*(_QWORD*)(v15 + 24) + 33LL) == 0 ||
             *(unsigned __int8*)(*(_QWORD*)(v15 + 24) + 33LL) == v11)) {
          break;
        }
        v14 += 8;
        if (v14 == GameData_21f1728) {
          return result;
        }
      }
      v17 = *(unsigned __int8*)(v15 + 89);
    }
    else {
      while (1) {
        v15 = *(_QWORD*)v14;
        if (v12 == *(char*)(*(_QWORD*)v14 + 88LL) &&
            v13 == *(char*)(v15 + 89)) {
          break;
        }
        v14 += 8;
        if (v14 == GameData_21f1728) {
          return result;
        }
      }
      v17 = *(unsigned __int8*)(v15 + 89);
    }
    v18 = v15;
    do {
      if (*(unsigned __int8*)(v18 + 89) != v17) {
        break;
      }
      if (*(_BYTE*)(v18 + 33) == 18) {
        return TimelineFile_890840((__int16*)(*(_QWORD*)(v18 + 24) + 96LL));
      }
      v18 = *(_QWORD*)(*(_QWORD*)(v18 + 24) + 16LL);
    } while (v18 != 0);
    v19 = v15;
    while (*(_BYTE*)(v19 + 33) != 10) {
      v19 = *(_QWORD*)(*(_QWORD*)(v19 + 24) + 8LL);
      if (v19 == 0) {
        v19 = v15;
        do {
          if (*(_BYTE*)(v19 + 33) == 10) {
            break;
          }
          v19 = *(_QWORD*)(*(_QWORD*)(v19 + 24) + 16LL);
        } while (v19 != 0);
        break;
      }
    }
    if (v19 != 0) {
      v18 = v19;
    }
    else {
      v18 = v15;
    }
    if (v18 != 0) {
      return TimelineFile_890840((__int16*)(*(_QWORD*)(v18 + 24) + 96LL));
    }
  }
  return result;
}

__int64 Impl_Destructor_149a1f0(_QWORD* a1)
{
  __int64 result;

  *a1 = game_facility_anonymous_Impl_vtable;
  result = GameRoutine_717b40();
  *a1 = GameData_2044078;
  if ((_QWORD*)GameData_224b478 == a1) {
    GameData_224b478 = 0;
  }
  return result;
}

__int64 Impl_DeletingDestructor_149a240(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_facility_anonymous_Impl_vtable;
  GameRoutine_717b40();
  if ((_QWORD*)GameData_224b478 == a1) {
    GameData_224b478 = 0;
  }
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
