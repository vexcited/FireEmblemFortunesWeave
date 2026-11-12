#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopSubquestResult_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopSubquestResult_Destructor(_QWORD* a1);
__int64 TelopSubquestResult_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_1767f90(__int64, __int64, __int64);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
extern __int64 GameData_1a8d218;
extern __int64 GameData_21ca310;
extern __int64 game_GameModeData_instance_;
__int64 game_telop_TelopSubquestResult_CreateBind_lambda1_Invoke(__int64 a1,
                                                                 __int64* a2);
__int64 GameRoutine_1374b10(_QWORD, _QWORD);
__int64 GameRoutine_1378190(_QWORD, _QWORD);
__int64 GameRoutine_16ae340(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Se_80e330(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__n128 game_ProcInst_Register(_QWORD);
extern _UNKNOWN* GameData_2130f68;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*game_telop_TelopResult_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_2130240[8];
extern __int64* GameData_2130f98[4];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131678;
__int64 game_telop_TelopSubquestResult_CreateBind_lambda0_Invoke_alt1(
    __int64 a1,
    __int64*
        a2) __asm__("game_telop_TelopSubquestResult_CreateBind_lambda0_Invoke");
__int64 GameRoutine_16ae340_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_16ae340");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 ProcInst_657850_alt1(__int64, __int64, __int64, char,
                             __int64) __asm__("ProcInst_657850");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void GameRoutine_1374b10_alt1(__int64, int) __asm__("GameRoutine_1374b10");
void GameRoutine_1378190_alt1(__int64,
                              const char*) __asm__("GameRoutine_1378190");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void Se_80e330_alt1(__int64, const char*) __asm__("Se_80e330");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_telop_TelopSubquestResult_CreateBind_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);
__attribute__((swiftcall)) void GameRoutine_13fa520(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void GameRoutine_1587740(PSEUDO_X8, __int64*,
                                                    const char**);
__int64* GameRoutine_1760e40(__int64, unsigned int);
__int64 GameRoutine_19a8d80(__int64, __int64, char, unsigned int*, __int64, int,
                            char, char, __int16);
__int64 TelopResult_1762890(__int64, int);
__int64 TelopResult_17630f0(__int64, unsigned __int8*, const char*);
__int64 TelopResult_1763ac0(__int64, signed int, unsigned int);
__int64 game_17356e0(__int64*, const char*);
__int64 game_telop_1762ef0(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21f8118;
extern __int64 GameData_21f8120;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a9f09e;
extern int GameData_21f8110;
extern int GameData_21f8130;
void GameHr_1762a50(__int64, __int64*);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void InfoTitle_18b7c20(__int64);
void InfoTitle_18b8080(__int64, char);
void InfoTitle_18b8160(__int64, __int64, char);
void __attribute__((noreturn)) GameRoutine_e66f80();
void game_telop_TelopSubquestResult_CreateBind(__int64 a1);
void TelopSubquestResult_Unknown57(__int64 a1);

void game_telop_TelopSubquestResult_CreateBind(__int64 a1)
{
  __int64* v2;
  const char* v3;
  __int64* v4;
  __int64* v5;
  const char* v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  const char* v21[2];
  struct {
    __int64* v22;
    __int64 v23;
    unsigned __int64 v24;
    unsigned __int64 v25;
    int v26;
    int v27;
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
    __int64 v39;
    __int64 v40;
  } v22_;

  v2 = GameRoutine_1760e40(a1, 0xFu);
  v3 = *(const char**)(*(_QWORD*)(a1 + 1168) + 32LL);
  v22_.v28 = -1;
  v22_.v29 = -1;
  v22_.v30 = -1;
  v22_.v31 = -1;
  v4 = msg_MessageManager_instance__ptr[0];
  v22_.v32 = -1;
  v22_.v33 = -1;
  v5 = GameData_212e348;
  v22_.v34 = -1;
  v22_.v35 = -1;
  v22_.v36 = -1;
  v22_.v37 = -1;
  v22_.v38 = -1;
  v22_.v39 = -1;
  if (v3 != nullptr) {
    v6 = v3;
  }
  else {
    v6 = &GameData_1a9f09e;
  }
  v7 = *msg_MessageManager_instance__ptr[0];
  v22_.v22 = GameData_212e348 + 2;
  v22_.v23 = 0xFFFF0001FFFF0000LL;
  v22_.v24 = 0xFFFF0004FFFF0002LL;
  v22_.v25 = 0xFFFF0006FFFF0005LL;
  v22_.v40 = 8;
  v22_.v26 = -65529;
  v22_.v27 = -65528;
  v8 = GameRoutine_a4dbe0(v7, v6, 0);
  if (v8 != nullptr) {
    v9 = (__int64)v8;
    v10 = ui_LayoutAccessor_FindTextBox(v2, "T_Job");
    if (v10 != 0) {
      GameRoutine_156c5d0(v10, v9, 0);
    }
  }
  v21[0] = "L_JobIconF";
  v21[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 2);
  GameRoutine_1587740((void*)(&v22_.v22), v2, v21);
  if (v22_.v23 != 0) {
    v11 = std___1___shared_weak_count_lock(v22_.v23);
    v12 = v22_.v22;
    if (v22_.v23 != 0) {
      std___1___shared_weak_count___release_weak(v22_.v23);
    }
    if (v11 != 0 && v12 != nullptr) {
      if ((*(_BYTE*)(*(_QWORD*)(a1 + 1168) + 50LL) & 0xFD) != 0) {
        (*(void (**)(__int64*, _QWORD))(*v12 + 40))(v12, 0);
      }
      else {
        *((_BYTE*)v12 + 1105) = 0;
        v13 = *(_QWORD*)(a1 + 1168);
        if (v13 != 0) {
          LODWORD(v22_.v22) = *(_DWORD*)((char*)((_UNKNOWN*)0x90LL) +
                                         (_QWORD)GameData_212da30 + 4);
          GameRoutine_19a8d80((__int64)v12, v13, 2, (unsigned int*)&v22_.v22, 0,
                              -1, 0, 0, 0);
        }
      }
    }
    else if (v11 == 0) {
      goto LABEL_20;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
  }
LABEL_20:
  v21[0] = "L_JobIconM";
  v21[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 2);
  GameRoutine_1587740((void*)(&v22_.v22), v2, v21);
  if (v22_.v23 == 0) {
    goto LABEL_33;
  }
  v14 = std___1___shared_weak_count_lock(v22_.v23);
  v15 = v22_.v22;
  if (v22_.v23 != 0) {
    std___1___shared_weak_count___release_weak(v22_.v23);
  }
  if (v14 != 0 && v15 != nullptr) {
    if (*(unsigned __int8*)(*(_QWORD*)(a1 + 1168) + 50LL) > 1u) {
      (*(void (**)(__int64*, _QWORD))(*v15 + 40))(v15, 0);
    }
    else {
      *((_BYTE*)v15 + 1105) = 0;
      v16 = *(_QWORD*)(a1 + 1168);
      if (v16 != 0) {
        LODWORD(v22_.v22) = *(_DWORD*)((char*)((_UNKNOWN*)0x90LL) +
                                       (_QWORD)GameData_212da30 + 4);
        GameRoutine_19a8d80((__int64)v15, v16, 1, (unsigned int*)&v22_.v22, 0,
                            -1, 0, 0, 0);
      }
    }
  }
  else if (v14 == 0) {
    goto LABEL_33;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
LABEL_33:
  v21[0] = "L_InfoTitle";
  v21[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 3);
  GameRoutine_13fa520((void*)(&v22_.v22), v2, v21);
  if (v22_.v23 == 0) {
    return;
  }
  v17 = std___1___shared_weak_count_lock(v22_.v23);
  v18 = (__int64)v22_.v22;
  if (v22_.v23 != 0) {
    std___1___shared_weak_count___release_weak(v22_.v23);
  }
  if (v17 != 0 && v18 != 0) {
    InfoTitle_18b7c20(v18);
    InfoTitle_18b8080(v18, 0);
    v19 = *(char**)(*(_QWORD*)(a1 + 1168) + 40LL);
    if (v19 != nullptr) {
      v20 = *v4;
      v22_.v28 = -1;
      v22_.v29 = -1;
      v22_.v30 = -1;
      v22_.v31 = -1;
      v22_.v32 = -1;
      v22_.v33 = -1;
      v22_.v34 = -1;
      v22_.v35 = -1;
      v22_.v36 = -1;
      v22_.v37 = -1;
      v22_.v38 = -1;
      v22_.v39 = -1;
      v22_.v22 = v5 + 2;
      v22_.v23 = 0xFFFF0001FFFF0000LL;
      v22_.v24 = 0xFFFF0004FFFF0002LL;
      v22_.v25 = 0xFFFF0006FFFF0005LL;
      v22_.v40 = 8;
      v22_.v26 = -65529;
      v22_.v27 = -65528;
      v19 = GameRoutine_a4dbe0(v20, v19, 0);
    }
    InfoTitle_18b8160(v18, (__int64)v19, 0);
  }
  else if (v17 == 0) {
    return;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
}

void TelopSubquestResult_Unknown57(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  char v15;
  __int64 v16;
  _QWORD** v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  _QWORD* v29;
  __int64 v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  __int64 v35;
  const char* v36;
  __int64 v37;
  char* v38;
  __int64* v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  int v45;
  int v46;
  char v47;
  unsigned int v48;
  int v49;
  int* v50;
  int v51;
  bool v52;
  unsigned __int64 v53;
  signed int v54;
  __int64 v55;
  int* v56;
  unsigned __int64 v57;
  int v58;
  int v59;
  signed int v60;
  int* v61;
  __int64 v62;
  int* v63;
  signed int v64;
  unsigned __int64 v65;
  signed int v66;
  struct {
    __int64 v67;
    __int64 v68;
    __int64 v69;
  } v67_;
  struct {
    __int64* v70;
    unsigned __int64 v71;
  } v70_;
  _QWORD** v72;
  struct {
    _QWORD* v73;
    unsigned __int64 v74;
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
    __int64 v87;
  } v73_;
  float v88;
  _DWORD v89[4];

  v1 = *(_QWORD*)(a1 + 1184);
  v2 = *(_QWORD*)(a1 + 1176);
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = v1 - v2;
  if (v1 != v2) {
    if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v5 >> 4)) >=
        0x24924924924924ALL) {
      GameRoutine_e66f80();
    }
    v6 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v1 - v2, 16, 0);
    v7 = 0;
    v67_.v67 = v6;
    v67_.v69 = v6 + v5;
    do {
      v11 = v2 + v7;
      v12 = v6 + v7;
      *(_DWORD*)v12 = *(_DWORD*)(v2 + v7);
      *(_QWORD*)(v12 + 4) = *(_QWORD*)(v2 + v7 + 4);
      if (*(_BYTE*)(v2 + v7 + 12) != 0) {
        v8 = *(_QWORD*)(v11 + 12);
      }
      else {
        v8 = 0;
      }
      *(_QWORD*)(v12 + 48) = 0;
      v9 = v12 + 48;
      *(_QWORD*)(v12 + 12) = v8;
      *(_WORD*)(v12 + 26) = 0;
      *(_DWORD*)(v12 + 28) = 0;
      *(_QWORD*)(v12 + 40) = v12 + 48;
      *(_QWORD*)(v12 + 56) = 0;
      *(_QWORD*)(v12 + 64) = 0;
      *(_QWORD*)(v12 + 72) = 0;
      *(_QWORD*)(v12 + 80) = 0;
      GameRoutine_930b90_alt1(v12 + 24, v11 + 24);
      v10 = *(_QWORD*)(v11 + 88);
      v7 += 112;
      *(_DWORD*)(v9 + 48) = *(_DWORD*)(v11 + 96);
      *(_QWORD*)(v9 + 40) = v10;
      *(_WORD*)(v9 + 56) = *(_WORD*)(v11 + 104);
    } while (v2 + v7 != v1);
    v67_.v68 = v6 + v7;
    GameHr_1762a50(a1, &v67_.v67);
    do {
      v14 = v6 + v7;
      v15 = *(_BYTE*)(v6 + v7 - 48);
      *(_DWORD*)(v14 - 80) = 0;
      *(_QWORD*)(v14 - 88) = 0;
      if ((v15 & 1) != 0) {
        **(_BYTE**)(v14 - 32) = 0;
        *(_QWORD*)(v14 - 40) = 0;
      }
      else {
        *(_WORD*)(v14 - 48) = 0;
      }
      v16 = v6 + v7;
      v17 = (_QWORD**)(v6 + v7 - 64);
      GameRoutine_6e3b50_alt1(v6 + v7 - 72, *v17);
      v18 = *(_BYTE*)(v14 - 48);
      *(_QWORD*)(v16 - 56) = 0;
      *(_QWORD*)(v16 - 72) = v17;
      *v17 = nullptr;
      if ((v18 & 1) != 0) {
        v13 = *(_QWORD**)(v16 - 32);
        if (v13 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v19 = 128;
          }
          else {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v19, (__int64)v13);
          v13 = *(_QWORD**)(v16 - 64);
        }
      }
      else {
        v13 = nullptr;
      }
      GameRoutine_6e3b50_alt1(v6 + v7 - 72, v13);
      v7 -= 112;
    } while (v7 != 0);
    v20 = *(_QWORD*)v4;
    v67_.v68 = v6;
    v21 = 128;
    if (*(_QWORD*)(v20 + 200) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v20 + v21, v6);
  }
  v22 = **(_QWORD**)(a1 + 1168);
  v23 = *(_QWORD**)(v22 + 24);
  if ((__int64)((v23[15] - v23[14]) << 28) >= 0x100000000LL) {
    v24 = 8;
    v25 = 0;
    do {
      game_telop_1762ef0(a1, *(_QWORD*)(*(_QWORD*)(v22 + 456) + v24));
      ++v25;
      v24 += 16;
      v22 = **(_QWORD**)(a1 + 1168);
      v23 = *(_QWORD**)(v22 + 24);
    } while (v25 < (int)((v23[15] - v23[14]) >> 4));
  }
  if ((__int64)((v23[18] - v23[17]) << 28) >= 0x100000000LL) {
    v26 = 8;
    v27 = 0;
    v28 = game_map_MapRandom_instance__ptr[0];
    do {
      v30 = *(_QWORD*)(*(_QWORD*)(v22 + 472) + v26);
      v70_.v70 = nullptr;
      LODWORD(v70_.v71) = 0;
      v73_.v74 = 0;
      v73_.v75 = 0;
      v73_.v76 = 0;
      v73_.v77 = 0;
      v72 = &v73_.v73;
      v73_.v73 = nullptr;
      if (v30 != 0) {
        LOBYTE(v70_.v70) = *(_BYTE*)(v30 + 16);
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
        v31 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28 + 8);
        v32 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28 + 12);
        v33 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28) ^
              (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28) << 11);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28) =
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28 + 4);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28 + 4) = v31;
        v34 = (v33 >> 8) ^ (v32 >> 19) ^ v33 ^ v32;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28 + 8) = v32;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28 + 12) = v34;
        nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        *(_WORD*)((char*)&v70_.v70 + 1) =
            __PAIR16__(BYTE2(v70_.v70), v34) & 0xFEFF;
      }
      TelopResult_17630f0(a1, (unsigned __int8*)&v70_.v70,
                          "MID_Sys_Result_Msg_GetReward");
      LODWORD(v70_.v71) = 0;
      v70_.v70 = nullptr;
      if ((v73_.v75 & 1) != 0) {
        *(_BYTE*)v73_.v77 = 0;
        v73_.v76 = 0;
      }
      else {
        LOWORD(v73_.v75) = 0;
      }
      GameRoutine_6e3b50_alt1((__int64)&v72, v73_.v73);
      v73_.v73 = nullptr;
      v73_.v74 = 0;
      v72 = &v73_.v73;
      if ((v73_.v75 & 1) != 0) {
        v29 = (_QWORD*)v73_.v77;
        if (v73_.v77 != 0) {
          v35 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v35 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v73_.v77);
          v29 = v73_.v73;
        }
      }
      else {
        v29 = nullptr;
      }
      GameRoutine_6e3b50_alt1((__int64)&v72, v29);
      ++v27;
      v26 += 16;
      v22 = **(_QWORD**)(a1 + 1168);
    } while (v27 < (int)((*(_QWORD*)(*(_QWORD*)(v22 + 24) + 144LL) -
                          *(_QWORD*)(*(_QWORD*)(v22 + 24) + 136LL)) >>
                         4));
  }
  if (*(_WORD*)(v22 + 426) != 0) {
    TelopResult_1762890(a1, *(unsigned __int16*)(v22 + 426));
    v22 = **(_QWORD**)(a1 + 1168);
  }
  if (*(_WORD*)(v22 + 520) != 0) {
    v36 = **(const char***)(v22 + 528);
    if (v36 != nullptr && *v36 != 0) {
      v73_.v75 = -1;
      v73_.v76 = -1;
      v73_.v77 = -1;
      v73_.v78 = -1;
      v37 = *msg_MessageManager_instance__ptr[0];
      v73_.v79 = -1;
      v73_.v80 = -1;
      v73_.v81 = -1;
      v73_.v82 = -1;
      v73_.v83 = -1;
      v73_.v84 = -1;
      v73_.v85 = -1;
      v73_.v86 = -1;
      v70_.v70 = GameData_212e348 + 2;
      v70_.v71 = 0xFFFF0001FFFF0000LL;
      v72 = (_QWORD**)0xFFFF0004FFFF0002LL;
      v73_.v73 = (_QWORD*)0xFFFF0006FFFF0005LL;
      v73_.v87 = 8;
      v73_.v74 = 0xFFFF0008FFFF0007LL;
      v38 = GameRoutine_a4dbe0(v37, v36, 0);
    }
    else {
      v38 = *msg_MessageManager_empty_text__ptr;
    }
    v39 = GameRoutine_1760e40(a1, 0);
    v40 = v39;
    if (v38 != nullptr) {
      v41 = ui_LayoutAccessor_FindTextBox(v39, "L_Txt/T_Txt");
      if (v41 != 0) {
        GameRoutine_156c5d0(v41, (__int64)v38, 0);
      }
    }
    v42 = ui_LayoutAccessor_FindTextBox(v40, "L_Txt/T_Txt");
    if (v42 != 0) {
      v43 = v42;
      v44 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v40, "L_Txt/T_Txt");
      if (v44 != nullptr) {
        GameRoutine_190a0c0((float*)&v70_.v70, (__int64)v89, &v88, v44,
                            v44[27]);
        v45 = v89[0];
        v46 = v89[1];
      }
      else {
        v45 = 0;
        v46 = 0;
      }
      v47 = *(_BYTE*)(v43 + 88);
      *(_DWORD*)(v43 + 80) = v45;
      *(_DWORD*)(v43 + 84) = v46;
      *(_BYTE*)(v43 + 88) = v47 | 0x10;
    }
    game_17356e0(v40, "L_Txt");
    v22 = **(_QWORD**)(a1 + 1168);
  }
  v48 = *(unsigned __int16*)(v22 + 428);
  if (*(_WORD*)(v22 + 428) != 0) {
    if (game_GameModeData_instance_ != 0) {
      v49 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v50 = &GameData_21f8110;
      if (v49 == 2) {
        v53 = (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
      }
      else if (v49 == 3) {
        v51 = *(_DWORD*)(game_GameModeData_instance_ + 64);
        v52 = v51 <= 1;
        if (v51 <= 1) {
          LODWORD(v53) = 1;
        }
        else {
          LODWORD(v53) =
              (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
        }
        if (!v52) {
          v50 = &GameData_21f8130;
        }
      }
      else {
        LODWORD(v53) = 1;
      }
      v56 = v50 + 2;
      v55 = *((_QWORD*)v50 + 1);
      v57 = (unsigned __int64)(*((_QWORD*)v56 + 1) - v55) >> 2;
      if ((int)v53 < (int)v57) {
        LODWORD(v57) = v53;
      }
      v58 = v57 - 1;
      if ((int)v53 <= 0) {
        v59 = 0;
      }
      else {
        v59 = v58;
      }
      v60 = *(_DWORD*)(v55 + 4LL * v59);
      v61 = &GameData_21f8110;
      if (v49 == 3 && *(int*)(game_GameModeData_instance_ + 64) > 1) {
        v61 = &GameData_21f8130;
      }
      v63 = v61 + 2;
      v62 = *((_QWORD*)v61 + 1);
      v64 = *(_DWORD*)(game_GameModeData_instance_ + 76);
      v65 = (unsigned __int64)(*((_QWORD*)v63 + 1) - v62) >> 2;
      if ((int)v65 <= 1) {
        LODWORD(v65) = 1;
      }
      v66 = *(_DWORD*)(v62 + 4LL * (unsigned int)v65 - 4);
      if (v66 >= v64) {
        v66 = *(_DWORD*)(game_GameModeData_instance_ + 76);
      }
      if (v64 >= v60) {
        v54 = v66;
      }
      else {
        v54 = v60;
      }
    }
    else {
      v54 = 0;
    }
    TelopResult_1763ac0(a1, v54, v48);
  }
}

__int64 TelopSubquestResult_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = a1[147];
  *a1 = game_telop_TelopSubquestResult_vtable;
  if (v1 != 0) {
    v3 = a1[148];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_16;
    }
    v5 = v3 - 40;
    do {
      v8 = *(_BYTE*)(v5 - 8);
      *(_DWORD*)(v5 - 40) = 0;
      *(_QWORD*)(v5 - 48) = 0;
      if ((v8 & 1) != 0) {
        **(_BYTE**)(v5 + 8) = 0;
        *(_QWORD*)v5 = 0;
      }
      else {
        *(_WORD*)(v5 - 8) = 0;
      }
      GameRoutine_6e3b50(v5 - 32, *(_QWORD*)(v5 - 24));
      v9 = *(_BYTE*)(v5 - 8);
      *(_QWORD*)(v5 - 24) = 0;
      *(_QWORD*)(v5 - 16) = 0;
      *(_QWORD*)(v5 - 32) = v5 - 24;
      if ((v9 & 1) != 0) {
        v6 = *(_QWORD*)(v5 + 8);
        if (v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v6);
          v6 = *(_QWORD*)(v5 - 24);
        }
      }
      else {
        v6 = 0;
      }
      GameRoutine_6e3b50(v5 - 32, v6);
      v7 = v5 - 72;
      v5 -= 112;
    } while (v7 != v1);
    v11 = a1[147];
    a1[148] = v1;
    v1 = v11;
    if (v11 != 0) {
    LABEL_16:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12, v1);
    }
  }
  return game_telop_TelopResult_Destroy_TelopResult(a1);
}

__int64 TelopSubquestResult_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = a1[147];
  *a1 = game_telop_TelopSubquestResult_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[148];
    if (v1 == v4) {
      goto LABEL_16;
    }
    v5 = v4 - 40;
    do {
      v8 = *(_BYTE*)(v5 - 8);
      *(_DWORD*)(v5 - 40) = 0;
      *(_QWORD*)(v5 - 48) = 0;
      if ((v8 & 1) != 0) {
        **(_BYTE**)(v5 + 8) = 0;
        *(_QWORD*)v5 = 0;
      }
      else {
        *(_WORD*)(v5 - 8) = 0;
      }
      GameRoutine_6e3b50(v5 - 32, *(_QWORD*)(v5 - 24));
      v9 = *(_BYTE*)(v5 - 8);
      *(_QWORD*)(v5 - 24) = 0;
      *(_QWORD*)(v5 - 16) = 0;
      *(_QWORD*)(v5 - 32) = v5 - 24;
      if ((v9 & 1) != 0) {
        v6 = *(_QWORD*)(v5 + 8);
        if (v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v6);
          v6 = *(_QWORD*)(v5 - 24);
        }
      }
      else {
        v6 = 0;
      }
      GameRoutine_6e3b50(v5 - 32, v6);
      v7 = v5 - 72;
      v5 -= 112;
    } while (v7 != v1);
    v11 = a1[147];
    a1[148] = v1;
    v1 = v11;
    if (v11 != 0) {
    LABEL_16:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, v1);
    }
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v13 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, a1);
}

void game_telop_TelopSubquestResult_CreateBind_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  char* v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  __int16 v32;
  int v33;
  __int64 v34;
  unsigned __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  int v41;
  char v42;
  __int64 v43;
  int v44;
  int v45;
  unsigned __int64 v46;
  __int64 v47;
  _QWORD v48[2];
  _QWORD** v49;
  struct {
    _QWORD* v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    _BYTE* v54;
    __int64 v55;
    int v56;
  } v50_;

  v2 = *a2;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1200, 16, 0);
  memset_alt1(v5 + 144, 0, 0x420u);
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
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 240) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 424) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 324) = 0;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v7 = *v4;
  v8 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_WORD*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 808) = v8;
  *(_QWORD*)v5 = game_telop_TelopResult_vtable;
  v9 = fw_memory_HeapManager_Allocate_alt1(v7, 296, 16, 0);
  *(_DWORD*)(v9 + 48) = 0x2000;
  v10 = GameData_2131678;
  *(_WORD*)(v9 + 108) = 256;
  *(_QWORD*)(v9 + 8) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_DWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_DWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_WORD*)(v9 + 80) = 0;
  *(_DWORD*)(v9 + 112) = -1082130432;
  *(_WORD*)(v9 + 116) = 0;
  *(_WORD*)(v9 + 136) = 0;
  *(_BYTE*)(v9 + 160) = 0;
  *(_BYTE*)(v9 + 288) = 0;
  *(_QWORD*)(v9 + 272) = 0;
  *(_QWORD*)(v9 + 280) = 0;
  *(_QWORD*)(v9 + 256) = 0;
  *(_QWORD*)(v9 + 264) = 0;
  *(_QWORD*)(v9 + 240) = 0;
  *(_QWORD*)(v9 + 248) = 0;
  *(_QWORD*)(v9 + 224) = 0;
  *(_QWORD*)(v9 + 232) = 0;
  *(_QWORD*)(v9 + 208) = 0;
  *(_QWORD*)(v9 + 216) = 0;
  *(_QWORD*)(v9 + 192) = 0;
  *(_QWORD*)(v9 + 200) = 0;
  *(_QWORD*)(v9 + 176) = 0;
  *(_QWORD*)(v9 + 184) = 0;
  *(_QWORD*)(v9 + 168) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_DWORD*)(v9 + 127) = 0;
  *(_QWORD*)(v5 + 856) = v9;
  *(_WORD*)(v5 + 960) = 0;
  *(_QWORD*)(v5 + 1016) = 0;
  *(_QWORD*)(v5 + 992) = 0;
  *(_QWORD*)(v5 + 1000) = 0;
  *(_BYTE*)(v5 + 952) = 0;
  *(_QWORD*)(v5 + 944) = 0;
  *(_QWORD*)(v5 + 936) = 0;
  *(_QWORD*)(v5 + 928) = 0;
  *(_QWORD*)(v5 + 920) = 0;
  *(_QWORD*)(v5 + 912) = 0;
  *(_QWORD*)(v5 + 904) = 0;
  *(_QWORD*)(v5 + 896) = 0;
  *(_QWORD*)(v5 + 888) = 0;
  *(_QWORD*)(v5 + 880) = 0;
  *(_QWORD*)(v5 + 872) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 1024) = 1065353216;
  *(_WORD*)(v5 + 1032) = 0;
  *(_WORD*)(v5 + 1040) = 0;
  *(_WORD*)(v5 + 1064) = 0;
  *(_WORD*)(v5 + 1088) = 0;
  *(_QWORD*)v9 = v10 + 16;
  *(_DWORD*)(v9 + 292) = 2;
  *(_QWORD*)(v9 + 24) = 0;
  *(_QWORD*)(v5 + 848) = v9 + 24;
  *(_QWORD*)(v5 + 1007) = 0;
  v11 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v5 + 1160) = 0;
  *(_BYTE*)(v5 + 1152) = 0;
  *(_QWORD*)(v5 + 1144) = 0;
  *(_QWORD*)(v5 + 1136) = 0;
  *(_QWORD*)(v5 + 1128) = 0;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_QWORD*)(v5 + 1112) = 0;
  *(_QWORD*)(v5 + 1192) = 0;
  *(_QWORD*)(v5 + 1184) = 0;
  *(_QWORD*)(v5 + 1176) = 0;
  *(_QWORD*)(v5 + 1168) = 0;
  *(_QWORD*)(v5 + 984) = v11;
  *(_QWORD*)v5 = game_telop_TelopSubquestResult_vtable;
  ProcInst_657850_alt1(v5, (__int64)GameData_2130f68,
                       (__int64)"TelopSubquestResult", 1, v2);
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v12 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v12 = (char*)(v5 + 273);
  }
  strcpy(v12, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 16;
    v13 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 32;
    v13 = (char*)(v5 + 297);
  }
  strcpy(v13, "Common_TlpResult");
  GameRoutine_1374b10_alt1(v5, 2);
  Se_80e330_alt1(v5, "SE_SYS_Telop_Mini_In");
  GameRoutine_1378190_alt1(v5, "SE_SYS_Telop_Mini_Out");
  *(_BYTE*)(v5 + 338) = 1;
  Se_80e330_alt1(v5, "FF_Quest_Clear");
  Se_80e330_alt1(v5, "SE_SYS_Telop_Clear");
  v14 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v5 + 1168) = v14;
  v16 = (__int64*)(*(_QWORD*)(*(_QWORD*)v14 + 24LL) + 88LL);
  v15 = *v16;
  if ((v16[1] - *v16) << 28 >= 0x100000000LL) {
    v17 = v5 + 1168;
    v18 = 0;
    v19 = 0;
    v20 = GameData_212ceb0;
    v21 = GameData_212c8b0[0];
    do {
      v23 = v15 + v18;
      v24 = *(_QWORD*)(v15 + v18);
      v44 = *(_DWORD*)(v23 + 8);
      if (v24 != 0) {
        v25 = *(unsigned __int16*)(v24 + 16);
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v25) +
                      73LL) == 17) {
          nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
          v26 = v21;
          v27 = game_map_MapRandom_instance__ptr[0];
          v28 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v29 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v30 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v27 + 1) = v28;
          v31 = (v30 >> 8) ^ (v29 >> 19) ^ v30 ^ v29;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v27) = v29;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v27 + 4) = v31;
          nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
          v32 = v31 - 1000 * ((v31 & 0x7FFFFFFFu) / 0x3E8);
          v21 = v26;
          v24 = (unsigned __int64)((16 * v32 + 16) & 0x3FF0 | 1u) << 32;
        }
        else {
          v24 = 0x100000000LL;
        }
      }
      else {
        v25 = 0;
      }
      v46 = v24 | v25;
      v33 = *(unsigned __int8*)v20;
      v45 = 8;
      if (v33 != 0) {
        v34 = *v20;
      }
      else {
        v34 = 0;
      }
      v47 = v34;
      WORD1(v48[0]) = 0;
      HIDWORD(v48[0]) = 0;
      v50_.v50 = nullptr;
      v50_.v51 = 0;
      v49 = &v50_.v50;
      v50_.v52 = 0;
      v50_.v53 = 0;
      v50_.v54 = nullptr;
      GameRoutine_930b90_alt1((__int64)v48, (__int64)v21);
      v35 = *(_QWORD*)(v5 + 1184);
      LODWORD(v50_.v55) = 0;
      HIDWORD(v50_.v55) = v44;
      v50_.v56 = -1;
      if (v35 >= *(_QWORD*)(v5 + 1192)) {
        v38 = GameRoutine_16ae340_alt1((__int64*)(v5 + 1176), (__int64)&v45);
      }
      else {
        v36 = v45;
        *(_QWORD*)(v35 + 4) = 0;
        *(_QWORD*)(v35 + 12) = 0;
        *(_DWORD*)v35 = v36;
        *(_QWORD*)(v35 + 4) = v46;
        if ((_BYTE)v47 != 0) {
          v37 = v47;
        }
        else {
          v37 = 0;
        }
        *(_QWORD*)(v35 + 48) = 0;
        v39 = v35 + 48;
        *(_QWORD*)(v39 - 36) = v37;
        *(_WORD*)(v39 - 22) = 0;
        *(_DWORD*)(v39 - 20) = 0;
        *(_QWORD*)(v39 - 8) = v39;
        *(_QWORD*)(v39 + 8) = 0;
        *(_QWORD*)(v39 + 16) = 0;
        *(_QWORD*)(v39 + 24) = 0;
        *(_QWORD*)(v39 + 32) = 0;
        GameRoutine_930b90_alt1(v39 - 24, (__int64)v48);
        v40 = v50_.v55;
        v41 = v50_.v56;
        *(_WORD*)(v39 + 56) = 0;
        v38 = v39 + 64;
        *(_DWORD*)(v39 + 48) = v41;
        *(_QWORD*)(v39 + 40) = v40;
      }
      v42 = v50_.v52;
      *(_QWORD*)(v5 + 1184) = v38;
      v48[0] = 0;
      LODWORD(v48[1]) = 0;
      if ((v42 & 1) != 0) {
        *v50_.v54 = 0;
        v50_.v53 = 0;
      }
      else {
        LOWORD(v50_.v52) = 0;
      }
      GameRoutine_6e3b50_alt1((__int64)&v49, v50_.v50);
      v50_.v50 = nullptr;
      v50_.v51 = 0;
      v49 = &v50_.v50;
      if ((v50_.v52 & 1) != 0) {
        v22 = v50_.v54;
        if (v50_.v54 != nullptr) {
          v43 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v43 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, (__int64)v50_.v54);
          v22 = v50_.v50;
        }
      }
      else {
        v22 = nullptr;
      }
      GameRoutine_6e3b50_alt1((__int64)&v49, v22);
      ++v19;
      v18 += 16;
      v15 = *(_QWORD*)(*(_QWORD*)(**(_QWORD**)v17 + 24LL) + 88LL);
    } while (
        v19 <
        (int)((unsigned __int64)(*(_QWORD*)(*(_QWORD*)(**(_QWORD**)v17 + 24LL) +
                                            96LL) -
                                 v15) >>
              4));
  }
}

__int64 game_telop_TelopSubquestResult_CreateBind_lambda1_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v13;
  __int64 v14;

  v2 = *a2;
  if (*(_BYTE*)(**(_QWORD**)(a1 + 8) + 112LL) == 7 &&
      (GameRoutine_682bc0(&v14, &GameData_1a8d218), v14 != 0) &&
      (v4 = *(_QWORD**)(GameData_21ca310 + 56)) != nullptr) {
    v5 = 250;
    while (1) {
      v6 = v4[55];
      if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 && v4[49] == v14) {
        break;
      }
      v7 = v4[333];
      if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 && v4[327] == v14) {
        v4 += 278;
        return GameRoutine_1767f90(v2, (__int64)v4, *(_QWORD*)(a1 + 16));
      }
      v8 = v4[611];
      if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && v4[605] == v14) {
        v4 += 556;
        return GameRoutine_1767f90(v2, (__int64)v4, *(_QWORD*)(a1 + 16));
      }
      v9 = v4[889];
      if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && v4[883] == v14) {
        v4 += 834;
        return GameRoutine_1767f90(v2, (__int64)v4, *(_QWORD*)(a1 + 16));
      }
      v10 = v4[1167];
      if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 && v4[1161] == v14) {
        v4 += 1112;
        return GameRoutine_1767f90(v2, (__int64)v4, *(_QWORD*)(a1 + 16));
      }
      v4 += 1390;
      v5 -= 5;
      if (v5 == 0) {
        goto LABEL_22;
      }
    }
  }
  else {
  LABEL_22:
    v11 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v11 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v14 = v11;
    v13 = 241;
    v4 = (_QWORD*)game_UnitPool_Find_6ead60(&v14, &v13);
  }
  return GameRoutine_1767f90(v2, (__int64)v4, *(_QWORD*)(a1 + 16));
}

#pragma GCC visibility pop
