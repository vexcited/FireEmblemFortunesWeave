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
void game_character_CharacterAura_Fade_lambda0_Invoke(__int64 a1, __int64 a2);
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
void game_character_CharacterAura_ChangeViewMode_lambda0_Invoke(__int64 a1,
                                                                __int64 a2,
                                                                __n128 a3);

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
  __int64 v6;
  __int64 v7;
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
    v13 = __cxa_guard_acquire(&GameData_22365f0);
    a2 = v12;
    if (v13 != 0) {
      GameData_22365e8 = wld_Crc32(0, "AuraModule", 10);
      __cxa_guard_release(&GameData_22365f0);
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
          v6 = *(_QWORD*)(v5 + 112);
          v7 = *(_QWORD*)(v5 + 120);
          if (v6 != v7) {
            do {
              GameRoutine_14a1390(v6, 1);
              v6 += 16;
            } while (v6 != v7);
            v6 = *(_QWORD*)(v5 + 112);
            v7 = *(_QWORD*)(v5 + 120);
          }
          for (; v7 != v6; v7 -= 16) {
            v8 = *(_QWORD*)(v7 - 8);
            if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
              std___1___shared_weak_count___release_weak(v8);
            }
          }
          *(_QWORD*)(v5 + 120) = v6;
          *(_DWORD*)(v5 + 24) = 0;
          GameRoutine_10f59e0(v5 + 32);
          GameRoutine_10f59e0(v5 + 72);
          v9 = *(_QWORD*)(v5 + 112);
          for (j = *(_QWORD*)(v5 + 120); j != v9; j -= 16) {
            v11 = *(_QWORD*)(j - 8);
            if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
              std___1___shared_weak_count___release_weak(v11);
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
                                                                __int64 a2,
                                                                __n128 a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  bool v10;
  int v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  unsigned __int8 explicit;
  int* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  _BYTE* v28;
  _BYTE* v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  unsigned int v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  long double v43;
  unsigned __int64* v44;
  unsigned __int64 v45;
  _QWORD* v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64* v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  int v61;
  __int64 v62;
  int v63;
  struct {
    unsigned __int64 v64;
    unsigned __int64 v65;
  } v64_;
  struct {
    float32x4_t v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int128 v71;
    __int64 v72;
    __int64 v73;
  } v66_;

  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22365f0,
                            memory_order_acquire) &
       1) == 0) {
    v58 = a1;
    v59 = a2;
    v60 = __cxa_guard_acquire(&GameData_22365f0),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
    a2 = v59;
    v61 = v60;
    a1 = v58;
    if (v61 != 0) {
      GameData_22365e8 = wld_Crc32_alt1(0, "AuraModule", 0xAu),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
      __cxa_guard_release(&GameData_22365f0),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
      a2 = v59;
      a1 = v58;
    }
  }
  v3 = *(_QWORD*)(a2 + 512);
  v4 = v3;
  do {
    if (v4 == *(_QWORD*)(a2 + 504)) {
      return;
    }
    v5 = *(_DWORD*)(v4 - 16);
    v4 -= 16;
    v3 -= 16;
  } while (v5 != GameData_22365e8);
  if (*(_QWORD*)(a2 + 512) != v3) {
    v6 = *(__int64**)(v3 + 8);
    if (v6 != nullptr) {
      if ((*(_BYTE*)(a1 + 8) & 1) == 0) {
        v7 = v6[7];
        if (v7 == v6[12]) {
          v8 = v6[10];
          v9 = v6 + 6;
          v10 = v7 == 0 || v8 == 0;
          if (!v10) {
            v49 = v6[9];
            v50 = v8 - 1;
            if ((v8 & (v8 - 1)) != 0) {
              while (1) {
                v9 = (__int64*)*v9;
                if (v9 == nullptr) {
                  break;
                }
                v51 = *((int*)v9 + 4);
                v52 = v51;
                if (v8 <= v51) {
                  v52 = v51 % v8;
                }
                v53 = *(__int64**)(v49 + 8 * v52);
                if (v53 != nullptr) {
                  do {
                    while (1) {
                      v53 = (__int64*)*v53;
                      if (v53 == nullptr) {
                        goto LABEL_15;
                      }
                      v54 = v53[1];
                      if (v54 == v51) {
                        break;
                      }
                      if (v54 >= v8) {
                        v54 %= v8;
                      }
                      if (v54 != v52) {
                        goto LABEL_15;
                      }
                    }
                  } while (*((_DWORD*)v53 + 4) != (_DWORD)v51);
                  if (*((_DWORD*)v9 + 18) == *((_DWORD*)v53 + 18)) {
                    continue;
                  }
                }
                goto LABEL_15;
              }
            }
            else {
              while (1) {
                v9 = (__int64*)*v9;
                if (v9 == nullptr) {
                  break;
                }
                v55 = *((int*)v9 + 4);
                v56 = *(__int64**)(v49 + 8 * (v50 & v55));
                if (v56 != nullptr) {
                  do {
                    while (1) {
                      v56 = (__int64*)*v56;
                      if (v56 == nullptr) {
                        goto LABEL_15;
                      }
                      v57 = v56[1];
                      if (v57 == v55) {
                        break;
                      }
                      if ((v57 & v50) != (v50 & v55)) {
                        goto LABEL_15;
                      }
                    }
                  } while (*((_DWORD*)v56 + 4) != (_DWORD)v55);
                  if (*((_DWORD*)v9 + 18) == *((_DWORD*)v56 + 18)) {
                    continue;
                  }
                }
                goto LABEL_15;
              }
            }
            return;
          }
          if (*v9 == 0) {
            return;
          }
        }
      }
    LABEL_15:
      v11 = *(unsigned __int8*)(a1 + 9);
      v12 = (_QWORD*)v6[14];
      v13 = (_QWORD*)v6[15];
      if (v12 != v13) {
        do {
          a3 = GameRoutine_14a1390_alt1(v12, 1),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
          v12 += 2;
        } while (v12 != v13);
        v12 = (_QWORD*)v6[14];
        v13 = (_QWORD*)v6[15];
      }
      for (; v13 != v12; v13 -= 2) {
        v14 = *(v13 - 1);
        if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v14 + 16LL))(
              v14, *(long double*)&a3),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          a3 = std___1___shared_weak_count___release_weak(v14),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      v15 = 9;
      v6[15] = (__int64)v12;
      if (v11 != 0) {
        v15 = 4;
      }
      v16 = &v6[v15];
      if (v6[v15 + 3] == 0) {
        return;
      }
      v17 = v6[1];
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4a8,
                                      memory_order_acquire);
      v19 = GameData_212d4a0;
      if ((explicit & 1) == 0) {
        v62 = v17;
        v63 = __cxa_guard_acquire(GameData_212d4a8),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v17 = v62;
        if (v63 != 0) {
          *v19 = wld_Crc32_alt1(0, "EffectModule", 0xCu),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
          __cxa_guard_release(GameData_212d4a8),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          v17 = v62;
        }
      }
      v20 = *(_QWORD*)(v17 + 512);
      v21 = v20;
      do {
        if (v21 == *(_QWORD*)(v17 + 504)) {
          goto LABEL_33;
        }
        v22 = *(_DWORD*)(v21 - 16);
        v21 -= 16;
        v20 -= 16;
      } while (v22 != *v19);
      if (*(_QWORD*)(v17 + 512) == v20 ||
          (v23 = *(_QWORD**)(v20 + 8)) == nullptr) {
      LABEL_33:
        v23 = (_QWORD*)GameRoutine_98ed40(v17),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22365e0,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_22365e0) != 0) {
        GameData_22365d0 = 0;
        GameData_22365d8 = 0;
        __cxa_guard_release(&GameData_22365e0),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v24 = v16[2];
      if (v24 == 0) {
        return;
      }
      v25 = GameData_2131678 + 16;
      while (1) {
        v26 = *(unsigned __int8*)(v24 + 48);
        v27 = *(_QWORD*)(v24 + 56);
        if ((v26 & 1) == 0) {
          v27 = v26 >> 1;
        }
        if (v27 == 0) {
          goto LABEL_37;
        }
        v28 = (v26 & 1) != 0 ? *(_BYTE**)(v24 + 64) : (_BYTE*)(v24 + 49);
        if (GameRoutine_109f1e0(v6[1], v28) == 0) {
          goto LABEL_37;
        }
        v29 = (*(_BYTE*)(v24 + 24) & 1) != 0 ? *(_BYTE**)(v24 + 40)
                                             : (_BYTE*)(v24 + 25);
        if (!GameRoutine_108e940(v29)) {
          goto LABEL_37;
        }
        v30 = *(_BYTE*)(v24 + 24);
        v31 = *(_QWORD*)(v24 + 40);
        v66_.v66 = (__typeof__(v66_.v66)){0};
        v32 = (v30 & 1) != 0 ? v31 : v24 + 25;
        v66_.v71 = GameData_1a837f0;
        LODWORD(v66_.v68) = 8;
        v66_.v69 = GameData_22365d0;
        v66_.v70 = GameData_22365d8;
        v66_.v72 = GameData_22365d0;
        v66_.v73 = GameData_22365d8;
        v66_.v67 = v32;
        v33 =
            Manager_bc6460(*(_QWORD**)eft_g_effectSystem_ptr[0], &v66_.v66, 1),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
        GameRoutine_14a10d0(&v64_.v64, (__int64)v33, v34,
                            (__int64)&GameData_1a9f09e),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v35 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
        *(_QWORD*)v35 = v25;
        *(_QWORD*)(v35 + 8) = 0;
        *(_QWORD*)(v35 + 16) = 0;
        *(_QWORD*)(v35 + 24) = 0;
        *(_DWORD*)(v35 + 32) = 0;
        *(_QWORD*)(v35 + 40) = 0;
        *(_DWORD*)(v35 + 104) = 0;
        *(_QWORD*)(v35 + 56) = 0;
        *(_QWORD*)(v35 + 64) = 0;
        *(_QWORD*)(v35 + 72) = 0;
        *(_WORD*)(v35 + 80) = 0;
        *(_WORD*)(v35 + 116) = 0;
        *(_WORD*)(v35 + 136) = 0;
        *(_DWORD*)(v35 + 48) = 0x2000;
        *(_BYTE*)(v35 + 160) = 0;
        *(_BYTE*)(v35 + 288) = 0;
        *(_QWORD*)(v35 + 272) = 0;
        *(_QWORD*)(v35 + 280) = 0;
        *(_QWORD*)(v35 + 256) = 0;
        *(_QWORD*)(v35 + 264) = 0;
        *(_QWORD*)(v35 + 240) = 0;
        *(_QWORD*)(v35 + 248) = 0;
        *(_QWORD*)(v35 + 224) = 0;
        *(_QWORD*)(v35 + 232) = 0;
        *(_QWORD*)(v35 + 208) = 0;
        *(_QWORD*)(v35 + 216) = 0;
        *(_QWORD*)(v35 + 192) = 0;
        *(_QWORD*)(v35 + 200) = 0;
        *(_QWORD*)(v35 + 176) = 0;
        *(_QWORD*)(v35 + 184) = 0;
        *(_QWORD*)(v35 + 168) = 0;
        *(_WORD*)(v35 + 108) = 256;
        *(_QWORD*)(v35 + 120) = 0;
        *(_DWORD*)(v35 + 127) = 0;
        LANES128(v66_.v66).n128_u64[1] = v35;
        LOBYTE(v66_.v67) = 0;
        BYTE4(v66_.v67) = 0;
        BYTE4(v66_.v70) = 0;
        LOBYTE(v66_.v70) = 0;
        v66_.v68 = 0;
        v66_.v69 = 0;
        LODWORD(v66_.v71) = 1;
        BYTE4(v66_.v71) = 0;
        *(_DWORD*)(v35 + 112) = -1082130432;
        DWORD2(v66_.v71) = -1;
        *(_DWORD*)(v35 + 292) = 2;
        v36 = v64_.v64;
        v37 = v64_.v65;
        if (v64_.v65 == 0) {
          break;
        }
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v64_.v65 + 8), 1u,
                                  memory_order_relaxed);
        v35 = LANES128(v66_.v66).n128_i64[1];
        LANES128(v66_.v66).n128_u64[0] = v36;
        LANES128(v66_.v66).n128_u64[1] = v37;
        if (v35 != 0) {
          goto LABEL_56;
        }
      LABEL_59:
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)v37 + 16LL))(v37),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak(v37),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      LABEL_61:
        v39 = *(unsigned __int8*)(v24 + 48);
        v41 = *(_QWORD*)(v24 + 56);
        v40 = *(_QWORD*)(v24 + 64);
        v10 = (v39 & 1) == 0;
        v42 = v39 >> 1;
        BYTE4(v66_.v70) = 1;
        BYTE4(v66_.v71) = 1;
        if (v10) {
          v40 = v24 + 49;
        }
        else {
          v42 = v41;
        }
        v66_.v68 = v40;
        v66_.v69 = v42;
        LODWORD(v66_.v70) = 7;
        GameRoutine_bd16c0(v23, (__int64**)&v66_.v66),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v44 = (unsigned __int64*)v6[15];
        if ((unsigned __int64)v44 >= v6[16]) {
          v46 = Situation_767300(v6 + 14, &v64_.v64),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          *v44 = v64_.v64;
          v45 = v64_.v65;
          v44[1] = v64_.v65;
          if (v45 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                                      memory_order_relaxed);
          }
          v46 = v44 + 2;
        }
        v47 = LANES128(v66_.v66).n128_u64[1];
        v6[15] = (__int64)v46;
        if (v47 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)v47 + 16LL))(v47),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          *(__n128*)&v43 = std___1___shared_weak_count___release_weak(v47),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v48 = v64_.v65;
        if (v64_.v65 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v64_.v65 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v48 + 16LL))(
              v48, v43),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak(v48),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      LABEL_37:
        v24 = *(_QWORD*)v24;
        if (v24 == 0) {
          return;
        }
      }
      v66_.v66 = COERCE_AS(float32x4_t, v64_.v64);
    LABEL_56:
      if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v38 = v35;
        (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(v38),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v37 = LANES128(v66_.v66).n128_u64[1];
      if (LANES128(v66_.v66).n128_u64[1] == 0) {
        goto LABEL_61;
      }
      goto LABEL_59;
    }
  }
}

void game_character_CharacterAura_Fade_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22365f0,
                            memory_order_acquire) &
       1) == 0) {
    v10 = a1;
    v11 = a2;
    v12 = __cxa_guard_acquire(&GameData_22365f0);
    a2 = v11;
    v13 = v12;
    a1 = v10;
    if (v13 != 0) {
      GameData_22365e8 = wld_Crc32(0, "AuraModule", 10);
      __cxa_guard_release(&GameData_22365f0);
      a2 = v11;
      a1 = v10;
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
          v6 = *(_QWORD*)(v5 + 112);
          v7 = *(_QWORD*)(v5 + 120);
          if (v6 != v7) {
            v8 = *(float*)(a1 + 8) * 60.0f;
            do {
              GameRoutine_14a16a0(v6, 1, v8);
              v6 += 16;
            } while (v6 != v7);
            v6 = *(_QWORD*)(v5 + 112);
            v7 = *(_QWORD*)(v5 + 120);
          }
          for (; v7 != v6; v7 -= 16) {
            v9 = *(_QWORD*)(v7 - 8);
            if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
              std___1___shared_weak_count___release_weak(v9);
            }
          }
          *(_QWORD*)(v5 + 120) = v6;
        }
      }
      return;
    }
  }
}

#pragma GCC visibility pop
