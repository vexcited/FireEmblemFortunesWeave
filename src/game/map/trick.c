#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_7c41f0(__int64, int, int);
__int64 GameRoutine_68e5e0(_QWORD, _QWORD);
__int64 GameRoutine_7d5160(_QWORD, _QWORD);
__int64 MapUtil_753570(_QWORD, _QWORD);
__int64 Trick_7d2180_alt1(_QWORD, _QWORD, _QWORD,
                          _QWORD) __asm__("Trick_7d2180");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f9a818[])();
extern __int64 (*GameData_1f9a868[])();
extern __int64 (*GameData_1f9a940[])();
extern __int64 (*GameData_1f9b218[])();
extern __int64 (*GameData_1f9b728[])();
extern __int64 (*GameData_1f9b7a8[])();
extern __int64 (*GameData_1f9b998[])();
extern __int64 (*GameData_1f9ba28[])();
extern __int64 GameData_21ca2e8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd158;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c930;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern int GameData_21d9954;
extern unsigned __int8 GameData_1b41aa9[22];
extern unsigned __int8 GameData_1b41abf[17];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_7d18f0(_QWORD);
__int64 Trick_Destructor(_QWORD* a1);
__int64 Trick_DeletingDestructor(_QWORD* a1);
__int64 game_map_Trick_Impl_EachDanger_alt1(__int64 a1, __int64 a2) __asm__(
    "game_map_Trick_Impl_EachDanger");
__int64 Trick_7cb0c0(__int64 a1);
__int64 Trick_Unknown3_alt1(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6) __asm__("Trick_Unknown3");
__int64 Trick_Unknown6(__int64 result, __int64 a2);
__int64 Trick_Unknown2(__int64 result, __int64 a2);
__int64 game_map_Trick_Impl_CanPut_closure_Invoke(__int64 a1, unsigned int* a2,
                                                  unsigned int* a3);
__int64 Trick_7d2180_alt2(__int64 a1, unsigned int a2, unsigned int a3,
                          __int64 a4) __asm__("Trick_7d2180");
__int64 game_map_Trick_Impl_TryDelete_closure_Invoke(__int64 result, _DWORD* a2,
                                                     _DWORD* a3);
__int64 game_map_Trick_Impl_UpdateMap_closure_Invoke_7d2990(__int64 a1,
                                                            _QWORD* a2);
__int64 game_map_Trick_Impl_UpdateMap_closure_Invoke_7d2b40(__int64 a1,
                                                            _DWORD* a2,
                                                            _DWORD* a3);
__int64 game_map_Trick_Impl_UpdateLink_closure_Invoke_7d2c90(__int64 a1,
                                                             _QWORD* a2);
__int64 game_map_Trick_Impl_EachBreakable_closure_Invoke(__int64 a1,
                                                         _QWORD* a2);
__int64 game_map_Trick_Impl_EachDanger_closure_Invoke(__int64 a1, _QWORD* a2);
_QWORD* game_map_Trick_Impl_EachCoveredCharacter_closure_Clone(__int64 a1);
__int64 game_map_Trick_Impl_EachCoveredCharacter_closure_Invoke(__int64 result,
                                                                __int64 a2,
                                                                __int64 a3);
_QWORD* game_map_Trick_Impl_UpdateLink(_QWORD* a1, __int64 a2);
__int64 game_map_Trick_Impl_UpdateMap_closure_Invoke_7d4d10(__int64 a1,
                                                            _QWORD** a2);
__int64 game_map_Trick_Impl_UpdateMap_closure_Invoke_7d4e80(__int64 a1, int* a2,
                                                            int* a3);
__int64 game_map_Trick_Impl_UpdateLink_closure_Invoke_7d4fe0(__int64 a1,
                                                             _QWORD* a2);
__int64 game_map_Trick_Impl_TryCommit_closure_Invoke(__int64 result, int* a2,
                                                     int* a3);
__int64 game_map_Trick_Impl_TryCommit_closure0_Invoke(__int64 a1, int* a2,
                                                      int* a3);
extern int GameData_21cfa70;
__attribute__((swiftcall)) void Trick_7cb2a0(PSEUDO_X8 x8_, __int64 result,
                                             int a2, int a3);
__int64 GameRoutine_74e080(_QWORD, _QWORD);
__int64 game_map_7d1920(_QWORD, _QWORD);
__int64 game_map_Trick_Impl_UpdateLink_alt1(_QWORD) __asm__(
    "game_map_Trick_Impl_UpdateLink");
__int64 game_map_anonymous_RegistPosList_Search(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD);
extern _BYTE GameData_1b41aa9_alt1[22] __asm__("GameData_1b41aa9");
extern __int64 (*GameData_1f9b8a8[])();
extern __int64 (*GameData_1f9b928[])();
extern __int64 GameData_21ca100;
extern __int64 GameData_21ca108;
extern __int64 GameData_21ca118;
extern __int64 GameData_21ca120;
extern __int64 GameData_21ca130;
extern __int64 game_map_g_hint_data;
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD, _QWORD) __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_74e1f0(_QWORD);
__int64 Trick_7ca860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6);
__int64 MapUtil_753570_alt1(int, int) __asm__("MapUtil_753570");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
bool GameRoutine_68e5e0_alt1(__int64, __int64) __asm__("GameRoutine_68e5e0");
void __attribute__((noreturn))
GameRoutine_60a310_alt2() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_map_Trick_Impl_EachDanger(__int64 a1, __int64 a2);
__int64 Trick_7d2180(__int64 a1, int a2, int a3, __int64 a4);
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 Trick_Unknown3(__int64 a1);

__int64 Trick_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = GameData_1f9a818;
  a1[1] = GameData_1f9a868;
  result = a1[2];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    a1[2] = 0;
  }
  *a1 = GameData_1f9a940;
  if ((_QWORD*)GameData_21cd158 == a1) {
    GameData_21cd158 = 0;
    GameData_21d9954 = 0;
  }
  return result;
}

__int64 Trick_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = GameData_1f9a818;
  a1[1] = GameData_1f9a868;
  v2 = a1[2];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[2] = 0;
  }
  *a1 = GameData_1f9a940;
  if ((_QWORD*)GameData_21cd158 == a1) {
    GameData_21cd158 = 0;
    GameData_21d9954 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

void game_map_Trick_Impl_EachDanger(__int64 a1, __int64 a2)
{
  __int64 v4;
  _WORD* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  __int64 v20;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = (_WORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 2, 16, 0),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = *(__int64**)(a1 + 18848);
  v8 = (__int64)v5;
  *v5 = 1549;
  v18_.v18[0] = GameData_1f9b728;
  v18_.v18[1] = a2;
  v9 = *(__int64**)(a1 + 18856);
  v18_.v19 = v18_.v18;
  if (v9 == v7) {
    v11 = 6;
  }
  else {
    do {
      v10 = *v7++;
      v20 = v10;
      if (v18_.v19 == nullptr) {
        goto LABEL_17;
      }
      (*(void (**)(_QWORD*, __int64*))(*v18_.v19 + 48LL))(v18_.v19, &v20),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    } while (v7 != v9);
    v11 = *(unsigned __int8*)(v8 + 1);
  }
  v12 = a1 + 18536 + 24LL * v11;
  v14 = *(__int64**)v12;
  v13 = *(__int64**)(v12 + 8);
  if (v13 != *(__int64**)v12) {
    while (1) {
      v15 = *v14++;
      v20 = v15;
      if (v18_.v19 == nullptr) {
        break;
      }
      (*(void (**)(_QWORD*, __int64*))(*v18_.v19 + 48LL))(v18_.v19, &v20),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v14 == v13) {
        goto LABEL_9;
      }
    }
  LABEL_17:
    GameRoutine_60a310_alt2(),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_9:
  if (v18_.v19 == v18_.v18) {
    v16 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_14;
    }
    v16 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v18_.v19 + v16))(v18_.v19, v6),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_14:
  v17 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v17 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v17, v8),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
}

__int64 Trick_7ca860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6)
{
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
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
  char** v23;
  char** v24;
  _QWORD* v25;
  char* v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  char* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64* v34;
  bool v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  char* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  char* v47;
  char* v48;
  char* v49;
  char* v50;
  char v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char v55;
  char* v56;
  char* v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  bool v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  char* v74;
  char* v75;
  int v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  char* v80;
  char* v81;
  unsigned int v82;
  unsigned int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  char v87;
  char v88;
  char* v89;
  unsigned int v90;
  unsigned int v91;
  __int64* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  char* v100;
  __int64 v101;
  _QWORD v102[4];
  _QWORD* v103;
  char* v104;
  __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  char v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int16 v114;
  unsigned __int64 v115;
  int v116;
  char* v117;
  char* v118;
  __int64 v119;
  unsigned __int64 v120;
  __int64 v121;
  _QWORD v122[4];
  _QWORD* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  int v135;
  int v136[3];

  v6 = *(__int64**)(a1 + 32);
  v7 = *(__int64**)(a1 + 40);
  v8 = a1;
  if (v6 != v7) {
    do {
      v9 = *v6++;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 720LL))(v9);
    } while (v6 != v7);
    v6 = *(__int64**)(v8 + 32);
  }
  *(_QWORD*)(v8 + 40) = v6;
  *(_BYTE*)(v8 + 92848) = 0;
  memset(v8 + 104, 255, 18432, a4, a5, a6);
  v10 = (unsigned __int8*)*GameData_212ce98[0];
  v14 = memset(*(_QWORD*)(*GameData_212ce98[0] + 48) + 8LL, 0, 2048, v11, v12,
               v13);
  if (HIDWORD(game_map_g_hint_data) * (int)game_map_g_hint_data < 1 ||
      GameData_21ca108 - GameData_21ca100 != 2048 ||
      GameData_21ca120 - GameData_21ca118 != 2048) {
    goto LABEL_12;
  }
  v133 = 0;
  v134 = 0;
  v131 = 0;
  v132 = 0;
  v129 = 0;
  v130 = 0;
  v127 = 0;
  v128 = 0;
  v125 = 0;
  v126 = 0;
  v123 = nullptr;
  v124 = 0;
  v18 = v10[29];
  v19 = v10[31];
  v20 = v10[28];
  v21 = v10[30];
  __builtin_memset(v122, 0, sizeof(v122));
  if ((unsigned int)v18 > (unsigned int)v19 ||
      (unsigned int)v20 > (unsigned int)v21) {
    goto LABEL_12;
  }
  v31 = nullptr;
  v32 = 0;
  v33 = 0;
  v34 = GameData_212c930;
  v97 = v19;
  v98 = v20;
  while (2) {
    v36 = 32 * v18;
    v101 = v18;
    while (2) {
      if (((*((_DWORD*)v122 + ((unsigned int)(v20 + v36) >> 5)) >> v20) & 1) !=
          0) {
        goto LABEL_27;
      }
      if (*(_WORD*)(GameData_21ca130 + 2 * (v20 + v36)) == 0) {
        goto LABEL_27;
      }
      v37 = *(_QWORD*)(*(_QWORD*)(*v34 + 64) +
                       8LL * *(unsigned __int16*)(GameData_21ca130 +
                                                  2 * (v20 + v36)));
      if (v37 == 0 ||
          GameData_1b41aa9_alt1[*(unsigned __int8*)(v37 + 57)] == 0) {
        goto LABEL_27;
      }
      if (GameData_1b41aa9_alt1[*(unsigned __int8*)(v37 + 57)] == 7) {
        if (v32 < v33) {
          *(_BYTE*)v32 = v20;
          *(_BYTE*)(v32 + 1) = v18;
          *(_WORD*)(v32 + 2) = 0;
          v32 += 4LL;
        }
        else {
          v38 = v32 - (_QWORD)v31;
          v39 = (__int64)(v32 - (_QWORD)v31) >> 2;
          v40 = v39 + 1;
          if ((unsigned __int64)(v39 + 1) >> 62 != 0) {
            GameRoutine_74e1f0(v14);
          }
          v41 = v33 - (_QWORD)v31;
          v42 = v8;
          v43 = v31;
          v44 = (__int64)(v33 - (_QWORD)v31) >> 1;
          if (v44 > v40) {
            v40 = v44;
          }
          if (v41 >= 0x7FFFFFFFFFFFFFFCLL) {
            v45 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v45 = v40;
          }
          if (v45 >> 62 != 0) {
            GameRoutine_60a210(v14);
          }
          v14 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v45, 16, 0);
          v46 = v14 + v38;
          v18 = v101;
          v47 = v43;
          v48 = (char*)(v46 - 4 * v39);
          *(_BYTE*)v46 = v20;
          *(_WORD*)(v46 + 2) = 0;
          *(_BYTE*)(v46 + 1) = v101;
          if (v43 != (char*)v32) {
            v49 = v43;
            v50 = v48;
            do {
              *v50 = *v49;
              v50[1] = v49[1];
              v50[2] = v49[2];
              v51 = v49[3];
              v49 += 4;
              v50[3] = v51;
              v50 += 4;
            } while (v49 != (char*)v32);
          }
          v33 = v14 + 4 * v45;
          v32 = v46 + 4;
          v8 = v42;
          if (v47 != nullptr) {
            v52 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v52 = 56;
            }
            v14 = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v52, v47);
          }
          v31 = v48;
          v34 = GameData_212c930;
        }
        goto LABEL_27;
      }
      v99 = v33;
      v100 = v31;
      v117 = nullptr;
      v118 = nullptr;
      v121 = 0;
      v119 = 0;
      v120 = -1;
      if ((*(_BYTE*)(v37 + 216) & 2) != 0) {
        v14 = game_map_anonymous_RegistPosList_Search(
            &v117, &game_map_g_hint_data, v37, (unsigned int)v20,
            (unsigned int)v18);
        v57 = v117;
        v56 = v118;
        if (v118 == v117) {
          goto LABEL_88;
        }
      }
      else {
        v120 = __PAIR64__(v18, v20);
        v53 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
        v121 = 0x100000001LL;
        v54 = fw_memory_HeapManager_Allocate(v53, 4, 16, 0);
        v55 = v18;
        v56 = (char*)(v54 + 4);
        v57 = (char*)v54;
        *(_BYTE*)v54 = v20;
        *(_BYTE*)(v54 + 1) = v55;
        *(_WORD*)(v54 + 2) = 0;
        v117 = (char*)v54;
        v118 = (char*)(v54 + 4);
        v119 = v54 + 4;
      }
      v104 = nullptr;
      v105 = 0;
      v115 = 0;
      v116 = 0;
      v106 = 0;
      v107 = -1;
      v110 = 9;
      v108 = 0;
      v109 = 0;
      v111 = 0;
      v112 = 0;
      v113 = 0;
      v114 = 0;
      while (v57 != v56) {
        if ((unsigned __int64)(v105 - (_QWORD)v104) <= 0x3FF) {
          v59 = *v57;
          v60 = v57[1];
          v61 = v107;
          if ((v107 & 0x80000000) == 0) {
            v62 = v108;
            v63 = v107 - v59;
            v64 = v108;
            if ((int)v107 > v59) {
              v64 = v108 + v63;
              LODWORD(v107) = *v57;
              LODWORD(v108) = v108 + v63;
            }
            v65 = v61 + v62 - 1;
            v66 = __OFSUB__(v59, v65);
            v67 = v59 - v65;
            if (!((v67 < 0) ^ v66 | (v67 == 0))) {
              LODWORD(v108) = v67 + v64;
            }
            v68 = HIDWORD(v107);
            v69 = HIDWORD(v108);
            v70 = HIDWORD(v107) - v60;
            v71 = HIDWORD(v108);
            if (SHIDWORD(v107) > v60) {
              v71 = HIDWORD(v108) + v70;
              HIDWORD(v107) = v60;
              HIDWORD(v108) += v70;
            }
            v72 = v68 + v69 - 1;
            v66 = __OFSUB__(v60, v72);
            v73 = v60 - v72;
            if (!((v73 < 0) ^ v66 | (v73 == 0))) {
              v58 = v73 + v71;
            LABEL_54:
              HIDWORD(v108) = v58;
            }
            WORD1(v102[0]) = 0;
            LOBYTE(v102[0]) = v59;
            BYTE1(v102[0]) = v60;
            GameRoutine_74e080(&v104, v102);
            goto LABEL_56;
          }
          v58 = 1;
          LODWORD(v107) = *v57;
          HIDWORD(v107) = v60;
          LODWORD(v108) = 1;
          goto LABEL_54;
        }
      LABEL_56:
        v57 += 4;
      }
      v111 = v37;
      if (((1LL << *(_BYTE*)(v37 + 57)) & 0x80300) == 0) {
        v114 |= 1u;
      }
      v14 = game_map_7d1920(v8, &v104);
      if ((v14 & 1) == 0) {
        goto LABEL_83;
      }
      v102[0] = GameData_1f9b8a8;
      v102[1] = v122;
      v103 = v102;
      if (HIDWORD(v108) * (int)v108 < 2) {
        if (HIDWORD(v108) * (_DWORD)v108 == 1) {
          *((_DWORD*)v122 + (((int)v107 + 32 * HIDWORD(v107)) >> 5)) |= 1
                                                                        << v107;
        }
      LABEL_80:
        v14 = (__int64)v102;
        goto LABEL_81;
      }
      v74 = v104;
      v75 = (char*)v105;
      if (v104 == (char*)v105) {
        goto LABEL_80;
      }
      do {
        v76 = *v74;
        v28 = v103;
        v135 = v74[1];
        v136[0] = v76;
        if (v103 == nullptr) {
        LABEL_109:
          GameRoutine_60a310_alt1(v28, v27);
        }
        (*(void (**)(_QWORD*, int*, int*))(*v103 + 48LL))(v103, v136, &v135);
        v74 += 4;
      } while (v74 != v75);
      v14 = (__int64)v103;
      if (v103 != v102) {
        if (v103 != nullptr) {
          v77 = 40;
          goto LABEL_82;
        }
        goto LABEL_83;
      }
    LABEL_81:
      v77 = 32;
    LABEL_82:
      v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + v77))((__int64)v14);
    LABEL_83:
      if (v104 != nullptr) {
        v105 = (__int64)v104;
        v78 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v78 = 56;
        }
        v14 = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v78, v104);
      }
      v57 = v117;
    LABEL_88:
      if (v57 != nullptr) {
        v118 = v57;
        v79 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v79 = 56;
        }
        v14 = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, v57);
      }
      v31 = v100;
      v18 = v101;
      v34 = GameData_212c930;
      v33 = v99;
    LABEL_27:
      v35 = v20++ == v21;
      if (!v35) {
        continue;
      }
      break;
    }
    v20 = v98;
    v35 = v18++ == v97;
    if (!v35) {
      continue;
    }
    break;
  }
  v80 = v31;
  if ((char*)v32 != v31) {
    v81 = v31;
    do {
      v82 = *v81;
      v83 = v81[1];
      v84 = *(_QWORD*)(*v34 + 64);
      v85 = *(_QWORD*)(v84 +
                       8LL * *(unsigned __int16*)(GameData_21ca130 +
                                                  2LL * (int)(v82 + 32 * v83)));
      v86 = *(_QWORD*)(v85 + 128);
      if (v86 != 0) {
        v87 = *v81;
        v88 = v81[1];
        v89 = v80;
        while (1) {
          v90 = *v89;
          v91 = v89[1];
          if (*(_QWORD*)(v84 +
                         8LL * *(unsigned __int16*)(GameData_21ca130 +
                                                    2LL * (int)(v90 +
                                                                32 * v91))) ==
              v86) {
            break;
          }
          v89 += 4;
          if (v89 == (char*)v32) {
            goto LABEL_95;
          }
        }
        v116 = 0;
        v107 = __PAIR64__(v83, v82);
        v110 = 9;
        v112 = 0;
        v113 = 0;
        v92 = (__int64*)fw_memory_g_heap_manager_ptr;
        v108 = 0x100000001LL;
        v109 = 0;
        v93 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0);
        *(_BYTE*)v93 = v87;
        *(_BYTE*)(v93 + 1) = v88;
        *(_WORD*)(v93 + 2) = 0;
        v111 = v85;
        v115 = __PAIR64__(v91, v90);
        v104 = (char*)v93;
        v105 = v93 + 4;
        v106 = v93 + 4;
        v114 = 1;
        game_map_7d1920(v8, &v104);
        if (v104 != nullptr) {
          v94 = *v92;
          v105 = (__int64)v104;
          v95 = 128;
          if (*(_QWORD*)(v94 + 200) == 0) {
            v95 = 56;
          }
          nn_mem_StandardAllocator_Free(v94 + v95, v104);
        }
      }
    LABEL_95:
      v81 += 4;
      v34 = GameData_212c930;
    } while (v81 != (char*)v32);
  }
  if (v80 != nullptr) {
    v96 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v96 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v96,
                                  v80);
  }
LABEL_12:
  memset(v8 + 104, 255, 18432, v15, v16, v17);
  v23 = *(char***)(v8 + 32);
  v24 = *(char***)(v8 + 40);
  v25 = v122;
  v122[0] = GameData_1f9b928;
  v122[1] = v8;
  v123 = v122;
  if (v23 == v24) {
    goto LABEL_21;
  }
  do {
    v26 = *v23;
    if (((*(__int64 (**)(char*))(*(_QWORD*)*v23 + 504LL))(*v23) & 1) == 0) {
      v28 = v123;
      v104 = v26;
      if (v123 == nullptr) {
        goto LABEL_109;
      }
      (*(void (**)(_QWORD*, char**))(*v123 + 48LL))(v123, &v104);
    }
    ++v23;
  } while (v23 != v24);
  v25 = v123;
  if (v123 == v122) {
  LABEL_21:
    v29 = 32;
  LABEL_22:
    (*(void (**)(__int64))(*v25 + v29))((__int64)v25);
  }
  else if (v123 != nullptr) {
    v29 = 40;
    goto LABEL_22;
  }
  return game_map_Trick_Impl_UpdateLink_alt1(v8);
}

__int64 Trick_7cb0c0(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  char v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned __int8 v9;
  char v10;
  __int16 v11;
  int v12;
  int v13;
  unsigned __int8 v14;

  v1 = *(_QWORD**)(a1 + 32);
  v2 = *(_QWORD**)(a1 + 40);
  if (v1 == v2) {
    return 0;
  }
  v4 = 0;
  v5 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  do {
    v6 = *v1;
    v7 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v1 + 248LL))(*v1);
    if (v7 >= 1 && v5 == *(unsigned __int8*)(v6 + 14) &&
        ((v8 = *(unsigned __int8*)(v6 + 13), v7 >= (unsigned int)(v8 + 1))
             ? (v9 = v8 + 1)
             : (v9 = v7),
         *(_BYTE*)(v6 + 13) = v9, v7 == v9)) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 480LL))(v6) & 1) != 0) {
        *(_WORD*)(v6 + 20) |= 2u;
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 416LL))(v6);
      }
      v10 = 1;
      v11 = *(_WORD*)(v6 + 20);
      if ((v11 & 0x40) == 0) {
        goto LABEL_25;
      }
    }
    else {
      v10 = 0;
      v11 = *(_WORD*)(v6 + 20);
      if ((v11 & 0x40) == 0) {
        goto LABEL_25;
      }
    }
    *(_WORD*)(v6 + 20) = v11 & 0xFFBF;
    v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 256LL))(v6);
    if (v12 >= 1) {
      v13 = *(unsigned __int8*)(v6 + 13);
      v14 = v12 >= (unsigned int)(v13 + 1) ? v13 + 1 : v12;
      *(_BYTE*)(v6 + 13) = v14;
      if (v12 == v14) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 480LL))(v6) & 1) != 0) {
          *(_WORD*)(v6 + 20) |= 2u;
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 416LL))(v6);
        }
        v10 = 1;
      }
    }
  LABEL_25:
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 496LL))(v6) & 1) != 0 &&
        v5 == 0) {
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)v6 + 392LL))(v6, 0);
      v10 = 1;
    }
    ++v1;
    v4 |= v10;
  } while (v1 != v2);
  if ((v4 & 1) != 0) {
    GameRoutine_7d5160(a1, 1);
    return 1;
  }
  return 0;
}

__attribute__((swiftcall)) void Trick_7cb2a0(PSEUDO_X8 x8_, __int64 result,
                                             int a2, int a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  _QWORD* v5;
  __int64 v9;
  char v10;

  v4 = *(_QWORD**)(result + 18704);
  v5 = *(_QWORD**)(result + 18712);
  if (v4 == v5) {
  LABEL_10:
    *(_DWORD*)a4 = GameData_21cfa70;
    {
      result;
      return;
    }
  }
  while (1) {
    v9 = *v4;
    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 16LL))(*v4);
    if ((result & 1) != 0) {
      if ((*(unsigned int (**)(__int64))(*(_QWORD*)v9 + 56LL))(v9) == a2 &&
          (*(unsigned int (**)(__int64))(*(_QWORD*)v9 + 64LL))(v9) == a3) {
        break;
      }
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 328LL))(v9);
      if ((_DWORD)result == a2) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 336LL))(v9);
        if ((_DWORD)result == a3) {
          v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 56LL))(v9);
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 64LL))(v9);
          goto LABEL_12;
        }
      }
    }
    if (++v4 == v5) {
      goto LABEL_10;
    }
  }
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 328LL))(v9);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 336LL))(v9);
LABEL_12:
  *(_BYTE*)a4 = v10;
  *(_BYTE*)(a4 + 1) = result;
  *(_WORD*)(a4 + 2) = 0;
  {
    result;
    return;
  }
}

__int64 Trick_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 16);
  v2 = *(__int64**)(v1 + 32);
  v3 = *(__int64**)(v1 + 40);
  if (v2 != v3) {
    do {
      v4 = *v2++;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 720LL))(v4);
    } while (v2 != v3);
    v2 = *(__int64**)(v1 + 32);
  }
  *(_QWORD*)(v1 + 40) = v2;
  *(_BYTE*)(v1 + 92848) = 0;
  memset_alt1(v1 + 104, 255, 0x4800u);
  return memset_alt1(*(_QWORD*)(*GameData_212ce98[0] + 48) + 8LL, 0, 0x800u);
}

__int64 Trick_Unknown6(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* i;
  __int64 v11;

  v2 = *(_QWORD*)(result + 16);
  v3 = *(int*)(a2 + 20);
  v5 = *(_QWORD*)(v2 + 32);
  v4 = *(_QWORD*)(v2 + 40);
  *(_DWORD*)(a2 + 20) = v3 + 1;
  v6 = v4 - v5;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v3) = v6 >> 3;
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v6 >> 11;
  v8 = *(__int64**)(v2 + 32);
  for (i = *(__int64**)(v2 + 40); v8 != i;
       result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v11 + 728LL))(
           v11, a2)) {
    v11 = *v8++;
  }
  return result;
}

__int64 Trick_Unknown2(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* i;
  __int64 v11;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(int*)(a2 + 20);
  v5 = *(_QWORD*)(v2 + 32);
  v4 = *(_QWORD*)(v2 + 40);
  *(_DWORD*)(a2 + 20) = v3 + 1;
  v6 = v4 - v5;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v3) = v6 >> 3;
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v6 >> 11;
  v8 = *(__int64**)(v2 + 32);
  for (i = *(__int64**)(v2 + 40); v8 != i;
       result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v11 + 728LL))(
           v11, a2)) {
    v11 = *v8++;
  }
  return result;
}

__int64 game_map_Trick_Impl_CanPut_closure_Invoke(__int64 a1, unsigned int* a2,
                                                  unsigned int* a3)
{
  __int64 result;

  result = Trick_7d2180_alt1(*(_QWORD*)(a1 + 8), *a2, *a3,
                             *(_QWORD*)(*(_QWORD*)(a1 + 16) + 56LL));
  if ((result & 1) == 0) {
    **(_BYTE**)(a1 + 24) = 0;
  }
  return result;
}

__int64 Trick_7d2180(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int8 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64* v20;
  char v21;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  bool v36;
  bool v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v53;
  bool v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  int v59;
  char v60;
  __int64 v61;
  char v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int16 v73;

  if (a4 == 0) {
    return 0;
  }
  v4 = GameData_21ca300;
  if (GameData_21ca300 == 0) {
    return 0;
  }
  v5 = 0;
  if (*(unsigned __int8*)(GameData_21ca300 + 18) <=
          (unsigned int)(unsigned __int8)(a2 -
                                          *(_BYTE*)(GameData_21ca300 + 16)) ||
      *(unsigned __int8*)(GameData_21ca300 + 19) <=
          (unsigned int)(unsigned __int8)(a3 -
                                          *(_BYTE*)(GameData_21ca300 + 17))) {
    return v5;
  }
  v6 = a2 + 32 * a3;
  if (v6 >= 0x400) {
    v7 = 0;
  }
  else {
    v7 = v6;
  }
  v8 = 2LL * (unsigned int)v7;
  v9 = *(unsigned __int8*)(a4 + 57);
  v10 = *(_QWORD*)(*GameData_212c930 + 64);
  v11 =
      *(_QWORD*)(v10 +
                 8LL * *(unsigned __int16*)(*(_QWORD*)(GameData_21ca300 + 32) +
                                            v8 + 8));
  v12 =
      *(_QWORD*)(v10 +
                 8LL * *(unsigned __int16*)(*(_QWORD*)(GameData_21ca300 + 40) +
                                            v8 + 8));
  v13 = GameData_1b41aa9[*(unsigned __int8*)(a4 + 57)];
  v14 = *(__int16*)(a1 + ((unsigned __int64)GameData_1b41abf[v13] << 11) + v8 +
                    104);
  if (v14 < 0 || (v15 = *(_QWORD*)(a1 + 8)) == 0) {
    v20 = nullptr;
    if (a4 == v11) {
      goto LABEL_16;
    }
  }
  else {
    v16 = GameData_1b41aa9[*(unsigned __int8*)(a4 + 57)];
    LODWORD(v13) = a2;
    v17 = a1;
    v18 = a4;
    v72 = GameData_21ca300;
    v19 = a3;
    v20 = (__int64*)(v15 + 144LL * (int)v14);
    v73 = 8;
    v21 = (*(__int64 (**)(__int64*, __int16*))(*v20 + 784))(v20, &v73);
    a3 = v19;
    v4 = v72;
    v36 = (v21 & 1) == 0;
    a2 = v13;
    LOBYTE(v13) = v16;
    a4 = v18;
    a1 = v17;
    if (!v36) {
      v20 = nullptr;
    }
    if (v18 == v11) {
    LABEL_16:
      if (*(_WORD*)(v12 + 16) == 0) {
        return 1;
      }
    }
  }
  if (v11 == 0) {
    return 0;
  }
  v23 = *(unsigned __int8*)(a4 + 60);
  if (*(unsigned __int8*)(v11 + 60) > v23) {
    return 0;
  }
  v24 = *(unsigned __int16*)(a4 + 248);
  if (*(_WORD*)(a4 + 248) != 0) {
    v25 = *(_QWORD*)(a4 + 256);
    v26 = *(unsigned __int8*)(v11 + 56);
    v27 = v24 & 3;
    if (v24 >= 4) {
      v47 = (_QWORD*)(v25 + 40);
      v28 = 0;
      v29 = 0;
      v30 = 0;
      do {
        v48 = *(v47 - 4);
        if (*(unsigned __int8*)(v48 + 56) == v26) {
          if (v48 == v11) {
            ++v29;
          }
          else {
            ++v30;
          }
        }
        v49 = *(v47 - 2);
        if (*(unsigned __int8*)(v49 + 56) == v26) {
          if (v49 == v11) {
            ++v29;
          }
          else {
            ++v30;
          }
        }
        if (*(unsigned __int8*)(*v47 + 56LL) == v26) {
          if (*v47 == v11) {
            ++v29;
          }
          else {
            ++v30;
          }
        }
        v50 = v47[2];
        if (*(unsigned __int8*)(v50 + 56) == v26) {
          if (v50 == v11) {
            ++v29;
          }
          else {
            ++v30;
          }
        }
        v28 += 4;
        v47 += 8;
      } while ((v24 & 0xFFFC) != v28);
    }
    else {
      v28 = 0;
      v29 = 0;
      v30 = 0;
    }
    if ((v24 & 3) != 0) {
      v31 = (__int64*)(v25 + 16 * v28 + 8);
      do {
        v33 = *v31;
        v31 += 2;
        v32 = v33;
        if (*(unsigned __int8*)(v33 + 56) == v26) {
          if (v32 == v11) {
            ++v29;
          }
          else {
            ++v30;
          }
        }
        --v27;
      } while (v27 != 0);
    }
    if (v29 == 0 && v30 >= 1) {
      return 0;
    }
  }
  v34 = *(unsigned __int16*)(a4 + 240);
  if (*(_WORD*)(a4 + 240) == 0) {
    return 0;
  }
  v35 = *(unsigned __int16*)(*(_QWORD*)(v11 + 48) + 16LL);
  v36 = ((1 << v35) & v34) != 0 || v35 == 0;
  v37 = !v36 || v12 == 0;
  if (v37 || *(unsigned __int8*)(v12 + 60) > v23) {
    return 0;
  }
  if (*(_WORD*)(a4 + 248) != 0) {
    v38 = *(_QWORD*)(a4 + 256);
    v39 = *(unsigned __int8*)(v12 + 56);
    v40 = v24 & 3;
    if (v24 >= 4) {
      v63 = (unsigned __int16)v24 & 0xFFFC;
      v64 = (_QWORD*)(v38 + 40);
      v41 = 0;
      v42 = 0;
      v43 = 0;
      do {
        v65 = *(v64 - 4);
        if (*(unsigned __int8*)(v65 + 56) == v39) {
          if (v65 == v12) {
            ++v42;
          }
          else {
            ++v43;
          }
        }
        v66 = *(v64 - 2);
        if (*(unsigned __int8*)(v66 + 56) == v39) {
          if (v66 == v12) {
            ++v42;
          }
          else {
            ++v43;
          }
        }
        if (*(unsigned __int8*)(*v64 + 56LL) == v39) {
          if (*v64 == v12) {
            ++v42;
          }
          else {
            ++v43;
          }
        }
        v67 = v64[2];
        if (*(unsigned __int8*)(v67 + 56) == v39) {
          if (v67 == v12) {
            ++v42;
          }
          else {
            ++v43;
          }
        }
        v41 += 4;
        v64 += 8;
      } while (v63 != v41);
    }
    else {
      v41 = 0;
      v42 = 0;
      v43 = 0;
    }
    if (v40 != 0) {
      v44 = (__int64*)(v38 + 16 * v41 + 8);
      do {
        v46 = *v44;
        v44 += 2;
        v45 = v46;
        if (*(unsigned __int8*)(v46 + 56) == v39) {
          if (v45 == v12) {
            ++v42;
          }
          else {
            ++v43;
          }
        }
        --v40;
      } while (v40 != 0);
    }
    if (v42 == 0 && v43 >= 1) {
      return 0;
    }
  }
  v51 = (1 << *(_WORD*)(*(_QWORD*)(v12 + 48) + 16LL)) & v34;
  if (*(_WORD*)(*(_QWORD*)(v12 + 48) + 16LL) != 0 && v51 == 0) {
    return 0;
  }
  if (*(_BYTE*)(a4 + 57) == 10) {
    if (*(_BYTE*)(*(_QWORD*)(v4 + 96) + v7 + 8) != 0) {
      v53 = *(_QWORD*)(GameData_21ca310 + 56) +
            2224LL * *(unsigned __int8*)(*(_QWORD*)(v4 + 96) + v7 + 8);
      v54 = *(unsigned __int8*)(*(_QWORD*)(v4 + 96) + v7 + 8) > 0xFAu ||
            v53 == 2224;
      if (!v54 && *(_QWORD*)(v53 - 1832) != 0) {
        return 0;
      }
    }
    if ((*(__int16*)(a1 + 2 * v7 + 12392) & 0x80000000) == 0 &&
        *(_QWORD*)(a1 + 8) != 0) {
      return 0;
    }
  }
  if ((unsigned int)(v9 - 17) >= 2) {
    v55 = *(__int16*)(a1 + 2 * v7 + 2152);
    if ((v55 & 0x8000000000000000LL) == 0) {
      v56 = *(_QWORD*)(a1 + 8);
      if (v56 != 0) {
        v57 = a4;
        v58 = a3;
        v59 = a2;
        v60 = (*(__int64 (**)(__int64))(*(_QWORD*)(v56 + 144LL * (int)v55) +
                                        272LL))(v56 + 144LL * (int)v55);
        a2 = v59;
        a3 = v58;
        a4 = v57;
        if ((v60 & 1) != 0) {
          return 0;
        }
      }
    }
    if (((1LL << v13) & 0x405) != 0) {
      v61 = a4;
      v62 = MapUtil_753570_alt1(a2, a3);
      a4 = v61;
      if ((v62 & 1) == 0) {
        return 0;
      }
    }
  }
  if (*(_BYTE*)(a4 + 57) == 19) {
    if (v20 == nullptr) {
      return 0;
    }
  }
  else if (v20 == nullptr) {
    return 1;
  }
  v68 = *v20;
  v69 = v20;
  v70 = a4;
  v71 = (*(__int64 (**)(__int64*))(v68 + 224))(v69);
  return GameRoutine_68e5e0_alt1(v70, v71);
}

__int64 game_map_Trick_Impl_TryDelete_closure_Invoke(__int64 result, _DWORD* a2,
                                                     _DWORD* a3)
{
  __int64 v3;
  __int64 v4;
  char v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _WORD* v10;

  v3 = *(_QWORD*)(result + 16);
  v4 = result;
  v5 = 0;
  v6 = *a2 + 32 * *a3;
  v7 = **(unsigned __int8**)(result + 24);
  if (v6 >= 0x400) {
    v6 = 0;
  }
  v8 = *(__int16*)(v3 + ((unsigned __int64)GameData_1b41abf[v7] << 11) +
                   2LL * v6 + 104);
  if ((v8 & 0x8000000000000000LL) == 0) {
    v9 = *(_QWORD*)(v3 + 8);
    if (v9 != 0) {
      v10 = (_WORD*)(v9 + 144LL * (int)v8);
      result = (*(__int64 (**)(_WORD*))(*(_QWORD*)v10 + 40LL))(v10);
      if ((_DWORD)v7 == (unsigned __int8)result) {
        result = (*(__int64 (**)(_WORD*))(*(_QWORD*)v10 + 480LL))(v10);
        if ((result & 1) != 0) {
          v10[10] |= 2u;
        }
        else {
          result = (*(__int64 (**)(_WORD*))(*(_QWORD*)v10 + 416LL))(v10);
        }
        v5 = 1;
        *(_BYTE*)(v3 + 92848) = 1;
      }
      else {
        v5 = 0;
      }
    }
  }
  **(_BYTE**)(v4 + 8) |= v5;
  return result;
}

__int64 game_map_Trick_Impl_UpdateMap_closure_Invoke_7d2990(__int64 a1,
                                                            _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v6;
  _QWORD v7[2];
  char v8;
  __int64 v9;
  _QWORD* v10;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 48LL))(*a2);
  if (*(unsigned __int8*)(a1 + 16) == (unsigned __int8)result) {
    v8 = result;
    v7[0] = GameData_1f9b218;
    v7[1] = v3;
    v9 = v2;
    v10 = v7;
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v2 + 744LL))(v2, v7);
    result = (__int64)v10;
    if (v10 == v7) {
      v6 = 32;
    }
    else {
      if (v10 == nullptr) {
        return result;
      }
      v6 = 40;
    }
    return (*(__int64 (**)(__int64))(*v10 + v6))((__int64)v10);
  }
  return result;
}

__int64 game_map_Trick_Impl_UpdateMap_closure_Invoke_7d2b40(__int64 a1,
                                                            _DWORD* a2,
                                                            _DWORD* a3)
{
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a2 + 32 * *a3;
  v5 = *(unsigned __int8*)(a1 + 16);
  v6 = *(_QWORD*)(a1 + 24);
  v7 = v3 + (v5 << 11);
  if (v4 >= 0x400) {
    v4 = 0;
  }
  v8 = v7 + 2LL * v4;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
  *(_WORD*)(v8 + 104) = result;
  return result;
}

__int64 game_map_Trick_Impl_UpdateLink_closure_Invoke_7d2c90(__int64 a1,
                                                             _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  _QWORD* v6;
  __int64* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 40LL))(*a2);
  if (*(unsigned __int8*)(a1 + 16) == (unsigned __int8)result) {
    v6 = (_QWORD*)(v3 + 24LL * (unsigned __int8)result);
    v7 = v6 + 2317;
    v8 = (_QWORD*)v6[2318];
    v9 = v6[2319];
    if ((unsigned __int64)v8 >= v9) {
      v11 = *v7;
      v12 = (__int64)v8 - *v7;
      v13 = (v12 >> 3) + 1;
      if (v13 >> 61 != 0) {
        GameRoutine_7d18f0(result);
      }
      v14 = v9 - v11;
      v15 = fw_memory_g_heap_manager_ptr;
      if (v14 >> 2 > v13) {
        v13 = v14 >> 2;
      }
      if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
        v16 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v16 = v13;
      }
      if (v16 != 0) {
        if (v16 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v17 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
      }
      else {
        v17 = 0;
      }
      v18 = v17 + 8 * v16;
      v19 = v17 + v12 - 8 * (v12 >> 3);
      *(_QWORD*)(v17 + v12) = v2;
      v10 = v17 + v12 + 8;
      result = memcpy(v19, v11, v12);
      *v7 = v19;
      v7[1] = v10;
      v7[2] = v18;
      if (v11 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v20 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v20, v11);
      }
    }
    else {
      *v8 = v2;
      v10 = (__int64)(v8 + 1);
    }
    v7[1] = v10;
  }
  return result;
}

__int64 game_map_Trick_Impl_EachBreakable_closure_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = *a2;
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 272LL))(*a2);
  if ((result & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 8);
    v7 = v2;
    v6 = *(_QWORD*)(v5 + 32);
    if (v6 == 0) {
      GameRoutine_60a310_alt2();
    }
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v6 + 48LL))(v6, &v7);
  }
  return result;
}

__int64 game_map_Trick_Impl_EachDanger_closure_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = *a2;
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 520LL))(*a2);
  if ((result & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 8);
    v7 = v2;
    v6 = *(_QWORD*)(v5 + 32);
    if (v6 == 0) {
      GameRoutine_60a310_alt2();
    }
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v6 + 48LL))(v6, &v7);
  }
  return result;
}

_QWORD* game_map_Trick_Impl_EachCoveredCharacter_closure_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_1f9b7a8;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
    }
    else {
      v5 = result;
      result[6] = X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
              *v4 + 16LL))((void*)v4, v4, v3));
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 game_map_Trick_Impl_EachCoveredCharacter_closure_Invoke(__int64 result,
                                                                __int64 a2,
                                                                __int64 a3)
{
  __int64 v3;

  if (*(_QWORD*)(*(_QWORD*)a2 + 112LL) != 0) {
    v3 = *(_QWORD*)(result + 48);
    if (v3 == 0) {
      GameRoutine_60a310((unsigned __int8)v3, a2, a3);
    }
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 48LL))(
        v3, *(_QWORD*)a2 + 104LL);
  }
  return result;
}

_QWORD* game_map_Trick_Impl_UpdateLink(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* result;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  __int64 v17;

  v2 = a1[2320];
  v3 = (_QWORD*)a1[4];
  v4 = (_QWORD*)a1[5];
  a1[2318] = a1[2317];
  v5 = a1[2323];
  a1[2321] = v2;
  v6 = a1[2326];
  a1[2324] = v5;
  v7 = a1[2329];
  a1[2327] = v6;
  v8 = a1[2332];
  a1[2330] = v7;
  v9 = a1[2335];
  a1[2333] = v8;
  v10 = a1[2338];
  a1[2336] = v9;
  v11 = a1[2341];
  a1[2339] = v10;
  a1[2342] = v11;
  a1[2345] = a1[2344];
  a1[2348] = a1[2347];
  a1[2351] = a1[2350];
  a1[2354] = a1[2353];
  a1[2357] = a1[2356];
  a1[2360] = a1[2359];
  a1[2363] = a1[2362];
  a1[2366] = a1[2365];
  v15_.v15[0] = GameData_1f9ba28;
  v15_.v15[1] = a1;
  result = v15_.v15;
  v15_.v16 = v15_.v15;
  if (v3 == v4) {
    goto LABEL_10;
  }
  do {
    v13 = *v3;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v3 + 504LL))(*v3) & 1) == 0) {
      v17 = v13;
      if (v15_.v16 == nullptr) {
        GameRoutine_60a310_alt2();
      }
      (*(void (**)(_QWORD*, __int64*))(*v15_.v16 + 48LL))(v15_.v16, &v17);
    }
    ++v3;
  } while (v3 != v4);
  result = v15_.v16;
  if (v15_.v16 == v15_.v15) {
  LABEL_10:
    v14 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      return result;
    }
    v14 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v14))(result,
                                                                     a2);
}

__int64 game_map_Trick_Impl_UpdateMap_closure_Invoke_7d4d10(__int64 a1,
                                                            _QWORD** a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[4];
  _QWORD* v7;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v7 = v6;
  v6[0] = GameData_1f9b998;
  v6[1] = v3;
  v6[2] = v2;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
      *v2 + 744LL))((void*)v2, v2, v6);
  result = (__int64)v7;
  if (v7 == v6) {
    v5 = 32;
  }
  else {
    if (v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7 + v5))((__int64)v7);
}

__int64 game_map_Trick_Impl_UpdateMap_closure_Invoke_7d4e80(__int64 a1, int* a2,
                                                            int* a3)
{
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 result;

  v4 = *(_QWORD*)(a1 + 8);
  v5 = *a2;
  v6 = *a3;
  v7 = (*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(a1 + 16) + 48LL))(
      *(_QWORD*)(a1 + 16));
  v8 = v5 + 32 * v6;
  v9 = v4 + (v7 << 11);
  if (v8 >= 0x400) {
    v8 = 0;
  }
  v10 = v9 + 2LL * v8;
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 16) + 32LL))(
      *(_QWORD*)(a1 + 16));
  *(_WORD*)(v10 + 104) = result;
  return result;
}

__int64 game_map_Trick_Impl_UpdateLink_closure_Invoke_7d4fe0(__int64 a1,
                                                             _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  _QWORD* v5;
  __int64* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 40LL))(*a2);
  v5 = (_QWORD*)(v3 + 24LL * (unsigned __int8)result);
  v6 = v5 + 2317;
  v7 = (_QWORD*)v5[2318];
  v8 = v5[2319];
  if ((unsigned __int64)v7 >= v8) {
    v10 = *v6;
    v11 = (__int64)v7 - *v6;
    v12 = (v11 >> 3) + 1;
    if (v12 >> 61 != 0) {
      GameRoutine_7d18f0(result);
    }
    v13 = v8 - v10;
    v14 = fw_memory_g_heap_manager_ptr;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v15;
    v18 = v16 + v11 - 8 * (v11 >> 3);
    *(_QWORD*)(v16 + v11) = v2;
    v9 = v16 + v11 + 8;
    result = memcpy(v18, v10, v11);
    *v6 = v18;
    v6[1] = v9;
    v6[2] = v17;
    if (v10 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v19, v10);
    }
  }
  else {
    *v7 = v2;
    v9 = (__int64)(v7 + 1);
  }
  v6[1] = v9;
  return result;
}

__int64 game_map_Trick_Impl_TryCommit_closure_Invoke(__int64 result, int* a2,
                                                     int* a3)
{
  int v3;
  int v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  _DWORD* v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;

  v3 = *a2;
  v4 = *a3;
  v5 = v3 + 32 * v4;
  v6 = *(_QWORD*)(result + 8) + 8LL;
  if ((unsigned int)v5 >= 0x400) {
    v7 = 0;
  }
  else {
    v7 = v3 + 32 * v4;
  }
  if (*(_WORD*)(v6 + 2LL * v7) != 0) {
    *(_WORD*)(v6 + 2LL * v7) = 0;
    v8 = (_DWORD*)(GameData_21ca2e8 + 61440);
    if (*(int*)(GameData_21ca2e8 + 61624) < 1) {
      v14 = result;
      GameRoutine_7c41f0(GameData_21ca2e8, v3, v4);
      result = v14;
    }
    else {
      v9 = *(_DWORD*)(GameData_21ca2e8 + 61472);
      v10 = *(_DWORD*)(GameData_21ca2e8 + 61476);
      v11 = GameData_21ca2e8 + 4LL * (v5 >> 5);
      if (v3 < v9) {
        v9 = v3;
      }
      if (v4 < v10) {
        v10 = v4;
      }
      *(_DWORD*)(GameData_21ca2e8 + 61472) = v9;
      v8[9] = v10;
      v12 = v8[10];
      v13 = v8[11];
      if (v12 <= v3) {
        v12 = v3;
      }
      if (v13 <= v4) {
        v13 = v4;
      }
      v8[10] = v12;
      v8[11] = v13;
      *(_DWORD*)(v11 + 61488) |= 1 << v3;
    }
    **(_BYTE**)(result + 16) = 1;
  }
  return result;
}

__int64 game_map_Trick_Impl_TryCommit_closure0_Invoke(__int64 a1, int* a2,
                                                      int* a3)
{
  int v4;
  int v5;
  __int64 result;
  __int64 v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  _DWORD* v11;
  int v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;

  v4 = *a2;
  v5 = *a3;
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 24) + 16LL))(
      *(_QWORD*)(a1 + 24));
  v7 = *(_QWORD*)(a1 + 8) + 8LL;
  if ((result & 1) != 0) {
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 24) + 224LL))(
        *(_QWORD*)(a1 + 24));
    v8 = v4 + 32 * v5;
    v9 = *(unsigned __int16*)(result + 16);
    if (v8 >= 0x400) {
      v8 = 0;
    }
    if (*(unsigned __int16*)(v7 + 2LL * v8) != v9) {
      *(_WORD*)(v7 + 2LL * v8) = v9;
    LABEL_10:
      result = GameData_21ca2e8;
      v11 = (_DWORD*)(GameData_21ca2e8 + 61440);
      if (*(int*)(GameData_21ca2e8 + 61624) < 1) {
        result = (__int64)GameRoutine_7c41f0(GameData_21ca2e8, v4, v5);
      }
      else {
        v12 = *(_DWORD*)(GameData_21ca2e8 + 61472);
        v13 = *(_DWORD*)(GameData_21ca2e8 + 61476);
        if (v4 < v12) {
          v12 = v4;
        }
        if (v5 < v13) {
          v13 = v5;
        }
        *(_DWORD*)(GameData_21ca2e8 + 61472) = v12;
        v11[9] = v13;
        v14 = v11[10];
        v15 = v11[11];
        if (v14 <= v4) {
          v14 = v4;
        }
        if (v15 <= v5) {
          v15 = v5;
        }
        v11[10] = v14;
        v11[11] = v15;
        v16 = result + 4LL * ((v4 + 32 * v5) >> 5);
        *(_DWORD*)(v16 + 61488) |= 1 << v4;
      }
      **(_BYTE**)(a1 + 16) = 1;
    }
  }
  else {
    v10 = v4 + 32 * v5;
    if (v10 >= 0x400) {
      v10 = 0;
    }
    if (*(_WORD*)(v7 + 2LL * v10) != 0) {
      *(_WORD*)(v7 + 2LL * v10) = 0;
      goto LABEL_10;
    }
  }
  return result;
}

#pragma GCC visibility pop
