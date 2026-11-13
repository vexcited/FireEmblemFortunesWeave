#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 ProcVolunteerUnitMenu_Unknown160();
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_facility_anonymous_VolunteerUnitMenuItem_vtable[])();
extern __int64 GameData_2243f70;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
game_facility_anonymous_ProcVolunteerUnitMenu_OnUnitDecide_closure_Invoke();
__int64 game_facility_anonymous_ProcVolunteerUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2);
__int64 GameRoutine_1789cf0(_QWORD, _QWORD);
__int64 GameRoutine_f369a0(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__n128 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_2112be0[])();
extern __int64 (*GameData_2112e60[])();
extern __int64 (*game_facility_anonymous_ProcVolunteerUnitMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr[])();
extern __int64* GameData_212cc60[59];
extern __int64* GameData_212dcd0;
extern __int64* GameData_21312e0[10];
extern __int64 game_UnitListSet_instance_;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
_QWORD* game_facility_anonymous_ProcVolunteerUnitMenu_CreateBind(__int64 a1);
_QWORD* GameRoutine_13fa790(__int64, __int64, __int64, __int64, __int64);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void game_9591b0(PSEUDO_X8, __int64);
__int64 GameRoutine_928b80(_QWORD*, __int64);
__int64 GameRoutine_975940(__int64);
__int64 LayoutAccessor_1562060(__int64 result, __int64, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_facility_15e8430(__int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameHr_67ed20(_QWORD*);
char* GameRoutine_60a020(char*, const char*);
extern __int64 (*GameData_2112d60[])();
extern __int64 (*GameData_2112de0[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212d2b8;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 ui_Manager_instance_;
unsigned __int64 strlen(const char*);
void* game_97b2f0(__int64);
void __attribute__((noreturn)) String_60a1d0();
void game_16ad210(__int64, __int64, char, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ProcVolunteerUnitMenu_Unknown84(__int64 a1);
__int64 game_facility_anonymous_ProcVolunteerUnitMenu_OnUnitDecide(__int64 a1);

_QWORD* game_facility_anonymous_ProcVolunteerUnitMenu_CreateBind(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* result;
  __int64*** v15;
  __int64** v16;
  __int64** v17;
  __int64* v18;
  __int64* v19;
  _BOOL4 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;
  __int64 v24;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1216, 16, 0);
  GameRoutine_1789cf0(v2, "VolunteerUnitMenu");
  v3 = GameData_21312e0[0];
  *(_QWORD*)(v2 + 1184) = 0;
  *(_QWORD*)(v2 + 1192) = 0;
  *(_QWORD*)(v2 + 1200) = 0;
  *(_DWORD*)(v2 + 1208) = 0;
  *(_QWORD*)v2 = v3 + 2;
  *(_QWORD*)(v2 + 176) = v3 + 163;
  *(_QWORD*)(v2 + 1056) = v3 + 189;
  GameRoutine_f369a0(v2 + 1184, 2);
  v7 = *(_QWORD*)(v2 + 1184);
  v8 = *(_QWORD*)(v2 + 1192) - v7;
  if (v8 >= 1) {
    memset(v7, 0, v8, v4, v5, v6);
  }
  *(_QWORD*)v2 = game_facility_anonymous_ProcVolunteerUnitMenu_vtable;
  *(_QWORD*)(v2 + 176) = GameData_2112be0;
  *(_QWORD*)(v2 + 1056) =
      (__int64)((char*)game_facility_anonymous_ProcVolunteerUnitMenu_vtable +
                1512);
  v9 = GameData_212dcd0;
  *(_QWORD*)(*GameData_212dcd0 + 56) = *(_QWORD*)(*GameData_212dcd0 + 48);
  ProcInst_657850(v2, GameData_212c730, "ProcVolunteerUnitMenu", 1, a1);
  v12 = *(unsigned int*)(*v9 + 8);
  if ((v12 & 0x80000000) != 0) {
    v13 = 0;
  }
  else {
    v13 = *(_QWORD*)(*(_QWORD*)(*GameData_212cc60[0] + 64) + 8 * v12);
  }
  result = v22;
  v22[2] = v13;
  v22[0] = GameData_2112e60;
  v22[1] = v2;
  v15 = *(__int64****)(game_UnitListSet_instance_ + 24);
  v23 = v22;
  v16 = *v15;
  v17 = v15[1];
  if (*v15 == v17) {
    goto LABEL_24;
  }
  do {
    v18 = *v16;
    v19 = v16[1];
    if (v19 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 1), 1u,
                                memory_order_relaxed);
    }
    if (v18 != nullptr) {
      v20 = (v18[6] & 0x20) == 0;
      if (v19 == nullptr) {
        goto LABEL_16;
      }
    }
    else {
      v20 = false;
      if (v19 == nullptr) {
        goto LABEL_16;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v19 + 16))(v19);
      std___1___shared_weak_count___release_weak(v19);
      if (!v20) {
        goto LABEL_8;
      }
      goto LABEL_17;
    }
  LABEL_16:
    if (v20) {
    LABEL_17:
      v24 = **v16;
      if (v23 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*, __int64*))(*v23 + 48LL))(v23, &v24);
    }
  LABEL_8:
    v16 += 2;
  } while (v16 != v17);
  result = v23;
  if (v23 != v22) {
    if (v23 != nullptr) {
      v21 = 40;
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(
          *result + v21))(result, v10, v11);
    }
    return result;
  }
LABEL_24:
  v21 = 32;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(*result + v21))(
      result, v10, v11);
}

void ProcVolunteerUnitMenu_Unknown84(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  const char* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  char v12;
  __int64 v13;
  int v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  __int64 v19;
  struct {
    __int64 v20[2];
    const char* v21;
  } v20_;
  struct {
    __int64 v22;
    unsigned __int64 v23;
    _BYTE* v24;
  } v22_;

  game_facility_15e8430(a1);
  v2 = GameData_212dcd0;
  v3 = GameData_212cc60[0];
  if (*GameData_212dcd0 != 0 &&
      ((v4 = *(unsigned int*)(*GameData_212dcd0 + 8)) & 0x80000000) == 0 &&
      (v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212cc60[0] + 64) + 8 * v4)) != 0) {
    v6 = *(_QWORD*)(v5 + 88);
  }
  else {
    v6 = 0;
  }
  LayoutAccessor_1562060(a1 + 848, (__int64)"T_Txt", v6);
  game_9591b0((void*)(v20_.v20), *(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                            8LL * *(unsigned int*)(*v2 + 8)));
  if ((v20_.v20[0] & 1) != 0) {
    v7 = v20_.v21;
  }
  else {
    v7 = (char*)v20_.v20 + 1;
  }
  v8 = strlen(v7);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v11, 16, 0);
    v22_.v23 = v9;
    v22_.v24 = v10;
    v22_.v22 = v11 | 1;
  }
  else {
    LOBYTE(v22_.v22) = 2 * v8;
    v10 = (char*)&v22_.v22 + 1;
    if (v8 == 0) {
      goto LABEL_18;
    }
  }
  memmove((__int64)v10, (__int64)v7, v9);
LABEL_18:
  v12 = v20_.v20[0];
  v10[v9] = 0;
  if ((v12 & 1) != 0 && v20_.v21 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  (__int64)v20_.v21);
  }
  v14 = v22_.v22 & 1;
  if (v14 != 0) {
    v15 = v22_.v23;
  }
  else {
    v15 = (unsigned __int64)(unsigned __int8)v22_.v22 >> 1;
  }
  ui_LayoutAccessor_SetPaneVisible(a1 + 848, (__int64)"Img", v15 != 0);
  if (v15 != 0) {
    v16 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 848), (__int64)"Img");
    if (v16 != 0) {
      v17 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d678[0], 0);
      if (v17 != 0) {
        if (v14 != 0) {
          v18 = v22_.v24;
        }
        else {
          v18 = (char*)&v22_.v22 + 1;
        }
        Manager_136a920(ui_Manager_instance_ + 1264, v17, 0, 0xDu, v18);
      }
    }
    LayoutAccessor_1562cf0(a1 + 848, "Thumb1");
    v14 = v22_.v22 & 1;
  }
  if (v14 != 0 && v22_.v24 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19,
                                  (__int64)v22_.v24);
  }
}

__int64 game_facility_anonymous_ProcVolunteerUnitMenu_OnUnitDecide(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 i;
  char v19;
  void* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    _QWORD v26[4];
    _QWORD* v27;
  } v26_;
  struct {
    __int64 (*v28[4])();
    __int64 (**v29)();
  } v28_;
  const char* v30;
  struct {
    __int64 (*v31[4])();
    __int64 (**v32)();
  } v31_;

  v2 = GameData_212dcd0;
  *(_QWORD*)(*GameData_212dcd0 + 56) = *(_QWORD*)(*GameData_212dcd0 + 48);
  v3 = *(__int64**)(a1 + 1184);
  v4 = *(__int64**)(a1 + 1192);
  while (v3 != v4) {
    v5 = *v3++;
    GameRoutine_928b80((_QWORD*)*v2, v5);
  }
  v30 = "MID_VolunteerMenu_Confirm";
  v31_.v31[0] = (__int64 (*)())GameData_2112d60;
  v26_.v27 = v26_.v26;
  v31_.v32 = v31_.v31;
  v28_.v29 = v28_.v28;
  v28_.v28[0] = (__int64 (*)())GameData_2112de0;
  v26_.v26[0] = GameData_2112de0;
  v6 = (char*)GameRoutine_13fa790(a1, (__int64)&v30, (__int64)v31_.v31,
                                  (__int64)v28_.v28, (__int64)v26_.v26);
  if (v26_.v27 == v26_.v26) {
    v7 = 32;
  }
  else {
    if (v26_.v27 == nullptr) {
      goto LABEL_8;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v26_.v27 + v7))((__int64)v26_.v27);
LABEL_8:
  if (v28_.v29 == v28_.v28) {
    v8 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_13;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))((char*)*v28_.v29 + v8))((__int64)v28_.v29);
LABEL_13:
  if (v31_.v32 == v31_.v31) {
    v9 = 32;
  }
  else {
    if (v31_.v32 == nullptr) {
      goto LABEL_18;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))((char*)*v31_.v32 + v9))((__int64)v31_.v32);
LABEL_18:
  v28_.v29 = v28_.v28;
  v31_.v32 = v31_.v31;
  v28_.v28[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v28_.v28[1] = game_sound_PlayDecideLightSe_ptr[0];
  v31_.v31[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v31_.v31[1] = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(v31_.v31, (_QWORD*)v6 + 144);
  if (v31_.v32 == v31_.v31) {
    v10 = 32;
  }
  else {
    if (v31_.v32 == nullptr) {
      goto LABEL_23;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))((char*)*v31_.v32 + v10))((__int64)v31_.v32);
LABEL_23:
  if (v28_.v29 == v28_.v28) {
    v11 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_28;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))((char*)*v28_.v29 + v11))((__int64)v28_.v29);
LABEL_28:
  v12 = *(unsigned int*)(*v2 + 8);
  if ((v12 & 0x80000000) == 0) {
    v13 = *(_QWORD*)(*(_QWORD*)(*GameData_212cc60[0] + 64) + 8 * v12);
    if (v13 != 0) {
      v14 = *(const char**)(v13 + 88);
      if (v14 != nullptr) {
        GameRoutine_60a020(v6 + 1496, v14);
      }
      *((_DWORD*)v6 + 394) = 1;
      v15 = *v2;
      v16 = *(_QWORD*)(*v2 + 48);
      v17 = *(_QWORD*)(*v2 + 56);
      if ((int)((unsigned __int64)(v17 - v16) >> 3) >= 1) {
        for (i = 0; (__int64)i < (int)((unsigned __int64)(v17 - v16) >> 3);
             ++i) {
          if (i >= (v17 - v16) >> 3) {
            goto LABEL_37;
          }
          v21 = *(_QWORD*)(v16 + 8 * i);
          if (v21 != 0) {
            if (*(_BYTE*)(v13 + 82) != 6 &&
                (v22 = *(_QWORD*)(v21 + 392)) != 0 &&
                (v23 = *(_QWORD*)(v22 + 288)) != 0 &&
                (v24 = GameRoutine_975940(v23)) != 0) {
              v19 = *(_BYTE*)(v24 + *(unsigned __int8*)(v13 + 82) + 183);
              if (*(_BYTE*)(v21 + 2136) == 0) {
              LABEL_45:
                v20 = GameHr_67ed20(*(_QWORD**)(v21 + 392));
                goto LABEL_36;
              }
            }
            else {
              v19 = 0;
              if (*(_BYTE*)(v21 + 2136) == 0) {
                goto LABEL_45;
              }
            }
            v20 = game_97b2f0(v21 + 2104);
          LABEL_36:
            game_16ad210((__int64)v6, *(_QWORD*)(v21 + 392), v19, (__int64)v20);
            v15 = *v2;
          }
        LABEL_37:
          v16 = *(_QWORD*)(v15 + 48);
          v17 = *(_QWORD*)(v15 + 56);
        }
      }
    }
  }
  return 12;
}

__int64 ProcVolunteerUnitMenu_Unknown160()
{
  __int64* v0;
  __int64 v1;
  _QWORD v3[4];
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v0 = msg_MessageManager_instance__ptr[0];
  GameRoutine_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, 2, 0);
  v1 = *v0;
  v6 = -1;
  v7 = -1;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v3[0] = GameData_212e348 + 2;
  v3[1] = 0xFFFF0001FFFF0000LL;
  v3[2] = 0xFFFF0004FFFF0002LL;
  v3[3] = 0xFFFF0006FFFF0005LL;
  v18 = 8;
  v4 = -65529;
  v5 = -65528;
  return GameRoutine_a4dbe0(v1, "MID_Menu_PlayerFacility_UnitSelect_Help", 0,
                            v3);
}

__int64

game_facility_anonymous_ProcVolunteerUnitMenu_OnUnitDecide_closure_Invoke()
{
  if (GameData_2243f70 != 0) {
    *(_DWORD*)(GameData_2243f70 + 152) = 2;
  }
  return 4;
}

__int64 game_facility_anonymous_ProcVolunteerUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      112, 16, 0);
  *(_WORD*)(v5 + 16) = 0;
  *(_DWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 88) = v4;
  *(_QWORD*)(v5 + 104) = v3;
  *(_WORD*)(v5 + 80) = 257;
  *(_BYTE*)(v5 + 82) = 1;
  *(_WORD*)(v5 + 96) = 259;
  *(_QWORD*)v5 = game_facility_anonymous_VolunteerUnitMenuItem_vtable;
  *(_QWORD*)(v5 + 8) = 0;
  return BasicMenuCursor_16e0c00(v2, v5);
}

#pragma GCC visibility pop
