#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212bf68;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8a0;
extern _UNKNOWN* GameData_212c8a8;
extern __int64* GameData_212ccd0[45];
extern _QWORD GameData_212d330;
extern __int64 GameData_21306a0[7];
extern __int64 GameData_21306c0[3];
extern __int64* GameData_2130920[5];
extern __int64 GameData_21ca310;
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_11f44e0(_QWORD, _QWORD);
__int64 GameRoutine_121d220(__int64 result, __int64, int, __int64, __int64,
                            __int64);
__int64 GameRoutine_1226120(__int64 result, __int64);
_QWORD* GameRoutine_1244680(float*, unsigned __int64*, __int64*);
__int64 GameRoutine_1274f90(_QWORD*, __int64, unsigned int, _DWORD*);
__int64 GameRoutine_128e990(__int64 result, _DWORD*);
__int64 GameRoutine_128f580(__int64);
__int64 GameRoutine_128f6c0(_QWORD, _QWORD);
__int64 GameRoutine_1290c20(__int64, __int64, int);
__int64 GameRoutine_1292980(_QWORD, _QWORD);
__int64 GameRoutine_12a1580(_QWORD);
void __attribute__((noreturn)) GameRoutine_12b6e10(_QWORD);
__int64 GameRoutine_12b7f80(__int64 result, _QWORD*, unsigned __int64, __int64*,
                            signed __int64);
__int64 GameRoutine_12c45b0(_QWORD*, __int64, char);
__int64 GameRoutine_12c4780(_QWORD*, __int64, __int64);
__int64 GameRoutine_12eaba0(__int64 result, _QWORD*, unsigned __int64, __int64*,
                            signed __int64);
__int64 GameRoutine_1307600(__int64, __int64, unsigned int, __int64);
__int64 GameRoutine_13080e0(_QWORD, _QWORD);
__int64 GameRoutine_1a09d00(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_682780(_QWORD);
__int64 GameRoutine_6e8bc0(_QWORD, _QWORD);
__int64 GameRoutine_6ea9d0(_QWORD);
__int64 GameRoutine_84cb50(_QWORD, _QWORD);
__int64 GameRoutine_8cfec0(_QWORD, _QWORD);
__int64 GameRoutine_1292980_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_1292980");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GetHero(unsigned __int8);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_UnitPool_GetFirst(int*);
bool game_11f44e0(__int64, char);
bool game_128f6c0(__int64*, int*);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 fw_memory_g_heap_manager_ptr;
void AIDeploy_1274f90(_QWORD*, __int64, unsigned int, _DWORD*);
void AIThink_121d220(__int64, __int64, int);
void GameRoutine_1226120_alt1(__int64, __int64) __asm__("GameRoutine_1226120");
void GameRoutine_12a1580_alt1(__int64) __asm__("GameRoutine_12a1580");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 GameHr_1292300(__int64 a1, int a2, __int64 a3);
__int64 GameHr_1294280(__int64 a1, __int64 a2, __int64 a3);
__int64 GameHr_1298700(__int64 a1, __int64 a2, __int64 a3);
__int64 GameHr_12c4be0(__int64 a1);
__int64 GameHr_12f4020(__int64 a1);
_QWORD* GameRoutine_1290c20_alt1(__int64, __int64,
                                 int) __asm__("GameRoutine_1290c20");
__int64 GameHr_1292980(__int64*, __int64);
__int64 GameHr_12c45b0(_QWORD*, __int64, char);
bool game_128f6c0_alt1(__int64, int*) __asm__("game_128f6c0");
void AIDeploy_1274f90_alt1(_QWORD*, __int64, int,
                           unsigned int*) __asm__("AIDeploy_1274f90");
void GameHr_1226120(__int64, __int64);
void GameHr_12a1580(__int64);

__int64 GameHr_1292300(__int64 a1, int a2, __int64 a3)
{
  int v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int* v10;
  int* v11;
  int v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  _DWORD* v16;
  int v17;
  int v18;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _DWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int8 v44;
  int v45;
  unsigned int v47;
  int v49;
  int v50;
  bool v51;
  __int64 v52;
  __int64 v53;
  unsigned int v54;
  __int64 v55;
  _QWORD* v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  __int64 v67;
  int v68;
  int v70;
  __int64 v71;
  int v72;
  int v73;
  int v74;
  __int64 v75;
  struct {
    __int64 v76;
    char gap72_[12288];
    __int64 v77;
    char gap12368_[8];
    _QWORD* v78;
  } v76_;
  struct {
    __int64 v79;
    _DWORD* v80;
    __int64 v81;
    char v82;
    char gap12433_[3];
    int v83;
    __int64 v84;
  } v79_;
  struct {
    int v85;
    char gap12460_[4];
    __int64 v86;
  } v85_;
  int v87;
  __int64 v88;
  int v89;
  int v90;
  int v91;
  __int64 v92;
  struct {
    __int64 v93;
    char gap12512_[12288];
    __int64 v94;
    char gap24808_[8];
    _QWORD* v95;
  } v93_;
  unsigned int v96[3];

  if (!game_11f44e0(*(_QWORD*)(a1 + 8), 0) ||
      (unsigned __int8)GameRoutine_128f580(*(_QWORD*)(a1 + 8)) != 2) {
    return 0;
  }
  v5 = *(__int16*)(a3 + 2);
  result = 0;
  if ((v5 & 0x80000000) == 0 && *(_BYTE*)a3 == 0) {
    (**(void (***)(__int64, _QWORD))(*(_QWORD*)GameData_21306c0[0] + 8LL))(
        *(_QWORD*)GameData_21306c0[0] + 8LL, *(_QWORD*)(a1 + 8));
    AIThink_121d220(a1 + 2288, *(_QWORD*)(a1 + 8), 0);
    v96[0] = 2;
    AIDeploy_1274f90_alt1(*(_QWORD**)GameData_21306a0[0], *(_QWORD*)(a1 + 8),
                          -1, v96);
    v85_.v85 = 0;
    v85_.v86 = 0;
    GameHr_12a1580((__int64)&v87);
    v79_.v82 = 0;
    v79_.v81 = 0;
    v79_.v80 = nullptr;
    v79_.v83 = -1;
    GameHr_12a1580((__int64)&v70);
    v7 = *(_QWORD*)(a1 + 8);
    v79_.v84 = a1 + 2288;
    v79_.v79 = v7;
    v8 = fw_memory_g_heap_manager_ptr;
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        32, 16, 0);
    v10 = (int*)v9;
    v66 = v5;
    if (a2 == 47) {
      v11 = (int*)(v9 + 4);
      *(_DWORD*)v9 = 13;
      v12 = 17412;
    }
    else {
      *(_DWORD*)v9 = 15;
      v11 = (int*)(v9 + 12);
      if ((*(_BYTE*)(v7 + 1980) & 1) != 0) {
        v13 = 0xD0000000ELL;
      }
      else {
        v13 = 0xE0000000DLL;
      }
      *(_QWORD*)(v9 + 4) = v13;
      v12 = 1028;
    }
    v68 = v12;
    v14 = GameData_2130920[0];
    v15 = GameData_212c880[0];
    v16 = GameData_212c8a8;
    v67 = v9;
  LABEL_23:
    v20 = *v10;
    v21 = *(_QWORD**)(a1 + 8);
    v22 = *(_QWORD*)(*v15 + 64);
    v23 = *(_QWORD*)(v22 + 8LL * *((int*)v14 + v20));
    if (v23 == 0) {
      goto LABEL_49;
    }
    v24 = *(_QWORD*)(v22 + 8LL * *((int*)v14 + v20));
    while (1) {
      v26 = *(unsigned int*)(*(_QWORD*)(v24 + 24) + 4LL);
      v27 = v26 & 0xFFF;
      if ((v26 & 0xFFF) == 0) {
        v28 = v21[182];
        v29 = (v21[183] - v28) >> 2;
        goto LABEL_40;
      }
      v28 = v21[182];
      v29 = (v21[183] - v28) >> 2;
      if (v29 < ((v26 >> 5) & 0x7F) + 1 ||
          ((*(_DWORD*)(v28 + 4 * ((v26 >> 5) & 0x7F)) >> v26) & 1) == 0 ||
          (v30 = v21[187], v31 = v21[186], v30 == v31)) {
      LABEL_25:
        v25 = 0xFFFFFFFFLL;
      }
      else {
        v32 = (v30 - v31) >> 2;
        v33 = 0;
        while (((*(_DWORD*)(v31 + 4 * v33) ^ (unsigned int)v26) & 0xFFF) != 0) {
          if (v32 == ++v33) {
            goto LABEL_25;
          }
        }
        v25 = (unsigned int)v33;
        if ((v33 & 0x80000000) == 0) {
        LABEL_36:
          if ((v25 & 0x80000000) == 0) {
            v34 = v21[186];
          LABEL_38:
            v35 = (_DWORD*)(v34 + 4 * v25);
            goto LABEL_50;
          }
        LABEL_40:
          v36 = *(unsigned __int16*)(v23 + 16);
          v37 = (v36 >> 5) & 0x7F;
          if (v29 >= v37 + 1) {
            v38 = v36 & 0xFFF;
            if (((*(_DWORD*)(v28 + 4LL * (unsigned int)v37) >> v38) & 1) != 0) {
              v39 = v21[187];
              v34 = v21[186];
              if (v39 != v34) {
                v40 = (v39 - v34) >> 2;
                v41 = 0;
                while ((*(_DWORD*)(v34 + 4 * v41) & 0xFFF) != v38) {
                  if (v40 == ++v41) {
                    goto LABEL_49;
                  }
                }
                if ((v41 & 0x8000000000000000LL) == 0) {
                  v25 = (unsigned int)v41;
                  goto LABEL_38;
                }
              }
            }
          }
        LABEL_49:
          v35 = v16;
        LABEL_50:
          if ((*(_WORD*)v35 & 0xFFF) == 0 ||
              (GameRoutine_128e990((__int64)v21, v35) & 1) == 0) {
            goto LABEL_22;
          }
          v42 = *v15;
          v79_.v80 = v35;
          v43 = *(_QWORD*)(*(_QWORD*)(v42 + 64) + 8LL * (*v35 & 0xFFF));
          v44 = GameRoutine_128f580(*(_QWORD*)(a1 + 8));
          v17 = 0;
          if (v44 == 0 || *(_BYTE*)(v43 + 104) != 3) {
            goto LABEL_16;
          }
          v45 = *(unsigned __int8*)(v43 + 106);
          if (v45 != 3) {
            if (v45 != 2) {
              if (v45 != 1 || v44 > 9u) {
                goto LABEL_15;
              }
              if (((1 << v44) & 0x38A) != 0) {
                v17 = 1;
                goto LABEL_16;
              }
              if (((1 << v44) & 0x50) != 0) {
                v17 = 6;
                goto LABEL_16;
              }
              if (v44 != 2) {
                goto LABEL_15;
              }
              v49 = v68;
              if (*(__int16*)(v43 + 330) <= 0) {
                v50 = 3;
              }
              else {
                v50 = 4;
              }
              v51 = (_DWORD)v20 == 15 && a2 == 38;
              HIDWORD(v79_.v81) = v50;
              if (v51) {
                v49 = 5124;
              }
              LODWORD(v79_.v81) = v49;
              if (game_128f6c0_alt1((__int64)&v79_.v79, &v70)) {
                goto LABEL_91;
              }
            LABEL_22:
              if (++v10 == v11) {
                goto LABEL_92;
              }
              goto LABEL_23;
            }
            if (v44 == 4) {
              v17 = 5;
              goto LABEL_16;
            }
          LABEL_15:
            v17 = 0;
            goto LABEL_16;
          }
          if (v44 == 5) {
            if (*(_BYTE*)(v43 + 250) != 0) {
              goto LABEL_15;
            }
            v17 = 8;
          }
          else {
            if (v44 != 4) {
              if (v44 != 2 || *(_BYTE*)(v43 + 250) != 13) {
                goto LABEL_15;
              }
              v47 = v68;
              if ((_DWORD)v20 == 15 && a2 == 38) {
                v47 = 5124;
              }
              v79_.v81 = v47 | 0x200000000LL;
              if ((GameHr_1292980(&v79_.v79, (__int64)&v70) & 1) == 0) {
                goto LABEL_22;
              }
            LABEL_91:
              v52 = *v15;
              v85_.v85 = HIDWORD(v71);
              v53 = *(_QWORD*)(*(_QWORD*)(v52 + 64) + 8LL * (*v35 & 0xFFF));
              v89 = v72;
              v85_.v86 = v53;
              v87 = v70;
              v88 = v71;
              v92 = v75;
              v90 = v73;
              GameHr_1226120((__int64)&v76_.v76, (__int64)&v93_.v93);
              v91 = v74;
            LABEL_92:
              if (v85_.v86 != 0) {
                GameRoutine_1290c20_alt1(a1, (__int64)&v85_.v85, v66);
                v54 = 1;
              }
              else {
                v54 = 0;
              }
              v55 = 128;
              if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
                v55 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v55, v67);
              v56 = v76_.v78;
              if (v76_.v78 != nullptr) {
                do {
                  v57 = (_QWORD*)*v56;
                  if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
                    v58 = 128;
                  }
                  else {
                    v58 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v58,
                                                (__int64)v56);
                  v56 = v57;
                } while (v57 != nullptr);
              }
              v59 = v76_.v77;
              v76_.v77 = 0;
              if (v59 != 0) {
                v60 = 128;
                if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
                  v60 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v60, v59);
              }
              v61 = v93_.v95;
              if (v93_.v95 != nullptr) {
                do {
                  v62 = (_QWORD*)*v61;
                  if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
                    v63 = 128;
                  }
                  else {
                    v63 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v63,
                                                (__int64)v61);
                  v61 = v62;
                } while (v62 != nullptr);
              }
              v64 = v93_.v94;
              v93_.v94 = 0;
              if (v64 != 0) {
                v65 = 128;
                if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
                  v65 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v65, v64);
              }
              return v54;
            }
            if (*(_BYTE*)(v43 + 250) != 28) {
              goto LABEL_15;
            }
            v17 = 7;
          }
        LABEL_16:
          v18 = v68;
          HIDWORD(v79_.v81) = v17;
          if ((_DWORD)v20 == 15 && a2 == 38) {
            v18 = 5124;
          }
          LODWORD(v79_.v81) = v18;
          goto LABEL_22;
        }
      }
      v24 = *(_QWORD*)(v22 + 8 * v27);
      if (v24 == 0) {
        goto LABEL_36;
      }
    }
  }
  return result;
}

__int64 GameHr_1294280(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  int v10;
  __int64* v11;
  __int64* v12;
  _DWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _DWORD* v27;
  unsigned __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int8 v38;
  int v39;
  int v40;
  int v42;
  __int64 v43;
  __int64 v44;
  int v45;
  unsigned int v46;
  __int64 v47;
  _QWORD* v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  struct {
    __int64 v59;
    unsigned int v60;
    int v61;
    int v62;
    int v63;
    __int64 v64;
  } v59_;
  struct {
    __int64 v65;
    char gap56_[12288];
    __int64 v66;
    char gap12352_[8];
    _QWORD* v67;
  } v65_;
  struct {
    _QWORD* v68;
    _DWORD* v69;
    __int64 v70;
    char v71;
    char gap12417_[3];
    int v72;
    __int64 v73;
  } v68_;
  struct {
    unsigned int v74;
    char gap12444_[4];
    __int64 v75;
  } v74_;
  struct {
    __int64 v76;
    unsigned int v77;
    int v78;
    int v79;
    int v80;
    __int64 v81;
  } v76_;
  struct {
    __int64 v82;
    char gap12496_[12288];
    __int64 v83;
    char gap24792_[8];
    _QWORD* v84;
  } v82_;
  unsigned int v85[3];

  if (!game_11f44e0(*(_QWORD*)(a1 + 8), 0) ||
      (unsigned __int8)GameRoutine_128f580(*(_QWORD*)(a1 + 8)) != 3) {
    return 0;
  }
  result = 0;
  if ((*(__int16*)(a3 + 2) & 0x80000000) == 0 && *(_BYTE*)a3 == 0) {
    v58 = *(__int16*)(a3 + 2);
    (**(void (***)(__int64, _QWORD))(*(_QWORD*)GameData_21306c0[0] + 8LL))(
        *(_QWORD*)GameData_21306c0[0] + 8LL, *(_QWORD*)(a1 + 8));
    v85[0] = 2;
    AIDeploy_1274f90_alt1(*(_QWORD**)GameData_21306a0[0], *(_QWORD*)(a1 + 8),
                          -1, v85);
    v74_.v74 = 0;
    v74_.v75 = 0;
    GameHr_12a1580((__int64)&v76_.v76);
    v68_.v71 = 0;
    v68_.v70 = 0;
    v68_.v69 = nullptr;
    v68_.v72 = -1;
    v68_.v73 = 0;
    GameHr_12a1580((__int64)&v59_.v59);
    v6 = *(_QWORD**)(a1 + 8);
    v68_.v68 = v6;
    v7 = fw_memory_g_heap_manager_ptr;
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        20, 16, 0);
    v9 = 0;
    v10 = 26;
    *(_QWORD*)v8 = 0x1C0000001ALL;
    *(_QWORD*)(v8 + 8) = 0x1B00000019LL;
    *(_DWORD*)(v8 + 16) = 24;
    v11 = GameData_2130920[0];
    v12 = GameData_212c880[0];
    v13 = GameData_212c8a8;
  LABEL_6:
    v14 = *(_QWORD*)(*v12 + 64);
    v15 = *(_QWORD*)(v14 + 8LL * *((int*)v11 + v10));
    if (v15 == 0) {
      goto LABEL_32;
    }
    v16 = *(_QWORD*)(v14 + 8LL * *((int*)v11 + v10));
    while (1) {
      v18 = *(unsigned int*)(*(_QWORD*)(v16 + 24) + 4LL);
      v19 = v18 & 0xFFF;
      if ((v18 & 0xFFF) == 0) {
        v20 = v6[182];
        v21 = (v6[183] - v20) >> 2;
        goto LABEL_23;
      }
      v20 = v6[182];
      v21 = (v6[183] - v20) >> 2;
      if (v21 < ((v18 >> 5) & 0x7F) + 1 ||
          ((*(_DWORD*)(v20 + 4 * ((v18 >> 5) & 0x7F)) >> v18) & 1) == 0 ||
          (v22 = v6[187], v23 = v6[186], v22 == v23)) {
      LABEL_8:
        v17 = 0xFFFFFFFFLL;
      }
      else {
        v24 = (v22 - v23) >> 2;
        v25 = 0;
        while (((*(_DWORD*)(v23 + 4 * v25) ^ (unsigned int)v18) & 0xFFF) != 0) {
          if (v24 == ++v25) {
            goto LABEL_8;
          }
        }
        v17 = (unsigned int)v25;
        if ((v25 & 0x80000000) == 0) {
        LABEL_19:
          if ((v17 & 0x80000000) == 0) {
            v26 = v6[186];
          LABEL_21:
            v27 = (_DWORD*)(v26 + 4 * v17);
            goto LABEL_33;
          }
        LABEL_23:
          v28 = *(unsigned __int16*)(v15 + 16);
          v29 = (v28 >> 5) & 0x7F;
          if (v21 >= v29 + 1) {
            v30 = v28 & 0xFFF;
            if (((*(_DWORD*)(v20 + 4LL * (unsigned int)v29) >> v30) & 1) != 0) {
              v31 = v6[187];
              v26 = v6[186];
              if (v31 != v26) {
                v32 = (v31 - v26) >> 2;
                v33 = 0;
                while ((*(_DWORD*)(v26 + 4 * v33) & 0xFFF) != v30) {
                  if (v32 == ++v33) {
                    goto LABEL_32;
                  }
                }
                if ((v33 & 0x8000000000000000LL) == 0) {
                  v17 = (unsigned int)v33;
                  goto LABEL_21;
                }
              }
            }
          }
        LABEL_32:
          v27 = v13;
        LABEL_33:
          if ((*(_WORD*)v27 & 0xFFF) == 0 ||
              (GameRoutine_128e990(*(_QWORD*)(a1 + 8), v27) & 1) == 0) {
            goto LABEL_78;
          }
          v34 = *(_QWORD*)(a1 + 8);
          v35 = *v27 & 0xFFF;
          v36 = *(_QWORD*)(*v12 + 64);
          v68_.v69 = v27;
          v37 = *(_QWORD*)(v36 + 8 * v35);
          v38 = GameRoutine_128f580(v34);
          v39 = 0;
          if (v38 != 0 && *(_BYTE*)(v37 + 104) == 3) {
            v40 = *(unsigned __int8*)(v37 + 106);
            if (v40 == 3) {
              if (v38 == 5) {
                if (*(_BYTE*)(v37 + 250) == 0) {
                  v39 = 8;
                  goto LABEL_74;
                }
              }
              else if (v38 == 4) {
                if (*(_BYTE*)(v37 + 250) == 28) {
                  v39 = 7;
                  goto LABEL_74;
                }
              }
              else if (v38 == 2 && *(_BYTE*)(v37 + 250) == 13) {
                v39 = 2;
                goto LABEL_74;
              }
            }
            else if (v40 == 2) {
              if (v38 == 4) {
                v39 = 5;
                goto LABEL_74;
              }
            }
            else if (v40 == 1 && v38 <= 9u) {
              if (((1 << v38) & 0x38A) != 0) {
                HIDWORD(v68_.v70) = 1;
                if (v10 == 26) {
                  v42 = 1040;
                }
                else {
                  v42 = 16;
                }
                LODWORD(v68_.v70) = v42;
                if (game_128f6c0_alt1((__int64)&v68_.v68, (int*)&v59_.v59) &&
                    (v74_.v75 == 0 || v74_.v74 < v59_.v60 || v76_.v78 < 0 ||
                     v74_.v74 <= v59_.v60 &&
                         (v76_.v78 | (v76_.v79 << 16)) >
                             (v59_.v61 | (v59_.v62 << 16)))) {
                  v43 = *v12;
                  v74_.v74 = v59_.v60;
                  v44 = *(_QWORD*)(*(_QWORD*)(v43 + 64) + 8LL * (*v27 & 0xFFF));
                  v76_.v77 = v59_.v60;
                  v76_.v78 = v59_.v61;
                  v76_.v79 = v59_.v62;
                  v74_.v75 = v44;
                  v76_.v76 = v59_.v59;
                  v76_.v81 = v59_.v64;
                  GameHr_1226120((__int64)&v65_.v65, (__int64)&v82_.v82);
                  v76_.v80 = v59_.v63;
                  if (v10 != 26 && v9 < 4) {
                  LABEL_79:
                    ++v9;
                    v6 = *(_QWORD**)(a1 + 8);
                    v10 = *(_DWORD*)(v8 + 4 * v9);
                    goto LABEL_6;
                  }
                LABEL_82:
                  if (v74_.v75 != 0) {
                    GameRoutine_1290c20_alt1(a1, (__int64)&v74_.v74, v58);
                    v46 = 1;
                  }
                  else {
                    v46 = 0;
                  }
                  v47 = 128;
                  if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
                    v47 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v47, v8);
                  v48 = v65_.v67;
                  if (v65_.v67 != nullptr) {
                    do {
                      v49 = (_QWORD*)*v48;
                      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
                        v50 = 128;
                      }
                      else {
                        v50 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v50,
                                                    (__int64)v48);
                      v48 = v49;
                    } while (v49 != nullptr);
                  }
                  v51 = v65_.v66;
                  v65_.v66 = 0;
                  if (v51 != 0) {
                    v52 = 128;
                    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
                      v52 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v52, v51);
                  }
                  v53 = v82_.v84;
                  if (v82_.v84 != nullptr) {
                    do {
                      v54 = (_QWORD*)*v53;
                      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
                        v55 = 128;
                      }
                      else {
                        v55 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v55,
                                                    (__int64)v53);
                      v53 = v54;
                    } while (v54 != nullptr);
                  }
                  v56 = v82_.v83;
                  v82_.v83 = 0;
                  if (v56 != 0) {
                    v57 = 128;
                    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
                      v57 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v57, v56);
                  }
                  return v46;
                }
              LABEL_78:
                if (v9 <= 3) {
                  goto LABEL_79;
                }
                goto LABEL_82;
              }
              if (((1 << v38) & 0x50) != 0) {
                v39 = 6;
                goto LABEL_74;
              }
              if (v38 == 2) {
                if (*(__int16*)(v37 + 330) <= 0) {
                  v39 = 3;
                }
                else {
                  v39 = 4;
                }
                goto LABEL_74;
              }
            }
            v39 = 0;
          }
        LABEL_74:
          HIDWORD(v68_.v70) = v39;
          if (v10 == 26) {
            v45 = 1040;
          }
          else {
            v45 = 16;
          }
          LODWORD(v68_.v70) = v45;
          goto LABEL_78;
        }
      }
      v16 = *(_QWORD*)(v14 + 8 * v19);
      if (v16 == 0) {
        goto LABEL_19;
      }
    }
  }
  return result;
}

__int64 GameHr_1298700(__int64 a1, __int64 a2, __int64 a3)
{
  int v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  _DWORD* v12;
  int v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _DWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int8 v39;
  int v40;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  __int64 v45;
  _QWORD* v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  struct {
    int v56[2];
    unsigned int v57;
    int v58;
    int v59;
    int v60;
    __int64 v61;
  } v56_;
  struct {
    __int64 v62;
    char gap40_[12288];
    __int64 v63;
    char gap12336_[8];
    _QWORD* v64;
  } v62_;
  struct {
    __int64 v65;
    _DWORD* v66;
    __int64 v67;
    char v68;
    char gap12401_[3];
    int v69;
    __int64 v70;
  } v65_;
  struct {
    unsigned int v71;
    char gap12428_[4];
    __int64 v72;
  } v71_;
  struct {
    _DWORD v73[6];
    __int64 v74;
  } v73_;
  struct {
    __int64 v75;
    char gap12480_[12288];
    __int64 v76;
    char gap24776_[8];
    _QWORD* v77;
  } v75_;
  unsigned int v78[3];

  if (!game_11f44e0(*(_QWORD*)(a1 + 8), 0) ||
      (unsigned __int8)GameRoutine_128f580(*(_QWORD*)(a1 + 8)) != 8) {
    return 0;
  }
  v5 = *(__int16*)(a3 + 2);
  result = 0;
  if ((v5 & 0x80000000) == 0 && *(_BYTE*)a3 == 0) {
    (**(void (***)(__int64, _QWORD))(*(_QWORD*)GameData_21306c0[0] + 8LL))(
        *(_QWORD*)GameData_21306c0[0] + 8LL, *(_QWORD*)(a1 + 8));
    v78[0] = 2;
    AIDeploy_1274f90_alt1(*(_QWORD**)GameData_21306a0[0], *(_QWORD*)(a1 + 8),
                          -1, v78);
    v71_.v71 = 0;
    v71_.v72 = 0;
    GameHr_12a1580((__int64)v73_.v73);
    v65_.v68 = 0;
    v65_.v67 = 0;
    v65_.v66 = nullptr;
    v65_.v69 = -1;
    v65_.v70 = 0;
    GameHr_12a1580((__int64)v56_.v56);
    v65_.v65 = *(_QWORD*)(a1 + 8);
    LODWORD(v65_.v67) = 1152;
    v7 = fw_memory_g_heap_manager_ptr;
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        12, 16, 0);
    v9 = 0;
    *(_QWORD*)v8 = 0x2E0000002FLL;
    *(_DWORD*)(v8 + 8) = 45;
    v10 = GameData_2130920[0];
    v11 = GameData_212c880[0];
    v12 = GameData_212c8a8;
    while (1) {
      v14 = *(_QWORD**)(a1 + 8);
      v15 = *(_QWORD*)(*v11 + 64);
      v16 = *(_QWORD*)(v15 + 8LL * *((int*)v10 + *(int*)(v8 + v9)));
      if (v16 == 0) {
        goto LABEL_38;
      }
      v17 = *(_QWORD*)(v15 + 8LL * *((int*)v10 + *(int*)(v8 + v9)));
      while (1) {
        v19 = *(unsigned int*)(*(_QWORD*)(v17 + 24) + 4LL);
        v20 = v19 & 0xFFF;
        if ((v19 & 0xFFF) == 0) {
          v21 = v14[182];
          v22 = (v14[183] - v21) >> 2;
          goto LABEL_29;
        }
        v21 = v14[182];
        v22 = (v14[183] - v21) >> 2;
        if (v22 >= ((v19 >> 5) & 0x7F) + 1 &&
            ((*(_DWORD*)(v21 + 4 * ((v19 >> 5) & 0x7F)) >> v19) & 1) != 0) {
          v23 = v14[187];
          v24 = v14[186];
          if (v23 != v24) {
            break;
          }
        }
      LABEL_14:
        v18 = 0xFFFFFFFFLL;
      LABEL_15:
        v17 = *(_QWORD*)(v15 + 8 * v20);
        if (v17 == 0) {
          goto LABEL_25;
        }
      }
      v25 = (v23 - v24) >> 2;
      v26 = 0;
      while (((*(_DWORD*)(v24 + 4 * v26) ^ (unsigned int)v19) & 0xFFF) != 0) {
        if (v25 == ++v26) {
          goto LABEL_14;
        }
      }
      v18 = (unsigned int)v26;
      if ((v26 & 0x80000000) != 0) {
        goto LABEL_15;
      }
    LABEL_25:
      if ((v18 & 0x80000000) == 0) {
        v27 = v14[186];
      LABEL_27:
        v28 = (_DWORD*)(v27 + 4 * v18);
        goto LABEL_39;
      }
    LABEL_29:
      v29 = *(unsigned __int16*)(v16 + 16);
      v30 = (v29 >> 5) & 0x7F;
      if (v22 >= v30 + 1) {
        v31 = v29 & 0xFFF;
        if (((*(_DWORD*)(v21 + 4LL * (unsigned int)v30) >> v31) & 1) != 0) {
          v32 = v14[187];
          v27 = v14[186];
          if (v32 != v27) {
            v33 = (v32 - v27) >> 2;
            v34 = 0;
            while ((*(_DWORD*)(v27 + 4 * v34) & 0xFFF) != v31) {
              if (v33 == ++v34) {
                goto LABEL_38;
              }
            }
            if ((v34 & 0x8000000000000000LL) == 0) {
              v18 = (unsigned int)v34;
              goto LABEL_27;
            }
          }
        }
      }
    LABEL_38:
      v28 = v12;
    LABEL_39:
      if ((*(_WORD*)v28 & 0xFFF) != 0 &&
          (GameRoutine_128e990((__int64)v14, v28) & 1) != 0) {
        v35 = *(_QWORD*)(a1 + 8);
        v36 = *v28 & 0xFFF;
        v37 = *(_QWORD*)(*v11 + 64);
        v65_.v66 = v28;
        v38 = *(_QWORD*)(v37 + 8 * v36);
        v39 = GameRoutine_128f580(v35);
        v13 = 0;
        if (v39 == 0 || *(_BYTE*)(v38 + 104) != 3) {
          goto LABEL_10;
        }
        v40 = *(unsigned __int8*)(v38 + 106);
        if (v40 == 3) {
          if (v39 == 5) {
            if (*(_BYTE*)(v38 + 250) == 0) {
              v13 = 8;
              goto LABEL_10;
            }
            goto LABEL_9;
          }
          if (v39 == 4) {
            if (*(_BYTE*)(v38 + 250) == 28) {
              v13 = 7;
              goto LABEL_10;
            }
            goto LABEL_9;
          }
          if (v39 != 2 || *(_BYTE*)(v38 + 250) != 13) {
            goto LABEL_9;
          }
          v13 = 2;
        }
        else if (v40 == 2) {
          if (v39 != 4) {
            goto LABEL_9;
          }
          v13 = 5;
        }
        else {
          if (v40 == 1 && v39 <= 9u) {
            if (((1 << v39) & 0x38A) != 0) {
              HIDWORD(v65_.v67) = 1;
              if (game_128f6c0_alt1((__int64)&v65_.v65, v56_.v56) &&
                  (v71_.v72 == 0 || v71_.v71 < v56_.v57)) {
                v42 = *v11;
                v71_.v71 = v56_.v57;
                v43 = *(_QWORD*)(*(_QWORD*)(v42 + 64) + 8LL * (*v28 & 0xFFF));
                v73_.v73[2] = v56_.v57;
                v71_.v72 = v43;
                v73_.v73[0] = v56_.v56[0];
                v73_.v73[1] = v56_.v56[1];
                v73_.v74 = v56_.v61;
                v73_.v73[3] = v56_.v58;
                v73_.v73[4] = v56_.v59;
                GameHr_1226120((__int64)&v62_.v62, (__int64)&v75_.v75);
                v73_.v73[5] = v56_.v60;
              }
              goto LABEL_11;
            }
            if (((1 << v39) & 0x50) != 0) {
              v13 = 6;
              goto LABEL_10;
            }
            if (v39 == 2) {
              if (*(__int16*)(v38 + 330) <= 0) {
                v13 = 3;
              }
              else {
                v13 = 4;
              }
              goto LABEL_10;
            }
          }
        LABEL_9:
          v13 = 0;
        }
      LABEL_10:
        HIDWORD(v65_.v67) = v13;
      }
    LABEL_11:
      v9 += 4;
      if (v9 == 12) {
        if (v71_.v72 != 0) {
          GameRoutine_1290c20_alt1(a1, (__int64)&v71_.v71, v5);
          v44 = 1;
        }
        else {
          v44 = 0;
        }
        v45 = 128;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
          v45 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v45, v8);
        v46 = v62_.v64;
        if (v62_.v64 != nullptr) {
          do {
            v47 = (_QWORD*)*v46;
            if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
              v48 = 128;
            }
            else {
              v48 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v48, (__int64)v46);
            v46 = v47;
          } while (v47 != nullptr);
        }
        v49 = v62_.v63;
        v62_.v63 = 0;
        if (v49 != 0) {
          v50 = 128;
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
            v50 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v50, v49);
        }
        v51 = v75_.v77;
        if (v75_.v77 != nullptr) {
          do {
            v52 = (_QWORD*)*v51;
            if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
              v53 = 128;
            }
            else {
              v53 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v53, (__int64)v51);
            v51 = v52;
          } while (v52 != nullptr);
        }
        v54 = v75_.v76;
        v75_.v76 = 0;
        if (v54 != 0) {
          v55 = 128;
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
            v55 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v55, v54);
        }
        return v44;
      }
    }
  }
  return result;
}

__int64* GameHr_12b3420(__int64* result, __int64 a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64* v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64* v45;
  unsigned __int64* v46;
  __int64* v47;
  _QWORD* v48;
  __int64* v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v53;
  unsigned __int64 v54;
  _QWORD* v55;
  _QWORD* v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64* v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v63;
  unsigned __int64 v64;
  _QWORD* v65;
  _QWORD* v66;
  unsigned __int64 v67;
  __int64 v68;
  _QWORD* v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  _QWORD* v77;
  __int64 v78;
  int v79;

  v2 = *(_QWORD*)(a2 + 8);
  v77 = nullptr;
  v78 = 0;
  v75 = 0;
  v76 = 0;
  v4 = result;
  v79 = 1065353216;
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  v6 = *(unsigned __int8*)(v2 + v5);
  *(_DWORD*)(a2 + 20) = v5 + 2;
  v7 = v6 | (*(unsigned __int8*)(v2 + v5 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v5 + 3;
  v8 = *(unsigned __int8*)(v2 + v5 + 2);
  *(_DWORD*)(a2 + 20) = v5 + 4;
  v9 = *result;
  v10 = v7 | (v8 << 16) | (*(unsigned __int8*)(v2 + v5 + 3) << 24);
  v11 = GameData_212bf68;
  if (v10 > (result[2] - *result) >> 3) {
    v12 = result[1] - v9;
    v13 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v10, 16, 0);
    result = (__int64*)GameRoutine_1a0b950(v13, v9, v12);
    *v4 = v13;
    v4[1] = v13 + v12;
    v4[2] = v13 + 8 * v10;
    if (v9 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v14 = 56;
      }
      result = (__int64*)GameRoutine_1a0a4e0(*(_QWORD*)v11 + v14, (_QWORD)(v9));
    }
  }
  v15 = (unsigned __int64)(float)(unsigned int)v10;
  if (v15 == 1) {
    v15 = 2;
  LABEL_11:
    result = (__int64*)GameRoutine_8cfec0(&v75, v15);
    goto LABEL_12;
  }
  if ((v15 & (v15 - 1)) != 0) {
    result = (__int64*)GameRoutine_1a09d00(
        (unsigned __int64)(float)(unsigned int)v10);
    v15 = (unsigned __int64)result;
  }
  if (v15 != 0) {
    goto LABEL_11;
  }
LABEL_12:
  if ((_DWORD)v10 != 0) {
    v16 = 0;
    do {
      v17 = *(int*)(a2 + 20);
      v18 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v17 + 1;
      v19 = *(unsigned __int8*)(v18 + v17);
      *(_DWORD*)(a2 + 20) = v17 + 2;
      v20 = v19 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v17 + 3;
      v21 = v20 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 2) << 16);
      *(_DWORD*)(a2 + 20) = v17 + 4;
      v22 = v21 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 3) << 24);
      *(_DWORD*)(a2 + 20) = v17 + 5;
      v23 = v22 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 4) << 32);
      *(_DWORD*)(a2 + 20) = v17 + 6;
      v24 = v23 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 5) << 40);
      *(_DWORD*)(a2 + 20) = v17 + 7;
      v25 = *(unsigned __int8*)(v18 + v17 + 6);
      *(_DWORD*)(a2 + 20) = v17 + 8;
      v26 = v24 | (v25 << 48) |
            ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 7) << 56);
      v74 = v26;
      if (v76 != 0 && v78 != 0) {
        v27 = v76 - 1;
        if ((v76 & (v76 - 1)) != 0) {
          v28 = v26;
          if (v26 >= v76) {
            v28 = v26 % v76;
          }
        }
        else {
          v28 = v27 & v26;
        }
        v29 = *(_QWORD**)(v75 + 8 * v28);
        if (v29 != nullptr) {
          v30 = (_QWORD*)*v29;
          if (v30 != nullptr) {
            if ((v76 & v27) == 0) {
              while (1) {
                v32 = v30[1];
                if (v26 == v32) {
                  if (v30[2] == v26) {
                    goto LABEL_52;
                  }
                }
                else if ((v32 & v27) != v28) {
                  goto LABEL_35;
                }
                v30 = (_QWORD*)*v30;
                if (v30 == nullptr) {
                  goto LABEL_35;
                }
              }
            }
            do {
              v31 = v30[1];
              if (v26 == v31) {
                if (v30[2] == v26) {
                  goto LABEL_52;
                }
              }
              else {
                if (v31 >= v76) {
                  v31 %= v76;
                }
                if (v31 != v28) {
                  break;
                }
              }
              v30 = (_QWORD*)*v30;
            } while (v30 != nullptr);
          }
        }
      }
    LABEL_35:
      v34 = (unsigned __int64*)v4[1];
      v33 = v4[2];
      if ((unsigned __int64)v34 >= v33) {
        v36 = (_QWORD*)*v4;
        v37 = (__int64)v34 - *v4;
        v38 = (v37 >> 3) + 1;
        if (v38 >> 61 != 0) {
          GameRoutine_12b6e10(result);
        }
        v39 = v33 - (_QWORD)v36;
        if (v39 >> 2 > v38) {
          v38 = v39 >> 2;
        }
        if ((unsigned __int64)v39 >= 0x7FFFFFFFFFFFFFF8LL) {
          v40 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v40 = v38;
        }
        if (v40 != 0) {
          if (v40 >> 61 != 0) {
            GameRoutine_60a210(result);
          }
          v41 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v40, 16, 0);
        }
        else {
          v41 = 0;
        }
        v42 = v41 + 8 * v40;
        v43 = v41 + v37 - 8 * (v37 >> 3);
        *(_QWORD*)(v41 + v37) = v26;
        v35 = v41 + v37 + 8;
        GameRoutine_1a0b950(v43, v36, v37);
        *v4 = v43;
        v4[1] = v35;
        v4[2] = v42;
        if (v36 != nullptr) {
          v44 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v44 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v44, (_QWORD)(v36));
        }
      }
      else {
        *v34 = v26;
        v35 = (__int64)(v34 + 1);
      }
      v4[1] = v35;
      result = GameRoutine_1244680((float*)&v75, &v74, (__int64*)&v74);
    LABEL_52:
      ++v16;
    } while (v16 != (_DWORD)v10);
  }
  v46 = (unsigned __int64*)*v4;
  v45 = (unsigned __int64*)v4[1];
  v47 = GameData_212ccd0[0];
  if ((unsigned __int64*)*v4 != v45) {
    v48 = (_QWORD*)*GameData_212ccd0[0];
    v49 = (__int64*)GameData_212bf68;
    while (1) {
      v50 = *v46;
      if (*v46 == 0) {
        goto LABEL_84;
      }
      v51 = v48[12];
      if (v51 == 0 || v48[14] == 0) {
        goto LABEL_84;
      }
      v53 = v51 - 1;
      if ((v51 & (v51 - 1)) != 0) {
        v54 = *v46;
        if (v50 >= v51) {
          v54 = v50 % v51;
        }
      }
      else {
        v54 = v53 & v50;
      }
      v55 = *(_QWORD**)(v48[11] + 8 * v54);
      if (v55 == nullptr) {
        goto LABEL_84;
      }
      v56 = (_QWORD*)*v55;
      if (v56 == nullptr) {
        goto LABEL_84;
      }
      if ((v51 & v53) == 0) {
        while (1) {
          v58 = v56[1];
          if (v58 == v50) {
            if (v56[2] == v50) {
              goto LABEL_80;
            }
          }
          else if ((v58 & v53) != v54) {
            goto LABEL_84;
          }
          v56 = (_QWORD*)*v56;
          if (v56 == nullptr) {
            goto LABEL_84;
          }
        }
      }
      while (1) {
        v57 = v56[1];
        if (v57 == v50) {
          break;
        }
        if (v57 >= v51) {
          v57 %= v51;
        }
        if (v57 != v54) {
          goto LABEL_84;
        }
      LABEL_69:
        v56 = (_QWORD*)*v56;
        if (v56 == nullptr) {
          goto LABEL_84;
        }
      }
      if (v56[2] != v50) {
        goto LABEL_69;
      }
    LABEL_80:
      if (v56[3] == 0) {
        goto LABEL_84;
      }
      if (++v46 == v45) {
        goto LABEL_118;
      }
    }
  }
  v49 = &GameData_2265ee0;
LABEL_84:
  if (v46 != v45) {
    v59 = v46 + 1;
    if (v46 + 1 != v45) {
      do {
        v60 = *v59;
        if (*v59 != 0) {
          v61 = *(_QWORD*)(*v47 + 96);
          if (v61 != 0 && *(_QWORD*)(*v47 + 112) != 0) {
            v63 = v61 - 1;
            if ((v61 & (v61 - 1)) != 0) {
              v64 = *v59;
              if (v60 >= v61) {
                v64 = v60 % v61;
              }
            }
            else {
              v64 = v63 & v60;
            }
            v65 = *(_QWORD**)(*(_QWORD*)(*v47 + 88) + 8 * v64);
            if (v65 != nullptr) {
              v66 = (_QWORD*)*v65;
              if (v66 != nullptr) {
                if ((v61 & v63) == 0) {
                  while (1) {
                    v68 = v66[1];
                    if (v68 == v60) {
                      if (v66[2] == v60) {
                        goto LABEL_113;
                      }
                    }
                    else if ((v68 & v63) != v64) {
                      goto LABEL_87;
                    }
                    v66 = (_QWORD*)*v66;
                    if (v66 == nullptr) {
                      goto LABEL_87;
                    }
                  }
                }
                do {
                  v67 = v66[1];
                  if (v67 == v60) {
                    if (v66[2] == v60) {
                    LABEL_113:
                      if (v66[3] != 0) {
                        *v46++ = v60;
                      }
                      break;
                    }
                  }
                  else {
                    if (v67 >= v61) {
                      v67 %= v61;
                    }
                    if (v67 != v64) {
                      break;
                    }
                  }
                  v66 = (_QWORD*)*v66;
                } while (v66 != nullptr);
              }
            }
          }
        }
      LABEL_87:
        ++v59;
      } while (v59 != v45);
      v45 = (unsigned __int64*)v4[1];
    }
  }
  if (v46 != v45) {
    v4[1] = (__int64)v46;
  }
LABEL_118:
  v69 = v77;
  if (v77 != nullptr) {
    do {
      v70 = (_QWORD*)*v69;
      if (*(_QWORD*)(*v49 + 200) != 0) {
        v71 = 128;
      }
      else {
        v71 = 56;
      }
      result = (__int64*)GameRoutine_1a0a4e0(*v49 + v71, (_QWORD)(v69));
      v69 = v70;
    } while (v70 != nullptr);
  }
  v72 = v75;
  v75 = 0;
  if (v72 != 0) {
    v73 = 128;
    if (*(_QWORD*)(*v49 + 200) == 0) {
      v73 = 56;
    }
    return (__int64*)GameRoutine_1a0a4e0(*v49 + v73, (_QWORD)(v72));
  }
  return result;
}

__int64 GameHr_12b8260(__int64 result, __int64* a2, unsigned __int64 a3,
                       __int64* a4)
{
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned __int64 v28;
  __int64 v29;
  __int64* v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  __int64 v44;
  __int64 v45;

  switch (a3) {
  case 0uLL:
    return result;
  case 2uLL:
    v4 = *(a2 - 1);
    v5 = *(unsigned __int8*)(v4 + 8);
    v6 = *(unsigned __int8*)(*(_QWORD*)result + 8LL);
    v7 = v6 & 0xFE;
    if ((v5 & 0xFE) == 4) {
      if (v7 == 4 && v5 < v6) {
        goto LABEL_10;
      }
    }
    else if (v7 == 4) {
    LABEL_10:
      *a4 = v4;
      v9 = *(_QWORD*)result;
    LABEL_39:
      a4[1] = v9;
      return result;
    }
    *a4 = *(_QWORD*)result;
    v9 = *(a2 - 1);
    goto LABEL_39;
  case 1uLL:
    *a4 = *(_QWORD*)result;
    return result;
  default:
    break;
  }
  if ((__int64)a3 <= 8) {
    if ((__int64*)result == a2) {
      return result;
    }
    v10 = *(_QWORD*)result;
    result += 8;
    *a4 = v10;
    if ((__int64*)result == a2) {
      return result;
    }
    v11 = 0;
    v12 = a4;
    v13 = a4;
  LABEL_18:
    v16 = *v13++;
    v15 = v16;
    v17 = *(unsigned __int8*)(*(_QWORD*)result + 8LL);
    v18 = *(unsigned __int8*)(v16 + 8);
    v19 = v18 & 0xFE;
    if ((v17 & 0xFE) == 4) {
      if (v19 != 4 || v17 >= v18) {
      LABEL_35:
        *v13 = *(_QWORD*)result;
        goto LABEL_17;
      }
    }
    else if (v19 != 4) {
      goto LABEL_35;
    }
    v12[1] = v15;
    v14 = a4;
    if (v12 == a4) {
      goto LABEL_16;
    }
    v21 = v11;
    while (1) {
      v22 = (__int64*)((char*)a4 + v21);
      v23 = *(__int64*)((char*)a4 + v21 - 8);
      v24 = *(unsigned __int8*)(*(_QWORD*)result + 8LL);
      v25 = *(unsigned __int8*)(v23 + 8);
      v26 = v25 & 0xFE;
      if ((v24 & 0xFE) == 4) {
        if (v26 != 4 || v24 >= v25) {
          v14 = v12;
          goto LABEL_16;
        }
      }
      else if (v26 != 4) {
        v14 = (__int64*)((char*)a4 + v21);
      LABEL_16:
        *v14 = *(_QWORD*)result;
      LABEL_17:
        result += 8;
        v11 += 8;
        v12 = v13;
        if ((__int64*)result == a2) {
          return result;
        }
        goto LABEL_18;
      }
      --v12;
      v21 -= 8;
      *v22 = v23;
      if (v21 == 0) {
        v14 = a4;
        goto LABEL_16;
      }
    }
  }
  v28 = a3 >> 1;
  v29 = result;
  v33 = (__int64*)(result + 8 * (a3 >> 1));
  v34 = 8 * (a3 >> 1);
  GameRoutine_12b7f80(result, v33, v28, a4, v28);
  result = GameRoutine_12b7f80((__int64)v33, a2, a3 - v28, &a4[v28], a3 - v28);
  if (v34 != 0) {
    v35 = v33;
    v36 = a4;
    v37 = a2;
    v38 = (__int64*)v29;
    while (1) {
      if (v35 == a2) {
        while (v38 != v33) {
          v44 = *v38++;
          *v36++ = v44;
        }
        return result;
      }
      v39 = *v35;
      v40 = *(unsigned __int8*)(*v35 + 8);
      v41 = *(unsigned __int8*)(*v38 + 8);
      v42 = v41 & 0xFE;
      if ((v40 & 0xFE) == 4) {
        if (v42 != 4 || v40 >= v41) {
        LABEL_53:
          *v36 = *v38++;
          goto LABEL_43;
        }
      }
      else if (v42 != 4) {
        goto LABEL_53;
      }
      ++v35;
      *v36 = v39;
    LABEL_43:
      ++v36;
      if (v38 == v33) {
        goto LABEL_59;
      }
    }
  }
  v35 = v33;
  v36 = a4;
  v37 = a2;
LABEL_59:
  while (v35 != v37) {
    v45 = *v35++;
    *v36++ = v45;
  }
  return result;
}

__int64 GameHr_12c4be0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  bool v14;
  __int64 v15;
  unsigned __int64 v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  struct {
    __int64 v25;
    int v26;
    int v27;
  } v25_;
  struct {
    __int64 v28;
    __int64 v29;
    __int64 v30;
  } v28_;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 392LL);
  result = game_GetHero(1u);
  if (v2 == result) {
    GameHr_12c45b0(&v28_.v28, *(_QWORD*)(a1 + 8), 0);
    v22 = *(_QWORD*)(a1 + 8);
    HIWORD(v25_.v27) = 0;
    if ((GameRoutine_12c4780(&v28_.v28, *(_QWORD*)(v22 + 400),
                             (__int64)&v25_.v25) &
         1) != 0) {
      *(_QWORD*)(a1 + 96) = v25_.v25;
      v23 = v25_.v27;
      *(_DWORD*)(a1 + 104) = v25_.v26;
      *(_DWORD*)(a1 + 108) = v23;
    }
    if (v28_.v30 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v28_.v30);
    }
    result = v28_.v29;
    if (v28_.v29 != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)v28_.v29 + 8LL))(v28_.v29);
    }
  }
  else {
    v4 = *(_QWORD*)(a1 + 8);
    if (*(_BYTE*)(v4 + 1880) != 0) {
      v5 = *(_QWORD*)(v4 + 400);
      v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                      8LL * *(unsigned __int8*)(v4 + 1880));
      if (v6 != 0 && *(_BYTE*)(v5 + 96) == 2) {
        v8 = *(_QWORD*)(v5 + 112);
        if (v8 != 0 &&
            *(unsigned __int8*)(v6 + 32) == *(unsigned __int8*)(v8 + 32)) {
          *(_QWORD*)(a1 + 96) = v6;
          v9 = *(_QWORD*)(v4 + 392);
          if (v9 != 0) {
            v10 = *(_QWORD*)(v4 + 1904);
            if (v10 == 0) {
              goto LABEL_22;
            }
            v11 = v4 + 1904;
            v12 = *(unsigned __int8*)(v9 + 48);
            v9 = v11;
            do {
              v13 = *(unsigned __int8*)(v10 + 26);
              v14 = v13 >= v12;
              if (v13 >= v12) {
                v15 = 0;
              }
              else {
                v15 = 8;
              }
              if (v14) {
                v9 = v10;
              }
              v10 = *(_QWORD*)(v10 + v15);
            } while (v10 != 0);
            if (v9 != v11 && v12 >= *(unsigned __int8*)(v9 + 26)) {
              LODWORD(v9) = *(_WORD*)(v9 + 28) & 0xFFF;
            }
            else {
            LABEL_22:
              LODWORD(v9) = 0;
            }
          }
          v16 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
          if ((int)v16 < 1) {
            v17 = 0;
          }
          else {
            v17 = 0;
            v18 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v16 - 1));
            if (v18 >= (int)v9) {
              v18 = v9;
            }
            if ((int)v9 >= (signed __int32)*(_DWORD*)GameData_21d9988) {
              v19 = v18;
            }
            else {
              v19 = *(_DWORD*)GameData_21d9988;
            }
            while (1) {
              v20 = (unsigned int)(v17 + v16) >> 1;
              v21 = *(_DWORD*)(GameData_21d9988 + 4LL * v20);
              if (v19 == v21) {
                break;
              }
              if (v19 < v21) {
                LODWORD(v16) = (unsigned int)(v17 + v16) >> 1;
              }
              else {
                v17 = v20 + 1;
              }
              if (v17 >= (int)v16) {
                goto LABEL_45;
              }
            }
            v17 = v20 + 1;
          }
        LABEL_45:
          *(_DWORD*)(a1 + 104) = v17;
          *(_DWORD*)(a1 + 108) = 1;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_12eae80(__int64 result, __int64* a2, unsigned __int64 a3,
                       __int64* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  switch (a3) {
  case 0uLL:
    return result;
  case 2uLL:
    v4 = *(a2 - 1);
    v5 = *(_QWORD*)result;
    if ((*(_WORD*)(v4 + 40) != 0) !=
        (*(_WORD*)(*(_QWORD*)result + 40LL) != 0)) {
      if (*(_WORD*)(v4 + 40) != 0) {
      LABEL_7:
        *a4 = v4;
        v6 = *(_QWORD*)result;
      LABEL_29:
        a4[1] = v6;
        return result;
      }
    }
    else if (*(unsigned __int16*)(v4 + 16) <
             (unsigned int)*(unsigned __int16*)(v5 + 16)) {
      goto LABEL_7;
    }
    *a4 = v5;
    v6 = *(a2 - 1);
    goto LABEL_29;
  case 1uLL:
    *a4 = *(_QWORD*)result;
    return result;
  default:
    break;
  }
  if ((__int64)a3 <= 8) {
    if ((__int64*)result == a2) {
      return result;
    }
    v7 = *(_QWORD*)result;
    result += 8;
    *a4 = v7;
    if ((__int64*)result == a2) {
      return result;
    }
    v8 = 0;
    v9 = a4;
    v10 = a4;
  LABEL_15:
    v12 = *(_QWORD*)result;
    v14 = *v10++;
    v13 = v14;
    if ((*(_WORD*)(*(_QWORD*)result + 40LL) != 0) !=
        (*(_WORD*)(v14 + 40) != 0)) {
      if (*(_WORD*)(*(_QWORD*)result + 40LL) == 0) {
        goto LABEL_25;
      }
    }
    else if (*(unsigned __int16*)(v12 + 16) >=
             (unsigned int)*(unsigned __int16*)(v13 + 16)) {
    LABEL_25:
      *v10 = v12;
      goto LABEL_14;
    }
    v9[1] = v13;
    v11 = a4;
    if (v9 == a4) {
      goto LABEL_13;
    }
    v15 = v8;
    while (1) {
      v16 = (__int64*)((char*)a4 + v15);
      v17 = *(__int64*)((char*)a4 + v15 - 8);
      if ((*(_WORD*)(*(_QWORD*)result + 40LL) != 0) !=
          (*(_WORD*)(v17 + 40) != 0)) {
        if (*(_WORD*)(*(_QWORD*)result + 40LL) == 0) {
          v11 = (__int64*)((char*)a4 + v15);
        LABEL_13:
          *v11 = *(_QWORD*)result;
        LABEL_14:
          result += 8;
          v8 += 8;
          v9 = v10;
          if ((__int64*)result == a2) {
            return result;
          }
          goto LABEL_15;
        }
      }
      else if (*(unsigned __int16*)(*(_QWORD*)result + 16LL) >=
               (unsigned int)*(unsigned __int16*)(v17 + 16)) {
        v11 = v9;
        goto LABEL_13;
      }
      --v9;
      v15 -= 8;
      *v16 = v17;
      if (v15 == 0) {
        v11 = a4;
        goto LABEL_13;
      }
    }
  }
  v18 = a3 >> 1;
  v19 = result;
  v23 = (__int64*)(result + 8 * (a3 >> 1));
  v24 = 8 * (a3 >> 1);
  GameRoutine_12eaba0(result, v23, v18, a4, v18);
  result = GameRoutine_12eaba0((__int64)v23, a2, a3 - v18, &a4[v18], a3 - v18);
  if (v24 != 0) {
    v25 = v23;
    v26 = a4;
    v27 = a2;
    v28 = (__int64*)v19;
    while (1) {
      if (v25 == a2) {
        while (v28 != v23) {
          v31 = *v28++;
          *v26++ = v31;
        }
        return result;
      }
      v29 = *v25;
      v30 = *v28;
      if ((*(_WORD*)(*v25 + 40) != 0) != (*(_WORD*)(*v28 + 40) != 0)) {
        if (*(_WORD*)(*v25 + 40) == 0) {
          goto LABEL_38;
        }
      }
      else if (*(unsigned __int16*)(v29 + 16) >=
               (unsigned int)*(unsigned __int16*)(v30 + 16)) {
      LABEL_38:
        *v26 = v30;
        ++v28;
        goto LABEL_34;
      }
      ++v25;
      *v26 = v29;
    LABEL_34:
      ++v26;
      if (v28 == v23) {
        goto LABEL_44;
      }
    }
  }
  v25 = v23;
  v26 = a4;
  v27 = a2;
LABEL_44:
  while (v25 != v27) {
    v32 = *v25++;
    *v26++ = v32;
  }
  return result;
}

__int64 GameHr_12f4020(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  _DWORD* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;

  LODWORD(v15) = 17;
  result = game_UnitPool_GetFirst((int*)&v15);
  if (result != 0) {
    v3 = *(_QWORD*)(result + 432);
    v4 = result;
    if (v3 == 0) {
      v3 = *(_QWORD*)(result + 440);
      if (v3 != 0) {
        v5 = *(unsigned __int8*)(v3 + 16);
        if (v5 <= 8) {
          v14 = v5 - 3;
          while (1) {
            if (v14 == 0) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v3 != 0) {
                break;
              }
            }
            if (++v14 == 6) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v3 = 0;
        }
      }
    }
    v6 = (_DWORD*)game_g_shared_system_skills_ptr;
    while (1) {
    LABEL_8:
      v7 = v3;
      LODWORD(v15) = *v6 & 0xFFF;
      result = game_HasSkill((_QWORD*)(v4 + 1744), (unsigned int*)&v15);
      if ((result & 1) != 0 &&
          ((v8 = *(_QWORD*)(v4 + 440)) == 0 ? (v9 = 9)
                                            : (v9 = *(_BYTE*)(v8 + 16)),
           ((1 << v9) & 0xF1) != 0)) {
        if (v7 == 0) {
          return result;
        }
      }
      else {
        v10 = *(_QWORD*)(a1 + 32);
        v15 = v4;
        if (v10 == 0) {
          GameRoutine_60a310_alt1();
        }
        result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v10 + 48LL))(
            v10, &v15);
        if (v7 == 0 || (_DWORD)result == 1) {
          return result;
        }
      }
      v3 = *(_QWORD*)(v7 + 432);
      v4 = v7;
      if (v3 == 0) {
        v11 = *(_QWORD*)(v7 + 440);
        v4 = v7;
        if (v11 != 0) {
          v12 = *(unsigned __int8*)(v11 + 16);
          v3 = 0;
          v4 = v7;
          if (v12 <= 8) {
            v13 = v12 - 3;
            while (1) {
              if (v13 == 0) {
                v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v3 != 0) {
                  break;
                }
              }
              if (++v13 == 6) {
                v3 = 0;
                v4 = v7;
                goto LABEL_8;
              }
            }
            v4 = v7;
          }
        }
      }
    }
  }
  return result;
}

bool GameHr_1307960(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  __int64* v12;
  __int64 v13;
  unsigned int v14;
  unsigned __int16* v15;
  __int64 v16;
  unsigned int v17;
  unsigned __int16* v18;

  v2 = a2 + 828;
  v5 = GameRoutine_13080e0(a2, a2 + 828);
  if ((v5 & 0x80000000) == 0) {
    v6 = v5;
    v7 = GameRoutine_1307600(a2, v2, v5, a1);
    if ((v7 & 0x80000000) == 0) {
      v8 = v7;
      v9 = 0;
      v10 = v6;
      v11 = v7;
      v12 = GameData_212c878[0];
      while (v10 != -1) {
        if (v11 == -1 ||
            ((*(_QWORD*)(a1 + 8LL * v11) ^ *(_QWORD*)(v2 + 8LL * v10)) &
             0xFFFFFFFFFEFFFFFFLL) != 0) {
          return true;
        }
        if (v10 <= 4) {
          ++v10;
        }
        else {
          v10 = 0;
        }
        if (v10 != v6) {
          v16 = *v12;
          v17 = 0;
          do {
            v18 = (unsigned __int16*)(v2 + 8LL * v10);
            if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v16 + 64) +
                                               8LL * *v18) +
                                    72LL) > 7u) {
              if (v17 > 0x1C) {
                goto LABEL_14;
              }
            }
            else {
              if ((GameRoutine_6e8bc0(v18, a2) & 1) != 0 || v17 > 0x1C) {
                goto LABEL_14;
              }
              v16 = *v12;
            }
            ++v17;
            if ((int)v10 <= 4) {
              ++v10;
            }
            else {
              v10 = 0;
            }
          } while (v10 != v6);
        }
        v10 = -1;
      LABEL_14:
        if (v11 <= 4) {
          ++v11;
        }
        else {
          v11 = 0;
        }
        if (v11 != v8) {
          v13 = *v12;
          v14 = 0;
          do {
            v15 = (unsigned __int16*)(a1 + 8LL * v11);
            if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v13 + 64) +
                                               8LL * *v15) +
                                    72LL) > 7u) {
              if (v14 > 0x1C) {
                goto LABEL_5;
              }
            }
            else {
              if ((GameRoutine_6e8bc0(v15, a2) & 1) != 0 || v14 > 0x1C) {
                goto LABEL_5;
              }
              v13 = *v12;
            }
            ++v14;
            if ((int)v11 <= 4) {
              ++v11;
            }
            else {
              v11 = 0;
            }
          } while (v11 != v8);
        }
        v11 = -1;
      LABEL_5:
        if (++v9 == 30) {
          return false;
        }
      }
      if (v11 == -1) {
        return false;
      }
    }
    return true;
  }
  return (GameRoutine_13080e0(a2, a1) & 0x80000000) == 0;
}

__int64 GameHr_13176d0(__int64 a1, long double a2, double a3, long double a4)
{
  __int64* v4;
  float v6;
  float v7;
  int v8;
  float v9;
  float v10;
  __int64 result;
  __int64 v12;
  __int64* v13;
  int v14;

  v4 = (__int64*)(a1 + 656);
  if (*(float*)(a1 + 668) == *(float*)(a1 + 664)) {
    (*(void (**)(__int64))(*v4 + 16))(a1 + 656);
  }
  else {
    LODWORD(a2) = *(_DWORD*)(a1 + 688);
  }
  v6 = 1.0;
  v7 = 0.0;
  v8 = *(_DWORD*)(a1 + 960);
  LODWORD(a4) = COERCE_UNSIGNED_INT((float)(0.75));
  if (*(float*)&a2 <= 1.0) {
    v6 = *(float*)&a2;
  }
  if (*(float*)&a2 >= 0.0) {
    *(float*)&a2 = v6;
  }
  else {
    *(float*)&a2 = 0.0;
  }
  v9 = 0.15;
  v14 = LODWORD(a2);
  if (v8 != 2) {
    v9 = 0.75;
  }
  if (v8 == 3) {
    v10 = 0.0;
  }
  else {
    v10 = v9;
  }
  if (*(_BYTE*)(a1 + 680) == 1) {
    result = (*(__int64 (**)(__int64*, long double, float, long double))(
        *v4 + 24))(v4, a2, *(float*)&a2, a4);
  }
  else {
    if (v10 >= *(float*)(a1 + 664)) {
      result = (*(__int64 (**)(__int64*, int*, __int64))(
          *(_QWORD*)(a1 + 656) + 8LL))(v4, &v14, a1 + 688);
      if ((result & 1) == 0) {
        return result;
      }
      (*(void (**)(__int64*))(*v4 + 16))(v4);
      v12 = *v4;
      v13 = v4;
    }
    else {
      (*(void (**)(__int64*))(*v4 + 16))(v4);
      v12 = *v4;
      v13 = v4;
    }
    result = (*(__int64 (**)(__int64*))(v12 + 24))(v13);
    v7 = v10;
  }
  *(float*)(a1 + 664) = v7;
  *(_DWORD*)(a1 + 668) = 0;
  *(_WORD*)(a1 + 680) = 256;
  return result;
}

#pragma GCC visibility pop
