#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_fc5ce0(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD, _QWORD,
                                                   _QWORD, _QWORD);
__attribute__((swiftcall)) void game_fc45a0(PSEUDO_X8, __int64);
__int64 GameRoutine_fc6740(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_1ffd330[9];
extern char GameData_1a865b8[11];
extern char GameData_1aa5485[11];
extern char GameData_1aa9482[14];
extern char GameData_1ac3fe8[13];
extern char GameData_1aea7a3[14];
__int64 IKSkirt_fc5180(__int64 a1);
float32x4_t IKSkirt_Unknown4(__int64 a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void math_Quat_Slerp(PSEUDO_X8, float32x4_t* result,
                                                float32x4_t*, float);
extern _UNKNOWN* GameData_212c2f8;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a5680;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82b00;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a5670;
extern __int128 GameData_21a6120;
float32x4_t GameRoutine_fc6740_alt1(_QWORD*, int,
                                    int8x16_t*) __asm__("GameRoutine_fc6740");
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
__attribute__((swiftcall)) void IKSkirt_fc5ce0(PSEUDO_X8 x8_, __int64 a1,
                                               char a2, int a3, int a4, int a5,
                                               int a6, int a7);

__int64 IKSkirt_fc5180(__int64 a1)
{
  __int64 v1;
  int* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  bool v36;
  __int64 i;
  __int64 v38;
  char* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int16* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _DWORD* v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  int v64;
  int v65;
  __int64 v66;
  __int64 j;
  unsigned int v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 k;
  unsigned int v73;
  __int64 v74;
  __int64* v75;
  __int64* v76;
  unsigned int v77;
  unsigned __int64 v78;
  __int64* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  int v99;
  unsigned __int64 v100;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  int v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  int v111;
  bool v112;
  unsigned __int64 v113;
  __int64 v114;
  _DWORD* v115;
  __int64 v116[3];
  struct {
    _QWORD v117[2];
    __int64 v118;
    __int64 v119;
    __int64 v120;
    __int64 v121;
    __int64* v122;
    __int64* v123;
    __int64 v124;
    __int64 v125;
  } v117_;
  _QWORD v126[2];

  v1 = *(_QWORD*)(a1 + 40);
  v2 = (int*)(a1 + 80);
  LOBYTE(v117_.v117[1]) = 0;
  v117_.v117[0] = 0;
  v3 = *(_QWORD*)(*(_QWORD*)(v1 + 112) + 24LL);
  v4 = *(_QWORD*)(v3 + 8);
  if (v4 == 0) {
    goto LABEL_14;
  }
  v5 = v4 + 8;
  v6 = *(unsigned __int16*)(v4 + 12);
  v7 = v4 + 8 + 16 * v6;
  v8 = *(_DWORD*)v7;
  if ((signed __int32)*(_DWORD*)(v4 + 8) < (signed __int32)*(_DWORD*)v7) {
    do {
      if ((unsigned int)(v8 >> 3) <= 0xC) {
        v9 = ((unsigned __int8)GameData_1aea7a3[~(v8 >> 3) + 13] >> (v8 & 7)) &
             1;
      }
      else {
        v9 = 0;
      }
      v6 = *(unsigned __int16*)(v4 + 12 + 16 * v6 + 2 * v9);
      v10 = v8 < (signed __int32)*(_DWORD*)(v5 + 16 * v6);
      v8 = *(_DWORD*)(v5 + 16 * v6);
    } while (v10);
    v7 = v5 + 16 * v6;
  }
  v11 = *(_QWORD*)(v7 + 8);
  if (*(_WORD*)v11 == 13 &&
      ((v12 = *(_QWORD*)(v11 + 2), v13 = *(_QWORD*)(v11 + 7),
        v12 == 0x6B535F435F746E4ALL)
           ? (v14 = v13 == 0x30417472696B535FLL)
           : (v14 = false),
       v14)) {
    v60 = (unsigned __int64)(v7 - v4 - 24) >> 4;
    *v2 = v60;
    if ((_DWORD)v60 == -1) {
      v15 = 0;
    }
    else {
      v15 = 1;
      LOBYTE(v117_.v117[0]) = 1;
    }
  }
  else {
  LABEL_14:
    v15 = 0;
    *v2 = -1;
  }
  v16 = *(_QWORD*)(v3 + 8);
  if (v16 != 0) {
    v17 = v16 + 8;
    v18 = *(unsigned __int16*)(v16 + 12);
    v19 = v16 + 8 + 16 * v18;
    v20 = *(_DWORD*)v19;
    if ((signed __int32)*(_DWORD*)(v16 + 8) < (signed __int32)*(_DWORD*)v19) {
      do {
        if ((unsigned int)(v20 >> 3) <= 0xC) {
          v21 = ((unsigned __int8)GameData_1aa9482[~(v20 >> 3) + 13] >>
                 (v20 & 7)) &
                1;
        }
        else {
          v21 = 0;
        }
        v18 = *(unsigned __int16*)(v16 + 12 + 16 * v18 + 2 * v21);
        v10 = v20 < (signed __int32)*(_DWORD*)(v17 + 16 * v18);
        v20 = *(_DWORD*)(v17 + 16 * v18);
      } while (v10);
      v19 = v17 + 16 * v18;
    }
    v22 = *(_QWORD*)(v19 + 8);
    if (*(_WORD*)v22 == 13) {
      v23 = *(_QWORD*)(v22 + 2);
      v24 = *(_QWORD*)(v22 + 7);
      if (v23 == 0x6B535F435F746E4ALL && v24 == 0x30457472696B535FLL) {
        v61 = (unsigned __int64)(v19 - v16 - 24) >> 4;
        *(_DWORD*)(a1 + 96) = v61;
        if ((_DWORD)v61 == -1) {
        LABEL_29:
          v26 = v15;
          v15 = 0;
          v27 = *(_QWORD*)(v3 + 8);
          if (v27 == 0) {
            goto LABEL_42;
          }
          goto LABEL_30;
        }
        v26 = 1;
        BYTE4(v117_.v117[0]) = 1;
        v27 = *(_QWORD*)(v3 + 8);
        if (v27 == 0) {
          goto LABEL_42;
        }
      LABEL_30:
        v28 = v27 + 8;
        v29 = *(unsigned __int16*)(v27 + 12);
        v30 = v27 + 8 + 16 * v29;
        v31 = *(_DWORD*)v30;
        if ((signed __int32)*(_DWORD*)(v27 + 8) <
            (signed __int32)*(_DWORD*)v30) {
          do {
            if ((unsigned int)(v31 >> 3) <= 0xB) {
              v32 = ((unsigned __int8)GameData_1ac3fe8[~(v31 >> 3) + 12] >>
                     (v31 & 7)) &
                    1;
            }
            else {
              v32 = 0;
            }
            v29 = *(unsigned __int16*)(v27 + 12 + 16 * v29 + 2 * v32);
            v10 = v31 < (signed __int32)*(_DWORD*)(v28 + 16 * v29);
            v31 = *(_DWORD*)(v28 + 16 * v29);
          } while (v10);
          v30 = v28 + 16 * v29;
        }
        v33 = *(_QWORD*)(v30 + 8);
        if (*(_WORD*)v33 != 12 ||
            ((v34 = *(_QWORD*)(v33 + 2), v35 = *(_DWORD*)(v33 + 10),
              v34 == 0x70415F435F746E4ALL)
                 ? (v36 = v35 == 812543858)
                 : (v36 = false),
             !v36)) {
        LABEL_42:
          *(_DWORD*)(a1 + 112) = -1;
          if ((v26 & 1) != 0) {
            goto LABEL_43;
          }
          return 0;
        }
        v62 = (unsigned __int64)(v30 - v27 - 24) >> 4;
        *(_DWORD*)(a1 + 112) = v62;
        if ((_DWORD)v62 != -1) {
          v114 = v1;
          v115 = (_DWORD*)a1;
          LOBYTE(v117_.v117[1]) = 1;
          goto LABEL_44;
        }
        if ((v26 & 1) == 0) {
          return 0;
        }
      LABEL_43:
        v114 = v1;
        v115 = (_DWORD*)a1;
        v15 = 0;
      LABEL_44:
        for (i = 0; i != 9; ++i) {
          if ((*((_BYTE*)v117_.v117 + i) & 1) == 0) {
            v38 = *(_QWORD*)(v3 + 8);
            if (v38 == 0) {
              goto LABEL_45;
            }
            v39 = GameData_1ffd330[i];
            if (v39 != nullptr) {
              v40 = strlen_alt1(GameData_1ffd330[i]);
            }
            else {
              v40 = 0;
            }
            v41 = v38 + 8;
            v42 = *(unsigned __int16*)(v38 + 12);
            v43 = v38 + 8 + 16 * v42;
            v44 = *(_DWORD*)v43;
            if ((signed __int32)*(_DWORD*)(v38 + 8) <
                (signed __int32)*(_DWORD*)v43) {
              do {
                v46 = (__int64)v44 >> 3;
                if (v40 > v46) {
                  v45 = ((unsigned __int8)v39[v40 + ~v46] >> (v44 & 7)) & 1;
                }
                else {
                  v45 = 0;
                }
                v42 = *(unsigned __int16*)(v38 + 12 + 16 * v42 + 2 * v45);
                v10 = v44 < (signed __int32)*(_DWORD*)(v41 + 16 * v42);
                v44 = *(_DWORD*)(v41 + 16 * v42);
              } while (v10);
              v43 = v41 + 16 * v42;
            }
            v47 = *(unsigned __int16**)(v43 + 8);
            if (v40 == *v47 &&
                memcmp_alt1((__int64)(v47 + 1), (__int64)v39, v40) == 0) {
              v48 = (unsigned __int64)(v43 - v38 - 24) >> 4;
              v2[i] = v48;
              if ((_DWORD)v48 == -1) {
                v15 = 0;
              }
              else {
                *((_BYTE*)v117_.v117 + i) = 1;
              }
            }
            else {
            LABEL_45:
              v15 = 0;
              v2[i] = -1;
            }
          }
        }
        if ((v15 & 1) == 0) {
          return 0;
        }
        v117_.v118 = 0;
        v117_.v119 = 0;
        v117_.v120 = 0;
        v49 = *(_QWORD*)(*(_QWORD*)(v114 + 112) + 24LL);
        v117_.v117[0] = *(_QWORD*)(v114 + 112);
        v117_.v117[1] = v49;
        v50 = *(unsigned __int16*)(v49 + 56);
        v51 = fw_memory_g_heap_manager_ptr;
        if (*(_WORD*)(v49 + 56) != 0) {
          v52 = 3 * v50;
          v53 = 12 * v50;
          v54 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 12 * v50, 16, 0);
          v55 = v54 + 4 * v52;
          v56 = v115;
          v117_.v118 = v54;
          v117_.v120 = v55;
          v57 = (v53 - 12) / 0xCuLL;
          v58 = v54;
          if ((~(_BYTE)v57 & 7) != 0) {
            v59 = ((_BYTE)v57 + 1) & 7;
            v58 = v54;
            do {
              *(_QWORD*)v58 = 0xFFFFFFFF0000FFFFLL;
              *(_DWORD*)(v58 + 8) = 0x7FFFFFFF;
              v58 += 12;
              --v59;
            } while (v59 != 0);
          }
          if ((unsigned __int64)(v53 - 12) >= 0x54) {
            do {
              *(_QWORD*)v58 = 0xFFFFFFFF0000FFFFLL;
              *(_QWORD*)(v58 + 8) = 0xFFFF7FFFFFFFLL;
              *(_QWORD*)(v58 + 16) = 0x7FFFFFFFFFFFFFFFLL;
              *(_QWORD*)(v58 + 24) = 0xFFFFFFFF0000FFFFLL;
              *(_QWORD*)(v58 + 32) = 0xFFFF7FFFFFFFLL;
              *(_QWORD*)(v58 + 40) = 0x7FFFFFFFFFFFFFFFLL;
              *(_QWORD*)(v58 + 48) = 0xFFFFFFFF0000FFFFLL;
              *(_QWORD*)(v58 + 56) = 0xFFFF7FFFFFFFLL;
              *(_QWORD*)(v58 + 64) = 0x7FFFFFFFFFFFFFFFLL;
              *(_QWORD*)(v58 + 72) = 0xFFFFFFFF0000FFFFLL;
              *(_QWORD*)(v58 + 80) = 0xFFFF7FFFFFFFLL;
              *(_QWORD*)(v58 + 88) = 0x7FFFFFFFFFFFFFFFLL;
              v58 += 96;
            } while (v58 != v55);
          }
          v117_.v119 = v55;
        }
        else {
          v56 = v115;
          v54 = 0;
        }
        v63 = 20;
        v64 = 0;
        v117_.v125 = 0;
        memset(v126, 0, 14);
        v117_.v123 = nullptr;
        v117_.v124 = 0;
        v117_.v121 = 0;
        v117_.v122 = nullptr;
        while (1) {
          v65 = *v2;
          v66 = v54 + 12LL * *v2;
          if (*(_DWORD*)(v66 + 4) != -1) {
          LABEL_94:
            LODWORD(v126[1]) = v64;
            v75 = nullptr;
            v76 = nullptr;
            v77 = 0;
            BYTE5(v126[1]) = 1;
            goto LABEL_95;
          }
          *(_DWORD*)(v66 + 4) = v64;
          *(_DWORD*)(v66 + 8) = 0;
          for (j = *(_QWORD*)(v49 + 16) + 96LL * v65;;
               j = *(_QWORD*)(v49 + 16) + 96LL * v68) {
            v68 = *(unsigned __int16*)(j + 42);
            if (v68 == 0xFFFF) {
              break;
            }
            v69 = v54 + 12LL * v68;
            if ((*(_DWORD*)(v69 + 4) & 0x80000000) == 0) {
              goto LABEL_93;
            }
            *(_QWORD*)(v69 + 4) = -2;
          }
          if (v63 == 28) {
            break;
          }
          v70 = v56[v63 + 1];
          v71 = v54 + 12LL * v70;
          if (*(_DWORD*)(v71 + 4) != -1) {
          LABEL_93:
            v64 |= 1u;
            goto LABEL_94;
          }
          *(_DWORD*)(v71 + 4) = v64 | 1;
          *(_DWORD*)(v71 + 8) = 0;
          v64 += 2;
          for (k = *(_QWORD*)(v49 + 16) + 96LL * v70;;
               k = *(_QWORD*)(v49 + 16) + 96LL * v73) {
            v73 = *(unsigned __int16*)(k + 42);
            if (v73 == 0xFFFF) {
              break;
            }
            v74 = v54 + 12LL * v73;
            if ((*(_DWORD*)(v74 + 4) & 0x80000000) == 0) {
              goto LABEL_94;
            }
            *(_QWORD*)(v74 + 4) = -2;
          }
          v63 += 2;
          v2 = &v56[v63];
        }
        LODWORD(v126[1]) = v64 | 1;
        game_fc45a0((void*)(v116), (__int64)v117_.v117);
        v88 = *((_QWORD*)v56 + 6);
        if (v88 != 0) {
          v89 = *(_QWORD*)v51;
          *((_QWORD*)v56 + 7) = v88;
          v90 = 128;
          if (*(_QWORD*)(v89 + 200) == 0) {
            v90 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v89 + v90, v88);
        }
        qmemcpy(v56 + 12, v116, 24);
        v91 = *(_QWORD*)(v3 + 8);
        if (v91 == 0) {
          goto LABEL_151;
        }
        v92 = v91 + 8;
        v93 = *(unsigned __int16*)(v91 + 12);
        v94 = v91 + 8 + 16 * v93;
        v95 = *(_DWORD*)v94;
        if ((signed __int32)*(_DWORD*)(v91 + 8) <
            (signed __int32)*(_DWORD*)v94) {
          do {
            if ((unsigned int)(v95 >> 3) <= 9) {
              v96 = ((unsigned __int8)GameData_1a865b8[~(v95 >> 3) + 10] >>
                     (v95 & 7)) &
                    1;
            }
            else {
              v96 = 0;
            }
            v93 = *(unsigned __int16*)(v91 + 12 + 16 * v93 + 2 * v96);
            v10 = v95 < (signed __int32)*(_DWORD*)(v92 + 16 * v93);
            v95 = *(_DWORD*)(v92 + 16 * v93);
          } while (v10);
          v94 = v92 + 16 * v93;
        }
        v97 = *(_QWORD*)(v94 + 8);
        if (*(_WORD*)v97 == 10) {
          v98 = *(_QWORD*)(v97 + 2);
          v99 = *(unsigned __int16*)(v97 + 10);
          v100 = (unsigned __int64)(v94 - v91 - 24) >> 4;
          if (v98 != 0x654C5F4C5F746E4ALL || v99 != 12647) {
            LODWORD(v100) = -1;
          }
        }
        else {
        LABEL_151:
          LODWORD(v100) = -1;
        }
        v56[18] = v100;
        v103 = *(_QWORD*)(v3 + 8);
        if (v103 == 0) {
          goto LABEL_165;
        }
        v104 = v103 + 8;
        v105 = *(unsigned __int16*)(v103 + 12);
        v106 = v103 + 8 + 16 * v105;
        v107 = *(_DWORD*)v106;
        if ((signed __int32)*(_DWORD*)(v103 + 8) <
            (signed __int32)*(_DWORD*)v106) {
          do {
            if ((unsigned int)(v107 >> 3) <= 9) {
              v108 = ((unsigned __int8)GameData_1aa5485[~(v107 >> 3) + 10] >>
                      (v107 & 7)) &
                     1;
            }
            else {
              v108 = 0;
            }
            v105 = *(unsigned __int16*)(v103 + 12 + 16 * v105 + 2 * v108);
            v10 = v107 < (signed __int32)*(_DWORD*)(v104 + 16 * v105);
            v107 = *(_DWORD*)(v104 + 16 * v105);
          } while (v10);
          v106 = v104 + 16 * v105;
        }
        v109 = *(_QWORD*)(v106 + 8);
        if (*(_WORD*)v109 == 10 && ((v110 = *(_QWORD*)(v109 + 2),
                                     v111 = *(unsigned __int16*)(v109 + 10),
                                     v110 == 0x654C5F525F746E4ALL)
                                        ? (v112 = v111 == 12647)
                                        : (v112 = false),
                                    v112)) {
          v113 = (unsigned __int64)(v106 - v103 - 24) >> 4;
        }
        else {
        LABEL_165:
          LODWORD(v113) = -1;
        }
        v76 = v117_.v122;
        v75 = v117_.v123;
        v56[19] = v113;
        v77 = 1;
      LABEL_95:
        v126[0] = 0;
        v78 = v75 - v76;
        if (v78 < 3) {
          v79 = v76;
          if (v78 == 1) {
          LABEL_107:
            v83 = 256;
            goto LABEL_108;
          }
        }
        else {
          v79 = v117_.v122;
          v80 = (char*)v75 - (char*)v117_.v122 - 8;
          do {
            v81 = *v76;
            if (*v76 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v51 + 200LL) != 0) {
                v82 = 128;
              }
              else {
                v82 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v51 + v82, v81);
            }
            ++v79;
            v78 = v80 >> 3;
            v80 -= 8;
            v76 = v79;
          } while (v78 > 2);
          v117_.v122 = v79;
          if (v78 == 1) {
            goto LABEL_107;
          }
        }
        if (v78 == 2) {
          v83 = 512;
        LABEL_108:
          v117_.v125 = v83;
        }
        for (; v79 != v75; ++v79) {
          if (*v79 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v51 + 200LL) != 0) {
              v84 = 128;
            }
            else {
              v84 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v51 + v84, *v79);
          }
        }
        if (v117_.v121 != 0) {
          v85 = 128;
          if (*(_QWORD*)(*(_QWORD*)v51 + 200LL) == 0) {
            v85 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v51 + v85, v117_.v121);
        }
        if (v117_.v118 != 0) {
          v86 = 128;
          if (*(_QWORD*)(*(_QWORD*)v51 + 200LL) == 0) {
            v86 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v51 + v86, v117_.v118);
        }
        return v77;
      }
    }
  }
  *(_DWORD*)(a1 + 96) = -1;
  goto LABEL_29;
}

float32x4_t IKSkirt_Unknown4(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  __int64 v4;
  __int64 v5;
  float32x4_t result;
  int* v7;
  int* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float32x4_t* v14;
  float32x4_t* v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  int8x16_t v22;
  int8x16_t v23;
  char v24;

  v1 = *(_QWORD*)(a1 + 40);
  v2 = *(_DWORD*)(a1 + 72);
  LANES128(v23).n128_u8[0] = 0;
  v24 = 0;
  v4 = *(_QWORD*)(v1 + 168);
  if (v2 == -1) {
    v5 = *(unsigned int*)(a1 + 76);
    if ((_DWORD)v5 == -1) {
      goto LABEL_10;
    }
    goto LABEL_5;
  }
  GameRoutine_fc5ce0((void*)(&v23), a1, 1, v2, *(unsigned int*)(a1 + 80),
                     *(unsigned int*)(a1 + 84), *(unsigned int*)(a1 + 88),
                     *(unsigned int*)(a1 + 92));
  v5 = *(unsigned int*)(a1 + 76);
  v24 = 1;
  if ((_DWORD)v5 != -1) {
  LABEL_5:
    GameRoutine_fc5ce0((void*)(&v22), a1, 0, v5, *(unsigned int*)(a1 + 108),
                       *(unsigned int*)(a1 + 104), *(unsigned int*)(a1 + 100),
                       *(unsigned int*)(a1 + 96));
    if (v2 == -1) {
      v23 = v22;
      v24 = 1;
    }
    else if (fabsf(LANES128(v23).n128_f32[3]) >
             fabsf(LANES128(v22).n128_f32[3])) {
      LANES128(v23).n128_u64[0] = LANES128(v22).n128_u64[0];
      LANES128(v23).n128_u64[1] =
          LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0];
    }
  }
  GameRoutine_fc6740(v4, *(unsigned int*)(a1 + 112), &v23);
LABEL_10:
  v7 = *(int**)(a1 + 48);
  v8 = *(int**)(a1 + 56);
  if (v7 != v8) {
    v9 = *(_QWORD*)(v4 + 24);
    v10 = *(_QWORD*)(v4 + 32);
    do {
      v12 = *v7;
      v11 = v7[1];
      v7 += 2;
      v13 = v9 + 96LL * (int)v11;
      v14 = (float32x4_t*)(v10 + (v12 << 6));
      v15 = (float32x4_t*)(v10 + (v11 << 6));
      v16 = v14[1];
      v17 = v14[2];
      v18 = v14[3];
      v19 = *(float32x4_t*)(v13 + 80);
      v20 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v14, COERCE_FLOAT(*(_OWORD*)(v13 + 64))),
                         v16, *(float32x2_t*)(v13 + 64), 1),
          v17, *(float32x4_t*)(v13 + 64), 2);
      result = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v14, COERCE_FLOAT(*(_OWORD*)(v13 + 48))),
                         v16, *(float32x2_t*)(v13 + 48), 1),
          v17, *(float32x4_t*)(v13 + 48), 2);
      v21 =
          vmlaq_lane_f32(vmulq_n_f32(*v14, LANES128(v19).n128_f32[0]), v16,
                         COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), 1);
      *v15 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v14, COERCE_FLOAT(*(_OWORD*)(v13 + 32))),
                         v16, *(float32x2_t*)(v13 + 32), 1),
          v17, *(float32x4_t*)(v13 + 32), 2);
      v15[1] = result;
      v15[2] = v20;
      v15[3] = vaddq_f32(vmlaq_laneq_f32(v21, v17, v19, 2), v18);
    } while (v7 != v8);
  }
  return result;
}

__attribute__((swiftcall)) void IKSkirt_fc5ce0(PSEUDO_X8 x8_, __int64 a1,
                                               char a2, int a3, int a4, int a5,
                                               int a6, int a7)
{
  float32x4_t* a8 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v15;
  __int128* v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  float v20;
  float v21;
  float v22;
  float32x4_t v23;
  float v24;
  unsigned int v25;
  __int128 v26;
  __int128 v27;
  __int128* v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  float v32;
  float v33;
  float v34;
  float32x4_t v35;
  float v36;
  unsigned int v37;
  __int128 v38;
  __int128 v39;
  _OWORD* v40;
  __int128 v41;
  __int128 v42;
  __int128 v43;
  float32x4_t v44;
  float v45;
  float v46;
  float v47;
  __int128 v48;
  float v49;
  unsigned int v50;
  __int128 v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  int8x16_t v60;
  int8x16_t v61;
  float32x4_t v62;
  float32x4_t v63;
  int8x16_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  __int128* v68;
  __int128 v69;
  __int128 v70;
  __int128 v71;
  float32x4_t v72;
  float v73;
  float v74;
  float v75;
  __int128 v76;
  float v77;
  unsigned int v78;
  __int128 v79;
  int8x16_t v80;
  int8x16_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  int8x16_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  int8x16_t v90;
  float32x4_t v91;
  int8x16_t v92;
  int8x16_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t v96;
  float32x4_t v97;
  int8x16_t v98;
  float32x4_t v99;
  float v100;
  float32x4_t v101;
  float v102;
  float v103;
  float v104;
  float v105;
  unsigned __int8 explicit;
  float v107;
  int v108;
  __int64 v109;
  int v110;
  __int64 v111;
  int v112;
  __int64 v113;
  __int64 v114;
  int v115;
  __int64 v116;
  int v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int128 v121;
  __int128 v122;
  __int128 v123;
  int8x16_t v124;
  __int128 v125;
  __int128 v126;
  __int128 v127;
  float v128;
  __int128 v129;
  __int128 v130;
  __int128 v131;
  float v132;
  __int128 v133;
  __int128 v134;
  __int128 v135;
  int8x16_t v136;
  int8x16_t v137;
  int8x16_t v138;
  struct {
    float32x4_t v139;
    __int128 v140;
    __int128 v141;
    __int128 v142;
  } v139_;

  v15 = *(_QWORD**)(*(_QWORD*)(a1 + 40) + 168LL);
  v16 = (__int128*)(v15[4] + ((__int64)a3 << 6));
  v17 = *v16;
  v18 = v16[1];
  v19 = v16[2];
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v129 = v18;
    v133 = v19;
    v125 = v17;
    v108 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    v17 = v125;
    v18 = v129;
    v19 = v133;
    if (v108 != 0) {
      v109 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v109;
      __cxa_guard_release((__int64)&GameData_21a6130);
      v17 = v125;
      v18 = v129;
      v19 = v133;
    }
  }
  v20 = sqrtf(
      (float)(vmuls_lane_f32(*((float*)&v17 + 1), *(float32x2_t*)&v17, 1) +
              (float)(*(float*)&v17 * *(float*)&v17)) +
      (float)(*((float*)&v17 + 2) * *((float*)&v17 + 2)));
  v21 = sqrtf(
      (float)(vmuls_lane_f32(*((float*)&v18 + 1), *(float32x2_t*)&v18, 1) +
              (float)(*(float*)&v18 * *(float*)&v18)) +
      (float)(*((float*)&v18 + 2) * *((float*)&v18 + 2)));
  v22 = sqrtf(
      (float)(vmuls_lane_f32(*((float*)&v19 + 1), *(float32x2_t*)&v19, 1) +
              (float)(*(float*)&v19 * *(float*)&v19)) +
      (float)(*((float*)&v19 + 2) * *((float*)&v19 + 2)));
  LANES128(v23).n128_u32[3] = 0;
  LANES128(v23).n128_f32[0] = *(float*)&v17 / v20;
  LANES128(v23).n128_f32[1] = *((float*)&v17 + 1) / v20;
  LANES128(v23).n128_f32[2] = *((float*)&v17 + 2) / v20;
  v24 = *((float*)&v18 + 1) / v21;
  *(float*)&v25 = *((float*)&v18 + 2) / v21;
  *(float*)&v26 = *(float*)&v18 / v21;
  *((float*)&v26 + 1) = v24;
  *((_QWORD*)&v26 + 1) = v25;
  HIDWORD(v27) = 0;
  *(float*)&v27 = *(float*)&v19 / v22;
  v139_.v139 = v23;
  v139_.v140 = v26;
  *((float*)&v27 + 1) = *((float*)&v19 + 1) / v22;
  *((float*)&v27 + 2) = *((float*)&v19 + 2) / v22;
  v139_.v141 = v27;
  v139_.v142 = GameData_21a6120;
  Quat_624bc0((void*)(&v136), (__int64)&v139_.v139);
  v28 = (__int128*)(v15[4] + ((unsigned __int64)*(
                                  unsigned __int16*)(v15[2] + 96LL * a3 + 42)
                              << 6));
  v29 = *v28;
  v30 = v28[1];
  v31 = v28[2];
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v130 = v30;
    v134 = v31;
    v126 = v29;
    v110 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    v29 = v126;
    v30 = v130;
    v31 = v134;
    if (v110 != 0) {
      v111 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v111;
      __cxa_guard_release((__int64)&GameData_21a6130);
      v29 = v126;
      v30 = v130;
      v31 = v134;
    }
  }
  v32 = sqrtf(
      (float)(vmuls_lane_f32(*((float*)&v29 + 1), *(float32x2_t*)&v29, 1) +
              (float)(*(float*)&v29 * *(float*)&v29)) +
      (float)(*((float*)&v29 + 2) * *((float*)&v29 + 2)));
  v33 = sqrtf(
      (float)(vmuls_lane_f32(*((float*)&v30 + 1), *(float32x2_t*)&v30, 1) +
              (float)(*(float*)&v30 * *(float*)&v30)) +
      (float)(*((float*)&v30 + 2) * *((float*)&v30 + 2)));
  v34 = sqrtf(
      (float)(vmuls_lane_f32(*((float*)&v31 + 1), *(float32x2_t*)&v31, 1) +
              (float)(*(float*)&v31 * *(float*)&v31)) +
      (float)(*((float*)&v31 + 2) * *((float*)&v31 + 2)));
  LANES128(v35).n128_u32[3] = 0;
  LANES128(v35).n128_f32[0] = *(float*)&v29 / v32;
  LANES128(v35).n128_f32[1] = *((float*)&v29 + 1) / v32;
  LANES128(v35).n128_f32[2] = *((float*)&v29 + 2) / v32;
  v36 = *((float*)&v30 + 1) / v33;
  *(float*)&v37 = *((float*)&v30 + 2) / v33;
  *(float*)&v38 = *(float*)&v30 / v33;
  *((float*)&v38 + 1) = v36;
  *((_QWORD*)&v38 + 1) = v37;
  HIDWORD(v39) = 0;
  *(float*)&v39 = *(float*)&v31 / v34;
  v139_.v139 = v35;
  v139_.v140 = v38;
  *((float*)&v39 + 1) = *((float*)&v31 + 1) / v34;
  *((float*)&v39 + 2) = *((float*)&v31 + 2) / v34;
  v139_.v141 = v39;
  v139_.v142 = GameData_21a6120;
  Quat_624bc0((void*)(&v138), (__int64)&v139_.v139);
  v40 = (_OWORD*)(v15[3] + 96LL * a3);
  v41 = v40[2];
  v42 = v40[3];
  v43 = v40[4];
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v131 = v42;
    v135 = v43;
    v127 = v41;
    v112 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    v41 = v127;
    v42 = v131;
    v43 = v135;
    if (v112 != 0) {
      v113 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v113;
      __cxa_guard_release((__int64)&GameData_21a6130);
      v41 = v127;
      v42 = v131;
      v43 = v135;
    }
  }
  LANES128(v44).n128_u32[3] = 0;
  v45 = sqrtf(
      (float)(vmuls_lane_f32(*((float*)&v41 + 1), *(float32x2_t*)&v41, 1) +
              (float)(*(float*)&v41 * *(float*)&v41)) +
      (float)(*((float*)&v41 + 2) * *((float*)&v41 + 2)));
  v46 = sqrtf(
      (float)(vmuls_lane_f32(*((float*)&v42 + 1), *(float32x2_t*)&v42, 1) +
              (float)(*(float*)&v42 * *(float*)&v42)) +
      (float)(*((float*)&v42 + 2) * *((float*)&v42 + 2)));
  v47 = sqrtf(
      (float)(vmuls_lane_f32(*((float*)&v43 + 1), *(float32x2_t*)&v43, 1) +
              (float)(*(float*)&v43 * *(float*)&v43)) +
      (float)(*((float*)&v43 + 2) * *((float*)&v43 + 2)));
  HIDWORD(v48) = 0;
  LANES128(v44).n128_f32[0] = *(float*)&v41 / v45;
  LANES128(v44).n128_f32[1] = *((float*)&v41 + 1) / v45;
  LANES128(v44).n128_f32[2] = *((float*)&v41 + 2) / v45;
  v49 = *((float*)&v42 + 1) / v46;
  *(float*)&v50 = *((float*)&v42 + 2) / v46;
  *(float*)&v51 = *(float*)&v42 / v46;
  *((float*)&v51 + 1) = v49;
  *(float*)&v48 = *(float*)&v43 / v47;
  *((_QWORD*)&v51 + 1) = v50;
  *((float*)&v48 + 1) = *((float*)&v43 + 1) / v47;
  v139_.v139 = v44;
  v139_.v140 = v51;
  *((float*)&v48 + 2) = *((float*)&v43 + 2) / v47;
  v139_.v141 = v48;
  v139_.v142 = GameData_21a6120;
  Quat_624bc0((void*)(&v137), (__int64)&v139_.v139);
  LANES128(v52).n128_u64[0] = LANES128(v138).n128_u64[0];
  LANES128(v53).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v54).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v137, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v55).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v53).n128_u64[1] = LANES128(v53).n128_u64[0];
  LANES128(v52).n128_u64[1] = LANES128(v55).n128_u64[0];
  *(int8x8_t*)&LANES128(v54).n128_i8[8] =
      vqtbl1_s8(v137, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v56).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v137, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v57 =
      vmlaq_f32(vmulq_f32(v137, v53), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v52, v54));
  LANES128(v54).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v56).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v137).n128_u64[0]), 1);
  LANES128(v55).n128_u64[1] = LANES128(v54).n128_u64[0];
  LANES128(v54).n128_u64[1] = LANES128(v138).n128_u64[0];
  LANES128(v58).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v137, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v58).n128_i8[8] =
      vqtbl1_s8(v137, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v59 = vmlsq_f32(vmlaq_f32(v57, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v54, v56)),
                  v58, v55);
  v60 = vmulq_f32(v59, v59);
  v61 = vmulq_f32(v59, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v60).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v60, v60, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0])))
          .n64_u64[0];
  LANES128(v60).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0])))
          .n64_u64[0];
  LANES128(v60).n128_u64[1] = LANES128(v60).n128_u64[0];
  v62 = vrecpeq_f32(v60);
  v63 = vmulq_f32(v62, vrecpsq_f32(v62, v60));
  v64 = vbslq_s8(vceqzq_f32(v60), v61,
                 vmulq_f32(v61, vmulq_f32(v63, vrecpsq_f32(v63, v60))));
  LANES128(v55).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v63).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v136, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v56).n128_u64[0] = LANES128(v136).n128_u64[0];
  *(int8x8_t*)&LANES128(v55).n128_i8[8] =
      vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v54).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v63).n128_u64[1] = LANES128(v63).n128_u64[0];
  v65 = vmulq_f32(v64, v63);
  LANES128(v63).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v136, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v56).n128_u64[1] = LANES128(v63).n128_u64[0];
  v66 = vmlaq_f32(v65, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v56, v55));
  LANES128(v55).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v136, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v54).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v64).n128_u64[0]), 1);
  LANES128(v63).n128_u64[1] = LANES128(v55).n128_u64[0];
  LANES128(v55).n128_u64[1] = LANES128(v136).n128_u64[0];
  LANES128(v60).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v60).n128_i8[8] =
      vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v67 = vmlsq_f32(vmlaq_f32(v66, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v55, v54)),
                  v60, v63);
  v137 = v67;
  if (fabsf(LANES128(v67).n128_f32[3]) <= 0x1.fff2e40000000p-1f) {
    v124 = v67;
    v68 = (__int128*)(v15[4] + ((__int64)a4 << 6));
    v69 = *v68;
    v70 = v68[1];
    v71 = v68[2];
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      v122 = v70;
      v123 = v71;
      v121 = v69;
      v115 = __cxa_guard_acquire((__int64)&GameData_21a6130);
      v69 = v121;
      v70 = v122;
      v71 = v123;
      if (v115 != 0) {
        v116 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v116;
        __cxa_guard_release((__int64)&GameData_21a6130);
        v69 = v121;
        v70 = v122;
        v71 = v123;
      }
    }
    LANES128(v72).n128_u32[3] = 0;
    v73 = sqrtf(
        (float)(vmuls_lane_f32(*((float*)&v69 + 1), *(float32x2_t*)&v69, 1) +
                (float)(*(float*)&v69 * *(float*)&v69)) +
        (float)(*((float*)&v69 + 2) * *((float*)&v69 + 2)));
    v74 = sqrtf(
        (float)(vmuls_lane_f32(*((float*)&v70 + 1), *(float32x2_t*)&v70, 1) +
                (float)(*(float*)&v70 * *(float*)&v70)) +
        (float)(*((float*)&v70 + 2) * *((float*)&v70 + 2)));
    v75 = sqrtf(
        (float)(vmuls_lane_f32(*((float*)&v71 + 1), *(float32x2_t*)&v71, 1) +
                (float)(*(float*)&v71 * *(float*)&v71)) +
        (float)(*((float*)&v71 + 2) * *((float*)&v71 + 2)));
    HIDWORD(v76) = 0;
    LANES128(v72).n128_f32[0] = *(float*)&v69 / v73;
    LANES128(v72).n128_f32[1] = *((float*)&v69 + 1) / v73;
    LANES128(v72).n128_f32[2] = *((float*)&v69 + 2) / v73;
    v77 = *((float*)&v70 + 1) / v74;
    *(float*)&v78 = *((float*)&v70 + 2) / v74;
    *(float*)&v79 = *(float*)&v70 / v74;
    *((float*)&v79 + 1) = v77;
    *(float*)&v76 = *(float*)&v71 / v75;
    *((_QWORD*)&v79 + 1) = v78;
    *((float*)&v76 + 1) = *((float*)&v71 + 1) / v75;
    v139_.v139 = v72;
    v139_.v140 = v79;
    *((float*)&v76 + 2) = *((float*)&v71 + 2) / v75;
    v139_.v141 = v76;
    v139_.v142 = GameData_21a6120;
    Quat_624bc0((void*)(&v138), (__int64)&v139_.v139);
    v80 = vmulq_f32(v138, v138);
    v81 = vmulq_f32(v138, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v80).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v80, v80, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0])))
            .n64_u64[0];
    LANES128(v80).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0])))
            .n64_u64[0];
    LANES128(v80).n128_u64[1] = LANES128(v80).n128_u64[0];
    v82 = vrecpeq_f32(v80);
    v83 = vmulq_f32(v82, vrecpsq_f32(v82, v80));
    LANES128(v84).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v124, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v84).n128_i8[8] =
        vqtbl1_s8(v124, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v85).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v124, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v86 = vbslq_s8(vceqzq_f32(v80), v81,
                   vmulq_f32(v81, vmulq_f32(v83, vrecpsq_f32(v83, v80))));
    LANES128(v80).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v83).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v87).n128_u64[0] = LANES128(v86).n128_u64[0];
    LANES128(v80).n128_u64[1] = LANES128(v80).n128_u64[0];
    LANES128(v87).n128_u64[1] = LANES128(v83).n128_u64[0];
    *(int32x2_t*)&LANES128(v85).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v124).n128_u64[0]), 1);
    v88 = vmlaq_f32(vmulq_f32(v124, v80),
                    COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v87, v84));
    LANES128(v84).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v83).n128_u64[1] = LANES128(v84).n128_u64[0];
    LANES128(v84).n128_u64[1] = LANES128(v86).n128_u64[0];
    v89 = vmlaq_f32(v88, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v84, v85));
    LANES128(v86).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v124, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v86).n128_i8[8] =
        vqtbl1_s8(v124, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v84).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v84).n128_i8[8] =
        vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v85).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v90 = vmlsq_f32(v89, v86, v83);
    LANES128(v86).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v90, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v83).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v90, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v87).n128_u64[0] = LANES128(v90).n128_u64[0];
    LANES128(v86).n128_u64[1] = LANES128(v86).n128_u64[0];
    LANES128(v87).n128_u64[1] = LANES128(v83).n128_u64[0];
    *(int32x2_t*)&LANES128(v85).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v138).n128_u64[0]), 1);
    v91 = vmlaq_f32(vmulq_f32(v138, v86),
                    COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v87, v84));
    LANES128(v84).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v90, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v83).n128_u64[1] = LANES128(v84).n128_u64[0];
    LANES128(v84).n128_u64[1] = LANES128(v90).n128_u64[0];
    LANES128(v90).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v90).n128_i8[8] =
        vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v92 = vmlsq_f32(vmlaq_f32(v91, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v84, v85)),
                    v90, v83);
    v93 = vmulq_f32(v92, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v94).n128_u64[0] = 1092616192;
    LANES128(v95).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82b00),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v84).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82b00),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v83).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82b00),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v85).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v96).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v95).n128_u64[1] = LANES128(v95).n128_u64[0];
    LANES128(v85).n128_u64[1] = LANES128(v84).n128_u64[0];
    LANES128(v96).n128_u64[1] = 1092616192;
    *(int8x8_t*)&LANES128(v94).n128_i8[8] =
        vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v84).n128_u64[1] = LANES128(v83).n128_u64[0];
    LANES128(v87).n128_u64[0] = LANES128(v92).n128_u64[0];
    *(int32x2_t*)&LANES128(v83).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v93).n128_u64[0]), 1);
    v97 = vmlaq_f32(
        vmlaq_f32(vmulq_f32(v95, v93), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v94, v85)),
        COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v83, v96));
    LANES128(v83).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v83).n128_i8[8] =
        vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v93).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v92, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v93).n128_u64[1] = LANES128(v93).n128_u64[0];
    v98 = vmlsq_f32(v97, v83, v84);
    LANES128(v83).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v92, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v84).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v87).n128_u64[1] = LANES128(v83).n128_u64[0];
    *(int8x8_t*)&LANES128(v84).n128_i8[8] =
        vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v85).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v99 =
        vmlaq_f32(vmulq_f32(v93, v98), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v87, v84));
    LANES128(v84).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v92, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v85).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v98).n128_u64[0]), 1);
    LANES128(v83).n128_u64[1] = LANES128(v84).n128_u64[0];
    LANES128(v84).n128_u64[1] = LANES128(v92).n128_u64[0];
    LANES128(v92).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v92).n128_i8[8] =
        vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v100 = 0x1.0000000000000p+0f;
    v101 = vmlsq_f32(vmlaq_f32(v99, COERCE_AS(float32x4_t, GameData_1a83800),
                               vmulq_f32(v84, v85)),
                     v92, v83);
    LANES128(v101).n128_u32[0] = LANES128(v101).n128_u32[2];
    v102 = -LANES128(v101).n128_f32[1];
    if (LANES128(v101).n128_f32[1] <= 0x1.0000000000000p+0f) {
      v103 = LANES128(v101).n128_f32[1];
    }
    else {
      v103 = 0x1.0000000000000p+0f;
    }
    if (LANES128(v101).n128_f32[1] < -0x1.0000000000000p+0f) {
      v102 = 0x1.0000000000000p+0f;
    }
    if (LANES128(v101).n128_f32[1] >= 0x0.0p+0f) {
      v104 = v103;
    }
    else {
      v104 = 0x0.0p+0f;
    }
    if (LANES128(v101).n128_f32[1] <= 0x0.0p+0f) {
      v105 = v102;
    }
    else {
      v105 = 0x0.0p+0f;
    }
    v128 = v104;
    v132 = v105;
    explicit = atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                                    memory_order_acquire);
    if ((a2 & 1) != 0) {
      LANES128(v101).n128_f32[0] = -LANES128(v101).n128_f32[2];
    }
    if (LANES128(v101).n128_f32[0] <= 0x1.0000000000000p+0f) {
      v100 = LANES128(v101).n128_f32[0];
    }
    if (LANES128(v101).n128_f32[0] >= 0x0.0p+0f) {
      v107 = v100;
    }
    else {
      v107 = 0x0.0p+0f;
    }
    if ((explicit & 1) == 0) {
      v117 = __cxa_guard_acquire((__int64)&GameData_21a5680);
      v104 = v128;
      if (v117 != 0) {
        v118 = *((_QWORD*)GameData_212c2f8 + 1);
        *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
        *((_QWORD*)&GameData_21a5670 + 1) = v118;
        __cxa_guard_release((__int64)&GameData_21a5680);
        v104 = v128;
      }
    }
    math_Quat_Slerp((void*)(a8), (float32x4_t*)&GameData_21a5670, &v137, v104);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a5680) != 0) {
      v119 = *((_QWORD*)GameData_212c2f8 + 1);
      *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
      *((_QWORD*)&GameData_21a5670 + 1) = v119;
      __cxa_guard_release((__int64)&GameData_21a5680);
    }
    math_Quat_Slerp((void*)(&v139_.v139), (float32x4_t*)&GameData_21a5670,
                    &v137, v107);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a5680) != 0) {
      v120 = *((_QWORD*)GameData_212c2f8 + 1);
      *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
      *((_QWORD*)&GameData_21a5670 + 1) = v120;
      __cxa_guard_release((__int64)&GameData_21a5680);
    }
    math_Quat_Slerp((void*)(&v138), (float32x4_t*)&GameData_21a5670, &v137,
                    v132);
    GameRoutine_fc6740_alt1(v15, a4, a8);
    v136 = vmlaq_n_f32(v139_.v139, vsubq_f32(*a8, v139_.v139), v128);
    GameRoutine_fc6740_alt1(v15, a5, &v136);
    v136 = vmlaq_n_f32(v139_.v139, vsubq_f32(v138, v139_.v139), v132);
    GameRoutine_fc6740_alt1(v15, a6, &v136);
    GameRoutine_fc6740_alt1(v15, a7, &v138);
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a5680) != 0) {
      v114 = *((_QWORD*)GameData_212c2f8 + 1);
      *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
      *((_QWORD*)&GameData_21a5670 + 1) = v114;
      __cxa_guard_release((__int64)&GameData_21a5680);
    }
    *a8 = COERCE_AS(float32x4_t, GameData_21a5670);
  }
}

#pragma GCC visibility pop
