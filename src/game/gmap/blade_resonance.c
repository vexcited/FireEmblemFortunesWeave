#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_132a900(_QWORD, _QWORD);
__int64 GameRoutine_134efc0(_QWORD, _QWORD);
__int64 GameRoutine_14a1390(__int64*, char);
__int64 GameRoutine_14b7a80(_QWORD);
__int64 GameRoutine_14b8500(void);
__int64 GameRoutine_14b8ca0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern _UNKNOWN GameData_1aa9eb3;
extern _UNKNOWN GameData_1ab1818;
extern _UNKNOWN GameData_1abbb2b;
extern _UNKNOWN GameData_1af6c29;
extern _UNKNOWN* GameData_1afe67f;
extern __int64 (*game_gmap_BladeResonance_Impl_PredictEffect_vtable)();
extern __int64 (*game_gmap_BladeResonance_Impl_PredictSpot_vtable)();
extern __int64 GameData_212d748[2];
extern __int64 GameData_2131678;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c9700;
extern __int64 GameData_21c9ee8;
extern __int64 GameData_21f1620;
extern __int64 GameData_22416c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_2130df0[3];
__int64 BladeResonance_Unknown2(__int64 a1);
__int64 BladeResonance_Unknown3(__int64 result);
__int64 BladeResonance_14b6fc0(__int64 result, __int64 a2);
__int64 BladeResonance_14b7680();
float BladeResonance_14b7750();
long double BladeResonance_14b7810();
void BladeResonance_14b7840();
__int64 BladeResonance_14b7950();
bool BladeResonance_14b8210();
__int64 BladeResonance_14b8270(__int64 a1);

__int64 BladeResonance_Unknown2(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  int v4;
  __int64 v5;
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
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 result;
  _QWORD v23[2];

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      272, 16, 0);
  *(_QWORD*)v3 = 0;
  *(_QWORD*)(v3 + 8) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_BYTE*)(v3 + 24) = 0;
  *(_DWORD*)(v3 + 32) = 0;
  v23[1] = &GameData_1afe67f;
  v23[0] = game_HashString(&GameData_1afe67f);
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v23);
    if (v5 != 0) {
      v4 = *(_DWORD*)(v5 + 32);
    }
    else {
      v4 = 0;
    }
  }
  v6 = *v2;
  *(_DWORD*)(v3 + 36) = v4;
  v7 = fw_memory_HeapManager_Allocate(v6, 296, 16, 0);
  *(_QWORD*)(v7 + 16) = 0;
  v8 = GameData_2131678;
  *(_DWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_DWORD*)(v7 + 48) = 0x2000;
  v9 = v8 + 16;
  *(_DWORD*)(v7 + 104) = 0;
  *(_WORD*)(v7 + 108) = 256;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_WORD*)(v7 + 80) = 0;
  *(_DWORD*)(v7 + 112) = -1082130432;
  *(_WORD*)(v7 + 116) = 0;
  *(_WORD*)(v7 + 136) = 0;
  *(_BYTE*)(v7 + 160) = 0;
  *(_BYTE*)(v7 + 288) = 0;
  *(_QWORD*)(v7 + 272) = 0;
  *(_QWORD*)(v7 + 280) = 0;
  *(_QWORD*)(v7 + 256) = 0;
  *(_QWORD*)(v7 + 264) = 0;
  *(_QWORD*)(v7 + 240) = 0;
  *(_QWORD*)(v7 + 248) = 0;
  *(_QWORD*)(v7 + 224) = 0;
  *(_QWORD*)(v7 + 232) = 0;
  *(_QWORD*)(v7 + 208) = 0;
  *(_QWORD*)(v7 + 216) = 0;
  *(_QWORD*)(v7 + 192) = 0;
  *(_QWORD*)(v7 + 200) = 0;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 184) = 0;
  *(_QWORD*)(v7 + 168) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_DWORD*)(v7 + 127) = 0;
  *(_DWORD*)(v7 + 292) = 2;
  *(_QWORD*)(v3 + 48) = v7;
  *(_QWORD*)(v7 + 24) = 0;
  v10 = v7 + 24;
  *(_QWORD*)v7 = v9;
  *(_QWORD*)(v7 + 8) = 0;
  v11 = *v2;
  *(_QWORD*)(v3 + 40) = v10;
  v12 = fw_memory_HeapManager_Allocate(v11, 296, 16, 0);
  *(_QWORD*)(v12 + 8) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)v12 = v9;
  v13 = v12;
  *(_DWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_DWORD*)(v12 + 48) = 0x2000;
  *(_DWORD*)(v12 + 104) = 0;
  *(_WORD*)(v12 + 108) = 256;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_WORD*)(v12 + 80) = 0;
  *(_DWORD*)(v12 + 112) = -1082130432;
  *(_WORD*)(v12 + 116) = 0;
  *(_WORD*)(v12 + 136) = 0;
  *(_BYTE*)(v12 + 160) = 0;
  *(_BYTE*)(v12 + 288) = 0;
  *(_QWORD*)(v12 + 272) = 0;
  *(_QWORD*)(v12 + 280) = 0;
  *(_QWORD*)(v12 + 256) = 0;
  *(_QWORD*)(v12 + 264) = 0;
  *(_QWORD*)(v12 + 240) = 0;
  *(_QWORD*)(v12 + 248) = 0;
  *(_QWORD*)(v12 + 224) = 0;
  *(_QWORD*)(v12 + 232) = 0;
  *(_QWORD*)(v12 + 208) = 0;
  *(_QWORD*)(v12 + 216) = 0;
  *(_QWORD*)(v12 + 192) = 0;
  *(_QWORD*)(v12 + 200) = 0;
  *(_QWORD*)(v12 + 176) = 0;
  *(_QWORD*)(v12 + 184) = 0;
  *(_QWORD*)(v12 + 168) = 0;
  *(_QWORD*)(v12 + 120) = 0;
  *(_DWORD*)(v12 + 127) = 0;
  *(_DWORD*)(v12 + 292) = 2;
  *(_QWORD*)(v3 + 64) = v12;
  v14 = *v2;
  *(_QWORD*)(v13 + 24) = 0;
  *(_QWORD*)(v3 + 56) = v13 + 24;
  v15 = fw_memory_HeapManager_Allocate(v14, 296, 16, 0);
  *(_QWORD*)(v15 + 8) = 0;
  *(_QWORD*)(v15 + 16) = 0;
  *(_QWORD*)v15 = v9;
  v16 = v15;
  *(_DWORD*)(v15 + 32) = 0;
  *(_QWORD*)(v15 + 40) = 0;
  *(_DWORD*)(v15 + 48) = 0x2000;
  *(_DWORD*)(v15 + 104) = 0;
  *(_WORD*)(v15 + 108) = 256;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 0;
  *(_WORD*)(v15 + 80) = 0;
  *(_DWORD*)(v15 + 112) = -1082130432;
  *(_WORD*)(v15 + 116) = 0;
  *(_WORD*)(v15 + 136) = 0;
  *(_BYTE*)(v15 + 160) = 0;
  *(_BYTE*)(v15 + 288) = 0;
  *(_QWORD*)(v15 + 272) = 0;
  *(_QWORD*)(v15 + 280) = 0;
  *(_QWORD*)(v15 + 256) = 0;
  *(_QWORD*)(v15 + 264) = 0;
  *(_QWORD*)(v15 + 240) = 0;
  *(_QWORD*)(v15 + 248) = 0;
  *(_QWORD*)(v15 + 224) = 0;
  *(_QWORD*)(v15 + 232) = 0;
  *(_QWORD*)(v15 + 208) = 0;
  *(_QWORD*)(v15 + 216) = 0;
  *(_QWORD*)(v15 + 192) = 0;
  *(_QWORD*)(v15 + 200) = 0;
  *(_QWORD*)(v15 + 176) = 0;
  *(_QWORD*)(v15 + 184) = 0;
  *(_QWORD*)(v15 + 168) = 0;
  *(_QWORD*)(v15 + 120) = 0;
  *(_DWORD*)(v15 + 127) = 0;
  *(_DWORD*)(v15 + 292) = 2;
  *(_QWORD*)(v3 + 80) = v15;
  v17 = *v2;
  *(_QWORD*)(v16 + 24) = 0;
  *(_QWORD*)(v3 + 72) = v16 + 24;
  v18 = fw_memory_HeapManager_Allocate(v17, 296, 16, 0);
  *(_QWORD*)(v18 + 8) = 0;
  *(_QWORD*)(v18 + 16) = 0;
  *(_QWORD*)v18 = v9;
  *(_DWORD*)(v18 + 32) = 0;
  *(_QWORD*)(v18 + 40) = 0;
  *(_DWORD*)(v18 + 48) = 0x2000;
  *(_DWORD*)(v18 + 104) = 0;
  *(_WORD*)(v18 + 108) = 256;
  *(_QWORD*)(v18 + 56) = 0;
  *(_QWORD*)(v18 + 64) = 0;
  *(_QWORD*)(v18 + 72) = 0;
  *(_WORD*)(v18 + 80) = 0;
  *(_DWORD*)(v18 + 112) = -1082130432;
  *(_WORD*)(v18 + 116) = 0;
  *(_WORD*)(v18 + 136) = 0;
  *(_BYTE*)(v18 + 160) = 0;
  *(_BYTE*)(v18 + 288) = 0;
  *(_QWORD*)(v18 + 272) = 0;
  *(_QWORD*)(v18 + 280) = 0;
  *(_QWORD*)(v18 + 256) = 0;
  *(_QWORD*)(v18 + 264) = 0;
  *(_QWORD*)(v18 + 240) = 0;
  *(_QWORD*)(v18 + 248) = 0;
  *(_QWORD*)(v18 + 224) = 0;
  *(_QWORD*)(v18 + 232) = 0;
  *(_QWORD*)(v18 + 208) = 0;
  *(_QWORD*)(v18 + 216) = 0;
  *(_QWORD*)(v18 + 192) = 0;
  *(_QWORD*)(v18 + 200) = 0;
  *(_QWORD*)(v18 + 176) = 0;
  *(_QWORD*)(v18 + 184) = 0;
  *(_QWORD*)(v18 + 168) = 0;
  *(_QWORD*)(v18 + 120) = 0;
  *(_DWORD*)(v18 + 127) = 0;
  *(_DWORD*)(v18 + 292) = 2;
  *(_QWORD*)(v3 + 96) = v18;
  *(_QWORD*)(v18 + 24) = 0;
  *(_QWORD*)(v3 + 88) = v18 + 24;
  *(_WORD*)(v3 + 104) = 0;
  v19 = *v2;
  v20 = GameData_2130df0[0] + 2;
  *(_QWORD*)(v3 + 148) = 0;
  *(_WORD*)(v3 + 144) = 256;
  *(_QWORD*)(v3 + 128) = 0;
  *(_QWORD*)(v3 + 136) = 0x100000000LL;
  *(_QWORD*)(v3 + 160) = 1065353216;
  *(_QWORD*)(v3 + 112) = &game_gmap_BladeResonance_Impl_PredictEffect_vtable;
  *(_QWORD*)(v3 + 120) = v20;
  v21 = fw_memory_HeapManager_Allocate(v19, 296, 16, 0);
  *(_QWORD*)(v21 + 8) = 0;
  *(_QWORD*)(v21 + 16) = 0;
  *(_QWORD*)v21 = v9;
  *(_DWORD*)(v21 + 32) = 0;
  *(_QWORD*)(v21 + 40) = 0;
  *(_DWORD*)(v21 + 48) = 0x2000;
  *(_DWORD*)(v21 + 104) = 0;
  *(_WORD*)(v21 + 108) = 256;
  *(_QWORD*)(v21 + 56) = 0;
  *(_QWORD*)(v21 + 64) = 0;
  *(_QWORD*)(v21 + 72) = 0;
  *(_WORD*)(v21 + 80) = 0;
  *(_DWORD*)(v21 + 112) = -1082130432;
  *(_WORD*)(v21 + 116) = 0;
  *(_WORD*)(v21 + 136) = 0;
  *(_BYTE*)(v21 + 160) = 0;
  *(_BYTE*)(v21 + 288) = 0;
  *(_QWORD*)(v21 + 272) = 0;
  *(_QWORD*)(v21 + 280) = 0;
  *(_QWORD*)(v21 + 256) = 0;
  *(_QWORD*)(v21 + 264) = 0;
  *(_QWORD*)(v21 + 240) = 0;
  *(_QWORD*)(v21 + 248) = 0;
  *(_QWORD*)(v21 + 224) = 0;
  *(_QWORD*)(v21 + 232) = 0;
  *(_QWORD*)(v21 + 208) = 0;
  *(_QWORD*)(v21 + 216) = 0;
  *(_QWORD*)(v21 + 192) = 0;
  *(_QWORD*)(v21 + 200) = 0;
  *(_QWORD*)(v21 + 176) = 0;
  *(_QWORD*)(v21 + 184) = 0;
  *(_QWORD*)(v21 + 168) = 0;
  *(_QWORD*)(v21 + 120) = 0;
  *(_DWORD*)(v21 + 127) = 0;
  *(_DWORD*)(v21 + 292) = 2;
  *(_QWORD*)(v3 + 176) = v21;
  *(_QWORD*)(v21 + 24) = 0;
  result = v21 + 24;
  *(_QWORD*)(v3 + 240) = 1056964608;
  *(_QWORD*)(v3 + 168) = result;
  *(_QWORD*)(v3 + 228) = 0;
  *(_WORD*)(v3 + 224) = 256;
  *(_QWORD*)(v3 + 208) = 0;
  *(_QWORD*)(v3 + 216) = 0x100000000LL;
  *(_QWORD*)(v3 + 192) = &game_gmap_BladeResonance_Impl_PredictSpot_vtable;
  *(_QWORD*)(v3 + 200) = v20;
  *(_QWORD*)(a1 + 8) = v3;
  return result;
}

__int64 BladeResonance_Unknown3(__int64 result)
{
  __int64 v1;
  _DWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(result + 8);
  if (v1 != 0) {
    v2 = *(_DWORD**)(v1 + 40);
    if (*(_QWORD*)v2 != 0 && *(_DWORD*)(*(_QWORD*)v2 + 16LL) == v2[2]) {
      GameRoutine_14a1390((__int64*)(v1 + 40), 1);
    }
    if (((**(__int64 (***)(__int64))(v1 + 112))(v1 + 112) & 1) != 0) {
      GameRoutine_14a1390((__int64*)(v1 + 168), 1);
    }
    v3 = *(_QWORD*)(v1 + 176);
    *(_QWORD*)(v1 + 112) = &game_gmap_BladeResonance_Impl_PredictEffect_vtable;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak();
    }
    v4 = *(_QWORD*)(v1 + 96);
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak();
    }
    v5 = *(_QWORD*)(v1 + 80);
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak();
    }
    v6 = *(_QWORD*)(v1 + 64);
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak();
    }
    v7 = *(_QWORD*)(v1 + 48);
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak();
    }
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v1);
  }
  return result;
}

__int64 BladeResonance_14b6fc0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(a2 + 8);
  v4 = v2 + 1;
  *(_DWORD*)(a2 + 20) = v2 + 1;
  if (*(_BYTE*)(v3 + v2) != 0) {
    *(_DWORD*)(a2 + 20) = v2 + 2;
    *(_DWORD*)(result + 36) = *(unsigned __int8*)(v3 + v4);
    LODWORD(v4) = *(_DWORD*)(a2 + 20);
    v3 = *(_QWORD*)(a2 + 8);
  }
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_DWORD*)(result + 32) = *(unsigned __int8*)(v3 + (int)v4);
  v5 = *(int*)(a2 + 20);
  v6 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  v7 = *(unsigned __int8*)(v6 + v5);
  *(_DWORD*)(a2 + 20) = v5 + 2;
  v8 = v7 | ((unsigned __int64)*(unsigned __int8*)(v6 + v5 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v5 + 3;
  v9 = v8 | ((unsigned __int64)*(unsigned __int8*)(v6 + v5 + 2) << 16);
  *(_DWORD*)(a2 + 20) = v5 + 4;
  v10 = v9 | ((unsigned __int64)*(unsigned __int8*)(v6 + v5 + 3) << 24);
  *(_DWORD*)(a2 + 20) = v5 + 5;
  v11 = v10 | ((unsigned __int64)*(unsigned __int8*)(v6 + v5 + 4) << 32);
  *(_DWORD*)(a2 + 20) = v5 + 6;
  v12 = v11 | ((unsigned __int64)*(unsigned __int8*)(v6 + v5 + 5) << 40);
  *(_DWORD*)(a2 + 20) = v5 + 7;
  v13 = *(unsigned __int8*)(v6 + v5 + 6);
  *(_DWORD*)(a2 + 20) = v5 + 8;
  v14 = v12 | (v13 << 48) |
        ((unsigned __int64)*(unsigned __int8*)(v6 + v5 + 7) << 56);
  if (v14 == 0) {
    return result;
  }
  v15 = *(_QWORD*)(GameData_21c9ee8 + 96);
  if (v15 == 0 || *(_QWORD*)(GameData_21c9ee8 + 112) == 0) {
    return result;
  }
  v17 = v15 - 1;
  if ((v15 & (v15 - 1)) != 0) {
    v18 = v14;
    if (v14 >= v15) {
      v18 = v14 % v15;
    }
  }
  else {
    v18 = v17 & v14;
  }
  v19 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ee8 + 88) + 8 * v18);
  if (v19 == nullptr) {
    return result;
  }
  v20 = (_QWORD*)*v19;
  if (v20 == nullptr) {
    return result;
  }
  if ((v15 & v17) == 0) {
    while (1) {
      v22 = v20[1];
      if (v22 == v14) {
        if (v20[2] == v14) {
          goto LABEL_28;
        }
      }
      else if ((v22 & v17) != v18) {
        return result;
      }
      v20 = (_QWORD*)*v20;
      if (v20 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v21 = v20[1];
    if (v21 == v14) {
      break;
    }
    if (v21 >= v15) {
      v21 %= v15;
    }
    if (v21 != v18) {
      return result;
    }
  LABEL_17:
    v20 = (_QWORD*)*v20;
    if (v20 == nullptr) {
      return result;
    }
  }
  if (v20[2] != v14) {
    goto LABEL_17;
  }

LABEL_28:
  v23 = v20[3];
  if (v23 != 0) {
    *(_QWORD*)(result + 16) = v23;
    v24 = result;
    *(_QWORD*)result = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v23 + 40));
    v25 = *(_QWORD*)(v23 + 56);
    if (v25 == 0 ||
        (v26 = *(_QWORD*)(GameData_21c96e8 + 8), v27 = *(__int64**)(v26 + 8),
         v28 = *(__int64**)(v26 + 16), v27 == v28)) {
    LABEL_33:
      v29 = 0;
    }
    else {
      while (1) {
        v30 = *v27++;
        v29 = v30;
        if (*(_QWORD*)(v30 + 96) == v25) {
          break;
        }
        if (v27 == v28) {
          goto LABEL_33;
        }
      }
    }
    *(_QWORD*)(v24 + 8) = v29;
    return GameRoutine_14b8500();
  }
  return result;
}

__int64 BladeResonance_14b7680()
{
  __int64 v0;
  __int64 v1;
  int v2;
  int v3;
  __int64 result;
  int v5;
  __int64 v6;
  _UNKNOWN** v7;

  v0 = *(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL);
  v7 = (_UNKNOWN**)&GameData_1aa9eb3;
  v6 = game_HashString(&GameData_1aa9eb3);
  if (game_GameModeData_instance_ != 0 &&
      (v1 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &v6)) != 0) {
    v2 = *(_DWORD*)(v1 + 32);
  }
  else {
    v2 = 0;
  }
  v3 = *(_DWORD*)(v0 + 36);
  v7 = &GameData_1afe67f;
  result = game_HashString(&GameData_1afe67f);
  v5 = game_GameModeData_instance_;
  v6 = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v6);
    if (result != 0) {
      v5 = *(_DWORD*)(result + 32);
    }
    else {
      v5 = 0;
    }
  }
  if (v5 >= v3 + v2) {
    v5 = v3 + v2;
  }
  *(_DWORD*)(v0 + 36) = v5;
  return result;
}

float BladeResonance_14b7750()
{
  __int64 v0;
  float v1;
  float v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v7;
  _UNKNOWN** v8;

  v0 = *(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL);
  v8 = (_UNKNOWN**)&GameData_1af6c29;
  v1 = 0.0;
  v2 = 0.0;
  v7 = game_HashString(&GameData_1af6c29);
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v7);
    if (v3 != 0) {
      v2 = (float)*(int*)(v3 + 32);
    }
  }
  v4 = *(_DWORD*)(v0 + 36);
  v8 = &GameData_1afe67f;
  v7 = game_HashString(&GameData_1afe67f);
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v7);
    if (v5 != 0) {
      v1 = (float)*(int*)(v5 + 32);
    }
  }
  return (float)(v2 * (float)v4) / v1;
}

long double BladeResonance_14b7810()
{
  return *(long double*)(*(_QWORD*)(GameData_21f1620 + 8) + 256LL);
}

void BladeResonance_14b7840()
{
  __int64 v0;
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  int v10;
  __int64 v11;

  v0 = *(_QWORD*)(GameData_21f1620 + 8);
  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64**)(v1 + 8);
  v4 = *(__int64**)(v1 + 16);
  if ((v2 & 0x80000000) == 0) {
    while (v3 != v4) {
      v6 = *v3++;
      v5 = v6;
      if (*(_DWORD*)(v6 + 84) == v2) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  if (v3 == v4) {
    goto LABEL_7;
  }
  while (1) {
    v5 = *v3;
    if (*(_QWORD*)(*v3 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
      break;
    }
    if (++v3 == v4) {
      goto LABEL_7;
    }
  }

LABEL_8:
  v7 = *(_QWORD*)(GameData_21c9700 + 8);
  v8 = *(__int64**)(v7 + 48);
  v9 = *(__int64**)(v7 + 56);
  if (v8 == v9) {
    LOBYTE(v10) = 0;
  }
  else {
    v10 = 0;
    do {
      v11 = *v8++;
      v10 |= GameRoutine_132a900(v11, v5);
    } while (v8 != v9);
  }
  *(_BYTE*)(v0 + 104) = v10 & 1;
}

__int64 BladeResonance_14b7950()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  void* v10;

  if ((GameRoutine_14b7a80(*(_QWORD*)(GameData_21f1620 + 8)) & 1) != 0) {
    BladeResonance_14b7d00(*(_QWORD*)(GameData_21f1620 + 8));
  LABEL_16:
    v3 = *(_QWORD*)(GameData_21f1620 + 8);
    goto LABEL_17;
  }
  v10 = &GameData_1abbb2b;
  v0 = game_HashString(&GameData_1abbb2b);
  v9 = v0;
  if (game_GameModeData_instance_ != 0) {
    v0 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v9);
    if (v0 != 0 && *(_DWORD*)(v0 + 32) != 0) {
      result = 0;
      v3 = *(_QWORD*)(GameData_21f1620 + 8);
    LABEL_13:
      *(_BYTE*)(v3 + 105) = 0;
      return result;
    }
  }
  if ((GameRoutine_134efc0(v0, v1) & 1) != 0) {
    v4 = *(_QWORD*)(GameData_21f1620 + 8);
    v10 = &GameData_1ab1818;
    v5 = *(_DWORD*)(v4 + 36);
    v6 = game_HashString(&GameData_1ab1818);
    v7 = game_GameModeData_instance_;
    v9 = v6;
    if (game_GameModeData_instance_ != 0) {
      v8 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v9);
      if (v8 != 0) {
        v7 = *(_DWORD*)(v8 + 32);
      }
      else {
        v7 = 0;
      }
    }
    *(_DWORD*)(v4 + 36) = (v5 - v7) & ~((v5 - v7) >> 31);
    goto LABEL_16;
  }
  v3 = *(_QWORD*)(GameData_21f1620 + 8);
  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    result = 0;
    goto LABEL_13;
  }

LABEL_17:
  *(_BYTE*)(v3 + 105) = 1;
  return 1;
}

bool BladeResonance_14b8210()
{
  __int64 v0;
  _DWORD* v1;
  _DWORD* v3;

  v0 = *(_QWORD*)(GameData_21f1620 + 8);
  v1 = *(_DWORD**)(v0 + 72);
  if (*(_QWORD*)v1 != 0 && *(_DWORD*)(*(_QWORD*)v1 + 16LL) == v1[2]) {
    return true;
  }
  v3 = *(_DWORD**)(v0 + 88);
  return *(_QWORD*)v3 != 0 && *(_DWORD*)(*(_QWORD*)v3 + 16LL) == v3[2];
}

__int64 BladeResonance_14b8270(__int64 a1)
{
  unsigned __int8 v2;
  unsigned __int8 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v8;

  v2 = GameRoutine_14b8ca0(a1 + 112);
  v3 = (**(__int64 (***)(__int64))(a1 + 192))(a1 + 192);
  if ((v3 & 1) != 0) {
    v4 = *(unsigned __int8*)(a1 + 224);
    v8 = 0;
    if (v4 == 1) {
      (*(void (**)(__int64, double, double))(*(_QWORD*)(a1 + 200) + 24LL))(
          a1 + 200, 0.0, 0.0);
      *(_DWORD*)(a1 + 208) = 0;
    }
    else {
      if (*(float*)(a1 + 208) <= 0.5) {
        if (((*(__int64 (**)(__int64, int*, __int64))(
                 *(_QWORD*)(a1 + 200) + 8LL))(a1 + 200, &v8, a1 + 232) &
             1) == 0) {
        LABEL_10:
          *(_DWORD*)(a1 + 244) = 2;
          return v2 & v3 & 1;
        }
        (*(void (**)(__int64))(*(_QWORD*)(a1 + 200) + 16LL))(a1 + 200);
        v5 = *(_QWORD*)(a1 + 200);
        v6 = a1 + 200;
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)(a1 + 200) + 16LL))(a1 + 200);
        v5 = *(_QWORD*)(a1 + 200);
        v6 = a1 + 200;
      }
      (*(void (**)(__int64))(v5 + 24))(v6);
      *(_DWORD*)(a1 + 208) = 1056964608;
    }
    *(_DWORD*)(a1 + 212) = 0;
    *(_WORD*)(a1 + 224) = 256;
    goto LABEL_10;
  }
  return v2 & v3 & 1;
}

#pragma GCC visibility pop
