#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcClassTrialSeq_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_21f1ee0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
__int64 ProcClassTrialSeq_Destructor(__int64 a1);
__int64 ProcClassTrialSeq_DeletingDestructor(__int64 a1);
__int64 GameRoutine_1380220(_QWORD, _QWORD);
__int64 GameRoutine_146bcc0(void);
__int64 GameRoutine_8679c0(_QWORD);
__int64 GameRoutine_8b8620();
__int64 GameRoutine_8b8d40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8b9540();
__int64 GameRoutine_8b9560();
__int64 GameRoutine_8b96d0();
__int64 GameRoutine_95f930(_QWORD, _QWORD, _QWORD);
__int64 MapSortieMenu_871860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_21668e8;
extern _UNKNOWN GameData_21f1ed0;
extern _UNKNOWN GameData_21f2028;
extern __int64 (*GameData_1fa9908[])();
extern __int64 (*GameData_1fa9988[])();
extern __int64 (*GameData_1fa9a08[])();
extern __int64 (*game_anonymous_ProcClassChangeSeq_vtable[])();
extern __int64 (*game_anonymous_ProcClassRecycleSeq_vtable[])();
extern __int64 GameData_21f1e18;
extern __int64 GameData_21f1e20;
extern __int64 GameData_21f1e28;
extern __int64 GameData_21f1e38;
extern __int64 GameData_21f1e48;
extern __int64 GameData_21f1e58;
extern __int64 GameData_21f1e60;
extern __int64 GameData_21f1e68;
extern __int64 GameData_21f1e78;
extern __int64 GameData_21f1e88;
extern __int64 GameData_21f1e98;
extern __int64 GameData_21f1ea0;
extern __int64 GameData_21f1ea8;
extern __int64 GameData_21f1eb8;
extern __int64 GameData_21f1ec8;
extern __int64 GameData_21f1ed8;
extern __int64 GameData_21f1ef0;
extern __int64 GameData_21f1ef8;
extern __int64 GameData_21f1f00;
extern __int64 GameData_21f1f10;
extern __int64 GameData_21f1f20;
extern __int64 GameData_21f1f30;
extern __int64 GameData_21f1f38;
extern __int64 GameData_21f1f40;
extern __int64 GameData_21f1f50;
extern __int64 GameData_21f1f60;
extern __int64 GameData_21f1f70;
extern __int64 GameData_21f1f78;
extern __int64 GameData_21f1f80;
extern __int64 GameData_21f1f90;
extern __int64 GameData_21f1fa0;
extern __int64 GameData_21f1fb0;
extern __int64 GameData_21f1fb8;
extern __int64 GameData_21f1fc0;
extern __int64 GameData_21f1fd0;
extern __int64 GameData_21f1fe0;
extern __int64 GameData_21f1ff0;
extern __int64 GameData_21f1ff8;
extern __int64 GameData_21f2000;
extern __int64 GameData_21f2010;
extern __int64 GameData_21f2020;
extern __int64 game_facility_FacilityView_instance_;
extern __int64* GameData_212c880[5];
extern char GameData_21f1e10;
extern char GameData_21f1e50;
extern char GameData_21f1e90;
extern char GameData_21f1ee8;
extern char GameData_21f1f28;
extern char GameData_21f1f68;
extern char GameData_21f1fa8;
extern char GameData_21f1fe8;
extern int GameData_21f1e30;
extern int GameData_21f1e40;
extern int GameData_21f1e70;
extern int GameData_21f1e80;
extern int GameData_21f1eb0;
extern int GameData_21f1ec0;
extern int GameData_21f1f08;
extern int GameData_21f1f18;
extern int GameData_21f1f48;
extern int GameData_21f1f58;
extern int GameData_21f1f88;
extern int GameData_21f1f98;
extern int GameData_21f1fc8;
extern int GameData_21f1fd8;
extern int GameData_21f2008;
extern int GameData_21f2018;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_705570(void);
__int64 game_anonymous_ProcClassTrialSeq_ConfirmChange(__int64 a1);
__int64 ProcClassTrialSeq_8b7db0(__int64 a1);
__int64 ProcClassTrialSeq_8b7e00(__int64 a1, __int64 a2, __int64 a3);
__int64 ProcClassTrialSeq_8b7fa0(__int64 a1, __int64 a2, __int64 a3);
bool ProcClassTrialSeq_8b80b0() { return GameData_21f1ee0 != 0; };
__int64 ProcClassTrialSeq_8b80e0();
__int64 ProcClassTrialSeq_8b8140(__int64 a1, __int64 a2, __int64 a3,
                                 __int64 a4);
__int64
game_anonymous_ProcClassTrialSeq_ConfirmChange_closure_Invoke(__int64 a1);
__int64 game_anonymous_ProcClassTrialSeq_ProcClassTrialSeq_closure_Invoke(
    __int64 result, _DWORD* a2);

__int64 game_anonymous_ProcClassTrialSeq_ConfirmChange(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v4;
  _QWORD v5[4];
  _QWORD* v6;
  _QWORD v7[4];
  _QWORD* v8;
  _QWORD v9[4];
  _QWORD* v10;
  const char* v11;

  v11 = "MID_ClassTrialMenu_ChangeConfirm";
  v8 = v7;
  v6 = v5;
  v9[0] = GameData_1fa9908;
  v9[1] = a1;
  v10 = v9;
  v7[0] = GameData_1fa9988;
  v5[0] = GameData_1fa9a08;
  MapSortieMenu_871860(a1, &v11, v9, v7, v5);
  if (v6 == v5) {
    v1 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v6 + v1))((__int64)v6);
LABEL_6:
  if (v8 == v7) {
    v2 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_11;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v8 + v2))((__int64)v8);
LABEL_11:
  result = (__int64)v10;
  if (v10 == v9) {
    v4 = 32;
  }
  else {
    if (v10 == nullptr) {
      return result;
    }
    v4 = 40;
  }
  return (*(__int64 (**)(__int64))(*v10 + v4))((__int64)v10);
}

__int64 ProcClassTrialSeq_8b7db0(__int64 a1)
{
  __int64 v1;

  if (game_facility_FacilityView_instance_ != 0) {
    v1 = a1;
    GameRoutine_146bcc0();
    a1 = v1;
  }
  return GameRoutine_1380220(a1, 0);
}

__int64 ProcClassTrialSeq_8b7e00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  float v11;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f1ed0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f1ed0) != 0) {
    GameData_21f1e10 = 3;
    GameData_21f1e38 = 0;
    GameData_21f1e40 = 0;
    GameData_21f1e48 = 0;
    GameData_21f1e18 = 0;
    GameData_21f1e20 = 0;
    GameData_21f1e28 = 0;
    GameData_21f1e30 = 0;
    GameData_21f1e68 = 0;
    GameData_21f1e70 = 0;
    GameData_21f1e78 = 0;
    GameData_21f1e80 = 0;
    GameData_21f1e88 = 0;
    GameData_21f1e90 = 0;
    GameData_21f1eb8 = 0;
    GameData_21f1ec0 = 0;
    GameData_21f1ec8 = 0;
    GameData_21f1eb0 = 0;
    GameData_21f1ea0 = 0;
    GameData_21f1ea8 = 0;
    GameData_21f1e50 = 13;
    GameData_21f1e98 = 0;
    GameData_21f1e58 = 0;
    GameData_21f1e60 = (__int64)GameRoutine_8b8620;
    __cxa_guard_release(&GameData_21f1ed0);
  }
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      168, 16, 0);
  v7 = GameData_212c608[0];
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = "NULL";
  *(_QWORD*)(v6 + 138) = 0;
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)v6 = v7 + 16;
  *(_QWORD*)(v6 + 8) = 0;
  v8 = game_ProcInst_Register(v6);
  *(_QWORD*)(v6 + 152) = a2;
  *(_QWORD*)(v6 + 160) = a3;
  GameData_21f1ed8 = v6;
  *(_QWORD*)v6 = game_anonymous_ProcClassChangeSeq_vtable;
  GameRoutine_8679c0(v8);
  v9 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v10 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v10 & 0x10) == 0) {
      v11 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v10 & 0xFFFFFFE2 | 1;
      if (v11 > 0.0) {
        *(_DWORD*)(v9 + 224) = 0;
      }
    }
  }
  return ProcInst_657850(v6, &GameData_21f1e10, "ProcClassChangeSeq", 1, a1);
}

__int64 ProcClassTrialSeq_8b7fa0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 result;
  __int64 v8;

  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      232, 16, 0);
  result = GameRoutine_8b8d40(v6, a2, a3);
  if (a1 != 0) {
    v8 = *(_QWORD*)(a1 + 40);
    if (v8 != 0) {
      *(_QWORD*)(v8 + 48) = v6;
      *(_QWORD*)(v6 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v6;
    *(_QWORD*)(v6 + 24) = "ProcClassTrialSeq";
    *(_QWORD*)(v6 + 32) = a1;
    *(_DWORD*)(v6 + 140) = game_HashString32("ProcClassTrialSeq");
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 24;
    *(_QWORD*)(v6 + 80) = 1;
    *(_QWORD*)(v6 + 8) = &GameData_21668e8;
    *(_QWORD*)(v6 + 16) = &GameData_21668e8;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6);
    if ((result & 1) != 0 && (*(_WORD*)(v6 + 136) & 0x100) == 0) {
      *(_WORD*)(v6 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v6 + 136) & 1) == 0) {
    return ProcInst_657a50(v6, 1);
  }
  return result;
}

__int64 ProcClassTrialSeq_8b80e0()
{
  int v0;
  unsigned __int64 v1;
  unsigned __int64 v2;

  if (GameData_21f1ee0 != 0) {
    v2 = *(_QWORD*)(GameData_21f1ee0 + 8);
    v1 = *(_QWORD*)(GameData_21f1ee0 + 16);
    if (v2 > v1) {
    LABEL_5:
      LOBYTE(v0) = 1;
    }
    else {
      while (*(_BYTE*)v1 != 2) {
        v1 -= 64LL;
        if (v2 > v1) {
          goto LABEL_5;
        }
      }
      v0 = *(_DWORD*)(v1 + 32) >> 31;
    }
  }
  return (GameData_21f1ee0 != 0) & (unsigned __int8)v0;
}

__int64 ProcClassTrialSeq_8b8140(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  float v13;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2028,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f2028) != 0) {
    GameData_21f1ee8 = 3;
    GameData_21f1f30 = 0;
    GameData_21f1f38 = (__int64)GameRoutine_8b9540;
    GameData_21f1f10 = 0;
    GameData_21f1f18 = 0;
    GameData_21f1f20 = 0;
    GameData_21f1ef0 = 0;
    GameData_21f1ef8 = 0;
    GameData_21f1f00 = 0;
    GameData_21f1f08 = 0;
    GameData_21f1f40 = 0;
    GameData_21f1f48 = 0;
    GameData_21f1f50 = 0;
    GameData_21f1f58 = 0;
    GameData_21f1f60 = 0;
    GameData_21f1f80 = 0;
    GameData_21f1f28 = 13;
    GameData_21f1f68 = 13;
    GameData_21f1fa8 = 13;
    GameData_21f1f70 = 0;
    GameData_21f1f78 = (__int64)GameRoutine_8b9560;
    GameData_21f1f88 = 0;
    GameData_21f1f90 = 0;
    GameData_21f1f98 = 0;
    GameData_21f1fa0 = 0;
    GameData_21f1fc0 = 0;
    GameData_21f1fc8 = 0;
    GameData_21f1fb0 = 0;
    GameData_21f1fb8 = (__int64)GameRoutine_8b96d0;
    GameData_21f1fd0 = 0;
    GameData_21f1fd8 = 0;
    GameData_21f1fe0 = 0;
    GameData_21f1fe8 = 0;
    GameData_21f2010 = 0;
    GameData_21f2018 = 0;
    GameData_21f2020 = 0;
    GameData_21f2008 = 0;
    GameData_21f1ff8 = 0;
    GameData_21f2000 = 0;
    GameData_21f1ff0 = 0;
    __cxa_guard_release(&GameData_21f2028);
  }
  v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      176, 16, 0);
  v9 = GameData_212c608[0];
  *(_QWORD*)(v8 + 96) = 0;
  *(_QWORD*)(v8 + 104) = 0;
  *(_QWORD*)(v8 + 112) = 0;
  *(_QWORD*)(v8 + 120) = 0;
  *(_QWORD*)(v8 + 128) = 0;
  *(_WORD*)(v8 + 136) = 0;
  *(_QWORD*)(v8 + 16) = 0;
  *(_QWORD*)(v8 + 24) = "NULL";
  *(_QWORD*)(v8 + 138) = 0;
  *(_QWORD*)(v8 + 144) = 0;
  *(_QWORD*)(v8 + 32) = 0;
  *(_QWORD*)(v8 + 40) = 0;
  *(_QWORD*)(v8 + 48) = 0;
  *(_QWORD*)(v8 + 56) = 0;
  *(_QWORD*)(v8 + 64) = 0;
  *(_QWORD*)(v8 + 72) = 0;
  *(_QWORD*)(v8 + 80) = 0;
  *(_QWORD*)(v8 + 88) = 0;
  *(_QWORD*)v8 = v9 + 16;
  *(_QWORD*)(v8 + 8) = 0;
  v10 = game_ProcInst_Register(v8);
  *(_QWORD*)(v8 + 152) = a2;
  *(_QWORD*)(v8 + 160) = a3;
  *(_QWORD*)(v8 + 168) = a4;
  GameData_21f1ee0 = v8;
  *(_QWORD*)v8 = game_anonymous_ProcClassRecycleSeq_vtable;
  GameRoutine_8679c0(v10);
  v11 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v12 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v12 & 0x10) == 0) {
      v13 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v12 & 0xFFFFFFE2 | 1;
      if (v13 > 0.0) {
        *(_DWORD*)(v11 + 224) = 0;
      }
    }
  }
  return ProcInst_657850(v8, &GameData_21f1ee8, "ProcClassRecycleSeq", 1, a1);
}

__int64

game_anonymous_ProcClassTrialSeq_ConfirmChange_closure_Invoke(__int64 a1)
{
  GameRoutine_95f930(1, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 152LL),
                     *(_QWORD*)(*(_QWORD*)(a1 + 8) + 160LL));
  return 2;
}

__int64 ProcClassTrialSeq_Destructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  *(_QWORD*)a1 = game_anonymous_ProcClassTrialSeq_vtable;
  v2 = (_QWORD*)game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v3 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v7 = v5 == v6;
    v8 = v3 - 1 + v4;
    v9 = v8 >> 7;
    v10 = v8 & 0x7F;
    v11 = 16 * (v5 - v6) - 1;
    v12 = *(_QWORD*)(v6 + 8 * v9);
    if (v7) {
      v11 = 0;
    }
    v13 = v12 + 32 * v10;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v13 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v2[21] = *(_QWORD*)(v13 + 24);
    v14 = *(_QWORD*)(v13 + 16);
    v2[27] = v3 - 1;
    v2[20] = v14;
    if ((unsigned __int64)(v11 - (v3 + v4) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      if (*(_QWORD*)(v5 - 8) != 0) {
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v15);
        v5 = v2[24];
      }
      v2[24] = v5 - 8;
    }
  }
  v16 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)(a1 + 168) = 0;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
  }
  GameData_21f1ee0 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcClassTrialSeq_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  *(_QWORD*)a1 = game_anonymous_ProcClassTrialSeq_vtable;
  v2 = (_QWORD*)game_ProcGameSkipView_instance_;
  v3 = fw_memory_g_heap_manager_ptr;
  if (game_ProcGameSkipView_instance_ != 0) {
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v7 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v8 = v6 == v7;
    v9 = v4 - 1 + v5;
    v10 = v9 >> 7;
    v11 = v9 & 0x7F;
    v12 = 16 * (v6 - v7) - 1;
    v13 = *(_QWORD*)(v7 + 8 * v10);
    if (v8) {
      v12 = 0;
    }
    v14 = v13 + 32 * v11;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v14 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v2[21] = *(_QWORD*)(v14 + 24);
    v15 = *(_QWORD*)(v14 + 16);
    v2[27] = v4 - 1;
    v2[20] = v15;
    if ((unsigned __int64)(v12 - (v4 + v5) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      if (*(_QWORD*)(v6 - 8) != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16);
        v6 = v2[24];
      }
      v2[24] = v6 - 8;
    }
  }
  v17 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)(a1 + 168) = 0;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  GameData_21f1ee0 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v18 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v18 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18);
}

__int64 game_anonymous_ProcClassTrialSeq_ProcClassTrialSeq_closure_Invoke(
    __int64 result, _DWORD* a2)
{
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *(__int64**)(result + 8);
  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  v5 = (_QWORD*)v2[1];
  v4 = v2[2];
  if ((unsigned __int64)v5 >= v4) {
    v7 = *v2;
    v8 = (__int64)v5 - *v2;
    v9 = (v8 >> 3) + 1;
    if (v9 >> 61 != 0) {
      GameRoutine_705570();
    }
    v10 = v4 - v7;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v10 >> 2 > v9) {
      v9 = v10 >> 2;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
    }
    else {
      v13 = 0;
    }
    v14 = v13 + 8 * v12;
    v15 = v13 + v8 - 8 * (v8 >> 3);
    *(_QWORD*)(v13 + v8) = v3;
    v6 = v13 + v8 + 8;
    result = memcpy(v15, v7, v8);
    *v2 = v15;
    v2[1] = v6;
    v2[2] = v14;
    if (v7 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
    }
  }
  else {
    *v5 = v3;
    v6 = (__int64)(v5 + 1);
  }
  v2[1] = v6;
  return result;
}

#pragma GCC visibility pop
