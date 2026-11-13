#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcUseItemSeq_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcUseItemSeq_Destructor(__int64 a1);
__int64 ProcUseItemSeq_DeletingDestructor(__int64 a1);
__int64 GameRoutine_7fa250(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_81a990(void);
__int64 GameRoutine_8c4ee0(_QWORD);
__int64 ProcUseItemSeq_8b2310(__int64 a1);
__int64 ProcUseItemSeq_8b24a0(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_eb5ba0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void TransporterConst_89c190(PSEUDO_X8, __int64,
                                                        int);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64** game_8aef60(__int64**, unsigned __int16*, __n128);
__int64 GameRoutine_17673a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_177a2e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_177af50(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7fbaa0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_eb5e20(_QWORD, _QWORD);
__int64 GameRoutine_eb62f0(_QWORD);
__int64 UnitItem_6e91b0(_QWORD, _QWORD);
__int64 UnitItem_8439c0(_QWORD, _QWORD);
__int64 Unit_6ca760(_QWORD, _QWORD);
__int64 Unit_6cb080(_QWORD, _QWORD);
__int64 Unit_6cd9c0(_QWORD, _QWORD);
__int64 game_7fbb60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_996d60(void);
__int64 game_ItemSeq_GainBind(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParamLimit(_QWORD, _QWORD);
__int64 game_Unit_Recover(_QWORD, _QWORD);
__int64 game_Unit_RemoveItem(__int64, unsigned int);
__int64 game_Unit_Unknown6c4610(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
bool game_UnitItem_Restore(unsigned __int16*, int);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1fa8e28[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212ea58;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* game_vstring_kEmpty_ptr[2];
extern __int64 GameData_21c9608;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_2203490;
extern __int64 GameData_22400f8;
extern __int64 game_TransporterConst_List_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern int GameData_21d97bc;
__int64 game_anonymous_ProcUseItemSeq_Use(__int64 result);
__int64 ProcUseItemSeq_8b2360(__int64 a1);
__int64 ProcUseItemSeq_8b24b0_alt1(__int64 result,
                                   __n128 a2) __asm__("ProcUseItemSeq_8b24b0");
__int64* game_8aef60_alt1(__int64, unsigned __int16*) __asm__("game_8aef60");
__int64 game_ItemSeq_GainBind_alt1(__int64, __int64**, __int64, __int64*,
                                   __int64*) __asm__("game_ItemSeq_GainBind");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcUseItemSeq_8b24b0(__int64 a1);
__attribute__((swiftcall)) void
GameRoutine_eb5ba0_alt1(PSEUDO_X8, int) __asm__("GameRoutine_eb5ba0");
__int64 GameHr_17673a0(__int64, __int64, __int64);
__int64 GameHr_177af50(__int64, __int64, unsigned int, unsigned int);
__int64 GameHr_eb5e20(__int64 result, __int64**);
__int64 GameHr_eb62f0(int);
__int64 GameRoutine_177a2e0_alt1(__int64, __int64, char, int, int,
                                 int) __asm__("GameRoutine_177a2e0");
__int64 GameRoutine_7fbaa0_alt1(__int64 result, unsigned __int8*,
                                int) __asm__("GameRoutine_7fbaa0");
__int64 UnitItem_6e91b0_alt1(__int64, __int64) __asm__("UnitItem_6e91b0");
__int64 Unit_6ca760_alt1(__int64, _DWORD*) __asm__("Unit_6ca760");
__int64 Unit_6cb080_alt1(__int64, _WORD*) __asm__("Unit_6cb080");
__int64 Unit_6cd9c0_alt1(__int64) __asm__("Unit_6cd9c0");
__int64 game_7fbb60_alt1(__int64, __int64, unsigned __int8*,
                         int) __asm__("game_7fbb60");
__int64 game_996d60_alt1(__int64, int, int) __asm__("game_996d60");
__int64 game_Unit_GetParamLimit_alt1(_QWORD*, unsigned __int8*) __asm__(
    "game_Unit_GetParamLimit");
__int64 game_Unit_GetParam_alt1(__int64) __asm__("game_Unit_GetParam");
__int64 game_Unit_Recover_alt1(__int64, int) __asm__("game_Unit_Recover");
__int64
game_Unit_Unknown6c4610_alt1(__int64) __asm__("game_Unit_Unknown6c4610");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, __int64, __int64, __int64, unsigned int,
                    unsigned int, int, float, float) __asm__("snd_play_ff2d0");
bool UnitItem_8439c0_alt1(unsigned int*, _QWORD*) __asm__("UnitItem_8439c0");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");

__int64 game_anonymous_ProcUseItemSeq_Use(__int64 result)
{
  _QWORD handle[2];
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int16* v4;
  __int64* v5;
  __int64 v6;
  unsigned int v7;
  char v8;
  unsigned int v9;
  unsigned int v10;
  char v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  _QWORD* v19;
  _DWORD* v20;
  _DWORD* v21;
  _WORD* v22;
  _WORD* i;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  unsigned int* v27;
  unsigned int* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int16* v32;
  unsigned int v33;
  char v34;
  __int64 v35;
  char v36;
  int v37;
  int v38;
  __int64 v39;
  int v40;
  unsigned int v41;
  __int64 v42;
  unsigned int v43;
  __int64 v44;
  int v45;
  __int64 v46;
  int v47;
  _QWORD* v48;
  int v49;
  __int64 v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  unsigned int v56;
  int v57;
  __int64* v58;
  int v59;
  __int64* v60;
  unsigned int v61;
  __int64 v62;
  __int64 v63;
  struct {
    _QWORD v64[4];
    _QWORD* v65;
    char gap56_[168];
    __int64 vars0;
    __int64 vars8;
  } v64_;
  struct {
    __int64* vars28;
    __int64* vars30;
    char gap280_[8];
    __int64 vars40;
    __int64 vars48;
  } vars28_;

  v1 = *(_QWORD*)(result + 152);
  v2 = *(int*)(result + 256);
  v3 = result;
  if (v1 != 0) {
    v4 = (unsigned __int16*)(v1 + 8 * v2 + 828);
    if (*v4 == 0) {
      return result;
    }
  }
  else {
    v4 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * (int)v2 + 4);
    if (*v4 == 0) {
      return result;
    }
  }
  result = UnitItem_6e91b0_alt1((__int64)v4, *(_QWORD*)(result + 264));
  if ((result & 1) == 0) {
    return result;
  }
  v5 = GameData_212c878[0];
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v4);
  v7 = *(unsigned __int8*)(v6 + 73);
  if (v7 <= 4) {
    if (v7 != 2) {
      if (v7 == 3) {
        return GameHr_eb62f0(*(unsigned __int8*)(v6 + 88) >>
                             ((*((_BYTE*)v4 + 3) & 8) != 0));
      }
      if (v7 == 4) {
        v12 = *(_QWORD*)(v3 + 264);
        LOWORD(v64_.v64[0]) = 128;
        return Unit_6cd9c0_alt1(v12);
      }
      return result;
    }
    v17 = *(unsigned __int8*)(v6 + 88) >> ((*((_BYTE*)v4 + 3) & 8) != 0);
    if (GameData_21f3d10 != 0 && *(_BYTE*)(GameData_21f3d10 + 9) == 1) {
      if (*(_DWORD*)(GameData_21f3d10 + 136) == 1 || *GameData_212ea58 != 0) {
      LABEL_46:
        result = v17;
        if (GameData_2203490 == 0 && GameData_21f3d10 != 0 &&
            *(_BYTE*)(GameData_21f3d10 + 9) == 1 &&
            *(_DWORD*)(GameData_21f3d10 + 136) == 1 && GameData_21c9608 != 0) {
          vars28_.vars40 = v64_.vars0;
          vars28_.vars48 = v64_.vars8;
          v56 = v17;
          if ((*(_QWORD*)(GameData_21c9608 + 328) & 4LL) != 0) {
            v57 = 1;
          }
          else {
            v57 = *(_DWORD*)(GameData_21c9608 + 308);
          }
          GameRoutine_eb5ba0_alt1((void*)((__int64*)&vars28_.vars28), v57);
          v58 = vars28_.vars28;
          if (vars28_.vars28 == vars28_.vars30) {
            v59 = 0;
            v61 = v56;
          }
          else {
            v59 = 0;
            v60 = vars28_.vars28;
            v61 = v56;
            do {
              v62 = *v60++;
              v59 += *(__int16*)(v62 + 492);
            } while (v60 != vars28_.vars30);
          }
          GameHr_eb5e20(v59 + v61, &vars28_.vars28);
          if (v58 != nullptr) {
            v63 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v63 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v63, (__int64)v58);
          }
          return v56;
        }
        return result;
      }
    }
    else if (GameData_2203490 != 0) {
      goto LABEL_46;
    }
    return game_Unit_Recover_alt1(*(_QWORD*)(v3 + 264), v17);
  }
  if (*(unsigned __int8*)(v6 + 73) > 0xFu) {
    if (v7 != 16) {
      if (v7 == 17) {
        v13 = *(_QWORD*)(v6 + 376);
        if (v13 != 0 && ((v14 = *((_DWORD*)v4 + 1)) & 0x3FF0) != 0 &&
            (v15 = game_996d60_alt1(v13, ((v14 >> 4) & 0x3FF) - 1, 1000)) !=
                0) {
          v16 = *(_QWORD*)(v15 + 40);
        }
        else {
          v16 = 0;
        }
        *(_QWORD*)(v3 + 272) = v16;
        snd_Fade_Fade_10c830_alt1((__int64)v64_.v64, 0x0.0p+0f);
        snd_play_ff2d0_alt1((void*)(handle), (__int64)"SE_SYS_ItemUse_Box",
                            (__int64)"SE_SYS_ItemUse_Box", (__int64)v64_.v64, 0,
                            0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
        return snd_Fade_Destroy_Fade_alt1(v64_.v64);
      }
      return result;
    }
    v24 = v64_.v64;
    v25 = *(_QWORD**)(v3 + 264);
    v64_.v65 = v64_.v64;
    v64_.v64[0] = GameData_1fa8e28;
    v64_.v64[1] = v3;
    v26 = *(_QWORD*)(v6 + 24);
    v27 = *(unsigned int**)(v26 + 328);
    v28 = *(unsigned int**)(v26 + 336);
    if (v27 == v28) {
      goto LABEL_50;
    }
    do {
      if (UnitItem_8439c0_alt1(v27, v25) && v64_.v65 != nullptr) {
        (*(void (**)(_QWORD*, unsigned int*))(*v64_.v65 + 48LL))(v64_.v65, v27);
      }
      ++v27;
    } while (v27 != v28);
    v24 = v64_.v65;
    if (v64_.v65 == v64_.v64) {
    LABEL_50:
      v29 = 32;
    }
    else {
      if (v64_.v65 == nullptr) {
      LABEL_52:
        game_Unit_Unknown6c4610_alt1(*(_QWORD*)(v3 + 264));
        v30 = *(_QWORD*)(v3 + 152);
        v31 = *(int*)(v3 + 256);
        if (v30 != 0) {
          v32 = (unsigned __int16*)(v30 + 8 * v31 + 828);
        }
        else {
          v32 =
              (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                            game_TransporterConst_List_instance__ptr
                                                                [0] +
                                                        8LL) +
                                             8LL) +
                                  12LL * (int)v31 + 4);
        }
        return GameHr_17673a0(v3, *(_QWORD*)(v3 + 264),
                              *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * *v32));
      }
      v29 = 40;
    }
    (*(void (**)(__int64))(*v24 + v29))((__int64)v24);
    goto LABEL_52;
  }
  if (v7 != 5) {
    if (v7 != 15) {
      return result;
    }
    v8 = 0;
    v9 = 0;
    v10 = 11;
    v11 = 1;
    switch (*(_BYTE*)(v6 + 74)) {
    case 1:
      v11 = 0;
      v10 = 0;
      goto LABEL_75;
    case 2:
      v11 = 0;
      v8 = 1;
      v9 = 16;
      v10 = 1;
      break;
    case 3:
      v11 = 0;
      v10 = 2;
      goto LABEL_75;
    case 4:
      v11 = 0;
      v10 = 3;
      goto LABEL_75;
    case 5:
      v11 = 0;
      v10 = 4;
      goto LABEL_75;
    case 6:
      v11 = 0;
      v10 = 5;
      goto LABEL_75;
    case 7:
      v11 = 0;
      v10 = 6;
      goto LABEL_75;
    case 8:
      v11 = 0;
      v10 = 7;
      goto LABEL_75;
    case 9:
      v11 = 0;
      v10 = 8;
      goto LABEL_75;
    case 0xA:
      v11 = 0;
      v10 = 9;
      goto LABEL_75;
    case 0xB:
      v11 = 0;
      v10 = 10;
    LABEL_75:
      v9 = 16;
      v8 = 1;
      break;
    case 0xC:
      break;
    case 0xD:
      v8 = 0;
      v9 = 1;
      break;
    case 0xE:
      v8 = 0;
      v9 = 2;
      break;
    case 0xF:
      v8 = 0;
      v9 = 3;
      break;
    case 0x10:
      v8 = 0;
      v9 = 4;
      break;
    case 0x11:
      v8 = 0;
      v9 = 5;
      break;
    case 0x12:
      v8 = 0;
      v9 = 6;
      break;
    case 0x13:
      v8 = 0;
      v9 = 7;
      break;
    case 0x14:
      v8 = 0;
      v9 = 8;
      break;
    case 0x15:
      v8 = 0;
      v9 = 9;
      break;
    case 0x16:
      v8 = 0;
      v9 = 10;
      break;
    case 0x17:
      v8 = 0;
      v9 = 11;
      break;
    case 0x18:
      v8 = 0;
      v9 = 12;
      break;
    default:
      v10 = 11;
      v9 = 16;
      v8 = 1;
      v11 = 1;
      break;
    }
    v33 = *(unsigned __int8*)(v6 + 88);
    v34 = *((_BYTE*)v4 + 3);
    v35 = *(_QWORD*)(v3 + 264);
    v36 = (v34 & 8) != 0;
    if (v35 != 0) {
      LOBYTE(v64_.v64[0]) = 0;
      result = game_Unit_GetParam_alt1(v35);
      v37 = result;
      v38 = v33 >> v36;
      if ((v11 & 1) != 0) {
        goto LABEL_78;
      }
    }
    else {
      v37 = 0;
      v38 = v33 >> v36;
      if ((v11 & 1) != 0) {
      LABEL_78:
        if ((v8 & 1) == 0) {
          v39 = *(_QWORD*)(v3 + 264);
          v40 = *(unsigned __int16*)(v39 + 2LL * v9 + 514);
          LOBYTE(v64_.v64[0]) = v9;
          v41 =
              game_7fbb60_alt1(v39 + 512, v39, (unsigned __int8*)v64_.v64, v38);
          v42 = *(_QWORD*)(v3 + 264);
          v43 = v41;
          LOBYTE(v64_.v64[0]) = v9;
          GameRoutine_7fbaa0_alt1(v42 + 512, (unsigned __int8*)v64_.v64, v40);
          *(_QWORD*)(v3 + 160) = *(_QWORD*)(v3 + 264);
          *(_DWORD*)(v3 + 4LL * v9 + 180) = v43;
          result = GameHr_177af50(v3, *(_QWORD*)(v3 + 264), v9, v43);
        }
      LABEL_86:
        if (v35 != 0) {
          LOBYTE(v64_.v64[0]) = 0;
          result = game_Unit_GetParam_alt1(v35);
          v52 = result - v37;
          if ((_DWORD)result != v37) {
            v53 = *(__int16*)(v35 + 492);
            if ((int)result <= v37) {
              v52 = 0;
            }
            LOBYTE(v64_.v64[0]) = 0;
            v54 = v52 + v53;
            result = game_Unit_GetParam_alt1(v35);
            if (*(_WORD*)(v35 + 494) != 0 && v54 != *(__int16*)(v35 + 494)) {
              *(_WORD*)(v35 + 494) = 0;
            }
            if ((int)result >= v54) {
              v55 = v54;
            }
            else {
              v55 = result;
            }
            if (v54 < 0) {
              v55 = 0;
            }
            if (v55 != *(__int16*)(v35 + 492)) {
              *(_WORD*)(v35 + 492) = v55;
            }
          }
        }
        return result;
      }
    }
    v44 = *(_QWORD*)(v3 + 264);
    LOBYTE(v64_.v64[0]) = v10;
    v45 = game_Unit_GetParam_alt1(v44);
    v46 = *(_QWORD*)(v3 + 264);
    LOBYTE(v64_.v64[0]) = v10;
    v47 = game_Unit_GetParam_alt1(v46);
    v48 = *(_QWORD**)(v3 + 264);
    LOBYTE(v64_.v64[0]) = v10;
    v49 = game_Unit_GetParamLimit_alt1(v48, (unsigned __int8*)v64_.v64);
    v50 = *(_QWORD*)(v3 + 264) + 2LL * v10;
    v51 = *(__int16*)(v50 + 468) + v38;
    if (v51 <= -255) {
      v51 = -255;
    }
    if (v51 >= 255) {
      LOWORD(v51) = 255;
    }
    *(_WORD*)(v50 + 468) = v51;
    result =
        GameRoutine_177a2e0_alt1(v3, *(_QWORD*)(v3 + 264), v10, v45, v47, v49);
    goto LABEL_86;
  }
  v19 = *(_QWORD**)(v6 + 24);
  v20 = (_DWORD*)v19[41];
  v21 = (_DWORD*)v19[42];
  if (v20 != v21) {
    do {
      result = Unit_6ca760_alt1(*(_QWORD*)(v3 + 264), v20++);
    } while (v20 != v21);
    v19 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * *v4) + 24LL);
  }
  v22 = (_WORD*)v19[53];
  for (i = (_WORD*)v19[54]; v22 != i; v22 += 2) {
    result = Unit_6cb080_alt1(*(_QWORD*)(v3 + 264), v22);
  }
  return result;
}

__int64 ProcUseItemSeq_8b2310(__int64 a1)
{
  __int64 result;
  __int16 v3;
  char v4;

  result = GameRoutine_8c4ee0(a1 + 160);
  if ((result & 1) != 0) {
    v4 = 0;
    v3 = 0;
    *(_BYTE*)(a1 + 250) = 1;
    return GameRoutine_7fa250(a1, a1 + 160, &v3);
  }
  return result;
}

__int64 ProcUseItemSeq_8b2360(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 result;
  struct {
    char v9[4];
    int v10;
  } v9_;
  struct {
    char v11[4];
    int v12;
  } v11_;

  v1 = *(unsigned int*)(a1 + 256);
  v2 = *(_QWORD*)(a1 + 152);
  v11_.v11[0] = 2;
  v11_.v12 = v1;
  if (v2 != 0) {
    if ((v1 & 0x80000000) == 0) {
      v4 = v2 + 8 * v1;
      if (*(_WORD*)(v4 + 828) != 0) {
        if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(v4 + 828)) +
                                72LL) > 7u ||
            (v5 = *(_QWORD*)(v2 + 1752), v6 = *(_QWORD*)(v2 + 1744),
             (v7 = ((unsigned __int64)(unsigned int)GameData_21d97bc >> 5) &
                   0x7F) +
                     1 >
                 (v5 - v6) >> 2) ||
            ((*(_DWORD*)(v6 + 4LL * (unsigned int)v7) >> GameData_21d97bc) &
             1) == 0) {
          if (game_UnitItem_Restore((unsigned __int16*)(v4 + 828), 1)) {
            game_Unit_RemoveItem(*(_QWORD*)(a1 + 152), *(_DWORD*)(a1 + 256));
            v11_.v12 = -1;
          }
        }
      }
    }
  }
  else {
    TransporterConst_89c190((void*)((__int64)v9_.v9),
                            game_TransporterConst_List_instance_, v1);
    v11_.v11[0] = v9_.v9[0];
    v11_.v12 = v9_.v10;
    if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      *(_DWORD*)(GameData_22400f8 + 12) |= 0x40u;
    }
  }
  result = *(_QWORD*)(a1 + 320);
  if (result != 0) {
    return (*(__int64 (**)(__int64, char*))(*(_QWORD*)result + 48LL))(result,
                                                                      v11_.v11);
  }
  return result;
}

__int64 ProcUseItemSeq_8b24a0(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 264);
  if (result != 0) {
    return GameRoutine_81a990();
  }
  return result;
}

void ProcUseItemSeq_8b24b0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64* v12;
    __int64* v13;
    __int64 v14;
  } v12_;

  v1 = *(_QWORD*)(a1 + 272);
  if (v1 != 0) {
    v2 = *(unsigned __int16*)(v1 + 16);
    v11 = 0x100000000LL;
    LOWORD(v11) = v2;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v2) +
                  73LL) == 17) {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v4 = game_map_MapRandom_instance__ptr[0];
      v5 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL));
      v6 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v7 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
           (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v4 + 1) = v5;
      v8 = (v7 >> 8) ^ (v6 >> 19) ^ v7 ^ v6;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) = v6;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4 + 4) = v8;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      HIDWORD(v11) =
          (16 * ((_WORD)v8 -
                 1000 * (unsigned __int16)((v8 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    v9 = *(_QWORD*)(a1 + 152);
    v12_.v13 = nullptr;
    v12_.v14 = 0;
    v12_.v12 = nullptr;
    game_8aef60_alt1((__int64)&v12_.v12, (unsigned __int16*)&v11);
    game_ItemSeq_GainBind_alt1(a1, &v12_.v12, v9, game_vstring_kEmpty_ptr[0],
                               game_vstring_kEmpty_ptr[0]);
    if (v12_.v12 != nullptr) {
      v12_.v13 = v12_.v12;
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, (__int64)v12_.v12);
    }
  }
}

__int64 ProcUseItemSeq_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;

  *(_QWORD*)a1 = game_anonymous_ProcUseItemSeq_vtable;
  v2 = (_QWORD*)(a1 + 288);
  v3 = *(_QWORD**)(a1 + 320);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);

LABEL_6:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcUseItemSeq_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_anonymous_ProcUseItemSeq_vtable;
  v2 = (_QWORD*)(a1 + 288);
  v3 = *(_QWORD**)(a1 + 320);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);

LABEL_6:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a1);
}

#pragma GCC visibility pop
