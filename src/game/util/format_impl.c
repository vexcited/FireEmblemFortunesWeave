#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 GameData_21759e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
struct PseudoSret GameRoutine_17d7bc0(_QWORD, _QWORD, _QWORD);
__int64 Format_7a7fc0(const char** a1);

__int64 Format_7a7fc0(const char** a1)
{
  const char* v1;
  int v2;
  const char* v3;
  __int64 v4;
  const char* v6;
  __int64 v7;
  const char* v8;
  __int64 v9;
  const char* v10;
  __int64 v11;
  __int64 v12;
  const char* v13;
  const char* v14;
  char v15;
  _QWORD* v16;
  const char* v17;
  __int64 v18;
  __int64 (**v20)();
  unsigned __int64 v21;
  char* v22;
  unsigned __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  v1 = *a1;
  if (*a1 == nullptr) {
    return (__int64)v1;
  }
  v2 = *(unsigned __int8*)v1;
  switch (v2) {
  case '+':
    v6 = "MID_Sys_Plus";
    break;
  case '-':
    v6 = "MID_Sys_Minus";
    break;
  case 'M':
    v3 = *a1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v4 = *msg_MessageManager_instance__ptr[0];
    v30 = -1;
    v31 = -1;
    v32 = -1;
    v33 = -1;
    v34 = -1;
    v35 = -1;
    v36 = -1;
    v37 = -1;
    v20 = msg_TagSelector_vtable;
    v21 = 0xFFFF0001FFFF0000LL;
    v22 = (char*)0xFFFF0004FFFF0002LL;
    v23 = 0xFFFF0006FFFF0005LL;
    v38 = 8;
    v24 = -65529;
    v25 = -65528;
    return GameRoutine_a4dbe0(v4, v3, 0, &v20);
  default:
    v8 = nullptr;
    goto LABEL_10;
  }
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v29 = -1;
  v7 = *msg_MessageManager_instance__ptr[0];
  v30 = -1;
  v31 = -1;
  v32 = -1;
  v33 = -1;
  v34 = -1;
  v35 = -1;
  v36 = -1;
  v37 = -1;
  v20 = msg_TagSelector_vtable;
  v21 = 0xFFFF0001FFFF0000LL;
  v22 = (char*)0xFFFF0004FFFF0002LL;
  v23 = 0xFFFF0006FFFF0005LL;
  v38 = 8;
  v24 = -65529;
  v25 = -65528;
  ++v1;
  v8 = (const char*)GameRoutine_a4dbe0(v7, v6, 0, &v20);

LABEL_10:
  v9 = strlen(v1);
  if (v9 >= 1) {
    v10 = &v1[v9];
    v11 = v9;
    v12 = v9;
    v13 = v1;
    do {
      v14 = (const char*)memchr(v13, 46, v12);
      if (v14 == nullptr) {
        break;
      }
      if (*v14 == 46) {
        if (v14 != v10 && v14 - v1 != -1) {
          *(struct PseudoSret*)(&v20) =
              GameRoutine_17d7bc0(v1, v11, &GameData_21759e0);
          v15 = (char)v20;
          v16 = v22;
          v17 = ((unsigned __int8)v20 & 1) != 0 ? v22 : (char*)&v20 + 1;
          v1 = (const char*)game_util_Format(v17);
          if ((v15 & 1) != 0 && v16 != nullptr) {
            v18 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v18 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v16);
          }
        }
        break;
      }
      v13 = v14 + 1;
      v12 = v10 - v13;
    } while (v10 - v13 >= 1);
  }
  if (v8 != nullptr) {
    return game_util_Format("%s%s", v8, v1);
  }
  return (__int64)v1;
}

#pragma GCC visibility pop
