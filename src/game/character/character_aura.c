#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10f59e0(_QWORD);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_14a16a0(_QWORD, _QWORD, float);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_22365f0;
extern int GameData_22365e8;
void game_character_CharacterAura_Cleanup_lambda0_Invoke(__int64 a1,
                                                         __int64 a2);
void game_character_CharacterAura_Fade_lambda0_Invoke_alt1(
    __int64 a1,
    __int64 a2) __asm__("game_character_CharacterAura_Fade_lambda0_Invoke");
_QWORD* Situation_767300(_QWORD*, _QWORD*);
__int64* Manager_bc6460(_QWORD*, float32x4_t*, char);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 GameRoutine_109f1e0(__int64, _BYTE*);
__int64 GameRoutine_10f5420(__int64, __int64);
__int64 GameRoutine_10f8960(_BYTE*, __int64**);
__int64 GameRoutine_10f8d80(__int64 result);
__int64 GameRoutine_98ed40(__int64);
__int64 GameRoutine_bd16c0(_QWORD*, __int64**);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
__n128 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__n128 GameRoutine_14a1390_alt1(_QWORD*, char) __asm__("GameRoutine_14a1390");
bool GameRoutine_108e940(_BYTE*);
extern _QWORD GameData_212d168;
extern _UNKNOWN* GameData_212d4a8;
extern _UNKNOWN GameData_22365e0;
extern __int128 GameData_1a837f0;
extern __int64 (*GameData_200d938[])();
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 GameData_2131678;
extern __int64 GameData_22365d0;
extern __int64 GameData_22365d8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
extern int* GameData_212d4a0;
void __attribute__((noreturn)) String_60a250(const char*);
__int64 CharacterAura_10f4cc0(__int64 a1);
void game_character_CharacterAura_ChangeViewMode_lambda0_Invoke_alt1(
    __int64 a1, __int64 a2, __n128 a3) __asm__("game_character_CharacterAura_"
                                               "ChangeViewMode_lambda0_Invoke");
_QWORD* Situation_767300_alt1(__int64*, _QWORD*) __asm__("Situation_767300");
__int64* Manager_bc6460_alt1(_QWORD*, __int64, char) __asm__("Manager_bc6460");
unsigned __int128 Manager_bc6460_alt1_pair(_QWORD*, __int64,
                                           char) __asm__("Manager_bc6460");
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_98ed40(__int64);
__int64 GameRoutine_14a1390_alt2(__int64*, char) __asm__("GameRoutine_14a1390");
__int64 GameRoutine_14a16a0_alt1(__int64*, char,
                                 float) __asm__("GameRoutine_14a16a0");
__int64 game_109f1e0(__int64, const char*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameHr_108e940(const char*);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_10f59e0_alt1(_QWORD*) __asm__("GameRoutine_10f59e0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_character_CharacterAura_ChangeViewMode_lambda0_Invoke(__int64 a1,
                                                                __int64 a2);
__int64 game_character_CharacterAura_Fade_lambda0_Invoke(__int64 result,
                                                         __int64 a2);

__int64 CharacterAura_10f4cc0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  _BYTE* v8;
  unsigned __int64 v9;
  _BYTE* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  _BYTE* v16;
  unsigned __int64 v17;
  _BYTE* v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  bool v22;
  unsigned __int64 v23;
  _BYTE* v24;
  unsigned __int64 v25;
  _BYTE* v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  bool v30;
  unsigned __int64 v31;
  _BYTE* v32;
  unsigned __int64 v33;
  _BYTE* v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  bool v38;
  unsigned __int64 v39;
  _BYTE* v40;
  unsigned __int64 v41;
  _BYTE* v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  bool v46;
  unsigned __int64 v47;
  _BYTE* v48;
  unsigned __int64 v49;
  _BYTE* v50;
  __int64 v51;
  __int64 result;
  char v53;
  __int64 v54;
  char v55;
  unsigned __int64 v56;
  bool v57;
  unsigned __int64 v58;
  _BYTE* v59;
  unsigned __int64 v60;
  _BYTE* v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  bool v65;
  unsigned __int64 v66;
  _BYTE* v67;
  unsigned __int64 v68;
  _BYTE* v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  bool v73;
  unsigned __int64 v74;
  _BYTE* v75;
  unsigned __int64 v76;
  _BYTE* v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  bool v81;
  unsigned __int64 v82;
  _BYTE* v83;
  unsigned __int64 v84;
  _BYTE* v85;
  __int64 v86;
  __int64* v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  char* v91;
  char* v92;
  unsigned __int64 v93;
  __int64 v94;
  char* v95;
  __int64 v96;
  int v97;
  int* v98;
  int v99;
  __int16 v101;
  __int64 v102;
  struct {
    __int64 (**v103)();
    __int16 v104;
    char gap10_[22];
    __int64 (***v105)();
  } v103_;

  v2 = *(_QWORD*)(a1 + 392);
  v1 = *(_QWORD*)(a1 + 400);
  if (v1 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak(v1);
    }
  }
  v4 = *(_QWORD*)(a1 + 408);
  if (v4 != 0) {
    v5 = *(unsigned __int8*)(v2 + 184);
    v6 = (v5 & 1) == 0;
    v7 = v5 >> 1;
    if (v6) {
      v8 = (_BYTE*)(v2 + 185);
    }
    else {
      v8 = *(_BYTE**)(v2 + 200);
    }
    if (!v6) {
      v7 = *(_QWORD*)(v2 + 192);
    }
    if (v7 != 0) {
      v9 = v7;
      do {
        if (v9 == 0) {
          goto LABEL_17;
        }
        v10 = &v8[v9--];
      } while (*(v10 - 1) != 47);
      if (v9 != -1) {
        if (v9 >= v7) {
          goto LABEL_183;
        }
        v8 += v9 + 1;
      }
    }
  LABEL_17:
    v11 = GameRoutine_10f8960(v8, (__int64**)(v2 + 11656));
    LOBYTE(v4) = GameRoutine_10f5420(v4, v11);
  }
  v12 = *(_QWORD*)(a1 + 416);
  if (v12 != 0) {
    v13 = *(unsigned __int8*)(v2 + 256);
    v14 = (v13 & 1) == 0;
    v15 = v13 >> 1;
    if (v14) {
      v16 = (_BYTE*)(v2 + 257);
    }
    else {
      v16 = *(_BYTE**)(v2 + 272);
    }
    if (!v14) {
      v15 = *(_QWORD*)(v2 + 264);
    }
    if (v15 != 0) {
      v17 = v15;
      do {
        if (v17 == 0) {
          goto LABEL_31;
        }
        v18 = &v16[v17--];
      } while (*(v18 - 1) != 47);
      if (v17 != -1) {
        if (v17 >= v15) {
          goto LABEL_183;
        }
        v16 += v17 + 1;
      }
    }
  LABEL_31:
    v19 = GameRoutine_10f8960(v16, (__int64**)(v2 + 11656));
    LOBYTE(v12) = GameRoutine_10f5420(v12, v19);
  }
  v20 = *(_QWORD*)(a1 + 424);
  if (v20 != 0) {
    v21 = *(unsigned __int8*)(v2 + 328);
    v22 = (v21 & 1) == 0;
    v23 = v21 >> 1;
    if (v22) {
      v24 = (_BYTE*)(v2 + 329);
    }
    else {
      v24 = *(_BYTE**)(v2 + 344);
    }
    if (!v22) {
      v23 = *(_QWORD*)(v2 + 336);
    }
    if (v23 != 0) {
      v25 = v23;
      do {
        if (v25 == 0) {
          goto LABEL_45;
        }
        v26 = &v24[v25--];
      } while (*(v26 - 1) != 47);
      if (v25 != -1) {
        if (v25 >= v23) {
          goto LABEL_183;
        }
        v24 += v25 + 1;
      }
    }
  LABEL_45:
    v27 = GameRoutine_10f8960(v24, (__int64**)(v2 + 11656));
    LOBYTE(v20) = GameRoutine_10f5420(v20, v27);
  }
  v28 = *(_QWORD*)(a1 + 432);
  if (v28 != 0) {
    v29 = *(unsigned __int8*)(v2 + 400);
    v30 = (v29 & 1) == 0;
    v31 = v29 >> 1;
    if (v30) {
      v32 = (_BYTE*)(v2 + 401);
    }
    else {
      v32 = *(_BYTE**)(v2 + 416);
    }
    if (!v30) {
      v31 = *(_QWORD*)(v2 + 408);
    }
    if (v31 != 0) {
      v33 = v31;
      do {
        if (v33 == 0) {
          goto LABEL_59;
        }
        v34 = &v32[v33--];
      } while (*(v34 - 1) != 47);
      if (v33 != -1) {
        if (v33 >= v31) {
          goto LABEL_183;
        }
        v32 += v33 + 1;
      }
    }
  LABEL_59:
    v35 = GameRoutine_10f8960(v32, (__int64**)(v2 + 11656));
    LOBYTE(v28) = GameRoutine_10f5420(v28, v35);
  }
  v36 = *(_QWORD*)(a1 + 440);
  if (v36 != 0) {
    v37 = *(unsigned __int8*)(v2 + 472);
    v38 = (v37 & 1) == 0;
    v39 = v37 >> 1;
    if (v38) {
      v40 = (_BYTE*)(v2 + 473);
    }
    else {
      v40 = *(_BYTE**)(v2 + 488);
    }
    if (!v38) {
      v39 = *(_QWORD*)(v2 + 480);
    }
    if (v39 != 0) {
      v41 = v39;
      do {
        if (v41 == 0) {
          goto LABEL_73;
        }
        v42 = &v40[v41--];
      } while (*(v42 - 1) != 47);
      if (v41 != -1) {
        if (v41 >= v39) {
          goto LABEL_183;
        }
        v40 += v41 + 1;
      }
    }
  LABEL_73:
    v43 = GameRoutine_10f8960(v40, (__int64**)(v2 + 11656));
    LOBYTE(v36) = GameRoutine_10f5420(v36, v43);
  }
  v44 = *(_QWORD*)(a1 + 448);
  if (v44 != 0) {
    v45 = *(unsigned __int8*)(v2 + 544);
    v46 = (v45 & 1) == 0;
    v47 = v45 >> 1;
    if (v46) {
      v48 = (_BYTE*)(v2 + 545);
    }
    else {
      v48 = *(_BYTE**)(v2 + 560);
    }
    if (!v46) {
      v47 = *(_QWORD*)(v2 + 552);
    }
    if (v47 != 0) {
      v49 = v47;
      do {
        if (v49 == 0) {
          goto LABEL_87;
        }
        v50 = &v48[v49--];
      } while (*(v50 - 1) != 47);
      if (v49 != -1) {
        if (v49 >= v47) {
          goto LABEL_183;
        }
        v48 += v49 + 1;
      }
    }
  LABEL_87:
    v51 = GameRoutine_10f8960(v48, (__int64**)(v2 + 11656));
    result = GameRoutine_10f5420(v44, v51);
  }
  else {
    result = 0;
  }
  v53 = v4 | v12;
  v54 = *(_QWORD*)(a1 + 472);
  v55 = v53 | v20 | v28 | v36 | result;
  if (v54 != 0) {
    v56 = *(unsigned __int8*)(v2 + 760);
    v57 = (v56 & 1) == 0;
    v58 = v56 >> 1;
    if (v57) {
      v59 = (_BYTE*)(v2 + 761);
    }
    else {
      v59 = *(_BYTE**)(v2 + 776);
    }
    if (!v57) {
      v58 = *(_QWORD*)(v2 + 768);
    }
    if (v58 != 0) {
      v60 = v58;
      do {
        if (v60 == 0) {
          goto LABEL_102;
        }
        v61 = &v59[v60--];
      } while (*(v61 - 1) != 47);
      if (v60 != -1) {
        if (v60 >= v58) {
          goto LABEL_183;
        }
        v59 += v60 + 1;
      }
    }
  LABEL_102:
    v62 = GameRoutine_10f8960(v59, (__int64**)(v2 + 11656));
    result = GameRoutine_10f5420(v54, v62);
    v55 |= result;
  }
  v63 = *(_QWORD*)(a1 + 480);
  if (v63 != 0) {
    v64 = *(unsigned __int8*)(v2 + 832);
    v65 = (v64 & 1) == 0;
    v66 = v64 >> 1;
    if (v65) {
      v67 = (_BYTE*)(v2 + 833);
    }
    else {
      v67 = *(_BYTE**)(v2 + 848);
    }
    if (!v65) {
      v66 = *(_QWORD*)(v2 + 840);
    }
    if (v66 != 0) {
      v68 = v66;
      do {
        if (v68 == 0) {
          goto LABEL_116;
        }
        v69 = &v67[v68--];
      } while (*(v69 - 1) != 47);
      if (v68 != -1) {
        if (v68 >= v66) {
          goto LABEL_183;
        }
        v67 += v68 + 1;
      }
    }
  LABEL_116:
    v70 = GameRoutine_10f8960(v67, (__int64**)(v2 + 11656));
    result = GameRoutine_10f5420(v63, v70);
    v55 |= result;
  }
  v71 = *(_QWORD*)(a1 + 488);
  if (v71 != 0) {
    v72 = *(unsigned __int8*)(v2 + 904);
    v73 = (v72 & 1) == 0;
    v74 = v72 >> 1;
    if (v73) {
      v75 = (_BYTE*)(v2 + 905);
    }
    else {
      v75 = *(_BYTE**)(v2 + 920);
    }
    if (!v73) {
      v74 = *(_QWORD*)(v2 + 912);
    }
    if (v74 != 0) {
      v76 = v74;
      do {
        if (v76 == 0) {
          goto LABEL_130;
        }
        v77 = &v75[v76--];
      } while (*(v77 - 1) != 47);
      if (v76 != -1) {
        if (v76 >= v74) {
          goto LABEL_183;
        }
        v75 += v76 + 1;
      }
    }
  LABEL_130:
    v78 = GameRoutine_10f8960(v75, (__int64**)(v2 + 11656));
    result = GameRoutine_10f5420(v71, v78);
    v55 |= result;
  }
  v79 = *(_QWORD*)(a1 + 496);
  if (v79 != 0) {
    v80 = *(unsigned __int8*)(v2 + 976);
    v81 = (v80 & 1) == 0;
    v82 = v80 >> 1;
    if (v81) {
      v83 = (_BYTE*)(v2 + 977);
    }
    else {
      v83 = *(_BYTE**)(v2 + 992);
    }
    if (!v81) {
      v82 = *(_QWORD*)(v2 + 984);
    }
    if (v82 == 0) {
      goto LABEL_144;
    }
    v84 = v82;
    do {
      if (v84 == 0) {
        goto LABEL_144;
      }
      v85 = &v83[v84--];
    } while (*(v85 - 1) != 47);
    if (v84 == -1) {
      goto LABEL_144;
    }
    if (v84 < v82) {
      v83 += v84 + 1;
    LABEL_144:
      v86 = GameRoutine_10f8960(v83, (__int64**)(v2 + 11656));
      result = GameRoutine_10f5420(v79, v86);
      v55 |= result;
      goto LABEL_145;
    }
  LABEL_183:
    String_60a250("string_view::substr");
  }
LABEL_145:
  v87 = *(__int64**)(v2 + 11656);
  v88 = *(__int64**)(v2 + 11664);
  if (v87 != v88) {
    v89 = *(_QWORD*)(a1 + 408);
    if (v89 != 0) {
    LABEL_147:
      v90 = *v87;
      v91 = *(char**)(v2 + 11680);
      v92 = *(char**)(v2 + 11688);
      if (v91 == v92) {
        goto LABEL_163;
      }
      v93 = v92 - v91 - 8;
      if ((~(_BYTE)v93 & 0x18) != 0) {
        v94 = ((unsigned __int8)((unsigned int)v93 >> 3) + 1) & 3;
        do {
          if (*(_QWORD*)v91 == v90) {
            goto LABEL_163;
          }
          v91 += 8;
          --v94;
        } while (v94 != 0);
      }
      if (v93 < 0x18) {
        goto LABEL_166;
      }
      v91 += 16;
      while (*((_QWORD*)v91 - 2) != v90) {
        if (*((_QWORD*)v91 - 1) == v90) {
          v91 -= 8;
        LABEL_163:
          if (v91 != v92) {
            goto LABEL_164;
          }
        LABEL_166:
          v96 = GameRoutine_10f8d80(v90);
          result = GameRoutine_10f5420(v89, v96);
          goto LABEL_167;
        }
        if (*(_QWORD*)v91 == v90) {
          goto LABEL_163;
        }
        if (*((_QWORD*)v91 + 1) == v90) {
          if (v91 + 8 != v92) {
            goto LABEL_164;
          }
          goto LABEL_166;
        }
        v95 = v91 + 16;
        v91 += 32;
        if (v95 == v92) {
          goto LABEL_166;
        }
      }
      if (v91 - 16 == v92) {
        goto LABEL_166;
      }
    LABEL_164:
      while (1) {
        result = 0;
      LABEL_167:
        ++v87;
        v55 |= result;
        if (v87 == v88) {
          break;
        }
        v89 = *(_QWORD*)(a1 + 408);
        if (v89 != 0) {
          goto LABEL_147;
        }
      }
    }
  }
  if ((v55 & 1) != 0) {
    v97 = *(_DWORD*)(a1 + 340);
    v98 = (int*)GameData_212d168;
    v103_.v105 = &v103_.v103;
    *(_DWORD*)(a1 + 340) = v97 | 0x2000000;
    v99 = *v98;
    v103_.v103 = GameData_200d938;
    if (v99 == 6 || v99 == 1) {
      v101 = 1;
    }
    else {
      v101 = 257;
    }
    v103_.v104 = v101;
    CharacterBuilder_1083e90((_QWORD*)a1, (__int64)&v103_.v103);
    result = (__int64)v103_.v105;
    if (v103_.v105 == &v103_.v103) {
      v102 = 4;
    }
    else {
      if (v103_.v105 == nullptr) {
        return result;
      }
      v102 = 5;
    }
    return ((__int64 (*)(__int64 (***)(void)))(*v103_.v105)[v102])(v103_.v105);
  }
  return result;
}

void game_character_CharacterAura_Cleanup_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 j;
  __int64 v11;
  __int64 v12;
  int v13;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22365f0,
                            memory_order_acquire) &
       1) == 0) {
    v12 = a2;
    v13 = __cxa_guard_acquire_alt1((__int64)&GameData_22365f0);
    a2 = v12;
    if (v13 != 0) {
      GameData_22365e8 = wld_Crc32_alt1(0, "AuraModule", 0xAu);
      __cxa_guard_release_alt1((__int64)&GameData_22365f0);
      a2 = v12;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_22365e8) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          v6 = *(__int64**)(v5 + 112);
          v7 = *(__int64**)(v5 + 120);
          if (v6 != v7) {
            do {
              GameRoutine_14a1390_alt2(v6, 1);
              v6 += 2;
            } while (v6 != v7);
            v6 = *(__int64**)(v5 + 112);
            v7 = *(__int64**)(v5 + 120);
          }
          for (; v7 != v6; v7 -= 2) {
            v8 = *(v7 - 1);
            if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
              std___1___shared_weak_count___release_weak_alt1(v8);
            }
          }
          *(_QWORD*)(v5 + 120) = v6;
          *(_DWORD*)(v5 + 24) = 0;
          GameRoutine_10f59e0_alt1((_QWORD*)(v5 + 32));
          GameRoutine_10f59e0_alt1((_QWORD*)(v5 + 72));
          v9 = *(_QWORD*)(v5 + 112);
          for (j = *(_QWORD*)(v5 + 120); j != v9; j -= 16) {
            v11 = *(_QWORD*)(j - 8);
            if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
              std___1___shared_weak_count___release_weak_alt1(v11);
            }
          }
          *(_QWORD*)(v5 + 120) = v9;
        }
      }
      return;
    }
  }
}

void game_character_CharacterAura_ChangeViewMode_lambda0_Invoke(__int64 a1,
                                                                __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  bool v9;
  int v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  unsigned __int8 explicit;
  int* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  const char* v27;
  const char* v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  unsigned int v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64** v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  int v59;
  __int64 v60;
  int v61;
  struct {
    __int64* v62;
    __int64 v63;
  } v62_;
  struct {
    __int64* v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int128 v70;
    __int64 v71;
    __int64 v72;
  } v64_;

  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22365f0,
                            memory_order_acquire) &
       1) == 0) {
    v56 = a1;
    v57 = a2;
    v58 = __cxa_guard_acquire_alt1((__int64)&GameData_22365f0),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    a2 = v57;
    v59 = v58;
    a1 = v56;
    if (v59 != 0) {
      GameData_22365e8 = wld_Crc32_alt1(0, "AuraModule", 0xAu),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      __cxa_guard_release_alt1((__int64)&GameData_22365f0),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      a2 = v57;
      a1 = v56;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  v3 = v2;
  do {
    if (v3 == *(_QWORD*)(a2 + 504)) {
      return;
    }
    v4 = *(_DWORD*)(v3 - 16);
    v3 -= 16;
    v2 -= 16;
  } while (v4 != GameData_22365e8);
  if (*(_QWORD*)(a2 + 512) != v2) {
    v5 = *(__int64**)(v2 + 8);
    if (v5 != nullptr) {
      if ((*(_BYTE*)(a1 + 8) & 1) == 0) {
        v6 = v5[7];
        if (v6 == v5[12]) {
          v7 = v5[10];
          v8 = v5 + 6;
          v9 = v6 == 0 || v7 == 0;
          if (!v9) {
            v47 = v5[9];
            v48 = v7 - 1;
            if ((v7 & (v7 - 1)) != 0) {
              while (1) {
                v8 = (__int64*)*v8;
                if (v8 == nullptr) {
                  break;
                }
                v49 = *((int*)v8 + 4);
                v50 = v49;
                if (v7 <= v49) {
                  v50 = v49 % v7;
                }
                v51 = *(__int64**)(v47 + 8 * v50);
                if (v51 != nullptr) {
                  do {
                    while (1) {
                      v51 = (__int64*)*v51;
                      if (v51 == nullptr) {
                        goto LABEL_15;
                      }
                      v52 = v51[1];
                      if (v52 == v49) {
                        break;
                      }
                      if (v52 >= v7) {
                        v52 %= v7;
                      }
                      if (v52 != v50) {
                        goto LABEL_15;
                      }
                    }
                  } while (*((_DWORD*)v51 + 4) != (_DWORD)v49);
                  if (*((_DWORD*)v8 + 18) == *((_DWORD*)v51 + 18)) {
                    continue;
                  }
                }
                goto LABEL_15;
              }
            }
            else {
              while (1) {
                v8 = (__int64*)*v8;
                if (v8 == nullptr) {
                  break;
                }
                v53 = *((int*)v8 + 4);
                v54 = *(__int64**)(v47 + 8 * (v48 & v53));
                if (v54 != nullptr) {
                  do {
                    while (1) {
                      v54 = (__int64*)*v54;
                      if (v54 == nullptr) {
                        goto LABEL_15;
                      }
                      v55 = v54[1];
                      if (v55 == v53) {
                        break;
                      }
                      if ((v55 & v48) != (v48 & v53)) {
                        goto LABEL_15;
                      }
                    }
                  } while (*((_DWORD*)v54 + 4) != (_DWORD)v53);
                  if (*((_DWORD*)v8 + 18) == *((_DWORD*)v54 + 18)) {
                    continue;
                  }
                }
                goto LABEL_15;
              }
            }
            return;
          }
          if (*v8 == 0) {
            return;
          }
        }
      }
    LABEL_15:
      v10 = *(unsigned __int8*)(a1 + 9);
      v11 = (__int64*)v5[14];
      v12 = (__int64*)v5[15];
      if (v11 != v12) {
        do {
          GameRoutine_14a1390_alt2(v11, 1),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v11 += 2;
        } while (v11 != v12);
        v11 = (__int64*)v5[14];
        v12 = (__int64*)v5[15];
      }
      for (; v12 != v11; v12 -= 2) {
        v13 = *(v12 - 1);
        if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v13),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v14 = 9;
      v5[15] = (__int64)v11;
      if (v10 != 0) {
        v14 = 4;
      }
      v15 = &v5[v14];
      if (v5[v14 + 3] == 0) {
        return;
      }
      v16 = v5[1];
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4a8,
                                      memory_order_acquire);
      v18 = GameData_212d4a0;
      if ((explicit & 1) == 0) {
        v60 = v16;
        v61 = __cxa_guard_acquire_alt1((__int64)GameData_212d4a8),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v16 = v60;
        if (v61 != 0) {
          *v18 = wld_Crc32_alt1(0, "EffectModule", 0xCu),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          __cxa_guard_release_alt1((__int64)GameData_212d4a8),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v16 = v60;
        }
      }
      v19 = *(_QWORD*)(v16 + 512);
      v20 = v19;
      do {
        if (v20 == *(_QWORD*)(v16 + 504)) {
          goto LABEL_33;
        }
        v21 = *(_DWORD*)(v20 - 16);
        v20 -= 16;
        v19 -= 16;
      } while (v21 != *v18);
      if (*(_QWORD*)(v16 + 512) == v19 ||
          (v22 = *(_QWORD**)(v19 + 8)) == nullptr) {
      LABEL_33:
        v22 = (_QWORD*)GameHr_98ed40(v16),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22365e0,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_22365e0) != 0) {
        GameData_22365d0 = 0;
        GameData_22365d8 = 0;
        __cxa_guard_release_alt1((__int64)&GameData_22365e0),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v23 = v15[2];
      if (v23 == 0) {
        return;
      }
      v24 = GameData_2131678 + 16;
      while (1) {
        v25 = *(unsigned __int8*)(v23 + 48);
        v26 = *(_QWORD*)(v23 + 56);
        if ((v25 & 1) == 0) {
          v26 = v25 >> 1;
        }
        if (v26 == 0) {
          goto LABEL_37;
        }
        v27 = (v25 & 1) != 0 ? *(const char**)(v23 + 64)
                             : (const char*)(v23 + 49);
        if (game_109f1e0(v5[1], v27) == 0) {
          goto LABEL_37;
        }
        v28 = (*(_BYTE*)(v23 + 24) & 1) != 0 ? *(const char**)(v23 + 40)
                                             : (const char*)(v23 + 25);
        if (!GameHr_108e940(v28)) {
          goto LABEL_37;
        }
        v29 = *(_BYTE*)(v23 + 24);
        v30 = *(_QWORD*)(v23 + 40);
        v64_.v64 = nullptr;
        v64_.v65 = 0;
        v31 = (v29 & 1) != 0 ? v30 : v23 + 25;
        v64_.v70 = GameData_1a837f0;
        LODWORD(v64_.v67) = 8;
        v64_.v68 = GameData_22365d0;
        v64_.v69 = GameData_22365d8;
        v64_.v71 = GameData_22365d0;
        v64_.v72 = GameData_22365d8;
        v64_.v66 = v31;
        v32 = ({
          unsigned __int128 r_ = Manager_bc6460_alt1_pair(
              *(_QWORD**)eft_g_effectSystem_ptr[0], (__int64)&v64_.v64, 1);
          v33 = COERCE_AS(__typeof__(v33), (unsigned long long)(r_ >> 64));
          (__int64*)(unsigned long long)r_;
        });
        GameHr_14a10d0(&v62_.v62, (__int64)v32, v33,
                       (__int64)&GameData_1a9f09e),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v34 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)v34 = v24;
        *(_QWORD*)(v34 + 8) = 0;
        *(_QWORD*)(v34 + 16) = 0;
        *(_QWORD*)(v34 + 24) = 0;
        *(_DWORD*)(v34 + 32) = 0;
        *(_QWORD*)(v34 + 40) = 0;
        *(_DWORD*)(v34 + 104) = 0;
        *(_QWORD*)(v34 + 56) = 0;
        *(_QWORD*)(v34 + 64) = 0;
        *(_QWORD*)(v34 + 72) = 0;
        *(_WORD*)(v34 + 80) = 0;
        *(_WORD*)(v34 + 116) = 0;
        *(_WORD*)(v34 + 136) = 0;
        *(_DWORD*)(v34 + 48) = 0x2000;
        *(_BYTE*)(v34 + 160) = 0;
        *(_BYTE*)(v34 + 288) = 0;
        *(_QWORD*)(v34 + 272) = 0;
        *(_QWORD*)(v34 + 280) = 0;
        *(_QWORD*)(v34 + 256) = 0;
        *(_QWORD*)(v34 + 264) = 0;
        *(_QWORD*)(v34 + 240) = 0;
        *(_QWORD*)(v34 + 248) = 0;
        *(_QWORD*)(v34 + 224) = 0;
        *(_QWORD*)(v34 + 232) = 0;
        *(_QWORD*)(v34 + 208) = 0;
        *(_QWORD*)(v34 + 216) = 0;
        *(_QWORD*)(v34 + 192) = 0;
        *(_QWORD*)(v34 + 200) = 0;
        *(_QWORD*)(v34 + 176) = 0;
        *(_QWORD*)(v34 + 184) = 0;
        *(_QWORD*)(v34 + 168) = 0;
        *(_WORD*)(v34 + 108) = 256;
        *(_QWORD*)(v34 + 120) = 0;
        *(_DWORD*)(v34 + 127) = 0;
        v64_.v65 = v34;
        LOBYTE(v64_.v66) = 0;
        BYTE4(v64_.v66) = 0;
        BYTE4(v64_.v69) = 0;
        LOBYTE(v64_.v69) = 0;
        v64_.v67 = 0;
        v64_.v68 = 0;
        LODWORD(v64_.v70) = 1;
        BYTE4(v64_.v70) = 0;
        *(_DWORD*)(v34 + 112) = -1082130432;
        DWORD2(v64_.v70) = -1;
        *(_DWORD*)(v34 + 292) = 2;
        v35 = v62_.v62;
        v36 = v62_.v63;
        if (v62_.v63 == 0) {
          break;
        }
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v62_.v63 + 8), 1u,
                                  memory_order_relaxed);
        v34 = v64_.v65;
        v64_.v64 = v35;
        v64_.v65 = v36;
        if (v34 != 0) {
          goto LABEL_56;
        }
      LABEL_59:
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v36),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      LABEL_61:
        v38 = *(unsigned __int8*)(v23 + 48);
        v40 = *(_QWORD*)(v23 + 56);
        v39 = *(_QWORD*)(v23 + 64);
        v9 = (v38 & 1) == 0;
        v41 = v38 >> 1;
        BYTE4(v64_.v69) = 1;
        BYTE4(v64_.v70) = 1;
        if (v9) {
          v39 = v23 + 49;
        }
        else {
          v41 = v40;
        }
        v64_.v67 = v39;
        v64_.v68 = v41;
        LODWORD(v64_.v69) = 7;
        GameRoutine_bd16c0(v22, &v64_.v64),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v42 = (__int64**)v5[15];
        if ((unsigned __int64)v42 >= v5[16]) {
          v44 = Situation_767300_alt1(v5 + 14, &v62_.v62),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          *v42 = v62_.v62;
          v43 = v62_.v63;
          v42[1] = (__int64*)v62_.v63;
          if (v43 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 8), 1u,
                                      memory_order_relaxed);
          }
          v44 = v42 + 2;
        }
        v45 = v64_.v65;
        v5[15] = (__int64)v44;
        if (v45 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v45),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v46 = v62_.v63;
        if (v62_.v63 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v62_.v63 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v46),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      LABEL_37:
        v23 = *(_QWORD*)v23;
        if (v23 == 0) {
          return;
        }
      }
      v64_.v64 = v62_.v62;
      v64_.v65 = 0;
    LABEL_56:
      if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v37 = v34;
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v37),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v36 = v64_.v65;
      if (v64_.v65 == 0) {
        goto LABEL_61;
      }
      goto LABEL_59;
    }
  }
}

__int64 game_character_CharacterAura_Fade_lambda0_Invoke(__int64 result,
                                                         __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22365f0,
                            memory_order_acquire) &
       1) == 0) {
    v10 = result;
    v11 = a2;
    v12 = __cxa_guard_acquire_alt1((__int64)&GameData_22365f0);
    a2 = v11;
    v13 = v12;
    result = v10;
    if (v13 != 0) {
      GameData_22365e8 = wld_Crc32_alt1(0, "AuraModule", 0xAu);
      __cxa_guard_release_alt1((__int64)&GameData_22365f0);
      a2 = v11;
      result = v10;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_22365e8) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          v6 = *(__int64**)(v5 + 112);
          v7 = *(__int64**)(v5 + 120);
          if (v6 != v7) {
            v8 = *(float*)(result + 8) * 0x1.e000000000000p+5f;
            do {
              result = GameRoutine_14a16a0_alt1(v6, 1, v8);
              v6 += 2;
            } while (v6 != v7);
            v6 = *(__int64**)(v5 + 112);
            v7 = *(__int64**)(v5 + 120);
          }
          for (; v7 != v6; v7 -= 2) {
            v9 = *(v7 - 1);
            if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
              result = std___1___shared_weak_count___release_weak_alt1(v9);
            }
          }
          *(_QWORD*)(v5 + 120) = v6;
        }
      }
      return result;
    }
  }
  return result;
}

#pragma GCC visibility pop
