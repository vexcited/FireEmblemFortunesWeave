#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12b3d60(_QWORD, _QWORD);
__int64 GameRoutine_1464bd0(_QWORD, _QWORD);
__int64 GameRoutine_196e860(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19a7f00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_90c6c0(_QWORD, _QWORD);
__int64 GameRoutine_90dc20(_QWORD, _QWORD);
__int64 GameRoutine_946ed0(_QWORD);
__int64 GameRoutine_9475c0(_QWORD);
__int64 GameRoutine_948f10(_QWORD);
__int64 GameRoutine_957720(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_958620(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_1abd562;
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64 GameData_21c9728;
extern __int64 GameData_21ca080;
extern __int64 GameData_21f3ff8;
extern __int64 GameData_2246cb0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_RelianceCheck_unknown_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char GameData_2166cf2;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(_QWORD);
__int64 VolunteerArgs_Unknown2(_QWORD* a1);
__int64 VolunteerArgs_Unknown4(__int64 a1);
__int64 VolunteerArgs_141aec0(__int64 result, __int64 a2, __int64 a3);
__int64 VolunteerArgs_Unknown12(__int64 a1);

__int64 VolunteerArgs_Unknown2(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  char* v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1);
  v3 = GameData_21f3ff8;
  v4 = *(unsigned int*)(GameData_21f3ff8 + 8);
  if ((v4 & 0x80000000) != 0) {
    v5 = 0;
  }
  else {
    v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca080 + 64) + 8 * v4);
  }
  a1[5] = v5;
  v6 = *(__int64**)(v3 + 48);
  v7 = *(__int64**)(v3 + 56);
  if (v6 != v7) {
    v8 = (char*)a1[3];
    v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v10 = *v6;
      v11 = a1[4];
      if ((unsigned __int64)v8 < v11) {
        *(_QWORD*)v8 = v10;
        v8 += 8;
      }
      else {
        v12 = a1[2];
        v13 = &v8[-v12];
        v14 = (__int64)&v8[-v12] >> 3;
        v15 = v14 + 1;
        if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
          GameRoutine_6c1f60(result);
        }
        v16 = v11 - v12;
        if (v16 >> 2 > v15) {
          v15 = v16 >> 2;
        }
        if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
          v17 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v17 = v15;
        }
        if (v17 != 0) {
          if (v17 >> 61 != 0) {
            GameRoutine_60a210(result);
          }
          v18 = fw_memory_HeapManager_Allocate(*v9, 8 * v17, 16, 0);
        }
        else {
          v18 = 0;
        }
        v19 = v18 + 8 * v17;
        v20 = &v8[-v12];
        v21 = (__int64)&v13[v18 + -8 * v14];
        *(_QWORD*)&v13[v18] = v10;
        v8 = &v13[v18 + 8];
        result = memcpy(v21, v12, v20);
        a1[2] = v21;
        a1[3] = v8;
        a1[4] = v19;
        if (v12 != 0) {
          v22 = 128;
          if (*(_QWORD*)(*v9 + 200LL) == 0) {
            v22 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v9 + v22);
        }
      }
      ++v6;
      a1[3] = v8;
    } while (v6 != v7);
  }
  return result;
}

__int64 VolunteerArgs_Unknown4(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  int v7;
  char v8;
  __int64 v9;
  __int64* v10;
  __int64* i;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  char v16;
  __int64 v17;
  __int64 v18;
  int v19;

  (*(void (**)(__int64))(*(_QWORD*)a1 + 88LL))(a1);
  if (GameData_2246cb0 != 0) {
    *(_QWORD*)(GameData_2246cb0 + 160) = *(_QWORD*)(GameData_2246cb0 + 152);
  }
  v2 = *(__int64**)(a1 + 16);
  v3 = *v2;
  v4 = v2[1];
  if (game_gmap_GmapClock_instance_ != 0) {
    v5 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v5 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  result = GameRoutine_957720(*(_QWORD*)(a1 + 40), v3, v4, v5);
  *(_BYTE*)(a1 + 48) = result;
  if ((_BYTE)result != 0) {
    if ((GameRoutine_9475c0(a1 + 16) & 1) != 0) {
      v7 = *(unsigned __int8*)(a1 + 48);
      if (v7 == 2) {
        v8 = 3;
        goto LABEL_12;
      }
      if (v7 == 1) {
        v8 = 2;
      LABEL_12:
        *(_BYTE*)(a1 + 48) = v8;
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)a1 + 96LL))(a1);
    v9 = VolunteerArgs_141aec0(a1, v3, v4);
    GameRoutine_948f10(v9);
    GameRoutine_946ed0(&GameData_1abd562);
    v10 = *(__int64**)(a1 + 16);
    for (i = *(__int64**)(a1 + 24); v10 != i; ++v10) {
      v12 = *v10;
      if (*v10 != 0) {
        v13 = GameData_2246cb0;
        v14 = *(char*)(v12 + 2090) <= 1 ? 1 : *(char*)(v12 + 2090);
        v15 = v14 - 1;
        v16 = v15 >= 3 ? 3 : v15;
        *(_BYTE*)(v12 + 2090) = v16;
        if (v13 != 0) {
          GameRoutine_1464bd0(v13, v12);
        }
      }
    }
    v17 = *(_QWORD*)(v3 + 392);
    v18 = *(_QWORD*)(v4 + 392);
    v19 = *(unsigned __int8*)(a1 + 48);
    result = GameRoutine_196e860(0, v17, v18);
    if (v19 == 3 && result == 0) {
      result = GameRoutine_196e860(3, v17, v18);
    }
    *(_QWORD*)(a1 + 72) = result;
  }
  return result;
}

__int64 VolunteerArgs_141aec0(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 (***v12)();
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  _QWORD v21[2];
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v5 = result;
  v6 = game_RelianceCheck_unknown_;
  v7 = *(_QWORD*)game_RelianceCheck_unknown_;
  *(_DWORD*)(game_RelianceCheck_unknown_ + 24) = 0;
  *(_QWORD*)(v6 + 8) = v7;
  v23 = a2;
  v24 = 0;
  v25 = 0;
  if (a2 != 0) {
    v8 = *(_QWORD*)(a2 + 392);
    v24 = v8;
    if (v8 != 0) {
      v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v8 + 24) + 1784LL) + 272LL);
    }
    v25 = v8;
    v9 = v8 == 0;
    v21[0] = a3;
    if (a3 == 0) {
      goto LABEL_14;
    }
  }
  else {
    v9 = true;
    v21[0] = a3;
    if (a3 == 0) {
      goto LABEL_14;
    }
  }
  v10 = *(_QWORD*)(a3 + 392);
  v21[1] = v10;
  if (v10 != 0) {
    v22 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 24) + 1784LL) + 272LL);
    if (v22 == 0) {
      v9 = true;
    }
    if (!v9) {
      v11 = *(_QWORD*)(game_GameModeData_instance_ + 128);
      result = GameRoutine_8e17a0(v11, &v23, v21);
      if ((result & 0x80000000) == 0) {
        v12 = (__int64 (***)())(*(_QWORD*)(v11 + 8) +
                                56LL * (unsigned int)result);
        if (*((_BYTE*)v12 + 10) == 0) {
          return result;
        }
        goto LABEL_15;
      }
    }
  }

LABEL_14:
  v12 = &game_GameReliance_Impl_Data_vtable_ptr;
  if (GameData_2166cf2 == 0) {
    return result;
  }

LABEL_15:
  v13 = *(_QWORD*)(v5 + 40);
  v14 = *(unsigned __int8*)(v5 + 48);
  *(_DWORD*)(v5 + 52) = *((unsigned __int16*)v12 + 6);
  v15 = GameRoutine_958620(v13, v14);
  v17 = ((__int64 (*)(__int64 (***)(), _QWORD, __int64))(*v12)[2])(v12, v15, 1);
  *(_DWORD*)(v5 + 56) = *((unsigned __int16*)v12 + 6);
  v18 = *(__int64**)(GameData_21c9728 + 16);
  v19 = *(__int64**)(GameData_21c9728 + 24);
  while (v18 != v19) {
    v20 = *v18++;
    GameRoutine_12b3d60(v20, v16);
  }
  return GameRoutine_19a7f00(*(_QWORD*)(a2 + 392), *(_QWORD*)(a3 + 392), v17);
}

__int64 VolunteerArgs_Unknown12(__int64 a1)
{
  __int64 v1;
  __int64 result;
  unsigned int v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 40);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
  if (v1 != 0) {
    v4 = result;
    result = GameRoutine_90dc20(game_GameModeData_instance_ + 152,
                                *(_QWORD*)(v1 + 112));
    if ((result & 0x80000000) == 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 160) + 8LL);
      if (v5 != 0) {
        v6 = v5 + 32LL * (unsigned int)result;
        *(_DWORD*)(a1 + 60) = *(_DWORD*)(v6 + 4);
        result = GameRoutine_90c6c0(v6, v4);
        *(_DWORD*)(a1 + 64) = *(_DWORD*)(v6 + 4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
