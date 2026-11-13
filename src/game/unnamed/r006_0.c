#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_2011d60[])();

extern __int64 (*GameData_2011e00[6])();

extern __int64 (*GameData_2011e18[3])();

extern __int64 GameData_212bf68;

extern _QWORD GameData_212d280;

extern __int64* GameData_212d460[6];

extern __int64* GameData_212d670[3];

extern __int64 GameData_212d690;

extern __int64 GameData_212dbb8[9];

extern int* GameData_212df08;

extern _UNKNOWN* GameData_212df10;

extern __int64* GameData_212fc38[2];

extern __int64* GameData_2130258[5];

extern char* GameData_2167828;

extern __int64 GameData_21c9608;

extern __int64 GameData_21ee240;

extern __int64 GameData_21f3d10;

extern char GameData_21f3fe4;

extern int GameData_220f854;

extern _UNKNOWN GameData_220f858;

extern __int64 GameData_22336e0;

extern __int64 GameData_22356f0;

extern __int64 GameData_22356f8;

extern __int64 GameData_2235708;

extern __int64 GameData_2236800;

extern __int64 GameData_2241708;

extern __int64 GameData_2241710;

extern __int64 GameData_2258ba8;

extern __int64 GameData_2265ae0;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_106c6d0(void);

__int64 GameRoutine_106f310(__int64 result);

__int64 GameRoutine_109fee0(_QWORD, float, float);

__int64 GameRoutine_112180(_QWORD, _QWORD);

__int64 GameRoutine_112cc60(_QWORD, _QWORD, _QWORD);

void GameRoutine_1134ae0(__int64, __int64);

float GameRoutine_113c060(_QWORD);

__int64 GameRoutine_113c310(_QWORD);

__attribute__((swiftcall)) void GameRoutine_113f5c0(PSEUDO_X8, _QWORD, _QWORD,
                                                    double);

void __attribute__((noreturn)) GameRoutine_113fc50(_QWORD);

__int64 GameRoutine_1376490(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_13777b0(_QWORD, _QWORD);

__int64 GameRoutine_155f480(_QWORD, _QWORD);

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);

__int64 GameRoutine_1562f00(_QWORD, _QWORD);

__int64 GameRoutine_1563030(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1567000(_QWORD, _QWORD);

__int64 GameRoutine_156c910(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c60(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_58dee0(_QWORD, _QWORD);

__int64 GameRoutine_58df60(_QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);

void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);

void __attribute__((noreturn)) GameRoutine_60a230(_QWORD);

__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_657a50(_QWORD, _QWORD);

__int64 GameRoutine_810a70(_QWORD, _QWORD, long double);

__int64 GameRoutine_eaec10(_QWORD, _QWORD);

__int64 GameRoutine_f482e0(void);

__attribute__((swiftcall)) void
GameRoutine_a6ea10_alt1(PSEUDO_X8, __int64, int) __asm__("GameRoutine_a6ea10");

__attribute__((swiftcall)) void game_character_1077d10(PSEUDO_X8,
                                                       __int64 result);

__int64*
GameRoutine_1152360_alt1(_QWORD*,
                         unsigned __int8*) __asm__("GameRoutine_1152360");

__int64* game_8224a0(unsigned __int8);

__int64 CharacterAnimator_107a6f0(__int64);

__int64 GameHr_1562680(__int64 result, const char*, float);

__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);

__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);

__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);

__int64 game_character_10778e0(__int64 result, __int64, unsigned __int64);

__int64 memset(__int64, int, unsigned __int64);

__int64 std___1___shared_weak_count___release_weak(__int64);

__int64 strncpy(__int64, const char*, unsigned __int64);

__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);

__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);

__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);

extern __int64 (*eft_ClampCurve_ptr)();

extern __int64* game_talk_g_window_layout_ptr[5];

extern __int64 fw_memory_g_heap_manager_ptr;

extern __int64 game_GameModeData_instance_;

extern __int64 game_ProcGameSkipView_instance_;

extern char** msg_MessageManager_empty_text__ptr;

int __cxa_guard_acquire(__int64);

int memcmp(__int64, __int64, unsigned __int64);

int strcmp(const char*, const char*);

unsigned __int64 strlen(const char*);

void CharacterAppearance_1075a00(__int64, __int64, unsigned __int64);

void CharacterModel_10711e0(__int64, __int64, __int64);

void GameHr_7f7720(__int64, __int64);

void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");

void GameRoutine_8791a0_alt1(__int64) __asm__("GameRoutine_8791a0");

void __cxa_guard_release(__int64);

void game_113d3c0(__int64, int);

void nn_mem_StandardAllocator_Free(__int64, __int64);

void GameHr_102f2a0(__int64* a1);

void GameHr_102f3c0(__int64* a1, __int64* a2, __int64 a3);

void GameHr_104ed10(__int64 a1);

void GameHr_1070d60(__int64 a1, _QWORD* a2);

void GameHr_10adda0(__int64 a1, __int64 a2);

void GameHr_1133b20(__int64 a1);

__int64 GameHr_1156f80(__int64 a1);

_QWORD* GameRoutine_104c660_alt1(_QWORD* result,
                                 _QWORD*) __asm__("GameRoutine_104c660");

__attribute__((swiftcall)) void game_810a70(PSEUDO_X8, __int64 result, _BYTE*,
                                            float);

__int64 GameHr_14a1390(__int64*, char);

__int64 GameHr_156ca00(__int64, const char*);

__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");

__int64
GameRoutine_113c310_alt1(unsigned __int8*) __asm__("GameRoutine_113c310");

char* GameRoutine_60a060_alt1(char*, __int64,
                              unsigned __int64) __asm__("GameRoutine_60a060");

extern __int64* game_g_frame_clock_ptr[3];

float* GameRoutine_104b900_alt1(float* result,
                                char) __asm__("GameRoutine_104b900");

void GameHr_10aa0a0(__int64**);

void Seq_11331c0(__int64);

void Seq_1134ae0(__int64, __int64);

void __attribute__((noreturn))
GameRoutine_104c620_alt1() __asm__("GameRoutine_104c620");

void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");

void game_113c060(unsigned __int8*);

void GameHr_104af40(__int64 a1);

void GameHr_104b280(__int64 a1, __int64 a2, unsigned __int64 a3, const char* a4,
                    __int64 a5, __int64 a6);

__int64 GameHr_109f640(__int64 a1, const char* a2);

_QWORD* GameHr_112ff80(__int64 a1, const char* a2, const char* a3,
                       const char* a4, int a5, int a6);

void GameHr_1135760(__int64 a1);

__int64 GameHr_113a550(__int64 a1, __int64* a2);

void GameHr_114eb80(_QWORD* a1);

void GameHr_102f2a0(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = a1[1];
  v2 = a1[2];
  for (i = fw_memory_g_heap_manager_ptr; v1 != v2; v2 = a1[2]) {
    a1[2] = v2 - 112;
    v5 = *(_QWORD*)(v2 - 16);
    if (v5 != 0) {
      std___1___shared_weak_count___release_weak(v5);
    }
    if (*(_BYTE*)(v2 - 32) == 1) {
      if ((*(_BYTE*)(v2 - 64) & 1) != 0) {
        v6 = *(_QWORD*)(v2 - 48);
        if (v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)i + v7, v6);
        }
      }
      if ((*(_BYTE*)(v2 - 88) & 1) != 0) {
        v8 = *(_QWORD*)(v2 - 72);
        if (v8 != 0) {
          if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)i + v9, v8);
        }
      }
    }
  }
  if (*a1 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)i + v10, *a1);
  }
}

void GameHr_102f3c0(__int64* a1, __int64* a2, __int64 a3)
{
  _QWORD* v3;
  __int64* v4;
  __int64* v6;
  __int64 v7;
  __int64* v8;
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

  if (a1 != a2) {
    v3 = (_QWORD*)(a3 + 96);
    v4 = a1 + 6;
    v6 = a1;
    do {
      v9 = *(v4 - 5);
      v8 = v4 - 6;
      *(v3 - 12) = *(v4 - 6);
      *(v3 - 11) = v9;
      LODWORD(v9) = *((_DWORD*)v4 - 8);
      *((_BYTE*)v3 - 72) = 0;
      *((_BYTE*)v3 - 16) = 0;
      *((_DWORD*)v3 - 20) = v9;
      if (*((_BYTE*)v4 + 32) == 1) {
        v10 = *(v4 - 3);
        v11 = *(v4 - 1);
        *(v3 - 8) = *(v4 - 2);
        *(v3 - 7) = v11;
        *(v3 - 9) = v10;
        *(v4 - 2) = 0;
        *(v4 - 1) = 0;
        *(v4 - 3) = 0;
        *(v3 - 5) = v4[1];
        v12 = *v4;
        *(v3 - 4) = v4[2];
        *(v3 - 6) = v12;
        *v4 = 0;
        v4[1] = 0;
        v4[2] = 0;
        LODWORD(v12) = *((_DWORD*)v4 + 6);
        LOBYTE(v10) = *((_BYTE*)v4 + 28);
        *((_BYTE*)v3 - 16) = 1;
        *((_BYTE*)v3 - 20) = v10;
        *((_DWORD*)v3 - 6) = v12;
      }
      *(v3 - 1) = v4[5];
      v7 = v4[6];
      v4 += 14;
      *v3 = v7;
      v3 += 14;
      v8[11] = 0;
      v8[12] = 0;
    } while (v8 + 14 != a2);
    v13 = fw_memory_g_heap_manager_ptr;
    do {
      v14 = v6[12];
      if (v14 != 0) {
        std___1___shared_weak_count___release_weak(v14);
      }
      if (*((_BYTE*)v6 + 80) == 1) {
        if ((v6[6] & 1) != 0) {
          v15 = v6[8];
          if (v15 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
              v16 = 128;
            }
            else {
              v16 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v16, v15);
          }
        }
        if ((v6[3] & 1) != 0) {
          v17 = v6[5];
          if (v17 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
              v18 = 128;
            }
            else {
              v18 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v18, v17);
          }
        }
      }
      v6 += 14;
    } while (v6 != a2);
  }
}

__int64 GameHr_1035980(__int64 result, __int64 a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  const char* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  const char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v2 = *(_QWORD*)(result + 24);
  v4 = (_QWORD*)result;
  if (*(_QWORD*)(result + 32) != v2) {
    v5 = 0;
    v6 = 0;
    do {
      result = GameRoutine_58df60(*(_QWORD*)(*(_QWORD*)(v2 + v5) + 24LL));
      v2 = v4[3];
      v7 = v4[4];
      ++v6;
      v5 += 64;
    } while (v6 < (v7 - v2) >> 6);
    if (v7 != v2) {
      v8 = 0;
      v9 = 0;
      do {
        v11 = v4[2];
        if (v11 != 0 && (v12 = GameRoutine_1a0a0c0(v11)) != 0) {
          v13 = v12;
          v10 = GameRoutine_155f480(v4[1], "N_NPC");
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v14 = v10;
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            GameRoutine_1a09c50(v13);
            v10 = v14;
          }
        }
        else {
          v10 = GameRoutine_155f480(0, "N_NPC");
        }
        result = GameRoutine_58dee0(v10, *(_QWORD*)(v4[3] + v8));
        ++v9;
        v8 += 64;
      } while (v9 < (__int64)(v4[4] - v4[3]) >> 6);
    }
  }
  v15 = *(_QWORD*)(a2 + 112);
  v16 = *(_QWORD*)(a2 + 120);
  if (v15 != v16) {
    v17 = "Default";
    v18 = 0;
    v34 = v16;
    do {
      v19 = v4[3];
      if (v18 >= (v4[4] - v19) >> 6) {
        break;
      }
      v20 = (__int64*)(v19 + (v18 << 6));
      v21 = *v20;
      v22 = v20[3];
      if (v22 != 0) {
        v23 = GameRoutine_1a0a0c0(v22);
        v24 = v23 != 0 ? v20[2] : 0LL;
      }
      else {
        v24 = 0;
        v23 = 0;
      }
      v25 = (__int64*)v4[7];
      v26 = (__int64*)v4[8];
      if (v25 == v26) {
      LABEL_24:
        result = GameRoutine_1562cf0(v24, v17);
      }
      else {
        while (1) {
          v27 = *v25;
          v25 += 16;
          if (v27 == *(_QWORD*)(v15 + 96)) {
            break;
          }
          if (v25 == v26) {
            goto LABEL_24;
          }
        }
        v28 = v4[2];
        v29 = v17;
        if (v28 != 0) {
          v30 = GameRoutine_1a0a0c0(v28);
          if (v30 != 0) {
            v31 = v4[1];
          }
          else {
            v31 = 0;
          }
        }
        else {
          v31 = 0;
          v30 = 0;
        }
        v32 = GameRoutine_155f480(v31, "N_NPC");
        v33 = GameRoutine_155f480(v31, "N_Select");
        GameRoutine_58df60(v32);
        GameRoutine_58dee0(v33, v21);
        if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
          GameRoutine_1a09c50(v30);
        }
        result = GameRoutine_1563280(v24, "Select", 0);
        v17 = v29;
        v16 = v34;
        if ((result & 1) == 0) {
          result = GameRoutine_1562680(v24, "Select", 1.0);
        }
      }
      if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        result = GameRoutine_1a09c50(v23);
      }
      ++v18;
      v15 += 112;
    } while (v15 != v16);
  }
  return result;
}

void GameHr_104af40(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v1 = *(__int64**)(a1 + 72);
  v2 = *(__int64**)(a1 + 80);
  if (v1 != v2) {
    do {
      v4 = *(_QWORD*)*v1;
      if (v4 != 0 && *(_DWORD*)(v4 + 16) == *(_DWORD*)(*v1 + 8)) {
        GameHr_14a1390(v1, 1);
      }
      v1 += 8;
    } while (v1 != v2);
    v1 = *(__int64**)(a1 + 72);
    v2 = *(__int64**)(a1 + 80);
  }
  v5 = (__int64)v1;
  if (v1 != v2) {
    while (1) {
      v6 = (__int64*)*(v2 - 2);
      if (v2 - 6 == v6) {
        v7 = 32;
      }
      else {
        if (v6 == nullptr) {
          goto LABEL_16;
        }
        v7 = 40;
      }
      (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
    LABEL_16:
      v8 = *(v2 - 7);
      if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
      v2 -= 8;
      if (v2 == v1) {
        v5 = *(_QWORD*)(a1 + 72);
        break;
      }
    }
  }
  *(_QWORD*)(a1 + 80) = v1;
  if (v5 == 0) {
    goto LABEL_38;
  }
  if ((__int64*)v5 != v1) {
    while (1) {
      v9 = (__int64*)*(v1 - 2);
      if (v1 - 6 == v9) {
        v10 = 32;
      }
      else {
        if (v9 == nullptr) {
          goto LABEL_29;
        }
        v10 = 40;
      }
      (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
    LABEL_29:
      v11 = *(v1 - 7);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v11);
      }
      v1 -= 8;
      if (v1 == (__int64*)v5) {
        v12 = *(_QWORD*)(a1 + 72);
        *(_QWORD*)(a1 + 80) = v5;
        v5 = v12;
        if (v12 == 0) {
          goto LABEL_38;
        }
        goto LABEL_35;
      }
    }
  }
  *(_QWORD*)(a1 + 80) = v5;
LABEL_35:
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v13 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                v5);
LABEL_38:
  v14 = *(_QWORD*)(a1 + 32);
  if (v14 == 0) {
    goto LABEL_60;
  }
  v15 = *(_QWORD*)(a1 + 40);
  if (v14 == v15) {
    goto LABEL_57;
  }
  v16 = fw_memory_g_heap_manager_ptr;
  do {
    v17 = *(_QWORD**)(v15 - 16);
    if ((_QWORD*)(v15 - 48) == v17) {
      v18 = 32;
      goto LABEL_46;
    }
    if (v17 != nullptr) {
      v18 = 40;
    LABEL_46:
      (*(void (**)(__int64))(*v17 + v18))((__int64)v17);
    }
    if ((*(_BYTE*)(v15 - 80) & 1) != 0) {
      v19 = *(_QWORD*)(v15 - 64);
      if (v19 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v20, v19);
      }
    }
    v21 = *(_QWORD*)(v15 - 88);
    if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak(v21);
    }
    v15 -= 96;
  } while (v15 != v14);
  v22 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 40) = v14;
  v14 = v22;
  if (v22 != 0) {
  LABEL_57:
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  v14);
  }
LABEL_60:
  if ((*(_BYTE*)a1 & 1) != 0) {
    v24 = *(_QWORD*)(a1 + 16);
    if (v24 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
    }
  }
}

void GameHr_104b280(__int64 a1, __int64 a2, unsigned __int64 a3, const char* a4,
                    __int64 a5, __int64 a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  unsigned __int8 explicit;
  int* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  const char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  unsigned __int64 v28;
  _QWORD* v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  _QWORD* v43;
  __int64 v44;
  char* v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  _QWORD* v51;
  _QWORD* v52;
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  const char* v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  __int64 v70;
  struct {
    __int64 v71;
    unsigned __int64 v72;
    __int64 v73;
  } v71_;
  struct {
    _QWORD v74[4];
    _QWORD* v75;
  } v74_;
  struct {
    _QWORD v76[4];
    _QWORD* v77;
  } v76_;

  v6 = *(_QWORD*)(a1 + 24);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v13 = GameData_212df08;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
    *v13 = wld_Crc32(0, "ModelModule", 0xBu);
    __cxa_guard_release((__int64)GameData_212df10);
  }
  v14 = *(_QWORD*)(v6 + 512);
  v15 = v14;
  do {
    if (v15 == *(_QWORD*)(v6 + 504)) {
      return;
    }
    v16 = *(_DWORD*)(v15 - 16);
    v15 -= 16;
    v14 -= 16;
  } while (v16 != *v13);
  if (*(_QWORD*)(v6 + 512) != v14) {
    v17 = *(_QWORD*)(v14 + 8);
    if (v17 != 0) {
      v18 = *(_QWORD*)(v17 + 24);
      v20 = *(_QWORD**)(v18 + 312);
      v19 = *(_QWORD**)(v18 + 320);
      if (v20 != v19) {
        v21 = fw_memory_g_heap_manager_ptr;
        v64 = a4;
        v65 = a6;
        v62 = a2;
        v63 = a3;
        v68 = *(_QWORD**)(v18 + 320);
        while (1) {
          v22 = (*(_BYTE*)(*v20 + 376LL) & 1) != 0
                    ? *(const char**)(*v20 + 392LL)
                    : (const char*)(*v20 + 377LL);
          if (strcmp(v22, a4) == 0) {
            break;
          }
        LABEL_9:
          v20 += 2;
          if (v20 == v19) {
            goto LABEL_98;
          }
        }
        v74_.v75 = nullptr;
        v71_.v72 = 0;
        v71_.v73 = 0;
        v71_.v71 = 0;
        v23 = *v20;
        v24 = v20[1];
        if (v24 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                    memory_order_relaxed);
          v69 = v23;
          v70 = v24;
        }
        else {
          v69 = *v20;
          v70 = 0;
        }
        GameRoutine_60a060_alt1((char*)&v71_.v71, a2, a3);
        v25 = *(_QWORD*)(a6 + 32);
        if (v25 != 0) {
          if (v25 == a6) {
            v76_.v77 = v76_.v76;
            (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v25 + 24LL))(v25,
                                                                   v76_.v76);
          }
          else {
            v76_.v77 =
                (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
          }
        }
        else {
          v76_.v77 = nullptr;
        }
        GameRoutine_104c660_alt1(v76_.v76, v74_.v74);
        if (v76_.v77 == v76_.v76) {
          v26 = 32;
        }
        else {
          if (v76_.v77 == nullptr) {
          LABEL_27:
            v27 = (__int64*)v21;
            v29 = *(_QWORD**)(a1 + 40);
            v28 = *(_QWORD*)(a1 + 48);
            if ((unsigned __int64)v29 < v28) {
              *v29 = v69;
              v29[1] = v70;
              if (v70 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v70 + 8),
                                          1u, memory_order_relaxed);
              }
              if ((v71_.v71 & 1) != 0) {
                fw_text_String_CopyTerminated(v29 + 2, v71_.v73, v71_.v72);
                v31 = v74_.v75;
                if (v74_.v75 != nullptr) {
                LABEL_32:
                  if (v31 == v74_.v74) {
                    v29[10] = v29 + 6;
                    (*(void (**)(_QWORD*))(*v74_.v75 + 24LL))(v74_.v75);
                  }
                  else {
                    v29[10] = (*(__int64 (**)(_QWORD*))(*v31 + 16LL))(v31);
                  }
                  goto LABEL_53;
                }
              }
              else {
                v29[3] = v71_.v72;
                v30 = v71_.v71;
                v29[4] = v71_.v73;
                v29[2] = v30;
                v31 = v74_.v75;
                if (v74_.v75 != nullptr) {
                  goto LABEL_32;
                }
              }
              v29[10] = 0;
            LABEL_53:
              v42 = v29 + 12;
              v21 = (__int64)v27;
              goto LABEL_85;
            }
            v32 = *(_QWORD*)(a1 + 32);
            v33 = 1 - 0x5555555555555555LL * (((__int64)v29 - v32) >> 5);
            if (v33 > 0x2AAAAAAAAAAAAAALL) {
              GameRoutine_104c620_alt1();
            }
            v34 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v28 - v32) >> 5);
            if (2 * v34 > v33) {
              v33 = 2 * v34;
            }
            if (v34 >= 0x155555555555555LL) {
              v35 = 0x2AAAAAAAAAAAAAALL;
            }
            else {
              v35 = v33;
            }
            if (v35 > 0x2AAAAAAAAAAAAAALL) {
              GameRoutine_60a210_alt1();
            }
            v36 = 96 * v35;
            v37 = fw_memory_HeapManager_Allocate(*v27, 96 * v35, 16, 0);
            v38 = (_QWORD*)((char*)v29 + v37 - v32);
            v39 = v37;
            *v38 = v69;
            v38[1] = v70;
            if (v70 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v70 + 8), 1u,
                                        memory_order_relaxed);
            }
            if ((v71_.v71 & 1) != 0) {
              fw_text_String_CopyTerminated(v38 + 2, v71_.v73, v71_.v72);
            }
            else {
              v40 = v71_.v72;
              v38[2] = v71_.v71;
              v38[3] = v40;
              v38[4] = v71_.v73;
            }
            v41 = v74_.v75;
            v67 = v36;
            if (v74_.v75 != nullptr) {
              if (v74_.v75 == v74_.v74) {
                v38[10] = v38 + 6;
                (*(void (**)(_QWORD*))(*v41 + 24LL))(v41);
              }
              else {
                v38[10] = (*(__int64 (**)(__int64))(*v74_.v75 + 16LL))(
                    (__int64)v74_.v75);
              }
            }
            else {
              v38[10] = 0;
            }
            v44 = *(_QWORD*)(a1 + 32);
            v43 = *(_QWORD**)(a1 + 40);
            v66 = (char*)v43 - v44;
            if (v43 == (_QWORD*)v44) {
              v21 = (__int64)v27;
            LABEL_80:
              v42 = v38 + 12;
              *(_QWORD*)(a1 + 32) = (char*)v38 - v66;
              *(_QWORD*)(a1 + 40) = v38 + 12;
              *(_QWORD*)(a1 + 48) = v39 + v67;
              if (v44 != 0) {
                v58 = 128;
                if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
                  v58 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v58, v44);
              }
              a4 = v64;
              a6 = v65;
              a2 = v62;
              a3 = v63;
            LABEL_85:
              v59 = v74_.v75;
              *(_QWORD*)(a1 + 40) = v42;
              if (v59 == v74_.v74) {
                v19 = v68;
                v60 = 32;
              }
              else {
                v19 = v68;
                if (v59 == nullptr) {
                  goto LABEL_90;
                }
                v60 = 40;
              }
              (*(void (**)(__int64))(*v59 + v60))((__int64)v59);
            LABEL_90:
              if ((v71_.v71 & 1) != 0 && v71_.v73 != 0) {
                v61 = 128;
                if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
                  v61 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v61, v71_.v73);
              }
              if (v70 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
                std___1___shared_weak_count___release_weak(v70);
              }
              goto LABEL_9;
            }
            v45 = (char*)v29 - v32 + -32 * (((__int64)v43 - v44) >> 5);
            v46 = *(_QWORD**)(a1 + 32);
            v47 = (__int64)&v45[v39 + 48];
            do {
              *(_QWORD*)(v47 - 48) = *v46;
              *(_QWORD*)(v47 - 40) = v46[1];
              *v46 = 0;
              v46[1] = 0;
              v48 = v46[4];
              v49 = v46[2];
              *(_QWORD*)(v47 - 24) = v46[3];
              *(_QWORD*)(v47 - 16) = v48;
              *(_QWORD*)(v47 - 32) = v49;
              v46[3] = 0;
              v46[4] = 0;
              v46[2] = 0;
              v50 = (_QWORD*)v46[10];
              if (v50 != nullptr) {
                if (v46 + 6 == v50) {
                  *(_QWORD*)(v47 + 32) = v47;
                  (*(void (**)(_QWORD, __int64))(*(_QWORD*)v46[10] + 24LL))(
                      v46[10], v47);
                }
                else {
                  *(_QWORD*)(v47 + 32) = v50;
                  v46[10] = 0;
                }
              }
              else {
                *(_QWORD*)(v47 + 32) = 0;
              }
              v46 += 12;
              v47 += 96;
            } while (v46 != v43);
            v51 = (_QWORD*)(v44 + 48);
            v21 = (__int64)v27;
            while (1) {
              v53 = (_QWORD*)v51[4];
              if (v51 == v53) {
                v54 = 32;
              }
              else {
                if (v53 == nullptr) {
                  goto LABEL_70;
                }
                v54 = 40;
              }
              (*(void (**)(__int64))(*v53 + v54))((__int64)v53);
            LABEL_70:
              if ((*(_BYTE*)(v51 - 4) & 1) != 0) {
                v55 = *(v51 - 2);
                if (v55 != 0) {
                  v56 = 128;
                  if (*(_QWORD*)(*v27 + 200) == 0) {
                    v56 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v27 + v56, v55);
                }
              }
              v57 = *(v51 - 5);
              if (v57 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
                std___1___shared_weak_count___release_weak(v57);
              }
              v52 = v51 + 6;
              v51 += 12;
              if (v52 == v43) {
                v44 = *(_QWORD*)(a1 + 32);
                goto LABEL_80;
              }
            }
          }
          v26 = 40;
        }
        (*(void (**)(__int64))(*v76_.v77 + v26))((__int64)v76_.v77);
        goto LABEL_27;
      }
    LABEL_98:
      GameRoutine_104b900_alt1((float*)a1, 1);
    }
  }
}

void GameHr_104ed10(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;

  v1 = *(_QWORD*)(GameData_21f3d10 + 72);
  if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) == 0) {
    v1 = *(_BYTE*)(GameData_21f3d10 + 64) >> 1;
  }
  if (v1 != 10) {
    goto LABEL_10;
  }
  v2 = GameData_21f3d10 + 65;
  if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) != 0) {
    v2 = *(_QWORD*)(GameData_21f3d10 + 80);
  }
  v3 = *(_QWORD*)v2;
  v4 = *(unsigned __int16*)(v2 + 8);
  if (v3 != *(_QWORD*)"Hub_101_A1" || v4 != *(unsigned __int16*)"A1") {
  LABEL_10:
    v6 = *(_QWORD*)(GameData_21c9608 + 328);
    if ((v6 & 0x10) == 0) {
      *(_QWORD*)(GameData_21c9608 + 328) = v6 | 0x10;
      GameRoutine_8791a0_alt1(a1);
    }
  }
}

__int64 GameHr_104efb0()
{
  __int64 v0;
  int v1;

  v0 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL);
  v1 = *(_DWORD*)(v0 + 232);
  if (v1 <= 2) {
    v1 = 2;
  }
  *(_DWORD*)(v0 + 232) = v1;
  return GameRoutine_f482e0();
}

void GameHr_1070d60(__int64 a1, _QWORD* a2)
{
  unsigned __int64 v4;
  __int64* v5;
  __int64 v6;
  unsigned __int64 v7;
  const char* v8;
  unsigned __int64 v9;
  int v10;
  const char* v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64** v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64** v22;
  __int64* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  bool v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  struct {
    unsigned __int8 v34;
    _BYTE v35[7];
    char gap8_[8];
    const char* v36;
  } v35_;
  struct {
    _BYTE v37[8];
    int v38;
  } v37_;
  _QWORD v39[4];
  _BYTE v40[640];

  memset((__int64)v40, 0, 0x280u);
  v4 = a2[1] - *a2;
  __builtin_memset(v39, 0, sizeof(v39));
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((int)(v4 >> 3) >= 1) {
    v6 = ((v4 >> 3) & 0x7FFFFFFF) - 1;
    do {
      v8 = *(const char**)(*a2 + 8 * v6);
      if (v8 != nullptr) {
        if (strcmp((const char*)v39, *(const char**)(*a2 + 8 * v6)) != 0) {
          strncpy((__int64)v39, v8, 0x1Fu);
          HIBYTE(v39[3]) = 0;
          CharacterModel_10711e0(a1, (__int64)v39, (__int64)v40);
        }
        v9 = strlen(v8);
        game_character_10778e0((__int64)v37_.v37, (__int64)v8, v9);
        if ((unsigned int)(v37_.v38 - 1) <= 0xFFFFFFFD) {
          v37_.v38 = 0;
          game_character_1077d10((void*)(&v35_.v34), (__int64)v37_.v37);
          v10 = v35_.v34 & 1;
          if ((v35_.v34 & 1) != 0) {
            v11 = v35_.v36;
          }
          else {
            v11 = v35_.v35;
          }
          if (strcmp((const char*)v39, v11) != 0) {
            strncpy((__int64)v39, v11, 0x1Fu);
            HIBYTE(v39[3]) = 0;
            CharacterModel_10711e0(a1, (__int64)v39, (__int64)v40);
            v10 = v35_.v34 & 1;
          }
          if (v10 != 0 && v35_.v36 != nullptr) {
            if (*(_QWORD*)(*v5 + 200) != 0) {
              v12 = 128;
            }
            else {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free(*v5 + v12, (__int64)v35_.v36);
          }
        }
      }
      v7 = v6-- + 1;
    } while (v7 > 1);
  }
  if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
    v14 = *(_QWORD*)(a1 + 5112);
    if (v14 == 0) {
      return;
    }
    goto LABEL_65;
  }
  v15 = GameData_22356f8 - 1;
  if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
    v16 = -1193575788;
    if ((unsigned __int64)GameData_22356f8 <= 0xFFFFFFFFB8DB7A94LL) {
      v16 = 0xFFFFFFFFB8DB7A94LL % GameData_22356f8;
    }
  }
  else {
    v16 = v15 & 0xFFFFFFFFB8DB7A94LL;
  }
  v17 = *(__int64***)(GameData_22356f0 + 8 * v16);
  if (v17 == nullptr) {
    v14 = *(_QWORD*)(a1 + 5112);
    if (v14 == 0) {
      return;
    }
    goto LABEL_49;
  }
  v18 = *v17;
  if (*v17 == nullptr) {
  LABEL_48:
    v14 = *(_QWORD*)(a1 + 5112);
    if (v14 == 0) {
      return;
    }
    goto LABEL_49;
  }
  if ((GameData_22356f8 & v15) == 0) {
    while (1) {
      v20 = v18[1];
      if (v20 == -1193575788) {
        if (*((_DWORD*)v18 + 4) == -1193575788) {
          goto LABEL_81;
        }
      }
      else if ((v20 & v15) != v16) {
        goto LABEL_48;
      }
      v18 = (__int64*)*v18;
      if (v18 == nullptr) {
        goto LABEL_48;
      }
    }
  }
  while (1) {
    v19 = v18[1];
    if (v19 == -1193575788) {
      break;
    }
    if (v19 >= GameData_22356f8) {
      v19 %= (unsigned __int64)GameData_22356f8;
    }
    if (v19 != v16) {
      goto LABEL_48;
    }
  LABEL_35:
    v18 = (__int64*)*v18;
    if (v18 == nullptr) {
      goto LABEL_48;
    }
  }
  if (*((_DWORD*)v18 + 4) != -1193575788) {
    goto LABEL_35;
  }
LABEL_81:
  v14 = *(_QWORD*)(a1 + 8LL * *((int*)v18 + 5));
  if (v14 == 0) {
    return;
  }
LABEL_49:
  if ((GameData_22356f8 & v15) == 0) {
    v21 = ((_DWORD)GameData_22356f8 - 1) & 0x66401914;
    v22 = *(__int64***)(GameData_22356f0 + 8 * v21);
    if (v22 != nullptr) {
      goto LABEL_55;
    }
    goto LABEL_65;
  }
  v21 = 1715476756;
  if ((unsigned __int64)GameData_22356f8 <= 0x66401914) {
    v21 = 0x66401914 % (unsigned int)GameData_22356f8;
  }
  v22 = *(__int64***)(GameData_22356f0 + 8 * v21);
  if (v22 == nullptr) {
    goto LABEL_65;
  }
LABEL_55:
  v23 = *v22;
  if (v23 == nullptr) {
  LABEL_65:
    v24 = 639;
    goto LABEL_66;
  }
  v24 = 639;
  if ((GameData_22356f8 & v15) == 0) {
    while (1) {
      v33 = v23[1];
      if (v33 == 1715476756) {
        if (*((_DWORD*)v23 + 4) == 1715476756) {
          goto LABEL_83;
        }
      }
      else if ((v33 & v15) != v21) {
        goto LABEL_66;
      }
      v23 = (__int64*)*v23;
      if (v23 == nullptr) {
        goto LABEL_66;
      }
    }
  }
  while (1) {
    v25 = v23[1];
    if (v25 == 1715476756) {
      break;
    }
    if (v25 >= GameData_22356f8) {
      v25 %= (unsigned __int64)GameData_22356f8;
    }
    if (v25 != v21) {
      goto LABEL_66;
    }
  LABEL_59:
    v23 = (__int64*)*v23;
    if (v23 == nullptr) {
      goto LABEL_66;
    }
  }
  if (*((_DWORD*)v23 + 4) != 1715476756) {
    goto LABEL_59;
  }
LABEL_83:
  v24 = *((int*)v23 + 5);
LABEL_66:
  v26 = fw_memory_HeapManager_Allocate(*v5, 336, 16, 0);
  memset(v26, 0, 0x150u);
  v27 = *(_QWORD*)(a1 + 8 * v24);
  *(_QWORD*)(v26 + 8) = 0;
  *(_QWORD*)(v26 + 16) = 0;
  *(_QWORD*)(v26 + 24) = 0;
  *(_QWORD*)(v26 + 32) = 0;
  *(_QWORD*)(v26 + 40) = 0;
  *(_QWORD*)(v26 + 48) = 0;
  *(_QWORD*)(v26 + 56) = 0;
  *(_QWORD*)(v26 + 64) = 0;
  *(_QWORD*)(v26 + 72) = 0;
  *(_QWORD*)(v26 + 80) = 0;
  *(_QWORD*)(v26 + 88) = 0;
  *(_QWORD*)(v26 + 96) = 0;
  *(_QWORD*)(v26 + 104) = 0;
  *(_QWORD*)(v26 + 112) = 0;
  *(_QWORD*)(v26 + 120) = 0;
  *(_QWORD*)(v26 + 128) = 0;
  *(_QWORD*)(v26 + 136) = 0;
  *(_QWORD*)(v26 + 144) = 0;
  *(_QWORD*)(v26 + 152) = 0;
  *(_QWORD*)(v26 + 160) = 0;
  *(_DWORD*)v26 = 18;
  *(_QWORD*)(v26 + 168) = 0;
  *(_QWORD*)(v26 + 176) = 0;
  *(_QWORD*)(v26 + 184) = 0;
  *(_QWORD*)(v26 + 192) = 0;
  *(_QWORD*)(v26 + 200) = 0;
  *(_QWORD*)(v26 + 208) = 0;
  *(_DWORD*)(v26 + 232) = 0;
  *(_DWORD*)(v26 + 312) = 0;
  *(_QWORD*)(v26 + 256) = 0;
  *(_QWORD*)(v26 + 264) = 0;
  *(_QWORD*)(v26 + 272) = 0;
  *(_QWORD*)(v26 + 280) = 0;
  *(_QWORD*)(v26 + 288) = 0;
  *(_QWORD*)(v26 + 296) = 0;
  *(_BYTE*)(v26 + 304) = 0;
  *(_QWORD*)(a1 + 8 * v24) = v26;
  *(_DWORD*)(v26 + 224) = 1051372203;
  *(_QWORD*)(v26 + 240) = 0x3FC0000040400000LL;
  *(_QWORD*)(v26 + 248) = 0;
  if (v27 != 0) {
    GameHr_7f7720(a1 + 8 * v24, v27);
    v26 = *(_QWORD*)(a1 + 8 * v24);
  }
  v28 = *(unsigned __int8*)(v14 + 8);
  v29 = (v28 & 1) == 0;
  v30 = v28 >> 1;
  if (v29) {
    v31 = v14 + 9;
  }
  else {
    v31 = *(_QWORD*)(v14 + 24);
  }
  if (v29) {
    v32 = v30;
  }
  else {
    v32 = *(_QWORD*)(v14 + 16);
  }
  CharacterAppearance_1075a00(v26, v31, v32);
}

bool GameHr_108cb20(int a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64** v4;
  __int64* v5;
  int v6;
  unsigned __int64 v7;
  __int64 v9;

  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v2 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v3 = a1;
      if (GameData_22356f8 <= (unsigned __int64)a1) {
        v3 = a1 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v3 = v2 & a1;
    }
    v4 = *(__int64***)(GameData_22356f0 + 8 * v3);
    if (v4 != nullptr) {
      v5 = *v4;
      if (*v4 != nullptr) {
        v6 = 639;
        if ((GameData_22356f8 & v2) == 0) {
          while (1) {
            v9 = v5[1];
            if (v9 == a1) {
              if (*((_DWORD*)v5 + 4) == a1) {
                goto LABEL_32;
              }
            }
            else if ((v9 & v2) != v3) {
              return a1 == *((_DWORD*)&GameData_2167828 + 10 * v6 + 3) &&
                     a1 != -574916402 && a1 != 1669996436 && a1 != 0;
            }
            v5 = (__int64*)*v5;
            if (v5 == nullptr) {
              return a1 == *((_DWORD*)&GameData_2167828 + 10 * v6 + 3) &&
                     a1 != -574916402 && a1 != 1669996436 && a1 != 0;
            }
          }
        }
        while (1) {
          v7 = v5[1];
          if (v7 == a1) {
            if (*((_DWORD*)v5 + 4) == a1) {
            LABEL_32:
              v6 = *((_DWORD*)v5 + 5);
              return a1 == *((_DWORD*)&GameData_2167828 + 10 * v6 + 3) &&
                     a1 != -574916402 && a1 != 1669996436 && a1 != 0;
            }
          }
          else {
            if (v7 >= GameData_22356f8) {
              v7 %= (unsigned __int64)GameData_22356f8;
            }
            if (v7 != v3) {
              return a1 == *((_DWORD*)&GameData_2167828 + 10 * v6 + 3) &&
                     a1 != -574916402 && a1 != 1669996436 && a1 != 0;
            }
          }
          v5 = (__int64*)*v5;
          if (v5 == nullptr) {
            return a1 == *((_DWORD*)&GameData_2167828 + 10 * v6 + 3) &&
                   a1 != -574916402 && a1 != 1669996436 && a1 != 0;
          }
        }
      }
    }
  }
  v6 = 639;
  return a1 == *((_DWORD*)&GameData_2167828 + 10 * v6 + 3) &&
         a1 != -574916402 && a1 != 1669996436 && a1 != 0;
}

__int64 GameHr_109f640(__int64 a1, const char* a2)
{
  __int64 result;
  unsigned __int8 explicit;
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  bool v22;
  unsigned __int64 v23;
  unsigned __int16* v24;
  unsigned __int64 v25;
  __int64 v26;
  const char* v27;
  int v28;

  if (a2 == nullptr) {
    return 0;
  }
  result = 0;
  if (*a2 != 0 && *a2 != 45) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v5 = GameData_212df08;
    if ((explicit & 1) == 0) {
      v26 = a1;
      v27 = a2;
      v28 = __cxa_guard_acquire((__int64)GameData_212df10);
      a2 = v27;
      a1 = v26;
      if (v28 != 0) {
        *v5 = wld_Crc32(0, "ModelModule", 0xBu);
        __cxa_guard_release((__int64)GameData_212df10);
        a1 = v26;
        a2 = v27;
      }
    }
    v7 = *(_QWORD*)(a1 + 504);
    v6 = *(_QWORD*)(a1 + 512);
    v8 = v6;
    v9 = v6;
    do {
      if (v9 == v7) {
        return 0;
      }
      v10 = *(_DWORD*)(v9 - 16);
      v9 -= 16;
      v8 -= 16;
    } while (v10 != *v5);
    if (v6 == v8) {
      return 0;
    }
    v11 = *(_QWORD*)(v8 + 8);
    if (v11 == 0) {
      return 0;
    }
    v12 = *(_QWORD*)(v11 + 24);
    if (v12 == 0) {
      return 0;
    }
    v13 = *(_QWORD**)(v12 + 168);
    if (v13 == nullptr) {
      return 0;
    }
    v14 = *(_QWORD*)(*v13 + 8LL);
    if (v14 == 0) {
      return 0;
    }
    v15 = (__int64)a2;
    v16 = strlen(a2);
    v17 = v14 + 8;
    v18 = *(unsigned __int16*)(v14 + 12);
    v19 = v14 + 8 + 16 * v18;
    v20 = *(_DWORD*)v19;
    if ((signed __int32)*(_DWORD*)(v14 + 8) < (signed __int32)*(_DWORD*)v19) {
      do {
        v23 = (__int64)v20 >> 3;
        if (v16 > v23) {
          v21 = (*(unsigned __int8*)(v15 + v16 + ~v23) >> (v20 & 7)) & 1;
        }
        else {
          v21 = 0;
        }
        v18 = *(unsigned __int16*)(v14 + 12 + 16 * v18 + 2 * v21);
        v22 = v20 < (signed __int32)*(_DWORD*)(v17 + 16 * v18);
        v20 = *(_DWORD*)(v17 + 16 * v18);
      } while (v22);
      v19 = v17 + 16 * v18;
    }
    v24 = *(unsigned __int16**)(v19 + 8);
    if (v16 != *v24) {
      return 0;
    }
    if (memcmp((__int64)(v24 + 1), v15, v16) != 0) {
      return 0;
    }
    v25 = v19 - v14 - 24;
    if ((~v25 & 0xFFFFFFFF0LL) == 0) {
      return 0;
    }
    return v13[3] + 96LL * (int)(v25 >> 4);
  }
  return result;
}

float GameHr_10a00a0(float a1, long double a2, float a3)
{
  float result;

  if (a1 > a3) {
    return 1.0 - GameHr_10a00a0(a3, a2, a1);
  }
  result = 0.0;
  if (*(float*)&a2 > a1) {
    result = 1.0;
    if (a3 > *(float*)&a2) {
      return (float)(*(float*)&a2 - a1) / (float)(a3 - a1);
    }
  }
  return result;
}

void GameHr_10adda0(__int64 a1, __int64 a2)
{
  __int64 v2;
  const char* v3;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  bool v12;
  unsigned __int64 v13;
  unsigned __int16* v14;
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
  _QWORD v25[9];

  v2 = *(_QWORD*)(a1 + 96);
  if ((*(_BYTE*)a2 & 1) != 0) {
    v3 = *(const char**)(a2 + 16);
  }
  else {
    v3 = (const char*)(a2 + 1);
  }
  if (v2 != 0) {
    if (v3 != nullptr) {
      v6 = strlen(v3);
    }
    else {
      v6 = 0;
    }
    v7 = v2 + 8;
    v8 = *(unsigned __int16*)(v2 + 12);
    v9 = v2 + 8 + 16 * v8;
    v10 = *(_DWORD*)v9;
    if ((signed __int32)*(_DWORD*)(v2 + 8) < (signed __int32)*(_DWORD*)v9) {
      do {
        v13 = (__int64)v10 >> 3;
        if (v6 > v13) {
          v11 = ((unsigned __int8)v3[v6 + ~v13] >> (v10 & 7)) & 1;
        }
        else {
          v11 = 0;
        }
        v8 = *(unsigned __int16*)(v2 + 12 + 16 * v8 + 2 * v11);
        v12 = v10 < (signed __int32)*(_DWORD*)(v7 + 16 * v8);
        v10 = *(_DWORD*)(v7 + 16 * v8);
      } while (v12);
      v9 = v7 + 16 * v8;
    }
    v14 = *(unsigned __int16**)(v9 + 8);
    if (v6 == *v14 && memcmp((__int64)(v14 + 1), (__int64)v3, v6) == 0) {
      v15 = (unsigned __int64)(v9 - v2 - 24) >> 4;
      if ((_DWORD)v15 != -1) {
        GameRoutine_a6ea10_alt1((void*)(v25), a1, v15);
        if ((*(_BYTE*)(a2 + 24) & 1) != 0) {
          v16 = *(_QWORD*)(a2 + 40);
          if (v16 != 0) {
            v17 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v17 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
          }
        }
        v18 = v25[1];
        v19 = v25[2];
        v20 = v25[3];
        *(_QWORD*)(a2 + 24) = v25[0];
        *(_QWORD*)(a2 + 32) = v18;
        *(_QWORD*)(a2 + 40) = v19;
        v21 = v25[6];
        v22 = v25[7];
        v23 = v25[4];
        *(_QWORD*)(a2 + 64) = v25[5];
        *(_QWORD*)(a2 + 72) = v21;
        v24 = v25[8];
        *(_QWORD*)(a2 + 48) = v20;
        *(_QWORD*)(a2 + 56) = v23;
        *(_QWORD*)(a2 + 80) = v22;
        *(_QWORD*)(a2 + 88) = v24;
      }
    }
  }
}

__int64 GameHr_10d6cb0(__int64 a1)
{
  __int64 v1;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 8);
  result = *(_QWORD*)(v1 + 160);
  if (result != 0) {
    result = GameRoutine_106c6d0();
    if ((result & 1) != 0) {
      return GameRoutine_106f310(*(_QWORD*)(v1 + 160));
    }
  }
  return result;
}

__int64 GameHr_10eca20(__int64 a1)
{
  float v2;
  float v3;
  __int64 result;
  float* v5;
  float* v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  bool v14;
  float v15;
  float v16;
  bool v17;

  v2 = *(float*)(GameData_2265ae0 + 160);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 152LL))(a1);
  v5 = *(float**)(a1 + 152);
  v6 = *(float**)(a1 + 160);
  result = a1 + 152;
  if (v5 != v6) {
    v7 = (float)((float)(v2 * 16.683) / 1000.0) / v3;
    if (*(float*)(a1 + 184) <= *(float*)(a1 + 188)) {
      v8 = v7;
    }
    else {
      v8 = -v7;
    }
    result = GameRoutine_109fee0(result, *(float*)(a1 + 176),
                                 *(float*)(a1 + 176) + v8);
    v5 = *(float**)(a1 + 152);
    v6 = *(float**)(a1 + 160);
    *(float*)(a1 + 176) = v8 + *(float*)(a1 + 176);
  }
  v9 = *(float*)(a1 + 180);
  v10 = v9;
  while (v5 != v6) {
    v11 = *v5;
    if (v10 <= *v5) {
      v12 = v10;
    }
    else {
      v12 = *v5;
    }
    if (v9 < v11) {
      v13 = *v5;
    }
    else {
      v13 = v9;
    }
    v14 = v11 < 0.0;
    if (v11 >= 0.0) {
      v15 = v13;
    }
    else {
      v15 = v9;
    }
    v9 = v5[1];
    if (!v14) {
      v10 = v12;
    }
    if (v9 < 0.0) {
      goto LABEL_7;
    }
    if (v10 > v9) {
      v10 = v5[1];
    }
    if (v15 >= v9) {
    LABEL_7:
      v9 = v15;
    }
    v5 += 16;
  }
  v16 = *(float*)(a1 + 176);
  v17 = v10 <= v16 && v16 < v9;
  if (!v17 && (*(_WORD*)(a1 + 136) & 1) == 0) {
    return GameRoutine_657a50(a1, 1);
  }
  return result;
}

__int64 GameHr_1114a60(__int64 result, __int64 a2, const char* a3,
                       unsigned int a4)
{
  if (a2 != 0 && a3 != nullptr) {
    result = GameRoutine_155f480(result, a2);
    if (result != 0) {
      result =
          GameRoutine_1a0a6c0(result, GameData_212d670[0], GameData_212d690, 0);
      if (result != 0) {
        return GameRoutine_156c910(result, a3, 1, a4);
      }
    }
  }
  return result;
}

__int64 GameHr_11302e0()
{
  return GameRoutine_1562680(GameData_2130258[0], "FaceOut", 1.0);
}

void GameHr_1133b20(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  char v6;
  __int64* v7;
  const char* v8;

  GameRoutine_60a020_alt1(a1 + 216, *msg_MessageManager_empty_text__ptr);
  if ((*(_BYTE*)(a1 + 216) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 232);
  }
  else {
    v2 = a1 + 217;
  }
  if (v2 != 0) {
    v3 = ui_LayoutAccessor_FindTextBox(game_talk_g_window_layout_ptr[0],
                                       (__int64)"T_Txt");
    if (v3 != 0) {
      GameRoutine_156c5d0_alt1(v3, v2, 0);
    }
  }
  v4 = game_8224a0(0x13u);
  v6 = game_GameModeData_instance_ != 0 &&
       (v5 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v4)) != 0 &&
       *(_DWORD*)(v5 + 32) == 1;
  *(_BYTE*)(a1 + 289) = v6;
  v7 = game_talk_g_window_layout_ptr[0];
  ui_LayoutAccessor_SetPaneVisible((__int64)game_talk_g_window_layout_ptr[0],
                                   (__int64)"N_Auto", v6);
  ui_LayoutAccessor_SetPaneVisible((__int64)v7, (__int64)"N_Next",
                                   (*(_BYTE*)(a1 + 289) & 1) == 0);
  if (*(_BYTE*)(a1 + 289) != 0) {
    v8 = "Auto";
  }
  else {
    v8 = "Wait";
  }
  GameHr_1562680((__int64)v7, v8, 0x1.0000000000000p+0f);
  game_113d3c0(a1 + 216, *(_DWORD*)(a1 + 200));
}

void GameHr_1135760(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v3;
  _DWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  __int64 v12;
  char v13;
  int v14;
  int v15;
  __int64* v16;
  struct {
    __int64 v17[2];
    __int64 v18;
    __int64 v19;
  } v17_;

  Seq_11331c0(a1);
  if (*GameData_212fc38[0] != 0) {
    v2 = *(_QWORD**)(*GameData_212fc38[0] + 576);
    if (v2 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      v4 = (_DWORD*)GameData_212d280;
      v5 = game_g_frame_clock_ptr[0];
      do {
        if ((v2[2] & 1) != 0) {
          fw_text_String_CopyTerminated(v17_.v17, v2[4], v2[3]);
        }
        else {
          v6 = v2[3];
          v7 = v2[4];
          v17_.v17[0] = v2[2];
          v17_.v17[1] = v6;
          v17_.v18 = v7;
        }
        v8 = v2[5];
        v17_.v19 = v8;
        if (v8 != 0 && *(_QWORD*)(v8 + 152) != 0) {
          v9 = *v5;
          *(_DWORD*)(v8 + 376) = 0;
          v10 = 0x1.e000000000000p+5f / (float)*(int*)(v9 + 476);
          if (v10 <= 0x0.0p+0f) {
            v11 = -0x1.e000000000000p+5f;
          }
          else {
            v11 = -0x1.e000000000000p+5f / v10;
          }
          *(_DWORD*)(v8 + 380) = *v4 + (int)v11;
        }
        if ((v17_.v17[0] & 1) != 0 && v17_.v18 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, v17_.v18);
        }
        v2 = (_QWORD*)*v2;
      } while (v2 != nullptr);
    }
  }
  v13 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ == 0) {
  LABEL_26:
    if ((v13 & 1) != 0) {
      return;
    }
    goto LABEL_27;
  }
  if ((unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
          1 <=
      2) {
    v14 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v14 & 8) != 0) {
      v15 = 2;
    }
    else {
      v15 = 3;
    }
    v13 = (v15 & v14) == 0;
    goto LABEL_26;
  }
LABEL_27:
  if ((*(_BYTE*)(a1 + 204) & 1) == 0) {
    v16 = game_talk_g_window_layout_ptr[0];
    ui_LayoutAccessor_SetPaneVisible((__int64)game_talk_g_window_layout_ptr[0],
                                     (__int64)"Next", 0);
    GameHr_1562680((__int64)v16, "Wait", 0x1.0000000000000p+0f);
  }
}

__int64 GameHr_113a550(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float v6;
  float v7;
  __int64 v8;
  int v9;
  _BYTE* v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v14[2];
    _BYTE* v15;
  } v14_;
  struct {
    __int64 v16;
    int v17;
  } v16_;
  _BYTE v18[16];

  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = *a2;
  if ((*(_BYTE*)(*a2 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated(v14_.v14, *(_QWORD*)(v2 + 40),
                                  *(_QWORD*)(v2 + 32)),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
    v2 = *a2;
  }
  else {
    v3 = *(_QWORD*)(*a2 + 32);
    v4 = *(_QWORD*)(*a2 + 40);
    v14_.v14[0] = *(_QWORD*)(*a2 + 24);
    v14_.v14[1] = v3;
    v14_.v15 = (_BYTE*)v4;
  }
  game_113c060((unsigned __int8*)(v2 + 48)),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  v7 = v6;
  v8 = GameRoutine_113c310_alt1((unsigned __int8*)v14_.v14),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  v9 = v8;
  if ((v14_.v14[0] & 1) != 0) {
    v10 = v14_.v15;
  }
  else {
    v10 = (char*)v14_.v14 + 1;
  }
  game_810a70((void*)((__int64)v18), v8, v10, v7),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v9 == 2) {
    v16_.v16 = 0;
    v11 = *GameData_212d460[0];
    v16_.v17 = 0x2000;
    GameRoutine_112180_alt1((__int64)&v16_.v16, (__int64)v18),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
    Seq_1134ae0(v11, (__int64)&v16_.v16),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if ((v14_.v14[0] & 1) != 0 && v14_.v15 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  (__int64)v14_.v15),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  return 1;
}

__int64 GameHr_113a660(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  _QWORD* v9;
  char** v10;
  __int64 v11;
  long double v12;
  int v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    _QWORD v19[2];
    __int64 v20;
  } v19_;
  struct {
    _QWORD v21[2];
    __int64 v22;
  } v21_;
  __int64 v23;
  int v24;
  _BYTE v25[16];

  v2 = *(_QWORD**)a2;
  if ((*(_BYTE*)(*(_QWORD*)a2 + 24LL) & 1) != 0) {
    GameRoutine_60a270(v21_.v21, v2[5], v2[4]);
    v2 = *(_QWORD**)a2;
  }
  else {
    v4 = *(_QWORD*)(*(_QWORD*)a2 + 32LL);
    v5 = *(_QWORD*)(*(_QWORD*)a2 + 40LL);
    v21_.v21[0] = *(_QWORD*)(*(_QWORD*)a2 + 24LL);
    v21_.v21[1] = v4;
    v21_.v22 = v5;
  }
  if ((v2[6] & 1) != 0) {
    GameRoutine_60a270(v19_.v19, v2[8], v2[7]);
    v2 = *(_QWORD**)a2;
  }
  else {
    v6 = v2[7];
    v7 = v2[8];
    v19_.v19[0] = v2[6];
    v19_.v19[1] = v6;
    v19_.v20 = v7;
  }
  v8 = GameRoutine_113c060(v2 + 9);
  if (GameData_21f3fe4 == 1) {
    v9 = v19_.v19;
  }
  else {
    v9 = v21_.v21;
  }
  if (GameData_21f3fe4 == 1) {
    v10 = (char**)&v19_.v20;
  }
  else {
    v10 = (char**)&v21_.v22;
  }
  v11 = GameRoutine_113c310(v9);
  *(float*)&v12 = v8;
  v13 = v11;
  if ((*(_BYTE*)v9 & 1) != 0) {
    v14 = *v10;
  }
  else {
    v14 = (char*)v9 + 1;
  }
  GameRoutine_810a70(v11, v14, v12);
  if (v13 == 2) {
    v23 = 0;
    v15 = *GameData_212d460[0];
    v24 = 0x2000;
    GameRoutine_112180(&v23, v25);
    GameRoutine_1134ae0(v15, (__int64)&v23);
  }
  if ((v19_.v19[0] & 1) != 0 && v19_.v20 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v16 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v16, (_QWORD)(v19_.v20));
  }
  if ((v21_.v21[0] & 1) != 0 && v21_.v22 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v17 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v17, (_QWORD)(v21_.v22));
  }
  return 1;
}

__int64 GameHr_113d7d0(__int64 result)
{
  int v1;
  int v2;

  if (*(_BYTE*)(result + 72) == 1) {
    *(_BYTE*)(result + 72) = 0;
    if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3 &&
        (((v1 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v2 = 2)
                                                              : (v2 = 3),
         (v2 & v1) == 0)) {
      GameRoutine_1562680(&GameData_2236800, "Out", 1.0);
      GameRoutine_15638b0(&GameData_2236800, "Out", 0);
      GameRoutine_1562f00(&GameData_2236800, "Out");
      GameRoutine_1563030(&GameData_2236800, "Out", 0);
    }
    else {
      GameRoutine_1562680(&GameData_2236800, "Out", 1.0);
    }
    result = GameData_2258ba8;
    if (GameData_2258ba8 != 0) {
      return GameRoutine_1567000(GameData_2258ba8, 0);
    }
  }
  return result;
}

__int64 GameHr_113de80(__int64 result, __int64 a2, __int64** a3)
{
  __int64* v3;
  __int64* v4;
  char* v5;
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  int v9;
  __int64 v10;
  char* v11;
  char* v12;
  char* v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  char v19;
  char v20;
  __int64 v21;
  char* v22;
  __int64* v23;
  char* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int128 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  char* v40;
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
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  char v58;
  __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  char* v63;
  char* v64;
  __int64 v65;
  __int64 v66;
  char v67;
  __int64 v68;
  double v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64* v73;
  __int64 v74;
  char* v75;
  char v76;
  int v77;
  __int64 v78;
  char* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  int v87;
  unsigned __int64 v88;
  __int64 v89;
  char* v90;
  __int64 v91;
  int v92;
  __int64 v93;
  __int64 v94;
  _QWORD* v95;
  __int64 v96;
  float v97;
  int v98;
  int v99;
  int v100;
  bool v101;
  float v102;
  float v103;
  int v104;
  int v105;
  int v106;
  float v107;
  float v108;
  int v109;
  int v110;
  int v111;
  float v112;
  __int64 v113;
  float v114;
  int v115;
  int v116;
  int v117;
  float v118;
  float v119;
  int v120;
  int v121;
  int v122;
  float v123;
  float v124;
  int v125;
  int v126;
  int v127;
  float v128;
  __int64 v129;
  __int64 v130;
  _QWORD* v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  char* v135;
  unsigned __int8 v136;
  __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  __int64 v141;
  unsigned __int64 v142;
  unsigned __int64 v143;
  __int64 v144;
  char* v145;
  unsigned __int64 v146;
  __int64 v147;
  _QWORD* v148;
  float v149;
  int v150;
  float v151;
  int v152;
  __int64 v153;
  float v154;
  int v155;
  float v156;
  int v157;
  __int64 v158;
  float v159;
  unsigned int v160;
  float v161;
  unsigned int v162;
  int v163;
  _QWORD* v164;
  char* v165;
  unsigned __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64* v172;
  char v173;
  __int64 v174;
  __int64 v175;
  _QWORD* v176;
  char* v177;
  __int64* v180;
  unsigned __int64 v181;
  _QWORD* v182;
  __int64 v183;
  unsigned __int64 v184;
  char* v185;
  _BYTE v186[64];
  unsigned __int64 v187;
  unsigned __int64 v188;
  _QWORD v189[2];
  char* v190;
  _QWORD v191[2];
  char* v192;
  _QWORD v193[2];
  char* v194;
  __int16 v195[8];
  __int64 v196;
  _BYTE v197[20];
  _BYTE v198[19];
  _QWORD v199[3];
  _QWORD v200[3];
  __int64 v201;
  unsigned __int64 v202;
  char* v203;
  __int64 v204;
  unsigned __int64 v205;
  char* v206;

  v176 = (_QWORD*)result;
  v3 = *a3;
  v4 = (__int64*)GameData_212bf68;
  if (*a3 != a3[1]) {
    v5 = nullptr;
    v180 = nullptr;
    v181 = 0;
    while (1) {
      if ((*(_BYTE*)v3 & 1) != 0) {
        result = GameRoutine_60a270(&v204, v3[2], v3[1]);
      }
      else {
        v6 = *v3;
        v7 = (char*)v3[2];
        v205 = v3[1];
        v206 = v7;
        v204 = v6;
      }
      v8 = v205;
      v9 = v204 & 1;
      v10 = v9 != 0 ? v205 : (unsigned __int64)(unsigned __int8)v204 >> 1;
      if (v10 != 0) {
        break;
      }
      if (v9 != 0) {
        goto LABEL_86;
      }
    LABEL_3:
      v3 += 3;
      if (v3 == a3[1]) {
        goto LABEL_151;
      }
    }
    v11 = v5;
    v12 = v206;
    v202 = 0;
    v203 = nullptr;
    v201 = 0;
    *(_QWORD*)((char*)v199 + 3) = 0;
    *(_QWORD*)((char*)&v199[1] + 3) = 0;
    *(_QWORD*)((char*)v200 + 3) = 0;
    *(_QWORD*)((char*)&v200[1] + 3) = 0;
    *(_OWORD*)&v198[3] = 0u;
    if (v9 != 0) {
      v13 = v206;
    }
    else {
      v13 = (char*)&v204 + 1;
    }
    if (v10 < 1) {
      goto LABEL_31;
    }
    v14 = &v13[v10];
    v15 = v10;
    result = (__int64)v13;
    while (1) {
      result = GameRoutine_1a09c60(result, 40, v15);
      if (result == 0) {
        goto LABEL_31;
      }
      if (*(_BYTE*)result == 40) {
        break;
      }
      v15 = (__int64)&v14[-++result];
      if ((__int64)&v14[-result] < 1) {
        goto LABEL_31;
      }
    }
    if ((char*)result == v14 ||
        (v16 = result - (_QWORD)v13, result - (_QWORD)v13 == -1)) {
    LABEL_31:
      if (v9 != 0) {
        result = GameRoutine_64df20(&v201, v12, v8);
        v19 = 0;
        LOBYTE(v9) = 0;
        v20 = 0;
      }
      else {
        v19 = 0;
        v20 = 0;
        v201 = v204;
        v202 = v205;
        v203 = v206;
      }
      goto LABEL_34;
    }
    if (v10 >= v16) {
      v17 = result - (_QWORD)v13;
    }
    else {
      v17 = v10;
    }
    if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_308;
    }
    if (v17 >= 0x17) {
      if ((v17 | 7) == 0x17) {
        v57 = 26;
      }
      else {
        v57 = (v17 | 7) + 1;
      }
      v18 = (char*)GameRoutine_651b90(*v4, v57, 16, 0);
      v184 = v17;
      v185 = v18;
      v183 = v57 | 1;
    }
    else {
      v18 = (char*)&v183 + 1;
      LOBYTE(v183) = 2 * v17;
      if ((char*)result == v13) {
        goto LABEL_96;
      }
    }
    result = GameRoutine_1a0b940(v18, v13, v17);
  LABEL_96:
    v58 = v201;
    v18[v17] = 0;
    if ((v58 & 1) != 0 && v203 != nullptr) {
      v59 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v59 = 56;
      }
      result = GameRoutine_1a0a4e0(*v4 + v59, (_QWORD)(v203));
    }
    v201 = v183;
    v202 = v184;
    v203 = v185;
    v60 = v205;
    if ((v204 & 1) == 0) {
      v60 = (unsigned __int64)(unsigned __int8)v204 >> 1;
    }
    if (v16 >= v60) {
      GameRoutine_60a230(result);
    }
    v61 = v16 + 1;
    v62 = v60 - v61;
    if ((v204 & 1) != 0) {
      v63 = v206;
    }
    else {
      v63 = (char*)&v204 + 1;
    }
    if (v62 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_308:
      GameRoutine_60a1d0(result);
    }
    if (v62 >= 0x17) {
      if ((v62 | 7) == 0x17) {
        v65 = 26;
      }
      else {
        v65 = (v62 | 7) + 1;
      }
      v64 = (char*)GameRoutine_651b90(*v4, v65, 16, 0);
      v184 = v62;
      v185 = v64;
      v183 = v65 | 1;
    }
    else {
      v64 = (char*)&v183 + 1;
      LOBYTE(v183) = 2 * v62;
      if (v60 == v61) {
      LABEL_116:
        v64[v62] = 0;
        v197[2] = 0;
        v195[0] = 0;
        *(_WORD*)v197 = 10498;
        GameRoutine_112cc60(&v204, v197, v195);
        if ((v195[0] & 1) != 0 && v196 != 0) {
          v66 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v66 = 56;
          }
          GameRoutine_1a0a4e0(*v4 + v66, (_QWORD)(v196));
        }
        v67 = v183;
        if ((v183 & 1) != 0) {
          GameRoutine_60a270(v193, v185, v184);
        }
        else {
          v193[0] = v183;
          v193[1] = v184;
          v194 = v185;
        }
        GameRoutine_113f5c0((void*)v197, v193, "CenterX", 0.0);
        v19 = v197[0];
        v200[0] = *(_QWORD*)&v197[1];
        v200[1] = *(_QWORD*)&v197[9];
        *(_DWORD*)((char*)&v200[1] + 7) = *(_DWORD*)&v197[16];
        if ((v193[0] & 1) != 0 && v194 != nullptr) {
          v68 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v68 = 56;
          }
          GameRoutine_1a0a4e0(*v4 + v68, (_QWORD)(v194));
        }
        if ((v67 & 1) != 0) {
          GameRoutine_60a270(v191, v185, v184);
        }
        else {
          v191[0] = v183;
          v191[1] = v184;
          v192 = v185;
        }
        GameRoutine_113f5c0((void*)v197, v191, "CenterY", 0.0);
        LOBYTE(v9) = v197[0];
        v199[0] = *(_QWORD*)&v197[1];
        v199[1] = *(_QWORD*)&v197[9];
        *(_DWORD*)((char*)&v199[1] + 7) = *(_DWORD*)&v197[16];
        if ((v191[0] & 1) != 0 && v192 != nullptr) {
          v70 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v70 = 56;
          }
          GameRoutine_1a0a4e0(*v4 + v70, (_QWORD)(v192));
        }
        if ((v67 & 1) != 0) {
          GameRoutine_60a270(v189, v185, v184);
        }
        else {
          v189[0] = v183;
          v189[1] = v184;
          v190 = v185;
        }
        LODWORD(v69) = COERCE_UNSIGNED_INT((float)(1.0));
        result = (__int64)X8CALL_X0(
            _QWORD*, GameRoutine_113f5c0((void*)v197, v189, "Scale", v69));
        v20 = v197[0];
        qmemcpy(v198, &v197[1], sizeof(v198));
        if ((v189[0] & 1) != 0 && v190 != nullptr) {
          v71 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v71 = 56;
          }
          result = GameRoutine_1a0a4e0(*v4 + v71, (_QWORD)(v190));
        }
        if ((v67 & 1) != 0 && v185 != nullptr) {
          v72 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v72 = 56;
          }
          result = GameRoutine_1a0a4e0(*v4 + v72, (_QWORD)(v185));
        }
      LABEL_34:
        *(_QWORD*)&v186[52] = 0;
        v183 = 0;
        v184 = 0;
        v5 = v11;
        v185 = nullptr;
        v186[0] = 0;
        __builtin_memset(&v186[4], 0, 17);
        __builtin_memset(&v186[24], 0, 17);
        *(_QWORD*)&v186[44] = 0x3F8000003F800000LL;
        if ((v201 & 1) != 0) {
          result = GameRoutine_64df20(&v183, v203, v202);
        }
        else {
          v183 = v201;
          v184 = v202;
          v185 = v203;
        }
        v186[0] = v19;
        v186[20] = v9;
        v186[40] = v20;
        *(_QWORD*)&v186[1] = v200[0];
        *(_QWORD*)&v186[9] = v200[1];
        *(_DWORD*)&v186[16] = *(_DWORD*)((char*)&v200[1] + 7);
        *(_QWORD*)&v186[21] = v199[0];
        *(_QWORD*)&v186[29] = v199[1];
        *(_DWORD*)&v186[36] = *(_DWORD*)((char*)&v199[1] + 7);
        qmemcpy(&v186[41], v198, 19);
        if ((unsigned __int64)v180 >= v181) {
          v24 = (char*)((char*)v180 - v11);
          v25 = 0x2E8BA2E8BA2E8BA3LL * (((char*)v180 - v11) >> 3) + 1;
          if (v25 > 0x2E8BA2E8BA2E8BALL) {
            GameRoutine_113fc50(result);
          }
          if (0x5D1745D1745D1746LL * ((__int64)(v181 - (_QWORD)v11) >> 3) >
              v25) {
            v25 = 0x5D1745D1745D1746LL * ((__int64)(v181 - (_QWORD)v11) >> 3);
          }
          if ((unsigned __int64)(0x2E8BA2E8BA2E8BA3LL *
                                 ((__int64)(v181 - (_QWORD)v11) >> 3)) >=
              0x1745D1745D1745DLL) {
            v26 = 0x2E8BA2E8BA2E8BALL;
          }
          else {
            v26 = v25;
          }
          if (v26 != 0) {
            if (v26 > 0x2E8BA2E8BA2E8BALL) {
              GameRoutine_60a210(result);
            }
            result = GameRoutine_651b90(*v4, 88 * v26, 16, 0);
            v27 = result;
          }
          else {
            v27 = 0;
          }
          v33 = &v24[v27];
          if ((v183 & 1) != 0) {
            result = GameRoutine_60a270(&v24[v27], v185, v184);
          }
          else {
            v34 = v184;
            *(_QWORD*)v33 = v183;
            *((_QWORD*)v33 + 1) = v34;
            *((_QWORD*)v33 + 2) = v185;
          }
          v35 = *(_QWORD*)&v186[40];
          v36 = *(_QWORD*)&v186[48];
          *((_QWORD*)v33 + 7) = *(_QWORD*)&v186[32];
          *((_QWORD*)v33 + 8) = v35;
          v37 = *(_DWORD*)&v186[56];
          *((_QWORD*)v33 + 9) = v36;
          *((_DWORD*)v33 + 20) = v37;
          v38 = *(_QWORD*)&v186[8];
          *((_QWORD*)v33 + 3) = *(_QWORD*)v186;
          *((_QWORD*)v33 + 4) = v38;
          v39 = *(_QWORD*)&v186[24];
          *((_QWORD*)v33 + 5) = *(_QWORD*)&v186[16];
          *((_QWORD*)v33 + 6) = v39;
          if (v11 != (char*)v180) {
            v40 = v11;
            v41 = v27;
            do {
              v42 = *(_QWORD*)v40;
              v43 = *((_QWORD*)v40 + 2);
              *(_QWORD*)(v41 + 8) = *((_QWORD*)v40 + 1);
              *(_QWORD*)(v41 + 16) = v43;
              *(_QWORD*)v41 = v42;
              *((_QWORD*)v40 + 1) = 0;
              *((_QWORD*)v40 + 2) = 0;
              *(_QWORD*)v40 = 0;
              v45 = *((_QWORD*)v40 + 8);
              v44 = *((_QWORD*)v40 + 9);
              v46 = *((_QWORD*)v40 + 7);
              *(_DWORD*)(v41 + 80) = *((_DWORD*)v40 + 20);
              *(_QWORD*)(v41 + 64) = v45;
              *(_QWORD*)(v41 + 72) = v44;
              *(_QWORD*)(v41 + 56) = v46;
              v47 = *((_QWORD*)v40 + 3);
              v48 = *((_QWORD*)v40 + 4);
              v49 = *((_QWORD*)v40 + 5);
              v50 = *((_QWORD*)v40 + 6);
              v40 += 88;
              *(_QWORD*)(v41 + 40) = v49;
              *(_QWORD*)(v41 + 48) = v50;
              *(_QWORD*)(v41 + 24) = v47;
              *(_QWORD*)(v41 + 32) = v48;
              v41 += 88;
            } while (v40 != (char*)v180);
            v51 = (__int64*)v11;
            do {
              if ((*(_BYTE*)v51 & 1) != 0 && v51[2] != 0) {
                if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                  v52 = 128;
                }
                else {
                  v52 = 56;
                }
                result = GameRoutine_1a0a4e0(GameData_2265ee0 + v52,
                                             (_QWORD)(v51[2]));
              }
              v51 += 11;
            } while (v51 != v180);
          }
          v180 = (__int64*)(v33 + 88);
          v181 = v27 + 88 * v26;
          if (v11 != nullptr) {
            v4 = (__int64*)GameData_212bf68;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) != 0) {
              v53 = 128;
            }
            else {
              v53 = 56;
            }
            result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v53,
                                         (_QWORD)(v11));
            v5 = (char*)v27;
            if ((v183 & 1) == 0) {
              goto LABEL_79;
            }
          }
          else {
            v5 = (char*)v27;
            v4 = (__int64*)GameData_212bf68;
            if ((v183 & 1) == 0) {
              goto LABEL_79;
            }
          }
        }
        else {
          if ((v183 & 1) != 0) {
            v23 = v180;
            result = GameRoutine_60a270(v180, v185, v184);
          }
          else {
            v21 = v183;
            v22 = v185;
            v23 = v180;
            v180[1] = v184;
            v180[2] = (__int64)v22;
            *v180 = v21;
          }
          v28 = *(_OWORD*)v186;
          v29 = *(_QWORD*)&v186[24];
          v23[5] = *(_QWORD*)&v186[16];
          v23[6] = v29;
          *(_OWORD*)(v23 + 3) = v28;
          v30 = *(_QWORD*)&v186[32];
          v31 = *(_QWORD*)&v186[40];
          v32 = *(_QWORD*)&v186[48];
          *((_DWORD*)v23 + 20) = *(_DWORD*)&v186[56];
          v23[8] = v31;
          v23[9] = v32;
          v23[7] = v30;
          v180 = v23 + 11;
          if ((v183 & 1) == 0) {
            goto LABEL_79;
          }
        }
        if (v185 != nullptr) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v54 = 128;
          }
          else {
            v54 = 56;
          }
          result = GameRoutine_1a0a4e0(*v4 + v54, (_QWORD)(v185));
        }
      LABEL_79:
        if ((v201 & 1) != 0 && v203 != nullptr) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v55 = 128;
          }
          else {
            v55 = 56;
          }
          result = GameRoutine_1a0a4e0(*v4 + v55, (_QWORD)(v203));
        }
        if ((v204 & 1) == 0) {
          goto LABEL_3;
        }
      LABEL_86:
        if (v206 != nullptr) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v56 = 128;
          }
          else {
            v56 = 56;
          }
          result = GameRoutine_1a0a4e0(*v4 + v56, (_QWORD)(v206));
        }
        goto LABEL_3;
      }
    }
    GameRoutine_1a0b940(v64, &v63[v61], v62);
    goto LABEL_116;
  }
  v5 = nullptr;
  v180 = nullptr;
LABEL_151:
  v73 = v180;
  v177 = v5;
  v74 = v176[7];
  v182 = v176 + 6;
  if ((_QWORD*)v74 != v176 + 6) {
  LABEL_154:
    if (v5 == (char*)v73) {
    LABEL_221:
      if ((*(_BYTE*)(v74 + 20) & 1) == 0) {
        v129 = *(_QWORD*)(v74 + 40);
        *(_BYTE*)(v74 + 20) = 1;
        if ((*(_BYTE*)(v74 + 24) & 1) != 0) {
          v130 = v129;
        }
        else {
          v130 = v74 + 25;
        }
        v131 = (_QWORD*)GameData_2241708;
        v132 = GameData_2241710;
        while (v131 != (_QWORD*)v132) {
          v133 = *v131;
          result = GameRoutine_13777b0(*v131, v130);
          if ((result & 1) != 0) {
            v134 = *(_QWORD*)(v133 + 8);
            if (v134 != 0) {
              while (1) {
                if (*(_BYTE*)v134 == 2) {
                  if (*(_DWORD*)(v134 + 32) == 6) {
                    *(_QWORD*)(v133 + 16) = v134;
                    *(_WORD*)(v133 + 136) &= ~0x80u;
                    break;
                  }
                }
                else if (*(_BYTE*)v134 == 0) {
                  break;
                }
                v134 += 64;
              }
            }
          }
          ++v131;
        }
      }
      goto LABEL_153;
    }
    v75 = v177;
    v76 = 0;
    while (1) {
      if ((*v75 & 1) != 0) {
        result =
            GameRoutine_60a270(&v183, *((_QWORD*)v75 + 2), *((_QWORD*)v75 + 1));
      }
      else {
        v78 = *(_QWORD*)v75;
        v79 = *((char**)v75 + 2);
        v184 = *((_QWORD*)v75 + 1);
        v185 = v79;
        v183 = v78;
      }
      v80 = *((_QWORD*)v75 + 3);
      v81 = *((_QWORD*)v75 + 4);
      v82 = *((_QWORD*)v75 + 6);
      *(_QWORD*)&v186[16] = *((_QWORD*)v75 + 5);
      *(_QWORD*)&v186[24] = v82;
      *(_QWORD*)v186 = v80;
      *(_QWORD*)&v186[8] = v81;
      v83 = *((_QWORD*)v75 + 8);
      v84 = *((_QWORD*)v75 + 9);
      LODWORD(v82) = *((_DWORD*)v75 + 20);
      *(_QWORD*)&v186[32] = *((_QWORD*)v75 + 7);
      *(_QWORD*)&v186[40] = v83;
      *(_QWORD*)&v186[48] = v84;
      *(_DWORD*)&v186[56] = v82;
      if ((v183 & 1) != 0) {
        v85 = v184;
      }
      else {
        v85 = (unsigned __int64)(unsigned __int8)v183 >> 1;
      }
      v86 = *(unsigned __int8*)(v74 + 24);
      v87 = v86 & 1;
      v88 = v86 >> 1;
      if (v87 != 0) {
        v88 = *(_QWORD*)(v74 + 32);
      }
      if (v85 == v88 &&
          ((v89 = *(_QWORD*)(v74 + 40), (v183 & 1) != 0)
               ? (v90 = v185)
               : (v90 = (char*)&v183 + 1),
           v87 != 0 ? (v91 = *(_QWORD*)(v74 + 40)) : (v91 = v74 + 25),
           (_DWORD)(result = GameRoutine_1a09cf0(v90, v91)) == 0)) {
        if (*(_BYTE*)(v74 + 20) == 1) {
          v95 = (_QWORD*)GameData_2241708;
          v94 = GameData_2241710;
          if (GameData_2241708 != GameData_2241710) {
            do {
              v96 = *v95;
              if ((GameRoutine_13777b0(*v95, v91) & 1) != 0 &&
                  (*(_WORD*)(v96 + 136) & 1) == 0) {
                GameRoutine_657a50(v96, 1);
              }
              ++v95;
            } while (v95 != (_QWORD*)v94);
            v89 = *(_QWORD*)(v74 + 40);
            v87 = *(_BYTE*)(v74 + 24) & 1;
          }
          if (v87 != 0) {
            v113 = v89;
          }
          else {
            v113 = v74 + 25;
          }
          result = GameRoutine_1376490(a2, v113, 0);
          v4 = &GameData_2265ee0;
          v73 = v180;
          if (result != 0) {
            *(_DWORD*)(v74 + 16) = *(_DWORD*)(result + 148);
            if (v186[0] == 1) {
              v115 = *(_DWORD*)&v186[8];
              v114 = *(float*)&v186[12];
              v116 = *(_DWORD*)&v186[4];
              v117 = *(_DWORD*)&v186[16];
              v101 = *(float*)&v186[12] > 0.0;
              *(_DWORD*)(v74 + 48) = *(_DWORD*)&v186[4];
              *(_DWORD*)(v74 + 52) = v116;
              v118 = 0.0;
              if (!v101) {
                v118 = 1.0;
                v114 = 1.0;
                *(_DWORD*)(v74 + 48) = v115;
                *(_DWORD*)(v74 + 52) = v115;
              }
              *(_DWORD*)(v74 + 56) = v115;
              *(float*)(v74 + 60) = v118;
              *(float*)(v74 + 64) = v114;
              *(_DWORD*)(v74 + 68) = v117;
            }
            qmemcpy(v186, &v186[20], 20);
            if (v186[20] == 1) {
              v120 = *(_DWORD*)&v186[8];
              v119 = *(float*)&v186[12];
              v121 = *(_DWORD*)&v186[4];
              v122 = *(_DWORD*)&v186[16];
              v101 = *(float*)&v186[12] > 0.0;
              *(_DWORD*)(v74 + 72) = *(_DWORD*)&v186[4];
              *(_DWORD*)(v74 + 76) = v121;
              v123 = 0.0;
              if (!v101) {
                v123 = 1.0;
                v119 = 1.0;
                *(_DWORD*)(v74 + 72) = v120;
                *(_DWORD*)(v74 + 76) = v120;
              }
              *(_DWORD*)(v74 + 80) = v120;
              *(float*)(v74 + 84) = v123;
              *(float*)(v74 + 88) = v119;
              *(_DWORD*)(v74 + 92) = v122;
            }
            qmemcpy(v186, &v186[40], 20);
            if (v186[40] == 1) {
              v125 = *(_DWORD*)&v186[8];
              v124 = *(float*)&v186[12];
              v126 = *(_DWORD*)&v186[4];
              v127 = *(_DWORD*)&v186[16];
              v101 = *(float*)&v186[12] > 0.0;
              *(_DWORD*)(v74 + 96) = *(_DWORD*)&v186[4];
              *(_DWORD*)(v74 + 100) = v126;
              v128 = 0.0;
              if (!v101) {
                v128 = 1.0;
                v124 = 1.0;
                *(_DWORD*)(v74 + 96) = v125;
                *(_DWORD*)(v74 + 100) = v125;
              }
              *(_DWORD*)(v74 + 104) = v125;
              *(float*)(v74 + 108) = v128;
              *(float*)(v74 + 112) = v124;
              *(_DWORD*)(v74 + 116) = v127;
            }
            *(_BYTE*)(v74 + 20) = 0;
          }
        }
        else {
          if (v186[0] == 1) {
            v98 = *(_DWORD*)&v186[8];
            v97 = *(float*)&v186[12];
            v99 = *(_DWORD*)&v186[4];
            v100 = *(_DWORD*)&v186[16];
            v101 = *(float*)&v186[12] > 0.0;
            *(_DWORD*)(v74 + 48) = *(_DWORD*)&v186[4];
            *(_DWORD*)(v74 + 52) = v99;
            v102 = 0.0;
            if (!v101) {
              v102 = 1.0;
              v97 = 1.0;
              *(_DWORD*)(v74 + 48) = v98;
              *(_DWORD*)(v74 + 52) = v98;
            }
            *(_DWORD*)(v74 + 56) = v98;
            *(float*)(v74 + 60) = v102;
            *(float*)(v74 + 64) = v97;
            *(_DWORD*)(v74 + 68) = v100;
          }
          qmemcpy(v186, &v186[20], 20);
          if (v186[20] == 1) {
            v104 = *(_DWORD*)&v186[8];
            v103 = *(float*)&v186[12];
            v105 = *(_DWORD*)&v186[4];
            v106 = *(_DWORD*)&v186[16];
            v101 = *(float*)&v186[12] > 0.0;
            *(_DWORD*)(v74 + 72) = *(_DWORD*)&v186[4];
            *(_DWORD*)(v74 + 76) = v105;
            v107 = 0.0;
            if (!v101) {
              v107 = 1.0;
              v103 = 1.0;
              *(_DWORD*)(v74 + 72) = v104;
              *(_DWORD*)(v74 + 76) = v104;
            }
            *(_DWORD*)(v74 + 80) = v104;
            *(float*)(v74 + 84) = v107;
            *(float*)(v74 + 88) = v103;
            *(_DWORD*)(v74 + 92) = v106;
          }
          qmemcpy(v186, &v186[40], 20);
          if (v186[40] == 1) {
            v109 = *(_DWORD*)&v186[8];
            v108 = *(float*)&v186[12];
            v110 = *(_DWORD*)&v186[4];
            v111 = *(_DWORD*)&v186[16];
            v101 = *(float*)&v186[12] > 0.0;
            *(_DWORD*)(v74 + 96) = *(_DWORD*)&v186[4];
            *(_DWORD*)(v74 + 100) = v110;
            v112 = 0.0;
            if (!v101) {
              v112 = 1.0;
              v108 = 1.0;
              *(_DWORD*)(v74 + 96) = v109;
              *(_DWORD*)(v74 + 100) = v109;
            }
            v92 = 1;
            v76 = 1;
            *(_DWORD*)(v74 + 104) = v109;
            *(float*)(v74 + 108) = v112;
            *(float*)(v74 + 112) = v108;
            *(_DWORD*)(v74 + 116) = v111;
            goto LABEL_177;
          }
        }
        v92 = 1;
        v76 = 1;
      }
      else {
        v92 = 0;
      }
    LABEL_177:
      if ((v183 & 1) != 0 && v185 != nullptr) {
        v93 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v93 = 56;
        }
        result = GameRoutine_1a0a4e0(*v4 + v93, (_QWORD)(v185));
      }
      v75 += 88;
      if (v75 == (char*)v73) {
        v77 = 1;
      }
      else {
        v77 = v92;
      }
      if (v77 == 1) {
        if ((v76 & 1) == 0) {
          goto LABEL_221;
        }
      LABEL_153:
        v74 = *(_QWORD*)(v74 + 8);
        v5 = v177;
        if ((_QWORD*)v74 == v182) {
          break;
        }
        goto LABEL_154;
      }
    }
  }
  if (v5 == (char*)v73) {
    if (v5 == nullptr) {
      return result;
    }
    goto LABEL_302;
  }
  v135 = v5;
  do {
    v136 = *v135;
    v137 = v176[7];
    if ((_QWORD*)v137 == v182) {
      goto LABEL_264;
    }
    v138 = (*v135 & 1) != 0 ? *((_QWORD*)v135 + 1) : v136 >> 1;
    if ((*v135 & 1) != 0) {
      while (1) {
        v142 = *(unsigned __int8*)(v137 + 24);
        v143 = *(_QWORD*)(v137 + 32);
        if ((v142 & 1) == 0) {
          v143 = v142 >> 1;
        }
        if (v138 == v143) {
          v144 = (v142 & 1) != 0 ? *(_QWORD*)(v137 + 40) : v137 + 25;
          result = GameRoutine_1a09cf0(*((_QWORD*)v135 + 2), v144);
          if ((_DWORD)result == 0) {
            break;
          }
        }
        v137 = *(_QWORD*)(v137 + 8);
        if ((_QWORD*)v137 == v182) {
          goto LABEL_264;
        }
      }
    }
    else {
      while (1) {
        v139 = *(unsigned __int8*)(v137 + 24);
        v140 = *(_QWORD*)(v137 + 32);
        if ((v139 & 1) == 0) {
          v140 = v139 >> 1;
        }
        if (v138 == v140) {
          v141 = (v139 & 1) != 0 ? *(_QWORD*)(v137 + 40) : v137 + 25;
          result = GameRoutine_1a09cf0(v135 + 1, v141);
          if ((_DWORD)result == 0) {
            break;
          }
        }
        v137 = *(_QWORD*)(v137 + 8);
        if ((_QWORD*)v137 == v182) {
          goto LABEL_264;
        }
      }
    }
    if ((_QWORD*)v137 == v182) {
    LABEL_264:
      if ((v136 & 1) != 0) {
        v145 = *((char**)v135 + 2);
      }
      else {
        v145 = v135 + 1;
      }
      result = GameRoutine_1376490(a2, v145, 0);
      if (result != 0) {
        BYTE4(v183) = 0;
        v184 = 0;
        v185 = nullptr;
        __builtin_memset(v186, 0, 20);
        *(_QWORD*)&v186[20] = 0x3F8000003F800000LL;
        *(_QWORD*)&v186[28] = 0;
        *(_QWORD*)&v186[36] = 0;
        *(_QWORD*)&v186[44] = 0x3F8000003F800000LL;
        *(_DWORD*)&v186[60] = 1065353216;
        v187 = 0x3F8000003F800000LL;
        v188 = 1065353216;
        *(_QWORD*)&v186[52] = 0x3F80000000000000LL;
        LODWORD(v183) = *(_DWORD*)(result + 148);
        if (&v184 != (unsigned __int64*)v135) {
          if ((*v135 & 1) != 0) {
            GameRoutine_64df20(&v184, *((_QWORD*)v135 + 2),
                               *((_QWORD*)v135 + 1));
          }
          else {
            v146 = *(_QWORD*)v135;
            v147 = *((_QWORD*)v135 + 2);
            v185 = *((char**)v135 + 1);
            *(_QWORD*)v186 = v147;
            v184 = v146;
          }
        }
        v148 = v135 + 24;
        if (v135[24] == 1) {
          v149 = *((float*)v135 + 9);
          v150 = *((_DWORD*)v135 + 10);
          v151 = 0.0;
          *(_DWORD*)&v186[8] = *((_DWORD*)v135 + 7);
          *(_DWORD*)&v186[12] = *(_DWORD*)&v186[8];
          v152 = *((_DWORD*)v135 + 8);
          if (v149 <= 0.0) {
            v151 = 1.0;
            v149 = 1.0;
            *(_DWORD*)&v186[8] = *((_DWORD*)v135 + 8);
            *(_DWORD*)&v186[12] = v152;
          }
          *(_DWORD*)&v186[16] = v152;
          *(float*)&v186[20] = v151;
          *(float*)&v186[24] = v149;
          *(_DWORD*)&v186[28] = v150;
        }
        v153 = *(_QWORD*)(v135 + 52);
        *v148 = *(_QWORD*)(v135 + 44);
        *((_QWORD*)v135 + 4) = v153;
        *((_DWORD*)v135 + 10) = *((_DWORD*)v135 + 15);
        if (v135[24] == 1) {
          v154 = *((float*)v135 + 9);
          v155 = *((_DWORD*)v135 + 10);
          v156 = 0.0;
          *(_DWORD*)&v186[32] = *((_DWORD*)v135 + 7);
          *(_DWORD*)&v186[36] = *(_DWORD*)&v186[32];
          v157 = *((_DWORD*)v135 + 8);
          if (v154 <= 0.0) {
            v156 = 1.0;
            v154 = 1.0;
            *(_DWORD*)&v186[32] = *((_DWORD*)v135 + 8);
            *(_DWORD*)&v186[36] = v157;
          }
          *(_DWORD*)&v186[40] = v157;
          *(float*)&v186[44] = v156;
          *(float*)&v186[48] = v154;
          *(_DWORD*)&v186[52] = v155;
        }
        v158 = *((_QWORD*)v135 + 9);
        *v148 = *((_QWORD*)v135 + 8);
        *((_QWORD*)v135 + 4) = v158;
        *((_DWORD*)v135 + 10) = *((_DWORD*)v135 + 20);
        if (v135[24] == 1) {
          v159 = *((float*)v135 + 9);
          v160 = *((_DWORD*)v135 + 10);
          v161 = 0.0;
          *(_DWORD*)&v186[56] = *((_DWORD*)v135 + 7);
          *(_DWORD*)&v186[60] = *(_DWORD*)&v186[56];
          v162 = *((_DWORD*)v135 + 8);
          if (v159 <= 0.0) {
            v161 = 1.0;
            v159 = 1.0;
            *(_DWORD*)&v186[56] = *((_DWORD*)v135 + 8);
            *(_DWORD*)&v186[60] = v162;
          }
          v187 = __PAIR64__(LODWORD(v161), v162);
          v188 = __PAIR64__(v160, LODWORD(v159));
        }
        result = GameRoutine_651b90(*v4, 120, 16, 0);
        v163 = v183;
        v164 = (_QWORD*)result;
        *(_QWORD*)result = 0;
        *(_QWORD*)(result + 8) = 0;
        *(_DWORD*)(result + 16) = v163;
        *(_BYTE*)(result + 20) = BYTE4(v183);
        if ((v184 & 1) != 0) {
          result = GameRoutine_60a270(result + 24, *(_QWORD*)v186, v185);
        }
        else {
          v165 = v185;
          *(_QWORD*)(result + 24) = v184;
          *(_QWORD*)(result + 32) = v165;
          *(_QWORD*)(result + 40) = *(_QWORD*)v186;
        }
        v166 = v187;
        v164[12] = *(_QWORD*)&v186[56];
        v164[13] = v166;
        v164[14] = v188;
        v167 = *(_QWORD*)&v186[32];
        v164[8] = *(_QWORD*)&v186[24];
        v164[9] = v167;
        v168 = *(_QWORD*)&v186[48];
        v164[10] = *(_QWORD*)&v186[40];
        v164[11] = v168;
        v169 = *(_QWORD*)&v186[16];
        v164[6] = *(_QWORD*)&v186[8];
        v164[7] = v169;
        v170 = v176[6];
        *v164 = v170;
        v164[1] = v182;
        *(_QWORD*)(v170 + 8) = v164;
        v176[6] = v164;
        ++v176[8];
        if ((v184 & 1) != 0 && *(_QWORD*)v186 != 0) {
          v171 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v171 = 56;
          }
          result = GameRoutine_1a0a4e0(*v4 + v171, (_QWORD)(*(_QWORD*)v186));
        }
      }
    }
    v135 += 88;
  } while (v135 != (char*)v73);
  if (v177 != nullptr) {
    v172 = v180;
    do {
      v173 = *((_BYTE*)v172 - 88);
      v172 -= 11;
      if ((v173 & 1) != 0 && *(v180 - 9) != 0) {
        if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
          v174 = 128;
        }
        else {
          v174 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v174, (_QWORD)(*(v180 - 9)));
      }
      v180 = v172;
    } while (v172 != (__int64*)v177);
  LABEL_302:
    v175 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v175 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v175,
                               (_QWORD)(v177));
  }
  return result;
}

__int64 GameHr_11401e0(__int64 a1, int a2, __int64* a3)
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
  __int64 result;
  __int64 v15;
  _QWORD v16[2];
  __int64 v17;
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
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)a1 = GameData_2011d60;
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
      v11 = GameData_2011e18[v10];
      v20 = v18;
      ((void (*)(_BYTE**, __int64))v11)(&v20, v8);
      v19 = v10;
    }
    GameRoutine_eaec10(a1 + 64, v18);
    if (v19 != -1) {
      ((void (*)(_BYTE**, _BYTE*))GameData_2011e00[v19])(&v20, v18);
    }
  }
  *(_DWORD*)(a1 + 88) = *((_DWORD*)a3 + 12);
  *(_DWORD*)(a1 + 92) = *((_DWORD*)a3 + 13);
  *(_DWORD*)(a1 + 96) = *((_DWORD*)a3 + 14);
  *(_DWORD*)(a1 + 100) = *((_DWORD*)a3 + 15);
  *(_DWORD*)(a1 + 104) = *((_DWORD*)a3 + 16);
  if ((a3[9] & 1) != 0) {
    GameRoutine_60a270(v16, a3[11], a3[10]);
  }
  else {
    v12 = a3[10];
    v13 = a3[11];
    v16[0] = a3[9];
    v16[1] = v12;
    v17 = v13;
  }
  result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)a1 + 120LL))(a1, v16);
  if ((v16[0] & 1) != 0 && v17 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v15 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v15, (_QWORD)(v17));
  }
  return result;
}

void GameHr_114eb80(_QWORD* a1)
{
  __int64** v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v13;
    __int64 v14;
    __int64 v15;
    __int64** v16;
  } v13_;

  v2 = (__int64**)a1[75];
  if (v2 != nullptr) {
    GameHr_10aa0a0(v2);
  }
  v3 = (_QWORD*)a1[72];
  if (v3 != nullptr) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      if ((v3[2] & 1) != 0) {
        fw_text_String_CopyTerminated(&v13_.v13, v3[4], v3[3]);
      }
      else {
        v5 = v3[3];
        v6 = v3[4];
        v13_.v13 = v3[2];
        v13_.v14 = v5;
        v13_.v15 = v6;
      }
      v13_.v16 = (__int64**)v3[5];
      GameHr_10aa0a0(v13_.v16);
      if ((v13_.v13 & 1) != 0 && v13_.v15 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, v13_.v15);
      }
      v3 = (_QWORD*)*v3;
    } while (v3 != nullptr);
  }
  v8 = (_QWORD*)a1[83];
  if (v8 != nullptr) {
    v9 = fw_memory_g_heap_manager_ptr;
    do {
      if ((v8[2] & 1) != 0) {
        fw_text_String_CopyTerminated(&v13_.v13, v8[4], v8[3]);
      }
      else {
        v10 = v8[3];
        v11 = v8[4];
        v13_.v13 = v8[2];
        v13_.v14 = v10;
        v13_.v15 = v11;
      }
      v13_.v16 = (__int64**)v8[5];
      GameHr_10aa0a0(v13_.v16);
      if ((v13_.v13 & 1) != 0 && v13_.v15 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v12, v13_.v15);
      }
      v8 = (_QWORD*)*v8;
    } while (v8 != nullptr);
  }
}

__int64 GameHr_1156f80(__int64 a1)
{

#pragma clang fp contract(off)
  int v3;
  int v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  struct {
    __int64 v21[2];
    __int64 v22;
  } v21_;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v4 = (v3 & 8) != 0 ? 2 : 3;
    if ((v4 & v3) == 0) {
      return 0;
    }
  }
  v5 = *(__int64**)(a1 + 120);
  if ((*(_BYTE*)v5 & 1) != 0) {
    fw_text_String_CopyTerminated(v21_.v21, v5[2], v5[1]);
  }
  else {
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    v21_.v21[1] = v7;
    v21_.v22 = v8;
    v21_.v21[0] = v6;
  }
  if (GameData_22336e0 == 0) {
    goto LABEL_33;
  }
  result = (__int64)GameRoutine_1152360_alt1((_QWORD*)(GameData_22336e0 + 560),
                                             (unsigned __int8*)v21_.v21);
  if (result == 0) {
    goto LABEL_34;
  }
  v10 = *(_QWORD*)(result + 40);
  if (v10 == 0 || *(_QWORD*)(v10 + 136) == 0 || GameData_22336e0 == 0) {
    goto LABEL_33;
  }
  result = (__int64)GameRoutine_1152360_alt1((_QWORD*)(GameData_22336e0 + 560),
                                             (unsigned __int8*)v21_.v21);
  if (result == 0) {
    goto LABEL_34;
  }
  v11 = *(_QWORD*)(result + 40);
  if (v11 == 0 || *(_BYTE*)(v11 + 128) != 1) {
    goto LABEL_33;
  }
  if (*(_BYTE*)(v11 + 129) == 1) {
    if (GameData_22336e0 != 0 &&
        (v12 = GameRoutine_1152360_alt1((_QWORD*)(GameData_22336e0 + 560),
                                        (unsigned __int8*)v21_.v21)) !=
            nullptr &&
        (v13 = v12[5]) != 0) {
      v14 = *(_QWORD*)(v13 + 152);
    }
    else {
      v14 = 0;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f858,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_220f858) != 0) {
      GameData_220f854 = wld_Crc32(0, "CharacterAnimator", 0x11u);
      __cxa_guard_release((__int64)&GameData_220f858);
    }
    v15 = *(_QWORD*)(v14 + 512);
    v16 = v15;
    do {
      v17 = *(_DWORD*)(v16 - 16);
      v16 -= 16;
      v15 -= 16;
    } while (v17 != GameData_220f854);
    result = CharacterAnimator_107a6f0(*(_QWORD*)(v15 + 8));
    if (result == 0) {
    LABEL_34:
      if ((v21_.v21[0] & 1) == 0) {
        return result;
      }
      goto LABEL_35;
    }
    v18 = *(_QWORD*)(result + 16);
    if (v18 != 0 && *(__int64 (**)(void))(v18 + 16) == eft_ClampCurve_ptr) {
      if (*(float*)v18 >= *(float*)(v18 + 8)) {
        result = 0;
      }
      else {
        result = 3;
      }
      if ((v21_.v21[0] & 1) == 0) {
        return result;
      }
      goto LABEL_35;
    }
  LABEL_33:
    result = 0;
    goto LABEL_34;
  }
  result = 3;
  if ((v21_.v21[0] & 1) == 0) {
    return result;
  }
LABEL_35:
  if (v21_.v22 != 0) {
    v19 = result;
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v21_.v22);
    return v19;
  }
  return result;
}

#pragma GCC visibility pop
