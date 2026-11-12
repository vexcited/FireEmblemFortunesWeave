#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AsyncLoadThumbImage_188f620(void);
__int64 GameRoutine_1890220(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_18a57c0(void);
__int64 GameRoutine_18a82e0(void);
__int64 GameRoutine_18a8b50(void);
__int64 GameRoutine_18a8f40(void);
__int64 GameRoutine_18a9940(void);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 StatusItem_188e530(__int64 a1, __int64 a2);
__int64 StatusItem_188e720(_QWORD* a1);
__int64 StatusItem_188e7e0(__int64 a1);
__int64 StatusItem_188e890(__int64 a1, __int64* a2);
__int64 Element_18850d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1888c80(__int64, __int64, __int64);
__int64 GameRoutine_18b26a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576600(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
__n128 GameRoutine_188d7a0(_QWORD*);
extern __int64 (*GameData_2100080[])();
extern __int64 (*GameData_2100120[])();
extern __int64 (*GameData_21002f8[])();
extern __int64 (*StatusItem_188e7e0_ptr[])();
extern __int64 (
    *game_gameui_control_StatusItem_Destroy_StatusItem_188ecc0_ptr[])();
extern __int64 (*game_gameui_control_StatusItem_vtable[])();
extern __int64* GameData_2132080[6];
extern __int64 GameData_21000c8;
extern __int64 GameData_21000d8;
extern __int64 GameData_21000e8;
extern __int64 GameData_21000f8;
extern __int64 GameData_2100108;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_21000c0;
extern char* GameData_21000d0;
extern char* GameData_21000e0;
extern char* GameData_21000f0;
extern char* GameData_2100100;
__attribute__((swiftcall)) void StatusItem_188dba0(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2, __int64 a3);
__attribute__((swiftcall)) void StatusItem_188de10(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2);
__int64 Alignment_56b600(__int64 result);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 LayoutAccessor_1562060(__int64 result, __int64, __int64);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 LayoutAccessor_15636c0_alt1(__int64 result, __int64, char,
                                    float) __asm__("LayoutAccessor_15636c0");
__int64 StatusNum_1890080(__int64);
__int64 StatusNum_1890ba0(__int64, int*, char, char, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
bool Util_1579d20(__int64, __int64);
bool Util_1584ac0(__int64, unsigned __int8**);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
float LayoutAccessor_15638b0(__int64*, const char*, char);
void AsyncLoadThumbImage_188f320(__int64, unsigned int, char, char,
                                 unsigned __int8);
void GameRoutine_156c5d0(__int64, __int64, char);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 StatusItem_188df50(__int64* a1, unsigned int* a2, __int64 a3,
                           __int64 a4);

__attribute__((swiftcall)) void StatusItem_188dba0(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
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
  __int64 result;
  __int64 v25;
  __int64 v26;

  v8 = (_QWORD*)LayoutEx_579160(1176, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_2100120;
  GameRoutine_18b26a0(v8 + 3, a1, a2, a3);
  v10[138] = 0;
  v10[139] = 0;
  v10[140] = 0;
  v10[3] = game_gameui_control_StatusItem_vtable;
  v10[141] = 0;
  v10[142] = 0;
  v10[143] = 0;
  v10[145] = 0;
  v10[132] = StatusItem_188e7e0_ptr;
  v10[12] = GameData_2100080;
  *((_DWORD*)v10 + 288) = 42;
  *(_QWORD*)((char*)v10 + 1166) = 0;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v13 = GameData_21000f8;
  v12[6] = GameData_21000f0;
  v12[7] = v13;
  v14 = GameData_2100108;
  v12[8] = GameData_2100100;
  v12[9] = v14;
  v15 = GameData_21000d8;
  v12[2] = GameData_21000d0;
  v12[3] = v15;
  v16 = GameData_21000e8;
  v12[4] = GameData_21000e0;
  v12[5] = v16;
  v17 = GameData_21000c8;
  *v12 = GameData_21000c0;
  v12[1] = v17;
  v18 = GameRoutine_576600(a1, "Name");
  if (v18 != 0) {
    v25 = v18;
    v26 = strlen(v18);
    if (v26 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)v12, (__int64)&v25);
    }
  }
  v19 = GameRoutine_576600(a1, v12[2]);
  if (v19 != 0) {
    v25 = v19;
    v26 = strlen(v19);
    if (v26 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)(v12 + 2),
                          (__int64)&v25);
    }
  }
  v20 = GameRoutine_576600(a1, v12[4]);
  if (v20 != 0) {
    v25 = v20;
    v26 = strlen(v20);
    if (v26 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)(v12 + 4),
                          (__int64)&v25);
    }
  }
  v21 = GameRoutine_576600(a1, v12[6]);
  if (v21 != 0) {
    v25 = v21;
    v26 = strlen(v21);
    if (v26 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)(v12 + 6),
                          (__int64)&v25);
    }
  }
  v22 = GameRoutine_576600(a1, v12[8]);
  if (v22 != 0) {
    v25 = v22;
    v26 = strlen(v22);
    if (v26 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)(v12 + 8),
                          (__int64)&v25);
    }
  }
  GameRoutine_188d7a0(v9);
  v23 = 128;
  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
    v23 = 56;
  }
  result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v23);
  *a4 = v9;
  a4[1] = v10;
  v10[3] = game_gameui_control_StatusItem_Destroy_StatusItem_188ecc0_ptr;
  v10[12] = GameData_21002f8;
  v10[132] = StatusItem_188e7e0_ptr;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void StatusItem_188de10(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  int v13;

  v6 = (_QWORD*)LayoutEx_579160(1176, 8);
  v7 = v6 + 3;
  v8 = v6;
  v6[1] = 0;
  v6[2] = 0;
  *v6 = GameData_2100120;
  Element_18850d0(v6 + 3, a1, a2);
  v9 = v8 + 134;
  v10 = GameData_2132080[0];
  v8[3] = GameData_2132080[0] + 2;
  v8[12] = v10 + 51;
  v8[132] = v10 + 56;
  *((_DWORD*)v8 + 266) = *(_DWORD*)(a1 + 1040);
  *((_BYTE*)v8 + 1068) = *(_BYTE*)(a1 + 1044);
  if ((*(_BYTE*)(a1 + 1048) & 1) != 0) {
    fw_text_String_CopyTerminated(v9, *(_QWORD*)(a1 + 1064),
                                  *(_QWORD*)(a1 + 1056));
  }
  else {
    v11 = *(_QWORD*)(a1 + 1048);
    v12 = *(_QWORD*)(a1 + 1064);
    v8[135] = *(_QWORD*)(a1 + 1056);
    v8[136] = v12;
    *v9 = v11;
  }
  v8[138] = 0;
  v8[139] = 0;
  v8[3] = game_gameui_control_StatusItem_vtable;
  v8[140] = 0;
  v8[141] = 0;
  v8[142] = 0;
  v8[143] = 0;
  v8[12] = GameData_2100080;
  v8[132] = StatusItem_188e7e0_ptr;
  v13 = *(_DWORD*)(a1 + 1128);
  v8[145] = 0;
  *((_DWORD*)v8 + 288) = v13;
  *(_QWORD*)((char*)v8 + 1166) = 0;
  GameRoutine_188d7a0(v7);
  *a3 = v7;
  a3[1] = v8;
  v8[3] = game_gameui_control_StatusItem_Destroy_StatusItem_188ecc0_ptr;
  v8[12] = GameData_21002f8;
  v8[132] = StatusItem_188e7e0_ptr;
}

__int64 StatusItem_188df50(__int64* a1, unsigned int* a2, __int64 a3,
                           __int64 a4)
{

#pragma clang fp contract(off)
  void (*v5)(__int64*, __int64);
  __int64 result;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  bool v24;
  __int64 v25;
  bool v26;
  __int64 v27;
  __int64* v28;
  char v29;
  char v30;
  __int64 v31;
  int* v32;
  char v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  const char* v39;
  float v40;
  float v41;
  const char* v42;
  float v43;
  const char* v44;
  __int64 v45;
  struct {
    __int128 v46;
    const char* v47;
    unsigned __int64 v48;
    int v49;
    int v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
  } v46_;

  v5 = *(void (**)(__int64*, __int64))(*a1 + 40);
  if (*a2 == 42) {
    return ((__int64 (*)(__int64*, _QWORD, __int64, __int64))v5)(a1, 0, a3, a4);
  }
  v8 = a3;
  v9 = a4;
  v5(a1, 1);
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)(a1 + 11), (__int64)"T_Txt",
                                        0);
  v10 = a1[136];
  *((_DWORD*)a1 + 282) = *a2;
  if (v10 != 0) {
    v11 = std___1___shared_weak_count_lock_alt1(v10);
    if (v11 != 0) {
      v12 = v11;
      v13 = a1[135];
      if (v13 != 0) {
        AsyncLoadThumbImage_188f320(v13, *a2, *((_BYTE*)a2 + 5),
                                    *((_BYTE*)a1 + 1146), *((_BYTE*)a1 + 1148));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak_alt1(v12);
      }
    }
  }
  v14 = *a2 - 25;
  if (v14 >= 3) {
    LayoutAccessor_1562cf0_alt1((__int64)(a1 + 11), "HellPoint");
    LayoutAccessor_15636c0_alt1((__int64)(a1 + 11), (__int64)"HellPoint", 0,
                                0x0.0p+0f);
  }
  result = a1[138];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v15 = a1[137];
      if (v15 == 0) {
        goto LABEL_46;
      }
      v16 = *a2;
      if ((int)*a2 <= 38) {
        if (v16 == 20) {
          v17 = result;
          v29 = v8 & 1;
          v30 = v9 & 1;
          v31 = a1[137];
          v32 = (int*)a2;
          v33 = 0;
        }
        else {
          if (v16 == 19) {
            v17 = result;
            StatusNum_1890080(a1[137]);
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v15 + 40LL))(v15, 0);
            v46_.v51 = -1;
            v46_.v52 = -1;
            v46_.v53 = -1;
            v46_.v54 = -1;
            v18 = *msg_MessageManager_instance__ptr[0];
            v46_.v55 = -1;
            v46_.v56 = -1;
            v46_.v57 = -1;
            v46_.v58 = -1;
            v46_.v59 = -1;
            v46_.v60 = -1;
            v46_.v61 = -1;
            v46_.v62 = -1;
            *(_QWORD*)&v46_.v46 = GameData_212e348 + 2;
            *((_QWORD*)&v46_.v46 + 1) = 0xFFFF0001FFFF0000LL;
            v46_.v47 = (const char*)0xFFFF0004FFFF0002LL;
            v46_.v48 = 0xFFFF0006FFFF0005LL;
            v46_.v63 = 8;
            v46_.v49 = -65529;
            v46_.v50 = -65528;
            v19 = GameRoutine_a4dbe0(v18, "MID_Sys_Self", 0);
            if (v19 != nullptr) {
              v20 = (__int64)v19;
              v21 = ui_LayoutAccessor_FindTextBox(a1 + 11, (__int64)"T_Txt");
              if (v21 != 0) {
                GameRoutine_156c5d0(v21, v20, 0);
              }
            }
            v22 = a1 + 11;
            goto LABEL_21;
          }
          if (v14 <= 2) {
            v17 = result;
            StatusNum_1890080(a1[137]);
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v15 + 40LL))(v15, 0);
            v36 = *a2;
            if ((*a2 > 0x29 || ((1LL << v36) & 0x38000020000LL) == 0) &&
                (int)a2[4] >= 1) {
              v46_.v47 = nullptr;
              v46_.v46 = (__typeof__(v46_.v46)){0};
              switch (v36) {
              case 0x1Bu:
                LOBYTE(v46_.v46) = 24;
                *(_DWORD*)((char*)&v46_.v46 + 9) = 1953393007;
                v39 = "MachinePoint";
                break;
              case 0x1Au:
                LOBYTE(v46_.v46) = 22;
                DWORD2(v46_.v46) = 1953393007;
                v39 = "HeavenPoint";
                break;
              case 0x19u:
                LOBYTE(v46_.v46) = 18;
                BYTE9(v46_.v46) = 116;
                v39 = "HellPoint";
                break;
              default:
                goto LABEL_61;
              }
              *(_QWORD*)((char*)&v46_.v46 + 1) = *(_QWORD*)v39;
            LABEL_61:
              v40 = 0x0.0p+0f;
              GameHr_1562680((__int64)(a1 + 11), (const char*)&v46_.v46 + 1,
                             0x0.0p+0f);
              if (*a2 > 0x29 || ((1LL << *a2) & 0x38000020000LL) == 0) {
                v40 = (float)(int)a2[4];
              }
              v41 = v40 / 0x1.8000000000000p+3f;
              if ((v46_.v46 & 1) != 0) {
                v42 = v46_.v47;
              }
              else {
                v42 = (char*)&v46_.v46 + 1;
              }
              v43 = v41 * LayoutAccessor_15638b0(a1 + 11, v42, 0);
              if ((v46_.v46 & 1) != 0) {
                v44 = v46_.v47;
              }
              else {
                v44 = (char*)&v46_.v46 + 1;
              }
              LayoutAccessor_15636c0_alt1((__int64)(a1 + 11), (__int64)v44, 0,
                                          v43);
              if ((v46_.v46 & 1) != 0 && v46_.v47 != nullptr) {
                v45 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v45 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v45,
                    (__int64)v46_.v47);
              }
              goto LABEL_36;
            }
            v27 = *a1;
            v28 = a1;
            goto LABEL_44;
          }
          v17 = result;
          if (v16 == 17 && (*((_BYTE*)a1 + 1149) & 1) != 0) {
            StatusNum_1890080(a1[137]);
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v15 + 40LL))(v15, 0);
            LayoutAccessor_1562060((__int64)(a1 + 11), (__int64)"T_Txt",
                                   (__int64)"MID_Sys_RangeOther");
            v22 = a1 + 11;
          LABEL_21:
            ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v22,
                                                  (__int64)"T_Txt", 1);
          LABEL_36:
            v34 = a1[139];
            result = v17;
            if (v34 != 0) {
              *(_BYTE*)(v34 + 88) &= ~1u;
            }
            v35 = a1[140];
            if (v35 != 0) {
              *(_BYTE*)(v35 + 88) &= ~1u;
            }
            goto LABEL_46;
          }
          v33 = *((_BYTE*)a1 + 1148);
          v29 = v8 & 1;
          v30 = v9 & 1;
          v31 = a1[137];
          v32 = (int*)a2;
        }
        StatusNum_1890ba0(v31, v32, v29, v30, v33);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v15 + 40LL))(v15, 1);
        goto LABEL_36;
      }
      if (v16 - 40 >= 2) {
        if (v16 != 39) {
          v37 = result;
          StatusNum_1890080(v15);
          result = v37;
        LABEL_46:
          if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v38 = result;
            (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
            return std___1___shared_weak_count___release_weak_alt1(v38);
          }
          return result;
        }
        v23 = a1[139];
        if (v23 == 0) {
          goto LABEL_46;
        }
        v17 = result;
        if (*((_BYTE*)a2 + 4) == 1) {
          v26 = Util_1584ac0(a1[139], *((unsigned __int8***)a2 + 2));
          v23 = a1[139];
          if (v26) {
            *(_BYTE*)(v23 + 88) |= 1u;
            v25 = a1[139];
            goto LABEL_32;
          }
        }
      }
      else {
        v23 = a1[140];
        if (v23 == 0) {
          goto LABEL_46;
        }
        v17 = result;
        if (*((_BYTE*)a2 + 4) == 1) {
          v24 = Util_1579d20(a1[140], (__int64)(a2 + 8));
          v23 = a1[140];
          if (v24) {
            *(_BYTE*)(v23 + 88) |= 1u;
            v25 = a1[140];
          LABEL_32:
            Alignment_56b600(v25);
            v27 = *(_QWORD*)v15;
            v28 = (__int64*)v15;
          LABEL_44:
            (*(void (**)(__int64*, _QWORD))(v27 + 40))(v28, 0);
            result = v17;
            goto LABEL_46;
          }
        }
      }
      *(_BYTE*)(v23 + 88) &= ~1u;
      StatusNum_1890080(v15);
      result = v17;
      goto LABEL_46;
    }
  }
  return result;
}

__int64 StatusItem_188e530(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  char v16[4];
  char v17[4];

  *(_QWORD*)(a1 + 1136) = a2;
  *(_BYTE*)(a1 + 1145) = 1;
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, "T_Txt", 0);
  v4 = *(_QWORD*)(a1 + 1088);
  if (v4 != 0) {
    v5 = std___1___shared_weak_count_lock(v4);
    if (v5 != 0) {
      v6 = v5;
      if (*(_QWORD*)(a1 + 1080) != 0) {
        AsyncLoadThumbImage_188f620();
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  LayoutAccessor_1562cf0(a1 + 88, "HellPoint");
  LayoutAccessor_15636c0(a1 + 88, "HellPoint", 0);
  result = *(_QWORD*)(a1 + 1104);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v8 = *(_QWORD*)(a1 + 1096);
      v9 = result;
      if (v8 != 0) {
        v16[0] = 1;
        v10 = game_Unit_GetParam(a2, v16, 1);
        v11 = *(char*)(a2 + 807);
        v17[0] = 1;
        v12 = (v10 / 5 + v11) & ~((v10 / 5 + v11) >> 31);
        v13 = game_Unit_GetParam(a2, v17, 0);
        GameRoutine_1890220(v8, v12,
                            (v13 / 5) & (unsigned int)~((v13 / 5) >> 31),
                            0xFFFFFFFFLL, 1, 0, 0xFFFFFFFFLL);
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v8 + 40LL))(v8, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        result = std___1___shared_weak_count___release_weak(v9);
      }
    }
  }
  v14 = *(_QWORD*)(a1 + 1112);
  if (v14 != 0) {
    *(_BYTE*)(v14 + 88) &= ~1u;
  }
  v15 = *(_QWORD*)(a1 + 1120);
  if (v15 != 0) {
    *(_BYTE*)(v15 + 88) &= ~1u;
  }
  return result;
}

__int64 StatusItem_188e720(_QWORD* a1)
{
  __int64 v2;
  int v3;
  unsigned int v5;

  if (((*(__int64 (**)(_QWORD*))(a1[129] + 8LL))(a1 + 129) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) & 1) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a1[1] + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return 0;
    }
  }
  v3 = *((unsigned __int8*)a1 + 1145);
  if ((v3 & 1) == 0 && *((_DWORD*)a1 + 282) == 42) {
    return 0;
  }
  v5 = v3 ^ 1;
  if (a1[142] != 0) {
    return 1;
  }
  else {
    return v5;
  }
}

__int64 StatusItem_188e7e0(__int64 a1)
{
  __int64 v2;
  int v3;
  unsigned int v5;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 8LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 1032) + 144LL))(a1 - 1032) &
       1) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 1032) + 32LL))(a1 - 1032) &
       1) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 - 1024) + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return 0;
    }
  }
  v3 = *(unsigned __int8*)(a1 + 113);
  if ((v3 & 1) == 0 && *(_DWORD*)(a1 + 96) == 42) {
    return 0;
  }
  v5 = v3 ^ 1;
  if (*(_QWORD*)(a1 + 104) != 0) {
    return 1;
  }
  else {
    return v5;
  }
}

__int64 StatusItem_188e890(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = result;
      result = *a2;
      if (*a2 != 0) {
        if (*(_QWORD*)(a1 + 1136) != 0) {
          if (*(_BYTE*)(a1 + 1146) == 1) {
            result = GameRoutine_18a9940();
          }
          else if (*(_BYTE*)(a1 + 1145) == 1) {
            result = GameRoutine_18a8f40();
          }
          else {
            result = GameRoutine_18a82e0();
          }
        }
        else if (*(_DWORD*)(a1 + 1128) == 42) {
          result = GameRoutine_18a57c0();
        }
        else {
          result = GameRoutine_18a8b50();
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
