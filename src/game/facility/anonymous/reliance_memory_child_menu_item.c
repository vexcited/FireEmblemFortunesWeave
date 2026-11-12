#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1570b30(_QWORD, _QWORD);
__int64 GameRoutine_157d6f0(_QWORD, _QWORD);
__int64 GameRoutine_15e0120(_QWORD);
__int64 GameRoutine_15e0200(_QWORD);
__int64 GameRoutine_15e04f0(_QWORD);
__int64 GameRoutine_19ed040(_QWORD);
__int64 GameRoutine_19ed2b0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (
    *game_facility_anonymous_RelianceMemoryChildMenuItem_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_LayoutAccessor_empty_;
__int64 RelianceMemoryChildMenuItem_Destructor_alt1(__int64 a1) __asm__(
    "RelianceMemoryChildMenuItem_Destructor");
__int64 RelianceMemoryChildMenuItem_Unknown20(__int64 a1);
__int64 RelianceMemoryChildMenuItem_Unknown21(__int64 a1);
__int64 RelianceMemoryChildMenuItem_Unknown55(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 RelianceMemoryChildMenuItem_19ed040_alt1(__int64 a1) __asm__(
    "RelianceMemoryChildMenuItem_19ed040");
__int64 RelianceMemoryChildMenuItem_19ed2b0(__int64 a1, int a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64* RelianceMemoryChildMenuItem_19ed040(__int64 a1);
void GameRoutine_159da00(__int64*, unsigned int, unsigned int);
__int64 RelianceMemoryChildMenuItem_Unknown16(__int64 a1);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void RelianceMemoryChildMenuItem_Destructor(__int64 a1);
__int64* GameRoutine_8ca350(__int64* result, __int64*, __int64*);
__int64 GameHr_1859ec0(__int64 result, __int64);
__int64 GameRoutine_1789830(__int64, __int64);
__int64 GameRoutine_9e61e0(unsigned int, unsigned __int8, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_9e65a0(unsigned __int8, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64 (*GameData_2124f28[])();
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21f8638;
extern __int64 GameData_21f8640;
extern __int64 game_GameModeData_instance_;
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void GameRoutine_156c5d0(__int64, __int64, char);
__int64
game_facility_anonymous_RelianceMemoryChildMenuItem_initRankInfo_(__int64 a1,
                                                                  __int64* a2);
__int64* RelianceMemoryChildMenuItem_Unknown17(__int64 a1);
__int64

game_facility_anonymous_RelianceMemoryChildMenuItem_initRankInfo_(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8 v10;
  _WORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64* v14;
  char v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  unsigned int* v21;
  unsigned __int8 v22;
  __int64 v23;
  unsigned __int8 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int* v34;
  unsigned __int8 v35;
  __int64 v36;
  unsigned __int8 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned int* v47;
  unsigned __int8 v48;
  __int64 v49;
  unsigned __int8 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned int* v61;
  unsigned __int8 v62;
  __int64 v63;
  unsigned __int8 v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;
  _QWORD* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned int* v75;
  unsigned __int8 v76;
  __int64 v77;
  unsigned __int8 v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  _QWORD* v88;
  _QWORD* v89;
  _QWORD* v90;
  struct {
    __int64 v91[4];
    __int64* v92;
  } v91_;
  __int64 v93;

  v2 = *a2;
  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_QWORD*)(*a2 + 88);
  v5 = v3[134];
  if (v5 != v4 &&
      (GameRoutine_1789830(*(_QWORD*)(v5 + 392), *(_QWORD*)(v4 + 392)) & 1) !=
          0) {
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        448, 16, 0);
    v8 = v3[134];
    v9 = v7;
    *(_WORD*)(v7 + 16) = 0;
    *(_DWORD*)(v7 + 40) = 0;
    v10 = *(_BYTE*)(a1 + 16);
    v11 = (_WORD*)v7;
    v12 = (_QWORD*)(v7 + 280);
    v13 = (_QWORD*)(v7 + 392);
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 0;
    *(_WORD*)(v7 + 80) = 257;
    *(_QWORD*)(v7 + 48) = 0;
    *(_QWORD*)(v7 + 56) = 0;
    *(_QWORD*)(v7 + 88) = v4;
    *(_QWORD*)(v7 + 96) = v3 + 138;
    *(_QWORD*)(v7 + 144) = 0;
    *(_QWORD*)(v7 + 152) = 0;
    *(_QWORD*)(v7 + 128) = 0;
    *(_QWORD*)(v7 + 136) = 0;
    *(_QWORD*)(v7 + 112) = 0;
    *(_QWORD*)(v7 + 120) = 0;
    *(_BYTE*)(v7 + 82) = 1;
    *(_QWORD*)v7 = game_facility_anonymous_RelianceMemoryChildMenuItem_vtable;
    *(_QWORD*)(v7 + 8) = 0;
    *(_QWORD*)(v7 + 104) = 0;
    v14 = (__int64*)(v7 + 104);
    v15 = *(_BYTE*)(v2 + 96);
    v16 = v11 + 168;
    *(_WORD*)((char*)v11 + 161) = v10;
    v11[84] = 0;
    v17 = v11 + 84;
    *(_QWORD*)(v9 + 176) = 0;
    *(_QWORD*)(v9 + 184) = 0;
    *(_QWORD*)(v9 + 192) = 0;
    *(_QWORD*)(v9 + 200) = 0;
    *(_QWORD*)(v9 + 208) = 0;
    *(_DWORD*)(v9 + 216) = 0;
    v11[112] = 0;
    v18 = v11 + 112;
    *(_QWORD*)(v9 + 232) = 0;
    *(_QWORD*)(v9 + 240) = 0;
    *(_QWORD*)(v9 + 248) = 0;
    *(_QWORD*)(v9 + 256) = 0;
    *(_QWORD*)(v9 + 264) = 0;
    *(_DWORD*)(v9 + 272) = 0;
    *(_WORD*)(v9 + 280) = 0;
    *(_QWORD*)(v9 + 288) = 0;
    *(_QWORD*)(v9 + 296) = 0;
    *(_QWORD*)(v9 + 304) = 0;
    *(_QWORD*)(v9 + 312) = 0;
    *(_QWORD*)(v9 + 320) = 0;
    *(_DWORD*)(v9 + 328) = 0;
    *(_WORD*)(v9 + 336) = 0;
    *(_QWORD*)(v9 + 344) = 0;
    *(_QWORD*)(v9 + 352) = 0;
    *(_QWORD*)(v9 + 360) = 0;
    *(_QWORD*)(v9 + 368) = 0;
    *(_QWORD*)(v9 + 376) = 0;
    *(_DWORD*)(v9 + 384) = 0;
    *(_WORD*)(v9 + 392) = 0;
    *(_QWORD*)(v9 + 400) = 0;
    *(_QWORD*)(v9 + 408) = 0;
    *(_QWORD*)(v9 + 416) = 0;
    *(_QWORD*)(v9 + 424) = 0;
    *(_QWORD*)(v9 + 432) = 0;
    *(_DWORD*)(v9 + 440) = 0;
    *(_BYTE*)(v9 + 160) = v15;
    v91_.v91[0] = *(_QWORD*)(v4 + 392);
    if (v8 != 0) {
      v8 = *(_QWORD*)(v8 + 392);
    }
    v93 = v8;
    GameRoutine_8ca350(v14, v91_.v91, &v93);
    v19 = *(_QWORD*)(v9 + 192);
    v17[1] = 0;
    v17[2] = 0;
    *v17 = 0;
    *(_DWORD*)(v9 + 216) = 0;
    *v18 = 0;
    v18[1] = 0;
    v18[2] = 0;
    *(_DWORD*)(v9 + 272) = 0;
    *v12 = 0;
    v12[1] = 0;
    v12[2] = 0;
    *(_DWORD*)(v9 + 328) = 0;
    v16[1] = 0;
    v16[2] = 0;
    *v16 = 0;
    *(_DWORD*)(v9 + 384) = 0;
    *v13 = 0;
    v13[1] = 0;
    v13[2] = 0;
    *(_DWORD*)(v9 + 440) = 0;
    *(_QWORD*)(v9 + 200) = v19;
    *(_QWORD*)(v9 + 256) = *(_QWORD*)(v9 + 248);
    *(_QWORD*)(v9 + 312) = *(_QWORD*)(v9 + 304);
    *(_QWORD*)(v9 + 368) = *(_QWORD*)(v9 + 360);
    *(_QWORD*)(v9 + 424) = *(_QWORD*)(v9 + 416);
    if (*(_QWORD*)(v9 + 104) == 0 || *(_QWORD*)(v9 + 112) == 0) {
      goto LABEL_119;
    }
    v20 = *(_QWORD*)(v9 + 120);
    if (v20 != 0) {
      *(_BYTE*)v17 = 1;
      v21 = *(unsigned int**)(v20 + 24);
      if (game_GameModeData_instance_ != 0) {
        v22 = *(_BYTE*)(game_GameModeData_instance_ + 15);
        v23 = *(unsigned int*)(game_GameModeData_instance_ + 60);
      }
      else {
        v22 = 0;
        v23 = 0;
      }
      v24 = GameRoutine_9e61e0(*v21, v22, v23);
      if ((game_9e65a0(v24, (unsigned __int64*)v21) & 1) != 0) {
        v90 = v13;
        *(_BYTE*)(v9 + 169) = 1;
        v25 = GameData_21f8638;
        v26 = GameData_21f8640;
        if (GameData_21f8638 == GameData_21f8640) {
          v28 = 0;
        }
        else {
          v88 = v16;
          v27 = *(_QWORD**)(v20 + 24);
          while (1) {
            v28 = *(_QWORD*)v25;
            v29 = *(_QWORD*)(*(_QWORD*)v25 + 8LL);
            if (v29 != 0 &&
                (v30 = *(_QWORD*)(*(_QWORD*)(v29 + 24) + 8LL)) != 0) {
              v31 = *(_QWORD*)(v30 + 32);
            }
            else {
              v31 = 0;
            }
            if (*v27 == game_HashString(v31)) {
              break;
            }
            v25 += 8;
            if (v25 == v26) {
              v28 = 0;
              break;
            }
          }
          v16 = v88;
        }
        *(_QWORD*)(v9 + 176) = v28;
        *(_QWORD*)(v9 + 184) = v20;
        v93 = v28;
        v91_.v91[0] = (__int64)GameData_2124f28;
        v91_.v91[1] = (__int64)v17;
        v91_.v92 = v91_.v91;
        GameHr_1859ec0((__int64)&v93, (__int64)v91_.v91);
        v13 = v90;
        if (v91_.v92 == v91_.v91) {
          v32 = 32;
        }
        else {
          if (v91_.v92 == nullptr) {
            goto LABEL_28;
          }
          v32 = 40;
        }
        (*(void (**)(__int64))(*v91_.v92 + v32))((__int64)v91_.v92);
      }
    }
  LABEL_28:
    if (*(_QWORD*)(v9 + 104) != 0 && *(_QWORD*)(v9 + 112) != 0) {
      v33 = *(_QWORD*)(v9 + 128);
      if (v33 != 0) {
        *(_BYTE*)v18 = 1;
        v34 = *(unsigned int**)(v33 + 24);
        if (game_GameModeData_instance_ != 0) {
          v35 = *(_BYTE*)(game_GameModeData_instance_ + 15);
          v36 = *(unsigned int*)(game_GameModeData_instance_ + 60);
        }
        else {
          v35 = 0;
          v36 = 0;
        }
        v37 = GameRoutine_9e61e0(*v34, v35, v36);
        if ((game_9e65a0(v37, (unsigned __int64*)v34) & 1) != 0) {
          *(_BYTE*)(v9 + 225) = 1;
          v38 = GameData_21f8638;
          v39 = GameData_21f8640;
          if (GameData_21f8638 == GameData_21f8640) {
            v41 = 0;
          }
          else {
            v89 = v16;
            v40 = *(_QWORD**)(v33 + 24);
            while (1) {
              v41 = *(_QWORD*)v38;
              v42 = *(_QWORD*)(*(_QWORD*)v38 + 8LL);
              if (v42 != 0 &&
                  (v43 = *(_QWORD*)(*(_QWORD*)(v42 + 24) + 8LL)) != 0) {
                v44 = *(_QWORD*)(v43 + 32);
              }
              else {
                v44 = 0;
              }
              if (*v40 == game_HashString(v44)) {
                break;
              }
              v38 += 8;
              if (v38 == v39) {
                v41 = 0;
                break;
              }
            }
            v16 = v89;
          }
          *(_QWORD*)(v9 + 232) = v41;
          *(_QWORD*)(v9 + 240) = v33;
          v93 = v41;
          v91_.v91[0] = (__int64)GameData_2124f28;
          v91_.v91[1] = (__int64)v18;
          v91_.v92 = v91_.v91;
          GameHr_1859ec0((__int64)&v93, (__int64)v91_.v91);
          if (v91_.v92 == v91_.v91) {
            v45 = 32;
          }
          else {
            if (v91_.v92 == nullptr) {
              goto LABEL_51;
            }
            v45 = 40;
          }
          (*(void (**)(__int64))(*v91_.v92 + v45))((__int64)v91_.v92);
        }
      }
    }
  LABEL_51:
    if (*(_QWORD*)(v9 + 104) != 0 && *(_QWORD*)(v9 + 112) != 0) {
      v46 = *(_QWORD*)(v9 + 136);
      if (v46 != 0) {
        *(_BYTE*)v12 = 1;
        v47 = *(unsigned int**)(v46 + 24);
        if (game_GameModeData_instance_ != 0) {
          v48 = *(_BYTE*)(game_GameModeData_instance_ + 15);
          v49 = *(unsigned int*)(game_GameModeData_instance_ + 60);
        }
        else {
          v48 = 0;
          v49 = 0;
        }
        v50 = GameRoutine_9e61e0(*v47, v48, v49);
        if ((game_9e65a0(v50, (unsigned __int64*)v47) & 1) != 0) {
          *(_BYTE*)(v9 + 281) = 1;
          v51 = GameData_21f8638;
          v52 = GameData_21f8640;
          if (GameData_21f8638 == GameData_21f8640) {
            v55 = 0;
          }
          else {
            v53 = v16;
            v54 = *(_QWORD**)(v46 + 24);
            while (1) {
              v55 = *(_QWORD*)v51;
              v56 = *(_QWORD*)(*(_QWORD*)v51 + 8LL);
              if (v56 != 0 &&
                  (v57 = *(_QWORD*)(*(_QWORD*)(v56 + 24) + 8LL)) != 0) {
                v58 = *(_QWORD*)(v57 + 32);
              }
              else {
                v58 = 0;
              }
              if (*v54 == game_HashString(v58)) {
                break;
              }
              v51 += 8;
              if (v51 == v52) {
                v55 = 0;
                break;
              }
            }
            v16 = v53;
          }
          *(_QWORD*)(v9 + 288) = v55;
          *(_QWORD*)(v9 + 296) = v46;
          v93 = v55;
          v91_.v91[0] = (__int64)GameData_2124f28;
          v91_.v91[1] = (__int64)v12;
          v91_.v92 = v91_.v91;
          GameHr_1859ec0((__int64)&v93, (__int64)v91_.v91);
          if (v91_.v92 == v91_.v91) {
            v59 = 32;
          }
          else {
            if (v91_.v92 == nullptr) {
              goto LABEL_74;
            }
            v59 = 40;
          }
          (*(void (**)(__int64))(*v91_.v92 + v59))((__int64)v91_.v92);
        }
      }
    }
  LABEL_74:
    if (*(_QWORD*)(v9 + 104) != 0 && *(_QWORD*)(v9 + 112) != 0) {
      v60 = *(_QWORD*)(v9 + 144);
      if (v60 != 0) {
        *(_BYTE*)v16 = 1;
        v61 = *(unsigned int**)(v60 + 24);
        if (game_GameModeData_instance_ != 0) {
          v62 = *(_BYTE*)(game_GameModeData_instance_ + 15);
          v63 = *(unsigned int*)(game_GameModeData_instance_ + 60);
        }
        else {
          v62 = 0;
          v63 = 0;
        }
        v64 = GameRoutine_9e61e0(*v61, v62, v63);
        if ((game_9e65a0(v64, (unsigned __int64*)v61) & 1) != 0) {
          *(_BYTE*)(v9 + 337) = 1;
          v65 = GameData_21f8638;
          v66 = GameData_21f8640;
          if (GameData_21f8638 == GameData_21f8640) {
            v69 = 0;
          }
          else {
            v67 = v16;
            v68 = *(_QWORD**)(v60 + 24);
            while (1) {
              v69 = *(_QWORD*)v65;
              v70 = *(_QWORD*)(*(_QWORD*)v65 + 8LL);
              if (v70 != 0 &&
                  (v71 = *(_QWORD*)(*(_QWORD*)(v70 + 24) + 8LL)) != 0) {
                v72 = *(_QWORD*)(v71 + 32);
              }
              else {
                v72 = 0;
              }
              if (*v68 == game_HashString(v72)) {
                break;
              }
              v65 += 8;
              if (v65 == v66) {
                v69 = 0;
                break;
              }
            }
            v16 = v67;
          }
          *(_QWORD*)(v9 + 344) = v69;
          *(_QWORD*)(v9 + 352) = v60;
          v93 = v69;
          v91_.v91[0] = (__int64)GameData_2124f28;
          v91_.v91[1] = (__int64)v16;
          v91_.v92 = v91_.v91;
          GameHr_1859ec0((__int64)&v93, (__int64)v91_.v91);
          if (v91_.v92 == v91_.v91) {
            v73 = 32;
          }
          else {
            if (v91_.v92 == nullptr) {
              goto LABEL_97;
            }
            v73 = 40;
          }
          (*(void (**)(__int64))(*v91_.v92 + v73))((__int64)v91_.v92);
        }
      }
    }
  LABEL_97:
    if (*(_QWORD*)(v9 + 104) == 0) {
      goto LABEL_119;
    }
    if (*(_QWORD*)(v9 + 112) == 0) {
      goto LABEL_119;
    }
    v74 = *(_QWORD*)(v9 + 152);
    if (v74 == 0 || (*(_BYTE*)(v9 + 161) & 1) == 0) {
      goto LABEL_119;
    }
    *(_BYTE*)v13 = 1;
    v75 = *(unsigned int**)(v74 + 24);
    if (game_GameModeData_instance_ != 0) {
      v76 = *(_BYTE*)(game_GameModeData_instance_ + 15);
      v77 = *(unsigned int*)(game_GameModeData_instance_ + 60);
    }
    else {
      v76 = 0;
      v77 = 0;
    }
    v78 = GameRoutine_9e61e0(*v75, v76, v77);
    if ((game_9e65a0(v78, (unsigned __int64*)v75) & 1) == 0) {
      goto LABEL_119;
    }
    *(_BYTE*)(v9 + 393) = 1;
    v79 = GameData_21f8638;
    v80 = GameData_21f8640;
    if (GameData_21f8638 == GameData_21f8640) {
    LABEL_113:
      v82 = 0;
    }
    else {
      v81 = *(_QWORD**)(v74 + 24);
      while (1) {
        v82 = *(_QWORD*)v79;
        v83 = *(_QWORD*)(*(_QWORD*)v79 + 8LL);
        if (v83 != 0 && (v84 = *(_QWORD*)(*(_QWORD*)(v83 + 24) + 8LL)) != 0) {
          v85 = *(_QWORD*)(v84 + 32);
        }
        else {
          v85 = 0;
        }
        if (*v81 == game_HashString(v85)) {
          break;
        }
        v79 += 8;
        if (v79 == v80) {
          goto LABEL_113;
        }
      }
    }
    *(_QWORD*)(v9 + 400) = v82;
    *(_QWORD*)(v9 + 408) = v74;
    v93 = v82;
    v91_.v91[0] = (__int64)GameData_2124f28;
    v91_.v91[1] = (__int64)v13;
    v91_.v92 = v91_.v91;
    GameHr_1859ec0((__int64)&v93, (__int64)v91_.v91);
    if (v91_.v92 == v91_.v91) {
      v86 = 32;
    }
    else {
      if (v91_.v92 == nullptr) {
      LABEL_119:
        BasicMenuCursor_16e0c00(v3, v9);
        return 0;
      }
      v86 = 40;
    }
    (*(void (**)(__int64))(*v91_.v92 + v86))((__int64)v91_.v92);
    goto LABEL_119;
  }
  return 0;
}

void RelianceMemoryChildMenuItem_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
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
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = *(_QWORD*)(a1 + 416);
  *(_QWORD*)a1 = game_facility_anonymous_RelianceMemoryChildMenuItem_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 424) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v1);
  }
  v6 = *(_QWORD*)(a1 + 360);
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 368) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v7 + v8, v6);
  }
  v9 = *(_QWORD*)(a1 + 304);
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 312) = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v10 + v11, v9);
  }
  v12 = *(_QWORD*)(a1 + 248);
  if (v12 != 0) {
    v13 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 256) = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v13 + v14, v12);
  }
  v15 = *(_QWORD*)(a1 + 192);
  if (v15 != 0) {
    v16 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 200) = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v16 + v17, v15);
  }
  v18 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v18 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v18);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v19 = *(_QWORD*)(a1 + 32);
    if (v19 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v20, v19);
    }
  }
}

__int64 RelianceMemoryChildMenuItem_Unknown16(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  atomic_ullong* v13;
  __int64* v14;
  unsigned int v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  struct {
    __int64* v21;
    __int64 v22;
  } v21_;
  struct {
    __int64* v23;
    __int64 v24;
  } v23_;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v19 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt1(v4);
    v6 = v19;
    if (v19 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  LayoutAccessor_1560070((void*)(&v23_.v23), v6, "L_Base/L_ArrowL");
  v7 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  if (v23_.v24 != 0) {
    v8 = std___1___shared_weak_count_lock_alt1(v23_.v24);
    if (v8 != 0) {
      v9 = v8;
      if (v23_.v23 != nullptr) {
        GameRoutine_159da00(v23_.v23, v7, 0xEu);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak_alt1(v9);
      }
    }
    if (v23_.v24 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v23_.v24);
    }
  }
  v10 = *(_QWORD*)(a1 + 56);
  if (v10 == 0) {
    goto LABEL_18;
  }
  v11 = std___1___shared_weak_count_lock_alt1(v10);
  if (v11 == 0) {
    goto LABEL_18;
  }
  v12 = v11;
  v13 = (atomic_ullong*)(v11 + 8);
  v14 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v14 != nullptr) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v20 = v14;
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  std___1___shared_weak_count___release_weak_alt1(v12);
  v14 = v20;
  if (v20 == nullptr) {
  LABEL_18:
    v14 = &ui_LayoutAccessor_empty_;
  }
LABEL_19:
  LayoutAccessor_1560070((void*)(&v21_.v21), v14, "L_Base/L_ArrowR");
  v15 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  result = v21_.v22;
  if (v21_.v22 != 0) {
    v17 = std___1___shared_weak_count_lock_alt1(v21_.v22);
    if (v17 != 0) {
      v18 = v17;
      if (v21_.v21 != nullptr) {
        GameRoutine_159da00(v21_.v21, v15, 0xFu);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak_alt1(v18);
      }
    }
    result = v21_.v22;
    if (v21_.v22 != 0) {
      return std___1___shared_weak_count___release_weak_alt1(v21_.v22);
    }
  }
  return result;
}

__int64* RelianceMemoryChildMenuItem_Unknown17(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  atomic_ullong* v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  atomic_ullong* v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  atomic_ullong* v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  atomic_ullong* v44;
  __int64* v45;
  __int64* v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  struct {
    __int64* v54;
    __int64 v55;
    unsigned __int64 v56;
    unsigned __int64 v57;
    int v58;
    int v59;
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
    __int64 v71;
    __int64 v72;
  } v54_;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_12;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v9 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v9);
    v4 = *(_QWORD*)(a1 + 56);
    if (v4 == 0) {
      goto LABEL_12;
    }
  }
  else {
    v4 = *(_QWORD*)(a1 + 56);
    if (v4 == 0) {
      goto LABEL_12;
    }
  }
  v5 = std___1___shared_weak_count_lock_alt1(v4);
  if (v5 != 0) {
    v6 = v5;
    v7 = (atomic_ullong*)(v5 + 8);
    v8 = *(__int64**)(a1 + 48);
    if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v8 != nullptr) {
        goto LABEL_13;
      }
    }
    else {
      v10 = v8;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
      v8 = v10;
      if (v10 != nullptr) {
        goto LABEL_13;
      }
    }
  }
LABEL_12:
  v8 = ui_LayoutAccessor_empty__ptr[0];
LABEL_13:
  LayoutAccessor_1560070((void*)(&v54_.v54), v8, "L_RankC");
  if (v54_.v55 == 0) {
    goto LABEL_23;
  }
  v11 = std___1___shared_weak_count_lock_alt1(v54_.v55);
  v12 = v54_.v54;
  if (v54_.v55 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v54_.v55);
  }
  if (v11 != 0 && v12 != nullptr) {
    v54_.v60 = -1;
    v54_.v61 = -1;
    v54_.v62 = -1;
    v54_.v63 = -1;
    v13 = *msg_MessageManager_instance__ptr[0];
    v54_.v64 = -1;
    v54_.v65 = -1;
    v54_.v66 = -1;
    v54_.v67 = -1;
    v54_.v68 = -1;
    v54_.v69 = -1;
    v54_.v70 = -1;
    v54_.v71 = -1;
    v54_.v54 = GameData_212e348 + 2;
    v54_.v55 = 0xFFFF0001FFFF0000LL;
    v54_.v56 = 0xFFFF0004FFFF0002LL;
    v54_.v57 = 0xFFFF0006FFFF0005LL;
    v54_.v72 = 8;
    v54_.v58 = -65529;
    v54_.v59 = -65528;
    v14 = GameRoutine_a4dbe0(v13, "MID_Sys_Reliance_Rank_C", 0);
    if (v14 != nullptr) {
      v15 = (__int64)v14;
      v16 = ui_LayoutAccessor_FindTextBox(v12, (__int64)"T_Rank");
      if (v16 != 0) {
        GameRoutine_156c5d0(v16, v15, 0);
      }
    }
  }
  else if (v11 == 0) {
    goto LABEL_23;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
  LABEL_23:
    v17 = *(_QWORD*)(a1 + 56);
    if (v17 == 0) {
      goto LABEL_31;
    }
    goto LABEL_24;
  }
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  std___1___shared_weak_count___release_weak_alt1(v11);
  v17 = *(_QWORD*)(a1 + 56);
  if (v17 == 0) {
    goto LABEL_31;
  }
LABEL_24:
  v18 = std___1___shared_weak_count_lock_alt1(v17);
  if (v18 != 0) {
    v19 = v18;
    v20 = (atomic_ullong*)(v18 + 8);
    v21 = *(__int64**)(a1 + 48);
    if (atomic_fetch_add(v20, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v21 != nullptr) {
        goto LABEL_32;
      }
    }
    else {
      v22 = v21;
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak_alt1(v19);
      v21 = v22;
      if (v22 != nullptr) {
        goto LABEL_32;
      }
    }
  }
LABEL_31:
  v21 = ui_LayoutAccessor_empty__ptr[0];
LABEL_32:
  LayoutAccessor_1560070((void*)(&v54_.v54), v21, "L_RankB");
  if (v54_.v55 == 0) {
    goto LABEL_42;
  }
  v23 = std___1___shared_weak_count_lock_alt1(v54_.v55);
  v24 = v54_.v54;
  if (v54_.v55 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v54_.v55);
  }
  if (v23 != 0 && v24 != nullptr) {
    v54_.v60 = -1;
    v54_.v61 = -1;
    v54_.v62 = -1;
    v54_.v63 = -1;
    v25 = *msg_MessageManager_instance__ptr[0];
    v54_.v64 = -1;
    v54_.v65 = -1;
    v54_.v66 = -1;
    v54_.v67 = -1;
    v54_.v68 = -1;
    v54_.v69 = -1;
    v54_.v70 = -1;
    v54_.v71 = -1;
    v54_.v54 = GameData_212e348 + 2;
    v54_.v55 = 0xFFFF0001FFFF0000LL;
    v54_.v56 = 0xFFFF0004FFFF0002LL;
    v54_.v57 = 0xFFFF0006FFFF0005LL;
    v54_.v72 = 8;
    v54_.v58 = -65529;
    v54_.v59 = -65528;
    v26 = GameRoutine_a4dbe0(v25, "MID_Sys_Reliance_Rank_B", 0);
    if (v26 != nullptr) {
      v27 = (__int64)v26;
      v28 = ui_LayoutAccessor_FindTextBox(v24, (__int64)"T_Rank");
      if (v28 != 0) {
        GameRoutine_156c5d0(v28, v27, 0);
      }
    }
  }
  else if (v23 == 0) {
    goto LABEL_42;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
  LABEL_42:
    v29 = *(_QWORD*)(a1 + 56);
    if (v29 == 0) {
      goto LABEL_50;
    }
    goto LABEL_43;
  }
  (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
  std___1___shared_weak_count___release_weak_alt1(v23);
  v29 = *(_QWORD*)(a1 + 56);
  if (v29 == 0) {
    goto LABEL_50;
  }
LABEL_43:
  v30 = std___1___shared_weak_count_lock_alt1(v29);
  if (v30 != 0) {
    v31 = v30;
    v32 = (atomic_ullong*)(v30 + 8);
    v33 = *(__int64**)(a1 + 48);
    if (atomic_fetch_add(v32, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v33 != nullptr) {
        goto LABEL_51;
      }
    }
    else {
      v34 = v33;
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak_alt1(v31);
      v33 = v34;
      if (v34 != nullptr) {
        goto LABEL_51;
      }
    }
  }
LABEL_50:
  v33 = ui_LayoutAccessor_empty__ptr[0];
LABEL_51:
  LayoutAccessor_1560070((void*)(&v54_.v54), v33, "L_RankA");
  if (v54_.v55 == 0) {
    goto LABEL_61;
  }
  v35 = std___1___shared_weak_count_lock_alt1(v54_.v55);
  v36 = v54_.v54;
  if (v54_.v55 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v54_.v55);
  }
  if (v35 != 0 && v36 != nullptr) {
    v54_.v60 = -1;
    v54_.v61 = -1;
    v54_.v62 = -1;
    v54_.v63 = -1;
    v37 = *msg_MessageManager_instance__ptr[0];
    v54_.v64 = -1;
    v54_.v65 = -1;
    v54_.v66 = -1;
    v54_.v67 = -1;
    v54_.v68 = -1;
    v54_.v69 = -1;
    v54_.v70 = -1;
    v54_.v71 = -1;
    v54_.v54 = GameData_212e348 + 2;
    v54_.v55 = 0xFFFF0001FFFF0000LL;
    v54_.v56 = 0xFFFF0004FFFF0002LL;
    v54_.v57 = 0xFFFF0006FFFF0005LL;
    v54_.v72 = 8;
    v54_.v58 = -65529;
    v54_.v59 = -65528;
    v38 = GameRoutine_a4dbe0(v37, "MID_Sys_Reliance_Rank_A", 0);
    if (v38 != nullptr) {
      v39 = (__int64)v38;
      v40 = ui_LayoutAccessor_FindTextBox(v36, (__int64)"T_Rank");
      if (v40 != 0) {
        GameRoutine_156c5d0(v40, v39, 0);
      }
    }
  }
  else if (v35 == 0) {
    goto LABEL_61;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
  LABEL_61:
    v41 = *(_QWORD*)(a1 + 56);
    if (v41 == 0) {
      goto LABEL_69;
    }
    goto LABEL_62;
  }
  (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
  std___1___shared_weak_count___release_weak_alt1(v35);
  v41 = *(_QWORD*)(a1 + 56);
  if (v41 == 0) {
    goto LABEL_69;
  }
LABEL_62:
  v42 = std___1___shared_weak_count_lock_alt1(v41);
  if (v42 != 0) {
    v43 = v42;
    v44 = (atomic_ullong*)(v42 + 8);
    v45 = *(__int64**)(a1 + 48);
    if (atomic_fetch_add(v44, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v45 != nullptr) {
        goto LABEL_70;
      }
    }
    else {
      v46 = v45;
      (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
      std___1___shared_weak_count___release_weak_alt1(v43);
      v45 = v46;
      if (v46 != nullptr) {
        goto LABEL_70;
      }
    }
  }
LABEL_69:
  v45 = ui_LayoutAccessor_empty__ptr[0];
LABEL_70:
  LayoutAccessor_1560070((void*)(&v54_.v54), v45, "L_RankS");
  if (v54_.v55 != 0) {
    v47 = std___1___shared_weak_count_lock_alt1(v54_.v55);
    v48 = v54_.v54;
    if (v54_.v55 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v54_.v55);
    }
    if (v47 != 0 && v48 != nullptr) {
      v54_.v60 = -1;
      v54_.v61 = -1;
      v54_.v62 = -1;
      v54_.v63 = -1;
      v49 = *msg_MessageManager_instance__ptr[0];
      v54_.v64 = -1;
      v54_.v65 = -1;
      v54_.v66 = -1;
      v54_.v67 = -1;
      v54_.v68 = -1;
      v54_.v69 = -1;
      v54_.v70 = -1;
      v54_.v71 = -1;
      v54_.v54 = GameData_212e348 + 2;
      v54_.v55 = 0xFFFF0001FFFF0000LL;
      v54_.v56 = 0xFFFF0004FFFF0002LL;
      v54_.v57 = 0xFFFF0006FFFF0005LL;
      v54_.v72 = 8;
      v54_.v58 = -65529;
      v54_.v59 = -65528;
      v50 = GameRoutine_a4dbe0(v49, "MID_Sys_Reliance_Rank_S", 0);
      if (v50 != nullptr) {
        v51 = (__int64)v50;
        v52 = ui_LayoutAccessor_FindTextBox(v48, (__int64)"T_Rank");
        if (v52 != 0) {
          GameRoutine_156c5d0(v52, v51, 0);
        }
      }
    }
    else if (v47 == 0) {
      return RelianceMemoryChildMenuItem_19ed040(a1);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
      std___1___shared_weak_count___release_weak_alt1(v47);
    }
  }
  return RelianceMemoryChildMenuItem_19ed040(a1);
}

__int64 RelianceMemoryChildMenuItem_Unknown20(__int64 a1)
{
  __int64 v2;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  GameRoutine_19ed2b0(a1, 1);
  return GameRoutine_19ed040(a1);
}

__int64 RelianceMemoryChildMenuItem_Unknown21(__int64 a1)
{
  __int64 v2;

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  GameRoutine_19ed2b0(a1, 0);
  return GameRoutine_19ed040(a1);
}

__int64 RelianceMemoryChildMenuItem_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  _QWORD v10[5];
  _BYTE v11[20];

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v9 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v9);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  v5 = *(_BYTE*)(a1 + 160);
  GameRoutine_15e0120(v11);
  if ((v5 & 1) == 0) {
    GameRoutine_15e0200(v11);
  }
  v6 = *(_QWORD*)(a1 + 88);
  v10[0] = v6;
  if (v6 != 0) {
    v6 = *(_QWORD*)(v6 + 392);
  }
  v10[1] = v6;
  memset(&v10[2], 0, 13);
  v10[4] = 0;
  BYTE5(v10[3]) = 6;
  v10[2] = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1) & 1;
  *(_DWORD*)((char*)&v10[2] + 1) =
      (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1) & 1;
  WORD1(v10[2]) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 576LL))(a1) & 1;
  BYTE4(v10[2]) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 600LL))(a1) & 1;
  GameRoutine_1570b30(v4, v10);
  v7 = GameRoutine_155fbe0(v4, "L_Level");
  GameRoutine_157d6f0(v7, a1 + 104);
  GameRoutine_19ed2b0(a1, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL) == a1);
  GameRoutine_19ed040(a1);
  return GameRoutine_15e04f0(v11);
}

__int64* RelianceMemoryChildMenuItem_19ed040(__int64 a1)
{
  _BYTE* v1;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  atomic_ullong* v8;
  __int64* result;
  const char* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  const char* v14;
  int v15;
  const char* v16;
  struct {
    __int64 v17;
    __int64* v18;
  } v17_;

  v1 = (_BYTE*)(a1 + 169);
  v3 = 0;
  v4 = ui_LayoutAccessor_empty__ptr[0];
  do {
    v5 = *(_QWORD*)(a1 + 56);
    if (v5 != 0) {
      v6 = std___1___shared_weak_count_lock_alt1(v5);
      if (v6 != 0) {
        v7 = v6;
        v8 = (atomic_ullong*)(v6 + 8);
        result = *(__int64**)(a1 + 48);
        if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (result != nullptr) {
            goto LABEL_7;
          }
        }
        else {
          v11 = result;
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak_alt1(v7);
          result = v11;
          if (v11 != nullptr) {
          LABEL_7:
            if ((int)v3 <= 2) {
              goto LABEL_8;
            }
            goto LABEL_14;
          }
        }
      }
    }
    result = v4;
    if ((int)v3 <= 2) {
    LABEL_8:
      if ((_DWORD)v3 == 1) {
        v10 = "L_RankC";
      }
      else {
        if ((_DWORD)v3 != 2) {
          goto LABEL_2;
        }
        v10 = "L_RankB";
      }
      goto LABEL_18;
    }
  LABEL_14:
    if ((_DWORD)v3 == 3) {
      v10 = "L_RankA";
    }
    else {
      if ((_DWORD)v3 != 4) {
        goto LABEL_2;
      }
      v10 = "L_RankS";
    }
  LABEL_18:
    LayoutAccessor_1560070((void*)(&v17_.v17), result, v10);
    result = v17_.v18;
    if (v17_.v18 == nullptr) {
      v12 = 0;
    LABEL_32:
      if (v12 == 0) {
        goto LABEL_2;
      }
    LABEL_40:
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        result = (__int64*)std___1___shared_weak_count___release_weak_alt1(v12);
      }
      goto LABEL_2;
    }
    v12 = std___1___shared_weak_count_lock_alt1((__int64)v17_.v18);
    result = v17_.v18;
    if (v12 != 0) {
      v13 = v17_.v17;
    }
    else {
      v13 = 0;
    }
    if (v17_.v18 != nullptr) {
      result = (__int64*)std___1___shared_weak_count___release_weak_alt1(
          (__int64)v17_.v18);
    }
    if (v13 == 0) {
      goto LABEL_32;
    }
    if (*v1 == 1) {
      if (*(_BYTE*)(a1 + 162) == 1 && v3 == **(unsigned __int8**)(a1 + 96)) {
        if (*(_BYTE*)(a1 + 79) != 0) {
          v14 = "Decide";
        }
        else {
          v14 = "Select";
        }
      }
      else {
        v14 = "Default";
      }
      GameHr_1562680(v13, v14, 0x1.0000000000000p+0f);
      v16 = "CanTalk";
    }
    else {
      v15 = (unsigned __int8)*(v1 - 1);
      GameHr_1562680(v13, "Default", 0x1.0000000000000p+0f);
      if (v15 != 0) {
        v16 = "CantTalk";
      }
      else {
        v16 = "None";
      }
    }
    result = (__int64*)GameHr_1562680(v13, v16, 0x1.0000000000000p+0f);
    if (v12 != 0) {
      goto LABEL_40;
    }
  LABEL_2:
    ++v3;
    v1 += 56;
  } while (v3 != 5);
  return result;
}

__int64 RelianceMemoryChildMenuItem_19ed2b0(__int64 a1, int a2)
{
  __int64 v2;
  int v3;
  int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  _BOOL4 v13;
  __int64 result;
  char* v15;
  unsigned int v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;

  v2 = a1 + 169;
  v3 = *(unsigned __int8*)(a1 + 169);
  v6 = *(unsigned __int8*)(a1 + 225);
  v7 = *(unsigned __int8*)(a1 + 281);
  v8 = *(unsigned __int8*)(a1 + 337);
  v9 = *(unsigned __int8*)(a1 + 393);
  v10 = *(_QWORD*)(a1 + 56);
  *(_BYTE*)(v2 - 7) = a2;
  if (v10 == 0) {
    goto LABEL_5;
  }
  v11 = std___1___shared_weak_count_lock(v10);
  if (v11 == 0) {
    goto LABEL_5;
  }
  v12 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v19 = v11;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v19);
    if (v12 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v12 == nullptr) {
  LABEL_5:
    v12 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  v13 = (unsigned int)(v6 + v3 + v7 + v8 + v9) > 1;
  ui_LayoutAccessor_SetPaneVisible(v12, "L_Base/L_ArrowL",
                                   a2 & (unsigned int)v13);
  result = ui_LayoutAccessor_SetPaneVisible(v12, "L_Base/L_ArrowR",
                                            a2 & (unsigned int)v13);
  if (*(_BYTE*)(a1 + 162) != 1) {
    return result;
  }
  v15 = *(char**)(a1 + 96);
  v16 = (unsigned __int8)*v15;
  v17 = 56LL * (unsigned __int8)*v15;
  if ((*(_BYTE*)(v2 + v17) & 1) != 0) {
    return result;
  }
  if (*v15 == 0) {
    if ((*(_BYTE*)(a1 + 225) & 1) != 0) {
      v18 = 1;
    }
    else {
      if ((*(_BYTE*)(a1 + 281) & 1) == 0) {
        if ((*(_BYTE*)(a1 + 337) & 1) == 0) {
          if (*(_BYTE*)(v2 + v17 + 224) != 1) {
            return result;
          }
          goto LABEL_33;
        }
        goto LABEL_28;
      }
      v18 = 2;
    }
    goto LABEL_34;
  }
  v18 = v16 - 1;
  if ((*(_BYTE*)(v2 + 56LL * (int)(v16 - 1)) & 1) != 0) {
    goto LABEL_34;
  }
  if (v16 <= 3) {
    v18 = v16 + 1;
    if ((*(_BYTE*)(v2 + 56LL * (v16 + 1)) & 1) != 0) {
      goto LABEL_34;
    }
    if (v16 == 1) {
      if ((*(_BYTE*)(a1 + 337) & 1) == 0) {
        if ((*(_BYTE*)(v2 + v17 + 168) & 1) == 0) {
          return result;
        }
      LABEL_33:
        v18 = 4;
        goto LABEL_34;
      }
    LABEL_28:
      v18 = 3;
      goto LABEL_34;
    }
  }
  v18 = v16 - 2;
  if ((*(_BYTE*)(v2 + 56LL * (int)(v16 - 2)) & 1) != 0) {
    goto LABEL_34;
  }
  if (v16 >= 3) {
    v18 = v16 - 3;
    if ((*(_BYTE*)(v2 + 56LL * (int)(v16 - 3)) & 1) != 0) {
      goto LABEL_34;
    }
    if (v16 == 3) {
      return result;
    }
    v18 = v16 - 4;
    v20 = 56LL * (int)(v16 - 4);
  }
  else {
    v18 = v16 + 2;
    v20 = 56LL * (v16 + 2);
  }
  if ((*(_BYTE*)(v2 + v20) & 1) != 0) {
  LABEL_34:
    *v15 = v18;
  }
  return result;
}

#pragma GCC visibility pop
