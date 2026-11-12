#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

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
__int64 PrimitiveDrawStack_f53a20(__int64 result, char*, char*, __int64,
                                  __int64, __int64, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _DWORD* GameData_212d168;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_21a6120;
extern __int64 GameData_212d020[5];
extern __int64 game_GameModeData_instance_;
__int64 PrimitiveDrawStack_f52120(__int64 a1, char a2, int a3);
__int64* PrimitiveDrawStack_f533a0(__int64* result, __int64* a2,
                                   unsigned __int64 a3, __int64* a4,
                                   __int64 a5);
void game_map_PrimitiveDrawStack_DrawMain_lambda0_Invoke(__int64 a1,
                                                         float32x4_t** a2);
__int64 memmove(_QWORD, _QWORD, _QWORD);
_QWORD* PrimitiveDrawStack_f533a0_alt1(
    _QWORD* result, _QWORD*, unsigned __int64, __int64,
    signed __int64) __asm__("PrimitiveDrawStack_f533a0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

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

__int64 PrimitiveDrawStack_f52120(__int64 a1, char a2, int a3)
{
  int v3;
  int v4;
  __int64************ v5;
  __int64*********** v6;
  __int64********** v7;
  __int64********* v8;
  __int128 v9;
  __int128 v10;
  __int64******** v11;
  __int64******* v12;
  __int64****** v13;
  __int64***** v14;
  __int64**** v15;
  __int64*** v16;
  __int64** v17;
  __int64** v18;
  char* v19;
  __int64* v20;
  char v21;
  int v22;
  __int64* v23;
  int v24;
  __int64 v25;
  int v27;
  __int64 v28;
  int v29;
  char v30;
  __int64********* v31;

  if (*(_BYTE*)(a1 + 120) == 1) {
    *(_BYTE*)(a1 + 120) = 0;
  }
  if (a3 != 0) {
    v3 = 2;
  }
  else {
    v3 = 1;
  }
  v4 = *GameData_212d168;
  v5 = **(__int64**************)game_map_MapColorPalette_g_texture_archives;
  *((_DWORD*)v5 + 4328) = 0;
  v6 = *v5;
  *((_DWORD*)v6 + 4330) = 0;
  v7 = *v6;
  *((_DWORD*)v7 + 4351) = v3;
  v8 = *v7;
  v9 = GameData_1a82dd0;
  *((_OWORD*)v8 + 1090) = GameData_1a82dd0;
  if (*GameData_212f878 != 0) {
    LODWORD(v10) = 0;
    HIDWORD(v10) = 0;
    *(_QWORD*)((char*)&v10 + 4) = *(unsigned int*)(*GameData_212f878 + 1424);
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      v30 = a2;
      v29 = v4;
      v31 = v8;
      v27 = __cxa_guard_acquire(&GameData_21a6130);
      v9 = GameData_1a82dd0;
      v8 = v31;
      v4 = v29;
      a2 = v30;
      if (v27 != 0) {
        v28 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v28;
        __cxa_guard_release(&GameData_21a6130);
        v9 = GameData_1a82dd0;
        v8 = v31;
        v4 = v29;
        a2 = v30;
      }
    }
    v10 = GameData_21a6120;
  }
  v11 = *v8;
  *((_OWORD*)v11 + 1162) = v9;
  *((_OWORD*)v11 + 1165) = v10;
  *((_OWORD*)v11 + 1163) = GameData_1a83610;
  *((_OWORD*)v11 + 1164) = GameData_1a83090;
  v12 = *v11;
  *((_DWORD*)v12 + 4333) = 0;
  v13 = *v12;
  *((_BYTE*)v13 + 17395) = 1;
  v14 = *v13;
  *((_BYTE*)v14 + 17393) = 1;
  v15 = *v14;
  *((_BYTE*)v15 + 17394) = 0;
  v16 = *v15;
  *((_BYTE*)v16 + 17397) = 1;
  v17 = *v16;
  v18 = v17 + 2048;
  if ((a2 & 1) != 0 && v4 == 1) {
    if (((_BYTE)v17[2190] & 1) != 0) {
      v17[2191] = (__int64*)(((_UNKNOWN**)0x8LL) + 1);
      v19 = (char*)v17[2192];
    }
    else {
      *((_BYTE*)v17 + 17520) = 18;
      v19 = (char*)v17 + 17521;
    }
    strcpy(v19, "CharaMask");
    v22 = 3;
    v21 = 1;
  }
  else {
    if (((_BYTE)v17[2190] & 1) != 0) {
      v20 = v17[2192];
      v17[2191] = nullptr;
    }
    else {
      v20 = (__int64*)((char*)v17 + 17521);
      *((_BYTE*)v17 + 17520) = 0;
    }
    v21 = 0;
    v22 = 0;
    *(_BYTE*)v20 = 0;
  }
  v23 = *v17;
  *((_BYTE*)v18 + 1128) = v21;
  *((_DWORD*)v18 + 283) = v22;
  if ((a2 & 1) != 0) {
    v24 = 0;
  }
  else {
    v24 = 3;
  }
  v25 = *v23;
  *((_DWORD*)v23 + 4325) = v24;
  return GameRoutine_1994460(v25);
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
  __int64 v15;

  v3 = *(_QWORD**)(result + 24);
  v5 = result;
  if ((signed __int32)**(_DWORD**)(result + 8) /
          (2 * **(_DWORD**)(result + 16)) <=
      1) {
    v6 = 1;
  }
  else {
    v6 = (signed __int32)**(_DWORD**)(result + 8) /
         (2 * **(_DWORD**)(result + 16));
  }
  add = atomic_fetch_add(a3, v6);
  v8 = v3[5];
  v9 = v3[6];
  if ((signed __int32)**(_DWORD**)(result + 8) >= (signed int)(add + v6)) {
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
          GameRoutine_60a310_alt1();
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
        if ((signed __int32)**(_DWORD**)(v5 + 8) >= (signed int)(add + v6)) {
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
      v15 = *(_QWORD*)(*(_QWORD*)(v5 + 32) + 32LL);
      if (v15 == 0) {
        goto LABEL_37;
      }
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v15 + 48LL))(v15, v13);
    }
    if (++v11 >= v10) {
      if (v6 >> 1 <= 1) {
        v6 = 1;
      }
      else {
        v6 >>= 1;
      }
      add = atomic_fetch_add(a3, v6);
      if ((signed __int32)**(_DWORD**)(v5 + 8) >= (signed int)(add + v6)) {
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

__int64* PrimitiveDrawStack_f533a0(__int64* result, __int64* a2,
                                   unsigned __int64 a3, __int64* a4, __int64 a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  unsigned __int64 v28;
  __int64* v29;
  __int64* v31;
  __int64* v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;

  if (a3 >= 2) {
    if (a3 == 2) {
      if (*(a2 - 4) < (unsigned __int64)result[2]) {
        v57 = result[4];
        v58 = result[5];
        v5 = *(a2 - 5);
        v54 = result[2];
        v56 = result[3];
        v6 = *result;
        v7 = result[1];
        *result = *(a2 - 6);
        result[1] = v5;
        v51 = v6;
        v9 = *(a2 - 3);
        v8 = *(a2 - 2);
        v10 = *(a2 - 4);
        *((_DWORD*)result + 10) = *((_DWORD*)a2 - 2);
        result[3] = v9;
        result[4] = v8;
        result[2] = v10;
        *(a2 - 3) = v56;
        *(a2 - 2) = v57;
        *((_DWORD*)a2 - 2) = v58;
        *(a2 - 5) = v7;
        *(a2 - 4) = v54;
        *(a2 - 6) = v51;
      }
    }
    else if ((__int64)a3 > 128) {
      v21 = a3 >> 1;
      v23 = 3 * (a3 >> 1);
      v24 = a3 - (a3 >> 1);
      if ((__int64)a3 <= a5) {
        v28 = 6 * (a3 >> 1);
        v29 = result;
        v31 = a4;
        PrimitiveDrawStack_f536e0(result, &result[v28], a3 >> 1, a4);
        v32 = &v31[v28];
        result = PrimitiveDrawStack_f536e0(&v29[2 * v23], a2, v24, &v31[v28]);
        v33 = &v31[v28];
        v34 = &v31[6 * a3];
        while (v33 != v34) {
          if (v33[2] >= (unsigned __int64)v31[2]) {
            v35 = v31[1];
            *v29 = *v31;
            v29[1] = v35;
            v36 = v31[2];
            v37 = v31[3];
            v38 = v31[4];
            v39 = *((_DWORD*)v31 + 10);
            v31 += 6;
          }
          else {
            v40 = v33[1];
            *v29 = *v33;
            v29[1] = v40;
            v36 = v33[2];
            v37 = v33[3];
            v38 = v33[4];
            v39 = *((_DWORD*)v33 + 10);
            v33 += 6;
          }
          *((_DWORD*)v29 + 10) = v39;
          v29[3] = v37;
          v29[4] = v38;
          v29[2] = v36;
          v29 += 6;
          if (v31 == v32) {
            while (v33 != v34) {
              v46 = v33[1];
              *v29 = *v33;
              v29[1] = v46;
              v47 = v33[2];
              v48 = v33[3];
              v49 = v33[4];
              v50 = *((_DWORD*)v33 + 10);
              v33 += 6;
              *((_DWORD*)v29 + 10) = v50;
              v29[3] = v48;
              v29[4] = v49;
              v29[2] = v47;
              v29 += 6;
            }
            return result;
          }
        }
        while (v31 != v32) {
          v41 = v31[1];
          *v29 = *v31;
          v29[1] = v41;
          v42 = v31[2];
          v43 = v31[3];
          v44 = v31[4];
          v45 = *((_DWORD*)v31 + 10);
          v31 += 6;
          *((_DWORD*)v29 + 10) = v45;
          v29[3] = v43;
          v29[4] = v44;
          v29[2] = v42;
          v29 += 6;
        }
      }
      else {
        v25 = result;
        PrimitiveDrawStack_f533a0(result, &result[6 * (a3 >> 1)], a3 >> 1, a4,
                                  a5);
        PrimitiveDrawStack_f533a0(&v25[2 * v23], a2, v24, a4, a5);
        return (__int64*)PrimitiveDrawStack_f53a20(
            (__int64)v25, (char*)&v25[2 * v23], (char*)a2, v21, v24,
            (__int64)a4, a5);
      }
    }
    else if (result != a2) {
      v11 = result + 6;
      if (result + 6 != a2) {
        v12 = 0;
        v13 = result;
        do {
          v15 = v11;
          v16 = v13[8];
          if (v16 < v13[2]) {
            v59 = *v15;
            v60 = v15[1];
            v52 = v13[9];
            v53 = v13[10];
            v55 = v13[11];
            v17 = v12;
            do {
              v18 = (char*)result + v17;
              v19 = *(__int64*)((char*)result + v17 + 24);
              *((_QWORD*)v18 + 8) = *(__int64*)((char*)result + v17 + 16);
              *((_QWORD*)v18 + 9) = v19;
              *((_QWORD*)v18 + 10) = *(__int64*)((char*)result + v17 + 32);
              *((_DWORD*)v18 + 22) = *(_DWORD*)((char*)result + v17 + 40);
              v20 = *(__int64*)((char*)result + v17 + 8);
              *((_QWORD*)v18 + 6) = *(__int64*)((char*)result + v17);
              *((_QWORD*)v18 + 7) = v20;
              if (v17 == 0) {
                v14 = result;
                goto LABEL_11;
              }
              v17 -= 48;
            } while (v16 < *((_QWORD*)v18 - 4));
            v14 = (__int64*)((char*)result + v17 + 48);
          LABEL_11:
            *v14 = v59;
            v14[1] = v60;
            v14[2] = v16;
            v14[3] = v52;
            v14[4] = v53;
            *((_DWORD*)v14 + 10) = v55;
          }
          v11 = v15 + 6;
          v12 += 48;
          v13 = v15;
        } while (v15 + 6 != a2);
      }
    }
  }
  return result;
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
      PrimitiveDrawStack_f533a0_alt1(result, v56, v50, (__int64)a4, v50);
      result = PrimitiveDrawStack_f533a0_alt1(v56, a2, a3 - v50,
                                              (__int64)&a4[2 * v55], a3 - v50);
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

__int64 PrimitiveDrawStack_f53a20(__int64 result, char* a2, char* a3,
                                  __int64 a4, __int64 a5, __int64 a6,
                                  __int64 a7)
{
  __int64 v8;
  __int64 i;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  unsigned __int64 v24;
  char* v25;
  char* v26;
  char* v27;
  char* v28;
  signed __int64 v29;
  signed __int64 v30;
  signed __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  signed __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  char* v41;
  char* v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  char* v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  bool v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  __int64 v79;
  _QWORD* v80;
  char* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  int v92;
  __int64 v93;
  _QWORD* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  char* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  char* v108;
  char* v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;

  if (a5 != 0) {
    while (a4 > a7 && a5 > a7) {
      if (a4 == 0) {
        return result;
      }
      v8 = -a4;
      for (i = 0;; i += 48) {
        v10 = result + i;
        if (*((_QWORD*)a2 + 2) < *(_QWORD*)(result + i + 16)) {
          break;
        }
        v73 = __CFADD__(v8++, 1);
        if (v73) {
          return result;
        }
      }
      v11 = -v8;
      if (-v8 >= a5) {
        if (v8 == -1) {
          v94 = (_QWORD*)(result + i);
          v114 = *v94;
          v119 = v94[1];
          v134 = v94[4];
          v139 = v94[5];
          v124 = v94[2];
          v129 = v94[3];
          v96 = *((_QWORD*)a2 + 3);
          v95 = *((_QWORD*)a2 + 4);
          v97 = *((_QWORD*)a2 + 2);
          *((_DWORD*)v94 + 10) = *((_DWORD*)a2 + 10);
          v94[3] = v96;
          v94[4] = v95;
          v94[2] = v97;
          v98 = *((_QWORD*)a2 + 1);
          *v94 = *(_QWORD*)a2;
          v94[1] = v98;
          *(_QWORD*)a2 = v114;
          *((_QWORD*)a2 + 1) = v119;
          *((_DWORD*)a2 + 10) = v139;
          *((_QWORD*)a2 + 3) = v129;
          *((_QWORD*)a2 + 4) = v134;
          *((_QWORD*)a2 + 2) = v124;
          return result;
        }
        v20 = v11 / 2;
        v14 = (char*)(result + 48 * (v11 / 2) + i);
        if (a3 == a2) {
          v13 = a3;
        }
        else {
          v13 = a2;
          v21 = 0xAAAAAAAAAAAAAAABLL * ((a3 - a2) >> 4);
          do {
            v22 = v21 >> 1;
            v23 = &v13[48 * (v21 >> 1)];
            v24 = *((_QWORD*)v23 + 2);
            v25 = v23 + 48;
            v21 += ~(v21 >> 1);
            if (v24 < *((_QWORD*)v14 + 2)) {
              v13 = v25;
            }
            else {
              v21 = v22;
            }
          } while (v21 != 0);
        }
        v12 = 0xAAAAAAAAAAAAAAABLL * ((v13 - a2) >> 4);
      }
      else {
        v12 = a5 / 2;
        v13 = &a2[48 * (a5 / 2)];
        if ((char*)v10 == a2) {
          v14 = a2;
        }
        else {
          v14 = (char*)(result + i);
          v15 = 0xAAAAAAAAAAAAAAABLL * ((__int64)&a2[-result - i] >> 4);
          do {
            v16 = v15 >> 1;
            v17 = &v14[48 * (v15 >> 1)];
            v18 = *((_QWORD*)v17 + 2);
            v19 = v17 + 48;
            v15 += ~(v15 >> 1);
            if (*((_QWORD*)v13 + 2) < v18) {
              v15 = v16;
            }
            else {
              v14 = v19;
            }
          } while (v15 != 0);
        }
        v20 = 0xAAAAAAAAAAAAAAABLL * ((__int64)&v14[-result - i] >> 4);
      }
      v26 = v13;
      if (v14 != a2) {
        v26 = v14;
        if (a2 != v13) {
          v27 = v14 + 48;
          if (v14 + 48 == a2) {
            v48 = (char*)(v13 - a2);
            v106 = v12;
            v108 = a3;
            v49 = a5;
            v50 = a6;
            v51 = v20;
            v112 = *(_QWORD*)v14;
            v117 = *((_QWORD*)v14 + 1);
            v122 = *((_QWORD*)v14 + 2);
            v127 = *((_QWORD*)v14 + 3);
            v132 = *((_QWORD*)v14 + 4);
            v137 = *((_QWORD*)v14 + 5);
            memmove(v14, v14 + 48, v13 - a2 - 4);
            v26 = &v48[(_QWORD)v14];
            v20 = v51;
            v12 = v106;
            a3 = v108;
            a6 = v50;
            a5 = v49;
            *(_QWORD*)v26 = v112;
            *((_QWORD*)v26 + 1) = v117;
            *((_DWORD*)v26 + 10) = v137;
            *((_QWORD*)v26 + 3) = v127;
            *((_QWORD*)v26 + 4) = v132;
            *((_QWORD*)v26 + 2) = v122;
          }
          else {
            v28 = a2 + 48;
            if (a2 + 48 == v13) {
              v26 = v14 + 48;
              v113 = *((_QWORD*)v13 - 6);
              v118 = *((_QWORD*)v13 - 5);
              v133 = *((_QWORD*)v13 - 2);
              v138 = *((_QWORD*)v13 - 1);
              v123 = *((_QWORD*)v13 - 4);
              v128 = *((_QWORD*)v13 - 3);
              if (v13 - 48 != v14) {
                v107 = v12;
                v109 = a3;
                v52 = a5;
                v53 = a6;
                v54 = v20;
                memmove(v14 + 48, v14, v13 - 48 - v14 - 4);
                v20 = v54;
                v12 = v107;
                a3 = v109;
                a6 = v53;
                a5 = v52;
              }
              *(_QWORD*)v14 = v113;
              *((_QWORD*)v14 + 1) = v118;
              *((_DWORD*)v14 + 10) = v138;
              *((_QWORD*)v14 + 3) = v128;
              *((_QWORD*)v14 + 4) = v133;
              *((_QWORD*)v14 + 2) = v123;
            }
            else {
              v29 = a2 - v14;
              v30 = 0xAAAAAAAAAAAAAAABLL * ((a2 - v14) >> 4);
              v31 = 0xAAAAAAAAAAAAAAABLL * ((v13 - a2) >> 4);
              if (v30 == v31) {
                do {
                  v110 = *((_QWORD*)v27 - 6);
                  v115 = *((_QWORD*)v27 - 5);
                  v130 = *((_QWORD*)v27 - 2);
                  v135 = *((_QWORD*)v27 - 1);
                  v120 = *((_QWORD*)v27 - 4);
                  v125 = *((_QWORD*)v27 - 3);
                  v33 = *((_QWORD*)v28 - 3);
                  v32 = *((_QWORD*)v28 - 2);
                  v34 = *((_QWORD*)v28 - 4);
                  *((_DWORD*)v27 - 2) = *((_DWORD*)v28 - 2);
                  *((_QWORD*)v27 - 3) = v33;
                  *((_QWORD*)v27 - 2) = v32;
                  *((_QWORD*)v27 - 4) = v34;
                  v35 = *((_QWORD*)v28 - 5);
                  *((_QWORD*)v27 - 6) = *((_QWORD*)v28 - 6);
                  *((_QWORD*)v27 - 5) = v35;
                  *((_QWORD*)v28 - 6) = v110;
                  *((_QWORD*)v28 - 5) = v115;
                  *((_DWORD*)v28 - 2) = v135;
                  *((_QWORD*)v28 - 3) = v125;
                  *((_QWORD*)v28 - 2) = v130;
                  *((_QWORD*)v28 - 4) = v120;
                  if (v27 == a2) {
                    break;
                  }
                  v27 += 48;
                  v36 = v28 == v13;
                  v28 += 48;
                } while (!v36);
                v26 = a2;
              }
              else {
                do {
                  v37 = v30;
                  v38 = v30 / v31;
                  v30 = v31;
                  v31 = v37 - v38 * v31;
                } while (v31 != 0);
                if (48 * v30 != 0) {
                  v39 = &v14[48 * v30];
                  do {
                    v40 = *((_QWORD*)v39 - 6);
                    v39 -= 48;
                    v121 = *((_QWORD*)v39 + 2);
                    v126 = *((_QWORD*)v39 + 3);
                    v111 = v40;
                    v116 = *((_QWORD*)v39 + 1);
                    v131 = *((_QWORD*)v39 + 4);
                    v136 = *((_QWORD*)v39 + 5);
                    v41 = &v39[v29];
                    v42 = v39;
                    do {
                      v43 = v41;
                      v44 = *((_QWORD*)v41 + 1);
                      *(_QWORD*)v42 = *(_QWORD*)v41;
                      *((_QWORD*)v42 + 1) = v44;
                      v45 = *((_QWORD*)v41 + 2);
                      v46 = v43[3];
                      v47 = v43[4];
                      *((_DWORD*)v42 + 10) = *((_DWORD*)v43 + 10);
                      *((_QWORD*)v42 + 3) = v46;
                      *((_QWORD*)v42 + 4) = v47;
                      *((_QWORD*)v42 + 2) = v45;
                      v41 = (char*)v43 + v29;
                      v42 = (char*)v43;
                      if (v29 >= v13 - (char*)v43) {
                        v41 = &a2[-(v13 - (char*)v43)];
                      }
                    } while (v41 != v39);
                    *v43 = v111;
                    v43[1] = v116;
                    *((_DWORD*)v43 + 10) = v136;
                    v43[3] = v126;
                    v43[4] = v131;
                    v43[2] = v121;
                  } while (v39 != v14);
                }
                v26 = &v14[v13 - a2];
              }
            }
          }
        }
      }
      v55 = a5 - v12;
      v56 = -v8 - v20;
      if (v20 + v12 >= a5 - (v20 + v12) - v8) {
        v60 = a6;
        v61 = v20;
        PrimitiveDrawStack_f53a20(v26, v13, a3, v56, a5 - v12, a6, a7);
        v13 = v14;
        v55 = v12;
        a4 = v61;
        a3 = v26;
      }
      else {
        v57 = v10;
        v58 = a3;
        v59 = v56;
        v60 = a6;
        PrimitiveDrawStack_f53a20(v57, v14, v26, v20, v12, a6, a7);
        a4 = v59;
        a3 = v58;
        v10 = (__int64)v26;
      }
      a5 = v55;
      result = v10;
      a2 = v13;
      a6 = v60;
      if (v55 == 0) {
        return result;
      }
    }
    if (a4 <= a5) {
      if ((char*)result != a2) {
        v80 = (_QWORD*)a6;
        v81 = (char*)result;
        v82 = 4 - a6;
        do {
          v83 = *((_QWORD*)v81 + 1);
          v82 -= 48;
          *v80 = *(_QWORD*)v81;
          v80[1] = v83;
          v84 = *((_QWORD*)v81 + 2);
          v85 = *((_QWORD*)v81 + 3);
          v86 = *((_QWORD*)v81 + 4);
          v87 = *((_QWORD*)v81 + 5);
          v81 += 48;
          v80[4] = v86;
          v80[5] = v87;
          v80[2] = v84;
          v80[3] = v85;
          v80 += 6;
        } while (v81 != a2);
        while (a2 != a3) {
          if (*((_QWORD*)a2 + 2) >= *(_QWORD*)(a6 + 16)) {
            v88 = *(_QWORD*)(a6 + 8);
            *(_QWORD*)result = *(_QWORD*)a6;
            *(_QWORD*)(result + 8) = v88;
            v89 = *(_QWORD*)(a6 + 16);
            v90 = *(_QWORD*)(a6 + 24);
            v91 = *(_QWORD*)(a6 + 32);
            v92 = *(_DWORD*)(a6 + 40);
            a6 += 48;
          }
          else {
            v93 = *((_QWORD*)a2 + 1);
            *(_QWORD*)result = *(_QWORD*)a2;
            *(_QWORD*)(result + 8) = v93;
            v89 = *((_QWORD*)a2 + 2);
            v90 = *((_QWORD*)a2 + 3);
            v91 = *((_QWORD*)a2 + 4);
            v92 = *((_DWORD*)a2 + 10);
            a2 += 48;
          }
          *(_DWORD*)(result + 40) = v92;
          *(_QWORD*)(result + 24) = v90;
          *(_QWORD*)(result + 32) = v91;
          *(_QWORD*)(result + 16) = v89;
          result += 48;
          if (v80 == (_QWORD*)a6) {
            return result;
          }
        }
        return memmove(result, a6, -(a6 + v82));
      }
    }
    else if (a2 != a3) {
      v62 = 0;
      do {
        v63 = &a2[v62];
        v64 = (_QWORD*)(a6 + v62);
        v62 += 48;
        v65 = *((_QWORD*)v63 + 1);
        *v64 = *(_QWORD*)v63;
        v64[1] = v65;
        v66 = *((_QWORD*)v63 + 2);
        v67 = *((_QWORD*)v63 + 3);
        v69 = *((_QWORD*)v63 + 4);
        v68 = *((_QWORD*)v63 + 5);
        v64[4] = v69;
        v64[5] = v68;
        v64[2] = v66;
        v64[3] = v67;
      } while (&a2[v62] != a3);
      v70 = a6 + v62;
      while (a2 != (char*)result) {
        v71 = *((_QWORD*)a2 - 4);
        v72 = *(_QWORD*)(v70 - 32);
        v73 = v72 >= v71;
        if (v72 >= v71) {
          v74 = (char*)(v70 - 48);
        }
        else {
          v74 = a2 - 48;
        }
        if (v73) {
          v70 -= 48;
        }
        else {
          a2 -= 48;
        }
        v75 = *((_QWORD*)v74 + 1);
        *((_QWORD*)a3 - 6) = *(_QWORD*)v74;
        a3 -= 48;
        v77 = *((_QWORD*)v74 + 3);
        v76 = *((_QWORD*)v74 + 4);
        v78 = *((_DWORD*)v74 + 10);
        v79 = *((_QWORD*)v74 + 2);
        *((_DWORD*)a3 + 10) = v78;
        *((_QWORD*)a3 + 3) = v77;
        *((_QWORD*)a3 + 4) = v76;
        *((_QWORD*)a3 + 1) = v75;
        *((_QWORD*)a3 + 2) = v79;
        if (v70 == a6) {
          return result;
        }
      }
      if (a6 != v70) {
        v99 = -48;
        do {
          v100 = *(_QWORD*)(v70 - 48);
          v101 = *(_QWORD*)(v70 - 40);
          v70 -= 48;
          v102 = &a3[v99];
          v99 -= 48;
          *(_QWORD*)v102 = v100;
          *((_QWORD*)v102 + 1) = v101;
          v103 = *(_QWORD*)(v70 + 16);
          v104 = *(_QWORD*)(v70 + 24);
          v105 = *(_QWORD*)(v70 + 32);
          *((_DWORD*)v102 + 10) = *(_DWORD*)(v70 + 40);
          *((_QWORD*)v102 + 3) = v104;
          *((_QWORD*)v102 + 4) = v105;
          *((_QWORD*)v102 + 2) = v103;
        } while (v70 != a6);
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

void game_map_PrimitiveDrawStack_DrawMain_lambda0_Invoke(__int64 a1,
                                                         float32x4_t** a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  char* v3;
  __int64 v4;
  char v5;
  char* v6;
  __int64* v7;
  __int64 v8;
  char v9;
  float v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  __int64 v14;
  float v15;
  float32x4_t v16;
  float v17;
  float v18;
  __int64 v19;
  float32x2_t* v20;
  __int64 v21;
  float32x4_t v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  float v25;
  float32x4_t v26;
  float v27;
  __int64 v28;
  unsigned __int64 v29;
  float32x4_t v30;
  __int128* v31;
  int v32;
  float v33;
  __int128 v34;
  __int128 v35;
  __int128 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  float32x2_t v43;
  int v44;
  float32x4_t v45;
  float32x4_t v46;
  unsigned __int64 v47;
  float32x4_t v48;
  float v49;
  __int128 v50;
  __int64 v51;
  __int64 v52;
  float v53;
  __int64 v54;
  int v55;
  unsigned int v56;
  __int64 v57;
  float v58;
  float32x2_t* v59;
  float32x4_t v60;
  __int64 v61;
  float32x4_t v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  float v65;
  float32x4_t v66;
  float v67;
  __int64 v68;
  unsigned __int64 v69;
  float32x4_t v70;
  __int128* v71;
  int v72;
  float v73;
  __int128 v74;
  __int128 v75;
  __int128 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  float32x2_t v83;
  int v84;
  float32x4_t v85;
  float32x4_t v86;
  unsigned __int64 v87;
  float32x4_t v88;
  float v89;
  __int128 v90;
  __int64 v91;
  char v92;
  char v93;

  v92 = 0;
  v2 = *(_QWORD*)(a1 + 8);
  v3 = &v93;
  v4 = 0;
  v5 = 0;
  v93 = 1;
  v6 = (char*)a2 + 28;
  v7 = GameData_212f878;
  v8 = GameData_212d020[0];
  do {
    v9 = v5;
    if (*(_DWORD*)&v6[4 * v4] != -1) {
      v10 = 0x1.0000000000000p+0f;
      v11 = *(_QWORD*)(v2 + 16) + 112LL * (_QWORD)a2[1];
      if (*v3 == 1) {
        v12 = *(_DWORD*)(v11 + 72);
        if (v12 != 0) {
          if (*v7 != 0) {
            v13 = v12 - 2;
            if (v13 >= 3) {
              v14 = 1456;
            }
            else {
              v14 = 4LL * v13 + 1460;
            }
            v10 = *(float*)(*v7 + v14);
          }
          v15 = *(float*)(*(_QWORD*)v8 + 4404LL);
          if (v15 > 0x0.0p+0f && v10 < v15) {
            v10 = *(float*)(*(_QWORD*)v8 + 4404LL);
          }
        }
      }
      v16 = *(float32x4_t*)(v11 + 32);
      v17 = *(float*)(v11 + 100);
      if (*(_BYTE*)(v11 + 104) != 1 || v17 <= 0x0.0p+0f) {
        v18 = 0x0.0p+0f;
        if (game_GameModeData_instance_ != 0) {
          v19 = *(_QWORD*)(game_GameModeData_instance_ + 16);
          if (v19 != 0) {
            v18 = *(float*)(v19 + 268);
          }
        }
        LANES128(v16).n128_f32[3] = LANES128(v16).n128_f32[3] + v18;
      }
      v20 = (float32x2_t*)*a2;
      v21 = game_map_MapColorPalette_g_texture_archives;
      v22 = (*a2)[13];
      v23 = LANES128((*a2)[6]).n128_u64[0];
      v24 = LANES128((*a2)[6]).n128_u64[1];
      v25 = vmuls_lane_f32(v10, v22, 3);
      v26 = vmulq_f32(v22, v16);
      v27 = vmuls_lane_f32(v25, v16, 3);
      if (*(_BYTE*)(v11 + 104) != 0 && v17 > 0x0.0p+0f) {
        if (v24 != v23) {
          v28 = 48;
          v29 = 0;
          do {
            v30 = *(float32x4_t*)(v23 + v28);
            v28 += 128;
            v31 = (__int128*)(LANES64(v20[15]).n64_u64[0] + 16 * v29);
            v32 = v29 + *(_DWORD*)&v6[4 * v4];
            v29 += 2LL;
            v33 = vmuls_lane_f32(v27, v30, 3);
            *(float32x2_t*)&v34 =
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]));
            LANES128(v30).n128_u32[0] =
                LANES128_OF(vdupq_laneq_s32(vmulq_f32(v26, v30), 2))
                    .n128_u32[0];
            LANES128(v30).n128_f32[1] = v33;
            *((_QWORD*)&v34 + 1) = LANES128(v30).n128_u64[0];
            v35 = *v31;
            v36 = v31[1];
            v37 = *(_QWORD*)(*(_QWORD*)v21 + 19136LL) + 40LL * v32;
            *(_QWORD*)v37 = v35;
            *(_QWORD*)(v37 + 12) = 0;
            *(_DWORD*)(v37 + 20) = 0;
            *(_OWORD*)(v37 + 24) = v34;
            *(_DWORD*)(v37 + 8) = DWORD2(v35);
            v38 = *(_QWORD*)(*(_QWORD*)v21 + 19136LL) + 40LL * v32;
            *(_QWORD*)(v38 + 40) = v36;
            *(_QWORD*)(v38 + 52) = 0;
            *(_DWORD*)(v38 + 60) = 0;
            *(_OWORD*)(v38 + 64) = v34;
            *(_DWORD*)(v38 + 48) = DWORD2(v36);
            v20 = (float32x2_t*)*a2;
            v23 = LANES128((*a2)[6]).n128_u64[0];
          } while (v29 < (__int64)(LANES128((*a2)[6]).n128_u64[1] - v23) >> 6);
        }
      }
      else if (v24 != v23) {
        v39 = 0;
        v40 = 0;
        do {
          v41 = LANES64(v20[15]).n64_u64[0];
          v42 = v23 + v39;
          PSEUDO_LOW_LANE64(v43, n64_u64, LANES64(v20[1]).n64_u64[0]);
          v39 += 64;
          v44 = v40 + *(_DWORD*)&v6[4 * v4];
          v45 = *(float32x4_t*)(v41 + 16 * v40++);
          v46 = vaddq_f32(v45, *(float32x4_t*)(v11 + 80));
          v47 = LANES64_OF(vadd_f32(*(float32x2_t*)(v42 + 32), v43)).n64_u64[0];
          v48 = *(float32x4_t*)(v42 + 48);
          v49 = vmuls_lane_f32(v27, v48, 3);
          *(float32x2_t*)&v50 =
              vmul_f32(COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]));
          LANES128(v48).n128_u32[0] =
              LANES128_OF(vdupq_laneq_s32(vmulq_f32(v26, v48), 2)).n128_u32[0];
          v51 = *(_QWORD*)(*(_QWORD*)v21 + 19136LL) + 40LL * v44;
          LANES128(v48).n128_f32[1] = v49;
          *(_QWORD*)v51 = LANES128(v46).n128_u64[0];
          *(_QWORD*)(v51 + 12) = v47;
          *(_DWORD*)(v51 + 20) = 0;
          *(_DWORD*)(v51 + 8) = LANES128(v46).n128_u32[2];
          *((_QWORD*)&v50 + 1) = LANES128(v48).n128_u64[0];
          *(_OWORD*)(v51 + 24) = v50;
          v20 = (float32x2_t*)*a2;
          v23 = LANES128((*a2)[6]).n128_u64[0];
        } while (v40 < (__int64)(LANES128((*a2)[6]).n128_u64[1] - v23) >> 6);
      }
    }
    v52 = v4 | 1;
    if (*(_DWORD*)&v6[4 * (v4 | 1)] != -1) {
      v53 = 0x1.0000000000000p+0f;
      v54 = *(_QWORD*)(v2 + 16) + 112LL * (_QWORD)a2[1];
      if (*v3 == 1) {
        v55 = *(_DWORD*)(v54 + 72);
        if (v55 != 0) {
          if (*v7 != 0) {
            v56 = v55 - 2;
            if (v56 >= 3) {
              v57 = 1456;
            }
            else {
              v57 = 4LL * v56 + 1460;
            }
            v53 = *(float*)(*v7 + v57);
          }
          v58 = *(float*)(*(_QWORD*)v8 + 4404LL);
          if (v58 > 0x0.0p+0f && v53 < v58) {
            v53 = *(float*)(*(_QWORD*)v8 + 4404LL);
          }
        }
      }
      v59 = (float32x2_t*)*a2;
      v60 = *(float32x4_t*)(v54 + 48);
      v61 = game_map_MapColorPalette_g_texture_archives;
      v62 = (*a2)[13];
      v63 = LANES128((*a2)[6]).n128_u64[0];
      v64 = LANES128((*a2)[6]).n128_u64[1];
      v65 = vmuls_lane_f32(v53, v62, 3);
      v66 = vmulq_f32(v62, v60);
      v67 = vmuls_lane_f32(v65, v60, 3);
      if (*(_BYTE*)(v54 + 104) == 1 && *(float*)(v54 + 100) > 0x0.0p+0f) {
        if (v64 != v63) {
          v68 = 48;
          v69 = 0;
          do {
            v70 = *(float32x4_t*)(v63 + v68);
            v68 += 128;
            v71 = (__int128*)(LANES64(v59[15]).n64_u64[0] + 16 * v69);
            v72 = v69 + *(_DWORD*)&v6[4 * v52];
            v69 += 2LL;
            v73 = vmuls_lane_f32(v67, v70, 3);
            *(float32x2_t*)&v74 =
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]));
            LANES128(v70).n128_u32[0] =
                LANES128_OF(vdupq_laneq_s32(vmulq_f32(v66, v70), 2))
                    .n128_u32[0];
            LANES128(v70).n128_f32[1] = v73;
            *((_QWORD*)&v74 + 1) = LANES128(v70).n128_u64[0];
            v75 = *v71;
            v76 = v71[1];
            v77 = *(_QWORD*)(*(_QWORD*)v61 + 19136LL) + 40LL * v72;
            *(_QWORD*)v77 = v75;
            *(_QWORD*)(v77 + 12) = 0;
            *(_DWORD*)(v77 + 20) = 0;
            *(_OWORD*)(v77 + 24) = v74;
            *(_DWORD*)(v77 + 8) = DWORD2(v75);
            v78 = *(_QWORD*)(*(_QWORD*)v61 + 19136LL) + 40LL * v72;
            *(_QWORD*)(v78 + 40) = v76;
            *(_QWORD*)(v78 + 52) = 0;
            *(_DWORD*)(v78 + 60) = 0;
            *(_OWORD*)(v78 + 64) = v74;
            *(_DWORD*)(v78 + 48) = DWORD2(v76);
            v59 = (float32x2_t*)*a2;
            v63 = LANES128((*a2)[6]).n128_u64[0];
          } while (v69 < (__int64)(LANES128((*a2)[6]).n128_u64[1] - v63) >> 6);
        }
      }
      else if (v64 != v63) {
        v79 = 0;
        v80 = 0;
        do {
          v81 = LANES64(v59[15]).n64_u64[0];
          v82 = v63 + v79;
          PSEUDO_LOW_LANE64(v83, n64_u64, LANES64(v59[1]).n64_u64[0]);
          v79 += 64;
          v84 = v80 + *(_DWORD*)&v6[4 * v52];
          v85 = *(float32x4_t*)(v81 + 16 * v80++);
          v86 = vaddq_f32(v85, *(float32x4_t*)(v54 + 80));
          v87 = LANES64_OF(vadd_f32(*(float32x2_t*)(v82 + 32), v83)).n64_u64[0];
          v88 = *(float32x4_t*)(v82 + 48);
          v89 = vmuls_lane_f32(v67, v88, 3);
          *(float32x2_t*)&v90 =
              vmul_f32(COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0]));
          LANES128(v88).n128_u32[0] =
              LANES128_OF(vdupq_laneq_s32(vmulq_f32(v66, v88), 2)).n128_u32[0];
          v91 = *(_QWORD*)(*(_QWORD*)v61 + 19136LL) + 40LL * v84;
          LANES128(v88).n128_f32[1] = v89;
          *(_QWORD*)v91 = LANES128(v86).n128_u64[0];
          *(_QWORD*)(v91 + 12) = v87;
          *(_DWORD*)(v91 + 20) = 0;
          *(_DWORD*)(v91 + 8) = LANES128(v86).n128_u32[2];
          *((_QWORD*)&v90 + 1) = LANES128(v88).n128_u64[0];
          *(_OWORD*)(v91 + 24) = v90;
          v59 = (float32x2_t*)*a2;
          v63 = LANES128((*a2)[6]).n128_u64[0];
        } while (v80 < (__int64)(LANES128((*a2)[6]).n128_u64[1] - v63) >> 6);
      }
    }
    v4 += 2;
    v3 = &v92;
    v5 = 1;
  } while ((v9 & 1) == 0);
}

#pragma GCC visibility pop
