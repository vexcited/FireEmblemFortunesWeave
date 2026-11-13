#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GmapCorpsMenu_172a480(_QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__int64 game_gmap_anonymous_CorpsMenuItem_ACall_closure1_Invoke(__int64 a1);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 (**game_gmap_GmapCorpsMenu_ExchangeImpl(__int64, char, _QWORD*, _QWORD*,
                                                char))();
__int64 GameRoutine_16eb960(__int64, _QWORD*);
__int64 GmapCorpsMenu_172a480_alt1(__int64, char,
                                   __int64) __asm__("GmapCorpsMenu_172a480");
unsigned __int128
GmapCorpsMenu_172a480_alt1_pair(__int64, char,
                                __int64) __asm__("GmapCorpsMenu_172a480");
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, __int64, __int64, __int64, unsigned int,
                    unsigned int, int, float, float) __asm__("snd_play_ff2d0");
extern __int64 (*GameData_20b4488[])();
extern __int64 (*GameData_20b4508[])();
extern __int64 (*GameData_20b4588[])();
extern __int64 (*GameData_20b63e8[])();
extern __int64 (*GameData_20b6468[])();
extern __int64 (*game_gmap_anonymous_CorpsPoolMenu_vtable[])();
extern __int64 (*game_gmap_anonymous_CorpsUserMenu_vtable[])();
extern __int64* GameData_212d640[9];
extern __int64* GameData_212e008[9];
extern __int64* GameData_21319f0[9];
extern __int64 GameData_20b33d8;
extern __int64 GameData_20b3af0;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a310();
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 CorpsMenuItem_172d980(__int64 a1);

__int64 CorpsMenuItem_172d980(__int64 a1)
{
  _QWORD handle[2];
  __int64 v1;
  char v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  int v28;
  char* v29;
  char* v30;
  unsigned __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  _QWORD* v37;
  int v38;
  __int64 v39;
  unsigned __int64 v40;
  _DWORD* v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  __int64* v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  __int64 v73;
  _QWORD* v74;
  struct {
    _QWORD v75[4];
    _QWORD* v76;
  } v75_;

  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v60 = COERCE_AS(__typeof__(v60),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v65 = COERCE_AS(__typeof__(v65),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v1 = *(_QWORD*)(a1 + 88);
  v2 = *(_BYTE*)(a1 + 104);
  if ((*(_BYTE*)(v1 + 356) & 1) != 0) {
    v13 = *(_QWORD*)(v1 + 304);
    if (v13 == 0 ||
        *(__int64 (***)(void))v13 != game_gmap_anonymous_CorpsUserMenu_vtable) {
      v13 = 0;
    }
    v14 = *(_QWORD*)(v1 + 312);
    if (v14 == 0 ||
        *(__int64 (***)(void))v14 != game_gmap_anonymous_CorpsPoolMenu_vtable) {
      v14 = 0;
    }
    v15 = *(_DWORD*)(v13 + 640);
    if (v15 < 0) {
      goto LABEL_46;
    }
    v16 = *(char**)(v13 + 232);
    v17 = *(char**)(v13 + 240);
    if (v16 == v17) {
      goto LABEL_46;
    }
    v18 = v17 - v16 - 8;
    v19 = (v18 >> 3) + 1;
    if (v18 >= 0x18) {
      v25 = 0;
      while (1) {
        if (v15 == (_DWORD)v25) {
          goto LABEL_43;
        }
        if (v15 == (_DWORD)v25 + 1) {
          v16 += 8;
          goto LABEL_43;
        }
        if (v15 == (_DWORD)v25 + 2) {
          v16 += 16;
          goto LABEL_43;
        }
        if (v15 == (_DWORD)v25 + 3) {
          break;
        }
        v16 += 32;
        v25 += 4;
        v20 = v25;
        if ((v19 & 0x3FFFFFFFFFFFFFFCLL) == v25) {
          goto LABEL_19;
        }
      }
      v16 += 24;
    }
    else {
      v20 = 0;
    LABEL_19:
      v21 = v19 & 3;
      if (v21 == 0) {
        goto LABEL_46;
      }
      v22 = v15 - v20;
      while (v22 != 0) {
        v16 += 8;
        --v22;
        if (--v21 == 0) {
          goto LABEL_46;
        }
      }
    }
  LABEL_43:
    if (*(_QWORD*)v16 != 0) {
      v27 = (_QWORD*)__dynamic_cast(*(_QWORD*)v16, GameData_212e008[0],
                                    &GameData_20b33d8, 0),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v28 = *(_DWORD*)(v14 + 640);
      if (v28 < 0) {
        goto LABEL_67;
      }
    LABEL_47:
      v29 = *(char**)(v14 + 232);
      v30 = *(char**)(v14 + 240);
      if (v29 != v30) {
        v31 = v30 - v29 - 8;
        v32 = (v31 >> 3) + 1;
        if (v31 >= 0x18) {
          v36 = 0;
          while (1) {
            if (v28 == (_DWORD)v36) {
              goto LABEL_65;
            }
            if (v28 == (_DWORD)v36 + 1) {
              v29 += 8;
              goto LABEL_65;
            }
            if (v28 == (_DWORD)v36 + 2) {
              v29 += 16;
              goto LABEL_65;
            }
            if (v28 == (_DWORD)v36 + 3) {
              break;
            }
            v29 += 32;
            v36 += 4;
            v33 = v36;
            if ((v32 & 0x3FFFFFFFFFFFFFFCLL) == v36) {
              goto LABEL_50;
            }
          }
          v29 += 24;
        }
        else {
          v33 = 0;
        LABEL_50:
          v34 = v32 & 3;
          if (v34 == 0) {
            goto LABEL_67;
          }
          v35 = v28 - v33;
          while (v35 != 0) {
            v29 += 8;
            --v35;
            if (--v34 == 0) {
              goto LABEL_67;
            }
          }
        }
      LABEL_65:
        if (*(_QWORD*)v29 != 0) {
          v37 = (_QWORD*)__dynamic_cast(*(_QWORD*)v29, GameData_212e008[0],
                                        &GameData_20b33d8, 0),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v60 = COERCE_AS(__typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        LABEL_68:
          v38 = *(_DWORD*)(v14 + 656);
          v74 = v37;
          if (v38 < 1) {
            v41 = *(_DWORD**)(v14 + 1072);
          }
          else {
            v39 = *(_QWORD*)(v14 + 672);
            v40 = *(int*)(v14 + 660);
            if (v40 < (*(_QWORD*)(v14 + 680) - v39) >> 2) {
              v40 = *(int*)(v39 + 4 * v40);
            }
            v41 = (_DWORD*)(*(_QWORD*)(v14 + 1072) + 4 * v40);
          }
          if (*v41 != -1 || *(_QWORD**)(v37[1] + 344LL) != v37) {
            goto LABEL_89;
          }
          v43 = *(_QWORD*)(v14 + 232);
          v42 = *(_QWORD*)(v14 + 240);
          v44 = v75_.v75;
          v75_.v75[0] = GameData_20b6468;
          v75_.v75[1] = &v74;
          v75_.v76 = v75_.v75;
          if (v42 == v43) {
            goto LABEL_86;
          }
          v45 = 0;
          v46 = GameData_212e008[0];
          while (1) {
            v47 = *(_QWORD*)(v43 + 8 * v45);
            if (v47 != 0) {
              v48 = __dynamic_cast(v47, v46, &GameData_20b33d8, 0),
              v59 = COERCE_AS(__typeof__(v59),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              if (v48 != 0) {
                v71 = v48;
                if (v75_.v76 == nullptr) {
                LABEL_119:
                  GameRoutine_60a310(),
                      v59 = COERCE_AS(
                          __typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v60 = COERCE_AS(
                          __typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v64 = COERCE_AS(
                          __typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v65 = COERCE_AS(
                          __typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v68 = COERCE_AS(
                          __typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v69 = COERCE_AS(
                          __typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                }
                if (((*(__int64 (**)(_QWORD*, __int64*))(*v75_.v76 + 48LL))(
                         v75_.v76, &v71) &
                     1) != 0) {
                LABEL_83:
                  v44 = v75_.v76;
                  if (v75_.v76 != v75_.v75) {
                    if (v75_.v76 != nullptr) {
                      v49 = 40;
                      goto LABEL_87;
                    }
                    goto LABEL_88;
                  }
                LABEL_86:
                  v49 = 32;
                LABEL_87:
                  (*(void (**)(_QWORD*))(*v44 + v49))(v44),
                      v59 = COERCE_AS(
                          __typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v60 = COERCE_AS(
                          __typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v64 = COERCE_AS(
                          __typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v65 = COERCE_AS(
                          __typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v68 = COERCE_AS(
                          __typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v69 = COERCE_AS(
                          __typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                LABEL_88:
                  v37 = v74;
                LABEL_89:
                  game_gmap_GmapCorpsMenu_ExchangeImpl(v1, v2, v27, v37, 1),
                      v59 = COERCE_AS(
                          __typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v60 = COERCE_AS(
                          __typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v64 = COERCE_AS(
                          __typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v65 = COERCE_AS(
                          __typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v68 = COERCE_AS(
                          __typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v69 = COERCE_AS(
                          __typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                  return 13;
                }
                v43 = *(_QWORD*)(v14 + 232);
                v42 = *(_QWORD*)(v14 + 240);
              }
            }
            if (++v45 >= (unsigned __int64)((v42 - v43) >> 3)) {
              goto LABEL_83;
            }
          }
        }
      }
    LABEL_67:
      v37 = nullptr;
      goto LABEL_68;
    }
  LABEL_46:
    v27 = nullptr;
    v28 = *(_DWORD*)(v14 + 640);
    if (v28 < 0) {
      goto LABEL_67;
    }
    goto LABEL_47;
  }
  if (*(_BYTE*)(a1 + 104) == 0 ||
      (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1) == 0) {
    goto LABEL_102;
  }
  v4 = *(_QWORD*)(a1 + 88);
  if ((*(_BYTE*)(a1 + 116) & 1) != 0) {
    goto LABEL_93;
  }
  v5 = *(_QWORD*)(v4 + 304);
  if (v5 == 0) {
    goto LABEL_93;
  }
  v6 = __dynamic_cast(v5, GameData_21319f0[0], &GameData_20b3af0, 0),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v60 = COERCE_AS(__typeof__(v60),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v65 = COERCE_AS(__typeof__(v65),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v6 == 0) {
    goto LABEL_93;
  }
  v7 = v6;
  v9 = *(_QWORD*)(v6 + 232);
  v8 = *(_QWORD*)(v6 + 240);
  v10 = v75_.v75;
  LODWORD(v74) = 0;
  v75_.v75[0] = GameData_20b63e8;
  v75_.v75[1] = &v74;
  v75_.v76 = v75_.v75;
  if (v8 == v9) {
    goto LABEL_90;
  }
  v11 = 0;
  v12 = GameData_212e008[0];
  do {
    v23 = *(_QWORD*)(v9 + 8 * v11);
    if (v23 != 0) {
      v24 = __dynamic_cast(v23, v12, &GameData_20b33d8, 0),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v24 == 0) {
        goto LABEL_24;
      }
      v71 = v24;
      if (v75_.v76 == nullptr) {
        goto LABEL_119;
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v75_.v76 + 48LL))(v75_.v76,
                                                                  &v71) &
           1) != 0) {
        break;
      }
      v9 = *(_QWORD*)(v7 + 232);
      v8 = *(_QWORD*)(v7 + 240);
    }
  LABEL_24:
    ++v11;
  } while (v11 < (v8 - v9) >> 3);
  v10 = v75_.v76;
  if (v75_.v76 != v75_.v75) {
    if (v75_.v76 != nullptr) {
      v26 = 40;
      goto LABEL_91;
    }
    goto LABEL_92;
  }
LABEL_90:
  v26 = 32;
LABEL_91:
  (*(void (**)(_QWORD*))(*v10 + v26))(v10),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_92:
  v4 = *(_QWORD*)(a1 + 88);
  if ((int)v74 >= 2) {
    v50 = *(_BYTE*)(v4 + 408);
    v51 = 1;
  LABEL_95:
    v52 = *(_QWORD*)(a1 + 8);
    v71 = a1;
    v73 = 0;
    v53 = *(_QWORD*)(v52 + 152);
    v72 = 1;
    if (v53 != 0) {
      v54 = v53;
    }
    else {
      v54 = v52;
    }
    v55 = (_QWORD*)GameRoutine_16eb960(v54, &v71),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v56 = (__int64*)fw_memory_g_heap_manager_ptr;
    v57 = GameData_212d640[0];
    if (v51 != 0) {
      v58 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      *(_DWORD*)(v58 + 40) = 0;
      *(_QWORD*)(v58 + 48) = 0;
      *(_QWORD*)(v58 + 56) = 0;
      strcpy((char*)(v58 + 16), "(MID_Menu_CorpsLeader");
      v75_.v76 = v75_.v75;
      v75_.v75[0] = GameData_20b4488;
      v75_.v75[1] = a1;
      *(_QWORD*)(v58 + 64) = 0;
      *(_QWORD*)(v58 + 72) = 0;
      *(_BYTE*)(v58 + 82) = 1;
      *(_QWORD*)(v58 + 96) = GameData_20b4488;
      *(_QWORD*)(v58 + 104) = a1;
      *(_WORD*)(v58 + 80) = 257;
      *(_QWORD*)v58 = v57 + 2;
      *(_QWORD*)(v58 + 8) = 0;
      *(_QWORD*)(v58 + 128) = v58 + 96;
      BasicMenuCursor_16e0c00(v55, v58),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v60 = COERCE_AS(__typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v75_.v76 == v75_.v75) {
        v61 = 32;
      }
      else {
        if (v75_.v76 == nullptr) {
          goto LABEL_106;
        }
        v61 = 40;
      }
      (*(void (**)(_QWORD*, __int64, __int64))(*v75_.v76 + v61))(v75_.v76, v59,
                                                                 v60),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v60 = COERCE_AS(__typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v68 = COERCE_AS(__typeof__(v68),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  LABEL_106:
    if ((v50 & 1) == 0) {
      goto LABEL_112;
    }
    v63 = fw_memory_HeapManager_Allocate(*v56, 144, 16, 0),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    *(_DWORD*)(v63 + 40) = 0;
    *(_QWORD*)(v63 + 48) = 0;
    *(_QWORD*)(v63 + 56) = 0;
    strcpy((char*)(v63 + 16), "(MID_Menu_CorpsCancel");
    v75_.v76 = v75_.v75;
    v75_.v75[0] = GameData_20b4508;
    v75_.v75[1] = a1;
    *(_QWORD*)(v63 + 64) = 0;
    *(_QWORD*)(v63 + 72) = 0;
    *(_QWORD*)(v63 + 96) = GameData_20b4508;
    *(_QWORD*)(v63 + 104) = a1;
    *(_WORD*)(v63 + 80) = 257;
    *(_BYTE*)(v63 + 82) = 1;
    *(_QWORD*)v63 = v57 + 2;
    *(_QWORD*)(v63 + 8) = 0;
    *(_QWORD*)(v63 + 128) = v63 + 96;
    BasicMenuCursor_16e0c00(v55, v63),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v75_.v76 == v75_.v75) {
      v66 = 32;
    }
    else {
      if (v75_.v76 == nullptr) {
        goto LABEL_112;
      }
      v66 = 40;
    }
    (*(void (**)(_QWORD*, __int64, __int64))(*v75_.v76 + v66))(v75_.v76, v64,
                                                               v65),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  LABEL_112:
    v67 = fw_memory_HeapManager_Allocate(*v56, 144, 16, 0),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    *(_DWORD*)(v67 + 40) = 0;
    *(_QWORD*)(v67 + 48) = 0;
    *(_QWORD*)(v67 + 56) = 0;
    *(_QWORD*)(v67 + 64) = 0;
    *(_QWORD*)(v67 + 72) = 0;
    *(_BYTE*)(v67 + 16) = 28;
    v75_.v76 = v75_.v75;
    v75_.v75[0] = GameData_20b4588;
    v75_.v75[1] = a1;
    *(_QWORD*)(v67 + 96) = GameData_20b4588;
    *(_QWORD*)(v67 + 104) = a1;
    strcpy((char*)(v67 + 17), "MID_Menu_Trade");
    *(_WORD*)(v67 + 80) = 257;
    *(_BYTE*)(v67 + 82) = 1;
    *(_QWORD*)v67 = v57 + 2;
    *(_QWORD*)(v67 + 8) = 0;
    *(_QWORD*)(v67 + 128) = v67 + 96;
    BasicMenuCursor_16e0c00(v55, v67),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v75_.v76 == v75_.v75) {
      v70 = 32;
    }
    else {
      if (v75_.v76 == nullptr) {
        return 10;
      }
      v70 = 40;
    }
    (*(void (**)(_QWORD*, __int64, __int64))(*v75_.v76 + v70))(v75_.v76, v68,
                                                               v69),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    return 10;
  }
LABEL_93:
  if (*(_BYTE*)(v4 + 408) == 1) {
    v50 = 1;
    v51 = 0;
    goto LABEL_95;
  }
LABEL_102:
  snd_Fade_Fade_10c830_alt1((__int64)v75_.v75, 0x0.0p+0f),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  snd_play_ff2d0_alt1((void*)(handle), (__int64)"SE_SYS_Decide_L_Next",
                      (__int64)"SE_SYS_Decide_L_Next", (__int64)v75_.v75, 0,
                      0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  snd_Fade_Destroy_Fade_alt1(v75_.v75),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  ({
    unsigned __int128 r_ = GmapCorpsMenu_172a480_alt1_pair(
        *(_QWORD*)(a1 + 88), *(_BYTE*)(a1 + 104), a1);
    v59 = COERCE_AS(__typeof__(v59), (unsigned long long)(r_ >> 64));
    (__int64)(unsigned long long)r_;
  }),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  return 13;
}

__int64 game_gmap_anonymous_CorpsMenuItem_ACall_closure1_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  _BYTE v4[200];

  v1 = *(_QWORD*)(a1 + 8);
  snd_Fade_Fade_10c830(v4, 0.0f);
  snd_play_ff2d0((void*)(&v3), "SE_SYS_Decide_M", "SE_SYS_Decide_M", v4, 0,
                 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v4);
  GmapCorpsMenu_172a480(*(_QWORD*)(v1 + 88), *(unsigned __int8*)(v1 + 104), v1);
  return 2;
}

#pragma GCC visibility pop
