#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_map_anonymous_RegistPosList_Search(__int64*, __int64, __int64, int,
                                                int);
__int64 game_map_anonymous_RegistPosList_Search_closure_Invoke(__int64 result,
                                                               _DWORD* a2,
                                                               _DWORD* a3);
_BYTE* GameRoutine_74e080(_QWORD*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_Dir_EachOffset(__int64);
extern __int64 (*GameData_1f9b828[])();
extern __int64 fw_memory_g_heap_manager_ptr;

__int64 game_map_anonymous_RegistPosList_Search(__int64* a1, __int64 a2,
                                                __int64 a3, int a4, int a5)
{
  __int64 v5;
  __int64 v6;
  int v9;
  int v10;
  int v11;
  int v12;
  bool v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  _QWORD* v20;
  struct {
    _BYTE v22[2];
    __int16 v23;
    char gap4_[28];
    _QWORD* v24;
  } v22_;
  int v25;
  int v26;
  __int64 v27;

  v6 = *a1;
  v5 = a1[1];
  v27 = a3;
  v25 = a5;
  v26 = a4;
  if ((unsigned __int64)(v5 - v6) <= 0x3FF) {
    v9 = *((_DWORD*)a1 + 6);
    if (v9 < 0) {
      *((_DWORD*)a1 + 6) = a4;
      *((_DWORD*)a1 + 7) = a5;
      a1[4] = 0x100000001LL;
    }
    else {
      v10 = *((_DWORD*)a1 + 7);
      v11 = *((_DWORD*)a1 + 8);
      v12 = v9 + v11;
      v13 = __OFSUB__(v9, a4);
      v14 = v9 - a4;
      v15 = v12 - 1;
      v16 = *((_DWORD*)a1 + 9);
      if (!((v14 < 0) ^ v13 | (v14 == 0))) {
        v11 += v14;
        *((_DWORD*)a1 + 6) = a4;
        *((_DWORD*)a1 + 8) = v11;
      }
      v13 = __OFSUB__(a4, v15);
      v17 = a4 - v15;
      if (!((v17 < 0) ^ v13 | (v17 == 0))) {
        *((_DWORD*)a1 + 8) = v17 + v11;
      }
      v18 = v10 + v16 - 1;
      v13 = __OFSUB__(v10, a5);
      v19 = v10 - a5;
      if (!((v19 < 0) ^ v13 | (v19 == 0))) {
        v16 += v19;
        *((_DWORD*)a1 + 7) = a5;
        *((_DWORD*)a1 + 9) = v16;
      }
      if (a5 > v18) {
        *((_DWORD*)a1 + 9) = a5 - v18 + v16;
      }
    }
    v22_.v22[0] = a4;
    v22_.v22[1] = a5;
    v22_.v23 = 0;
    GameRoutine_74e080(a1, (__int64)v22_.v22);
  }
  v20 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v22_.v24 = v20;
  *v20 = GameData_1f9b828;
  v20[1] = &v26;
  v20[2] = &v25;
  v20[3] = a2;
  v20[4] = &v27;
  v20[5] = a1;
  game_Dir_EachOffset((__int64)v22_.v22);
  return (*(__int64 (**)(_QWORD*))(*v20 + 40LL))(v20);
}

__int64 game_map_anonymous_RegistPosList_Search_closure_Invoke(__int64 result,
                                                               _DWORD* a2,
                                                               _DWORD* a3)
{
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char* i;

  v3 = **(_DWORD**)(result + 8) + *a2;
  v4 = **(_DWORD**)(result + 16) + *a3;
  if (((v4 | v3) & 0x80000000) == 0) {
    v5 = *(_QWORD*)(result + 24);
    if (v3 < *(_DWORD*)v5 && v4 < *(_DWORD*)(v5 + 4)) {
      v6 = **(_QWORD**)(result + 32);
      if (*(unsigned __int16*)(*(_QWORD*)(v5 + 104) + 2LL * (v3 + 32 * v4)) ==
          *(unsigned __int16*)(v6 + 16)) {
        result = *(_QWORD*)(result + 40);
        v7 = *(_DWORD*)(result + 24);
        if (v7 > v3) {
          return game_map_anonymous_RegistPosList_Search((__int64*)result, v5,
                                                         v6, v3, v4);
        }
        v8 = *(_DWORD*)(result + 28);
        if (v8 > v4) {
          return game_map_anonymous_RegistPosList_Search((__int64*)result, v5,
                                                         v6, v3, v4);
        }
        v9 = *(_DWORD*)(result + 32);
        if (v3 > v7 + v9 - 1) {
          return game_map_anonymous_RegistPosList_Search((__int64*)result, v5,
                                                         v6, v3, v4);
        }
        v10 = *(_DWORD*)(result + 36);
        if (v4 > v8 + v10 - 1) {
          return game_map_anonymous_RegistPosList_Search((__int64*)result, v5,
                                                         v6, v3, v4);
        }
        if (v10 * v9 >= 2) {
          for (i = *(char**)result; i != *(char**)(result + 8); i += 4) {
            if (v3 == *i && v4 == i[1]) {
              return result;
            }
          }
          return game_map_anonymous_RegistPosList_Search((__int64*)result, v5,
                                                         v6, v3, v4);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
