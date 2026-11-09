#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16eb610(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_1866c80(__int64);
__int64 GameRoutine_18674a0(__int64*, __int64, __int64);
__int64 GameRoutine_1867b40(__int64, __int64);
__int64 GameRoutine_1a06060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_89ca00(_QWORD);
__int64 GameRoutine_8a1dc0(_QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_9d1500(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*GameData_20f39c8[])();
extern __int64 GameData_20f20a0;
extern __int64 GameData_2131c68[45];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e030[4];
extern __int64* game_g_empty_item_ptr;
extern __int64* ui_LayoutAccessor_empty__ptr[3];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 ShopMenuItem_Buy_Unknown17(_QWORD* a1);
__int64 ShopMenuItem_Buy_Unknown55(__int64 a1);
bool ShopMenuItem_Buy_1868b60(__int64 a1);
__int64 ShopMenuItem_Buy_Unknown83(_QWORD* a1);
__int64 ShopMenuItem_Buy_186a5f0(__int64 a1, __int64 a2, __int64 a3);
__int64 ShopMenuItem_Buy_Unknown78(__int64 a1, __int64* a2);

__int64 ShopMenuItem_Buy_Unknown17(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  atomic_ullong* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  atomic_ullong* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  atomic_ullong* v25;
  __int64* v26;
  __int64 result;
  __int64* v28;
  __int64* v29;
  __int64* v30;
  __int64* v31;

  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = (__int64*)a1[6];
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v28 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  v6 = v28;
  if (v28 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_6:
  v7 = ui_LayoutAccessor_FindPane(v6, "IconMastery00");
  if (v7 != 0) {
    v8 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d678[0], 0);
    v9 = a1[7];
    if (v9 == 0) {
      goto LABEL_13;
    }
  }
  else {
    v8 = 0;
    v9 = a1[7];
    if (v9 == 0) {
      goto LABEL_13;
    }
  }
  v10 = std___1___shared_weak_count_lock(v9);
  if (v10 == 0) {
    goto LABEL_13;
  }
  v11 = v10;
  v12 = (atomic_ullong*)(v10 + 8);
  v13 = (__int64*)a1[6];
  if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v29 = v13;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
    v13 = v29;
    if (v29 != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  if (v13 == nullptr) {
  LABEL_13:
    v13 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_14:
  v14 = ui_LayoutAccessor_FindPane(v13, "IconMasteryLevel00");
  if (v14 != 0) {
    v14 = __dynamic_cast(v14, GameData_212d670[0], GameData_212d678[0], 0);
  }
  a1[18] = v8;
  a1[19] = v14;
  v15 = a1[7];
  if (v15 == 0) {
    goto LABEL_20;
  }
  v16 = std___1___shared_weak_count_lock(v15);
  if (v16 == 0) {
    goto LABEL_20;
  }
  v17 = v16;
  v18 = (atomic_ullong*)(v16 + 8);
  v19 = (__int64*)a1[6];
  if (atomic_fetch_add(v18, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v19 != nullptr) {
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  v30 = v19;
  (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
  std___1___shared_weak_count___release_weak(v17);
  v19 = v30;
  if (v30 == nullptr) {
  LABEL_20:
    v19 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_21:
  v20 = ui_LayoutAccessor_FindPane(v19, "IconMastery01");
  if (v20 != 0) {
    v21 = __dynamic_cast(v20, GameData_212d670[0], GameData_212d678[0], 0);
    v22 = a1[7];
    if (v22 == 0) {
      goto LABEL_28;
    }
  }
  else {
    v21 = 0;
    v22 = a1[7];
    if (v22 == 0) {
      goto LABEL_28;
    }
  }
  v23 = std___1___shared_weak_count_lock(v22);
  if (v23 == 0) {
    goto LABEL_28;
  }
  v24 = v23;
  v25 = (atomic_ullong*)(v23 + 8);
  v26 = (__int64*)a1[6];
  if (atomic_fetch_add(v25, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v26 != nullptr) {
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  v31 = v26;
  (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
  std___1___shared_weak_count___release_weak(v24);
  v26 = v31;
  if (v31 == nullptr) {
  LABEL_28:
    v26 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_29:
  result = ui_LayoutAccessor_FindPane(v26, "IconMasteryLevel01");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
  }
  a1[20] = v21;
  a1[21] = result;
  return result;
}

__int64 ShopMenuItem_Buy_Unknown55(__int64 a1)
{
  unsigned int v2;
  char v3;

  GameRoutine_1866c80(a1);
  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 608LL))(a1);
  v3 = ShopMenuItem_Buy_1868b60(a1);
  return GameRoutine_16eb610(a1, 0, "L_CostGold", "Icon", "T_Num", v2, v3 & 1);
}

bool ShopMenuItem_Buy_1868b60(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  char* v5;
  int v6;
  __int64* v7;
  _DWORD* v8;
  int v9;
  int v11;
  __int64* v12;
  _DWORD* v13;
  int v14;
  int v15;
  int v16;

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 != 0 &&
      (v3 = __dynamic_cast(v2, GameData_212e030[0], GameData_2131c68[0], -2)) !=
          0 &&
      (v5 = *(char**)(v3 + 8),
       (int)((unsigned __int64)((v4 = *(char**)(v3 + 16)) - v5) >> 3) >= 1)) {
    if (*(_BYTE*)(a1 + 88) == 1) {
      if (v5 == v4) {
        v6 = 0;
      }
      else {
        v6 = 0;
        v7 = GameData_212e008[0];
        do {
          if (*(_QWORD*)v5 != 0) {
            v8 =
                (_DWORD*)__dynamic_cast(*(_QWORD*)v5, v7, &GameData_20f20a0, 0);
            if (v8 != nullptr) {
              v6 +=
                  v8[21] * (*(__int64 (**)(_DWORD*))(*(_QWORD*)v8 + 608LL))(v8);
            }
          }
          v5 += 8;
        } while (v5 != v4);
      }
      v14 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v14 = *(_DWORD*)(game_GameModeData_instance_ + 72);
      }
      return v6 > v14;
    }
    else {
      if (v5 == v4) {
        v11 = 0;
      }
      else {
        v11 = 0;
        v12 = GameData_212e008[0];
        do {
          if (*(_QWORD*)v5 != 0) {
            v13 = (_DWORD*)__dynamic_cast(*(_QWORD*)v5, v12, &GameData_20f20a0,
                                          0);
            if (v13 != nullptr) {
              v11 += v13[21] *
                     (*(__int64 (**)(_DWORD*))(*(_QWORD*)v13 + 608LL))(v13);
            }
          }
          v5 += 8;
        } while (v5 != v4);
      }
      v15 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 608LL))(a1) + v11;
      v16 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v16 = *(_DWORD*)(game_GameModeData_instance_ + 72);
      }
      return v15 > v16;
    }
  }
  else {
    if (game_GameModeData_instance_ != 0) {
      v9 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    }
    else {
      v9 = 0;
    }
    return v9 < (*(int (**)(__int64))(*(_QWORD*)a1 + 608LL))(a1);
  }
}

__int64 ShopMenuItem_Buy_Unknown83(_QWORD* a1)
{
  __int64 result;
  unsigned __int16* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _WORD* v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;

  result = GameRoutine_8a1dc0(a1[15]);
  if ((_DWORD)result != 0) {
    if (ShopMenuItem_Buy_1868b60((__int64)a1)) {
      return 0;
    }
    v3 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
    v4 = GameData_212c878[0];
    v5 = *v3;
    result = 1;
    v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v5);
    if ((((0x10000000000LL << *(_BYTE*)(v6 + 72)) |
          (1LL << *(_BYTE*)(v6 + 73))) &
         0xFFBFFFFFFFA39FFFLL) == 0) {
      v7 = (_WORD*)a1[13];
      if (v7 == nullptr) {
        goto LABEL_24;
      }
      if (v7[414] != 0) {
        v8 = (v7[418] != 0) + 1;
      }
      else {
        v8 = v7[418] != 0;
      }
      if (v7[422] != 0) {
        ++v8;
      }
      v9 = v7[426] == 0;
      v10 = (unsigned __int16)v7[430];
      v11 = (unsigned __int16)v7[434];
      if (!v9) {
        ++v8;
      }
      if (v10 != 0) {
        ++v8;
      }
      v12 = v11 != 0 ? v8 + 1 : v8;
      if (v12 > 5 ||
          (v13 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) +
                            8LL * *(unsigned __int16*)(*(__int64 (**)(_QWORD*))(
                                      *a1 + 560LL))(a1)),
           (((0x10000000000LL << *(_BYTE*)(v13 + 72)) |
             (1LL << *(_BYTE*)(v13 + 73))) &
            0xFFBFFFFFFFA39FFFLL) == 0)) {
      LABEL_24:
        v14 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
        if ((GameRoutine_89ca00(v14) & 1) == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return result;
}

__int64 ShopMenuItem_Buy_186a5f0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v4 = *(_QWORD*)(a1 - 88);
  if (v4 == 0) {
    return GameRoutine_18674a0((__int64*)(a1 - 96), a2, a3);
  }
  v7 = __dynamic_cast(v4, GameData_212e030[0], GameData_2131c68[0], -2);
  if (v7 == 0 || (int)((*(_QWORD*)(v7 + 16) - *(_QWORD*)(v7 + 8)) >> 3) < 1) {
    return GameRoutine_18674a0((__int64*)(a1 - 96), a2, a3);
  }
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
  return GameRoutine_9d1500(v8, v9, v10, a2, a3, a3);
}

__int64 ShopMenuItem_Buy_Unknown78(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64* v4;
  _QWORD* v5;
  _QWORD* v6;
  char* v7;
  char* v8;
  __int64* v9;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  _DWORD* v18;
  _QWORD* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  char* v34;
  __int64* v35;
  int v36;
  __int64* v37;
  _DWORD* v38;
  __int64 v39;
  _BYTE* v40;
  __int64 v41;
  _BYTE v42[20];
  __int64 v43;
  _BYTE* v44;
  _QWORD* v45;
  _BYTE* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _BYTE* v50;
  int v51;
  int v52;
  int v53;
  _QWORD v54[4];
  _QWORD* v55;
  __int64* v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  int v60[3];

  v3 = *(_QWORD*)(a1 + 8);
  v56 = a2;
  if (v3 == 0) {
    return GameRoutine_1867b40(a1, (__int64)a2);
  }
  v4 = a2;
  v5 =
      (_QWORD*)__dynamic_cast(v3, GameData_212e030[0], GameData_2131c68[0], -2);
  a2 = v4;
  if (v5 == nullptr) {
    return GameRoutine_1867b40(a1, (__int64)a2);
  }
  v6 = v5;
  if ((int)((v5[2] - v5[1]) >> 3) < 1) {
    return GameRoutine_1867b40(a1, (__int64)a2);
  }
  v55 = v54;
  v54[0] = GameData_20f39c8;
  v54[1] = &v56;
  *(_QWORD*)v42 = GameData_20f39c8;
  *(_QWORD*)&v42[8] = &v56;
  v44 = v42;
  v8 = (char*)v5[1];
  v7 = (char*)v5[2];
  if ((int)((unsigned __int64)(v7 - v8) >> 3) < 1) {
    v27 = *(_QWORD*)(*v5 + 336LL);
    if (v27 != 0) {
      v28 = __dynamic_cast(v27, GameData_212e008[0], &GameData_20f20a0, 0);
      if (v28 != 0) {
        v29 = v28;
        v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 560LL))(v28);
        v23 = v44;
        LODWORD(v57) = *(_DWORD*)(v29 + 84);
        if (v44 == nullptr) {
          goto LABEL_64;
        }
        (*(void (**)(_BYTE*, __int64, __int64*))(*(_QWORD*)v44 + 48LL))(
            v44, v30, &v57);
      }
    }
  }
  else {
    v59 = 0;
    v57 = (__int64)&v57;
    v58 = &v57;
    if (v8 != v7) {
      v9 = GameData_212e008[0];
      do {
        if (*(_QWORD*)v8 != 0) {
          v16 = __dynamic_cast(*(_QWORD*)v8, v9, &GameData_20f20a0, 0);
          if (v16 != 0) {
            v17 = v58;
            v18 = (_DWORD*)v16;
            if (v58 != &v57) {
              while (1) {
                v19 = (_QWORD*)v17[2];
                if (*v19 == *(_QWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)v18 +
                                                                560LL))(v18)) {
                  break;
                }
                v17 = (__int64*)v17[1];
                if (v17 == &v57) {
                  goto LABEL_8;
                }
              }
            }
            if (v17 == &v57) {
            LABEL_8:
              v11 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)v18 + 560LL))(v18);
              v12 = v18[21];
              v13 = v11;
              v14 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
              v15 = v57;
              *(_QWORD*)(v14 + 8) = &v57;
              *(_QWORD*)(v14 + 16) = v13;
              *(_DWORD*)(v14 + 24) = v12;
              v57 = v14;
              *(_QWORD*)v14 = v15;
              *(_QWORD*)(v15 + 8) = v14;
              ++v59;
            }
            else {
              *((_DWORD*)v17 + 6) += v18[21];
            }
          }
        }
        v8 += 8;
      } while (v8 != v7);
      v20 = v58;
      v21 = fw_memory_g_heap_manager_ptr;
      if (v58 != &v57) {
        while (1) {
          v22 = v20[2];
          v23 = v44;
          v60[0] = *((_DWORD*)v20 + 6);
          if (v44 == nullptr) {
            break;
          }
          (*(void (**)(_BYTE*, __int64, int*))(*(_QWORD*)v44 + 48LL))(v44, v22,
                                                                      v60);
          v20 = (__int64*)v20[1];
          if (v20 == &v57) {
            goto LABEL_21;
          }
        }
      LABEL_64:
        GameRoutine_60a310(v23);
      }
    LABEL_21:
      if (v59 != 0) {
        a2 = v58;
        v24 = *(__int64**)(v57 + 8);
        *(_QWORD*)(*v58 + 8) = v24;
        *v24 = *a2;
        v59 = 0;
        if (a2 != &v57) {
          do {
            v25 = (__int64*)a2[1];
            if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
              v26 = 128;
            }
            else {
              v26 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v26);
            a2 = v25;
          } while (v25 != &v57);
        }
      }
    }
  }
  if (v44 == v42) {
    v31 = 32;
  }
  else {
    if (v44 == nullptr) {
      goto LABEL_37;
    }
    v31 = 40;
  }
  (*(void (**)(_BYTE*, __int64*))(*(_QWORD*)v44 + v31))(v44, a2);

LABEL_37:
  if (v55 == v54) {
    v32 = 32;
    goto LABEL_41;
  }
  if (v55 != nullptr) {
    v32 = 40;
  LABEL_41:
    (*(void (**)(_QWORD*, __int64*))(*v55 + v32))(v55, a2);
  }
  v34 = (char*)v6[1];
  v33 = (char*)v6[2];
  v35 = v56;
  if ((int)((unsigned __int64)(v33 - v34) >> 3) < 1) {
    v36 = *(_DWORD*)(a1 + 84) *
          (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 608LL))(a1);
  }
  else if (v34 == v33) {
    v36 = 0;
  }
  else {
    v36 = 0;
    v37 = GameData_212e008[0];
    do {
      if (*(_QWORD*)v34 != 0) {
        v38 = (_DWORD*)__dynamic_cast(*(_QWORD*)v34, v37, &GameData_20f20a0, 0);
        if (v38 != nullptr) {
          v36 +=
              v38[21] * (*(__int64 (**)(_DWORD*))(*(_QWORD*)v38 + 608LL))(v38);
        }
      }
      v34 += 8;
    } while (v34 != v33);
  }
  *(_DWORD*)v42 = 0;
  *(_QWORD*)&v42[4] = *game_g_empty_item_ptr;
  if (*(_BYTE*)GameData_212ceb0 != 0) {
    v39 = *GameData_212ceb0;
  }
  else {
    v39 = 0;
  }
  *(_QWORD*)&v42[12] = v39;
  WORD1(v43) = 0;
  HIDWORD(v43) = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = nullptr;
  v45 = &v46;
  v46 = nullptr;
  GameRoutine_930b90(&v43, GameData_212c8b0[0]);
  v51 = 0;
  v52 = v36;
  v53 = 0;
  GameRoutine_1a06060(v35 + 193, v42, 0);
  LODWORD(v44) = 0;
  v43 = 0;
  if ((v48 & 1) != 0) {
    *v50 = 0;
    v49 = 0;
  }
  else {
    LOWORD(v48) = 0;
  }
  GameRoutine_6e3b50(&v45, v46);
  v46 = nullptr;
  v47 = 0;
  v45 = &v46;
  if ((v48 & 1) != 0) {
    v40 = v50;
    if (v50 != nullptr) {
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v41);
      v40 = v46;
    }
  }
  else {
    v40 = nullptr;
  }
  return GameRoutine_6e3b50(&v45, v40);
}

#pragma GCC visibility pop
