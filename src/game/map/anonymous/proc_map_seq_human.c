#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1566440(_QWORD, _QWORD);
__int64 GameRoutine_182ae70(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_739f00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f94888[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqHuman_vtable[])();
extern __int64 GameData_212d0d0[2];
extern __int64 GameData_21cf830;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcMapSeqHuman_Destructor(__int64 a1);
__int64 ProcMapSeqHuman_Unknown9(__int64 a1);
__int64 ProcMapSeqHuman_Unknown12(__int64 result);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _DWORD GameData_1a82ec0[4];
extern __int64 GameData_21ca310;
extern __int64* GameData_212ce90[3];
__int64 ProcMapSeqHuman_739f00_alt2() __asm__("ProcMapSeqHuman_739f00");
_QWORD* Image_72cbc0(_QWORD* result, __int64);
_QWORD* RemoveScope_Destructor(_QWORD* result);
__attribute__((swiftcall)) void Trick_7cb2a0(PSEUDO_X8, __int64 result, int,
                                             int);
__int64* GameRoutine_7595d0();
__int64* Mind_746c60(__int64, char);
__int64* Mind_746f00(__int64);
__int64* game_UnitPool_Get(_BYTE*);
__int64 CharacterBuilder_1084780(void);
__int64 Cursor_734a80(__int64, __int64*);
__int64 GameRoutine_1567590(__int64 result, char);
__int64 GameRoutine_159e7c0(__int64, char);
__int64 GameRoutine_1824f40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_182bc80(__int64);
__int64 GameRoutine_18aff60(__int64 result, __int64);
__int64 GameRoutine_747a00(__int64, unsigned int, unsigned int, __int64, char);
__int64 GameRoutine_747df0(__int64, int, int, unsigned __int8);
__int64 GameRoutine_7484f0(__int64, __int64);
__int64 GameRoutine_777be0(__int64);
__int64 GameRoutine_845840(_QWORD*, __int16, __int16);
__int64 IDeploy_748f80(__int64, __int64, unsigned int, unsigned int, int,
                       unsigned int*);
__int64 IRoute_74f480(__int64 result, int, unsigned int);
__int64 IRoute_750850(__int64);
__int64 LayoutAccessor_1566d90(__int64, char);
__int64 LayoutAccessor_1567000(__int64, char);
__int64 MapUtil_755bb0(int, int);
__int64 Mind_743fc0(__int64, char*);
__int64 Mind_744220(_QWORD);
__int64 ProcMapSeqHuman_739f00_alt1(_QWORD) __asm__("ProcMapSeqHuman_739f00");
__int64 UnitActor_819f40(_QWORD);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 UnitActor_81a540_alt1(_QWORD, _QWORD,
                              _QWORD) __asm__("UnitActor_81a540");
__int64 UnitActor_81ba20(_QWORD);
__int64 VTarget_779120(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_UnitPool_Get_alt1(_QWORD,
                               long double) __asm__("game_UnitPool_Get");
__int64 game_Unit_UpdateHpState(__int64);
__int64 game_map_752480(unsigned int, unsigned int, char);
__int64 game_menu_anonymous_ProcMouseGuide_ProcMouseGuide(__int64, char, int);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool game_map_Cursor_Impl_Tick(_QWORD*, __int64, double, double, double,
                               long double, long double, long double,
                               long double, long double);
bool game_map_Cursor_Impl_Tick_alt1(_QWORD*, __int64) __asm__(
    "game_map_Cursor_Impl_Tick");
extern _BYTE* GameData_212d170;
extern _DWORD* GameData_212d168;
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212ceb8;
extern __int64 (*GameData_1f94210[])();
extern __int64* GameData_212ce88[4];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cfd8[7];
extern __int64* GameData_212cff0[4];
extern __int64* GameData_212cff8[3];
extern __int64* GameData_212d000[2];
extern __int64* GameData_212d560[9];
extern __int64* GameData_212d568[8];
extern __int64 GameData_212d210[7];
extern __int64 GameData_212d218[6];
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_2258178;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gameui_Header_instance_;
extern char game_script_map_event_g_active_unit;
extern int game_map_MapSystemMenu_last_index_;
float Unit_6c7fa0(__int64, __int64);
void Cursor_730b20(__int64, int, int);
void Cursor_730cb0(__int64, char*);
void Cursor_730e40(__int64, __int64);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void snd_Fade_Fade_10c830(__int64, float);
__int64 ProcMapSeqHuman_736ac0(__int64 result, double a2, double a3, double a4,
                               long double a5, long double a6, long double a7,
                               long double a8, long double a9);
void ProcMapSeqHuman_738230(__int64 a1);
_BYTE*
ProcMapSeqHuman_738de0_alt1(long double a1) __asm__("ProcMapSeqHuman_738de0");
__int64 Cursor_730b20_alt1(__int64, int, int) __asm__("Cursor_730b20");
__int64 GameRoutine_1824f40_alt1(__int64 result, int,
                                 char) __asm__("GameRoutine_1824f40");
__int64 Mind_744220_alt1(__int64) __asm__("Mind_744220");
__int64 UnitActor_819f40_alt1(__int64) __asm__("UnitActor_819f40");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
long double UnitActor_81ba20_alt1(__int64) __asm__("UnitActor_81ba20");
void CharacterBuilder_1084780_alt1(__int64) __asm__("CharacterBuilder_1084780");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
_BYTE* ProcMapSeqHuman_738de0();
_QWORD* ProcMapSeqHuman_739f00();

__int64 ProcMapSeqHuman_736ac0(__int64 result, double a2, double a3, double a4,
                               long double a5, long double a6, long double a7,
                               long double a8, long double a9)
{

#pragma clang fp contract(off)
  __int64 v9;
  __int64* v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  char* v20;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  unsigned __int8* v35;
  unsigned int v36;
  __int16 v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  __int64 v44;
  bool v45;
  char v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  unsigned __int8* v50;
  int v51;
  unsigned int v52;
  __int64* v53;
  __int64 v54;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  unsigned int v62;
  __int64 v63;
  bool v64;
  __int64 v65;
  _BYTE* v66;
  __int64 v67;
  unsigned int v68;
  __int64 v69;
  int v71;
  __int64* v72;
  unsigned int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  char v78;
  bool v80;
  __int64 v81;
  unsigned int v82;
  __int64 v83;
  int v84;
  __int64 v85;
  unsigned int v87;
  char v88;
  _QWORD* v89;
  char v90;
  __int64 v91;
  __int64 v92;
  _BYTE* v93;
  char v94[4];
  _QWORD v95[25];

  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = result;
  v10 = GameData_212d568[0];
  v11 = *GameData_212d568[0];
  if (*GameData_212d568[0] != 0) {
    v12 = *(unsigned __int8*)(v11 + 391877);
    *(_BYTE*)(v11 + 391877) = 0;
    if (v12 == 1) {
      result =
          ui_LayoutAccessor_SetPaneVisible(v11 + 40, (__int64)"N_IconHold", 0),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v13 = game_g_game_setting_ptr;
  v14 = *(_QWORD*)game_g_game_setting_ptr;
  v15 = *(unsigned __int8*)(*(_QWORD*)game_g_game_setting_ptr + 807LL);
  if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 952LL) & 1) != 0) {
    if ((v15 & 1) == 0) {
      v15 = 0;
      goto LABEL_23;
    }
  }
  else {
    if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) == 0 ||
        (*(_BYTE*)(v14 + 804) & 1) == 0 &&
            (*(_BYTE*)(v14 + 940) != 1 || (*(_BYTE*)(v14 + 805) & 1) == 0 ||
             (*(_BYTE*)(v14 + 806) & 1) == 0)) {
      if (*(_BYTE*)(v14 + 903) != 1 ||
          (*(_BYTE*)(v14 + 900) & 1) == 0 &&
              (*(_BYTE*)(v14 + 940) != 1 || (*(_BYTE*)(v14 + 901) & 1) == 0 ||
               *(_BYTE*)(v14 + 902) != 1)) {
        goto LABEL_135;
      }
      if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) == 0) {
        goto LABEL_48;
      }
    }
    if ((*(_BYTE*)(v14 + 804) & 1) != 0 ||
        *(_BYTE*)(v14 + 940) == 1 && *(_BYTE*)(v14 + 805) == 1 &&
            (*(_BYTE*)(v14 + 806) & 1) != 0) {
      if ((*(_BYTE*)(v14 + 764) & 1) == 0) {
        goto LABEL_135;
      }
    }
    else {
    LABEL_48:
      if (*(_BYTE*)(v14 + 903) != 1 ||
          (*(_BYTE*)(v14 + 900) & 1) == 0 &&
              (*(_BYTE*)(v14 + 940) != 1 || *(_BYTE*)(v14 + 901) != 1 ||
               *(_BYTE*)(v14 + 902) != 1) ||
          (*(_BYTE*)(v14 + 860) & 1) == 0) {
        goto LABEL_135;
      }
    }
    if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) == 0) {
      goto LABEL_23;
    }
  }
  if ((*(_BYTE*)(v14 + 804) & 1) != 0) {
    goto LABEL_33;
  }
  v15 = 1;
  if (*(_BYTE*)(v14 + 940) == 1 && (*(_BYTE*)(v14 + 805) & 1) != 0 &&
      (*(_BYTE*)(v14 + 806) & 1) != 0) {
    goto LABEL_27;
  }
LABEL_23:
  if (*(_BYTE*)(v14 + 903) == 1 &&
      ((*(_BYTE*)(v14 + 900) & 1) != 0 || *(_BYTE*)(v14 + 940) == 1 &&
                                              (*(_BYTE*)(v14 + 901) & 1) != 0 &&
                                              *(_BYTE*)(v14 + 902) == 1)) {
    if (v15 == 0) {
      goto LABEL_31;
    }
    if ((*(_BYTE*)(v14 + 804) & 1) != 0) {
    LABEL_33:
      if ((*(_BYTE*)(v14 + 804) & 1) != 0 ||
          *(_BYTE*)(v14 + 940) == 1 && *(_BYTE*)(v14 + 805) == 1 &&
              (*(_BYTE*)(v14 + 806) & 1) != 0) {
        v16 = 764;
      LABEL_41:
        if ((*(_BYTE*)(v14 + v16) & 1) == 0) {
          goto LABEL_87;
        }
        goto LABEL_54;
      }
    LABEL_38:
      if (*(_BYTE*)(v14 + 903) != 1 ||
          (*(_BYTE*)(v14 + 900) & 1) == 0 &&
              (*(_BYTE*)(v14 + 940) != 1 || *(_BYTE*)(v14 + 901) != 1 ||
               *(_BYTE*)(v14 + 902) != 1)) {
        goto LABEL_87;
      }
      v16 = 860;
      goto LABEL_41;
    }
  LABEL_27:
    if (*(_BYTE*)(v14 + 940) != 1 || (*(_BYTE*)(v14 + 805) & 1) == 0 ||
        (*(_BYTE*)(v14 + 806) & 1) == 0) {
      v15 = *(unsigned __int8*)(v14 + 903);
      if (v15 != 1) {
        goto LABEL_87;
      }
    LABEL_31:
      if ((*(_BYTE*)(v14 + 900) & 1) == 0 &&
          (*(_BYTE*)(v14 + 940) != 1 || (*(_BYTE*)(v14 + 901) & 1) == 0 ||
           *(_BYTE*)(v14 + 902) != 1)) {
        goto LABEL_87;
      }
      if (v15 == 0) {
        goto LABEL_38;
      }
      goto LABEL_33;
    }
    goto LABEL_33;
  }
LABEL_54:
  LODWORD(v17) = *(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 8LL) +
                 32 * *(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 12LL);
  if ((unsigned int)v17 >= 0x400) {
    v17 = 0;
  }
  else {
    v17 = (unsigned int)v17;
  }
  v18 = *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v17 + 8);
  if (v18 != 0) {
    v19 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v18;
    v20 = (char*)(v19 - 2224);
    if (v18 <= 0xFA && v19 != 2224 && *(_QWORD*)(v19 - 1832) != 0) {
      v22 = *(_DWORD*)(v19 - 1808);
      if ((v22 & 0x1C00) == 0) {
        v23 = v19 - 1784;
        v24 = *(_QWORD*)(v19 - 1784);
        v25 = v24 != 0 ? *(unsigned __int8*)(v24 + 16) : 9;
        if ((v22 & 1) == 0 &&
            v25 == *(unsigned __int8*)(*GameData_212ce90[0] + 24)) {
          v26 = game_g_shared_system_skills_ptr;
          LODWORD(v95[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x120LL) +
                                       game_g_shared_system_skills_ptr) &
                            0xFFF;
          result = game_HasSkill((_QWORD*)(v19 - 480), (unsigned int*)v95),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if ((result & 1) == 0) {
            LODWORD(v95[0]) =
                *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v26) & 0xFFF;
            result = game_HasSkill((_QWORD*)(v19 - 480), (unsigned int*)v95),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((result & 1) == 0) {
              v80 = *(_WORD*)(v19 - 1732) == 0 && *(_BYTE*)(v19 - 1728) == 0;
              if (!v80 ||
                  (LODWORD(v95[0]) =
                       *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v26) & 0xFFF,
                   ((result = game_HasSkill((_QWORD*)(v19 - 480),
                                            (unsigned int*)v95)) &
                    1) == 0)) {
                v81 = *GameData_212d000[0];
                if (*GameData_212d000[0] != 0) {
                  if (*(_QWORD*)v23 != 0) {
                    v82 = *(unsigned __int8*)(*(_QWORD*)v23 + 16LL);
                  }
                  else {
                    v82 = 9;
                  }
                  v87 = *(unsigned __int16*)(*(_QWORD*)(v19 - 1832) + 16LL);
                  v88 = *(_BYTE*)(v19 - 136);
                  v89 = *(_QWORD**)(v81 + 688);
                  v90 = game_script_map_event_g_active_unit;
                  game_script_map_event_g_active_unit = v88;
                  if (*(_QWORD**)(v81 + 696) == v89) {
                    goto LABEL_345;
                  }
                  while (
                      ((*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
                           *(_QWORD*)*v89 + 56LL))(*v89, v87, v82, 0, 0) &
                       1) == 0) {
                    if (++v89 == *(_QWORD**)(v81 + 696)) {
                      goto LABEL_345;
                    }
                  }
                  if (*v89 == 0) {
                  LABEL_345:
                    game_script_map_event_g_active_unit = v90;
                  }
                  else {
                    v91 = __dynamic_cast(*v89, GameData_212d210[0],
                                         GameData_212d218[0], 0),
                    v54 = COERCE_AS(
                        __typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    game_script_map_event_g_active_unit = v90;
                    if (v91 != 0) {
                    LABEL_347:
                      UnitActor_81a540((__int64)v20, 0x783C0ED4u,
                                       (__int64)GameData_212ceb8),
                          v54 = COERCE_AS(
                              __typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      Mind_743fc0(*GameData_212cfd0[0], v20),
                          v54 = COERCE_AS(
                              __typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      snd_Fade_Fade_10c830((__int64)v95, 0x0.0p+0f),
                          v54 = COERCE_AS(
                              __typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      snd_play_ff2d0((__int64)"SE_SYS_Decide_Unit",
                                     (__int64)"SE_SYS_Decide_Unit",
                                     (__int64)v95, 0, 0x10001u, 0, 0x0.0p+0f,
                                     0x1.0000000000000p+0f),
                          v54 = COERCE_AS(
                              __typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      result = snd_Fade_Destroy_Fade(v95),
                      v54 = COERCE_AS(
                          __typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      v92 = GameData_2258178;
                      if (GameData_2258178 != 0) {
                        v93 = *(_BYTE**)v13;
                        if (*(_BYTE*)(*(_QWORD*)v13 + 807LL) == 1 &&
                            ((v93[804] & 1) != 0 ||
                             v93[940] == 1 && v93[805] == 1 && v93[806] == 1)) {
                          *(_DWORD*)(GameData_2258178 + 456) |= 1u;
                        }
                        if (v93[903] == 1 &&
                            ((v93[900] & 1) != 0 ||
                             v93[940] == 1 && v93[901] == 1 && v93[902] == 1)) {
                          *(_DWORD*)(v92 + 516) |= 1u;
                        }
                      }
                      v34 = 4;
                      goto LABEL_120;
                    }
                  }
                }
                game_Unit_UpdateHpState((__int64)v20),
                    v54 = COERCE_AS(
                        __typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                goto LABEL_347;
              }
            }
          }
        }
      }
    }
  }
LABEL_87:
  v14 = *(_QWORD*)v13;
  v15 = *(unsigned __int8*)(*(_QWORD*)v13 + 807LL);
  if (v15 == 1 &&
      ((*(_BYTE*)(v14 + 804) & 1) != 0 ||
       *(_BYTE*)(v14 + 940) == 1 && (*(_BYTE*)(v14 + 805) & 1) != 0 &&
           (*(_BYTE*)(v14 + 806) & 1) != 0)) {
  LABEL_95:
    if ((*(_BYTE*)(v14 + 804) & 1) != 0 ||
        *(_BYTE*)(v14 + 940) == 1 && *(_BYTE*)(v14 + 805) == 1 &&
            (*(_BYTE*)(v14 + 806) & 1) != 0) {
      if ((*(_BYTE*)(v14 + 764) & 1) != 0) {
        goto LABEL_135;
      }
      goto LABEL_112;
    }
  LABEL_101:
    if (*(_BYTE*)(v14 + 903) == 1 &&
        ((*(_BYTE*)(v14 + 900) & 1) != 0 || *(_BYTE*)(v14 + 940) == 1 &&
                                                *(_BYTE*)(v14 + 901) == 1 &&
                                                *(_BYTE*)(v14 + 902) == 1) &&
        (*(_BYTE*)(v14 + 860) & 1) != 0) {
      goto LABEL_135;
    }
    goto LABEL_112;
  }
  if (*(_BYTE*)(v14 + 903) == 1 &&
      ((*(_BYTE*)(v14 + 900) & 1) != 0 || *(_BYTE*)(v14 + 940) == 1 &&
                                              (*(_BYTE*)(v14 + 901) & 1) != 0 &&
                                              *(_BYTE*)(v14 + 902) == 1)) {
    if (*(_BYTE*)(*(_QWORD*)v13 + 807LL) == 0) {
      goto LABEL_101;
    }
    goto LABEL_95;
  }
LABEL_112:
  v27 = GameData_212cfc0[0];
  result =
      MapUtil_755bb0(*(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 8LL),
                     *(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 12LL)),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((result & 1) != 0) {
    return result;
  }
  v28 = GameData_212cfb8[0];
  v29 = *(_DWORD*)(*(_QWORD*)(*v27 + 48) + 8LL) +
        32 * *(_DWORD*)(*(_QWORD*)(*v27 + 48) + 12LL);
  if (v29 >= 0x400) {
    v29 = 0;
  }
  v30 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v31 = *(__int16*)(v30 + 2LL * v29 + 10344);
  if ((v31 & 0x8000000000000000LL) == 0) {
    v32 = *(_QWORD*)(v30 + 8);
    if (v32 != 0) {
      v33 = v32 + 144LL * (int)v31;
      if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v33 + 40LL))(v33) == 13) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 776LL))(v33),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((result & 1) != 0) {
          v34 = 7;
        LABEL_120:
          *(_DWORD*)(v9 + 152) = v34;
          v35 = *(unsigned __int8**)(v9 + 16);
          if (v35 != nullptr) {
            v36 = *v35;
            if (v36 <= 0x10 && ((1 << v36) & 0x1CE00) != 0) {
              *(_WORD*)(v9 + 136) |= 0x80u;
            }
          }
          v37 = *(_WORD*)(v9 + 136) | 8;
          goto LABEL_235;
        }
      }
    }
  }
  result = X8CALL_X0(__int64,
                     Trick_7cb2a0((void*)((__int64)v94), *(_QWORD*)(*v28 + 16),
                                  *(_DWORD*)(*(_QWORD*)(*v27 + 48) + 8LL),
                                  *(_DWORD*)(*(_QWORD*)(*v27 + 48) + 12LL))),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v94[0] >= 1 && v94[1] >= 1) {
    Cursor_730cb0(*v27, v94),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    snd_Fade_Fade_10c830((__int64)v95, 0x0.0p+0f),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    snd_play_ff2d0((__int64)"SE_SYS_WarpPoint_Check",
                   (__int64)"SE_SYS_WarpPoint_Check", (__int64)v95, 0, 0x10001u,
                   0, 0x0.0p+0f, 0x1.0000000000000p+0f),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return snd_Fade_Destroy_Fade(v95);
  }
  v14 = *(_QWORD*)v13;
  v15 = *(unsigned __int8*)(*(_QWORD*)v13 + 807LL);
  if (v15 == 1 &&
      ((*(_BYTE*)(v14 + 804) & 1) != 0 ||
       *(_BYTE*)(v14 + 940) == 1 && (*(_BYTE*)(v14 + 805) & 1) != 0 &&
           (*(_BYTE*)(v14 + 806) & 1) != 0)) {
    goto LABEL_136;
  }
  if (*(_BYTE*)(v14 + 903) != 1 ||
      (*(_BYTE*)(v14 + 900) & 1) == 0 &&
          (*(_BYTE*)(v14 + 940) != 1 || (*(_BYTE*)(v14 + 901) & 1) == 0 ||
           (*(_BYTE*)(v14 + 902) & 1) == 0)) {
    goto LABEL_230;
  }
LABEL_135:
  if (v15 == 0) {
    v38 = 0;
  LABEL_139:
    if (*(_BYTE*)(v14 + 903) != 1) {
      goto LABEL_145;
    }
    if ((*(_BYTE*)(v14 + 900) & 1) != 0) {
      goto LABEL_151;
    }
    if (*(_BYTE*)(v14 + 940) == 1 && (*(_BYTE*)(v14 + 901) & 1) != 0) {
      v39 = *(_DWORD*)(v14 + 952);
      if (*(_BYTE*)(v14 + 902) == 1) {
        goto LABEL_152;
      }
    }
    else {
    LABEL_145:
      v39 = *(_DWORD*)(v14 + 952);
    }
    if ((v39 & 0x81) != 0) {
      goto LABEL_230;
    }
    goto LABEL_180;
  }
LABEL_136:
  if ((*(_BYTE*)(v14 + 804) & 1) == 0) {
    v38 = 1;
    if (*(_BYTE*)(v14 + 940) == 1 && (*(_BYTE*)(v14 + 805) & 1) != 0 &&
        (*(_BYTE*)(v14 + 806) & 1) != 0) {
      goto LABEL_151;
    }
    goto LABEL_139;
  }
  v38 = 1;
LABEL_151:
  v39 = *(_DWORD*)(v14 + 952);
LABEL_152:
  if ((v39 & 0x80) != 0) {
    if (GameData_2258178 == 0) {
      goto LABEL_230;
    }
    if (v38 != 0 && ((*(_BYTE*)(v14 + 804) & 1) != 0 ||
                     *(_BYTE*)(v14 + 940) == 1 && *(_BYTE*)(v14 + 805) == 1 &&
                         (*(_BYTE*)(v14 + 806) & 1) != 0)) {
      v41 = 440;
    }
    else {
      if (*(_BYTE*)(v14 + 903) != 1 ||
          (*(_BYTE*)(v14 + 900) & 1) == 0 &&
              (*(_BYTE*)(v14 + 940) != 1 || *(_BYTE*)(v14 + 901) != 1 ||
               *(_BYTE*)(v14 + 902) != 1)) {
        goto LABEL_230;
      }
      v41 = 500;
    }
    if ((*(_BYTE*)(GameData_2258178 + v41) & 2) == 0) {
    LABEL_230:
      game_map_MapSystemMenu_last_index_ = -1;
      v51 = 11;
      goto LABEL_231;
    }
  }
  else if (GameData_2258178 == 0) {
    goto LABEL_180;
  }
  if (v38 != 0 && ((*(_BYTE*)(v14 + 804) & 1) != 0 ||
                   *(_BYTE*)(v14 + 940) == 1 && *(_BYTE*)(v14 + 805) == 1 &&
                       (*(_BYTE*)(v14 + 806) & 1) != 0)) {
    v40 = 448;
  }
  else {
    if (*(_BYTE*)(v14 + 903) != 1 ||
        (*(_BYTE*)(v14 + 900) & 1) == 0 &&
            (*(_BYTE*)(v14 + 940) != 1 || *(_BYTE*)(v14 + 901) != 1 ||
             *(_BYTE*)(v14 + 902) != 1)) {
      goto LABEL_180;
    }
    v40 = 508;
  }
  if ((*(_BYTE*)(GameData_2258178 + v40) & 2) != 0) {
    goto LABEL_230;
  }
LABEL_180:
  if ((v39 & 4) != 0) {
    LODWORD(v42) =
        *(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 8LL) +
        32 * *(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 12LL);
    v42 = (unsigned int)v42 >= 0x400 ? 0LL : (unsigned int)v42;
    v43 = *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v42 + 8);
    if (v43 != 0) {
      v44 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v43;
      v45 = v43 > 0xFA || v44 == 2224;
      if (!v45 && *(_QWORD*)(v44 - 1832) != 0 &&
          (*(_BYTE*)(v44 - 1807) & 0x1C) == 0) {
        GameRoutine_182bc80(v9),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (game_gameui_Header_instance_ != 0) {
          LayoutAccessor_1566d90(game_gameui_Header_instance_, 0),
              v54 = COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        result = game_gameui_Footer_instance_;
        if (game_gameui_Footer_instance_ != 0) {
          result = LayoutAccessor_1567000(game_gameui_Footer_instance_, 0),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v51 = 2;
        goto LABEL_231;
      }
    }
  }
  if ((v39 & 0x40) != 0) {
    if ((*(_QWORD*)GameData_212d8b0[0] == 0 ||
         (*(_BYTE*)(*(_QWORD*)GameData_212d8b0[0] + 256LL) & 1) == 0) &&
        (*GameData_212cff8[0] == 0 ||
         *(_QWORD*)(*GameData_212cff8[0] + 96) ==
             *(_QWORD*)(*GameData_212cff8[0] + 88))) {
      v95[0] = 0;
      v95[1] = 0;
      result = GameRoutine_18aff60(v9, (__int64)v95),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((result & 1) != 0) {
        *(_BYTE*)(v9 + 232) = 1;
        if (game_gameui_Header_instance_ != 0) {
          LayoutAccessor_1566d90(game_gameui_Header_instance_, 0),
              v54 = COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        result = game_gameui_Footer_instance_;
        if (game_gameui_Footer_instance_ != 0) {
          return LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
        }
        return result;
      }
      v14 = *(_QWORD*)v13;
    }
    v39 = *(_DWORD*)(v14 + 952);
  }
  if ((v39 & 0x3000) != 0) {
    v46 = (v39 & 0x1000) != 0;
    v47 = GameData_212cfc0[0];
    result = game_map_752480(
        *(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 8LL),
        *(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 12LL), v46),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (result != 0) {
      Cursor_730e40(*(_QWORD*)(*v47 + 48), result),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      snd_Fade_Fade_10c830((__int64)v95, 0x0.0p+0f),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      snd_play_ff2d0((__int64)"SE_SYS_Send_Unit", (__int64)"SE_SYS_Send_Unit",
                     (__int64)v95, 0, 0x10001u, 0, 0x0.0p+0f,
                     0x1.0000000000000p+0f),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = snd_Fade_Destroy_Fade(v95),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v48 = *(_QWORD*)GameData_212d0d0[0];
      if (*(_QWORD*)GameData_212d0d0[0] != 0 && *(int*)(v48 + 16) <= 0 &&
          *(_BYTE*)(v48 + 152) == 0) {
        return GameRoutine_159e7c0(v48 + 48, v46);
      }
      return result;
    }
    v14 = *(_QWORD*)v13;
    v39 = *(_DWORD*)(*(_QWORD*)v13 + 952LL);
  }
  if ((v39 & 0x800) != 0) {
    snd_Fade_Fade_10c830((__int64)v95, 0x0.0p+0f),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    snd_play_ff2d0((__int64)"SE_SYS_ConfigurationMenu_Open",
                   (__int64)"SE_SYS_ConfigurationMenu_Open", (__int64)v95, 0,
                   0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = snd_Fade_Destroy_Fade(v95),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(v9 + 152) = 0x1900000002LL;
    v50 = *(unsigned __int8**)(v9 + 16);
    if (v50 == nullptr) {
      return result;
    }
  LABEL_232:
    v52 = *v50;
    if (v52 > 0x10 || ((1 << v52) & 0x1CE00) == 0) {
      return result;
    }
    v37 = *(_WORD*)(v9 + 136) | 0x80;
  LABEL_235:
    *(_WORD*)(v9 + 136) = v37;
    return result;
  }
  if (*(_BYTE*)(v14 + 807) == 1 &&
      ((*(_BYTE*)(v14 + 804) & 1) != 0 ||
       *(_BYTE*)(v14 + 940) == 1 && (*(_BYTE*)(v14 + 805) & 1) != 0 &&
           (*(_BYTE*)(v14 + 806) & 1) != 0)) {
  LABEL_219:
    if ((*(_BYTE*)(v14 + 804) & 1) != 0 ||
        *(_BYTE*)(v14 + 940) == 1 && *(_BYTE*)(v14 + 805) == 1 &&
            (*(_BYTE*)(v14 + 806) & 1) != 0) {
      v49 = 764;
    LABEL_243:
      if ((*(_BYTE*)(v14 + v49) & 0x10) == 0) {
        goto LABEL_244;
      }
      result = game_menu_anonymous_ProcMouseGuide_ProcMouseGuide(v9, 0, 3),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v51 = 2;
    LABEL_231:
      *(_DWORD*)(v9 + 152) = v51;
      v50 = *(unsigned __int8**)(v9 + 16);
      if (v50 == nullptr) {
        return result;
      }
      goto LABEL_232;
    }
  LABEL_240:
    if (*(_BYTE*)(v14 + 903) != 1 ||
        (*(_BYTE*)(v14 + 900) & 1) == 0 &&
            (*(_BYTE*)(v14 + 940) != 1 || *(_BYTE*)(v14 + 901) != 1 ||
             *(_BYTE*)(v14 + 902) != 1)) {
      goto LABEL_244;
    }
    v49 = 860;
    goto LABEL_243;
  }
  if (*(_BYTE*)(v14 + 903) == 1 &&
      ((*(_BYTE*)(v14 + 900) & 1) != 0 || *(_BYTE*)(v14 + 940) == 1 &&
                                              (*(_BYTE*)(v14 + 901) & 1) != 0 &&
                                              *(_BYTE*)(v14 + 902) == 1)) {
    if (*(_BYTE*)(v14 + 807) == 0) {
      goto LABEL_240;
    }
    goto LABEL_219;
  }
LABEL_244:
  if (*GameData_212d168 == 1) {
    LODWORD(a2) = *(_DWORD*)(*(_QWORD*)(*GameData_212cfc8[0] + 432) + 404LL);
    LODWORD(a3) = 1114636288;
    if (*(float*)&a2 >= 0x1.e000000000000p+5f && *GameData_212ce90[0] != 0 &&
        (*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) == 0) {
      v51 = 9;
      goto LABEL_231;
    }
  }
  v53 = GameData_212cfc0[0];
  if (game_map_Cursor_Impl_Tick(*(_QWORD**)(*GameData_212cfc0[0] + 48), 0, a2,
                                a3, a4, a5, a6, a7, a8, a9)) {
    snd_Fade_Fade_10c830((__int64)v95, 0x0.0p+0f),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    snd_play_ff2d0((__int64)"SE_SYS_Cursor_M", (__int64)"SE_SYS_Cursor_M",
                   (__int64)v95, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    snd_Fade_Destroy_Fade(v95),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v59 = GameData_212ce98[0];
  LODWORD(v60) = *(_DWORD*)(*(_QWORD*)(*v53 + 48) + 8LL) +
                 32 * *(_DWORD*)(*(_QWORD*)(*v53 + 48) + 12LL);
  if ((unsigned int)v60 >= 0x400) {
    v60 = 0;
  }
  else {
    v60 = (unsigned int)v60;
  }
  v61 = *(_QWORD*)(*GameData_212ce98[0] + 96) + v60;
  v62 = *(unsigned __int8*)(v61 + 8);
  if (*(_BYTE*)(v61 + 8) != 0 && ((v63 = *(_QWORD*)(GameData_21ca310 + 56) +
                                         2224LL * *(unsigned __int8*)(v61 + 8),
                                   v54 = v63 - 2224, v62 <= 0xFA)
                                      ? (v64 = v63 == 2224)
                                      : (v64 = true),
                                  !v64 && *(_QWORD*)(v63 - 1832) != 0)) {
    v65 = *GameData_212ce88[0];
    LODWORD(v95[0]) = 170987522;
    IDeploy_748f80(v65, v54, *(char*)(v63 - 1640), *(char*)(v63 - 1639), -1,
                   (unsigned int*)v95),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    GameRoutine_7484f0(*GameData_212ce88[0], v54),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v66 = *(_BYTE**)v13;
  if (*(_BYTE*)(*(_QWORD*)v13 + 807LL) == 1 &&
      ((v66[804] & 1) != 0 ||
       v66[940] == 1 && (v66[805] & 1) != 0 && (v66[806] & 1) != 0)) {
    goto LABEL_269;
  }
  if (v66[903] != 1) {
  LABEL_305:
    v78 = 0;
    goto LABEL_306;
  }
  if ((v66[900] & 1) != 0) {
  LABEL_269:
    LODWORD(v67) = *(_DWORD*)(*(_QWORD*)(*v53 + 48) + 8LL) +
                   32 * *(_DWORD*)(*(_QWORD*)(*v53 + 48) + 12LL);
    if ((unsigned int)v67 >= 0x400) {
      v67 = 0;
    }
    else {
      v67 = (unsigned int)v67;
    }
    v68 = *(unsigned __int8*)(*(_QWORD*)(*v59 + 96) + v67 + 8);
    if (v68 != 0) {
      v69 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v68;
      if (v68 <= 0xFA && v69 != 2224 && *(_QWORD*)(v69 - 1832) != 0) {
        v71 = *(_DWORD*)(v69 - 1808);
        if ((v71 & 0x1C00) == 0) {
          v83 = *(_QWORD*)(v69 - 1784);
          v84 = v83 != 0 ? *(unsigned __int8*)(v83 + 16) : 9;
          if ((v71 & 1) == 0 &&
              v84 == *(unsigned __int8*)(*GameData_212ce90[0] + 24)) {
            v85 = game_g_shared_system_skills_ptr;
            LODWORD(v95[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x120LL) +
                                         game_g_shared_system_skills_ptr) &
                              0xFFF;
            if ((game_HasSkill((_QWORD*)(v69 - 480), (unsigned int*)v95) & 1) ==
                0) {
              LODWORD(v95[0]) =
                  *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v85) & 0xFFF;
              if ((game_HasSkill((_QWORD*)(v69 - 480), (unsigned int*)v95) &
                   1) == 0) {
                if (*(_WORD*)(v69 - 1732) != 0 || *(_BYTE*)(v69 - 1728) != 0) {
                  goto LABEL_285;
                }
                LODWORD(v95[0]) =
                    *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v85) & 0xFFF;
                if ((game_HasSkill((_QWORD*)(v69 - 480), (unsigned int*)v95) &
                     1) == 0) {
                  goto LABEL_285;
                }
              }
            }
          }
        }
      }
    }
    v72 = GameData_212cfb8[0];
    v73 = *(_DWORD*)(*(_QWORD*)(*v53 + 48) + 8LL) +
          32 * *(_DWORD*)(*(_QWORD*)(*v53 + 48) + 12LL);
    if (v73 >= 0x400) {
      v73 = 0;
    }
    v74 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
    v75 = *(__int16*)(v74 + 2LL * v73 + 10344);
    if (v75 < 0 || (v76 = *(_QWORD*)(v74 + 8)) == 0 ||
        (v77 = v76 + 144LL * (int)v75,
         (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v77 + 40LL))(v77) != 13) ||
        ((*(__int64 (**)(__int64))(*(_QWORD*)v77 + 776LL))(v77) & 1) == 0) {
      Trick_7cb2a0((void*)((__int64)v95), *(_QWORD*)(*v72 + 16),
                   *(_DWORD*)(*(_QWORD*)(*v53 + 48) + 8LL),
                   *(_DWORD*)(*(_QWORD*)(*v53 + 48) + 12LL)),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v78 = LOBYTE(v95[0]) != (unsigned __int8)*GameData_212d170 ||
            BYTE1(v95[0]) != *(unsigned __int8*)(GameData_212d170 + 1LL);
    }
    else {
    LABEL_285:
      v78 = 1;
    }
    goto LABEL_306;
  }
  v78 = 0;
  if (v66[940] == 1 && (v66[901] & 1) != 0) {
    if (v66[902] == 1) {
      goto LABEL_269;
    }
    goto LABEL_305;
  }
LABEL_306:
  result = GameRoutine_1567590((__int64)"ShowDanger", v78),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*GameData_212ce90[0] != 0 &&
      (*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) == 0 && *v10 != 0) {
    *(_BYTE*)(*v10 + 391877) = 1;
  }
  return result;
}

void ProcMapSeqHuman_738230(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  int v5;
  int v6;
  char v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64* v16;
  int v17;
  __int64* v18;
  __int64* v19;
  int v20;
  __int64* v21;
  __int64* v22;
  __int64* v23;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  unsigned int v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  _BOOL4 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  unsigned __int8* v44;
  unsigned int v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  int v52;
  int v53;
  __int64* v54;
  __int64 v55;
  int v56;
  __int64 v59;
  int v60;
  __int64 v61;
  int v62;
  int v63;
  __int64* v64;
  __int16 v65;
  int v66;
  __int64 v67;
  char v68;
  unsigned __int8* v71;
  unsigned int v72;
  _QWORD v73[2];
  _QWORD v74[25];

  v2 = GameData_2258178;
  v3 = game_g_game_setting_ptr;
  v4 = *(_BYTE**)game_g_game_setting_ptr;
  if (GameData_2258178 != 0) {
    if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 0 &&
        ((v4[804] & 1) != 0 ||
         v4[940] == 1 && v4[805] == 1 && (v4[806] & 1) != 0)) {
      v5 = *(_BYTE*)(GameData_2258178 + 452) & 1;
    }
    else if (v4[903] == 1 &&
             ((v4[900] & 1) != 0 ||
              v4[940] == 1 && v4[901] == 1 && (v4[902] & 1) != 0)) {
      v5 = *(_BYTE*)(GameData_2258178 + 512) & 1;
      if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) & 1) == 0) {
        v6 = 0;
        goto LABEL_22;
      }
    }
    else {
      v5 = 0;
      v6 = 0;
      if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) == 0) {
        goto LABEL_22;
      }
    }
  }
  else {
    v5 = 0;
    v6 = 0;
    if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) & 1) == 0) {
      goto LABEL_22;
    }
  }
  if ((v4[804] & 1) != 0) {
    goto LABEL_33;
  }
  v6 = 1;
  if (v4[940] == 1 && (v4[805] & 1) != 0 && (v4[806] & 1) != 0) {
    goto LABEL_26;
  }
LABEL_22:
  if (v4[903] != 1 ||
      (v4[900] & 1) == 0 &&
          (v4[940] != 1 || (v4[901] & 1) == 0 || v4[902] != 1)) {
    if ((v4[952] & 1) == 0) {
      goto LABEL_106;
    }
    goto LABEL_100;
  }
  if (v6 == 0) {
    goto LABEL_31;
  }
  if ((v4[804] & 1) != 0) {
  LABEL_33:
    if ((v4[804] & 1) == 0 &&
        (v4[940] != 1 || v4[805] != 1 || (v4[806] & 1) == 0)) {
      v6 = 1;
      goto LABEL_40;
    }
    v7 = v5 | v4[764];
    if ((v4[804] & 1) != 0) {
      goto LABEL_70;
    }
  LABEL_58:
    v6 = 1;
    if (v4[940] == 1 && (v4[805] & 1) != 0 && (v4[806] & 1) != 0) {
      goto LABEL_70;
    }
    goto LABEL_61;
  }
LABEL_26:
  if (v4[940] == 1 && (v4[805] & 1) != 0 && (v4[806] & 1) != 0) {
    goto LABEL_33;
  }
  if (v4[903] != 1) {
    v7 = v5;
    if ((v4[804] & 1) != 0) {
      goto LABEL_70;
    }
    goto LABEL_58;
  }
  v6 = 1;
LABEL_31:
  if ((v4[900] & 1) != 0 ||
      v4[940] == 1 && (v4[901] & 1) != 0 && v4[902] == 1) {
    if (v6 != 0) {
      goto LABEL_33;
    }
  LABEL_40:
    if (v4[903] == 1 && ((v4[900] & 1) != 0 ||
                         v4[940] == 1 && v4[901] == 1 && (v4[902] & 1) != 0)) {
      v7 = v5 | v4[860];
      if ((v6 & 1) != 0) {
        goto LABEL_57;
      }
      v6 = 0;
      goto LABEL_61;
    }
  }
  v7 = v5;
  if (v6 != 0) {
  LABEL_57:
    if ((v4[804] & 1) != 0) {
      goto LABEL_70;
    }
    goto LABEL_58;
  }
LABEL_61:
  if (v4[903] != 1 ||
      (v4[900] & 1) == 0 &&
          (v4[940] != 1 || (v4[901] & 1) == 0 || v4[902] != 1)) {
    goto LABEL_99;
  }
  if (v6 == 0) {
    goto LABEL_79;
  }
LABEL_70:
  if ((v4[804] & 1) != 0) {
    v6 = 1;
  }
  else {
    if (v4[940] != 1 || (v6 = (unsigned __int8)v4[805]) != 1) {
      v6 = 1;
      goto LABEL_79;
    }
    if ((v4[806] & 1) == 0) {
    LABEL_79:
      if (v4[903] != 1 ||
          (v4[900] & 1) == 0 &&
              (v4[940] != 1 || v4[901] != 1 || (v4[902] & 1) == 0) ||
          (v4[860] & 1) == 0) {
        goto LABEL_99;
      }
      goto LABEL_82;
    }
  }
  if ((v4[764] & 1) != 0) {
  LABEL_82:
    if (GameData_2258178 != 0) {
      if (v6 != 0 && ((v4[804] & 1) != 0 ||
                      v4[940] == 1 && v4[805] == 1 && v4[806] == 1)) {
        *(_DWORD*)(GameData_2258178 + 456) |= 1u;
      }
      if (v4[903] == 1 && ((v4[900] & 1) != 0 ||
                           v4[940] == 1 && v4[901] == 1 && v4[902] == 1)) {
        *(_DWORD*)(v2 + 516) |= 1u;
      }
    }
  }
LABEL_99:
  if ((v7 & 1) == 0) {
  LABEL_106:
    v17 = *((_DWORD*)v4 + 238);
    if ((v17 & 2) == 0) {
      if ((v17 & 0x2000) != 0) {
        v18 = GameRoutine_7595d0();
        v19 = GameData_212cfd0[0];
        if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
          if (v18 != game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8))) {
            goto LABEL_118;
          }
        }
        else if (v18 != nullptr) {
          goto LABEL_118;
        }
        if ((*(_BYTE*)(*v19 + 12672) & 1) == 0 &&
            ((unsigned __int8)Mind_746f00(*v19) & 1) != 0 &&
            ((unsigned __int8)Mind_746c60(*v19, 0) & 1) != 0) {
          goto LABEL_126;
        }
      }
    LABEL_118:
      if ((*(_BYTE*)(*(_QWORD*)v3 + 953LL) & 0x10) != 0) {
        v21 = GameRoutine_7595d0();
        v22 = GameData_212cfd0[0];
        if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
          if (v21 == game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8))) {
            goto LABEL_123;
          }
        }
        else if (v21 == nullptr) {
        LABEL_123:
          if ((*(_BYTE*)(*v22 + 12672) & 1) == 0 &&
              ((unsigned __int8)Mind_746f00(*v22) & 1) != 0 &&
              ((unsigned __int8)Mind_746c60(*v22, 1) & 1) != 0) {
          LABEL_126:
            IRoute_750850(*GameData_212cfd8[0] + 24);
            return;
          }
        }
      }
      if ((*(_BYTE*)(*(_QWORD*)v3 + 952LL) & 0x40) == 0 ||
          *(_QWORD*)GameData_212d8b0[0] != 0 &&
              (*(_BYTE*)(*(_QWORD*)GameData_212d8b0[0] + 256LL) & 1) != 0 ||
          *GameData_212cff8[0] != 0 &&
              *(_QWORD*)(*GameData_212cff8[0] + 96) !=
                  *(_QWORD*)(*GameData_212cff8[0] + 88) ||
          (v74[0] = 0, v74[1] = 0,
           (GameRoutine_18aff60(a1, (__int64)v74) & 1) == 0)) {
        if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
          v23 = game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8));
          if (v23 != nullptr) {
            v32 = *GameData_212cfc0[0];
            if (*GameData_212cfc0[0] != 0) {
              v33 = (__int64)v23;
              if (game_map_Cursor_Impl_Tick_alt1(*(_QWORD**)(v32 + 48),
                                                 (__int64)v23)) {
                snd_Fade_Fade_10c830((__int64)v74, 0x0.0p+0f);
                snd_play_ff2d0((__int64)"SE_SYS_Cursor_L",
                               (__int64)"SE_SYS_Cursor_L", (__int64)v74, 0,
                               0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
                snd_Fade_Destroy_Fade(v74);
              }
              v38 = *(_QWORD*)(v32 + 48);
              v34 = *(_DWORD*)(v38 + 8);
              v35 = *(_DWORD*)(v38 + 12);
              v36 = GameData_212ce88[0];
              v37 = *(_QWORD*)(*GameData_212ce88[0] + 8);
              LODWORD(v38) = v34 + 32 * v35;
              if ((unsigned int)v38 >= 0x400) {
                v38 = 0;
              }
              else {
                v38 = (unsigned int)v38;
              }
              if (*(unsigned __int8*)(v37 + v38 + 64) == 255) {
                v39 = false;
              }
              else {
                v39 = GameRoutine_747df0(v37, v34, v35, *(_BYTE*)(v37 + 5)) !=
                      255;
                v37 = *(_QWORD*)(*v36 + 8);
              }
              v66 = v39 & GameRoutine_747a00(v37, v34, v35, v33, 0);
              v67 = *GameData_212cfd8[0];
              IRoute_74f480(*GameData_212cfd8[0] + 24, v34, v35);
              if (*(_BYTE*)(v67 + 200) != 0) {
                v68 = 1;
              }
              else {
                v68 = v66;
              }
              *(_BYTE*)(*(_QWORD*)(v32 + 48) + 240LL) = v68;
            }
          }
        }
      }
      return;
    }
    if ((*(_DWORD*)(*GameData_212cfd0[0] + 12672) & 0x87E1D) != 0) {
      Cursor_730b20(*GameData_212cfc0[0], *(_DWORD*)(*GameData_212cfd0[0] + 24),
                    *(_DWORD*)(*GameData_212cfd0[0] + 28));
      return;
    }
    snd_Fade_Fade_10c830((__int64)v74, 0x0.0p+0f);
    snd_play_ff2d0((__int64)"SE_SYS_Cancel_Unit", (__int64)"SE_SYS_Cancel_Unit",
                   (__int64)v74, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v74);
    v20 = 6;
    goto LABEL_152;
  }
LABEL_100:
  v8 = GameData_212cfd0[0];
  if (*(_BYTE*)(*GameData_212cfd0[0] + 8) == 0) {
    goto LABEL_106;
  }
  v9 = game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8));
  if (v9 == nullptr) {
    v4 = *(_BYTE**)v3;
    goto LABEL_106;
  }
  v10 = (__int64)v9;
  v11 = GameData_212cfc0[0];
  v12 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
  v13 = *(_DWORD*)(v12 + 8);
  v14 = *(_DWORD*)(v12 + 12);
  if (v5 != 0) {
    v15 = *GameData_212ce88[0];
    v16 = *(_BYTE*)(*v8 + 8) != 0 ? game_UnitPool_Get((_BYTE*)(*v8 + 8))
                                  : nullptr;
    if ((GameRoutine_747a00(*(_QWORD*)(v15 + 8), v13, v14, (__int64)v16, 0) &
         1) == 0) {
      v40 = *GameData_212cfd8[0];
      if (*(_BYTE*)(*GameData_212cfd8[0] + 200) == 0) {
        v13 = *(_DWORD*)(v40 + 180);
        v14 = *(_DWORD*)(v40 + 184);
      }
    }
  }
  v41 = *GameData_212ce88[0];
  if (*(_BYTE*)(*v8 + 8) != 0) {
    v42 = game_UnitPool_Get((_BYTE*)(*v8 + 8));
  }
  else {
    v42 = nullptr;
  }
  if ((GameRoutine_747a00(*(_QWORD*)(v41 + 8), v13, v14, (__int64)v42, 0) &
       1) != 0) {
    snd_Fade_Fade_10c830((__int64)v74, 0x0.0p+0f);
    snd_play_ff2d0((__int64)"SE_SYS_Decide_M", (__int64)"SE_SYS_Decide_M",
                   (__int64)v74, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v74);
    v20 = 10;
  LABEL_152:
    *(_DWORD*)(a1 + 152) = v20;
    v44 = *(unsigned __int8**)(a1 + 16);
    if (v44 != nullptr) {
      v45 = *v44;
      if (v45 <= 0x10 && ((1 << v45) & 0x1CE00) != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    return;
  }
  v46 = GameData_212cfd8[0];
  v47 = *GameData_212cfd8[0];
  if (*(_BYTE*)(*GameData_212cfd8[0] + 200) == 0) {
  LABEL_170:
    snd_Fade_Fade_10c830((__int64)v74, 0x0.0p+0f);
    snd_play_ff2d0((__int64)"SE_SYS_BMAP_NG", (__int64)"SE_SYS_BMAP_NG",
                   (__int64)v74, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v74);
    return;
  }
  v48 = *v11;
  v49 = *(_DWORD*)(v47 + 180);
  v50 = *(_DWORD*)(v47 + 184);
  v51 = *(_QWORD*)(v48 + 48);
  v52 = *(_DWORD*)(v51 + 8);
  v53 = *(_DWORD*)(v51 + 12);
  Image_72cbc0(v73, v10);
  v54 = GameData_212cff0[0];
  v55 = *GameData_212cff0[0];
  GameRoutine_777be0(*GameData_212cff0[0] + 8);
  *(_BYTE*)(v55 + 16) = *(_BYTE*)(v10 + 2088);
  v56 = *(_DWORD*)(v10 + 592);
  *(_DWORD*)(v55 + 20) = v49;
  *(_DWORD*)(v55 + 24) = v50;
  *(_DWORD*)(v55 + 28) = v56;
  *(_BYTE*)(v55 + 32) = *(_BYTE*)(*v46 + 200);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)(v55 + 8) + 24LL))(v55 + 8) & 1) ==
      0) {
    RemoveScope_Destructor(v73);
    goto LABEL_170;
  }
  v59 = *v54;
  v60 = GameRoutine_845840((_QWORD*)(*v54 + 64), v52, v53);
  if ((v60 & 0x80000000) == 0) {
    *(_DWORD*)(v59 + 37096) = v60;
  }
  v61 = *v54;
  v62 = VTarget_779120(*v54 + 8);
  *(_DWORD*)(v61 + 36) = v62;
  if (v62 < 0) {
    *(_QWORD*)(v61 + 40) = 0;
  }
  else if (*(_BYTE*)(v61 + 16) != 0) {
    v63 = v62;
    if (game_UnitPool_Get((_BYTE*)(v61 + 16)) != nullptr) {
      v64 = &game_UnitPool_Get((_BYTE*)(v61 + 16))[v63];
      v65 = *((_WORD*)v64 + 414);
      *(_BYTE*)(v61 + 42) = *((_BYTE*)v64 + 830);
      *(_WORD*)(v61 + 40) = v65;
      *(_BYTE*)(v61 + 43) = *((_BYTE*)v64 + 831);
      *(_DWORD*)(v61 + 44) = *((_DWORD*)v64 + 208);
    }
  }
  *(_BYTE*)(*v54 + 37100) = 1;
  snd_Fade_Fade_10c830((__int64)v74, 0x0.0p+0f);
  snd_play_ff2d0((__int64)"SE_SYS_Decide_M", (__int64)"SE_SYS_Decide_M",
                 (__int64)v74, 0, 0x10001u, 0, 0x0.0p+0f,
                 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(v74);
  *(_DWORD*)(a1 + 152) = 24;
  v71 = *(unsigned __int8**)(a1 + 16);
  if (v71 != nullptr) {
    v72 = *v71;
    if (v72 <= 0x10 && ((1 << v72) & 0x1CE00) != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  RemoveScope_Destructor(v73);
}

_BYTE* ProcMapSeqHuman_738de0()
{
  __int64* v0;
  _BYTE* result;
  __int64 v2;
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  float v15;
  __int128 v16;
  __int128 v17;
  __int64 v19;
  int v20;
  int v21;
  __int128* v22;
  char* v23;
  char* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  unsigned int v32;
  struct {
    __int128 v33;
    __int64 v34;
    char gap56_[8];
    __int128* v35;
  } v33_;
  int v36;
  int v37;

  v0 = GameData_212cfd0[0];
  result = (_BYTE*)(*GameData_212cfd0[0] + 8);
  if (*result == 0) {
    return result;
  }
  result = game_UnitPool_Get(result);
  if (result == nullptr) {
    return result;
  }
  v2 = (__int64)result;
  v3 = *(_DWORD*)(*v0 + 24);
  v4 = *(_DWORD*)(*v0 + 28);
  v5 = *(_QWORD*)(*GameData_212ce88[0] + 8);
  *(_QWORD*)(v5 + 8) = 0x100000000LL;
  v6 = *(_QWORD*)(v5 + 24);
  *(_DWORD*)v5 = 0;
  *(_WORD*)(v5 + 4) = 9;
  *(_DWORD*)(v5 + 16) = 0;
  *(_DWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 32) = v6;
  memset_alt1(v5 + 64, 255, 0x400u);
  memset_alt1(v5 + 1096, 0, 0x600u);
  v7 = *(_QWORD*)(v5 + 2640);
  *(_DWORD*)(v5 + 2632) = 0;
  *(_QWORD*)(v5 + 2664) = 0;
  *(_QWORD*)(v5 + 2672) = 0;
  *(_QWORD*)(v5 + 2648) = v7;
  v8 = *GameData_212cfd8[0];
  *(_DWORD*)(v8 + 196) = 0;
  *(_DWORD*)(v8 + 168) = 1;
  *(_BYTE*)(v8 + 200) = 0;
  *(_BYTE*)(v8 + 164) = 9;
  *(_DWORD*)(v8 + 160) = 0;
  ProcMapSeqHuman_739f00_alt2();
  v9 = *(_QWORD*)(v2 + 8);
  *(_BYTE*)(v2 + 584) = v3;
  *(_BYTE*)(v2 + 585) = v4;
  if (v9 != 0) {
    v10 = *(char*)(v9 + 584);
    if ((v10 & 0x80000000) == 0) {
      v11 = *(char*)(v9 + 585);
      if ((v11 & 0x80000000) == 0) {
        v12 = *(_DWORD*)(v9 + 592);
        v13 = v10 | 0x100;
        v14 = v11 | 0x100;
        v15 = (float)(unsigned int)(v12 - 1) * 0x1.4000000000000p+1f;
        if (v12 <= 0) {
          v15 = 0x0.0p+0f;
        }
        *(_QWORD*)&v16 = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)v13 * 0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f) +
            v15);
        v31 = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)v14 * 0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f) +
            v15);
        *(float*)&v32 =
            (float)((float)((float)((float)v13 * 0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f) +
            v15;
        *((_QWORD*)&v16 + 1) = v31;
        v33_.v33 = v16;
        *(_QWORD*)&v17 = __PAIR64__(
            COERCE_UNSIGNED_INT(Unit_6c7fa0(v9, (__int64)&v33_.v33)), v32);
        *((_QWORD*)&v17 + 1) = v31;
        v33_.v33 = v17;
        Cursor_734a80(v2 + 48, (__int64*)&v33_.v33);
        UnitActor_81ba20_alt1(v2);
      }
    }
    v19 = *(_QWORD*)(v2 + 264);
    if (v19 != 0) {
      CharacterBuilder_1084780_alt1(v19);
    }
  }
  if ((*(_WORD*)(v2 + 417) & 0x4004) == 0) {
    v20 = *(char*)(v2 + 584);
    v21 = *(char*)(v2 + 585);
    v22 = &v33_.v33;
    v23 = *(char**)(v2 + 600);
    v24 = *(char**)(v2 + 608);
    v33_.v34 = v2;
    v33_.v35 = &v33_.v33;
    v25 = *(_QWORD*)(*GameData_212ce98[0] + 96);
    *(_QWORD*)&v33_.v33 = GameData_1f94210;
    *((_QWORD*)&v33_.v33 + 1) = v25;
    if (v23 == v24) {
      goto LABEL_18;
    }
    do {
      v26 = *v23 + v20;
      v36 = v23[1] + v21;
      v37 = v26;
      if (v33_.v35 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(__int128*, int*, int*))(*(_QWORD*)v33_.v35 + 48LL))(
          v33_.v35, &v37, &v36);
      v23 += 4;
    } while (v23 != v24);
    v22 = v33_.v35;
    if (v33_.v35 == &v33_.v33) {
    LABEL_18:
      v27 = 32;
      goto LABEL_19;
    }
    if (v33_.v35 != nullptr) {
      v27 = 40;
    LABEL_19:
      (*(void (**)(__int64))(*(_QWORD*)v22 + v27))((__int64)v22);
    }
  }
  v28 = GameData_212cfc0[0];
  Cursor_730b20_alt1(*GameData_212cfc0[0], v3, v4);
  v29 = *v28;
  BYTE12(v33_.v33) = 0;
  *(_QWORD*)(*(_QWORD*)(v29 + 48) + 184LL) = 0x100000001LL;
  *(_QWORD*)&v33_.v33 = 0xBF800000BF800000LL;
  DWORD2(v33_.v33) = 1065353216;
  v30 = UnitActor_819f40_alt1(*(_QWORD*)(v2 + 8));
  if (v30 != *(_DWORD*)(v2 + 16)) {
    UnitActor_81a540(v2, v30, (__int64)&v33_.v33);
  }
  result = (_BYTE*)Mind_744220_alt1(*v0);
  if (*GameData_212d560[0] == 0 || *(int*)(*GameData_212d560[0] + 16) <= 0) {
    return (_BYTE*)GameRoutine_1824f40_alt1(
        *(unsigned int*)(*(_QWORD*)(*v28 + 48) + 8LL),
        *(_DWORD*)(*(_QWORD*)(*v28 + 48) + 12LL), 1);
  }
  return result;
}

_QWORD* ProcMapSeqHuman_739f00()
{
  __int64* v0;
  unsigned __int64 v1;
  int v2;
  _QWORD* result;
  __int64 v4;
  _QWORD* v5;
  unsigned __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;

  v0 = GameData_212ce90[0];
  v1 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  if (v1 > 3) {
    v2 = 0;
  }
  else {
    v2 = GameData_1a82ec0[v1];
  }
  v19 = v2;
  result = (_QWORD*)game_UnitPool_GetFirst_alt1(&v19);
  v4 = *v0;
  v5 = result;
  v6 = *(unsigned __int8*)(*v0 + 24);
  if (v6 <= 3) {
    v7 = GameData_1a82ec0[v6];
    if (result == nullptr) {
      return result;
    }
  LABEL_8:
    v8 = result[54];
    if (v8 == 0) {
      v8 = result[55];
      if (v8 != 0) {
        v9 = *(unsigned __int8*)(v8 + 16);
        if (v9 < 9) {
          do {
            v18 = v9 + 1;
            if (((v7 >> v9) & 2) != 0) {
              v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v9 + 1) + 556000);
              if (v8 != 0) {
                goto LABEL_14;
              }
            }
            v9 = v18;
          } while (v18 != 9);
        }
        v8 = 0;
        goto LABEL_14;
      }
    }
    while (1) {
    LABEL_14:
      v10 = v5[275];
      v5 = (_QWORD*)v8;
      if (v10 != 0) {
        v11 = *(_QWORD*)(v10 + 24);
        *(_DWORD*)v10 = 0;
        *(_WORD*)(v10 + 4) = 9;
        *(_QWORD*)(v10 + 8) = 0x100000000LL;
        *(_DWORD*)(v10 + 16) = 0;
        *(_DWORD*)(v10 + 48) = 0;
        *(_QWORD*)(v10 + 32) = v11;
        memset_alt1(v10 + 64, 255, 0x400u);
        result = (_QWORD*)memset_alt1(v10 + 1096, 0, 0x600u);
        v12 = *(_QWORD*)(v10 + 2640);
        *(_DWORD*)(v10 + 2632) = 0;
        *(_QWORD*)(v10 + 2664) = 0;
        *(_QWORD*)(v10 + 2672) = 0;
        *(_QWORD*)(v10 + 2648) = v12;
        v4 = *v0;
      }
      v13 = *(unsigned __int8*)(v4 + 24);
      if (v13 > 3) {
        v14 = 0;
        if (v5 == nullptr) {
          return result;
        }
      }
      else {
        v14 = GameData_1a82ec0[v13];
        if (v5 == nullptr) {
          return result;
        }
      }
      v8 = v5[54];
      if (v8 == 0) {
        v15 = v5[55];
        if (v15 != 0) {
          v16 = *(unsigned __int8*)(v15 + 16);
          v8 = 0;
          if (v16 <= 8) {
            while (1) {
              v17 = v16 + 1;
              if (((v14 >> v16) & 2) != 0) {
                v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v16 + 1) + 556000);
                if (v8 != 0) {
                  break;
                }
              }
              ++v16;
              if (v17 == 9) {
                v8 = 0;
                goto LABEL_14;
              }
            }
          }
        }
      }
    }
  }
  v7 = 0;
  if (result != nullptr) {
    goto LABEL_8;
  }
  return result;
}

__int64 ProcMapSeqHuman_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqHuman_vtable;
  GameRoutine_739f00(a1);
  v2 = *(_QWORD*)(a1 + 208);
  if (v2 != 0) {
    *(_QWORD*)(a1 + 216) = v2;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v2);
  }
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1f94888;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_10;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);

LABEL_10:
  GameData_21cf830 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcMapSeqHuman_Unknown9(__int64 a1)
{
  if (*(_BYTE*)(a1 + 232) == 1) {
    GameRoutine_1566440(a1 + 208, 0);
    *(_BYTE*)(a1 + 232) = 0;
  }
  return GameRoutine_182ae70(*(_QWORD*)GameData_212d0d0[0], 1);
}

__int64 ProcMapSeqHuman_Unknown12(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _BOOL4 v3;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  if (v1 > v2) {
  LABEL_4:
    v3 = true;
  }
  else {
    while (*(_BYTE*)v2 != 2) {
      v2 -= 64LL;
      if (v1 > v2) {
        goto LABEL_4;
      }
    }
    v3 = *(_DWORD*)(v2 + 32) != 28;
  }
  if (v1 != 0 && v3) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 28) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64LL;
    }
  }
  return result;
}

#pragma GCC visibility pop
