#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 game_menu_Dialog_Destroy_Dialog(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ItemDiscardDialog_DeletingDestructor(__int64 a1);
__int64 GameRoutine_89b900(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_RemoveItem(_QWORD, _QWORD);
__int64 game_Unit_Unknown6c4610(_QWORD);
extern __int64 (*GameData_207baf0[])();
extern __int64 GameData_22400f8;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_map_UnitFlags_instance_;
extern __int64* GameData_212c878[6];
__int64 game_menu_ItemDiscardDialog_CreateBind_lambda0_Clone(__int64 a1);
_QWORD* game_menu_ItemDiscardDialog_CreateBind_lambda0_CloneInto(_QWORD* result,
                                                                 __int64 a2);
__int64 game_menu_ItemDiscardDialog_CreateBind_lambda0_Invoke(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__int64 game_menu_ItemDiscardDialog_CreateBind_lambda2_Invoke(__int64 a1);

__int64 ItemDiscardDialog_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = *(_QWORD*)(a1 + 1496);
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)(a1 + 1504);
    if (v1 == v4) {
      goto LABEL_16;
    }
    v5 = v4 - 40;
    do {
      v8 = *(_BYTE*)(v5 - 8);
      *(_DWORD*)(v5 - 40) = 0;
      *(_QWORD*)(v5 - 48) = 0;
      if ((v8 & 1) != 0) {
        **(_BYTE**)(v5 + 8) = 0;
        *(_QWORD*)v5 = 0;
      }
      else {
        *(_WORD*)(v5 - 8) = 0;
      }
      GameRoutine_6e3b50(v5 - 32, *(_QWORD*)(v5 - 24));
      v9 = *(_BYTE*)(v5 - 8);
      *(_QWORD*)(v5 - 24) = 0;
      *(_QWORD*)(v5 - 16) = 0;
      *(_QWORD*)(v5 - 32) = v5 - 24;
      if ((v9 & 1) != 0) {
        v6 = *(_QWORD*)(v5 + 8);
        if (v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v6);
          v6 = *(_QWORD*)(v5 - 24);
        }
      }
      else {
        v6 = 0;
      }
      GameRoutine_6e3b50(v5 - 32, v6);
      v7 = v5 - 72;
      v5 -= 112;
    } while (v7 != v1);
    v11 = *(_QWORD*)(a1 + 1496);
    *(_QWORD*)(a1 + 1504) = v1;
    v1 = v11;
    if (v11 != 0) {
    LABEL_16:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, v1);
    }
  }
  game_menu_Dialog_Destroy_Dialog(a1);
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v13 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, a1);
}

__int64 game_menu_ItemDiscardDialog_CreateBind_lambda0_Clone(__int64 a1)
{
  __int64 result;
  _QWORD* v3;
  __int64 v4;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  *(_QWORD*)result = GameData_207baf0;
  *(_QWORD*)(result + 16) = *(_QWORD*)(a1 + 16);
  *(_DWORD*)(result + 24) = *(_DWORD*)(a1 + 24);
  v3 = *(_QWORD**)(a1 + 64);
  if (v3 != nullptr) {
    if (v3 == (_QWORD*)(a1 + 32)) {
      v4 = result;
      *(_QWORD*)(result + 64) = result + 32;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v3 + 24LL))(v3, v3);
    }
    else {
      v4 = result;
      *(_QWORD*)(result + 64) =
          (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*))(*v3 + 16LL))(v3,
                                                                         v3);
    }
    return v4;
  }
  else {
    *(_QWORD*)(result + 64) = 0;
  }
  return result;
}

_QWORD* game_menu_ItemDiscardDialog_CreateBind_lambda0_CloneInto(_QWORD* result,
                                                                 __int64 a2)
{
  __int64 v3;
  _QWORD* v4;

  *(_QWORD*)a2 = GameData_207baf0;
  v3 = result[2];
  *(_DWORD*)(a2 + 24) = *((_DWORD*)result + 6);
  *(_QWORD*)(a2 + 16) = v3;
  v4 = (_QWORD*)result[8];
  if (v4 != nullptr) {
    if (v4 == result + 4) {
      *(_QWORD*)(a2 + 64) = a2 + 32;
      return (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)result[8] + 24LL))(
          result[8]);
    }
    else {
      result = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(*v4 + 16LL))(
          v4, result[8]);
      *(_QWORD*)(a2 + 64) = result;
    }
  }
  else {
    *(_QWORD*)(a2 + 64) = 0;
  }
  return result;
}

__int64 game_menu_ItemDiscardDialog_CreateBind_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64* v10;
  __int64 v11;
  int v12;
  __int16 v13;
  __int64 v15;
  __int64 v16;

  v1 = *(_QWORD*)(a1 + 16);
  v2 = *(unsigned int*)(a1 + 24);
  if (v1 != 0) {
    if ((game_Unit_RemoveItem(*(_QWORD*)(a1 + 16), v2) & 1) != 0) {
      game_Unit_Unknown6c4610(v1);
      *(_WORD*)(v1 + 20) |= 1u;
      if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
          (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
        v4 = *(_QWORD*)(v1 + 440);
        if (v4 != 0 && *(unsigned __int8*)(v4 + 16) <= 8u &&
            game_map_UnitFlags_instance_ != 0) {
          v5 = *(unsigned __int8*)(v1 + 2088);
          if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v5) & 1) != 0) {
            *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v5) |= 2u;
            v6 = *(_QWORD*)(a1 + 64);
            if (v6 == 0) {
              return 5;
            }
            return (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 48LL))(v6);
          }
        }
      }
    }
  }
  else if ((v2 & 0x80000000) == 0) {
    v7 =
        *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
    v8 = *(_QWORD*)(v7 + 8) + 12LL * (unsigned int)v2;
    if (*(_WORD*)(v8 + 4) != 0) {
      v9 = *(unsigned __int16*)(v8 + 2);
      v10 = GameData_212c878[0];
      v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * *(unsigned __int16*)(v8 + 4));
      if ((((0x10000000000LL << *(_BYTE*)(v11 + 72)) |
            (1LL << *(_BYTE*)(v11 + 73))) &
           0xFFBFFFFFFFA39FFFLL) != 0) {
        v12 = 1;
      }
      else {
        v12 = 999;
      }
      if (v12 >= v9 - 1) {
        LOWORD(v12) = v9 - 1;
      }
      v13 = *(_WORD*)(v8 + 2) != 0 ? v12 : 0;
      *(_WORD*)(v8 + 2) = v13;
      if (v13 == 0) {
        v15 = *(_QWORD*)(v7 + 8) + 12LL * (unsigned int)v2;
        v16 = *(_QWORD*)(*(_QWORD*)(*v10 + 64) +
                         8LL * *(unsigned __int16*)(v15 + 4));
        if ((((0x10000000000LL << *(_BYTE*)(v16 + 72)) |
              (1LL << *(_BYTE*)(v16 + 73))) &
             0xFFBFFFFFFFA39FFFLL) != 0) {
          *(_QWORD*)(v15 + 4) = 0;
        }
        *(_WORD*)(v15 + 2) = 0;
        GameRoutine_89b900();
        v6 = *(_QWORD*)(a1 + 64);
        if (v6 == 0) {
          return 5;
        }
        return (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 48LL))(v6);
      }
    }
  }
  v6 = *(_QWORD*)(a1 + 64);
  if (v6 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 48LL))(v6);
  }
  return 5;
}

__int64 game_menu_ItemDiscardDialog_CreateBind_lambda2_Invoke(__int64 a1)
{
  const char* v1;
  __int64 v3;
  _BYTE v4[200];

  if (*(_BYTE*)(a1 + 8) == 1) {
    snd_Fade_Fade_10c830(v4, 0.0f);
    v1 = "SE_SYS_Remove";
  }
  else {
    snd_Fade_Fade_10c830(v4, 0.0f);
    v1 = "SE_SYS_Decide_M";
  }
  snd_play_ff2d0((void*)(&v3), v1, v1, v4, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v4);
}

#pragma GCC visibility pop
