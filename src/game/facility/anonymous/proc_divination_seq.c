#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8, _QWORD, _QWORD, _QWORD);
__int64 GameReliance_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8c7640(_QWORD);
__int64 GameRoutine_94b9a0(_QWORD);
__int64 GameSideStoryData_12b3d60(_QWORD);
__int64 RelianceCheck_19a7f00(_QWORD, _QWORD, _QWORD);
__int64 game_195c040(__int64);
__int64 game_996d60(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_1a93545;
extern _UNKNOWN GameData_1ad4ffb;
extern _UNKNOWN GameData_1aefb6e;
extern _UNKNOWN GameData_1c20f90;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (***GameData_212dae8)();
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64* GameData_212c878[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_21c9cf0;
extern __int64 game_GameModeData_instance_;
extern __int64 game_RelianceCheck_unknown_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern char GameData_2166cf2;
unsigned int GameRoutine_195b260(__int64, unsigned __int8, int);
__int64 ProcDivinationSeq_1964870(__int64 a1);
__int64 ProcDivinationSeq_1964a60(__int64 a1, char a2);
__int64 ProcDivinationSeq_1964e60(__int64 a1);

__int64 ProcDivinationSeq_1964870(__int64 a1)
{
  __int64 result;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  _QWORD* v12;

  ++*(_DWORD*)a1;
  result = game_195c040(a1 + 8);
  *(_QWORD*)(a1 + 48) = result;
  v3 = GameData_21c9cf0;
  v4 = *(_QWORD*)(GameData_21c9cf0 + 72) - *(_QWORD*)(GameData_21c9cf0 + 64);
  if (v4 != 0) {
    v5 = v4 >> 3;
    nn_os_LockMutex(&game_g_random_mutex);
    v6 = game_map_MapRandom_instance__ptr[0];
    v7 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL) + 8);
    v8 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
    v9 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL)) ^
         (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL))
          << 11);
    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
               (unsigned __int64)((__int128*)0x10LL)) =
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 4) = v7;
    v10 = (v9 >> 8) ^ (v8 >> 19) ^ v9 ^ v8;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 8) = v8;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 12) = v10;
    v11 = v10 & 0x7FFFFFFF;
    result = nn_os_UnlockMutex(&game_g_random_mutex);
    v12 = (_QWORD*)(*(_QWORD*)(v3 + 64) + 8LL * (unsigned int)(v11 % (int)v5));
  }
  else {
    v12 = &GameData_1c20f90;
  }
  *(_QWORD*)(a1 + 40) = *v12;
  return result;
}

__int64 ProcDivinationSeq_1964a60(__int64 a1, char a2)
{
  int v3;
  int v4;
  __int64* v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned __int8 v13;
  char v14;
  __int64 v15;
  int v16;
  __int64 result;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  __int64* v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  unsigned int v35;
  int v36;
  __int64 v37;
  __int64 v38;

  v3 = *(unsigned __int8*)(*(_QWORD*)(a1 + 40) + 40LL);
  if ((a2 & 1) == 0) {
  LABEL_6:
    v11 = 0;
    goto LABEL_7;
  }
  v4 = *(unsigned __int8*)(*(_QWORD*)(a1 + 48) + 59LL);
  if (v4 == 2) {
    v11 = -2;
  }
  else {
    if (v4 != 1) {
      if (*(_BYTE*)(*(_QWORD*)(a1 + 48) + 59LL) == 0) {
        nn_os_LockMutex(&game_g_random_mutex);
        v5 = game_map_MapRandom_instance__ptr[0];
        v6 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                        (unsigned __int64)((__int128*)0x10LL) + 8);
        v7 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                        (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
        v8 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                        (unsigned __int64)((__int128*)0x10LL)) ^
             (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL))
              << 11);
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL)) =
            *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 4);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 4) = v6;
        v9 = (v8 >> 8) ^ (v7 >> 19) ^ v8 ^ v7;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 8) = v7;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 12) = v9;
        v10 = v9 & 0x7FFFFFFF;
        nn_os_UnlockMutex(&game_g_random_mutex);
        v11 = v10 -
              5 * ((unsigned int)((1717986919 * (unsigned __int64)v10) >> 32) >>
                   1) -
              2;
        goto LABEL_7;
      }
      goto LABEL_6;
    }
    v11 = 2;
  }
LABEL_7:
  v12 = v11 + v3;
  if (v12 <= 6) {
    if (v12 > 1) {
      v14 = 2;
    }
    else {
      v14 = 3;
    }
    if (v12 <= 3) {
      v13 = v14;
    }
    else {
      v13 = 1;
    }
  }
  else {
    v13 = 0;
  }
  v15 = *(_QWORD*)(a1 + 48);
  v16 = *(_DWORD*)(a1 + 32);
  *(_BYTE*)(a1 + 56) = v13;
  result = GameRoutine_195b260(v15, v13, v16);
  v18 = *(_QWORD*)(a1 + 48);
  *(_DWORD*)(a1 + 60) = result;
  if ((int)result < *(unsigned __int16*)(v18 + 60)) {
    goto LABEL_19;
  }
  v19 = *(_QWORD*)(v18 + 72);
  if (v19 == 0) {
    goto LABEL_19;
  }
  nn_os_LockMutex(&game_g_random_mutex);
  v20 = game_map_MapRandom_instance__ptr[0];
  v21 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8);
  v22 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
  v23 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL)) ^
        (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL))
         << 11);
  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
             (unsigned __int64)((__int128*)0x10LL)) =
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL) + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v20 + 4) = v21;
  v24 = (v23 >> 8) ^ (v22 >> 19) ^ v23 ^ v22;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v20 + 8) = v22;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v20 + 12) = v24;
  v25 = v24 & 0x7FFFFFFF;
  nn_os_UnlockMutex(&game_g_random_mutex);
  result = game_996d60(v19, v25 % 0x3E8, 1000);
  if (result != 0) {
    v26 = *(_QWORD*)(result + 40);
  }
  else {
  LABEL_19:
    v26 = 0;
  }
  *(_QWORD*)(a1 + 64) = v26;
  if (game_GameModeData_instance_ != 0) {
    v27 = *(_DWORD*)(game_GameModeData_instance_ + 72) + *(_DWORD*)(a1 + 60);
    v28 = v27 & ~(v27 >> 31);
    if (v28 >= 9999999) {
      v28 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v28;
    v26 = *(_QWORD*)(a1 + 64);
  }
  if (v26 != 0) {
    v29 = *(unsigned __int16*)(v26 + 16);
    v38 = 0x100000000LL;
    LOWORD(v38) = v29;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v29) +
                  73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
      v30 = game_map_MapRandom_instance__ptr[0];
      v31 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v32 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v33 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v30 + 1) = v31;
      v34 = (v33 >> 8) ^ (v32 >> 19) ^ v33 ^ v32;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v30) = v32;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v30 + 4) = v34;
      nn_os_UnlockMutex(&game_g_random_mutex);
      HIDWORD(v38) =
          (16 * ((_WORD)v34 -
                 1000 * (unsigned __int16)((v34 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    result =
        (__int64)(game_UnitUtil_UniqueMap_Commit_89abc0(
                      (void*)(&v37),
                      *(_QWORD*)(*(_QWORD*)
                                     game_TransporterConst_List_instance__ptr
                                         [0] +
                                 8LL),
                      &v38, 1),
                  (void*)(&v37));
  }
  v35 = *(unsigned __int8*)(a1 + 56);
  if (*(_BYTE*)(a1 + 56) != 0) {
    v36 = 0;
  }
  else {
    v36 = *(_DWORD*)(a1 + 32) + 1;
  }
  *(_DWORD*)(a1 + 32) = v36;
  if (*(unsigned __int8*)(a1 + 72) > v35) {
    *(_BYTE*)(a1 + 72) = v35;
  }
  return result;
}

__int64 ProcDivinationSeq_1964e60(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 (***v11)();
  __int64 v12;
  int v13;
  void* v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[3];
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;

  v2 = game_RelianceCheck_unknown_;
  v3 = game_GameModeData_instance_;
  v4 = *(_QWORD*)game_RelianceCheck_unknown_;
  *(_DWORD*)(game_RelianceCheck_unknown_ + 24) = 0;
  *(_QWORD*)(v2 + 8) = v4;
  v5 = GameRoutine_94b9a0(a1);
  v24 = 0;
  v25 = v5;
  if (v5 != 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 1784LL) + 272LL);
  }
  else {
    v6 = 0;
  }
  v7 = game_GameModeData_instance_;
  v26 = v6;
  if (game_GameModeData_instance_ != 0) {
    v7 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  v23[0] = v7;
  v27 = 241;
  result = game_UnitPool_Find_6ead60(v23, &v27);
  v23[0] = result;
  if (result == 0) {
    goto LABEL_13;
  }
  v9 = *(_QWORD*)(result + 392);
  v23[1] = v9;
  if (v9 == 0) {
    v11 = &game_GameReliance_Impl_Data_vtable_ptr;
    goto LABEL_16;
  }
  v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 24) + 1784LL) + 272LL);
  v23[2] = v10;
  v11 = GameData_212dae8;
  if (v6 == 0 || v10 == 0) {
  LABEL_16:
    if (*((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)v11 + 2) == 0) {
      return result;
    }
    goto LABEL_17;
  }
  v12 = *(_QWORD*)(v3 + 128);
  result = GameReliance_8e17a0(v12, &v24, v23);
  if ((result & 0x80000000) == 0) {
    v11 = (__int64 (***)())(*(_QWORD*)(v12 + 8) + 56LL * (unsigned int)result);
    if (*((_BYTE*)v11 + 10) == 0) {
      return result;
    }
    goto LABEL_17;
  }
LABEL_13:
  v11 = &game_GameReliance_Impl_Data_vtable_ptr;
  if (GameData_2166cf2 == 0) {
    return result;
  }
LABEL_17:
  v13 = *(unsigned __int8*)(a1 + 56);
  if ((unsigned int)(v13 - 2) < 2) {
    v14 = &GameData_1ad4ffb;
  }
  else if (v13 == 1) {
    v14 = &GameData_1a93545;
  }
  else {
    if (*(_BYTE*)(a1 + 56) != 0) {
    LABEL_26:
      v16 = 0;
      goto LABEL_27;
    }
    v14 = &GameData_1aefb6e;
  }
  v25 = (__int64)v14;
  v24 = game_HashString(v14);
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_26;
  }
  v15 = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), &v24);
  if (v15 == 0) {
    goto LABEL_26;
  }
  v16 = *(unsigned int*)(v15 + 32);
LABEL_27:
  v17 =
      ((__int64 (*)(__int64 (***)(), __int64, __int64))(*v11)[2])(v11, v16, 1);
  v18 = *(__int64**)(*(_QWORD*)GameData_212c7b8[0] + 16LL);
  v19 = *(__int64**)(*(_QWORD*)GameData_212c7b8[0] + 24LL);
  while (v18 != v19) {
    v20 = *v18++;
    GameSideStoryData_12b3d60(v20);
  }
  v21 = GameRoutine_8c7640(v11[3]);
  v22 = GameRoutine_8c7640(v11[4]);
  return RelianceCheck_19a7f00(v21, v22, v17);
}

#pragma GCC visibility pop
