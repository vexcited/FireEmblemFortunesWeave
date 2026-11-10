#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_21c9f20;
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
unsigned __int64 FastTravelManager_ee0380(__int64 a1);

unsigned __int64 FastTravelManager_ee0380(__int64 a1)
{
  unsigned __int64 v1;
  bool v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  char v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  char* v12;
  char* v13;
  char* v14;
  unsigned __int64 result;
  unsigned __int64 v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;

  v1 = *(unsigned __int8*)(GameData_21f3d10 + 40);
  v2 = (v1 & 1) == 0;
  v3 = v1 >> 1;
  if (v2) {
    v4 = v3;
  }
  else {
    v4 = *(_QWORD*)(GameData_21f3d10 + 48);
  }
  if (v2) {
    v5 = GameData_21f3d10 + 41;
  }
  else {
    v5 = *(_QWORD*)(GameData_21f3d10 + 56);
  }
  v6 = v4 + 3;
  if (v4 + 3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(a1);
  }
  if (v6 > 0x16) {
    if ((v6 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v6 | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10, 16, 0);
    v27 = v4 + 3;
    v28 = (char*)v9;
    v26 = v10 | 1;
    v8 = v10 | 1;
  }
  else {
    v8 = 2 * v6;
    v9 = 0;
    v27 = 0;
    v28 = nullptr;
    v26 = (unsigned __int8)(2 * v6);
  }
  v11 = (v8 & 1) == 0;
  if ((v8 & 1) != 0) {
    v12 = (char*)v9;
  }
  else {
    v12 = (char*)&v26 + 1;
  }
  v12[2] = 95;
  *(_WORD*)v12 = 21574;
  if (v11) {
    v13 = (char*)&v26 + 4;
  }
  else {
    v13 = (char*)(v9 + 3);
  }
  if (v4 != 0) {
    memmove(v13, v5, v4);
  }
  v13[v4] = 0;
  if ((v26 & 1) != 0) {
    v14 = v28;
  }
  else {
    v14 = (char*)&v26 + 1;
  }
  result = game_HashString(v14);
  if (result != 0) {
    v16 = *(_QWORD*)(GameData_21c9f20 + 96);
    if (v16 != 0 && *(_QWORD*)(GameData_21c9f20 + 112) != 0) {
      v18 = v16 - 1;
      if ((v16 & (v16 - 1)) != 0) {
        v19 = result;
        if (result >= v16) {
          v19 = result % v16;
        }
      }
      else {
        v19 = v18 & result;
      }
      v20 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f20 + 88) + 8 * v19);
      if (v20 != nullptr) {
        v21 = (_QWORD*)*v20;
        if (v21 != nullptr) {
          if ((v16 & v18) == 0) {
            while (1) {
              v24 = v21[1];
              if (v24 == result) {
                if (v21[2] == result) {
                  goto LABEL_56;
                }
              }
              else if ((v24 & v18) != v19) {
                goto LABEL_49;
              }
              v21 = (_QWORD*)*v21;
              v23 = 0;
              if (v21 == nullptr) {
                goto LABEL_50;
              }
            }
          }
          do {
            v22 = v21[1];
            if (v22 == result) {
              if (v21[2] == result) {
              LABEL_56:
                v23 = v21[3];
                goto LABEL_50;
              }
            }
            else {
              if (v22 >= v16) {
                v22 %= v16;
              }
              if (v22 != v19) {
                break;
              }
            }
            v21 = (_QWORD*)*v21;
          } while (v21 != nullptr);
        }
      }
    }
  }
LABEL_49:
  v23 = 0;
LABEL_50:
  *(_QWORD*)(a1 + 8) = v23;
  if ((v26 & 1) != 0 && v28 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v28);
  }
  return result;
}

#pragma GCC visibility pop
