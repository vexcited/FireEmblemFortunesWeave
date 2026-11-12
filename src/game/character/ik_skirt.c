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

#pragma GCC visibility pop
