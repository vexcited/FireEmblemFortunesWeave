#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e030[4];
extern __int64* GameData_212e038[3];
extern __int64* game_g_empty_item_ptr;
__int64 game_facility_ItemShopMenuItem_CreateDialog_lambda0_Invoke(__int64 a1,
                                                                   __int64 a2,
                                                                   int* a3);

__int64 game_facility_ItemShopMenuItem_CreateDialog_lambda0_Invoke(__int64 a1,
                                                                   __int64 a2,
                                                                   int* a3)
{
  __int64 result;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  _BYTE* v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  _QWORD* v20;
  _BYTE* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _BYTE* v25;
  int v26;
  int v27;
  int v28;

  result = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
  if (result != 0) {
    v5 = *a3;
    v6 = *(__int64**)(a1 + 8);
    result =
        __dynamic_cast(result, GameData_212e030[0], GameData_212e038[0], 0);
    if (result != 0) {
      v7 = *v6;
      *((_DWORD*)v6 + 21) = v5;
      v8 = result;
      v9 = (*(__int64 (**)(__int64*))(v7 + 608))(v6);
      if (game_GameModeData_instance_ != 0) {
        v10 = *(_DWORD*)(game_GameModeData_instance_ + 72);
      }
      else {
        v10 = 0;
      }
      v11 = *((_DWORD*)v6 + 21) * v9;
      v15 = 0;
      v16 = *game_g_empty_item_ptr;
      if (*(_BYTE*)GameData_212ceb0 != 0) {
        v12 = *GameData_212ceb0;
      }
      else {
        v12 = 0;
      }
      v17 = v12;
      WORD1(v18) = 0;
      HIDWORD(v18) = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = nullptr;
      v20 = &v21;
      v21 = nullptr;
      GameRoutine_930b90(&v18, GameData_212c8b0[0]);
      v26 = 0;
      v27 = v11;
      v28 = v10;
      (*(void (**)(__int64, _QWORD, int*))(*(_QWORD*)v8 + 1088LL))(v8, 0, &v15);
      v19 = 0;
      v18 = 0;
      if ((v23 & 1) != 0) {
        *v25 = 0;
        v24 = 0;
      }
      else {
        LOWORD(v23) = 0;
      }
      GameRoutine_6e3b50(&v20, v21);
      v21 = nullptr;
      v22 = 0;
      v20 = &v21;
      if ((v23 & 1) != 0) {
        v13 = v25;
        if (v25 != nullptr) {
          v14 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v14);
          v13 = v21;
        }
      }
      else {
        v13 = nullptr;
      }
      return GameRoutine_6e3b50(&v20, v13);
    }
  }
  return result;
}

#pragma GCC visibility pop
