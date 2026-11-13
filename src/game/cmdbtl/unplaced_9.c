#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CmdbtlPartyNatives_e9a800(_QWORD*, __int64);
_QWORD* game_map_18c51a0(__int64, __int64, __int64, char);
__attribute__((swiftcall)) void UnitActor_81d430(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_f4ec40(PSEUDO_X8, _QWORD*, __int64,
                                            __int64*, __int64*, float);
__int64* game_8224a0(unsigned __int8);
__int64 BattleInfo_797e40(__int64, unsigned __int8*);
__int64 BattleScenes_7a7a20(__int64, unsigned __int8*, __int64);
__int64 CharacterBuilder_1084a50(__int64, _BYTE*);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0a8e0(__int64, unsigned __int64, unsigned __int64,
                            const char*, unsigned __int64);
__int64 GameRoutine_9db9e0(unsigned int, unsigned int);
__int64 JobFile_6763c0(__int64, unsigned __int8*, __int64);
__int64 MapBattleHUD_18c53e0(__int64 result, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_UnitGrow_Clamp(__int64 result);
__int64 game_Unit_GetJob(__int64);
__int64 game_cmdbtl_1006570(__int64, unsigned __int8*);
__int64 memchr(__int64, int, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
bool GameRoutine_7fcd20(__int64, __int64);
bool GameRoutine_8c4ee0(__int64);
extern _DWORD* game_g_shared_system_skills_ptr_alt1 __asm__(
    "game_g_shared_system_skills_ptr");
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fec818[])();
extern __int64 (*GameData_20006f8[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d570[7];
extern __int64* GameData_212ea58;
extern __int64 GameData_212f508[7];
extern __int64 GameData_21ca2f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_empty_item;
extern char GameData_1a9f09e;
extern unsigned __int8 GameData_1b59c6a[13];
float MapBattleHUD_18c5bc0(__int64, char);
int __cxa_guard_acquire(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_fa64f0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_cmdbtl_f33800(__int64 a1);
void game_cmdbtl_1005e20(__int64* a1, __int64 a2, unsigned __int8 a3);

void game_cmdbtl_f33800(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  int v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  signed __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;
  _BYTE* v24;
  signed __int64 v25;
  __int64 v26;
  __int64 v27;
  int v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int128 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  _QWORD* v40;
  char v41;
  float v42;
  __int64 v43;
  __int64 v44;
  float v45;
  __int64* v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  float v51;
  int v52;
  int v53;
  float v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  int v58;
  __int64 v59;
  struct {
    __int64* v60;
    __int64 v61;
  } v60_;
  struct {
    __int64 v62;
    __int64 v63;
  } v62_;
  _BYTE v64[24];
  struct {
    __int128 v65;
    __int64* v66;
    char gap88_[8];
    __int128* v67;
  } v65_;
  float32x4_t v68;

  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
  if (game_ProcGameSkipView_instance_ != 0 &&
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 <=
          2) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return;
    }
  }
  v4 = *(unsigned __int8*)(a1 + 160);
  v5 = *(_QWORD*)(a1 + 152);
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((unsigned int)(v4 - 2) >= 4) {
    if (v4 != 1) {
      *(_WORD*)v64 = 0;
      goto LABEL_56;
    }
    v9 = game_g_shared_system_skills_ptr;
    LODWORD(v65_.v65) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x17CLL) +
                                   game_g_shared_system_skills_ptr) &
                        0xFFF;
    if ((game_HasSkill((_QWORD*)(v5 + 1744), (unsigned int*)&v65_.v65) & 1) !=
        0) {
      v10 = "Bmap_OverBraze_C_Start";
    }
    else {
      LODWORD(v65_.v65) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x180LL) + v9) & 0xFFF;
      if ((game_HasSkill((_QWORD*)(v5 + 1744), (unsigned int*)&v65_.v65) & 1) !=
          0) {
        v10 = "Bmap_OverBraze_B_Start";
      }
      else {
        LODWORD(v65_.v65) =
            *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x178LL) + v9) & 0xFFF;
        game_HasSkill((_QWORD*)(v5 + 1744), (unsigned int*)&v65_.v65),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
        v10 = "Bmap_OverBraze_A_Start";
      }
    }
    v20 = *(_QWORD*)v10;
    v21 = *((_QWORD*)v10 + 1);
    v22 = *(_QWORD*)(v10 + 14);
    v64[23] = 0;
    v64[0] = 44;
    v23 = &v64[23];
    v24 = &v64[1];
    *(_QWORD*)&v64[9] = v21;
    *(_QWORD*)&v64[15] = v22;
    v25 = 22;
    *(_QWORD*)&v64[1] = v20;
  LABEL_39:
    v26 = (__int64)v24;
    do {
      v27 = memchr(v26, 66, v25 - 4),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v27 == 0) {
        break;
      }
      if (*(_DWORD*)v27 == 1885433154 && *(_BYTE*)(v27 + 4) == 95) {
        if ((_BYTE*)v27 != v23 && v27 - (_QWORD)v24 != -1) {
          GameRoutine_1a0a8e0((__int64)v64, v27 - (_QWORD)v24, 5u,
                              &GameData_1a9f09e, 0),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v25 = (unsigned __int64)v64[0] >> 1;
          if ((v64[0] & 1) != 0) {
            v24 = *(_BYTE**)&v64[16];
          }
          else {
            v24 = &v64[1];
          }
          if ((v64[0] & 1) != 0) {
            v25 = *(_QWORD*)&v64[8];
          }
          v23 = &v24[v25];
          if (v25 > 4) {
            goto LABEL_39;
          }
        }
        break;
      }
      v26 = v27 + 1;
      v25 = (signed __int64)&v23[-v26];
    } while ((__int64)&v23[-v26] >= 5);
  }
  else {
    v7 = game_g_shared_system_skills_ptr;
    LODWORD(v65_.v65) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x17CLL) +
                                   game_g_shared_system_skills_ptr) &
                        0xFFF;
    if ((game_HasSkill((_QWORD*)(v5 + 1744), (unsigned int*)&v65_.v65) & 1) !=
        0) {
      v8 = "Bmap_OverBraze_C_Cancel";
    }
    else {
      LODWORD(v65_.v65) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x180LL) + v7) & 0xFFF;
      if ((game_HasSkill((_QWORD*)(v5 + 1744), (unsigned int*)&v65_.v65) & 1) !=
          0) {
        v8 = "Bmap_OverBraze_B_Cancel";
      }
      else {
        LODWORD(v65_.v65) =
            *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x178LL) + v7) & 0xFFF;
        game_HasSkill((_QWORD*)(v5 + 1744), (unsigned int*)&v65_.v65),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
        v8 = "Bmap_OverBraze_A_Cancel";
      }
    }
    v11 = fw_memory_HeapManager_Allocate(*v6, 26, 16, 0),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
    v12 = 23;
    *(_BYTE*)(v11 + 23) = 0;
    v13 = (_BYTE*)(v11 + 23);
    v14 = (_BYTE*)v11;
    *(_QWORD*)v64 = 27;
    v15 = *(_QWORD*)v8;
    v16 = *((_QWORD*)v8 + 1);
    *(_QWORD*)&v64[8] = 23;
    *(_QWORD*)&v64[16] = v11;
    *(_QWORD*)v11 = v15;
    *(_QWORD*)(v11 + 8) = v16;
    *(_QWORD*)(v11 + 15) = *(_QWORD*)(v8 + 15);
  LABEL_18:
    v17 = (__int64)v14;
    do {
      v18 = memchr(v17, 66, v12 - 4),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v18 == 0) {
        break;
      }
      if (*(_DWORD*)v18 == 1885433154 && *(_BYTE*)(v18 + 4) == 95) {
        if ((_BYTE*)v18 != v13 && v18 - (_QWORD)v14 != -1) {
          GameRoutine_1a0a8e0((__int64)v64, v18 - (_QWORD)v14, 5u,
                              &GameData_1a9f09e, 0),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v12 = (unsigned __int64)v64[0] >> 1;
          if ((v64[0] & 1) != 0) {
            v14 = *(_BYTE**)&v64[16];
          }
          else {
            v14 = &v64[1];
          }
          if ((v64[0] & 1) != 0) {
            v12 = *(_QWORD*)&v64[8];
          }
          v13 = &v14[v12];
          if (v12 > 4) {
            goto LABEL_18;
          }
        }
        break;
      }
      v17 = v18 + 1;
      v12 = (signed __int64)&v13[-v17];
    } while ((__int64)&v13[-v17] >= 5);
  }
  GameRoutine_1a09ce0((__int64)v64, "_CommandBattle", 0xEu),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
LABEL_56:
  v29 = v64[0] & 1;
  v30 = (unsigned __int64)v64[0] >> 1;
  if (v29 != 0) {
    v30 = *(_QWORD*)&v64[8];
  }
  if (v30 == 0) {
    goto LABEL_111;
  }
  v31 = *(_QWORD*)(a1 + 152);
  v62_.v62 = 0;
  v62_.v63 = 0;
  v65_.v67 = &v65_.v65;
  v32 = (_QWORD*)*GameData_212ea58;
  LANES128(v68).n128_u64[0] = v31;
  *(_QWORD*)&v65_.v65 = GameData_1fec818;
  *((_QWORD*)&v65_.v65 + 1) = &v68;
  v65_.v66 = &v62_.v62;
  CmdbtlPartyNatives_e9a800(v32, (__int64)&v65_.v65),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v65_.v67 == &v65_.v65) {
    v33 = 32;
  }
  else {
    if (v65_.v67 == nullptr) {
      goto LABEL_64;
    }
    v33 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v65_.v67 + v33))((__int64)v65_.v67),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
LABEL_64:
  if (v62_.v62 != 0) {
    v34 = CharacterBuilder_1084a50(*(_QWORD*)(v62_.v62 + 208), "Loc_C_Trans"),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v34 != 0) {
      v35 = *(_OWORD*)(v34 + 48);
      LOBYTE(v65_.v66) = 1;
      v65_.v65 = v35;
      v36 = *(_QWORD**)GameData_212f508[0];
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0) {
        v57 = v36;
        v58 = __cxa_guard_acquire((__int64)&GameData_21a6130),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
        v36 = v57;
        if (v58 != 0) {
          v59 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v59;
          __cxa_guard_release((__int64)&GameData_21a6130),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v36 = v57;
        }
      }
      game_f4ec40((void*)(&v60_.v60), v36, (__int64)v64, (__int64*)&v65_.v65,
                  (__int64*)&GameData_21a6120,
                  COERCE_AS(float, (unsigned int)(COERCE_UNSIGNED_INT(
                                       0x1.0000000000000p+0f)))),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
      v37 = v60_.v61;
      if (v60_.v61 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v60_.v61 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
        std___1___shared_weak_count___release_weak(v37),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
      }
    }
    else {
      LOBYTE(v65_.v65) = 0;
      LOBYTE(v65_.v66) = 0;
    }
    v38 = *(unsigned __int8*)(a1 + 160);
    if (v38 <= 2) {
      if (v38 == 1) {
        v43 = *(_QWORD*)(a1 + 152);
        if (v43 != 0) {
          v44 = *GameData_212d570[0];
          if (*GameData_212d570[0] != 0) {
            UnitActor_81d430((void*)(&v68), *(_QWORD*)(a1 + 152)),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            game_map_18c51a0(v44, (__int64)&v68, v43, 1),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
        }
        goto LABEL_98;
      }
      if (v38 == 2) {
        goto LABEL_78;
      }
    }
    else {
      if (v38 - 3 < 2) {
        v39 = *(_QWORD*)(a1 + 152);
        goto LABEL_79;
      }
      if (v38 == 5) {
      LABEL_78:
        v40 = (_QWORD*)(*(_QWORD*)(a1 + 152) + 1744LL);
        LANES128(v68).n128_u32[0] =
            *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x210LL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
        v41 = game_HasSkill(v40, (unsigned int*)&v68),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
        v39 = *(_QWORD*)(a1 + 152);
        if ((v41 & 1) == 0) {
          v42 = MapBattleHUD_18c5bc0(v39, 1);
        LABEL_84:
          v45 = v42;
          v46 = game_8224a0(0x1Au),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
          if (game_GameModeData_instance_ != 0) {
            v47 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)v46),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
            if (v47 != 0 && *(_DWORD*)(v47 + 32) == 1) {
              v45 = v45 + v45;
            }
          }
          v48 = (int)(float)(v45 * 0x1.e000000000000p+5f);
          if (v48 >= 1) {
            if (game_ProcGameSkipView_instance_ == 0 ||
                *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
                (((v49 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) &
                  8) != 0
                     ? (v50 = 2)
                     : (v50 = 3),
                 (v50 & v49) != 0)) {
              v51 = (float)(unsigned int)v48;
              if (*(float*)(a1 + 144) >= (float)(unsigned int)v48) {
                v51 = *(float*)(a1 + 144);
              }
              *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x20;
              *(float*)(a1 + 144) = v51;
            }
          }
          goto LABEL_98;
        }
      LABEL_79:
        MapBattleHUD_18c53e0(v39, 1),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
        goto LABEL_84;
      }
    }
  LABEL_98:
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v52 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v53 = 2)
             : (v53 = 3),
         (v53 & v52) != 0)) {
      v54 = *(float*)(a1 + 144);
      if (v54 < 0x1.6800000000000p+6f) {
        v54 = 0x1.6800000000000p+6f;
      }
      *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x20;
      *(float*)(a1 + 144) = v54;
    }
  }
  v55 = v62_.v63;
  if (v62_.v63 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62_.v63 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
    std___1___shared_weak_count___release_weak(v55),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v29 = v64[0] & 1;
LABEL_111:
  if (v29 != 0 && *(_QWORD*)&v64[16] != 0) {
    v56 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v56 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v56, *(__int64*)&v64[16]),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s0", "=w"));
  }
}

void game_cmdbtl_1005e20(__int64* a1, __int64 a2, unsigned __int8 a3)
{
  __int64* v6;
  _QWORD* v7;
  atomic_ullong* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _DWORD* v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  _BYTE* v19;
  __int64* v20;
  int v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  int v38;
  int v39;
  __int64 v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  int v45;
  int v46;
  int v47;
  __int64 v48;
  int v49;
  int v50;
  int v51;
  __int64 v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  int v57;
  int v58;
  __int64* v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  signed __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;

  if (a2 != 0) {
    v6 = (__int64*)fw_memory_g_heap_manager_ptr;
    v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 120, 16, 0);
    v7[1] = 0;
    v8 = (atomic_ullong*)(v7 + 1);
    v9 = (__int64)v7;
    v7[2] = 0;
    v7[4] = 0;
    v7[5] = 0;
    v7[3] = 0;
    v10 = (__int64)(v7 + 3);
    *v7 = GameData_20006f8;
    v11 = a2 + 760LL * a3;
    v7[6] = 0;
    v7[7] = 0;
    v12 = *(_QWORD**)(v11 + 40);
    v7[8] = 0;
    v7[9] = 0;
    v7[10] = 0;
    v7[11] = 0;
    v7[12] = 0;
    v7[13] = 0;
    v7[14] = 0;
    if (v12 != nullptr && v12[49] != 0) {
      v13 = *(_QWORD*)(v11 + 24);
      v14 = (_DWORD*)game_g_shared_system_skills_ptr_alt1;
      v72 = *game_g_shared_system_skills_ptr_alt1 & 0xFFF;
      if ((game_HasSkill(v12 + 218, (unsigned int*)&v72) & 1) == 0 ||
          ((v15 = v12[55]) == 0 ? (v16 = 9) : (v16 = *(_BYTE*)(v15 + 16)),
           ((1 << v16) & 0xF1) == 0)) {
        v17 = v11 + 16;
        if ((*(_BYTE*)(*(_QWORD*)(v17 + 8) + 11276LL) & 1) != 0 ||
            (*(_BYTE*)(v17 + 124) & 1) == 0) {
          v18 = *(unsigned int*)(v13 + 11256);
          if ((_DWORD)v18 != 0) {
            v19 = (_BYTE*)(v13 + 3068);
            while (*v19 != 22 || *(v19 - 2) != *(_BYTE*)(v17 + 16)) {
              --v18;
              v19 += 64;
              if (v18 == 0) {
                goto LABEL_17;
              }
            }
            goto LABEL_73;
          }
        LABEL_17:
          v20 = (__int64*)(v17 + 44);
          v21 = *(unsigned __int16*)(v17 + 44);
          *(_DWORD*)(v9 + 111) = 0;
          *(_QWORD*)(v9 + 96) = 0;
          *(_QWORD*)(v9 + 104) = 0;
          *(_QWORD*)(v9 + 80) = 0;
          *(_QWORD*)(v9 + 88) = 0;
          *(_QWORD*)(v9 + 64) = 0;
          *(_QWORD*)(v9 + 72) = 0;
          *(_QWORD*)(v9 + 48) = 0;
          *(_QWORD*)(v9 + 56) = 0;
          *(_QWORD*)(v9 + 32) = 0;
          *(_QWORD*)(v9 + 40) = 0;
          *(_QWORD*)(v9 + 24) = v12;
          if (v21 == 0) {
            v22 = *(unsigned int*)(v17 + 40);
            if ((v22 & 0x80000000) != 0) {
              v20 = &game_g_empty_item;
            }
            else {
              v20 = (__int64*)(*(_QWORD*)(v17 + 24) + 8 * v22 + 828);
            }
          }
          v23 = GameData_212c878[0];
          v24 = *(_QWORD*)(v17 + 56);
          *(_QWORD*)(v9 + 96) =
              *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                         8LL * *(unsigned __int16*)v20);
          *(_QWORD*)(v9 + 104) = v24;
          v72 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) + (_QWORD)v14) & 0xFFF;
          if ((game_HasSkill(v12 + 218, (unsigned int*)&v72) & 1) == 0) {
            v25 = v12[55];
            if (v25 != 0) {
              v26 = *(unsigned __int8*)(v25 + 16);
              if (((1 << v26) & 0xF1) != 0) {
                v72 = *(_DWORD*)v14 & 0xFFF;
                game_HasSkill(v12 + 218, (unsigned int*)&v72);
              LABEL_27:
                LOBYTE(v72) = *(_BYTE*)(v17 + 16);
                if ((BattleInfo_797e40(v13, (unsigned __int8*)&v72) & 1) != 0 &&
                    v12[51] == 0) {
                  v32 = *(_QWORD*)(*(_QWORD*)(v12[50] + 24LL) + 1104LL);
                  if (v32 != 0 &&
                      !GameRoutine_7fcd20((__int64)(v12 + 64), v32)) {
                    v33 = GameRoutine_9db9e0(2u, 1u);
                    *(_DWORD*)(v9 + 36) = v33 & ~(v33 >> 31);
                  }
                }
                v27 = *(unsigned __int8*)(v17 + 16);
                LOBYTE(v72) = *(_BYTE*)(v17 + 16);
                if ((BattleInfo_797e40(v13, (unsigned __int8*)&v72) & 1) != 0 &&
                    ((v27 & 0xFFFFFFFD) == 0 || *(_BYTE*)(v13 + 11272) == 1)) {
                  v28 = game_Unit_GetJob((__int64)v12);
                  LOBYTE(v72) = *(_BYTE*)(v17 + 16);
                  if ((int)BattleScenes_7a7a20(
                          v13 + 3056, (unsigned __int8*)&v72, 0) >= 1) {
                    v29 = *(unsigned int*)(v17 + 40);
                    if ((v29 & 0x80000000) != 0 ||
                        (v30 = *(_QWORD*)(v17 + 24)) == 0) {
                      v31 = &game_g_empty_item;
                    }
                    else {
                      v31 = (__int64*)(v30 + 8 * v29 + 828);
                    }
                    v34 = *(unsigned __int16*)v31;
                    if (v34 != 0) {
                      v35 =
                          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v23 + 64) +
                                                         8 * v34) +
                                              72LL);
                      if ((_DWORD)v35 != 15) {
                        LOBYTE(v72) =
                            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v23 + 64) +
                                                 8 * v34) +
                                      72LL);
                        v36 = game_cmdbtl_1006570((__int64)v12,
                                                  (unsigned __int8*)&v72);
                        if ((unsigned int)v35 <= 0xC && (_DWORD)v35 != 7) {
                          v38 = GameRoutine_9db9e0(GameData_1b59c6a[v35], v36);
                          v36 = v38 & ~(v38 >> 31);
                        }
                        *(_DWORD*)(v9 + 4 * v35 + 44) = v36;
                      }
                    }
                  }
                  LOBYTE(v72) = 8;
                  if ((JobFile_6763c0(v28, (unsigned __int8*)&v72,
                                      (__int64)v12) &
                       0x80000000) == 0) {
                    LOBYTE(v72) = 8;
                    game_Unit_GetJob((__int64)v12);
                    v39 = *(char*)(v12[49] + 605LL);
                    v40 = game_Unit_GetJob((__int64)v12);
                    v41 = JobFile_6763c0(v40, (unsigned __int8*)&v72,
                                         (__int64)v12);
                    v42 = GameRoutine_9db9e0(
                        0xAu, (v41 + v39) & (unsigned int)~((v41 + v39) >> 31));
                    *(_DWORD*)(v9 + 76) = v42 & ~(v42 >> 31);
                  }
                  LOBYTE(v72) = 9;
                  if ((JobFile_6763c0(v28, (unsigned __int8*)&v72,
                                      (__int64)v12) &
                       0x80000000) == 0) {
                    LOBYTE(v72) = 9;
                    game_Unit_GetJob((__int64)v12);
                    v43 = *(char*)(v12[49] + 606LL);
                    v44 = game_Unit_GetJob((__int64)v12);
                    v45 = JobFile_6763c0(v44, (unsigned __int8*)&v72,
                                         (__int64)v12);
                    v46 = GameRoutine_9db9e0(
                        0xBu, (v45 + v43) & (unsigned int)~((v45 + v43) >> 31));
                    *(_DWORD*)(v9 + 80) = v46 & ~(v46 >> 31);
                  }
                  LOBYTE(v72) = 10;
                  if ((JobFile_6763c0(v28, (unsigned __int8*)&v72,
                                      (__int64)v12) &
                       0x80000000) == 0) {
                    LOBYTE(v72) = 10;
                    game_Unit_GetJob((__int64)v12);
                    v47 = *(char*)(v12[49] + 607LL);
                    v48 = game_Unit_GetJob((__int64)v12);
                    v49 = JobFile_6763c0(v48, (unsigned __int8*)&v72,
                                         (__int64)v12);
                    v50 = GameRoutine_9db9e0(
                        0xCu, (v49 + v47) & (unsigned int)~((v49 + v47) >> 31));
                    *(_DWORD*)(v9 + 84) = v50 & ~(v50 >> 31);
                  }
                  LOBYTE(v72) = 11;
                  if ((JobFile_6763c0(v28, (unsigned __int8*)&v72,
                                      (__int64)v12) &
                       0x80000000) == 0) {
                    LOBYTE(v72) = 11;
                    game_Unit_GetJob((__int64)v12);
                    v51 = *(char*)(v12[49] + 608LL);
                    v52 = game_Unit_GetJob((__int64)v12);
                    v53 = JobFile_6763c0(v52, (unsigned __int8*)&v72,
                                         (__int64)v12);
                    v54 = GameRoutine_9db9e0(
                        0xDu, (v53 + v51) & (unsigned int)~((v53 + v51) >> 31));
                    *(_DWORD*)(v9 + 88) = v54 & ~(v54 >> 31);
                  }
                  LOBYTE(v72) = 12;
                  if ((JobFile_6763c0(v28, (unsigned __int8*)&v72,
                                      (__int64)v12) &
                       0x80000000) == 0) {
                    LOBYTE(v72) = 12;
                    game_Unit_GetJob((__int64)v12);
                    v55 = *(char*)(v12[49] + 609LL);
                    v56 = game_Unit_GetJob((__int64)v12);
                    v57 = JobFile_6763c0(v56, (unsigned __int8*)&v72,
                                         (__int64)v12);
                    v58 = GameRoutine_9db9e0(
                        0xEu, (v57 + v55) & (unsigned int)~((v57 + v55) >> 31));
                    *(_DWORD*)(v9 + 92) = v58 & ~(v58 >> 31);
                  }
                }
                game_UnitGrow_Clamp(v10);
                if (GameRoutine_8c4ee0(v10)) {
                  v59 = (__int64*)a1[1];
                  v60 = a1[2];
                  if ((unsigned __int64)v59 >= v60) {
                    v62 = *a1;
                    v63 = (signed __int64)v59 - *a1;
                    v64 = (v63 >> 4) + 1;
                    if (v64 >> 60 != 0) {
                      GameRoutine_fa64f0();
                    }
                    v65 = v60 - v62;
                    if (v65 >> 3 > v64) {
                      v64 = v65 >> 3;
                    }
                    if ((unsigned __int64)v65 >= 0x7FFFFFFFFFFFFFF0LL) {
                      v66 = 0xFFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v66 = v64;
                    }
                    if (v66 >> 60 != 0) {
                      GameRoutine_60a210();
                    }
                    v67 = fw_memory_HeapManager_Allocate(*v6, 16 * v66, 16, 0);
                    v68 = (__int64*)(v67 + v63);
                    v69 = v67 + 16 * v66;
                    *v68 = v10;
                    v68[1] = v9;
                    v70 = v67 + v63 - 16 * (v63 >> 4);
                    v61 = v67 + v63 + 16;
                    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8),
                                              1u, memory_order_relaxed);
                    memcpy(v70, v62, v63);
                    *a1 = v70;
                    a1[1] = v61;
                    a1[2] = v69;
                    if (v62 != 0) {
                      v71 = 128;
                      if (*(_QWORD*)(*v6 + 200) == 0) {
                        v71 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v6 + v71, v62);
                    }
                  }
                  else {
                    *v59 = v10;
                    v59[1] = v9;
                    v61 = (__int64)(v59 + 2);
                    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8),
                                              1u, memory_order_relaxed);
                  }
                  a1[1] = v61;
                }
                goto LABEL_73;
              }
              if (v26 == 3 && GameData_21ca2f8 != 0) {
                goto LABEL_27;
              }
            }
          }
        }
      }
    }
  LABEL_73:
    if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
  }
}

#pragma GCC visibility pop
