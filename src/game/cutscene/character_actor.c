#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AnimCtrlModule_a78450(_QWORD, _QWORD);
__int64 GameRoutine_10758f0(_QWORD);
__int64 GameRoutine_1075d50(_QWORD, _QWORD);
__int64 GameRoutine_110b040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17fc340(__int64, __int64, _QWORD*);
__int64 GameRoutine_17fe9d0(__int64, __int64*, unsigned __int8*, char);
__int64 GameRoutine_17fede0(__int64, __int64*, unsigned __int8*, char, char);
__int64 GameRoutine_17ff8a0(__int64 result);
__int64 GameRoutine_1805160(_QWORD);
__int64 GameRoutine_98f140(_QWORD, _QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 GameRoutine_a8c0c0(_QWORD);
__int64 GameRoutine_ad7390(_QWORD);
__int64 GameRoutine_ce3010(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Model_a66700(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212deb8;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212eaa0;
extern _UNKNOWN* GameData_212ed90;
extern _UNKNOWN* GameData_212eda0;
extern _UNKNOWN* GameData_212fa30;
extern _UNKNOWN* GameData_212fef8;
extern _UNKNOWN* GameData_212ff08;
extern __int64 (*game_cutscene_CharacterActor_vtable[])();
extern __int64 GameData_2235618;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212deb0;
extern int* GameData_212df08;
extern int* GameData_212ea98;
extern int* GameData_212ed88;
extern int* GameData_212ed98;
extern int* GameData_212fa28;
extern int* GameData_212fef0;
extern int* GameData_212ff00;
void __attribute__((noreturn)) GameRoutine_1812bf0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_98f290(_QWORD);
__int64 CharacterActor_Destructor(_QWORD* a1);
__int64 CharacterActor_1804600(_QWORD* a1, _QWORD* a2, __int64 a3);
__int64 CharacterActor_Unknown2(__int64 result);
__int64 CharacterActor_18055a0(__int64 a1);
__int64
CharacterActor_1805680_alt1(__int64 a1, _QWORD* a2,
                            unsigned int* a3) __asm__("CharacterActor_1805680");
bool CharacterActor_Unknown3(__int64 a1);
__int64 CharacterActor_Unknown7(__int64 result);
__int64 CharacterActor_17fe9d0(__int64, __int64*, unsigned __int8*, char);
__int64 GameRoutine_1075a00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_10761d0(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 MapAnimModule_c0a840(void);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 CharacterActor_17fe9d0(__int64 a1, __int64* a2, unsigned __int8* a3,
                               char a4);
__int64 CharacterActor_17fede0(__int64 a1, __int64* a2, unsigned __int8* a3,
                               char a4, char a5);
__int64 CharacterActor_17ff8a0(__int64 result);
__attribute__((swiftcall)) void game_cutscene_17fd5a0(PSEUDO_X8, _DWORD*);
__int64 CharacterBuilder_1083e90(_QWORD, _QWORD);
__int64 GameRoutine_17fd1a0(__int64*);
__int64 GameRoutine_17ffec0(__int64 result, __int64);
__int64 GameRoutine_f8e6c0(_QWORD);
__int64 PostEffectActor_17fb700(_QWORD, _QWORD);
__int64 game_cutscene_AnimPlayer_PlayMaterialAnim(__int64 result, __int64,
                                                  _QWORD*, long double);
double cos(double);
double sin(double);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_2131fb8;
extern _UNKNOWN GameData_1a0d058;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_20ddc68[])();
extern __int64 (*GameData_20ddce8[])();
extern __int64 (*GameData_20ddd68[])();
extern __int64 (*GameData_20dde68[])();
extern int* GameData_2131fb0;
extern unsigned int GameData_1c0b528[3];
float GameRoutine_618640(_QWORD, double, double);
float32x4_t* game_cutscene_17fd220(float32x4_t**, float32x4_t*);
void CharacterActor_Unknown4(__int64 a1, long double a2, float a3);
__int64 GameRoutine_ce3010_alt1(__int64, __int64, __int64, unsigned int,
                                unsigned int) __asm__("GameRoutine_ce3010");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_98f140_alt1(__int64*, _QWORD*) __asm__("GameRoutine_98f140");
void GameRoutine_a8c0c0_alt1(__int64) __asm__("GameRoutine_a8c0c0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_98f290_alt1() __asm__("GameRoutine_98f290");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 CharacterActor_1805680(__int64 a1, __int64* a2, unsigned int* a3);

__int64 CharacterActor_17fe9d0(__int64 a1, __int64* a2, unsigned __int8* a3,
                               char a4)
{
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  char* v15;
  unsigned __int64 v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  char* v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int8* v24;
  __int64* v25;
  char* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  unsigned __int64 v31;
  unsigned int v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  bool v37;
  unsigned __int64 v38;
  char* v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int8* v42;
  char v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  char* v47;
  char* v48;
  char* v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v53;
  __int64 v54;
  char* v55;
  __int64 v56;
  unsigned __int64 v57;
  char* v58;

  v6 = a1;
  if ((a4 & 1) == 0) {
  LABEL_57:
    v34 = *a3;
    if ((v34 & 1) != 0) {
      v35 = *((_QWORD*)a3 + 1);
    }
    else {
      v35 = v34 >> 1;
    }
    if (v35 == 0) {
      if ((*(_BYTE*)a2 & 1) != 0) {
        fw_text_String_CopyTerminated(&v56, a2[2], a2[1]);
      }
      else {
        v45 = a2[1];
        v56 = *a2;
        v57 = v45;
        v58 = (char*)a2[2];
      }
    LABEL_86:
      if ((v56 & 1) != 0) {
        v49 = v58;
      }
      else {
        v49 = (char*)&v56 + 1;
      }
      if ((v56 & 1) != 0) {
        v50 = v57;
      }
      else {
        v50 = (unsigned __int64)(unsigned __int8)v56 >> 1;
      }
      GameRoutine_1075a00(v6, v49, v50);
      if ((v56 & 1) != 0 && v58 != nullptr) {
        v51 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v51 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v58);
      }
      return GameRoutine_10761d0(v6) & 1;
    }
    v36 = *(unsigned __int8*)a2;
    v37 = (v36 & 1) == 0;
    v38 = v36 >> 1;
    if (v37) {
      v39 = (char*)a2 + 1;
    }
    else {
      v39 = (char*)a2[2];
    }
    if (v37) {
      v40 = v38;
    }
    else {
      v40 = a2[1];
    }
    v41 = v40 + v35;
    if ((v34 & 1) != 0) {
      v42 = *((unsigned __int8**)a3 + 2);
    }
    else {
      v42 = a3 + 1;
    }
    if (v41 < 0xFFFFFFFFFFFFFFF7LL) {
      if (v41 > 0x16) {
        if ((v41 | 7) == 0x17) {
          v46 = 26;
        }
        else {
          v46 = (v41 | 7) + 1;
        }
        v44 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v46, 16,
                                             0);
        v57 = v40 + v35;
        v58 = (char*)v44;
        v56 = v46 | 1;
        v43 = v46 | 1;
      }
      else {
        v43 = 2 * v41;
        v44 = 0;
        v57 = 0;
        v58 = nullptr;
        v56 = (unsigned __int8)(2 * v41);
      }
      if ((v43 & 1) != 0) {
        v47 = (char*)v44;
      }
      else {
        v47 = (char*)&v56 + 1;
      }
      if (v40 != 0) {
        memmove(v47, v39, v40);
      }
      v48 = &v47[v40];
      memmove(v48, v42, v35);
      v48[v35] = 0;
      goto LABEL_86;
    }
  LABEL_98:
    String_60a1d0(a1);
  }
  v7 = *a3;
  if ((v7 & 1) != 0) {
    v8 = *((_QWORD*)a3 + 1);
  }
  else {
    v8 = v7 >> 1;
  }
  if (v8 == 0) {
    v16 = *(unsigned __int8*)a2;
    v17 = (v16 & 1) == 0;
    v18 = v16 >> 1;
    if (v17) {
      v19 = v18;
    }
    else {
      v19 = a2[1];
    }
    if (v17) {
      v20 = (char*)a2 + 1;
    }
    else {
      v20 = (char*)a2[2];
    }
    v21 = v19 + 2;
    if ((unsigned __int64)(v19 + 2) >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_98;
    }
    if (v21 >= 0x17) {
      if ((v21 | 7) == 0x17) {
        v29 = 26;
      }
      else {
        v29 = (v21 | 7) + 1;
      }
      v22 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v29,
                                                  16, 0);
      v57 = v19 + 2;
      v58 = v22;
      v56 = v29 | 1;
    }
    else {
      v57 = 0;
      v58 = nullptr;
      v56 = (unsigned __int8)(2 * v21);
      v22 = (char*)&v56 + 1;
      if (v19 == 0) {
        goto LABEL_44;
      }
    }
    memmove(v22, v20, v19);
  LABEL_44:
    strcpy(&v22[v19], "_F");
    goto LABEL_45;
  }
  v9 = *(unsigned __int8*)a2;
  v10 = (v9 & 1) == 0;
  v11 = v9 >> 1;
  if (v10) {
    v12 = v11;
  }
  else {
    v12 = a2[1];
  }
  if (v10) {
    v13 = (char*)a2 + 1;
  }
  else {
    v13 = (char*)a2[2];
  }
  v14 = v12 + 2;
  if ((unsigned __int64)(v12 + 2) >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_98;
  }
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (v14 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v23,
                                                16, 0);
    v54 = v12 + 2;
    v55 = v15;
    v53 = v23 | 1;
    goto LABEL_30;
  }
  v54 = 0;
  v55 = nullptr;
  v53 = (unsigned __int8)(2 * v14);
  v15 = (char*)&v53 + 1;
  if (v12 != 0) {
  LABEL_30:
    memmove(v15, v13, v12);
  }
  strcpy(&v15[v12], "_F");
  if ((v7 & 1) != 0) {
    v24 = *((unsigned __int8**)a3 + 2);
  }
  else {
    v24 = a3 + 1;
  }
  v25 = (__int64*)GameRoutine_1a09ce0(&v53, v24, v8);
  v27 = v25[1];
  v26 = (char*)v25[2];
  v56 = *v25;
  v57 = v27;
  v58 = v26;
  v25[1] = 0;
  v25[2] = 0;
  *v25 = 0;
  if ((v53 & 1) != 0 && v55 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28,
                                  v55);
  }

LABEL_45:
  if ((v56 & 1) != 0) {
    v30 = v58;
  }
  else {
    v30 = (char*)&v56 + 1;
  }
  if ((v56 & 1) != 0) {
    v31 = v57;
  }
  else {
    v31 = (unsigned __int64)(unsigned __int8)v56 >> 1;
  }
  GameRoutine_1075a00(v6, v30, v31);
  a1 = GameRoutine_10761d0(v6);
  if ((v56 & 1) != 0 && v58 != nullptr) {
    v32 = a1;
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v33,
                                  v58);
    a1 = v32;
  }
  if ((a1 & 1) == 0) {
    goto LABEL_57;
  }
  return GameRoutine_10761d0(v6) & 1;
}

__int64 CharacterActor_17fede0(__int64 a1, __int64* a2, unsigned __int8* a3,
                               char a4, char a5)
{
  __int64 v8;
  unsigned __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  char* v15;
  unsigned __int64 v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  char* v23;
  unsigned __int64 v24;
  bool v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  __int16 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  char* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  char* v50;
  char v51;
  char* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  char* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int8* v60;
  __int64* v61;
  char* v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  char* v66;
  unsigned __int64 v67;
  unsigned int v68;
  __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  bool v73;
  __int64 v74;
  __int64 v75;
  char* v76;
  unsigned __int64 v77;
  char* v78;
  unsigned __int64 v79;
  bool v80;
  __int64 v81;
  __int64 v82;
  char* v83;
  unsigned __int64 v84;
  char* v85;
  char v86;
  __int64 v87;
  char* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  unsigned __int8* v92;
  __int64* v93;
  char* v94;
  unsigned __int64 v95;
  __int64 v96;
  __int64 v97;
  char* v98;
  unsigned __int64 v99;
  unsigned int v100;
  __int64 v101;
  __int64 v102;
  char* v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  unsigned __int8* v106;
  __int64 v107;
  char v108;
  __int64 v109;
  __int64 v110;
  char* v111;
  char* v112;
  char* v113;
  unsigned __int64 v114;
  unsigned int v115;
  __int64 v116;
  char v117;
  __int64 v118;
  unsigned __int64 v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  bool v122;
  __int64 v123;
  char* v124;
  __int64 v125;
  unsigned __int64 v126;
  unsigned __int8* v127;
  char v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  char* v132;
  char* v133;
  char* v134;
  unsigned __int64 v135;
  __int64 v136;
  char v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  __int64 v141;
  unsigned __int64 v142;
  char* v143;
  __int64 v144;
  unsigned __int64 v145;
  char* v146;

  v8 = a1;
  if (a4 == 0) {
    return CharacterActor_17fe9d0(a1, a2, a3, a5 & 1);
  }
  v145 = 0;
  v146 = nullptr;
  v144 = 0;
  if (a4 == 3) {
    v24 = *(unsigned __int8*)a2;
    v25 = (v24 & 1) == 0;
    v26 = v24 >> 1;
    if (v25) {
      v27 = v26;
    }
    else {
      v27 = a2[1];
    }
    if (v25) {
      v28 = (char*)a2 + 1;
    }
    else {
      v28 = (char*)a2[2];
    }
    v29 = v27 + 2;
    if ((unsigned __int64)(v27 + 2) >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_256;
    }
    if (v29 >= 0x17) {
      v37 = a1;
      if ((v29 | 7) == 0x17) {
        v38 = 26;
      }
      else {
        v38 = (v29 | 7) + 1;
      }
      v39 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v38, 16, 0);
      v40 = v38 | 1;
      v30 = (char*)v39;
      v8 = v37;
      v142 = v27 + 2;
      v143 = (char*)v39;
      v141 = v40;
    }
    else {
      v142 = 0;
      v143 = nullptr;
      v141 = (unsigned __int8)(2 * v29);
      v30 = (char*)&v141 + 1;
      if (v27 == 0) {
        goto LABEL_47;
      }
    }
    a1 = memmove(v30, v28, v27);
  LABEL_47:
    v35 = &v30[v27];
    v36 = 17503;
    goto LABEL_54;
  }
  if (a4 != 2) {
    if (a4 != 1) {
      goto LABEL_55;
    }
    v9 = *(unsigned __int8*)a2;
    v10 = (v9 & 1) == 0;
    v11 = v9 >> 1;
    if (v10) {
      v12 = v11;
    }
    else {
      v12 = a2[1];
    }
    if (v10) {
      v13 = (char*)a2 + 1;
    }
    else {
      v13 = (char*)a2[2];
    }
    v14 = v12 + 2;
    if ((unsigned __int64)(v12 + 2) >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_256;
    }
    if (v14 >= 0x17) {
      v41 = a1;
      if ((v14 | 7) == 0x17) {
        v42 = 26;
      }
      else {
        v42 = (v14 | 7) + 1;
      }
      v43 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v42, 16, 0);
      v44 = v42 | 1;
      v15 = (char*)v43;
      v8 = v41;
      v142 = v12 + 2;
      v143 = (char*)v43;
      v141 = v44;
    }
    else {
      v142 = 0;
      v143 = nullptr;
      v141 = (unsigned __int8)(2 * v14);
      v15 = (char*)&v141 + 1;
      if (v12 == 0) {
        goto LABEL_53;
      }
    }
    a1 = memmove(v15, v13, v12);
  LABEL_53:
    v35 = &v15[v12];
    v36 = 16991;
    goto LABEL_54;
  }
  v17 = *(unsigned __int8*)a2;
  v18 = (v17 & 1) == 0;
  v19 = v17 >> 1;
  if (v18) {
    v20 = v19;
  }
  else {
    v20 = a2[1];
  }
  if (v18) {
    v21 = (char*)a2 + 1;
  }
  else {
    v21 = (char*)a2[2];
  }
  v22 = v20 + 2;
  if ((unsigned __int64)(v20 + 2) >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_256;
  }
  if (v22 >= 0x17) {
    v31 = a1;
    if ((v22 | 7) == 0x17) {
      v32 = 26;
    }
    else {
      v32 = (v22 | 7) + 1;
    }
    v33 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v32, 16, 0);
    v34 = v32 | 1;
    v23 = (char*)v33;
    v8 = v31;
    v142 = v20 + 2;
    v143 = (char*)v33;
    v141 = v34;
  }
  else {
    v142 = 0;
    v143 = nullptr;
    v141 = (unsigned __int8)(2 * v22);
    v23 = (char*)&v141 + 1;
    if (v20 == 0) {
      goto LABEL_41;
    }
  }
  a1 = memmove(v23, v21, v20);

LABEL_41:
  v35 = &v23[v20];
  v36 = 17247;

LABEL_54:
  *(_WORD*)v35 = v36;
  v35[2] = 0;
  v144 = v141;
  v145 = v142;
  v146 = v143;

LABEL_55:
  v45 = *a3;
  if ((a5 & 1) == 0) {
    goto LABEL_168;
  }
  if ((v45 & 1) != 0) {
    v46 = *((_QWORD*)a3 + 1);
  }
  else {
    v46 = v45 >> 1;
  }
  if (v46 == 0) {
    v51 = v144;
    if ((v144 & 1) != 0) {
      v52 = v146;
    }
    else {
      v52 = (char*)&v144 + 1;
    }
    if ((v144 & 1) != 0) {
      v53 = v145;
    }
    else {
      v53 = (unsigned __int64)(unsigned __int8)v144 >> 1;
    }
    v54 = v53 + 2;
    if (v53 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_256;
    }
    if (v54 >= 0x17) {
      if ((v54 | 7) == 0x17) {
        v65 = 26;
      }
      else {
        v65 = (v54 | 7) + 1;
      }
      v55 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v65,
                                                  16, 0);
      v142 = v53 + 2;
      v143 = v55;
      v141 = v65 | 1;
    }
    else {
      v142 = 0;
      v143 = nullptr;
      v141 = (unsigned __int8)(2 * v54);
      v55 = (char*)&v141 + 1;
      if (v53 == 0) {
        goto LABEL_99;
      }
    }
    memmove(v55, v52, v53);
  LABEL_99:
    strcpy(&v55[v53], "_F");
    goto LABEL_100;
  }
  v137 = v144;
  if ((v144 & 1) != 0) {
    v47 = v146;
  }
  else {
    v47 = (char*)&v144 + 1;
  }
  if ((v144 & 1) != 0) {
    v48 = v145;
  }
  else {
    v48 = (unsigned __int64)(unsigned __int8)v144 >> 1;
  }
  v49 = v48 + 2;
  if (v48 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_256;
  }
  if (v49 >= 0x17) {
    v56 = v8;
    if ((v49 | 7) == 0x17) {
      v57 = 26;
    }
    else {
      v57 = (v49 | 7) + 1;
    }
    v58 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v57, 16, 0);
    v59 = v57 | 1;
    v50 = (char*)v58;
    v8 = v56;
    v139 = v48 + 2;
    v140 = v58;
    v138 = v59;
  }
  else {
    v139 = 0;
    v140 = 0;
    v138 = (unsigned __int8)(2 * v49);
    v50 = (char*)&v138 + 1;
    if (v48 == 0) {
      goto LABEL_85;
    }
  }
  memmove(v50, v47, v48);

LABEL_85:
  strcpy(&v50[v48], "_F");
  if ((v45 & 1) != 0) {
    v60 = *((unsigned __int8**)a3 + 2);
  }
  else {
    v60 = a3 + 1;
  }
  v61 = (__int64*)GameRoutine_1a09ce0(&v138, v60, v46);
  v63 = v61[1];
  v62 = (char*)v61[2];
  v141 = *v61;
  v142 = v63;
  v143 = v62;
  v61[1] = 0;
  v61[2] = 0;
  *v61 = 0;
  if ((v138 & 1) != 0 && v140 != 0) {
    v64 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v64 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v64,
                                  v140);
  }
  v51 = v137;

LABEL_100:
  if ((v141 & 1) != 0) {
    v66 = v143;
  }
  else {
    v66 = (char*)&v141 + 1;
  }
  if ((v141 & 1) != 0) {
    v67 = v142;
  }
  else {
    v67 = (unsigned __int64)(unsigned __int8)v141 >> 1;
  }
  GameRoutine_1075a00(v8, v66, v67);
  a1 = GameRoutine_10761d0(v8);
  if ((v141 & 1) != 0 && v143 != nullptr) {
    v68 = a1;
    v69 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v69 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v69,
                                  v143);
    a1 = v68;
  }
  if ((a1 & 1) != 0) {
    goto LABEL_209;
  }
  v70 = *a3;
  if ((v70 & 1) != 0) {
    v71 = *((_QWORD*)a3 + 1);
  }
  else {
    v71 = v70 >> 1;
  }
  if (v71 != 0) {
    v72 = *(unsigned __int8*)a2;
    v73 = (v72 & 1) == 0;
    v74 = v72 >> 1;
    if (v73) {
      v75 = v74;
    }
    else {
      v75 = a2[1];
    }
    if (v73) {
      v76 = (char*)a2 + 1;
    }
    else {
      v76 = (char*)a2[2];
    }
    v77 = v75 + 2;
    if ((unsigned __int64)(v75 + 2) >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_256;
    }
    if (v77 >= 0x17) {
      v86 = v51;
      v87 = v8;
      v88 = v76;
      if ((v77 | 7) == 0x17) {
        v89 = 26;
      }
      else {
        v89 = (v77 | 7) + 1;
      }
      v90 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v89, 16, 0);
      v91 = v89 | 1;
      v76 = v88;
      v78 = (char*)v90;
      v8 = v87;
      v51 = v86;
      v139 = v75 + 2;
      v140 = v90;
      v138 = v91;
    }
    else {
      v139 = 0;
      v140 = 0;
      v138 = (unsigned __int8)(2 * v77);
      v78 = (char*)&v138 + 1;
      if (v75 == 0) {
      LABEL_141:
        strcpy(&v78[v75], "_F");
        if ((v70 & 1) != 0) {
          v92 = *((unsigned __int8**)a3 + 2);
        }
        else {
          v92 = a3 + 1;
        }
        v93 = (__int64*)GameRoutine_1a09ce0(&v138, v92, v71);
        v95 = v93[1];
        v94 = (char*)v93[2];
        v141 = *v93;
        v142 = v95;
        v143 = v94;
        v93[1] = 0;
        v93[2] = 0;
        *v93 = 0;
        if ((v138 & 1) != 0 && v140 != 0) {
          v96 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v96 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v96, v140);
        }
        goto LABEL_155;
      }
    }
    memmove(v78, v76, v75);
    goto LABEL_141;
  }
  v79 = *(unsigned __int8*)a2;
  v80 = (v79 & 1) == 0;
  v81 = v79 >> 1;
  if (v80) {
    v82 = v81;
  }
  else {
    v82 = a2[1];
  }
  if (v80) {
    v83 = (char*)a2 + 1;
  }
  else {
    v83 = (char*)a2[2];
  }
  v84 = v82 + 2;
  if ((unsigned __int64)(v82 + 2) >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_256;
  }
  if (v84 >= 0x17) {
    if ((v84 | 7) == 0x17) {
      v97 = 26;
    }
    else {
      v97 = (v84 | 7) + 1;
    }
    v85 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v97,
                                                16, 0);
    v142 = v82 + 2;
    v143 = v85;
    v141 = v97 | 1;
  }
  else {
    v142 = 0;
    v143 = nullptr;
    v141 = (unsigned __int8)(2 * v84);
    v85 = (char*)&v141 + 1;
    if (v82 == 0) {
      goto LABEL_154;
    }
  }
  memmove(v85, v83, v82);

LABEL_154:
  strcpy(&v85[v82], "_F");

LABEL_155:
  if ((v141 & 1) != 0) {
    v98 = v143;
  }
  else {
    v98 = (char*)&v141 + 1;
  }
  if ((v141 & 1) != 0) {
    v99 = v142;
  }
  else {
    v99 = (unsigned __int64)(unsigned __int8)v141 >> 1;
  }
  GameRoutine_1075a00(v8, v98, v99);
  a1 = GameRoutine_10761d0(v8);
  if ((v141 & 1) != 0 && v143 != nullptr) {
    v100 = a1;
    v101 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v101 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v101,
                                  v143);
    a1 = v100;
  }
  if ((a1 & 1) != 0) {
    goto LABEL_209;
  }
  LODWORD(v45) = *a3;

LABEL_168:
  if ((v45 & 1) != 0) {
    v102 = *((_QWORD*)a3 + 1);
  }
  else {
    v102 = (unsigned int)v45 >> 1;
  }
  if (v102 != 0) {
    v51 = v144;
    if ((v144 & 1) != 0) {
      v103 = v146;
    }
    else {
      v103 = (char*)&v144 + 1;
    }
    if ((v144 & 1) != 0) {
      v104 = v145;
    }
    else {
      v104 = (unsigned __int64)(unsigned __int8)v144 >> 1;
    }
    v105 = v104 + v102;
    if ((v45 & 1) != 0) {
      v106 = *((unsigned __int8**)a3 + 2);
    }
    else {
      v106 = a3 + 1;
    }
    if (v105 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_256;
    }
    v107 = v8;
    if (v105 > 0x16) {
      if ((v105 | 7) == 0x17) {
        v110 = 26;
      }
      else {
        v110 = (v105 | 7) + 1;
      }
      v109 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v110, 16, 0);
      v142 = v104 + v102;
      v143 = (char*)v109;
      v141 = v110 | 1;
      v108 = v110 | 1;
    }
    else {
      v108 = 2 * v105;
      v109 = 0;
      v142 = 0;
      v143 = nullptr;
      v141 = (unsigned __int8)(2 * v105);
    }
    if ((v108 & 1) != 0) {
      v111 = (char*)v109;
    }
    else {
      v111 = (char*)&v141 + 1;
    }
    if (v104 != 0) {
      memmove(v111, v103, v104);
    }
    v112 = &v111[v104];
    memmove(v112, v106, v102);
    v112[v102] = 0;
    v8 = v107;
  }
  else {
    v51 = v144;
    if ((v144 & 1) != 0) {
      fw_text_String_CopyTerminated(&v141, v146, v145);
    }
    else {
      v141 = v144;
      v142 = v145;
      v143 = v146;
    }
  }
  if ((v141 & 1) != 0) {
    v113 = v143;
  }
  else {
    v113 = (char*)&v141 + 1;
  }
  if ((v141 & 1) != 0) {
    v114 = v142;
  }
  else {
    v114 = (unsigned __int64)(unsigned __int8)v141 >> 1;
  }
  GameRoutine_1075a00(v8, v113, v114);
  a1 = GameRoutine_10761d0(v8);
  if ((v141 & 1) != 0 && v143 != nullptr) {
    v115 = a1;
    v116 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v116 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v116,
                                  v143);
    a1 = v115;
  }
  if ((a1 & 1) == 0) {
    v119 = *a3;
    if ((v119 & 1) != 0) {
      v120 = *((_QWORD*)a3 + 1);
    }
    else {
      v120 = v119 >> 1;
    }
    if (v120 == 0) {
      if ((*(_BYTE*)a2 & 1) != 0) {
        fw_text_String_CopyTerminated(&v141, a2[2], a2[1]);
      }
      else {
        v130 = a2[1];
        v141 = *a2;
        v142 = v130;
        v143 = (char*)a2[2];
      }
    LABEL_245:
      if ((v141 & 1) != 0) {
        v134 = v143;
      }
      else {
        v134 = (char*)&v141 + 1;
      }
      if ((v141 & 1) != 0) {
        v135 = v142;
      }
      else {
        v135 = (unsigned __int64)(unsigned __int8)v141 >> 1;
      }
      GameRoutine_1075a00(v8, v134, v135);
      v117 = GameRoutine_10761d0(v8);
      if ((v141 & 1) != 0 && v143 != nullptr) {
        v136 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v136 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v136, v143);
      }
      goto LABEL_210;
    }
    v121 = *(unsigned __int8*)a2;
    v122 = (v121 & 1) == 0;
    v123 = v121 >> 1;
    if (v122) {
      v124 = (char*)a2 + 1;
    }
    else {
      v124 = (char*)a2[2];
    }
    if (v122) {
      v125 = v123;
    }
    else {
      v125 = a2[1];
    }
    v126 = v125 + v120;
    if ((v119 & 1) != 0) {
      v127 = *((unsigned __int8**)a3 + 2);
    }
    else {
      v127 = a3 + 1;
    }
    if (v126 < 0xFFFFFFFFFFFFFFF7LL) {
      if (v126 > 0x16) {
        if ((v126 | 7) == 0x17) {
          v131 = 26;
        }
        else {
          v131 = (v126 | 7) + 1;
        }
        v129 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v131,
                                              16, 0);
        v142 = v125 + v120;
        v143 = (char*)v129;
        v141 = v131 | 1;
        v128 = v131 | 1;
      }
      else {
        v128 = 2 * v126;
        v129 = 0;
        v142 = 0;
        v143 = nullptr;
        v141 = (unsigned __int8)(2 * v126);
      }
      if ((v128 & 1) != 0) {
        v132 = (char*)v129;
      }
      else {
        v132 = (char*)&v141 + 1;
      }
      if (v125 != 0) {
        memmove(v132, v124, v125);
      }
      v133 = &v132[v125];
      memmove(v133, v127, v120);
      v133[v120] = 0;
      goto LABEL_245;
    }
  LABEL_256:
    String_60a1d0(a1);
  }

LABEL_209:
  v117 = 1;

LABEL_210:
  if ((v51 & 1) != 0 && v146 != nullptr) {
    v118 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v118 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v118,
                                  v146);
  }
  return v117 & 1;
}

__int64 CharacterActor_17ff8a0(__int64 result)
{
  unsigned __int8 explicit;
  int* v2;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  unsigned __int8 v7;
  int* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;

  if (result != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v2 = GameData_212df08;
    if ((explicit & 1) == 0) {
      v16 = result;
      v14 = __cxa_guard_acquire(GameData_212df10);
      v2 = GameData_212df08;
      result = v16;
      if (v14 != 0) {
        *GameData_212df08 = wld_Crc32(0, "ModelModule", 11);
        __cxa_guard_release(GameData_212df10);
        v2 = GameData_212df08;
        result = v16;
      }
    }
    v3 = *v2;
    v4 = *(_QWORD*)(result + 512);
    v5 = v4;
    while (v5 != *(_QWORD*)(result + 504)) {
      v6 = *(_DWORD*)(v5 - 16);
      v5 -= 16;
      v4 -= 16;
      if (v6 == v3) {
        if (*(_QWORD*)(result + 512) != v4 && *(_QWORD*)(v4 + 8) != 0) {
          v7 = atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                                    memory_order_acquire);
          v8 = GameData_212ea98;
          if ((v7 & 1) == 0) {
            v17 = result;
            v15 = __cxa_guard_acquire(GameData_212eaa0);
            v8 = GameData_212ea98;
            result = v17;
            if (v15 != 0) {
              *GameData_212ea98 = wld_Crc32(0, "MaterialAnimModule", 18);
              __cxa_guard_release(GameData_212eaa0);
              v8 = GameData_212ea98;
              result = v17;
            }
          }
          v9 = *v8;
          v10 = *(_QWORD*)(result + 512);
          v11 = v10;
          while (v11 != *(_QWORD*)(result + 504)) {
            v12 = *(_DWORD*)(v11 - 16);
            v11 -= 16;
            v10 -= 16;
            if (v12 == v9) {
              if (*(_QWORD*)(result + 512) != v10) {
                v13 = *(_QWORD*)(v10 + 8);
                if (v13 != 0) {
                  goto LABEL_15;
                }
              }
              break;
            }
          }
          result = MapAnimModule_c0a840();
          v13 = result;
          if (result == 0) {
            return result;
          }
        LABEL_15:
          *(_DWORD*)(v13 + 268) = 1;
        }
        return result;
      }
    }
  }
  return result;
}

__int64 CharacterActor_Destructor(_QWORD* a1)
{
  __int64 v2;
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
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
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
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 result;

  *a1 = game_cutscene_CharacterActor_vtable;
  if (a1[33] != 0) {
    GameRoutine_a867a0(a1 + 33);
    a1[33] = 0;
  }
  a1[34] = 0;
  a1[35] = 0;
  v2 = a1[39];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[40] = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v2);
  }
  v6 = a1[36];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[37] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = a1[30];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    a1[31] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  v12 = a1[27];
  if (v12 != 0) {
    v13 = a1[28];
    if (v12 == v13) {
      goto LABEL_22;
    }
    do {
      v14 = *(_QWORD*)(v13 - 8);
      if (v14 != 0) {
        std___1___shared_weak_count___release_weak(v14);
      }
      v13 -= 16;
    } while (v13 != v12);
    v15 = a1[27];
    a1[28] = v12;
    v12 = v15;
    if (v15 != 0) {
    LABEL_22:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16, v12);
    }
  }
  v17 = a1[24];
  if (v17 != 0) {
    v18 = *(_QWORD*)v3;
    a1[25] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(v18 + v19, v17);
  }
  v20 = a1[21];
  if (v20 != 0) {
    v21 = a1[22];
    if (v20 == v21) {
      goto LABEL_36;
    }
    do {
      v22 = *(_QWORD*)(v21 - 8);
      if (v22 != 0) {
        std___1___shared_weak_count___release_weak(v22);
      }
      v21 -= 16;
    } while (v21 != v20);
    v23 = a1[21];
    a1[22] = v20;
    v20 = v23;
    if (v23 != 0) {
    LABEL_36:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24, v20);
    }
  }
  v25 = a1[18];
  if (v25 != 0) {
    v26 = *(_QWORD*)v3;
    a1[19] = v25;
    v27 = 128;
    if (*(_QWORD*)(v26 + 200) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(v26 + v27, v25);
  }
  v28 = a1[15];
  if (v28 != 0) {
    v29 = a1[16];
    if (v28 == v29) {
      goto LABEL_50;
    }
    do {
      v30 = *(_QWORD*)(v29 - 8);
      if (v30 != 0) {
        std___1___shared_weak_count___release_weak(v30);
      }
      v29 -= 16;
    } while (v29 != v28);
    v31 = a1[15];
    a1[16] = v28;
    v28 = v31;
    if (v31 != 0) {
    LABEL_50:
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v32, v28);
    }
  }
  v33 = a1[12];
  if (v33 != 0) {
    v34 = *(_QWORD*)v3;
    a1[13] = v33;
    v35 = 128;
    if (*(_QWORD*)(v34 + 200) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(v34 + v35, v33);
  }
  v36 = a1[9];
  if (v36 != 0) {
    v37 = a1[10];
    if (v36 == v37) {
      goto LABEL_64;
    }
    do {
      v38 = *(_QWORD*)(v37 - 8);
      if (v38 != 0) {
        std___1___shared_weak_count___release_weak(v38);
      }
      v37 -= 16;
    } while (v37 != v36);
    v39 = a1[9];
    a1[10] = v36;
    v36 = v39;
    if (v39 != 0) {
    LABEL_64:
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v40, v36);
    }
  }
  v41 = a1[6];
  if (v41 != 0) {
    v42 = *(_QWORD*)v3;
    a1[7] = v41;
    v43 = 128;
    if (*(_QWORD*)(v42 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(v42 + v43, v41);
  }
  v44 = a1[3];
  if (v44 != 0) {
    v45 = a1[4];
    if (v44 == v45) {
      goto LABEL_88;
    }
    do {
      v46 = *(_QWORD*)(v45 - 8);
      *(_QWORD*)(v45 - 8) = 0;
      if (v46 != 0) {
        GameRoutine_10758f0(v46 + 8);
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v47, v46);
      }
      v48 = *(_QWORD*)(v45 - 16);
      *(_QWORD*)(v45 - 16) = 0;
      if (v48 != 0) {
        GameRoutine_10758f0(v48 + 8);
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v49 = 128;
        }
        else {
          v49 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v49, v48);
      }
      v50 = *(_QWORD*)(v45 - 24);
      if (v50 != 0) {
        std___1___shared_weak_count___release_weak(v50);
      }
      v45 -= 32;
    } while (v45 != v44);
    v51 = a1[3];
    a1[4] = v44;
    v44 = v51;
    if (v51 != 0) {
    LABEL_88:
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v52, v44);
    }
  }
  result = a1[2];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 CharacterActor_1804600(_QWORD* a1, _QWORD* a2, __int64 a3)
{
  int v3;
  __int64 v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  char* v28;
  signed __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  _QWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  char* v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 result;
  __int64 v49;
  float v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  unsigned __int8 v58[16];
  __int64 v59;
  _DWORD v60[8];
  _DWORD* v61;

  v3 = *(unsigned __int8*)(a3 + 32);
  v4 = a2[1];
  v54 = *a2;
  v55 = v4;
  if (v4 != 0 &&
      (atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                 memory_order_relaxed),
       (v8 = a2[1]) != 0) &&
      (v9 = std___1___shared_weak_count_lock(v8)) != 0) {
    v10 = *a2;
    v56 = v9;
  }
  else {
    v56 = 0;
    v10 = 0;
  }
  v11 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       80, 16, 0);
  *(_WORD*)v58 = 0;
  *(_BYTE*)v12 = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 24) = 0;
  *(_QWORD*)(v12 + 32) = 0;
  *(_DWORD*)(v12 + 8) = -1;
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  v13 = GameRoutine_17fe9d0(v12 + 8, (__int64*)(v10 + 32), v58, v3 == 2);
  *(_BYTE*)v12 = v13 & 1;
  if ((v13 & 1) != 0) {
    v61 = nullptr;
    if ((GameRoutine_1075d50(v12 + 8, v60) & 1) != 0 && GameData_2235618 != 0) {
      GameRoutine_110b040(GameData_2235618, v12 + 16, v12 + 64);
    }
    if (v61 == v60) {
      v14 = 32;
      goto LABEL_14;
    }
    if (v61 != nullptr) {
      v14 = 40;
    LABEL_14:
      (*(void (**)(void*))(*(_QWORD*)v61 + v14))((void*)v61);
    }
  }
  if ((v58[0] & 1) != 0 && v59 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*v11 + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*v11 + v15, v59);
  }
  v16 = a2[1];
  v57 = a2;
  if (v16 != 0) {
    v17 = std___1___shared_weak_count_lock(v16);
    if (v17 != 0) {
      v18 = *a2;
    }
    else {
      v18 = 0;
    }
  }
  else {
    v18 = 0;
    v17 = 0;
  }
  v19 = *(_BYTE*)(a3 + 34);
  v20 = fw_memory_HeapManager_Allocate(*v11, 80, 16, 0);
  *(_BYTE*)v20 = 0;
  *(_QWORD*)(v20 + 16) = 0;
  *(_QWORD*)(v20 + 24) = 0;
  *(_QWORD*)(v20 + 32) = 0;
  v58[0] = 10;
  *(_QWORD*)(v20 + 40) = 0;
  *(_QWORD*)(v20 + 48) = 0;
  *(_QWORD*)(v20 + 56) = 0;
  *(_QWORD*)(v20 + 64) = 0;
  *(_QWORD*)(v20 + 72) = 0;
  strcpy((char*)&v58[1], "_Face");
  *(_DWORD*)(v20 + 8) = -1;
  v21 = GameRoutine_17fede0(v20 + 8, (__int64*)(v18 + 32), v58, v19, v3 == 2);
  *(_BYTE*)v20 = v21 & 1;
  if ((v21 & 1) != 0) {
    v61 = nullptr;
    if ((GameRoutine_1075d50(v20 + 8, v60) & 1) != 0 && GameData_2235618 != 0) {
      GameRoutine_110b040(GameData_2235618, v20 + 16, v20 + 64);
    }
    v21 = (__int64)v61;
    if (v61 == v60) {
      v22 = 32;
      goto LABEL_33;
    }
    if (v61 != nullptr) {
      v22 = 40;
    LABEL_33:
      v21 = (*(__int64 (**)(void*))(*(_QWORD*)v61 + v22))((void*)v61);
    }
  }
  if ((v58[0] & 1) != 0 && v59 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*v11 + 200LL) == 0) {
      v23 = 56;
    }
    v21 = nn_mem_StandardAllocator_Free(*v11 + v23, v59);
  }
  v24 = v57;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    v21 = std___1___shared_weak_count___release_weak(v17);
  }
  if (v56 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
    v21 = std___1___shared_weak_count___release_weak(v56);
  }
  v26 = (char*)a1[4];
  v25 = a1[5];
  if ((unsigned __int64)v26 >= v25) {
    v28 = (char*)a1[3];
    v29 = v26 - v28;
    v30 = (v26 - v28) >> 5;
    v31 = v30 + 1;
    if ((unsigned __int64)(v30 + 1) >> 59 != 0) {
      GameRoutine_1812bf0(v21);
    }
    v32 = v25 - (_QWORD)v28;
    if (v32 >> 4 > v31) {
      v31 = v32 >> 4;
    }
    if ((unsigned __int64)v32 >= 0x7FFFFFFFFFFFFFE0LL) {
      v33 = 0x7FFFFFFFFFFFFFFLL;
    }
    else {
      v33 = v31;
    }
    if (v33 != 0) {
      if (v33 >> 59 != 0) {
        GameRoutine_60a210(v21);
      }
      v34 = fw_memory_HeapManager_Allocate(*v11, 32 * v33, 16, 0);
      v28 = (char*)a1[3];
      v26 = (char*)a1[4];
      v30 = (v26 - v28) >> 5;
    }
    else {
      v34 = 0;
    }
    v35 = (_QWORD*)(v34 + v29);
    v36 = v34 + 32 * v33;
    v35[2] = v12;
    v35[3] = v20;
    v37 = v34 + v29 - 32 * v30;
    v27 = v34 + v29 + 32;
    *v35 = v54;
    v35[1] = v55;
    if (v28 != v26) {
      v38 = v28;
      v39 = (_QWORD*)v37;
      do {
        *v39 = *(_QWORD*)v38;
        v39[1] = *((_QWORD*)v38 + 1);
        *(_QWORD*)v38 = 0;
        *((_QWORD*)v38 + 1) = 0;
        v40 = *((_QWORD*)v38 + 2);
        *((_QWORD*)v38 + 2) = 0;
        v39[2] = v40;
        v41 = *((_QWORD*)v38 + 3);
        *((_QWORD*)v38 + 3) = 0;
        v38 += 32;
        v39[3] = v41;
        v39 += 4;
      } while (v38 != v26);
      do {
        v42 = *((_QWORD*)v28 + 3);
        *((_QWORD*)v28 + 3) = 0;
        if (v42 != 0) {
          GameRoutine_10758f0(v42 + 8);
          if (*(_QWORD*)(*v11 + 200LL) != 0) {
            v43 = 128;
          }
          else {
            v43 = 56;
          }
          nn_mem_StandardAllocator_Free(*v11 + v43, v42);
        }
        v44 = *((_QWORD*)v28 + 2);
        *((_QWORD*)v28 + 2) = 0;
        if (v44 != 0) {
          GameRoutine_10758f0(v44 + 8);
          if (*(_QWORD*)(*v11 + 200LL) != 0) {
            v45 = 128;
          }
          else {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free(*v11 + v45, v44);
        }
        v46 = *((_QWORD*)v28 + 1);
        if (v46 != 0) {
          std___1___shared_weak_count___release_weak(v46);
        }
        v28 += 32;
      } while (v28 != v26);
      v28 = (char*)a1[3];
      v24 = v57;
    }
    a1[3] = v37;
    a1[4] = v27;
    a1[5] = v36;
    if (v28 != nullptr) {
      v47 = 128;
      if (*(_QWORD*)(*v11 + 200LL) == 0) {
        v47 = 56;
      }
      nn_mem_StandardAllocator_Free(*v11 + v47, v28);
    }
  }
  else {
    v27 = (__int64)(v26 + 32);
    *((_QWORD*)v26 + 2) = v12;
    *((_QWORD*)v26 + 3) = v20;
    *(_QWORD*)v26 = v54;
    *((_QWORD*)v26 + 1) = v55;
  }
  a1[4] = v27;
  result = std___1___shared_weak_count_lock(v24[1]);
  v49 = result;
  v50 = *(float*)(*v24 + 8LL);
  v52 = a1[6];
  v51 = a1[7];
  v53 = a1 + 6;
  *(float*)v60 = v50;
  if (v52 == v51 || *(float*)(v51 - 4) <= v50) {
    result = AnimCtrlModule_a78450(v53, v60);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
    return std___1___shared_weak_count___release_weak(v49);
  }
  return result;
}

__int64 CharacterActor_Unknown2(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  atomic_uchar* v8;
  int* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  unsigned __int8 explicit;
  int* v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  unsigned __int8 v28;
  int* v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  unsigned __int8 v34;
  int* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  atomic_uchar* v55;
  int v56;
  __int64 v57;

  v1 = *(_DWORD*)(result + 336);
  v2 = result;
  if (v1 > 2) {
    if (v1 == 3) {
      v20 = *(_QWORD*)(result + 264);
      if (v20 != 0) {
        explicit = atomic_load_explicit(
            (atomic_uchar* volatile)GameData_212deb8, memory_order_acquire);
        v22 = GameData_212deb0;
        if ((explicit & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire(GameData_212deb8) != 0) {
          *v22 = wld_Crc32(0, "CharacterBuilder", 16);
          __cxa_guard_release(GameData_212deb8);
        }
        v23 = *(_QWORD*)(v20 + 512);
        v24 = v23;
        while (v24 != *(_QWORD*)(v20 + 504)) {
          v25 = *(_DWORD*)(v24 - 16);
          v24 -= 16;
          v23 -= 16;
          if (v25 == *v22) {
            if (*(_QWORD*)(v20 + 512) != v23) {
              v26 = *(_QWORD*)(v23 + 8);
              if (v26 != 0) {
                *(_QWORD*)(v2 + 272) = *(_QWORD*)(v26 + 408);
                v27 = *(_QWORD*)(v26 + 416);
                *(_QWORD*)(v2 + 280) = v27;
                if (v27 != 0) {
                  v28 = atomic_load_explicit(
                      (atomic_uchar* volatile)GameData_212ed90,
                      memory_order_acquire);
                  v29 = GameData_212ed88;
                  if ((v28 & 1) == 0 && (unsigned int)__cxa_guard_acquire(
                                            GameData_212ed90) != 0) {
                    *v29 = wld_Crc32(0, "AnimLayerCtrlModule", 19);
                    __cxa_guard_release(GameData_212ed90);
                  }
                  v30 = *(_QWORD*)(v27 + 512);
                  v31 = v30;
                  while (v31 != *(_QWORD*)(v27 + 504)) {
                    v32 = *(_DWORD*)(v31 - 16);
                    v31 -= 16;
                    v30 -= 16;
                    if (v32 == *v29) {
                      if (*(_QWORD*)(v27 + 512) != v30 &&
                          *(_QWORD*)(v30 + 8) != 0) {
                        goto LABEL_55;
                      }
                      break;
                    }
                  }
                  v33 = *(_QWORD*)(v2 + 280);
                  v34 = atomic_load_explicit(
                      (atomic_uchar* volatile)GameData_212df10,
                      memory_order_acquire);
                  v35 = GameData_212df08;
                  if ((v34 & 1) == 0 && (unsigned int)__cxa_guard_acquire(
                                            GameData_212df10) != 0) {
                    *v35 = wld_Crc32(0, "ModelModule", 11);
                    __cxa_guard_release(GameData_212df10);
                  }
                  v36 = *(_QWORD*)(v33 + 512);
                  v37 = v36;
                  do {
                    v38 = *(_DWORD*)(v37 - 16);
                    v37 -= 16;
                    v36 -= 16;
                  } while (v38 != *v35);
                  v39 = *(_QWORD*)(v2 + 280);
                  v57 = *(_QWORD*)(*(_QWORD*)(v36 + 8) + 24LL);
                  v56 = 1;
                  CharacterActor_1805680_alt1(v39, &v57, &v56);
                }
              }
            }
            break;
          }
        }
      }
    LABEL_55:
      GameRoutine_17ff8a0(*(_QWORD*)(v2 + 272));
      result = GameRoutine_17ff8a0(*(_QWORD*)(v2 + 280));
      v40 = *(_QWORD*)(v2 + 264);
      if (v40 != 0) {
        result = std___1___shared_weak_count_lock(*(_QWORD*)(v2 + 16));
        v41 = *(_QWORD*)(v2 + 8);
        v42 = result;
        v43 = *(unsigned __int8*)(v41 + 24);
        if ((v43 & 1) != 0) {
          v44 = *(_QWORD*)(v41 + 32);
        }
        else {
          v44 = v43 >> 1;
        }
        if (v44 != 0) {
          v45 = v41 + 25;
          v46 = *(_QWORD*)(v41 + 40);
          if ((v43 & 1) != 0) {
            v47 = v46;
          }
          else {
            v47 = v45;
          }
          if (v44 >= 0xFF) {
            v48 = 255;
          }
          else {
            v48 = v44;
          }
          result = memmove(v40 + 16, v47, v48);
        }
        *(_QWORD*)(v40 + 272) = v44;
        *(_BYTE*)(v40 + 16 + v44) = 0;
        if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
          result = std___1___shared_weak_count___release_weak(v42);
        }
      }
      v19 = 4;
      goto LABEL_91;
    }
    if (v1 != 4) {
      return result;
    }
    v7 = *(_QWORD*)(result + 272);
    v8 = (atomic_uchar*)GameData_212eaa0;
    v9 = GameData_212ea98;
    if (v7 != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                                memory_order_acquire) &
           1) == 0) {
        v55 = v8;
        result = __cxa_guard_acquire(GameData_212eaa0);
        v8 = v55;
        if ((_DWORD)result != 0) {
          *v9 = wld_Crc32(0, "MaterialAnimModule", 18);
          result = __cxa_guard_release(GameData_212eaa0);
          v8 = v55;
        }
      }
      v10 = *(_QWORD*)(v7 + 512);
      v11 = v10;
      do {
        if (v11 == *(_QWORD*)(v7 + 504)) {
          v7 = 0;
          goto LABEL_72;
        }
        v12 = *(_DWORD*)(v11 - 16);
        v11 -= 16;
        v10 -= 16;
      } while (v12 != *v9);
      if (*(_QWORD*)(v7 + 512) != v10) {
        v7 = *(_QWORD*)(v10 + 8);
        v13 = *(_QWORD*)(v2 + 280);
        if (v13 != 0) {
          goto LABEL_73;
        }
        goto LABEL_80;
      }
      v7 = 0;
      v13 = *(_QWORD*)(v2 + 280);
      if (v13 == 0) {
      LABEL_80:
        v52 = 0;
      LABEL_81:
        v53 = *(_QWORD*)(v2 + 24);
        v54 = *(_QWORD*)(v2 + 32);
        if (v53 != v54) {
          if (v7 != 0) {
            if (v52 != 0) {
              do {
                GameRoutine_17fc340(v2 + 288, v7,
                                    (_QWORD*)(*(_QWORD*)(v53 + 16) + 8LL));
                result = GameRoutine_17fc340(
                    v2 + 312, v52, (_QWORD*)(*(_QWORD*)(v53 + 24) + 8LL));
                v53 += 32;
              } while (v53 != v54);
            }
            else {
              do {
                result = GameRoutine_17fc340(
                    v2 + 288, v7, (_QWORD*)(*(_QWORD*)(v53 + 16) + 8LL));
                v53 += 32;
              } while (v53 != v54);
            }
          }
          else if (v52 != 0) {
            do {
              result = GameRoutine_17fc340(
                  v2 + 312, v52, (_QWORD*)(*(_QWORD*)(v53 + 24) + 8LL));
              v53 += 32;
            } while (v53 != v54);
          }
        }
        v19 = 5;
      LABEL_91:
        *(_DWORD*)(v2 + 336) = v19;
        return result;
      }
    }
    else {
    LABEL_72:
      v13 = *(_QWORD*)(v2 + 280);
      if (v13 == 0) {
        goto LABEL_80;
      }
    }
  LABEL_73:
    if ((atomic_load_explicit(v8, memory_order_acquire) & 1) == 0) {
      result = __cxa_guard_acquire(GameData_212eaa0);
      if ((_DWORD)result != 0) {
        *v9 = wld_Crc32(0, "MaterialAnimModule", 18);
        result = __cxa_guard_release(GameData_212eaa0);
      }
    }
    v49 = *(_QWORD*)(v13 + 512);
    v50 = v49;
    while (v50 != *(_QWORD*)(v13 + 504)) {
      v51 = *(_DWORD*)(v50 - 16);
      v50 -= 16;
      v49 -= 16;
      if (v51 == *v9) {
        if (*(_QWORD*)(v13 + 512) == v49) {
          goto LABEL_80;
        }
        v52 = *(_QWORD*)(v49 + 8);
        goto LABEL_81;
      }
    }
    goto LABEL_80;
  }
  if (v1 != 1) {
    if (v1 != 2) {
      return result;
    }
    v3 = *(_QWORD*)(result + 24);
    v4 = *(_QWORD*)(result + 32);
    while (v3 != v4) {
      v5 = *(_QWORD*)(v3 + 16);
      if (*(_BYTE*)v5 == 1) {
        result = *(_QWORD*)(v5 + 64);
        if (result == 0) {
          return result;
        }
        if (*(_BYTE*)(result + 165) != 1) {
          return result;
        }
        result = GameRoutine_ad7390(result);
        if ((result & 1) == 0) {
          return result;
        }
      }
      v6 = *(_QWORD*)(v3 + 24);
      if (*(_BYTE*)v6 == 1) {
        result = *(_QWORD*)(v6 + 64);
        if (result == 0) {
          return result;
        }
        if (*(_BYTE*)(result + 165) != 1) {
          return result;
        }
        result = GameRoutine_ad7390(result);
        if ((result & 1) == 0) {
          return result;
        }
      }
      v3 += 32;
    }
    v19 = 3;
    goto LABEL_91;
  }
  v14 = *(_QWORD*)(result + 264);
  if (v14 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                              memory_order_acquire) &
         1) == 0) {
      result = __cxa_guard_acquire(GameData_212deb8);
      if ((_DWORD)result != 0) {
        *GameData_212deb0 = wld_Crc32(0, "CharacterBuilder", 16);
        result = __cxa_guard_release(GameData_212deb8);
      }
    }
    v15 = *(_QWORD*)(v14 + 512);
    v16 = v15;
    while (v16 != *(_QWORD*)(v14 + 504)) {
      v17 = *(_DWORD*)(v16 - 16);
      v16 -= 16;
      v15 -= 16;
      if (v17 == *GameData_212deb0) {
        if (*(_QWORD*)(v14 + 512) == v15) {
          return result;
        }
        v18 = *(_QWORD*)(v15 + 8);
        if (v18 == 0 || (*(_BYTE*)(v18 + 342) & 1) == 0) {
          return result;
        }
        if (*(_QWORD*)(v2 + 216) != *(_QWORD*)(v2 + 224)) {
          result = GameRoutine_1805160(*(_QWORD*)(v2 + 264));
        }
        v19 = 2;
        goto LABEL_91;
      }
    }
  }
  return result;
}

__int64 CharacterActor_18055a0(__int64 a1)
{
  unsigned __int8 explicit;
  int* v2;
  int v3;
  __int64 v4;
  __int64 i;
  int v6;
  int v8;
  __int64 v9;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                                  memory_order_acquire);
  v2 = GameData_212ed88;
  if ((explicit & 1) == 0) {
    v9 = a1;
    v8 = __cxa_guard_acquire(GameData_212ed90);
    v2 = GameData_212ed88;
    a1 = v9;
    if (v8 != 0) {
      *GameData_212ed88 = wld_Crc32(0, "AnimLayerCtrlModule", 19);
      __cxa_guard_release(GameData_212ed90);
      v2 = GameData_212ed88;
      a1 = v9;
    }
  }
  v3 = *v2;
  v4 = *(_QWORD*)(a1 + 512);
  for (i = v4; i != *(_QWORD*)(a1 + 504); i -= 16) {
    v6 = *(_DWORD*)(i - 16);
    v4 -= 16;
    if (v6 == v3) {
      if (*(_QWORD*)(a1 + 512) != v4) {
        return *(_QWORD*)(v4 + 8);
      }
      return 0;
    }
  }
  return 0;
}

__int64 CharacterActor_1805680(__int64 a1, __int64* a2, unsigned int* a3)
{
  __int64* v6;
  __int64 v7;
  unsigned __int8 explicit;
  int* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  _BYTE* v18;
  bool v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD v49[2];

  nn_os_LockMutex_alt1((__int64)GameData_212df28);
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 120, 16, 0);
  GameRoutine_ce3010_alt1(v7, a1, *a2, *a3, 4u);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                                  memory_order_acquire);
  v9 = GameData_212ed88;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212ed90) != 0) {
    *v9 = wld_Crc32_alt1(0, "AnimLayerCtrlModule", 0x13u);
    __cxa_guard_release_alt1((__int64)GameData_212ed90);
  }
  v10 = *v9;
  v11 = *(_QWORD*)(a1 + 504);
  v12 = *(_QWORD*)(a1 + 512);
  v13 = v12;
  LODWORD(v49[0]) = v10;
  v49[1] = v7;
  while (v13 != v11) {
    v14 = *(_DWORD*)(v13 - 16);
    v13 -= 16;
    if (v14 == v10) {
      if ((*(_BYTE*)(v7 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v11 == v12 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v11) <= 0x6F) {
    v15 = fw_memory_HeapManager_Allocate_alt1(*v6, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v15;
    *(_QWORD*)(a1 + 512) = v15;
    *(_QWORD*)(a1 + 520) = v15 + 112;
    if (v12 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v16, v11);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v49);
  if ((*(_BYTE*)(v7 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v7 + 16) = 1;
    *(_BYTE*)(v7 + 17) &= ~2u;
    *(_BYTE*)(v7 + 18) &= ~2u;
    *(_BYTE*)(v7 + 19) &= ~2u;
    *(_BYTE*)(v7 + 20) &= ~2u;
    v17 = *(_BYTE**)(v7 + 8);
    v17[632] = 0;
    v17[664] = 0;
    v17[696] = 0;
    v17[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 64LL))(v7);
    v18 = *(_BYTE**)(v7 + 8);
    v19 = v18[300] == 3 && v18[301] == 3;
    if (v19 || v18[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 72LL))(v7);
    }
  }
LABEL_20:
  v20 = *(__int64**)(a1 + 536);
  v21 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v20 >= v21) {
    v23 = *(_QWORD*)(a1 + 528);
    v24 = (char*)v20 - v23;
    v25 = ((__int64)v20 - v23) >> 3;
    v26 = v25 + 1;
    if ((unsigned __int64)(v25 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v27 = v21 - v23;
    if (v27 >> 2 > v26) {
      v26 = v27 >> 2;
    }
    if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
      v28 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v28 = v26;
    }
    if (v28 != 0) {
      if (v28 >> 61 != 0) {
        goto LABEL_56;
      }
      v29 = fw_memory_HeapManager_Allocate_alt1(*v6, 8 * v28, 16, 0);
    }
    else {
      v29 = 0;
    }
    v30 = v29 + 8 * v28;
    v31 = (unsigned __int64)v20 - v23;
    v32 = (__int64)&v24[v29 + -8 * v25];
    *(_QWORD*)&v24[v29] = v7;
    v22 = (__int64)&v24[v29 + 8];
    memcpy_alt1(v32, v23, v31);
    *(_QWORD*)(a1 + 528) = v32;
    *(_QWORD*)(a1 + 536) = v22;
    *(_QWORD*)(a1 + 544) = v30;
    if (v23 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v33, v23);
    }
  }
  else {
    *v20 = v7;
    v22 = (__int64)(v20 + 1);
  }
  *(_QWORD*)(a1 + 536) = v22;
  v34 = *(__int64**)(a1 + 560);
  v35 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v34 < v35) {
    *v34 = v7;
    v36 = (__int64)(v34 + 1);
    goto LABEL_52;
  }
  v37 = *(_QWORD*)(a1 + 552);
  v38 = (char*)v34 - v37;
  v39 = ((__int64)v34 - v37) >> 3;
  v40 = v39 + 1;
  if ((unsigned __int64)(v39 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v41 = v35 - v37;
  if (v41 >> 2 > v40) {
    v40 = v41 >> 2;
  }
  if ((unsigned __int64)v41 >= 0x7FFFFFFFFFFFFFF8LL) {
    v42 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v42 = v40;
  }
  if (v42 != 0) {
    if (v42 >> 61 == 0) {
      v43 = fw_memory_HeapManager_Allocate_alt1(*v6, 8 * v42, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v43 = 0;
LABEL_48:
  v44 = v43 + 8 * v42;
  v45 = (unsigned __int64)v34 - v37;
  v46 = (__int64)&v38[v43 + -8 * v39];
  *(_QWORD*)&v38[v43] = v7;
  v36 = (__int64)&v38[v43 + 8];
  memcpy_alt1(v46, v37, v45);
  *(_QWORD*)(a1 + 552) = v46;
  *(_QWORD*)(a1 + 560) = v36;
  *(_QWORD*)(a1 + 568) = v44;
  if (v37 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v47, v37);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v36;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  return nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
}

bool CharacterActor_Unknown3(__int64 a1)
{
  int v1;

  v1 = *(_DWORD*)(a1 + 336);
  return v1 == 5 || v1 == 0;
}

void CharacterActor_Unknown4(__int64 a1, long double a2, float a3)
{
  __int64 v3;
  float v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  float v9;
  __int64 v10;
  unsigned __int64* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  float v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float32x4_t** v31;
  __int64 v32;
  float32x4_t* v33;
  unsigned __int64 v34;
  __int64 v35;
  float32x4_t v36;
  float32x4_t v37;
  int8x16_t v38;
  __int128 v39;
  float32x4_t v40;
  float32x4_t v41;
  long double v42;
  __int128 v43;
  float v44;
  double v45;
  double v46;
  double v47;
  double v48;
  double v49;
  double v50;
  double v51;
  double v52;
  double v53;
  double v54;
  float v55;
  float v56;
  float v57;
  bool v58;
  bool v59;
  int v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  int v67;
  __int64* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  float v72;
  bool v73;
  __int64 v75;
  __int128 v76;
  float v77;
  float v78;
  float v79;
  unsigned int v80;
  __int64 v81;
  unsigned __int32 v82;
  __int64 v83;
  unsigned __int64 v84;
  unsigned __int8 explicit;
  int* v86;
  __int64 v87;
  __int64 v88;
  int v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int128 v97;
  float v98;
  float v99;
  float v100;
  unsigned int v101;
  __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  unsigned __int8 v105;
  int* v106;
  __int64 v107;
  __int64 v108;
  int v109;
  float32x4_t* v110;
  __int64 v111;
  unsigned __int64 v112;
  __int64* v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  float v118;
  __int128 v119;
  float v120;
  float v121;
  unsigned int v122;
  __int64 v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  __int64 v129;
  int v130;
  unsigned __int32 v131;
  __int64 v132;
  int v133;
  bool v134;
  float32x4_t v135;
  __int128 v136;
  int v137;
  int v138;
  __int64 v139;
  float v140;
  float32x4_t v141;
  float32x4_t* v142;
  __int64 v143;
  __int64 v144;
  int v145;
  __int64 v146;
  float v147;
  float v148;
  float v149;
  float32x4_t v150;
  __int128 v151;
  float32x4_t* v152;

  v3 = *(_QWORD*)(a1 + 48);
  v5 = *(float*)&a2;
  v7 = (unsigned __int64)(*(_QWORD*)(a1 + 56) - v3) >> 2;
  v8 = v7 - 1;
  while ((int)v7 > 0) {
    v9 = *(float*)(v3 + 4LL * (unsigned int)v8);
    LODWORD(v7) = v7 - 1;
    --v8;
    if (v9 <= a3) {
      v10 = *(_QWORD*)(a1 + 264);
      v11 = (unsigned __int64*)(a1 + 264);
      v12 = 0;
      if (*(_BYTE*)(v10 + 289) == 1 && (*(_BYTE*)(v10 + 288) & 1) != 0) {
        if ((*(_BYTE*)(v10 + 300) & 0xFD) == 1) {
          v12 = 0;
        }
        else {
          do {
            v10 = *(_QWORD*)(v10 + 736);
            v12 = v10 == 0;
          } while (v10 != 0 && *(_BYTE*)(v10 + 289) == 1 &&
                   *(_BYTE*)(v10 + 288) == 1 &&
                   (*(_BYTE*)(v10 + 300) & 0xFD) != 1);
        }
      }
      if ((v7 & 0x80000000) == 0 && *(_DWORD*)(a1 + 344) != (_DWORD)v7) {
        v12 = 1;
        *(_DWORD*)(a1 + 344) = v7;
      }
      goto LABEL_20;
    }
  }
  v13 = *(_QWORD*)(a1 + 264);
  v11 = (unsigned __int64*)(a1 + 264);
  v12 = 0;
  if (*(_BYTE*)(v13 + 289) == 1 && (*(_BYTE*)(v13 + 288) & 1) != 0) {
    if ((*(_BYTE*)(v13 + 300) & 0xFD) == 1) {
      v12 = 0;
    }
    else {
      do {
        v13 = *(_QWORD*)(v13 + 736);
        v12 = v13 == 0;
      } while (v13 != 0 && *(_BYTE*)(v13 + 289) == 1 &&
               *(_BYTE*)(v13 + 288) == 1 && (*(_BYTE*)(v13 + 300) & 0xFD) != 1);
    }
  }
LABEL_20:
  v14 = *(unsigned int*)(a1 + 344);
  if ((v14 & 0x80000000) == 0) {
    v15 = (_QWORD*)(*(_QWORD*)(a1 + 24) + 32 * v14);
    v16 = v15[1];
    if (v16 != 0 && (v17 = std___1___shared_weak_count_lock(v16)) != 0) {
      v18 = *(float*)(*v15 + 8LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v19 = v17;
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak(v19);
      }
    }
    else {
      v18 = COERCE_FLOAT((_DWORD)&GameData_1a0d058);
    }
    v20 = *(_QWORD*)(a1 + 272);
    v21 = a3 - v18;
    if (v20 != 0) {
      *(float*)&a2 = v21;
      game_cutscene_AnimPlayer_PlayMaterialAnim(
          a1 + 288, v20,
          (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 32LL * *(int*)(a1 + 344) +
                               16) +
                    8LL),
          a2);
    }
    v22 = *(_QWORD*)(a1 + 280);
    if (v22 != 0) {
      *(float*)&a2 = v21;
      game_cutscene_AnimPlayer_PlayMaterialAnim(
          a1 + 312, v22,
          (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 32LL * *(int*)(a1 + 344) +
                               24) +
                    8LL),
          a2);
    }
  }
  v23 = *(_QWORD*)(a1 + 96);
  v24 = (unsigned __int64)(*(_QWORD*)(a1 + 104) - v23) >> 2;
  while ((int)v24 >= 1) {
    LODWORD(v24) = v24 - 1;
    if (*(float*)(v23 + 4LL * (unsigned int)v24) <= a3) {
      if ((v24 & 0x80000000) == 0 && *(_DWORD*)(a1 + 348) != (_DWORD)v24) {
        v25 = *(_QWORD*)(a1 + 72);
        *(_DWORD*)(a1 + 348) = v24;
        v26 = (_QWORD*)(v25 + 16 * (v24 & 0x7FFFFFFF));
        v27 = v26[1];
        if (v27 != 0 && (v28 = std___1___shared_weak_count_lock(v27)) != 0) {
          v12 = *(_BYTE*)(*v26 + 28LL);
          if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v29 = v28;
            (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
            std___1___shared_weak_count___release_weak(v29);
          }
        }
        else {
          v12 = 0;
        }
      }
      break;
    }
  }
  v30 = *(unsigned int*)(a1 + 348);
  if ((v30 & 0x80000000) == 0) {
    v31 = (float32x4_t**)(*(_QWORD*)(a1 + 72) + 16 * v30);
    v32 = std___1___shared_weak_count_lock(v31[1]);
    v33 = *v31;
    v34 = *(_QWORD*)(a1 + 264);
    v35 = v32;
    v36 = v33[2];
    v37 = vsubq_f32(*(float32x4_t*)(v34 + 304), v36);
    v38 = vmulq_f32(v37, v37);
    LANES128(v38).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
            .n64_f32[0] != 0.0) {
      *(_QWORD*)(v34 + 304) = LANES128(v36).n128_u64[0];
      v39 = *(_OWORD*)(v34 + 304);
      *(_DWORD*)(v34 + 296) |= 1u;
      *((_QWORD*)&v39 + 1) = LANES128(v36).n128_u32[2];
      *(_OWORD*)(v34 + 304) = v39;
      v34 = *v11;
    }
    v40 = v33[3];
    v41 = vsubq_f32(*(float32x4_t*)(v34 + 320), v40);
    v42 = COERCE_LONG_DOUBLE(vmulq_f32(v41, v41));
    *(float32x2_t*)&v42 = vadd_f32(
        COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&v42,
                                                    *(int8x16_t*)&v42, 8u))
                                   .n128_u64[0]),
        *(float32x2_t*)&v42);
    *(float32x2_t*)&v42 = vpadd_f32(*(float32x2_t*)&v42, *(float32x2_t*)&v42);
    if (*(float*)&v42 != 0.0) {
      *(_QWORD*)(v34 + 320) = LANES128(v40).n128_u64[0];
      v140 = LANES128(v40).n128_f32[0];
      v43 = *(_OWORD*)(v34 + 320);
      v44 = LANES128(v40).n128_f32[1];
      *((_QWORD*)&v43 + 1) = LANES128(v40).n128_u32[2];
      v45 = LANES128(v40).n128_f32[2] * 0.5;
      *(_OWORD*)(v34 + 320) = v43;
      v46 = cos(v45);
      v47 = sin(v45);
      v48 = cos(v140 * 0.5);
      v49 = sin(v140 * 0.5);
      v50 = v44 * 0.5;
      v51 = cos(v50);
      *(double*)&v42 = sin(v50);
      v52 = v46 * v49 * v51 - *(double*)&v42 * (v47 * v48);
      v53 = v47 * v49 * *(double*)&v42 + v46 * v48 * v51;
      v54 = v47 * v49 * v51 + v46 * v48 * *(double*)&v42;
      *(double*)&v42 = v47 * v48 * v51 - *(double*)&v42 * (v46 * v49);
      v55 = v52;
      v56 = v54;
      v57 = v53;
      *(float*)&v42 = *(double*)&v42;
      v58 = COERCE_FLOAT(*(_OWORD*)(v34 + 336)) == v55 &&
            COERCE_FLOAT(HIDWORD(*(_QWORD*)(v34 + 336))) == v56;
      v59 = v58 && COERCE_FLOAT(*(_QWORD*)(v34 + 344)) == *(float*)&v42;
      if (!v59 || COERCE_FLOAT(HIDWORD(*(_OWORD*)(v34 + 336))) != v57) {
        v61 = *(_DWORD*)(v34 + 296);
        *(float*)(v34 + 336) = v55;
        *(float*)(v34 + 340) = v56;
        *(_DWORD*)(v34 + 344) = LODWORD(v42);
        *(float*)(v34 + 348) = v57;
        *(_DWORD*)(v34 + 296) = v61 | 1;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v35 + 16LL))(v35, v42);
      std___1___shared_weak_count___release_weak(v35);
    }
  }
  *(_BYTE*)(*v11 + 289) = v12 & 1;
  if ((v12 & 1) != 0) {
    v62 = *(_QWORD*)(a1 + 144);
    v63 = (unsigned __int64)(*(_QWORD*)(a1 + 152) - v62) >> 2;
    do {
      if ((int)v63 < 1) {
        goto LABEL_110;
      }
      LODWORD(v63) = v63 - 1;
    } while (*(float*)(v62 + 4LL * (unsigned int)v63) > a3);
    if ((v63 & 0x80000000) != 0) {
      goto LABEL_110;
    }
    v64 = *v11;
    if (*v11 != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(GameData_212deb8) != 0) {
        *GameData_212deb0 = wld_Crc32(0, "CharacterBuilder", 16);
        __cxa_guard_release(GameData_212deb8);
      }
      v65 = *(_QWORD*)(v64 + 512);
      v66 = v65;
      while (v66 != *(_QWORD*)(v64 + 504)) {
        v67 = *(_DWORD*)(v66 - 16);
        v66 -= 16;
        v65 -= 16;
        if (v67 == *GameData_212deb0) {
          if (*(_QWORD*)(v64 + 512) != v65) {
            v64 = *(_QWORD*)(v65 + 8);
            goto LABEL_75;
          }
          break;
        }
      }
      v64 = 0;
    }
  LABEL_75:
    v68 = (__int64*)(*(_QWORD*)(a1 + 120) + 16 * (v63 & 0x7FFFFFFF));
    v69 = v68[1];
    if (v69 != 0) {
      v70 = std___1___shared_weak_count_lock(v69);
      if (v70 != 0) {
        v71 = *v68;
      }
      else {
        v71 = 0;
      }
    }
    else {
      v71 = 0;
      v70 = 0;
    }
    if (*(_BYTE*)(v71 + 28) == 1) {
      v72 = *(float*)(v71 + 8);
      v73 = v72 <= v5 || v72 > a3;
      if (!v73 && v64 != 0) {
        LANES128(v150).n128_u8[8] = 0;
        LANES128(v150).n128_u64[0] = (unsigned __int64)GameData_20ddc68;
        v152 = &v150;
        CharacterBuilder_1083e90(v64, &v150);
        if (v152 == &v150) {
          v75 = 32;
          goto LABEL_92;
        }
        if (v152 != nullptr) {
          v75 = 40;
        LABEL_92:
          (*(void (**)(void))(LANES128(*(v152)).n128_u64[0] + v75))();
        }
      }
    }
    if (*(_BYTE*)(v71 + 29) != 1) {
      goto LABEL_107;
    }
    v76 = *(_OWORD*)(v71 + 32);
    v77 = 1.0;
    v78 = *(float*)(v71 + 8);
    v146 = v71 + 32;
    v147 = v78;
    v148 = a3;
    if ((unsigned int)(int)*(float*)&v76 <= 0xFFFFFFFD) {
      v79 = a3 - v78;
      v77 = 0.0;
      if (v79 > 0.0) {
        v77 = 1.0;
        if (v79 < *((float*)&v76 + 1)) {
          v80 = (int)*(float*)&v76 - 1;
          if (v80 > 2) {
            v81 = 0;
          }
          else {
            v81 = GameData_1c0b528[v80];
          }
          LODWORD(v76) = 1.0;
          v77 = GameRoutine_618640(v81, 0.0, *(double*)&v76);
        }
      }
    }
    v149 = v77;
    PostEffectActor_17fb700(&v146, v71 + 56);
    if (v64 == 0) {
      goto LABEL_107;
    }
    LANES128(v150).n128_u32[2] = v82;
    LANES128(v150).n128_u64[0] = (unsigned __int64)GameData_20ddce8;
    v152 = &v150;
    CharacterBuilder_1083e90(v64, &v150);
    if (v152 == &v150) {
      v83 = 32;
    }
    else {
      if (v152 == nullptr) {
      LABEL_107:
        if (v70 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
          std___1___shared_weak_count___release_weak(v70);
        }
        goto LABEL_110;
      }
      v83 = 40;
    }
    (*(void (**)(void))(LANES128(*(v152)).n128_u64[0] + v83))();
    goto LABEL_107;
  }
LABEL_110:
  if (*(_QWORD*)(a1 + 168) != *(_QWORD*)(a1 + 176)) {
    v84 = *v11;
    LANES128(v141).n128_u64[0] = 0;
    if (v84 != 0) {
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                      memory_order_acquire);
      v86 = GameData_212deb0;
      if ((explicit & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire(GameData_212deb8) != 0) {
        *v86 = wld_Crc32(0, "CharacterBuilder", 16);
        __cxa_guard_release(GameData_212deb8);
      }
      v87 = *(_QWORD*)(v84 + 512);
      v88 = v87;
      while (v88 != *(_QWORD*)(v84 + 504)) {
        v89 = *(_DWORD*)(v88 - 16);
        v88 -= 16;
        v87 -= 16;
        if (v89 == *v86) {
          if (*(_QWORD*)(v84 + 512) != v87) {
            v84 = *(_QWORD*)(v87 + 8);
            goto LABEL_119;
          }
          break;
        }
      }
      v84 = 0;
    LABEL_119:
      LANES128(v141).n128_u64[0] = v84;
    }
    if ((v12 & 1) != 0) {
      v90 = *(_QWORD*)(a1 + 192);
      v91 = (unsigned __int64)(*(_QWORD*)(a1 + 200) - v90) >> 2;
      do {
        if ((int)v91 < 1) {
          goto LABEL_137;
        }
        LODWORD(v91) = v91 - 1;
      } while (*(float*)(v90 + 4LL * (unsigned int)v91) > a3);
      if ((v91 & 0x80000000) != 0) {
        goto LABEL_137;
      }
      v92 = (__int64*)(*(_QWORD*)(a1 + 168) + 16 * (v91 & 0x7FFFFFFF));
      v93 = v92[1];
      if (v93 == 0) {
        goto LABEL_137;
      }
      v94 = std___1___shared_weak_count_lock(v93);
      v95 = *v92;
      v96 = v94;
      if ((*(_BYTE*)(v95 + 28) & 1) == 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v94 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v94 + 16LL))(v94);
          std___1___shared_weak_count___release_weak(v96);
        }
        goto LABEL_137;
      }
      if ((*(_BYTE*)(a1 + 341) & 1) == 0) {
        GameRoutine_17fd1a0((__int64*)&v141);
        *(_BYTE*)(a1 + 341) = 1;
      }
      v97 = *(_OWORD*)(v95 + 32);
      v145 = 0;
      v143 = 0;
      v144 = 0;
      v98 = 1.0;
      v99 = *(float*)(v95 + 8);
      v146 = v95 + 32;
      v147 = v99;
      v148 = a3;
      if ((unsigned int)(int)*(float*)&v97 <= 0xFFFFFFFD) {
        v100 = a3 - v99;
        v98 = 0.0;
        if (v100 > 0.0) {
          v98 = 1.0;
          if (v100 < *((float*)&v97 + 1)) {
            v101 = (int)*(float*)&v97 - 1;
            if (v101 > 2) {
              v102 = 0;
            }
            else {
              v102 = GameData_1c0b528[v101];
            }
            LODWORD(v97) = 1.0;
            v98 = GameRoutine_618640(v102, 0.0, *(double*)&v97);
          }
        }
      }
      v149 = v98;
      PostEffectActor_17fb700(&v146, v95 + 56);
      LODWORD(v143) = v124;
      PostEffectActor_17fb700(&v146, v95 + 88);
      HIDWORD(v143) = v125;
      PostEffectActor_17fb700(&v146, v95 + 120);
      LODWORD(v144) = v126;
      PostEffectActor_17fb700(&v146, v95 + 152);
      HIDWORD(v144) = v127;
      PostEffectActor_17fb700(&v146, v95 + 184);
      v145 = v128;
      if (v84 != 0) {
        LANES128(v150).n128_u64[0] = (unsigned __int64)GameData_20dde68;
        LANES128(v150).n128_u64[1] = (unsigned __int64)&v143;
        v152 = &v150;
        CharacterBuilder_1083e90(v84, &v150);
        if (v152 == &v150) {
          v129 = 32;
          goto LABEL_186;
        }
        if (v152 != nullptr) {
          v129 = 40;
        LABEL_186:
          (*(void (**)(void))(LANES128(*(v152)).n128_u64[0] + v129))();
        }
      }
      if (v96 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v96 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v96 + 16LL))(v96);
        std___1___shared_weak_count___release_weak(v96);
      }
      goto LABEL_145;
    }
  LABEL_137:
    if (*(_BYTE*)(a1 + 341) == 1) {
      if (v84 != 0) {
        LANES128(v150).n128_u64[0] = (unsigned __int64)GameData_20ddd68;
        v152 = &v150;
        CharacterBuilder_1083e90(v84, &v150);
        if (v152 == &v150) {
          v103 = 32;
          goto LABEL_143;
        }
        if (v152 != nullptr) {
          v103 = 40;
        LABEL_143:
          (*(void (**)(void))(LANES128(*(v152)).n128_u64[0] + v103))();
        }
      }
      *(_BYTE*)(a1 + 341) = 0;
    }
  }
LABEL_145:
  if (*(_QWORD*)(a1 + 216) == *(_QWORD*)(a1 + 224)) {
    return;
  }
  v104 = *v11;
  v142 = nullptr;
  if (v104 != 0) {
    v105 = atomic_load_explicit((atomic_uchar* volatile)GameData_2131fb8,
                                memory_order_acquire);
    v106 = GameData_2131fb0;
    if ((v105 & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_2131fb8) != 0) {
      *v106 = wld_Crc32(0, "ObjectDissolveModule", 20);
      __cxa_guard_release(GameData_2131fb8);
    }
    v107 = *(_QWORD*)(v104 + 512);
    v108 = v107;
    while (v108 != *(_QWORD*)(v104 + 504)) {
      v109 = *(_DWORD*)(v108 - 16);
      v108 -= 16;
      v107 -= 16;
      if (v109 == *v106) {
        if (*(_QWORD*)(v104 + 512) != v107) {
          v110 = *(float32x4_t**)(v107 + 8);
          v142 = v110;
          if ((v12 & 1) == 0) {
            goto LABEL_173;
          }
          goto LABEL_157;
        }
        break;
      }
    }
    v110 = nullptr;
    v142 = nullptr;
    if ((v12 & 1) == 0) {
      goto LABEL_173;
    }
    goto LABEL_157;
  }
  v110 = nullptr;
  if ((v12 & 1) != 0) {
  LABEL_157:
    v111 = *(_QWORD*)(a1 + 240);
    v112 = (unsigned __int64)(*(_QWORD*)(a1 + 248) - v111) >> 2;
    while ((int)v112 >= 1) {
      LODWORD(v112) = v112 - 1;
      if (*(float*)(v111 + 4LL * (unsigned int)v112) <= a3) {
        if ((v112 & 0x80000000) != 0) {
          break;
        }
        v113 = (__int64*)(*(_QWORD*)(a1 + 216) + 16 * (v112 & 0x7FFFFFFF));
        v114 = v113[1];
        if (v114 != 0) {
          v115 = std___1___shared_weak_count_lock(v114);
          v116 = *v113;
          v117 = v115;
          if ((*(_BYTE*)(v116 + 32) & 1) == 0) {
            if (atomic_fetch_add((atomic_ullong* volatile)(v115 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v115 + 16LL))(v115);
              std___1___shared_weak_count___release_weak(v117);
            }
            break;
          }
        }
        else {
          if (*(unsigned __int8*)((char*)0x20LL) != 1) {
            break;
          }
          v117 = 0;
          v116 = 0;
        }
        LANES128(v150).n128_u32[0] = 0;
        LANES128(v150).n128_u8[4] = 0;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
          v139 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v139;
          __cxa_guard_release(&GameData_21a6130);
        }
        v152 = nullptr;
        v118 = 1.0;
        v151 = GameData_21a6120;
        v119 = *(_OWORD*)(v116 + 48);
        v120 = *(float*)(v116 + 8);
        v146 = v116 + 48;
        v147 = v120;
        v148 = a3;
        if ((unsigned int)(int)*(float*)&v119 <= 0xFFFFFFFD) {
          v121 = a3 - v120;
          v118 = 0.0;
          if (v121 > 0.0) {
            v118 = 1.0;
            if (v121 < *((float*)&v119 + 1)) {
              v122 = (int)*(float*)&v119 - 1;
              if (v122 > 2) {
                v123 = 0;
              }
              else {
                v123 = GameData_1c0b528[v122];
              }
              LODWORD(v119) = 1.0;
              v118 = GameRoutine_618640(v123, 0.0, *(double*)&v119);
            }
          }
        }
        v149 = v118;
        PostEffectActor_17fb700(&v146, v116 + 72);
        v130 = *(unsigned __int8*)(v116 + 96);
        LANES128(v150).n128_u32[0] = v131;
        if (v130 == 1) {
          LANES128(v150).n128_u8[4] = 1;
          if (*(_BYTE*)(v116 + 97) != 1 ||
              ((*(_BYTE*)(v116 + 104) & 1) != 0
                   ? (v132 = *(_QWORD*)(v116 + 120))
                   : (v132 = v116 + 105),
               (v143 = GameRoutine_17ffec0(*(_QWORD*)(a1 + 272), v132),
                LODWORD(v144) = v133, v143 != 0)
                   ? (v134 = v133 == -1)
                   : (v134 = true),
               v134)) {
            v135 = *(float32x4_t*)(v116 + 128);
          }
          else {
            game_cutscene_17fd5a0(
                (void*)((long double*)LANES128(v141).n128_u64), &v143);
            v135 = vaddq_f32(*(float32x4_t*)(v116 + 128), v141);
          }
          *(_QWORD*)&v136 = LANES128(v135).n128_u64[0];
          *((_QWORD*)&v136 + 1) = LANES128(v135).n128_u32[2];
          v151 = v136;
          PostEffectActor_17fb700(&v146, v116 + 152);
          LODWORD(v152) = v137;
          PostEffectActor_17fb700(&v146, v116 + 184);
          HIDWORD(v152) = v138;
        }
        game_cutscene_17fd220(&v142, &v150);
        if (v117 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v117 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v117 + 16LL))(v117);
          std___1___shared_weak_count___release_weak(v117);
        }
        return;
      }
    }
  }
LABEL_173:
  if (v110 != nullptr) {
    if (LANES128(v110[1]).n128_f32[2] != 0.0) {
      LANES128(v110[1]).n128_u32[2] = 0;
      GameRoutine_f8e6c0(v110);
    }
    if (LANES128(v110[1]).n128_u8[12] != 0) {
      LANES128(v110[1]).n128_u8[12] = 0;
      GameRoutine_f8e6c0(v110);
    }
  }
}

__int64 CharacterActor_Unknown7(__int64 result)
{
  __int64 v1;
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int8 v17;
  int* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  unsigned __int8 v27;
  int* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  unsigned __int8 v37;
  int* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 i;
  int v43;
  __int64 v44;
  int v45;
  __int64 v46;
  int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;

  v1 = *(_QWORD*)(result + 264);
  if (v1 != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212eda0,
                                    memory_order_acquire);
    v3 = GameData_212ed98;
    if ((explicit & 1) == 0) {
      v46 = v1;
      v53 = result;
      v47 = __cxa_guard_acquire(GameData_212eda0);
      result = v53;
      v1 = v46;
      if (v47 != 0) {
        *v3 = wld_Crc32(0, "CharacterAnimator", 17);
        __cxa_guard_release(GameData_212eda0);
        result = v53;
        v1 = v46;
      }
    }
    v5 = *(_QWORD*)(v1 + 504);
    v4 = *(_QWORD*)(v1 + 512);
    v6 = v4;
    v7 = v4;
    while (v7 != v5) {
      v8 = *(_DWORD*)(v7 - 16);
      v7 -= 16;
      v6 -= 16;
      if (v8 == *v3) {
        if (v4 != v6) {
          v9 = *(_QWORD*)(v6 + 8);
          if (v9 != 0 && *(_BYTE*)(v9 + 158) != 0) {
            v10 = *(_QWORD*)(v9 + 96);
            if (v10 != 0) {
              v11 = *(_QWORD*)(v9 + 104);
              *(_QWORD*)(*(_QWORD*)(v10 + 24) + 304LL) = 0;
              v12 = *(_QWORD*)(v10 + 24);
              if (*(_BYTE*)(v12 + 132) == 1) {
                v13 = result;
                Model_a66700(*(_QWORD*)(v12 + 24), *(unsigned int*)(v12 + 128));
                if (*(_BYTE*)(v12 + 132) == 1) {
                  *(_BYTE*)(v12 + 132) = 0;
                }
                result = v13;
                *(_QWORD*)(v12 + 224) = 0xFFFFFFFFLL;
              }
              if (v11 != 0) {
                *(_QWORD*)(*(_QWORD*)(v11 + 24) + 304LL) = 0;
                v14 = *(_QWORD*)(v11 + 24);
                if (*(_BYTE*)(v14 + 132) == 1) {
                  v15 = result;
                  Model_a66700(*(_QWORD*)(v14 + 24),
                               *(unsigned int*)(v14 + 128));
                  if (*(_BYTE*)(v14 + 132) == 1) {
                    *(_BYTE*)(v14 + 132) = 0;
                  }
                  result = v15;
                  *(_QWORD*)(v14 + 224) = 0xFFFFFFFFLL;
                }
              }
            }
          }
        }
        break;
      }
    }
    v16 = *(_QWORD*)(result + 264);
    v17 = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff08,
                               memory_order_acquire);
    v18 = GameData_212ff00;
    if ((v17 & 1) == 0) {
      v48 = v16;
      v54 = result;
      v49 = __cxa_guard_acquire(GameData_212ff08);
      result = v54;
      v16 = v48;
      if (v49 != 0) {
        *v18 = wld_Crc32(0, "CharacterLookAt", 15);
        __cxa_guard_release(GameData_212ff08);
        result = v54;
        v16 = v48;
      }
    }
    v20 = *(_QWORD*)(v16 + 504);
    v19 = *(_QWORD*)(v16 + 512);
    v21 = v19;
    v22 = v19;
    while (v22 != v20) {
      v23 = *(_DWORD*)(v22 - 16);
      v22 -= 16;
      v21 -= 16;
      if (v23 == *v18) {
        if (v19 != v21) {
          v24 = *(_QWORD*)(v21 + 8);
          if (v24 != 0) {
            v25 = *(_DWORD*)(v24 + 96);
            *(_DWORD*)(v24 + 104) = 0;
            *(_DWORD*)(v24 + 96) = v25 | 0x10000;
          }
        }
        break;
      }
    }
    v26 = *(_QWORD*)(result + 264);
    v27 = atomic_load_explicit((atomic_uchar* volatile)GameData_212fa30,
                               memory_order_acquire);
    v28 = GameData_212fa28;
    if ((v27 & 1) == 0) {
      v50 = v26;
      v55 = result;
      v51 = __cxa_guard_acquire(GameData_212fa30);
      result = v55;
      v26 = v50;
      if (v51 != 0) {
        *v28 = wld_Crc32(0, "CharacterFacialController", 25);
        __cxa_guard_release(GameData_212fa30);
        result = v55;
        v26 = v50;
      }
    }
    v30 = *(_QWORD*)(v26 + 504);
    v29 = *(_QWORD*)(v26 + 512);
    v31 = v29;
    v32 = v29;
    while (v32 != v30) {
      v33 = *(_DWORD*)(v32 - 16);
      v32 -= 16;
      v31 -= 16;
      if (v33 == *v28) {
        if (v29 != v31) {
          v34 = *(_QWORD*)(v31 + 8);
          if (v34 != 0) {
            v35 = *(_DWORD*)(v34 + 96);
            *(_DWORD*)(v34 + 104) = 0;
            *(_DWORD*)(v34 + 96) = v35 | 0x10000;
          }
        }
        break;
      }
    }
    v36 = *(_QWORD*)(result + 264);
    v37 = atomic_load_explicit((atomic_uchar* volatile)GameData_212fef8,
                               memory_order_acquire);
    v38 = GameData_212fef0;
    if ((v37 & 1) == 0) {
      v52 = v36;
      result = __cxa_guard_acquire(GameData_212fef8);
      v36 = v52;
      if ((_DWORD)result != 0) {
        *v38 = wld_Crc32(0, "CharacterIK", 11);
        result = __cxa_guard_release(GameData_212fef8);
        v36 = v52;
      }
    }
    v40 = *(_QWORD*)(v36 + 504);
    v39 = *(_QWORD*)(v36 + 512);
    v41 = v39;
    for (i = v39; i != v40; i -= 16) {
      v43 = *(_DWORD*)(i - 16);
      v41 -= 16;
      if (v43 == *v38) {
        if (v39 != v41) {
          v44 = *(_QWORD*)(v41 + 8);
          if (v44 != 0) {
            v45 = *(_DWORD*)(v44 + 56);
            *(_DWORD*)(v44 + 64) = 0;
            *(_DWORD*)(v44 + 56) = v45 | 0x10000;
          }
        }
        return result;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
