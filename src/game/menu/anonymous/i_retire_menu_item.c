#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_80cdc0(_QWORD);
__int64 game_menu_anonymous_IRetireMenuItem_ACall_closure_Invoke(__int64 a1);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void IRetireMenuItem_173ce80(PSEUDO_X8 x8_,
                                                        __int64 a1);

__attribute__((swiftcall)) void IRetireMenuItem_173ce80(PSEUDO_X8 x8_,
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

__int64 game_menu_anonymous_IRetireMenuItem_ACall_closure_Invoke(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  v1 = *(_QWORD**)(a1 + 8);
  (*(void (**)(_QWORD*))(*v1 + 608LL))(v1);
  v2 = v1[16];
  if (v2 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
  }
  GameRoutine_80cdc0(v2);
  return 2;
}

#pragma GCC visibility pop
