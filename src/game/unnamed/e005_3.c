#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern __int128 GameData_1a831c0;

extern _UNKNOWN GameData_1ae6c1e;

extern __int64 (*GameData_1ba26c8[9])();

extern __int64 (*GameData_1fe8e20[])();

extern __int64 (*GameData_1fe92b8[])();

extern __int64 (*GameData_1fe9388[])();

extern __int64 (*GameData_1ff4f28[])();

extern __int64 (*GameData_1ff4fc8[6])();

extern __int64 (*GameData_1ff4fe0[3])();

extern char* GameData_1ff51b0;

extern __int64 (*GameData_1ff5210[])();

extern __int64 (*GameData_1ff5508[3])();

extern __int64 (*GameData_1ff81f8[])();

extern __int64 (*GameData_20003a0[])();

extern __int64 GameData_212bf68;

extern _UNKNOWN* GameData_212c540;

extern __int64 GameData_212c638;

extern __int64 GameData_212c6c8;

extern __int64* GameData_212cc28[66];

extern __int64 GameData_212cf60;

extern __int64* GameData_212d458[7];

extern __int64 GameData_212dbb8[9];

extern __int64 GameData_212dbc0[8];

extern __int64 GameData_212dbf0[2];

extern __int64 GameData_212dc48[5];

extern __int64 GameData_212dc58[3];

extern __int64 GameData_212dc68;

extern __int64* GameData_212eb88;

extern __int64* GameData_212ebb0[7];

extern __int64* GameData_212ebc0[5];

extern __int64* GameData_212ebe0;

extern __int64 GameData_212ec00;

extern __int64* GameData_212ec18[2];

extern __int64* GameData_212eec0[4];

extern __int64* GameData_212eee8[2];

extern __int64* GameData_212ef18[2];

extern __int64* GameData_212ef20;

extern __int64 GameData_212ef88[8];

extern __int64 GameData_212ef98[6];

extern char** GameData_212fa78;

extern __int64 GameData_2131678;

extern char GameData_21676f8[6];

extern __int64 GameData_2167700;

extern __int64 GameData_2167708;

extern int GameData_2167728;

extern _UNKNOWN GameData_2174f00;

extern __int128 GameData_21a6120;

extern _UNKNOWN GameData_21a6130;

extern __int64 GameData_21c6978;

extern __int64 GameData_21c96f8;

extern __int64 GameData_21ec7c0;

extern __int64 GameData_21ee260;

extern __int64 GameData_2203490;

extern __int64 GameData_22127a8;

extern _UNKNOWN GameData_2216780;

__int64 GameRoutine_18704b0(_QWORD, _QWORD);

__int64 GameRoutine_18f3b60(void);

__int64 GameRoutine_1a09bf0(_QWORD, const char*, ...);

__n128 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6f4cd0(_QWORD);

__int64 GameRoutine_7a8520(void);

__int64 GameRoutine_cab4e0(void);

__int64 GameRoutine_cbb8c0(_QWORD, _QWORD);

__int64 GameRoutine_d5cdc0(_QWORD, _QWORD);

__int64 GameRoutine_d5d900(_QWORD, long double);

__int64 GameRoutine_d6f2a0(_QWORD, long double);

__int64 GameRoutine_d709d0(_QWORD, _QWORD);

__int64 GameRoutine_d7e220(_QWORD);

__int64 GameRoutine_d9a760(_QWORD);

__int64 GameRoutine_d9a9c0(_QWORD);

__int64 GameRoutine_db3600(_QWORD, _QWORD);

__int64 GameRoutine_df7d60(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_dff2a0(_QWORD, _QWORD);

__int64 GameRoutine_e241d0(_QWORD, _QWORD);

__int64 GameRoutine_e25100(_QWORD);

__int64 GameRoutine_eaec10(_QWORD, _QWORD);

__int64 GameRoutine_ee0900(__int64);

__n128 GameRoutine_f480c0(__int64, __int64);

__int64 GameRoutine_f499b0(_QWORD);

__int64 GameRoutine_f71a70(_QWORD);

__int64 GameRoutine_f72f60(_QWORD);

__int64 GameRoutine_f7cb70(_QWORD, _QWORD);

__int64 GameRoutine_f94720(_QWORD, _QWORD);

__int64 GameRoutine_fcd4a0(_QWORD);

__int64 GameRoutine_fcd580(_QWORD);

__int64 GameRoutine_fce960(_QWORD);

__attribute__((swiftcall)) void GameRoutine_febfc0(PSEUDO_X8, _QWORD);

__int64 GameRoutine_ff7c00(_QWORD, _QWORD);

_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");

_QWORD* Manager_66cc20(__int64*, _QWORD*);

__attribute__((swiftcall)) void LocatorDispos_db1e20(PSEUDO_X8,
                                                     __int64* result);

__int64** GameRoutine_f7db00_alt1(__int64**,
                                  __int64) __asm__("GameRoutine_f7db00");

__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);

__int64 GlobalMapData_e273d0(__int64 result);

__int64 GlobalMapData_e27700(_QWORD*, __int64, __int64, __int64, __int64,
                             __int64*, _DWORD*);

__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);

__int64 memcmp(_QWORD, _QWORD, _QWORD);

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);

extern __int64 fw_memory_g_heap_manager_ptr;

unsigned __int64 game_hub_e286a0(__int64, __int64*);
unsigned __int128 game_hub_e286a0_pair(__int64,
                                       __int64*) __asm__("game_hub_e286a0");

__int64 GameHr_f7c340_alt1(__int64 a1, __int64* a2, __int64* a3, __int64 a4,
                           char a5, __int64* a6) __asm__("GameHr_f7c340");

_QWORD* GameRoutine_f87ee0_alt1(__int64, unsigned __int8*,
                                __int64**) __asm__("GameRoutine_f87ee0");

_QWORD* GameRoutine_f885d0_alt1(_QWORD* result,
                                _QWORD*) __asm__("GameRoutine_f885d0");

__attribute__((swiftcall)) void game_ffd4e0(PSEUDO_X8, const char*);

__attribute__((swiftcall)) void game_hub_e1b4d0(PSEUDO_X8);

__attribute__((swiftcall)) void game_hub_e1bfe0(PSEUDO_X8, __int64, __int64,
                                                __int64*);

__attribute__((swiftcall)) void wld_map_c20fe0(PSEUDO_X8, __int64, __int64,
                                               __int64);

__int64*
GameRoutine_c22420_alt1(_QWORD*,
                        unsigned __int8*) __asm__("GameRoutine_c22420");

__int64 GameRoutine_eaec10_alt1(__int64*,
                                __int64) __asm__("GameRoutine_eaec10");

__int64 GameRoutine_eb7d20_alt1(__int64, __int64*,
                                unsigned int) __asm__("GameRoutine_eb7d20");

__int64 GameRoutine_efdf40_alt1(__int64,
                                __int16*) __asm__("GameRoutine_efdf40");

__int64 ProcCmdBtlSeq_e61c90(__int64, __int64);

__int64 ProcLoadWait_9a4d20(int, _QWORD*);

__int64 Seq_f87060();

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);

__int64 game_14a1b00(__int64*, float);

__int64 game_f86d10();

__int64 game_f86e80();

__int64 game_f86f50();

__int64 memchr(__int64, int, unsigned __int64);

__int64 std___1___shared_weak_count___release_weak(__int64);

__int64 std___1___shared_weak_count_lock(__int64);

__int64 strstr(const char*, const char*);

const char*
GameRoutine_8a1ae0_alt1(const char* result) __asm__("GameRoutine_8a1ae0");

extern __int64 (*decltype_c81af0_ptr[6])();

extern __int64 (*game_cmdbtl_CmdBtlEventStockBase_vtable[])();

extern __int64 GameData_212cc78_alt1[56] __asm__("GameData_212cc78");

extern __int64 game_gmap_GmapClock_instance_;

extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;

extern char GameData_1aa95ea_alt1[] __asm__("GameData_1aa95ea");

extern char GameData_1abcd67_alt1[] __asm__("GameData_1abcd67");

extern char GameData_1ac0b57_alt1[] __asm__("GameData_1ac0b57");

extern char GameData_1ac0b61_alt1[] __asm__("GameData_1ac0b61");

extern char GameData_1ae6bf6_alt1[] __asm__("GameData_1ae6bf6");

extern char GameData_1aee63a_alt1[] __asm__("GameData_1aee63a");

extern char GameData_1aee641_alt1[] __asm__("GameData_1aee641");

int __cxa_guard_acquire(__int64);

unsigned __int64 strlen(const char*);

void CmdBtlUnit_e7da80(__int64, __int64*, float);

void GameHr_667c80(__int64);

void __cxa_guard_release(__int64);

void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

void GameHr_f3fa30();

__int64 GameHr_f41c80();

void GameHr_f42060(__int64* a1);

void GameHr_f4b1e0(__int64 a1, int a2, __int64* a3);

void GameHr_f5cfa0(__int64 a1);

__int64 GameHr_f5ffc0(__int64 a1);

void GameHr_f86840(_QWORD* a1);

void GameHr_f8ac20();

__int64 GameHr_ffd180(int a1, const char* a2);

__attribute__((swiftcall)) void
GameRoutine_a51060_alt1(PSEUDO_X8, __int64,
                        __int64) __asm__("GameRoutine_a51060");

__attribute__((swiftcall)) void HonorFile_9c7620(PSEUDO_X8, unsigned __int16*);

__attribute__((swiftcall)) void Manager_d54320(PSEUDO_X8);

__attribute__((swiftcall)) void game_d74a00(PSEUDO_X8, float*);

__int64* GameHr_f7cc80(__int64* result, __int64);

__int64* GameHr_f7cdc0(__int64* result, __int64*);

__int64* GameRoutine_f49a80_alt1(__int64**, unsigned __int8*,
                                 __int64**) __asm__("GameRoutine_f49a80");

__int64* game_8af240(__int64* result, __int64**);

__int64 DungeonRouteReport_f608a0(__int64);

__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");

__int64 GameRoutine_efb6f0_alt1(__int64, __int64,
                                _QWORD*) __asm__("GameRoutine_efb6f0");

__int64 GameRoutine_f48420_alt1(__int64, __int64,
                                int) __asm__("GameRoutine_f48420");

__int64 GameVariable_828dc0(__int64, __int64, int);

__int64 GlobalMapData_e27700_alt1(_QWORD*, const char*, unsigned __int64,
                                  const char*, unsigned __int64, __int64*,
                                  _DWORD*) __asm__("GlobalMapData_e27700");

__int64 IDeploy_7480e0(__int64, int, int, int*);

__int64 ItemSeq_8af940(__int64, __int64*, __int64, const char**, const char**,
                       char);

__int64 game_HashString(__int64 result);

__int64 game_ProcInst_Unregister(__int64 result);

__int64 memcpy(__int64, __int64, unsigned __int64);

__int64 memmove(__int64, __int64, unsigned __int64);

bool GameHr_fd9660(__int64, int*);

extern __int64 (*game_ProcInst_vtable[])();

extern __int64 (*game_hub_DungeonRouteParts_vtable[])();

extern __int64* game_vstring_kEmpty_ptr[2];

extern __int64* msg_MessageManager_instance__ptr[2];

extern __int64 fw_memory_g_heap_manager;

extern __int64 game_GameModeData_instance_;

extern __int64 game_hub_ProcHubSeqView_instance_;

int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");

unsigned __int64 GameRoutine_fd91f0_alt1(__int64, __int64,
                                         __int64) __asm__("GameRoutine_fd91f0");

void GameHr_e273d0(__int64);

void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");

void GameRoutine_6b7aa0_alt2(__int64, __int64*, __int64*,
                             unsigned __int64) __asm__("GameRoutine_6b7aa0");

void GameRoutine_f486e0_alt1(__int64,
                             unsigned int*) __asm__("GameRoutine_f486e0");

void GameRoutine_fd9090_alt1(__int64*, int**) __asm__("GameRoutine_fd9090");

void GameRoutine_fd9390_alt1(__int64, __int64, __int64,
                             __int64) __asm__("GameRoutine_fd9390");

void GameRoutine_fd94d0_alt1(__int64, __int64, __int64, __int64,
                             __int64) __asm__("GameRoutine_fd94d0");

void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");

void __attribute__((noreturn))
GameRoutine_f5e570_alt1() __asm__("GameRoutine_f5e570");

void __attribute__((noreturn))
GameRoutine_f618c0_alt1() __asm__("GameRoutine_f618c0");

void __attribute__((noreturn)) String_60a1d0();

void game_112d580(char*, __int64, __int64);

void game_HubDisposFileReader_CalcGroupNames(unsigned __int64, const char*,
                                             __int64*, char);

void GameHr_f41f00(unsigned __int16* a1);

void GameHr_f480c0(__int64 a1, __int64 a2);

__int64 GameHr_f482e0(__int64 a1);

__int64 GameHr_f49100(__int64 a1, const char* a2);

void GameHr_f499b0(__int64 a1);

void GameHr_f56340(__int64 a1, int a2);

void GameHr_f5d3e0(__int64 a1);

void GameHr_f5db40(__int64* a1, __int64 a2);

void GameHr_f60660(__int64 a1);

void GameHr_f72800(__int64 a1);

void GameHr_f7bc40(__int64 a1);

__int64 GameHr_f7c340(__int64 a1, _QWORD* a2, __int64* a3, __int64 a4, char a5,
                      __int64* a6);

void GameHr_f87180(__int64 a1, const char* a2);

void GameHr_f9c090(__int64 a1);

void GameHr_fd7500(unsigned __int64 a1, int* a2, __int64 a3, char a4);

void GameHr_fe7ea0(__int64* a1, unsigned __int64 a2);

__int64 GameHr_1000ce0();

void GameHr_10010d0(__int64 a1);

void GameHr_f3fa30()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  struct {
    __int64 v6;
    char gap16_[8];
    __int64 v7;
  } v6_;

  v0 = *(_QWORD*)(GameData_2203490 + 760);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_2203490 + 752);
    v2 = *(_QWORD*)(GameData_2203490 + 760);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 == 0 || v1 == 0) {
      if (v3 == 0) {
        return;
      }
    }
    else {
      v6_.v6 = 0xB381E39C96E50CLL;
      CmdBtlUnit_e7da80(v1, &v6_.v6, -0x1.0000000000000p+0f);
      if ((v6_.v6 & 1) != 0 && v6_.v7 != 0) {
        v5 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v6_.v7);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
}

__int64 GameHr_f41c80()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* i;
  __int64 v10;
  const char* v11;
  signed __int64 v12;
  const char* v13;
  __int64 v14;
  const char* v15;
  struct {
    unsigned __int8 v18[16];
    __int64 v19;
  } v18_;

  v0 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 64LL);
  v1 = *(_QWORD*)(v0 + 96);
  if (v1 != 0) {
    v3 = *(_QWORD*)(v1 + 24);
    v2 = *(_QWORD*)(v1 + 32);
    if (v2 == 0) {
      goto LABEL_14;
    }
  }
  else {
    *(_WORD*)v18_.v18 = 0;
    v4 = GameRoutine_c22420_alt1((_QWORD*)(v0 + 104), v18_.v18);
    if ((v18_.v18[0] & 1) != 0 && v18_.v19 != 0) {
      v5 = v4;
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v18_.v19);
      v4 = v5;
    }
    if (v4 == nullptr) {
      v3 = 0;
      goto LABEL_14;
    }
    v7 = v4[5];
    v3 = *(_QWORD*)(v7 + 24);
    v2 = *(_QWORD*)(v7 + 32);
    if (v2 == 0) {
      goto LABEL_14;
    }
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
LABEL_14:
  v8 = *(_QWORD**)(v3 + 88);
  for (i = *(_QWORD**)(v3 + 96); v8 != i; ++v8) {
    v10 = *v8;
    v11 = (const char*)(*v8 + 16LL);
    v12 = strlen(v11);
    if (v12 >= 7) {
      v13 = &v11[v12];
      v14 = (__int64)v11;
      do {
        v15 = (const char*)memchr(v14, 69, v12 - 6);
        if (v15 == nullptr) {
          break;
        }
        if (*(_DWORD*)v15 == 1600546373 && *(_DWORD*)(v15 + 3) == 1835616095) {
          if (v15 == v11 && *(_BYTE*)(v10 + 288) != 0) {
            *(_BYTE*)(v10 + 288) = 0;
          }
          break;
        }
        v14 = (__int64)(v15 + 1);
        v12 = v13 - (v15 + 1);
      } while (v12 >= 7);
    }
  }
  if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) -
                                       8LL) +
                            56LL) +
                 16LL) == 1) {
    v18_.v18[0] = 8;
    strcpy((char*)&v18_.v18[1], "Hell");
  }
  else {
    v18_.v18[0] = 12;
    strcpy((char*)&v18_.v18[1], "Normal");
  }
  ProcLoadWait_9a4d20(1, v18_.v18);
  v18_.v18[0] = 12;
  strcpy((char*)&v18_.v18[1], "Normal");
  ProcLoadWait_9a4d20(4, v18_.v18);
  v18_.v18[0] = 12;
  strcpy((char*)&v18_.v18[1], "Normal");
  ProcLoadWait_9a4d20(2, v18_.v18);
  *(_WORD*)v18_.v18 = 0;
  return ProcLoadWait_9a4d20(3, v18_.v18);
}

void GameHr_f41f00(unsigned __int16* a1)
{
  __int64 v1;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  const char* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 i;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;

  v1 = *a1;
  if (*a1 != 0) {
    v3 = 0;
    v4 = (__int64*)GameData_212c638;
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v6 = *v4;
      v7 = *(const char**)(*((_QWORD*)a1 + 1) + 8 * v3);
      v8 = strlen(v7);
      v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 32) - 8LL) + 64LL);
      if (v9 != 0) {
        v10 = *(_QWORD*)(v9 + 96);
        if (v10 != 0 && *(_DWORD*)(v10 + 240) == 5) {
          v11 = (_QWORD*)(v9 + 120);
          while (1) {
            v11 = (_QWORD*)*v11;
            if (v11 == nullptr) {
              break;
            }
            if (*(_DWORD*)(v11[5] + 240LL) != 5) {
              goto LABEL_3;
            }
          }
          wld_map_c20fe0((void*)(&v17_.v17), v9, (__int64)v7, v8);
          v12 = v17_.v17;
          v13 = v17_.v18;
          for (i = v17_.v17; i != v13; i += 8) {
            if (*(_BYTE*)(*(_QWORD*)i + 288LL) != 0) {
              *(_BYTE*)(*(_QWORD*)i + 288LL) = 0;
            }
          }
          if (v12 != 0) {
            v15 = *v5;
            v17_.v18 = v12;
            if (*(_QWORD*)(v15 + 200) != 0) {
              v16 = 128;
            }
            else {
              v16 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(v15 + v16, v12);
          }
        }
      }
    LABEL_3:
      ++v3;
    } while (v3 != v1);
  }
}

void GameHr_f42060(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  const char* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 i;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;

  v1 = *a1;
  v2 = a1[1];
  if (*a1 != v2) {
    v3 = (__int64*)GameData_212c638;
    v4 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v5 = *v3;
      if ((*(_BYTE*)v1 & 1) != 0) {
        v6 = *(const char**)(v1 + 16);
      }
      else {
        v6 = (const char*)(v1 + 1);
      }
      v7 = strlen(v6);
      v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 32) - 8LL) + 64LL);
      if (v8 != 0) {
        v9 = *(_QWORD*)(v8 + 96);
        if (v9 != 0 && *(_DWORD*)(v9 + 240) == 5) {
          v10 = (_QWORD*)(v8 + 120);
          while (1) {
            v10 = (_QWORD*)*v10;
            if (v10 == nullptr) {
              break;
            }
            if (*(_DWORD*)(v10[5] + 240LL) != 5) {
              goto LABEL_3;
            }
          }
          wld_map_c20fe0((void*)(&v16_.v16), v8, (__int64)v6, v7);
          v11 = v16_.v16;
          v12 = v16_.v17;
          for (i = v16_.v16; i != v12; i += 8) {
            if (*(_BYTE*)(*(_QWORD*)i + 288LL) != 0) {
              *(_BYTE*)(*(_QWORD*)i + 288LL) = 0;
            }
          }
          if (v11 != 0) {
            v14 = *v4;
            v16_.v17 = v11;
            if (*(_QWORD*)(v14 + 200) != 0) {
              v15 = 128;
            }
            else {
              v15 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(v14 + v15, v11);
          }
        }
      }
    LABEL_3:
      v1 += 24;
    } while (v1 != v2);
  }
}

__n128 GameHr_f47e80(__int64 a1, int a2, __int64* a3)
{
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  int v10;
  __int64 (*v11)();
  __int64 v12;
  __int64 v13;
  __n128 result;
  __int64 v15;
  _QWORD v16[3];
  _BYTE v18[24];
  int v19;
  _BYTE* v20;

  *(_WORD*)(a1 + 8) = 0;
  v4 = (__int64*)(a1 + 8);
  *(_QWORD*)(a1 + 64) = 0;
  *(_WORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 56) = a2;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0xFFFFFFFFLL;
  *(_QWORD*)a1 = GameData_1ff4f28;
  if (v4 != a3) {
    if ((*(_BYTE*)a3 & 1) != 0) {
      GameRoutine_64df20(v4, a3[2], a3[1]);
    }
    else {
      v6 = *a3;
      v7 = a3[2];
      v4[1] = a3[1];
      v4[2] = v7;
      *v4 = v6;
    }
  }
  v8 = a3[3];
  for (i = a3[4]; v8 != i; v8 += 32) {
    v18[0] = 0;
    v19 = -1;
    v10 = *(_DWORD*)(v8 + 24);
    if (v10 != -1) {
      v11 = GameData_1ff4fe0[v10];
      v20 = v18;
      ((void (*)(_BYTE**, __int64))v11)(&v20, v8);
      v19 = v10;
    }
    GameRoutine_eaec10(a1 + 64, v18);
    if (v19 != -1) {
      ((void (*)(_BYTE**, _BYTE*))GameData_1ff4fc8[v19])(&v20, v18);
    }
  }
  *(_DWORD*)(a1 + 96) = *((_DWORD*)a3 + 12);
  *(_DWORD*)(a1 + 88) = *((_DWORD*)a3 + 13);
  if ((a3[7] & 1) != 0) {
    GameRoutine_60a270(v16, a3[9], a3[8]);
  }
  else {
    v12 = a3[8];
    v13 = a3[9];
    v16[0] = a3[7];
    v16[1] = v12;
    v16[2] = v13;
  }
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)a1 + 120LL))(a1, v16);
  if ((v16[0] & 1) != 0 && v16[2] != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v15 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v15, (_QWORD)(v16[2]));
  }
  return result;
}

void GameHr_f480c0(__int64 a1, __int64 a2)
{
  char v4;
  __int64* v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v19;
    __int64 v20;
    __int64 v21;
  } v19_;

  if (game_GameModeData_instance_ != 0) {
    v4 = *(_BYTE*)(game_GameModeData_instance_ + 15);
  }
  else {
    v4 = 0;
  }
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = (_BYTE*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1, 16, 0);
  v7 = game_GameModeData_instance_;
  v8 = (__int64)v6;
  *v6 = v4;
  if (v7 != 0) {
    v9 = *(_DWORD*)(v7 + 60);
    v10 = *(_DWORD*)(v7 + 64);
  }
  else {
    v9 = 0;
    v10 = 0;
  }
  if (*(_QWORD*)GameData_212c6c8 != 0) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v11 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v11 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v12 = *(__int16*)(v11 + 2);
  }
  else {
    v12 = 1;
  }
  v13 = fw_memory_HeapManager_Allocate(*v5, 16, 16, 0);
  v14 = *v5;
  *(_BYTE*)v13 = v4;
  *(_DWORD*)(v13 + 4) = v9;
  *(_DWORD*)(v13 + 8) = v10;
  *(_DWORD*)(v13 + 12) = v12;
  v19_.v19 = v13;
  v19_.v20 = v13 + 16;
  v19_.v21 = v13 + 16;
  v15 = 128;
  if (*(_QWORD*)(v14 + 200) == 0) {
    v15 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(v14 + v15, v8);
  if ((*(_BYTE*)a2 & 1) != 0) {
    v16 = *(const char**)(a2 + 16);
  }
  else {
    v16 = (const char*)(a2 + 1);
  }
  game_HubDisposFileReader_CalcGroupNames(a1 + 8, v16, &v19_.v19, 0);
  if (v19_.v19 != 0) {
    v17 = *v5;
    v19_.v20 = v19_.v19;
    v18 = 128;
    if (*(_QWORD*)(v17 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v17 + v18, v19_.v19);
  }
}

__int64 GameHr_f482e0(__int64 a1)
{
  int v1;
  __int64 result;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    unsigned int v8;
    char gap12_[4];
    unsigned __int64 v9;
    __int64 v10;
  } v8_;

  v1 = *(_DWORD*)(a1 + 232);
  if (v1 == 0) {
    return 0;
  }
  if (v1 != 1 || (result = 0, v4 = *(_QWORD*)GameData_212dbb8[0],
                  (*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 12LL) & 1) == 0) &&
                     (*(_BYTE*)(v4 + 11) & 1) == 0 &&
                     (*(_BYTE*)(v4 + 13) & 1) == 0) {
    if (*(_QWORD*)(*(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 400) +
                   40LL) != 0) {
      return 0;
    }
    Manager_d54320((void*)(&v8_.v8));
    if ((v8_.v8 & 1) != 0) {
      v5 = v8_.v9;
    }
    else {
      v5 = (unsigned __int64)(unsigned __int8)v8_.v8 >> 1;
    }
    if ((v8_.v8 & 1) != 0 && v8_.v10 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v8_.v10);
    }
    if (v5 != 0) {
      return 0;
    }
    else {
      if (*(_DWORD*)(a1 + 232) == 3 && (*(_BYTE*)(a1 + 248) & 1) != 0) {
        if (game_hub_ProcHubSeqView_instance_ != 0) {
          v7 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 400);
        }
        else {
          v7 = 0;
        }
        GameRoutine_f48420_alt1(v7, a1, 3);
      }
      else {
        v8_.v8 = *(_DWORD*)(a1 + 232);
        GameRoutine_f486e0_alt1(a1, &v8_.v8);
      }
      *(_DWORD*)(a1 + 232) = 0;
      return 1;
    }
  }
  return result;
}

__int64 GameHr_f486e0(__int64 a1, _DWORD* a2)
{
  __int64 v2;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  __int16* v10;
  const char* v11;
  const char* v12;
  __int64 v13;
  long double v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  long double v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64* v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int128 v47;
  __int64 v48;
  int v49;
  _QWORD* v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 result;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64* i;
  __int64 v59;
  __int64 v60;
  int v61;
  _QWORD v62[2];
  char v63;
  _DWORD v64[3];

  v2 = (unsigned int)*a2;
  v5 = (__int64*)GameData_212dbb8[0];
  v6 = GameData_212dbc0[0];
  v7 = GameData_212ebe0;
  v8 = GameData_212ef18[0];
  v9 = GameData_212ef20;
  if ((_DWORD)v2 != 1) {
    if (GameData_21ee260 != 0) {
      v10 = (__int16*)(GameData_21ee260 + 8);
    }
    else {
      v10 = (__int16*)GameData_212cf60;
    }
    if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
      v11 = *(const char**)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
    }
    else {
      v11 = (const char*)(*(_QWORD*)GameData_212dbb8[0] + 65LL);
    }
    if ((unsigned int)v2 > 4) {
      v12 = nullptr;
    }
    else {
      v12 = (&GameData_1ff51b0)[2 * v2];
    }
    GameRoutine_1a09bf0(v62, "%s - Reload [%s] (%04d/%02d/%02d %02d:%02d:%02d)",
                        v11, v12, *v10, v10[1], v10[2], v10[3], v10[4], v10[5]);
    GameRoutine_f499b0(*(_QWORD*)(a1 + 216));
    v13 = *v5;
    *(_QWORD*)(a1 + 224) = 0;
    *(_QWORD*)(a1 + 208) = a1 + 216;
    *(_QWORD*)(a1 + 216) = 0;
    *(__n128*)&v14 = GameRoutine_f480c0(a1, v13 + 40);
    if ((unsigned int)(*a2 - 3) <= 1) {
      v15 = *v8;
      if (*(_BYTE*)(*v8 + 120) == 1) {
        *(_BYTE*)(v15 + 120) = 0;
      }
      v16 = *(_QWORD*)v6;
      *(_QWORD*)(v15 + 136) = *(_QWORD*)(v15 + 128);
      GameRoutine_d6f2a0(v16, v14);
    }
    v17 = (_QWORD*)(*GameData_212eee8[0] + 16);
    GameRoutine_e241d0(*GameData_212eee8[0] + 8, *v17);
    v18 = *v9;
    *v17 = 0;
    v17[1] = 0;
    *(v17 - 1) = v17;
    LOBYTE(v62[0]) = 0;
    v63 = 0;
    GameRoutine_f7cb70(v18 + 152, v62);
    if (v63 == 1 && v62[0] != 0) {
      v62[1] = v62[0];
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v20 = 56;
      }
      *(__n128*)&v19 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v20,
                                           (_QWORD)(v62[0]));
    }
    GameRoutine_d5d900(*v7, v19);
    v21 = *v5;
    *(_BYTE*)(*v9 + 184) = 0;
    if (v21 != 0) {
      v22 = v21 + 248;
    }
    else {
      v22 = 0;
    }
    if (GameData_22127a8 != 0) {
      v23 = GameData_22127a8;
    }
    else {
      v23 = v22;
    }
    GameRoutine_d9a760(v23);
    *(_BYTE*)(*(_QWORD*)v6 + 256LL) = 1;
  }
  if (*v5 != 0) {
    v24 = *v5 + 248;
  }
  else {
    v24 = 0;
  }
  if (GameData_22127a8 != 0) {
    v25 = (_QWORD*)GameData_22127a8;
  }
  else {
    v25 = (_QWORD*)v24;
  }
  if (v25[10] != 0) {
    v26 = (_QWORD*)v25[9];
    v27 = v9;
    if (v26 != nullptr) {
      v28 = GameData_212bf68;
      do {
        v29 = (_QWORD*)*v26;
        if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) != 0) {
          v30 = 128;
        }
        else {
          v30 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)v28 + v30, (_QWORD)(v26));
        v26 = v29;
      } while (v29 != nullptr);
    }
    v25[9] = 0;
    v9 = v27;
    v31 = v25[8];
    v8 = GameData_212ef18[0];
    v7 = GameData_212ebe0;
    v6 = GameData_212dbc0[0];
    if (v31 != 0) {
      v32 = v25[8] & 7LL;
      if (v31 >= 8) {
        v34 = v31 & 0xFFFFFFFFFFFFFFF8LL;
        v33 = 0;
        do {
          *(_QWORD*)(v25[7] + 8 * v33) = 0;
          *(_QWORD*)(v25[7] + 8 * v33 + 8) = 0;
          *(_QWORD*)(v25[7] + 8 * v33 + 16) = 0;
          *(_QWORD*)(v25[7] + 8 * v33 + 24) = 0;
          *(_QWORD*)(v25[7] + 8 * v33 + 32) = 0;
          *(_QWORD*)(v25[7] + 8 * v33 + 40) = 0;
          *(_QWORD*)(v25[7] + 8 * v33 + 48) = 0;
          v35 = v25[7] + 8 * v33;
          v33 += 8;
          *(_QWORD*)(v35 + 56) = 0;
        } while (v34 != v33);
      }
      else {
        v33 = 0;
      }
      if (v32 != 0) {
        v36 = 8 * v33;
        do {
          --v32;
          *(_QWORD*)(v25[7] + v36) = 0;
          v36 += 8;
        } while (v32 != 0);
      }
    }
    v25[10] = 0;
  }
  v37 = *(_QWORD**)v6;
  v38 = v37[22];
  v37 += 22;
  GameRoutine_d709d0(v37 - 1, v38);
  *v37 = 0;
  v37[1] = 0;
  *(v37 - 1) = v37;
  GameRoutine_f71a70(*GameData_212ebb0[0]);
  v39 = GameData_212ec00;
  GameRoutine_db3600(*(_QWORD*)GameData_212ec00, a2);
  if (*a2 != 1) {
    v40 = *(_QWORD*)GameData_212ef88[0];
    GameRoutine_fcd4a0(*(_QWORD*)GameData_212ef88[0]);
    GameRoutine_fcd580(v40);
  }
  GameRoutine_f94720(*(_QWORD*)GameData_212dc58[0], a2);
  GameRoutine_d5cdc0(*v7, a2);
  GameRoutine_cbb8c0(*(_QWORD*)GameData_212dc68, a2);
  GameRoutine_dff2a0(*GameData_212eec0[0], a2);
  if (*a2 != 1) {
    GameRoutine_fce960(*(_QWORD*)GameData_212ef88[0]);
  }
  v42 = *(__int64**)(*(_QWORD*)v39 + 8LL);
  v43 = *(__int64**)(*(_QWORD*)v39 + 16LL);
  while (v42 != v43) {
    v44 = *v42;
    v45 = *(unsigned __int8*)(*v42 + 704);
    if ((v45 & 1) != 0) {
      v46 = *(_QWORD*)(*v42 + 712);
    }
    else {
      v46 = v45 >> 1;
    }
    if (v46 != 0) {
      *(_QWORD*)&v47 = *(_QWORD*)(v44 + 160);
      LODWORD(v41) = *(_DWORD*)(v44 + 168);
      v48 = *v42;
      *((_QWORD*)&v47 + 1) = v41;
      v64[0] = *(_DWORD*)(v44 + 172);
      *(_OWORD*)v62 = v47;
      GameRoutine_df7d60(v48, v62, v64);
      v49 = v62[1];
      *(_QWORD*)(v44 + 160) = v62[0];
      *(_DWORD*)(v44 + 168) = v49;
      *(_DWORD*)(v44 + 172) = v64[0];
    }
    v42 += 2;
  }
  GameRoutine_e25100(*v8);
  GameRoutine_ff7c00(*(_QWORD*)GameData_212ef98[0], a2);
  v50 = *(_QWORD**)(*GameData_212d458[0] + 24);
  v51 = *(_QWORD**)(*GameData_212d458[0] + 32);
  while (v50 != v51) {
    if (*v50 != 0) {
      GameRoutine_cab4e0();
    }
    v50 += 2;
  }
  if (*a2 != 1) {
    if (*v5 != 0) {
      v52 = *v5 + 248;
    }
    else {
      v52 = 0;
    }
    if (GameData_22127a8 != 0) {
      v53 = GameData_22127a8;
    }
    else {
      v53 = v52;
    }
    GameRoutine_d9a9c0(v53);
  }
  result = GameRoutine_f72f60(*v9);
  if (*a2 != 1) {
    result = GameRoutine_ee0900(*GameData_212ec18[0]);
  }
  v55 = *GameData_212ebc0[0];
  v56 = *(_QWORD*)(*GameData_212ebc0[0] + 8);
  if (v56 != 0) {
    v57 = *(__int64**)(v56 + 8);
    for (i = *(__int64**)(v56 + 16); v57 != i;
         result = GameRoutine_d7e220(v59)) {
      v59 = *v57;
      v57 += 2;
    }
  }
  v60 = *(_QWORD*)(v55 + 40);
  if (v60 != 0) {
    result = GameRoutine_18f3b60();
    *(_BYTE*)(*(_QWORD*)(v60 + 88) + 777LL) = 1;
  }
  *(_BYTE*)(a1 + 248) = 1;
  v61 = *(_DWORD*)(a1 + 252);
  if (v61 <= 2) {
    v61 = 2;
  }
  *(_DWORD*)(a1 + 252) = v61;
  return result;
}

__int64 GameHr_f49100(__int64 a1, const char* a2)
{
  const char* v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  int v20;
  int v21;
  bool v22;
  __int64 v23;
  unsigned __int64 v24;
  bool v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 result;
  char v34;
  int v35;
  int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  char* v45;
  int v46;
  char v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64* v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64* v57;
  int v58;
  char* v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  char* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  const char* v73;
  int v74;
  struct {
    __int64* v75[2];
    __int64 v76;
  } v75_;
  struct {
    __int64** v77;
    __int64 v78;
    char* v79;
  } v77_;

  v2 = a2;
  v4 = strlen(a2);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_123;
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v7, 16, 0);
    v77_.v78 = v5;
    v77_.v79 = v6;
    v77_.v77 = (__int64**)(v7 | 1);
    goto LABEL_9;
  }
  LOBYTE(v77_.v77) = 2 * v4;
  v6 = (char*)&v77_.v77 + 1;
  if (v4 != 0) {
  LABEL_9:
    memmove((__int64)v6, (__int64)v2, v5);
  }
  v6[v5] = 0;
  v8 = a1 + 216;
  v9 = *(_QWORD*)(a1 + 216);
  if (v9 == 0) {
    v31 = a1 + 216;
    if (((unsigned __int8)v77_.v77 & 1) == 0) {
      goto LABEL_64;
    }
    goto LABEL_60;
  }
  v10 = a1 + 216;
  v73 = v2;
  v11 = a1;
  if (((unsigned __int8)v77_.v77 & 1) != 0) {
    v12 = v77_.v79;
  }
  else {
    v12 = (char*)&v77_.v77 + 1;
  }
  if (((unsigned __int8)v77_.v77 & 1) != 0) {
    v13 = v77_.v78;
  }
  else {
    v13 = (unsigned __int64)(unsigned __int8)v77_.v77 >> 1;
  }
  do {
    v14 = *(unsigned __int8*)(v9 + 32);
    v15 = (v14 & 1) == 0;
    v16 = v14 >> 1;
    if (v15) {
      v17 = v16;
    }
    else {
      v17 = *(_QWORD*)(v9 + 40);
    }
    if (v15) {
      v18 = v9 + 33;
    }
    else {
      v18 = *(_QWORD*)(v9 + 48);
    }
    if (v13 >= v17) {
      v19 = v17;
    }
    else {
      v19 = v13;
    }
    v20 = memcmp_alt1(v18, (__int64)v12, v19);
    if (v17 < v13) {
      v21 = -1;
    }
    else {
      v21 = 1;
    }
    if (v17 == v13) {
      v21 = 0;
    }
    if (v20 != 0) {
      v21 = v20;
    }
    v22 = v21 < 0;
    if (v21 >= 0) {
      v23 = 0;
    }
    else {
      v23 = 8;
    }
    if (!v22) {
      v10 = v9;
    }
    v9 = *(_QWORD*)(v9 + v23);
  } while (v9 != 0);
  if (v10 == v8) {
    v31 = v8;
  }
  else {
    v24 = *(unsigned __int8*)(v10 + 32);
    v25 = (v24 & 1) == 0;
    v26 = v24 >> 1;
    if (v25) {
      v27 = v26;
    }
    else {
      v27 = *(_QWORD*)(v10 + 40);
    }
    if (v25) {
      v28 = v10 + 33;
    }
    else {
      v28 = *(_QWORD*)(v10 + 48);
    }
    if (v27 >= v13) {
      v29 = v13;
    }
    else {
      v29 = v27;
    }
    v30 = memcmp_alt1((__int64)v12, v28, v29);
    if (v30 != 0) {
      if (v30 >= 0) {
        v31 = v10;
      }
      else {
        v31 = v8;
      }
    }
    else if (v13 >= v27) {
      v31 = v10;
    }
    else {
      v31 = v8;
    }
  }
  a1 = v11;
  v2 = v73;
  if (((unsigned __int8)v77_.v77 & 1) != 0) {
  LABEL_60:
    if (v77_.v79 != nullptr) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (__int64)v77_.v79);
    }
  }
LABEL_64:
  if (v8 != v31) {
    return *(_QWORD*)(v31 + 56);
  }
  if (game_GameModeData_instance_ != 0) {
    v34 = *(_BYTE*)(game_GameModeData_instance_ + 15);
    v35 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    v36 = *(_DWORD*)(game_GameModeData_instance_ + 64);
  }
  else {
    v35 = 0;
    v34 = 0;
    v36 = 0;
  }
  if (*(_QWORD*)GameData_212c6c8 != 0) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v37 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v37 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v38 = *(__int16*)(v37 + 2);
  }
  else {
    v38 = 1;
  }
  v39 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       224, 16, 0);
  *(_QWORD*)(v39 + 16) = 0;
  v40 = v39;
  v41 = GameData_212eb88;
  *(_QWORD*)v39 = GameData_1ff5210;
  *(_QWORD*)(v39 + 8) = 0;
  *(_QWORD*)(v39 + 32) = 0;
  *(_QWORD*)(v39 + 40) = 0;
  *(_QWORD*)(v39 + 48) = 0;
  *(_QWORD*)(v39 + 56) = 0;
  *(_QWORD*)(v39 + 64) = 0;
  *(_QWORD*)(v39 + 72) = 0;
  *(_QWORD*)(v39 + 80) = 0;
  *(_QWORD*)(v39 + 88) = 0;
  *(_QWORD*)(v39 + 96) = 0;
  *(_QWORD*)(v39 + 104) = 0;
  *(_QWORD*)(v39 + 112) = 0;
  *(_QWORD*)(v39 + 120) = 0;
  *(_QWORD*)(v39 + 128) = 0;
  *(_QWORD*)(v39 + 136) = 0;
  *(_QWORD*)(v39 + 144) = 0;
  *(_QWORD*)(v39 + 152) = 0;
  *(_QWORD*)(v39 + 160) = 0;
  *(_QWORD*)(v39 + 168) = 0;
  *(_QWORD*)(v39 + 176) = 0;
  *(_QWORD*)(v39 + 184) = 0;
  *(_QWORD*)(v39 + 192) = 0;
  *(_QWORD*)(v39 + 200) = 0;
  *(_QWORD*)(v39 + 208) = 0;
  *(_BYTE*)(v39 + 216) = 0;
  *(_QWORD*)(v39 + 24) = v41 + 2;
  v42 = v39 + 24;
  v43 = strlen(v2);
  if (v43 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_123:
    String_60a1d0();
  }
  v44 = v43;
  v74 = v38;
  if (v43 >= 0x17) {
    v46 = v36;
    v47 = v34;
    v48 = v35;
    if ((v43 | 7) == 0x17) {
      v49 = 26;
    }
    else {
      v49 = (v43 | 7) + 1;
    }
    v50 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v49, 16, 0);
    v51 = (__int64*)(v49 | 1);
    v45 = (char*)v50;
    v77_.v78 = v44;
    v77_.v79 = (char*)v50;
    v35 = v48;
    v34 = v47;
    v36 = v46;
    v77_.v77 = (__int64**)v51;
  }
  else {
    LOBYTE(v77_.v77) = 2 * v43;
    v45 = (char*)&v77_.v77 + 1;
    if (v43 == 0) {
      goto LABEL_84;
    }
  }
  memmove((__int64)v45, (__int64)v2, v44);
LABEL_84:
  v45[v44] = 0;
  v75_.v75[0] = (__int64*)&v77_.v77;
  v52 = GameRoutine_f49a80_alt1((__int64**)(a1 + 208),
                                (unsigned __int8*)&v77_.v77, v75_.v75);
  v53 = v52[8];
  v52[7] = v42;
  v52[8] = v40;
  if (v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    std___1___shared_weak_count___release_weak(v53);
  }
  v54 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (((unsigned __int8)v77_.v77 & 1) != 0 && v77_.v79 != nullptr) {
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, (__int64)v77_.v79);
  }
  v56 = strlen(v2);
  if (v56 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_123;
  }
  v57 = (__int64*)v56;
  if (v56 >= 0x17) {
    if ((v56 | 7) == 0x17) {
      v60 = 26;
    }
    else {
      v60 = (v56 | 7) + 1;
    }
    v61 = fw_memory_HeapManager_Allocate(*v54, v60, 16, 0);
    v62 = (__int64*)(v60 | 1);
    v58 = v74;
    v59 = (char*)v61;
    v75_.v75[1] = v57;
    v75_.v76 = v61;
    v75_.v75[0] = v62;
    goto LABEL_100;
  }
  v58 = v74;
  LOBYTE(v75_.v75[0]) = 2 * v56;
  v59 = (char*)v75_.v75 + 1;
  if (v56 != 0) {
  LABEL_100:
    memmove((__int64)v59, (__int64)v2, (unsigned __int64)v57);
  }
  *((_BYTE*)v57 + (_QWORD)v59) = 0;
  v77_.v77 = v75_.v75;
  v63 =
      GameRoutine_f49a80_alt1((__int64**)(a1 + 208), (unsigned __int8*)v75_.v75,
                              (__int64**)&v77_.v77)[7];
  v64 = fw_memory_HeapManager_Allocate(*v54, 16, 16, 0);
  *(_BYTE*)v64 = v34;
  *(_DWORD*)(v64 + 4) = v35;
  *(_DWORD*)(v64 + 8) = v36;
  *(_DWORD*)(v64 + 12) = v58;
  v77_.v77 = (__int64**)v64;
  v77_.v78 = v64 + 16;
  v77_.v79 = (char*)(v64 + 16);
  game_HubDisposFileReader_CalcGroupNames(v63, v2, (__int64*)&v77_.v77, 0);
  v65 = 128;
  if (*(_QWORD*)(*v54 + 200) == 0) {
    v65 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*v54 + v65, v64);
  if (((__int64)v75_.v75[0] & 1) != 0 && v75_.v76 != 0) {
    v66 = 128;
    if (*(_QWORD*)(*v54 + 200) == 0) {
      v66 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v54 + v66, v75_.v76);
  }
  v67 = strlen(v2);
  if (v67 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_123;
  }
  v68 = v67;
  if (v67 >= 0x17) {
    if ((v67 | 7) == 0x17) {
      v70 = 26;
    }
    else {
      v70 = (v67 | 7) + 1;
    }
    v69 = (char*)fw_memory_HeapManager_Allocate(*v54, v70, 16, 0);
    v77_.v78 = v68;
    v77_.v79 = v69;
    v77_.v77 = (__int64**)(v70 | 1);
  }
  else {
    LOBYTE(v77_.v77) = 2 * v67;
    v69 = (char*)&v77_.v77 + 1;
    if (v67 == 0) {
      goto LABEL_117;
    }
  }
  memmove((__int64)v69, (__int64)v2, v68);
LABEL_117:
  v69[v68] = 0;
  v75_.v75[0] = (__int64*)&v77_.v77;
  result = GameRoutine_f49a80_alt1((__int64**)(a1 + 208),
                                   (unsigned __int8*)&v77_.v77, v75_.v75)[7];
  if (((unsigned __int8)v77_.v77 & 1) != 0 && v77_.v79 != nullptr) {
    v71 = result;
    v72 = 128;
    if (*(_QWORD*)(*v54 + 200) == 0) {
      v72 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v54 + v72, (__int64)v77_.v79);
    return v71;
  }
  return result;
}

void GameHr_f499b0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (a1 != 0) {
    GameHr_f499b0(*(_QWORD*)a1);
    GameHr_f499b0(*(_QWORD*)(a1 + 8));
    v2 = *(_QWORD*)(a1 + 64);
    if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
    v3 = fw_memory_g_heap_manager_ptr;
    if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
      v4 = *(_QWORD*)(a1 + 48);
      if (v4 != 0) {
        v5 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
      }
    }
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v6, a1);
  }
}

void GameHr_f4b1e0(__int64 a1, int a2, __int64* a3)
{
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  int v10;
  __int64 (*v11)();
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v15[2];
    __int64 v16;
  } v15_;
  struct {
    _BYTE v17[24];
    int v18;
  } v17_;
  _BYTE* v19;

  *(_WORD*)(a1 + 8) = 0;
  v4 = (__int64*)(a1 + 8);
  *(_QWORD*)(a1 + 64) = 0;
  *(_WORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 56) = a2;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0xFFFFFFFFLL;
  *(_QWORD*)a1 = game_cmdbtl_CmdBtlEventStockBase_vtable;
  if (v4 != a3) {
    if ((*(_BYTE*)a3 & 1) != 0) {
      GameRoutine_64df20_alt1(v4, a3[2], a3[1]);
    }
    else {
      v6 = *a3;
      v7 = a3[2];
      v4[1] = a3[1];
      v4[2] = v7;
      *v4 = v6;
    }
  }
  v8 = a3[3];
  for (i = a3[4]; v8 != i; v8 += 32) {
    v17_.v17[0] = 0;
    v17_.v18 = -1;
    v10 = *(_DWORD*)(v8 + 24);
    if (v10 != -1) {
      v11 = GameData_1ff5508[v10];
      v19 = v17_.v17;
      ((void (*)(_BYTE**, __int64))v11)(&v19, v8);
      v17_.v18 = v10;
    }
    GameRoutine_eaec10_alt1((__int64*)(a1 + 64), (__int64)v17_.v17);
    if (v17_.v18 != -1) {
      ((void (*)(_BYTE**, _BYTE*))decltype_c81af0_ptr[v17_.v18])(&v19,
                                                                 v17_.v17);
    }
  }
  *(_DWORD*)(a1 + 96) = *((_DWORD*)a3 + 12);
  *(_DWORD*)(a1 + 100) = *((_DWORD*)a3 + 13);
  *(_DWORD*)(a1 + 88) = *((_DWORD*)a3 + 14);
  if ((a3[8] & 1) != 0) {
    fw_text_String_CopyTerminated(v15_.v15, a3[10], a3[9]);
  }
  else {
    v12 = a3[9];
    v13 = a3[10];
    v15_.v15[0] = a3[8];
    v15_.v15[1] = v12;
    v15_.v16 = v13;
  }
  (*(void (**)(__int64, __int64*))(*(_QWORD*)a1 + 120LL))(a1, v15_.v15);
  if ((v15_.v15[0] & 1) != 0 && v15_.v16 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v15_.v16);
  }
}

void GameHr_f5cfa0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  const char* v10[2];
  _QWORD v11[6];
  char v12;
  char v13;
  char v14;
  __int64 v15;
  __int64 v16;
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
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  int v32;

  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v2 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v3 = *(_QWORD*)v2;
  v4 = *(_DWORD*)(v2 + 8);
  v31 = v3;
  v32 = v4;
  v5 = GameData_212cc78_alt1[0];
  v6 = *(_QWORD*)(*(_QWORD*)GameData_212cc78_alt1[0] + 64LL);
  if ((int)((unsigned __int64)(*(_QWORD*)(*(_QWORD*)GameData_212cc78_alt1[0] +
                                          72LL) -
                               v6) >>
            3) < 1) {
  LABEL_8:
    v8 = 0;
  }
  else {
    v7 = 0;
    while ((GameRoutine_efdf40_alt1(*(_QWORD*)(v6 + 8 * v7), (__int16*)&v31) &
            1) == 0) {
      ++v7;
      v6 = *(_QWORD*)(*(_QWORD*)v5 + 64LL);
      if (v7 >=
          (int)((unsigned __int64)(*(_QWORD*)(*(_QWORD*)v5 + 72LL) - v6) >>
                3)) {
        goto LABEL_8;
      }
    }
    v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v5 + 64LL) + 8 * v7);
  }
  *(_QWORD*)(a1 + 216) = v8;
  v13 = 0;
  v14 = 0;
  v12 = 0;
  v30 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  LOBYTE(v28) = 0;
  memset(v11, 0, sizeof(v11));
  v15 = 0x500000005LL;
  v10[0] = *(const char**)(v8 + 48);
  v10[1] = (const char*)strlen(v10[0]);
  GameRoutine_eb7d20_alt1((__int64)v11, (__int64*)v10, 5u);
  ProcCmdBtlSeq_e61c90((__int64)&GameData_2216780, (__int64)v11);
  if (v30 == 1 && v28 != 0) {
    v29 = v28;
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v28);
  }
  GameHr_667c80((__int64)v11);
}

void GameHr_f5d3e0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  _QWORD v6[3];

  v2 = *(_QWORD*)GameData_212dbf0[0];
  v3 = fw_memory_g_heap_manager_ptr;
  v4 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v6[0] = 33;
  v6[1] = 30;
  v6[2] = v4;
  strcpy(v4, "MID_LGV_XXX_Arena_Watching_m01");
  GameRoutine_efb6f0_alt1(v2, a1, v6);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v5, (__int64)v4);
}

void GameHr_f5db40(__int64* a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  bool v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;

  v3 = a1[1];
  v2 = a1[2];
  if (v3 >= v2) {
    v9 = *a1;
    v10 = v3 - *a1;
    v11 = (v10 >> 5) + 1;
    if (v11 >> 59 != 0) {
      GameRoutine_f5e570_alt1();
    }
    v12 = v2 - v9;
    if (v12 >> 4 > v11) {
      v11 = v12 >> 4;
    }
    v13 = (unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFE0LL;
    v14 = 0x7FFFFFFFFFFFFFFLL;
    if (!v13) {
      v14 = v11;
    }
    if (v14 >> 59 != 0) {
      GameRoutine_60a210_alt1();
    }
    v15 = 32 * v14;
    v16 = fw_memory_g_heap_manager_ptr;
    v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         32 * v14, 16, 0);
    v18 = *(_QWORD*)(a2 + 8);
    v19 = v17 + v10;
    *(_QWORD*)v19 = *(_QWORD*)a2;
    *(_QWORD*)(v19 + 8) = v18;
    *(_QWORD*)(v19 + 16) = *(_QWORD*)(a2 + 16);
    v20 = *(_BYTE*)(a2 + 24);
    v8 = v17 + v10 + 32;
    *(_BYTE*)(v19 + 24) = v20;
    if (v9 != v3) {
      v21 = v9;
      v22 = v17 + v10 - 32 * (v10 >> 5);
      do {
        v23 = *(_QWORD*)(v21 + 8);
        *(_QWORD*)v22 = *(_QWORD*)v21;
        *(_QWORD*)(v22 + 8) = v23;
        v24 = *(_QWORD*)(v21 + 16);
        v25 = *(_BYTE*)(v21 + 24);
        v21 += 32;
        *(_BYTE*)(v22 + 24) = v25;
        *(_QWORD*)(v22 + 16) = v24;
        v22 += 32;
      } while (v21 != v3);
    }
    *a1 = v17 + v10 - 32 * (v10 >> 5);
    a1[1] = v8;
    a1[2] = v17 + v15;
    if (v9 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v16 + v26, v9);
    }
  }
  else {
    v6 = *(_QWORD*)(a2 + 8);
    *(_QWORD*)v3 = *(_QWORD*)a2;
    *(_QWORD*)(v3 + 8) = v6;
    v7 = *(_QWORD*)(a2 + 16);
    v8 = v3 + 32;
    *(_BYTE*)(v3 + 24) = *(_BYTE*)(a2 + 24);
    *(_QWORD*)(v3 + 16) = v7;
  }
  a1[1] = v8;
}

__int64 GameHr_f5ffc0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  struct {
    __int64* v14;
    __int64 v15;
  } v14_;
  struct {
    _QWORD v16[2];
    __int64 v17;
  } v16_;

  *(_BYTE*)a1 = 0;
  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      296, 16, 0);
  *(_QWORD*)(v3 + 16) = 0;
  v4 = GameData_2131678;
  *(_DWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_DWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_WORD*)(v3 + 80) = 0;
  *(_WORD*)(v3 + 116) = 0;
  *(_WORD*)(v3 + 136) = 0;
  *(_BYTE*)(v3 + 160) = 0;
  *(_BYTE*)(v3 + 288) = 0;
  *(_QWORD*)(v3 + 272) = 0;
  *(_QWORD*)(v3 + 280) = 0;
  *(_QWORD*)(v3 + 256) = 0;
  *(_QWORD*)(v3 + 264) = 0;
  *(_QWORD*)(v3 + 240) = 0;
  *(_QWORD*)(v3 + 248) = 0;
  *(_QWORD*)(v3 + 224) = 0;
  *(_QWORD*)(v3 + 232) = 0;
  *(_QWORD*)(v3 + 208) = 0;
  *(_QWORD*)(v3 + 216) = 0;
  *(_QWORD*)(v3 + 192) = 0;
  *(_QWORD*)(v3 + 200) = 0;
  *(_QWORD*)(v3 + 176) = 0;
  *(_QWORD*)(v3 + 184) = 0;
  *(_QWORD*)(v3 + 168) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_DWORD*)(v3 + 127) = 0;
  *(_QWORD*)(a1 + 16) = v3;
  *(_QWORD*)v3 = v4 + 16;
  *(_QWORD*)(v3 + 8) = 0;
  *(_DWORD*)(v3 + 48) = 0x2000;
  *(_WORD*)(v3 + 108) = 256;
  *(_DWORD*)(v3 + 112) = -1082130432;
  *(_DWORD*)(v3 + 292) = 2;
  v5 = *(_QWORD*)GameData_212dc48[0];
  *(_QWORD*)(v3 + 24) = 0;
  *(_QWORD*)(a1 + 8) = v3 + 24;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v13 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v13;
    __cxa_guard_release((__int64)&GameData_21a6130);
  }
  game_hub_e1b4d0((void*)(v16_.v16));
  game_hub_e1bfe0((void*)(&v14_.v14), v5, (__int64)v16_.v16,
                  (__int64*)&GameData_21a6120);
  if ((v16_.v16[0] & 1) != 0 && v16_.v17 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v6, v16_.v17);
  }
  v7 = v14_.v14;
  v8 = v14_.v15;
  if (v14_.v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14_.v15 + 8), 1u,
                              memory_order_relaxed);
  }
  v9 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 8) = v7;
  *(_QWORD*)(a1 + 16) = v8;
  if (v9 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
    v8 = *(_QWORD*)(a1 + 16);
  }
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
  }
  v10 = v14_.v15;
  if (v14_.v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14_.v15 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  result = *(_QWORD*)(a1 + 8);
  *(_BYTE*)a1 = 0;
  v12 = *(_QWORD*)result;
  if (*(_QWORD*)result == 0) {
    return game_14a1b00((__int64*)result, 0x0.0p+0f);
  }
  if (*(_DWORD*)(v12 + 16) != *(_DWORD*)(result + 8) ||
      (*(_BYTE*)(v12 + 33) = 0, *(_BYTE*)a1 == 0)) {
    result = *(_QWORD*)(a1 + 8);
    return game_14a1b00((__int64*)result, 0x0.0p+0f);
  }
  return result;
}

void GameHr_f60660(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  float v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  __int64* v11;
  __int64 v12;
  float v13;
  float v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;

  DungeonRouteReport_f608a0(a1);
  v2 = *(float*)(a1 + 72);
  if (v2 > 0x0.0p+0f) {
    v3 = *(float*)(a1 + 68);
    v4 = *(_QWORD*)(a1 + 8);
    v5 = (int)(float)(v3 / v2);
    if (v5 > (*(_QWORD*)(a1 + 24) - v4) >> 3) {
      if ((v5 & 0x80000000) != 0) {
      LABEL_28:
        GameRoutine_f618c0_alt1();
      }
      v6 = fw_memory_g_heap_manager_ptr;
      v7 = *(_QWORD*)(a1 + 16) - v4;
      v8 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v5, 16, 0);
      memcpy(v8, v4, v7);
      *(_QWORD*)(a1 + 8) = v8;
      *(_QWORD*)(a1 + 16) = v8 + v7;
      *(_QWORD*)(a1 + 24) = v8 + 8 * v5;
      if (v4 != 0) {
        v9 = 128;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v9, v4);
        v3 = *(float*)(a1 + 68);
      }
    }
    if (v3 > 0x0.0p+0f) {
      v10 = 0x0.0p+0f;
      v11 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        v15 = fw_memory_HeapManager_Allocate(*v11, 96, 16, 0);
        v17 = *(__int64**)(a1 + 16);
        v16 = *(_QWORD*)(a1 + 24);
        *(_QWORD*)v15 = game_hub_DungeonRouteParts_vtable;
        *(_QWORD*)(v15 + 40) = 0;
        *(_QWORD*)(v15 + 48) = 0;
        *(_DWORD*)(v15 + 56) = 0;
        *(_QWORD*)(v15 + 64) = -1;
        *(_BYTE*)(v15 + 72) = 0;
        *(_QWORD*)(v15 + 80) = 0;
        *(_QWORD*)(v15 + 24) = a1;
        *(_QWORD*)(v15 + 32) = 0;
        *(_QWORD*)(v15 + 12) = 0;
        *(float*)(v15 + 8) = v10;
        if ((unsigned __int64)v17 < v16) {
          *v17 = v15;
          v12 = (__int64)(v17 + 1);
        }
        else {
          v18 = *(_QWORD*)(a1 + 8);
          v19 = (unsigned __int64)v17 - v18;
          v20 = ((__int64)v17 - v18) >> 3;
          v21 = v20 + 1;
          if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
            goto LABEL_28;
          }
          v22 = v16 - v18;
          if (v22 >> 2 > v21) {
            v21 = v22 >> 2;
          }
          if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
            v23 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v23 = v21;
          }
          if (v23 != 0) {
            if (v23 >> 61 != 0) {
              GameRoutine_60a210_alt1();
            }
            v24 = v15;
            v25 = fw_memory_HeapManager_Allocate(*v11, 8 * v23, 16, 0);
            v15 = v24;
          }
          else {
            v25 = 0;
          }
          v26 = v25 + 8 * v23;
          v27 = v25 + v19 - 8 * v20;
          *(_QWORD*)(v25 + v19) = v15;
          v12 = v25 + v19 + 8;
          memcpy(v27, v18, v19);
          *(_QWORD*)(a1 + 8) = v27;
          *(_QWORD*)(a1 + 16) = v12;
          *(_QWORD*)(a1 + 24) = v26;
          if (v18 != 0) {
            v28 = 128;
            if (*(_QWORD*)(*v11 + 200) == 0) {
              v28 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v11 + v28, v18);
          }
        }
        v14 = *(float*)(a1 + 68);
        v13 = *(float*)(a1 + 72);
        *(_QWORD*)(a1 + 16) = v12;
        v10 = v10 + v13;
      } while (v10 < v14);
    }
  }
}

void GameHr_f72800(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (a1 != 0) {
    GameHr_f72800(*(_QWORD*)a1);
    GameHr_f72800(*(_QWORD*)(a1 + 8));
    v2 = *(_QWORD*)(a1 + 56);
    v3 = fw_memory_g_heap_manager_ptr;
    if (v2 != 0) {
      v4 = *(_QWORD*)(a1 + 64);
      if (v2 == v4) {
        goto LABEL_11;
      }
      do {
        v5 = *(_QWORD*)(v4 - 8);
        if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
        }
        v4 -= 16;
      } while (v4 != v2);
      v6 = *(_QWORD*)(a1 + 56);
      *(_QWORD*)(a1 + 64) = v2;
      v2 = v6;
      if (v6 != 0) {
      LABEL_11:
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v2);
      }
    }
    if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
      v8 = *(_QWORD*)(a1 + 48);
      if (v8 != 0) {
        v9 = 128;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, v8);
      }
    }
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, a1);
  }
}

void GameHr_f7bc40(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  if (*(_BYTE*)(a1 + 144) == 1 && (*(_BYTE*)(a1 + 120) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 136);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  if (*(_BYTE*)(a1 + 112) == 1 && (*(_BYTE*)(a1 + 88) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 104);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  if (*(_BYTE*)(a1 + 64) == 1) {
    if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
      v6 = *(_QWORD*)(a1 + 56);
      if (v6 != 0) {
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
      }
    }
    v8 = *(_QWORD*)(a1 + 16);
    if (v8 != 0) {
      v9 = *(_QWORD*)(a1 + 24);
      if (v8 == v9) {
        goto LABEL_30;
      }
      v10 = *(_QWORD*)(a1 + 24);
      v11 = fw_memory_g_heap_manager_ptr;
      do {
        v12 = *(_BYTE*)(v10 - 24);
        v10 -= 24;
        if ((v12 & 1) != 0) {
          v13 = *(_QWORD*)(v9 - 8);
          if (v13 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
              v14 = 128;
            }
            else {
              v14 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v14, v13);
          }
        }
        v9 = v10;
      } while (v10 != v8);
      v15 = *(_QWORD*)(a1 + 16);
      *(_QWORD*)(a1 + 24) = v8;
      v8 = v15;
      if (v15 != 0) {
      LABEL_30:
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v8);
      }
    }
  }
}

__int64 GameHr_f7c340(__int64 a1, _QWORD* a2, __int64* a3, __int64 a4, char a5,
                      __int64* a6)
{
  __int64 v6;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64* v39;
  unsigned __int64 v40;
  bool v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  const char* v45;
  bool v46;
  unsigned __int64 v47;
  const char* v48;
  unsigned __int64 v49;
  int v50;
  unsigned int v51;
  __int64 v52;
  _QWORD* v53;
  __int64* v54;
  __int64* v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  char* v63;
  char v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  char v69;
  int v70;
  struct {
    __int64 v71;
    __int64 v72;
    __int64 v73;
  } v71_;

  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = *a6;
  *(_BYTE*)(a1 + 8) = *((_BYTE*)a6 + 8);
  *(_QWORD*)a1 = v6;
  if (*(unsigned __int8*)(a1 + 64) == *((unsigned __int8*)a6 + 64)) {
    if ((__int64*)a1 != a6 && *(_BYTE*)(a1 + 64) != 0) {
      GameRoutine_6b7aa0_alt2(a1 + 16, (__int64*)a6[2], (__int64*)a6[3],
                              0xAAAAAAAAAAAAAAABLL * ((a6[3] - a6[2]) >> 3)),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v13 = (__int64*)(a1 + 40);
      v14 = *((unsigned __int8*)a6 + 40);
      if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
        v26 = (v14 & 1) == 0;
        v27 = v14 >> 1;
        if (v26) {
          v28 = (char*)a6 + 41;
        }
        else {
          v28 = (char*)a6[7];
        }
        if (v26) {
          v29 = v27;
        }
        else {
          v29 = a6[6];
        }
        SpineModel_64dde0(v13, (__int64)v28, v29),
            v64 = COERCE_AS(__typeof__(v64),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else if ((v14 & 1) != 0) {
        GameRoutine_64df20_alt1(v13, a6[7], a6[6]),
            v64 = COERCE_AS(__typeof__(v64),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v15 = a6[5];
        v16 = a6[7];
        *(_QWORD*)(a1 + 48) = a6[6];
        *(_QWORD*)(a1 + 56) = v16;
        *v13 = v15;
      }
    }
  }
  else if (*(_BYTE*)(a1 + 64) != 0) {
    if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
      v17 = *(_QWORD*)(a1 + 56);
      if (v17 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v17),
            v64 = COERCE_AS(__typeof__(v64),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v19 = *(_QWORD*)(a1 + 16);
    if (v19 != 0) {
      v20 = *(_QWORD*)(a1 + 24);
      if (v19 == v20) {
        goto LABEL_32;
      }
      v69 = a5;
      v21 = *(_QWORD*)(a1 + 24);
      v22 = fw_memory_g_heap_manager_ptr;
      do {
        v23 = *(_BYTE*)(v21 - 24);
        v21 -= 24;
        if ((v23 & 1) != 0) {
          v24 = *(_QWORD*)(v20 - 8);
          if (v24 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) != 0) {
              v25 = 128;
            }
            else {
              v25 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v22 + v25, v24),
                v64 =
                    COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v20 = v21;
      } while (v21 != v19);
      v30 = *(_QWORD*)(a1 + 16);
      a5 = v69;
      *(_QWORD*)(a1 + 24) = v19;
      v19 = v30;
      if (v30 != 0) {
      LABEL_32:
        v31 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v19),
            v64 = COERCE_AS(__typeof__(v64),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    *(_BYTE*)(a1 + 64) = 0;
  }
  else {
    GameRoutine_f7db00_alt1((__int64**)(a1 + 16), (__int64)(a6 + 2)),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_BYTE*)(a1 + 64) = 1;
  }
  *(_DWORD*)(a1 + 72) = *((_DWORD*)a6 + 18);
  GameHr_f7cc80((__int64*)(a1 + 80), (__int64)(a6 + 10)),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_f7cdc0((__int64*)(a1 + 120), a6 + 15),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(a1 + 152) = a6[19];
  LocatorDispos_db1e20((void*)(&v71_.v71), a3),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
    v32 = *(_QWORD*)(a1 + 176);
    if (v32 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v32),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v34 = v71_.v72;
  *(_QWORD*)(a1 + 160) = v71_.v71;
  *(_QWORD*)(a1 + 168) = v34;
  *(_QWORD*)(a1 + 176) = v71_.v73;
  v35 = *(_QWORD**)(a1 + 208);
  if ((unsigned __int64)v35 >= *(_QWORD*)(a1 + 216)) {
    v38 = Manager_66cc20((__int64*)(a1 + 200), a2),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(*(__int64**)(a1 + 208), a2[2], a2[1]),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v38 = v35 + 3;
  }
  else {
    v36 = *a2;
    v37 = a2[2];
    v38 = v35 + 3;
    v35[1] = a2[1];
    v35[2] = v37;
    *v35 = v36;
  }
  *(_QWORD*)(a1 + 208) = v38;
  if (*((_BYTE*)a6 + 8) == 1) {
    *(_BYTE*)(a1 + 224) = 1;
  }
  v71_.v72 = 0;
  v71_.v73 = 0;
  v71_.v71 = 0;
  v70 = 0;
  v39 = GameData_212ef18[0];
  v40 = *(unsigned __int8*)a2;
  v41 = (v40 & 1) == 0;
  v42 = v40 >> 1;
  if (v41) {
    v43 = v42;
  }
  else {
    v43 = a2[1];
  }
  v44 = *(unsigned __int8*)a3;
  if (v41) {
    v45 = (char*)a2 + 1;
  }
  else {
    v45 = (const char*)a2[2];
  }
  v46 = (v44 & 1) == 0;
  v47 = v44 >> 1;
  if (v46) {
    v48 = (char*)a3 + 1;
  }
  else {
    v48 = (const char*)a3[2];
  }
  if (v46) {
    v49 = v47;
  }
  else {
    v49 = a3[1];
  }
  v50 = GlobalMapData_e27700_alt1(*(_QWORD**)GameData_212ef18[0], v45, v43, v48,
                                  v49, &v71_.v71, &v70),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v50 == 1) {
    *(_BYTE*)(a1 + 192) = a5;
    v51 = 1;
    *(_QWORD*)(a1 + 184) = a4;
    *(_BYTE*)(a1 + 225) = 1;
    goto LABEL_87;
  }
  v51 = 0;
  if (v50 != 2) {
    goto LABEL_87;
  }
  v52 = v71_.v71;
  v53 = (_QWORD*)v71_.v72;
  if (v71_.v72 != v71_.v71) {
    v54 = *(__int64**)(a1 + 208);
    v55 = (__int64*)(v71_.v71 + 144);
    do {
      if ((unsigned __int64)v54 >= *(_QWORD*)(a1 + 216)) {
        v54 = Manager_66cc20((__int64*)(a1 + 200), v55),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        if ((*(_BYTE*)v55 & 1) != 0) {
          fw_text_String_CopyTerminated(v54, v55[2], v55[1]),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          v57 = *v55;
          v58 = v55[2];
          v54[1] = v55[1];
          v54[2] = v58;
          *v54 = v57;
        }
        v54 += 3;
      }
      *(_QWORD*)(a1 + 208) = v54;
      v59 = *(unsigned __int8*)v55;
      if ((v59 & 1) != 0) {
        v60 = v55[1];
      }
      else {
        v60 = v59 >> 1;
      }
      v61 = GameData_2167700;
      if ((GameData_21676f8[0] & 1) == 0) {
        v61 = (unsigned __int64)(unsigned __int8)GameData_21676f8[0] >> 1;
      }
      if (v60 == v61) {
        v62 = (v59 & 1) != 0 ? v55[2] : (__int64)v55 + 1;
        v63 = (GameData_21676f8[0] & 1) != 0 ? (char*)GameData_2167708
                                             : &GameData_21676f8[1];
        if (memcmp_alt1(v62, (__int64)v63, v60) == 0) {
          *(_BYTE*)(a1 + 224) = 1;
        }
      }
      v56 = v55 + 19;
      v55 += 37;
    } while (v56 != v53);
    *(_QWORD*)(a1 + 184) = ({
      unsigned __int128 r_ = game_hub_e286a0_pair(*v39, &v71_.v71);
      v64 = COERCE_AS(__typeof__(v64), (unsigned long long)(r_ >> 64));
      (unsigned __int64)(unsigned long long)r_;
    });
    *(_BYTE*)(a1 + 192) = v64;
    v51 = 1;
  LABEL_87:
    v52 = v71_.v71;
    if (v71_.v71 == 0) {
      return v51;
    }
    goto LABEL_88;
  }
  v51 = 0;
  if (v71_.v71 == 0) {
    return v51;
  }
LABEL_88:
  v65 = v71_.v72;
  if (v52 == v71_.v72) {
    goto LABEL_91;
  }
  do {
    v66 = v65 - 296;
    GameHr_e273d0(v65 - 152),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameHr_e273d0(v66),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v65 = v66;
  } while (v66 != v52);
  v71_.v72 = v52;
  v52 = v71_.v71;
  if (v71_.v71 != 0) {
  LABEL_91:
    v67 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v67 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v52),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return v51;
}

void GameHr_f86840(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  _BYTE v31[24];
  struct {
    __int64* v32[4];
    __int64** v33;
  } v32_;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (a1[18] != 0) {
    v3 = (_QWORD*)a1[17];
    while (v3 != nullptr) {
      v5 = (__int64)v3;
      v3 = (_QWORD*)*v3;
      v6 = *(_QWORD**)(v5 + 80);
      if (v6 == (_QWORD*)(v5 + 48)) {
        v7 = 32;
      }
      else {
        if (v6 == nullptr) {
          goto LABEL_13;
        }
        v7 = 40;
      }
      (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
    LABEL_13:
      if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
        v8 = *(_QWORD*)(v5 + 32);
        if (v8 != 0) {
          if (*(_QWORD*)(*v2 + 200) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v2 + v9, v8);
        }
      }
      if (*(_QWORD*)(*v2 + 200) != 0) {
        v4 = 128;
      }
      else {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v4, v5);
    }
    v10 = a1[16];
    a1[17] = 0;
    if (v10 != 0) {
      v11 = v10 & 7;
      if (v10 >= 8) {
        v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        v12 = 0;
        do {
          *(_QWORD*)(a1[15] + 8 * v12) = 0;
          *(_QWORD*)(a1[15] + 8 * v12 + 8) = 0;
          *(_QWORD*)(a1[15] + 8 * v12 + 16) = 0;
          *(_QWORD*)(a1[15] + 8 * v12 + 24) = 0;
          *(_QWORD*)(a1[15] + 8 * v12 + 32) = 0;
          *(_QWORD*)(a1[15] + 8 * v12 + 40) = 0;
          *(_QWORD*)(a1[15] + 8 * v12 + 48) = 0;
          v14 = a1[15] + 8 * v12;
          v12 += 8;
          *(_QWORD*)(v14 + 56) = 0;
        } while (v13 != v12);
      }
      else {
        v12 = 0;
      }
      if (v11 != 0) {
        v15 = 8 * v12;
        do {
          --v11;
          *(_QWORD*)(a1[15] + v15) = 0;
          v15 += 8;
        } while (v11 != 0);
      }
    }
    a1[18] = 0;
  }
  v16 = 4;
  v17 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v17 + 28) = 0;
  *(_QWORD*)v31 = 33;
  *(_QWORD*)&v31[8] = 28;
  *(_QWORD*)&v31[16] = v17;
  *(_DWORD*)(v17 + 24) = -1283202140;
  *(_QWORD*)v17 = 0x88E6BAA4E7878CE6LL;
  *(_QWORD*)(v17 + 8) = 0xA782E39583E35FA6LL;
  *(_QWORD*)(v17 + 16) = 0x82E38983E3BC83E3LL;
  v32_.v32[0] = (__int64*)v31;
  v18 = GameRoutine_f87ee0_alt1((__int64)(a1 + 15), v31, v32_.v32);
  v32_.v33 = v32_.v32;
  v32_.v32[0] = (__int64*)GameData_1ff81f8;
  v32_.v32[1] = (__int64*)game_f86d10;
  GameRoutine_f885d0_alt1(v32_.v32, v18 + 6);
  if (v32_.v33 == v32_.v32) {
    goto LABEL_31;
  }
  if (v32_.v33 != nullptr) {
    v16 = 5;
  LABEL_31:
    ((void (*)(void*))(*v32_.v33)[v16])(v32_.v33);
  }
  if ((v31[0] & 1) != 0 && *(_QWORD*)&v31[16] != 0) {
    v19 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v19, *(__int64*)&v31[16]);
  }
  v20 = 4;
  v21 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v21 + 31) = 0;
  *(_QWORD*)v31 = 33;
  *(_QWORD*)&v31[8] = 31;
  *(_QWORD*)&v31[16] = v21;
  *(_QWORD*)v21 = 0x88E6BAA4E7878CE6LL;
  *(_QWORD*)(v21 + 8) = 0xA782E39583E35FA6LL;
  *(_QWORD*)(v21 + 16) = 0x82E38983E3BC83E3LL;
  *(_QWORD*)(v21 + 23) = 0x8883E3A682E3A282LL;
  v32_.v32[0] = (__int64*)v31;
  v22 = GameRoutine_f87ee0_alt1((__int64)(a1 + 15), v31, v32_.v32);
  v32_.v33 = v32_.v32;
  v32_.v32[0] = (__int64*)GameData_1ff81f8;
  v32_.v32[1] = (__int64*)game_f86e80;
  GameRoutine_f885d0_alt1(v32_.v32, v22 + 6);
  if (v32_.v33 == v32_.v32) {
    goto LABEL_40;
  }
  if (v32_.v33 != nullptr) {
    v20 = 5;
  LABEL_40:
    ((void (*)(void*))(*v32_.v33)[v20])(v32_.v33);
  }
  if ((v31[0] & 1) != 0 && *(_QWORD*)&v31[16] != 0) {
    v23 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v23, *(__int64*)&v31[16]);
  }
  v24 = 4;
  v25 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v25 + 31) = 0;
  *(_QWORD*)v31 = 33;
  *(_QWORD*)&v31[8] = 31;
  *(_QWORD*)&v31[16] = v25;
  *(_QWORD*)v25 = 0x88E6BAA4E7878CE6LL;
  *(_QWORD*)(v25 + 8) = 0xAF83E39B83E35FA6LL;
  *(_QWORD*)(v25 + 16) = 0x82E38883E3A482E3LL;
  *(_QWORD*)(v25 + 23) = 0x8883E3A682E3A282LL;
  v32_.v32[0] = (__int64*)v31;
  v26 = GameRoutine_f87ee0_alt1((__int64)(a1 + 15), v31, v32_.v32);
  v32_.v33 = v32_.v32;
  v32_.v32[0] = (__int64*)GameData_1ff81f8;
  v32_.v32[1] = (__int64*)game_f86f50;
  GameRoutine_f885d0_alt1(v32_.v32, v26 + 6);
  if (v32_.v33 == v32_.v32) {
    goto LABEL_49;
  }
  if (v32_.v33 != nullptr) {
    v24 = 5;
  LABEL_49:
    ((void (*)(void*))(*v32_.v33)[v24])(v32_.v33);
  }
  if ((v31[0] & 1) != 0 && *(_QWORD*)&v31[16] != 0) {
    v27 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v27, *(__int64*)&v31[16]);
  }
  v28 = 4;
  v31[17] = 0;
  v31[0] = 32;
  *(_QWORD*)&v31[9] = 0x9FA9E685BEE55FA6LL;
  *(_QWORD*)&v31[1] = 0x88E6BAA4E7878CE6LL;
  v32_.v32[0] = (__int64*)v31;
  v29 = GameRoutine_f87ee0_alt1((__int64)(a1 + 15), v31, v32_.v32);
  v32_.v33 = v32_.v32;
  v32_.v32[0] = (__int64*)GameData_1ff81f8;
  v32_.v32[1] = (__int64*)Seq_f87060;
  GameRoutine_f885d0_alt1(v32_.v32, v29 + 6);
  if (v32_.v33 == v32_.v32) {
    goto LABEL_58;
  }
  if (v32_.v33 != nullptr) {
    v28 = 5;
  LABEL_58:
    ((void (*)(void*))(*v32_.v33)[v28])(v32_.v33);
  }
  if ((v31[0] & 1) != 0 && *(_QWORD*)&v31[16] != 0) {
    v30 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v30, *(__int64*)&v31[16]);
  }
}

void GameHr_f87180(__int64 a1, const char* a2)
{
  __int64 v4;
  struct {
    _QWORD v5[2];
    __int64 v6;
  } v5_;

  if (GameData_2203490 != 0) {
    GameRoutine_60a020_alt1(a1 + 48, a2);
    *(_WORD*)(a1 + 72) = 0;
    GameRoutine_a51060_alt1((void*)(v5_.v5),
                            *msg_MessageManager_instance__ptr[0], (__int64)a2);
    game_112d580((char*)v5_.v5, a1, a1 + 24);
    if ((v5_.v5[0] & 1) != 0 && v5_.v6 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v5_.v6);
    }
  }
}

void GameHr_f8ac20()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float32x4_t v8;
  struct {
    __int64* v9;
    __int64 v10;
  } v9_;
  struct {
    _QWORD v11[2];
    __int64 v12;
  } v11_;

  v0 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 == 0 || v1 == 0) {
      if (v3 == 0) {
        return;
      }
    }
    else {
      v5 = *(_QWORD*)GameData_212dc48[0];
      v8 = vaddq_f32(
          *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v1 + 24) + 16LL) + 560LL),
          COERCE_AS(float32x4_t, GameData_1a831c0));
      game_hub_e1b4d0((void*)(v11_.v11));
      game_hub_e1bfe0((void*)(&v9_.v9), v5, (__int64)v11_.v11, (__int64*)&v8);
      if ((v11_.v11[0] & 1) != 0 && v11_.v12 != 0) {
        v6 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v11_.v12);
      }
      v7 = v9_.v10;
      if (v9_.v10 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v9_.v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
      *(_QWORD*)(v1 + 1068) = 0x3DCCCCCD00000000LL;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
}

void GameHr_f9c090(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  _BYTE* v5;
  __int64 v7;
  unsigned __int8* v8;
  int v9;
  _BYTE* v10;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18[3];
  __int64 v19[5];
  const char* v20;

  v3 = *(_QWORD*)(a1 + 152);
  if (v3 == 0 || game_GameModeData_instance_ == 0) {
    return;
  }
  v4 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  if (v4 == 3) {
    v8 = *(unsigned __int8**)(v3 + 272);
    if (v8 == nullptr) {
      return;
    }
    v9 = *v8;
    v10 = *(_BYTE**)(v3 + 288);
    if (v9 == 0 || v10 == nullptr) {
      return;
    }
    v7 = 280;
    if (*v10 == 0) {
      return;
    }
  }
  else {
    if (v4 != 1) {
      return;
    }
    v5 = *(_BYTE**)(v3 + 240);
    if (*(_WORD*)(v3 + 216) == 0 || v5 == nullptr) {
      return;
    }
    v7 = 232;
    if (*v5 == 0) {
      return;
    }
  }
  v19[3] = v1;
  v19[4] = v2;
  HonorFile_9c7620((void*)((__int64*)v18), (unsigned __int16*)(v3 + v7 + 24));
  game_8af240(v19, v18);
  v20 = *GameData_212fa78;
  ItemSeq_8af940(a1, v19, 0, &v20, (const char**)game_vstring_kEmpty_ptr[0], 0);
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v19[0] != 0) {
    v14 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v19[1] = v19[0];
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v14 + v15, v19[0]);
  }
  if (v18[0] != nullptr) {
    v16 = *v13;
    v18[1] = v18[0];
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v16 + v17, (__int64)v18[0]);
  }
}

void GameHr_fd7500(unsigned __int64 a1, int* a2, __int64 a3, char a4)
{
  int* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  int* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
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
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  __int64 v33;
  __int64 v34;
  const char* v35;
  unsigned __int64 v36;
  const char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  const char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  const char* v46;
  unsigned __int64 v47;
  const char* v48;
  unsigned __int64 v49;
  const char* v50;
  unsigned __int64 v51;
  const char* v52;
  unsigned __int64 v53;
  const char* v54;
  unsigned __int64 v55;
  const char* v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  const char* v60;
  unsigned __int64 v61;
  const char* v62;
  unsigned __int64 v63;
  const char* v64;
  unsigned __int64 v65;
  const char* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  char v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  const char* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  bool v85;
  __int64 v86;
  const char* v87;
  __int64 v88;
  int v89;
  __int64 v90;
  _BYTE* v91;
  __int64 v92;
  __int64 v93;
  const char* v94;
  const char* v95;
  unsigned __int64 v96;
  const char* v97;
  __int64 v98;
  const char* v99;
  unsigned __int64 v100;
  int v101;
  const char* v102;
  unsigned __int64 v103;
  const char* v104;
  unsigned __int64 v105;
  const char* v106;
  unsigned __int64 v107;
  int* v108;
  const char* v109;
  unsigned __int64 v110;
  int v111;
  const char* v112;
  __int64 v113;
  const char* v114;
  unsigned __int64 v115;
  int v116;
  const char* v117;
  int* v118;
  const char* v119;
  unsigned __int64 v120;
  int v121;
  const char* v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  char v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  const char* v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  const char* v141;
  unsigned __int64 v142;
  const char* v143;
  int* v144;
  __int64 v145;
  int* v146;
  __int64 v147;
  __int64 v148;
  int* v149;
  __int64* v150;
  const char* v151;
  unsigned __int64 v152;
  const char* v153;
  int v154;
  __int64 v155;
  __int64 v156;
  const char* v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  _QWORD* v165;
  char v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  const char* v174;
  unsigned __int64 v175;
  const char* v176;
  __int64 v177;
  __int64* v178;
  char v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  const char* v183;
  __int64 v184;
  __int64 v185;
  char v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  signed __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  signed __int64 v194;
  __int64 v195;
  __int64 v196;
  const char* v197;
  unsigned __int64 v198;
  const char* v199;
  __int64 v200;
  const char* v201;
  __int64* v202;
  unsigned __int64 v203;
  const char* v204;
  __int64 v205;
  const char* v206;
  __int64 v207;
  __int64 v208;
  const char* v209;
  unsigned __int64 v210;
  const char* v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  char* v220;
  __int64 v221;
  __int64 v222;
  const char* v223;
  unsigned __int64 v224;
  const char* v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  const char* v229;
  char v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  int* v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  _BYTE* v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  const char* v259;
  unsigned __int64 v260;
  int v261;
  __int64 v262;
  int v263;
  const char* v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64* v268;
  __int64 v269;
  _QWORD* v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  __int64 v281;
  __int64 v282;
  char v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  unsigned __int64 v287;
  unsigned __int64 v288;
  const char* v289;
  unsigned __int64 v290;
  const char* v291;
  __int64 v292;
  const char* v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  unsigned __int64 v298;
  __int64 v299;
  __int64 v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  char* v306;
  __int64 v307;
  const char* v308;
  unsigned __int64 v309;
  const char* v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  const char* v314;
  char v315;
  __int64 v316;
  __int64 v317;
  __int64 v318;
  __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  char v323;
  __int64 v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  __int64 v328;
  __int64* v329;
  __int64 v330;
  __int64 v331;
  __int64 v332;
  __int64* v333;
  const char* v334;
  unsigned __int64 v335;
  const char* v336;
  int v337;
  __int64 v338;
  __int64 v339;
  const char* v340;
  __int64 v341;
  __int64 v342;
  __int64* v343;
  __int64 v344;
  __int64 v345;
  __int64 v346;
  __int64 v347;
  const char* v348;
  unsigned __int64 v349;
  const char* v350;
  char v351;
  __int64 v352;
  __int64 v353;
  char v354;
  __int64* v355;
  __int64 v356;
  __int64 v357;
  __int64 v358;
  char v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  const char* v363;
  __int64 v364;
  char v365;
  __int64 v366;
  __int64 v367;
  __int64 v368;
  int v369;
  __int64 v370;
  __int64 v371;
  __int64 v372;
  __int64 v373;
  __int64 v374;
  __int64 v375;
  __int64 v376;
  __int64 v377;
  int* v378;
  int* v379;
  __int64 v380;
  __int64 v381;
  __int64 v382;
  signed __int64 v384;
  __int64 v385;
  int* v386;
  unsigned __int64 v387;
  int* v388;
  struct {
    __int64 v389;
    int v390;
  } v389_;
  struct {
    __int64 v391;
    __int64 v392;
    const char* v393;
    __int64 v394;
    __int64 v395;
    __int64 v396;
  } v391_;

  v5 = a2;
  v6 = a1;
  v386 = a2;
  v387 = a1;
LABEL_2:
  v385 = v6;
  v374 = v6 + 9;
  v376 = v6 - 47;
  while (1) {
    v7 = (__int64)v5 - v6;
    v8 = 0x6DB6DB6DB6DB6DB7LL * (((__int64)v5 - v6) >> 3);
    if ((__int64)v8 > 2) {
      switch (v8) {
      case 3uLL:
        v386 = v5 - 14;
        GameRoutine_fd91f0_alt1(v6, v6 + 56, (__int64)(v5 - 14));
        return;
      case 4uLL:
        v386 = v5 - 14;
        GameRoutine_fd9390_alt1(v6, v6 + 56, v6 + 112, (__int64)(v5 - 14));
        return;
      case 5uLL:
        v386 = v5 - 14;
        GameRoutine_fd94d0_alt1(v6, v6 + 56, v6 + 112, v6 + 168,
                                (__int64)(v5 - 14));
        return;
      default:
        break;
      }
    }
    else {
      if (v8 < 2) {
        return;
      }
      if (v8 == 2) {
        v386 = v5 - 14;
        if ((*(_BYTE*)(v5 - 12) & 1) != 0) {
          v141 = *((const char**)v5 - 4);
        }
        else {
          v141 = (char*)v5 - 47;
        }
        v142 = GameHr_ffd180(*(v5 - 14), v141);
        if ((*(_BYTE*)(v6 + 8) & 1) != 0) {
          v143 = *(const char**)(v6 + 24);
        }
        else {
          v143 = (const char*)(v6 + 9);
        }
        if (v142 > GameHr_ffd180(*(_DWORD*)v6, v143)) {
          GameRoutine_fd9090_alt1((__int64*)&v387, &v386);
        }
        return;
      }
    }
    if (v7 <= 1343) {
      break;
    }
    if (a3 == 0) {
      if ((int*)v6 == v5) {
        return;
      }
      v190 = (v8 - 2) >> 1;
      v384 = v190;
      v379 = v5;
      while (1) {
        v194 = v190;
        if (v384 < v190) {
          goto LABEL_265;
        }
        v195 = (2 * v190) | 1;
        v196 = v385 + 56 * v195;
        if (2 * v190 + 2 < (__int64)v8) {
          v197 = (*(_BYTE*)(v196 + 8) & 1) != 0 ? *(const char**)(v196 + 24)
                                                : (const char*)(v196 + 9);
          v198 = GameHr_ffd180(*(_DWORD*)v196, v197);
          v199 = (*(_BYTE*)(v196 + 64) & 1) != 0 ? *(const char**)(v196 + 80)
                                                 : (const char*)(v196 + 65);
          if (v198 > GameHr_ffd180(*(_DWORD*)(v196 + 56), v199)) {
            v196 += 56;
            v195 = 2 * v194 + 2;
          }
        }
        v200 = v385 + 56 * v194;
        v201 = (*(_BYTE*)(v196 + 8) & 1) != 0 ? *(const char**)(v196 + 24)
                                              : (const char*)(v196 + 9);
        v202 = (__int64*)(v200 + 8);
        v203 = GameHr_ffd180(*(_DWORD*)v196, v201);
        v204 = (*(_BYTE*)(v200 + 8) & 1) != 0 ? *(const char**)(v200 + 24)
                                              : (const char*)(v200 + 9);
        if (v203 > GameHr_ffd180(*(_DWORD*)v200, v204)) {
          goto LABEL_265;
        }
        v389_.v390 = *(_DWORD*)v200;
        v205 = *v202;
        v206 = *(const char**)(v200 + 24);
        v391_.v392 = *(_QWORD*)(v200 + 16);
        v391_.v393 = v206;
        v391_.v391 = v205;
        *(_QWORD*)(v200 + 16) = 0;
        *(_QWORD*)(v200 + 24) = 0;
        *v202 = 0;
        v207 = *(_QWORD*)(v200 + 32);
        v208 = *(_QWORD*)(v200 + 48);
        v391_.v395 = *(_QWORD*)(v200 + 40);
        v391_.v396 = v208;
        v391_.v394 = v207;
        *(_QWORD*)(v200 + 40) = 0;
        *(_QWORD*)(v200 + 48) = 0;
        *(_QWORD*)(v200 + 32) = 0;
        do {
          v212 = v196;
          *(_DWORD*)v200 = *(_DWORD*)v196;
          if ((*(_BYTE*)(v200 + 8) & 1) != 0) {
            v213 = *(_QWORD*)(v200 + 24);
            if (v213 != 0) {
              v214 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v214 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v214, v213);
            }
          }
          v215 = *(_QWORD*)(v196 + 16);
          v216 = *(_QWORD*)(v196 + 24);
          *(_QWORD*)(v200 + 8) = *(_QWORD*)(v196 + 8);
          *(_QWORD*)(v200 + 16) = v215;
          *(_QWORD*)(v200 + 24) = v216;
          *(_WORD*)(v196 + 8) = 0;
          if ((*(_BYTE*)(v200 + 32) & 1) != 0) {
            v217 = *(_QWORD*)(v200 + 48);
            if (v217 != 0) {
              v218 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v218 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v218, v217);
            }
          }
          v219 = *(_QWORD*)(v196 + 40);
          v220 = (char*)(v196 + 32);
          v221 = *(_QWORD*)(v196 + 48);
          *(_QWORD*)(v200 + 32) = *(_QWORD*)(v196 + 32);
          *(_QWORD*)(v200 + 40) = v219;
          *(_QWORD*)(v200 + 48) = v221;
          *(_WORD*)(v196 + 32) = 0;
          if (v384 < v195) {
            break;
          }
          v222 = (2 * v195) | 1;
          v196 = v385 + 56 * v222;
          if (2 * v195 + 2 < (__int64)v8) {
            v223 = (*(_BYTE*)(v196 + 8) & 1) != 0 ? *(const char**)(v196 + 24)
                                                  : (const char*)(v196 + 9);
            v224 = GameHr_ffd180(*(_DWORD*)v196, v223);
            v225 = (*(_BYTE*)(v196 + 64) & 1) != 0 ? *(const char**)(v196 + 80)
                                                   : (const char*)(v196 + 65);
            if (v224 > GameHr_ffd180(*(_DWORD*)(v196 + 56), v225)) {
              v196 += 56;
              v222 = 2 * v195 + 2;
            }
          }
          v209 = (*(_BYTE*)(v196 + 8) & 1) != 0 ? *(const char**)(v196 + 24)
                                                : (const char*)(v196 + 9);
          v210 = GameHr_ffd180(*(_DWORD*)v196, v209);
          v211 = (v391_.v391 & 1) != 0 ? v391_.v393 : (char*)&v391_.v391 + 1;
          v200 = v212;
          v195 = v222;
        } while (v210 <= GameHr_ffd180(v389_.v390, v211));
        *(_DWORD*)v212 = v389_.v390;
        if ((*(_BYTE*)(v212 + 8) & 1) != 0) {
          v226 = *(_QWORD*)(v212 + 24);
          if (v226 != 0) {
            v227 = 56;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v227 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v227, v226);
          }
        }
        v228 = v391_.v392;
        v229 = v391_.v393;
        *(_QWORD*)(v212 + 8) = v391_.v391;
        v230 = *v220;
        *(_QWORD*)(v212 + 16) = v228;
        *(_QWORD*)(v212 + 24) = v229;
        LOWORD(v391_.v391) = 0;
        if ((v230 & 1) != 0) {
          v231 = *(_QWORD*)(v212 + 48);
          if (v231 != 0) {
            v232 = 56;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v232 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v232, v231);
            v234 = v391_.v395;
            v233 = v391_.v396;
            *(_QWORD*)v220 = v391_.v394;
            *(_QWORD*)(v212 + 40) = v234;
            LOBYTE(v234) = v391_.v391;
            *(_QWORD*)(v212 + 48) = v233;
            LOWORD(v391_.v394) = 0;
            if ((v234 & 1) != 0 && v391_.v393 != nullptr) {
              v235 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v235 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v235,
                  (__int64)v391_.v393);
            }
            goto LABEL_265;
          }
          v191 = v391_.v394;
          v192 = v391_.v395;
          v193 = v391_.v396;
        }
        else {
          v191 = v391_.v394;
          v192 = v391_.v395;
          v193 = v391_.v396;
        }
        *(_QWORD*)(v212 + 40) = v192;
        *(_QWORD*)(v212 + 48) = v193;
        *(_QWORD*)v220 = v191;
      LABEL_265:
        v190 = v194 - 1;
        if (v194 == 0) {
          v236 = v379;
          v237 = 0x6DB6DB6DB6DB6DB7LL * ((unsigned __int64)v7 >> 3);
          v238 = v385;
          while (1) {
            v244 = 0;
            v245 = v238;
            v369 = *(_DWORD*)v238;
            v247 = *(_QWORD*)(v238 + 8);
            v246 = *(_QWORD*)(v238 + 16);
            *(_QWORD*)(v238 + 8) = 0;
            *(_QWORD*)(v238 + 16) = 0;
            v371 = v247;
            v373 = v246;
            v248 = *(_QWORD*)(v238 + 40);
            v249 = *(_QWORD*)(v238 + 48);
            *(_QWORD*)(v238 + 40) = 0;
            *(_QWORD*)(v238 + 48) = 0;
            v382 = v248;
            v251 = *(_QWORD*)(v238 + 24);
            v250 = *(_QWORD*)(v238 + 32);
            *(_QWORD*)(v238 + 24) = 0;
            *(_QWORD*)(v238 + 32) = 0;
            v370 = v251;
            v375 = v250;
            v377 = v249;
            do {
              v255 = v245 + 56 * v244;
              v256 = v245;
              v257 = (2 * v244) | 1;
              v258 = 2 * v244 + 2;
              v245 = v255 + 56;
              if (v258 >= v237) {
                v244 = (2 * v244) | 1;
              }
              else {
                if ((*(_BYTE*)(v255 + 64) & 1) != 0) {
                  v259 = *(const char**)(v255 + 80);
                }
                else {
                  v259 = (const char*)(v255 + 65);
                }
                v260 = GameHr_ffd180(*(_DWORD*)(v255 + 56), v259);
                v263 = *(_DWORD*)(v255 + 112);
                v262 = v255 + 112;
                v261 = v263;
                if ((*(_BYTE*)(v262 + 8) & 1) != 0) {
                  v264 = *(const char**)(v262 + 24);
                }
                else {
                  v264 = (const char*)(v262 + 9);
                }
                if (v260 <= GameHr_ffd180(v261, v264)) {
                  v244 = v257;
                }
                else {
                  v245 = v262;
                  v244 = v258;
                }
              }
              *(_DWORD*)v256 = *(_DWORD*)v245;
              if ((*(_BYTE*)(v256 + 8) & 1) != 0) {
                v265 = *(_QWORD*)(v256 + 24);
                if (v265 != 0) {
                  v266 = 128;
                  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                    v266 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      fw_memory_g_heap_manager + v266, v265);
                }
              }
              v267 = *(_QWORD*)(v245 + 16);
              v268 = (__int64*)(v245 + 8);
              v269 = *(_QWORD*)(v245 + 24);
              *(_QWORD*)(v256 + 8) = *(_QWORD*)(v245 + 8);
              *(_QWORD*)(v256 + 16) = v267;
              *(_QWORD*)(v256 + 24) = v269;
              *(_WORD*)(v245 + 8) = 0;
              v270 = (_QWORD*)(v256 + 32);
              if ((*(_BYTE*)(v256 + 32) & 1) != 0) {
                v271 = *(_QWORD*)(v256 + 48);
                if (v271 != 0) {
                  v272 = 128;
                  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                    v272 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      fw_memory_g_heap_manager + v272, v271);
                }
              }
              v252 = *(_QWORD*)(v245 + 40);
              v253 = (_BYTE*)(v245 + 32);
              v254 = *(_QWORD*)(v245 + 48);
              *v270 = *(_QWORD*)(v245 + 32);
              v270[1] = v252;
              v270[2] = v254;
              *(_WORD*)(v245 + 32) = 0;
            } while (v244 <= (__int64)((unsigned __int64)(v237 - 2) >> 1));
            if ((int*)v245 != v236 - 14) {
              *(_DWORD*)v245 = *(v236 - 14);
              if ((*(_BYTE*)(v245 + 8) & 1) != 0) {
                v273 = *(_QWORD*)(v245 + 24);
                if (v273 != 0) {
                  v274 = 128;
                  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                    v274 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      fw_memory_g_heap_manager + v274, v273);
                }
              }
              v275 = *((_QWORD*)v236 - 6);
              v276 = *((_QWORD*)v236 - 4);
              *(_QWORD*)(v245 + 16) = *((_QWORD*)v236 - 5);
              *(_QWORD*)(v245 + 24) = v276;
              *v268 = v275;
              *((_WORD*)v236 - 24) = 0;
              if ((*v253 & 1) != 0) {
                v277 = *(_QWORD*)(v245 + 48);
                if (v277 != 0) {
                  v278 = 128;
                  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                    v278 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      fw_memory_g_heap_manager + v278, v277);
                }
              }
              v279 = *((_QWORD*)v236 - 2);
              v280 = *((_QWORD*)v236 - 1);
              *(_QWORD*)v253 = *((_QWORD*)v236 - 3);
              *(_QWORD*)(v245 + 40) = v279;
              *(_QWORD*)(v245 + 48) = v280;
              *((_WORD*)v236 - 12) = 0;
              *(v236 - 14) = v369;
              if ((*(_BYTE*)(v236 - 12) & 1) != 0 &&
                  (v281 = *((_QWORD*)v236 - 4)) != 0) {
                v282 = 128;
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                  v282 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    fw_memory_g_heap_manager + v282, v281);
                v283 = *((_BYTE*)v236 - 24);
                *((_QWORD*)v236 - 6) = v371;
                *((_QWORD*)v236 - 5) = v373;
                *((_QWORD*)v236 - 4) = v370;
                if ((v283 & 1) != 0) {
                  v284 = *((_QWORD*)v236 - 1);
                  if (v284 != 0) {
                    v285 = 128;
                    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                      v285 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        fw_memory_g_heap_manager + v285, v284);
                  }
                }
              }
              else {
                *((_QWORD*)v236 - 6) = v371;
                *((_QWORD*)v236 - 5) = v373;
                *((_QWORD*)v236 - 4) = v370;
              }
              *((_QWORD*)v236 - 3) = v375;
              *((_QWORD*)v236 - 2) = v382;
              *((_QWORD*)v236 - 1) = v377;
              v286 = v245 + 56 - v385;
              if (v286 >= 57) {
                v287 = (0x6DB6DB6DB6DB6DB7LL * ((unsigned __int64)v286 >> 3) -
                        2) >>
                       1;
                v288 = v385 + 56 * v287;
                v289 = (*(_BYTE*)(v288 + 8) & 1) != 0
                           ? *(const char**)(v288 + 24)
                           : (const char*)(v288 + 9);
                v290 = GameHr_ffd180(*(_DWORD*)v288, v289);
                v291 = (*(_BYTE*)(v245 + 8) & 1) != 0
                           ? *(const char**)(v245 + 24)
                           : (const char*)(v245 + 9);
                if (v290 > GameHr_ffd180(*(_DWORD*)v245, v291)) {
                  v292 = *v268;
                  v389_.v390 = *(_DWORD*)v245;
                  v294 = *(_QWORD*)(v245 + 16);
                  v293 = *(const char**)(v245 + 24);
                  v391_.v391 = v292;
                  v391_.v392 = v294;
                  v391_.v393 = v293;
                  v295 = *(_QWORD*)v253;
                  v296 = *(_QWORD*)(v245 + 40);
                  v297 = *(_QWORD*)(v245 + 48);
                  *(_QWORD*)(v245 + 16) = 0;
                  *(_QWORD*)(v245 + 24) = 0;
                  *v268 = 0;
                  v391_.v395 = v296;
                  v391_.v396 = v297;
                  v391_.v394 = v295;
                  *(_QWORD*)(v245 + 40) = 0;
                  *(_QWORD*)(v245 + 48) = 0;
                  *(_QWORD*)v253 = 0;
                  do {
                    v298 = v288;
                    *(_DWORD*)v245 = *(_DWORD*)v288;
                    if ((*(_BYTE*)(v245 + 8) & 1) != 0) {
                      v299 = *(_QWORD*)(v245 + 24);
                      if (v299 != 0) {
                        v300 = 128;
                        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                          v300 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt1(
                            fw_memory_g_heap_manager + v300, v299);
                      }
                    }
                    v301 = *(_QWORD*)(v288 + 16);
                    v302 = *(_QWORD*)(v288 + 24);
                    *(_QWORD*)(v245 + 8) = *(_QWORD*)(v288 + 8);
                    *(_QWORD*)(v245 + 16) = v301;
                    *(_QWORD*)(v245 + 24) = v302;
                    *(_WORD*)(v288 + 8) = 0;
                    if ((*(_BYTE*)(v245 + 32) & 1) != 0) {
                      v303 = *(_QWORD*)(v245 + 48);
                      if (v303 != 0) {
                        v304 = 128;
                        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                          v304 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt1(
                            fw_memory_g_heap_manager + v304, v303);
                      }
                    }
                    v305 = *(_QWORD*)(v288 + 40);
                    v306 = (char*)(v288 + 32);
                    v307 = *(_QWORD*)(v288 + 48);
                    *(_QWORD*)(v245 + 32) = *(_QWORD*)(v288 + 32);
                    *(_QWORD*)(v245 + 40) = v305;
                    *(_QWORD*)(v245 + 48) = v307;
                    *(_WORD*)(v288 + 32) = 0;
                    if (v287 == 0) {
                      break;
                    }
                    v287 = (v287 - 1) >> 1;
                    v288 = v385 + 56 * v287;
                    v308 = (*(_BYTE*)(v288 + 8) & 1) != 0
                               ? *(const char**)(v288 + 24)
                               : (const char*)(v288 + 9);
                    v309 = GameHr_ffd180(*(_DWORD*)v288, v308);
                    v310 = (v391_.v391 & 1) != 0 ? v391_.v393
                                                 : (char*)&v391_.v391 + 1;
                    v245 = v298;
                  } while (v309 > GameHr_ffd180(v389_.v390, v310));
                  *(_DWORD*)v298 = v389_.v390;
                  if ((*(_BYTE*)(v298 + 8) & 1) != 0) {
                    v311 = *(_QWORD*)(v298 + 24);
                    if (v311 != 0) {
                      v312 = 128;
                      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                        v312 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          fw_memory_g_heap_manager + v312, v311);
                    }
                  }
                  v313 = v391_.v392;
                  v314 = v391_.v393;
                  *(_QWORD*)(v298 + 8) = v391_.v391;
                  v315 = *v306;
                  *(_QWORD*)(v298 + 16) = v313;
                  *(_QWORD*)(v298 + 24) = v314;
                  LOWORD(v391_.v391) = 0;
                  if ((v315 & 1) != 0 && (v316 = *(_QWORD*)(v298 + 48)) != 0) {
                    v317 = 128;
                    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                      v317 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        fw_memory_g_heap_manager + v317, v316);
                    v319 = v391_.v395;
                    v318 = v391_.v396;
                    *(_QWORD*)v306 = v391_.v394;
                    *(_QWORD*)(v298 + 40) = v319;
                    LOBYTE(v319) = v391_.v391;
                    *(_QWORD*)(v298 + 48) = v318;
                    LOWORD(v391_.v394) = 0;
                    if ((v319 & 1) != 0 && v391_.v393 != nullptr) {
                      v320 = 128;
                      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                        v320 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          fw_memory_g_heap_manager + v320, (__int64)v391_.v393);
                    }
                  }
                  else {
                    v326 = v391_.v394;
                    v327 = v391_.v396;
                    *(_QWORD*)(v298 + 40) = v391_.v395;
                    *(_QWORD*)(v298 + 48) = v327;
                    *(_QWORD*)v306 = v326;
                  }
                }
              }
              goto LABEL_331;
            }
            *(_DWORD*)v245 = v369;
            if ((*(_BYTE*)(v245 + 8) & 1) != 0) {
              v321 = *(_QWORD*)(v245 + 24);
              v239 = v382;
              v242 = v375;
              v241 = v377;
              if (v321 != 0) {
                v322 = 128;
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                  v322 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    fw_memory_g_heap_manager + v322, v321);
                v323 = *(_BYTE*)(v245 + 32);
                *(_QWORD*)(v245 + 8) = v371;
                *(_QWORD*)(v245 + 16) = v373;
                *(_QWORD*)(v245 + 24) = v370;
                if ((v323 & 1) != 0) {
                  v324 = *(_QWORD*)(v245 + 48);
                  if (v324 != 0) {
                    v325 = 128;
                    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                      v325 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        fw_memory_g_heap_manager + v325, v324);
                  }
                }
                goto LABEL_330;
              }
              *(_QWORD*)(v245 + 8) = v371;
              *(_QWORD*)(v245 + 16) = v373;
              v240 = v370;
            }
            else {
              v239 = v382;
              *(_QWORD*)(v245 + 8) = v371;
              *(_QWORD*)(v245 + 16) = v373;
              v240 = v370;
              v242 = v375;
              v241 = v377;
            }
            *(_QWORD*)(v245 + 24) = v240;
          LABEL_330:
            *(_QWORD*)(v245 + 32) = v242;
            *(_QWORD*)(v245 + 40) = v239;
            *(_QWORD*)(v245 + 48) = v241;
          LABEL_331:
            v236 -= 14;
            v238 = v385;
            if (v237-- <= 2) {
              return;
            }
          }
        }
      }
    }
    v9 = v5 - 14;
    v10 = v6 + 56 * (v8 >> 1);
    if ((unsigned __int64)v7 < 0x1C01) {
      GameRoutine_fd91f0_alt1(v6 + 56 * (v8 >> 1), v6, (__int64)(v5 - 14));
    }
    else {
      v380 = a3;
      GameRoutine_fd91f0_alt1(v6, v6 + 56 * (v8 >> 1), (__int64)(v5 - 14));
      GameRoutine_fd91f0_alt1(v6 + 56, v10 - 56, (__int64)(v5 - 28));
      v378 = v5;
      GameRoutine_fd91f0_alt1(v6 + 112, v10 + 56, (__int64)(v5 - 42));
      GameRoutine_fd91f0_alt1(v10 - 56, v6 + 56 * (v8 >> 1), v10 + 56);
      v11 = *(_QWORD*)(v6 + 8);
      v12 = *(_QWORD*)(v6 + 16);
      *(_QWORD*)(v6 + 8) = 0;
      *(_QWORD*)(v6 + 16) = 0;
      v13 = *(_DWORD*)v6;
      v15 = *(_QWORD*)(v6 + 24);
      v14 = *(_QWORD*)(v6 + 32);
      *(_QWORD*)(v6 + 24) = 0;
      *(_QWORD*)(v6 + 32) = 0;
      v16 = *(_QWORD*)(v6 + 40);
      v17 = *(_QWORD*)(v6 + 48);
      *(_QWORD*)(v6 + 40) = 0;
      *(_QWORD*)(v6 + 48) = 0;
      *(_DWORD*)v6 = *(_DWORD*)v10;
      v18 = *(_QWORD*)(v10 + 8);
      v19 = *(_QWORD*)(v10 + 24);
      *(_QWORD*)(v6 + 16) = *(_QWORD*)(v10 + 16);
      *(_QWORD*)(v6 + 24) = v19;
      *(_QWORD*)(v6 + 8) = v18;
      *(_WORD*)(v10 + 8) = 0;
      if ((*(_BYTE*)(v6 + 32) & 1) != 0) {
        v20 = *(_QWORD*)(v6 + 48);
        if (v20 != 0) {
          v372 = v11;
          v21 = v15;
          v22 = v12;
          v23 = v17;
          v24 = v16;
          v25 = v14;
          v26 = 56;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v26 = 128;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v20);
          v14 = v25;
          v16 = v24;
          v17 = v23;
          v12 = v22;
          v15 = v21;
          v11 = v372;
        }
      }
      v27 = *(_QWORD*)(v10 + 32);
      v28 = *(_QWORD*)(v10 + 48);
      *(_QWORD*)(v6 + 40) = *(_QWORD*)(v10 + 40);
      *(_QWORD*)(v6 + 48) = v28;
      *(_QWORD*)(v6 + 32) = v27;
      *(_WORD*)(v10 + 32) = 0;
      *(_DWORD*)v10 = v13;
      if ((*(_BYTE*)(v10 + 8) & 1) != 0 && (v29 = *(_QWORD*)(v10 + 24)) != 0) {
        v30 = v14;
        v31 = 56;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v31 = 128;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v29);
        v32 = *(_BYTE*)(v10 + 32);
        v6 = v385;
        v14 = v30;
        *(_QWORD*)(v10 + 8) = v11;
        *(_QWORD*)(v10 + 16) = v12;
        *(_QWORD*)(v10 + 24) = v15;
        if ((v32 & 1) != 0) {
          v33 = *(_QWORD*)(v10 + 48);
          if (v33 != 0) {
            v34 = 56;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v34 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v33);
            v14 = v30;
          }
        }
      }
      else {
        v6 = v385;
        *(_QWORD*)(v10 + 8) = v11;
        *(_QWORD*)(v10 + 16) = v12;
        *(_QWORD*)(v10 + 24) = v15;
      }
      v5 = v378;
      a3 = v380;
      *(_QWORD*)(v10 + 32) = v14;
      *(_QWORD*)(v10 + 40) = v16;
      *(_QWORD*)(v10 + 48) = v17;
    }
    --a3;
    if ((a4 & 1) == 0) {
      v35 = (*(_BYTE*)(v6 - 48) & 1) != 0 ? *(const char**)(v6 - 32)
                                          : (const char*)v376;
      v36 = GameHr_ffd180(*(_DWORD*)(v6 - 56), v35);
      v37 = (*(_BYTE*)(v6 + 8) & 1) != 0 ? *(const char**)(v6 + 24)
                                         : (const char*)v374;
      if (v36 <= GameHr_ffd180(*(_DWORD*)v6, v37)) {
        v86 = *(_QWORD*)(v6 + 8);
        v88 = *(_QWORD*)(v6 + 16);
        v87 = *(const char**)(v6 + 24);
        v388 = v5;
        v381 = a3;
        v89 = *(_DWORD*)v6;
        v391_.v391 = v86;
        v391_.v392 = v88;
        v391_.v393 = v87;
        *(_QWORD*)(v6 + 16) = 0;
        *(_QWORD*)(v6 + 24) = 0;
        v91 = (_BYTE*)(v6 + 32);
        v90 = *(_QWORD*)(v6 + 32);
        v93 = *(_QWORD*)(v6 + 40);
        v92 = *(_QWORD*)(v6 + 48);
        *(_QWORD*)(v6 + 8) = 0;
        v389_.v390 = v89;
        v391_.v394 = v90;
        v391_.v395 = v93;
        LOBYTE(v90) = v391_.v391;
        v391_.v396 = v92;
        v94 = v391_.v393;
        *(_QWORD*)(v6 + 32) = 0;
        *(_QWORD*)(v6 + 40) = 0;
        *(_QWORD*)(v6 + 48) = 0;
        if ((v90 & 1) != 0) {
          v95 = v94;
        }
        else {
          v95 = (char*)&v391_.v391 + 1;
        }
        v96 = GameHr_ffd180(v89, v95);
        if ((*(_BYTE*)(v5 - 12) & 1) != 0) {
          v97 = *((const char**)v5 - 4);
        }
        else {
          v97 = (char*)v5 - 47;
        }
        if (v96 <= GameHr_ffd180(*(v5 - 14), v97)) {
          v103 = v6 + 56;
          do {
            v57 = v103;
            v389_.v389 = v103;
            if (v103 >= (unsigned __int64)v5) {
              break;
            }
            v104 = (v391_.v391 & 1) != 0 ? v391_.v393 : (char*)&v391_.v391 + 1;
            v105 = GameHr_ffd180(v389_.v390, v104);
            v106 = (*(_BYTE*)(v57 + 8) & 1) != 0 ? *(const char**)(v57 + 24)
                                                 : (const char*)(v57 + 9);
            v107 = GameHr_ffd180(*(_DWORD*)v57, v106);
            v103 = v57 + 56;
          } while (v105 <= v107);
        }
        else {
          v98 = v6 + 56;
          do {
            v389_.v389 = v98;
            if ((v391_.v391 & 1) != 0) {
              v99 = v391_.v393;
            }
            else {
              v99 = (char*)&v391_.v391 + 1;
            }
            v100 = GameHr_ffd180(v389_.v390, v99);
            v101 = *(_DWORD*)v98;
            if ((*(_BYTE*)(v98 + 8) & 1) != 0) {
              v102 = *(const char**)(v98 + 24);
            }
            else {
              v102 = (const char*)(v98 + 9);
            }
            v98 += 56;
          } while (v100 <= GameHr_ffd180(v101, v102));
          v57 = v98 - 56;
        }
        v108 = v5;
        if (v57 < (unsigned __int64)v5) {
          do {
            v388 = v9;
            if ((v391_.v391 & 1) != 0) {
              v109 = v391_.v393;
            }
            else {
              v109 = (char*)&v391_.v391 + 1;
            }
            v110 = GameHr_ffd180(v389_.v390, v109);
            v111 = *v9;
            if ((v9[2] & 1) != 0) {
              v112 = *((const char**)v9 + 3);
            }
            else {
              v112 = (char*)v9 + 9;
            }
            v9 -= 14;
          } while (v110 > GameHr_ffd180(v111, v112));
          v108 = v9 + 14;
        }
        for (; v57 < (unsigned __int64)v108; v108 = v118 + 14) {
          GameRoutine_fd9090_alt1(&v389_.v389, &v388);
          v113 = v57 + 56;
          do {
            v389_.v389 = v113;
            if ((v391_.v391 & 1) != 0) {
              v114 = v391_.v393;
            }
            else {
              v114 = (char*)&v391_.v391 + 1;
            }
            v115 = GameHr_ffd180(v389_.v390, v114);
            v116 = *(_DWORD*)v113;
            if ((*(_BYTE*)(v113 + 8) & 1) != 0) {
              v117 = *(const char**)(v113 + 24);
            }
            else {
              v117 = (const char*)(v113 + 9);
            }
            v113 += 56;
          } while (v115 <= GameHr_ffd180(v116, v117));
          v57 = v113 - 56;
          v118 = v108 - 14;
          do {
            v388 = v118;
            if ((v391_.v391 & 1) != 0) {
              v119 = v391_.v393;
            }
            else {
              v119 = (char*)&v391_.v391 + 1;
            }
            v120 = GameHr_ffd180(v389_.v390, v119);
            v121 = *v118;
            if ((v118[2] & 1) != 0) {
              v122 = *((const char**)v118 + 3);
            }
            else {
              v122 = (char*)v118 + 9;
            }
            v118 -= 14;
          } while (v120 > GameHr_ffd180(v121, v122));
        }
        a3 = v381;
        if (v6 != v57 - 56) {
          *(_DWORD*)v6 = *(_DWORD*)(v57 - 56);
          if ((*(_BYTE*)(v6 + 8) & 1) != 0) {
            v123 = *(_QWORD*)(v6 + 24);
            if (v123 != 0) {
              v124 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v124 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v124, v123);
            }
          }
          v125 = *(_QWORD*)(v57 - 48);
          v126 = *(_QWORD*)(v57 - 32);
          *(_QWORD*)(v6 + 16) = *(_QWORD*)(v57 - 40);
          *(_QWORD*)(v6 + 24) = v126;
          *(_QWORD*)(v6 + 8) = v125;
          *(_WORD*)(v57 - 48) = 0;
          if ((*v91 & 1) != 0) {
            v127 = *(_QWORD*)(v6 + 48);
            if (v127 != 0) {
              v128 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v128 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v128, v127);
            }
          }
          v129 = *(_QWORD*)(v57 - 24);
          v130 = *(_QWORD*)(v57 - 8);
          *(_QWORD*)(v6 + 40) = *(_QWORD*)(v57 - 16);
          *(_QWORD*)(v6 + 48) = v130;
          *(_QWORD*)v91 = v129;
          *(_WORD*)(v57 - 24) = 0;
        }
        v131 = *(_BYTE*)(v57 - 48);
        *(_DWORD*)(v57 - 56) = v389_.v390;
        if ((v131 & 1) != 0) {
          v132 = *(_QWORD*)(v57 - 32);
          if (v132 != 0) {
            v133 = 56;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v133 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v133, v132);
          }
        }
        v134 = v391_.v391;
        v135 = v391_.v393;
        *(_QWORD*)(v57 - 40) = v391_.v392;
        *(_QWORD*)(v57 - 32) = v135;
        *(_QWORD*)(v57 - 48) = v134;
        LOWORD(v391_.v391) = 0;
        if ((*(_BYTE*)(v57 - 24) & 1) != 0) {
          v136 = *(_QWORD*)(v57 - 8);
          if (v136 != 0) {
            v137 = 56;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v137 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v137, v136);
          }
        }
        v138 = v391_.v394;
        v139 = v391_.v396;
        *(_QWORD*)(v57 - 16) = v391_.v395;
        *(_QWORD*)(v57 - 8) = v139;
        *(_QWORD*)(v57 - 24) = v138;
        LOWORD(v391_.v394) = 0;
        if ((v391_.v391 & 1) != 0 && v391_.v393 != nullptr) {
          v140 = 56;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v140 = 128;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v140,
              (__int64)v391_.v393);
        }
      LABEL_116:
        a4 = 0;
      LABEL_117:
        v387 = v57;
        v6 = v57;
        goto LABEL_2;
      }
    }
    v39 = *(_QWORD*)(v6 + 8);
    v38 = *(_QWORD*)(v6 + 16);
    v388 = v5;
    v40 = 0;
    v41 = *(_DWORD*)v6;
    v42 = *(const char**)(v6 + 24);
    v43 = *(_QWORD*)(v6 + 32);
    v391_.v391 = v39;
    v391_.v392 = v38;
    v44 = *(_QWORD*)(v6 + 40);
    v45 = *(_QWORD*)(v6 + 48);
    v391_.v393 = v42;
    *(_QWORD*)(v6 + 16) = 0;
    *(_QWORD*)(v6 + 24) = 0;
    *(_QWORD*)(v6 + 8) = 0;
    v391_.v394 = v43;
    v389_.v390 = v41;
    v391_.v395 = v44;
    v391_.v396 = v45;
    *(_QWORD*)(v6 + 40) = 0;
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 32) = 0;
    do {
      v389_.v389 = v6 + v40 + 56;
      if ((*(_BYTE*)(v6 + v40 + 64) & 1) != 0) {
        v46 = *(const char**)(v6 + v40 + 80);
      }
      else {
        v46 = (const char*)(v6 + v40 + 65);
      }
      v47 = GameHr_ffd180(*(_DWORD*)(v6 + v40 + 56), v46);
      if ((v391_.v391 & 1) != 0) {
        v48 = v391_.v393;
      }
      else {
        v48 = (char*)&v391_.v391 + 1;
      }
      v40 += 56;
    } while (v47 > GameHr_ffd180(v389_.v390, v48));
    v49 = v6 + v40;
    if (v40 == 56) {
      while (1) {
        v53 = (unsigned __int64)(v9 + 14);
        if (v49 >= (unsigned __int64)(v9 + 14)) {
          break;
        }
        v388 = v9;
        if ((v9[2] & 1) != 0) {
          v54 = *((const char**)v9 + 3);
        }
        else {
          v54 = (char*)v9 + 9;
        }
        v55 = GameHr_ffd180(*v9, v54);
        if ((v391_.v391 & 1) != 0) {
          v56 = v391_.v393;
        }
        else {
          v56 = (char*)&v391_.v391 + 1;
        }
        v9 -= 14;
        if (v55 > GameHr_ffd180(v389_.v390, v56)) {
          goto LABEL_63;
        }
      }
    }
    else {
      do {
        v388 = v9;
        if ((v9[2] & 1) != 0) {
          v50 = *((const char**)v9 + 3);
        }
        else {
          v50 = (char*)v9 + 9;
        }
        v51 = GameHr_ffd180(*v9, v50);
        if ((v391_.v391 & 1) != 0) {
          v52 = v391_.v393;
        }
        else {
          v52 = (char*)&v391_.v391 + 1;
        }
        v9 -= 14;
      } while (v51 <= GameHr_ffd180(v389_.v390, v52));
    LABEL_63:
      v53 = (unsigned __int64)(v9 + 14);
    }
    v57 = v6 + v40;
    if (v49 < v53) {
      v58 = v53;
      do {
        GameRoutine_fd9090_alt1(&v389_.v389, &v388);
        v59 = v57 + 56;
        do {
          v389_.v389 = v59;
          if ((*(_BYTE*)(v59 + 8) & 1) != 0) {
            v60 = *(const char**)(v59 + 24);
          }
          else {
            v60 = (const char*)(v59 + 9);
          }
          v61 = GameHr_ffd180(*(_DWORD*)v59, v60);
          if ((v391_.v391 & 1) != 0) {
            v62 = v391_.v393;
          }
          else {
            v62 = (char*)&v391_.v391 + 1;
          }
          v59 += 56;
        } while (v61 > GameHr_ffd180(v389_.v390, v62));
        v57 = v59 - 56;
        v63 = v58 - 56;
        do {
          v388 = (int*)v63;
          if ((*(_BYTE*)(v63 + 8) & 1) != 0) {
            v64 = *(const char**)(v63 + 24);
          }
          else {
            v64 = (const char*)(v63 + 9);
          }
          v65 = GameHr_ffd180(*(_DWORD*)v63, v64);
          if ((v391_.v391 & 1) != 0) {
            v66 = v391_.v393;
          }
          else {
            v66 = (char*)&v391_.v391 + 1;
          }
          v63 -= 56LL;
        } while (v65 <= GameHr_ffd180(v389_.v390, v66));
        v58 = v63 + 56;
      } while (v57 < v58);
    }
    if (v6 != v57 - 56) {
      *(_DWORD*)v6 = *(_DWORD*)(v57 - 56);
      if ((*(_BYTE*)(v6 + 8) & 1) != 0) {
        v67 = *(_QWORD*)(v6 + 24);
        if (v67 != 0) {
          v68 = 56;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v68 = 128;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v67);
        }
      }
      v69 = *(_QWORD*)(v57 - 48);
      v70 = *(_QWORD*)(v57 - 32);
      *(_QWORD*)(v6 + 16) = *(_QWORD*)(v57 - 40);
      *(_QWORD*)(v6 + 24) = v70;
      *(_QWORD*)(v6 + 8) = v69;
      *(_WORD*)(v57 - 48) = 0;
      if ((*(_BYTE*)(v6 + 32) & 1) != 0) {
        v71 = *(_QWORD*)(v6 + 48);
        if (v71 != 0) {
          v72 = 56;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v72 = 128;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v72, v71);
        }
      }
      v73 = *(_QWORD*)(v57 - 24);
      v74 = *(_QWORD*)(v57 - 8);
      *(_QWORD*)(v6 + 40) = *(_QWORD*)(v57 - 16);
      *(_QWORD*)(v6 + 48) = v74;
      *(_QWORD*)(v6 + 32) = v73;
      *(_WORD*)(v57 - 24) = 0;
    }
    v75 = *(_BYTE*)(v57 - 48);
    *(_DWORD*)(v57 - 56) = v389_.v390;
    if ((v75 & 1) != 0) {
      v76 = *(_QWORD*)(v57 - 32);
      if (v76 != 0) {
        v77 = 56;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v77 = 128;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v77, v76);
      }
    }
    v78 = v391_.v391;
    v79 = v391_.v393;
    *(_QWORD*)(v57 - 40) = v391_.v392;
    *(_QWORD*)(v57 - 32) = v79;
    *(_QWORD*)(v57 - 48) = v78;
    LOWORD(v391_.v391) = 0;
    if ((*(_BYTE*)(v57 - 24) & 1) != 0) {
      v80 = *(_QWORD*)(v57 - 8);
      if (v80 != 0) {
        v81 = 56;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v81 = 128;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v81, v80);
      }
    }
    v82 = v391_.v394;
    v83 = v391_.v396;
    *(_QWORD*)(v57 - 16) = v391_.v395;
    *(_QWORD*)(v57 - 8) = v83;
    *(_QWORD*)(v57 - 24) = v82;
    LOWORD(v391_.v394) = 0;
    if ((v391_.v391 & 1) != 0 && v391_.v393 != nullptr) {
      v84 = 56;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v84 = 128;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v84, (__int64)v391_.v393);
    }
    if (v49 < v53) {
      goto LABEL_115;
    }
    v85 = GameHr_fd9660(v6, (int*)(v57 - 56));
    if (!GameHr_fd9660(v57, v5)) {
      if (!v85) {
      LABEL_115:
        GameHr_fd7500(v6, (int*)(v57 - 56), a3, a4 & 1);
        goto LABEL_116;
      }
      goto LABEL_117;
    }
    if (v85) {
      return;
    }
    v386 = (int*)(v57 - 56);
    v5 = (int*)(v57 - 56);
  }
  if ((a4 & 1) != 0) {
    if ((int*)v6 != v5) {
      v144 = (int*)(v6 + 56);
      if ((int*)(v6 + 56) != v5) {
        v145 = 0;
        v146 = (int*)v6;
        do {
          v149 = v144;
          v150 = (__int64*)(v146 + 16);
          if ((v146[16] & 1) != 0) {
            v151 = *((const char**)v146 + 10);
          }
          else {
            v151 = (char*)v146 + 65;
          }
          v152 = GameHr_ffd180(v146[14], v151);
          if ((v146[2] & 1) != 0) {
            v153 = *((const char**)v146 + 3);
          }
          else {
            v153 = (char*)v146 + 9;
          }
          if (v152 > GameHr_ffd180(*v146, v153)) {
            v154 = *v149;
            v155 = *v150;
            v156 = *((_QWORD*)v146 + 9);
            *v150 = 0;
            *((_QWORD*)v146 + 9) = 0;
            v389_.v390 = v154;
            v157 = *((const char**)v146 + 10);
            v391_.v391 = v155;
            v391_.v392 = v156;
            v158 = *((_QWORD*)v146 + 11);
            v159 = *((_QWORD*)v146 + 12);
            *((_QWORD*)v146 + 10) = 0;
            v160 = v145;
            *((_QWORD*)v146 + 11) = 0;
            v391_.v393 = v157;
            v391_.v394 = v158;
            v161 = *((_QWORD*)v146 + 13);
            *((_QWORD*)v146 + 12) = 0;
            *((_QWORD*)v146 + 13) = 0;
            v391_.v395 = v159;
            v391_.v396 = v161;
            while (1) {
              v162 = v385 + v160;
              *(_DWORD*)(v385 + v160 + 56) = *(_DWORD*)(v385 + v160);
              if ((*(_BYTE*)(v385 + v160 + 64) & 1) != 0) {
                v163 = *(_QWORD*)(v162 + 80);
                if (v163 != 0) {
                  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                    v164 = 128;
                  }
                  else {
                    v164 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      fw_memory_g_heap_manager + v164, v163);
                }
              }
              v166 = *(_BYTE*)(v162 + 88);
              v165 = (_QWORD*)(v162 + 88);
              v167 = *(v165 - 10);
              v168 = *(v165 - 9);
              *((_WORD*)v165 - 40) = 0;
              *(_QWORD*)(v385 + v160 + 64) = v167;
              *(_QWORD*)(v385 + v160 + 72) = v168;
              *(_QWORD*)(v385 + v160 + 80) = *(v165 - 8);
              if ((v166 & 1) != 0) {
                v169 = *(_QWORD*)(v385 + v160 + 104);
                if (v169 != 0) {
                  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                    v170 = 128;
                  }
                  else {
                    v170 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      fw_memory_g_heap_manager + v170, v169);
                }
              }
              v171 = v385 + v160;
              v172 = *(_QWORD*)(v385 + v160 + 32);
              v173 = *(_QWORD*)(v385 + v160 + 40);
              *(_WORD*)(v385 + v160 + 32) = 0;
              *v165 = v172;
              v165[1] = v173;
              v165[2] = *(_QWORD*)(v385 + v160 + 48);
              if (v160 == 0) {
                break;
              }
              if ((v391_.v391 & 1) != 0) {
                v174 = v391_.v393;
              }
              else {
                v174 = (char*)&v391_.v391 + 1;
              }
              v175 = GameHr_ffd180(v389_.v390, v174);
              if ((*(_BYTE*)(v171 - 48) & 1) != 0) {
                v176 = *(const char**)(v171 - 32);
              }
              else {
                v176 = (const char*)(v171 - 47);
              }
              v160 -= 56;
              if (v175 <= GameHr_ffd180(*(_DWORD*)(v171 - 56), v176)) {
                v177 = v385 + v160 + 56;
                goto LABEL_244;
              }
            }
            v177 = v385;
          LABEL_244:
            *(_DWORD*)v177 = v389_.v390;
            v179 = *(_BYTE*)(v171 + 8);
            v178 = (__int64*)(v171 + 8);
            if ((v179 & 1) != 0) {
              v180 = *(_QWORD*)(v177 + 24);
              if (v180 != 0) {
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                  v181 = 128;
                }
                else {
                  v181 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    fw_memory_g_heap_manager + v181, v180);
              }
            }
            v182 = v391_.v391;
            v183 = v391_.v393;
            v178[1] = v391_.v392;
            v178[2] = (__int64)v183;
            *v178 = v182;
            LOWORD(v391_.v391) = 0;
            if ((v178[3] & 1) != 0 && (v184 = *(_QWORD*)(v177 + 48)) != 0) {
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                v185 = 128;
              }
              else {
                v185 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  fw_memory_g_heap_manager + v185, v184);
              v186 = v391_.v391;
              v187 = v391_.v394;
              v188 = v391_.v396;
              v178[4] = v391_.v395;
              v178[5] = v188;
              v178[3] = v187;
              LOWORD(v391_.v394) = 0;
              if ((v186 & 1) != 0 && v391_.v393 != nullptr) {
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                  v189 = 128;
                }
                else {
                  v189 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    fw_memory_g_heap_manager + v189, (__int64)v391_.v393);
              }
            }
            else {
              v147 = v391_.v394;
              v148 = v391_.v396;
              v178[4] = v391_.v395;
              v178[5] = v148;
              v178[3] = v147;
            }
          }
          v144 = v149 + 14;
          v145 += 56;
          v146 = v149;
        } while (v149 + 14 != v5);
      }
    }
  }
  else if ((int*)v6 != v5) {
    v328 = v6 + 56;
    if ((int*)(v6 + 56) != v5) {
      v329 = (__int64*)(v6 + 104);
      do {
        v332 = v6;
        v6 = v328;
        v333 = (__int64*)(v332 + 64);
        if ((*(_BYTE*)(v332 + 64) & 1) != 0) {
          v334 = *(const char**)(v332 + 80);
        }
        else {
          v334 = (const char*)(v332 + 65);
        }
        v335 = GameHr_ffd180(*(_DWORD*)(v332 + 56), v334);
        if ((*(_BYTE*)(v332 + 8) & 1) != 0) {
          v336 = *(const char**)(v332 + 24);
        }
        else {
          v336 = (const char*)(v332 + 9);
        }
        if (v335 > GameHr_ffd180(*(_DWORD*)v332, v336)) {
          v337 = *(_DWORD*)v6;
          v338 = *v333;
          v339 = *(_QWORD*)(v332 + 72);
          *v333 = 0;
          *(_QWORD*)(v332 + 72) = 0;
          v389_.v390 = v337;
          v340 = *(const char**)(v332 + 80);
          v391_.v391 = v338;
          v391_.v392 = v339;
          v341 = *(_QWORD*)(v332 + 88);
          v342 = *(_QWORD*)(v332 + 96);
          *(_QWORD*)(v332 + 80) = 0;
          v343 = v329;
          *(_QWORD*)(v332 + 88) = 0;
          v391_.v393 = v340;
          v391_.v394 = v341;
          v344 = *(_QWORD*)(v332 + 104);
          *(_QWORD*)(v332 + 96) = 0;
          *(_QWORD*)(v332 + 104) = 0;
          v391_.v395 = v342;
          v391_.v396 = v344;
          do {
            v351 = *((_BYTE*)v343 - 40);
            *((_DWORD*)v343 - 12) = *((_DWORD*)v343 - 26);
            if ((v351 & 1) != 0) {
              v352 = *(v343 - 3);
              if (v352 != 0) {
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                  v353 = 128;
                }
                else {
                  v353 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    fw_memory_g_heap_manager + v353, v352);
              }
            }
            v355 = v343 - 2;
            v354 = *((_BYTE*)v343 - 16);
            v356 = *(v343 - 12);
            v357 = *(v343 - 11);
            *((_WORD*)v343 - 48) = 0;
            *(v343 - 5) = v356;
            *(v343 - 4) = v357;
            *(v343 - 3) = *(v343 - 10);
            if ((v354 & 1) != 0 && *v343 != 0) {
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                v358 = 128;
              }
              else {
                v358 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  fw_memory_g_heap_manager + v358, *v343);
            }
            v345 = *(v343 - 7);
            v343 -= 7;
            v346 = *(v343 - 2);
            v347 = *(v343 - 1);
            *((_WORD*)v343 - 8) = 0;
            *v355 = v346;
            v355[1] = v347;
            v355[2] = v345;
            if ((v391_.v391 & 1) != 0) {
              v348 = v391_.v393;
            }
            else {
              v348 = (char*)&v391_.v391 + 1;
            }
            v349 = GameHr_ffd180(v389_.v390, v348);
            if ((*(_BYTE*)(v343 - 12) & 1) != 0) {
              v350 = (const char*)*(v343 - 10);
            }
            else {
              v350 = (char*)v343 - 95;
            }
          } while (v349 > GameHr_ffd180(*((_DWORD*)v343 - 26), v350));
          v359 = *((_BYTE*)v343 - 40);
          *((_DWORD*)v343 - 12) = v389_.v390;
          if ((v359 & 1) != 0) {
            v360 = *(v343 - 3);
            if (v360 != 0) {
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                v361 = 128;
              }
              else {
                v361 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  fw_memory_g_heap_manager + v361, v360);
            }
          }
          v362 = v391_.v391;
          v363 = v391_.v393;
          *(v343 - 4) = v391_.v392;
          *(v343 - 3) = (__int64)v363;
          *(v343 - 5) = v362;
          LOWORD(v391_.v391) = 0;
          if ((*(_BYTE*)(v343 - 2) & 1) != 0 && *v343 != 0) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v364 = 128;
            }
            else {
              v364 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v364,
                                               *v343);
            v365 = v391_.v391;
            v366 = v391_.v394;
            v367 = v391_.v396;
            *(v343 - 1) = v391_.v395;
            *v343 = v367;
            *(v343 - 2) = v366;
            LOWORD(v391_.v394) = 0;
            if ((v365 & 1) != 0 && v391_.v393 != nullptr) {
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                v368 = 128;
              }
              else {
                v368 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  fw_memory_g_heap_manager + v368, (__int64)v391_.v393);
            }
          }
          else {
            v330 = v391_.v394;
            v331 = v391_.v396;
            *(v343 - 1) = v391_.v395;
            *v343 = v331;
            *(v343 - 2) = v330;
          }
        }
        v328 = v6 + 56;
        v329 += 7;
      } while ((int*)(v6 + 56) != v5);
    }
  }
}

__n128 GameHr_fe2c20(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __n128 result;
  _BYTE* v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[3];

  GameRoutine_febfc0((void*)(v11), *GameData_212cc28[0]);
  v2 = (__int64*)GameData_212bf68;
  v3 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1104, 16, 0);
  GameRoutine_18704b0(v3, 1);
  *(_QWORD*)(v3 + 1072) = 0;
  *(_QWORD*)v3 = GameData_1fe8e20;
  *(_QWORD*)(v3 + 1080) = 0;
  *(_QWORD*)(v3 + 1088) = 0;
  *(_BYTE*)(v3 + 1096) = 0;
  *(_QWORD*)(v3 + 176) = GameData_1fe92b8;
  *(_QWORD*)(v3 + 1056) = GameData_1fe9388;
  GameData_2167728 = -1;
  GameRoutine_6f4cd0(v3 + 1072);
  v4 = *(_QWORD*)(a1 + 40);
  if (v4 != 0) {
    *(_QWORD*)(v4 + 48) = v3;
    *(_QWORD*)(v3 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v3;
  *(_QWORD*)(v3 + 24) = "ProcTalkSelectGiftMenu";
  *(_QWORD*)(v3 + 32) = a1;
  *(_DWORD*)(v3 + 140) = GameRoutine_7a8520();
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 24;
  *(_QWORD*)(v3 + 80) = 1;
  *(_QWORD*)(v3 + 8) = &GameData_2174f00;
  *(_QWORD*)(v3 + 16) = &GameData_2174f00;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3) & 1) != 0 &&
      (*(_WORD*)(v3 + 136) & 0x100) == 0) {
    *(_WORD*)(v3 + 136) |= 0x100u;
  }
  v6 = *(_BYTE**)(v3 + 32);
  v7 = v6[138];
  if (v7 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v3 + 32));
    v7 = v6[138];
  }
  v8 = v11[0];
  v6[138] = v7 + 1;
  *(_WORD*)(v3 + 136) |= 2u;
  if (v8 != 0) {
    v9 = *v2;
    v11[1] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    return GameRoutine_1a0a4e0(v9 + v10, (_QWORD)(v8));
  }
  return result;
}

void GameHr_fe7ea0(__int64* a1, unsigned __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  v2 = *a1;
  if (a2 > (a1[2] - *a1) >> 4) {
    v3 = (__int64*)a1[1];
    v6 = fw_memory_g_heap_manager_ptr;
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        16 * a2, 16, 0);
    if (v3 != (__int64*)v2) {
      v8 = (__int64*)v2;
      v9 = (_QWORD*)v7;
      do {
        v9[1] = v8[1];
        v10 = *v8;
        v8 += 2;
        *v9 = v10;
        v9 += 2;
      } while (v8 != v3);
    }
    *a1 = v7;
    a1[1] = (__int64)v3 + v7 - v2;
    a1[2] = v7 + 16 * a2;
    if (v2 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v11, v2);
    }
  }
}

__int64 GameHr_ffd180(int a1, const char* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  bool v11;
  struct {
    int v13;
    char gap4_[4];
    char v14;
    char gap9_[15];
    __int64 v15;
  } v13_;

  v3 = 0;
  v4 = 2304;
  v5 = 8704;
  switch (a1) {
  case 0:
    v6 = (unsigned __int8)GameRoutine_8a1ae0_alt1(a2) - 1;
    v3 = 0;
    if ((unsigned int)v6 >= 9) {
      v5 = 512;
    }
    else {
      v5 = (__int64)GameData_1ba26c8[v6];
    }
    break;
  case 2:
    if (strstr(a2, GameData_1ac0b57_alt1) != 0) {
      v3 = 4;
      v5 = 2560;
    }
    else if (strstr(a2, GameData_1aee63a_alt1) != 0) {
      v3 = 3;
      v5 = 2560;
    }
    else {
      if (strstr(a2, GameData_1ac0b61_alt1) == 0) {
        v11 = strstr(a2, GameData_1abcd67_alt1) == 0;
        v5 = 2560;
        goto LABEL_49;
      }
      v3 = 2;
      v5 = 2560;
    }
    break;
  case 3:
    v3 = 0;
    v5 = 3584;
    break;
  case 4:
    v3 = 0;
    v5 = 5888;
    break;
  case 5:
    v3 = 0;
    v5 = 4096;
    break;
  case 6:
    if (strstr(a2, GameData_1ac0b57_alt1) != 0) {
      v3 = 3;
      v5 = 3072;
    }
    else {
      if (strstr(a2, GameData_1aee641_alt1) == 0) {
        v11 = strstr(a2, GameData_1ae6bf6_alt1) == 0;
        v5 = 3072;
        goto LABEL_49;
      }
      v3 = 2;
      v5 = 3072;
    }
    break;
  case 7:
    v3 = 0;
    v5 = 3840;
    break;
  case 8:
    goto LABEL_7;
  case 9:
    v3 = 0;
    v5 = 4352;
    break;
  case 10:
    v3 = 0;
    v5 = 3328;
    break;
  case 11:
    if (strstr(a2, GameData_1ac0b57_alt1) != 0) {
      v3 = 5;
      v5 = 2816;
    }
    else if (strstr(a2, GameData_1aee63a_alt1) != 0) {
      v3 = 4;
      v5 = 2816;
    }
    else if (strstr(a2, GameData_1ac0b61_alt1) != 0) {
      v3 = 3;
      v5 = 2816;
    }
    else if (strstr(a2, GameData_1abcd67_alt1) != 0) {
      v3 = 2;
      v5 = 2816;
    }
    else {
      v11 = strstr(a2, GameData_1aa95ea_alt1) == 0;
      v5 = 2816;
    LABEL_49:
      v3 = !v11;
    }
    break;
  case 12:
    v3 = 0;
    v5 = 4864;
    break;
  case 14:
    v4 = 2048;
  LABEL_7:
    game_ffd4e0((void*)((__int64)&v13_.v13), a2);
    v3 = v13_.v13;
    if ((v13_.v14 & 1) != 0 && v13_.v15 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v13_.v15);
    }
    v5 = v4;
    break;
  case 17:
    v3 = 0;
    v5 = 6656;
    break;
  case 19:
    v3 = 0;
    v5 = 7424;
    break;
  case 20:
    v3 = 0;
    v5 = 7168;
    break;
  case 22:
    v3 = 0;
    v5 = 7936;
    break;
  case 24:
    v3 = 0;
    v5 = 0x2000;
    break;
  case 27:
    v3 = 0;
    v5 = 8448;
    break;
  case 28:
    v3 = 0;
    v5 = 7680;
    break;
  case 29:
    v3 = 0;
    v5 = 5120;
    break;
  case 30:
    return ((v3 + v5) << 16) + ((__int64)a1 << 8);
  default:
    v3 = 0;
    v5 = 256;
    break;
  }
  return ((v3 + v5) << 16) + ((__int64)a1 << 8);
}

__int64 GameHr_1000ce0()
{
  __int64 v0;
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  _QWORD v12[2];

  v0 = *(_QWORD*)(GameData_21c96f8 + 16);
  if (*(_QWORD*)(v0 + 56) != 0) {
    v1 = *(_QWORD**)(v0 + 48);
    if (v1 != nullptr) {
      v2 = fw_memory_g_heap_manager_ptr;
      do {
        v3 = (_QWORD*)*v1;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v4, (__int64)v1);
        v1 = v3;
      } while (v3 != nullptr);
    }
    v5 = *(_QWORD*)(v0 + 40);
    *(_QWORD*)(v0 + 48) = 0;
    if (v5 != 0) {
      v6 = v5 & 7;
      if (v5 >= 8) {
        v8 = v5 & 0xFFFFFFFFFFFFFFF8LL;
        v7 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v0 + 32) + 8 * v7) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 32) + 8 * v7 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 32) + 8 * v7 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 32) + 8 * v7 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 32) + 8 * v7 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 32) + 8 * v7 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 32) + 8 * v7 + 48) = 0;
          v9 = *(_QWORD*)(v0 + 32) + 8 * v7;
          v7 += 8;
          *(_QWORD*)(v9 + 56) = 0;
        } while (v8 != v7);
      }
      else {
        v7 = 0;
      }
      if (v6 != 0) {
        v10 = 8 * v7;
        do {
          --v6;
          *(_QWORD*)(*(_QWORD*)(v0 + 32) + v10) = 0;
          v10 += 8;
        } while (v6 != 0);
      }
    }
    *(_QWORD*)(v0 + 56) = 0;
  }
  *(_DWORD*)(v0 + 24) = 0;
  v12[1] = &GameData_1ae6c1e;
  result = game_HashString((__int64)&GameData_1ae6c1e);
  v12[0] = result;
  if (game_GameModeData_instance_ != 0) {
    return GameVariable_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48),
                               (__int64)v12, 1);
  }
  return result;
}

void GameHr_10010d0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = GameData_20003a0;
  v2 = (_QWORD*)(a1 + 160);
  v3 = *(_QWORD**)(a1 + 192);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a1);
}

#pragma GCC visibility pop
