#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_778140(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
extern __int64 (*game_map_anonymous_DirectSkillMenuItem_vtable[])();
extern __int64 GameData_21ca310;
extern __int64 GameData_22736d8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 EscapeMenuItem_752b40(int a1, int a2, int a3, int a4, int a5, int a6,
                              int a7, int a8);
__int64 EscapeMenuItem_752f80(__int64 a1, __int64 a2);
__int64 EscapeMenuItem_19f6a70(__int64 a1, __int64 a2);
__int64 EscapeMenuItem_19fb200(__int64 a1, _DWORD* a2);
__int64 EscapeMenuItem_752b40(int a1, int a2, int a3, int a4, int a5, int a6,
                              int a7, int a8)
{
  int v8;
  int v10;
  int v12;
  int v13;
  int v14;
  __int64 result;
  int v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  bool v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;

  v8 = a4 * a3;
  v10 = a8 * a7;
  if (a8 * a7 * a4 * a3 < 2) {
    v21 = a5 - a1;
    if (a5 - a1 < 0) {
      v21 = a1 - a5;
    }
    v22 = a6 - a2;
    if (a6 - a2 < 0) {
      v22 = a2 - a6;
    }
    return (unsigned int)(v22 + v21);
  }
  else {
    if (v8 == 1 && v10 >= 2) {
      if (a8 >= 1 && a7 >= 1) {
        v23 = a8 + a6;
        v24 = -a1;
        LODWORD(result) = 10000;
        do {
          v25 = a6 - a2;
          v26 = a5;
          if (a6 - a2 < 0) {
            v25 = a2 - a6;
          }
          do {
            v28 = v24 + v26;
            v27 = v24 + v26++ < 0;
            if (v27) {
              v28 = -v28;
            }
            v29 = v28 + v25;
            if (v29 >= (unsigned int)result) {
              result = (unsigned int)result;
            }
            else {
              result = v29;
            }
          } while (v26 < a7 + a5);
          ++a6;
        } while (a6 < v23);
        return result;
      }
      return 10000;
    }
    v12 = a4 + a2;
    if (v8 > 1 && v10 == 1) {
      if (a4 < 1 || a3 < 1) {
        return 10000;
      }
      v13 = a3 + a1;
      v14 = a5 - a1;
      LODWORD(result) = 10000;
      do {
        v16 = a6 - a2;
        v17 = v14;
        v18 = a1;
        if (a6 - a2 < 0) {
          v16 = a2 - a6;
        }
        do {
          ++v18;
          if (v17 >= 0) {
            v19 = v17;
          }
          else {
            v19 = -v17;
          }
          --v17;
          v20 = v19 + v16;
          if (v20 >= (unsigned int)result) {
            result = (unsigned int)result;
          }
          else {
            result = v20;
          }
        } while (v18 < v13);
        ++a2;
      } while (a2 < v12);
    }
    else {
      result = 10000;
      if (a4 >= 1 && a7 >= 1 && a3 >= 1 && a8 >= 1) {
        v30 = a3 + a1;
        do {
          v31 = -a1;
          v32 = a1;
          do {
            v33 = a6;
            do {
              v34 = v33 - a2;
              v35 = a5;
              if (v33 - a2 < 0) {
                v34 = a2 - v33;
              }
              do {
                v36 = v31 + v35;
                v27 = v31 + v35++ < 0;
                if (v27) {
                  v36 = -v36;
                }
                v37 = v36 + v34;
                if (v37 >= (int)result) {
                  result = (unsigned int)result;
                }
                else {
                  result = (unsigned int)v37;
                }
              } while (v35 < a7 + a5);
              ++v33;
            } while (v33 < a8 + a6);
            ++v32;
            --v31;
          } while (v32 < v30);
          ++a2;
        } while (a2 < v12);
      }
    }
  }
  return result;
}

__int64 EscapeMenuItem_752f80(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;

  result = 0;
  if (a1 != 0 && a2 != 0) {
    v5 = *(_QWORD*)(a1 + 440);
    if (v5 == 0) {
      v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556216LL);
      if (v6 != 0) {
        goto LABEL_9;
      }
      return 0;
    }
    v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                    24LL * *(unsigned __int8*)(v5 + 16) + 556000);
    if (v6 == 0) {
      return 0;
    }
  LABEL_9:
    while (1) {
      v7 = *(_QWORD*)(v6 + 432);
      v8 = *(_WORD*)(a2 + 16) & 0xFFF;
      if ((game_HasSkill(v6 + 1744, &v8) & 1) != 0) {
        result = EscapeMenuItem_752b40(-1, -1, *(_DWORD*)(a1 + 592),
                                       *(_DWORD*)(a1 + 592), *(char*)(v6 + 584),
                                       *(char*)(v6 + 585), *(_DWORD*)(v6 + 592),
                                       *(_DWORD*)(v6 + 592));
        if ((_DWORD)result == 1) {
          break;
        }
      }
      v6 = v7;
      if (v7 == 0) {
        return 0;
      }
    }
  }
  return result;
}

__int64 EscapeMenuItem_19f6a70(__int64 a1, __int64 a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 608LL))(a1);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1);
  v6 = GameRoutine_778140(a2, v5, v4, 0);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a2 + 24LL))(v6) & 1) == 0 ||
      *(_DWORD*)(a2 + 12348) != 1) {
    return 0;
  }
  v7 = *(_QWORD*)(a2 + 60);
  *(_DWORD*)(a1 + 92) = *(_DWORD*)(a2 + 68);
  *(_QWORD*)(a1 + 84) = v7;
  return 1;
}

__int64 EscapeMenuItem_19fb200(__int64 a1, _DWORD* a2)
{
  __int64 v2;
  __int64 v4;
  int v5;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      88, 16, 0);
  *(_QWORD*)(v4 + 8) = 0;
  *(_WORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  if (*(_QWORD*)(GameData_22736d8 + 240) ==
      *(_QWORD*)(GameData_22736d8 + 232)) {
    v5 = 0;
  }
  else {
    v5 = ((unsigned __int64)(*(_QWORD*)(GameData_22736d8 + 240) -
                             *(_QWORD*)(GameData_22736d8 + 232) +
                             0x7FFFFFFF8LL) >>
          3) +
         1;
  }
  *(_DWORD*)(v4 + 40) = v5;
  *(_QWORD*)v4 = game_map_anonymous_DirectSkillMenuItem_vtable;
  *(_DWORD*)(v4 + 84) = *a2;
  return BasicMenuCursor_16e0c00(v2, v4);
}

#pragma GCC visibility pop
