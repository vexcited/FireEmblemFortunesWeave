#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1847710(__int64, int, __int64);
__int64 GameSubquestData_125a000(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_20e5c58[])();
extern __int64 (*game_menu_anonymous_EmptyMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_QuestBoardMenuItem_vtable[])();
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_2241720;
extern __int64 fw_memory_g_heap_manager_ptr;
void ProcQuestBoard_18485e0();
__int64 ProcQuestBoard_Unknown128(__int64 a1);
bool ProcQuestBoard_Unknown144(__int64 a1);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 fw_memory_g_heap_manager;
extern char* msg_MessageManager_empty_text_;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void
game_menu_anonymous_ProcQuestBoard_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                         __int64 a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
_BYTE* ProcInst_657a50(__int64, char);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 BasicMenu_16dd280(_QWORD*);
__int64 GameHr_167f810(__int64, int, __int64, __int64, int, __int64);
__int64 GameHr_1848fe0(__int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 (*GameData_20e66f0[])();
extern __int64 GameData_225e7a0;
unsigned int* game_gmap_SpotMgr_FindSpot_alt1(unsigned int* result) __asm__(
    "game_gmap_SpotMgr_FindSpot");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 game_menu_anonymous_ProcQuestBoard_ShowMap(__int64 a1);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
void game_gameui_159b580(__int64, _BYTE*, __int64, _DWORD*);
__int64 ProcQuestBoard_1848520(__int64 a1);
__int64 game_menu_anonymous_ProcQuestBoard_ShowMap_closure_Invoke(__int64 a1,
                                                                  _BYTE* a2,
                                                                  __int64 a3,
                                                                  _DWORD* a4);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 game_gameui_1593d90(__int64*, __int64);
__int64 game_menu_PageTab_SetupLabel(__int64, __int64*, __int64, unsigned int,
                                     unsigned int, unsigned int);
extern __int64 (*GameData_20e5980[])();
__int64 game_menu_anonymous_ProcQuestBoard_OnInit(__int64* a1);

__int64 game_menu_anonymous_ProcQuestBoard_OnInit(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  int v9;
  __int64 result;
  struct {
    char* v11;
    char* v12;
    char v13;
    char gap17_[3];
    int v14;
    int v15;
    char v16;
    char gap29_[3];
    char** v17;
  } v11_;
  __int64 v18[2];
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;

  LayoutAccessor_1560070((void*)(&v19_.v19), a1 + 106, "L_PageTab");
  v2 = v19_.v20;
  v18[0] = v19_.v19;
  v18[1] = v19_.v20;
  if (v19_.v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19_.v20 + 16), 1u,
                              memory_order_relaxed);
  }
  v11_.v11 = (const char*)GameData_20e5980;
  v11_.v12 = (const char*)a1;
  v3 = *a1;
  v11_.v17 = &v11_.v11;
  v4 = (*(__int64 (**)(__int64*))(v3 + 192))(a1);
  game_menu_PageTab_SetupLabel((__int64)(a1 + 82), v18, (__int64)&v11_.v11, v4,
                               0xEu, 0xFu);
  if (v11_.v17 == &v11_.v11) {
    v5 = 32;
  }
  else {
    if (v11_.v17 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(void*)) & (*v11_.v17)[v5])((void*)v11_.v17);
LABEL_8:
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  LayoutAccessor_1560070((void*)(&v11_.v11), a1 + 106, "L_Info/L_KeyHelp00");
  if (v11_.v12 != nullptr) {
    v6 = std___1___shared_weak_count_lock((__int64)v11_.v12);
    v7 = (__int64)v11_.v11;
    if (v11_.v12 != nullptr) {
      std___1___shared_weak_count___release_weak((__int64)v11_.v12);
    }
    if (v6 != 0 && v7 != 0) {
      LayoutAccessor_155e830(v7, 0);
    }
    else if (v6 == 0) {
      goto LABEL_19;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
LABEL_19:
  v8 = LayoutAccessor_155fbe0(a1 + 106, "L_Info/L_KeyHelp01");
  v9 = (*(__int64 (**)(__int64*))(*a1 + 192))(a1);
  v11_.v16 = 0;
  v11_.v17 = nullptr;
  v11_.v11 = "StatusChange";
  v11_.v12 = "MID_KeyHelp_StatusChange";
  v11_.v13 = 1;
  v11_.v14 = 2;
  v11_.v15 = v9;
  game_gameui_1593d90(v8, (__int64)&v11_.v11);
  result = v19_.v20;
  if (v19_.v20 != 0) {
    return std___1___shared_weak_count___release_weak(v19_.v20);
  }
  return result;
}

__int64 ProcQuestBoard_1848520(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;
  struct {
    __int64 v5;
    __int64 v6;
  } v5_;

  LayoutAccessor_1560070((void*)(&v5_.v5), (__int64*)(a1 + 848),
                         "L_Info/L_Img");
  result = v5_.v6;
  if (v5_.v6 != 0) {
    v2 = std___1___shared_weak_count_lock(v5_.v6);
    v3 = v5_.v5;
    result = v5_.v6;
    if (v5_.v6 != 0) {
      result = std___1___shared_weak_count___release_weak(v5_.v6);
    }
    if (v2 == 0 || v3 == 0) {
      if (v2 == 0) {
        return result;
      }
    }
    else {
      ui_LayoutAccessor_SetPaneVisible(v3, (__int64)"N_State", 0);
      result = LayoutAccessor_1562cf0(v3, "Img01");
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      return std___1___shared_weak_count___release_weak(v2);
    }
  }
  return result;
}

void ProcQuestBoard_18485e0()
{
  if (GameData_2241720 != 0) {
    *(_BYTE*)(GameData_2241720 + 1688) = 1;
  }
}

__int64 game_menu_anonymous_ProcQuestBoard_ShowMap(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 (***v18)();
  __int64 v19;
  struct {
    __int64 (**v20)();
    __int64 v21;
    char gap16_[16];
    __int64 (***v22)();
  } v20_;
  _QWORD v23[3];

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1152LL))(a1) & 1) == 0) {
    return 0;
  }
  if (*(_BYTE*)(a1 + 1064) != 1) {
    v3 = GameData_225e7a0;
    *(_BYTE*)(a1 + 1064) = 1;
    if (v3 != 0) {
      v4 = *(_QWORD*)(v3 + 168);
      if (v4 != 0) {
        LayoutAccessor_155e830(v4, 0),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if ((*(_WORD*)(v3 + 136) & 1) == 0) {
        ProcInst_657a50(v3, 1),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    LayoutAccessor_1560070((void*)(&v20_.v20), (__int64*)(a1 + 848), "L_Info"),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v20_.v21 != 0) {
      v5 = std___1___shared_weak_count_lock(v20_.v21),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v6 = (__int64)v20_.v20;
      if (v20_.v21 != 0) {
        std___1___shared_weak_count___release_weak(v20_.v21),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (v5 != 0 && v6 != 0) {
        LayoutAccessor_1562cf0(v6, "Img"),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else if (v5 == 0) {
        goto LABEL_19;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v5),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  LABEL_19:
    LayoutAccessor_1560070((void*)(&v20_.v20), (__int64*)(a1 + 848),
                           "L_Info/L_Stamp"),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v20_.v21 != 0) {
      v7 = std___1___shared_weak_count_lock(v20_.v21),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v8 = (__int64)v20_.v20;
      if (v20_.v21 != 0) {
        std___1___shared_weak_count___release_weak(v20_.v21),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (v7 != 0 && v8 != 0) {
        LayoutAccessor_155e830(v8, 0),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else if (v7 == 0) {
        goto LABEL_28;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v7),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  LABEL_28:
    v9 = *(_QWORD*)(a1 + 336);
    if (v9 == 0 || *(__int64 (***)(void))v9 !=
                       game_menu_anonymous_QuestBoardMenuItem_vtable) {
      return 13;
    }
    v10 = *(_QWORD*)(v9 + 152);
    if (*(_WORD*)(*(_QWORD*)v10 + 128LL) != 0) {
      v11 = game_gmap_SpotMgr_FindSpot_alt1(
          *(unsigned int**)(*(_QWORD*)(*(_QWORD*)v10 + 136LL) + 8LL)),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v11 = nullptr;
    }
    v12 = fw_memory_g_heap_manager_ptr;
    v13 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *v13 = v11;
    v14 = (__int64)v13;
    v23[0] = v13;
    v23[1] = v13 + 1;
    v23[2] = v13 + 1;
    v15 = BasicMenu_16dd280((_QWORD*)a1),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v20_.v20 = GameData_20e66f0;
    v20_.v21 = a1;
    v20_.v22 = &v20_.v20;
    if (GameData_225e7a0 != 0) {
      v17 = 4;
      v18 = &v20_.v20;
    }
    else {
      GameHr_167f810(a1, 3, (__int64)v23, v10, v15, (__int64)&v20_.v20),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v18 = v20_.v22;
      if (v20_.v22 == &v20_.v20) {
        v17 = 4;
      }
      else {
        if (v20_.v22 == nullptr) {
          goto LABEL_36;
        }
        v17 = 5;
      }
    }
    ((void (*)(__int64 (***)(void), __int64))(*v18)[v17])(v18, v16),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_36:
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v12 + v19, v14),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return 13;
  }
  GameHr_1848fe0(a1),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return 13;
}

__int64 ProcQuestBoard_Unknown128(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      144, 16, 0);
  *(_WORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_DWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) = 1;
  *(_DWORD*)(v3 + 40) = -1;
  *(_QWORD*)v3 = game_menu_anonymous_EmptyMenuItem_vtable;
  v4 = *(_QWORD*)(a1 + 344);
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  *(_QWORD*)(v3 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v3;
  v13 = nullptr;
  v14 = 0;
  v12 = nullptr;
  result = GameSubquestData_125a000(*(_QWORD*)GameData_212c7b0[0], &v12, 1);
  v6 = v12;
  v7 = v13;
  if (v12 != v13) {
    do {
      v8 = *v6++;
      v9 = fw_memory_HeapManager_Allocate(*v2, 176, 16, 0);
      GameRoutine_1847710(v9, 1, v8);
      *(_QWORD*)v9 = game_menu_anonymous_QuestBoardMenuItem_vtable;
      *(_BYTE*)(v9 + 160) = 0;
      *(_QWORD*)(v9 + 144) = GameData_20e5c58;
      result = GameRoutine_16e0c00(a1, v9);
    } while (v6 != v7);
    v6 = v12;
  }
  if (v6 != nullptr) {
    v10 = *v2;
    v13 = v6;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(v10 + v11, v6);
  }
  return result;
}

bool ProcQuestBoard_Unknown144(__int64 a1)
{
  __int64 v1;
  _BOOL8 result;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 336);
  result = false;
  if (v1 != 0 &&
      *(__int64 (***)())v1 == game_menu_anonymous_QuestBoardMenuItem_vtable) {
    v3 = **(_QWORD**)(v1 + 152);
    if (*(_WORD*)(v3 + 128) != 0 &&
        game_gmap_SpotMgr_FindSpot(*(_QWORD*)(*(_QWORD*)(v3 + 136) + 8LL)) !=
            0) {
      return true;
    }
  }
  return result;
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcQuestBoard_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                         __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _BYTE* v3;
  char* v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v3 = (_BYTE*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 1136LL))(
      *(_QWORD*)(a1 + 8));
  if (v3 != nullptr && *v3 != 0) {
    v4 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v3, 0);
  }
  else {
    v4 = msg_MessageManager_empty_text_;
  }
  result = strlen_alt1(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (result | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v8, 16,
                                             0);
    a2[1] = v6;
    a2[2] = v9;
    *a2 = v8 | 1;
    v7 = v9;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v7 = (__int64)a2 + 1;
    if (result == 0) {
      goto LABEL_14;
    }
  }
  result = memmove_alt1(v7, (__int64)v4, v6);
LABEL_14:
  *(_BYTE*)(v7 + v6) = 0;
  {
    result;
    return;
  }
}

__int64 game_menu_anonymous_ProcQuestBoard_ShowMap_closure_Invoke(__int64 a1,
                                                                  _BYTE* a2,
                                                                  __int64 a3,
                                                                  _DWORD* a4)
{
  __int64 result;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  LayoutAccessor_1560070(
      (void*)(&v8_.v8), (__int64*)(*(_QWORD*)(a1 + 8) + 848LL), "L_Info/L_Img");
  game_gameui_159b580((__int64)&v8_.v8, a2, a3, a4);
  result = v8_.v9;
  if (v8_.v9 != 0) {
    return std___1___shared_weak_count___release_weak(v8_.v9);
  }
  return result;
}

#pragma GCC visibility pop
