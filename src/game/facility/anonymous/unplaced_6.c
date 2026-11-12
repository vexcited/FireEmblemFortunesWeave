#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SceneCharacter_14020c0(__int64);
__attribute__((swiftcall)) void
SceneTalk_1497520(PSEUDO_X8, __int64, __int64, __int64, __int64, __int64, int);
__int64 SceneManager_138e5e0(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
const char* game_HashString32(const char* result);
extern _UNKNOWN GameData_1ae1fdd;
extern _UNKNOWN GameData_216de68;
extern __int16 GameData_224ae48;
extern __int64 GameData_212dce8;
extern __int64 GameData_21ec7b8;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 GameRoutine_1130770(__int64, const char*, __int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_facility_anonymous_196c0e0(__int64 a1);
void game_facility_anonymous_197c740(__int64 a1);

void game_facility_anonymous_196c0e0(__int64 a1)
{
  int v1;
  __int64 v3;
  unsigned int v4;
  _QWORD* v5;
  const char* v6;
  const char* v8;
  char v9;
  const char* v10;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  char v15;
  __int64 v16;
  struct {
    __int64 v17[2];
    const char* v18;
  } v17_;

  v1 = *(_DWORD*)(a1 + 256);
  v3 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
  if (v3 != 0) {
    v4 = *(unsigned __int8*)(a1 + v1 + 233);
    v5 = SceneCharacter_14020c0(v3);
    v6 = (const char*)&GameData_1ae1fdd;
    if ((v4 & 0xFB) == 0) {
      v6 = "m03";
    }
    if (v4 > 5 || ((1 << v4) & 0x2C) == 0) {
      v8 = v6;
    }
    else {
      v8 = "m01";
    }
    SceneTalk_1497520((void*)(v17_.v17), (__int64)"Meal", 4, (__int64)v5,
                      (__int64)v8, 3, 2);
    v9 = v17_.v17[0] & 1;
    if ((v17_.v17[0] & 1) != 0) {
      v10 = v17_.v18;
    }
    else {
      v10 = (char*)v17_.v17 + 1;
    }
  }
  else {
    v9 = 0;
    LOWORD(v17_.v17[0]) = 0;
    v10 = (char*)v17_.v17 + 1;
  }
  if (GameData_21ec7b8 == 0 && v10 != nullptr) {
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         1376, 16, 0);
    GameRoutine_1130770(v12, v10, nullptr);
    v13 = *(_QWORD*)(a1 + 40);
    if (v13 != 0) {
      *(_QWORD*)(v13 + 48) = v12;
      *(_QWORD*)(v12 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v12;
    *(_QWORD*)(v12 + 24) = "talk::Seq";
    *(_QWORD*)(v12 + 32) = a1;
    *(_DWORD*)(v12 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v12 + 64) = 0;
    *(_QWORD*)(v12 + 72) = 24;
    *(_QWORD*)(v12 + 80) = 1;
    *(_QWORD*)(v12 + 8) = &GameData_216de68;
    *(_QWORD*)(v12 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v12 + 136LL))(v12) & 1) != 0 &&
        (*(_WORD*)(v12 + 136) & 0x100) == 0) {
      *(_WORD*)(v12 + 136) |= 0x100u;
    }
    v14 = *(_BYTE**)(v12 + 32);
    v15 = v14[138];
    if (v15 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v14 + 64LL))(*(_QWORD*)(v12 + 32));
      v15 = v14[138];
    }
    v14[138] = v15 + 1;
    *(_WORD*)(v12 + 136) |= 2u;
    v9 = v17_.v17[0] & 1;
  }
  GameData_224ae48 = 257;
  if (v9 != 0 && v17_.v18 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  (__int64)v17_.v18);
  }
}

void game_facility_anonymous_197c740(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  char v4;
  const char* v5;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  char v10;
  __int64 v11;
  struct {
    __int64 v12[2];
    const char* v13;
  } v12_;

  v2 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
  if (v2 != 0) {
    v3 = SceneCharacter_14020c0(v2);
    SceneTalk_1497520((void*)(v12_.v12), (__int64)"Serve", 5, (__int64)v3,
                      (__int64)"m01", 3, 6);
    v4 = v12_.v12[0] & 1;
    if ((v12_.v12[0] & 1) != 0) {
      v5 = v12_.v13;
    }
    else {
      v5 = (char*)v12_.v12 + 1;
    }
  }
  else {
    v4 = 0;
    LOWORD(v12_.v12[0]) = 0;
    v5 = (char*)v12_.v12 + 1;
  }
  if (GameData_21ec7b8 == 0 && v5 != nullptr) {
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v7, v5, nullptr);
    v8 = *(_QWORD*)(a1 + 40);
    if (v8 != 0) {
      *(_QWORD*)(v8 + 48) = v7;
      *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v7;
    *(_QWORD*)(v7 + 24) = "talk::Seq";
    *(_QWORD*)(v7 + 32) = a1;
    *(_DWORD*)(v7 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 24;
    *(_QWORD*)(v7 + 80) = 1;
    *(_QWORD*)(v7 + 8) = &GameData_216de68;
    *(_QWORD*)(v7 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
        (*(_WORD*)(v7 + 136) & 0x100) == 0) {
      *(_WORD*)(v7 + 136) |= 0x100u;
    }
    v9 = *(_BYTE**)(v7 + 32);
    v10 = v9[138];
    if (v10 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v9 + 64LL))(*(_QWORD*)(v7 + 32));
      v10 = v9[138];
    }
    v9[138] = v10 + 1;
    *(_WORD*)(v7 + 136) |= 2u;
    v4 = v12_.v12[0] & 1;
  }
  GameData_224ae48 = 259;
  if (v4 != 0 && v12_.v13 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  (__int64)v12_.v13);
  }
}

#pragma GCC visibility pop
