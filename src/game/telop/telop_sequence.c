#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1374ee0(_QWORD, _QWORD);
__int64 GameRoutine_173fe30(void);
__int64 LayoutAccessor_155cda0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155d940(_QWORD);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 TelopSequence_1374e00_alt1(_QWORD) __asm__("TelopSequence_1374e00");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 TelopSequence_1374cc0_alt1(_BYTE* a1,
                                   char a2) __asm__("TelopSequence_1374cc0");
__int64 TelopSequence_1374e00_alt2(_BYTE* a1) __asm__("TelopSequence_1374e00");
__int64 TelopSequence_1375be0(_QWORD* a1);
__attribute__((swiftcall)) void GameRoutine_1366bd0(PSEUDO_X8, __int64, __int64,
                                                    unsigned int*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void
    LayoutAccessor_1560070_alt1(PSEUDO_X8,
                                _QWORD) __asm__("LayoutAccessor_1560070");
__int64 GameRoutine_1553220(__int64 result);
__int64 GameRoutine_173f310(__int64, __int64*, char, __int64, __int64, float);
__int64 LayoutAccessor_155c910(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(_QWORD, _QWORD) __asm__(
    "ui_LayoutAccessor_SetPaneVisible");
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD, long double);
__int64 ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
__n128 GameRoutine_173ff00(__int64, __int64);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 GameData_2259540;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
void GameRoutine_15e1b80(__int64, unsigned int, unsigned int, unsigned int,
                         __int64);
void LayoutAccessor_1562680(__int64*, __int64, float);
void snd_Fade_Fade_10c830(__int64, float);
__int64
TelopSequence_1374920_alt1(__int64* a1) __asm__("TelopSequence_1374920");
__n128 TelopSequence_1375430_alt1(__int64* a1) __asm__("TelopSequence_1375430");
__int64
TelopSequence_13755a0_alt1(__int64* a1) __asm__("TelopSequence_13755a0");
__int64
TelopSequence_1375790_alt1(__int64 result) __asm__("TelopSequence_1375790");
_QWORD* ui_LayoutAccessor_Setup_155dda0_alt1(_QWORD*, _QWORD*) __asm__(
    "ui_LayoutAccessor_Setup_155dda0");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt2(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void game_1366bd0(PSEUDO_X8, __int64, __int64,
                                             __int64);
__int64 LayoutAccessor_155c910_alt1(__int64,
                                    __int64*) __asm__("LayoutAccessor_155c910");
__int64
LayoutAccessor_155cda0_alt1(__int64 result, const char*,
                            const char*) __asm__("LayoutAccessor_155cda0");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_IsPaneVisible_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_IsPaneVisible");
__int64 ui_LayoutAccessor_SetPaneVisible_alt2(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
__int64 ui_LayoutAccessor_SetPriority_alt1(__int64 result, int) __asm__(
    "ui_LayoutAccessor_SetPriority");
const char*
TelopSequence_1374e00_alt3(__int64) __asm__("TelopSequence_1374e00");
float LayoutAccessor_155d940_alt1(__int64*) __asm__("LayoutAccessor_155d940");
void GameRoutine_1374ee0_alt1(__int64*,
                              const char*) __asm__("GameRoutine_1374ee0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 TelopSequence_1374cc0(__int64 a1, char a2);
const char* TelopSequence_1374e00(__int64* a1);
void TelopSequence_13755a0(__int64* a1);
__int64* TelopSequence_1375790(__int64* result);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameRoutine_155f760(__int64, __int64, const char*);
__int64 GameRoutine_156bee0(__int64 result, __int64, __int64, __int64, char,
                            float, float);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneSize(__int64 result, __int64, float, float);
extern _UNKNOWN GameData_1ac6c8b;
float ui_LayoutAccessor_GetPaneSize(__int64*, __int64);
void GameRoutine_190a0c0(float*, __int64, float*, _QWORD*, __int64);
__int64 TelopSequence_1374ee0(__int64* a1, const char* a2);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_173f310(__int64, __int64*, char, __int64, __int64, float);
__int64 GameHr_173ff00(__int64, __int64);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 ProcGameUIFade_15e1b80(__int64 result, unsigned int, unsigned int,
                               unsigned int, __int64);
__int64 TelopSequence_1374920(_QWORD* a1);
const char* TelopSequence_1375430(__int64* a1);

__int64 TelopSequence_1374920(_QWORD* a1)
{
  _QWORD handle[2];
  const char* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 result;
  __int64 v11;
  _QWORD v12[25];

  v2 = (const char*)(*(__int64 (**)(_QWORD*))(*a1 + 216LL))(a1);
  GameHr_1562680((__int64)(a1 + 21), v2, 0x1.0000000000000p+0f);
  v4 = a1[46];
  v3 = a1[47];
  while (v4 != v3) {
    if ((*(_BYTE*)v4 & 1) != 0) {
      v5 = *(_QWORD*)(v4 + 16);
    }
    else {
      v5 = v4 + 1;
    }
    if (v5 != 0) {
      snd_Fade_Fade_10c830((__int64)v12, 0x0.0p+0f);
      snd_play_ff2d0((void*)(handle), v5, v5, (__int64)v12, 0, 0x10001u, 0,
                     0x0.0p+0f, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(v12);
    }
    v4 += 24;
  }
  v6 = a1[22];
  if (v6 == 0) {
    goto LABEL_15;
  }
  v7 = std___1___shared_weak_count_lock_alt1(v6);
  if (v7 == 0) {
    goto LABEL_15;
  }
  v8 = a1[21];
  if (v8 != 0) {
    LODWORD(v3) = *(_DWORD*)(v8 + 2372);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v11 = v7;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt2(v11);
    if (v8 != 0) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if (v8 == 0) {
  LABEL_15:
    LODWORD(v3) = 0;
  }
LABEL_16:
  v9 = (*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1);
  if (v9 != 5 && GameData_2259540 != 0) {
    ProcGameUIFade_15e1b80(GameData_2259540, v3 - 1, v9, 1u, 0);
  }
  (*(void (**)(_QWORD*))(*a1 + 336LL))(a1);
  result = (*(__int64 (**)(_QWORD*))(*a1 + 312LL))(a1);
  if (*((_BYTE*)a1 + 820) == 1) {
    result = GameRoutine_1553220(*((unsigned int*)a1 + 204));
    if (*((_BYTE*)a1 + 820) == 1) {
      *((_BYTE*)a1 + 820) = 0;
    }
  }
  return result;
}

__int64 TelopSequence_1374cc0(__int64 a1, char a2)
{
  __int64* v2;
  const char* v5;
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

  v2 = (__int64*)(a1 + 168);
  v5 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 408LL))(a1);
  LayoutAccessor_1560070_alt2((void*)(&v12_.v12), v2, v5);
  result = v12_.v13;
  if (v12_.v13 != 0) {
    v7 = std___1___shared_weak_count_lock_alt1(v12_.v13);
    if (v7 != 0) {
      v8 = v12_.v12;
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v9 = v7;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt2(v9);
      }
      result = v12_.v13;
      if (v12_.v13 != 0) {
        result = std___1___shared_weak_count___release_weak_alt2(v12_.v13);
      }
      if (v8 != 0) {
        v10 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 408LL))(a1);
        result = ui_LayoutAccessor_IsPaneVisible_alt1(v2, v10);
        if ((a2 & 1) != (result & 1)) {
          LayoutAccessor_155d940_alt1((__int64*)(a1 + 440));
          if ((a2 & 1) != 0) {
            TelopSequence_1374e00_alt3(a1);
          }
          else {
            LayoutAccessor_155cda0_alt1(a1 + 440, "Out", nullptr);
            LayoutAccessor_155d940_alt1((__int64*)(a1 + 440));
            *(_BYTE*)(a1 + 800) = 0;
          }
          v11 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 408LL))(a1);
          return ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v2, v11,
                                                       a2 & 1);
        }
      }
    }
    else {
      result = v12_.v13;
      if (v12_.v13 != 0) {
        return std___1___shared_weak_count___release_weak_alt2(v12_.v13);
      }
    }
  }
  return result;
}

const char* TelopSequence_1374e00(__int64* a1)
{
  const char* result;
  const char* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    __int64 v7;
    const char* v8;
  } v7_;

  result = (const char*)(*(__int64 (**)(__int64*))(*a1 + 408))(a1);
  if (result != nullptr) {
    v3 = result;
    LayoutAccessor_1560070_alt2((void*)(&v7_.v7), a1 + 21, result);
    result = v7_.v8;
    if (v7_.v8 != nullptr) {
      v4 = std___1___shared_weak_count_lock_alt1((__int64)v7_.v8);
      if (v4 != 0) {
        v5 = v7_.v7;
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v6 = v4;
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak_alt2(v6);
        }
        result = v7_.v8;
        if (v7_.v8 != nullptr) {
          result = (const char*)std___1___shared_weak_count___release_weak_alt2(
              (__int64)v7_.v8);
        }
        if (v5 != 0 && (a1[100] & 1) == 0) {
          GameRoutine_1374ee0_alt1(a1, v3);
          result = (const char*)LayoutAccessor_155cda0_alt1((__int64)(a1 + 55),
                                                            "In", nullptr);
          *((_BYTE*)a1 + 800) = 1;
        }
      }
      else {
        result = v7_.v8;
        if (v7_.v8 != nullptr) {
          return (const char*)std___1___shared_weak_count___release_weak_alt2(
              (__int64)v7_.v8);
        }
      }
    }
  }
  return result;
}

__int64 TelopSequence_1374ee0(__int64* a1, const char* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 result;
  __int64 v7;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  char v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _BOOL4 v29;
  __int64 v30;
  __int64 v31;
  int32x4_t* v32;
  unsigned __int64 v33;
  float v34;
  float v35;
  __int128 v36;
  float32x4_t v37;
  __int128 v38;
  float v39;
  __int64 v40;
  __int64 v41;
  _BOOL4 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int32x2_t* v46;
  float32x4_t v47;
  float32x4_t v48;
  unsigned __int64 v49;
  unsigned __int32 v50;
  struct {
    unsigned __int64 v51;
    __int64 v52;
  } v51_;
  float v53;
  __int64 v54;

  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
  LayoutAccessor_1560070_alt2((void*)(&v51_.v51), a1 + 21, a2),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
  result = v51_.v52;
  if (v51_.v52 != 0) {
    v7 = std___1___shared_weak_count_lock_alt1(v51_.v52),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
    v2 = (__int64*)v51_.v51;
    result = v51_.v52;
    if (v51_.v52 != 0) {
      result = std___1___shared_weak_count___release_weak_alt2(v51_.v52),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    if (v7 == 0 || v2 == nullptr) {
      if (v7 == 0) {
        goto LABEL_34;
      }
    }
    else {
      v9 = ui_LayoutAccessor_FindTextBox(v2, (__int64)"T_Key"),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v9 != 0) {
        v3 = v9;
        v10 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v2, (__int64)"T_Key"),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v10 != nullptr) {
          GameRoutine_190a0c0((float*)&v51_.v51, (__int64)&v54, &v53, v10,
                              v10[27]),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          v11 = v54;
        }
        else {
          v11 = 0;
        }
        v12 = *(_BYTE*)(v3 + 88);
        *(_QWORD*)(v3 + 80) = v11;
        *(_BYTE*)(v3 + 88) = v12 | 0x10;
      }
      v13 = ui_LayoutAccessor_FindTextBox(v2, (__int64)"T_Txt"),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v13 != 0) {
        v3 = v13;
        v14 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v2, (__int64)"T_Txt"),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v14 != nullptr) {
          GameRoutine_190a0c0((float*)&v51_.v51, (__int64)&v54, &v53, v14,
                              v14[27]),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          v15 = v54;
        }
        else {
          v15 = 0;
        }
        v16 = *(_BYTE*)(v3 + 88);
        *(_QWORD*)(v3 + 80) = v15;
        *(_BYTE*)(v3 + 88) = v16 | 0x10;
      }
      v17 = ui_LayoutAccessor_FindAlignment(v2, (__int64)"A_Contents"),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v17 != 0) {
        Alignment_56b600(v17),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
        v18 = v2[1];
        if (v18 != 0) {
          v19 = std___1___shared_weak_count_lock_alt1(v18),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
          if (v19 != 0) {
            v3 = v19;
            if (*v2 != 0) {
              ControlCreator_13633c0(*v2),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
              std___1___shared_weak_count___release_weak_alt2(v3),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
            }
          }
        }
      }
      result = ui_LayoutAccessor_FindPane(v2, (__int64)&GameData_1ac6c8b),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
      if (result != 0) {
        ui_LayoutAccessor_GetPaneSize(v2, (__int64)&GameData_1ac6c8b),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
        v21 = v20;
        v22 = ui_LayoutAccessor_GetPaneSize(v2, (__int64)"T_Key"),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
        v23 =
            (float)(v22 + ui_LayoutAccessor_GetPaneSize(v2, (__int64)"T_Txt")) +
            0x1.4000000000000p+3f,
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
        if ((ui_LayoutAccessor_IsPaneVisible_alt1(v2, (__int64)"Next") & 1) !=
            0) {
          v23 =
              v23 + (float)(ui_LayoutAccessor_GetPaneSize(v2, (__int64)"Next") +
                            0x1.8000000000000p+4f),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
        }
        result = ui_LayoutAccessor_SetPaneSize(
            (__int64)v2, (__int64)&GameData_1ac6c8b,
            v23 + 0x1.8000000000000p+6f, v21),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
      result = std___1___shared_weak_count___release_weak_alt2(v7),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
LABEL_34:
  if (a2 == nullptr) {
    return result;
  }
  result = ui_LayoutAccessor_FindPane(a1 + 21, (__int64)a2),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
  if (result == 0) {
    return result;
  }
  result = (*(__int64 (**)(__int64*))(*a1 + 424))(a1),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
  if (result == 0) {
    return result;
  }
  v24 = result;
  if ((*(_BYTE*)(result + 88) & 1) == 0) {
    return result;
  }
  if (a1[23] == 0) {
    v50 = 0;
    goto LABEL_58;
  }
  v25 = a1[22];
  v50 = 0;
  if (v25 == 0) {
  LABEL_58:
    v33 = 0;
    goto LABEL_59;
  }
  v26 = std___1___shared_weak_count_lock_alt1(v25),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v26 != 0) {
    v27 = a1[21];
    if (v27 != 0) {
      LODWORD(v3) = *(unsigned __int8*)(v27 + 24);
      v28 = v27 + 152;
      if ((_DWORD)v3 == 0) {
        v28 = 0;
      }
      v29 = v28 != a1[23];
    }
    else {
      v29 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v2 = (__int64*)v26;
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
      std___1___shared_weak_count___release_weak_alt2((__int64)v2),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    if (!v29) {
      if ((v3 & 1) != 0) {
        goto LABEL_55;
      }
      goto LABEL_58;
    }
  }
  v30 = a1[22];
  if (v30 == 0 || *(_QWORD*)(v30 + 8) == -1) {
    goto LABEL_58;
  }
LABEL_55:
  v31 = a1[23];
  if (v31 == 0) {
    goto LABEL_58;
  }
  v32 = (int32x4_t*)GameRoutine_155f760((__int64)(a1 + 21), v31, a2),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
  v33 = 0;
  if (v32 != nullptr) {
    v33 = LANES128(v32[9]).n128_u32[3];
    v50 = LANES128_OF(vdupq_laneq_s32(v32[7], 3)).n128_u32[0];
  }
LABEL_59:
  v34 = *(float*)(v24 + 140);
  v49 = v33;
  result = (*(__int64 (**)(__int64*))(*a1 + 416))(a1),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((result & 1) != 0) {
    v35 = *(float*)(v24 + 84);
    if (a1[23] == 0) {
      return result;
    }
  }
  else {
    v36 = *(_OWORD*)(v24 + 112);
    v37 = *(float32x4_t*)(v24 + 128);
    v38 = *(_OWORD*)(v24 + 144);
    LOBYTE(v53) = 0;
    v51_.v51 = 0xFF7FFFFF7F7FFFFFLL;
    v54 = 0x7F7FFFFFFF7FFFFFLL;
    LANES128(v37).n128_u64[0] = LANES128_OF(vmulq_f32(v37, v37)).n128_u64[0];
    result = GameRoutine_156bee0(
        v24, (__int64)&v51_.v51, (__int64)&v54, (__int64)&v53, 0,
        sqrtf((float)(LANES128(v37).n128_f32[0] +
                      (float)(*(float*)&v36 * *(float*)&v36)) +
              (float)(*(float*)&v38 * *(float*)&v38)) /
            *(float*)(v24 + 72),
        sqrtf((float)(LANES128(v37).n128_f32[1] +
                      (float)(*((float*)&v36 + 1) * *((float*)&v36 + 1))) +
              (float)(*((float*)&v38 + 1) * *((float*)&v38 + 1))) /
            *(float*)(v24 + 76)),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
    v39 = vabds_f32(*((float*)&v54 + 1), *((float*)&v51_.v51 + 1));
    if (LOBYTE(v53) != 0) {
      v35 = v39;
    }
    else {
      v35 = 0x0.0p+0f;
    }
    if (a1[23] == 0) {
      return result;
    }
  }
  result = a1[22];
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock_alt1(result),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
  if (result == 0) {
    goto LABEL_76;
  }
  v40 = a1[21];
  if (v40 != 0) {
    LODWORD(v2) = *(unsigned __int8*)(v40 + 24);
    v41 = v40 + 152;
    if ((_DWORD)v2 == 0) {
      v41 = 0;
    }
    v42 = v41 != a1[23];
  }
  else {
    v42 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v43 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
    result = std___1___shared_weak_count___release_weak_alt2(v43),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  if (!v42) {
    if (((unsigned __int8)v2 & 1) == 0) {
      return result;
    }
  }
  else {
  LABEL_76:
    v44 = a1[22];
    if (v44 == 0 || *(_QWORD*)(v44 + 8) == -1) {
      return result;
    }
  }
  v45 = a1[23];
  if (v45 != 0) {
    result = GameRoutine_155f760((__int64)(a1 + 21), v45, a2),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
    if (result != 0) {
      LANES128(v47).n128_u32[0] = v50;
      v46 = *(int32x2_t**)(result + 24);
      LANES128(v47).n128_f32[1] =
          (float)(v34 + (float)(PSEUDO_UNFUSED(v35 * -0x1.0000000000000p-1f))) +
          -0x1.c000000000000p+4f;
      LANES128(v47).n128_u64[1] = v49;
      if (v46 != nullptr) {
        LANES128(v48).n128_u64[0] =
            LANES64_OF(vzip2_s32(v46[15], v46[17])).n64_u64[0];
        LANES128(v48).n128_u64[1] = LANES64(v46[19]).n64_u32[1];
        v47 = vsubq_f32(v47, v48);
      }
      *(_QWORD*)(result + 48) = LANES128(v47).n128_u64[0];
      *(_DWORD*)(result + 56) = LANES128(v47).n128_u32[2];
      *(_BYTE*)(result + 88) |= 0x10u;
    }
  }
  return result;
}

const char* TelopSequence_1375430(__int64* a1)
{
  const char* result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  _QWORD v9[2];
  __int64 v10[2];
  struct {
    const char* v11;
    const char* v12;
  } v11_;

  result = (const char*)(*(__int64 (**)(__int64*))(*a1 + 432))(a1);
  if (result != nullptr) {
    LayoutAccessor_1560070_alt2((void*)(&v11_.v11), a1 + 21, result);
    result = v11_.v12;
    if (v11_.v12 != nullptr) {
      v3 = std___1___shared_weak_count_lock_alt1((__int64)v11_.v12);
      v4 = (__int64)v11_.v11;
      result = v11_.v12;
      if (v3 != 0) {
        v5 = (__int64)v11_.v11;
      }
      else {
        v5 = 0;
      }
      if (v11_.v12 != nullptr) {
        result = (const char*)std___1___shared_weak_count___release_weak_alt2(
            (__int64)v11_.v12);
      }
      if (v5 != 0) {
        LayoutAccessor_1562cf0_alt1(v4, "Title_System");
        v10[0] = v5;
        v10[1] = v3;
        if (v3 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                    memory_order_relaxed);
        }
        v11_.v11 = "In_Judege01";
        v11_.v12 = (_BYTE*)(((_UNKNOWN**)0x8LL) + 3);
        v9[0] = "Out";
        v9[1] = 3;
        v6 = GameHr_173f310((__int64)a1, v10, 0, (__int64)&v11_.v11,
                            (__int64)v9, -0x1.0000000000000p+0f);
        a1[99] = v6;
        if (v3 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v3);
          v6 = a1[99];
        }
        result = (const char*)GameHr_173ff00(v6, (__int64)"TitleTxt_Judege01");
        v7 = a1[99];
        if ((*(_BYTE*)(v7 + 248) & 1) != 0) {
          *(_QWORD*)(v7 + 256) = 12;
          v8 = *(char**)(v7 + 264);
        }
        else {
          *(_BYTE*)(v7 + 248) = 24;
          v8 = (char*)(v7 + 249);
        }
        strcpy(v8, "TitleTxt_Out");
      }
      if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return (const char*)std___1___shared_weak_count___release_weak_alt2(v3);
      }
    }
  }
  return result;
}

void TelopSequence_13755a0(__int64* a1)
{
  int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    __int64 v25;
    __int64 v26;
  } v25_;
  struct {
    __int64 v27;
    int v28;
    int v29;
    int v30;
    int v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    int v35;
    char gap68_[4];
    __int64 v36;
    __int64 v37;
    __int64 v38;
  } v27_;

  (*(void (**)(__int64*))(*a1 + 232))(a1);
  v27_.v36 = 0;
  v27_.v37 = 0;
  v27_.v38 = 0;
  v27_.v32 = 0;
  v27_.v33 = 0;
  v27_.v34 = 0;
  v27_.v35 = 0;
  v27_.v27 = 0x800000018LL;
  v2 = (*(__int64 (**)(__int64*))(*a1 + 176))(a1);
  v3 = *a1;
  v27_.v30 = v2;
  v4 = (*(__int64 (**)(__int64*))(v3 + 184))(a1);
  v5 = *a1;
  v27_.v31 = v4;
  v6 = (*(__int64 (**)(__int64*))(v5 + 192))(a1);
  v7 = *a1;
  v27_.v28 = v6;
  v8 = (*(__int64 (**)(__int64*))(v7 + 200))(a1);
  v9 = *((_BYTE*)a1 + 272);
  v10 = a1[36];
  v27_.v29 = v8;
  if ((v9 & 1) != 0) {
    v11 = v10;
  }
  else {
    v11 = (__int64)a1 + 273;
  }
  if ((a1[37] & 1) != 0) {
    v12 = a1[39];
  }
  else {
    v12 = (__int64)a1 + 297;
  }
  game_1366bd0((void*)(&v25_.v25), v11, v12, (__int64)&v27_.v27);
  v13 = v25_.v25;
  v14 = v25_.v26;
  v15 = a1[20];
  v25_.v25 = 0;
  v25_.v26 = 0;
  a1[19] = v13;
  a1[20] = v14;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt2(v15);
  }
  v16 = v25_.v26;
  if (v25_.v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt2(v16);
  }
  v17 = v27_.v36;
  if (v27_.v36 != 0) {
    v18 = v27_.v37;
    v19 = fw_memory_g_heap_manager_ptr;
    if (v27_.v36 == v27_.v37) {
      goto LABEL_24;
    }
    v20 = v27_.v37;
    do {
      v21 = *(_BYTE*)(v20 - 24);
      v20 -= 24;
      if ((v21 & 1) != 0) {
        v22 = *(_QWORD*)(v18 - 8);
        if (v22 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v19 + v23, v22);
        }
      }
      v18 = v20;
    } while (v20 != v17);
    v27_.v37 = v17;
    v17 = v27_.v36;
    if (v27_.v36 != 0) {
    LABEL_24:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v19 + v24, v17);
    }
  }
}

__int64* TelopSequence_1375790(__int64* result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  __int128 v8;
  int v9;
  const char* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  unsigned __int8* v14;
  unsigned int v15;
  struct {
    __int64* v16;
    __int64 v17;
  } v16_;
  _QWORD v18[5];

  v4 = result[19];
  if (*(_BYTE*)(v4 + 24) != 1) {
    return result;
  }
  v18[2] = v3;
  v18[3] = v1;
  v18[4] = v2;
  v5 = result[20];
  v6 = result;
  v18[0] = v4;
  v18[1] = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0_alt1(result + 21, v18);
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak_alt2(v5);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0_alt1(result + 21, v18);
  }
  LayoutAccessor_155e830_alt1((__int64)(v6 + 21), 1);
  if (game_ProcFadeView_instance_ != 0) {
    v7 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v7 + 172) == *(float*)(v7 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v7 + 160) + 16LL))(v7 + 160);
    }
    else {
      v8 = *(_OWORD*)(v7 + 208);
    }
    v9 = 40;
    if (*((float*)&v8 + 3) == 0x1.0000000000000p+0f) {
      if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v7 + 160) + 16LL))(
                          v7 + 160, *((float*)&v8 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
        v9 = 1050;
      }
      else {
        v9 = 40;
      }
    }
  }
  else {
    v9 = 40;
  }
  ui_LayoutAccessor_SetPriority_alt1((__int64)(v6 + 21), v9);
  v10 = (const char*)(*(__int64 (**)(__int64*))(*v6 + 408))(v6);
  LayoutAccessor_1560070_alt2((void*)(&v16_.v16), v6 + 21, v10);
  if (v16_.v17 != 0) {
    v11 = std___1___shared_weak_count_lock_alt1(v16_.v17);
    v12 = v16_.v16;
    if (v16_.v17 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v16_.v17);
    }
    if (v11 != 0 && v12 != nullptr) {
      LayoutAccessor_155c910_alt1((__int64)(v6 + 55), v12);
      LayoutAccessor_155c910_alt1((__int64)(v6 + 77), v12);
      LayoutAccessor_155cda0_alt1((__int64)(v6 + 77), "Wait", nullptr);
      goto LABEL_22;
    }
    if (v11 != 0) {
    LABEL_22:
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_alt2(v11);
      }
    }
  }
  v13 = (*(__int64 (**)(__int64*))(*v6 + 408))(v6);
  ui_LayoutAccessor_SetPaneVisible_alt2((__int64)(v6 + 21), v13, 0);
  result = (__int64*)(*(__int64 (**)(__int64*))(*v6 + 264))(v6);
  v14 = (unsigned __int8*)v6[2];
  if (v14 != nullptr) {
    v15 = *v14;
    if (v15 <= 0x10 && ((1 << v15) & 0x1CE00) != 0) {
      *((_WORD*)v6 + 68) |= 0x80u;
    }
  }
  *((_WORD*)v6 + 68) |= 8u;
  return result;
}

__int64 TelopSequence_1375be0(_QWORD* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;

  if (a1[57] != 0) {
    v3 = a1[56];
    if (v3 != 0) {
      v4 = std___1___shared_weak_count_lock(v3);
      if (v4 != 0) {
        v5 = a1[55];
        if (v5 != 0) {
          v1 = *(unsigned __int8*)(v5 + 24);
          v6 = v5 + 152;
          if (v1 == 0) {
            v6 = 0;
          }
          v7 = v6 != a1[57];
        }
        else {
          v7 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v7) {
            goto LABEL_11;
          }
        }
        else {
          v9 = v4;
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v9);
          if (v7) {
            goto LABEL_11;
          }
        }
        if ((v1 & 1) == 0) {
          goto LABEL_18;
        }
        goto LABEL_16;
      }
    LABEL_11:
      v8 = a1[56];
      if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
        goto LABEL_18;
      }
    LABEL_16:
      v10 = a1[68];
      if (v10 != 0 && *(float*)(v10 + 60) != 0.0) {
        goto LABEL_20;
      }
    }
  }
LABEL_18:
  v11 = (*(__int64 (**)(_QWORD*))(*a1 + 216LL))(a1);
  if (a1[99] == 0 || (GameRoutine_173fe30() & 1) == 0) {
    v12 = LayoutAccessor_1563280(a1 + 21, v11, 0) ^ 1;
    return v12 & 1;
  }
LABEL_20:
  v12 = 0;
  return v12 & 1;
}

#pragma GCC visibility pop
