#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e3a80(_QWORD);
__int64 GameRoutine_6e5a40(_QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(__int64 result, char,
                                                    unsigned __int8,
                                                    unsigned __int8);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_2131c30[52];
extern __int64 game_gameui_MenuAnimator_instance_;
extern __int64* GameData_212d638[10];
__int64 BasicMenu_16dd8b0(__int64 a1, int a2, int a3);
__int64 BasicMenu_16df280(__int64 a1, __int64 a2, unsigned __int8 a3,
                          unsigned __int8 a4, char a5);
__int64 BasicMenu_16e17e0(_QWORD* a1);
__int64 BasicMenu_16e1e50(__int64 a1, __int64 a2);
__int64 BasicMenu_16e2280(__int64 a1, int a2, char a3, char a4);
__int64 BasicMenu_16e2460(_QWORD* a1, char a2, char a3);
__int64 BasicMenu_16e25a0(__int64 result, char a2);
__int64 game_menu_BasicMenu_StickRCall_lambda0_Invoke(__int64 a1, _QWORD* a2);

__int64 BasicMenu_16dd8b0(__int64 a1, int a2, int a3)
{
  unsigned __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;

  *(_DWORD*)(a1 + 660) = a3;
  *(_DWORD*)(a1 + 664) = a3;
  *(_DWORD*)(a1 + 656) = a2 - 1;
  *(_QWORD*)(a1 + 792) = *(_QWORD*)(a1 + 784);
  *(_QWORD*)(a1 + 816) = *(_QWORD*)(a1 + 808);
  if (a2 < 1) {
    v16 = 0;
    result = GameRoutine_6e5a40(a1 + 784, 1, &v16);
    v11 = *(_QWORD*)(a1 + 816);
    v12 = *(_QWORD*)(a1 + 808);
    v16 = 0;
    v14 = v11 - v12;
    v13 = v14 == 0;
    v15 = v14 >> 2;
    if (!v13) {
      if (v15 < 2) {
        return result;
      }
      v10 = v12 + 4;
      goto LABEL_8;
    }
    v9 = 1 - v15;
  }
  else {
    v4 = (unsigned int)a2;
    v16 = 0;
    result = GameRoutine_6e5a40(a1 + 784, (unsigned int)a2, &v16);
    v6 = *(_QWORD*)(a1 + 816);
    v7 = *(_QWORD*)(a1 + 808);
    v16 = 0;
    v8 = (v6 - v7) >> 2;
    v9 = v4 - v8;
    if (v4 <= v8) {
      if (v4 >= v8) {
        return result;
      }
      v10 = v7 + 4 * v4;
    LABEL_8:
      *(_QWORD*)(a1 + 816) = v10;
      return result;
    }
  }
  return GameRoutine_6e5a40(a1 + 808, v9, &v16);
}

__int64 BasicMenu_16df280(__int64 a1, __int64 a2, unsigned __int8 a3,
                          unsigned __int8 a4, char a5)
{
  __int64 result;
  int v7;
  char v8;
  unsigned __int8 v9;
  unsigned __int8 v10;
  __int64 v11;

  result = *(_QWORD*)(a1 + 336);
  if ((a3 & 1) == 0 && result == a2) {
    v7 = 4;
    if (result == 0) {
      goto LABEL_13;
    }
  LABEL_9:
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
    if ((result & 1) != 0) {
      v7 = 4;
    }
    else {
      v7 = 0;
    }
    goto LABEL_13;
  }
  if (result != 0) {
    v8 = a5;
    v9 = a4;
    v10 = a3;
    v11 = a2;
    (*(void (**)(__int64))(*(_QWORD*)result + 168LL))(result);
    a2 = v11;
    a3 = v10;
    a4 = v9;
    a5 = v8;
  }
  *(_QWORD*)(a1 + 336) = a2;
  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, a4 & 1, (a3 & a4 & 1) == 0,
                                              a5 & 1);
  result = *(_QWORD*)(a1 + 336);
  if (result == 0) {
    v7 = 4;
    goto LABEL_13;
  }
  (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
  result = *(_QWORD*)(a1 + 336);
  v7 = 4;
  if (result != 0) {
    goto LABEL_9;
  }
LABEL_13:
  *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v7;
  return result;
}

__int64 BasicMenu_16e17e0(_QWORD* a1)
{
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  bool v7;
  _BOOL4 v8;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 472LL))(a1) & 1) != 0) {
    return 0;
  }
  v3 = a1[74];
  v4 = a1[75];
  if (v3 != v4) {
    for (i = v3 + 8;; i += 8) {
      v6 = *(_QWORD*)(i - 8);
      v7 = v6 == -1 || game_gameui_MenuAnimator_instance_ == 0;
      if (v7) {
        v8 = false;
      }
      else {
        v8 = v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360);
        if (v8) {
          return !v8;
        }
      }
      v7 = i == v4;
      if (v7) {
        return !v8;
      }
    }
  }
  return 1;
}

__int64 BasicMenu_16e1e50(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE v7[32];
  _BYTE* v8;

  result = *(_QWORD*)(a2 + 32);
  if (result == 0) {
    return result;
  }
  v5 = *(_QWORD*)(a1 + 232);
  v4 = *(_QWORD*)(a1 + 240);
  if ((unsigned __int64)((v4 - v5) >> 3) < 2) {
    return result;
  }
  if (result == a2) {
    v8 = v7;
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)result + 24LL))(result, v7);
    if (v5 == v4) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v8 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  if (v5 != v4) {
  LABEL_5:
    GameRoutine_16e3a80(v5);
  }
LABEL_6:
  result = (__int64)v8;
  if (v8 == v7) {
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(void))(*(_QWORD*)v8 + v6))();
}

__int64 BasicMenu_16e2280(__int64 a1, int a2, char a3, char a4)
{
  char* v4;
  char* v5;
  int v7;
  __int64 v8;
  int v9;
  unsigned __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v16;

  if ((a2 & 0x80000000) == 0) {
    v4 = *(char**)(a1 + 232);
    v5 = *(char**)(a1 + 240);
    if (v4 != v5) {
      if ((a3 & 1) != 0) {
        v7 = 0;
        if ((a4 & 1) == 0) {
          while (1) {
            v8 = *(_QWORD*)v4;
            if (((*(__int64 (**)(_QWORD))(**(_QWORD**)v4 + 48LL))(
                     *(_QWORD*)v4) &
                 1) != 0) {
              if (a2 == v7) {
                return v8;
              }
              ++v7;
            }
            v4 += 8;
            if (v4 == v5) {
              return 0;
            }
          }
        }
        while (1) {
          v8 = *(_QWORD*)v4;
          if (((*(__int64 (**)(_QWORD))(**(_QWORD**)v4 + 48LL))(*(_QWORD*)v4) &
               1) != 0 &&
              ((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 40LL))(v8) & 1) != 0) {
            if (a2 == v7) {
              return v8;
            }
            ++v7;
          }
          v4 += 8;
          if (v4 == v5) {
            return 0;
          }
        }
      }
      if ((a4 & 1) != 0) {
        v9 = 0;
        while (1) {
          v8 = *(_QWORD*)v4;
          if (((*(__int64 (**)(_QWORD))(**(_QWORD**)v4 + 40LL))(*(_QWORD*)v4) &
               1) != 0) {
            if (a2 == v9) {
              return v8;
            }
            ++v9;
          }
          v4 += 8;
          if (v4 == v5) {
            return 0;
          }
        }
      }
      v10 = v5 - v4 - 8;
      v11 = (v10 >> 3) + 1;
      if (v10 >= 0x18) {
        v16 = 0;
        while (a2 != (_DWORD)v16) {
          if (a2 == (_DWORD)v16 + 1) {
            v4 += 8;
            return *(_QWORD*)v4;
          }
          if (a2 == (_DWORD)v16 + 2) {
            return *((_QWORD*)v4 + 2);
          }
          if (a2 == (_DWORD)v16 + 3) {
            return *((_QWORD*)v4 + 3);
          }
          v4 += 32;
          v16 += 4;
          v12 = v16;
          if ((v11 & 0x3FFFFFFFFFFFFFFCLL) == v16) {
            goto LABEL_23;
          }
        }
        return *(_QWORD*)v4;
      }
      v12 = 0;
    LABEL_23:
      v13 = v11 & 3;
      if (v13 != 0) {
        v14 = a2 - v12;
        v8 = 0;
        while (v14 != 0) {
          v4 += 8;
          --v14;
          if (--v13 == 0) {
            return v8;
          }
        }
        return *(_QWORD*)v4;
      }
    }
  }
  return 0;
}

__int64 BasicMenu_16e2460(_QWORD* a1, char a2, char a3)
{
  __int64* v3;
  __int64* v4;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;

  v3 = (__int64*)a1[29];
  v4 = (__int64*)a1[30];
  if (v3 == v4) {
    return (unsigned int)-1;
  }
  else {
    v6 = 0;
    if ((a2 & 1) != 0) {
      if ((a3 & 1) == 0) {
        while (1) {
          v8 = *v3;
          if (((*(__int64 (**)(__int64))(*(_QWORD*)*v3 + 48LL))(*v3) & 1) !=
              0) {
            if (v8 == a1[42]) {
              return v6;
            }
            ++v6;
          }
          if (++v3 == v4) {
            return (unsigned int)-1;
          }
        }
      }
      while (1) {
        v7 = *v3;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)*v3 + 48LL))(*v3) & 1) != 0 &&
            ((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 40LL))(v7) & 1) != 0) {
          if (v7 == a1[42]) {
            return v6;
          }
          ++v6;
        }
        if (++v3 == v4) {
          return (unsigned int)-1;
        }
      }
    }
    if ((a3 & 1) != 0) {
      while (1) {
        v11 = *v3;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)*v3 + 40LL))(*v3) & 1) != 0) {
          if (v11 == a1[42]) {
            return v6;
          }
          ++v6;
        }
        if (++v3 == v4) {
          return (unsigned int)-1;
        }
      }
    }
    while (1) {
      v9 = *v3++;
      if (v9 == a1[42]) {
        break;
      }
      ++v6;
      if (v3 == v4) {
        return (unsigned int)-1;
      }
    }
  }
  return v6;
}

__int64 BasicMenu_16e25a0(__int64 result, char a2)
{
  char* v2;
  char* v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;

  v2 = *(char**)(result + 232);
  v3 = *(char**)(result + 240);
  if (v2 == v3) {
    return result;
  }
  v4 = result;
  v5 = 0;
  v6 = *(__int64**)(result + 232);
  while (1) {
    v7 = *v6++;
    if (v7 == *(_QWORD*)(result + 336)) {
      break;
    }
    ++v5;
    if (v6 == (__int64*)v3) {
      return result;
    }
  }
  v8 = v3 - v2;
  v9 = a2;
  v10 = (unsigned __int64)(v8 + 0x7FFFFFFF8LL) >> 3;
  if (v5 >= (int)v10) {
    v11 = (unsigned int)v10;
  }
  else {
    v11 = (unsigned int)v5;
  }
  if ((v11 & 0x80000000) != 0) {
  LABEL_16:
    v12 = (int)v11;
    if ((int)v11 >= (unsigned __int64)(v8 >> 3)) {
      if ((_DWORD)v11 != v5) {
        goto LABEL_24;
      }
      return result;
    }
    while (1) {
      v15 = *(_QWORD*)&v2[8 * v12];
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 48LL))(v15);
      if ((result & 1) != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 40LL))(v15);
        if ((result & 1) != 0) {
          break;
        }
      }
      v2 = *(char**)(v4 + 232);
      if (++v12 >=
          (unsigned __int64)((__int64)(*(_QWORD*)(v4 + 240) - (_QWORD)v2) >>
                             3)) {
        goto LABEL_23;
      }
    }
  }
  else {
    v12 = v11;
    while (1) {
      v14 = *(_QWORD*)(*(_QWORD*)(v4 + 232) + 8 * v12);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 48LL))(v14);
      if ((result & 1) != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 40LL))(v14);
        if ((result & 1) != 0) {
          break;
        }
      }
      if (v12-- <= 0) {
        v2 = *(char**)(v4 + 232);
        a2 = v9;
        v8 = *(_QWORD*)(v4 + 240) - (_QWORD)v2;
        goto LABEL_16;
      }
    }
  }
  LODWORD(v11) = v12;
LABEL_23:
  a2 = v9;
  if ((_DWORD)v11 != v5) {
  LABEL_24:
    if ((v11 & 0x80000000) == 0) {
      v16 = *(char**)(v4 + 232);
      v17 = *(char**)(v4 + 240);
      if (v16 != v17) {
        v18 = v17 - v16 - 8;
        v19 = (v18 >> 3) + 1;
        if (v18 >= 0x18) {
          v24 = 0;
          while ((_DWORD)v11 != (_DWORD)v24) {
            if ((_DWORD)v11 == (_DWORD)v24 + 1) {
              v16 += 8;
              break;
            }
            if ((_DWORD)v11 == (_DWORD)v24 + 2) {
              v16 += 16;
              break;
            }
            if ((_DWORD)v11 == (_DWORD)v24 + 3) {
              v16 += 24;
              break;
            }
            v16 += 32;
            v24 += 4;
            v20 = v24;
            if ((v19 & 0x3FFFFFFFFFFFFFFCLL) == v24) {
              goto LABEL_28;
            }
          }
        LABEL_44:
          v23 = *(_QWORD*)v16;
          result = *(_QWORD*)(v4 + 336);
          if ((a2 & 1) == 0) {
          LABEL_45:
            if (result == v23) {
              goto LABEL_50;
            }
          }
        LABEL_46:
          if (result != 0) {
            (*(void (**)(__int64))(*(_QWORD*)result + 168LL))(result);
            a2 = v9;
          }
          *(_QWORD*)(v4 + 336) = v23;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v4, 1, (a2 & 1) == 0, 0);
          result = *(_QWORD*)(v4 + 336);
          if (result == 0) {
            v25 = 4;
          LABEL_55:
            *(_DWORD*)(v4 + 356) = *(_DWORD*)(v4 + 356) & 0xFFFFFFFB | v25;
            return result;
          }
          (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
          result = *(_QWORD*)(v4 + 336);
        LABEL_50:
          v25 = 4;
          if (result != 0) {
            result =
                (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
            if ((result & 1) != 0) {
              v25 = 4;
            }
            else {
              v25 = 0;
            }
          }
          goto LABEL_55;
        }
        v20 = 0;
      LABEL_28:
        v21 = v19 & 3;
        if (v21 != 0) {
          v22 = v11 - v20;
          while (v22 != 0) {
            v16 += 8;
            --v22;
            if (--v21 == 0) {
              goto LABEL_32;
            }
          }
          goto LABEL_44;
        }
      }
    }
  LABEL_32:
    v23 = 0;
    result = *(_QWORD*)(v4 + 336);
    if ((a2 & 1) == 0) {
      goto LABEL_45;
    }
    goto LABEL_46;
  }
  return result;
}

__int64 game_menu_BasicMenu_StickRCall_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  _DWORD* v3;
  __int64 result;

  v2 = *a2;
  if (*a2 == 0) {
    return 0;
  }
  v3 = *(_DWORD**)(a1 + 8);
  result = __dynamic_cast(*a2, GameData_212d638[0], GameData_2131c30[0], 0);
  if (result == 0) {
    return result;
  }
  if ((*(_BYTE*)(result + 144) & 1) != 0) {
    return 0;
  }
  v3[50] = *(_DWORD*)(v2 + 40);
  (*(void (**)(_DWORD*))(*(_QWORD*)v3 + 352LL))(v3);
  return 2;
}

#pragma GCC visibility pop
