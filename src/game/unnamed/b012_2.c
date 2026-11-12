#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1a99856;
extern _UNKNOWN GameData_1abbaec;
extern __int64 (*GameData_1fe4398[])();
extern __int64 (*GameData_1fe4630[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c010[3];
extern _UNKNOWN* GameData_212c540;
extern __int64* GameData_212c738[2];
extern __int64 GameData_212c7b0[11];
extern __int64* GameData_212d448[9];
extern char** GameData_212def8;
extern __int64* GameData_212e348;
extern __int64* GameData_212ee68[4];
extern __int128 GameData_21a6120;
extern _UNKNOWN GameData_21a6130;
extern __int64 GameData_21c9710;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21caab0;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2219098;
extern __int64 GameData_22190b8;
extern __int64 GameData_22190c0;
extern __int64 GameData_22197d8;
extern __int64 GameData_221bea8;
__int64 GameRoutine_1079580(_QWORD, _QWORD, float, float, float);
__int64 GameRoutine_1084940(_QWORD, _QWORD, double);
__int64 GameRoutine_10adb80(_QWORD, _QWORD);
__int64 GameRoutine_10b2280(_QWORD, _QWORD, double);
__int64 GameRoutine_10c910(_QWORD, _QWORD);
__int64 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_1120d0(_QWORD);
__int64 GameRoutine_112290(_QWORD);
__int64 GameRoutine_1257620(_QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_16477d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_17c4450(_QWORD, _QWORD);
__int64 GameRoutine_17c8620(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17c89c0(_QWORD);
__int64 GameRoutine_187d070(_QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);
__int64 GameRoutine_1a09d30(_QWORD, _QWORD);
__int64 GameRoutine_1a09fd0(_QWORD, long double, long double);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_867df0(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_d38e30(_QWORD);
char* GameRoutine_e37f80(signed __int64*, char*, char*);
void GameRoutine_e3f8b0(_QWORD*, double, double, double, double);
__attribute__((swiftcall)) void GameRoutine_e4c790(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
__int64 GameRoutine_e58ae0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e5a5e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e5ccc0(void);
_QWORD* GameRoutine_e67b30(_QWORD*, __int64*);
void __attribute__((noreturn)) GameRoutine_e67c30(_QWORD);
__int64 GameRoutine_e927f0(_QWORD, _QWORD);
__int64 GameRoutine_e94b60();
__int64 GameRoutine_ec1530(_QWORD);
__int64 GameRoutine_f6dc60(void);
__int64 GameRoutine_f6dde0(void);
__attribute__((swiftcall)) void LegionGambit_e4c790(PSEUDO_X8, _DWORD*, __int64,
                                                    char);
__int64 CombatLegionGroup_e58ae0(__int64, __int64, unsigned __int64);
__int64 GameRoutine_10adb80_alt1(_DWORD*,
                                 _BYTE*) __asm__("GameRoutine_10adb80");
__int64 GameRoutine_16477d0_alt1(__int64, const char*, __int64,
                                 __int64) __asm__("GameRoutine_16477d0");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_e5ccc0_alt1(__int64 result) __asm__("GameRoutine_e5ccc0");
__int64 GameRoutine_f6dc60_alt1(__int64, _QWORD*) __asm__("GameRoutine_f6dc60");
__int64 GameRoutine_f6dde0_alt1(__int64,
                                __int64*) __asm__("GameRoutine_f6dde0");
__int64 LegionGambitCamera_e5a5e0(__int64 result, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_character_1084940(__int64 result, char, float);
__int64 game_menu_Dialog__CreateBindDirect_game_menu_ItemDialog(__int64,
                                                                _QWORD*);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 std___1___shared_weak_count___release_weak(__int64);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
extern _BYTE GameData_1abbaec_alt1[] __asm__("GameData_1abbaec");
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern char** msg_MessageManager_empty_text__ptr;
float CharacterAnimator_1079580(__int64, int, float, float, float);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void CharacterFacialController_10b2280(__int64, unsigned int, float);
void GameRoutine_e3f8b0_alt1(_QWORD*, double,
                             double) __asm__("GameRoutine_e3f8b0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_d38e30_alt1() __asm__("GameRoutine_d38e30");
void __cxa_guard_release(__int64);
void snd_Fade_Fade_10c910(__int64, int);
__int64 GameHr_e4bf40(__int64 result);
__int64 GameHr_e51940(__int64 a1, __int64 a2);
_QWORD* GameHr_e92660(__int64 a1, _BYTE** a2, const char* a3, __int64 a4,
                      __int64 a5, __int64 a6);
__int64 GameHr_e99170(__int64 a1);
__int64 GameHr_e991a0(__int64 a1);

char* GameHr_e39fe0(__int64 a1, int* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  int v6;
  char* v7;
  char* result;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(v2 + 176);
  v5 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 88, 16, 0);
  *(_QWORD*)(v5 + 8) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_WORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 64) = v4;
  *(_DWORD*)(v5 + 72) = 0;
  *(_QWORD*)v5 = GameData_1fe4630;
  *(_BYTE*)(v5 + 40) = 24;
  strcpy((char*)(v5 + 41), "ImmidiateDir");
  *(_BYTE*)(v5 + 76) = 0;
  *(_BYTE*)(v5 + 84) = 0;
  *(_QWORD*)(v5 + 24) = GameData_1fe4398;
  v6 = *a2;
  v10 = v5 + 24;
  v11 = v5;
  *a2 = v6 + 1;
  if (v6 <= 0) {
    v7 = *(char**)(v2 + 136);
  }
  else {
    v7 = (char*)(*(_QWORD*)(v2 + 136) + 16LL * (unsigned int)(v6 - 1) + 16);
  }
  result = GameRoutine_e37f80((signed __int64*)(v2 + 136), v7, (char*)&v10);
  v9 = v11;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    return (char*)GameRoutine_1a09c50(v9);
  }
  return result;
}

__int64 GameHr_e4bf40(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  unsigned __int8* v2;
  int v3;
  __int64 v5;
  _DWORD* v6;
  float v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  int* v18;
  int v19;
  __int64 v20;
  _QWORD* v21;
  __int128 v22;
  __int128 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8** v27;
  unsigned __int8** v28;
  unsigned __int8* v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int8* v33;
  __int64 v34;
  _BOOL4 v35;
  __int64 v36;
  __int64 v37;
  double v38;
  double v39;
  _QWORD* v40;
  unsigned __int8* v43;
  unsigned __int8* v44;
  unsigned __int64 v45;
  bool v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  int v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  bool v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int8** v58;
  unsigned __int8** v59;
  __int64 v60;
  unsigned __int8* v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  int v65;
  _BOOL4 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  int v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  bool v75;
  __int64* v76;
  int v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  bool v81;
  unsigned int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  bool v86;
  __int64 v87;
  bool v88;
  long double v89;
  __int64 v90;
  __int64 v91;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v99;
  __int64 v100;
  unsigned int v101;
  __int64 v102;
  __int64 v103;
  unsigned __int8* v104;
  __int64 v105;
  __int64 v106;
  _DWORD* v107;
  struct {
    __int64 v108;
    int v109;
  } v108_;

  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(_DWORD*)(result + 8);
  if (v3 == 0 || v3 == 6) {
    return result;
  }
  v5 = *(_QWORD*)(result + 128);
  v6 = (_DWORD*)result;
  if (v5 != 0) {
    v7 = *(float*)(v5 + 24);
    if (v7 < 0x0.0p+0f) {
      v7 = 0x0.0p+0f;
    }
    *(float*)(v5 + 104) = v7;
  }
  if (*(_BYTE*)(result + 224) == 1) {
    *(_BYTE*)(result + 224) = 0;
    v8 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
    v9 = *(_QWORD*)(v8 + 48);
    v10 = *(_QWORD*)(v8 + 56);
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
      v11 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 168LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(v10),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    else {
      v11 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 168LL);
    }
    if (*(_BYTE*)(v11 + 96) == 1) {
      *(_BYTE*)(v11 + 96) = 0;
    }
  }
  v12 = *((_QWORD*)v6 + 12);
  if (v12 != 0) {
    v108_.v109 = 1065353216;
    v108_.v108 = 0x3F80000000000000LL;
    *(_BYTE*)(v12 + 149) = 1;
    v13 = *(_QWORD*)(*GameData_212ee68[0] + 8);
    v14 = *(_QWORD*)(*GameData_212ee68[0] + 16);
    v15 = v14 - v13;
    if (v14 == v13) {
      goto LABEL_25;
    }
    v16 = 0;
    v17 = 0x4EC4EC4EC4EC4EC5LL * (v15 >> 3);
    v18 = (int*)(v13 + 24);
    while (1) {
      v19 = *v18;
      v18 += 26;
      if (v19 == 1538794854) {
        break;
      }
      if (v17 == ++v16) {
        goto LABEL_25;
      }
    }
    if (v16 < 1) {
    LABEL_25:
      v20 = 0;
    }
    else {
      if (v17 <= (unsigned int)v16) {
        GameRoutine_d38e30_alt1(),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v20 = v13 + 104LL * (unsigned int)v16;
    }
    LegionGambitCamera_e5a5e0(*((_QWORD*)v6 + 12), v20, (__int64)&v108_.v108),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v21 = *(_QWORD**)(*((_QWORD*)v6 + 12) + 40LL);
    v21[2] = v21[1];
    v21[5] = v21[4];
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
      v103 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v103;
      __cxa_guard_release((__int64)&GameData_21a6130),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v22 = GameData_21a6120;
    v21[8] = 0;
    v21[9] = 0x3F80000000000000LL;
    v21[10] = v22;
    v23 = *((_OWORD*)v21 + 5);
    *((_QWORD*)&v23 + 1) = DWORD2(v22);
    *((_OWORD*)v21 + 5) = v23;
  }
  v24 = CombatLegionGroup_e58ae0(
      *(_QWORD*)(*(_QWORD*)v6 + 8LL * (((v6[22] - 1) & 0xFFFFFFFD) == 0) + 16),
      (__int64)"GambitSub", 9u),
  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v107 = v6;
  if (v24 >= 1) {
    v1 = 98;
    v25 = 0;
    v106 = (unsigned int)v24;
    do {
      v26 = *(_QWORD*)(*(_QWORD*)v6 + 8LL * (((v6[22] - 1) & 0xFFFFFFFD) == 0) +
                       16);
      v27 = *(unsigned __int8***)(v26 + 16);
      v28 = *(unsigned __int8***)(v26 + 24);
      if (v27 == v28) {
        goto LABEL_30;
      }
      while (1) {
        v29 = *v27;
        v30 = (__int64)v27[1];
        if (v30 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                                    memory_order_relaxed);
        }
        v31 = *v29;
        v32 = *((_QWORD*)v29 + 1);
        if ((v31 & 1) == 0) {
          v32 = v31 >> 1;
        }
        if (v32 != 9) {
          v35 = false;
          if (v30 == 0) {
            goto LABEL_47;
          }
        LABEL_45:
          if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            std___1___shared_weak_count___release_weak(v30),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          goto LABEL_47;
        }
        if ((v31 & 1) != 0) {
          v33 = *((unsigned __int8**)v29 + 2);
        }
        else {
          v33 = v29 + 1;
        }
        v34 = *(_QWORD*)v33 ^ 0x75537469626D6147LL | v33[8] ^ 0x62LL;
        v35 = v34 == 0;
        if (v34 == 0) {
          v2 = v29;
        }
        if (v30 != 0) {
          goto LABEL_45;
        }
      LABEL_47:
        if (v35) {
          break;
        }
        v27 += 2;
        if (v27 == v28) {
          goto LABEL_30;
        }
      }
      if (v2 != nullptr) {
        v36 = *(_QWORD*)(*((_QWORD*)v2 + 3) + 16 * v25);
        if (v36 != 0) {
          LegionGambit_e4c790((void*)(&v108_.v108), v107, v36, 0),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          v37 = *(_QWORD*)(v36 + 120);
          LODWORD(v39) = HIDWORD(v108_.v108);
          LODWORD(v38) = v108_.v108;
          v40 = *(_QWORD**)(v37 + 8);
          *(_QWORD*)(v37 + 120) = 0;
          *(_DWORD*)(v37 + 116) = 0;
          *(_QWORD*)(v37 + 40) = 0;
          *(_QWORD*)(v37 + 80) = 0;
          *(_QWORD*)(v37 + 88) = 0;
          *(_QWORD*)(v37 + 24) = __PAIR64__(LODWORD(v39), LODWORD(v38));
          *(_QWORD*)(v37 + 16) = __PAIR64__(LODWORD(v39), LODWORD(v38));
          GameRoutine_e3f8b0_alt1(v40, v38, v39),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
    LABEL_30:
      v6 = v107;
      ++v25;
    } while (v25 != v106);
  }
  v44 = *((unsigned __int8**)v6 + 29);
  v43 = *((unsigned __int8**)v6 + 30);
  v104 = v43;
  while (v44 != v43) {
    v45 = *v44;
    v46 = (v45 & 1) == 0;
    v47 = v45 >> 1;
    if (v46) {
      v48 = (__int64)(v44 + 1);
    }
    else {
      v48 = *((_QWORD*)v44 + 2);
    }
    if (v46) {
      v49 = v47;
    }
    else {
      v49 = *((_QWORD*)v44 + 1);
    }
    v50 = CombatLegionGroup_e58ae0(
        *(_QWORD*)(*(_QWORD*)v6 + 8LL * (((v6[22] - 1) & 0xFFFFFFFD) == 0) +
                   16),
        v48, v49),
    v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v50 >= 1) {
      v51 = 0;
      v105 = (unsigned int)v50;
      do {
        v52 = *v44;
        v53 = *(_QWORD*)(*(_QWORD*)v6 +
                         8LL * (((v6[22] - 1) & 0xFFFFFFFD) == 0) + 16);
        v54 = (v52 & 1) == 0;
        v55 = v52 >> 1;
        if (v54) {
          v56 = (__int64)(v44 + 1);
        }
        else {
          v56 = *((_QWORD*)v44 + 2);
        }
        if (v54) {
          v57 = v55;
        }
        else {
          v57 = *((_QWORD*)v44 + 1);
        }
        v58 = *(unsigned __int8***)(v53 + 16);
        v59 = *(unsigned __int8***)(v53 + 24);
        if (v58 == v59) {
          goto LABEL_66;
        }
        while (1) {
          v61 = *v58;
          v60 = (__int64)v58[1];
          if (v60 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v60 + 8), 1u,
                                      memory_order_relaxed);
          }
          v62 = *v61;
          v63 = *((_QWORD*)v61 + 1);
          if ((v62 & 1) == 0) {
            v63 = v62 >> 1;
          }
          if (v57 != v63) {
            v66 = false;
            if (v60 == 0) {
              goto LABEL_89;
            }
          LABEL_87:
            if (atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              std___1___shared_weak_count___release_weak(v60),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            goto LABEL_89;
          }
          if ((v62 & 1) != 0) {
            v64 = *((_QWORD*)v61 + 2);
          }
          else {
            v64 = (__int64)(v61 + 1);
          }
          v65 = memcmp(v56, v64, v57),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v0", "=w"));
          v66 = v65 == 0;
          if (v65 == 0) {
            v1 = (__int64)v61;
          }
          if (v60 != 0) {
            goto LABEL_87;
          }
        LABEL_89:
          if (v66) {
            break;
          }
          v58 += 2;
          if (v58 == v59) {
            goto LABEL_66;
          }
        }
        if (v1 != 0) {
          v67 = *(_QWORD*)(*(_QWORD*)(v1 + 24) + 16 * v51);
          if (v67 != 0) {
            v68 = *(_QWORD*)(v67 + 136);
            v69 = *(_QWORD*)(v67 + 144);
            if (v69 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 8), 1u,
                                        memory_order_relaxed);
              v70 = *(__int64**)(v68 + 40);
              v71 = *((_DWORD*)v70 + 5);
              *((_DWORD*)v70 + 5) = v71 | 2;
              if (v71 != (v71 | 2)) {
                v72 = *v70;
                v73 = *(_QWORD*)(v72 + 8);
                if (v73 != 0) {
                  v74 = *(_QWORD*)(v72 + 16);
                  v75 = *(_QWORD*)(v73 + 8) == -1 || v74 == 0;
                  if (!v75 && *(_QWORD*)(v73 + 8) != -1 &&
                      (*(_BYTE*)(v72 + 61) & 1) == 0 &&
                      *(_DWORD*)(v72 + 64) != 1 &&
                      (*(_BYTE*)(v74 + 342) & 1) != 0) {
                    game_character_1084940(v74, 0, 0x0.0p+0f),
                        v89 = COERCE_AS(__typeof__(v89),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
                    *(_BYTE*)(*(_QWORD*)(v74 + 8) + 289LL) = 0;
                  }
                }
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69),
                    v89 = COERCE_AS(__typeof__(v89),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                std___1___shared_weak_count___release_weak(v69),
                    v89 = COERCE_AS(__typeof__(v89),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
            }
            else {
              v76 = *(__int64**)(v68 + 40);
              v77 = *((_DWORD*)v76 + 5);
              *((_DWORD*)v76 + 5) = v77 | 2;
              if (v77 != (v77 | 2)) {
                v78 = *v76;
                v79 = *(_QWORD*)(v78 + 8);
                if (v79 != 0) {
                  v80 = *(_QWORD*)(v78 + 16);
                  v81 = *(_QWORD*)(v79 + 8) == -1 || v80 == 0;
                  if (!v81 && *(_QWORD*)(v79 + 8) != -1 &&
                      (*(_BYTE*)(v78 + 61) & 1) == 0 &&
                      *(_DWORD*)(v78 + 64) != 1 &&
                      (*(_BYTE*)(v80 + 342) & 1) != 0) {
                    game_character_1084940(v80, 0, 0x0.0p+0f),
                        v89 = COERCE_AS(__typeof__(v89),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
                    *(_BYTE*)(*(_QWORD*)(v80 + 8) + 289LL) = 0;
                  }
                }
              }
            }
          }
        }
      LABEL_66:
        v6 = v107;
        ++v51;
      } while (v51 != v105);
    }
    v43 = v104;
    v44 += 24;
  }
  v82 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v6 +
                              8LL * (((v6[22] - 1) & 0xFFFFFFFD) == 0) + 16) +
                   112LL);
  if (v82 == 0) {
    goto LABEL_120;
  }
  if (v82 == 1) {
    v82 = 1;
  LABEL_120:
    v83 = *GameData_212d448[0] + 24LL * v82;
    v84 = *(_QWORD*)(v83 + 32);
    if (v84 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v84 + 16), 1u,
                                memory_order_relaxed);
      v85 = *(_QWORD*)(v83 + 40);
      v86 = *(_QWORD*)(v84 + 8) == -1 || v85 == 0;
      if (v86 || (v87 = *(_QWORD*)(v85 + 80)) == 0 ||
          (*(_QWORD*)(v87 + 8) != -1 ? (v88 = *(_QWORD*)(v85 + 88) == 0)
                                     : (v88 = true),
           v88 || *(_QWORD*)(v84 + 8) == -1)) {
        std___1___shared_weak_count___release_weak(v84),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        std___1___shared_weak_count___release_weak(v84),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v90 = *(_QWORD*)(v85 + 80);
        if (v90 != 0) {
          v91 = *(_QWORD*)(v85 + 88);
          if (*(_QWORD*)(v90 + 8) != -1 && v91 != 0) {
            v93 = *(_QWORD*)(v91 + 72);
            if (v93 != 0) {
              *(float*)&v89 = CharacterAnimator_1079580(
                  v93, *(_DWORD*)(v93 + 112), -0x1.0000000000000p+0f,
                  -0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            v94 = *(_QWORD*)(v91 + 88);
            if (v94 != 0) {
              v95 = *(_QWORD*)(v94 + 32);
              if (v95 != 0) {
                v96 = *(_QWORD*)(v95 + 8);
                v97 = *(_QWORD*)(v94 + 40);
                if (v96 != -1 && v97 != 0) {
                  v99 = *(_QWORD*)(v97 + 392);
                  v100 = *(_QWORD*)(v97 + 400);
                  if (v100 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v100 + 8), 1u,
                        memory_order_relaxed);
                    if (atomic_fetch_add((atomic_ullong* volatile)(v100 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64, long double))(*(_QWORD*)v100 +
                                                          16LL))(v100, v89),
                          v89 = COERCE_AS(__typeof__(v89),
                                          PSEUDO_REGISTER(__n128, "v0", "=w"));
                      std___1___shared_weak_count___release_weak(v100),
                          v89 = COERCE_AS(__typeof__(v89),
                                          PSEUDO_REGISTER(__n128, "v0", "=w"));
                    }
                  }
                  v101 = GameRoutine_10adb80_alt1((_DWORD*)(v99 + 1432),
                                                  GameData_1abbaec_alt1),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
                  if ((v101 & 0x80000000) == 0) {
                    CharacterFacialController_10b2280(v94, v101, 0x0.0p+0f),
                        v89 = COERCE_AS(__typeof__(v89),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((snd_fnd_WeakHandle_isValid((__int64*)v6 + 19) & 1) != 0) {
    v102 = snd_fnd_WeakHandle_get((__int64)(v6 + 38)),
    v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v0", "=w"));
    snd_Fade_Fade_10c910((__int64)&v108_.v108, 1000),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v0", "=w"));
    (*(void (**)(__int64, __int64*, _QWORD, double))(
        *(_QWORD*)(v102 - 5592) + 248LL))(v102 - 5592, &v108_.v108, 0,
                                          0x0.0p+0),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v0", "=w"));
    snd_Fade_Destroy_Fade(&v108_.v108),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  result = *((_QWORD*)v6 + 14);
  if (result != 0) {
    return GameRoutine_e5ccc0_alt1(result);
  }
  return result;
}

__int64 GameHr_e51940(__int64 a1, __int64 a2)
{
  unsigned __int8* v2;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 result;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  bool v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int8** v19;
  unsigned __int8** v20;
  __int64 v21;
  unsigned __int8* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _BOOL4 v26;
  __int64 v27;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;

  v4 = a1 + 25;
  v30 = a1 + 25;
  v5 = *(_QWORD*)(**(_QWORD**)(a1 + 48) +
                  8LL * (((*(_DWORD*)(*(_QWORD*)(a1 + 48) + 88LL) - 1) &
                          0xFFFFFFFD) == 0) +
                  16);
  v6 = *(unsigned __int8*)(a1 + 24);
  v7 = (v6 & 1) == 0;
  v8 = v6 >> 1;
  if (v7) {
    v9 = v4;
  }
  else {
    v9 = *(_QWORD*)(a1 + 40);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *(_QWORD*)(a1 + 32);
  }
  result = CombatLegionGroup_e58ae0(v5, v9, v10);
  if ((int)result >= 1) {
    v12 = 0;
    v29 = (unsigned int)result;
    do {
      v13 = *(unsigned __int8*)(a1 + 24);
      v14 = *(_QWORD*)(**(_QWORD**)(a1 + 48) +
                       8LL * (((*(_DWORD*)(*(_QWORD*)(a1 + 48) + 88LL) - 1) &
                               0xFFFFFFFD) == 0) +
                       16);
      v15 = (v13 & 1) == 0;
      v16 = v13 >> 1;
      if (v15) {
        v17 = v30;
      }
      else {
        v17 = *(_QWORD*)(a1 + 40);
      }
      if (v15) {
        v18 = v16;
      }
      else {
        v18 = *(_QWORD*)(a1 + 32);
      }
      v19 = *(unsigned __int8***)(v14 + 16);
      v20 = *(unsigned __int8***)(v14 + 24);
      if (v19 == v20) {
        goto LABEL_9;
      }
      while (1) {
        v22 = *v19;
        v21 = (__int64)v19[1];
        if (v21 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                    memory_order_relaxed);
        }
        v23 = *v22;
        v24 = *((_QWORD*)v22 + 1);
        if ((v23 & 1) == 0) {
          v24 = v23 >> 1;
        }
        if (v18 != v24) {
          v26 = false;
          if (v21 == 0) {
            goto LABEL_32;
          }
        LABEL_30:
          if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
            result = std___1___shared_weak_count___release_weak(v21);
          }
          goto LABEL_32;
        }
        if ((v23 & 1) != 0) {
          v25 = *((_QWORD*)v22 + 2);
        }
        else {
          v25 = (__int64)(v22 + 1);
        }
        result = memcmp(v17, v25, v18);
        v26 = result == 0;
        if ((_DWORD)result == 0) {
          v2 = v22;
        }
        if (v21 != 0) {
          goto LABEL_30;
        }
      LABEL_32:
        if (v26) {
          break;
        }
        v19 += 2;
        if (v19 == v20) {
          goto LABEL_9;
        }
      }
      if (v2 != nullptr && *(_QWORD*)(*((_QWORD*)v2 + 3) + 16 * v12) != 0) {
        v32 = *(_QWORD*)(*((_QWORD*)v2 + 3) + 16 * v12);
        v31 = v12;
        v27 = *(_QWORD*)(a2 + 32);
        if (v27 == 0) {
          GameRoutine_60a310_alt1();
        }
        result = (*(__int64 (**)(__int64, __int64*, int*))(
            *(_QWORD*)v27 + 48LL))(v27, &v32, &v31);
      }
    LABEL_9:
      ++v12;
    } while (v12 != v29);
  }
  return result;
}

_QWORD* GameHr_e67f20(_QWORD* result, __int64* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64* v11;
  __int64* v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  char* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v3 = result;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)GameRoutine_60a270(result, a2[2], a2[1]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    result[1] = a2[1];
    result[2] = v5;
    *result = v4;
  }
  if ((a2[3] & 1) != 0) {
    result = (_QWORD*)GameRoutine_60a270(v3 + 3, a2[5], a2[4]);
  }
  else {
    v6 = a2[3];
    v7 = a2[5];
    v3[4] = a2[4];
    v3[5] = v7;
    v3[3] = v6;
  }
  v8 = a2[6];
  v9 = a2[7];
  v10 = *((_DWORD*)a2 + 16);
  v3[9] = 0;
  v3[10] = 0;
  v3[11] = 0;
  *((_DWORD*)v3 + 16) = v10;
  v3[6] = v8;
  v3[7] = v9;
  v11 = (__int64*)a2[9];
  v12 = (__int64*)a2[10];
  v13 = (_QWORD*)GameData_212bf68;
  v14 = (char*)v12 - (char*)v11;
  if (v12 != v11) {
    if ((unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * (v14 >> 3)) >=
        0x2E8BA2E8BA2E8BBLL) {
      GameRoutine_e67c30(result);
    }
    result = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68,
                                         (char*)v12 - (char*)v11, 16, 0);
    v3[9] = result;
    v3[10] = result;
    v3[11] = (char*)result + v14;
    do {
      v15 = GameRoutine_e67b30(result, v11);
      v11 += 11;
      result = v15 + 11;
    } while (v11 != v12);
    v3[10] = result;
  }
  if ((a2[12] & 1) != 0) {
    result = (_QWORD*)GameRoutine_60a270(v3 + 12, a2[14], a2[13]);
  }
  else {
    v16 = a2[12];
    v17 = a2[14];
    v3[13] = a2[13];
    v3[14] = v17;
    v3[12] = v16;
  }
  v3[16] = 0;
  v3[17] = 0;
  v3[15] = 0;
  v18 = (char*)a2[15];
  v19 = (char*)a2[16];
  v20 = v19 - v18;
  if (v19 != v18) {
    if (0xAAAAAAAAAAAAAAABLL * (v20 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_64aa00(result);
    }
    result = (_QWORD*)GameRoutine_651b90(*v13, v19 - v18, 16, 0);
    v21 = result;
    v3[15] = result;
    v3[16] = result;
    v3[17] = (char*)result + v20;
    do {
      if ((*v18 & 1) != 0) {
        result = (_QWORD*)GameRoutine_60a270(v21, *((_QWORD*)v18 + 2),
                                             *((_QWORD*)v18 + 1));
      }
      else {
        v22 = *(_QWORD*)v18;
        v23 = *((_QWORD*)v18 + 2);
        v21[1] = *((_QWORD*)v18 + 1);
        v21[2] = v23;
        *v21 = v22;
      }
      v18 += 24;
      v21 += 3;
    } while (v18 != v19);
    v3[16] = v21;
  }
  v24 = a2[19];
  v3[18] = a2[18];
  v3[19] = v24;
  v3[20] = a2[20];
  return result;
}

__int64 GameHr_e69130(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;

  if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
    result = GameRoutine_17c4450(GameData_22197d8, *(_QWORD*)(result + 176));
    v1 = GameData_22190b8;
    if (GameData_22190b8 != 0) {
      v2 = *(_QWORD*)(GameData_22190b8 + 48);
      v3 = *(_QWORD*)(GameData_22190b8 + 56);
      v4 = ((v3 - v2) << 7) - 1;
      if (v3 == v2) {
        v4 = 0;
      }
      v5 =
          *(_QWORD*)(GameData_22190b8 + 80) + *(_QWORD*)(GameData_22190b8 + 72);
      if (v4 == v5) {
        GameRoutine_17c89c0(GameData_22190b8 + 40);
        v2 = *(_QWORD*)(v1 + 48);
        v5 = *(_QWORD*)(v1 + 80) + *(_QWORD*)(v1 + 72);
      }
      *(_DWORD*)(*(_QWORD*)(v2 + 8 * (v5 >> 10)) + 4 * (v5 & 0x3FF)) =
          *(_DWORD*)(v1 + 88);
      ++*(_QWORD*)(v1 + 80);
      v8 = 0x100000002LL;
      result = GameRoutine_17c8620(v1, &v8, 0, 0);
      *(_DWORD*)(v1 + 88) = 3;
    }
  }
  if ((*(_BYTE*)(GameData_22190c0 + 12) & 1) == 0) {
    *(_BYTE*)(GameData_22190c0 + 12) = 1;
    v6 = GameData_2219098;
    if ((*(_BYTE*)(GameData_2219098 + 10) & 1) == 0) {
      result = GameRoutine_ec1530(GameData_21f4cc0);
      if ((result & 1) == 0) {
        v7 = *(_DWORD*)(v6 + 24);
        *(_DWORD*)(v6 + 24) = v7 + 1;
        if (v7 == 0) {
          result = (**(__int64 (***)(__int64))(v6 + 16))(v6 + 16);
        }
        return GameRoutine_867df0(result);
      }
    }
  }
  return result;
}

__int64 GameHr_e81b70(__int64 a1)
{
  __int64 result;

  if (*(_BYTE*)(GameData_21c9710 + 80) == 1) {
    *(_BYTE*)(GameData_21c9710 + 80) = 0;
  }
  result = *(_QWORD*)(a1 + 208);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
  }
  return result;
}

_QWORD* GameHr_e92660(__int64 a1, _BYTE** a2, const char* a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  _BYTE* v6;
  __int64 v10;
  __int64* v11;
  const char* v12;
  __int64 v13;
  char* v14;
  _QWORD* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v20[4];
    int v21;
    int v22;
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
  } v20_;

  v6 = *a2;
  if (*a2 != nullptr) {
    v10 = a1;
    v11 = msg_MessageManager_instance__ptr[0];
    if (a3 != nullptr) {
      v12 = a3;
    }
    else {
      v12 = *msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020_alt1(*msg_MessageManager_instance__ptr[0] + 14704, v12);
    v13 = *v11;
    v20_.v23 = -1;
    v20_.v24 = -1;
    v20_.v25 = -1;
    v20_.v26 = -1;
    v20_.v27 = -1;
    v20_.v28 = -1;
    v20_.v29 = -1;
    v20_.v30 = -1;
    v20_.v31 = -1;
    v20_.v32 = -1;
    v20_.v33 = -1;
    v20_.v34 = -1;
    v20_.v20[0] = GameData_212e348 + 2;
    v20_.v20[1] = 0xFFFF0001FFFF0000LL;
    v20_.v20[2] = 0xFFFF0004FFFF0002LL;
    v20_.v20[3] = 0xFFFF0006FFFF0005LL;
    v20_.v35 = 8;
    v20_.v21 = -65529;
    v20_.v22 = -65528;
    v14 = GameRoutine_a4dbe0_alt1(v13, v6, 0);
    a1 = v10;
  }
  else {
    v14 = nullptr;
  }
  v20_.v20[0] = v14;
  v15 = (_QWORD*)game_menu_Dialog__CreateBindDirect_game_menu_ItemDialog(
      a1, v20_.v20);
  if (v15 != nullptr) {
    v16 = (__int64*)fw_memory_g_heap_manager_ptr;
    v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         192, 16, 0);
    GameRoutine_16477d0_alt1(v17, "MID_Sys_Yes", a4, a6);
    BasicMenuCursor_16e0c00(v15, v17);
    v18 = fw_memory_HeapManager_Allocate(*v16, 192, 16, 0);
    GameRoutine_16477d0_alt1(v18, "MID_Sys_No", a5, a6);
    BasicMenuCursor_16e0c00(v15, v18);
  }
  return v15;
}

__int64 GameHr_e94ce0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  char v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];

  if (result == 0) {
    return result;
  }
  if (*(_QWORD*)(result + 272) == 0) {
    return 0;
  }
  if (GameData_21caab0 != 0) {
    v1 = *(_QWORD*)(GameData_21caab0 + 96);
    if (v1 != 0 && *(_QWORD*)(*(_QWORD*)(result + 24) + 1672LL) ==
                       *(_QWORD*)(*(_QWORD*)(v1 + 24) + 1672LL)) {
      return 0;
    }
    if (*(_DWORD*)(GameData_21caab0 + 60) == 2) {
      return 0;
    }
  }
  if (*(_QWORD*)(result + 40) != 0) {
    v2 = result;
    v3 = GameRoutine_1a09d30(*(_QWORD*)(result + 40), "Max");
    result = v2;
    if (v3 == 0) {
      v16[1] = &GameData_1a99856;
      v16[0] = GameRoutine_7a86e0(&GameData_1a99856);
      if (GameData_21caab0 == 0 ||
          (v4 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v16)) ==
              0) {
        result = v2;
        goto LABEL_16;
      }
      v5 = *(_DWORD*)(v4 + 32);
      result = v2;
      if (v5 > 0) {
        return 0;
      }
    }
  }
LABEL_16:
  if (GameData_21caab0 != 0 && *(_DWORD*)(GameData_21caab0 + 60) == 1) {
    v6 = result;
    v7 = GameRoutine_e94b60();
    result = v6;
    if ((v7 & 1) == 0) {
      return 0;
    }
  }
  if ((*(_BYTE*)(result + 49) & 0x10) == 0) {
    return 1;
  }
  v8 = *(_QWORD**)(GameData_21ca310 + 56);
  if (v8 == nullptr) {
    return 0;
  }
  v9 = 250;
  while (1) {
    v10 = v8[55];
    if (v10 != 0) {
      v11 = *(unsigned __int8*)(v10 + 16);
      if (v11 != 9 && v8[49] == result) {
        break;
      }
    }
    v12 = v8[333];
    if (v12 != 0) {
      v11 = *(unsigned __int8*)(v12 + 16);
      if (v11 != 9 && v8[327] == result) {
        break;
      }
    }
    v13 = v8[611];
    if (v13 != 0) {
      v11 = *(unsigned __int8*)(v13 + 16);
      if (v11 != 9 && v8[605] == result) {
        break;
      }
    }
    v14 = v8[889];
    if (v14 != 0) {
      v11 = *(unsigned __int8*)(v14 + 16);
      if (v11 != 9 && v8[883] == result) {
        break;
      }
    }
    v15 = v8[1167];
    if (v15 != 0) {
      v11 = *(unsigned __int8*)(v15 + 16);
      if (v11 != 9 && v8[1161] == result) {
        break;
      }
    }
    v8 += 1390;
    v9 -= 5;
    if (v9 == 0) {
      return 0;
    }
  }
  result = 1;
  if (((1 << v11) & 0xF1) == 0) {
    return 0;
  }
  return result;
}

__int64 GameHr_e96270(_QWORD* a1, int a2)
{
  __int64 v3;
  __int64 v4;

  switch (a2) {
  case 12:
    v4 = a1[42];
    if (v4 != 0) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 64LL))(v4, 1);
    }
    (*(void (**)(_QWORD*))(*a1 + 568LL))(a1);
    break;
  case 11:
    (*(void (**)(_QWORD*))(*a1 + 560LL))(a1);
    break;
  case 10:
    v3 = a1[42];
    if (v3 != 0) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 64LL))(v3, 1);
    }
    break;
  default:
    (*(void (**)(_QWORD*))(*a1 + 552LL))(a1);
    return GameRoutine_155e830(*(_QWORD*)(a1[165] + 8LL) + 848LL, 0);
  }
  return GameRoutine_155e830(*(_QWORD*)(a1[165] + 8LL) + 848LL, 0);
}

__int64 GameHr_e98d00(__int64 result)
{
  int v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  unsigned int v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;

  v1 = *(_DWORD*)(result + 400);
  v2 = *(_QWORD*)(GameData_221bea8 + 312);
  v3 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(GameData_221bea8 + 320) - v2) >> 3);
  if (v3 > v1) {
    v4 = result;
    if (*(_QWORD*)GameData_212c7b0[0] != 0) {
      v5 = v2 + 24LL * v1;
      if ((*(_BYTE*)v5 & 1) != 0) {
        v6 = *(_BYTE**)(v5 + 16);
      }
      else {
        v6 = (_BYTE*)(v5 + 1);
      }
      if (v6 != nullptr && *v6 != 0) {
        v7 = GameData_21caab0;
        if (GameData_21caab0 != 0) {
          v7 = *(unsigned __int8*)(GameData_21caab0 + 15);
        }
        v8 = *(_QWORD*)GameData_212c7b0[0] + 136LL * v7;
        v9 = *(__int64**)(v8 + 72);
        v10 = *(__int64**)(v8 + 80);
        while (v9 != v10) {
          v11 = *v9;
          result = *(_QWORD*)(*(_QWORD*)*v9 + 272LL);
          if (result != 0) {
            result = GameRoutine_1a09d30(result, v6);
            if ((_DWORD)result == 0) {
              GameRoutine_1257620(v11, 0);
              result = GameRoutine_187d070(v4, v11);
              v1 = *(_DWORD*)(v4 + 400);
              break;
            }
          }
          ++v9;
        }
      }
      LODWORD(v3) = v1 + 1;
    }
    *(_DWORD*)(v4 + 400) = v3;
  }
  return result;
}

__int64 GameHr_e98e00(__int64 result)
{
  if (0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD*)(GameData_221bea8 + 320) -
                                        *(_QWORD*)(GameData_221bea8 + 312)) >>
                              3) >
      *(int*)(result + 400)) {
    *(_DWORD*)(result + 152) = 2;
  }
  return result;
}

__int64 GameHr_e99120(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(GameData_221bea8 + 368);
  if (result != 0) {
    v3 = a1;
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result + 48LL))(result,
                                                                         &v3);
  }
  return result;
}

__int64 GameHr_e99170(__int64 a1)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 208);
  return GameRoutine_f6dc60_alt1(a1, &v2);
}

__int64 GameHr_e991a0(__int64 a1)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 208);
  return GameRoutine_f6dde0_alt1(a1, &v2);
}

_QWORD* GameHr_e99210(_QWORD* result)
{
  _QWORD* v1;

  v1 = *(_QWORD**)(*(_QWORD*)(GameData_221bea8 + 288) +
                   176LL * *((int*)result + 101) + 160);
  if (v1 != nullptr) {
    return X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                  PSEUDO_X8, _QWORD*, _QWORD*))(*v1 + 48LL))(
                                  (void*)v1, v1, result + 51));
  }
  return result;
}

unsigned __int64 GameHr_e99900(_QWORD* a1)
{
  __int64 v2;
  unsigned __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  if ((*(_BYTE*)(*a1 + 88LL) & 1) != 0) {
    v2 = *(_QWORD*)(*a1 + 104LL);
  }
  else {
    v2 = *a1 + 89LL;
  }
  result = GameRoutine_7a86e0(v2);
  if (result != 0) {
    v4 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v4 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
      v6 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v7 = result;
        if (result >= v4) {
          v7 = result % v4;
        }
      }
      else {
        v7 = v6 & result;
      }
      v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v11 = v9[1];
              if (v11 == result) {
                if (v9[2] == result) {
                  goto LABEL_29;
                }
              }
              else if ((v11 & v6) != v7) {
                return result;
              }
              v9 = (_QWORD*)*v9;
              if (v9 == nullptr) {
                return result;
              }
            }
          }
          do {
            v10 = v9[1];
            if (v10 == result) {
              if (v9[2] == result) {
              LABEL_29:
                v12 = v9[3];
                if (v12 != 0) {
                  a1[5] = v12;
                }
                return result;
              }
            }
            else {
              if (v10 >= v4) {
                v10 %= v4;
              }
              if (v10 != v7) {
                return result;
              }
            }
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
