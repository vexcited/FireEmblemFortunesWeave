#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_TransporterConst_List_Impl_EachData(_QWORD* result, __int64,
                                                 __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* GameRoutine_1567fc0(_QWORD*, unsigned __int8*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_156d320();
__int64 LayoutAccessor_155cda0(__int64 result, const char*, const char*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 llvm_libcxx_21_libcxx_include___vector_1686420(_QWORD*);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_IsPaneVisible(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__int64 ui_LayoutAccessor_SetPriority(__int64 result, int);
char* game_util_Format(const char*, ...);
extern _UNKNOWN GameData_20e3128;
extern _UNKNOWN GameData_2258850;
extern _UNKNOWN GameData_2258990;
extern _UNKNOWN GameData_22589d0;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1fa7f40[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_2131b00[8];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d690;
extern __int64 GameData_21f1e08;
extern __int64 GameData_2258870;
extern __int64 GameData_2258890;
extern __int64 GameData_22588b0;
extern __int64 GameData_22588d0;
extern __int64 GameData_22588f0;
extern __int64 GameData_2258910;
extern __int64 GameData_2258930;
extern __int64 GameData_2258950;
extern __int64 GameData_2258970;
extern __int64 GameData_22589b0;
extern __int64 GameData_22589f0;
extern __int64 GameData_2258a10;
extern __int64 GameData_2258a30;
extern __int64 GameData_2258a48;
extern __int64 GameData_2258a50;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_g_game_setting_ptr;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gameui_Header_instance_;
extern __int64 game_gameui_footer_animations_;
extern char* GameData_204d1d8[15];
extern char GameData_1a9f09e;
float LayoutAccessor_155d940(__int64*);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void GameHr_16832b0(_QWORD*, __int64, __int64, __int64, const char*);
void GameRoutine_156c910(__int64, const char*, int, ...);
void __attribute__((noreturn)) GameRoutine_1654e20();
void __attribute__((noreturn)) GameRoutine_1686400();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60f930();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) fs_60a230();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 ui_1564dd0();
__int64 ui_1564ee0();
void ui_1567280(const char*** a1, const char* a2);
__int64 ui_1567590(__int64 result, char a2);
void ui_1567760(const char* a1, unsigned int a2, char a3);
__int64 ui_1567980(__int64 result);
__int64 ui_1567c00(__int64 result);
void ui_1567d70(__int64 a1, char a2);
__int64 ui_1685c40(_QWORD* a1, int* a2);
__int64 ui_1839420(__int64 result);
__int64 ui_1839980(__int64 a1, char a2);

__int64 ui_1564dd0()
{
  __int64 result;
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64* v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  _QWORD* v8;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  unsigned int v12;

  result = GameRoutine_156d320();
  if (result != 0) {
    v1 = *(unsigned __int16*)(result + 16);
    v2 = GameData_212c878[0];
    v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v1);
    if (*(_BYTE*)(v3 + 73) == 17) {
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v4 = game_map_MapRandom_instance__ptr[0];
      v5 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL));
      v6 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v7 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
           (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v4 + 1) = v5;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) = v6;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4 + 4) =
          (v7 >> 8) ^ (v6 >> 19) ^ v7 ^ v6;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v3 = *(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v1);
    }
    v12 = 0;
    v8 = *(_QWORD**)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                     8LL);
    v10_.v11 = v10_.v10;
    v10_.v10[0] = GameData_1fa7f40;
    v10_.v10[1] = &v12;
    game_TransporterConst_List_Impl_EachData(v8, v3, (__int64)v10_.v10);
    if (v10_.v11 == v10_.v10) {
      v9 = 32;
    }
    else {
      if (v10_.v11 == nullptr) {
        return v12;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v10_.v11 + v9))((__int64)v10_.v11);
    return v12;
  }
  return result;
}

__int64 ui_1564ee0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;

  if ((__int64*)GameData_2258a30 == &GameData_2258a10) {
    v0 = 32;
  }
  else {
    if (GameData_2258a30 == 0) {
      goto LABEL_6;
    }
    v0 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_2258a30 + v0))(
      (__int64)GameData_2258a30);
LABEL_6:
  if ((_UNKNOWN*)GameData_22589f0 == &GameData_22589d0) {
    v1 = 32;
  }
  else {
    if (GameData_22589f0 == 0) {
      goto LABEL_11;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_22589f0 + v1))(
      (__int64)GameData_22589f0);
LABEL_11:
  if ((_UNKNOWN*)GameData_22589b0 == &GameData_2258990) {
    v2 = 32;
  }
  else {
    if (GameData_22589b0 == 0) {
      goto LABEL_16;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_22589b0 + v2))(
      (__int64)GameData_22589b0);
LABEL_16:
  if ((__int64*)GameData_2258970 == &GameData_2258950) {
    v3 = 32;
  }
  else {
    if (GameData_2258970 == 0) {
      goto LABEL_21;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_2258970 + v3))(
      (__int64)GameData_2258970);
LABEL_21:
  if ((__int64*)GameData_2258930 == &GameData_2258910) {
    v4 = 32;
  }
  else {
    if (GameData_2258930 == 0) {
      goto LABEL_26;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_2258930 + v4))(
      (__int64)GameData_2258930);
LABEL_26:
  if ((__int64*)GameData_22588f0 == &GameData_22588d0) {
    v5 = 32;
  }
  else {
    if (GameData_22588f0 == 0) {
      goto LABEL_31;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_22588f0 + v5))(
      (__int64)GameData_22588f0);
LABEL_31:
  if ((__int64*)GameData_22588b0 == &GameData_2258890) {
    v6 = 32;
  }
  else {
    if (GameData_22588b0 == 0) {
      goto LABEL_36;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_22588b0 + v6))(
      (__int64)GameData_22588b0);
LABEL_36:
  result = GameData_2258870;
  if ((_UNKNOWN*)GameData_2258870 == &GameData_2258850) {
    v8 = 32;
  }
  else {
    if (GameData_2258870 == 0) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)GameData_2258870 + v8))(
      (__int64)GameData_2258870);
}

void ui_1567280(const char*** a1, const char* a2)
{
  __int64 v2;
  const char** v5;
  const char** v6;
  __int64* v8;
  const char* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  const char* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64* v29;
    __int64 v30;
  } v29_;

  v2 = game_gameui_Footer_instance_;
  if (game_gameui_Footer_instance_ != 0 && a1 != nullptr && a2 != nullptr) {
    v5 = *a1;
    v6 = a1[1];
    if (*a1 != v6) {
      while (1) {
        v8 = *(__int64**)(v2 + 512);
        if (v8 == nullptr) {
          break;
        }
        v9 = *v5;
        v10 = strlen(*v5);
        while (1) {
          v11 = *((_BYTE*)v8 + 16) >> 1;
          if ((v8[2] & 1) != 0) {
            v11 = v8[3];
          }
          if (v10 == v11) {
            if (v10 == -1) {
              fs_60a230();
            }
            v12 = (v8[2] & 1) != 0 ? v8[4] : (__int64)v8 + 17;
            if (memcmp(v12, (__int64)v9, v10) == 0) {
              break;
            }
          }
          v8 = (__int64*)*v8;
          if (v8 == nullptr) {
            goto LABEL_24;
          }
        }
        if ((v8[5] & 1) == 0) {
          v13 = (char*)v8 + 41;
          goto LABEL_25;
        }
        v13 = (const char*)v8[7];
        if (v13 != nullptr) {
          goto LABEL_25;
        }
      LABEL_57:
        v5 += 5;
        if (v5 == v6) {
          return;
        }
      }
    LABEL_24:
      v13 = &GameData_1a9f09e;
    LABEL_25:
      v14 = ui_LayoutAccessor_FindPane((__int64*)(v2 + 168), (__int64)v13);
      if (v14 != 0) {
        do {
          if ((*(_BYTE*)(v14 + 88) & 1) == 0) {
            return;
          }
          v14 = *(_QWORD*)(v14 + 24);
        } while (v14 != 0);
        LayoutAccessor_1560070((void*)(&v29_.v29), (__int64*)(v2 + 168), v13);
        if (v29_.v30 == 0) {
          goto LABEL_57;
        }
        v15 = std___1___shared_weak_count_lock(v29_.v30);
        v16 = v29_.v29;
        if (v29_.v30 != 0) {
          std___1___shared_weak_count___release_weak(v29_.v30);
        }
        if (v15 == 0 || v16 == nullptr) {
          if (v15 == 0) {
            goto LABEL_57;
          }
          goto LABEL_55;
        }
        if ((LayoutAccessor_1563280(v16, (__int64)a2, 1) & 1) == 0) {
          GameHr_1562680((__int64)v16, a2, 0x1.0000000000000p+0f);
          v17 = GameData_2258a48;
          if (GameData_2258a48 >= (unsigned __int64)GameData_2258a50) {
            v19 = game_gameui_footer_animations_;
            v20 = GameData_2258a48 - game_gameui_footer_animations_;
            v21 = (GameData_2258a48 - game_gameui_footer_animations_) >> 3;
            v22 = v21 + 1;
            if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
              GameRoutine_60f930();
            }
            v23 = GameData_2258a50 - game_gameui_footer_animations_;
            if ((GameData_2258a50 - game_gameui_footer_animations_) >> 2 >
                v22) {
              v22 = v23 >> 2;
            }
            if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
              v24 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v24 = v22;
            }
            if (v24 != 0) {
              if (v24 >> 61 != 0) {
                GameRoutine_60a210();
              }
              v25 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
            }
            else {
              v25 = 0;
            }
            v26 = v25 + 8 * v24;
            v27 = v25 + v20 - 8 * v21;
            *(_QWORD*)(v25 + v20) = a2;
            v18 = v25 + v20 + 8;
            memcpy(v27, v19, v20);
            game_gameui_footer_animations_ = v27;
            GameData_2258a48 = v18;
            GameData_2258a50 = v26;
            if (v19 != 0) {
              v28 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v28 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v19);
            }
          }
          else {
            *(_QWORD*)GameData_2258a48 = a2;
            v18 = v17 + 8;
          }
          GameData_2258a48 = v18;
        LABEL_55:
          if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
            std___1___shared_weak_count___release_weak(v15);
          }
          goto LABEL_57;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak(v15);
        }
      }
    }
  }
}

__int64 ui_1567590(__int64 result, char a2)
{
  __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  __int64 v12;
  __int64* v13;
  const char* v14;
  struct {
    __int64 v15;
    unsigned __int64 v16;
    char* v17;
  } v15_;

  v2 = game_gameui_Footer_instance_;
  if (game_gameui_Footer_instance_ == 0) {
    return result;
  }
  v4 = result;
  v5 = strlen((const char*)result);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16,
                                               0);
    v15_.v16 = v6;
    v15_.v17 = v7;
    v15_.v15 = v8 | 1;
  }
  else {
    LOBYTE(v15_.v15) = 2 * v5;
    v7 = (char*)&v15_.v15 + 1;
    if (v5 == 0) {
      goto LABEL_11;
    }
  }
  memcpy((__int64)v7, v4, v6);
LABEL_11:
  v7[v6] = 0;
  result = (__int64)GameRoutine_1567fc0((_QWORD*)(v2 + 496),
                                        (unsigned __int8*)&v15_.v15);
  if ((v15_.v15 & 1) != 0 && v15_.v17 != nullptr) {
    v9 = result;
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  (__int64)v15_.v17);
    result = v9;
  }
  if (result != 0) {
    v11 = (*(_BYTE*)(result + 40) & 1) != 0 ? *(const char**)(result + 56)
                                            : (const char*)(result + 41);
    LayoutAccessor_1560070((void*)(&v15_.v15), (__int64*)(v2 + 168), v11);
    result = v15_.v16;
    if (v15_.v16 != 0) {
      v12 = std___1___shared_weak_count_lock(v15_.v16);
      v13 = (__int64*)v15_.v15;
      result = v15_.v16;
      if (v15_.v16 != 0) {
        result = std___1___shared_weak_count___release_weak(v15_.v16);
      }
      if (v12 != 0 && v13 != nullptr) {
        if (a2 != 5) {
          v14 = GameData_204d1d8[a2];
          result = LayoutAccessor_1563280(v13, (__int64)v14, 1);
          if ((result & 1) == 0) {
            result = GameHr_1562680((__int64)v13, v14, 0x1.0000000000000p+0f);
          }
        }
      }
      else if (v12 == 0) {
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        return std___1___shared_weak_count___release_weak(v12);
      }
    }
  }
  return result;
}

void ui_1567760(const char* a1, unsigned int a2, char a3)
{
  __int64 v3;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  const char* v19;
  struct {
    __int64 v20;
    unsigned __int64 v21;
    char* v22;
  } v20_;

  v3 = game_gameui_Footer_instance_;
  if (game_gameui_Footer_instance_ == 0) {
    return;
  }
  v7 = strlen(a1);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v10, 16, 0);
    v20_.v21 = v8;
    v20_.v22 = v9;
    v20_.v20 = v10 | 1;
  }
  else {
    LOBYTE(v20_.v20) = 2 * v7;
    v9 = (char*)&v20_.v20 + 1;
    if (v7 == 0) {
      goto LABEL_11;
    }
  }
  memcpy((__int64)v9, (__int64)a1, v8);
LABEL_11:
  v9[v8] = 0;
  v11 = GameRoutine_1567fc0((_QWORD*)(v3 + 496), (unsigned __int8*)&v20_.v20);
  if ((v20_.v20 & 1) != 0 && v20_.v22 != nullptr) {
    v12 = v11;
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  (__int64)v20_.v22);
    v11 = v12;
  }
  if (v11 != nullptr) {
    v14 = (v11[5] & 1) != 0 ? (const char*)v11[7] : (char*)v11 + 41;
    LayoutAccessor_1560070((void*)(&v20_.v20), (__int64*)(v3 + 168), v14);
    if (v20_.v21 != 0) {
      v15 = std___1___shared_weak_count_lock(v20_.v21);
      v16 = (__int64*)v20_.v20;
      if (v20_.v21 != 0) {
        std___1___shared_weak_count___release_weak(v20_.v21);
      }
      if (v15 != 0 && v16 != nullptr) {
        v17 = ui_LayoutAccessor_FindPane(v16, (__int64)"T_Num");
        if (v17 != 0) {
          v18 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d690, 0);
          if (v18 != 0) {
            GameRoutine_156c910(v18, "%d", 1, a2);
          }
        }
        if (a3 != 5) {
          v19 = GameData_204d1d8[a3];
          if ((LayoutAccessor_1563280(v16, (__int64)v19, 1) & 1) == 0) {
            GameHr_1562680((__int64)v16, v19, 0x1.0000000000000p+0f);
          }
        }
      }
      else if (v15 == 0) {
        return;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
      }
    }
  }
}

__int64 ui_1567980(__int64 result)
{

#pragma clang fp contract(off)
  int v1;
  int v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _BOOL4 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  unsigned __int64 v10;
  __int128 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _BOOL4 v15;
  __int64 v16;
  int v17;
  unsigned __int64 v18;
  __int128 v19;
  __int64 v20;

  v2 = result;
  v3 = (_QWORD*)game_gameui_Header_instance_;
  if (game_gameui_Header_instance_ == 0) {
    goto LABEL_27;
  }
  if (*(_QWORD*)(game_gameui_Header_instance_ + 184) == 0) {
    goto LABEL_27;
  }
  result = *(_QWORD*)(game_gameui_Header_instance_ + 176);
  if (result == 0) {
    goto LABEL_27;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_12;
  }
  v4 = v3[21];
  if (v4 != 0) {
    v1 = *(unsigned __int8*)(v4 + 24);
    v5 = v4 + 152;
    if (v1 == 0) {
      v5 = 0;
    }
    v6 = v5 != v3[23];
  }
  else {
    v6 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6) {
    LABEL_12:
      v7 = v3[22];
      if (v7 == 0 || *(_QWORD*)(v7 + 8) == -1) {
        goto LABEL_27;
      }
      goto LABEL_17;
    }
  }
  else {
    v8 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v8);
    if (v6) {
      goto LABEL_12;
    }
  }
  if ((v1 & 1) == 0) {
    goto LABEL_27;
  }
LABEL_17:
  v9 = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    v10 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v10 + 172) == *(float*)(v10 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v10 + 160) + 16LL))(v10 + 160);
    }
    else {
      v11 = *(_OWORD*)(v10 + 208);
    }
    if (*((float*)&v11 + 3) == 0x1.0000000000000p+0f) {
      if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v10 + 160) + 16LL))(
                          v10 + 160, *((float*)&v11 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
        v9 = 1010;
      }
      else {
        v9 = 0;
      }
    }
    else {
      v9 = 0;
    }
  }
  result = ui_LayoutAccessor_SetPriority((__int64)(v3 + 21), v9 + v2);
LABEL_27:
  v12 = (_QWORD*)game_gameui_Footer_instance_;
  if (game_gameui_Footer_instance_ == 0) {
    return result;
  }
  if (*(_QWORD*)(game_gameui_Footer_instance_ + 184) == 0) {
    return result;
  }
  result = *(_QWORD*)(game_gameui_Footer_instance_ + 176);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_38;
  }
  v13 = v12[21];
  if (v13 != 0) {
    v1 = *(unsigned __int8*)(v13 + 24);
    v14 = v13 + 152;
    if (v1 == 0) {
      v14 = 0;
    }
    v15 = v14 != v12[23];
  }
  else {
    v15 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v15) {
    LABEL_38:
      v16 = v12[22];
      if (v16 == 0 || *(_QWORD*)(v16 + 8) == -1) {
        return result;
      }
      goto LABEL_40;
    }
  }
  else {
    v20 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v20);
    if (v15) {
      goto LABEL_38;
    }
  }
  if ((v1 & 1) == 0) {
    return result;
  }
LABEL_40:
  v17 = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    v18 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v18 + 172) == *(float*)(v18 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v18 + 160) + 16LL))(v18 + 160);
    }
    else {
      v19 = *(_OWORD*)(v18 + 208);
    }
    if (*((float*)&v19 + 3) == 0x1.0000000000000p+0f) {
      if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v18 + 160) + 16LL))(
                          v18 + 160, *((float*)&v19 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
        v17 = 1010;
      }
      else {
        v17 = 0;
      }
    }
    else {
      v17 = 0;
    }
  }
  return ui_LayoutAccessor_SetPriority((__int64)(v12 + 21), v17 + v2);
}

__int64 ui_1567c00(__int64 result)
{

#pragma clang fp contract(off)
  int v1;
  _QWORD* v2;
  int v3;
  __int64 v4;
  __int64 v5;
  _BOOL4 v6;
  __int64 v7;
  int v8;
  unsigned __int64 v9;
  __int128 v10;
  __int64 v11;

  v2 = (_QWORD*)game_gameui_Footer_instance_;
  if (game_gameui_Footer_instance_ == 0 ||
      *(_QWORD*)(game_gameui_Footer_instance_ + 184) == 0 ||
      *(_QWORD*)(game_gameui_Footer_instance_ + 176) == 0) {
    return result;
  }
  v3 = result;
  result = std___1___shared_weak_count_lock(
      *(_QWORD*)(game_gameui_Footer_instance_ + 176));
  if (result == 0) {
    goto LABEL_12;
  }
  v4 = v2[21];
  if (v4 != 0) {
    v1 = *(unsigned __int8*)(v4 + 24);
    v5 = v4 + 152;
    if (v1 == 0) {
      v5 = 0;
    }
    v6 = v5 != v2[23];
  }
  else {
    v6 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6) {
    LABEL_12:
      v7 = v2[22];
      if (v7 == 0 || *(_QWORD*)(v7 + 8) == -1) {
        return result;
      }
      goto LABEL_14;
    }
  }
  else {
    v11 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v11);
    if (v6) {
      goto LABEL_12;
    }
  }
  if ((v1 & 1) == 0) {
    return result;
  }
LABEL_14:
  v8 = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    v9 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v9 + 172) == *(float*)(v9 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v9 + 160) + 16LL))(v9 + 160);
    }
    else {
      v10 = *(_OWORD*)(v9 + 208);
    }
    if (*((float*)&v10 + 3) == 0x1.0000000000000p+0f) {
      if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v9 + 160) + 16LL))(
                          v9 + 160, *((float*)&v10 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
        v8 = 1010;
      }
      else {
        v8 = 0;
      }
    }
    else {
      v8 = 0;
    }
  }
  return ui_LayoutAccessor_SetPriority((__int64)(v2 + 21), v8 + v3);
}

void ui_1567d70(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int128 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int16* v16;
  int v17;
  int v18;
  __int64 v20;
  _WORD* v21;

  if (game_ProcFadeView_instance_ != 0) {
    v2 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v2 + 172) == *(float*)(v2 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v2 + 160) + 16LL))(v2 + 160);
    }
    else {
      v5 = *(_OWORD*)(v2 + 208);
    }
    v6 = 30;
    if (*((float*)&v5 + 3) == 0x1.0000000000000p+0f) {
      if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v2 + 160) + 16LL))(
                          v2 + 160, *((float*)&v5 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
        v6 = 1040;
      }
      else {
        v6 = 30;
      }
    }
  }
  else {
    v6 = 30;
  }
  ui_LayoutAccessor_SetPriority(a1 + 168, v6);
  if (*(_QWORD*)(a1 + 288) == 0) {
    goto LABEL_37;
  }
  v7 = *(_QWORD*)(a1 + 280);
  if (v7 == 0) {
    goto LABEL_37;
  }
  v8 = std___1___shared_weak_count_lock(v7);
  if (v8 == 0) {
    goto LABEL_20;
  }
  v9 = *(_QWORD*)(a1 + 272);
  if (v9 != 0) {
    LODWORD(v2) = *(unsigned __int8*)(v9 + 24);
    v10 = v9 + 152;
    if ((_DWORD)v2 == 0) {
      v10 = 0;
    }
    v11 = v10 != *(_QWORD*)(a1 + 288);
  }
  else {
    v11 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v11) {
    LABEL_20:
      v12 = *(_QWORD*)(a1 + 280);
      if (v12 == 0 || *(_QWORD*)(v12 + 8) == -1) {
        goto LABEL_37;
      }
      goto LABEL_25;
    }
  }
  else {
    v13 = v8;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v13);
    if (v11) {
      goto LABEL_20;
    }
  }
  if ((v2 & 1) != 0) {
  LABEL_25:
    v14 = *(_QWORD*)(a1 + 376);
    if (v14 != 0 && *(float*)(v14 + 60) != 0x0.0p+0f) {
      v15 = *(_QWORD*)(a1 + 400);
      if ((*(_BYTE*)(a1 + 392) & 1) == 0) {
        v15 = *(_BYTE*)(a1 + 392) >> 1;
      }
      if (v15 == 3) {
        v16 = (*(_BYTE*)(a1 + 392) & 1) != 0 ? *(unsigned __int16**)(a1 + 408)
                                             : (unsigned __int16*)(a1 + 393);
        v17 = *v16;
        v18 = *((unsigned __int8*)v16 + 2);
        if (v17 == 30031 && v18 == 116) {
          LayoutAccessor_155cda0(a1 + 272, "In", nullptr);
        LABEL_45:
          LayoutAccessor_155d940((__int64*)(a1 + 272));
          return;
        }
      }
    }
  }
LABEL_37:
  v20 = *(_QWORD*)(a1 + 400);
  if ((*(_BYTE*)(a1 + 392) & 1) == 0) {
    v20 = *(_BYTE*)(a1 + 392) >> 1;
  }
  if (v20 != 2 || ((*(_BYTE*)(a1 + 392) & 1) != 0 ? (v21 = *(_WORD**)(a1 + 408))
                                                  : (v21 = (_WORD*)(a1 + 393)),
                   *v21 != 28233)) {
    LayoutAccessor_155e830(a1 + 168, 1);
    LayoutAccessor_155cda0(a1 + 272, "In", nullptr);
    if ((a2 & 1) != 0) {
      goto LABEL_45;
    }
  }
}

__int64 ui_1685c40(_QWORD* a1, int* a2)
{
  char* v2;
  char* v3;
  int* v4;
  _QWORD* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  char* v15;
  _QWORD* v16;
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
  char* v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  int* v48;
  struct {
    __int64 v49;
    __int64 v50;
  } v49_;

  v2 = (char*)a1[29];
  v3 = (char*)a1[30];
  v4 = a2;
  v5 = a1;
  v6 = 0x2E8BA2E8BA2E8BA3LL * ((v3 - v2) >> 3);
  if (v6 <= *a2) {
    v7 = a1[31];
    if ((unsigned __int64)v3 >= v7) {
      v9 = v6 + 1;
      if (v9 > 0x2E8BA2E8BA2E8BALL) {
        GameRoutine_1686400();
      }
      if (0x5D1745D1745D1746LL * ((__int64)(v7 - (_QWORD)v2) >> 3) > v9) {
        v9 = 0x5D1745D1745D1746LL * ((__int64)(v7 - (_QWORD)v2) >> 3);
      }
      if ((unsigned __int64)(0x2E8BA2E8BA2E8BA3LL *
                             ((__int64)(v7 - (_QWORD)v2) >> 3)) >=
          0x1745D1745D1745DLL) {
        v10 = 0x2E8BA2E8BA2E8BALL;
      }
      else {
        v10 = v9;
      }
      if (v10 > 0x2E8BA2E8BA2E8BALL) {
        GameRoutine_60a210();
      }
      v11 = 88 * v10;
      v12 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 88 * v10,
                                           16, 0);
      v13 = (_QWORD*)(v12 + v3 - v2);
      v13[9] = 0;
      v13[10] = 0;
      *v13 = 0;
      v13[1] = 0;
      v13[4] = 0;
      v13[5] = 0;
      v13[6] = 0;
      v13[7] = 0;
      v13[8] = 0;
      v14 = GameData_2131b00[0] + 2;
      v13[2] = GameData_2131b00[0] + 2;
      v13[3] = 0;
      *((_BYTE*)v13 + 80) = 1;
      if (v2 != v3) {
        v46 = v11;
        v47 = v5;
        v48 = v4;
        v15 = v2;
        v16 = (_QWORD*)v12;
        v45 = v12;
        do {
          *v16 = *(_QWORD*)v15;
          v16[1] = *((_QWORD*)v15 + 1);
          *(_QWORD*)v15 = 0;
          *((_QWORD*)v15 + 1) = 0;
          v16[2] = v14;
          v16[3] = *((_QWORD*)v15 + 3);
          v19 = *((_QWORD*)v15 + 4);
          v16[4] = v19;
          if (v19 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                      memory_order_relaxed);
          }
          v20 = *((_QWORD*)v15 + 5);
          v16[7] = 0;
          v16[8] = 0;
          v16[5] = v20;
          v16[6] = 0;
          v21 = *((_QWORD*)v15 + 6);
          v22 = *((_QWORD*)v15 + 7);
          v23 = v22 - v21;
          if (v22 != v21) {
            if (0xAAAAAAAAAAAAAAABLL * (v23 >> 4) >= 0x555555555555556LL) {
              GameRoutine_1654e20();
            }
            v24 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v22 - v21, 16, 0);
            v16[6] = v24;
            v16[7] = v24;
            v16[8] = v24 + v23;
            do {
              v25 = *(_QWORD*)(v21 + 32);
              if (v25 != 0) {
                if (v21 == v25) {
                  *(_QWORD*)(v24 + 32) = v24;
                  (*(void (**)(__int64, __int64))(*(_QWORD*)v25 + 24LL))(v25,
                                                                         v24);
                }
                else {
                  *(_QWORD*)(v24 + 32) =
                      (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
                }
              }
              else {
                *(_QWORD*)(v24 + 32) = 0;
              }
              v21 += 48;
              v24 += 48;
            } while (v21 != v22);
            v16[7] = v24;
          }
          v17 = *((_QWORD*)v15 + 9);
          v18 = *((_QWORD*)v15 + 10);
          v15 += 88;
          v16[9] = v17;
          v16[10] = v18;
          v16 += 11;
        } while (v15 != v3);
        do {
          llvm_libcxx_21_libcxx_include___vector_1686420(v2);
          v2 += 88;
        } while (v2 != v3);
        v5 = v47;
        v4 = v48;
        v12 = v45;
        v11 = v46;
        v2 = (char*)v47[29];
      }
      v8 = v13 + 11;
      v5[29] = v12;
      v5[30] = v13 + 11;
      v5[31] = v12 + v11;
      if (v2 != nullptr) {
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, (__int64)v2);
      }
    }
    else {
      *((_QWORD*)v3 + 9) = 0;
      *((_QWORD*)v3 + 10) = 0;
      *((_QWORD*)v3 + 7) = 0;
      *((_QWORD*)v3 + 8) = 0;
      v8 = v3 + 88;
      *((_QWORD*)v3 + 5) = 0;
      *((_QWORD*)v3 + 6) = 0;
      *((_QWORD*)v3 + 4) = 0;
      *(_QWORD*)v3 = 0;
      *((_QWORD*)v3 + 1) = 0;
      *((_QWORD*)v3 + 2) = GameData_2131b00[0] + 2;
      *((_QWORD*)v3 + 3) = 0;
      v3[80] = 1;
    }
    v5[30] = v8;
    v27 = game_util_Format("L_Pin%02d", *v4);
    GameHr_16832b0(&v49_.v49, (__int64)v5, (__int64)"L_Pin", (__int64)"N_Pin",
                   v27);
    if (v49_.v50 != 0) {
      v28 = std___1___shared_weak_count_lock(v49_.v50);
      if (v28 != 0) {
        v29 = v49_.v49;
      }
      else {
        v29 = 0;
      }
      if (v49_.v50 != 0) {
        std___1___shared_weak_count___release_weak(v49_.v50);
      }
      if (v29 != 0) {
        v30 = (_QWORD*)(v5[29] + 88LL * *v4);
        v31 = v30[1];
        *v30 = v29;
        v30[1] = v28;
        if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
          std___1___shared_weak_count___release_weak(v31);
        }
        LayoutAccessor_1560070((void*)(&v49_.v49),
                               *(__int64**)(v5[29] + 88LL * *v4), "L_Icon");
        v32 = (_QWORD*)(v5[29] + 88LL * *v4);
        v33 = v49_.v49;
        v34 = v49_.v50;
        if (v49_.v50 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v49_.v50 + 16),
                                    1u, memory_order_relaxed);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                                    memory_order_relaxed);
        }
        v35 = v32[4];
        v32[3] = v33;
        v32[4] = v34;
        if (v35 != 0) {
          std___1___shared_weak_count___release_weak(v35);
        }
        v32[5] = 0x100000001LL;
        if (v34 != 0) {
          std___1___shared_weak_count___release_weak(v34);
        }
        v36 = v49_.v50;
        if (v49_.v50 != 0) {
          goto LABEL_49;
        }
      }
      else if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
        v36 = v28;
      LABEL_49:
        std___1___shared_weak_count___release_weak(v36);
      }
    }
  }
  v37 = v5[29] + 88LL * (*v4)++;
  v39 = *(_QWORD*)(v37 + 48);
  v38 = *(_QWORD*)(v37 + 56);
  if (v39 != v38) {
    do {
      v43 = *(_QWORD**)(v38 - 16);
      v44 = v38 - 48;
      if ((_QWORD*)(v38 - 48) == v43) {
        v42 = 32;
      }
      else {
        if (v43 == nullptr) {
          goto LABEL_58;
        }
        v42 = 40;
      }
      (*(void (**)(__int64))(*v43 + v42))((__int64)v43);
    LABEL_58:
      v38 = v44;
    } while (v44 != v39);
  }
  v40 = *(_QWORD*)v37;
  *(_QWORD*)(v37 + 56) = v39;
  *(_BYTE*)(v37 + 80) = 1;
  if (v40 != 0) {
    LayoutAccessor_155e830(v40, 1);
  }
  return v37;
}

__int64 ui_1839420(__int64 result)
{
  int v1;
  __int64 v2;
  const char* v3;
  char* v4;
  __int64* v5;
  __int64 v6;
  int v7;
  const char* v8;
  char* v9;
  __int64* v10;

  if (*(_BYTE*)(result + 215) == 1 &&
      (*(_BYTE*)(result + 213) != 1 ||
       *(unsigned __int8*)(result + 214) != *(unsigned __int8*)(result + 212) ||
       *(_DWORD*)(result + 216) != *(_DWORD*)(result + 220))) {
    v1 = *(_DWORD*)(result + 220);
    if (v1 <= 2 && *(int*)(result + 216) <= 2) {
      v2 = result;
      if (*(_BYTE*)(result + 214) != 0) {
        v3 = "Player";
      }
      else {
        v3 = "Target";
      }
      v4 = game_util_Format(
          "L_%s_Turn%s", v3,
          *((_QWORD*)&GameData_20e3128 + (v1 & (unsigned int)~(v1 >> 31))));
      v5 = LayoutAccessor_155fbe0((__int64*)(v2 + 24), v4);
      result = GameHr_1562680((__int64)v5, "Wait", 0x1.0000000000000p+0f);
      v6 = v2;
      if (*(_BYTE*)(v2 + 213) == 1) {
        v7 = *(_DWORD*)(v2 + 216) & ~(*(int*)(v2 + 216) >> 31);
        if (*(_BYTE*)(v2 + 212) != 0) {
          v8 = "Player";
        }
        else {
          v8 = "Target";
        }
        if (v7 >= 2) {
          v7 = 2;
        }
        v9 = game_util_Format("L_%s_Turn%s", v8,
                              *((_QWORD*)&GameData_20e3128 + (unsigned int)v7));
        v10 = LayoutAccessor_155fbe0((__int64*)(v2 + 24), v9);
        result = GameHr_1562680((__int64)v10, "Disable", 0x1.0000000000000p+0f);
        v6 = v2;
      }
      *(_DWORD*)(v6 + 216) = *(_DWORD*)(v6 + 220);
      *(_WORD*)(v6 + 212) = *(_WORD*)(v6 + 214);
    }
  }
  return result;
}

__int64 ui_1839980(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  int v2;
  _BYTE* v5;
  char v6;
  int v7;
  __int64 result;
  int v9;
  char v10;
  unsigned __int8 v11;
  int v12;
  int v13;
  __int64* v14;
  char v15;
  const char* v16;
  char v17;
  int v18;
  __int64* v19;
  const char* v20;
  char v21;
  __int64 v22;
  __int64* v23;
  float v24;
  __int64 v25;
  const char* v26;
  __int64 v27;
  int v28;
  char* v29;
  __int64 v30;
  char v31;
  char* v32;
  __int64 v33;
  char v34;
  char* v35;
  __int64 v36;
  char v37;
  char* v38;
  __int64 v39;
  char v40;
  char* v41;
  __int64 v42;
  char v43;
  char* v44;
  __int64 v45;
  char v46;
  char* v47;
  __int64 v48;
  char v49;
  char* v50;
  __int64 v51;
  char v52;
  char* v53;
  __int64 v54;
  char v55;
  char* v56;
  __int64 v57;
  char v58;
  char* v59;
  __int64 v60;
  char v61;
  char* v62;
  __int64 v63;
  char v64;
  __int64 v65;
  char v66;
  __int64 v67;
  char v68;
  char v69;

  v2 = *(unsigned __int8*)(a1 + 228);
  v5 = *(_BYTE**)game_g_game_setting_ptr;
  if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) == 1 &&
      ((v5[804] & 1) != 0 ||
       v5[940] == 1 && (v5[805] & 1) != 0 && (v5[806] & 1) != 0)) {
    goto LABEL_8;
  }
  if (v5[903] != 1) {
    v6 = 0;
    goto LABEL_10;
  }
  if ((v5[900] & 1) != 0) {
  LABEL_8:
    v6 = 1;
  }
  else {
    v6 = 0;
    if (v5[940] == 1 && (v5[901] & 1) != 0) {
      v6 = v5[902];
    }
  }
LABEL_10:
  v7 = *(_DWORD*)(a1 + 232);
  *(_BYTE*)(a1 + 228) = v6 & 1;
  result = (**(__int64 (***)(__int64))a1)(a1);
  v9 = *(unsigned __int8*)(a1 + 228);
  *(_DWORD*)(a1 + 232) = result;
  if (v2 == v9 && (a2 & 1) == 0 && v7 == (_DWORD)result) {
    goto LABEL_42;
  }
  v10 = ui_LayoutAccessor_IsPaneVisible((__int64*)(a1 + 24),
                                        (__int64)"N_Player_EquipOne");
  v11 = *(_BYTE*)(a1 + 224);
  if ((v10 & 1) == 0) {
    v12 = *(unsigned __int8*)(a1 + 225);
    if ((v11 & *(_BYTE*)(a1 + 228)) != 0) {
      v18 = *(_DWORD*)(a1 + 232);
      v19 = LayoutAccessor_155fbe0((__int64*)(a1 + 24), "L_Player_Equip00");
      if (v12 != 0) {
        v15 = 1;
        v12 = v18 == 2;
        if (v18 != 1) {
          v20 = "KeyOff";
          v21 = 0;
          goto LABEL_38;
        }
      }
      else {
        v15 = 0;
      }
    }
    else {
      v19 = LayoutAccessor_155fbe0((__int64*)(a1 + 24), "L_Player_Equip00");
      v21 = 0;
      if ((v11 & 1) == 0) {
        v20 = "KeyOff";
        v15 = 0;
      LABEL_38:
        v27 = (__int64)v19;
        GameHr_1562680((__int64)v19, v20, 0x1.0000000000000p+0f);
        ui_LayoutAccessor_SetPaneVisible(v27, (__int64)"L_KeyHelp_Focus", v21);
        v23 = LayoutAccessor_155fbe0((__int64*)(a1 + 24), "L_Player_Equip01");
        v24 = 0x1.0000000000000p+0f;
        v25 = (__int64)v23;
        if (v12 != 0) {
          v26 = "KeyOn";
        }
        else {
          v26 = "KeyOff";
        }
        goto LABEL_41;
      }
      v15 = 0;
    }
    v20 = "KeyOn";
    v21 = v15;
    goto LABEL_38;
  }
  v12 = *(unsigned __int8*)(a1 + 226);
  if ((v11 & *(_BYTE*)(a1 + 228)) != 0) {
    v13 = *(_DWORD*)(a1 + 232);
    v14 = LayoutAccessor_155fbe0((__int64*)(a1 + 24), "L_Player_EquipOne");
    if (v12 != 0) {
      v15 = 1;
      LOBYTE(v12) = v13 == 3;
      if (v13 != 1) {
        v16 = "KeyOff";
        v17 = 0;
        goto LABEL_34;
      }
    }
    else {
      v15 = 0;
    }
    goto LABEL_30;
  }
  v14 = LayoutAccessor_155fbe0((__int64*)(a1 + 24), "L_Player_EquipOne");
  v17 = 0;
  if ((v11 & 1) != 0) {
    v15 = 0;
  LABEL_30:
    v16 = "KeyOn";
    v17 = v15;
    goto LABEL_34;
  }
  v16 = "KeyOff";
  v15 = 0;
LABEL_34:
  v22 = (__int64)v14;
  GameHr_1562680((__int64)v14, v16, 0x1.0000000000000p+0f);
  ui_LayoutAccessor_SetPaneVisible(v22, (__int64)"L_KeyHelp_Focus", v17);
  v23 = LayoutAccessor_155fbe0((__int64*)(a1 + 24), "L_Link_Equip00");
  v24 = 0x1.0000000000000p+0f;
  v25 = (__int64)v23;
  if ((v12 & 1) != 0) {
    v26 = "KeyOn";
  }
  else {
    v26 = "KeyOff";
  }
LABEL_41:
  GameHr_1562680((__int64)v23, v26, v24);
  result = ui_LayoutAccessor_SetPaneVisible(v25, (__int64)"L_KeyHelp_Focus",
                                            (unsigned __int8)v12 & v15);
LABEL_42:
  v28 = GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0;
  if (*(unsigned __int8*)(a1 + 205) != v28) {
    v29 = game_util_Format("%s/L_ArrowL", "L_Player_EquipOne");
    v30 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24), (__int64)v29);
    if (v30 != 0) {
      if (v28 != 0) {
        v31 = 40;
      }
      else {
        v31 = -1;
      }
      *(_BYTE*)(v30 + 89) = v31;
    }
    v32 = game_util_Format("%s/L_ArrowR", "L_Player_EquipOne");
    v33 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24), (__int64)v32);
    if (v33 != 0) {
      if (v28 != 0) {
        v34 = 40;
      }
      else {
        v34 = -1;
      }
      *(_BYTE*)(v33 + 89) = v34;
    }
    v35 = game_util_Format("%s/L_KeyHelp_Focus", "L_Player_EquipOne");
    v36 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24), (__int64)v35);
    if (v36 != 0) {
      if (v28 != 0) {
        v37 = 40;
      }
      else {
        v37 = -1;
      }
      *(_BYTE*)(v36 + 89) = v37;
    }
    v38 = game_util_Format("%s/L_ArrowL", "L_Player_Equip00");
    v39 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24), (__int64)v38);
    if (v39 != 0) {
      if (v28 != 0) {
        v40 = 40;
      }
      else {
        v40 = -1;
      }
      *(_BYTE*)(v39 + 89) = v40;
    }
    v41 = game_util_Format("%s/L_ArrowR", "L_Player_Equip00");
    v42 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24), (__int64)v41);
    if (v42 != 0) {
      if (v28 != 0) {
        v43 = 40;
      }
      else {
        v43 = -1;
      }
      *(_BYTE*)(v42 + 89) = v43;
    }
    v44 = game_util_Format("%s/L_KeyHelp_Focus", "L_Player_Equip00");
    v45 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24), (__int64)v44);
    if (v45 != 0) {
      if (v28 != 0) {
        v46 = 40;
      }
      else {
        v46 = -1;
      }
      *(_BYTE*)(v45 + 89) = v46;
    }
    v47 = game_util_Format("%s/L_ArrowL", "L_Player_Equip01");
    v48 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24), (__int64)v47);
    if (v48 != 0) {
      if (v28 != 0) {
        v49 = 40;
      }
      else {
        v49 = -1;
      }
      *(_BYTE*)(v48 + 89) = v49;
    }
    v50 = game_util_Format("%s/L_ArrowR", "L_Player_Equip01");
    v51 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24), (__int64)v50);
    if (v51 != 0) {
      if (v28 != 0) {
        v52 = 40;
      }
      else {
        v52 = -1;
      }
      *(_BYTE*)(v51 + 89) = v52;
    }
    v53 = game_util_Format("%s/L_KeyHelp_Focus", "L_Player_Equip01");
    v54 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24), (__int64)v53);
    if (v54 != 0) {
      if (v28 != 0) {
        v55 = 40;
      }
      else {
        v55 = -1;
      }
      *(_BYTE*)(v54 + 89) = v55;
    }
    v56 = game_util_Format("%s/L_ArrowL", "L_Link_Equip00");
    v57 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24), (__int64)v56);
    if (v57 != 0) {
      if (v28 != 0) {
        v58 = 40;
      }
      else {
        v58 = -1;
      }
      *(_BYTE*)(v57 + 89) = v58;
    }
    v59 = game_util_Format("%s/L_ArrowR", "L_Link_Equip00");
    v60 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24), (__int64)v59);
    if (v60 != 0) {
      if (v28 != 0) {
        v61 = 40;
      }
      else {
        v61 = -1;
      }
      *(_BYTE*)(v60 + 89) = v61;
    }
    v62 = game_util_Format("%s/L_KeyHelp_Focus", "L_Link_Equip00");
    v63 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24), (__int64)v62);
    if (v63 != 0) {
      if (v28 != 0) {
        v64 = 40;
      }
      else {
        v64 = -1;
      }
      *(_BYTE*)(v63 + 89) = v64;
    }
    v65 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24),
                                     (__int64)"L_Link_Key_L");
    if (v65 != 0) {
      if (v28 != 0) {
        v66 = 40;
      }
      else {
        v66 = -1;
      }
      *(_BYTE*)(v65 + 89) = v66;
    }
    v67 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24),
                                     (__int64)"L_Link_Key_R");
    if (v67 != 0) {
      if (v28 != 0) {
        v68 = 40;
      }
      else {
        v68 = -1;
      }
      *(_BYTE*)(v67 + 89) = v68;
    }
    result = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24),
                                        (__int64)"L_KeyA/T_Key");
    if (result != 0) {
      if (v28 != 0) {
        v69 = 40;
      }
      else {
        v69 = -1;
      }
      *(_BYTE*)(result + 89) = v69;
    }
    *(_BYTE*)(a1 + 205) = v28;
  }
  return result;
}

#pragma GCC visibility pop
