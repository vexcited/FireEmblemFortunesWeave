#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int128 GameData_1a83090;
extern __int128 GameData_1a837f0;
extern char GameData_1abbc8d[];
extern char GameData_1ade8ad[];
extern __int64 (*GameData_1fd08e0[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c370;
extern __int64 GameData_212c6a0[3];
extern int* GameData_212df08;
extern _UNKNOWN* GameData_212df10;
extern int* GameData_212ea00;
extern _UNKNOWN* GameData_212ea08;
extern _UNKNOWN* GameData_212ea28;
extern char GameData_2167610;
extern char GameData_2167620;
extern __int64 GameData_21a6070;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_1083780(_QWORD, _QWORD);
__int64 GameRoutine_1971f0(_QWORD, _QWORD);
__int64 GameRoutine_1976c0(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a200(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, long double);
__int64 GameRoutine_1a0a540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_540(PSEUDO_X8, _QWORD, _QWORD,
                                                _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_6380e0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_64aa00(long double, long double,
                                                  long double, long double);
__int64 GameRoutine_64be60();
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b7aa0(_QWORD);
__int64 GameRoutine_6b7aa0_alt1(_QWORD, _QWORD, _QWORD, _QWORD) __asm__(
    "GameRoutine_6b7aa0");
__int64 GameRoutine_1a0a4e0_alt1(_QWORD, _QWORD) __asm__(
    "GameRoutine_1a0a4e0");
__int64 GameRoutine_a7bee0(__int64, __int64);
__int64 GameRoutine_a7c000(_QWORD);
__int64 GameRoutine_ad6000(_QWORD, _QWORD);
__int64 GameRoutine_ade2c0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_bda1f0(void);
__int64 GameRoutine_bda220(void);
__int64* GameRoutine_6380e0_alt1(__int64,
                                 __int64**) __asm__("GameRoutine_6380e0");
__int64 CharacterBuilder_1083780(__int64, _BYTE*);
__int64 GameHr_ad6000(__int64, unsigned __int64);
__int64 GameHr_bda220(__int64, __int64*);
__int64 LocatorModule_a7bee0(__int64, const char*);
__int64 LocatorModule_a7c000(_QWORD*, int);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern __int64 (*game_character_CharacterMaterial_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
int __cxa_guard_acquire(__int64);
int strncmp(const char*, const char*, unsigned __int64);
void Material_ade2c0(_QWORD*);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_bda1f0_alt1() __asm__("GameRoutine_bda1f0");
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void std___1_locale_Destroy_locale(__int64);
void GameHr_bd6740(__int64 a1, __int64 a2, _QWORD* a3, char a4);

void GameHr_bd6740(__int64 a1, __int64 a2, _QWORD* a3, char a4)
{

#pragma clang fp contract(off)
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  long double v11;
  __int64 v12;
  unsigned __int8 explicit;
  int* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  const char** v45;
  const char** v46;
  __int64 v47;
  const char** v48;
  unsigned int v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  _BOOL4 v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  unsigned __int64 v62;
  _QWORD* v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  _BYTE* v67;
  int v68;
  unsigned __int64 v69;
  __int64 v70;
  _BYTE* v71;
  int v72;
  __int64** v73;
  __int64** v74;
  __int64* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  char* v83;
  __int64 v84;
  __int64 v85;
  int v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  int v90;
  __int64 v91;
  int v92;
  __int64 v93;
  __int64 v94;
  bool v95;
  __int64 v96;
  _BYTE* v97;
  __int64 v98;
  _BYTE* v99;
  __int64 v100;
  char v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  char* v107;
  __int64 v108;
  _BYTE* v109;
  __int64 v110;
  _BYTE* v111;
  __int64 v112;
  char v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  char* v119;
  __int64 v120;
  _BYTE* v121;
  __int64 v122;
  _BYTE* v123;
  __int64 v124;
  char v125;
  __int64 v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  __int64 v130;
  int v131;
  bool v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  bool v137;
  __int64 v138;
  unsigned __int8 v139;
  int* v140;
  __int64 v141;
  __int64 v142;
  int v143;
  _QWORD* v144;
  _QWORD* v145;
  __int64 v146;
  int v147;
  unsigned __int64 v148;
  char v149;
  _QWORD* v150;
  __int64 v151;
  struct {
    _QWORD v152[2];
    __int64 v153;
  } v152_;
  struct {
    _QWORD v154[2];
    unsigned __int64 v155;
    __int64 (*v156)();
    __int64 v157;
  } v154_;
  struct {
    _BYTE v158[256];
    _BYTE* v159;
  } v158_;
  struct {
    __int64* v160;
    __int64 v161;
    _QWORD* v162;
    __int64 v163;
  } v160_;
  struct {
    _BYTE v164[8];
    char v165;
  } v164_;
  struct {
    _QWORD v166[2];
    int v167;
    char gap452_[4];
    __int64 v168;
    __int64 v169;
  } v166_;

  *(_BYTE*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 17) = 33686018;
  *(_QWORD*)a1 = game_character_CharacterMaterial_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  *(_DWORD*)(a1 + 24) = GameHr_ad6000((__int64)"CharaOutline", 0xCu);
  v7 = GameHr_ad6000((__int64)"CharaTransparentOutline", 0x17u);
  *(_QWORD*)(a1 + 48) = 0;
  v8 = (__int64*)GameData_212ea28;
  *(_QWORD*)(a1 + 32) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 28) = v7;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_BYTE*)(a1 + 88) = 0;
  *(_DWORD*)(a1 + 114) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_BYTE*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 40) = 1065353216;
  *(_WORD*)(a1 + 112) = 256;
  v10 = *v8;
  v9 = v8[1];
  *(_QWORD*)(a1 + 96) = v10;
  *(_QWORD*)(a1 + 104) = v9;
  *(_QWORD*)(a1 + 176) = 0xFFFFFFFF00000000LL;
  *(_OWORD*)(a1 + 144) = GameData_1a837f0;
  *(_OWORD*)(a1 + 160) = GameData_1a83090;
  *(_DWORD*)(a1 + 192) = GameHr_ad6000((__int64)"CharaForward", 0xCu);
  *(_DWORD*)(a1 + 196) =
      GameHr_ad6000((__int64)"CharaForwardTransparent", 0x17u);
  *(_DWORD*)(a1 + 200) = GameHr_ad6000((__int64)"CharaDepth", 0xAu);
  *(_DWORD*)(a1 + 204) =
      GameHr_ad6000((__int64)"CharaTransparentPreDepth", 0x18u);
  *(_DWORD*)(a1 + 208) = GameHr_ad6000((__int64)"CharaGmapOutlineMask", 0x14u);
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  v12 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 232) = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v14 = GameData_212df08;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
    *v14 = wld_Crc32(0, "ModelModule", 0xBu);
    __cxa_guard_release((__int64)GameData_212df10);
  }
  v15 = *(_QWORD*)(v12 + 512);
  v16 = v15;
  do {
    v17 = *(_DWORD*)(v16 - 16);
    v16 -= 16;
    v15 -= 16;
  } while (v17 != *v14);
  v18 = *(_QWORD*)(v15 + 8);
  *(_QWORD*)(a1 + 248) = 0;
  v149 = a4;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 240) = v18;
  v19 = *(_QWORD*)(v18 + 24);
  v21 = *(_QWORD*)(v19 + 312);
  v20 = *(_QWORD*)(v19 + 320);
  v150 = a3;
  v151 = v19;
  v22 = v20 - v21;
  v23 = *(_QWORD*)(a1 + 48);
  v24 = *(_QWORD*)(a1 + 56);
  v25 = v22 >> 4;
  v26 = v24 - v23;
  v27 = (v24 - v23) >> 2;
  v28 = (v22 >> 4) - v27;
  if (v22 >> 4 <= v27) {
    if (v22 >> 4 >= v27) {
      goto LABEL_20;
    }
    v39 = v23 + 4 * v25;
    goto LABEL_19;
  }
  v29 = *(_QWORD*)(a1 + 64);
  if (v28 <= (v29 - v24) >> 2) {
    memset(*(_QWORD*)(a1 + 56), 0,
           (((v22 >> 2) - v26 - 4) & 0xFFFFFFFFFFFFFFFCLL) + 4);
    v39 = v24 + 4 * v28;
  LABEL_19:
    *(_QWORD*)(a1 + 56) = v39;
    goto LABEL_20;
  }
  if (v25 >> 62 != 0) {
    GameRoutine_bda1f0_alt1();
  }
  v30 = v29 - v23;
  if (v30 >> 1 > v25) {
    v25 = v30 >> 1;
  }
  v31 = (unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFFCLL;
  v32 = 0x3FFFFFFFFFFFFFFFLL;
  if (!v31) {
    v32 = v25;
  }
  if (v32 >> 62 != 0) {
    GameRoutine_60a210_alt1();
  }
  v148 = v32;
  v33 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       4 * v32, 16, 0);
  v34 = *(_QWORD*)(a1 + 48);
  v35 = v33 + v26;
  v36 = v33;
  v37 = v24 - v34;
  memset(v33 + v26, 0, (((v22 >> 2) - v26 - 4) & 0xFFFFFFFFFFFFFFFCLL) + 4);
  memcpy(v35 - v37, v34, v37);
  *(_QWORD*)(a1 + 48) = v35 - v37;
  *(_QWORD*)(a1 + 56) = v35 + 4 * v28;
  *(_QWORD*)(a1 + 64) = v36 + 4 * v148;
  if (v34 != 0) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v38,
                                  v34);
  }
LABEL_20:
  v40 = *(__int64**)(v19 + 312);
  v41 = *(__int64**)(v19 + 320);
  if (v40 != v41) {
    v42 = 0;
    do {
      v43 = *v40;
      v44 = *(_QWORD*)(*v40 + 16);
      if (v44 == 0) {
        goto LABEL_29;
      }
      v45 = *(const char***)(v44 + 56);
      v46 = *(const char***)(v44 + 64);
      if (v45 != v46) {
        while (strncmp(*v45, "outline_mode", 0xCu) != 0) {
          if (++v45 == v46) {
            goto LABEL_29;
          }
        }
      }
      if (v45 == v46) {
      LABEL_29:
        v47 = *(_QWORD*)(v43 + 8);
        if (v47 == 0) {
          goto LABEL_22;
        }
        v45 = *(const char***)(v47 + 80);
        v48 = *(const char***)(v47 + 88);
        if (v45 != v48) {
          while (strncmp(*v45, "outline_mode", 0xCu) != 0) {
            if (++v45 == v48) {
              goto LABEL_22;
            }
          }
        }
        if (v45 == v48) {
          goto LABEL_22;
        }
      }
      v49 = *((_DWORD*)*v45 + 4);
      if (v49 <= 1) {
        *(_DWORD*)(*(_QWORD*)(a1 + 48) + 4 * v42) = v49;
      }
    LABEL_22:
      ++v42;
      v40 += 2;
    } while (v40 != v41);
  }
  if ((v149 & 1) != 0) {
    v50 = *(__int64**)(v19 + 312);
    v51 = *(__int64**)(v19 + 320);
    while (v50 != v51) {
      v52 = *v50;
      v50 += 2;
      (*(void (**)(__int64, const char*, __int64, double))(
          *(_QWORD*)v52 + 16LL))(v52, "GradationEnabled", 16, 0x0.0p+0);
    }
  }
  v53 = (*(_QWORD*)(a1 + 80) & 0xFLL) != 0;
  v54 = 2;
  if (GameData_2167610 != 0) {
    v54 = 0;
  }
  v55 = *(_QWORD*)(a1 + 80) & 0xFFFFFFFFFFFFFFFDLL | v54;
  *(_QWORD*)(a1 + 80) = v55;
  v56 = v55 & 0xF;
  if (v53 != (v56 != 0)) {
    v57 = *(_QWORD*)(*(_QWORD*)(a1 + 240) + 24LL);
    v58 = *(_QWORD*)(v57 + 320) - *(_QWORD*)(v57 + 312);
    if (v58 != 0) {
      v59 = v58 >> 4;
      v60 = 0;
      v61 = v56 == 0;
      do {
        v62 = *(int*)(a1 + 24);
        v63 = *(_QWORD**)(*(_QWORD*)(v57 + 312) + v60);
        v64 = v63[33];
        v65 = 0xAAAAAAAAAAAAAAABLL * ((v63[34] - v64) >> 3);
        if (v65 > v62 && *(_BYTE*)(v64 + 24LL * (int)v62 + 20) == 1) {
          v66 = v64 + 24LL * (int)v62;
          v68 = *(unsigned __int8*)(v66 + 21);
          v67 = (_BYTE*)(v66 + 21);
          if (v68 != v61) {
            *v67 = v61;
            Material_ade2c0(v63);
            v64 = v63[33];
            v65 = 0xAAAAAAAAAAAAAAABLL * ((v63[34] - v64) >> 3);
          }
        }
        v69 = *(int*)(a1 + 28);
        if (v65 > v69 && *(_BYTE*)(v64 + 24LL * (int)v69 + 20) == 1) {
          v70 = v64 + 24LL * (int)v69;
          v72 = *(unsigned __int8*)(v70 + 21);
          v71 = (_BYTE*)(v70 + 21);
          if (v72 != v61) {
            *v71 = v61;
            Material_ade2c0(v63);
          }
        }
        --v59;
        v60 += 16;
      } while (v59 != 0);
    }
  }
  v73 = *(__int64***)(v19 + 312);
  v74 = *(__int64***)(v19 + 320);
  while (v73 != v74) {
    v75 = *v73;
    v73 += 2;
    v76 = *v75;
    if (GameData_2167620 != 0) {
      *(float*)&v11 = 0x1.0000000000000p+0f;
    }
    else {
      *(float*)&v11 = 0x0.0p+0f;
    }
    (*(void (**)(long double))(v76 + 16))(v11);
  }
  *(_BYTE*)(a1 + 112) = GameData_2167620;
  if (v150 != nullptr) {
    v77 = v150[76];
    v78 = v150[77];
    if (v78 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v78 + 16), 1u,
                                memory_order_relaxed);
    }
    v79 = v150[78];
    v80 = *(_QWORD*)(a1 + 224);
    *(_QWORD*)(a1 + 216) = v77;
    *(_QWORD*)(a1 + 224) = v78;
    if (v80 != 0) {
      std___1___shared_weak_count___release_weak(v80);
      v78 = *(_QWORD*)(a1 + 224);
    }
    *(_QWORD*)(a1 + 232) = v79;
    if (v78 == 0 || *(_QWORD*)(v78 + 8) == -1) {
      v79 = 0;
    }
    v154_.v157 = 0;
    v166_.v167 = 0;
    v164_.v164[0] = 0;
    v164_.v165 = 0;
    v152_.v153 = 12;
    v152_.v152[0] = "Jnt_C_Head";
    v154_.v155 = 0;
    v154_.v156 = GameRoutine_64be60;
    v160_.v162 = v152_.v152;
    v160_.v163 = 12;
    v154_.v154[0] = v158_.v158;
    v154_.v154[1] = 256;
    v158_.v159 = v158_.v158;
    v166_.v166[0] = "-{}";
    v166_.v166[1] = "";
    v166_.v168 = 0;
    v166_.v169 = 1;
    v160_.v160 = v154_.v154;
    v160_.v161 = 1;
    GameRoutine_6380e0_alt1((__int64)v166_.v166, &v160_.v160);
    if (v164_.v165 == 1) {
      std___1_locale_Destroy_locale((__int64)v164_.v164);
    }
    v81 = v154_.v155;
    if (v154_.v155 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_191;
    }
    v82 = (__int64)v158_.v159;
    if (v154_.v155 >= 0x17) {
      if ((v154_.v155 | 7) == 0x17) {
        v96 = 26;
      }
      else {
        v96 = (v154_.v155 | 7) + 1;
      }
      v83 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v96, 16, 0);
      v160_.v161 = v81;
      v160_.v162 = v83;
      v160_.v160 = (__int64*)(v96 | 1);
    }
    else {
      LOBYTE(v160_.v160) = 2 * v154_.v155;
      v83 = (char*)&v160_.v160 + 1;
      if (v154_.v155 == 0) {
        goto LABEL_86;
      }
    }
    memmove((__int64)v83, v82, v81);
  LABEL_86:
    v97 = v158_.v159;
    v83[v81] = 0;
    if (v97 != v158_.v158 && v97 != nullptr) {
      v98 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v98 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v98, (__int64)v97);
    }
    if (((unsigned __int8)v160_.v160 & 1) != 0) {
      v99 = v160_.v162;
    }
    else {
      v99 = (char*)&v160_.v160 + 1;
    }
    v100 = CharacterBuilder_1083780(v79, v99);
    v101 = (char)v160_.v160;
    *(_QWORD*)(a1 + 256) = v100;
    if ((v101 & 1) != 0 && v160_.v162 != nullptr) {
      v102 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v102 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v102, (__int64)v160_.v162);
    }
    v103 = *(_QWORD*)(a1 + 224);
    if (v103 == 0 || *(_QWORD*)(v103 + 8) == -1) {
      v104 = 0;
    }
    else {
      v104 = *(_QWORD*)(a1 + 232);
    }
    v154_.v155 = 0;
    v154_.v156 = GameRoutine_64be60;
    v154_.v157 = 0;
    v166_.v167 = 0;
    v164_.v164[0] = 0;
    v152_.v152[0] = "Loc_C_Trans";
    v152_.v153 = 12;
    v164_.v165 = 0;
    v154_.v154[0] = v158_.v158;
    v154_.v154[1] = 256;
    v166_.v166[0] = "-{}";
    v166_.v166[1] = "";
    v158_.v159 = v158_.v158;
    v166_.v168 = 0;
    v166_.v169 = 1;
    v160_.v162 = v152_.v152;
    v160_.v163 = 12;
    v160_.v160 = v154_.v154;
    v160_.v161 = 1;
    GameRoutine_6380e0_alt1((__int64)v166_.v166, &v160_.v160);
    if (v164_.v165 == 1) {
      std___1_locale_Destroy_locale((__int64)v164_.v164);
    }
    v105 = v154_.v155;
    if (v154_.v155 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_191;
    }
    v106 = (__int64)v158_.v159;
    if (v154_.v155 >= 0x17) {
      if ((v154_.v155 | 7) == 0x17) {
        v108 = 26;
      }
      else {
        v108 = (v154_.v155 | 7) + 1;
      }
      v107 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v108, 16, 0);
      v160_.v161 = v105;
      v160_.v162 = v107;
      v160_.v160 = (__int64*)(v108 | 1);
    }
    else {
      LOBYTE(v160_.v160) = 2 * v154_.v155;
      v107 = (char*)&v160_.v160 + 1;
      if (v154_.v155 == 0) {
        goto LABEL_114;
      }
    }
    memmove((__int64)v107, v106, v105);
  LABEL_114:
    v109 = v158_.v159;
    v107[v105] = 0;
    if (v109 != v158_.v158 && v109 != nullptr) {
      v110 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v110 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v110, (__int64)v109);
    }
    if (((unsigned __int8)v160_.v160 & 1) != 0) {
      v111 = v160_.v162;
    }
    else {
      v111 = (char*)&v160_.v160 + 1;
    }
    v112 = CharacterBuilder_1083780(v104, v111);
    v113 = (char)v160_.v160;
    *(_QWORD*)(a1 + 264) = v112;
    if ((v113 & 1) != 0 && v160_.v162 != nullptr) {
      v114 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v114 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v114, (__int64)v160_.v162);
    }
    v115 = *(_QWORD*)(a1 + 224);
    if (v115 == 0 || *(_QWORD*)(v115 + 8) == -1) {
      v116 = 0;
    }
    else {
      v116 = *(_QWORD*)(a1 + 232);
    }
    v152_.v152[0] = "Jnt_C_Head";
    v154_.v155 = 0;
    v154_.v156 = GameRoutine_64be60;
    v154_.v157 = 0;
    v166_.v167 = 0;
    v152_.v153 = 12;
    v160_.v162 = v152_.v152;
    v160_.v163 = 12;
    v164_.v164[0] = 0;
    v164_.v165 = 0;
    v154_.v154[0] = v158_.v158;
    v154_.v154[1] = 256;
    v158_.v159 = v158_.v158;
    v166_.v166[0] = "-{}";
    v166_.v166[1] = "";
    v166_.v168 = 0;
    v166_.v169 = 1;
    v160_.v160 = v154_.v154;
    v160_.v161 = 1;
    GameRoutine_6380e0_alt1((__int64)v166_.v166, &v160_.v160);
    if (v164_.v165 == 1) {
      std___1_locale_Destroy_locale((__int64)v164_.v164);
    }
    v117 = v154_.v155;
    if (v154_.v155 < 0xFFFFFFFFFFFFFFF7LL) {
      v118 = (__int64)v158_.v159;
      if (v154_.v155 >= 0x17) {
        if ((v154_.v155 | 7) == 0x17) {
          v120 = 26;
        }
        else {
          v120 = (v154_.v155 | 7) + 1;
        }
        v119 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v120, 16, 0);
        v160_.v161 = v117;
        v160_.v162 = v119;
        v160_.v160 = (__int64*)(v120 | 1);
      }
      else {
        LOBYTE(v160_.v160) = 2 * v154_.v155;
        v119 = (char*)&v160_.v160 + 1;
        if (v154_.v155 == 0) {
        LABEL_142:
          v121 = v158_.v159;
          v119[v117] = 0;
          if (v121 != v158_.v158 && v121 != nullptr) {
            v122 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v122 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v122, (__int64)v121);
          }
          if (((unsigned __int8)v160_.v160 & 1) != 0) {
            v123 = v160_.v162;
          }
          else {
            v123 = (char*)&v160_.v160 + 1;
          }
          v124 = CharacterBuilder_1083780(v116, v123);
          v125 = (char)v160_.v160;
          *(_QWORD*)(a1 + 272) = v124;
          if ((v125 & 1) != 0 && v160_.v162 != nullptr) {
            v126 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v126 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v126,
                (__int64)v160_.v162);
          }
          goto LABEL_187;
        }
      }
      memmove((__int64)v119, v118, v117);
      goto LABEL_142;
    }
  LABEL_191:
    String_60a1d0();
  }
  v84 = *(_QWORD*)(**(_QWORD**)(v19 + 168) + 8LL);
  if (v84 == 0) {
    LODWORD(v127) = -1;
    LODWORD(v128) = -1;
    goto LABEL_174;
  }
  v85 = v84 + 8;
  v86 = *(_DWORD*)(v84 + 8);
  v87 = v84 + 12;
  v88 = *(unsigned __int16*)(v84 + 12);
  v89 = v84 + 8 + 16 * v88;
  v90 = *(_DWORD*)v89;
  v91 = v89;
  if (v86 < (signed __int32)*(_DWORD*)v89) {
    v92 = *(_DWORD*)v89;
    v93 = *(unsigned __int16*)(v84 + 12);
    do {
      if ((unsigned int)(v92 >> 3) <= 9) {
        v94 =
            ((unsigned __int8)GameData_1ade8ad[~(v92 >> 3) + 10] >> (v92 & 7)) &
            1;
      }
      else {
        v94 = 0;
      }
      v93 = *(unsigned __int16*)(v87 + 16 * v93 + 2 * v94);
      v95 = v92 < (signed __int32)*(_DWORD*)(v85 + 16 * v93);
      v92 = *(_DWORD*)(v85 + 16 * v93);
    } while (v95);
    v91 = v85 + 16 * v93;
  }
  v129 = *(_QWORD*)(v91 + 8);
  if (*(_WORD*)v129 == 10 &&
      ((v130 = *(_QWORD*)(v129 + 2), v131 = *(unsigned __int16*)(v129 + 10),
        v130 == 0x65485F435F746E4ALL)
           ? (v132 = v131 == 25697)
           : (v132 = false),
       v132)) {
    v127 = (unsigned __int64)(v91 - v84 - 24) >> 4;
    if (v86 < v90) {
      goto LABEL_166;
    }
  }
  else {
    LODWORD(v127) = -1;
    if (v86 < v90) {
      do {
      LABEL_166:
        if ((unsigned int)(v90 >> 3) <= 0xA) {
          v133 = ((unsigned __int8)GameData_1abbc8d[~(v90 >> 3) + 11] >>
                  (v90 & 7)) &
                 1;
        }
        else {
          v133 = 0;
        }
        v88 = *(unsigned __int16*)(v87 + 16 * v88 + 2 * v133);
        v95 = v90 < (signed __int32)*(_DWORD*)(v85 + 16 * v88);
        v90 = *(_DWORD*)(v85 + 16 * v88);
      } while (v95);
      v89 = v85 + 16 * v88;
    }
  }
  v134 = *(_QWORD*)(v89 + 8);
  if (*(_WORD*)v134 == 11 &&
      ((v135 = *(_QWORD*)(v134 + 2), v136 = *(_QWORD*)(v134 + 5),
        v135 == 0x72545F435F636F4CLL)
           ? (v137 = v136 == 0x736E6172545F435FLL)
           : (v137 = false),
       v137)) {
    v128 = (unsigned __int64)(v89 - v84 - 24) >> 4;
  }
  else {
    LODWORD(v128) = -1;
  }
LABEL_174:
  if (((unsigned int)v128 & (unsigned int)v127) != 0xFFFFFFFF) {
    v138 = *(_QWORD*)(a1 + 8);
    v139 = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea08,
                                memory_order_acquire);
    v140 = GameData_212ea00;
    if ((v139 & 1) == 0) {
      v146 = v138;
      v147 = __cxa_guard_acquire((__int64)GameData_212ea08);
      v138 = v146;
      if (v147 != 0) {
        *v140 = wld_Crc32(0, "LocatorModule", 0xDu);
        __cxa_guard_release((__int64)GameData_212ea08);
        v138 = v146;
      }
    }
    v141 = *(_QWORD*)(v138 + 512);
    v142 = v141;
    do {
      if (v142 == *(_QWORD*)(v138 + 504)) {
        goto LABEL_181;
      }
      v143 = *(_DWORD*)(v142 - 16);
      v142 -= 16;
      v141 -= 16;
    } while (v143 != *v140);
    if (*(_QWORD*)(v138 + 512) == v141 ||
        (v144 = *(_QWORD**)(v141 + 8)) == nullptr) {
    LABEL_181:
      v144 = (_QWORD*)GameHr_bda220(v138, &v151);
    }
    v145 = v144;
    *(_QWORD*)(a1 + 248) = v144;
    if ((_DWORD)v127 != -1) {
      *(_QWORD*)(a1 + 256) = LocatorModule_a7c000(v144, v127);
      v145 = *(_QWORD**)(a1 + 248);
    }
    if ((_DWORD)v128 != -1) {
      *(_QWORD*)(a1 + 264) = LocatorModule_a7c000(v145, v128);
      v145 = *(_QWORD**)(a1 + 248);
    }
    *(_QWORD*)(a1 + 272) = LocatorModule_a7bee0((__int64)v145, "Jnt_C_Head");
  }
LABEL_187:
  *(_BYTE*)(a1 + 117) = 1;
}

__int64 GameHr_cc5980(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  char* v7;
  char* v8;
  unsigned __int64 v9;
  unsigned int i;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  long double v16;
  long double v17;
  long double v18;
  long double v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  char* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  long double v29;
  __int64 v30;
  __int64 result;
  long double v32;
  char* v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  char* v39;

  v2 = *GameData_212c370;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(void*))(*v5 + v6))(v5);
LABEL_9:
  v7 = nullptr;
  v8 = nullptr;
  if ((unsigned int)GameRoutine_1976c0(a1) != 0) {
    v9 = 0;
    for (i = 0; i < (unsigned int)GameRoutine_1976c0(a1); ++i) {
      v13 = GameRoutine_1971f0(a1, i);
      if ((*(_BYTE*)v13 & 1) != 0) {
        v14 = *(_QWORD*)(v13 + 16);
      }
      else {
        v14 = v13 + 1;
      }
      v15 = GameRoutine_1a09c70(v14);
      if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
        GameRoutine_60a1d0(v15);
      }
      v20 = v15;
      if (v15 >= 0x17) {
        if ((v15 | 7) == 0x17) {
          v22 = 26;
        }
        else {
          v22 = (v15 | 7) + 1;
        }
        v21 = (char*)GameRoutine_651b90(GameData_2265ee0, v22, 16, 0);
        v38 = v20;
        v39 = v21;
        v37 = v22 | 1;
      }
      else {
        v21 = (char*)&v37 + 1;
        LOBYTE(v37) = 2 * v15;
        if (v15 == 0) {
          goto LABEL_25;
        }
      }
      v15 = GameRoutine_1a0b940(v21, v14, v20);
    LABEL_25:
      v21[v20] = 0;
      if ((unsigned __int64)v8 < v9) {
        v11 = v37;
        v12 = v39;
        *((_QWORD*)v8 + 1) = v38;
        *((_QWORD*)v8 + 2) = v12;
        *(_QWORD*)v8 = v11;
        v8 += 24;
      }
      else {
        v23 = (char*)(v8 - v7);
        v24 = 0xAAAAAAAAAAAAAAABLL * ((v8 - v7) >> 3) + 1;
        if (v24 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_64aa00(v16, v17, v18, v19);
        }
        if (0x5555555555555556LL * ((__int64)(v9 - (_QWORD)v7) >> 3) > v24) {
          v24 = 0x5555555555555556LL * ((__int64)(v9 - (_QWORD)v7) >> 3);
        }
        if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v9 - (_QWORD)v7) >> 3) >=
            0x555555555555555LL) {
          v25 = 0xAAAAAAAAAAAAAAALL;
        }
        else {
          v25 = v24;
        }
        if (v25 != 0) {
          if (v25 > 0xAAAAAAAAAAAAAAALL) {
            GameRoutine_60a210(v15);
          }
          v26 = GameRoutine_651b90(GameData_2265ee0, 24 * v25, 16, 0);
        }
        else {
          v26 = 0;
        }
        v27 = (__int64*)&v23[v26];
        v9 = v26 + 24 * v25;
        v28 = v38;
        v8 = &v23[v26 + 24];
        *v27 = v37;
        v27[1] = v28;
        v27[2] = (__int64)v39;
        GameRoutine_1a0b950(v26, v7, v23);
        if (v7 != nullptr) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v30 = 56;
          }
          GameRoutine_1a0a4e0_alt1(*(_QWORD*)GameData_212bf68 + v30,
                                   (_QWORD)v7);
        }
        v7 = (char*)v26;
      }
    }
  }
  result = GameRoutine_6b7aa0_alt1(
      *(_QWORD*)GameData_212c6a0[0] + 232LL, (_QWORD)v7, (_QWORD)v8,
      0xAAAAAAAAAAAAAAABLL * ((__int64)(v8 - v7) >> 3));
  if (v7 != nullptr) {
    if (v7 != v8) {
      v33 = v8;
      do {
        v34 = *(v33 - 24);
        v33 -= 24;
        if ((v34 & 1) != 0 && *((_QWORD*)v8 - 1) != 0) {
          if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
            v35 = 128;
          }
          else {
            v35 = 56;
          }
          GameRoutine_1a0a4e0_alt1(GameData_2265ee0 + v35,
                                   *((_QWORD*)v8 - 1));
        }
        v8 = v33;
      } while (v33 != v7);
    }
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v36 = 56;
    }
    return GameRoutine_1a0a4e0_alt1(*(_QWORD*)GameData_212bf68 + v36,
                                    (_QWORD)v7);
  }
  return result;
}

#pragma GCC visibility pop
