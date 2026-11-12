#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicInfo_15e5fa0(void);
extern __int64 GameData_2260e80;
__int64 game_menu_ReportDialog_CreateBindSave_lambda1_Invoke();
__int64 game_menu_ReportDialog_CreateBindSuspend_lambda1_Invoke();
__int64 game_menu_ReportDialog_CreateBindContinue_lambda1_Invoke();
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_65a020(_QWORD);
__int64 GameRoutine_877220(__int64 result, int, __int64);
__int64 GameRoutine_877220_alt1(_QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_877220");
__int64 GameRoutine_879320(__int64, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*GameData_2088c00[])();
extern __int64 (*GameData_2088e80[])();
extern __int64 GameData_21c9600;
__int64 game_menu_ReportDialog_CreateBindSave_lambda0_Invoke(__int64 a1);
__int64 game_menu_ReportDialog_CreateBindSuspend_lambda0_Invoke(__int64 a1);
__int64 ReportDialog_16a9540(__int64 a1);
__int64 game_menu_ReportDialog_CreateBindContinue_lambda0_Invoke(__int64 a1);
_BYTE* ProcInst_657a50(__int64, char);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_menu_anonymous_16a8a70(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
const char* game_HashString32(const char* result);
extern _UNKNOWN GameData_2174af8;
extern __int64 (*GameData_2088b90[])();
extern __int64 (*GameData_2088d90[])();
extern __int64 (*GameData_2088e10[])();
extern __int64 (*GameData_2088ef0[])();
extern __int64 (*GameData_2088f90[])();
extern __int64 (*ReportInfo_Destructor_16a7490_ptr[])();
extern __int64 (*game_menu_anonymous_ReportInfo_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void BasicInfo_15e5b50(__int64, __int64*, __int64);
void GameRoutine_16497b0(__int64, const char*);
__int64 game_menu_ReportDialog_CreateBindSave(__int64 a1);
__int64 game_menu_ReportDialog_CreateBindSuspend(__int64 a1);
__int64 ReportDialog_16a93e0(__int64 a1);

__int64 game_menu_ReportDialog_CreateBindSave(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  struct {
    __int64 (**v15)();
    __int64 v16;
    char gap112_[16];
    __int64* v17;
  } v15_;
  const char* v18;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      224, 16, 0);
  *(_QWORD*)v2 = 0;
  *(_QWORD*)(v2 + 8) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = 0;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  *(_QWORD*)(v2 + 136) = 0;
  *(_QWORD*)(v2 + 144) = 0;
  *(_QWORD*)(v2 + 152) = 0;
  *(_QWORD*)(v2 + 160) = 0;
  *(_QWORD*)(v2 + 168) = 0;
  *(_QWORD*)(v2 + 176) = 0;
  *(_QWORD*)(v2 + 184) = 0;
  *(_QWORD*)(v2 + 192) = 0;
  *(_QWORD*)(v2 + 200) = 0;
  *(_QWORD*)(v2 + 208) = 0;
  *(_QWORD*)(v2 + 216) = 0;
  v15_.v15 = nullptr;
  v15_.v16 = 0;
  BasicInfo_15e5b50(v2, (__int64*)&v15_.v15, 0);
  v3 = v15_.v16;
  if (v15_.v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15_.v16 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  if (GameData_2260e80 == 0) {
    GameData_2260e80 = v2;
  }
  *(_BYTE*)(v2 + 216) = 0;
  *(_QWORD*)v2 = game_menu_anonymous_ReportInfo_vtable;
  *(_QWORD*)(v2 + 208) = ReportInfo_Destructor_16a7490_ptr;
  if (a1 != 0) {
    v4 = *(_QWORD*)(a1 + 40);
    if (v4 != 0) {
      *(_QWORD*)(v4 + 48) = v2;
      *(_QWORD*)(v2 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v2;
    *(_QWORD*)(v2 + 24) = "ReportInfo";
    *(_QWORD*)(v2 + 32) = a1;
    *(_DWORD*)(v2 + 140) = (unsigned int)game_HashString32("ReportInfo");
    *(_QWORD*)(v2 + 64) = 0;
    *(_QWORD*)(v2 + 72) = 24;
    *(_QWORD*)(v2 + 80) = 1;
    *(_QWORD*)(v2 + 8) = &GameData_2174af8;
    *(_QWORD*)(v2 + 16) = &GameData_2174af8;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2) & 1) != 0 &&
        (*(_WORD*)(v2 + 136) & 0x100) == 0) {
      *(_WORD*)(v2 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v2 + 136) & 1) == 0) {
    ProcInst_657a50(v2, 1);
  }
  *(_BYTE*)(v2 + 216) = 0;
  v18 = "MID_Save_Save_Confirm";
  v15_.v15 = GameData_2088b90;
  v15_.v16 = a1;
  v11_.v12 = v11_.v11;
  v15_.v17 = (__int64*)&v15_.v15;
  v13_.v14 = v13_.v13;
  v13_.v13[0] = GameData_2088d90;
  v11_.v11[0] = GameData_2088d90;
  v5 = MapSortieMenu_871860(a1, (__int64)&v18, (__int64)&v15_.v15,
                            (__int64)v13_.v13, (__int64)v11_.v11);
  if (v11_.v12 == v11_.v11) {
    v6 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_19;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v6))((__int64)v11_.v12);
LABEL_19:
  if (v13_.v14 == v13_.v13) {
    v7 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_24;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v7))((__int64)v13_.v14);
LABEL_24:
  if (v15_.v17 == (__int64*)&v15_.v15) {
    v8 = 32;
  }
  else {
    if (v15_.v17 == nullptr) {
      goto LABEL_29;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v15_.v17 + v8))((__int64)v15_.v17);
LABEL_29:
  if (v5 != 0) {
    v9 = *(_DWORD*)(v5 + 356);
    *(_DWORD*)(v5 + 372) = 0;
    *(_DWORD*)(v5 + 356) = v9 | 1;
    *(_QWORD*)(v5 + 364) = 0xC35C000000000000LL;
    *(_BYTE*)(v5 + 1301) = 1;
  }
  GameRoutine_16497b0(v5, "SE_SYS_Decide_H_Save");
  return v5;
}

__int64 game_menu_ReportDialog_CreateBindSuspend(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  struct {
    __int64 (**v15)();
    __int64 v16;
    char gap112_[16];
    __int64* v17;
  } v15_;
  const char* v18;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      224, 16, 0);
  *(_QWORD*)v2 = 0;
  *(_QWORD*)(v2 + 8) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = 0;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  *(_QWORD*)(v2 + 136) = 0;
  *(_QWORD*)(v2 + 144) = 0;
  *(_QWORD*)(v2 + 152) = 0;
  *(_QWORD*)(v2 + 160) = 0;
  *(_QWORD*)(v2 + 168) = 0;
  *(_QWORD*)(v2 + 176) = 0;
  *(_QWORD*)(v2 + 184) = 0;
  *(_QWORD*)(v2 + 192) = 0;
  *(_QWORD*)(v2 + 200) = 0;
  *(_QWORD*)(v2 + 208) = 0;
  *(_QWORD*)(v2 + 216) = 0;
  v15_.v15 = nullptr;
  v15_.v16 = 0;
  BasicInfo_15e5b50(v2, (__int64*)&v15_.v15, 0);
  v3 = v15_.v16;
  if (v15_.v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15_.v16 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  if (GameData_2260e80 == 0) {
    GameData_2260e80 = v2;
  }
  *(_BYTE*)(v2 + 216) = 0;
  *(_QWORD*)v2 = game_menu_anonymous_ReportInfo_vtable;
  *(_QWORD*)(v2 + 208) = ReportInfo_Destructor_16a7490_ptr;
  if (a1 != 0) {
    v4 = *(_QWORD*)(a1 + 40);
    if (v4 != 0) {
      *(_QWORD*)(v4 + 48) = v2;
      *(_QWORD*)(v2 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v2;
    *(_QWORD*)(v2 + 24) = "ReportInfo";
    *(_QWORD*)(v2 + 32) = a1;
    *(_DWORD*)(v2 + 140) = (unsigned int)game_HashString32("ReportInfo");
    *(_QWORD*)(v2 + 64) = 0;
    *(_QWORD*)(v2 + 72) = 24;
    *(_QWORD*)(v2 + 80) = 1;
    *(_QWORD*)(v2 + 8) = &GameData_2174af8;
    *(_QWORD*)(v2 + 16) = &GameData_2174af8;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2) & 1) != 0 &&
        (*(_WORD*)(v2 + 136) & 0x100) == 0) {
      *(_WORD*)(v2 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v2 + 136) & 1) == 0) {
    ProcInst_657a50(v2, 1);
  }
  *(_BYTE*)(v2 + 216) = 0;
  v18 = "MID_Save_Suspend_Confirm";
  v15_.v15 = GameData_2088e10;
  v15_.v16 = a1;
  v11_.v12 = v11_.v11;
  v15_.v17 = (__int64*)&v15_.v15;
  v13_.v14 = v13_.v13;
  v13_.v13[0] = GameData_2088f90;
  v11_.v11[0] = GameData_2088f90;
  v5 = MapSortieMenu_871860(a1, (__int64)&v18, (__int64)&v15_.v15,
                            (__int64)v13_.v13, (__int64)v11_.v11);
  if (v11_.v12 == v11_.v11) {
    v6 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_19;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v6))((__int64)v11_.v12);
LABEL_19:
  if (v13_.v14 == v13_.v13) {
    v7 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_24;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v7))((__int64)v13_.v14);
LABEL_24:
  if (v15_.v17 == (__int64*)&v15_.v15) {
    v8 = 32;
  }
  else {
    if (v15_.v17 == nullptr) {
      goto LABEL_29;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v15_.v17 + v8))((__int64)v15_.v17);
LABEL_29:
  if (v5 != 0) {
    v9 = *(_DWORD*)(v5 + 356);
    *(_DWORD*)(v5 + 372) = 0;
    *(_DWORD*)(v5 + 356) = v9 | 1;
    *(_QWORD*)(v5 + 364) = 0xC35C000000000000LL;
    *(_BYTE*)(v5 + 1301) = 1;
  }
  GameRoutine_16497b0(v5, "SE_SYS_Decide_H_Save");
  return v5;
}

__int64 game_menu_ReportDialog_CreateBindSave_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;

  v1 = *(_QWORD*)(a1 + 8);
  v4_.v5 = v4_.v4;
  v4_.v4[0] = GameData_2088c00;
  v4_.v4[1] = v1;
  GameRoutine_879320(v1, (__int64)v4_.v4);
  if (v4_.v5 == v4_.v4) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v4_.v5 != nullptr) {
    v2 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v4_.v5 + v2))((__int64)v4_.v5);
  }
  GameRoutine_877220(2, -1, 0);
  return 2;
}

__int64 game_menu_ReportDialog_CreateBindSave_lambda1_Invoke()
{
  if (GameData_2260e80 != 0) {
    BasicInfo_15e5fa0();
  }
  return 3;
}

__int64 game_menu_ReportDialog_CreateBindSuspend_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;

  v1 = *(_QWORD*)(a1 + 8);
  v4_.v5 = v4_.v4;
  v4_.v4[0] = GameData_2088e80;
  v4_.v4[1] = v1;
  GameRoutine_879320(v1, (__int64)v4_.v4);
  if (v4_.v5 == v4_.v4) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v4_.v5 != nullptr) {
    v2 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v4_.v5 + v2))((__int64)v4_.v5);
  }
  GameRoutine_877220(2, -1, 0);
  return 2;
}

__int64 ReportDialog_16a93e0(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;

  v1 = *(_QWORD*)(a1 + 8);
  v4_.v5 = v4_.v4;
  v4_.v4[0] = GameData_2088ef0;
  v4_.v4[1] = v1;
  game_menu_anonymous_16a8a70(v1, (__int64)v4_.v4);
  result = (__int64)v4_.v5;
  if (v4_.v5 == v4_.v4) {
    v3 = 32;
  }
  else {
    if (v4_.v5 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*v4_.v5 + v3))((__int64)v4_.v5);
}

__int64 ReportDialog_16a9540(__int64 a1)
{
  __int64 v3;
  _BYTE v4[200];

  snd_Fade_Fade_10c830(v4, 0.0f);
  snd_play_ff2d0((void*)(&v3), "SE_SYS_Decide_M", "SE_SYS_Decide_M", v4, 0,
                 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v4);
  GameRoutine_65a020(*(_QWORD*)(a1 + 8));
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 1;
  }
  return 0;
}

__int64 game_menu_ReportDialog_CreateBindSuspend_lambda1_Invoke()
{
  if (GameData_2260e80 != 0) {
    BasicInfo_15e5fa0();
  }
  return 3;
}

__int64 game_menu_ReportDialog_CreateBindContinue_lambda0_Invoke(__int64 a1)
{
  __int64 v3;
  _BYTE v4[200];

  snd_Fade_Fade_10c830(v4, 0.0f);
  snd_play_ff2d0((void*)(&v3), "SE_SYS_Decide_H_Load", "SE_SYS_Decide_H_Load",
                 v4, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v4);
  if (GameData_2260e80 != 0) {
    BasicInfo_15e5fa0();
  }
  GameRoutine_877220_alt1(2, 0xFFFFFFFFLL, 0);
  GameRoutine_65a020(*(_QWORD*)(a1 + 8));
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 32;
  }
  return 13;
}

__int64 game_menu_ReportDialog_CreateBindContinue_lambda1_Invoke()
{
  if (GameData_2260e80 != 0) {
    BasicInfo_15e5fa0();
  }
  return 3;
}

#pragma GCC visibility pop
