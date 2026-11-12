#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ProcTalkLogMenu_17cf3a0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(_QWORD, _QWORD);
extern _UNKNOWN GameData_2174f00;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_2265a08;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
__int64 ChoiceMenu_16e8520(__int64 a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
void GameHr_17cf3a0(__int64, char);

__int64 ChoiceMenu_16e8520(__int64 a1)
{
  int v1;
  int v2;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;

  if (GameData_21ec7b8 != 0 && *(_BYTE*)(GameData_21ec7b8 + 288) == 1) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
                1 >
            2 ||
        (((v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v2 = 2)
             : (v2 = 3),
         (v2 & v1) != 0)) {
      if (GameData_2265a08 == 0 || *(_BYTE*)(GameData_2265a08 + 24) == 1) {
        v4 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 1712, 16, 0);
        GameHr_17cf3a0(v4, 0);
        v5 = *(_QWORD*)(a1 + 40);
        if (v5 != 0) {
          *(_QWORD*)(v5 + 48) = v4;
          *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
        }
        *(_QWORD*)(a1 + 40) = v4;
        *(_QWORD*)(v4 + 24) = "ProcTalkLogMenu";
        *(_QWORD*)(v4 + 32) = a1;
        *(_DWORD*)(v4 + 140) =
            (unsigned int)game_HashString32_alt1("ProcTalkLogMenu");
        *(_QWORD*)(v4 + 64) = 0;
        *(_QWORD*)(v4 + 72) = 24;
        *(_QWORD*)(v4 + 80) = 1;
        *(_QWORD*)(v4 + 8) = &GameData_2174f00;
        *(_QWORD*)(v4 + 16) = &GameData_2174f00;
        (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
            (*(_WORD*)(v4 + 136) & 0x100) == 0) {
          *(_WORD*)(v4 + 136) |= 0x100u;
        }
        v6 = *(_BYTE**)(v4 + 32);
        v7 = v6[138];
        if (v7 == 0) {
          (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
          v7 = v6[138];
        }
        v6[138] = v7 + 1;
        *(_WORD*)(v4 + 136) |= 2u;
      }
    }
  }
  return 0;
}

#pragma GCC visibility pop
