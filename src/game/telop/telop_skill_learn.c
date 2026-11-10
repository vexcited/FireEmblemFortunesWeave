#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopSkillLearn_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopSkillLearn_Unknown57(__int64 a1);
__int64 TelopSkillLearn_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_1767f90(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20c2320[])();
void __attribute__((noreturn)) GameRoutine_177f870(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6881c0(void);
__int64 TelopSkillLearn_1765940(__int64 result, __int64 a2);
__int64 TelopSkillLearn_1765e60(__int64 a1);
_QWORD* game_telop_TelopSkillLearn_CreateBind_lambda0_Clone(_QWORD* a1);
_QWORD* game_telop_TelopSkillLearn_CreateBind_lambda0_CloneInto(_QWORD* result,
                                                                _QWORD* a2);
__int64 game_telop_TelopSkillLearn_CreateBind_lambda1_Invoke(__int64 a1,
                                                             _QWORD* a2);

__int64 TelopSkillLearn_1765940(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;

  *(_QWORD*)(result + 1200) = a2;
  if (a2 != 0) {
    v2 = *(_QWORD*)(a2 + 24);
    v3 = *(_QWORD*)(v2 + 800);
    v4 = *(_QWORD*)(v2 + 808);
    if (v3 != v4) {
      v5 = *(char**)(result + 1216);
      v6 = (_QWORD*)result;
      v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      do {
        v8 = v6[153];
        if ((unsigned __int64)v5 < v8) {
          *(_QWORD*)v5 = v3;
          v5 += 8;
        }
        else {
          v9 = v6[151];
          v10 = &v5[-v9];
          v11 = (__int64)&v5[-v9] >> 3;
          v12 = v11 + 1;
          if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
            GameRoutine_177f870();
          }
          v13 = v8 - v9;
          if (v13 >> 2 > v12) {
            v12 = v13 >> 2;
          }
          if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
            v14 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v14 = v12;
          }
          if (v14 != 0) {
            if (v14 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v15 = fw_memory_HeapManager_Allocate(*v7, 8 * v14, 16, 0);
          }
          else {
            v15 = 0;
          }
          v16 = v15 + 8 * v14;
          v17 = &v5[-v9];
          v18 = (__int64)&v10[v15 + -8 * v11];
          *(_QWORD*)&v10[v15] = v3;
          v5 = &v10[v15 + 8];
          result = memcpy(v18, v9, v17);
          v6[151] = v18;
          v6[152] = v5;
          v6[153] = v16;
          if (v9 != 0) {
            v19 = 128;
            if (*(_QWORD*)(*v7 + 200LL) == 0) {
              v19 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v7 + v19, v9);
          }
        }
        v3 += 4;
        v6[152] = v5;
      } while (v3 != v4);
    }
  }
  return result;
}

__int64 TelopSkillLearn_1765e60(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  __int128 v6;
  __int64 v7;

  v1 = *(unsigned __int8*)(a1 + 824);
  v2 = *(_QWORD*)(a1 + 832);
  v7 = 0;
  v6 = 0u;
  if ((v1 & 1) != 0) {
    v4 = v2;
  }
  else {
    v4 = v1 >> 1;
  }
  if (v4 != 0) {
    *(_WORD*)((char*)&v6 + 9) = 28239;
    *(_QWORD*)((char*)&v6 + 1) = *(_QWORD*)"Pos_TalkOn";
  }
  else {
    DWORD2(v6) = 1717981035;
    *(_QWORD*)((char*)&v6 + 1) = *(_QWORD*)"Pos_TalkOff";
  }
  LayoutAccessor_1562cf0(a1 + 168, (char*)&v6 + 1);
  return LayoutAccessor_1562cf0(a1 + 168, "Type_TitleOff");
}

__int64 TelopSkillLearn_Unknown57(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE v7[4];
  int v8;

  *(_DWORD*)(a1 + 876) = 0;
  *(_DWORD*)(a1 + 940) = 0;
  v8 = 0;
  v7[0] = 0;
  *(_QWORD*)(a1 + 868) = 0;
  (*(void (**)(__int64, int*, _BYTE*))(*(_QWORD*)a1 + 496LL))(a1, &v8, v7);
  (*(void (**)(__int64, int*, _BYTE*))(*(_QWORD*)a1 + 504LL))(a1, &v8, v7);
  result = (*(__int64 (**)(__int64, int*, _BYTE*))(*(_QWORD*)a1 + 512LL))(
      a1, &v8, v7);
  v3 = *(_QWORD*)(a1 + 1184);
  v4 = *(_QWORD*)(a1 + 1176);
  if (v3 != v4) {
    v5 = *(_QWORD*)(a1 + 1176);
    do {
      v6 = v3 - (v4 + 8);
      if (v3 != v4 + 8) {
        result = memmove(v4, v4 + 8, v3 - (v4 + 8));
        v5 = *(_QWORD*)(a1 + 1176);
      }
      v3 = v4 + v6;
      v4 = v5;
      *(_QWORD*)(a1 + 1184) = v3;
    } while (v3 != v5);
  }
  return result;
}

__int64 TelopSkillLearn_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[151];
  *a1 = game_telop_TelopSkillLearn_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[152] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[147];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[148] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, a1);
}

_QWORD* game_telop_TelopSkillLearn_CreateBind_lambda0_Clone(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v4 = a1[1];
  v5 = a1[2];
  v6 = v3;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  *v3 = GameData_20c2320;
  v3[1] = v4;
  v7 = a1[3];
  v8 = v7 - v5;
  if (v7 != v5) {
    if (v8 < 0) {
      GameRoutine_6881c0();
    }
    v9 = fw_memory_HeapManager_Allocate(*v2, v7 - v5, 16, 0);
    v10 = v9 + v8;
    v6[2] = v9;
    v6[4] = v9 + v8;
    memcpy(v9, v5, v8);
    v6[3] = v10;
  }
  v6[5] = a1[5];
  return v6;
}

_QWORD* game_telop_TelopSkillLearn_CreateBind_lambda0_CloneInto(_QWORD* result,
                                                                _QWORD* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v3 = result;
  *a2 = GameData_20c2320;
  v4 = result[1];
  a2[3] = 0;
  a2[4] = 0;
  a2[1] = v4;
  a2[2] = 0;
  v6 = result[2];
  v5 = result[3];
  v7 = v5 - v6;
  if (v5 != v6) {
    if (v7 < 0) {
      GameRoutine_6881c0();
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v5 - v6, 16, 0);
    v9 = v8 + v7;
    a2[2] = v8;
    a2[3] = v8;
    a2[4] = v8 + v7;
    result = (_QWORD*)memcpy(v8, v6, v7);
    a2[3] = v9;
  }
  a2[5] = v3[5];
  return result;
}

__int64 game_telop_TelopSkillLearn_CreateBind_lambda1_Invoke(__int64 a1,
                                                             _QWORD* a2)
{
  return GameRoutine_1767f90(*a2, *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16));
}

#pragma GCC visibility pop
