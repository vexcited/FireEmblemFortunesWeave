#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21c99b8;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_e66f80(_QWORD);
__int64
ItemResult_Unknown29_alt1(__int64 result) __asm__("ItemResult_Unknown29");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void __attribute__((noreturn))
GameRoutine_e66f80_alt1() __asm__("GameRoutine_e66f80");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ItemResult_Unknown29(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_9b8fe0(PSEUDO_X8, __int64*,
                                                   const char**);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Util_1586140(__int64*, __int64*);
__int64 game_17356e0(__int64*, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
extern __int64* GameData_212c878[6];
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
void TextBoxEx_188ab20(__int64, const char*);
void game_gameui_1592340(__int64*, __int64, int);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
__int64 ItemResult_Unknown33(__int64 a1);

void ItemResult_Unknown29(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  _QWORD* v14;
  __int64 v15;
  char v16;
  __int64 v17;
  _QWORD** v18;
  char v19;
  __int64 v20;
  __int64 v21;

  v1 = *(_QWORD*)(a1 + 824);
  v2 = *(_QWORD*)(a1 + 832);
  v3 = v2 - v1;
  if (v2 != v1) {
    if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v3 >> 4)) >=
        0x24924924924924ALL) {
      GameRoutine_e66f80_alt1();
    }
    v5 = fw_memory_g_heap_manager_ptr;
    v6 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v3, 16, 0);
    v7 = 0;
    do {
      v11 = v1 + v7;
      v12 = v6 + v7;
      *(_DWORD*)v12 = *(_DWORD*)(v1 + v7);
      *(_QWORD*)(v12 + 4) = *(_QWORD*)(v1 + v7 + 4);
      if (*(_BYTE*)(v1 + v7 + 12) != 0) {
        v8 = *(_QWORD*)(v11 + 12);
      }
      else {
        v8 = 0;
      }
      *(_QWORD*)(v12 + 48) = 0;
      v9 = v12 + 48;
      *(_QWORD*)(v12 + 12) = v8;
      *(_WORD*)(v12 + 26) = 0;
      *(_DWORD*)(v12 + 28) = 0;
      *(_QWORD*)(v12 + 40) = v12 + 48;
      *(_QWORD*)(v12 + 56) = 0;
      *(_QWORD*)(v12 + 64) = 0;
      *(_QWORD*)(v12 + 72) = 0;
      *(_QWORD*)(v12 + 80) = 0;
      GameRoutine_930b90_alt1(v12 + 24, v11 + 24);
      v10 = *(_QWORD*)(v11 + 88);
      v7 += 112;
      *(_DWORD*)(v9 + 48) = *(_DWORD*)(v11 + 96);
      *(_QWORD*)(v9 + 40) = v10;
      *(_WORD*)(v9 + 56) = *(_WORD*)(v11 + 104);
    } while (v1 + v7 != v2);
    if (v7 == 112 && *(_WORD*)(v6 + 4) != 0 &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                             8LL * *(unsigned __int16*)(v6 + 4)) +
                  73LL) != 18) {
      if ((*(_BYTE*)(a1 + 272) & 1) != 0) {
        *(_QWORD*)(a1 + 280) = 17;
        v13 = *(char**)(a1 + 288);
      }
      else {
        *(_BYTE*)(a1 + 272) = 34;
        v13 = (char*)(a1 + 273);
      }
      strcpy(v13, "Layout/Common.arc");
      GameRoutine_60a020_alt1(a1 + 296, "Common_TlpResultTlp_GetRewardInfo");
      *(_BYTE*)(a1 + 896) = 1;
    }
    do {
      v15 = v6 + v7;
      v16 = *(_BYTE*)(v6 + v7 - 48);
      *(_DWORD*)(v15 - 80) = 0;
      *(_QWORD*)(v15 - 88) = 0;
      if ((v16 & 1) != 0) {
        **(_BYTE**)(v15 - 32) = 0;
        *(_QWORD*)(v15 - 40) = 0;
      }
      else {
        *(_WORD*)(v15 - 48) = 0;
      }
      v17 = v6 + v7;
      v18 = (_QWORD**)(v6 + v7 - 64);
      GameRoutine_6e3b50_alt1(v6 + v7 - 72, *v18);
      v19 = *(_BYTE*)(v15 - 48);
      *(_QWORD*)(v17 - 56) = 0;
      *(_QWORD*)(v17 - 72) = v18;
      *v18 = nullptr;
      if ((v19 & 1) != 0) {
        v14 = *(_QWORD**)(v17 - 32);
        if (v14 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v20 = 128;
          }
          else {
            v20 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v20, (__int64)v14);
          v14 = *(_QWORD**)(v17 - 64);
        }
      }
      else {
        v14 = nullptr;
      }
      GameRoutine_6e3b50_alt1(v6 + v7 - 72, v14);
      v7 -= 112;
    } while (v7 != 0);
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v21, v6);
  }
}

__int64 ItemResult_Unknown33(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  const char* v7;
  const char* v8;
  const char* v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  const char* v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64* v30;
    __int64 v31;
  } v30_;
  const char* v32[2];
  struct {
    __int64 v33;
    __int64 v34;
  } v33_;
  float v35;

  v32[0] = "L_Txt";
  v32[1] = (_BYTE*)(((_WORD*)0x4LL) + 1);
  GameRoutine_9b8fe0((void*)(&v33_.v33), (__int64*)(a1 + 168), v32);
  if (v33_.v34 != 0) {
    v2 = std___1___shared_weak_count_lock(v33_.v34);
    v3 = v33_.v33;
    if (v33_.v34 != 0) {
      std___1___shared_weak_count___release_weak(v33_.v34);
    }
    if (v2 == 0 || v3 == 0) {
      if (v2 == 0) {
        goto LABEL_27;
      }
    }
    else {
      v5 = *(unsigned __int8*)(a1 + 872);
      v6 = *(_QWORD*)(a1 + 880);
      if ((v5 & 1) == 0) {
        v6 = v5 >> 1;
      }
      if (v6 != 0) {
        if ((v5 & 1) != 0) {
          v7 = *(const char**)(a1 + 888);
        }
        else {
          v7 = (const char*)(a1 + 873);
        }
        if (v7 != nullptr) {
          v8 = v7;
        }
        else {
          v8 = *msg_MessageManager_empty_text__ptr;
        }
        GameRoutine_60a020_alt1(*msg_MessageManager_instance__ptr[0] + 14704,
                                v8);
      }
      if ((*(_BYTE*)(a1 + 848) & 1) != 0) {
        v9 = *(const char**)(a1 + 864);
      }
      else {
        v9 = (const char*)(a1 + 849);
      }
      TextBoxEx_188ab20(v3, v9);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
LABEL_27:
  if (*(_BYTE*)(a1 + 896) != 1) {
    LayoutAccessor_1560070((void*)(&v30_.v30), (__int64*)(a1 + 168),
                           "L_ItemList");
    if (v30_.v31 == 0) {
      goto LABEL_49;
    }
    v14 = std___1___shared_weak_count_lock(v30_.v31);
    if (v14 != 0) {
      v15 = v14;
      if (v30_.v30 != nullptr) {
        Util_1586140(v30_.v30, (__int64*)(a1 + 824));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
      }
    }
    v16 = v30_.v31;
    if (v30_.v31 == 0) {
      goto LABEL_49;
    }
  LABEL_37:
    std___1___shared_weak_count___release_weak(v16);
    goto LABEL_49;
  }
  v10 = LayoutAccessor_155fbe0((__int64*)(a1 + 168), "L_InfoDetail");
  v11 = *(_QWORD*)(a1 + 824);
  v12 = GameData_212c878[0];
  if (*(_BYTE*)(a1 + 897) == 1) {
    v13 = *(_DWORD*)(v11 + 92);
  }
  else {
    v13 = 1;
  }
  game_gameui_1592340(v10,
                      *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8LL * *(unsigned __int16*)(v11 + 4)),
                      v13);
  if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                            8LL * *(unsigned __int16*)(v11 + 4)) +
                 337LL) &
       4) != 0 &&
      (*(_BYTE*)(a1 + 898) & 1) != 0) {
    LayoutAccessor_1560070((void*)(&v33_.v33), (__int64*)(a1 + 168), "L_Bg");
    if (v33_.v34 != 0) {
      v17 = std___1___shared_weak_count_lock(v33_.v34);
      v18 = v33_.v33;
      if (v33_.v34 != 0) {
        std___1___shared_weak_count___release_weak(v33_.v34);
      }
      if (v17 != 0 && v18 != 0) {
        LayoutAccessor_1562cf0(v18, "Color0");
      }
      else if (v17 == 0) {
        goto LABEL_49;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        v16 = v17;
        goto LABEL_37;
      }
    }
  }
LABEL_49:
  LayoutAccessor_1562cf0(a1 + 168, "ArrowOff");
  v19 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 168),
                                      (__int64)"L_Txt/T_Txt");
  if (v19 != 0) {
    v20 = v19;
    v21 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 168),
                                                 (__int64)"L_Txt/T_Txt");
    if (v21 != nullptr) {
      ui_text_190a0c0((float*)&v33_.v33, (__int64)v32, &v35, v21, v21[27]);
      v22 = v32[0];
    }
    else {
      v22 = nullptr;
    }
    v23 = *(_BYTE*)(v20 + 88);
    *(_QWORD*)(v20 + 80) = v22;
    *(_BYTE*)(v20 + 88) = v23 | 0x10;
  }
  v24 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 168),
                                        (__int64)"A_Contents");
  if (v24 != 0) {
    Alignment_56b600(v24);
    v25 = *(_QWORD*)(a1 + 176);
    if (v25 != 0) {
      v26 = std___1___shared_weak_count_lock(v25);
      if (v26 != 0) {
        v27 = v26;
        v28 = *(_QWORD*)(a1 + 168);
        if (v28 != 0) {
          ControlCreator_13633c0(v28);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          std___1___shared_weak_count___release_weak(v27);
        }
      }
    }
  }
  return game_17356e0((__int64*)(a1 + 168), (__int64)"A_Contents");
}

#pragma GCC visibility pop
