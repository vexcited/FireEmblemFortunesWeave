#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_evt_EventManagerBase_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* EventManagerBase_Destructor(_QWORD* result);
__int64 EventManagerBase_DeletingDestructor(_QWORD* a1);
_QWORD* EventManagerBase_Unknown2(_QWORD* result);

_QWORD* EventManagerBase_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = result + 194;
  v2 = result;
  *result = game_evt_EventManagerBase_vtable;
  v3 = -1536;
  v4 = fw_memory_g_heap_manager_ptr;
  do {
    v5 = *(v1 - 1);
    if (v5 != 0) {
      *v1 = v5;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v6 = 128;
      }
      else {
        v6 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6, v5);
    }
    v3 += 24;
    v1 -= 3;
  } while (v3 != 0);
  v7 = v2[1];
  if (v7 != 0) {
    v8 = *(_QWORD*)v4;
    v2[2] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v8 + v9, v7);
  }
  return result;
}

__int64 EventManagerBase_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = 192;
  *a1 = game_evt_EventManagerBase_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  do {
    v4 = a1[v1 + 1];
    if (v4 != 0) {
      a1[v1 + 2] = v4;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, v4);
    }
    v1 -= 3;
  } while (v1 != 0);
  v6 = a1[1];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[2] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, a1);
}

_QWORD* EventManagerBase_Unknown2(_QWORD* result)
{
  _QWORD** v1;
  _QWORD** v2;
  _QWORD* v3;
  __int64 v4;

  v1 = (_QWORD**)result[1];
  v2 = (_QWORD**)result[2];
  v3 = result;
  if (v1 != v2) {
    do {
      result = *v1;
      if (*v1 != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
      ++v1;
    } while (v1 != v2);
    v1 = (_QWORD**)v3[1];
  }
  v4 = v3[4];
  v3[2] = v1;
  v3[5] = v4;
  v3[8] = v3[7];
  v3[11] = v3[10];
  v3[14] = v3[13];
  v3[17] = v3[16];
  v3[20] = v3[19];
  v3[23] = v3[22];
  v3[26] = v3[25];
  v3[29] = v3[28];
  v3[32] = v3[31];
  v3[35] = v3[34];
  v3[38] = v3[37];
  v3[41] = v3[40];
  v3[44] = v3[43];
  v3[47] = v3[46];
  v3[50] = v3[49];
  v3[53] = v3[52];
  v3[56] = v3[55];
  v3[59] = v3[58];
  v3[62] = v3[61];
  v3[65] = v3[64];
  v3[68] = v3[67];
  v3[71] = v3[70];
  v3[74] = v3[73];
  v3[77] = v3[76];
  v3[80] = v3[79];
  v3[83] = v3[82];
  v3[86] = v3[85];
  v3[89] = v3[88];
  v3[92] = v3[91];
  v3[95] = v3[94];
  v3[98] = v3[97];
  v3[101] = v3[100];
  v3[104] = v3[103];
  v3[107] = v3[106];
  v3[110] = v3[109];
  v3[113] = v3[112];
  v3[116] = v3[115];
  v3[119] = v3[118];
  v3[122] = v3[121];
  v3[125] = v3[124];
  v3[128] = v3[127];
  v3[131] = v3[130];
  v3[134] = v3[133];
  v3[137] = v3[136];
  v3[140] = v3[139];
  v3[143] = v3[142];
  v3[146] = v3[145];
  v3[149] = v3[148];
  v3[152] = v3[151];
  v3[155] = v3[154];
  v3[158] = v3[157];
  v3[161] = v3[160];
  v3[164] = v3[163];
  v3[167] = v3[166];
  v3[170] = v3[169];
  v3[173] = v3[172];
  v3[176] = v3[175];
  v3[179] = v3[178];
  v3[182] = v3[181];
  v3[185] = v3[184];
  v3[188] = v3[187];
  v3[191] = v3[190];
  v3[194] = v3[193];
  return result;
}

#pragma GCC visibility pop
