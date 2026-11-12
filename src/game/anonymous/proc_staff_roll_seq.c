#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameManager_a360a0(_QWORD, _QWORD);
__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_oe_SetUserInactivityDetectionTimeExtendedUnsafe(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_anonymous_ProcStaffRollSeq_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_sound_g_game_sound_ptr[5];
__int64 ProcStaffRollSeq_Destructor_alt1(__int64 a1) __asm__(
    "ProcStaffRollSeq_Destructor");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern __int64 (*GameData_2120e78[])();
extern __int64 (*game_anonymous_ProcStaffRollSeq_DrawObj_vtable[])();
extern __int64 (*nn_ui2d_PlacementTextureInfo_vtable[])();
extern __int64 GameData_21c9d70;
unsigned __int64 ProcStaffRollSeq_19c0a60(__int64 a1, __int64 a2, int a3,
                                          unsigned int a4);
__int64 ProcStaffRollSeq_19c0d70(__int64 result);
_QWORD* ProcStaffRollSeq_19c0de0(_QWORD* a1, _QWORD* a2, unsigned __int64 a3);
__int64 ProcStaffRollSeq_19c2710_alt1(__int64 result) __asm__(
    "ProcStaffRollSeq_19c2710");
__int64 GameRoutine_6380e0(_QWORD, _QWORD);
__int64 GameRoutine_64be60();
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1_locale_Destroy_locale(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void ProcStaffRollSeq_19c1860(PSEUDO_X8 x8_,
                                                         __int64 a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
char* GameRoutine_60a020(char*, const char*);
extern __int64 (*GameData_2121098[])();
extern __int64 (*game_anonymous_ProcStaffRollSeq_MiddleDrawObj_vtable[])();
extern __int64 (*game_anonymous_ProcStaffRollSeq_StaffDrawObj_vtable[])();
extern char GameData_1a9f09e;
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 ProcStaffRollSeq_19c14a0(__int64* a1, __int64 a2, const char* a3,
                                 float a4);
__int64 ProcStaffRollSeq_19c16a0(__int64 a1, __int64 a2, const char* a3,
                                 const char* a4, const char* a5, float a6);
__int64* GameRoutine_6380e0_alt1(__int64,
                                 __int64**) __asm__("GameRoutine_6380e0");
__int64 GameHr_a360a0(__int64 result, __int64);
__int64 GameRoutine_1553220_alt1(__int64 result) __asm__("GameRoutine_1553220");
__int64 GameRoutine_634d80_alt1(__int64, __int64) __asm__("GameRoutine_634d80");
__int64 LayoutAccessor_155e140(__int64*);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
void GameRoutine_1563f90_alt1(__int64, __int64) __asm__("GameRoutine_1563f90");
void GameRoutine_1564060_alt1(__int64*) __asm__("GameRoutine_1564060");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void std___1_locale_Destroy_locale_alt1(__int64) __asm__(
    "std___1_locale_Destroy_locale");
void ProcStaffRollSeq_Destructor(__int64 a1);
void ProcStaffRollSeq_19c2710(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_19c29e0(const char*);
__int64 GameRoutine_5fc1f0(__int64);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 Pane_58f8a0(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_AcquireReadLock(__int64);
__int64 nn_os_ReleaseReadLock(__int64);
__int64 snd_BGM_getFirstName(__int64);
__int64 snd_BGM_isFirstActive(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
double ui_LayoutAccessor_GetPaneTranslate(__int64*, const char*);
extern __int64 (*GameData_2120ec8[])();
extern __int64 (*GameData_2120fe0[])();
extern __int64 (*GameData_2121150[])();
extern __int64 (*game_anonymous_ProcStaffRollSeq_ActorDrawObj_vtable[])();
extern __int64 (*game_anonymous_ProcStaffRollSeq_BigDrawObj_vtable[])();
extern __int64* GameData_212ce10[5];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
float ui_LayoutAccessor_SetPaneTranslate(__int64*, const char*, __int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_19bf2f0(__int64*);
void __attribute__((noreturn)) GameRoutine_19c29b0();
void __attribute__((noreturn)) GameRoutine_60a210();
void snd_Fade_Fade_10c910(__int64, int);
void ProcStaffRollSeq_Unknown2(__int64 a1);
__int64 ProcStaffRollSeq_StaffDrawObj_Unknown6(__int64 a1);
__int64 ProcStaffRollSeq_BigDrawObj_Unknown6(__int64 a1);
__int64 ProcStaffRollSeq_MiddleDrawObj_Unknown6(__int64 a1);
__int64 ProcStaffRollSeq_ActorDrawObj_Unknown6(__int64 a1);
_QWORD* LayoutAccessor_1560520(__int64*, const char*, const char*, const char*);
__int64 GameRoutine_155f760(__int64, __int64, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
float ui_LayoutAccessor_GetPaneSize(__int64*, const char*);
__int64 ProcStaffRollSeq_19c1aa0(__int64 a1);

void ProcStaffRollSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;

  *(_QWORD*)a1 = game_anonymous_ProcStaffRollSeq_vtable;
  if (*(_BYTE*)(a1 + 396) == 1) {
    GameRoutine_1553220_alt1(*(unsigned int*)(a1 + 392));
    if (*(_BYTE*)(a1 + 396) == 1) {
      *(_BYTE*)(a1 + 396) = 0;
    }
  }
  if (*(_QWORD*)(a1 + 264) != 0) {
    LayoutAccessor_155e140((__int64*)(a1 + 280));
    v2 = *(_QWORD*)(a1 + 264);
    if (v2 != 0) {
      *(_BYTE*)(v2 + 2376) = 1;
    }
    v3 = *(_QWORD*)(a1 + 272);
    *(_QWORD*)(a1 + 264) = 0;
    *(_QWORD*)(a1 + 272) = 0;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1(v3);
    }
  }
  v4 = *(_QWORD**)(a1 + 216);
  for (i = (_QWORD*)(a1 + 208); v4 != i; v4 = (_QWORD*)v4[1]) {
    v7 = v4[2];
    v6 = v4[3];
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    v8 = *(_QWORD*)(v7 + 16);
    if (v8 != 0) {
      GameRoutine_634d80_alt1(*(_QWORD*)(v8 + 8), v8);
      *(_QWORD*)(v7 + 16) = 0;
    }
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
  GameHr_a360a0(*game_sound_g_game_sound_ptr[0], (__int64)"BGM_SYS_ED3");
  nn_oe_SetUserInactivityDetectionTimeExtendedUnsafe(0);
  LayoutAccessor_155e140((__int64*)(a1 + 280));
  v9 = *(_QWORD*)(a1 + 376);
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
  GameRoutine_1564060_alt1((__int64*)(a1 + 328));
  GameRoutine_1563f90_alt1(a1 + 304, *(_QWORD*)(a1 + 312));
  v10 = *(_QWORD*)(a1 + 288);
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v10);
  }
  v11 = *(_QWORD*)(a1 + 272);
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak_alt1(v11);
  }
  if (*(_QWORD*)(a1 + 224) != 0) {
    v12 = *(_QWORD**)(a1 + 216);
    v13 = *(_QWORD**)(*(_QWORD*)(a1 + 208) + 8LL);
    *(_QWORD*)(*v12 + 8LL) = v13;
    *v13 = *v12;
    *(_QWORD*)(a1 + 224) = 0;
    if (v12 != i) {
      v14 = fw_memory_g_heap_manager_ptr;
      do {
        v16 = (_QWORD*)v12[1];
        v17 = v12[3];
        if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          v18 = v12;
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak_alt1(v17);
          v12 = v18;
        }
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v15, (__int64)v12);
        v12 = v16;
      } while (v16 != i);
    }
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v19 = *(_QWORD**)(a1 + 160);
    v20 = *(_QWORD**)(*(_QWORD*)(a1 + 152) + 8LL);
    *(_QWORD*)(*v19 + 8LL) = v20;
    *v20 = *v19;
    *(_QWORD*)(a1 + 168) = 0;
    if (v19 != (_QWORD*)(a1 + 152)) {
      v21 = fw_memory_g_heap_manager_ptr;
      do {
        v23 = (_QWORD*)v19[1];
        v24 = v19[3];
        if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          v25 = v19;
          (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
          std___1___shared_weak_count___release_weak_alt1(v24);
          v19 = v25;
        }
        if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v21 + v22, (__int64)v19);
        v19 = v23;
      } while (v23 != (_QWORD*)(a1 + 152));
    }
  }
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

void ProcStaffRollSeq_Unknown2(__int64 a1)
{
  int v2;
  int v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  int v9;
  __int64* v10;
  int v11;
  __int64* v12;
  __int64 v13;
  int v14;
  float v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  const char* v38;
  const char* v39;
  float v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  const char* v45;
  const char* v46;
  atomic_ullong* v47;
  _QWORD* v48;
  __int64 v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  float v56;
  _QWORD* v57;
  _QWORD* v58;
  _QWORD* v59;
  __int64 v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  const char* v66;
  int v67;
  float v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  const char* v73;
  _QWORD* v74;
  __int64 v75;
  __int64 v76;
  const char* v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  float v84;
  _QWORD* v85;
  _QWORD* v86;
  _DWORD* v87;
  atomic_ullong* v88;
  _QWORD* v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  __int64 v96;
  __int64 v97;
  _QWORD* v98;
  __int64 v99;
  const char* v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  float v107;
  _QWORD* v108;
  _QWORD* v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  float v115;
  bool v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  int v121;
  int v122;
  __int64 v123;
  __int64* v124;
  const char* v125;
  const char* v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  float v130;
  const char* v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64* v135;
  __int64 v136;
  __int64* v137;
  unsigned __int64 v138;
  __int64 v139;
  __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  unsigned __int64 v143;
  unsigned __int64 v144;
  __int64 v145;
  _QWORD* v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64* v150;
  char v151;
  __int64* v152;
  __int64* v153;
  __int64* v154;
  __int64 v155;
  __int64 v156;
  __int64* v157;
  __int64* v158;
  __int64 v159;
  __int64* v160;
  __int64 v161;
  __int64* v162;
  __int64 v163;
  __int64* v164;
  __int64* v165;
  __int64 v166;
  __int64* v167;
  __int64 v168;
  __int64* v169;
  __int64 v171;
  unsigned __int8* v172;
  unsigned int v173;
  int v174;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  const char* v179;
  const char* v180;
  const char* v181;
  const char* v182;
  __int64 v183;
  __int64 v184;
  struct {
    __int64* v185;
    __int64* v186;
    __int64 v187;
    char gap56_[192];
    int v188;
    int v189;
  } v185_;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      v177 = *(_QWORD*)(a1 + 8);
      if (v177 == 0) {
        return;
      }
      while (1) {
        if (*(_BYTE*)v177 == 2) {
          if (*(_DWORD*)(v177 + 32) == 1) {
            *(_QWORD*)(a1 + 16) = v177;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            return;
          }
        }
        else if (*(_BYTE*)v177 == 0) {
          return;
        }
        v177 += 64;
      }
    }
  }
  if ((*(_BYTE*)(a1 + 196) & 1) == 0) {
    v4 = game_sound_g_game_sound_ptr[0];
    v5 = *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8);
    if (v5 != 0 && (snd_BGM_isFirstActive(
                        *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8)) &
                    1) != 0) {
      v6 = snd_BGM_getFirstName(v5);
    }
    else {
      v6 = 0;
    }
    v7 = &GameData_1a9f09e;
    if (v6 != 0) {
      v7 = (char*)v6;
    }
    if (*v7 == 0) {
      v8 = *(_QWORD*)(*v4 + 8);
      snd_Fade_Fade_10c910((__int64)&v185_.v185, 0);
      (*(void (**)(__int64, const char*, __int64**, _QWORD, float, float))(
          *(_QWORD*)v8 + 32LL))(v8, "BGM_SYS_ED3", &v185_.v185, 0,
                                0x1.f400000000000p+10f, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(&v185_.v185);
      *(_BYTE*)(a1 + 196) = 1;
    }
  }
  if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 9) != 0) {
    v9 = *(_DWORD*)(a1 + 188);
  }
  else {
    v9 = 1;
  }
  v185_.v188 = v9;
  if (v9 < 1) {
    return;
  }
  v10 = (__int64*)(a1 + 152);
  v11 = 0;
  v183 = a1 + 280;
  v184 = a1 + 208;
  v12 = (__int64*)fw_memory_g_heap_manager_ptr;
  while (2) {
    v185_.v189 = v11;
    v15 = *(float*)(a1 + 180);
    v16 = *(_QWORD*)(a1 + 200);
    v17 = 0x1.e000000000000p+5f /
          (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v17 <= 0x0.0p+0f) {
      v18 = 0x1.119ce00000000p-6f;
    }
    else {
      v18 = v17 * 0x1.119ce00000000p-6f;
    }
    v19 = v15 + (float)(v18 * 0x1.f400000000000p+9f);
    *(float*)(a1 + 180) = v19;
    v20 = (float)*(unsigned int*)(v16 + 32);
    if (v15 >= v20 || v19 < v20) {
      goto LABEL_135;
    }
    v21 = *(unsigned __int8*)(v16 + 36);
    if (v21 > 3) {
      if (v21 != 4) {
        if (v21 == 5) {
          v90 = GameHr_19c29e0(*(const char**)(v16 + 40));
          v91 = GameHr_19c29e0(*(const char**)(v16 + 48));
          if (v90 <= v91) {
            v92 = v91;
          }
          else {
            v92 = v90;
          }
          v93 = GameHr_19c29e0(*(const char**)(v16 + 56));
          if (v92 <= v93) {
            v92 = v93;
          }
          v94 = GameHr_19c29e0(*(const char**)(v16 + 64));
          if (v92 <= v94) {
            v95 = v94;
          }
          else {
            v95 = v92;
          }
          ProcStaffRollSeq_19c14a0(
              (__int64*)&v185_.v185, v183, *(const char**)(v16 + 40),
              (float)(PSEUDO_UNFUSED((float)(v95 & (unsigned int)~(v95 >> 31)) *
                                     -0x1.1000000000000p+5f)) +
                  -0x1.0e00000000000p+9f);
          v96 = (__int64)v185_.v185;
          v97 = (__int64)v185_.v186;
          if (v185_.v186 != nullptr) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v185_.v186 + 1),
                                      1u, memory_order_relaxed);
          }
          v98 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v12, 32, 16, 0);
          v99 = *(_QWORD*)(a1 + 152);
          v98[2] = v96;
          v98[3] = v97;
          *v98 = v99;
          v98[1] = v10;
          *(_QWORD*)(v99 + 8) = v98;
          *(_QWORD*)(a1 + 152) = v98;
          *(_DWORD*)(a1 + 176) = 1;
          ++*(_QWORD*)(a1 + 168);
          if (v97 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v97 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v97 + 16LL))(v97);
            std___1___shared_weak_count___release_weak_alt1(v97);
          }
          v100 = *(const char**)(v16 + 48);
          v180 = *(const char**)(v16 + 64);
          v182 = *(const char**)(v16 + 56);
          v101 = GameHr_19c29e0(*(const char**)(v16 + 40));
          v102 = GameHr_19c29e0(*(const char**)(v16 + 48));
          if (v101 <= v102) {
            v103 = v102;
          }
          else {
            v103 = v101;
          }
          v104 = GameHr_19c29e0(*(const char**)(v16 + 56));
          if (v103 <= v104) {
            v103 = v104;
          }
          v105 = GameHr_19c29e0(*(const char**)(v16 + 64));
          if (v103 <= v105) {
            v106 = v105;
          }
          else {
            v106 = v103;
          }
          v107 = (float)((float)(PSEUDO_UNFUSED(
                             (float)(v106 & (unsigned int)~(v106 >> 31)) *
                             -0x1.1000000000000p+5f)) +
                         -0x1.0e00000000000p+9f) -
                 *(float*)(a1 + 192);
          v108 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v12, 176, 16, 0);
          v109 = v108 + 3;
          v87 = v108;
          v108[2] = 0;
          *v108 = GameData_2120ec8;
          v108[1] = 0;
          v88 = (atomic_ullong*)(v108 + 1);
          ProcStaffRollSeq_19c16a0((__int64)(v108 + 3), v183, v100, v182, v180,
                                   v107);
          atomic_fetch_add_explicit(v88, 1u, memory_order_relaxed);
          v89 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v12, 32, 16, 0);
          v89[2] = v109;
          goto LABEL_130;
        }
        if (v21 != 6) {
          goto LABEL_133;
        }
        v32 = GameHr_19c29e0(*(const char**)(v16 + 40));
        v33 = GameHr_19c29e0(*(const char**)(v16 + 48));
        if (v32 <= v33) {
          v34 = v33;
        }
        else {
          v34 = v32;
        }
        v35 = GameHr_19c29e0(*(const char**)(v16 + 56));
        if (v34 <= v35) {
          v34 = v35;
        }
        v36 = GameHr_19c29e0(*(const char**)(v16 + 64));
        if (v34 <= v36) {
          v37 = v36;
        }
        else {
          v37 = v34;
        }
        v39 = *(const char**)(v16 + 40);
        v38 = *(const char**)(v16 + 48);
        v40 = (float)(PSEUDO_UNFUSED((float)(v37 & (unsigned int)~(v37 >> 31)) *
                                     -0x1.1000000000000p+5f)) +
              -0x1.0e00000000000p+9f;
        v29 = fw_memory_HeapManager_Allocate_alt1(*v12, 168, 16, 0);
        *(_QWORD*)(v29 + 8) = 0;
        *(_QWORD*)(v29 + 16) = 0;
        *(_BYTE*)(v29 + 32) = 0;
        *(_QWORD*)(v29 + 48) = 0;
        *(_QWORD*)(v29 + 56) = 0;
        *(_QWORD*)(v29 + 64) = 0;
        *(_QWORD*)(v29 + 72) = 0;
        *(_QWORD*)(v29 + 80) = 0;
        *(_QWORD*)(v29 + 88) = 0;
        *(_QWORD*)(v29 + 96) = 0;
        *(_QWORD*)(v29 + 104) = 0;
        *(_QWORD*)v29 = GameData_2121150;
        *(_DWORD*)(v29 + 112) = 0;
        *(_QWORD*)(v29 + 40) = 0;
        *(float*)(v29 + 116) = v40;
        *(_QWORD*)(v29 + 120) = 0;
        *(_QWORD*)(v29 + 128) = 0;
        *(_QWORD*)(v29 + 144) = 0;
        *(_QWORD*)(v29 + 152) = 0;
        *(_QWORD*)(v29 + 160) = 0;
        *(_QWORD*)(v29 + 24) =
            game_anonymous_ProcStaffRollSeq_ActorDrawObj_vtable;
        v41 = v29 + 24;
        *(_QWORD*)(v29 + 136) = v183;
        ProcStaffRollSeq_19c1860((void*)((__int64*)&v185_.v185), v29 + 24);
        if ((*(_BYTE*)(v29 + 144) & 1) != 0) {
          v42 = *(_QWORD*)(v29 + 160);
          if (v42 != 0) {
            v43 = 128;
            if (*(_QWORD*)(*v12 + 200) == 0) {
              v43 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v12 + v43, v42);
          }
        }
        v44 = v185_.v186;
        *(_QWORD*)(v29 + 144) = v185_.v185;
        *(_QWORD*)(v29 + 152) = v44;
        *(_QWORD*)(v29 + 160) = v185_.v187;
        if (v39 != nullptr) {
          v45 = v39;
        }
        else {
          v45 = &GameData_1a9f09e;
        }
        GameRoutine_60a020_alt1(v29 + 40, v45);
        if (v38 != nullptr) {
          v46 = v38;
        }
        else {
          v46 = &GameData_1a9f09e;
        }
        GameRoutine_60a020_alt1(v29 + 64, v46);
        (*(void (**)(__int64))(*(_QWORD*)(v29 + 24) + 40LL))(v41);
        v47 = (atomic_ullong*)(v29 + 8);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                  memory_order_relaxed);
        v48 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v12, 32, 16, 0);
        v49 = *(_QWORD*)(a1 + 152);
        v48[2] = v41;
        v48[3] = v29;
        *v48 = v49;
        v48[1] = v10;
        *(_QWORD*)(v49 + 8) = v48;
        *(_QWORD*)(a1 + 152) = v48;
        ++*(_QWORD*)(a1 + 168);
        *(_DWORD*)(a1 + 176) = 2;
      LABEL_97:
        if (atomic_fetch_add(v47, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_133;
        }
        goto LABEL_98;
      }
      v61 = GameHr_19c29e0(*(const char**)(v16 + 40));
      v62 = GameHr_19c29e0(*(const char**)(v16 + 48));
      if (v61 <= v62) {
        v63 = v62;
      }
      else {
        v63 = v61;
      }
      v64 = GameHr_19c29e0(*(const char**)(v16 + 56));
      if (v63 <= v64) {
        v63 = v64;
      }
      v65 = GameHr_19c29e0(*(const char**)(v16 + 64));
      v66 = *(const char**)(v16 + 40);
      if (v63 <= v65) {
        v67 = v65;
      }
      else {
        v67 = v63;
      }
      v68 = (float)(PSEUDO_UNFUSED((float)(v67 & (unsigned int)~(v67 >> 31)) *
                                   -0x1.1000000000000p+5f)) +
            -0x1.0e00000000000p+9f;
      v29 = fw_memory_HeapManager_Allocate_alt1(*v12, 168, 16, 0);
      *(_QWORD*)(v29 + 8) = 0;
      *(_QWORD*)(v29 + 16) = 0;
      *(_BYTE*)(v29 + 32) = 0;
      *(_QWORD*)(v29 + 48) = 0;
      *(_QWORD*)(v29 + 56) = 0;
      *(_QWORD*)(v29 + 64) = 0;
      *(_QWORD*)(v29 + 72) = 0;
      *(_QWORD*)(v29 + 80) = 0;
      *(_QWORD*)(v29 + 88) = 0;
      *(_QWORD*)(v29 + 96) = 0;
      *(_QWORD*)(v29 + 104) = 0;
      *(_QWORD*)v29 = GameData_2120fe0;
      *(_DWORD*)(v29 + 112) = 0;
      *(_QWORD*)(v29 + 40) = 0;
      *(float*)(v29 + 116) = v68;
      *(_QWORD*)(v29 + 120) = 0;
      *(_QWORD*)(v29 + 128) = 0;
      *(_QWORD*)(v29 + 144) = 0;
      *(_QWORD*)(v29 + 152) = 0;
      *(_QWORD*)(v29 + 160) = 0;
      *(_QWORD*)(v29 + 24) = game_anonymous_ProcStaffRollSeq_BigDrawObj_vtable;
      v69 = v29 + 24;
      *(_QWORD*)(v29 + 136) = v183;
      ProcStaffRollSeq_19c1860((void*)((__int64*)&v185_.v185), v29 + 24);
      if ((*(_BYTE*)(v29 + 144) & 1) != 0) {
        v70 = *(_QWORD*)(v29 + 160);
        if (v70 != 0) {
          v71 = 56;
          if (*(_QWORD*)(*v12 + 200) != 0) {
            v71 = 128;
          }
          nn_mem_StandardAllocator_Free_alt1(*v12 + v71, v70);
        }
      }
      v72 = v185_.v186;
      *(_QWORD*)(v29 + 144) = v185_.v185;
      *(_QWORD*)(v29 + 152) = v72;
      *(_QWORD*)(v29 + 160) = v185_.v187;
      if (v66 != nullptr) {
        v73 = v66;
      }
      else {
        v73 = &GameData_1a9f09e;
      }
      GameRoutine_60a020_alt1(v29 + 40, v73);
      (*(void (**)(__int64))(*(_QWORD*)(v29 + 24) + 40LL))(v69);
      v47 = (atomic_ullong*)(v29 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                memory_order_relaxed);
      v74 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v12, 32, 16, 0);
      v75 = *(_QWORD*)(a1 + 152);
      v74[2] = v69;
      v74[3] = v29;
      *v74 = v75;
      v74[1] = v10;
      *(_QWORD*)(v75 + 8) = v74;
      *(_QWORD*)(a1 + 152) = v74;
      *(_DWORD*)(a1 + 176) = 1;
    LABEL_96:
      ++*(_QWORD*)(a1 + 168);
      goto LABEL_97;
    }
    if (v21 == 1) {
      v50 = GameHr_19c29e0(*(const char**)(v16 + 40));
      v51 = GameHr_19c29e0(*(const char**)(v16 + 48));
      if (v50 <= v51) {
        v52 = v51;
      }
      else {
        v52 = v50;
      }
      v53 = GameHr_19c29e0(*(const char**)(v16 + 56));
      if (v52 <= v53) {
        v52 = v53;
      }
      v54 = GameHr_19c29e0(*(const char**)(v16 + 64));
      if (v52 <= v54) {
        v55 = v54;
      }
      else {
        v55 = v52;
      }
      v56 = (float)(PSEUDO_UNFUSED((float)(v55 & (unsigned int)~(v55 >> 31)) *
                                   -0x1.1000000000000p+5f)) +
            -0x1.0e00000000000p+9f;
      v57 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v12, 176, 16, 0);
      v58 = v57 + 3;
      v29 = (__int64)v57;
      v57[2] = 0;
      *v57 = GameData_2120ec8;
      v57[1] = 0;
      v47 = (atomic_ullong*)(v57 + 1);
      ProcStaffRollSeq_19c16a0((__int64)(v57 + 3), v183, &GameData_1a9f09e,
                               &GameData_1a9f09e, &GameData_1a9f09e, v56);
      atomic_fetch_add_explicit(v47, 1u, memory_order_relaxed);
      v59 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v12, 32, 16, 0);
      v60 = *(_QWORD*)(a1 + 152);
      v59[2] = v58;
      v59[3] = v29;
      *v59 = v60;
      v59[1] = v10;
      *(_QWORD*)(v60 + 8) = v59;
      *(_QWORD*)(a1 + 152) = v59;
      *(_DWORD*)(a1 + 176) = 0;
      goto LABEL_96;
    }
    if (v21 != 2) {
      if (v21 != 3) {
        goto LABEL_133;
      }
      v22 = GameHr_19c29e0(*(const char**)(v16 + 40));
      v23 = GameHr_19c29e0(*(const char**)(v16 + 48));
      if (v22 <= v23) {
        v24 = v23;
      }
      else {
        v24 = v22;
      }
      v25 = GameHr_19c29e0(*(const char**)(v16 + 56));
      if (v24 <= v25) {
        v24 = v25;
      }
      v26 = GameHr_19c29e0(*(const char**)(v16 + 64));
      if (v24 <= v26) {
        v27 = v26;
      }
      else {
        v27 = v24;
      }
      ProcStaffRollSeq_19c14a0(
          (__int64*)&v185_.v185, v183, *(const char**)(v16 + 40),
          (float)(PSEUDO_UNFUSED((float)(v27 & (unsigned int)~(v27 >> 31)) *
                                 -0x1.1000000000000p+5f)) +
              -0x1.0e00000000000p+9f);
      v28 = (__int64)v185_.v185;
      v29 = (__int64)v185_.v186;
      if (v185_.v186 != nullptr) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v185_.v186 + 1), 1u,
                                  memory_order_relaxed);
      }
      v30 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v12, 32, 16, 0);
      v31 = *(_QWORD*)(a1 + 152);
      v30[2] = v28;
      v30[3] = v29;
      *v30 = v31;
      v30[1] = v10;
      *(_QWORD*)(v31 + 8) = v30;
      *(_QWORD*)(a1 + 152) = v30;
      *(_DWORD*)(a1 + 176) = 1;
      ++*(_QWORD*)(a1 + 168);
      if (v29 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_133;
      }
    LABEL_98:
      (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
      v76 = v29;
      goto LABEL_132;
    }
    v77 = *(const char**)(v16 + 48);
    v179 = *(const char**)(v16 + 64);
    v181 = *(const char**)(v16 + 56);
    v78 = GameHr_19c29e0(*(const char**)(v16 + 40));
    v79 = GameHr_19c29e0(*(const char**)(v16 + 48));
    if (v78 <= v79) {
      v80 = v79;
    }
    else {
      v80 = v78;
    }
    v81 = GameHr_19c29e0(*(const char**)(v16 + 56));
    if (v80 <= v81) {
      v80 = v81;
    }
    v82 = GameHr_19c29e0(*(const char**)(v16 + 64));
    if (v80 <= v82) {
      v83 = v82;
    }
    else {
      v83 = v80;
    }
    v84 = (float)((float)(PSEUDO_UNFUSED(
                      (float)(v83 & (unsigned int)~(v83 >> 31)) *
                      -0x1.1000000000000p+5f)) +
                  -0x1.0e00000000000p+9f) -
          *(float*)(a1 + 192);
    v85 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v12, 176, 16, 0);
    v86 = v85 + 3;
    v87 = v85;
    v85[2] = 0;
    *v85 = GameData_2120ec8;
    v85[1] = 0;
    v88 = (atomic_ullong*)(v85 + 1);
    ProcStaffRollSeq_19c16a0((__int64)(v85 + 3), v183, v77, v181, v179, v84);
    atomic_fetch_add_explicit(v88, 1u, memory_order_relaxed);
    v89 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v12, 32, 16, 0);
    v89[2] = v86;
  LABEL_130:
    v110 = *(_QWORD*)(a1 + 152);
    v89[3] = v87;
    *v89 = v110;
    v89[1] = v10;
    *(_QWORD*)(v110 + 8) = v89;
    *(_QWORD*)(a1 + 152) = v89;
    ++*(_QWORD*)(a1 + 168);
    *(_DWORD*)(a1 + 176) = v87[42];
    if (atomic_fetch_add(v88, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(_DWORD*))(*(_QWORD*)v87 + 16LL))(v87);
      v76 = (__int64)v87;
    LABEL_132:
      std___1___shared_weak_count___release_weak_alt1(v76);
    }
  LABEL_133:
    v111 = *(unsigned __int16*)(*(_QWORD*)(a1 + 200) + 16LL);
    v112 = *(_QWORD*)(*GameData_212ce10[0] + 64);
    if ((int)(((unsigned __int64)(*(_QWORD*)(*GameData_212ce10[0] + 72) -
                                  v112) >>
               3) -
              1) > (int)v111) {
      *(_QWORD*)(a1 + 200) = *(_QWORD*)(v112 + 8 * v111 + 8);
    }
  LABEL_135:
    v113 = *(_QWORD*)(a1 + 248);
    if (v113 != v184) {
      v114 = *(_QWORD*)(v113 + 16);
      v115 = *(float*)(v114 + 48);
      v116 = v15 >= v115 || *(float*)(a1 + 180) < v115;
      if (!v116) {
        v117 = *(_QWORD*)(a1 + 232);
        if (v117 != v184) {
          v118 = *(_QWORD*)(v117 + 16);
          v119 = *(_QWORD*)(v118 + 16);
          if (v119 != 0) {
            GameRoutine_634d80_alt1(*(_QWORD*)(v119 + 8), v119);
            *(_QWORD*)(v118 + 16) = 0;
          }
        }
        v120 = *(_QWORD*)(v114 + 16);
        if (v120 != 0) {
          v121 = *(_DWORD*)(a1 + 256);
          nn_os_AcquireReadLock(v120 + 696);
          v122 = *(_DWORD*)(v120 + 656);
          nn_os_ReleaseReadLock(v120 + 696);
          if ((v122 & 8) != 0) {
            v123 = *(_QWORD*)(GameRoutine_5fc1f0(
                                  *(_QWORD*)(*(_QWORD*)(v114 + 16) + 592LL)) +
                              40);
            v124 = *(__int64**)(v114 + 8);
            *(_QWORD*)(v114 + 32) = *(_QWORD*)(*(_QWORD*)v123 + 144LL);
            if (v121 == -1) {
              v132 = ui_LayoutAccessor_FindPane_alt1(v124, (__int64)"Img00");
              v133 = __dynamic_cast(v132, GameData_212d670[0],
                                    GameData_212d678[0], 0);
              v129 = *(_QWORD*)(Pane_58f8a0(v133) + 24);
              v130 = 0x1.0000000000000p+0f;
              v131 = "In";
            }
            else {
              if (v121 != 0) {
                v125 = "Img01";
              }
              else {
                v125 = "Img00";
              }
              if (v121 != 0) {
                v126 = "Change00";
              }
              else {
                v126 = "Change01";
              }
              v127 = ui_LayoutAccessor_FindPane_alt1(v124, (__int64)v125);
              v128 = __dynamic_cast(v127, GameData_212d670[0],
                                    GameData_212d678[0], 0);
              v129 = *(_QWORD*)(Pane_58f8a0(v128) + 24);
              v130 = 0x1.0000000000000p+0f;
              v131 = v126;
            }
            *(_QWORD*)(v129 + 8) = v114 + 24;
            GameHr_1562680(*(_QWORD*)(v114 + 8), v131, v130);
          }
        }
        *(_DWORD*)(a1 + 256) = (unsigned int)(*(_DWORD*)(a1 + 256) + 1) < 2;
        v134 = *(_QWORD*)(a1 + 248);
        *(_QWORD*)(a1 + 232) = *(_QWORD*)(a1 + 240);
        *(_QWORD*)(a1 + 240) = v134;
        if (v184 != v134) {
          v134 = *(_QWORD*)(v134 + 8);
        }
        *(_QWORD*)(a1 + 248) = v134;
        if (v184 != v134) {
          GameRoutine_19bf2f0(*(__int64**)(v134 + 16));
        }
      }
    }
    v135 = *(__int64**)(a1 + 160);
    if (v135 == v10) {
      v136 = 0;
      v137 = nullptr;
      v151 = 1;
      goto LABEL_226;
    }
    v136 = 0;
    v137 = nullptr;
    v138 = 0;
    do {
      v139 = v135[2];
      if (*(_BYTE*)(v139 + 8) == 1) {
        if ((unsigned __int64)v137 >= v138) {
          v141 = (unsigned __int64)v137 - v136;
          v142 = ((__int64)v137 - v136) >> 4;
          v143 = v142 + 1;
          if ((unsigned __int64)(v142 + 1) >> 60 != 0) {
            GameRoutine_19c29b0();
          }
          if ((__int64)(v138 - v136) >> 3 > v143) {
            v143 = (__int64)(v138 - v136) >> 3;
          }
          if (v138 - v136 >= 0x7FFFFFFFFFFFFFF0LL) {
            v144 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v144 = v143;
          }
          if (v144 >> 60 != 0) {
            GameRoutine_60a210();
          }
          v145 = fw_memory_HeapManager_Allocate_alt1(*v12, 16 * v144, 16, 0);
          v146 = (_QWORD*)(v145 + v141);
          *v146 = v135[2];
          v147 = v135[3];
          v146[1] = v147;
          if (v147 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v147 + 8), 1u,
                                      memory_order_relaxed);
          }
          v148 = (__int64)&v146[-2 * v142];
          v138 = v145 + 16 * v144;
          v137 = v146 + 2;
          memcpy(v148, v136, v141);
          if (v136 != 0) {
            v149 = 128;
            if (*(_QWORD*)(*v12 + 200) == 0) {
              v149 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v12 + v149, v136);
          }
          v136 = v148;
        }
        else {
          *v137 = v139;
          v140 = v135[3];
          v137[1] = v140;
          if (v140 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v140 + 8), 1u,
                                      memory_order_relaxed);
          }
          v137 += 2;
        }
      }
      v135 = (__int64*)v135[1];
    } while (v135 != v10);
    v135 = *(__int64**)(a1 + 160);
    if ((__int64*)v136 == v137) {
      v151 = 1;
      goto LABEL_226;
    }
    v150 = (__int64*)v136;
    if (v135 == v10) {
      v151 = 0;
      goto LABEL_226;
    }
    while (2) {
      v152 = *(__int64**)(a1 + 160);
      v185_.v185 = (__int64*)&v185_.v185;
      v185_.v186 = (__int64*)&v185_.v185;
      v185_.v187 = 0;
      if (v152 == v10) {
        goto LABEL_184;
      }
      v153 = (__int64*)&v185_.v185;
      if (&v185_.v185 == (__int64**)v10) {
        while (1) {
          v161 = v152[2];
          if (v161 == *v150) {
            v160 = v152;
            do {
              v160 = (__int64*)v160[1];
            } while (v160 != (__int64*)&v185_.v185 && v160[2] == v161);
            if (v152 != v160) {
              v153 = (__int64*)*v160;
              v162 = *(__int64**)(*v160 + 8);
              *(_QWORD*)(*v152 + 8) = v162;
              *v162 = *v152;
              v163 = (__int64)v185_.v185;
              v185_.v185[1] = (__int64)v152;
              *v152 = v163;
              v185_.v185 = v153;
              v153[1] = (__int64)&v185_.v185;
            }
            if (v160 == (__int64*)&v185_.v185) {
              goto LABEL_204;
            }
          }
          else {
            v160 = v152;
          }
          v160 = (__int64*)v160[1];
        LABEL_204:
          v152 = v160;
          if (v160 == (__int64*)&v185_.v185) {
            goto LABEL_213;
          }
        }
      }
      do {
        v155 = v152[2];
        if (v155 != *v150) {
          v154 = v152;
        LABEL_189:
          v154 = (__int64*)v154[1];
          goto LABEL_190;
        }
        v154 = v152;
        do {
          v154 = (__int64*)v154[1];
        } while (v154 != v10 && v154[2] == v155);
        if (v152 != v154) {
          v153 = (__int64*)*v154;
          v156 = 1;
          if (v152 != (__int64*)*v154) {
            v157 = v152;
            do {
              v157 = (__int64*)v157[1];
              ++v156;
            } while (v157 != v153);
          }
          *(_QWORD*)(a1 + 168) -= v156;
          v185_.v187 += v156;
          v158 = (__int64*)v153[1];
          *(_QWORD*)(*v152 + 8) = v158;
          *v158 = *v152;
          v159 = (__int64)v185_.v185;
          v185_.v185[1] = (__int64)v152;
          *v152 = v159;
          v185_.v185 = v153;
          v153[1] = (__int64)&v185_.v185;
        }
        if (v154 != v10) {
          goto LABEL_189;
        }
      LABEL_190:
        v152 = v154;
      } while (v154 != v10);
    LABEL_213:
      if (v185_.v187 != 0) {
        v164 = v185_.v186;
        v165 = (__int64*)v153[1];
        *(_QWORD*)(*v185_.v186 + 8) = v165;
        *v165 = *v164;
        v185_.v187 = 0;
        if (v164 != (__int64*)&v185_.v185) {
          do {
            v167 = (__int64*)v164[1];
            v168 = v164[3];
            if (v168 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v168 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v169 = v164;
              (*(void (**)(__int64))(*(_QWORD*)v168 + 16LL))(v168);
              std___1___shared_weak_count___release_weak_alt1(v168);
              v164 = v169;
            }
            v166 = 56;
            if (*(_QWORD*)(*v12 + 200) != 0) {
              v166 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*v12 + v166, (__int64)v164);
            v164 = v167;
          } while (v167 != (__int64*)&v185_.v185);
        }
      }
    LABEL_184:
      v150 += 2;
      if (v150 != v137) {
        continue;
      }
      break;
    }
    v135 = *(__int64**)(a1 + 160);
    v151 = 0;
  LABEL_226:
    while (v135 != v10) {
      (*(void (**)(__int64, float))(*(_QWORD*)v135[2] + 56LL))(
          v135[2], *(float*)(a1 + 184));
      v135 = (__int64*)v135[1];
    }
    if ((unsigned int)((*(_QWORD*)(*GameData_212ce10[0] + 72) -
                        *(_QWORD*)(*GameData_212ce10[0] + 64)) >>
                       3) -
                1 !=
            *(unsigned __int16*)(*(_QWORD*)(a1 + 200) + 16LL) ||
        *(_QWORD*)(a1 + 168) != 0) {
      v14 = v185_.v189;
      if (v136 != 0) {
        if ((v151 & 1) == 0) {
          do {
            v171 = *(v137 - 1);
            if (v171 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v171 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v171 + 16LL))(v171);
              std___1___shared_weak_count___release_weak_alt1(v171);
            }
            v137 -= 2;
          } while (v137 != (__int64*)v136);
        }
        v13 = 56;
        if (*(_QWORD*)(*v12 + 200) != 0) {
          v13 = 128;
        }
        nn_mem_StandardAllocator_Free_alt1(*v12 + v13, v136);
        v14 = v185_.v189;
      }
      v11 = v14 + 1;
      if (v11 == v185_.v188) {
        return;
      }
      continue;
    }
    break;
  }
  v172 = *(unsigned __int8**)(a1 + 16);
  if (v172 != nullptr) {
    v173 = *v172;
    v116 = v173 > 0x10;
    v174 = (1 << v173) & 0x1CE00;
    if (!v116 && v174 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  if (v136 != 0) {
    if ((v151 & 1) == 0) {
      do {
        v178 = *(v137 - 1);
        if (v178 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v178 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v178 + 16LL))(v178);
          std___1___shared_weak_count___release_weak_alt1(v178);
        }
        v137 -= 2;
      } while (v137 != (__int64*)v136);
    }
    v176 = 128;
    if (*(_QWORD*)(*v12 + 200) == 0) {
      v176 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v12 + v176, v136);
  }
}

unsigned __int64 ProcStaffRollSeq_19c0a60(__int64 a1, __int64 a2, int a3,
                                          unsigned int a4)
{
  int v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;

  if (a3 > 1) {
    if (a3 == 2) {
      v5 = 3;
      goto LABEL_11;
    }
  }
  else if (a3 != 0) {
    if (a4 > 4) {
      v5 = 3;
    }
    else {
      v5 = 4;
    }
    goto LABEL_11;
  }
  if (a4 <= 3) {
    v5 = 5;
  }
  else {
    v5 = 3;
  }
LABEL_11:
  result = game_HashString(a2);
  if (result != 0) {
    v7 = *(_QWORD*)(GameData_21c9d70 + 96);
    if (v7 != 0 && *(_QWORD*)(GameData_21c9d70 + 112) != 0) {
      v9 = v7 - 1;
      if ((v7 & (v7 - 1)) != 0) {
        v10 = result;
        if (result >= v7) {
          v10 = result % v7;
        }
      }
      else {
        v10 = v9 & result;
      }
      v11 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d70 + 88) + 8 * v10);
      if (v11 != nullptr) {
        v12 = (_QWORD*)*v11;
        if (v12 != nullptr) {
          if ((v7 & v9) == 0) {
            while (1) {
              v15 = v12[1];
              if (v15 == result) {
                if (v12[2] == result) {
                  goto LABEL_45;
                }
              }
              else if ((v15 & v9) != v10) {
                goto LABEL_35;
              }
              v12 = (_QWORD*)*v12;
              v14 = 0;
              if (v12 == nullptr) {
                goto LABEL_38;
              }
            }
          }
          do {
            v13 = v12[1];
            if (v13 == result) {
              if (v12[2] == result) {
              LABEL_45:
                v14 = v12[3];
                goto LABEL_38;
              }
            }
            else {
              if (v13 >= v7) {
                v13 %= v7;
              }
              if (v13 != v10) {
                break;
              }
            }
            v12 = (_QWORD*)*v12;
          } while (v12 != nullptr);
        }
      }
    }
  }
LABEL_35:
  v14 = 0;
  do {
  LABEL_38:
    if (v14 == 0) {
      break;
    }
    v16 = *(_QWORD*)(GameData_21c9d70 + 64);
    v17 = *(unsigned __int16*)(v14 + 16) + 1LL;
    if ((int)v17 >=
        (int)((unsigned __int64)(*(_QWORD*)(GameData_21c9d70 + 72) - v16) >>
              3)) {
      break;
    }
    v14 = *(_QWORD*)(v16 + 8 * v17);
    if (v14 == 0 || *(_QWORD*)(v14 + 8) != 0) {
      break;
    }
    v18 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         80, 16, 0);
    *(_QWORD*)(v19 + 16) = 0;
    *(_DWORD*)(v19 + 64) = 0;
    *(_DWORD*)(v19 + 72) = 0;
    *(_QWORD*)v19 = GameData_2120e78;
    *(_QWORD*)(v19 + 48) = nn_ui2d_PlacementTextureInfo_vtable;
    *(_QWORD*)(v19 + 56) = -1;
    *(_QWORD*)(v19 + 8) = 0;
    *(_QWORD*)(v19 + 24) = v14;
    *(_QWORD*)(v19 + 32) = a1 + 280;
    *(_QWORD*)(v19 + 40) = 0;
    result = fw_memory_HeapManager_Allocate(*v18, 32, 16, 0);
    *(_QWORD*)(result + 16) = v19 + 24;
    *(_QWORD*)(result + 24) = v19;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                              memory_order_relaxed);
    v20 = *(_QWORD*)(a1 + 208);
    *(_QWORD*)result = v20;
    *(_QWORD*)(result + 8) = a1 + 208;
    *(_QWORD*)(v20 + 8) = result;
    *(_QWORD*)(a1 + 208) = result;
    ++*(_QWORD*)(a1 + 224);
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      result = std___1___shared_weak_count___release_weak(v19);
    }
    --v5;
  } while (v5 != 0);
  return result;
}

__int64 ProcStaffRollSeq_19c0d70(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 40);
  if (v1 != 0) {
    v2 = result;
    result = GameRoutine_634d80(*(_QWORD*)(v1 + 8), v1);
    *(_QWORD*)(v2 + 40) = 0;
  }
  return result;
}

_QWORD* ProcStaffRollSeq_19c0de0(_QWORD* a1, _QWORD* a2, unsigned __int64 a3)
{
  _QWORD* v4;
  unsigned __int16** v5;
  __int64 v6;
  unsigned __int16** v7;
  __int64 v8;
  unsigned __int16* v9;
  unsigned __int16* v10;
  int v11;
  int v12;
  int v13;
  int v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  unsigned __int64 v20;
  _QWORD* v21;
  __int64 v22;
  unsigned __int16** v23;
  __int64 v24;
  unsigned __int16** v25;
  __int64 v26;
  unsigned __int16* v27;
  unsigned __int16* v28;
  int v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  _QWORD* v35;
  _QWORD* v36;
  unsigned __int16** v37;
  __int64 v38;
  _QWORD* v39;
  unsigned __int16** v40;
  __int64 v41;
  unsigned __int16* v42;
  unsigned __int16* v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  unsigned int v50;
  unsigned int v51;
  __int64 v52;
  _QWORD* v53;
  _QWORD* v54;
  _QWORD* v55;
  _QWORD* v56;
  _QWORD* i;
  unsigned __int16** v58;
  __int64 v59;
  unsigned __int16** v60;
  __int64 v61;
  unsigned __int16* v62;
  unsigned __int16* v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  unsigned __int16** v70;
  __int64 v71;
  unsigned __int16** v72;
  __int64 v73;
  unsigned __int16* v74;
  unsigned __int16* v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  unsigned int v82;
  unsigned int v83;
  __int64 v84;
  _QWORD* v85;
  _QWORD* v86;
  _QWORD* v87;
  _QWORD* v88;
  _QWORD* v89;
  _QWORD* v90;

  v88 = a1;
  if (a3 < 2) {
    return v88;
  }
  if (a3 == 2) {
    v4 = (_QWORD*)*a2;
    v5 = *(unsigned __int16***)(*a2 + 16LL);
    v6 = *(_QWORD*)(*a2 + 24LL);
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = (unsigned __int16**)a1[2];
    v8 = a1[3];
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
    v9 = *v5;
    v10 = *v7;
    v11 = v9[22];
    v12 = v10[22];
    v13 = 10000 * v9[20] + 100 * v9[21];
    v14 = 10000 * v10[20] + 100 * v10[21];
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
    if (v13 + v11 < (unsigned int)(v14 + v12)) {
      v15 = (_QWORD*)v4[1];
      *(_QWORD*)(*v4 + 8LL) = v15;
      *v15 = *v4;
      v16 = v88;
      v88 = v4;
      *(_QWORD*)(*v16 + 8LL) = v4;
      *v4 = *v16;
      *v16 = v4;
      v4[1] = v16;
    }
    return v88;
  }
  v17 = a1;
  v18 = a3 >> 1;
  v20 = (a3 >> 1) + 1;
  do {
    v17 = (_QWORD*)v17[1];
    --v20;
  } while (v20 > 1);
  v21 = (_QWORD*)ProcStaffRollSeq_19c0de0(a1, v17, a3 >> 1);
  v22 = ProcStaffRollSeq_19c0de0(v17, a2, a3 - v18);
  v23 = *(unsigned __int16***)(v22 + 16);
  v24 = *(_QWORD*)(v22 + 24);
  v88 = (_QWORD*)v22;
  if (v24 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                              memory_order_relaxed);
  }
  v25 = (unsigned __int16**)v21[2];
  v26 = v21[3];
  if (v26 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                              memory_order_relaxed);
  }
  v27 = *v23;
  v28 = *v25;
  v29 = v27[22];
  v30 = v28[22];
  v31 = 10000 * v27[20] + 100 * v27[21];
  v32 = 10000 * v28[20] + 100 * v28[21];
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak(v26);
  }
  v33 = v31 + v29;
  v34 = v32 + v30;
  if (v24 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v33 < v34) {
      goto LABEL_28;
    }
  LABEL_46:
    v55 = (_QWORD*)v21[1];
    v56 = v88;
    v35 = a2;
    v88 = v21;
    if (v55 == v56) {
      return v88;
    }
    goto LABEL_47;
  }
  (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
  std___1___shared_weak_count___release_weak(v24);
  if (v33 >= v34) {
    goto LABEL_46;
  }
LABEL_28:
  v35 = a2;
  v36 = (_QWORD*)v88[1];
  if (v36 == a2) {
    goto LABEL_43;
  }
  while (1) {
    v37 = (unsigned __int16**)v36[2];
    v38 = v36[3];
    v39 = v36;
    if (v38 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                                memory_order_relaxed);
    }
    v40 = (unsigned __int16**)v21[2];
    v41 = v21[3];
    if (v41 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                                memory_order_relaxed);
    }
    v42 = *v37;
    v43 = *v40;
    v44 = v42[20];
    v45 = v42[21];
    v46 = v42[22];
    v47 = v43[20];
    v48 = v43[21];
    v49 = v43[22];
    if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
      std___1___shared_weak_count___release_weak(v41);
      v35 = a2;
    }
    v50 = 10000 * v44 + 100 * v45 + v46;
    v51 = 10000 * v47 + 100 * v48 + v49;
    if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      break;
    }
    if (v50 >= v51) {
      goto LABEL_42;
    }
  LABEL_31:
    v36 = (_QWORD*)v39[1];
    if (v36 == v35) {
      goto LABEL_43;
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
  std___1___shared_weak_count___release_weak(v38);
  v35 = a2;
  if (v50 < v51) {
    goto LABEL_31;
  }
LABEL_42:
  v36 = v39;
LABEL_43:
  v52 = *v36;
  v53 = v36;
  v54 = *(_QWORD**)(*v36 + 8LL);
  *(_QWORD*)(*v88 + 8LL) = v54;
  *v54 = *v88;
  v55 = (_QWORD*)v21[1];
  *(_QWORD*)(*v21 + 8LL) = v88;
  *v88 = *v21;
  v56 = v53;
  *v21 = v52;
  *(_QWORD*)(v52 + 8) = v21;
  if (v55 != v53) {
  LABEL_47:
    if (v56 == v35) {
      return v88;
    }
    i = v56;
    do {
      v58 = (unsigned __int16**)i[2];
      v59 = i[3];
      v89 = v56;
      if (v59 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v59 + 8), 1u,
                                  memory_order_relaxed);
      }
      v60 = (unsigned __int16**)v55[2];
      v61 = v55[3];
      v90 = i;
      if (v61 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v61 + 8), 1u,
                                  memory_order_relaxed);
      }
      v62 = *v58;
      v63 = *v60;
      v64 = v62[20];
      v65 = v62[21];
      v66 = v62[22];
      v67 = v63[20];
      v68 = v63[21];
      v69 = v63[22];
      if (v61 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
        std___1___shared_weak_count___release_weak(v61);
        v35 = a2;
        if (v59 == 0) {
          goto LABEL_61;
        }
      }
      else if (v59 == 0) {
        goto LABEL_61;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
        std___1___shared_weak_count___release_weak(v59);
        v35 = a2;
      }
    LABEL_61:
      if (10000 * v64 + 100 * v65 + v66 >=
          (unsigned int)(10000 * v67 + 100 * v68 + v69)) {
        v55 = (_QWORD*)v55[1];
        v56 = v89;
        i = v90;
        if (v55 == v89) {
          return v88;
        }
      }
      else {
        for (i = (_QWORD*)v90[1]; i != v35; i = (_QWORD*)i[1]) {
          v70 = (unsigned __int16**)i[2];
          v71 = i[3];
          if (v71 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v71 + 8), 1u,
                                      memory_order_relaxed);
          }
          v72 = (unsigned __int16**)v55[2];
          v73 = v55[3];
          if (v73 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v73 + 8), 1u,
                                      memory_order_relaxed);
          }
          v74 = *v70;
          v75 = *v72;
          v76 = v74[20];
          v77 = v74[21];
          v78 = v74[22];
          v79 = v75[20];
          v80 = v75[21];
          v81 = v75[22];
          if (v73 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
            std___1___shared_weak_count___release_weak(v73);
            v35 = a2;
          }
          v82 = 10000 * v76 + 100 * v77 + v78;
          v83 = 10000 * v79 + 100 * v80 + v81;
          if (v71 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
            std___1___shared_weak_count___release_weak(v71);
            v35 = a2;
          }
          if (v82 >= v83) {
            break;
          }
        }
        v84 = *i;
        v85 = *(_QWORD**)(*i + 8LL);
        *(_QWORD*)(*v90 + 8LL) = v85;
        *v85 = *v90;
        v86 = (_QWORD*)v55[1];
        *(_QWORD*)(*v55 + 8LL) = v90;
        *v90 = *v55;
        v87 = v89;
        *v55 = v84;
        *(_QWORD*)(v84 + 8) = v55;
        v55 = v86;
        if (v89 == v90) {
          v87 = i;
        }
        v56 = v87;
        if (v55 == v87) {
          return v88;
        }
      }
    } while (i != v35);
  }
  return v88;
}

__int64 ProcStaffRollSeq_19c14a0(__int64* a1, __int64 a2, const char* a3,
                                 float a4)
{

#pragma clang fp contract(off)
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  const char* v13;
  __int64 result;
  __int64 v15[3];

  v8 = fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 168, 16, 0);
  *(_QWORD*)(v9 + 8) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_BYTE*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_DWORD*)(v9 + 112) = 0;
  *(_QWORD*)v9 = GameData_2121098;
  *(_QWORD*)(v9 + 40) = 0;
  *(float*)(v9 + 116) = a4;
  *(_QWORD*)(v9 + 120) = 0;
  *(_QWORD*)(v9 + 128) = 0;
  *(_QWORD*)(v9 + 136) = a2;
  *(_QWORD*)(v9 + 144) = 0;
  *(_QWORD*)(v9 + 152) = 0;
  *(_QWORD*)(v9 + 160) = 0;
  *(_QWORD*)(v9 + 24) = game_anonymous_ProcStaffRollSeq_MiddleDrawObj_vtable;
  v10 = v9 + 24;
  ProcStaffRollSeq_19c1860((void*)(v15), v9 + 24);
  if ((*(_BYTE*)(v9 + 144) & 1) != 0) {
    v11 = *(_QWORD*)(v9 + 160);
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v12, v11);
    }
  }
  qmemcpy((void*)(v9 + 144), v15, 24);
  if (a3 != nullptr) {
    v13 = a3;
  }
  else {
    v13 = &GameData_1a9f09e;
  }
  GameRoutine_60a020((char*)(v9 + 40), v13);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)(v9 + 24) + 40LL))(v10);
  *a1 = v10;
  a1[1] = v9;
  return result;
}

__int64 ProcStaffRollSeq_19c16a0(__int64 a1, __int64 a2, const char* a3,
                                 const char* a4, const char* a5, float a6)
{

#pragma clang fp contract(off)
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  const char* v16;
  int v17;
  int v18;
  const char* v19;
  int v20;
  const char* v21;
  int v22;
  __int64 v23;
  __int64 v25[3];

  *(_BYTE*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)a1 = game_anonymous_ProcStaffRollSeq_StaffDrawObj_vtable;
  *(_QWORD*)(a1 + 16) = 0;
  v10 = (char*)(a1 + 16);
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(float*)(a1 + 92) = a6;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = a2;
  *(_QWORD*)(a1 + 120) = 0;
  v11 = a1 + 120;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  *(_BYTE*)(a1 + 148) = 1;
  ProcStaffRollSeq_19c1860((void*)(v25), a1);
  if ((*(_BYTE*)v11 & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 136);
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v12);
    }
  }
  v14 = v25[1];
  v15 = a3 == nullptr;
  if (a3 != nullptr) {
    v16 = a3;
  }
  else {
    v16 = &GameData_1a9f09e;
  }
  if (a3 != nullptr) {
    v17 = 2;
  }
  else {
    v17 = 1;
  }
  *(_QWORD*)v11 = v25[0];
  *(_QWORD*)(v11 + 8) = v14;
  *(_QWORD*)(v11 + 16) = v25[2];
  v18 = !v15;
  GameRoutine_60a020(v10, v16);
  if (a4 != nullptr) {
    v19 = a4;
  }
  else {
    v19 = &GameData_1a9f09e;
  }
  if (a4 != nullptr) {
    v20 = v17;
  }
  else {
    v20 = v18;
  }
  GameRoutine_60a020((char*)(a1 + 40), v19);
  if (a5 != nullptr) {
    v21 = a5;
  }
  else {
    v21 = &GameData_1a9f09e;
  }
  if (a5 != nullptr) {
    v22 = v20 + 1;
  }
  else {
    v22 = v20;
  }
  GameRoutine_60a020((char*)(a1 + 64), v21);
  v23 = *(_QWORD*)a1;
  *(_DWORD*)(a1 + 144) = v22;
  *(_BYTE*)(a1 + 148) = 0;
  return (*(__int64 (**)(__int64))(v23 + 40))(a1);
}

__attribute__((swiftcall)) void ProcStaffRollSeq_19c1860(PSEUDO_X8 x8_,
                                                         __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  unsigned int i;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD v19[6];
  struct {
    _QWORD v20[2];
    unsigned __int64 v21;
    __int64 (*v22)();
    __int64 v23;
  } v20_;
  struct {
    _BYTE v24[256];
    _BYTE* v25;
  } v24_;
  __int64* v26[4];
  struct {
    _BYTE v27[8];
    char v28;
  } v27_;
  struct {
    _QWORD v29[2];
    int v30;
    char gap420_[4];
    __int64 v31;
    __int64 v32;
  } v29_;

  v3 = a1;
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
  for (i = 0; i != 128; ++i) {
    v19[2] = i;
    v19[0] = v4;
    v20_.v23 = 0;
    v24_.v25 = v24_.v24;
    v29_.v30 = 0;
    v20_.v20[0] = v24_.v24;
    v20_.v20[1] = 256;
    v19[3] = 0;
    v19[4] = 108;
    v27_.v27[0] = 0;
    v27_.v28 = 0;
    v20_.v21 = 0;
    v20_.v22 = GameRoutine_64be60;
    v29_.v29[0] = "{}_{}";
    v29_.v29[1] = "";
    v29_.v31 = 0;
    v29_.v32 = 2;
    v26[2] = v19;
    v26[3] = (_QWORD*)((_UNKNOWN*)0x6CLL);
    v26[0] = v20_.v20;
    v26[1] = (_QWORD*)(((_UNKNOWN*)0x0LL) + 2);
    GameRoutine_6380e0_alt1((__int64)v29_.v29, v26);
    if (v27_.v28 == 1) {
      std___1_locale_Destroy_locale_alt1((__int64)v27_.v27);
    }
    v6 = v20_.v21;
    if (v20_.v21 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0_alt1();
    }
    v7 = (__int64)v24_.v25;
    if (v20_.v21 >= 0x17) {
      v9 = v3;
      v10 = v4;
      if ((v20_.v21 | 7) == 0x17) {
        v11 = 26;
      }
      else {
        v11 = (v20_.v21 | 7) + 1;
      }
      v12 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v11,
                                                16, 0);
      v13 = v11 | 1;
      v8 = v12;
      a2[1] = v6;
      a2[2] = v12;
      v4 = v10;
      v3 = v9;
      *a2 = v13;
    }
    else {
      v8 = (__int64)a2 + 1;
      *(_BYTE*)a2 = 2 * v20_.v21;
      if (v6 == 0) {
        goto LABEL_14;
      }
    }
    memmove_alt1(v8, v7, v6);
  LABEL_14:
    v14 = v24_.v25;
    *(_BYTE*)(v8 + v6) = 0;
    if (v14 != v24_.v24 && v14 != nullptr) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, (__int64)v14);
    }
    if ((*(_BYTE*)a2 & 1) != 0) {
      v16 = a2[2];
    }
    else {
      v16 = (__int64)a2 + 1;
    }
    if (ui_LayoutAccessor_FindPane_alt1(*(__int64**)(v3 + 112), v16) == 0) {
      return;
    }
    if ((*(_BYTE*)a2 & 1) != 0) {
      v17 = a2[2];
      if (v17 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v17);
      }
    }
  }
  *(_WORD*)a2 = 0;
}

__int64 ProcStaffRollSeq_19c1aa0(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  __int64* v2;
  const char* v4;
  const char* v5;
  const char* v6;
  const char* v7;
  float v8;
  __int64* v9;
  char v10;
  int v11;
  unsigned __int32 v12;
  const char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _BOOL4 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int32x4_t* v22;
  __int64 v23;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
  v2 = *(__int64**)(a1 + 112);
  v4 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
  v5 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v6 = *(const char**)(a1 + 136);
  }
  else {
    v6 = (const char*)(a1 + 121);
  }
  LayoutAccessor_1560520(v2, v4, v5, v6),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v7 = *(const char**)(a1 + 136);
  }
  else {
    v7 = (const char*)(a1 + 121);
  }
  v8 = ui_LayoutAccessor_GetPaneSize(*(__int64**)(a1 + 112), v7),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
  v9 = *(__int64**)(a1 + 112);
  v10 = *(_BYTE*)(a1 + 120);
  *(float*)(a1 + 96) = v8;
  *(_DWORD*)(a1 + 100) = v11;
  v12 = 0;
  if ((v10 & 1) != 0) {
    v13 = *(const char**)(a1 + 136);
  }
  else {
    v13 = (const char*)(a1 + 121);
  }
  if (v9[2] == 0) {
    goto LABEL_28;
  }
  v14 = v9[1];
  if (v14 == 0) {
    goto LABEL_28;
  }
  v15 = std___1___shared_weak_count_lock(v14),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v15 != 0) {
    v16 = *v9;
    if (*v9 != 0) {
      v1 = *(unsigned __int8*)(v16 + 24);
      v17 = v16 + 152;
      if (v1 == 0) {
        v17 = 0;
      }
      v18 = v17 != v9[2];
    }
    else {
      v18 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v18) {
        goto LABEL_20;
      }
    }
    else {
      v20 = v15;
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v20),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v18) {
        goto LABEL_20;
      }
    }
    v12 = 0;
    if ((v1 & 1) == 0) {
      goto LABEL_28;
    }
    goto LABEL_25;
  }
LABEL_20:
  v19 = v9[1];
  v12 = 0;
  if (v19 != 0 && *(_QWORD*)(v19 + 8) != -1) {
  LABEL_25:
    v21 = v9[2];
    if (v21 != 0) {
      v22 = (int32x4_t*)GameRoutine_155f760((__int64)v9, v21, v13),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
      v12 = 0;
      if (v22 != nullptr) {
        v12 = LANES128_OF(vdupq_laneq_s32(v22[7], 3)).n128_u32[0];
      }
    }
  }
LABEL_28:
  *(_DWORD*)(a1 + 88) = v12;
  *(_DWORD*)(a1 + 108) = 1143767040;
  (*(void (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v23 = *(_QWORD*)(a1 + 136);
  }
  else {
    v23 = a1 + 121;
  }
  return ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 112), v23, 1);
}

__int64 ProcStaffRollSeq_StaffDrawObj_Unknown6(__int64 a1)
{

#pragma clang fp contract(off)
  char v2;
  const char* v3;
  __int64* v4;
  const char* v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  int v10;
  char* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  char v16;
  char* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  char* v27;
  double v28;
  float v29;
  float v30;
  float v31;
  double v32;
  float v33;
  int v34;
  int v35;
  double v36;
  float v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  _DWORD v44[3];
  float v45[3];
  struct {
    __int64* v46;
    __int64 v47;
  } v46_;

  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
  v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
  v2 = *(_BYTE*)(a1 + 120);
  v3 = *(const char**)(a1 + 136);
  v4 = *(__int64**)(a1 + 112);
  if ((v2 & 1) != 0) {
    v5 = v3;
  }
  else {
    v5 = (const char*)(a1 + 121);
  }
  LayoutAccessor_1560070((void*)(&v46_.v46), v4, v5),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
      v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
  result = v46_.v47;
  if (v46_.v47 != 0) {
    if (*(_QWORD*)(v46_.v47 + 8) == -1) {
      goto LABEL_77;
    }
    v7 = std___1___shared_weak_count_lock(v46_.v47),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
    v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
    v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v7 != 0) {
      v8 = v46_.v46;
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v9 = v7;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
            v34 =
                COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v9),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
            v34 =
                COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
      }
    }
    else {
      v8 = nullptr;
    }
    v10 = *(_DWORD*)(a1 + 144);
    switch (v10) {
    case 3:
      if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
        v19 = *(_QWORD*)(a1 + 32);
      }
      else {
        v19 = a1 + 17;
      }
      if (v19 != 0) {
        v20 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt00"),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v20 != 0) {
          GameRoutine_156c5d0(v20, v19, 0),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        }
      }
      if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
        v21 = *(_QWORD*)(a1 + 56);
      }
      else {
        v21 = a1 + 41;
      }
      if (v21 != 0) {
        v22 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt01"),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v22 != 0) {
          GameRoutine_156c5d0(v22, v21, 0),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        }
      }
      if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
        v23 = *(char**)(a1 + 80);
      }
      else {
        v23 = (char*)(a1 + 65);
      }
      if (v23 == nullptr) {
        goto LABEL_77;
      }
      v24 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt02"),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
      v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
      if (v24 == 0) {
        goto LABEL_77;
      }
      v25 = v23;
      goto LABEL_76;
    case 2:
      if (*(_BYTE*)(a1 + 148) != 1) {
        v28 = ui_LayoutAccessor_GetPaneTranslate(v8, "T_Txt00"),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        v29 = *(float*)&v28;
        v45[1] = v30;
        v45[2] = v31;
        v32 = ui_LayoutAccessor_GetPaneTranslate(v8, "T_Txt01"),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        v33 = *(float*)&v32;
        v44[1] = v34;
        v44[2] = v35;
        v36 = ui_LayoutAccessor_GetPaneTranslate(v8, "T_Txt02"),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        v37 = (float)(v33 + *(float*)&v36) * 0x1.0000000000000p-1f;
        if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
          v38 = *(_QWORD*)(a1 + 32);
        }
        else {
          v38 = a1 + 17;
        }
        v45[0] = (float)(v29 + v33) * 0x1.0000000000000p-1f;
        *(float*)v44 = v37;
        if (v38 != 0) {
          v39 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt00"),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
          v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
          if (v39 != 0) {
            GameRoutine_156c5d0(v39, v38, 0),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v34 = COERCE_AS(__typeof__(v34),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(float, "s2", "=w"));
          }
        }
        ui_LayoutAccessor_SetPaneTranslate(v8, "T_Txt00", (__int64)v45),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
            v34 =
                COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
          v40 = *(_QWORD*)(a1 + 56);
        }
        else {
          v40 = a1 + 41;
        }
        if (v40 != 0) {
          v41 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt01"),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
          v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
          if (v41 != 0) {
            GameRoutine_156c5d0(v41, v40, 0),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v34 = COERCE_AS(__typeof__(v34),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(float, "s2", "=w"));
          }
        }
        ui_LayoutAccessor_SetPaneTranslate(v8, "T_Txt01", (__int64)v44),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
            v34 =
                COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        goto LABEL_74;
      }
      if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
        v14 = *(_QWORD*)(a1 + 32);
      }
      else {
        v14 = a1 + 17;
      }
      if (v14 != 0) {
        v15 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt00"),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v15 != 0) {
          GameRoutine_156c5d0(v15, v14, 0),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        }
      }
      v16 = *(_BYTE*)(a1 + 40);
      v17 = *(char**)(a1 + 56);
      v18 = (char*)(a1 + 41);
      break;
    case 1:
      if (*(_BYTE*)(a1 + 148) == 1) {
        if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
          v11 = *(char**)(a1 + 32);
        }
        else {
          v11 = (char*)(a1 + 17);
        }
        if (v11 == nullptr) {
          goto LABEL_49;
        }
        v12 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt00"),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v12 == 0) {
          goto LABEL_49;
        }
        v13 = v11;
        goto LABEL_48;
      }
      v42 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt00"),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
      v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
      if (v42 != 0) {
        GameRoutine_156c5d0(v42, (__int64)&GameData_1a9f09e, 0),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
            v34 =
                COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
      }
      v16 = *(_BYTE*)(a1 + 16);
      v17 = *(char**)(a1 + 32);
      v18 = (char*)(a1 + 17);
      break;
    default:
      v12 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt00"),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
      v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
      if (v12 == 0) {
      LABEL_49:
        v26 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt01"),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v26 == 0) {
        LABEL_74:
          v24 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt02"),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
          v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
          if (v24 == 0) {
            goto LABEL_77;
          }
          v25 = &GameData_1a9f09e;
        LABEL_76:
          GameRoutine_156c5d0(v24, (__int64)v25, 0),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        LABEL_77:
          result = v46_.v47;
          if (v46_.v47 != 0) {
            return std___1___shared_weak_count___release_weak_alt1(v46_.v47);
          }
          return result;
        }
        v27 = &GameData_1a9f09e;
      LABEL_73:
        GameRoutine_156c5d0(v26, (__int64)v27, 0),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
            v34 =
                COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
        goto LABEL_74;
      }
      v13 = &GameData_1a9f09e;
    LABEL_48:
      GameRoutine_156c5d0(v12, (__int64)v13, 0),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
          v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
      goto LABEL_49;
    }
    if ((v16 & 1) != 0) {
      v43 = v17;
    }
    else {
      v43 = v18;
    }
    if (v43 == nullptr) {
      goto LABEL_74;
    }
    v26 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt01"),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
    v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(float, "s1", "=w")),
    v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v26 == 0) {
      goto LABEL_74;
    }
    v27 = v43;
    goto LABEL_73;
  }
  return result;
}

__int64 ProcStaffRollSeq_BigDrawObj_Unknown6(__int64 a1)
{
  char v2;
  const char* v3;
  __int64* v4;
  const char* v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64* v12;
    __int64 v13;
  } v12_;

  v2 = *(_BYTE*)(a1 + 120);
  v3 = *(const char**)(a1 + 136);
  v4 = *(__int64**)(a1 + 112);
  if ((v2 & 1) != 0) {
    v5 = v3;
  }
  else {
    v5 = (const char*)(a1 + 121);
  }
  LayoutAccessor_1560070((void*)(&v12_.v12), v4, v5);
  result = v12_.v13;
  if (v12_.v13 != 0) {
    if (*(_QWORD*)(v12_.v13 + 8) == -1) {
      return std___1___shared_weak_count___release_weak_alt1(result);
    }
    v7 = std___1___shared_weak_count_lock(v12_.v13);
    v8 = v12_.v12;
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v9 = v7;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt1(v9);
    }
    v10 = (*(_BYTE*)(a1 + 16) & 1) != 0 ? *(_QWORD*)(a1 + 32) : a1 + 17;
    if (v10 != 0) {
      v11 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt");
      if (v11 != 0) {
        GameRoutine_156c5d0(v11, v10, 0);
      }
    }
    result = v12_.v13;
    if (v12_.v13 != 0) {
      return std___1___shared_weak_count___release_weak_alt1(result);
    }
  }
  return result;
}

__int64 ProcStaffRollSeq_MiddleDrawObj_Unknown6(__int64 a1)
{
  char v2;
  const char* v3;
  __int64* v4;
  const char* v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64* v12;
    __int64 v13;
  } v12_;

  v2 = *(_BYTE*)(a1 + 120);
  v3 = *(const char**)(a1 + 136);
  v4 = *(__int64**)(a1 + 112);
  if ((v2 & 1) != 0) {
    v5 = v3;
  }
  else {
    v5 = (const char*)(a1 + 121);
  }
  LayoutAccessor_1560070((void*)(&v12_.v12), v4, v5);
  result = v12_.v13;
  if (v12_.v13 != 0) {
    if (*(_QWORD*)(v12_.v13 + 8) == -1) {
      return std___1___shared_weak_count___release_weak_alt1(result);
    }
    v7 = std___1___shared_weak_count_lock(v12_.v13);
    v8 = v12_.v12;
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v9 = v7;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt1(v9);
    }
    v10 = (*(_BYTE*)(a1 + 16) & 1) != 0 ? *(_QWORD*)(a1 + 32) : a1 + 17;
    if (v10 != 0) {
      v11 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Txt");
      if (v11 != 0) {
        GameRoutine_156c5d0(v11, v10, 0);
      }
    }
    result = v12_.v13;
    if (v12_.v13 != 0) {
      return std___1___shared_weak_count___release_weak_alt1(result);
    }
  }
  return result;
}

void ProcStaffRollSeq_19c2710(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_anonymous_ProcStaffRollSeq_DrawObj_vtable;
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 136);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 80);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 56);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 32);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v8);
    }
  }
}

__int64 ProcStaffRollSeq_ActorDrawObj_Unknown6(__int64 a1)
{
  char v2;
  const char* v3;
  __int64* v4;
  const char* v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64* v14;
    __int64 v15;
  } v14_;

  v2 = *(_BYTE*)(a1 + 120);
  v3 = *(const char**)(a1 + 136);
  v4 = *(__int64**)(a1 + 112);
  if ((v2 & 1) != 0) {
    v5 = v3;
  }
  else {
    v5 = (const char*)(a1 + 121);
  }
  LayoutAccessor_1560070((void*)(&v14_.v14), v4, v5);
  result = v14_.v15;
  if (v14_.v15 != 0) {
    if (*(_QWORD*)(v14_.v15 + 8) == -1) {
      return std___1___shared_weak_count___release_weak_alt1(result);
    }
    v7 = std___1___shared_weak_count_lock(v14_.v15);
    v8 = v14_.v14;
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v9 = v7;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt1(v9);
    }
    if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
      v10 = *(_QWORD*)(a1 + 32);
    }
    else {
      v10 = a1 + 17;
    }
    if (v10 != 0) {
      v11 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Character");
      if (v11 != 0) {
        GameRoutine_156c5d0(v11, v10, 0);
      }
    }
    v12 = (*(_BYTE*)(a1 + 40) & 1) != 0 ? *(_QWORD*)(a1 + 56) : a1 + 41;
    if (v12 != 0) {
      v13 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Actor");
      if (v13 != 0) {
        GameRoutine_156c5d0(v13, v12, 0);
      }
    }
    result = v14_.v15;
    if (v14_.v15 != 0) {
      return std___1___shared_weak_count___release_weak_alt1(result);
    }
  }
  return result;
}

#pragma GCC visibility pop
