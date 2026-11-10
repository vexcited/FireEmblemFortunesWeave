#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1189190(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1189a20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_118a5a0(_QWORD);
__int64 GameRoutine_11e7860(_QWORD, _QWORD);
__int64 GameRoutine_11e9bc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_120f020(_QWORD, _QWORD);
__int64 GameRoutine_12272a0(void);
__int64 GameRoutine_122f360(_QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657c40(_QWORD);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 GameRoutine_68e930(_QWORD, _QWORD);
__int64 GameRoutine_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_747a00(__int64, __int64, __int64, __int64, char);
__int64 GameRoutine_747df0(__int64, int, int, unsigned __int8);
__int64 GameRoutine_748f80(__int64, __int64, int, int, int, unsigned int*);
__int64 GameRoutine_74cd60(_QWORD);
__int64 GameRoutine_7693e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_769b20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_76a520(_QWORD, _QWORD);
__int64 GameRoutine_76ad80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_80a5b0(_QWORD);
__int64 GameRoutine_8ae640(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8aef60(_QWORD, _QWORD);
__int64 GameRoutine_90f440(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_90f520(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_90f760(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Image_72a260(_QWORD);
__int64 Image_72b4a0(_QWORD);
__int64 Image_72b6c0(_QWORD);
__int64 StringIsEmpty_25eef0(_QWORD);
__int64 UnitItem_6e8800(_QWORD, _QWORD);
__int64 _ZN4game4Unit14RepairBarrierEPKS0_iib(_QWORD, _QWORD, _QWORD, _QWORD,
                                              _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 as_string_c_str(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_Unit_GetJobUnknown30(_QWORD);
__int64 game_script_GetCurrentProc(_QWORD);
__int64 game_script_StartWaitProc(_QWORD);
__int64 game_script_WaitProc(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_223d9c0;
extern _UNKNOWN GameData_223dad0;
extern _UNKNOWN* GameData_212c8a8;
extern __int64 (*GameData_1f957d8[])();
extern __int64 (*GameData_1f95858[])();
extern __int64 (*anonymous_MotionWaitProc_vtable[])();
extern __int64 (*anonymous_MoveWaitProc_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212eb20[2];
extern __int64 GameData_212eb28;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9bd0;
extern __int64 GameData_21ca2f0;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd150;
extern __int64 GameData_21d21c0;
extern __int64 GameData_22054a0;
extern __int64 GameData_22054a8;
extern __int64 GameData_223d948;
extern __int64 GameData_223d950;
extern __int64 GameData_223d958;
extern __int64 GameData_223d968;
extern __int64 GameData_223d978;
extern __int64 GameData_223d988;
extern __int64 GameData_223d990;
extern __int64 GameData_223d998;
extern __int64 GameData_223d9a8;
extern __int64 GameData_223d9b8;
extern __int64 GameData_223da58;
extern __int64 GameData_223da60;
extern __int64 GameData_223da68;
extern __int64 GameData_223da78;
extern __int64 GameData_223da88;
extern __int64 GameData_223da98;
extern __int64 GameData_223daa0;
extern __int64 GameData_223daa8;
extern __int64 GameData_223dab8;
extern __int64 GameData_223dac8;
extern __int64 GameData_22400f8;
extern __int64 as_g_script_manager;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_map_UnitFlags_instance_;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce88[4];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb0[12];
extern __int64* GameData_212cfb8[11];
extern __int64* as_g_script_manager_ptr;
extern char GameData_223d940;
extern char GameData_223d980;
extern char GameData_223da50;
extern char GameData_223da90;
extern int GameData_223d960;
extern int GameData_223d970;
extern int GameData_223d9a0;
extern int GameData_223d9b0;
extern int GameData_223da70;
extern int GameData_223da80;
extern int GameData_223dab0;
extern int GameData_223dac0;
float fmodf(float, float);
bool UnitNatives_753070(__int64 a1, int a2, int a3, __int64 a4);
__int64 UnitNatives_753e40(int* a1, unsigned int* a2, __int64 a3, int a4,
                           unsigned int a5);
bool UnitNatives_754280(unsigned int* a1, unsigned int* a2, __int64 a3, int a4,
                        int a5, int a6, int a7, int a8);
__int64 UnitNatives_754da0(__int64 result, int a2, int a3);
__int64 UnitNatives_754f50(__int64 a1, __int64 a2);
__int64 UnitNatives_7551a0(__int64 a1, unsigned __int8 a2);
__int64 UnitNatives_7553f0(__int64 result, int a2, int a3, char a4);
__int64 UnitNatives_117be60(int a1, __int64 a2, char a3);
__int64 UnitNatives_117bf80(__int64 a1, __int64 a2, char a3);
_QWORD* UnitNatives_117d000(int a1, unsigned int a2, unsigned int a3,
                            unsigned int a4, __int64 a5, __int64 a6);
_QWORD* UnitNatives_117d280(int a1, unsigned int a2, __int64 a3);
__int64 UnitNatives_117d4a0();
__int64 UnitNatives_117da60(__int64 a1);
__int64 UnitNatives_117ee00(__int64 a1);
_QWORD* UnitNatives_117f550(int a1, unsigned int a2, unsigned int a3,
                            __int64 a4, char a5);
__int64 UnitNatives_1181ce0(int a1);
__int64 UnitNatives_1181e00(__int64 a1);
_QWORD* UnitNatives_1182020(int a1, __int64 a2, unsigned int a3,
                            unsigned int a4);
__int64 UnitNatives_1182d90(__int64 result, unsigned int a2, __int64 a3,
                            __int64 a4);
_BYTE* UnitNatives_1182f20(__int64 a1, unsigned int a2, __int64 a3, __int64 a4);
_QWORD* UnitNatives_1184f50(__int64 a1);
_QWORD* UnitNatives_11857b0(int a1, int a2, __int64 a3, unsigned int a4);
_QWORD* UnitNatives_11859d0(int a1, unsigned int a2, unsigned int a3,
                            __int64 a4, unsigned int a5);
_QWORD* UnitNatives_1185d70(int a1, unsigned int a2, __int64 a3,
                            unsigned int a4);
__int64 UnitNatives_11873e0(__int64 result, char a2);
_BYTE* UnitNatives_1187600(__int64 a1, char a2);
__int64 UnitNatives_1187e60(__int64 a1, __int64 a2, char a3);
_QWORD* UnitNatives_1188050(__int64 a1);
__int64 GameRoutine_747df0_alt1(_QWORD, _QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_747df0");
__int64 GameRoutine_748f80_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_748f80");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 unit_GetMoveToPos_117fa70(int a1, unsigned int a2, unsigned int a3);
__int64 unit_GetMoveToPos_117fac0(__int64 a1, unsigned int a2, unsigned int a3);
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 GameRoutine_1226ec0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c47b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 UnitActor_819400(_QWORD);
__int64 Unit_6cd120(__int64, char, unsigned int*);
__int64 game_90f080(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_UnitActor_TryReload(_QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64* GameData_212cec0;
extern __int64* GameData_21309c8[5];
extern __int64 game_GameModeData_instance_;
void GameRoutine_90f160();
__int64 unit_Transfer_117ea10(__int64 result, unsigned int a2);
__int64 unit_Transfer_117eba0(__int64 a1, unsigned int a2);
_QWORD* unit_SetRageTarget(int a1, unsigned int a2, __int64 a3, char a4);
__int64 unit_CancelRageTarget(__int64 result);
__int64 unit_Delete_11853f0(__int64 result);
__int64 unit_Delete_1185560(__int64 a1);

bool UnitNatives_753070(__int64 a1, int a2, int a3, __int64 a4)
{
  _BOOL8 result;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  char v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  result = false;
  v6 = GameData_212ce98[0];
  v7 = *GameData_212ce98[0];
  if (*(unsigned __int8*)(*GameData_212ce98[0] + 26) >
          (unsigned int)(unsigned __int8)(a2 - *(_BYTE*)(*GameData_212ce98[0] +
                                                         24)) &&
      *(unsigned __int8*)(v7 + 27) >
          (unsigned int)(unsigned __int8)(a3 - *(_BYTE*)(v7 + 25))) {
    v8 = *(_QWORD*)(v7 + 72);
    v9 = a2 + 32 * a3;
    v11 = a2;
    if ((unsigned int)v9 >= 0x400) {
      v12 = 0;
    }
    else {
      v12 = (unsigned int)v9;
    }
    v13 = GameData_212c930;
    v14 = GameRoutine_68e930(
        *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                   8LL *
                       *(unsigned __int16*)(v8 + 2LL * (unsigned int)v12 + 8)),
        a1);
    if ((*(unsigned __int8*)(v14 + 62) | *(unsigned __int8*)(v14 + 63)) != 0 ||
        *(unsigned __int8*)(*(_QWORD*)(v14 + 48) + 40LL) == 255 ||
        (*(_BYTE*)(v14 + 216) & 0x40) != 0 ||
        *(unsigned __int8*)(*(_QWORD*)(v14 + 48) +
                            (unsigned __int8)game_Unit_GetJobUnknown30(a1) +
                            32LL) == 255) {
      return false;
    }
    if (*(_BYTE*)(*(_QWORD*)(*v6 + 96) + v12 + 8) != 0) {
      v15 = *(_QWORD*)(GameData_21ca310 + 56) +
            2224LL * *(unsigned __int8*)(*(_QWORD*)(*v6 + 96) + v12 + 8);
      if (*(unsigned __int8*)(*(_QWORD*)(*v6 + 96) + v12 + 8) <= 0xFAu &&
          v15 != 2224 && *(_QWORD*)(v15 - 1832) != 0 && v15 - 2224 != a1) {
        return false;
      }
    }
    v18 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
    v19 = *(__int16*)(v18 + 2 * v12 + 12392);
    if (v19 < 0 || (v20 = *(_QWORD*)(v18 + 8)) == 0 ||
        (v21 = v20 + 144LL * (unsigned int)v19,
         ((*(__int64 (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21) & 1) == 0) ||
        (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v21 + 168LL))(v21) == 9 ||
        (v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 224LL))(v21)) == 0) {
      v22 = **(_QWORD**)(*v13 + 64);
    }
    return *(_BYTE*)(v22 + 57) != 14 &&
           (a4 == 0 || ((*(_DWORD*)(a4 + 4LL * (v9 >> 5)) >> v11) & 1) == 0);
  }
  return result;
}

__int64 UnitNatives_753e40(int* a1, unsigned int* a2, __int64 a3, int a4,
                           unsigned int a5)
{
  unsigned int v5;
  unsigned int v6;
  unsigned int v8;
  int v9;
  char* v10;
  char* v11;
  _DWORD* v12;
  unsigned int* v13;
  unsigned int v14;
  unsigned int v16;
  int v18;
  int v19;
  int v20;
  char* v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  bool v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  unsigned int v43;
  int v44;
  int v45;
  int v46;

  *a1 = -1;
  *a2 = -1;
  if (a3 == 0) {
    return *a1 >= 0;
  }
  v5 = *(char*)(a3 + 584);
  v6 = *(char*)(a3 + 585);
  if ((int)(a5 | a4) <= -1) {
    v8 = *(char*)(a3 + 585);
  }
  else {
    v8 = a5;
  }
  if ((int)(a5 | a4) <= -1) {
    v9 = *(char*)(a3 + 584);
  }
  else {
    v9 = a4;
  }
  v43 = v9;
  if (*(int*)(a3 + 592) < 2) {
    v13 = a2;
    v12 = a1;
    if (!UnitNatives_753070(a3, v9, v8, 0)) {
      goto LABEL_15;
    }
  LABEL_14:
    *v12 = v43;
    *v13 = v8;
    goto LABEL_15;
  }
  v10 = *(char**)(a3 + 600);
  v11 = *(char**)(a3 + 608);
  v13 = a2;
  v12 = a1;
  if (v10 == v11) {
    goto LABEL_14;
  }
  while (UnitNatives_753070(a3, v43 + *v10, v8 + v10[1], 0)) {
    v10 += 4;
    if (v10 == v11) {
      goto LABEL_14;
    }
  }

LABEL_15:
  v14 = v43;
  if ((UnitNatives_754280(v12, v13, a3, v43, v8, v5, v6, 4) & 1) != 0 ||
      (UnitNatives_754280(v12, v13, a3, v43, v8, v5, v6, 100) & 1) != 0) {
    return 1;
  }
  v16 = *(unsigned __int8*)(GameData_21ca300 + 29);
  v39 = *(unsigned __int8*)(GameData_21ca300 + 31);
  v40 = *(unsigned __int8*)(GameData_21ca300 + 28);
  v44 = *(unsigned __int8*)(GameData_21ca300 + 30);
  if (v16 <= v39 &&
      *(unsigned __int8*)(GameData_21ca300 + 28) <=
          (unsigned int)*(unsigned __int8*)(GameData_21ca300 + 30)) {
    v18 = 1677721600;
    v37 = v8;
    v38 = v6;
    do {
      v19 = v40;
      v45 = (v16 - v6) * (v16 - v6);
      v46 = (v16 - v8) * (v16 - v8);
      do {
        v20 = v45 + (v19 - v5) * (v19 - v5) +
              ((v46 + (v19 - v14) * (v19 - v14)) << 12);
        if (v20 < v18) {
          if (*(int*)(a3 + 592) < 2) {
            if (UnitNatives_753070(a3, v19, v16, 0)) {
            LABEL_27:
              v18 = v20;
              *a1 = v19;
              *a2 = v16;
            }
          }
          else {
            v21 = *(char**)(a3 + 600);
            v22 = *(char**)(a3 + 608);
            if (v21 == v22) {
              goto LABEL_27;
            }
            while (1) {
              v23 = *GameData_212ce98[0];
              if (*(unsigned __int8*)(*GameData_212ce98[0] + 26) <=
                      (unsigned int)(unsigned __int8)(v19 + *v21 -
                                                      *(_BYTE*)(*GameData_212ce98
                                                                    [0] +
                                                                24)) ||
                  *(unsigned __int8*)(v23 + 27) <=
                      (unsigned int)(unsigned __int8)(v16 + v21[1] -
                                                      *(_BYTE*)(v23 + 25))) {
                break;
              }
              v24 = *(_QWORD*)(v23 + 72);
              v25 = v19 + *v21 + 32 * (v16 + v21[1]);
              v26 = v5;
              if (v25 >= 0x400) {
                v27 = 0;
              }
              else {
                v27 = v25;
              }
              v28 = GameRoutine_68e930(
                  *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                             8LL *
                                 *(unsigned __int16*)(v24 +
                                                      2LL * (unsigned int)v27 +
                                                      8)),
                  a3);
              if ((*(unsigned __int8*)(v28 + 62) |
                   *(unsigned __int8*)(v28 + 63)) != 0 ||
                  *(unsigned __int8*)(*(_QWORD*)(v28 + 48) + 40LL) == 255 ||
                  (*(_BYTE*)(v28 + 216) & 0x40) != 0 ||
                  *(unsigned __int8*)(*(_QWORD*)(v28 + 48) +
                                      (unsigned __int8)
                                          game_Unit_GetJobUnknown30(a3) +
                                      32LL) == 255 ||
                  *(_BYTE*)(*(_QWORD*)(GameData_21ca300 + 96) + v27 + 8) != 0 &&
                      ((v29 =
                            *(_QWORD*)(GameData_21ca310 + 56) +
                            2224LL *
                                *(unsigned __int8*)(*(_QWORD*)(GameData_21ca300 +
                                                               96) +
                                                    v27 + 8),
                        *(unsigned __int8*)(*(_QWORD*)(GameData_21ca300 + 96) +
                                            v27 + 8) <= 0xFAu)
                           ? (v30 = v29 == 2224)
                           : (v30 = true),
                       !v30 && (*(_QWORD*)(v29 - 1832) != 0
                                    ? (v31 = v29 - 2224 == a3)
                                    : (v31 = true),
                                !v31))) {
                v14 = v43;
              LABEL_63:
                v5 = v26;
                break;
              }
              v32 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
              v33 = *(__int16*)(v32 + 2 * v27 + 12392);
              if (v33 < 0 || (v34 = *(_QWORD*)(v32 + 8)) == 0 ||
                  (v35 = v34 + 144LL * (unsigned int)v33,
                   ((*(__int64 (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35) &
                    1) == 0) ||
                  (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v35 + 168LL))(
                      v35) == 9 ||
                  (v36 = (*(__int64 (**)(__int64))(*(_QWORD*)v35 + 224LL))(
                       v35)) == 0) {
                v36 = **(_QWORD**)(GameData_21c9bd0 + 64);
              }
              v14 = v43;
              if (*(_BYTE*)(v36 + 57) == 14) {
                goto LABEL_63;
              }
              v21 += 4;
              v5 = v26;
              if (v21 == v22) {
                goto LABEL_27;
              }
            }
          }
        }
        v30 = v19++ == v44;
      } while (!v30);
      v6 = v38;
      v8 = v37;
      v30 = v16++ == v39;
    } while (!v30);
  }
  return *a1 >= 0;
}

bool UnitNatives_754280(unsigned int* a1, unsigned int* a2, __int64 a3, int a4,
                        int a5, int a6, int a7, int a8)
{
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v34;
  unsigned int v35;
  int v36;
  int v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v51;

  v11 = (_QWORD*)*GameData_212ce88[0];
  v12 = *(_QWORD*)(*GameData_212ce88[0] + 10752);
  v13 = *(_QWORD*)(*GameData_212ce88[0] + 10744);
  v14 = *GameData_212ce88[0] + 2696;
  v15 = ((v12 - v13) << 6) - 1;
  if (v12 == v13) {
    v15 = 0;
  }
  v16 = *(_QWORD*)(*GameData_212ce88[0] + 10776) +
        *(_QWORD*)(*GameData_212ce88[0] + 10768);
  if (v15 == v16) {
    GameRoutine_74cd60(v11 + 1342);
    v13 = v11[1343];
    v16 = v11[1347] + v11[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v13 + 8 * (v16 >> 9)) + 8 * (v16 & 0x1FF)) = v11[1];
  v11[1] = v14;
  ++v11[1347];
  v51 = 34048;
  if ((GameRoutine_748f80(GameData_21ca2f0, a3, a4, a5, a8, &v51) & 1) != 0) {
    v17 = *(unsigned __int8*)(GameData_21ca300 + 29);
    v45 = *(unsigned __int8*)(GameData_21ca300 + 31);
    if (v17 <= v45) {
      v18 = *(unsigned __int8*)(GameData_21ca300 + 30);
      v44 = *(unsigned __int8*)(GameData_21ca300 + 28);
      if (v44 <= v18) {
        v34 = 32 * v17;
        v35 = v18 + 1;
        v36 = -a4;
        v37 = 1677721600;
        v38 = *GameData_212ce88[0];
        do {
          v39 = v44;
          do {
            v40 = *(_QWORD*)(v38 + 8);
            if (v34 + v39 >= 0x400) {
              v41 = 0;
            }
            else {
              v41 = v34 + v39;
            }
            if (*(unsigned __int8*)(v40 + v41 + 64) != 255 &&
                (unsigned int)GameRoutine_747df0(v40, v39, v17,
                                                 *(_BYTE*)(v40 + 5)) != 255) {
              v42 = *(_QWORD*)(*GameData_212ce88[0] + 8);
              v43 = (v17 - a7) * (v17 - a7) + (v39 - a6) * (v39 - a6) +
                    (((v17 - a5) * (v17 - a5) + (v36 + v39) * (v36 + v39))
                     << 12) +
                    (*(unsigned __int8*)(v42 + v41 + 64) << 24);
              if (v43 <= v37 &&
                  (GameRoutine_747a00(v42, v39, v17, a3, 0) & 1) != 0) {
                v37 = v43;
                *a1 = v39;
                *a2 = v17;
              }
            }
            ++v39;
          } while (v35 != v39);
          v34 += 32;
          v24 = v17++ == v45;
        } while (!v24);
      }
    }
  }
  v19 = GameData_21ca2f0;
  v20 = *(_QWORD*)(GameData_21ca2f0 + 10776);
  v21 = *(_QWORD*)(GameData_21ca2f0 + 10768);
  v22 = *(_QWORD*)(GameData_21ca2f0 + 10744);
  v23 = *(_QWORD*)(GameData_21ca2f0 + 10752);
  v24 = v23 == v22;
  v25 = v20 - 1 + v21;
  v26 = v25 >> 9;
  v27 = v25 & 0x1FF;
  v28 = ((v23 - v22) << 6) - 1;
  v29 = *(_QWORD*)(v22 + 8 * v26);
  if (v24) {
    v28 = 0;
  }
  v30 = *(_QWORD*)(v29 + 8 * v27);
  *(_QWORD*)(GameData_21ca2f0 + 10776) = v20 - 1;
  *(_QWORD*)(v19 + 8) = v30;
  if ((unsigned __int64)(v28 - (v20 + v21) + 1) >= 0x400) {
    v31 = *(_QWORD*)(v23 - 8);
    if (v31 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v31);
      v23 = *(_QWORD*)(v19 + 10752);
    }
    *(_QWORD*)(v19 + 10752) = v23 - 8;
  }
  return (*a1 & 0x80000000) == 0;
}

__int64 UnitNatives_754da0(__int64 result, int a2, int a3)
{
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  unsigned int v26;

  if (result != 0) {
    v5 = result;
    v6 = GameData_212ce88[0];
    v7 = (_QWORD*)*GameData_212ce88[0];
    v8 = *(_QWORD*)(*GameData_212ce88[0] + 10752);
    v9 = *(_QWORD*)(*GameData_212ce88[0] + 10744);
    v10 = *GameData_212ce88[0] + 2696;
    v11 = ((v8 - v9) << 6) - 1;
    if (v8 == v9) {
      v11 = 0;
    }
    v12 = *(_QWORD*)(*GameData_212ce88[0] + 10776) +
          *(_QWORD*)(*GameData_212ce88[0] + 10768);
    if (v11 == v12) {
      GameRoutine_74cd60(v7 + 1342);
      v9 = v7[1343];
      v12 = v7[1347] + v7[1346];
    }
    *(_QWORD*)(*(_QWORD*)(v9 + 8 * (v12 >> 9)) + 8 * (v12 & 0x1FF)) = v7[1];
    v7[1] = v10;
    v13 = *v6;
    ++v7[1347];
    v14 = *(char*)(v5 + 584);
    v15 = *(char*)(v5 + 585);
    v26 = 1048578;
    GameRoutine_748f80(v13, v5, v14, v15, -1, &v26);
    v16 = (_QWORD*)*v6;
    v17 = *(_QWORD*)(*v6 + 10744);
    v18 = *(_QWORD*)(*v6 + 10752);
    v19 = *(_QWORD*)(*v6 + 10768);
    v20 = ((v18 - v17) << 6) - 1;
    if (v18 == v17) {
      v20 = 0;
    }
    result =
        (*(_DWORD*)(*(_QWORD*)(*v6 + 8) + 4LL * ((a2 + 32 * a3) >> 5) + 2120) >>
         a2) &
        1;
    v21 = v16[1347];
    v22 = *(_QWORD*)(*(_QWORD*)(v17 +
                                8 * ((unsigned __int64)(v21 - 1 + v19) >> 9)) +
                     8 * ((v21 - 1 + v19) & 0x1FF));
    v16[1347] = v21 - 1;
    v16[1] = v22;
    if ((unsigned __int64)(v20 - (v21 + v19) + 1) >= 0x400) {
      v23 = *(_QWORD*)(v18 - 8);
      if (v23 != 0) {
        v24 = result;
        v25 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v23);
        v18 = v16[1344];
        result = v24;
      }
      v16[1344] = v18 - 8;
    }
  }
  return result;
}

__int64 UnitNatives_754f50(__int64 a1, __int64 a2)
{
  char v2;
  __int64 v3;
  int v4;
  int v5;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD v34[4];
  _QWORD* v35;
  char v36;

  v2 = 0;
  v36 = 0;
  if (a1 == 0 || a2 == 0) {
    return v2 & 1;
  }
  v3 = *(_QWORD*)(a2 + 440);
  if (v3 != 0) {
    v4 = *(unsigned __int8*)(v3 + 16);
  }
  else {
    v4 = 9;
  }
  v5 = *(unsigned __int8*)(*(_QWORD*)(a1 + 440) + 16LL);
  if (v5 == v4) {
    goto LABEL_10;
  }
  if (*(_BYTE*)(*(_QWORD*)(a1 + 440) + 16LL) != 0) {
    if (v4 == 0 && v5 == 3) {
      goto LABEL_10;
    }
  }
  else if (v4 == 3) {
  LABEL_10:
    v2 = 0;
    return v2 & 1;
  }
  v7 = GameData_212ce88[0];
  v8 = (_QWORD*)*GameData_212ce88[0];
  v9 = *(_QWORD*)(*GameData_212ce88[0] + 10752);
  v10 = *(_QWORD*)(*GameData_212ce88[0] + 10744);
  v11 = *GameData_212ce88[0] + 2696;
  v12 = ((v9 - v10) << 6) - 1;
  if (v9 == v10) {
    v12 = 0;
  }
  v13 = *(_QWORD*)(*GameData_212ce88[0] + 10776) +
        *(_QWORD*)(*GameData_212ce88[0] + 10768);
  if (v12 == v13) {
    v14 = a1;
    GameRoutine_74cd60(v8 + 1342);
    v10 = v8[1343];
    a1 = v14;
    v13 = v8[1347] + v8[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v10 + 8 * (v13 >> 9)) + 8 * (v13 & 0x1FF)) = v8[1];
  v8[1] = v11;
  v15 = v8[1347];
  LODWORD(v34[0]) = 1048578;
  v8[1347] = v15 + 1;
  GameRoutine_748f80(*v7, a1, *(char*)(a1 + 584), *(char*)(a1 + 585), -1,
                     (unsigned int*)v34);
  v16 = (unsigned int)*(char*)(a2 + 584);
  v17 = (unsigned int)*(char*)(a2 + 585);
  v35 = v34;
  v34[0] = GameData_1f957d8;
  v34[1] = &v36;
  GameRoutine_6c8a80(a2, v16, v17, v34);
  if (v35 == v34) {
    v18 = 32;
    goto LABEL_20;
  }
  if (v35 != nullptr) {
    v18 = 40;
  LABEL_20:
    (*(void (**)(void*))(*v35 + v18))(v35);
  }
  v19 = (_QWORD*)*v7;
  v20 = v19[1347];
  v21 = v19[1346];
  v22 = v19[1343];
  v23 = v19[1344];
  v24 = v23 == v22;
  v25 = v20 - 1 + v21;
  v26 = v25 >> 9;
  v27 = v25 & 0x1FF;
  v28 = ((v23 - v22) << 6) - 1;
  v29 = *(_QWORD*)(v22 + 8 * v26);
  if (v24) {
    v28 = 0;
  }
  v30 = *(_QWORD*)(v29 + 8 * v27);
  v19[1347] = v20 - 1;
  v19[1] = v30;
  if ((unsigned __int64)(v28 - (v20 + v21) + 1) >= 0x400) {
    v31 = *(_QWORD*)(v23 - 8);
    if (v31 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v31);
      v23 = v19[1344];
    }
    v19[1344] = v23 - 8;
  }
  v2 = v36;
  return v2 & 1;
}

__int64 UnitNatives_7551a0(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  int v11;
  char v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD v36[4];
  _QWORD* v37;
  char v38;

  v38 = 0;
  if (a1 == 0) {
    v12 = 0;
    return v12 & 1;
  }
  v2 = a2;
  v4 = GameData_212ce88[0];
  v5 = (_QWORD*)*GameData_212ce88[0];
  v6 = *(_QWORD*)(*GameData_212ce88[0] + 10752);
  v7 = *(_QWORD*)(*GameData_212ce88[0] + 10744);
  v8 = *GameData_212ce88[0] + 2696;
  v9 = ((v6 - v7) << 6) - 1;
  if (v6 == v7) {
    v9 = 0;
  }
  v10 = *(_QWORD*)(*GameData_212ce88[0] + 10776) +
        *(_QWORD*)(*GameData_212ce88[0] + 10768);
  if (v9 == v10) {
    GameRoutine_74cd60(v5 + 1342);
    v7 = v5[1343];
    v10 = v5[1347] + v5[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v7 + 8 * (v10 >> 9)) + 8 * (v10 & 0x1FF)) = v5[1];
  v5[1] = v8;
  ++v5[1347];
  v11 = *(unsigned __int8*)(*(_QWORD*)(a1 + 440) + 16LL);
  if (v11 != v2) {
    if (*(_BYTE*)(*(_QWORD*)(a1 + 440) + 16LL) != 0) {
      if (v2 != 0 || v11 != 3) {
      LABEL_13:
        v13 = *v4;
        v14 = *(char*)(a1 + 584);
        v15 = *(char*)(a1 + 585);
        LODWORD(v36[0]) = 1048578;
        GameRoutine_748f80(v13, a1, v14, v15, -1, (unsigned int*)v36);
        v16 =
            *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 24LL * v2 + 556000);
        while (v16 != 0) {
          v18 = v16;
          v19 = (unsigned int)*(char*)(v16 + 584);
          v20 = (unsigned int)*(char*)(v16 + 585);
          v16 = *(_QWORD*)(v16 + 432);
          v36[0] = GameData_1f95858;
          v36[1] = &v38;
          v37 = v36;
          GameRoutine_6c8a80(v18, v19, v20, v36);
          if (v37 == v36) {
            v17 = 32;
          }
          else {
            if (v37 == nullptr) {
              continue;
            }
            v17 = 40;
          }
          (*(void (**)(void*))(*v37 + v17))(v37);
        }
      }
    }
    else if (v2 != 3) {
      goto LABEL_13;
    }
  }
  v21 = (_QWORD*)*v4;
  v22 = *(_QWORD*)(*v4 + 10776);
  v23 = *(_QWORD*)(*v4 + 10768);
  v24 = *(_QWORD*)(*v4 + 10744);
  v25 = *(_QWORD*)(*v4 + 10752);
  v26 = v25 == v24;
  v27 = v22 - 1 + v23;
  v28 = v27 >> 9;
  v29 = v27 & 0x1FF;
  v30 = ((v25 - v24) << 6) - 1;
  v31 = *(_QWORD*)(v24 + 8 * v28);
  if (v26) {
    v30 = 0;
  }
  v32 = *(_QWORD*)(v31 + 8 * v29);
  v21[1347] = v22 - 1;
  v21[1] = v32;
  if ((unsigned __int64)(v30 - (v22 + v23) + 1) >= 0x400) {
    v33 = *(_QWORD*)(v25 - 8);
    if (v33 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v33);
      v25 = v21[1344];
    }
    v21[1344] = v25 - 8;
  }
  v12 = v38;
  return v12 & 1;
}

__int64 UnitNatives_7553f0(__int64 result, int a2, int a3, char a4)
{
  __int64 v6;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  char v14;
  bool v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  int v37;

  if (result != 0) {
    v6 = result;
    v7 = GameData_212ce88[0];
    v8 = (_QWORD*)*GameData_212ce88[0];
    v9 = *(_QWORD*)(*GameData_212ce88[0] + 10752);
    v10 = *(_QWORD*)(*GameData_212ce88[0] + 10744);
    v11 = *GameData_212ce88[0] + 2696;
    v12 = ((v9 - v10) << 6) - 1;
    if (v9 == v10) {
      v12 = 0;
    }
    v13 = *(_QWORD*)(*GameData_212ce88[0] + 10776) +
          *(_QWORD*)(*GameData_212ce88[0] + 10768);
    if (v12 == v13) {
      v14 = a4;
      GameRoutine_74cd60(v8 + 1342);
      v10 = v8[1343];
      a4 = v14;
      v13 = v8[1347] + v8[1346];
    }
    v15 = (a4 & 1) == 0;
    *(_QWORD*)(*(_QWORD*)(v10 + 8 * (v13 >> 9)) + 8 * (v13 & 0x1FF)) = v8[1];
    v8[1] = v11;
    v16 = *v7;
    ++v8[1347];
    v17 = *(char*)(v6 + 584);
    v18 = *(char*)(v6 + 585);
    if (v15) {
      v19 = 3145728;
    }
    else {
      v19 = 3145730;
    }
    v37 = v19;
    GameRoutine_748f80(v16, v6, v17, v18, -1, (unsigned int*)&v37);
    v20 = (_QWORD*)*v7;
    LODWORD(v21) = a2 + 32 * a3;
    if ((unsigned int)v21 >= 0x400) {
      v21 = 0;
    }
    else {
      v21 = (unsigned int)v21;
    }
    v22 = v20[1];
    if (*(unsigned __int8*)(v22 + v21 + 64) == 255) {
      result = 0;
    }
    else {
      v23 = GameRoutine_747df0(v22, a2, a3, *(_BYTE*)(v22 + 5));
      v20 = (_QWORD*)*v7;
      result = v23 != 255;
    }
    v24 = v20[1347];
    v25 = v20[1346];
    v26 = v20[1343];
    v27 = v20[1344];
    v15 = v27 == v26;
    v28 = v24 - 1 + v25;
    v29 = v28 >> 9;
    v30 = v28 & 0x1FF;
    v31 = ((v27 - v26) << 6) - 1;
    v32 = *(_QWORD*)(v26 + 8 * v29);
    if (v15) {
      v31 = 0;
    }
    v33 = *(_QWORD*)(v32 + 8 * v30);
    v20[1347] = v24 - 1;
    v20[1] = v33;
    if ((unsigned __int64)(v31 - (v24 + v25) + 1) >= 0x400) {
      v34 = *(_QWORD*)(v27 - 8);
      if (v34 != 0) {
        v35 = result;
        v36 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v36 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v34);
        v27 = v20[1344];
        result = v35;
      }
      v20[1344] = v27 - 8;
    }
  }
  return result;
}

__int64 UnitNatives_117be60(int a1, __int64 a2, char a3)
{
  __int64 v5;
  __int64 result;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (a1 < 0) {
    return as_string_c_str(a2);
  }
  LOBYTE(v9) = a1;
  v5 = game_UnitPool_Get(&v9);
  result = as_string_c_str(a2);
  if (v5 != 0 && *(_QWORD*)(v5 + 392) != 0) {
    v12 = 0;
    v10 = result;
    v9 = game_HashString(result);
    result = UnitItem_6e8800(&v12, &v9);
    if ((_WORD)v12 != 0) {
      v10 = 0;
      v11 = 0;
      v9 = 0;
      v7 = (a3 & 1) != 0 ? 2 : 0;
      BYTE3(v12) = BYTE3(v12) & 0xFD | v7;
      GameRoutine_8aef60(&v9, &v12);
      result = GameRoutine_8ae640(&v9, v5, 0);
      if (v9 != 0) {
        v10 = v9;
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v8 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v9);
      }
    }
  }
  return result;
}

__int64 UnitNatives_117bf80(__int64 a1, __int64 a2, char a3)
{
  _BYTE* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v5 = (_BYTE*)as_string_c_str(a1);
  if (*v5 == 0) {
    return as_string_c_str(a2);
  }
  GameRoutine_682bc0(&v17, v5);
  if (v17 == 0) {
    return as_string_c_str(a2);
  }
  v6 = *(_QWORD**)(GameData_21ca310 + 56);
  if (v6 == nullptr) {
    return as_string_c_str(a2);
  }
  v7 = 250;
  while (1) {
    v8 = v6[55];
    if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && v6[49] == v17) {
      break;
    }
    v9 = v6[333];
    if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && v6[327] == v17) {
      v6 += 278;
      break;
    }
    v10 = v6[611];
    if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 && v6[605] == v17) {
      v13 = 4448;
      goto LABEL_26;
    }
    v11 = v6[889];
    if (v11 != 0 && *(_BYTE*)(v11 + 16) != 9 && v6[883] == v17) {
      v13 = 6672;
      goto LABEL_26;
    }
    v12 = v6[1167];
    if (v12 != 0 && *(_BYTE*)(v12 + 16) != 9 && v6[1161] == v17) {
      v13 = 8896;
    LABEL_26:
      v6 = (_QWORD*)((char*)v6 + v13);
      break;
    }
    v6 += 1390;
    v7 -= 5;
    if (v7 == 0) {
      return as_string_c_str(a2);
    }
  }
  result = as_string_c_str(a2);
  if (v6[49] != 0) {
    v20 = 0;
    v18 = result;
    v17 = game_HashString(result);
    result = UnitItem_6e8800(&v20, &v17);
    if ((_WORD)v20 != 0) {
      v18 = 0;
      v19 = 0;
      v17 = 0;
      v15 = (a3 & 1) != 0 ? 2 : 0;
      BYTE3(v20) = BYTE3(v20) & 0xFD | v15;
      GameRoutine_8aef60(&v17, &v20);
      result = GameRoutine_8ae640(&v17, v6, 0);
      if (v17 != 0) {
        v18 = v17;
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v17);
      }
    }
  }
  return result;
}

_QWORD* UnitNatives_117d000(int a1, unsigned int a2, unsigned int a3,
                            unsigned int a4, __int64 a5, __int64 a6)
{
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* result;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BYTE v37[4];
  __int64 v38;

  v12 = as_g_script_manager_ptr;
  v13 = *as_g_script_manager_ptr;
  v14 = *(
      _QWORD*)(v13 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 472LL))(v14);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v15 + 24) + 456LL))(
           *(_QWORD*)(v15 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  if ((a1 & 0x80000000) == 0) {
    v37[0] = a1;
    v16 = game_UnitPool_Get(v37);
    if (v16 != 0 && *(_QWORD*)(v16 + 392) != 0) {
      v17 = *(_QWORD*)(v16 + 440);
      if (v17 != 0 && *(unsigned __int8*)(v17 + 16) <= 3u) {
        v18 = v16;
        v19 = as_string_c_str(a5);
        v20 = as_string_c_str(a6);
        if (*(_QWORD*)(v18 + 392) != 0) {
          v21 = *(_QWORD*)(v18 + 440);
          if (v21 != 0 && *(unsigned __int8*)(v21 + 16) <= 3u &&
              *GameData_212ce88[0] != 0) {
            v22 = v20;
            v23 = ((__int64 (*)(void))game_script_GetCurrentProc)();
            if (v23 != 0) {
              v24 = v23;
              v38 = 0;
              v25 = UnitNatives_753e40((char*)&v38 + 4, &v38, v18, a2, a3);
              if ((GameRoutine_80a5b0(v25) & 1) != 0) {
                GameRoutine_1189190(v18, HIDWORD(v38), (unsigned int)v38);
              }
              else {
                v27 = GameRoutine_7693e0(v24, v18, HIDWORD(v38),
                                         (unsigned int)v38, a4, v19, v22);
                GameRoutine_122f360(v18);
                if (v27 != 0) {
                  v28 = game_script_StartWaitProc(v27);
                  v29 = game_script_GetCurrentProc(v28);
                  GameRoutine_657c40(v29);
                  v30 = *v12;
                  v31 = *(_QWORD*)(v30 +
                                   8LL * (*(unsigned int (**)(__int64))(
                                             *(_QWORD*)as_g_thread_info +
                                             72LL))(as_g_thread_info) +
                                   4384);
                  v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 472LL))(v31);
                  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
                      **(_QWORD**)(v32 + 24) + 448LL))(*(_QWORD*)(v32 + 24), 0);
                }
              }
            }
          }
        }
      }
    }
  }
  v33 = *v12;
  v34 = *(
      _QWORD*)(v33 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v34 != 0) {
    v35 = (*(__int64 (**)(__int64))(*(_QWORD*)v34 + 472LL))(v34);
  }
  else {
    v35 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v35 + 24) + 448LL))(
      *(_QWORD*)(v35 + 24), 1);
  result = *(_QWORD**)(v35 + 2240);
  *(_QWORD*)(v35 + 2240) = 0;
  if (result == (_QWORD*)(v35 + 2208)) {
    v36 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v36 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v36))((__int64)result);
}

_QWORD* UnitNatives_117d280(int a1, unsigned int a2, __int64 a3)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
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
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* result;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _BYTE v28[4];

  v6 = as_g_script_manager_ptr;
  v7 = *as_g_script_manager_ptr;
  v8 = *(
      _QWORD*)(v7 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 472LL))(v8);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v9 + 24) + 456LL))(
           *(_QWORD*)(v9 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  if ((a1 & 0x80000000) == 0) {
    v28[0] = a1;
    v10 = game_UnitPool_Get(v28);
    if (v10 != 0 && *(_QWORD*)(v10 + 392) != 0) {
      v11 = *(_QWORD*)(v10 + 440);
      if (v11 != 0 && *(unsigned __int8*)(v11 + 16) <= 3u) {
        v12 = v10;
        v13 = as_string_c_str(a3);
        if (*(_QWORD*)(v12 + 392) != 0) {
          v14 = *(_QWORD*)(v12 + 440);
          if (v14 != 0 && *(unsigned __int8*)(v14 + 16) <= 3u) {
            v15 = v13;
            v16 = game_script_GetCurrentProc(v13);
            if (v16 != 0) {
              v17 = GameRoutine_769b20(v16, v12, a2, v15);
              GameRoutine_122f360(v12);
              if (v17 != 0) {
                v18 = game_script_StartWaitProc(v17);
                v19 = game_script_GetCurrentProc(v18);
                GameRoutine_657c40(v19);
                v20 = *v6;
                v21 = *(_QWORD*)(v20 +
                                 8LL * (*(unsigned int (**)(__int64))(
                                           *(_QWORD*)as_g_thread_info + 72LL))(
                                           as_g_thread_info) +
                                 4384);
                v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 472LL))(v21);
                return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
                    **(_QWORD**)(v22 + 24) + 448LL))(*(_QWORD*)(v22 + 24), 0);
              }
            }
          }
        }
      }
    }
  }
  v24 = *v6;
  v25 = *(
      _QWORD*)(v24 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v25 != 0) {
    v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 472LL))(v25);
  }
  else {
    v26 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v26 + 24) + 448LL))(
      *(_QWORD*)(v26 + 24), 1);
  result = *(_QWORD**)(v26 + 2240);
  *(_QWORD*)(v26 + 2240) = 0;
  if (result == (_QWORD*)(v26 + 2208)) {
    v27 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v27 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v27))((__int64)result);
}

__int64 UnitNatives_117d4a0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  float v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 24) + 456LL))(
           *(_QWORD*)(v3 + 24)) &
       1) != 0) {
    if (GameData_21d21c0 == 0) {
      v11 = *v0;
      v12 = *(_QWORD*)(v11 +
                       8LL * (*(unsigned int (**)(__int64))(
                                 *(_QWORD*)as_g_thread_info + 72LL))(
                                 as_g_thread_info) +
                       4384);
      if (v12 != 0) {
        v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 472LL))(v12);
      }
      else {
        v13 = 0;
      }
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v13 + 24) + 448LL))(
          *(_QWORD*)(v13 + 24), 1);
      result = *(_QWORD*)(v13 + 2240);
      *(_QWORD*)(v13 + 2240) = 0;
      if (result == v13 + 2208) {
        v14 = 32;
      }
      else {
        if (result == 0) {
          return result;
        }
        v14 = 40;
      }
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + v14))(
          (__int64)result);
    }
    v4 = GameData_212cfb0[0];
    v5 = (_QWORD*)*GameData_212cfb0[0];
    if (*GameData_212cfb0[0] != 0 ||
        (v5 = *(_QWORD**)GameData_212eb20[0],
         *(_QWORD*)GameData_212eb20[0] != 0) ||
        (v5 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
      v6 = v5[10];
      if (v6 != 0) {
        v7 = *(_QWORD*)(*(_QWORD*)(v5[6] + 8 * ((v6 + v5[9] - 1) / 0x33uLL)) +
                        80 * ((v6 + v5[9] - 1) % 0x33uLL) + 72);
        goto LABEL_23;
      }
    }
    else if (game_hub_ProcHubSeqView_instance_ != 0) {
      v7 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
      goto LABEL_23;
    }
    v7 = 0;
  LABEL_23:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_223d9c0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_223d9c0) != 0) {
      GameData_223d940 = 14;
      GameData_223d960 = 0;
      GameData_223d968 = 0;
      GameData_223d970 = 0;
      GameData_223d978 = 0;
      GameData_223d980 = 0;
      GameData_223d9a8 = 0;
      GameData_223d9b0 = 0;
      GameData_223d9b8 = 0;
      GameData_223d988 = 0;
      GameData_223d990 = 0;
      GameData_223d998 = 0;
      GameData_223d9a0 = 0;
      GameData_223d948 = 0;
      GameData_223d950 = 16;
      GameData_223d958 = 1;
      __cxa_guard_release(&GameData_223d9c0);
    }
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         152, 16, 0);
    v16 = GameData_212c608[0];
    *(_QWORD*)(v15 + 96) = 0;
    *(_QWORD*)(v15 + 104) = 0;
    *(_QWORD*)(v15 + 112) = 0;
    *(_QWORD*)(v15 + 120) = 0;
    *(_QWORD*)(v15 + 128) = 0;
    *(_WORD*)(v15 + 136) = 0;
    *(_QWORD*)(v15 + 16) = 0;
    *(_QWORD*)(v15 + 24) = "NULL";
    *(_QWORD*)(v15 + 138) = 0;
    *(_QWORD*)(v15 + 144) = 0;
    *(_QWORD*)(v15 + 32) = 0;
    *(_QWORD*)(v15 + 40) = 0;
    *(_QWORD*)(v15 + 48) = 0;
    *(_QWORD*)(v15 + 56) = 0;
    *(_QWORD*)(v15 + 64) = 0;
    *(_QWORD*)(v15 + 72) = 0;
    *(_QWORD*)(v15 + 80) = 0;
    *(_QWORD*)(v15 + 88) = 0;
    *(_QWORD*)v15 = v16 + 16;
    *(_QWORD*)(v15 + 8) = 0;
    game_ProcInst_Register(v15);
    *(_QWORD*)v15 = anonymous_MoveWaitProc_vtable;
    v17 = GameRoutine_657850(v15, &GameData_223d940, "MoveWaitProc", 1, v7);
    game_script_StartWaitProc(v17);
    v18 = (_QWORD*)*v4;
    if (*v4 != 0 ||
        (v18 = *(_QWORD**)GameData_212eb20[0],
         *(_QWORD*)GameData_212eb20[0] != 0) ||
        (v18 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
      v19 = v18[10];
      if (v19 != 0) {
        v20 =
            *(_QWORD*)(*(_QWORD*)(v18[6] + 8 * ((v19 + v18[9] - 1) / 0x33uLL)) +
                       80 * ((v19 + v18[9] - 1) % 0x33uLL) + 72);
      }
      else {
        v20 = 0;
      }
    }
    else {
      v20 = game_hub_ProcHubSeqView_instance_;
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        v20 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
      }
    }
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v21 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v22 = 2)
             : (v22 = 3),
         (v22 & v21) != 0)) {
      v23 = *(float*)(v20 + 144);
      if (v23 < 1.0f) {
        v23 = 1.0f;
      }
      *(_WORD*)(v20 + 136) = *(_WORD*)(v20 + 136) & 0xFF97 | 0x20;
      *(float*)(v20 + 144) = v23;
    }
    v24 = *v0;
    v25 = *(_QWORD*)(v24 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 472LL))(v25);
    return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v26 + 24) + 448LL))(
        *(_QWORD*)(v26 + 24), 0);
  }
  result = game_script_WaitProc();
  if ((result & 1) == 0) {
    v9 = *GameData_212ce98[0];
    if (*GameData_212ce98[0] != 0) {
      v10 = *(_QWORD*)(v9 + 96);
      Image_72b4a0(v10);
      Image_72b6c0(v10);
      return Image_72a260(*(_QWORD*)(v9 + 152));
    }
  }
  return result;
}

__int64 UnitNatives_117da60(__int64 a1)
{
  _BYTE* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v15;
  __int64 v16;

  v1 = (_BYTE*)as_string_c_str(a1);
  if (*v1 == 0) {
    return 0;
  }
  GameRoutine_682bc0(&v16, v1);
  if (v16 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(GameData_21ca310 + 56);
  if (v2 == 0) {
    return 0;
  }
  v3 = 250;
  while (1) {
    v4 = *(_QWORD*)(v2 + 440);
    if (v4 != 0) {
      v5 = *(unsigned __int8*)(v4 + 16);
      if (v5 != 9 && *(_QWORD*)(v2 + 392) == v16) {
        goto LABEL_25;
      }
    }
    v6 = *(_QWORD*)(v2 + 2664);
    if (v6 != 0) {
      v7 = *(unsigned __int8*)(v6 + 16);
      if (v7 != 9 && *(_QWORD*)(v2 + 2616) == v16) {
        v2 += 2224;
        if (v7 > 3) {
          return 0;
        }
        goto LABEL_26;
      }
    }
    v8 = *(_QWORD*)(v2 + 4888);
    if (v8 != 0) {
      v5 = *(unsigned __int8*)(v8 + 16);
      if (v5 != 9 && *(_QWORD*)(v2 + 4840) == v16) {
        v2 += 4448;
      LABEL_25:
        if (v5 > 3) {
          return 0;
        }
        goto LABEL_26;
      }
    }
    v9 = *(_QWORD*)(v2 + 7112);
    if (v9 != 0) {
      v10 = *(unsigned __int8*)(v9 + 16);
      if (v10 != 9 && *(_QWORD*)(v2 + 7064) == v16) {
        break;
      }
    }
    v11 = *(_QWORD*)(v2 + 9336);
    if (v11 != 0) {
      v10 = *(unsigned __int8*)(v11 + 16);
      if (v10 != 9 && *(_QWORD*)(v2 + 9288) == v16) {
        v12 = 8896;
        goto LABEL_29;
      }
    }
    v2 += 11120;
    v3 -= 5;
    if (v3 == 0) {
      return 0;
    }
  }
  v12 = 6672;

LABEL_29:
  v2 += v12;
  if (v10 > 3) {
    return 0;
  }

LABEL_26:
  if (*(float*)(v2 + 124) == *(float*)(v2 + 120)) {
    v13 = (*(float (**)(__int64))(*(_QWORD*)(v2 + 112) + 16LL))(v2 + 112);
  }
  else {
    v13 = *(float*)(v2 + 144);
  }
  v15 = fmodf(v13, 360.0);
  if (v13 < 0.0) {
    v15 = v15 + 360.0;
  }
  if (v15 < 22.5) {
    return 4;
  }
  if (v15 < 67.5) {
    return 12;
  }
  if (v15 < 112.5) {
    return 8;
  }
  if (v15 < 157.5) {
    return 9;
  }
  if (v15 < 202.5) {
    return 1;
  }
  if (v15 < 247.5) {
    return 3;
  }
  if (v15 < 292.5) {
    return 2;
  }
  if (v15 >= 337.5) {
    return 4;
  }
  return 6;
}

__int64 unit_Transfer_117ea10(__int64 result, unsigned int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BYTE v11[4];
  _BYTE v12[4];
  int v13;
  int v14;

  if ((result & 0x80000000) != 0) {
    return result;
  }
  v12[0] = result;
  result = game_UnitPool_Get(v12);
  if (result == 0) {
    return result;
  }
  v3 = *(_QWORD*)(result + 392);
  v4 = result;
  if (v3 == 0) {
    return result;
  }
  v5 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] == 0) {
    v11[0] = a2;
    v7 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if (game_GameModeData_instance_ != 0 &&
          v3 == *(_QWORD*)(game_GameModeData_instance_ + 96) ||
      (*(_BYTE*)(result + 418) & 8) != 0) {
    LOBYTE(v6) = 0;
  }
  else {
    v13 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    v6 = game_HasSkill(result + 1744, &v13) ^ 1;
  }
  result = GameRoutine_1226ec0(v5, v4, a2, v6 & 1);
  v3 = *(_QWORD*)(v4 + 392);
  v11[0] = a2;
  if (v3 != 0) {
    v7 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_15;
    }
  LABEL_14:
    if (v3 == *(_QWORD*)(v7 + 96)) {
    LABEL_17:
      if ((unsigned __int8)a2 != 9) {
        v8 = 0;
        goto LABEL_20;
      }
    LABEL_19:
      v8 = 1;
    LABEL_20:
      result = GameRoutine_6c47b0(v4, v11, v8, 0);
      if ((result & 1) != 0) {
        v9 = *GameData_212ce98[0];
        if (*GameData_212ce98[0] != 0) {
          v10 = *(_QWORD*)(v9 + 96);
          Image_72b4a0(v10);
          Image_72b6c0(v10);
          Image_72a260(*(_QWORD*)(v9 + 152));
        }
        return game_UnitActor_TryReload(v4);
      }
      return result;
    }
  LABEL_15:
    if ((*(_BYTE*)(v4 + 418) & 8) == 0) {
      v14 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
      if ((game_HasSkill(v4 + 1744, &v14) & 1) == 0) {
        goto LABEL_19;
      }
    }
    goto LABEL_17;
  }
  return result;
}

__int64 unit_Transfer_117eba0(__int64 a1, unsigned int a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  _BOOL8 v15;
  __int64 v16;
  __int64 v17;
  _BYTE v18[4];
  __int64 v19;

  result = as_string_c_str(a1);
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_682bc0(&v19, result);
    v4 = v19;
    if (v19 != 0) {
      v5 = *(_QWORD*)(GameData_21ca310 + 56);
      if (v5 != 0) {
        v6 = 250;
        while (1) {
          v7 = *(_QWORD*)(v5 + 440);
          if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 &&
              *(_QWORD*)(v5 + 392) == v19) {
            break;
          }
          v8 = *(_QWORD*)(v5 + 2664);
          if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 &&
              *(_QWORD*)(v5 + 2616) == v19) {
            v5 += 2224;
            break;
          }
          v9 = *(_QWORD*)(v5 + 4888);
          if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 &&
              *(_QWORD*)(v5 + 4840) == v19) {
            v12 = 4448;
            goto LABEL_25;
          }
          v10 = *(_QWORD*)(v5 + 7112);
          if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 &&
              *(_QWORD*)(v5 + 7064) == v19) {
            v12 = 6672;
            goto LABEL_25;
          }
          v11 = *(_QWORD*)(v5 + 9336);
          if (v11 != 0 && *(_BYTE*)(v11 + 16) != 9 &&
              *(_QWORD*)(v5 + 9288) == v19) {
            v12 = 8896;
          LABEL_25:
            v5 += v12;
            break;
          }
          v5 += 11120;
          v6 -= 5;
          if (v6 == 0) {
            return result;
          }
        }
        v13 = *GameData_21309c8[0];
        if (*GameData_21309c8[0] != 0) {
          if (game_GameModeData_instance_ != 0 &&
                  v19 == *(_QWORD*)(game_GameModeData_instance_ + 96) ||
              (*(_BYTE*)(v5 + 418) & 8) != 0) {
            v14 = 0;
          }
          else {
            LODWORD(v19) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                      game_g_shared_system_skills_ptr) &
                           0xFFF;
            v14 = game_HasSkill(v5 + 1744, &v19) ^ 1;
          }
          result = GameRoutine_1226ec0(v13, v5, a2, v14 & 1);
          v4 = *(_QWORD*)(v5 + 392);
        }
        v18[0] = a2;
        if (v4 != 0) {
          v15 =
              (game_GameModeData_instance_ == 0 ||
               v4 != *(_QWORD*)(game_GameModeData_instance_ + 96)) &&
                  (*(_BYTE*)(v5 + 418) & 8) == 0 &&
                  (LODWORD(v19) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                             game_g_shared_system_skills_ptr) &
                                  0xFFF,
                   (game_HasSkill(v5 + 1744, &v19) & 1) == 0) ||
              (unsigned __int8)a2 == 9;
          result = GameRoutine_6c47b0(v5, v18, v15, 0);
          if ((result & 1) != 0) {
            v16 = *GameData_212ce98[0];
            if (*GameData_212ce98[0] != 0) {
              v17 = *(_QWORD*)(v16 + 96);
              Image_72b4a0(v17);
              Image_72b6c0(v17);
              Image_72a260(*(_QWORD*)(v16 + 152));
            }
            return game_UnitActor_TryReload(v5);
          }
        }
      }
    }
  }
  return result;
}

__int64 UnitNatives_117ee00(__int64 a1)
{
  _BYTE* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;

  v2 = (_BYTE*)as_string_c_str(a1);
  if (*v2 != 0) {
    result = GameRoutine_682bc0(&v28, v2);
    if (v28 != 0) {
      v4 = *(_QWORD*)(GameData_21ca310 + 56);
      if (v4 != 0) {
        v5 = 250;
        while (1) {
          v6 = *(_QWORD*)(v4 + 440);
          if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 &&
              *(_QWORD*)(v4 + 392) == v28) {
            goto LABEL_53;
          }
          v6 = *(_QWORD*)(v4 + 2664);
          if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 &&
              *(_QWORD*)(v4 + 2616) == v28) {
            v4 += 2224;
          LABEL_53:
            v19 = 0;
            goto LABEL_57;
          }
          v6 = *(_QWORD*)(v4 + 4888);
          if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 &&
              *(_QWORD*)(v4 + 4840) == v28) {
            v7 = 4448;
            goto LABEL_56;
          }
          v6 = *(_QWORD*)(v4 + 7112);
          if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 &&
              *(_QWORD*)(v4 + 7064) == v28) {
            break;
          }
          v6 = *(_QWORD*)(v4 + 9336);
          if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 &&
              *(_QWORD*)(v4 + 9288) == v28) {
            v7 = 8896;
            goto LABEL_56;
          }
          v4 += 11120;
          v5 -= 5;
          if (v5 == 0) {
            goto LABEL_22;
          }
        }
        v7 = 6672;
      LABEL_56:
        v4 += v7;
        v19 = 0;
        goto LABEL_57;
      }
    }
  }

LABEL_22:
  v8 = as_string_c_str(a1);
  v9 = game_HashString(v8);
  if (v9 != 0) {
    v10 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v10 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
      v12 = v10 - 1;
      if ((v10 & (v10 - 1)) != 0) {
        v13 = v9;
        if (v9 >= v10) {
          v13 = v9 % v10;
        }
      }
      else {
        v13 = v12 & v9;
      }
      v14 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v13);
      if (v14 != nullptr) {
        v15 = (_QWORD*)*v14;
        if (v15 != nullptr) {
          if ((v10 & v12) == 0) {
            while (1) {
              v18 = v15[1];
              if (v18 == v9) {
                if (v15[2] == v9) {
                  goto LABEL_75;
                }
              }
              else if ((v18 & v12) != v13) {
                goto LABEL_46;
              }
              v15 = (_QWORD*)*v15;
              v17 = 0;
              if (v15 == nullptr) {
                goto LABEL_47;
              }
            }
          }
          do {
            v16 = v15[1];
            if (v16 == v9) {
              if (v15[2] == v9) {
              LABEL_75:
                v17 = v15[3];
                goto LABEL_47;
              }
            }
            else {
              if (v16 >= v10) {
                v16 %= v10;
              }
              if (v16 != v13) {
                break;
              }
            }
            v15 = (_QWORD*)*v15;
          } while (v15 != nullptr);
        }
      }
    }
  }

LABEL_46:
  v17 = 0;

LABEL_47:
  v28 = v17;
  result = GameRoutine_120f020(&v28, 4);
  if (result != 0) {
    v4 = result;
    if (*(_QWORD*)(result + 392) != 0) {
      v6 = *(_QWORD*)(result + 440);
      if (v6 == 0) {
        v19 = 1;
        v20 = GameData_21ca310;
        goto LABEL_58;
      }
      v19 = 1;
    LABEL_57:
      v21 = *(unsigned __int8*)(v6 + 16);
      v20 = GameData_21ca310;
      if (v21 <= 3) {
        v25 = *(_QWORD*)(GameData_21ca310 + 56);
        v26 = *(unsigned __int8*)(v25 + 556016);
        v24 = v25 + 24LL * *(unsigned __int8*)(v25 + 556016) + 556000;
        if (v26 >= 0xA) {
          v24 = 0;
        }
        *(_QWORD*)(v4 + 440) = v24;
        if ((v19 & 1) != 0) {
          goto LABEL_61;
        }
      LABEL_66:
        if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
            (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0 && v24 != 0 &&
            *(unsigned __int8*)(v24 + 16) <= 8u &&
            game_map_UnitFlags_instance_ != 0) {
          v27 = *(unsigned __int8*)(v4 + 2088);
          if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v27) & 1) != 0) {
            *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v27) |= 2u;
          }
        }
        return result;
      }
    LABEL_58:
      v22 = *(_QWORD*)(v20 + 56);
      v23 = *(unsigned __int8*)(v22 + 556112);
      v24 = v22 + 24LL * *(unsigned __int8*)(v22 + 556112) + 556000;
      if (v23 >= 0xA) {
        v24 = 0;
      }
      *(_QWORD*)(v4 + 440) = v24;
      if (v19 != 0) {
      LABEL_61:
        result = GameData_22400f8;
        if (GameData_22400f8 != 0) {
          return GameRoutine_12272a0();
        }
        return result;
      }
      goto LABEL_66;
    }
  }
  return result;
}

_QWORD* unit_SetRageTarget(int a1, unsigned int a2, __int64 a3, char a4)
{
  __int64* v4;
  __int64 v8;
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
  __int64 v19;
  __int64 v20;
  _QWORD* result;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v39;
  float v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  char v45[4];

  v4 = as_g_script_manager_ptr;
  if (a1 < 0 || (v45[0] = a1, (v8 = game_UnitPool_Get(v45)) == 0) ||
      *(_QWORD*)(v8 + 392) == 0 || (v9 = *(_QWORD*)(v8 + 440)) == 0 ||
      *(unsigned __int8*)(v9 + 16) >= 4u) {
    v18 = *v4;
    v19 = *(_QWORD*)(v18 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v19 != 0) {
      v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 472LL))(v19);
    }
    else {
      v20 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v20 + 24) + 448LL))(
        *(_QWORD*)(v20 + 24), 1);
    result = *(_QWORD**)(v20 + 2240);
    *(_QWORD*)(v20 + 2240) = 0;
    if (result == (_QWORD*)(v20 + 2208)) {
      v22 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v22 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v22))((__int64)result);
  }
  v10 = v8;
  v11 = *v4;
  v12 = *(
      _QWORD*)(v11 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 472LL))(v12);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v13 + 24) + 456LL))(
           *(_QWORD*)(v13 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  v14 = StringIsEmpty_25eef0(a3);
  if ((v14 & 1) != 0) {
    v15 = game_script_GetCurrentProc(v14);
    v16 = game_90f080(v15, v10, a2, a4 & 1);
    goto LABEL_9;
  }
  v23 = as_string_c_str(a3);
  v24 = game_HashString(v23);
  v17 = 0;
  if (v24 != 0) {
    v25 = *GameData_212c880[0];
    v26 = *(_QWORD*)(*GameData_212c880[0] + 96);
    if (v26 != 0 && *(_QWORD*)(v25 + 112) != 0) {
      v27 = v26 - 1;
      if ((v26 & (v26 - 1)) != 0) {
        v28 = v24;
        if (v24 >= v26) {
          v28 = v24 % v26;
        }
      }
      else {
        v28 = v27 & v24;
      }
      v29 = *(_QWORD**)(*(_QWORD*)(v25 + 88) + 8 * v28);
      if (v29 == nullptr) {
        goto LABEL_45;
      }
      v30 = (_QWORD*)*v29;
      if (v30 == nullptr) {
        goto LABEL_45;
      }
      if ((v26 & v27) == 0) {
        while (1) {
          v32 = v30[1];
          if (v32 == v24) {
            if (v30[2] == v24) {
              goto LABEL_43;
            }
          }
          else if ((v32 & v27) != v28) {
            goto LABEL_45;
          }
          v30 = (_QWORD*)*v30;
          v17 = 0;
          if (v30 == nullptr) {
            goto LABEL_46;
          }
        }
      }
      do {
        v31 = v30[1];
        if (v31 == v24) {
          if (v30[2] == v24) {
          LABEL_43:
            v33 = v30[3];
            if (v33 != 0) {
              v34 = game_script_GetCurrentProc(v24);
              v44 = *(_WORD*)(v33 + 16) & 0xFFF;
              v16 = ((__int64 (*)(__int64, __int64, int*, _QWORD,
                                  _QWORD))GameRoutine_90f160)(v34, v10, &v44,
                                                              a2, a4 & 1);
            LABEL_9:
              v17 = v16;
              break;
            }
          LABEL_45:
            v17 = 0;
            break;
          }
        }
        else {
          if (v31 >= v26) {
            v31 %= v26;
          }
          if (v31 != v28) {
            goto LABEL_45;
          }
        }
        v30 = (_QWORD*)*v30;
        v17 = 0;
      } while (v30 != nullptr);
    }
  }
LABEL_46:
  game_script_StartWaitProc(v17);
  v35 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v35 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v35 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v36 = v35[10];
    if (v36 != 0) {
      v37 = *(_QWORD*)(*(_QWORD*)(v35[6] + 8 * ((v36 + v35[9] - 1) / 0x33uLL)) +
                       80 * ((v36 + v35[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v37 = 0;
    }
  }
  else {
    v37 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v37 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v38 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v39 = 2)
           : (v39 = 3),
       (v39 & v38) != 0)) {
    v40 = *(float*)(v37 + 144);
    if (v40 < 1.0f) {
      v40 = 1.0f;
    }
    *(_WORD*)(v37 + 136) = *(_WORD*)(v37 + 136) & 0xFF97 | 0x20;
    *(float*)(v37 + 144) = v40;
  }
  v41 = *v4;
  v42 = *(
      _QWORD*)(v41 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v43 = (*(__int64 (**)(__int64))(*(_QWORD*)v42 + 472LL))(v42);
  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v43 + 24) + 448LL))(*(_QWORD*)(v43 + 24), 0);
}

_QWORD* UnitNatives_117f550(int a1, unsigned int a2, unsigned int a3,
                            __int64 a4, char a5)
{
  __int64* v5;
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
  __int64 v21;
  __int64 v22;
  _QWORD* result;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  float v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  char v47[4];

  v5 = as_g_script_manager_ptr;
  if (a1 < 0 || (v47[0] = a1, (v10 = game_UnitPool_Get(v47)) == 0) ||
      *(_QWORD*)(v10 + 392) == 0 || (v11 = *(_QWORD*)(v10 + 440)) == 0 ||
      *(unsigned __int8*)(v11 + 16) >= 4u) {
    v20 = *v5;
    v21 = *(_QWORD*)(v20 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v21 != 0) {
      v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 472LL))(v21);
    }
    else {
      v22 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v22 + 24) + 448LL))(
        *(_QWORD*)(v22 + 24), 1);
    result = *(_QWORD**)(v22 + 2240);
    *(_QWORD*)(v22 + 2240) = 0;
    if (result == (_QWORD*)(v22 + 2208)) {
      v24 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v24 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v24))((__int64)result);
  }
  v12 = v10;
  v13 = *v5;
  v14 = *(
      _QWORD*)(v13 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 472LL))(v14);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v15 + 24) + 456LL))(
           *(_QWORD*)(v15 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  v16 = StringIsEmpty_25eef0(a4);
  if ((v16 & 1) != 0) {
    v17 = game_script_GetCurrentProc(v16);
    v18 = GameRoutine_90f440(v17, v12, a2, a3, a5 & 1);
    goto LABEL_9;
  }
  v25 = as_string_c_str(a4);
  v26 = game_HashString(v25);
  v19 = 0;
  if (v26 != 0) {
    v27 = *GameData_212c880[0];
    v28 = *(_QWORD*)(*GameData_212c880[0] + 96);
    if (v28 != 0 && *(_QWORD*)(v27 + 112) != 0) {
      v29 = v28 - 1;
      if ((v28 & (v28 - 1)) != 0) {
        v30 = v26;
        if (v26 >= v28) {
          v30 = v26 % v28;
        }
      }
      else {
        v30 = v29 & v26;
      }
      v31 = *(_QWORD**)(*(_QWORD*)(v27 + 88) + 8 * v30);
      if (v31 == nullptr) {
        goto LABEL_45;
      }
      v32 = (_QWORD*)*v31;
      if (v32 == nullptr) {
        goto LABEL_45;
      }
      if ((v28 & v29) == 0) {
        while (1) {
          v34 = v32[1];
          if (v34 == v26) {
            if (v32[2] == v26) {
              goto LABEL_43;
            }
          }
          else if ((v34 & v29) != v30) {
            goto LABEL_45;
          }
          v32 = (_QWORD*)*v32;
          v19 = 0;
          if (v32 == nullptr) {
            goto LABEL_46;
          }
        }
      }
      do {
        v33 = v32[1];
        if (v33 == v26) {
          if (v32[2] == v26) {
          LABEL_43:
            v35 = v32[3];
            if (v35 != 0) {
              v36 = game_script_GetCurrentProc(v26);
              v46 = *(_WORD*)(v35 + 16) & 0xFFF;
              v18 = GameRoutine_90f520(v36, v12, &v46, a2, a3, a5 & 1);
            LABEL_9:
              v19 = v18;
              break;
            }
          LABEL_45:
            v19 = 0;
            break;
          }
        }
        else {
          if (v33 >= v28) {
            v33 %= v28;
          }
          if (v33 != v30) {
            goto LABEL_45;
          }
        }
        v32 = (_QWORD*)*v32;
        v19 = 0;
      } while (v32 != nullptr);
    }
  }

LABEL_46:
  game_script_StartWaitProc(v19);
  v37 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v37 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v37 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v38 = v37[10];
    if (v38 != 0) {
      v39 = *(_QWORD*)(*(_QWORD*)(v37[6] + 8 * ((v38 + v37[9] - 1) / 0x33uLL)) +
                       80 * ((v38 + v37[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v39 = 0;
    }
  }
  else {
    v39 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v39 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v40 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v41 = 2)
           : (v41 = 3),
       (v41 & v40) != 0)) {
    v42 = *(float*)(v39 + 144);
    if (v42 < 1.0f) {
      v42 = 1.0f;
    }
    *(_WORD*)(v39 + 136) = *(_WORD*)(v39 + 136) & 0xFF97 | 0x20;
    *(float*)(v39 + 144) = v42;
  }
  v43 = *v5;
  v44 = *(
      _QWORD*)(v43 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v45 = (*(__int64 (**)(__int64))(*(_QWORD*)v44 + 472LL))(v44);
  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v45 + 24) + 448LL))(*(_QWORD*)(v45 + 24), 0);
}

__int64 unit_CancelRageTarget(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE v6[4];
  int v7;

  if ((result & 0x80000000) == 0) {
    v6[0] = result;
    result = (__int64)game_UnitPool_Get_alt1(v6);
    if (result != 0 && *(_QWORD*)(result + 392) != 0) {
      v1 = *(_QWORD*)(result + 440);
      if (v1 != 0 && *(unsigned __int8*)(v1 + 16) <= 3u) {
        if (*(_WORD*)(result + 1964) != 0) {
          v2 = *GameData_212cec0;
          if (*(_QWORD*)(result + 1960) != *GameData_212cec0) {
            *(_QWORD*)(result + 1960) = v2;
            v3 = result;
            v7 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x124LL) +
                            game_g_shared_system_skills_ptr) &
                 0xFFF;
            Unit_6cd120(result, (v2 & 0xFFFF00000000LL) != 0,
                        (unsigned int*)&v7);
            result = v3;
          }
        }
        if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
            (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
          v4 = *(_QWORD*)(result + 440);
          if (v4 != 0 && *(unsigned __int8*)(v4 + 16) <= 8u &&
              game_map_UnitFlags_instance_ != 0) {
            v5 = *(unsigned __int8*)(result + 2088);
            if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v5) & 1) != 0) {
              *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v5) |= 2u;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 unit_GetMoveToPos_117fa70(int a1, unsigned int a2, unsigned int a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 result;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  int v39;
  __int64 vars10;
  __int64 _38;

  if (a1 < 0) {
    v7 = 0;
  }
  else {
    LOBYTE(v39) = a1;
    v5 = a3;
    v6 = a2;
    v7 = game_UnitPool_Get(&v39);
    a2 = v6;
    a3 = v5;
    v4 = vars10;
    v3 = _38;
  }
  if (v7 == 0) {
    return 0xFFFFFFFFLL;
  }
  if (*(_QWORD*)(v7 + 392) == 0) {
    return 0xFFFFFFFFLL;
  }
  v8 = *(_QWORD*)(v7 + 440);
  if (v8 == 0) {
    return 0xFFFFFFFFLL;
  }
  vars10 = v4;
  _38 = v3;
  if (*(unsigned __int8*)(v8 + 16) > 3u) {
    return 0xFFFFFFFFLL;
  }
  v9 = (_QWORD*)GameData_21ca2f0;
  if (GameData_21ca2f0 == 0) {
    return 0xFFFFFFFFLL;
  }
  v10 = *(_QWORD*)(GameData_21ca2f0 + 10752);
  v11 = *(_QWORD*)(GameData_21ca2f0 + 10744);
  v12 = a2;
  v13 = a3;
  v14 = ((v10 - v11) << 6) - 1;
  if (v10 == v11) {
    v14 = 0;
  }
  v15 = *(_QWORD*)(GameData_21ca2f0 + 10776) +
        *(_QWORD*)(GameData_21ca2f0 + 10768);
  if (v14 == v15) {
    v16 = v7;
    GameRoutine_74cd60(GameData_21ca2f0 + 10736);
    v11 = v9[1343];
    v7 = v16;
    v15 = v9[1347] + v9[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v11 + 8 * (v15 >> 9)) + 8 * (v15 & 0x1FF)) = v9[1];
  v9[1] = v9 + 337;
  ++v9[1347];
  v17 = (unsigned int)*(char*)(v7 + 584);
  v18 = (unsigned int)*(char*)(v7 + 585);
  v39 = 3145730;
  GameRoutine_748f80_alt1(v9, v7, v17, v18, 100, &v39);
  v20 = v9[1];
  v21 = v12 + 32 * v13;
  v22 = v12;
  if (v21 >= 0x400) {
    v23 = 0;
  }
  else {
    v23 = v21;
  }
  if (*(unsigned __int8*)(v20 + v23 + 64) == 255 ||
      (unsigned int)GameRoutine_747df0_alt1(
          v20, v22, v13, *(unsigned __int8*)(v20 + 5)) == 255) {
    result = 0xFFFFFFFFLL;
  }
  else {
    result = *(unsigned __int8*)(v9[1] + v23 + 64);
  }
  v25 = v9[1347];
  v26 = v9[1346];
  v27 = v9[1343];
  v28 = v9[1344];
  v29 = v28 == v27;
  v30 = v25 - 1 + v26;
  v31 = v30 >> 9;
  v32 = v30 & 0x1FF;
  v33 = ((v28 - v27) << 6) - 1;
  v34 = *(_QWORD*)(v27 + 8 * v31);
  if (v29) {
    v33 = 0;
  }
  v35 = *(_QWORD*)(v34 + 8 * v32);
  v9[1347] = v25 - 1;
  v9[1] = v35;
  if ((unsigned __int64)(v33 - (v25 + v26) + 1) >= 0x400) {
    v36 = *(_QWORD*)(v28 - 8);
    if (v36 != 0) {
      v37 = result;
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v36, v19);
      v28 = v9[1344];
      result = v37;
    }
    v9[1344] = v28 - 8;
  }
  return result;
}

__int64 unit_GetMoveToPos_117fac0(__int64 a1, unsigned int a2, unsigned int a3)
{
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  __int64 result;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  bool v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;

  v5 = (_BYTE*)as_string_c_str(a1);
  if (*v5 != 0 && (GameRoutine_682bc0(&v45, v5), v45 != 0)) {
    v6 = *(_QWORD*)(GameData_21ca310 + 56);
    if (v6 != 0) {
      v7 = 250;
      while (1) {
        v8 = *(_QWORD*)(v6 + 440);
        if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && *(_QWORD*)(v6 + 392) == v45) {
          goto LABEL_23;
        }
        v9 = *(_QWORD*)(v6 + 2664);
        if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 &&
            *(_QWORD*)(v6 + 2616) == v45) {
          v6 += 2224;
          goto LABEL_23;
        }
        v10 = *(_QWORD*)(v6 + 4888);
        if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 &&
            *(_QWORD*)(v6 + 4840) == v45) {
          break;
        }
        v11 = *(_QWORD*)(v6 + 7112);
        if (v11 != 0 && *(_BYTE*)(v11 + 16) != 9 &&
            *(_QWORD*)(v6 + 7064) == v45) {
          v13 = 6672;
          goto LABEL_27;
        }
        v12 = *(_QWORD*)(v6 + 9336);
        if (v12 != 0 && *(_BYTE*)(v12 + 16) != 9 &&
            *(_QWORD*)(v6 + 9288) == v45) {
          v13 = 8896;
        LABEL_27:
          v6 += v13;
          goto LABEL_23;
        }
        v6 += 11120;
        v7 -= 5;
        if (v7 == 0) {
          goto LABEL_22;
        }
      }
      v13 = 4448;
      goto LABEL_27;
    }
  }
  else {
  LABEL_22:
    v6 = 0;
  }
LABEL_23:
  v14 = a3;
  if (v6 == 0) {
    return 0xFFFFFFFFLL;
  }
  if (*(_QWORD*)(v6 + 392) == 0) {
    return 0xFFFFFFFFLL;
  }
  v15 = *(_QWORD*)(v6 + 440);
  if (v15 == 0) {
    return 0xFFFFFFFFLL;
  }
  if (*(unsigned __int8*)(v15 + 16) > 3u) {
    return 0xFFFFFFFFLL;
  }
  v16 = (_QWORD*)GameData_21ca2f0;
  if (GameData_21ca2f0 == 0) {
    return 0xFFFFFFFFLL;
  }
  v17 = *(_QWORD*)(GameData_21ca2f0 + 10752);
  v18 = *(_QWORD*)(GameData_21ca2f0 + 10744);
  v19 = v14;
  v20 = ((v17 - v18) << 6) - 1;
  if (v17 == v18) {
    v20 = 0;
  }
  v21 = *(_QWORD*)(GameData_21ca2f0 + 10776) +
        *(_QWORD*)(GameData_21ca2f0 + 10768);
  if (v20 == v21) {
    v22 = v6;
    GameRoutine_74cd60(GameData_21ca2f0 + 10736);
    v18 = v16[1343];
    v6 = v22;
    v21 = v16[1347] + v16[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v18 + 8 * (v21 >> 9)) + 8 * (v21 & 0x1FF)) = v16[1];
  v16[1] = v16 + 337;
  ++v16[1347];
  v23 = (unsigned int)*(char*)(v6 + 584);
  v24 = (unsigned int)*(char*)(v6 + 585);
  HIDWORD(v45) = 3145730;
  GameRoutine_748f80_alt1(v16, v6, v23, v24, 100, (char*)&v45 + 4);
  v26 = v16[1];
  v27 = a2 + 32 * v19;
  v28 = a2;
  if (v27 >= 0x400) {
    v29 = 0;
  }
  else {
    v29 = v27;
  }
  if (*(unsigned __int8*)(v26 + v29 + 64) == 255 ||
      (unsigned int)GameRoutine_747df0_alt1(
          v26, v28, v19, *(unsigned __int8*)(v26 + 5)) == 255) {
    result = 0xFFFFFFFFLL;
  }
  else {
    result = *(unsigned __int8*)(v16[1] + v29 + 64);
  }
  v31 = v16[1347];
  v32 = v16[1346];
  v33 = v16[1343];
  v34 = v16[1344];
  v35 = v34 == v33;
  v36 = v31 - 1 + v32;
  v37 = v36 >> 9;
  v38 = v36 & 0x1FF;
  v39 = ((v34 - v33) << 6) - 1;
  v40 = *(_QWORD*)(v33 + 8 * v37);
  if (v35) {
    v39 = 0;
  }
  v41 = *(_QWORD*)(v40 + 8 * v38);
  v16[1347] = v31 - 1;
  v16[1] = v41;
  if ((unsigned __int64)(v39 - (v31 + v32) + 1) >= 0x400) {
    v42 = *(_QWORD*)(v34 - 8);
    if (v42 != 0) {
      v43 = result;
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v42, v25);
      v34 = v16[1344];
      result = v43;
    }
    v16[1344] = v34 - 8;
  }
  return result;
}

__int64 UnitNatives_1181ce0(int a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int* v9;
  unsigned int v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  _BYTE v17[4];

  if (a1 < 0) {
    return 0xFFFFFFFFLL;
  }
  v17[0] = a1;
  v1 = game_UnitPool_Get(v17);
  if (v1 == 0 || *(_QWORD*)(v1 + 392) == 0 || *(_BYTE*)(v1 + 1944) == 0) {
    return 0xFFFFFFFFLL;
  }
  if ((*(_WORD*)(v1 + 1536) & 0x20) != 0) {
    v5 = *(_QWORD*)(v1 + 1488);
    v6 = *(_QWORD*)(v1 + 1496) - v5;
    v2 = *GameData_212c880[0];
    if (v6 != 0) {
      v7 = v6 >> 2;
      v8 = 0;
      v3 = (unsigned int*)GameData_212c8a8;
      while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v2 + 64) +
                                  8LL * (*(_DWORD*)(v5 + 4 * v8) & 0xFFF)) +
                       104LL) != 5) {
        if (v7 == ++v8) {
          goto LABEL_17;
        }
      }
      v9 = (unsigned int*)(v5 + 4LL * (unsigned int)v8);
      if (v8 > -1) {
        v3 = v9;
      }
    }
    else {
      v3 = (unsigned int*)GameData_212c8a8;
    }
  }
  else {
    v2 = *GameData_212c880[0];
    v3 = (unsigned int*)GameData_212c8a8;
  }

LABEL_17:
  v10 = *v3;
  v11 = v10 & 0xFFF;
  v12 = (v10 >> 19) & 0x1F;
  v13 = (v10 >> 12) & 0x7F;
  v14 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 8 * v11);
  LODWORD(v11) = *(unsigned __int8*)(v14 + 104);
  v15 = *(unsigned __int8*)(v14 + 273);
  if ((unsigned int)(v11 - 5) >= 2) {
    v16 = 0;
  }
  else {
    v16 = v12;
  }
  return (v16 - v13 + v15) & (unsigned int)~((v16 - v13 + v15) >> 31);
}

__int64 UnitNatives_1181e00(__int64 a1)
{
  _BYTE* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int* v17;
  unsigned int v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;

  v1 = (_BYTE*)as_string_c_str(a1);
  if (*v1 == 0) {
    return 0xFFFFFFFFLL;
  }
  GameRoutine_682bc0(&v25, v1);
  if (v25 == 0) {
    return 0xFFFFFFFFLL;
  }
  v2 = *(_QWORD*)(GameData_21ca310 + 56);
  if (v2 == 0) {
    return 0xFFFFFFFFLL;
  }
  v3 = 250;
  while (1) {
    v4 = *(_QWORD*)(v2 + 440);
    if (v4 != 0 && *(_BYTE*)(v4 + 16) != 9 && *(_QWORD*)(v2 + 392) == v25) {
      goto LABEL_25;
    }
    v5 = *(_QWORD*)(v2 + 2664);
    if (v5 != 0 && *(_BYTE*)(v5 + 16) != 9 && *(_QWORD*)(v2 + 2616) == v25) {
      v2 += 2224;
      if (*(_BYTE*)(v2 + 1944) == 0) {
        return 0xFFFFFFFFLL;
      }
      goto LABEL_26;
    }
    v6 = *(_QWORD*)(v2 + 4888);
    if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 && *(_QWORD*)(v2 + 4840) == v25) {
      v2 += 4448;
    LABEL_25:
      if (*(_BYTE*)(v2 + 1944) == 0) {
        return 0xFFFFFFFFLL;
      }
      goto LABEL_26;
    }
    v7 = *(_QWORD*)(v2 + 7112);
    if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 && *(_QWORD*)(v2 + 7064) == v25) {
      break;
    }
    v8 = *(_QWORD*)(v2 + 9336);
    if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && *(_QWORD*)(v2 + 9288) == v25) {
      v9 = 8896;
      goto LABEL_34;
    }
    v2 += 11120;
    v3 -= 5;
    if (v3 == 0) {
      return 0xFFFFFFFFLL;
    }
  }
  v9 = 6672;

LABEL_34:
  v2 += v9;
  if (*(_BYTE*)(v2 + 1944) == 0) {
    return 0xFFFFFFFFLL;
  }

LABEL_26:
  if ((*(_WORD*)(v2 + 1536) & 0x20) != 0) {
    v12 = *(_QWORD*)(v2 + 1488);
    v13 = *(_QWORD*)(v2 + 1496) - v12;
    v10 = *GameData_212c880[0];
    if (v13 != 0) {
      v14 = v13 >> 2;
      v15 = 0;
      v11 = (unsigned int*)GameData_212c8a8;
      while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) +
                                  8LL * (*(_DWORD*)(v12 + 4 * v15) & 0xFFF)) +
                       104LL) != 5) {
        if (v14 == ++v15) {
          goto LABEL_40;
        }
      }
      v17 = (unsigned int*)(v12 + 4LL * (unsigned int)v15);
      if (v15 > -1) {
        v11 = v17;
      }
    }
    else {
      v11 = (unsigned int*)GameData_212c8a8;
    }
  }
  else {
    v10 = *GameData_212c880[0];
    v11 = (unsigned int*)GameData_212c8a8;
  }

LABEL_40:
  v18 = *v11;
  v19 = v18 & 0xFFF;
  v20 = (v18 >> 19) & 0x1F;
  v21 = (v18 >> 12) & 0x7F;
  v22 = *(_QWORD*)(*(_QWORD*)(v10 + 64) + 8 * v19);
  LODWORD(v19) = *(unsigned __int8*)(v22 + 104);
  v23 = *(unsigned __int8*)(v22 + 273);
  if ((unsigned int)(v19 - 5) >= 2) {
    v24 = 0;
  }
  else {
    v24 = v20;
  }
  return (v24 - v21 + v23) & (unsigned int)~((v24 - v21 + v23) >> 31);
}

_QWORD* UnitNatives_1182020(int a1, __int64 a2, unsigned int a3,
                            unsigned int a4)
{
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  unsigned __int64 v20;
  _QWORD* result;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  char v42[4];

  v8 = as_g_script_manager_ptr;
  v9 = *as_g_script_manager_ptr;
  v10 = *(
      _QWORD*)(v9 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 472LL))(v10);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v11 + 24) + 456LL))(
           *(_QWORD*)(v11 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  if (a1 < 0 || (v42[0] = a1, (v12 = game_UnitPool_Get(v42)) == 0) ||
      *(_QWORD*)(v12 + 392) == 0 || (v13 = *(_QWORD*)(v12 + 440)) == 0 ||
      *(unsigned __int8*)(v13 + 16) >= 4u) {
    v22 = *v8;
    v23 = *(_QWORD*)(v22 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v23 != 0) {
      v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 472LL))(v23);
    }
    else {
      v24 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v24 + 24) + 448LL))(
        *(_QWORD*)(v24 + 24), 1);
    result = *(_QWORD**)(v24 + 2240);
    *(_QWORD*)(v24 + 2240) = 0;
    if (result != (_QWORD*)(v24 + 2208)) {
      if (result == nullptr) {
        return result;
      }
      goto LABEL_21;
    }
  LABEL_47:
    v25 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v25))((__int64)result);
  }
  v14 = v12;
  v15 = as_string_c_str(a2);
  v16 = game_HashString(v15);
  if (v16 == 0) {
    goto LABEL_41;
  }
  v17 = *(_QWORD*)(*GameData_212c880[0] + 96);
  if (v17 == 0 || *(_QWORD*)(*GameData_212c880[0] + 112) == 0) {
    goto LABEL_41;
  }
  v19 = v17 - 1;
  if ((v17 & (v17 - 1)) != 0) {
    v20 = v16;
    if (v16 >= v17) {
      v20 = v16 % v17;
    }
  }
  else {
    v20 = v19 & v16;
  }
  v26 = *(_QWORD**)(*(_QWORD*)(*GameData_212c880[0] + 88) + 8 * v20);
  if (v26 == nullptr) {
    goto LABEL_41;
  }
  v27 = (_QWORD*)*v26;
  if (v27 == nullptr) {
    goto LABEL_41;
  }
  if ((v17 & v19) == 0) {
    while (1) {
      v29 = v27[1];
      if (v29 == v16) {
        if (v27[2] == v16) {
          goto LABEL_39;
        }
      }
      else if ((v29 & v19) != v20) {
        goto LABEL_41;
      }
      v27 = (_QWORD*)*v27;
      if (v27 == nullptr) {
        goto LABEL_41;
      }
    }
  }
  while (1) {
    v28 = v27[1];
    if (v28 == v16) {
      break;
    }
    if (v28 >= v17) {
      v28 %= v17;
    }
    if (v28 != v20) {
      goto LABEL_41;
    }
  LABEL_28:
    v27 = (_QWORD*)*v27;
    if (v27 == nullptr) {
      goto LABEL_41;
    }
  }
  if (v27[2] != v16) {
    goto LABEL_28;
  }

LABEL_39:
  v30 = v27[3];
  if (v30 != 0) {
    v31 = game_script_GetCurrentProc(v16);
    v41 = *(_WORD*)(v30 + 16) & 0xFFF;
    v32 = GameRoutine_90f760(v31, v14, &v41, a3, a4);
    v33 = game_script_StartWaitProc(v32);
    v34 = game_script_GetCurrentProc(v33);
    GameRoutine_657c40(v34);
    v35 = *v8;
    v36 = *(_QWORD*)(v35 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    v37 = (*(__int64 (**)(__int64))(*(_QWORD*)v36 + 472LL))(v36);
    return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
        **(_QWORD**)(v37 + 24) + 448LL))(*(_QWORD*)(v37 + 24), 0);
  }

LABEL_41:
  v38 = *v8;
  v39 = *(
      _QWORD*)(v38 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v39 != 0) {
    v40 = (*(__int64 (**)(__int64))(*(_QWORD*)v39 + 472LL))(v39);
  }
  else {
    v40 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v40 + 24) + 448LL))(
      *(_QWORD*)(v40 + 24), 1);
  result = *(_QWORD**)(v40 + 2240);
  *(_QWORD*)(v40 + 2240) = 0;
  if (result == (_QWORD*)(v40 + 2208)) {
    goto LABEL_47;
  }
  if (result != nullptr) {
  LABEL_21:
    v25 = 40;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v25))((__int64)result);
  }
  return result;
}

__int64 UnitNatives_1182d90(__int64 result, unsigned int a2, __int64 a3,
                            __int64 a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];

  if ((result & 0x80000000) == 0) {
    LOBYTE(v16[0]) = result;
    result = game_UnitPool_Get(v16);
    if (result != 0 && *(_QWORD*)(result + 392) != 0) {
      v7 = *(_QWORD*)(result + 440);
      if (v7 != 0 && *(unsigned __int8*)(v7 + 16) <= 3u) {
        v8 = result;
        v9 = as_string_c_str(a3);
        GameRoutine_11e9bc0(v8 + 1968, a2, v9);
        v10 = as_string_c_str(a4);
        v16[0] = 0;
        v16[1] = 0;
        if (v10 != 0) {
          v11 = v10;
          v12 = strlen(v10);
          v16[0] = v11;
          v16[1] = v12;
        }
        v13 = v8 + 16LL * (int)a2;
        GameRoutine_11e7860(v13 + 2022, v16);
        GameRoutine_11e7860(v13 + 2026, v16);
        GameRoutine_11e7860(v13 + 2030, v16);
        GameRoutine_11e7860(v13 + 2034, v16);
        if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
            (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
          v14 = *(_QWORD*)(v8 + 440);
          if (v14 != 0 && *(unsigned __int8*)(v14 + 16) <= 8u &&
              game_map_UnitFlags_instance_ != 0) {
            v15 = *(unsigned __int8*)(v8 + 2088);
            if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v15) & 1) != 0) {
              *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v15) |= 2u;
            }
          }
        }
        result = as_string_c_str(a4);
        if (GameData_22400f8 != 0 && result != 0 &&
            *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
            (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0 &&
            *(_BYTE*)result != 0) {
          *(_DWORD*)(GameData_22400f8 + 12) |= 0x20000u;
        }
      }
    }
  }
  return result;
}

_BYTE* UnitNatives_1182f20(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _BYTE* result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  result = (_BYTE*)as_string_c_str(a1);
  if (*result != 0) {
    result = (_BYTE*)GameRoutine_682bc0(&v24, result);
    if (v24 != 0) {
      v8 = *(_QWORD*)(GameData_21ca310 + 56);
      if (v8 != 0) {
        v9 = 250;
        while (1) {
          v10 = *(_QWORD*)(v8 + 440);
          if (v10 != 0) {
            v11 = *(unsigned __int8*)(v10 + 16);
            if (v11 != 9 && *(_QWORD*)(v8 + 392) == v24) {
              break;
            }
          }
          v12 = *(_QWORD*)(v8 + 2664);
          if (v12 != 0) {
            v11 = *(unsigned __int8*)(v12 + 16);
            if (v11 != 9 && *(_QWORD*)(v8 + 2616) == v24) {
              v8 += 2224;
              break;
            }
          }
          v13 = *(_QWORD*)(v8 + 4888);
          if (v13 != 0) {
            v11 = *(unsigned __int8*)(v13 + 16);
            if (v11 != 9 && *(_QWORD*)(v8 + 4840) == v24) {
              v16 = 4448;
              goto LABEL_25;
            }
          }
          v14 = *(_QWORD*)(v8 + 7112);
          if (v14 != 0) {
            v11 = *(unsigned __int8*)(v14 + 16);
            if (v11 != 9 && *(_QWORD*)(v8 + 7064) == v24) {
              v16 = 6672;
              goto LABEL_25;
            }
          }
          v15 = *(_QWORD*)(v8 + 9336);
          if (v15 != 0) {
            v11 = *(unsigned __int8*)(v15 + 16);
            if (v11 != 9 && *(_QWORD*)(v8 + 9288) == v24) {
              v16 = 8896;
            LABEL_25:
              v8 += v16;
              break;
            }
          }
          v8 += 11120;
          v9 -= 5;
          if (v9 == 0) {
            return result;
          }
        }
        if (v11 <= 3) {
          v17 = as_string_c_str(a3);
          GameRoutine_11e9bc0(v8 + 1968, a2, v17);
          v18 = as_string_c_str(a4);
          v24 = 0;
          v25 = 0;
          if (v18 != 0) {
            v19 = v18;
            v20 = strlen(v18);
            v24 = v19;
            v25 = v20;
          }
          v21 = v8 + 16LL * (int)a2;
          GameRoutine_11e7860(v21 + 2022, &v24);
          GameRoutine_11e7860(v21 + 2026, &v24);
          GameRoutine_11e7860(v21 + 2030, &v24);
          GameRoutine_11e7860(v21 + 2034, &v24);
          if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
              (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
            v22 = *(_QWORD*)(v8 + 440);
            if (v22 != 0 && *(unsigned __int8*)(v22 + 16) <= 8u &&
                game_map_UnitFlags_instance_ != 0) {
              v23 = *(unsigned __int8*)(v8 + 2088);
              if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v23) & 1) !=
                  0) {
                *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v23) |= 2u;
              }
            }
          }
          result = (_BYTE*)as_string_c_str(a4);
          if (GameData_22400f8 != 0 && result != nullptr &&
              *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
              (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0 && *result != 0) {
            *(_DWORD*)(GameData_22400f8 + 12) |= 0x20000u;
          }
        }
      }
    }
  }
  return result;
}

_QWORD* UnitNatives_1184f50(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* result;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  float v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  if (a1 == 0 || *(_QWORD*)(a1 + 392) == 0 ||
      (v1 = *(_QWORD*)(a1 + 440)) == 0 || *(unsigned __int8*)(v1 + 16) > 3u ||
      (*(_BYTE*)(a1 + 416) & 8) != 0) {
    v11 = *as_g_script_manager_ptr;
    v12 = *(_QWORD*)(v11 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v12 != 0) {
      v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 472LL))(v12);
    }
    else {
      v13 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v13 + 24) + 448LL))(
        *(_QWORD*)(v13 + 24), 1);
    result = *(_QWORD**)(v13 + 2240);
    *(_QWORD*)(v13 + 2240) = 0;
    if (result == (_QWORD*)(v13 + 2208)) {
      v15 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v15 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v15))((__int64)result);
  }
  v3 = as_g_script_manager_ptr;
  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v6 + 24) + 456LL))(
           *(_QWORD*)(v6 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  v7 = GameData_212cfb0[0];
  v8 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v8 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v8 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v9 = v8[10];
    if (v9 != 0) {
      v10 = *(_QWORD*)(*(_QWORD*)(v8[6] + 8 * ((v9 + v8[9] - 1) / 0x33uLL)) +
                       80 * ((v9 + v8[9] - 1) % 0x33uLL) + 72);
      goto LABEL_25;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v10 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_25;
  }
  v10 = 0;

LABEL_25:
  v16 = GameRoutine_76a520(v10, a1);
  game_script_StartWaitProc(v16);
  v17 = (_QWORD*)*v7;
  if (*v7 != 0 ||
      (v17 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v17 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v18 = v17[10];
    if (v18 != 0) {
      v19 = *(_QWORD*)(*(_QWORD*)(v17[6] + 8 * ((v18 + v17[9] - 1) / 0x33uLL)) +
                       80 * ((v18 + v17[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v19 = 0;
    }
  }
  else {
    v19 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v19 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v20 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v21 = 2)
           : (v21 = 3),
       (v21 & v20) != 0)) {
    v22 = *(float*)(v19 + 144);
    if (v22 < 1.0f) {
      v22 = 1.0f;
    }
    *(_WORD*)(v19 + 136) = *(_WORD*)(v19 + 136) & 0xFF97 | 0x20;
    *(float*)(v19 + 144) = v22;
  }
  v23 = *v3;
  v24 = *(
      _QWORD*)(v23 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 472LL))(v24);
  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v25 + 24) + 448LL))(*(_QWORD*)(v25 + 24), 0);
}

__int64 unit_Delete_11853f0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE v8[4];
  char v9[4];
  int v10;
  int v11;

  if ((result & 0x80000000) == 0) {
    v8[0] = result;
    result = game_UnitPool_Get(v8);
    if (result != 0) {
      v1 = *(_QWORD*)(result + 392);
      v2 = result;
      if (v1 != 0) {
        v3 = *GameData_21309c8[0];
        if (*GameData_21309c8[0] != 0) {
          if (game_GameModeData_instance_ != 0 &&
                  v1 == *(_QWORD*)(game_GameModeData_instance_ + 96) ||
              (*(_BYTE*)(result + 418) & 8) != 0) {
            v4 = 0;
          }
          else {
            v10 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                             game_g_shared_system_skills_ptr) &
                  0xFFF;
            v4 = game_HasSkill(result + 1744, &v10) ^ 1;
          }
          GameRoutine_1226ec0(v3, v2, 9, v4 & 1);
        }
        result = UnitActor_819400(v2);
        v9[0] = 9;
        v5 = *(_QWORD*)(v2 + 392);
        if (v5 != 0) {
          if ((game_GameModeData_instance_ == 0 ||
               v5 != *(_QWORD*)(game_GameModeData_instance_ + 96)) &&
              (*(_BYTE*)(v2 + 418) & 8) == 0) {
            v11 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                             game_g_shared_system_skills_ptr) &
                  0xFFF;
            game_HasSkill(v2 + 1744, &v11);
          }
          result = GameRoutine_6c47b0(v2, v9, 1, 0);
          if ((result & 1) != 0) {
            v6 = *GameData_212ce98[0];
            if (*GameData_212ce98[0] != 0) {
              v7 = *(_QWORD*)(v6 + 96);
              Image_72b4a0(v7);
              Image_72b6c0(v7);
              Image_72a260(*(_QWORD*)(v6 + 152));
            }
            return game_UnitActor_TryReload(v2);
          }
        }
      }
    }
  }
  return result;
}

__int64 unit_Delete_1185560(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16[4];

  result = as_string_c_str(a1);
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_682bc0(&v15, result);
    if (v15 != 0) {
      v2 = *(_QWORD*)(GameData_21ca310 + 56);
      if (v2 != 0) {
        v3 = 250;
        while (1) {
          v4 = *(_QWORD*)(v2 + 440);
          if (v4 != 0 && *(_BYTE*)(v4 + 16) != 9 &&
              *(_QWORD*)(v2 + 392) == v15) {
            break;
          }
          v5 = *(_QWORD*)(v2 + 2664);
          if (v5 != 0 && *(_BYTE*)(v5 + 16) != 9 &&
              *(_QWORD*)(v2 + 2616) == v15) {
            v2 += 2224;
            break;
          }
          v6 = *(_QWORD*)(v2 + 4888);
          if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 &&
              *(_QWORD*)(v2 + 4840) == v15) {
            v9 = 4448;
            goto LABEL_25;
          }
          v7 = *(_QWORD*)(v2 + 7112);
          if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 &&
              *(_QWORD*)(v2 + 7064) == v15) {
            v9 = 6672;
            goto LABEL_25;
          }
          v8 = *(_QWORD*)(v2 + 9336);
          if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 &&
              *(_QWORD*)(v2 + 9288) == v15) {
            v9 = 8896;
          LABEL_25:
            v2 += v9;
            break;
          }
          v2 += 11120;
          v3 -= 5;
          if (v3 == 0) {
            return result;
          }
        }
        v10 = *GameData_21309c8[0];
        if (*GameData_21309c8[0] != 0) {
          if (game_GameModeData_instance_ != 0 &&
                  v15 == *(_QWORD*)(game_GameModeData_instance_ + 96) ||
              (*(_BYTE*)(v2 + 418) & 8) != 0) {
            v11 = 0;
          }
          else {
            LODWORD(v15) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                      game_g_shared_system_skills_ptr) &
                           0xFFF;
            v11 = game_HasSkill(v2 + 1744, &v15) ^ 1;
          }
          GameRoutine_1226ec0(v10, v2, 9, v11 & 1);
        }
        result = UnitActor_819400(v2);
        v16[0] = 9;
        v12 = *(_QWORD*)(v2 + 392);
        if (v12 != 0) {
          if ((game_GameModeData_instance_ == 0 ||
               v12 != *(_QWORD*)(game_GameModeData_instance_ + 96)) &&
              (*(_BYTE*)(v2 + 418) & 8) == 0) {
            LODWORD(v15) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                      game_g_shared_system_skills_ptr) &
                           0xFFF;
            game_HasSkill(v2 + 1744, &v15);
          }
          result = GameRoutine_6c47b0(v2, v16, 1, 0);
          if ((result & 1) != 0) {
            v13 = *GameData_212ce98[0];
            if (*GameData_212ce98[0] != 0) {
              v14 = *(_QWORD*)(v13 + 96);
              Image_72b4a0(v14);
              Image_72b6c0(v14);
              Image_72a260(*(_QWORD*)(v13 + 152));
            }
            return game_UnitActor_TryReload(v2);
          }
        }
      }
    }
  }
  return result;
}

_QWORD* UnitNatives_11857b0(int a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* result;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _BYTE v28[4];

  if (a1 < 0 || (v28[0] = a1, (v7 = game_UnitPool_Get(v28)) == 0) ||
      *(_QWORD*)(v7 + 392) == 0 || (v8 = *(_QWORD*)(v7 + 440)) == 0 ||
      *(unsigned __int8*)(v8 + 16) > 3u || (*(_BYTE*)(v7 + 416) & 8) != 0) {
    v16 = *as_g_script_manager_ptr;
    v17 = *(_QWORD*)(v16 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v17 != 0) {
      v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 472LL))(v17);
    }
    else {
      v18 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v18 + 24) + 448LL))(
        *(_QWORD*)(v18 + 24), 1);
    result = *(_QWORD**)(v18 + 2240);
    *(_QWORD*)(v18 + 2240) = 0;
    if (result == (_QWORD*)(v18 + 2208)) {
      v20 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v20 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v20))((__int64)result);
  }
  v9 = v7;
  v10 = as_g_script_manager_ptr;
  v11 = *as_g_script_manager_ptr;
  v12 = *(
      _QWORD*)(v11 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 472LL))(v12);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v13 + 24) + 456LL))(
           *(_QWORD*)(v13 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  v14 = StringIsEmpty_25eef0(a3);
  if ((v14 & 1) != 0) {
    v15 = 0;
  }
  else {
    v14 = as_string_c_str(a3);
    v15 = v14;
  }
  v21 = game_script_GetCurrentProc(v14);
  v22 = GameRoutine_76ad80(v21, v9, (unsigned int)-a2, 0, v15, a4);
  v23 = game_script_StartWaitProc(v22);
  v24 = game_script_GetCurrentProc(v23);
  GameRoutine_657c40(v24);
  v25 = *v10;
  v26 = *(
      _QWORD*)(v25 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 472LL))(v26);
  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v27 + 24) + 448LL))(*(_QWORD*)(v27 + 24), 0);
}

_QWORD* UnitNatives_11859d0(int a1, unsigned int a2, unsigned int a3,
                            __int64 a4, unsigned int a5)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* result;
  __int64 v21;
  __int64* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  float v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _BYTE v36[4];

  if (a1 < 0 || (v36[0] = a1, (v9 = game_UnitPool_Get(v36)) == 0) ||
      *(_QWORD*)(v9 + 392) == 0 || (v10 = *(_QWORD*)(v9 + 440)) == 0 ||
      *(unsigned __int8*)(v10 + 16) >= 4u) {
    v17 = *as_g_script_manager_ptr;
    v18 = *(_QWORD*)(v17 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v18 != 0) {
      v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 472LL))(v18);
    }
    else {
      v19 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v19 + 24) + 448LL))(
        *(_QWORD*)(v19 + 24), 1);
    result = *(_QWORD**)(v19 + 2240);
    *(_QWORD*)(v19 + 2240) = 0;
    if (result == (_QWORD*)(v19 + 2208)) {
      v21 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v21 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v21))((__int64)result);
  }
  v11 = v9;
  v12 = as_g_script_manager_ptr;
  v13 = *as_g_script_manager_ptr;
  v14 = *(
      _QWORD*)(v13 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 472LL))(v14);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v15 + 24) + 456LL))(
           *(_QWORD*)(v15 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  if ((StringIsEmpty_25eef0(a4) & 1) != 0) {
    v16 = 0;
  }
  else {
    v16 = as_string_c_str(a4);
  }
  v22 = GameData_212cfb0[0];
  v23 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v23 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v23 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v24 = v23[10];
    if (v24 != 0) {
      v25 = *(_QWORD*)(*(_QWORD*)(v23[6] + 8 * ((v24 + v23[9] - 1) / 0x33uLL)) +
                       80 * ((v24 + v23[9] - 1) % 0x33uLL) + 72);
      goto LABEL_28;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v25 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_28;
  }
  v25 = 0;

LABEL_28:
  v26 = GameRoutine_76ad80(v25, v11, a2, a3, v16, a5);
  game_script_StartWaitProc(v26);
  v27 = (_QWORD*)*v22;
  if (*v22 != 0 ||
      (v27 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v27 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v28 = v27[10];
    if (v28 != 0) {
      v29 = *(_QWORD*)(*(_QWORD*)(v27[6] + 8 * ((v28 + v27[9] - 1) / 0x33uLL)) +
                       80 * ((v28 + v27[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v29 = 0;
    }
  }
  else {
    v29 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v29 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v30 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v31 = 2)
           : (v31 = 3),
       (v31 & v30) != 0)) {
    v32 = *(float*)(v29 + 144);
    if (v32 < 1.0f) {
      v32 = 1.0f;
    }
    *(_WORD*)(v29 + 136) = *(_WORD*)(v29 + 136) & 0xFF97 | 0x20;
    *(float*)(v29 + 144) = v32;
  }
  v33 = *v12;
  v34 = *(
      _QWORD*)(v33 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v35 = (*(__int64 (**)(__int64))(*(_QWORD*)v34 + 472LL))(v34);
  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v35 + 24) + 448LL))(*(_QWORD*)(v35 + 24), 0);
}

_QWORD* UnitNatives_1185d70(int a1, unsigned int a2, __int64 a3,
                            unsigned int a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* result;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _BYTE v19[4];

  if ((a1 & 0x80000000) == 0) {
    v19[0] = a1;
    v7 = game_UnitPool_Get(v19);
    if (v7 != 0 && *(_QWORD*)(v7 + 392) != 0) {
      v8 = *(_QWORD*)(v7 + 440);
      if (v8 != 0 && *(unsigned __int8*)(v8 + 16) < 4u) {
        v9 = v7;
        if ((StringIsEmpty_25eef0(a3) & 1) != 0) {
          v10 = 0;
        }
        else {
          v10 = as_string_c_str(a3);
        }
        v16 = (_QWORD*)GameData_21cd150;
        if (GameData_21cd150 != 0 ||
            (v16 = (_QWORD*)GameData_22054a0, GameData_22054a0 != 0) ||
            (v16 = (_QWORD*)GameData_22054a8, GameData_22054a8 != 0)) {
          v17 = v16[10];
          if (v17 != 0) {
            v18 = *(_QWORD*)(*(_QWORD*)(v16[6] +
                                        8 * ((v17 + v16[9] - 1) / 0x33uLL)) +
                             80 * ((v17 + v16[9] - 1) % 0x33uLL) + 72);
            return (_QWORD*)GameRoutine_76ad80(v18, v9, a2, 3, v10, a4);
          }
        }
        else if (game_hub_ProcHubSeqView_instance_ != 0) {
          v18 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
          return (_QWORD*)GameRoutine_76ad80(v18, v9, a2, 3, v10, a4);
        }
        v18 = 0;
        return (_QWORD*)GameRoutine_76ad80(v18, v9, a2, 3, v10, a4);
      }
    }
  }
  v11 = as_g_script_manager;
  v12 = *(
      _QWORD*)(v11 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v12 != 0) {
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 472LL))(v12);
  }
  else {
    v13 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v13 + 24) + 448LL))(
      *(_QWORD*)(v13 + 24), 1);
  result = *(_QWORD**)(v13 + 2240);
  *(_QWORD*)(v13 + 2240) = 0;
  if (result == (_QWORD*)(v13 + 2208)) {
    v15 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v15))((__int64)result);
  }
  if (result != nullptr) {
    v15 = 40;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v15))((__int64)result);
  }
  return result;
}

__int64 UnitNatives_11873e0(__int64 result, char a2)
{
  __int64 v3;
  __int64 v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  char* v15;
  int v16;
  int v17;
  __int64 v19;
  __int64 v20;
  char v21[4];

  if ((result & 0x80000000) == 0) {
    v21[0] = result;
    result = game_UnitPool_Get(v21);
    if (result != 0) {
      v3 = result;
      if (*(_QWORD*)(result + 392) != 0) {
        v4 = *(_QWORD*)(result + 440);
        if (v4 != 0 && *(unsigned __int8*)(v4 + 16) <= 3u) {
          if ((*(_DWORD*)(result + 1872) & 0xFFF) != 0) {
            v5 = *(char**)(result + 608);
            v6 = *(char**)(result + 600);
            v7 = v5 - v6;
            if ((int)((unsigned __int64)(v5 - v6) >> 2) < 1) {
              v10 = 0;
            }
            else {
              v8 = (v7 >> 2) & 7;
              if (((v7 >> 2) & 0x7FFFFFFF) - 1 >= 7) {
                v11 = v6 + 18;
                v12 = 0;
                v13 = -8LL * ((v7 >> 5) & 0xFFFFFFF);
                v10 = 255;
                do {
                  v12 -= 8;
                  if (v10 >= *(v11 - 16)) {
                    v10 = *(v11 - 16);
                  }
                  if (v10 >= *(v11 - 12)) {
                    v10 = *(v11 - 12);
                  }
                  if (v10 >= *(v11 - 8)) {
                    v10 = *(v11 - 8);
                  }
                  if (v10 >= *(v11 - 4)) {
                    v10 = *(v11 - 4);
                  }
                  if (v10 >= *v11) {
                    v10 = *v11;
                  }
                  if (v10 >= v11[4]) {
                    v10 = v11[4];
                  }
                  if (v10 >= v11[8]) {
                    v10 = v11[8];
                  }
                  v14 = v11[12];
                  v11 += 32;
                  if (v10 >= v14) {
                    v10 = v14;
                  }
                } while (v13 != v12);
                v9 = -v12;
              }
              else {
                v9 = 0;
                v10 = 255;
              }
              if (v8 != 0) {
                v15 = &v6[4 * v9 + 2];
                do {
                  v17 = *v15;
                  v15 += 4;
                  v16 = v17;
                  if (v10 >= v17) {
                    v10 = v16;
                  }
                  --v8;
                } while (v8 != 0);
              }
            }
            if (v10 <
                    *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 +
                                                              64) +
                                                   8LL * (*(_DWORD*)(result +
                                                                     1872) &
                                                          0xFFF)) +
                                        273LL) &&
                v6 != v5) {
              do {
                result = _ZN4game4Unit14RepairBarrierEPKS0_iib(
                    v3, 0, (unsigned int)*v6, (unsigned int)v6[1], a2 & 1);
                v6 += 4;
              } while (v6 != v5);
            }
          }
          if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
              (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
            v19 = *(_QWORD*)(v3 + 440);
            if (v19 != 0 && *(unsigned __int8*)(v19 + 16) <= 8u &&
                game_map_UnitFlags_instance_ != 0) {
              v20 = *(unsigned __int8*)(v3 + 2088);
              if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v20) & 1) !=
                  0) {
                *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v20) |= 2u;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

_BYTE* UnitNatives_1187600(__int64 a1, char a2)
{
  _BYTE* result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  char* v23;
  int v24;
  int v25;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  result = (_BYTE*)as_string_c_str(a1);
  if (*result != 0) {
    result = (_BYTE*)GameRoutine_682bc0(&v29, result);
    if (v29 != 0) {
      v4 = *(_QWORD*)(GameData_21ca310 + 56);
      if (v4 != 0) {
        v5 = 250;
        while (1) {
          v6 = *(_QWORD*)(v4 + 440);
          if (v6 != 0) {
            v7 = *(unsigned __int8*)(v6 + 16);
            if (v7 != 9 && *(_QWORD*)(v4 + 392) == v29) {
              break;
            }
          }
          v8 = *(_QWORD*)(v4 + 2664);
          if (v8 != 0) {
            v7 = *(unsigned __int8*)(v8 + 16);
            if (v7 != 9 && *(_QWORD*)(v4 + 2616) == v29) {
              v4 += 2224;
              break;
            }
          }
          v9 = *(_QWORD*)(v4 + 4888);
          if (v9 != 0) {
            v7 = *(unsigned __int8*)(v9 + 16);
            if (v7 != 9 && *(_QWORD*)(v4 + 4840) == v29) {
              v12 = 4448;
              goto LABEL_25;
            }
          }
          v10 = *(_QWORD*)(v4 + 7112);
          if (v10 != 0) {
            v7 = *(unsigned __int8*)(v10 + 16);
            if (v7 != 9 && *(_QWORD*)(v4 + 7064) == v29) {
              v12 = 6672;
              goto LABEL_25;
            }
          }
          v11 = *(_QWORD*)(v4 + 9336);
          if (v11 != 0) {
            v7 = *(unsigned __int8*)(v11 + 16);
            if (v7 != 9 && *(_QWORD*)(v4 + 9288) == v29) {
              v12 = 8896;
            LABEL_25:
              v4 += v12;
              break;
            }
          }
          v4 += 11120;
          v5 -= 5;
          if (v5 == 0) {
            return result;
          }
        }
        if (v7 <= 3) {
          if ((*(_DWORD*)(v4 + 1872) & 0xFFF) != 0) {
            v13 = *(char**)(v4 + 608);
            v14 = *(char**)(v4 + 600);
            v15 = v13 - v14;
            if ((int)((unsigned __int64)(v13 - v14) >> 2) < 1) {
              v18 = 0;
            }
            else {
              v16 = (v15 >> 2) & 7;
              if (((v15 >> 2) & 0x7FFFFFFF) - 1 >= 7) {
                v19 = v14 + 18;
                v20 = 0;
                v21 = -8LL * ((v15 >> 5) & 0xFFFFFFF);
                v18 = 255;
                do {
                  v20 -= 8;
                  if (v18 >= *(v19 - 16)) {
                    v18 = *(v19 - 16);
                  }
                  if (v18 >= *(v19 - 12)) {
                    v18 = *(v19 - 12);
                  }
                  if (v18 >= *(v19 - 8)) {
                    v18 = *(v19 - 8);
                  }
                  if (v18 >= *(v19 - 4)) {
                    v18 = *(v19 - 4);
                  }
                  if (v18 >= *v19) {
                    v18 = *v19;
                  }
                  if (v18 >= v19[4]) {
                    v18 = v19[4];
                  }
                  if (v18 >= v19[8]) {
                    v18 = v19[8];
                  }
                  v22 = v19[12];
                  v19 += 32;
                  if (v18 >= v22) {
                    v18 = v22;
                  }
                } while (v21 != v20);
                v17 = -v20;
              }
              else {
                v17 = 0;
                v18 = 255;
              }
              if (v16 != 0) {
                v23 = &v14[4 * v17 + 2];
                do {
                  v25 = *v23;
                  v23 += 4;
                  v24 = v25;
                  if (v18 >= v25) {
                    v18 = v24;
                  }
                  --v16;
                } while (v16 != 0);
              }
            }
            if (v18 <
                    *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 +
                                                              64) +
                                                   8LL *
                                                       (*(_DWORD*)(v4 + 1872) &
                                                        0xFFF)) +
                                        273LL) &&
                v14 != v13) {
              do {
                result = (_BYTE*)_ZN4game4Unit14RepairBarrierEPKS0_iib(
                    v4, 0, (unsigned int)*v14, (unsigned int)v14[1], a2 & 1);
                v14 += 4;
              } while (v14 != v13);
            }
          }
          if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
              (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
            v27 = *(_QWORD*)(v4 + 440);
            if (v27 != 0 && *(unsigned __int8*)(v27 + 16) <= 8u &&
                game_map_UnitFlags_instance_ != 0) {
              v28 = *(unsigned __int8*)(v4 + 2088);
              if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v28) & 1) !=
                  0) {
                *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v28) |= 2u;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 UnitNatives_1187e60(__int64 a1, __int64 a2, char a3)
{
  _BYTE* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;

  v5 = (_BYTE*)as_string_c_str(a1);
  if (*v5 != 0 && (GameRoutine_682bc0(&v18, v5), v18 != 0)) {
    v6 = *(_QWORD**)(GameData_21ca310 + 56);
    if (v6 != nullptr) {
      v7 = 250;
      while (1) {
        v8 = v6[55];
        if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && v6[49] == v18) {
          goto LABEL_23;
        }
        v9 = v6[333];
        if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && v6[327] == v18) {
          v6 += 278;
          goto LABEL_23;
        }
        v10 = v6[611];
        if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 && v6[605] == v18) {
          break;
        }
        v11 = v6[889];
        if (v11 != 0 && *(_BYTE*)(v11 + 16) != 9 && v6[883] == v18) {
          v13 = 6672;
          goto LABEL_35;
        }
        v12 = v6[1167];
        if (v12 != 0 && *(_BYTE*)(v12 + 16) != 9 && v6[1161] == v18) {
          v13 = 8896;
        LABEL_35:
          v6 = (_QWORD*)((char*)v6 + v13);
          goto LABEL_23;
        }
        v6 += 1390;
        v7 -= 5;
        if (v7 == 0) {
          goto LABEL_22;
        }
      }
      v13 = 4448;
      goto LABEL_35;
    }
  }
  else {
  LABEL_22:
    v6 = nullptr;
  }

LABEL_23:
  v14 = (_QWORD*)GameData_21cd150;
  if (GameData_21cd150 == 0) {
    v14 = (_QWORD*)GameData_22054a0;
    if (GameData_22054a0 == 0) {
      v14 = (_QWORD*)GameData_22054a8;
      if (GameData_22054a8 == 0) {
        if (game_hub_ProcHubSeqView_instance_ != 0) {
          v16 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
          return GameRoutine_1189a20(v16, v6, a2, a3 & 1);
        }
      LABEL_30:
        v16 = 0;
        return GameRoutine_1189a20(v16, v6, a2, a3 & 1);
      }
    }
  }
  v15 = v14[10];
  if (v15 == 0) {
    goto LABEL_30;
  }
  v16 = *(_QWORD*)(*(_QWORD*)(v14[6] + 8 * ((v15 + v14[9] - 1) / 0x33uLL)) +
                   80 * ((v15 + v14[9] - 1) % 0x33uLL) + 72);
  return GameRoutine_1189a20(v16, v6, a2, a3 & 1);
}

_QWORD* UnitNatives_1188050(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  int v7;
  int v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  float v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  v6 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v7 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v8 = (v7 & 8) != 0 ? 2 : 3;
    if ((v8 & v7) == 0) {
      v14 = *v2;
      v15 = *(_QWORD*)(v14 +
                       8LL * (*(unsigned int (**)(__int64))(
                                 *(_QWORD*)as_g_thread_info + 72LL))(
                                 as_g_thread_info) +
                       4384);
      if (v15 != 0) {
        v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 472LL))(v15);
      }
      else {
        v16 = 0;
      }
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v16 + 24) + 448LL))(
          *(_QWORD*)(v16 + 24), 1);
      result = *(_QWORD**)(v16 + 2240);
      *(_QWORD*)(v16 + 2240) = 0;
      if (result == (_QWORD*)(v16 + 2208)) {
        v30 = 32;
      }
      else {
        if (result == nullptr) {
          return result;
        }
        v30 = 40;
      }
      return (_QWORD*)(*(__int64 (**)(void*))(*result + v30))(result);
    }
  }
  v9 = GameData_212cfb0[0];
  v10 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v10 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v10 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v11 = v10[10];
    if (v11 != 0) {
      v12 = *(_QWORD*)(*(_QWORD*)(v10[6] + 8 * ((v11 + v10[9] - 1) / 0x33uLL)) +
                       80 * ((v11 + v10[9] - 1) % 0x33uLL) + 72);
      goto LABEL_19;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v12 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_19;
  }
  v12 = 0;

LABEL_19:
  if (game_ProcGameSkipView_instance_ != 0) {
    if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3) {
      v6 = 0;
      v19 = 0;
      if (a1 == 0) {
        goto LABEL_34;
      }
    LABEL_28:
      if ((v6 & 1) == 0) {
        if (*(_QWORD*)(a1 + 392) != 0 && (v20 = *(_QWORD*)(a1 + 440)) != 0 &&
            *(unsigned __int8*)(v20 + 16) <= 3u &&
            (GameRoutine_118a5a0(a1) & 1) == 0) {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_223dad0,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_223dad0) != 0) {
            GameData_223da50 = 14;
            GameData_223da70 = 0;
            GameData_223da78 = 0;
            GameData_223da80 = 0;
            GameData_223da88 = 0;
            GameData_223da90 = 0;
            GameData_223dab8 = 0;
            GameData_223dac0 = 0;
            GameData_223dac8 = 0;
            GameData_223da98 = 0;
            GameData_223daa0 = 0;
            GameData_223daa8 = 0;
            GameData_223dab0 = 0;
            GameData_223da58 = 0;
            GameData_223da60 = 16;
            GameData_223da68 = 1;
            __cxa_guard_release(&GameData_223dad0);
          }
          v31 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
          v32 = GameData_212c608[0];
          *(_QWORD*)(v31 + 96) = 0;
          *(_QWORD*)(v31 + 104) = 0;
          *(_QWORD*)(v31 + 112) = 0;
          *(_QWORD*)(v31 + 120) = 0;
          *(_QWORD*)(v31 + 128) = 0;
          *(_WORD*)(v31 + 136) = 0;
          *(_QWORD*)(v31 + 16) = 0;
          *(_QWORD*)(v31 + 24) = "NULL";
          *(_QWORD*)(v31 + 138) = 0;
          *(_QWORD*)(v31 + 144) = 0;
          *(_QWORD*)(v31 + 32) = 0;
          *(_QWORD*)(v31 + 40) = 0;
          *(_QWORD*)(v31 + 48) = 0;
          *(_QWORD*)(v31 + 56) = 0;
          *(_QWORD*)(v31 + 64) = 0;
          *(_QWORD*)(v31 + 72) = 0;
          *(_QWORD*)(v31 + 80) = 0;
          *(_QWORD*)(v31 + 88) = 0;
          *(_QWORD*)v31 = v32 + 16;
          *(_QWORD*)(v31 + 8) = 0;
          game_ProcInst_Register(v31);
          *(_QWORD*)(v31 + 152) = a1;
          *(_QWORD*)v31 = anonymous_MotionWaitProc_vtable;
          v19 = GameRoutine_657850(v31, &GameData_223da50, "MotionWaitProc", 1,
                                   v12);
        }
        else {
          v19 = 0;
        }
      }
      goto LABEL_34;
    }
    v17 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v17 & 8) != 0) {
      v18 = 2;
    }
    else {
      v18 = 3;
    }
    v6 = (v18 & v17) == 0;
  }
  v19 = 0;
  if (a1 != 0) {
    goto LABEL_28;
  }

LABEL_34:
  game_script_StartWaitProc(v19);
  v21 = (_QWORD*)*v9;
  if (*v9 != 0 ||
      (v21 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v21 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v22 = v21[10];
    if (v22 != 0) {
      v23 = *(_QWORD*)(*(_QWORD*)(v21[6] + 8 * ((v22 + v21[9] - 1) / 0x33uLL)) +
                       80 * ((v22 + v21[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v23 = 0;
    }
  }
  else {
    v23 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v23 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v24 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v25 = 2)
           : (v25 = 3),
       (v25 & v24) != 0)) {
    v26 = *(float*)(v23 + 144);
    if (v26 < 1.0) {
      v26 = 1.0;
    }
    *(_WORD*)(v23 + 136) = *(_WORD*)(v23 + 136) & 0xFF97 | 0x20;
    *(float*)(v23 + 144) = v26;
  }
  v27 = *v2;
  v28 = *(
      _QWORD*)(v27 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 472LL))(v28);
  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v29 + 24) + 448LL))(*(_QWORD*)(v29 + 24), 0);
}

#pragma GCC visibility pop
