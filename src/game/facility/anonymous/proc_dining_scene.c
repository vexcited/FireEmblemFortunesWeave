#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21f3d10;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void ProcDiningScene_92a210();
__attribute__((swiftcall)) void
ForceContinueBGMBinder_1487fc0(PSEUDO_X8, __int64, unsigned __int8);
__int64 GameRoutine_14877f0(__int64, __int64);
__int64 game_HashString(__int64 result);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1acee59;
extern __int64 GameData_21f4010;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 ProcDiningScene_StartFade();

void ProcDiningScene_92a210()
{
  if (GameData_21f3d10 != 0 && *(int*)(GameData_21f3d10 + 152) >= 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
}

unsigned __int64 ProcDiningScene_StartFade()
{
  unsigned __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 result;
  __int64 v11;
  char v12[16];
  char v13;
  unsigned __int64 v14;
  _BYTE v15[15];

  v0 = game_HashString((__int64)&GameData_1acee59);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4010 + 96);
    if (v1 != 0 && *(_QWORD*)(GameData_21f4010 + 112) != 0) {
      v3 = v1 - 1;
      if ((v1 & (v1 - 1)) != 0) {
        v4 = v0;
        if (v0 >= v1) {
          v4 = v0 % v1;
        }
      }
      else {
        v4 = v3 & v0;
      }
      v5 = *(_QWORD**)(*(_QWORD*)(GameData_21f4010 + 88) + 8 * v4);
      if (v5 != nullptr) {
        v6 = (_QWORD*)*v5;
        if (v6 != nullptr) {
          if ((v1 & v3) == 0) {
            while (1) {
              v9 = v6[1];
              if (v9 == v0) {
                if (v6[2] == v0) {
                  goto LABEL_32;
                }
              }
              else if ((v9 & v3) != v4) {
                goto LABEL_25;
              }
              v6 = (_QWORD*)*v6;
              v8 = 0;
              if (v6 == nullptr) {
                goto LABEL_26;
              }
            }
          }
          do {
            v7 = v6[1];
            if (v7 == v0) {
              if (v6[2] == v0) {
              LABEL_32:
                v8 = v6[3];
                goto LABEL_26;
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                break;
              }
            }
            v6 = (_QWORD*)*v6;
          } while (v6 != nullptr);
        }
      }
    }
  }
LABEL_25:
  v8 = 0;
LABEL_26:
  GameRoutine_14877f0(v8, 0x13F000000LL);
  v15[8] = 0;
  v13 = 32;
  *(_QWORD*)v15 = 0xA483E3AC82E35F8BLL;
  v14 = 0xBAE49FA3E95F4553LL;
  result = X8CALL_X0(
      unsigned __int64,
      ForceContinueBGMBinder_1487fc0((void*)((__int64)v12), (__int64)&v13, 0));
  if ((v13 & 1) != 0 && *(_QWORD*)&v15[7] != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, *(_QWORD*)&v15[7]);
  }
  return result;
}

#pragma GCC visibility pop
