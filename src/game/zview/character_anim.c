#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_zview_CharacterAnim_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* CharacterAnim_Destructor(_QWORD* result);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212ed90;
extern int* GameData_212ed88;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_d1d6c0(void);
void __attribute__((noreturn)) GameRoutine_d1d6e0(void);
__int64* CharacterAnim_d1d300(__int64* result, __int64* a2);
_QWORD* CharacterAnim_d1d480(__int64** a1, _QWORD* a2, _QWORD* a3);
__int64 game_zview_CharacterAnim_CommitReduceFlag_lambda0_Invoke(__int64 result,
                                                                 __int64 a2);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
extern _UNKNOWN GameData_220f868;
extern __int64 (*GameData_1fdad60[])();
extern int GameData_220f860;
_QWORD* game_zview_CharacterAnim_CommitReduceFlag(_QWORD* result);

_QWORD* CharacterAnim_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  _BYTE* v3;
  _BYTE* v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  _BYTE* v9;
  bool v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v1 = result[22];
  v2 = result;
  *result = game_zview_CharacterAnim_vtable;
  if (v1 != 0 && (*(_BYTE*)(v1 + 16) & 1) == 0) {
    *(_BYTE*)(v1 + 16) = 1;
    *(_BYTE*)(v1 + 17) &= ~2u;
    *(_BYTE*)(v1 + 18) &= ~2u;
    *(_BYTE*)(v1 + 19) &= ~2u;
    *(_BYTE*)(v1 + 20) &= ~2u;
    v3 = *(_BYTE**)(v1 + 8);
    v3[632] = 0;
    v3[664] = 0;
    v3[696] = 0;
    v3[728] = 0;
    result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v1 + 64LL))(v1);
    v4 = *(_BYTE**)(v1 + 8);
    v5 = v4[300] == 3 && v4[301] == 3;
    if (v5 || v4[302] == 1) {
      result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v1 + 72LL))(v1);
    }
  }
  v6 = v2[33];
  if (v6 != 0 && (*(_BYTE*)(v6 + 16) & 1) == 0) {
    v7 = v2[33];
    *(_BYTE*)(v6 + 16) = 1;
    *(_BYTE*)(v6 + 17) &= ~2u;
    *(_BYTE*)(v6 + 18) &= ~2u;
    *(_BYTE*)(v6 + 19) &= ~2u;
    *(_BYTE*)(v6 + 20) &= ~2u;
    v8 = *(_BYTE**)(v6 + 8);
    v8[632] = 0;
    v8[664] = 0;
    v8[696] = 0;
    v8[728] = 0;
    result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 64LL))(v7);
    v9 = *(_BYTE**)(v6 + 8);
    v10 = v9[300] == 3 && v9[301] == 3;
    if (v10 || v9[302] == 1) {
      result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 72LL))(v6);
    }
  }
  v11 = v2[34];
  v12 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v11 != 0) {
    v13 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v2[35] = v11;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v13 + v14, v11);
  }
  v15 = v2[28];
  if (v15 != 0) {
    v16 = *v12;
    v2[29] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  v18 = v2[25];
  if (v18 != 0) {
    v19 = *v12;
    v2[26] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v19 + v20, v18);
  }
  v21 = v2[17];
  if (v21 != 0) {
    v22 = *v12;
    v2[18] = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v22 + v23, v21);
  }
  v24 = v2[14];
  if (v24 != 0) {
    v25 = *v12;
    v2[15] = v24;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v25 + v26, v24);
  }
  return result;
}

_QWORD* game_zview_CharacterAnim_CommitReduceFlag(_QWORD* result)
{

#pragma clang fp contract(off)
  _QWORD* v1;
  _QWORD* v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 i;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  signed int v14;
  int v15;

  v15 = 1;
  v1 = (_QWORD*)result[1];
  v2 = (_QWORD*)v1[29];
  if ((v1[33] & 0x140000002LL) != 0) {
    v3 = 8;
  }
  else {
    v3 = 1;
  }
  v14 = vcvts_n_s32_f32(**(float**)(v1[2] + 144LL), 8u);
  if (v2 == nullptr) {
    return result;
  }
  v12_.v12[0] = GameData_1fdad60;
  v12_.v12[1] = &v15;
  v12_.v13 = v12_.v12;
  v12_.v12[2] = &v14;
  CharacterBuilder_1083e90(v2, (__int64)v12_.v12);
  result = v12_.v13;
  if (v12_.v13 == v12_.v12) {
    v4 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_10;
    }
    v4 = 40;
  }
  result =
      (_QWORD*)(*(__int64 (**)(__int64))(*v12_.v13 + v4))((__int64)v12_.v13);
LABEL_10:
  v5 = v2[52];
  if (v5 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f868,
                              memory_order_acquire) &
         1) == 0) {
      result = (_QWORD*)__cxa_guard_acquire(&GameData_220f868);
      if ((_DWORD)result != 0) {
        GameData_220f860 = wld_Crc32_alt1(0, "AnimLayerCtrlModule", 0x13u);
        result = (_QWORD*)__cxa_guard_release(&GameData_220f868);
      }
    }
    v6 = *(_QWORD*)(v5 + 512);
    for (i = v6; i != *(_QWORD*)(v5 + 504); i -= 16) {
      v8 = *(_DWORD*)(i - 16);
      v6 -= 16;
      if (v8 == GameData_220f860) {
        if (*(_QWORD*)(v5 + 512) != v6) {
          v9 = *(_QWORD*)(v6 + 8);
          if (v9 != 0) {
            v10 = *(_QWORD*)(v9 + 24);
            v11 = v14 % v3;
            *(_DWORD*)(v10 + 240) = v3;
            *(_DWORD*)(v10 + 244) = v11;
          }
        }
        return result;
      }
    }
  }
  return result;
}

__int64* CharacterAnim_d1d300(__int64* result, __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  v3 = result[1];
  v2 = result[2];
  v4 = result;
  if (v3 >= v2) {
    v7 = *result;
    v8 = v3 - *result;
    v9 = 1 - 0x5555555555555555LL * (v8 >> 2);
    if (v9 > 0x1555555555555555LL) {
      GameRoutine_d1d6e0();
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v2 - v7) >> 2);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0xAAAAAAAAAAAAAAALL) {
      v12 = 0x1555555555555555LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x1555555555555555LL) {
        GameRoutine_60a210(result);
      }
      v13 = a2;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 12 * v12, 16, 0);
      a2 = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    v16 = v14 + 12 * v12;
    v6 = v14 + v8 + 12;
    *(_QWORD*)v15 = *a2;
    *(_DWORD*)(v15 + 8) = *((_DWORD*)a2 + 2);
    result = (__int64*)memcpy(v14, v7, v8);
    *v4 = v14;
    v4[1] = v6;
    v4[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    v5 = *a2;
    v6 = v3 + 12;
    *(_DWORD*)(v3 + 8) = *((_DWORD*)a2 + 2);
    *(_QWORD*)v3 = v5;
  }
  v4[1] = v6;
  return result;
}

_QWORD* CharacterAnim_d1d480(__int64** a1, _QWORD* a2, _QWORD* a3)
{
  __int64* v3;
  __int64* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  v3 = *a1;
  v4 = a1[1];
  v5 = (char*)v4 - (char*)*a1;
  v6 = 1 - 0x3333333333333333LL * (v5 >> 4);
  if (v6 > 0x333333333333333LL) {
    GameRoutine_d1d6c0();
  }
  v9 = fw_memory_g_heap_manager_ptr;
  if (0x999999999999999ALL * (((char*)a1[2] - (char*)v3) >> 4) > v6) {
    v6 = 0x999999999999999ALL * (((char*)a1[2] - (char*)v3) >> 4);
  }
  if (0xCCCCCCCCCCCCCCCDLL * (((char*)a1[2] - (char*)v3) >> 4) >=
      0x199999999999999LL) {
    v10 = 0x333333333333333LL;
  }
  else {
    v10 = v6;
  }
  if (v10 != 0) {
    if (v10 > 0x333333333333333LL) {
      GameRoutine_60a210(a1);
    }
    v11 = a3;
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         80 * v10, 16, 0);
  }
  else {
    v11 = a3;
    v12 = 0;
  }
  v13 = (_QWORD*)(v12 + v5);
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(v12 + v5, a2[2], a2[1]);
    v3 = *a1;
    v4 = a1[1];
    v5 = (char*)v4 - (char*)*a1;
  }
  else {
    v14 = a2[1];
    *v13 = *a2;
    v13[1] = v14;
    v13[2] = a2[2];
  }
  v15 = a2[6];
  v16 = v12 + 80 * v10;
  v13[5] = a2[5];
  v13[6] = v15;
  v17 = a2[8];
  v13[7] = a2[7];
  v13[8] = v17;
  v18 = a2[4];
  v13[3] = a2[3];
  v13[4] = v18;
  v13[9] = *v11;
  if (v3 != v4) {
    v19 = v3;
    v20 = (_QWORD*)((char*)v13 - v5);
    do {
      v21 = *v19;
      v22 = v19[2];
      v20[1] = v19[1];
      v20[2] = v22;
      *v20 = v21;
      v19[1] = 0;
      v19[2] = 0;
      *v19 = 0;
      v23 = v19[8];
      v25 = v19[5];
      v24 = v19[6];
      v20[7] = v19[7];
      v20[8] = v23;
      v20[5] = v25;
      v20[6] = v24;
      v26 = v19[4];
      v20[3] = v19[3];
      v20[4] = v26;
      v27 = v19[9];
      v19 += 10;
      v20[9] = v27;
      v20 += 10;
    } while (v19 != v4);
    do {
      if ((*(_BYTE*)v3 & 1) != 0) {
        v28 = v3[2];
        if (v28 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v29 = 128;
          }
          else {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v29, v28);
        }
      }
      v3 += 10;
    } while (v3 != v4);
    v3 = *a1;
  }
  *a1 = (_QWORD*)((char*)v13 - v5);
  a1[1] = v13 + 10;
  a1[2] = (__int64*)v16;
  if (v3 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v30, v3);
  }
  return v13 + 10;
}

__int64 game_zview_CharacterAnim_CommitReduceFlag_lambda0_Invoke(__int64 result,
                                                                 __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 i;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                                  memory_order_acquire);
  v3 = GameData_212ed88;
  if ((explicit & 1) == 0) {
    v14 = a2;
    v15 = result;
    v13 = __cxa_guard_acquire(GameData_212ed90);
    v3 = GameData_212ed88;
    a2 = v14;
    result = v15;
    if (v13 != 0) {
      *GameData_212ed88 = wld_Crc32(0, "AnimLayerCtrlModule", 19);
      __cxa_guard_release(GameData_212ed90);
      v3 = GameData_212ed88;
      a2 = v14;
      result = v15;
    }
  }
  v4 = *v3;
  v5 = *(_QWORD*)(a2 + 512);
  for (i = v5; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v7 = *(_DWORD*)(i - 16);
    v5 -= 16;
    if (v7 == v4) {
      if (*(_QWORD*)(a2 + 512) != v5) {
        v8 = *(_QWORD*)(v5 + 8);
        if (v8 != 0) {
          v9 = *(_QWORD*)(v8 + 24);
          v10 = **(_DWORD**)(result + 8);
          v11 = **(_DWORD**)(result + 16);
          *(_DWORD*)(v9 + 240) = v10;
          if (v10 < 1) {
            v12 = 0;
          }
          else {
            v12 = v11 % v10;
          }
          *(_DWORD*)(v9 + 244) = v12;
        }
      }
      return result;
    }
  }
  return result;
}

#pragma GCC visibility pop
