#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_164aaf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_8f23a0(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_menu_ProcDialogList_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
__int64 ProcDialogList_Destructor(__int64 a1);
__int64 ProcDialogList_DeletingDestructor(__int64 a1);
__int64 ProcDialogList_Unknown2(__int64 result);

__int64 ProcDialogList_Destructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;

  *(_QWORD*)a1 = game_menu_ProcDialogList_vtable;
  v2 = (_QWORD*)game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v3 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v7 = v5 == v6;
    v8 = v3 - 1 + v4;
    v9 = v8 >> 7;
    v10 = v8 & 0x7F;
    v11 = 16 * (v5 - v6) - 1;
    v12 = *(_QWORD*)(v6 + 8 * v9);
    if (v7) {
      v11 = 0;
    }
    v13 = v12 + 32 * v10;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v13 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v2[21] = *(_QWORD*)(v13 + 24);
    v14 = *(_QWORD*)(v13 + 16);
    v2[27] = v3 - 1;
    v2[20] = v14;
    if ((unsigned __int64)(v11 - (v3 + v4) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v15 = *(_QWORD*)(v5 - 8);
      if (v15 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
        v5 = v2[24];
      }
      v2[24] = v5 - 8;
    }
  }
  v17 = (_QWORD*)(a1 + 152);
  if (*(_QWORD*)(a1 + 152) != 0) {
    GameRoutine_8f23a0(a1 + 152);
    if (*v17 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, *v17);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcDialogList_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;

  *(_QWORD*)a1 = game_menu_ProcDialogList_vtable;
  v2 = (_QWORD*)game_ProcGameSkipView_instance_;
  v3 = fw_memory_g_heap_manager_ptr;
  if (game_ProcGameSkipView_instance_ != 0) {
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v7 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v8 = v6 == v7;
    v9 = v4 - 1 + v5;
    v10 = v9 >> 7;
    v11 = v9 & 0x7F;
    v12 = 16 * (v6 - v7) - 1;
    v13 = *(_QWORD*)(v7 + 8 * v10);
    if (v8) {
      v12 = 0;
    }
    v14 = v13 + 32 * v11;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v14 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v2[21] = *(_QWORD*)(v14 + 24);
    v15 = *(_QWORD*)(v14 + 16);
    v2[27] = v4 - 1;
    v2[20] = v15;
    if ((unsigned __int64)(v12 - (v4 + v5) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v16 = *(_QWORD*)(v6 - 8);
      if (v16 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17, v16);
        v6 = v2[24];
      }
      v2[24] = v6 - 8;
    }
  }
  v18 = (_QWORD*)(a1 + 152);
  if (*(_QWORD*)(a1 + 152) != 0) {
    GameRoutine_8f23a0(a1 + 152);
    if (*v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19, *v18);
    }
  }
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v20 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v20 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v20, a1);
}

__int64 ProcDialogList_Unknown2(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  char** v9;
  __int64 v10;
  char* v11;
  unsigned __int64 v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  char* v18;
  char* v19;
  __int64 v20;
  unsigned __int8* v21;
  unsigned int v22;
  bool v23;
  int v24;
  bool v25;
  _BYTE v26[32];
  _BYTE* v27;
  char* v28;

  v1 = *(_QWORD*)(result + 152);
  v2 = *(int*)(result + 176);
  v3 = result;
  if (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(result + 160) - v1) >> 4) > v2) {
    v4 = (_QWORD*)(v1 + 48LL * (int)v2);
    v5 = v4[3];
    if ((int)(-1431655765 * ((unsigned __int64)(v4[4] - v5) >> 3)) >= 1) {
      v6 = 0;
      v7 = 0;
      v8 = msg_MessageManager_instance__ptr[0];
      v9 = msg_MessageManager_empty_text__ptr;
      do {
        v10 = v5 + v6;
        if ((*(_BYTE*)v10 & 1) != 0) {
          v11 = *(char**)(v10 + 16);
        }
        else {
          v11 = (char*)(v10 + 1);
        }
        if (v7 <= 7) {
          v12 = v7;
        }
        else {
          v12 = 0;
        }
        if (v11 != nullptr) {
          v13 = v11;
        }
        else {
          v13 = *v9;
        }
        GameRoutine_60a020(*v8 + 24 * v12 + 14704, v13);
        v5 = v4[3];
        ++v7;
        v6 += 24;
      } while ((__int64)v7 <
               (int)(-1431655765 * ((unsigned __int64)(v4[4] - v5) >> 3)));
    }
    v14 = *(unsigned __int8*)v4;
    v15 = v14 >> 1;
    v25 = (v14 & 1) == 0;
    v16 = v4[1];
    v17 = (char*)v4[2];
    v27 = nullptr;
    if (v25) {
      v16 = v15;
      v18 = (char*)v4 + 1;
    }
    else {
      v18 = v17;
    }
    if (v16 != 0) {
      v19 = v18;
    }
    else {
      v19 = nullptr;
    }
    v28 = v19;
    GameRoutine_164aaf0(v3, &v28, v26);
    result = (__int64)v27;
    if (v27 == v26) {
      v20 = 32;
    }
    else {
      if (v27 == nullptr) {
      LABEL_32:
        ++*(_DWORD*)(v3 + 176);
        return result;
      }
      v20 = 40;
    }
    result = (*(__int64 (**)(void))(*(_QWORD*)v27 + v20))();
    goto LABEL_32;
  }
  v21 = *(unsigned __int8**)(result + 16);
  if (v21 != nullptr) {
    v22 = *v21;
    v23 = v22 > 0x10;
    v24 = (1 << v22) & 0x1CE00;
    v25 = v23 || v24 == 0;
    if (!v25) {
      *(_WORD*)(result + 136) |= 0x80u;
    }
  }
  *(_WORD*)(result + 136) |= 8u;
  return result;
}

#pragma GCC visibility pop
