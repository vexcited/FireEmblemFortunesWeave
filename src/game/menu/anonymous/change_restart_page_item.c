#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_173bc80(__int64, int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_20b7100;
extern __int64* GameData_212e030[4];
__int64 ChangeRestartPageItem_Unknown25(_QWORD* a1);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void ChangeRestartPageItem_Unknown70(PSEUDO_X8 x8_,
                                                                __int64 a1);

__int64 ChangeRestartPageItem_Unknown25(_QWORD* a1)
{
  __int64 v2;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  (*(void (**)(_QWORD*, _QWORD))(*a1 + 328LL))(a1, 0);
  v2 = __dynamic_cast(a1[1], GameData_212e030[0], &GameData_20b7100, 0);
  GameRoutine_173bc80(v2, 1);
  return 13;
}

__attribute__((swiftcall)) void ChangeRestartPageItem_Unknown70(PSEUDO_X8 x8_,
                                                                __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  const char* v3;
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;

  v3 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v4 = game_util_Format("%s_Help", v3);
  result = strlen(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (result | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16, 0);
    a2[1] = v6;
    a2[2] = v9;
    *a2 = v8 | 1;
    v7 = (char*)v9;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v7 = (char*)a2 + 1;
    if (result == 0) {
      goto LABEL_10;
    }
  }
  result = memmove(v7, v4, v6);
LABEL_10:
  v7[v6] = 0;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
