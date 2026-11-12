#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13289e0(_QWORD);
__int64 GameRoutine_1329500(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1332f00(_QWORD);
__int64 SpotMgr_1333c60(void);
__int64 SpotMgr_1333de0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_2046240[])();
extern __int64 GameData_21c9700;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_script_hub_g_frame_counter;
extern __int64* GameData_212c790;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_892740(void);
__int64 game_gmap_anonymous_ProcGmapOpenRouteSeq_BeginRouteOpen_alt1(
    __int64 result) __asm__("game_gmap_anonymous_ProcGmapOpenRouteSeq_"
                            "BeginRouteOpen");
__int64 ProcGmapOpenRouteSeq_14ce090(__int64 result);
__int64 ProcGmapOpenRouteSeq_14ce120(__int64 result);
__int64 game_gmap_anonymous_ProcGmapOpenRouteSeq_BeginRouteOpen_closure_Invoke(
    __int64 result, __int64 a2);
bool SpotMgr_1333c60_alt1() __asm__("SpotMgr_1333c60");
bool SpotMgr_1333de0_alt1(__int64) __asm__("SpotMgr_1333de0");
void GameRoutine_13289e0_alt1(float32x4_t*) __asm__("GameRoutine_13289e0");
void SpotMgr_1332f00(__int64);
void game_gmap_1329500(__int64, char*, char, char);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_gmap_anonymous_ProcGmapOpenRouteSeq_BeginRouteOpen(__int64 a1);

void game_gmap_anonymous_ProcGmapOpenRouteSeq_BeginRouteOpen(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float32x4_t** v5;
  float32x4_t** v6;
  float32x4_t* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  struct {
    __int64 v20;
    __int64 v21;
    __int64 v22;
  } v20_;

  if (game_GameModeData_instance_ != 0 &&
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0) {
    return;
  }
  *(_DWORD*)(a1 + 152) = 0;
  if (SpotMgr_1333c60_alt1()) {
    v20_.v21 = 0;
    v20_.v22 = 0;
    v20_.v20 = 0;
    v18_.v18[0] = GameData_2046240;
    v18_.v18[1] = &v20_.v20;
    v18_.v19 = v18_.v18;
    SpotMgr_1333de0_alt1((__int64)v18_.v18);
    SpotMgr_1332f00((__int64)&v20_.v20);
    if (v18_.v19 == v18_.v18) {
      v1 = 32;
    }
    else {
      if (v18_.v19 == nullptr) {
        goto LABEL_9;
      }
      v1 = 40;
    }
    (*(void (**)(__int64))(*v18_.v19 + v1))((__int64)v18_.v19);
  LABEL_9:
    if (v20_.v20 != 0) {
      v20_.v21 = v20_.v20;
      v2 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v2 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v20_.v20);
    }
  }
  v3 = GameData_21c9700;
  v4 = *(_QWORD*)(GameData_21c9700 + 8);
  v5 = *(float32x4_t***)(v4 + 144);
  v6 = *(float32x4_t***)(v4 + 152);
  if (v5 != v6) {
    do {
      v7 = *v5++;
      GameRoutine_13289e0_alt1(v7);
    } while (v5 != v6);
    v5 = *(float32x4_t***)(v4 + 144);
    v3 = GameData_21c9700;
  }
  *(_QWORD*)(v4 + 152) = v5;
  v8 = *(_QWORD*)(v3 + 8);
  v9 = *(__int64**)(v8 + 168);
  v10 = *(__int64**)(v8 + 176);
  if (v9 != v10) {
    v11 = GameData_212c790;
    do {
      v12 = *v9;
      if (*(_BYTE*)(*v9 + 176) != 1) {
        v13 = *(_QWORD*)(*v11 + 8);
        v14 = *(_QWORD**)(v13 + 8);
        v15 = *(_QWORD**)(v13 + 16);
        while (v14 != v15) {
          v16 = (_QWORD*)*v14;
          if (*(_QWORD*)*v14 == v12 && v16[12] == 0 && v16[69] == 0) {
            goto LABEL_18;
          }
          ++v14;
        }
        v17 = *(_QWORD*)(v12 + 120);
        *(_BYTE*)(v12 + 176) = 1;
        if (v17 != 0) {
          game_gmap_1329500((__int64)v18_.v18, (char*)v12, 1, 1);
        }
      }
    LABEL_18:
      ++v9;
    } while (v9 != v10);
    v9 = *(__int64**)(v8 + 168);
  }
  *(_QWORD*)(v8 + 176) = v9;
}

__int64 ProcGmapOpenRouteSeq_14ce090(__int64 result)
{
  float v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;

  if (game_GameModeData_instance_ != 0 &&
          (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0 ||
      (v1 = *(float*)(game_script_hub_g_frame_counter + 160) +
            *(float*)(result + 152),
       *(float*)(result + 152) = v1, v1 >= 5.0)) {
    v2 = *(unsigned __int8**)(result + 16);
    if (v2 != nullptr) {
      v3 = *v2;
      v4 = v3 > 0x10;
      v5 = (1 << v3) & 0x1CE00;
      if (!v4 && v5 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 ProcGmapOpenRouteSeq_14ce120(__int64 result)
{
  if (game_GameModeData_instance_ == 0 ||
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) == 0) {
    *(_DWORD*)(result + 152) = 0;
  }
  return result;
}

__int64 game_gmap_anonymous_ProcGmapOpenRouteSeq_BeginRouteOpen_closure_Invoke(
    __int64 result, __int64 a2)
{
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *(__int64**)(result + 8);
  v3 = *(_QWORD*)(*(_QWORD*)a2 + 120LL);
  v5 = (_QWORD*)v2[1];
  v4 = v2[2];
  if ((unsigned __int64)v5 >= v4) {
    v7 = *v2;
    v8 = (__int64)v5 - *v2;
    v9 = (v8 >> 3) + 1;
    if (v9 >> 61 != 0) {
      GameRoutine_892740();
    }
    v10 = v4 - v7;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v10 >> 2 > v9) {
      v9 = v10 >> 2;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
    }
    else {
      v13 = 0;
    }
    v14 = v13 + 8 * v12;
    v15 = v13 + v8 - 8 * (v8 >> 3);
    *(_QWORD*)(v13 + v8) = v3;
    v6 = v13 + v8 + 8;
    result = memcpy(v15, v7, v8);
    *v2 = v15;
    v2[1] = v6;
    v2[2] = v14;
    if (v7 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v7);
    }
  }
  else {
    *v5 = v3;
    v6 = (__int64)(v5 + 1);
  }
  v2[1] = v6;
  return result;
}

#pragma GCC visibility pop
