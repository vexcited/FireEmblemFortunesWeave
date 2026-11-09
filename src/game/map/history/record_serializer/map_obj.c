#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_8129a0(_QWORD, _QWORD);
__int64 GameRoutine_812b00(_QWORD);
extern __int64 game_script_map_obj_g_object_records;
__int64 MapObj_Destructor(__int64 a1, __int64 a2);

__int64 MapObj_Destructor(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  char* v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  char* v19;
  unsigned __int64 v20;
  char* v21;

  v2 = *(int*)(a2 + 20);
  result = a2;
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = 0;
  v4 = game_script_map_obj_g_object_records;
  if (game_script_map_obj_g_object_records != 0) {
    v5 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v5 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = 1;
    v7 = *(int*)(a2 + 20);
    v8 = *(_QWORD*)(v4 + 16) - *(_QWORD*)(v4 + 8);
    *(_DWORD*)(a2 + 20) = v7 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v8 >> 5;
    v9 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v8 >> 13;
    v10 = *(char**)(v4 + 8);
    v11 = *(char**)(v4 + 16);
    if (v10 != v11) {
      v12 = v10 + 25;
      do {
        v19 = v12 - 25;
        v18 = (unsigned __int8)*(v12 - 25);
        v20 = *(_QWORD*)(v12 - 17);
        if ((v18 & 1) == 0) {
          v20 = v18 >> 1;
        }
        if (v20 != 0) {
          if ((v18 & 1) != 0) {
            v21 = *(char**)(v12 - 9);
          }
          else {
            v21 = v12 - 24;
          }
          v13 = GameRoutine_812b00(v21);
        }
        else {
          v13 =
              GameRoutine_8129a0((unsigned int)*(v12 - 1), (unsigned int)*v12);
        }
        v14 = v13;
        v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 64LL))(v13);
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 72LL))(v14);
        v16 = *(int*)(a2 + 20);
        v12 += 32;
        *(_DWORD*)(a2 + 20) = v16 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = v15 & 1;
        v17 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v17 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = result;
      } while (v19 + 32 != v11);
    }
  }
  return result;
}

#pragma GCC visibility pop
