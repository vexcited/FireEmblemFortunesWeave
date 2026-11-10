#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_149b160(_QWORD);
__int64 GameRoutine_149b740(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_20441f8[])();
extern __int64 (*GameData_2044228[])();
extern __int64 (*GameData_20442c8[])();
extern __int64 GameData_21c9f90;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_224b480;
__int64 PersonOrderFile_DeletingDestructor_149a520(_QWORD* a1);
__int64 PersonOrderFile_Destructor(_QWORD* a1);
__int64 PersonOrderFile_DeletingDestructor_149a650(_QWORD* a1);
__int64 game_HashString(__int64 result);
__int64 PersonOrderFile_149a380(__int64 a1, __int64 a2, char a3);

__int64 PersonOrderFile_149a380(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned int v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int16* v16;

  if (a3 == 12 || a2 == 0) {
    return 0x7FFF;
  }
  v6 = game_HashString(a1);
  if (v6 == 0) {
    return 0x7FFF;
  }
  v7 = *(_QWORD*)(GameData_21c9f90 + 96);
  if (v7 == 0 || *(_QWORD*)(GameData_21c9f90 + 112) == 0) {
    return 0x7FFF;
  }
  v9 = v7 - 1;
  if ((v7 & (v7 - 1)) != 0) {
    v10 = v6;
    if (v6 >= v7) {
      v10 = v6 % v7;
    }
  }
  else {
    v10 = v9 & v6;
  }
  v11 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f90 + 88) + 8 * v10);
  if (v11 == nullptr) {
    return 0x7FFF;
  }
  v12 = (_QWORD*)*v11;
  if (*v11 == 0) {
    return 0x7FFF;
  }
  if ((v7 & v9) == 0) {
    while (1) {
      v15 = v12[1];
      if (v15 == v6) {
        if (v12[2] == v6) {
          goto LABEL_32;
        }
      }
      else if ((v15 & v9) != v10) {
        return 0x7FFF;
      }
      v12 = (_QWORD*)*v12;
      v13 = 0x7FFF;
      if (v12 == nullptr) {
        return v13;
      }
    }
  }
  while (1) {
    v14 = v12[1];
    if (v14 == v6) {
      break;
    }
    if (v14 >= v7) {
      v14 %= v7;
    }
    if (v14 != v10) {
      return 0x7FFF;
    }
  LABEL_21:
    v12 = (_QWORD*)*v12;
    v13 = 0x7FFF;
    if (v12 == nullptr) {
      return v13;
    }
  }
  if (v12[2] != v6) {
    goto LABEL_21;
  }
LABEL_32:
  v16 = (unsigned __int16*)v12[3];
  if (v16 == nullptr) {
    return 0x7FFF;
  }
  switch (a3) {
  case 0:
    v13 = v16[16];
    break;
  case 1:
  case 4:
    v13 = v16[17];
    break;
  case 2:
  case 5:
    v13 = v16[18];
    break;
  case 3:
  case 6:
    v13 = v16[19];
    break;
  case 7:
    v13 = v16[20];
    break;
  case 8:
    v13 = v16[21];
    break;
  case 9:
    v13 = v16[23];
    break;
  case 10:
    v13 = v16[22];
    break;
  case 11:
    v13 = v16[24];
    break;
  default:
    return 0x7FFF;
  }
  return v13;
}

__int64 PersonOrderFile_DeletingDestructor_149a520(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  *a1 = GameData_20441f8;
  a1[1] = GameData_2044228;
  v2 = a1 + 1;
  GameRoutine_149b160(a1 + 1);
  GameRoutine_149b740(v2);
  if ((_QWORD*)GameData_21c9f90 == a1) {
    GameData_21c9f90 = 0;
    GameData_224b480 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

__int64 PersonOrderFile_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 result;

  *(a1 - 1) = GameData_20441f8;
  v2 = a1 - 1;
  *a1 = GameData_2044228;
  GameRoutine_149b160(a1);
  result = GameRoutine_149b740(a1);
  *v2 = GameData_20442c8;
  if ((_QWORD*)GameData_21c9f90 == v2) {
    GameData_21c9f90 = 0;
    GameData_224b480 = 0;
  }
  return result;
}

__int64 PersonOrderFile_DeletingDestructor_149a650(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  *(a1 - 1) = GameData_20441f8;
  v2 = a1 - 1;
  *a1 = GameData_2044228;
  GameRoutine_149b160(a1);
  GameRoutine_149b740(a1);
  if ((_QWORD*)GameData_21c9f90 == v2) {
    GameData_21c9f90 = 0;
    GameData_224b480 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
}

#pragma GCC visibility pop
