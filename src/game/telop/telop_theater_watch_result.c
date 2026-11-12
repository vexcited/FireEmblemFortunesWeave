#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1760e40(__int64, unsigned int);
__int64 GameRoutine_17618b0(__int64);
__int64 GameRoutine_1763740(__int64, __int64**, char);
__int64 GameRoutine_1763e20(__int64, _QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN GameData_1afed0f;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
void GameRoutine_1763c20(__int64, __int64**);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_688200(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(_QWORD);
void __attribute__((noreturn)) GameRoutine_740050(_QWORD);
__int64 TelopTheaterWatchResult_Unknown57_alt1(__int64 a1) __asm__(
    "TelopTheaterWatchResult_Unknown57");
__int64* GameRoutine_1760e40_alt1(__int64,
                                  unsigned int) __asm__("GameRoutine_1760e40");
__int64* GameRoutine_17618b0_alt1(__int64) __asm__("GameRoutine_17618b0");
__int64 GameRoutine_1763740_alt1(_QWORD*, __int64**,
                                 char) __asm__("GameRoutine_1763740");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_telop_1763c20(__int64*, __int64**);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameHr_a51e10(__int64, unsigned int, unsigned int, int);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_1763e20_alt1(__int64*, _QWORD*, __int64, __int64,
                              const char*) __asm__("GameRoutine_1763e20");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_688200_alt1() __asm__("GameRoutine_688200");
void __attribute__((noreturn))
GameRoutine_6c1f60_alt1() __asm__("GameRoutine_6c1f60");
void __attribute__((noreturn))
GameRoutine_740050_alt1() __asm__("GameRoutine_740050");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TelopTheaterWatchResult_Unknown57(__int64 a1);

void TelopTheaterWatchResult_Unknown57(__int64 a1)
{
  _QWORD* v1;
  __int64* v2;
  unsigned __int64 v3;
  int v4;
  unsigned __int64 v5;
  int v6;
  __int64 v7;
  bool v8;
  __int64* v9;
  char* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64* v19;
  unsigned __int64 v20;
  _QWORD* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  signed __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64* v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64* v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  struct {
    __int64* v65;
    char* v66;
    char* v67;
  } v65_;
  struct {
    __int64* v68;
    void* v69;
    unsigned __int64 v70;
    unsigned __int64 v71;
    int v72;
    int v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
  } v68_;

  v1 = (_QWORD*)a1;
  v64 = *(_QWORD*)(a1 + 1168);
  v2 = GameRoutine_1760e40_alt1(a1, 0x12u);
  v3 = *(_QWORD*)(v64 + 16) - *(_QWORD*)(v64 + 8);
  v4 = *(_DWORD*)(v64 + 48);
  v68_.v69 = &GameData_1afed0f;
  v5 = v3 >> 3;
  v68_.v68 = (__int64*)game_HashString_alt1((__int64)&GameData_1afed0f);
  v6 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v68_.v68);
    if (v7 != 0) {
      v6 = *(_DWORD*)(v7 + 32);
    }
    else {
      v6 = 0;
    }
  }
  v8 = v4 < v6;
  v9 = msg_MessageManager_instance__ptr[0];
  if (v8) {
    v10 = "MID_Sys_Result_Msg_Reliance_EXP_Up";
  }
  else {
    v10 = "MID_Sys_Result_Msg_Reliance_EXP_Up_Big";
  }
  GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, v5, 0);
  v11 = *v9;
  v68_.v74 = -1;
  v68_.v75 = -1;
  v68_.v76 = -1;
  v68_.v77 = -1;
  v68_.v78 = -1;
  v68_.v79 = -1;
  v68_.v80 = -1;
  v68_.v81 = -1;
  v68_.v82 = -1;
  v68_.v83 = -1;
  v68_.v84 = -1;
  v68_.v85 = -1;
  v68_.v68 = GameData_212e348 + 2;
  v68_.v69 = (void*)0xFFFF0001FFFF0000LL;
  v68_.v70 = 0xFFFF0004FFFF0002LL;
  v68_.v71 = 0xFFFF0006FFFF0005LL;
  v68_.v86 = 8;
  v68_.v72 = -65529;
  v68_.v73 = -65528;
  v12 = GameRoutine_a4dbe0_alt1(v11, v10, 0);
  if (v12 != nullptr) {
    v13 = (__int64)v12;
    v14 = ui_LayoutAccessor_FindTextBox_alt1(v2, (__int64)"T_Txt");
    if (v14 != 0) {
      GameRoutine_156c5d0_alt1(v14, v13, 0);
    }
  }
  if ((int)v5 <= 0) {
    v16 = 0;
    v18 = nullptr;
    v19 = nullptr;
    v68_.v69 = nullptr;
    v68_.v70 = 0;
    v68_.v68 = nullptr;
  LABEL_55:
    game_telop_1763c20(v2, &v68_.v68);
    goto LABEL_56;
  }
  v61 = v2;
  v62 = v1;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = nullptr;
  v19 = nullptr;
  v20 = 0;
  v21 = nullptr;
  v63 = (v3 >> 3) & 0x7FFFFFFF;
  do {
    v22 = *(_QWORD*)(v64 + 8);
    if ((unsigned __int64)v21 >= v20) {
      v23 = (unsigned __int64)v21 - v16;
      v24 = ((__int64)v21 - v16) >> 3;
      v25 = v24 + 1;
      if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
        goto LABEL_74;
      }
      if ((__int64)(v20 - v16) >> 2 > v25) {
        v25 = (__int64)(v20 - v16) >> 2;
      }
      if (v20 - v16 >= 0x7FFFFFFFFFFFFFF8LL) {
        v26 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v26 = v25;
      }
      if (v26 != 0) {
        if (v26 >> 61 != 0) {
          goto LABEL_73;
        }
        v27 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v26, 16, 0);
      }
      else {
        v27 = 0;
      }
      v28 = *(_QWORD*)(v22 + 8 * v15);
      v20 = v27 + 8 * v26;
      v29 = v27 + v23 - 8 * v24;
      *(_QWORD*)(v27 + v23) = v28;
      v21 = (_QWORD*)(v27 + v23 + 8);
      memcpy_alt1(v29, v16, v23);
      if (v16 != 0) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v16);
      }
      v16 = v29;
    }
    else {
      *v21++ = *(_QWORD*)(v22 + 8 * v15);
    }
    v31 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v64 + 8) + 8 * v15) + 392LL);
    if ((unsigned __int64)v18 < v17) {
      *(_QWORD*)v18 = v31;
      v18 += 8;
    }
    else {
      v32 = v18 - (char*)v19;
      v33 = (v18 - (char*)v19) >> 3;
      v34 = v33 + 1;
      if ((unsigned __int64)(v33 + 1) >> 61 != 0) {
        GameRoutine_688200_alt1();
      }
      if ((__int64)(v17 - (_QWORD)v19) >> 2 > v34) {
        v34 = (__int64)(v17 - (_QWORD)v19) >> 2;
      }
      if (v17 - (unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
        v35 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v35 = v34;
      }
      if (v35 != 0) {
        if (v35 >> 61 != 0) {
        LABEL_73:
          GameRoutine_60a210_alt1();
        }
        v36 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v35, 16, 0);
      }
      else {
        v36 = 0;
      }
      v17 = v36 + 8 * v35;
      v37 = v18 - (char*)v19;
      v38 = v36 + v32 - 8 * v33;
      *(_QWORD*)(v36 + v32) = v31;
      v18 = (char*)(v36 + v32 + 8);
      memcpy_alt1(v38, (__int64)v19, v37);
      if (v19 != nullptr) {
        v39 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v39 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, (__int64)v19);
      }
      v19 = (__int64*)v38;
    }
    ++v15;
  } while (v63 != v15);
  v1 = v62;
  v40 = (unsigned __int64)v21 - v16;
  v68_.v69 = nullptr;
  v68_.v70 = 0;
  v68_.v68 = nullptr;
  if (v21 == (_QWORD*)v16) {
    v2 = v61;
    goto LABEL_55;
  }
  if ((v40 & 0x8000000000000000LL) != 0) {
  LABEL_74:
    GameRoutine_740050_alt1();
  }
  v41 = (__int64)v21 - v16;
  v42 = (__int64*)fw_memory_g_heap_manager_ptr;
  v43 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, v41, 16, 0);
  v44 = (char*)v43 + v40;
  v45 = (__int64)v43;
  v68_.v68 = v43;
  v68_.v69 = v43;
  v68_.v70 = (unsigned __int64)v43 + v40;
  memcpy_alt1((__int64)v43, v16, v40);
  v68_.v69 = v44;
  game_telop_1763c20(v61, &v68_.v68);
  v46 = *v42;
  v68_.v69 = (void*)v45;
  v47 = 128;
  if (*(_QWORD*)(v46 + 200) == 0) {
    v47 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(v46 + v47, v45);
LABEL_56:
  v48 = GameRoutine_17618b0_alt1((__int64)v1);
  if ((unsigned __int64)(v18 - (char*)v19) < 9) {
    if (v19 == nullptr) {
      goto LABEL_63;
    }
  }
  else {
    v49 = v48;
    GameRoutine_1763e20_alt1(v48, v1, *v19, v19[1], "L_RelianceAB");
    if (v18 - (char*)v19 == 24) {
      GameRoutine_1763e20_alt1(v49, v1, *v19, v19[2], "L_RelianceAC");
      GameRoutine_1763e20_alt1(v49, v1, v19[1], v19[2], "L_RelianceBC");
    }
  }
  v50 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v50 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v50, (__int64)v19);
LABEL_63:
  if (v16 != 0) {
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v16);
  }
  v52 = v1[146];
  v65_.v65 = nullptr;
  v65_.v66 = nullptr;
  v65_.v67 = nullptr;
  v54 = *(_QWORD*)(v52 + 8);
  v53 = *(_QWORD*)(v52 + 16);
  v55 = v53 - v54;
  if (v53 == v54) {
    GameRoutine_1763740_alt1(v1, &v65_.v65, 0);
  }
  else {
    if ((v55 & 0x8000000000000000LL) != 0) {
      GameRoutine_6c1f60_alt1();
    }
    v56 = fw_memory_g_heap_manager_ptr;
    v57 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v53 - v54, 16, 0);
    v58 = (char*)v57 + v55;
    v59 = (__int64)v57;
    v65_.v65 = v57;
    v65_.v67 = (char*)v57 + v55;
    memcpy_alt1((__int64)v57, v54, v55);
    v65_.v66 = v58;
    GameRoutine_1763740_alt1(v1, &v65_.v65, 0);
    v60 = 128;
    if (*(_QWORD*)(*(_QWORD*)v56 + 200LL) == 0) {
      v60 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v56 + v60, v59);
  }
}

#pragma GCC visibility pop
