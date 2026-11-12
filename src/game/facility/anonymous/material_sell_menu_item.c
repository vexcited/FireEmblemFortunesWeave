#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1704d80(__int64*);
__int64 GameRoutine_1212520(_QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_157a130(_QWORD, _QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 ShopMenuItem_Sell_Unknown55(_QWORD*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _BYTE* GameData_2132020;
extern _UNKNOWN* GameData_212da30;
extern __int64 GameData_20a8cc0;
extern __int64 GameData_212d690;
extern __int64 GameData_2131c80[42];
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e010[8];
extern __int64* GameData_212e030[4];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 MaterialSellMenuItem_Unknown55(_QWORD* a1);
__int64 MaterialSellMenuItem_Unknown77(__int64 a1);
__int64 MaterialSellMenuItem_Unknown78(__int64 a1);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 ObeliskDestinyMenuItem_1a06060(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_21caa2c;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e038[3];
extern __int64* game_g_empty_item_ptr;
__int64 MaterialSellMenuItem_Unknown3(__int64 a1);
__int64 MaterialSellMenuItem_Unknown4(__int64 a1);
__int64
game_facility_anonymous_MaterialSellMenuItem_OnOpenDialog_closure_Invoke_alt1(
    __int64 a1, __int64* a2,
    int* a3) __asm__("game_facility_anonymous_MaterialSellMenuItem_"
                     "OnOpenDialog_closure_Invoke");
__int64
game_facility_anonymous_MaterialSellMenuItem_CreateDialog_closure_Invoke_alt1(
    __int64 a1, __int64 a2,
    int* a3) __asm__("game_facility_anonymous_MaterialSellMenuItem_"
                     "CreateDialog_closure_Invoke");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD* GameRoutine_9d1500(__int64, __int64, __int64, __int64, __int64,
                           __int64);
_QWORD* ObeliskDestinyMenuItem_1a06060_alt1(_QWORD* result, int*, char) __asm__(
    "ObeliskDestinyMenuItem_1a06060");
__attribute__((swiftcall)) void TransporterConst_89cb30(PSEUDO_X8,
                                                        __int64 result, int);
__int64 GameRoutine_6e3b50_alt1(__int64 result,
                                _QWORD*) __asm__("GameRoutine_6e3b50");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 UnitUtil_1212520(unsigned __int16*);
__int64 game_facility_1704ae0(__int64 result, __int64);
char* GameRoutine_164cdb0(__int64, int, int, int, char*, __int64, __int64,
                          __int64, __int64, __int64);
extern __int64 (*GameData_20a91a8[])();
extern __int64 (*GameData_20a9228[])();
extern __int64* GameData_212e000[10];
extern __int64 game_GameModeData_instance_;
__int64 MaterialSellMenuItem_Unknown76(__int64 a1);
__int64 game_facility_anonymous_MaterialSellMenuItem_OnOpenDialog(__int64 a1,
                                                                  __int64 a2);
char* game_facility_anonymous_MaterialSellMenuItem_CreateDialog(_QWORD* a1,
                                                                __int64 a2,
                                                                __int64 a3);
void GameRoutine_6e3b50_alt2(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_anonymous_MaterialSellMenuItem_OnOpenDialog_closure_Invoke(
    __int64 a1, __int64* a2, int* a3);
void game_facility_anonymous_MaterialSellMenuItem_CreateDialog_closure_Invoke(
    __int64 a1, __int64 a2, int* a3);

__int64 MaterialSellMenuItem_Unknown55(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  bool v11;
  __int64 v12;
  char* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  atomic_ullong* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64 result;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;

  ShopMenuItem_Sell_Unknown55(a1);
  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v30 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v30);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_6:
  v5 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  GameRoutine_1212520(v5);
  v6 = ui_LayoutAccessor_FindPane(v4, "T_StockNum");
  if (v6 != 0) {
    v7 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d690, 0);
    if (v7 != 0) {
      GameRoutine_156c910(v7, "%d", 1);
    }
  }
  v8 = a1[7];
  if (v8 == 0) {
    goto LABEL_13;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_13;
  }
  v10 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v31 = v9;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v31);
    if (v10 != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  if (v10 == nullptr) {
  LABEL_13:
    v10 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_14:
  v11 = ((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0;
  v12 = 72;
  v13 = (char*)GameData_212da30;
  if (!v11) {
    v12 = 36;
  }
  v14 = *(_DWORD*)((char*)GameData_212da30 + v12);
  v15 = ui_LayoutAccessor_FindTextBox(v10, "T_StockNum");
  if (v15 != 0) {
    v16 = Pane_58f8a0(v15);
    if (v16 != 0) {
      *(_DWORD*)(v16 + 12) = v14;
    }
  }
  v17 = a1[7];
  if (v17 == 0) {
    goto LABEL_23;
  }
  v18 = std___1___shared_weak_count_lock(v17);
  if (v18 == 0) {
    goto LABEL_23;
  }
  v19 = v18;
  v20 = (atomic_ullong*)(v18 + 8);
  v21 = (__int64*)a1[6];
  if (atomic_fetch_add(v20, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v32 = v21;
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
    v21 = v32;
    if (v32 != nullptr) {
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  if (v21 == nullptr) {
  LABEL_23:
    v21 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_24:
  v22 = GameRoutine_155fbe0(v21, "L_CostGold");
  v23 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v24 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  GameRoutine_157a130(v22, v23, v24 & 1);
  result = ui_LayoutAccessor_FindPane(v22, "Icon");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v26 = result;
      v11 = ((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0;
      v27 = 72;
      if (!v11) {
        v27 = 36;
      }
      v28 = *(_DWORD*)&v13[v27];
      v29 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v26 + 88LL))(v26, 0);
      if (v29 != 0) {
        *(_DWORD*)(v29 + 12) = v28;
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v26, 0, 7,
                                 "IconStock_Gold");
    }
  }
  return result;
}

__int64 MaterialSellMenuItem_Unknown76(__int64 a1)
{
  unsigned __int16* v2;
  __int64 v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  char v9;

  v2 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v2);
  v4 = *(_DWORD*)(v3 + 80);
  if (v4 != 0) {
    v5 = *(unsigned __int8*)(v3 + 87);
    v6 = (v5 - *((unsigned __int8*)v2 + 2)) &
         ~((int)(v5 - *((unsigned __int8*)v2 + 2)) >> 31);
    if (v6 < v5) {
      v4 = (int)(v6 * v4) / (int)v5;
    }
    if (v4 <= 1) {
      v4 = 1;
    }
  }
  else {
    v4 = 1;
  }
  if (game_GameModeData_instance_ != 0) {
    v7 = (*(_DWORD*)(game_GameModeData_instance_ + 72) +
          *(_DWORD*)(a1 + 84) * v4) &
         ~((*(_DWORD*)(game_GameModeData_instance_ + 72) +
            *(_DWORD*)(a1 + 84) * v4) >>
           31);
    if (v7 >= 9999999) {
      v7 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v7;
  }
  return X8CALL_X0(__int64, TransporterConst_89cb30((void*)((__int64)&v9),
                                                    *(unsigned int*)(a1 + 40),
                                                    *(_DWORD*)(a1 + 84)));
}

__int64 MaterialSellMenuItem_Unknown77(__int64 a1)
{
  __int64 v1;
  unsigned __int16* v2;
  __int64* v3;
  __int64 v4;
  int v5;
  int v6;
  unsigned __int16* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 result;

  v10 = *(_QWORD*)(a1 + 8);
  if (v10 == 0) {
    return 0;
  }
  v11 = __dynamic_cast(v10, GameData_212e030[0], &GameData_20a8cc0, 0);
  if (v11 == 0) {
    return 0;
  }
  v12 = (_QWORD*)(v11 + 1064);
  if ((int)((v12[2] - v12[1]) >> 3) > 0) {
    return 1;
  }
  result = *(_QWORD*)(*v12 + 336LL);
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212e008[0], GameData_212e010[0], 0);
    if (result != 0) {
      v1 = result;
      v2 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)result +
                                                        560LL))(result);
      v3 = GameData_212c878[0];
      v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v2);
      v5 = *(unsigned __int8*)(v4 + 72);
      v6 = *(_DWORD*)(v4 + 336) & 3;
      if (v5 == 15 || v6 != 0) {
        return 0;
      }
      v8 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v1 + 560LL))(
          v1);
      if ((*((_BYTE*)v8 + 3) & 0x10) != 0) {
        return 0;
      }
      else {
        v9 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * *v8);
        return ((1LL << *(_BYTE*)(v9 + 72)) & 0xE01F) != 0 &&
               (*(_BYTE*)(v9 + 336) & 4) == 0;
      }
    }
  }
  return result;
}

__int64 MaterialSellMenuItem_Unknown78(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 8);
  *GameData_2132020 = 1;
  if (v2 != 0) {
    v3 = (__int64*)__dynamic_cast(v2, GameData_212e030[0], GameData_2131c80[0],
                                  -2);
    if (v3 != nullptr) {
      GameRoutine_1704d80(v3);
    }
  }
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 96) + 80LL))(a1 + 96);
  if (v4 != 0) {
    v5 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 1128LL))(v4);
    (*(void (**)(__int64))(*(_QWORD*)v5 + 1136LL))(v5);
    (*(void (**)(__int64))(*(_QWORD*)v5 + 1120LL))(v5);
  }
  return 2;
}

__int64 game_facility_anonymous_MaterialSellMenuItem_OnOpenDialog(__int64 a1,
                                                                  __int64 a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  int v9;
  __int64* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int16* v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  int v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  int v29;
  __int64* v30;
  __int64* v31;
  __int64* v32;
  int v33;
  __int64 v34;
  __int64 v35;
  unsigned __int16* v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  _BYTE v42[20];
  struct {
    __int64 v43;
    _BYTE* v44;
  } v43_;
  _QWORD** v45;
  struct {
    _QWORD* v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    _BYTE* v50;
    int v51;
    int v52;
    int v53;
  } v46_;
  struct {
    _QWORD v54[4];
    _QWORD* v55;
  } v54_;
  __int64 v56;

  v3 = *(_QWORD*)(a1 + 8);
  v56 = a2;
  if (v3 != 0) {
    v5 = __dynamic_cast(v3, GameData_212e030[0], GameData_2131c80[0], -2);
    if (v5 != 0) {
      v6 = v5;
      if ((int)((*(_QWORD*)(v5 + 16) - *(_QWORD*)(v5 + 8)) >> 3) >= 1) {
        v54_.v54[0] = GameData_20a91a8;
        v54_.v54[1] = &v56;
        v54_.v55 = v54_.v54;
        v43_.v44 = v42;
        *(_QWORD*)v42 = GameData_20a91a8;
        *(_QWORD*)&v42[8] = &v56;
        game_facility_1704ae0(v5, (__int64)v42);
        if (v43_.v44 == v42) {
          v7 = 32;
        }
        else {
          if (v43_.v44 == nullptr) {
            goto LABEL_40;
          }
          v7 = 40;
        }
        (*(void (**)(__int64))(*(_QWORD*)v43_.v44 + v7))((__int64)v43_.v44);
      LABEL_40:
        if (v54_.v55 == v54_.v54) {
          v25 = 32;
        }
        else {
          if (v54_.v55 == nullptr) {
          LABEL_45:
            v26 = v56;
            v27 = *(_QWORD**)(v6 + 8);
            v28 = *(_QWORD**)(v6 + 16);
            if (v27 == v28) {
              v29 = 0;
            }
            else {
              v29 = 0;
              v30 = GameData_212e008[0];
              v31 = GameData_212e010[0];
              v32 = GameData_212c878[0];
              do {
                if (*v27 != 0) {
                  v34 = __dynamic_cast(*v27, v30, v31, 0);
                  if (v34 != 0) {
                    v35 = v34;
                    v36 = (unsigned __int16*)(*(__int64 (**)(__int64))(
                        *(_QWORD*)v34 + 560LL))(v34);
                    v37 = *(_QWORD*)(*(_QWORD*)(*v32 + 64) + 8LL * *v36);
                    v33 = *(_DWORD*)(v37 + 80);
                    if (v33 != 0) {
                      v38 = *(unsigned __int8*)(v37 + 87);
                      v39 = (v38 - *((unsigned __int8*)v36 + 2)) &
                            ~((int)(v38 - *((unsigned __int8*)v36 + 2)) >> 31);
                      if (v39 < v38) {
                        v33 = (int)(v39 * v33) / (int)v38;
                      }
                      if (v33 <= 1) {
                        v33 = 1;
                      }
                    }
                    else {
                      v33 = 1;
                    }
                    v29 += *(_DWORD*)(v35 + 84) * v33;
                  }
                }
                ++v27;
              } while (v27 != v28);
            }
            *(_DWORD*)v42 = 0;
            *(_QWORD*)&v42[4] = *game_g_empty_item_ptr;
            if (*(_BYTE*)GameData_212ceb0 != 0) {
              v40 = *GameData_212ceb0;
            }
            else {
              v40 = 0;
            }
            *(_QWORD*)&v42[12] = v40;
            WORD1(v43_.v43) = 0;
            HIDWORD(v43_.v43) = 0;
            v46_.v47 = 0;
            v46_.v48 = 0;
            v46_.v49 = 0;
            v46_.v50 = nullptr;
            v45 = &v46_.v46;
            v46_.v46 = nullptr;
            GameRoutine_930b90_alt1((__int64)&v43_.v43,
                                    (__int64)GameData_212c8b0[0]);
            v46_.v51 = 0;
            v46_.v52 = v29;
            v46_.v53 = 0;
            ObeliskDestinyMenuItem_1a06060_alt1((_QWORD*)(v26 + 1544),
                                                (int*)v42, 0);
            LODWORD(v43_.v44) = 0;
            v43_.v43 = 0;
            if ((v46_.v48 & 1) != 0) {
              *v46_.v50 = 0;
              v46_.v49 = 0;
            }
            else {
              LOWORD(v46_.v48) = 0;
            }
            GameRoutine_6e3b50_alt1((__int64)&v45, v46_.v46);
            v46_.v46 = nullptr;
            v46_.v47 = 0;
            v45 = &v46_.v46;
            if ((v46_.v48 & 1) != 0) {
              v22 = v46_.v50;
              if (v46_.v50 != nullptr) {
                v41 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v41 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
                v22 = v46_.v46;
              }
            }
            else {
              v22 = nullptr;
            }
            return GameRoutine_6e3b50_alt1((__int64)&v45, v22);
          }
          v25 = 40;
        }
        (*(void (**)(__int64))(*v54_.v55 + v25))((__int64)v54_.v55);
        goto LABEL_45;
      }
    }
  }
  v8 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  v9 = *(_DWORD*)(a1 + 84);
  *(_DWORD*)v42 = 8;
  *(_QWORD*)&v42[4] = *v8;
  v10 = GameData_212ceb0;
  if (*(_BYTE*)GameData_212ceb0 != 0) {
    v11 = *GameData_212ceb0;
  }
  else {
    v11 = 0;
  }
  *(_QWORD*)&v42[12] = v11;
  WORD1(v43_.v43) = 0;
  HIDWORD(v43_.v43) = 0;
  v46_.v47 = 0;
  v46_.v48 = 0;
  v46_.v49 = 0;
  v46_.v50 = nullptr;
  v45 = &v46_.v46;
  v46_.v46 = nullptr;
  GameRoutine_930b90_alt1((__int64)&v43_.v43, (__int64)GameData_212c8b0[0]);
  v46_.v51 = 0;
  v46_.v52 = v9;
  v46_.v53 = -1;
  ObeliskDestinyMenuItem_1a06060_alt1((_QWORD*)(a2 + 1520), (int*)v42, 0);
  LODWORD(v43_.v44) = 0;
  v43_.v43 = 0;
  if ((v46_.v48 & 1) != 0) {
    *v46_.v50 = 0;
    v46_.v49 = 0;
  }
  else {
    LOWORD(v46_.v48) = 0;
  }
  GameRoutine_6e3b50_alt1((__int64)&v45, v46_.v46);
  v46_.v46 = nullptr;
  v46_.v47 = 0;
  v45 = &v46_.v46;
  if ((v46_.v48 & 1) != 0) {
    v12 = v46_.v50;
    if (v46_.v50 != nullptr) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
      v12 = v46_.v46;
    }
  }
  else {
    v12 = nullptr;
  }
  GameRoutine_6e3b50_alt1((__int64)&v45, v12);
  v14 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  v15 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v14);
  v16 = *(_DWORD*)(v15 + 80);
  if (v16 != 0) {
    v17 = *(unsigned __int8*)(v15 + 87);
    v18 = (v17 - *((unsigned __int8*)v14 + 2)) &
          ~((int)(v17 - *((unsigned __int8*)v14 + 2)) >> 31);
    if (v18 < v17) {
      v16 = (int)(v18 * v16) / (int)v17;
    }
    if (v16 <= 1) {
      v16 = 1;
    }
  }
  else {
    v16 = 1;
  }
  v19 = *(_DWORD*)(a1 + 84);
  *(_DWORD*)v42 = 0;
  v20 = v19 * v16;
  *(_QWORD*)&v42[4] = *game_g_empty_item_ptr;
  if (*(_BYTE*)v10 != 0) {
    v21 = *v10;
  }
  else {
    v21 = 0;
  }
  *(_QWORD*)&v42[12] = v21;
  WORD1(v43_.v43) = 0;
  HIDWORD(v43_.v43) = 0;
  v46_.v47 = 0;
  v46_.v48 = 0;
  v46_.v49 = 0;
  v46_.v50 = nullptr;
  v45 = &v46_.v46;
  v46_.v46 = nullptr;
  GameRoutine_930b90_alt1((__int64)&v43_.v43, (__int64)GameData_212c8b0[0]);
  v46_.v51 = 0;
  v46_.v52 = v20;
  v46_.v53 = 0;
  ObeliskDestinyMenuItem_1a06060_alt1((_QWORD*)(a2 + 1544), (int*)v42, 0);
  LODWORD(v43_.v44) = 0;
  v43_.v43 = 0;
  if ((v46_.v48 & 1) != 0) {
    *v46_.v50 = 0;
    v46_.v49 = 0;
  }
  else {
    LOWORD(v46_.v48) = 0;
  }
  GameRoutine_6e3b50_alt1((__int64)&v45, v46_.v46);
  v46_.v46 = nullptr;
  v46_.v47 = 0;
  v45 = &v46_.v46;
  if ((v46_.v48 & 1) != 0) {
    v22 = v46_.v50;
    if (v46_.v50 != nullptr) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23);
      v22 = v46_.v46;
    }
  }
  else {
    v22 = nullptr;
  }
  return GameRoutine_6e3b50_alt1((__int64)&v45, v22);
}

char* game_facility_anonymous_MaterialSellMenuItem_CreateDialog(_QWORD* a1,
                                                                __int64 a2,
                                                                __int64 a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int16* v12;
  int v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;

  v3 = a1[1];
  if (v3 != 0) {
    v7 = __dynamic_cast(a1[1], GameData_212e030[0], GameData_2131c80[0], -2);
    if (v7 != 0 &&
        (int)((*(_QWORD*)(v7 + 16) - *(_QWORD*)(v7 + 8)) >> 3) >= 1) {
      v8 = __dynamic_cast(v3, GameData_212e030[0], GameData_212e000[0], 0);
      v9 = (*(__int64 (**)(_QWORD*))(*a1 + 648LL))(a1);
      v10 = (*(__int64 (**)(_QWORD*))(*a1 + 656LL))(a1);
      return (char*)GameRoutine_9d1500(v8, v9, v10, a2, a3, a3);
    }
  }
  *((_DWORD*)a1 + 21) = 1;
  v12 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v14 = UnitUtil_1212520(v12);
  v15 = a1[1];
  if (v15 != 0) {
    v16 = __dynamic_cast(v15, GameData_212e030[0], GameData_212e000[0], 0);
  }
  else {
    v16 = 0;
  }
  v17 = (char*)(*(__int64 (**)(_QWORD*))(*a1 + 648LL))(a1);
  v18 = (*(__int64 (**)(_QWORD*))(*a1 + 656LL))(a1);
  v21_.v21[0] = GameData_20a9228;
  v21_.v21[1] = a1;
  v21_.v22 = v21_.v21;
  v19 = GameRoutine_164cdb0(v16, 1, 1, v14, v17, v18, (__int64)v21_.v21, a2, a3,
                            a3);
  if (v21_.v22 == v21_.v21) {
    v20 = 32;
    goto LABEL_12;
  }
  if (v21_.v22 != nullptr) {
    v20 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v21_.v22 + v20))((__int64)v21_.v22);
  }
  return v19;
}

__int64 MaterialSellMenuItem_Unknown3(__int64 a1)
{
  __int64 v1;
  unsigned __int16* v2;
  __int64* v3;
  __int64 v4;
  int v5;
  int v6;
  unsigned __int16* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 result;

  v10 = *(_QWORD*)(a1 - 88);
  if (v10 == 0) {
    return 0;
  }
  v11 = __dynamic_cast(v10, GameData_212e030[0], &GameData_20a8cc0, 0);
  if (v11 == 0) {
    return 0;
  }
  v12 = (_QWORD*)(v11 + 1064);
  if ((int)((v12[2] - v12[1]) >> 3) > 0) {
    return 1;
  }
  result = *(_QWORD*)(*v12 + 336LL);
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212e008[0], GameData_212e010[0], 0);
    if (result != 0) {
      v1 = result;
      v2 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)result +
                                                        560LL))(result);
      v3 = GameData_212c878[0];
      v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v2);
      v5 = *(unsigned __int8*)(v4 + 72);
      v6 = *(_DWORD*)(v4 + 336) & 3;
      if (v5 == 15 || v6 != 0) {
        return 0;
      }
      v8 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v1 + 560LL))(
          v1);
      if ((*((_BYTE*)v8 + 3) & 0x10) != 0) {
        return 0;
      }
      else {
        v9 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * *v8);
        return ((1LL << *(_BYTE*)(v9 + 72)) & 0xE01F) != 0 &&
               (*(_BYTE*)(v9 + 336) & 4) == 0;
      }
    }
  }
  return result;
}

__int64 MaterialSellMenuItem_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;

  *GameData_2132020 = 1;
  v2 = *(_QWORD*)(a1 - 88);
  if (v2 != 0) {
    v3 = (__int64*)__dynamic_cast(v2, GameData_212e030[0], GameData_2131c80[0],
                                  -2);
    if (v3 != nullptr) {
      GameRoutine_1704d80(v3);
    }
  }
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
  if (v4 != 0) {
    v5 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 1128LL))(v4);
    (*(void (**)(__int64))(*(_QWORD*)v5 + 1136LL))(v5);
    (*(void (**)(__int64))(*(_QWORD*)v5 + 1120LL))(v5);
  }
  return 2;
}

void game_facility_anonymous_MaterialSellMenuItem_OnOpenDialog_closure_Invoke(
    __int64 a1, __int64* a2, int* a3)
{
  int v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    int v12;
  } v11_;
  _QWORD** v13;
  struct {
    _QWORD* v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    _BYTE* v18;
    int v19;
    int v20;
    int v21;
  } v14_;

  v3 = *a3;
  v4 = **(_QWORD**)(a1 + 8);
  v8 = 8;
  v9 = *a2;
  if ((_BYTE)GameData_21caa2c != 0) {
    v5 = GameData_21caa2c;
  }
  else {
    v5 = 0;
  }
  v10 = v5;
  WORD1(v11_.v11) = 0;
  HIDWORD(v11_.v11) = 0;
  v14_.v15 = 0;
  v14_.v16 = 0;
  v14_.v17 = 0;
  v14_.v18 = nullptr;
  v13 = &v14_.v14;
  v14_.v14 = nullptr;
  GameRoutine_930b90_alt1((__int64)&v11_.v11, (__int64)GameData_212c8b0[0]);
  v14_.v19 = 0;
  v14_.v20 = v3;
  v14_.v21 = -1;
  ObeliskDestinyMenuItem_1a06060_alt1((_QWORD*)(v4 + 1520), &v8, 0);
  v11_.v12 = 0;
  v11_.v11 = 0;
  if ((v14_.v16 & 1) != 0) {
    *v14_.v18 = 0;
    v14_.v17 = 0;
  }
  else {
    LOWORD(v14_.v16) = 0;
  }
  GameRoutine_6e3b50_alt2((__int64)&v13, v14_.v14);
  v14_.v14 = nullptr;
  v14_.v15 = 0;
  v13 = &v14_.v14;
  if ((v14_.v16 & 1) != 0) {
    v6 = v14_.v18;
    if (v14_.v18 != nullptr) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, (__int64)v14_.v18);
      v6 = v14_.v14;
    }
  }
  else {
    v6 = nullptr;
  }
  GameRoutine_6e3b50_alt2((__int64)&v13, v6);
}

void game_facility_anonymous_MaterialSellMenuItem_CreateDialog_closure_Invoke(
    __int64 a1, __int64 a2, int* a3)
{
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int16* v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 v23;
    int v24;
  } v23_;
  _QWORD** v25;
  struct {
    _QWORD* v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    _BYTE* v30;
    int v31;
    int v32;
    int v33;
  } v26_;

  v4 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
  if (v4 != 0) {
    v5 = *a3;
    v6 = *(__int64**)(a1 + 8);
    v7 = __dynamic_cast(v4, GameData_212e030[0], GameData_212e038[0], 0);
    if (v7 != 0) {
      v8 = *v6;
      *((_DWORD*)v6 + 21) = v5;
      v9 = v7;
      v10 = (unsigned __int16*)(*(__int64 (**)(__int64*))(v8 + 560))(v6);
      v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v10);
      v12 = *(_DWORD*)(v11 + 80);
      if (v12 != 0) {
        v13 = *(unsigned __int8*)(v11 + 87);
        v14 = (v13 - *((unsigned __int8*)v10 + 2)) &
              ~((int)(v13 - *((unsigned __int8*)v10 + 2)) >> 31);
        if (v14 < v13) {
          v12 = (int)(v14 * v12) / (int)v13;
        }
        if (v12 <= 1) {
          v12 = 1;
        }
      }
      else {
        v12 = 1;
      }
      v15 = *((_DWORD*)v6 + 21);
      v20 = 0;
      v16 = v15 * v12;
      v21 = *game_g_empty_item_ptr;
      if (*(_BYTE*)GameData_212ceb0 != 0) {
        v17 = *GameData_212ceb0;
      }
      else {
        v17 = 0;
      }
      v22 = v17;
      WORD1(v23_.v23) = 0;
      HIDWORD(v23_.v23) = 0;
      v26_.v27 = 0;
      v26_.v28 = 0;
      v26_.v29 = 0;
      v26_.v30 = nullptr;
      v25 = &v26_.v26;
      v26_.v26 = nullptr;
      GameRoutine_930b90_alt1((__int64)&v23_.v23, (__int64)GameData_212c8b0[0]);
      v26_.v31 = 0;
      v26_.v32 = v16;
      v26_.v33 = 0;
      (*(void (**)(__int64, _QWORD, int*))(*(_QWORD*)v9 + 1088LL))(v9, 0, &v20);
      v23_.v24 = 0;
      v23_.v23 = 0;
      if ((v26_.v28 & 1) != 0) {
        *v26_.v30 = 0;
        v26_.v29 = 0;
      }
      else {
        LOWORD(v26_.v28) = 0;
      }
      GameRoutine_6e3b50_alt2((__int64)&v25, v26_.v26);
      v26_.v26 = nullptr;
      v26_.v27 = 0;
      v25 = &v26_.v26;
      if ((v26_.v28 & 1) != 0) {
        v18 = v26_.v30;
        if (v26_.v30 != nullptr) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (__int64)v26_.v30);
          v18 = v26_.v26;
        }
      }
      else {
        v18 = nullptr;
      }
      GameRoutine_6e3b50_alt2((__int64)&v25, v18);
    }
  }
}

#pragma GCC visibility pop
