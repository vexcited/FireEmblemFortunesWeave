#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Components_a88b20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7c50c0();
__int64 GameRoutine_81d880(_QWORD);
__int64 GameRoutine_a292c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a95ff0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a961a0(_QWORD, _QWORD);
__int64 GameRoutine_b87160(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1a90c03;
extern __int64 (*GameData_1f9a4f0[])();
extern __int64 GameData_212c638;
extern __int64 GameData_212c7d8[6];
extern __int64 GameData_21ca310;
extern __int64 GameData_21d92e8;
extern __int64 GameData_21d92f0;
extern __int64 GameData_21d92f8;
extern __int64 GameData_21d9300;
extern __int64 GameData_21d9308;
extern __int64 GameData_21d9310;
extern __int64 GameData_21fdf18;
extern __int64 GameData_21fdf28;
extern __int64 GameData_21fdf38;
extern __int64 GameData_21fdf48;
extern __int64 GameData_21fdf58;
extern __int64 GameData_21fdf68;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_frame_clock;
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_sound_g_game_sound_ptr[5];
extern char GameData_2167610;
extern char GameData_2167614;
extern char GameData_2167620;
extern char GameData_2228068;
extern int GameData_2167618;
extern int GameData_216761c;
extern int GameData_21d92e0;
__int64 game_GameView_Update();
__int64 GameView_7c5c00();
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212d308;
extern _UNKNOWN GameData_21d9320;
extern int GameData_21d9318;
bool game_GameView_Update_lambda0_Invoke(__int64 a1, __int64* a2);

__int64 game_GameView_Update()
{
  unsigned int v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  bool v53;
  __int64* v54;
  __int64 v55;
  __int64* v56;
  __int64 v57;
  float v58;
  __int64 v59;
  int v60;
  int v61;
  float v62;
  __int64 result;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  _BYTE v79[32];
  _BYTE* v80;
  _QWORD v81[4];
  _QWORD* v82;

  v0 = GameData_21d92e0;
  v1 = GameData_212c638;
  if ((unsigned int)GameData_21d92e0 > 7) {
    goto LABEL_46;
  }
  if (((1 << GameData_21d92e0) & 0xAC) != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
    if (*(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL) != v2) {
      v3 = *(_QWORD*)(v2 - 8);
      if (v3 != 0) {
        v4 = *(_QWORD*)(v3 + 24);
        v5 = *(_QWORD*)(v3 + 32);
        if (v5 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v4 != 0) {
          v6 = GameData_21d92f0;
          *(_QWORD*)(v4 + 392) = GameData_21d92f0;
          *(_QWORD*)(v4 + 360) = v6;
        }
        if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
        }
      }
    }
    v7 = *(_QWORD*)v1;
    v8 = GameData_21d9308;
    goto LABEL_13;
  }
  if (((1 << GameData_21d92e0) & 0x43) != 0) {
    v11 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
    if (*(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL) != v11) {
      v12 = *(_QWORD*)(v11 - 8);
      if (v12 != 0) {
        v13 = *(_QWORD*)(v12 + 24);
        v14 = *(_QWORD*)(v12 + 32);
        if (v14 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v13 != 0) {
          v15 = GameData_21d92e8;
          *(_QWORD*)(v13 + 392) = GameData_21d92e8;
          *(_QWORD*)(v13 + 360) = v15;
        }
        if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          std___1___shared_weak_count___release_weak(v14);
        }
      }
    }
    v16 = *(_QWORD*)v1;
    *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v1 + 32LL) - 8LL) + 72LL) =
        GameData_21d9300;
    v82 = v81;
    v81[0] = GameData_1f9a4f0;
    Components_a88b20(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 32) - 8LL) + 48LL),
                      2, 1, v81);
    v17 = *(_QWORD*)v1;
    v80 = nullptr;
    Components_a88b20(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v17 + 32) - 8LL) + 48LL),
                      1, 0, v79);
    if (v80 == v79) {
      v18 = 32;
    }
    else {
      if (v80 == nullptr) {
        goto LABEL_39;
      }
      v18 = 40;
    }
    (*(void (**)(void*))(*(_QWORD*)v80 + v18))((void*)v80);
  LABEL_39:
    if (v82 == v81) {
      v20 = 32;
    }
    else {
      if (v82 == nullptr) {
      LABEL_44:
        GameData_2167610 = 1;
        GameData_216761c = 1055286886;
        GameData_2167614 = 0;
        goto LABEL_45;
      }
      v20 = 40;
    }
    (*(void (**)(void*))(*v82 + v20))(v82);
    goto LABEL_44;
  }
  v31 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
  if (*(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL) != v31) {
    v32 = *(_QWORD*)(v31 - 8);
    if (v32 != 0) {
      v33 = *(_QWORD*)(v32 + 24);
      v34 = *(_QWORD*)(v32 + 32);
      if (v34 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v33 != 0) {
        v35 = GameData_21d92f8;
        *(_QWORD*)(v33 + 392) = GameData_21d92f8;
        *(_QWORD*)(v33 + 360) = v35;
      }
      if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
        std___1___shared_weak_count___release_weak(v34);
      }
    }
  }
  v7 = *(_QWORD*)v1;
  v8 = GameData_21d9310;
LABEL_13:
  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 32) - 8LL) + 72LL) = v8;
  v82 = v81;
  v81[0] = GameData_1f9a4f0;
  Components_a88b20(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 32) - 8LL) + 48LL), 1,
                    1, v81);
  v9 = *(_QWORD*)v1;
  v80 = nullptr;
  Components_a88b20(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 32) - 8LL) + 48LL), 2,
                    0, v79);
  if (v80 == v79) {
    v10 = 32;
  }
  else {
    if (v80 == nullptr) {
      goto LABEL_31;
    }
    v10 = 40;
  }
  (*(void (**)(void*))(*(_QWORD*)v80 + v10))((void*)v80);
LABEL_31:
  if (v82 == v81) {
    v19 = 32;
    goto LABEL_35;
  }
  if (v82 != nullptr) {
    v19 = 40;
  LABEL_35:
    (*(void (**)(void*))(*v82 + v19))(v82);
  }
  GameData_2167610 = 1;
  GameData_216761c = 1065353216;
  GameData_2167614 = 1;
  GameData_2167618 = 1097859072;
LABEL_45:
  v0 = GameData_21d92e0;
LABEL_46:
  v21 = *(_QWORD*)v1;
  v22 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v1 + 32LL) - 8LL) + 40LL);
  if (v0 == 3) {
    v23 = 2;
  }
  else {
    v23 = 0;
  }
  if (v0 == 1) {
    v24 = 1;
  }
  else {
    v24 = v23;
  }
  v25 = *(_QWORD*)(v22 + 392);
  if (*(_DWORD*)(v25 + 32) != v24) {
    *(_DWORD*)(v25 + 32) = v24;
    *(_BYTE*)(v25 + 24) = 1;
    *(_BYTE*)(v22 + 225) = 1;
    v22 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 32) - 8LL) + 40LL);
  }
  *(_BYTE*)(v22 + 240) = 1;
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 32) - 8LL) + 40LL) + 241LL) =
      ((v0 - 5) & 0xFFFFFFFD) == 0;
  v26 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 32) - 8LL) + 40LL);
  if (v26 != 0) {
    if (*(_BYTE*)(v26 + 448) == 1) {
      *(_BYTE*)(v26 + 448) = 0;
    }
    v27 = *(_QWORD*)(v26 + 384);
    if (*(_BYTE*)(v27 + 16) == 1) {
      *(_BYTE*)(v27 + 16) = 0;
    }
    *(_BYTE*)(*(_QWORD*)(v26 + 208) + 1220LL) = 1;
    v28 = *(_QWORD*)(v26 + 480);
    if (*(_BYTE*)(v28 + 64) == 1) {
      *(_BYTE*)(v28 + 64) = 0;
    }
  }
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 32) - 8LL) + 40LL) + 228LL) =
      1;
  if (v0 > 7) {
    *(_QWORD*)(GameData_21fdf18 + 80) = 0x900000000LL;
    *(_QWORD*)(GameData_21fdf28 + 80) = 0x900000000LL;
    *(_QWORD*)(GameData_21fdf38 + 80) = 0x900000000LL;
    *(_QWORD*)(GameData_21fdf48 + 80) = 0x900000000LL;
    *(_QWORD*)(GameData_21fdf58 + 80) = 0x900000000LL;
    v30 = 9;
    goto LABEL_78;
  }
  v29 = 1 << v0;
  if ((v29 & 0x1C) != 0) {
    GameRoutine_a95ff0(1, 0x400000000LL, 1, 0x400000001LL, 1);
    goto LABEL_80;
  }
  if ((v29 & 0x43) == 0) {
    *(_QWORD*)(GameData_21fdf18 + 80) = 0x300000000LL;
    *(_QWORD*)(GameData_21fdf28 + 80) = 0x300000000LL;
    *(_QWORD*)(GameData_21fdf38 + 80) = 0x300000000LL;
    *(_QWORD*)(GameData_21fdf48 + 80) = 0x300000000LL;
    *(_QWORD*)(GameData_21fdf58 + 80) = 0x300000000LL;
    v30 = 3;
  LABEL_78:
    *(_DWORD*)(GameData_21fdf68 + 80) = 0;
    goto LABEL_79;
  }
  *(_QWORD*)(GameData_21fdf18 + 80) = 0x400000004LL;
  *(_QWORD*)(GameData_21fdf28 + 80) = 0x400000004LL;
  *(_QWORD*)(GameData_21fdf38 + 80) = 0x400000004LL;
  *(_QWORD*)(GameData_21fdf48 + 80) = 0x400000004LL;
  *(_QWORD*)(GameData_21fdf58 + 80) = 0x400000004LL;
  v30 = 4;
  *(_DWORD*)(GameData_21fdf68 + 80) = 4;
LABEL_79:
  *(_DWORD*)(GameData_21fdf68 + 84) = v30;
LABEL_80:
  *(_QWORD*)(GameData_21fdf18 + 92) = 0x500000000LL;
  *(_QWORD*)(GameData_21fdf28 + 92) = 0x500000000LL;
  *(_QWORD*)(GameData_21fdf38 + 92) = 0x500000000LL;
  *(_QWORD*)(GameData_21fdf48 + 92) = 0x500000000LL;
  *(_QWORD*)(GameData_21fdf58 + 92) = 0x500000000LL;
  *(_QWORD*)(GameData_21fdf68 + 92) = 0x500000000LL;
  if (((GameData_21d92e0 - 5) & 0xFFFFFFFD) != 0) {
    v36 = 0;
  }
  else {
    v36 = 0x13F800000LL;
  }
  v37 = GameRoutine_a961a0(1, v36);
  if (GameData_21d92e0 == 6) {
    GameView_7c5c00(v37);
    v42 = game_g_frame_clock_ptr[0];
    v43 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
    v44 = *(_QWORD*)(v43 + 48);
    v45 = *(_QWORD*)(v43 + 56);
    if (v45 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                                memory_order_relaxed);
      v46 = *(_QWORD*)(*(_QWORD*)(v44 + 8) + 232LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
        std___1___shared_weak_count___release_weak(v45);
      }
    }
    else {
      v46 = *(_QWORD*)(*(_QWORD*)(v44 + 8) + 232LL);
    }
    *(_DWORD*)(v46 + 2340) = *(_DWORD*)(v46 + 2376);
    *(_BYTE*)(v46 + 2344) = 1;
    v47 = *(_QWORD*)(*v42 + 13224);
    v48 = *(_QWORD*)(v47 + 48);
    v49 = *(_QWORD*)(v47 + 56);
    if (v49 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                                memory_order_relaxed);
      v50 = *(_QWORD*)(*(_QWORD*)(v48 + 8) + 232LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
        std___1___shared_weak_count___release_weak(v49);
      }
    }
    else {
      v50 = *(_QWORD*)(*(_QWORD*)(v48 + 8) + 232LL);
    }
    if (*(_BYTE*)(v50 + 2344) == 1) {
      *(_DWORD*)(v50 + 2340) = 2;
      *(_BYTE*)(v50 + 2344) = 1;
    }
  }
  else if (GameData_21d92e0 == 1) {
    GameView_7c5c00(v37);
    v38 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
    v39 = *(_QWORD*)(v38 + 48);
    v40 = *(_QWORD*)(v38 + 56);
    if (v40 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                                memory_order_relaxed);
      v41 = *(_QWORD*)(*(_QWORD*)(v39 + 8) + 232LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
        std___1___shared_weak_count___release_weak(v40);
      }
    }
    else {
      v41 = *(_QWORD*)(*(_QWORD*)(v39 + 8) + 232LL);
    }
    if (*(_BYTE*)(v41 + 2344) == 1) {
      *(_BYTE*)(v41 + 2344) = 0;
    }
  }
  else {
    GameRoutine_7c50c0();
  }
  v51 = GameData_21d92e0;
  v53 = GameData_21d92e0 == 1 || GameData_21d92e0 == 6;
  GameData_2167620 = v53;
  GameData_2228068 = v53;
  v54 = GameData_212ce98[0];
  if (*GameData_212ce98[0] != 0) {
    (*(void (**)(_QWORD, bool))(**(_QWORD**)(*GameData_212ce98[0] + 160) +
                                48LL))(*(_QWORD*)(*GameData_212ce98[0] + 160),
                                       GameData_21d92e0 == 1);
    v51 = GameData_21d92e0;
  }
  GameRoutine_b87160(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v1 + 32LL) - 8LL) + 40LL),
      (v51 > 7) | (0x43u >> v51) & 1, 0);
  v56 = (__int64*)GameData_212c7d8[0];
  v57 = *(_QWORD*)GameData_212c7d8[0];
  if (*(_QWORD*)GameData_212c7d8[0] != 0) {
    if (*(_BYTE*)(v57 + 80) == 1) {
      *(_BYTE*)(v57 + 80) = 0;
    }
    *(_QWORD*)(v57 + 152) = *(_QWORD*)(v57 + 144);
    if (GameData_21d92e0 == 6 || GameData_21d92e0 == 1) {
      v81[1] = &GameData_1a90c03;
      v58 = 0.0;
      v81[0] = game_HashString(&GameData_1a90c03, v55);
      if (game_GameModeData_instance_ != 0) {
        v59 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v81);
        if (v59 != 0) {
          v58 = (float)*(int*)(v59 + 32);
        }
      }
      v60 = 1;
      v57 = *v56;
      v61 = 1050253722;
      v62 = v58 / 100.0;
    }
    else {
      v60 = 0;
      v62 = 0.0;
      v61 = 0;
    }
    *(_DWORD*)(v57 + 296) = v60;
    *(_DWORD*)(v57 + 300) = v60;
    *(float*)(v57 + 304) = v62;
    *(_DWORD*)(v57 + 308) = v61;
    *(_BYTE*)(v57 + 316) = 1;
  }
  result = *game_sound_g_game_sound_ptr[0];
  if (*game_sound_g_game_sound_ptr[0] != 0) {
    result = GameRoutine_a292c0(result, (unsigned int)GameData_21d92e0, 0);
  }
  if (*v54 != 0) {
    LODWORD(v81[0]) = 15;
    result = game_UnitPool_GetFirst(v81);
    if (result != 0) {
      v64 = *(_QWORD*)(result + 432);
      if (v64 == 0) {
        v75 = *(_QWORD*)(result + 440);
        if (v75 == 0 || (v76 = *(unsigned __int8*)(v75 + 16)) > 8) {
        LABEL_135:
          result = GameRoutine_81d880(result);
          goto LABEL_136;
        }
        v77 = 24LL * (unsigned int)v76 + 556024;
        while (1) {
          if (v76 <= 2) {
            v64 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v77);
            if (v64 != 0) {
              break;
            }
          }
          ++v76;
          v77 += 24;
          if (v76 == 9) {
            goto LABEL_135;
          }
        }
      }
      while (1) {
        do {
          v65 = v64;
          ((void (*)(void))GameRoutine_81d880)();
          v64 = *(_QWORD*)(v65 + 432);
        } while (v64 != 0);
        v66 = *(_QWORD*)(v65 + 440);
        if (v66 == 0) {
          break;
        }
        v67 = *(unsigned __int8*)(v66 + 16);
        if (v67 > 8) {
          break;
        }
        v68 = 24LL * (unsigned int)v67 + 556024;
        while (1) {
          if (v67 <= 2) {
            v64 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v68);
            if (v64 != 0) {
              break;
            }
          }
          ++v67;
          v68 += 24;
          if (v67 == 9) {
            goto LABEL_134;
          }
        }
      }
    LABEL_134:
      result = v65;
      goto LABEL_135;
    }
  }
LABEL_136:
  v69 = GameData_21d92e0;
  if (GameData_21d92e0 == 1) {
    v70 = *GameData_212cfb8[0];
    if (*GameData_212cfb8[0] == 0) {
      goto LABEL_155;
    }
    v71 = *(_QWORD*)(v70 + 16);
    v72 = *(__int64**)(v71 + 32);
    v73 = *(__int64**)(v71 + 40);
    if (v72 == v73) {
      v69 = 1;
    }
    else {
      do {
        v74 = *v72++;
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v74 + 680LL))(v74);
      } while (v72 != v73);
      v69 = GameData_21d92e0;
    }
  }
  if (v69 == 6 || v69 == 1) {
    LODWORD(v70) = 0;
  }
  else {
    LODWORD(v70) = 8;
  }
LABEL_155:
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                        v1 +
                                                                    32LL) -
                                                         8LL) +
                                              40LL) +
                                   16LL) +
                        288LL) +
             936LL) = v70;
  return result;
}

__int64 GameView_7c5c00()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v0 = *(_QWORD*)(game_g_frame_clock + 13224);
  v1 = *(_QWORD*)(v0 + 48);
  v2 = *(_QWORD*)(v0 + 56);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    v3 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 232LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      result = std___1___shared_weak_count___release_weak(v2);
    }
  }
  else {
    v3 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 232LL);
  }
  v5 = *(_DWORD*)(v3 + 2216);
  *(_BYTE*)(v3 + 2184) = 1;
  v6 = game_g_frame_clock;
  *(_DWORD*)(v3 + 2180) = v5;
  v7 = *(_QWORD*)(v6 + 13224);
  v8 = *(_QWORD*)(v7 + 48);
  v9 = *(_QWORD*)(v7 + 56);
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    v10 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 232LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      result = std___1___shared_weak_count___release_weak(v9);
    }
  }
  else {
    v10 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 232LL);
  }
  if (*(_BYTE*)(v10 + 2184) == 1) {
    *(_DWORD*)(v10 + 2180) = 1065353216;
    *(_BYTE*)(v10 + 2184) = 1;
  }
  return result;
}

bool game_GameView_Update_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 i;
  int v7;
  int v9;
  __int64 v10;

  v2 = *a2;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212d308,
                            memory_order_acquire) &
       1) == 0) {
    v10 = v2;
    v9 = __cxa_guard_acquire(&GameData_21d9320);
    v2 = v10;
    if (v9 != 0) {
      GameData_21d9318 = wld_Crc32(0, "MapAnimModule", 0xDu);
      __cxa_guard_release(&GameData_21d9320);
      v2 = v10;
    }
  }
  v4 = *(_QWORD*)(v2 + 504);
  v3 = *(_QWORD*)(v2 + 512);
  v5 = v3;
  for (i = v3; i != v4; i -= 16) {
    v7 = *(_DWORD*)(i - 16);
    v5 -= 16;
    if (v7 == GameData_21d9318) {
      if (v3 != v5) {
        return *(_QWORD*)(v5 + 8) == 0;
      }
      return true;
    }
  }
  return true;
}

#pragma GCC visibility pop
