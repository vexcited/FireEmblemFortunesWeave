#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_GameRecord_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GameRecord_Destructor(_QWORD* a1);
__int64 GameRecord_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_99c720(char*, __int64);
__int64 GameRoutine_99d110(char*, __int64);
__int64 GameRoutine_9a0e40(_QWORD, _QWORD);
__int64 GameRoutine_9a10e0(_QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString32(_QWORD);
__int64 std___1___next_prime(_QWORD);
extern __int64 (*game_UnitEdit_vtable[])();
extern __int64* GameData_212dea8;
__int64 GameRecord_99d540(__int64 result);
_QWORD* GameRecord_99d840(_QWORD* result, unsigned __int8* a2);
_QWORD* GameRecord_99e080(_QWORD* result, int a2, __int64 a3);
__int64 GameRecord_99e460(__int64 a1, __int64 a2);
__int64 GameRoutine_6e5c80(_QWORD);
__int64 GameRoutine_6e5dc0(_QWORD);
__int64 GameRoutine_71de40(_QWORD);
__int64 GameRoutine_8f57c0(_QWORD);
__int64 GameRoutine_97b9e0(_QWORD, _QWORD);
__int64 GameRoutine_99cb20(_QWORD);
__int64 GameRoutine_99cc60(_QWORD);
__int64 GameRoutine_99cda0(_QWORD);
__int64 GameRoutine_9a10e0_alt1(_QWORD, _QWORD) __asm__("GameRoutine_9a10e0");
__int64 fw_text_String_CopyTerminated_alt1(_QWORD) __asm__(
    "fw_text_String_CopyTerminated");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 GameData_21c9b28;
extern __int64 GameData_21c9ef0;
extern __int64 fw_memory_g_heap_manager;
__int64 GameRecord_99e5e0(__int64 a1, __int64* a2);

__int64 GameRecord_Destructor(_QWORD* a1)
{
  __int64 result;

  result = a1[1];
  *a1 = game_GameRecord_vtable;
  a1[1] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 GameRecord_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  v2 = a1[1];
  *a1 = game_GameRecord_vtable;
  a1[1] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

__int64 GameRecord_99d540(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  char v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;

  v1 = *(_QWORD*)(result + 8);
  *(_WORD*)(v1 + 8) = -1;
  v2 = *(_QWORD*)(v1 + 16);
  v3 = *(_QWORD*)(v1 + 24);
  v4 = fw_memory_g_heap_manager_ptr;
  if (v2 != v3) {
    v5 = GameData_212dea8 + 2;
    do {
      v6 = *(_BYTE*)(v3 - 40);
      *(_QWORD*)(v3 - 48) = v5;
      if ((v6 & 1) != 0 && *(_QWORD*)(v3 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7);
      }
      v3 -= 96;
    } while (v3 != v2);
  }
  v8 = *(_QWORD*)(v1 + 64);
  *(_QWORD*)(v1 + 24) = v2;
  if (v8 != 0) {
    v9 = *(_QWORD**)(v1 + 56);
    if (v9 != nullptr) {
      do {
        v10 = (_QWORD*)*v9;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v11);
        v9 = v10;
      } while (v10 != nullptr);
    }
    v12 = *(_QWORD*)(v1 + 48);
    *(_QWORD*)(v1 + 56) = 0;
    if (v12 != 0) {
      v13 = v12 & 7;
      if (v12 >= 8) {
        v15 = v12 & 0xFFFFFFFFFFFFFFF8LL;
        v14 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v14) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v14 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v14 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v14 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v14 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v14 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v14 + 48) = 0;
          v16 = *(_QWORD*)(v1 + 40) + 8 * v14;
          v14 += 8;
          *(_QWORD*)(v16 + 56) = 0;
        } while (v15 != v14);
      }
      else {
        v14 = 0;
      }
      if (v13 != 0) {
        v17 = 8 * v14;
        do {
          --v13;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + v17) = 0;
          v17 += 8;
        } while (v13 != 0);
      }
    }
    *(_QWORD*)(v1 + 64) = 0;
  }
  return result;
}

_QWORD* GameRecord_99d840(_QWORD* result, unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int8* v23;
  int v24;
  unsigned __int8* v25;
  bool v26;
  unsigned __int64 v27;
  unsigned __int8* v28;
  unsigned __int64 v29;
  int v30;

  v2 = *((_QWORD*)a2 + 2);
  if (v2 != 0 && (*(_BYTE*)(v2 + 185) & 4) != 0) {
    v3 = result[2];
    v4 = result[3];
    if (v4 != v3) {
      v5 = (_QWORD*)(v3 + 16);
      v6 = 0;
      while (*v5 != v2 || *((unsigned __int8*)v5 - 16) != *a2) {
        ++v6;
        v5 += 12;
        if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v4 - v3) >> 5) == v6) {
          goto LABEL_13;
        }
      }
      if ((v6 & 0x8000000000000000LL) == 0) {
        v7 = v3 + 96LL * (unsigned int)v6;
        v8 = *((_QWORD*)a2 + 1);
        *(_QWORD*)v7 = *(_QWORD*)a2;
        *(_QWORD*)(v7 + 8) = v8;
        v9 = *((_QWORD*)a2 + 2);
        v10 = *((_QWORD*)a2 + 3);
        v11 = *((_QWORD*)a2 + 5);
        *(_QWORD*)(v7 + 32) = *((_QWORD*)a2 + 4);
        *(_QWORD*)(v7 + 40) = v11;
        *(_QWORD*)(v7 + 16) = v9;
        *(_QWORD*)(v7 + 24) = v10;
        if ((unsigned __int8*)v7 != a2) {
          v12 = a2[56];
          if ((*(_BYTE*)(v7 + 56) & 1) != 0) {
            v25 = a2 + 57;
            v26 = (v12 & 1) == 0;
            v27 = v12 >> 1;
            v28 = a2;
            if (v26) {
              v29 = v27;
            }
            else {
              v25 = *((unsigned __int8**)a2 + 9);
              v29 = *((_QWORD*)a2 + 8);
            }
            result = (_QWORD*)SpineModel_64dde0(v7 + 56, v25, v29);
          }
          else {
            if ((v12 & 1) == 0) {
              v13 = *((_QWORD*)a2 + 7);
              v14 = *((_QWORD*)a2 + 9);
              *(_QWORD*)(v7 + 64) = *((_QWORD*)a2 + 8);
              *(_QWORD*)(v7 + 72) = v14;
              *(_QWORD*)(v7 + 56) = v13;
              goto LABEL_26;
            }
            v28 = a2;
            result = (_QWORD*)GameRoutine_64df20(v7 + 56, *((_QWORD*)a2 + 9),
                                                 *((_QWORD*)a2 + 8));
          }
          a2 = v28;
        }
      LABEL_26:
        v30 = *((_DWORD*)a2 + 20);
        *(_BYTE*)(v7 + 84) = a2[84];
        *(_DWORD*)(v7 + 80) = v30;
        *(_WORD*)(v7 + 88) = *((_WORD*)a2 + 44);
        return result;
      }
    }
  LABEL_13:
    if (v4 >= result[4]) {
      v21 = result;
      result = (_QWORD*)GameRoutine_9a10e0(result + 2);
      v21[3] = result;
    }
    else {
      v15 = *((_QWORD*)a2 + 1);
      *(_QWORD*)v4 = *(_QWORD*)a2;
      *(_QWORD*)(v4 + 8) = v15;
      v16 = *((_QWORD*)a2 + 2);
      v17 = *((_QWORD*)a2 + 3);
      v18 = *((_QWORD*)a2 + 5);
      *(_QWORD*)(v4 + 32) = *((_QWORD*)a2 + 4);
      *(_QWORD*)(v4 + 40) = v18;
      *(_QWORD*)(v4 + 16) = v16;
      *(_QWORD*)(v4 + 24) = v17;
      *(_QWORD*)(v4 + 48) = game_UnitEdit_vtable;
      if ((a2[56] & 1) != 0) {
        v22 = result;
        v23 = a2;
        fw_text_String_CopyTerminated(v4 + 56, *((_QWORD*)a2 + 9),
                                      *((_QWORD*)a2 + 8));
        result = v22;
        a2 = v23;
      }
      else {
        v19 = *((_QWORD*)a2 + 7);
        v20 = *((_QWORD*)a2 + 9);
        *(_QWORD*)(v4 + 64) = *((_QWORD*)a2 + 8);
        *(_QWORD*)(v4 + 72) = v20;
        *(_QWORD*)(v4 + 56) = v19;
      }
      v24 = *((_DWORD*)a2 + 20);
      *(_BYTE*)(v4 + 84) = a2[84];
      *(_DWORD*)(v4 + 80) = v24;
      *(_WORD*)(v4 + 88) = *((_WORD*)a2 + 44);
      result[3] = v4 + 96;
    }
  }
  return result;
}

_QWORD* GameRecord_99e080(_QWORD* result, int a2, __int64 a3)
{
  unsigned __int64 v3;
  __int64** v4;
  __int64* v5;
  float* v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64 v26;
  float v27;
  _QWORD* v28;
  __int64* v29;
  __int64* v30;
  __int64* v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  float v35;
  float v36;
  _BOOL8 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;

  v4 = *(__int64***)(a3 + 16);
  if (v4 != nullptr) {
    v5 = result + 7;
    v7 = (float*)result;
    v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (a2 != *((unsigned __int8*)v4 + 25)) {
    LABEL_7:
      v4 = (__int64**)*v4;
      if (v4 == nullptr) {
        return result;
      }
    }
    v11 = *((_QWORD*)v7 + 6);
    v12 = (unsigned __int64)v4[2];
    if (v11 == 0 || *((_QWORD*)v7 + 8) == 0) {
    LABEL_14:
      if (v11 == 0) {
      LABEL_59:
        result = (_QWORD*)fw_memory_HeapManager_Allocate(*v8, 72, 16, 0);
        *result = 0;
        result[1] = v12;
        v27 = v7[18];
        v28 = result;
        v30 = v4[3];
        v29 = v4[4];
        result[2] = v4[2];
        result[3] = v30;
        result[4] = v29;
        v31 = v4[8];
        v33 = v4[5];
        v32 = v4[6];
        result[7] = v4[7];
        result[8] = v31;
        v34 = *((_QWORD*)v7 + 8);
        result[5] = v33;
        result[6] = v32;
        v35 = (float)(unsigned __int64)(v34 + 1);
        if (v11 == 0 || (float)(v27 * (float)v11) < v35) {
          v36 = v35 / v27;
          v37 = (v11 & (v11 - 1)) != 0;
          if (v11 < 3) {
            v37 = true;
          }
          v38 = v37 | (2 * v11);
          v39 = vcvtps_u64_f32(v36);
          if (v38 <= v39) {
            v40 = v39;
          }
          else {
            v40 = v38;
          }
          if (v40 == 1) {
            v40 = 2;
          }
          else if ((v40 & (v40 - 1)) != 0) {
            result = (_QWORD*)std___1___next_prime(v40);
            v11 = *((_QWORD*)v7 + 6);
            v40 = (unsigned __int64)result;
          }
          if (v40 > v11) {
            goto LABEL_71;
          }
          if (v40 < v11) {
            result = (_QWORD*)vcvtps_u64_f32(
                (float)*((unsigned __int64*)v7 + 8) / v7[18]);
            if (v11 < 3 || (v11 & (v11 - 1)) != 0) {
              result = (_QWORD*)std___1___next_prime(result);
            }
            else {
              v41 = 1LL << -(char)__clz((unsigned __int64)result - 1);
              if ((unsigned __int64)result >= 2) {
                result = (_QWORD*)v41;
              }
            }
            if (v40 <= (unsigned __int64)result) {
              v40 = (unsigned __int64)result;
            }
            if (v40 < v11) {
            LABEL_71:
              result = (_QWORD*)GameRoutine_9a0e40(v7 + 10, v40);
            }
          }
          v11 = *((_QWORD*)v7 + 6);
          if ((v11 & (v11 - 1)) != 0) {
            if (v12 >= v11) {
              v3 = v12 % v11;
            }
            else {
              v3 = v12;
            }
          }
          else {
            v3 = (v11 - 1) & v12;
          }
        }
        v9 = *((_QWORD*)v7 + 5);
        v10 = *(_QWORD**)(v9 + 8 * v3);
        if (v10 != nullptr) {
          *v28 = *v10;
          *v10 = v28;
        }
        else {
          v16 = *v5;
          *v5 = (__int64)v28;
          *v28 = v16;
          *(_QWORD*)(v9 + 8 * v3) = v5;
          if (*v28 != 0) {
            v17 = *(_QWORD*)(*v28 + 8LL);
            if ((v11 & (v11 - 1)) != 0) {
              if (v17 >= v11) {
                v17 %= v11;
              }
            }
            else {
              v17 &= v11 - 1;
            }
            *(_QWORD*)(*((_QWORD*)v7 + 5) + 8 * v17) = v28;
          }
        }
        ++*((_QWORD*)v7 + 8);
        goto LABEL_7;
      }
    }
    else {
      v14 = v11 - 1;
      if ((v11 & (v11 - 1)) != 0) {
        v15 = (unsigned __int64)v4[2];
        if (v12 >= v11) {
          v15 = v12 % v11;
        }
      }
      else {
        v15 = v12 & v14;
      }
      v18 = *(_QWORD**)(*((_QWORD*)v7 + 5) + 8 * v15);
      if (v18 != nullptr) {
        v19 = (_QWORD*)*v18;
        if (v19 != nullptr) {
          if ((v11 & v14) == 0) {
            while (1) {
              v22 = v19[1];
              if (v12 == v22) {
                if (v19[2] == v12) {
                  goto LABEL_7;
                }
              }
              else if ((v22 & v14) != v15) {
                goto LABEL_14;
              }
              v19 = (_QWORD*)*v19;
              if (v19 == nullptr) {
                goto LABEL_14;
              }
            }
          }
          while (1) {
            v20 = v19[1];
            if (v12 == v20) {
              if (v19[2] == v12) {
                goto LABEL_7;
              }
            }
            else {
              if (v20 >= v11) {
                v20 %= v11;
              }
              if (v20 != v15) {
                goto LABEL_14;
              }
            }
            v19 = (_QWORD*)*v19;
            if (v19 == nullptr) {
              goto LABEL_14;
            }
          }
        }
      }
    }
    v21 = v11 - 1;
    if ((v11 & (v11 - 1)) != 0) {
      v3 = (unsigned __int64)v4[2];
      if (v12 >= v11) {
        v3 = v12 % v11;
      }
    }
    else {
      v3 = v21 & v12;
    }
    v23 = *(_QWORD**)(*((_QWORD*)v7 + 5) + 8 * v3);
    if (v23 != nullptr) {
      v24 = (_QWORD*)*v23;
      if (v24 != nullptr) {
        if ((v11 & v21) == 0) {
          while (1) {
            v26 = v24[1];
            if (v26 == v12) {
              if (v24[2] == v12) {
                goto LABEL_7;
              }
            }
            else if ((v26 & v21) != v3) {
              goto LABEL_59;
            }
            v24 = (_QWORD*)*v24;
            if (v24 == nullptr) {
              goto LABEL_59;
            }
          }
        }
        while (1) {
          v25 = v24[1];
          if (v25 == v12) {
            if (v24[2] == v12) {
              goto LABEL_7;
            }
          }
          else {
            if (v25 >= v11) {
              v25 %= v11;
            }
            if (v25 != v3) {
              goto LABEL_59;
            }
          }
          v24 = (_QWORD*)*v24;
          if (v24 == nullptr) {
            goto LABEL_59;
          }
        }
      }
    }
    goto LABEL_59;
  }
  return result;
}

__int64 GameRecord_99e460(__int64 a1, __int64 a2)
{
  int v4;
  __int64 (**v5)(__int64, int*);
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  char* i;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* j;
  int v19;

  v4 = game_HashString32("GameRecord");
  v5 = *(__int64 (***)(__int64, int*))a2;
  v19 = v4;
  if (((*v5)(a2, &v19) & 1) != 0) {
    v6 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v6 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = 7;
    v7 = *(int*)(a2 + 20);
    LOBYTE(v6) = *(_BYTE*)(a1 + 8);
    *(_DWORD*)(a2 + 20) = v7 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v6;
    v8 = *(int*)(a2 + 20);
    LOBYTE(v6) = *(_BYTE*)(a1 + 9);
    *(_DWORD*)(a2 + 20) = v8 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v6;
    v9 = 0xAAAAAAAAAAAAAAABLL *
         ((__int64)(*(_QWORD*)(a1 + 24) - *(_QWORD*)(a1 + 16)) >> 5);
    v10 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v10 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = v9;
    v11 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = BYTE1(v9);
    v12 = *(char**)(a1 + 16);
    for (i = *(char**)(a1 + 24); v12 != i; v12 += 96) {
      GameRoutine_99c720(v12, a2);
    }
    v14 = *(int*)(a2 + 20);
    v15 = *(_QWORD*)(a1 + 64);
    *(_DWORD*)(a2 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = v15;
    v16 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v16 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE1(v15);
    for (j = *(char**)(a1 + 56); j != nullptr; j = *(char**)j) {
      GameRoutine_99d110(j + 24, a2);
    }
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
}

__int64 GameRecord_99e5e0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  int v28;
  int v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int16 v36;
  __int16 v37;
  __int64 v38;
  __int64 v39;
  __int16 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  int v54;
  __int64 v55;
  __int64 v56;
  char v57;
  char v58;
  __int16 v59;
  char v60;
  int v61;
  __int64 v62;
  int v63;
  int v64;
  int v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64** v71;
  __int64* v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v90;
  unsigned __int64 v91;
  _QWORD* v92;
  _QWORD* v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  _QWORD* v100;
  _QWORD* v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  __int16 v105;
  __int64 v106;
  float v107;
  __int64 v108;
  float v109;
  float v110;
  _BOOL8 v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  __int64 primeEm;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64* v119;
  __int64 v120;
  unsigned __int64 v121;
  __int64* v123;
  unsigned __int64 v124;
  int v125;
  int v126;
  __int64 v127;
  __int64 v128;
  __int16 v129;
  char v130;
  char v131;
  char v132;
  char v133;
  unsigned int v134;
  unsigned __int64* v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64* v142;
  __int64 v143;
  __int64 v144;
  _QWORD v145[2];
  __int16 v146;

  v2 = a1 + 16;
  v3 = *(_QWORD*)(a1 + 16);
  *(_WORD*)(a1 + 8) = -1;
  v6 = *(_QWORD*)(a1 + 24);
  v7 = fw_memory_g_heap_manager_ptr;
  if (v3 != v6) {
    v8 = GameData_212dea8 + 2;
    do {
      v9 = *(_BYTE*)(v6 - 40);
      *(_QWORD*)(v6 - 48) = v8;
      if ((v9 & 1) != 0) {
        v10 = *(_QWORD*)(v6 - 24);
        if (v10 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v11, v10);
        }
      }
      v6 -= 96;
    } while (v6 != v3);
  }
  v12 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 24) = v3;
  if (v12 != 0) {
    v13 = *(_QWORD**)(a1 + 56);
    if (v13 != nullptr) {
      do {
        v14 = (_QWORD*)*v13;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v15, v13);
        v13 = v14;
      } while (v14 != nullptr);
    }
    v16 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)(a1 + 56) = 0;
    if (v16 != 0) {
      v17 = v16 & 7;
      if (v16 >= 8) {
        v19 = v16 & 0xFFFFFFFFFFFFFFF8LL;
        v18 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v18) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v18 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v18 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v18 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v18 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v18 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v18 + 48) = 0;
          v20 = *(_QWORD*)(a1 + 40) + 8 * v18;
          v18 += 8;
          *(_QWORD*)(v20 + 56) = 0;
        } while (v19 != v18);
      }
      else {
        v18 = 0;
      }
      if (v17 != 0) {
        v21 = 8 * v18;
        do {
          --v17;
          *(_QWORD*)(*(_QWORD*)(a1 + 40) + v21) = 0;
          v21 += 8;
        } while (v17 != 0);
      }
    }
    *(_QWORD*)(a1 + 64) = 0;
  }
  v22 = game_HashString32("GameRecord");
  v23 = *a2;
  LODWORD(v136) = v22;
  if (((*(__int64 (**)(__int64*, __int64*))(v23 + 16))(a2, &v136) & 1) != 0) {
    v24 = *((int*)a2 + 5);
    v25 = a2[1];
    v26 = v24 + 1;
    *((_DWORD*)a2 + 5) = v24 + 1;
    v27 = *(unsigned __int8*)(v25 + v24);
    if (v27 >= 2) {
      if (v27 >= 5) {
        *((_DWORD*)a2 + 5) = v24 + 2;
        *(_BYTE*)(a1 + 8) = *(_BYTE*)(v25 + v26);
        v26 = *((int*)a2 + 5);
        *((_DWORD*)a2 + 5) = v26 + 1;
        *(_BYTE*)(a1 + 9) = *(_BYTE*)(a2[1] + v26);
        LODWORD(v26) = *((_DWORD*)a2 + 5);
        v25 = a2[1];
      }
      v134 = v27;
      *((_DWORD*)a2 + 5) = v26 + 1;
      v28 = *(unsigned __int8*)(v25 + (int)v26);
      *((_DWORD*)a2 + 5) = v26 + 2;
      v29 = v28 | (*(unsigned __int8*)(v25 + (int)v26 + 1LL) << 8);
      if (v29 != 0) {
        v30 = GameData_212dea8;
        v31 = GameData_212dea8 + 2;
        do {
          v32 = *((int*)a2 + 5);
          v33 = a2[1];
          v142 = v31;
          v138 = 0;
          v139 = 0;
          v140 = 0;
          v141 = 0;
          v146 = 0;
          v136 = 0;
          LOWORD(v137) = 0;
          v143 = 0;
          v144 = 0;
          v145[0] = 0;
          *(_QWORD*)((char*)v145 + 5) = 0;
          *((_DWORD*)a2 + 5) = v32 + 1;
          LOBYTE(v136) = *(_BYTE*)(v33 + v32);
          v34 = v32 + 2;
          *((_DWORD*)a2 + 5) = v32 + 2;
          v35 = v32 + 3;
          if (v27 > 3) {
            BYTE1(v136) = *(_BYTE*)(v33 + v32 + 1);
            *((_DWORD*)a2 + 5) = v35;
            BYTE2(v136) = *(_BYTE*)(v33 + v34);
            *((_DWORD*)a2 + 5) = v32 + 4;
            BYTE3(v136) = *(_BYTE*)(v33 + v35);
            *((_DWORD*)a2 + 5) = v32 + 5;
            v37 = *(unsigned __int8*)(v33 + v32 + 4);
            *((_DWORD*)a2 + 5) = v32 + 6;
            WORD2(v136) = v37 | (*(unsigned __int8*)(v33 + v32 + 5) << 8);
            v138 = GameRoutine_99cb20(a2);
            v139 = GameRoutine_6e5c80(a2);
            v140 = GameRoutine_99cc60(a2);
            v141 = GameRoutine_99cda0(a2);
            if (v27 >= 7) {
              GameRoutine_97b9e0(&v142, a2);
            }
          }
          else {
            BYTE3(v136) = *(_BYTE*)(v33 + v32 + 1);
            *((_DWORD*)a2 + 5) = v35;
            v36 = *(unsigned __int8*)(v33 + v34);
            *((_DWORD*)a2 + 5) = v32 + 4;
            WORD2(v136) = v36 | (*(unsigned __int8*)(v33 + v35) << 8);
            v138 = GameRoutine_71de40(a2);
            v139 = GameRoutine_6e5dc0(a2);
          }
          v38 = *((int*)a2 + 5);
          v39 = a2[1];
          *((_DWORD*)a2 + 5) = v38 + 1;
          v40 = *(unsigned __int8*)(v39 + v38);
          *((_DWORD*)a2 + 5) = v38 + 2;
          HIWORD(v136) = v40 | (*(unsigned __int8*)(v39 + v38 + 1) << 8);
          *((_DWORD*)a2 + 5) = v38 + 3;
          LOBYTE(v137) = *(_BYTE*)(v39 + v38 + 2);
          *((_DWORD*)a2 + 5) = v38 + 4;
          BYTE1(v137) = *(_BYTE*)(v39 + v38 + 3);
          *((_DWORD*)a2 + 5) = v38 + 5;
          LOBYTE(v146) = *(_BYTE*)(v39 + v38 + 4);
          *((_DWORD*)a2 + 5) = v38 + 6;
          HIBYTE(v146) = *(_BYTE*)(v39 + v38 + 5);
          if (v27 <= 3) {
            *((_DWORD*)a2 + 5) = v38 + 16;
          }
          if (v138 != 0) {
            v41 = *(_QWORD*)(a1 + 24);
            if (v41 >= *(_QWORD*)(a1 + 32)) {
              v48 = GameRoutine_9a10e0_alt1(v2, &v136);
            }
            else {
              v42 = v137;
              *(_QWORD*)v41 = v136;
              *(_QWORD*)(v41 + 8) = v42;
              v43 = v139;
              v44 = v140;
              v45 = v141;
              *(_QWORD*)(v41 + 16) = v138;
              *(_QWORD*)(v41 + 24) = v43;
              *(_QWORD*)(v41 + 32) = v44;
              *(_QWORD*)(v41 + 40) = v45;
              *(_QWORD*)(v41 + 48) = v30 + 2;
              if ((v143 & 1) != 0) {
                fw_text_String_CopyTerminated_alt1(v41 + 56);
              }
              else {
                v46 = v143;
                v47 = v145[0];
                *(_QWORD*)(v41 + 64) = v144;
                *(_QWORD*)(v41 + 72) = v47;
                *(_QWORD*)(v41 + 56) = v46;
              }
              v49 = v145[1];
              v48 = v41 + 96;
              *(_BYTE*)(v41 + 84) = BYTE4(v145[1]);
              *(_DWORD*)(v41 + 80) = v49;
              *(_WORD*)(v41 + 88) = v146;
            }
            v27 = v134;
            *(_QWORD*)(a1 + 24) = v48;
          }
          v142 = v30 + 2;
          if ((v143 & 1) != 0 && v145[0] != 0) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v50 = 128;
            }
            else {
              v50 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v50,
                                               v145[0]);
          }
          --v29;
        } while (v29 != 0);
      }
      if (v27 > 4) {
        v51 = *((int*)a2 + 5);
        v52 = a2[1];
        *((_DWORD*)a2 + 5) = v51 + 1;
        v53 = *(unsigned __int8*)(v52 + v51);
        *((_DWORD*)a2 + 5) = v51 + 2;
        v125 = v53 | (*(unsigned __int8*)(v52 + v51 + 1) << 8);
        if (v125 != 0) {
          v54 = 0;
          v123 = (__int64*)(a1 + 56);
          do {
            v55 = *((int*)a2 + 5);
            v56 = a2[1];
            *((_DWORD*)a2 + 5) = v55 + 1;
            v57 = *(_BYTE*)(v56 + v55);
            *((_DWORD*)a2 + 5) = v55 + 2;
            v58 = *(_BYTE*)(v56 + v55 + 1);
            *((_DWORD*)a2 + 5) = v55 + 3;
            v133 = *(_BYTE*)(v56 + v55 + 2);
            *((_DWORD*)a2 + 5) = v55 + 4;
            v129 = *(unsigned __int8*)(v56 + v55 + 3);
            *((_DWORD*)a2 + 5) = v55 + 5;
            v59 = *(unsigned __int8*)(v56 + v55 + 4);
            *((_DWORD*)a2 + 5) = v55 + 6;
            v60 = *(_BYTE*)(v56 + v55 + 5);
            *((_DWORD*)a2 + 5) = v55 + 7;
            v132 = v60;
            v131 = *(_BYTE*)(v56 + v55 + 6);
            *((_DWORD*)a2 + 5) = v55 + 8;
            v61 = *(unsigned __int8*)(v56 + v55 + 7);
            v130 = *(_BYTE*)(v56 + v55 + 7);
            if (v61 != 2) {
              if (v61 == 1) {
                v62 = GameRoutine_99cb20(a2);
                goto LABEL_88;
              }
              if (*(_BYTE*)(v56 + v55 + 7) == 0) {
                v62 = GameRoutine_8f57c0(a2);
                goto LABEL_88;
              }
            LABEL_87:
              v62 = 0;
              goto LABEL_88;
            }
            *((_DWORD*)a2 + 5) = v55 + 9;
            v63 = *(unsigned __int8*)(v56 + v55 + 8);
            *((_DWORD*)a2 + 5) = v55 + 10;
            v64 = v63 | (*(unsigned __int8*)(v56 + v55 + 9) << 8);
            *((_DWORD*)a2 + 5) = v55 + 11;
            v65 = *(unsigned __int8*)(v56 + v55 + 10);
            *((_DWORD*)a2 + 5) = v55 + 12;
            v66 =
                v64 | (v65 << 16) | (*(unsigned __int8*)(v56 + v55 + 11) << 24);
            if ((_DWORD)v66 == 0) {
              goto LABEL_87;
            }
            v67 = *(_QWORD*)(GameData_21c9ef0 + 136);
            if (v67 == 0 || *(_QWORD*)(GameData_21c9ef0 + 152) == 0) {
              goto LABEL_87;
            }
            v69 = v67 - 1;
            if ((v67 & (v67 - 1)) != 0) {
              v70 = v66;
              if (v67 <= v66) {
                v70 = (unsigned int)v66 % (unsigned int)v67;
              }
            }
            else {
              v70 = ((_DWORD)v67 - 1) & (unsigned int)v66;
            }
            v71 = *(__int64***)(*(_QWORD*)(GameData_21c9ef0 + 128) + 8 * v70);
            if (v71 == nullptr) {
              goto LABEL_87;
            }
            v72 = *v71;
            if (v72 == nullptr) {
              goto LABEL_87;
            }
            if ((v67 & v69) == 0) {
              while (1) {
                v74 = v72[1];
                if (v74 == v66) {
                  if (*((_DWORD*)v72 + 4) == (_DWORD)v66) {
                    goto LABEL_175;
                  }
                }
                else if ((v74 & v69) != v70) {
                  goto LABEL_87;
                }
                v72 = (__int64*)*v72;
                v62 = 0;
                if (v72 == nullptr) {
                  goto LABEL_88;
                }
              }
            }
            while (1) {
              v73 = v72[1];
              if (v73 == v66) {
                break;
              }
              if (v73 >= v67) {
                v73 %= v67;
              }
              if (v73 != v70) {
                goto LABEL_87;
              }
            LABEL_77:
              v72 = (__int64*)*v72;
              v62 = 0;
              if (v72 == nullptr) {
                goto LABEL_88;
              }
            }
            if (*((_DWORD*)v72 + 4) != (_DWORD)v66) {
              goto LABEL_77;
            }
          LABEL_175:
            v62 = v72[3];
          LABEL_88:
            v128 = v62;
            v75 = GameRoutine_6e5c80(a2);
            v127 = GameRoutine_99cc60(a2);
            v76 = GameRoutine_99cda0(a2);
            v135 = (unsigned __int64*)v75;
            if (v27 == 5) {
              v77 = *(_QWORD*)(v75 + 336);
              goto LABEL_118;
            }
            v78 = *((int*)a2 + 5);
            v79 = a2[1];
            *((_DWORD*)a2 + 5) = v78 + 1;
            v80 = *(unsigned __int8*)(v79 + v78);
            *((_DWORD*)a2 + 5) = v78 + 2;
            v81 = *(unsigned __int8*)(v79 + v78 + 1);
            *((_DWORD*)a2 + 5) = v78 + 3;
            v82 = *(unsigned __int8*)(v79 + v78 + 2);
            *((_DWORD*)a2 + 5) = v78 + 4;
            v83 = *(unsigned __int8*)(v79 + v78 + 3);
            *((_DWORD*)a2 + 5) = v78 + 5;
            v84 = *(unsigned __int8*)(v79 + v78 + 4);
            *((_DWORD*)a2 + 5) = v78 + 6;
            v85 = *(unsigned __int8*)(v79 + v78 + 5);
            *((_DWORD*)a2 + 5) = v78 + 7;
            v86 = *(unsigned __int8*)(v79 + v78 + 6);
            *((_DWORD*)a2 + 5) = v78 + 8;
            v87 = v80 | (v81 << 8) | (v82 << 16) | (v83 << 24) | (v84 << 32) |
                  (v85 << 40) | (v86 << 48) |
                  ((unsigned __int64)*(unsigned __int8*)(v79 + v78 + 7) << 56);
            if (v87 == 0) {
              goto LABEL_114;
            }
            v88 = *(_QWORD*)(GameData_21c9b28 + 96);
            if (v88 == 0 || *(_QWORD*)(GameData_21c9b28 + 112) == 0) {
              goto LABEL_114;
            }
            v90 = v88 - 1;
            if ((v88 & (v88 - 1)) != 0) {
              v91 = v87;
              if (v87 >= v88) {
                v91 = v87 % v88;
              }
            }
            else {
              v91 = v90 & v87;
            }
            v92 = *(_QWORD**)(*(_QWORD*)(GameData_21c9b28 + 88) + 8 * v91);
            if (v92 != nullptr && (v93 = (_QWORD*)*v92) != nullptr) {
              if ((v88 & v90) == 0) {
                while (1) {
                  v95 = v93[1];
                  if (v95 == v87) {
                    if (v93[2] == v87) {
                      goto LABEL_173;
                    }
                  }
                  else if ((v95 & v90) != v91) {
                    goto LABEL_114;
                  }
                  v93 = (_QWORD*)*v93;
                  v77 = 0;
                  if (v93 == nullptr) {
                    goto LABEL_117;
                  }
                }
              }
              do {
                v94 = v93[1];
                if (v94 == v87) {
                  if (v93[2] == v87) {
                  LABEL_173:
                    v77 = v93[3];
                    if (v75 != 0) {
                      goto LABEL_118;
                    }
                    goto LABEL_57;
                  }
                }
                else {
                  if (v94 >= v88) {
                    v94 %= v88;
                  }
                  if (v94 != v91) {
                    goto LABEL_114;
                  }
                }
                v93 = (_QWORD*)*v93;
              } while (v93 != nullptr);
              v77 = 0;
            LABEL_117:
              if (v75 == 0) {
                goto LABEL_57;
              }
            LABEL_118:
              v96 = *(_QWORD*)(a1 + 48);
              v97 = *v135;
              if (v96 != 0) {
                v98 = v96 - 1;
                if ((v96 & (v96 - 1)) != 0) {
                  v99 = *v135;
                  if (v97 >= v96) {
                    v99 = v97 % v96;
                  }
                }
                else {
                  v99 = v98 & v97;
                }
                v124 = v99;
                v100 = *(_QWORD**)(*(_QWORD*)(a1 + 40) + 8 * v99);
                if (v100 != nullptr) {
                  v101 = (_QWORD*)*v100;
                  if (v101 != nullptr) {
                    if ((v96 & v98) == 0) {
                      while (1) {
                        v103 = v101[1];
                        if (v103 == v97) {
                          if (v101[2] == v97) {
                            goto LABEL_57;
                          }
                        }
                        else if ((v103 & v98) != v99) {
                          goto LABEL_138;
                        }
                        v101 = (_QWORD*)*v101;
                        if (v101 == nullptr) {
                          goto LABEL_138;
                        }
                      }
                    }
                    do {
                      v102 = v101[1];
                      if (v102 == v97) {
                        if (v101[2] == v97) {
                          goto LABEL_57;
                        }
                      }
                      else {
                        if (v102 >= v96) {
                          v102 %= v96;
                        }
                        if (v102 != v99) {
                          break;
                        }
                      }
                      v101 = (_QWORD*)*v101;
                    } while (v101 != nullptr);
                  }
                }
              }
            LABEL_138:
              v126 = v54;
              v104 = v76;
              v105 = v129 | (v59 << 8);
              v106 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    72, 16, 0);
              v107 = *(float*)(a1 + 72);
              v108 = v106;
              *(_QWORD*)v106 = 0;
              *(_QWORD*)(v106 + 8) = v97;
              *(_QWORD*)(v106 + 16) = v97;
              *(_BYTE*)(v106 + 24) = v57;
              *(_BYTE*)(v106 + 25) = v58;
              *(_WORD*)(v106 + 28) = v105;
              *(_QWORD*)(v106 + 64) = v77;
              *(_BYTE*)(v106 + 26) = v133;
              *(_BYTE*)(v106 + 27) = v130;
              *(_BYTE*)(v106 + 30) = v132;
              *(_BYTE*)(v106 + 31) = v131;
              *(_QWORD*)(v106 + 32) = v128;
              *(_QWORD*)(v106 + 40) = v135;
              v109 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 64) + 1LL);
              *(_QWORD*)(v106 + 48) = v127;
              *(_QWORD*)(v106 + 56) = v104;
              if (v96 != 0 && (float)(v107 * (float)v96) >= v109) {
                v54 = v126;
                v97 = v124;
              }
              else {
                v110 = v109 / v107;
                v54 = v126;
                v111 = (v96 & (v96 - 1)) != 0;
                if (v96 < 3) {
                  v111 = true;
                }
                v112 = v111 | (2 * v96);
                v113 = vcvtps_u64_f32(v110);
                if (v112 <= v113) {
                  v114 = v113;
                }
                else {
                  v114 = v112;
                }
                if (v114 == 1) {
                  v114 = 2;
                }
                else if ((v114 & (v114 - 1)) != 0) {
                  primeEm = std___1___next_prime(v114);
                  v96 = *(_QWORD*)(a1 + 48);
                  v114 = primeEm;
                }
                if (v114 > v96) {
                  goto LABEL_151;
                }
                if (v114 < v96) {
                  v116 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 64) /
                                        *(float*)(a1 + 72));
                  if (v96 < 3 || (v96 & (v96 - 1)) != 0) {
                    v116 = std___1___next_prime(v116);
                  }
                  else {
                    v117 = 1LL << -(char)__clz(v116 - 1);
                    if (v116 >= 2) {
                      v116 = v117;
                    }
                  }
                  if (v114 <= v116) {
                    v114 = v116;
                  }
                  if (v114 < v96) {
                  LABEL_151:
                    GameRoutine_9a0e40(a1 + 40, v114);
                  }
                }
                v96 = *(_QWORD*)(a1 + 48);
                if ((v96 & (v96 - 1)) != 0) {
                  if (v97 >= v96) {
                    v97 %= v96;
                  }
                }
                else {
                  v97 &= v96 - 1;
                }
              }
              v118 = *(_QWORD*)(a1 + 40);
              v119 = *(__int64**)(v118 + 8 * v97);
              if (v119 != nullptr) {
                *(_QWORD*)v108 = *v119;
                *v119 = v108;
              }
              else {
                v120 = *v123;
                *v123 = v108;
                *(_QWORD*)v108 = v120;
                *(_QWORD*)(v118 + 8 * v97) = v123;
                if (*(_QWORD*)v108 != 0) {
                  v121 = *(_QWORD*)(*(_QWORD*)v108 + 8LL);
                  if ((v96 & (v96 - 1)) != 0) {
                    if (v121 >= v96) {
                      v121 %= v96;
                    }
                  }
                  else {
                    v121 &= v96 - 1;
                  }
                  *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v121) = v108;
                }
              }
              ++*(_QWORD*)(a1 + 64);
            }
            else {
            LABEL_114:
              v77 = 0;
              if (v75 != 0) {
                goto LABEL_118;
              }
            }
          LABEL_57:
            v27 = v134;
            ++v54;
          } while (v54 != v125);
        }
      }
    }
  }
  return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
}

#pragma GCC visibility pop
