#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 std___1___shared_weak_count___release_weak(__int64);
void game_gameui_159b580(__int64, _BYTE*, __int64, _DWORD*);
__int64 game_menu_anonymous_ProcTalkSelectQuestMenu_OnBuild_closure_Invoke(
    __int64 a1, _BYTE* a2, __int64 a3, _DWORD* a4);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 BaseQuestMenu_Unknown85(__int64);
__int64 BasicMenu_16dd280(_QWORD*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_167f810(__int64, int, __int64, __int64, int, __int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_menu_anonymous_187ec30(__int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 (*GameData_20fb2e8[])();
extern __int64 GameData_225e7a0;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
void __attribute__((noreturn)) GameRoutine_12680d0();
void __attribute__((noreturn)) GameRoutine_60a210();
void game_gameui_15d4ba0(__int64, __int64*, char, unsigned __int8, char);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
void game_menu_anonymous_ProcTalkSelectQuestMenu_OnBuild(__int64 a1);

void game_menu_anonymous_ProcTalkSelectQuestMenu_OnBuild(__int64 a1)
{
  _QWORD handle[2];
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned int** v9;
  __int64* v10;
  unsigned int* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned int* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 (***v26)();
  __int64 v27;
  struct {
    __int64 v28;
    unsigned int** v29;
    unsigned __int64 v30;
  } v28_;
  struct {
    __int64 (**v31)();
    __int64 v32;
    char gap48_[16];
    __int64 (***v33)();
  } v31_;

  BaseQuestMenu_Unknown85(a1);
  v2 = LayoutAccessor_155fbe0((__int64*)(a1 + 848), "L_Info");
  game_gameui_15d4ba0((__int64)v2, (__int64*)(a1 + 1072), 0,
                      *(_BYTE*)(a1 + 1088), 0);
  game_menu_anonymous_187ec30(a1);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1072) + 104LL))(a1 + 1072) &
       1) != 0 ||
      (*(_BYTE*)(a1 + 1088) & 1) != 0) {
    snd_Fade_Fade_10c830((__int64)&v31_.v31, 0x0.0p+0f);
    snd_play_ff2d0((void*)(handle), (__int64)"SE_SYS_Stamp",
                   (__int64)"SE_SYS_Stamp", (__int64)&v31_.v31, 0, 0x10001u, 0,
                   0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(&v31_.v31);
    LayoutAccessor_1560070((void*)(&v31_.v31), (__int64*)(a1 + 848),
                           "L_Info/L_Stamp");
    if (v31_.v32 != 0) {
      v3 = std___1___shared_weak_count_lock(v31_.v32);
      v4 = (__int64)v31_.v31;
      if (v31_.v32 != 0) {
        std___1___shared_weak_count___release_weak(v31_.v32);
      }
      if (v3 != 0 && v4 != 0) {
        LayoutAccessor_155e830(v4, 1);
        GameHr_1562680(v4, "In", 0x1.0000000000000p+0f);
      }
      else if (v3 == 0) {
        goto LABEL_12;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
LABEL_12:
  if (*(_WORD*)(**(_QWORD**)(a1 + 1080) + 128LL) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1072) + 96LL))(a1 + 1072) &
       1) != 0 ||
      (*(_BYTE*)(a1 + 1088) & 1) != 0) {
    return;
  }
  v5 = *(__int64**)(a1 + 1080);
  v28_.v29 = nullptr;
  v28_.v30 = 0;
  v28_.v28 = 0;
  v6 = *v5;
  if (*(_WORD*)(v6 + 128) != 0) {
    v7 = 8;
    v8 = 0;
    v9 = nullptr;
    do {
      v11 = game_gmap_SpotMgr_FindSpot(
          *(unsigned int**)(*(_QWORD*)(v6 + 136) + v7));
      if ((unsigned __int64)v9 < v28_.v30) {
        *v9++ = v11;
      }
      else {
        v12 = v28_.v28;
        v13 = (unsigned __int64)v9 - v28_.v28;
        v14 = ((__int64)v9 - v28_.v28) >> 3;
        v15 = v14 + 1;
        if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
          GameRoutine_12680d0();
        }
        v16 = v28_.v30 - v28_.v28;
        if ((__int64)(v28_.v30 - v28_.v28) >> 2 > v15) {
          v15 = v16 >> 2;
        }
        if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
          v17 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v17 = v15;
        }
        if (v17 != 0) {
          if (v17 >> 61 != 0) {
            GameRoutine_60a210();
          }
          v18 = v11;
          v19 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
          v11 = v18;
        }
        else {
          v19 = 0;
        }
        v20 = v19 + 8 * v17;
        v21 = v19 + v13 - 8 * v14;
        *(_QWORD*)(v19 + v13) = v11;
        v9 = (unsigned int**)(v19 + v13 + 8);
        memcpy(v21, v12, v13);
        v28_.v28 = v21;
        v28_.v30 = v20;
        if (v12 != 0) {
          v22 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v12);
        }
      }
      v10 = *(__int64**)(a1 + 1080);
      v28_.v29 = v9;
      ++v8;
      v7 += 16;
      v6 = *v10;
    } while (v8 < *(unsigned __int16*)(v6 + 128));
  }
  LayoutAccessor_1562cf0(a1 + 848, "Destination");
  v23 = *(_QWORD*)(a1 + 1080);
  v24 = BasicMenu_16dd280((_QWORD*)a1);
  v31_.v31 = GameData_20fb2e8;
  v31_.v32 = a1;
  v31_.v33 = &v31_.v31;
  if (GameData_225e7a0 != 0) {
    v25 = 4;
    v26 = &v31_.v31;
  LABEL_36:
    ((__int64 (*)(__int64))(*v26)[v25])((__int64)v26);
    goto LABEL_37;
  }
  GameHr_167f810(a1, 3, (__int64)&v28_.v28, v23, v24, (__int64)&v31_.v31);
  v26 = v31_.v33;
  if (v31_.v33 == &v31_.v31) {
    v25 = 4;
    goto LABEL_36;
  }
  if (v31_.v33 != nullptr) {
    v25 = 5;
    goto LABEL_36;
  }
LABEL_37:
  if (v28_.v28 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  v28_.v28);
  }
}

__int64 game_menu_anonymous_ProcTalkSelectQuestMenu_OnBuild_closure_Invoke(
    __int64 a1, _BYTE* a2, __int64 a3, _DWORD* a4)
{
  __int64 result;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  LayoutAccessor_1560070((void*)(&v8_.v8),
                         (__int64*)(*(_QWORD*)(a1 + 8) + 848LL), "L_Img");
  game_gameui_159b580((__int64)&v8_.v8, a2, a3, a4);
  result = v8_.v9;
  if (v8_.v9 != 0) {
    return std___1___shared_weak_count___release_weak(v8_.v9);
  }
  return result;
}

#pragma GCC visibility pop
