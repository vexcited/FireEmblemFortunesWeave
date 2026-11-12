#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_a6ea10(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, long double);
__int64 AnimCtrlModule_a77840(_QWORD, _QWORD, _QWORD);
__int64 AnimCtrlModule_a77c00(_QWORD, _QWORD);
__int64 AnimLayerCtrlModule_ce3880(_QWORD, _QWORD, _QWORD, float);
__int64 BlendLayer_d2ae40(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_6360e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a539c0(_QWORD);
__int64 GameRoutine_ad7390(_QWORD);
__int64 MaterialAnimModule_be6340(_QWORD);
__int64 ResFile_5e5f00(_QWORD);
__int64 SkeletalBlendCallback_ce4b70(_QWORD, _QWORD, float);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__int64 wld_MaterialAnimModule_LoadAnimAsync(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212ea90;
extern _UNKNOWN* GameData_212eaa0;
extern _UNKNOWN* GameData_212ed90;
extern __int64 (*GameData_20ddb68[])();
extern __int64 (*GameData_20ddbe8[])();
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212ea88;
extern int* GameData_212ea98;
extern int* GameData_212ed88;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_65c760(void);
void __attribute__((noreturn)) String_60a230(void);
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64 game_cutscene_AnimPlayer_PlayMaterialAnim(__int64 result, __int64 a2,
                                                  _QWORD* a3, long double a4);
__int64 game_cutscene_AnimPlayer_LoadMaterialAnim_alt1(
    __int64 a1, __int64 a2,
    _QWORD* a3) __asm__("game_cutscene_AnimPlayer_LoadMaterialAnim");
__int64 MaterialAnimModule_be6340_alt1(__int64 result) __asm__(
    "MaterialAnimModule_be6340");
char* GameRoutine_60a060_alt1(char*, __int64,
                              unsigned __int64) __asm__("GameRoutine_60a060");
__int64 game_cutscene_AnimPlayer_PlayMaterialAnim_lambda0_Invoke(__int64 result,
                                                                 _BYTE* a2);
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
__int64 wld_MaterialAnimModule_LoadAnimAsync_alt1(
    _QWORD*, const char*, __int64,
    __int64) __asm__("wld_MaterialAnimModule_LoadAnimAsync");
bool GameRoutine_ad7390_alt1(_QWORD*) __asm__("GameRoutine_ad7390");
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
unsigned __int8*
GameRoutine_a539c0_alt1(unsigned __int8* result, __int64,
                        unsigned __int64) __asm__("GameRoutine_a539c0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_65c760_alt1() __asm__("GameRoutine_65c760");
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
void __attribute__((noreturn)) fs_60a230();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_cutscene_AnimPlayer_LoadMaterialAnim(__int64* a1, _QWORD* a2,
                                               _QWORD* a3);

__int64 game_cutscene_AnimPlayer_PlayMaterialAnim(__int64 result, __int64 a2,
                                                  _QWORD* a3, long double a4)
{
  unsigned __int8 explicit;
  int* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float v12;
  _QWORD* v13;
  __int64 v14;
  char v15;
  char v16;
  __int64 v17;
  __int64 v18;
  unsigned __int8 v19;
  int* v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float v27;
  _QWORD* v28;
  __int64 v29;
  char v30;
  char v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 i;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int8 v41;
  int* v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  _QWORD* v50;
  unsigned __int64 v51;
  char* v52;
  char* v53;
  unsigned __int64 v54;
  char* v55;
  char* v56;
  char* v57;
  char* v58;
  signed __int64 v59;
  __int64 v60;
  char* v61;
  int v62;
  char* v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  bool v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  char* v73;
  unsigned __int64 v74;
  int v75;
  long double v76;
  char* v77;
  char* v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  char* v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64* v86;
  __int64 v87;
  _QWORD* v88;
  char* v89;
  __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  int v96;
  __int64 v97;
  __int64 v98;
  __int64* v99;
  unsigned __int64 v100;
  __int64* v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  int v108;
  _QWORD* v109;
  __int64 v110;
  int v111;
  int v112;
  __int64 v113;
  int v114;
  _QWORD* v115;
  __int64 v116;
  int v117;
  int v118;
  __int64 v119;
  int v120;
  _QWORD* v121;
  __int64 v122;
  int v123;
  int v124;
  _QWORD v125[2];
  __int64 v126;
  _QWORD* v127;
  char v128;
  __int64 v129;
  unsigned __int64 v130;
  char* v131;
  unsigned __int64 v132;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                                  memory_order_acquire);
  v5 = GameData_212ed88;
  if ((explicit & 1) == 0) {
    v107 = result;
    v108 = LODWORD(a4);
    v109 = a3;
    v110 = a2;
    v111 = __cxa_guard_acquire(GameData_212ed90);
    LODWORD(a4) = v108;
    a2 = v110;
    a3 = v109;
    v112 = v111;
    result = v107;
    if (v112 != 0) {
      *v5 = wld_Crc32(0, "AnimLayerCtrlModule", 19);
      __cxa_guard_release(GameData_212ed90);
      LODWORD(a4) = v108;
      a2 = v110;
      a3 = v109;
      result = v107;
    }
  }
  v6 = *(_QWORD*)(a2 + 512);
  v7 = v6;
  while (v7 != *(_QWORD*)(a2 + 504)) {
    v8 = *(_DWORD*)(v7 - 16);
    v7 -= 16;
    v6 -= 16;
    if (v8 == *v5) {
      if (*(_QWORD*)(a2 + 512) != v6) {
        v9 = *(_QWORD*)(v6 + 8);
        if (v9 != 0) {
          v10 = a3[7];
          if (v10 != 0 && *(_BYTE*)(v10 + 165) == 1) {
            v11 = result;
            v12 = *(float*)&a4;
            v13 = a3;
            v14 = a2;
            v15 = GameRoutine_ad7390(a3[7]);
            *(float*)&a4 = v12;
            a2 = v14;
            a3 = v13;
            v16 = v15;
            result = v11;
            if ((v16 & 1) != 0) {
              v17 = v13[7];
              if (v17 != 0) {
                if (*(_BYTE*)(v17 + 165) == 1 &&
                    (GameRoutine_ad7390(v17) & 1) != 0 &&
                    *(_BYTE*)((v18 = v13[7]) + 165) == 1 &&
                    (GameRoutine_ad7390(v13[7]) & 1) != 0) {
                  v17 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v18 + 8) + 592LL));
                }
                else {
                  v17 = 0;
                }
              }
              GameRoutine_a6ea10((void*)(v125), v17, 0, a3, a4);
              v34 = *(_QWORD*)(v9 + 32);
              if (*(_BYTE*)(v34 + 52) == 1) {
                *(_BYTE*)(v34 + 52) = 0;
              }
              v35 = *(_QWORD*)(v34 + 24);
              for (i = *(_QWORD*)(v34 + 32); v35 != i; v35 += 56) {
                BlendLayer_d2ae40(v35);
              }
              AnimLayerCtrlModule_ce3880(v9, v125, 0, 0x1.5555560000000p-3);
              SkeletalBlendCallback_ce4b70(v9, 0, v12);
              if ((v125[0] & 1) != 0 && v126 != 0) {
                v37 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v37 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v37);
              }
              *(float*)&a4 = v12;
              result = v11;
              a3 = v13;
              a2 = v14;
            }
          }
          goto LABEL_52;
        }
      }
      break;
    }
  }
  v19 = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea90,
                             memory_order_acquire);
  v20 = GameData_212ea88;
  if ((v19 & 1) == 0) {
    v119 = result;
    v120 = LODWORD(a4);
    v121 = a3;
    v122 = a2;
    v123 = __cxa_guard_acquire(GameData_212ea90);
    LODWORD(a4) = v120;
    a2 = v122;
    a3 = v121;
    v124 = v123;
    result = v119;
    if (v124 != 0) {
      *v20 = wld_Crc32(0, "AnimCtrlModule", 14);
      __cxa_guard_release(GameData_212ea90);
      LODWORD(a4) = v120;
      a2 = v122;
      a3 = v121;
      result = v119;
    }
  }
  v21 = *(_QWORD*)(a2 + 512);
  v22 = v21;
  while (v22 != *(_QWORD*)(a2 + 504)) {
    v23 = *(_DWORD*)(v22 - 16);
    v22 -= 16;
    v21 -= 16;
    if (v23 == *v20) {
      if (*(_QWORD*)(a2 + 512) != v21) {
        v24 = *(_QWORD*)(v21 + 8);
        if (v24 != 0) {
          v25 = a3[7];
          if (v25 != 0 && *(_BYTE*)(v25 + 165) == 1) {
            v26 = result;
            v27 = *(float*)&a4;
            v28 = a3;
            v29 = a2;
            v30 = GameRoutine_ad7390(a3[7]);
            *(float*)&a4 = v27;
            a2 = v29;
            a3 = v28;
            v31 = v30;
            result = v26;
            if ((v31 & 1) != 0) {
              v32 = v28[7];
              if (v32 != 0) {
                if (*(_BYTE*)(v32 + 165) == 1 &&
                    (GameRoutine_ad7390(v32) & 1) != 0 &&
                    *(_BYTE*)((v33 = v28[7]) + 165) == 1 &&
                    (GameRoutine_ad7390(v28[7]) & 1) != 0) {
                  v32 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v33 + 8) + 592LL));
                }
                else {
                  v32 = 0;
                }
              }
              GameRoutine_a6ea10((void*)(v125), v32, 0, a3, a4);
              AnimCtrlModule_a77c00(v24, 0);
              AnimCtrlModule_a77840(v24, v125, 0);
              v38 = **(_QWORD**)(v24 + 72);
              if (v38 != 0) {
                v39 = *(_QWORD*)(v38 + 16);
                if (v39 != 0) {
                  *(float*)v39 = (*(float (**)(_QWORD, float, float, float))(
                      v39 + 16))(*(_QWORD*)(v39 + 24), v27, *(float*)(v39 + 4),
                                 *(float*)(v39 + 8));
                  *(_WORD*)(v38 + 168) = 0;
                }
              }
              *(float*)&a4 = v27;
              a3 = v28;
              *(_BYTE*)(v24 + 249) = 1;
              if ((v125[0] & 1) != 0 && v126 != 0) {
                v40 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v40 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v40);
                *(float*)&a4 = v27;
                a3 = v28;
              }
              result = v26;
              a2 = v29;
            }
          }
        }
      }
      break;
    }
  }
LABEL_52:
  v41 = atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                             memory_order_acquire);
  v42 = GameData_212ea98;
  if ((v41 & 1) == 0) {
    v113 = result;
    v114 = LODWORD(a4);
    v115 = a3;
    v116 = a2;
    v117 = __cxa_guard_acquire(GameData_212eaa0);
    LODWORD(a4) = v114;
    a2 = v116;
    a3 = v115;
    v118 = v117;
    result = v113;
    if (v118 != 0) {
      *v42 = wld_Crc32(0, "MaterialAnimModule", 18);
      __cxa_guard_release(GameData_212eaa0);
      LODWORD(a4) = v114;
      a2 = v116;
      a3 = v115;
      result = v113;
    }
  }
  v43 = *(_QWORD*)(a2 + 512);
  v44 = v43;
  while (v44 != *(_QWORD*)(a2 + 504)) {
    v45 = *(_DWORD*)(v44 - 16);
    v44 -= 16;
    v43 -= 16;
    if (v45 == *v42) {
      if (*(_QWORD*)(a2 + 512) == v43) {
        return result;
      }
      v46 = *(_QWORD*)(v43 + 8);
      if (v46 == 0) {
        return result;
      }
      v47 = a3[7];
      if (v47 == 0) {
        return result;
      }
      if (*(_BYTE*)(v47 + 165) != 1) {
        return result;
      }
      v48 = result;
      v49 = LODWORD(a4);
      v50 = a3;
      result = GameRoutine_ad7390(a3[7]);
      if ((result & 1) == 0) {
        return result;
      }
      if ((v50[1] & 1) != 0) {
        fw_text_String_CopyTerminated(&v129, v50[3], v50[2]);
      }
      else {
        v51 = v50[2];
        v129 = v50[1];
        v130 = v51;
        v131 = (char*)v50[3];
      }
      v52 = (char*)&v129 + 1;
      if ((v129 & 1) != 0) {
        v53 = v131;
      }
      else {
        v53 = (char*)&v129 + 1;
      }
      v54 = (unsigned __int64)(unsigned __int8)v129 >> 1;
      if ((v129 & 1) != 0) {
        v54 = v130;
      }
      if (v54 != 0) {
        v55 = &v53[v54];
        v56 = &v53[v54];
        v57 = v53;
        v58 = &v53[v54];
        while (1) {
          v59 = v56 - v57;
          v60 = (v56 - v57) & 3;
          if (v60 != 0) {
            v61 = v57;
            while (1) {
              v62 = (unsigned __int8)*v61++;
              if (v62 == 46) {
                break;
              }
              --v60;
              v57 = v61;
              if (v60 == 0) {
                goto LABEL_77;
              }
            }
            if (v57 + 1 == v55) {
              goto LABEL_106;
            }
            v63 = v57++;
          }
          else {
            v61 = v57;
          LABEL_77:
            if ((unsigned __int64)(v59 - 1) < 3) {
            LABEL_106:
              if (v58 != v55) {
                v64 = v58 - v53;
                if (v58 - v53 != -1) {
                  if (v64 > v54) {
                    String_60a230();
                  }
                  if (v64 == -7) {
                    if ((v129 & 1) != 0) {
                      v130 = v58 - v53;
                      *(v131 - 7) = 0;
                    }
                    else {
                      LOBYTE(v129) = -14;
                      v128 = 0;
                    }
                  }
                  else {
                    GameRoutine_a539c0(&v129);
                  }
                }
              }
              break;
            }
            v63 = v61 + 2;
            while (1) {
              if (*(v63 - 2) == 46) {
                v57 = v63 - 1;
                if (v63 - 1 == v55) {
                  goto LABEL_106;
                }
                v63 -= 2;
                goto LABEL_95;
              }
              if (*(v63 - 1) == 46) {
                if (v63 == v55) {
                  goto LABEL_106;
                }
                v57 = v63--;
                goto LABEL_95;
              }
              if (*v63 == 46) {
                v57 = v63 + 1;
                if (v63 + 1 != v55) {
                  goto LABEL_95;
                }
                goto LABEL_106;
              }
              v57 = v63 + 2;
              if (v63[1] == 46) {
                break;
              }
              v63 += 4;
              if (v57 == v55) {
                goto LABEL_106;
              }
            }
            if (v63 + 2 == v55) {
              goto LABEL_106;
            }
            ++v63;
          }
        LABEL_95:
          if (*v57 == 98) {
            if (v63 + 2 == v55) {
              goto LABEL_106;
            }
            if (v63[2] == 102) {
              if (v63 + 3 == v55) {
                goto LABEL_106;
              }
              if (v63[3] == 114) {
                if (v63 + 4 == v55) {
                  goto LABEL_106;
                }
                if (v63[4] == 101) {
                  if (v63 + 5 == v55) {
                    goto LABEL_106;
                  }
                  if (v63[5] == 115) {
                    v58 = v63;
                  }
                }
              }
            }
          }
        }
      }
      GameRoutine_1a09ce0(&v129, ".matanimb", 9);
      if ((v129 & 1) != 0) {
        v65 = v130;
      }
      else {
        v65 = (unsigned __int64)(unsigned __int8)v129 >> 1;
      }
      v66 = *((unsigned __int8*)v50 + 8);
      v67 = v50[2];
      if ((v129 & 1) != 0) {
        v52 = v131;
      }
      v68 = (v66 & 1) == 0;
      v69 = v66 >> 1;
      if (v68) {
        v70 = (unsigned __int64)v50 + 9;
      }
      else {
        v70 = v50[3];
      }
      if (v68) {
        v71 = v69;
      }
      else {
        v71 = v67;
      }
      if (v71 != 0) {
        v72 = ~v70;
        v73 = (char*)(v70 - 1);
        v74 = 0;
        while (v71 != v74) {
          v75 = (unsigned __int8)v73[v71];
          ++v74;
          ++v72;
          --v73;
          if (v75 == 47) {
            if (v71 + 1 != v74) {
              if (v71 < v74) {
                String_60a250("string_view::substr");
              }
              v70 = v71 - v72;
              v71 = v74 - 1;
            }
            break;
          }
        }
      }
      result = std___1___hash_memory(v70, v71);
      v78 = *(char**)v48;
      v77 = *(char**)(v48 + 8);
      v79 = result;
      if (*(char**)v48 == v77) {
        LODWORD(v76) = v49;
        goto LABEL_146;
      }
      LODWORD(v76) = v49;
      v80 = v77 - v78 - 8;
      if ((~(_BYTE)v80 & 0x18) != 0) {
        v81 = ((unsigned __int8)((unsigned int)v80 >> 3) + 1) & 3;
        while (*(_QWORD*)v78 != result) {
          v78 += 8;
          if (--v81 == 0) {
            goto LABEL_137;
          }
        }
      LABEL_146:
        if (v78 != v77) {
          *(_BYTE*)(v46 + 76) = 1;
          if (v71 != 0) {
            GameRoutine_60a060(v46 + 48, v70, v71, v76);
            result = MaterialAnimModule_be6340(v46);
            LODWORD(v76) = v49;
          }
          else {
            if ((*(_BYTE*)(v46 + 48) & 1) != 0) {
              **(_BYTE**)(v46 + 64) = 0;
              *(_QWORD*)(v46 + 56) = 0;
            }
            else {
              *(_WORD*)(v46 + 48) = 0;
            }
            *(_DWORD*)(v46 + 72) = -1;
            if ((*(_BYTE*)(v46 + 80) & 1) != 0) {
              **(_BYTE**)(v46 + 96) = 0;
              *(_QWORD*)(v46 + 88) = 0;
            }
            else {
              *(_WORD*)(v46 + 80) = 0;
            }
            *(_QWORD*)(v46 + 108) = 0;
            *(_DWORD*)(v46 + 104) = -1;
          }
          v96 = *(_DWORD*)(v46 + 268);
          *(_DWORD*)(v46 + 264) = LODWORD(v76);
          if (v96 == 0) {
            v97 = *(unsigned int*)(v46 + 72);
            if ((v97 & 0x80000000) == 0) {
              *(float*)(*(_QWORD*)(v46 + 24) + (v97 << 6) + 24) =
                  *(float*)&v76 * 0x1.1111120000000p-6;
            }
          }
          goto LABEL_186;
        }
      }
      else {
      LABEL_137:
        if (v80 >= 0x18) {
          v78 += 16;
          while (1) {
            if (*((_QWORD*)v78 - 2) == result) {
              v78 -= 16;
              goto LABEL_146;
            }
            if (*((_QWORD*)v78 - 1) == result) {
              v78 -= 8;
              goto LABEL_146;
            }
            if (*(_QWORD*)v78 == result) {
              goto LABEL_146;
            }
            if (*((_QWORD*)v78 + 1) == result) {
              break;
            }
            v82 = v78 + 16;
            v78 += 32;
            if (v82 == v77) {
              goto LABEL_149;
            }
          }
          v78 += 8;
          goto LABEL_146;
        }
      }
    LABEL_149:
      if (v52 != nullptr) {
        v83 = *snd_g_fileIndex_ptr[0];
        v84 = strlen(v52);
        result = GameRoutine_6360e0(v83, v52, v84, 0, 0);
        if ((result & 1) != 0) {
          v86 = *(__int64**)(v48 + 8);
          v85 = *(_QWORD*)(v48 + 16);
          v87 = v48;
          if ((unsigned __int64)v86 >= v85) {
            v89 = *(char**)v48;
            v90 = (__int64)v86 - *(_QWORD*)v48;
            v91 = v90 >> 3;
            v92 = (v90 >> 3) + 1;
            if (v92 >> 61 != 0) {
              GameRoutine_65c760();
            }
            v93 = v85 - (_QWORD)v89;
            v132 = v65;
            if (v93 >> 2 > v92) {
              v92 = v93 >> 2;
            }
            if ((unsigned __int64)v93 >= 0x7FFFFFFFFFFFFFF8LL) {
              v94 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v94 = v92;
            }
            if (v94 != 0) {
              if (v94 >> 61 != 0) {
                GameRoutine_60a210(result);
              }
              v95 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v94, 16, 0);
              v91 = v90 >> 3;
            }
            else {
              v95 = 0;
            }
            v98 = v90;
            v99 = (__int64*)(v95 + v90);
            v100 = v95 + 8 * v94;
            v101 = &v99[-v91];
            *v99 = v79;
            v88 = v99 + 1;
            memcpy(v101, v89, v98);
            *(_QWORD*)v48 = v101;
            *(_QWORD*)(v48 + 8) = v88;
            *(_QWORD*)(v48 + 16) = v100;
            if (v89 != nullptr) {
              v102 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v102 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v102);
            }
            v65 = v132;
            v87 = v48;
          }
          else {
            *v86 = v79;
            v88 = v86 + 1;
          }
          *(_QWORD*)(v87 + 8) = v88;
          v103 = v87;
          v104 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
          *(_QWORD*)(v104 + 16) = v46;
          *(_QWORD*)(v104 + 24) = v70;
          *(_QWORD*)(v104 + 32) = v71;
          *(_DWORD*)(v104 + 40) = v49;
          *(_QWORD*)(v104 + 48) = v79;
          v127 = (_QWORD*)v104;
          *(_QWORD*)v104 = GameData_20ddb68;
          *(_QWORD*)(v104 + 8) = v103;
          wld_MaterialAnimModule_LoadAnimAsync(v46, v52, v65, v125);
          result = (__int64)v127;
          if (v127 == v125) {
            v105 = 32;
          LABEL_185:
            result = (*(__int64 (**)(__int64))(*v127 + v105))((__int64)v127);
          }
          else if (v127 != nullptr) {
            v105 = 40;
            goto LABEL_185;
          }
        }
      }
    LABEL_186:
      if ((v129 & 1) != 0 && v131 != nullptr) {
        v106 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v106 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v106);
      }
      return result;
    }
  }
  return result;
}

void game_cutscene_AnimPlayer_LoadMaterialAnim(__int64* a1, _QWORD* a2,
                                               _QWORD* a3)
{
  __int64 v4;
  unsigned __int64 v7;
  __int64 v8;
  const char* v9;
  unsigned __int64 v10;
  char* v11;
  char* v12;
  char* v13;
  char* v14;
  signed __int64 v15;
  __int64 v16;
  char* v17;
  int v18;
  char* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  bool v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;
  __int64 v30;
  char* v31;
  char* v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  char* v36;
  const char* v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  signed __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  bool v54;
  unsigned __int64 v55;
  __int64 v56;
  const char* v57;
  __int64 v58;
  __int64 v59;
  struct {
    _QWORD v60[4];
    _QWORD* v61;
    char gap40_[10];
    char v62;
  } v60_;
  struct {
    __int64 v63;
    unsigned __int64 v64;
    const char* v65;
  } v63_;

  v4 = a3[7];
  if (v4 == 0 || *(_BYTE*)(v4 + 165) != 1 ||
      !GameRoutine_ad7390_alt1((_QWORD*)v4)) {
    return;
  }
  if ((a3[1] & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v63_.v63, a3[3], a3[2]);
  }
  else {
    v7 = a3[2];
    v8 = a3[3];
    v63_.v63 = a3[1];
    v63_.v64 = v7;
    v63_.v65 = (const char*)v8;
  }
  if ((v63_.v63 & 1) != 0) {
    v9 = v63_.v65;
  }
  else {
    v9 = (char*)&v63_.v63 + 1;
  }
  v10 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
  if ((v63_.v63 & 1) != 0) {
    v10 = v63_.v64;
  }
  if (v10 != 0) {
    v11 = (char*)&v9[v10];
    v12 = (char*)&v9[v10];
    v13 = (char*)v9;
    v14 = (char*)&v9[v10];
    while (1) {
      v15 = v12 - v13;
      v16 = (v12 - v13) & 3;
      if (v16 != 0) {
        v17 = v13;
        while (1) {
          v18 = (unsigned __int8)*v17++;
          if (v18 == 46) {
            break;
          }
          --v16;
          v13 = v17;
          if (v16 == 0) {
            goto LABEL_20;
          }
        }
        if (v13 + 1 == v11) {
          goto LABEL_49;
        }
        v19 = v13++;
      }
      else {
        v17 = v13;
      LABEL_20:
        if ((unsigned __int64)(v15 - 1) < 3) {
        LABEL_49:
          if (v14 != v11) {
            v20 = v14 - v9;
            if (v14 - v9 != -1) {
              if (v20 > v10) {
                fs_60a230();
              }
              if (v20 == -7) {
                if ((v63_.v63 & 1) != 0) {
                  v63_.v64 = v14 - v9;
                  *((_BYTE*)v63_.v65 - 7) = 0;
                }
                else {
                  LOBYTE(v63_.v63) = -14;
                  v60_.v62 = 0;
                }
              }
              else {
                GameRoutine_a539c0_alt1((unsigned __int8*)&v63_.v63, v20,
                                        v20 + 6);
              }
            }
          }
          break;
        }
        v19 = v17 + 2;
        while (1) {
          if (*(v19 - 2) == 46) {
            v13 = v19 - 1;
            if (v19 - 1 == v11) {
              goto LABEL_49;
            }
            v19 -= 2;
            goto LABEL_38;
          }
          if (*(v19 - 1) == 46) {
            if (v19 == v11) {
              goto LABEL_49;
            }
            v13 = v19--;
            goto LABEL_38;
          }
          if (*v19 == 46) {
            v13 = v19 + 1;
            if (v19 + 1 != v11) {
              goto LABEL_38;
            }
            goto LABEL_49;
          }
          v13 = v19 + 2;
          if (v19[1] == 46) {
            break;
          }
          v19 += 4;
          if (v13 == v11) {
            goto LABEL_49;
          }
        }
        if (v19 + 2 == v11) {
          goto LABEL_49;
        }
        ++v19;
      }
    LABEL_38:
      if (*v13 == 98) {
        if (v19 + 2 == v11) {
          goto LABEL_49;
        }
        if (v19[2] == 102) {
          if (v19 + 3 == v11) {
            goto LABEL_49;
          }
          if (v19[3] == 114) {
            if (v19 + 4 == v11) {
              goto LABEL_49;
            }
            if (v19[4] == 101) {
              if (v19 + 5 == v11) {
                goto LABEL_49;
              }
              if (v19[5] == 115) {
                v14 = v19;
              }
            }
          }
        }
      }
    }
  }
  GameRoutine_1a09ce0_alt1((__int64)&v63_.v63, ".matanimb", 9u);
  v21 = *((unsigned __int8*)a3 + 8);
  v22 = (v21 & 1) == 0;
  v23 = v21 >> 1;
  if (v22) {
    v24 = (__int64)a3 + 9;
  }
  else {
    v24 = a3[3];
  }
  if (v22) {
    v25 = v23;
  }
  else {
    v25 = a3[2];
  }
  if (v25 != 0) {
    v26 = ~v24;
    v27 = v24 - 1;
    v28 = 0;
    while (v25 != v28) {
      v29 = *(unsigned __int8*)(v27 + v25);
      ++v28;
      ++v26;
      --v27;
      if (v29 == 47) {
        if (v25 + 1 != v28) {
          if (v25 < v28) {
            String_60a250_alt1("string_view::substr");
          }
          v24 = v25 - v26;
          v25 = v28 - 1;
        }
        break;
      }
    }
  }
  v30 = std___1___hash_memory_alt1(v24, v25);
  v32 = (char*)*a1;
  v31 = (char*)a1[1];
  v33 = v30;
  if ((char*)*a1 == v31) {
  LABEL_86:
    if (v32 != v31) {
      goto LABEL_119;
    }
    goto LABEL_87;
  }
  v34 = v31 - v32 - 8;
  if ((~(_BYTE)v34 & 0x18) != 0) {
    v35 = ((unsigned __int8)((unsigned int)v34 >> 3) + 1) & 3;
    while (*(_QWORD*)v32 != v30) {
      v32 += 8;
      if (--v35 == 0) {
        goto LABEL_75;
      }
    }
    goto LABEL_86;
  }
LABEL_75:
  if (v34 >= 0x18) {
    v32 += 16;
    while (1) {
      if (*((_QWORD*)v32 - 2) == v30) {
        v32 -= 16;
        goto LABEL_86;
      }
      if (*((_QWORD*)v32 - 1) == v30) {
        v32 -= 8;
        goto LABEL_86;
      }
      if (*(_QWORD*)v32 == v30) {
        goto LABEL_86;
      }
      if (*((_QWORD*)v32 + 1) == v30) {
        break;
      }
      v36 = v32 + 16;
      v32 += 32;
      if (v36 == v31) {
        goto LABEL_87;
      }
    }
    v32 += 8;
    goto LABEL_86;
  }
LABEL_87:
  if ((v63_.v63 & 1) != 0) {
    v37 = v63_.v65;
  }
  else {
    v37 = (char*)&v63_.v63 + 1;
  }
  if (v37 != nullptr) {
    v38 = *snd_g_fileIndex_ptr[0];
    v39 = strlen_alt1(v37);
    if ((fs_6360e0(v38, (__int64)v37, v39, 0, 0) & 1) != 0) {
      v41 = (__int64*)a1[1];
      v40 = a1[2];
      if ((unsigned __int64)v41 >= v40) {
        v43 = *a1;
        v44 = (signed __int64)v41 - *a1;
        v45 = (v44 >> 3) + 1;
        if (v45 >> 61 != 0) {
          GameRoutine_65c760_alt1();
        }
        v46 = v40 - v43;
        if (v46 >> 2 > v45) {
          v45 = v46 >> 2;
        }
        if ((unsigned __int64)v46 >= 0x7FFFFFFFFFFFFFF8LL) {
          v47 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v47 = v45;
        }
        if (v47 != 0) {
          if (v47 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v48 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v47, 16, 0);
        }
        else {
          v48 = 0;
        }
        v49 = v48 + 8 * v47;
        v50 = v48 + v44 - 8 * (v44 >> 3);
        *(_QWORD*)(v48 + v44) = v33;
        v42 = v48 + v44 + 8;
        memcpy_alt1(v50, v43, v44);
        *a1 = v50;
        a1[1] = v42;
        a1[2] = v49;
        if (v43 != 0) {
          v51 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v51 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v43);
        }
      }
      else {
        *v41 = v33;
        v42 = (__int64)(v41 + 1);
      }
      v53 = v63_.v64;
      v52 = (__int64)v63_.v65;
      v54 = (v63_.v63 & 1) == 0;
      v55 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
      a1[1] = v42;
      v60_.v60[2] = v33;
      if (v54) {
        v56 = v55;
      }
      else {
        v56 = v53;
      }
      if (v54) {
        v57 = (char*)&v63_.v63 + 1;
      }
      else {
        v57 = (const char*)v52;
      }
      v60_.v60[0] = GameData_20ddbe8;
      v60_.v60[1] = a1;
      v60_.v61 = v60_.v60;
      wld_MaterialAnimModule_LoadAnimAsync_alt1(a2, v57, v56,
                                                (__int64)v60_.v60);
      if (v60_.v61 == v60_.v60) {
        v58 = 32;
        goto LABEL_118;
      }
      if (v60_.v61 != nullptr) {
        v58 = 40;
      LABEL_118:
        (*(void (**)(__int64))(*v60_.v61 + v58))((__int64)v60_.v61);
      }
    }
  }
LABEL_119:
  if ((v63_.v63 & 1) != 0 && v63_.v65 != nullptr) {
    v59 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, (__int64)v63_.v65);
  }
}

__int64 game_cutscene_AnimPlayer_PlayMaterialAnim_lambda0_Invoke(__int64 result,
                                                                 _BYTE* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  char** v6;
  char* v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  float v14;
  int v15;
  __int64 v16;
  char* v17;

  if (*a2 == 1) {
    v3 = *(_QWORD*)(result + 16);
    v2 = *(_QWORD*)(result + 24);
    v4 = *(_QWORD*)(result + 32);
    *(_BYTE*)(v3 + 76) = 1;
    if (v4 != 0) {
      v5 = result;
      GameRoutine_60a060_alt1((char*)(v3 + 48), v2, v4);
      MaterialAnimModule_be6340_alt1(v3);
      result = v5;
    }
    else {
      if ((*(_BYTE*)(v3 + 48) & 1) != 0) {
        **(_BYTE**)(v3 + 64) = 0;
        *(_QWORD*)(v3 + 56) = 0;
      }
      else {
        *(_WORD*)(v3 + 48) = 0;
      }
      *(_DWORD*)(v3 + 72) = -1;
      if ((*(_BYTE*)(v3 + 80) & 1) != 0) {
        **(_BYTE**)(v3 + 96) = 0;
        *(_QWORD*)(v3 + 88) = 0;
      }
      else {
        *(_WORD*)(v3 + 80) = 0;
      }
      *(_QWORD*)(v3 + 108) = 0;
      *(_DWORD*)(v3 + 104) = -1;
    }
    v13 = *(_QWORD*)(result + 16);
    v14 = *(float*)(result + 40);
    v15 = *(_DWORD*)(v13 + 268);
    *(float*)(v13 + 264) = v14;
    if (v15 == 0) {
      v16 = *(unsigned int*)(v13 + 72);
      if ((v16 & 0x80000000) == 0) {
        *(float*)(*(_QWORD*)(v13 + 24) + (v16 << 6) + 24) =
            v14 * 0x1.1111120000000p-6f;
      }
    }
  }
  else {
    v6 = *(char***)(result + 8);
    v8 = *v6;
    v7 = v6[1];
    if (*v6 != v7) {
      v9 = *(_QWORD*)(result + 48);
      v10 = v7 - v8 - 8;
      if ((~(_BYTE)v10 & 0x18) != 0) {
        v11 = ((unsigned __int8)((unsigned int)v10 >> 3) + 1) & 3;
        while (*(_QWORD*)v8 != v9) {
          v8 += 8;
          if (--v11 == 0) {
            goto LABEL_9;
          }
        }
      }
      else {
      LABEL_9:
        if (v10 < 0x18) {
          return result;
        }
        for (v8 += 16;; v8 += 32) {
          if (*((_QWORD*)v8 - 2) == v9) {
            v8 -= 16;
            goto LABEL_30;
          }
          if (*((_QWORD*)v8 - 1) == v9) {
            v8 -= 8;
            goto LABEL_30;
          }
          if (*(_QWORD*)v8 == v9) {
            goto LABEL_30;
          }
          if (*((_QWORD*)v8 + 1) == v9) {
            break;
          }
          v12 = v8 + 16;
          if (v12 == v7) {
            return result;
          }
        }
        v8 += 8;
      }
    }
  LABEL_30:
    if (v8 != v7) {
      v17 = v8 + 8;
      if (v8 + 8 != v7) {
        do {
          if (*(_QWORD*)v17 != *(_QWORD*)(result + 48)) {
            *(_QWORD*)v8 = *(_QWORD*)v17;
            v8 += 8;
          }
          v17 += 8;
        } while (v17 != v7);
        v7 = v6[1];
      }
    }
    if (v8 != v7) {
      v6[1] = v8;
    }
  }
  return result;
}

#pragma GCC visibility pop
