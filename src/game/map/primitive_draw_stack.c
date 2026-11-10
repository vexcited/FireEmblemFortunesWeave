#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_f533a0_alt1(_QWORD* result, _QWORD*, unsigned __int64,
                                __int64,
                                signed __int64) __asm__("GameRoutine_f533a0");
__int64 GameRoutine_1994460(_QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_f533a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 PrimitiveDrawManager_19935e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 fw_world_JobContext_Drain(_QWORD);
__int64 fw_world_JobContext_Wait(_QWORD, _QWORD);
__int64 fw_world_JobQueue_Submit(_QWORD, _QWORD);
__int64 fw_world_SwapCallables(_QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_os_ClearLightEvent(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ff5a40[])();
extern __int64 (*GameData_1ff5a70[])();
extern __int64 (*game_map_PrimitiveDrawStack_vtable[])();
extern __int64 GameData_212c060;
extern __int64 GameData_212e368[4];
extern __int64 GameData_21323e8[4];
extern __int64 GameData_21cd110;
extern __int64 GameData_21cd120;
extern __int64 GameData_221fdd0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_map_MapColorPalette_g_texture_archives;
extern __int64* GameData_212f878;
extern int GameData_21cd118;
extern int GameData_221fde0;
extern int GameData_22230f4;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_f52800(void);
void __attribute__((noreturn)) GameRoutine_f52820(void);
void PrimitiveDrawStack_Destructor(_QWORD* a1);
void PrimitiveDrawStack_f51430(__int64 a1, __int64 a2);
__int64 game_map_PrimitiveDrawStack_EachDrawElementsMultiThread(_QWORD* a1,
                                                                __int64 a2);
__int64* PrimitiveDrawStack_f51fa0(__int64* result, __int64 a2, __int64 a3);
__int64 PrimitiveDrawStack_f52360(__int64 result, _QWORD* a2, unsigned int a3,
                                  char a4);
__int64 PrimitiveDrawStack_f525a0(__int64* a1, __int64 a2);
__int64 game_map_PrimitiveDrawStack_EachDrawElementsMultiThread_lambda0_Invoke(
    __int64 result, __int64 a2, atomic_uint* a3);
void game_map_PrimitiveDrawStack_DrawOptimize_lambda1_Invoke(__int64 a1,
                                                             __int64 a2,
                                                             atomic_uint* a3);
__int64* PrimitiveDrawStack_f536e0(__int64* result, __int64* a2,
                                   unsigned __int64 a3, __int64* a4);
__int64 game_map_PrimitiveDrawStack_DrawReserveVertex_lambda0_Invoke(
    __int64 result, _QWORD* a2, unsigned __int8* a3);
__int64 game_map_PrimitiveDrawStack_DrawReserveVertex_lambda1_Invoke(
    __int64 result, _QWORD* a2, char* a3);

void PrimitiveDrawStack_Destructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  bool v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  *a1 = game_map_PrimitiveDrawStack_vtable;
  v2 = GameData_212f878;
  v3 = *GameData_212f878;
  if (*GameData_212f878 != 0) {
    v4 = GameData_221fde0-- <= 1;
    if (v4) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3);
      if (*v2 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)*v2 + 8LL))(*v2);
      }
      *v2 = 0;
    }
  }
  if (GameData_221fdd0 != 0) {
    v4 = GameData_22230f4-- <= 1;
    if (v4) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_221fdd0 + 24LL))(
          (__int64)GameData_221fdd0);
      if (GameData_221fdd0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_221fdd0 + 8LL))(
            GameData_221fdd0);
      }
      GameData_221fdd0 = 0;
    }
  }
  v5 = a1[8];
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != 0) {
    v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[9] = v5;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = a1[5];
  if (v9 != 0) {
    v10 = *(_QWORD*)v6;
    a1[6] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11);
  }
  v12 = a1[2];
  if (v12 != 0) {
    v13 = a1[3];
    if (v12 == v13) {
      goto LABEL_32;
    }
    v14 = a1[3];
    do {
      v15 = *(_BYTE*)(v14 - 112);
      v14 -= 112;
      if ((v15 & 1) != 0 && *(_QWORD*)(v13 - 96) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v16);
      }
      v13 = v14;
    } while (v14 != v12);
    v17 = a1[2];
    a1[3] = v12;
    if (v17 != 0) {
    LABEL_32:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v18);
    }
  }
  *a1 = GameData_1ff5a40;
  if ((_QWORD*)GameData_21cd110 == a1) {
    GameData_21cd110 = 0;
    GameData_21cd118 = 0;
  }
}

void PrimitiveDrawStack_f51430(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BYTE v17[19];

  if (*(_QWORD*)(a2 + 128) != *(_QWORD*)(a2 + 120)) {
    v2 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)&v17[11] = 0;
    *(_QWORD*)&v17[3] = 0;
    v3 = (_QWORD*)(a1 + 24LL * *(int*)(*(_QWORD*)(a1 + 16) + 112 * v2 + 64));
    v4 = v3[6];
    v5 = v3[7];
    if (v4 >= v5) {
      v7 = v3[5];
      v8 = v4 - v7;
      v9 = 1 - 0x5555555555555555LL * ((__int64)(v4 - v7) >> 4);
      if (v9 > 0x555555555555555LL) {
        GameRoutine_f52820();
      }
      v10 = fw_memory_g_heap_manager_ptr;
      v11 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v5 - v7) >> 4);
      if (2 * v11 > v9) {
        v9 = 2 * v11;
      }
      if (v11 >= 0x2AAAAAAAAAAAAAALL) {
        v12 = 0x555555555555555LL;
      }
      else {
        v12 = v9;
      }
      if (v12 != 0) {
        if (v12 > 0x555555555555555LL) {
          GameRoutine_60a210(a1);
        }
        v13 = a2;
        v14 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v12, 16, 0);
        a2 = v13;
      }
      else {
        v14 = 0;
      }
      v15 = v14 + v8;
      *(_QWORD*)v15 = a2;
      *(_QWORD*)(v15 + 8) = v2;
      *(_QWORD*)(v15 + 16) = 0;
      *(_BYTE*)(v15 + 24) = 0;
      v6 = v14 + v8 + 48;
      *(_QWORD*)(v15 + 25) = *(_QWORD*)v17;
      *(_QWORD*)(v15 + 33) = *(_QWORD*)&v17[8];
      *(_DWORD*)(v15 + 40) = 0;
      memcpy(v14, v7, v8);
      v3[5] = v14;
      v3[6] = v6;
      v3[7] = v14 + 48 * v12;
      if (v7 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v16);
      }
    }
    else {
      *(_QWORD*)v4 = a2;
      *(_QWORD*)(v4 + 8) = v2;
      v6 = v4 + 48;
      *(_QWORD*)(v4 + 16) = 0;
      *(_BYTE*)(v4 + 24) = 0;
      *(_OWORD*)(v4 + 25) = *(_OWORD*)v17;
      *(_DWORD*)(v4 + 40) = 0;
    }
    v3[6] = v6;
  }
}

__int64 game_map_PrimitiveDrawStack_EachDrawElementsMultiThread(_QWORD* a1,
                                                                __int64 a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64* v14;
  __int64* v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  int v24;
  int v25;
  _BYTE v26[32];
  _BYTE* v27;

  v4 = (_QWORD*)GameData_21323e8[0];
  v6 = a1[8];
  v5 = a1[9];
  v7 = *(_QWORD*)GameData_21323e8[0];
  v25 = ((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
          *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
         3) +
        1;
  v24 = -1431655765 * ((a1[6] - a1[5]) >> 4) -
        1431655765 * ((unsigned __int64)(v5 - v6) >> 4);
  fw_world_JobContext_Drain(v7);
  v8 = *v4;
  v9 = *v4 + 32LL;
  do {
    v10 = *(_DWORD*)(v8 + 8);
    v11 = (v10 + 1) & 0xFFFFFF;
    if (v10 + 1 <= 0) {
      v11 = -(-(v10 + 1) & 0xFFFFFF);
    }
    *(_DWORD*)(v8 + 8) = v11;
    v12 = atomic_load((unsigned __int64*)(v9 + 32LL * (v10 & 0x3F)));
    if (v12 != 0) {
      v10 = -1;
    }
  } while (v10 < 0);
  v13 = v10 | 0xC0000000;
  v14 = (unsigned __int64*)(v9 + 32LL * (v10 & 0x3F));
  nn_os_ClearLightEvent(v14 + 1);
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  v16 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v16[2] = 0;
  v17 = v16;
  v18 = GameData_212e368[0];
  v16[8] = 0;
  *v16 = v18 + 16;
  v16[1] = 0;
  v19 = v14[3];
  v14[3] = (unsigned __int64)v17;
  if (v19 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v19 + 8LL))(v19);
  }
  atomic_store(v13, v14);
  v17[1] = v8;
  v20 = *v15;
  *((_DWORD*)v17 + 4) = v13;
  v21 = (_QWORD*)fw_memory_HeapManager_Allocate(v20, 40, 16, 0);
  v21[4] = a2;
  v27 = v21;
  *v21 = GameData_1ff5a70;
  v21[1] = &v24;
  v21[2] = &v25;
  v21[3] = a1;
  fw_world_SwapCallables(v26, v17 + 4);
  if (v27 == v26) {
    v22 = 32;
    goto LABEL_13;
  }
  if (v27 != nullptr) {
    v22 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*(_QWORD*)v27 + v22))((__int64)v27);
  }
  fw_world_JobQueue_Submit(*(_QWORD*)(v8 + 16), v13);
  return fw_world_JobContext_Wait(*v4, v13);
}

__int64* PrimitiveDrawStack_f51fa0(__int64* result, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64* v6;
  __int64 v7;
  int v8;
  unsigned __int64 v9;
  int v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  int v14;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24[4];
  char v25[4];

  v4 = *result;
  v3 = result[1];
  if (v3 != *result) {
    v6 = result;
    v7 = 0;
    v8 = 0;
    v9 = 0xAAAAAAAAAAAAAAABLL * ((v3 - *result) >> 4);
    do {
      v10 = v8;
      v11 = v8++;
      v12 = v9 > v11;
      v13 = v9 - v11;
      if (v12) {
        v14 = v10;
        v15 = (__int64*)(v4 + 48LL * (int)v11 + 16);
        while (1) {
          v16 = *v15;
          v15 += 6;
          if (v16 != *(_QWORD*)(v4 + 48 * v7 + 16)) {
            break;
          }
          ++v14;
          if (--v13 == 0) {
            goto LABEL_11;
          }
        }
        v8 = v14;
      }
    LABEL_11:
      v7 = v8;
      if (v10 < v8) {
        v17 = v8 - v11;
        v18 = 48 * v11;
        v19 = v17;
        v20 = 48 * v11;
        do {
          v21 = *v6;
          v22 = *(_QWORD*)(a2 + 32);
          v24[0] = 1;
          if (v22 == 0) {
          LABEL_19:
            GameRoutine_60a310(v22, a2, a3);
          }
          (*(void (**)(__int64, __int64, char*))(*(_QWORD*)v22 + 48LL))(
              v22, v21 + v20, v24);
          --v19;
          v20 += 48;
        } while (v19 != 0);
        do {
          v23 = *v6;
          v22 = *(_QWORD*)(a2 + 32);
          v25[0] = 0;
          if (v22 == 0) {
            goto LABEL_19;
          }
          result = (__int64*)(*(__int64 (**)(__int64, __int64, char*))(
              *(_QWORD*)v22 + 48LL))(v22, v23 + v18, v25);
          --v17;
          v18 += 48;
        } while (v17 != 0);
        v4 = *v6;
        v3 = v6[1];
      }
      v9 = 0xAAAAAAAAAAAAAAABLL * ((v3 - v4) >> 4);
    } while (v9 > v8);
  }
  return result;
}

__int64 PrimitiveDrawStack_f52360(__int64 result, _QWORD* a2, unsigned int a3,
                                  char a4)
{
  __int64 v4;
  unsigned __int8* v7;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  int v15;
  float v16;
  __int64 v17;
  bool v18;
  bool v19;
  bool v20;
  bool v21;
  int v22;
  __int64**** v23;
  __int64*** v24;
  __int64** v25;
  float* v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;

  v4 = *a2;
  v7 = (unsigned __int8*)(*(_QWORD*)(result + 16) + 112LL * a2[1]);
  v8 = *v7;
  v9 = (v8 & 1) == 0;
  v10 = v8 >> 1;
  if (v9) {
    v11 = v7 + 1;
  }
  else {
    v11 = *((unsigned __int8**)v7 + 2);
  }
  if (v9) {
    v12 = v10;
  }
  else {
    v12 = *((_QWORD*)v7 + 1);
  }
  if (*(_BYTE*)(v4 + 236) == 1) {
    if (*(_BYTE*)(*(_QWORD*)(GameData_21cd120 + 8) + 9LL) != 0) {
      v13 = 2;
    }
    else {
      v13 = 1;
    }
  }
  else {
    v13 = *(_DWORD*)(v4 + 240);
  }
  v14 = (a4 & 1) == 0;
  v15 = v7[97];
  v16 = 0.0;
  if (v7[104] == 1) {
    v16 = *((float*)v7 + 25);
  }
  if (*(_BYTE*)(result + 120) != 1) {
    *(_QWORD*)(result + 88) = v11;
    *(_QWORD*)(result + 96) = v12;
    *(_DWORD*)(result + 104) = v14;
    *(_DWORD*)(result + 108) = v13;
    *(_BYTE*)(result + 112) = v15;
    *(float*)(result + 116) = v16;
    *(_BYTE*)(result + 120) = 1;
  LABEL_31:
    v22 = *(_DWORD*)(result + 128);
    *(_DWORD*)(result + 128) = v22 + 1;
    if (v22 <= 1534) {
      v23 = *(__int64*****)PrimitiveDrawManager_19935e0(
          **(_QWORD**)game_map_MapColorPalette_g_texture_archives, v11, v12, 0);
      *((_DWORD*)v23 + 4324) = v14;
      v24 = *v23;
      *((_BYTE*)v24 + 17394) = v15;
      v25 = *v24;
      *((_DWORD*)v25 + 4327) = v13;
      v26 = (float*)*v25;
      v27 = *(_QWORD*)v26;
      v26[4340] = v16;
      result = GameRoutine_1994460(v27);
    }
    goto LABEL_33;
  }
  if (*(_QWORD*)(result + 96) != v12 ||
      ((v17 = result,
        v9 = (unsigned int)memcmp(*(_QWORD*)(result + 88), v11, v12) == 0,
        result = v17, v9)
           ? (v18 = *(_DWORD*)(v17 + 104) == v14)
           : (v18 = false),
       v18 ? (v19 = *(_DWORD*)(v17 + 108) == v13) : (v19 = false),
       v19 ? (v20 = *(unsigned __int8*)(v17 + 112) == v15) : (v20 = false),
       v20 ? (v21 = *(float*)(v17 + 116) == v16) : (v21 = false), !v21)) {
    *(_QWORD*)(result + 88) = v11;
    *(_QWORD*)(result + 96) = v12;
    *(_DWORD*)(result + 104) = v14;
    *(_DWORD*)(result + 108) = v13;
    *(_BYTE*)(result + 112) = v15;
    *(float*)(result + 116) = v16;
    goto LABEL_31;
  }
LABEL_33:
  v28 = (*(_QWORD*)(*a2 + 104LL) - *(_QWORD*)(*a2 + 96LL)) >> 6;
  v29 = *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                   19200LL);
  v30 = *(_QWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                   18736LL) +
        1440LL * *(int*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         17280LL);
  *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives + 19200LL) =
      v29 + v28;
  v31 = v30 + 4LL * *(int*)(v30 + 256);
  *(_DWORD*)(v31 + 260) += v28;
  *((_DWORD*)a2 + a3 + 7) = v29 + 1;
  return result;
}

__int64 PrimitiveDrawStack_f525a0(__int64* a1, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  v2 = (__int64*)*a1;
  v3 = (__int64*)a1[1];
  v4 = (__int64)v3 - *a1;
  v5 = 0x6DB6DB6DB6DB6DB7LL * (v4 >> 4) + 1;
  if (v5 > 0x249249249249249LL) {
    GameRoutine_f52800();
  }
  v8 = fw_memory_g_heap_manager_ptr;
  if (0xDB6DB6DB6DB6DB6ELL * ((a1[2] - (__int64)v2) >> 4) > v5) {
    v5 = 0xDB6DB6DB6DB6DB6ELL * ((a1[2] - (__int64)v2) >> 4);
  }
  if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((a1[2] - (__int64)v2) >> 4)) >=
      0x124924924924924LL) {
    v9 = 0x249249249249249LL;
  }
  else {
    v9 = v5;
  }
  if (v9 != 0) {
    if (v9 > 0x249249249249249LL) {
      GameRoutine_60a210(a1);
    }
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         112 * v9, 16, 0);
  }
  else {
    v10 = 0;
  }
  v11 = v10 + v4;
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(v10 + v4, *(_QWORD*)(a2 + 16),
                                  *(_QWORD*)(a2 + 8));
    v2 = (__int64*)*a1;
    v3 = (__int64*)a1[1];
    v4 = (__int64)v3 - *a1;
  }
  else {
    v12 = *(_QWORD*)(a2 + 8);
    *(_QWORD*)v11 = *(_QWORD*)a2;
    *(_QWORD*)(v11 + 8) = v12;
    *(_QWORD*)(v11 + 16) = *(_QWORD*)(a2 + 16);
  }
  v13 = *(_QWORD*)(a2 + 56);
  v14 = *(_QWORD*)(a2 + 64);
  v15 = v10 + 112 * v9;
  v16 = v11 - v4;
  *(_QWORD*)(v11 + 48) = *(_QWORD*)(a2 + 48);
  *(_QWORD*)(v11 + 56) = v13;
  v17 = *(_DWORD*)(a2 + 72);
  *(_QWORD*)(v11 + 64) = v14;
  *(_DWORD*)(v11 + 72) = v17;
  v18 = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(v11 + 32) = *(_QWORD*)(a2 + 32);
  *(_QWORD*)(v11 + 40) = v18;
  v19 = *(_QWORD*)(a2 + 88);
  *(_QWORD*)(v11 + 80) = *(_QWORD*)(a2 + 80);
  *(_QWORD*)(v11 + 88) = v19;
  v20 = *(_QWORD*)(a2 + 96);
  *(_BYTE*)(v11 + 104) = *(_BYTE*)(a2 + 104);
  *(_QWORD*)(v11 + 96) = v20;
  if (v2 != v3) {
    v21 = v2;
    v22 = v16;
    do {
      v23 = *v21;
      v24 = v21[2];
      *(_QWORD*)(v22 + 8) = v21[1];
      *(_QWORD*)(v22 + 16) = v24;
      *(_QWORD*)v22 = v23;
      v21[1] = 0;
      v21[2] = 0;
      *v21 = 0;
      v25 = v21[5];
      *(_QWORD*)(v22 + 32) = v21[4];
      v27 = v21[6];
      v26 = v21[7];
      v28 = v21[8];
      *(_DWORD*)(v22 + 72) = *((_DWORD*)v21 + 18);
      *(_QWORD*)(v22 + 40) = v25;
      *(_QWORD*)(v22 + 48) = v27;
      *(_QWORD*)(v22 + 56) = v26;
      *(_QWORD*)(v22 + 64) = v28;
      v29 = v21[11];
      *(_QWORD*)(v22 + 80) = v21[10];
      *(_QWORD*)(v22 + 88) = v29;
      v30 = v21[12];
      LOBYTE(v29) = *((_BYTE*)v21 + 104);
      v21 += 14;
      *(_BYTE*)(v22 + 104) = v29;
      *(_QWORD*)(v22 + 96) = v30;
      v22 += 112;
    } while (v21 != v3);
    do {
      if ((*(_BYTE*)v2 & 1) != 0 && v2[2] != 0) {
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v31);
      }
      v2 += 14;
    } while (v2 != v3);
    v2 = (__int64*)*a1;
  }
  *a1 = v16;
  a1[1] = v11 + 112;
  a1[2] = v15;
  if (v2 != nullptr) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v32);
  }
  return v11 + 112;
}

__int64 game_map_PrimitiveDrawStack_EachDrawElementsMultiThread_lambda0_Invoke(
    __int64 result, __int64 a2, atomic_uint* a3)
{
  _QWORD* v3;
  __int64 v5;
  unsigned int v6;
  signed int add;
  __int64 v8;
  __int64 v9;
  signed int v10;
  signed int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v3 = *(_QWORD**)(result + 24);
  v5 = result;
  if (**(_DWORD**)(result + 8) / (2 * **(_DWORD**)(result + 16)) <= 1) {
    v6 = 1;
  }
  else {
    v6 = **(_DWORD**)(result + 8) / (2 * **(_DWORD**)(result + 16));
  }
  add = atomic_fetch_add(a3, v6);
  v8 = v3[5];
  v9 = v3[6];
  if (**(_DWORD**)(result + 8) >= (signed int)(add + v6)) {
    v10 = add + v6;
  }
  else {
    v10 = **(_DWORD**)(result + 8);
  }
  if (v8 == v9) {
    v11 = 0;
  }
  else {
    v11 = 0;
    do {
      if (add <= v11 && v11 < v10) {
        v12 = *(_QWORD*)(*(_QWORD*)(v5 + 32) + 32LL);
        if (v12 == 0) {
        LABEL_37:
          GameRoutine_60a310(v12, a2, a3);
        }
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v12 + 48LL))(v12, v8);
      }
      if (++v11 >= v10) {
        if (v6 >> 1 <= 1) {
          v6 = 1;
        }
        else {
          v6 >>= 1;
        }
        add = atomic_fetch_add(a3, v6);
        if (**(_DWORD**)(v5 + 8) >= (signed int)(add + v6)) {
          v10 = add + v6;
        }
        else {
          v10 = **(_DWORD**)(v5 + 8);
        }
      }
      v8 += 48;
    } while (v8 != v9);
  }
  v13 = v3[8];
  v14 = v3[9];
  while (v13 != v14) {
    if (add <= v11 && v11 < v10) {
      v12 = *(_QWORD*)(*(_QWORD*)(v5 + 32) + 32LL);
      if (v12 == 0) {
        goto LABEL_37;
      }
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v12 + 48LL))(v12, v13);
    }
    if (++v11 >= v10) {
      if (v6 >> 1 <= 1) {
        v6 = 1;
      }
      else {
        v6 >>= 1;
      }
      add = atomic_fetch_add(a3, v6);
      if (**(_DWORD**)(v5 + 8) >= (signed int)(add + v6)) {
        v10 = add + v6;
      }
      else {
        v10 = **(_DWORD**)(v5 + 8);
      }
    }
    v13 += 48;
  }
  return result;
}

void game_map_PrimitiveDrawStack_DrawOptimize_lambda1_Invoke(__int64 a1,
                                                             __int64 a2,
                                                             atomic_uint* a3)
{
  _QWORD* v3;
  unsigned int add;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;

  v3 = *(_QWORD**)(a1 + 8);
  add = atomic_fetch_add(a3, 1u);
  if (add != 0) {
    if (add != 1) {
      return;
    }
    goto LABEL_29;
  }
  v7 = v3[5];
  v6 = v3[6];
  v8 = v7;
  if (v7 != v6) {
    v8 = v3[5];
    while ((*(_BYTE*)(v8 + 24) & 1) == 0) {
      v8 += 48;
      if (v8 == v6) {
        goto LABEL_18;
      }
    }
  }
  if (v8 != v6) {
    v9 = v8 + 48;
    if (v8 + 48 != v6) {
      do {
        if ((*(_BYTE*)(v9 + 24) & 1) == 0) {
          v10 = *(_QWORD*)(v9 + 8);
          *(_QWORD*)v8 = *(_QWORD*)v9;
          *(_QWORD*)(v8 + 8) = v10;
          v11 = *(_QWORD*)(v9 + 16);
          v12 = *(_QWORD*)(v9 + 24);
          v13 = *(_QWORD*)(v9 + 32);
          *(_DWORD*)(v8 + 40) = *(_DWORD*)(v9 + 40);
          *(_QWORD*)(v8 + 24) = v12;
          *(_QWORD*)(v8 + 32) = v13;
          *(_QWORD*)(v8 + 16) = v11;
          v8 += 48;
        }
        v9 += 48;
      } while (v9 != v6);
      v7 = v3[5];
      v6 = v3[6];
    }
  }
  if (v8 != v6) {
    v6 = v8;
    v3[6] = v8;
  }
LABEL_18:
  if (v6 - v7 < 6145) {
    v17 = 0;
  LABEL_24:
    GameRoutine_f533a0(v7, v6, 0xAAAAAAAAAAAAAAABLL * ((v6 - v7) >> 4), 0, v17);
  }
  else {
    v14 = 0xAAAAAAAAAAAAAAABLL * ((v6 - v7) >> 4);
    v15 = GameData_212c060;
    while (1) {
      v16 = GameRoutine_1a09d20(48 * v14, v15);
      if (v16 != 0) {
        break;
      }
      v17 = v14 >> 1;
      v18 = v14 > 1;
      v14 >>= 1;
      if (!v18) {
        goto LABEL_24;
      }
    }
    GameRoutine_f533a0(v7, v6, 0xAAAAAAAAAAAAAAABLL * ((v6 - v7) >> 4), v16,
                       v14);
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
  if (atomic_fetch_add(a3, 1u) == 1) {
  LABEL_29:
    v21 = v3[8];
    v20 = v3[9];
    v22 = v21;
    if (v21 != v20) {
      v22 = v3[8];
      while ((*(_BYTE*)(v22 + 24) & 1) == 0) {
        v22 += 48;
        if (v22 == v20) {
          goto LABEL_43;
        }
      }
    }
    if (v22 != v20) {
      v23 = v22 + 48;
      if (v22 + 48 != v20) {
        do {
          if ((*(_BYTE*)(v23 + 24) & 1) == 0) {
            v24 = *(_QWORD*)(v23 + 8);
            *(_QWORD*)v22 = *(_QWORD*)v23;
            *(_QWORD*)(v22 + 8) = v24;
            v25 = *(_QWORD*)(v23 + 16);
            v26 = *(_QWORD*)(v23 + 24);
            v27 = *(_QWORD*)(v23 + 32);
            *(_DWORD*)(v22 + 40) = *(_DWORD*)(v23 + 40);
            *(_QWORD*)(v22 + 24) = v26;
            *(_QWORD*)(v22 + 32) = v27;
            *(_QWORD*)(v22 + 16) = v25;
            v22 += 48;
          }
          v23 += 48;
        } while (v23 != v20);
        v21 = v3[8];
        v20 = v3[9];
      }
    }
    if (v22 != v20) {
      v20 = v22;
      v3[9] = v22;
    }
  LABEL_43:
    if (v20 - v21 < 6145) {
      v31 = 0;
    LABEL_49:
      GameRoutine_f533a0(v21, v20, 0xAAAAAAAAAAAAAAABLL * ((v20 - v21) >> 4), 0,
                         v31);
    }
    else {
      v28 = 0xAAAAAAAAAAAAAAABLL * ((v20 - v21) >> 4);
      v29 = GameData_212c060;
      while (1) {
        v30 = GameRoutine_1a09d20(48 * v28, v29);
        if (v30 != 0) {
          break;
        }
        v31 = v28 >> 1;
        v18 = v28 > 1;
        v28 >>= 1;
        if (!v18) {
          goto LABEL_49;
        }
      }
      GameRoutine_f533a0(v21, v20, 0xAAAAAAAAAAAAAAABLL * ((v20 - v21) >> 4),
                         v30, v28);
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v32);
    }
    atomic_fetch_add(a3, 1u);
  }
}

__int64* PrimitiveDrawStack_f536e0(__int64* result, __int64* a2,
                                   unsigned __int64 a3, __int64* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64* v51;
  __int64 v55;
  __int64* v56;
  __int64* v57;
  __int64* v58;
  __int64* v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;

  if (a3 != 0) {
    if (a3 == 2) {
      v8 = a2 - 6;
      if (*(a2 - 4) >= (unsigned __int64)result[2]) {
        v41 = result[1];
        *a4 = *result;
        a4[1] = v41;
        v42 = result[2];
        v43 = result[3];
        v44 = result[5];
        a4[4] = result[4];
        a4[5] = v44;
        a4[2] = v42;
        a4[3] = v43;
        v45 = *(a2 - 1);
        v47 = *(a2 - 4);
        v46 = *(a2 - 3);
        a4[10] = *(a2 - 2);
        a4[11] = v45;
        a4[8] = v47;
        a4[9] = v46;
        v49 = *v8;
        v48 = *(a2 - 5);
        a4[6] = v49;
        a4[7] = v48;
      }
      else {
        v9 = *(a2 - 5);
        *a4 = *v8;
        a4[1] = v9;
        v10 = *(a2 - 4);
        v11 = *(a2 - 3);
        v12 = *(a2 - 1);
        a4[4] = *(a2 - 2);
        a4[5] = v12;
        a4[2] = v10;
        a4[3] = v11;
        v13 = result[5];
        v15 = result[2];
        v14 = result[3];
        a4[10] = result[4];
        a4[11] = v13;
        a4[8] = v15;
        a4[9] = v14;
        v16 = result[1];
        a4[6] = *result;
        a4[7] = v16;
      }
    }
    else if (a3 == 1) {
      v4 = result[1];
      *a4 = *result;
      a4[1] = v4;
      v5 = result[2];
      v6 = result[3];
      v7 = result[5];
      a4[4] = result[4];
      a4[5] = v7;
      a4[2] = v5;
      a4[3] = v6;
    }
    else if ((__int64)a3 > 8) {
      v50 = a3 >> 1;
      v51 = result;
      v55 = 3 * (a3 >> 1);
      v56 = &result[6 * (a3 >> 1)];
      GameRoutine_f533a0_alt1(result, v56, v50, (__int64)a4, v50);
      result = GameRoutine_f533a0_alt1(v56, a2, a3 - v50, (__int64)&a4[2 * v55],
                                       a3 - v50);
      if (16 * v55 != 0) {
        v57 = v56;
        v58 = a4;
        v59 = a2;
        v60 = v51;
        while (v57 != a2) {
          if (v57[2] >= (unsigned __int64)v60[2]) {
            v61 = v60[1];
            *v58 = *v60;
            v58[1] = v61;
            v62 = v60[2];
            v63 = v60[3];
            v64 = v60[4];
            v65 = v60[5];
            v60 += 6;
          }
          else {
            v66 = v57[1];
            *v58 = *v57;
            v58[1] = v66;
            v62 = v57[2];
            v63 = v57[3];
            v64 = v57[4];
            v65 = v57[5];
            v57 += 6;
          }
          v58[4] = v64;
          v58[5] = v65;
          v58[2] = v62;
          v58[3] = v63;
          v58 += 6;
          if (v60 == v56) {
            goto LABEL_33;
          }
        }
        while (v60 != v56) {
          v67 = v60[1];
          *v58 = *v60;
          v58[1] = v67;
          v68 = v60[2];
          v69 = v60[3];
          v70 = v60[4];
          v71 = v60[5];
          v60 += 6;
          v58[4] = v70;
          v58[5] = v71;
          v58[2] = v68;
          v58[3] = v69;
          v58 += 6;
        }
      }
      else {
        v57 = v56;
        v58 = a4;
        v59 = a2;
      LABEL_33:
        while (v57 != v59) {
          v72 = v57[1];
          *v58 = *v57;
          v58[1] = v72;
          v73 = v57[2];
          v74 = v57[3];
          v75 = v57[4];
          v76 = v57[5];
          v57 += 6;
          v58[4] = v75;
          v58[5] = v76;
          v58[2] = v73;
          v58[3] = v74;
          v58 += 6;
        }
      }
    }
    else if (result != a2) {
      v17 = result[1];
      *a4 = *result;
      a4[1] = v17;
      v18 = result[5];
      v19 = result[2];
      v20 = result[3];
      a4[4] = result[4];
      a4[5] = v18;
      v21 = result + 6;
      a4[2] = v19;
      a4[3] = v20;
      if (result + 6 != a2) {
        v22 = 0;
        v23 = a4;
        do {
          v28 = v21;
          v29 = v23 + 6;
          if (result[8] >= (unsigned __int64)v23[2]) {
            v24 = v21[1];
            *v29 = *v21;
            v29[1] = v24;
            v25 = v21[2];
            v26 = v28[3];
            v27 = v28[5];
            v29[4] = v28[4];
            v29[5] = v27;
            v29[2] = v25;
            v29[3] = v26;
          }
          else {
            v30 = v23[3];
            v23[8] = v23[2];
            v23[9] = v30;
            v31 = v23[5];
            v23[10] = v23[4];
            v23[11] = v31;
            v32 = v23[1];
            *v29 = *v23;
            v23[7] = v32;
            v33 = (char*)a4;
            if (v23 != a4) {
              v34 = v22;
              while (1) {
                v33 = (char*)a4 + v34;
                if (result[8] >= *(unsigned __int64*)((char*)a4 + v34 - 32)) {
                  break;
                }
                v35 = *((_QWORD*)v33 - 3);
                v34 -= 48;
                *((_QWORD*)v33 + 2) = *((_QWORD*)v33 - 4);
                *((_QWORD*)v33 + 3) = v35;
                *((_QWORD*)v33 + 4) = *((_QWORD*)v33 - 2);
                *((_DWORD*)v33 + 10) = *((_DWORD*)v33 - 2);
                v36 = *((_QWORD*)v33 - 5);
                *(_QWORD*)v33 = *((_QWORD*)v33 - 6);
                *((_QWORD*)v33 + 1) = v36;
                if (v34 == 0) {
                  v33 = (char*)a4;
                  break;
                }
              }
            }
            v37 = v28[1];
            *(_QWORD*)v33 = *v28;
            *((_QWORD*)v33 + 1) = v37;
            v38 = v28[2];
            v39 = v28[3];
            v40 = v28[4];
            *((_DWORD*)v33 + 10) = *((_DWORD*)v28 + 10);
            *((_QWORD*)v33 + 3) = v39;
            *((_QWORD*)v33 + 4) = v40;
            *((_QWORD*)v33 + 2) = v38;
          }
          v21 = v28 + 6;
          v22 += 48;
          v23 = v29;
          result = v28;
        } while (v28 + 6 != a2);
      }
    }
  }
  return result;
}

__int64 game_map_PrimitiveDrawStack_DrawReserveVertex_lambda0_Invoke(
    __int64 result, _QWORD* a2, unsigned __int8* a3)
{
  int v3;

  v3 = *a3;
  if (*((_DWORD*)a2 + (v3 ^ 1u) + 7) != -1) {
    return PrimitiveDrawStack_f52360(*(_QWORD*)(result + 8), a2, v3 ^ 1u, v3);
  }
  return result;
}

__int64 game_map_PrimitiveDrawStack_DrawReserveVertex_lambda1_Invoke(
    __int64 result, _QWORD* a2, char* a3)
{
  char v3;
  unsigned int v4;

  v3 = *a3;
  if (*a3 != 0) {
    v4 = 2;
  }
  else {
    v4 = 3;
  }
  if (*((_DWORD*)a2 + v4 + 7) != -1) {
    return PrimitiveDrawStack_f52360(*(_QWORD*)(result + 8), a2, v4, v3);
  }
  return result;
}

#pragma GCC visibility pop
