#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11311f0(__int64, __int64, int);
__int64 GameRoutine_1139a00(_QWORD);
__int64 GameRoutine_113b8c0(_QWORD, _QWORD);
__int64 GameRoutine_113be80(_QWORD, _QWORD);
__int64 GameRoutine_114ed00(_QWORD);
__int64 GameRoutine_11511f0(void);
__int64 GameRoutine_1151340(_QWORD);
__int64 GameRoutine_11516e0(void);
__int64 GameRoutine_1196e60(_QWORD);
__int64 GameRoutine_1197100(_QWORD);
__int64 GameRoutine_119a200(_QWORD, _QWORD);
__int64 GameRoutine_11de9c0(_QWORD);
__int64 GameRoutine_135a2e0(_QWORD, _QWORD);
__int64 GameRoutine_140bb40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1553130(_QWORD);
__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1567000(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_62c840(_QWORD, _QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 GameRoutine_658d60(_QWORD);
__int64 GameRoutine_8224a0(_QWORD);
__int64 GameRoutine_824ca0(void);
__int64 GameRoutine_82dd50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8679c0(void);
__int64 GameRoutine_9d57b0(_QWORD, _QWORD);
__int64 GameRoutine_9e6800(_QWORD, _QWORD);
__int64 GameRoutine_a4f6c0(_QWORD, _QWORD);
__int64 GameRoutine_a4f800(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4fa80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51280(_QWORD, _QWORD);
__int64 GameRoutine_a51640(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f86840(_QWORD);
__int64 GameRoutine_f87240(_QWORD);
__int64 GameRoutine_f87cd0(_QWORD);
__int64 GameSubquestData_125d800(_QWORD, _QWORD);
__int64 MapInfo_824f10(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strncmp(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD, long double);
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212d750;
extern __int64 GameData_212dce8;
extern __int64 GameData_21c9fe0;
extern __int64 GameData_21cd128;
extern __int64 GameData_21ec7b0;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21fa5e0;
extern __int64 GameData_22190b8;
extern __int64 GameData_22197d8;
extern __int64 GameData_221b2e8;
extern __int64 GameData_22336e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212d460[6];
extern __int64* GameData_212fc38[2];
extern __int64* as_g_script_manager_ptr;
extern __int64* game_talk_g_window_layout_ptr[5];
extern __int64* msg_MessageManager_instance__ptr[2];
void __attribute__((noreturn)) GameRoutine_1138d60(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64* Seq_1132580(__int64* result, _QWORD* a2);
__int64 Seq_1133320(__int64 result);
__int64 Seq_11333e0(__int64 a1);
__int64 Seq_1133880(__int64 a1);
void Seq_1133a20(__int64 a1);
__int64 Seq_1133ad0(__int64 result);
__int64 Seq_1133d20(__int64 result);
_QWORD* Seq_1134340(_QWORD* result);
void Seq_11351f0();
__int64 Seq_1135d20(__int64 result);
__int64 Seq_1136ff0(__int64 a1);
__int64 Seq_1137060(__int64 a1);
__int64 Seq_11370d0(__int64 a1);
__int64 Seq_1137230(__int64 result);
__int64 Seq_11372b0(__int64 result);
__int64 Seq_1137330(__int64 a1);
__int64 Seq_11373a0(__int64 a1);
__int64 Seq_1137500(__int64 result);
__int64 Seq_11375e0(__int64 result);
__int64 Seq_1137710(__int64 a1);
__int64 Seq_1137760();
__int64 Seq_1137780(__int64 result);
__int64 Seq_11378c0(__int64 result);
__int64 Seq_1137a00(__int64 result);
unsigned __int64 Seq_1137a80(_QWORD* a1, __int64 a2);
__int64 Seq_1137d60(__int64 result);
__int64 Seq_Unknown4_1137da0();
__int64 Seq_Unknown5_1137e30();
__int64 Seq_Unknown12_1137fa0(__int64 a1);
void Seq_Unknown10();
__int64 GameRoutine_112f420(_QWORD, _QWORD);
__int64 GameRoutine_1139820(_QWORD);
__int64 GameRoutine_113d020(_QWORD);
__int64 GameRoutine_1196c00(_QWORD);
__int64 GameRoutine_14899f0(_QWORD, long double);
__int64 GameRoutine_1916be0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 spine_TrackEntry_setAnimationEnd(_QWORD, float);
__int64 spine_TrackEntry_setDelay(_QWORD, float);
__int64 spine_TrackEntry_setMixDuration(double);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_20114e8[])();
extern __int64 (*GameData_2011508[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_talk_Seq_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
__int64 Seq_Destructor_1130ae0(__int64 a1);
__int64 game_talk_Seq_BindFaceEyeBlinkSync_lambda0_Invoke(__int64 a1);
_QWORD* CmdbtlPartyNatives_e9a800(_QWORD*, __int64);
_QWORD* GameRoutine_c9e1c0(float*, unsigned __int8*, __int64, __int64**);
_QWORD* SceneManager_138e2c0(__int64, unsigned __int8*);
__attribute__((swiftcall)) void GameRoutine_113bfb0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void Hub_119acc0(PSEUDO_X8, _QWORD, _QWORD, _QWORD);
__int64* GameRoutine_1152360(_QWORD*, unsigned __int8*);
__int64* GameRoutine_68c980(_QWORD*, unsigned __int8*);
__int64* GameRoutine_a542c0(_QWORD*, _QWORD*);
__int64* Registration_a4f800(__int64, __int64, int);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_112ea40(_BYTE*, _BYTE*);
__int64 GameRoutine_60a020_alt1(_QWORD) __asm__("GameRoutine_60a020");
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_714ee0(void);
__int64 GameRoutine_a19f00(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51280_alt1(__int64, _BYTE*) __asm__("GameRoutine_a51280");
__int64 HubCharacterNatives_cf7940(__int64);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 Manager_a50ce0(_QWORD, _QWORD);
__int64 Seq_1134ae0_alt1(_QWORD, _QWORD) __asm__("Seq_1134ae0");
__int64 Seq_1149de0(__int64, __int64);
__int64 Unit_6c82e0(void);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_HashString32(_QWORD);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_ProcInst_Register(void);
__int64 game_UnitPool_Find_6eac40(_QWORD);
__int64 game_telop_TelopRelianceLvUp_CreateBind(__int64, __int64, __int64, char,
                                                unsigned __int8);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__n128 GameRoutine_a32b10(__int64);
__n128 Seq_11331c0_alt1(__int64) __asm__("Seq_11331c0");
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212fa30;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1a9210e;
extern _UNKNOWN GameData_1a98e31;
extern _UNKNOWN GameData_1adba82;
extern _UNKNOWN GameData_1af1f6d;
extern _UNKNOWN GameData_216f168;
extern _UNKNOWN GameData_216f3a8;
extern __int64 (*GameData_1fecb18[])();
extern __int64 (*game_talk_ProcHideUI_vtable[])();
extern __int64 (*game_talk_ProcKeyWait_vtable[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* GameData_212c890[3];
extern __int64* GameData_212cbb8[80];
extern __int64* GameData_212eb78[3];
extern __int64 GameData_1ac302b;
extern __int64 GameData_212c608[2];
extern __int64 GameData_21c99c8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4000;
extern __int64 GameData_2203490;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_g_frame_clock;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1aad589[6];
extern int* GameData_212fa28;
void GameRoutine_11330a0(__int64*, _QWORD*);
void GameRoutine_113d8b0(__int64);
void GameRoutine_68cb20(__int64*, unsigned __int64);
void Seq_1132580_alt1(__int64*, _QWORD*) __asm__("Seq_1132580");
void __attribute__((noreturn))
GameRoutine_1138d60_alt1() __asm__("GameRoutine_1138d60");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_a89030();
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void game_113f060(__int64, double, double, long double);
__int64 Seq_11311f0(__int64 a1, __int64 a2, int a3);
__attribute__((swiftcall)) void Seq_1131360(PSEUDO_X8 x8_, __int64 a1,
                                            _BYTE* a2);
__int64 Seq_1131620(__int64 a1, _BYTE* a2, _BYTE* a3);
__int64 Seq_1131cc0(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void Seq_11326e0(PSEUDO_X8 x8_, __int64 a1);
void Seq_11331c0(__int64 a1);
void Seq_Unknown3_1133970(__int64 a1, double a2, double a3, long double a4);
void Seq_11347c0(__int64 a1);
void Seq_1134ae0(__int64 a1, __int64 a2);
__int64 Seq_1135380(__int64 a1);
__int64 Seq_11354e0(__int64 result);
__int64 Seq_1137ba0(__int64 result);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 Seq_1133c40(__int64 result);

__int64 Seq_Destructor_1130ae0(__int64 a1)
{
  long double v2;
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
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
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
  long double v41;
  __int64 v42;
  __int64 v43;

  *(_QWORD*)a1 = game_talk_Seq_vtable;
  *(_QWORD*)(a1 + 152) = GameData_20114e8;
  *(_QWORD*)(a1 + 160) = GameData_2011508;
  GameRoutine_112f420(a1 + 312, game_talk_g_window_layout_ptr[0]);
  if (*(_BYTE*)(a1 + 1092) == 1) {
    GameRoutine_1553220(*(unsigned int*)(a1 + 1088));
    if (*(_BYTE*)(a1 + 1092) == 1) {
      *(_BYTE*)(a1 + 1092) = 0;
    }
  }
  v3 = *(_QWORD*)(a1 + 1344);
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 1352) = v3;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v5 + v6);
  }
  v7 = *(_QWORD*)(a1 + 1336);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    *(__n128*)&v2 = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(a1 + 1304);
  if (v8 != 0) {
    v9 = *(_QWORD*)(a1 + 1312);
    if (v8 == v9) {
      goto LABEL_22;
    }
    v10 = *(_QWORD*)(a1 + 1312);
    do {
      v11 = *(_BYTE*)(v10 - 24);
      v10 -= 24;
      if ((v11 & 1) != 0 && *(_QWORD*)(v9 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v12);
      }
      v9 = v10;
    } while (v10 != v8);
    v13 = *(_QWORD*)(a1 + 1304);
    *(_QWORD*)(a1 + 1312) = v8;
    if (v13 != 0) {
    LABEL_22:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v14);
    }
  }
  v15 = *(_QWORD**)(a1 + 1264);
  while (v15 != nullptr) {
    v17 = v15;
    v15 = (_QWORD*)*v15;
    if ((v17[2] & 1) != 0 && v17[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v18 = 128;
      }
      else {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v18);
    }
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
      v16 = 128;
    }
    else {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v16);
  }
  v19 = *(_QWORD*)(a1 + 1248);
  *(_QWORD*)(a1 + 1248) = 0;
  if (v19 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v20);
  }
  if ((*(_BYTE*)(a1 + 1224) & 1) != 0 && *(_QWORD*)(a1 + 1240) != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v21);
  }
  if ((*(_BYTE*)(a1 + 1200) & 1) != 0 && *(_QWORD*)(a1 + 1216) != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v22);
  }
  if ((*(_BYTE*)(a1 + 1176) & 1) != 0 && *(_QWORD*)(a1 + 1192) != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v23);
  }
  if ((*(_BYTE*)(a1 + 1144) & 1) != 0 && *(_QWORD*)(a1 + 1160) != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v24);
  }
  if ((*(_BYTE*)(a1 + 1120) & 1) != 0 && *(_QWORD*)(a1 + 1136) != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v25);
  }
  if ((*(_BYTE*)(a1 + 1096) & 1) != 0 && *(_QWORD*)(a1 + 1112) != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v26);
  }
  GameRoutine_14899f0(a1 + 944, v2);
  v27 = *(_QWORD**)(a1 + 920);
  while (v27 != nullptr) {
    v29 = v27;
    v27 = (_QWORD*)*v27;
    v30 = (_QWORD*)v29[10];
    if (v30 == v29 + 6) {
      v31 = 32;
    }
    else {
      if (v30 == nullptr) {
        goto LABEL_82;
      }
      v31 = 40;
    }
    (*(void (**)(__int64))(*v30 + v31))((__int64)v30);
  LABEL_82:
    if ((v29[2] & 1) != 0 && v29[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v32 = 128;
      }
      else {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v32);
    }
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
      v28 = 128;
    }
    else {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v28);
  }
  v33 = *(_QWORD*)(a1 + 904);
  *(_QWORD*)(a1 + 904) = 0;
  if (v33 != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v34);
  }
  if ((*(_BYTE*)(a1 + 872) & 1) != 0 && *(_QWORD*)(a1 + 888) != 0) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v35);
  }
  if ((*(_BYTE*)(a1 + 832) & 1) != 0 && *(_QWORD*)(a1 + 848) != 0) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v36);
  }
  if ((*(_BYTE*)(a1 + 808) & 1) != 0 && *(_QWORD*)(a1 + 824) != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v37);
  }
  if ((*(_BYTE*)(a1 + 784) & 1) != 0 && *(_QWORD*)(a1 + 800) != 0) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v38);
  }
  if ((*(_BYTE*)(a1 + 752) & 1) != 0 && *(_QWORD*)(a1 + 768) != 0) {
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v39);
  }
  if ((*(_BYTE*)(a1 + 728) & 1) != 0 && *(_QWORD*)(a1 + 744) != 0) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v40);
  }
  GameRoutine_1196c00(a1 + 536);
  GameRoutine_1139820(a1 + 400);
  GameRoutine_113d020(a1 + 216);
  v42 = *(_QWORD*)(a1 + 192);
  *(_QWORD*)(a1 + 160) = kaneko_WPHolder_vtable;
  if (v42 != 0) {
    *(__n128*)&v41 = std___1___shared_weak_count___release_weak(v42);
  }
  v43 = *(_QWORD*)(a1 + 176);
  if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v43 + 16LL))(v43, v41);
    std___1___shared_weak_count___release_weak(v43);
  }
  GameData_21ec7b8 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 Seq_11311f0(__int64 a1, __int64 a2, int a3)
{
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  bool v12;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  int v18;
  unsigned int v20;
  __int64 v21;
  __int64 result;
  struct {
    __int64 v23[2];
    _BYTE* v24;
  } v23_;

  v6 = msg_MessageManager_instance__ptr[0];
  v23_.v23[0] = a2;
  v7 = GameRoutine_a542c0(
      (_QWORD*)(*msg_MessageManager_instance__ptr[0] + 14608), v23_.v23);
  if (v7 != nullptr) {
    v8 = v7[5];
    if (v8 != 0) {
      v9 = *(_QWORD*)(v8 + 800);
      v10 = *(_DWORD*)(v9 + 36);
      if (v10 != -1) {
        v11 = **(_DWORD**)(*(_QWORD*)(v9 + 24) + 24LL * v10);
        v12 = v11 == -1 || v11 < 1;
        if (!v12 && a3 >= v11) {
          return 1;
        }
      }
    }
  }
  if ((unsigned int)(*(_DWORD*)(a1 + 200) - 1) <= 1) {
    return a3 != *(_DWORD*)(a1 + 1168);
  }
  v14 = Registration_a4f800(*v6, a2, a3);
  if ((*(_BYTE*)v14 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v23_.v23, v14[2], v14[1]);
  }
  else {
    v15 = *v14;
    v16 = v14[2];
    v23_.v23[1] = v14[1];
    v23_.v24 = (_BYTE*)v16;
    v23_.v23[0] = v15;
  }
  if ((v23_.v23[0] & 1) != 0) {
    v17 = v23_.v24;
  }
  else {
    v17 = (char*)v23_.v23 + 1;
  }
  v18 = GameRoutine_a51280_alt1(*v6, v17);
  result = v18 == 19 || (unsigned int)(v18 - 1) < 4;
  if ((v23_.v23[0] & 1) != 0 && v23_.v24 != nullptr) {
    v20 = result;
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v21);
    return v20;
  }
  return result;
}

__attribute__((swiftcall)) void Seq_1131360(PSEUDO_X8 x8_, __int64 a1,
                                            _BYTE* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 result;
  unsigned __int64 v13;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[4];
  int v24;
  int v25;
  __int64 v26;
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
  __int64 v37;
  __int64 v38;

  v6 = (__int64)*msg_MessageManager_empty_text__ptr;
  v7 = strlen(*msg_MessageManager_empty_text__ptr);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v7);
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10, 16, 0);
    a3[1] = v8;
    a3[2] = v9;
    *a3 = v10 | 1;
  }
  else {
    *(_BYTE*)a3 = 2 * v7;
    v9 = (__int64)a3 + 1;
    if (v7 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v9, v6, v8);
LABEL_10:
  *(_BYTE*)(v9 + v8) = 0;
  if (*a2 != 0) {
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v11 = *msg_MessageManager_instance__ptr[0];
    v30 = -1;
    v31 = -1;
    v32 = -1;
    v33 = -1;
    v34 = -1;
    v35 = -1;
    v36 = -1;
    v37 = -1;
    v23[0] = msg_TagSelector_vtable;
    v23[1] = 0xFFFF0001FFFF0000LL;
    v23[2] = 0xFFFF0004FFFF0002LL;
    v23[3] = 0xFFFF0006FFFF0005LL;
    v38 = 8;
    v24 = -65529;
    v25 = -65528;
    GameRoutine_a4dbe0(v11, a2, 0, v23);
    {
      GameRoutine_60a020_alt1(a3);
      return;
    }
  }
  result = game_HashString(a1);
  if (result == 0) {
    result;
    return;
  }
  v13 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v13 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    result;
    return;
  }
  v15 = v13 - 1;
  if ((v13 & (v13 - 1)) != 0) {
    v16 = result;
    if (result >= v13) {
      v16 = result % v13;
    }
  }
  else {
    v16 = v15 & result;
  }
  v17 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v16);
  if (v17 == nullptr) {
    result;
    return;
  }
  v18 = (_QWORD*)*v17;
  if (v18 == nullptr) {
    result;
    return;
  }
  if ((v13 & v15) == 0) {
    while (1) {
      v20 = v18[1];
      if (v20 == result) {
        if (v18[2] == result) {
          goto LABEL_38;
        }
      }
      else if ((v20 & v15) != v16) {
        {
          result;
          return;
        }
      }
      v18 = (_QWORD*)*v18;
      if (v18 == nullptr) {
        result;
        return;
      }
    }
  }
  while (1) {
    v19 = v18[1];
    if (v19 == result) {
      break;
    }
    if (v19 >= v13) {
      v19 %= v13;
    }
    if (v19 != v16) {
      result;
      return;
    }
  LABEL_27:
    v18 = (_QWORD*)*v18;
    if (v18 == nullptr) {
      result;
      return;
    }
  }
  if (v18[2] != result) {
    goto LABEL_27;
  }
LABEL_38:
  v21 = v18[3];
  if (v21 != 0) {
    GameRoutine_67ed20(v18[3]);
    GameRoutine_60a020_alt1(a3);
    v23[0] = v21;
    result = game_UnitPool_Find_6eac40(v23);
    if (result != 0) {
      Unit_6c82e0();
      {
        GameRoutine_60a020_alt1(a3);
        return;
      }
    }
    do {
      v22 = v21;
      v21 = *(_QWORD*)(v21 + 624);
    } while (v21 != 0);
    if (*(_BYTE*)(v22 + 441) == 3) {
      GameRoutine_714ee0();
      {
        GameRoutine_60a020_alt1(a3);
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

__int64 Seq_1131620(__int64 a1, _BYTE* a2, _BYTE* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v6;
  int v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  unsigned int v15;
  unsigned __int64 v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char* v28;
  __int64** v29;
  __int64* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64* v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64* v38;
  _QWORD* v39;
  char v40;
  _DWORD* v41;
  __int64 v42;
  __int64 v43;
  float v44;
  float v45;
  _BOOL8 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 primeEm;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  unsigned int v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  int v68;
  struct {
    __int64 v69;
    unsigned __int64 v70;
    char* v71;
  } v69_;
  __int64* v72;

  v6 = GameRoutine_112ea40(a2, a3);
  if (v6 != 0) {
    goto LABEL_2;
  }
  v14 = GameData_212cbb8[0];
  if (*GameData_212fc38[0] != 0) {
    v15 = Seq_1149de0(*GameData_212fc38[0], (__int64)a2);
    goto LABEL_18;
  }
  v25 = (__int64*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    v26 = strlen(a2);
    if (v26 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_138;
    }
    v27 = v26;
    if (v26 >= 0x17) {
      if ((v26 | 7) == 0x17) {
        v53 = 26;
      }
      else {
        v53 = (v26 | 7) + 1;
      }
      v28 = (char*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v53, 16, 0);
      v69_.v70 = v27;
      v69_.v71 = v28;
      v69_.v69 = v53 | 1;
    }
    else {
      LOBYTE(v69_.v69) = 2 * v26;
      v28 = (char*)&v69_.v69 + 1;
      if (v26 == 0) {
        goto LABEL_97;
      }
    }
    memcpy(v28, a2, v27);
  LABEL_97:
    v54 = *v25;
    v28[v27] = 0;
    if (v54 == 0) {
      goto LABEL_106;
    }
    v55 = *(_QWORD*)(a1 + 1064);
    if (v55 != 0) {
      v15 = *(unsigned __int16*)(v55 + 16);
      if ((v69_.v69 & 1) == 0) {
        goto LABEL_18;
      }
      goto LABEL_108;
    }
    v56 = SceneManager_138e2c0(v54, (unsigned __int8*)&v69_.v69);
    if (v56 != nullptr) {
      v57 = v56[14];
      v58 = v56[15];
      if (v58 == 0) {
        v15 = *(_DWORD*)(v57 + 104);
        if ((v69_.v69 & 1) != 0) {
        LABEL_108:
          if (v69_.v71 != nullptr) {
            v60 = v15;
            v61 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v61 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v61);
            v15 = v60;
          }
        }
      LABEL_18:
        if ((v15 & 0x80000000) == 0) {
          v6 = *(_QWORD*)(*(_QWORD*)(*v14 + 64) + 8LL * v15);
          if (v6 != 0) {
            goto LABEL_2;
          }
        }
        goto LABEL_36;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 8), 1u,
                                memory_order_relaxed);
      v15 = *(_DWORD*)(v57 + 104);
      if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v59 = v15;
        (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
        std___1___shared_weak_count___release_weak_alt1();
        v15 = v59;
        if ((v69_.v69 & 1) == 0) {
          goto LABEL_18;
        }
        goto LABEL_108;
      }
    }
    else {
    LABEL_106:
      v15 = -1;
    }
    if ((v69_.v69 & 1) == 0) {
      goto LABEL_18;
    }
    goto LABEL_108;
  }
LABEL_36:
  v6 = *(_QWORD*)(*(_QWORD*)(*v14 + 64) +
                  8LL * (int)Seq_1131cc0(a1, (__int64)a2));
  if (v6 == 0) {
    return v6;
  }
LABEL_2:
  v7 = *(unsigned __int16*)(v6 + 16);
  if ((*(_BYTE*)(a1 + 1200) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 1216);
  }
  else {
    v8 = a1 + 1201;
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_138:
    String_60a1d0_alt1();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v12, 16, 0);
    v69_.v70 = v10;
    v69_.v71 = v11;
    v69_.v69 = v12 | 1;
  }
  else {
    LOBYTE(v69_.v69) = 2 * v9;
    v11 = (char*)&v69_.v69 + 1;
    if (v9 == 0) {
      goto LABEL_14;
    }
  }
  memcpy(v11, v8, v10);
LABEL_14:
  v11[v10] = 0;
  v13 = (__int64*)(a1 + 1248);
  if (GameRoutine_68c980((_QWORD*)(a1 + 1248), (unsigned __int8*)&v69_.v69) !=
      nullptr) {
    v72 = &v69_.v69;
    *((_DWORD*)GameRoutine_c9e1c0(
          (float*)(a1 + 1248), (unsigned __int8*)&v69_.v69,
          (__int64)std___1_piecewise_construct_ptr, &v72) +
      10) = v7;
  }
  else {
    v16 = *(unsigned __int8*)(a1 + 1200);
    v17 = (v16 & 1) == 0;
    v18 = v16 >> 1;
    if (v17) {
      v19 = a1 + 1201;
    }
    else {
      v19 = *(_QWORD*)(a1 + 1216);
    }
    if (v17) {
      v20 = v18;
    }
    else {
      v20 = *(_QWORD*)(a1 + 1208);
    }
    v21 = std___1___hash_memory(v19, v20);
    v22 = *(_QWORD*)(a1 + 1256);
    v23 = v21;
    if (v22 != 0) {
      v24 = v22 - 1;
      if ((v22 & (v22 - 1)) != 0) {
        v3 = v21;
        if (v21 >= v22) {
          v3 = v21 % v22;
        }
      }
      else {
        v3 = v24 & v21;
      }
      v29 = *(__int64***)(*v13 + 8 * v3);
      if (v29 != nullptr) {
        v68 = v7;
        v30 = *v29;
        if (*v29 != nullptr) {
          if ((v22 & v24) == 0) {
            while (1) {
              v35 = v30[1];
              if (v35 == v23) {
                v36 = *((unsigned __int8*)v30 + 16);
                v37 = v30[3];
                if ((v36 & 1) == 0) {
                  v37 = v36 >> 1;
                }
                if (v37 == v20) {
                  v38 = (v36 & 1) != 0 ? (__int64*)v30[4]
                                       : (__int64*)((char*)v30 + 17);
                  if ((unsigned int)memcmp(v38, v19, v20) == 0) {
                    goto LABEL_130;
                  }
                }
              }
              else if ((v35 & v24) != v3) {
                goto LABEL_68;
              }
              v30 = (__int64*)*v30;
              if (v30 == nullptr) {
                goto LABEL_68;
              }
            }
          }
          do {
            v31 = v30[1];
            if (v31 == v23) {
              v32 = *((unsigned __int8*)v30 + 16);
              v33 = v30[3];
              if ((v32 & 1) == 0) {
                v33 = v32 >> 1;
              }
              if (v33 == v20) {
                v34 = (v32 & 1) != 0 ? (__int64*)v30[4]
                                     : (__int64*)((char*)v30 + 17);
                if ((unsigned int)memcmp(v34, v19, v20) == 0) {
                  goto LABEL_130;
                }
              }
            }
            else {
              if (v31 >= v22) {
                v31 %= v22;
              }
              if (v31 != v3) {
                break;
              }
            }
            v30 = (__int64*)*v30;
          } while (v30 != nullptr);
        }
      LABEL_68:
        v7 = v68;
      }
    }
    v39 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    v40 = *(_BYTE*)(a1 + 1200);
    v41 = v39;
    *v39 = 0;
    v39[1] = v23;
    if ((v40 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v39 + 2, *(_QWORD*)(a1 + 1216),
                                         *(_QWORD*)(a1 + 1208));
    }
    else {
      v42 = *(_QWORD*)(a1 + 1208);
      v39[2] = *(_QWORD*)(a1 + 1200);
      v39[3] = v42;
      v39[4] = *(_QWORD*)(a1 + 1216);
    }
    v43 = *(_QWORD*)(a1 + 1272);
    v44 = *(float*)(a1 + 1280);
    v41[10] = v7;
    v45 = (float)(unsigned __int64)(v43 + 1);
    if (v22 == 0 || (float)(v44 * (float)v22) < v45) {
      v46 = v22 < 3 || (v22 & (v22 - 1)) != 0;
      v47 = v46 | (2 * v22);
      v48 = vcvtps_u64_f32(v45 / v44);
      if (v47 <= v48) {
        primeEm = v48;
      }
      else {
        primeEm = v47;
      }
      if (primeEm == 1) {
        primeEm = 2;
      }
      else if ((primeEm & (primeEm - 1)) != 0) {
        primeEm = std___1___next_prime(primeEm);
      }
      v50 = *(_QWORD*)(a1 + 1256);
      if (primeEm > v50) {
        goto LABEL_85;
      }
      if (primeEm < v50) {
        v51 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 1272) /
                             *(float*)(a1 + 1280));
        if (v50 < 3 || (v50 & (v50 - 1)) != 0) {
          v51 = std___1___next_prime(v51);
        }
        else {
          v52 = 1LL << -(char)__clz(v51 - 1);
          if (v51 >= 2) {
            v51 = v52;
          }
        }
        if (primeEm <= v51) {
          primeEm = v51;
        }
        if (primeEm < v50) {
        LABEL_85:
          GameRoutine_68cb20((__int64*)(a1 + 1248), primeEm);
        }
      }
      v22 = *(_QWORD*)(a1 + 1256);
      if ((v22 & (v22 - 1)) != 0) {
        if (v23 >= v22) {
          v3 = v23 % v22;
        }
        else {
          v3 = v23;
        }
      }
      else {
        v3 = (v22 - 1) & v23;
      }
    }
    v62 = *v13;
    v63 = *(_QWORD**)(*v13 + 8 * v3);
    if (v63 != nullptr) {
      *(_QWORD*)v41 = *v63;
      *v63 = v41;
    }
    else {
      v64 = *(_QWORD*)(a1 + 1264);
      *(_QWORD*)(a1 + 1264) = v41;
      *(_QWORD*)v41 = v64;
      *(_QWORD*)(v62 + 8 * v3) = a1 + 1264;
      if (*(_QWORD*)v41 != 0) {
        v65 = *(_QWORD*)(*(_QWORD*)v41 + 8LL);
        if ((v22 & (v22 - 1)) != 0) {
          if (v65 >= v22) {
            v65 %= v22;
          }
        }
        else {
          v65 &= v22 - 1;
        }
        *(_QWORD*)(*v13 + 8 * v65) = v41;
      }
    }
    ++*(_QWORD*)(a1 + 1272);
  }
LABEL_130:
  if ((v69_.v69 & 1) != 0 && v69_.v71 != nullptr) {
    v66 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v66 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v66);
  }
  return v6;
}

__int64 Seq_1131cc0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64* v9;
  __int64 result;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64** v20;
  __int64* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64* v29;
  _QWORD* v30;
  char v31;
  _DWORD* v32;
  __int64 v33;
  __int64 v34;
  float v35;
  float v36;
  _BOOL8 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 primeEm;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned int v48;
  __int64 v49;
  struct {
    _QWORD v50[2];
    char* v51;
  } v50_;
  __int64* v52;

  v5 = strlen(a2);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v8, 16, 0);
    v50_.v50[1] = v6;
    v50_.v51 = v7;
    v50_.v50[0] = v8 | 1;
    goto LABEL_9;
  }
  LOBYTE(v50_.v50[0]) = 2 * v5;
  v7 = (char*)v50_.v50 + 1;
  if (v5 != 0) {
  LABEL_9:
    memcpy(v7, a2, v6);
  }
  v7[v6] = 0;
  v9 = (__int64*)(a1 + 1248);
  if (GameRoutine_68c980((_QWORD*)(a1 + 1248), (unsigned __int8*)v50_.v50) !=
      nullptr) {
    v52 = v50_.v50;
    result = *((unsigned int*)GameRoutine_c9e1c0(
                   (float*)(a1 + 1248), (unsigned __int8*)v50_.v50,
                   (__int64)std___1_piecewise_construct_ptr, &v52) +
               10);
  }
  else {
    v11 = *(unsigned __int8*)(a1 + 1200);
    v12 = (v11 & 1) == 0;
    v13 = v11 >> 1;
    if (v12) {
      v14 = a1 + 1201;
    }
    else {
      v14 = *(_QWORD*)(a1 + 1216);
    }
    if (v12) {
      v15 = v13;
    }
    else {
      v15 = *(_QWORD*)(a1 + 1208);
    }
    v16 = std___1___hash_memory(v14, v15);
    v17 = *(_QWORD*)(a1 + 1256);
    v18 = v16;
    if (v17 != 0) {
      v19 = v17 - 1;
      if ((v17 & (v17 - 1)) != 0) {
        v2 = v16;
        if (v16 >= v17) {
          v2 = v16 % v17;
        }
      }
      else {
        v2 = v19 & v16;
      }
      v20 = *(__int64***)(*v9 + 8 * v2);
      if (v20 != nullptr) {
        v21 = *v20;
        if (*v20 != nullptr) {
          if ((v17 & v19) == 0) {
            while (1) {
              v26 = v21[1];
              if (v26 == v18) {
                v27 = *((unsigned __int8*)v21 + 16);
                v28 = v21[3];
                if ((v27 & 1) == 0) {
                  v28 = v27 >> 1;
                }
                if (v28 == v15) {
                  v29 = (v27 & 1) != 0 ? (__int64*)v21[4]
                                       : (__int64*)((char*)v21 + 17);
                  result = memcmp(v29, v14, v15);
                  if ((_DWORD)result == 0) {
                    goto LABEL_93;
                  }
                }
              }
              else if ((v26 & v19) != v2) {
                goto LABEL_52;
              }
              v21 = (__int64*)*v21;
              if (v21 == nullptr) {
                goto LABEL_52;
              }
            }
          }
          do {
            v22 = v21[1];
            if (v22 == v18) {
              v23 = *((unsigned __int8*)v21 + 16);
              v24 = v21[3];
              if ((v23 & 1) == 0) {
                v24 = v23 >> 1;
              }
              if (v24 == v15) {
                v25 = (v23 & 1) != 0 ? (__int64*)v21[4]
                                     : (__int64*)((char*)v21 + 17);
                result = memcmp(v25, v14, v15);
                if ((_DWORD)result == 0) {
                  goto LABEL_93;
                }
              }
            }
            else {
              if (v22 >= v17) {
                v22 %= v17;
              }
              if (v22 != v2) {
                break;
              }
            }
            v21 = (__int64*)*v21;
          } while (v21 != nullptr);
        }
      }
    }
  LABEL_52:
    v30 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    v31 = *(_BYTE*)(a1 + 1200);
    v32 = v30;
    *v30 = 0;
    v30[1] = v18;
    if ((v31 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v30 + 2, *(_QWORD*)(a1 + 1216),
                                         *(_QWORD*)(a1 + 1208));
    }
    else {
      v33 = *(_QWORD*)(a1 + 1208);
      v30[2] = *(_QWORD*)(a1 + 1200);
      v30[3] = v33;
      v30[4] = *(_QWORD*)(a1 + 1216);
    }
    v34 = *(_QWORD*)(a1 + 1272);
    v35 = *(float*)(a1 + 1280);
    v32[10] = 0;
    v36 = (float)(unsigned __int64)(v34 + 1);
    if (v17 == 0 || (float)(v35 * (float)v17) < v36) {
      v37 = v17 < 3 || (v17 & (v17 - 1)) != 0;
      v38 = v37 | (2 * v17);
      v39 = vcvtps_u64_f32(v36 / v35);
      if (v38 <= v39) {
        primeEm = v39;
      }
      else {
        primeEm = v38;
      }
      if (primeEm == 1) {
        primeEm = 2;
      }
      else if ((primeEm & (primeEm - 1)) != 0) {
        primeEm = std___1___next_prime(primeEm);
      }
      v41 = *(_QWORD*)(a1 + 1256);
      if (primeEm > v41) {
        goto LABEL_68;
      }
      if (primeEm < v41) {
        v42 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 1272) /
                             *(float*)(a1 + 1280));
        if (v41 < 3 || (v41 & (v41 - 1)) != 0) {
          v42 = std___1___next_prime(v42);
        }
        else {
          v43 = 1LL << -(char)__clz(v42 - 1);
          if (v42 >= 2) {
            v42 = v43;
          }
        }
        if (primeEm <= v42) {
          primeEm = v42;
        }
        if (primeEm < v41) {
        LABEL_68:
          GameRoutine_68cb20((__int64*)(a1 + 1248), primeEm);
        }
      }
      v17 = *(_QWORD*)(a1 + 1256);
      if ((v17 & (v17 - 1)) != 0) {
        if (v18 >= v17) {
          v2 = v18 % v17;
        }
        else {
          v2 = v18;
        }
      }
      else {
        v2 = (v17 - 1) & v18;
      }
    }
    v44 = *v9;
    v45 = *(_QWORD**)(*v9 + 8 * v2);
    if (v45 != nullptr) {
      *(_QWORD*)v32 = *v45;
      *v45 = v32;
    }
    else {
      v46 = *(_QWORD*)(a1 + 1264);
      *(_QWORD*)(a1 + 1264) = v32;
      *(_QWORD*)v32 = v46;
      *(_QWORD*)(v44 + 8 * v2) = a1 + 1264;
      if (*(_QWORD*)v32 != 0) {
        v47 = *(_QWORD*)(*(_QWORD*)v32 + 8LL);
        if ((v17 & (v17 - 1)) != 0) {
          if (v47 >= v17) {
            v47 %= v17;
          }
        }
        else {
          v47 &= v17 - 1;
        }
        *(_QWORD*)(*v9 + 8 * v47) = v32;
      }
    }
    result = 0;
    ++*(_QWORD*)(a1 + 1272);
  }
LABEL_93:
  if ((v50_.v50[0] & 1) != 0 && v50_.v51 != nullptr) {
    v48 = result;
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v49);
    return v48;
  }
  return result;
}

__int64* Seq_1132580(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = (_QWORD*)result[1];
  v3 = result[2];
  v4 = result;
  if ((unsigned __int64)v2 >= v3) {
    v8 = *result;
    v9 = (__int64)v2 - *result;
    v10 = 1 - 0x5555555555555555LL * (v9 >> 3);
    if (v10 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_1138d60();
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v3 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x555555555555555LL) {
      v13 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v14 = a2;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v13, 16, 0);
      a2 = v14;
    }
    else {
      v15 = 0;
    }
    v16 = (_QWORD*)(v15 + v9);
    v17 = v15 + 24 * v13;
    v18 = a2[1];
    v7 = v15 + v9 + 24;
    *v16 = *a2;
    v16[1] = v18;
    v16[2] = a2[2];
    result = (__int64*)memcpy(v15, v8, v9);
    *v4 = v15;
    v4[1] = v7;
    v4[2] = v17;
    if (v8 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v19 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v19, v8);
    }
  }
  else {
    v5 = *a2;
    v6 = a2[2];
    v7 = (__int64)(v2 + 3);
    v2[1] = a2[1];
    v2[2] = v6;
    *v2 = v5;
  }
  v4[1] = v7;
  return result;
}

__attribute__((swiftcall)) void Seq_11326e0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int8 v2;
  __int64 v4;
  __int64* v6;
  bool v8;
  bool v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  int v13;
  _QWORD* v16;
  _QWORD* v17;
  __n128 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  bool v46;
  __int64 v47;
  bool v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  _QWORD* v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  _QWORD* v69;
  _QWORD* v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64* v83;
  _QWORD* v84;
  _QWORD* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  _QWORD* v89;
  __int64* v90;
  __int64 v91;
  bool v92;
  bool v93;
  unsigned __int64 v94;
  bool v95;
  unsigned __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v105;
  _QWORD* v106;
  struct {
    __int64 v107;
    __int64 v108;
  } v107_;
  struct {
    __int64 v109[2];
    __int64 v110;
  } v109_;
  struct {
    _QWORD v111[2];
    char* v112;
  } v111_;
  struct {
    __int64 (**v113)();
    __int64* v114;
    __int64 v115;
    char gap104_[8];
    __int64 (***v116)();
  } v113_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(_BYTE*)(a1 + 1144);
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v4 = *(_QWORD*)(a1 + 1152);
  if ((v2 & 1) == 0) {
    v4 = v2 >> 1;
  }
  if (v4 != 20) {
    goto LABEL_28;
  }
  if ((v2 & 1) != 0) {
    v6 = *(__int64**)(a1 + 1160);
  }
  else {
    v6 = (__int64*)(a1 + 1145);
  }
  v8 = *v6 == 0x313156455F44494DLL && v6[1] == 0x31306D5F3432305FLL &&
       *((_DWORD*)v6 + 4) == 959590495;
  if (v8 ||
      (*v6 == 0x333156455F44494DLL ? (v9 = v6[1] == 0x31306D5F3530305FLL)
                                   : (v9 = false),
       v9 ? (v10 = *((_DWORD*)v6 + 4) == 892547167) : (v10 = false), v10)) {
    v17 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *v17 = &GameData_1adba82;
    v17[1] = &GameData_1a98e31;
    v16 = v17 + 2;
  }
  else {
    v11 = *v6;
    v12 = v6[1];
    v13 = *((_DWORD*)v6 + 4);
    if (v11 != 0x313156455F44494DLL || v12 != 0x31306D5F3631305FLL ||
        v13 != 875769951) {
    LABEL_28:
      v16 = nullptr;
      v17 = nullptr;
      goto LABEL_30;
    }
    v83 = (__int64*)fw_memory_g_heap_manager_ptr;
    v84 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *v84 = &GameData_1ac302b;
    v84[1] = &GameData_1af1f6d;
    v85 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v83, 32, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v86 = v84[1];
    v17 = v85;
    v16 = v85 + 3;
    *v85 = *v84;
    v87 = *v83;
    v85[1] = v86;
    v85[2] = &GameData_1a9210e;
    v88 = 128;
    if (*(_QWORD*)(v87 + 200) == 0) {
      v88 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt2(v87 + v88);
  }
LABEL_30:
  v106 = v17;
  v19 = GameData_22336e0;
  if (GameData_22336e0 != 0) {
    if (v16 != v17) {
      while (1) {
        v21 = *v17;
        v22 = strlen(*v17),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v22 >= 0xFFFFFFFFFFFFFFF7LL) {
          String_60a1d0_alt1(),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v23 = v22;
        if (v22 >= 0x17) {
          if ((v22 | 7) == 0x17) {
            v25 = 26;
          }
          else {
            v25 = (v22 | 7) + 1;
          }
          v24 = (char*)fw_memory_HeapManager_Allocate_alt1(
              fw_memory_g_heap_manager, v25, 16, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          v111_.v111[1] = v23;
          v111_.v112 = v24;
          v111_.v111[0] = v25 | 1;
        }
        else {
          v24 = (char*)v111_.v111 + 1;
          LOBYTE(v111_.v111[0]) = 2 * v22;
          if (v22 == 0) {
            goto LABEL_45;
          }
        }
        memmove(v24, v21, v23),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      LABEL_45:
        v26 = GameData_22336e0;
        v24[v23] = 0;
        if (v26 != 0 &&
            (v27 = GameRoutine_1152360((_QWORD*)(v26 + 560),
                                       (unsigned __int8*)v111_.v111)) !=
                nullptr &&
            (v28 = v27[5]) != 0) {
          v29 = *(_QWORD*)(v28 + 152);
          if ((v111_.v111[0] & 1) != 0) {
            goto LABEL_51;
          }
        }
        else {
          v29 = 0;
          if ((v111_.v111[0] & 1) != 0) {
          LABEL_51:
            if (v111_.v112 != nullptr) {
              v30 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v30 = 56;
              }
              result = nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v30);
            }
          }
        }
        if (v29 != 0) {
          v32 = (_QWORD*)a2[1];
          v31 = a2[2];
          if ((unsigned __int64)v32 < v31) {
            *v32 = v29;
            v20 = (__int64)(v32 + 1);
          }
          else {
            v33 = *a2;
            v34 = (__int64)v32 - *a2;
            v35 = (v34 >> 3) + 1;
            if (v35 >> 61 != 0) {
              GameRoutine_a89030(),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            v36 = v31 - v33;
            if (v36 >> 2 > v35) {
              v35 = v36 >> 2;
            }
            if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF8LL) {
              v37 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v37 = v35;
            }
            if (v37 != 0) {
              if (v37 >> 61 != 0) {
                GameRoutine_60a210_alt1(),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              v38 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v37, 16, 0),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            else {
              v38 = 0;
            }
            v39 = v38 + 8 * v37;
            v40 = v38 + v34 - 8 * (v34 >> 3);
            *(_QWORD*)(v38 + v34) = v29;
            v20 = v38 + v34 + 8;
            memcpy(v40, v33, v34),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
            *a2 = v40;
            a2[2] = v39;
            if (v33 != 0) {
              v41 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v41 = 56;
              }
              result = nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
            }
          }
          a2[1] = v20;
        }
        if (++v17 == v16) {
          goto LABEL_183;
        }
      }
    }
    if ((*(_BYTE*)(a1 + 1200) & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v109_.v109, *(_QWORD*)(a1 + 1216),
                                         *(_QWORD*)(a1 + 1208)),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v19 = GameData_22336e0;
      if (GameData_22336e0 == 0) {
        goto LABEL_165;
      }
    }
    else {
      v76 = *(_QWORD*)(a1 + 1208);
      v77 = *(_QWORD*)(a1 + 1216);
      v109_.v109[0] = *(_QWORD*)(a1 + 1200);
      v109_.v109[1] = v76;
      v109_.v110 = v77;
    }
    v79 =
        GameRoutine_1152360((_QWORD*)(v19 + 560), (unsigned __int8*)v109_.v109),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v79 != nullptr) {
      v80 = v79[5];
      if (v80 != 0) {
        v81 = *(_QWORD*)(v80 + 152);
        if ((v109_.v109[0] & 1) == 0) {
          goto LABEL_170;
        }
        goto LABEL_166;
      }
    }
  LABEL_165:
    v81 = 0;
    if ((v109_.v109[0] & 1) != 0) {
    LABEL_166:
      if (v109_.v110 != 0) {
        v82 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v82 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v82);
      }
    }
  LABEL_170:
    if (v81 == 0) {
      goto LABEL_183;
    }
    goto LABEL_182;
  }
  if (GameData_21ec7b0 != 0) {
    v42 = 0;
    while (1) {
      v43 = GameData_21ec7b0 + 24 * v42;
      v44 = *(_QWORD*)(v43 + 32);
      if (v44 == 0) {
        goto LABEL_74;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 16), 1u,
                                memory_order_relaxed);
      v45 = *(_QWORD*)(v43 + 40);
      v46 = *(_QWORD*)(v44 + 8) == -1 || v45 == 0;
      if (v46 || (v47 = *(_QWORD*)(v45 + 80)) == 0 ||
          (*(_QWORD*)(v47 + 8) != -1 ? (v48 = *(_QWORD*)(v45 + 88) == 0)
                                     : (v48 = true),
           v48 || *(_QWORD*)(v44 + 8) == -1)) {
        result = std___1___shared_weak_count___release_weak_alt1();
        goto LABEL_74;
      }
      result = std___1___shared_weak_count___release_weak_alt1();
      v49 = *(_QWORD*)(*(_QWORD*)(GameData_21ec7b0 + 8) +
                       96LL * *(int*)(v45 + 96) + 256);
      if (v49 == 0) {
        goto LABEL_74;
      }
      v50 = *(_QWORD*)(v49 + 392);
      if ((*(_BYTE*)(a1 + 1200) & 1) != 0) {
        v51 = *(_QWORD*)(a1 + 1216);
      }
      else {
        v51 = a1 + 1201;
      }
      if (v50 != 0) {
        v52 = *(_QWORD*)(v50 + 8);
      }
      else {
        v52 = 0;
      }
      if ((unsigned int)strcmp(v51, v52) == 0) {
        v101 = *(_QWORD*)(v45 + 80);
        if (v101 != 0) {
          v102 = *(_QWORD*)(v101 + 8);
          v103 = *(_QWORD*)(v45 + 88);
          if (v102 != -1 && v103 != 0) {
            goto LABEL_215;
          }
        }
        goto LABEL_183;
      }
      v53 = game_HashString_alt1(v51),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v53 == 0) {
        v58 = v52;
        v59 = 0;
        goto LABEL_117;
      }
      v54 = *(_QWORD*)(*GameData_212c890[0] + 96);
      if (v54 != 0 && *(_QWORD*)(*GameData_212c890[0] + 112) != 0) {
        v56 = v54 - 1;
        if ((v54 & (v54 - 1)) != 0) {
          v57 = v53;
          if (v53 >= v54) {
            v57 = v53 % v54;
          }
        }
        else {
          v57 = v56 & v53;
        }
        v60 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v57);
        if (v60 != nullptr) {
          v61 = (_QWORD*)*v60;
          if (v61 != nullptr) {
            if ((v54 & v56) == 0) {
              v58 = v52;
              while (1) {
                v68 = v61[1];
                if (v68 == v53) {
                  if (v61[2] == v53) {
                    goto LABEL_153;
                  }
                }
                else if ((v68 & v56) != v57) {
                  goto LABEL_116;
                }
                v61 = (_QWORD*)*v61;
                v59 = 0;
                if (v61 == nullptr) {
                  goto LABEL_117;
                }
              }
            }
            do {
              v62 = v61[1];
              if (v62 == v53) {
                if (v61[2] == v53) {
                  v58 = v52;
                LABEL_153:
                  v59 = v61[3];
                  goto LABEL_117;
                }
              }
              else {
                if (v62 >= v54) {
                  v62 %= v54;
                }
                if (v62 != v57) {
                  break;
                }
              }
              v61 = (_QWORD*)*v61;
            } while (v61 != nullptr);
          }
        }
      }
      v58 = v52;
    LABEL_116:
      v59 = 0;
    LABEL_117:
      v63 = game_HashString_alt1(v58),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v63 == 0) {
        goto LABEL_74;
      }
      v64 = *(_QWORD*)(GameData_21c99c8 + 96);
      if (v64 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
        goto LABEL_74;
      }
      v66 = v64 - 1;
      if ((v64 & (v64 - 1)) != 0) {
        v67 = v63;
        if (v63 >= v64) {
          v67 = v63 % v64;
        }
      }
      else {
        v67 = v66 & v63;
      }
      v69 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v67);
      if (v69 == nullptr) {
        goto LABEL_74;
      }
      v70 = (_QWORD*)*v69;
      if (v70 == nullptr) {
        goto LABEL_74;
      }
      if ((v64 & v66) == 0) {
        while (1) {
          v72 = v70[1];
          if (v72 == v63) {
            if (v70[2] == v63) {
              goto LABEL_147;
            }
          }
          else if ((v72 & v66) != v67) {
            goto LABEL_74;
          }
          v70 = (_QWORD*)*v70;
          if (v70 == nullptr) {
            goto LABEL_74;
          }
        }
      }
      while (1) {
        v71 = v70[1];
        if (v71 == v63) {
          break;
        }
        if (v71 >= v64) {
          v71 %= v64;
        }
        if (v71 != v67) {
          goto LABEL_74;
        }
      LABEL_136:
        v70 = (_QWORD*)*v70;
        if (v70 == nullptr) {
          goto LABEL_74;
        }
      }
      if (v70[2] != v63) {
        goto LABEL_136;
      }
    LABEL_147:
      if (v59 != 0) {
        v73 = v70[3];
        if (v73 != 0) {
          v74 = *(_QWORD*)(v59 + 32);
          if (v74 != 0) {
            v75 = *(_QWORD*)(v73 + 32);
            if (v75 != 0 && (unsigned int)strcmp(v74, v75) == 0) {
              v105 = *(_QWORD*)(v45 + 80);
              if (v105 == 0) {
                goto LABEL_183;
              }
              if (*(_QWORD*)(v105 + 8) == -1) {
                goto LABEL_183;
              }
              v103 = *(_QWORD*)(v45 + 88);
              if (v103 == 0) {
                goto LABEL_183;
              }
            LABEL_215:
              v81 = *(_QWORD*)(v103 + 8);
            LABEL_182:
              v90 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
              *a2 = (__int64)v90;
              *v90++ = v81;
              a2[1] = (__int64)v90;
              a2[2] = (__int64)v90;
              goto LABEL_183;
            }
          }
        }
      }
    LABEL_74:
      if (++v42 == 4) {
        goto LABEL_183;
      }
    }
  }
  if (GameData_2203490 != 0) {
    v107_.v107 = 0;
    v113_.v113 = GameData_1fecb18;
    v113_.v114 = &v107_.v107;
    v113_.v115 = a1 + 1200;
    v113_.v116 = &v113_.v113;
    CmdbtlPartyNatives_e9a800((_QWORD*)GameData_2203490, (__int64)&v113_.v113),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v113_.v116 == &v113_.v113) {
      v78 = 4;
    }
    else {
      if (v113_.v116 == nullptr) {
        goto LABEL_181;
      }
      v78 = 5;
    }
    ((__int64 (*)(__int64))(*v113_.v116)[v78])((__int64)v113_.v116),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_181:
    v81 = v107_.v107;
    if (v107_.v107 == 0) {
      goto LABEL_183;
    }
    goto LABEL_182;
  }
  if (GameData_21f4000 != 0) {
    v89 = SceneManager_138e2c0(GameData_21f4000, (unsigned __int8*)(a1 + 1200)),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v89 != nullptr) {
      v81 = v89[1];
      if (v81 != 0) {
        goto LABEL_182;
      }
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v92 = GameData_21f3d10 == 0 ||
          *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) == 0;
    v93 = !v92 && *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 232) <= 0;
    if (v93 && (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0) {
      v94 = *(unsigned __int8*)(a1 + 1200);
      v95 = (v94 & 1) == 0;
      v96 = v94 >> 1;
      if (v95) {
        v97 = a1 + 1201;
      }
      else {
        v97 = *(_QWORD*)(a1 + 1216);
      }
      if (v95) {
        v98 = v96;
      }
      else {
        v98 = *(_QWORD*)(a1 + 1208);
      }
      Hub_119acc0((void*)(&v107_.v107), a1 + 536, v97, v98),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v113_.v113 = nullptr;
      v113_.v114 = nullptr;
      if (v107_.v108 != 0) {
        v113_.v114 = (__int64*)std___1___shared_weak_count_lock(v107_.v108),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v113_.v114 != nullptr) {
          v99 = v107_.v107;
          v113_.v113 = (__int64 (**)(void))v107_.v107,
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v99 != 0) {
            v100 = *(_QWORD*)(*(_QWORD*)(v99 + 24) + 8LL);
            if (*(_BYTE*)(v100 + 145) == 1) {
              v107_.v107 = HubCharacterNatives_cf7940(v100),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
              if (v107_.v107 != 0) {
                GameRoutine_11330a0(a2, &v107_.v107),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
            }
          }
        }
        else {
          std___1___shared_weak_count___release_weak_alt1(),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      result = GameRoutine_a32b10((__int64)&v113_.v113);
    }
  }
LABEL_183:
  if (v106 != nullptr) {
    v91 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v91 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v91),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      return;
    }
  }
  {
    result;
    return;
  }
}

void Seq_11331c0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  atomic_uchar* v4;
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14[3];
  _QWORD* v15;

  Seq_11326e0((void*)(v14), a1);
  v2 = (_QWORD*)v14[0];
  v3 = v14[1];
  if (v14[0] != v14[1]) {
    v4 = (atomic_uchar*)GameData_212fa30;
    v5 = GameData_212fa28;
    do {
      v6 = *v2;
      if (*v2 != 0) {
        if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0) {
          v15 = v2;
          v12 = v6;
          v13 = v3;
          v10 = __cxa_guard_acquire(GameData_212fa30);
          v6 = v12;
          v3 = v13;
          v5 = GameData_212fa28;
          v2 = v15;
          v4 = (atomic_uchar*)GameData_212fa30;
          if (v10 != 0) {
            *GameData_212fa28 = wld_Crc32(0, "CharacterFacialController", 25);
            __cxa_guard_release(GameData_212fa30);
            v6 = v12;
            v3 = v13;
            v5 = GameData_212fa28;
            v4 = (atomic_uchar*)GameData_212fa30;
            v2 = v15;
          }
        }
        v7 = *(_QWORD*)(v6 + 512);
        v8 = v7;
        do {
          v9 = *(_DWORD*)(v8 - 16);
          v8 -= 16;
          v7 -= 16;
        } while (v9 != *v5);
        *(_DWORD*)(*(_QWORD*)(v7 + 8) + 340LL) = 0;
      }
      ++v2;
    } while (v2 != (_QWORD*)v3);
    v2 = (_QWORD*)v14[0];
  }
  *(_QWORD*)(a1 + 1288) = 3212836864LL;
  if (v2 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v11);
  }
}

__int64 Seq_1133320(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  unsigned int v4;
  int v5;
  float v6;

  v1 = game_ProcGameSkipView_instance_;
  if (*(_BYTE*)(result + 205) == 1) {
    if (game_ProcGameSkipView_instance_ != 0) {
      v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v2 & 0x10) == 0) {
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v2 & 0xFFFFFFEE;
        result = GameRoutine_8224a0(25);
        if (game_GameModeData_instance_ != 0 &&
            (result = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), result)) != 0) {
          v3 = *(_DWORD*)(v1 + 156);
          if (*(_DWORD*)(result + 32) == 1) {
            if ((v3 & 4) != 0) {
              return result;
            }
            v4 = v3 | 4;
            goto LABEL_15;
          }
        }
        else {
          v3 = *(_DWORD*)(v1 + 156);
        }
        if ((v3 & 4) == 0) {
          return result;
        }
        v4 = v3 & 0xFFFFFFFB;
        goto LABEL_15;
      }
    }
  }
  else if (game_ProcGameSkipView_instance_ != 0) {
    v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v5 & 0x10) == 0) {
      v4 = v5 & 0xFFFFFFE2 | 1;
    LABEL_15:
      v6 = *(float*)(v1 + 224);
      *(_DWORD*)(v1 + 156) = v4;
      if (v6 > 0.0) {
        *(_DWORD*)(v1 + 224) = 0;
      }
    }
  }
  return result;
}

__int64 Seq_11333e0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64* v4;
  unsigned __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  _DWORD* v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  bool v23;
  unsigned __int64 v24;
  char* v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  char* v29;
  int v30;
  unsigned int v31;
  __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  int v43;
  unsigned int v44;
  __int64 v45;
  int v46;
  float v47;
  float v48;
  __int64 v49;
  __int64 v50;
  char* v51;

  if ((*(_BYTE*)(a1 + 1120) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 1136);
  }
  else {
    v2 = a1 + 1121;
  }
  result = strncmp(v2, "MID_", 4);
  if ((_DWORD)result == 0) {
    v4 = msg_MessageManager_instance__ptr[0];
    result = GameRoutine_a4f6c0(*msg_MessageManager_instance__ptr[0], v2);
    v5 = *(unsigned __int8*)result;
    v6 = (v5 & 1) != 0 ? *(_QWORD*)(result + 8) : v5 >> 1;
    if (v6 != 0) {
      v7 = (_QWORD*)(a1 + 1096);
      if (a1 + 1096 != result) {
        if ((*(_BYTE*)v7 & 1) != 0) {
          if ((v5 & 1) != 0) {
            v10 = *(_QWORD*)(result + 16);
          }
          else {
            v10 = result + 1;
          }
          GameRoutine_64dde0(a1 + 1096, v10, v6);
        }
        else if ((v5 & 1) != 0) {
          GameRoutine_64df20(a1 + 1096, *(_QWORD*)(result + 16),
                             *(_QWORD*)(result + 8));
        }
        else {
          v8 = *(_QWORD*)result;
          v9 = *(_QWORD*)(result + 16);
          *(_QWORD*)(a1 + 1104) = *(_QWORD*)(result + 8);
          *(_QWORD*)(a1 + 1112) = v9;
          *v7 = v8;
        }
      }
      v11 = (*(_BYTE*)(a1 + 1096) & 1) != 0 ? *(_QWORD*)(a1 + 1112) : a1 + 1097;
      result = GameRoutine_a4fa80(*v4, v11, v2);
      *(_DWORD*)(a1 + 1168) = result;
      if ((result & 0x80000000) == 0) {
        result = GameRoutine_a51280(*v4, v2);
        if ((unsigned int)(result - 1) <= 2) {
          v12 = *(_DWORD*)(a1 + 200);
          goto LABEL_26;
        }
        if ((_DWORD)result == 0) {
          v13 = (_DWORD*)(a1 + 200);
          v12 = *(_DWORD*)(a1 + 200);
          if (v12 == 0) {
            *v13 = 1;
            goto LABEL_27;
          }
        LABEL_26:
          v13 = (_DWORD*)(a1 + 200);
          if ((unsigned int)(v12 - 1) <= 1) {
          LABEL_27:
            result = GameRoutine_a51640(*v4, v2, v2);
          }
          GameRoutine_11de9c0(result);
          if ((unsigned int)(*v13 - 1) < 2) {
            goto LABEL_77;
          }
          v14 = (*(_BYTE*)(a1 + 1096) & 1) != 0 ? *(_QWORD*)(a1 + 1112)
                                                : a1 + 1097;
          v15 = GameRoutine_a4fa80(*v4, v14, v2);
          v16 = (*(_BYTE*)(a1 + 1096) & 1) != 0 ? *(_QWORD*)(a1 + 1112)
                                                : a1 + 1097;
          v17 = (__int64*)GameRoutine_a4f800(*v4, v16, (unsigned int)(v15 + 1));
          if ((*(_BYTE*)v17 & 1) != 0) {
            fw_text_String_CopyTerminated(&v49, v17[2], v17[1]);
          }
          else {
            v18 = *v17;
            v19 = (char*)v17[2];
            v50 = v17[1];
            v51 = v19;
            v49 = v18;
          }
          v20 = (*(_BYTE*)(a1 + 1096) & 1) != 0 ? *(_QWORD*)(a1 + 1112)
                                                : a1 + 1097;
          if ((GameRoutine_11311f0(a1, v20, v15 + 1) & 1) != 0) {
            v21 = 1;
          }
          else {
            v22 = v15 + 2;
            do {
              if ((v49 & 1) != 0) {
                v29 = v51;
              }
              else {
                v29 = (char*)&v49 + 1;
              }
              v30 = GameRoutine_a51280(*v4, v29);
              v31 = ((unsigned int)(v30 - 9) < 0xC) & (0x80Fu >> (v30 - 9));
              if (v31 != 0) {
                break;
              }
              if ((*(_BYTE*)(a1 + 1096) & 1) != 0) {
                v32 = *(_QWORD*)(a1 + 1112);
              }
              else {
                v32 = a1 + 1097;
              }
              v33 = (__int64*)GameRoutine_a4f800(*v4, v32, v22);
              if (&v49 != v33) {
                v34 = *(unsigned __int8*)v33;
                if ((v49 & 1) != 0) {
                  v23 = (v34 & 1) == 0;
                  v24 = v34 >> 1;
                  if (v23) {
                    v25 = (char*)v33 + 1;
                  }
                  else {
                    v25 = (char*)v33[2];
                  }
                  if (v23) {
                    v26 = v24;
                  }
                  else {
                    v26 = v33[1];
                  }
                  GameRoutine_64dde0(&v49, v25, v26);
                }
                else if ((v34 & 1) != 0) {
                  GameRoutine_64df20(&v49, v33[2], v33[1]);
                }
                else {
                  v35 = *v33;
                  v36 = (char*)v33[2];
                  v50 = v33[1];
                  v51 = v36;
                  v49 = v35;
                }
              }
              v27 = v22;
              v28 = (*(_BYTE*)(a1 + 1096) & 1) != 0 ? *(_QWORD*)(a1 + 1112)
                                                    : a1 + 1097;
              ++v22;
            } while ((GameRoutine_11311f0(a1, v28, v27) & 1) == 0);
            v21 = v31 ^ 1;
          }
          if ((v49 & 1) != 0 && v51 != nullptr) {
            v37 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v37 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v51);
          }
          if (v21 != 0) {
          LABEL_77:
            *(_BYTE*)(a1 + 206) = 0;
          }
          v38 = *(_DWORD*)(a1 + 200);
          *(_BYTE*)(a1 + 205) = v38 != 2;
          if (GameData_21fa5e0 != 0) {
            *(_BYTE*)(a1 + 205) = 1;
          }
          else if (v38 == 2) {
            v45 = game_ProcGameSkipView_instance_;
            if (game_ProcGameSkipView_instance_ != 0) {
              v46 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
              if ((v46 & 0x10) == 0) {
                v47 = *(float*)(game_ProcGameSkipView_instance_ + 224);
                *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
                    v46 & 0xFFFFFFE2 | 1;
                if (v47 > 0.0) {
                  *(_DWORD*)(v45 + 224) = 0;
                }
              }
            }
            goto LABEL_97;
          }
          v39 = game_ProcGameSkipView_instance_;
          if (game_ProcGameSkipView_instance_ == 0) {
            goto LABEL_97;
          }
          v40 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
          if ((v40 & 0x10) != 0) {
            goto LABEL_97;
          }
          *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v40 & 0xFFFFFFEE;
          v41 = GameRoutine_8224a0(25);
          if (game_GameModeData_instance_ != 0 &&
              (v42 = game_GameVariableTable_Find(
                   *(_QWORD*)(game_GameModeData_instance_ + 48), v41)) != 0) {
            v43 = *(_DWORD*)(v39 + 156);
            if (*(_DWORD*)(v42 + 32) == 1) {
              if ((v43 & 4) == 0) {
                v44 = v43 | 4;
                goto LABEL_95;
              }
              goto LABEL_97;
            }
          }
          else {
            v43 = *(_DWORD*)(v39 + 156);
          }
          if ((v43 & 4) != 0) {
            v44 = v43 & 0xFFFFFFFB;
          LABEL_95:
            v48 = *(float*)(v39 + 224);
            *(_DWORD*)(v39 + 156) = v44;
            if (v48 > 0.0) {
              *(_DWORD*)(v39 + 224) = 0;
            }
          }
        LABEL_97:
          GameRoutine_60a020(a1 + 1144, v2);
          GameRoutine_1139a00(a1 + 400);
          GameRoutine_1197100(a1 + 536);
          *(_BYTE*)(a1 + 776) = 0;
          result = GameRoutine_f86840(a1 + 784);
          if ((*(_BYTE*)(a1 + 1092) & 1) == 0) {
            result = GameRoutine_1553130(19);
            *(_DWORD*)(a1 + 1088) = 19;
            *(_BYTE*)(a1 + 1092) = 1;
          }
          return result;
        }
      }
    }
  }
  if ((*(_WORD*)(a1 + 136) & 1) == 0) {
    return GameRoutine_657a50(a1, 1);
  }
  return result;
}

__int64 Seq_1133880(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (*(_BYTE*)(a1 + 1092) == 1) {
    GameRoutine_1553220(*(unsigned int*)(a1 + 1088));
    if (*(_BYTE*)(a1 + 1092) == 1) {
      *(_BYTE*)(a1 + 1092) = 0;
    }
  }
  if (GameData_21ec7b8 != 0 && game_gameui_Footer_instance_ != 0) {
    GameRoutine_1567000(game_gameui_Footer_instance_, 0);
  }
  result = GameRoutine_1196e60(a1 + 536);
  if (GameData_21fa5e0 == 0) {
    if ((*(_BYTE*)(a1 + 1120) & 1) != 0) {
      v3 = *(_QWORD*)(a1 + 1136);
    }
    else {
      v3 = a1 + 1121;
    }
    v6 = v3;
    v5 = game_HashString(v3);
    if (game_GameModeData_instance_ != 0) {
      GameRoutine_82dd50(game_GameModeData_instance_ + 40, &v5, 1);
    }
    if ((*(_BYTE*)(a1 + 1120) & 1) != 0) {
      v4 = *(_QWORD*)(a1 + 1136);
    }
    else {
      v4 = a1 + 1121;
    }
    v6 = v4;
    v5 = game_HashString(v4);
    return GameRoutine_9e6800(&v5, 1);
  }
  return result;
}

void Seq_Unknown3_1133970(__int64 a1, double a2, double a3, long double a4)
{

#pragma clang fp contract(off)
  float v5;
  float v6;
  bool v7;
  bool v8;
  float v9;

  LODWORD(a2) = *(_DWORD*)(a1 + 1288);
  if (*(float*)&a2 >= 0x0.0p+0f) {
    v5 = 0x1.e000000000000p+5f / (float)*(int*)(game_g_frame_clock + 476);
    v6 = v5 * 0x1.119ce00000000p-6f;
    v7 = v5 == 0x0.0p+0f;
    v8 = v5 < 0x0.0p+0f;
    v9 = 0x1.0b33320000000p+4f;
    *(float*)&a4 = v6 * 0x1.f400000000000p+9f;
    if (!v8 && !v7) {
      v9 = *(float*)&a4;
    }
    *(float*)&a2 = *(float*)&a2 + v9;
    LODWORD(a3) = *(_DWORD*)(a1 + 1292);
    *(_DWORD*)(a1 + 1288) = LODWORD(a2);
    if (*(float*)&a2 >= *(float*)&a3) {
      *(_QWORD*)&a2 = LANES128_OF(Seq_11331c0_alt1(a1)).n128_u64[0];
    }
  }
  game_113f060(a1 + 216, a2, a3, a4);
  GameRoutine_113d8b0(a1 + 216);
}

void Seq_1133a20(__int64 a1)
{
  __int64 v2;
  float v3;
  __int64 v4;
  float (**v5)(__int64);
  float v6;
  float v7;
  float v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;

  if (*GameData_212cfc8[0] == 0) {
    goto LABEL_6;
  }
  v2 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
  v3 = *(float*)(v2 + 252);
  if (v3 == *(float*)(v2 + 248)) {
    goto LABEL_6;
  }
  v5 = *(float (***)(__int64))(v2 + 240);
  v4 = v2 + 240;
  v6 = (*v5)(v4);
  v7 = *(float*)(v4 + 8);
  v8 = v3 + v6;
  if (v7 < v8) {
    v8 = *(float*)(v4 + 8);
  }
  if (v8 == v7) {
  LABEL_6:
    v9 = *(unsigned __int8**)(a1 + 16);
    if (v9 != nullptr) {
      v10 = *v9;
      v11 = v10 > 0x10;
      v12 = (1 << v10) & 0x1CE00;
      if (!v11 && v12 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
}

__int64 Seq_1133ad0(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  v1 = *(unsigned __int8**)(result + 16);
  if (v1 != nullptr) {
    v2 = *v1;
    v3 = v2 > 0x10;
    v4 = (1 << v2) & 0x1CE00;
    if (!v3 && v4 != 0) {
      *(_WORD*)(result + 136) |= 0x80u;
    }
  }
  *(_WORD*)(result + 136) |= 8u;
  return result;
}

__int64 Seq_1133c40(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;

  v1 = result;
  if (game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
          (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v3 = 2)
               : (v3 = 3),
           (v3 & v2) == 0) ||
      ((result = LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                                        (__int64)"In", 1)) &
       1) == 0 &&
          ((result = LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                                            (__int64)"FaceIn", 1)) &
           1) == 0) {
    v4 = *(unsigned __int8**)(v1 + 16);
    if (v4 != nullptr) {
      v5 = *v4;
      v6 = v5 > 0x10;
      v7 = (1 << v5) & 0x1CE00;
      if (!v6 && v7 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1133d20(__int64 result)
{
  int v1;
  __int64 v2;

  if (GameData_22336e0 != 0) {
    v1 = 2;
  }
  else {
    v1 = 0;
  }
  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    while (1) {
      if (*(_BYTE*)v2 == 2) {
        if (*(_DWORD*)(v2 + 32) == v1) {
          *(_QWORD*)(result + 16) = v2;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v2 == 0) {
        return result;
      }
      v2 += 64;
    }
  }
  return result;
}

_QWORD* Seq_1134340(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;

  if ((*((_BYTE*)result + 204) & 1) == 0 &&
      (GameData_21ec7b8 == 0 || (*(_BYTE*)(GameData_21ec7b8 + 288) & 1) == 0)) {
    v1 = result[12];
    v2 = result[13];
    v3 = ((v2 - v1) << 6) - 1;
    if (v2 == v1) {
      v3 = 0;
    }
    v4 = result[16] + result[15];
    if (v3 == v4) {
      v5 = result;
      GameRoutine_658d60(result + 11);
      v1 = v5[12];
      result = v5;
      v4 = v5[16] + v5[15];
    }
    *(_QWORD*)(*(_QWORD*)(v1 + 8 * (v4 >> 9)) + 8 * (v4 & 0x1FF)) = result[2];
    ++result[16];
    v6 = result[1];
    if (v6 != 0) {
      while (1) {
        if (*(_BYTE*)v6 == 2) {
          if (*(_DWORD*)(v6 + 32) == 4) {
            result[2] = v6;
            *((_WORD*)result + 68) &= ~0x80u;
            return result;
          }
        }
        else if (*(_BYTE*)v6 == 0) {
          return result;
        }
        v6 += 64;
      }
    }
  }
  return result;
}

void Seq_11347c0(__int64 a1)
{
  __int64 v2;
  int v3;
  unsigned __int64 v4;
  int v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v13;
  __int64 v14;
  atomic_uchar* v15;
  int* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  atomic_uchar* v21;
  int* v22;
  int v23;
  char v24;
  char v25;
  _BYTE* v26;
  _BYTE* v27;
  __int64 v28;
  __int64 v29;
  float v30;
  unsigned __int8* v31;
  float v32;
  int v33;
  float v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  int v40;
  _QWORD v41[2];
  __int64 v42[3];

  if ((*(_BYTE*)(a1 + 204) & 1) == 0) {
    GameRoutine_113bfb0((void*)(v41), a1 + 400);
    if ((*(_BYTE*)(a1 + 1144) & 1) != 0) {
      v2 = *(_QWORD*)(a1 + 1160);
    }
    else {
      v2 = a1 + 1145;
    }
    v3 = Manager_a50ce0(*msg_MessageManager_instance__ptr[0], v2);
    v4 = *(unsigned __int8*)(a1 + 424);
    v5 = v3;
    v6 = (v4 & 1) == 0;
    v7 = v4 >> 1;
    if (v6) {
      v8 = a1 + 425;
    }
    else {
      v8 = *(_QWORD*)(a1 + 440);
    }
    if (!v6) {
      v7 = *(_QWORD*)(a1 + 432);
    }
    if (v7 >= 5) {
      v9 = v8 + v7;
      v10 = v8;
      while (1) {
        v11 = memchr(v10, 95, v7 - 4);
        if (v11 == 0) {
          goto LABEL_31;
        }
        if (*(_DWORD*)v11 == *(_DWORD*)"_PTV_" &&
            *(unsigned __int8*)(v11 + 4) ==
                (unsigned __int8)GameData_1aad589[4]) {
          break;
        }
        v10 = v11 + 1;
        v7 = v9 - v10;
        if (v9 - v10 < 5) {
          goto LABEL_31;
        }
      }
      if (v11 == v9 || v11 - v8 == -1) {
        goto LABEL_31;
      }
      Seq_11326e0((void*)(v42), a1);
      v13 = (_QWORD*)v42[0];
      v14 = v42[1];
      if (v42[0] != v42[1]) {
        v15 = (atomic_uchar*)GameData_212fa30;
        v16 = GameData_212fa28;
        do {
          v17 = *v13;
          if (*v13 != 0) {
            if ((atomic_load_explicit(v15, memory_order_acquire) & 1) == 0) {
              v21 = v15;
              v37 = v14;
              v38 = v13;
              v22 = v16;
              v23 = __cxa_guard_acquire(v15);
              v14 = v37;
              v13 = v38;
              v16 = v22;
              v15 = v21;
              if (v23 != 0) {
                *v22 = wld_Crc32(0, "CharacterFacialController", 25);
                __cxa_guard_release(v21);
                v14 = v37;
                v13 = v38;
                v16 = v22;
                v15 = v21;
              }
            }
            v18 = *(_QWORD*)(v17 + 512);
            v19 = v18;
            do {
              v20 = *(_DWORD*)(v19 - 16);
              v19 -= 16;
              v18 -= 16;
            } while (v20 != *v16);
            *(_DWORD*)(*(_QWORD*)(v18 + 8) + 340LL) = 1065353216;
          }
          ++v13;
        } while (v13 != (_QWORD*)v14);
      }
      v25 = *(_BYTE*)(a1 + 1176);
      v26 = *(_BYTE**)(a1 + 1192);
      *(_DWORD*)(a1 + 1288) = 0;
      if ((v25 & 1) != 0) {
        v27 = v26;
      }
      else {
        v27 = (_BYTE*)(a1 + 1177);
      }
      v28 = **(_QWORD**)GameData_212eb78[0];
      if (v28 != 0) {
        v29 = *(_QWORD*)(v28 + 16);
        if (*v27 != 0) {
          goto LABEL_42;
        }
      }
      else {
        v29 = 0;
        if (*v27 != 0) {
        LABEL_42:
          v30 = 0.0f;
          v31 = v27 + 1;
          do {
            v32 = (float)(*(int (**)(__int64))(*(_QWORD*)v29 + 128LL))(v29);
            v33 = *v31++;
            v30 = v30 + v32;
          } while (v33 != 0);
          goto LABEL_47;
        }
      }
      v30 = 0.0f;
    LABEL_47:
      v34 = (float)(v30 * 0.5f) + 0x1.7700000000000p+9f;
      if (v5 != 0) {
        v34 = v34 * 0.75f;
        if (v5 != 1) {
          v34 = 0.0f;
        }
      }
      v35 = v42[0];
      *(float*)(a1 + 1292) = v34;
      if (v35 != 0) {
        v36 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v36 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v36);
      }
      return;
    }
  LABEL_31:
    v24 = snd_fnd_WeakHandle_isValid(v41);
    if (v5 != 2 && (v24 & 1) != 0 &&
        (*GameData_212d460[0] == 0 ||
         (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 8) == 0)) {
      v39 = 0;
      v40 = 0x2000;
      GameRoutine_112180(&v39, v41);
      Seq_1134ae0_alt1(a1, &v39);
    }
  }
}

void Seq_1134ae0(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  atomic_uchar* v5;
  int* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14[3];
  __int64 v15;

  Seq_11326e0((void*)(v14), a1);
  v3 = (__int64*)v14[0];
  v4 = v14[1];
  if (v14[0] != v14[1]) {
    v5 = (atomic_uchar*)GameData_212fa30;
    v6 = GameData_212fa28;
    do {
      v7 = *v3;
      if (*v3 != 0) {
        if ((atomic_load_explicit(v5, memory_order_acquire) & 1) == 0) {
          v15 = v7;
          v12 = __cxa_guard_acquire(v5);
          v7 = v15;
          if (v12 != 0) {
            *v6 = wld_Crc32(0, "CharacterFacialController", 25);
            __cxa_guard_release(v5);
            v7 = v15;
          }
        }
        v8 = *(_QWORD*)(v7 + 512);
        v9 = v8;
        do {
          v10 = *(_DWORD*)(v9 - 16);
          v9 -= 16;
          v8 -= 16;
        } while (v10 != *v6);
        v11 = *(_QWORD*)(v8 + 8);
        if (*(_DWORD*)(v11 + 96) <= 1u) {
          GameRoutine_112180(v11 + 320, a2);
          GameRoutine_a19f00(v11 + 272, v11 + 320);
        }
      }
      ++v3;
    } while (v3 != (__int64*)v4);
    v3 = (__int64*)v14[0];
  }
  if (v3 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v13);
  }
}

void Seq_11351f0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  _BOOL8 v11;
  __int64* v12;
  long double v13;
  const char* v14;

  v0 = GameData_212d460[0];
  if (*GameData_212d460[0] == 0 ||
      *(_DWORD*)(*GameData_212d460[0] + 200) != 2) {
    v1 = GameRoutine_8224a0(19);
    if (game_GameModeData_instance_ != 0 &&
        (v2 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v1)) != 0 &&
        *(_DWORD*)(v2 + 32) == 1) {
      v3 = GameRoutine_8224a0(19);
      if (game_GameModeData_instance_ == 0) {
        return;
      }
      v4 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v3);
      if (v4 == 0 || *(_DWORD*)(v4 + 32) != 1 ||
          (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 952LL) & 6) == 0) {
        return;
      }
      v5 = GameRoutine_8224a0(19);
      v6 = 0;
    }
    else {
      if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 952LL) & 4) == 0) {
        return;
      }
      v5 = GameRoutine_8224a0(19);
      v6 = 1;
    }
    game_VariableManager_SetFlag(v5, v6);
    v7 = *v0;
    if (v7 != 0) {
      v8 = GameRoutine_8224a0(19);
      v11 = game_GameModeData_instance_ != 0 &&
            (v10 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), v8)) != 0 &&
            *(_DWORD*)(v10 + 32) == 1;
      *(_BYTE*)(v7 + 289) = v11;
      v12 = game_talk_g_window_layout_ptr[0];
      ui_LayoutAccessor_SetPaneVisible(game_talk_g_window_layout_ptr[0],
                                       "N_Auto", v11, v9);
      ui_LayoutAccessor_SetPaneVisible(v12, "N_Next",
                                       (*(_BYTE*)(v7 + 289) & 1) == 0, v13);
      if (*(_BYTE*)(v7 + 289) != 0) {
        v14 = "Auto";
      }
      else {
        v14 = "Wait";
      }
      GameRoutine_1562680(v12, v14, 1.0);
    }
  }
}

__int64 Seq_1135380(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 result;
  _BYTE* v7;
  char v8;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      152, 16, 0);
  v3 = GameData_212c608[0];
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  *(_WORD*)(v2 + 136) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = "NULL";
  *(_QWORD*)(v2 + 32) = 0;
  v4 = (_QWORD*)(v2 + 32);
  *(_QWORD*)(v2 + 138) = 0;
  *(_QWORD*)(v2 + 144) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)v2 = v3 + 16;
  *(_QWORD*)(v2 + 8) = 0;
  game_ProcInst_Register();
  *(_QWORD*)v2 = game_talk_ProcHideUI_vtable;
  v5 = *(_QWORD*)(a1 + 40);
  if (v5 != 0) {
    *(_QWORD*)(v5 + 48) = v2;
    *(_QWORD*)(v2 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v2;
  *(_QWORD*)(v2 + 24) = "talk::ProcHideUI";
  *(_QWORD*)(v2 + 32) = a1;
  *(_DWORD*)(v2 + 140) = game_HashString32("talk::ProcHideUI");
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 24;
  *(_QWORD*)(v2 + 80) = 1;
  *(_QWORD*)(v2 + 8) = &GameData_216f3a8;
  *(_QWORD*)(v2 + 16) = &GameData_216f3a8;
  (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2);
  if ((result & 1) != 0 && (*(_WORD*)(v2 + 136) & 0x100) == 0) {
    *(_WORD*)(v2 + 136) |= 0x100u;
  }
  v7 = (_BYTE*)*v4;
  v8 = *(_BYTE*)(*v4 + 138LL);
  if (v8 == 0) {
    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*v4);
    v8 = v7[138];
  }
  v7[138] = v8 + 1;
  *(_WORD*)(v2 + 136) |= 2u;
  return result;
}

__int64 Seq_11354e0(__int64 result)
{
  __int64 v1;
  char v2;
  int v3;
  int v4;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  float v8;
  unsigned __int8* v9;
  float v10;
  int v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  long double v16;
  _BYTE* v17;
  char v18;
  __int64* v19;

  v1 = result;
  v2 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    if ((unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
            1 >
        2) {
      goto LABEL_8;
    }
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v3 & 8) != 0) {
      v4 = 2;
    }
    else {
      v4 = 3;
    }
    v2 = (v4 & v3) == 0;
  }
  if ((v2 & 1) != 0) {
    return result;
  }
LABEL_8:
  if ((*(_BYTE*)(result + 204) & 1) != 0) {
    return result;
  }
  if ((*(_BYTE*)(result + 1176) & 1) != 0) {
    v5 = *(_BYTE**)(result + 1192);
  }
  else {
    v5 = (_BYTE*)(result + 1177);
  }
  v6 = **(_QWORD**)GameData_212eb78[0];
  if (v6 != 0) {
    v7 = *(_QWORD*)(v6 + 16);
    if (*v5 != 0) {
      goto LABEL_14;
    }
  }
  else {
    v7 = 0;
    if (*v5 != 0) {
    LABEL_14:
      v8 = 0.0;
      v9 = v5 + 1;
      do {
        v10 = (float)(*(int (**)(__int64))(*(_QWORD*)v7 + 128LL))(v7);
        v11 = *v9++;
        v8 = v8 + v10;
      } while (v11 != 0);
      goto LABEL_20;
    }
  }
  v8 = 0.0;
LABEL_20:
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       160, 16, 0);
  v13 = GameData_212c608[0];
  *(_QWORD*)(v12 + 88) = 0;
  *(_QWORD*)(v12 + 96) = 0;
  *(_QWORD*)(v12 + 104) = 0;
  *(_QWORD*)(v12 + 112) = 0;
  *(_QWORD*)(v12 + 120) = 0;
  *(_QWORD*)(v12 + 128) = 0;
  *(_WORD*)(v12 + 136) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 24) = "NULL";
  *(_QWORD*)(v12 + 32) = 0;
  v14 = (_QWORD*)(v12 + 32);
  *(_QWORD*)(v12 + 138) = 0;
  *(_QWORD*)(v12 + 144) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)(v12 + 80) = 0;
  *(_QWORD*)v12 = v13 + 16;
  *(_QWORD*)(v12 + 8) = 0;
  game_ProcInst_Register();
  *(float*)(v12 + 152) = (float)(v8 * 0.5) + 0x1.7700000000000p+9;
  *(_DWORD*)(v12 + 156) = 0;
  *(_QWORD*)v12 = game_talk_ProcKeyWait_vtable;
  v15 = *(_QWORD*)(v1 + 40);
  if (v15 != 0) {
    *(_QWORD*)(v15 + 48) = v12;
    *(_QWORD*)(v12 + 56) = *(_QWORD*)(v1 + 40);
  }
  *(_QWORD*)(v1 + 40) = v12;
  *(_QWORD*)(v12 + 24) = "talk::ProcKeyWait";
  *(_QWORD*)(v12 + 32) = v1;
  *(_DWORD*)(v12 + 140) = game_HashString32("talk::ProcKeyWait");
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 24;
  *(_QWORD*)(v12 + 80) = 1;
  *(_QWORD*)(v12 + 8) = &GameData_216f168;
  *(_QWORD*)(v12 + 16) = &GameData_216f168;
  (*(void (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v12 + 136LL))(v12) & 1) != 0 &&
      (*(_WORD*)(v12 + 136) & 0x100) == 0) {
    *(_WORD*)(v12 + 136) |= 0x100u;
  }
  v17 = (_BYTE*)*v14;
  v18 = *(_BYTE*)(*v14 + 138LL);
  if (v18 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v17 + 64LL))(*v14);
    v18 = v17[138];
  }
  v17[138] = v18 + 1;
  *(_WORD*)(v12 + 136) |= 2u;
  v19 = game_talk_g_window_layout_ptr[0];
  ui_LayoutAccessor_SetPaneVisible(game_talk_g_window_layout_ptr[0], "Next", 1,
                                   v16);
  return LayoutAccessor_1562680(v19, "Wait", 1.0);
}

__int64 Seq_1135d20(__int64 result)
{
  int v1;
  int v2;
  __int64 v3;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;
  __int16 v9;
  unsigned __int8* v10;
  unsigned int v11;
  int v12;
  __int16 v14;
  unsigned __int8* v15;
  unsigned int v16;
  int v17;

  if ((*(_BYTE*)(result + 1072) & 1) == 0) {
    v10 = *(unsigned __int8**)(result + 16);
    if (v10 != nullptr) {
      v11 = *v10;
      v6 = v11 > 0x10;
      v12 = (1 << v11) & 0x1CE00;
      if (!v6 && v12 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    v14 = *(_WORD*)(result + 136);
    goto LABEL_24;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v2 = (v1 & 8) != 0 ? 2 : 3;
    if ((v2 & v1) == 0) {
      v15 = *(unsigned __int8**)(result + 16);
      if (v15 != nullptr) {
        v16 = *v15;
        v6 = v16 > 0x10;
        v17 = (1 << v16) & 0x1CE00;
        if (!v6 && v17 != 0) {
          *(_WORD*)(result + 136) |= 0x80u;
        }
      }
      v14 = *(_WORD*)(result + 136);
      *(_BYTE*)(result + 1072) = 0;
    LABEL_24:
      *(_WORD*)(result + 136) = v14 | 8;
      return result;
    }
  }
  v3 = result;
  result = GameRoutine_1563280(game_talk_g_window_layout_ptr[0], "Out", 1);
  if ((result & 1) == 0) {
    result =
        GameRoutine_1563280(game_talk_g_window_layout_ptr[0], "FaceOut", 1);
    if ((result & 1) == 0) {
      v4 = *(unsigned __int8**)(v3 + 16);
      if (v4 != nullptr) {
        v5 = *v4;
        v6 = v5 > 0x10;
        v7 = (1 << v5) & 0x1CE00;
        if (!v6 && v7 != 0) {
          *(_WORD*)(v3 + 136) |= 0x80u;
        }
      }
      v9 = *(_WORD*)(v3 + 136);
      *(_BYTE*)(v3 + 1072) = 0;
      *(_WORD*)(v3 + 136) = v9 | 8;
    }
  }
  return result;
}

__int64 Seq_1136ff0(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  result = GameRoutine_113b8c0(a1 + 400, a1);
  if ((result & 1) != 0) {
    v3 = *(unsigned __int8**)(a1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1137060(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  result = GameRoutine_113be80(a1 + 400, a1);
  if ((result & 1) != 0) {
    v3 = *(unsigned __int8**)(a1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_11370d0(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  result = GameRoutine_119a200(a1 + 536, a1);
  if ((result & 1) != 0) {
    v3 = *(unsigned __int8**)(a1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1137230(__int64 result)
{
  __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;

  v1 = result;
  if (*(_QWORD*)GameData_212d750 == 0 ||
      ((result = GameRoutine_135a2e0(result + 728, result + 728)) & 1) != 0) {
    v2 = *(unsigned __int8**)(v1 + 16);
    if (v2 != nullptr) {
      v3 = *v2;
      v4 = v3 > 0x10;
      v5 = (1 << v3) & 0x1CE00;
      if (!v4 && v5 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_11372b0(__int64 result)
{
  __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;

  v1 = result;
  if (*(_QWORD*)GameData_212d750 == 0 ||
      ((result = GameRoutine_135a2e0(result + 728, result + 752)) & 1) != 0) {
    v2 = *(unsigned __int8**)(v1 + 16);
    if (v2 != nullptr) {
      v3 = *v2;
      v4 = v3 > 0x10;
      v5 = (1 << v3) & 0x1CE00;
      if (!v4 && v5 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1137330(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  result = GameRoutine_f87240(a1 + 784);
  if ((result & 1) != 0) {
    v3 = *(unsigned __int8**)(a1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_11373a0(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  result = GameRoutine_f87cd0(a1 + 784);
  if ((result & 1) != 0) {
    v3 = *(unsigned __int8**)(a1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1137500(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned int v11;
  bool v12;
  int v13;
  _BYTE v15[32];
  _BYTE* v16;

  v1 = result;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    v2 = *(unsigned __int8*)(result + 968);
    v3 = *(_QWORD*)(result + 984);
    v4 = result + 1016;
    v16 = nullptr;
    v5 = (v2 & 1) == 0;
    v6 = v2 >> 1;
    if (v5) {
      v7 = v1 + 969;
    }
    else {
      v7 = v3;
    }
    if (v5) {
      v8 = v6;
    }
    else {
      v8 = *(_QWORD*)(v1 + 976);
    }
    GameRoutine_140bb40(v4, v7, v8, v15);
    result = (__int64)v16;
    if (v16 == v15) {
      v9 = 32;
    }
    else {
      if (v16 == nullptr) {
        goto LABEL_13;
      }
      v9 = 40;
    }
    result = (*(__int64 (**)(void*))(*(_QWORD*)v16 + v9))((void*)v16);
  }

LABEL_13:
  v10 = *(unsigned __int8**)(v1 + 16);
  if (v10 != nullptr) {
    v11 = *v10;
    v12 = v11 > 0x10;
    v13 = (1 << v11) & 0x1CE00;
    if (!v12 && v13 != 0) {
      *(_WORD*)(v1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v1 + 136) |= 8u;
  return result;
}

__int64 Seq_11375e0(__int64 result)
{
  unsigned int v1;
  int v2;
  int v3;
  bool v4;
  unsigned __int8* v5;
  unsigned int v6;
  bool v7;
  int v8;

  if (game_ProcGameSkipView_instance_ == 0 ||
      (v1 = *(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) - 1) >
          2 ||
      (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v3 = 2)
           : (v3 = 3),
       (v3 & v2) == 0 ? (v4 = v1 >= 2) : (v4 = true), v4)) {
    v5 = *(unsigned __int8**)(result + 16);
    if (v5 != nullptr) {
      v6 = *v5;
      v7 = v6 > 0x10;
      v8 = (1 << v6) & 0x1CE00;
      if (!v7 && v8 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1137710(__int64 a1)
{
  __int64* v2;
  __int64 result;

  v2 = GameData_212fc38[0];
  result = *GameData_212fc38[0];
  if (*GameData_212fc38[0] != 0) {
    *(_DWORD*)(result + 208) = *(_DWORD*)(a1 + 1168);
    GameRoutine_11511f0();
    return GameRoutine_1151340(*v2);
  }
  return result;
}

__int64 Seq_1137760()
{
  __int64 result;

  result = GameData_22336e0;
  if (GameData_22336e0 != 0) {
    return GameRoutine_11516e0();
  }
  return result;
}

__int64 Seq_1137780(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  int v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;

  v1 = GameData_22336e0;
  if (GameData_22336e0 == 0) {
    return result;
  }
  v2 = result;
  result = GameRoutine_114ed00(GameData_22336e0);
  if ((result & 1) != 0) {
    return result;
  }
  while (1) {
    do {
      v3 = *(unsigned int*)(v1 + 264);
      v5 = *(_QWORD*)(v1 + 216);
      v4 = *(_QWORD*)(v1 + 224);
      if ((v3 & 0x80000000) != 0 ||
          0xCCCCCCCCCCCCCCCDLL * ((v4 - v5) >> 5) <= v3 ||
          (v6 = v5 + 160LL * (unsigned int)v3,
           (result = *(_QWORD*)(v6 + 80)) == 0)) {
        v7 = false;
        goto LABEL_10;
      }
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 48LL))(
          result, v5 + 160LL * (unsigned int)v3);
      ++*(_DWORD*)(v6 + 144);
    } while ((_DWORD)result == 2);
    if ((_DWORD)result == 3) {
      return result;
    }
    LODWORD(v3) = *(_DWORD*)(v1 + 264);
    v5 = *(_QWORD*)(v1 + 216);
    v4 = *(_QWORD*)(v1 + 224);
    v7 = (_DWORD)result == 1;
  LABEL_10:
    v8 = v3 + 1;
    *(_DWORD*)(v1 + 264) = v8;
    if (0xCCCCCCCCCCCCCCCDLL * ((v4 - v5) >> 5) <= v8) {
      break;
    }
    if (v7) {
      return result;
    }
  }
  *(_DWORD*)(v1 + 264) = 0;
  v9 = *(unsigned __int8**)(v2 + 16);
  if (v9 != nullptr) {
    v10 = *v9;
    v11 = v10 > 0x10;
    v12 = (1 << v10) & 0x1CE00;
    if (!v11 && v12 != 0) {
      *(_WORD*)(v2 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v2 + 136) |= 8u;
  return result;
}

__int64 Seq_11378c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  int v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;

  v1 = GameData_22336e0;
  if (GameData_22336e0 == 0) {
    return result;
  }
  v2 = result;
  result = GameRoutine_114ed00(GameData_22336e0);
  if ((result & 1) != 0) {
    return result;
  }
  while (1) {
    do {
      v3 = *(unsigned int*)(v1 + 264);
      v5 = *(_QWORD*)(v1 + 240);
      v4 = *(_QWORD*)(v1 + 248);
      if ((v3 & 0x80000000) != 0 ||
          0xCCCCCCCCCCCCCCCDLL * ((v4 - v5) >> 5) <= v3 ||
          (v6 = v5 + 160LL * (unsigned int)v3,
           (result = *(_QWORD*)(v6 + 80)) == 0)) {
        v7 = false;
        goto LABEL_10;
      }
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 48LL))(
          result, v5 + 160LL * (unsigned int)v3);
      ++*(_DWORD*)(v6 + 144);
    } while ((_DWORD)result == 2);
    if ((_DWORD)result == 3) {
      return result;
    }
    LODWORD(v3) = *(_DWORD*)(v1 + 264);
    v5 = *(_QWORD*)(v1 + 240);
    v4 = *(_QWORD*)(v1 + 248);
    v7 = (_DWORD)result == 1;
  LABEL_10:
    v8 = v3 + 1;
    *(_DWORD*)(v1 + 264) = v8;
    if (0xCCCCCCCCCCCCCCCDLL * ((v4 - v5) >> 5) <= v8) {
      break;
    }
    if (v7) {
      return result;
    }
  }
  *(_DWORD*)(v1 + 264) = 0;
  v9 = *(unsigned __int8**)(v2 + 16);
  if (v9 != nullptr) {
    v10 = *v9;
    v11 = v10 > 0x10;
    v12 = (1 << v10) & 0x1CE00;
    if (!v11 && v12 != 0) {
      *(_WORD*)(v2 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v2 + 136) |= 8u;
  return result;
}

__int64 Seq_1137a00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  char v3;

  if ((GameData_21fa5e0 | *GameData_212fc38[0]) == 0) {
    v1 = result;
    if ((*(_BYTE*)(result + 1120) & 1) != 0) {
      v2 = *(_QWORD*)(result + 1136);
    }
    else {
      v2 = result + 1121;
    }
    Seq_1137a80(&v3, v2);
    return GameRoutine_9d57b0(v1, &v3);
  }
  return result;
}

unsigned __int64 Seq_1137a80(_QWORD* a1, __int64 a2)
{
  unsigned __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  result = game_HashString(a2);
  if (result != 0) {
    v4 = *(_QWORD*)(GameData_21c9fe0 + 96);
    if (v4 != 0 && *(_QWORD*)(GameData_21c9fe0 + 112) != 0) {
      v6 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v7 = result;
        if (result >= v4) {
          v7 = result % v4;
        }
      }
      else {
        v7 = v6 & result;
      }
      v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c9fe0 + 88) + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v12 = v9[1];
              if (v12 == result) {
                if (v9[2] == result) {
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
            if (v10 == result) {
              if (v9[2] == result) {
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
  *a1 = v11;
  return result;
}

__int64 Seq_1137ba0(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  if (GameData_21fa5e0 != 0) {
    goto LABEL_2;
  }
  v6 = GameData_22336e0;
  if (GameData_22336e0 != 0) {
    v7 = *(_QWORD*)(result + 1344);
    v8 = *(_QWORD*)(result + 1352);
    v9 = v8 - v7;
    if (v8 == v7) {
      *(_QWORD*)(GameData_22336e0 + 712) = *(_QWORD*)(GameData_22336e0 + 704);
    }
    else {
      if (0xAAAAAAAAAAAAAAABLL * (v9 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
        GameRoutine_1138d60_alt1();
      }
      v10 = result;
      v11 = fw_memory_g_heap_manager_ptr;
      v12 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v9, 16, 0);
      memcpy(v12, v7, v9);
      v13 = (_QWORD*)v12;
      *(_QWORD*)(v6 + 712) = *(_QWORD*)(v6 + 704);
      do {
        Seq_1132580_alt1((__int64*)(v6 + 704), v13);
        v13 += 3;
        v9 -= 24;
      } while (v9 != 0);
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v14);
      result = v10;
    }
    goto LABEL_2;
  }
  v15 = *(_QWORD*)(result + 1344);
  v16 = *(int*)(result + 1368);
  if (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(result + 1352) - v15) >> 3) <= v16) {
  LABEL_2:
    v1 = *(unsigned __int8**)(result + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    return result;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
    LODWORD(v16) = *(_DWORD*)(result + 1368);
    v15 = *(_QWORD*)(result + 1344);
  }
  v17 = result;
  result = game_telop_TelopRelianceLvUp_CreateBind(
      result, *(_QWORD*)(v15 + 24LL * (int)v16),
      *(_QWORD*)(v15 + 24LL * (int)v16 + 8),
      *(_BYTE*)(v15 + 24LL * (int)v16 + 16),
      *(_BYTE*)(v15 + 24LL * (int)v16 + 17));
  ++*(_DWORD*)(v17 + 1368);
  return result;
}

__int64 Seq_1137d60(__int64 result)
{
  __int64 v1;

  if ((GameData_21fa5e0 | *GameData_212fc38[0]) == 0) {
    v1 = result;
    result = *(_QWORD*)GameData_212c7b0[0];
    if (*(_QWORD*)GameData_212c7b0[0] != 0) {
      return GameSubquestData_125d800(result, v1);
    }
  }
  return result;
}

__int64 Seq_Unknown4_1137da0()
{
  if (GameData_21cd128 != 0) {
    MapInfo_824f10();
  }
  if (GameData_22190b8 != 0) {
    *(_BYTE*)(GameData_22190b8 + 32) = 0;
    (*(void (**)(__int64))(*(_QWORD*)GameData_221b2e8 + 32LL))(
        GameData_221b2e8);
    (*(void (**)(__int64))(*(_QWORD*)GameData_22197d8 + 32LL))(
        GameData_22197d8);
  }
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  return GameRoutine_8679c0();
}

__int64 Seq_Unknown5_1137e30()
{
  __int64 result;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  if (GameData_21cd128 != 0) {
    result = GameRoutine_824ca0();
  }
  if (GameData_22190b8 != 0 &&
      (GameData_21ec7b0 == 0 || (v1 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
       (*(_BYTE*)(v1 + 115) & 0x10) == 0) &&
      (*(_BYTE*)(GameData_22190b8 + 124) & 1) == 0) {
    *(_BYTE*)(GameData_22190b8 + 32) = 1;
    (*(void (**)(__int64))(*(_QWORD*)GameData_221b2e8 + 24LL))(
        GameData_221b2e8);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_22197d8 + 24LL))(
        GameData_22197d8);
  }
  v2 = (_QWORD*)game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v3 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v7 = v5 == v6;
    v8 = v3 - 1 + v4;
    v9 = v8 >> 7;
    v10 = v8 & 0x7F;
    v11 = 16 * (v5 - v6) - 1;
    v12 = *(_QWORD*)(v6 + 8 * v9);
    if (v7) {
      v11 = 0;
    }
    v13 = v12 + 32 * v10;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v13 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v2[21] = *(_QWORD*)(v13 + 24);
    v14 = *(_QWORD*)(v13 + 16);
    v2[27] = v3 - 1;
    v2[20] = v14;
    if ((unsigned __int64)(v11 - (v3 + v4) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v15 = *(_QWORD*)(v5 - 8);
      if (v15 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
        v5 = v2[24];
      }
      v2[24] = v5 - 8;
    }
  }
  return result;
}

__int64 Seq_Unknown12_1137fa0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _BOOL4 v6;

  v2 = *(_QWORD*)(a1 + 40);
  if (v2 != 0 && (*(_WORD*)(v2 + 136) & 1) == 0) {
    GameRoutine_657a50(v2, 1);
  }
  result = GameRoutine_62c840(*as_g_script_manager_ptr, 0);
  if (*(_BYTE*)(a1 + 1092) == 1) {
    result = GameRoutine_1553220(*(unsigned int*)(a1 + 1088));
    if (*(_BYTE*)(a1 + 1092) == 1) {
      *(_BYTE*)(a1 + 1092) = 0;
    }
  }
  v4 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(a1 + 16);
  if (v4 > v5) {
  LABEL_10:
    v6 = true;
    if (v4 == 0) {
      return result;
    }
  }
  else {
    while (*(_BYTE*)v5 != 2) {
      v5 -= 64LL;
      if (v4 > v5) {
        goto LABEL_10;
      }
    }
    v6 = *(_DWORD*)(v5 + 32) != 5;
    if (v4 == 0) {
      return result;
    }
  }
  if (v6) {
    while (1) {
      if (*(_BYTE*)v4 == 2) {
        if (*(_DWORD*)(v4 + 32) == 5) {
          *(_QWORD*)(a1 + 16) = v4;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v4 == 0) {
        return result;
      }
      v4 += 64LL;
    }
  }
  return result;
}

void Seq_Unknown10()
{
  __int64 v0;

  v0 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 0) {
    *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) = 1;
    *(_DWORD*)(v0 + 156) &= ~2u;
  }
}

__int64 game_talk_Seq_BindFaceEyeBlinkSync_lambda0_Invoke(__int64 a1)
{
  __int64 result;
  unsigned __int64 v2;
  bool v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;

  result = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL);
  if (result != 0) {
    v2 = *(unsigned __int8*)(result + 1432);
    v3 = (v2 & 1) == 0;
    v4 = v2 >> 1;
    if (v3) {
      v5 = result + 1433;
    }
    else {
      v5 = *(_QWORD*)(result + 1448);
    }
    if (v3) {
      v6 = v4;
    }
    else {
      v6 = *(_QWORD*)(result + 1440);
    }
    result = GameRoutine_1916be0(result, 1, v5, v6, 0);
    if (result != 0) {
      v7 = result;
      spine_TrackEntry_setMixDuration(0.0);
      spine_TrackEntry_setDelay(v7, 0.07);
      return spine_TrackEntry_setAnimationEnd(v7, 0.3);
    }
  }
  return result;
}

#pragma GCC visibility pop
