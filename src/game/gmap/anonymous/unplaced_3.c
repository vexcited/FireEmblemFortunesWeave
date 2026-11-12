#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void Pane_58dfa0(PSEUDO_X8, __int64);
__int64* ProcGmapCarriageList_168c5c0(__int64* result, __int64*, __int64*,
                                      __int64, __int64, __int64*, __int64);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameHr_1562680(__int64 result, unsigned int*, float);
__int64 GameHr_168c360(__int64 result, _QWORD*, unsigned __int64, _QWORD*);
__int64 GameRoutine_1685800(__int64*, unsigned __int8);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_1010060(__int64, __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
bool LayoutAccessor_1563380(__int64*, __int64, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern _BYTE GameData_1bee1cc[80];
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e348;
extern __int64* game_g_empty_item_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_20b33d8;
extern __int64 GameData_212d690;
extern __int64 GameData_21c96e8;
extern __int64 GameData_225e7a0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 ui_LayoutAccessor_empty_;
extern char* GameData_1fafc88[8];
extern char** msg_MessageManager_empty_text__ptr;
float Pane_58e030(__int64);
float ui_LayoutAccessor_SetPaneTranslate(__int64*, const char*, __int64);
float32x4_t* GameRoutine_156c240(float32x4_t* result);
unsigned __int64 LayoutAccessor_1562b50(__int64*, const char*);
unsigned __int64 strlen(const char*);
void* GameHr_67ed20(_QWORD*);
void* game_97b2f0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64 result, const char*, int, ...);
void LayoutAccessor_1562060(__int64*, const char*, const char*);
void __attribute__((noreturn)) String_60a1d0();
void game_menu_GameMenuItem_PlayCursorAnimation(_QWORD*);
void game_menu_GameMenuItem_PlayIdleAnimation(_QWORD*);
void game_menu_GameMenuItem_PlaySelectedAnimation(_QWORD*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_gmap_anonymous_1643ff0(_QWORD* a1);
void game_gmap_anonymous_1644260(_QWORD* a1);
void game_gmap_anonymous_16444d0(_QWORD* a1);
void game_gmap_anonymous_1644d80(__int64 a1);
__int64 game_gmap_anonymous_168ad00(__int64 a1);
__int64* game_gmap_anonymous_168c0a0(__int64* result, __int64* a2,
                                     unsigned __int64 a3, __int64* a4,
                                     __int64 a5);
void game_gmap_anonymous_172f060(__int64* a1);

void game_gmap_anonymous_1643ff0(_QWORD* a1)
{
  const char* v2;
  char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  const char* v15;
  char* v16;
  __int64* v17;
  unsigned int* v18;
  __int64 v19;
  struct {
    __int64* v20;
    __int64 v21;
  } v20_;
  struct {
    __int64 v22;
    __int64 v23;
    char* v24;
  } v22_;

  game_menu_GameMenuItem_PlayIdleAnimation(a1);
  v2 = (const char*)(*(__int64 (**)(_QWORD*))(*a1 + 552LL))(a1);
  v3 = game_util_Format("%sDefault", v2);
  v4 = strlen(v3);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v22_.v23 = v5;
    v22_.v24 = v6;
    v22_.v22 = v7 | 1;
    goto LABEL_9;
  }
  LOBYTE(v22_.v22) = 2 * v4;
  v6 = (char*)&v22_.v22 + 1;
  if (v4 != 0) {
  LABEL_9:
    memmove((__int64)v6, (__int64)v3, v5);
  }
  v6[v5] = 0;
  v8 = a1[7];
  if (v8 == 0) {
    goto LABEL_14;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_14;
  }
  v10 = v9;
  v11 = (atomic_ullong*)(v9 + 8);
  v12 = (__int64*)a1[6];
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v12 != nullptr) {
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v17 = v12;
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak(v10);
  v12 = v17;
  if (v17 == nullptr) {
  LABEL_14:
    v12 = &ui_LayoutAccessor_empty_;
  }
LABEL_15:
  LayoutAccessor_1560070((void*)(&v20_.v20), v12, "L_Taste");
  if (v20_.v21 == 0) {
    goto LABEL_37;
  }
  v13 = std___1___shared_weak_count_lock(v20_.v21);
  v14 = v20_.v20;
  if (v20_.v21 != 0) {
    std___1___shared_weak_count___release_weak(v20_.v21);
  }
  if (v13 != 0 && v14 != nullptr) {
    if ((v22_.v22 & 1) != 0) {
      v15 = v22_.v24;
    }
    else {
      v15 = (char*)&v22_.v22 + 1;
    }
    if ((LayoutAccessor_1562b50(v14, v15) & 1) == 0) {
      if ((v22_.v22 & 1) != 0) {
        v22_.v23 = 7;
        v16 = v22_.v24;
      }
      else {
        LOBYTE(v22_.v22) = 14;
        v16 = (char*)&v22_.v22 + 1;
      }
      strcpy(v16, "Default");
    }
    if ((v22_.v22 & 1) != 0) {
      v18 = (unsigned int*)v22_.v24;
    }
    else {
      v18 = (unsigned int*)((char*)&v22_.v22 + 1);
    }
    GameHr_1562680((__int64)v14, v18, 0x1.0000000000000p+0f);
  }
  else if (v13 == 0) {
    goto LABEL_37;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
    if ((v22_.v22 & 1) == 0) {
      return;
    }
    goto LABEL_38;
  }
LABEL_37:
  if ((v22_.v22 & 1) == 0) {
    return;
  }
LABEL_38:
  if (v22_.v24 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19,
                                  (__int64)v22_.v24);
  }
}

void game_gmap_anonymous_1644260(_QWORD* a1)
{
  const char* v2;
  char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  const char* v15;
  char* v16;
  __int64* v17;
  unsigned int* v18;
  __int64 v19;
  struct {
    __int64* v20;
    __int64 v21;
  } v20_;
  struct {
    __int64 v22;
    __int64 v23;
    char* v24;
  } v22_;

  game_menu_GameMenuItem_PlayCursorAnimation(a1);
  v2 = (const char*)(*(__int64 (**)(_QWORD*))(*a1 + 552LL))(a1);
  v3 = game_util_Format("%sSelect", v2);
  v4 = strlen(v3);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v22_.v23 = v5;
    v22_.v24 = v6;
    v22_.v22 = v7 | 1;
    goto LABEL_9;
  }
  LOBYTE(v22_.v22) = 2 * v4;
  v6 = (char*)&v22_.v22 + 1;
  if (v4 != 0) {
  LABEL_9:
    memmove((__int64)v6, (__int64)v3, v5);
  }
  v6[v5] = 0;
  v8 = a1[7];
  if (v8 == 0) {
    goto LABEL_14;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_14;
  }
  v10 = v9;
  v11 = (atomic_ullong*)(v9 + 8);
  v12 = (__int64*)a1[6];
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v12 != nullptr) {
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v17 = v12;
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak(v10);
  v12 = v17;
  if (v17 == nullptr) {
  LABEL_14:
    v12 = &ui_LayoutAccessor_empty_;
  }
LABEL_15:
  LayoutAccessor_1560070((void*)(&v20_.v20), v12, "L_Taste");
  if (v20_.v21 == 0) {
    goto LABEL_37;
  }
  v13 = std___1___shared_weak_count_lock(v20_.v21);
  v14 = v20_.v20;
  if (v20_.v21 != 0) {
    std___1___shared_weak_count___release_weak(v20_.v21);
  }
  if (v13 != 0 && v14 != nullptr) {
    if ((v22_.v22 & 1) != 0) {
      v15 = v22_.v24;
    }
    else {
      v15 = (char*)&v22_.v22 + 1;
    }
    if ((LayoutAccessor_1562b50(v14, v15) & 1) == 0) {
      if ((v22_.v22 & 1) != 0) {
        v22_.v23 = 6;
        v16 = v22_.v24;
      }
      else {
        LOBYTE(v22_.v22) = 12;
        v16 = (char*)&v22_.v22 + 1;
      }
      strcpy(v16, "Select");
    }
    if ((v22_.v22 & 1) != 0) {
      v18 = (unsigned int*)v22_.v24;
    }
    else {
      v18 = (unsigned int*)((char*)&v22_.v22 + 1);
    }
    GameHr_1562680((__int64)v14, v18, 0x1.0000000000000p+0f);
  }
  else if (v13 == 0) {
    goto LABEL_37;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
    if ((v22_.v22 & 1) == 0) {
      return;
    }
    goto LABEL_38;
  }
LABEL_37:
  if ((v22_.v22 & 1) == 0) {
    return;
  }
LABEL_38:
  if (v22_.v24 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19,
                                  (__int64)v22_.v24);
  }
}

void game_gmap_anonymous_16444d0(_QWORD* a1)
{
  const char* v2;
  char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  const char* v15;
  char* v16;
  __int64* v17;
  unsigned int* v18;
  __int64 v19;
  struct {
    __int64* v20;
    __int64 v21;
  } v20_;
  struct {
    __int64 v22;
    __int64 v23;
    char* v24;
  } v22_;

  game_menu_GameMenuItem_PlaySelectedAnimation(a1);
  v2 = (const char*)(*(__int64 (**)(_QWORD*))(*a1 + 552LL))(a1);
  v3 = game_util_Format("%sDecide", v2);
  v4 = strlen(v3);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v22_.v23 = v5;
    v22_.v24 = v6;
    v22_.v22 = v7 | 1;
    goto LABEL_9;
  }
  LOBYTE(v22_.v22) = 2 * v4;
  v6 = (char*)&v22_.v22 + 1;
  if (v4 != 0) {
  LABEL_9:
    memmove((__int64)v6, (__int64)v3, v5);
  }
  v6[v5] = 0;
  v8 = a1[7];
  if (v8 == 0) {
    goto LABEL_14;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_14;
  }
  v10 = v9;
  v11 = (atomic_ullong*)(v9 + 8);
  v12 = (__int64*)a1[6];
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v12 != nullptr) {
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v17 = v12;
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak(v10);
  v12 = v17;
  if (v17 == nullptr) {
  LABEL_14:
    v12 = &ui_LayoutAccessor_empty_;
  }
LABEL_15:
  LayoutAccessor_1560070((void*)(&v20_.v20), v12, "L_Taste");
  if (v20_.v21 == 0) {
    goto LABEL_37;
  }
  v13 = std___1___shared_weak_count_lock(v20_.v21);
  v14 = v20_.v20;
  if (v20_.v21 != 0) {
    std___1___shared_weak_count___release_weak(v20_.v21);
  }
  if (v13 != 0 && v14 != nullptr) {
    if ((v22_.v22 & 1) != 0) {
      v15 = v22_.v24;
    }
    else {
      v15 = (char*)&v22_.v22 + 1;
    }
    if ((LayoutAccessor_1562b50(v14, v15) & 1) == 0) {
      if ((v22_.v22 & 1) != 0) {
        v22_.v23 = 6;
        v16 = v22_.v24;
      }
      else {
        LOBYTE(v22_.v22) = 12;
        v16 = (char*)&v22_.v22 + 1;
      }
      strcpy(v16, "Decide");
    }
    if ((v22_.v22 & 1) != 0) {
      v18 = (unsigned int*)v22_.v24;
    }
    else {
      v18 = (unsigned int*)((char*)&v22_.v22 + 1);
    }
    GameHr_1562680((__int64)v14, v18, 0x1.0000000000000p+0f);
  }
  else if (v13 == 0) {
    goto LABEL_37;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
    if ((v22_.v22 & 1) == 0) {
      return;
    }
    goto LABEL_38;
  }
LABEL_37:
  if ((v22_.v22 & 1) == 0) {
    return;
  }
LABEL_38:
  if (v22_.v24 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19,
                                  (__int64)v22_.v24);
  }
}

void game_gmap_anonymous_1644d80(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  unsigned __int8* v4;
  __int64 v5;
  __int64 v6;
  atomic_ullong* v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  atomic_ullong* v16;
  __int64* v17;
  __int64* v18;
  __int64* v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  atomic_ullong* v26;
  __int64* v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  struct {
    __int64* v32;
    __int64 v33;
  } v32_;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 480LL))(a1) & 1) != 0) {
    return;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 480LL))(a1) & 1) != 0) {
    v2 = game_g_empty_item_ptr;
  }
  else {
    v2 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                             game_TransporterConst_List_instance__ptr
                                                 [0] +
                                         8LL) +
                              8LL) +
                   12LL * *(int*)(a1 + 40) + 4);
  }
  v3 = *(_QWORD*)(a1 + 56);
  v4 = *(unsigned __int8**)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                            8LL * *(unsigned __int16*)v2);
  if (v3 == 0) {
    goto LABEL_9;
  }
  v5 = std___1___shared_weak_count_lock(v3);
  if (v5 == 0) {
    goto LABEL_9;
  }
  v6 = v5;
  v7 = (atomic_ullong*)(v5 + 8);
  v8 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v8 != nullptr) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  v18 = v8;
  (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
  std___1___shared_weak_count___release_weak(v6);
  v8 = v18;
  if (v18 == nullptr) {
  LABEL_9:
    v8 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_10:
  LayoutAccessor_1560070((void*)(&v32_.v32), v8, "L_Taste");
  if (v32_.v33 == 0) {
    goto LABEL_22;
  }
  v9 = std___1___shared_weak_count_lock(v32_.v33);
  v10 = v32_.v32;
  if (v32_.v33 != 0) {
    std___1___shared_weak_count___release_weak(v32_.v33);
  }
  if (v9 != 0 && v10 != nullptr) {
    v11 = v4[95];
    if (v11 == 4) {
      v12 = nullptr;
    }
    else {
      v12 = GameData_1fafc88[v11];
    }
    LayoutAccessor_1562060(v10, "T_Taste", v12);
  }
  else if (v9 == 0) {
  LABEL_22:
    v13 = *(_QWORD*)(a1 + 56);
    if (v13 == 0) {
      goto LABEL_32;
    }
    goto LABEL_23;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_22;
  }
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak(v9);
  v13 = *(_QWORD*)(a1 + 56);
  if (v13 == 0) {
    goto LABEL_32;
  }
LABEL_23:
  v14 = std___1___shared_weak_count_lock(v13);
  if (v14 != 0) {
    v15 = v14;
    v16 = (atomic_ullong*)(v14 + 8);
    v17 = *(__int64**)(a1 + 48);
    if (atomic_fetch_add(v16, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v17 != nullptr) {
        goto LABEL_33;
      }
    }
    else {
      v19 = v17;
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
      v17 = v19;
      if (v19 != nullptr) {
        goto LABEL_33;
      }
    }
  }
LABEL_32:
  v17 = ui_LayoutAccessor_empty__ptr[0];
LABEL_33:
  v20 = v4[97];
  v21 = ui_LayoutAccessor_FindPane(v17, "T_NumHP");
  if (v21 != 0) {
    v22 = __dynamic_cast(v21, GameData_212d670[0], GameData_212d690, 0);
    if (v22 != 0) {
      GameRoutine_156c910(v22, "%d", 1, v20);
    }
  }
  v23 = *(_QWORD*)(a1 + 56);
  if (v23 == 0) {
    goto LABEL_40;
  }
  v24 = std___1___shared_weak_count_lock(v23);
  if (v24 == 0) {
    goto LABEL_40;
  }
  v25 = v24;
  v26 = (atomic_ullong*)(v24 + 8);
  v27 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v26, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v27 != nullptr) {
      goto LABEL_41;
    }
    goto LABEL_40;
  }
  v31 = v27;
  (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
  std___1___shared_weak_count___release_weak(v25);
  v27 = v31;
  if (v31 == nullptr) {
  LABEL_40:
    v27 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_41:
  v28 = v4[98];
  v29 = ui_LayoutAccessor_FindPane(v27, "T_NumMagic");
  if (v29 != 0) {
    v30 = __dynamic_cast(v29, GameData_212d670[0], GameData_212d690, 0);
    if (v30 != 0) {
      GameRoutine_156c910(v30, "%d", 1, v28);
    }
  }
}

__int64 game_gmap_anonymous_168ad00(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int8 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  char v13;
  int v14;
  bool v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64* v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  float v31;
  char v32;
  char v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  float v40;
  bool v42;
  bool v44;
  bool v46;
  bool v48;
  char v49;
  struct {
    __int64 v50;
    float v51;
    float v52;
  } v50_;
  float32x4_t v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;

  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
  if (*(_QWORD*)a1 == *(_QWORD*)(GameData_225e7a0 + 352)) {
    v7 = 1;
    goto LABEL_11;
  }
  if (GameData_1bee1cc[8 * *(int*)(GameData_225e7a0 + 184) + 1] != 1) {
    goto LABEL_10;
  }
  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64**)(v1 + 8);
  v4 = *(__int64**)(v1 + 16);
  if (v2 < 0) {
    for (; v3 != v4; ++v3) {
      v5 = *v3;
      if (*(_QWORD*)(*v3 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
        goto LABEL_21;
      }
    }
  LABEL_10:
    v7 = 0;
    goto LABEL_11;
  }
  if (v3 == v4) {
    goto LABEL_10;
  }
  while (1) {
    v6 = *v3++;
    v5 = v6;
    if (*(_DWORD*)(v6 + 84) == v2) {
      break;
    }
    if (v3 == v4) {
      goto LABEL_10;
    }
  }
LABEL_21:
  v14 = *(_DWORD*)(v5 + 540);
  v15 = __OFSUB__(v14, 1);
  v16 = (unsigned int)(v14 - 1);
  if (((v16 & 0x80000000) != 0LL) == v15) {
    v17 = *(_QWORD*)(v5 + 24);
    v18 = *(_QWORD*)(v5 + 32) - v17;
    v19 = v17 + 8LL * (unsigned int)v16;
    if (v16 < v18 >> 3) {
      v5 = v19;
    }
  }
  v7 = *(_QWORD*)v5 == *(_QWORD*)a1;
LABEL_11:
  if (*(_DWORD*)(a1 + 92) == 2 && *(_QWORD*)(a1 + 48) != 0) {
    v8 = a1;
    v9 = std___1___shared_weak_count_lock(*(_QWORD*)(a1 + 48)),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
    a1 = v8;
    if (v9 != 0) {
      v10 = *(__int64**)(v8 + 40);
      if (v10 != nullptr) {
        if ((v7 & 1) != 0) {
          v11 = ui_LayoutAccessor_FindPane(*(__int64**)(GameData_225e7a0 + 168),
                                           "N_UnitAll"),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
          v12 = v11;
          if (v11 != 0) {
            v13 = *(_BYTE*)(v11 + 88) & 1;
            *(_BYTE*)(v11 + 88) |= 1u;
            v49 = *(_BYTE*)(v11 + 89);
            *(_BYTE*)(v11 + 89) = -1;
          }
          else {
            v49 = 0;
            v13 = 0;
          }
          v21 = v10 + 11;
          (*(void (**)(__int64*, __int64))(*v10 + 40))(v10, 1),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          GameHr_1562680((__int64)(v10 + 11), (unsigned int*)"KeyOff",
                         0x1.0000000000000p+0f),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          game_1010060((__int64)v10, *(_QWORD*)v8),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          if ((*(_BYTE*)(v8 + 96) & 1) == 0) {
            GameHr_1562680((__int64)(v10 + 11), (unsigned int*)"In",
                           0x1.0000000000000p+0f),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(float, "s1", "=w"));
            *(_BYTE*)(v8 + 96) = 1;
          }
          v22 = ui_LayoutAccessor_FindPane(v10 + 11, "N_Body"),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
          if (v22 != 0) {
            v23 = *(_BYTE*)(v22 + 88);
            *(_QWORD*)(v22 + 48) = 0;
            *(_DWORD*)(v22 + 56) = 0;
            v24 = v22;
            *(_QWORD*)(v22 + 80) = 0;
            *(_BYTE*)(v22 + 88) = v23 | 0x10;
            v25 = v10[12];
            if (v25 != 0) {
              v26 = std___1___shared_weak_count_lock(v25),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s1", "=w"));
              if (v26 != 0) {
                v27 = v26;
                if (*v21 != 0) {
                  ControlCreator_13633c0(*v21),
                      v31 = COERCE_AS(__typeof__(v31),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
                      v31 = COERCE_AS(__typeof__(v31),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  std___1___shared_weak_count___release_weak(v27),
                      v31 = COERCE_AS(__typeof__(v31),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                }
              }
            }
            v57 = 0;
            v58 = 0;
            LANES128(v53).n128_u64[0] = v24;
            LANES128(v53).n128_u64[1] = v24;
            v50_.v50 = v24;
            v54 = &v50_.v50;
            v55 = 1;
            v56 = 0;
            GameRoutine_156c240(&v53),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(float, "s1", "=w"));
            v28 = *(float*)(v24 + 124);
            v29 = *(float*)(v24 + 140);
            Pane_58dfa0((void*)((float*)&v53), v24),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(float, "s1", "=w"));
            LANES128(v53).n128_f32[0] = v28 + LANES128(v53).n128_f32[0];
            LANES128(v53).n128_f32[1] = v29 + LANES128(v53).n128_f32[1];
            LANES128(v53).n128_f32[2] = v28 + LANES128(v53).n128_f32[2];
            LANES128(v53).n128_f32[3] = v29 + LANES128(v53).n128_f32[3];
            v30 = Pane_58e030(v24),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
            LANES128(v53).n128_f32[2] = LANES128(v53).n128_f32[2] - v30;
            LANES128(v53).n128_f32[3] = v31 + LANES128(v53).n128_f32[3];
            LANES128(v53).n128_f32[0] = LANES128(v53).n128_f32[0] - v30;
            LANES128(v53).n128_f32[1] = v31 + LANES128(v53).n128_f32[1];
            v32 = LANES128(v53).n128_f32[2] > 0x1.e000000000000p+9f;
            v33 = LANES128(v53).n128_f32[1] > 0x1.0e00000000000p+9f;
            v34 = ui_LayoutAccessor_FindPane(
                *(__int64**)(GameData_225e7a0 + 168), "N_NonOverlapAreas"),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
            if (v34 != 0) {
              v35 = *(_QWORD*)(v34 + 40);
              v36 = v34 + 32;
              while (v35 != v36) {
                v37 = *(float*)(v35 + 116);
                v38 = *(float*)(v35 + 132);
                Pane_58dfa0((void*)((float*)&v50_.v50), v35 - 8),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                v39 = v38 + v50_.v52;
                v40 = v37 + *(float*)&v50_.v50;
                v42 = LANES128(v53).n128_f32[0] > (float)(v37 + v50_.v51) ||
                      LANES128(v53).n128_f32[2] < v40 ||
                      LANES128(v53).n128_f32[1] < v39;
                if (!v42 && LANES128(v53).n128_f32[3] <=
                                (float)(v38 + *((float*)&v50_.v50 + 1))) {
                  v44 = LANES128(v53).n128_f32[3] <
                            (float)(v38 + *((float*)&v50_.v50 + 1)) &&
                        LANES128(v53).n128_f32[3] > v39;
                  v32 |= v44;
                  v46 = LANES128(v53).n128_f32[0] > v40 &&
                        LANES128(v53).n128_f32[0] < (float)(v37 + v50_.v51);
                  v33 |= v46;
                }
                v35 = *(_QWORD*)(v35 + 8);
              }
            }
            v50_.v50 = 0;
            v50_.v51 = 0x0.0p+0f;
            if ((v32 & 1) != 0) {
              *(float*)&v50_.v50 =
                  LANES128(v53).n128_f32[0] - LANES128(v53).n128_f32[2];
            }
            if ((v33 & 1) != 0) {
              *((float*)&v50_.v50 + 1) =
                  LANES128(v53).n128_f32[3] - LANES128(v53).n128_f32[1];
            }
            ui_LayoutAccessor_SetPaneTranslate(v21, "N_Body",
                                               (__int64)&v50_.v50),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
          a1 = v8;
          if (v12 != 0) {
            *(_BYTE*)(v12 + 88) = *(_BYTE*)(v12 + 88) & 0xFE | v13;
            *(_BYTE*)(v12 + 89) = v49;
          }
        }
        else {
          v20 = (*(__int64 (**)(_QWORD))(*v10 + 32))(*(_QWORD*)(v8 + 40)),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
          a1 = v8;
          if ((v20 & 1) != 0) {
            if (*(_BYTE*)(v8 + 96) == 1) {
              *(_BYTE*)(v8 + 96) = 0;
              GameHr_1562680((__int64)(v10 + 11), (unsigned int*)"Out",
                             0x1.0000000000000p+0f),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
              a1 = v8;
            }
            else {
              v48 = LayoutAccessor_1563380(v10 + 11, (__int64)"Out", 0),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s1", "=w"));
              a1 = v8;
              if (v48) {
                (*(void (**)(__int64*, _QWORD))(*v10 + 40))(v10, 0),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                a1 = v8;
              }
            }
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v9),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s1", "=w"));
        a1 = v8;
      }
    }
  }
  return GameRoutine_1685800((__int64*)a1, v7);
}

__int64* game_gmap_anonymous_168c0a0(__int64* result, __int64* a2,
                                     unsigned __int64 a3, __int64* a4,
                                     __int64 a5)
{
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  __int64* v9;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64* v21;
  __int64* v23;
  __int64* v24;
  __int64* v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;

  if (a3 >= 2) {
    if (a3 == 2) {
      if ((signed __int32)*((_DWORD*)a2 - 2) <
          (signed __int32)*((_DWORD*)result + 2)) {
        v5 = *result;
        *result = *(a2 - 2);
        *(a2 - 2) = v5;
        LODWORD(v5) = *((_DWORD*)result + 2);
        *((_DWORD*)result + 2) = *((_DWORD*)a2 - 2);
        *((_DWORD*)a2 - 2) = v5;
      }
    }
    else if ((__int64)a3 <= 0) {
      if (result != a2) {
        v12 = result + 2;
        if (result + 2 != a2) {
          v13 = 0;
          v14 = result;
          do {
            v16 = *((_DWORD*)v14 + 6);
            v17 = *((_DWORD*)v14 + 2);
            v14 = v12;
            if (v16 < v17) {
              v18 = *v12;
              v19 = v13;
              do {
                v20 = (char*)result + v19;
                *((_QWORD*)v20 + 2) = *(__int64*)((char*)result + v19);
                *((_DWORD*)v20 + 6) = *(_DWORD*)((char*)result + v19 + 8);
                if (v19 == 0) {
                  v15 = result;
                  goto LABEL_13;
                }
                v19 -= 16;
              } while (v16 < (signed __int32)*((_DWORD*)v20 - 2));
              v15 = (__int64*)((char*)result + v19 + 16);
            LABEL_13:
              *v15 = v18;
              *((_DWORD*)v15 + 2) = v16;
            }
            v12 = v14 + 2;
            v13 += 16;
          } while (v14 + 2 != a2);
        }
      }
    }
    else {
      v6 = a3 >> 1;
      v8 = a3 - (a3 >> 1);
      if ((__int64)a3 <= a5) {
        v21 = result;
        v23 = a4;
        GameHr_168c360((__int64)result, &result[2 * v6], a3 >> 1, a4);
        v24 = &v23[2 * v6];
        result = (__int64*)GameHr_168c360((__int64)&v21[2 * v6], a2, v8, v24);
        v25 = &v23[2 * a3];
        v26 = v24;
        while (v26 != v25) {
          if ((signed __int32)*((_DWORD*)v26 + 2) >=
              (signed __int32)*((_DWORD*)v23 + 2)) {
            v27 = v23;
            v23 += 2;
          }
          else {
            v27 = v26;
            v26 += 2;
          }
          *v21 = *v27;
          *((_DWORD*)v21 + 2) = *((_DWORD*)v27 + 2);
          v21 += 2;
          if (v23 == v24) {
            if (v26 != v25) {
              v31 = 0;
              do {
                v32 = &v26[v31];
                v33 = &v21[v31];
                v31 += 2;
                *v33 = *v32;
                *((_DWORD*)v33 + 2) = *((_DWORD*)v32 + 2);
              } while (v32 + 2 != v25);
            }
            return result;
          }
        }
        if (v23 != v24) {
          v28 = 0;
          do {
            v29 = &v23[v28];
            v30 = &v21[v28];
            v28 += 2;
            *v30 = *v29;
            *((_DWORD*)v30 + 2) = *((_DWORD*)v29 + 2);
          } while (v29 + 2 != v24);
        }
      }
      else {
        v9 = result;
        game_gmap_anonymous_168c0a0(result, &result[2 * v6], a3 >> 1, a4, a5);
        game_gmap_anonymous_168c0a0(&v9[2 * v6], a2, v8, a4, a5);
        return ProcGmapCarriageList_168c5c0(v9, &v9[2 * v6], a2, v6, v8, a4,
                                            a5);
      }
    }
  }
  return result;
}

void game_gmap_anonymous_172f060(__int64* a1)
{
  __int64 v2;
  __int64* v3;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  const char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  const char* v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  const char* v26;
  struct {
    __int64* v27;
    __int64 v28;
    unsigned __int64 v29;
    unsigned __int64 v30;
    int v31;
    int v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
  } v27_;

  LayoutAccessor_1560070((void*)(&v27_.v27), a1 + 119, "L_Tab");
  if (v27_.v28 != 0) {
    v2 = std___1___shared_weak_count_lock(v27_.v28);
    v3 = v27_.v27;
    if (v27_.v28 != 0) {
      std___1___shared_weak_count___release_weak(v27_.v28);
    }
    if (v2 == 0 || v3 == nullptr) {
      if (v2 == 0) {
        return;
      }
      goto LABEL_46;
    }
    v5 = (*(__int64 (**)(__int64*))(*a1 + 1288))(a1);
    v6 = msg_MessageManager_instance__ptr[0];
    if (v5 == -1) {
      v17 = "MID_CorpsMenu_Pool";
    LABEL_43:
      v22 = *v6;
      v27_.v33 = -1;
      v27_.v34 = -1;
      v27_.v35 = -1;
      v27_.v36 = -1;
      v27_.v37 = -1;
      v27_.v38 = -1;
      v27_.v39 = -1;
      v27_.v40 = -1;
      v27_.v41 = -1;
      v27_.v42 = -1;
      v27_.v43 = -1;
      v27_.v44 = -1;
      v27_.v27 = GameData_212e348 + 2;
      v27_.v28 = 0xFFFF0001FFFF0000LL;
      v27_.v29 = 0xFFFF0004FFFF0002LL;
      v27_.v30 = 0xFFFF0006FFFF0005LL;
      v27_.v45 = 8;
      v27_.v31 = -65529;
      v27_.v32 = -65528;
      v23 = GameRoutine_a4dbe0(v22, v17, 0);
      if (v23 != nullptr) {
        v24 = (__int64)v23;
        v25 = ui_LayoutAccessor_FindTextBox(v3, "T_Txt");
        if (v25 != 0) {
          GameRoutine_156c5d0(v25, v24, 0);
        }
      }
    LABEL_46:
      if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
        std___1___shared_weak_count___release_weak(v2);
      }
      return;
    }
    v7 = a1[29];
    if (a1[30] != v7) {
      v8 = 0;
      while (1) {
        v9 = *(_QWORD*)(v7 + 8 * v8);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 48LL))(v9) & 1) != 0 &&
            ((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 40LL))(v9) & 1) != 0) {
          break;
        }
        v7 = a1[29];
        if (++v8 >= (unsigned __int64)((a1[30] - v7) >> 3)) {
          v17 = "MID_Sys_ValueEmptyLong";
          goto LABEL_43;
        }
      }
      v10 = (char*)a1[29];
      v11 = (char*)a1[30];
      if (v10 == v11) {
        goto LABEL_42;
      }
      v12 = v11 - v10 - 8;
      v13 = (v12 >> 3) + 1;
      if (v12 >= 0x18) {
        v18 = 0;
        while ((_DWORD)v8 != (_DWORD)v18) {
          if ((_DWORD)v8 == (_DWORD)v18 + 1) {
            v10 += 8;
            break;
          }
          if ((_DWORD)v8 == (_DWORD)v18 + 2) {
            v10 += 16;
            break;
          }
          if ((_DWORD)v8 == (_DWORD)v18 + 3) {
            v10 += 24;
            break;
          }
          v10 += 32;
          v18 += 4;
          v14 = v18;
          if ((v13 & 0x3FFFFFFFFFFFFFFCLL) == v18) {
            goto LABEL_20;
          }
        }
      LABEL_37:
        if (*(_QWORD*)v10 != 0) {
          v19 = __dynamic_cast(*(_QWORD*)v10, GameData_212e008[0],
                               &GameData_20b33d8, 0);
          if (v19 != 0) {
            v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 560LL))(v19);
            if (v20 != 0) {
              if (*(_BYTE*)(v20 + 2136) != 0) {
                v21 = (const char*)game_97b2f0(v20 + 2104);
              }
              else {
                v21 = (const char*)GameHr_67ed20(*(_QWORD**)(v20 + 392));
              }
              if (v21 != nullptr) {
                v26 = v21;
              }
              else {
                v26 = *msg_MessageManager_empty_text__ptr;
              }
              GameRoutine_60a020(*v6 + 14704, v26);
              v17 = "MID_CorpsMenu_CorpsName";
              goto LABEL_43;
            }
          }
        }
        goto LABEL_42;
      }
      v14 = 0;
    LABEL_20:
      v15 = v13 & 3;
      if (v15 != 0) {
        v16 = v14 - v8;
        v17 = "MID_Sys_ValueEmptyLong";
        while (v16 != 0) {
          v10 += 8;
          ++v16;
          if (--v15 == 0) {
            goto LABEL_43;
          }
        }
        goto LABEL_37;
      }
    }
  LABEL_42:
    v17 = "MID_Sys_ValueEmptyLong";
    goto LABEL_43;
  }
}

#pragma GCC visibility pop
