#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1ac12a9;
extern _UNKNOWN GameData_1ac6c8b;
extern unsigned int GameData_1beb938[9];
extern __int64 (*GameData_207cad8[])();
extern __int64 (*GameData_207cb88[])();
extern __int64 (*GameData_207d010[])();
extern __int64 (*GameData_207d0e0[])();
extern __int64 (*GameData_207d340[])();
extern __int64 (*GameData_207d598[])();
extern __int64 (*GameData_207d7d8[])();
extern __int64 (*GameData_207da50[])();
extern __int64 (*GameData_207dc98[])();
extern __int64 (*GameData_207def8[])();
extern __int64 (*GameData_207e158[])();
extern __int64 (*GameData_207e3e8[])();
extern __int64 (*GameData_207e668[])();
extern __int64 (*GameData_207e8c8[])();
extern __int64 (*GameData_207eb28[])();
extern __int64 (*GameData_207ee08[])();
extern __int64 (*GameData_207f290[])();
extern __int64 (*GameData_207f360[])();
extern char* GameData_207f428[30];
extern char* GameData_207f4d0[9];
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212c730;
extern __int64* GameData_212c738[2];
extern __int64 GameData_212c7b8[10];
extern __int64* GameData_212d468[5];
extern __int64* GameData_212d560[9];
extern __int64* GameData_212d630[11];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 GameData_212d690;
extern __int64* GameData_212d6a8;
extern __int64* GameData_212e348;
extern __int64* GameData_212ea58;
extern __int64* GameData_212f4e0[3];
extern int GameData_2174ef8;
extern int GameData_2174efc;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21caab0;
extern __int64 GameData_21ed0a0;
extern __int64 GameData_21f49b8;
extern __int64 GameData_2241428;
extern __int64 GameData_22416b0;
extern __int64 GameData_22416c0;
extern __int64 GameData_22416f0;
extern __int64 GameData_225d6f8;
extern int GameData_225d700;
extern __int16 GameData_225d720;
extern char GameData_225e280;
extern char GameData_225e558;
__int64 GameRoutine_10c910(_QWORD, _QWORD);
__int64 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_12b50c0(_QWORD, _QWORD);
__int64 GameRoutine_13261c0(_QWORD);
__int64 GameRoutine_1329470(_QWORD);
__int64 GameRoutine_1329ff0(_QWORD);
__int64 GameRoutine_13300a0(_QWORD);
__int64 GameRoutine_13305c0(void);
__int64 GameRoutine_13633c0(void);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14daf80(void);
__int64 GameRoutine_14db2f0(_QWORD);
__int64 GameRoutine_1536e70(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155f480(_QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1560ec0(_QWORD, _QWORD, _QWORD);
float GameRoutine_1561b90(_QWORD, _QWORD);
__int64 GameRoutine_1561c90(_QWORD, _QWORD);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15621a0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1563e00(_QWORD, _QWORD);
__int64 GameRoutine_156c240(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_16503d0(__int64*, int);
__int64 GameRoutine_1674ba0(_QWORD);
__int64 GameRoutine_1676880(_QWORD);
__int64 GameRoutine_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16dd440(_QWORD);
__int64 GameRoutine_16dea40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16e6880(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);
__int64 GameRoutine_1a09d30(_QWORD, _QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_56b600(_QWORD);
__int64 GameRoutine_58dee0(_QWORD, _QWORD);
__int64 GameRoutine_58df60(_QWORD, _QWORD);
__int64 GameRoutine_58fac0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
void __attribute__((noreturn)) GameRoutine_60a230(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_682780(_QWORD);
__int64 GameRoutine_6e5a40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6ead60(_QWORD, _QWORD);
__int64 GameRoutine_7a86e0(_QWORD, _QWORD);
__int64 GameRoutine_821090(_QWORD);
__int64 GameRoutine_8224a0(_QWORD);
__attribute__((swiftcall)) void GameRoutine_a31e60(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void GameRoutine_a32360(PSEUDO_X8, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f83060(_QWORD);
__int64 GameRoutine_ffbe0(_QWORD, _QWORD);
__int64 GameRoutine_1329ff0_alt1(__int64) __asm__("GameRoutine_1329ff0");
bool GameRoutine_1329470_alt1(unsigned int*) __asm__("GameRoutine_1329470");
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
void GameSideStoryData_12b50c0(__int64, __int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_1679140(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Alignment_56b600(__int64 result);
__int64 AutoPlay_f83060();
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 PageTab_16e6880(__int64, int, int, int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
const char* Pane_58fac0(__int64, const char*);
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 ui_Manager_instance_;
void GameRoutine_156c240_alt1(__int64*) __asm__("GameRoutine_156c240");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_156c910_alt1(__int64, const char*, int,
                              ...) __asm__("GameRoutine_156c910");
void GameRoutine_190a0c0_alt1(float*, __int64, float*, _QWORD*,
                              __int64) __asm__("GameRoutine_190a0c0");
void LayoutAccessor_1562060(__int64*, __int64, _BYTE*);
__int64 GameHr_1627bf0(__int64 a1);
void GameHr_1650120(__int64 a1, __int64 a2);
void GameHr_1650630(__int64 a1, int a2);

__int64 GameHr_1627bf0(__int64 a1)
{
  __int64* v2;
  __int64 result;
  int v4;
  __int64 v5;
  int v6;
  __int64* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  char v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    __int64 v25;
    __int64 v26;
  } v25_;

  v2 = GameData_212f4e0[0];
  result = *GameData_212f4e0[0];
  if (*GameData_212f4e0[0] != 0) {
    result = AutoPlay_f83060();
    if ((_DWORD)result != 0) {
      v4 = result;
      v5 = *(_QWORD*)a1;
      if (v4 < 2) {
        result = ui_LayoutAccessor_SetPaneVisible(v5, (__int64)"L_PageTab", 0);
        if (*v2 != 0) {
          GameHr_1562680(*(_QWORD*)a1, "FaceOn", 0x1.0000000000000p+0f);
          v17 = *GameData_212ea58;
          result = AutoPlay_f83060();
          if ((int)result >= 1) {
            v18 = *(__int64**)(v17 + 712);
            v19 = v18[1];
            if (v19 != 0) {
              v20 = *v18;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                        memory_order_relaxed);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                        memory_order_relaxed);
              if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
                std___1___shared_weak_count___release_weak(v19);
              }
              if (*(_QWORD*)(v19 + 8) != -1) {
                v21 =
                    ui_LayoutAccessor_FindPane(*(__int64**)a1, (__int64)"Face");
                if (v21 != 0) {
                  v22 = __dynamic_cast(v21, GameData_212d670[0],
                                       GameData_212d678[0], 0);
                }
                else {
                  v22 = 0;
                }
                v23 = std___1___shared_weak_count_lock(v19);
                if (v23 != 0) {
                  v24 = v23;
                  GameHr_1840740(v22, 0, *(_QWORD*)(v20 + 16), 6u, 1);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
                    std___1___shared_weak_count___release_weak(v24);
                  }
                }
                else {
                  GameHr_1840740(v22, 0, 0, 6u, 1);
                }
              }
              result = std___1___shared_weak_count___release_weak(v19);
            }
          }
        }
        v15 = 1;
      }
      else {
        v6 = v4;
        ui_LayoutAccessor_SetPaneVisible(v5, (__int64)"L_PageTab", 1);
        v7 = *(__int64**)a1;
        v8 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 400LL);
        *(_DWORD*)(a1 + 32) = v6;
        if ((v8 & 0x100000000LL) != 0) {
          v9 = v8 + 1;
        }
        else {
          v9 = 0;
        }
        *(_DWORD*)(a1 + 36) = v9;
        *(_DWORD*)(a1 + 40) = v9;
        LayoutAccessor_1560070((void*)(&v25_.v25), v7, "L_PageTab");
        result = v25_.v26;
        if (v25_.v26 == 0) {
          goto LABEL_28;
        }
        v10 = std___1___shared_weak_count_lock(v25_.v26);
        if (v10 != 0) {
          v11 = v25_.v25;
          v12 = v10;
          if (v25_.v25 != 0) {
            *(_DWORD*)(a1 + 72) = 1;
            v13 = v25_.v26;
            if (v25_.v26 != 0) {
              atomic_fetch_add_explicit(
                  (atomic_ullong* volatile)(v25_.v26 + 16), 1u,
                  memory_order_relaxed);
            }
            v14 = *(_QWORD*)(a1 + 136);
            *(_QWORD*)(a1 + 128) = v11;
            *(_QWORD*)(a1 + 136) = v13;
            if (v14 != 0) {
              std___1___shared_weak_count___release_weak(v14);
            }
            PageTab_16e6880(a1 + 32, 16, 14, 15);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak(v12);
          }
        }
        result = v25_.v26;
        if (v25_.v26 != 0) {
          result = std___1___shared_weak_count___release_weak(v25_.v26);
          v15 = 0;
        }
        else {
        LABEL_28:
          v15 = 0;
        }
      }
      v16 = 0;
      *(_BYTE*)(a1 + 170) = v15;
    }
    else {
      v16 = 1;
    }
    *(_BYTE*)(a1 + 169) = v16;
  }
  return result;
}

void GameHr_1650120(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  int v16;
  int v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  const char* v24;
  int v25;
  const char* v26;
  const char* v27;
  struct {
    __int64 v28[4];
    __int64 v29;
    __int64 v30;
    __int64 v31;
  } v28_;
  float v32;
  _DWORD v33[2];

  v3 = *(_QWORD*)(a1 + 8);
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3);
    if (v5 != 0) {
      v6 = *(__int64**)a1;
      v7 = v5;
      if (v6 != nullptr && *(_QWORD*)(a2 + 8) != 0) {
        ui_LayoutAccessor_SetPaneVisible((__int64)v6, (__int64)"Icon",
                                         *(_QWORD*)a2 != 0);
        if (*(_QWORD*)a2 != 0) {
          v8 = ui_Manager_instance_;
          v9 = ui_LayoutAccessor_FindPane(v6, (__int64)"Icon");
          if (v9 != 0) {
            v10 =
                __dynamic_cast(v9, GameData_212d670[0], GameData_212d678[0], 0);
          }
          else {
            v10 = 0;
          }
          Manager_136a920(v8 + 1264, v10, 0, 7u, *(_BYTE**)a2);
        }
        v11 = *(_QWORD*)(a2 + 8);
        if (*(_BYTE*)(a2 + 16) == 1) {
          LayoutAccessor_1562060(v6, (__int64)"T_Txt", *(_BYTE**)(a2 + 8));
        }
        else if (v11 != 0) {
          v12 = ui_LayoutAccessor_FindTextBox(v6, (__int64)"T_Txt");
          if (v12 != 0) {
            GameRoutine_156c5d0_alt1(v12, v11, 0);
          }
        }
        v13 = ui_LayoutAccessor_FindTextBox(v6, (__int64)"T_Txt");
        if (v13 != 0) {
          v14 = v13;
          v15 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v6, (__int64)"T_Txt");
          if (v15 != nullptr) {
            GameRoutine_190a0c0_alt1((float*)v28_.v28, (__int64)v33, &v32, v15,
                                     v15[27]);
            v16 = v33[0];
            v17 = v33[1];
          }
          else {
            v16 = 0;
            v17 = 0;
          }
          v18 = *(_BYTE*)(v14 + 88);
          *(_DWORD*)(v14 + 80) = v16;
          *(_DWORD*)(v14 + 84) = v17;
          *(_BYTE*)(v14 + 88) = v18 | 0x10;
        }
        v19 = ui_LayoutAccessor_FindAlignment(v6, (__int64)"A_Txt");
        if (v19 != 0) {
          Alignment_56b600(v19);
          v20 = v6[1];
          if (v20 != 0) {
            v21 = std___1___shared_weak_count_lock(v20);
            if (v21 != 0) {
              v22 = v21;
              if (*v6 != 0) {
                ControlCreator_13633c0(*v6);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
                std___1___shared_weak_count___release_weak(v22);
              }
            }
          }
        }
        v28_.v30 = 0;
        v28_.v31 = 0;
        v28_.v28[3] = 0;
        v28_.v29 = 0;
        v28_.v28[2] = 0;
        v23 = ui_LayoutAccessor_FindPane(v6, (__int64)&GameData_1ac6c8b);
        v28_.v28[0] = v23;
        v28_.v28[1] = ui_LayoutAccessor_FindPane(v6, (__int64)"A_Txt");
        BYTE1(v28_.v31) = 1;
        if (v23 != 0) {
          v24 = Pane_58fac0(v23, "Margin_Width");
          if (v24 != nullptr) {
            *(float*)&v28_.v29 = (float)*(int*)&v24[*((unsigned int*)v24 + 1)];
          }
        }
        GameRoutine_156c240_alt1(v28_.v28);
        v25 = *(_DWORD*)(a2 + 20);
        v26 = "Miasma";
        if (v25 != 1) {
          v26 = nullptr;
        }
        if (v25 != 0) {
          v27 = v26;
        }
        else {
          v27 = "Default";
        }
        if (v27 != nullptr) {
          LayoutAccessor_1562cf0((__int64)v6, v27);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
}

void GameHr_1650630(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  int v17;
  int v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  int v27;
  int v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  const char* v35;
  struct {
    __int64* v36;
    __int64 v37;
    unsigned __int64 v38;
    unsigned __int64 v39;
    unsigned __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
  } v36_;
  float v54;
  _DWORD v55[2];

  v3 = *(_QWORD*)(a1 + 8);
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3);
    if (v5 != 0) {
      v6 = *(__int64**)a1;
      v7 = v5;
      if (v6 != nullptr) {
        if (a2 < 1) {
          GameHr_1562680((__int64)v6, "Destroy", 0x1.0000000000000p+0f);
          v36_.v41 = -1;
          v36_.v42 = -1;
          v36_.v43 = -1;
          v36_.v44 = -1;
          v19 = *msg_MessageManager_instance__ptr[0];
          v36_.v45 = -1;
          v36_.v46 = -1;
          v36_.v47 = -1;
          v36_.v48 = -1;
          v36_.v49 = -1;
          v36_.v50 = -1;
          v36_.v51 = -1;
          v36_.v52 = -1;
          v36_.v36 = GameData_212e348 + 2;
          v36_.v37 = 0xFFFF0001FFFF0000LL;
          v36_.v38 = 0xFFFF0004FFFF0002LL;
          v36_.v39 = 0xFFFF0006FFFF0005LL;
          v36_.v53 = 8;
          v36_.v40 = 0xFFFF0008FFFF0007LL;
          v20 = GameRoutine_a4dbe0_alt1(
              v19, "MID_Gmap_SpotInfo_Dungeon_Enemy_Destroy", 0);
          if (v20 != nullptr) {
            v21 = (__int64)v20;
            v22 = ui_LayoutAccessor_FindTextBox(v6, (__int64)"T_TitleLv");
            if (v22 != 0) {
              GameRoutine_156c5d0_alt1(v22, v21, 0);
            }
          }
        }
        else {
          GameHr_1562680((__int64)v6, "Lv", 0x1.0000000000000p+0f);
          v36_.v41 = -1;
          v36_.v42 = -1;
          v36_.v43 = -1;
          v36_.v44 = -1;
          v8 = *msg_MessageManager_instance__ptr[0];
          v36_.v45 = -1;
          v36_.v46 = -1;
          v36_.v47 = -1;
          v36_.v48 = -1;
          v36_.v49 = -1;
          v36_.v50 = -1;
          v36_.v51 = -1;
          v36_.v52 = -1;
          v36_.v36 = GameData_212e348 + 2;
          v36_.v37 = 0xFFFF0001FFFF0000LL;
          v36_.v38 = 0xFFFF0004FFFF0002LL;
          v36_.v39 = 0xFFFF0006FFFF0005LL;
          v36_.v53 = 8;
          v36_.v40 = 0xFFFF0008FFFF0007LL;
          v9 = GameRoutine_a4dbe0_alt1(v8, "MID_Gmap_SpotInfo_Dungeon", 0);
          if (v9 != nullptr) {
            v10 = (__int64)v9;
            v11 = ui_LayoutAccessor_FindTextBox(v6, (__int64)"T_TitleLv");
            if (v11 != 0) {
              GameRoutine_156c5d0_alt1(v11, v10, 0);
            }
          }
          v12 = ui_LayoutAccessor_FindPane(v6, (__int64)"T_Num");
          if (v12 != 0) {
            v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d690, 0);
            if (v13 != 0) {
              GameRoutine_156c910_alt1(v13, "%d", 1, (unsigned int)a2);
            }
          }
          v14 = ui_LayoutAccessor_FindTextBox(v6, (__int64)"T_Num");
          if (v14 != 0) {
            v15 = v14;
            v16 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v6, (__int64)"T_Num");
            if (v16 != nullptr) {
              GameRoutine_190a0c0_alt1((float*)&v36_.v36, (__int64)v55, &v54,
                                       v16, v16[27]);
              v17 = v55[0];
              v18 = v55[1];
            }
            else {
              v17 = 0;
              v18 = 0;
            }
            v23 = *(_BYTE*)(v15 + 88);
            *(_DWORD*)(v15 + 80) = v17;
            *(_DWORD*)(v15 + 84) = v18;
            *(_BYTE*)(v15 + 88) = v23 | 0x10;
          }
        }
        v24 = ui_LayoutAccessor_FindTextBox(v6, (__int64)"T_TitleLv");
        if (v24 != 0) {
          v25 = v24;
          v26 =
              (_QWORD*)ui_LayoutAccessor_FindTextBox(v6, (__int64)"T_TitleLv");
          if (v26 != nullptr) {
            GameRoutine_190a0c0_alt1((float*)&v36_.v36, (__int64)v55, &v54, v26,
                                     v26[27]);
            v27 = v55[0];
            v28 = v55[1];
          }
          else {
            v27 = 0;
            v28 = 0;
          }
          v29 = *(_BYTE*)(v25 + 88);
          *(_DWORD*)(v25 + 80) = v27;
          *(_DWORD*)(v25 + 84) = v28;
          *(_BYTE*)(v25 + 88) = v29 | 0x10;
        }
        v30 = ui_LayoutAccessor_FindAlignment(v6, (__int64)"A_Txt");
        if (v30 != 0) {
          Alignment_56b600(v30);
          v31 = v6[1];
          if (v31 != 0) {
            v32 = std___1___shared_weak_count_lock(v31);
            if (v32 != 0) {
              v33 = v32;
              if (*v6 != 0) {
                ControlCreator_13633c0(*v6);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
                std___1___shared_weak_count___release_weak(v33);
              }
            }
          }
        }
        v36_.v41 = 0;
        v36_.v42 = 0;
        v36_.v39 = 0;
        v36_.v40 = 0;
        v36_.v38 = 0;
        v34 = ui_LayoutAccessor_FindPane(v6, (__int64)&GameData_1ac6c8b);
        v36_.v36 = (__int64*)v34;
        v36_.v37 = ui_LayoutAccessor_FindPane(v6, (__int64)"A_Txt");
        BYTE1(v36_.v42) = 1;
        if (v34 != 0) {
          v35 = Pane_58fac0(v34, "Margin_Width");
          if (v35 != nullptr) {
            *(float*)&v36_.v40 = (float)*(int*)&v35[*((unsigned int*)v35 + 1)];
          }
        }
        GameRoutine_156c240_alt1((__int64*)&v36_.v36);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
}

__int64 GameHr_1651740(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned __int8 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = a1[15];
  if (v1 != 0) {
    v3 = *(_QWORD*)(v1 + 64);
    if (v3 != 0 && (unsigned int)GameRoutine_1a09d30(v3, "Hub_Dagsion") == 0) {
      return 8;
    }
  }
  v4 = *(_QWORD*)(GameData_21c96e8 + 8);
  v5 = *(_QWORD**)(v4 + 8);
  v6 = *(_QWORD**)(v4 + 16);
  while (v5 != v6) {
    v7 = (_QWORD*)*v5;
    if (*(_QWORD**)*v5 == a1) {
      v8 = v7[12];
      if (v8 != 0 && (unsigned int)*(unsigned __int8*)(v8 + 32) - 3 < 2) {
        if ((v7[68] & 8) != 0) {
          return 6;
        }
        break;
      }
    }
    ++v5;
  }
  v9 = (unsigned __int8)GameRoutine_13261c0(a1);
  result = 7;
  switch (v9) {
  case 0LL:
    return result;
  case 1LL:
    result = 9;
    break;
  case 2LL:
    result = 21;
    break;
  case 3LL:
    result = 20;
    break;
  case 4LL:
    result = 5;
    break;
  case 5LL:
    v11 = GameRoutine_821090(4);
    if (GameData_21caab0 == 0) {
      goto LABEL_34;
    }
    v12 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v11);
    if (v12 == 0 || *(int*)(v12 + 32) < 1 || (GameRoutine_14daf80() & 1) == 0) {
      goto LABEL_34;
    }
    v13 = (unsigned __int8)GameRoutine_13261c0(a1);
    result = 15;
    if (v13 == 5) {
      v14 = a1[18];
      if (v14 != 0) {
        v15 = *(_BYTE*)(*(_QWORD*)v14 + 32LL);
        goto LABEL_42;
      }
    }
    break;
  case 6LL:
    if ((GameRoutine_1536e70(0) & 1) == 0 || (GameRoutine_14daf80() & 1) == 0) {
      goto LABEL_34;
    }
    v16 = (unsigned __int8)GameRoutine_13261c0(a1);
    result = 15;
    if (v16 == 6) {
      v17 = a1[19];
      if (v17 != 0) {
        v15 = *(_BYTE*)(*(_QWORD*)v17 + 81LL);
      LABEL_42:
        if (v15 > 8u) {
          result = 22;
        }
        else {
          result = GameData_1beb938[v15];
        }
      }
    }
    break;
  case 7LL:
    v18 = GameRoutine_821090(8);
    if (GameData_21caab0 != 0 &&
        (v19 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v18)) !=
            0 &&
        *(int*)(v19 + 32) >= 1 && (GameRoutine_14daf80() & 1) != 0) {
      result = 0;
    }
    else {
    LABEL_34:
      result = 15;
    }
    break;
  case 8LL:
    result = 4;
    break;
  case 9LL:
    result = 3;
    break;
  case 10LL:
    result = 1;
    break;
  case 14LL:
    result = 2;
    break;
  default:
    result = 22;
    break;
  }
  return result;
}

__int64 GameHr_16602f0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11[2];
  __int64 v12;
  __int64 v13;

  GameRoutine_1560070((void*)&v12, *(_QWORD*)a1, "L_DagsionHp");
  result = v13;
  if (v13 == 0) {
    return result;
  }
  v3 = GameRoutine_1a0a0c0(v13);
  v4 = v12;
  result = v13;
  if (v3 != 0) {
    v5 = v12;
  }
  else {
    v5 = 0;
  }
  if (v13 != 0) {
    result = GameRoutine_1a09c50(v13);
  }
  if (v5 == 0) {
    goto LABEL_13;
  }
  v6 = *(_QWORD*)(a1 + 88);
  if ((GameRoutine_14db2f0(result) & 1) == 0) {
    result = GameRoutine_155e830(v4, 0);
    *(_BYTE*)(a1 + 69) = 0;
  LABEL_13:
    if (v3 == 0) {
      return result;
    }
    goto LABEL_14;
  }
  v7 = GameRoutine_13305c0();
  v8 = *(_QWORD*)(v6 + 96);
  v9 = *(_QWORD*)(v7 + 96);
  result = GameRoutine_155e830(v4, v8 == v9);
  *(_BYTE*)(a1 + 69) = v8 == v9;
  if (v8 != v9) {
    goto LABEL_13;
  }
  v11[0] = v5;
  v11[1] = v3;
  v10 = *(_DWORD*)(GameData_22416c0 + 48);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_16503d0(v11, v10);
    result = GameRoutine_1a09c50(v3);
  }
  else {
    result = GameRoutine_16503d0(v11, v10);
  }
  if (GameData_2174ef8 > v10) {
    result = GameRoutine_1562680(v4, "Damage", 1.0);
  }
  GameData_2174ef8 = v10;
  if (v3 != 0) {
  LABEL_14:
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return GameRoutine_1a09c50(v3);
    }
  }
  return result;
}

_QWORD* GameHr_166e890(_QWORD* a1)
{
  _QWORD* result;

  *a1 = GameData_207cad8;
  result = a1 - 26;
  if ((_QWORD*)GameData_225d6f8 == result) {
    GameData_225d6f8 = 0;
    GameData_225d700 = 0;
  }
  return result;
}

__int64 GameHr_166e8c0(_QWORD* a1)
{
  __int64 v1;

  *a1 = GameData_207cad8;
  if ((_QWORD*)GameData_225d6f8 == a1 - 26) {
    GameData_225d6f8 = 0;
    GameData_225d700 = 0;
  }
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
    v1 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v1, a1);
}

__int64 GameHr_166eba0()
{
  __int16* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;

  v0 = (__int16*)&GameData_225e280;
  v1 = GameData_212bf68;
  do {
    v3 = *((_QWORD*)v0 - 4);
    if (v3 != 0) {
      v6 = *((_QWORD*)v0 - 3);
      if (v3 == v6) {
        goto LABEL_3;
      }
      v7 = *((_QWORD*)v0 - 3);
      do {
        v8 = *(_BYTE*)(v7 - 24);
        v7 -= 24;
        if ((v8 & 1) != 0) {
          v9 = *(_QWORD*)(v6 - 8);
          if (v9 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
              v10 = 128;
            }
            else {
              v10 = 56;
            }
            result = GameRoutine_1a0a4e0(*(_QWORD*)v1 + v10, v9);
          }
        }
        v6 = v7;
      } while (v7 != v3);
      v2 = *((_QWORD*)v0 - 4);
      *((_QWORD*)v0 - 3) = v3;
      v3 = v2;
      if (v2 != 0) {
      LABEL_3:
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v1 + v4, v3);
      }
    }
    v0 -= 28;
  } while (v0 != &GameData_225d720);
  return result;
}

__int64 GameHr_166ec90()
{
  char* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;

  v0 = &GameData_225e558;
  v1 = GameData_212bf68;
  do {
    v3 = *((_QWORD*)v0 - 4);
    if (v3 != 0) {
      v6 = *((_QWORD*)v0 - 3);
      if (v3 == v6) {
        goto LABEL_3;
      }
      v7 = *((_QWORD*)v0 - 3);
      do {
        v8 = *(_BYTE*)(v7 - 24);
        v7 -= 24;
        if ((v8 & 1) != 0) {
          v9 = *(_QWORD*)(v6 - 8);
          if (v9 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
              v10 = 128;
            }
            else {
              v10 = 56;
            }
            result = GameRoutine_1a0a4e0(*(_QWORD*)v1 + v10, v9);
          }
        }
        v6 = v7;
      } while (v7 != v3);
      v2 = *((_QWORD*)v0 - 4);
      *((_QWORD*)v0 - 3) = v3;
      v3 = v2;
      if (v2 != 0) {
      LABEL_3:
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v1 + v4, v3);
      }
    }
    v0 -= 56;
  } while (v0 != &GameData_225e280);
  return result;
}

__int64 GameHr_1670c60(__int64 a1, char a2, char a3)
{
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  int v19;

  v6 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1088, 16, 0);
  v17 = 0;
  v18 = 0;
  GameRoutine_16dcd30(v6, "ConfigMenu", &v17, 0);
  v7 = GameData_212d6a8;
  v8 = v18;
  *(_QWORD*)v6 = GameData_212d6a8 + 2;
  *(_QWORD*)(v6 + 176) = v7 + 143;
  *(_QWORD*)(v6 + 1056) = v7 + 169;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    GameRoutine_1a09c50(v8);
  }
  v19 = 0;
  *(_QWORD*)v6 = GameData_207cb88;
  *(_BYTE*)(v6 + 1077) = a3 & 1;
  *(_QWORD*)(v6 + 1056) = GameData_207d0e0;
  *(_QWORD*)(v6 + 176) = GameData_207d010;
  *(_DWORD*)(v6 + 656) = 2;
  *(_QWORD*)(v6 + 1064) = &GameData_225d720;
  *(_DWORD*)(v6 + 1072) = 52;
  *(_BYTE*)(v6 + 1076) = a2 & 1;
  *(_DWORD*)(v6 + 660) = a2 & 1;
  *(_DWORD*)(v6 + 664) = a2 & 1;
  *(_QWORD*)(v6 + 792) = *(_QWORD*)(v6 + 784);
  *(_QWORD*)(v6 + 816) = *(_QWORD*)(v6 + 808);
  GameRoutine_6e5a40(v6 + 784, 3, &v19);
  v9 = *(_QWORD*)(v6 + 816);
  v10 = *(_QWORD*)(v6 + 808);
  v19 = 0;
  v11 = v9 - v10;
  v12 = (v9 - v10) >> 2;
  if (v12 > 2) {
    if (v11 != 12) {
      *(_QWORD*)(v6 + 816) = v10 + 12;
    }
  }
  else {
    GameRoutine_6e5a40(v6 + 808, 3 - v12, &v19);
  }
  GameRoutine_657850(v6, GameData_212c730, "ProcConfigMenu", 1, a1);
  v14 = *(_QWORD**)(v6 + 256);
  v13 = *(_QWORD**)(v6 + 264);
  *(_QWORD*)(v6 + 336) = 0;
  while (v14 != v13) {
    if (*v14 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v14 + 8LL))(*v14);
      v13 = *(_QWORD**)(v6 + 264);
    }
    ++v14;
  }
  v15 = *(_QWORD*)(v6 + 344);
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
    *(_QWORD*)(v6 + 344) = 0;
  }
  *(_QWORD*)(v6 + 264) = *(_QWORD*)(v6 + 256);
  *(_QWORD*)(v6 + 240) = *(_QWORD*)(v6 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v6 + 1024LL))(v6);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 1032LL))(v6);
}

__int64 GameHr_1670ea0(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 result;
  char* v14;
  char* v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;

  v2 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1088, 16, 0);
  v24 = 0;
  v25 = 0;
  GameRoutine_16dcd30(v2, "ConfigMenu", &v24, 0);
  v3 = GameData_212d6a8;
  v4 = v25;
  *(_QWORD*)v2 = GameData_212d6a8 + 2;
  *(_QWORD*)(v2 + 176) = v3 + 143;
  *(_QWORD*)(v2 + 1056) = v3 + 169;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    GameRoutine_1a09c50(v4);
  }
  v26 = 0;
  *(_QWORD*)v2 = GameData_207cb88;
  *(_QWORD*)(v2 + 1056) = GameData_207d0e0;
  *(_QWORD*)(v2 + 176) = GameData_207d010;
  *(_QWORD*)(v2 + 1064) = &GameData_225e280;
  *(_DWORD*)(v2 + 1072) = 13;
  *(_QWORD*)(v2 + 656) = 0x100000002LL;
  *(_WORD*)(v2 + 1076) = 1;
  *(_DWORD*)(v2 + 664) = 1;
  *(_QWORD*)(v2 + 792) = *(_QWORD*)(v2 + 784);
  *(_QWORD*)(v2 + 816) = *(_QWORD*)(v2 + 808);
  GameRoutine_6e5a40(v2 + 784, 3, &v26);
  v5 = *(_QWORD*)(v2 + 816);
  v6 = *(_QWORD*)(v2 + 808);
  v26 = 0;
  v7 = v5 - v6;
  v8 = (v5 - v6) >> 2;
  if (v8 > 2) {
    if (v7 != 12) {
      *(_QWORD*)(v2 + 816) = v6 + 12;
    }
  }
  else {
    GameRoutine_6e5a40(v2 + 808, 3 - v8, &v26);
  }
  *(_QWORD*)v2 = GameData_207ee08;
  *(_QWORD*)(v2 + 176) = GameData_207f290;
  *(_QWORD*)(v2 + 1056) = GameData_207f360;
  if (*GameData_212d560[0] != 0) {
    v9 = GameRoutine_155fbe0(*GameData_212d560[0] + 40, "L_KeyHelp");
    GameRoutine_1561c90(v9, 40);
  }
  GameRoutine_657850(v2, GameData_212c730, "ProcBmapConfigMenu", 1, a1);
  v11 = *(_QWORD**)(v2 + 256);
  v10 = *(_QWORD**)(v2 + 264);
  *(_QWORD*)(v2 + 336) = 0;
  while (v11 != v10) {
    if (*v11 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v11 + 8LL))(*v11);
      v10 = *(_QWORD**)(v2 + 264);
    }
    ++v11;
  }
  v12 = *(_QWORD*)(v2 + 344);
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    *(_QWORD*)(v2 + 344) = 0;
  }
  *(_QWORD*)(v2 + 264) = *(_QWORD*)(v2 + 256);
  *(_QWORD*)(v2 + 240) = *(_QWORD*)(v2 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 1024LL))(v2);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 1032LL))(v2);
  if ((GameData_2174efc & 0x80000000) == 0) {
    v14 = *(char**)(v2 + 232);
    v15 = *(char**)(v2 + 240);
    if (v14 != v15) {
      v16 = v15 - v14 - 8;
      v17 = (v16 >> 3) + 1;
      if (v16 >= 0x18) {
        v22 = 0;
        while (GameData_2174efc != (_DWORD)v22) {
          if (GameData_2174efc == (_DWORD)v22 + 1) {
            v14 += 8;
            goto LABEL_36;
          }
          if (GameData_2174efc == (_DWORD)v22 + 2) {
            v14 += 16;
            goto LABEL_36;
          }
          if (GameData_2174efc == (_DWORD)v22 + 3) {
            v14 += 24;
            goto LABEL_36;
          }
          v14 += 32;
          v22 += 4;
          v18 = v22;
          if ((v17 & 0x3FFFFFFFFFFFFFFCLL) == v22) {
            goto LABEL_21;
          }
        }
        goto LABEL_36;
      }
      v18 = 0;
    LABEL_21:
      v19 = v17 & 3;
      if (v19 != 0) {
        v20 = GameData_2174efc - v18;
        while (v20 != 0) {
          v14 += 8;
          --v20;
          if (--v19 == 0) {
            goto LABEL_25;
          }
        }
      LABEL_36:
        v21 = *(_QWORD*)v14;
      LABEL_37:
        result = *(_QWORD*)(v2 + 336);
        if (result != v21) {
          if (result != 0) {
            (*(void (**)(__int64))(*(_QWORD*)result + 168LL))(result);
          }
          *(_QWORD*)(v2 + 336) = v21;
          GameRoutine_16dea40(v2, 0, 1, 0);
          result = *(_QWORD*)(v2 + 336);
          if (result == 0) {
            v23 = 4;
          LABEL_47:
            *(_DWORD*)(v2 + 356) = *(_DWORD*)(v2 + 356) & 0xFFFFFFFB | v23;
            return result;
          }
          (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
          result = *(_QWORD*)(v2 + 336);
        }
        v23 = 4;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
          if ((result & 1) != 0) {
            v23 = 4;
          }
          else {
            v23 = 0;
          }
        }
        goto LABEL_47;
      }
    }
  LABEL_25:
    v21 = 0;
    goto LABEL_37;
  }
  return result;
}

__int64 GameHr_16716e0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  _QWORD* v5;
  __int64 (**v6)();
  __int64 v7;
  unsigned int v8;
  __int64** v9;
  __int64 v10;
  __int64** v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64** v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64** v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64** v28;
  __int64 v29;
  __int64* v30;
  char v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64** v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64** v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64** v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64** v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64** v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  __int64* v73;
  __int64* v74;
  __int64* v75;
  __int64* v76;
  char v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 (**v86)();
  __int64 v87;
  __int64 v88;
  int v89;
  __int64* v90;
  __int64* v91;
  __int64* v92;
  __int64* v93;
  char v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  __int64* v104;
  __int64* v105;
  __int64 v106;
  __int64* v107;
  __int64* v108;

  v1 = *(_DWORD*)(result + 1072);
  if (v1 >= 1) {
    v2 = result;
    v3 = 0;
    v4 = GameData_212d630[0];
    v5 = (_QWORD*)GameData_212bf68;
    v105 = GameData_212d630[0] + 2;
    while (1) {
      v7 = *(_QWORD*)(v2 + 1064) + 56 * v3;
      v8 = *(unsigned __int8*)(v7 + 1);
      if (v8 <= 3) {
        if (*(unsigned __int8*)(v7 + 1) > 1u) {
          if (v8 == 2) {
            v42 = (__int64**)GameRoutine_651b90(*v5, 144, 16, 0);
            v43 = *(_QWORD*)(v7 + 8);
            v11 = v42;
            *v42 = v4 + 2;
            v42[1] = nullptr;
            v44 = GameRoutine_1a09c70(v43);
            if (v44 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_185;
            }
            v46 = v44;
            if (v44 >= 0x17) {
              if ((v44 | 7) == 0x17) {
                v82 = 26;
              }
              else {
                v82 = (v44 | 7) + 1;
              }
              v47 = GameRoutine_651b90(*v5, v82, 16, 0);
              v11[3] = (__int64*)v46;
              v11[4] = (__int64*)v47;
              v11[2] = (__int64*)(v82 | 1);
            }
            else {
              v47 = (__int64)v11 + 17;
              *((_BYTE*)v11 + 16) = 2 * v44;
              if (v44 == 0) {
              LABEL_112:
                *(_BYTE*)(v47 + v46) = 0;
                *((_DWORD*)v11 + 10) = 0;
                v11[6] = nullptr;
                v11[7] = nullptr;
                v11[8] = nullptr;
                v11[9] = nullptr;
                v11[11] = (__int64*)v7;
                *((_WORD*)v11 + 40) = 257;
                *v11 = (__int64*)GameData_207d598;
                *((_BYTE*)v11 + 82) = 1;
                *((_BYTE*)v11 + 96) = 1;
                if (*(_DWORD*)(v7 + 48) == 22) {
                  v107 = (__int64*)&GameData_1ac12a9;
                  v106 = GameRoutine_7a86e0(&GameData_1ac12a9, v45);
                  if (GameData_21caab0 == 0 ||
                      (v83 = GameRoutine_65c580(
                           *(_QWORD*)(GameData_21caab0 + 48), &v106)) == 0 ||
                      *(_DWORD*)(v83 + 32) == 0) {
                    *((_BYTE*)v11 + 96) = 0;
                  }
                }
                v11[13] = nullptr;
                v11[14] = nullptr;
                v11[15] = nullptr;
                v11[16] = nullptr;
                *((_DWORD*)v11 + 34) = 1;
                *v11 = (__int64*)GameData_207da50;
                *((_DWORD*)v11 + 35) = *(_DWORD*)(v7 + 48);
                v6 = GameData_207dc98;
                goto LABEL_5;
              }
            }
            GameRoutine_1a0b940(v47, v43, v46);
            goto LABEL_112;
          }
          if (v8 != 3) {
            goto LABEL_7;
          }
          v22 = (__int64**)GameRoutine_651b90(*v5, 144, 16, 0);
          v23 = *(_QWORD*)(v7 + 8);
          v11 = v22;
          *v22 = v4 + 2;
          v22[1] = nullptr;
          v24 = GameRoutine_1a09c70(v23);
          if (v24 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_185;
          }
          v26 = v24;
          if (v24 >= 0x17) {
            if ((v24 | 7) == 0x17) {
              v68 = 26;
            }
            else {
              v68 = (v24 | 7) + 1;
            }
            v27 = GameRoutine_651b90(*v5, v68, 16, 0);
            v11[3] = (__int64*)v26;
            v11[4] = (__int64*)v27;
            v11[2] = (__int64*)(v68 | 1);
          }
          else {
            v27 = (__int64)v11 + 17;
            *((_BYTE*)v11 + 16) = 2 * v24;
            if (v24 == 0) {
            LABEL_71:
              *(_BYTE*)(v27 + v26) = 0;
              *((_DWORD*)v11 + 10) = 0;
              v11[6] = nullptr;
              v11[7] = nullptr;
              v11[8] = nullptr;
              v11[9] = nullptr;
              v11[11] = (__int64*)v7;
              *((_WORD*)v11 + 40) = 257;
              *v11 = (__int64*)GameData_207d598;
              *((_BYTE*)v11 + 82) = 1;
              *((_BYTE*)v11 + 96) = 1;
              if (*(_DWORD*)(v7 + 48) == 22) {
                v107 = (__int64*)&GameData_1ac12a9;
                v106 = GameRoutine_7a86e0(&GameData_1ac12a9, v25);
                if (GameData_21caab0 == 0 ||
                    (v69 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                              &v106)) == 0 ||
                    *(_DWORD*)(v69 + 32) == 0) {
                  *((_BYTE*)v11 + 96) = 0;
                }
              }
              v11[13] = nullptr;
              v11[14] = nullptr;
              v11[15] = nullptr;
              v11[16] = nullptr;
              *((_DWORD*)v11 + 34) = 0;
              *v11 = (__int64*)GameData_207da50;
              *((_DWORD*)v11 + 35) = *(_DWORD*)(v7 + 48);
              v6 = GameData_207def8;
              goto LABEL_5;
            }
          }
          GameRoutine_1a0b940(v27, v23, v26);
          goto LABEL_71;
        }
        if (*(_BYTE*)(v7 + 1) == 0) {
          v36 = (__int64**)GameRoutine_651b90(*v5, 104, 16, 0);
          v37 = *(_QWORD*)(v7 + 8);
          v11 = v36;
          *v36 = v105;
          v36[1] = nullptr;
          v38 = GameRoutine_1a09c70(v37);
          if (v38 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_185;
          }
          v40 = v38;
          if (v38 >= 0x17) {
            if ((v38 | 7) == 0x17) {
              v80 = 26;
            }
            else {
              v80 = (v38 | 7) + 1;
            }
            v41 = GameRoutine_651b90(*v5, v80, 16, 0);
            v11[3] = (__int64*)v40;
            v11[4] = (__int64*)v41;
            v11[2] = (__int64*)(v80 | 1);
          }
          else {
            v41 = (__int64)v11 + 17;
            *((_BYTE*)v11 + 16) = 2 * v38;
            if (v38 == 0) {
            LABEL_101:
              *(_BYTE*)(v41 + v40) = 0;
              *((_DWORD*)v11 + 10) = 0;
              v11[6] = nullptr;
              v11[7] = nullptr;
              v11[8] = nullptr;
              v11[9] = nullptr;
              v11[11] = (__int64*)v7;
              *((_WORD*)v11 + 40) = 257;
              *v11 = (__int64*)GameData_207d598;
              *((_BYTE*)v11 + 82) = 1;
              *((_BYTE*)v11 + 96) = 1;
              if (*(_DWORD*)(v7 + 48) == 22) {
                v107 = (__int64*)&GameData_1ac12a9;
                v106 = GameRoutine_7a86e0(&GameData_1ac12a9, v39);
                if (GameData_21caab0 == 0 ||
                    (v81 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                              &v106)) == 0 ||
                    *(_DWORD*)(v81 + 32) == 0) {
                  *((_BYTE*)v11 + 96) = 0;
                }
              }
              v6 = GameData_207d340;
              goto LABEL_5;
            }
          }
          GameRoutine_1a0b940(v41, v37, v40);
          goto LABEL_101;
        }
        v16 = (__int64**)GameRoutine_651b90(*v5, 144, 16, 0);
        v17 = *(_QWORD*)(v7 + 8);
        v11 = v16;
        *v16 = v4 + 2;
        v16[1] = nullptr;
        v18 = GameRoutine_1a09c70(v17);
        if (v18 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_185;
        }
        v20 = v18;
        if (v18 >= 0x17) {
          if ((v18 | 7) == 0x17) {
            v66 = 26;
          }
          else {
            v66 = (v18 | 7) + 1;
          }
          v21 = GameRoutine_651b90(*v5, v66, 16, 0);
          v11[3] = (__int64*)v20;
          v11[4] = (__int64*)v21;
          v11[2] = (__int64*)(v66 | 1);
        }
        else {
          v21 = (__int64)v11 + 17;
          *((_BYTE*)v11 + 16) = 2 * v18;
          if (v18 == 0) {
          LABEL_60:
            *(_BYTE*)(v21 + v20) = 0;
            *((_DWORD*)v11 + 10) = 0;
            v11[6] = nullptr;
            v11[7] = nullptr;
            v11[8] = nullptr;
            v11[9] = nullptr;
            v11[11] = (__int64*)v7;
            *((_WORD*)v11 + 40) = 257;
            *v11 = (__int64*)GameData_207d598;
            *((_BYTE*)v11 + 82) = 1;
            *((_BYTE*)v11 + 96) = 1;
            if (*(_DWORD*)(v7 + 48) == 22) {
              v107 = (__int64*)&GameData_1ac12a9;
              v106 = GameRoutine_7a86e0(&GameData_1ac12a9, v19);
              if (GameData_21caab0 == 0 ||
                  (v67 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                            &v106)) == 0 ||
                  *(_DWORD*)(v67 + 32) == 0) {
                *((_BYTE*)v11 + 96) = 0;
              }
            }
            v11[13] = nullptr;
            v11[14] = nullptr;
            v11[15] = nullptr;
            v11[16] = nullptr;
            *((_DWORD*)v11 + 34) = 0;
            *v11 = (__int64*)GameData_207da50;
            *((_DWORD*)v11 + 35) = *(_DWORD*)(v7 + 48);
            v6 = GameData_207d7d8;
            goto LABEL_5;
          }
        }
        GameRoutine_1a0b940(v21, v17, v20);
        goto LABEL_60;
      }
      if (*(unsigned __int8*)(v7 + 1) <= 5u) {
        if (v8 == 4) {
          v54 = (__int64**)GameRoutine_651b90(*v5, 200, 16, 0);
          v55 = *(_QWORD*)(v7 + 8);
          v11 = v54;
          *v54 = v4 + 2;
          v54[1] = nullptr;
          v56 = GameRoutine_1a09c70(v55);
          if (v56 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_185;
          }
          v58 = v56;
          if (v56 >= 0x17) {
            if ((v56 | 7) == 0x17) {
              v87 = 26;
            }
            else {
              v87 = (v56 | 7) + 1;
            }
            v59 = GameRoutine_651b90(*v5, v87, 16, 0);
            v11[3] = (__int64*)v58;
            v11[4] = (__int64*)v59;
            v11[2] = (__int64*)(v87 | 1);
          }
          else {
            v59 = (__int64)v11 + 17;
            *((_BYTE*)v11 + 16) = 2 * v56;
            if (v56 == 0) {
            LABEL_134:
              *(_BYTE*)(v59 + v58) = 0;
              *((_DWORD*)v11 + 10) = 0;
              v11[6] = nullptr;
              v11[7] = nullptr;
              v11[8] = nullptr;
              v11[9] = nullptr;
              v11[11] = (__int64*)v7;
              *((_WORD*)v11 + 40) = 257;
              *v11 = (__int64*)GameData_207d598;
              *((_BYTE*)v11 + 82) = 1;
              *((_BYTE*)v11 + 96) = 1;
              if (*(_DWORD*)(v7 + 48) == 22) {
                v107 = (__int64*)&GameData_1ac12a9;
                v106 = GameRoutine_7a86e0(&GameData_1ac12a9, v57);
                if (GameData_21caab0 == 0 ||
                    (v88 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                              &v106)) == 0 ||
                    *(_DWORD*)(v88 + 32) == 0) {
                  *((_BYTE*)v11 + 96) = 0;
                }
              }
              v11[13] = nullptr;
              v11[14] = nullptr;
              v11[15] = nullptr;
              v11[16] = nullptr;
              *((_DWORD*)v11 + 34) = 0;
              *v11 = (__int64*)GameData_207da50;
              v89 = *(_DWORD*)(v7 + 48);
              *((_BYTE*)v11 + 184) = 0;
              *((_BYTE*)v11 + 192) = 0;
              v11[18] = nullptr;
              v11[19] = nullptr;
              v11[20] = nullptr;
              v11[21] = nullptr;
              *((_DWORD*)v11 + 35) = v89;
              *v11 = (__int64*)GameData_207e158;
              v90 = GameData_212d468[0];
              *((_BYTE*)v11 + 176) = 0;
              GameRoutine_a31e60((void*)&v106, *v90);
              v91 = v11[19];
              if (v91 != nullptr) {
                v92 = v11[20];
                if (v91 == v92) {
                  goto LABEL_179;
                }
                v93 = v11[20];
                do {
                  v94 = *((_BYTE*)v93 - 24);
                  v93 -= 3;
                  if ((v94 & 1) != 0) {
                    v95 = *(v92 - 1);
                    if (v95 != 0) {
                      if (*(_QWORD*)(*v5 + 200LL) != 0) {
                        v96 = 128;
                      }
                      else {
                        v96 = 56;
                      }
                      GameRoutine_1a0a4e0(*v5 + v96, v95);
                    }
                  }
                  v92 = v93;
                } while (v93 != v91);
                v11[20] = v91;
                v4 = GameData_212d630[0];
                v91 = v11[19];
                if (v91 != nullptr) {
                LABEL_179:
                  if (*(_QWORD*)(*v5 + 200LL) != 0) {
                    v103 = 128;
                  }
                  else {
                    v103 = 56;
                  }
                  GameRoutine_1a0a4e0(*v5 + v103, v91);
                }
              }
              v104 = v107;
              v11[19] = (__int64*)v106;
              v11[20] = v104;
              v11[21] = v108;
              GameRoutine_1674ba0(v11);
              goto LABEL_6;
            }
          }
          GameRoutine_1a0b940(v59, v55, v58);
          goto LABEL_134;
        }
        if (v8 != 5) {
          goto LABEL_7;
        }
        v28 = (__int64**)GameRoutine_651b90(*v5, 200, 16, 0);
        v29 = *(_QWORD*)(v7 + 8);
        v30 = v4;
        v31 = *(_BYTE*)(v2 + 1077);
        v11 = v28;
        *v28 = v30 + 2;
        v28[1] = nullptr;
        v32 = GameRoutine_1a09c70(v29);
        if (v32 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_185;
        }
        v34 = v32;
        if (v32 >= 0x17) {
          if ((v32 | 7) == 0x17) {
            v70 = 26;
          }
          else {
            v70 = (v32 | 7) + 1;
          }
          v35 = GameRoutine_651b90(*v5, v70, 16, 0);
          v11[3] = (__int64*)v34;
          v11[4] = (__int64*)v35;
          v11[2] = (__int64*)(v70 | 1);
        }
        else {
          v35 = (__int64)v11 + 17;
          *((_BYTE*)v11 + 16) = 2 * v32;
          if (v32 == 0) {
          LABEL_81:
            *(_BYTE*)(v35 + v34) = 0;
            *((_DWORD*)v11 + 10) = 0;
            v11[6] = nullptr;
            v11[7] = nullptr;
            v11[8] = nullptr;
            v11[9] = nullptr;
            v11[11] = (__int64*)v7;
            *((_WORD*)v11 + 40) = 257;
            *v11 = (__int64*)GameData_207d598;
            *((_BYTE*)v11 + 82) = 1;
            *((_BYTE*)v11 + 96) = 1;
            if (*(_DWORD*)(v7 + 48) == 22) {
              v107 = (__int64*)&GameData_1ac12a9;
              v106 = GameRoutine_7a86e0(&GameData_1ac12a9, v33);
              if (GameData_21caab0 == 0 ||
                  (v71 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                            &v106)) == 0 ||
                  *(_DWORD*)(v71 + 32) == 0) {
                *((_BYTE*)v11 + 96) = 0;
              }
            }
            v11[13] = nullptr;
            v11[14] = nullptr;
            v11[15] = nullptr;
            v11[16] = nullptr;
            *((_DWORD*)v11 + 34) = 0;
            *v11 = (__int64*)GameData_207da50;
            v72 = *(_DWORD*)(v7 + 48);
            *((_BYTE*)v11 + 184) = 0;
            *((_BYTE*)v11 + 192) = 0;
            v11[18] = nullptr;
            v11[19] = nullptr;
            v11[20] = nullptr;
            v11[21] = nullptr;
            *((_BYTE*)v11 + 176) = 0;
            *((_BYTE*)v11 + 193) = v31;
            *((_DWORD*)v11 + 35) = v72;
            *v11 = (__int64*)GameData_207e3e8;
            v73 = GameData_212d468[0];
            *((_BYTE*)v11 + 194) = 0;
            GameRoutine_a32360((void*)&v106, *v73);
            v74 = v11[19];
            v4 = GameData_212d630[0];
            if (v74 != nullptr) {
              v75 = v11[20];
              if (v74 == v75) {
                goto LABEL_173;
              }
              v76 = v11[20];
              do {
                v77 = *((_BYTE*)v76 - 24);
                v76 -= 3;
                if ((v77 & 1) != 0) {
                  v78 = *(v75 - 1);
                  if (v78 != 0) {
                    if (*(_QWORD*)(*v5 + 200LL) != 0) {
                      v79 = 128;
                    }
                    else {
                      v79 = 56;
                    }
                    GameRoutine_1a0a4e0(*v5 + v79, v78);
                  }
                }
                v75 = v76;
              } while (v76 != v74);
              v11[20] = v74;
              v4 = GameData_212d630[0];
              v74 = v11[19];
              if (v74 != nullptr) {
              LABEL_173:
                if (*(_QWORD*)(*v5 + 200LL) != 0) {
                  v101 = 128;
                }
                else {
                  v101 = 56;
                }
                GameRoutine_1a0a4e0(*v5 + v101, v74);
              }
            }
            v102 = v107;
            v11[19] = (__int64*)v106;
            v11[20] = v102;
            v11[21] = v108;
            GameRoutine_1676880(v11);
            goto LABEL_6;
          }
        }
        GameRoutine_1a0b940(v35, v29, v34);
        goto LABEL_81;
      }
      if (v8 == 6) {
        v48 = (__int64**)GameRoutine_651b90(*v5, 152, 16, 0);
        v49 = *(_QWORD*)(v7 + 8);
        v11 = v48;
        *v48 = v4 + 2;
        v48[1] = nullptr;
        v50 = GameRoutine_1a09c70(v49);
        if (v50 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_185;
        }
        v52 = v50;
        if (v50 >= 0x17) {
          if ((v50 | 7) == 0x17) {
            v84 = 26;
          }
          else {
            v84 = (v50 | 7) + 1;
          }
          v53 = GameRoutine_651b90(*v5, v84, 16, 0);
          v11[3] = (__int64*)v52;
          v11[4] = (__int64*)v53;
          v11[2] = (__int64*)(v84 | 1);
        }
        else {
          v53 = (__int64)v11 + 17;
          *((_BYTE*)v11 + 16) = 2 * v50;
          if (v50 == 0) {
            goto LABEL_123;
          }
        }
        GameRoutine_1a0b940(v53, v49, v52);
      LABEL_123:
        *(_BYTE*)(v53 + v52) = 0;
        *((_DWORD*)v11 + 10) = 0;
        v11[6] = nullptr;
        v11[7] = nullptr;
        v11[8] = nullptr;
        v11[9] = nullptr;
        v11[11] = (__int64*)v7;
        *((_WORD*)v11 + 40) = 257;
        *v11 = (__int64*)GameData_207d598;
        *((_BYTE*)v11 + 82) = 1;
        *((_BYTE*)v11 + 96) = 1;
        if (*(_DWORD*)(v7 + 48) == 22) {
          v107 = (__int64*)&GameData_1ac12a9;
          v106 = GameRoutine_7a86e0(&GameData_1ac12a9, v51);
          if (GameData_21caab0 == 0 ||
              (v85 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                        &v106)) == 0 ||
              *(_DWORD*)(v85 + 32) == 0) {
            *((_BYTE*)v11 + 96) = 0;
          }
        }
        v11[13] = nullptr;
        v11[14] = nullptr;
        v11[15] = nullptr;
        v11[16] = nullptr;
        *((_DWORD*)v11 + 34) = 1;
        *v11 = (__int64*)GameData_207da50;
        *((_DWORD*)v11 + 35) = *(_DWORD*)(v7 + 48);
        v86 = GameData_207e668;
      LABEL_171:
        *v11 = (__int64*)v86;
        *((_WORD*)v11 + 72) = 0;
        goto LABEL_6;
      }
      if (v8 == 7) {
        v60 = (__int64**)GameRoutine_651b90(*v5, 152, 16, 0);
        v61 = *(_QWORD*)(v7 + 8);
        v11 = v60;
        *v60 = v4 + 2;
        v60[1] = nullptr;
        v62 = GameRoutine_1a09c70(v61);
        if (v62 >= 0xFFFFFFFFFFFFFFF7LL) {
        LABEL_185:
          GameRoutine_60a1d0();
        }
        v64 = v62;
        if (v62 >= 0x17) {
          if ((v62 | 7) == 0x17) {
            v99 = 26;
          }
          else {
            v99 = (v62 | 7) + 1;
          }
          v65 = GameRoutine_651b90(*v5, v99, 16, 0);
          v11[3] = (__int64*)v64;
          v11[4] = (__int64*)v65;
          v11[2] = (__int64*)(v99 | 1);
        }
        else {
          v65 = (__int64)v11 + 17;
          *((_BYTE*)v11 + 16) = 2 * v62;
          if (v62 == 0) {
          LABEL_165:
            *(_BYTE*)(v65 + v64) = 0;
            *((_DWORD*)v11 + 10) = 0;
            v11[6] = nullptr;
            v11[7] = nullptr;
            v11[8] = nullptr;
            v11[9] = nullptr;
            v11[11] = (__int64*)v7;
            *((_WORD*)v11 + 40) = 257;
            *v11 = (__int64*)GameData_207d598;
            *((_BYTE*)v11 + 82) = 1;
            *((_BYTE*)v11 + 96) = 1;
            if (*(_DWORD*)(v7 + 48) == 22) {
              v107 = (__int64*)&GameData_1ac12a9;
              v106 = GameRoutine_7a86e0(&GameData_1ac12a9, v63);
              if (GameData_21caab0 == 0 ||
                  (v100 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                             &v106)) == 0 ||
                  *(_DWORD*)(v100 + 32) == 0) {
                *((_BYTE*)v11 + 96) = 0;
              }
            }
            v11[13] = nullptr;
            v11[14] = nullptr;
            v11[15] = nullptr;
            v11[16] = nullptr;
            *((_DWORD*)v11 + 34) = 1;
            *v11 = (__int64*)GameData_207da50;
            *((_DWORD*)v11 + 35) = *(_DWORD*)(v7 + 48);
            v86 = GameData_207e8c8;
            goto LABEL_171;
          }
        }
        GameRoutine_1a0b940(v65, v61, v64);
        goto LABEL_165;
      }
      if (v8 != 8) {
        goto LABEL_7;
      }
      v9 = (__int64**)GameRoutine_651b90(*v5, 144, 16, 0);
      v10 = *(_QWORD*)(v7 + 8);
      v11 = v9;
      *v9 = v4 + 2;
      v9[1] = nullptr;
      v12 = GameRoutine_1a09c70(v10);
      if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_185;
      }
      v14 = v12;
      if (v12 >= 0x17) {
        break;
      }
      v15 = (__int64)v11 + 17;
      *((_BYTE*)v11 + 16) = 2 * v12;
      if (v12 != 0) {
        goto LABEL_153;
      }
    LABEL_154:
      *(_BYTE*)(v15 + v14) = 0;
      *((_DWORD*)v11 + 10) = 0;
      v11[6] = nullptr;
      v11[7] = nullptr;
      v11[8] = nullptr;
      v11[9] = nullptr;
      v11[11] = (__int64*)v7;
      *((_WORD*)v11 + 40) = 257;
      *v11 = (__int64*)GameData_207d598;
      *((_BYTE*)v11 + 82) = 1;
      *((_BYTE*)v11 + 96) = 1;
      if (*(_DWORD*)(v7 + 48) == 22) {
        v107 = (__int64*)&GameData_1ac12a9;
        v106 = GameRoutine_7a86e0(&GameData_1ac12a9, v13);
        if (GameData_21caab0 == 0 ||
            (v98 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                      &v106)) == 0 ||
            *(_DWORD*)(v98 + 32) == 0) {
          *((_BYTE*)v11 + 96) = 0;
        }
      }
      v11[13] = nullptr;
      v11[14] = nullptr;
      v11[15] = nullptr;
      v11[16] = nullptr;
      *((_DWORD*)v11 + 34) = 1;
      *v11 = (__int64*)GameData_207da50;
      *((_DWORD*)v11 + 35) = *(_DWORD*)(v7 + 48);
      v6 = GameData_207eb28;
    LABEL_5:
      *v11 = (__int64*)v6;
    LABEL_6:
      result = GameRoutine_16e0c00(v2, v11);
      v1 = *(_DWORD*)(v2 + 1072);
    LABEL_7:
      if (++v3 >= v1) {
        return result;
      }
    }
    if ((v12 | 7) == 0x17) {
      v97 = 26;
    }
    else {
      v97 = (v12 | 7) + 1;
    }
    v15 = GameRoutine_651b90(*v5, v97, 16, 0);
    v11[3] = (__int64*)v14;
    v11[4] = (__int64*)v15;
    v11[2] = (__int64*)(v97 | 1);
  LABEL_153:
    GameRoutine_1a0b940(v15, v10, v14);
    goto LABEL_154;
  }
  return result;
}

__int64 GameHr_1674ba0(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if (*(_BYTE*)(a1 + 184) == 1) {
    *(_BYTE*)(a1 + 184) = 0;
  }
  result = GameRoutine_8224a0(21);
  if (GameData_21caab0 != 0) {
    result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), result);
    if (result != 0) {
      v3 = *(_DWORD*)(result + 32) - 1;
      if (v3 <= 0x14) {
        v4 = *(_QWORD*)(a1 + 152);
        v5 = *(_QWORD*)(a1 + 160) - v4;
        if (v5 != 0) {
          v6 = GameData_207f428[v3];
          v7 = 0xAAAAAAAAAAAAAAABLL * (v5 >> 3);
          result = GameRoutine_1a09c70(v6);
          v8 = result;
          v9 = 0;
          v10 = 0;
          while (1) {
            v11 = v4 + 24 * v9;
            v12 = *(_BYTE*)v11 >> 1;
            if ((*(_BYTE*)v11 & 1) != 0) {
              v12 = *(_QWORD*)(v11 + 8);
            }
            if (v8 == v12) {
              if (v8 == -1) {
                GameRoutine_60a230(result);
              }
              v13 = (*(_BYTE*)v11 & 1) != 0 ? *(_QWORD*)(v11 + 16) : v11 + 1;
              result = GameRoutine_1a09cf0(v13, v6);
              if ((_DWORD)result == 0) {
                break;
              }
            }
            v9 = ++v10;
            if (v7 <= v10) {
              return result;
            }
          }
          if ((*(_BYTE*)(a1 + 184) & 1) == 0) {
            *(_BYTE*)(a1 + 184) = 1;
          }
          *(_QWORD*)(a1 + 176) = (int)v10;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_1675d00(__int64* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = a1[1];
  if (result != 0) {
    result = GameRoutine_1a0a0c0(result);
    if (result != 0) {
      v3 = *a1;
      v4 = result;
      if (v3 != 0) {
        v5 = GameRoutine_155f480(v3, "T_Txt");
        if (v5 != 0) {
          v6 = v5;
          v7 = GameRoutine_155f480(v3, "S_Txt");
          if (v7 != 0) {
            v8 = v7;
            GameRoutine_58df60(*(_QWORD*)(v6 + 24), v6);
            GameRoutine_58dee0(v8, v6);
          }
        }
        result = GameRoutine_155f480(v3, "T_Txt2");
        if (result != 0) {
          *(_BYTE*)(result + 88) |= 1u;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return GameRoutine_1a09c50(v4);
      }
    }
  }
  return result;
}

float GameHr_1675fe0(_QWORD* a1)
{
  float v1;
  __int64 v3;
  float v4;
  __int64 v5;
  __int64 v6;
  float v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float v12;

  v3 = a1[1];
  v4 = 0.0;
  if (v3 != 0) {
    v5 = GameRoutine_1a0a0c0(v3);
    if (v5 != 0) {
      v6 = v5;
      if (*a1 != 0) {
        v7 = GameRoutine_1561b90(*a1, "S_Txt");
        v8 = a1[1];
        v4 = v7;
        if (v8 != 0) {
          v9 = *a1;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                    memory_order_relaxed);
          v10 = GameRoutine_1a0a0c0(v8);
          if (v10 != 0) {
            v11 = v10;
            if (v9 != 0) {
              v12 = GameRoutine_1561b90(v9, "T_FitTxt");
              v1 = v12 / GameRoutine_1561b90(v9, "S_Txt");
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
              GameRoutine_1a09c50(v11);
            }
            if (v9 != 0) {
              v4 = v4 * v1;
            }
          }
          GameRoutine_1a09c50(v8);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        GameRoutine_1a09c50(v6);
      }
    }
  }
  return v4;
}

__int64 GameHr_1676790(__int64* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = a1[1];
  if (result != 0) {
    result = GameRoutine_1a0a0c0(result);
    if (result != 0) {
      v3 = *a1;
      v4 = result;
      if (v3 != 0) {
        v5 = GameRoutine_155f480(v3, "T_Txt");
        if (v5 != 0) {
          v6 = v5;
          v7 = GameRoutine_155f480(v3, "N_Txt");
          if (v7 != 0) {
            v8 = v7;
            GameRoutine_58df60(*(_QWORD*)(v6 + 24), v6);
            GameRoutine_58dee0(v8, v6);
          }
        }
        result = GameRoutine_155f480(v3, "T_Txt2");
        if (result != 0) {
          *(_BYTE*)(result + 88) &= ~1u;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return GameRoutine_1a09c50(v4);
      }
    }
  }
  return result;
}

__int64 GameHr_1676880(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;

  if (*(_BYTE*)(a1 + 184) == 1) {
    *(_BYTE*)(a1 + 184) = 0;
  }
  result = GameRoutine_8224a0(22);
  if (GameData_21caab0 != 0) {
    result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), result);
    if (result != 0) {
      v3 = *(_DWORD*)(result + 32) - 1;
      if (v3 <= 8) {
        v4 = *(_QWORD*)(a1 + 152);
        v5 = *(_QWORD*)(a1 + 160);
        v6 = v5 - v4;
        if (v5 != v4) {
          v7 = 0;
          v8 = 0;
          v9 = GameData_207f4d0[v3];
          v10 = 0xAAAAAAAAAAAAAAABLL * (v6 >> 3);
          while (1) {
            v11 = v4 + 24 * v7;
            v12 = *(_QWORD*)(v11 + 8);
            if ((*(_BYTE*)v11 & 1) == 0) {
              v12 = *(_BYTE*)v11 >> 1;
            }
            if (v12 == 13) {
              v13 = (*(_BYTE*)v11 & 1) != 0 ? *(__int64**)(v11 + 16)
                                            : (__int64*)(v11 + 1);
              v14 = *v13;
              v15 = *(__int64*)((char*)v13 + 5);
              if (v14 == *(_QWORD*)v9 && v15 == *(_QWORD*)(v9 + 5)) {
                break;
              }
            }
            v7 = ++v8;
            if (v10 <= v8) {
              return result;
            }
          }
          if ((*(_BYTE*)(a1 + 184) & 1) == 0) {
            *(_BYTE*)(a1 + 184) = 1;
          }
          *(_QWORD*)(a1 + 176) = (int)v8;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_1678440()
{
  __int64 v0;
  __int64 i;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  const char* v7;
  _QWORD v9[25];
  int v10;

  v0 = GameRoutine_682780(9);
  if (v0 == 0) {
    goto LABEL_11;
  }
  for (i = v0; i != 0; i = *(_QWORD*)(i + 624)) {
    v2 = i;
  }
  if (*(_BYTE*)(v2 + 441) != 3) {
    goto LABEL_11;
  }
  v3 = *(_QWORD*)(v0 + 624);
  if (v3 == 0) {
    v3 = v0;
  }
  v9[0] = v3;
  v10 = 241;
  v4 = GameRoutine_6ead60(v9, &v10);
  if (v4 != 0) {
    v5 = (__int64*)(v4 + 2104);
    goto LABEL_12;
  }
  v6 = *(_QWORD*)(GameData_21caab0 + 176);
  if (*(_BYTE*)(v6 + 144) != 0) {
    v5 = (__int64*)(v6 + 112);
  }
  else {
  LABEL_11:
    v5 = &GameData_21f49b8;
  }
LABEL_12:
  if (*((_BYTE*)v5 + 32) == 2) {
    GameRoutine_10c910(v9, 100);
    v7 = "SE_SYS_VolCheck_Voice_F";
  }
  else {
    GameRoutine_10c910(v9, 100);
    v7 = "SE_SYS_VolCheck_Voice_M";
  }
  GameRoutine_ffbe0(v7, v9);
  return GameRoutine_10cff0(v9);
}

__int64 GameHr_16788a0(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;

  *a1 = GameData_207ee08;
  a1[22] = GameData_207f290;
  a1[132] = GameData_207f360;
  if (GameData_21ed0a0 != 0) {
    v1 = a1;
    v2 = GameRoutine_155fbe0(GameData_21ed0a0 + 40, "L_KeyHelp");
    GameRoutine_1561c90(v2, 255);
    a1 = v1;
  }
  return GameRoutine_16dd440(a1);
}

void GameHr_1679140(__int64 a1)
{
  __int64 v1;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64** v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  unsigned int* v23;
  __int64 v24;
  int v25;
  __int64 v26;
  struct {
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v27_;

  v1 = *(_QWORD*)(a1 + 88);
  if (v1 == 0) {
  LABEL_51:
    v25 = 6;
    goto LABEL_56;
  }
  v4 = *(char**)(GameData_2241428 + 8);
  v3 = *(char**)(GameData_2241428 + 16);
  if (v4 != v3) {
    v5 = v3 - v4 - 8;
    if ((~(_BYTE)v5 & 0x18) == 0) {
    LABEL_7:
      if (v5 >= 0x18) {
        v4 += 16;
        while (1) {
          if (*((_QWORD*)v4 - 2) == v1) {
            if (v4 - 16 != v3) {
              goto LABEL_55;
            }
            goto LABEL_16;
          }
          if (*((_QWORD*)v4 - 1) == v1) {
            v4 -= 8;
            goto LABEL_54;
          }
          if (*(_QWORD*)v4 == v1) {
            goto LABEL_54;
          }
          if (*((_QWORD*)v4 + 1) == v1) {
            break;
          }
          v7 = v4 + 16;
          v4 += 32;
          if (v7 == v3) {
            goto LABEL_16;
          }
        }
        if (v4 + 8 != v3) {
          goto LABEL_55;
        }
      }
      goto LABEL_16;
    }
    v6 = ((unsigned __int8)((unsigned int)v5 >> 3) + 1) & 3;
    while (*(_QWORD*)v4 != v1) {
      v4 += 8;
      if (--v6 == 0) {
        goto LABEL_7;
      }
    }
  }
LABEL_54:
  if (v4 != v3) {
  LABEL_55:
    v25 = 0;
    goto LABEL_56;
  }
LABEL_16:
  v8 = *(_QWORD*)(v1 + 120);
  if (v8 != 0 && game_GameModeData_instance_ != 0) {
    v9 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v9 != 0 && v8 == *(_QWORD*)(v9 + 200)) {
      v25 = 1;
      goto LABEL_56;
    }
  }
  v10 = *(_QWORD*)(GameData_21c96e8 + 8);
  v11 = *(_QWORD**)(v10 + 8);
  v12 = *(_QWORD**)(v10 + 16);
  while (v11 != v12) {
    v13 = (_QWORD*)*v11;
    if (*(_QWORD*)*v11 == v1) {
      v14 = v13[12];
      if (v14 != 0 && (unsigned int)*(unsigned __int8*)(v14 + 32) - 3 < 2) {
        if ((v13[68] & 8) != 0) {
          v25 = 2;
          goto LABEL_56;
        }
        break;
      }
    }
    ++v11;
  }
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
      (v15 = *(__int64***)(GameData_22416b0 + 8), v16 = *v15, v17 = v15[1],
       v16 == v17)) {
  LABEL_32:
    v27_.v28 = 0;
    v27_.v29 = 0;
    v27_.v27 = 0;
    GameSideStoryData_12b50c0(*(_QWORD*)GameData_212c7b8[0], &v27_.v27);
    v19 = v27_.v27;
    v20 = v27_.v28;
    if (v27_.v27 == v27_.v28) {
      v21 = 0;
      if (v27_.v27 == 0) {
        goto LABEL_45;
      }
    }
    else {
      do {
        v22 = *(_QWORD*)v19;
        v23 = *(unsigned int**)(**(_QWORD**)v19 + 200LL);
        if (v23 != nullptr &&
            game_gmap_SpotMgr_FindSpot(v23) == (unsigned int*)v1 &&
            *(_BYTE*)(v22 + 8) == 3) {
          v21 = 1;
          goto LABEL_41;
        }
        v19 += 8;
      } while (v19 != v20);
      v21 = 0;
    LABEL_41:
      v19 = v27_.v27;
      if (v27_.v27 == 0) {
      LABEL_45:
        if ((v21 & 1) != 0) {
          v25 = 4;
          goto LABEL_56;
        }
        if (GameRoutine_1329470_alt1(*(unsigned int**)(a1 + 88)) ||
            (v26 = GameRoutine_1329ff0_alt1(*(_QWORD*)(a1 + 88))) != 0 &&
                *(unsigned __int8*)(v26 + 9) < 4u) {
          v25 = 5;
          goto LABEL_56;
        }
        goto LABEL_51;
      }
    }
    v27_.v28 = v19;
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v24,
                                  v19);
    goto LABEL_45;
  }
  while (1) {
    v18 = *v16++;
    if (*(_QWORD*)(*(_QWORD*)(v18 + 112) + 48LL) == v8) {
      break;
    }
    if (v16 == v17) {
      goto LABEL_32;
    }
  }
  v25 = 3;
LABEL_56:
  *(_DWORD*)(a1 + 96) = v25;
}

#pragma GCC visibility pop
