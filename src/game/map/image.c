#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_65f3d0(_QWORD, _QWORD);
__int64 GameRoutine_660f80(_QWORD);
__int64 GameRoutine_72ca20(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f939e0[])();
extern __int64 (*GameData_1f93b10[])();
extern __int64 (*game_map_Image_vtable[])();
extern __int64 GameData_21ca300;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c930;
extern int GameData_21cd160;
__int64 Image_Destructor(_QWORD* a1);
__int64 Image_Unknown6(__int64 result, __int64 a2);
__int64 Image_Unknown7(unsigned __int8* a1, __int64 a2, int a3);

__int64 Image_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  *a1 = game_map_Image_vtable;
  a1[1] = GameData_1f939e0;
  v2 = a1[9];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[9] = 0;
  }
  v3 = a1[4];
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
    a1[4] = 0;
  }
  v4 = a1[5];
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
    a1[5] = 0;
  }
  v5 = a1[6];
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    a1[6] = 0;
  }
  v6 = a1[7];
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    a1[7] = 0;
  }
  v7 = a1[8];
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    a1[8] = 0;
  }
  v8 = a1[10];
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
    a1[10] = 0;
  }
  v9 = a1[11];
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
    a1[11] = 0;
  }
  v10 = a1[20];
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    a1[20] = 0;
  }
  result = a1[19];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    a1[19] = 0;
  }
  v12 = (_QWORD*)a1[14];
  v13 = (_QWORD*)a1[15];
  a1[18] = 0;
  v14 = fw_memory_g_heap_manager_ptr;
  v15 = v13 - v12;
  if (v15 >= 3) {
    do {
      if (*v12 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v16, *v12);
        v12 = (_QWORD*)a1[14];
        v13 = (_QWORD*)a1[15];
      }
      a1[14] = ++v12;
      v15 = v13 - v12;
    } while (v15 > 2);
  }
  if (v15 == 1) {
    v17 = 85;
  }
  else {
    if (v15 != 2) {
      goto LABEL_34;
    }
    v17 = 170;
  }
  a1[17] = v17;

LABEL_34:
  if (v12 != v13) {
    do {
      if (*v12 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v18, *v12);
      }
      ++v12;
    } while (v12 != v13);
    v19 = a1[15];
    v20 = a1[14] - v19;
    if (v20 != 0) {
      a1[15] = v19 + ((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v21 = a1[13];
  if (v21 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
      v22 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v22, v21);
  }
  *a1 = GameData_1f93b10;
  if ((_QWORD*)GameData_21ca300 == a1) {
    GameData_21ca300 = 0;
    GameData_21cd160 = 0;
  }
  return result;
}

__int64 Image_Unknown6(__int64 result, __int64 a2)
{
  __int64 v2;
  char v3;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  _QWORD* v14;
  int v15;
  unsigned int v16;
  int v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  int v46;
  unsigned int v47;

  v2 = *(int*)(a2 + 20);
  v3 = *(_BYTE*)(result + 18);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v3;
  v4 = *(int*)(a2 + 20);
  v5 = *(_BYTE*)(result + 19);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = v5;
  v6 = *(int*)(a2 + 20);
  v7 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(v7 + v6) = 0;
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = 0;
  v9 = *(unsigned __int8*)(GameData_21ca300 + 20);
  v10 = *(unsigned __int8*)(GameData_21ca300 + 21);
  v11 = *(unsigned __int8*)(GameData_21ca300 + 22);
  if (v10 <= *(unsigned __int8*)(GameData_21ca300 + 23) && v9 <= v11) {
    v46 = *(unsigned __int8*)(GameData_21ca300 + 23);
    v44 = v6 + 1;
    v14 = (_QWORD*)result;
    v15 = 0;
    v16 = v11 + 1;
    v17 = 32 * v10;
    v45 = v6;
    v18 = GameData_212c930;
    v47 = *(unsigned __int8*)(GameData_21ca300 + 20);
    while (1) {
      if (v17 + v9 >= 0x400) {
        v19 = 0;
      }
      else {
        v19 = v17 + v9;
      }
      if (*(unsigned __int16*)(v14[7] + 2LL * (unsigned int)v19 + 8) !=
          *(unsigned __int16*)(v14[4] + 2LL * (unsigned int)v19 + 8)) {
        v20 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v20 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = 0;
        v21 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v21 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = v9;
        v22 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v22 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = v10;
        result = GameRoutine_65f3d0(
            a2, *(_QWORD*)(*(_QWORD*)(*v18 + 64) +
                           8LL * *(unsigned __int16*)(v14[4] + 2 * v19 + 8)));
        ++v15;
      }
      if (*(unsigned __int16*)(v14[8] + 2 * v19 + 8) !=
          *(unsigned __int16*)(v14[5] + 2 * v19 + 8)) {
        v23 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v23 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = 1;
        v24 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v24 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = v9;
        v25 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v25 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = v10;
        result = GameRoutine_65f3d0(
            a2, *(_QWORD*)(*(_QWORD*)(*v18 + 64) +
                           8LL * *(unsigned __int16*)(v14[5] + 2 * v19 + 8)));
        ++v15;
      }
      if (v16 == ++v9) {
        v9 = v47;
        v17 += 32;
        v26 = v10++ == v46;
        if (v26) {
          break;
        }
      }
    }
    if (v15 > 0) {
      v27 = *(_QWORD*)(a2 + 32);
      v28 = *(_QWORD*)(a2 + 40);
      v29 = ((v28 - v27) << 7) - 1;
      if (v28 == v27) {
        v29 = 0;
      }
      v30 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
      if (v29 == v30) {
        result = GameRoutine_660f80(a2 + 24);
        v27 = *(_QWORD*)(a2 + 32);
        v30 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
      }
      *(_DWORD*)(*(_QWORD*)(v27 + 8 * (v30 >> 10)) + 4 * (v30 & 0x3FF)) =
          *(_DWORD*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v44;
      ++*(_QWORD*)(a2 + 64);
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v45) = v15;
      v31 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v31 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = BYTE1(v15);
      v33 = *(_QWORD*)(a2 + 56);
      v32 = *(_QWORD*)(a2 + 64);
      v35 = *(_QWORD*)(a2 + 32);
      v34 = *(_QWORD*)(a2 + 40);
      v26 = v34 == v35;
      v36 = v32 - 1 + v33;
      v37 = v36 >> 10;
      v38 = v36 & 0x3FF;
      v39 = ((v34 - v35) << 7) - 1;
      v40 = *(_QWORD*)(v35 + 8 * v37);
      if (v26) {
        v39 = 0;
      }
      v41 = *(_DWORD*)(v40 + 4 * v38);
      *(_QWORD*)(a2 + 64) = v32 - 1;
      *(_DWORD*)(a2 + 20) = v41;
      if ((unsigned __int64)(v39 - (v32 + v33) + 1) >= 0x800) {
        v42 = *(_QWORD*)(v34 - 8);
        if (v42 != 0) {
          v43 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v43 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v42);
          v34 = *(_QWORD*)(a2 + 40);
        }
        *(_QWORD*)(a2 + 40) = v34 - 8;
      }
    }
  }
  return result;
}

__int64 Image_Unknown7(unsigned __int8* a1, __int64 a2, int a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  bool v13;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  _QWORD* v21;

  result = (*(__int64 (**)(unsigned __int8*))(*(_QWORD*)a1 + 40LL))(a1);
  if (a3 == (_DWORD)result) {
    v7 = *(int*)(a2 + 20);
    v8 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v7 + 1;
    v9 = *(unsigned __int8*)(v8 + v7);
    *(_DWORD*)(a2 + 20) = v7 + 2;
    v10 = *(unsigned __int8*)(v8 + v7 + 1);
    *(_DWORD*)(a2 + 20) = v7 + 3;
    v11 = *(unsigned __int8*)(v8 + v7 + 2);
    *(_DWORD*)(a2 + 20) = v7 + 4;
    v12 = v11 | (*(unsigned __int8*)(v8 + v7 + 3) << 8);
    v13 = a1[18] == v9 && a1[19] == v10;
    if (v13 && v12 != 0) {
      do {
        v15 = *(int*)(a2 + 20);
        v16 = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(a2 + 20) = v15 + 1;
        v17 = *(unsigned __int8*)(v16 + v15);
        *(_DWORD*)(a2 + 20) = v15 + 2;
        v18 = *(unsigned __int8*)(v16 + v15 + 1);
        *(_DWORD*)(a2 + 20) = v15 + 3;
        v19 = *(unsigned __int8*)(v16 + v15 + 2);
        result = GameRoutine_72ca20(a2);
        if (result != 0) {
          v20 = v18 + 32 * v19;
          v21 = a1 + 32;
          if (v20 >= 0x400) {
            v20 = 0;
          }
          if (v17 != 0) {
            v21 = a1 + 40;
          }
          *(_WORD*)(*v21 + 2LL * v20 + 8) = *(_WORD*)(result + 16);
        }
        --v12;
      } while (v12 != 0);
    }
  }
  return result;
}

#pragma GCC visibility pop
