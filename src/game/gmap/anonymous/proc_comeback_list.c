#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1657240(_QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131ac8[5];
__int64 ProcComebackList_Destructor(_QWORD* a1);
__int64 ProcComebackList_DeletingDestructor(_QWORD* a1);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_16f0e40(__int64, __int64);
__int64 SpotMgr_132ffa0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_gmap_anonymous_ComebackMenuItem_vtable[])();
extern __int64 GameData_212cf80[5];
extern __int64* GameData_212c780;
extern __int64* GameData_212ceb0;
extern char GameData_1a9f09e;
_QWORD* game_gmap_anonymous_ProcComebackList_AddItemList_closure_Invoke_alt1(
    _QWORD* result,
    unsigned int* a2) __asm__("game_gmap_anonymous_ProcComebackList_"
                              "AddItemList_closure_Invoke");
__int64 game_gmap_anonymous_ProcComebackList_SortAndFilter_closure_Invoke(
    __int64 a1, unsigned __int8** a2);
_QWORD* game_16f1350(_QWORD*, __int64, char);
bool LegionPool_9374e0(_QWORD*, __int64);
extern __int64 (*GameData_20a2560[])();
extern __int64 GameData_21f4280;
extern __int64 GameData_225e7a0;
extern __int64 game_gameui_MenuAnimator_instance_;
__int64 ProcComebackList_Unknown124(_QWORD* a1);
__int64 ProcComebackList_Unknown128(_QWORD* a1);
__int64 GameHr_16f0e40(__int64, __int64);
__int64 SpotMgr_132ffa0_alt1(unsigned int*) __asm__("SpotMgr_132ffa0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void game_gmap_anonymous_ProcComebackList_AddItemList_closure_Invoke(
    __int64 a1, unsigned int* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 BasicMenu_16dd280(_QWORD*);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameHr_167f810(__int64, int, __int64, __int64, int, __int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 (*GameData_20a2268[])();
extern __int64 (*GameData_20a25e0[])();
extern __int64 (*GameData_20a2660[])();
extern __int64 GameData_21ca060;
void BasicMenu_16e1f40(_QWORD*, __int64, __int64);
void GameHr_1651c40(__int64, __int64);
void GameRoutine_167fe20(__int64, __int64);
void GmapSpotInfoSetterForGmap_1657240(__int64*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 (***game_gmap_anonymous_ProcComebackList_OnBuild(_QWORD* a1))();
char* ProcComebackList_Unknown88(_QWORD* a1);
__int64 game_gmap_anonymous_ProcComebackList_SortAndFilter(__int64 a1);

__int64 ProcComebackList_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  a1[133] = GameData_2131ac8[0] + 2;
  v2 = a1[142];
  a1[142] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  if (a1[138] != 0) {
    GameRoutine_1657240(a1 + 138);
    v3 = a1[138];
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  v5 = a1[135];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

__int64 ProcComebackList_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  a1[133] = GameData_2131ac8[0] + 2;
  v2 = a1[142];
  a1[142] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = fw_memory_g_heap_manager_ptr;
  if (a1[138] != 0) {
    GameRoutine_1657240(a1 + 138);
    v4 = a1[138];
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, v4);
    }
  }
  v6 = a1[135];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, a1);
}

__int64 (***game_gmap_anonymous_ProcComebackList_OnBuild(_QWORD* a1))()
{
  __int64* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 (***result)();
  int v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 (**v19)();
    _QWORD* v20;
    char gap16_[16];
    __int64 (***v21)();
  } v19_;
  _QWORD v22[3];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = a1 + 106;
  v2 = a1;
  LayoutAccessor_1560070((void*)(&v19_.v19), a1 + 106, "L_Img"),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v19_.v20 != nullptr) {
    v3 = std___1___shared_weak_count_lock((__int64)v19_.v20),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v4 = (__int64)v19_.v19;
    if (v19_.v20 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v19_.v20),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (v3 == 0 || v4 == 0) {
      if (v3 == 0) {
        goto LABEL_12;
      }
    }
    else {
      LayoutAccessor_1562cf0(v4, (unsigned int*)"Img02"),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v3),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
LABEL_12:
  v6 = v2[107];
  if (v6 != 0) {
    v7 = std___1___shared_weak_count_lock(v6),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v7 != 0) {
      v8 = v7;
      if (*v1 != 0) {
        ControlCreator_13633c0(*v1),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v8),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  v9 = (_QWORD*)v2[19];
  v10 = BasicMenu_16dd280(v2),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19_.v19 = GameData_20a2268;
  v19_.v20 = v2;
  v19_.v21 = &v19_.v19;
  if (GameData_225e7a0 != 0) {
    v12 = 4;
    result = &v19_.v19;
    return (__int64 (***)(void))(
        (__int64 (*)(__int64 (***)(void), __int64))(*result)[v12])(result, v11);
  }
  v14 = v10;
  v15 = fw_memory_g_heap_manager_ptr;
  if (v9 != nullptr) {
    v2 = v9;
  }
  v16 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *v16 = 0;
  v17 = (__int64)v16;
  v22[0] = v16;
  v22[1] = v16 + 1;
  v22[2] = v16 + 1;
  GameHr_167f810((__int64)v2, 9, (__int64)v22, 0, v14, (__int64)&v19_.v19),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = 128;
  if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
    v18 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v15 + v18, v17),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = v19_.v21;
  if (v19_.v21 == &v19_.v19) {
    v12 = 4;
    return (__int64 (***)(void))(
        (__int64 (*)(__int64 (***)(void), __int64))(*result)[v12])(result, v11);
  }
  if (v19_.v21 != nullptr) {
    v12 = 5;
    return (__int64 (***)(void))(
        (__int64 (*)(__int64 (***)(void), _QWORD))(*result)[v12])(result, v11);
  }
  return result;
}

char* ProcComebackList_Unknown88(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64* v4;
  unsigned int v5;
  bool v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  char* result;
  struct {
    __int64* v17;
    __int64 v18;
  } v17_;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;
  struct {
    __int64* v21;
    char* v22;
  } v21_;

  v1 = a1[42];
  if (v1 != 0 &&
      *(__int64 (***)(void))v1 == game_gmap_anonymous_ComebackMenuItem_vtable &&
      ((int)(v3 = *(unsigned int*)(v1 + 40)) >= 0
           ? (v4 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                        GameData_212cf80[0] +
                                                    8LL) +
                                         48LL) +
                              8 * v3))
           : (v4 = GameData_212ceb0),
       (v5 = *((_DWORD*)v4 + 1)) != 0 ? (v6 = *GameData_212c780 == 0)
                                      : (v6 = true),
       !v6)) {
    v21_.v21 = (__int64*)v5;
    v21_.v22 = &GameData_1a9f09e;
    v11 = SpotMgr_132ffa0_alt1((unsigned int*)&v21_.v21);
  }
  else {
    v11 = 0;
  }
  if (GameData_225e7a0 != 0) {
    GameRoutine_167fe20(GameData_225e7a0, v11);
  }
  LayoutAccessor_1560070((void*)(&v21_.v21), a1 + 106, "L_DispatchDetail");
  if (v21_.v22 != nullptr) {
    v7 = std___1___shared_weak_count_lock((__int64)v21_.v22);
    v8 = v21_.v21;
    if (v21_.v22 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v21_.v22);
    }
    if (v7 != 0 && v8 != nullptr) {
      LayoutAccessor_1560070((void*)(&v19_.v19), v8, "L_Dispatch");
      if (v11 != 0 &&
          ((*(__int64 (**)(_QWORD*, __int64))(a1[133] + 16LL))(a1 + 133, v11) &
           1) != 0) {
        v9 = v19_.v20;
        if (v19_.v20 != 0) {
          v9 = std___1___shared_weak_count_lock(v19_.v20);
          v10 = v19_.v19;
          if (v9 == 0) {
            v10 = 0;
          }
        }
        else {
          v10 = 0;
        }
        v12 = a1[135];
        a1[134] = v10;
        a1[135] = v9;
        if (v12 != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak_alt1(v12);
          }
          v10 = a1[134];
        }
        if (v10 != 0) {
          a1[136] = v11;
          GmapSpotInfoSetterForGmap_1657240(a1 + 138);
          (*(void (**)(_QWORD*))(a1[133] + 24LL))(a1 + 133);
        }
      }
      if (v19_.v20 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v19_.v20);
      }
      LayoutAccessor_155e830((__int64)v8, v11 != 0);
    }
    else if (v7 == 0) {
      goto LABEL_39;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt1(v7);
    }
  }
LABEL_39:
  LayoutAccessor_1560070((void*)(&v21_.v21), a1 + 106, "L_Img");
  if (v21_.v22 != nullptr &&
      (v13 = std___1___shared_weak_count_lock((__int64)v21_.v22)) != 0) {
    v14 = v13;
    v15 = 0;
    v17_.v17 = v21_.v21;
    v17_.v18 = v13;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v14 = 0;
    v17_.v17 = nullptr;
    v17_.v18 = 0;
    v15 = 1;
  }
  GameHr_1651c40((__int64)&v17_.v17, v11);
  if (v17_.v18 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v17_.v18);
  }
  if ((v15 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak_alt1(v14);
  }
  result = v21_.v22;
  if (v21_.v22 != nullptr) {
    return (char*)std___1___shared_weak_count___release_weak_alt1(
        (__int64)v21_.v22);
  }
  return result;
}

__int64 ProcComebackList_Unknown124(_QWORD* a1)
{
  char v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  bool v15;
  char v16;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 472LL))(a1) & 1) != 0) {
    goto LABEL_2;
  }
  v3 = (__int64*)a1[74];
  v4 = (__int64*)a1[75];
  if (v3 == v4) {
    goto LABEL_43;
  }
  do {
    while (1) {
      v5 = *v3;
      if (*v3 != -1 && game_gameui_MenuAnimator_instance_ != 0) {
        break;
      }
      if (++v3 == v4) {
        goto LABEL_43;
      }
    }
    v15 = v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360);
    v16 = v15;
    if (v15) {
      break;
    }
    ++v3;
  } while (v3 != v4);
  if ((v16 & 1) != 0) {
  LABEL_2:
    v2 = 0;
  }
  else {
  LABEL_43:
    v2 = GameData_225e7a0;
    if (GameData_225e7a0 != 0) {
      v2 = *(_BYTE*)(GameData_225e7a0 + 408);
    }
  }
  return v2 & 1;
}

__int64 ProcComebackList_Unknown128(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;
  int v6;

  game_16f1350(a1, 0, 1);
  v6 = 0;
  v4_.v4[0] = GameData_20a2560;
  v4_.v4[1] = a1;
  v4_.v4[2] = &v6;
  v4_.v5 = v4_.v4;
  LegionPool_9374e0(*(_QWORD**)(GameData_21f4280 + 8), (__int64)v4_.v4);
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

__int64 game_gmap_anonymous_ProcComebackList_SortAndFilter(__int64 a1)
{
  int v1;
  __int64 v2;
  _QWORD* v4;
  _QWORD* v5;
  int v6;
  bool v7;
  _BYTE* v8;
  __int64 v9;
  bool v10;
  _BYTE* v11;
  int v12;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 result;
  __int64 v25;
  struct {
    _QWORD v26[4];
    _QWORD* v27;
  } v26_;
  struct {
    _QWORD v28[4];
    _QWORD* v29;
  } v28_;
  struct {
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v30_;

  v1 = *(_DWORD*)(a1 + 660);
  v2 = *(_QWORD*)(a1 + 672);
  if (v1 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v2) >> 2)) {
    v1 = *(_DWORD*)(v2 + 4LL * v1);
  }
  v4 = *(_QWORD**)(a1 + 256);
  v5 = *(_QWORD**)(a1 + 264);
  if (v4 != v5) {
    v6 = (unsigned __int8)v1;
    if ((_BYTE)v1 != 0) {
      while (1) {
        v11 = (_BYTE*)*v4;
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 560LL))(*v4) & 1) == 0) {
          v10 = true;
          goto LABEL_12;
        }
        v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21ca060 + 64) +
                                   8LL * *(unsigned __int8*)(*(__int64 (**)(
                                             _BYTE*))(*(_QWORD*)v11 + 584LL))(
                                             v11)) +
                        64LL);
        if (v9 != 0) {
          v12 = *(unsigned __int8*)(v9 + 250);
          if (v12 <= 9) {
            if (v12 == 7) {
              LODWORD(v9) = 1;
            }
            else {
              if (v12 != 8) {
              LABEL_27:
                LODWORD(v9) = 0;
                goto LABEL_11;
              }
              LODWORD(v9) = 2;
            }
          }
          else if (v12 == 10 || v12 == 31) {
            LODWORD(v9) = 3;
          }
          else {
            if (v12 != 42) {
              goto LABEL_27;
            }
            LODWORD(v9) = 4;
          }
        }
      LABEL_11:
        v10 = (_DWORD)v9 == v6;
      LABEL_12:
        ++v4;
        v11[84] = v10;
        if (v4 == v5) {
          goto LABEL_28;
        }
      }
    }
    do {
      v8 = (_BYTE*)*v4;
      v7 = ((*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 560LL))(*v4) & 1) == 0 ||
           *(_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v8 + 584LL))(v8) != 0;
      ++v4;
      v8[84] = v7;
    } while (v4 != v5);
  }
LABEL_28:
  v14 = *(_QWORD**)(a1 + 256);
  v15 = *(_QWORD**)(a1 + 264);
  v30_.v31 = 0;
  v30_.v32 = 0;
  v30_.v30 = 0;
  if (v14 == v15) {
    v21 = 0;
    v22 = 0;
    v20 = 0;
    v19 = 0;
    v18 = 0;
    v17 = 0;
  }
  else {
    do {
      v16 = *v14;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v14 + 560LL))(*v14) & 1) != 0 &&
          *(_BYTE*)(v16 + 84) == 1) {
        ++*((_DWORD*)&v30_.v30 + *(unsigned __int8*)(v16 + 83));
      }
      ++v14;
    } while (v14 != v15);
    v17 = v30_.v30;
    v18 = HIDWORD(v30_.v30);
    v19 = v30_.v31;
    v20 = HIDWORD(v30_.v31);
    v22 = v30_.v32;
    v21 = HIDWORD(v30_.v32);
  }
  if (v21 + v22 + v20 + v19 + v17 + v18 == 0) {
    LODWORD(v30_.v30) = v17 + 1;
  }
  v28_.v28[0] = GameData_20a25e0;
  v28_.v28[1] = &v30_.v30;
  v26_.v27 = v26_.v26;
  v28_.v29 = v28_.v28;
  v26_.v26[0] = GameData_20a2660;
  BasicMenu_16e1f40((_QWORD*)a1, (__int64)v28_.v28, (__int64)v26_.v26);
  if (v26_.v27 == v26_.v26) {
    v23 = 32;
  }
  else {
    if (v26_.v27 == nullptr) {
      goto LABEL_43;
    }
    v23 = 40;
  }
  (*(void (**)(__int64))(*v26_.v27 + v23))((__int64)v26_.v27);
LABEL_43:
  result = (__int64)v28_.v29;
  if (v28_.v29 == v28_.v28) {
    v25 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      return result;
    }
    v25 = 40;
  }
  return (*(__int64 (**)(__int64))(*v28_.v29 + v25))((__int64)v28_.v29);
}

void game_gmap_anonymous_ProcComebackList_AddItemList_closure_Invoke(
    __int64 a1, unsigned int* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  unsigned int v6;
  __int64* v7;
  _QWORD* v9;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  struct {
    unsigned int v18[2];
    char* v19;
  } v18_;

  v2 = *a2;
  v3 = GameData_212cf80[0];
  v4 = GameData_212ceb0;
  v5 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                             48LL) +
                  8LL * (unsigned int)v2);
  if ((int)v2 < 0) {
    v5 = GameData_212ceb0;
  }
  v6 = *((_DWORD*)v5 + 1);
  v7 = GameData_212c780;
  if (v6 != 0 && *GameData_212c780 != 0) {
    v9 = *(_QWORD**)(a1 + 8);
    v18_.v18[0] = v6;
    v18_.v18[1] = 0;
    v18_.v19 = &GameData_1a9f09e;
    if (SpotMgr_132ffa0_alt1(v18_.v18) != 0) {
      v11 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
      v12 = 0;
      v13 = **(_DWORD**)(a1 + 16);
      *(_DWORD*)(v11 + 80) = 16843009;
      *(_WORD*)(v11 + 16) = 0;
      *(_QWORD*)(v11 + 48) = 0;
      *(_QWORD*)(v11 + 56) = 0;
      *(_QWORD*)(v11 + 64) = 0;
      *(_QWORD*)(v11 + 72) = 0;
      *(_BYTE*)(v11 + 84) = 0;
      *(_DWORD*)(v11 + 40) = v2;
      v14 = *v7;
      *(_DWORD*)(v11 + 88) = v13;
      *(_QWORD*)v11 = game_gmap_anonymous_ComebackMenuItem_vtable;
      *(_QWORD*)(v11 + 8) = 0;
      if ((int)v2 >= 0) {
        v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 48LL) + 8 * v2;
      }
      else {
        v15 = (__int64)v4;
      }
      v16 = *(_DWORD*)(v15 + 4);
      if (v16 != 0 && v14 != 0) {
        v18_.v19 = &GameData_1a9f09e;
        v18_.v18[0] = v16;
        v18_.v18[1] = 0;
        v12 = SpotMgr_132ffa0_alt1(v18_.v18);
      }
      *(_BYTE*)(v11 + 83) = GameHr_16f0e40(v15, v12);
      BasicMenuCursor_16e0c00_alt1(v9, v11);
      ++**(_DWORD**)(a1 + 16);
    }
  }
}

__int64 game_gmap_anonymous_ProcComebackList_SortAndFilter_closure_Invoke(
    __int64 a1, unsigned __int8** a2)
{
  unsigned __int8* v2;
  int* v3;
  int v4;
  unsigned __int8 v5;

  v2 = *a2;
  v3 = *(int**)(a1 + 8);
  if (((*(__int64 (**)(unsigned __int8*))(*(_QWORD*)*a2 + 568LL))(*a2) & 1) !=
      0) {
    v4 = v3[v2[83]];
  }
  else {
    if (((*(__int64 (**)(unsigned __int8*))(*(_QWORD*)v2 + 576LL))(v2) & 1) ==
        0) {
      v5 = v2[84];
      return v5 & 1;
    }
    v4 = *v3;
  }
  v5 = v4 > 0;
  return v5 & 1;
}

#pragma GCC visibility pop
