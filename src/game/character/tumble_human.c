#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CharacterBuilder_1083bf0(_QWORD* result);
__int64 GameRoutine_10bc1a0(void);
__int64 GameRoutine_10bc340(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_character_CharacterDie_Body_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TumbleHuman_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "TumbleHuman_DeletingDestructor");
__int64 TumbleHuman_Unknown5(__int64 a1);
__int64 TumbleHuman_10bbbb0(__int64 result);
__int64 GameRoutine_10bc1a0_alt1(__int64) __asm__("GameRoutine_10bc1a0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TumbleHuman_DeletingDestructor(_QWORD* a1);

void TumbleHuman_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  *a1 = &game_character_CharacterDie_Body_vtable;
  v2 = (_QWORD*)GameRoutine_10bc1a0_alt1((__int64)a1);
  if (v2 != nullptr) {
    CharacterBuilder_1083bf0(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
}

__int64 TumbleHuman_10bbbb0(__int64 result)
{

#pragma clang fp contract(off)
  float v1;

  if (*(_BYTE*)(result + 52) == 1) {
    *(_BYTE*)(result + 52) = 0;
    *(_DWORD*)(result + 48) = 1092616192;
  }
  else {
    v1 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 496LL) + 16LL) *
                 0x1.0aef000000000p+4f) /
         0x1.f400000000000p+9f;
    *(float*)(result + 48) = v1;
    if (v1 <= 0x0.0p+0f) {
      return result;
    }
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)result + 32LL))(result);
}

__int64 TumbleHuman_Unknown5(__int64 a1)
{
  GameRoutine_10bc340();
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
}

#pragma GCC visibility pop
