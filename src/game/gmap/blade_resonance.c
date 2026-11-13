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
__int64
BladeResonance_Unknown3_alt1(__int64 result) __asm__("BladeResonance_Unknown3");
__int64 BladeResonance_14b6fc0(__int64 result, __int64 a2);
__int64 BladeResonance_14b7680();
float BladeResonance_14b7750();
long double BladeResonance_14b7810();
void BladeResonance_14b7840();
__int64 BladeResonance_14b7950();
bool BladeResonance_14b8210();
__int64 BladeResonance_14b8270(__int64 a1);
__int64 BladeResonance_14b8500(_QWORD);
__int64 GameRoutine_133dba0(_QWORD, _QWORD);
__int64 GameRoutine_1347b30(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1536e70(_QWORD);
__int64 SpotMgr_1334160(_QWORD, _QWORD);
__int64 TelopParts_17cc7d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 TroopMgr_13485a0(void);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD, _QWORD);
extern _UNKNOWN GameData_1aa2459;
extern _UNKNOWN GameData_1ac4924;
extern __int64 GameData_2241720;
extern __int64* GameData_212c790;
extern __int64* GameData_212caf0[105];
__int64 BladeResonance_14b7200(__int64 a1);
__int64 BladeResonance_14b7d00(__int64 result);
__attribute__((swiftcall)) void UnitActor_81d430(PSEUDO_X8, __int64);
__int64* Manager_bc6460(_QWORD*, float32x4_t*, char);
__int64 Troop_133ed80(__int64 result, __int64);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 game_gmap_1536e70(int);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt2(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__n128 GameRoutine_14a1390_alt1(_QWORD*, char) __asm__("GameRoutine_14a1390");
__n128 GameRoutine_14a1520(_QWORD*, char);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_1aed6ab;
extern __int128 GameData_1a837f0;
extern __int64 (*GameData_202c698[])();
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 GameData_21c99c8;
extern char GameData_1a9f09e;
void BladeResonance_14b7400(__int64 a1);
void BladeResonance_14b7e60_alt1(_QWORD* a1) __asm__("BladeResonance_14b7e60");
__int64 BladeResonance_14b8380(__int64 result, char a2);
__int64 BladeResonance_14b8820(__int64 a1);
__int64
BladeResonance_14b7a80_alt1(__int64 a1) __asm__("BladeResonance_14b7a80");
__int64 GameHr_14b8500(__int64 result);
__int64 GameHr_17cc7d0(__int64, const char*, const char*, char, const char*,
                       char);
bool TroopMgr_134efc0();
unsigned int*
BladeResonance_14b7a80_alt2(__int64) __asm__("BladeResonance_14b7a80");
unsigned int* game_gmap_SpotMgr_FindSpot_alt1(unsigned int* result) __asm__(
    "game_gmap_SpotMgr_FindSpot");
unsigned int* game_gmap_SpotMgr_GetCurrentSpot_alt1() __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
float32x4_t* BladeResonance_14b7a80(__int64 a1);
__int64* Manager_bc6460_alt1(_QWORD*, __int64, char) __asm__("Manager_bc6460");
unsigned __int128 Manager_bc6460_alt1_pair(_QWORD*, __int64,
                                           char) __asm__("Manager_bc6460");
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_14a1390(__int64*, char);
__int64 std___1___shared_weak_count___release_weak_alt3(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void BladeResonance_Unknown3(__int64 a1);
__int64 BladeResonance_14b7e60(_QWORD* a1);

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

void BladeResonance_Unknown3(__int64 a1)
{
  __int64 v1;
  _DWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0) {
    v2 = *(_DWORD**)(v1 + 40);
    if (*(_QWORD*)v2 != 0 && *(_DWORD*)(*(_QWORD*)v2 + 16LL) == v2[2]) {
      GameHr_14a1390((__int64*)(v1 + 40), 1);
    }
    if (((**(__int64 (***)(__int64))(v1 + 112))(v1 + 112) & 1) != 0) {
      GameHr_14a1390((__int64*)(v1 + 168), 1);
    }
    v3 = *(_QWORD*)(v1 + 176);
    *(_QWORD*)(v1 + 112) = &game_gmap_BladeResonance_Impl_PredictEffect_vtable;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt3(v3);
    }
    v4 = *(_QWORD*)(v1 + 96);
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt3(v4);
    }
    v5 = *(_QWORD*)(v1 + 80);
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak_alt3(v5);
    }
    v6 = *(_QWORD*)(v1 + 64);
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt3(v6);
    }
    v7 = *(_QWORD*)(v1 + 48);
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt3(v7);
    }
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v1);
  }
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

__int64 BladeResonance_14b7200(__int64 a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  __int64** v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  struct {
    __int64 v18;
    _UNKNOWN** v19;
  } v18_;

  result = game_gmap_1536e70(5);
  if ((result & 1) == 0) {
    return result;
  }
  if (*(_QWORD*)(a1 + 16) != 0) {
    v3 = *(_QWORD*)(GameData_21c96e8 + 8);
    v4 = *(_DWORD*)(v3 + 56);
    v5 = *(__int64***)(v3 + 8);
    v6 = *(__int64***)(v3 + 16);
    if (v4 < 0) {
      for (; v5 != v6; ++v5) {
        v7 = *v5;
        if ((*v5)[12] == 0 && v7[69] == 0) {
          goto LABEL_13;
        }
      }
    }
    else if (v5 != v6) {
      while (1) {
        v8 = *v5++;
        v7 = v8;
        if (*((_DWORD*)v8 + 21) == v4) {
          break;
        }
        if (v5 == v6) {
          goto LABEL_9;
        }
      }
    LABEL_13:
      result = *v7;
      goto LABEL_14;
    }
  LABEL_9:
    result = (__int64)game_gmap_SpotMgr_GetCurrentSpot_alt1();
  LABEL_14:
    if (result == *(_QWORD*)a1) {
      return result;
    }
    GameHr_14b8500(a1);
  }
  v18_.v19 = (_UNKNOWN**)&GameData_1ac4924;
  v18_.v18 = game_HashString_alt1((__int64)&GameData_1ac4924);
  if (game_GameModeData_instance_ == 0 ||
      (v9 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v18_.v18)) == 0 ||
      *(_DWORD*)(v9 + 32) == 0) {
    v18_.v19 = (_UNKNOWN**)&GameData_1aa2459;
    v10 = game_HashString_alt1((__int64)&GameData_1aa2459);
    v11 = game_GameModeData_instance_;
    v18_.v18 = v10;
    if (game_GameModeData_instance_ != 0) {
      v12 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v18_.v18);
      if (v12 != 0) {
        v11 = *(_DWORD*)(v12 + 32);
      }
      else {
        v11 = 0;
      }
    }
    v13 = *(_DWORD*)(a1 + 36);
    v18_.v19 = &GameData_1afe67f;
    v14 = v13 + v11;
    v15 = game_HashString_alt1((__int64)&GameData_1afe67f);
    v16 = game_GameModeData_instance_;
    v18_.v18 = v15;
    if (game_GameModeData_instance_ != 0) {
      v17 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v18_.v18);
      if (v17 != 0) {
        v16 = *(_DWORD*)(v17 + 32);
      }
      else {
        v16 = 0;
      }
    }
    if (v16 >= v14) {
      v16 = v14;
    }
    *(_DWORD*)(a1 + 36) = v16;
    if (v13 < v16 && GameData_2241720 != 0) {
      GameHr_17cc7d0(GameData_2241720, "MID_Sys_InfoTelop_Recover_Blade",
                     nullptr, 0, nullptr, 0);
    }
  }
  v18_.v19 = (_UNKNOWN**)&GameData_1ac4924;
  v18_.v18 = game_HashString_alt1((__int64)&GameData_1ac4924);
  return game_VariableManager_SetFlag_alt1((__int64)&v18_.v18, 1);
}

void BladeResonance_14b7400(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64* i;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  struct {
    __int64 (**v21)();
    char* v22;
    __int64 v23;
    char gap24_[8];
    __int64 (***v24)();
  } v21_;
  char v25;

  if ((game_gmap_1536e70(5) & 1) == 0) {
    return;
  }
  *(_BYTE*)(a1 + 24) = 0;
  GameRoutine_14a1520((_QWORD*)(a1 + 40), 1);
  if (game_GameModeData_instance_ != 0) {
    if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x42) != 0) {
      return;
    }
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
      goto LABEL_54;
    }
  }
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if (v3 < 0) {
    if (v4 != v5) {
      for (i = v4 + 1;; ++i) {
        v9 = *(i - 1);
        if (*(_QWORD*)(v9 + 96) == 0 && *(_QWORD*)(v9 + 552) == 0) {
          break;
        }
      }
      if ((*(_DWORD*)(v9 + 84) & 0x80000000) != 0) {
        return;
      }
      while (1) {
        v6 = *v4;
        if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
          goto LABEL_23;
        }
        if (++v4 == v5) {
          goto LABEL_22;
        }
      }
    }
    goto LABEL_21;
  }
  if (v4 == v5) {
  LABEL_21:
    if (((*(_DWORD*)0x54LL) & 0x80000000) != 0) {
      return;
    }
  LABEL_22:
    v6 = 0;
    goto LABEL_23;
  }
  while (1) {
    v7 = *v4++;
    v6 = v7;
    if (*(_DWORD*)(v7 + 84) == v3) {
      break;
    }
    if (v4 == v5) {
      goto LABEL_22;
    }
  }
LABEL_23:
  v10 = game_HashString_alt1((__int64)&GameData_1aed6ab);
  if (v10 == 0) {
    goto LABEL_47;
  }
  v11 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v11 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_47;
  }
  v13 = v11 - 1;
  if ((v11 & (v11 - 1)) != 0) {
    v14 = v10;
    if (v10 >= v11) {
      v14 = v10 % v11;
    }
  }
  else {
    v14 = v13 & v10;
  }
  v15 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v14);
  if (v15 == nullptr || (v16 = (_QWORD*)*v15) == nullptr) {
  LABEL_47:
    v18 = 0;
    goto LABEL_48;
  }
  if ((v11 & v13) == 0) {
    while (1) {
      v19 = v16[1];
      if (v19 == v10) {
        if (v16[2] == v10) {
          goto LABEL_56;
        }
      }
      else if ((v19 & v13) != v14) {
        goto LABEL_47;
      }
      v16 = (_QWORD*)*v16;
      v18 = 0;
      if (v16 == nullptr) {
        goto LABEL_48;
      }
    }
  }
  while (1) {
    v17 = v16[1];
    if (v17 == v10) {
      break;
    }
    if (v17 >= v11) {
      v17 %= v11;
    }
    if (v17 != v14) {
      goto LABEL_47;
    }
  LABEL_37:
    v16 = (_QWORD*)*v16;
    if (v16 == nullptr) {
      goto LABEL_47;
    }
  }
  if (v16[2] != v10) {
    goto LABEL_37;
  }
LABEL_56:
  v18 = v16[3];
LABEL_48:
  v25 = 0;
  v21_.v23 = v18;
  v21_.v21 = GameData_202c698;
  v21_.v22 = &v25;
  v21_.v24 = &v21_.v21;
  Troop_133ed80(v6, (__int64)&v21_.v21);
  if (v21_.v24 == &v21_.v21) {
    v20 = 4;
  LABEL_52:
    ((__int64 (*)(__int64))(*v21_.v24)[v20])((__int64)v21_.v24);
  }
  else if (v21_.v24 != nullptr) {
    v20 = 5;
    goto LABEL_52;
  }
  if (v25 == 1) {
  LABEL_54:
    v21_.v22 = (char*)&GameData_1ac4924;
    v21_.v21 =
        (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1ac4924);
    game_VariableManager_SetFlag_alt1((__int64)&v21_.v21, 0);
  }
}

__int64 BladeResonance_14b7680()
{
  __int64 v0;
  __int64 v1;
  int v2;
  int v3;
  __int64 result;
  int v5;
  struct {
    __int64 v6;
    _UNKNOWN** v7;
  } v6_;

  v0 = *(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL);
  v6_.v7 = (_UNKNOWN**)&GameData_1aa9eb3;
  v6_.v6 = game_HashString_alt1((__int64)&GameData_1aa9eb3);
  if (game_GameModeData_instance_ != 0 &&
      (v1 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v6_.v6)) != 0) {
    v2 = *(_DWORD*)(v1 + 32);
  }
  else {
    v2 = 0;
  }
  v3 = *(_DWORD*)(v0 + 36);
  v6_.v7 = &GameData_1afe67f;
  result = game_HashString_alt1((__int64)&GameData_1afe67f);
  v5 = game_GameModeData_instance_;
  v6_.v6 = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v6_.v6);
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

#pragma clang fp contract(off)
  __int64 v0;
  float v1;
  float v2;
  __int64 v3;
  int v4;
  __int64 v5;
  struct {
    __int64 v7;
    _UNKNOWN** v8;
  } v7_;

  v0 = *(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL);
  v7_.v8 = (_UNKNOWN**)&GameData_1af6c29;
  v1 = 0x0.0p+0f;
  v2 = 0x0.0p+0f;
  v7_.v7 = game_HashString_alt1((__int64)&GameData_1af6c29);
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v7_.v7);
    if (v3 != 0) {
      v2 = (float)*(int*)(v3 + 32);
    }
  }
  v4 = *(_DWORD*)(v0 + 36);
  v7_.v8 = &GameData_1afe67f;
  v7_.v7 = game_HashString_alt1((__int64)&GameData_1afe67f);
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v7_.v7);
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
  __int64 result;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  struct {
    __int64 v8;
    void* v9;
  } v8_;

  if (((unsigned __int8)BladeResonance_14b7a80_alt2(
           *(_QWORD*)(GameData_21f1620 + 8)) &
       1) != 0) {
    BladeResonance_14b7d00(*(_QWORD*)(GameData_21f1620 + 8));
  LABEL_16:
    v2 = *(_QWORD*)(GameData_21f1620 + 8);
    goto LABEL_17;
  }
  v8_.v9 = &GameData_1abbb2b;
  v8_.v8 = game_HashString_alt1((__int64)&GameData_1abbb2b);
  if (game_GameModeData_instance_ != 0) {
    v0 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v8_.v8);
    if (v0 != 0 && *(_DWORD*)(v0 + 32) != 0) {
      result = 0;
      v2 = *(_QWORD*)(GameData_21f1620 + 8);
    LABEL_13:
      *(_BYTE*)(v2 + 105) = 0;
      return result;
    }
  }
  if (TroopMgr_134efc0()) {
    v3 = *(_QWORD*)(GameData_21f1620 + 8);
    v8_.v9 = &GameData_1ab1818;
    v4 = *(_DWORD*)(v3 + 36);
    v5 = game_HashString_alt1((__int64)&GameData_1ab1818);
    v6 = game_GameModeData_instance_;
    v8_.v8 = v5;
    if (game_GameModeData_instance_ != 0) {
      v7 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v8_.v8);
      if (v7 != 0) {
        v6 = *(_DWORD*)(v7 + 32);
      }
      else {
        v6 = 0;
      }
    }
    *(_DWORD*)(v3 + 36) = (v4 - v6) & ~((v4 - v6) >> 31);
    goto LABEL_16;
  }
  v2 = *(_QWORD*)(GameData_21f1620 + 8);
  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    result = 0;
    goto LABEL_13;
  }
LABEL_17:
  *(_BYTE*)(v2 + 105) = 1;
  return 1;
}

float32x4_t* BladeResonance_14b7a80(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float32x4_t* result;
  __int64 v8;
  int v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  int v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  float32x4_t* v29;
  float32x4_t v30;
  float32x4_t v31;
  int8x16_t v32;
  float v33;
  float v34;
  __int64 v35;
  __int64 v36;
  float v37;
  struct {
    __int64 v38;
    void* v39;
  } v38_;

  v38_.v39 = &GameData_1abbb2b;
  v38_.v38 = game_HashString_alt1((__int64)&GameData_1abbb2b);
  if (game_GameModeData_instance_ == 0) {
    return nullptr;
  }
  v2 = game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48),
      (unsigned __int64*)&v38_.v38);
  if (v2 == 0) {
    return nullptr;
  }
  if (*(_DWORD*)(v2 + 32) == 0 || *(_QWORD*)(a1 + 16) != 0) {
    return nullptr;
  }
  v4 = *(int*)(a1 + 32);
  v5 = *(_QWORD*)(*GameData_212caf0[0] + 64);
  if ((int)v4 >=
      (int)((unsigned __int64)(*(_QWORD*)(*GameData_212caf0[0] + 72) - v5) >>
            3)) {
    return nullptr;
  }
  v6 = *(_QWORD*)(v5 + 8 * v4);
  if (v6 == 0) {
    return nullptr;
  }
  result =
      (float32x4_t*)game_gmap_SpotMgr_FindSpot_alt1(*(unsigned int**)(v6 + 40));
  if (result == nullptr) {
    return result;
  }
  v8 = *(_QWORD*)(GameData_21c96e8 + 8);
  v9 = *(_DWORD*)(v8 + 56);
  v10 = *(__int64**)(v8 + 8);
  v11 = *(__int64**)(v8 + 16);
  if ((v9 & 0x80000000) == 0) {
    if (v10 != v11) {
      v12 = v10;
      do {
        v14 = *v12++;
        v13 = v14;
        if (*(_DWORD*)(v14 + 84) == v9) {
          goto LABEL_24;
        }
      } while (v12 != v11);
    }
  LABEL_23:
    v13 = 0;
    goto LABEL_24;
  }
  if (v10 == v11) {
    goto LABEL_23;
  }
  v15 = v10;
  while (1) {
    v13 = *v15;
    if (*(_QWORD*)(*v15 + 96) == 0 && *(_QWORD*)(v13 + 552) == 0) {
      break;
    }
    if (++v15 == v11) {
      goto LABEL_23;
    }
  }
LABEL_24:
  v16 = *(_DWORD*)(v13 + 540);
  v17 = __OFSUB__(v16, 1);
  v18 = (unsigned int)(v16 - 1);
  if (((v18 & 0x80000000) != 0LL) == v17) {
    v19 = *(_QWORD*)(v13 + 24);
    v20 = *(_QWORD*)(v13 + 32) - v19;
    v21 = v19 + 8LL * (unsigned int)v18;
    if (v18 < v20 >> 3) {
      v13 = v21;
    }
  }
  if (*(float32x4_t**)v13 == result) {
    return nullptr;
  }
  if (v9 < 0) {
    for (; v10 != v11; ++v10) {
      v22 = *v10;
      if (*(_QWORD*)(*v10 + 96) == 0 && *(_QWORD*)(v22 + 552) == 0) {
        goto LABEL_37;
      }
    }
  }
  else {
    while (v10 != v11) {
      v23 = *v10++;
      v22 = v23;
      if (*(_DWORD*)(v23 + 84) == v9) {
        goto LABEL_37;
      }
    }
  }
  v22 = 0;
LABEL_37:
  v24 = *(_DWORD*)(v22 + 540);
  v17 = __OFSUB__(v24, 1);
  v25 = (unsigned int)(v24 - 1);
  if (((v25 & 0x80000000) != 0LL) == v17) {
    v26 = *(_QWORD*)(v22 + 24);
    v27 = *(_QWORD*)(v22 + 32) - v26;
    v28 = v26 + 8LL * (unsigned int)v25;
    if (v25 < v27 >> 3) {
      v22 = v28;
    }
  }
  v29 = *(float32x4_t**)v22;
  v30 = result[2];
  v38_.v39 = &GameData_1af6c29;
  v31 = vsubq_f32(v30, v29[2]);
  v32 = vmulq_f32(v31, v31);
  LANES128(v32).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
          .n64_u64[0];
  LODWORD(v37) =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
          .n64_u32[0];
  v33 = 0x0.0p+0f;
  v34 = 0x0.0p+0f;
  v38_.v38 = game_HashString_alt1((__int64)&GameData_1af6c29);
  if (game_GameModeData_instance_ != 0) {
    v35 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v38_.v38);
    if (v35 != 0) {
      v34 = (float)*(int*)(v35 + 32);
    }
  }
  v38_.v39 = &GameData_1af6c29;
  v38_.v38 = game_HashString_alt1((__int64)&GameData_1af6c29);
  if (game_GameModeData_instance_ != 0) {
    v36 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v38_.v38);
    if (v36 != 0) {
      v33 = (float)*(int*)(v36 + 32);
    }
  }
  return (float32x4_t*)(v37 <= (float)(v34 * v33));
}

__int64 BladeResonance_14b7d00(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;

  v1 = *(_QWORD*)(*(_QWORD*)(*GameData_212caf0[0] + 64) +
                  8LL * *(int*)(result + 32));
  if (v1 != 0) {
    *(_QWORD*)(result + 16) = v1;
    v2 = (__int64*)result;
    v3 = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v1 + 40));
    *v2 = v3;
    v4 = v3;
    v5 = GameData_212c790;
    v6 = *(_BYTE*)(v3 + 176) == 3 && *(_BYTE*)(v3 + 112) == 0;
    if (v6 || (SpotMgr_1334160(*(_QWORD*)(GameData_21c9700 + 8), v3), v4 = *v2,
               *v2 != 0)) {
      v7 = *(_QWORD*)(*v5 + 8);
      v8 = *(_QWORD*)(v7 + 8);
      v9 = *(_QWORD*)(v7 + 16);
      while (v8 != v9) {
        if (**(_QWORD**)v8 == v4) {
          v10 = *(_QWORD*)(*(_QWORD*)v8 + 96LL);
          if (v10 != 0 && *(_BYTE*)(v10 + 32) == 1) {
            TroopMgr_13485a0();
            break;
          }
        }
        v8 += 8;
      }
    }
    v11 = *(_QWORD*)(v1 + 56);
    if (*v5 != 0) {
      GameRoutine_1347b30(*(_QWORD*)(*v5 + 8), *v2, v11);
      v11 = *(_QWORD*)(v1 + 56);
    }
    if (v11 == 0 || (v12 = *(_QWORD*)(*v5 + 8), v13 = *(__int64**)(v12 + 8),
                     v14 = *(__int64**)(v12 + 16), v13 == v14)) {
    LABEL_20:
      v2[1] = 0;
    }
    else {
      while (1) {
        v16 = *v13++;
        v15 = v16;
        if (*(_QWORD*)(v16 + 96) == v11) {
          break;
        }
        if (v13 == v14) {
          goto LABEL_20;
        }
      }
      v2[1] = v15;
      GameRoutine_133dba0(v15, 5);
    }
    return BladeResonance_14b8500(v2);
  }
  return result;
}

__int64 BladeResonance_14b7e60(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  __int64 v12;
  int v13;
  float v14;
  __int64 v15;
  __int64* v16;
  _QWORD* v17;
  __int128 v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  unsigned int v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64* v29;
  unsigned int v30;
  __int64 result;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  float32x4_t v36;
  struct {
    __int64 v37;
    _UNKNOWN** v38;
    const char* v39;
    int v40;
    char gap44_[4];
    float32x4_t v41;
    __int128 v42;
    __int64 v43;
    __int64 v44;
  } v37_;

  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if ((v3 & 0x80000000) == 0) {
    while (v4 != v5) {
      v7 = *v4++;
      v6 = v7;
      if (*(_DWORD*)(v7 + 84) == v3) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  if (v4 == v5) {
    goto LABEL_7;
  }
  while (1) {
    v6 = *v4;
    if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
      break;
    }
    if (++v4 == v5) {
      goto LABEL_7;
    }
  }
LABEL_8:
  UnitActor_81d430((void*)(&v36), v6 + 112),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = *(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL);
  v37_.v38 = (_UNKNOWN**)&GameData_1af6c29;
  v9 = game_HashString_alt1((__int64)&GameData_1af6c29),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = 0x0.0p+0f;
  v11 = 0x0.0p+0f;
  v37_.v37 = v9;
  if (game_GameModeData_instance_ != 0) {
    v12 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v37_.v37),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v11 = 0x0.0p+0f;
    if (v12 != 0) {
      v11 = (float)*(int*)(v12 + 32);
    }
  }
  v13 = *(_DWORD*)(v8 + 36);
  v37_.v38 = &GameData_1afe67f;
  v14 = v11 * (float)v13;
  v37_.v37 = game_HashString_alt1((__int64)&GameData_1afe67f),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_GameModeData_instance_ != 0) {
    v15 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v37_.v37),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v15 != 0) {
      v10 = (float)*(int*)(v15 + 32);
    }
  }
  v16 = eft_g_effectSystem_ptr[0];
  v37_.v37 = 0;
  v37_.v38 = nullptr;
  v17 = (_QWORD*)*eft_g_effectSystem_ptr[0];
  *(_QWORD*)&v18 =
      COERCE_UNSIGNED_INT((float)(v14 / v10) / 0x1.9000000000000p+5f) |
      ((unsigned __int64)COERCE_UNSIGNED_INT((float)(v14 / v10) /
                                             0x1.9000000000000p+5f)
       << 32);
  v37_.v40 = 5;
  *((_QWORD*)&v18 + 1) =
      COERCE_UNSIGNED_INT((float)(v14 / v10) / 0x1.9000000000000p+5f);
  v37_.v41 = v36;
  v37_.v42 = v18;
  v19 = (__int64*)GameData_212c540;
  v20 = *((_QWORD*)GameData_212c540 + 1);
  v37_.v43 = *(_QWORD*)GameData_212c540;
  v37_.v44 = v20;
  v37_.v39 = "Gmap_Hanari_Area_Trigger";
  v21 = ({
    unsigned __int128 r_ = Manager_bc6460_alt1_pair(v17, (__int64)&v37_.v37, 1);
    v22 = COERCE_AS(__typeof__(v22), (unsigned long long)(r_ >> 64));
    v30 = COERCE_AS(__typeof__(v30), (unsigned long long)(r_ >> 64));
    (__int64*)(unsigned long long)r_;
  });
  GameHr_14a10d0(&v37_.v37, (__int64)v21, v22, (__int64)&GameData_1a9f09e),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = v37_.v37;
  v24 = (__int64)v37_.v38;
  if (v37_.v38 != nullptr) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v37_.v38 + 1), 1u,
                              memory_order_relaxed);
  }
  v25 = a1[10];
  a1[9] = v23;
  a1[10] = v24;
  if (v25 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt3(v25),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v24 = a1[10];
  }
  if (v24 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt3(v24),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v26 = (__int64)v37_.v38;
  if (v37_.v38 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)((char*)((_UNKNOWN**)0x8LL) +
                                                 (_QWORD)v37_.v38),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt3(v26),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  UnitActor_81d430((void*)(&v36), v6 + 112),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = (_QWORD*)*v16;
  v37_.v37 = 0;
  v37_.v38 = nullptr;
  v37_.v40 = 5;
  v37_.v41 = v36;
  v37_.v42 = GameData_1a837f0;
  v28 = v19[1];
  v37_.v43 = *v19;
  v37_.v44 = v28;
  v37_.v39 = "Gmap_Hanari_Area_Sub_Trigger";
  v29 = ({
    unsigned __int128 r_ = Manager_bc6460_alt1_pair(v27, (__int64)&v37_.v37, 1);
    v22 = COERCE_AS(__typeof__(v22), (unsigned long long)(r_ >> 64));
    v30 = COERCE_AS(__typeof__(v30), (unsigned long long)(r_ >> 64));
    (__int64*)(unsigned long long)r_;
  });
  result =
      GameHr_14a10d0(&v37_.v37, (__int64)v29, v30, (__int64)&GameData_1a9f09e),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v32 = v37_.v37;
  v33 = (__int64)v37_.v38;
  if (v37_.v38 != nullptr) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v37_.v38 + 1), 1u,
                              memory_order_relaxed);
  }
  v34 = a1[12];
  a1[11] = v32;
  a1[12] = v33;
  if (v34 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak_alt3(v34),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v33 = a1[12];
  }
  if (v33 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak_alt3(v33),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v35 = (__int64)v37_.v38;
  if (v37_.v38 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)((char*)((_UNKNOWN**)0x8LL) +
                                                 (_QWORD)v37_.v38),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return std___1___shared_weak_count___release_weak_alt3(v35);
  }
  return result;
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

__int64 BladeResonance_14b8380(__int64 result, char a2)
{
  __int64 v2;
  _DWORD* v3;
  __int64 v5;
  __int64 v6;
  float v7;
  _BYTE v8[200];

  v3 = *(_DWORD**)(result + 168);
  v2 = *(_QWORD*)(result + 176);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  if (*(_QWORD*)v3 != 0 && *(_DWORD*)(*(_QWORD*)v3 + 16LL) == v3[2]) {
    result = snd_fnd_WeakHandle_isValid(v3 + 4);
    if ((result & 1) != 0) {
      v5 = snd_fnd_WeakHandle_get(v3 + 4);
      if (v5 != 0) {
        v6 = v5 - 5592;
      }
      else {
        v6 = 0;
      }
      if ((a2 & 1) != 0) {
        v7 = 0.0f;
      }
      else {
        v7 = 1.0f;
      }
      snd_Fade_Fade_10c830(v8, 0.0f);
      (*(void (**)(__int64, _BYTE*, float))(*(_QWORD*)(v6 + 40) + 96LL))(
          v6 + 40, v8, v7);
      result = snd_Fade_Destroy_Fade(v8);
    }
  }
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak_alt2(v2);
  }
  return result;
}

__int64 BladeResonance_14b8820(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  __int64 v15;
  int v16;
  float v17;
  __int64 v18;
  _QWORD* v19;
  __int128 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  unsigned int v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64 v30;
    _UNKNOWN** v31;
    const char* v32;
    int v33;
    char gap28_[4];
    __int64 v34;
    __int64 v35;
    __int128 v36;
    __int64 v37;
    __int64 v38;
  } v30_;

  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (((**(__int64 (***)(__int64))a1)(a1) & 1) != 0) {
    GameHr_14a1390((__int64*)(a1 + 56), 1),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v2 = *(float*)(a1 + 48);
  LODWORD(v30_.v30) = 1065353216;
  if (*(_BYTE*)(a1 + 32) == 1) {
    (*(void (**)(__int64, float, float))(*(_QWORD*)(a1 + 8) + 24LL))(
        a1 + 8, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_DWORD*)(a1 + 16) = 0;
  }
  else {
    if (v2 >= *(float*)(a1 + 16)) {
      if (((*(__int64 (**)(__int64, __int64*, __int64))(
               *(_QWORD*)(a1 + 8) + 8LL))(a1 + 8, &v30_.v30, a1 + 40) &
           1) == 0) {
        goto LABEL_11;
      }
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 8) + 16LL))(a1 + 8),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v3 = *(_QWORD*)(a1 + 8);
      v4 = a1 + 8;
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 8) + 16LL))(a1 + 8),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v3 = *(_QWORD*)(a1 + 8);
      v4 = a1 + 8;
    }
    (*(void (**)(__int64))(v3 + 24))(v4),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(float*)(a1 + 16) = v2;
  }
  *(_DWORD*)(a1 + 20) = 0;
  *(_WORD*)(a1 + 32) = 256;
LABEL_11:
  *(_DWORD*)(a1 + 52) = 1;
  v5 = *(_QWORD*)(*GameData_212c790 + 8);
  v6 = *(_DWORD*)(v5 + 56);
  v7 = *(_QWORD*)(v5 + 8);
  v8 = *(_QWORD*)(v5 + 16);
  if ((v6 & 0x80000000) == 0) {
    while (v7 != v8) {
      v10 = *(_QWORD**)v7;
      v7 += 8;
      v9 = v10;
      if (*((_DWORD*)v10 + 21) == v6) {
        goto LABEL_18;
      }
    }
  LABEL_17:
    v9 = nullptr;
    goto LABEL_18;
  }
  if (v7 == v8) {
    goto LABEL_17;
  }
  while (1) {
    v9 = *(_QWORD**)v7;
    if (*(_QWORD*)(*(_QWORD*)v7 + 96LL) == 0 && v9[69] == 0) {
      break;
    }
    v7 += 8;
    if (v7 == v8) {
      goto LABEL_17;
    }
  }
LABEL_18:
  v11 = *(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL);
  v30_.v31 = (_UNKNOWN**)&GameData_1af6c29;
  v12 = game_HashString_alt1((__int64)&GameData_1af6c29),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = 0x0.0p+0f;
  v14 = 0x0.0p+0f;
  v30_.v30 = v12;
  if (game_GameModeData_instance_ != 0) {
    v15 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v30_.v30),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v14 = 0x0.0p+0f;
    if (v15 != 0) {
      v14 = (float)*(int*)(v15 + 32);
    }
  }
  v16 = *(_DWORD*)(v11 + 36);
  v30_.v31 = &GameData_1afe67f;
  v17 = v14 * (float)v16;
  v30_.v30 = game_HashString_alt1((__int64)&GameData_1afe67f),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_GameModeData_instance_ != 0) {
    v18 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v30_.v30),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v18 != 0) {
      v13 = (float)*(int*)(v18 + 32);
    }
  }
  v30_.v30 = 0;
  v30_.v31 = nullptr;
  v19 = (_QWORD*)*eft_g_effectSystem_ptr[0];
  *(_QWORD*)&v20 =
      COERCE_UNSIGNED_INT((float)(v17 / v13) / 0x1.9000000000000p+5f) |
      ((unsigned __int64)COERCE_UNSIGNED_INT((float)(v17 / v13) /
                                             0x1.9000000000000p+5f)
       << 32);
  v30_.v33 = 5;
  v21 = v9[7];
  *((_QWORD*)&v20 + 1) =
      COERCE_UNSIGNED_INT((float)(v17 / v13) / 0x1.9000000000000p+5f);
  v30_.v34 = v9[6];
  v30_.v35 = v21;
  v30_.v36 = v20;
  v22 = *((_QWORD*)GameData_212c540 + 1);
  v30_.v37 = *(_QWORD*)GameData_212c540;
  v30_.v38 = v22;
  v30_.v32 = "Gmap_Hanari_Area_Loop";
  v23 = ({
    unsigned __int128 r_ = Manager_bc6460_alt1_pair(v19, (__int64)&v30_.v30, 1);
    v24 = COERCE_AS(__typeof__(v24), (unsigned long long)(r_ >> 64));
    (__int64*)(unsigned long long)r_;
  });
  GameHr_14a10d0(&v30_.v30, (__int64)v23, v24, (__int64)&GameData_1a9f09e),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = v30_.v30;
  v26 = (__int64)v30_.v31;
  if (v30_.v31 != nullptr) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v30_.v31 + 1), 1u,
                              memory_order_relaxed);
  }
  v27 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 56) = v25;
  *(_QWORD*)(a1 + 64) = v26;
  if (v27 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt3(v27),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v26 = *(_QWORD*)(a1 + 64);
  }
  if (v26 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt3(v26),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v28 = (__int64)v30_.v31;
  if (v30_.v31 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)((char*)((_UNKNOWN**)0x8LL) +
                                                 (_QWORD)v30_.v31),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt3(v28),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return 1;
}

#pragma GCC visibility pop
