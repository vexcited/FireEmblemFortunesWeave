#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1a8a68f;
extern char GameData_1a9f09e;
extern char GameData_1ad767c[6];
extern _UNKNOWN GameData_1ae31cd;
extern __int64 (*GameData_1f8f7e8[])();
extern __int64 (*GameData_200ec70[])();
extern __int64 (*GameData_200efb8[])();
extern _UNKNOWN* GameData_2010280;
extern __int64 (*GameData_20102b0[])();
extern __int64 (*GameData_20110d0[])();
extern __int64 (*GameData_20134a0[])();
extern __int64 (*GameData_2013520[])();
extern __int64 (*GameData_20135a0[])();
extern __int64 (*GameData_20137a0[])();
extern __int64 (*GameData_2013820[])();
extern __int64 (*GameData_2014ea0[3])();
extern __int64 (*GameData_2014ec8[])();
extern __int64 (*GameData_2014f68[])();
extern __int64 (*GameData_2014fb0[3])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c370;
extern _UNKNOWN* GameData_212c540;
extern __int64 GameData_212c5c0[3];
extern __int64 GameData_212c638;
extern _UNKNOWN* GameData_212c960;
extern __int64* GameData_212cbb8[80];
extern __int64* GameData_212ce98[2];
extern __int64 GameData_212cf70[7];
extern __int64* GameData_212cfb0[12];
extern __int64* GameData_212d178[6];
extern __int64* GameData_212d460[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbf0[2];
extern __int64* GameData_212dea8;
extern _UNKNOWN* GameData_212df28;
extern __int64* GameData_212fc38[2];
extern __int64* GameData_212fe80;
extern int* GameData_212fea8;
extern _UNKNOWN* GameData_212feb0;
extern _UNKNOWN** GameData_2130100[3];
extern _UNKNOWN** GameData_2130108[2];
extern _UNKNOWN** GameData_2130110;
extern __int64* GameData_2132360;
extern _UNKNOWN GameData_2167580;
extern int GameData_2175a48;
extern __int64 (*GameData_21779a0)(void);
extern __int64 (*GameData_2177d68)(_QWORD);
extern __int64 GameData_21a60d8;
extern _UNKNOWN GameData_21a65c8;
extern __int64 GameData_21c6978;
extern __int64 GameData_21c9bd0;
extern __int64 GameData_21c9d80;
extern __int64 GameData_21c9d88;
extern __int64 GameData_21c9d90;
extern __int64 GameData_21c9fe8;
extern __int64 GameData_21ca070;
extern __int64 GameData_21ca2f0;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21caab0;
extern __int64 GameData_21cd130;
extern __int64 GameData_21cd138;
extern __int64 GameData_21cd140;
extern __int64 GameData_21cd148;
extern __int64 GameData_21cd150;
extern __int64 GameData_21cd158;
extern __int64 GameData_21ec550;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21ee240;
extern __int64 GameData_21fa5e0;
extern __int64 GameData_22054a0;
extern __int64 GameData_22054a8;
extern __int64 GameData_2212270;
extern __int64 GameData_22336e0;
extern int GameData_2236618;
extern _UNKNOWN GameData_2236620;
extern int GameData_2236780;
extern _UNKNOWN GameData_2236788;
extern int GameData_22367c4;
extern _UNKNOWN GameData_22367c8;
extern __int64 GameData_22400f8;
extern __int64 GameData_2240160;
extern __int64 GameData_22416f0;
extern __int64 GameData_225d648;
extern __int64 GameData_2263c28;
extern __int64 GameData_2265ee0;
extern __int64 GameData_2265ef8;
__int64 GameRoutine_10965c0(_QWORD, _QWORD);
__int64 GameRoutine_10aa000(_QWORD, _QWORD);
__int64 GameRoutine_10aa5e0(_QWORD, _QWORD, float);
void __attribute__((noreturn)) GameRoutine_111a0e0(void);
__int64 GameRoutine_111ac80(__int64);
__int64 GameRoutine_111b660(__int64, __int64);
unsigned __int64 GameRoutine_1137a80(_QWORD*, __int64);
__int64 GameRoutine_113d7d0(__int64 result, double);
__int64 GameRoutine_114d0d0(__int64, char, long double);
__int64 GameRoutine_114e4a0(__int64 result);
__int64 GameRoutine_1152360(_QWORD, _QWORD);
__int64 GameRoutine_11526a0(_QWORD, _QWORD);
__int64 GameRoutine_1157500(_QWORD, _QWORD, long double);
__int64 GameRoutine_1159ac0(__int64);
__int64 GameRoutine_1159be0(__int64);
__int64 GameRoutine_1194a00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_119adb0(_QWORD);
__int64 GameRoutine_119b0e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_11c46e0(_QWORD, long double);
__int64 GameRoutine_11c4800(_QWORD, float, float);
__int64 GameRoutine_11c4a00(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_11c4de0(_QWORD, _QWORD, float);
__int64 GameRoutine_11c4fc0(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_11c5860(_QWORD, _QWORD);
__int64 GameRoutine_11c72e0(_QWORD, _QWORD);
__int64 GameRoutine_11cb1c0(_QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_136ac50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_137e4c0(_QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155f480(_QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_179c320(_QWORD);
__int64 GameRoutine_1917400(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_191bab0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_191eea0(_QWORD, _QWORD);
__int64 GameRoutine_1920490(_QWORD);
__int64 GameRoutine_1920be0(_QWORD);
__int64 GameRoutine_1921e00(_QWORD);
__int64 GameRoutine_19229d0(_QWORD, _QWORD);
__int64 GameRoutine_19378a0(_QWORD, _QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09bf0(_QWORD, const char*, ...);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09cd0(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d30(_QWORD, _QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a690(_QWORD, _QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ad30(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_58f8a0(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a230(_QWORD);
__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 GameRoutine_62cf40(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_64aa00(void);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_65a940(_QWORD);
__int64 GameRoutine_65f630(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65fbc0(_QWORD, _QWORD, _QWORD);
float GameRoutine_65fe00(_QWORD, _QWORD, float);
__int64 GameRoutine_660040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6616e0(_QWORD, _QWORD);
__int64 GameRoutine_682780(_QWORD);
__int64 GameRoutine_6ead60(_QWORD, _QWORD);
__int64 GameRoutine_729f40(_QWORD);
__int64 GameRoutine_748f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_74cd60(_QWORD);
__int64 GameRoutine_750a00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_768a20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_7a8520(_QWORD);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_7c9480(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7c9850(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7ca1f0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7ca2d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7d1480(_QWORD);
__int64 GameRoutine_7d5160(_QWORD, _QWORD);
__int64 GameRoutine_809dc0(_QWORD, _QWORD, long double);
__int64 GameRoutine_82dfe0(_QWORD, _QWORD);
__int64 GameRoutine_8c7910(_QWORD);
__int64 GameRoutine_98f140(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_98f290(_QWORD);
__int64 GameRoutine_9d57b0(_QWORD, _QWORD);
__int64 GameRoutine_9d5dd0(_QWORD);
__int64 GameRoutine_a85120(_QWORD, _QWORD);
__int64 GameRoutine_a853b0(_QWORD);
__int64 GameRoutine_a8c0c0(_QWORD);
__int64 GameRoutine_bbef70(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bbf020(_QWORD);
__int64 GameRoutine_bbf550(_QWORD, _QWORD);
__int64 GameRoutine_c13be0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_c8c1e0(_QWORD);
__int64 GameRoutine_ecb40(void);
__int64 GameRoutine_efaca0(_QWORD, _QWORD);
__int64 GameRoutine_efb030(_QWORD, _QWORD, _QWORD, float);
float GameRoutine_efc240(_QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_efca60(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
__attribute__((swiftcall)) void game_hub_efca60(PSEUDO_X8, __int64, _QWORD*,
                                                signed __int64);
__int64*
GameRoutine_1152360_alt1(_QWORD*,
                         unsigned __int8*) __asm__("GameRoutine_1152360");
__int64* GameRoutine_1157500_alt1(__int64,
                                  __int64*) __asm__("GameRoutine_1157500");
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 EveryFrameProc_10aa5e0(__int64, __int64, float);
__int64 GameHr_10aa000(__int64 result, _QWORD*);
__int64 GameHr_136ac50(__int64, unsigned int, __int64);
__int64 GameRoutine_10965c0_alt1(__int64 result,
                                 __int64) __asm__("GameRoutine_10965c0");
__int64 GameRoutine_11c46e0_alt1(__int64 result) __asm__("GameRoutine_11c46e0");
__int64 GameRoutine_11c4a00_alt1(__int64 result, __int64,
                                 double) __asm__("GameRoutine_11c4a00");
__int64 GameRoutine_11c4a00_alt2(__int64 result, __int64,
                                 float) __asm__("GameRoutine_11c4a00");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_a85120_alt1(__int64,
                                unsigned __int8*) __asm__("GameRoutine_a85120");
__int64 GameRoutine_efb030_alt1(__int64, _QWORD*, __int64,
                                float) __asm__("GameRoutine_efb030");
__int64 Hub_119b0e0(__int64 result, int, __int64*);
__int64 IDeploy_748f80(__int64, __int64, unsigned int, unsigned int, int,
                       unsigned int*);
__int64 IRoute_750a00(__int64, unsigned int, unsigned int);
__int64 TaskPassNodes_bbef70(__int64 result, __int64, __int64);
__int64 TaskPassNodes_bbf020(__int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_map_768a20(__int64, __int64, __int64, _BYTE*, unsigned __int8,
                        const char*, __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern __int64 (*game_character_CharacterDamageFalldown_vtable[])();
extern __int64 (*game_character_CharacterIshAppear_vtable[])();
extern __int64 (*game_character_WallCollisionModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_map_UnitFlags_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64 ui_Manager_instance_;
float game_hub_efc240(__int64, __int64*);
int __cxa_guard_acquire(__int64);
void GameRoutine_74cd60_alt1(__int64*) __asm__("GameRoutine_74cd60");
void GameRoutine_98f140_alt1(__int64*, _QWORD*) __asm__("GameRoutine_98f140");
void GameRoutine_a853b0_alt1(__int64) __asm__("GameRoutine_a853b0");
void GameRoutine_a8c0c0_alt1(__int64) __asm__("GameRoutine_a8c0c0");
void GameRoutine_efaca0_alt1(__int64, __int64*) __asm__("GameRoutine_efaca0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_98f290_alt1() __asm__("GameRoutine_98f290");
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 GameHr_11057c0(__int64 a1);
__int64 GameHr_11085c0(__int64 a1);
__int64 GameHr_111bd80(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 GameHr_111be90(__int64 a1, __int64 a2);
__int64 GameHr_112ad00(_QWORD* a1);
void GameHr_1151f30(__int64 a1);
__int64* GameHr_11571c0(__int64 a1, unsigned __int8* a2, unsigned __int8* a3,
                        char a4, float a5, float a6);
__int64* GameHr_1160bc0(__int64* result);
__int64 GameHr_11893d0(__int64 result, unsigned int a2, unsigned int a3,
                       _BYTE* a4, char a5);
__int64 GameHr_11985f0(__int64 a1, __int64 a2);
_QWORD* game_UnitPool_Find_6ead60(__int64*, int*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 DGame_111ac80(__int64);
__int64 GameHr_179c320(__int64, __int64);
__int64 GameRoutine_1917400_alt1(__int64 result, const char*, unsigned __int64,
                                 __int64, char,
                                 char) __asm__("GameRoutine_1917400");
__int64 Hub_119adb0(__int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Pane_58f8a0(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GetHero(unsigned __int8);
__int64 memset(__int64, int, unsigned __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
extern __int64 game_GameModeData_instance_;
unsigned __int64 strlen(const char*);
void GameHr_1920490(__int64);
void GameHr_1920be0(_QWORD*);
void GameHr_efaca0(__int64, __int64*);
void GameRoutine_191bab0_alt1(__int64, char,
                              __int64*) __asm__("GameRoutine_191bab0");
void SpineCaptureProcessor_1921e00(__int64);
void TrickEntity_7d1480(__int64);
__int64 GameHr_111adc0(__int64 a1);
__int64 GameHr_1125f00(__int64 a1, __int64 a2, __int64 a3);
__int64* GameHr_1126110(__int64 a1, __int64** a2);
__int64* GameHr_1126210(__int64 a1, __int64** a2);
void GameHr_112f550(__int64* a1, __int64* a2);
__int64 GameHr_1199d20(__int64 a1, __int64* a2);
__int64 ProcRunEvent_1194a00(__int64, const char*, __int64*);
extern __int64 (*decltype_c81af0_ptr[3])();
void __attribute__((noreturn))
GameRoutine_c8c1e0_alt1() __asm__("GameRoutine_c8c1e0");
__int64 GameHr_11945e0(__int64 a1, const char* a2, __int64* a3);

__int64 GameHr_11057c0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  atomic_uchar* v5;
  unsigned __int8 explicit;
  int* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  _BYTE* v16;
  bool v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD v47[2];

  nn_os_LockMutex((__int64)GameData_212df28);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      96, 16, 0);
  *(_BYTE*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  v4 = v3;
  *(_BYTE*)(v3 + 52) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_DWORD*)(v3 + 17) = 33686018;
  *(_QWORD*)v3 = game_character_WallCollisionModule_vtable;
  *(_QWORD*)(v3 + 8) = a1;
  *(_DWORD*)(v3 + 48) = 1056964608;
  *(_QWORD*)(v3 + 68) = 0x43FA000043FA0000LL;
  v5 = (atomic_uchar*)GameData_212feb0;
  *(_BYTE*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 76) = 0xC3FA0000C3FA0000LL;
  explicit = atomic_load_explicit(v5, memory_order_acquire);
  v7 = GameData_212fea8;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212feb0) != 0) {
    *v7 = wld_Crc32(0, "WallCollisionModule", 0x13u);
    __cxa_guard_release((__int64)GameData_212feb0);
  }
  v8 = *v7;
  v9 = *(_QWORD*)(a1 + 504);
  v10 = *(_QWORD*)(a1 + 512);
  v11 = v10;
  LODWORD(v47[0]) = v8;
  v47[1] = v4;
  while (v11 != v9) {
    v12 = *(_DWORD*)(v11 - 16);
    v11 -= 16;
    if (v12 == v8) {
      if ((*(_BYTE*)(v4 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v9 == v10 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v9) <= 0x6F) {
    v13 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v13;
    *(_QWORD*)(a1 + 512) = v13;
    *(_QWORD*)(a1 + 520) = v13 + 112;
    if (v10 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v14, v9);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v47);
  if ((*(_BYTE*)(v4 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v4 + 16) = 1;
    *(_BYTE*)(v4 + 17) &= ~2u;
    *(_BYTE*)(v4 + 18) &= ~2u;
    *(_BYTE*)(v4 + 19) &= ~2u;
    *(_BYTE*)(v4 + 20) &= ~2u;
    v15 = *(_BYTE**)(v4 + 8);
    v15[632] = 0;
    v15[664] = 0;
    v15[696] = 0;
    v15[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 64LL))(v4);
    v16 = *(_BYTE**)(v4 + 8);
    v17 = v16[300] == 3 && v16[301] == 3;
    if (v17 || v16[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 72LL))(v4);
    }
  }
LABEL_20:
  v18 = *(__int64**)(a1 + 536);
  v19 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v18 >= v19) {
    v21 = *(_QWORD*)(a1 + 528);
    v22 = (char*)v18 - v21;
    v23 = ((__int64)v18 - v21) >> 3;
    v24 = v23 + 1;
    if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v25 = v19 - v21;
    if (v25 >> 2 > v24) {
      v24 = v25 >> 2;
    }
    if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v24;
    }
    if (v26 != 0) {
      if (v26 >> 61 != 0) {
        goto LABEL_56;
      }
      v27 = fw_memory_HeapManager_Allocate(*v2, 8 * v26, 16, 0);
    }
    else {
      v27 = 0;
    }
    v28 = v27 + 8 * v26;
    v29 = (unsigned __int64)v18 - v21;
    v30 = (__int64)&v22[v27 + -8 * v23];
    *(_QWORD*)&v22[v27] = v4;
    v20 = (__int64)&v22[v27 + 8];
    memcpy(v30, v21, v29);
    *(_QWORD*)(a1 + 528) = v30;
    *(_QWORD*)(a1 + 536) = v20;
    *(_QWORD*)(a1 + 544) = v28;
    if (v21 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v31, v21);
    }
  }
  else {
    *v18 = v4;
    v20 = (__int64)(v18 + 1);
  }
  *(_QWORD*)(a1 + 536) = v20;
  v32 = *(__int64**)(a1 + 560);
  v33 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v32 < v33) {
    *v32 = v4;
    v34 = (__int64)(v32 + 1);
    goto LABEL_52;
  }
  v35 = *(_QWORD*)(a1 + 552);
  v36 = (char*)v32 - v35;
  v37 = ((__int64)v32 - v35) >> 3;
  v38 = v37 + 1;
  if ((unsigned __int64)(v37 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v39 = v33 - v35;
  if (v39 >> 2 > v38) {
    v38 = v39 >> 2;
  }
  if ((unsigned __int64)v39 >= 0x7FFFFFFFFFFFFFF8LL) {
    v40 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v40 = v38;
  }
  if (v40 != 0) {
    if (v40 >> 61 == 0) {
      v41 = fw_memory_HeapManager_Allocate(*v2, 8 * v40, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v41 = 0;
LABEL_48:
  v42 = v41 + 8 * v40;
  v43 = (unsigned __int64)v32 - v35;
  v44 = (__int64)&v36[v41 + -8 * v37];
  *(_QWORD*)&v36[v41] = v4;
  v34 = (__int64)&v36[v41 + 8];
  memcpy(v44, v35, v43);
  *(_QWORD*)(a1 + 552) = v44;
  *(_QWORD*)(a1 + 560) = v34;
  *(_QWORD*)(a1 + 568) = v42;
  if (v35 != 0) {
    v45 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v45, v35);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v34;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex((__int64)GameData_212df28);
  return v4;
}

__int64 GameHr_11085c0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  _BYTE* v11;
  bool v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD v42[2];

  nn_os_LockMutex((__int64)&GameData_2167580);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      88, 16, 0);
  GameRoutine_10965c0_alt1(v3, a1);
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)v3 = game_character_CharacterIshAppear_vtable;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2236620,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2236620) != 0) {
    GameData_2236618 = wld_Crc32(0, "CharacterIshAppear", 0x12u);
    __cxa_guard_release((__int64)&GameData_2236620);
  }
  v4 = *(_QWORD*)(a1 + 504);
  v5 = *(_QWORD*)(a1 + 512);
  v6 = v5;
  LODWORD(v42[0]) = GameData_2236618;
  v42[1] = v3;
  while (v6 != v4) {
    v7 = *(_DWORD*)(v6 - 16);
    v6 -= 16;
    if (v7 == GameData_2236618) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v4 == v5 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v4) <= 0x6F) {
    v8 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v8;
    *(_QWORD*)(a1 + 512) = v8;
    *(_QWORD*)(a1 + 520) = v8 + 112;
    if (v5 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v9, v4);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v42);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v10 = *(_BYTE**)(v3 + 8);
    v10[632] = 0;
    v10[664] = 0;
    v10[696] = 0;
    v10[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v11 = *(_BYTE**)(v3 + 8);
    v12 = v11[300] == 3 && v11[301] == 3;
    if (v12 || v11[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }
LABEL_20:
  v13 = *(__int64**)(a1 + 536);
  v14 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v13 >= v14) {
    v16 = *(_QWORD*)(a1 + 528);
    v17 = (char*)v13 - v16;
    v18 = ((__int64)v13 - v16) >> 3;
    v19 = v18 + 1;
    if ((unsigned __int64)(v18 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v20 = v14 - v16;
    if (v20 >> 2 > v19) {
      v19 = v20 >> 2;
    }
    if ((unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFF8LL) {
      v21 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v21 = v19;
    }
    if (v21 != 0) {
      if (v21 >> 61 != 0) {
        goto LABEL_56;
      }
      v22 = fw_memory_HeapManager_Allocate(*v2, 8 * v21, 16, 0);
    }
    else {
      v22 = 0;
    }
    v23 = v22 + 8 * v21;
    v24 = (unsigned __int64)v13 - v16;
    v25 = (__int64)&v17[v22 + -8 * v18];
    *(_QWORD*)&v17[v22] = v3;
    v15 = (__int64)&v17[v22 + 8];
    memcpy(v25, v16, v24);
    *(_QWORD*)(a1 + 528) = v25;
    *(_QWORD*)(a1 + 536) = v15;
    *(_QWORD*)(a1 + 544) = v23;
    if (v16 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v26, v16);
    }
  }
  else {
    *v13 = v3;
    v15 = (__int64)(v13 + 1);
  }
  *(_QWORD*)(a1 + 536) = v15;
  v27 = *(__int64**)(a1 + 560);
  v28 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v27 < v28) {
    *v27 = v3;
    v29 = (__int64)(v27 + 1);
    goto LABEL_52;
  }
  v30 = *(_QWORD*)(a1 + 552);
  v31 = (char*)v27 - v30;
  v32 = ((__int64)v27 - v30) >> 3;
  v33 = v32 + 1;
  if ((unsigned __int64)(v32 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v34 = v28 - v30;
  if (v34 >> 2 > v33) {
    v33 = v34 >> 2;
  }
  if ((unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF8LL) {
    v35 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v35 = v33;
  }
  if (v35 != 0) {
    if (v35 >> 61 == 0) {
      v36 = fw_memory_HeapManager_Allocate(*v2, 8 * v35, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v36 = 0;
LABEL_48:
  v37 = v36 + 8 * v35;
  v38 = (unsigned __int64)v27 - v30;
  v39 = (__int64)&v31[v36 + -8 * v32];
  *(_QWORD*)&v31[v36] = v3;
  v29 = (__int64)&v31[v36 + 8];
  memcpy(v39, v30, v38);
  *(_QWORD*)(a1 + 552) = v39;
  *(_QWORD*)(a1 + 560) = v29;
  *(_QWORD*)(a1 + 568) = v37;
  if (v30 != 0) {
    v40 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v40, v30);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v29;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex((__int64)GameData_212df28);
  return v3;
}

_QWORD* GameHr_1118720(_QWORD* result, _QWORD* a2)
{
  unsigned __int64 v2;
  _QWORD* v3;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v3 = (_QWORD*)result[1];
  v2 = result[2];
  v5 = result;
  if ((unsigned __int64)v3 >= v2) {
    v8 = (_QWORD*)*result;
    v9 = (__int64)v3 - *result;
    v10 = 1 - 0x5555555555555555LL * (v9 >> 4);
    if (v10 > 0x555555555555555LL) {
      GameRoutine_111a0e0();
    }
    v11 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v2 - (_QWORD)v8) >> 4);
    if (2 * v11 > v10) {
      v10 = 2 * v11;
    }
    if (v11 >= 0x2AAAAAAAAAAAAAALL) {
      v12 = 0x555555555555555LL;
    }
    else {
      v12 = v10;
    }
    if (v12 > 0x555555555555555LL) {
      GameRoutine_60a210(result);
    }
    v13 = 3 * v12;
    v14 = GameData_212bf68;
    result = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 48 * v12,
                                         16, 0);
    v15 = a2[1];
    v16 = (_QWORD*)((char*)result + v9);
    *v16 = *a2;
    v16[1] = v15;
    v17 = a2[3];
    v16[2] = a2[2];
    v16[3] = v17;
    v18 = a2[4];
    v7 = (__int64)result + v9 + 48;
    v16[4] = v18;
    if (v8 != v3) {
      v19 = v8;
      v20 = result;
      do {
        v20[1] = v19[1];
        *v20 = *v19;
        v21 = v19[3];
        v20[2] = v19[2];
        v20[3] = v21;
        v22 = v19[4];
        v19 += 6;
        v20[4] = v22;
        v20 += 6;
      } while (v19 != v3);
    }
    *v5 = result;
    v5[1] = v7;
    v5[2] = &result[2 * v13];
    if (v8 != nullptr) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v23 = 56;
      }
      result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v14 + v23, v8);
    }
  }
  else {
    v3[1] = a2[1];
    *v3 = *a2;
    v6 = a2[3];
    v3[2] = a2[2];
    v3[3] = v6;
    v7 = (__int64)(v3 + 6);
    v3[4] = a2[4];
  }
  v5[1] = v7;
  return result;
}

__int64 GameHr_111adc0(__int64 a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 (**v5)(void);
  __int64 (**v6)(void);
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* i;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  int v23;
  _DWORD* v24;
  __int64 j;
  _BYTE v27[512];

  v2 = (_QWORD*)(a1 + 81920);
  memset((__int64)v27, 0, 0x200u);
  if (*(int*)(a1 + 8) >= 1) {
    v3 = (__int64*)(a1 + 160);
    v4 = 0;
    v5 = (__int64 (**)(void))GameData_2130100[0];
    v6 = (__int64 (**)(void))GameData_2130108[0];
    do {
      v7 = *(v3 - 2);
      if (v7 != 0) {
        v8 = *(v3 - 1);
        if (v8 != 0 &&
            (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 40LL))(v8) != 0 &&
            (*v5)() != 0 && (*v6)() != 0) {
          v7 = *v3;
          if (*v3 != 0) {
            LOBYTE(v7) = (signed __int64)*(_QWORD*)(v7 + 8) > 0LL;
          }
        }
        else {
          LOBYTE(v7) = 0;
        }
      }
      v27[v4++] = v7;
      v3 += 20;
    } while (v4 < *(int*)(a1 + 8));
  }
  v9 = (_QWORD*)v2[6];
  if (v9 != nullptr) {
    v10 = (_QWORD*)v9[6];
    for (i = v9 + 5; v10 != i; v10 = (_QWORD*)v10[1]) {
      GameHr_1920be0(v10 + 2);
    }
    if (v9[7] != 0) {
      v12 = (_QWORD*)v9[6];
      v13 = *(_QWORD**)(v9[5] + 8LL);
      *(_QWORD*)(*v12 + 8LL) = v13;
      *v13 = *v12;
      v9[7] = 0;
      if (v12 != i) {
        v14 = fw_memory_g_heap_manager_ptr;
        do {
          v15 = (_QWORD*)v12[1];
          SpineCaptureProcessor_1921e00((__int64)(v12 + 2));
          if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v16, (__int64)v12);
          v12 = v15;
        } while (v15 != i);
      }
    }
    v17 = v2[6];
    v2[6] = 0;
    if (v17 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
    }
  }
  if (v2[5] != 0) {
    v18 = (_QWORD*)v2[4];
    v19 = *(_QWORD**)(v2[3] + 8LL);
    *(_QWORD*)(*v18 + 8LL) = v19;
    *v19 = *v18;
    v2[5] = 0;
    if (v18 != v2 + 3) {
      v20 = fw_memory_g_heap_manager_ptr;
      do {
        v21 = (_QWORD*)v18[1];
        GameHr_1920490((__int64)(v18 + 2));
        if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v22, (__int64)v18);
        v18 = v21;
      } while (v21 != v2 + 3);
    }
  }
  v23 = *(_DWORD*)(a1 + 8);
  v2[2] = v2 + 2;
  if (v23 >= 1) {
    v24 = (_DWORD*)(a1 + 116);
    for (j = 0; j < v23; ++j) {
      if (v27[j] != 1) {
        goto LABEL_35;
      }
      if ((*(_BYTE*)(v24 - 25) & 1) != 0) {
        **(_BYTE**)(v24 - 21) = 0;
        *(_QWORD*)(v24 - 23) = 0;
        if ((*(_BYTE*)(v24 - 17) & 1) != 0) {
        LABEL_41:
          **(_BYTE**)(v24 - 13) = 0;
          *(_QWORD*)(v24 - 15) = 0;
          goto LABEL_34;
        }
      }
      else {
        *((_WORD*)v24 - 50) = 0;
        if ((*(_BYTE*)(v24 - 17) & 1) != 0) {
          goto LABEL_41;
        }
      }
      *((_WORD*)v24 - 34) = 0;
    LABEL_34:
      *((_BYTE*)v24 - 40) = 0;
      *(v24 - 11) = 0;
      *(_QWORD*)(v24 - 9) = 0;
      *(_QWORD*)(v24 - 7) = 0;
      *(_QWORD*)(v24 - 5) = 0;
      *(_QWORD*)(v24 - 3) = 0;
      *((_BYTE*)v24 - 4) = 0;
      *v24 = 1;
      v23 = *(_DWORD*)(a1 + 8);
    LABEL_35:
      v24 += 40;
    }
  }
  return DGame_111ac80(a1);
}

__int64 GameHr_111b660(__int64 a1, __int64 a2)
{
  __int64 v2;
  _BYTE* v3;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BOOL4 v17;
  int v18;
  int v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _BOOL4 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _BYTE* v39;
  __int64 v41;
  __int64 v42;
  char v43;
  char v44;
  char v45;
  char v46;
  _BYTE* v47;
  _BYTE* v48;
  __int64 v49;
  char* v50;
  __int64 v51;
  __int64* v52;
  __int64* v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  _QWORD* v61;
  char v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  _QWORD* v66;
  __int64 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  int v71;
  int v72;

  v2 = *(_QWORD*)(a2 + 64);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(_BYTE**)(v2 + 40);
  if (v3 == nullptr || *v3 == 0) {
    return 0;
  }
  v6 = 0;
  v69 = a1 + 81920;
  v7 = 81936;
  do {
    v9 = a1 + v6;
    ++*(_DWORD*)(a1 + v6 + 168);
    if (v7 == 81936) {
      v7 = 81936;
      if (*(_QWORD*)(v9 + 144) != 0) {
        v10 = *(_QWORD*)(a1 + v6 + 152);
        v7 = 81936;
        if (v10 != 0) {
          v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 40LL))(v10);
          v7 = 81936;
          if (v11 != 0) {
            v12 = ((__int64 (*)(void))GameData_2177d68)();
            v7 = 81936;
            if (v12 != 0) {
              v13 = GameData_21779a0();
              v7 = 81936;
              if (v13 != 0) {
                v14 = *(_QWORD*)(a1 + v6 + 80);
                v7 = 81936;
                if (v14 != 0) {
                  v15 = *(_QWORD*)(a2 + 64);
                  v7 = 81936;
                  if (v15 != 0) {
                    v16 = a1 + v6;
                    if (*(_BYTE*)(a1 + v6 + 72) != 0) {
                      v17 = *(unsigned __int8*)(a1 + v6 + 72) ==
                                *(unsigned __int8*)(a2 + 56) &&
                            *(unsigned __int8*)(a1 + v6 + 74) ==
                                *(unsigned __int8*)(a2 + 58) &&
                            *(unsigned __int8*)(a1 + v6 + 76) ==
                                *(unsigned __int8*)(a2 + 60) &&
                            *(unsigned __int8*)(a1 + v6 + 75) ==
                                *(unsigned __int8*)(a2 + 59);
                      v7 = 81936;
                      if (v17) {
                        v7 = 81936;
                        if (v14 == v15) {
                          v7 = 81936;
                          if (*(_QWORD*)(a1 + v6 + 88) == 0) {
                            v7 = 81936;
                            if (*(_DWORD*)(a1 + v6 + 116) ==
                                *(_DWORD*)(a2 + 100)) {
                            LABEL_6:
                              v7 = v6 + 16;
                              *(_DWORD*)(v9 + 168) = 0;
                            }
                          }
                        }
                      }
                    }
                    else {
                      v18 = *(unsigned __int8*)(v16 + 96);
                      v19 = *(unsigned __int8*)(a2 + 80);
                      v20 = GameRoutine_191eea0(v16 + 97, a2 + 81);
                      v7 = 81936;
                      if ((v20 & 1) != 0) {
                        v7 = 81936;
                        if (v15 == v14) {
                          v7 = 81936;
                          if (v18 == v19) {
                            goto LABEL_6;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v6 += 160;
  } while (v6 != 81920);
  if (v7 != 81936) {
    return 0;
  }
  v21 = 0;
  v22 = a1 + 81936;
  v23 = a1 + 81936;
  v24 = a1 + 81936;
  do {
    v25 = a1 + v21;
    if (*(_QWORD*)(a1 + v21 + 144) != 0) {
      v26 = *(_QWORD*)(v25 + 152);
      if (v26 != 0 &&
          (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 40LL))(v26) != 0 &&
          ((__int64 (*)(void))GameData_2177d68)() != 0 &&
          GameData_21779a0() != 0) {
        v27 = *(_QWORD*)(a1 + v21 + 80);
        if (v27 != 0) {
          v70 = v24;
          v28 = *(_QWORD*)(a2 + 64);
          if (v28 != 0) {
            v29 = a1 + v21;
            if (*(_BYTE*)(a1 + v21 + 72) != 0) {
              v30 = *(unsigned __int8*)(a1 + v21 + 72) ==
                        *(unsigned __int8*)(a2 + 56) &&
                    *(unsigned __int8*)(a1 + v21 + 74) ==
                        *(unsigned __int8*)(a2 + 58) &&
                    *(unsigned __int8*)(a1 + v21 + 76) ==
                        *(unsigned __int8*)(a2 + 60) &&
                    *(unsigned __int8*)(a1 + v21 + 75) ==
                        *(unsigned __int8*)(a2 + 59);
              if (v30 && v27 == v28 && *(_QWORD*)(a1 + v21 + 88) == 0 &&
                  *(_DWORD*)(a1 + v21 + 116) == *(_DWORD*)(a2 + 100)) {
              LABEL_86:
                v33 = a1 + v21 + 16;
                if (v33 == v22) {
                  return 1;
                }
                goto LABEL_75;
              }
            }
            else {
              v71 = *(unsigned __int8*)(v29 + 96);
              v68 = *(unsigned __int8*)(a2 + 80);
              if ((GameRoutine_191eea0(v29 + 97, a2 + 81) & 1) != 0 &&
                  v28 == v27 && v71 == v68) {
                goto LABEL_86;
              }
            }
          }
          if (*(_QWORD*)(v25 + 144) != 0 &&
              (v31 = *(_QWORD*)(v25 + 152)) != 0 &&
              (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 40LL))(v31) != 0 &&
              ((__int64 (*)(void))GameData_2177d68)() != 0 &&
              GameData_21779a0() != 0 &&
              (v32 = *(_QWORD*)(a1 + v21 + 160)) != 0 &&
              *(__int64*)(v32 + 8) > 0) {
            v24 = v70;
          }
          else {
            v24 = v70;
            if (v23 == v22) {
              v23 = v25 + 16;
            }
            else if (*(_DWORD*)(v23 + 152) < *(_DWORD*)(a1 + v21 + 168)) {
              v23 = v25 + 16;
            }
          }
        }
        else if (v24 == v22) {
          v24 = v25 + 16;
        }
      }
    }
    v21 += 160;
  } while (v21 != 81920);
  if (v24 == v22) {
    v33 = v23;
  }
  else {
    v33 = v24;
  }
  if (v33 == v22) {
    return 1;
  }
LABEL_75:
  v34 = *(_QWORD*)(v33 + 128);
  v72 = 0;
  if (v34 != 0) {
    v35 = *(_QWORD*)(v33 + 136);
    if (v35 != 0 &&
        (*(__int64 (**)(__int64))(*(_QWORD*)v35 + 40LL))(v35) != 0 &&
        ((__int64 (*)(void))GameData_2177d68)() != 0 &&
        GameData_21779a0() != 0) {
      v36 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v33 + 136) + 40LL))(
          *(_QWORD*)(v33 + 136));
      v37 = GameData_2177d68(v36);
      v38 = (*(__int64 (**)(void))GameData_2130108[0])();
      v39 = (_BYTE*)((__int64 (*)(__int64))*GameData_2130110)(v37);
      if (v38 != 0 && v39 != nullptr) {
        v41 = v38 & 7;
        if ((unsigned __int64)(v38 - 1) >= 7) {
          v43 = v72;
          v44 = BYTE1(v72);
          v45 = BYTE2(v72);
          v42 = 0;
          v46 = HIBYTE(v72);
          do {
            v47 = &v39[v42];
            v42 += 8;
            *v47 = v43;
            v47[1] = v44;
            v47[2] = v45;
            v47[3] = v46;
            v47[4] = v43;
            v47[5] = v44;
            v47[6] = v45;
            v47[7] = v46;
          } while ((v38 & 0xFFFFFFFFFFFFFFF8LL) != v42);
          v39 += v42;
        }
        else {
          v42 = 0;
        }
        if ((v38 & 7) != 0) {
          do {
            --v41;
            v48 = (_BYTE*)((unsigned __int64)&v72 | v42++ & 3);
            *v39++ = *v48;
          } while (v41 != 0);
        }
      }
    }
  }
  GameRoutine_bbf550(v33, a2);
  *(_DWORD*)(v33 + 152) = 0;
  v49 = *(unsigned int*)(a2 + 100);
  if ((unsigned int)v49 > 3) {
    v50 = &GameData_1a9f09e;
  }
  else {
    v50 = (char*)*(&GameData_2010280 + v49);
  }
  v51 = *(_QWORD*)(a2 + 64);
  v52 = *(__int64**)(*GameData_212cbb8[0] + 64);
  v53 = *(__int64**)(*GameData_212cbb8[0] + 72);
  if (v52 == v53) {
  LABEL_100:
    v55 = *v52;
  }
  else {
    v54 = *(__int64**)(*GameData_212cbb8[0] + 64);
    while (1) {
      v56 = *v54++;
      v55 = v56;
      if ((unsigned int)GameRoutine_1a09d30(*(_QWORD*)(v56 + 8), v50) == 0) {
        break;
      }
      if (v54 == v53) {
        goto LABEL_100;
      }
    }
  }
  v57 = *GameData_2132360;
  v59 = *(_QWORD*)(v33 + 136);
  v58 = *(_QWORD*)(v33 + 144);
  v60 = GameData_2175a48;
  if (v58 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 8), 1u,
                              memory_order_relaxed);
  }
  v61 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 216, 16, 0);
  v62 = *(_BYTE*)(a2 + 80);
  v63 = *(_QWORD*)(a2 + 81);
  v64 = *(_QWORD*)(a2 + 89);
  v65 = v61;
  *v61 = 0;
  v61[1] = 0;
  v61[2] = 0;
  v66 = v61 + 2;
  v65[3] = 0;
  v65[4] = 0;
  v65[5] = 0;
  v65[6] = 0;
  v65[7] = 0;
  v65[8] = 0;
  v65[9] = 0;
  v65[10] = 0;
  v65[11] = 0;
  v65[12] = 0;
  v65[13] = 0;
  v65[14] = v51;
  v65[15] = v55;
  v65[16] = 0;
  *((_DWORD*)v65 + 34) = 0;
  v65[18] = v57;
  *((_DWORD*)v65 + 38) = v60;
  *((_DWORD*)v65 + 39) = 1092616192;
  v65[20] = 0;
  v65[21] = 0;
  v65[22] = v59;
  v65[23] = v58;
  if (v58 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 8), 1u,
                              memory_order_relaxed);
  }
  *((_BYTE*)v65 + 208) = v62;
  v65[24] = v63;
  v65[25] = v64;
  *((_BYTE*)v65 + 209) = 1;
  GameRoutine_19229d0(v66, v51);
  v67 = *(_QWORD*)(v69 + 24);
  *v65 = v67;
  v65[1] = v69 + 24;
  *(_QWORD*)(v67 + 8) = v65;
  *(_QWORD*)(v69 + 24) = v65;
  ++*(_QWORD*)(v69 + 40);
  if (v58 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
    GameRoutine_1a09c50(v58);
  }
  return 1;
}

__int64 GameHr_111bd80(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v10[2];
    __int64 v11;
    __int64* v12;
    __int64 v13;
    __int64 v14;
  } v10_;
  struct {
    __int64 v15[6];
    char v16;
    char gap105_[3];
    int v17;
  } v15_;

  if (a2 == 0 || *(_BYTE*)(a2 + 32) == 0) {
    return 0;
  }
  v10_.v10[0] = 0;
  v10_.v10[1] = 0;
  v10_.v13 = 0;
  v10_.v14 = 0;
  v15_.v15[0] = 0;
  *(__int64*)((char*)v15_.v15 + 5) = 0;
  v6 = GameData_212dea8 + 2;
  __builtin_memset(&v15_.v15[2], 0, 32);
  v15_.v16 = 0;
  v10_.v11 = 0;
  v10_.v12 = GameData_212dea8 + 2;
  v15_.v17 = 1;
  TaskPassNodes_bbf020((__int64)v10_.v10, a2, a3);
  v15_.v17 = a4;
  GameRoutine_111b660(a1, (__int64)v10_.v10);
  v10_.v12 = v6;
  if ((v10_.v13 & 1) != 0 && v15_.v15[0] != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                  v15_.v15[0]);
  }
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  v10_.v11);
  }
  return 1;
}

__int64 GameHr_111be90(__int64 a1, __int64 a2)
{
  _BYTE* v2;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[2];
    __int64 v10;
    __int64* v11;
    __int64 v12;
    __int64 v13;
  } v9_;
  struct {
    __int64 v14[6];
    char v15;
    char gap105_[3];
    int v16;
  } v14_;

  if (a2 == 0) {
    return 0;
  }
  v2 = *(_BYTE**)(a2 + 40);
  if (v2 == nullptr) {
    return 0;
  }
  if (*v2 == 0 || GameHr_136ac50(ui_Manager_instance_ + 1264, 1u,
                                 *(_QWORD*)(a2 + 8)) != 0) {
    return 0;
  }
  v9_.v9[0] = 0;
  v9_.v9[1] = 0;
  v9_.v12 = 0;
  v9_.v13 = 0;
  v14_.v14[0] = 0;
  *(__int64*)((char*)v14_.v14 + 5) = 0;
  v6 = GameData_212dea8 + 2;
  __builtin_memset(&v14_.v14[2], 0, 32);
  v14_.v15 = 0;
  v14_.v16 = 1;
  v9_.v10 = 0;
  v9_.v11 = GameData_212dea8 + 2;
  TaskPassNodes_bbef70((__int64)v9_.v9, a2, 0);
  GameRoutine_111b660(a1, (__int64)v9_.v9);
  v9_.v11 = v6;
  if ((v9_.v12 & 1) != 0 && v14_.v14[0] != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                  v14_.v14[0]);
  }
  if ((v9_.v9[0] & 1) != 0 && v9_.v10 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  v9_.v10);
  }
  return 1;
}

__int64 GameHr_111d240(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  _BYTE* v13;
  bool v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  int v44;
  __int64 v45;

  GameRoutine_1a09b70(GameData_212df28);
  v2 = (_QWORD*)GameData_212bf68;
  v3 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 56, 16, 0);
  *(_BYTE*)(v3 + 16) = 0;
  *(_DWORD*)(v3 + 17) = 33686018;
  *(_QWORD*)v3 = GameData_20102b0;
  *(_QWORD*)(v3 + 8) = a1;
  v4 = GameRoutine_651b90(*v2, 32, 16, 0);
  *(_QWORD*)v4 = GameData_212fe80 + 2;
  *(_QWORD*)(v4 + 8) = 0;
  *(_DWORD*)(v4 + 24) = 0;
  *(_QWORD*)(v3 + 24) = v4 + 24;
  *(_QWORD*)(v3 + 32) = v4;
  *(_QWORD*)(v3 + 40) = v4 + 24;
  *(_QWORD*)(v3 + 48) = v4;
  *(_QWORD*)(v4 + 16) = 0;
  v5 = (atomic_ullong*)(v4 + 16);
  atomic_fetch_add_explicit(v5, 1u, memory_order_relaxed);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2236788,
                            memory_order_acquire) &
       1) == 0) {
    v5 = (atomic_ullong*)GameRoutine_1a09fd0(&GameData_2236788);
    if ((_DWORD)v5 != 0) {
      GameData_2236780 = GameRoutine_540(0, "LifetimeModule", 14);
      v5 = (atomic_ullong*)GameRoutine_1a09fe0(&GameData_2236788);
    }
  }
  v6 = *(_QWORD*)(a1 + 504);
  v7 = *(_QWORD*)(a1 + 512);
  v8 = v7;
  v44 = GameData_2236780;
  v45 = v3;
  while (v8 != v6) {
    v9 = *(_DWORD*)(v8 - 16);
    v8 -= 16;
    if (v9 == GameData_2236780) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v6 == v7 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v6) <= 0x6F) {
    v10 = GameRoutine_651b90(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v10;
    *(_QWORD*)(a1 + 512) = v10;
    *(_QWORD*)(a1 + 520) = v10 + 112;
    if (v7 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v11 = 56;
      }
      GameRoutine_1a0a4e0(*v2 + v11, v6);
    }
  }
  v5 = (atomic_ullong*)GameRoutine_98f140(a1 + 504, &v44);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v12 = *(_BYTE**)(v3 + 8);
    v12[632] = 0;
    v12[664] = 0;
    v12[696] = 0;
    v12[728] = 0;
    v5 = (atomic_ullong*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v13 = *(_BYTE**)(v3 + 8);
    v14 = v13[300] == 3 && v13[301] == 3;
    if (v14 || v13[302] == 1) {
      v5 = (atomic_ullong*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }
LABEL_20:
  v15 = *(__int64**)(a1 + 536);
  v16 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v15 >= v16) {
    v18 = *(_QWORD*)(a1 + 528);
    v19 = (char*)v15 - v18;
    v20 = ((__int64)v15 - v18) >> 3;
    v21 = v20 + 1;
    if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
      goto LABEL_55;
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
        goto LABEL_56;
      }
      v24 = GameRoutine_651b90(*v2, 8 * v23, 16, 0);
    }
    else {
      v24 = 0;
    }
    v25 = v24 + 8 * v23;
    v26 = (char*)v15 - v18;
    v27 = (__int64)&v19[v24 + -8 * v20];
    *(_QWORD*)&v19[v24] = v3;
    v17 = (__int64)&v19[v24 + 8];
    v5 = (atomic_ullong*)GameRoutine_1a0b950(v27, v18, v26);
    *(_QWORD*)(a1 + 528) = v27;
    *(_QWORD*)(a1 + 536) = v17;
    *(_QWORD*)(a1 + 544) = v25;
    if (v18 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v28 = 56;
      }
      v5 = (atomic_ullong*)GameRoutine_1a0a4e0(*v2 + v28, v18);
    }
  }
  else {
    *v15 = v3;
    v17 = (__int64)(v15 + 1);
  }
  *(_QWORD*)(a1 + 536) = v17;
  v29 = *(__int64**)(a1 + 560);
  v30 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v29 < v30) {
    *v29 = v3;
    v31 = (__int64)(v29 + 1);
    goto LABEL_52;
  }
  v32 = *(_QWORD*)(a1 + 552);
  v33 = (char*)v29 - v32;
  v34 = ((__int64)v29 - v32) >> 3;
  v35 = v34 + 1;
  if ((unsigned __int64)(v34 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v5);
  }
  v36 = v30 - v32;
  if (v36 >> 2 > v35) {
    v35 = v36 >> 2;
  }
  if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF8LL) {
    v37 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v37 = v35;
  }
  if (v37 != 0) {
    if (v37 >> 61 == 0) {
      v38 = GameRoutine_651b90(*v2, 8 * v37, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v5);
  }
  v38 = 0;
LABEL_48:
  v39 = v38 + 8 * v37;
  v40 = (char*)v29 - v32;
  v41 = (__int64)&v33[v38 + -8 * v34];
  *(_QWORD*)&v33[v38] = v3;
  v31 = (__int64)&v33[v38 + 8];
  GameRoutine_1a0b950(v41, v32, v40);
  *(_QWORD*)(a1 + 552) = v41;
  *(_QWORD*)(a1 + 560) = v31;
  *(_QWORD*)(a1 + 568) = v39;
  if (v32 != 0) {
    v42 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v42 = 56;
    }
    GameRoutine_1a0a4e0(*v2 + v42, v32);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v31;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  GameRoutine_1a09b80(GameData_212df28);
  return v3;
}

__int64 GameHr_111f040(__int64 a1, __int64 a2, int* a3, unsigned int a4)
{
  __int64 v4;
  __int64 result;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  _DWORD v17[2];

  v4 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(a1 + 64) == 1) {
    v16 = GameRoutine_7a8520(a2);
    result = GameRoutine_65fbc0(v4, &v16, a4);
    *a3 = result;
  }
  else {
    v8 = GameRoutine_7a8520(a2);
    v9 = *(_QWORD*)(v4 + 120);
    v10 = *(_DWORD*)(v4 + 20);
    v11 = *a3;
    v17[0] = v8;
    v17[1] = v10;
    result = GameRoutine_6616e0(v9, v17);
    v12 = *(int*)(v4 + 20);
    *(_DWORD*)(v4 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(v4 + 8) + v12) = v11;
    v13 = *(int*)(v4 + 20);
    *(_DWORD*)(v4 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(v4 + 8) + v13) = BYTE1(v11);
    v14 = *(int*)(v4 + 20);
    *(_DWORD*)(v4 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(v4 + 8) + v14) = BYTE2(v11);
    v15 = *(int*)(v4 + 20);
    *(_DWORD*)(v4 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(v4 + 8) + v15) = HIBYTE(v11);
  }
  return result;
}

__int64 GameHr_111f130(__int64 a1, __int64 a2, int* a3, unsigned int a4)
{
  __int64 v4;
  __int64 result;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  _DWORD v17[2];

  v4 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(a1 + 64) == 1) {
    v16 = GameRoutine_7a8520(a2);
    result = GameRoutine_65fbc0(v4, &v16, a4);
    *a3 = result;
  }
  else {
    v8 = GameRoutine_7a8520(a2);
    v9 = *(_QWORD*)(v4 + 120);
    v10 = *(_DWORD*)(v4 + 20);
    v11 = *a3;
    v17[0] = v8;
    v17[1] = v10;
    result = GameRoutine_6616e0(v9, v17);
    v12 = *(int*)(v4 + 20);
    *(_DWORD*)(v4 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(v4 + 8) + v12) = v11;
    v13 = *(int*)(v4 + 20);
    *(_DWORD*)(v4 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(v4 + 8) + v13) = BYTE1(v11);
    v14 = *(int*)(v4 + 20);
    *(_DWORD*)(v4 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(v4 + 8) + v14) = BYTE2(v11);
    v15 = *(int*)(v4 + 20);
    *(_DWORD*)(v4 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(v4 + 8) + v15) = HIBYTE(v11);
  }
  return result;
}

void GameHr_111f220(__int64 a1, __int64 a2, float* a3, float a4)
{
  __int64 v4;
  int v7;
  __int64 v8;
  int v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  _DWORD v16[2];

  v4 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(a1 + 64) == 1) {
    v15 = GameRoutine_7a8520(a2);
    *a3 = GameRoutine_65fe00(v4, &v15, a4);
  }
  else {
    v7 = GameRoutine_7a8520(a2);
    v8 = *(_QWORD*)(v4 + 120);
    v9 = *(_DWORD*)(v4 + 20);
    v10 = *a3;
    v16[0] = v7;
    v16[1] = v9;
    GameRoutine_6616e0(v8, v16);
    v11 = *(int*)(v4 + 20);
    *(_DWORD*)(v4 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(v4 + 8) + v11) = LOBYTE(v10);
    v12 = *(int*)(v4 + 20);
    *(_DWORD*)(v4 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(v4 + 8) + v12) = BYTE1(v10);
    v13 = *(int*)(v4 + 20);
    *(_DWORD*)(v4 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(v4 + 8) + v13) = BYTE2(v10);
    v14 = *(int*)(v4 + 20);
    *(_DWORD*)(v4 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(v4 + 8) + v14) = HIBYTE(v10);
  }
}

_BYTE* GameHr_111f310(__int64 a1, __int64 a2, char* a3, char* a4)
{
  __int64 v4;
  int v7;
  char v8;
  char* v9;
  char* v10;
  _BYTE* result;
  int v12;
  char v13;
  char* v14;
  char* v15;
  int v16;
  int v17;

  v4 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(a1 + 64) == 1) {
    v7 = GameRoutine_7a8520(a2);
    v8 = *a4;
    v9 = *((char**)a4 + 2);
    v17 = v7;
    if ((v8 & 1) != 0) {
      v10 = v9;
    }
    else {
      v10 = a4 + 1;
    }
    result = (_BYTE*)GameRoutine_660040(v4, &v17, v10);
    if (result != nullptr && *result != 0) {
      return (_BYTE*)GameRoutine_60a020(a3, result);
    }
    else if ((*a3 & 1) != 0) {
      **((_BYTE**)a3 + 2) = 0;
      *((_QWORD*)a3 + 1) = 0;
    }
    else {
      *(_WORD*)a3 = 0;
    }
  }
  else {
    v12 = GameRoutine_7a8520(a2);
    v13 = *a3;
    v14 = *((char**)a3 + 2);
    v16 = v12;
    if ((v13 & 1) != 0) {
      v15 = v14;
    }
    else {
      v15 = a3 + 1;
    }
    return (_BYTE*)GameRoutine_65f630(v4, &v16, v15);
  }
  return result;
}

__int64 GameHr_1125f00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)a3 + 184LL))(a3) == 1) {
    v5 = *(_QWORD*)(a2 + 8);
    if (v5 != 0) {
      v6 = *(__int64**)a2;
      v7 = *(_QWORD*)(a2 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      v8 = std___1___shared_weak_count_lock(v7);
      if (v8 != 0) {
        v9 = v8;
        if (v6 != nullptr) {
          v10 = ui_LayoutAccessor_FindPane(v6, (__int64)"MapChip_Object");
          if (v10 != 0) {
            v11 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d678[0],
                                 0);
            if (v11 != 0) {
              Manager_136a920(ui_Manager_instance_ + 1264, v11, 0, 8u,
                              "Battle_MiniMap_Object_Device_Red");
            }
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
      std___1___shared_weak_count___release_weak(v5);
    }
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 184LL))(a3);
  if ((_BYTE)result == 0) {
    v13 = *(_QWORD*)(a2 + 8);
    if (v13 != 0) {
      v14 = *(__int64**)a2;
      v15 = *(_QWORD*)(a2 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                memory_order_relaxed);
      v16 = std___1___shared_weak_count_lock(v15);
      if (v16 != 0) {
        v17 = v16;
        if (v14 != nullptr) {
          v18 = ui_LayoutAccessor_FindPane(v14, (__int64)"MapChip_Object");
          if (v18 != 0) {
            v19 = __dynamic_cast(v18, GameData_212d670[0], GameData_212d678[0],
                                 0);
            if (v19 != 0) {
              Manager_136a920(ui_Manager_instance_ + 1264, v19, 0, 8u,
                              "Battle_MiniMap_Object_Device_Blue");
            }
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v17);
        }
      }
      return std___1___shared_weak_count___release_weak(v13);
    }
  }
  return result;
}

__int64* GameHr_1126110(__int64 a1, __int64** a2)
{
  __int64* result;
  __int64 v5;
  const char* v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64 v9;
    __int64* v10;
  } v9_;

  *(_BYTE*)(a1 + 52) = 1;
  result = a2[1];
  if (result != nullptr) {
    result = (__int64*)std___1___shared_weak_count_lock((__int64)result);
    if (result != nullptr) {
      v5 = (__int64)result;
      result = *a2;
      if (*a2 == nullptr) {
        goto LABEL_16;
      }
      v6 = (*(_BYTE*)(a1 + 8) & 1) != 0 ? *(const char**)(a1 + 24)
                                        : (const char*)(a1 + 9);
      LayoutAccessor_1560070((void*)(&v9_.v9), result, v6);
      result = v9_.v10;
      if (v9_.v10 == nullptr) {
        goto LABEL_16;
      }
      v7 = std___1___shared_weak_count_lock((__int64)v9_.v10);
      v8 = v9_.v9;
      result = v9_.v10;
      if (v9_.v10 != nullptr) {
        result = (__int64*)std___1___shared_weak_count___release_weak(
            (__int64)v9_.v10);
      }
      if (v7 != 0 && v8 != 0) {
        result = (__int64*)LayoutAccessor_155e830(v8, 1);
      }
      else if (v7 == 0) {
      LABEL_16:
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          return (__int64*)std___1___shared_weak_count___release_weak(v5);
        }
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        result = (__int64*)std___1___shared_weak_count___release_weak(v7);
      }
      goto LABEL_16;
    }
  }
  return result;
}

__int64* GameHr_1126210(__int64 a1, __int64** a2)
{
  __int64* result;
  __int64 v5;
  const char* v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64 v9;
    __int64* v10;
  } v9_;

  *(_DWORD*)(a1 + 44) = 0;
  *(_BYTE*)(a1 + 52) = 0;
  result = a2[1];
  if (result != nullptr) {
    result = (__int64*)std___1___shared_weak_count_lock((__int64)result);
    if (result != nullptr) {
      v5 = (__int64)result;
      result = *a2;
      if (*a2 == nullptr) {
        goto LABEL_16;
      }
      v6 = (*(_BYTE*)(a1 + 8) & 1) != 0 ? *(const char**)(a1 + 24)
                                        : (const char*)(a1 + 9);
      LayoutAccessor_1560070((void*)(&v9_.v9), result, v6);
      result = v9_.v10;
      if (v9_.v10 == nullptr) {
        goto LABEL_16;
      }
      v7 = std___1___shared_weak_count_lock((__int64)v9_.v10);
      v8 = v9_.v9;
      result = v9_.v10;
      if (v9_.v10 != nullptr) {
        result = (__int64*)std___1___shared_weak_count___release_weak(
            (__int64)v9_.v10);
      }
      if (v7 != 0 && v8 != 0) {
        result = (__int64*)LayoutAccessor_155e830(v8, 0);
      }
      else if (v7 == 0) {
      LABEL_16:
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          return (__int64*)std___1___shared_weak_count___release_weak(v5);
        }
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        result = (__int64*)std___1___shared_weak_count___release_weak(v7);
      }
      goto LABEL_16;
    }
  }
  return result;
}

__int64 GameHr_112ad00(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  _BYTE* v19;
  bool v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v50;
  int v51;
  _QWORD v52[2];

  v1 = a1[49];
  v2 = a1[50];
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    v3 = *(_DWORD*)(v1 + 11784);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v3 <= 1) {
        goto LABEL_4;
      }
      return 0;
    }
    v15 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    a1 = v15;
    if (v3 >= 2) {
      return 0;
    }
  }
  else if (*(_DWORD*)(v1 + 11784) >= 2u) {
    return 0;
  }
LABEL_4:
  v4 = a1[1];
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22367c8,
                            memory_order_acquire) &
       1) == 0) {
    v50 = a1;
    v51 = __cxa_guard_acquire((__int64)&GameData_22367c8);
    a1 = v50;
    if (v51 != 0) {
      GameData_22367c4 = wld_Crc32(0, "CharacterDamageFalldown", 0x17u);
      __cxa_guard_release((__int64)&GameData_22367c8);
      a1 = v50;
    }
  }
  v5 = *(_QWORD*)(v4 + 512);
  v6 = v5;
  do {
    if (v6 == *(_QWORD*)(v4 + 504)) {
      goto LABEL_10;
    }
    v7 = *(_DWORD*)(v6 - 16);
    v6 -= 16;
    v5 -= 16;
  } while (v7 != GameData_22367c4);
  if (*(_QWORD*)(v4 + 512) == v5 || (v8 = *(_QWORD*)(v5 + 8)) == 0) {
  LABEL_10:
    v9 = a1[1];
    nn_os_LockMutex((__int64)&GameData_2167580);
    v10 = (__int64*)fw_memory_g_heap_manager_ptr;
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        128, 16, 0);
    GameRoutine_10965c0_alt1(v8, v9);
    *(_QWORD*)(v8 + 64) = 0;
    *(_QWORD*)(v8 + 72) = 0;
    *(_DWORD*)(v8 + 80) = 0;
    *(_QWORD*)(v8 + 96) = 0;
    *(_QWORD*)(v8 + 104) = 0;
    *(_QWORD*)(v8 + 112) = 0;
    *(_QWORD*)v8 = game_character_CharacterDamageFalldown_vtable;
    *(_DWORD*)(v8 + 88) = -1;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22367c8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_22367c8) != 0) {
      GameData_22367c4 = wld_Crc32(0, "CharacterDamageFalldown", 0x17u);
      __cxa_guard_release((__int64)&GameData_22367c8);
    }
    v11 = *(_QWORD*)(v9 + 504);
    v12 = *(_QWORD*)(v9 + 512);
    v13 = v12;
    LODWORD(v52[0]) = GameData_22367c4;
    v52[1] = v8;
    while (v13 != v11) {
      v14 = *(_DWORD*)(v13 - 16);
      v13 -= 16;
      if (v14 == GameData_22367c4) {
        if ((*(_BYTE*)(v8 + 16) & 1) != 0) {
          goto LABEL_33;
        }
        goto LABEL_27;
      }
    }
    if (v11 == v12 && (unsigned __int64)(*(_QWORD*)(v9 + 520) - v11) <= 0x6F) {
      v16 = fw_memory_HeapManager_Allocate(*v10, 112, 16, 0);
      *(_QWORD*)(v9 + 504) = v16;
      *(_QWORD*)(v9 + 512) = v16;
      *(_QWORD*)(v9 + 520) = v16 + 112;
      if (v12 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*v10 + v17, v11);
      }
    }
    GameRoutine_98f140_alt1((__int64*)(v9 + 504), v52);
    if ((*(_BYTE*)(v8 + 16) & 1) == 0) {
    LABEL_27:
      *(_BYTE*)(v8 + 16) = 1;
      *(_BYTE*)(v8 + 17) &= ~2u;
      *(_BYTE*)(v8 + 18) &= ~2u;
      *(_BYTE*)(v8 + 19) &= ~2u;
      *(_BYTE*)(v8 + 20) &= ~2u;
      v18 = *(_BYTE**)(v8 + 8);
      v18[632] = 0;
      v18[664] = 0;
      v18[696] = 0;
      v18[728] = 0;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 64LL))(v8);
      v19 = *(_BYTE**)(v8 + 8);
      v20 = v19[300] == 3 && v19[301] == 3;
      if (v20 || v19[302] == 1) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8);
      }
    }
  LABEL_33:
    v21 = *(__int64**)(v9 + 536);
    v22 = *(_QWORD*)(v9 + 544);
    if ((unsigned __int64)v21 >= v22) {
      v24 = *(_QWORD*)(v9 + 528);
      v25 = (char*)v21 - v24;
      v26 = ((__int64)v21 - v24) >> 3;
      v27 = v26 + 1;
      if ((unsigned __int64)(v26 + 1) >> 61 != 0) {
        goto LABEL_71;
      }
      v28 = v22 - v24;
      if (v28 >> 2 > v27) {
        v27 = v28 >> 2;
      }
      if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF8LL) {
        v29 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v29 = v27;
      }
      if (v29 != 0) {
        if (v29 >> 61 != 0) {
          goto LABEL_72;
        }
        v30 = fw_memory_HeapManager_Allocate(*v10, 8 * v29, 16, 0);
      }
      else {
        v30 = 0;
      }
      v31 = v30 + 8 * v29;
      v32 = (unsigned __int64)v21 - v24;
      v33 = (__int64)&v25[v30 + -8 * v26];
      *(_QWORD*)&v25[v30] = v8;
      v23 = (__int64)&v25[v30 + 8];
      memcpy(v33, v24, v32);
      *(_QWORD*)(v9 + 528) = v33;
      *(_QWORD*)(v9 + 536) = v23;
      *(_QWORD*)(v9 + 544) = v31;
      if (v24 != 0) {
        v34 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v34 = 56;
        }
        nn_mem_StandardAllocator_Free(*v10 + v34, v24);
      }
    }
    else {
      *v21 = v8;
      v23 = (__int64)(v21 + 1);
    }
    *(_QWORD*)(v9 + 536) = v23;
    v35 = *(__int64**)(v9 + 560);
    v36 = *(_QWORD*)(v9 + 568);
    if ((unsigned __int64)v35 < v36) {
      *v35 = v8;
      v37 = (__int64)(v35 + 1);
    LABEL_65:
      *(_QWORD*)(v9 + 560) = v37;
      GameRoutine_a8c0c0_alt1(v9);
      *(_BYTE*)(v9 + 576) = 1;
      nn_os_UnlockMutex((__int64)GameData_212df28);
      return v8;
    }
    v38 = *(_QWORD*)(v9 + 552);
    v39 = (char*)v35 - v38;
    v40 = ((__int64)v35 - v38) >> 3;
    v41 = v40 + 1;
    if ((unsigned __int64)(v40 + 1) >> 61 == 0) {
      v42 = v36 - v38;
      if (v42 >> 2 > v41) {
        v41 = v42 >> 2;
      }
      if ((unsigned __int64)v42 >= 0x7FFFFFFFFFFFFFF8LL) {
        v43 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v43 = v41;
      }
      if (v43 == 0) {
        v44 = 0;
      LABEL_61:
        v45 = v44 + 8 * v43;
        v46 = (unsigned __int64)v35 - v38;
        v47 = (__int64)&v39[v44 + -8 * v40];
        *(_QWORD*)&v39[v44] = v8;
        v37 = (__int64)&v39[v44 + 8];
        memcpy(v47, v38, v46);
        *(_QWORD*)(v9 + 552) = v47;
        *(_QWORD*)(v9 + 560) = v37;
        *(_QWORD*)(v9 + 568) = v45;
        if (v38 != 0) {
          v48 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v48, v38);
        }
        goto LABEL_65;
      }
      if (v43 >> 61 == 0) {
        v44 = fw_memory_HeapManager_Allocate(*v10, 8 * v43, 16, 0);
        goto LABEL_61;
      }
    LABEL_72:
      GameRoutine_60a210_alt1();
    }
  LABEL_71:
    GameRoutine_98f290_alt1();
  }
  return v8;
}

__int64 GameHr_112ea40(_BYTE* a1, _BYTE* a2)
{
  _BYTE* v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  char* v11;
  __int64 v12;
  char v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  unsigned __int64 v40;
  char* v41;

  if (a2 == nullptr || *a2 == 0) {
    return 0;
  }
  if (a1 == nullptr || *a1 != 80 || a1[1] != 73 || a1[2] != 68 || a1[3] != 95) {
    goto LABEL_71;
  }
  v2 = a2;
  v4 = GameRoutine_1a09c70(a1);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_100:
    GameRoutine_60a1d0(v4);
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)GameRoutine_651b90(GameData_2265ee0, v7, 16, 0);
    v40 = v5;
    v41 = v6;
    v39 = v7 | 1;
    goto LABEL_16;
  }
  LOBYTE(v39) = 2 * v4;
  v6 = (char*)&v39 + 1;
  if (v4 != 0) {
  LABEL_16:
    v4 = GameRoutine_1a0b950(v6, a1, v5);
  }
  v6[v5] = 0;
  v8 = v40;
  if ((v39 & 1) == 0) {
    v8 = (unsigned __int64)(unsigned __int8)v39 >> 1;
  }
  if (v8 <= 3) {
    GameRoutine_60a230(v4);
  }
  v9 = v8 - 4;
  if ((v39 & 1) != 0) {
    v10 = v41 + 4;
  }
  else {
    v10 = (char*)&v39 + 5;
  }
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_100;
  }
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)GameRoutine_651b90(GameData_2265ee0, v12, 16, 0);
    v37 = v9;
    v38 = v11;
    v36 = v12 | 1;
  }
  else {
    LOBYTE(v36) = 2 * v9;
    v11 = (char*)&v36 + 1;
    if (v8 == 4) {
      goto LABEL_32;
    }
  }
  GameRoutine_1a0b940(v11, v10, v9);
LABEL_32:
  v13 = v39;
  v11[v9] = 0;
  if ((v13 & 1) != 0 && v41 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v14 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v14, v41);
  }
  v39 = v36;
  v40 = v37;
  if ((v36 & 1) != 0) {
    v15 = v38;
  }
  else {
    v15 = (char*)&v39 + 1;
  }
  v41 = v38;
  GameRoutine_1a09bf0(&v36, "%s_%s", v2, v15);
  v16 = GameRoutine_7a86e0(&v36);
  v17 = 0;
  if (v16 == 0 || (v18 = *(_QWORD*)(GameData_21ca070 + 96)) == 0) {
    a2 = v2;
    if ((v39 & 1) == 0) {
      goto LABEL_70;
    }
  LABEL_66:
    if (v41 != nullptr) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v25 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v25, v41);
      a2 = v2;
    }
    goto LABEL_70;
  }
  a2 = v2;
  if (*(_QWORD*)(GameData_21ca070 + 112) == 0) {
  LABEL_65:
    if ((v39 & 1) == 0) {
      goto LABEL_70;
    }
    goto LABEL_66;
  }
  v19 = v18 - 1;
  if ((v18 & (v18 - 1)) != 0) {
    v20 = v16;
    if (v16 >= v18) {
      v20 = v16 % v18;
    }
  }
  else {
    v20 = v19 & v16;
  }
  v21 = *(_QWORD**)(*(_QWORD*)(GameData_21ca070 + 88) + 8 * v20);
  if (v21 == nullptr || (v22 = (_QWORD*)*v21) == nullptr) {
  LABEL_64:
    v17 = 0;
    goto LABEL_65;
  }
  if ((v18 & v19) == 0) {
    while (1) {
      v24 = v22[1];
      if (v24 == v16) {
        if (v22[2] == v16) {
          goto LABEL_98;
        }
      }
      else if ((v24 & v19) != v20) {
        goto LABEL_64;
      }
      v22 = (_QWORD*)*v22;
      v17 = 0;
      if (v22 == nullptr) {
        goto LABEL_65;
      }
    }
  }
  while (1) {
    v23 = v22[1];
    if (v23 == v16) {
      break;
    }
    if (v23 >= v18) {
      v23 %= v18;
    }
    if (v23 != v20) {
      goto LABEL_64;
    }
  LABEL_54:
    v22 = (_QWORD*)*v22;
    if (v22 == nullptr) {
      goto LABEL_64;
    }
  }
  if (v22[2] != v16) {
    goto LABEL_54;
  }
LABEL_98:
  v17 = v22[3];
  if ((v39 & 1) != 0) {
    goto LABEL_66;
  }
LABEL_70:
  if (v17 == 0) {
  LABEL_71:
    v26 = GameRoutine_7a86e0(a2);
    if (v26 != 0) {
      v27 = *(_QWORD*)(GameData_21ca070 + 96);
      if (v27 != 0 && *(_QWORD*)(GameData_21ca070 + 112) != 0) {
        v29 = v27 - 1;
        if ((v27 & (v27 - 1)) != 0) {
          v30 = v26;
          if (v26 >= v27) {
            v30 = v26 % v27;
          }
        }
        else {
          v30 = v29 & v26;
        }
        v31 = *(_QWORD**)(*(_QWORD*)(GameData_21ca070 + 88) + 8 * v30);
        if (v31 != nullptr) {
          v32 = (_QWORD*)*v31;
          if (v32 != nullptr) {
            if ((v27 & v29) == 0) {
              while (1) {
                v34 = v32[1];
                if (v34 == v26) {
                  if (v32[2] == v26) {
                    return v32[3];
                  }
                }
                else if ((v34 & v29) != v30) {
                  return 0;
                }
                v32 = (_QWORD*)*v32;
                v17 = 0;
                if (v32 == nullptr) {
                  return v17;
                }
              }
            }
            while (1) {
              v33 = v32[1];
              if (v33 == v26) {
                if (v32[2] == v26) {
                  return v32[3];
                }
              }
              else {
                if (v33 >= v27) {
                  v33 %= v27;
                }
                if (v33 != v30) {
                  return 0;
                }
              }
              v32 = (_QWORD*)*v32;
              v17 = 0;
              if (v32 == nullptr) {
                return v17;
              }
            }
          }
        }
      }
    }
    return 0;
  }
  return v17;
}

void GameHr_112f550(__int64* a1, __int64* a2)
{

#pragma clang fp contract(off)
  int v2;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  bool v19;
  bool v20;
  __int64 v21;
  __int64 i;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int128 v34;
  unsigned int v35;
  __int128 v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  __int64 v43;
  __int128 v44;
  struct {
    __int64 v45[32];
    char v46;
    char v47;
    char v48;
    char v49;
    char v50;
    char v51;
    char v52;
    char v53;
    char gap264_[12];
    char v54;
    char v55;
    char v56;
    char v57;
  } v45_;
  __int128 v58;
  __int128 v59;

  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (a2[2] == 0) {
    return;
  }
  v4 = a2[1];
  if (v4 == 0) {
    return;
  }
  v6 = std___1___shared_weak_count_lock(v4),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v6 == 0) {
    goto LABEL_11;
  }
  v7 = *a2;
  if (*a2 != 0) {
    v2 = *(unsigned __int8*)(v7 + 24);
    v8 = v7 + 152;
    if (v2 == 0) {
      v8 = 0;
    }
    v9 = v8 != a2[2];
  }
  else {
    v9 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v11 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    std___1___shared_weak_count___release_weak(v11),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v9) {
      goto LABEL_11;
    }
  LABEL_15:
    if ((v2 & 1) == 0) {
      return;
    }
    goto LABEL_16;
  }
  if (!v9) {
    goto LABEL_15;
  }
LABEL_11:
  v10 = a2[1];
  if (v10 == 0 || *(_QWORD*)(v10 + 8) == -1) {
    return;
  }
LABEL_16:
  if (*a1 != 0 && *(_BYTE*)(*a1 + 1041) == 1) {
    v12 = ui_LayoutAccessor_FindPane(a2, (__int64)"Face"),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v12 != 0) {
      v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v13 != 0) {
        v14 = v13;
        a1[5] = *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(v13) + 24) + 8LL),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(v14) + 24) +
                   8LL) = a1 + 2,
                   v23 = COERCE_AS(
                       __typeof__(v23),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        *(_BYTE*)(v14 + 88) |= 1u;
        a1[6] = (__int64)&GameData_1a9f09e;
        a1[7] = 0;
        a1[8] = (__int64)&GameData_1a9f09e;
        a1[9] = 0;
      }
    }
    v15 = a1[10];
    if (v15 != 0) {
      v16 = *a1;
      v17 = *(_BYTE*)(v15 + 48);
      v45_.v45[0] = 0;
      v45_.v45[1] = 0;
      GameRoutine_191bab0_alt1(v16, v17, v45_.v45),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v18 = *(_QWORD*)(a1[10] + 40);
      if (v18 != 0 && *(_BYTE*)v18 != 0 && strlen((const char*)v18) >= 3) {
        v19 = *(_WORD*)v18 == 12592 && *(_BYTE*)(v18 + 2) == 53;
        if (v19 || (*(_WORD*)v18 == 12592 ? (v20 = *(_BYTE*)(v18 + 2) == 54)
                                          : (v20 = false),
                    v20)) {
          v21 = game_GetHero(9u),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          if (v21 == 0) {
            goto LABEL_44;
          }
          for (i = v21; i != 0; i = *(_QWORD*)(i + 624)) {
            v23 = i;
          }
          if (*(_BYTE*)(v23 + 441) != 3) {
            goto LABEL_44;
          }
          v24 = *(_QWORD*)(v21 + 624);
          if (v24 == 0) {
            v24 = v21;
          }
          v45_.v45[0] = v24;
          LODWORD(v59) = 241;
          v25 = game_UnitPool_Find_6ead60(v45_.v45, (int*)&v59),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          if (v25 != nullptr) {
            v26 = (__int64)(v25 + 263);
            goto LABEL_45;
          }
          v27 = *(_QWORD*)(game_GameModeData_instance_ + 176);
          if (*(_BYTE*)(v27 + 144) != 0) {
            v26 = v27 + 112;
          }
          else {
          LABEL_44:
            v26 = GameData_212cf70[0];
          }
        LABEL_45:
          if (*(_BYTE*)(v26 + 32) != 0) {
            GameHr_179c320((__int64)v45_.v45, v26),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v32 = *a1;
            if (*a1 != 0) {
              LOBYTE(v28) = v45_.v46;
              LOBYTE(v29) = v45_.v47;
              LOBYTE(v30) = v45_.v54;
              LOBYTE(v31) = v45_.v55;
              v33 = *a1;
              *(float*)&v34 = (float)v28 / 0x1.fe00000000000p+7f;
              *(float*)&v35 = (float)v29 / 0x1.fe00000000000p+7f;
              *(float*)&v36 = (float)v30 / 0x1.fe00000000000p+7f;
              DWORD1(v34) = v35;
              LOBYTE(v35) = v45_.v48;
              *(float*)&v37 = (float)v35 / 0x1.fe00000000000p+7f;
              DWORD2(v34) = v37;
              LOBYTE(v37) = v45_.v49;
              *(float*)&v38 = (float)v37 / 0x1.fe00000000000p+7f;
              HIDWORD(v34) = v38;
              LOBYTE(v38) = v45_.v56;
              v59 = v34;
              *(float*)&v34 = (float)v31;
              LOBYTE(v31) = v45_.v57;
              *((float*)&v36 + 1) = *(float*)&v34 / 0x1.fe00000000000p+7f;
              *((_QWORD*)&v36 + 1) = __PAIR64__(
                  COERCE_UNSIGNED_INT((float)v31 / 0x1.fe00000000000p+7f),
                  COERCE_UNSIGNED_INT((float)v38 / 0x1.fe00000000000p+7f));
              v58 = v36;
              GameRoutine_1917400_alt1(v33, "_Skin", 5u, (__int64)&v59, 1, 1),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              GameRoutine_1917400_alt1(v32, "_Lip", 4u, (__int64)&v58, 1, 1),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v43 = *a1;
              if (*a1 != 0) {
                LOBYTE(v39) = v45_.v50;
                LOBYTE(v40) = v45_.v51;
                LOBYTE(v41) = v45_.v52;
                LOBYTE(v42) = v45_.v53;
                *(float*)&v44 = (float)v39 / 0x1.fe00000000000p+7f;
                *((float*)&v44 + 1) = (float)v40 / 0x1.fe00000000000p+7f;
                *((float*)&v44 + 2) = (float)v41 / 0x1.fe00000000000p+7f;
                *((float*)&v44 + 3) = (float)v42 / 0x1.fe00000000000p+7f;
                v59 = v44;
                GameRoutine_1917400_alt1(v43, "_Hair", 5u, (__int64)&v59, 1, 1),
                    v23 = COERCE_AS(
                        __typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              }
            }
            TrickEntity_7d1480((__int64)v45_.v45),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
        }
      }
    }
  }
}

__int64* GameHr_1138e00(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;

  v2 = a1[1] - *a1;
  v3 = 1 - 0x5555555555555555LL * (v2 >> 3);
  if (v3 > 0xAAAAAAAAAAAAAAALL) {
    GameRoutine_64aa00();
  }
  v6 = (_QWORD*)GameData_212bf68;
  if (0x5555555555555556LL * ((__int64)(a1[2] - *a1) >> 3) > v3) {
    v3 = 0x5555555555555556LL * ((__int64)(a1[2] - *a1) >> 3);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((__int64)(a1[2] - *a1) >> 3) >=
      0x555555555555555LL) {
    v7 = 0xAAAAAAAAAAAAAAALL;
  }
  else {
    v7 = v3;
  }
  if (v7 != 0) {
    if (v7 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_60a210(a1);
    }
    v8 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 24 * v7, 16, 0);
  }
  else {
    v8 = 0;
  }
  v9 = *a2;
  v10 = GameRoutine_1a09c70(*a2);
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v10);
  }
  v11 = (__int64*)(v8 + v2);
  v12 = v10;
  v13 = v8 + 24 * v7;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v10 | 7) + 1;
    }
    v14 = GameRoutine_651b90(*v6, v15, 16, 0);
    v11[1] = v12;
    v11[2] = v14;
    *v11 = v15 | 1;
    goto LABEL_19;
  }
  *(_BYTE*)v11 = 2 * v10;
  v14 = (__int64)v11 + 1;
  if (v10 != 0) {
  LABEL_19:
    GameRoutine_1a0b940(v14, v9, v12);
  }
  *(_BYTE*)(v14 + v12) = 0;
  v16 = *a1;
  v17 = a1[1] - *a1;
  v18 = (char*)v11 - v17;
  GameRoutine_1a0b950((char*)v11 - v17, *a1, v17);
  *a1 = v18;
  a1[1] = v11 + 3;
  a1[2] = v13;
  if (v16 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*v6 + 200LL) == 0) {
      v19 = 56;
    }
    GameRoutine_1a0a4e0(*v6 + v19, v16);
  }
  return v11 + 3;
}

__int64 GameHr_1151a60(__int64 a1)
{
  __int64 v2;
  __int64 result;
  int v4;
  __int64 v5;
  __int16 v6;
  __int64 v7;

  if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 176);
  }
  else {
    v2 = a1 + 161;
  }
  GameRoutine_1137a80(&v7, v2);
  result = GameRoutine_9d5dd0(&v7);
  if ((result & 1) != 0) {
    v4 = 0;
    v5 = *(_QWORD*)(a1 + 8);
    if (v5 != 0) {
      goto LABEL_11;
    }
  }
  else {
    v4 = 0xAAAAAAAAAAAAAAABLL *
             ((__int64)(*(_QWORD*)(a1 + 712) - *(_QWORD*)(a1 + 704)) >> 3) <=
         *(int*)(a1 + 728);
    v5 = *(_QWORD*)(a1 + 8);
    if (v5 != 0) {
      while (1) {
      LABEL_11:
        if (*(_BYTE*)v5 == 2) {
          if (*(_DWORD*)(v5 + 32) == v4) {
            v6 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v5;
            *(_WORD*)(a1 + 136) = v6 & 0xFF7F;
            return result;
          }
        }
        else if (*(_BYTE*)v5 == 0) {
          return result;
        }
        v5 += 64;
      }
    }
  }
  return result;
}

__int64 GameHr_1151b20(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if (GameData_21fa5e0 == 0) {
    v1 = result;
    if ((*(_BYTE*)(result + 160) & 1) != 0) {
      v2 = *(_QWORD*)(result + 176);
    }
    else {
      v2 = result + 161;
    }
    GameRoutine_1137a80(&v3, v2);
    return GameRoutine_9d57b0(v1, &v3);
  }
  return result;
}

__int64 GameHr_1151b80(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;

  if (GameData_21fa5e0 != 0 ||
      (v1 = *(_QWORD*)(result + 704), v2 = *(int*)(result + 728),
       0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(result + 712) - v1) >> 3) <= v2)) {
    v4 = *(unsigned __int8**)(result + 16);
    if (v4 != nullptr) {
      v5 = *v4;
      v6 = v5 > 0x10;
      v7 = (1 << v5) & 0x1CE00;
      if (!v6 && v7 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
  }
  else {
    if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) != 0) {
      *(_DWORD*)(GameData_21ee240 + 156) |= 2u;
      LODWORD(v2) = *(_DWORD*)(result + 728);
      v1 = *(_QWORD*)(result + 704);
    }
    v3 = result;
    result = GameRoutine_137e4c0(result, *(_QWORD*)(v1 + 24LL * (int)v2));
    ++*(_DWORD*)(v3 + 728);
  }
  return result;
}

__int64 GameHr_1151d00(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  bool v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;

  v1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 64LL);
  if (*(_QWORD*)(v1 + 96) != 0) {
    v2 = *(unsigned __int8*)(result + 152);
    v3 = (v2 & 1) == 0;
    v4 = v2 >> 1;
    if (v3) {
      v5 = result + 153;
    }
    else {
      v5 = *(_QWORD*)(result + 168);
    }
    if (v3) {
      v6 = v4;
    }
    else {
      v6 = *(_QWORD*)(result + 160);
    }
    return GameRoutine_c13be0(*(_QWORD*)(v1 + 96), v5, v6, *(_QWORD*)(v1 + 152),
                              1);
  }
  return result;
}

__int64 GameHr_1151d50(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 208);
  if (v1 == 0) {
    GameRoutine_60a310((unsigned __int8)v1);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1);
}

void GameHr_1151f30(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  const char* v13;
  const char* v14;
  const char* v15;
  const char* v16;
  _QWORD v17[3];
  struct {
    __int64 v18[3];
    __int64 v19;
    char gap56_[40];
    __int64 v20;
    char gap104_[8];
    char v21;
    char gap113_[7];
    char v22;
    char gap121_[7];
    int v23;
    char gap132_[4];
    __int16 v24;
    char gap138_[22];
    __int16 v25;
    char gap162_[22];
    __int16 v26;
    char gap186_[22];
    __int64 v27;
    __int64 v28;
  } v18_;
  _WORD v29[24];
  _WORD v30[24];

  LOWORD(v17[0]) = 0;
  LOWORD(v18_.v18[0]) = 0;
  v18_.v19 = 0;
  v18_.v20 = 0;
  v18_.v21 = 0;
  v18_.v22 = 0;
  v18_.v23 = 0;
  v18_.v24 = 0;
  v18_.v25 = 0;
  v3 = *(_QWORD*)GameData_212c540;
  v2 = *((_QWORD*)GameData_212c540 + 1);
  v18_.v26 = 0;
  v29[0] = 0;
  v29[12] = 0;
  v30[0] = 0;
  v30[12] = 0;
  v18_.v27 = v3;
  v18_.v28 = v2;
  if ((*(_BYTE*)(a1 + 184) & 1) == 0) {
    v4 = *(_QWORD*)(a1 + 192);
    v5 = *(_QWORD*)(a1 + 200);
    v17[0] = *(_QWORD*)(a1 + 184);
    v17[1] = v4;
    v17[2] = v5;
    v6 = (__int64*)(a1 + 208);
    if ((*(_BYTE*)(a1 + 208) & 1) == 0) {
    LABEL_3:
      v7 = *v6;
      v8 = v6[1];
      v9 = v6[2];
      v18_.v18[0] = v7;
      v18_.v18[1] = v8;
      v18_.v18[2] = v9;
      goto LABEL_14;
    }
    goto LABEL_6;
  }
  GameRoutine_64df20_alt1(v17, *(_QWORD*)(a1 + 200), *(_QWORD*)(a1 + 192));
  v6 = (__int64*)(a1 + 208);
  v10 = *(unsigned __int8*)(a1 + 208);
  if ((v18_.v18[0] & 1) == 0) {
    if ((v10 & 1) == 0) {
      goto LABEL_3;
    }
  LABEL_6:
    GameRoutine_64df20_alt1(v18_.v18, *(_QWORD*)(a1 + 224),
                            *(_QWORD*)(a1 + 216));
    goto LABEL_14;
  }
  if ((v10 & 1) != 0) {
    v11 = *(_QWORD*)(a1 + 224);
  }
  else {
    v11 = a1 + 209;
  }
  if ((v10 & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 216);
  }
  else {
    v12 = v10 >> 1;
  }
  SpineModel_64dde0(v18_.v18, v11, v12);
LABEL_14:
  v13 = *(const char**)(a1 + 248);
  LODWORD(v18_.v19) = 4;
  if ((*(_BYTE*)(a1 + 232) & 1) != 0) {
    v14 = v13;
  }
  else {
    v14 = (const char*)(a1 + 233);
  }
  GameRoutine_60a020_alt1((__int64)v29, v14);
  v15 = *(const char**)(a1 + 176);
  HIDWORD(v18_.v19) = *(unsigned __int8*)(a1 + 152);
  if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
    v16 = v15;
  }
  else {
    v16 = (const char*)(a1 + 161);
  }
  GameRoutine_60a020_alt1((__int64)v30, v16);
  GameRoutine_a85120_alt1(*(_QWORD*)GameData_212c638, (unsigned __int8*)v17);
  GameRoutine_a853b0_alt1((__int64)v17);
}

__int64 GameHr_11520a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int8* v8;
  unsigned int v9;
  bool v10;
  int v11;

  v2 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
  if (*(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL) == v2) {
    v3 = 0;
    result = GameRoutine_ecb40();
    if ((result & 1) == 0) {
      return result;
    }
  }
  else {
    v3 = *(_QWORD*)(v2 - 8);
    result = GameRoutine_ecb40();
    if ((result & 1) == 0) {
      return result;
    }
  }
  v5 = *(_QWORD*)(v3 + 64);
  if (v5 != 0) {
    v6 = *(_QWORD*)(v5 + 96);
    if (v6 == 0 || *(_DWORD*)(v6 + 240) != 5) {
      return result;
    }
    v7 = (_QWORD*)(v5 + 120);
    while (1) {
      v7 = (_QWORD*)*v7;
      if (v7 == nullptr) {
        break;
      }
      if (*(_DWORD*)(v7[5] + 240LL) != 5) {
        return result;
      }
    }
  }
  v8 = *(unsigned __int8**)(a1 + 16);
  if (v8 != nullptr) {
    v9 = *v8;
    v10 = v9 > 0x10;
    v11 = (1 << v9) & 0x1CE00;
    if (!v10 && v11 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  return result;
}

__int64 GameHr_1152170(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 288);
  if (v1 == 0) {
    GameRoutine_60a310((unsigned __int8)v1);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1);
}

__int64 GameHr_1153e20(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD v20[2];
  char* v21;

  v1 = GameData_225d648;
  if (GameData_225d648 == 0) {
    return v1;
  }
  v3 = GameData_212bf68;
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 40, 16, 0);
  *(_BYTE*)(v4 + 32) = 0;
  v20[0] = 41;
  v20[1] = 32;
  v21 = (char*)v4;
  *(_QWORD*)v4 = 0xBCE4B48FE6AF94E6LL;
  *(_QWORD*)(v4 + 8) = 0xA482E35FB1A9E89ALL;
  *(_QWORD*)(v4 + 16) = 0x83E3A583E3B782E3LL;
  *(_QWORD*)(v4 + 24) = 0x5FAB83E3BC83E39ELL;
  v5 = *(_QWORD*)(v1 + 8);
  if (v5 != 0) {
    v6 = GameRoutine_1a0a690(v5, 95);
    if (v6 != 0) {
      v5 = v6 + 1;
    }
  }
  v7 = GameRoutine_1a09c70(v5);
  GameRoutine_1a09ce0(v20, v5, v7);
  GameRoutine_1a09ce0(v20, &GameData_1a8a68f, 2);
  if ((v20[0] & 1) != 0) {
    v8 = v21;
  }
  else {
    v8 = (char*)v20 + 1;
  }
  v9 = GameRoutine_7a86e0(v8);
  if (v9 == 0) {
    goto LABEL_35;
  }
  v10 = *(_QWORD*)(GameData_21c9fe8 + 96);
  if (v10 == 0 || *(_QWORD*)(GameData_21c9fe8 + 112) == 0) {
    goto LABEL_35;
  }
  v12 = v10 - 1;
  if ((v10 & (v10 - 1)) != 0) {
    v13 = v9;
    if (v9 >= v10) {
      v13 = v9 % v10;
    }
  }
  else {
    v13 = v12 & v9;
  }
  v14 = *(_QWORD**)(*(_QWORD*)(GameData_21c9fe8 + 88) + 8 * v13);
  if (v14 == nullptr) {
    goto LABEL_35;
  }
  v15 = (_QWORD*)*v14;
  if (v15 == nullptr) {
    goto LABEL_35;
  }
  if ((v10 & v12) == 0) {
    while (1) {
      v17 = v15[1];
      if (v17 == v9) {
        if (v15[2] == v9) {
          goto LABEL_33;
        }
      }
      else if ((v17 & v12) != v13) {
        goto LABEL_35;
      }
      v15 = (_QWORD*)*v15;
      v1 = 0;
      if (v15 == nullptr) {
        goto LABEL_36;
      }
    }
  }
  while (1) {
    v16 = v15[1];
    if (v16 == v9) {
      break;
    }
    if (v16 >= v10) {
      v16 %= v10;
    }
    if (v16 != v13) {
      goto LABEL_35;
    }
  LABEL_22:
    v15 = (_QWORD*)*v15;
    if (v15 == nullptr) {
      goto LABEL_35;
    }
  }
  if (v15[2] != v9) {
    goto LABEL_22;
  }
LABEL_33:
  if (v15[3] != 0) {
    v1 = GameRoutine_8c7910(a1);
    goto LABEL_36;
  }
LABEL_35:
  v1 = 0;
LABEL_36:
  if ((v20[0] & 1) != 0 && v21 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v18 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v3 + v18, v21);
  }
  return v1;
}

bool GameHr_1154040(__int64 a1, _DWORD* a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  _BOOL4 v7;
  __int64 v8;
  unsigned __int64 v9;
  char* v10;
  unsigned __int64 v11;
  int v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  int v17;
  unsigned __int64 v18;
  int v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;

  if (a1 == 0) {
    return false;
  }
  v4 = GameRoutine_1a09c70(a1);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_44;
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v4 | 7) + 1;
    }
    v6 = (char*)GameRoutine_651b90(GameData_2265ee0, v8, 16, 0);
    v28 = v5;
    v29 = v6;
    v27 = v8 | 1;
  }
  else {
    LOBYTE(v27) = 2 * v4;
    v6 = (char*)&v27 + 1;
    if (v4 == 0) {
      goto LABEL_12;
    }
  }
  v4 = GameRoutine_1a0b950(v6, a1, v5);
LABEL_12:
  v6[v5] = 0;
  v9 = (unsigned __int64)(unsigned __int8)v27 >> 1;
  if ((v27 & 1) != 0) {
    v9 = v28;
    v10 = v29;
  }
  else {
    v10 = (char*)&v27 + 1;
  }
  v11 = v9;
  while (v11 != 0) {
    v12 = (unsigned __int8)v10[--v11];
    if (v12 == 95) {
      v13 = v11 + 1;
      v14 = v9 - (v11 + 1);
      if (v9 <= v11 + 1) {
        goto LABEL_19;
      }
    LABEL_22:
      if (v14 < 0xFFFFFFFFFFFFFFF7LL) {
        if (v14 >= 0x17) {
          if ((v14 | 7) == 0x17) {
            v16 = 26;
          }
          else {
            v16 = (v14 | 7) + 1;
          }
          v15 = (char*)GameRoutine_651b90(GameData_2265ee0, v16, 16, 0);
          v25 = v14;
          v26 = v15;
          v24 = v16 | 1;
        }
        else {
          LOBYTE(v24) = 2 * v14;
          v15 = (char*)&v24 + 1;
        }
        GameRoutine_1a0b940(v15, &v10[v13], v14);
        v15[v14] = 0;
        v17 = v24 & 1;
        v18 = (unsigned __int64)(unsigned __int8)v24 >> 1;
        if (v17 != 0) {
          v18 = v25;
        }
        v7 = v18 == 4;
        if (v18 == 4) {
          v19 = GameRoutine_1a0ad30(&v24, 0, 10);
          v20 = v24;
          *a2 = v19;
          v17 = v20 & 1;
        }
        if (v17 != 0 && v26 != nullptr) {
          v21 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v21 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v21, v26);
        }
        if ((v27 & 1) != 0) {
          goto LABEL_39;
        }
        return v7;
      }
    LABEL_44:
      GameRoutine_60a1d0(v4);
    }
  }
  v13 = 0;
  v14 = v9;
  if (v9 != 0) {
    goto LABEL_22;
  }
LABEL_19:
  v7 = false;
  if ((v27 & 1) != 0) {
  LABEL_39:
    if (v29 != nullptr) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v22 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v22, v29);
    }
  }
  return v7;
}

__int64 GameHr_11547a0(double a1)
{
  if (GameData_21ec7b8 != 0) {
    GameRoutine_113d7d0(GameData_21ec7b8 + 216, a1);
  }
  return 0;
}

__int64 GameHr_1154ff0(__int64 a1, long double a2)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
  int* v8;
  int v9;
  int v10;
  char v12;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3) {
    v2 = *(_DWORD*)(GameData_21ee240 + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return 0;
    }
  }
  if (GameData_22336e0 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 120);
  v5 = *(_QWORD*)(v4 + 8);
  if ((*(_BYTE*)v4 & 1) == 0) {
    v5 = *(_BYTE*)v4 >> 1;
  }
  if (v5 == 5) {
    if ((*(_BYTE*)v4 & 1) != 0) {
      v8 = *(int**)(v4 + 16);
    }
    else {
      v8 = (int*)(v4 + 1);
    }
    v9 = *v8;
    v10 = *((unsigned __int8*)v8 + 4);
    if (v9 != *(_DWORD*)"False" ||
        v10 != (unsigned __int8)GameData_1ad767c[4]) {
      return 0;
    }
    v12 = 0;
  }
  else {
    if (v5 != 4) {
      return 0;
    }
    v6 = (*(_BYTE*)v4 & 1) != 0 ? *(_DWORD**)(v4 + 16) : (_DWORD*)(v4 + 1);
    if (*v6 != *(_DWORD*)"True") {
      return 0;
    }
    v12 = 1;
  }
  GameRoutine_114d0d0(GameData_22336e0, v12, a2);
  return 0;
}

__int64 GameHr_1155520(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  int v4;
  long double v5;
  int v6;
  __int64 result;
  unsigned __int64 v8;
  __int128 v9;
  __int64 v10;
  __int64 v11;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3) {
    v3 = *(_DWORD*)(GameData_21ee240 + 156);
    v4 = (v3 & 8) != 0 ? 2 : 3;
    if ((v4 & v3) == 0) {
      return 0;
    }
  }
  v10 = v1;
  v11 = v2;
  v5 = *(long double*)GameData_212c960;
  v6 = *(_DWORD*)(a1 + 144);
  result = GameData_21ec550;
  v9 = *(_OWORD*)GameData_212c960;
  if (v6 != 0) {
    if (GameData_21ec550 != 0) {
      v8 = GameData_21ec550 +
           ((unsigned __int64)*(unsigned __int8*)(GameData_21ec550 + 480) << 6);
      if (*(float*)(v8 + 172) == *(float*)(v8 + 168)) {
        return 0;
      }
      else {
        return 3;
      }
    }
  }
  else {
    if (GameData_21ec550 != 0) {
      LODWORD(v5) = 4.0;
      GameRoutine_809dc0(GameData_21ec550, &v9, v5);
    }
    return 3;
  }
  return result;
}

__int64 GameHr_11555e0(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 16);
  }
  else {
    v1 = a1 + 1;
  }
  v2 = GameRoutine_7a86e0(v1);
  if (v2 != 0) {
    v3 = *(_QWORD*)(GameData_21c9d80 + 96);
    if (v3 != 0 && *(_QWORD*)(GameData_21c9d80 + 112) != 0) {
      v5 = v3 - 1;
      if ((v3 & (v3 - 1)) != 0) {
        v6 = v2;
        if (v2 >= v3) {
          v6 = v2 % v3;
        }
      }
      else {
        v6 = v5 & v2;
      }
      v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d80 + 88) + 8 * v6);
      if (v7 != nullptr) {
        v8 = (_QWORD*)*v7;
        if (v8 != nullptr) {
          if ((v3 & v5) == 0) {
            while (1) {
              v11 = v8[1];
              if (v11 == v2) {
                if (v8[2] == v2) {
                  return v8[3];
                }
              }
              else if ((v11 & v5) != v6) {
                return 0;
              }
              v8 = (_QWORD*)*v8;
              v10 = 0;
              if (v8 == nullptr) {
                return v10;
              }
            }
          }
          do {
            v9 = v8[1];
            if (v9 == v2) {
              if (v8[2] == v2) {
                return v8[3];
              }
            }
            else {
              if (v9 >= v3) {
                v9 %= v3;
              }
              if (v9 != v6) {
                return 0;
              }
            }
            v8 = (_QWORD*)*v8;
          } while (v8 != nullptr);
        }
      }
    }
  }
  return 0;
}

__int64* GameHr_11571c0(__int64 a1, unsigned __int8* a2, unsigned __int8* a3,
                        char a4, float a5, float a6)
{

#pragma clang fp contract(off)
  __int64* result;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  double v19;
  __int64 v20;
  float v21;
  char v22;
  __int64* v23;
  __int64 v24;
  int v25;
  int v26;
  char v27;
  unsigned __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  struct {
    __int64 v33[2];
    __int64 v34;
    __int64 v35;
    _BYTE v36[13];
  } v33_;
  struct {
    _BYTE v37[32];
    _BYTE* v38;
  } v37_;
  struct {
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    _BYTE v43[13];
  } v39_;

  if (GameData_22336e0 == 0) {
    return nullptr;
  }
  result = GameRoutine_1152360_alt1((_QWORD*)(GameData_22336e0 + 560),
                                    (unsigned __int8*)a1);
  if (result == nullptr) {
    return result;
  }
  v13 = result[5];
  if (v13 == 0 || *(_QWORD*)(v13 + 136) == 0 || GameData_22336e0 == 0) {
    return nullptr;
  }
  v14 = GameRoutine_1152360_alt1((_QWORD*)(GameData_22336e0 + 560), a2);
  if (v14 == nullptr || (v15 = v14[5]) == 0 || *(_QWORD*)(v15 + 136) == 0) {
    if (GameData_22336e0 == 0) {
      return nullptr;
    }
    result = GameRoutine_1152360_alt1((_QWORD*)(GameData_22336e0 + 560), a3);
    if (result == nullptr) {
      return result;
    }
    v16 = result[5];
    if (v16 == 0 || *(_QWORD*)(v16 + 136) == 0) {
      return nullptr;
    }
  }
  if (GameData_22336e0 == 0) {
    return nullptr;
  }
  result = GameRoutine_1152360_alt1((_QWORD*)(GameData_22336e0 + 560),
                                    (unsigned __int8*)a1);
  if (result == nullptr) {
    return result;
  }
  v17 = result[5];
  if (v17 == 0 || *(_BYTE*)(v17 + 128) != 1) {
    return nullptr;
  }
  if (*(_BYTE*)(v17 + 129) != 1) {
    return (_QWORD*)(((_UNKNOWN*)0x0LL) + 3);
  }
  if (GameData_22336e0 != 0) {
    v18 = GameRoutine_1152360_alt1((_QWORD*)(GameData_22336e0 + 560), a2);
    v20 = v18 != nullptr ? v18[5] : 0LL;
    v21 = a6;
    *(float*)&v19 = a5;
    v22 = a4;
    if (GameData_22336e0 != 0) {
      v23 = GameRoutine_1152360_alt1((_QWORD*)(GameData_22336e0 + 560), a3);
      v24 = v23 != nullptr ? v23[5] : 0LL;
      v21 = a6;
      *(float*)&v19 = a5;
      v22 = a4;
    }
    else {
      v24 = 0;
    }
    v25 = v20 != 0 ? *(unsigned __int8*)(v20 + 128) : 0;
    v26 = v24 != 0 ? *(unsigned __int8*)(v24 + 128) : 0;
    if (((v25 | v26) & 1) != 0) {
      if (((v25 & 1) == 0 || *(_BYTE*)(v20 + 129) == 1) &&
          ((v26 & 1) == 0 || *(_BYTE*)(v24 + 129) == 1)) {
        if (v21 <= 0x0.0p+0f) {
          if ((v22 & 1) != 0) {
            GameRoutine_11c46e0_alt1(v20);
            *(float*)&v19 = a5;
          }
          GameRoutine_11c4a00_alt1(v17, v20, v19);
          return nullptr;
        }
        v27 = v22 & 1;
        if ((*(_BYTE*)a1 & 1) != 0) {
          fw_text_String_CopyTerminated(&v39_.v39, *(_QWORD*)(a1 + 16),
                                        *(_QWORD*)(a1 + 8));
        }
        else {
          v28 = *(_QWORD*)(a1 + 8);
          v39_.v39 = *(_QWORD*)a1;
          v39_.v40 = v28;
          v39_.v41 = *(_QWORD*)(a1 + 16);
        }
        v39_.v42 = v20;
        *(_QWORD*)v39_.v43 = v24;
        *(float*)&v39_.v43[8] = a5;
        v39_.v43[12] = v27;
        if ((v39_.v39 & 1) != 0) {
          fw_text_String_CopyTerminated(v33_.v33, v39_.v41, v39_.v40);
        }
        else {
          v33_.v33[0] = v39_.v39;
          v33_.v33[1] = v39_.v40;
          v33_.v34 = v39_.v41;
        }
        v33_.v35 = v39_.v42;
        *(_QWORD*)v33_.v36 = *(_QWORD*)v39_.v43;
        *(_QWORD*)&v33_.v36[5] = *(_QWORD*)&v39_.v43[5];
        GameRoutine_1157500_alt1((__int64)v37_.v37, v33_.v33);
        v29 = (_QWORD*)EveryFrameProc_10aa5e0(
            *(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 144LL,
            (__int64)v37_.v37, a6);
        GameHr_10aa000(v17, v29);
        if (v37_.v38 == v37_.v37) {
          v30 = 32;
        }
        else {
          if (v37_.v38 == nullptr) {
            goto LABEL_55;
          }
          v30 = 40;
        }
        (*(void (**)(__int64))(*(_QWORD*)v37_.v38 + v30))((__int64)v37_.v38);
      LABEL_55:
        if ((v33_.v33[0] & 1) != 0 && v33_.v34 != 0) {
          v31 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v33_.v34);
        }
        if ((v39_.v39 & 1) != 0 && v39_.v41 != 0) {
          v32 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v39_.v41);
        }
        return nullptr;
      }
      return (_QWORD*)(((_UNKNOWN*)0x0LL) + 3);
    }
  }
  return nullptr;
}

_QWORD* GameHr_1157500(__int64 a1, _QWORD* a2)
{
  _QWORD* v4;
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)(a1 + 32) = 0;
  v4 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 56, 16, 0);
  *v4 = GameData_20135a0;
  result = v4 + 1;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)GameRoutine_60a270(result, a2[2], a2[1]);
  }
  else {
    v6 = a2[1];
    *result = *a2;
    v4[2] = v6;
    v4[3] = a2[2];
  }
  v7 = a2[4];
  v4[4] = a2[3];
  v4[5] = v7;
  v8 = *(_QWORD*)((char*)a2 + 37);
  *(_QWORD*)(a1 + 32) = v4;
  *(_QWORD*)((char*)v4 + 45) = v8;
  return result;
}

__int64 GameHr_1159ac0(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 16);
  }
  else {
    v1 = a1 + 1;
  }
  v2 = GameRoutine_7a86e0(v1);
  if (v2 != 0) {
    v3 = *(_QWORD*)(GameData_21c9d88 + 96);
    if (v3 != 0 && *(_QWORD*)(GameData_21c9d88 + 112) != 0) {
      v5 = v3 - 1;
      if ((v3 & (v3 - 1)) != 0) {
        v6 = v2;
        if (v2 >= v3) {
          v6 = v2 % v3;
        }
      }
      else {
        v6 = v5 & v2;
      }
      v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d88 + 88) + 8 * v6);
      if (v7 != nullptr) {
        v8 = (_QWORD*)*v7;
        if (v8 != nullptr) {
          if ((v3 & v5) == 0) {
            while (1) {
              v11 = v8[1];
              if (v11 == v2) {
                if (v8[2] == v2) {
                  return v8[3];
                }
              }
              else if ((v11 & v5) != v6) {
                return 0;
              }
              v8 = (_QWORD*)*v8;
              v10 = 0;
              if (v8 == nullptr) {
                return v10;
              }
            }
          }
          do {
            v9 = v8[1];
            if (v9 == v2) {
              if (v8[2] == v2) {
                return v8[3];
              }
            }
            else {
              if (v9 >= v3) {
                v9 %= v3;
              }
              if (v9 != v6) {
                return 0;
              }
            }
            v8 = (_QWORD*)*v8;
          } while (v8 != nullptr);
        }
      }
    }
  }
  return 0;
}

__int64 GameHr_1159be0(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 16);
  }
  else {
    v1 = a1 + 1;
  }
  v2 = GameRoutine_7a86e0(v1);
  if (v2 != 0) {
    v3 = *(_QWORD*)(GameData_21c9d90 + 96);
    if (v3 != 0 && *(_QWORD*)(GameData_21c9d90 + 112) != 0) {
      v5 = v3 - 1;
      if ((v3 & (v3 - 1)) != 0) {
        v6 = v2;
        if (v2 >= v3) {
          v6 = v2 % v3;
        }
      }
      else {
        v6 = v5 & v2;
      }
      v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d90 + 88) + 8 * v6);
      if (v7 != nullptr) {
        v8 = (_QWORD*)*v7;
        if (v8 != nullptr) {
          if ((v3 & v5) == 0) {
            while (1) {
              v11 = v8[1];
              if (v11 == v2) {
                if (v8[2] == v2) {
                  return v8[3];
                }
              }
              else if ((v11 & v5) != v6) {
                return 0;
              }
              v8 = (_QWORD*)*v8;
              v10 = 0;
              if (v8 == nullptr) {
                return v10;
              }
            }
          }
          do {
            v9 = v8[1];
            if (v9 == v2) {
              if (v8[2] == v2) {
                return v8[3];
              }
            }
            else {
              if (v9 >= v3) {
                v9 %= v3;
              }
              if (v9 != v6) {
                return 0;
              }
            }
            v8 = (_QWORD*)*v8;
          } while (v8 != nullptr);
        }
      }
    }
  }
  return 0;
}

__int64 GameHr_1159cf0(__int64 a1, __int64 a2, unsigned __int8* a3)
{
  __int64 result;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;

  result = GameRoutine_1159ac0(a1);
  if (result != 0) {
    v6 = *a3;
    v7 = result;
    if ((v6 & 1) != 0) {
      v8 = *((_QWORD*)a3 + 1);
    }
    else {
      v8 = v6 >> 1;
    }
    if (v8 != 0) {
      GameRoutine_1159be0((__int64)a3);
    }
    if (GameData_22336e0 == 0) {
      return 0;
    }
    result = GameRoutine_1152360(GameData_22336e0 + 560, a2);
    if (result == 0) {
      return result;
    }
    v9 = *(_QWORD*)(result + 40);
    if (v9 == 0 || *(_QWORD*)(v9 + 136) == 0 || GameData_22336e0 == 0) {
      return 0;
    }
    result = GameRoutine_1152360(GameData_22336e0 + 560, a2);
    if (result == 0) {
      return result;
    }
    v10 = *(_QWORD*)(result + 40);
    if (v10 == 0 || *(_BYTE*)(v10 + 128) != 1) {
      return 0;
    }
    if (*(_BYTE*)(v10 + 129) != 1) {
      return 3;
    }
    result = *(_QWORD*)(GameData_22336e0 + 600);
    if (result != 0) {
      GameRoutine_11c72e0(result, v7);
      return 0;
    }
  }
  return result;
}

__int64 GameHr_115a980()
{
  int v0;
  int v1;

  if (GameData_21ec7b8 != 0 && (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) != 0 ||
      GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
      (((v0 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v1 = 2)
                                                            : (v1 = 3),
       (v1 & v0) != 0)) {
    *(_BYTE*)(*(_QWORD*)(GameData_22336e0 + 600) + 200LL) = 0;
  }
  return 0;
}

__int64 GameHr_115c9a0()
{
  int v0;
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;

  if (GameData_21ec7b8 != 0 && (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) != 0 ||
      GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
      (((v0 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v1 = 2)
                                                            : (v1 = 3),
       (v1 & v0) != 0)) {
    v2 = *(_QWORD*)(GameData_21a60d8 + 13224);
    v3 = *(_QWORD*)(v2 + 48);
    v4 = *(_QWORD*)(v2 + 56);
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      v5 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 280LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        GameRoutine_1a09c50(v4);
      }
    }
    else {
      v5 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 280LL);
    }
    v6 = *(__int64**)(v5 + 32);
    v7 = *(__int64**)(v5 + 40);
    while (v6 != v7) {
      v8 = *v6++;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8);
    }
    *(_WORD*)(v5 + 89) = 257;
  }
  return 0;
}

__int64 GameHr_115caa0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v0 = *(_QWORD*)(GameData_21a60d8 + 13224);
  v1 = *(_QWORD*)(v0 + 48);
  v2 = *(_QWORD*)(v0 + 56);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    v3 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 280LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      GameRoutine_1a09c50(v2);
    }
  }
  else {
    v3 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 280LL);
  }
  if (*(_BYTE*)(v3 + 90) == 1) {
    *(_BYTE*)(v3 + 90) = 0;
  }
  return 0;
}

__int64 GameHr_115cce0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v0 = *(_QWORD*)(GameData_21a60d8 + 13224);
  v2 = *(_QWORD*)(v0 + 48);
  v1 = *(_QWORD*)(v0 + 56);
  if (v1 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      GameRoutine_1a09c50(v1);
    }
    v3 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 304LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      GameRoutine_1a09c50(v1);
    }
  }
  else {
    v3 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 304LL);
  }
  *(_DWORD*)(v3 + 172) = 0;
  *(_BYTE*)(v3 + 176) = 1;
  return 0;
}

__int64 GameHr_115cf70()
{
  int v0;
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;

  if (GameData_21ec7b8 != 0 && (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) != 0 ||
      GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
      (((v0 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v1 = 2)
                                                            : (v1 = 3),
       (v1 & v0) != 0)) {
    v2 = *(_QWORD*)(GameData_21a60d8 + 13224);
    v4 = *(_QWORD*)(v2 + 48);
    v3 = *(_QWORD*)(v2 + 56);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        GameRoutine_1a09c50(v3);
      }
      v5 = *(_BYTE**)(*(_QWORD*)(v4 + 8) + 224LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        GameRoutine_1a09c50(v3);
      }
    }
    else {
      v5 = *(_BYTE**)(*(_QWORD*)(v4 + 8) + 224LL);
    }
    if (v5[96] == 1) {
      v5[96] = 0;
    }
    if (v5[176] == 1) {
      v5[176] = 0;
    }
    if (v5[386] == 1) {
      v5[386] = 0;
    }
    if (v5[464] == 1) {
      v5[464] = 0;
    }
    if (v5[544] == 1) {
      v5[544] = 0;
    }
  }
  return 0;
}

__int64 GameHr_115d220()
{
  int v0;
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if (GameData_21ec7b8 != 0 && (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) != 0 ||
      GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
      (((v0 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v1 = 2)
                                                            : (v1 = 3),
       (v1 & v0) != 0)) {
    v2 = *(_QWORD*)(GameData_21a60d8 + 13224);
    v4 = *(_QWORD*)(v2 + 48);
    v3 = *(_QWORD*)(v2 + 56);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        GameRoutine_1a09c50(v3);
      }
      v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 136LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        GameRoutine_1a09c50(v3);
      }
    }
    else {
      v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 136LL);
    }
    if (*(_BYTE*)(v5 + 176) == 1) {
      *(_BYTE*)(v5 + 176) = 0;
    }
    if (*(_BYTE*)(v5 + 96) == 1) {
      *(_BYTE*)(v5 + 96) = 0;
    }
  }
  return 0;
}

__int64 GameHr_115d9c0()
{
  int v0;
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;

  if (GameData_21ec7b8 != 0 && (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) != 0 ||
      GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
      (((v0 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v1 = 2)
                                                            : (v1 = 3),
       (v1 & v0) != 0)) {
    v2 = GameData_22336e0;
    v3 = *(_QWORD*)(GameData_21a60d8 + 13224);
    v5 = *(_QWORD*)(v3 + 48);
    v4 = *(_QWORD*)(v3 + 56);
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        GameRoutine_1a09c50(v4);
      }
      v6 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 192LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        GameRoutine_1a09c50(v4);
      }
    }
    else {
      v6 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 192LL);
    }
    if (*(_BYTE*)(v6 + 90) == 1) {
      *(_WORD*)(v6 + 89) = 256;
    }
    v7 = *(__int64**)(v6 + 32);
    v8 = *(__int64**)(v6 + 40);
    while (v7 != v8) {
      v9 = *v7++;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 72LL))(v9);
    }
    *(_QWORD*)(v2 + 696) = 3212836864LL;
  }
  return 0;
}

__int64 GameHr_115dce0()
{
  int v0;
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;

  if (GameData_21ec7b8 != 0 && (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) != 0 ||
      GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
      (((v0 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v1 = 2)
                                                            : (v1 = 3),
       (v1 & v0) != 0)) {
    v2 = *(_QWORD*)(GameData_21a60d8 + 13224);
    v4 = *(_QWORD*)(v2 + 48);
    v3 = *(_QWORD*)(v2 + 56);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        GameRoutine_1a09c50(v3);
      }
      v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 96LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        GameRoutine_1a09c50(v3);
      }
    }
    else {
      v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 96LL);
    }
    v6 = *(__int64**)(v5 + 32);
    v7 = *(__int64**)(v5 + 40);
    while (v6 != v7) {
      v8 = *v6++;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8);
    }
  }
  return 0;
}

__int64 GameHr_115e280()
{
  int v0;
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;

  if (GameData_21ec7b8 != 0 && (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) != 0 ||
      GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
      (((v0 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v1 = 2)
                                                            : (v1 = 3),
       (v1 & v0) != 0)) {
    v2 = *(_QWORD*)(GameData_21a60d8 + 13224);
    v4 = *(_QWORD*)(v2 + 48);
    v3 = *(_QWORD*)(v2 + 56);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        GameRoutine_1a09c50(v3);
      }
      v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 104LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        GameRoutine_1a09c50(v3);
      }
    }
    else {
      v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 104LL);
    }
    if (*(_BYTE*)(v5 + 90) == 1) {
      *(_WORD*)(v5 + 89) = 256;
    }
    v6 = *(__int64**)(v5 + 32);
    v7 = *(__int64**)(v5 + 40);
    while (v6 != v7) {
      v8 = *v6++;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8);
    }
  }
  return 0;
}

__int64 GameHr_115e9c0()
{
  int v0;
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;

  if (GameData_21ec7b8 != 0 && (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) != 0 ||
      GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
      (((v0 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v1 = 2)
                                                            : (v1 = 3),
       (v1 & v0) != 0)) {
    v2 = *(_QWORD*)(GameData_21a60d8 + 13224);
    v4 = *(_QWORD*)(v2 + 48);
    v3 = *(_QWORD*)(v2 + 56);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        GameRoutine_1a09c50(v3);
      }
      v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 184LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        GameRoutine_1a09c50(v3);
      }
    }
    else {
      v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 184LL);
    }
    if (*(_BYTE*)(v5 + 90) == 1) {
      *(_WORD*)(v5 + 89) = 256;
    }
    v6 = *(__int64**)(v5 + 32);
    v7 = *(__int64**)(v5 + 40);
    while (v6 != v7) {
      v8 = *v6++;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8);
    }
  }
  return 0;
}

__int64 GameHr_115ecf0()
{
  int v0;
  int v1;
  __int64 v2;

  if (GameData_21ec7b8 != 0 && (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) != 0 ||
      GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
      (((v0 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v1 = 2)
                                                            : (v1 = 3),
       (v1 & v0) != 0)) {
    v2 = *(_QWORD*)(GameData_22336e0 + 688);
    if (v2 != 0) {
      GameRoutine_19378a0(v2, 0);
    }
  }
  return 0;
}

__int64 GameHr_115ed80()
{
  if (GameData_22336e0 != 0) {
    *(_BYTE*)(GameData_22336e0 + 552) = 0;
  }
  return 0;
}

__int64 GameHr_115eda0()
{
  int v0;
  int v1;
  __int64 v2;

  if (GameData_21ec7b8 != 0 && (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) != 0 ||
      GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
      (((v0 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v1 = 2)
                                                            : (v1 = 3),
       (v1 & v0) != 0)) {
    v2 = GameData_22336e0;
    if (GameData_22336e0 != 0) {
      *(_BYTE*)(GameData_22336e0 + 553) = 1;
      GameRoutine_114e4a0(v2);
    }
  }
  return 0;
}

__int64 GameHr_115f190()
{
  if (GameData_2263c28 != 0) {
    *(_BYTE*)(GameData_2263c28 + 856) = 1;
  }
  return 0;
}

__int64 GameHr_115fb80()
{
  if (GameData_22336e0 != 0) {
    *(_BYTE*)(GameData_22336e0 + 776) = 1;
  }
  return 0;
}

__int64 GameHr_115fba0()
{
  if (GameData_22336e0 != 0) {
    *(_BYTE*)(GameData_22336e0 + 776) = 0;
  }
  return 0;
}

__int64 GameHr_115fbc0()
{
  if (GameData_2265ef8 != 0) {
    *(_BYTE*)(GameData_2265ef8 + 600) = 1;
  }
  return 0;
}

__int64 GameHr_115fbe0()
{
  if (GameData_2265ef8 != 0) {
    *(_BYTE*)(GameData_2265ef8 + 600) = 0;
  }
  return 0;
}

__int64 GameHr_115fce0(__int64 a1)
{
  __int64 result;
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  result = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 40, 16, 0);
  v3 = *(_BYTE*)(a1 + 8);
  *(_QWORD*)result = GameData_20134a0;
  if ((v3 & 1) != 0) {
    v6 = result;
    GameRoutine_60a270(result + 8, *(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 16));
    result = v6;
  }
  else {
    v4 = *(_QWORD*)(a1 + 16);
    v5 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(result + 8) = *(_QWORD*)(a1 + 8);
    *(_QWORD*)(result + 16) = v4;
    *(_QWORD*)(result + 24) = v5;
  }
  *(_DWORD*)(result + 32) = *(_DWORD*)(a1 + 32);
  *(_BYTE*)(result + 36) = *(_BYTE*)(a1 + 36);
  return result;
}

_QWORD* GameHr_115fd70(__int64 a1, __int64 a2)
{
  _QWORD* result;
  __int64 v5;
  __int64 v6;
  int v7;

  *(_QWORD*)a2 = GameData_20134a0;
  result = (_QWORD*)(a2 + 8);
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    result = (_QWORD*)GameRoutine_60a270(result, *(_QWORD*)(a1 + 24),
                                         *(_QWORD*)(a1 + 16));
  }
  else {
    v5 = *(_QWORD*)(a1 + 8);
    v6 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a2 + 16) = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a2 + 24) = v6;
    *result = v5;
  }
  v7 = *(_DWORD*)(a1 + 32);
  *(_BYTE*)(a2 + 36) = *(_BYTE*)(a1 + 36);
  *(_DWORD*)(a2 + 32) = v7;
  return result;
}

__int64 GameHr_115fe30(__int64 result)
{
  __int64 v1;

  if (GameData_22336e0 != 0) {
    v1 = result;
    result = GameRoutine_1152360(GameData_22336e0 + 560, result + 8);
    if (result != 0) {
      result = *(_QWORD*)(result + 40);
      if (result != 0) {
        return GameRoutine_11c4de0(result, *(unsigned __int8*)(v1 + 36),
                                   *(float*)(v1 + 32));
      }
    }
  }
  return result;
}

__int64 GameHr_1160490(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  *(_QWORD*)result = GameData_2013520;
  if ((*(_BYTE*)(result + 56) & 1) != 0) {
    v2 = *(_QWORD*)(result + 72);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v3 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v3, v2);
    }
  }
  if ((*(_BYTE*)(v1 + 32) & 1) != 0) {
    v4 = *(_QWORD*)(v1 + 48);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v5 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5, v4);
    }
  }
  if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
    v6 = *(_QWORD*)(v1 + 24);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v7 = 56;
      }
      return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7, v6);
    }
  }
  return result;
}

__int64 GameHr_1160570(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = GameData_2013520;
  v2 = GameData_212bf68;
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 72);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v4 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4, v3);
    }
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 48);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v2 + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 24);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v8 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v2 + v8, v7);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)v2 + v9, a1);
}

_QWORD* GameHr_1160660(__int64 a1)
{
  _QWORD* v2;
  char v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 88, 16, 0);
  v3 = *(_BYTE*)(a1 + 8);
  v4 = v2;
  *v2 = GameData_2013520;
  v5 = v2 + 1;
  if ((v3 & 1) != 0) {
    GameRoutine_60a270(v5, *(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 16));
  }
  else {
    v6 = *(_QWORD*)(a1 + 16);
    v7 = *(_QWORD*)(a1 + 24);
    *v5 = *(_QWORD*)(a1 + 8);
    v5[1] = v6;
    v5[2] = v7;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    GameRoutine_60a270(v4 + 4, *(_QWORD*)(a1 + 48), *(_QWORD*)(a1 + 40));
  }
  else {
    v8 = *(_QWORD*)(a1 + 40);
    v9 = *(_QWORD*)(a1 + 48);
    v4[4] = *(_QWORD*)(a1 + 32);
    v4[5] = v8;
    v4[6] = v9;
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    GameRoutine_60a270(v4 + 7, *(_QWORD*)(a1 + 72), *(_QWORD*)(a1 + 64));
  }
  else {
    v10 = *(_QWORD*)(a1 + 64);
    v11 = *(_QWORD*)(a1 + 72);
    v4[7] = *(_QWORD*)(a1 + 56);
    v4[8] = v10;
    v4[9] = v11;
  }
  *((_DWORD*)v4 + 20) = *(_DWORD*)(a1 + 80);
  return v4;
}

float GameHr_1160740(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float result;

  *(_QWORD*)a2 = GameData_2013520;
  v4 = (_QWORD*)(a2 + 8);
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    GameRoutine_60a270(v4, *(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 16));
  }
  else {
    v5 = *(_QWORD*)(a1 + 8);
    v6 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a2 + 16) = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a2 + 24) = v6;
    *v4 = v5;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    GameRoutine_60a270(a2 + 32, *(_QWORD*)(a1 + 48), *(_QWORD*)(a1 + 40));
  }
  else {
    v7 = *(_QWORD*)(a1 + 32);
    v8 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)(a2 + 40) = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a2 + 48) = v8;
    *(_QWORD*)(a2 + 32) = v7;
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    GameRoutine_60a270(a2 + 56, *(_QWORD*)(a1 + 72), *(_QWORD*)(a1 + 64));
  }
  else {
    v9 = *(_QWORD*)(a1 + 56);
    v10 = *(_QWORD*)(a1 + 72);
    *(_QWORD*)(a2 + 64) = *(_QWORD*)(a1 + 64);
    *(_QWORD*)(a2 + 72) = v10;
    *(_QWORD*)(a2 + 56) = v9;
  }
  result = *(float*)(a1 + 80);
  *(float*)(a2 + 80) = result;
  return result;
}

__int64 GameHr_1160800(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  if ((*(_BYTE*)(result + 56) & 1) != 0) {
    v2 = *(_QWORD*)(result + 72);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v3 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v3, v2);
    }
  }
  if ((*(_BYTE*)(v1 + 32) & 1) != 0) {
    v4 = *(_QWORD*)(v1 + 48);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v5 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5, v4);
    }
  }
  if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
    v6 = *(_QWORD*)(v1 + 24);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v7 = 56;
      }
      return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7, v6);
    }
  }
  return result;
}

__int64 GameHr_11608f0(__int64 result)
{
  __int64 v1;

  if (GameData_22336e0 != 0) {
    v1 = result;
    result = GameRoutine_1152360(GameData_22336e0 + 560, result + 8);
    if (result != 0) {
      result = *(_QWORD*)(result + 40);
      if (result != 0) {
        return GameRoutine_11c4fc0(result, v1 + 56, v1 + 32,
                                   *(float*)(v1 + 80));
      }
    }
  }
  return result;
}

_QWORD* GameHr_1160a70(__int64 a1)
{
  _QWORD* result;
  char v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  result = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 56, 16, 0);
  v3 = *(_BYTE*)(a1 + 8);
  *result = GameData_20135a0;
  if ((v3 & 1) != 0) {
    v6 = result;
    GameRoutine_60a270(result + 1, *(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 16));
    result = v6;
  }
  else {
    v4 = *(_QWORD*)(a1 + 16);
    v5 = *(_QWORD*)(a1 + 24);
    result[1] = *(_QWORD*)(a1 + 8);
    result[2] = v4;
    result[3] = v5;
  }
  v7 = *(_QWORD*)(a1 + 40);
  result[4] = *(_QWORD*)(a1 + 32);
  result[5] = v7;
  *(_QWORD*)((char*)result + 45) = *(_QWORD*)(a1 + 45);
  return result;
}

_QWORD* GameHr_1160b00(_QWORD* a1, _QWORD* a2)
{
  _QWORD* result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *a2 = GameData_20135a0;
  result = a2 + 1;
  if ((a1[1] & 1) != 0) {
    result = (_QWORD*)GameRoutine_60a270(result, a1[3], a1[2]);
  }
  else {
    v5 = a1[1];
    v6 = a1[3];
    a2[2] = a1[2];
    a2[3] = v6;
    *result = v5;
  }
  v7 = a1[4];
  v8 = a1[5];
  *(_QWORD*)((char*)a2 + 45) = *(_QWORD*)((char*)a1 + 45);
  a2[4] = v7;
  a2[5] = v8;
  return result;
}

__int64* GameHr_1160bc0(__int64* result)
{

#pragma clang fp contract(off)
  __int64* v1;
  __int64 v2;
  float v3;
  __int64 v4;

  if (GameData_22336e0 != 0) {
    v1 = result;
    result = GameRoutine_1152360_alt1((_QWORD*)(GameData_22336e0 + 560),
                                      (unsigned __int8*)result + 8);
    if (result != nullptr) {
      v2 = result[5];
      if (v2 != 0) {
        v3 = *((float*)v1 + 12);
        v4 = v1[4];
        if (*((_BYTE*)v1 + 52) == 1) {
          GameRoutine_11c46e0_alt1(v1[4]);
        }
        return (__int64*)GameRoutine_11c4a00_alt2(v2, v4, v3);
      }
    }
  }
  return result;
}

__int64 GameHr_1160ec0(__int64 result)
{
  __int64 v1;
  float v2;
  float v3;
  int v4;
  int v5;
  float v6;
  float v7;

  if (GameData_22336e0 != 0) {
    v1 = result;
    result = GameRoutine_1152360(GameData_22336e0 + 560, result + 8);
    if (result != 0) {
      result = *(_QWORD*)(result + 40);
      if (result != 0) {
        v3 = *(float*)(v1 + 32);
        v2 = *(float*)(v1 + 36);
        *(_BYTE*)(result + 228) = 1;
        if (v3 <= 0.0) {
          v4 = *(_DWORD*)(result + 200);
          v6 = 1.0;
          v7 = 1.0;
          *(_DWORD*)(result + 204) = v4;
          v5 = v4;
        }
        else {
          v5 = *(_DWORD*)(result + 200);
          v4 = *(_DWORD*)(result + 204);
          v6 = 0.0;
          v7 = v3;
        }
        *(_DWORD*)(result + 208) = v4;
        *(_DWORD*)(result + 212) = v5;
        *(float*)(result + 216) = v6;
        *(float*)(result + 220) = v7;
        *(_DWORD*)(result + 224) = 3;
        return GameRoutine_11c4800(result, v2, v3);
      }
    }
  }
  return result;
}

__int64 GameHr_11611c0(__int64 result)
{
  __int64 v1;
  float v2;
  float v3;
  int v4;
  int v5;
  float v6;
  float v7;

  if (GameData_22336e0 != 0) {
    v1 = result;
    result = GameRoutine_1152360(GameData_22336e0 + 560, result + 8);
    if (result != 0) {
      result = *(_QWORD*)(result + 40);
      if (result != 0) {
        v3 = *(float*)(v1 + 32);
        v2 = *(float*)(v1 + 36);
        *(_BYTE*)(result + 228) = 1;
        if (v3 <= 0.0) {
          v4 = *(_DWORD*)(result + 200);
          v6 = 1.0;
          v7 = 1.0;
          *(_DWORD*)(result + 204) = v4;
          v5 = v4;
        }
        else {
          v5 = *(_DWORD*)(result + 200);
          v4 = *(_DWORD*)(result + 204);
          v6 = 0.0;
          v7 = v3;
        }
        *(_DWORD*)(result + 208) = v4;
        *(_DWORD*)(result + 212) = v5;
        *(float*)(result + 216) = v6;
        *(float*)(result + 220) = v7;
        *(_DWORD*)(result + 224) = 3;
        return GameRoutine_11c4800(result, v2, v3);
      }
    }
  }
  return result;
}

__int64 GameHr_1161490(__int64 a1)
{
  char v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_BYTE*)(a1 + 16);
  v2 = *(_QWORD*)(a1 + 32);
  v3 = a1 + 17;
  v4 = *(_QWORD*)(a1 + 8);
  if ((v1 & 1) != 0) {
    v5 = v2;
  }
  else {
    v5 = v3;
  }
  return GameRoutine_11c5860(v4, v5);
}

__int64 GameHr_11614e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  *(_QWORD*)result = GameData_20137a0;
  if ((*(_BYTE*)(result + 56) & 1) != 0) {
    v2 = *(_QWORD*)(result + 72);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v3 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v3, v2);
    }
  }
  if ((*(_BYTE*)(v1 + 32) & 1) != 0) {
    v4 = *(_QWORD*)(v1 + 48);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v5 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5, v4);
    }
  }
  if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
    v6 = *(_QWORD*)(v1 + 24);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v7 = 56;
      }
      return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7, v6);
    }
  }
  return result;
}

__int64 GameHr_11615c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = GameData_20137a0;
  v2 = GameData_212bf68;
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 72);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v4 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4, v3);
    }
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 48);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v2 + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 24);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v8 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v2 + v8, v7);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)v2 + v9, a1);
}

_QWORD* GameHr_11616b0(__int64 a1)
{
  _QWORD* v2;
  char v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 80, 16, 0);
  v3 = *(_BYTE*)(a1 + 8);
  v4 = v2;
  *v2 = GameData_20137a0;
  v5 = v2 + 1;
  if ((v3 & 1) != 0) {
    GameRoutine_60a270(v5, *(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 16));
  }
  else {
    v6 = *(_QWORD*)(a1 + 16);
    v7 = *(_QWORD*)(a1 + 24);
    *v5 = *(_QWORD*)(a1 + 8);
    v5[1] = v6;
    v5[2] = v7;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    GameRoutine_60a270(v4 + 4, *(_QWORD*)(a1 + 48), *(_QWORD*)(a1 + 40));
  }
  else {
    v8 = *(_QWORD*)(a1 + 40);
    v9 = *(_QWORD*)(a1 + 48);
    v4[4] = *(_QWORD*)(a1 + 32);
    v4[5] = v8;
    v4[6] = v9;
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    GameRoutine_60a270(v4 + 7, *(_QWORD*)(a1 + 72), *(_QWORD*)(a1 + 64));
  }
  else {
    v10 = *(_QWORD*)(a1 + 64);
    v11 = *(_QWORD*)(a1 + 72);
    v4[7] = *(_QWORD*)(a1 + 56);
    v4[8] = v10;
    v4[9] = v11;
  }
  return v4;
}

_QWORD* GameHr_1161780(__int64 a1, _QWORD* a2)
{
  _QWORD* result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *a2 = GameData_20137a0;
  result = a2 + 1;
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    result = (_QWORD*)GameRoutine_60a270(result, *(_QWORD*)(a1 + 24),
                                         *(_QWORD*)(a1 + 16));
  }
  else {
    v5 = *(_QWORD*)(a1 + 8);
    v6 = *(_QWORD*)(a1 + 24);
    a2[2] = *(_QWORD*)(a1 + 16);
    a2[3] = v6;
    *result = v5;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    result = (_QWORD*)GameRoutine_60a270(a2 + 4, *(_QWORD*)(a1 + 48),
                                         *(_QWORD*)(a1 + 40));
  }
  else {
    v7 = *(_QWORD*)(a1 + 32);
    v8 = *(_QWORD*)(a1 + 48);
    a2[5] = *(_QWORD*)(a1 + 40);
    a2[6] = v8;
    a2[4] = v7;
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    return (_QWORD*)GameRoutine_60a270(a2 + 7, *(_QWORD*)(a1 + 72),
                                       *(_QWORD*)(a1 + 64));
  }
  v9 = *(_QWORD*)(a1 + 56);
  v10 = *(_QWORD*)(a1 + 72);
  a2[8] = *(_QWORD*)(a1 + 64);
  a2[9] = v10;
  a2[7] = v9;
  return result;
}

__int64 GameHr_1161840(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  if ((*(_BYTE*)(result + 56) & 1) != 0) {
    v2 = *(_QWORD*)(result + 72);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v3 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v3, v2);
    }
  }
  if ((*(_BYTE*)(v1 + 32) & 1) != 0) {
    v4 = *(_QWORD*)(v1 + 48);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v5 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5, v4);
    }
  }
  if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
    v6 = *(_QWORD*)(v1 + 24);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v7 = 56;
      }
      return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7, v6);
    }
  }
  return result;
}

__int64 GameHr_1161980(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)result = GameData_2013820;
  if ((*(_BYTE*)(result + 32) & 1) != 0) {
    v1 = *(_QWORD*)(result + 48);
    if (v1 != 0) {
      v2 = result;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v3 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v3, v1);
      result = v2;
    }
  }
  if ((*(_BYTE*)(result + 8) & 1) != 0) {
    v4 = *(_QWORD*)(result + 24);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v5 = 56;
      }
      return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5, v4);
    }
  }
  return result;
}

__int64 GameHr_1161a30(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = GameData_2013820;
  v2 = GameData_212bf68;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 48);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v4 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4, v3);
    }
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 24);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v2 + v6, v5);
    }
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v7 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)v2 + v7, a1);
}

_QWORD* GameHr_1161af0(__int64 a1)
{
  _QWORD* v2;
  char v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 56, 16, 0);
  v3 = *(_BYTE*)(a1 + 8);
  v4 = v2;
  *v2 = GameData_2013820;
  v5 = v2 + 1;
  if ((v3 & 1) != 0) {
    GameRoutine_60a270(v5, *(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 16));
  }
  else {
    v6 = *(_QWORD*)(a1 + 16);
    v7 = *(_QWORD*)(a1 + 24);
    *v5 = *(_QWORD*)(a1 + 8);
    v5[1] = v6;
    v5[2] = v7;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    GameRoutine_60a270(v4 + 4, *(_QWORD*)(a1 + 48), *(_QWORD*)(a1 + 40));
  }
  else {
    v8 = *(_QWORD*)(a1 + 40);
    v9 = *(_QWORD*)(a1 + 48);
    v4[4] = *(_QWORD*)(a1 + 32);
    v4[5] = v8;
    v4[6] = v9;
  }
  return v4;
}

_QWORD* GameHr_1161ba0(__int64 a1, _QWORD* a2)
{
  _QWORD* result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *a2 = GameData_2013820;
  result = a2 + 1;
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    result = (_QWORD*)GameRoutine_60a270(result, *(_QWORD*)(a1 + 24),
                                         *(_QWORD*)(a1 + 16));
  }
  else {
    v5 = *(_QWORD*)(a1 + 8);
    v6 = *(_QWORD*)(a1 + 24);
    a2[2] = *(_QWORD*)(a1 + 16);
    a2[3] = v6;
    *result = v5;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    return (_QWORD*)GameRoutine_60a270(a2 + 4, *(_QWORD*)(a1 + 48),
                                       *(_QWORD*)(a1 + 40));
  }
  v7 = *(_QWORD*)(a1 + 32);
  v8 = *(_QWORD*)(a1 + 48);
  a2[5] = *(_QWORD*)(a1 + 40);
  a2[6] = v8;
  a2[4] = v7;
  return result;
}

__int64 GameHr_1161c30(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if ((*(_BYTE*)(result + 32) & 1) != 0) {
    v1 = *(_QWORD*)(result + 48);
    if (v1 != 0) {
      v2 = result;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v3 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v3, v1);
      result = v2;
    }
  }
  if ((*(_BYTE*)(result + 8) & 1) != 0) {
    v4 = *(_QWORD*)(result + 24);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v5 = 56;
      }
      return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5, v4);
    }
  }
  return result;
}

__int64 GameHr_1162be0(__int64 a1)
{
  __int64 result;

  result = GameRoutine_11526a0(*GameData_212fc38[0] + 648, a1 + 8);
  if (result != 0) {
    result = *(_QWORD*)(result + 40);
    if (result != 0) {
      return GameRoutine_11cb1c0(result);
    }
  }
  return result;
}

unsigned __int64 GameHr_1174420(unsigned int a1, unsigned int a2, __int64 a3,
                                char a4)
{
  __int64 v8;
  __int64 v9;
  unsigned __int64 result;
  unsigned __int64 v11;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;

  v8 = *GameData_212ce98[0];
  v9 = GameData_21cd158;
  result = GameRoutine_7a86e0(a3);
  if (result == 0) {
    return result;
  }
  v11 = *(_QWORD*)(GameData_21c9bd0 + 96);
  if (v11 == 0 || *(_QWORD*)(GameData_21c9bd0 + 112) == 0) {
    return result;
  }
  v13 = v11 - 1;
  if ((v11 & (v11 - 1)) != 0) {
    v14 = result;
    if (result >= v11) {
      v14 = result % v11;
    }
  }
  else {
    v14 = v13 & result;
  }
  v15 = *(_QWORD**)(*(_QWORD*)(GameData_21c9bd0 + 88) + 8 * v14);
  if (v15 == nullptr) {
    return result;
  }
  v16 = (_QWORD*)*v15;
  if (v16 == nullptr) {
    return result;
  }
  if ((v11 & v13) == 0) {
    while (1) {
      v18 = v16[1];
      if (v18 == result) {
        if (v16[2] == result) {
          goto LABEL_26;
        }
      }
      else if ((v18 & v13) != v14) {
        return result;
      }
      v16 = (_QWORD*)*v16;
      if (v16 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v17 = v16[1];
    if (v17 == result) {
      break;
    }
    if (v17 >= v11) {
      v17 %= v11;
    }
    if (v17 != v14) {
      return result;
    }
  LABEL_15:
    v16 = (_QWORD*)*v16;
    if (v16 == nullptr) {
      return result;
    }
  }
  if (v16[2] != result) {
    goto LABEL_15;
  }
LABEL_26:
  v19 = v16[3];
  if (v19 == 0) {
    return result;
  }
  result = GameRoutine_1a09d30(a3, &GameData_1ae31cd);
  if ((_DWORD)result == 0) {
    v22 = a1 + 32 * a2;
    if (v22 >= 0x400) {
      v22 = 0;
    }
    v23 = *(_QWORD*)(v8 + 40) + 8LL;
    if (*(_WORD*)(v23 + 2LL * v22) != 0) {
      *(_WORD*)(v23 + 2LL * v22) = 0;
    }
    result = GameRoutine_7c9850(*(_QWORD*)(v9 + 16), a1, a2);
    if ((a4 & 1) == 0) {
      goto LABEL_46;
    }
    return result;
  }
  v20 = *(unsigned __int8*)(v19 + 56);
  if (v20 == 1) {
    v21 = 32;
    goto LABEL_42;
  }
  if (v20 != 2) {
    goto LABEL_45;
  }
  v21 = 40;
  if (*(_BYTE*)(v19 + 57) == 0 || *(_BYTE*)(v19 + 57) == 11) {
  LABEL_42:
    v24 = *(_QWORD*)(v8 + v21);
    v25 = a1 + 32 * a2;
    if (v25 >= 0x400) {
      v25 = 0;
    }
    *(_WORD*)(v24 + 2LL * v25 + 8) = *(_WORD*)(v19 + 16);
  LABEL_45:
    if ((a4 & 1) == 0) {
      goto LABEL_46;
    }
    return result;
  }
  v26 = v19;
  if ((GameRoutine_7ca2d0(v9, a1, a2, &v26) & 1) != 0) {
    v26 = v19;
    result = GameRoutine_7ca1f0(v9, a1, a2, &v26);
    if ((a4 & 1) != 0) {
      return result;
    }
  }
  else {
    v26 = v19;
    result = GameRoutine_7c9480(v9, a1, a2, &v26);
    if ((a4 & 1) != 0) {
      return result;
    }
  }
LABEL_46:
  GameRoutine_729f40(v8);
  result = GameRoutine_7d5160(*(_QWORD*)(v9 + 16), 1);
  if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
    *(_DWORD*)(GameData_22400f8 + 12) |= 0x402u;
  }
  return result;
}

__int64 GameHr_11893d0(__int64 result, unsigned int a2, unsigned int a3,
                       _BYTE* a4, char a5)
{
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v16;
  unsigned __int64 v17;
  char v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  int v22;
  __int64 v23;
  int v24;
  char v25;
  int v26;
  _BYTE* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  bool v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  struct {
    unsigned int v44[34];
    int v45;
    char v46;
    char gap141_[3];
    int v47;
    int v48;
    int v49;
    int v50;
    int v51;
    int v52;
    int v53;
    int v54;
    char v55;
    char gap177_[7];
    __int64 v56;
  } v44_;
  struct {
    _BYTE v57[32];
    __int64 v58;
  } v57_;

  if (result != 0 && *(_QWORD*)(result + 392) != 0) {
    v5 = *(_QWORD*)(result + 440);
    if (v5 != 0 && *(unsigned __int8*)(v5 + 16) <= 3u) {
      v6 = (_QWORD*)GameData_21ca2f0;
      if (GameData_21ca2f0 != 0) {
        v7 = (_QWORD*)GameData_21cd150;
        if (GameData_21cd150 != 0 ||
            (v7 = (_QWORD*)GameData_22054a0, GameData_22054a0 != 0) ||
            (v7 = (_QWORD*)GameData_22054a8, GameData_22054a8 != 0)) {
          v8 = v7[10];
          if (v8 == 0) {
            return result;
          }
          v9 = *(_QWORD*)(*(_QWORD*)(v7[6] + 8 * ((v8 + v7[9] - 1) / 0x33uLL)) +
                          80 * ((v8 + v7[9] - 1) % 0x33uLL) + 72);
          if (v9 == 0) {
            return result;
          }
        }
        else {
          if (game_hub_ProcHubSeqView_instance_ == 0) {
            return result;
          }
          v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
          if (v9 == 0) {
            return result;
          }
        }
        v10 = *(_QWORD*)(GameData_21ca2f0 + 10752);
        v11 = *(_QWORD*)(GameData_21ca2f0 + 10744);
        v12 = result;
        v16 = ((v10 - v11) << 6) - 1;
        if (v10 == v11) {
          v16 = 0;
        }
        v17 = *(_QWORD*)(GameData_21ca2f0 + 10776) +
              *(_QWORD*)(GameData_21ca2f0 + 10768);
        if (v16 == v17) {
          v18 = a5;
          GameRoutine_74cd60_alt1((__int64*)(GameData_21ca2f0 + 10736));
          v11 = v6[1343];
          a5 = v18;
          result = v12;
          v17 = v6[1347] + v6[1346];
        }
        *(_QWORD*)(*(_QWORD*)(v11 + 8 * (v17 >> 9)) + 8 * (v17 & 0x1FF)) =
            v6[1];
        v6[1] = v6 + 337;
        ++v6[1347];
        v19 = *(char*)(result + 584);
        v20 = *(char*)(result + 585);
        if ((a5 & 1) != 0) {
          v21 = 8193;
        }
        else {
          v21 = 0x2000;
        }
        v44_.v44[0] = v21;
        IDeploy_748f80((__int64)v6, v12, v19, v20, 100, v44_.v44);
        v22 = *(char*)(v12 + 585);
        v23 = *(_QWORD*)(v12 + 440);
        v44_.v56 = 0;
        *(_QWORD*)v44_.v44 = GameData_212d178[0] + 2;
        v24 = *(char*)(v12 + 584);
        if (v23 != 0) {
          v25 = *(_BYTE*)(v23 + 16);
        }
        else {
          v25 = 9;
        }
        v26 = *(_DWORD*)(v12 + 592);
        v44_.v51 = v22;
        v44_.v52 = v24;
        v44_.v49 = v22;
        v44_.v50 = v24;
        v44_.v53 = v22;
        v44_.v54 = 0;
        v44_.v55 = 0;
        v44_.v46 = v25;
        v44_.v45 = 0;
        v44_.v47 = v26;
        v44_.v48 = v24;
        IRoute_750a00((__int64)v44_.v44, a2, a3);
        v28 = a4;
        if ((*a4 & 2) != 0 && v44_.v45 >= 2) {
          v44_.v45 = 1;
        }
        v29 = v6[1347];
        v30 = v6[1346];
        v31 = v6[1343];
        v32 = v6[1344];
        v33 = v32 == v31;
        v34 = v29 - 1 + v30;
        v35 = v34 >> 9;
        v36 = v34 & 0x1FF;
        v37 = ((v32 - v31) << 6) - 1;
        v38 = *(_QWORD*)(v31 + 8 * v35);
        if (v33) {
          v37 = 0;
        }
        v39 = *(_QWORD*)(v38 + 8 * v36);
        v6[1347] = v29 - 1;
        v6[1] = v39;
        if ((unsigned __int64)(v37 - (v29 + v30) + 1) >= 0x400) {
          v40 = *(_QWORD*)(v32 - 8);
          if (v40 != 0) {
            v41 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v41 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v40);
            v32 = v6[1344];
            v28 = a4;
          }
          v6[1344] = v32 - 8;
        }
        v57_.v58 = 0;
        result = game_map_768a20(v9, v12, (__int64)v44_.v44, v28, 0, nullptr,
                                 (__int64)v57_.v57);
        if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
            (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
          v42 = *(_QWORD*)(v12 + 440);
          if (v42 != 0 && *(unsigned __int8*)(v42 + 16) <= 8u &&
              game_map_UnitFlags_instance_ != 0) {
            v43 = *(unsigned __int8*)(v12 + 2088);
            if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v43) & 1) != 0) {
              *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v43) |= 2u;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_11916a0()
{
  GameRoutine_82dfe0(GameData_21caab0 + 40, 0);
  return 2;
}

__int64 GameHr_11917a0()
{
  GameRoutine_82dfe0(GameData_21caab0 + 40, 1);
  return 2;
}

__int64 GameHr_1194340(__int64 a1)
{
  _QWORD v2[3];

  __builtin_memset(v2, 0, sizeof(v2));
  return GameRoutine_1194a00(a1, "Startup", v2) & 1;
}

__int64 GameHr_1194380(__int64 a1)
{
  _QWORD v2[3];

  __builtin_memset(v2, 0, sizeof(v2));
  return GameRoutine_1194a00(a1, "Cleanup", v2) & 1;
}

__int64 GameHr_11944d0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v5;
  _QWORD v7[2];
  _QWORD v8[3];

  v1 = *GameData_212cfb0[0];
  strcpy((char*)v7, "void GameOver()");
  v2 = *(unsigned int*)(v1 + 24);
  if ((_DWORD)v2 != 0x2000 &&
      (v3 = (_QWORD*)((char*)&GameData_21a65c8 + 16 * v2))[1] != 0 &&
      *v3 == *(_QWORD*)(v1 + 16)) {
    v5 = GameRoutine_62cf40(*GameData_212c370, v1 + 16, v7);
    if (v5 != 0) {
      __builtin_memset(v8, 0, sizeof(v8));
      LOBYTE(v5) = GameRoutine_1194a00(a1, "GameOver", v8);
    }
  }
  else {
    LOBYTE(v5) = 0;
  }
  return v5 & 1;
}

__int64 GameHr_11945e0(__int64 a1, const char* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 (*v20)();
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  const char* v32;
  struct {
    __int64 v33;
    __int64 v34;
    __int64 v35;
  } v33_;
  __int64 v36;

  v3 = *a3;
  v4 = a3[1];
  v7 = v4 - *a3;
  if (v4 == *a3) {
    v33_.v34 = 0;
    v33_.v35 = 0;
    v33_.v33 = 0;
    v25 = ProcRunEvent_1194a00(a1, a2, &v33_.v33);
  }
  else {
    if (v7 < 0) {
      goto LABEL_29;
    }
    v32 = a2;
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    v9 = 32;
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v7, 16, 0);
    do {
      v11 = v9;
      v12 = v3 + v9;
      v13 = v10 + v9;
      *(_BYTE*)(v13 - 32) = 0;
      *(_DWORD*)(v13 - 8) = -1;
      v14 = *(_DWORD*)(v12 - 8);
      if (v14 != -1) {
        v33_.v33 = v13 - 32;
        ((void (*)(__int64*, __int64))GameData_2014fb0[v14])(&v33_.v33,
                                                             v12 - 32);
        *(_DWORD*)(v13 - 8) = v14;
      }
      v9 = v11 + 32;
    } while (v3 + v11 != v4);
    v15 = v11;
    if (v11 < 0) {
    LABEL_29:
      GameRoutine_c8c1e0_alt1();
    }
    v16 = fw_memory_HeapManager_Allocate(*v8, v11, 16, 0);
    v17 = 0;
    v33_.v33 = v16;
    v33_.v35 = v16 + v11;
    do {
      v18 = v16 + v17;
      v19 = *(_DWORD*)(v10 + v17 + 24);
      *(_BYTE*)v18 = 0;
      *(_DWORD*)(v18 + 24) = -1;
      if (v19 != -1) {
        v20 = GameData_2014fb0[v19];
        v36 = v16 + v17;
        ((void (*)(__int64*))v20)(&v36);
        *(_DWORD*)(v18 + 24) = v19;
      }
      v17 += 32;
    } while (v11 != v17);
    v21 = v16 + v17;
    v33_.v34 = v21;
    v22 = ProcRunEvent_1194a00(a1, v32, &v33_.v33);
    v23 = -v17;
    v24 = v21 - 32;
    v25 = v22;
    do {
      v26 = *(unsigned int*)(v24 + 24);
      if ((_DWORD)v26 != -1) {
        ((void (*)(__int64*, __int64))decltype_c81af0_ptr[v26])(&v36, v24);
      }
      *(_DWORD*)(v24 + 24) = -1;
      v24 -= 32;
      v23 += 32;
    } while (v23 != 0);
    if (v33_.v33 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v33_.v33);
    }
    do {
      v28 = v10 + v15;
      v29 = *(unsigned int*)(v10 + v15 - 8);
      if ((_DWORD)v29 != -1) {
        ((void (*)(__int64*, __int64))decltype_c81af0_ptr[v29])(&v33_.v33,
                                                                v28 - 32);
      }
      v15 -= 32;
      *(_DWORD*)(v28 - 8) = -1;
    } while (v15 != 0);
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30,
                                  v10);
  }
  return v25 & 1;
}

__int64 GameHr_1194e80(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
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
  char v32;

  *(_QWORD*)a1 = GameData_2014ec8;
  *(_QWORD*)(a1 + 152) = GameData_2014f68;
  if (GameData_21ca2f8 != 0) {
    v2 = GameData_21cd130;
    v3 = *(_DWORD*)(GameData_21cd130 + 40) - 1;
    *(_DWORD*)(GameData_21cd130 + 40) = v3;
    if (v3 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 32) + 8LL))(v2 + 32);
    }
    v4 = GameData_21cd138;
    v5 = *(_DWORD*)(GameData_21cd138 + 16) - 1;
    *(_DWORD*)(GameData_21cd138 + 16) = v5;
    if (v5 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v4 + 8) + 8LL))(v4 + 8);
    }
    v6 = GameData_21cd140;
    v7 = *(_DWORD*)(GameData_21cd140 + 424) - 1;
    *(_DWORD*)(GameData_21cd140 + 424) = v7;
    if (v7 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v6 + 416) + 8LL))(v6 + 416);
    }
  }
  v8 = (_QWORD*)GameData_21ee240;
  if (GameData_21ee240 != 0) {
    v10 = *(_QWORD*)(GameData_21ee240 + 208);
    v9 = *(_QWORD*)(GameData_21ee240 + 216);
    v12 = *(_QWORD*)(GameData_21ee240 + 184);
    v11 = *(_QWORD*)(GameData_21ee240 + 192);
    v13 = v11 == v12;
    v14 = v9 - 1 + v10;
    v15 = v14 >> 7;
    v16 = v14 & 0x7F;
    v17 = 16 * (v11 - v12) - 1;
    v18 = *(_QWORD*)(v12 + 8 * v15);
    if (v13) {
      v17 = 0;
    }
    v19 = v18 + 32 * v16;
    *(_DWORD*)(GameData_21ee240 + 156) =
        *(_DWORD*)v19 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(GameData_21ee240 + 156) & 2) != 0));
    v8[21] = *(_QWORD*)(v19 + 24);
    v20 = *(_QWORD*)(v19 + 16);
    v8[27] = v9 - 1;
    v8[20] = v20;
    if ((unsigned __int64)(v17 - (v9 + v10) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v21 = *(_QWORD*)(v11 - 8);
      if (v21 != 0) {
        v22 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v22 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v22, v21);
        v11 = v8[24];
      }
      v8[24] = v11 - 8;
    }
  }
  if (GameData_21cd148 != 0) {
    *(_BYTE*)(GameData_21cd148 + 1578) = 0;
  }
  v23 = *(_QWORD*)(a1 + 184);
  if (v23 != 0) {
    v24 = *(_QWORD*)(a1 + 192);
    if (v23 == v24) {
      goto LABEL_26;
    }
    do {
      v25 = *(unsigned int*)(v24 - 8);
      v26 = v24 - 32;
      if ((_DWORD)v25 != -1) {
        ((void (*)(char*, __int64))GameData_2014ea0[v25])(&v32, v24 - 32);
      }
      *(_DWORD*)(v24 - 8) = -1;
      v24 -= 32;
    } while (v26 != v23);
    v27 = *(_QWORD*)(a1 + 184);
    *(_QWORD*)(a1 + 192) = v23;
    v23 = v27;
    if (v27 != 0) {
    LABEL_26:
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v28 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v28, v23);
    }
  }
  if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
    v29 = *(_QWORD*)(a1 + 176);
    if (v29 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v30 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v30, v29);
    }
  }
  *(_QWORD*)a1 = GameData_1f8f7e8;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  GameRoutine_65a940(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 GameHr_1195460(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;

  v1 = *(_QWORD*)(GameData_21cd150 + 80);
  if (v1 == 0 ||
      (v2 = *(_QWORD*)(*(_QWORD*)(GameData_21cd150 + 48) +
                       8 * ((v1 + *(_QWORD*)(GameData_21cd150 + 72) - 1) /
                            0x33uLL)) +
            80 * ((v1 + *(_QWORD*)(GameData_21cd150 + 72) - 1) % 0x33uLL),
       (_DWORD)(v3 = *(unsigned int*)(v2 + 56)) == 0x2000) ||
      (v4 = (_QWORD*)((char*)&GameData_21a65c8 + 16 * v3), (v5 = v4[1]) == 0) ||
      *v4 != *(_QWORD*)(v2 + 48) || *(_DWORD*)(v5 + 52) != 1) {
    v6 = *(unsigned __int8**)(result + 16);
    if (v6 != nullptr) {
      v7 = *v6;
      v8 = v7 > 0x10;
      v9 = (1 << v7) & 0x1CE00;
      if (!v8 && v9 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

void __attribute__((noreturn)) GameHr_1196920()
{
  GameRoutine_1a09cd0("bad_variant_access was thrown in -fno-exceptions mode");
  __udf(0);
}

_QWORD* GameHr_1196940(_QWORD* result)
{
  _QWORD* v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = result;
  v2 = result[5] + result[4] - 1LL;
  v3 = *(_QWORD*)(result[1] + 8 * (v2 / 0x33)) + 80 * (v2 % 0x33);
  if ((*(_BYTE*)(v3 + 24) & 1) != 0) {
    v4 = *(_QWORD*)(v3 + 40);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v5 = 56;
      }
      result =
          (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5, v4);
    }
  }
  if ((*(_BYTE*)v3 & 1) != 0) {
    v6 = *(_QWORD*)(v3 + 16);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v7 = 56;
      }
      result =
          (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7, v6);
    }
  }
  v9 = v1[1];
  v8 = v1[2];
  v10 = v8 == v9;
  v11 = ((v8 - v9) >> 2) + ((v8 - v9) >> 3);
  v13 = v1[4];
  v12 = v1[5];
  v14 = 17 * v11 - 1;
  if (v10) {
    v14 = 0;
  }
  v1[5] = v12 - 1;
  if ((unsigned __int64)(v14 - (v12 + v13) + 1) >= 0x66) {
    v15 = *(_QWORD*)(v8 - 8);
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v16 = 56;
      }
      result =
          (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v16, v15);
      v8 = v1[2];
    }
    v1[2] = v8 - 8;
  }
  return result;
}

__int64 GameHr_11970a0()
{
  __int64 result;
  bool v2;
  int v3;
  unsigned int v4;

  if (GameData_2212270 == 0) {
    return 0;
  }
  result = 0;
  v2 = *(_QWORD*)GameData_212dbb8[0] != 0 &&
       *(_BYTE*)(GameData_2212270 + 218) != 0 &&
       *(_DWORD*)(GameData_2212270 + 232) <= 0;
  if (v2 && (*(_BYTE*)(GameData_2212270 + 240) & 1) == 0) {
    v3 = *(_DWORD*)(*(_QWORD*)GameData_212dbb8[0] + 136LL);
    if (v3 == 1) {
      v4 = 2;
    }
    else {
      v4 = 0;
    }
    if (v3 != 0) {
      return v4;
    }
    else {
      return 1;
    }
  }
  return result;
}

__int64 GameHr_11985f0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v7;
  __int64* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD v25[2];
  __int64 v26[2];
  __int64 v27[2];
  struct {
    __int64 v28;
    __int64 v29;
  } v28_;
  struct {
    __int64 v30;
    __int64 v31;
  } v30_;
  struct {
    __int64 v32;
    __int64 v33;
  } v32_;
  struct {
    __int64 v34;
    unsigned __int64 v35;
    _QWORD* v36;
  } v34_;
  struct {
    __int64 v37;
    unsigned __int64 v38;
    _QWORD* v39;
  } v37_;

  v2 = *(_QWORD**)a2;
  if ((*(_BYTE*)(*(_QWORD*)a2 + 24LL) & 1) != 0) {
    fw_text_String_CopyTerminated(&v37_.v37, v2[5], v2[4]);
    v2 = *(_QWORD**)a2;
  }
  else {
    v4 = *(_QWORD*)(*(_QWORD*)a2 + 32LL);
    v5 = *(_QWORD*)(*(_QWORD*)a2 + 40LL);
    v37_.v37 = *(_QWORD*)(*(_QWORD*)a2 + 24LL);
    v37_.v38 = v4;
    v37_.v39 = (_QWORD*)v5;
  }
  if ((v2[6] & 1) != 0) {
    fw_text_String_CopyTerminated(&v34_.v34, v2[8], v2[7]);
  }
  else {
    v7 = v2[7];
    v34_.v34 = v2[6];
    v34_.v35 = v7;
    v34_.v36 = (_QWORD*)v2[8];
  }
  v8 = (__int64*)GameData_212dbf0[0];
  if ((v37_.v37 & 1) != 0) {
    v9 = v37_.v39;
  }
  else {
    v9 = (__int64*)((char*)&v37_.v37 + 1);
  }
  if ((v37_.v37 & 1) != 0) {
    v10 = v37_.v38;
  }
  else {
    v10 = (unsigned __int64)(unsigned __int8)v37_.v37 >> 1;
  }
  game_hub_efca60((void*)(&v32_.v32), *(_QWORD*)GameData_212dbf0[0], v9, v10);
  if ((v34_.v34 & 1) != 0) {
    v11 = v34_.v36;
  }
  else {
    v11 = (__int64*)((char*)&v34_.v34 + 1);
  }
  if ((v34_.v34 & 1) != 0) {
    v12 = v34_.v35;
  }
  else {
    v12 = (unsigned __int64)(unsigned __int8)v34_.v34 >> 1;
  }
  game_hub_efca60((void*)(&v30_.v30), *v8, v11, v12);
  if (v32_.v33 != 0 && *(_QWORD*)(v32_.v33 + 8) != -1 && v30_.v31 != 0 &&
      *(_QWORD*)(v30_.v31 + 8) != -1) {
    v13 = *v8;
    v28_.v28 = v32_.v32;
    v28_.v29 = v32_.v33;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32_.v33 + 16), 1u,
                              memory_order_relaxed);
    GameHr_efaca0(v13, &v28_.v28);
    if (v28_.v29 != 0) {
      std___1___shared_weak_count___release_weak(v28_.v29);
    }
    v14 = v32_.v33;
    v27[0] = v32_.v32;
    v27[1] = v32_.v33;
    if (v32_.v33 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v32_.v33 + 16), 1u,
                                memory_order_relaxed);
      Hub_119b0e0(a1, 1, v27);
      std___1___shared_weak_count___release_weak(v14);
    }
    else {
      Hub_119b0e0(a1, 1, v27);
    }
    v15 = *v8;
    v16 = v32_.v33;
    v26[0] = v32_.v32;
    v26[1] = v32_.v33;
    if (v32_.v33 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v32_.v33 + 16), 1u,
                                memory_order_relaxed);
      v17 = game_hub_efc240(v15, v26);
      std___1___shared_weak_count___release_weak(v16);
    }
    else {
      v17 = game_hub_efc240(v15, v26);
    }
    v18 = *v8;
    v19 = v32_.v33;
    v25[0] = v32_.v32;
    v25[1] = v32_.v33;
    if (v32_.v33 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v32_.v33 + 16), 1u,
                                memory_order_relaxed);
    }
    if (v30_.v31 != 0 &&
        (v20 = std___1___shared_weak_count_lock(v30_.v31)) != 0) {
      v21 = v20;
      GameRoutine_efb030_alt1(v18, v25, *(_QWORD*)(v30_.v30 + 24), v17);
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak(v21);
      }
    }
    else {
      GameRoutine_efb030_alt1(v18, v25, 0, v17);
    }
    if (v19 != 0) {
      std___1___shared_weak_count___release_weak(v19);
    }
  }
  if (v30_.v31 != 0) {
    std___1___shared_weak_count___release_weak(v30_.v31);
  }
  if (v32_.v33 != 0) {
    std___1___shared_weak_count___release_weak(v32_.v33);
  }
  if ((v34_.v34 & 1) != 0 && v34_.v36 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  (__int64)v34_.v36);
  }
  if ((v37_.v37 & 1) != 0 && v37_.v39 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  (__int64)v37_.v39);
  }
  return 1;
}

__int64 GameHr_1199d20(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;

  v4 = *(_QWORD*)GameData_212dbf0[0];
  v5 = a2[1];
  v12_.v12 = *a2;
  v12_.v13 = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
  }
  GameHr_efaca0(v4, &v12_.v12);
  if (v12_.v13 != 0) {
    std___1___shared_weak_count___release_weak(v12_.v13);
  }
  result = *(_QWORD*)(a1 + 120);
  if (result == 0 || (result = std___1___shared_weak_count_lock(result)) == 0) {
    if (*a2 == 0) {
      return result;
    }
    goto LABEL_12;
  }
  v7 = *(_QWORD*)(a1 + 112);
  v8 = *a2;
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v9 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v9);
  }
  if (v7 != v8) {
  LABEL_12:
    Hub_119adb0(a1);
    v11 = *a2;
    v10 = a2[1];
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                memory_order_relaxed);
    }
    result = *(_QWORD*)(a1 + 120);
    *(_QWORD*)(a1 + 112) = v11;
    *(_QWORD*)(a1 + 120) = v10;
    if (result != 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
  }
  return result;
}

#pragma GCC visibility pop
