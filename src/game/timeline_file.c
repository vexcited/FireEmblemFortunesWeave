#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_82ce80(_QWORD, _QWORD);
__int64 GameRoutine_88d500(__int64 result, __int64, char);
__int64 GameRoutine_898dc0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_1f9caf8;
extern __int64 (*GameData_1fa7d28[])();
extern __int64 GameData_21c9c18;
extern __int64 GameData_21f1670;
extern __int64 GameData_21f1678;
extern __int64 GameData_21f1680;
extern __int64 GameData_21f1688;
extern __int64 GameData_21f1698;
extern __int64 GameData_21f16a0;
extern __int64 GameData_21f16b0;
extern __int64 GameData_21f16b8;
extern __int64 GameData_21f16e0;
extern __int64 GameData_21f16e8;
extern __int64 GameData_21f16f0;
extern __int64 GameData_21f16f8;
extern __int64 GameData_21f1708;
extern __int64 GameData_21f1710;
extern __int64 GameData_21f1720;
extern __int64 GameData_21f1728;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 TimelineFile_Unknown5();
__int64 TimelineFile_890160(__int64 a1);
__int64 TimelineFile_890280(__int64 a1, __int64 a2);
__int16* TimelineFile_890840(__int16* result);
__int64 TimelineFile_890a20(__int64* a1);
__int64 TimelineFile_890c00(unsigned __int8 a1);
__int64 game_TimelineFile_GetFromBattle_lambda0_Invoke(__int64 result,
                                                       _QWORD* a2);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_2b0();
__int64 GameRoutine_896560(__int64 result, __int64*, __int64, __int64*,
                           __int64);
__int64 GameRoutine_897860(__int64 result, __int64*, __int64, __int64*,
                           __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___hash_memory(_QWORD, _QWORD);
extern __int64 (*GameData_1fa78a8[])();
extern __int64 (*GameData_1fa7928[])();
extern __int64 (*GameData_1fa79a8[])();
extern __int64 (*GameData_1fa7a28[])();
extern __int64 (*GameData_1fa7aa8[])();
extern __int64* game_vstring_kEmpty_ptr[2];
extern __int64 GameData_212c060;
extern __int64 GameData_212ca20[131];
extern __int64 GameData_21d9f90;
extern __int64 GameData_21d9f98;
extern __int64 GameData_21d9fa8;
extern __int64 GameData_21f16c8;
extern __int64 GameData_21f16d0;
extern __int64 GameData_21f1730;
extern __int64 GameData_21f1738;
extern __int64 GameData_21f1740;
extern __int64 GameData_21f174a;
extern char GameData_21f1748;
extern int GameData_21f1690;
extern int GameData_21f1700;
extern int GameData_21f1752;
unsigned __int64 GameRoutine_898560(__int64, __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_892b20();
void __attribute__((noreturn)) String_60a1d0();
unsigned __int64 TimelineFile_Unknown4();
__attribute__((swiftcall)) void TimelineFile_890540(PSEUDO_X8 x8_,
                                                    __int64 result);
__int64 TimelineFile_89a7a0();

unsigned __int64 TimelineFile_Unknown4()
{
  __int64 v0;
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 (***v9)();
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64** v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 (***v26)();
  __int64 v27;
  __int64 v28;
  __int64** v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  bool v40;
  __int64* v41;
  __int64 v42;
  __int64 (***v43)();
  __int64 v44;
  __int64 v45;
  __int64** v46;
  __int64* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 (***v51)();
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64** v55;
  __int64* v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  _QWORD* v70;
  _QWORD* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64* v80;
  __int64* v81;
  __int64 v82;
  __int64** v83;
  __int64* v84;
  __int64* v85;
  __int64** v86;
  __int64 v87;
  __int64* v88;
  unsigned __int64 result;
  __int64** v90;
  __int64* v91;
  __int64* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64* v96;
  __int64** v97;
  __int64* v98;
  __int64* v99;
  __int64 v100;
  __int64 v101;
  unsigned int v102;
  __int64 v103;
  __int64* v105;
  __int64 v106;
  unsigned __int64 v107;
  char* v108;
  __int64 v109;
  __int64 v110;
  __int64* v111;
  unsigned __int64 v112;
  char v113;
  char* v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  __int64** v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  unsigned __int64 v122;
  __int64* v123;
  __int64 v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  __int64* v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  unsigned __int64 v133;
  __int64 v134;
  unsigned __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64* v142;
  struct {
    _QWORD v143[2];
    _QWORD* v144;
    __int64 v145;
    int v146;
  } v143_;
  __int64 v147;
  struct {
    __int64 (**v148)();
    __int64* v149;
    char* v150;
    char gap104_[8];
    __int64 (***v151)();
  } v148_;

  v0 = fw_memory_g_heap_manager_ptr;
  if (GameData_21f1688 != 0) {
    v1 = (_QWORD*)GameData_21f1680;
    if (GameData_21f1680 != 0) {
      do {
        v2 = (_QWORD*)*v1;
        if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v0 + v3, v1);
        v1 = v2;
      } while (v2 != nullptr);
    }
    GameData_21f1680 = 0;
    if (GameData_21f1678 != 0) {
      v4 = GameData_21f1678 & 7;
      if ((unsigned __int64)GameData_21f1678 >= 8) {
        v6 = GameData_21f1678 & 0xFFFFFFFFFFFFFFF8LL;
        v5 = 0;
        do {
          *(_QWORD*)(GameData_21f1670 + 8 * v5) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v5 + 8) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v5 + 16) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v5 + 24) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v5 + 32) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v5 + 40) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v5 + 48) = 0;
          v7 = GameData_21f1670 + 8 * v5;
          v5 += 8;
          *(_QWORD*)(v7 + 56) = 0;
        } while (v6 != v5);
      }
      else {
        v5 = 0;
      }
      if (v4 != 0) {
        v8 = 8 * v5;
        do {
          --v4;
          *(_QWORD*)(GameData_21f1670 + v8) = 0;
          v8 += 8;
        } while (v4 != 0);
      }
    }
    GameData_21f1688 = 0;
  }
  v9 = &v148_.v148;
  v143_.v144 = nullptr;
  v143_.v145 = 0;
  v143_.v143[0] = 0;
  v143_.v143[1] = 0;
  v143_.v146 = 1065353216;
  v148_.v151 = &v148_.v148;
  v148_.v148 = GameData_1fa78a8;
  v148_.v149 = &GameData_21f1670;
  v148_.v150 = (char*)v143_.v143;
  v10 = GameData_212ca20[0];
  v11 = *(_QWORD*)(*(_QWORD*)GameData_212ca20[0] + 64LL);
  v12 = *(_QWORD*)(*(_QWORD*)GameData_212ca20[0] + 72LL);
  if (v11 != v12) {
    do {
      v13 = *(__int64***)(*(_QWORD*)v11 + 40LL);
      v14 = *v13;
      v15 = v13[1];
      if (*v13 != v15) {
        do {
          v16 = *v14++;
          v147 = v16;
          if (v148_.v151 == nullptr) {
            goto LABEL_237;
          }
          ((void (*)(__int64 (***)(void), __int64*))(*v148_.v151)[6])(
              v148_.v151, &v147);
        } while (v14 != v15);
      }
      v11 += 8;
    } while (v11 != v12);
    v9 = v148_.v151;
    if (v148_.v151 != &v148_.v148) {
      if (v148_.v151 != nullptr) {
        v17 = 5;
      LABEL_25:
        ((__int64 (*)(__int64))(*v9)[v17])((__int64)v9);
      }
      v18 = v143_.v144;
      while (v18 != nullptr) {
        v20 = v18;
        v18 = (_QWORD*)*v18;
        if ((v20[2] & 1) != 0 && v20[4] != 0) {
          v21 = v20;
          v22 = v20[4];
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v22);
          v20 = v21;
        }
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v19 = 128;
        }
        else {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v20);
      }
      v24 = v143_.v143[0];
      v143_.v143[0] = 0;
      if (v24 != 0) {
        v25 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
      }
      v26 = &v148_.v148;
      v148_.v151 = &v148_.v148;
      GameData_21f16a0 = GameData_21f1698;
      v148_.v148 = GameData_1fa7928;
      v148_.v149 = &GameData_21f1698;
      v27 = *(_QWORD*)(*(_QWORD*)v10 + 64LL);
      v28 = *(_QWORD*)(*(_QWORD*)v10 + 72LL);
      if (v27 == v28) {
        goto LABEL_50;
      }
      do {
        v29 = *(__int64***)(*(_QWORD*)v27 + 40LL);
        v30 = *v29;
        v31 = v29[1];
        if (*v29 != v31) {
          do {
            v32 = *v30++;
            v143_.v143[0] = v32;
            if (v148_.v151 == nullptr) {
              goto LABEL_237;
            }
            ((void (*)(__int64 (***)(void), _QWORD*))(*v148_.v151)[6])(
                v148_.v151, v143_.v143);
          } while (v30 != v31);
        }
        v27 += 8;
      } while (v27 != v28);
      v26 = v148_.v151;
      if (v148_.v151 == &v148_.v148) {
      LABEL_50:
        v33 = 4;
      }
      else {
        if (v148_.v151 == nullptr) {
          goto LABEL_52;
        }
        v33 = 5;
      }
      ((__int64 (*)(__int64))(*v26)[v33])((__int64)v26);
    LABEL_52:
      v34 = GameData_21f1698;
      v35 = (__int64*)GameData_21f16a0;
      if ((GameData_21f16a0 - GameData_21f1698) >> 3 < 129) {
        v39 = 0;
      LABEL_58:
        GameRoutine_896560(v34, v35, ((__int64)v35 - v34) >> 3, nullptr, v39);
      }
      else {
        v36 = (GameData_21f16a0 - GameData_21f1698) >> 3;
        v37 = GameData_212c060;
        while (1) {
          v38 = (__int64*)GameRoutine_1a09d20(8 * v36, v37);
          if (v38 != nullptr) {
            break;
          }
          v39 = v36 >> 1;
          v40 = v36 > 1;
          v36 >>= 1;
          if (!v40) {
            goto LABEL_58;
          }
        }
        v41 = v38;
        GameRoutine_896560(v34, v35, ((__int64)v35 - v34) >> 3, v38, v36);
        v42 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v42 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v41);
      }
      v43 = &v148_.v148;
      v148_.v151 = &v148_.v148;
      GameData_21f16b8 = GameData_21f16b0;
      GameData_21f16d0 = GameData_21f16c8;
      v148_.v148 = GameData_1fa79a8;
      v148_.v149 = &GameData_21f16b0;
      v44 = *(_QWORD*)(*(_QWORD*)v10 + 64LL);
      v45 = *(_QWORD*)(*(_QWORD*)v10 + 72LL);
      if (v44 == v45) {
        goto LABEL_70;
      }
      do {
        v46 = *(__int64***)(*(_QWORD*)v44 + 40LL);
        v47 = *v46;
        v48 = v46[1];
        if (*v46 != v48) {
          do {
            v49 = *v47++;
            v143_.v143[0] = v49;
            if (v148_.v151 == nullptr) {
              goto LABEL_237;
            }
            ((void (*)(__int64 (***)(void), _QWORD*))(*v148_.v151)[6])(
                v148_.v151, v143_.v143);
          } while (v47 != v48);
        }
        v44 += 8;
      } while (v44 != v45);
      v43 = v148_.v151;
      if (v148_.v151 == &v148_.v148) {
      LABEL_70:
        v50 = 4;
      }
      else {
        if (v148_.v151 == nullptr) {
          goto LABEL_72;
        }
        v50 = 5;
      }
      ((__int64 (*)(__int64))(*v43)[v50])((__int64)v43);
    LABEL_72:
      v51 = &v148_.v148;
      v148_.v148 = GameData_1fa7a28;
      v148_.v149 = &GameData_21f16b0;
      v52 = *(_QWORD*)v10;
      v148_.v151 = &v148_.v148;
      v53 = *(_QWORD*)(v52 + 64);
      v54 = *(_QWORD*)(v52 + 72);
      if (v53 == v54) {
        goto LABEL_80;
      }
      do {
        v55 = *(__int64***)(*(_QWORD*)v53 + 40LL);
        v56 = *v55;
        v57 = v55[1];
        if (*v55 != v57) {
          while (1) {
            v58 = *v56++;
            v143_.v143[0] = v58;
            if (v148_.v151 == nullptr) {
              break;
            }
            ((void (*)(__int64 (***)(void), _QWORD*))(*v148_.v151)[6])(
                v148_.v151, v143_.v143);
            if (v56 == v57) {
              goto LABEL_76;
            }
          }
        LABEL_237:
          GameRoutine_60a310_alt1();
        }
      LABEL_76:
        v53 += 8;
      } while (v53 != v54);
      v51 = v148_.v151;
      if (v148_.v151 != &v148_.v148) {
        if (v148_.v151 != nullptr) {
          v59 = 5;
          goto LABEL_81;
        }
        goto LABEL_82;
      }
    LABEL_80:
      v59 = 4;
    LABEL_81:
      ((__int64 (*)(__int64))(*v51)[v59])((__int64)v51);
    LABEL_82:
      v60 = GameData_21f16b0;
      v61 = (__int64*)GameData_21f16b8;
      if ((GameData_21f16b8 - GameData_21f16b0) >> 3 < 129) {
        v65 = 0;
      LABEL_88:
        GameRoutine_897860(v60, v61, ((__int64)v61 - v60) >> 3, nullptr, v65);
      }
      else {
        v62 = (GameData_21f16b8 - GameData_21f16b0) >> 3;
        v63 = GameData_212c060;
        while (1) {
          v64 = (__int64*)GameRoutine_1a09d20(8 * v62, v63);
          if (v64 != nullptr) {
            break;
          }
          v65 = v62 >> 1;
          v40 = v62 > 1;
          v62 >>= 1;
          if (!v40) {
            goto LABEL_88;
          }
        }
        v66 = v64;
        GameRoutine_897860(v60, v61, ((__int64)v61 - v60) >> 3, v64, v62);
        v67 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v67 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v66);
      }
      if (GameData_21f16f8 != 0) {
        v68 = (_QWORD*)GameData_21f16f0;
        while (v68 != nullptr) {
          v70 = v68;
          v68 = (_QWORD*)*v68;
          if ((v70[2] & 1) != 0 && v70[4] != 0) {
            v71 = v70;
            v72 = v70[4];
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v73 = 128;
            }
            else {
              v73 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v73, v72);
            v70 = v71;
          }
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v69 = 128;
          }
          else {
            v69 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, v70);
        }
        GameData_21f16f0 = 0;
        if (GameData_21f16e8 != 0) {
          v74 = GameData_21f16e8 & 7;
          if ((unsigned __int64)GameData_21f16e8 >= 8) {
            v76 = GameData_21f16e8 & 0xFFFFFFFFFFFFFFF8LL;
            v75 = 0;
            do {
              *(_QWORD*)(GameData_21f16e0 + 8 * v75) = 0;
              *(_QWORD*)(GameData_21f16e0 + 8 * v75 + 8) = 0;
              *(_QWORD*)(GameData_21f16e0 + 8 * v75 + 16) = 0;
              *(_QWORD*)(GameData_21f16e0 + 8 * v75 + 24) = 0;
              *(_QWORD*)(GameData_21f16e0 + 8 * v75 + 32) = 0;
              *(_QWORD*)(GameData_21f16e0 + 8 * v75 + 40) = 0;
              *(_QWORD*)(GameData_21f16e0 + 8 * v75 + 48) = 0;
              v77 = GameData_21f16e0 + 8 * v75;
              v75 += 8;
              *(_QWORD*)(v77 + 56) = 0;
            } while (v76 != v75);
          }
          else {
            v75 = 0;
          }
          if (v74 != 0) {
            v78 = 8 * v75;
            do {
              --v74;
              *(_QWORD*)(GameData_21f16e0 + v78) = 0;
              v78 += 8;
            } while (v74 != 0);
          }
        }
        GameData_21f16f8 = 0;
      }
      v79 = *(__int64**)(*(_QWORD*)v10 + 64LL);
      v80 = *(__int64**)(*(_QWORD*)v10 + 72LL);
      v81 = game_vstring_kEmpty_ptr[0];
      if (v79 != v80) {
        do {
          v82 = *v79;
          v83 = *(__int64***)(*v79 + 40);
          v84 = *v83;
          v85 = v83[1];
          if ((int)((unsigned __int64)((char*)v85 - (char*)*v83) >> 3) >= 1) {
            GameRoutine_898560(*(_QWORD*)(v82 + 8), *v84);
            v86 = *(__int64***)(v82 + 40);
            v84 = *v86;
            v85 = v86[1];
          }
          while (v84 != v85) {
            v87 = *v84;
            if (*(_BYTE*)(*v84 + 33) == 1) {
              if (*(_WORD*)(v87 + 40) != 0) {
                v88 = *(__int64**)(v87 + 48);
              }
              else {
                v88 = v81;
              }
              GameRoutine_898560(*v88, v87);
            }
            ++v84;
          }
          ++v79;
        } while (v79 != v80);
        v79 = *(__int64**)(*(_QWORD*)v10 + 64LL);
        v80 = *(__int64**)(*(_QWORD*)v10 + 72LL);
      }
      result = (unsigned __int64)&v148_.v148;
      v148_.v151 = &v148_.v148;
      GameData_21f1710 = GameData_21f1708;
      v148_.v148 = GameData_1fa7aa8;
      v148_.v149 = &GameData_21f1708;
      if (v79 == v80) {
        goto LABEL_135;
      }
      while (2) {
        v90 = *(__int64***)(*v79 + 40);
        v91 = *v90;
        v92 = v90[1];
        if (*v90 != v92) {
          do {
            v93 = *v91++;
            v143_.v143[0] = v93;
            if (v148_.v151 == nullptr) {
              goto LABEL_237;
            }
            ((void (*)(__int64 (***)(void), _QWORD*))(*v148_.v151)[6])(
                v148_.v151, v143_.v143);
          } while (v91 != v92);
        }
        if (++v79 != v80) {
          continue;
        }
        break;
      }
      result = (unsigned __int64)v148_.v151;
      if (v148_.v151 != &v148_.v148) {
        if (v148_.v151 != nullptr) {
          v94 = 40;
          goto LABEL_136;
        }
        goto LABEL_137;
      }
    LABEL_135:
      v94 = 32;
    LABEL_136:
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)result + v94))((__int64)result);
    LABEL_137:
      GameData_21f1728 = GameData_21f1720;
      v95 = *(_QWORD*)(*(_QWORD*)v10 + 64LL);
      v140 = *(_QWORD*)(*(_QWORD*)v10 + 72LL);
      v96 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v95 == v140) {
        return result;
      }
      while (2) {
        v141 = v95;
        v97 = *(__int64***)(*(_QWORD*)v95 + 40LL);
        v98 = *v97;
        v99 = v97[1];
        v142 = v99;
        if (*v97 == v99) {
          goto LABEL_139;
        }
        while (2) {
          v101 = *v98;
          if (*v98 == 0) {
            goto LABEL_216;
          }
          v102 = *(unsigned __int8*)(v101 + 33) - 2;
          v40 = v102 > 0x3E;
          v103 = (1LL << v102) & 0x6000000000000003LL;
          if (v40 || v103 == 0) {
            goto LABEL_216;
          }
          if (*(_WORD*)(v101 + 40) != 0) {
            v105 = *(__int64**)(v101 + 48);
          }
          else {
            v105 = v81;
          }
          v106 = *v105;
          if (*v105 == 0) {
            v109 = 0;
            goto LABEL_215;
          }
          result = strlen(*v105);
          if (result >= 0xFFFFFFFFFFFFFFF7LL) {
            String_60a1d0();
          }
          v107 = result;
          if (result >= 0x17) {
            if ((result | 7) == 0x17) {
              v110 = 26;
            }
            else {
              v110 = (result | 7) + 1;
            }
            v108 =
                (char*)fw_memory_HeapManager_Allocate_alt1(*v96, v110, 16, 0);
            v148_.v149 = (__int64*)v107;
            v148_.v150 = v108;
            v148_.v148 = (__int64 (**)(void))(v110 | 1);
          }
          else {
            v108 = (char*)&v148_.v148 + 1;
            LOBYTE(v148_.v148) = 2 * result;
            if (result == 0) {
              goto LABEL_164;
            }
          }
          result = memcpy(v108, v106, v107);
        LABEL_164:
          v108[v107] = 0;
          v111 = nullptr;
          v112 = GameData_21f16e8;
          v113 = (char)v148_.v148;
          if (GameData_21f16e8 == 0 || GameData_21f16f8 == 0) {
            goto LABEL_206;
          }
          if (((unsigned __int8)v148_.v148 & 1) != 0) {
            v114 = v148_.v150;
          }
          else {
            v114 = (char*)&v148_.v148 + 1;
          }
          if (((unsigned __int8)v148_.v148 & 1) != 0) {
            v115 = (unsigned __int64)v148_.v149;
          }
          else {
            v115 = (unsigned __int64)(unsigned __int8)v148_.v148 >> 1;
          }
          result = std___1___hash_memory(v114, v115);
          v116 = v112 - 1;
          v117 = result;
          if ((v112 & (v112 - 1)) != 0) {
            v118 = result;
            if (result >= v112) {
              v118 = result % v112;
            }
          }
          else {
            v118 = result & v116;
          }
          v119 = *(__int64***)(GameData_21f16e0 + 8 * v118);
          if (v119 == nullptr) {
          LABEL_204:
            v111 = nullptr;
            goto LABEL_205;
          }
          v111 = *v119;
          if (*v119 == nullptr) {
          LABEL_205:
            v96 = (__int64*)fw_memory_g_heap_manager_ptr;
            v99 = v142;
          LABEL_206:
            if ((v113 & 1) == 0) {
              goto LABEL_211;
            }
            goto LABEL_207;
          }
          if ((v112 & v116) == 0) {
            while (1) {
              v124 = v111[1];
              if (v117 == v124) {
                v125 = *((unsigned __int8*)v111 + 16);
                v126 = v111[3];
                if ((v125 & 1) == 0) {
                  v126 = v125 >> 1;
                }
                if (v126 == v115) {
                  v127 = (v125 & 1) != 0 ? (__int64*)v111[4]
                                         : (__int64*)((char*)v111 + 17);
                  result = memcmp(v127, v114, v115);
                  if ((_DWORD)result == 0) {
                    goto LABEL_205;
                  }
                }
              }
              else if ((v124 & v116) != v118) {
                goto LABEL_204;
              }
              v111 = (__int64*)*v111;
              if (v111 == nullptr) {
                goto LABEL_205;
              }
            }
          }
          v99 = v142;
          while (2) {
            v120 = v111[1];
            if (v117 == v120) {
              v121 = *((unsigned __int8*)v111 + 16);
              v122 = v111[3];
              if ((v121 & 1) == 0) {
                v122 = v121 >> 1;
              }
              if (v122 == v115) {
                v123 = (v121 & 1) != 0 ? (__int64*)v111[4]
                                       : (__int64*)((char*)v111 + 17);
                result = memcmp(v123, v114, v115);
                if ((_DWORD)result == 0) {
                  goto LABEL_234;
                }
              }
              goto LABEL_181;
            }
            if (v120 >= v112) {
              v120 %= v112;
            }
            if (v120 == v118) {
            LABEL_181:
              v111 = (__int64*)*v111;
              if (v111 == nullptr) {
                goto LABEL_234;
              }
              continue;
            }
            break;
          }
          v111 = nullptr;
        LABEL_234:
          v96 = (__int64*)fw_memory_g_heap_manager_ptr;
          if ((v113 & 1) != 0) {
          LABEL_207:
            if (v148_.v150 != nullptr) {
              v128 = 128;
              if (*(_QWORD*)(*v96 + 200) == 0) {
                v128 = 56;
              }
              result =
                  nn_mem_StandardAllocator_Free_alt1(*v96 + v128, v148_.v150);
            }
          }
        LABEL_211:
          if (v111 != nullptr) {
            v109 = v111[5];
          }
          else {
            v109 = 0;
          }
          v81 = game_vstring_kEmpty_ptr[0];
        LABEL_215:
          *(_QWORD*)(*(_QWORD*)(v101 + 24) + 24LL) = v109;
        LABEL_216:
          if (*(_BYTE*)(v101 + 33) == 10) {
            v129 = GameData_21f1728;
            if (GameData_21f1728 < (unsigned __int64)GameData_21f1730) {
              *(_QWORD*)GameData_21f1728 = v101;
              v100 = v129 + 8;
            }
            else {
              v130 = GameData_21f1720;
              v131 = GameData_21f1728 - GameData_21f1720;
              v132 = (GameData_21f1728 - GameData_21f1720) >> 3;
              v133 = v132 + 1;
              if ((unsigned __int64)(v132 + 1) >> 61 != 0) {
                GameRoutine_892b20();
              }
              v134 = GameData_21f1730 - GameData_21f1720;
              if ((GameData_21f1730 - GameData_21f1720) >> 2 > v133) {
                v133 = v134 >> 2;
              }
              if ((unsigned __int64)v134 >= 0x7FFFFFFFFFFFFFF8LL) {
                v135 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v135 = v133;
              }
              if (v135 != 0) {
                if (v135 >> 61 != 0) {
                  GameRoutine_60a210();
                }
                v136 =
                    fw_memory_HeapManager_Allocate_alt1(*v96, 8 * v135, 16, 0);
              }
              else {
                v136 = 0;
              }
              v137 = v136 + 8 * v135;
              v138 = v136 + v131 - 8 * v132;
              *(_QWORD*)(v136 + v131) = v101;
              v100 = v136 + v131 + 8;
              result = memcpy(v138, v130, v131);
              GameData_21f1720 = v138;
              GameData_21f1728 = v100;
              GameData_21f1730 = v137;
              if (v130 != 0) {
                v139 = 128;
                if (*(_QWORD*)(*v96 + 200) == 0) {
                  v139 = 56;
                }
                result = nn_mem_StandardAllocator_Free_alt1(*v96 + v139, v130);
              }
              v99 = v142;
            }
            GameData_21f1728 = v100;
          }
          if (++v98 != v99) {
            continue;
          }
          break;
        }
      LABEL_139:
        v95 = v141 + 8;
        if (v141 + 8 != v140) {
          continue;
        }
        return result;
      }
    }
  }
  v17 = 4;
  goto LABEL_25;
}

__int64 TimelineFile_Unknown5()
{
  _QWORD* v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  if (GameData_21f1688 != 0) {
    v0 = (_QWORD*)GameData_21f1680;
    if (GameData_21f1680 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v2 = (_QWORD*)*v0;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v3);
        v0 = v2;
      } while (v2 != nullptr);
    }
    GameData_21f1680 = 0;
    if (GameData_21f1678 != 0) {
      v5 = GameData_21f1678 & 7;
      if ((unsigned __int64)GameData_21f1678 >= 8) {
        v7 = GameData_21f1678 & 0xFFFFFFFFFFFFFFF8LL;
        v6 = 0;
        do {
          *(_QWORD*)(GameData_21f1670 + 8 * v6) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v6 + 8) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v6 + 16) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v6 + 24) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v6 + 32) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v6 + 40) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v6 + 48) = 0;
          v8 = GameData_21f1670 + 8 * v6;
          v6 += 8;
          *(_QWORD*)(v8 + 56) = 0;
        } while (v7 != v6);
      }
      else {
        v6 = 0;
      }
      if (v5 != 0) {
        v9 = 8 * v6;
        do {
          --v5;
          *(_QWORD*)(GameData_21f1670 + v9) = 0;
          v9 += 8;
        } while (v5 != 0);
      }
    }
    GameData_21f1688 = 0;
  }
  GameData_21f16a0 = GameData_21f1698;
  GameData_21f16b8 = GameData_21f16b0;
  if (GameData_21f16f8 != 0) {
    v10 = (_QWORD*)GameData_21f16f0;
    if (GameData_21f16f0 != 0) {
      v11 = fw_memory_g_heap_manager_ptr;
      do {
        v13 = v10;
        v10 = (_QWORD*)*v10;
        if ((v13[2] & 1) != 0 && v13[4] != 0) {
          if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v14);
        }
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v12);
      } while (v10 != nullptr);
    }
    GameData_21f16f0 = 0;
    if (GameData_21f16e8 != 0) {
      v15 = GameData_21f16e8 & 7;
      if ((unsigned __int64)GameData_21f16e8 >= 8) {
        v17 = GameData_21f16e8 & 0xFFFFFFFFFFFFFFF8LL;
        v16 = 0;
        do {
          *(_QWORD*)(GameData_21f16e0 + 8 * v16) = 0;
          *(_QWORD*)(GameData_21f16e0 + 8 * v16 + 8) = 0;
          *(_QWORD*)(GameData_21f16e0 + 8 * v16 + 16) = 0;
          *(_QWORD*)(GameData_21f16e0 + 8 * v16 + 24) = 0;
          *(_QWORD*)(GameData_21f16e0 + 8 * v16 + 32) = 0;
          *(_QWORD*)(GameData_21f16e0 + 8 * v16 + 40) = 0;
          *(_QWORD*)(GameData_21f16e0 + 8 * v16 + 48) = 0;
          v18 = GameData_21f16e0 + 8 * v16;
          v16 += 8;
          *(_QWORD*)(v18 + 56) = 0;
        } while (v17 != v16);
      }
      else {
        v16 = 0;
      }
      if (v15 != 0) {
        v19 = 8 * v16;
        do {
          --v15;
          *(_QWORD*)(GameData_21f16e0 + v19) = 0;
          v19 += 8;
        } while (v15 != 0);
      }
    }
    GameData_21f16f8 = 0;
  }
  GameData_21f1710 = GameData_21f1708;
  GameData_21f1728 = GameData_21f1720;
  return result;
}

__int64 TimelineFile_890160(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  _QWORD v9[2];
  char* v10;

  v2 = strlen(a1);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v2);
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v5, 16,
                                               0);
    v9[1] = v3;
    v10 = v4;
    v9[0] = v5 | 1;
  }
  else {
    LOBYTE(v9[0]) = 2 * v2;
    v4 = (char*)v9 + 1;
    if (v2 == 0) {
      goto LABEL_10;
    }
  }
  memcpy(v4, a1, v3);

LABEL_10:
  v4[v3] = 0;
  result = GameRoutine_898dc0(&GameData_21f16e0, v9);
  if ((v9[0] & 1) != 0 && v10 != nullptr) {
    v7 = result;
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
    result = v7;
  }
  if (result != 0) {
    return *(_QWORD*)(result + 40);
  }
  return result;
}

__int64 TimelineFile_890280(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  _QWORD v11[4];
  _QWORD* v12;
  __int64 v13;
  __int64 v14;

  v3 = v11;
  v13 = 0;
  v11[0] = GameData_1fa7d28;
  v11[1] = &v13;
  v12 = v11;
  if (a1 == 0) {
    goto LABEL_14;
  }
  v4 = *(_QWORD*)(GameData_21c9c18 + 64);
  v5 = *(_QWORD*)(GameData_21c9c18 + 72);
  if (v4 == v5) {
    v3 = v11;
  LABEL_14:
    v9 = 32;
    goto LABEL_15;
  }
  do {
    v6 = *(__int64***)(*(_QWORD*)v4 + 40LL);
    v7 = *v6;
    v8 = v6[1];
    while (v7 != v8) {
      if (*(_QWORD*)(*v7 + 136) == a1) {
        v14 = *v7;
        if (v12 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        (*(void (**)(_QWORD*, __int64*))(*v12 + 48LL))(v12, &v14);
      }
      ++v7;
    }
    v4 += 8;
  } while (v4 != v5);
  v3 = v12;
  if (v12 == v11) {
    goto LABEL_14;
  }
  if (v12 != nullptr) {
    v9 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v3 + v9))(v3, a2);
  }
  return v13;
}

__attribute__((swiftcall)) void TimelineFile_890540(PSEUDO_X8 x8_,
                                                    __int64 result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64** v3;
  int v4;
  char* v5;
  __int64 v6;
  unsigned __int64* v7;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64** v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  char v16;
  __int64** v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64** v32;
  unsigned __int64** v33;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v3 = *(unsigned __int64***)(GameData_21c9c18 + 64);
  v32 = *(unsigned __int64***)(GameData_21c9c18 + 72);
  if (v3 == v32) {
    result;
    return;
  }
  v4 = (unsigned __int8)result;
  v5 = nullptr;
  v6 = 0;
  do {
    v7 = *v3;
    if (GameData_21d9f98 == 0 || GameData_21d9fa8 == 0) {
      goto LABEL_29;
    }
    v9 = *v7;
    v10 = GameData_21d9f98 - 1;
    if ((GameData_21d9f98 & (GameData_21d9f98 - 1)) != 0) {
      v11 = *v7;
      if (v9 >= GameData_21d9f98) {
        v11 = v9 % GameData_21d9f98;
      }
    }
    else {
      v11 = v10 & v9;
    }
    v12 = *(__int64***)(GameData_21d9f90 + 8 * v11);
    if (v12 == nullptr || (v13 = *v12) == nullptr) {
    LABEL_29:
      v17 = (__int64**)v7[5];
      v33 = v3;
      v18 = *v17;
      v19 = v17[1];
      while (v18 != v19) {
        v20 = *v18;
        if (*(unsigned __int8*)(*v18 + 33) == v4) {
          v21 = a2[2];
          if ((unsigned __int64)v5 < v21) {
            *(_QWORD*)v5 = v20;
            v5 += 8;
          }
          else {
            v22 = &v5[-v6];
            v23 = (__int64)&v5[-v6] >> 3;
            v24 = v23 + 1;
            if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
              *a2 = v6;
              GameRoutine_892b20();
            }
            v25 = v21 - v6;
            if (v25 >> 2 > v24) {
              v24 = v25 >> 2;
            }
            if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
              v26 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v26 = v24;
            }
            if (v26 != 0) {
              if (v26 >> 61 != 0) {
                *a2 = v6;
                GameRoutine_60a210();
              }
              v27 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v26, 16, 0);
            }
            else {
              v27 = 0;
            }
            v28 = v27 + 8 * v26;
            v29 = &v5[-v6];
            v30 = (__int64)&v22[v27 + -8 * v23];
            *(_QWORD*)&v22[v27] = v20;
            v5 = &v22[v27 + 8];
            result = memcpy(v30, v6, v29);
            a2[1] = (__int64)v5;
            a2[2] = v28;
            if (v6 != 0) {
              v31 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v31 = 56;
              }
              result = nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v6);
            }
            v6 = v30;
          }
          a2[1] = (__int64)v5;
        }
        ++v18;
      }
      v3 = v33;
      *a2 = v6;
      goto LABEL_52;
    }
    if ((GameData_21d9f98 & v10) == 0) {
      while (1) {
        v15 = v13[1];
        if (v15 == v9) {
          if (v13[2] == v9) {
            goto LABEL_27;
          }
        }
        else if ((v15 & v10) != v11) {
          goto LABEL_29;
        }
        v13 = (__int64*)*v13;
        if (v13 == nullptr) {
          goto LABEL_29;
        }
      }
    }
    while (1) {
      v14 = v13[1];
      if (v14 == v9) {
        break;
      }
      if (v14 >= GameData_21d9f98) {
        v14 %= (unsigned __int64)GameData_21d9f98;
      }
      if (v14 != v11) {
        goto LABEL_29;
      }
    LABEL_16:
      v13 = (__int64*)*v13;
      if (v13 == nullptr) {
        goto LABEL_29;
      }
    }
    if (v13[2] != v9) {
      goto LABEL_16;
    }
  LABEL_27:
    v16 = *((_BYTE*)v13 + 24);
    if ((unsigned __int8)(v16 - 5) > 3u || ((1 << (v16 - 2)) & 0x82) != 0) {
      goto LABEL_29;
    }
  LABEL_52:
    ++v3;
  } while (v3 != v32);
  {
    result;
    return;
  }
}

__int16* TimelineFile_890840(__int16* result)
{
  __int16* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int16* v10;
  __int64 v11;

  if (result[1] * *result * result[2] != 0) {
    v1 = result;
    v2 = GameData_21f1698;
    v3 = GameData_21f16a0;
    if (GameData_21f1698 != GameData_21f16a0) {
      do {
        v4 = *(_QWORD*)v2;
        if (*(_BYTE*)(*(_QWORD*)v2 + 32LL) == 0) {
          v5 = game_GameModeData_instance_;
          *(_BYTE*)(*(_QWORD*)(game_GameModeData_instance_ + 48) + 3932768LL) |=
              8u;
          v6 = *(_QWORD*)(v4 + 24);
          v7 = *(_QWORD*)(v6 + 112);
          v8 = *(_QWORD*)(v6 + 120);
          if (v7 != v8) {
            do {
              game_VariableManager_SetFlag(v7, 0);
              v7 += 16;
            } while (v7 != v8);
            v5 = game_GameModeData_instance_;
          }
          *(_BYTE*)(*(_QWORD*)(v5 + 48) + 3932768LL) &= ~8u;
        }
        v2 += 8;
      } while (v2 != v3);
      v2 = GameData_21f1698;
      v3 = GameData_21f16a0;
    }
    while (v2 != v3) {
      v9 = *(_QWORD*)v2;
      v10 = *(__int16**)(*(_QWORD*)v2 + 24LL);
      if (((__int64)v10[49] << 24) + ((__int64)v10[48] << 32) +
                  ((__int64)v10[50] << 18) + ((__int64)v10[51] << 12) +
                  ((__int64)v10[52] << 6) <
              (unsigned __int64)(((__int64)v1[1] << 24) + ((__int64)*v1 << 32) +
                                 ((__int64)v1[2] << 18) +
                                 ((__int64)v1[3] << 12) +
                                 ((__int64)v1[4] << 6)) &&
          *(_BYTE*)(v9 + 32) == 0) {
        GameRoutine_88d500(v9, 0, 0);
      }
      v2 += 8;
    }
    if (game_GameModeData_instance_ != 0) {
      v11 = game_GameModeData_instance_ + 40;
    }
    else {
      v11 = 0;
    }
    *(_BYTE*)(*(_QWORD*)(v11 + 8) + 3932768LL) |= 8u;
    result = (__int16*)GameRoutine_82ce80(*(_QWORD*)(v11 + 8), v1);
    *(_BYTE*)(*(_QWORD*)(v11 + 8) + 3932768LL) &= ~8u;
  }
  return result;
}

__int64 TimelineFile_890a20(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  int v21;

  v1 = *a1;
  v21 = 0;
  if (((*(__int64 (**)(__int64*, int*))(v1 + 16))(a1, &v21) & 1) == 0) {
  LABEL_24:
    v5 = 0;
    goto LABEL_25;
  }
  v3 = *((int*)a1 + 5);
  v4 = a1[1];
  v5 = 0;
  *((_DWORD*)a1 + 5) = v3 + 2;
  v6 = *(unsigned __int8*)(v4 + v3 + 1);
  *((_DWORD*)a1 + 5) = v3 + 3;
  v7 = v6 | ((unsigned __int64)*(unsigned __int8*)(v4 + v3 + 2) << 8);
  *((_DWORD*)a1 + 5) = v3 + 4;
  v8 = v7 | ((unsigned __int64)*(unsigned __int8*)(v4 + v3 + 3) << 16);
  *((_DWORD*)a1 + 5) = v3 + 5;
  v9 = v8 | ((unsigned __int64)*(unsigned __int8*)(v4 + v3 + 4) << 24);
  *((_DWORD*)a1 + 5) = v3 + 6;
  v10 = v9 | ((unsigned __int64)*(unsigned __int8*)(v4 + v3 + 5) << 32);
  *((_DWORD*)a1 + 5) = v3 + 7;
  v11 = v10 | ((unsigned __int64)*(unsigned __int8*)(v4 + v3 + 6) << 40);
  *((_DWORD*)a1 + 5) = v3 + 8;
  v12 = *(unsigned __int8*)(v4 + v3 + 7);
  *((_DWORD*)a1 + 5) = v3 + 9;
  v13 = v11 | (v12 << 48) |
        ((unsigned __int64)*(unsigned __int8*)(v4 + v3 + 8) << 56);
  if (v13 != 0 && GameData_21f1678 != 0 && GameData_21f1688 != 0) {
    v14 = GameData_21f1678 - 1;
    if ((GameData_21f1678 & (GameData_21f1678 - 1)) != 0) {
      v15 = v13;
      if (v13 >= GameData_21f1678) {
        v15 = v13 % GameData_21f1678;
      }
    }
    else {
      v15 = v14 & v13;
    }
    v16 = *(_QWORD**)(GameData_21f1670 + 8 * v15);
    if (v16 != nullptr) {
      v17 = (_QWORD*)*v16;
      if (v17 != nullptr) {
        if ((GameData_21f1678 & v14) == 0) {
          while (1) {
            v19 = v17[1];
            if (v13 == v19) {
              if (v17[2] == v13) {
                goto LABEL_26;
              }
            }
            else if ((v19 & v14) != v15) {
              goto LABEL_24;
            }
            v17 = (_QWORD*)*v17;
            v5 = 0;
            if (v17 == nullptr) {
              goto LABEL_25;
            }
          }
        }
        while (1) {
          v18 = v17[1];
          if (v13 == v18) {
            if (v17[2] == v13) {
            LABEL_26:
              v5 = v17[3];
              goto LABEL_25;
            }
          }
          else {
            if (v18 >= GameData_21f1678) {
              v18 %= (unsigned __int64)GameData_21f1678;
            }
            if (v18 != v15) {
              goto LABEL_24;
            }
          }
          v17 = (_QWORD*)*v17;
          v5 = 0;
          if (v17 == nullptr) {
            goto LABEL_25;
          }
        }
      }
    }
    goto LABEL_24;
  }

LABEL_25:
  (*(void (**)(__int64*, _QWORD))(*a1 + 24))(a1, 0);
  return v5;
}

__int64 TimelineFile_890c00(unsigned __int8 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = game_HashString(*(&GameData_1f9caf8 + a1));
  if (v1 != 0) {
    v2 = *(_QWORD*)(GameData_21c9c18 + 96);
    if (v2 != 0 && *(_QWORD*)(GameData_21c9c18 + 112) != 0) {
      v4 = v2 - 1;
      if ((v2 & (v2 - 1)) != 0) {
        v5 = v1;
        if (v1 >= v2) {
          v5 = v1 % v2;
        }
      }
      else {
        v5 = v4 & v1;
      }
      v6 = *(_QWORD**)(*(_QWORD*)(GameData_21c9c18 + 88) + 8 * v5);
      if (v6 != nullptr) {
        v7 = (_QWORD*)*v6;
        if (v7 != nullptr) {
          if ((v2 & v4) == 0) {
            while (1) {
              v10 = v7[1];
              if (v10 == v1) {
                if (v7[2] == v1) {
                  return v7[3];
                }
              }
              else if ((v10 & v4) != v5) {
                return 0;
              }
              v7 = (_QWORD*)*v7;
              v9 = 0;
              if (v7 == nullptr) {
                return v9;
              }
            }
          }
          do {
            v8 = v7[1];
            if (v8 == v1) {
              if (v7[2] == v1) {
                return v7[3];
              }
            }
            else {
              if (v8 >= v2) {
                v8 %= v2;
              }
              if (v8 != v5) {
                return 0;
              }
            }
            v7 = (_QWORD*)*v7;
          } while (v7 != nullptr);
        }
      }
    }
  }
  return 0;
}

__int64 game_TimelineFile_GetFromBattle_lambda0_Invoke(__int64 result,
                                                       _QWORD* a2)
{
  _QWORD* v2;

  v2 = *(_QWORD**)(result + 8);
  if (*v2 == 0) {
    *v2 = *a2;
  }
  return result;
}

__int64 TimelineFile_89a7a0()
{
  __int64 result;

  GameData_21f1680 = 0;
  GameData_21f1688 = 0;
  GameData_21f1670 = 0;
  GameData_21f1678 = 0;
  GameData_21f1690 = 1065353216;
  GameRoutine_2b0();
  GameRoutine_2b0();
  GameRoutine_2b0();
  GameData_21f16e0 = 0;
  GameData_21f16e8 = 0;
  GameData_21f16f0 = 0;
  GameData_21f16f8 = 0;
  GameData_21f1700 = 1065353216;
  GameRoutine_2b0();
  GameRoutine_2b0();
  result = GameRoutine_2b0();
  GameData_21f174a = 0;
  GameData_21f1752 = 0;
  GameData_21f1738 = 0;
  GameData_21f1740 = 0;
  GameData_21f1748 = 0;
  return result;
}

#pragma GCC visibility pop
