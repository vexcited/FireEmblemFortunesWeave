#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameManager_a2c820(__int64, __int64, char);
_QWORD* GameManager_a2d8b0(_QWORD* result, __int64, char, char);
__attribute__((swiftcall)) void LocatorDispos_db1e20(PSEUDO_X8,
                                                     __int64* result);
__attribute__((swiftcall)) void LocatorDispos_db1f30(PSEUDO_X8,
                                                     unsigned __int8*);
__int64 GameRoutine_610540(const char*, const char*);
__int64 snd_BGM_getFirstName(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_Fade_Fade_10cb00(__int64, __int64);
__int64 strcmp(_QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64 GameData_21c9608;
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_212ec08;
__int64 BgmManager_10c0870(__int64 result);

__int64 BgmManager_10c0870(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  char v4;
  const char* v5;
  __int64* v6;
  const char* v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  const char* v11;
  __int64 v12;
  __int64 v13;
  char v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char v17;
  __int64 v18;
  int* v19;
  int v20;
  int v21;
  __int64 v23;
  unsigned __int16* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64* v29;
  struct {
    __int64 v30[2];
    const char* v31;
  } v30_;
  _BYTE v32[200];
  struct {
    __int64 v33[2];
    const char* v34;
  } v33_;

  if (*(_BYTE*)(result + 13) == 0) {
    return result;
  }
  v1 = result;
  if ((*(_BYTE*)(result + 12) & 1) != 0) {
    return result;
  }
  v2 = *(unsigned __int8*)(result + 16);
  *(_BYTE*)(result + 12) = 1;
  if ((v2 & 1) != 0) {
    v3 = *(_QWORD*)(result + 24);
  }
  else {
    v3 = v2 >> 1;
  }
  if (v3 == 0) {
    v14 = 0;
  LABEL_57:
    snd_Fade_Fade_10cb00((__int64)v32, (__int64)GameData_212ec08);
    if ((unsigned int)(*(_DWORD*)(v1 + 8) - 3) <= 1) {
      GameManager_a2d8b0(*(_QWORD**)game_sound_g_game_sound_ptr[0],
                         (__int64)v32, 1, v14);
      *(_BYTE*)(v1 + 64) = 0;
      *(_DWORD*)(v1 + 8) = 0;
    }
    v29 = (__int64*)v32;
    goto LABEL_60;
  }
  LocatorDispos_db1e20((void*)(v30_.v30), (__int64*)(result + 16));
  LocatorDispos_db1f30((void*)(v33_.v33), (unsigned __int8*)(v1 + 16));
  v4 = v33_.v33[0];
  v5 = v33_.v34;
  v6 = game_sound_g_game_sound_ptr[0];
  if ((v30_.v30[0] & 1) != 0) {
    v7 = v30_.v31;
  }
  else {
    v7 = (char*)v30_.v30 + 1;
  }
  v8 = snd_BGM_getFirstName(*(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8));
  v9 = false;
  if (v7 != nullptr && v8 != 0) {
    v10 = v8;
    if ((v4 & 1) != 0) {
      v11 = v5;
    }
    else {
      v11 = (char*)v33_.v33 + 1;
    }
    v12 = GameRoutine_610540(v7, v11);
    v9 = v12 != 0 && (v13 = *(_QWORD*)(v12 + 40)) != 0 &&
         (unsigned int)strcmp(v10, v13) == 0;
  }
  v15 = *(unsigned __int8*)(GameData_21c9608 + 256);
  v16 = *(_QWORD*)(GameData_21c9608 + 264);
  if ((v15 & 1) == 0) {
    v16 = v15 >> 1;
  }
  v17 = v16 != 0 || v9;
  v18 = *(_QWORD*)(GameData_21f3d10 + 48);
  if ((*(_BYTE*)(GameData_21f3d10 + 40) & 1) == 0) {
    v18 = *(_BYTE*)(GameData_21f3d10 + 40) >> 1;
  }
  if (v18 != 7) {
    goto LABEL_42;
  }
  v19 = (*(_BYTE*)(GameData_21f3d10 + 40) & 1) != 0
            ? *(int**)(GameData_21f3d10 + 56)
            : (int*)(GameData_21f3d10 + 41);
  v20 = *v19;
  v21 = *(int*)((char*)v19 + 3);
  if (v20 != 1600288072 || v21 != 808464479) {
    goto LABEL_42;
  }
  v23 = *(_QWORD*)(GameData_21f3d10 + 96);
  if ((*(_BYTE*)(GameData_21f3d10 + 88) & 1) == 0) {
    v23 = *(_BYTE*)(GameData_21f3d10 + 88) >> 1;
  }
  if (v23 == 2) {
    v24 = (unsigned __int16*)(GameData_21f3d10 + 89);
    if ((*(_BYTE*)(GameData_21f3d10 + 88) & 1) != 0) {
      v24 = *(unsigned __int16**)(GameData_21f3d10 + 104);
    }
    v14 = *v24 == 12609;
  }
  else {
  LABEL_42:
    v14 = 0;
  }
  if ((v33_.v33[0] & 1) != 0 && v33_.v34 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
  }
  if ((v30_.v30[0] & 1) != 0 && v30_.v31 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
  }
  if ((v17 & 1) == 0) {
    goto LABEL_57;
  }
  snd_Fade_Fade_10cb00((__int64)v30_.v30, (__int64)GameData_212ec08);
  v27 = *v6;
  v28 = *(_DWORD*)(*v6 + 628);
  if (v28 != 0) {
    *(_DWORD*)(v27 + 628) = v28 - 1;
    GameManager_a2c820(v27, (__int64)v30_.v30, 0);
  }
  v29 = v30_.v30;
LABEL_60:
  result = snd_Fade_Destroy_Fade(v29);
  if ((*(_BYTE*)(v1 + 16) & 1) != 0) {
    **(_BYTE**)(v1 + 32) = 0;
    *(_QWORD*)(v1 + 24) = 0;
  }
  else {
    *(_WORD*)(v1 + 16) = 0;
  }
  *(_DWORD*)(v1 + 8) = 5;
  return result;
}

#pragma GCC visibility pop
