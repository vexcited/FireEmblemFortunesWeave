#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
FacilityDialogueFile_196e9e0(PSEUDO_X8, unsigned __int64 result, __int64, int);
__int64 GameRoutine_1466080(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_facility_SortiePlanVolunteerArgs_Clear(__int64*);
const char* game_HashString32(const char* result);
extern _UNKNOWN GameData_216de68;
extern __int16 GameData_224ae48;
extern __int64* GameData_21313a0[3];
extern __int64 GameData_21ca080;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21f3ff8;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 GameRoutine_1130770(__int64, const char*, __int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_facility_anonymous_14655a0(__int64 a1);
void game_facility_anonymous_196c3c0(__int64 a1, int a2);

__int64 game_facility_anonymous_14655a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  char v7;
  __int64 v8;

  v7 = 0;
  v8 = 0;
  {
    v5 = GameData_21313a0[0] + 2;
    __asm__ volatile("" ::"r"(v5));
  }
  v6 = 0;
  game_facility_SortiePlanVolunteerArgs_Clear((__int64*)&v5);
  {
    v2 = *(unsigned int*)(GameData_21f3ff8 + 8);
    __asm__ volatile("" ::"r"(v2));
  }
  if ((v2 & 0x80000000) != 0) {
    v3 = 0;
  }
  else {
    v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca080 + 64) + 8 * v2);
    __asm__ volatile("" ::"r"(v3));
  }
  v6 = v3;
  return GameRoutine_1466080(a1 + 16, (__int64)&v5);
}

void game_facility_anonymous_196c3c0(__int64 a1, int a2)
{
  int v3;
  const char* v4;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  char v9;
  __int64 v10;
  struct {
    char v11;
    _BYTE v12[7];
    char gap16_[8];
    const char* v13;
  } v11_;

  FacilityDialogueFile_196e9e0((void*)((__int64)&v11_.v11), a1 + 184,
                               *(_QWORD*)(a1 + 240), a2);
  v3 = v11_.v11 & 1;
  if ((v11_.v11 & 1) != 0) {
    v4 = v11_.v13;
  }
  else {
    v4 = v11_.v12;
  }
  if (GameData_21ec7b8 == 0 && v4 != nullptr) {
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v6, v4, nullptr);
    v7 = *(_QWORD*)(a1 + 40);
    if (v7 != 0) {
      *(_QWORD*)(v7 + 48) = v6;
      *(_QWORD*)(v6 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v6;
    *(_QWORD*)(v6 + 24) = "talk::Seq";
    *(_QWORD*)(v6 + 32) = a1;
    *(_DWORD*)(v6 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 24;
    *(_QWORD*)(v6 + 80) = 1;
    *(_QWORD*)(v6 + 8) = &GameData_216de68;
    *(_QWORD*)(v6 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6) & 1) != 0 &&
        (*(_WORD*)(v6 + 136) & 0x100) == 0) {
      *(_WORD*)(v6 + 136) |= 0x100u;
    }
    v8 = *(_BYTE**)(v6 + 32);
    v9 = v8[138];
    if (v9 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v8 + 64LL))(*(_QWORD*)(v6 + 32));
      v9 = v8[138];
    }
    v8[138] = v9 + 1;
    *(_WORD*)(v6 + 136) |= 2u;
    v3 = v11_.v11 & 1;
  }
  GameData_224ae48 = 257;
  if (v3 != 0 && v11_.v13 != nullptr) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  (__int64)v11_.v13);
  }
}

#pragma GCC visibility pop
