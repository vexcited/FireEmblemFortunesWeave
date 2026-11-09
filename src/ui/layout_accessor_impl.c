#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_134d2e0(_QWORD);
__int64 GameRoutine_1546680(__int64);
__int64 GameRoutine_155e4a0(__int64, __int64, __int64);
__int64 GameRoutine_155f760(__int64, __int64, __int64);
__int64 GameRoutine_15623e0(_QWORD*, __int64);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564440(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1660ac0(_QWORD);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_17bd0e0(_QWORD);
__int64 GameRoutine_2b0(_QWORD);
__int64 GameRoutine_56e670(_QWORD);
__int64 GameRoutine_9bea80(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_fb1e50(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(__int64 result, __int64, float);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 LayoutEx_57b830(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 strncpy(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_Destroy_LayoutAccessor();
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dea0(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_204c6c8[])();
extern __int64 (*GameData_204c748[])();
extern __int64 (*GameData_204c7c8[])();
extern __int64 (*GameData_204c848[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 GameData_212d880;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21f1658;
extern __int64 GameData_22587e0;
extern __int64 GameData_22587e8;
extern __int64 GameData_22587f0;
extern __int64 GameData_22587f8;
extern __int64 GameData_2258800;
extern __int64 GameData_2258808;
extern __int64 GameData_2258810;
extern __int64 GameData_2258818;
extern __int64 GameData_2258820;
extern __int64 GameData_2258830;
extern __int64 GameData_2258838;
extern __int64 GameData_2265728;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64 ui_LayoutAccessor_empty_;
extern __int64* GameData_212c790;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d708;
extern __int64* GameData_212d728[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
extern int GameData_2258828;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) String_60a1d0(void);
void __attribute__((noreturn)) String_60a230(void);
__int64 LayoutAccessor_1555630(__int64 a1);
__int64 LayoutAccessor_1555810(__int64 a1);
__int64 LayoutAccessor_15559c0();
_QWORD* LayoutAccessor_1555a80(__int64 a1, __int64 a2);
bool LayoutAccessor_1555b80(__int64 a1, __int64 a2);
_QWORD* LayoutAccessor_1555ca0(__int64 a1, __int64 a2);
__int64 LayoutAccessor_1555d90();
__int64 LayoutAccessor_1555e20(unsigned int a1);
__int64 LayoutAccessor_1556000();
bool LayoutAccessor_15560a0(__int64 a1, __int64 a2);
__int64 LayoutAccessor_15561b0(__int64 a1);
__int64 LayoutAccessor_1556290(__int64 a1);
__int64 LayoutAccessor_155cb60(_QWORD* a1);
bool LayoutAccessor_155d280(__int64 a1, __int64 a2, __int64 a3, char a4);
__int64 LayoutAccessor_155d390(__int64 result);
float LayoutAccessor_155d940(__int64* a1);
__int64 LayoutAccessor_155e140(__int64* a1);
__int64 LayoutAccessor_155e830(__int64 result, char a2);
__int64 LayoutAccessor_155ea30(__int64* a1);
__int64* LayoutAccessor_155fbe0(__int64* a1, __int64 a2);
__int64 LayoutAccessor_1561f50(__int64* a1, __int64 a2);
__int64 LayoutAccessor_1562060(__int64 result, __int64 a2, __int64 a3);
__int64 LayoutAccessor_15625b0(_QWORD* a1, __int64 a2, char a3);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64 a2);
__int64 LayoutAccessor_1562f00(__int64 result, __int64 a2, float a3);
__int64 LayoutAccessor_1563030(__int64 result, __int64 a2, char a3);
__int64 LayoutAccessor_1563280(__int64* a1, __int64 a2, char a3);
bool LayoutAccessor_1563380(__int64* a1, __int64 a2, char a3);
__int64 LayoutAccessor_1563490(__int64* a1, __int64 a2, char a3);
__int64 LayoutAccessor_15635a0(__int64* a1, __int64 a2, char a3);
__int64 LayoutAccessor_15636c0(__int64 result, __int64 a2, char a3, float a4);
float LayoutAccessor_15637c0(__int64* a1, __int64 a2, char a3);
__int64 LayoutAccessor_1563a20(__int64* a1, char* a2, __int64 a3);
__int64 LayoutAccessor_1563c50(__int64 result, __int64 a2, char a3, float a4);
__int64* LayoutAccessor_15641a0(_QWORD* a1, _QWORD* a2);
__int64 LayoutAccessor_1564a20(__int64 a1, __int64* a2);
__int64 LayoutAccessor_1564b20(__int64 a1, __int64* a2);
__int64 LayoutAccessor_1564d00();

__int64 LayoutAccessor_1555630(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  unsigned int v4;

  v1 = *GameData_212d728[0];
  *(_DWORD*)(a1 + 208) =
      *(_DWORD*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5856LL);
  v2 = *(_QWORD*)(v1 + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v2 + 16), 0);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  result = game_gameui_Footer_instance_;
  v4 = *(_DWORD*)(v2 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v2 + 5856) = v4;
  if (result != 0) {
    result = LayoutAccessor_1567000(result, 0);
    v4 = *(_DWORD*)(v2 + 5856);
  }
  *(_DWORD*)(v2 + 5856) = v4 & 0xFFFDFFFF;
  return result;
}

__int64 LayoutAccessor_1555810(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 212) & 1) == 0) {
    *(_BYTE*)(a1 + 212) = 1;
    return GameRoutine_1546680(a1);
  }
  return a1;
}

__int64 LayoutAccessor_15559c0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;

  v0 = GameData_212d728[0];
  v1 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v1 + 16), 1);
  v2 = game_hub_ProgressEventView_instance_;
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
    v2 = game_hub_ProgressEventView_instance_;
  }
  *(_DWORD*)(v1 + 5856) |= 0x10000u;
  v3 = *(_QWORD*)(*v0 + 8);
  *(_DWORD*)(v3 + 5856) = 1;
  if (v2 != 0) {
    GameRoutine_17b8f40(v2, 1);
  }
  result = game_gameui_Footer_instance_;
  if (game_gameui_Footer_instance_ != 0) {
    result = LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
  *(_DWORD*)(v3 + 5856) &= ~0x20000u;
  return result;
}

_QWORD* LayoutAccessor_1555a80(__int64 a1, __int64 a2)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;
  _QWORD* v11;

  result = v9;
  v3 = *(_QWORD*)(*GameData_212d708 + 16);
  v10 = v9;
  v4 = *(_QWORD*)(v3 + 96);
  v9[0] = GameData_204c6c8;
  if (v4 == 0) {
    goto LABEL_11;
  }
  v5 = *(_QWORD*)(GameData_21c96e8 + 8);
  v6 = *(_QWORD**)(v5 + 8);
  v7 = *(_QWORD**)(v5 + 16);
  if (v6 == v7) {
    result = v9;
  LABEL_11:
    v8 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v8))(result);
  }
  do {
    if (*(_QWORD*)*v6 == v4) {
      v11 = (_QWORD*)*v6;
      if (v10 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*, _QWORD**))(*v10 + 48LL))(v10, &v11);
    }
    ++v6;
  } while (v6 != v7);
  result = v10;
  if (v10 == v9) {
    goto LABEL_11;
  }
  if (v10 == nullptr) {
    return result;
  }
  v8 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v8))(result);
}

bool LayoutAccessor_1555b80(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD v10[4];
  _QWORD* v11;
  int v12;
  _QWORD* v13;

  v12 = 0;
  v2 = v10;
  v3 = *(_QWORD*)(*GameData_212d708 + 16);
  v11 = v10;
  v4 = *(_QWORD*)(v3 + 96);
  v10[0] = GameData_204c748;
  v10[1] = &v12;
  if (v4 == 0) {
    goto LABEL_11;
  }
  v5 = *(_QWORD*)(GameData_21c96e8 + 8);
  v6 = *(_QWORD**)(v5 + 8);
  v7 = *(_QWORD**)(v5 + 16);
  if (v6 == v7) {
    v2 = v10;
  LABEL_11:
    v8 = 32;
    goto LABEL_12;
  }
  do {
    if (*(_QWORD*)*v6 == v4) {
      v13 = (_QWORD*)*v6;
      if (v11 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*, _QWORD**))(*v11 + 48LL))(v11, &v13);
    }
    ++v6;
  } while (v6 != v7);
  v2 = v11;
  if (v11 == v10) {
    goto LABEL_11;
  }
  if (v11 != nullptr) {
    v8 = 40;
  LABEL_12:
    (*(void (**)(_QWORD*, __int64))(*v2 + v8))(v2, a2);
  }
  return v12 > 0;
}

_QWORD* LayoutAccessor_1555ca0(__int64 a1, __int64 a2)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;
  _QWORD* v11;

  result = v9;
  v3 = *(_QWORD*)(*GameData_212d708 + 16);
  v10 = v9;
  v4 = *(_QWORD*)(v3 + 96);
  v9[0] = GameData_204c7c8;
  if (v4 == 0) {
    goto LABEL_11;
  }
  v5 = *(_QWORD*)(GameData_21c96e8 + 8);
  v6 = *(_QWORD**)(v5 + 8);
  v7 = *(_QWORD**)(v5 + 16);
  if (v6 == v7) {
    result = v9;
  LABEL_11:
    v8 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v8))(result);
  }
  do {
    if (*(_QWORD*)*v6 == v4) {
      v11 = (_QWORD*)*v6;
      if (v10 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*, _QWORD**))(*v10 + 48LL))(v10, &v11);
    }
    ++v6;
  } while (v6 != v7);
  result = v10;
  if (v10 == v9) {
    goto LABEL_11;
  }
  if (v10 == nullptr) {
    return result;
  }
  v8 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v8))(result);
}

__int64 LayoutAccessor_1555d90()
{
  __int64 v0;
  __int64 result;

  v0 = *(_QWORD*)(*(_QWORD*)(GameData_21f1658 + 16) + 96LL);
  result = *(_QWORD*)(v0 + 280);
  if (result != 0 &&
      ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)result + 24LL))(result) !=
           1 ||
       ((result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v0 + 280) + 112LL))(
             *(_QWORD*)(v0 + 280))) &
        1) == 0)) {
    result = *(_QWORD*)(v0 + 280);
    if (result != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + 128LL))(result);
    }
  }
  return result;
}

__int64 LayoutAccessor_1555e20(unsigned int a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;

  v1 = 0;
  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212d708 + 16) + 96LL);
  while (1) {
    v3 = GameData_2265728 + v1;
    if (*(_BYTE*)(GameData_2265728 + v1 + 129) == 1 &&
        *(_QWORD*)(v3 + 112) == v2) {
      v8 = GameData_2265728 + v1 + 24;
      goto LABEL_34;
    }
    if (*(_BYTE*)(v3 + 249) == 1 &&
        *(_QWORD*)(GameData_2265728 + v1 + 232) == v2) {
      v8 = GameData_2265728 + v1 + 144;
      goto LABEL_34;
    }
    v4 = GameData_2265728 + v1;
    if (*(_BYTE*)(GameData_2265728 + v1 + 369) == 1 &&
        *(_QWORD*)(v4 + 352) == v2) {
      v8 = GameData_2265728 + v1 + 264;
      goto LABEL_34;
    }
    if (*(_BYTE*)(v4 + 489) == 1 &&
        *(_QWORD*)(GameData_2265728 + v1 + 472) == v2) {
      v8 = GameData_2265728 + v1 + 384;
      goto LABEL_34;
    }
    v5 = GameData_2265728 + v1;
    if (*(_BYTE*)(GameData_2265728 + v1 + 609) == 1 &&
        *(_QWORD*)(v5 + 592) == v2) {
      v8 = GameData_2265728 + v1 + 504;
      goto LABEL_34;
    }
    if (*(_BYTE*)(v5 + 729) == 1 &&
        *(_QWORD*)(GameData_2265728 + v1 + 712) == v2) {
      v8 = GameData_2265728 + v1 + 624;
      goto LABEL_34;
    }
    v6 = GameData_2265728 + v1;
    if (*(_BYTE*)(GameData_2265728 + v1 + 849) == 1 &&
        *(_QWORD*)(v6 + 832) == v2) {
      v8 = GameData_2265728 + v1 + 744;
      goto LABEL_34;
    }
    if (*(_BYTE*)(v6 + 969) == 1 &&
        *(_QWORD*)(GameData_2265728 + v1 + 952) == v2) {
      v8 = GameData_2265728 + v1 + 864;
      goto LABEL_34;
    }
    v7 = GameData_2265728 + v1;
    if (*(_BYTE*)(GameData_2265728 + v1 + 1089) == 1 &&
        *(_QWORD*)(v7 + 1072) == v2) {
      break;
    }
    if (*(_BYTE*)(v7 + 1209) == 1 &&
        *(_QWORD*)(GameData_2265728 + v1 + 1192) == v2) {
      v8 = GameData_2265728 + v1 + 1104;
      goto LABEL_34;
    }
    v1 += 1200;
    if (v1 == 12000) {
      v9 = 0;
      return v9 & a1;
    }
  }
  v8 = GameData_2265728 + v1 + 984;

LABEL_34:
  a1 = GameRoutine_1660ac0(v8);
  v9 = 1;
  return v9 & a1;
}

__int64 LayoutAccessor_1556000()
{
  __int64 v0;
  __int64 result;

  v0 = *(_QWORD*)(*(_QWORD*)(GameData_21f1658 + 16) + 96LL);
  result = *(_QWORD*)(v0 + 280);
  if (result != 0 &&
      ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)result + 24LL))(result) !=
           1 ||
       ((result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v0 + 280) + 112LL))(
             *(_QWORD*)(v0 + 280))) &
        1) == 0)) {
    result = *(_QWORD*)(v0 + 280);
    if (result != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
    }
  }
  return result;
}

bool LayoutAccessor_15560a0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD v10[4];
  _QWORD* v11;
  int v12;
  _QWORD* v13;

  v12 = 0;
  v2 = v10;
  v3 = *(_QWORD*)(*GameData_212d708 + 16);
  v11 = v10;
  v4 = *(_QWORD*)(v3 + 96);
  v10[0] = GameData_204c848;
  v10[1] = &v12;
  if (v4 == 0) {
    goto LABEL_11;
  }
  v5 = *(_QWORD*)(GameData_21c96e8 + 8);
  v6 = *(_QWORD**)(v5 + 8);
  v7 = *(_QWORD**)(v5 + 16);
  if (v6 == v7) {
    v2 = v10;
  LABEL_11:
    v8 = 32;
    goto LABEL_12;
  }
  do {
    if (*(_QWORD*)*v6 == v4) {
      v13 = (_QWORD*)*v6;
      if (v11 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*, _QWORD**))(*v11 + 48LL))(v11, &v13);
    }
    ++v6;
  } while (v6 != v7);
  v2 = v11;
  if (v11 == v10) {
    goto LABEL_11;
  }
  if (v11 != nullptr) {
    v8 = 40;
  LABEL_12:
    (*(void (**)(_QWORD*, __int64))(*v2 + v8))(v2, a2);
  }
  return v12 > 0;
}

__int64 LayoutAccessor_15561b0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;

  v2 = GameData_212d708;
  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212d708 + 16) + 96LL);
  result = *(_QWORD*)(v3 + 280);
  if (result != 0 &&
      ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)result + 24LL))(result) !=
           1 ||
       ((result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 280) + 112LL))(
             *(_QWORD*)(v3 + 280))) &
        1) == 0)) {
    result = *(_QWORD*)(v3 + 280);
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
      if ((result & 1) != 0) {
        v5 = *(_QWORD*)(*(_QWORD*)(*v2 + 16) + 96LL);
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v5 + 280) + 88LL))(
            *(_QWORD*)(v5 + 280), a1);
        result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 280) + 112LL))(
            *(_QWORD*)(v5 + 280));
        if ((result & 1) != 0) {
          result = *(_QWORD*)(v5 + 280);
          if (result != 0) {
            result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
            *(_QWORD*)(v5 + 280) = 0;
          }
        }
      }
    }
  }
  return result;
}

__int64 LayoutAccessor_1556290(__int64 a1)
{
  int v2;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  unsigned int v9;

  GameRoutine_134d2e0(*(_QWORD*)(*GameData_212c790 + 8));
  v2 = *(_DWORD*)(a1 + 208);
  v3 = GameData_212d728[0];
  v4 = *(_QWORD*)(*GameData_212d728[0] + 8);
  *(_DWORD*)(v4 + 5856) = v2;
  v5 = (_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
  v6 = *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
  if ((v2 & 0x10000) != 0) {
    if (v6 != 0) {
      GameRoutine_17b8e80(v6, 1);
    }
  }
  else if (v6 != 0) {
    GameRoutine_17b8f40(v6, 1);
  }
  if ((v2 & 0x20000) != 0) {
    GameRoutine_17bd0e0(v4);
  }
  else {
    if (game_gameui_Footer_instance_ != 0) {
      LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
    }
    *(_DWORD*)(v4 + 5856) &= ~0x20000u;
  }
  v7 = *(_QWORD*)(*v3 + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v7 + 16), 0);
  if (*v5 != 0) {
    GameRoutine_17b8f40(*v5, 1);
  }
  result = game_gameui_Footer_instance_;
  v9 = *(_DWORD*)(v7 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v7 + 5856) = v9;
  if (result != 0) {
    result = LayoutAccessor_1567000(result, 0);
    v9 = *(_DWORD*)(v7 + 5856);
  }
  *(_DWORD*)(v7 + 5856) = v9 & 0xFFFDFFFF;
  return result;
}

__int64 LayoutAccessor_155cb60(_QWORD* a1)
{
  int v1;
  _BYTE* v2;
  _BYTE* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;

  *((_DWORD*)a1 + 28) = 1065353216;
  if ((a1[15] & 1) != 0) {
    v2 = (_BYTE*)a1[17];
    a1[16] = 0;
  }
  else {
    v2 = (char*)a1 + 121;
    *((_BYTE*)a1 + 120) = 0;
  }
  *v2 = 0;
  if ((a1[18] & 1) != 0) {
    v3 = (_BYTE*)a1[20];
    a1[19] = 0;
  }
  else {
    v3 = (char*)a1 + 145;
    *((_BYTE*)a1 + 144) = 0;
  }
  *v3 = 0;
  *((_BYTE*)a1 + 168) = 0;
  if (a1[13] != 0) {
    if (a1[2] == 0 || a1[1] == 0) {
      goto LABEL_31;
    }
    v4 = a1;
    v5 = std___1___shared_weak_count_lock(a1[1]);
    a1 = v4;
    if (v5 != 0) {
      v6 = *v4;
      if (*v4 != 0) {
        v1 = *(unsigned __int8*)(v6 + 24);
        v7 = v6 + 152;
        if (v1 == 0) {
          v7 = 0;
        }
        v8 = v7 != v4[2];
      }
      else {
        v8 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v8) {
          goto LABEL_18;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
        a1 = v4;
        if (v8) {
          goto LABEL_18;
        }
      }
      if ((v1 & 1) == 0) {
      LABEL_31:
        a1[13] = 0;
        return LayoutAccessor_155e140(a1);
      }
      v9 = a1[1];
    LABEL_24:
      v10 = std___1___shared_weak_count_lock(v9);
      v11 = v4;
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v12 = v10;
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v12);
        v11 = v4;
      }
      (*(void (**)(_QWORD))(*(_QWORD*)v11[2] + 72LL))(v11[2]);
      v13 = std___1___shared_weak_count_lock(v4[1]);
      v14 = v4;
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v15 = v13;
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak(v15);
        v14 = v4;
      }
      (*(void (**)(_QWORD, _QWORD))(*(_QWORD*)v14[2] + 24LL))(v14[2], v14[13]);
      a1 = v4;
      goto LABEL_31;
    }
  LABEL_18:
    v9 = a1[1];
    if (v9 == 0 || *(_QWORD*)(v9 + 8) == -1) {
      goto LABEL_31;
    }
    goto LABEL_24;
  }
  return LayoutAccessor_155e140(a1);
}

bool LayoutAccessor_155d280(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;

  if (*(_QWORD*)(a1 + 104) == 0 || *(_BYTE*)(a1 + 168) != (a4 & 1)) {
    return false;
  }
  v7 = strlen(a2);
  v8 = *(_BYTE*)(a1 + 120) >> 1;
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 128);
  }
  if (v7 != v8) {
    return false;
  }
  v9 = v7;
  if (v7 != -1) {
    if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
      v10 = *(_QWORD*)(a1 + 136);
    }
    else {
      v10 = a1 + 121;
    }
    if ((unsigned int)memcmp(v10, a2, v9) != 0) {
      return false;
    }
    if (a3 == 0) {
      v16 = *(unsigned __int8*)(a1 + 144);
      if ((v16 & 1) != 0) {
        v17 = *(_QWORD*)(a1 + 152);
      }
      else {
        v17 = v16 >> 1;
      }
      return v17 == 0;
    }
    v12 = strlen(a3);
    v13 = *(_BYTE*)(a1 + 144) >> 1;
    if ((*(_BYTE*)(a1 + 144) & 1) != 0) {
      v13 = *(_QWORD*)(a1 + 152);
    }
    if (v12 != v13) {
      return false;
    }
    v14 = v12;
    if (v12 != -1) {
      if ((*(_BYTE*)(a1 + 144) & 1) != 0) {
        v15 = *(_QWORD*)(a1 + 160);
      }
      else {
        v15 = a1 + 145;
      }
      return (unsigned int)memcmp(v15, a3, v14) == 0;
    }
  }
  String_60a230();
}

__int64 LayoutAccessor_155d390(__int64 result)
{
  int v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _BOOL4 v5;
  __int64 v6;
  __int64 v7;

  if (*(_QWORD*)(result + 16) != 0) {
    v2 = (__int64*)result;
    result = *(_QWORD*)(result + 8);
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v3 = *v2;
        if (*v2 != 0) {
          v1 = *(unsigned __int8*)(v3 + 24);
          v4 = v3 + 152;
          if (v1 == 0) {
            v4 = 0;
          }
          v5 = v4 != v2[2];
        }
        else {
          v5 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v5) {
            goto LABEL_11;
          }
        }
        else {
          v7 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          result = std___1___shared_weak_count___release_weak(v7);
          if (v5) {
            goto LABEL_11;
          }
        }
        if ((v1 & 1) == 0) {
          return result;
        }
        goto LABEL_16;
      }
    LABEL_11:
      v6 = v2[1];
      if (v6 == 0 || *(_QWORD*)(v6 + 8) == -1) {
        return result;
      }
    LABEL_16:
      result = v2[13];
      if (result != 0) {
        (*(void (**)(__int64))(*(_QWORD*)result + 216LL))(result);
        return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2[13] + 32LL))(
            v2[13], 0);
      }
    }
  }
  return result;
}

float LayoutAccessor_155d940(__int64* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  float result;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (a1[2] != 0) {
    v3 = a1[1];
    if (v3 != 0) {
      v4 = std___1___shared_weak_count_lock(v3);
      if (v4 != 0) {
        v6 = *a1;
        if (*a1 != 0) {
          v1 = *(unsigned __int8*)(v6 + 24);
          v7 = v6 + 152;
          if (v1 == 0) {
            v7 = 0;
          }
          v8 = v7 != a1[2];
        }
        else {
          v8 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v8) {
            goto LABEL_11;
          }
        }
        else {
          v10 = v4;
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v10);
          if (v8) {
            goto LABEL_11;
          }
        }
        if ((v1 & 1) == 0) {
          return result;
        }
        goto LABEL_16;
      }
    LABEL_11:
      v9 = a1[1];
      if (v9 == 0 || *(_QWORD*)(v9 + 8) == -1) {
        return result;
      }
    LABEL_16:
      v11 = a1[13];
      if (v11 != 0) {
        result = (float)(unsigned __int16)GameRoutine_56e670(v11);
        *(float*)(v11 + 32) = result;
      }
    }
  }
  return result;
}

__int64 LayoutAccessor_155e140(__int64* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  bool v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 result;
  __int64 v30;

  if (a1[2] == 0) {
    goto LABEL_19;
  }
  v3 = a1[1];
  if (v3 == 0) {
    goto LABEL_19;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    goto LABEL_11;
  }
  v5 = *a1;
  if (*a1 != 0) {
    v1 = *(unsigned __int8*)(v5 + 24);
    v6 = v5 + 152;
    if (v1 == 0) {
      v6 = 0;
    }
    v7 = v6 != a1[2];
  }
  else {
    v7 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7) {
    LABEL_11:
      v8 = a1[1];
      if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
        goto LABEL_19;
      }
      goto LABEL_16;
    }
  }
  else {
    v9 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v9);
    if (v7) {
      goto LABEL_11;
    }
  }
  if ((v1 & 1) == 0) {
    goto LABEL_19;
  }

LABEL_16:
  v10 = a1[2];
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 72LL))(a1[2]);
    v11 = (__int64*)a1[3];
    v12 = a1 + 4;
    if (v11 != a1 + 4) {
      do {
        if (*(_QWORD*)v11[7] != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 24LL))(v10);
        }
        v20 = (__int64*)v11[1];
        if (v20 != nullptr) {
          do {
            v21 = v20;
            v20 = (__int64*)*v20;
          } while (v20 != nullptr);
        }
        else {
          do {
            v21 = (__int64*)v11[2];
            v22 = v11 == (__int64*)*v21;
            v11 = v21;
          } while (!v22);
        }
        v11 = v21;
      } while (v21 != v12);
    }
    GameRoutine_1563f90(a1 + 3, a1[4]);
    a1[4] = 0;
    a1[5] = 0;
    a1[3] = (__int64)v12;
  }

LABEL_19:
  if (a1[9] != 0) {
    v13 = (_QWORD*)a1[8];
    if (v13 != nullptr) {
      v14 = fw_memory_g_heap_manager_ptr;
      do {
        v16 = v13;
        v13 = (_QWORD*)*v13;
        v17 = v16[6];
        if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v17);
          if ((v16[2] & 1) != 0) {
          LABEL_29:
            v18 = v16[4];
            if (v18 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
                v19 = 128;
              }
              else {
                v19 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v19, v18);
            }
          }
        }
        else if ((v16[2] & 1) != 0) {
          goto LABEL_29;
        }
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v15, v16);
      } while (v13 != nullptr);
    }
    v23 = a1[7];
    a1[8] = 0;
    if (v23 != 0) {
      v24 = v23 & 7;
      if (v23 >= 8) {
        v26 = v23 & 0xFFFFFFFFFFFFFFF8LL;
        v25 = 0;
        do {
          *(_QWORD*)(a1[6] + 8 * v25) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 8) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 16) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 24) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 32) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 40) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 48) = 0;
          v27 = a1[6] + 8 * v25;
          v25 += 8;
          *(_QWORD*)(v27 + 56) = 0;
        } while (v26 != v25);
      }
      else {
        v25 = 0;
      }
      if (v24 != 0) {
        v28 = 8 * v25;
        do {
          --v24;
          *(_QWORD*)(a1[6] + v28) = 0;
          v28 += 8;
        } while (v24 != 0);
      }
    }
    a1[9] = 0;
  }
  result = a1[1];
  *a1 = 0;
  a1[1] = 0;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v30 = a1[12];
  a1[2] = 0;
  a1[11] = 0;
  a1[12] = 0;
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    return std___1___shared_weak_count___release_weak(v30);
  }
  return result;
}

__int64 LayoutAccessor_155e830(__int64 result, char a2)
{
  int v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if (*(_QWORD*)(result + 16) == 0) {
    return result;
  }
  v3 = (__int64*)result;
  result = *(_QWORD*)(result + 8);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_11;
  }
  v5 = *v3;
  if (*v3 != 0) {
    v2 = *(unsigned __int8*)(v5 + 24);
    v6 = v5 + 152;
    if (v2 == 0) {
      v6 = 0;
    }
    v7 = v6 != v3[2];
  }
  else {
    v7 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v8);
    if (v7) {
      goto LABEL_11;
    }
  LABEL_15:
    if ((v2 & 1) == 0) {
      return result;
    }
    result = v3[1];
    if (result == 0) {
      goto LABEL_24;
    }
    goto LABEL_17;
  }
  if (!v7) {
    goto LABEL_15;
  }

LABEL_11:
  result = v3[1];
  if (result == 0 || *(_QWORD*)(result + 8) == -1) {
    return result;
  }

LABEL_17:
  result = std___1___shared_weak_count_lock(result);
  if (result != 0) {
    v9 = *v3;
    if (*v3 != 0 && (*(_BYTE*)(v9 + 24) == 0 ? (v10 = 0) : (v10 = v9 + 152),
                     v10 == v3[2])) {
      LOBYTE(v2) = 1;
      *(_BYTE*)(v9 + 2368) = a2 & 1;
    }
    else {
      LOBYTE(v2) = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = result;
      (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      result = std___1___shared_weak_count___release_weak(v11);
    }
    if (v3[2] != 0) {
      v12 = v2;
    }
    else {
      v12 = 1;
    }
    if ((v12 & 1) != 0) {
      return result;
    }
    goto LABEL_33;
  }

LABEL_24:
  if (v3[2] == 0) {
    return result;
  }

LABEL_33:
  result = v3[1];
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_43;
  }
  v13 = *v3;
  if (*v3 != 0) {
    v2 = *(unsigned __int8*)(v13 + 24);
    v14 = v13 + 152;
    if (v2 == 0) {
      v14 = 0;
    }
    v15 = v14 != v3[2];
  }
  else {
    v15 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v16 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v16);
  }
  if (!v15) {
    if ((v2 & 1) == 0) {
      return result;
    }
  }
  else {
  LABEL_43:
    v17 = v3[1];
    if (v17 == 0 || *(_QWORD*)(v17 + 8) == -1) {
      return result;
    }
  }
  v18 = v3[2];
  if (v18 != 0) {
    v19 = *(_QWORD*)(v18 + 24);
    if (v19 != 0) {
      *(_BYTE*)(v19 + 88) = *(_BYTE*)(v19 + 88) & 0xFE | a2 & 1;
    }
  }
  return result;
}

__int64 LayoutAccessor_155ea30(__int64* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  if (a1[2] == 0) {
    goto LABEL_46;
  }
  v3 = a1[1];
  if (v3 == 0) {
    goto LABEL_46;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
  LABEL_11:
    v8 = a1[1];
    if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
      goto LABEL_46;
    }
    goto LABEL_17;
  }
  v5 = *a1;
  if (*a1 != 0) {
    v1 = *(unsigned __int8*)(v5 + 24);
    v6 = v5 + 152;
    if (v1 == 0) {
      v6 = 0;
    }
    v7 = v6 != a1[2];
  }
  else {
    v7 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7) {
      goto LABEL_11;
    }
  }
  else {
    v9 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v9);
    if (v7) {
      goto LABEL_11;
    }
  }
  if ((v1 & 1) == 0) {
    goto LABEL_46;
  }
  v8 = a1[1];
  if (v8 == 0) {
  LABEL_28:
    if (a1[2] == 0) {
      goto LABEL_46;
    }
    v15 = a1[1];
    if (v15 == 0) {
      goto LABEL_46;
    }
    v16 = std___1___shared_weak_count_lock(v15);
    if (v16 == 0) {
      goto LABEL_39;
    }
    v17 = *a1;
    if (*a1 != 0) {
      v1 = *(unsigned __int8*)(v17 + 24);
      v18 = v17 + 152;
      if (v1 == 0) {
        v18 = 0;
      }
      v19 = v18 != a1[2];
    }
    else {
      v19 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v20 = v16;
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v20);
    }
    if (!v19) {
      if ((v1 & 1) == 0) {
        goto LABEL_46;
      }
    }
    else {
    LABEL_39:
      v21 = a1[1];
      if (v21 == 0 || *(_QWORD*)(v21 + 8) == -1) {
        goto LABEL_46;
      }
    }
    v22 = a1[2];
    if (v22 != 0) {
      v23 = *(_QWORD*)(v22 + 24);
      if (v23 != 0) {
        LOBYTE(v1) = *(_BYTE*)(v23 + 88) & 1;
        return v1 & 1;
      }
    }
  LABEL_46:
    LOBYTE(v1) = 0;
    return v1 & 1;
  }

LABEL_17:
  v10 = std___1___shared_weak_count_lock(v8);
  if (v10 == 0) {
    goto LABEL_28;
  }
  v11 = *a1;
  if (*a1 != 0 && (*(_BYTE*)(v11 + 24) == 0 ? (v12 = 0) : (v12 = v11 + 152),
                   v12 == a1[2])) {
    LOBYTE(v1) = *(_BYTE*)(v11 + 2368);
    v13 = 0;
  }
  else {
    v13 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v14 = v10;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v14);
  }
  if (v13 != 0) {
    goto LABEL_28;
  }
  return v1 & 1;
}

__int64* LayoutAccessor_155fbe0(__int64* a1, __int64 a2)
{
  int v2;
  __int64 v5;
  __int64* result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  __int64* v50;

  v49 = a2;
  v5 = LayoutAccessor_15641a0(a1 + 6, &v49);
  if (v5 != 0) {
    return *(__int64**)(v5 + 40);
  }
  if (a1[2] == 0) {
    return &ui_LayoutAccessor_empty_;
  }
  v7 = a1[1];
  if (v7 == 0) {
    return &ui_LayoutAccessor_empty_;
  }
  v8 = std___1___shared_weak_count_lock(v7);
  if (v8 == 0) {
  LABEL_13:
    v12 = a1[1];
    if (v12 == 0 || *(_QWORD*)(v12 + 8) == -1) {
      return &ui_LayoutAccessor_empty_;
    }
    goto LABEL_18;
  }
  v9 = *a1;
  if (*a1 != 0) {
    v2 = *(unsigned __int8*)(v9 + 24);
    v10 = v9 + 152;
    if (v2 == 0) {
      v10 = 0;
    }
    v11 = v10 != a1[2];
  }
  else {
    v11 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v11) {
      goto LABEL_13;
    }
  }
  else {
    v13 = v8;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v13);
    if (v11) {
      goto LABEL_13;
    }
  }
  if ((v2 & 1) == 0) {
    return &ui_LayoutAccessor_empty_;
  }

LABEL_18:
  v14 = a1[2];
  if (v14 == 0) {
    return &ui_LayoutAccessor_empty_;
  }
  v15 = GameRoutine_155e4a0((__int64)a1, v14, a2);
  if (v15 == 0) {
    return &ui_LayoutAccessor_empty_;
  }
  v16 = v15;
  v17 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v18 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       128, 16, 0);
  *(_QWORD*)(v18 + 16) = 0;
  v19 = v18;
  v20 = GameData_212d880;
  *(_QWORD*)(v18 + 56) = 0;
  *(_QWORD*)(v18 + 24) = 0;
  v21 = v18 + 24;
  *(_QWORD*)(v18 + 32) = 0;
  *(_QWORD*)(v18 + 40) = 0;
  *(_QWORD*)(v18 + 48) = v18 + 56;
  *(_QWORD*)(v18 + 64) = 0;
  *(_QWORD*)(v18 + 72) = 0;
  *(_QWORD*)(v18 + 80) = 0;
  *(_QWORD*)(v18 + 88) = 0;
  *(_QWORD*)(v18 + 96) = 0;
  *(_QWORD*)(v18 + 112) = 0;
  *(_QWORD*)(v18 + 120) = 0;
  *(_QWORD*)v18 = v20 + 16;
  *(_QWORD*)(v18 + 8) = 0;
  *(_DWORD*)(v18 + 104) = 1065353216;
  v22 = strlen(a2);
  if (v22 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_72;
  }
  v23 = v22;
  if (v22 >= 0x17) {
    if ((v22 | 7) == 0x17) {
      v25 = 26;
    }
    else {
      v25 = (v22 | 7) + 1;
    }
    v24 = (char*)fw_memory_HeapManager_Allocate(*v17, v25, 16, 0);
    v47 = v23;
    v48 = v24;
    v46 = v25 | 1;
  }
  else {
    LOBYTE(v46) = 2 * v22;
    v24 = (char*)&v46 + 1;
    if (v22 == 0) {
      goto LABEL_31;
    }
  }
  memcpy(v24, a2, v23);

LABEL_31:
  v24[v23] = 0;
  v50 = &v46;
  v26 = GameRoutine_1564440(a1 + 6, &v46, &v50);
  v27 = *(_QWORD*)(v26 + 48);
  *(_QWORD*)(v26 + 40) = v21;
  *(_QWORD*)(v26 + 48) = v19;
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak(v27);
  }
  if ((v46 & 1) != 0 && v48 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*v17 + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*v17 + v28, v48);
  }
  v29 = strlen(a2);
  if (v29 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_72:
    String_60a1d0();
  }
  v30 = v29;
  if (v29 >= 0x17) {
    if ((v29 | 7) == 0x17) {
      v32 = 26;
    }
    else {
      v32 = (v29 | 7) + 1;
    }
    v31 = (char*)fw_memory_HeapManager_Allocate(*v17, v32, 16, 0);
    v47 = v30;
    v48 = v31;
    v46 = v32 | 1;
  }
  else {
    LOBYTE(v46) = 2 * v29;
    v31 = (char*)&v46 + 1;
    if (v29 == 0) {
      goto LABEL_48;
    }
  }
  memcpy(v31, a2, v30);

LABEL_48:
  v31[v30] = 0;
  v50 = &v46;
  v33 = *(_QWORD*)(GameRoutine_1564440(a1 + 6, &v46, &v50) + 40);
  v34 = a1[1];
  v44 = 0;
  v45 = 0;
  if (v34 != 0 &&
      (v35 = std___1___shared_weak_count_lock(v34), v45 = v35, v35 != 0)) {
    v36 = v35;
    v44 = *a1;
    ui_LayoutAccessor_Setup_155dea0(v33, &v44, v16);
    if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
      std___1___shared_weak_count___release_weak(v36);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dea0(v33, &v44, v16);
  }
  if ((v46 & 1) != 0 && v48 != nullptr) {
    v37 = 128;
    if (*(_QWORD*)(*v17 + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*v17 + v37, v48);
  }
  v38 = strlen(a2);
  if (v38 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_72;
  }
  v39 = v38;
  if (v38 >= 0x17) {
    if ((v38 | 7) == 0x17) {
      v41 = 26;
    }
    else {
      v41 = (v38 | 7) + 1;
    }
    v40 = (char*)fw_memory_HeapManager_Allocate(*v17, v41, 16, 0);
    v47 = v39;
    v48 = v40;
    v46 = v41 | 1;
  }
  else {
    LOBYTE(v46) = 2 * v38;
    v40 = (char*)&v46 + 1;
    if (v38 == 0) {
      goto LABEL_67;
    }
  }
  memcpy(v40, a2, v39);

LABEL_67:
  v40[v39] = 0;
  v50 = &v46;
  result = *(__int64**)(GameRoutine_1564440(a1 + 6, &v46, &v50) + 40);
  if ((v46 & 1) != 0 && v48 != nullptr) {
    v42 = result;
    v43 = 128;
    if (*(_QWORD*)(*v17 + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*v17 + v43, v48);
    return v42;
  }
  return result;
}

__int64 LayoutAccessor_1561f50(__int64* a1, __int64 a2)
{
  int v2;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if (a1[2] == 0) {
    return 0;
  }
  v4 = a1[1];
  if (v4 == 0) {
    return 0;
  }
  v6 = std___1___shared_weak_count_lock(v4);
  if (v6 != 0) {
    v7 = *a1;
    if (*a1 != 0) {
      v2 = *(unsigned __int8*)(v7 + 24);
      v8 = v7 + 152;
      if (v2 == 0) {
        v8 = 0;
      }
      v9 = v8 != a1[2];
    }
    else {
      v9 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v9) {
        goto LABEL_11;
      }
    }
    else {
      v11 = v6;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v11);
      if (v9) {
        goto LABEL_11;
      }
    }
    if ((v2 & 1) == 0) {
      return 0;
    }
    goto LABEL_16;
  }

LABEL_11:
  v10 = a1[1];
  if (v10 == 0 || *(_QWORD*)(v10 + 8) == -1) {
    return 0;
  }

LABEL_16:
  v12 = a1[2];
  if (v12 != 0) {
    v13 = GameRoutine_155f760((__int64)a1, v12, a2);
    if (v13 != 0) {
      return __dynamic_cast(v13, GameData_212d670[0], GameData_212d678[0], 0);
    }
  }
  return 0;
}

__int64 LayoutAccessor_1562060(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  _QWORD v7[4];
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  if (a2 != 0 && a3 != 0) {
    v3 = result;
    v10 = -1;
    v11 = -1;
    v12 = -1;
    v13 = -1;
    v5 = *msg_MessageManager_instance__ptr[0];
    v14 = -1;
    v15 = -1;
    v16 = -1;
    v17 = -1;
    v18 = -1;
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v7[0] = msg_TagSelector_vtable;
    v7[1] = 0xFFFF0001FFFF0000LL;
    v7[2] = 0xFFFF0004FFFF0002LL;
    v7[3] = 0xFFFF0006FFFF0005LL;
    v22 = 8;
    v8 = -65529;
    v9 = -65528;
    result = GameRoutine_a4dbe0(v5, a3, 0, v7);
    if (result != 0) {
      v6 = result;
      result = ui_LayoutAccessor_FindTextBox(v3, a2);
      if (result != 0) {
        return GameRoutine_156c5d0(result, v6, 0);
      }
    }
  }
  return result;
}

__int64 LayoutAccessor_15625b0(_QWORD* a1, __int64 a2, char a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v14[2];

  if (a1[5] == 0) {
    return 0;
  }
  v14[0] = GameRoutine_15623e0(a1, a2);
  v14[1] = v6;
  v7 = LayoutAccessor_1564a20(a1 + 3, v14);
  if (a1 + 4 == (_QWORD*)v7) {
    return 0;
  }
  v8 = *(_QWORD*)(v7 + 56);
  if (v8 == 0) {
    return 0;
  }
  if ((a3 & 1) == 0) {
    return *(_QWORD*)v8;
  }
  if (a2 == 0) {
    return 0;
  }
  v9 = strlen(a2);
  v10 = *(_BYTE*)(v8 + 8) >> 1;
  if ((*(_BYTE*)(v8 + 8) & 1) != 0) {
    v10 = *(_QWORD*)(v8 + 16);
  }
  if (v9 != v10) {
    return 0;
  }
  v11 = v9;
  if (v9 == -1) {
    String_60a230();
  }
  v12 = (*(_BYTE*)(v8 + 8) & 1) != 0 ? *(_QWORD*)(v8 + 24) : v8 + 9;
  if ((unsigned int)memcmp(v12, a2, v11) == 0) {
    return *(_QWORD*)v8;
  }
  else {
    return 0;
  }
}

__int64 LayoutAccessor_1562cf0(__int64 result, __int64 a2)
{
  int v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];

  if (*(_QWORD*)(result + 16) == 0) {
    return result;
  }
  v3 = (__int64*)result;
  result = *(_QWORD*)(result + 8);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_14;
  }
  v5 = *v3;
  if (*v3 != 0) {
    v2 = *(unsigned __int8*)(v5 + 24);
    v6 = v5 + 152;
    if (v2 == 0) {
      v6 = 0;
    }
    v7 = v6 != v3[2];
  }
  else {
    v7 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (!v7) {
      goto LABEL_11;
    }
  LABEL_14:
    v9 = v3[1];
    if (v9 == 0) {
      return result;
    }
    LOBYTE(v2) = *(_QWORD*)(v9 + 8) != -1;
    if (a2 == 0) {
      return result;
    }
    goto LABEL_16;
  }
  v8 = result;
  (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  result = std___1___shared_weak_count___release_weak(v8);
  if (v7) {
    goto LABEL_14;
  }

LABEL_11:
  if (a2 == 0) {
    return result;
  }

LABEL_16:
  if ((v2 & 1) != 0) {
    if (v3[5] == 0) {
      goto LABEL_20;
    }
    v17[0] = GameRoutine_15623e0(v3, a2);
    v17[1] = v10;
    v11 = LayoutAccessor_1564b20(v3 + 3, v17);
    if (v3 + 4 == (__int64*)v11) {
      goto LABEL_20;
    }
    v12 = *(_QWORD*)(v11 + 56);
    if (*(_QWORD*)v12 != 0 || *(float*)(v12 + 32) != 0.0) {
      goto LABEL_20;
    }
    v13 = strlen(a2);
    v14 = *(_BYTE*)(v12 + 8) >> 1;
    if ((*(_BYTE*)(v12 + 8) & 1) != 0) {
      v14 = *(_QWORD*)(v12 + 16);
    }
    if (v13 != v14) {
      goto LABEL_20;
    }
    v15 = v13;
    if (v13 == -1) {
      String_60a230();
    }
    v16 = (*(_BYTE*)(v12 + 8) & 1) != 0 ? *(_QWORD*)(v12 + 24) : v12 + 9;
    result = memcmp(v16, a2, v15);
    if ((_DWORD)result != 0) {
    LABEL_20:
      LayoutAccessor_1562680((__int64)v3, a2, 1.0);
      return LayoutAccessor_1563030(v3, a2, 0);
    }
  }
  return result;
}

__int64 LayoutAccessor_1562f00(__int64 result, __int64 a2, float a3)
{
  int v3;
  __int64* v4;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  _QWORD v16[2];

  if (*(_QWORD*)(result + 16) == 0) {
    return result;
  }
  v4 = (__int64*)result;
  result = *(_QWORD*)(result + 8);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_11;
  }
  v7 = *v4;
  if (*v4 != 0) {
    v3 = *(unsigned __int8*)(v7 + 24);
    v8 = v7 + 152;
    if (v3 == 0) {
      v8 = 0;
    }
    v9 = v8 != v4[2];
  }
  else {
    v9 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9) {
    LABEL_11:
      v10 = v4[1];
      if (v10 == 0) {
        return result;
      }
      v11 = a2;
      if (*(_QWORD*)(v10 + 8) == -1) {
        return result;
      }
      goto LABEL_16;
    }
  }
  else {
    v12 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v12);
    if (v9) {
      goto LABEL_11;
    }
  }
  v11 = a2;
  if ((v3 & 1) == 0) {
    return result;
  }

LABEL_16:
  if (v4[5] != 0) {
    v16[0] = GameRoutine_15623e0(v4, v11);
    v16[1] = v13;
    result = LayoutAccessor_1564a20(v4 + 3, v16);
    if (v4 + 4 != (__int64*)result) {
      v14 = *(__int64**)(result + 56);
      if (v14 != nullptr) {
        v15 = *v14;
        if (v15 != 0) {
          *(float*)(v15 + 32) = a3;
        }
      }
    }
  }
  return result;
}

__int64 LayoutAccessor_1563030(__int64 result, __int64 a2, char a3)
{
  int v3;
  __int64* v4;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD v19[2];

  if (*(_QWORD*)(result + 16) == 0) {
    return result;
  }
  v4 = (__int64*)result;
  result = *(_QWORD*)(result + 8);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_11;
  }
  v7 = *v4;
  if (*v4 != 0) {
    v3 = *(unsigned __int8*)(v7 + 24);
    v8 = v7 + 152;
    if (v3 == 0) {
      v8 = 0;
    }
    v9 = v8 != v4[2];
  }
  else {
    v9 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9) {
    LABEL_11:
      v10 = v4[1];
      if (v10 == 0 || *(_QWORD*)(v10 + 8) == -1) {
        return result;
      }
      goto LABEL_16;
    }
  }
  else {
    v11 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v11);
    if (v9) {
      goto LABEL_11;
    }
  }
  if ((v3 & 1) == 0) {
    return result;
  }

LABEL_16:
  if (v4[5] != 0) {
    v19[0] = GameRoutine_15623e0(v4, a2);
    v19[1] = v12;
    result = LayoutAccessor_1564b20(v4 + 3, v19);
    if (v4 + 4 != (__int64*)result) {
      v13 = *(_QWORD**)(result + 56);
      v14 = result;
      if (*v13 != 0 &&
          ((a3 & 1) == 0 ||
           a2 != 0 && ((result = GameRoutine_fb1e50(v13 + 1, a2)) & 1) != 0)) {
        v15 = std___1___shared_weak_count_lock(v4[1]);
        if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          v16 = v15;
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak(v16);
        }
        (*(void (**)(__int64))(*(_QWORD*)v4[2] + 72LL))(v4[2]);
        *(_DWORD*)(*(_QWORD*)(v14 + 56) + 32LL) =
            *(_DWORD*)(**(_QWORD**)(v14 + 56) + 32LL);
        v17 = std___1___shared_weak_count_lock(v4[1]);
        if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          v18 = v17;
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v18);
        }
        result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v4[2] + 24LL))(
            v4[2], **(_QWORD**)(v14 + 56));
        **(_QWORD**)(v14 + 56) = 0;
      }
    }
  }
  return result;
}

__int64 LayoutAccessor_1563280(__int64* a1, __int64 a2, char a3)
{
  int v3;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;

  if (a1[2] == 0) {
    return 0;
  }
  result = a1[1];
  if (result == 0) {
    return result;
  }
  v8 = std___1___shared_weak_count_lock(result);
  if (v8 == 0) {
  LABEL_12:
    v12 = a1[1];
    if (v12 != 0 && *(_QWORD*)(v12 + 8) != -1) {
      goto LABEL_14;
    }
    return 0;
  }
  v9 = *a1;
  if (*a1 != 0) {
    v3 = *(unsigned __int8*)(v9 + 24);
    v10 = v9 + 152;
    if (v3 == 0) {
      v10 = 0;
    }
    v11 = v10 != a1[2];
  }
  else {
    v11 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v11) {
      goto LABEL_12;
    }
  }
  else {
    v13 = v8;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v13);
    if (v11) {
      goto LABEL_12;
    }
  }
  if ((v3 & 1) == 0) {
    return 0;
  }

LABEL_14:
  result = LayoutAccessor_15625b0(a1, a2, a3 & 1);
  if (result != 0) {
    return *(float*)(result + 60) != 0.0;
  }
  return result;
}

bool LayoutAccessor_1563380(__int64* a1, __int64 a2, char a3)
{
  int v3;
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;

  if (a1[2] == 0) {
    return true;
  }
  v5 = a1[1];
  if (v5 == 0) {
    return true;
  }
  v8 = std___1___shared_weak_count_lock(v5);
  if (v8 != 0) {
    v9 = *a1;
    if (*a1 != 0) {
      v3 = *(unsigned __int8*)(v9 + 24);
      v10 = v9 + 152;
      if (v3 == 0) {
        v10 = 0;
      }
      v11 = v10 != a1[2];
    }
    else {
      v11 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v11) {
        goto LABEL_12;
      }
    }
    else {
      v14 = v8;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v14);
      if (v11) {
        goto LABEL_12;
      }
    }
    if ((v3 & 1) == 0) {
      return true;
    }
    goto LABEL_17;
  }

LABEL_12:
  v13 = a1[1];
  if (v13 == 0 || *(_QWORD*)(v13 + 8) == -1) {
    return true;
  }

LABEL_17:
  v15 = LayoutAccessor_15625b0(a1, a2, a3 & 1);
  if (v15 != 0) {
    v16 = *(float*)(v15 + 32);
    return v16 == (float)(unsigned __int16)GameRoutine_56e670(v15);
  }
  return true;
}

__int64 LayoutAccessor_1563490(__int64* a1, __int64 a2, char a3)
{
  int v3;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  float v13;
  __int64 v14;

  if (a1[2] == 0) {
    return 0;
  }
  result = a1[1];
  if (result == 0) {
    return result;
  }
  v8 = std___1___shared_weak_count_lock(result);
  if (v8 == 0) {
  LABEL_12:
    v12 = a1[1];
    if (v12 != 0 && *(_QWORD*)(v12 + 8) != -1) {
      goto LABEL_14;
    }
    return 0;
  }
  v9 = *a1;
  if (*a1 != 0) {
    v3 = *(unsigned __int8*)(v9 + 24);
    v10 = v9 + 152;
    if (v3 == 0) {
      v10 = 0;
    }
    v11 = v10 != a1[2];
  }
  else {
    v11 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v11) {
      goto LABEL_12;
    }
  }
  else {
    v14 = v8;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v14);
    if (v11) {
      goto LABEL_12;
    }
  }
  if ((v3 & 1) == 0) {
    return 0;
  }

LABEL_14:
  result = LayoutAccessor_15625b0(a1, a2, a3 & 1);
  if (result != 0) {
    v13 = *(float*)(result + 32);
    return v13 == (float)(unsigned __int16)GameRoutine_56e670(result);
  }
  return result;
}

__int64 LayoutAccessor_15635a0(__int64* a1, __int64 a2, char a3)
{
  int v3;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  float v14;

  if (a1[2] == 0) {
    return 0;
  }
  result = a1[1];
  if (result != 0) {
    v8 = std___1___shared_weak_count_lock(result);
    if (v8 != 0) {
      v9 = *a1;
      if (*a1 != 0) {
        v3 = *(unsigned __int8*)(v9 + 24);
        v10 = v9 + 152;
        if (v3 == 0) {
          v10 = 0;
        }
        v11 = v10 != a1[2];
      }
      else {
        v11 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v11) {
          goto LABEL_12;
        }
      }
      else {
        v13 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v13);
        if (v11) {
          goto LABEL_12;
        }
      }
      if ((v3 & 1) != 0) {
        goto LABEL_14;
      }
      return 0;
    }
  LABEL_12:
    v12 = a1[1];
    if (v12 != 0 && *(_QWORD*)(v12 + 8) != -1) {
    LABEL_14:
      result = LayoutAccessor_15625b0(a1, a2, a3 & 1);
      if (result != 0) {
        if (*(float*)(result + 60) == 0.0) {
          v14 = *(float*)(result + 32);
          return v14 == (float)(unsigned __int16)GameRoutine_56e670(result);
        }
        else {
          return 1;
        }
      }
      return result;
    }
    return 0;
  }
  return result;
}

__int64 LayoutAccessor_15636c0(__int64 result, __int64 a2, char a3, float a4)
{
  int v4;
  __int64* v5;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (*(_QWORD*)(result + 16) != 0) {
    v5 = (__int64*)result;
    result = *(_QWORD*)(result + 8);
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v9 = *v5;
        if (*v5 != 0) {
          v4 = *(unsigned __int8*)(v9 + 24);
          v10 = v9 + 152;
          if (v4 == 0) {
            v10 = 0;
          }
          v11 = v10 != v5[2];
        }
        else {
          v11 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v11) {
            goto LABEL_11;
          }
        }
        else {
          v14 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          result = std___1___shared_weak_count___release_weak(v14);
          if (v11) {
            goto LABEL_11;
          }
        }
        v13 = a2;
        if ((v4 & 1) == 0) {
          return result;
        }
        goto LABEL_16;
      }
    LABEL_11:
      v12 = v5[1];
      if (v12 == 0) {
        return result;
      }
      v13 = a2;
      if (*(_QWORD*)(v12 + 8) == -1) {
        return result;
      }
    LABEL_16:
      result = LayoutAccessor_15625b0(v5, v13, a3 & 1);
      if (result != 0) {
        *(float*)(result + 32) = a4;
      }
    }
  }
  return result;
}

float LayoutAccessor_15637c0(__int64* a1, __int64 a2, char a3)
{
  int v3;
  float v4;
  __int64 v6;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v4 = 0.0;
  if (a1[2] == 0) {
    return v4;
  }
  v6 = a1[1];
  if (v6 == 0) {
    return v4;
  }
  v9 = std___1___shared_weak_count_lock(v6);
  if (v9 == 0) {
    goto LABEL_11;
  }
  v10 = *a1;
  if (*a1 != 0) {
    v3 = *(unsigned __int8*)(v10 + 24);
    v11 = v10 + 152;
    if (v3 == 0) {
      v11 = 0;
    }
    v12 = v11 != a1[2];
  }
  else {
    v12 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v12) {
    LABEL_11:
      v13 = a1[1];
      if (v13 == 0 || *(_QWORD*)(v13 + 8) == -1) {
        return v4;
      }
      goto LABEL_16;
    }
  }
  else {
    v14 = v9;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v14);
    if (v12) {
      goto LABEL_11;
    }
  }
  if ((v3 & 1) == 0) {
    return v4;
  }

LABEL_16:
  v15 = LayoutAccessor_15625b0(a1, a2, a3 & 1);
  if (v15 != 0) {
    return *(float*)(v15 + 32);
  }
  return v4;
}

__int64 LayoutAccessor_1563a20(__int64* a1, char* a2, __int64 a3)
{
  int v3;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  _QWORD v27[2];
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;

  if (a1[2] == 0) {
    return 0;
  }
  result = a1[1];
  if (result == 0) {
    return result;
  }
  v8 = std___1___shared_weak_count_lock(result);
  if (v8 != 0) {
    v9 = *a1;
    if (*a1 != 0) {
      v3 = *(unsigned __int8*)(v9 + 24);
      v10 = v9 + 152;
      if (v3 == 0) {
        v10 = 0;
      }
      v11 = v10 != a1[2];
    }
    else {
      v11 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v11) {
        goto LABEL_12;
      }
    }
    else {
      v17 = v8;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v17);
      if (v11) {
        goto LABEL_12;
      }
    }
    if ((v3 & 1) != 0) {
      goto LABEL_14;
    }
    return 0;
  }

LABEL_12:
  v12 = a1[1];
  if (v12 == 0 || *(_QWORD*)(v12 + 8) == -1) {
    return 0;
  }

LABEL_14:
  v13 = a1[11];
  if (v13 != 0) {
    v14 = a2;
    v26 = a2;
    v27[0] = a3;
    if (a3 != 0) {
      v15 = GameRoutine_9bea80(v13, &v26);
      v14 = a2;
      if (v15 != 0) {
        result = *(_QWORD*)(v15 + 32);
        if (result != 0) {
          return result;
        }
        v40 = 0;
        v41 = 0;
        v38 = 0;
        v39 = 0;
        v16 = (char*)v27;
        v36 = 0;
        v37 = 0;
        v34 = 0;
        v35 = 0;
        v32 = 0;
        v33 = 0;
        v30 = 0;
        v31 = 0;
        v28 = 0;
        v29 = 0;
        v27[0] = 0;
        v27[1] = 0;
        v26 = nullptr;
        goto LABEL_25;
      }
    }
  }
  else {
    v14 = a2;
  }
  v40 = 0;
  v41 = 0;
  v38 = 0;
  v39 = 0;
  v36 = 0;
  v37 = 0;
  v34 = 0;
  v35 = 0;
  v32 = 0;
  v33 = 0;
  v30 = 0;
  v31 = 0;
  v28 = 0;
  v29 = 0;
  v27[0] = 0;
  v27[1] = 0;
  v26 = nullptr;
  if (a3 != 0) {
    v16 = (char*)v27;
  LABEL_25:
    if (v14[a3] != 0) {
      if ((unsigned __int64)(a3 - 128) <= 0xFFFFFFFFFFFFFF7ELL) {
        v18 = v14;
        v16 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, a3 + 1, 16, 0);
        memset(v16, 0, a3 + 1, v19, v20, v21);
        v14 = v18;
        v26 = v16;
      }
      strncpy(v16, v14, a3);
      v16[a3] = 0;
    }
    else {
      v16 = v14;
    }
    goto LABEL_31;
  }
  v16 = &GameData_1a9f09e;

LABEL_31:
  v22 = a1[2];
  v42 = v16;
  result = LayoutEx_57b830(v22, v16);
  v23 = v26;
  v26 = nullptr;
  if (v23 != nullptr) {
    v24 = result;
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25,
                                  v23);
    return v24;
  }
  return result;
}

__int64 LayoutAccessor_1563c50(__int64 result, __int64 a2, char a3, float a4)
{
  int v4;
  __int64* v5;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (*(_QWORD*)(result + 16) != 0) {
    v5 = (__int64*)result;
    result = *(_QWORD*)(result + 8);
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v9 = *v5;
        if (*v5 != 0) {
          v4 = *(unsigned __int8*)(v9 + 24);
          v10 = v9 + 152;
          if (v4 == 0) {
            v10 = 0;
          }
          v11 = v10 != v5[2];
        }
        else {
          v11 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v11) {
            goto LABEL_11;
          }
        }
        else {
          v14 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          result = std___1___shared_weak_count___release_weak(v14);
          if (v11) {
            goto LABEL_11;
          }
        }
        v13 = a2;
        if ((v4 & 1) == 0) {
          return result;
        }
        goto LABEL_16;
      }
    LABEL_11:
      v12 = v5[1];
      if (v12 == 0) {
        return result;
      }
      v13 = a2;
      if (*(_QWORD*)(v12 + 8) == -1) {
        return result;
      }
    LABEL_16:
      result = LayoutAccessor_15625b0(v5, v13, a3 & 1);
      if (result != 0) {
        return (
            *(__int64 (**)(__int64, _QWORD, float))(*(_QWORD*)result + 200LL))(
            result, *(unsigned int*)(result + 64), a4);
      }
    }
  }
  return result;
}

__int64* LayoutAccessor_15641a0(_QWORD* a1, _QWORD* a2)
{
  unsigned __int64 v2;
  __int64 v4;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64** v11;
  __int64* i;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;

  v2 = a1[1];
  if (v2 == 0 || a1[3] == 0) {
    return nullptr;
  }
  v4 = *a2;
  v6 = strlen(*a2);
  v7 = std___1___hash_memory(v4, v6);
  v8 = v2 - 1;
  v9 = v7;
  if ((v2 & (v2 - 1)) != 0) {
    v10 = v7;
    if (v7 >= v2) {
      v10 = v7 % v2;
    }
  }
  else {
    v10 = v7 & v8;
  }
  v11 = *(__int64***)(*a1 + 8 * v10);
  if (v11 == nullptr) {
    return nullptr;
  }
  for (i = *v11; i != nullptr; i = (__int64*)*i) {
    v13 = i[1];
    if (v13 == v9) {
      v14 = *((_BYTE*)i + 16) >> 1;
      if ((i[2] & 1) != 0) {
        v14 = i[3];
      }
      if (v6 == v14) {
        if (v6 == -1) {
          String_60a230();
        }
        v15 = (i[2] & 1) != 0 ? (__int64*)i[4] : (__int64*)((char*)i + 17);
        if ((unsigned int)memcmp(v15, v4, v6) == 0) {
          return i;
        }
      }
    }
    else {
      if ((v2 & v8) != 0) {
        if (v13 >= v2) {
          v13 %= v2;
        }
      }
      else {
        v13 &= v8;
      }
      if (v13 != v10) {
        return nullptr;
      }
    }
  }
  return i;
}

__int64 LayoutAccessor_1564a20(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  bool v15;
  __int64 v16;
  unsigned __int64 v17;
  bool v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  int v23;

  v2 = a1 + 8;
  v3 = *(_QWORD*)(a1 + 8);
  if (v3 != 0) {
    v4 = *a2;
    v5 = a2[1];
    v6 = a1 + 8;
    do {
      v7 = *(unsigned __int8*)(v3 + 32);
      v8 = (v7 & 1) == 0;
      v9 = v7 >> 1;
      if (v8) {
        v10 = v9;
      }
      else {
        v10 = *(_QWORD*)(v3 + 40);
      }
      if (v8) {
        v11 = v3 + 33;
      }
      else {
        v11 = *(_QWORD*)(v3 + 48);
      }
      if (v10 >= v5) {
        v12 = v5;
      }
      else {
        v12 = v10;
      }
      v13 = memcmp(v4, v11, v12);
      if (v5 < v10) {
        v14 = -1;
      }
      else {
        v14 = 1;
      }
      if (v5 == v10) {
        v14 = 0;
      }
      if (v13 != 0) {
        v14 = v13;
      }
      v15 = v14 <= 0;
      if (v14 <= 0) {
        v16 = 0;
      }
      else {
        v16 = 8;
      }
      if (v15) {
        v6 = v3;
      }
      v3 = *(_QWORD*)(v3 + v16);
    } while (v3 != 0);
    if (v6 != v2) {
      v17 = *(unsigned __int8*)(v6 + 32);
      v18 = (v17 & 1) == 0;
      v19 = v17 >> 1;
      if (v18) {
        v20 = v19;
      }
      else {
        v20 = *(_QWORD*)(v6 + 40);
      }
      if (v18) {
        v21 = v6 + 33;
      }
      else {
        v21 = *(_QWORD*)(v6 + 48);
      }
      if (v20 >= v5) {
        v22 = v5;
      }
      else {
        v22 = v20;
      }
      v23 = memcmp(v4, v21, v22);
      if (v23 != 0) {
        if (v23 >= 0) {
          return v6;
        }
      }
      else if (v5 >= v20) {
        return v6;
      }
    }
  }
  return v2;
}

__int64 LayoutAccessor_1564b20(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  bool v15;
  __int64 v16;
  unsigned __int64 v17;
  bool v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  int v23;

  v2 = a1 + 8;
  v3 = *(_QWORD*)(a1 + 8);
  if (v3 != 0) {
    v4 = *a2;
    v5 = a2[1];
    v6 = a1 + 8;
    do {
      v7 = *(unsigned __int8*)(v3 + 32);
      v8 = (v7 & 1) == 0;
      v9 = v7 >> 1;
      if (v8) {
        v10 = v9;
      }
      else {
        v10 = *(_QWORD*)(v3 + 40);
      }
      if (v8) {
        v11 = v3 + 33;
      }
      else {
        v11 = *(_QWORD*)(v3 + 48);
      }
      if (v10 >= v5) {
        v12 = v5;
      }
      else {
        v12 = v10;
      }
      v13 = memcmp(v4, v11, v12);
      if (v5 < v10) {
        v14 = -1;
      }
      else {
        v14 = 1;
      }
      if (v5 == v10) {
        v14 = 0;
      }
      if (v13 != 0) {
        v14 = v13;
      }
      v15 = v14 <= 0;
      if (v14 <= 0) {
        v16 = 0;
      }
      else {
        v16 = 8;
      }
      if (v15) {
        v6 = v3;
      }
      v3 = *(_QWORD*)(v3 + v16);
    } while (v3 != 0);
    if (v6 != v2) {
      v17 = *(unsigned __int8*)(v6 + 32);
      v18 = (v17 & 1) == 0;
      v19 = v17 >> 1;
      if (v18) {
        v20 = v19;
      }
      else {
        v20 = *(_QWORD*)(v6 + 40);
      }
      if (v18) {
        v21 = v6 + 33;
      }
      else {
        v21 = *(_QWORD*)(v6 + 48);
      }
      if (v20 >= v5) {
        v22 = v5;
      }
      else {
        v22 = v20;
      }
      v23 = memcmp(v4, v21, v22);
      if (v23 != 0) {
        if (v23 >= 0) {
          return v6;
        }
      }
      else if (v5 >= v20) {
        return v6;
      }
    }
  }
  return v2;
}

__int64 LayoutAccessor_1564d00()
{
  GameData_22587f8 = 0;
  ui_LayoutAccessor_empty_ = 0;
  GameData_22587e0 = 0;
  GameData_2258800 = 0;
  GameData_2258808 = 0;
  GameData_2258810 = 0;
  GameData_2258818 = 0;
  GameData_2258820 = 0;
  GameData_2258830 = 0;
  GameData_2258838 = 0;
  GameData_22587e8 = 0;
  GameData_22587f0 = (__int64)&GameData_22587f8;
  GameData_2258828 = 1065353216;
  return GameRoutine_2b0(ui_LayoutAccessor_Destroy_LayoutAccessor);
}

#pragma GCC visibility pop
