#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1a92708;
extern _UNKNOWN GameData_1a9a429;
extern _UNKNOWN GameData_1ad432e;
extern _UNKNOWN GameData_1aeed47;
extern __int64 game_GameModeData_instance_;
__int64 TrainingArgs_14269e0(__int64 a1);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140f650(PSEUDO_X8, __int64*, _QWORD*, __int64);
__int64* Registration_a4da40(__int64, __int64);
__int64 FacilityDialogueFile_196eb20(__int64, __int64*, __int64);
__int64 GameRoutine_196e120(_QWORD, _QWORD);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 Manager_a51640(__int64, __int64, _DWORD*);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_1ae1fdd;
extern __int64* GameData_212d590[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 msg_MessageManager_instance_;
void SceneTalk_1497180(_DWORD*, __int64, unsigned __int64, __int64, __int64,
                       unsigned __int64, unsigned int);
__attribute__((swiftcall)) void TrainingArgs_14261c0(PSEUDO_X8 x8_, __int64 a1,
                                                     __int64 a2, int a3);
__attribute__((swiftcall)) void TrainingArgs_1426540(PSEUDO_X8 x8_, __int64 a1,
                                                     int a2);
__attribute__((swiftcall)) void TrainingArgs_1426750(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void TrainingArgs_Unknown3(PSEUDO_X8 x8_,
                                                      __int64 result,
                                                      __int64 a2,
                                                      unsigned int a3);
__attribute__((swiftcall)) void TrainingArgs_Destructor(PSEUDO_X8 x8_,
                                                        __int64 result,
                                                        __int64 a2,
                                                        unsigned int a3);

__attribute__((swiftcall)) void TrainingArgs_14261c0(PSEUDO_X8 x8_, __int64 a1,
                                                     __int64 a2, int a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  __int64* v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int16 v37;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  _QWORD v42[2];
  unsigned int v43;
  __int64 v44;

  v5 = *(_QWORD*)(a2 + 392);
  if (v5 != 0) {
    v8 = *(_QWORD*)(v5 + 8);
  }
  else {
    v8 = 0;
  }
  v9 = 136;
  if (a3 == 0) {
    v9 = 104;
  }
  v10 = *(_QWORD*)(a1 + 40) + v9;
  v11 = *(_QWORD*)(v10 + 8);
  v12 = *(unsigned __int16*)(v10 + 16);
  v13 = *(_QWORD*)(v10 + 24);
  v14 = (char*)game_Unit_GetJob(a2);
  v15 = *(char**)(a1 + 40);
  v16 = *(unsigned __int8*)(v11 + 72);
  if ((unsigned int)v16 <= 0xC &&
      ((_DWORD)v16 == 7 || (v14[v16 + 398] & 0x80000000) == 0) &&
      (v15[98] < 1 || (v14[406] & 0x80000000) == 0) &&
      (v15[99] < 1 || (v14[407] & 0x80000000) == 0) &&
      (v15[100] < 1 || (v14[408] & 0x80000000) == 0) &&
      (v15[101] < 1 || (v14[409] & 0x80000000) == 0)) {
    v19 = (__int64)v14;
  LABEL_69:
    GameRoutine_682bc0(&v41, v8);
    v44 = v19;
    {
      X8CALL_X0(unsigned __int8*, SceneCharacterAppearance_140f650(
                                      (void*)(a4), (__int64*)&v41, &v44, v11));
      return;
    }
  }
  v17 = *(_QWORD*)(a2 + 400);
  v18 = *(_QWORD*)(v17 + 88);
  if ((*(_BYTE*)(a2 + 418) & 4) == 0) {
    v17 = *(_QWORD*)(v17 + 88);
  }
  if (v18 != 0) {
    v19 = v17;
  }
  else {
    v19 = 0;
  }
  v20 = (unsigned int)v16 > 0xC || v19 == 0;
  if (!v20 &&
      ((_DWORD)v16 == 7 || (*(char*)(v17 + v16 + 398) & 0x80000000) == 0) &&
      (v15[98] < 1 || (*(char*)(v17 + 406) & 0x80000000) == 0) &&
      (v15[99] < 1 || (*(char*)(v17 + 407) & 0x80000000) == 0) &&
      (v15[100] < 1 || (*(char*)(v17 + 408) & 0x80000000) == 0) &&
      (v15[101] < 1 || (*(char*)(v17 + 409) & 0x80000000) == 0)) {
    goto LABEL_69;
  }
  v39 = v8;
  v21 = *(_QWORD*)(*(_QWORD*)(a2 + 392) + 24LL);
  v22 = *(_QWORD*)(v21 + 1400);
  v42[0] = *(_QWORD*)(v21 + 1392);
  v42[1] = v22;
  if (game_GameModeData_instance_ != 0 &&
      (v23 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v21 + 1392)) != 0) {
    v24 = *(_DWORD*)(v23 + 32);
  }
  else {
    v24 = 0;
  }
  v43 = v24;
  game_VariableManager_SetFlag(v21 + 1392, 0);
  v25 = 0;
  if ((_DWORD)v12 != 0) {
    v26 = (__int64*)(v13 + 8);
    v27 = 0x7FFFFFFF;
    do {
      v31 = *v26;
      v26 += 2;
      v30 = v31;
      v32 = *(unsigned __int8*)(v11 + 72);
      if ((unsigned int)v32 <= 0xC) {
        v33 = *(char**)(a1 + 40);
        if (((_DWORD)v32 == 7 ||
             (*(char*)(v30 + v32 + 398) & 0x80000000) == 0) &&
            (v33[98] < 1 || (*(char*)(v30 + 406) & 0x80000000) == 0) &&
            (v33[99] < 1 || (*(char*)(v30 + 407) & 0x80000000) == 0) &&
            (v33[100] < 1 || (*(char*)(v30 + 408) & 0x80000000) == 0) &&
            (v33[101] < 1 || (*(char*)(v30 + 409) & 0x80000000) == 0)) {
          v28 = *(unsigned __int8*)(game_Unit_GetJob(a2) + 49) -
                *(unsigned __int8*)(v30 + 49);
          v34 = *(_QWORD*)(*(_QWORD*)(v30 + 24) + 1104LL);
          if (v34 != 0 &&
              (v35 = *(_QWORD*)(a2 + 560),
               (v36 = *(unsigned __int16*)(v34 + 16)) <
                   (unsigned __int64)((*(_QWORD*)(a2 + 568) - v35) >> 1))) {
            v37 = *(_WORD*)(v35 + 2 * v36);
            if (v28 < 0) {
              LOBYTE(v28) = 5 - v28;
            }
            v29 = 1 << v28;
            if ((v37 & 0x400) == 0) {
              v29 |= 0x800u;
            }
          }
          else {
            if (v28 < 0) {
              LOBYTE(v28) = 5 - v28;
            }
            v29 = (1 << v28) | 0x800;
          }
          if (v29 < v27) {
            v27 = v29;
            v25 = v30;
          }
        }
      }
      --v12;
    } while (v12 != 0);
  }
  GameRoutine_682bc0(&v44, v39);
  v40 = v25;
  SceneCharacterAppearance_140f650((void*)(a4), &v44, &v40, v11);
  v41 = GameData_212d590[0] + 2;
  {
    (unsigned __int8*)game_VariableManager_SetFlag(v42, v24);
    return;
  }
}

__attribute__((swiftcall)) void TrainingArgs_1426540(PSEUDO_X8 x8_, __int64 a1,
                                                     int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  int v4;
  __int64 v5;
  __int64 v6;
  const char* v7;
  char* v8;
  __n128 result;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 v16;
    unsigned __int64 v17;
    char* v18;
    char gap32_[8];
    char v19;
    char gap41_[15];
    __int64 v20;
    char gap64_[8];
    char v21;
    char gap73_[15];
    __int64 v22;
    char v23;
    char gap97_[15];
    __int64 v24;
  } v16_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a2 != 0) {
    v4 = -*(_DWORD*)(a1 + 72);
  }
  else {
    v4 = *(_DWORD*)(a1 + 72);
  }
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL * a2);
  if (v4 < 0) {
    v6 = *(_QWORD*)(v5 + 392);
    v7 = "m01";
  }
  else {
    v6 = *(_QWORD*)(v5 + 392);
    if (v4 != 0) {
      v7 = "m03";
    }
    else {
      v7 = (const char*)&GameData_1ae1fdd;
    }
  }
  SceneTalk_1497180(&v16_.v16, (__int64)"ArenaTrain", 0xAu, v6, (__int64)v7, 3u,
                    1u),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v16_.v16 & 1) != 0) {
    v8 = v16_.v18;
  }
  else {
    v8 = (char*)&v16_.v16 + 1;
  }
  if (((unsigned int)Registration_a4da40(msg_MessageManager_instance_,
                                         (__int64)v8) &
       1) != 0 &&
      ((v16_.v16 & 1) != 0 ? (v10 = v16_.v18) : (v10 = (char*)&v16_.v16 + 1),
       (Manager_a51640(msg_MessageManager_instance_, (__int64)v10, v10) & 1) !=
           0)) {
    if ((v16_.v16 & 1) != 0) {
      fw_text_String_CopyTerminated(a3, (__int64)v16_.v18, v16_.v17),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if ((v16_.v23 & 1) == 0) {
        goto LABEL_25;
      }
    }
    else {
      v11 = v16_.v17;
      *a3 = v16_.v16;
      a3[1] = v11;
      a3[2] = (__int64)v16_.v18;
      if ((v16_.v23 & 1) == 0) {
        goto LABEL_25;
      }
    }
  }
  else {
    *(_WORD*)a3 = 0;
    if ((v16_.v23 & 1) == 0) {
      goto LABEL_25;
    }
  }
  if (v16_.v24 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
  }
LABEL_25:
  if ((v16_.v21 & 1) != 0 && v16_.v22 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  if ((v16_.v19 & 1) != 0 && v16_.v20 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
  }
  if ((v16_.v16 & 1) != 0 && v16_.v18 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v15),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void TrainingArgs_1426750(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __n128 result;
  int v6;
  char v7;
  __int64 v8;
  char* v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    unsigned __int64 v18;
    char* v19;
    char gap24_[8];
    char v20;
    char gap33_[15];
    __int64 v21;
    char gap56_[8];
    char v22;
    char gap65_[15];
    __int64 v23;
    char v24;
    char gap89_[15];
    __int64 v25;
    char gap112_[8];
    char v26;
  } v17_;
  struct {
    char gap120_[1];
    _BYTE v27[3];
    char v28;
    char gap125_[11];
    __int64 v29;
  } v27_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 16) +
                  8LL * (int)FacilityDialogueFile_196eb20(
                            a1 + 8, (__int64*)(a1 + 16), *(_QWORD*)(a1 + 64))),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v4 == 0) {
    *(_WORD*)a2 = 0;
    {
      result;
      return;
    }
  }
  v6 = *(unsigned __int8*)(a1 + 56);
  if ((unsigned int)(v6 - 3) >= 2) {
    v17_.v26 = 6;
    *(_WORD*)v27_.v27 = 12397;
    if (v6 == 2) {
      v7 = 53;
    }
    else {
      v7 = 54;
    }
  }
  else {
    v17_.v26 = 6;
    *(_WORD*)v27_.v27 = 12397;
    v7 = 52;
  }
  v8 = *(_QWORD*)(v4 + 392);
  v27_.v27[2] = v7;
  v27_.v28 = 0;
  SceneTalk_1497180(&v17_.v17, (__int64)"ArenaTrain", 0xAu, v8,
                    (__int64)v27_.v27, 3u, 1u),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v17_.v17 & 1) != 0) {
    v9 = v17_.v19;
  }
  else {
    v9 = (char*)&v17_.v17 + 1;
  }
  if (((unsigned int)Registration_a4da40(msg_MessageManager_instance_,
                                         (__int64)v9) &
       1) == 0 ||
      ((v17_.v17 & 1) != 0 ? (v10 = v17_.v19) : (v10 = (char*)&v17_.v17 + 1),
       (Manager_a51640(msg_MessageManager_instance_, (__int64)v10, v10) & 1) ==
           0)) {
    *(_WORD*)a2 = 0;
    if ((v17_.v24 & 1) == 0) {
      goto LABEL_24;
    }
    goto LABEL_20;
  }
  if ((v17_.v17 & 1) == 0) {
    v11 = v17_.v18;
    *a2 = v17_.v17;
    a2[1] = v11;
    a2[2] = (__int64)v17_.v19;
    if ((v17_.v24 & 1) == 0) {
      goto LABEL_24;
    }
  LABEL_20:
    if (v17_.v25 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
    }
    goto LABEL_24;
  }
  fw_text_String_CopyTerminated(a2, (__int64)v17_.v19, v17_.v18),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v17_.v24 & 1) != 0) {
    goto LABEL_20;
  }
LABEL_24:
  if ((v17_.v22 & 1) != 0 && v17_.v23 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  if ((v17_.v20 & 1) != 0 && v17_.v21 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
  }
  if ((v17_.v17 & 1) != 0 && v17_.v19 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
  }
  if ((v17_.v26 & 1) != 0 && v27_.v29 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v16),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 TrainingArgs_14269e0(__int64 a1)
{
  int v1;
  __int64 result;
  void* v3;
  _QWORD v4[2];

  v1 = *(unsigned __int8*)(a1 + 56);
  result = 0;
  if (v1 > 2) {
    if (v1 == 3) {
      v3 = &GameData_1ad432e;
    }
    else {
      if (v1 != 4) {
        return result;
      }
      v3 = &GameData_1a92708;
    }
  }
  else if (v1 == 1) {
    v3 = &GameData_1aeed47;
  }
  else {
    if (v1 != 2) {
      return result;
    }
    v3 = &GameData_1a9a429;
  }
  v4[1] = v3;
  v4[0] = game_HashString(v3);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v4);
  if (result != 0) {
    return *(unsigned int*)(result + 32);
  }
  return result;
}

__attribute__((swiftcall)) void TrainingArgs_Unknown3(PSEUDO_X8 x8_,
                                                      __int64 result,
                                                      __int64 a2,
                                                      unsigned int a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  _QWORD* v6;
  int v7;

  if (a2 == 0) {
    goto LABEL_4;
  }
  v5 = result;
  result = GameRoutine_196e120(a2, a3);
  v6 = *(_QWORD**)(v5 + 16);
  if (*(_QWORD*)(*v6 + 392LL) == result) {
    v7 = 0;
  }
  else {
    if (*(_QWORD*)(v6[1] + 392LL) != result) {
    LABEL_4:
      *(_WORD*)a4 = 0;
      {
        result;
        return;
      }
    }
    v7 = 1;
  }
  {
    X8CALL_X0(__int64, TrainingArgs_1426540((void*)(a4), v5, v7));
    return;
  }
}

__attribute__((swiftcall)) void TrainingArgs_Destructor(PSEUDO_X8 x8_,
                                                        __int64 result,
                                                        __int64 a2,
                                                        unsigned int a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  _QWORD* v6;
  int v7;

  if (a2 == 0) {
    goto LABEL_4;
  }
  v5 = result;
  result = GameRoutine_196e120(a2, a3);
  v6 = *(_QWORD**)(v5 + 8);
  if (*(_QWORD*)(*v6 + 392LL) == result) {
    v7 = 0;
  }
  else {
    if (*(_QWORD*)(v6[1] + 392LL) != result) {
    LABEL_4:
      *(_WORD*)a4 = 0;
      {
        result;
        return;
      }
    }
    v7 = 1;
  }
  {
    X8CALL_X0(__int64, TrainingArgs_1426540((void*)(a4), v5 - 8, v7));
    return;
  }
}

#pragma GCC visibility pop
