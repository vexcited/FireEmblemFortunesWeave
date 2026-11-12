#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fe28f8[])();
void GameRoutine_dfd280(__int64, __int64);
__int64 game_hub_ObjectControllerWall_InitializeImpl(__int64 a1);
__int64 GameHr_dbc2c0(_QWORD*, __int64);
__int64 GameRoutine_e02b70(__int64, __int64*);
__int64 game_989ea0(__int64 result, int, __int64);
__int64 game_hub_dfc000(__int64 result);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 strtol(const char*, __int64, int);
extern __int64 GameData_212c6a0[3];
void GameRoutine_e03080(__int64, __int64*);
void game_hub_e02d20(__int64, __int64*);
__int64
game_hub_ObjectControllerWall_InitializeImpl_lambda0_Invoke(__int64 a1,
                                                            __int64* a2);

__int64 game_hub_ObjectControllerWall_InitializeImpl(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  _QWORD v4[4];
  _QWORD* v5;

  v1 = *(_QWORD*)(a1 + 8);
  v4[0] = GameData_1fe28f8;
  v4[1] = a1;
  v5 = v4;
  GameRoutine_dfd280(v1, (__int64)v4);
  result = (__int64)v5;
  if (v5 == v4) {
    v3 = 32;
  }
  else {
    if (v5 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*v5 + v3))((__int64)v5);
}

__int64 game_hub_ObjectControllerWall_InitializeImpl_lambda0_Invoke(__int64 a1,
                                                                    __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 result;
  _QWORD** v7;
  __int64 v8;
  __int64 v9;
  const char* v10;
  int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18[2];
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;
  __int64 v21[2];
  unsigned __int8* v22;

  v3 = *a2;
  v2 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD*)(a1 + 8);
  v21[0] = v3;
  v21[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v5 = GameRoutine_e02b70(v4, v21);
    std___1___shared_weak_count___release_weak(v2);
    if ((v5 & 1) == 0) {
      return std___1___shared_weak_count___release_weak(v2);
    }
    v19_.v19 = v3;
    v19_.v20 = v2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    result = GameRoutine_e02b70(v4, v21);
    if ((result & 1) == 0) {
      return result;
    }
    v19_.v19 = v3;
    v19_.v20 = 0;
  }
  game_hub_e02d20(v4, &v19_.v19);
  if (v19_.v20 != 0) {
    std___1___shared_weak_count___release_weak(v19_.v20);
  }
  v18[0] = v3;
  v18[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_e03080(v4, v18);
    std___1___shared_weak_count___release_weak(v2);
  }
  else {
    GameRoutine_e03080(v4, v18);
  }
  v7 = (_QWORD**)GameData_212c6a0[0];
  result = GameHr_dbc2c0(*(_QWORD**)GameData_212c6a0[0], *(_QWORD*)(v4 + 8));
  if (result != 0) {
    v8 = result;
    v9 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 224LL);
    v10 = (*(_BYTE*)v9 & 1) != 0 ? *(const char**)(v9 + 16)
                                 : (const char*)(v9 + 1);
    result = strtol(v10, (__int64)&v22, 10);
    v11 = *v22;
    v12 = *(_DWORD*)(v8 + 12) + 1;
    *(_DWORD*)(v8 + 12) = v12;
    if (v11 != 0 || v12 >= (unsigned int)result) {
      v13 = *(_QWORD*)(v4 + 8);
      v14 = *(_QWORD*)(v13 + 816);
      if (v14 != 0) {
        v16 = *(_QWORD*)(*(_QWORD*)(v13 + 800) + 8LL);
        v15 = *(_QWORD*)(*(_QWORD*)(v13 + 800) + 16LL);
        if (v15 != v16) {
          while (1) {
            v17 = *(_QWORD*)(v16 + 8);
            if (*(_DWORD*)(v17 + 284) == 2) {
              break;
            }
            v16 += 32;
            if (v16 == v15) {
              goto LABEL_23;
            }
          }
          game_989ea0(v14, 2, v17);
          v13 = *(_QWORD*)(v4 + 8);
        }
      }
    LABEL_23:
      game_hub_dfc000(v13);
      result = GameHr_dbc2c0(*v7, v13);
      if (result != 0) {
        *(_BYTE*)(result + 8) = 0;
      }
    }
  }
  if (v2 != 0) {
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

#pragma GCC visibility pop
