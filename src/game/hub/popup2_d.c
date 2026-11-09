#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d7a520(_QWORD, _QWORD);
__int64 GameRoutine_d7c8b0(_QWORD);
__int64 GameRoutine_f7fa20(void);
__int64 GameRoutine_f7fa70(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_220b6e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f0b8[5];
__int64 Popup2D_Destructor(_QWORD* a1);
__int64 Popup2D_DeletingDestructor(_QWORD* a1);
__int64 Popup2D_f7f870(__int64 a1);
bool Popup2D_Unknown8(__int64 a1);

__int64 Popup2D_Destructor(_QWORD* a1)
{
  *a1 = GameData_212f0b8[0] + 2;
  return GameRoutine_d7a520(GameData_220b6e0, a1);
}

__int64 Popup2D_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;

  *a1 = GameData_212f0b8[0] + 2;
  GameRoutine_d7a520(GameData_220b6e0, a1);
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

__int64 Popup2D_f7f870(__int64 a1)
{
  __int64 v1;
  int v2;
  __int16 v3;
  unsigned __int64 v4;
  int v5;
  unsigned __int64 v6;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  bool v11;
  bool v12;
  unsigned int v13;
  bool v15;

  v1 = *(_QWORD*)(a1 + 48);
  v2 = *(_DWORD*)(v1 + 208) | *(_DWORD*)(v1 + 120);
  if ((v2 & 1) != 0) {
    v3 = 0;
  }
  else {
    v3 = *(_WORD*)(v1 + 208) | *(_WORD*)(v1 + 120);
  }
  if ((v3 & 0x20) != 0) {
    return 6;
  }
  v4 = *(unsigned __int8*)(v1 + 232);
  v5 = *(_DWORD*)(v1 + 96);
  if ((v4 & 1) != 0) {
    v6 = *(_QWORD*)(v1 + 240);
  }
  else {
    v6 = v4 >> 1;
  }
  v8 = (v3 & 0xC0) == 0 && v6 == 0;
  if (*(_QWORD*)(v1 + 32) == 0) {
    v15 = !v8;
    if (v5 >= 3) {
      v15 = false;
    }
    if (!v15) {
      goto LABEL_32;
    }
    return 1;
  }
  if (v5 > 1 || *(float*)(a1 + 60) <= 0.0) {
    if (v5 > 2) {
      v8 = true;
    }
    if (v8) {
      goto LABEL_32;
    }
    return 1;
  }
  v9 = *(unsigned __int8*)(v1 + 256);
  if ((v9 & 1) != 0) {
    v10 = *(_QWORD*)(v1 + 264);
  }
  else {
    v10 = v9 >> 1;
  }
  v11 = v10 == 0;
  v12 = v10 == 0 && v8;
  if (v11) {
    v13 = 1;
  }
  else {
    v13 = 2;
  }
  if (!v12) {
    return v13;
  }

LABEL_32:
  if ((v2 & 1) == 0 && (v2 & 0x406) != 0) {
    if (v5 >= 1 && *(float*)(v1 + 100) >= 2.0) {
      return 3;
    }
    return 4;
  }
  if ((v3 & 0xAC0) != 0) {
    if (v5 <= 2) {
      if (GameRoutine_f7fa20() != 0) {
        return 1;
      }
      else {
        return 4;
      }
    }
  }
  else if (v5 <= 1 && (v3 & 8) != 0) {
    return 4;
  }
  if ((GameRoutine_f7fa70(a1) & 1) != 0) {
    return 5;
  }
  else {
    return 0;
  }
}

bool Popup2D_Unknown8(__int64 a1)
{
  return (GameRoutine_d7c8b0(*(_QWORD*)(a1 + 48)) & 1) != 0 &&
         *(_BYTE*)(*(_QWORD*)(a1 + 48) + 88LL) == 1 &&
         (unsigned int)Popup2D_f7f870(a1) != 0;
}

#pragma GCC visibility pop
