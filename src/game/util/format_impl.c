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
__int64 Format_7a7fc0_alt1(const char** a1) __asm__("Format_7a7fc0");
__attribute__((swiftcall)) void
GameRoutine_17d7bc0_alt1(PSEUDO_X8, unsigned __int8*, unsigned __int64,
                         __int64) __asm__("GameRoutine_17d7bc0");
__int64 memchr_alt1(__int64, int, unsigned __int64) __asm__("memchr");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
char* game_util_Format_alt1(__int64, ...) __asm__("game_util_Format");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
char* Format_7a7fc0(char** a1);

char* Format_7a7fc0(char** a1)
{
  char* v1;
  int v2;
  char* v3;
  __int64 v4;
  char* v6;
  __int64 v7;
  char* v8;
  signed __int64 v9;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  char v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  struct {
    __int64 (**v20)();
    unsigned __int64 v21;
    __int64 v22;
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
  } v20_;

  v1 = *a1;
  if (*a1 == nullptr) {
    return v1;
  }
  v2 = (unsigned __int8)*v1;
  switch (v2) {
  case '+':
    v6 = "MID_Sys_Plus";
    break;
  case '-':
    v6 = "MID_Sys_Minus";
    break;
  case 'M':
    v3 = *a1;
    v20_.v26 = -1;
    v20_.v27 = -1;
    v20_.v28 = -1;
    v20_.v29 = -1;
    v4 = *msg_MessageManager_instance__ptr[0];
    v20_.v30 = -1;
    v20_.v31 = -1;
    v20_.v32 = -1;
    v20_.v33 = -1;
    v20_.v34 = -1;
    v20_.v35 = -1;
    v20_.v36 = -1;
    v20_.v37 = -1;
    v20_.v20 = msg_TagSelector_vtable;
    v20_.v21 = 0xFFFF0001FFFF0000LL;
    v20_.v22 = 0xFFFF0004FFFF0002LL;
    v20_.v23 = 0xFFFF0006FFFF0005LL;
    v20_.v38 = 8;
    v20_.v24 = -65529;
    v20_.v25 = -65528;
    return GameRoutine_a4dbe0_alt1(v4, v3, 0);
  default:
    v8 = nullptr;
    goto LABEL_10;
  }
  v20_.v26 = -1;
  v20_.v27 = -1;
  v20_.v28 = -1;
  v20_.v29 = -1;
  v7 = *msg_MessageManager_instance__ptr[0];
  v20_.v30 = -1;
  v20_.v31 = -1;
  v20_.v32 = -1;
  v20_.v33 = -1;
  v20_.v34 = -1;
  v20_.v35 = -1;
  v20_.v36 = -1;
  v20_.v37 = -1;
  v20_.v20 = msg_TagSelector_vtable;
  v20_.v21 = 0xFFFF0001FFFF0000LL;
  v20_.v22 = 0xFFFF0004FFFF0002LL;
  v20_.v23 = 0xFFFF0006FFFF0005LL;
  v20_.v38 = 8;
  v20_.v24 = -65529;
  v20_.v25 = -65528;
  ++v1;
  v8 = GameRoutine_a4dbe0_alt1(v7, v6, 0);
LABEL_10:
  v9 = strlen_alt1(v1);
  if (v9 >= 1) {
    v10 = &v1[v9];
    v11 = v9;
    v12 = v9;
    v13 = (__int64)v1;
    do {
      v14 = (char*)memchr_alt1(v13, 46, v12);
      if (v14 == nullptr) {
        break;
      }
      if (*v14 == 46) {
        if (v14 != v10 && v14 - v1 != -1) {
          GameRoutine_17d7bc0_alt1((void*)((__int64*)&v20_.v20),
                                   (unsigned __int8*)v1, v11,
                                   (__int64)&GameData_21759e0);
          v15 = (char)v20_.v20;
          v16 = v20_.v22;
          v17 = ((unsigned __int8)v20_.v20 & 1) != 0
                    ? game_util_Format_alt1(v20_.v22)
                    : game_util_Format_alt1((__int64)&v20_.v20 + 1);
          v1 = v17;
          if ((v15 & 1) != 0 && v16 != 0) {
            v18 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v18 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v16);
          }
        }
        break;
      }
      v13 = (__int64)(v14 + 1);
      v12 = (unsigned __int64)&v10[-v13];
    } while ((__int64)&v10[-v13] >= 1);
  }
  if (v8 != nullptr) {
    return game_util_Format_alt1((__int64)"%s%s", v8, v1);
  }
  return v1;
}

#pragma GCC visibility pop
