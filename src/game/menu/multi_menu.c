#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 GameRoutine_97ee10(_QWORD, _QWORD);
__int64 MultiMenuSequence_17871c0(__int64 result, unsigned int, int);
__int64 MultiMenuSequence_1787b80(__int64);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 TutorialInfo_162b900(_QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Unknown16de2e0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
__int64 MultiMenu_1788180(_QWORD* a1);
__int64 MultiMenu_1788370(_QWORD* a1);
__int64 MultiMenu_17883f0(__int64 a1);
__int64 MultiMenu_1788900(_QWORD* a1, char a2, char a3);
__int64 MultiMenu_1788ae0(__int64 a1, char a2);
__int64 MultiMenu_1788c00(__int64 a1, char a2, char a3);
__int64 MultiMenu_17890a0(__int64 a1, char a2);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_97ee10_alt1(__int64 result,
                                unsigned __int8) __asm__("GameRoutine_97ee10");
__int64 ProcInst_657850_alt1(__int64, __int64, __int64, char,
                             __int64) __asm__("ProcInst_657850");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
unsigned __int64 GameRoutine_887920_alt1(_QWORD*,
                                         __int64) __asm__("GameRoutine_887920");
void TutorialInfo_162b900_alt1(__int64,
                               __int64) __asm__("TutorialInfo_162b900");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 game_159e540(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 MultiMenu_1788420(_QWORD* a1, char a2);
__int64 MultiMenu_1788530(_QWORD* a1, char a2);
__int64 MultiMenu_1788690(_QWORD* a1, char a2);
__int64 MultiMenu_17887a0(_QWORD* a1, char a2);

__int64 MultiMenu_1788180(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  const char* v3;
  unsigned int v4;
  __int64 result;
  unsigned __int64 v6;
  const char* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int16 v16;
    char gap10_[6];
    unsigned __int64 v17;
    char* v18;
  } v16_;

  if ((*(_BYTE*)(a1[132] + 356LL) & 1) != 0) {
    return 0;
  }
  v1 = a1;
  v2 = a1[42];
  v16_.v16 = 0;
  if (v2 != 0 &&
      (v3 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2)) !=
          nullptr) {
    GameRoutine_60a020_alt1((__int64)&v16_.v16, v3);
    v4 = (unsigned __int8)v16_.v16;
  }
  else {
    v4 = 0;
  }
  if ((v4 & 1) != 0) {
    v6 = v16_.v17;
  }
  else {
    v6 = v4 >> 1;
  }
  if (v6 == 0) {
    v7 = (const char*)(*(__int64 (**)(_QWORD*))(*v1 + 536LL))(v1);
    if (v7 != nullptr) {
      GameRoutine_60a020_alt1((__int64)&v16_.v16, v7);
    }
  }
  v8 = v16_.v17;
  if ((v16_.v16 & 1) == 0) {
    v8 = (unsigned __int64)(unsigned __int8)v16_.v16 >> 1;
  }
  if (v8 == 0 ||
      ((v9 = (_QWORD*)v1[19], (v16_.v16 & 1) != 0)
           ? (v10 = v16_.v18)
           : (v10 = (char*)&v16_.v16 + 1),
       GameRoutine_887920_alt1(&v15, (__int64)v10), v11 = v15, v15 == 0)) {
    result = 0;
    if ((v16_.v16 & 1) == 0) {
      return result;
    }
    goto LABEL_25;
  }
  if (v9 != nullptr) {
    v1 = v9;
  }
  GameRoutine_97ee10_alt1(v15, 1u);
  v12 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1088, 16, 0);
  TutorialInfo_162b900_alt1(v12, v11);
  *(_BYTE*)(ProcInst_657850_alt1(v12, (__int64)GameData_212c730,
                                 (__int64)"TutorialInfo", 1, (__int64)v1) +
            1080) = 1;
  result = 11;
  if ((v16_.v16 & 1) != 0) {
  LABEL_25:
    if (v16_.v18 != nullptr) {
      v13 = result;
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, (__int64)v16_.v18);
      return v13;
    }
  }
  return result;
}

__int64 MultiMenu_1788370(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  if ((*(unsigned int (**)(_QWORD*))(*a1 + 1120LL))(a1) != 0 &&
      (*(_BYTE*)(a1[132] + 356LL) & 1) == 0) {
    v3 = a1[22];
    v2 = a1 + 22;
    (*(void (**)(_QWORD*))(v3 + 144))(v2);
    MultiMenuSequence_17871c0(
        v2[110],
        *(_DWORD*)(*(_QWORD*)(v2[110] +
                              8LL * *(unsigned int*)(v2[110] + 352LL) + 304) +
                   1064LL) == 0,
        1);
  }
  return 0;
}

__int64 MultiMenu_17883f0(__int64 a1)
{
  return MultiMenuSequence_17871c0(
      *(_QWORD*)(a1 + 1056),
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1056) +
                            8LL * *(unsigned int*)(*(_QWORD*)(a1 + 1056) +
                                                   352LL) +
                            304) +
                 1064LL) == 0,
      1);
}

__int64 MultiMenu_1788420(_QWORD* a1, char a2)
{
  __int64 v5;
  struct {
    __int64 v6;
    __int64 v7;
  } v6_;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 1176LL))(a1) & 1) != 0) {
    (*(void (**)(_QWORD*))(*a1 + 1192LL))(a1);
    (*(void (**)(_QWORD*))(a1[22] + 144LL))(a1 + 22);
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*a1 + 368LL))(
        (void*)(&v6_.v6), a1);
    game_159e540((__int64)&v6_.v6);
    if (v6_.v7 != 0) {
      std___1___shared_weak_count___release_weak(v6_.v7);
    }
    (*(void (**)(_QWORD*))(*a1 + 1168LL))(a1);
    return 0;
  }
  else if ((*(unsigned int (**)(_QWORD*))a1[22])(a1 + 22) == 0 &&
           (v5 = *(_QWORD*)(a1[23] + 336LL)) != 0 &&
           ((*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v5 + 320LL))(v5,
                                                                     a2 & 1) &
            1) != 0) {
    return 13;
  }
  else {
    return (*(__int64 (**)(_QWORD*, __int64, _QWORD))(a1[22] + 96LL))(
        a1 + 22, 0xFFFFFFFFLL, a2 & 1);
  }
}

__int64 MultiMenu_1788530(_QWORD* a1, char a2)
{
  _QWORD* v2;
  __int64 v6;
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;

  v2 = a1 - 22;
  if (((*(__int64 (**)(_QWORD*))(*(a1 - 22) + 1176LL))(a1 - 22) & 1) != 0) {
    (*(void (**)(_QWORD*))(*(a1 - 22) + 1192LL))(v2);
    (*(void (**)(_QWORD*))(*a1 + 144LL))(a1);
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
        *(a1 - 22) + 368LL))((void*)(&v7_.v7), v2);
    game_159e540((__int64)&v7_.v7);
    if (v7_.v8 != 0) {
      std___1___shared_weak_count___release_weak(v7_.v8);
    }
    (*(void (**)(_QWORD*))(*v2 + 1168LL))(v2);
    return 0;
  }
  else if ((*(unsigned int (**)(_QWORD*))*a1)(a1) == 0 &&
           (v6 = *(_QWORD*)(a1[1] + 336LL)) != 0 &&
           ((*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v6 + 320LL))(v6,
                                                                     a2 & 1) &
            1) != 0) {
    return 13;
  }
  else {
    return (*(__int64 (**)(_QWORD*, __int64, _QWORD))(*a1 + 96LL))(
        a1, 0xFFFFFFFFLL, a2 & 1);
  }
}

__int64 MultiMenu_1788690(_QWORD* a1, char a2)
{
  __int64 v5;
  struct {
    __int64 v6;
    __int64 v7;
  } v6_;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 1184LL))(a1) & 1) != 0) {
    (*(void (**)(_QWORD*))(*a1 + 1200LL))(a1);
    (*(void (**)(_QWORD*))(a1[22] + 144LL))(a1 + 22);
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*a1 + 376LL))(
        (void*)(&v6_.v6), a1);
    game_159e540((__int64)&v6_.v6);
    if (v6_.v7 != 0) {
      std___1___shared_weak_count___release_weak(v6_.v7);
    }
    (*(void (**)(_QWORD*))(*a1 + 1168LL))(a1);
    return 0;
  }
  else if ((*(unsigned int (**)(_QWORD*))a1[22])(a1 + 22) == 0 &&
           (v5 = *(_QWORD*)(a1[23] + 336LL)) != 0 &&
           ((*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v5 + 312LL))(v5,
                                                                     a2 & 1) &
            1) != 0) {
    return 13;
  }
  else {
    return (*(__int64 (**)(_QWORD*, __int64, _QWORD))(a1[22] + 96LL))(
        a1 + 22, 1, a2 & 1);
  }
}

__int64 MultiMenu_17887a0(_QWORD* a1, char a2)
{
  _QWORD* v2;
  __int64 v6;
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;

  v2 = a1 - 22;
  if (((*(__int64 (**)(_QWORD*))(*(a1 - 22) + 1184LL))(a1 - 22) & 1) != 0) {
    (*(void (**)(_QWORD*))(*(a1 - 22) + 1200LL))(v2);
    (*(void (**)(_QWORD*))(*a1 + 144LL))(a1);
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
        *(a1 - 22) + 376LL))((void*)(&v7_.v7), v2);
    game_159e540((__int64)&v7_.v7);
    if (v7_.v8 != 0) {
      std___1___shared_weak_count___release_weak(v7_.v8);
    }
    (*(void (**)(_QWORD*))(*v2 + 1168LL))(v2);
    return 0;
  }
  else if ((*(unsigned int (**)(_QWORD*))*a1)(a1) == 0 &&
           (v6 = *(_QWORD*)(a1[1] + 336LL)) != 0 &&
           ((*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v6 + 312LL))(v6,
                                                                     a2 & 1) &
            1) != 0) {
    return 13;
  }
  else {
    return (*(__int64 (**)(_QWORD*, __int64, _QWORD))(*a1 + 96LL))(a1, 1,
                                                                   a2 & 1);
  }
}

__int64 MultiMenu_1788900(_QWORD* a1, char a2, char a3)
{
  __int64 v6;
  int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  _BOOL8 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  int v15;
  __int64 v16;
  __int64 result;
  int v18;
  _DWORD* v19;
  _DWORD* v20;
  int v21;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 1248LL))(a1) & 1) != 0) {
    (*(void (**)(_QWORD*))(*a1 + 1280LL))(a1);
    (*(void (**)(_QWORD*))(a1[22] + 144LL))(a1 + 22);
    v6 = a1[132];
    if (*(_DWORD*)(*(_QWORD*)(v6 + 8LL * *(unsigned int*)(v6 + 352) + 304) +
                   1064LL) != 0) {
      v7 = 0;
    }
    else {
      v7 = 2;
    }
    if (*(_QWORD*)(v6 + 320) != 0) {
      v8 = v7;
    }
    else {
      v8 = *(_DWORD*)(*(_QWORD*)(v6 + 8LL * *(unsigned int*)(v6 + 352) + 304) +
                      1064LL) == 0;
    }
    MultiMenuSequence_17871c0(v6, v8, 0);
    v9 = a1[132];
    if (*((_DWORD*)a1 + 266) != 0) {
      v10 = 0;
    }
    else {
      v10 = 2;
    }
    if (*(_QWORD*)(v9 + 320) != 0) {
      v11 = v10;
    }
    else {
      v11 = *((_DWORD*)a1 + 266) == 0;
    }
    v12 = *(_QWORD*)(v9 + 8 * v11 + 304);
    game_menu_BasicMenu_Unknown16de2e0(v12, 1);
    v13 = *(_QWORD**)(v12 + 232);
    v14 = *(_QWORD**)(v12 + 240);
    if (v13 != v14) {
      v15 = 0;
      do {
        v16 = *v13;
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v13 + 48LL))(*v13) & 1) != 0) {
          if (v16 == *(_QWORD*)(v12 + 336)) {
            goto LABEL_23;
          }
          ++v15;
        }
        ++v13;
      } while (v13 != v14);
    }
    v15 = -1;
  LABEL_23:
    if (v15 <= 1) {
      v18 = 1;
    }
    else {
      v18 = v15;
    }
    *(_DWORD*)(v12 + 552) = v18 - 1;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v12, 1, 0, 0);
    v19 = *(_DWORD**)(v12 + 808);
    v20 = *(_DWORD**)(v12 + 816);
    if (v19 != v20) {
      v21 = *(_DWORD*)(v12 + 644);
      do {
        *v19++ = v21;
      } while (v19 != v20);
    }
    (*(void (**)(_QWORD*))(*a1 + 1264LL))(a1);
    return 0;
  }
  else {
    result = (*(__int64 (**)(_QWORD*, __int64, _QWORD, _QWORD))(a1[22] + 88LL))(
        a1 + 22, 1, a2 & 1, a3 & 1);
    if ((_DWORD)result == 13) {
      MultiMenuSequence_1787b80(a1[132]);
      return 13;
    }
  }
  return result;
}

__int64 MultiMenu_1788ae0(__int64 a1, char a2)
{
  __int64* v4;
  __int64* v5;
  int v6;
  __int64* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  char v11;

  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 1120LL))(a1) == 1 ||
      (*(_BYTE*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1) != 0) {
    goto LABEL_14;
  }
  v4 = *(__int64**)(a1 + 232);
  v5 = *(__int64**)(a1 + 240);
  if (v4 == v5) {
    goto LABEL_13;
  }
  v6 = 0;
  v7 = *(__int64**)(a1 + 232);
  while (1) {
    v8 = *v7++;
    if (v8 == *(_QWORD*)(a1 + 336)) {
      break;
    }
    ++v6;
    if (v7 == v5) {
      v6 = -1;
      break;
    }
  }
  v9 = 0;
  do {
    v10 = *v4;
    if (((*(__int64 (**)(__int64))(*(_QWORD*)*v4 + 48LL))(*v4) & 1) != 0) {
      v9 += (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 40LL))(v10) & 1;
    }
    ++v4;
  } while (v4 != v5);
  if (v6 != v9 - 1) {
  LABEL_14:
    v11 = 0;
  }
  else {
  LABEL_13:
    v11 = a2 | (*(_DWORD*)(a1 + 1064) == 0);
  }
  return v11 & 1;
}

__int64 MultiMenu_1788c00(__int64 a1, char a2, char a3)
{
  __int64 v6;
  int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  _BOOL8 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  int v15;
  __int64 v16;
  __int64 result;
  int v18;
  _QWORD* v19;
  _QWORD* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  _QWORD* v27;
  _QWORD* v28;
  int v29;
  __int64 v30;
  int v31;
  int v32;
  _DWORD* v33;
  _DWORD* v34;
  int v35;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1240LL))(a1) & 1) == 0) {
    result = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)(a1 + 176) + 88LL))(a1 + 176, 0xFFFFFFFFLL, a2 & 1, a3 & 1);
    if ((_DWORD)result == 13) {
      MultiMenuSequence_1787b80(*(_QWORD*)(a1 + 1056));
      return 13;
    }
    return result;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + 1272LL))(a1);
  (*(void (**)(__int64))(*(_QWORD*)(a1 + 176) + 144LL))(a1 + 176);
  v6 = *(_QWORD*)(a1 + 1056);
  if (*(_DWORD*)(*(_QWORD*)(v6 + 8LL * *(unsigned int*)(v6 + 352) + 304) +
                 1064LL) != 0) {
    v7 = 0;
  }
  else {
    v7 = 2;
  }
  if (*(_QWORD*)(v6 + 320) != 0) {
    v8 = v7;
  }
  else {
    v8 = *(_DWORD*)(*(_QWORD*)(v6 + 8LL * *(unsigned int*)(v6 + 352) + 304) +
                    1064LL) == 0;
  }
  MultiMenuSequence_17871c0(v6, v8, 0);
  v9 = *(_QWORD*)(a1 + 1056);
  if (*(_DWORD*)(a1 + 1064) != 0) {
    v10 = 0;
  }
  else {
    v10 = 2;
  }
  if (*(_QWORD*)(v9 + 320) != 0) {
    v11 = v10;
  }
  else {
    v11 = *(_DWORD*)(a1 + 1064) == 0;
  }
  v12 = *(_QWORD*)(v9 + 8 * v11 + 304);
  v13 = *(_QWORD**)(v12 + 232);
  v14 = *(_QWORD**)(v12 + 240);
  if (v13 == v14) {
    goto LABEL_49;
  }
  v15 = 0;
  do {
    v16 = *v13;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v13 + 48LL))(*v13) & 1) != 0) {
      v15 += (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 40LL))(v16) & 1;
    }
    ++v13;
  } while (v13 != v14);
  v18 = v15 - 1;
  if (v15 < 1) {
    goto LABEL_49;
  }
  v19 = *(_QWORD**)(v12 + 232);
  v20 = *(_QWORD**)(v12 + 240);
  if (v19 == v20) {
    goto LABEL_49;
  }
  v21 = 0;
  while (1) {
    v22 = *v19;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v19 + 48LL))(*v19) & 1) != 0 &&
        ((*(__int64 (**)(__int64))(*(_QWORD*)v22 + 40LL))(v22) & 1) != 0) {
      if (v18 == v21) {
        break;
      }
      ++v21;
    }
    if (++v19 == v20) {
      goto LABEL_49;
    }
  }
  v23 = *(_QWORD*)(v12 + 336);
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 168LL))(v23);
  }
  *(_QWORD*)(v12 + 336) = v22;
  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v12, 1, 0, 0);
  v24 = *(_QWORD*)(v12 + 336);
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 160LL))(v24);
    game_IsVibrationEnabled(game_g_game_setting + 712);
    v25 = *(_QWORD*)(v12 + 336);
    v26 = 4;
    if (v25 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v25 + 120LL))(v25) & 1) != 0) {
        v26 = 4;
      }
      else {
        v26 = 0;
      }
    }
  }
  else {
    v26 = 4;
  }
  v27 = *(_QWORD**)(v12 + 232);
  v28 = *(_QWORD**)(v12 + 240);
  *(_DWORD*)(v12 + 356) = *(_DWORD*)(v12 + 356) & 0xFFFFFFFB | v26;
  if (v27 == v28) {
    v31 = 0;
  }
  else {
    v29 = 0;
    do {
      v30 = *v27;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v27 + 48LL))(*v27) & 1) != 0) {
        if (v30 == *(_QWORD*)(v12 + 336)) {
          goto LABEL_44;
        }
        ++v29;
      }
      ++v27;
    } while (v27 != v28);
    v29 = -1;
  LABEL_44:
    v31 = v29 + 1;
  }
  v32 = (*(__int64 (**)(__int64))(*(_QWORD*)(v12 + 176) + 8LL))(v12 + 176);
  *(_DWORD*)(v12 + 552) = (v31 - v32) & ~((v31 - v32) >> 31);
  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v12, 1, 0, 0);
  v33 = *(_DWORD**)(v12 + 808);
  v34 = *(_DWORD**)(v12 + 816);
  if (v33 != v34) {
    v35 = *(_DWORD*)(v12 + 644);
    do {
      *v33++ = v35;
    } while (v33 != v34);
  }
LABEL_49:
  (*(void (**)(__int64))(*(_QWORD*)a1 + 1256LL))(a1);
  return 0;
}

__int64 MultiMenu_17890a0(__int64 a1, char a2)
{
  __int64* v4;
  __int64* v5;
  int v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  char v11;

  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 1120LL))(a1) == 1 ||
      (*(_BYTE*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1) != 0) {
  LABEL_15:
    v11 = 0;
    return v11 & 1;
  }
  v4 = *(__int64**)(a1 + 232);
  v5 = *(__int64**)(a1 + 240);
  if (v4 != v5) {
    v6 = 0;
    v7 = *(__int64**)(a1 + 232);
    while (1) {
      v8 = *v7++;
      if (v8 == *(_QWORD*)(a1 + 336)) {
        break;
      }
      ++v6;
      if (v7 == v5) {
        v6 = -1;
        break;
      }
    }
    v9 = 0;
    do {
      v10 = v4[v9];
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 48LL))(v10) & 1) != 0 &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 40LL))(v10) & 1) != 0) {
        if (v6 != (_DWORD)v9) {
          goto LABEL_15;
        }
        goto LABEL_13;
      }
      v4 = *(__int64**)(a1 + 232);
      ++v9;
    } while (v9 < (__int64)(*(_QWORD*)(a1 + 240) - (_QWORD)v4) >> 3);
    if (v6 == -1) {
      goto LABEL_13;
    }
    goto LABEL_15;
  }
LABEL_13:
  v11 = a2 | (*(_DWORD*)(a1 + 1064) != 0);
  return v11 & 1;
}

#pragma GCC visibility pop
