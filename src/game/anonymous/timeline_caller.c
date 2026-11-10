#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CorpsManager_972b20(_QWORD);
__int64 FacilityVariable_1472320(void);
__int64 GameRoutine_1046b40(_QWORD);
__int64 GameRoutine_1138170(_QWORD);
__int64 GameRoutine_11cf560(_QWORD);
__int64 GameRoutine_11dec70(_QWORD);
__int64 GameRoutine_120dd60(void);
__int64 GameRoutine_1309340(void);
__int64 GameRoutine_13099a0(_QWORD, _QWORD);
__int64 GameRoutine_130d610(_QWORD);
__int64 GameRoutine_1347960(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_135bb70(void);
__int64 GameRoutine_162aea0(_QWORD, _QWORD);
__int64 GameRoutine_19b0cd0(_QWORD);
__int64 GameRoutine_19b6150(_QWORD);
__int64 GameRoutine_19be220(_QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_7180e0(void);
__int64 GameRoutine_877c40();
__int64 GameRoutine_877d00();
__int64 GameRoutine_87dcb0(_QWORD, _QWORD);
__int64 GameRoutine_892b40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_892d40(_QWORD, _QWORD);
__int64 GameRoutine_892e60(_QWORD, _QWORD);
__int64 GameRoutine_892f00(_QWORD);
__int64 GameRoutine_893020(_QWORD);
__int64 GameRoutine_893130(_QWORD, _QWORD);
__int64 GameRoutine_8931e0(_QWORD, _QWORD);
__int64 GameRoutine_893380(_QWORD, _QWORD);
__int64 GameRoutine_893420(_QWORD);
__int64 GameRoutine_893480(_QWORD);
__int64 GameRoutine_893780(_QWORD);
__int64 GameRoutine_893970(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8939f0(_QWORD, _QWORD);
__int64 GameRoutine_893a70(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_893b00(_QWORD, _QWORD);
__int64 GameRoutine_893d00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_893dc0(_QWORD);
__int64 GameRoutine_893f70(_QWORD, _QWORD);
__int64 GameRoutine_894020(_QWORD);
__int64 GameRoutine_8941e0(void);
__int64 GameRoutine_894300(_QWORD, _QWORD);
__int64 GameRoutine_894490(void);
__int64 GameRoutine_8ab230(_QWORD);
__int64 GameRoutine_8b0370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8b03f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8b07c0(_QWORD, _QWORD);
__int64 GameRoutine_8e9240(_QWORD, _QWORD);
__int64 GameRoutine_8e9840(_QWORD, _QWORD);
__int64 GameRoutine_90d990(_QWORD);
__int64 GameRoutine_974a60(_QWORD);
__int64 GameRoutine_a08d50(_QWORD);
__int64 GameRoutine_f6bb90(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_125bda0(_QWORD, _QWORD);
__int64 GameSubquestData_125dca0(_QWORD, _QWORD);
__int64 ProcInst_657d40(_QWORD, _QWORD, _QWORD);
__int64 ProcList_9bd480(_QWORD);
__int64 SpotMgr_1333820(void);
__int64 SpotMgr_13338e0(void);
__int64 SpotMgr_1333b80(void);
__int64 TroopMgr_134a9e0(void);
__int64 VariableManager_7150e0(void);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
extern _UNKNOWN GameData_1adb26c;
extern __int64 (*GameData_1fa7518[])();
extern __int64 (*GameData_1fa75a8[])();
extern __int64 (*GameData_1fa7628[])();
extern __int64 (*GameData_1fa76a8[])();
extern __int64 (*GameData_1fa7728[])();
extern __int64 (*GameData_1fa77a8[])();
extern __int64 (*GameData_1fa7828[])();
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c9700;
extern __int64 GameData_21ca0a8;
extern __int64 GameData_21eea58;
extern __int64 game_GameModeData_instance_;
extern __int64* game_vstring_kEmpty_ptr[2];
__int64 game_anonymous_TimelineCaller_RunImpl(__int64 result, __int64 a2,
                                              char a3);
__int64 game_anonymous_TimelineCaller_SelectPart2(__int64 result);
__int64 game_anonymous_TimelineCaller_Tutorial(__int64 result, __int64 a2);
__int64 game_anonymous_TimelineCaller_ComebackForced(__int64 result);
__int64 game_anonymous_TimelineCaller_RunImpl_closure_Invoke(__int64 a1,
                                                             __int64* a2);
__int64 game_anonymous_TimelineCaller_Tutorial_closure_Invoke(__int64 a1,
                                                              __int64* a2);
__int64
game_anonymous_TimelineCaller_ComebackForced_closure_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 GameRoutine_1308ae0(void);
__int64 GameRoutine_1309340_alt1(_QWORD) __asm__("GameRoutine_1309340");
__int64 game_anonymous_TimelineCaller_SelectPart2_closure0_Invoke();

__int64 game_anonymous_TimelineCaller_RunImpl(__int64 result, __int64 a2,
                                              char a3)
{
  _QWORD* v3;
  __int64 v6;
  __int64 v7;
  __int64 i;
  __int64* v9;
  __int64* v10;
  _QWORD* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (*v17)(_QWORD);
  __int64 v18;
  _QWORD* v19;
  unsigned int v20;
  _QWORD* v21;
  __int64* v22;
  __int64* v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 (*v29)(_QWORD);
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 k;
  __int64 v35;
  __int64 j;
  __int64 v37;
  __int64 v38;
  __int64 ii;
  __int64 v40;
  __int64 v41;
  __int64 jj;
  __int64 (**v43)();
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  __int64* v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  int v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 m;
  __int64** v63;
  __int64* v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned int v72;
  __int64 v73;
  __int64 v74;
  __int64 n;
  bool v76;
  __int64 v77;
  __int64 v79;
  _QWORD v80[4];
  _QWORD* v81;

  v3 = *(_QWORD**)(result + 24);
  v6 = result;
  v7 = v3[44];
  for (i = v3[45]; v7 != i; v7 += 24) {
    result = GameRoutine_11dec70(v7);
  }
  v11 = v3 + 38;
  v10 = (__int64*)v3[38];
  v9 = (__int64*)v11[1];
  if (v9 != v10) {
    v12 = 0;
    do {
      v13 = *v10;
      v14 = v10[1];
      if (v14 == *v10) {
      LABEL_5:
        ++v12;
      }
      else {
        while (1) {
          if (*(_QWORD*)v13 != 0) {
            v15 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v16 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), v13);
              if (v16 != 0) {
                v17 = *(__int64 (**)(_QWORD))(v16 + 72);
                v18 = *(_QWORD*)(v16 + 80);
                v19 = (_QWORD*)(v16 + (v18 >> 1));
                if ((v18 & 1) != 0) {
                  v17 = *(__int64 (**)(_QWORD))((char*)v17 + *v19);
                }
                result = v17(v19);
              }
              else {
                result = 1;
              }
            }
            if (*(_BYTE*)(v13 + 16) != ((v15 == 0) | result & 1)) {
              break;
            }
          }
          v13 += 24;
          if (v13 == v14) {
            goto LABEL_5;
          }
        }
      }
      v10 += 6;
    } while (v10 != v9);
    if (v12 == 0) {
      return result;
    }
  }
  v20 = *(unsigned __int8*)(v6 + 33);
  switch (*(_BYTE*)(v6 + 33)) {
  case 5:
    result = GameRoutine_893a70(*(unsigned __int16*)(v6 + 40),
                                *(_QWORD*)(v6 + 48), a2);
    goto LABEL_165;
  case 6:
    result = GameRoutine_893970(*(unsigned __int16*)(v6 + 40),
                                *(_QWORD*)(v6 + 48), a2);
    goto LABEL_165;
  case 7:
    if (a2 != 0) {
      v49 = *(__int64**)(v6 + 48);
      if (*(_WORD*)(v6 + 40) == 0) {
        v49 = game_vstring_kEmpty_ptr[0];
      }
      if (*v49 != 0) {
        result = GameRoutine_11cf560(a2);
      }
    }
    goto LABEL_165;
  case 9:
    if (a2 != 0) {
      v48 = *(__int64**)(v6 + 48);
      if (*(_WORD*)(v6 + 40) == 0) {
        v48 = game_vstring_kEmpty_ptr[0];
      }
      if (*v48 != 0) {
        result = GameRoutine_1138170(a2);
      }
    }
    goto LABEL_165;
  case 0xA:
    result = FacilityVariable_1472320();
    goto LABEL_165;
  case 0xB:
    result = GameRoutine_7180e0();
    goto LABEL_165;
  case 0x11:
    result = GameRoutine_893f70(v6, a3 & 1);
    goto LABEL_165;
  case 0x12:
    result = GameRoutine_894020(v6);
    goto LABEL_165;
  case 0x13:
    v43 = GameData_1fa7518;
    goto LABEL_68;
  case 0x14:
    v43 = GameData_1fa75a8;
  LABEL_68:
    v80[0] = v43;
    v44 = *(_QWORD*)(v6 + 24);
    v81 = v80;
    GameRoutine_892b40(*(_QWORD*)(v44 + 256), *(_QWORD*)(v44 + 264), v80);
    result = (__int64)v81;
    if (v81 == v80) {
      v45 = 32;
    }
    else {
      if (v81 == nullptr) {
        goto LABEL_165;
      }
      v45 = 40;
    }
    result = (*(__int64 (**)(void))(*v81 + v45))();
    goto LABEL_165;
  case 0x15:
    result = GameRoutine_892d40(*(_QWORD*)(*(_QWORD*)(v6 + 24) + 256LL),
                                *(_QWORD*)(*(_QWORD*)(v6 + 24) + 264LL));
    goto LABEL_165;
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1F:
  case 0x23:
    v21 = *(_QWORD**)(v6 + 24);
    v23 = (__int64*)v21[38];
    v22 = (__int64*)v21[39];
    if (v22 != v23) {
      v24 = 0;
      while (1) {
        v25 = *v23;
        v26 = v23[1];
        if (v26 == *v23) {
        LABEL_22:
          ++v24;
        }
        else {
          while (1) {
            if (*(_QWORD*)v25 != 0) {
              v27 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v28 = game_GameVariableTable_Find(
                    *(_QWORD*)(game_GameModeData_instance_ + 48), v25);
                if (v28 != 0) {
                  v29 = *(__int64 (**)(_QWORD))(v28 + 72);
                  v30 = *(_QWORD*)(v28 + 80);
                  v31 = (_QWORD*)(v28 + (v30 >> 1));
                  if ((v30 & 1) != 0) {
                    v29 = *(__int64 (**)(_QWORD))((char*)v29 + *v31);
                  }
                  result = v29(v31);
                }
                else {
                  result = 1;
                }
              }
              if (*(_BYTE*)(v25 + 16) != ((v27 == 0) | result & 1)) {
                break;
              }
            }
            v25 += 24;
            if (v25 == v26) {
              goto LABEL_22;
            }
          }
        }
        v23 += 6;
        if (v23 == v22) {
          v21 = *(_QWORD**)(v6 + 24);
          goto LABEL_40;
        }
      }
    }
    v24 = 1;
  LABEL_40:
    v35 = v21[14];
    for (j = v21[15]; v35 != j; v35 += 16) {
      result = game_VariableManager_SetFlag(v35, v24);
    }
    goto LABEL_165;
  case 0x19:
  case 0x20:
  case 0x24:
    v32 = *(_QWORD*)(v6 + 24);
    v33 = *(_QWORD*)(v32 + 112);
    for (k = *(_QWORD*)(v32 + 120); v33 != k; v33 += 16) {
      result = game_VariableManager_SetFlag(v33, 0);
    }
    goto LABEL_165;
  case 0x1A:
    v70 = *(_QWORD*)(v6 + 24);
    if (*(_BYTE*)(v70 + 380) != 0) {
      v71 = 0;
    }
    else {
      v71 = a2;
    }
    result = GameRoutine_8b0370(v71, *(unsigned int*)(v70 + 376), 0);
    goto LABEL_165;
  case 0x1B:
    v46 = *(_QWORD*)(v6 + 24);
    if (*(_BYTE*)(v46 + 380) != 0) {
      v47 = 0;
    }
    else {
      v47 = a2;
    }
    result = GameRoutine_8b03f0(v47, *(unsigned int*)(v46 + 376), 0);
    goto LABEL_165;
  case 0x1C:
    if (game_GameModeData_instance_ != 0) {
      v56 = *(_DWORD*)(game_GameModeData_instance_ + 80) +
            *(_DWORD*)(*(_QWORD*)(v6 + 24) + 376LL);
      v57 = v56 & ~(v56 >> 31);
      if (v57 >= 99999) {
        v57 = 99999;
      }
      *(_DWORD*)(game_GameModeData_instance_ + 80) = v57;
    }
    goto LABEL_165;
  case 0x1D:
    result = GameRoutine_893130(*(_QWORD*)(v6 + 24), a2);
    goto LABEL_165;
  case 0x1E:
    v58 = *(_QWORD*)(v6 + 24);
    v59 = *(_QWORD**)(v58 + 280);
    if (*(_QWORD**)(v58 + 288) != v59) {
      result = GameRoutine_8b07c0(a2, *v59);
    }
    goto LABEL_165;
  case 0x21:
    v72 = GameRoutine_974a60(*(_QWORD*)(v6 + 24) + 304LL);
    result = GameRoutine_892e60(v6, v72);
    goto LABEL_165;
  case 0x22:
    result = GameRoutine_892e60(v6, 0);
    goto LABEL_165;
  case 0x25:
    result = SpotMgr_1333b80();
    goto LABEL_165;
  case 0x26:
    result = GameRoutine_892f00(*(_QWORD*)(v6 + 24));
    goto LABEL_165;
  case 0x27:
    result = GameRoutine_893020(*(_QWORD*)(v6 + 24));
    goto LABEL_165;
  case 0x28:
    result = SpotMgr_1333820();
    goto LABEL_165;
  case 0x29:
    result = SpotMgr_13338e0();
    goto LABEL_165;
  case 0x2A:
    v60 = *(_QWORD*)(v6 + 24);
    v61 = *(_QWORD*)(v60 + 384);
    for (m = *(_QWORD*)(v60 + 392); v61 != m; v61 += 8) {
      if (GameData_21c96e8 != 0 && *(_QWORD*)v61 != 0) {
        v63 = *(__int64***)(*(_QWORD*)v61 + 40LL);
        v64 = *v63;
        v65 = v63[1];
        if (*v63 != v65) {
          v66 = *(_QWORD*)(GameData_21c96e8 + 8);
          do {
            v68 = *v64;
            if (*v64 != 0) {
              result = *(_QWORD*)(v68 + 80);
              if (result != 0 ||
                  (result = *(_QWORD*)(*(_QWORD*)(v68 + 64) + 48LL)) != 0) {
                v67 = game_gmap_SpotMgr_FindSpot(result);
                result = GameRoutine_1347960(v66, v67, v68);
              }
            }
            ++v64;
          } while (v64 != v65);
        }
      }
    }
    goto LABEL_165;
  case 0x2B:
    result = GameRoutine_893dc0(v6);
    goto LABEL_165;
  case 0x2E:
    result = GameRoutine_893420(a2);
    goto LABEL_165;
  case 0x2F:
    v73 = *(_QWORD*)(v6 + 24);
    v74 = *(_QWORD*)(v73 + 112);
    for (n = *(_QWORD*)(v73 + 120); v74 != n; v74 += 16) {
      result = game_VariableManager_SetFlag(v74, 0);
    }
    goto LABEL_165;
  case 0x30:
    v37 = *(_QWORD*)(v6 + 24);
    v38 = *(_QWORD*)(v37 + 112);
    for (ii = *(_QWORD*)(v37 + 120); v38 != ii; v38 += 16) {
      result = game_VariableManager_SetFlag(v38, 1);
    }
    goto LABEL_165;
  case 0x31:
    v40 = *(_QWORD*)(v6 + 24);
    v41 = *(_QWORD*)(v40 + 112);
    for (jj = *(_QWORD*)(v40 + 120); v41 != jj; v41 += 16) {
      result = game_VariableManager_SetFlag(v41, 2);
    }
    goto LABEL_165;
  case 0x32:
    GameRoutine_135bb70();
    result = CorpsManager_972b20(*(unsigned int*)(*(_QWORD*)(v6 + 24) + 376LL));
    goto LABEL_165;
  case 0x33:
    result = TroopMgr_134a9e0();
    goto LABEL_165;
  case 0x35:
    result = GameRoutine_893b00(v6, a2);
    goto LABEL_165;
  case 0x37:
    result = GameRoutine_8931e0(*(_QWORD*)(*(_QWORD*)(v6 + 24) + 432LL),
                                *(_QWORD*)(*(_QWORD*)(v6 + 24) + 440LL));
    goto LABEL_165;
  case 0x38:
    result = GameRoutine_893380(*(_QWORD*)(*(_QWORD*)(v6 + 24) + 456LL),
                                *(_QWORD*)(*(_QWORD*)(v6 + 24) + 464LL));
    goto LABEL_165;
  case 0x39:
    result = GameRoutine_893480(a2);
    goto LABEL_165;
  case 0x3A:
    result = GameRoutine_893780(a2);
    goto LABEL_165;
  case 0x3C:
    result = GameRoutine_893d00(*(unsigned __int16*)(v6 + 40),
                                *(_QWORD*)(v6 + 48), a2);
    goto LABEL_165;
  case 0x3D:
    if (a2 == 0) {
      goto LABEL_172;
    }
    result =
        ProcInst_657d40(a2, *(unsigned int*)(*(_QWORD*)(v6 + 24) + 376LL), 1);
    goto LABEL_165;
  case 0x3F:
    v69 = 2;
    goto LABEL_159;
  case 0x40:
    v69 = 3;
  LABEL_159:
    result = GameRoutine_894300(a2, v69);
    goto LABEL_165;
  case 0x41:
    result = GameRoutine_8941e0();
    goto LABEL_165;
  case 0x42:
    result = GameRoutine_894490();
    goto LABEL_165;
  case 0x43:
    result = GameRoutine_1309340();
    goto LABEL_165;
  case 0x44:
    result = GameRoutine_13099a0(v6, a2);
    goto LABEL_165;
  case 0x45:
    result =
        GameRoutine_8e9240(*(_QWORD*)(game_GameModeData_instance_ + 176), a2);
    goto LABEL_165;
  case 0x46:
    result =
        GameRoutine_8e9840(*(_QWORD*)(game_GameModeData_instance_ + 176), a2);
    goto LABEL_165;
  case 0x47:
    result = GameSubquestData_125bda0(*(_QWORD*)GameData_212c7b0[0], v6 + 40);
    goto LABEL_165;
  case 0x48:
    result = GameSubquestData_125dca0(*(_QWORD*)GameData_212c7b0[0], v6 + 40);
    goto LABEL_165;
  case 0x4A:
    result = game_anonymous_TimelineCaller_ComebackForced(a2);
    goto LABEL_165;
  case 0x4C:
    if (a2 == 0) {
      goto LABEL_172;
    }
    result = GameRoutine_8ab230(2);
    goto LABEL_165;
  case 0x4D:
    if (a2 == 0) {
      goto LABEL_172;
    }
    result = GameRoutine_8ab230(3);
    goto LABEL_165;
  case 0x4E:
    if (a2 == 0) {
      goto LABEL_172;
    }
    result = GameRoutine_a08d50(a2);
    goto LABEL_165;
  case 0x4F:
    if (a2 == 0) {
      goto LABEL_172;
    }
    result = GameRoutine_19b0cd0(a2);
    goto LABEL_165;
  case 0x50:
    if (a2 == 0) {
      goto LABEL_172;
    }
    result = GameRoutine_19b6150(a2);
    goto LABEL_165;
  case 0x51:
    if (a2 == 0) {
      goto LABEL_172;
    }
    result = GameRoutine_19be220(a2);
    goto LABEL_165;
  case 0x52:
    result = game_anonymous_TimelineCaller_Tutorial(v6, a2);
    goto LABEL_165;
  case 0x53:
    result = game_anonymous_TimelineCaller_SelectPart2(a2);
    goto LABEL_165;
  case 0x54:
    if ((a3 & 1) != 0) {
      goto LABEL_172;
    }
    result = GameRoutine_130d610(0);
    goto LABEL_165;
  case 0x55:
    if (a2 == 0) {
      goto LABEL_172;
    }
    result = GameRoutine_1046b40(a2);
    goto LABEL_165;
  case 0x56:
    if (a2 == 0) {
      goto LABEL_172;
    }
    result = GameRoutine_8ab230(5);
    goto LABEL_165;
  case 0x57:
    result =
        GameRoutine_8939f0(*(unsigned __int16*)(v6 + 40), *(_QWORD*)(v6 + 48));
    goto LABEL_165;
  case 0x58:
    if (a2 == 0) {
      goto LABEL_172;
    }
    result = ProcList_9bd480(a2);
    v50 = *(_QWORD*)(v6 + 24);
    v51 = *(__int64**)(v50 + 256);
    v52 = *(__int64**)(v50 + 264);
    if (v51 == v52) {
      goto LABEL_165;
    }
    v53 = result;
    break;
  default:
    goto LABEL_166;
  }
  do {
    v55 = *v51;
    v81 = v80;
    v80[0] = GameData_1fa7628;
    v80[1] = v55;
    game_ProcList_Call_9bcfa0(v53, v80);
    result = (__int64)v81;
    if (v81 == v80) {
      v54 = 32;
    LABEL_97:
      result = (*(__int64 (**)(void))(*v81 + v54))();
      goto LABEL_98;
    }
    if (v81 != nullptr) {
      v54 = 40;
      goto LABEL_97;
    }
  LABEL_98:
    ++v51;
  } while (v51 != v52);
LABEL_165:
  v20 = *(unsigned __int8*)(v6 + 33);
LABEL_166:
  v76 = v20 > 0x2C;
  v77 = (1LL << v20) & 0x100000060400LL;
  if (!v76 && v77 != 0) {
    result = GameRoutine_120dd60();
    if (*(_BYTE*)(v6 + 33) == 10) {
      result = GameRoutine_90d990(game_GameModeData_instance_ + 152);
    }
  }
LABEL_172:
  v79 = *(_QWORD*)(v6 + 168);
  if (v79 != 0) {
    result = *(_QWORD*)(v6 + 120);
    if (v79 == result && GameData_21c9700 != 0) {
      result = game_gmap_SpotMgr_FindSpot(result);
      if (result != 0 && (*(_BYTE*)(result + 178) & 1) == 0) {
        *(_BYTE*)(result + 178) |= 1u;
      }
    }
  }
  return result;
}

__int64 game_anonymous_TimelineCaller_SelectPart2(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD v4[4];
  _QWORD* v5;

  if (result == 0) {
    return result;
  }
  result = ProcList_9bd480(result);
  if (result == 0) {
    return result;
  }
  v1 = result;
  v4[0] = GameData_1fa76a8;
  v5 = v4;
  game_ProcList_Call_9bcfa0(result, v4);
  if (v5 == v4) {
    v2 = 32;
    goto LABEL_7;
  }
  if (v5 != nullptr) {
    v2 = 40;
  LABEL_7:
    (*(void (**)(__int64))(*v5 + v2))((__int64)v5);
  }
  v4[0] = GameData_1fa7728;
  v5 = v4;
  game_ProcList_Call_9bcfa0(v1, v4);
  result = (__int64)v5;
  if (v5 == v4) {
    v3 = 32;
  }
  else {
    if (v5 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*v5 + v3))((__int64)v5);
}

__int64 game_anonymous_TimelineCaller_Tutorial(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;

  if (a2 != 0) {
    v2 = result;
    if (*(_WORD*)(result + 40) != 0) {
      result = ProcList_9bd480(a2);
      if (result != 0 && *(_WORD*)(v2 + 40) != 0) {
        v3 = 8LL * *(unsigned __int16*)(v2 + 40);
        v4 = result;
        for (i = 0; v3 != i; i += 8) {
          v7 = *(_QWORD*)(*(_QWORD*)(v2 + 48) + i);
          v9 = v8;
          v8[0] = GameData_1fa77a8;
          v8[1] = v7;
          game_ProcList_Call_9bcfa0(v4, v8);
          result = (__int64)v9;
          if (v9 == v8) {
            v6 = 32;
          }
          else {
            if (v9 == nullptr) {
              continue;
            }
            v6 = 40;
          }
          result = (*(__int64 (**)(__int64))(*v9 + v6))((__int64)v9);
        }
      }
    }
  }
  return result;
}

__int64 game_anonymous_TimelineCaller_ComebackForced(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;
  _QWORD v5[4];
  _QWORD* v6;

  if (result != 0) {
    result = GameRoutine_877c40();
    if ((result & 1) != 0) {
      GameRoutine_877d00();
      result = (__int64)v3;
      v3[0] = GameData_1fa7828;
      v4 = v3;
      if (GameData_21eea58 == 0) {
        goto LABEL_12;
      }
      v5[0] = GameData_1fa7828;
      v6 = v5;
      GameRoutine_87dcb0(v5, GameData_21eea58 + 48);
      if (v6 == v5) {
        v1 = 32;
      }
      else {
        if (v6 == nullptr) {
          goto LABEL_9;
        }
        v1 = 40;
      }
      (*(void (**)(_QWORD*))(*v6 + v1))(v6);
    LABEL_9:
      result = (__int64)v4;
      if (v4 != v3) {
        if (v4 == nullptr) {
          return result;
        }
        v2 = 40;
        return (*(__int64 (**)(__int64))(*(_QWORD*)result + v2))(result);
      }
    LABEL_12:
      v2 = 32;
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + v2))(result);
    }
  }
  return result;
}

__int64 game_anonymous_TimelineCaller_RunImpl_closure_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v5 = v2;
  return GameRoutine_f6bb90(v3, &v5, 2, 0, 0);
}

__int64 game_anonymous_TimelineCaller_SelectPart2_closure0_Invoke()
{
  __int64 v0;
  __int64 result;

  v0 = GameRoutine_1308ae0();
  result = GameRoutine_1309340_alt1(v0);
  if (game_GameModeData_instance_ != 0) {
    *(_BYTE*)(game_GameModeData_instance_ + 14) =
        *(_BYTE*)(game_GameModeData_instance_ + 13);
  }
  return result;
}

__int64 game_anonymous_TimelineCaller_Tutorial_closure_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;

  v2 = *a2;
  v3 = game_HashString(*(_QWORD*)(a1 + 8));
  if (v3 != 0) {
    v4 = *(_QWORD*)(GameData_21ca0a8 + 96);
    if (v4 != 0 && *(_QWORD*)(GameData_21ca0a8 + 112) != 0) {
      v6 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v7 = v3;
        if (v3 >= v4) {
          v7 = v3 % v4;
        }
      }
      else {
        v7 = v6 & v3;
      }
      v8 = *(_QWORD**)(*(_QWORD*)(GameData_21ca0a8 + 88) + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v12 = v9[1];
              if (v12 == v3) {
                if (v9[2] == v3) {
                  goto LABEL_27;
                }
              }
              else if ((v12 & v6) != v7) {
                goto LABEL_25;
              }
              v9 = (_QWORD*)*v9;
              v11 = 0;
              if (v9 == nullptr) {
                goto LABEL_26;
              }
            }
          }
          do {
            v10 = v9[1];
            if (v10 == v3) {
              if (v9[2] == v3) {
              LABEL_27:
                v11 = v9[3];
                goto LABEL_26;
              }
            }
            else {
              if (v10 >= v4) {
                v10 %= v4;
              }
              if (v10 != v7) {
                break;
              }
            }
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
      }
    }
  }
LABEL_25:
  v11 = 0;
LABEL_26:
  v14 = v11;
  return GameRoutine_162aea0(v2, &v14);
}

__int64 game_anonymous_TimelineCaller_ComebackForced_closure_Invoke(__int64 a1,
                                                                    __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  const char* v5;
  _QWORD v6[4];
  _QWORD* v7;

  v2 = *a2;
  VariableManager_7150e0();
  v6[1] = &GameData_1adb26c;
  v6[0] = game_HashString(&GameData_1adb26c);
  game_VariableManager_SetFlag(v6, 1);
  v5 = "MID_ContinueNewGame_Reload_Message";
  result = game_menu_Dialog__CreateBind_game_menu_Dialog(v2, &v5);
  if (result != 0) {
    v7 = nullptr;
    GameRoutine_6680e0(v6, result + 1248);
    result = (__int64)v7;
    if (v7 == v6) {
      v4 = 32;
    }
    else {
      if (v7 == nullptr) {
        return result;
      }
      v4 = 40;
    }
    return (*(__int64 (**)(void))(*v7 + v4))();
  }
  return result;
}

#pragma GCC visibility pop
