#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1563030(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD, float);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2001710[])();
float LayoutAccessor_15637c0(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* game_gameui_control_GmapTroopInfo_SetInfoEnemy(__int64 a1, __int64 a2,
                                                       char a3);
__int64 GmapTroopInfo_1010590(_QWORD* a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 Element_18850d0(_QWORD, _QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__n128 GameRoutine_1653f50(_DWORD*, __int64, __n128 result);
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern _UNKNOWN GameData_1ac6c8b;
extern __int64 (*GameData_2001790[])();
extern __int64 (*GameData_2001948[])();
extern __int64 (*game_gameui_control_KeyIcon_Destroy_KeyIcon_17aa580_ptr[])();
extern __int64 GameData_2131d90[8];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
unsigned int* Pane_58fac0(__int64, __int64);
__attribute__((swiftcall)) void GmapTroopInfo_1010760(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2);
__n128 game_gameui_control_GmapTroopInfo_SetInfoPlayerOther_lambda0_Invoke(
    __int64 a1, unsigned int* a2, _QWORD* a3, __int64 a4, __int64 a5,
    __int64 a6, __int64 a7, __int64 a8);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 LayoutAccessor_1562060(__int64 result, __int64, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
extern __int64 (*GameData_2001680[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212fc70[2];
extern __int64 GameData_212d690;
extern char GameData_1a9f09e;
float32x4_t* GameRoutine_156c240(float32x4_t* result);
unsigned int* GameRoutine_190a0c0(unsigned int* result, __int64, float*,
                                  _QWORD*, __int64);
void GameRoutine_156c910(__int64, __int64, int, ...);
void LayoutAccessor_1562680_alt1(__int64*, __int64,
                                 float) __asm__("LayoutAccessor_1562680");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 game_gameui_control_GmapTroopInfo_SetInfoPlayerOther(__int64 a1,
                                                             __int64 a2,
                                                             char a3);
float game_gameui_control_GmapTroopInfo_SetInfoEnemy_lambda0_Invoke(
    __int64 a1, unsigned int* a2, __int64* a3, __int64 a4, __int64 a5,
    __int64 a6, __int64 a7, __int64 a8);

__int64 game_gameui_control_GmapTroopInfo_SetInfoPlayerOther(__int64 a1,
                                                             __int64 a2,
                                                             char a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  const char* v18;
  int v19;
  char* v20;
  __int64 v21;
  __int64 result;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;
  __int64 v25;
  int v26;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  if (*(_BYTE*)(a2 + 100) == 1) {
    game_gameui_control_GmapTroopInfo_SetInfoEnemy(a1, a2, a3 & 1),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
    goto LABEL_16;
  }
  LayoutAccessor_1562680_alt1((__int64*)(a1 + 88), (__int64)"Default",
                              0x1.0000000000000p+0f),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  v12 = v23_.v23;
  v23_.v23[0] = GameData_2001680;
  v23_.v23[1] = a1;
  v13 = *(_DWORD*)(a2 + 96);
  v23_.v24 = v23_.v23;
  if (v13 >= 1) {
    v14 = 0;
    v15 = a2;
    do {
      v26 = v14;
      v25 = v15;
      if (v23_.v24 == nullptr) {
        GameRoutine_60a310_alt1(),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
      }
      (*(void (**)(_QWORD*, int*, __int64*))(*v23_.v24 + 48LL))(v23_.v24, &v26,
                                                                &v25),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
      v16 = *(int*)(a2 + 96);
      ++v14;
      v15 += 16;
    } while (v14 < v16);
    v12 = v23_.v24;
    if (v23_.v24 != v23_.v23) {
      if (v23_.v24 != nullptr) {
        v17 = 40;
      LABEL_11:
        (*(void (**)(_QWORD*, __int64))(*v12 + v17))(v12, v11),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
        LODWORD(v16) = *(_DWORD*)(a2 + 96);
      }
      if ((int)v16 >= 4) {
        v18 = "Bg_Type01";
      }
      else {
        v18 = "Bg_Type00";
      }
      LayoutAccessor_1562cf0(a1 + 88, (__int64)v18),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
    LABEL_16:
      v19 = *(_DWORD*)(a2 + 96);
      if (v19 <= 5) {
        do {
          v20 = game_util_Format((__int64)"L_Type%02d", (unsigned int)v19, v5,
                                 v6, v7, v8, v9, v10, v23_.v23[0]),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
          ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)v20, 0),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
          ++v19;
        } while (v19 != 6);
      }
      v21 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                            (__int64)"A_Type00"),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
      if (v21 != 0) {
        Alignment_56b600(v21),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
      }
      result = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                               (__int64)"A_Type01"),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
      if (result != 0) {
        return Alignment_56b600(result);
      }
      return result;
    }
  }
  v17 = 32;
  goto LABEL_11;
}

_QWORD* game_gameui_control_GmapTroopInfo_SetInfoEnemy(__int64 a1, __int64 a2,
                                                       char a3)
{
  float v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  char v12;
  _QWORD* result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  _QWORD v18[4];
  _QWORD* v19;
  __int64 v20;
  char v21;
  int v22;

  v21 = a3;
  LayoutAccessor_1562680(a1 + 88, "Enemy", 1.0);
  v5 = 0.0;
  v6 = LayoutAccessor_1563280(a1 + 88, "In", 1);
  if ((v6 & 1) != 0) {
    v5 = LayoutAccessor_15637c0(a1 + 88, "In", 1);
    LayoutAccessor_1563030(a1 + 88, "In", 1);
  }
  v7 = ui_LayoutAccessor_FindPane(a1 + 88, "N_Type");
  v10 = v7;
  if (v7 != 0) {
    v11 = *(_BYTE*)(v7 + 89);
    v12 = *(_BYTE*)(v7 + 88) & 1;
    *(_BYTE*)(v7 + 88) |= 1u;
    *(_BYTE*)(v7 + 89) = -1;
  }
  else {
    v11 = 0;
    v12 = 0;
  }
  result = v18;
  v18[0] = GameData_2001710;
  v18[1] = a1;
  v19 = v18;
  v18[2] = &v21;
  if (*(int*)(a2 + 96) < 1) {
    goto LABEL_13;
  }
  v14 = 0;
  v15 = a2;
  do {
    v22 = v14;
    v20 = v15;
    if (v19 == nullptr) {
      GameRoutine_60a310(0, v8);
    }
    (*(void (**)(_QWORD*, int*, __int64*))(*v19 + 48LL))(v19, &v22, &v20);
    ++v14;
    v15 += 16;
  } while (v14 < *(int*)(a2 + 96));
  result = v19;
  if (v19 == v18) {
  LABEL_13:
    v16 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_15;
    }
    v16 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(*result + v16))(
      result, v8, v9);
LABEL_15:
  if ((v6 & 1) != 0) {
    LayoutAccessor_1562680(a1 + 88, "In", 1.0);
    result = (_QWORD*)LayoutAccessor_15636c0(a1 + 88, "In", 1, v5);
  }
  if (v10 != 0) {
    v17 = *(_BYTE*)(v10 + 88);
    *(_BYTE*)(v10 + 89) = v11;
    *(_BYTE*)(v10 + 88) = v17 & 0xFE | v12;
  }
  return result;
}

__int64 GmapTroopInfo_1010590(_QWORD* a1)
{
  int v1;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v3 = ui_LayoutAccessor_FindPane(a1 + 11, "N_Type");
  if (v3 == 0 || a1[13] == 0 || a1[12] == 0) {
    return LayoutAccessor_1562680(a1 + 11, "Out", 1.0f);
  }
  v4 = *(_BYTE*)(v3 + 89);
  v5 = std___1___shared_weak_count_lock(a1[12]);
  if (v5 == 0) {
    goto LABEL_12;
  }
  v6 = a1[11];
  if (v6 != 0) {
    v1 = *(unsigned __int8*)(v6 + 24);
    v7 = v6 + 152;
    if (v1 == 0) {
      v7 = 0;
    }
    v8 = v7 != a1[13];
  }
  else {
    v8 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v8) {
    LABEL_12:
      v9 = a1[12];
      if (v9 == 0 || *(_QWORD*)(v9 + 8) == -1) {
        return LayoutAccessor_1562680(a1 + 11, "Out", 1.0f);
      }
      goto LABEL_17;
    }
  }
  else {
    v10 = v5;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v10);
    if (v8) {
      goto LABEL_12;
    }
  }
  if ((v1 & 1) == 0) {
    return LayoutAccessor_1562680(a1 + 11, "Out", 1.0f);
  }
LABEL_17:
  v11 = a1[13];
  if (v11 != 0) {
    v12 = *(_QWORD*)(v11 + 24);
    if (v12 != 0) {
      *(_BYTE*)(v12 + 89) = v4;
    }
  }
  return LayoutAccessor_1562680(a1 + 11, "Out", 1.0f);
}

__attribute__((swiftcall)) void GmapTroopInfo_1010760(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* result;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v6 = (_QWORD*)LayoutEx_579160(1072, 8);
  v7 = v6 + 3;
  v8 = v6;
  v6[1] = 0;
  v6[2] = 0;
  *v6 = GameData_2001790;
  result = (_QWORD*)Element_18850d0(v6 + 3, a1, a2);
  v10 = GameData_2131d90[0] + 376;
  v8[3] = GameData_2131d90[0] + 16;
  v8[12] = v10;
  v11 = v8 + 12;
  *((_DWORD*)v8 + 263) = *(_DWORD*)(a1 + 1028);
  LODWORD(v10) = *(_DWORD*)(a1 + 1032);
  *((_DWORD*)v8 + 265) = 0;
  *((_DWORD*)v8 + 264) = v10;
  *((_BYTE*)v8 + 1064) = *(_BYTE*)(a1 + 1040);
  v12 = ui_Manager_instance_;
  v13 = *(_QWORD*)(ui_Manager_instance_ + 1248);
  v14 = ui_Manager_instance_ + 1240;
  if (v13 == ui_Manager_instance_ + 1240) {
    goto LABEL_4;
  }
  while (*(_QWORD**)(v13 + 16) != v11) {
    v13 = *(_QWORD*)(v13 + 8);
    if (v13 == v14) {
      goto LABEL_4;
    }
  }
  if (v13 == v14) {
  LABEL_4:
    result = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
    result[1] = v14;
    result[2] = v11;
    v15 = *(_QWORD*)(v12 + 1240);
    *result = v15;
    *(_QWORD*)(v15 + 8) = result;
    *(_QWORD*)(v12 + 1240) = result;
    ++*(_QWORD*)(v12 + 1256);
  }
  *a3 = v7;
  a3[1] = v8;
  v8[3] = game_gameui_control_KeyIcon_Destroy_KeyIcon_17aa580_ptr;
  v8[12] = GameData_2001948;
  {
    result;
    return;
  }
}

__n128 game_gameui_control_GmapTroopInfo_SetInfoPlayerOther_lambda0_Invoke(
    __int64 a1, unsigned int* a2, _QWORD* a3, __int64 a4, __int64 a5,
    __int64 a6, __int64 a7, __int64 a8)
{

#pragma clang fp contract(off)
  __int64 v8;
  _DWORD* v9;
  char* v10;
  __n128 result;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __n128 v15;
  __int64 v16;
  unsigned int* v17;
  struct {
    __int64* v18;
    __int64 v19;
  } v18_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v8 = *(_QWORD*)(a1 + 8);
  v9 = (_DWORD*)*a3;
  v10 = game_util_Format((__int64)"L_Type%02d", *a2, (__int64)a3, a4, a5, a6,
                         a7, a8, (char)v18_.v18),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LayoutAccessor_1560070((void*)(&v18_.v18), (__int64*)(v8 + 88), (__int64)v10),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v18_.v19 != 0) {
    v12 = std___1___shared_weak_count_lock(v18_.v19),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v13 = v18_.v18;
    if (v18_.v19 != 0) {
      result = std___1___shared_weak_count___release_weak(v18_.v19),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (v12 != 0 && v13 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
      v14 = ui_LayoutAccessor_FindPane_alt1(v13, (__int64)&GameData_1ac6c8b),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v14 != 0) {
        v16 = v14;
        v17 = Pane_58fac0(v14, (__int64)"Min_Width"),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v17 != nullptr) {
          PSEUDO_LOW_LANE128(v15, n128_f32,
                             (float)*(int*)((char*)v17 + v17[1]));
          *(_BYTE*)(v16 + 88) |= 0x10u;
          *(_DWORD*)(v16 + 80) = LANES128(v15).n128_u32[0];
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v15 = std___1___shared_weak_count___release_weak(v12),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v18_.v18 = v13;
      v18_.v19 = v12;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                memory_order_relaxed);
      result = GameRoutine_1653f50(v9, (__int64)&v18_.v18, v15),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v18_.v19 != 0) {
        result = std___1___shared_weak_count___release_weak(v18_.v19),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    else if (v12 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 16LL))(
          v12, *(long double*)&result),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v0", "=w"));
      return std___1___shared_weak_count___release_weak(v12);
    }
  }
  return result;
}

float game_gameui_control_GmapTroopInfo_SetInfoEnemy_lambda0_Invoke(
    __int64 a1, unsigned int* a2, __int64* a3, __int64 a4, __int64 a5,
    __int64 a6, __int64 a7, __int64 a8)
{

#pragma clang fp contract(off)
  __int64 v8;
  __int64 v9;
  char* v11;
  __n128 v12;
  __int64 v13;
  __int64* v14;
  unsigned __int64 v15;
  __int64 v16;
  const char* v18;
  __int64 v19;
  __int64 v20;
  unsigned int* v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  int v34;
  int v35;
  char v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  int v40;
  int v41;
  char v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned int* v46;
  char v48;
  float32x4_t v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  struct {
    unsigned __int64 v55;
    __int64 v56;
  } v55_;
  float v57;
  _DWORD v58[2];

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v8 = *a3;
  v9 = *(_QWORD*)(a1 + 8);
  v11 = game_util_Format((__int64)"L_Type%02d", *a2, (__int64)a3, a4, a5, a6,
                         a7, a8, v48),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LayoutAccessor_1560070((void*)(&v49), (__int64*)(v9 + 88), (__int64)v11),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (LANES128(v49).n128_u64[1] == 0) {
    return LANES128(v12).n128_f32[0];
  }
  v13 = std___1___shared_weak_count_lock(LANES128(v49).n128_u64[1]),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v14 = (__int64*)LANES128(v49).n128_u64[0];
  if (v13 != 0) {
    v15 = LANES128(v49).n128_u64[0];
  }
  else {
    v15 = 0;
  }
  if (LANES128(v49).n128_u64[1] != 0) {
    v12 = std___1___shared_weak_count___release_weak(LANES128(v49).n128_u64[1]);
  }
  if (v15 == 0) {
    goto LABEL_13;
  }
  v16 = *(_QWORD*)(v8 + 8);
  if (*(_DWORD*)v8 != 0 || v16 == 0) {
    goto LABEL_13;
  }
  v55_.v55 = v15;
  v55_.v56 = v13;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_1653f50((_DWORD*)v8, (__int64)&v55_.v55, v12),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v55_.v56 != 0) {
    std___1___shared_weak_count___release_weak(v55_.v56),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (**(_BYTE**)(a1 + 16) != 0) {
    v18 = "TypeEnemy_Icon";
  }
  else {
    v18 = "TypeEnemy";
  }
  LayoutAccessor_1562680_alt1(v14, (__int64)v18, 0x1.0000000000000p+0f),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (**(_BYTE**)(a1 + 16) != 1) {
    v22 = *(_DWORD*)(*(_QWORD*)(v8 + 8) + 80LL);
    v23 = ui_LayoutAccessor_FindPane_alt1(v14, (__int64)"T_NumLv"),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v23 != 0) {
      v24 = __dynamic_cast(v23, GameData_212d670[0], GameData_212d690, 0),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v24 != 0) {
        GameRoutine_156c910(v24, (__int64)"%d", 1, v22),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    if ((*(_BYTE*)(v16 + 546) & 0x20) != 0) {
      v26 = "MID_Sys_Unknown";
    }
    else {
      v25 = *(_QWORD*)(v16 + 96);
      if (v25 != 0) {
        v26 = *(char**)(v25 + 40);
      }
      else {
        v26 = &GameData_1a9f09e;
      }
    }
    LayoutAccessor_1562060((__int64)v14, (__int64)"T_Txt", (__int64)v26),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v27 = ui_LayoutAccessor_FindAlignment(v14, (__int64)"A_Type"),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v27 != 0) {
      Alignment_56b600(v27),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v28 = ui_LayoutAccessor_FindPane_alt1(v14, (__int64)&GameData_1ac6c8b),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v28 != 0) {
      v29 = __dynamic_cast(v28, GameData_212d670[0], GameData_212fc70[0], 0),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v29 != 0) {
        v30 = v29;
        v31 = ui_LayoutAccessor_FindTextBox(v14, (__int64)"T_Txt"),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v31 != 0) {
          v32 = v31;
          v33 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v14, (__int64)"T_Txt"),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v33 != nullptr) {
            GameRoutine_190a0c0((unsigned int*)&v49, (__int64)v58, &v57, v33,
                                v33[27]),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            v34 = v58[0];
            v35 = v58[1];
          }
          else {
            v34 = 0;
            v35 = 0;
          }
          v36 = *(_BYTE*)(v32 + 88);
          *(_DWORD*)(v32 + 80) = v34;
          *(_DWORD*)(v32 + 84) = v35;
          *(_BYTE*)(v32 + 88) = v36 | 0x10;
        }
        v37 = ui_LayoutAccessor_FindTextBox(v14, (__int64)"T_NumLv"),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v37 != 0) {
          v38 = v37;
          v39 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v14, (__int64)"T_NumLv"),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v39 != nullptr) {
            GameRoutine_190a0c0((unsigned int*)&v49, (__int64)v58, &v57, v39,
                                v39[27]),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            v40 = v58[0];
            v41 = v58[1];
          }
          else {
            v40 = 0;
            v41 = 0;
          }
          v42 = *(_BYTE*)(v38 + 88);
          *(_DWORD*)(v38 + 80) = v40;
          *(_DWORD*)(v38 + 84) = v41;
          *(_BYTE*)(v38 + 88) = v42 | 0x10;
        }
        v43 = v14[1];
        if (v43 != 0) {
          v44 = std___1___shared_weak_count_lock(v43),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v44 != 0) {
            v45 = v44;
            if (*v14 != 0) {
              ControlCreator_13633c0(*v14),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              std___1___shared_weak_count___release_weak(v45),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
          }
        }
        v53 = 0;
        v54 = 0;
        v51 = 0;
        v52 = 0;
        v50 = 0;
        LANES128(v49).n128_u64[0] = v30;
        LANES128(v49).n128_u64[1] =
            ui_LayoutAccessor_FindPane_alt1(v14, (__int64)"N_Enemy"),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
        BYTE1(v54) = 1;
        v46 = Pane_58fac0(v30, (__int64)"Margin_Width"),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v46 != nullptr) {
          *(float*)&v52 = (float)*(int*)((char*)v46 + v46[1]);
        }
        GameRoutine_156c240(&v49),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  LABEL_13:
    if (v13 == 0) {
      return LANES128(v12).n128_f32[0];
    }
    goto LABEL_14;
  }
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  v19 = ui_LayoutAccessor_FindPane_alt1(v14, (__int64)&GameData_1ac6c8b),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v19 != 0) {
    v20 = v19;
    v21 = Pane_58fac0(v19, (__int64)"Min_Width"),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v21 != nullptr) {
      PSEUDO_LOW_LANE128(v12, n128_f32, (float)*(int*)((char*)v21 + v21[1]));
      *(_BYTE*)(v20 + 88) |= 0x10u;
      *(_DWORD*)(v20 + 80) = LANES128(v12).n128_u32[0];
    }
  }
  if (v13 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v12 = std___1___shared_weak_count___release_weak(v13);
    }
  LABEL_14:
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v13 + 16LL))(
          v13, *(long double*)&v12),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LANES128(v12).n128_u32[0] =
          LANES128_OF(std___1___shared_weak_count___release_weak(v13))
              .n128_u32[0],
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  return LANES128(v12).n128_f32[0];
}

#pragma GCC visibility pop
