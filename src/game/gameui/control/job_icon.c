#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157ac20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18a6760(void);
__int64 GameRoutine_18b2d50(_QWORD, _QWORD);
__int64 GameRoutine_18b2e10(_QWORD, _QWORD);
__int64 GameRoutine_19a8d80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 game_Unit_GetJob(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN* GameData_212da30;
extern int* GameData_211f348[2];
__int64 JobIcon_19a8c50(__int64 a1, __int64 a2);
__int64 JobIcon_19a9d00(__int64 a1);
__int64 JobIcon_19a9dd0(__int64 a1, __int64 a2, __int64 a3);
__int64 JobIcon_19a9e30(__int64 a1);
__int64 JobIcon_19a9e50(__int64 a1);
bool JobIcon_19a9e80(_QWORD* a1);
__int64 JobIcon_19a9fc0(__int64 result, __int64* a2);
__int64 JobIcon_19aa070(__int64 result, char a2);
__int64 JobIcon_19aa090(__int64 result, char a2);
__int64 GameRoutine_19a8d80_alt1(__int64, __int64, char, unsigned int*, __int64,
                                 int, char, char,
                                 __int16) __asm__("GameRoutine_19a8d80");
extern _UNKNOWN GameData_2259440;
__int64 JobIcon_19a9be0(__int64 a1, __int64 a2, __int64 a3);
__int64 JobIcon_19a9d50(__int64 a1, __int64 a2, char a3, unsigned __int8 a4,
                        __int64 a5, int a6, char a7, __int64 a8, char a9,
                        __int16 a10);
__int64 Element_18850d0(_QWORD, _QWORD, _QWORD);
__int64 Element_1886290(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(void);
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN GameData_21f8028;
extern __int64 (*GameData_211f070[])();
extern __int64 (*GameData_211f098[])();
extern __int64 (*GameData_211f100[])();
extern __int64 (*GameData_211f2d8[])();
extern __int64 (*GameData_211f300[])();
extern __int64 (
    *game_gameui_control_HelpableElement_Destroy_HelpableElement_18b3360_ptr
        [])();
extern __int64 (*game_gameui_control_JobIcon_vtable[])();
extern __int64* GameData_2132080[6];
extern __int64 GameData_21f8020;
__attribute__((swiftcall)) void JobIcon_19a8a80(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* Element_1886290_alt1(__int64, const char**) __asm__("Element_1886290");
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136afb0(__int64, unsigned int, _BYTE*);
__int64 Pane_58f8a0(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memchr(__int64, int, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_2131900;
extern _UNKNOWN GameData_1acaad4;
extern _UNKNOWN GameData_1ad8c6c;
extern _UNKNOWN GameData_1ae9560;
extern _UNKNOWN GameData_1aec040;
extern __int64* GameData_21318f8;
extern __int64 GameData_21c9988;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameGlobalData_unknown_;
extern __int64 ui_Manager_instance_;
extern const char GameData_1a974c8[];
extern const char GameData_1aae790[];
float LayoutAccessor_15638b0(__int64*, char*, char);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
typedef __int64 GameAlign_1a8f93c __attribute__((aligned(4)));
extern GameAlign_1a8f93c GameData_1a8f93c;
typedef __int64 GameAlign_1aec02e __attribute__((aligned(2)));
extern GameAlign_1aec02e GameData_1aec02e;
unsigned __int64 strlen(const char*);
unsigned __int8* GameRoutine_a539c0(unsigned __int8* result, __int64,
                                    unsigned __int64);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) fs_60a230();
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 JobIcon_19a8d80(__int64 a1, __int64 a2, char a3, unsigned int* a4,
                        __int64 a5, int a6, char a7, char a8, __int16 a9);

__attribute__((swiftcall)) void JobIcon_19a8a80(PSEUDO_X8 x8_, __int64 a1,
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
  __int64* result;
  __int64* v14;
  _QWORD v16[2];

  v6 = (_QWORD*)LayoutEx_579160(1136, 8);
  v7 = v6 + 3;
  v8 = v6;
  v6[1] = 0;
  v6[2] = 0;
  *v6 = GameData_211f100;
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
  v8[3] = game_gameui_control_JobIcon_vtable;
  v8[140] = 0;
  *((_BYTE*)v8 + 1134) = 0;
  v8[132] = GameData_211f098;
  v8[12] = GameData_211f070;
  *((_WORD*)v8 + 564) = 257;
  *(_DWORD*)((char*)v8 + 1130) = 0;
  v16[0] = "L_Gauge";
  v16[1] = 7;
  result = (__int64*)Element_1886290(v7, v16);
  v14 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_21f8028);
    if ((_DWORD)result != 0) {
      GameData_21f8020 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      result = (__int64*)__cxa_guard_release(&GameData_21f8028);
    }
  }
  if (v14 == nullptr) {
    goto LABEL_13;
  }
  result = (__int64*)(*(__int64 (**)(__int64*))(*v14 + 16))(v14);
  if (result != &GameData_21f8020) {
    do {
      result = (__int64*)*result;
    } while (result != &GameData_21f8020 && result != nullptr);
    if (result == nullptr) {
    LABEL_13:
      v14 = nullptr;
    }
  }
  v8[138] = v14;
  *a3 = v7;
  a3[1] = v8;
  v8[3] =
      game_gameui_control_HelpableElement_Destroy_HelpableElement_18b3360_ptr;
  v8[12] = GameData_211f2d8;
  v8[132] = GameData_211f300;
  {
    result;
    return;
  }
}

__int64 JobIcon_19a8c50(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  int* v7;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;

  if (a2 == 0) {
    return 0;
  }
  v4 = game_Unit_GetJob(a2);
  v5 = *(_QWORD*)(a2 + 440);
  if (v5 != 0) {
    v6 = *(unsigned __int8*)(v5 + 16);
    if (v6 > 9) {
      v7 = (int*)((char*)GameData_212da30 + 144);
      if (*(_QWORD*)(a2 + 408) != 0) {
        goto LABEL_15;
      }
    }
    else {
      v7 = GameData_211f348[v6];
      if (*(_QWORD*)(a2 + 408) != 0) {
        goto LABEL_15;
      }
    }
  }
  else {
    v7 = (int*)((char*)GameData_212da30 + 148);
    if (*(_QWORD*)(a2 + 408) != 0) {
      goto LABEL_15;
    }
  }
  v9 = *(_QWORD*)(a2 + 392);
  if (v9 != 0) {
    v10 = *(unsigned __int8*)(v9 + 441);
    if ((_DWORD)v10 == 3) {
      if (*(unsigned __int8*)(a2 + 2136) <= 1u) {
        v10 = 1;
      }
      else {
        v10 = *(unsigned __int8*)(a2 + 2136);
      }
    }
    goto LABEL_16;
  }
LABEL_15:
  v10 = 0;
LABEL_16:
  v11 = *v7;
  if (*(_BYTE*)(a1 + 1105) == 1) {
    if (v4 != 0 && (v12 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 1104LL)) != 0 &&
        (v13 = *(_QWORD*)(a2 + 560),
         (v14 = *(unsigned __int16*)(v12 + 16)) <
             (unsigned __int64)((*(_QWORD*)(a2 + 568) - v13) >> 1))) {
      v15 = *(_WORD*)(v13 + 2 * v14) & 0x3FF;
    }
    else {
      v15 = 0;
    }
  }
  else {
    v15 = 0xFFFFFFFFLL;
  }
  v16 = *(unsigned __int8*)(a1 + 1109);
  v17 = v11;
  return GameRoutine_19a8d80(a1, v4, v10, &v17, a2, v15, v16, 0, 0) & 1;
}

__int64 JobIcon_19a8d80(__int64 a1, __int64 a2, char a3, unsigned int* a4,
                        __int64 a5, int a6, char a7, char a8, __int16 a9)
{

#pragma clang fp contract(off)
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  char* v19;
  char* v20;
  signed __int64 v21;
  char* v22;
  signed __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  char v34;
  char* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  char** v39;
  __int64 v40;
  __int64* v41;
  atomic_uchar* v42;
  unsigned __int8 explicit;
  __int64* v44;
  __int64* v45;
  void* v47;
  __int64 v48;
  char* v49;
  char* v50;
  char v51;
  char v52;
  char* v53;
  char* v54;
  unsigned __int64 v55;
  char* v56;
  char* v57;
  __int64 v58;
  char* v59;
  char v60;
  char* v61;
  __int64 v62;
  char* v63;
  char* v64;
  int v65;
  __int64 v66;
  unsigned int v67;
  __int64* v68;
  __int64* v69;
  char v71;
  char* v72;
  char* v73;
  unsigned __int64 v74;
  char* v75;
  char* v76;
  char v77;
  __int64 v78;
  void* v79;
  char* v80;
  char* v81;
  __int64 v82;
  char* v83;
  char v84;
  char* v85;
  __int64 v86;
  char* v87;
  __int64 v88;
  unsigned __int64 v89;
  char* v90;
  char* v91;
  __int64 v92;
  char* v93;
  char v94;
  char* v95;
  __int64 v96;
  int v97;
  __int64 v98;
  unsigned int v99;
  int v100;
  unsigned int v101;
  int v102;
  __int64 v103;
  int v104;
  __int64 v105;
  unsigned int v106;
  __int64 v107;
  unsigned __int64 v108;
  __int64 v109;
  bool v111;
  __int64 v112;
  __int64* v113;
  float v114;
  unsigned int v115;
  float v116;
  float v117;
  __int64* v118;
  char* v119;
  __int64 v120;
  unsigned int* v122;
  __int64 v124;
  char* v127[3];
  struct {
    __int64 v128;
    __int64 v129;
    char* v130;
  } v128_;

  *(_QWORD*)(a1 + 1096) = a2;
  v14 = *(const char**)(a2 + 8);
  v15 = strlen(v14);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_277;
  }
  v16 = v15;
  v124 = a5;
  v122 = a4;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v15 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v18, 16, 0);
    v128_.v129 = v16;
    v128_.v130 = v17;
    v128_.v128 = v18 | 1;
    goto LABEL_9;
  }
  LOBYTE(v128_.v128) = 2 * v15;
  v17 = (char*)&v128_.v128 + 1;
  if (v15 != 0) {
  LABEL_9:
    memmove((__int64)v17, (__int64)v14, v16);
  }
  v17[v16] = 0;
  v19 = v128_.v130;
  if ((v128_.v128 & 1) != 0) {
    v20 = v128_.v130;
  }
  else {
    v20 = (char*)&v128_.v128 + 1;
  }
  if ((v128_.v128 & 1) != 0) {
    v21 = v128_.v129;
  }
  else {
    v21 = (unsigned __int64)(unsigned __int8)v128_.v128 >> 1;
  }
  if (v21 >= 6) {
    v22 = &v20[v21];
    v23 = v21;
    v24 = (__int64)v20;
    do {
      v25 = memchr(v24, 228, v23 - 5);
      if (v25 == 0) {
        break;
      }
      if (*(_DWORD*)v25 == -376719132 &&
          *(unsigned __int16*)(v25 + 4) == 44198) {
        if ((char*)v25 != v22) {
          v27 = v25 - (_QWORD)v20;
          if (v25 - (_QWORD)v20 != -1) {
            v28 = v21 - v27;
            if (v21 < v27) {
              fs_60a230();
            }
            if (v28 == -1) {
              if ((v128_.v128 & 1) != 0) {
                v128_.v129 = v25 - (_QWORD)v20;
              }
              else {
                v19 = (char*)&v128_.v128 + 1;
                LOBYTE(v128_.v128) = 2 * v27;
              }
              v19[v27] = 0;
            }
            else {
              GameRoutine_a539c0((unsigned __int8*)&v128_.v128, v27, v28);
            }
          }
        }
        break;
      }
      v24 = v25 + 1;
      v23 = (signed __int64)&v22[-v24];
    } while ((__int64)&v22[-v24] >= 6);
  }
  v29 = v124;
  v30 = a2;
  v31 = GameData_21c9988;
  *(_QWORD*)(a1 + 1088) = v124;
  if (a2 == v31) {
    if (a8 == 0) {
      if (v124 == 0) {
        goto LABEL_45;
      }
      v32 = *(_QWORD*)(v124 + 392);
      if (*(_QWORD*)(*(_QWORD*)(v32 + 24) + 1784LL) != 0) {
        v32 = *(_QWORD*)(*(_QWORD*)(v32 + 24) + 1784LL);
      }
      a8 = *(_BYTE*)(v32 + 52);
    }
    switch (a8) {
    case 3:
      if ((v128_.v128 & 1) != 0) {
        v128_.v129 = 14;
        v35 = v128_.v130;
      }
      else {
        LOBYTE(v128_.v128) = 28;
        v35 = (char*)&v128_.v128 + 1;
      }
      v35[14] = 0;
      *(_QWORD*)v35 = 0xE8A184E75F44494ALL;
      *(_QWORD*)(v35 + 6) = 0x9EA5E75FB781E8A1LL;
      goto LABEL_58;
    case 2:
      if ((v128_.v128 & 1) != 0) {
        v128_.v129 = 17;
        v33 = v128_.v130;
      }
      else {
        LOBYTE(v128_.v128) = 34;
        v33 = (char*)&v128_.v128 + 1;
      }
      *((_WORD*)v33 + 8) = 143;
      v36 = &GameData_1a8f93c;
      goto LABEL_57;
    case 1:
      if ((v128_.v128 & 1) != 0) {
        v128_.v129 = 17;
        v33 = v128_.v130;
      }
      else {
        LOBYTE(v128_.v128) = 34;
        v33 = (char*)&v128_.v128 + 1;
      }
      *((_WORD*)v33 + 8) = 145;
      v36 = &GameData_1aec02e;
    LABEL_57:
      v38 = *v36;
      v37 = v36[1];
      *(_QWORD*)v33 = v38;
      *((_QWORD*)v33 + 1) = v37;
      goto LABEL_58;
    default:
      break;
    }
  LABEL_45:
    v34 = 0;
    if ((v128_.v128 & 1) == 0) {
      return v34 & 1;
    }
    goto LABEL_272;
  }
LABEL_58:
  v39 = &v127[1];
  if (a7 == 2 || a7 == 1) {
    LOBYTE(v127[0]) = 14;
    qmemcpy((char*)v127 + 1, "Disable", 7);
  }
  else {
    v39 = (const char**)((char*)v127 + 7);
    LOBYTE(v127[0]) = 12;
    qmemcpy((char*)v127 + 1, "Enable", 6);
  }
  *(_BYTE*)v39 = 0;
  LayoutAccessor_1562cf0(a1 + 88, (const char*)v127 + 1);
  if (((__int64)v127[0] & 1) != 0 && v127[2] != nullptr) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v40,
                                  (__int64)v127[2]);
  }
  v127[0] = "Icon_Base";
  v127[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 1);
  v41 = Element_1886290_alt1(a1, v127);
  v42 = (atomic_uchar*)GameData_2131900;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2131900,
                                  memory_order_acquire);
  v44 = GameData_21318f8;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_2131900) != 0) {
    *v44 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)GameData_2131900);
  }
  if (v41 != nullptr) {
    v45 = (__int64*)(*(__int64 (**)(__int64*))(*v41 + 16))(v41);
    if (v45 == v44) {
      goto LABEL_76;
    }
    do {
      v45 = (__int64*)*v45;
    } while (v45 != v44 && v45 != nullptr);
    if (v45 != nullptr) {
    LABEL_76:
      if (a3 == 1) {
        v47 = &GameData_1ae9560;
      }
      else {
        if (a3 != 2) {
          v51 = 0;
          goto LABEL_86;
        }
        v47 = &GameData_1acaad4;
      }
      v48 = ui_Manager_instance_;
      if ((v128_.v128 & 1) != 0) {
        v49 = v128_.v130;
      }
      else {
        v49 = (char*)&v128_.v128 + 1;
      }
      v50 = game_util_Format("%s%s", v49, v47);
      v51 = Manager_136a920(v48 + 1264, (__int64)v41, 0, 4u, v50) ^ 1;
    LABEL_86:
      if (a3 == 0 || (v51 & 1) != 0) {
        v52 = game_GameGlobalData_unknown_;
        if (game_GameGlobalData_unknown_ != 0) {
          v52 = *(_BYTE*)game_GameGlobalData_unknown_;
        }
        if ((a9 & 0x100) != 0) {
          v52 = a9;
        }
        if ((v52 & 1) == 0) {
          goto LABEL_121;
        }
        if ((v128_.v128 & 1) != 0) {
          v53 = v128_.v130;
        }
        else {
          v53 = (char*)&v128_.v128 + 1;
        }
        v54 = game_util_Format(GameData_1a974c8, v53);
        v55 = strlen(v54);
        if (v55 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_277;
        }
        v56 = (const char*)v55;
        if (v55 >= 0x17) {
          if ((v55 | 7) == 0x17) {
            v58 = 26;
          }
          else {
            v58 = (v55 | 7) + 1;
          }
          v57 = (const char*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v58, 16, 0);
          v127[1] = v56;
          v127[2] = v57;
          v127[0] = (const char*)(v58 | 1);
        }
        else {
          LOBYTE(v127[0]) = 2 * v55;
          v57 = (char*)v127 + 1;
          if (v55 == 0) {
          LABEL_106:
            v56[(_QWORD)v57] = 0;
            if (((__int64)v127[0] & 1) != 0) {
              v59 = (char*)v127[2];
            }
            else {
              v59 = (char*)v127 + 1;
            }
            v60 = 0;
            if ((Manager_136afb0(ui_Manager_instance_ + 1264, 4u, v59) & 1) !=
                0) {
              if (((__int64)v127[0] & 1) != 0) {
                v61 = (char*)v127[2];
              }
              else {
                v61 = (char*)v127 + 1;
              }
              v60 = Manager_136a920(ui_Manager_instance_ + 1264, (__int64)v41,
                                    0, 4u, v61);
            }
            v29 = v124;
            if (((__int64)v127[0] & 1) != 0 && v127[2] != nullptr) {
              v62 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v62 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v62,
                  (__int64)v127[2]);
            }
            if ((v60 & 1) != 0) {
              a3 = 0;
              v34 = 1;
              goto LABEL_131;
            }
          LABEL_121:
            if ((v128_.v128 & 1) != 0) {
              v63 = v128_.v130;
            }
            else {
              v63 = (char*)&v128_.v128 + 1;
            }
            if ((Manager_136afb0(ui_Manager_instance_ + 1264, 4u, v63) & 1) !=
                0) {
              if ((v128_.v128 & 1) != 0) {
                v64 = v128_.v130;
              }
              else {
                v64 = (char*)&v128_.v128 + 1;
              }
              v34 = Manager_136a920(ui_Manager_instance_ + 1264, (__int64)v41,
                                    0, 4u, v64);
            }
            else {
              v34 = 0;
            }
            a3 = 0;
            goto LABEL_131;
          }
        }
        memmove((__int64)v57, (__int64)v54, (unsigned __int64)v56);
        goto LABEL_106;
      }
      v34 = 1;
    LABEL_131:
      if (a7 == 2) {
        v65 = *(_DWORD*)((char*)((_UNKNOWN*)0xE8LL) + (_QWORD)GameData_212da30);
        *(_DWORD*)(Pane_58f8a0((__int64)v41) + 8) = v65 & 0xFFFFFF;
        v66 = Pane_58f8a0((__int64)v41);
        v67 = v65 | 0xFF000000;
      }
      else {
        *(_DWORD*)(Pane_58f8a0((__int64)v41) + 8) = 0;
        v66 = Pane_58f8a0((__int64)v41);
        v67 = -1;
      }
      *(_DWORD*)(v66 + 12) = v67;
    LABEL_135:
      v127[0] = "Icon_Color";
      v127[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 2);
      v68 = Element_1886290_alt1(a1, v127);
      if ((atomic_load_explicit(v42, memory_order_acquire) & 1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)GameData_2131900) != 0) {
        *v44 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
        __cxa_guard_release_alt1((__int64)GameData_2131900);
      }
      if (v68 != nullptr) {
        v69 = (__int64*)(*(__int64 (**)(__int64*))(*v68 + 16))(v68);
        if (v69 == v44) {
          goto LABEL_144;
        }
        do {
          v69 = (__int64*)*v69;
        } while (v69 != v44 && v69 != nullptr);
        if (v69 != nullptr) {
        LABEL_144:
          switch (a3) {
          case 2:
            v77 = v128_.v128;
            v78 = (__int64)v128_.v130;
            v79 = &GameData_1ad8c6c;
            break;
          case 1:
            v77 = v128_.v128;
            v78 = (__int64)v128_.v130;
            v79 = &GameData_1aec040;
            break;
          case 0:
            v71 = game_GameGlobalData_unknown_;
            if (game_GameGlobalData_unknown_ != 0) {
              v71 = *(_BYTE*)game_GameGlobalData_unknown_;
            }
            if ((a9 & 0x100) != 0) {
              v71 = a9;
            }
            if ((v71 & 1) == 0) {
              goto LABEL_184;
            }
            if ((v128_.v128 & 1) != 0) {
              v72 = v128_.v130;
            }
            else {
              v72 = (char*)&v128_.v128 + 1;
            }
            v73 = game_util_Format(GameData_1aae790, v72);
            v74 = strlen(v73);
            if (v74 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_277;
            }
            v75 = (const char*)v74;
            if (v74 >= 0x17) {
              if ((v74 | 7) == 0x17) {
                v82 = 26;
              }
              else {
                v82 = (v74 | 7) + 1;
              }
              v76 = (const char*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v82, 16, 0);
              v127[1] = v75;
              v127[2] = v76;
              v127[0] = (const char*)(v82 | 1);
            }
            else {
              LOBYTE(v127[0]) = 2 * v74;
              v76 = (char*)v127 + 1;
              if (v74 == 0) {
              LABEL_170:
                v75[(_QWORD)v76] = 0;
                if (((__int64)v127[0] & 1) != 0) {
                  v83 = (char*)v127[2];
                }
                else {
                  v83 = (char*)v127 + 1;
                }
                v84 = 0;
                if ((Manager_136afb0(ui_Manager_instance_ + 1264, 4u, v83) &
                     1) != 0) {
                  if (((__int64)v127[0] & 1) != 0) {
                    v85 = (char*)v127[2];
                  }
                  else {
                    v85 = (char*)v127 + 1;
                  }
                  v84 = Manager_136a920(ui_Manager_instance_ + 1264,
                                        (__int64)v68, 0, 4u, v85);
                }
                v29 = v124;
                if (((__int64)v127[0] & 1) != 0 && v127[2] != nullptr) {
                  v86 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v86 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v86,
                      (__int64)v127[2]);
                }
                if ((v84 & 1) != 0) {
                  goto LABEL_211;
                }
              LABEL_184:
                if ((v128_.v128 & 1) != 0) {
                  v87 = v128_.v130;
                }
                else {
                  v87 = (char*)&v128_.v128 + 1;
                }
                v81 = game_util_Format("%s_Clr", v87);
                goto LABEL_188;
              }
            }
            memmove((__int64)v76, (__int64)v73, (unsigned __int64)v75);
            goto LABEL_170;
          default:
            goto LABEL_213;
          }
          if ((v77 & 1) != 0) {
            v80 = (char*)v78;
          }
          else {
            v80 = (char*)&v128_.v128 + 1;
          }
          v81 = game_util_Format("%s%s", v80, v79);
        LABEL_188:
          v88 = (__int64)v81;
          v89 = strlen(v81);
          if (v89 < 0xFFFFFFFFFFFFFFF7LL) {
            v90 = (const char*)v89;
            if (v89 >= 0x17) {
              if ((v89 | 7) == 0x17) {
                v92 = 26;
              }
              else {
                v92 = (v89 | 7) + 1;
              }
              v91 = (const char*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v92, 16, 0);
              v127[1] = v90;
              v127[2] = v91;
              v127[0] = (const char*)(v92 | 1);
            }
            else {
              LOBYTE(v127[0]) = 2 * v89;
              v91 = (char*)v127 + 1;
              if (v89 == 0) {
              LABEL_197:
                v90[(_QWORD)v91] = 0;
                if (((__int64)v127[0] & 1) != 0) {
                  v93 = (char*)v127[2];
                }
                else {
                  v93 = (char*)v127 + 1;
                }
                v94 = 0;
                if ((Manager_136afb0(ui_Manager_instance_ + 1264, 4u, v93) &
                     1) != 0) {
                  if (((__int64)v127[0] & 1) != 0) {
                    v95 = (char*)v127[2];
                  }
                  else {
                    v95 = (char*)v127 + 1;
                  }
                  v94 = Manager_136a920(ui_Manager_instance_ + 1264,
                                        (__int64)v68, 0, 4u, v95);
                }
                v29 = v124;
                if (((__int64)v127[0] & 1) != 0 && v127[2] != nullptr) {
                  v96 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v96 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v96,
                      (__int64)v127[2]);
                }
                if ((v94 & 1) != 0) {
                LABEL_211:
                  *((_BYTE*)v68 + 88) |= 1u;
                  if (a7 == 2) {
                    v97 = *(_DWORD*)((char*)((_UNKNOWN*)0xE8LL) +
                                     (_QWORD)GameData_212da30);
                    *(_DWORD*)(Pane_58f8a0((__int64)v68) + 8) = v97 & 0xFFFFFF;
                    v98 = Pane_58f8a0((__int64)v68);
                    v99 = v97 | 0xFF000000;
                  }
                  else {
                    *(_DWORD*)(Pane_58f8a0((__int64)v68) + 8) = 0;
                    v98 = Pane_58f8a0((__int64)v68);
                    v99 = *v122;
                  }
                  *(_DWORD*)(v98 + 12) = v99;
                  goto LABEL_216;
                }
              LABEL_213:
                *((_BYTE*)v68 + 88) &= ~1u;
                goto LABEL_216;
              }
            }
            memmove((__int64)v91, v88, (unsigned __int64)v90);
            goto LABEL_197;
          }
        LABEL_277:
          String_60a1d0();
        }
      }
    LABEL_216:
      v100 = *(unsigned __int8*)(a1 + 1106);
      memset(v127, 0, sizeof(v127));
      if (v100 != 1) {
        GameHr_1562680(a1 + 88, "Default", 0x1.0000000000000p+0f);
        goto LABEL_236;
      }
      v101 = *(unsigned __int8*)(v30 + 536);
      if (v101 <= 2) {
        if (v101 != 1) {
          if (v101 == 2) {
            LOBYTE(v127[0]) = 12;
            qmemcpy((char*)v127 + 1, "Hunter", 6);
            goto LABEL_231;
          }
        LABEL_230:
          LOBYTE(v127[0]) = 8;
          *(_DWORD*)((char*)v127 + 1) = 1701736270;
          goto LABEL_231;
        }
        LOBYTE(v127[0]) = 14;
        *(_DWORD*)((char*)v127 + 1) = 1920098647;
        v102 = 1919904114;
      LABEL_229:
        HIDWORD(v127[0]) = v102;
        goto LABEL_231;
      }
      if (v101 == 3) {
        LOBYTE(v127[0]) = 14;
        *(_DWORD*)((char*)v127 + 1) = 1684827987;
        v102 = 1919248740;
        goto LABEL_229;
      }
      if (v101 == 4) {
        qmemcpy(v127, "(Flyingostrichsoldier", 21);
        goto LABEL_231;
      }
      if (v101 != 5) {
        goto LABEL_230;
      }
      LOBYTE(v127[0]) = 18;
      qmemcpy((char*)v127 + 1, "CurseMage", 9);
    LABEL_231:
      GameHr_1562680(a1 + 88, (const char*)v127 + 1, 0x1.0000000000000p+0f);
      if (((__int64)v127[0] & 1) != 0 && v127[2] != nullptr) {
        v103 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v103 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v103, (__int64)v127[2]);
      }
    LABEL_236:
      v104 = a6;
      v105 = *(_QWORD*)(*(_QWORD*)(v30 + 24) + 1104LL);
      v106 = *(unsigned __int16*)(v105 + 412);
      if (v29 != 0) {
        v107 = *(_QWORD*)(v29 + 560);
        v108 = *(unsigned __int16*)(v105 + 16);
        if (v108 >= (*(_QWORD*)(v29 + 568) - v107) >> 1) {
          v104 = 0;
        }
        else {
          v104 = *(_WORD*)(v107 + 2 * v108) & 0x3FF;
        }
      }
      v109 = *(_QWORD*)(a1 + 1080);
      v111 = v106 != 0 && v104 >= (int)v106;
      if (a6 < 0) {
        if (v109 != 0) {
          *(_BYTE*)(v109 + 88) &= ~1u;
        }
      }
      else if (v109 != 0) {
        LayoutAccessor_1560070((void*)(v127), (__int64*)(a1 + 88),
                               (const char*)(v109 + 176));
        if (v127[1] != nullptr) {
          v112 = std___1___shared_weak_count_lock_alt1((__int64)v127[1]);
          v113 = (__int64*)v127[0];
          if (v127[1] != nullptr) {
            std___1___shared_weak_count___release_weak_alt1((__int64)v127[1]);
          }
          if (v112 != 0 && v113 != nullptr) {
            LayoutAccessor_155e830((__int64)v113, 1);
            v114 = 0x1.0000000000000p+0f;
            if (v106 != 0) {
              v115 = v104 & ~(v104 >> 31);
              if (v106 < v115) {
                v115 = v106;
              }
              v114 = (float)v115 / (float)v106;
            }
            GameHr_1562680((__int64)v113, "GaugeUp", 0x0.0p+0f);
            v116 = LayoutAccessor_15638b0(v113, "GaugeUp", 1);
            if (v114 <= 0x1.0000000000000p+0f) {
              v117 = v114;
            }
            else {
              v117 = 0x1.0000000000000p+0f;
            }
            LayoutAccessor_15636c0((__int64)v113, (__int64)"GaugeUp", 1,
                                   v117 * v116);
          }
          else if (v112 == 0) {
            goto LABEL_266;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v112 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v112 + 16LL))(v112);
            std___1___shared_weak_count___release_weak_alt1(v112);
          }
        }
      }
    LABEL_266:
      v127[0] = "Icon_Max";
      v127[1] = (const char*)((_UNKNOWN**)0x8LL);
      v118 = Element_1886290_alt1(a1, v127);
      if (v118 != nullptr) {
        *((_BYTE*)v118 + 88) = v118[11] & 0xFE | *(_BYTE*)(a1 + 1104) & v111;
      }
      if (*(_BYTE*)(a1 + 1107) != 0) {
        v119 = "Icon_Off";
      }
      else {
        v119 = "Icon_On";
      }
      GameHr_1562680(a1 + 88, v119, 0x1.0000000000000p+0f);
      if ((v128_.v128 & 1) != 0) {
      LABEL_272:
        if (v128_.v130 != nullptr) {
          v120 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v120 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v120,
                                        (__int64)v128_.v130);
        }
      }
      return v34 & 1;
    }
  }
  v34 = 0;
  goto LABEL_135;
}

__int64 JobIcon_19a9be0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;
  unsigned __int64 v7;
  int* v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  char v15;
  unsigned int v17;
  __int64 v18;
  __int64 v19;

  v5 = 0;
  if (a2 == 0 || a3 == 0) {
    return v5 & 1;
  }
  v6 = *(_QWORD*)(a2 + 440);
  if (v6 != 0) {
    v7 = *(unsigned __int8*)(v6 + 16);
    if (v7 > 9) {
      v8 = (int*)((char*)GameData_212da30 + 144);
      if (*(_QWORD*)(a2 + 408) == 0) {
        goto LABEL_6;
      }
    }
    else {
      v8 = GameData_211f348[v7];
      if (*(_QWORD*)(a2 + 408) == 0) {
      LABEL_6:
        v9 = *(_QWORD*)(a2 + 392);
        if (v9 != 0) {
          LODWORD(v9) = *(unsigned __int8*)(v9 + 441);
          if ((_DWORD)v9 == 3) {
            LODWORD(v9) = *(unsigned __int8*)(a2 + 2136);
            if ((unsigned int)v9 <= 1) {
              LOBYTE(v9) = 1;
            }
          }
        }
        goto LABEL_12;
      }
    }
  }
  else {
    v8 = (int*)((char*)GameData_212da30 + 148);
    if (*(_QWORD*)(a2 + 408) == 0) {
      goto LABEL_6;
    }
  }
  LOBYTE(v9) = 0;
LABEL_12:
  v10 = *v8;
  if (*(_BYTE*)(a1 + 1105) == 1) {
    v11 = *(_QWORD*)(*(_QWORD*)(a3 + 24) + 1104LL);
    if (v11 != 0 &&
        (v12 = *(_QWORD*)(a2 + 560),
         (v13 = *(unsigned __int16*)(v11 + 16)) <
             (unsigned __int64)((*(_QWORD*)(a2 + 568) - v12) >> 1))) {
      v14 = *(_WORD*)(v12 + 2 * v13) & 0x3FF;
    }
    else {
      v14 = 0;
    }
  }
  else {
    v14 = -1;
  }
  v18 = v3;
  v19 = v4;
  v15 = *(_BYTE*)(a1 + 1109);
  v17 = v10;
  v5 = GameRoutine_19a8d80_alt1(a1, a3, v9, &v17, a2, v14, v15, 0, 0);
  return v5 & 1;
}

__int64 JobIcon_19a9d00(__int64 a1)
{
  LayoutAccessor_1562680(a1 + 88, "Default", 1.0);
  return LayoutAccessor_1562680(a1 + 88, "Icon_Unclear", 1.0);
}

__int64 JobIcon_19a9d50(__int64 a1, __int64 a2, char a3, unsigned __int8 a4,
                        __int64 a5, int a6, char a7, __int64 a8, char a9,
                        __int16 a10)
{
  unsigned int* v10;
  unsigned int v12;

  if (a2 == 0) {
    return 0;
  }
  if (a4 > 9u) {
    v10 = (unsigned int*)&GameData_2259440;
  }
  else {
    v10 = (unsigned int*)GameData_211f348[a4];
  }
  v12 = *v10;
  return GameRoutine_19a8d80_alt1(a1, a2, a3, &v12, a8, a6, a7, a9, a10) & 1;
}

__int64 JobIcon_19a9dd0(__int64 a1, __int64 a2, __int64 a3)
{
  _BOOL8 v4;

  v4 = a2 != 0 && game_Unit_GetJob(a2) == a3;
  return GameRoutine_157ac20(a1 + 88, "IconEquip", v4, 1);
}

__int64 JobIcon_19a9e30(__int64 a1)
{
  if (*(_QWORD*)(a1 + 1096) != 0) {
    return *(unsigned __int8*)(a1 + 1108);
  }
  else {
    return 0;
  }
}

__int64 JobIcon_19a9e50(__int64 a1)
{
  if (*(_QWORD*)(a1 + 64) != 0) {
    return *(unsigned __int8*)(a1 + 76);
  }
  else {
    return 0;
  }
}

bool JobIcon_19a9e80(_QWORD* a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;

  if (((*(__int64 (**)(_QWORD*))(a1[129] + 8LL))(a1 + 129) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) & 1) == 0) {
    return false;
  }
  v2 = *(_QWORD*)(a1[1] + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return false;
    }
  }
  v4 = a1[40];
  if (v4 == 0) {
    return a1[137] != 0;
  }
  v5 = a1[39];
  v6 = a1[40];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = std___1___shared_weak_count_lock(v6);
  std___1___shared_weak_count___release_weak(v4);
  if (v7 == 0) {
    return a1[137] != 0;
  }
  if (v5 != 0) {
    v8 = ((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 144LL))(v5) & 1) != 0
             ? (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5)
             : 0;
  }
  else {
    v8 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return (v8 & 1) != 0 && a1[137] != 0;
}

__int64 JobIcon_19a9fc0(__int64 result, __int64* a2)
{
  __int64 v3;

  if (*(_QWORD*)(result + 1096) != 0) {
    result = a2[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v3 = result;
        result = *a2;
        if (*a2 != 0) {
          result = GameRoutine_18a6760();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
          return std___1___shared_weak_count___release_weak(v3);
        }
      }
    }
  }
  return result;
}

__int64 JobIcon_19aa070(__int64 result, char a2)
{
  if ((a2 & 1) != 0 || *(_BYTE*)(result + 1110) != 2) {
    return GameRoutine_18b2d50(result, a2 & 1);
  }
  return result;
}

__int64 JobIcon_19aa090(__int64 result, char a2)
{
  if ((a2 & 1) != 0 || *(_BYTE*)(result + 1110) != 1) {
    return GameRoutine_18b2e10(result, a2 & 1);
  }
  return result;
}

#pragma GCC visibility pop
