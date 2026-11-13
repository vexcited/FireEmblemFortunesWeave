#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void
CharacterSound_1095750(PSEUDO_X8, __int64, const char*, __int64, float);
__attribute__((swiftcall)) void Manager_1181f0(PSEUDO_X8, __int64 result, int);
__attribute__((swiftcall)) void game_sound_80e590(PSEUDO_X8, __int64 result,
                                                  unsigned __int8*, float);
__attribute__((swiftcall)) void math_Quat_Rotate(PSEUDO_X8, int8x16_t*,
                                                 int8x16_t*);
__attribute__((swiftcall)) void snd_findSlot_100a00(PSEUDO_X8,
                                                    unsigned __int8*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_hub_d6d880(__int64*, __int64);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_190240(__int64);
__int64 GameRoutine_cae2c0(__int64, __int64*);
__int64 GameRoutine_f71cb0(__int64, int);
__int64 GameRoutine_f71d40(__int64, __int64, __int64);
__int64 GameRoutine_f72090(__int64);
__int64 LocatorDispos_db5550(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameView_Update();
__int64 game_hub_df81b0(__int64, __int64);
__int64 game_hub_f71fc0(__int64, __int64, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_playAt_ff5f0(__int64, __int64, __int64, __int64, unsigned int,
                         unsigned int, int, float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
const char* snd_fnd_calcCrc32Reverse(const char* result, int);
double cos(double);
double sin(double);
double snd_getDefineValue(unsigned __int8*);
extern _DWORD* GameData_212c340;
extern _DWORD* GameData_212c348;
extern _DWORD* GameData_212d168;
extern _DWORD* GameData_212d558;
extern _DWORD GameData_21d925c[32];
extern _QWORD GameData_212c350;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6150;
extern _UNKNOWN GameData_21a61b0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6140;
extern __int128 GameData_21a61a0;
extern __int64 (*GameData_1fd4ed0[])();
extern __int64 (*game_hub_CameraManager_vtable[])();
extern __int64 (*game_hub_Locator_vtable[])();
extern __int64 (*game_hub_Object_vtable[])();
extern __int64 (*game_map_anonymous_MapTransition_vtable[])();
extern __int64* GameData_212c338;
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212d550;
extern __int64* GameData_212e248[2];
extern __int64* GameData_212eb98[10];
extern __int64* GameData_212ebb0[7];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64* snd_s_target_ptr;
extern __int64* util_g_handle_slots_ptr[2];
extern __int64 GameData_212c7f0[3];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbd0[6];
extern __int64 GameData_212dbe0[4];
extern __int64 GameData_212dc60[2];
extern __int64 GameData_212e2d8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern int* GameData_212df08;
extern int GameData_21d92dc;
extern int GameData_220f810;
float atan2f(float, float);
float snd_fnd_calcDistanceTo(float*, float*);
int __cxa_guard_acquire(__int64);
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void GameHr_cacc00(__int64);
void MapTransition_823980(__int64, _QWORD*);
void __attribute__((noreturn)) GameRoutine_8123d0();
void __cxa_guard_release(__int64);
void game_1017cc0(__int64);
void snd_Fade_Fade_10c830(__int64, float);
void snd_Fade_Fade_10c910(__int64, int);
__int64 game_hub_cdea20(__int64 a1);
__int64* game_hub_df7380(__int64 a1, __int64 a2, __int64* a3);
__int64* game_hub_df8600(__int64 a1, __int64 a2, __int64* a3);
void game_hub_dfa900(__int64 a1);
void game_hub_e19b00(__int64 a1);

__int64 game_hub_cdea20(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64** v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  _DWORD* v13;
  __int64 v14;
  int v15;
  _QWORD* v16;
  __int64 v17;
  __int64 result;

  if (*(_QWORD*)GameData_212dc60[0] == 0) {
    *(_QWORD*)GameData_212dc60[0] = a1;
    GameData_220f810 = 1;
  }
  *(_DWORD*)(a1 + 8) = 0;
  *(_BYTE*)(a1 + 52) = 0;
  *(_BYTE*)(a1 + 56) = 0;
  *(_BYTE*)(a1 + 60) = 0;
  *(_DWORD*)(a1 + 64) = 0;
  *(_BYTE*)(a1 + 68) = 0;
  *(_QWORD*)a1 = game_hub_CameraManager_vtable;
  *(_BYTE*)(a1 + 72) = 0;
  *(_BYTE*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_BYTE*)(a1 + 48) = 0;
  v4 = fw_memory_HeapManager_Allocate(v3, 16, 16, 0);
  v5 = (__int64*)v4;
  v6 = (__int64**)GameData_212c7f0[0];
  v7 = *(_QWORD*)GameData_212c7f0[0];
  if (*(_QWORD*)GameData_212c7f0[0] == 0) {
    *(_QWORD*)GameData_212c7f0[0] = v4;
    v7 = v4;
    *GameData_212d558 = 1;
  }
  v8 = *v2;
  *v5 = (__int64)(GameData_212d550 + 2);
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(v8, 40, 16, 0);
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v5[1] = (__int64)v9;
  *v9 = game_map_anonymous_MapTransition_vtable;
  v9[1] = v9 + 2;
  v10 = *(_QWORD**)(v7 + 8);
  v11 = (_QWORD*)v10[2];
  v10 += 2;
  MapTransition_823980((__int64)(v10 - 1), v11);
  *v10 = 0;
  v10[1] = 0;
  *(v10 - 1) = v10;
  *((_DWORD*)v10 + 4) = 0;
  v12 = *v5;
  *v6 = v5;
  (*(void (**)(__int64*))(v12 + 16))(v5);
  v13 = (_DWORD*)GameData_212d168;
  v14 = GameData_21d92dc;
  v15 = *GameData_212d168;
  ++GameData_21d92dc;
  GameData_21d925c[v14] = v15;
  *(_DWORD*)v13 = 4;
  game_GameView_Update();
  v16 = (_QWORD*)fw_memory_HeapManager_Allocate(*v2, 56, 16, 0);
  v17 = *(_QWORD*)(a1 + 24);
  v16[1] = 0;
  v16[2] = 0;
  v16[4] = 0;
  v16[5] = 0;
  v16[6] = 0;
  *(_QWORD*)(a1 + 24) = v16;
  *v16 = GameData_1fd4ed0;
  v16[3] = 0;
  result = (__int64)(v16 + 3);
  *(_QWORD*)(a1 + 16) = result;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    return std___1___shared_weak_count___release_weak(v17);
  }
  return result;
}

__int64* game_hub_df7380(__int64 a1, __int64 a2, __int64* a3)
{
  _DWORD* v4;
  __int64 v5;
  __int64* v6;
  int v7;
  __int64 v8;
  __int64* v9;
  int* v10;
  int v11;
  __int64* result;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;

  *(_QWORD*)a1 = GameData_212eb98[0] + 2;
  *(_QWORD*)(a1 + 8) = 0x400000000000LL;
  v4 = (_DWORD*)GameData_212c340;
  v5 = (unsigned int)*GameData_212c340;
  if ((unsigned int)v5 >= *GameData_212c348) {
  LABEL_5:
    if ((_DWORD)v5 == 0) {
      goto LABEL_11;
    }
    v7 = 0;
    v6 = (__int64*)*util_g_handle_slots_ptr[0];
    while (*v6 != 0) {
      ++v7;
      v6 += 2;
      if ((_DWORD)v5 == v7) {
        goto LABEL_11;
      }
    }
  }
  else {
    v6 = (__int64*)(*util_g_handle_slots_ptr[0] + 16 * v5);
    v7 = *GameData_212c340;
    while (*v6 != 0) {
      ++v7;
      v6 += 2;
      if (*GameData_212c348 == v7) {
        goto LABEL_5;
      }
    }
  }
  v8 = *GameData_212c338 + 1;
  *GameData_212c338 = v8;
  *v6 = v8;
  v6[1] = a1;
  *(_DWORD*)(a1 + 12) = v7;
  *(_DWORD*)v4 = v7;
LABEL_11:
  v9 = (__int64*)(a1 + 616);
  v10 = (int*)GameData_212c350;
  *(_BYTE*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  v11 = *v10;
  *(_BYTE*)(a1 + 72) = 0;
  *(_BYTE*)(a1 + 464) = 0;
  *(_BYTE*)(a1 + 472) = 0;
  *(_BYTE*)(a1 + 536) = 0;
  *(_BYTE*)(a1 + 544) = 0;
  *(_BYTE*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_WORD*)(a1 + 176) = 0;
  *(_BYTE*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 696) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 640) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *v10 = v11 + 1;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = game_hub_Locator_vtable;
  result = (__int64*)LocatorDispos_db5550(a1 + 24, a2);
  if (v9 != a3) {
    v13 = *(unsigned __int8*)a3;
    if ((*(_BYTE*)v9 & 1) != 0) {
      v16 = (v13 & 1) == 0;
      v17 = v13 >> 1;
      if (v16) {
        v18 = (__int64)a3 + 1;
      }
      else {
        v18 = a3[2];
      }
      if (v16) {
        v19 = v17;
      }
      else {
        v19 = a3[1];
      }
      return SpineModel_64dde0(v9, v18, v19);
    }
    else if ((v13 & 1) != 0) {
      return GameRoutine_64df20(v9, a3[2], a3[1]);
    }
    else {
      v14 = *a3;
      v15 = a3[2];
      v9[1] = a3[1];
      v9[2] = v15;
      *v9 = v14;
    }
  }
  return result;
}

__int64* game_hub_df8600(__int64 a1, __int64 a2, __int64* a3)
{
  _DWORD* v4;
  __int64 v5;
  __int64* v6;
  int v7;
  __int64 v8;
  __int64* v9;
  int* v10;
  int v11;
  __int64* result;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;

  *(_QWORD*)a1 = GameData_212eb98[0] + 2;
  *(_QWORD*)(a1 + 8) = 0x400000000000LL;
  v4 = (_DWORD*)GameData_212c340;
  v5 = (unsigned int)*GameData_212c340;
  if ((unsigned int)v5 >= *GameData_212c348) {
  LABEL_5:
    if ((_DWORD)v5 == 0) {
      goto LABEL_11;
    }
    v7 = 0;
    v6 = (__int64*)*util_g_handle_slots_ptr[0];
    while (*v6 != 0) {
      ++v7;
      v6 += 2;
      if ((_DWORD)v5 == v7) {
        goto LABEL_11;
      }
    }
  }
  else {
    v6 = (__int64*)(*util_g_handle_slots_ptr[0] + 16 * v5);
    v7 = *GameData_212c340;
    while (*v6 != 0) {
      ++v7;
      v6 += 2;
      if (*GameData_212c348 == v7) {
        goto LABEL_5;
      }
    }
  }
  v8 = *GameData_212c338 + 1;
  *GameData_212c338 = v8;
  *v6 = v8;
  v6[1] = a1;
  *(_DWORD*)(a1 + 12) = v7;
  *(_DWORD*)v4 = v7;
LABEL_11:
  v9 = (__int64*)(a1 + 920);
  v10 = (int*)GameData_212c350;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_BYTE*)(a1 + 64) = 0;
  v11 = *v10;
  *(_BYTE*)(a1 + 504) = 0;
  *(_BYTE*)(a1 + 512) = 0;
  *(_BYTE*)(a1 + 576) = 0;
  *(_BYTE*)(a1 + 584) = 0;
  *(_BYTE*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_DWORD*)(a1 + 184) = 0;
  *(_DWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_BYTE*)(a1 + 440) = 0;
  *(_BYTE*)(a1 + 848) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_QWORD*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 808) = 0;
  *(_QWORD*)(a1 + 800) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 776) = 0;
  *(_QWORD*)(a1 + 768) = 0;
  *(_QWORD*)(a1 + 760) = 0;
  *(_QWORD*)(a1 + 752) = 0;
  *(_QWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  *(_QWORD*)(a1 + 728) = 0;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 696) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 856) = 0;
  *(_BYTE*)(a1 + 948) = 0;
  *(_BYTE*)(a1 + 960) = 0;
  *(_BYTE*)(a1 + 976) = 0;
  *(_BYTE*)(a1 + 992) = 0;
  *(_BYTE*)(a1 + 1008) = 0;
  *(_BYTE*)(a1 + 1024) = 0;
  *(_BYTE*)(a1 + 1040) = 0;
  *v10 = v11 + 1;
  *(_QWORD*)a1 = game_hub_Object_vtable;
  *(_QWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 944) = 65792;
  result = (__int64*)game_hub_df81b0(a1 + 16, a2);
  if (v9 != a3) {
    v13 = *(unsigned __int8*)a3;
    if ((*(_BYTE*)v9 & 1) != 0) {
      v16 = (v13 & 1) == 0;
      v17 = v13 >> 1;
      if (v16) {
        v18 = (__int64)a3 + 1;
      }
      else {
        v18 = a3[2];
      }
      if (v16) {
        v19 = v17;
      }
      else {
        v19 = a3[1];
      }
      return SpineModel_64dde0(v9, v18, v19);
    }
    else if ((v13 & 1) != 0) {
      return GameRoutine_64df20(v9, a3[2], a3[1]);
    }
    else {
      v14 = *a3;
      v15 = a3[2];
      v9[1] = a3[1];
      v9[2] = v15;
      *v9 = v14;
    }
  }
  return result;
}

void game_hub_dfa900(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  int8x16_t* v5;
  float v6;
  float32x4_t* v7;
  float32x4_t* v8;
  float32x4_t v9;
  int8x16_t v10;
  float32x4_t v11;
  __int64 v12;
  float32x4_t* v13;
  float32x4_t v14;
  float32x4_t v15;
  int8x16_t v16;
  __int128 v17;
  float v18;
  double v19;
  double v20;
  double v21;
  double v22;
  double v23;
  double v24;
  double v25;
  double v26;
  float v27;
  float v28;
  float v29;
  float v30;
  bool v31;
  bool v32;
  int v34;
  float32x4_t* v35;
  float32x4_t* v36;
  float32x4_t v37;
  int8x16_t v38;
  float32x4_t v39;
  int8x16_t* v40;
  int8x16_t v41;
  int8x16_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  float v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int128* v59;
  __int128 v60;
  __int64 v61;
  __int64* v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  float32x4_t v65;
  int v66;
  float32x4_t v67;
  __int64 v68;
  int v69;
  __int64 v70;
  int v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  float32x4_t* v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  float32x4_t v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  float v86;
  float32x4_t* v87;
  unsigned __int8 explicit;
  int* v89;
  __int64 v90;
  __int64 v91;
  int v92;
  __int64 v93;
  float v94;
  unsigned __int64 v95;
  float32x4_t v96;
  int16x4_t v97;
  float32x4_t v98;
  __int64* v99;
  __int64* v100;
  unsigned __int32 v101;
  unsigned __int8 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  bool v106;
  float32x4_t v107;
  int16x4_t v108;
  float32x4_t v109;
  __int64* v110;
  __int64* v111;
  unsigned __int32 v112;
  unsigned __int8 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  int32x4_t v119;
  float v120;
  float v121;
  _QWORD v122[16];
  __int64 v123;
  int v124;
  float v125;
  float32x4_t v126;
  float32x4_t v127;
  float32x4_t v128[2];

  v1 = *(_QWORD*)(a1 + 800);
  v3 = *(_QWORD*)(v1 + 8);
  v4 = *(_QWORD*)(v1 + 16);
  if (v3 == v4) {
    v54 = 0x0.0p+0f;
    v55 = *(_QWORD*)(a1 + 712);
    if (v55 == 0) {
      goto LABEL_61;
    }
  }
  else {
    v119 = vdupq_n_s32(0x3C8EFA35u);
    do {
      v7 = *(float32x4_t**)(v3 + 8);
      v8 = (float32x4_t*)(a1 + 960);
      if ((*(_BYTE*)(a1 + 976) & 1) == 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
          v50 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v50;
          __cxa_guard_release((__int64)&GameData_21a6130);
        }
        v8 = (float32x4_t*)&GameData_21a6120;
      }
      v9 = vsubq_f32(v7[19], *v8);
      v10 = vmulq_f32(v9, v9);
      LANES128(v10).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        LANES128(v7[19]).n128_u32[0] = *(unsigned __int32*)&(*v8);
        LANES128(v7[19]).n128_u32[1] = LANES128(*(v8)).n128_u32[1];
        v11 = v7[19];
        LANES128(v11).n128_u32[2] = LANES128(*(v8)).n128_u32[2];
        LANES128(v7[18]).n128_u32[2] |= 1u;
        LANES128(v11).n128_u64[1] = LANES128(v11).n128_u32[2];
        v7[19] = v11;
      }
      v12 = *(_QWORD*)(v3 + 8);
      v13 = (float32x4_t*)(a1 + 992);
      if ((*(_BYTE*)(a1 + 1008) & 1) == 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
          v51 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v51;
          __cxa_guard_release((__int64)&GameData_21a6130);
        }
        v13 = (float32x4_t*)&GameData_21a6120;
      }
      v14 = vmulq_f32(*v13, v119);
      v15 = vsubq_f32(*(float32x4_t*)(v12 + 320), v14);
      v16 = vmulq_f32(v15, v15);
      LANES128(v16).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v16, v16, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        *(_QWORD*)(v12 + 320) = LANES128(v14).n128_u64[0];
        v120 = LANES128(v14).n128_f32[0];
        v17 = *(_OWORD*)(v12 + 320);
        v18 = LANES128(v14).n128_f32[1];
        *((_QWORD*)&v17 + 1) = LANES128(v14).n128_u32[2];
        v19 = LANES128(v14).n128_f32[2] * 0x1.0000000000000p-1;
        *(_OWORD*)(v12 + 320) = v17;
        v20 = cos(v19);
        v21 = sin(v19);
        v22 = cos(v120 * 0x1.0000000000000p-1);
        v23 = sin(v120 * 0x1.0000000000000p-1);
        v24 = v18 * 0x1.0000000000000p-1;
        v25 = cos(v24);
        v26 = sin(v24);
        v27 = v20 * v23 * v25 - PSEUDO_UNFUSED(v26 * (v21 * v22));
        v28 = PSEUDO_UNFUSED(v21 * v23 * v25) + PSEUDO_UNFUSED(v20 * v22) * v26;
        v29 = PSEUDO_UNFUSED(v21 * v23 * v26) + PSEUDO_UNFUSED(v20 * v22) * v25;
        v30 = v21 * v22 * v25 - PSEUDO_UNFUSED(v26 * (v20 * v23));
        v31 = COERCE_FLOAT(*(_OWORD*)(v12 + 336)) == v27 &&
              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v12 + 336))) == v28;
        v32 = v31 && COERCE_FLOAT(*(_QWORD*)(v12 + 344)) == v30;
        if (!v32 || COERCE_FLOAT(HIDWORD(*(_OWORD*)(v12 + 336))) != v29) {
          v34 = *(_DWORD*)(v12 + 296);
          *(float*)(v12 + 336) = v27;
          *(float*)(v12 + 340) = v28;
          *(float*)(v12 + 344) = v30;
          *(float*)(v12 + 348) = v29;
          *(_DWORD*)(v12 + 296) = v34 | 1;
        }
      }
      v35 = *(float32x4_t**)(v3 + 8);
      v36 = (float32x4_t*)(a1 + 1024);
      if ((*(_BYTE*)(a1 + 1040) & 1) == 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6150,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21a6150) != 0) {
          v52 = *((_QWORD*)GameData_212c548 + 1);
          *(_QWORD*)&GameData_21a6140 = *(_QWORD*)GameData_212c548;
          *((_QWORD*)&GameData_21a6140 + 1) = v52;
          __cxa_guard_release((__int64)&GameData_21a6150);
        }
        v36 = (float32x4_t*)&GameData_21a6140;
      }
      v37 = vsubq_f32(v35[22], *v36);
      v38 = vmulq_f32(v37, v37);
      LANES128(v38).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        LANES128(v35[22]).n128_u32[0] = *(unsigned __int32*)&(*v36);
        LANES128(v35[22]).n128_u32[1] = LANES128(*(v36)).n128_u32[1];
        v39 = v35[22];
        LANES128(v39).n128_u32[2] = LANES128(*(v36)).n128_u32[2];
        LANES128(v35[18]).n128_u32[2] |= 1u;
        LANES128(v39).n128_u64[1] = LANES128(v39).n128_u32[2];
        v35[22] = v39;
      }
      v40 = *(int8x16_t**)(v3 + 8);
      if ((LANES128(v40[18]).n128_u8[8] & 2) != 0) {
        v41 = v40[21];
        v42 = v40[25];
        LANES128(v43).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v44).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v45).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v46).n128_u64[0] = LANES128(v40[21]).n128_u64[0];
        LANES128(v43).n128_u64[1] = LANES128(v43).n128_u64[0];
        LANES128(v46).n128_u64[1] = LANES128(v44).n128_u64[0];
        *(int8x8_t*)&LANES128(v45).n128_i8[8] =
            vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        LANES128(v47).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int32x2_t*)&LANES128(v47).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v42).n128_u64[0]), 1);
        v48 = vmlaq_f32(vmulq_f32(v42, v43),
                        COERCE_AS(float32x4_t, GameData_1a83800),
                        vmulq_f32(v46, v45));
        LANES128(v45).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v44).n128_u64[1] = LANES128(v45).n128_u64[0];
        LANES128(v45).n128_u64[1] = LANES128(v46).n128_u64[0];
        LANES128(v41).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v41).n128_i8[8] =
            vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        *(float32x4_t*)v122 =
            vmlsq_f32(vmlaq_f32(v48, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v45, v47)),
                      v41, v44);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21a61b0) != 0) {
          v53 = *((_QWORD*)GameData_212c560 + 1);
          *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
          *((_QWORD*)&GameData_21a61a0 + 1) = v53;
          __cxa_guard_release((__int64)&GameData_21a61b0);
        }
        v5 = (int8x16_t*)v122;
      }
      else {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21a61b0) != 0) {
          v49 = *((_QWORD*)GameData_212c560 + 1);
          *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
          *((_QWORD*)&GameData_21a61a0 + 1) = v49;
          __cxa_guard_release((__int64)&GameData_21a61b0);
        }
        v5 = v40 + 21;
      }
      math_Quat_Rotate((void*)(&v126), v5, (int8x16_t*)&GameData_21a61a0);
      v6 = atan2f(LANES128(v126).n128_f32[0], LANES128(v126).n128_f32[2]);
      v3 += 32;
    } while (v3 != v4);
    v54 = v6 * 0x1.ca5dc20000000p+5f;
    v55 = *(_QWORD*)(a1 + 712);
    if (v55 == 0) {
      goto LABEL_61;
    }
  }
  v56 = std___1___shared_weak_count_lock(v55);
  if (v56 != 0) {
    v57 = *(_QWORD*)(a1 + 704);
    v58 = v56;
    if (v57 != 0) {
      GameRoutine_cae2c0((__int64)v122, (__int64*)(v57 + 120));
      if ((*(_BYTE*)(a1 + 976) & 1) != 0) {
        v59 = (__int128*)(a1 + 960);
      }
      else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                     memory_order_acquire) &
                1) != 0) {
        v59 = &GameData_21a6120;
      }
      else {
        v59 = &GameData_21a6120;
        if (__cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
          v117 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v117;
          __cxa_guard_release((__int64)&GameData_21a6130);
        }
      }
      v60 = *v59;
      v125 = v54;
      v123 = v60;
      v124 = DWORD2(v60);
      game_hub_d6d880((__int64*)(v57 + 120), (__int64)v122);
      *(_DWORD*)(v57 + 1208) = 0;
      v61 = *(_QWORD*)GameData_212dbb8[0];
      v62 = GameData_212ebb0[0];
      if ((GameRoutine_f72090(*GameData_212ebb0[0]) & 1) != 0) {
        if (*(_BYTE*)(v57 + 80) == 1) {
          v64 = *(_QWORD*)(v57 + 72);
          {
            __typeof__(v63) z_ = (__typeof__(v63)){0};
            LODWORD(z_) = *(_DWORD*)(v57 + 268);
            v63 = z_;
          }
          LANES128(v126).n128_u64[0] = *(_QWORD*)(v57 + 64);
          LANES128(v126).n128_u64[1] = v64;
          LANES128(v65).n128_u64[0] = *(_QWORD*)(v57 + 260);
          LANES128(v65).n128_u64[1] = v63;
        }
        else {
          {
            __typeof__(v63) z_ = (__typeof__(v63)){0};
            LODWORD(z_) = *(_DWORD*)(v57 + 268);
            v63 = z_;
          }
          LANES128(v65).n128_u64[0] = *(_QWORD*)(v57 + 260);
          LANES128(v65).n128_u64[1] = v63;
          v126 = vaddq_f32(v65, *(float32x4_t*)(v57 + 16));
        }
        LANES128(v67).n128_u32[0] = 0;
        LANES128(v67).n128_u32[3] = 0;
        v68 = *v62;
        *(unsigned __int64*)((char*)LANES128(v67).n128_u64 + 4) =
            *(unsigned int*)(v57 + 280);
        v127 = v65;
        v128[0] = vaddq_f32(v65, v67);
        v69 = 1 << GameRoutine_f71d40(v68, (__int64)&v126, v61 + 64);
        v70 = *v62;
        *(_DWORD*)(v57 + 1208) |= v69;
        v71 = 1 << GameRoutine_f71d40(v70, (__int64)&v127, v61 + 64);
        v72 = *v62;
        *(_DWORD*)(v57 + 1208) |= v71;
        v66 = *(_DWORD*)(v57 + 1208) |
              (1 << GameRoutine_f71d40(v72, (__int64)v128, v61 + 64));
      }
      else {
        v66 = *(_DWORD*)(v57 + 1208) | 1;
      }
      *(_DWORD*)(v57 + 1208) = v66;
      GameHr_cacc00((__int64)v122);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
      std___1___shared_weak_count___release_weak(v58);
      v73 = *(_QWORD*)(a1 + 728);
      if (v73 == 0) {
        return;
      }
      goto LABEL_62;
    }
  }
LABEL_61:
  v73 = *(_QWORD*)(a1 + 728);
  if (v73 == 0) {
    return;
  }
LABEL_62:
  v74 = std___1___shared_weak_count_lock(v73);
  if (v74 == 0) {
    return;
  }
  v75 = *(float32x4_t**)(a1 + 720);
  v76 = v74;
  if (v75 == nullptr) {
    goto LABEL_116;
  }
  v77 = LANES128(v75[1]).n128_i64[1];
  if (v77 != 0) {
    v78 = LANES128(v75[1]).n128_u64[0];
    v79 = LANES128(v75[1]).n128_i64[1];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v77 + 16), 1u,
                              memory_order_relaxed);
    v80 = std___1___shared_weak_count_lock(v79);
    std___1___shared_weak_count___release_weak(v77);
    if (v80 != 0 && v78 != 0) {
      if (*(_BYTE*)(v78 + 80) == 1) {
        v82 = *(float32x4_t*)(v78 + 64);
      }
      else {
        {
          __typeof__(v81) z_ = (__typeof__(v81)){0};
          LODWORD(z_) = *(_DWORD*)(v78 + 268);
          v81 = z_;
        }
        LANES128(v107).n128_u64[0] = *(_QWORD*)(v78 + 260);
        LANES128(v107).n128_u64[1] = v81;
        v82 = vaddq_f32(*(float32x4_t*)(v78 + 16), v107);
      }
      if (LANES128(v75[4]).n128_u8[0] == 1) {
        LANES64(v108).n64_u64[0] =
            LANES64_OF(vmovn_s32(vceqq_f32(v75[3], v82))).n64_u64[0];
        if ((LANES64(v108).n64_u8[0] & 1) != 0 &&
            (LANES64(v108).n64_u8[2] & 1) != 0 &&
            (LANES64(v108).n64_u8[4] & 1) != 0) {
        LABEL_114:
          if (atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80);
            std___1___shared_weak_count___release_weak(v80);
          }
          goto LABEL_116;
        }
        LANES128(v75[3]).n128_u64[0] = LANES128(v82).n128_u64[0];
        v109 = v75[3];
        LANES128(v109).n128_u64[1] = LANES128(v82).n128_u32[2];
        v75[3] = v109;
      }
      else {
        v75[3] = v82;
        LANES128(v75[4]).n128_u8[0] = 1;
      }
      v110 = GameData_212ebb0[0];
      v111 = (__int64*)GameData_212dbb8[0];
      v112 = GameRoutine_f71d40(*GameData_212ebb0[0], (__int64)&v75[3],
                                *(_QWORD*)GameData_212dbb8[0] + 64LL);
      v113 = LANES128(v75[4]).n128_u8[0];
      LANES128(v75[13]).n128_u32[1] = v112;
      if ((v113 & 1) != 0) {
        v114 = *v111;
        v115 = *v110;
        v116 = GameRoutine_f71d40(v115, (__int64)&v75[3], v114 + 64);
        LANES128(v75[13]).n128_u8[8] =
            (GameRoutine_f71cb0(v116, v116) & 1) != 0 &&
            ((unsigned int)game_hub_f71fc0(v115, (__int64)&v75[3], v114 + 64) ==
                 0 ||
             (*(_BYTE*)(v115 + 32) & 2) != 0);
        goto LABEL_114;
      }
    LABEL_120:
      GameRoutine_8123d0();
    }
  }
  else {
    v80 = 0;
  }
  v84 = *(_QWORD*)(*(_QWORD*)(a1 + 800) + 8LL);
  v83 = *(_QWORD*)(*(_QWORD*)(a1 + 800) + 16LL);
  if (v83 != v84) {
    while (1) {
      v85 = *(_QWORD*)(v84 + 8);
      if (*(_DWORD*)(v85 + 284) == 2) {
        break;
      }
      v84 += 32;
      if (v84 == v83) {
        goto LABEL_75;
      }
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v89 = GameData_212df08;
    if ((explicit & 1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
      *v89 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release((__int64)GameData_212df10);
    }
    v90 = *(_QWORD*)(v85 + 512);
    v91 = v90;
    while (v91 != *(_QWORD*)(v85 + 504)) {
      v92 = *(_DWORD*)(v91 - 16);
      v91 -= 16;
      v90 -= 16;
      if (v92 == *v89) {
        if (*(_QWORD*)(v85 + 512) == v90) {
          break;
        }
        v93 = *(_QWORD*)(v90 + 8);
        if (v93 == 0) {
          break;
        }
        v94 = *(float*)(*(_QWORD*)(v93 + 24) + 68LL) -
              *(float*)(*(_QWORD*)(v93 + 24) + 52LL);
        if (v94 < 0x0.0p+0f) {
          v94 = 0x0.0p+0f;
        }
        v86 = v94 + 0x1.99999a0000000p-3f;
        if ((*(_BYTE*)(a1 + 976) & 1) != 0) {
          goto LABEL_76;
        }
        goto LABEL_86;
      }
    }
  }
LABEL_75:
  v86 = 0x1.3333340000000p+0f;
  if ((*(_BYTE*)(a1 + 976) & 1) != 0) {
  LABEL_76:
    v87 = (float32x4_t*)(a1 + 960);
  }
  else {
  LABEL_86:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) != 0) {
      v87 = (float32x4_t*)&GameData_21a6120;
    }
    else {
      v121 = v86;
      v87 = (float32x4_t*)&GameData_21a6120;
      if (__cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
        v118 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v118;
        __cxa_guard_release((__int64)&GameData_21a6130);
      }
      v86 = v121;
    }
  }
  {
    __typeof__(v95) z_ = (__typeof__(v95)){0};
    LODWORD(z_) = 0;
    v95 = z_;
  }
  *((float*)&v95 + 1) = v86;
  v96 = vaddq_f32(COERCE_AS(float32x4_t, v95), *v87);
  if (LANES128(v75[4]).n128_u8[0] != 1) {
    v75[3] = v96;
    LANES128(v75[4]).n128_u8[0] = 1;
    goto LABEL_94;
  }
  LANES64(v97).n64_u64[0] =
      LANES64_OF(vmovn_s32(vceqq_f32(v75[3], v96))).n64_u64[0];
  if ((LANES64(v97).n64_u8[0] & 1) == 0 || (LANES64(v97).n64_u8[2] & 1) == 0 ||
      (LANES64(v97).n64_u8[4] & 1) == 0) {
    LANES128(v75[3]).n128_u64[0] = LANES128(v96).n128_u64[0];
    v98 = v75[3];
    LANES128(v98).n128_u64[1] = LANES128(v96).n128_u32[2];
    v75[3] = v98;
  LABEL_94:
    v99 = GameData_212ebb0[0];
    v100 = (__int64*)GameData_212dbb8[0];
    v101 = GameRoutine_f71d40(*GameData_212ebb0[0], (__int64)&v75[3],
                              *(_QWORD*)GameData_212dbb8[0] + 64LL);
    v102 = LANES128(v75[4]).n128_u8[0];
    LANES128(v75[13]).n128_u32[1] = v101;
    if ((v102 & 1) == 0) {
      goto LABEL_120;
    }
    v103 = *v100;
    v104 = *v99;
    v105 = GameRoutine_f71d40(v104, (__int64)&v75[3], v103 + 64);
    v106 = (GameRoutine_f71cb0(v105, v105) & 1) != 0 &&
           ((unsigned int)game_hub_f71fc0(v104, (__int64)&v75[3], v103 + 64) ==
                0 ||
            (*(_BYTE*)(v104 + 32) & 2) != 0);
    LANES128(v75[13]).n128_u8[8] = v106;
  }
  if (v80 != 0) {
    goto LABEL_114;
  }
LABEL_116:
  if (atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
    std___1___shared_weak_count___release_weak(v76);
  }
}

void game_hub_e19b00(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  double v9;
  float v10;
  double v11;
  float v12;
  double v13;
  float v14;
  double v15;
  float v16;
  __int64 v17;
  unsigned __int8* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int8* v33;
  float v34;
  __int64 v35;
  __int64 v36;
  __int128 v37;
  float v38;
  __int64 v39;
  __int128 v40;
  __int64 v41;
  __int64* v42;
  __int64* v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  struct {
    __int64 v53;
    int v54;
  } v53_;
  __int64 v55[3];
  struct {
    __int64 v56[2];
    int v57;
  } v56_;
  struct {
    _QWORD v58[2];
    int v59;
  } v58_;

  if (*(_BYTE*)(a1 + 64) != 1) {
    goto LABEL_42;
  }
  v2 = *(float*)(a1 + 60);
  v3 = fabsf(
      (float)((float)(*(float*)(*(_QWORD*)
                                    game_script_hub_g_frame_counter_ptr[0] +
                                160LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f) *
      0x1.f400000000000p+9f);
  if (v2 <= 0x0.0p+0f) {
    if (v2 >= 0x0.0p+0f || (v2 = v2 + v3) <= 0x0.0p+0f) {
    LABEL_8:
      *(float*)(a1 + 60) = v2;
      *(_BYTE*)(a1 + 64) = 1;
      if (v2 > 0x0.0p+0f) {
        goto LABEL_42;
      }
      goto LABEL_9;
    }
  }
  else {
    v2 = v2 - v3;
    if (v2 >= 0x0.0p+0f) {
      goto LABEL_8;
    }
  }
  *(_DWORD*)(a1 + 60) = 0;
  *(_BYTE*)(a1 + 64) = 1;
LABEL_9:
  v4 = *(_QWORD*)GameData_212dbd0[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbd0[0] + 8LL) & 1) != 0 ||
      *(int*)(v4 + 12) > 0 || (*(_BYTE*)(v4 + 28) & 1) != 0 ||
      (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 368) & 1) != 0 ||
      *(_DWORD*)(*(_QWORD*)GameData_212dbe0[0] + 8LL) != 0) {
    v5 = *(_QWORD*)(a1 + 80);
    if (v5 != 0) {
      v6 = std___1___shared_weak_count_lock(v5);
      if (v6 != 0) {
        v7 = *(_QWORD*)(a1 + 72);
        v8 = v6;
        if (v7 != 0) {
          if (*(_BYTE*)(a1 + 64) == 1) {
            *(_BYTE*)(a1 + 64) = 0;
          }
          v9 = snd_getDefineValue("SetDelay_MapTransition_Stride");
          v10 = *(float*)&v9;
          v11 = snd_getDefineValue("SetVolume_MapTransition_FootStep1");
          v12 = *(float*)&v11;
          v13 = snd_getDefineValue("SetVolume_MapTransition_FootStep2");
          v14 = *(float*)&v13;
          v15 = snd_getDefineValue("SetVolume_MapTransition_FootStep3");
          v16 = *(float*)&v15;
          CharacterSound_1095750(
              (void*)((__int64)v56_.v56),
              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 8LL) +
                                    232LL) +
                         136LL),
              "SE_FS_<LD/MB>_<FootID>_<Ground>_<Arg>", (__int64)"Run",
              0x0.0p+0f);
          if ((snd_fnd_WeakHandle_isValid(v56_.v56) & 1) != 0) {
            v17 = snd_fnd_WeakHandle_get((__int64)v56_.v56);
            v18 = (unsigned __int8*)GameRoutine_190240(v17 + 144);
            v19 = snd_fnd_WeakHandle_get((__int64)v56_.v56);
            (*(void (**)(__int64))(*(_QWORD*)(v19 - 5592) + 264LL))(v19 - 5592);
            snd_findSlot_100a00((void*)((__int64)v58_.v58), "SE_FS_OutArea");
            game_sound_80e590((void*)((__int64)v55), (__int64)v58_.v58, v18,
                              COERCE_AS(float, (unsigned int)(0)));
            if ((snd_fnd_WeakHandle_isValid(v55) & 1) != 0) {
              v20 = snd_fnd_WeakHandle_get((__int64)v55);
              if (v20 != 0) {
                v21 = v20 - 5592;
              }
              else {
                v21 = 0;
              }
              snd_Fade_Fade_10c830((__int64)v58_.v58, 0x0.0p+0f);
              (*(void (**)(__int64, _QWORD*, float))(
                  *(_QWORD*)(v21 + 40) + 72LL))(v21 + 40, v58_.v58, v12);
              snd_Fade_Destroy_Fade(v58_.v58);
            }
            snd_findSlot_100a00((void*)((__int64)v58_.v58), "SE_FS_OutArea");
            game_sound_80e590((void*)((__int64)v55), (__int64)v58_.v58, v18,
                              COERCE_AS(float, (unsigned int)(LODWORD(v10))));
            if ((snd_fnd_WeakHandle_isValid(v55) & 1) != 0) {
              v22 = snd_fnd_WeakHandle_get((__int64)v55);
              if (v22 != 0) {
                v23 = v22 - 5592;
              }
              else {
                v23 = 0;
              }
              snd_Fade_Fade_10c830((__int64)v58_.v58, 0x0.0p+0f);
              (*(void (**)(__int64, _QWORD*, float))(
                  *(_QWORD*)(v23 + 40) + 72LL))(v23 + 40, v58_.v58, v14);
              snd_Fade_Destroy_Fade(v58_.v58);
            }
            snd_findSlot_100a00((void*)((__int64)v58_.v58), "SE_FS_OutArea");
            game_sound_80e590(
                (void*)((__int64)v55), (__int64)v58_.v58, v18,
                COERCE_AS(float,
                          (unsigned int)(COERCE_UNSIGNED_INT(v10 + v10))));
            if ((snd_fnd_WeakHandle_isValid(v55) & 1) != 0) {
              v24 = snd_fnd_WeakHandle_get((__int64)v55);
              if (v24 != 0) {
                v25 = v24 - 5592;
              }
              else {
                v25 = 0;
              }
              snd_Fade_Fade_10c830((__int64)v58_.v58, 0x0.0p+0f);
              (*(void (**)(__int64, _QWORD*, float))(
                  *(_QWORD*)(v25 + 40) + 72LL))(v25 + 40, v58_.v58, v16);
              snd_Fade_Destroy_Fade(v58_.v58);
            }
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak(v8);
        }
      }
    }
  }
  else if ((*(_BYTE*)(a1 + 57) & 1) == 0) {
    *(_BYTE*)(a1 + 57) = 1;
    if (*game_sound_g_game_sound_ptr[0] != 0) {
      *(_BYTE*)(*game_sound_g_game_sound_ptr[0] + 612) = 0;
    }
  }
  if (*(_BYTE*)(a1 + 64) == 1) {
    *(_BYTE*)(a1 + 64) = 0;
  }
LABEL_42:
  v51 = a1;
  v26 = *(__int64**)(a1 + 8);
  v27 = *(__int64**)(a1 + 16);
  if (v26 != v27) {
    v28 = GameData_212e248[0];
    v29 = GameData_212e2d8 + 16;
    v52 = GameData_212d1e0[0] + 2;
    do {
      v30 = *v26;
      v31 = *v26 + 17;
      v32 = *snd_s_target_ptr;
      if ((*(_BYTE*)(*v26 + 16) & 1) != 0) {
        v33 = *(unsigned __int8**)(*v26 + 32);
      }
      else {
        v33 = (unsigned __int8*)(*v26 + 17);
      }
      LODWORD(v58_.v58[0]) = (unsigned int)snd_fnd_calcCrc32(v33, 0);
      HIDWORD(v58_.v58[0]) =
          (unsigned int)snd_fnd_calcCrc32Reverse((const char*)v33, 0);
      v34 = (*(float (**)(__int64, _QWORD*))(*(_QWORD*)v32 + 528LL))(v32,
                                                                     v58_.v58);
      Manager_1181f0((void*)((__int64)v58_.v58), *v28, -1);
      v35 = snd_fnd_WeakHandle_get((__int64)v58_.v58);
      if (v35 != 0) {
        v36 = v35 - 5592;
      }
      else {
        v36 = 0;
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v36 + 40) + 1048LL))((void*)(v55), v36 + 40);
      v37 = *(_OWORD*)(v30 + 48);
      v58_.v58[0] = v29;
      v58_.v58[1] = v37;
      v58_.v59 = DWORD2(v37);
      v38 = snd_fnd_calcDistanceTo((float*)v55, (float*)v58_.v58);
      if ((snd_fnd_WeakHandle_isValid((__int64*)v30) & 1) != 0) {
        if (v38 > v34 && (snd_fnd_WeakHandle_isValid((__int64*)v30) & 1) != 0) {
          v39 = snd_fnd_WeakHandle_get(v30);
          snd_Fade_Fade_10c910((__int64)v58_.v58, 500);
          (*(void (**)(__int64, _QWORD*, _QWORD, double))(
              *(_QWORD*)(v39 - 5592) + 248LL))(v39 - 5592, v58_.v58, 0,
                                               0x0.0p+0);
          snd_Fade_Destroy_Fade(v58_.v58);
        }
      }
      else if (v38 > v34) {
        v40 = *(_OWORD*)(v30 + 48);
        if ((*(_BYTE*)(v30 + 16) & 1) != 0) {
          v41 = *(_QWORD*)(v30 + 32);
        }
        else {
          v41 = v31;
        }
        v56_.v56[1] = *(_QWORD*)(v30 + 48);
        v56_.v57 = DWORD2(v40);
        v56_.v56[0] = (__int64)v52;
        if (v41 != 0) {
          snd_Fade_Fade_10c830((__int64)v58_.v58, 0x0.0p+0f);
          snd_playAt_ff5f0(v41, v41, (__int64)v56_.v56, (__int64)v58_.v58, 0,
                           0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade(v58_.v58);
        }
        else {
          v53_.v53 = 0;
          v53_.v54 = 0x2000;
        }
        GameRoutine_112180(v30, (__int64)&v53_.v53);
      }
      v26 += 2;
    } while (v26 != v27);
  }
  v42 = *(__int64**)(v51 + 32);
  v43 = *(__int64**)(v51 + 40);
  v44 = v42;
  if (v42 != v43) {
    v44 = *(__int64**)(v51 + 32);
    while ((*(_BYTE*)(*v44 + 80) & 1) == 0) {
      v44 += 2;
      if (v44 == v43) {
        v44 = *(__int64**)(v51 + 40);
        goto LABEL_87;
      }
    }
  }
  if (v44 != v43) {
    v45 = v44 + 2;
    if (v44 + 2 != v43) {
      do {
        v46 = *v45;
        if ((*(_BYTE*)(*v45 + 80) & 1) == 0) {
          v47 = v45[1];
          *v45 = 0;
          v45[1] = 0;
          v48 = v44[1];
          *v44 = v46;
          v44[1] = v47;
          if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
            std___1___shared_weak_count___release_weak(v48);
          }
          v44 += 2;
        }
        v45 += 2;
      } while (v45 != v43);
      v42 = *(__int64**)(v51 + 32);
      v43 = *(__int64**)(v51 + 40);
    }
  }
  if (v44 == v43) {
    v44 = v43;
  }
  else {
    do {
      v49 = *(v43 - 1);
      if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
        std___1___shared_weak_count___release_weak(v49);
      }
      v43 -= 2;
    } while (v43 != v44);
    v42 = *(__int64**)(v51 + 32);
    *(_QWORD*)(v51 + 40) = v44;
  }
LABEL_87:
  while (v42 != v44) {
    v50 = *v42;
    v42 += 2;
    game_1017cc0(v50);
  }
}

#pragma GCC visibility pop
