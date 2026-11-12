#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e5e00(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_207cad8[])();
extern __int64 GameData_225d6f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_225d700;
__int64 CompareInfo_DeletingDestructor(__int64 a1);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* game_g_hero_ids;
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0(void);
__int64 CompareInfo_Destructor(_QWORD* a1);
__int64 CompareInfo_DeletingDestructor_166cbd0(_QWORD* a1);
unsigned __int64 game_menu_CompareInfo_Build_lambda0_Invoke_alt1(
    unsigned __int64 result,
    unsigned __int8* a2) __asm__("game_menu_CompareInfo_Build_lambda0_Invoke");
__int64 GameConst_7f8610(__int64);
__int64 GameConverge_8ea460(__int64, __int64, unsigned int, __int64);
__int64 GameConverge_8ea590(__int64, __int64, unsigned int, __int64);
__int64 GameRoutine_6c2b50(__int64);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158c260(__int64**, __int64, __int64,
                                                    unsigned int, char);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158ca00(_QWORD*, __int64,
                                                    unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_Unit_Destroy_Unit(__int64);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 (*GameData_207cb08[])();
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 game_GameModeData_instance_;
float ui_LayoutAccessor_SetTranslate(__int64*, __int64);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
float game_menu_CompareInfo_Build(__int64 a1);
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
void game_menu_CompareInfo_Build_lambda0_Invoke(__int64 a1,
                                                unsigned __int8* a2);

float game_menu_CompareInfo_Build(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  const char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  struct {
    __int64 (**v21)();
    char* v22;
    _QWORD* v23;
    char gap24_[8];
    __int64** v24;
  } v21_;
  char v25;
  struct {
    _QWORD v26[2];
    char* v27;
  } v26_;
  _BYTE v28[2224];
  struct {
    __int64 v29;
    __int64 v30;
  } v29_;

  if (*(_QWORD*)(a1 + 240) != 0) {
    v2 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_39;
    }
    GameRoutine_6c2b50((__int64)&v29_.v29);
    GameRoutine_6c2b50((__int64)v28);
    GameConverge_8ea460(*(_QWORD*)(v2 + 176), (__int64)&v29_.v29,
                        *(unsigned __int8*)(a1 + 216), *(_QWORD*)(a1 + 240));
    GameConverge_8ea590(*(_QWORD*)(v2 + 176), (__int64)v28,
                        *(unsigned __int8*)(a1 + 216), *(_QWORD*)(a1 + 240));
    v3 = *(const char**)(*(_QWORD*)(a1 + 240) + 8LL);
    v4 = strlen_alt1(v3);
    if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0_alt1();
    }
    v5 = v4;
    if (v4 >= 0x17) {
      if ((v4 | 7) == 0x17) {
        v12 = 26;
      }
      else {
        v12 = (v4 | 7) + 1;
      }
      v6 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                      v12, 16, 0);
      v26_.v26[1] = v5;
      v26_.v27 = v6;
      v26_.v26[0] = v12 | 1;
    }
    else {
      LOBYTE(v26_.v26[0]) = 2 * v4;
      v6 = (char*)v26_.v26 + 1;
      if (v4 == 0) {
      LABEL_17:
        v6[v5] = 0;
        v25 = 0;
        v21_.v21 = GameData_207cb08;
        v21_.v22 = &v25;
        v21_.v24 = (__int64**)&v21_.v21;
        v21_.v23 = v26_.v26;
        GameConst_7f8610((__int64)&v21_.v21);
        if (v21_.v24 == (__int64**)&v21_.v21) {
          v13 = 4;
        }
        else {
          if (v21_.v24 == nullptr) {
          LABEL_22:
            if (v25 == 1) {
              v14 = *(_QWORD*)(a1 + 176);
              v21_.v21 = *(__int64 (***)(void))(a1 + 168);
              v21_.v22 = (char*)v14;
              if (v14 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16),
                                          1u, memory_order_relaxed);
              }
              v15 = 0;
            }
            else {
              v15 = *(unsigned __int8*)(a1 + 216);
              v16 = *(_QWORD*)(a1 + 176);
              v21_.v21 = *(__int64 (***)(void))(a1 + 168);
              v21_.v22 = (char*)v16;
              if (v16 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16),
                                          1u, memory_order_relaxed);
              }
            }
            ProcObeliskUnitMergeRouteSelectMenu_158c260(
                (__int64**)&v21_.v21, (__int64)&v29_.v29, (__int64)v28, v15, 0);
            if (v21_.v22 != nullptr) {
              std___1___shared_weak_count___release_weak((__int64)v21_.v22);
            }
            if ((v26_.v26[0] & 1) != 0 && v26_.v27 != nullptr) {
              v17 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v17 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                  (__int64)v26_.v27);
            }
            game_Unit_Destroy_Unit((__int64)v28);
            game_Unit_Destroy_Unit((__int64)&v29_.v29);
            goto LABEL_39;
          }
          v13 = 5;
        }
        ((void (*)(void*))(*v21_.v24)[v13])(v21_.v24);
        goto LABEL_22;
      }
    }
    memmove_alt1((__int64)v6, (__int64)v3, v5);
    goto LABEL_17;
  }
  v7 = *(_QWORD*)(a1 + 224);
  v8 = *(_QWORD*)(a1 + 232);
  v9 = *(unsigned __int8*)(a1 + 216);
  if (v7 == v8) {
    v11 = *(_QWORD*)(a1 + 176);
    v29_.v29 = *(_QWORD*)(a1 + 168);
    v29_.v30 = v11;
    if (v11 == 0) {
      ProcObeliskUnitMergeRouteSelectMenu_158ca00(&v29_.v29, v7, v9);
      goto LABEL_39;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    ProcObeliskUnitMergeRouteSelectMenu_158ca00(&v29_.v29, v7, v9);
  LABEL_38:
    std___1___shared_weak_count___release_weak(v11);
    goto LABEL_39;
  }
  v10 = *(_QWORD*)(a1 + 176);
  v29_.v29 = *(_QWORD*)(a1 + 168);
  v29_.v30 = v10;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
  }
  ProcObeliskUnitMergeRouteSelectMenu_158c260((__int64**)&v29_.v29, v7, v8, v9,
                                              0);
  v11 = v29_.v30;
  if (v29_.v30 != 0) {
    goto LABEL_38;
  }
LABEL_39:
  v18 = *(__int64**)(a1 + 168);
  LODWORD(v29_.v30) = 0;
  if (v18 != nullptr) {
    v19 = v18;
  }
  else {
    v19 = ui_LayoutAccessor_empty__ptr[0];
  }
  v29_.v29 = 0x438C000000000000LL;
  return ui_LayoutAccessor_SetTranslate(v19, (__int64)&v29_.v29);
}

__int64 CompareInfo_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)(a1 + 208) = GameData_207cad8;
  if (GameData_225d6f8 == a1) {
    GameData_225d6f8 = 0;
    GameData_225d700 = 0;
  }
  GameRoutine_15e5e00(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 CompareInfo_Destructor(_QWORD* a1)
{
  __int64 v1;

  *a1 = GameData_207cad8;
  v1 = (__int64)(a1 - 26);
  if (GameData_225d6f8 == v1) {
    GameData_225d6f8 = 0;
    GameData_225d700 = 0;
  }
  return GameRoutine_15e5e00(v1);
}

__int64 CompareInfo_DeletingDestructor_166cbd0(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;

  *a1 = GameData_207cad8;
  v1 = a1 - 26;
  if ((_QWORD*)GameData_225d6f8 == a1 - 26) {
    GameData_225d6f8 = 0;
    GameData_225d700 = 0;
  }
  GameRoutine_15e5e00((__int64)(a1 - 26));
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
}

void game_menu_CompareInfo_Build_lambda0_Invoke(__int64 a1, unsigned __int8* a2)
{
  unsigned __int8* v2;
  const char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  _BOOL4 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  struct {
    __int64 v16;
    unsigned __int64 v17;
    char* v18;
  } v16_;

  if ((**(_BYTE**)(a1 + 8) & 1) != 0) {
    return;
  }
  v2 = *(unsigned __int8**)(a1 + 16);
  v4 = (const char*)*(&game_g_hero_ids + *a2);
  v5 = strlen_alt1(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v8, 16, 0);
    v16_.v17 = v6;
    v16_.v18 = v7;
    v16_.v16 = v8 | 1;
  }
  else {
    LOBYTE(v16_.v16) = 2 * v5;
    v7 = (char*)&v16_.v16 + 1;
    if (v5 == 0) {
      goto LABEL_11;
    }
  }
  memmove_alt1((__int64)v7, (__int64)v4, v6);
LABEL_11:
  v7[v6] = 0;
  v9 = false;
  v10 = *v2;
  if ((v10 & 1) != 0) {
    v11 = *((_QWORD*)v2 + 1);
  }
  else {
    v11 = v10 >> 1;
  }
  v12 = v16_.v17;
  if ((v16_.v16 & 1) == 0) {
    v12 = (unsigned __int64)(unsigned __int8)v16_.v16 >> 1;
  }
  if (v11 == v12) {
    if ((v10 & 1) != 0) {
      v13 = *((_QWORD*)v2 + 2);
    }
    else {
      v13 = (__int64)(v2 + 1);
    }
    if ((v16_.v16 & 1) != 0) {
      v14 = v16_.v18;
    }
    else {
      v14 = (char*)&v16_.v16 + 1;
    }
    v9 = memcmp_alt1(v13, (__int64)v14, v11) == 0;
  }
  if ((v16_.v16 & 1) != 0 && v16_.v18 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, (__int64)v16_.v18);
  }
  if (v9) {
    **(_BYTE**)(a1 + 8) = 1;
  }
}

#pragma GCC visibility pop
