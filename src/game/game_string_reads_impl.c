#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2020(_QWORD, _QWORD);
__int64 GameRoutine_21c0(_QWORD, _QWORD);
__int64 GameRoutine_2360(_QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c05690(_QWORD, _QWORD);
__int64 GameRoutine_c05d90(void);
__int64 GameRoutine_c05fb0(_QWORD, _QWORD);
__int64 GameRoutine_c3b780(void);
__int64 GameRoutine_c3d0b0(void);
__int64 GameRoutine_c3d2d0(_QWORD, _QWORD);
__int64 GameRoutine_c3da20(void);
__int64 GameRoutine_c3dd90(void);
__int64 GameRoutine_c3dfb0(void);
__int64 GameRoutine_c3e190(_QWORD, _QWORD);
__int64 Value_2500(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
GameStringReads_c05cc0_alt1(_QWORD* a1,
                            __int64 a2) __asm__("GameStringReads_c05cc0");
float GameStringReads_c3cd70_alt1(__int64 a1,
                                  char* a2) __asm__("GameStringReads_c3cd70");
__int64
GameStringReads_c3cf10_alt1(_QWORD* a1,
                            __int64 a2) __asm__("GameStringReads_c3cf10");
__int64
GameStringReads_c3d730_alt1(bool* a1,
                            _QWORD* a2) __asm__("GameStringReads_c3d730");
__int64
GameStringReads_c3d930_alt1(__int64* a1,
                            __int64 a2) __asm__("GameStringReads_c3d930");
__int64
GameStringReads_c3dc40_alt1(__int64* a1,
                            __int64 a2) __asm__("GameStringReads_c3dc40");
__int64
GameStringReads_c3e3b0_alt1(_DWORD* a1,
                            _QWORD* a2) __asm__("GameStringReads_c3e3b0");
__int64
GameStringReads_c3ec70_alt1(_DWORD* a1,
                            _QWORD* a2) __asm__("GameStringReads_c3ec70");
__int64
GameStringReads_c3f080_alt1(_DWORD* a1,
                            _QWORD* a2) __asm__("GameStringReads_c3f080");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 timeline_21c0(unsigned int*, unsigned int*);
__int64 timeline_2360(unsigned __int64*, unsigned __int64*);
bool GameRoutine_c05690_alt1(_QWORD*, __int64) __asm__("GameRoutine_c05690");
bool GameRoutine_c05fb0_alt1(__int64**, __int64) __asm__("GameRoutine_c05fb0");
bool GameRoutine_c3d0b0_alt1(__int64**, __int64) __asm__("GameRoutine_c3d0b0");
bool GameRoutine_c3d2d0_alt1(__int64**, __int64) __asm__("GameRoutine_c3d2d0");
bool GameRoutine_c3da20_alt1(__int64**, __int64) __asm__("GameRoutine_c3da20");
bool GameRoutine_c3dd90_alt1(__int64**, __int64) __asm__("GameRoutine_c3dd90");
bool GameRoutine_c3e190_alt1(__int64**, __int64) __asm__("GameRoutine_c3e190");
float GameStringReads_c3cd70_alt2(unsigned int**,
                                  char*) __asm__("GameStringReads_c3cd70");
void GameRoutine_c3b780_alt1(__int64, __int64**) __asm__("GameRoutine_c3b780");
void GameRoutine_c3dfb0_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_c3dfb0");
void GameStringReads_c3cf10_alt2(_QWORD*,
                                 __int64) __asm__("GameStringReads_c3cf10");
void GameStringReads_c3dc40_alt2(unsigned __int64**,
                                 __int64) __asm__("GameStringReads_c3dc40");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
float GameStringReads_c3cd70(_QWORD* a1, char* a2);
void GameStringReads_c3cf10(unsigned int** a1, __int64 a2);
void GameStringReads_c3d730(unsigned int* a1, unsigned int** a2);
void GameStringReads_c3d930(__int64** a1, __int64 a2);
void GameStringReads_c3dc40(unsigned int** a1, __int64 a2);
void GameStringReads_c3e3b0(unsigned int* a1, unsigned int** a2);
void GameStringReads_c3ec70(__int64 a1, __int64** a2);
void GameStringReads_c3f080(__int64 a1, __int64** a2);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 timeline_2020(unsigned __int16*, _WORD*);
bool GameRoutine_c05d90_alt1(_QWORD*, __int64) __asm__("GameRoutine_c05d90");
char* GameRoutine_60a060_alt1(char*, __int64,
                              unsigned __int64) __asm__("GameRoutine_60a060");
unsigned __int64 Value_2500_alt1(__int64*, __int64,
                                 unsigned __int64) __asm__("Value_2500");
void GameStringReads_c05cc0(__int64** a1, __int64 a2);

void GameStringReads_c05cc0(__int64** a1, __int64 a2)
{
  __int64* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int16 v10;

  if (GameRoutine_c05d90_alt1(a1, a2)) {
    v4 = *a1;
    v5 = *(char**)(a2 + 24);
    v10 = 0;
    timeline_2020((unsigned __int16*)v4, &v10);
    v6 = v10;
    v7 = fw_memory_g_heap_manager_ptr;
    v8 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v10, 16, 0);
    memset_alt1(v8, 0, v6);
    Value_2500_alt1(*a1, v8, v6);
    GameRoutine_60a060_alt1(v5, v8, v10);
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v9, v8);
  }
}

float GameStringReads_c3cd70(_QWORD* a1, char* a2)
{

#pragma clang fp contract(off)
  __int128 v4;
  char v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int128 v11;
  float result;
  struct {
    __int64 v13;
    unsigned __int64 v14;
    __int64 v15;
  } v13_;
  struct {
    __int64 v16;
    unsigned __int64 v17;
    __int64 v18;
    __int64* v19;
  } v16_;
  struct {
    __int64 v20;
    unsigned int v21;
  } v20_;
  struct {
    __int64 v22[2];
    __int64 v23;
    __int64* v24;
  } v22_;

  v4 = *(_OWORD*)*((_QWORD*)a2 + 3);
  v20_.v21 = *(_QWORD*)(*((_QWORD*)a2 + 3) + 8LL);
  v5 = *a2;
  v20_.v20 = v4;
  if ((v5 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v13_.v13, *((_QWORD*)a2 + 2),
                                       *((_QWORD*)a2 + 1));
    if ((v13_.v13 & 1) != 0) {
      goto LABEL_3;
    }
  }
  else {
    v6 = *((_QWORD*)a2 + 1);
    v13_.v13 = *(_QWORD*)a2;
    v13_.v14 = v6;
    v13_.v15 = *((_QWORD*)a2 + 2);
    if ((v13_.v13 & 1) != 0) {
    LABEL_3:
      fw_text_String_CopyTerminated_alt1(&v16_.v16, v13_.v15, v13_.v14);
      goto LABEL_6;
    }
  }
  v16_.v16 = v13_.v13;
  v16_.v17 = v13_.v14;
  v16_.v18 = v13_.v15;
LABEL_6:
  v16_.v19 = &v20_.v20;
  if ((v16_.v16 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v22_.v22, v16_.v18, v16_.v17);
    v7 = v16_.v19;
  }
  else {
    v7 = &v20_.v20;
    v22_.v22[0] = v16_.v16;
    v22_.v22[1] = v16_.v17;
    v22_.v23 = v16_.v18;
  }
  v22_.v24 = v7;
  GameStringReads_c3cf10_alt2(a1, (__int64)v22_.v22);
  if ((v22_.v22[0] & 1) != 0 && v22_.v23 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v22_.v23);
  }
  if ((v16_.v16 & 1) != 0 && v16_.v18 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v16_.v18);
  }
  if ((v13_.v13 & 1) != 0 && v13_.v15 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v13_.v15);
  }
  *(_QWORD*)&v11 = v20_.v20;
  *((_QWORD*)&v11 + 1) = v20_.v21;
  *(_OWORD*)*((_QWORD*)a2 + 3) = v11;
  LODWORD(result) = v11;
  return result;
}

void GameStringReads_c3cf10(unsigned int** a1, __int64 a2)
{
  _DWORD* v4;
  _DWORD* v5;
  __int64 v6;
  __int64 v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  unsigned int* v11;
  _DWORD* v12;
  __int64 v13;
  struct {
    _WORD v14[8];
    __int64 v15;
    _DWORD* v16;
  } v14_;
  unsigned int v17;

  if (GameRoutine_c3d0b0_alt1((__int64**)a1, a2)) {
    v4 = *(_DWORD**)(a2 + 24);
    v14_.v14[0] = 0;
    v14_.v16 = v4;
    if (GameRoutine_c05fb0_alt1((__int64**)a1, (__int64)v14_.v14)) {
      v5 = v14_.v16;
      if ((timeline_21c0(*a1, &v17) & 1) != 0) {
        *v5 = v17;
      }
    }
    if ((v14_.v14[0] & 1) != 0 && v14_.v15 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v14_.v15);
    }
    v7 = *(_QWORD*)(a2 + 24);
    v14_.v14[0] = 0;
    v14_.v16 = (_DWORD*)(v7 + 4);
    if (GameRoutine_c05fb0_alt1((__int64**)a1, (__int64)v14_.v14)) {
      v8 = v14_.v16;
      if ((timeline_21c0(*a1, &v17) & 1) != 0) {
        *v8 = v17;
      }
    }
    if ((v14_.v14[0] & 1) != 0 && v14_.v15 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v14_.v15);
    }
    v10 = *(_QWORD*)(a2 + 24);
    v14_.v14[0] = 0;
    v14_.v16 = (_DWORD*)(v10 + 8);
    if (GameRoutine_c05fb0_alt1((__int64**)a1, (__int64)v14_.v14)) {
      v11 = *a1;
      v12 = v14_.v16;
      if ((timeline_21c0(v11, &v17) & 1) != 0) {
        *v12 = v17;
      }
    }
    if ((v14_.v14[0] & 1) != 0 && v14_.v15 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v14_.v15);
    }
  }
}

void GameStringReads_c3d730(unsigned int* a1, unsigned int** a2)
{
  __int64 v4;
  __int64 v5;
  unsigned int* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _WORD v10[8];
    __int64 v11;
    unsigned int* v12;
  } v10_;
  unsigned int v13;

  v10_.v10[0] = 0;
  v10_.v12 = a1;
  if (GameRoutine_c05690_alt1(a2, (__int64)v10_.v10)) {
    timeline_21c0(*a2, v10_.v12);
  }
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v10_.v11);
  }
  v10_.v10[0] = 0;
  v10_.v12 = a1 + 1;
  if (GameRoutine_c05690_alt1(a2, (__int64)v10_.v10)) {
    timeline_21c0(*a2, v10_.v12);
  }
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v10_.v11);
  }
  v10_.v10[0] = 0;
  v10_.v12 = a1 + 2;
  if (GameRoutine_c3d2d0_alt1((__int64**)a2, (__int64)v10_.v10)) {
    v6 = *a2;
    v13 = 0;
    timeline_21c0(v6, &v13);
    *(_BYTE*)v10_.v12 = v13 != 0;
  }
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v10_.v11);
  }
  v10_.v10[0] = 0;
  v10_.v12 = a1 + 3;
  GameStringReads_c3d930((__int64**)a2, (__int64)v10_.v10);
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v10_.v11);
  }
  v10_.v10[0] = 0;
  v10_.v12 = a1 + 6;
  GameStringReads_c3dc40_alt2((unsigned __int64**)a2, (__int64)v10_.v10);
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v10_.v11);
  }
}

void GameStringReads_c3d930(__int64** a1, __int64 a2)
{
  __int64* v4;
  unsigned int* v5;
  int* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  struct {
    _WORD v11[8];
    __int64 v12;
    int* v13;
  } v11_;
  int v14;
  unsigned int v15;
  int v16;

  if (GameRoutine_c3da20_alt1(a1, a2)) {
    v4 = *a1;
    v15 = 0;
    timeline_21c0((unsigned int*)v4, &v15);
    if (v15 != 0) {
      v11_.v11[0] = 0;
      v11_.v13 = &v14;
      if (GameRoutine_c05fb0_alt1(a1, (__int64)v11_.v11)) {
        v5 = (unsigned int*)*a1;
        v6 = v11_.v13;
        if ((timeline_21c0(v5, (unsigned int*)&v16) & 1) != 0) {
          *v6 = v16;
        }
      }
      if ((v11_.v11[0] & 1) != 0 && v11_.v12 != 0) {
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v11_.v12);
      }
      v8 = v14;
      v9 = *(_QWORD*)(a2 + 24);
      *(_BYTE*)(v9 + 4) = 1;
      *(_DWORD*)v9 = v8;
    }
    else {
      v10 = *(_QWORD*)(a2 + 24);
      if (*(_BYTE*)(v10 + 4) == 1) {
        *(_BYTE*)(v10 + 4) = 0;
      }
    }
  }
}

void GameStringReads_c3dc40(unsigned int** a1, __int64 a2)
{
  unsigned int* v4;
  __int64* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    _WORD v13[8];
    __int64 v14;
    unsigned int* v15;
  } v13_;
  unsigned __int64 v16;

  if (GameRoutine_c3dd90_alt1((__int64**)a1, a2)) {
    v4 = *a1;
    v16 = 0;
    timeline_2360((unsigned __int64*)v4, &v16);
    v5 = *(__int64**)(a2 + 24);
    v6 = 0xAAAAAAAAAAAAAAABLL * ((v5[1] - *v5) >> 2);
    if (v16 <= v6) {
      if (v16 < v6) {
        v5[1] = *v5 + 12 * v16;
      }
    }
    else {
      GameRoutine_c3dfb0_alt1(v5, v16 - v6);
    }
    v7 = *(_QWORD*)(*(_QWORD*)(a2 + 24) + 8LL) - **(_QWORD**)(a2 + 24);
    if (v7 != 0) {
      v8 = 0;
      v9 = fw_memory_g_heap_manager_ptr;
      v10 = 0xAAAAAAAAAAAAAAABLL * (v7 >> 2);
      do {
        v11 = **(_QWORD**)(a2 + 24);
        v13_.v13[0] = 0;
        v13_.v15 = (unsigned int*)(v11 + v8);
        if (GameRoutine_c3e190_alt1((__int64**)a1, (__int64)v13_.v13)) {
          GameStringReads_c3e3b0(v13_.v15, a1);
        }
        if ((v13_.v13[0] & 1) != 0 && v13_.v14 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v9 + v12, v13_.v14);
        }
        --v10;
        v8 += 12;
      } while (v10 != 0);
    }
  }
}

void GameStringReads_c3e3b0(unsigned int* a1, unsigned int** a2)
{
  unsigned int* v4;
  __int64 v5;
  unsigned int* v6;
  __int64 v7;
  __int64 v8;
  struct {
    _WORD v9[8];
    __int64 v10;
    unsigned int* v11;
  } v9_;
  unsigned int v12;

  v9_.v9[0] = 0;
  v9_.v11 = a1;
  if (GameRoutine_c05fb0_alt1((__int64**)a2, (__int64)v9_.v9)) {
    v4 = v9_.v11;
    if ((timeline_21c0(*a2, &v12) & 1) != 0) {
      *v4 = v12;
    }
  }
  if ((v9_.v9[0] & 1) != 0 && v9_.v10 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v9_.v10);
  }
  v9_.v9[0] = 0;
  v9_.v11 = a1 + 1;
  if (GameRoutine_c05fb0_alt1((__int64**)a2, (__int64)v9_.v9)) {
    v6 = v9_.v11;
    if ((timeline_21c0(*a2, &v12) & 1) != 0) {
      *v6 = v12;
    }
  }
  if ((v9_.v9[0] & 1) != 0 && v9_.v10 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v9_.v10);
  }
  v9_.v9[0] = 0;
  v9_.v11 = a1 + 2;
  if (GameRoutine_c05690_alt1(a2, (__int64)v9_.v9)) {
    timeline_21c0(*a2, v9_.v11);
  }
  if ((v9_.v9[0] & 1) != 0 && v9_.v10 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v9_.v10);
  }
}

void GameStringReads_c3ec70(__int64 a1, __int64** a2)
{
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
  __int64 v7;
  __int64* v8;
  _DWORD* v9;
  __int64 v10;
  struct {
    char v11[16];
    __int64 v12;
    _DWORD* v13;
  } v11_;
  unsigned int v14;

  GameRoutine_c3b780_alt1(a1, a2);
  v11_.v13 = (_DWORD*)(a1 + 256);
  *(_QWORD*)v11_.v11 = 0x746E6F72660ALL;
  GameStringReads_c3cd70_alt2((unsigned int**)a2, v11_.v11);
  if ((v11_.v11[0] & 1) != 0 && v11_.v12 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v11_.v12);
  }
  v11_.v13 = (_DWORD*)(a1 + 272);
  *(_QWORD*)v11_.v11 = 0x7466656C08LL;
  GameStringReads_c3cd70_alt2((unsigned int**)a2, v11_.v11);
  if ((v11_.v11[0] & 1) != 0 && v11_.v12 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v11_.v12);
  }
  v11_.v13 = (_DWORD*)(a1 + 288);
  *(_QWORD*)v11_.v11 = 0x68746469770ALL;
  if (GameRoutine_c05fb0_alt1(a2, (__int64)v11_.v11)) {
    v6 = v11_.v13;
    if ((timeline_21c0((unsigned int*)*a2, &v14) & 1) != 0) {
      *v6 = v14;
    }
  }
  if ((v11_.v11[0] & 1) != 0 && v11_.v12 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v11_.v12);
  }
  v11_.v13 = (_DWORD*)(a1 + 292);
  *(_QWORD*)v11_.v11 = 0x7468676965680CLL;
  if (GameRoutine_c05fb0_alt1(a2, (__int64)v11_.v11)) {
    v8 = *a2;
    v9 = v11_.v13;
    if ((timeline_21c0((unsigned int*)v8, &v14) & 1) != 0) {
      *v9 = v14;
    }
  }
  if ((v11_.v11[0] & 1) != 0 && v11_.v12 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v11_.v12);
  }
}

void GameStringReads_c3f080(__int64 a1, __int64** a2)
{
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
  __int64 v7;
  _DWORD* v8;
  __int64 v9;
  _DWORD* v10;
  __int64 v11;
  _DWORD* v12;
  __int64 v13;
  __int64* v14;
  _DWORD* v15;
  __int64 v16;
  struct {
    __int64 v17;
    __int64 v18;
    __int64 v19;
    _DWORD* v20;
  } v17_;
  unsigned int v21;

  GameRoutine_c3b780_alt1(a1, a2);
  v17_.v20 = (_DWORD*)(a1 + 256);
  v17_.v17 = 0x746E6F72660ALL;
  GameStringReads_c3cd70_alt2((unsigned int**)a2, (char*)&v17_.v17);
  if ((v17_.v17 & 1) != 0 && v17_.v19 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v17_.v19);
  }
  v17_.v20 = (_DWORD*)(a1 + 272);
  v17_.v17 = 0x7466656C08LL;
  GameStringReads_c3cd70_alt2((unsigned int**)a2, (char*)&v17_.v17);
  if ((v17_.v17 & 1) != 0 && v17_.v19 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v17_.v19);
  }
  v17_.v20 = (_DWORD*)(a1 + 288);
  v17_.v17 = 0x68746469770ALL;
  if (GameRoutine_c05fb0_alt1(a2, (__int64)&v17_.v17)) {
    v6 = v17_.v20;
    if ((timeline_21c0((unsigned int*)*a2, &v21) & 1) != 0) {
      *v6 = v21;
    }
  }
  if ((v17_.v17 & 1) != 0 && v17_.v19 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v17_.v19);
  }
  v17_.v20 = (_DWORD*)(a1 + 292);
  v17_.v17 = 0x7468676965680CLL;
  if (GameRoutine_c05fb0_alt1(a2, (__int64)&v17_.v17)) {
    v8 = v17_.v20;
    if ((timeline_21c0((unsigned int*)*a2, &v21) & 1) != 0) {
      *v8 = v21;
    }
  }
  if ((v17_.v17 & 1) != 0 && v17_.v19 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v17_.v19);
  }
  v17_.v20 = (_DWORD*)(a1 + 296);
  v17_.v17 = 0x4166666F74756318LL;
  v17_.v18 = 0x586168706CLL;
  if (GameRoutine_c05fb0_alt1(a2, (__int64)&v17_.v17)) {
    v10 = v17_.v20;
    if ((timeline_21c0((unsigned int*)*a2, &v21) & 1) != 0) {
      *v10 = v21;
    }
  }
  if ((v17_.v17 & 1) != 0 && v17_.v19 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v17_.v19);
  }
  v17_.v20 = (_DWORD*)(a1 + 300);
  v17_.v17 = 0x4166666F74756318LL;
  v17_.v18 = 0x596168706CLL;
  if (GameRoutine_c05fb0_alt1(a2, (__int64)&v17_.v17)) {
    v12 = v17_.v20;
    if ((timeline_21c0((unsigned int*)*a2, &v21) & 1) != 0) {
      *v12 = v21;
    }
  }
  if ((v17_.v17 & 1) != 0 && v17_.v19 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v17_.v19);
  }
  v17_.v20 = (_DWORD*)(a1 + 304);
  v17_.v17 = 0x4166666F74756318LL;
  v17_.v18 = 0x5A6168706CLL;
  if (GameRoutine_c05fb0_alt1(a2, (__int64)&v17_.v17)) {
    v14 = *a2;
    v15 = v17_.v20;
    if ((timeline_21c0((unsigned int*)v14, &v21) & 1) != 0) {
      *v15 = v21;
    }
  }
  if ((v17_.v17 & 1) != 0 && v17_.v19 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v17_.v19);
  }
}

#pragma GCC visibility pop
