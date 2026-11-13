#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 Dir_70df40(__int16*, __int16*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_facility_94abe0(__int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
char* game_util_Format(const char*, ...);
extern _UNKNOWN GameData_21f4318;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 ui_Manager_instance_;
extern int GameData_21f4314;
int __cxa_guard_acquire(__int64);
typedef __int64 GameAlign_21f430c __attribute__((aligned(4)));
extern GameAlign_21f430c GameData_21f430c;
unsigned __int64 LayoutAccessor_1562b50(__int64*, const char*);
unsigned __int64 strlen(const char*);
void CookingFile_9249e0(__int64*, char);
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_facility_anonymous_15f3480(__int64 a1);
void game_facility_anonymous_1936870(__int64* a1, char a2);

__int64 game_facility_anonymous_15f3480(__int64 a1)
{
  __int64 v1;
  __int16* v2;
  int v3;
  char v4;
  __int64* v5;
  __int64* v6;
  char* v7;
  unsigned int v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  _BYTE* v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  bool v25;
  __int64 v26;
  __int64* v28;
  struct {
    __int64 v30;
    unsigned __int64 v31;
    _BYTE* v32;
  } v30_;
  struct {
    __int64* v33;
    __int64* v34;
    __int64 v35;
  } v33_;

  v33_.v33 = nullptr;
  v33_.v34 = nullptr;
  v1 = game_gmap_GmapClock_instance_;
  v33_.v35 = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4318,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21f4318) != 0) {
    GameData_21f4314 = 0;
    GameData_21f430c = 0x10000205A5LL;
    __cxa_guard_release((__int64)&GameData_21f4318);
  }
  if (v1 != 0) {
    v2 = (__int16*)(v1 + 8);
  }
  else {
    v2 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v3 = Dir_70df40((__int16*)&GameData_21f430c, v2);
  if (v3 >= 1440) {
    v4 = (v3 / 0x2760u) & 3;
  }
  else {
    v4 = 0;
  }
  CookingFile_9249e0((__int64*)&v33_.v33, v4);
  v5 = v33_.v33;
  v6 = v33_.v34;
  v7 = "Thumb2";
  if (v33_.v33 != v33_.v34) {
    v8 = -1;
    v28 = v33_.v34;
    while (1) {
      v9 = *v5;
      v10 = game_util_Format("L_Recipe%02d", v8 + 1);
      LayoutAccessor_1560070((void*)(&v30_.v30), (__int64*)(a1 + 848), v10);
      if (v30_.v31 != 0) {
        v11 = std___1___shared_weak_count_lock(v30_.v31);
        v12 = (__int64*)v30_.v30;
        if (v30_.v31 != 0) {
          std___1___shared_weak_count___release_weak(v30_.v31);
        }
        if (v11 != 0 && v12 != nullptr) {
          v13 = ui_LayoutAccessor_FindPane(v12, (__int64)"RecipeThumb");
          if (v13 != 0) {
            v14 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d678[0],
                                 0);
          }
          else {
            v14 = 0;
          }
          v15 = game_util_Format("Recipe_%s", *(const char**)(v9 + 56));
          v16 = strlen(v15);
          if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
            String_60a1d0();
          }
          v17 = v16;
          if (v16 >= 0x17) {
            if ((v16 | 7) == 0x17) {
              v22 = 26;
            }
            else {
              v22 = (v16 | 7) + 1;
            }
            v23 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v22, 16, 0);
            v24 = v22 | 1;
            v6 = v28;
            v18 = (char*)v23;
            v30_.v31 = v17;
            v30_.v32 = (_BYTE*)v23;
            v30_.v30 = v24;
          }
          else {
            v18 = (char*)&v30_.v30 + 1;
            LOBYTE(v30_.v30) = 2 * v16;
            if (v16 == 0) {
              BYTE1(v30_.v30) = 0;
              if (v14 != 0) {
                goto LABEL_25;
              }
              goto LABEL_29;
            }
          }
          memmove((__int64)v18, (__int64)v15, v17);
          v18[v17] = 0;
          if (v14 != 0) {
          LABEL_25:
            if ((v30_.v30 & 1) != 0) {
              v19 = v30_.v32;
            }
            else {
              v19 = (char*)&v30_.v30 + 1;
            }
            Manager_136a920(ui_Manager_instance_ + 1264, v14, 0, 0xCu, v19);
          }
        LABEL_29:
          if ((v30_.v30 & 1) != 0 && v30_.v32 != nullptr) {
            v20 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v20 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                (__int64)v30_.v32);
          }
          if ((unsigned int)game_facility_94abe0(v9) >= 0x10000) {
            v21 = "Disable";
          }
          else {
            v21 = "Default";
          }
          LayoutAccessor_1562cf0((__int64)v12, v21);
        LABEL_38:
          if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
            std___1___shared_weak_count___release_weak(v11);
          }
          goto LABEL_10;
        }
        if (v11 != 0) {
          goto LABEL_38;
        }
      }
    LABEL_10:
      ++v5;
      ++v8;
      if (v5 == v6) {
        v5 = v33_.v33;
        v25 = v8 >= 2;
        v7 = "Thumb2";
        if (v25) {
          v7 = "Thumb3";
        }
        break;
      }
    }
  }
  if (v5 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  (__int64)v5);
  }
  return LayoutAccessor_1562cf0(a1 + 848, v7);
}

void game_facility_anonymous_1936870(__int64* a1, char a2)
{
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  char* v18;
  char* v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64 v24;
    unsigned __int64 v25;
    char* v26;
  } v24_;
  struct {
    __int64 v27;
    unsigned __int64 v28;
    char* v29;
  } v27_;

  v3 = a1[13];
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3);
    if (v5 != 0) {
      v6 = (__int64*)a1[12];
      v7 = v5;
      if (v6 == nullptr) {
      LABEL_50:
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
        return;
      }
      if ((a2 & 1) != 0) {
        v8 = "Select";
      }
      else {
        v8 = "Default";
      }
      if ((a2 & 1) != 0) {
        v9 = 6;
      }
      else {
        v9 = 7;
      }
      LOBYTE(v27_.v27) = 2 * v9;
      if ((a2 & 1) != 0) {
        v10 = 7;
      }
      else {
        v10 = 8;
      }
      memcpy((__int64)&v27_.v27 + 1, (__int64)v8, v9);
      v11 = *a1;
      *((_BYTE*)&v27_.v27 + v10) = 0;
      v12 = (const char*)(*(__int64 (**)(__int64*))(v11 + 552))(a1);
      v13 = game_util_Format("%s%s", v12, (const char*)&v27_.v27 + 1);
      v14 = strlen(v13);
      if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v15 = v14;
      if (v14 >= 0x17) {
        if ((v14 | 7) == 0x17) {
          v17 = 26;
        }
        else {
          v17 = (v14 | 7) + 1;
        }
        v16 = (const char*)fw_memory_HeapManager_Allocate(
            fw_memory_g_heap_manager, v17, 16, 0);
        v24_.v25 = v15;
        v24_.v26 = v16;
        v24_.v24 = v17 | 1;
      }
      else {
        LOBYTE(v24_.v24) = 2 * v14;
        v16 = (char*)&v24_.v24 + 1;
        if (v14 == 0) {
          goto LABEL_22;
        }
      }
      memmove((__int64)v16, (__int64)v13, v15);
    LABEL_22:
      v16[v15] = 0;
      if ((v24_.v24 & 1) != 0) {
        v18 = v24_.v26;
      }
      else {
        v18 = (char*)&v24_.v24 + 1;
      }
      if ((LayoutAccessor_1562b50(v6, v18) & 1) == 0) {
        if ((v24_.v24 & 1) != 0) {
          if ((v27_.v27 & 1) != 0) {
            v19 = (char*)v27_.v29;
          }
          else {
            v19 = (char*)&v27_.v27 + 1;
          }
          if ((v27_.v27 & 1) != 0) {
            v20 = v27_.v28;
          }
          else {
            v20 = (unsigned __int64)(unsigned __int8)v27_.v27 >> 1;
          }
          SpineModel_64dde0(&v24_.v24, (__int64)v19, v20);
        }
        else if ((v27_.v27 & 1) != 0) {
          GameRoutine_64df20(&v24_.v24, (__int64)v27_.v29, v27_.v28);
        }
        else {
          v24_.v24 = v27_.v27;
          v24_.v25 = v27_.v28;
          v24_.v26 = v27_.v29;
        }
      }
      if ((v24_.v24 & 1) != 0) {
        v21 = v24_.v26;
      }
      else {
        v21 = (char*)&v24_.v24 + 1;
      }
      GameHr_1562680((__int64)v6, v21, 0x1.0000000000000p+0f);
      if ((v24_.v24 & 1) != 0 && v24_.v26 != nullptr) {
        v22 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v24_.v26);
      }
      if ((v27_.v27 & 1) != 0 && v27_.v29 != nullptr) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, (__int64)v27_.v29);
      }
      goto LABEL_50;
    }
  }
}

#pragma GCC visibility pop
