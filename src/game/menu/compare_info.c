#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e5e00(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_207cad8[])();
extern __int64 GameData_225d6f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_225d700;
__int64 CompareInfo_DeletingDestructor(__int64 a1);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* game_g_hero_ids;
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0(void);
__int64 CompareInfo_Destructor(_QWORD* a1);
__int64 CompareInfo_DeletingDestructor_166cbd0(_QWORD* a1);
unsigned __int64
game_menu_CompareInfo_Build_lambda0_Invoke(unsigned __int64 result,
                                           unsigned __int8* a2);

__int64 CompareInfo_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)(a1 + 208) = GameData_207cad8;
  if (GameData_225d6f8 == a1) {
    GameData_225d6f8 = 0;
    GameData_225d700 = 0;
  }
  GameRoutine_15e5e00(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 CompareInfo_Destructor(_QWORD* a1)
{
  __int64 v1;

  *a1 = GameData_207cad8;
  v1 = (__int64)(a1 - 26);
  if (GameData_225d6f8 == v1) {
    GameData_225d6f8 = 0;
    GameData_225d700 = 0;
  }
  return GameRoutine_15e5e00(v1);
}

__int64 CompareInfo_DeletingDestructor_166cbd0(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;

  *a1 = GameData_207cad8;
  v1 = a1 - 26;
  if ((_QWORD*)GameData_225d6f8 == a1 - 26) {
    GameData_225d6f8 = 0;
    GameData_225d700 = 0;
  }
  GameRoutine_15e5e00((__int64)(a1 - 26));
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
}

unsigned __int64

game_menu_CompareInfo_Build_lambda0_Invoke(unsigned __int64 result,
                                           unsigned __int8* a2)
{
  unsigned __int8* v2;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  _BOOL4 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;

  if ((**(_BYTE**)(result + 8) & 1) != 0) {
    return result;
  }
  v2 = *(unsigned __int8**)(result + 16);
  v3 = result;
  v4 = (__int64)*(&game_g_hero_ids + *a2);
  result = strlen(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v5 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (result | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v16 = v5;
    v17 = v6;
    v15 = v7 | 1;
  }
  else {
    LOBYTE(v15) = 2 * result;
    v6 = (char*)&v15 + 1;
    if (result == 0) {
      goto LABEL_11;
    }
  }
  result = memmove(v6, v4, v5);
LABEL_11:
  v6[v5] = 0;
  v8 = false;
  v9 = *v2;
  if ((v9 & 1) != 0) {
    v10 = *((_QWORD*)v2 + 1);
  }
  else {
    v10 = v9 >> 1;
  }
  v11 = v16;
  if ((v15 & 1) == 0) {
    v11 = (unsigned __int64)(unsigned __int8)v15 >> 1;
  }
  if (v10 == v11) {
    if ((v9 & 1) != 0) {
      v12 = *((unsigned __int8**)v2 + 2);
    }
    else {
      v12 = v2 + 1;
    }
    if ((v15 & 1) != 0) {
      v13 = v17;
    }
    else {
      v13 = (char*)&v15 + 1;
    }
    result = memcmp(v12, v13);
    v8 = result == 0;
  }
  if ((v15 & 1) != 0 && v17 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v17);
  }
  if (v8) {
    **(_BYTE**)(v3 + 8) = 1;
  }
  return result;
}

#pragma GCC visibility pop
