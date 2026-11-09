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
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_212d310;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbc8[7];
extern __int64 GameData_212dc68;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
__int64 Popup2D_d7a520(__int64 result, __int64 a2);
__int64 Popup2D_f7fa20(__int64 a1);
__int64 Popup2D_f7fa70(__int64 a1);

__int64 Popup2D_d7a520(__int64 result, __int64 a2)
{
  char* v2;
  char* v3;
  unsigned __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;

  v3 = *(char**)(result + 136);
  v2 = *(char**)(result + 144);
  if (v3 != v2) {
    v4 = v2 - v3 - 8;
    if ((~(_BYTE)v4 & 0x18) != 0) {
      v5 = ((unsigned __int8)((unsigned int)v4 >> 3) + 1) & 3;
      while (*(_QWORD*)v3 != a2) {
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
        if (*((_QWORD*)v3 - 2) == a2) {
          v3 -= 16;
          goto LABEL_17;
        }
        if (*((_QWORD*)v3 - 1) == a2) {
          v3 -= 8;
          goto LABEL_17;
        }
        if (*(_QWORD*)v3 == a2) {
          goto LABEL_17;
        }
        if (*((_QWORD*)v3 + 1) == a2) {
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
      *(_QWORD*)(result + 144) = v3;
    }
  }
  else {
    do {
      if (*(_QWORD*)v7 != a2) {
        *(_QWORD*)v3 = *(_QWORD*)v7;
        v3 += 8;
      }
      v7 += 8;
    } while (v7 != v2);
    if (v3 != *(char**)(result + 144)) {
      goto LABEL_28;
    }
  }
  return result;
}

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

__int64 Popup2D_f7fa20(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 result;
  int v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 48);
  v2 = *(unsigned __int8*)(v1 + 232);
  if ((v2 & 1) != 0) {
    result = *(_QWORD*)(v1 + 240);
  }
  else {
    result = v2 >> 1;
  }
  if (result == 0) {
    v4 = *(_DWORD*)(v1 + 208) | *(_DWORD*)(v1 + 120);
    v5 = 21;
    if ((v4 & 1) != 0) {
      LOBYTE(v4) = 0;
    }
    if ((v4 & 0x40) == 0) {
      v5 = 0;
    }
    if ((v4 & 0x80) != 0) {
      return 18;
    }
    else {
      return v5;
    }
  }
  return result;
}

__int64 Popup2D_f7fa70(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v16;
  float v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;

  v1 = *(_QWORD*)(a1 + 48);
  if (*(int*)(v1 + 96) > 2) {
    goto LABEL_50;
  }
  v2 = GameData_212dbc8[0];
  if (*(int*)(*(_QWORD*)GameData_212dbc8[0] + 32LL) > 0 ||
      *(_DWORD*)(*(_QWORD*)GameData_212dbc8[0] + 16LL) > 0) {
    goto LABEL_50;
  }
  v4 = GameData_212dc68;
  v5 = *(_QWORD*)(*(_QWORD*)GameData_212dc68 + 96LL);
  if (game_ProcGameSkipView_instance_ != 0 &&
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 <=
          2) {
    v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v7 = (v6 & 8) != 0 ? 2 : 3;
    if ((v7 & v6) == 0) {
      goto LABEL_50;
    }
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v8 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    if (v8 != 0 && *(_QWORD*)(v8 + 40) != 0) {
      goto LABEL_50;
    }
  }
  v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
  if (v9 != 0 && *(_QWORD*)(v9 + 40) != 0) {
    goto LABEL_50;
  }
  v10 = GameData_212dbb8[0];
  if (*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 10LL) != 1) {
    goto LABEL_50;
  }
  v11 = 0;
  v12 = GameData_212d310;
  if (*(int*)(*(_QWORD*)GameData_212d310 + 24LL) > 0 ||
      *(float*)(v5 + 72) > 0.0 || (*(_BYTE*)(v5 + 76) & 1) != 0) {
    return v11 & 1;
  }
  if (*(_BYTE*)(v1 + 217) != 1) {
    goto LABEL_50;
  }
  v13 = *(_QWORD*)(v1 + 24);
  if (v13 == 0) {
    goto LABEL_50;
  }
  v14 = *(_QWORD*)(v1 + 16);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                            memory_order_relaxed);
  v16 = std___1___shared_weak_count_lock(v13);
  std___1___shared_weak_count___release_weak(v13);
  if (v16 == 0 || v14 == 0) {
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
    }
    goto LABEL_50;
  }
  v17 = *(float*)(v14 + 1756);
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  if (v17 > 0.0) {
    goto LABEL_50;
  }
  v11 = 0;
  if (*(int*)(*(_QWORD*)v2 + 32LL) > 0 || *(int*)(*(_QWORD*)v2 + 16LL) > 0) {
    return v11 & 1;
  }
  if ((v18 = *(_QWORD*)(*(_QWORD*)v4 + 96LL),
       game_ProcGameSkipView_instance_ != 0) &&
          (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                            152) -
                  1 <=
              2 &&
          (((v19 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v20 = 2)
               : (v20 = 3),
           (v20 & v19) == 0) ||
      game_hub_ProcHubSeqView_instance_ != 0 &&
          (v21 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408)) != 0 &&
          *(_QWORD*)(v21 + 40) != 0 ||
      (v22 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416)) != 0 &&
          *(_QWORD*)(v22 + 40) != 0 ||
      *(_BYTE*)(*(_QWORD*)v10 + 10LL) != 1) {
  LABEL_50:
    v11 = 0;
    return v11 & 1;
  }
  v11 = 0;
  if (*(int*)(*(_QWORD*)v12 + 24LL) <= 0 && *(float*)(v18 + 72) <= 0.0 &&
      (*(_BYTE*)(v18 + 76) & 1) == 0) {
    v11 = *(_BYTE*)(*(_QWORD*)(a1 + 48) + 305LL) ^ 1;
  }
  return v11 & 1;
}

#pragma GCC visibility pop
