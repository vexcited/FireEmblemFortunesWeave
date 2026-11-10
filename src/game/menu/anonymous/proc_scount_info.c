#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16f5ea0(_QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_Footer_instance_;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcScountInfo_Unknown131();
__int64 ProcScountInfo_Unknown139(__int64 a1, __int64* a2);
__int64 ProcScountInfo_Unknown140(__int64 a1, __int64 a2, char a3);
__int64 ProcScountInfo_Unknown12(__int64 a1, __int64 a2, char a3);
__int64* FloatingHelp_18af120(_QWORD*, __int64*);
__int64 GameRoutine_18af980(__int64, __int64*);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* GameData_212d890[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c610;
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_2131c18[55];
extern __int64 fw_memory_g_heap_manager;
extern char* msg_MessageManager_empty_text_;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 ProcScountInfo_Unknown92(__int64 a1);
__attribute__((swiftcall)) void
game_menu_anonymous_ProcScountInfo_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                         __int64 unused_int0,
                                                         _DWORD* a1);

__int64 ProcScountInfo_Unknown92(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  struct {
    __int64* v8;
    int v9;
    char gap20_[4];
    __int64 v10;
  } v8_;
  __int64 var4;

  v2 = *(_QWORD**)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] != 0) {
    if (v2[19] != 0) {
      v8_.v10 = 0;
      v8_.v8 = GameData_212d890[0] + 2;
      v8_.v9 = 44;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, __int64**))(
          v2[1] + 16LL))((void*)(&var4), v2 + 1, &v8_.v8);
    }
    v2[20] = 0;
    FloatingHelp_18af120(v2, (__int64*)(a1 + 848));
    GameRoutine_18af980((__int64)v2, (__int64*)(a1 + 848));
  }
  v3 = a1;
  v4 = a1;
  v5 = GameData_212c610;
  v6 = GameData_2131c18[0];
  do {
    result = __dynamic_cast(v4, v5, v6, 0);
    v4 = *(_QWORD*)(v4 + 32);
    if (result != 0) {
      v3 = result;
    }
  } while (v4 != 0);
  if (v3 == a1) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1056) + 104LL))(a1 + 1056);
  }
  return result;
}

__int64 ProcScountInfo_Unknown131()
{
  __int64 result;

  result = game_gameui_Footer_instance_;
  if (game_gameui_Footer_instance_ != 0) {
    return LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
  return result;
}

__int64 ProcScountInfo_Unknown139(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v13 = result;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      LODWORD(result) = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = "XHelp";
    *(_QWORD*)(v15 + 8) = 0;
    v16 = v14 + 40 * v12;
    *(_BYTE*)(v15 + 16) = 0;
    *(_BYTE*)(v15 + 28) = 0;
    v6 = v14 + v8 + 40;
    *(_QWORD*)(v15 + 32) = 0;
    *(_DWORD*)(v15 + 20) = 2;
    *(_DWORD*)(v15 + 24) = result;
    result = memcpy(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    *(_BYTE*)(v4 + 16) = 0;
    *(_BYTE*)(v4 + 28) = 0;
    v6 = v4 + 40;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = "XHelp";
    *(_QWORD*)(v4 + 8) = 0;
    *(_DWORD*)(v4 + 20) = 2;
    *(_DWORD*)(v4 + 24) = result;
  }
  a2[1] = v6;
  return result;
}

__int64 ProcScountInfo_Unknown140(__int64 a1, __int64 a2, char a3)
{
  if (*(int*)(a1 + 1072) < 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 1072, a2, a3 & 1) & 1) == 0) {
    return 14;
  }
  GameRoutine_16f5ea0(a1);
  return 13;
}

__int64 ProcScountInfo_Unknown12(__int64 a1, __int64 a2, char a3)
{
  if (*(int*)(a1 + 896) < 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 896, a2, a3 & 1) & 1) == 0) {
    return 14;
  }
  GameRoutine_16f5ea0(a1 - 176);
  return 13;
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcScountInfo_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                         __int64 unused_int0,
                                                         _DWORD* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  const char* v3;
  __int64 v4;
  char* v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  if (*a1 == 1) {
    v3 = "MID_ScoutInfo_Status";
  }
  else {
    v3 = "MID_ScoutInfo_Introduction";
  }
  if (*v3 != 0) {
    v14 = -1;
    v15 = -1;
    v16 = -1;
    v17 = -1;
    v4 = *msg_MessageManager_instance__ptr[0];
    v18 = -1;
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v11[0] = msg_TagSelector_vtable;
    v11[1] = 0xFFFF0001FFFF0000LL;
    v11[2] = 0xFFFF0004FFFF0002LL;
    v11[3] = 0xFFFF0006FFFF0005LL;
    v26 = 8;
    v12 = -65529;
    v13 = -65528;
    v5 = (char*)GameRoutine_a4dbe0(v4, v3, 0, v11);
  }
  else {
    v5 = msg_MessageManager_empty_text_;
  }
  result = strlen(v5);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v7 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (result | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    a2[1] = v7;
    a2[2] = v10;
    *a2 = v9 | 1;
    v8 = (char*)v10;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v8 = (char*)a2 + 1;
    if (result == 0) {
      goto LABEL_16;
    }
  }
  result = memmove(v8, v5, v7);
LABEL_16:
  v8[v7] = 0;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
