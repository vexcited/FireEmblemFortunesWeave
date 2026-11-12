#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1378190(__int64, __int64);
__int64 GameRoutine_162aea0(_QWORD, _QWORD);
__int64 GameRoutine_8679c0(_QWORD);
__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Se_80e330(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_2170810;
extern __int64 (*game_telop_TelopRelianceLvUp_vtable[])();
extern __int64 GameData_1a86e00;
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_2130240[8];
__int64 game_telop_TelopRelianceLvUp_CreateBind_lambda0_Invoke_alt1(
    __int64 a1,
    __int64*
        a2) __asm__("game_telop_TelopRelianceLvUp_CreateBind_lambda0_Invoke");
__int64 game_telop_TelopRelianceLvUp_CreateBind_lambda1_Invoke(__int64 a1,
                                                               __int64* a2);
__int64 GameReliance_8e18b0(__int64, _QWORD*, _QWORD*);
__int64 ProcList_9bd480(__int64);
__int64 UnitUtil_12122d0(__int64*);
__int64 game_GetHero(unsigned __int8);
__int64 game_ProcList_Call_9bcfa0(__int64, __int64);
extern __int64 (*GameData_2032ae0[])();
extern __int64 (*GameData_2032b60[])();
extern __int64 game_GameModeData_instance_;
__int64 game_telop_TelopRelianceLvUp_CreateBind(__int64 a1, __int64 a2,
                                                __int64 a3, char a4,
                                                unsigned __int8 a5);
__int64 ProcInst_657850_alt1(__int64, __int64, __int64, char,
                             __int64) __asm__("ProcInst_657850");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
void GameHr_8679c0();
void GameRoutine_1378190_alt1(__int64,
                              const char*) __asm__("GameRoutine_1378190");
void Se_80e330_alt1(__int64, const char*) __asm__("Se_80e330");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_telop_TelopRelianceLvUp_CreateBind_lambda0_Invoke(__int64 a1,
                                                            __int64* a2);
_QWORD* game_UnitPool_Find_6ead60(__int64*, _DWORD*);
__attribute__((swiftcall)) void TextBoxEx_188aa00(PSEUDO_X8, __int64, int);
__attribute__((swiftcall)) void game_telop_1376180(PSEUDO_X8, __int64*,
                                                   __int64);
__int64* GameRoutine_8c9820(__int64, __int64, unsigned __int8);
__int64* game_821090(int);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 EmbeddedImage_1889fc0(__int64, __int64);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1840a20(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameReliance_8e17a0(_QWORD*, __int64, __int64);
__int64 GameRoutine_137ec40(__int64 result);
__int64 GameRoutine_1735a70(__int64*, __int64, __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 _ZN4game12Unknown8c9b80Ev(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_anonymous_RuntimeTalk_GetCondition(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameHr_67ed20(_QWORD*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern __int64 (***GameData_212dae8)();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212cf70[7];
extern char** msg_MessageManager_empty_text__ptr;
void* game_97b2f0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void TextBoxEx_188ab20(__int64, const char*);
__int64 TelopRelianceLvUp_Unknown33(__int64 a1);

__int64 game_telop_TelopRelianceLvUp_CreateBind(__int64 a1, __int64 a2,
                                                __int64 a3, char a4,
                                                unsigned __int8 a5)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v22[2];
    __int64 v23;
    char v24;
    unsigned __int8 v25;
    char gap26_[6];
    __int64* v26;
  } v22_;
  __int64 v27[3];

  if (game_GameModeData_instance_ != 0) {
    v22_.v22[0] = 0;
    v22_.v22[1] = a2;
    if (a2 != 0) {
      v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 24) + 1784LL) + 272LL);
    }
    else {
      v9 = 0;
    }
    v22_.v23 = v9;
    v27[0] = 0;
    v27[1] = a3;
    v10 = a1;
    if (a3 != 0) {
      v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a3 + 24) + 1784LL) + 272LL);
    }
    else {
      v11 = 0;
    }
    v12 = *(_QWORD*)(game_GameModeData_instance_ + 128);
    v27[2] = v11;
    if ((GameReliance_8e18b0(v12, v22_.v22, v27) & 1) == 0) {
      return 0;
    }
    v22_.v22[0] = a2;
    v27[0] = a3;
    if ((UnitUtil_12122d0(v22_.v22) & 1) == 0) {
      return 0;
    }
    v13 = UnitUtil_12122d0(v27);
    v14 = 0;
    if (v10 == 0) {
      return v14;
    }
    v15 = v13;
    a1 = v10;
    if ((v15 & 1) == 0) {
      return v14;
    }
  }
  else if (a1 == 0) {
    return 0;
  }
  v16 = ProcList_9bd480(a1);
  if (v16 == 0) {
    return 0;
  }
  v22_.v23 = a3;
  v22_.v24 = a4;
  v22_.v25 = a5;
  v17 = v16;
  v22_.v22[0] = (__int64)GameData_2032ae0;
  v22_.v22[1] = a2;
  v22_.v26 = v22_.v22;
  game_ProcList_Call_9bcfa0(v16, (__int64)v22_.v22);
  if (v22_.v26 == v22_.v22) {
    v18 = 32;
    goto LABEL_21;
  }
  if (v22_.v26 != nullptr) {
    v18 = 40;
  LABEL_21:
    (*(void (**)(__int64))(*v22_.v26 + v18))((__int64)v22_.v26);
  }
  v20 = game_GetHero(9u);
  if (a5 < 2u) {
    return v17;
  }
  v14 = v17;
  if (a2 == v20 || a3 == v20) {
    v22_.v22[0] = (__int64)GameData_2032b60;
    v22_.v26 = v22_.v22;
    game_ProcList_Call_9bcfa0(v17, (__int64)v22_.v22);
    if (v22_.v26 == v22_.v22) {
      v21 = 32;
      goto LABEL_29;
    }
    if (v22_.v26 != nullptr) {
      v21 = 40;
    LABEL_29:
      (*(void (**)(__int64))(*v22_.v26 + v21))((__int64)v22_.v26);
    }
    return v17;
  }
  return v14;
}

__int64 TelopRelianceLvUp_Unknown33(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  char* v18;
  __int64* v19;
  __int64 v20;
  const char** v21;
  const char* v22;
  __int64 v23;
  _QWORD* v24;
  const char* v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 (***v38)();
  _QWORD* v39;
  unsigned int v40;
  unsigned int v41;
  __int64 v42;
  __int64* v43;
  char* v44;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  struct {
    __int64 v54[2];
    __int64* v55;
    __int64* v56;
    __int64* v57;
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
    __int64 v68;
    __int64 v69;
    __int64 v70;
  } v54_;
  struct {
    __int64 v71;
    __int64 v72;
    __int64 v73;
  } v71_;
  struct {
    __int64 v74;
    __int64 v75;
    __int64 v76;
  } v74_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  GameRoutine_1735a70((__int64*)(a1 + 168), (__int64)"T_Title",
                      (__int64)"MID_Sys_LevelUp"),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v2 =
      ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 168), (__int64)"A_Title"),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v2 != 0) {
    Alignment_56b600(v2),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v3 = *(_QWORD*)(a1 + 176);
    if (v3 != 0) {
      v4 = std___1___shared_weak_count_lock(v3),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v4 != 0) {
        v5 = v4;
        v6 = *(_QWORD*)(a1 + 168);
        if (v6 != 0) {
          ControlCreator_13633c0(v6),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          std___1___shared_weak_count___release_weak(v5),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
      }
    }
  }
  v7 = game_GetHero(9u),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v8 = game_GetHero(9u),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v8 == 0) {
    goto LABEL_18;
  }
  for (i = v8; i != 0; i = *(_QWORD*)(i + 624)) {
    v10 = i;
  }
  if (*(_BYTE*)(v10 + 441) != 3) {
    goto LABEL_18;
  }
  v11 = *(_QWORD*)(v8 + 624);
  if (v11 == 0) {
    v11 = v8;
  }
  v54_.v54[0] = v11;
  LODWORD(v74_.v74) = 241;
  v12 = game_UnitPool_Find_6ead60(v54_.v54, &v74_.v74),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v12 != nullptr) {
    v13 = (__int64)(v12 + 263);
    goto LABEL_19;
  }
  v14 = *(_QWORD*)(game_GameModeData_instance_ + 176);
  if (*(_BYTE*)(v14 + 144) != 0) {
    v13 = v14 + 112;
  }
  else {
  LABEL_18:
    v13 = GameData_212cf70[0];
  }
LABEL_19:
  v15 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 168), (__int64)"Face00"),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v15 != 0) {
    v15 = __dynamic_cast(v15, GameData_212d670[0], GameData_212d678[0], 0),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  GameHr_1840a20(v15, 0, *(_QWORD*)(a1 + 824), 6u, 1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v16 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 168), (__int64)"Face01"),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v16 != 0) {
    v16 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d678[0], 0),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  GameHr_1840a20(v16, 0, *(_QWORD*)(a1 + 832), 6u, 1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v17 = (char*)game_97b2f0(v13),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v18 = v17;
  v19 = msg_MessageManager_instance__ptr[0];
  v20 = *msg_MessageManager_instance__ptr[0];
  if (*(_QWORD*)(a1 + 824) != v7) {
    v17 = GameHr_67ed20(*(_QWORD**)(a1 + 824)),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v21 = (const char**)msg_MessageManager_empty_text__ptr;
  if (v17 != nullptr) {
    v22 = v17;
  }
  else {
    v22 = *msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(v20 + 14704, v22),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v23 = *v19;
  v24 = *(_QWORD**)(a1 + 832);
  if (v24 != (_QWORD*)v7) {
    v18 = GameHr_67ed20(v24),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  if (v18 != nullptr) {
    v25 = v18;
  }
  else {
    v25 = *v21;
  }
  GameRoutine_60a020(v23 + 14728, v25),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v26 = *v19;
  v54_.v58 = -1;
  v54_.v59 = -1;
  v54_.v60 = -1;
  v54_.v61 = -1;
  v54_.v62 = -1;
  v54_.v63 = -1;
  v54_.v64 = -1;
  v54_.v65 = -1;
  v54_.v66 = -1;
  v54_.v67 = -1;
  v54_.v68 = -1;
  v54_.v69 = -1;
  v54_.v54[0] = (__int64)(GameData_212e348 + 2);
  v54_.v54[1] = 0xFFFF0001FFFF0000LL;
  v54_.v55 = (__int64*)0xFFFF0004FFFF0002LL;
  v54_.v56 = (__int64*)0xFFFF0006FFFF0005LL;
  v54_.v70 = 8;
  v54_.v57 = (__int64*)0xFFFF0008FFFF0007LL;
  v27 = GameRoutine_a4dbe0(v26, "MID_Sys_Reliance_Notification_LvUp_Units", 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v27 != nullptr) {
    v28 = (__int64)v27;
    v29 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 168), (__int64)"T_Txt"),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v29 != 0) {
      GameRoutine_156c5d0(v29, v28, 0),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
  v30 = game_util_Format("On_Lv%d", *(_DWORD*)(a1 + 844)),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  GameHr_1562680(a1 + 168, v30, 0x1.0000000000000p+0f),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v31 = *(_QWORD*)(a1 + 824);
  v32 = *(_QWORD*)(a1 + 832);
  v54_.v54[0] = v31;
  v54_.v54[1] = v32;
  if (v31 != 0 && v32 != 0) {
    v54_.v55 = GameRoutine_8c9820(v31, v32, 0),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v54_.v56 = GameRoutine_8c9820(v31, v32, 1u),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v54_.v57 = GameRoutine_8c9820(v31, v32, 2u),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v54_.v58 = (__int64)GameRoutine_8c9820(v31, v32, 3u),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v54_.v59 = (__int64)GameRoutine_8c9820(v31, v32, 4u),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v74_.v74 = 0;
    v74_.v75 = v31;
    v34 = *(_QWORD*)(v31 + 24);
    v71_.v71 = 0;
    v71_.v72 = v32;
    v35 = *(_QWORD*)(*(_QWORD*)(v34 + 1784) + 272LL);
    v36 = *(_QWORD*)(*(_QWORD*)(v32 + 24) + 1784LL);
    v74_.v76 = v35;
    v37 = *(_QWORD*)(v36 + 272);
    v71_.v73 = v37;
    v38 = GameData_212dae8;
    if (v35 != 0 && v37 != 0) {
      v39 = *(_QWORD**)(game_GameModeData_instance_ + 128);
      v40 = GameReliance_8e17a0(v39, (__int64)&v74_.v74, (__int64)&v71_.v71),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if ((v40 & 0x80000000) != 0) {
        v38 = GameData_212dae8;
      }
      else {
        v38 = (__int64 (***)(void))(v39[1] + 56LL * v40),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
    }
    if (*((_BYTE*)v38 + 10) != 0) {
      v41 = *((unsigned __int8*)v38 + 11);
      if (v41 <= 4) {
        if (v41 == 4) {
          v42 = 3;
        }
        else {
          v42 = v41 <= 2 ? v41 == 2 : 2LL;
        }
      }
      else {
        v42 = 4;
      }
    }
    else {
      v42 = 0;
    }
    v43 = (&v54_.v55)[v42];
    if (v43 != nullptr && *((_BYTE*)v43 + 64) != 4 &&
        (unsigned __int16)game_anonymous_RuntimeTalk_GetCondition(
            (__int64)(&v54_.v55)[v42]) == 0 &&
        (game_GameModeData_instance_ == 0 ||
         (v46 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)(v43[3] + 40))) == 0 ||
         *(_DWORD*)(v46 + 32) == 0)) {
      v47 = game_821090(1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (game_GameModeData_instance_ != 0) {
        v48 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v47),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v48 != 0 && *(int*)(v48 + 32) >= 1) {
          game_telop_1376180((void*)(&v74_.v74), (__int64*)(a1 + 848),
                             a1 + 168),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          if (v74_.v75 != 0) {
            v49 = std___1___shared_weak_count_lock(v74_.v75),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v50 = v74_.v74;
            if (v74_.v75 != 0) {
              std___1___shared_weak_count___release_weak(v74_.v75),
                  v10 = COERCE_AS(
                      __typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            if (v49 != 0 && v50 != 0) {
              TextBoxEx_188ab20(v50,
                                "MID_Sys_Reliance_Notification_LvUp_Unlock"),
                  v10 = COERCE_AS(
                      __typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              TextBoxEx_188aa00((void*)(&v71_.v71), v50, 0),
                  v10 = COERCE_AS(
                      __typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v74_.v74 = 0;
              v74_.v75 = 0;
              if (v71_.v72 != 0) {
                v74_.v75 = std___1___shared_weak_count_lock(v71_.v72),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (v74_.v75 != 0) {
                  v51 = v71_.v71;
                  v74_.v74 = v71_.v71;
                }
                else {
                  v51 = 0;
                }
                if (v71_.v72 != 0) {
                  std___1___shared_weak_count___release_weak(v71_.v72),
                      v10 = COERCE_AS(
                          __typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                }
                if (v51 != 0) {
                  EmbeddedImage_1889fc0(v51, (__int64)"IconQuestKind_Talk"),
                      v10 = COERCE_AS(
                          __typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                  (*(void (**)(__int64, __int64))(*(_QWORD*)v51 + 40LL))(v51,
                                                                         1),
                      v10 = COERCE_AS(
                          __typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                }
              }
              v52 = GameRoutine_137ec40((__int64)&v74_.v74),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              _ZN4game12Unknown8c9b80Ev(v52),
                  v10 = COERCE_AS(
                      __typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            else if (v49 == 0) {
              goto LABEL_55;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49),
                  v10 = COERCE_AS(
                      __typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              std___1___shared_weak_count___release_weak(v49),
                  v10 = COERCE_AS(
                      __typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
          }
        }
      }
    }
  }
LABEL_55:
  v44 = game_util_Format("L_Txt%02d", 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  return ui_LayoutAccessor_SetPaneVisible(a1 + 168, (__int64)v44, 0);
}

void game_telop_TelopRelianceLvUp_CreateBind_lambda0_Invoke(__int64 a1,
                                                            __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  char* v8;
  char* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  unsigned int v29;
  bool v30;
  __int64 v31;
  int v32;
  int v33;

  v2 = *a2;
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 872, 16, 0);
  memset_alt1(v5 + 144, 0, 0x2D8u);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register_alt1(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_QWORD*)(v5 + 324) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 424) = 0;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v7 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 800) = 0;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 856) = 0;
  *(_QWORD*)(v5 + 848) = 0;
  *(_QWORD*)(v5 + 840) = 0;
  *(_QWORD*)(v5 + 808) = v7;
  *(_QWORD*)v5 = game_telop_TelopRelianceLvUp_vtable;
  ProcInst_657850_alt1(v5, (__int64)&GameData_2170810,
                       (__int64)"TelopRelianceLvUp", 1, v2);
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v8 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v8 = (char*)(v5 + 273);
  }
  strcpy(v8, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 22;
    v9 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 44;
    v9 = (char*)(v5 + 297);
  }
  strcpy(v9, "Common_TlpRelianceLvUP");
  if (*(_DWORD*)(v5 + 320) == 2) {
    v10 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v12 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v11 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v14 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v13 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v15 = v13 == v14;
      v16 = v11 - 1 + v12;
      v17 = v16 >> 7;
      v18 = v16 & 0x7F;
      v19 = 16 * (v13 - v14) - 1;
      v20 = *(_QWORD*)(v14 + 8 * v17);
      if (v15) {
        v19 = 0;
      }
      v21 = v20 + 32 * v18;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v21 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v10[21] = *(_QWORD*)(v21 + 24);
      v22 = *(_QWORD*)(v21 + 16);
      v10[27] = v11 - 1;
      v10[20] = v22;
      if ((unsigned __int64)(v19 - (v11 + v12) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        v23 = *(_QWORD*)(v13 - 8);
        if (v23 != 0) {
          v24 = 128;
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
            v24 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v24, v23);
          v13 = v10[24];
        }
        v10[24] = v13 - 8;
      }
    }
  }
  *(_DWORD*)(v5 + 320) = 2;
  GameHr_8679c0();
  v25 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v26 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v26 & 0x10) == 0) {
      v26 = v26 & 0xFFFFFFE2 | 1;
      if (*(float*)(game_ProcGameSkipView_instance_ + 224) > 0x0.0p+0f) {
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 224) = 0;
      }
    }
    *(_DWORD*)(v25 + 156) = v26 | 0x10;
  }
  Se_80e330_alt1(v5, "SE_SYS_Telop_RelianceLevelup_In");
  GameRoutine_1378190_alt1(v5, "SE_SYS_Telop_RelianceLevelup_Out");
  v27 = *(_QWORD*)(a1 + 8);
  v28 = *(unsigned __int16*)(v27 + 16);
  v29 = *(unsigned __int16*)(*(_QWORD*)(a1 + 16) + 16LL);
  v30 = v28 >= v29;
  if (v28 >= v29) {
    v31 = *(_QWORD*)(a1 + 16);
  }
  else {
    v31 = *(_QWORD*)(a1 + 8);
  }
  if (!v30) {
    v27 = *(_QWORD*)(a1 + 16);
  }
  v32 = *(unsigned __int8*)(a1 + 25);
  *(_QWORD*)(v5 + 832) = v27;
  v33 = *(unsigned __int8*)(a1 + 24);
  *(_QWORD*)(v5 + 824) = v31;
  *(_DWORD*)(v5 + 844) = v32;
  *(_DWORD*)(v5 + 840) = v33;
}

__int64 game_telop_TelopRelianceLvUp_CreateBind_lambda1_Invoke(__int64 a1,
                                                               __int64* a2)
{
  __int64 v2;
  char v4;

  v2 = *a2;
  GameRoutine_887920(&v4, &GameData_1a86e00);
  return GameRoutine_162aea0(v2, &v4);
}

#pragma GCC visibility pop
