#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_657850(__int64, __int64, __int64, char, __int64);
__int64 GameRoutine_65b240(_QWORD);
__int64 GameRoutine_a83fa0(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_21c6868;
extern __int64 (*game_ProcWaitRelease_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c638;
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 GameData_21c6898;
extern __int64 GameData_21c68a0;
extern __int64 GameData_21c68a8;
extern __int64 GameData_21c68b8;
extern __int64 GameData_21c68c0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* snd_g_fileIndex_ptr[2];
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_21c68c8;
__int64 ProcRegistry_65a2e0(_QWORD* a1, _QWORD* a2);
__int64 ProcRegistry_65a470(__int64 result);
__int64 ProcRegistry_65bba0(__int64* a1, unsigned int* a2);

__int64 ProcRegistry_65a2e0(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if (a1 != nullptr) {
    v4 = a1;
    v5 = GameData_21c68a0;
    v6 = GameData_21c68a8;
    v7 = GameData_21c68b8;
    v8 = GameData_21c68c0;
    v9 = fw_memory_g_heap_manager_ptr;
    do {
      v10 = v6 - v5;
      v11 = v6 == v5;
      v12 = v7 + v8;
      v13 = (v10 << 6) - 1;
      if (v11) {
        v13 = 0;
      }
      if (v13 == v12) {
        GameRoutine_65b240(&GameData_21c6898);
        v5 = GameData_21c68a0;
        v12 = GameData_21c68c0 + GameData_21c68b8;
      }
      *(_QWORD*)(*(_QWORD*)(v5 + 8 * (v12 >> 9)) + 8 * (v12 & 0x1FF)) = v4;
      ++GameData_21c68c0;
      (*(void (**)(_QWORD*, _QWORD*))(*v4 + 104LL))(v4, a2);
      v5 = GameData_21c68a0;
      v6 = GameData_21c68a8;
      v7 = GameData_21c68b8;
      v14 = GameData_21c68c0;
      if (GameData_21c68a8 == GameData_21c68a0) {
        v15 = 0;
      }
      else {
        v15 = ((GameData_21c68a8 - GameData_21c68a0) << 6) - 1;
      }
      v8 = --GameData_21c68c0;
      if ((unsigned __int64)(v15 - (v14 + GameData_21c68b8) + 1) >= 0x400) {
        v16 = *(_QWORD*)(GameData_21c68a8 - 8);
        if (v16 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v17 = 128;
          }
          else {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v17, v16);
          v5 = GameData_21c68a0;
          v6 = GameData_21c68a8;
          v7 = GameData_21c68b8;
          v8 = GameData_21c68c0;
        }
        v6 -= 8;
        GameData_21c68a8 = v6;
      }
      v4 = (_QWORD*)v4[4];
    } while (v4 != nullptr);
  }
  if (*(_QWORD*)GameData_212c638 != 0) {
    GameRoutine_a83fa0(*(_QWORD*)GameData_212c638, *a2, a2[1]);
    ++GameData_21c68c8;
  }
  return ProcRegistry_65a470(a1);
}

__int64 ProcRegistry_65a470(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;

  if (result != 0) {
    v1 = snd_g_fileIndex_ptr[0];
    v2 = *snd_g_fileIndex_ptr[0];
    if (*snd_g_fileIndex_ptr[0] != 0) {
      if (*(_QWORD*)(v2 + 4352) != *(_QWORD*)(v2 + 4360) ||
          *(int*)(v2 + 4720) <= 29 && *(int*)(v2 + 4716) >= 1) {
        v3 = result;
        v4 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 152, 16, 0);
        v5 = GameData_212c608[0];
        *(_QWORD*)(v4 + 96) = 0;
        *(_QWORD*)(v4 + 104) = 0;
        *(_QWORD*)(v4 + 112) = 0;
        *(_QWORD*)(v4 + 120) = 0;
        *(_QWORD*)(v4 + 128) = 0;
        *(_WORD*)(v4 + 136) = 0;
        *(_QWORD*)(v4 + 16) = 0;
        *(_QWORD*)(v4 + 24) = "NULL";
        *(_QWORD*)(v4 + 138) = 0;
        *(_QWORD*)(v4 + 144) = 0;
        *(_QWORD*)(v4 + 32) = 0;
        *(_QWORD*)(v4 + 40) = 0;
        *(_QWORD*)(v4 + 48) = 0;
        *(_QWORD*)(v4 + 56) = 0;
        *(_QWORD*)(v4 + 64) = 0;
        *(_QWORD*)(v4 + 72) = 0;
        *(_QWORD*)(v4 + 80) = 0;
        *(_QWORD*)(v4 + 88) = 0;
        *(_QWORD*)v4 = v5 + 16;
        *(_QWORD*)(v4 + 8) = 0;
        game_ProcInst_Register();
        v6 = v4;
        *(_QWORD*)v4 = game_ProcWaitRelease_vtable;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                                  memory_order_acquire) &
             1) == 0) {
          v7 = __cxa_guard_acquire(&GameData_21c6868);
          v6 = v4;
          if (v7 != 0) {
            GameData_21c67a8 = 3;
            GameData_21c67d0 = 0;
            GameData_21c67d8 = 0;
            GameData_21c67e0 = 0;
            GameData_21c67b0 = 0;
            GameData_21c67b8 = 0;
            GameData_21c67c0 = 0;
            GameData_21c67c8 = 0;
            GameData_21c6808 = 0;
            GameData_21c6810 = 0;
            GameData_21c6818 = 0;
            GameData_21c6820 = 0;
            GameData_21c6828 = 0;
            GameData_21c6850 = 0;
            GameData_21c6858 = 0;
            GameData_21c6860 = 0;
            GameData_21c6848 = 0;
            GameData_21c6838 = 0;
            GameData_21c6840 = 0;
            GameData_21c6830 = 0;
            GameData_21c67e8 = 14;
            GameData_21c67f0 = 0;
            GameData_21c67f8 = 16;
            GameData_21c6800 = 1;
            __cxa_guard_release(&GameData_21c6868);
            v6 = v4;
          }
        }
        result = GameRoutine_657850(v6, (__int64)&GameData_21c67a8,
                                    (__int64)"ProcWaitRelease", 1, v3);
        v2 = *v1;
      }
      atomic_fetch_add((atomic_ullong* volatile)(v2 + 4704), 1u);
    }
  }
  return result;
}

__int64 ProcRegistry_65bba0(__int64* a1, unsigned int* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64** v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64 v19;

  v2 = a1[1];
  if (v2 == 0 || a1[3] == 0) {
    return 0;
  }
  v5 = *a2;
  v6 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v7 = *a2;
    if (v2 <= v5) {
      v7 = (unsigned int)v5 % (unsigned int)v2;
    }
  }
  else {
    v7 = ((_DWORD)v2 - 1) & (unsigned int)v5;
  }
  v8 = *a1;
  v9 = *(__int64***)(*a1 + 8 * v7);
  if (v9 == nullptr) {
    return 0;
  }
  v10 = *v9;
  if (*v9 == nullptr) {
    return 0;
  }
  if ((v2 & v6) == 0) {
    while (1) {
      v12 = v10[1];
      if (v12 == v5) {
        if (*((_DWORD*)v10 + 4) == (_DWORD)v5) {
          goto LABEL_28;
        }
      }
      else if ((v12 & v6) != v7) {
        return 0;
      }
      v10 = (__int64*)*v10;
      if (v10 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v11 == v5) {
      break;
    }
    if (v11 >= v2) {
      v11 %= v2;
    }
    if (v11 != v7) {
      return 0;
    }
  LABEL_16:
    v10 = (__int64*)*v10;
    if (v10 == nullptr) {
      return 0;
    }
  }
  if (*((_DWORD*)v10 + 4) != (_DWORD)v5) {
    goto LABEL_16;
  }

LABEL_28:
  if ((v2 & v6) != 0) {
    if (v2 <= v5) {
      v5 %= v2;
    }
  }
  else {
    v5 &= v6;
  }
  v13 = *(__int64**)(v8 + 8 * v5);
  do {
    v14 = v13;
    v13 = (__int64*)*v13;
  } while (v13 != v10);
  if (v14 == a1 + 2) {
    goto LABEL_45;
  }
  v15 = v14[1];
  if ((v2 & v6) != 0) {
    if (v15 >= v2) {
      v15 %= v2;
    }
  }
  else {
    v15 &= v6;
  }
  if (v15 != v5) {
  LABEL_45:
    if (*v10 == 0) {
      goto LABEL_46;
    }
    v16 = *(_QWORD*)(*v10 + 8);
    if ((v2 & v6) != 0) {
      if (v16 >= v2) {
        v16 %= v2;
      }
    }
    else {
      v16 &= v6;
    }
    if (v16 != v5) {
    LABEL_46:
      *(_QWORD*)(v8 + 8 * v5) = 0;
    }
  }
  v17 = (__int64*)*v10;
  if (*v10 != 0) {
    v18 = v17[1];
    if ((v2 & v6) != 0) {
      if (v18 >= v2) {
        v18 %= v2;
      }
    }
    else {
      v18 &= v6;
    }
    if (v18 != v5) {
      *(_QWORD*)(*a1 + 8 * v18) = v14;
      v17 = (__int64*)*v10;
    }
  }
  *v14 = (__int64)v17;
  *v10 = 0;
  --a1[3];
  v19 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v19 = 56;
  }
  nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v19, v10);
  return 1;
}

#pragma GCC visibility pop
