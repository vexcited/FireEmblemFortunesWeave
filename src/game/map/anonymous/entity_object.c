#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_816d70();
__int64 GameRoutine_816f20();
__int64 GameRoutine_817060();
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD, _QWORD);
extern _UNKNOWN GameData_21ec950;
extern __int64 (*game_map_anonymous_EntityObject_ProcState_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_21ec7d8;
extern __int64 GameData_21ec7e0;
extern __int64 GameData_21ec7e8;
extern __int64 GameData_21ec7f8;
extern __int64 GameData_21ec808;
extern __int64 GameData_21ec818;
extern __int64 GameData_21ec820;
extern __int64 GameData_21ec828;
extern __int64 GameData_21ec838;
extern __int64 GameData_21ec848;
extern __int64 GameData_21ec858;
extern __int64 GameData_21ec860;
extern __int64 GameData_21ec868;
extern __int64 GameData_21ec878;
extern __int64 GameData_21ec888;
extern __int64 GameData_21ec898;
extern __int64 GameData_21ec8a0;
extern __int64 GameData_21ec8a8;
extern __int64 GameData_21ec8b8;
extern __int64 GameData_21ec8c8;
extern __int64 GameData_21ec8d8;
extern __int64 GameData_21ec8e0;
extern __int64 GameData_21ec8e8;
extern __int64 GameData_21ec8f8;
extern __int64 GameData_21ec908;
extern __int64 GameData_21ec918;
extern __int64 GameData_21ec920;
extern __int64 GameData_21ec928;
extern __int64 GameData_21ec938;
extern __int64 GameData_21ec948;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_21ec7d0;
extern char GameData_21ec810;
extern char GameData_21ec850;
extern char GameData_21ec890;
extern char GameData_21ec8d0;
extern char GameData_21ec910;
extern int GameData_21ec7f0;
extern int GameData_21ec800;
extern int GameData_21ec830;
extern int GameData_21ec840;
extern int GameData_21ec870;
extern int GameData_21ec880;
extern int GameData_21ec8b0;
extern int GameData_21ec8c0;
extern int GameData_21ec8f0;
extern int GameData_21ec900;
extern int GameData_21ec930;
extern int GameData_21ec940;
__int64 EntityObject_Unknown24(__int64 a1, __int64 a2);

__int64 EntityObject_Unknown24(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 (**v9)();
  _BYTE* v10;
  char v11;

  if (a2 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ec950,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21ec950) != 0) {
      GameData_21ec7f0 = 0;
      GameData_21ec7f8 = 0;
      GameData_21ec7d8 = 0;
      GameData_21ec800 = 0;
      GameData_21ec7d0 = 13;
      GameData_21ec7e0 = (__int64)GameRoutine_816d70;
      GameData_21ec7e8 = 0;
      GameData_21ec850 = 13;
      GameData_21ec8d0 = 13;
      GameData_21ec808 = 0;
      GameData_21ec818 = 0;
      GameData_21ec820 = 16;
      GameData_21ec828 = 1;
      GameData_21ec830 = 0;
      GameData_21ec810 = 14;
      GameData_21ec838 = 0;
      GameData_21ec840 = 0;
      GameData_21ec848 = 0;
      GameData_21ec858 = 0;
      GameData_21ec860 = (__int64)GameRoutine_816f20;
      GameData_21ec868 = 0;
      GameData_21ec870 = 0;
      GameData_21ec878 = 0;
      GameData_21ec880 = 0;
      GameData_21ec888 = 0;
      GameData_21ec890 = 14;
      GameData_21ec898 = 0;
      GameData_21ec8a0 = 16;
      GameData_21ec8a8 = 1;
      GameData_21ec8b0 = 0;
      GameData_21ec8b8 = 0;
      GameData_21ec8c0 = 0;
      GameData_21ec8c8 = 0;
      GameData_21ec8d8 = 0;
      GameData_21ec8e0 = (__int64)GameRoutine_817060;
      GameData_21ec8e8 = 0;
      GameData_21ec8f0 = 0;
      GameData_21ec8f8 = 0;
      GameData_21ec900 = 0;
      GameData_21ec908 = 0;
      GameData_21ec910 = 0;
      GameData_21ec938 = 0;
      GameData_21ec940 = 0;
      GameData_21ec948 = 0;
      GameData_21ec930 = 0;
      GameData_21ec920 = 0;
      GameData_21ec928 = 0;
      GameData_21ec918 = 0;
      __cxa_guard_release(&GameData_21ec950);
    }
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        160, 16, 0);
    v5 = GameData_212c608[0];
    *(_QWORD*)(v4 + 88) = 0;
    *(_QWORD*)(v4 + 96) = 0;
    *(_QWORD*)(v4 + 104) = 0;
    *(_QWORD*)(v4 + 112) = 0;
    *(_QWORD*)(v4 + 120) = 0;
    *(_QWORD*)(v4 + 128) = 0;
    *(_WORD*)(v4 + 136) = 0;
    *(_QWORD*)(v4 + 16) = 0;
    *(_QWORD*)(v4 + 24) = "NULL";
    *(_QWORD*)(v4 + 32) = 0;
    v6 = (_QWORD*)(v4 + 32);
    *(_QWORD*)(v4 + 138) = 0;
    *(_QWORD*)(v4 + 144) = 0;
    *(_QWORD*)(v4 + 40) = 0;
    *(_QWORD*)(v4 + 48) = 0;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 0;
    *(_QWORD*)(v4 + 80) = 0;
    *(_QWORD*)v4 = v5 + 16;
    *(_QWORD*)(v4 + 8) = 0;
    game_ProcInst_Register(v4, v7);
    v8 = *(_QWORD*)(a2 + 40);
    v9 = game_map_anonymous_EntityObject_ProcState_vtable;
    *(_QWORD*)(v4 + 152) = a1;
    *(_QWORD*)v4 = game_map_anonymous_EntityObject_ProcState_vtable;
    if (v8 != 0) {
      *(_QWORD*)(v8 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a2 + 40);
      v9 = *(__int64 (***)())v4;
    }
    *(_QWORD*)(a2 + 40) = v4;
    *(_QWORD*)(v4 + 8) = &GameData_21ec7d0;
    *(_QWORD*)(v4 + 16) = &GameData_21ec7d0;
    *(_QWORD*)(v4 + 24) = "ProcState";
    *(_QWORD*)(v4 + 32) = a2;
    *(_DWORD*)(v4 + 140) = 1374187680;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    ((void (*)(__int64))v9[4])(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v10 = (_BYTE*)*v6;
    v11 = *(_BYTE*)(*v6 + 138LL);
    if (v11 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v10 + 64LL))(*v6);
      v11 = v10[138];
    }
    v10[138] = v11 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 208LL))(a1);
    return 0;
  }
  return v4;
}

#pragma GCC visibility pop
