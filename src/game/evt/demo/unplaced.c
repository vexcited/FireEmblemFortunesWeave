#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_11c59a0(_QWORD* result, char, __int64);
_QWORD* Seq_1147f80(__int64);
__attribute__((swiftcall)) void GameRoutine_1153b40(PSEUDO_X8, _QWORD* result,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_a51060(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void Seq_11536d0(PSEUDO_X8, __int64, __int64*,
                                            _DWORD*);
__attribute__((swiftcall)) void game_1142cc0(PSEUDO_X8, __int64,
                                             unsigned __int8*, char, __n128);
__int64* GameRoutine_1152360(_QWORD*, unsigned __int8*);
__int64* GameRoutine_1152500(_QWORD*, unsigned __int8*);
__int64* GameRoutine_11526a0(_QWORD*, unsigned __int8*);
__int64* GameRoutine_1153800(__int64, __int64);
__int64* GameRoutine_11571c0(__int64, unsigned __int8*, unsigned __int8*, char,
                             float, float);
__int64* GameRoutine_1159cf0(__int64, unsigned __int8*, unsigned __int8*);
__int64* GameRoutine_68dee0(_QWORD*, unsigned __int8*);
__int64* GameRoutine_c22420(_QWORD*, unsigned __int8*);
__int64* Registration_a4f800(__int64, __int64, int);
__int64 CharacterWork_11c5740(__int64 result, char);
__int64 CharacterWork_11c5860(__int64, __int64);
__int64 EveryFrameProc_10aa5e0(__int64, __int64, float);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1139150(_QWORD);
__int64 GameRoutine_1148b60(__int64, __int64, __int64, __int64, __int16*);
__int64 GameRoutine_1152500_alt1(_QWORD, _QWORD) __asm__("GameRoutine_1152500");
__int64 GameRoutine_11555e0(__int64);
__int64 GameRoutine_1159ac0(__int64);
__int64 GameRoutine_1159be0(__int64);
__int64 GameRoutine_11c4800(__int64 result, float, float);
__int64 GameRoutine_11cb1c0(__int64 result, long double);
__int64 GameRoutine_175e8f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD);
__int64 GameRoutine_60a020_alt1(__int64, __int64) __asm__("GameRoutine_60a020");
__int64 GameRoutine_65be40(__int64*, __int64);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_adf970(_QWORD, _QWORD);
__int64 ObjectBuildCreate_c21360(__int64, __int64, __int64);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Registration_a4f6c0(_QWORD);
__int64 Seq_114d7c0(_QWORD, _QWORD, float, float, long double);
__int64 Seq_114d960(_QWORD, _QWORD, float, long double);
__int64 Seq_114dc80(_QWORD, _QWORD, float, float, long double);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 fw_text_String_CopyTerminated_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "fw_text_String_CopyTerminated");
__int64 game_809dc0(_QWORD, _QWORD, long double);
__int64 game_810d20(__int64, float);
__int64 game_HashString(__int64 result);
__int64 game_HashString32(_QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(void);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_findSound(__int64);
__int64 snd_mute(__int64*, __int64);
__int64 snd_resumeMute(__int64*, __int64);
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
__int64 snd_startVolume_ffe30(__int64*, __int64, float);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 strlen(_QWORD);
__int64 strncmp(_QWORD, _QWORD, _QWORD);
__int64 strtof_alt1(_QWORD, _QWORD) __asm__("strtof");
__n128 CharacterWork_11c56e0(__int64);
__n128 GameRoutine_10aa000(__int64, _QWORD*);
__n128 GameRoutine_11c37e0(__int64, __int64, __int64, _QWORD*, __int64, __int64,
                           char);
__n128 GameRoutine_11c4460(__int64);
__n128 GameRoutine_11c53a0(__int64, __int64, __int128*, __int128*, __int128*,
                           __int128*);
__n128 GameRoutine_11caf60(__int64);
__n128 game_112ce60(__int64, __int64*, __int64);
__n128 game_112d580(char*, __int64, __int64);
__n128 game_evt_demo_SceneObjectWork_SceneObjectWork(__int64, __int64, __int64,
                                                     __int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak();
char* GameRoutine_10aa900(char**, __int64*);
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN* GameData_2130238;
extern _UNKNOWN* GameData_2130510;
extern _UNKNOWN GameData_216de68;
extern __int64 (*GameData_20134a0[])();
extern __int64 (*GameData_2013620[])();
extern __int64 (*GameData_20136a0[])();
extern __int64 (*GameData_2013720[])();
extern __int64 (*GameData_20137a0[])();
extern __int64 (*GameData_20138a0[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212d460[6];
extern __int64* GameData_212e348;
extern __int64* GameData_212fc38[2];
extern __int64* GameData_2130230;
extern __int64* GameData_2130248[7];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212c7e8[4];
extern __int64 GameData_21c6978;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9d80;
extern __int64 GameData_21c9da0;
extern __int64 GameData_21c9da8;
extern __int64 GameData_21c9dc0;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_22336e0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_frame_clock;
extern __int64 game_script_hub_g_frame_counter;
extern char* GameData_1f92e38[6];
extern char* GameData_2130220;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a9f09e;
extern char GameData_1ad767c[6];
float CharacterWork_11c7720(__int64, float32x4_t*, float32x4_t*, int8x16_t*,
                            int8x16_t*, char*, _DWORD*, _DWORD*, float, float,
                            float, float);
float GameRoutine_11c4de0(__int64, char, float result);
float powf(_QWORD, float, float);
float strtof(_QWORD, _QWORD);
long double strtof_alt2(_QWORD, _QWORD) __asm__("strtof");
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void GameRoutine_19378a0(__int64, char, __int64);
void Seq_114df40(float, float, float, float, float, float, __int64, char,
                 __int128*);
void Seq_114eb80(_QWORD*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60f930();
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a230();
void game_11ca9c0(__int64, __int64, __int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__attribute__((swiftcall)) void game_evt_demo_114e0f0(PSEUDO_X8 x8_,
                                                      __int64 a1);
__attribute__((swiftcall)) void game_evt_demo_114e290(PSEUDO_X8 x8_,
                                                      __int64 a1);
__int64 game_evt_demo_114e4a0(__int64 result);
__n128 game_evt_demo_114e5a0(__int64 a1, _BYTE* a2);
__n128 game_evt_demo_114e680(__int64 a1, _BYTE* a2);
__n128 game_evt_demo_1151340(__int64 a1);
__int64 game_evt_demo_11518d0(__int64 result);
__int64 game_evt_demo_1153ca0(__int64 a1, __int64 a2);
__int64 game_evt_demo_11542a0(__int64 a1);
__int64 game_evt_demo_1154340(__int64 a1);
__int64 game_evt_demo_11545e0(__int64 a1);
__int64 game_evt_demo_1155290(__int64 a1, long double a2);
__int64 game_evt_demo_11553e0(__int64 a1, long double a2);
__int64 game_evt_demo_1155700(__int64 a1);
__int64 game_evt_demo_1155ed0(__int64 a1);
__int64 game_evt_demo_1156480(__int64 a1);
__int64 game_evt_demo_1157880(__int64 a1);
__int64* game_evt_demo_1157bf0(__int64 a1, char a2);
__int64* game_evt_demo_1157fc0(__int64 a1);
__int64* game_evt_demo_1158420(__int64 a1);
__int64 game_evt_demo_1158880(__int64 a1);
__int64* game_evt_demo_11590c0(__int64 a1);
__int64* game_evt_demo_1159220(__int64 a1);
__int64 game_evt_demo_11593e0(__int64 a1);
__int64 game_evt_demo_11597a0(__int64 a1);
__int64 game_evt_demo_1159de0(__int64 a1);
__int64 game_evt_demo_115aa00(__int64 a1);
__int64 game_evt_demo_115ae40(__int64 a1);
__int64* game_evt_demo_115b020(__int64 a1);
__int64 game_evt_demo_115b360(__int64 a1);
__int64* game_evt_demo_115b620(__int64 a1);
__int64 game_evt_demo_115b820(__int64 a1);
__int64 game_evt_demo_115bba0(__int64 a1);
__int64 game_evt_demo_115bd80(__int64 a1);
__int64 game_evt_demo_115c1e0(__int64 a1);
__int64 game_evt_demo_115c720(__int64 a1);
__int64 game_evt_demo_115cb40(__int64 a1);
__int64 game_evt_demo_115cda0(__int64 a1, double a2, double a3, long double a4);
__int64 game_evt_demo_115d0b0(__int64 a1, double a2, long double a3);
__int64 game_evt_demo_115db10(__int64 a1, double a2, double a3, long double a4);
__int64 game_evt_demo_115e3b0(__int64 a1);
__int64 game_evt_demo_115eb00(__int64 a1);
__int64 game_evt_demo_115ee20(__int64 a1);
__int64 game_evt_demo_115eed0(__int64 a1);
__int64 game_evt_demo_115f320(__int64 a1);
__int64 game_evt_demo_115f430(__int64 a1);
__int64 game_evt_demo_115f570(__int64 a1);
__int64 game_evt_demo_115f6b0(__int64 a1);
__int64 game_evt_demo_115f860(__int64 a1);
__int64 game_evt_demo_115fa20(__int64 a1);
__int64 game_evt_demo_115fad0(__int64 a1);
void game_evt_demo_115fec0(float* a1, unsigned __int8* a2, char* a3,
                           _QWORD* a4);
float game_evt_demo_1161ce0(__int64 a1);
void game_evt_demo_1161e40(float* a1, unsigned __int8* a2, char* a3,
                           _QWORD* a4);
void game_evt_demo_1162420(float* a1, unsigned __int8* a2, __int64* a3,
                           __int64* a4);
__int64* game_9a28e0(int);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_113c310(_QWORD);
__int64 GameRoutine_11571c0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, float,
                                 long double) __asm__("GameRoutine_11571c0");
__int64 GameRoutine_175ef80(_QWORD, _QWORD);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_810a70(_QWORD, _QWORD, long double);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 strtol(_QWORD, _QWORD, _QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_114af80(__int64, __int64, __int16*, char);
bool GameRoutine_1154040(__int64, _DWORD*);
bool Seq_114af10(__int64, _QWORD*);
extern _QWORD GameData_212d168;
extern _UNKNOWN* GameData_212deb8;
extern __int64 GameData_21c9d98;
extern __int64 GameData_21f8018;
extern __int64 game_GameModeData_instance_;
extern int* GameData_212deb0;
void Seq_1134ae0(__int64, __int64);
void game_evt_demo_114e840(__int64 a1);
__int64 game_evt_demo_11547e0(__int64 a1);
__int64 game_evt_demo_11575a0(__int64 a1, double a2, long double a3);
__int64 game_evt_demo_115ef80(__int64 a1);
__int64 game_evt_demo_115f1b0(__int64 a1);

__attribute__((swiftcall)) void game_evt_demo_114e0f0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  _QWORD v16[4];
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v4 = (__int64)*msg_MessageManager_empty_text__ptr;
  v5 = strlen(*msg_MessageManager_empty_text__ptr);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v5);
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16, 0);
    a2[1] = v6;
    a2[2] = v7;
    *a2 = v8 | 1;
    goto LABEL_9;
  }
  *(_BYTE*)a2 = 2 * v5;
  v7 = (__int64)a2 + 1;
  if (v5 != 0) {
  LABEL_9:
    memmove(v7, v4, v6);
  }
  *(_BYTE*)(v7 + v6) = 0;
  v9 = *(unsigned __int8*)(a1 + 504);
  v10 = *(_QWORD*)(a1 + 512);
  if ((v9 & 1) == 0) {
    v10 = v9 >> 1;
  }
  if (v10 != 0) {
    v11 = (v9 & 1) == 0;
    v12 = *(_QWORD*)(a1 + 520);
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v13 = *msg_MessageManager_instance__ptr[0];
    if (v11) {
      v14 = a1 + 505;
    }
    else {
      v14 = v12;
    }
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v30 = -1;
    v16[0] = GameData_212e348 + 2;
    v16[1] = 0xFFFF0001FFFF0000LL;
    v16[2] = 0xFFFF0004FFFF0002LL;
    v16[3] = 0xFFFF0006FFFF0005LL;
    v31 = 8;
    v17 = -65529;
    v18 = -65528;
    GameRoutine_a4dbe0(v13, v14, 0, v16);
    {
      GameRoutine_60a020(a2);
      return;
    }
  }
  result = *(_QWORD*)(a1 + 496);
  if (result != 0) {
    GameRoutine_adf970(result, 0);
    {
      GameRoutine_60a020(a2);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_evt_demo_114e290(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  bool v11;
  char* v12;
  __int64 v13;
  char* v14;
  unsigned int v15;
  __int64 v16;
  _QWORD v18[4];
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v4 = (__int64)*msg_MessageManager_empty_text__ptr;
  v5 = strlen(*msg_MessageManager_empty_text__ptr);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v5);
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16, 0);
    a2[1] = v6;
    a2[2] = v7;
    *a2 = v8 | 1;
    goto LABEL_9;
  }
  *(_BYTE*)a2 = 2 * v5;
  v7 = (__int64)a2 + 1;
  if (v5 != 0) {
  LABEL_9:
    memmove(v7, v4, v6);
  }
  *(_BYTE*)(v7 + v6) = 0;
  v9 = *(unsigned __int8*)(a1 + 528);
  v10 = *(_QWORD*)(a1 + 536);
  if ((v9 & 1) == 0) {
    v10 = v9 >> 1;
  }
  if (v10 == 0) {
    v15 = *(__int16*)(a1 + 480) + 100 * *(__int16*)(a1 + 478);
    if ((int)v15 >= 445) {
      if (v15 < 0x2BC) {
        v16 = 0;
        goto LABEL_28;
      }
      if (v15 < 0x3E8) {
        v16 = 1;
        goto LABEL_28;
      }
      if (v15 < 0x6B3) {
        v16 = 2;
        goto LABEL_28;
      }
      if (v15 < 0x7D0) {
        v16 = 3;
        goto LABEL_28;
      }
      if (v15 < 0x960) {
        v16 = 4;
        goto LABEL_28;
      }
    }
    v16 = 5;
  LABEL_28:
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v13 = *msg_MessageManager_instance__ptr[0];
    v14 = GameData_1f92e38[v16];
    goto LABEL_29;
  }
  v11 = (v9 & 1) == 0;
  v12 = *(char**)(a1 + 544);
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v13 = *msg_MessageManager_instance__ptr[0];
  if (v11) {
    v14 = (char*)(a1 + 529);
  }
  else {
    v14 = v12;
  }
LABEL_29:
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v29 = -1;
  v30 = -1;
  v31 = -1;
  v32 = -1;
  v18[0] = GameData_212e348 + 2;
  v18[1] = 0xFFFF0001FFFF0000LL;
  v18[2] = 0xFFFF0004FFFF0002LL;
  v18[3] = 0xFFFF0006FFFF0005LL;
  v33 = 8;
  v19 = -65529;
  v20 = -65528;
  GameRoutine_a4dbe0(v13, v14, 0, v18);
  {
    GameRoutine_60a020(a2);
    return;
  }
}

__int64 game_evt_demo_114e4a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7[3];
  __int64 v8[5];

  if (*(_BYTE*)(result + 553) == 1) {
    v8[3] = v1;
    v8[4] = v2;
    v3 = result;
    v4 = (*(_BYTE*)(result + 160) & 1) != 0 ? *(_QWORD*)(result + 176)
                                            : result + 161;
    result = strncmp(v4, "MID_SE_", 7);
    if ((_DWORD)result != 0) {
      game_evt_demo_114e0f0((void*)(v8), v3);
      game_evt_demo_114e290((void*)(v7), v3);
      result = GameRoutine_175e8f0(v3, v8, v7);
      if ((v7[0] & 1) != 0 && v7[2] != 0) {
        v5 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v5 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
      }
      if ((v8[0] & 1) != 0 && v8[2] != 0) {
        v6 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v6 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
      }
    }
  }
  return result;
}

__n128 game_evt_demo_114e5a0(__int64 a1, _BYTE* a2)
{
  __n128 result;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  _BYTE* v10;
  struct {
    __int64 v11;
    char gap32_[8];
    char v12;
  } v11_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = a2;
  if (a2 != nullptr && *a2 != 0) {
    v9 = 0;
    Seq_11536d0((void*)(&v11_.v11), a1 + 736, (__int64*)&v10, &v9),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameRoutine_1153800(a1 + 736, v11_.v11),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v4 & 1) == 0) {
      v5 = v11_.v11;
      v11_.v11 = 0;
      if (v5 != 0) {
        v6 = fw_memory_g_heap_manager_ptr;
        if (v11_.v12 == 1 && (*(_BYTE*)(v5 + 16) & 1) != 0 &&
            *(_QWORD*)(v5 + 32) != 0) {
          v7 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v7),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
          v8 = 56;
        }
        return nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v8);
      }
    }
  }
  return result;
}

__n128 game_evt_demo_114e680(__int64 a1, _BYTE* a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  _BYTE* v6;
  char* v7;
  __int64 v8;
  __int64* v9;
  __n128 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD v15[2];
    char* v16;
  } v15_;
  struct {
    __int64 v17;
    char gap32_[8];
    char v18;
  } v17_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a2 == nullptr || *a2 == 0) {
    return result;
  }
  v4 = strlen(a2),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v4 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v8, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v15_.v15[1] = v5;
    v15_.v16 = v7;
    v6 = a2;
    v15_.v15[0] = v8 | 1;
    goto LABEL_11;
  }
  v6 = a2;
  LOBYTE(v15_.v15[0]) = 2 * v4;
  v7 = (char*)v15_.v15 + 1;
  if (v4 != 0) {
  LABEL_11:
    memcpy(v7, v6, v5), result = COERCE_AS(__typeof__(result),
                                           PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v7[v5] = 0;
  v9 = GameRoutine_68dee0((_QWORD*)(a1 + 736), (unsigned __int8*)v15_.v15),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v9 != nullptr) {
    GameRoutine_1153b40((void*)((__int64)&v17_.v17), (_QWORD*)(a1 + 736), v9),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v11 = v17_.v17;
    v17_.v17 = 0;
    if (v11 != 0) {
      if (v17_.v18 == 1 && (*(_BYTE*)(v11 + 16) & 1) != 0 &&
          *(_QWORD*)(v11 + 32) != 0) {
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v12),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
    }
  }
  if ((v15_.v15[0] & 1) != 0 && v15_.v16 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
  }
  return result;
}

void game_evt_demo_114e840(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  _DWORD* v3;
  atomic_uchar* v4;
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  _DWORD* v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  bool v22;
  int v23;
  _QWORD v25[2];
  __int64 v26;
  __int64 v27;

  v1 = *(_QWORD**)(a1 + 576);
  if (v1 != nullptr) {
    v2 = fw_memory_g_heap_manager_ptr;
    v3 = (_DWORD*)GameData_212d168;
    v4 = (atomic_uchar*)GameData_212deb8;
    v5 = GameData_212deb0;
    do {
      if ((v1[2] & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(v25, v1[4], v1[3]);
      }
      else {
        v6 = v1[3];
        v7 = v1[4];
        v25[0] = v1[2];
        v25[1] = v6;
        v26 = v7;
      }
      v8 = v1[5];
      v27 = v8;
      if (v8 == 0) {
        goto LABEL_28;
      }
      v9 = *(_QWORD*)(v8 + 152);
      if (v9 != 0) {
        if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire(v4) != 0) {
          *v5 = wld_Crc32(0, "CharacterBuilder", 16);
          __cxa_guard_release(v4);
        }
        v10 = *(_QWORD*)(v9 + 512);
        v11 = v10;
        while (v11 != *(_QWORD*)(v9 + 504)) {
          v12 = *(_DWORD*)(v11 - 16);
          v11 -= 16;
          v10 -= 16;
          if (v12 == *v5) {
            if (*(_QWORD*)(v9 + 512) == v10) {
              break;
            }
            v13 = *(_QWORD*)(v10 + 8);
            if (*(_DWORD*)(v13 + 384) != 0) {
              goto LABEL_28;
            }
            goto LABEL_17;
          }
        }
      }
      v13 = 0;
      if ((*(_DWORD*)0x180LL) != 0) {
        goto LABEL_28;
      }
    LABEL_17:
      if (*v3 != 2) {
        goto LABEL_27;
      }
      v14 = v2;
      v15 = v3;
      v16 = *(_QWORD*)(v13 + 392);
      v17 = *(_QWORD*)(v13 + 400);
      if (v17 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                  memory_order_relaxed);
        v18 = *(_DWORD*)(v16 + 11784);
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak_alt1(v17);
        }
      }
      else {
        v18 = *(_DWORD*)(v16 + 11784);
      }
      v3 = v15;
      v2 = v14;
      if (v18 > 0x1A) {
        goto LABEL_27;
      }
      if (((1 << v18) & 0x410C) != 0) {
        *(_DWORD*)(*(_QWORD*)(v13 + 104) + 212LL) = 0;
        goto LABEL_28;
      }
      if (((1 << v18) & 0x5000080) != 0) {
        *(_DWORD*)(*(_QWORD*)(v13 + 104) + 212LL) = 0;
      }
      else {
      LABEL_27:
        *(_DWORD*)(v13 + 384) = 1;
      }
    LABEL_28:
      if ((v25[0] & 1) != 0 && v26 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v19 = 128;
        }
        else {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v19);
      }
      v1 = (_QWORD*)*v1;
    } while (v1 != nullptr);
  }
  if (*(_BYTE*)(a1 + 268) == 1) {
    v20 = GameData_21f8018;
    if (GameData_21f8018 != 0) {
      v21 = *(_DWORD*)(GameData_21f8018 + 160);
      v22 = __OFSUB__(v21, 1);
      v23 = v21 - 1;
      if (v23 < 0 != v22) {
        if ((*(_WORD*)(GameData_21f8018 + 136) & 1) == 0) {
          ProcInst_657a50(GameData_21f8018, 1);
        }
      }
      else {
        *(_DWORD*)(GameData_21f8018 + 160) = v23;
        if (v23 == 0) {
          (*(void (**)(__int64))(*(_QWORD*)(v20 + 152) + 8LL))(v20 + 152);
        }
      }
    }
    *(_BYTE*)(a1 + 268) = 0;
  }
}

__n128 game_evt_demo_1151340(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __n128 v9;
  __n128 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __n128 result;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  struct {
    __int64 v32[2];
    __int64 v33;
  } v32_;
  struct {
    __int64 v34[2];
    __int64 v35;
  } v34_;
  struct {
    __int64 v36;
    __int64 v37;
    __int64 v38;
  } v36_;
  struct {
    __int64 v39;
    unsigned __int64 v40;
    __int64 v41;
  } v39_;
  struct {
    __int64 v42;
    unsigned __int64 v43;
    __int64 v44;
  } v42_;
  _QWORD v45[3];
  struct {
    __int64 v46[2];
    char* v47;
  } v46_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = msg_MessageManager_instance__ptr[0];
  if ((*(_BYTE*)(a1 + 184) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 200);
  }
  else {
    v3 = a1 + 185;
  }
  v4 = Registration_a4f800(*msg_MessageManager_instance__ptr[0], v3,
                           *(_DWORD*)(a1 + 208)),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(v46_.v46, v4[2], v4[1]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v5 = *v4;
    v6 = v4[2];
    v46_.v46[1] = v4[1];
    v46_.v47 = (char*)v6;
    v46_.v46[0] = v5;
  }
  if ((v46_.v46[0] & 1) != 0) {
    v7 = v46_.v47;
  }
  else {
    v7 = (char*)v46_.v46 + 1;
  }
  GameRoutine_a51060((void*)(v45), *v2, (__int64)v7),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v42_.v43 = 0;
  v42_.v44 = 0;
  v42_.v42 = 0;
  v39_.v40 = 0;
  v39_.v41 = 0;
  v39_.v39 = 0;
  v8 = *(_QWORD*)GameData_212c7e8[0];
  v9 = game_112d580((char*)v45, (__int64)&v42_.v42, (__int64)&v39_.v39),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v42_.v42 & 1) != 0) {
    fw_text_String_CopyTerminated(v34_.v34, v42_.v44, v42_.v43),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v34_.v34[0] = v42_.v42;
    v34_.v34[1] = v42_.v43;
    v34_.v35 = v42_.v44;
  }
  game_1142cc0((void*)(&v36_.v36), v8, (unsigned __int8*)v34_.v34, 1, v9),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v11 = *(_QWORD*)(a1 + 216);
  if (v11 != 0) {
    v12 = *(_QWORD*)(a1 + 224);
    if (v11 == v12) {
      goto LABEL_17;
    }
    do {
      v12 -= 160;
      Seq_1147f80(v12),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    } while (v12 != v11);
    v13 = *(_QWORD*)(a1 + 216);
    *(_QWORD*)(a1 + 224) = v11;
    if (v13 != 0) {
    LABEL_17:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      v10 = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v15 = v36_.v36;
  v16 = v36_.v37;
  v36_.v36 = 0;
  *(_QWORD*)(a1 + 216) = v15;
  *(_QWORD*)(a1 + 224) = v16;
  v17 = v36_.v38;
  v36_.v37 = 0;
  v36_.v38 = 0;
  *(_QWORD*)(a1 + 232) = v17;
  if ((v34_.v34[0] & 1) != 0 && v34_.v35 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    v10 = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v39_.v39 & 1) != 0) {
    fw_text_String_CopyTerminated(v32_.v32, v39_.v41, v39_.v40),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v32_.v32[0] = v39_.v39;
    v32_.v32[1] = v39_.v40;
    v32_.v33 = v39_.v41;
  }
  game_1142cc0((void*)(&v36_.v36), v8, (unsigned __int8*)v32_.v32, 0, v10),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v20 = *(_QWORD*)(a1 + 240);
  if (v20 != 0) {
    v21 = *(_QWORD*)(a1 + 248);
    if (v20 == v21) {
      goto LABEL_32;
    }
    do {
      v21 -= 160;
      Seq_1147f80(v21),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    } while (v21 != v20);
    v22 = *(_QWORD*)(a1 + 240);
    *(_QWORD*)(a1 + 248) = v20;
    if (v22 != 0) {
    LABEL_32:
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v24 = v36_.v36;
  v25 = v36_.v37;
  v36_.v36 = 0;
  *(_QWORD*)(a1 + 240) = v24;
  *(_QWORD*)(a1 + 248) = v25;
  v26 = v36_.v38;
  v36_.v37 = 0;
  v36_.v38 = 0;
  *(_QWORD*)(a1 + 256) = v26;
  if ((v32_.v32[0] & 1) != 0 && v32_.v33 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v39_.v39 & 1) != 0 && v39_.v41 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v42_.v42 & 1) != 0 && v42_.v44 != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v45[0] & 1) != 0 && v45[2] != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v30),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v46_.v46[0] & 1) != 0 && v46_.v47 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31);
  }
  return result;
}

__int64 game_evt_demo_11518d0(__int64 result)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;

  if ((*(_BYTE*)(result + 160) & 1) != 0) {
    v1 = *(_QWORD*)(result + 176);
  }
  else {
    v1 = result + 161;
  }
  if (GameData_21ec7b8 == 0 && v1 != 0) {
    v3 = result;
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v4, v1, 0);
    v5 = *(_QWORD*)(v3 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(v3 + 40);
    }
    *(_QWORD*)(v3 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = v3;
    *(_DWORD*)(v4 + 140) = game_HashString32("talk::Seq");
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4);
    if ((result & 1) != 0 && (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  return result;
}

__int64 game_evt_demo_1153ca0(__int64 a1, __int64 a2)
{
  unsigned __int8* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  __int64 v8;
  int v9;
  __int64** v10;
  __int64** v11;
  __int64* v12;
  __int64* v13;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;

  v4 = (unsigned __int8*)Registration_a4f6c0(
      *msg_MessageManager_instance__ptr[0]);
  v5 = *v4;
  if ((v5 & 1) != 0) {
    v6 = *((_QWORD*)v4 + 1);
  }
  else {
    v6 = v5 >> 1;
  }
  if (v6 == 0) {
    return 0;
  }
  v7 = v4;
  v8 = *(_QWORD*)(*GameData_212c790 + 8);
  v9 = *(_DWORD*)(v8 + 56);
  v10 = *(__int64***)(v8 + 8);
  v11 = *(__int64***)(v8 + 16);
  if (v9 < 0) {
    if (v10 != v11) {
      while (1) {
        v12 = *v10;
        if ((*v10)[12] == 0 && v12[69] == 0) {
          break;
        }
        if (++v10 == v11) {
          goto LABEL_12;
        }
      }
    LABEL_19:
      v15 = *v12;
      if (*v12 == 0) {
        goto LABEL_20;
      }
      goto LABEL_13;
    }
  }
  else {
    while (v10 != v11) {
      v13 = *v10++;
      v12 = v13;
      if (*((_DWORD*)v13 + 21) == v9) {
        goto LABEL_19;
      }
    }
  }
LABEL_12:
  v15 = game_gmap_SpotMgr_GetCurrentSpot();
  if (v15 == 0) {
  LABEL_20:
    v16 = &GameData_1a9f09e;
    goto LABEL_21;
  }
LABEL_13:
  if ((*(_BYTE*)v15 & 1) != 0) {
    v16 = *(char**)(v15 + 16);
  }
  else {
    v16 = (char*)(v15 + 1);
  }
LABEL_21:
  if ((*v7 & 1) != 0) {
    v17 = *((_QWORD*)v7 + 2);
  }
  else {
    v17 = (__int64)(v7 + 1);
  }
  v18 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       784, 16, 0);
  v19 = 0;
  v20 = 0;
  GameRoutine_1148b60(v18, v17, a2, (__int64)v16, (__int16*)&v19);
  return ProcInst_657850(v18, GameData_2130510, "demo::Seq", 1, a1);
}

__int64 game_evt_demo_11542a0(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  struct {
    __int64 v7[2];
    __int64 v8;
  } v7_;

  v1 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated(v7_.v7, v1[2], v1[1]);
  }
  else {
    v2 = *v1;
    v3 = v1[1];
    v4 = v1[2];
    v7_.v7[1] = v3;
    v7_.v8 = v4;
    v7_.v7[0] = v2;
  }
  GameRoutine_1a09ce0(v7_.v7, "\n", 1);
  if ((v7_.v7[0] & 1) != 0 && v7_.v8 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v5);
  }
  return 0;
}

__int64 game_evt_demo_1154340(__int64 a1)
{
  int v2;
  int v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  unsigned __int8* v8;
  float v9;
  unsigned __int8 v10;
  __int64 v11;
  _DWORD* v12;
  _DWORD* v13;
  bool v14;
  int v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  float v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 result;
  _QWORD v24[4];
  _QWORD* v25;
  __int64 v26;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return 0;
    }
  }
  v4 = *(unsigned __int8**)(a1 + 120);
  v5 = *v4;
  v6 = *((_QWORD*)v4 + 1);
  if ((v5 & 1) == 0) {
    v6 = v5 >> 1;
  }
  if (v6 != 0) {
    v7 = *((unsigned __int8**)v4 + 2);
    v24[0] = 0;
    if ((v5 & 1) != 0) {
      v8 = v7;
    }
    else {
      v8 = v4 + 1;
    }
    v9 = strtof(v8, v24);
    if (*(_BYTE*)v24[0] != 0) {
      if (*(_BYTE*)v24[0] == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v24[0]) != 0) {
          v9 = 0.0f;
        }
      }
      else {
        v9 = 0.0f;
      }
    }
    v4 = *(unsigned __int8**)(a1 + 120);
  }
  else {
    v9 = 0.0f;
  }
  v10 = v4[24];
  v11 = *((_QWORD*)v4 + 4);
  if ((v10 & 1) == 0) {
    v11 = v10 >> 1;
  }
  if (v11 == 4) {
    v12 = *((_DWORD**)v4 + 5);
    v13 = v4 + 25;
    if ((v10 & 1) != 0) {
      v13 = v12;
    }
    v14 = *v13 == *(_DWORD*)"True";
    if (v9 <= 0.0f) {
      return 0;
    }
  }
  else {
    v14 = false;
    if (v9 <= 0.0f) {
      return 0;
    }
  }
  v15 = *(_DWORD*)(a1 + 144);
  v16 = GameData_212d460[0];
  v17 = *GameData_212d460[0];
  if (v15 == 0) {
    if (v17 != 0) {
      v19 = v9 * 0x1.f400000000000p+9f;
      v20 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
      v21 = GameData_212c608[0];
      *(_QWORD*)(v20 + 96) = 0;
      *(_QWORD*)(v20 + 104) = 0;
      *(_QWORD*)(v20 + 112) = 0;
      *(_QWORD*)(v20 + 120) = 0;
      *(_QWORD*)(v20 + 128) = 0;
      *(_WORD*)(v20 + 136) = 0;
      *(_QWORD*)(v20 + 16) = 0;
      *(_QWORD*)(v20 + 24) = "NULL";
      *(_QWORD*)(v20 + 138) = 0;
      *(_QWORD*)(v20 + 144) = 0;
      *(_QWORD*)(v20 + 32) = 0;
      *(_QWORD*)(v20 + 40) = 0;
      *(_QWORD*)(v20 + 48) = 0;
      *(_QWORD*)(v20 + 56) = 0;
      *(_QWORD*)(v20 + 64) = 0;
      *(_QWORD*)(v20 + 72) = 0;
      *(_QWORD*)(v20 + 80) = 0;
      *(_QWORD*)(v20 + 88) = 0;
      *(_QWORD*)v20 = v21 + 16;
      *(_QWORD*)(v20 + 8) = 0;
      game_ProcInst_Register(v20);
      v22 = GameData_2130230;
      *(float*)(v20 + 152) = v19;
      *(_BYTE*)(v20 + 156) = v14;
      *(_QWORD*)v20 = v22 + 2;
      *GameData_2130220 = 0;
      ProcInst_657850(v20, GameData_2130238, "talk::ProcWait", 1, v17);
      return 3;
    }
    return 3;
  }
  if (v17 == 0) {
    return 0;
  }
  v26 = 0;
  v25 = v24;
  v24[0] = GameData_2130248[0] + 2;
  v24[1] = &v26;
  GameRoutine_1139150(v24);
  if (v25 == v24) {
    v18 = 32;
  }
  else {
    if (v25 == nullptr) {
      goto LABEL_38;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v25 + v18))((__int64)v25);
LABEL_38:
  if (v26 != 0) {
    return 3;
  }
  result = 0;
  if (*v16 != 0 && (*GameData_2130220 & 1) != 0) {
    Seq_114eb80(*(_QWORD**)GameData_212fc38[0]);
    return 0;
  }
  return result;
}

__int64 game_evt_demo_11545e0(__int64 a1)
{
  int v1;
  int v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 result;
  _QWORD v10[4];
  _QWORD* v11;
  __int64 v12;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v2 = (v1 & 8) != 0 ? 2 : 3;
    if ((v2 & v1) == 0) {
      return 0;
    }
  }
  v3 = GameData_212d460[0];
  v4 = *GameData_212d460[0];
  if (*(_DWORD*)(a1 + 144) == 0) {
    if (v4 != 0) {
      v6 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
      v7 = GameData_212c608[0];
      *(_QWORD*)(v6 + 96) = 0;
      *(_QWORD*)(v6 + 104) = 0;
      *(_QWORD*)(v6 + 112) = 0;
      *(_QWORD*)(v6 + 120) = 0;
      *(_QWORD*)(v6 + 128) = 0;
      *(_WORD*)(v6 + 136) = 0;
      *(_QWORD*)(v6 + 16) = 0;
      *(_QWORD*)(v6 + 24) = "NULL";
      *(_QWORD*)(v6 + 138) = 0;
      *(_QWORD*)(v6 + 144) = 0;
      *(_QWORD*)(v6 + 32) = 0;
      *(_QWORD*)(v6 + 40) = 0;
      *(_QWORD*)(v6 + 48) = 0;
      *(_QWORD*)(v6 + 56) = 0;
      *(_QWORD*)(v6 + 64) = 0;
      *(_QWORD*)(v6 + 72) = 0;
      *(_QWORD*)(v6 + 80) = 0;
      *(_QWORD*)(v6 + 88) = 0;
      *(_QWORD*)v6 = v7 + 16;
      *(_QWORD*)(v6 + 8) = 0;
      game_ProcInst_Register(v6);
      v8 = GameData_2130230;
      *(_BYTE*)(v6 + 156) = 0;
      *(_QWORD*)v6 = v8 + 2;
      *(_DWORD*)(v6 + 152) = 1148846080;
      *GameData_2130220 = 0;
      ProcInst_657850(v6, GameData_2130238, "talk::ProcWait", 1, v4);
    }
    return 3;
  }
  if (v4 == 0) {
    return 0;
  }
  v12 = 0;
  v11 = v10;
  v10[0] = GameData_2130248[0] + 2;
  v10[1] = &v12;
  GameRoutine_1139150(v10);
  if (v11 == v10) {
    v5 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_16;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v11 + v5))((__int64)v11);
LABEL_16:
  if (v12 != 0) {
    return 3;
  }
  result = 0;
  if (*v3 != 0 && (*GameData_2130220 & 1) != 0) {
    Seq_114eb80(*(_QWORD**)GameData_212fc38[0]);
    return 0;
  }
  return result;
}

__int64 game_evt_demo_11547e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char* v4;
  _QWORD* v5;
  unsigned __int8 v7;
  __int64 v8;
  _DWORD* v9;
  _DWORD* v10;
  _BOOL4 v11;
  char* v12;
  bool v13;
  __int16 v14;
  unsigned __int64 v15;
  char* v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  unsigned __int64 v26;
  char* v27;
  unsigned __int64 v28;
  char* v29;
  __int64* v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  char* v37;
  char* v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  char* v44;
  char* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  _QWORD* v50;
  _QWORD* v51;
  unsigned __int64 v52;
  __int64 v53;
  _QWORD* v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  int v59;
  char* v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v64;
  unsigned __int64 v65;
  _QWORD* v66;
  _QWORD* v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  struct {
    __int64 v72;
    unsigned __int64 v73;
    char* v74;
  } v72_;
  struct {
    __int64 v75;
    int v76;
  } v75_;
  int v77;
  struct {
    __int64 v78;
    unsigned __int64 v79;
    char* v80;
  } v78_;

  v1 = GameData_22336e0;
  if (GameData_22336e0 == 0) {
    LODWORD(v5) = 0;
    return (unsigned int)v5;
  }
  v2 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v78_.v78, *(_QWORD*)(v2 + 16),
                                  *(_QWORD*)(v2 + 8));
    v2 = *(_QWORD*)(a1 + 120);
  }
  else {
    v3 = *(_QWORD*)v2;
    v4 = *(char**)(v2 + 16);
    v78_.v79 = *(_QWORD*)(v2 + 8);
    v78_.v80 = v4;
    v78_.v78 = v3;
  }
  v7 = *(_BYTE*)(v2 + 24);
  v8 = *(_QWORD*)(v2 + 32);
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v8 == 4) {
    v9 = *(_DWORD**)(v2 + 40);
    v10 = (_DWORD*)(v2 + 25);
    if ((v7 & 1) != 0) {
      v10 = v9;
    }
    v11 = *v10 == *(_DWORD*)"True";
  }
  else {
    v11 = false;
  }
  v77 = 0;
  v75_.v76 = 0;
  v75_.v75 = 0;
  if ((v78_.v78 & 1) != 0) {
    v12 = v78_.v80;
  }
  else {
    v12 = (char*)&v78_.v78 + 1;
  }
  v13 = GameRoutine_1154040((__int64)v12, &v77);
  if (!v13) {
    goto LABEL_38;
  }
  v14 = *(_WORD*)(v1 + 476);
  LODWORD(v75_.v75) = *(_DWORD*)(v1 + 472);
  WORD2(v75_.v75) = v14;
  HIWORD(v75_.v75) =
      ((1374389535LL * v77) >> 37) +
      ((unsigned int)((unsigned __int64)(1374389535LL * v77) >> 32) >> 31);
  v75_.v76 = (unsigned __int16)(v77 - 100 * HIWORD(v75_.v75));
  v15 = v78_.v79;
  if ((v78_.v78 & 1) != 0) {
    v16 = v78_.v80;
  }
  else {
    v15 = (unsigned __int64)(unsigned __int8)v78_.v78 >> 1;
    v16 = (char*)&v78_.v78 + 1;
  }
  if (v15 >= v15 - 5) {
    v17 = v15 - 5;
  }
  else {
    v17 = v15;
  }
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_184;
  }
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v19 = 26;
    }
    else {
      v19 = (v17 | 7) + 1;
    }
    v18 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v19, 16, 0);
    v72_.v73 = v17;
    v72_.v74 = v18;
    v72_.v72 = v19 | 1;
    goto LABEL_31;
  }
  LOBYTE(v72_.v72) = 2 * v17;
  v18 = (char*)&v72_.v72 + 1;
  if (v17 != 0) {
  LABEL_31:
    memmove(v18, v16, v17);
  }
  v20 = v78_.v78;
  v18[v17] = 0;
  if ((v20 & 1) != 0 && v78_.v80 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v21);
  }
  v78_.v78 = v72_.v72;
  v78_.v79 = v72_.v73;
  v78_.v80 = v72_.v74;
LABEL_38:
  if (v11) {
    v22 = game_9a28e0(71);
    if (game_GameModeData_instance_ == 0 ||
        (v23 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)v22)) == 0 ||
        *(_DWORD*)(v23 + 32) == 0) {
      v24 = game_9a28e0(70);
      if (game_GameModeData_instance_ != 0) {
        v25 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v24);
        if (v25 != 0 && *(_DWORD*)(v25 + 32) != 0) {
          if ((v78_.v78 & 1) != 0) {
            v26 = v78_.v79;
          }
          else {
            v26 = (unsigned __int64)(unsigned __int8)v78_.v78 >> 1;
          }
          if ((v78_.v78 & 1) != 0) {
            v27 = v78_.v80;
          }
          else {
            v27 = (char*)&v78_.v78 + 1;
          }
          v28 = v26 + 10;
          if (v26 + 10 < 0xFFFFFFFFFFFFFFF7LL) {
            if (v28 >= 0x17) {
              if ((v28 | 7) == 0x17) {
                v36 = 26;
              }
              else {
                v36 = (v28 | 7) + 1;
              }
              v29 = (char*)fw_memory_HeapManager_Allocate_alt1(
                  fw_memory_g_heap_manager, v36, 16, 0);
              v72_.v73 = v26 + 10;
              v72_.v74 = v29;
              v72_.v72 = v36 | 1;
            }
            else {
              v72_.v73 = 0;
              v72_.v74 = nullptr;
              v72_.v72 = (unsigned __int8)(2 * v28);
              v29 = (char*)&v72_.v72 + 1;
              if (v26 == 0) {
              LABEL_73:
                v37 = &v29[v26];
                v37[10] = 0;
                *(_QWORD*)v37 = 0xE48888E8A9BEE55FLL;
                *((_WORD*)v37 + 4) = -21064;
                if ((v72_.v72 & 1) != 0) {
                  v38 = v72_.v74;
                }
                else {
                  v38 = (char*)&v72_.v72 + 1;
                }
                v39 = game_HashString((__int64)v38);
                v5 = nullptr;
                if (v39 != 0) {
                  v40 = *(_QWORD*)(GameData_21c9d98 + 96);
                  if (v40 != 0 && *(_QWORD*)(GameData_21c9d98 + 112) != 0) {
                    v41 = v40 - 1;
                    if ((v40 & (v40 - 1)) != 0) {
                      v42 = v39;
                      if (v39 >= v40) {
                        v42 = v39 % v40;
                      }
                    }
                    else {
                      v42 = v41 & v39;
                    }
                    v50 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d98 + 88) +
                                      8 * v42);
                    if (v50 != nullptr) {
                      v51 = (_QWORD*)*v50;
                      if (v51 != nullptr) {
                        if ((v40 & v41) == 0) {
                          while (1) {
                            v53 = v51[1];
                            if (v53 == v39) {
                              if (v51[2] == v39) {
                                goto LABEL_182;
                              }
                            }
                            else if ((v53 & v41) != v42) {
                              goto LABEL_129;
                            }
                            v51 = (_QWORD*)*v51;
                            v5 = nullptr;
                            if (v51 == nullptr) {
                              goto LABEL_130;
                            }
                          }
                        }
                        do {
                          v52 = v51[1];
                          if (v52 == v39) {
                            if (v51[2] == v39) {
                              goto LABEL_182;
                            }
                          }
                          else {
                            if (v52 >= v40) {
                              v52 %= v40;
                            }
                            if (v52 != v42) {
                              break;
                            }
                          }
                          v51 = (_QWORD*)*v51;
                        } while (v51 != nullptr);
                      }
                    }
                  LABEL_129:
                    v5 = nullptr;
                    goto LABEL_130;
                  }
                }
                goto LABEL_130;
              }
            }
            memmove(v29, v27, v26);
            goto LABEL_73;
          }
        LABEL_184:
          String_60a1d0_alt1();
        }
      }
      v30 = game_9a28e0(69);
      if (game_GameModeData_instance_ != 0) {
        v31 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v30);
        if (v31 != 0 && *(_DWORD*)(v31 + 32) != 0) {
          if ((v78_.v78 & 1) != 0) {
            v32 = v78_.v79;
          }
          else {
            v32 = (unsigned __int64)(unsigned __int8)v78_.v78 >> 1;
          }
          if ((v78_.v78 & 1) != 0) {
            v33 = v78_.v80;
          }
          else {
            v33 = (char*)&v78_.v78 + 1;
          }
          v34 = v32 + 10;
          if (v32 + 10 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_184;
          }
          if (v34 >= 0x17) {
            if ((v34 | 7) == 0x17) {
              v43 = 26;
            }
            else {
              v43 = (v34 | 7) + 1;
            }
            v35 = (char*)fw_memory_HeapManager_Allocate_alt1(
                fw_memory_g_heap_manager, v43, 16, 0);
            v72_.v73 = v32 + 10;
            v72_.v74 = v35;
            v72_.v72 = v43 | 1;
          }
          else {
            v72_.v73 = 0;
            v72_.v74 = nullptr;
            v72_.v72 = (unsigned __int8)(2 * v34);
            v35 = (char*)&v72_.v72 + 1;
            if (v32 == 0) {
            LABEL_87:
              v44 = &v35[v32];
              v44[10] = 0;
              *(_QWORD*)v44 = 0xE48AA3E5A9B4E55FLL;
              *((_WORD*)v44 + 4) = -21064;
              if ((v72_.v72 & 1) != 0) {
                v45 = v72_.v74;
              }
              else {
                v45 = (char*)&v72_.v72 + 1;
              }
              v46 = game_HashString((__int64)v45);
              v5 = nullptr;
              if (v46 != 0) {
                v47 = *(_QWORD*)(GameData_21c9d98 + 96);
                if (v47 != 0 && *(_QWORD*)(GameData_21c9d98 + 112) != 0) {
                  v48 = v47 - 1;
                  if ((v47 & (v47 - 1)) != 0) {
                    v49 = v46;
                    if (v46 >= v47) {
                      v49 = v46 % v47;
                    }
                  }
                  else {
                    v49 = v48 & v46;
                  }
                  v54 =
                      *(_QWORD**)(*(_QWORD*)(GameData_21c9d98 + 88) + 8 * v49);
                  if (v54 != nullptr) {
                    v51 = (_QWORD*)*v54;
                    if (v51 != nullptr) {
                      if ((v47 & v48) == 0) {
                        while (1) {
                          v56 = v51[1];
                          if (v56 == v46) {
                            if (v51[2] == v46) {
                              goto LABEL_182;
                            }
                          }
                          else if ((v56 & v48) != v49) {
                            goto LABEL_129;
                          }
                          v51 = (_QWORD*)*v51;
                          v5 = nullptr;
                          if (v51 == nullptr) {
                            goto LABEL_130;
                          }
                        }
                      }
                      while (1) {
                        v55 = v51[1];
                        if (v55 == v46) {
                          if (v51[2] == v46) {
                          LABEL_182:
                            v5 = (_QWORD*)v51[3];
                            if ((v72_.v72 & 1) != 0) {
                              goto LABEL_131;
                            }
                            goto LABEL_135;
                          }
                        }
                        else {
                          if (v55 >= v47) {
                            v55 %= v47;
                          }
                          if (v55 != v49) {
                            goto LABEL_129;
                          }
                        }
                        v51 = (_QWORD*)*v51;
                        if (v51 == nullptr) {
                          goto LABEL_129;
                        }
                      }
                    }
                  }
                  goto LABEL_129;
                }
              }
            LABEL_130:
              if ((v72_.v72 & 1) != 0) {
              LABEL_131:
                if (v72_.v74 != nullptr) {
                  v57 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v57 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v57);
                }
              }
            LABEL_135:
              if (v5 != nullptr) {
                goto LABEL_136;
              }
              goto LABEL_146;
            }
          }
          memmove(v35, v33, v32);
          goto LABEL_87;
        }
      }
    }
  }
LABEL_146:
  if ((v78_.v78 & 1) != 0) {
    v60 = v78_.v80;
  }
  else {
    v60 = (char*)&v78_.v78 + 1;
  }
  v61 = game_HashString((__int64)v60);
  if (v61 == 0) {
    goto LABEL_173;
  }
  v62 = *(_QWORD*)(GameData_21c9d98 + 96);
  if (v62 == 0 || *(_QWORD*)(GameData_21c9d98 + 112) == 0) {
    goto LABEL_173;
  }
  v64 = v62 - 1;
  if ((v62 & (v62 - 1)) != 0) {
    v65 = v61;
    if (v61 >= v62) {
      v65 = v61 % v62;
    }
  }
  else {
    v65 = v64 & v61;
  }
  v66 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d98 + 88) + 8 * v65);
  if (v66 == nullptr || (v67 = (_QWORD*)*v66) == nullptr) {
  LABEL_173:
    LODWORD(v5) = 0;
    goto LABEL_174;
  }
  if ((v62 & v64) == 0) {
    while (1) {
      v69 = v67[1];
      if (v69 == v61) {
        if (v67[2] == v61) {
          goto LABEL_180;
        }
      }
      else if ((v69 & v64) != v65) {
        goto LABEL_173;
      }
      v67 = (_QWORD*)*v67;
      LODWORD(v5) = 0;
      if (v67 == nullptr) {
        goto LABEL_174;
      }
    }
  }
  while (1) {
    v68 = v67[1];
    if (v68 == v61) {
      break;
    }
    if (v68 >= v62) {
      v68 %= v62;
    }
    if (v68 != v65) {
      goto LABEL_173;
    }
  LABEL_163:
    v67 = (_QWORD*)*v67;
    if (v67 == nullptr) {
      goto LABEL_173;
    }
  }
  if (v67[2] != v61) {
    goto LABEL_163;
  }
LABEL_180:
  v5 = (_QWORD*)v67[3];
  if (v5 != nullptr) {
  LABEL_136:
    if (GameData_21ec7b8 != 0 && (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) != 0 ||
        game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v58 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v59 = 2)
             : (v59 = 3),
         (v59 & v58) != 0 || !Seq_114af10(v1, v5))) {
      LODWORD(v5) =
          GameRoutine_114af80(v1, (__int64)v5, (__int16*)&v75_.v75, v13);
      goto LABEL_174;
    }
    goto LABEL_173;
  }
LABEL_174:
  if ((v78_.v78 & 1) != 0 && v78_.v80 != nullptr) {
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v70);
  }
  return (unsigned int)v5;
}

__int64 game_evt_demo_1155290(__int64 a1, long double a2)
{
  __int128 v3;
  int v4;
  int v5;
  unsigned __int8* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int8* v10;
  int v11;
  __int64 result;
  unsigned __int64 v13;
  __int128 v14;
  __int128 v15;

  v3 = *(_OWORD*)GameData_212c960;
  if ((GameData_21ec7b8 == 0 || (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v5 = (v4 & 8) != 0 ? 2 : 3;
    if ((v5 & v4) == 0) {
      return 0;
    }
  }
  v6 = *(unsigned __int8**)(a1 + 120);
  v7 = *v6;
  v8 = *((_QWORD*)v6 + 1);
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v8 != 0) {
    v9 = *((unsigned __int8**)v6 + 2);
    v14 = *(_OWORD*)GameData_212c960;
    *(_QWORD*)&v15 = 0;
    if ((v7 & 1) != 0) {
      v10 = v9;
    }
    else {
      v10 = v6 + 1;
    }
    *(float*)&a2 = strtof(v10, &v15);
    if (*(_BYTE*)v15 != 0) {
      if (*(_BYTE*)v15 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v15) != 0) {
          *(float*)&a2 = 0.5;
        }
      }
      else {
        LODWORD(a2) = 0.5;
      }
    }
    v3 = v14;
  }
  else {
    LODWORD(a2) = 0.5;
  }
  v11 = *(_DWORD*)(a1 + 144);
  v15 = v3;
  result = game_ProcFadeView_instance_;
  if (v11 != 0) {
    if (game_ProcFadeView_instance_ != 0) {
      v13 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v13 + 172) == *(float*)(v13 + 168)) {
        return 0;
      }
      else {
        return 3;
      }
    }
  }
  else {
    if (game_ProcFadeView_instance_ != 0) {
      game_809dc0(game_ProcFadeView_instance_, &v15, a2);
    }
    return 3;
  }
  return result;
}

__int64 game_evt_demo_11553e0(__int64 a1, long double a2)
{
  __int128 v3;
  int v4;
  int v5;
  unsigned __int8* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int8* v10;
  int v11;
  __int64 result;
  unsigned __int64 v13;
  __int128 v14;
  __int128 v15;

  v3 = *(_OWORD*)GameData_212c958;
  if ((GameData_21ec7b8 == 0 || (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v5 = (v4 & 8) != 0 ? 2 : 3;
    if ((v5 & v4) == 0) {
      return 0;
    }
  }
  v6 = *(unsigned __int8**)(a1 + 120);
  v7 = *v6;
  v8 = *((_QWORD*)v6 + 1);
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v8 != 0) {
    v9 = *((unsigned __int8**)v6 + 2);
    v14 = *(_OWORD*)GameData_212c958;
    *(_QWORD*)&v15 = 0;
    if ((v7 & 1) != 0) {
      v10 = v9;
    }
    else {
      v10 = v6 + 1;
    }
    *(float*)&a2 = strtof(v10, &v15);
    if (*(_BYTE*)v15 != 0) {
      if (*(_BYTE*)v15 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v15) != 0) {
          *(float*)&a2 = 0.5;
        }
      }
      else {
        LODWORD(a2) = 0.5;
      }
    }
    v3 = v14;
  }
  else {
    LODWORD(a2) = 0.5;
  }
  v11 = *(_DWORD*)(a1 + 144);
  v15 = v3;
  result = game_ProcFadeView_instance_;
  if (v11 != 0) {
    if (game_ProcFadeView_instance_ != 0) {
      v13 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v13 + 172) == *(float*)(v13 + 168)) {
        return 0;
      }
      else {
        return 3;
      }
    }
  }
  else {
    if (game_ProcFadeView_instance_ != 0) {
      game_809dc0(game_ProcFadeView_instance_, &v15, a2);
    }
    return 3;
  }
  return result;
}

__int64 game_evt_demo_1155700(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  _BYTE* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64* v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v42;
  unsigned __int64 v43;
  _QWORD* v44;
  _QWORD* v45;
  unsigned __int64 v46;
  unsigned int v47;
  __int64 v48;
  int v49;
  int v50;
  char v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  char v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v67;
  __int64 v68;
  char* v69;
  char* v70;
  char* v71;
  char* v72;
  __int64 v73;
  struct {
    __int64 v74;
    char* v75;
    unsigned __int64 v76;
  } v74_;
  struct {
    __int64 v77[2];
    char* v78;
  } v77_;
  struct {
    __int64 v79;
    unsigned __int64 v80;
    char* v81;
  } v79_;
  struct {
    _BYTE* v82;
    _BYTE* v83;
    _BYTE* v84;
  } v82_;
  struct {
    __int64 v85[2];
    __int64 v86;
  } v85_;
  struct {
    __int64 v87;
    __int64 v88;
    __int64 v89;
  } v87_;
  struct {
    __int64 v90[2];
    char* v91;
  } v90_;
  struct {
    __int64 v92[2];
    __int64 v93;
  } v92_;
  struct {
    __int64 v94[2];
    char* v95;
  } v94_;
  struct {
    __int64 v96;
    unsigned __int64 v97;
    __int64 v98;
  } v96_;

  v1 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated(&v96_.v96, v1[2], v1[1]);
    v1 = *(__int64**)(a1 + 120);
  }
  else {
    v3 = *v1;
    v4 = v1[2];
    v96_.v97 = v1[1];
    v96_.v98 = v4;
    v96_.v96 = v3;
  }
  if ((v1[3] & 1) != 0) {
    fw_text_String_CopyTerminated(v94_.v94, v1[5], v1[4]);
    v1 = *(__int64**)(a1 + 120);
  }
  else {
    v5 = v1[4];
    v6 = (char*)v1[5];
    v94_.v94[0] = v1[3];
    v94_.v94[1] = v5;
    v94_.v95 = v6;
  }
  if ((v1[6] & 1) != 0) {
    fw_text_String_CopyTerminated(v92_.v92, v1[8], v1[7]);
    v1 = *(__int64**)(a1 + 120);
  }
  else {
    v7 = v1[7];
    v8 = v1[8];
    v92_.v92[0] = v1[6];
    v92_.v92[1] = v7;
    v92_.v93 = v8;
  }
  if ((v1[9] & 1) != 0) {
    fw_text_String_CopyTerminated(v90_.v90, v1[11], v1[10]);
  }
  else {
    v9 = v1[10];
    v90_.v90[0] = v1[9];
    v90_.v90[1] = v9;
    v90_.v91 = (char*)v1[11];
  }
  v87_.v88 = 0;
  v87_.v89 = 0;
  v87_.v87 = 0;
  if ((v96_.v96 & 1) != 0) {
    fw_text_String_CopyTerminated(v85_.v85, v96_.v98, v96_.v97);
  }
  else {
    v85_.v85[0] = v96_.v96;
    v85_.v85[1] = v96_.v97;
    v85_.v86 = v96_.v98;
  }
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  v11 = (_BYTE*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1, 16, 0);
  v82_.v82 = v11;
  *v11 = 124;
  v82_.v83 = v11 + 1;
  v82_.v84 = v11 + 1;
  game_112ce60((__int64)v85_.v85, (__int64*)&v82_.v82, (__int64)&v87_.v87);
  v12 = *v10;
  v82_.v83 = v11;
  v13 = 128;
  if (*(_QWORD*)(v12 + 200) == 0) {
    v13 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(v12 + v13);
  if ((v85_.v85[0] & 1) != 0 && v85_.v86 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v14);
  }
  if ((*(_BYTE*)v87_.v87 & 1) != 0) {
    fw_text_String_CopyTerminated(&v79_.v79, *(_QWORD*)(v87_.v87 + 16),
                                  *(_QWORD*)(v87_.v87 + 8));
    if ((v79_.v79 & 1) != 0) {
      goto LABEL_25;
    }
  LABEL_27:
    v77_.v77[0] = v79_.v79;
    v77_.v77[1] = v79_.v80;
    v77_.v78 = v79_.v81;
    goto LABEL_28;
  }
  v15 = *(_QWORD*)v87_.v87;
  v16 = *(_QWORD*)(v87_.v87 + 16);
  v79_.v80 = *(_QWORD*)(v87_.v87 + 8);
  v79_.v81 = (char*)v16;
  v79_.v79 = v15;
  if ((v15 & 1) == 0) {
    goto LABEL_27;
  }
LABEL_25:
  fw_text_String_CopyTerminated(v77_.v77, (__int64)v79_.v81, v79_.v80);
LABEL_28:
  v17 = v87_.v87;
  v74_.v75 = nullptr;
  v74_.v76 = 0;
  v74_.v74 = 0;
  if (0xAAAAAAAAAAAAAAABLL * ((v87_.v88 - v87_.v87) >> 3) >= 2) {
    v18 = 1;
    v19 = 0;
    v20 = nullptr;
    do {
      v21 = v17 + v19;
      v22 = *(_BYTE*)(v21 + 24);
      v23 = *(_QWORD*)(v21 + 40);
      v24 = v21 + 25;
      if ((v22 & 1) != 0) {
        v25 = v23;
      }
      else {
        v25 = v24;
      }
      if ((unsigned __int64)v20 < v74_.v76) {
        *(_QWORD*)v20 = v25;
        v20 += 8;
      }
      else {
        v26 = v74_.v74;
        v27 = &v20[-v74_.v74];
        v28 = (__int64)&v20[-v74_.v74] >> 3;
        v29 = v28 + 1;
        if ((unsigned __int64)(v28 + 1) >> 61 != 0) {
          GameRoutine_60f930();
        }
        v30 = v74_.v76 - v74_.v74;
        if ((__int64)(v74_.v76 - v74_.v74) >> 2 > v29) {
          v29 = v30 >> 2;
        }
        if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
          v31 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v31 = v29;
        }
        if (v31 != 0) {
          if (v31 >> 61 != 0) {
            GameRoutine_60a210();
          }
          v32 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v31, 16, 0);
        }
        else {
          v32 = 0;
        }
        v33 = v32 + 8 * v31;
        v34 = (__int64)&v27[v32 + -8 * v28];
        *(_QWORD*)&v27[v32] = v25;
        v20 = &v27[v32 + 8];
        memcpy(v34, v26, v27);
        v74_.v74 = v34;
        v74_.v76 = v33;
        if (v26 != 0) {
          v35 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v35 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v35);
        }
      }
      v17 = v87_.v87;
      ++v18;
      v19 += 24;
      v74_.v75 = v20;
    } while (0xAAAAAAAAAAAAAAABLL * ((v87_.v88 - v87_.v87) >> 3) > v18);
  }
  if (GameData_22336e0 != 0) {
    v36 = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                              (unsigned __int8*)&v79_.v79);
    if (v36 != nullptr) {
      v37 = v36[5];
      if (v37 != 0 && *(_QWORD*)(v37 + 152) != 0) {
        goto LABEL_91;
      }
    }
  }
  v38 = (v77_.v77[0] & 1) != 0 ? (__int64*)v77_.v78
                               : (__int64*)((char*)v77_.v77 + 1);
  v39 = game_HashString((__int64)v38);
  if (v39 == 0) {
    goto LABEL_91;
  }
  v40 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v40 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_91;
  }
  v42 = v40 - 1;
  if ((v40 & (v40 - 1)) != 0) {
    v43 = v39;
    if (v39 >= v40) {
      v43 = v39 % v40;
    }
  }
  else {
    v43 = v42 & v39;
  }
  v44 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v43);
  if (v44 == nullptr) {
    goto LABEL_91;
  }
  v45 = (_QWORD*)*v44;
  if (v45 == nullptr) {
    goto LABEL_91;
  }
  if ((v40 & v42) == 0) {
    while (1) {
      v48 = v45[1];
      if (v48 == v39) {
        if (v45[2] == v39) {
          goto LABEL_82;
        }
      }
      else if ((v48 & v42) != v43) {
        goto LABEL_91;
      }
      v45 = (_QWORD*)*v45;
      v47 = 0;
      if (v45 == nullptr) {
        goto LABEL_92;
      }
    }
  }
  while (1) {
    v46 = v45[1];
    if (v46 == v39) {
      break;
    }
    if (v46 >= v40) {
      v46 %= v40;
    }
    if (v46 != v43) {
      goto LABEL_91;
    }
  LABEL_71:
    v45 = (_QWORD*)*v45;
    if (v45 == nullptr) {
      goto LABEL_91;
    }
  }
  if (v45[2] != v39) {
    goto LABEL_71;
  }
LABEL_82:
  if (v45[3] == 0) {
  LABEL_91:
    v47 = 0;
  LABEL_92:
    v52 = (char*)v74_.v74;
    if (v74_.v74 != 0) {
      goto LABEL_93;
    }
    goto LABEL_96;
  }
  if (*GameData_212d460[0] != 0 &&
          (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) != 0 ||
      game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3) {
    v51 = 1;
  }
  else {
    v49 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v49 & 8) != 0) {
      v50 = 2;
    }
    else {
      v50 = 3;
    }
    v51 = (v50 & v49) != 0;
  }
  v67 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 400, 16, 0);
  v68 = v67;
  if ((v79_.v79 & 1) != 0) {
    v69 = v79_.v81;
  }
  else {
    v69 = (char*)&v79_.v79 + 1;
  }
  if ((v77_.v77[0] & 1) != 0) {
    v70 = v77_.v78;
  }
  else {
    v70 = (char*)v77_.v77 + 1;
  }
  if ((v94_.v94[0] & 1) != 0) {
    v71 = v94_.v95;
  }
  else {
    v71 = (char*)v94_.v94 + 1;
  }
  if ((v90_.v90[0] & 1) != 0) {
    v72 = v90_.v91;
  }
  else {
    v72 = (char*)v90_.v90 + 1;
  }
  GameRoutine_11c37e0(v67, (__int64)v69, (__int64)v70, &v74_.v74, (__int64)v71,
                      (__int64)v72, v51);
  v73 = v68;
  game_evt_demo_115fec0((float*)(GameData_22336e0 + 560),
                        (unsigned __int8*)v77_.v77, (char*)v77_.v77, &v73);
  v47 = 1;
  v52 = (char*)v74_.v74;
  if (v74_.v74 != 0) {
  LABEL_93:
    v74_.v75 = v52;
    v53 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v53);
  }
LABEL_96:
  if ((v77_.v77[0] & 1) != 0 && v77_.v78 != nullptr) {
    v54 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v54 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v54);
  }
  if ((v79_.v79 & 1) != 0 && v79_.v81 != nullptr) {
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v55);
  }
  v56 = v87_.v87;
  if (v87_.v87 != 0) {
    v57 = v87_.v88;
    if (v87_.v87 == v87_.v88) {
      goto LABEL_117;
    }
    v58 = v87_.v88;
    do {
      v59 = *(_BYTE*)(v58 - 24);
      v58 -= 24;
      if ((v59 & 1) != 0 && *(_QWORD*)(v57 - 8) != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v60 = 128;
        }
        else {
          v60 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v60);
      }
      v57 = v58;
    } while (v58 != v56);
    v87_.v88 = v56;
    if (v87_.v87 != 0) {
    LABEL_117:
      v61 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v61 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v61);
    }
  }
  if ((v90_.v90[0] & 1) != 0 && v90_.v91 != nullptr) {
    v62 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v62 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v62);
  }
  if ((v92_.v92[0] & 1) != 0 && v92_.v93 != 0) {
    v63 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v63 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v63);
  }
  if ((v94_.v94[0] & 1) != 0 && v94_.v95 != nullptr) {
    v64 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v64 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v64);
  }
  if ((v96_.v96 & 1) != 0 && v96_.v98 != 0) {
    v65 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v65 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v65);
  }
  return v47;
}

__int64 game_evt_demo_1155ed0(__int64 a1)
{
  int v2;
  int v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  _DWORD* v12;
  unsigned int v13;
  int v14;
  int v15;
  unsigned int v16;
  __int128 v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v21[2];
    __int64 v22;
  } v21_;
  struct {
    __int64 v23[2];
    __int64 v24;
  } v23_;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return 0;
    }
  }
  v4 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(v23_.v23, v4[2], v4[1]);
    v4 = *(__int64**)(a1 + 120);
  }
  else {
    v5 = *v4;
    v6 = v4[2];
    v23_.v23[1] = v4[1];
    v23_.v24 = v6;
    v23_.v23[0] = v5;
  }
  if ((v4[3] & 1) != 0) {
    fw_text_String_CopyTerminated(v21_.v21, v4[5], v4[4]);
  }
  else {
    v7 = v4[4];
    v21_.v21[0] = v4[3];
    v21_.v21[1] = v7;
    v21_.v22 = v4[5];
  }
  if (GameData_22336e0 == 0 ||
      (v8 = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                                (unsigned __int8*)v23_.v23)) == nullptr ||
      (v9 = v8[5]) == 0 || *(_QWORD*)(v9 + 136) == 0 || GameData_22336e0 == 0 ||
      (v10 = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                                 (unsigned __int8*)v23_.v23)) == nullptr ||
      (v11 = v10[5]) == 0 || *(_BYTE*)(v11 + 128) != 1) {
    v13 = 0;
    goto LABEL_28;
  }
  if (*(_BYTE*)(v11 + 129) == 1) {
    v12 = (_DWORD*)GameRoutine_11555e0((__int64)v21_.v21);
    v13 = 0;
    if (v12 != nullptr) {
      v14 = v12[8];
      v15 = v12[9];
      v16 = v12[10];
      *(_BYTE*)(v11 + 192) = 1;
      *(_DWORD*)(v11 + 176) = v14;
      *(_DWORD*)(v11 + 180) = v15;
      v17 = *(_OWORD*)(v11 + 176);
      *((_QWORD*)&v17 + 1) = v16;
      *(_OWORD*)(v11 + 176) = v17;
      LODWORD(v17) = v12[11];
      *(_BYTE*)(v11 + 228) = 1;
      *(_QWORD*)(v11 + 216) = 0x3F8000003F800000LL;
      *(_DWORD*)(v11 + 224) = 3;
      *(_DWORD*)(v11 + 200) = v17;
      *(_DWORD*)(v11 + 204) = v17;
      *(_DWORD*)(v11 + 208) = v17;
      *(_DWORD*)(v11 + 212) = v17;
      if ((v21_.v21[0] & 1) != 0) {
        goto LABEL_29;
      }
      goto LABEL_33;
    }
  LABEL_28:
    if ((v21_.v21[0] & 1) != 0) {
      goto LABEL_29;
    }
    goto LABEL_33;
  }
  v13 = 3;
  if ((v21_.v21[0] & 1) != 0) {
  LABEL_29:
    if (v21_.v22 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
    }
  }
LABEL_33:
  if ((v23_.v23[0] & 1) != 0 && v23_.v24 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v19);
  }
  return v13;
}

__int64 game_evt_demo_1156480(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 v24[2];
    __int64 v25;
  } v24_;

  v1 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated(v24_.v24, v1[2], v1[1]);
  }
  else {
    v2 = *v1;
    v3 = v1[1];
    v4 = v1[2];
    v24_.v24[1] = v3;
    v24_.v25 = v4;
    v24_.v24[0] = v2;
  }
  if (GameData_22336e0 != 0) {
    v5 = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                             (unsigned __int8*)v24_.v24);
    if (v5 != nullptr) {
      v6 = v5[5];
      if (v6 != 0) {
        v7 = GameData_22336e0;
        v8 = (_QWORD*)(GameData_22336e0 + 560);
        v9 = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                                 (unsigned __int8*)v24_.v24);
        if (v9 != nullptr) {
          v10 = *(_QWORD*)(v7 + 568);
          v11 = v9[1];
          v12 = v10 - 1;
          if ((v10 & (v10 - 1)) != 0) {
            if (v11 >= v10) {
              v11 %= v10;
            }
          }
          else {
            v11 &= v12;
          }
          v13 = *(__int64**)(*v8 + 8 * v11);
          do {
            v14 = v13;
            v13 = (__int64*)*v13;
          } while (v13 != v9);
          if (v14 == (__int64*)(v7 + 576)) {
            goto LABEL_25;
          }
          v15 = v14[1];
          if ((v10 & v12) != 0) {
            if (v15 >= v10) {
              v15 %= v10;
            }
          }
          else {
            v15 &= v12;
          }
          if (v15 != v11) {
          LABEL_25:
            if (*v9 == 0) {
              goto LABEL_26;
            }
            v16 = *(_QWORD*)(*v9 + 8);
            if ((v10 & v12) != 0) {
              if (v16 >= v10) {
                v16 %= v10;
              }
            }
            else {
              v16 &= v12;
            }
            if (v16 != v11) {
            LABEL_26:
              *(_QWORD*)(*v8 + 8 * v11) = 0;
            }
          }
          v17 = *v9;
          if (*v9 != 0) {
            v18 = *(_QWORD*)(v17 + 8);
            if ((v10 & v12) != 0) {
              if (v18 >= v10) {
                v18 %= v10;
              }
            }
            else {
              v18 &= v12;
            }
            if (v18 != v11) {
              *(_QWORD*)(*v8 + 8 * v18) = v14;
              v17 = *v9;
            }
          }
          *v14 = v17;
          *v9 = 0;
          --*(_QWORD*)(v7 + 584);
          if ((v9[2] & 1) != 0 && v9[4] != 0) {
            v19 = 128;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
              v19 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v19);
          }
          v20 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v20 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v20);
        }
        GameRoutine_11c4460(v6);
        v21 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v21);
      }
    }
  }
  if ((v24_.v24[0] & 1) != 0 && v24_.v25 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v22);
  }
  return 0;
}

__int64 game_evt_demo_11575a0(__int64 a1, double a2, long double a3)
{
  int v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  unsigned int v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int8 v25;
  __int64 v26;
  _DWORD* v27;
  _DWORD* v28;
  _BOOL8 v29;
  __int64 v30;
  __int64 v31;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  _BYTE* v39;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v5 = (v4 & 8) != 0 ? 2 : 3;
    if ((v5 & v4) == 0) {
      return 0;
    }
  }
  v6 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v6 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v36, v6[2], v6[1]);
    v6 = *(__int64**)(a1 + 120);
  }
  else {
    v7 = *v6;
    v8 = v6[2];
    v37 = v6[1];
    v38 = v8;
    v36 = v7;
  }
  if ((v6[3] & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v33, v6[5], v6[4]);
  }
  else {
    v9 = v6[4];
    v33 = v6[3];
    v34 = v9;
    v35 = v6[5];
  }
  v10 = v37;
  if ((v36 & 1) == 0) {
    v10 = (unsigned __int64)(unsigned __int8)v36 >> 1;
  }
  if (v10 != 0) {
    v11 = v34;
    if ((v33 & 1) == 0) {
      v11 = (unsigned __int64)(unsigned __int8)v33 >> 1;
    }
    if (v11 != 0) {
      v12 = *(_QWORD*)(a1 + 120);
      v13 = *(unsigned __int8*)(v12 + 48);
      v14 = *(_QWORD*)(v12 + 56);
      if ((v13 & 1) == 0) {
        v14 = v13 >> 1;
      }
      if (v14 != 0) {
        v15 = *(_QWORD*)(v12 + 64);
        v16 = v12 + 49;
        v39 = nullptr;
        if ((v13 & 1) != 0) {
          v17 = v15;
        }
        else {
          v17 = v16;
        }
        v18 = strtof(v17, &v39);
        if (*v39 != 0) {
          if (*v39 == 102) {
            if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v39) != 0) {
              v18 = 0.5;
            }
          }
          else {
            v18 = 0.5;
          }
        }
        v12 = *(_QWORD*)(a1 + 120);
      }
      else {
        v18 = 0.5;
      }
      v20 = *(unsigned __int8*)(v12 + 72);
      v21 = *(_QWORD*)(v12 + 80);
      if ((v20 & 1) == 0) {
        v21 = v20 >> 1;
      }
      if (v21 != 0) {
        v22 = *(_QWORD*)(v12 + 88);
        v23 = v12 + 73;
        v39 = nullptr;
        if ((v20 & 1) != 0) {
          v24 = v22;
        }
        else {
          v24 = v23;
        }
        LODWORD(a3) = strtof(v24, &v39);
        if (*v39 != 0) {
          if (*v39 == 102) {
            if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v39) != 0) {
              *(float*)&a3 = 0.0;
            }
          }
          else {
            *(_QWORD*)&a3 = 0;
          }
        }
        v12 = *(_QWORD*)(a1 + 120);
      }
      else {
        *(_QWORD*)&a3 = 0;
      }
      v25 = *(_BYTE*)(v12 + 96);
      v26 = *(_QWORD*)(v12 + 104);
      if ((v25 & 1) == 0) {
        v26 = v25 >> 1;
      }
      if (v26 == 4) {
        v27 = *(_DWORD**)(v12 + 112);
        v28 = (_DWORD*)(v12 + 97);
        if ((v25 & 1) != 0) {
          v28 = v27;
        }
        v29 = *v28 == *(_DWORD*)"True";
      }
      else {
        v29 = false;
      }
      v19 = GameRoutine_11571c0_alt1(&v36, &v33, &v33, v29, v18, a3);
      if ((v33 & 1) == 0) {
        goto LABEL_64;
      }
      goto LABEL_60;
    }
  }
  v19 = 0;
  if ((v33 & 1) != 0) {
  LABEL_60:
    if (v35 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v30);
    }
  }
LABEL_64:
  if ((v36 & 1) != 0 && v38 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v31);
  }
  return v19;
}

__int64 game_evt_demo_1157880(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  float v19;
  float v20;
  unsigned int v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float v27;
  float v28;
  unsigned __int8 v29;
  __int64 v30;
  _DWORD* v31;
  _DWORD* v32;
  char v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  struct {
    __int64 v38;
    unsigned __int64 v39;
    __int64 v40;
  } v38_;
  struct {
    __int64 v41;
    unsigned __int64 v42;
    __int64 v43;
  } v41_;
  struct {
    __int64 v44;
    unsigned __int64 v45;
    __int64 v46;
  } v44_;
  _BYTE* v47;

  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return 0;
    }
  }
  v4 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(&v44_.v44, v4[2], v4[1]),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
    v4 = *(__int64**)(a1 + 120);
  }
  else {
    v5 = *v4;
    v6 = v4[2];
    v44_.v45 = v4[1];
    v44_.v46 = v6;
    v44_.v44 = v5;
  }
  if ((v4[3] & 1) != 0) {
    fw_text_String_CopyTerminated(&v41_.v41, v4[5], v4[4]),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
    v4 = *(__int64**)(a1 + 120);
  }
  else {
    v7 = v4[4];
    v8 = v4[5];
    v41_.v41 = v4[3];
    v41_.v42 = v7;
    v41_.v43 = v8;
  }
  if ((v4[6] & 1) != 0) {
    fw_text_String_CopyTerminated(&v38_.v38, v4[8], v4[7]),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  else {
    v9 = v4[7];
    v38_.v38 = v4[6];
    v38_.v39 = v9;
    v38_.v40 = v4[8];
  }
  if ((v44_.v44 & 1) != 0) {
    v10 = v44_.v45;
  }
  else {
    v10 = (unsigned __int64)(unsigned __int8)v44_.v44 >> 1;
  }
  if (v10 != 0) {
    v11 = (v41_.v41 & 1) != 0
              ? v41_.v42
              : (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
    if (v11 != 0 ||
        ((v38_.v38 & 1) != 0
             ? (v12 = v38_.v39)
             : (v12 = (unsigned __int64)(unsigned __int8)v38_.v38 >> 1),
         v12 != 0)) {
      v13 = *(_QWORD*)(a1 + 120);
      v14 = *(unsigned __int8*)(v13 + 72);
      v15 = *(_QWORD*)(v13 + 80);
      if ((v14 & 1) == 0) {
        v15 = v14 >> 1;
      }
      if (v15 != 0) {
        v16 = *(_QWORD*)(v13 + 88);
        v17 = v13 + 73;
        v47 = nullptr;
        if ((v14 & 1) != 0) {
          v18 = v16;
        }
        else {
          v18 = v17;
        }
        strtof_alt1(v18, &v47),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
        v20 = v19;
        if (*v47 != 0) {
          if (*v47 == 102) {
            if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v47) != 0) {
              v20 = 0x1.0000000000000p-1f;
            }
          }
          else {
            v20 = 0x1.0000000000000p-1f;
          }
        }
        v13 = *(_QWORD*)(a1 + 120);
      }
      else {
        v20 = 0x1.0000000000000p-1f;
      }
      v22 = *(unsigned __int8*)(v13 + 96);
      v23 = *(_QWORD*)(v13 + 104);
      if ((v22 & 1) == 0) {
        v23 = v22 >> 1;
      }
      if (v23 != 0) {
        v24 = *(_QWORD*)(v13 + 112);
        v25 = v13 + 97;
        v47 = nullptr;
        if ((v22 & 1) != 0) {
          v26 = v24;
        }
        else {
          v26 = v25;
        }
        strtof_alt1(v26, &v47),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
        v28 = v27;
        if (*v47 != 0) {
          if (*v47 == 102) {
            if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v47) != 0) {
              v28 = 0x0.0p+0f;
            }
          }
          else {
            v28 = 0x0.0p+0f;
          }
        }
        v13 = *(_QWORD*)(a1 + 120);
      }
      else {
        v28 = 0x0.0p+0f;
      }
      v29 = *(_BYTE*)(v13 + 120);
      v30 = *(_QWORD*)(v13 + 128);
      if ((v29 & 1) == 0) {
        v30 = v29 >> 1;
      }
      if (v30 == 4) {
        v31 = *(_DWORD**)(v13 + 136);
        v32 = (_DWORD*)(v13 + 121);
        if ((v29 & 1) != 0) {
          v32 = v31;
        }
        v33 = *v32 == *(_DWORD*)"True";
      }
      else {
        v33 = 0;
      }
      v21 = (unsigned int)GameRoutine_11571c0(
          (__int64)&v44_.v44, (unsigned __int8*)&v41_.v41,
          (unsigned __int8*)&v38_.v38, v33, v20, v28),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
      if ((v38_.v38 & 1) == 0) {
        goto LABEL_72;
      }
      goto LABEL_68;
    }
  }
  v21 = 0;
  if ((v38_.v38 & 1) != 0) {
  LABEL_68:
    if (v38_.v40 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
    }
  }
LABEL_72:
  if ((v41_.v41 & 1) != 0 && v41_.v43 != 0) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v35),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if ((v44_.v44 & 1) != 0 && v44_.v46 != 0) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v36),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  return v21;
}

__int64* game_evt_demo_1157bf0(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  __int64* result;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  long double v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  struct {
    __int64 v39;
    unsigned __int64 v40;
    __int64 v41;
    float v42;
    char v43;
  } v39_;
  _QWORD v44[7];
  struct {
    __int64 v45;
    unsigned __int64 v46;
    __int64 v47;
    float v48;
    char v49;
  } v45_;
  struct {
    __int64 v50;
    unsigned __int64 v51;
    __int64 v52;
  } v50_;

  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v5 = (v4 & 8) != 0 ? 2 : 3;
    if ((v5 & v4) == 0) {
      return nullptr;
    }
  }
  v6 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v6 & 1) != 0) {
    fw_text_String_CopyTerminated(&v50_.v50, *(_QWORD*)(v6 + 16),
                                  *(_QWORD*)(v6 + 8)),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
    v6 = *(_QWORD*)(a1 + 120);
  }
  else {
    v7 = *(_QWORD*)v6;
    v8 = *(_QWORD*)(v6 + 16);
    v50_.v51 = *(_QWORD*)(v6 + 8);
    v50_.v52 = v8;
    v50_.v50 = v7;
  }
  v9 = *(unsigned __int8*)(v6 + 24);
  v10 = *(_QWORD*)(v6 + 32);
  if ((v9 & 1) == 0) {
    v10 = v9 >> 1;
  }
  if (v10 != 0) {
    v11 = *(_QWORD*)(v6 + 40);
    v12 = v6 + 25;
    v44[0] = 0;
    if ((v9 & 1) != 0) {
      v13 = v11;
    }
    else {
      v13 = v12;
    }
    strtof_alt1(v13, v44),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
    v15 = v14;
    if (*(_BYTE*)v44[0] != 0) {
      if (*(_BYTE*)v44[0] == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v44[0]) != 0) {
          v15 = 0x1.0000000000000p-1f;
        }
      }
      else {
        v15 = 0x1.0000000000000p-1f;
      }
    }
    v6 = *(_QWORD*)(a1 + 120);
  }
  else {
    v15 = 0x1.0000000000000p-1f;
  }
  v16 = *(unsigned __int8*)(v6 + 48);
  v17 = *(_QWORD*)(v6 + 56);
  if ((v16 & 1) == 0) {
    v17 = v16 >> 1;
  }
  if (v17 != 0) {
    v18 = *(_QWORD*)(v6 + 64);
    v19 = v6 + 49;
    v44[0] = 0;
    if ((v16 & 1) != 0) {
      v20 = v18;
    }
    else {
      v20 = v19;
    }
    strtof_alt1(v20, v44),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
    v22 = v21;
    if (*(_BYTE*)v44[0] == 0) {
      goto LABEL_38;
    }
    if (*(_BYTE*)v44[0] == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v44[0]) != 0) {
        v22 = 0x0.0p+0f;
      }
      goto LABEL_38;
    }
  }
  v22 = 0x0.0p+0f;
LABEL_38:
  if (GameData_22336e0 == 0) {
    goto LABEL_67;
  }
  result = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                               (unsigned __int8*)&v50_.v50),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  if (result == nullptr) {
    goto LABEL_68;
  }
  v24 = result[5];
  if (v24 == 0 || *(_QWORD*)(v24 + 136) == 0 || GameData_22336e0 == 0) {
    goto LABEL_67;
  }
  result = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                               (unsigned __int8*)&v50_.v50),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  if (result == nullptr) {
    goto LABEL_68;
  }
  v25 = result[5];
  if (v25 == 0 || *(_BYTE*)(v25 + 128) != 1) {
  LABEL_67:
    result = nullptr;
    goto LABEL_68;
  }
  if (*(_BYTE*)(v25 + 129) == 1) {
    if (v22 <= 0x0.0p+0f) {
      GameRoutine_11c4de0(result[5], a2 & 1, v15),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    else {
      v26 = a2 & 1;
      if ((v50_.v50 & 1) != 0) {
        fw_text_String_CopyTerminated(&v45_.v45, v50_.v52, v50_.v51),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else {
        v45_.v45 = v50_.v50;
        v45_.v46 = v50_.v51;
        v45_.v47 = v50_.v52;
      }
      v45_.v48 = v15;
      v45_.v49 = v26;
      if ((v45_.v45 & 1) != 0) {
        fw_text_String_CopyTerminated(&v39_.v39, v45_.v47, v45_.v46),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else {
        v39_.v39 = v45_.v45;
        v39_.v40 = v45_.v46;
        v39_.v41 = v45_.v47;
      }
      v39_.v42 = v45_.v48;
      v39_.v43 = v45_.v49;
      v27 = fw_memory_g_heap_manager_ptr;
      v28 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      v29 = v39_.v39;
      v30 = v39_.v40;
      v39_.v39 = 0;
      v39_.v40 = 0;
      v31 = v28;
      v44[4] = v28;
      *(_QWORD*)v28 = GameData_20134a0;
      *(_QWORD*)(v28 + 8) = v29;
      v32 = v39_.v41;
      v39_.v41 = 0;
      *(_QWORD*)(v28 + 16) = v30;
      *(_QWORD*)(v28 + 24) = v32;
      *(float*)(v28 + 32) = v45_.v48;
      *(_BYTE*)(v28 + 36) = v45_.v49;
      v33 = (_QWORD*)EveryFrameProc_10aa5e0(
          game_script_hub_g_frame_counter + 144, (__int64)v44, v22),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      *(__n128*)&v34 = GameRoutine_10aa000(v25, v33),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      (*(void (**)(__int64, long double))(*(_QWORD*)v31 + 40LL))(v31, v34),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      if ((v39_.v39 & 1) != 0 && v39_.v41 != 0) {
        v35 = 128;
        if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v27 + v35),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      if ((v45_.v45 & 1) != 0 && v45_.v47 != 0) {
        v36 = 128;
        if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
          v36 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v27 + v36),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      }
    }
    goto LABEL_67;
  }
  result = (_QWORD*)(((_UNKNOWN*)0x0LL) + 3);
LABEL_68:
  if ((v50_.v50 & 1) != 0 && v50_.v52 != 0) {
    v37 = (unsigned int)result;
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v38),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
    return (__int64*)v37;
  }
  return result;
}

__int64* game_evt_demo_1157fc0(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  float v26;
  float v27;
  __int64* result;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  unsigned __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  __int64 v42;
  _QWORD* v43;
  long double v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  struct {
    __int64 v49;
    unsigned __int64 v50;
    __int64 v51;
    unsigned __int64 v52;
  } v49_;
  _QWORD v53[7];
  struct {
    __int64 v54;
    unsigned __int64 v55;
    __int64 v56;
    unsigned __int64 v57;
  } v54_;
  struct {
    __int64 v58;
    unsigned __int64 v59;
    __int64 v60;
  } v58_;

  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return nullptr;
    }
  }
  v4 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(&v58_.v58, *(_QWORD*)(v4 + 16),
                                  *(_QWORD*)(v4 + 8)),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)v4;
    v6 = *(_QWORD*)(v4 + 16);
    v58_.v59 = *(_QWORD*)(v4 + 8);
    v58_.v60 = v6;
    v58_.v58 = v5;
  }
  v7 = *(unsigned __int8*)(v4 + 24);
  v8 = *(_QWORD*)(v4 + 32);
  v9 = 0x0.0p+0f;
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v8 != 0) {
    v10 = *(_QWORD*)(v4 + 40);
    v11 = v4 + 25;
    v53[0] = 0;
    if ((v7 & 1) != 0) {
      v12 = v10;
    }
    else {
      v12 = v11;
    }
    strtof_alt1(v12, v53),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
    v14 = v13;
    if (*(_BYTE*)v53[0] != 0) {
      if (*(_BYTE*)v53[0] == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v53[0]) != 0) {
          v14 = 0x0.0p+0f;
        }
      }
      else {
        v14 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v14 = 0x0.0p+0f;
  }
  v15 = *(unsigned __int8*)(v4 + 48);
  v16 = *(_QWORD*)(v4 + 56);
  if ((v15 & 1) == 0) {
    v16 = v15 >> 1;
  }
  if (v16 != 0) {
    v17 = *(_QWORD*)(v4 + 64);
    v18 = v4 + 49;
    v53[0] = 0;
    if ((v15 & 1) != 0) {
      v19 = v17;
    }
    else {
      v19 = v18;
    }
    strtof_alt1(v19, v53),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
    v9 = v20;
    if (*(_BYTE*)v53[0] != 0) {
      if (*(_BYTE*)v53[0] == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v53[0]) != 0) {
          v9 = 0x0.0p+0f;
        }
      }
      else {
        v9 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  v21 = *(unsigned __int8*)(v4 + 72);
  v22 = *(_QWORD*)(v4 + 80);
  if ((v21 & 1) == 0) {
    v22 = v21 >> 1;
  }
  if (v22 != 0) {
    v23 = *(_QWORD*)(v4 + 88);
    v24 = v4 + 73;
    v53[0] = 0;
    if ((v21 & 1) != 0) {
      v25 = v23;
    }
    else {
      v25 = v24;
    }
    strtof_alt1(v25, v53),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
    v27 = v26;
    if (*(_BYTE*)v53[0] == 0) {
      goto LABEL_51;
    }
    if (*(_BYTE*)v53[0] == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v53[0]) != 0) {
        v27 = 0x0.0p+0f;
      }
      goto LABEL_51;
    }
  }
  v27 = 0x0.0p+0f;
LABEL_51:
  if (GameData_22336e0 == 0) {
    goto LABEL_83;
  }
  result = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                               (unsigned __int8*)&v58_.v58),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
  if (result == nullptr) {
    goto LABEL_84;
  }
  v29 = result[5];
  if (v29 == 0 || *(_QWORD*)(v29 + 136) == 0 || GameData_22336e0 == 0) {
    goto LABEL_83;
  }
  result = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                               (unsigned __int8*)&v58_.v58),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
  if (result == nullptr) {
    goto LABEL_84;
  }
  v30 = result[5];
  if (v30 == 0 || *(_BYTE*)(v30 + 128) != 1) {
  LABEL_83:
    result = nullptr;
    goto LABEL_84;
  }
  if (*(_BYTE*)(v30 + 129) == 1) {
    v31 = *(float*)(v30 + 200);
    *(_BYTE*)(v30 + 228) = 1;
    v32 = v14 + v31;
    *(float*)(v30 + 200) = v32;
    if (v27 <= 0x0.0p+0f) {
      if (v9 <= 0x0.0p+0f) {
        *(float*)(v30 + 204) = v32;
        v34 = 0x1.0000000000000p+0f;
        v33 = v32;
        v35 = 0x1.0000000000000p+0f;
      }
      else {
        v33 = *(float*)(v30 + 204);
        v34 = 0x0.0p+0f;
        v35 = v9;
      }
      *(float*)(v30 + 208) = v33;
      *(float*)(v30 + 212) = v32;
      *(float*)(v30 + 216) = v34;
      *(float*)(v30 + 220) = v35;
      *(_DWORD*)(v30 + 224) = 3;
      GameRoutine_11c4800(v30, v14, v9),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    else {
      if ((v58_.v58 & 1) != 0) {
        fw_text_String_CopyTerminated(&v54_.v54, v58_.v60, v58_.v59),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else {
        v54_.v54 = v58_.v58;
        v54_.v55 = v58_.v59;
        v54_.v56 = v58_.v60;
      }
      v54_.v57 = __PAIR64__(LODWORD(v14), LODWORD(v9));
      if ((v54_.v54 & 1) != 0) {
        fw_text_String_CopyTerminated(&v49_.v49, v54_.v56, v54_.v55),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else {
        v49_.v49 = v54_.v54;
        v49_.v50 = v54_.v55;
        v49_.v51 = v54_.v56;
      }
      v36 = v54_.v57;
      v49_.v52 = v54_.v57;
      v37 = fw_memory_g_heap_manager_ptr;
      v38 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      v39 = v49_.v49;
      v40 = v49_.v50;
      v49_.v49 = 0;
      v49_.v50 = 0;
      v41 = v38;
      v38[4] = v36;
      v53[4] = v38;
      *v38 = GameData_2013620;
      v38[1] = v39;
      v42 = v49_.v51;
      v49_.v51 = 0;
      v38[2] = v40;
      v38[3] = v42;
      v43 = (_QWORD*)EveryFrameProc_10aa5e0(
          game_script_hub_g_frame_counter + 144, (__int64)v53, v27),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      *(__n128*)&v44 = GameRoutine_10aa000(v30, v43),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      (*(void (**)(_QWORD*, long double))(*v41 + 40LL))(v41, v44),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      if ((v49_.v49 & 1) != 0 && v49_.v51 != 0) {
        v45 = 128;
        if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) == 0) {
          v45 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v37 + v45),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      if ((v54_.v54 & 1) != 0 && v54_.v56 != 0) {
        v46 = 128;
        if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) == 0) {
          v46 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v37 + v46),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      }
    }
    goto LABEL_83;
  }
  result = (_QWORD*)(((_UNKNOWN*)0x0LL) + 3);
LABEL_84:
  if ((v58_.v58 & 1) != 0 && v58_.v60 != 0) {
    v47 = (unsigned int)result;
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v48),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
    return (__int64*)v47;
  }
  return result;
}

__int64* game_evt_demo_1158420(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  float v26;
  float v27;
  __int64* result;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  unsigned __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  __int64 v42;
  _QWORD* v43;
  long double v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  struct {
    __int64 v49;
    unsigned __int64 v50;
    __int64 v51;
    unsigned __int64 v52;
  } v49_;
  _QWORD v53[7];
  struct {
    __int64 v54;
    unsigned __int64 v55;
    __int64 v56;
    unsigned __int64 v57;
  } v54_;
  struct {
    __int64 v58;
    unsigned __int64 v59;
    __int64 v60;
  } v58_;

  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return nullptr;
    }
  }
  v4 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(&v58_.v58, *(_QWORD*)(v4 + 16),
                                  *(_QWORD*)(v4 + 8)),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)v4;
    v6 = *(_QWORD*)(v4 + 16);
    v58_.v59 = *(_QWORD*)(v4 + 8);
    v58_.v60 = v6;
    v58_.v58 = v5;
  }
  v7 = *(unsigned __int8*)(v4 + 24);
  v8 = *(_QWORD*)(v4 + 32);
  v9 = 0x0.0p+0f;
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v8 != 0) {
    v10 = *(_QWORD*)(v4 + 40);
    v11 = v4 + 25;
    v53[0] = 0;
    if ((v7 & 1) != 0) {
      v12 = v10;
    }
    else {
      v12 = v11;
    }
    strtof_alt1(v12, v53),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
    v14 = v13;
    if (*(_BYTE*)v53[0] != 0) {
      if (*(_BYTE*)v53[0] == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v53[0]) != 0) {
          v14 = 0x0.0p+0f;
        }
      }
      else {
        v14 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v14 = 0x0.0p+0f;
  }
  v15 = *(unsigned __int8*)(v4 + 48);
  v16 = *(_QWORD*)(v4 + 56);
  if ((v15 & 1) == 0) {
    v16 = v15 >> 1;
  }
  if (v16 != 0) {
    v17 = *(_QWORD*)(v4 + 64);
    v18 = v4 + 49;
    v53[0] = 0;
    if ((v15 & 1) != 0) {
      v19 = v17;
    }
    else {
      v19 = v18;
    }
    strtof_alt1(v19, v53),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
    v9 = v20;
    if (*(_BYTE*)v53[0] != 0) {
      if (*(_BYTE*)v53[0] == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v53[0]) != 0) {
          v9 = 0x0.0p+0f;
        }
      }
      else {
        v9 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  v21 = *(unsigned __int8*)(v4 + 72);
  v22 = *(_QWORD*)(v4 + 80);
  if ((v21 & 1) == 0) {
    v22 = v21 >> 1;
  }
  if (v22 != 0) {
    v23 = *(_QWORD*)(v4 + 88);
    v24 = v4 + 73;
    v53[0] = 0;
    if ((v21 & 1) != 0) {
      v25 = v23;
    }
    else {
      v25 = v24;
    }
    strtof_alt1(v25, v53),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
    v27 = v26;
    if (*(_BYTE*)v53[0] == 0) {
      goto LABEL_51;
    }
    if (*(_BYTE*)v53[0] == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v53[0]) != 0) {
        v27 = 0x0.0p+0f;
      }
      goto LABEL_51;
    }
  }
  v27 = 0x0.0p+0f;
LABEL_51:
  if (GameData_22336e0 == 0) {
    goto LABEL_83;
  }
  result = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                               (unsigned __int8*)&v58_.v58),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
  if (result == nullptr) {
    goto LABEL_84;
  }
  v29 = result[5];
  if (v29 == 0 || *(_QWORD*)(v29 + 136) == 0 || GameData_22336e0 == 0) {
    goto LABEL_83;
  }
  result = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                               (unsigned __int8*)&v58_.v58),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
  if (result == nullptr) {
    goto LABEL_84;
  }
  v30 = result[5];
  if (v30 == 0 || *(_BYTE*)(v30 + 128) != 1) {
  LABEL_83:
    result = nullptr;
    goto LABEL_84;
  }
  if (*(_BYTE*)(v30 + 129) == 1) {
    v31 = *(float*)(v30 + 200);
    *(float*)(v30 + 200) = v14;
    v32 = v14 - v31;
    if (v27 <= 0x0.0p+0f) {
      *(_BYTE*)(v30 + 228) = 1;
      if (v9 <= 0x0.0p+0f) {
        *(float*)(v30 + 204) = v14;
        v34 = 0x1.0000000000000p+0f;
        v33 = v14;
        v35 = 0x1.0000000000000p+0f;
      }
      else {
        v33 = *(float*)(v30 + 204);
        v34 = 0x0.0p+0f;
        v35 = v9;
      }
      *(float*)(v30 + 208) = v33;
      *(float*)(v30 + 212) = v14;
      *(float*)(v30 + 216) = v34;
      *(float*)(v30 + 220) = v35;
      *(_DWORD*)(v30 + 224) = 3;
      GameRoutine_11c4800(v30, v32, v9),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    else {
      if ((v58_.v58 & 1) != 0) {
        fw_text_String_CopyTerminated(&v54_.v54, v58_.v60, v58_.v59),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else {
        v54_.v54 = v58_.v58;
        v54_.v55 = v58_.v59;
        v54_.v56 = v58_.v60;
      }
      v54_.v57 = __PAIR64__(LODWORD(v32), LODWORD(v9));
      if ((v54_.v54 & 1) != 0) {
        fw_text_String_CopyTerminated(&v49_.v49, v54_.v56, v54_.v55),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else {
        v49_.v49 = v54_.v54;
        v49_.v50 = v54_.v55;
        v49_.v51 = v54_.v56;
      }
      v36 = v54_.v57;
      v49_.v52 = v54_.v57;
      v37 = fw_memory_g_heap_manager_ptr;
      v38 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      v39 = v49_.v49;
      v40 = v49_.v50;
      v49_.v49 = 0;
      v49_.v50 = 0;
      v41 = v38;
      v38[4] = v36;
      v53[4] = v38;
      *v38 = GameData_20136a0;
      v38[1] = v39;
      v42 = v49_.v51;
      v49_.v51 = 0;
      v38[2] = v40;
      v38[3] = v42;
      v43 = (_QWORD*)EveryFrameProc_10aa5e0(
          game_script_hub_g_frame_counter + 144, (__int64)v53, v27),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      *(__n128*)&v44 = GameRoutine_10aa000(v30, v43),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      (*(void (**)(_QWORD*, long double))(*v41 + 40LL))(v41, v44),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      if ((v49_.v49 & 1) != 0 && v49_.v51 != 0) {
        v45 = 128;
        if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) == 0) {
          v45 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v37 + v45),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      if ((v54_.v54 & 1) != 0 && v54_.v56 != 0) {
        v46 = 128;
        if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) == 0) {
          v46 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v37 + v46),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      }
    }
    goto LABEL_83;
  }
  result = (_QWORD*)(((_UNKNOWN*)0x0LL) + 3);
LABEL_84:
  if ((v58_.v58 & 1) != 0 && v58_.v60 != 0) {
    v47 = (unsigned int)result;
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v48),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
    return (__int64*)v47;
  }
  return result;
}

__int64 game_evt_demo_1158880(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  long double v14;
  float v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  long double v21;
  float v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  long double v28;
  float v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  long double v35;
  float v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  long double v42;
  float v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  long double v49;
  float v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  long double v56;
  float v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  long double v63;
  float v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  long double v70;
  float v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  long double v77;
  float v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  long double v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  long double v85;
  float v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64* v92;
  __int64 v93;
  __int64* v94;
  _BYTE* v95;
  unsigned int v96;
  __int128 v97;
  __int128 v98;
  __int128 v99;
  char* v100;
  __int128 v101;
  __int64 v102;
  __int64 v103;
  int v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  __int128 v117;
  __int128 v118;
  __int128 v119;
  __int128 v120;
  struct {
    __int64 v121[2];
    char* v122;
  } v121_;
  struct {
    __int64 v123[2];
    __int64 v124;
  } v123_;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return 0;
    }
  }
  v4 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(v123_.v123, *(_QWORD*)(v4 + 16),
                                  *(_QWORD*)(v4 + 8));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)v4;
    v6 = *(_QWORD*)(v4 + 16);
    v123_.v123[1] = *(_QWORD*)(v4 + 8);
    v123_.v124 = v6;
    v123_.v123[0] = v5;
  }
  if ((*(_BYTE*)(v4 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated(v121_.v121, *(_QWORD*)(v4 + 40),
                                  *(_QWORD*)(v4 + 32));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v7 = *(_QWORD*)(v4 + 32);
    v8 = *(char**)(v4 + 40);
    v121_.v121[0] = *(_QWORD*)(v4 + 24);
    v121_.v121[1] = v7;
    v121_.v122 = v8;
  }
  v9 = *(unsigned __int8*)(v4 + 48);
  v10 = *(_QWORD*)(v4 + 56);
  v116 = 0x0.0p+0f;
  if ((v9 & 1) == 0) {
    v10 = v9 >> 1;
  }
  if (v10 != 0) {
    v11 = *(_QWORD*)(v4 + 64);
    v12 = v4 + 49;
    *(_QWORD*)&v120 = 0;
    if ((v9 & 1) != 0) {
      v13 = v11;
    }
    else {
      v13 = v12;
    }
    v14 = strtof_alt2(v13, &v120);
    v111 = *(float*)&v14;
    if (*(_BYTE*)v120 != 0) {
      if (*(_BYTE*)v120 == 102) {
        v15 = *(float*)&v14;
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v120) != 0) {
          v15 = 0x0.0p+0f;
        }
        v111 = v15;
      }
      else {
        v111 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v111 = 0x0.0p+0f;
  }
  v16 = *(unsigned __int8*)(v4 + 72);
  v17 = *(_QWORD*)(v4 + 80);
  if ((v16 & 1) == 0) {
    v17 = v16 >> 1;
  }
  if (v17 != 0) {
    v18 = *(_QWORD*)(v4 + 88);
    v19 = v4 + 73;
    *(_QWORD*)&v120 = 0;
    if ((v16 & 1) != 0) {
      v20 = v18;
    }
    else {
      v20 = v19;
    }
    v21 = strtof_alt2(v20, &v120);
    v116 = *(float*)&v21;
    if (*(_BYTE*)v120 != 0) {
      if (*(_BYTE*)v120 == 102) {
        v22 = *(float*)&v21;
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v120) != 0) {
          v22 = 0x0.0p+0f;
        }
        v116 = v22;
      }
      else {
        v116 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  v23 = *(unsigned __int8*)(v4 + 96);
  v24 = *(_QWORD*)(v4 + 104);
  v115 = 0x0.0p+0f;
  if ((v23 & 1) == 0) {
    v24 = v23 >> 1;
  }
  if (v24 != 0) {
    v25 = *(_QWORD*)(v4 + 112);
    v26 = v4 + 97;
    *(_QWORD*)&v120 = 0;
    if ((v23 & 1) != 0) {
      v27 = v25;
    }
    else {
      v27 = v26;
    }
    v28 = strtof_alt2(v27, &v120);
    v110 = *(float*)&v28;
    if (*(_BYTE*)v120 != 0) {
      if (*(_BYTE*)v120 == 102) {
        v29 = *(float*)&v28;
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v120) != 0) {
          v29 = 0x0.0p+0f;
        }
        v110 = v29;
      }
      else {
        v110 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v110 = 0x0.0p+0f;
  }
  v30 = *(unsigned __int8*)(v4 + 120);
  v31 = *(_QWORD*)(v4 + 128);
  if ((v30 & 1) == 0) {
    v31 = v30 >> 1;
  }
  if (v31 != 0) {
    v32 = *(_QWORD*)(v4 + 136);
    v33 = v4 + 121;
    *(_QWORD*)&v120 = 0;
    if ((v30 & 1) != 0) {
      v34 = v32;
    }
    else {
      v34 = v33;
    }
    v35 = strtof_alt2(v34, &v120);
    v115 = *(float*)&v35;
    if (*(_BYTE*)v120 != 0) {
      if (*(_BYTE*)v120 == 102) {
        v36 = *(float*)&v35;
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v120) != 0) {
          v36 = 0x0.0p+0f;
        }
        v115 = v36;
      }
      else {
        v115 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  v37 = *(unsigned __int8*)(v4 + 144);
  v38 = *(_QWORD*)(v4 + 152);
  v114 = 0x0.0p+0f;
  if ((v37 & 1) == 0) {
    v38 = v37 >> 1;
  }
  if (v38 != 0) {
    v39 = *(_QWORD*)(v4 + 160);
    v40 = v4 + 145;
    *(_QWORD*)&v120 = 0;
    if ((v37 & 1) != 0) {
      v41 = v39;
    }
    else {
      v41 = v40;
    }
    v42 = strtof_alt2(v41, &v120);
    v109 = *(float*)&v42;
    if (*(_BYTE*)v120 != 0) {
      if (*(_BYTE*)v120 == 102) {
        v43 = *(float*)&v42;
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v120) != 0) {
          v43 = 0x0.0p+0f;
        }
        v109 = v43;
      }
      else {
        v109 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v109 = 0x0.0p+0f;
  }
  v44 = *(unsigned __int8*)(v4 + 168);
  v45 = *(_QWORD*)(v4 + 176);
  if ((v44 & 1) == 0) {
    v45 = v44 >> 1;
  }
  if (v45 != 0) {
    v46 = *(_QWORD*)(v4 + 184);
    v47 = v4 + 169;
    *(_QWORD*)&v120 = 0;
    if ((v44 & 1) != 0) {
      v48 = v46;
    }
    else {
      v48 = v47;
    }
    v49 = strtof_alt2(v48, &v120);
    v114 = *(float*)&v49;
    if (*(_BYTE*)v120 != 0) {
      if (*(_BYTE*)v120 == 102) {
        v50 = *(float*)&v49;
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v120) != 0) {
          v50 = 0x0.0p+0f;
        }
        v114 = v50;
      }
      else {
        v114 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  v51 = *(unsigned __int8*)(v4 + 192);
  v52 = *(_QWORD*)(v4 + 200);
  v113 = 0x0.0p+0f;
  if ((v51 & 1) == 0) {
    v52 = v51 >> 1;
  }
  if (v52 != 0) {
    v53 = *(_QWORD*)(v4 + 208);
    v54 = v4 + 193;
    *(_QWORD*)&v120 = 0;
    if ((v51 & 1) != 0) {
      v55 = v53;
    }
    else {
      v55 = v54;
    }
    v56 = strtof_alt2(v55, &v120);
    v108 = *(float*)&v56;
    if (*(_BYTE*)v120 != 0) {
      if (*(_BYTE*)v120 == 102) {
        v57 = *(float*)&v56;
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v120) != 0) {
          v57 = 0x0.0p+0f;
        }
        v108 = v57;
      }
      else {
        v108 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v108 = 0x0.0p+0f;
  }
  v58 = *(unsigned __int8*)(v4 + 216);
  v59 = *(_QWORD*)(v4 + 224);
  if ((v58 & 1) == 0) {
    v59 = v58 >> 1;
  }
  if (v59 != 0) {
    v60 = *(_QWORD*)(v4 + 232);
    v61 = v4 + 217;
    *(_QWORD*)&v120 = 0;
    if ((v58 & 1) != 0) {
      v62 = v60;
    }
    else {
      v62 = v61;
    }
    v63 = strtof_alt2(v62, &v120);
    v113 = *(float*)&v63;
    if (*(_BYTE*)v120 != 0) {
      if (*(_BYTE*)v120 == 102) {
        v64 = *(float*)&v63;
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v120) != 0) {
          v64 = 0x0.0p+0f;
        }
        v113 = v64;
      }
      else {
        v113 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  v65 = *(unsigned __int8*)(v4 + 240);
  v66 = *(_QWORD*)(v4 + 248);
  v112 = 0x0.0p+0f;
  if ((v65 & 1) == 0) {
    v66 = v65 >> 1;
  }
  if (v66 != 0) {
    v67 = *(_QWORD*)(v4 + 256);
    v68 = v4 + 241;
    *(_QWORD*)&v120 = 0;
    if ((v65 & 1) != 0) {
      v69 = v67;
    }
    else {
      v69 = v68;
    }
    v70 = strtof_alt2(v69, &v120);
    v107 = *(float*)&v70;
    if (*(_BYTE*)v120 != 0) {
      if (*(_BYTE*)v120 == 102) {
        v71 = *(float*)&v70;
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v120) != 0) {
          v71 = 0x0.0p+0f;
        }
        v107 = v71;
      }
      else {
        v107 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v107 = 0x0.0p+0f;
  }
  v72 = *(unsigned __int8*)(v4 + 264);
  v73 = *(_QWORD*)(v4 + 272);
  if ((v72 & 1) == 0) {
    v73 = v72 >> 1;
  }
  if (v73 != 0) {
    v74 = *(_QWORD*)(v4 + 280);
    v75 = v4 + 265;
    *(_QWORD*)&v120 = 0;
    if ((v72 & 1) != 0) {
      v76 = v74;
    }
    else {
      v76 = v75;
    }
    v77 = strtof_alt2(v76, &v120);
    v112 = *(float*)&v77;
    if (*(_BYTE*)v120 != 0) {
      if (*(_BYTE*)v120 == 102) {
        v78 = *(float*)&v77;
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v120) != 0) {
          v78 = 0x0.0p+0f;
        }
        v112 = v78;
      }
      else {
        v112 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  v79 = *(unsigned __int8*)(v4 + 288);
  v80 = *(_QWORD*)(v4 + 296);
  LODWORD(v81) = 0;
  if ((v79 & 1) == 0) {
    v80 = v79 >> 1;
  }
  if (v80 == 0) {
    v106 = 0x0.0p+0f;
    goto LABEL_165;
  }
  v82 = *(_QWORD*)(v4 + 304);
  v83 = v4 + 289;
  *(_QWORD*)&v120 = 0;
  if ((v79 & 1) != 0) {
    v84 = v82;
  }
  else {
    v84 = v83;
  }
  v85 = strtof_alt2(v84, &v120);
  if (*(_BYTE*)v120 != 0) {
    if (*(_BYTE*)v120 == 102) {
      v86 = *(float*)&v85;
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v120) != 0) {
        v86 = 0x0.0p+0f;
      }
      v106 = v86;
      goto LABEL_164;
    }
    LODWORD(v85) = 0;
  }
  v106 = *(float*)&v85;
LABEL_164:
  v4 = *(_QWORD*)(a1 + 120);
  LODWORD(v81) = 0;
LABEL_165:
  v87 = *(unsigned __int8*)(v4 + 312);
  v88 = *(_QWORD*)(v4 + 320);
  if ((v87 & 1) == 0) {
    v88 = v87 >> 1;
  }
  if (v88 != 0) {
    v89 = *(_QWORD*)(v4 + 328);
    v90 = v4 + 313;
    *(_QWORD*)&v120 = 0;
    v91 = (v87 & 1) != 0 ? v89 : v90;
    v81 = strtof_alt2(v91, &v120);
    if (*(_BYTE*)v120 != 0) {
      if (*(_BYTE*)v120 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v120) != 0) {
          *(float*)&v81 = 0x0.0p+0f;
        }
      }
      else {
        LODWORD(v81) = 0;
      }
    }
  }
  if (GameData_22336e0 != 0) {
    v105 = LODWORD(v81);
    v92 = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                              (unsigned __int8*)v123_.v123);
    if (v92 != nullptr) {
      v93 = v92[5];
      if (v93 != 0 && *(_QWORD*)(v93 + 136) != 0 && GameData_22336e0 != 0) {
        v94 = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                                  (unsigned __int8*)v123_.v123);
        if (v94 != nullptr) {
          v95 = (_BYTE*)v94[5];
          if (v95 != nullptr && v95[128] == 1) {
            if (v95[129] != 1 || (v95[130] & 1) != 0) {
              v96 = 3;
              goto LABEL_194;
            }
            HIDWORD(v98) = 0;
            HIDWORD(v97) = 0;
            *(float*)&v98 = v111;
            HIDWORD(v99) = 0;
            if ((v121_.v121[0] & 1) != 0) {
              v100 = v121_.v122;
            }
            else {
              v100 = (char*)v121_.v121 + 1;
            }
            *(_QWORD*)&v99 = __PAIR64__(LODWORD(v109), LODWORD(v115));
            *((float*)&v98 + 1) = v116;
            *((float*)&v98 + 2) = v110;
            v120 = v98;
            *((float*)&v99 + 2) = v114;
            v119 = v99;
            *(_QWORD*)&v101 = __PAIR64__(LODWORD(v113), LODWORD(v108));
            *((_QWORD*)&v101 + 1) = LODWORD(v107);
            v118 = v101;
            *(_QWORD*)&v97 = __PAIR64__(LODWORD(v106), LODWORD(v112));
            DWORD2(v97) = v105;
            v117 = v97;
            GameRoutine_11c53a0((__int64)v95, (__int64)v100, &v120, &v119,
                                &v118, &v117);
          }
        }
      }
    }
  }
  v96 = 0;
LABEL_194:
  if ((v121_.v121[0] & 1) != 0 && v121_.v122 != nullptr) {
    v102 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v102 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v102);
  }
  if ((v123_.v123[0] & 1) != 0 && v123_.v124 != 0) {
    v103 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v103 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v103);
  }
  return v96;
}

__int64* game_evt_demo_11590c0(__int64 a1)
{
  int v3;
  int v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* result;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  struct {
    __int64 v13[2];
    __int64 v14;
  } v13_;

  if ((GameData_21ec7b8 == 0 || (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v4 = (v3 & 8) != 0 ? 2 : 3;
    if ((v4 & v3) == 0) {
      return nullptr;
    }
  }
  v5 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v5 & 1) != 0) {
    fw_text_String_CopyTerminated(v13_.v13, v5[2], v5[1]);
  }
  else {
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    v13_.v13[1] = v7;
    v13_.v14 = v8;
    v13_.v13[0] = v6;
  }
  if (GameData_22336e0 == 0) {
    goto LABEL_25;
  }
  result = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                               (unsigned __int8*)v13_.v13);
  if (result != nullptr) {
    v10 = result[5];
    if (v10 == 0 || *(_QWORD*)(v10 + 136) == 0 || GameData_22336e0 == 0) {
      goto LABEL_25;
    }
    result = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                                 (unsigned __int8*)v13_.v13);
    if (result != nullptr) {
      result = (__int64*)result[5];
      if (result != nullptr) {
        if (*((_BYTE*)result + 128) == 1) {
          if (*((_BYTE*)result + 129) != 1 ||
              (*((_BYTE*)result + 130) & 1) != 0) {
            result = (_QWORD*)(((_UNKNOWN*)0x0LL) + 3);
            goto LABEL_26;
          }
          CharacterWork_11c56e0((__int64)result);
        }
      LABEL_25:
        result = nullptr;
      }
    }
  }
LABEL_26:
  if ((v13_.v13[0] & 1) != 0 && v13_.v14 != 0) {
    v11 = (unsigned int)result;
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v12);
    return (__int64*)v11;
  }
  return result;
}

__int64* game_evt_demo_1159220(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int8 v7;
  __int64 v8;
  _DWORD* v9;
  _DWORD* v10;
  char v11;
  __int64* result;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  struct {
    __int64 v16[2];
    __int64 v17;
  } v16_;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return nullptr;
    }
  }
  v4 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(v16_.v16, *(_QWORD*)(v4 + 16),
                                  *(_QWORD*)(v4 + 8));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)v4;
    v6 = *(_QWORD*)(v4 + 16);
    v16_.v16[1] = *(_QWORD*)(v4 + 8);
    v16_.v17 = v6;
    v16_.v16[0] = v5;
  }
  v7 = *(_BYTE*)(v4 + 24);
  v8 = *(_QWORD*)(v4 + 32);
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v8 == 4) {
    v9 = *(_DWORD**)(v4 + 40);
    v10 = (_DWORD*)(v4 + 25);
    if ((v7 & 1) != 0) {
      v10 = v9;
    }
    v11 = *v10 == *(_DWORD*)"True";
  }
  else {
    v11 = 0;
  }
  if (GameData_22336e0 == 0) {
    goto LABEL_32;
  }
  result = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                               (unsigned __int8*)v16_.v16);
  if (result != nullptr) {
    v13 = result[5];
    if (v13 == 0 || *(_QWORD*)(v13 + 136) == 0 || GameData_22336e0 == 0) {
      goto LABEL_32;
    }
    result = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                                 (unsigned __int8*)v16_.v16);
    if (result != nullptr) {
      result = (__int64*)result[5];
      if (result != nullptr) {
        if (*((_BYTE*)result + 128) == 1) {
          if (*((_BYTE*)result + 129) != 1 ||
              (*((_BYTE*)result + 130) & 1) != 0) {
            result = (_QWORD*)(((_UNKNOWN*)0x0LL) + 3);
            goto LABEL_33;
          }
          CharacterWork_11c5740((__int64)result, v11);
        }
      LABEL_32:
        result = nullptr;
      }
    }
  }
LABEL_33:
  if ((v16_.v16[0] & 1) != 0 && v16_.v17 != 0) {
    v14 = (unsigned int)result;
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v15);
    return (__int64*)v14;
  }
  return result;
}

__int64 game_evt_demo_11593e0(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  long double v14;
  float v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  _BYTE* v19;
  _BYTE* v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  _QWORD* v29;
  long double v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  struct {
    __int64 v36;
    unsigned __int64 v37;
    __int64 v38;
  } v36_;
  struct {
    _QWORD v39[6];
    __int64 v40;
  } v39_;
  struct {
    __int64 v41;
    unsigned __int64 v42;
    char* v43;
  } v41_;
  struct {
    __int64 v44;
    unsigned __int64 v45;
    char* v46;
  } v44_;
  struct {
    __int64 v47[2];
    __int64 v48;
  } v47_;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      LODWORD(v19) = 0;
      return (unsigned int)v19;
    }
  }
  v4 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(v47_.v47, *(_QWORD*)(v4 + 16),
                                  *(_QWORD*)(v4 + 8));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)v4;
    v6 = *(_QWORD*)(v4 + 16);
    v47_.v47[1] = *(_QWORD*)(v4 + 8);
    v47_.v48 = v6;
    v47_.v47[0] = v5;
  }
  if ((*(_BYTE*)(v4 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated(&v44_.v44, *(_QWORD*)(v4 + 40),
                                  *(_QWORD*)(v4 + 32));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v7 = *(_QWORD*)(v4 + 32);
    v8 = *(_QWORD*)(v4 + 40);
    v44_.v44 = *(_QWORD*)(v4 + 24);
    v44_.v45 = v7;
    v44_.v46 = (char*)v8;
  }
  v9 = *(unsigned __int8*)(v4 + 48);
  v10 = *(_QWORD*)(v4 + 56);
  if ((v9 & 1) == 0) {
    v10 = v9 >> 1;
  }
  if (v10 != 0) {
    v11 = *(_QWORD*)(v4 + 64);
    v12 = v4 + 49;
    v39_.v39[0] = 0;
    if ((v9 & 1) != 0) {
      v13 = v11;
    }
    else {
      v13 = v12;
    }
    v14 = strtof_alt2(v13, v39_.v39);
    v15 = *(float*)&v14;
    if (*(_BYTE*)v39_.v39[0] == 0) {
      goto LABEL_27;
    }
    if (*(_BYTE*)v39_.v39[0] == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v39_.v39[0]) != 0) {
        v15 = 0x0.0p+0f;
      }
      goto LABEL_27;
    }
  }
  v15 = 0x0.0p+0f;
LABEL_27:
  if (GameData_22336e0 != 0) {
    v16 = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                              (unsigned __int8*)v47_.v47);
    if (v16 != nullptr) {
      v17 = v16[5];
      if (v17 != 0 && *(_QWORD*)(v17 + 136) != 0 && GameData_22336e0 != 0) {
        v18 = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                                  (unsigned __int8*)v47_.v47);
        if (v18 != nullptr) {
          v19 = (_BYTE*)v18[5];
          if (v19 == nullptr) {
            goto LABEL_61;
          }
          if (v19[128] == 1) {
            if (v19[129] != 1 || (v19[130] & 1) != 0) {
              LODWORD(v19) = 3;
              goto LABEL_61;
            }
            if (v15 <= 0x0.0p+0f) {
              v21 = v18[5];
              if ((v44_.v44 & 1) != 0) {
                v22 = v44_.v46;
              }
              else {
                v22 = (char*)&v44_.v44 + 1;
              }
              CharacterWork_11c5860(v21, (__int64)v22);
            }
            else {
              v39_.v40 = v18[5];
              if ((v44_.v44 & 1) != 0) {
                fw_text_String_CopyTerminated(&v41_.v41, (__int64)v44_.v46,
                                              v44_.v45);
                v20 = (_BYTE*)v39_.v40;
              }
              else {
                v20 = v19;
                v41_.v41 = v44_.v44;
                v41_.v42 = v44_.v45;
                v41_.v43 = v44_.v46;
              }
              if ((v41_.v41 & 1) != 0) {
                fw_text_String_CopyTerminated(&v36_.v36, (__int64)v41_.v43,
                                              v41_.v42);
              }
              else {
                v36_.v36 = v41_.v41;
                v36_.v37 = v41_.v42;
                v36_.v38 = (__int64)v41_.v43;
              }
              v23 = fw_memory_g_heap_manager_ptr;
              v24 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
              v39_.v39[4] = v24;
              v25 = v24;
              *v24 = GameData_2013720;
              v24[1] = v20;
              v26 = v36_.v36;
              v27 = v36_.v37;
              v36_.v36 = 0;
              v36_.v37 = 0;
              v24[2] = v26;
              v24[3] = v27;
              v28 = v36_.v38;
              v36_.v38 = 0;
              v24[4] = v28;
              v29 = (_QWORD*)EveryFrameProc_10aa5e0(
                  game_script_hub_g_frame_counter + 144, (__int64)v39_.v39,
                  v15);
              *(__n128*)&v30 = GameRoutine_10aa000((__int64)v19, v29);
              (*(void (**)(_QWORD*, long double))(*v25 + 40LL))(v25, v30);
              if ((v36_.v36 & 1) != 0 && v36_.v38 != 0) {
                v31 = 128;
                if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) == 0) {
                  v31 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v23 + v31);
              }
              if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
                v32 = 128;
                if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) == 0) {
                  v32 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v23 + v32);
              }
            }
          }
        }
      }
    }
  }
  LODWORD(v19) = 0;
LABEL_61:
  if ((v44_.v44 & 1) != 0 && v44_.v46 != nullptr) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v33);
  }
  if ((v47_.v47[0] & 1) != 0 && v47_.v48 != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v34);
  }
  return (unsigned int)v19;
}

__int64 game_evt_demo_11597a0(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _DWORD* v8;
  char v9;
  unsigned __int8* v10;
  signed __int64 v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  unsigned __int8* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  int v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  signed __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64* v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  unsigned int v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  struct {
    __int64 v34;
    __int64 v35;
    char* v36;
  } v34_;
  struct {
    __int64 v37[2];
    __int64 v38;
  } v37_;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return 0;
    }
  }
  v4 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(v37_.v37, *(_QWORD*)(v4 + 16),
                                  *(_QWORD*)(v4 + 8));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)v4;
    v6 = *(_QWORD*)(v4 + 16);
    v37_.v37[1] = *(_QWORD*)(v4 + 8);
    v37_.v38 = v6;
    v37_.v37[0] = v5;
  }
  v7 = *(_QWORD*)(v4 + 32);
  if ((*(_BYTE*)(v4 + 24) & 1) == 0) {
    v7 = *(_BYTE*)(v4 + 24) >> 1;
  }
  if (v7 == 4) {
    if ((*(_BYTE*)(v4 + 24) & 1) != 0) {
      v8 = *(_DWORD**)(v4 + 40);
    }
    else {
      v8 = (_DWORD*)(v4 + 25);
    }
    v9 = *v8 == *(_DWORD*)"True";
  }
  else {
    v9 = 0;
  }
  v10 = *(unsigned __int8**)(a1 + 128);
  v34_.v35 = 0;
  v34_.v36 = nullptr;
  v34_.v34 = 0;
  v11 = 0xAAAAAAAAAAAAAAABLL * ((__int64)&v10[-v4] >> 3);
  if ((unsigned __int64)v11 < 2) {
    goto LABEL_41;
  }
  if (v11 >= 2) {
    v11 = 2;
  }
  v12 = (unsigned __int8*)(v4 + 24 * v11);
  if (v10 == v12) {
  LABEL_41:
    v23 = 0;
    v24 = 0;
  }
  else {
    do {
      v15 = *v12;
      v16 = *((_QWORD*)v12 + 1);
      v17 = v15 & 1;
      v18 = v15 >> 1;
      if (v17 != 0) {
        v19 = *((_QWORD*)v12 + 1);
      }
      else {
        v19 = v18;
      }
      if (v19 != 0) {
        v20 = *(_QWORD*)(a1 + 120);
        v21 = 0xAAAAAAAAAAAAAAABLL * ((__int64)&v10[-v20] >> 3);
        if (v21 >= 2) {
          v21 = 2;
        }
        if (v12 != (unsigned __int8*)(v20 + 24 * v21)) {
          GameRoutine_1a09ce0(&v34_.v34, ",", 1);
          v22 = *v12;
          v16 = *((_QWORD*)v12 + 1);
          v17 = v22 & 1;
          v18 = v22 >> 1;
        }
        if (v17 != 0) {
          v13 = v16;
        }
        else {
          v13 = v18;
        }
        if (v17 != 0) {
          v14 = *((unsigned __int8**)v12 + 2);
        }
        else {
          v14 = v12 + 1;
        }
        GameRoutine_1a09ce0(&v34_.v34, v14, v13);
        v10 = *(unsigned __int8**)(a1 + 128);
      }
      v12 += 24;
    } while (v12 != v10);
    v24 = (unsigned __int8)v34_.v34;
    v23 = v34_.v35;
  }
  if ((v24 & 1) == 0) {
    v23 = v24 >> 1;
  }
  if (v23 != 0 && GameData_22336e0 != 0) {
    v25 = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                              (unsigned __int8*)v37_.v37);
    if (v25 != nullptr) {
      v26 = v25[5];
      if (v26 != 0 && *(_QWORD*)(v26 + 136) != 0 && GameData_22336e0 != 0) {
        v27 = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                                  (unsigned __int8*)v37_.v37);
        if (v27 != nullptr) {
          v28 = v27[5];
          if (v28 != 0 && *(_BYTE*)(v28 + 128) == 1) {
            if (*(_BYTE*)(v28 + 129) != 1 || (*(_BYTE*)(v28 + 130) & 1) != 0) {
              v29 = 3;
              goto LABEL_63;
            }
            if ((v34_.v34 & 1) != 0) {
              v30 = v34_.v36;
            }
            else {
              v30 = (char*)&v34_.v34 + 1;
            }
            GameRoutine_11c59a0((_QWORD*)v28, v9, (__int64)v30);
          }
        }
      }
    }
  }
  v29 = 0;
LABEL_63:
  if ((v34_.v34 & 1) != 0 && v34_.v36 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v31);
  }
  if ((v37_.v37[0] & 1) != 0 && v37_.v38 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v32);
  }
  return v29;
}

__int64 game_evt_demo_1159de0(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  long double v16;
  __int64 v17;
  float v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  _QWORD* v36;
  long double v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  struct {
    __int64 v50;
    unsigned __int64 v51;
    __int64 v52;
  } v50_;
  struct {
    __int64 v53;
    unsigned __int64 v54;
    __int64 v55;
  } v53_;
  struct {
    __int64 v56;
    unsigned __int64 v57;
    __int64 v58;
  } v56_;
  struct {
    char v59[32];
    _QWORD* v60;
  } v59_;
  struct {
    __int64 v61;
    unsigned __int64 v62;
    __int64 v63;
  } v61_;
  struct {
    __int64 v64;
    unsigned __int64 v65;
    __int64 v66;
  } v64_;
  struct {
    __int64 v67;
    unsigned __int64 v68;
    __int64 v69;
  } v67_;
  struct {
    __int64 v70;
    unsigned __int64 v71;
    __int64 v72;
  } v70_;
  struct {
    __int64 v73;
    unsigned __int64 v74;
    __int64 v75;
  } v73_;
  struct {
    __int64 v76;
    unsigned __int64 v77;
    __int64 v78;
  } v76_;
  struct {
    __int64 v79;
    __int64 v80;
    __int64 v81;
  } v79_;

  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return 0;
    }
  }
  v4 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(&v76_.v76, *(_QWORD*)(v4 + 16),
                                  *(_QWORD*)(v4 + 8)),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)v4;
    v6 = *(_QWORD*)(v4 + 16);
    v76_.v77 = *(_QWORD*)(v4 + 8);
    v76_.v78 = v6;
    v76_.v76 = v5;
  }
  if ((*(_BYTE*)(v4 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated(&v73_.v73, *(_QWORD*)(v4 + 40),
                                  *(_QWORD*)(v4 + 32)),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v7 = *(_QWORD*)(v4 + 32);
    v8 = *(_QWORD*)(v4 + 40);
    v73_.v73 = *(_QWORD*)(v4 + 24);
    v73_.v74 = v7;
    v73_.v75 = v8;
  }
  if ((*(_BYTE*)(v4 + 48) & 1) != 0) {
    fw_text_String_CopyTerminated(&v70_.v70, *(_QWORD*)(v4 + 64),
                                  *(_QWORD*)(v4 + 56)),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v9 = *(_QWORD*)(v4 + 56);
    v10 = *(_QWORD*)(v4 + 64);
    v70_.v70 = *(_QWORD*)(v4 + 48);
    v70_.v71 = v9;
    v70_.v72 = v10;
  }
  v11 = *(unsigned __int8*)(v4 + 72);
  v12 = *(_QWORD*)(v4 + 80);
  if ((v11 & 1) == 0) {
    v12 = v11 >> 1;
  }
  if (v12 != 0) {
    v13 = *(_QWORD*)(v4 + 88);
    v14 = v4 + 73;
    v61_.v61 = 0;
    v15 = (v11 & 1) != 0 ? v13 : v14;
    v16 = strtof_alt2(v15, &v61_.v61),
    v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((*(_BYTE*)v61_.v61 == 0 ||
         *(_BYTE*)v61_.v61 == 102 &&
             *((_BYTE*)((_UNKNOWN*)0x0LL) + v61_.v61) == 0) &&
        *(float*)&v16 > 0x0.0p+0f) {
      v17 = *(_QWORD*)(GameData_22336e0 + 600);
      v18 = *(float*)&v16;
      if ((v76_.v76 & 1) != 0) {
        fw_text_String_CopyTerminated(&v61_.v61, v76_.v78, v76_.v77),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        v61_.v61 = v76_.v76;
        v61_.v62 = v76_.v77;
        v61_.v63 = v76_.v78;
      }
      if ((v73_.v73 & 1) != 0) {
        fw_text_String_CopyTerminated(&v64_.v64, v73_.v75, v73_.v74),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        v64_.v64 = v73_.v73;
        v64_.v65 = v73_.v74;
        v64_.v66 = v73_.v75;
      }
      if ((v70_.v70 & 1) != 0) {
        fw_text_String_CopyTerminated(&v67_.v67, v70_.v72, v70_.v71),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if ((v61_.v61 & 1) != 0) {
          goto LABEL_53;
        }
      }
      else {
        v67_.v67 = v70_.v70;
        v67_.v68 = v70_.v71;
        v67_.v69 = v70_.v72;
        if ((v61_.v61 & 1) != 0) {
        LABEL_53:
          fw_text_String_CopyTerminated(&v50_.v50, v61_.v63, v61_.v62),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          goto LABEL_56;
        }
      }
      v50_.v50 = v61_.v61;
      v50_.v51 = v61_.v62;
      v50_.v52 = v61_.v63;
    LABEL_56:
      if ((v64_.v64 & 1) != 0) {
        fw_text_String_CopyTerminated(&v53_.v53, v64_.v66, v64_.v65),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        v53_.v53 = v64_.v64;
        v53_.v54 = v64_.v65;
        v53_.v55 = v64_.v66;
      }
      if ((v67_.v67 & 1) != 0) {
        fw_text_String_CopyTerminated(&v56_.v56, v67_.v69, v67_.v68),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        v56_.v56 = v67_.v67;
        v56_.v57 = v67_.v68;
        v56_.v58 = v67_.v69;
      }
      v24 = fw_memory_g_heap_manager_ptr;
      v25 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v26 = v50_.v50;
      v27 = v50_.v51;
      v28 = v56_.v58;
      v29 = v25;
      v50_.v50 = 0;
      v50_.v51 = 0;
      *v25 = GameData_20137a0;
      v25[1] = v26;
      v30 = v50_.v52;
      v50_.v52 = 0;
      v25[2] = v27;
      v25[3] = v30;
      v31 = v53_.v53;
      v32 = v53_.v54;
      v53_.v53 = 0;
      v25[4] = v31;
      v25[5] = v32;
      v33 = v53_.v55;
      v34 = v56_.v56;
      v35 = v56_.v57;
      v53_.v54 = 0;
      v53_.v55 = 0;
      v56_.v57 = 0;
      v56_.v58 = 0;
      v56_.v56 = 0;
      v25[8] = v35;
      v25[9] = v28;
      v25[6] = v33;
      v25[7] = v34;
      v59_.v60 = v25;
      v36 = (_QWORD*)EveryFrameProc_10aa5e0(
          game_script_hub_g_frame_counter + 144, (__int64)v59_.v59, v18),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v38 = v36[21];
      v39 = v36[22];
      v79_.v79 = v38;
      v79_.v80 = v39;
      if (v39 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 16), 1u,
                                  memory_order_relaxed);
      }
      v40 = v36[23];
      v79_.v81 = v40;
      v41 = *(__int64**)(v17 + 8);
      if ((unsigned __int64)v41 >= *(_QWORD*)(v17 + 16)) {
        v42 = GameRoutine_10aa900((char**)v17, &v79_.v79),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v43 = v79_.v80;
        *(_QWORD*)(v17 + 8) = v42;
        if (v43 != 0) {
          *(__n128*)&v37 = std___1___shared_weak_count___release_weak(),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      else {
        *v41 = v38;
        v41[1] = v39;
        v41[2] = v40;
        *(_QWORD*)(v17 + 8) = v41 + 3;
      }
      (*(void (**)(_QWORD*, long double))(*v29 + 40LL))(v29, v37),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if ((v56_.v56 & 1) != 0 && v56_.v58 != 0) {
        v44 = 128;
        if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) == 0) {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v24 + v44),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if ((v53_.v53 & 1) != 0 && v53_.v55 != 0) {
        v45 = 128;
        if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) == 0) {
          v45 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v24 + v45),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if ((v50_.v50 & 1) != 0 && v50_.v52 != 0) {
        v46 = 128;
        if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) == 0) {
          v46 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v24 + v46),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if ((v67_.v67 & 1) != 0 && v67_.v69 != 0) {
        v47 = 128;
        if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) == 0) {
          v47 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v24 + v47),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if ((v64_.v64 & 1) != 0 && v64_.v66 != 0) {
        v48 = 128;
        if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) == 0) {
          v48 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v24 + v48),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if ((v61_.v61 & 1) != 0 && v61_.v63 != 0) {
        v49 = 128;
        if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) == 0) {
          v49 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v24 + v49),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v19 = 0;
      if ((v70_.v70 & 1) == 0) {
        goto LABEL_35;
      }
      goto LABEL_31;
    }
  }
  v19 = (unsigned int)GameRoutine_1159cf0((__int64)&v76_.v76,
                                          (unsigned __int8*)&v73_.v73,
                                          (unsigned __int8*)&v70_.v70),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v70_.v70 & 1) != 0) {
  LABEL_31:
    if (v70_.v72 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
LABEL_35:
  if ((v73_.v73 & 1) != 0 && v73_.v75 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v21),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v76_.v76 & 1) != 0 && v76_.v78 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v22),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  return v19;
}

__int64 game_evt_demo_115aa00(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  __int64* v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  unsigned int v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  char* v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v38[2];
  struct {
    __int64 v39[2];
    char* v40;
  } v39_;
  struct {
    __int64 v41[2];
    char* v42;
  } v41_;
  struct {
    __int64 v43[2];
    char* v44;
  } v43_;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return 0;
    }
  }
  v4 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(v43_.v43, v4[2], v4[1]);
    v4 = *(__int64**)(a1 + 120);
  }
  else {
    v5 = *v4;
    v6 = (char*)v4[2];
    v43_.v43[1] = v4[1];
    v43_.v44 = v6;
    v43_.v43[0] = v5;
  }
  if ((v4[3] & 1) != 0) {
    fw_text_String_CopyTerminated(v41_.v41, v4[5], v4[4]);
    v4 = *(__int64**)(a1 + 120);
  }
  else {
    v7 = v4[4];
    v8 = (char*)v4[5];
    v41_.v41[0] = v4[3];
    v41_.v41[1] = v7;
    v41_.v42 = v8;
  }
  if ((v4[6] & 1) != 0) {
    fw_text_String_CopyTerminated(v39_.v39, v4[8], v4[7]);
  }
  else {
    v9 = v4[7];
    v39_.v39[0] = v4[6];
    v39_.v39[1] = v9;
    v39_.v40 = (char*)v4[8];
  }
  if ((v41_.v41[0] & 1) != 0) {
    v10 = v41_.v42;
  }
  else {
    v10 = (char*)v41_.v41 + 1;
  }
  v11 = game_HashString((__int64)v10);
  if (v11 == 0) {
    goto LABEL_84;
  }
  v12 = *(_QWORD*)(GameData_21c9da0 + 96);
  if (v12 == 0 || *(_QWORD*)(GameData_21c9da0 + 112) == 0) {
    goto LABEL_84;
  }
  v14 = v12 - 1;
  if ((v12 & (v12 - 1)) != 0) {
    v15 = v11;
    if (v11 >= v12) {
      v15 = v11 % v12;
    }
  }
  else {
    v15 = v14 & v11;
  }
  v16 = *(_QWORD**)(*(_QWORD*)(GameData_21c9da0 + 88) + 8 * v15);
  if (v16 == nullptr) {
    goto LABEL_84;
  }
  v17 = (_QWORD*)*v16;
  if (v17 == nullptr) {
    goto LABEL_84;
  }
  if ((v12 & v14) == 0) {
    while (1) {
      v20 = v17[1];
      if (v20 == v11) {
        if (v17[2] == v11) {
          goto LABEL_47;
        }
      }
      else if ((v20 & v14) != v15) {
        goto LABEL_84;
      }
      v17 = (_QWORD*)*v17;
      v19 = 0;
      if (v17 == nullptr) {
        goto LABEL_85;
      }
    }
  }
  while (1) {
    v18 = v17[1];
    if (v18 == v11) {
      break;
    }
    if (v18 >= v12) {
      v18 %= v12;
    }
    if (v18 != v15) {
      goto LABEL_84;
    }
  LABEL_35:
    v17 = (_QWORD*)*v17;
    if (v17 == nullptr) {
      goto LABEL_84;
    }
  }
  if (v17[2] != v11) {
    goto LABEL_35;
  }
LABEL_47:
  if (v17[3] == 0) {
    goto LABEL_84;
  }
  GameRoutine_65be40(v38, (__int64)v39_.v39);
  if (v38[0] == 0) {
    goto LABEL_84;
  }
  v21 = *(_QWORD*)(GameData_21c9d80 + 96);
  if (v21 == 0 || *(_QWORD*)(GameData_21c9d80 + 112) == 0) {
    goto LABEL_84;
  }
  v23 = v21 - 1;
  if ((v21 & (v21 - 1)) != 0) {
    v24 = v38[0];
    if (v38[0] >= v21) {
      v24 = v38[0] % v21;
    }
  }
  else {
    v24 = v23 & v38[0];
  }
  v25 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d80 + 88) + 8 * v24);
  if (v25 == nullptr) {
    goto LABEL_84;
  }
  v26 = (_QWORD*)*v25;
  if (v26 == nullptr) {
    goto LABEL_84;
  }
  if ((v21 & v23) == 0) {
    while (1) {
      v28 = v26[1];
      if (v28 == v38[0]) {
        if (v26[2] == v38[0]) {
          goto LABEL_73;
        }
      }
      else if ((v28 & v23) != v24) {
        goto LABEL_84;
      }
      v26 = (_QWORD*)*v26;
      if (v26 == nullptr) {
        goto LABEL_84;
      }
    }
  }
  while (1) {
    v27 = v26[1];
    if (v27 == v38[0]) {
      break;
    }
    if (v27 >= v21) {
      v27 %= v21;
    }
    if (v27 != v24) {
      goto LABEL_84;
    }
  LABEL_62:
    v26 = (_QWORD*)*v26;
    if (v26 == nullptr) {
      goto LABEL_84;
    }
  }
  if (v26[2] != v38[0]) {
    goto LABEL_62;
  }
LABEL_73:
  if (v26[3] == 0) {
  LABEL_84:
    v19 = 0;
    goto LABEL_85;
  }
  v29 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  v30 = v29;
  if ((v43_.v43[0] & 1) != 0) {
    v31 = v43_.v44;
  }
  else {
    v31 = (char*)v43_.v43 + 1;
  }
  if ((v41_.v41[0] & 1) != 0) {
    v32 = v41_.v42;
  }
  else {
    v32 = (char*)v41_.v41 + 1;
  }
  if ((v39_.v39[0] & 1) != 0) {
    v33 = v39_.v40;
  }
  else {
    v33 = (char*)v39_.v39 + 1;
  }
  game_evt_demo_SceneObjectWork_SceneObjectWork(v29, (__int64)v31, (__int64)v32,
                                                (__int64)v33);
  v38[0] = v30;
  game_evt_demo_1161e40((float*)(*GameData_212fc38[0] + 608),
                        (unsigned __int8*)v43_.v43, (char*)v43_.v43, v38);
  v19 = 1;
LABEL_85:
  if ((v39_.v39[0] & 1) != 0 && v39_.v40 != nullptr) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v34);
  }
  if ((v41_.v41[0] & 1) != 0 && v41_.v42 != nullptr) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v35);
  }
  if ((v43_.v43[0] & 1) != 0 && v43_.v44 != nullptr) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v36);
  }
  return v19;
}

__int64 game_evt_demo_115ae40(__int64 a1)
{
  int v2;
  int v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  unsigned int v10;
  _DWORD* v11;
  int v12;
  unsigned int v13;
  __int128 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v18[2];
    __int64 v19;
  } v18_;
  struct {
    __int64 v20[2];
    __int64 v21;
  } v20_;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return 0;
    }
  }
  v4 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(v20_.v20, v4[2], v4[1]);
    v4 = *(__int64**)(a1 + 120);
  }
  else {
    v5 = *v4;
    v6 = v4[2];
    v20_.v20[1] = v4[1];
    v20_.v21 = v6;
    v20_.v20[0] = v5;
  }
  if ((v4[3] & 1) != 0) {
    fw_text_String_CopyTerminated(v18_.v18, v4[5], v4[4]);
  }
  else {
    v7 = v4[4];
    v18_.v18[0] = v4[3];
    v18_.v18[1] = v7;
    v18_.v19 = v4[5];
  }
  v8 = GameRoutine_1152500((_QWORD*)(*GameData_212fc38[0] + 608),
                           (unsigned __int8*)v20_.v20);
  if (v8 != nullptr) {
    v9 = v8[5];
    if (v9 != 0) {
      if ((*(_BYTE*)(v9 + 88) & 1) != 0) {
        v10 = 3;
        if ((v18_.v18[0] & 1) == 0) {
          goto LABEL_30;
        }
      LABEL_26:
        if (v18_.v19 != 0) {
          v15 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
        }
        goto LABEL_30;
      }
      if (*(_QWORD*)(v9 + 40) != *(_QWORD*)(v9 + 32)) {
        v11 = (_DWORD*)GameRoutine_11555e0((__int64)v18_.v18);
        v10 = 0;
        if (v11 != nullptr) {
          v12 = v11[9];
          v13 = v11[10];
          *(_DWORD*)(v9 + 64) = v11[8];
          *(_DWORD*)(v9 + 68) = v12;
          v14 = *(_OWORD*)(v9 + 64);
          *((_QWORD*)&v14 + 1) = v13;
          *(_OWORD*)(v9 + 64) = v14;
          *(_DWORD*)(v9 + 80) = v11[11];
        }
        if ((v18_.v18[0] & 1) == 0) {
          goto LABEL_30;
        }
        goto LABEL_26;
      }
    }
  }
  v10 = 0;
  if ((v18_.v18[0] & 1) != 0) {
    goto LABEL_26;
  }
LABEL_30:
  if ((v20_.v20[0] & 1) != 0 && v20_.v21 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v16);
  }
  return v10;
}

__int64* game_evt_demo_115b020(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  float v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  long double v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  float v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  long double v27;
  float v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  long double v34;
  __int64* result;
  __int64 v36;
  float v37;
  unsigned int v38;
  __int128 v39;
  unsigned int v40;
  __int64 v41;
  struct {
    __int64 v42[2];
    __int64 v43;
  } v42_;
  _BYTE* v44;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return nullptr;
    }
  }
  v4 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(v42_.v42, *(_QWORD*)(v4 + 16),
                                  *(_QWORD*)(v4 + 8));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)v4;
    v6 = *(_QWORD*)(v4 + 16);
    v42_.v42[1] = *(_QWORD*)(v4 + 8);
    v42_.v43 = v6;
    v42_.v42[0] = v5;
  }
  v7 = *(unsigned __int8*)(v4 + 24);
  v8 = *(_QWORD*)(v4 + 32);
  v9 = 0x0.0p+0f;
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v8 != 0) {
    v10 = *(_QWORD*)(v4 + 40);
    v11 = v4 + 25;
    v44 = nullptr;
    if ((v7 & 1) != 0) {
      v12 = v10;
    }
    else {
      v12 = v11;
    }
    v13 = strtof_alt2(v12, &v44);
    v14 = *(float*)&v13;
    if (*v44 != 0) {
      if (*v44 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v44) != 0) {
          v14 = 0x0.0p+0f;
        }
      }
      else {
        v14 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v14 = 0x0.0p+0f;
  }
  v15 = *(unsigned __int8*)(v4 + 48);
  v16 = *(_QWORD*)(v4 + 56);
  if ((v15 & 1) == 0) {
    v16 = v15 >> 1;
  }
  if (v16 != 0) {
    v17 = *(_QWORD*)(v4 + 64);
    v18 = v4 + 49;
    v44 = nullptr;
    if ((v15 & 1) != 0) {
      v19 = v17;
    }
    else {
      v19 = v18;
    }
    v20 = strtof_alt2(v19, &v44);
    v9 = *(float*)&v20;
    if (*v44 != 0) {
      if (*v44 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v44) != 0) {
          v9 = 0x0.0p+0f;
        }
      }
      else {
        v9 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  v21 = *(unsigned __int8*)(v4 + 72);
  v22 = *(_QWORD*)(v4 + 80);
  v23 = 0x0.0p+0f;
  if ((v21 & 1) == 0) {
    v22 = v21 >> 1;
  }
  if (v22 != 0) {
    v24 = *(_QWORD*)(v4 + 88);
    v25 = v4 + 73;
    v44 = nullptr;
    if ((v21 & 1) != 0) {
      v26 = v24;
    }
    else {
      v26 = v25;
    }
    v27 = strtof_alt2(v26, &v44);
    v28 = *(float*)&v27;
    if (*v44 != 0) {
      if (*v44 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v44) != 0) {
          v28 = 0x0.0p+0f;
        }
      }
      else {
        v28 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v28 = 0x0.0p+0f;
  }
  v29 = *(unsigned __int8*)(v4 + 96);
  v30 = *(_QWORD*)(v4 + 104);
  if ((v29 & 1) == 0) {
    v30 = v29 >> 1;
  }
  if (v30 != 0) {
    v31 = *(_QWORD*)(v4 + 112);
    v32 = v4 + 97;
    v44 = nullptr;
    v33 = (v29 & 1) != 0 ? v31 : v32;
    v34 = strtof_alt2(v33, &v44);
    v23 = *(float*)&v34;
    if (*v44 != 0) {
      if (*v44 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v44) != 0) {
          v23 = 0x0.0p+0f;
        }
      }
      else {
        v23 = 0x0.0p+0f;
      }
    }
  }
  result = GameRoutine_1152500((_QWORD*)(*GameData_212fc38[0] + 608),
                               (unsigned __int8*)v42_.v42);
  if (result != nullptr) {
    v36 = result[5];
    if (v36 == 0) {
      goto LABEL_74;
    }
    if ((*(_BYTE*)(v36 + 88) & 1) != 0) {
      result = (_QWORD*)(((_UNKNOWN*)0x0LL) + 3);
      if ((v42_.v42[0] & 1) == 0) {
        return result;
      }
      goto LABEL_75;
    }
    if (*(_QWORD*)(v36 + 40) == *(_QWORD*)(v36 + 32)) {
    LABEL_74:
      result = nullptr;
      if ((v42_.v42[0] & 1) == 0) {
        return result;
      }
      goto LABEL_75;
    }
    result = nullptr;
    v37 = v9 + COERCE_FLOAT(HIDWORD(*(_QWORD*)(v36 + 64)));
    *(float*)&v38 = v28 + COERCE_FLOAT(*(_QWORD*)(v36 + 72));
    *(float*)(v36 + 64) = v14 + COERCE_FLOAT(*(_OWORD*)(v36 + 64));
    *(float*)(v36 + 68) = v37;
    v39 = *(_OWORD*)(v36 + 64);
    *((_QWORD*)&v39 + 1) = v38;
    *(float*)(v36 + 80) = v23 + *(float*)(v36 + 80);
    *(_OWORD*)(v36 + 64) = v39;
  }
  if ((v42_.v42[0] & 1) == 0) {
    return result;
  }
LABEL_75:
  if (v42_.v43 != 0) {
    v40 = (unsigned int)result;
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v41);
    return (__int64*)v40;
  }
  return result;
}

__int64 game_evt_demo_115b360(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  struct {
    __int64 v29[2];
    __int64 v30;
  } v29_;

  v1 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated(v29_.v29, v1[2], v1[1]);
  }
  else {
    v2 = *v1;
    v3 = v1[1];
    v4 = v1[2];
    v29_.v29[1] = v3;
    v29_.v30 = v4;
    v29_.v29[0] = v2;
  }
  v5 = GameData_212fc38[0];
  v6 = GameRoutine_1152500((_QWORD*)(*GameData_212fc38[0] + 608),
                           (unsigned __int8*)v29_.v29);
  if (v6 != nullptr) {
    v7 = v6[5];
    if (v7 != 0) {
      v8 = (_QWORD*)*v5;
      v9 = (_QWORD*)(*v5 + 608);
      v10 = GameRoutine_1152500(v9, (unsigned __int8*)v29_.v29);
      if (v10 != nullptr) {
        v11 = v8[77];
        v12 = v10[1];
        v13 = v11 - 1;
        if ((v11 & (v11 - 1)) != 0) {
          if (v12 >= v11) {
            v12 %= v11;
          }
        }
        else {
          v12 &= v13;
        }
        v14 = *(__int64**)(*v9 + 8 * v12);
        do {
          v15 = v14;
          v14 = (__int64*)*v14;
        } while (v14 != v10);
        if (v15 == v8 + 78) {
          goto LABEL_24;
        }
        v16 = v15[1];
        if ((v11 & v13) != 0) {
          if (v16 >= v11) {
            v16 %= v11;
          }
        }
        else {
          v16 &= v13;
        }
        if (v16 != v12) {
        LABEL_24:
          if (*v10 == 0) {
            goto LABEL_25;
          }
          v17 = *(_QWORD*)(*v10 + 8);
          if ((v11 & v13) != 0) {
            if (v17 >= v11) {
              v17 %= v11;
            }
          }
          else {
            v17 &= v13;
          }
          if (v17 != v12) {
          LABEL_25:
            *(_QWORD*)(*v9 + 8 * v12) = 0;
          }
        }
        v18 = *v10;
        if (*v10 != 0) {
          v19 = *(_QWORD*)(v18 + 8);
          if ((v11 & v13) != 0) {
            if (v19 >= v11) {
              v19 %= v11;
            }
          }
          else {
            v19 &= v13;
          }
          if (v19 != v12) {
            *(_QWORD*)(*v9 + 8 * v19) = v15;
            v18 = *v10;
          }
        }
        *v15 = v18;
        *v10 = 0;
        --v8[79];
        if ((v10[2] & 1) != 0 && v10[4] != 0) {
          v20 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v20 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v20);
        }
        v21 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v21);
      }
      v22 = *(_QWORD*)(v7 + 32);
      if (v22 != 0) {
        v23 = fw_memory_g_heap_manager;
        *(_QWORD*)(v7 + 40) = v22;
        v24 = 128;
        if (*(_QWORD*)(v23 + 200) == 0) {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v23 + v24);
      }
      if ((*(_BYTE*)v7 & 1) != 0 && *(_QWORD*)(v7 + 16) != 0) {
        v25 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v25);
      }
      v26 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v26);
    }
  }
  if ((v29_.v29[0] & 1) != 0 && v29_.v30 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v27);
  }
  return 0;
}

__int64* game_evt_demo_115b620(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int8 v7;
  __int64 v8;
  _DWORD* v9;
  _DWORD* v10;
  char v11;
  int* v12;
  int* v13;
  int v14;
  int v15;
  __int64* result;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  struct {
    __int64 v26[2];
    __int64 v27;
  } v26_;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return nullptr;
    }
  }
  v4 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(v26_.v26, *(_QWORD*)(v4 + 16),
                                  *(_QWORD*)(v4 + 8));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)v4;
    v6 = *(_QWORD*)(v4 + 16);
    v26_.v26[1] = *(_QWORD*)(v4 + 8);
    v26_.v27 = v6;
    v26_.v26[0] = v5;
  }
  v7 = *(_BYTE*)(v4 + 24);
  v8 = *(_QWORD*)(v4 + 32);
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v8 == 5) {
    v12 = *(int**)(v4 + 40);
    v13 = (int*)(v4 + 25);
    if ((v7 & 1) != 0) {
      v13 = v12;
    }
    v14 = *v13;
    v15 = *((unsigned __int8*)v13 + 4);
    if (v14 != *(_DWORD*)"False" ||
        v15 != (unsigned __int8)GameData_1ad767c[4]) {
      goto LABEL_37;
    }
    v11 = 0;
  }
  else {
    if (v8 != 4) {
      goto LABEL_37;
    }
    v9 = *(_DWORD**)(v4 + 40);
    v10 = (_DWORD*)(v4 + 25);
    if ((v7 & 1) != 0) {
      v10 = v9;
    }
    if (*v10 != *(_DWORD*)"True") {
      goto LABEL_37;
    }
    v11 = 1;
  }
  result = GameRoutine_1152500((_QWORD*)(*GameData_212fc38[0] + 608),
                               (unsigned __int8*)v26_.v26);
  if (result == nullptr) {
    goto LABEL_38;
  }
  v18 = result[5];
  if (v18 == 0) {
    goto LABEL_37;
  }
  if ((*(_BYTE*)(v18 + 88) & 1) != 0) {
    result = (_QWORD*)(((_UNKNOWN*)0x0LL) + 3);
    goto LABEL_38;
  }
  v21 = v18 + 32;
  v20 = *(__int64**)(v18 + 32);
  v19 = *(__int64**)(v21 + 8);
  if (v19 == v20) {
  LABEL_37:
    result = nullptr;
    goto LABEL_38;
  }
  if ((v11 & 1) != 0) {
    do {
      v22 = *v20++;
      result = nullptr;
      *(_BYTE*)(v22 + 289) = 1;
    } while (v20 != v19);
  }
  else {
    do {
      v25 = *v20++;
      result = nullptr;
      *(_BYTE*)(v25 + 289) = 0;
    } while (v20 != v19);
  }
LABEL_38:
  if ((v26_.v26[0] & 1) != 0 && v26_.v27 != 0) {
    v23 = (unsigned int)result;
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v24);
    return (__int64*)v23;
  }
  return result;
}

__int64 game_evt_demo_115b820(__int64 a1)
{
  int v2;
  int v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float v12;
  __int64 result;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  _QWORD v17[2];
  __int64 v18;
  _BYTE* v19;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return 0;
    }
  }
  v4 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v17, v4[2], v4[1]);
    v4 = *(__int64**)(a1 + 120);
  }
  else {
    v5 = *v4;
    v6 = v4[2];
    v17[1] = v4[1];
    v18 = v6;
    v17[0] = v5;
  }
  v7 = *((unsigned __int8*)v4 + 24);
  v8 = v4[4];
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v8 != 0) {
    v9 = v4[5];
    v10 = (__int64)v4 + 25;
    v19 = nullptr;
    if ((v7 & 1) != 0) {
      v11 = v9;
    }
    else {
      v11 = v10;
    }
    v12 = strtof(v11, &v19);
    if (*v19 == 0) {
      goto LABEL_24;
    }
    if (*v19 == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v19) != 0) {
        v12 = 0.0f;
      }
    LABEL_24:
      result = GameRoutine_1152500_alt1(*GameData_212fc38[0] + 608, v17);
      if (result != 0) {
        v14 = *(_QWORD*)(result + 40);
        if (v14 == 0) {
          goto LABEL_33;
        }
        if ((*(_BYTE*)(v14 + 88) & 1) != 0) {
          result = 3;
          if ((v17[0] & 1) == 0) {
            return result;
          }
          goto LABEL_34;
        }
        if (*(_QWORD*)(v14 + 40) == *(_QWORD*)(v14 + 32)) {
        LABEL_33:
          result = 0;
          if ((v17[0] & 1) == 0) {
            return result;
          }
          goto LABEL_34;
        }
        result = 0;
        *(float*)(v14 + 80) = v12 + *(float*)(v14 + 80);
      }
      if ((v17[0] & 1) == 0) {
        return result;
      }
    LABEL_34:
      if (v18 != 0) {
        v15 = result;
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v16);
        return v15;
      }
      return result;
    }
  }
  v12 = 0.0f;
  goto LABEL_24;
}

__int64 game_evt_demo_115bba0(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  unsigned __int8 v7;
  __int64 v8;
  _DWORD* v9;
  _DWORD* v10;
  char v11;
  int* v12;
  int* v13;
  int v14;
  int v15;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64 v25;
    unsigned __int64 v26;
    char* v27;
  } v25_;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return 0;
    }
  }
  v4 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(&v25_.v25, *(_QWORD*)(v4 + 16),
                                  *(_QWORD*)(v4 + 8));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)v4;
    v6 = *(char**)(v4 + 16);
    v25_.v26 = *(_QWORD*)(v4 + 8);
    v25_.v27 = v6;
    v25_.v25 = v5;
  }
  v7 = *(_BYTE*)(v4 + 24);
  v8 = *(_QWORD*)(v4 + 32);
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v8 == 5) {
    v12 = *(int**)(v4 + 40);
    v13 = (int*)(v4 + 25);
    if ((v7 & 1) != 0) {
      v13 = v12;
    }
    v14 = *v13;
    v15 = *((unsigned __int8*)v13 + 4);
    if (v14 == *(_DWORD*)"False" &&
        v15 == (unsigned __int8)GameData_1ad767c[4]) {
      v11 = 0;
    LABEL_28:
      if ((v25_.v25 & 1) != 0) {
        v17 = v25_.v27;
      }
      else {
        v17 = (char*)&v25_.v25 + 1;
      }
      if ((v25_.v25 & 1) != 0) {
        v18 = v25_.v26;
      }
      else {
        v18 = (unsigned __int64)(unsigned __int8)v25_.v25 >> 1;
      }
      v19 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                8LL) +
                     64LL);
      if (v19 != 0) {
        v20 = *(_QWORD*)(v19 + 96);
        if (v20 != 0 && *(_DWORD*)(v20 + 240) == 5) {
          v21 = (_QWORD*)(v19 + 120);
          while (1) {
            v21 = (_QWORD*)*v21;
            if (v21 == nullptr) {
              break;
            }
            if (*(_DWORD*)(v21[5] + 240LL) != 5) {
              goto LABEL_43;
            }
          }
          v22 = ObjectBuildCreate_c21360(v19, (__int64)v17, v18);
          if (v22 != 0) {
            *(_BYTE*)(v22 + 289) = v11;
          }
        }
      }
    }
  }
  else if (v8 == 4) {
    v9 = *(_DWORD**)(v4 + 40);
    v10 = (_DWORD*)(v4 + 25);
    if ((v7 & 1) != 0) {
      v10 = v9;
    }
    if (*v10 == *(_DWORD*)"True") {
      v11 = 1;
      goto LABEL_28;
    }
  }
LABEL_43:
  if ((v25_.v25 & 1) != 0 && v25_.v27 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v23);
  }
  return 0;
}

__int64 game_evt_demo_115bd80(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  unsigned __int8 v7;
  __int64 v8;
  _DWORD* v9;
  _DWORD* v10;
  char v11;
  int* v12;
  int* v13;
  int v14;
  int v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  struct {
    __int64 v33;
    __int64 v34;
    char* v35;
  } v33_;
  struct {
    __int16 v36[8];
    __int64 v37;
  } v36_;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return 0;
    }
  }
  v4 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(&v33_.v33, *(_QWORD*)(v4 + 16),
                                  *(_QWORD*)(v4 + 8));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)v4;
    v6 = *(char**)(v4 + 16);
    v33_.v34 = *(_QWORD*)(v4 + 8);
    v33_.v35 = v6;
    v33_.v33 = v5;
  }
  v7 = *(_BYTE*)(v4 + 24);
  v8 = *(_QWORD*)(v4 + 32);
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v8 == 5) {
    v12 = *(int**)(v4 + 40);
    v13 = (int*)(v4 + 25);
    if ((v7 & 1) != 0) {
      v13 = v12;
    }
    v14 = *v13;
    v15 = *((unsigned __int8*)v13 + 4);
    if (v14 != *(_DWORD*)"False" ||
        v15 != (unsigned __int8)GameData_1ad767c[4]) {
      goto LABEL_55;
    }
    v11 = 0;
  }
  else {
    if (v8 != 4) {
      goto LABEL_55;
    }
    v9 = *(_DWORD**)(v4 + 40);
    v10 = (_DWORD*)(v4 + 25);
    if ((v7 & 1) != 0) {
      v10 = v9;
    }
    if (*v10 != *(_DWORD*)"True") {
      goto LABEL_55;
    }
    v11 = 1;
  }
  v17 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 64LL);
  v18 = *(_QWORD*)(v17 + 96);
  if (v18 != 0) {
    v19 = *(_QWORD*)(v18 + 24);
    v20 = *(_QWORD*)(v18 + 32);
    if (v20 == 0) {
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  v36_.v36[0] = 0;
  v27 = GameRoutine_c22420((_QWORD*)(v17 + 104), (unsigned __int8*)v36_.v36);
  if ((v36_.v36[0] & 1) != 0 && v36_.v37 != 0) {
    v28 = v27;
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v29);
    v27 = v28;
  }
  if (v27 == nullptr) {
    goto LABEL_55;
  }
  v30 = v27[5];
  v19 = *(_QWORD*)(v30 + 24);
  v20 = *(_QWORD*)(v30 + 32);
  if (v20 != 0) {
  LABEL_30:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_31:
  if (v19 != 0) {
    v21 = *(__int64**)(v19 + 112);
    v22 = *(__int64**)(v19 + 120);
    if (v21 != v22) {
      if ((v33_.v33 & 1) != 0) {
        v23 = v33_.v35;
      }
      else {
        v23 = (char*)&v33_.v33 + 1;
      }
      if ((v33_.v33 & 1) != 0) {
        v24 = v33_.v34;
      }
      else {
        v24 = (unsigned __int8)v33_.v33 >> 1;
      }
      do {
        v25 = *v21;
        v26 = strlen(*v21 + 16);
        if (v26 == v24) {
          if (v26 == -1) {
            String_60a230();
          }
          if ((unsigned int)memcmp(v23, v25 + 16, v26) == 0) {
            *(_BYTE*)(v25 + 289) = v11;
          }
        }
        ++v21;
      } while (v21 != v22);
    }
  }
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak();
  }
LABEL_55:
  if ((v33_.v33 & 1) != 0 && v33_.v35 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v31);
  }
  return 0;
}

__int64 game_evt_demo_115c1e0(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  long double v16;
  float v17;
  char* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  _QWORD* v30;
  char* v31;
  char* v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  long double v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  __int64 v43;
  _QWORD* v44;
  long double v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  struct {
    __int64 v52;
    unsigned __int64 v53;
    __int64 v54;
  } v52_;
  struct {
    __int64 v55[2];
    __int64 v56;
    char gap56_[8];
    _QWORD* v57;
  } v55_;
  struct {
    __int64 v58;
    unsigned __int64 v59;
    char* v60;
  } v58_;
  _QWORD* v61;
  struct {
    __int64 v62[2];
    char* v63;
  } v62_;
  struct {
    __int64 v64[2];
    char* v65;
  } v64_;
  struct {
    __int64 v66;
    unsigned __int64 v67;
    char* v68;
  } v66_;

  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return 0;
    }
  }
  v4 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(&v66_.v66, *(_QWORD*)(v4 + 16),
                                  *(_QWORD*)(v4 + 8)),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)v4;
    v6 = *(_QWORD*)(v4 + 16);
    v66_.v67 = *(_QWORD*)(v4 + 8);
    v66_.v68 = (char*)v6;
    v66_.v66 = v5;
  }
  if ((*(_BYTE*)(v4 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated(v64_.v64, *(_QWORD*)(v4 + 40),
                                  *(_QWORD*)(v4 + 32)),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v7 = *(_QWORD*)(v4 + 32);
    v8 = *(char**)(v4 + 40);
    v64_.v64[0] = *(_QWORD*)(v4 + 24);
    v64_.v64[1] = v7;
    v64_.v65 = v8;
  }
  if ((*(_BYTE*)(v4 + 48) & 1) != 0) {
    fw_text_String_CopyTerminated(v62_.v62, *(_QWORD*)(v4 + 64),
                                  *(_QWORD*)(v4 + 56)),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v9 = *(_QWORD*)(v4 + 56);
    v10 = *(char**)(v4 + 64);
    v62_.v62[0] = *(_QWORD*)(v4 + 48);
    v62_.v62[1] = v9;
    v62_.v63 = v10;
  }
  v11 = *(unsigned __int8*)(v4 + 72);
  v12 = *(_QWORD*)(v4 + 80);
  if ((v11 & 1) == 0) {
    v12 = v11 >> 1;
  }
  if (v12 == 0) {
  LABEL_29:
    v17 = 0x0.0p+0f;
    goto LABEL_30;
  }
  v13 = *(_QWORD*)(v4 + 88);
  v14 = v4 + 73;
  v55_.v55[0] = 0;
  if ((v11 & 1) != 0) {
    v15 = v13;
  }
  else {
    v15 = v14;
  }
  v16 = strtof_alt2(v15, v55_.v55),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v17 = *(float*)&v16;
  if (*(_BYTE*)v55_.v55[0] != 0) {
    if (*(_BYTE*)v55_.v55[0] == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v55_.v55[0]) != 0) {
        v17 = 0x0.0p+0f;
      }
      goto LABEL_30;
    }
    goto LABEL_29;
  }
LABEL_30:
  if ((v64_.v64[0] & 1) != 0) {
    v18 = v64_.v65;
  }
  else {
    v18 = (char*)v64_.v64 + 1;
  }
  v19 = game_HashString((__int64)v18),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v19 != 0) {
    v20 = *(_QWORD*)(GameData_21c9da8 + 96);
    if (v20 != 0 && *(_QWORD*)(GameData_21c9da8 + 112) != 0) {
      v22 = v20 - 1;
      if ((v20 & (v20 - 1)) != 0) {
        v23 = v19;
        if (v19 >= v20) {
          v23 = v19 % v20;
        }
      }
      else {
        v23 = v22 & v19;
      }
      v24 = *(_QWORD**)(*(_QWORD*)(GameData_21c9da8 + 88) + 8 * v23);
      if (v24 != nullptr) {
        v25 = (_QWORD*)*v24;
        if (v25 != nullptr) {
          if ((v20 & v22) == 0) {
            while (1) {
              v27 = v25[1];
              if (v27 == v19) {
                if (v25[2] == v19) {
                  goto LABEL_58;
                }
              }
              else if ((v27 & v22) != v23) {
                goto LABEL_94;
              }
              v25 = (_QWORD*)*v25;
              if (v25 == nullptr) {
                goto LABEL_94;
              }
            }
          }
          do {
            v26 = v25[1];
            if (v26 == v19) {
              if (v25[2] == v19) {
              LABEL_58:
                if (v25[3] != 0) {
                  v28 = (__int64*)fw_memory_g_heap_manager_ptr;
                  v29 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
                  v30 = (_QWORD*)v29;
                  if ((v66_.v66 & 1) != 0) {
                    v31 = v66_.v68;
                  }
                  else {
                    v31 = (char*)&v66_.v66 + 1;
                  }
                  if ((v64_.v64[0] & 1) != 0) {
                    v32 = v64_.v65;
                  }
                  else {
                    v32 = (char*)v64_.v64 + 1;
                  }
                  if ((v62_.v62[0] & 1) != 0) {
                    v33 = v62_.v63;
                  }
                  else {
                    v33 = (char*)v62_.v62 + 1;
                  }
                  game_11ca9c0(v29, (__int64)v31, (__int64)v32, (__int64)v33),
                      v37 = COERCE_AS(__typeof__(v37),
                                      PSEUDO_REGISTER(__n128, "v0", "=w"));
                  v61 = v30;
                  v34 = GameData_22336e0;
                  if ((v30[3] & 1) != 0) {
                    fw_text_String_CopyTerminated(v55_.v55, v30[5], v30[4]),
                        v37 = COERCE_AS(__typeof__(v37),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
                  }
                  else {
                    v35 = v30[4];
                    v36 = v30[5];
                    v55_.v55[0] = v30[3];
                    v55_.v55[1] = v35;
                    v55_.v56 = v36;
                  }
                  game_evt_demo_1162420((float*)(v34 + 648),
                                        (unsigned __int8*)v55_.v55, v55_.v55,
                                        (__int64*)&v61),
                      v37 = COERCE_AS(__typeof__(v37),
                                      PSEUDO_REGISTER(__n128, "v0", "=w"));
                  if ((v55_.v55[0] & 1) != 0 && v55_.v56 != 0) {
                    v38 = 128;
                    if (*(_QWORD*)(*v28 + 200) == 0) {
                      v38 = 56;
                    }
                    *(__n128*)&v37 =
                        nn_mem_StandardAllocator_Free_alt1(*v28 + v38),
                    v37 = COERCE_AS(__typeof__(v37),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                  }
                  if (v17 <= 0x0.0p+0f) {
                    GameRoutine_11cb1c0((__int64)v30, v37),
                        v37 = COERCE_AS(__typeof__(v37),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
                  }
                  else {
                    if ((v66_.v66 & 1) != 0) {
                      fw_text_String_CopyTerminated(
                          &v58_.v58, (__int64)v66_.v68, v66_.v67),
                          v37 = COERCE_AS(__typeof__(v37),
                                          PSEUDO_REGISTER(__n128, "v0", "=w"));
                    }
                    else {
                      v58_.v58 = v66_.v66;
                      v58_.v59 = v66_.v67;
                      v58_.v60 = v66_.v68;
                    }
                    if ((v58_.v58 & 1) != 0) {
                      fw_text_String_CopyTerminated(
                          &v52_.v52, (__int64)v58_.v60, v58_.v59),
                          v37 = COERCE_AS(__typeof__(v37),
                                          PSEUDO_REGISTER(__n128, "v0", "=w"));
                    }
                    else {
                      v52_.v52 = v58_.v58;
                      v52_.v53 = v58_.v59;
                      v52_.v54 = (__int64)v58_.v60;
                    }
                    v39 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v28, 32,
                                                                       16, 0),
                    v37 = COERCE_AS(__typeof__(v37),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                    v40 = v52_.v52;
                    v41 = v52_.v53;
                    v52_.v52 = 0;
                    v52_.v53 = 0;
                    v42 = v39;
                    v55_.v57 = v39;
                    *v39 = GameData_20138a0;
                    v39[1] = v40;
                    v43 = v52_.v54;
                    v52_.v54 = 0;
                    v39[2] = v41;
                    v39[3] = v43;
                    v44 = (_QWORD*)EveryFrameProc_10aa5e0(
                        game_script_hub_g_frame_counter + 144,
                        (__int64)v55_.v55, v17),
                    v37 = COERCE_AS(__typeof__(v37),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                    *(__n128*)&v45 = GameRoutine_10aa000((__int64)v30, v44),
                    v37 = COERCE_AS(__typeof__(v37),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                    (*(void (**)(_QWORD*, long double))(*v42 + 40LL))(v42, v45),
                        v37 = COERCE_AS(__typeof__(v37),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
                    if ((v52_.v52 & 1) != 0 && v52_.v54 != 0) {
                      v46 = 128;
                      if (*(_QWORD*)(*v28 + 200) == 0) {
                        v46 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v28 + v46),
                          v37 = COERCE_AS(__typeof__(v37),
                                          PSEUDO_REGISTER(__n128, "v0", "=w"));
                    }
                    if ((v58_.v58 & 1) != 0 && v58_.v60 != nullptr) {
                      v47 = 128;
                      if (*(_QWORD*)(*v28 + 200) == 0) {
                        v47 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v28 + v47),
                          v37 = COERCE_AS(__typeof__(v37),
                                          PSEUDO_REGISTER(__n128, "v0", "=w"));
                    }
                  }
                }
                break;
              }
            }
            else {
              if (v26 >= v20) {
                v26 %= v20;
              }
              if (v26 != v23) {
                break;
              }
            }
            v25 = (_QWORD*)*v25;
          } while (v25 != nullptr);
        }
      }
    }
  }
LABEL_94:
  if ((v62_.v62[0] & 1) != 0 && v62_.v63 != nullptr) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v48),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v64_.v64[0] & 1) != 0 && v64_.v65 != nullptr) {
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v49),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v66_.v66 & 1) != 0 && v66_.v68 != nullptr) {
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v50),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  return 0;
}

__int64 game_evt_demo_115c720(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64 v25[2];
    __int64 v26;
  } v25_;

  v1 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated(v25_.v25, v1[2], v1[1]);
  }
  else {
    v2 = *v1;
    v3 = v1[1];
    v4 = v1[2];
    v25_.v25[1] = v3;
    v25_.v26 = v4;
    v25_.v25[0] = v2;
  }
  v5 = GameData_212fc38[0];
  v6 = GameRoutine_11526a0((_QWORD*)(*GameData_212fc38[0] + 648),
                           (unsigned __int8*)v25_.v25);
  if (v6 != nullptr) {
    v7 = v6[5];
    if (v7 != 0) {
      v8 = (_QWORD*)*v5;
      v9 = (_QWORD*)(*v5 + 648);
      v10 = GameRoutine_11526a0(v9, (unsigned __int8*)v25_.v25);
      if (v10 != nullptr) {
        v11 = v8[82];
        v12 = v10[1];
        v13 = v11 - 1;
        if ((v11 & (v11 - 1)) != 0) {
          if (v12 >= v11) {
            v12 %= v11;
          }
        }
        else {
          v12 &= v13;
        }
        v14 = *(__int64**)(*v9 + 8 * v12);
        do {
          v15 = v14;
          v14 = (__int64*)*v14;
        } while (v14 != v10);
        if (v15 == v8 + 83) {
          goto LABEL_24;
        }
        v16 = v15[1];
        if ((v11 & v13) != 0) {
          if (v16 >= v11) {
            v16 %= v11;
          }
        }
        else {
          v16 &= v13;
        }
        if (v16 != v12) {
        LABEL_24:
          if (*v10 == 0) {
            goto LABEL_25;
          }
          v17 = *(_QWORD*)(*v10 + 8);
          if ((v11 & v13) != 0) {
            if (v17 >= v11) {
              v17 %= v11;
            }
          }
          else {
            v17 &= v13;
          }
          if (v17 != v12) {
          LABEL_25:
            *(_QWORD*)(*v9 + 8 * v12) = 0;
          }
        }
        v18 = *v10;
        if (*v10 != 0) {
          v19 = *(_QWORD*)(v18 + 8);
          if ((v11 & v13) != 0) {
            if (v19 >= v11) {
              v19 %= v11;
            }
          }
          else {
            v19 &= v13;
          }
          if (v19 != v12) {
            *(_QWORD*)(*v9 + 8 * v19) = v15;
            v18 = *v10;
          }
        }
        *v15 = v18;
        *v10 = 0;
        --v8[84];
        if ((v10[2] & 1) != 0 && v10[4] != 0) {
          v20 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v20 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v20);
        }
        v21 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v21);
      }
      GameRoutine_11caf60(v7);
      v22 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v22);
    }
  }
  if ((v25_.v25[0] & 1) != 0 && v25_.v26 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v23);
  }
  return 0;
}

__int64 game_evt_demo_115cb40(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  int v3;
  int v4;
  unsigned __int8* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  unsigned __int8* v9;
  long double v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  _QWORD v20[3];

  if ((GameData_21ec7b8 == 0 || (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v4 = (v3 & 8) != 0 ? 2 : 3;
    if ((v4 & v3) == 0) {
      return 0;
    }
  }
  v20[1] = v1;
  v20[2] = v2;
  v5 = *(unsigned __int8**)(a1 + 120);
  v6 = *v5;
  v7 = *((_QWORD*)v5 + 1);
  if ((v6 & 1) == 0) {
    v7 = v6 >> 1;
  }
  if (v7 != 0) {
    v8 = *((unsigned __int8**)v5 + 2);
    v20[0] = 0;
    if ((v6 & 1) != 0) {
      v9 = v8;
    }
    else {
      v9 = v5 + 1;
    }
    v10 = strtof_alt2(v9, v20);
    v11 = *(float*)&v10;
    if (*(_BYTE*)v20[0] == 0) {
      goto LABEL_21;
    }
    if (*(_BYTE*)v20[0] == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v20[0]) != 0) {
        v11 = 0x1.99999a0000000p-1f;
      }
      goto LABEL_21;
    }
  }
  v11 = 0x1.99999a0000000p-1f;
LABEL_21:
  v12 = *(_QWORD*)(game_g_frame_clock + 13224);
  v14 = *(_QWORD*)(v12 + 48);
  v13 = *(_QWORD*)(v12 + 56);
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak();
    }
    v15 = *(_QWORD*)(*(_QWORD*)(v14 + 8) + 304LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    v15 = *(_QWORD*)(*(_QWORD*)(v14 + 8) + 304LL);
  }
  v16 = *(__int64**)(v15 + 32);
  v17 = *(__int64**)(v15 + 40);
  while (v16 != v17) {
    v18 = *v16++;
    (*(void (**)(__int64))(*(_QWORD*)v18 + 72LL))(v18);
  }
  *(float*)(v15 + 172) = v11;
  *(_BYTE*)(v15 + 176) = 1;
  return 0;
}

__int64 game_evt_demo_115cda0(__int64 a1, double a2, double a3, long double a4)
{
  int v5;
  int v6;
  unsigned __int8* v7;
  float v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int8* v12;
  float v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int8* v16;
  unsigned __int8* v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int8* v21;
  unsigned __int8* v22;
  unsigned __int8* v23;
  _BYTE* v25;

  if (*GameData_212d460[0] != 0 &&
          (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) != 0 ||
      game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v6 = 2)
           : (v6 = 3),
       (v6 & v5) != 0)) {
    v7 = *(unsigned __int8**)(a1 + 120);
    v8 = 0.0;
    v9 = *v7;
    v10 = *((_QWORD*)v7 + 1);
    if ((v9 & 1) == 0) {
      v10 = v9 >> 1;
    }
    if (v10 != 0) {
      v11 = *((unsigned __int8**)v7 + 2);
      v25 = nullptr;
      if ((v9 & 1) != 0) {
        v12 = v11;
      }
      else {
        v12 = v7 + 1;
      }
      v13 = strtof(v12, &v25);
      if (*v25 != 0) {
        if (*v25 == 102) {
          if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v25) != 0) {
            v13 = 0.0;
          }
        }
        else {
          v13 = 0.0;
        }
      }
      v7 = *(unsigned __int8**)(a1 + 120);
    }
    else {
      v13 = 0.0;
    }
    v14 = v7[24];
    v15 = *((_QWORD*)v7 + 4);
    if ((v14 & 1) == 0) {
      v15 = v14 >> 1;
    }
    if (v15 != 0) {
      v16 = *((unsigned __int8**)v7 + 5);
      v17 = v7 + 25;
      v25 = nullptr;
      if ((v14 & 1) != 0) {
        v18 = v16;
      }
      else {
        v18 = v17;
      }
      v8 = strtof(v18, &v25);
      if (*v25 != 0) {
        if (*v25 == 102) {
          if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v25) != 0) {
            v8 = 0.0;
          }
        }
        else {
          v8 = 0.0;
        }
      }
      v7 = *(unsigned __int8**)(a1 + 120);
    }
    v19 = v7[48];
    v20 = *((_QWORD*)v7 + 7);
    if ((v19 & 1) == 0) {
      v20 = v19 >> 1;
    }
    if (v20 == 0) {
      goto LABEL_47;
    }
    v21 = *((unsigned __int8**)v7 + 8);
    v22 = v7 + 49;
    v25 = nullptr;
    if ((v19 & 1) != 0) {
      v23 = v21;
    }
    else {
      v23 = v22;
    }
    LODWORD(a4) = strtof(v23, &v25);
    if (*v25 != 0) {
      if (*v25 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v25) != 0) {
          *(float*)&a4 = 0.0;
        }
      }
      else {
      LABEL_47:
        *(_QWORD*)&a4 = 0;
      }
    }
    Seq_114d7c0(*GameData_212fc38[0], 1, v13, v8, a4);
  }
  return 0;
}

__int64 game_evt_demo_115d0b0(__int64 a1, double a2, long double a3)
{
  int v4;
  int v5;
  unsigned __int8* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int8* v10;
  float v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int8* v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  _BYTE* v18;

  if (*GameData_212d460[0] != 0 &&
          (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) != 0 ||
      game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v5 = 2)
           : (v5 = 3),
       (v5 & v4) != 0)) {
    v6 = *(unsigned __int8**)(a1 + 120);
    v7 = *v6;
    v8 = *((_QWORD*)v6 + 1);
    if ((v7 & 1) == 0) {
      v8 = v7 >> 1;
    }
    if (v8 != 0) {
      v9 = *((unsigned __int8**)v6 + 2);
      v18 = nullptr;
      if ((v7 & 1) != 0) {
        v10 = v9;
      }
      else {
        v10 = v6 + 1;
      }
      v11 = strtof(v10, &v18);
      if (*v18 != 0) {
        if (*v18 == 102) {
          if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v18) != 0) {
            v11 = 0.0;
          }
        }
        else {
          v11 = 0.0;
        }
      }
      v6 = *(unsigned __int8**)(a1 + 120);
    }
    else {
      v11 = 0.0;
    }
    v12 = v6[24];
    v13 = *((_QWORD*)v6 + 4);
    if ((v12 & 1) == 0) {
      v13 = v12 >> 1;
    }
    if (v13 == 0) {
      goto LABEL_34;
    }
    v14 = *((unsigned __int8**)v6 + 5);
    v15 = v6 + 25;
    v18 = nullptr;
    if ((v12 & 1) != 0) {
      v16 = v14;
    }
    else {
      v16 = v15;
    }
    LODWORD(a3) = strtof(v16, &v18);
    if (*v18 != 0) {
      if (*v18 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v18) != 0) {
          *(float*)&a3 = 1.0;
        }
      }
      else {
      LABEL_34:
        LODWORD(a3) = 1.0;
      }
    }
    Seq_114d960(*GameData_212fc38[0], 1, v11, a3);
  }
  return 0;
}

__int64 game_evt_demo_115db10(__int64 a1, double a2, double a3, long double a4)
{
  int v5;
  int v6;
  unsigned __int8* v7;
  float v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int8* v12;
  float v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int8* v16;
  unsigned __int8* v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int8* v21;
  unsigned __int8* v22;
  unsigned __int8* v23;
  _BYTE* v25;

  if (*GameData_212d460[0] != 0 &&
          (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) != 0 ||
      game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v6 = 2)
           : (v6 = 3),
       (v6 & v5) != 0)) {
    v7 = *(unsigned __int8**)(a1 + 120);
    v8 = 0.0;
    v9 = *v7;
    v10 = *((_QWORD*)v7 + 1);
    if ((v9 & 1) == 0) {
      v10 = v9 >> 1;
    }
    if (v10 != 0) {
      v11 = *((unsigned __int8**)v7 + 2);
      v25 = nullptr;
      if ((v9 & 1) != 0) {
        v12 = v11;
      }
      else {
        v12 = v7 + 1;
      }
      v13 = strtof(v12, &v25);
      if (*v25 != 0) {
        if (*v25 == 102) {
          if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v25) != 0) {
            v13 = 0.0;
          }
        }
        else {
          v13 = 0.0;
        }
      }
      v7 = *(unsigned __int8**)(a1 + 120);
    }
    else {
      v13 = 0.0;
    }
    v14 = v7[24];
    v15 = *((_QWORD*)v7 + 4);
    if ((v14 & 1) == 0) {
      v15 = v14 >> 1;
    }
    if (v15 != 0) {
      v16 = *((unsigned __int8**)v7 + 5);
      v17 = v7 + 25;
      v25 = nullptr;
      if ((v14 & 1) != 0) {
        v18 = v16;
      }
      else {
        v18 = v17;
      }
      v8 = strtof(v18, &v25);
      if (*v25 != 0) {
        if (*v25 == 102) {
          if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v25) != 0) {
            v8 = 0.0;
          }
        }
        else {
          v8 = 0.0;
        }
      }
      v7 = *(unsigned __int8**)(a1 + 120);
    }
    v19 = v7[48];
    v20 = *((_QWORD*)v7 + 7);
    if ((v19 & 1) == 0) {
      v20 = v19 >> 1;
    }
    if (v20 == 0) {
      goto LABEL_47;
    }
    v21 = *((unsigned __int8**)v7 + 8);
    v22 = v7 + 49;
    v25 = nullptr;
    if ((v19 & 1) != 0) {
      v23 = v21;
    }
    else {
      v23 = v22;
    }
    LODWORD(a4) = strtof(v23, &v25);
    if (*v25 != 0) {
      if (*v25 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v25) != 0) {
          *(float*)&a4 = 0.0;
        }
      }
      else {
      LABEL_47:
        *(_QWORD*)&a4 = 0;
      }
    }
    Seq_114dc80(*GameData_212fc38[0], 1, v13, v8, a4);
  }
  return 0;
}

__int64 game_evt_demo_115e3b0(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  unsigned __int8* v4;
  float v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  unsigned __int8* v9;
  long double v10;
  float v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int8* v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  long double v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int8* v20;
  unsigned __int8* v21;
  unsigned __int8* v22;
  long double v23;
  float v24;
  float v25;
  float v26;
  float v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  long double v34;
  float v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  long double v41;
  float v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int128 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  long double v49;
  float v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  float v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  long double v57;
  float v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  long double v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  long double v70;
  float v71;
  float v73;
  float v74;
  float v75;
  __int128 v76;
  __int128 v77;
  __int128 v78;
  _BYTE* v79;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return 0;
    }
  }
  v4 = *(unsigned __int8**)(a1 + 120);
  v5 = 0x0.0p+0f;
  v6 = *v4;
  v7 = *((_QWORD*)v4 + 1);
  if ((v6 & 1) == 0) {
    v7 = v6 >> 1;
  }
  if (v7 != 0) {
    v8 = *((unsigned __int8**)v4 + 2);
    v79 = nullptr;
    if ((v6 & 1) != 0) {
      v9 = v8;
    }
    else {
      v9 = v4 + 1;
    }
    v10 = strtof_alt2(v9, &v79);
    v11 = *(float*)&v10;
    if (*v79 != 0) {
      if (*v79 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v79) != 0) {
          v11 = 0x0.0p+0f;
        }
      }
      else {
        v11 = 0x0.0p+0f;
      }
    }
    v4 = *(unsigned __int8**)(a1 + 120);
  }
  else {
    v11 = 0x0.0p+0f;
  }
  v12 = v4[24];
  v13 = *((_QWORD*)v4 + 4);
  if ((v12 & 1) == 0) {
    v13 = v12 >> 1;
  }
  if (v13 != 0) {
    v14 = *((unsigned __int8**)v4 + 5);
    v15 = v4 + 25;
    v79 = nullptr;
    if ((v12 & 1) != 0) {
      v16 = v14;
    }
    else {
      v16 = v15;
    }
    v17 = strtof_alt2(v16, &v79);
    v5 = *(float*)&v17;
    if (*v79 != 0) {
      if (*v79 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v79) != 0) {
          v5 = 0x0.0p+0f;
        }
      }
      else {
        v5 = 0x0.0p+0f;
      }
    }
    v4 = *(unsigned __int8**)(a1 + 120);
  }
  v18 = v4[48];
  v19 = *((_QWORD*)v4 + 7);
  if ((v18 & 1) == 0) {
    v19 = v18 >> 1;
  }
  if (v19 != 0) {
    v20 = *((unsigned __int8**)v4 + 8);
    v21 = v4 + 49;
    v79 = nullptr;
    if ((v18 & 1) != 0) {
      v22 = v20;
    }
    else {
      v22 = v21;
    }
    v23 = strtof_alt2(v22, &v79);
    v24 = *(float*)&v23;
    if (*v79 == 0) {
      goto LABEL_48;
    }
    if (*v79 == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v79) != 0) {
        v24 = 0x0.0p+0f;
      }
      goto LABEL_48;
    }
  }
  v24 = 0x0.0p+0f;
LABEL_48:
  if (v11 <= 0x1.4b5dcc0000000p-5f) {
    v25 = v11 / 0x1.9d70a40000000p+3f;
  }
  else {
    v25 = powf(a1, (float)(v11 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
               0x1.3333340000000p+1f);
  }
  v75 = v25;
  if (v5 <= 0x1.4b5dcc0000000p-5f) {
    v26 = v5 / 0x1.9d70a40000000p+3f;
  }
  else {
    v26 = powf(a1, (float)(v5 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
               0x1.3333340000000p+1f);
  }
  v73 = v26;
  if (v24 <= 0x1.4b5dcc0000000p-5f) {
    v27 = v24 / 0x1.9d70a40000000p+3f;
  }
  else {
    v27 = powf(a1, (float)(v24 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
               0x1.3333340000000p+1f);
  }
  v28 = *(_QWORD*)(a1 + 120);
  v74 = v27;
  v29 = *(unsigned __int8*)(v28 + 72);
  v30 = *(_QWORD*)(v28 + 80);
  if ((v29 & 1) == 0) {
    v30 = v29 >> 1;
  }
  if (v30 != 0) {
    v31 = *(_QWORD*)(v28 + 88);
    v32 = v28 + 73;
    v79 = nullptr;
    if ((v29 & 1) != 0) {
      v33 = v31;
    }
    else {
      v33 = v32;
    }
    v34 = strtof_alt2(v33, &v79);
    v35 = *(float*)&v34;
    if (*v79 != 0) {
      if (*v79 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v79) != 0) {
          v35 = 0x1.0000000000000p+0f;
        }
      }
      else {
        v35 = 0x1.0000000000000p+0f;
      }
    }
    v28 = *(_QWORD*)(a1 + 120);
  }
  else {
    v35 = 0x1.0000000000000p+0f;
  }
  v36 = *(unsigned __int8*)(v28 + 96);
  v37 = *(_QWORD*)(v28 + 104);
  if ((v36 & 1) == 0) {
    v37 = v36 >> 1;
  }
  if (v37 != 0) {
    v38 = *(_QWORD*)(v28 + 112);
    v39 = v28 + 97;
    v79 = nullptr;
    if ((v36 & 1) != 0) {
      v40 = v38;
    }
    else {
      v40 = v39;
    }
    v41 = strtof_alt2(v40, &v79);
    v42 = *(float*)&v41;
    if (*v79 != 0) {
      if (*v79 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v79) != 0) {
          v42 = 0x1.47ae140000000p-7f;
        }
      }
      else {
        v42 = 0x1.47ae140000000p-7f;
      }
    }
    v28 = *(_QWORD*)(a1 + 120);
  }
  else {
    v42 = 0x1.47ae140000000p-7f;
  }
  v43 = *(unsigned __int8*)(v28 + 120);
  v44 = *(_QWORD*)(v28 + 128);
  *((_QWORD*)&v45 + 1) = 0;
  if ((v43 & 1) == 0) {
    v44 = v43 >> 1;
  }
  if (v44 != 0) {
    v46 = *(_QWORD*)(v28 + 136);
    v47 = v28 + 121;
    v79 = nullptr;
    if ((v43 & 1) != 0) {
      v48 = v46;
    }
    else {
      v48 = v47;
    }
    v49 = strtof_alt2(v48, &v79);
    v50 = *(float*)&v49;
    if (*v79 != 0) {
      if (*v79 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v79) != 0) {
          v50 = 0x1.0000000000000p+0f;
        }
      }
      else {
        v50 = 0x1.0000000000000p+0f;
      }
    }
    *((_QWORD*)&v45 + 1) = 0;
    v28 = *(_QWORD*)(a1 + 120);
  }
  else {
    v50 = 0x1.0000000000000p+0f;
  }
  v51 = *(unsigned __int8*)(v28 + 144);
  v52 = *(_QWORD*)(v28 + 152);
  v53 = 0x1.0000000000000p-1f;
  *(float*)&v45 = v75;
  if ((v51 & 1) == 0) {
    v52 = v51 >> 1;
  }
  if (v52 != 0) {
    v54 = *(_QWORD*)(v28 + 160);
    v55 = v28 + 145;
    v79 = nullptr;
    if ((v51 & 1) != 0) {
      v56 = v54;
    }
    else {
      v56 = v55;
    }
    v57 = strtof_alt2(v56, &v79);
    v58 = *(float*)&v57;
    if (*v79 != 0) {
      if (*v79 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v79) != 0) {
          v58 = 0x1.0000000000000p-1f;
        }
      }
      else {
        v58 = 0x1.0000000000000p-1f;
      }
    }
    v45 = LODWORD(v75);
    v28 = *(_QWORD*)(a1 + 120);
  }
  else {
    v58 = 0x1.0000000000000p-1f;
  }
  v59 = *(unsigned __int8*)(v28 + 168);
  v60 = *(_QWORD*)(v28 + 176);
  *((float*)&v45 + 1) = v73;
  if ((v59 & 1) == 0) {
    v60 = v59 >> 1;
  }
  if (v60 != 0) {
    v61 = *(_QWORD*)(v28 + 184);
    v62 = v28 + 169;
    v76 = v45;
    v79 = nullptr;
    if ((v59 & 1) != 0) {
      v63 = v61;
    }
    else {
      v63 = v62;
    }
    v64 = strtof_alt2(v63, &v79);
    v53 = *(float*)&v64;
    if (*v79 != 0) {
      if (*v79 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v79) != 0) {
          v53 = 0x1.0000000000000p-1f;
        }
      }
      else {
        v53 = 0x1.0000000000000p-1f;
      }
    }
    v45 = v76;
    v28 = *(_QWORD*)(a1 + 120);
  }
  v65 = *(unsigned __int8*)(v28 + 192);
  v66 = *(_QWORD*)(v28 + 200);
  *((float*)&v45 + 2) = v74;
  if ((v65 & 1) == 0) {
    v66 = v65 >> 1;
  }
  if (v66 != 0) {
    v67 = *(_QWORD*)(v28 + 208);
    v68 = v28 + 193;
    v77 = v45;
    v79 = nullptr;
    if ((v65 & 1) != 0) {
      v69 = v67;
    }
    else {
      v69 = v68;
    }
    v70 = strtof_alt2(v69, &v79);
    v71 = *(float*)&v70;
    if (*v79 != 0) {
      if (*v79 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v79) != 0) {
          v71 = 0x0.0p+0f;
        }
      }
      else {
        v71 = 0x0.0p+0f;
      }
    }
    v45 = v77;
  }
  else {
    v71 = 0x0.0p+0f;
  }
  v78 = v45;
  Seq_114df40(v35, v42, v50, v58, v53, v71, *GameData_212fc38[0], 1, &v78);
  return 0;
}

__int64 game_evt_demo_115eb00(__int64 a1)
{
  int v3;
  int v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  char* v9;
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
  __int64 v21;
  struct {
    __int64 v23[2];
    char* v24;
  } v23_;

  if (GameData_21ec7b8 != 0 && (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) != 0 ||
      game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v4 = 2)
           : (v4 = 3),
       (v4 & v3) != 0)) {
    v5 = *(__int64**)(a1 + 120);
    if ((*(_BYTE*)v5 & 1) != 0) {
      fw_text_String_CopyTerminated(v23_.v23, v5[2], v5[1]);
    }
    else {
      v6 = *v5;
      v7 = v5[1];
      v8 = (char*)v5[2];
      v23_.v23[1] = v7;
      v23_.v24 = v8;
      v23_.v23[0] = v6;
    }
    if ((v23_.v23[0] & 1) != 0) {
      v9 = v23_.v24;
    }
    else {
      v9 = (char*)v23_.v23 + 1;
    }
    v10 = game_HashString((__int64)v9);
    if (v10 != 0) {
      v11 = *(_QWORD*)(GameData_21c9dc0 + 96);
      if (v11 != 0 && *(_QWORD*)(GameData_21c9dc0 + 112) != 0) {
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
        v15 = *(_QWORD**)(*(_QWORD*)(GameData_21c9dc0 + 88) + 8 * v14);
        if (v15 != nullptr) {
          v16 = (_QWORD*)*v15;
          if (v16 != nullptr) {
            if ((v11 & v13) == 0) {
              while (1) {
                v18 = v16[1];
                if (v18 == v10) {
                  if (v16[2] == v10) {
                    goto LABEL_40;
                  }
                }
                else if ((v18 & v13) != v14) {
                  goto LABEL_43;
                }
                v16 = (_QWORD*)*v16;
                if (v16 == nullptr) {
                  goto LABEL_43;
                }
              }
            }
            do {
              v17 = v16[1];
              if (v17 == v10) {
                if (v16[2] == v10) {
                LABEL_40:
                  v19 = v16[3];
                  if (v19 != 0) {
                    v20 = *(_QWORD*)(GameData_22336e0 + 688);
                    if (v20 != 0) {
                      GameRoutine_19378a0(v20, 1, v19);
                    }
                  }
                  break;
                }
              }
              else {
                if (v17 >= v11) {
                  v17 %= v11;
                }
                if (v17 != v14) {
                  break;
                }
              }
              v16 = (_QWORD*)*v16;
            } while (v16 != nullptr);
          }
        }
      }
    }
  LABEL_43:
    if ((v23_.v23[0] & 1) != 0 && v23_.v24 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
    }
  }
  return 0;
}

__int64 game_evt_demo_115ee20(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  char* v4;
  char* v5;
  __int64 v6;
  struct {
    __int64 v8[2];
    char* v9;
  } v8_;

  v1 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated(v8_.v8, v1[2], v1[1]);
  }
  else {
    v2 = *v1;
    v3 = v1[1];
    v4 = (char*)v1[2];
    v8_.v8[1] = v3;
    v8_.v9 = v4;
    v8_.v8[0] = v2;
  }
  if (GameData_22336e0 != 0) {
    if ((v8_.v8[0] & 1) != 0) {
      v5 = v8_.v9;
    }
    else {
      v5 = (char*)v8_.v8 + 1;
    }
    GameRoutine_60a020_alt1(GameData_22336e0 + 504, (__int64)v5);
  }
  if ((v8_.v8[0] & 1) != 0 && v8_.v9 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v6);
  }
  return 0;
}

__int64 game_evt_demo_115eed0(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  char* v4;
  char* v5;
  __int64 v6;
  struct {
    __int64 v8[2];
    char* v9;
  } v8_;

  v1 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated(v8_.v8, v1[2], v1[1]);
  }
  else {
    v2 = *v1;
    v3 = v1[1];
    v4 = (char*)v1[2];
    v8_.v8[1] = v3;
    v8_.v9 = v4;
    v8_.v8[0] = v2;
  }
  if (GameData_22336e0 != 0) {
    if ((v8_.v8[0] & 1) != 0) {
      v5 = v8_.v9;
    }
    else {
      v5 = (char*)v8_.v8 + 1;
    }
    GameRoutine_60a020_alt1(GameData_22336e0 + 528, (__int64)v5);
  }
  if ((v8_.v8[0] & 1) != 0 && v8_.v9 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v6);
  }
  return 0;
}

__int64 game_evt_demo_115ef80(__int64 a1)
{
  int v2;
  int v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  unsigned __int8* v8;
  __int16 v9;
  __int16 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned __int8* v14;
  unsigned __int8* v15;
  __int16 v16;
  __int16 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int8* v20;
  unsigned __int8* v21;
  unsigned __int8* v22;
  __int16 v23;
  __int16 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  bool v28;
  int v29;
  __int64 v30;
  _WORD v32[5];
  __int16 v33;

  if (*GameData_212d460[0] != 0 &&
          (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) != 0 ||
      game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v3 = 2)
           : (v3 = 3),
       (v3 & v2) != 0)) {
    v4 = *(unsigned __int8**)(a1 + 120);
    v5 = *v4;
    v6 = *((_QWORD*)v4 + 1);
    if ((v5 & 1) == 0) {
      v6 = v5 >> 1;
    }
    if (v6 != 0) {
      v7 = *((unsigned __int8**)v4 + 2);
      *(_QWORD*)v32 = 0;
      if ((v5 & 1) != 0) {
        v8 = v7;
      }
      else {
        v8 = v4 + 1;
      }
      v9 = strtol(v8, v32, 0);
      v4 = *(unsigned __int8**)(a1 + 120);
      if (**(_BYTE**)v32 != 0) {
        v10 = 0;
      }
      else {
        v10 = v9;
      }
    }
    else {
      v10 = 0;
    }
    v11 = v4[24];
    v12 = *((_QWORD*)v4 + 4);
    if ((v11 & 1) == 0) {
      v12 = v11 >> 1;
    }
    if (v12 != 0) {
      v13 = *((unsigned __int8**)v4 + 5);
      v14 = v4 + 25;
      *(_QWORD*)v32 = 0;
      if ((v11 & 1) != 0) {
        v15 = v13;
      }
      else {
        v15 = v14;
      }
      v16 = strtol(v15, v32, 0);
      v4 = *(unsigned __int8**)(a1 + 120);
      if (**(_BYTE**)v32 != 0) {
        v17 = 0;
      }
      else {
        v17 = v16;
      }
    }
    else {
      v17 = 0;
    }
    v18 = v4[48];
    v19 = *((_QWORD*)v4 + 7);
    if ((v18 & 1) == 0) {
      v19 = v18 >> 1;
    }
    if (v19 != 0) {
      v20 = *((unsigned __int8**)v4 + 8);
      v21 = v4 + 49;
      *(_QWORD*)v32 = 0;
      v22 = (v18 & 1) != 0 ? v20 : v21;
      v23 = strtol(v22, v32, 0);
      v24 = **(_BYTE**)v32 != 0 ? 0 : v23;
    }
    else {
      v24 = 0;
    }
    v25 = GameData_22336e0;
    if (GameData_22336e0 != 0) {
      if (*(_BYTE*)(GameData_22336e0 + 268) != 1) {
      LABEL_49:
        v32[0] = v10;
        v32[1] = v17;
        v32[2] = v24;
        *(_DWORD*)&v32[3] = 0;
        v33 = 0;
        GameRoutine_175ef80(v25, v32);
        return 0;
      }
      v26 = GameData_21f8018;
      if (GameData_21f8018 != 0) {
        v27 = *(_DWORD*)(GameData_21f8018 + 160);
        v28 = __OFSUB__(v27, 1);
        v29 = v27 - 1;
        if (v29 < 0 != v28) {
          if ((*(_WORD*)(GameData_21f8018 + 136) & 1) == 0) {
            v30 = GameData_22336e0;
            ProcInst_657a50(GameData_21f8018, 1);
            goto LABEL_47;
          }
        }
        else {
          *(_DWORD*)(GameData_21f8018 + 160) = v29;
          if (v29 == 0) {
            v30 = v25;
            (*(void (**)(__int64))(*(_QWORD*)(v26 + 152) + 8LL))(v26 + 152);
          LABEL_47:
            v25 = v30;
          }
        }
      }
      *(_BYTE*)(v25 + 268) = 0;
      goto LABEL_49;
    }
  }
  return 0;
}

__int64 game_evt_demo_115f1b0(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  char* v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  __int64 v11;
  long double v12;
  int v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  _QWORD v18[2];
  char* v19;
  __int64 v20;
  int v21;
  _QWORD v22[2];

  v1 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v18, v1[2], v1[1]);
    v1 = *(__int64**)(a1 + 120);
  }
  else {
    v2 = *v1;
    v3 = (char*)v1[2];
    v18[1] = v1[1];
    v19 = v3;
    v18[0] = v2;
  }
  v5 = *((unsigned __int8*)v1 + 24);
  v6 = v1[4];
  if ((v5 & 1) == 0) {
    v6 = v5 >> 1;
  }
  if (v6 != 0) {
    v7 = v1[5];
    v8 = (__int64)v1 + 25;
    v22[0] = 0;
    if ((v5 & 1) != 0) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    v10 = strtof(v9, v22);
    if (*(_BYTE*)v22[0] == 0) {
      goto LABEL_16;
    }
    if (*(_BYTE*)v22[0] == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v22[0]) != 0) {
        v10 = 0.0;
      }
    LABEL_16:
      v11 = GameRoutine_113c310(v18);
      *(float*)&v12 = v10;
      v13 = v11;
      if ((v18[0] & 1) != 0) {
        v14 = v19;
      }
      else {
        v14 = (char*)v18 + 1;
      }
      game_810a70(v11, v14, v12);
      if (v13 == 2) {
        v20 = 0;
        v15 = *GameData_212d460[0];
        v21 = 0x2000;
        GameRoutine_112180(&v20, v22);
        Seq_1134ae0(v15, (__int64)&v20);
      }
      if ((v18[0] & 1) != 0 && v19 != nullptr) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v16);
      }
      return 0;
    }
  }
  v10 = 0.0;
  goto LABEL_16;
}

__int64 game_evt_demo_115f320(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  char* v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  long double v10;
  char* v11;
  __int64 v12;
  struct {
    __int64 v14[2];
    char* v15;
  } v14_;
  _BYTE* v16;

  v1 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated(v14_.v14, *(_QWORD*)(v1 + 16),
                                  *(_QWORD*)(v1 + 8));
    v1 = *(_QWORD*)(a1 + 120);
  }
  else {
    v2 = *(_QWORD*)v1;
    v3 = *(char**)(v1 + 16);
    v14_.v14[1] = *(_QWORD*)(v1 + 8);
    v14_.v15 = v3;
    v14_.v14[0] = v2;
  }
  v5 = *(unsigned __int8*)(v1 + 24);
  v6 = *(_QWORD*)(v1 + 32);
  if ((v5 & 1) == 0) {
    v6 = v5 >> 1;
  }
  if (v6 != 0) {
    v7 = *(_QWORD*)(v1 + 40);
    v8 = v1 + 25;
    v16 = nullptr;
    if ((v5 & 1) != 0) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    v10 = strtof_alt2(v9, &v16);
    if (*v16 == 0) {
      goto LABEL_16;
    }
    if (*v16 == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v16) != 0) {
        *(float*)&v10 = 0x0.0p+0f;
      }
    LABEL_16:
      if ((v14_.v14[0] & 1) != 0) {
        v11 = v14_.v15;
      }
      else {
        v11 = (char*)v14_.v14 + 1;
      }
      game_810d20((__int64)v11, *(float*)&v10);
      if ((v14_.v14[0] & 1) != 0 && v14_.v15 != nullptr) {
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
      }
      return 0;
    }
  }
  LODWORD(v10) = 0;
  goto LABEL_16;
}

__int64 game_evt_demo_115f430(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  char* v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  long double v10;
  float v11;
  char* v12;
  __int64 v13;
  struct {
    __int64 v15[2];
    char* v16;
  } v15_;
  _QWORD v17[25];
  __int64 v18;

  v1 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated(v15_.v15, *(_QWORD*)(v1 + 16),
                                  *(_QWORD*)(v1 + 8));
    v1 = *(_QWORD*)(a1 + 120);
  }
  else {
    v2 = *(_QWORD*)v1;
    v3 = *(char**)(v1 + 16);
    v15_.v15[1] = *(_QWORD*)(v1 + 8);
    v15_.v16 = v3;
    v15_.v15[0] = v2;
  }
  v5 = *(unsigned __int8*)(v1 + 24);
  v6 = *(_QWORD*)(v1 + 32);
  if ((v5 & 1) == 0) {
    v6 = v5 >> 1;
  }
  if (v6 != 0) {
    v7 = *(_QWORD*)(v1 + 40);
    v8 = v1 + 25;
    v17[0] = 0;
    if ((v5 & 1) != 0) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    v10 = strtof_alt2(v9, v17);
    v11 = *(float*)&v10;
    if (*(_BYTE*)v17[0] == 0) {
      goto LABEL_16;
    }
    if (*(_BYTE*)v17[0] == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v17[0]) != 0) {
        v11 = 0x0.0p+0f;
      }
    LABEL_16:
      if ((v15_.v15[0] & 1) != 0) {
        v12 = v15_.v16;
      }
      else {
        v12 = (char*)v15_.v15 + 1;
      }
      snd_findSound((__int64)v12);
      snd_Fade_Fade_10c830((__int64)v17, v11);
      snd_mute(&v18, (__int64)v17);
      snd_Fade_Destroy_Fade(v17);
      if ((v15_.v15[0] & 1) != 0 && v15_.v16 != nullptr) {
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
      }
      return 0;
    }
  }
  v11 = 0x0.0p+0f;
  goto LABEL_16;
}

__int64 game_evt_demo_115f570(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  char* v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  long double v10;
  float v11;
  char* v12;
  __int64 v13;
  struct {
    __int64 v15[2];
    char* v16;
  } v15_;
  _QWORD v17[25];
  __int64 v18;

  v1 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated(v15_.v15, *(_QWORD*)(v1 + 16),
                                  *(_QWORD*)(v1 + 8));
    v1 = *(_QWORD*)(a1 + 120);
  }
  else {
    v2 = *(_QWORD*)v1;
    v3 = *(char**)(v1 + 16);
    v15_.v15[1] = *(_QWORD*)(v1 + 8);
    v15_.v16 = v3;
    v15_.v15[0] = v2;
  }
  v5 = *(unsigned __int8*)(v1 + 24);
  v6 = *(_QWORD*)(v1 + 32);
  if ((v5 & 1) == 0) {
    v6 = v5 >> 1;
  }
  if (v6 != 0) {
    v7 = *(_QWORD*)(v1 + 40);
    v8 = v1 + 25;
    v17[0] = 0;
    if ((v5 & 1) != 0) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    v10 = strtof_alt2(v9, v17);
    v11 = *(float*)&v10;
    if (*(_BYTE*)v17[0] == 0) {
      goto LABEL_16;
    }
    if (*(_BYTE*)v17[0] == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v17[0]) != 0) {
        v11 = 0x0.0p+0f;
      }
    LABEL_16:
      if ((v15_.v15[0] & 1) != 0) {
        v12 = v15_.v16;
      }
      else {
        v12 = (char*)v15_.v15 + 1;
      }
      snd_findSound((__int64)v12);
      snd_Fade_Fade_10c830((__int64)v17, v11);
      snd_resumeMute(&v18, (__int64)v17);
      snd_Fade_Destroy_Fade(v17);
      if ((v15_.v15[0] & 1) != 0 && v15_.v16 != nullptr) {
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
      }
      return 0;
    }
  }
  v11 = 0x0.0p+0f;
  goto LABEL_16;
}

__int64 game_evt_demo_115f6b0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  long double v10;
  float v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  long double v17;
  float v18;
  char* v19;
  __int64 v20;
  struct {
    __int64 v22[2];
    char* v23;
  } v22_;
  _QWORD v24[25];
  __int64 v25;

  v1 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated(v22_.v22, *(_QWORD*)(v1 + 16),
                                  *(_QWORD*)(v1 + 8));
    v1 = *(_QWORD*)(a1 + 120);
  }
  else {
    v3 = *(_QWORD*)v1;
    v4 = *(char**)(v1 + 16);
    v22_.v22[1] = *(_QWORD*)(v1 + 8);
    v22_.v23 = v4;
    v22_.v22[0] = v3;
  }
  v5 = *(unsigned __int8*)(v1 + 24);
  v6 = *(_QWORD*)(v1 + 32);
  if ((v5 & 1) == 0) {
    v6 = v5 >> 1;
  }
  if (v6 != 0) {
    v7 = *(_QWORD*)(v1 + 40);
    v8 = v1 + 25;
    v24[0] = 0;
    if ((v5 & 1) != 0) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    v10 = strtof_alt2(v9, v24);
    v11 = *(float*)&v10;
    if (*(_BYTE*)v24[0] != 0) {
      if (*(_BYTE*)v24[0] == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v24[0]) != 0) {
          v11 = 0x1.0000000000000p+0f;
        }
      }
      else {
        v11 = 0x1.0000000000000p+0f;
      }
    }
    v1 = *(_QWORD*)(a1 + 120);
  }
  else {
    v11 = 0x1.0000000000000p+0f;
  }
  v12 = *(unsigned __int8*)(v1 + 48);
  v13 = *(_QWORD*)(v1 + 56);
  if ((v12 & 1) == 0) {
    v13 = v12 >> 1;
  }
  if (v13 != 0) {
    v14 = *(_QWORD*)(v1 + 64);
    v15 = v1 + 49;
    v24[0] = 0;
    if ((v12 & 1) != 0) {
      v16 = v14;
    }
    else {
      v16 = v15;
    }
    v17 = strtof_alt2(v16, v24);
    v18 = *(float*)&v17;
    if (*(_BYTE*)v24[0] == 0) {
      goto LABEL_30;
    }
    if (*(_BYTE*)v24[0] == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v24[0]) != 0) {
        v18 = 0x0.0p+0f;
      }
    LABEL_30:
      if ((v22_.v22[0] & 1) != 0) {
        v19 = v22_.v23;
      }
      else {
        v19 = (char*)v22_.v22 + 1;
      }
      snd_findSound((__int64)v19);
      snd_Fade_Fade_10c830((__int64)v24, v18);
      snd_startVolume_ffe30(&v25, (__int64)v24, v11);
      snd_Fade_Destroy_Fade(v24);
      if ((v22_.v22[0] & 1) != 0 && v22_.v23 != nullptr) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
      }
      return 0;
    }
  }
  v18 = 0x0.0p+0f;
  goto LABEL_30;
}

__int64 game_evt_demo_115f860(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  long double v10;
  float v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  long double v17;
  float v18;
  unsigned __int8* v19;
  __int64 v20;
  struct {
    __int64 v22[2];
    unsigned __int8* v23;
  } v22_;
  _QWORD v24[25];
  unsigned int v25;

  v1 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated(v22_.v22, *(_QWORD*)(v1 + 16),
                                  *(_QWORD*)(v1 + 8));
    v1 = *(_QWORD*)(a1 + 120);
  }
  else {
    v3 = *(_QWORD*)v1;
    v4 = *(unsigned __int8**)(v1 + 16);
    v22_.v22[1] = *(_QWORD*)(v1 + 8);
    v22_.v23 = v4;
    v22_.v22[0] = v3;
  }
  v5 = *(unsigned __int8*)(v1 + 24);
  v6 = *(_QWORD*)(v1 + 32);
  if ((v5 & 1) == 0) {
    v6 = v5 >> 1;
  }
  if (v6 != 0) {
    v7 = *(_QWORD*)(v1 + 40);
    v8 = v1 + 25;
    v24[0] = 0;
    if ((v5 & 1) != 0) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    v10 = strtof_alt2(v9, v24);
    v11 = *(float*)&v10;
    if (*(_BYTE*)v24[0] != 0) {
      if (*(_BYTE*)v24[0] == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v24[0]) != 0) {
          v11 = 0x1.0000000000000p+0f;
        }
      }
      else {
        v11 = 0x1.0000000000000p+0f;
      }
    }
    v1 = *(_QWORD*)(a1 + 120);
  }
  else {
    v11 = 0x1.0000000000000p+0f;
  }
  v12 = *(unsigned __int8*)(v1 + 48);
  v13 = *(_QWORD*)(v1 + 56);
  if ((v12 & 1) == 0) {
    v13 = v12 >> 1;
  }
  if (v13 != 0) {
    v14 = *(_QWORD*)(v1 + 64);
    v15 = v1 + 49;
    v24[0] = 0;
    if ((v12 & 1) != 0) {
      v16 = v14;
    }
    else {
      v16 = v15;
    }
    v17 = strtof_alt2(v16, v24);
    v18 = *(float*)&v17;
    if (*(_BYTE*)v24[0] == 0) {
      goto LABEL_30;
    }
    if (*(_BYTE*)v24[0] == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v24[0]) != 0) {
        v18 = 0x0.0p+0f;
      }
    LABEL_30:
      if ((v22_.v22[0] & 1) != 0) {
        v19 = v22_.v23;
      }
      else {
        v19 = (unsigned __int8*)v22_.v22 + 1;
      }
      v25 = (unsigned int)snd_fnd_calcCrc32(v19, 0);
      snd_Fade_Fade_10c830((__int64)v24, v18);
      snd_startSlotVolume_100b50((int*)&v25, (__int64)v24, v11);
      snd_Fade_Destroy_Fade(v24);
      if ((v22_.v22[0] & 1) != 0 && v22_.v23 != nullptr) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
      }
      return 0;
    }
  }
  v18 = 0x0.0p+0f;
  goto LABEL_30;
}

__int64 game_evt_demo_115fa20(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  _BYTE* v5;
  __int64 v6;
  struct {
    __int64 v8[2];
    _BYTE* v9;
  } v8_;

  v1 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated(v8_.v8, v1[2], v1[1]);
  }
  else {
    v2 = *v1;
    v3 = v1[1];
    v4 = (_BYTE*)v1[2];
    v8_.v8[1] = v3;
    v8_.v9 = v4;
    v8_.v8[0] = v2;
  }
  if (GameData_22336e0 != 0) {
    if ((v8_.v8[0] & 1) != 0) {
      v5 = v8_.v9;
    }
    else {
      v5 = (char*)v8_.v8 + 1;
    }
    game_evt_demo_114e680(GameData_22336e0, v5);
  }
  if ((v8_.v8[0] & 1) != 0 && v8_.v9 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v6);
  }
  return 0;
}

__int64 game_evt_demo_115fad0(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  _BYTE* v5;
  __int64 v6;
  struct {
    __int64 v8[2];
    _BYTE* v9;
  } v8_;

  v1 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated(v8_.v8, v1[2], v1[1]);
  }
  else {
    v2 = *v1;
    v3 = v1[1];
    v4 = (_BYTE*)v1[2];
    v8_.v8[1] = v3;
    v8_.v9 = v4;
    v8_.v8[0] = v2;
  }
  if (GameData_22336e0 != 0) {
    if ((v8_.v8[0] & 1) != 0) {
      v5 = v8_.v9;
    }
    else {
      v5 = (char*)v8_.v8 + 1;
    }
    game_evt_demo_114e5a0(GameData_22336e0, v5);
  }
  if ((v8_.v8[0] & 1) != 0 && v8_.v9 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v6);
  }
  return 0;
}

void game_evt_demo_115fec0(float* a1, unsigned __int8* a2, char* a3, _QWORD* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64** v17;
  __int64* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64* v27;
  _QWORD* v28;
  char v29;
  _QWORD* v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  _BOOL8 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 primeEm;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  float* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  _QWORD* v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  _QWORD* v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  unsigned __int64 v63;

  v5 = *a2;
  v9 = (v5 & 1) == 0;
  v10 = v5 >> 1;
  if (v9) {
    v11 = a2 + 1;
  }
  else {
    v11 = *((unsigned __int8**)a2 + 2);
  }
  if (v9) {
    v12 = v10;
  }
  else {
    v12 = *((_QWORD*)a2 + 1);
  }
  v13 = std___1___hash_memory(v11, v12);
  v14 = *((_QWORD*)a1 + 1);
  v15 = v13;
  if (v14 != 0) {
    v16 = v14 - 1;
    if ((v14 & (v14 - 1)) != 0) {
      v4 = v13;
      if (v13 >= v14) {
        v4 = v13 % v14;
      }
    }
    else {
      v4 = v16 & v13;
    }
    v17 = *(__int64***)(*(_QWORD*)a1 + 8 * v4);
    if (v17 != nullptr) {
      v18 = *v17;
      if (*v17 != nullptr) {
        if ((v14 & v16) == 0) {
          while (1) {
            v23 = v18[1];
            if (v23 == v15) {
              v24 = *((unsigned __int8*)v18 + 16);
              v25 = v18[3];
              if ((v24 & 1) == 0) {
                v25 = v24 >> 1;
              }
              if (v25 == v12) {
                v26 = (v24 & 1) != 0 ? (__int64*)v18[4]
                                     : (__int64*)((char*)v18 + 17);
                if ((unsigned int)memcmp(v26, v11, v12) == 0) {
                  return;
                }
              }
            }
            else if ((v23 & v16) != v4) {
              goto LABEL_41;
            }
            v18 = (__int64*)*v18;
            if (v18 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v19 = v18[1];
          if (v19 == v15) {
            v20 = *((unsigned __int8*)v18 + 16);
            v21 = v18[3];
            if ((v20 & 1) == 0) {
              v21 = v20 >> 1;
            }
            if (v21 == v12) {
              v22 = (v20 & 1) != 0 ? (__int64*)v18[4]
                                   : (__int64*)((char*)v18 + 17);
              if ((unsigned int)memcmp(v22, v11, v12) == 0) {
                return;
              }
            }
          }
          else {
            if (v19 >= v14) {
              v19 %= v14;
            }
            if (v19 != v4) {
              break;
            }
          }
          v18 = (__int64*)*v18;
        } while (v18 != nullptr);
      }
    }
  }
LABEL_41:
  v27 = (__int64*)fw_memory_g_heap_manager_ptr;
  v28 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v29 = *a3;
  v30 = v28;
  *v28 = 0;
  v28[1] = v15;
  if ((v29 & 1) != 0) {
    fw_text_String_CopyTerminated(v28 + 2, *((_QWORD*)a3 + 2),
                                  *((_QWORD*)a3 + 1));
  }
  else {
    v31 = *((_QWORD*)a3 + 1);
    v28[2] = *(_QWORD*)a3;
    v28[3] = v31;
    v28[4] = *((_QWORD*)a3 + 2);
  }
  v32 = a1[8];
  v30[5] = *a4;
  v33 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v14 == 0 || (float)(v32 * (float)v14) < v33) {
    v34 = v33 / v32;
    v35 = true;
    if (v14 >= 3) {
      v35 = (v14 & (v14 - 1)) != 0;
    }
    v36 = v35 | (2 * v14);
    v37 = vcvtps_u64_f32(v34);
    if (v36 <= v37) {
      primeEm = v37;
    }
    else {
      primeEm = v36;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v39 = *((_QWORD*)a1 + 1);
    if (primeEm <= v39) {
      if (primeEm >= v39) {
        goto LABEL_105;
      }
      v45 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v39 < 3 || (v39 & (v39 - 1)) != 0) {
        v45 = std___1___next_prime(v45);
      }
      else {
        v46 = 1LL << -(char)__clz(v45 - 1);
        if (v45 >= 2) {
          v45 = v46;
        }
      }
      if (primeEm <= v45) {
        primeEm = v45;
      }
      if (primeEm >= v39) {
        goto LABEL_105;
      }
      if (primeEm == 0) {
        v58 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v58 != 0) {
          v59 = 128;
          if (*(_QWORD*)(*v27 + 200) == 0) {
            v59 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v27 + v59);
        }
        *((_QWORD*)a1 + 1) = 0;
        goto LABEL_105;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v40 = fw_memory_HeapManager_Allocate_alt1(*v27, 8 * primeEm, 16, 0);
    v41 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v40;
    if (v41 != 0) {
      v42 = 128;
      if (*(_QWORD*)(*v27 + 200) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v27 + v42);
    }
    v43 = primeEm & 7;
    *((_QWORD*)a1 + 1) = primeEm;
    if (primeEm >= 8) {
      v44 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 48) = 0;
        v47 = *(_QWORD*)a1 + 8 * v44;
        v44 += 8;
        *(_QWORD*)(v47 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v44);
    }
    else {
      v44 = 0;
    }
    if ((primeEm & 7) != 0) {
      v48 = 8 * v44;
      do {
        --v43;
        *(_QWORD*)(*(_QWORD*)a1 + v48) = 0;
        v48 += 8;
      } while (v43 != 0);
    }
    v50 = a1 + 4;
    v49 = *((_QWORD**)a1 + 2);
    if (v49 != nullptr) {
      v51 = v49[1];
      v52 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v51 >= primeEm) {
          v51 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v51) = v50;
        v53 = (_QWORD*)*v49;
        if (*v49 == 0) {
          goto LABEL_105;
        }
        while (1) {
          v54 = v53[1];
          if (v54 >= primeEm) {
            v54 %= primeEm;
          }
          if (v54 != v51) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v54) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v54) = v49;
              goto LABEL_82;
            }
            *v49 = *v53;
            *v53 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v54);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v54) = v53;
            v53 = v49;
          }
          v54 = v51;
        LABEL_82:
          v49 = v53;
          v53 = (_QWORD*)*v53;
          v51 = v54;
          if (v53 == nullptr) {
            goto LABEL_105;
          }
        }
      }
      v55 = v51 & v52;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v55) = v50;
      while (1) {
        v56 = (_QWORD*)*v49;
        if (*v49 == 0) {
          break;
        }
        v57 = v56[1] & v52;
        if (v57 == v55) {
          v49 = (_QWORD*)*v49;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v57) != 0) {
          *v49 = *v56;
          *v56 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v57);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v57) = v56;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v57) = v49;
          v49 = v56;
          v55 = v57;
        }
      }
    }
  LABEL_105:
    v14 = *((_QWORD*)a1 + 1);
    if ((v14 & (v14 - 1)) != 0) {
      if (v15 >= v14) {
        v4 = v15 % v14;
      }
      else {
        v4 = v15;
      }
    }
    else {
      v4 = (v14 - 1) & v15;
    }
  }
  v60 = *(_QWORD*)a1;
  v61 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v61 != nullptr) {
    *v30 = *v61;
    *v61 = v30;
  }
  else {
    v62 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v30;
    *v30 = v62;
    *(_QWORD*)(v60 + 8 * v4) = a1 + 4;
    if (*v30 != 0) {
      v63 = *(_QWORD*)(*v30 + 8LL);
      if ((v14 & (v14 - 1)) != 0) {
        if (v63 >= v14) {
          v63 %= v14;
        }
      }
      else {
        v63 &= v14 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v63) = v30;
    }
  }
  ++*((_QWORD*)a1 + 3);
}

float game_evt_demo_1161ce0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  float result;
  float32x4_t v4;
  float32x4_t v5;
  int8x16_t v6;
  int8x16_t v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  char* v16;
  __int128 v17;
  __int128 v18;
  int8x16_t v19;
  int8x16_t v20;
  float32x4_t v21;
  float32x4_t v22;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = GameRoutine_1159ac0(a1 + 8),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v2 != 0) {
    v8 = *(unsigned __int8*)(a1 + 32);
    v9 = v2;
    if ((v8 & 1) != 0) {
      v10 = *(_QWORD*)(a1 + 40);
    }
    else {
      v10 = v8 >> 1;
    }
    if (v10 != 0) {
      v10 = GameRoutine_1159be0(a1 + 32),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    v11 = *(_QWORD*)(GameData_22336e0 + 600);
    if (v11 != 0) {
      *(_QWORD*)(v11 + 40) = 0;
      LANES128(v4).n128_u32[0] = *(_DWORD*)(v9 + 32);
      v12 = *(float*)(v9 + 56);
      LANES128(v4).n128_u32[1] = *(_DWORD*)(v9 + 36);
      LANES128(v4).n128_u32[2] = *(_DWORD*)(v9 + 40);
      if (v10 != 0) {
        LANES128(v6).n128_u32[0] = *(_DWORD*)(v10 + 32);
        LANES128(v7).n128_u32[0] = *(_DWORD*)(v10 + 44);
        v13 = *(float*)(v10 + 56);
        v14 = *(float*)(v10 + 60);
        v15 = *(float*)(v10 + 72);
        v16 = *(char**)(v10 + 64);
        LANES128(v6).n128_u32[1] = *(_DWORD*)(v10 + 36);
        LANES128(v7).n128_u32[1] = *(_DWORD*)(v10 + 48);
        LANES128(v6).n128_u32[2] = *(_DWORD*)(v10 + 40);
        LANES128(v7).n128_u32[2] = *(_DWORD*)(v10 + 52);
      }
      else {
        v15 = -0x1.0000000000000p+0f;
        v13 = 0x0.0p+0f;
        v16 = &GameData_1a9f09e;
        v6 = (__typeof__(v6)){0};
        v7 = (__typeof__(v7)){0};
        v14 = 0x0.0p+0f;
      }
      LANES128(v5).n128_u32[2] = *(_DWORD*)(v9 + 52);
      LANES128(v5).n128_u64[0] = *(_QWORD*)(v9 + 44);
      v21 = v5;
      v22 = v4;
      v17 = (__typeof__(v17)){0};
      v18 = (__typeof__(v18)){0};
      v19 = v7;
      v20 = v6;
      return CharacterWork_11c7720(v11, &v22, &v21, &v20, &v19, v16, &v18, &v17,
                                   v12, v13, v14, v15);
    }
  }
  return result;
}

void game_evt_demo_1161e40(float* a1, unsigned __int8* a2, char* a3, _QWORD* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64** v17;
  __int64* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64* v27;
  _QWORD* v28;
  char v29;
  _QWORD* v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  _BOOL8 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 primeEm;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  float* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  _QWORD* v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  _QWORD* v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  unsigned __int64 v63;

  v5 = *a2;
  v9 = (v5 & 1) == 0;
  v10 = v5 >> 1;
  if (v9) {
    v11 = a2 + 1;
  }
  else {
    v11 = *((unsigned __int8**)a2 + 2);
  }
  if (v9) {
    v12 = v10;
  }
  else {
    v12 = *((_QWORD*)a2 + 1);
  }
  v13 = std___1___hash_memory(v11, v12);
  v14 = *((_QWORD*)a1 + 1);
  v15 = v13;
  if (v14 != 0) {
    v16 = v14 - 1;
    if ((v14 & (v14 - 1)) != 0) {
      v4 = v13;
      if (v13 >= v14) {
        v4 = v13 % v14;
      }
    }
    else {
      v4 = v16 & v13;
    }
    v17 = *(__int64***)(*(_QWORD*)a1 + 8 * v4);
    if (v17 != nullptr) {
      v18 = *v17;
      if (*v17 != nullptr) {
        if ((v14 & v16) == 0) {
          while (1) {
            v23 = v18[1];
            if (v23 == v15) {
              v24 = *((unsigned __int8*)v18 + 16);
              v25 = v18[3];
              if ((v24 & 1) == 0) {
                v25 = v24 >> 1;
              }
              if (v25 == v12) {
                v26 = (v24 & 1) != 0 ? (__int64*)v18[4]
                                     : (__int64*)((char*)v18 + 17);
                if ((unsigned int)memcmp(v26, v11, v12) == 0) {
                  return;
                }
              }
            }
            else if ((v23 & v16) != v4) {
              goto LABEL_41;
            }
            v18 = (__int64*)*v18;
            if (v18 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v19 = v18[1];
          if (v19 == v15) {
            v20 = *((unsigned __int8*)v18 + 16);
            v21 = v18[3];
            if ((v20 & 1) == 0) {
              v21 = v20 >> 1;
            }
            if (v21 == v12) {
              v22 = (v20 & 1) != 0 ? (__int64*)v18[4]
                                   : (__int64*)((char*)v18 + 17);
              if ((unsigned int)memcmp(v22, v11, v12) == 0) {
                return;
              }
            }
          }
          else {
            if (v19 >= v14) {
              v19 %= v14;
            }
            if (v19 != v4) {
              break;
            }
          }
          v18 = (__int64*)*v18;
        } while (v18 != nullptr);
      }
    }
  }
LABEL_41:
  v27 = (__int64*)fw_memory_g_heap_manager_ptr;
  v28 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v29 = *a3;
  v30 = v28;
  *v28 = 0;
  v28[1] = v15;
  if ((v29 & 1) != 0) {
    fw_text_String_CopyTerminated(v28 + 2, *((_QWORD*)a3 + 2),
                                  *((_QWORD*)a3 + 1));
  }
  else {
    v31 = *((_QWORD*)a3 + 1);
    v28[2] = *(_QWORD*)a3;
    v28[3] = v31;
    v28[4] = *((_QWORD*)a3 + 2);
  }
  v32 = a1[8];
  v30[5] = *a4;
  v33 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v14 == 0 || (float)(v32 * (float)v14) < v33) {
    v34 = v33 / v32;
    v35 = true;
    if (v14 >= 3) {
      v35 = (v14 & (v14 - 1)) != 0;
    }
    v36 = v35 | (2 * v14);
    v37 = vcvtps_u64_f32(v34);
    if (v36 <= v37) {
      primeEm = v37;
    }
    else {
      primeEm = v36;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v39 = *((_QWORD*)a1 + 1);
    if (primeEm <= v39) {
      if (primeEm >= v39) {
        goto LABEL_105;
      }
      v45 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v39 < 3 || (v39 & (v39 - 1)) != 0) {
        v45 = std___1___next_prime(v45);
      }
      else {
        v46 = 1LL << -(char)__clz(v45 - 1);
        if (v45 >= 2) {
          v45 = v46;
        }
      }
      if (primeEm <= v45) {
        primeEm = v45;
      }
      if (primeEm >= v39) {
        goto LABEL_105;
      }
      if (primeEm == 0) {
        v58 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v58 != 0) {
          v59 = 128;
          if (*(_QWORD*)(*v27 + 200) == 0) {
            v59 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v27 + v59);
        }
        *((_QWORD*)a1 + 1) = 0;
        goto LABEL_105;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v40 = fw_memory_HeapManager_Allocate_alt1(*v27, 8 * primeEm, 16, 0);
    v41 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v40;
    if (v41 != 0) {
      v42 = 128;
      if (*(_QWORD*)(*v27 + 200) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v27 + v42);
    }
    v43 = primeEm & 7;
    *((_QWORD*)a1 + 1) = primeEm;
    if (primeEm >= 8) {
      v44 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 48) = 0;
        v47 = *(_QWORD*)a1 + 8 * v44;
        v44 += 8;
        *(_QWORD*)(v47 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v44);
    }
    else {
      v44 = 0;
    }
    if ((primeEm & 7) != 0) {
      v48 = 8 * v44;
      do {
        --v43;
        *(_QWORD*)(*(_QWORD*)a1 + v48) = 0;
        v48 += 8;
      } while (v43 != 0);
    }
    v50 = a1 + 4;
    v49 = *((_QWORD**)a1 + 2);
    if (v49 != nullptr) {
      v51 = v49[1];
      v52 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v51 >= primeEm) {
          v51 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v51) = v50;
        v53 = (_QWORD*)*v49;
        if (*v49 == 0) {
          goto LABEL_105;
        }
        while (1) {
          v54 = v53[1];
          if (v54 >= primeEm) {
            v54 %= primeEm;
          }
          if (v54 != v51) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v54) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v54) = v49;
              goto LABEL_82;
            }
            *v49 = *v53;
            *v53 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v54);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v54) = v53;
            v53 = v49;
          }
          v54 = v51;
        LABEL_82:
          v49 = v53;
          v53 = (_QWORD*)*v53;
          v51 = v54;
          if (v53 == nullptr) {
            goto LABEL_105;
          }
        }
      }
      v55 = v51 & v52;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v55) = v50;
      while (1) {
        v56 = (_QWORD*)*v49;
        if (*v49 == 0) {
          break;
        }
        v57 = v56[1] & v52;
        if (v57 == v55) {
          v49 = (_QWORD*)*v49;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v57) != 0) {
          *v49 = *v56;
          *v56 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v57);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v57) = v56;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v57) = v49;
          v49 = v56;
          v55 = v57;
        }
      }
    }
  LABEL_105:
    v14 = *((_QWORD*)a1 + 1);
    if ((v14 & (v14 - 1)) != 0) {
      if (v15 >= v14) {
        v4 = v15 % v14;
      }
      else {
        v4 = v15;
      }
    }
    else {
      v4 = (v14 - 1) & v15;
    }
  }
  v60 = *(_QWORD*)a1;
  v61 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v61 != nullptr) {
    *v30 = *v61;
    *v61 = v30;
  }
  else {
    v62 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v30;
    *v30 = v62;
    *(_QWORD*)(v60 + 8 * v4) = a1 + 4;
    if (*v30 != 0) {
      v63 = *(_QWORD*)(*v30 + 8LL);
      if ((v14 & (v14 - 1)) != 0) {
        if (v63 >= v14) {
          v63 %= v14;
        }
      }
      else {
        v63 &= v14 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v63) = v30;
    }
  }
  ++*((_QWORD*)a1 + 3);
}

void game_evt_demo_1162420(float* a1, unsigned __int8* a2, __int64* a3,
                           __int64* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64** v17;
  __int64* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  _BOOL8 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 primeEm;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  float* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  _QWORD* v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  _QWORD* v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  unsigned __int64 v65;

  v5 = *a2;
  v9 = (v5 & 1) == 0;
  v10 = v5 >> 1;
  if (v9) {
    v11 = a2 + 1;
  }
  else {
    v11 = *((unsigned __int8**)a2 + 2);
  }
  if (v9) {
    v12 = v10;
  }
  else {
    v12 = *((_QWORD*)a2 + 1);
  }
  v13 = std___1___hash_memory(v11, v12);
  v14 = *((_QWORD*)a1 + 1);
  v15 = v13;
  if (v14 != 0) {
    v16 = v14 - 1;
    if ((v14 & (v14 - 1)) != 0) {
      v4 = v13;
      if (v13 >= v14) {
        v4 = v13 % v14;
      }
    }
    else {
      v4 = v16 & v13;
    }
    v17 = *(__int64***)(*(_QWORD*)a1 + 8 * v4);
    if (v17 != nullptr) {
      v18 = *v17;
      if (*v17 != nullptr) {
        if ((v14 & v16) == 0) {
          while (1) {
            v23 = v18[1];
            if (v23 == v15) {
              v24 = *((unsigned __int8*)v18 + 16);
              v25 = v18[3];
              if ((v24 & 1) == 0) {
                v25 = v24 >> 1;
              }
              if (v25 == v12) {
                v26 = (v24 & 1) != 0 ? (__int64*)v18[4]
                                     : (__int64*)((char*)v18 + 17);
                if ((unsigned int)memcmp(v26, v11, v12) == 0) {
                  return;
                }
              }
            }
            else if ((v23 & v16) != v4) {
              goto LABEL_41;
            }
            v18 = (__int64*)*v18;
            if (v18 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v19 = v18[1];
          if (v19 == v15) {
            v20 = *((unsigned __int8*)v18 + 16);
            v21 = v18[3];
            if ((v20 & 1) == 0) {
              v21 = v20 >> 1;
            }
            if (v21 == v12) {
              v22 = (v20 & 1) != 0 ? (__int64*)v18[4]
                                   : (__int64*)((char*)v18 + 17);
              if ((unsigned int)memcmp(v22, v11, v12) == 0) {
                return;
              }
            }
          }
          else {
            if (v19 >= v14) {
              v19 %= v14;
            }
            if (v19 != v4) {
              break;
            }
          }
          v18 = (__int64*)*v18;
        } while (v18 != nullptr);
      }
    }
  }
LABEL_41:
  v27 = (__int64*)fw_memory_g_heap_manager_ptr;
  v28 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v29 = *a3;
  v30 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  v31 = v28;
  *v28 = 0;
  v28[1] = v15;
  v28[2] = v29;
  v28[3] = v30;
  v32 = a3[2];
  a3[2] = 0;
  v33 = *a4;
  v34 = a1[8];
  v28[4] = v32;
  v28[5] = v33;
  v35 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v14 == 0 || (float)(v34 * (float)v14) < v35) {
    v36 = v35 / v34;
    v37 = true;
    if (v14 >= 3) {
      v37 = (v14 & (v14 - 1)) != 0;
    }
    v38 = v37 | (2 * v14);
    v39 = vcvtps_u64_f32(v36);
    if (v38 <= v39) {
      primeEm = v39;
    }
    else {
      primeEm = v38;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v41 = *((_QWORD*)a1 + 1);
    if (primeEm <= v41) {
      if (primeEm >= v41) {
        goto LABEL_102;
      }
      v47 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v41 < 3 || (v41 & (v41 - 1)) != 0) {
        v47 = std___1___next_prime(v47);
      }
      else {
        v48 = 1LL << -(char)__clz(v47 - 1);
        if (v47 >= 2) {
          v47 = v48;
        }
      }
      if (primeEm <= v47) {
        primeEm = v47;
      }
      if (primeEm >= v41) {
        goto LABEL_102;
      }
      if (primeEm == 0) {
        v60 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v60 != 0) {
          v61 = 128;
          if (*(_QWORD*)(*v27 + 200) == 0) {
            v61 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v27 + v61);
        }
        *((_QWORD*)a1 + 1) = 0;
        goto LABEL_102;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v42 = fw_memory_HeapManager_Allocate_alt1(*v27, 8 * primeEm, 16, 0);
    v43 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v42;
    if (v43 != 0) {
      v44 = 128;
      if (*(_QWORD*)(*v27 + 200) == 0) {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v27 + v44);
    }
    v45 = primeEm & 7;
    *((_QWORD*)a1 + 1) = primeEm;
    if (primeEm >= 8) {
      v46 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v46) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v46 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v46 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v46 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v46 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v46 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v46 + 48) = 0;
        v49 = *(_QWORD*)a1 + 8 * v46;
        v46 += 8;
        *(_QWORD*)(v49 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v46);
    }
    else {
      v46 = 0;
    }
    if ((primeEm & 7) != 0) {
      v50 = 8 * v46;
      do {
        --v45;
        *(_QWORD*)(*(_QWORD*)a1 + v50) = 0;
        v50 += 8;
      } while (v45 != 0);
    }
    v52 = a1 + 4;
    v51 = *((_QWORD**)a1 + 2);
    if (v51 != nullptr) {
      v53 = v51[1];
      v54 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v53 >= primeEm) {
          v53 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v53) = v52;
        v55 = (_QWORD*)*v51;
        if (*v51 == 0) {
          goto LABEL_102;
        }
        while (1) {
          v56 = v55[1];
          if (v56 >= primeEm) {
            v56 %= primeEm;
          }
          if (v56 != v53) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v56) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v56) = v51;
              goto LABEL_79;
            }
            *v51 = *v55;
            *v55 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v56);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v56) = v55;
            v55 = v51;
          }
          v56 = v53;
        LABEL_79:
          v51 = v55;
          v55 = (_QWORD*)*v55;
          v53 = v56;
          if (v55 == nullptr) {
            goto LABEL_102;
          }
        }
      }
      v57 = v53 & v54;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v57) = v52;
      while (1) {
        v58 = (_QWORD*)*v51;
        if (*v51 == 0) {
          break;
        }
        v59 = v58[1] & v54;
        if (v59 == v57) {
          v51 = (_QWORD*)*v51;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v59) != 0) {
          *v51 = *v58;
          *v58 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v59);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v59) = v58;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v59) = v51;
          v51 = v58;
          v57 = v59;
        }
      }
    }
  LABEL_102:
    v14 = *((_QWORD*)a1 + 1);
    if ((v14 & (v14 - 1)) != 0) {
      if (v15 >= v14) {
        v4 = v15 % v14;
      }
      else {
        v4 = v15;
      }
    }
    else {
      v4 = (v14 - 1) & v15;
    }
  }
  v62 = *(_QWORD*)a1;
  v63 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v63 != nullptr) {
    *v31 = *v63;
    *v63 = v31;
  }
  else {
    v64 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v31;
    *v31 = v64;
    *(_QWORD*)(v62 + 8 * v4) = a1 + 4;
    if (*v31 != 0) {
      v65 = *(_QWORD*)(*v31 + 8LL);
      if ((v14 & (v14 - 1)) != 0) {
        if (v65 >= v14) {
          v65 %= v14;
        }
      }
      else {
        v65 &= v14 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v65) = v31;
    }
  }
  ++*((_QWORD*)a1 + 3);
}

#pragma GCC visibility pop
