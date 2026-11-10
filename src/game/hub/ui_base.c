#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_hub_UIBase_vtable[])();
extern __int64 GameData_220b6e0;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* UIBase_Destructor(_QWORD* result);
__int64 UIBase_DeletingDestructor(_QWORD* a1);
__int64 UIBase_da1730(__int64 result, char a2);
__int64 UIBase_da17a0(__int64 result, char a2);
__int64 UIBase_da1810(_BYTE* a1);
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void UIBase_da1870(float* a1);

_QWORD* UIBase_Destructor(_QWORD* result)
{
  __int64 v1;
  char* v2;
  char* v3;
  unsigned __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;

  *result = game_hub_UIBase_vtable;
  v1 = GameData_220b6e0;
  v3 = *(char**)(GameData_220b6e0 + 136);
  v2 = *(char**)(GameData_220b6e0 + 144);
  if (v3 != v2) {
    v4 = v2 - v3 - 8;
    if ((~(_BYTE)v4 & 0x18) != 0) {
      v5 = ((unsigned __int8)((unsigned int)v4 >> 3) + 1) & 3;
      while (*(_QWORD**)v3 != result) {
        v3 += 8;
        if (--v5 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v4 < 0x18) {
        return result;
      }
      for (v3 += 16;; v3 += 32) {
        if (*((_QWORD**)v3 - 2) == result) {
          v3 -= 16;
          goto LABEL_17;
        }
        if (*((_QWORD**)v3 - 1) == result) {
          v3 -= 8;
          goto LABEL_17;
        }
        if (*(_QWORD**)v3 == result) {
          goto LABEL_17;
        }
        if (*((_QWORD**)v3 + 1) == result) {
          break;
        }
        v6 = v3 + 16;
        if (v6 == v2) {
          return result;
        }
      }
      v3 += 8;
    }
  }

LABEL_17:
  v7 = v3 + 8;
  if (v3 == v2 || v7 == v2) {
    if (v3 != v2) {
    LABEL_28:
      *(_QWORD*)(v1 + 144) = v3;
    }
  }
  else {
    do {
      if (*(_QWORD**)v7 != result) {
        *(_QWORD*)v3 = *(_QWORD*)v7;
        v3 += 8;
      }
      v7 += 8;
    } while (v7 != v2);
    if (v3 != *(char**)(v1 + 144)) {
      goto LABEL_28;
    }
  }
  return result;
}

__int64 UIBase_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  char* v2;
  char* v3;
  unsigned __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  __int64 v9;

  *a1 = game_hub_UIBase_vtable;
  v1 = GameData_220b6e0;
  v3 = *(char**)(GameData_220b6e0 + 136);
  v2 = *(char**)(GameData_220b6e0 + 144);
  if (v3 != v2) {
    v4 = v2 - v3 - 8;
    if ((~(_BYTE)v4 & 0x18) != 0) {
      v5 = ((unsigned __int8)((unsigned int)v4 >> 3) + 1) & 3;
      while (*(_QWORD**)v3 != a1) {
        v3 += 8;
        if (--v5 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v4 < 0x18) {
        goto LABEL_29;
      }
      v3 += 16;
      while (1) {
        if (*((_QWORD**)v3 - 2) == a1) {
          v3 -= 16;
          goto LABEL_17;
        }
        if (*((_QWORD**)v3 - 1) == a1) {
          v3 -= 8;
          goto LABEL_17;
        }
        if (*(_QWORD**)v3 == a1) {
          goto LABEL_17;
        }
        if (*((_QWORD**)v3 + 1) == a1) {
          break;
        }
        v6 = v3 + 16;
        v3 += 32;
        if (v6 == v2) {
          goto LABEL_29;
        }
      }
      v3 += 8;
    }
  }

LABEL_17:
  v7 = v3 + 8;
  if (v3 == v2 || v7 == v2) {
    if (v3 != v2) {
    LABEL_28:
      *(_QWORD*)(v1 + 144) = v3;
    }
  }
  else {
    do {
      if (*(_QWORD**)v7 != a1) {
        *(_QWORD*)v3 = *(_QWORD*)v7;
        v3 += 8;
      }
      v7 += 8;
    } while (v7 != v2);
    if (v3 != *(char**)(v1 + 144)) {
      goto LABEL_28;
    }
  }

LABEL_29:
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, a1);
}

__int64 UIBase_da1730(__int64 result, char a2)
{
  int v2;
  __int64 v3;
  float v4;

  if ((*(_BYTE*)(result + 8) & 1) != 0) {
    if ((a2 & 1) == 0) {
      return result;
    }
  }
  else {
    v2 = *(_DWORD*)(result + 28);
    *(_BYTE*)(result + 8) = 1;
    *(_DWORD*)(result + 32) = v2;
    if ((a2 & 1) == 0) {
      return result;
    }
  }
  v3 = result;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 56LL))(result);
  v4 = 0.0;
  if ((result & 1) != 0) {
    v4 = 1.0;
  }
  *(float*)(v3 + 12) = v4;
  *(float*)(v3 + 16) = v4;
  return result;
}

__int64 UIBase_da17a0(__int64 result, char a2)
{
  int v2;
  __int64 v3;
  float v4;

  if (*(_BYTE*)(result + 8) == 1) {
    v2 = *(_DWORD*)(result + 36);
    *(_BYTE*)(result + 8) = 0;
    *(_DWORD*)(result + 40) = v2;
    if ((a2 & 1) == 0) {
      return result;
    }
  }
  else if ((a2 & 1) == 0) {
    return result;
  }
  v3 = result;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 56LL))(result);
  v4 = 0.0;
  if ((result & 1) != 0) {
    v4 = 1.0;
  }
  *(float*)(v3 + 12) = v4;
  *(float*)(v3 + 16) = v4;
  return result;
}

__int64 UIBase_da1810(_BYTE* a1)
{
  return (*(_DWORD*)(GameData_220b6e0 +
                     16LL * (*(int (**)(_BYTE*))(*(_QWORD*)a1 + 40LL))(a1) +
                     176) < 1) &
         a1[8];
}

void UIBase_da1870(float* a1)
{

#pragma clang fp contract(off)
  float v1;
  __int64 v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;
  __int64 v8;
  float v9;
  __int64 v10;
  unsigned __int64 v11;
  __int128 v12;
  float v13;
  char v14;
  float v15;
  float v16;
  float v17;
  float v18;

  v1 = a1[8];
  v3 = game_script_hub_g_frame_counter_ptr[0];
  v4 = *(_QWORD*)game_script_hub_g_frame_counter_ptr[0];
  v5 =
      fabsf((float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                              104LL) *
                    0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f);
  if (v1 > 0x0.0p+0f) {
    v1 = v1 - v5;
    if (v1 >= 0x0.0p+0f) {
      goto LABEL_7;
    }
  LABEL_6:
    v1 = 0x0.0p+0f;
    goto LABEL_7;
  }
  if (v1 < 0x0.0p+0f) {
    v1 = v1 + v5;
    if (v1 > 0x0.0p+0f) {
      goto LABEL_6;
    }
  }
LABEL_7:
  a1[8] = v1;
  v6 = a1[10];
  v7 = fabsf((float)(*(float*)(v4 + 104) * 0x1.0aef000000000p+4f) /
             0x1.f400000000000p+9f);
  if (v6 > 0x0.0p+0f) {
    v6 = v6 - v7;
    if (v6 >= 0x0.0p+0f) {
      goto LABEL_13;
    }
  LABEL_12:
    v6 = 0x0.0p+0f;
    goto LABEL_13;
  }
  if (v6 < 0x0.0p+0f) {
    v6 = v6 + v7;
    if (v6 > 0x0.0p+0f) {
      goto LABEL_12;
    }
  }
LABEL_13:
  v8 = *(_QWORD*)a1;
  a1[10] = v6;
  if (((*(__int64 (**)(float*))(v8 + 56))(a1) & 1) == 0) {
    v9 = 0x0.0p+0f;
    if (a1[10] > 0x0.0p+0f) {
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  v9 = 0x1.0000000000000p+0f;
  if (a1[8] <= 0x0.0p+0f) {
  LABEL_17:
    a1[4] = v9;
  }
LABEL_18:
  v10 = game_ProcFadeView_instance_;
  a1[4] = a1[6] * a1[4];
  if (v10 == 0) {
    goto LABEL_25;
  }
  v11 = v10 + ((unsigned __int64)*(unsigned __int8*)(v10 + 480) << 6);
  if (*(float*)(v11 + 172) == *(float*)(v11 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v11 + 160) + 16LL))(v11 + 160);
  }
  else {
    v12 = *(_OWORD*)(v11 + 208);
  }
  if (*((float*)&v12 + 3) != 0x1.0000000000000p+0f ||
      (LODWORD(v13) = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                                   (_QWORD*)(*(_QWORD*)(v11 + 160) + 16LL))(
                                      v11 + 160, *((float*)&v12 + 3)))
                          .n128_u32[3],
       v13 != 0x1.0000000000000p+0f) ||
      ((*(__int64 (**)(float*, float))(*(_QWORD*)a1 + 48LL))(a1, v13) & 1) !=
          0) {
  LABEL_25:
    if (*((_BYTE*)a1 + 44) != 1) {
      v16 = a1[5];
      if (v16 <= 0x0.0p+0f) {
        v15 = a1[4];
        goto LABEL_37;
      }
      v15 = a1[3];
      v17 = a1[4];
      v18 = fabsf((float)(0x1.0000000000000p+0f / v16) *
                  (float)((float)(*(float*)(*(_QWORD*)v3 + 104LL) *
                                  0x1.0aef000000000p+4f) /
                          0x1.f400000000000p+9f));
      if (v15 <= v17) {
        if (v15 >= v17) {
          goto LABEL_37;
        }
        v15 = v15 + v18;
        if (v15 <= v17) {
          goto LABEL_37;
        }
      }
      else {
        v15 = v15 - v18;
        if (v15 >= v17) {
          goto LABEL_37;
        }
      }
      v15 = a1[4];
      goto LABEL_37;
    }
  }
  v14 = (*(__int64 (**)(float*))(*(_QWORD*)a1 + 56LL))(a1);
  v15 = 0x0.0p+0f;
  if ((v14 & 1) != 0) {
    v15 = 0x1.0000000000000p+0f;
  }
  a1[4] = v15;
LABEL_37:
  a1[3] = v15;
  *((_BYTE*)a1 + 44) = 0;
}

#pragma GCC visibility pop
