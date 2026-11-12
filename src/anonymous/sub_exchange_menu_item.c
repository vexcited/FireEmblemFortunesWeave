#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11912b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_9377a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 game_UnitPool_Get(_QWORD);
extern __int64 GameData_212cf80[5];
extern __int64* GameData_212c998[148];
extern __int64* GameData_212ceb0;
__int64 SubExchangeMenuItem_Unknown25_185f7e0(__int64 a1);
__int64 SubExchangeMenuItem_Unknown58(__int64 a1);
__int64* GameRoutine_931040(unsigned __int8*, __int64);
__int64 GameRoutine_930b90(__int64, __int64);
__int64 RidePool_93ce60(__int64*, __int64, unsigned int);
__int64 game_1191430(__int64, _BYTE**, const char*, const char*, const char*,
                     __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
char* GameHr_67ed20(_QWORD*);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern _QWORD GameData_1fae980[6];
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64* GameData_212c8a0;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212d640[9];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212cf88[4];
extern __int64 GameData_21c99a8;
extern __int64 GameData_21f4018[];
extern __int64 GameData_21f4228;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a9f09e;
void* game_97b2f0(__int64);
void GameRoutine_6e3b50(__int64, _QWORD*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void SubExchangeMenuItem_DeletingDestructor_1863900(__int64 a1);
__int64 SubExchangeMenuItem_Unknown25(__int64 a1);
__int64 SubExchangeMenuItem_Unknown58_1863d60(__int64 a1);

__int64 SubExchangeMenuItem_Unknown25_185f7e0(__int64 a1)
{
  char v2;
  __int64 v3;
  __int64 v5;
  __int64* v6;
  char* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE v13[32];
  _BYTE* v14;
  const char* v15;

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  v3 = *(_QWORD*)(a1 + 152);
  if ((v2 & 1) != 0) {
    GameRoutine_9377a0(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL), v3,
                       *(unsigned int*)(a1 + 40));
    (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 144) + 1112LL))(
        *(_QWORD*)(a1 + 144));
    return 2;
  }
  if (*(_BYTE*)(v3 + 1944) != 0) {
    v5 = *(unsigned int*)(a1 + 40);
    v6 = (int)v5 >= 0
             ? (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] +
                                                8LL) +
                                     48LL) +
                          8 * v5)
             : GameData_212ceb0;
    v8 = *((unsigned __int8*)v6 + 1);
    v7 = (char*)v6 + 1;
    if (v8 != 0) {
      v9 = game_UnitPool_Get(v7);
      if (v9 != 0 && *(_BYTE*)(*(_QWORD*)(a1 + 152) + 1944LL) != 0 &&
          (*(_BYTE*)(*(_QWORD*)(v9 + 400) + 96LL) != 1 ||
           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] +
                                                     64) +
                                          8LL *
                                              *(unsigned __int8*)(*(_QWORD*)(a1 +
                                                                             152) +
                                                                  1944LL)) +
                               50LL) >
               (unsigned int)*(unsigned __int8*)(v9 + 552))) {
        v10 = *(_QWORD*)(a1 + 8);
        v15 = "MID_DeployMenu_NotTactics_Message";
        if (*(_BYTE*)(v9 + 2136) != 0) {
          v11 = GameRoutine_97b2f0(v9 + 2104);
        }
        else {
          v11 = GameRoutine_67ed20(*(_QWORD*)(v9 + 392));
        }
        v14 = nullptr;
        GameRoutine_11912b0(v10, &v15, v11, v13);
        if (v14 == v13) {
          v12 = 32;
        }
        else {
          if (v14 == nullptr) {
            return 12;
          }
          v12 = 40;
        }
        (*(void (**)(void*))(*(_QWORD*)v14 + v12))((void*)v14);
        return 12;
      }
    }
  }
  return 1;
}

__int64 SubExchangeMenuItem_Unknown58(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  _BYTE* v4;
  int v5;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 152);
  if (*(_BYTE*)(v1 + 1944) == 0) {
    return 0;
  }
  v2 = *(unsigned int*)(a1 + 40);
  v3 = (int)v2 >= 0
           ? (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] +
                                              8LL) +
                                   48LL) +
                        8 * v2)
           : GameData_212ceb0;
  if (*(_BYTE*)v3 != 0 &&
      (*(_BYTE*)(*(_QWORD*)(v1 + 400) + 96LL) != 1 ||
       *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                      8LL * *(unsigned __int8*)v3) +
                           50LL) >
           (unsigned int)*(unsigned __int8*)(v1 + 552))) {
    return 0;
  }
  v5 = *((unsigned __int8*)v3 + 1);
  v4 = (char*)v3 + 1;
  if (v5 == 0 || game_UnitPool_Get(v4) == 0) {
    return 1;
  }
  if (*v4 == 0) {
    return 0;
  }
  result = game_UnitPool_Get(v4);
  if (result == 0) {
    return result;
  }
  return *(_BYTE*)(v1 + 1944) == 0 ||
         *(_BYTE*)(*(_QWORD*)(result + 400) + 96LL) == 1 &&
             *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] +
                                                       64) +
                                            8LL * *(unsigned __int8*)(v1 +
                                                                      1944)) +
                                 50LL) <=
                 (unsigned int)*(unsigned __int8*)(result + 552);
}

void SubExchangeMenuItem_DeletingDestructor_1863900(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = GameData_212d640[0] + 2;
  v2 = (_QWORD*)(a1 + 96);
  v3 = *(_QWORD**)(a1 + 128);
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
  v5 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 32);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                    v7);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v9, a1);
}

__int64 SubExchangeMenuItem_Unknown25(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  const char* v10;
  const char* v11;
  __int64 v12;
  _BYTE* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  _BYTE* v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  struct {
    __int64 v26;
    int v27;
  } v26_;
  _QWORD** v28;
  struct {
    _QWORD* v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    _BYTE* v33;
  } v29_;
  struct {
    _QWORD v34[2];
    unsigned __int64 v35;
    unsigned __int64 v36;
    _QWORD* v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
  } v34_;
  const char* v51;

  v1 = *(_QWORD*)(a1 + 152);
  v3 = *(_QWORD*)(v1 + 400);
  if (*(_BYTE*)(v3 + 96) == 2 && *(_BYTE*)(v1 + 1880) == 0) {
    v6 = *(_QWORD*)(v3 + 112);
    if (v6 != 0) {
      v5 =
          &GameData_21f4018[8 * (unsigned __int64)*(unsigned __int8*)(v6 + 32)];
    }
    else {
      v5 = GameData_212c8b0[0];
    }
  }
  else {
    v5 = (__int64*)(v1 + 1880);
  }
  WORD1(v26_.v26) = 0;
  HIDWORD(v26_.v26) = 0;
  v29_.v30 = 0;
  v29_.v31 = 0;
  v29_.v32 = 0;
  v29_.v33 = nullptr;
  v28 = &v29_.v29;
  v29_.v29 = nullptr;
  GameRoutine_930b90((__int64)&v26_.v26, (__int64)v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) != 0) {
    RidePool_93ce60(*(__int64**)(*(_QWORD*)GameData_212cf88[0] + 8LL),
                    *(_QWORD*)(a1 + 152), *(_DWORD*)(a1 + 40));
    (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 144) + 1112LL))(
        *(_QWORD*)(a1 + 144));
    v7 = 2;
    goto LABEL_30;
  }
  if ((_BYTE)v26_.v26 == 0 ||
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                           8LL * (unsigned __int8)v26_.v26) +
                109LL) == 0) {
    v7 = 1;
    goto LABEL_30;
  }
  v8 = *(_QWORD*)(a1 + 8);
  v51 = "MID_DeployMenu_NotRide_Message";
  v9 = *(_QWORD*)(a1 + 152);
  if (*(_BYTE*)(v9 + 2136) != 0) {
    v10 = (const char*)game_97b2f0(v9 + 2104);
  }
  else {
    v10 = GameHr_67ed20(*(_QWORD**)(v9 + 392));
  }
  v11 = v10;
  v12 = *(_QWORD*)(*(_QWORD*)(a1 + 152) + 400LL);
  v13 = *(_BYTE**)(v12 + 32);
  v14 = msg_MessageManager_instance__ptr[0];
  v15 = GameData_212e348;
  if (v13 != nullptr) {
    v16 = *msg_MessageManager_instance__ptr[0];
    v34_.v38 = -1;
    v34_.v39 = -1;
    v34_.v40 = -1;
    v34_.v41 = -1;
    v34_.v42 = -1;
    v34_.v43 = -1;
    v34_.v44 = -1;
    v34_.v45 = -1;
    v34_.v46 = -1;
    v34_.v47 = -1;
    v34_.v48 = -1;
    v34_.v49 = -1;
    v34_.v34[0] = GameData_212e348 + 2;
    v34_.v34[1] = 0xFFFF0001FFFF0000LL;
    v34_.v35 = 0xFFFF0004FFFF0002LL;
    v34_.v36 = 0xFFFF0006FFFF0005LL;
    v34_.v50 = 8;
    v34_.v37 = (_QWORD*)0xFFFF0008FFFF0007LL;
    v17 = GameRoutine_a4dbe0(v16, v13, 0);
    v12 = *(_QWORD*)(*(_QWORD*)(a1 + 152) + 400LL);
  }
  else {
    v17 = &GameData_1a9f09e;
  }
  v18 = *(unsigned __int8*)(*(_QWORD*)(v12 + 112) + 32LL);
  if (v18 != 0 && *(v19 = (_BYTE*)GameData_1fae980[v18]) != 0) {
    v20 = *v14;
    v34_.v38 = -1;
    v34_.v39 = -1;
    v34_.v40 = -1;
    v34_.v41 = -1;
    v34_.v42 = -1;
    v34_.v43 = -1;
    v34_.v44 = -1;
    v34_.v45 = -1;
    v34_.v46 = -1;
    v34_.v47 = -1;
    v34_.v48 = -1;
    v34_.v49 = -1;
    v34_.v34[0] = v15 + 2;
    v34_.v34[1] = 0xFFFF0001FFFF0000LL;
    v34_.v35 = 0xFFFF0004FFFF0002LL;
    v34_.v36 = 0xFFFF0006FFFF0005LL;
    v34_.v50 = 8;
    v34_.v37 = (_QWORD*)0xFFFF0008FFFF0007LL;
    v21 = GameRoutine_a4dbe0(v20, v19, 0);
  }
  else {
    v21 = *msg_MessageManager_empty_text__ptr;
  }
  v34_.v37 = nullptr;
  game_1191430(v8, (_BYTE**)&v51, v11, v17, v21, (__int64)v34_.v34);
  if (v34_.v37 == v34_.v34) {
    v22 = 32;
    goto LABEL_28;
  }
  if (v34_.v37 != nullptr) {
    v22 = 40;
  LABEL_28:
    (*(void (**)(__int64))(*v34_.v37 + v22))((__int64)v34_.v37);
  }
  v7 = 12;
LABEL_30:
  v26_.v27 = 0;
  v26_.v26 = 0;
  if ((v29_.v31 & 1) != 0) {
    *v29_.v33 = 0;
    v29_.v32 = 0;
  }
  else {
    LOWORD(v29_.v31) = 0;
  }
  GameRoutine_6e3b50((__int64)&v28, v29_.v29);
  v29_.v29 = nullptr;
  v29_.v30 = 0;
  v28 = &v29_.v29;
  if ((v29_.v31 & 1) != 0) {
    v23 = v29_.v33;
    if (v29_.v33 != nullptr) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v29_.v33);
      v23 = v29_.v29;
    }
  }
  else {
    v23 = nullptr;
  }
  GameRoutine_6e3b50((__int64)&v28, v23);
  return v7;
}

__int64 SubExchangeMenuItem_Unknown58_1863d60(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  unsigned __int8 v7;
  _QWORD* v8;
  __int64 v9;
  struct {
    __int64 v11;
    int v12;
  } v11_;
  _QWORD** v13;
  struct {
    _QWORD* v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    _BYTE* v18;
  } v14_;

  v1 = *(_QWORD*)(a1 + 152);
  v3 = *(_QWORD*)(v1 + 400);
  if (*(_BYTE*)(v3 + 96) == 2 && *(_BYTE*)(v1 + 1880) == 0) {
    v6 = *(_QWORD*)(v3 + 112);
    if (v6 != 0) {
      v5 =
          &GameData_21f4018[8 * (unsigned __int64)*(unsigned __int8*)(v6 + 32)];
    }
    else {
      v5 = &GameData_21f4228;
    }
  }
  else {
    v5 = (__int64*)(v1 + 1880);
  }
  WORD1(v11_.v11) = 0;
  HIDWORD(v11_.v11) = 0;
  v14_.v15 = 0;
  v14_.v16 = 0;
  v14_.v17 = 0;
  v14_.v18 = nullptr;
  v13 = &v14_.v14;
  v14_.v14 = nullptr;
  GameRoutine_930b90((__int64)&v11_.v11, (__int64)v5);
  if ((_BYTE)v11_.v11 != 0 &&
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99a8 + 64) +
                           8LL * (unsigned __int8)v11_.v11) +
                109LL) != 0) {
    v7 = (unsigned __int8)GameRoutine_931040(
        (unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] +
                                                 8LL) +
                                      120LL) +
                           ((__int64)*(int*)(a1 + 40) << 6)),
        *(_QWORD*)(a1 + 152));
  }
  else {
    v7 = 0;
  }
  v11_.v12 = 0;
  v11_.v11 = 0;
  if ((v14_.v16 & 1) != 0) {
    *v14_.v18 = 0;
    v14_.v17 = 0;
  }
  else {
    LOWORD(v14_.v16) = 0;
  }
  GameRoutine_6e3b50((__int64)&v13, v14_.v14);
  v14_.v14 = nullptr;
  v14_.v15 = 0;
  v13 = &v14_.v14;
  if ((v14_.v16 & 1) != 0) {
    v8 = v14_.v18;
    if (v14_.v18 != nullptr) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                    (__int64)v14_.v18);
      v8 = v14_.v14;
    }
  }
  else {
    v8 = nullptr;
  }
  GameRoutine_6e3b50((__int64)&v13, v8);
  return v7 & 1;
}

#pragma GCC visibility pop
