#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13261c0(_QWORD);
__int64 GameRoutine_14d4a20(__int64, __int64);
__int64 GameRoutine_14d4c90(void);
__int64 GameRoutine_1536e70(_QWORD);
__int64 GameRoutine_70d7a0(_QWORD);
__int64 GameRoutine_828800(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_gmap_SpotAttachmentFarm_GetData(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strchr(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a8ee26;
extern _UNKNOWN GameData_1ac497a;
extern __int64 GameData_2130f48;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21c9ec0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern const char GameData_1aa9f0a[];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
__int64 SpotAttachmentFarm_Unknown11(__int64 result);
bool SpotAttachmentFarm_1516610(__int64 a1);
__int64 SpotAttachmentFarm_Unknown19(__int64 a1, __int64 a2);
unsigned __int64 SpotAttachmentFarm_Unknown20(__int64 a1, __int64 a2);
__int64 SpotAttachmentFarm_Unknown36(__int64 a1, __int64 a2);
__int64 SpotAttachmentFarm_Unknown37(__int64 a1, __int64 a2, int a3);
__int64 SpotAttachmentFarm_Unknown38(__int64 a1);
_QWORD* TelopParts_17cdaa0(_QWORD* result, __int64*);
__attribute__((swiftcall)) void TransporterConst_89b3d0(PSEUDO_X8, _QWORD,
                                                        _QWORD, _QWORD);
__int64** game_8aef60(__int64**, unsigned __int16*, __n128);
__int64* TelopParts_17cd840(__int64**, __int64*);
__int64 Dir_70d7a0(_QWORD);
__int64 TelopParts_17cbd60(__int64 result);
__int64 TelopParts_17cc5d0(__int64, __int64);
__int64 TelopParts_17cc7d0(__int64, __int64, __int64, char, __int64, char);
__int64 Troop_133ed80(__int64 result, __int64);
__int64 game_gmap_SpotAttachmentFarm_GetGrowthData();
__int64 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__n128 game_gmap_133fe00(__int64, unsigned __int8, float);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_UnlockMutex(_QWORD);
bool TransporterConst_89ca00(unsigned __int16*);
bool game_8ae640(__int64*, __int64, char, long double);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_202c698[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cab8[112];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21c96e8;
extern __int64 GameData_2241720;
extern __int64 game_TransporterConst_List_instance__ptr[6];
void snd_Fade_Fade_10c830(__int64, float);
__int64 SpotAttachmentFarm_1515d80();
void SpotAttachmentFarm_Unknown9(__int64 a1);
_QWORD* SpotAttachmentFarm_Unknown10(_QWORD* result);
__int64 SpotAttachmentFarm_Unknown15(__int64 result);

__int64 SpotAttachmentFarm_1515d80()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  unsigned __int8 v11;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  v3 = *(__int64**)(v0 + 16);
  if ((v1 & 0x80000000) == 0) {
    while (v2 != v3) {
      v5 = *v2++;
      v4 = v5;
      if (*(_DWORD*)(v5 + 84) == v1) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v4 = 0;
    goto LABEL_8;
  }
  if (v2 == v3) {
    goto LABEL_7;
  }
  while (1) {
    v4 = *v2;
    if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(v4 + 552) == 0) {
      break;
    }
    if (++v2 == v3) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v6 = *(_QWORD*)(game_gmap_SpotAttachmentFarm_GetGrowthData() + 40);
  v11 = 0;
  v9_.v9[0] = GameData_202c698;
  v9_.v9[1] = &v11;
  v9_.v10 = v9_.v9;
  v9_.v9[2] = v6;
  Troop_133ed80(v4, (__int64)v9_.v9);
  if (v9_.v10 == v9_.v9) {
    v7 = 32;
    goto LABEL_16;
  }
  if (v9_.v10 != nullptr) {
    v7 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v9_.v10 + v7))((__int64)v9_.v10);
  }
  return v11;
}

void SpotAttachmentFarm_Unknown9(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  __n128 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  _QWORD* v33;
  __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64 v38;
  struct {
    __int64* v39;
    __int64* v40;
    __int64 v41;
    int v42;
    char gap44_[4];
    __int64 v43;
    __int64 v44;
    __int16 v45;
    char gap66_[6];
    __int64 v46;
    __int64 v47;
    _QWORD v48[2];
    __int16 v49;
    char gap106_[22];
    __int16 v50;
    char gap130_[22];
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
  } v39_;
  struct {
    _BYTE v56[11];
    char gap203_[1];
    int v57;
    __int16 v58;
    char gap210_[22];
    int v59;
    char gap236_[4];
    __int16 v60;
  } v56_;

  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*(_BYTE*)(a1 + 42) & 1) != 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1) & 1) == 0 ||
      *(_QWORD*)(a1 + 64) == *(_QWORD*)(a1 + 56)) {
    return;
  }
  *(_BYTE*)(a1 + 42) = 1;
  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  if (v3 < 0) {
    while (1) {
      v5 = *v4;
      if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
        break;
      }
      ++v4;
    }
  }
  else {
    v7 = *v4;
    v6 = v4 + 1;
    v5 = v7;
    if (*(_DWORD*)(v7 + 84) != v3) {
      do {
        v8 = *v6++;
        v5 = v8;
      } while (*(_DWORD*)(v8 + 84) != v3);
    }
  }
  game_gmap_133fe00(v5, 5u, 0x1.0000000000000p+0f),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w"));
  snd_Fade_Fade_10c830((__int64)&v39_.v39, 0x0.0p+0f),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w"));
  snd_play_ff2d0((__int64)"SE_EVT_Cultivation_Harvest",
                 (__int64)"SE_EVT_Cultivation_Harvest", (__int64)&v39_.v39, 0,
                 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w"));
  snd_Fade_Destroy_Fade(&v39_.v39),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v9 = *(__int64**)(a1 + 56);
  v10 = *(__int64**)(a1 + 64);
  *(_DWORD*)(a1 + 48) = 0;
  if (v9 == v10) {
    goto LABEL_33;
  }
  v11 = GameData_212c878[0];
  v12 = game_map_MapRandom_instance__ptr[0];
  do {
    v13 = *v9;
    v39_.v39 = nullptr;
    if (v13 == 0) {
      if (!TransporterConst_89ca00((unsigned __int16*)&v39_.v39)) {
        goto LABEL_14;
      }
      v38 = 0;
      v39_.v40 = nullptr;
      v39_.v41 = 0;
      v39_.v39 = nullptr;
      goto LABEL_25;
    }
    v14 = *v11;
    v15 = *(unsigned __int16*)(v13 + 16);
    HIDWORD(v39_.v39) = 1;
    v16 = *(_QWORD*)(v14 + 64);
    LOWORD(v39_.v39) = v15;
    if (*(_BYTE*)(*(_QWORD*)(v16 + 8 * v15) + 73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v17 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12);
      v18 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12 + 4);
      v19 = *(_DWORD*)v12 ^ (*(_DWORD*)v12 << 11);
      *(_DWORD*)v12 = *((_DWORD*)v12 + 1);
      *((_DWORD*)v12 + 1) = v17;
      v20 = (v19 >> 8) ^ (v18 >> 19) ^ v19 ^ v18;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12) = v18;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12 + 4) = v20;
      nn_os_UnlockMutex(&game_g_random_mutex),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w"));
      HIDWORD(v39_.v39) =
          HIDWORD(v39_.v39) & 0xFFFFC00F |
          (16 *
           (((16 * (v20 - 1000 * ((v20 & 0x7FFFFFFFu) / 0x3E8)) + 16) >> 4) &
            0x3FF));
    }
    if (TransporterConst_89ca00((unsigned __int16*)&v39_.v39)) {
      v22 = *v11;
      v38 = 0x100000000LL;
      v24 = *(_QWORD*)(v22 + 64);
      LOWORD(v38) = *(_WORD*)(v13 + 16);
      v23 = (unsigned __int16)v38;
      if (*(_BYTE*)(*(_QWORD*)(v24 + 8LL * (unsigned __int16)v38) + 73LL) ==
          17) {
        nn_os_LockMutex(&game_g_random_mutex),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v25 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12);
        v26 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12 + 4);
        v27 = *(_DWORD*)v12 ^ (*(_DWORD*)v12 << 11);
        *(_DWORD*)v12 = *((_DWORD*)v12 + 1);
        *((_DWORD*)v12 + 1) = v25;
        v28 = (v27 >> 8) ^ (v26 >> 19) ^ v27 ^ v26;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12) = v26;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12 + 4) = v28;
        v21 = nn_os_UnlockMutex(&game_g_random_mutex);
        v23 = (unsigned __int16)v38;
        HIDWORD(v38) =
            HIDWORD(v38) & 0xFFFFC00F |
            (16 *
             (((16 * (v28 - 1000 * ((v28 & 0x7FFFFFFFu) / 0x3E8)) + 16) >> 4) &
              0x3FF));
      }
      v39_.v40 = nullptr;
      v39_.v41 = 0;
      v39_.v39 = nullptr;
      if (v23 != 0) {
        game_8aef60(&v39_.v39, (unsigned __int16*)&v38, v21),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    LABEL_25:
      game_8ae640((__int64*)&v39_.v39, 0, 0, *(long double*)&v21),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v39_.v39 != nullptr) {
        v39_.v40 = v39_.v39;
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v29),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      ++*(_DWORD*)(a1 + 48);
    }
  LABEL_14:
    ++v9;
  } while (v9 != v10);
  if (*(int*)(a1 + 48) > 0) {
    v30 = *(_QWORD*)GameData_2130f48;
    if (*(_QWORD*)GameData_2130f48 != 0) {
      v32 = *(__int64**)(a1 + 56);
      v31 = *(_QWORD*)(a1 + 64);
      v33 = *(_QWORD**)(v30 + 1648);
      v34 = *v32;
      LODWORD(v39_.v39) = 0;
      v35 = *(__int64**)(v34 + 8);
      v39_.v42 = (unsigned __int64)(v31 - (_QWORD)v32) >> 3;
      v36 = *(_QWORD*)(v30 + 1656);
      v39_.v45 = 15;
      v39_.v43 = 0;
      v39_.v44 = 0;
      v39_.v49 = 0;
      v39_.v50 = 0;
      v39_.v46 = 0;
      v39_.v47 = 0;
      v39_.v48[0] = 0;
      *(_QWORD*)((char*)v39_.v48 + 7) = 0;
      v39_.v51 = 0;
      v39_.v52 = 0;
      v39_.v53 = 0;
      v39_.v54 = 0;
      v39_.v55 = 0;
      memset(v56_.v56, 0, sizeof(v56_.v56));
      v56_.v57 = -1;
      v56_.v58 = 0;
      v56_.v59 = 0;
      v56_.v60 = 0;
      v39_.v40 = v35;
      v39_.v41 = 0;
      if ((unsigned __int64)v33 >= v36) {
        v37 = TelopParts_17cd840((__int64**)(v30 + 1640), (__int64*)&v39_.v39),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        TelopParts_17cdaa0(v33, (__int64*)&v39_.v39),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v37 = v33 + 31;
      }
      *(_QWORD*)(v30 + 1648) = v37;
      TelopParts_17cbd60((__int64)&v39_.v39),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    return;
  }
LABEL_33:
  if (*(_QWORD*)GameData_2130f48 != 0) {
    TelopParts_17cc5d0(*(_QWORD*)GameData_2130f48, **(_QWORD**)(a1 + 56)),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
}

_QWORD* SpotAttachmentFarm_Unknown10(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  int* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  _QWORD v13[3];

  if (*((_BYTE*)result + 42) == 1) {
    v13[1] = v1;
    v13[2] = v2;
    v3 = (__int64*)result[7];
    *((_BYTE*)result + 42) = 0;
    v4 = (int*)result;
    v5 = *v3;
    v13[0] = 0;
    if (v5 != 0) {
      v6 = *(unsigned __int16*)(v5 + 16);
      HIDWORD(v13[0]) = 1;
      LOWORD(v13[0]) = v6;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v6) +
                    73LL) == 17) {
        nn_os_LockMutex(&game_g_random_mutex);
        v7 = game_map_MapRandom_instance__ptr[0];
        v8 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                        (unsigned __int64)((_UNKNOWN**)0x8LL));
        v9 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                        (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v10 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v7 + 1) = v8;
        v11 = (v10 >> 8) ^ (v9 >> 19) ^ v10 ^ v9;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7) = v9;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7 + 4) = v11;
        nn_os_UnlockMutex(&game_g_random_mutex);
        HIDWORD(v13[0]) =
            (16 * ((_WORD)v11 -
                   1000 * (unsigned __int16)((v11 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
    }
    result = X8CALL_X0(
        void*,
        TransporterConst_89b3d0(
            (void*)(&v12),
            *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                       8LL),
            v13, (unsigned int)v4[12]));
    if (v4[12] >= 1) {
      result = (_QWORD*)GameData_2241720;
      if (GameData_2241720 != 0) {
        return (_QWORD*)TelopParts_17cc7d0(
            GameData_2241720, (__int64)"MID_Sys_InfoTelop_GetCancel", 0, 0, 0,
            0);
      }
    }
  }
  return result;
}

__int64 SpotAttachmentFarm_Unknown11(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  int v8;
  __int64 v9;
  unsigned int v10;
  __int16 v11;
  __int64 v12;
  __int64 v13;

  v1 = result;
  if (*(_QWORD*)GameData_2130f48 != 0) {
    *(_BYTE*)(*(_QWORD*)GameData_2130f48 + 1688LL) = 1;
  }
  if (*(_BYTE*)(result + 88) == 1) {
    v2 = **(_QWORD**)(*(_QWORD*)(result + 32) + 160LL);
    v3 = *(_QWORD*)(v2 + 8);
    if (v3 != 0) {
      v4 = strchr(*(_QWORD*)(v2 + 8), 95);
      if (v4 != 0) {
        v3 = v4 + 1;
      }
    }
    v13 = game_util_Format(GameData_1aa9f0a, v3);
    result = game_HashString(v13);
    v12 = result;
    if (game_GameModeData_instance_ != 0) {
      result = GameRoutine_828800(game_GameModeData_instance_ + 40, &v12, 1);
    }
  }
  if ((*(_BYTE*)(v1 + 40) & 1) == 0) {
    *(_QWORD*)(v1 + 64) = *(_QWORD*)(v1 + 56);
    if (game_gmap_GmapClock_instance_ != 0) {
      v5 = (__int64*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v5 = (__int64*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v6 = *v5;
    *(_DWORD*)(v1 + 28) = 0;
    *(_QWORD*)(v1 + 20) = v6;
    *(_WORD*)(v1 + 26) += 6;
    v7 = (_QWORD*)GameRoutine_70d7a0(v1 + 20);
    v8 = *(_DWORD*)(v1 + 28);
    *(_QWORD*)(v1 + 8) = *v7;
    v9 = *(_QWORD*)v1;
    *(_DWORD*)(v1 + 16) = v8;
    result = (*(__int64 (**)(__int64))(v9 + 16))(v1);
    if ((_DWORD)result != 0) {
      if ((int)result < 1) {
        v11 = *(_WORD*)(v1 + 14);
        v10 = -(int)result / 0x18u;
        *(_WORD*)(v1 + 12) -= v10;
        LOWORD(v10) = v11 + result + 24 * v10;
      }
      else {
        *(_WORD*)(v1 + 12) += (unsigned int)result / 0x18;
        v10 = *(unsigned __int16*)(v1 + 14) + (unsigned int)result % 0x18;
      }
      *(_WORD*)(v1 + 14) = v10;
      *(_DWORD*)(v1 + 16) = 0;
      result = GameRoutine_70d7a0(v1 + 8);
    }
    *(_BYTE*)(v1 + 42) = 0;
    *(_BYTE*)(v1 + 88) = 0;
  }
  return result;
}

bool SpotAttachmentFarm_1516610(__int64 a1)
{
  _BOOL8 result;
  __int64 v3;

  if ((GameRoutine_1536e70(1) & 1) == 0) {
    return false;
  }
  result = false;
  if (*(_BYTE*)(a1 + 176) == 3 && (*(_BYTE*)(a1 + 112) & 1) == 0) {
    v3 = *(_QWORD*)(a1 + 280);
    return (v3 == 0 ||
            (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3) == 1 &&
                ((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 280) + 112LL))(
                     *(_QWORD*)(a1 + 280)) &
                 1) != 0 ||
            *(_QWORD*)(a1 + 280) == 0 ||
            (unsigned __int8)GameRoutine_13261c0(a1) == 14) &&
           ((unsigned __int8)GameRoutine_13261c0(a1) == 10 ||
            (unsigned __int8)GameRoutine_13261c0(a1) == 14);
  }
  return result;
}

__int64 SpotAttachmentFarm_Unknown15(__int64 result)
{
  __int16* v1;
  __int16* v2;
  __int64 v3;
  __int64* v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  unsigned int v21;
  unsigned int v22;
  _QWORD* v23;
  _QWORD* v24;
  unsigned int v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64* v32;
  __int64 v33;
  unsigned int v34;
  _QWORD* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64* v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  char* v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  int v63;
  unsigned int v64;
  unsigned int v65;
  int v66;
  __int64 v67;
  __int64 v68;
  unsigned __int8* v69;
  int v70;
  __int64 v71;
  __int64 v72;
  unsigned int v73;

  if (game_gmap_GmapClock_instance_ != 0) {
    v1 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v1 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v2 = (__int16*)(result + 8);
  if (((__int64)v1[1] << 24) + ((__int64)*v1 << 32) + ((__int64)v1[2] << 18) +
          ((__int64)v1[3] << 12) + ((__int64)v1[4] << 6) + v1[5] <
      (unsigned __int64)(((__int64)v2[1] << 24) +
                         ((__int64)*(__int16*)(result + 8) << 32) +
                         ((__int64)v2[2] << 18) + ((__int64)v2[3] << 12) +
                         ((__int64)v2[4] << 6) + v2[5])) {
    return result;
  }
  v3 = result;
  if ((*(_BYTE*)(result + 41) & 1) == 0) {
    *(_BYTE*)(result + 41) = 1;
    v18 = *(_QWORD*)v1;
    v19 = *((_DWORD*)v1 + 2);
    *(_DWORD*)(result + 28) = v19;
    *(_DWORD*)(result + 16) = v19;
    v20 = *(_QWORD*)result;
    *(_QWORD*)(result + 20) = v18;
    *(_QWORD*)(result + 8) = v18;
    result = (*(__int64 (**)(__int64))(v20 + 16))(result);
    if ((_DWORD)result != 0) {
      if ((int)result < 1) {
        v22 = -(int)result / 0x18u;
        LOWORD(v21) = *(_WORD*)(v3 + 12) - v22;
        LOWORD(v22) = *(_WORD*)(v3 + 14) + result + 24 * v22;
      }
      else {
        v21 = *(unsigned __int16*)(v3 + 12) + (unsigned int)result / 0x18;
        v22 = *(unsigned __int16*)(v3 + 14) + (unsigned int)result % 0x18;
      }
      *(_WORD*)(v3 + 12) = v21;
      *(_WORD*)(v3 + 14) = v22;
      *(_DWORD*)(v3 + 16) = 0;
      return Dir_70d7a0(v2);
    }
    return result;
  }
  if (*(_QWORD*)(result + 64) != *(_QWORD*)(result + 56)) {
    return result;
  }
  nn_os_LockMutex(&game_g_random_mutex);
  v4 = game_map_MapRandom_instance__ptr[0];
  v5 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL) + 8);
  v6 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
  v7 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL)) ^
       (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL))
        << 11);
  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
             (unsigned __int64)((__int128*)0x10LL)) =
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL) + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4 + 4) = v5;
  v8 = (v7 >> 8) ^ (v6 >> 19) ^ v7 ^ v6;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4 + 8) = v6;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4 + 12) = v8;
  v9 = v8 & 0x7FFFFFFF;
  nn_os_UnlockMutex_alt1(&game_g_random_mutex);
  v10 = *(_QWORD*)(v3 + 80);
  if (v10 == 0) {
    goto LABEL_43;
  }
  v11 = *(_QWORD*)(v10 + 8);
  if (v11 != 0) {
    v12 = strchr(*(_QWORD*)(v10 + 8), 95);
    if (v12 != 0) {
      v11 = v12 + 1;
    }
  }
  v13 = game_HashString(v11);
  if (v13 == 0) {
    goto LABEL_43;
  }
  v14 = *(_QWORD*)(*GameData_212cab8[0] + 96);
  if (v14 == 0 || *(_QWORD*)(*GameData_212cab8[0] + 112) == 0) {
    goto LABEL_43;
  }
  v16 = v14 - 1;
  if ((v14 & (v14 - 1)) != 0) {
    v17 = v13;
    if (v13 >= v14) {
      v17 = v13 % v14;
    }
  }
  else {
    v17 = v16 & v13;
  }
  v23 = *(_QWORD**)(*(_QWORD*)(*GameData_212cab8[0] + 88) + 8 * v17);
  if (v23 == nullptr) {
    goto LABEL_43;
  }
  v24 = (_QWORD*)*v23;
  if (v24 == nullptr) {
    goto LABEL_43;
  }
  if ((v14 & v16) == 0) {
    while (1) {
      v27 = v24[1];
      if (v27 == v13) {
        if (v24[2] == v13) {
          goto LABEL_41;
        }
      }
      else if ((v27 & v16) != v17) {
        goto LABEL_43;
      }
      v24 = (_QWORD*)*v24;
      v25 = 0;
      if (v24 == nullptr) {
        goto LABEL_44;
      }
    }
  }
  while (1) {
    v26 = v24[1];
    if (v26 == v13) {
      break;
    }
    if (v26 >= v14) {
      v26 %= v14;
    }
    if (v26 != v17) {
      goto LABEL_43;
    }
  LABEL_30:
    v24 = (_QWORD*)*v24;
    v25 = 0;
    if (v24 == nullptr) {
      goto LABEL_44;
    }
  }
  if (v24[2] != v13) {
    goto LABEL_30;
  }
LABEL_41:
  v28 = v24[3];
  if (v28 != 0) {
    v25 = *(unsigned __int8*)(v28 + 32);
    goto LABEL_44;
  }
LABEL_43:
  v25 = 0;
LABEL_44:
  v29 = **(_QWORD**)(*(_QWORD*)(v3 + 32) + 160LL);
  if (v29 != 0) {
    v25 += *(unsigned __int8*)(v29 + 32);
  }
  if (v9 % 0x64 >= v25) {
    *(_BYTE*)(v3 + 88) = 0;
    if (*(_BYTE*)(((__int64 (*)(void))game_gmap_SpotAttachmentFarm_GetData)() +
                  33) != 0) {
      v34 = 0;
      v35 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      do {
        v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 192LL))(v3);
        v38 = *(__int64**)(v3 + 64);
        v37 = *(_QWORD*)(v3 + 72);
        if ((unsigned __int64)v38 < v37) {
          *v38 = v30;
          v36 = (__int64)(v38 + 1);
        }
        else {
          v39 = *(_QWORD*)(v3 + 56);
          v40 = (char*)v38 - v39;
          v41 = ((__int64)v38 - v39) >> 3;
          v42 = v41 + 1;
          if ((unsigned __int64)(v41 + 1) >> 61 != 0) {
            goto LABEL_92;
          }
          v43 = v37 - v39;
          if (v43 >> 2 > v42) {
            v42 = v43 >> 2;
          }
          if ((unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFF8LL) {
            v44 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v44 = v42;
          }
          if (v44 != 0) {
            if (v44 >> 61 != 0) {
              goto LABEL_93;
            }
            v45 = v30;
            v46 = fw_memory_HeapManager_Allocate(*v35, 8 * v44, 16, 0);
            v30 = v45;
          }
          else {
            v46 = 0;
          }
          v47 = v46 + 8 * v44;
          v48 = (__int64)&v40[v46 + -8 * v41];
          *(_QWORD*)&v40[v46] = v30;
          v36 = (__int64)&v40[v46 + 8];
          memcpy(v48, v39, v40);
          *(_QWORD*)(v3 + 56) = v48;
          *(_QWORD*)(v3 + 64) = v36;
          *(_QWORD*)(v3 + 72) = v47;
          if (v39 != 0) {
            v49 = 128;
            if (*(_QWORD*)(*v35 + 200LL) == 0) {
              v49 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v35 + v49);
          }
        }
        *(_QWORD*)(v3 + 64) = v36;
        ++v34;
      } while (
          v34 <
          *(unsigned __int8*)(((__int64 (*)(void))
                                   game_gmap_SpotAttachmentFarm_GetData)() +
                              33));
    }
  }
  else {
    *(_BYTE*)(v3 + 88) = 1;
    v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 200LL))(v3);
    v32 = *(__int64**)(v3 + 64);
    v31 = *(_QWORD*)(v3 + 72);
    if ((unsigned __int64)v32 >= v31) {
      v50 = *(_QWORD*)(v3 + 56);
      v51 = (char*)v32 - v50;
      v52 = ((__int64)v32 - v50) >> 3;
      v53 = v52 + 1;
      if ((unsigned __int64)(v52 + 1) >> 61 != 0) {
      LABEL_92:
        GameRoutine_6e5c60(v30);
      }
      v54 = v31 - v50;
      if (v54 >> 2 > v53) {
        v53 = v54 >> 2;
      }
      if ((unsigned __int64)v54 >= 0x7FFFFFFFFFFFFFF8LL) {
        v55 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v55 = v53;
      }
      if (v55 != 0) {
        if (v55 >> 61 != 0) {
        LABEL_93:
          GameRoutine_60a210(v30);
        }
        v56 = v30;
        v57 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v55, 16, 0);
        v30 = v56;
      }
      else {
        v57 = 0;
      }
      v58 = v57 + 8 * v55;
      v59 = (char*)v32 - v50;
      v60 = (__int64)&v51[v57 + -8 * v52];
      *(_QWORD*)&v51[v57] = v30;
      v33 = (__int64)&v51[v57 + 8];
      memcpy(v60, v50, v59);
      *(_QWORD*)(v3 + 56) = v60;
      *(_QWORD*)(v3 + 64) = v33;
      *(_QWORD*)(v3 + 72) = v58;
      if (v50 != 0) {
        v61 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v61 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v61);
      }
    }
    else {
      *v32 = v30;
      v33 = (__int64)(v32 + 1);
    }
    *(_QWORD*)(v3 + 64) = v33;
  }
  ++*(_DWORD*)(v3 + 44);
  nn_os_LockMutex(&game_g_random_mutex);
  v62 = game_map_MapRandom_instance__ptr[0];
  v63 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8);
  v64 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
  v65 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL)) ^
        (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL))
         << 11);
  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
             (unsigned __int64)((__int128*)0x10LL)) =
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL) + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v62 + 4) = v63;
  v66 = (v65 >> 8) ^ (v64 >> 19) ^ v65 ^ v64;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v62 + 8) = v64;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v62 + 12) = v66;
  v67 = nn_os_UnlockMutex_alt1(&game_g_random_mutex);
  result = game_gmap_SpotAttachmentFarm_GetData(v67);
  v68 = *(unsigned __int16*)(result + 40);
  if (*(_WORD*)(result + 40) == 0) {
    goto LABEL_90;
  }
  v69 = *(unsigned __int8**)(result + 48);
  v70 = *(_DWORD*)(v3 + 44);
  if (v70 < *v69) {
    goto LABEL_90;
  }
  v71 = 1;
  v72 = v68 - 1;
  while (v68 != v71) {
    v73 = v69[v71++];
    if (v70 < v73) {
      v72 = v71 - 2;
      break;
    }
  }
  if ((v66 & 0x7FFFFFFFu) % 0x64 >=
      *(unsigned __int8*)(*(_QWORD*)(result + 64) + v72)) {
  LABEL_90:
    *(_BYTE*)(v3 + 40) = 1;
  }
  return result;
}

__int64 SpotAttachmentFarm_Unknown19(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;

  if (a2 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a2 + 8);
  if (v2 != 0) {
    v3 = strchr(v2, 95);
    if (v3 != 0) {
      v2 = v3 + 1;
    }
  }
  v4 = game_HashString(v2);
  if (v4 == 0) {
    goto LABEL_11;
  }
  v5 = *(_QWORD*)(GameData_21c9ec0 + 96);
  if (v5 == 0 || *(_QWORD*)(GameData_21c9ec0 + 112) == 0) {
    goto LABEL_11;
  }
  v9 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v10 = v4;
    if (v4 >= v5) {
      v10 = v4 % v5;
    }
  }
  else {
    v10 = v9 & v4;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ec0 + 88) + 8 * v10);
  if (v7 != nullptr) {
    v11 = (_QWORD*)*v7;
    if (*v7 != 0) {
      if ((v5 & v9) == 0) {
        while (1) {
          v13 = v11[1];
          if (v13 == v4) {
            if (v11[2] == v4) {
              goto LABEL_34;
            }
          }
          else if ((v13 & v9) != v10) {
            goto LABEL_11;
          }
          v11 = (_QWORD*)*v11;
          LODWORD(v7) = 0;
          if (v11 == nullptr) {
            return (unsigned int)v7;
          }
        }
      }
      while (1) {
        v12 = v11[1];
        if (v12 == v4) {
          if (v11[2] == v4) {
          LABEL_34:
            LODWORD(v7) = v11[3] != 0;
            return (unsigned int)v7;
          }
        }
        else {
          if (v12 >= v5) {
            v12 %= v5;
          }
          if (v12 != v10) {
            break;
          }
        }
        v11 = (_QWORD*)*v11;
        LODWORD(v7) = 0;
        if (v11 == nullptr) {
          return (unsigned int)v7;
        }
      }
    }
  LABEL_11:
    LODWORD(v7) = 0;
  }
  return (unsigned int)v7;
}

unsigned __int64 SpotAttachmentFarm_Unknown20(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;

  v2 = *(_QWORD*)(a2 + 8);
  if (v2 != 0) {
    v5 = strchr(v2, 95);
    if (v5 != 0) {
      v2 = v5 + 1;
    }
  }
  result = game_HashString(v2);
  if (result != 0) {
    v7 = *(_QWORD*)(GameData_21c9ec0 + 96);
    if (v7 != 0 && *(_QWORD*)(GameData_21c9ec0 + 112) != 0) {
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
      v11 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ec0 + 88) + 8 * v10);
      if (v11 != nullptr) {
        v12 = (_QWORD*)*v11;
        if (v12 != nullptr) {
          if ((v7 & v9) == 0) {
            while (1) {
              v14 = v12[1];
              if (v14 == result) {
                if (v12[2] == result) {
                  goto LABEL_29;
                }
              }
              else if ((v14 & v9) != v10) {
                return result;
              }
              v12 = (_QWORD*)*v12;
              if (v12 == nullptr) {
                return result;
              }
            }
          }
          do {
            v13 = v12[1];
            if (v13 == result) {
              if (v12[2] == result) {
              LABEL_29:
                if (v12[3] != 0) {
                  *(_QWORD*)(a1 + 80) = a2;
                }
                return result;
              }
            }
            else {
              if (v13 >= v7) {
                v13 %= v7;
              }
              if (v13 != v10) {
                return result;
              }
            }
            v12 = (_QWORD*)*v12;
          } while (v12 != nullptr);
        }
      }
    }
  }
  return result;
}

__int64 SpotAttachmentFarm_Unknown36(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  char v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  result = GameRoutine_14d4a20(a1, a2);
  v5 = *(int*)(a2 + 20);
  v6 = *(_DWORD*)(a1 + 44);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v6;
  v7 = *(int*)(a2 + 20);
  v8 = (unsigned int)(*(_DWORD*)(a1 + 64) - *(_DWORD*)(a1 + 56)) >> 3;
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v8;
  v9 = *(int*)(a2 + 20);
  LOBYTE(v8) = *(_BYTE*)(a1 + 88);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v8;
  v10 = *(_QWORD**)(a1 + 80);
  if (v10 != nullptr) {
    v10 = (_QWORD*)*v10;
  }
  v11 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = (_BYTE)v10;
  v12 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE1(v10);
  v13 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE2(v10);
  v14 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = BYTE3(v10);
  v15 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE4(v10);
  v16 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE5(v10);
  v17 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = BYTE6(v10);
  v18 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = HIBYTE(v10);
  return result;
}

__int64 SpotAttachmentFarm_Unknown37(__int64 a1, __int64 a2, int a3)
{
  __int64 result;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  unsigned __int64 v32;
  __int64* v33;
  __int64 v34;
  unsigned int v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64* v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v78;
  unsigned __int64 v79;
  _QWORD* v80;
  _QWORD* v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;

  result = GameRoutine_14d4c90();
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_DWORD*)(a1 + 44) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v7);
  v8 = *(_DWORD*)(a2 + 20);
  v9 = *(_QWORD*)(a2 + 8);
  if (a3 > 2) {
    goto LABEL_29;
  }
  v10 = v8;
  v8 += 8;
  *(_DWORD*)(a2 + 20) = v10 + 1;
  v11 = *(unsigned __int8*)(v9 + v10);
  *(_DWORD*)(a2 + 20) = v10 + 2;
  v12 = v11 | ((unsigned __int64)*(unsigned __int8*)(v9 + v10 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v10 + 3;
  v13 = v12 | ((unsigned __int64)*(unsigned __int8*)(v9 + v10 + 2) << 16);
  *(_DWORD*)(a2 + 20) = v10 + 4;
  v14 = v13 | ((unsigned __int64)*(unsigned __int8*)(v9 + v10 + 3) << 24);
  v15 = v10 + 5;
  *(_DWORD*)(a2 + 20) = v10 + 5;
  v16 = v14 | ((unsigned __int64)*(unsigned __int8*)(v9 + v10 + 4) << 32);
  v17 = v10 + 6;
  v10 += 7;
  *(_DWORD*)(a2 + 20) = v17;
  v18 = *(unsigned __int8*)(v9 + v15);
  *(_DWORD*)(a2 + 20) = v10;
  v19 = v16 | (v18 << 40);
  v20 = *(unsigned __int8*)(v9 + v17);
  *(_DWORD*)(a2 + 20) = v8;
  v21 = v19 | (v20 << 48) |
        ((unsigned __int64)*(unsigned __int8*)(v9 + v10) << 56);
  if (v21 == 0) {
    goto LABEL_28;
  }
  v22 = *(_QWORD*)(GameData_21c99b8 + 96);
  if (v22 == 0 || *(_QWORD*)(GameData_21c99b8 + 112) == 0) {
    goto LABEL_28;
  }
  v24 = v22 - 1;
  if ((v22 & (v22 - 1)) != 0) {
    v25 = v21;
    if (v21 >= v22) {
      v25 = v21 % v22;
    }
  }
  else {
    v25 = v24 & v21;
  }
  v26 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v25);
  if (v26 == nullptr || (v27 = (_QWORD*)*v26) == nullptr) {
  LABEL_28:
    result = game_HashString(&GameData_1ac497a);
    v8 = *(_DWORD*)(a2 + 20);
    v9 = *(_QWORD*)(a2 + 8);
    goto LABEL_29;
  }
  if ((v22 & v24) == 0) {
    while (1) {
      v29 = v27[1];
      if (v29 == v21) {
        if (v27[2] == v21) {
          goto LABEL_27;
        }
      }
      else if ((v29 & v24) != v25) {
        goto LABEL_28;
      }
      v27 = (_QWORD*)*v27;
      if (v27 == nullptr) {
        goto LABEL_28;
      }
    }
  }
  while (1) {
    v28 = v27[1];
    if (v28 == v21) {
      break;
    }
    if (v28 >= v22) {
      v28 %= v22;
    }
    if (v28 != v25) {
      goto LABEL_28;
    }
  LABEL_16:
    v27 = (_QWORD*)*v27;
    if (v27 == nullptr) {
      goto LABEL_28;
    }
  }
  if (v27[2] != v21) {
    goto LABEL_16;
  }

LABEL_27:
  if (v27[3] == 0) {
    goto LABEL_28;
  }

LABEL_29:
  v30 = v8 + 1LL;
  *(_DWORD*)(a2 + 20) = v30;
  v31 = *(unsigned __int8*)(v9 + v8);
  if (a3 >= 5) {
    *(_DWORD*)(a2 + 20) = v8 + 2;
    *(_BYTE*)(a1 + 88) = *(_BYTE*)(v9 + v30) != 0;
    if ((unsigned int)a3 <= 7) {
      ++*(_DWORD*)(a2 + 20);
    }
  }
  if (v31 != 0 && *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160LL) != 0) {
    if ((*(_BYTE*)(a1 + 88) & 1) != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 200LL))(a1);
      v33 = *(__int64**)(a1 + 64);
      v32 = *(_QWORD*)(a1 + 72);
      if ((unsigned __int64)v33 >= v32) {
        v51 = *(_QWORD*)(a1 + 56);
        v52 = (char*)v33 - v51;
        v53 = ((__int64)v33 - v51) >> 3;
        v54 = v53 + 1;
        if ((unsigned __int64)(v53 + 1) >> 61 != 0) {
        LABEL_103:
          GameRoutine_6e5c60(result);
        }
        v55 = v32 - v51;
        if (v55 >> 2 > v54) {
          v54 = v55 >> 2;
        }
        if ((unsigned __int64)v55 >= 0x7FFFFFFFFFFFFFF8LL) {
          v56 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v56 = v54;
        }
        if (v56 != 0) {
          if (v56 >> 61 != 0) {
          LABEL_104:
            GameRoutine_60a210(result);
          }
          v57 = result;
          v58 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v56, 16, 0);
          result = v57;
        }
        else {
          v58 = 0;
        }
        v59 = v58 + 8 * v56;
        v60 = (__int64)&v52[v58 + -8 * v53];
        *(_QWORD*)&v52[v58] = result;
        v34 = (__int64)&v52[v58 + 8];
        result = memcpy(v60, v51, v52);
        *(_QWORD*)(a1 + 56) = v60;
        *(_QWORD*)(a1 + 64) = v34;
        *(_QWORD*)(a1 + 72) = v59;
        if (v51 != 0) {
          v61 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v61 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v61, v51);
        }
      }
      else {
        *v33 = result;
        v34 = (__int64)(v33 + 1);
      }
      *(_QWORD*)(a1 + 64) = v34;
    }
    else {
      result = game_gmap_SpotAttachmentFarm_GetData(result);
      if (*(_BYTE*)(result + 33) != 0) {
        v35 = 0;
        v36 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        do {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
          v39 = *(__int64**)(a1 + 64);
          v38 = *(_QWORD*)(a1 + 72);
          if ((unsigned __int64)v39 < v38) {
            *v39 = result;
            v37 = (__int64)(v39 + 1);
          }
          else {
            v40 = *(_QWORD*)(a1 + 56);
            v41 = (char*)v39 - v40;
            v42 = ((__int64)v39 - v40) >> 3;
            v43 = v42 + 1;
            if ((unsigned __int64)(v42 + 1) >> 61 != 0) {
              goto LABEL_103;
            }
            v44 = v38 - v40;
            if (v44 >> 2 > v43) {
              v43 = v44 >> 2;
            }
            if ((unsigned __int64)v44 >= 0x7FFFFFFFFFFFFFF8LL) {
              v45 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v45 = v43;
            }
            if (v45 != 0) {
              if (v45 >> 61 != 0) {
                goto LABEL_104;
              }
              v46 = result;
              v47 = fw_memory_HeapManager_Allocate(*v36, 8 * v45, 16, 0);
              result = v46;
            }
            else {
              v47 = 0;
            }
            v48 = v47 + 8 * v45;
            v49 = (__int64)&v41[v47 + -8 * v42];
            *(_QWORD*)&v41[v47] = result;
            v37 = (__int64)&v41[v47 + 8];
            result = memcpy(v49, v40, v41);
            *(_QWORD*)(a1 + 56) = v49;
            *(_QWORD*)(a1 + 64) = v37;
            *(_QWORD*)(a1 + 72) = v48;
            if (v40 != 0) {
              v50 = 128;
              if (*(_QWORD*)(*v36 + 200LL) == 0) {
                v50 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*v36 + v50, v40);
            }
          }
          *(_QWORD*)(a1 + 64) = v37;
          ++v35;
          result = game_gmap_SpotAttachmentFarm_GetData(result);
        } while (v35 < *(unsigned __int8*)(result + 33));
      }
    }
  }
  if ((unsigned int)(a3 - 7) <= 1) {
    v62 = *(int*)(a2 + 20);
    v63 = *(_QWORD*)(a2 + 8);
    v64 = v62 + 1;
    *(_DWORD*)(a2 + 20) = v62 + 1;
    v65 = *(unsigned __int8*)(v63 + v62);
    if (v65 != 0) {
      *(_DWORD*)(a2 + 20) = v64 + 8 * v65;
    }
    return result;
  }
  if (a3 >= 9) {
    v66 = *(int*)(a2 + 20);
    v67 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v66 + 1;
    v68 = *(unsigned __int8*)(v67 + v66);
    *(_DWORD*)(a2 + 20) = v66 + 2;
    v69 = v68 | ((unsigned __int64)*(unsigned __int8*)(v67 + v66 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v66 + 3;
    v70 = v69 | ((unsigned __int64)*(unsigned __int8*)(v67 + v66 + 2) << 16);
    *(_DWORD*)(a2 + 20) = v66 + 4;
    v71 = v70 | ((unsigned __int64)*(unsigned __int8*)(v67 + v66 + 3) << 24);
    *(_DWORD*)(a2 + 20) = v66 + 5;
    v72 = v71 | ((unsigned __int64)*(unsigned __int8*)(v67 + v66 + 4) << 32);
    *(_DWORD*)(a2 + 20) = v66 + 6;
    v73 = v72 | ((unsigned __int64)*(unsigned __int8*)(v67 + v66 + 5) << 40);
    *(_DWORD*)(a2 + 20) = v66 + 7;
    v74 = *(unsigned __int8*)(v67 + v66 + 6);
    *(_DWORD*)(a2 + 20) = v66 + 8;
    v75 = v73 | (v74 << 48) |
          ((unsigned __int64)*(unsigned __int8*)(v67 + v66 + 7) << 56);
    if (v75 != 0) {
      v76 = *(_QWORD*)(GameData_21c99b8 + 96);
      if (v76 != 0 && *(_QWORD*)(GameData_21c99b8 + 112) != 0) {
        v78 = v76 - 1;
        if ((v76 & (v76 - 1)) != 0) {
          v79 = v75;
          if (v75 >= v76) {
            v79 = v75 % v76;
          }
        }
        else {
          v79 = v78 & v75;
        }
        v80 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v79);
        if (v80 != nullptr) {
          v81 = (_QWORD*)*v80;
          if (v81 != nullptr) {
            if ((v76 & v78) == 0) {
              while (1) {
                v83 = v81[1];
                if (v83 == v75) {
                  if (v81[2] == v75) {
                    goto LABEL_100;
                  }
                }
                else if ((v83 & v78) != v79) {
                  return result;
                }
                v81 = (_QWORD*)*v81;
                if (v81 == nullptr) {
                  return result;
                }
              }
            }
            do {
              v82 = v81[1];
              if (v82 == v75) {
                if (v81[2] == v75) {
                LABEL_100:
                  v84 = v81[3];
                  if (v84 != 0) {
                    *(_QWORD*)(a1 + 80) = v84;
                  }
                  return result;
                }
              }
              else {
                if (v82 >= v76) {
                  v82 %= v76;
                }
                if (v82 != v79) {
                  return result;
                }
              }
              v81 = (_QWORD*)*v81;
            } while (v81 != nullptr);
          }
        }
      }
    }
  }
  return result;
}

__int64 SpotAttachmentFarm_Unknown38(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  unsigned int v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;

  *(_BYTE*)(a1 + 40) = 1;
  v2 = game_HashString(&GameData_1a8ee26);
  if (v2 == 0) {
    goto LABEL_25;
  }
  v3 = *(_QWORD*)(GameData_21c99b8 + 96);
  if (v3 == 0 || *(_QWORD*)(GameData_21c99b8 + 112) == 0) {
    goto LABEL_25;
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = v2;
    if (v2 >= v3) {
      v6 = v2 % v3;
    }
  }
  else {
    v6 = v5 & v2;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v6);
  if (v7 == nullptr || (v8 = (_QWORD*)*v7) == nullptr) {
  LABEL_25:
    v10 = 0;
    goto LABEL_26;
  }
  if ((v3 & v5) == 0) {
    while (1) {
      v11 = v8[1];
      if (v11 == v2) {
        if (v8[2] == v2) {
          goto LABEL_46;
        }
      }
      else if ((v11 & v5) != v6) {
        goto LABEL_25;
      }
      v8 = (_QWORD*)*v8;
      v10 = 0;
      if (v8 == nullptr) {
        goto LABEL_26;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == v2) {
      break;
    }
    if (v9 >= v3) {
      v9 %= v3;
    }
    if (v9 != v6) {
      goto LABEL_25;
    }
  LABEL_15:
    v8 = (_QWORD*)*v8;
    if (v8 == nullptr) {
      goto LABEL_25;
    }
  }
  if (v8[2] != v2) {
    goto LABEL_15;
  }

LABEL_46:
  v10 = v8[3];

LABEL_26:
  result = game_gmap_SpotAttachmentFarm_GetData(v2);
  if (*(_BYTE*)(result + 33) != 0) {
    v13 = 0;
    v14 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v17 = *(_QWORD**)(a1 + 64);
      v16 = *(_QWORD*)(a1 + 72);
      if ((unsigned __int64)v17 < v16) {
        *v17 = v10;
        v15 = (__int64)(v17 + 1);
      }
      else {
        v18 = *(_QWORD*)(a1 + 56);
        v19 = (char*)v17 - v18;
        v20 = ((__int64)v17 - v18) >> 3;
        v21 = v20 + 1;
        if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
          GameRoutine_6e5c60(result);
        }
        v22 = v16 - v18;
        if (v22 >> 2 > v21) {
          v21 = v22 >> 2;
        }
        if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
          v23 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v23 = v21;
        }
        if (v23 != 0) {
          if (v23 >> 61 != 0) {
            GameRoutine_60a210(result);
          }
          v24 = fw_memory_HeapManager_Allocate(*v14, 8 * v23, 16, 0);
        }
        else {
          v24 = 0;
        }
        v25 = v24 + 8 * v23;
        v26 = (char*)v17 - v18;
        v27 = (__int64)&v19[v24 + -8 * v20];
        *(_QWORD*)&v19[v24] = v10;
        v15 = (__int64)&v19[v24 + 8];
        result = memcpy(v27, v18, v26);
        *(_QWORD*)(a1 + 56) = v27;
        *(_QWORD*)(a1 + 64) = v15;
        *(_QWORD*)(a1 + 72) = v25;
        if (v18 != 0) {
          v28 = 128;
          if (*(_QWORD*)(*v14 + 200LL) == 0) {
            v28 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v14 + v28, v18);
        }
      }
      *(_QWORD*)(a1 + 64) = v15;
      ++v13;
      result = game_gmap_SpotAttachmentFarm_GetData(result);
    } while (v13 < *(unsigned __int8*)(result + 33));
  }
  return result;
}

#pragma GCC visibility pop
