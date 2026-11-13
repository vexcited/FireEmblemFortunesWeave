#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1386f80(__int64);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_telop_TelopHonorLvUP_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
extern __int64* game_g_frame_clock_ptr[3];
__int64 TelopHonorLvUP_Unknown36(__int64 a1);
__int64 TelopHonorLvUP_Unknown39(__int64 result);
__int64 TelopHonorLvUP_Unknown43(__int64 a1);
__int64 TelopHonorLvUP_Unknown34(__int64 result);
__int64
TelopHonorLvUP_Destructor_alt1(_QWORD* a1) __asm__("TelopHonorLvUP_Destructor");
__int64 TelopHonorLvUP_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "TelopHonorLvUP_DeletingDestructor");
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a3920(long double);
__int64 GameRoutine_155f760(_QWORD, _QWORD, _QWORD);
__int64 Manager_bc6460(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64* eft_g_effectSystem_ptr[3];
extern char GameData_1a9f09e;
__int64 TelopHonorLvUP_Unknown35(_QWORD* a1);
const char* TelopHonorLvUP_Unknown51(__int64 a1);
_QWORD* GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64* Manager_bc6460_alt1(_QWORD*, __int64, char) __asm__("Manager_bc6460");
unsigned __int128 Manager_bc6460_alt1_pair(_QWORD*, __int64,
                                           char) __asm__("Manager_bc6460");
__int64
ControlCreator_13633c0_alt1(__int64 result) __asm__("ControlCreator_13633c0");
__int64 GameRoutine_14a1520_alt1(__int64*, char) __asm__("GameRoutine_14a1520");
__int64 GameRoutine_155f760_alt1(__int64, __int64,
                                 const char*) __asm__("GameRoutine_155f760");
__int64 game_14a3920(__int64 result);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__attribute__((swiftcall)) void game_9c5fd0(PSEUDO_X8, __int64 result, int);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 Alignment_56b600(__int64 result);
__int64 GameRoutine_156c910(__int64 result, const char*, int, ...);
__int64 GameRoutine_1735a70(__int64*, __int64, _BYTE*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
char* LayoutAccessor_1562060(char* result, __int64, _BYTE*);
char* game_util_Format(const char*, ...);
extern __int64* GameData_212c9a0[147];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
extern __int64 GameData_21f8118;
extern __int64 GameData_21f8120;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern int GameData_21f8110;
extern int GameData_21f8130;
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 TelopHonorLvUP_Unknown33(__int64 a1);
void TelopReliance_1386f80(__int64);
void TelopHonorLvUP_Destructor(_QWORD* a1);
void TelopHonorLvUP_DeletingDestructor(_QWORD* a1);

__int64 TelopHonorLvUP_Unknown33(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float v5;
  float v6;
  _QWORD* v7;
  float v8;
  char* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  int v20;
  char* v21;
  int v22;
  __int64* v23;
  int* v24;
  int v25;
  __int64 v26;
  unsigned __int64* v27;
  unsigned __int64* v28;
  char* v29;
  char* v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  _BYTE* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int i;
  char* v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  float v48;
  float v49;
  struct {
    unsigned __int64* v50;
    unsigned __int64* v51;
    unsigned __int64 v52;
    __int64 v53;
    unsigned __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
  } v50_;

  GameRoutine_1735a70((__int64*)(a1 + 168), (__int64)"T_Title_00",
                      "MID_Sys_LevelUp");
  GameRoutine_1735a70((__int64*)(a1 + 168), (__int64)"T_Title_01",
                      "MID_Sys_LevelUp");
  v2 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 168),
                                  (__int64)"N_HonorOffset");
  if (v2 != 0) {
    v3 = v2;
    v4 =
        ui_LayoutAccessor_FindPane((__int64*)(a1 + 168), (__int64)"T_Title_00");
    if (v4 != 0) {
      v5 = *(float*)(v4 + 48);
      v6 = *(float*)(v4 + 72);
      v7 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 168),
                                                  (__int64)"T_Title_00");
      if (v7 != nullptr) {
        GameRoutine_190a0c0((float*)&v50_.v50, (__int64)&v49, &v48, v7, v7[27]);
        v8 = v49;
      }
      else {
        v8 = 0x0.0p+0f;
      }
      *(_BYTE*)(v3 + 88) |= 0x10u;
      *(float*)(v3 + 48) =
          v5 + (float)((float)(v8 * v6) * -0x1.0000000000000p-1f);
    }
  }
  v9 = "MID_Sys_HonorLv";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v9 = "MID_Sys_HonorLV_Part3";
  }
  v50_.v55 = -1;
  v50_.v56 = -1;
  v50_.v57 = -1;
  v50_.v58 = -1;
  v10 = *msg_MessageManager_instance__ptr[0];
  v50_.v59 = -1;
  v50_.v60 = -1;
  v50_.v61 = -1;
  v50_.v62 = -1;
  v50_.v63 = -1;
  v50_.v64 = -1;
  v50_.v65 = -1;
  v50_.v66 = -1;
  v50_.v50 = (unsigned __int64*)(GameData_212e348 + 2);
  v50_.v51 = (unsigned __int64*)0xFFFF0001FFFF0000LL;
  v50_.v52 = 0xFFFF0004FFFF0002LL;
  v50_.v53 = 0xFFFF0006FFFF0005LL;
  v50_.v67 = 8;
  v50_.v54 = 0xFFFF0008FFFF0007LL;
  v11 = GameRoutine_a4dbe0(v10, v9, 0);
  if (v11 != nullptr) {
    v12 = (__int64)v11;
    v13 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 168),
                                        (__int64)"T_LvTitle");
    if (v13 != 0) {
      GameRoutine_156c5d0(v13, v12, 0);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      ((v14 = *(_DWORD*)(game_GameModeData_instance_ + 60)) == 2 ||
       v14 == 3 && *(int*)(game_GameModeData_instance_ + 64) >= 2)) {
    v15 = (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
  }
  else {
    LODWORD(v15) = 1;
  }
  v16 = *(_DWORD*)(a1 + 832);
  v17 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 168), (__int64)"T_Num");
  if (v17 != 0) {
    v18 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d690, 0);
    if (v18 != 0) {
      GameRoutine_156c910(
          v18, "%d", 1,
          ((v16 - (_DWORD)v15) & (unsigned int)~((v16 - (int)v15) >> 31)) + 1);
    }
  }
  v19 = LayoutAccessor_155fbe0((__int64*)(a1 + 168), "L_Help");
  v20 = *(_DWORD*)(a1 + 828);
  v21 = (char*)v19;
  if (v20 >= (signed __int32)*(_DWORD*)(a1 + 832)) {
    goto LABEL_59;
  }
  v22 = 0;
  v23 = (__int64*)fw_memory_g_heap_manager_ptr;
  do {
    if (game_GameModeData_instance_ == 0 ||
        *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
        (v24 = &GameData_21f8130,
         *(int*)(game_GameModeData_instance_ + 64) <= 1)) {
      v24 = &GameData_21f8110;
    }
    v25 = v20 + 1;
    if (v20 < 0 ||
        v20 >= (int)((*((_QWORD*)v24 + 2) - *((_QWORD*)v24 + 1)) >> 2) ||
        (v26 = *(_QWORD*)(*(_QWORD*)(*GameData_212c9a0[0] + 64) +
                          8LL * (unsigned int)v25 - 8)) == 0) {
      v50_.v54 = 0;
      v50_.v55 = 0;
      v50_.v52 = 0;
      v50_.v53 = 0;
      v50_.v50 = nullptr;
      v50_.v51 = nullptr;
    }
    else {
      game_9c5fd0((void*)(&v50_.v50), v26, v25);
      v27 = v50_.v51;
      if (v50_.v51 != v50_.v50 && v22 <= 4) {
        v28 = v50_.v50 + 8;
        do {
          if (*(v28 - 1) != 0) {
            v29 = game_util_Format("T_Txt_%02d", v22);
            LayoutAccessor_1562060(v21, (__int64)v29, (_BYTE*)*(v28 - 1));
            v30 = game_util_Format("N_Help_%02d", v22);
            ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v21, v30, 1);
            v31 = game_util_Format("Point_%02d", v22);
            v32 = ui_LayoutAccessor_FindPane((__int64*)v21, (__int64)v31);
            if (v32 != 0) {
              v33 = __dynamic_cast(v32, GameData_212d670[0],
                                   GameData_212d678[0], 0);
              if (v33 != 0) {
                v34 = (_BYTE*)*(v28 - 2);
                if (v34 != nullptr && *v34 != 0) {
                  Manager_136a920(ui_Manager_instance_ + 1264, v33, 0, 7u, v34);
                }
              }
            }
            ++v22;
          }
          if (v28 == v27) {
            break;
          }
          v28 += 8;
        } while (v22 < 5);
      }
    }
    if (v50_.v53 != 0) {
      v35 = *v23;
      v50_.v54 = v50_.v53;
      if (*(_QWORD*)(v35 + 200) != 0) {
        v36 = 128;
      }
      else {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v35 + v36, v50_.v53);
    }
    if (v50_.v50 != nullptr) {
      v37 = *v23;
      v50_.v51 = v50_.v50;
      if (*(_QWORD*)(v37 + 200) != 0) {
        v38 = 128;
      }
      else {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v37 + v38, (__int64)v50_.v50);
    }
    v20 = v25;
  } while (v25 < (signed __int32)*(_DWORD*)(a1 + 832));
  if (v22 != 0) {
    if (v22 > 4) {
      goto LABEL_62;
    }
  }
  else {
  LABEL_59:
    LayoutAccessor_155e830((__int64)v21, 0);
    v22 = 0;
  }
  for (i = v22; i != 5; ++i) {
    v40 = game_util_Format("N_Help_%02d", i);
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v21, v40, 0);
  }
LABEL_62:
  if ((*(_BYTE*)(a1 + 824) & 1) != 0) {
    v41 = game_util_Format("Help_%02d", v22 - 1);
    LayoutAccessor_1562cf0((__int64)v21, v41);
  }
  v42 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 168),
                                        (__int64)"A_Contents_Pos");
  if (v42 != 0) {
    Alignment_56b600(v42);
    v43 = *(_QWORD*)(a1 + 176);
    if (v43 != 0) {
      v44 = std___1___shared_weak_count_lock_alt1(v43);
      if (v44 != 0) {
        v45 = v44;
        v46 = *(_QWORD*)(a1 + 168);
        if (v46 != 0) {
          ControlCreator_13633c0_alt1(v46);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
          std___1___shared_weak_count___release_weak_alt1(v45);
        }
      }
    }
  }
  return LayoutAccessor_155e830((__int64)v21, 0);
}

__int64 TelopHonorLvUP_Unknown35(_QWORD* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  unsigned int v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 i;
  __int64 v25;
  unsigned __int32 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _BOOL4 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int32x4_t* v35;
  __int128 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  unsigned int v40;
  __int64 v41;
  struct {
    __int64 v42;
    __int64 v43;
  } v42_;
  struct {
    _QWORD v44[3];
    int v45;
    char gap44_[4];
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
  } v44_;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = a1[22];
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock_alt1(v3),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v4 != 0) {
      v5 = v4;
      v6 = a1[21];
      if (v6 != 0) {
        ControlCreator_13633c0_alt1(v6),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v5),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  v44_.v44[0] = 0;
  v44_.v44[1] = 0;
  v7 = *((_QWORD*)GameData_212c540 + 1);
  v9 = *(_QWORD*)GameData_212c548;
  v8 = *((_QWORD*)GameData_212c548 + 1);
  v44_.v46 = *(_QWORD*)GameData_212c540;
  v44_.v47 = v7;
  v44_.v50 = v44_.v46;
  v44_.v51 = v7;
  v44_.v48 = v9;
  v44_.v49 = v8;
  v44_.v45 = 9;
  v44_.v44[2] = "UI_Deco_ShineB";
  v10 = ({
    unsigned __int128 r_ = Manager_bc6460_alt1_pair(
        *(_QWORD**)eft_g_effectSystem_ptr[0], (__int64)v44_.v44, 0);
    v11 = COERCE_AS(__typeof__(v11), (unsigned long long)(r_ >> 64));
    (__int64*)(unsigned long long)r_;
  });
  result = (__int64)GameHr_14a10d0(&v42_.v42, (__int64)v10, v11,
                                   (__int64)&GameData_1a9f09e),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = v42_.v42;
  v14 = v42_.v43;
  if (v42_.v43 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v42_.v43 + 8), 1u,
                              memory_order_relaxed);
  }
  v15 = a1[109];
  a1[108] = v13;
  a1[109] = v14;
  if (v15 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak_alt1(v15),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v14 = a1[109];
  }
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak_alt1(v14),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v16 = v42_.v43;
  if (v42_.v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42_.v43 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = std___1___shared_weak_count___release_weak_alt1(v16),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v17 = (_DWORD*)a1[108];
  if (*(_QWORD*)v17 != 0 && *(_DWORD*)(*(_QWORD*)v17 + 16LL) == v17[2]) {
    v18 = a1[22];
    if (v18 != 0) {
      v19 = std___1___shared_weak_count_lock_alt1(v18),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v19 != 0) {
        v20 = a1[21];
        if (v20 != 0) {
          v1 = *(_DWORD*)(v20 + 2372);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v20 != 0) {
            goto LABEL_28;
          }
        }
        else {
          v22 = v19;
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v22),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v20 != 0) {
          LABEL_28:
            v21 = *(_QWORD*)v17;
            if (*(_QWORD*)v17 != 0) {
            LABEL_32:
              if (*(_DWORD*)(v21 + 16) == v17[2]) {
                v23 = *(unsigned int*)(v21 + 36);
                if ((_DWORD)v23 != 0) {
                  for (i = 0; i < v23; ++i) {
                    v25 = *(_QWORD*)(v21 + 40 + 8 * i);
                    if (v25 != 0) {
                      *(_DWORD*)(v25 + 408) = v1 + 1;
                      v23 = *(unsigned int*)(v21 + 36);
                    }
                  }
                }
              }
            }
          LABEL_38:
            v26 = 0;
            if (a1[23] == 0) {
              goto LABEL_56;
            }
            v27 = a1[22];
            if (v27 == 0) {
              goto LABEL_56;
            }
            v28 = std___1___shared_weak_count_lock_alt1(v27),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v28 == 0) {
              goto LABEL_49;
            }
            v29 = a1[21];
            if (v29 != 0) {
              LODWORD(v17) = *(unsigned __int8*)(v29 + 24);
              v30 = v29 + 152;
              if ((_DWORD)v17 == 0) {
                v30 = 0;
              }
              v31 = v30 != a1[23];
            }
            else {
              v31 = true;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v32 = v28;
              (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28),
                  v11 = COERCE_AS(
                      __typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              std___1___shared_weak_count___release_weak_alt1(v32),
                  v11 = COERCE_AS(
                      __typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            if (!v31) {
              v26 = 0;
              if (((unsigned __int8)v17 & 1) == 0) {
                goto LABEL_56;
              }
            }
            else {
            LABEL_49:
              v33 = a1[22];
              v26 = 0;
              if (v33 == 0) {
                *(_QWORD*)&v36 = 0;
              LABEL_57:
                v37 = a1[108];
                v38 = *(_QWORD*)v37;
                if (*(_QWORD*)v37 != 0 &&
                    *(_DWORD*)(v38 + 16) == *(_DWORD*)(v37 + 8)) {
                  v39 = *(_DWORD*)(v38 + 36);
                  if (v39 != 0) {
                    v40 = 0;
                    *((_QWORD*)&v36 + 1) = v26;
                    do {
                      if ((int)v39 > (int)v40) {
                        v41 = *(_QWORD*)(v38 + 40 + 8LL * (int)v40);
                        if (v41 != 0) {
                          *(_OWORD*)(v41 + 16) = v36;
                          *(_BYTE*)(v41 + 128) = 1;
                          v39 = *(_DWORD*)(v38 + 36);
                        }
                      }
                      ++v40;
                    } while (v40 < v39);
                  }
                }
                return game_14a3920(v37);
              }
              if (*(_QWORD*)(v33 + 8) == -1) {
              LABEL_56:
                *(_QWORD*)&v36 = 0;
                goto LABEL_57;
              }
            }
            v34 = a1[23];
            if (v34 != 0) {
              v35 = (int32x4_t*)GameRoutine_155f760_alt1(
                  (__int64)(a1 + 21), v34, "Lct_Eff_TlpLvUp"),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              *(_QWORD*)&v36 = 0;
              v26 = 0;
              if (v35 != nullptr) {
                v26 = LANES128(v35[9]).n128_u32[3];
                LODWORD(v36) =
                    LANES128_OF(vdupq_laneq_s32(v35[7], 3)).n128_u32[0];
                DWORD1(v36) = HIDWORD(LANES128(v35[8]).n128_u64[1]);
              }
              goto LABEL_57;
            }
            goto LABEL_56;
          }
        }
      }
    }
    v1 = 0;
    v21 = *(_QWORD*)v17;
    if (*(_QWORD*)v17 == 0) {
      goto LABEL_38;
    }
    goto LABEL_32;
  }
  return result;
}

__int64 TelopHonorLvUP_Unknown36(__int64 a1)
{
  __int64 v2;
  __int64 result;
  int v4;
  __int64 v5;

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 224LL))(a1);
  result = GameRoutine_1562680(a1 + 168, v2, 1.0);
  v4 = *(unsigned __int8*)(a1 + 824);
  *(_DWORD*)(a1 + 420) = 0;
  if (v4 == 1) {
    ui_LayoutAccessor_SetPaneVisible(a1 + 168, "L_Help", 1);
    v5 = GameRoutine_155fbe0(a1 + 168, "L_Help");
    return GameRoutine_1562680(v5, "HelpIn", 1.0);
  }
  return result;
}

__int64 TelopHonorLvUP_Unknown39(__int64 result)
{
  __int64 v1;

  if (*(_BYTE*)(result + 824) == 1) {
    v1 = GameRoutine_155fbe0(result + 168, "L_Help");
    return GameRoutine_1562680(v1, "HelpOut", 1.0);
  }
  return result;
}

__int64 TelopHonorLvUP_Unknown43(__int64 a1)
{
  float v1;
  float v2;
  char v4;
  float v5;
  float v6;
  __int64 v7;

  v1 = *(float*)(a1 + 328);
  v2 = *(float*)(a1 + 420);
  if (v2 < v1) {
    v4 = 0;
    v5 = 60.0 / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v5 <= 0.0) {
      v5 = 1.0;
    }
    if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
      v5 = v5 * 8.0;
    }
    v6 = v2 + v5;
    if (v1 >= v6) {
      v1 = v6;
    }
    *(float*)(a1 + 420) = v1;
  }
  else if ((snd_fnd_WeakHandle_isValid(a1 + 424) & 1) != 0) {
    v4 = 0;
  }
  else {
    v7 = GameRoutine_155fbe0(a1 + 168, "L_Help");
    v4 = GameRoutine_1563280(v7, "HelpIn", 0) ^ 1;
  }
  return v4 & 1;
}

__int64 TelopHonorLvUP_Unknown34(__int64 result)
{
  _DWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _DWORD* v7;
    __int64 v8;
  } v7_;

  v3 = *(_DWORD**)(result + 864);
  if (*(_QWORD*)v3 != 0 && *(_DWORD*)(*(_QWORD*)v3 + 16LL) == v3[2]) {
    v4 = *(_QWORD*)(result + 872);
    v5 = result;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      v7_.v8 = v4;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v7_.v8 = 0;
    }
    v7_.v7 = v3;
    result = GameRoutine_14a1520_alt1((__int64*)&v7_.v7, 1);
    v6 = v7_.v8;
    if (v7_.v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7_.v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak_alt1(v6);
    }
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      result = std___1___shared_weak_count___release_weak_alt1(v4);
    }
    **(_QWORD**)(v5 + 864) = 0;
  }
  return result;
}

const char* TelopHonorLvUP_Unknown51(__int64 a1)
{
  if (*(_BYTE*)(a1 + 824) != 0) {
    return "L_Help/L_NextCursor";
  }
  else {
    return "L_NextCursor";
  }
}

void TelopHonorLvUP_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[109];
  *a1 = game_telop_TelopHonorLvUP_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  v3 = a1[105];
  if (v3 != 0) {
    v4 = a1[106];
    v5 = fw_memory_g_heap_manager_ptr;
    if (v3 == v4) {
      goto LABEL_15;
    }
    v6 = a1[106];
    do {
      v7 = *(_BYTE*)(v6 - 24);
      v6 -= 24;
      if ((v7 & 1) != 0) {
        v8 = *(_QWORD*)(v4 - 8);
        if (v8 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v9, v8);
        }
      }
      v4 = v6;
    } while (v6 != v3);
    v10 = a1[105];
    a1[106] = v3;
    v3 = v10;
    if (v10 != 0) {
    LABEL_15:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v11, v3);
    }
  }
  TelopReliance_1386f80((__int64)a1);
}

void TelopHonorLvUP_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = a1[109];
  *a1 = game_telop_TelopHonorLvUP_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  v3 = a1[105];
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = a1[106];
    if (v3 == v5) {
      goto LABEL_15;
    }
    v6 = a1[106];
    do {
      v7 = *(_BYTE*)(v6 - 24);
      v6 -= 24;
      if ((v7 & 1) != 0) {
        v8 = *(_QWORD*)(v5 - 8);
        if (v8 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v9, v8);
        }
      }
      v5 = v6;
    } while (v6 != v3);
    v10 = a1[105];
    a1[106] = v3;
    v3 = v10;
    if (v10 != 0) {
    LABEL_15:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v11, v3);
    }
  }
  TelopReliance_1386f80((__int64)a1);
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v12 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v12, (__int64)a1);
}

#pragma GCC visibility pop
