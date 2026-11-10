#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157b5c0(__int64 result, unsigned __int16*);
extern __int64 GameData_21c99b8;
extern __int64 game_TransporterConst_List_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64 EquipMenuItem_Transporter_Unknown58(__int64 a1);
__int64 EquipMenuItem_Transporter_Unknown70(__int64 a1);
__int64 BasicMenuCursor_16ddbe0(_QWORD);
__int64 MultiMenuSequence_17871c0(_QWORD, _QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(void);
__int64 game_Unit_Unknown6c4610(_QWORD);
extern _UNKNOWN* GameData_21319e0;
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130240[8];
extern __int64* GameData_2131a10[5];
bool game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure_Invoke(
    __int64 a1, _QWORD* a2);
__int64
game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure0_Invoke(__int64 a1);
__int64
game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure2_Invoke(__int64 a1,
                                                                    _QWORD* a2);
__int64
game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure3_Invoke(__int64 a1);

__int64 EquipMenuItem_Transporter_Unknown58(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  unsigned __int16* v13;

  v1 = *(_QWORD*)(a1 + 88);
  v2 = *(int*)(a1 + 40);
  if (v1 != 0) {
    v3 = v1 + 8 * v2;
    v4 = *(unsigned __int16*)(v3 + 828);
    if (*(_WORD*)(v3 + 828) == 0) {
      return 0;
    }
    v5 = v3 + 828;
  }
  else {
    v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                   game_TransporterConst_List_instance__ptr[0] +
                               8LL) +
                    8LL) +
         12LL * (int)v2;
    v7 = *(unsigned __int16*)(v6 + 4);
    v5 = v6 + 4;
    v4 = v7;
    if (v7 == 0) {
      return 0;
    }
  }
  if ((*(_BYTE*)(v5 + 3) & 0x10) == 0) {
    v8 = *(_QWORD*)(GameData_21c99b8 + 64);
    v9 = *(_QWORD*)(v8 + 8LL * v4);
    if ((*(_BYTE*)(v9 + 336) & 4) == 0 &&
        ((1LL << *(_BYTE*)(v9 + 72)) & 0xE01F) != 0) {
      if (*(_DWORD*)(a1 + 116) != 2) {
        goto LABEL_15;
      }
      if (v1 != 0) {
        v10 = *(unsigned __int8*)(*(_QWORD*)(v8 +
                                             8LL * *(unsigned __int16*)(v1 +
                                                                        8 * v2 +
                                                                        828)) +
                                  72LL);
        if (v10 <= 7) {
          v11 = *(_QWORD*)(a1 + 104);
        LABEL_16:
          v13 = (unsigned __int16*)(v1 + 8 * v2 + 828);
          return GameRoutine_157b5c0(v11, v13);
        }
      }
      else {
        v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                        game_TransporterConst_List_instance__ptr
                                            [0] +
                                    8LL) +
                         8LL);
        v10 = *(
            unsigned __int8*)(*(_QWORD*)(v8 +
                                         8LL *
                                             *(unsigned __int16*)(v12 +
                                                                  12LL *
                                                                      (int)v2 +
                                                                  4)) +
                              72LL);
        if (v10 <= 7) {
          v11 = *(_QWORD*)(a1 + 104);
          goto LABEL_20;
        }
      }
      if (v10 == 13) {
      LABEL_15:
        v11 = *(_QWORD*)(a1 + 104);
        if (v1 != 0) {
          goto LABEL_16;
        }
        v12 = *(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ + 8) +
                         8LL);
      LABEL_20:
        v13 = (unsigned __int16*)(v12 + 12LL * (int)v2 + 4);
        return GameRoutine_157b5c0(v11, v13);
      }
    }
  }
  return 0;
}

__int64 EquipMenuItem_Transporter_Unknown70(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 88);
  v2 = *(int*)(a1 + 40);
  if (v1 != 0) {
    return v1 + 8 * v2 + 828;
  }
  else {
    return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                     game_TransporterConst_List_instance__ptr
                                         [0] +
                                 8LL) +
                      8LL) +
           12LL * (int)v2 + 4;
  }
}

bool game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure_Invoke(
    __int64 a1, _QWORD* a2)
{
  return *(_WORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) == 0;
}

__int64

game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 88);
  if (v2 != 0) {
    game_Unit_Unknown6c4610(*(_QWORD*)(v1 + 88));
    *(_WORD*)(v2 + 20) |= 1u;
  }
  v3 = *(_QWORD**)(v1 + 96);
  v4 = v3[38];
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 1080LL))(v4);
  }
  v5 = v3[39];
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 1080LL))(v5);
  }
  result = v3[40];
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 1080LL))(result);
  }
  return result;
}

__int64

game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure2_Invoke(__int64 a1,
                                                                    _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v17;

  v3 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 464LL))(*a2) & 1) == 0) {
    return 1;
  }
  v4 = *(_QWORD*)(v3 + 96);
  v5 = *(_DWORD*)(v4 + 356);
  if (*(_QWORD*)(v3 + 88) != 0) {
    *(_DWORD*)(v4 + 356) = v5 | 4;
    v6 = *(_QWORD*)(v3 + 8);
    v7 = *(_QWORD*)(v3 + 104);
    v8 = *(_DWORD*)(a1 + 16);
    v9 = *(_QWORD*)(v3 + 88);
    v10 = *(_DWORD*)(v3 + 40);
    if (*(_QWORD*)(v6 + 152) != 0) {
      v11 = *(_QWORD*)(v6 + 152);
    }
    else {
      v11 = *(_QWORD*)(v3 + 8);
    }
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         392, 16, 0);
    v13 = GameData_212c608[0];
    *(_QWORD*)(v12 + 96) = 0;
    *(_QWORD*)(v12 + 104) = 0;
    *(_QWORD*)(v12 + 112) = 0;
    *(_QWORD*)(v12 + 120) = 0;
    *(_QWORD*)(v12 + 128) = 0;
    *(_WORD*)(v12 + 136) = 0;
    *(_QWORD*)(v12 + 16) = 0;
    *(_QWORD*)(v12 + 24) = "NULL";
    *(_QWORD*)(v12 + 138) = 0;
    *(_QWORD*)(v12 + 144) = 0;
    *(_QWORD*)(v12 + 32) = 0;
    *(_QWORD*)(v12 + 40) = 0;
    *(_QWORD*)(v12 + 48) = 0;
    *(_QWORD*)(v12 + 56) = 0;
    *(_QWORD*)(v12 + 64) = 0;
    *(_QWORD*)(v12 + 72) = 0;
    *(_QWORD*)(v12 + 80) = 0;
    *(_QWORD*)(v12 + 88) = 0;
    *(_QWORD*)v12 = v13 + 16;
    *(_QWORD*)(v12 + 8) = 0;
    game_ProcInst_Register();
    *(_QWORD*)(v12 + 232) = 0;
    *(_QWORD*)(v12 + 224) = v12 + 232;
    v14 = GameData_2130240[0];
    *(_BYTE*)(v12 + 168) = 0;
    *(_BYTE*)(v12 + 172) = 0;
    *(_QWORD*)(v12 + 192) = 0;
    *(_QWORD*)(v12 + 200) = 0;
    *(_QWORD*)(v12 + 208) = 0;
    *(_QWORD*)(v12 + 216) = 0;
    *(_QWORD*)(v12 + 240) = 0;
    *(_QWORD*)(v12 + 248) = 0;
    *(_QWORD*)(v12 + 256) = 0;
    *(_QWORD*)(v12 + 264) = 0;
    *(_QWORD*)(v12 + 272) = 0;
    *(_QWORD*)(v12 + 336) = 0;
    *(_QWORD*)(v12 + 344) = 0;
    *(_QWORD*)(v12 + 320) = 0;
    *(_QWORD*)(v12 + 328) = 0;
    *(_QWORD*)(v12 + 304) = 0;
    *(_QWORD*)(v12 + 312) = 0;
    *(_QWORD*)(v12 + 288) = 0;
    *(_QWORD*)(v12 + 296) = 0;
    *(_QWORD*)(v12 + 352) = 0;
    *(_QWORD*)(v12 + 360) = v7;
    *(_QWORD*)(v12 + 368) = v9;
    *(_QWORD*)(v12 + 152) = 0;
    *(_QWORD*)(v12 + 160) = v14 + 2;
    *(_DWORD*)(v12 + 280) = 1065353216;
    v15 = GameData_2131a10[0];
    *(_DWORD*)(v12 + 380) = v8;
    *(_DWORD*)(v12 + 384) = v10;
    *(_QWORD*)(v12 + 176) = v15 + 55;
    *(_QWORD*)(v12 + 184) = 0;
    *(_QWORD*)v12 = v15 + 2;
    *(_DWORD*)(v12 + 376) = 1;
    ProcInst_657850(v12, GameData_21319e0, "ExchangeMenu", 1, v11);
    BasicMenuCursor_16ddbe0(*(_QWORD*)(v3 + 8));
  }
  else {
    v17 = *(_QWORD*)(v4 + 304);
    *(_DWORD*)(v4 + 356) = v5 | 1;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v17 + 240LL))(v17, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v17 + 248LL))(v17, 0);
    MultiMenuSequence_17871c0(*(_QWORD*)(v3 + 96), 0, 0);
  }
  return 2;
}

__int64

game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure3_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 88);
  if (v2 != 0) {
    game_Unit_Unknown6c4610(*(_QWORD*)(v1 + 88));
    *(_WORD*)(v2 + 20) |= 1u;
  }
  v3 = *(_QWORD**)(v1 + 96);
  v4 = v3[38];
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 1080LL))(v4);
  }
  v5 = v3[39];
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 1080LL))(v5);
  }
  v6 = v3[40];
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 1080LL))(v6);
  }
  return 5;
}

#pragma GCC visibility pop
