#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
extern _UNKNOWN GameData_1aabf6c;
extern _UNKNOWN GameData_1abf89f;
extern _UNKNOWN GameData_1ad653b;
extern _UNKNOWN* GameData_1f9caf8;
extern __int64 (*GameData_21236c8[])();
extern __int64 (*GameData_2123748[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 GameData_21caab0;
extern _UNKNOWN GameData_21f8620;
__int64 GameRoutine_155f480(_QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1560ec0(_QWORD, _QWORD, _QWORD);
float GameRoutine_15610b0(_QWORD, _QWORD);
__int64 GameRoutine_15612b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15621a0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1562f00(_QWORD, _QWORD);
__int64 GameRoutine_1563030(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
long double GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1593d90(_QWORD, _QWORD);
__int64 GameRoutine_15e0120(_QWORD);
__int64 GameRoutine_15e0200(_QWORD);
__int64 GameRoutine_15e04f0(_QWORD);
__int64 GameRoutine_16e6ca0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1840a20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_198e400(__int64 result, __int64);
_QWORD* GameRoutine_19bb9c0(__int64);
__int64 GameRoutine_19e22c0(_QWORD, _QWORD);
__int64 GameRoutine_19e2a20(void);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a0c0(long double, double);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_682780(_QWORD);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6e5a20(_QWORD);
__int64 GameRoutine_82e3a0(_QWORD);
__int64 GameRoutine_890160(_QWORD);
__int64 GameRoutine_8e7ca0(_QWORD, _QWORD);
__int64 GameRoutine_975940(_QWORD);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1840a20(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_1593d90_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_1593d90");
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutAccessor_1562f00(__int64 result, __int64, float);
__int64 LayoutAccessor_1563030(__int64 result, __int64, char);
__int64 UnitUtil_15e0120(__int64);
__int64 UnitUtil_15e0200(__int64);
__int64 UnitUtil_15e04f0(__int64 result);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GetHero(unsigned __int8);
__int64 game_menu_PageTab_SetupLabel(__int64, __int64*, __int64, int, int, int);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
double ui_LayoutAccessor_GetPaneTranslate(__int64*, __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
float LayoutAccessor_15638b0(__int64*, const char*, char);
float ui_LayoutAccessor_SetPaneTranslate(__int64*, __int64, __int64);
void GameHr_198e400(__int64, __int64);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_198f8e0(_QWORD* a1);
__int64 GameHr_19c1c60(__int64 a1);
__int64 GameHr_19c2380(__int64 a1);
__int64 GameHr_19c2580(__int64 a1);
__int64 GameHr_19c28a0(__int64 a1);
void GameHr_19e20c0(__int64* a1);
const char* GameHr_19e3b70(const char* a1);

void GameHr_198f8e0(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  if (a1[3] != 0) {
    v1 = (_QWORD*)a1[2];
    if (v1 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v5 = (__int64)v1;
        v1 = (_QWORD*)*v1;
        v7 = (__int64*)(v5 + 40);
        v6 = *(_QWORD*)(v5 + 40);
        if (v6 != 0) {
          GameHr_198e400(v5 + 40, v6);
          if (*v7 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v8 = 128;
            }
            else {
              v8 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, *v7);
          }
        }
        if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
          v9 = *(_QWORD*)(v5 + 32);
          if (v9 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v10 = 128;
            }
            else {
              v10 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v9);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v5);
      } while (v1 != nullptr);
    }
    v11 = a1[1];
    a1[2] = 0;
    if (v11 != 0) {
      v12 = v11 & 7;
      if (v11 >= 8) {
        v14 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        v13 = 0;
        do {
          *(_QWORD*)(*a1 + 8 * v13) = 0;
          *(_QWORD*)(*a1 + 8 * v13 + 8) = 0;
          *(_QWORD*)(*a1 + 8 * v13 + 16) = 0;
          *(_QWORD*)(*a1 + 8 * v13 + 24) = 0;
          *(_QWORD*)(*a1 + 8 * v13 + 32) = 0;
          *(_QWORD*)(*a1 + 8 * v13 + 40) = 0;
          *(_QWORD*)(*a1 + 8 * v13 + 48) = 0;
          v15 = *a1 + 8 * v13;
          v13 += 8;
          *(_QWORD*)(v15 + 56) = 0;
        } while (v14 != v13);
      }
      else {
        v13 = 0;
      }
      if (v12 != 0) {
        v16 = 8 * v13;
        do {
          --v12;
          *(_QWORD*)(*a1 + v16) = 0;
          v16 += 8;
        } while (v12 != 0);
      }
    }
    a1[3] = 0;
  }
}

_QWORD* GameHr_19bbae0(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;
  _BYTE* v8;
  _QWORD* v9;
  _QWORD* v10;
  _BYTE* v11;
  __int64 v12;

  if (*a1 != 0) {
    v2 = a1[2];
    if (v2 == 0) {
      v3 = GameData_21caab0;
      GameRoutine_682bc0(&v12, *(_QWORD*)(*a1 + 32));
      if ((GameRoutine_8e7ca0(*(_QWORD*)(v3 + 176), v12) & 1) != 0) {
        goto LABEL_10;
      }
    LABEL_6:
      v4 = a1[1];
      if (v4 != 0) {
        v5 = *(_QWORD*)(v4 + 24);
        if (v5 != 0) {
          result = *(_QWORD**)(v5 + 80);
          if (result != nullptr && *(_BYTE*)result != 0) {
            return result;
          }
        }
      }
      goto LABEL_10;
    }
    if ((*(_BYTE*)(v2 + 416) & 8) != 0) {
      goto LABEL_6;
    }
  }
LABEL_10:
  v7 = a1[2];
  if (v7 != 0) {
    v8 = *(
        _BYTE**)(GameRoutine_975940(*(_QWORD*)(*(_QWORD*)(v7 + 392) + 288LL)) +
                 80);
    if (v8 != nullptr && *v8 != 0) {
      v9 = *(_QWORD**)(a1[2] + 392);
      return *(_QWORD**)(GameRoutine_975940(v9[36]) + 80);
    }
  }
  result = GameRoutine_19bb9c0(*a1);
  if (result == nullptr) {
    return result;
  }
  v10 = GameRoutine_19bb9c0(*a1);
  v11 = *(_BYTE**)(GameRoutine_975940(v10[36]) + 80);
  if (v11 != nullptr && *v11 != 0) {
    v9 = GameRoutine_19bb9c0(*a1);
    return *(_QWORD**)(GameRoutine_975940(v9[36]) + 80);
  }
  return nullptr;
}

__int64 GameHr_19c1c60(__int64 a1)
{

#pragma clang fp contract(off)
  char v2;
  const char* v3;
  __int64* v4;
  const char* v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  int v10;
  char* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  char v16;
  char* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  char* v27;
  double v28;
  float v29;
  float v30;
  float v31;
  double v32;
  float v33;
  int v34;
  int v35;
  double v36;
  float v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  _DWORD v44[3];
  float v45[3];
  struct {
    __int64* v46;
    __int64 v47;
  } v46_;

  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
  v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
  v2 = *(_BYTE*)(a1 + 120);
  v3 = *(const char**)(a1 + 136);
  v4 = *(__int64**)(a1 + 112);
  if ((v2 & 1) != 0) {
    v5 = v3;
  }
  else {
    v5 = (const char*)(a1 + 121);
  }
  LayoutAccessor_1560070((void*)(&v46_.v46), v4, v5),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
      v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
  result = v46_.v47;
  if (v46_.v47 != 0) {
    if (*(_QWORD*)(v46_.v47 + 8) == -1) {
      goto LABEL_77;
    }
    v7 = std___1___shared_weak_count_lock(v46_.v47),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
    v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
    v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v7 != 0) {
      v8 = v46_.v46;
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v9 = v7;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
            v34 =
                COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        std___1___shared_weak_count___release_weak(v9),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
            v34 =
                COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
      }
    }
    else {
      v8 = nullptr;
    }
    v10 = *(_DWORD*)(a1 + 144);
    switch (v10) {
    case 3:
      if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
        v19 = *(_QWORD*)(a1 + 32);
      }
      else {
        v19 = a1 + 17;
      }
      if (v19 != 0) {
        v20 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt00"),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v20 != 0) {
          GameRoutine_156c5d0_alt1(v20, v19, 0),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        }
      }
      if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
        v21 = *(_QWORD*)(a1 + 56);
      }
      else {
        v21 = a1 + 41;
      }
      if (v21 != 0) {
        v22 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt01"),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v22 != 0) {
          GameRoutine_156c5d0_alt1(v22, v21, 0),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        }
      }
      if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
        v23 = *(char**)(a1 + 80);
      }
      else {
        v23 = (char*)(a1 + 65);
      }
      if (v23 == nullptr) {
        goto LABEL_77;
      }
      v24 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt02"),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
      v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
      if (v24 == 0) {
        goto LABEL_77;
      }
      v25 = v23;
      goto LABEL_76;
    case 2:
      if (*(_BYTE*)(a1 + 148) != 1) {
        v28 = ui_LayoutAccessor_GetPaneTranslate(v8, (__int64)"T_Txt00"),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        v29 = *(float*)&v28;
        v45[1] = v30;
        v45[2] = v31;
        v32 = ui_LayoutAccessor_GetPaneTranslate(v8, (__int64)"T_Txt01"),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        v33 = *(float*)&v32;
        v44[1] = v34;
        v44[2] = v35;
        v36 = ui_LayoutAccessor_GetPaneTranslate(v8, (__int64)"T_Txt02"),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        v37 = (float)(v33 + *(float*)&v36) * 0x1.0000000000000p-1f;
        if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
          v38 = *(_QWORD*)(a1 + 32);
        }
        else {
          v38 = a1 + 17;
        }
        v45[0] = (float)(v29 + v33) * 0x1.0000000000000p-1f;
        *(float*)v44 = v37;
        if (v38 != 0) {
          v39 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt00"),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
          v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
          if (v39 != 0) {
            GameRoutine_156c5d0_alt1(v39, v38, 0),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v34 = COERCE_AS(__typeof__(v34),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(float, "s2", "=w"));
          }
        }
        ui_LayoutAccessor_SetPaneTranslate(v8, (__int64)"T_Txt00",
                                           (__int64)v45),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
            v34 =
                COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
          v40 = *(_QWORD*)(a1 + 56);
        }
        else {
          v40 = a1 + 41;
        }
        if (v40 != 0) {
          v41 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt01"),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
          v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
          if (v41 != 0) {
            GameRoutine_156c5d0_alt1(v41, v40, 0),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v34 = COERCE_AS(__typeof__(v34),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(float, "s2", "=w"));
          }
        }
        ui_LayoutAccessor_SetPaneTranslate(v8, (__int64)"T_Txt01",
                                           (__int64)v44),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
            v34 =
                COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        goto LABEL_74;
      }
      if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
        v14 = *(_QWORD*)(a1 + 32);
      }
      else {
        v14 = a1 + 17;
      }
      if (v14 != 0) {
        v15 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt00"),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v15 != 0) {
          GameRoutine_156c5d0_alt1(v15, v14, 0),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        }
      }
      v16 = *(_BYTE*)(a1 + 40);
      v17 = *(char**)(a1 + 56);
      v18 = (char*)(a1 + 41);
      break;
    case 1:
      if (*(_BYTE*)(a1 + 148) == 1) {
        if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
          v11 = *(char**)(a1 + 32);
        }
        else {
          v11 = (char*)(a1 + 17);
        }
        if (v11 == nullptr) {
          goto LABEL_49;
        }
        v12 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt00"),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v12 == 0) {
          goto LABEL_49;
        }
        v13 = v11;
        goto LABEL_48;
      }
      v42 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt00"),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
      v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
      if (v42 != 0) {
        GameRoutine_156c5d0_alt1(v42, (__int64)&GameData_1a9f09e, 0),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
            v34 =
                COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
      }
      v16 = *(_BYTE*)(a1 + 16);
      v17 = *(char**)(a1 + 32);
      v18 = (char*)(a1 + 17);
      break;
    default:
      v12 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt00"),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
      v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
      if (v12 == 0) {
      LABEL_49:
        v26 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt01"),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v26 == 0) {
        LABEL_74:
          v24 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt02"),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
          v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
          if (v24 == 0) {
            goto LABEL_77;
          }
          v25 = &GameData_1a9f09e;
        LABEL_76:
          GameRoutine_156c5d0_alt1(v24, (__int64)v25, 0),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        LABEL_77:
          result = v46_.v47;
          if (v46_.v47 != 0) {
            return std___1___shared_weak_count___release_weak(v46_.v47);
          }
          return result;
        }
        v27 = &GameData_1a9f09e;
      LABEL_73:
        GameRoutine_156c5d0_alt1(v26, (__int64)v27, 0),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
            v34 =
                COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        goto LABEL_74;
      }
      v13 = &GameData_1a9f09e;
    LABEL_48:
      GameRoutine_156c5d0_alt1(v12, (__int64)v13, 0),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
          v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
      goto LABEL_49;
    }
    if ((v16 & 1) != 0) {
      v43 = v17;
    }
    else {
      v43 = v18;
    }
    if (v43 == nullptr) {
      goto LABEL_74;
    }
    v26 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt01"),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
    v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
    v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v26 == 0) {
      goto LABEL_74;
    }
    v27 = v43;
    goto LABEL_73;
  }
  return result;
}

__int64 GameHr_19c2380(__int64 a1)
{
  char v2;
  const char* v3;
  __int64* v4;
  const char* v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64* v12;
    __int64 v13;
  } v12_;

  v2 = *(_BYTE*)(a1 + 120);
  v3 = *(const char**)(a1 + 136);
  v4 = *(__int64**)(a1 + 112);
  if ((v2 & 1) != 0) {
    v5 = v3;
  }
  else {
    v5 = (const char*)(a1 + 121);
  }
  LayoutAccessor_1560070((void*)(&v12_.v12), v4, v5);
  result = v12_.v13;
  if (v12_.v13 != 0) {
    if (*(_QWORD*)(v12_.v13 + 8) == -1) {
      return std___1___shared_weak_count___release_weak(result);
    }
    v7 = std___1___shared_weak_count_lock(v12_.v13);
    v8 = v12_.v12;
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v9 = v7;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v9);
    }
    v10 = (*(_BYTE*)(a1 + 16) & 1) != 0 ? *(_QWORD*)(a1 + 32) : a1 + 17;
    if (v10 != 0) {
      v11 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt");
      if (v11 != 0) {
        GameRoutine_156c5d0_alt1(v11, v10, 0);
      }
    }
    result = v12_.v13;
    if (v12_.v13 != 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
  }
  return result;
}

__int64 GameHr_19c2580(__int64 a1)
{
  char v2;
  const char* v3;
  __int64* v4;
  const char* v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64* v12;
    __int64 v13;
  } v12_;

  v2 = *(_BYTE*)(a1 + 120);
  v3 = *(const char**)(a1 + 136);
  v4 = *(__int64**)(a1 + 112);
  if ((v2 & 1) != 0) {
    v5 = v3;
  }
  else {
    v5 = (const char*)(a1 + 121);
  }
  LayoutAccessor_1560070((void*)(&v12_.v12), v4, v5);
  result = v12_.v13;
  if (v12_.v13 != 0) {
    if (*(_QWORD*)(v12_.v13 + 8) == -1) {
      return std___1___shared_weak_count___release_weak(result);
    }
    v7 = std___1___shared_weak_count_lock(v12_.v13);
    v8 = v12_.v12;
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v9 = v7;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v9);
    }
    v10 = (*(_BYTE*)(a1 + 16) & 1) != 0 ? *(_QWORD*)(a1 + 32) : a1 + 17;
    if (v10 != 0) {
      v11 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt");
      if (v11 != 0) {
        GameRoutine_156c5d0_alt1(v11, v10, 0);
      }
    }
    result = v12_.v13;
    if (v12_.v13 != 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
  }
  return result;
}

__int64 GameHr_19c28a0(__int64 a1)
{
  char v2;
  const char* v3;
  __int64* v4;
  const char* v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64* v14;
    __int64 v15;
  } v14_;

  v2 = *(_BYTE*)(a1 + 120);
  v3 = *(const char**)(a1 + 136);
  v4 = *(__int64**)(a1 + 112);
  if ((v2 & 1) != 0) {
    v5 = v3;
  }
  else {
    v5 = (const char*)(a1 + 121);
  }
  LayoutAccessor_1560070((void*)(&v14_.v14), v4, v5);
  result = v14_.v15;
  if (v14_.v15 != 0) {
    if (*(_QWORD*)(v14_.v15 + 8) == -1) {
      return std___1___shared_weak_count___release_weak(result);
    }
    v7 = std___1___shared_weak_count_lock(v14_.v15);
    v8 = v14_.v14;
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v9 = v7;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v9);
    }
    if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
      v10 = *(_QWORD*)(a1 + 32);
    }
    else {
      v10 = a1 + 17;
    }
    if (v10 != 0) {
      v11 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Character");
      if (v11 != 0) {
        GameRoutine_156c5d0_alt1(v11, v10, 0);
      }
    }
    v12 = (*(_BYTE*)(a1 + 40) & 1) != 0 ? *(_QWORD*)(a1 + 56) : a1 + 41;
    if (v12 != 0) {
      v13 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Actor");
      if (v13 != 0) {
        GameRoutine_156c5d0_alt1(v13, v12, 0);
      }
    }
    result = v14_.v15;
    if (v14_.v15 != 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
  }
  return result;
}

void GameHr_19e20c0(__int64* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = (_QWORD*)a1[2];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v5 = (_QWORD*)*v1;
      v6 = v1[6];
      if (v6 != 0) {
        v7 = *(_QWORD*)v3;
        v1[7] = v6;
        if (*(_QWORD*)(v7 + 200) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(v7 + v8, v6);
      }
      v9 = v1[3];
      if (v9 != 0) {
        v10 = *(_QWORD*)v3;
        v1[4] = v9;
        if (*(_QWORD*)(v10 + 200) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free(v10 + v11, v9);
      }
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v4 = 128;
      }
      else {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, (__int64)v1);
      v1 = v5;
    } while (v5 != nullptr);
  }
  v12 = *a1;
  *a1 = 0;
  if (v12 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, v12);
  }
}

__int64 GameHr_19e21d0(char a1)
{
  unsigned int v2;

  if ((GameRoutine_82e3a0(1) & 1) != 0 || (GameRoutine_82e3a0(3) & 1) != 0) {
    v2 = 1;
    if ((GameRoutine_19e22c0(9, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(1, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(2, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(3, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(4, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(5, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(6, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(7, a1 & 1) & 1) == 0) {
      return GameRoutine_19e22c0(8, a1 & 1);
    }
  }
  else {
    return 0;
  }
  return v2;
}

bool GameHr_19e22c0(__int64 a1, char a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  char v14;
  void* v15;
  unsigned int v16;
  unsigned int v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  _BOOL4 v27;
  __int64 v28;
  char* v30;
  unsigned __int64 v31;
  char* v32;
  __int64* v33;

  v3 = GameRoutine_19e2a20();
  v4 = 24;
  if ((a2 & 1) == 0) {
    v4 = 0;
  }
  v5 = v3 + v4;
  v33 = (__int64*)(v3 + v4);
  v6 = *(_QWORD*)(v3 + v4);
  if (*(_QWORD*)(v5 + 8) == v6) {
    v27 = true;
  }
  else {
    v7 = 0;
    v30 = nullptr;
    v31 = 0;
    v32 = nullptr;
    do {
      v8 = (char*)&GameData_21f8620 + 24 * *(unsigned __int8*)(v6 + 24 * v7);
      v9 = *(__int64**)v8;
      v10 = *((__int64**)v8 + 1);
      while (v9 != v10) {
        v11 = *v9;
        if (*v9 != 0) {
          v12 = *(_QWORD**)(v11 + 96);
          v13 = *(_QWORD**)(v11 + 104);
          if (v12 != v13) {
            v14 = 0;
            do {
              LOBYTE(v16) = GameData_21caab0;
              if (GameData_21caab0 != 0) {
                v3 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                        *v12 + 16LL);
                if (v3 != 0) {
                  v17 = *(_DWORD*)(v3 + 32);
                  v16 =
                      v17 / 0x21B7900 -
                      11 * ((390451573 * (unsigned __int64)(v17 / 0x21B7900)) >>
                            32);
                  if (v16 != 0) {
                    v18 = (v17 / 0x86DE40uLL) & 3;
                    if ((int)v18 > 1) {
                      if ((_DWORD)v18 == 3) {
                        v15 = &GameData_1aabf6c;
                      }
                      else {
                        v15 = &GameData_1ad653b;
                      }
                    }
                    else {
                      v15 = &GameData_1abf89f;
                      if ((_DWORD)v18 != 0) {
                        v15 = *(&GameData_1f9caf8 + v16);
                      }
                    }
                    v3 = GameRoutine_890160(v15);
                    LOBYTE(v16) = 1;
                  }
                }
                else {
                  LOBYTE(v16) = 0;
                }
              }
              ++v12;
              v14 |= v16;
            } while (v12 != v13);
            if ((v14 & 1) != 0) {
              if ((unsigned __int64)v32 < v31) {
                *(_DWORD*)v32 = v7;
                v32 += 4;
              }
              else {
                v19 = (char*)(v32 - v30);
                v20 = (v32 - v30) >> 2;
                v21 = v20 + 1;
                if ((unsigned __int64)(v20 + 1) >> 62 != 0) {
                  GameRoutine_6e5a20(v3);
                }
                if ((__int64)(v31 - (_QWORD)v30) >> 1 > v21) {
                  v21 = (__int64)(v31 - (_QWORD)v30) >> 1;
                }
                if (v31 - (unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFFCLL) {
                  v22 = 0x3FFFFFFFFFFFFFFFLL;
                }
                else {
                  v22 = v21;
                }
                if (v22 != 0) {
                  if (v22 >> 62 != 0) {
                    GameRoutine_60a210(v3);
                  }
                  v23 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 4 * v22,
                                           16, 0);
                }
                else {
                  v23 = 0;
                }
                v24 = v23 + 4 * v22;
                v25 = (__int64)&v19[v23 + -4 * v20];
                *(_DWORD*)&v19[v23] = v7;
                v31 = v24;
                v32 = &v19[v23 + 4];
                v3 = GameRoutine_1a0b950(v25, v30, v19);
                if (v30 != nullptr) {
                  v26 = 128;
                  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                    v26 = 56;
                  }
                  v3 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v26);
                }
                v30 = (char*)v25;
              }
              break;
            }
          }
        }
        ++v9;
      }
      ++v7;
      v6 = *v33;
    } while (0xAAAAAAAAAAAAAAABLL * ((v33[1] - *v33) >> 3) > v7);
    v27 = v30 == v32;
    if (v30 != nullptr) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v28 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v28);
    }
  }
  return !v27;
}

const char* GameHr_19e3b70(const char* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  const char* result;
  __int64 v30;
  __int64* v31;
  int v32;
  float v33;
  __int64 v34;
  __int64* v35;
  float v36;
  struct {
    __int64 v37;
    __int64 v38;
  } v37_;
  struct {
    __int64 (**v39)();
    const char* v40;
    char v41;
    char gap33_[3];
    int v42;
    int v43;
    char v44;
    char gap45_[3];
    __int64 (***v45)();
  } v39_;
  struct {
    __int64 v46;
    __int64 v47;
  } v46_;
  struct {
    __int64 v48;
    __int64 v49;
  } v48_;

  LayoutAccessor_1560070((void*)(&v46_.v46), (__int64*)a1 + 106,
                         "L_PageTab_Category");
  if (v46_.v47 != 0 && (v2 = std___1___shared_weak_count_lock(v46_.v47)) != 0) {
    v3 = v2;
    v4 = 0;
    v48_.v48 = v46_.v46;
    v48_.v49 = v2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v3 = 0;
    v48_.v48 = 0;
    v48_.v49 = 0;
    v4 = 1;
  }
  v39_.v39 = GameData_21236c8;
  v39_.v40 = a1;
  v5 = *(_QWORD*)a1;
  v39_.v45 = &v39_.v39;
  v6 = (*(__int64 (**)(const char*))(v5 + 192))(a1);
  game_menu_PageTab_SetupLabel((__int64)(a1 + 1072), &v48_.v48,
                               (__int64)&v39_.v39, v6, 4, 5);
  if (v39_.v45 == &v39_.v39) {
    v7 = 4;
  }
  else {
    if (v39_.v45 == nullptr) {
      goto LABEL_10;
    }
    v7 = 5;
  }
  ((__int64 (*)(__int64))(*v39_.v45)[v7])((__int64)v39_.v45);
LABEL_10:
  if (v48_.v49 != 0) {
    std___1___shared_weak_count___release_weak(v48_.v49);
  }
  if ((v4 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  if (v46_.v47 != 0) {
    std___1___shared_weak_count___release_weak(v46_.v47);
  }
  LayoutAccessor_1560070((void*)(&v46_.v46), (__int64*)a1 + 106, "L_PageTab");
  if (v46_.v47 != 0 && (v8 = std___1___shared_weak_count_lock(v46_.v47)) != 0) {
    v9 = v8;
    v10 = 0;
    v37_.v37 = v46_.v46;
    v37_.v38 = v8;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v9 = 0;
    v37_.v37 = 0;
    v37_.v38 = 0;
    v10 = 1;
  }
  v39_.v39 = GameData_2123748;
  v39_.v40 = a1;
  v11 = *(_QWORD*)a1;
  v39_.v45 = &v39_.v39;
  v12 = (*(__int64 (**)(const char*))(v11 + 192))(a1);
  game_menu_PageTab_SetupLabel((__int64)(a1 + 1200), &v37_.v37,
                               (__int64)&v39_.v39, v12, 14, 15);
  if (v39_.v45 == &v39_.v39) {
    v13 = 4;
  }
  else {
    if (v39_.v45 == nullptr) {
      goto LABEL_26;
    }
    v13 = 5;
  }
  ((void (*)(__int64 (***)(void)))(*v39_.v45)[v13])(v39_.v45);
LABEL_26:
  if (v37_.v38 != 0) {
    std___1___shared_weak_count___release_weak(v37_.v38);
  }
  if ((v10 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  if (v46_.v47 != 0) {
    std___1___shared_weak_count___release_weak(v46_.v47);
  }
  LayoutAccessor_1560070((void*)(&v39_.v39), (__int64*)a1 + 106,
                         "L_PageTab_Category");
  if (v39_.v40 != nullptr) {
    v14 = std___1___shared_weak_count_lock((__int64)v39_.v40);
    v15 = (__int64*)v39_.v39;
    if (v39_.v40 != nullptr) {
      std___1___shared_weak_count___release_weak((__int64)v39_.v40);
    }
    if (v14 != 0 && v15 != nullptr) {
      ui_LayoutAccessor_SetPaneVisible((__int64)v15, (__int64)"A_Tab", 0);
      LayoutAccessor_1562cf0((__int64)v15, "UnitOn");
      v16 = ui_LayoutAccessor_FindPane(v15, (__int64)"Face");
      if (v16 != 0) {
        v17 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d678[0], 0);
        if (v17 != 0) {
          v18 = *((_DWORD*)a1 + 269);
          v19 = *((_QWORD*)a1 + 136);
          v20 = v17;
          if (v18 < (unsigned __int64)((*((_QWORD*)a1 + 137) - v19) >> 2)) {
            v18 = *(_DWORD*)(v19 + 4LL * v18);
          }
          v21 = ~*((_DWORD*)a1 + 332) + *((_DWORD*)a1 + 334);
          if (v21 >= v18) {
            v21 = v18;
          }
          if (v18 >= 0) {
            v22 = v21;
          }
          else {
            v22 = 0;
          }
          v23 = *(unsigned __int8*)(*((_QWORD*)a1 + 166) + v22);
          UnitUtil_15e0120((__int64)&v39_.v39);
          if (v23 != 9) {
            UnitUtil_15e0200((__int64)&v39_.v39);
          }
          v24 = *((_DWORD*)a1 + 269);
          v25 = *((_QWORD*)a1 + 136);
          if (v24 < (unsigned __int64)((*((_QWORD*)a1 + 137) - v25) >> 2)) {
            v24 = *(_DWORD*)(v25 + 4LL * v24);
          }
          v26 = ~*((_DWORD*)a1 + 332) + *((_DWORD*)a1 + 334);
          if (v26 >= v24) {
            v26 = v24;
          }
          if (v24 >= 0) {
            v27 = v26;
          }
          else {
            v27 = 0;
          }
          v28 = game_GetHero(*(_BYTE*)(*((_QWORD*)a1 + 166) + v27));
          GameHr_1840a20(v20, 0, v28, 6u, 1);
          UnitUtil_15e04f0((__int64)&v39_.v39);
        }
      }
    }
    else if (v14 == 0) {
      goto LABEL_60;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak(v14);
    }
  }
LABEL_60:
  LayoutAccessor_1560070((void*)(&v39_.v39), (__int64*)a1 + 106, "L_KeyHelp00");
  result = v39_.v40;
  if (v39_.v40 == nullptr) {
    goto LABEL_68;
  }
  v30 = std___1___shared_weak_count_lock((__int64)v39_.v40);
  v31 = (__int64*)v39_.v39;
  result = v39_.v40;
  if (v39_.v40 != nullptr) {
    result = (const char*)std___1___shared_weak_count___release_weak(
        (__int64)v39_.v40);
  }
  if (v30 != 0 && v31 != nullptr) {
    v32 = (*(__int64 (**)(const char*))(*(_QWORD*)a1 + 192LL))(a1);
    v39_.v42 = 0;
    v39_.v43 = v32;
    v39_.v44 = 0;
    v39_.v45 = nullptr;
    v39_.v39 = (__int64 (**)(void)) "Play";
    v39_.v40 = "MID_KeyHelp_Play";
    v39_.v41 = 1;
    result = (const char*)GameRoutine_1593d90_alt1(v31, (__int64)&v39_.v39);
  }
  else if (v30 == 0) {
    goto LABEL_68;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    result = (const char*)std___1___shared_weak_count___release_weak(v30);
    if ((a1[1065] & 1) != 0) {
      goto LABEL_81;
    }
  LABEL_69:
    GameHr_1562680((__int64)(a1 + 848), "Out", 0x1.0000000000000p+0f);
    v33 = LayoutAccessor_15638b0((__int64*)a1 + 106, "Out", 0);
    LayoutAccessor_1562f00((__int64)(a1 + 848), (__int64)"Out", v33);
    LayoutAccessor_1563030((__int64)(a1 + 848), (__int64)"Out", 0);
    LayoutAccessor_1560070((void*)(&v39_.v39), (__int64*)a1 + 106,
                           "L_Condition");
    result = v39_.v40;
    if (v39_.v40 != nullptr) {
      v34 = std___1___shared_weak_count_lock((__int64)v39_.v40);
      v35 = (__int64*)v39_.v39;
      result = v39_.v40;
      if (v39_.v40 != nullptr) {
        result = (const char*)std___1___shared_weak_count___release_weak(
            (__int64)v39_.v40);
      }
      if (v34 != 0 && v35 != nullptr) {
        GameHr_1562680((__int64)v35, "Out", 0x1.0000000000000p+0f);
        v36 = LayoutAccessor_15638b0(v35, "Out", 0);
        LayoutAccessor_1562f00((__int64)v35, (__int64)"Out", v36);
        result = (const char*)LayoutAccessor_1563030((__int64)v35,
                                                     (__int64)"Out", 0);
        goto LABEL_78;
      }
      if (v34 != 0) {
      LABEL_78:
        if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
          result = (const char*)std___1___shared_weak_count___release_weak(v34);
        }
      }
    }
    *((_BYTE*)a1 + 1520) = 0;
    goto LABEL_81;
  }
LABEL_68:
  if ((a1[1065] & 1) == 0) {
    goto LABEL_69;
  }
LABEL_81:
  *((_BYTE*)a1 + 1065) = 1;
  return result;
}

#pragma GCC visibility pop
