#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_script_map_effect_g_sequence;
__int64 UseHistoryMenuItem_Unknown25(_QWORD* a1);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void UseHistoryMenuItem_Unknown70(PSEUDO_X8 x8_,
                                                             __int64 a1);
__attribute__((swiftcall)) void UseHistoryMenuItem_Unknown71(PSEUDO_X8 x8_,
                                                             __int64 a1);

__int64 UseHistoryMenuItem_Unknown25(_QWORD* a1)
{
  __int64 v2;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  if (game_script_map_effect_g_sequence != 0) {
    *(_DWORD*)(game_script_map_effect_g_sequence + 152) = 13;
  }
  v2 = a1[16];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
  }
  (*(void (**)(_QWORD*, _QWORD))(*a1 + 328LL))(a1, 0);
  return 13;
}

__attribute__((swiftcall)) void UseHistoryMenuItem_Unknown70(PSEUDO_X8 x8_,
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

__attribute__((swiftcall)) void UseHistoryMenuItem_Unknown71(PSEUDO_X8 x8_,
                                                             __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char* v4;
  const char* v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) != 0) {
    v4 = &GameData_1a9f09e;
  }
  else {
    v5 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
    v4 = (char*)game_util_Format("%s_Annotation", v5);
  }
  result = strlen(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v7 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (result | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    a2[1] = v7;
    a2[2] = v10;
    *a2 = v9 | 1;
    v8 = (char*)v10;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v8 = (char*)a2 + 1;
    if (result == 0) {
      goto LABEL_13;
    }
  }
  result = memmove(v8, v4, v7);
LABEL_13:
  v8[v7] = 0;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
