#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* BasicInfo_15e5fa0(_QWORD* result);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16477d0(__int64, __int64, __int64, __int64);
__int64 HubTalkNatives_e14270(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int16 GameData_225d6f4;
extern __int64 GameData_225d6f8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RouteMenuItem_166e340(__int64 a1, __int64 a2, __int64* a3, __int64* a4,
                              __int64* a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9);
__int64 RouteMenuItem_166e450(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5);
__int64 game_menu_anonymous_RouteMenuItem_ACall_closure_Invoke(__int64 a1);
__int64 game_menu_anonymous_RouteMenuItem_ACall_closure0_Invoke(__int64 a1);
__int64 game_menu_anonymous_RouteMenuItem_ACall_closure1_Invoke();
__attribute__((swiftcall)) void GameRoutine_9d5180(PSEUDO_X8, __int64*,
                                                   _QWORD*);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_158a7c0(unsigned __int8);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136afb0(__int64, unsigned int, _BYTE*);
__int64 StatusNum_1890220(__int64, unsigned int, unsigned int, unsigned int,
                          char, char, int);
__int64 UnitUtil_15e0120(__int64);
__int64 UnitUtil_15e0200(__int64);
__int64 UnitUtil_15e04f0(__int64 result);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
char* game_util_Format(const char*, ...);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 ui_Manager_instance_;
extern char* GameData_20660e0[8];
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 RouteMenuItem_DrawText_166df10(__int64 a1);

__int64 RouteMenuItem_DrawText_166df10(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  atomic_ullong* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  atomic_ullong* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  __int64* v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  char* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  struct {
    __int64 v43;
    unsigned __int64 v44;
    char* v45;
  } v43_;
  struct {
    _QWORD v46[2];
    char gap40_[4];
    _BYTE v47[20];
  } v46_;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v29 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v6 = v29;
    if (v29 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v7 = ui_LayoutAccessor_FindPane(v6, (__int64)"IconSymbol");
  if (v7 != 0) {
    v8 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v8 = 0;
  }
  v9 = GameRoutine_158a7c0(*(_BYTE*)(a1 + 96));
  if (v8 != 0 && v9 != 0) {
    v10 = *(_BYTE**)(v9 + 48);
    if (v10 != nullptr && *v10 != 0) {
      v11 = v9;
      if ((Manager_136afb0(ui_Manager_instance_ + 1264, 5u, v10) & 1) != 0) {
        Manager_136a920(ui_Manager_instance_ + 1264, v8, 0, 5u,
                        *(_BYTE**)(v11 + 48));
      }
    }
  }
  UnitUtil_15e0120((__int64)v46_.v47);
  UnitUtil_15e0200((__int64)v46_.v47);
  v12 = *(_QWORD*)(a1 + 56);
  if (v12 == 0) {
    goto LABEL_19;
  }
  v13 = std___1___shared_weak_count_lock(v12);
  if (v13 == 0) {
    goto LABEL_19;
  }
  v14 = v13;
  v15 = (atomic_ullong*)(v13 + 8);
  v16 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v30 = v16;
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
    v16 = v30;
    if (v30 != nullptr) {
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  if (v16 == nullptr) {
  LABEL_19:
    v16 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_20:
  v17 = ui_LayoutAccessor_FindPane(v16, (__int64)"Face0");
  if (v17 != 0) {
    v17 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameHr_1840740(v17, 0, *(_QWORD*)(a1 + 88), 6u, 1);
  v18 = *(_QWORD*)(a1 + 56);
  if (v18 == 0) {
    goto LABEL_26;
  }
  v19 = std___1___shared_weak_count_lock(v18);
  if (v19 == 0) {
    goto LABEL_26;
  }
  v20 = v19;
  v21 = (atomic_ullong*)(v19 + 8);
  v22 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v21, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v22 != nullptr) {
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  v31 = v22;
  (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
  std___1___shared_weak_count___release_weak(v20);
  v22 = v31;
  if (v31 == nullptr) {
  LABEL_26:
    v22 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_27:
  v46_.v46[0] = "L_Lv";
  v46_.v46[1] = 4;
  GameRoutine_9d5180((void*)(&v43_.v43), v22, v46_.v46);
  if (v43_.v44 == 0) {
    goto LABEL_35;
  }
  v23 = std___1___shared_weak_count_lock(v43_.v44);
  v24 = v43_.v43;
  if (v43_.v44 != 0) {
    std___1___shared_weak_count___release_weak(v43_.v44);
  }
  if (v23 != 0 && v24 != 0) {
    v25 = *(unsigned __int8*)(*(_QWORD*)(a1 + 88) + 498LL);
    StatusNum_1890220(v24, v25, v25, 0x63u, 1, 0, -1);
  }
  else if (v23 == 0) {
    goto LABEL_35;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
  LABEL_35:
    v26 = *(_QWORD*)(a1 + 56);
    if (v26 == 0) {
      goto LABEL_49;
    }
    goto LABEL_36;
  }
  (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
  std___1___shared_weak_count___release_weak(v23);
  v26 = *(_QWORD*)(a1 + 56);
  if (v26 != 0) {
  LABEL_36:
    v27 = std___1___shared_weak_count_lock(v26);
    if (v27 != 0) {
      v28 = *(char**)(a1 + 48);
      if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v28 != nullptr) {
          goto LABEL_50;
        }
      }
      else {
        v32 = v27;
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        std___1___shared_weak_count___release_weak(v32);
        if (v28 != nullptr) {
          goto LABEL_50;
        }
      }
    }
  }
LABEL_49:
  v28 = (char*)ui_LayoutAccessor_empty__ptr[0];
LABEL_50:
  v33 = *(unsigned __int8*)(a1 + 96);
  if (v33 == 10) {
    v34 = nullptr;
  }
  else {
    v34 = GameData_20660e0[v33];
  }
  v35 = game_util_Format("MCID_episode_%s", v34);
  v36 = strlen(v35);
  if (v36 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v37 = v36;
  if (v36 >= 0x17) {
    if ((v36 | 7) == 0x17) {
      v39 = 26;
    }
    else {
      v39 = (v36 | 7) + 1;
    }
    v38 = (const char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v39, 16, 0);
    v43_.v44 = v37;
    v43_.v45 = v38;
    v43_.v43 = v39 | 1;
    goto LABEL_61;
  }
  LOBYTE(v43_.v43) = 2 * v36;
  v38 = (char*)&v43_.v43 + 1;
  if (v36 != 0) {
  LABEL_61:
    memmove((__int64)v38, (__int64)v35, v37);
  }
  v38[v37] = 0;
  if ((v43_.v43 & 1) != 0) {
    v40 = v43_.v45;
  }
  else {
    v40 = (char*)&v43_.v43 + 1;
  }
  LayoutAccessor_1562060(v28, (__int64)"T_Chapter", v40);
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v41,
                                  (__int64)v43_.v45);
  }
  return UnitUtil_15e04f0((__int64)v46_.v47);
}

__int64 RouteMenuItem_166e340(__int64 a1, __int64 a2, __int64* a3, __int64* a4,
                              __int64* a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9)
{
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v15 = HubTalkNatives_e14270(a1, a2);
  if (v15 != 0) {
    v16 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         192, 16, 0);
    GameRoutine_16477d0(v17, *a3, a6, a9);
    BasicMenuCursor_16e0c00(v15, v17);
    v18 = fw_memory_HeapManager_Allocate(*v16, 192, 16, 0);
    GameRoutine_16477d0(v18, *a4, a7, a9);
    BasicMenuCursor_16e0c00(v15, v18);
    v19 = fw_memory_HeapManager_Allocate(*v16, 192, 16, 0);
    GameRoutine_16477d0(v19, *a5, a8, a9);
    BasicMenuCursor_16e0c00(v15, v19);
  }
  return v15;
}

__int64 RouteMenuItem_166e450(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5)
{
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  v8 = HubTalkNatives_e14270(a1, a2);
  if (v8 != 0) {
    v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         192, 16, 0);
    GameRoutine_16477d0(v10, (__int64)"MID_Sys_Yes", a3, a5);
    BasicMenuCursor_16e0c00(v8, v10);
    v11 = fw_memory_HeapManager_Allocate(*v9, 192, 16, 0);
    GameRoutine_16477d0(v11, (__int64)"MID_Sys_No", a4, a5);
    BasicMenuCursor_16e0c00(v8, v11);
  }
  return v8;
}

__int64 game_menu_anonymous_RouteMenuItem_ACall_closure_Invoke(__int64 a1)
{
  LOBYTE(GameData_225d6f4) = *(_BYTE*)(*(_QWORD*)(a1 + 8) + 96LL);
  HIBYTE(GameData_225d6f4) = 1;
  if (GameData_225d6f8 != 0) {
    BasicInfo_15e5fa0((_QWORD*)GameData_225d6f8);
  }
  return 7;
}

__int64 game_menu_anonymous_RouteMenuItem_ACall_closure0_Invoke(__int64 a1)
{
  LOBYTE(GameData_225d6f4) = *(_BYTE*)(*(_QWORD*)(a1 + 8) + 96LL);
  GameData_225d6f4 = (unsigned __int8)GameData_225d6f4;
  if (GameData_225d6f8 != 0) {
    BasicInfo_15e5fa0((_QWORD*)GameData_225d6f8);
  }
  return 7;
}

__int64 game_menu_anonymous_RouteMenuItem_ACall_closure1_Invoke()
{
  if (GameData_225d6f8 != 0) {
    BasicInfo_15e5fa0((_QWORD*)GameData_225d6f8);
  }
  return 3;
}

#pragma GCC visibility pop
