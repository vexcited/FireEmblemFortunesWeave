#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_65f240(_QWORD, _QWORD);
__int64 GameRoutine_65f570(_QWORD, _QWORD);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_6e5900(_QWORD, _QWORD);
__int64 GameRoutine_712a40(_QWORD);
__int64 GameRoutine_89aac0(_QWORD*, _QWORD*);
__int64 GameRoutine_89d820(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_TransporterConst_List_Impl_EachData_alt1(
    _QWORD, _QWORD, _QWORD) __asm__("game_TransporterConst_List_Impl_EachData");
__int64 game_UnitActor_TryReload(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
extern _UNKNOWN GameData_21f17c0;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_1fa7ec0[])();
extern __int64 (*GameData_1fa7f40[])();
extern __int64 (*GameData_1fa7fc0[])();
extern __int64 (*GameData_1fa8040[])();
extern __int64 (*GameData_1fa80c0[])();
extern __int64 GameData_21ca310;
extern __int64 game_TransporterConst_List_instance_;
extern __int64* GameData_212c878[6];
extern int GameData_21f17b8;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* game_TransporterConst_List_Impl_EachData(_QWORD* result, __int64 a2,
                                                 __int64 a3);
__int64 TransporterConst_89c4e0(__int64 a1, __int64 a2);
bool TransporterConst_89ca00(unsigned __int16* a1);
__int64 TransporterConst_89cc80(unsigned __int8 a1, __int64 a2);
__int64 game_TransporterConst_List_Impl_GetStock(unsigned __int16* a1);
__int64 TransporterConst_89ce60();
__int64 game_TransporterConst_List_Impl_UpdateMerge_closure_Invoke(
    __int64 result, unsigned __int16* a2);
__int64 game_TransporterConst_List_Impl_GetStock_closure_Invoke(__int64 result,
                                                                __int64 a2);
__int64 game_TransporterConst_List_Impl_EachData_closure_Invoke(__int64 result,
                                                                __int64 a2);
__int64 game_TransporterConst_List_Impl_EachData_closure0_Invoke(__int64 result,
                                                                 __int64 a2);
__int64 game_TransporterConst_List_Impl_EachIndex_closure_Invoke_8a1610(
    __int64 result, unsigned __int16* a2);
__int64 game_TransporterConst_List_Impl_EachIndex_closure_Invoke_8a1780(
    __int64 result, unsigned __int16* a2);

_QWORD* game_TransporterConst_List_Impl_EachData(_QWORD* result, __int64 a2,
                                                 __int64 a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v13[2];
  __int64 v14;
  _QWORD* v15;

  if (a2 != 0) {
    v3 = result;
    if ((((0x10000000000LL << *(_BYTE*)(a2 + 72)) |
          (1LL << *(_BYTE*)(a2 + 73))) &
         0xFFBFFFFFFFA39FFFLL) != 0) {
      result = v13;
      v14 = a3;
      v13[0] = GameData_1fa8040;
      v13[1] = a2;
      v4 = *((unsigned int*)v3 + 18);
      v15 = v13;
      if ((int)v4 >= 1) {
        v5 = 0;
        v6 = 12 * v4;
        while (1) {
          a2 = v3[1] + v5;
          if (*(_WORD*)(a2 + 2) != 0) {
            v7 = v15;
            if (v15 == nullptr) {
              goto LABEL_21;
            }
            (*(void (**)(_QWORD*))(*v15 + 48LL))(v15);
          }
          v5 += 12;
          if (v6 == v5) {
            goto LABEL_15;
          }
        }
      }
    }
    else {
      result = v13;
      v14 = a3;
      v13[0] = GameData_1fa7fc0;
      v13[1] = a2;
      v8 = *((int*)v3 + 19);
      v15 = v13;
      if ((int)v8 >= 1) {
        v9 = *((int*)v3 + 18);
        v10 = v9 + v8;
        v11 = 12 * v9;
        do {
          a2 = v3[1] + v11;
          if (*(_WORD*)(a2 + 2) != 0) {
            v7 = v15;
            if (v15 == nullptr) {
            LABEL_21:
              GameRoutine_60a310(v7, a2);
            }
            (*(void (**)(_QWORD*))(*v15 + 48LL))(v15);
          }
          ++v9;
          v11 += 12;
        } while (v9 < v10);
      LABEL_15:
        result = v15;
        if (v15 != v13) {
          if (v15 == nullptr) {
            return result;
          }
          v12 = 40;
          return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(
              *result + v12))(result, a2, a3);
        }
      }
    }
    v12 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(*result + v12))(
        result, a2, a3);
  }
  return result;
}

__int64 TransporterConst_89c4e0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int16 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f17c0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f17c0) != 0) {
    GameData_21f17b8 = game_HashString32("TransporterData");
    __cxa_guard_release(&GameData_21f17c0);
  }
  if (((**(__int64 (***)(__int64, int*))a2)(a2, &GameData_21f17b8) & 1) != 0) {
    v4 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v4 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = 1;
    if (*(_DWORD*)(a1 + 88) + *(_DWORD*)(a1 + 84) != 0) {
      v7 = *(int*)(a2 + 20);
      v8 = *(_DWORD*)(a1 + 80);
      *(_DWORD*)(a2 + 20) = v7 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v8;
      v9 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v9 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = BYTE1(v8);
      v11 = *(_QWORD*)(a1 + 8);
      v10 = *(_QWORD*)(a1 + 16);
      if (v11 != v10) {
        v12 = GameData_212c878[0];
        do {
          v15 = *(_WORD*)(v11 + 2);
          if (v15 != 0) {
            v16 = *(int*)(a2 + 20);
            *(_DWORD*)(a2 + 20) = v16 + 1;
            *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = v15;
            v17 = *(int*)(a2 + 20);
            *(_DWORD*)(a2 + 20) = v17 + 1;
            *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = HIBYTE(v15);
            if (*(_WORD*)(v11 + 4) != 0) {
              v18 = *(int*)(a2 + 20);
              v19 = *(_QWORD*)(v11 + 4);
              *(_DWORD*)(a2 + 20) = v18 + 1;
              v20 = *(_QWORD*)(a2 + 8);
              if (v19 == ((unsigned __int16)v19 | 0x100000000LL)) {
                *(_BYTE*)(v20 + v18) = 65;
                GameRoutine_65f570(
                    a2, *(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                   8LL * *(unsigned __int16*)(v11 + 4)));
              }
              else {
                *(_BYTE*)(v20 + v18) = 97;
                GameRoutine_65f570(
                    a2, *(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                   8LL * *(unsigned __int16*)(v11 + 4)));
                GameRoutine_65f240(a2, *(_QWORD*)(v11 + 4));
              }
            }
            else {
              v21 = *(int*)(a2 + 20);
              *(_DWORD*)(a2 + 20) = v21 + 1;
              *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = 33;
            }
          }
          else {
            v13 = *(int*)(a2 + 20);
            *(_DWORD*)(a2 + 20) = v13 + 1;
            *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = 0;
            v14 = *(int*)(a2 + 20);
            *(_DWORD*)(a2 + 20) = v14 + 1;
            *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = 0;
          }
          v11 += 12;
        } while (v11 != v10);
      }
    }
    else {
      v5 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v5 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = 0;
      v6 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v6 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = 0;
    }
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
}

bool TransporterConst_89ca00(unsigned __int16* a1)
{
  __int64* v1;
  __int64 v2;
  char v3;
  __int64 v5;
  _BOOL8 result;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;

  if (*a1 == 0 || (*((_BYTE*)a1 + 3) & 0x10) != 0) {
    return false;
  }
  v1 = GameData_212c878[0];
  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a1);
  v3 = *(_BYTE*)(v2 + 72);
  if ((*(_WORD*)(v2 + 336) & 0x304) != 0 || ((1LL << v3) & 0xE01F) == 0) {
    return false;
  }
  v5 = *(_QWORD*)(game_TransporterConst_List_instance_ + 8);
  if ((((0x10000000000LL << v3) | (1LL << *(_BYTE*)(v2 + 73))) &
       0xFFBFFFFFFFA39FFFLL) != 0) {
    return *(_DWORD*)(v5 + 84) < *(_DWORD*)(v5 + 72);
  }
  v8 = GameRoutine_89aac0(*(_QWORD**)(game_TransporterConst_List_instance_ + 8),
                          a1);
  if ((v8 & 0x80000000) != 0 || *a1 == 0) {
    return false;
  }
  v9 = *(_QWORD*)(v5 + 8) + 12LL * v8;
  result = true;
  v10 = *(unsigned __int16*)(v9 + 2);
  v11 = *(_QWORD*)(*(_QWORD*)(*v1 + 64) + 8LL * *a1);
  v12 = (((0x10000000000LL << *(_BYTE*)(v11 + 72)) |
          (1LL << *(_BYTE*)(v11 + 73))) &
         0xFFBFFFFFFFA39FFFLL) != 0
            ? 1
            : 999;
  if (v12 <= v10) {
    return false;
  }
  return result;
}

__int64 TransporterConst_89cc80(unsigned __int8 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v11[4];
  _QWORD* v12;
  _QWORD v13[4];
  _QWORD* v14;
  unsigned int v15;

  v15 = 0;
  v2 = *(_QWORD*)(game_TransporterConst_List_instance_ + 8);
  v11[0] = GameData_1fa7ec0;
  v11[1] = &v15;
  v3 = a1;
  v4 = v13;
  v12 = v11;
  v13[2] = v11;
  v13[0] = GameData_1fa80c0;
  v13[1] = v3;
  v14 = v13;
  v5 = *(unsigned int*)(v2 + 80);
  if ((int)v5 < 1) {
    goto LABEL_10;
  }
  v6 = 0;
  v7 = 12 * v5;
  do {
    a2 = *(_QWORD*)(v2 + 8) + v6;
    if (*(_WORD*)(a2 + 2) != 0) {
      if (v14 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*))(*v14 + 48LL))(v14);
    }
    v6 += 12;
  } while (v7 != v6);
  v4 = v14;
  if (v14 == v13) {
  LABEL_10:
    v8 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v4 + v8))(v4, a2);
LABEL_12:
  if (v12 == v11) {
    v9 = 32;
    goto LABEL_16;
  }
  if (v12 != nullptr) {
    v9 = 40;
  LABEL_16:
    (*(void (**)(_QWORD*, __int64))(*v12 + v9))(v12, a2);
  }
  return v15;
}

__int64 game_TransporterConst_List_Impl_GetStock(unsigned __int16* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD v6[4];
  _QWORD* v7;
  unsigned int v8;

  v8 = 0;
  v1 = *a1;
  v2 = *(_QWORD*)(game_TransporterConst_List_instance_ + 8);
  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v1);
  v7 = v6;
  v6[0] = GameData_1fa7f40;
  v6[1] = &v8;
  game_TransporterConst_List_Impl_EachData_alt1(v2, v3, v6);
  if (v7 == v6) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v7 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v7 + v4))((__int64)v7);
  }
  return v8;
}

__int64 TransporterConst_89ce60()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;

  v10 = 17;
  result = game_UnitPool_GetFirst(&v10);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 432);
    v2 = result;
    if (v1 == 0) {
      v1 = *(_QWORD*)(result + 440);
      if (v1 != 0) {
        v3 = *(unsigned __int8*)(v1 + 16);
        if (v3 <= 8) {
          v9 = v3 - 3;
          while (1) {
            if (v9 == 0) {
              v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v1 != 0) {
                break;
              }
            }
            if (++v9 == 6) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v1 = 0;
        }
      }
    }
    while (1) {
    LABEL_8:
      v4 = v1;
      GameRoutine_712a40(v2 + 828);
      v5 = *(_DWORD*)(v2 + 416);
      if ((v5 & 0x10000000) == 0) {
        *(_DWORD*)(v2 + 416) = v5 | 0x10000000;
        GameRoutine_6c51e0(v2);
        GameRoutine_6c6da0(v2);
        GameRoutine_6c6ec0(v2);
        *(_DWORD*)(v2 + 416) &= ~0x10000000u;
      }
      result = game_UnitActor_TryReload(v2);
      if (v4 == 0) {
        break;
      }
      v1 = *(_QWORD*)(v4 + 432);
      v2 = v4;
      if (v1 == 0) {
        v6 = *(_QWORD*)(v4 + 440);
        v2 = v4;
        if (v6 != 0) {
          v7 = *(unsigned __int8*)(v6 + 16);
          v1 = 0;
          v2 = v4;
          if (v7 <= 8) {
            v8 = v7 - 3;
            while (1) {
              if (v8 == 0) {
                v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v1 != 0) {
                  break;
                }
              }
              if (++v8 == 6) {
                v1 = 0;
                v2 = v4;
                goto LABEL_8;
              }
            }
            v2 = v4;
          }
        }
      }
    }
  }
  return result;
}

__int64

game_TransporterConst_List_Impl_UpdateMerge_closure_Invoke(__int64 result,
                                                           unsigned __int16* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  _BYTE v10[17];
  __int64* v11;

  v4 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * a2[2]) +
               24LL);
  if (0x6DB6DB6DB6DB6DB7LL *
              ((__int64)(*(_QWORD*)(v4 + 536) - *(_QWORD*)(v4 + 528)) >> 3) +
          *(int*)(v4 + 552) !=
      0) {
    v5 = *(__int64**)(v4 + 600);
    if (v5 != nullptr) {
      *(_QWORD*)&v10[1] = v2;
      *(_QWORD*)&v10[9] = v3;
      v6 = *(_QWORD*)(result + 8);
      v9 = *v5;
      v11 = &v9;
      v8 = GameRoutine_89d820(v6, &v9, std___1_piecewise_construct_ptr, &v11,
                              v10);
      LODWORD(v11) = *a2;
      return GameRoutine_6e5900(v8 + 24, &v11);
    }
  }
  return result;
}

__int64 game_TransporterConst_List_Impl_GetStock_closure_Invoke(__int64 result,
                                                                __int64 a2)
{
  **(_DWORD**)(result + 8) += *(unsigned __int16*)(a2 + 2);
  return result;
}

__int64 game_TransporterConst_List_Impl_EachData_closure_Invoke(__int64 result,
                                                                __int64 a2)
{
  __int64 v2;

  if (*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                 8LL * *(unsigned __int16*)(a2 + 4)) ==
      *(_QWORD*)(result + 8)) {
    v2 = *(_QWORD*)(*(_QWORD*)(result + 16) + 32LL);
    if (v2 == 0) {
      GameRoutine_60a310((unsigned __int8)v2, a2);
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
  }
  return result;
}

__int64 game_TransporterConst_List_Impl_EachData_closure0_Invoke(__int64 result,
                                                                 __int64 a2)
{
  __int64 v2;

  if (*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                 8LL * *(unsigned __int16*)(a2 + 4)) ==
      *(_QWORD*)(result + 8)) {
    v2 = *(_QWORD*)(*(_QWORD*)(result + 16) + 32LL);
    if (v2 == 0) {
      GameRoutine_60a310((unsigned __int8)v2, a2);
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
  }
  return result;
}

__int64 game_TransporterConst_List_Impl_EachIndex_closure_Invoke_8a1610(
    __int64 result, unsigned __int16* a2)
{
  __int64 v2;
  int v3;

  if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * a2[2]) +
                          73LL) == *(unsigned __int8*)(result + 8)) {
    v2 = *(_QWORD*)(*(_QWORD*)(result + 16) + 32LL);
    v3 = *a2;
    if (v2 == 0) {
      GameRoutine_60a310(0, a2);
    }
    return (*(__int64 (**)(__int64, int*))(*(_QWORD*)v2 + 48LL))(v2, &v3);
  }
  return result;
}

__int64 game_TransporterConst_List_Impl_EachIndex_closure_Invoke_8a1780(
    __int64 result, unsigned __int16* a2)
{
  __int64 v2;
  int v3;

  if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * a2[2]) +
                          72LL) == *(unsigned __int8*)(result + 8)) {
    v2 = *(_QWORD*)(*(_QWORD*)(result + 16) + 32LL);
    v3 = *a2;
    if (v2 == 0) {
      GameRoutine_60a310(0, a2);
    }
    return (*(__int64 (**)(__int64, int*))(*(_QWORD*)v2 + 48LL))(v2, &v3);
  }
  return result;
}

#pragma GCC visibility pop
