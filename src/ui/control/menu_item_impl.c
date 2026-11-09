#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* Element_1886290(__int64, _QWORD*);
__int64 Element_1884860(__int64, __int64, __int64, __int64);
__int64 Element_1888840(__int64);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1888c80(__int64, __int64, __int64);
__int64 GameRoutine_188c4a0(_QWORD, _QWORD);
__int64 GameRoutine_18ae5e0(void);
__int64 GameRoutine_576600(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Registration_a4da40(_QWORD);
__int64 __cxa_guard_acquire(_QWORD, _QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64* Element_18850d0(__int64, __int64, __int64);
extern _UNKNOWN GameData_22416d8;
extern _UNKNOWN* GameData_2130ea8;
extern __int64 (*GameData_20ff810[])();
extern __int64 (*ui_Event_vtable[])();
extern __int64 (*ui_control_MenuItem_vtable[])();
extern __int64 GameData_2132070;
extern __int64 GameData_21f1e08;
extern __int64 GameData_22416d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d890[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64* MenuItem_188afa0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4);
__int64* MenuItem_188b0e0(_QWORD* a1, __int64 a2, __int64 a3);
_QWORD* MenuItem_188b5e0(_QWORD* result, __int64 a2);
_QWORD* MenuItem_188b880(_QWORD* result, __int64 a2);
__int64 MenuItem_188be80(_QWORD* a1, char a2);
__int64 MenuItem_188bf10(__int64 a1, __int64 a2);
_QWORD* MenuItem_188c0a0(_QWORD* a1, char a2, int a3);
_QWORD* MenuItem_188c0f0(_QWORD* a1, char a2, int a3);
_QWORD* MenuItem_188c140(_QWORD* a1, char a2);
_QWORD* MenuItem_188c190(_QWORD* a1, char a2);
_QWORD* MenuItem_188c220(_QWORD* a1, _QWORD* a2);
_QWORD* MenuItem_188c270(_QWORD* result, __int64 a2, int* a3);
__int64 MenuItem_188c2d0();
__int64 MenuItem_188d320(__int64* a1);

__int64* MenuItem_188afa0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6;
  __int64* result;
  __int64 v8;
  __int64* v9;
  __int64 v11;
  _QWORD v12[2];
  const char* v13;
  __int64 v14;

  Element_1884860((__int64)a1, a2, a3, a4);
  a1[129] = 0;
  a1[132] = 0;
  *a1 = ui_control_MenuItem_vtable;
  a1[9] = GameData_20ff810;
  a1[130] = a1 + 130;
  a1[131] = a1 + 130;
  v12[0] = "Name";
  v12[1] = 4;
  v6 = GameRoutine_576600(a2);
  if (v6 != 0) {
    v13 = (const char*)v6;
    v14 = strlen(v6);
    if (v14 != 0) {
      GameRoutine_1888c80((__int64)(a1 + 26), (__int64)v12, (__int64)&v13);
    }
  }
  v13 = "Name";
  v14 = 4;
  result = Element_1886290((__int64)a1, &v13);
  v9 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_22416d8, v8);
    if ((_DWORD)result != 0) {
      GameData_22416d0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v11);
      result = (__int64*)__cxa_guard_release(&GameData_22416d8);
    }
  }
  if (v9 == nullptr) {
    goto LABEL_13;
  }
  result = (__int64*)(*(__int64 (**)(__int64*))(*v9 + 16))(v9);
  if (result != &GameData_22416d0) {
    do {
      result = (__int64*)*result;
    } while (result != &GameData_22416d0 && result != nullptr);
    if (result == nullptr) {
    LABEL_13:
      v9 = nullptr;
    }
  }
  a1[129] = v9;
  return result;
}

__int64* MenuItem_188b0e0(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64* result;
  __int64 v5;
  __int64* v6;
  __int64 v8;
  _QWORD v9[2];

  Element_18850d0((__int64)a1, a2, a3);
  a1[129] = 0;
  a1[132] = 0;
  *a1 = ui_control_MenuItem_vtable;
  a1[9] = GameData_20ff810;
  a1[130] = a1 + 130;
  a1[131] = a1 + 130;
  v9[0] = "Name";
  v9[1] = 4;
  result = Element_1886290((__int64)a1, v9);
  v6 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_22416d8, v5);
    if ((_DWORD)result != 0) {
      GameData_22416d0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v8);
      result = (__int64*)__cxa_guard_release(&GameData_22416d8);
    }
  }
  if (v6 == nullptr) {
    goto LABEL_10;
  }
  result = (__int64*)(*(__int64 (**)(__int64*))(*v6 + 16))(v6);
  if (result != &GameData_22416d0) {
    do {
      result = (__int64*)*result;
    } while (result != &GameData_22416d0 && result != nullptr);
    if (result == nullptr) {
    LABEL_10:
      v6 = nullptr;
    }
  }
  a1[129] = v6;
  return result;
}

_QWORD* MenuItem_188b5e0(_QWORD* result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v5;
  __int64 v6;

  v2 = (_QWORD*)result[131];
  v3 = result + 130;
  v5 = result;
  if (v2 == result + 130) {
    goto LABEL_4;
  }
  while (v2[2] != a2) {
    v2 = (_QWORD*)v2[1];
    if (v2 == v3) {
      goto LABEL_4;
    }
  }
  if (v2 == v3) {
  LABEL_4:
    result = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
    v6 = v5[130];
    result[1] = v3;
    result[2] = a2;
    *result = v6;
    *(_QWORD*)(v6 + 8) = result;
    v5[130] = result;
    ++v5[132];
  }
  return result;
}

_QWORD* MenuItem_188b880(_QWORD* result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  char* v6;
  char* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  char* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  char* v20;
  char* v21;
  char* v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  signed __int64 v26;
  bool v27;
  signed __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  signed __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  __int64 v42;
  char* v43;
  _QWORD* v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  char* v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;

  v63 = 0;
  v64 = 0;
  v2 = (_QWORD*)result[131];
  v3 = result + 130;
  v61 = nullptr;
  v62 = 0;
  v59 = 0;
  v60 = nullptr;
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v2 != result + 130) {
    v5 = 0;
    v6 = nullptr;
    v7 = nullptr;
    v8 = 0;
    v57 = result + 130;
    while (1) {
      v12 = v7 - v6;
      if (v7 == v6) {
        v13 = 0;
      }
      else {
        v13 = ((v7 - v6) << 6) - 1;
      }
      v9 = v5 + v8;
      if (v13 != v5 + v8) {
        goto LABEL_6;
      }
      if (v5 >= 0x200) {
        break;
      }
      v15 = (char*)v62;
      v16 = (char*)v59;
      if (v12 >= v62 - v59) {
        v17 = v4;
        v58 = v59;
        if (v62 == v59) {
          v18 = 1;
        }
        else {
          v18 = (__int64)(v62 - v59) >> 2;
        }
        if (v18 >> 61 != 0) {
          goto LABEL_105;
        }
        v19 = fw_memory_HeapManager_Allocate(*v17, 8 * v18, 16, 0);
        v20 = (char*)(v19 + v12);
        v21 = (char*)(v19 + 8 * v18);
        result = (_QWORD*)fw_memory_HeapManager_Allocate(*v17, 4096, 16, 0);
        if (v12 == 8 * v18) {
          v3 = v57;
          if (v7 != v6) {
            v4 = v17;
            v20 -= 8 * (((v12 >> 3) + 1 +
                         ((unsigned __int64)((v12 >> 3) + 1) >> 63)) >>
                        1);
            *(_QWORD*)v20 = result;
            v22 = v20 + 8;
            goto LABEL_26;
          }
          v4 = v17;
          v37 = result;
          v20 = (char*)fw_memory_HeapManager_Allocate(*v17, 8, 16, 0);
          v38 = 128;
          if (*(_QWORD*)(*v17 + 200LL) == 0) {
            v38 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(*v17 + v38);
          v23 = v58;
          *(_QWORD*)v20 = v37;
          v22 = v20 + 8;
          v19 = (__int64)v20;
          v21 = v20 + 8;
        }
        else {
          v3 = v57;
          *(_QWORD*)v20 = result;
          v22 = v20 + 8;
          v4 = v17;
          if (v7 == v6) {
            v23 = v58;
          }
          else {
            do {
            LABEL_26:
              if (v20 == (char*)v19) {
                if (v22 >= v21) {
                  if (v21 == v20) {
                    v29 = 1;
                  }
                  else {
                    v29 = (v21 - v20) >> 2;
                  }
                  if (v29 >> 61 != 0) {
                    goto LABEL_105;
                  }
                  v30 = fw_memory_HeapManager_Allocate(*v4, 8 * v29, 16, 0);
                  v31 = v30;
                  v24 = (char*)(v30 + ((2 * v29 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                  v32 = v22 - v20;
                  v27 = v22 == v20;
                  v22 = v24;
                  if (!v27) {
                    v22 = &v24[v32];
                    v33 =
                        (_QWORD*)(v30 + ((2 * v29 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                    do {
                      v34 = *(_QWORD*)v20;
                      v20 += 8;
                      v32 -= 8LL;
                      *v33++ = v34;
                    } while (v32 != 0);
                  }
                  v21 = (char*)(v30 + 8 * v29);
                  v35 = 128;
                  if (*(_QWORD*)(*v4 + 200LL) == 0) {
                    v35 = 56;
                  }
                  result = (_QWORD*)nn_mem_StandardAllocator_Free(*v4 + v35);
                  v19 = v31;
                }
                else {
                  v26 = v22 - v20;
                  v28 = v22 - v20;
                  v27 = v22 == v20;
                  v22 +=
                      8 *
                      ((((v21 - v22) >> 3) + 1 +
                        ((unsigned __int64)(((v21 - v22) >> 3) + 1) >> 63)) >>
                       1);
                  v24 = &v22[-v26];
                  if (!v27) {
                    result = (_QWORD*)memmove(&v22[-v26], v20, v28);
                  }
                }
              }
              else {
                v24 = v20;
              }
              v25 = *((_QWORD*)v7 - 1);
              v7 -= 8;
              *((_QWORD*)v24 - 1) = v25;
              v20 = v24 - 8;
            } while (v7 != v60);
            v23 = v59;
          }
        }
        v59 = v19;
        v60 = v20;
        v61 = v22;
        v62 = (unsigned __int64)v21;
        if (v23 != 0) {
          v39 = 128;
          if (*(_QWORD*)(*v4 + 200LL) == 0) {
            v39 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(*v4 + v39);
        }
        goto LABEL_5;
      }
      result = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 4096, 16, 0);
      if (v15 == v7) {
        if (v6 == v16) {
          if (v7 == v6) {
            v40 = 1;
          }
          else {
            v40 = (v15 - v6) >> 2;
          }
          if (v40 >> 61 != 0) {
          LABEL_105:
            GameRoutine_60a210(result);
          }
          v41 = result;
          v42 = fw_memory_HeapManager_Allocate(*v4, 8 * v40, 16, 0);
          v36 = (char*)(v42 + ((2 * v40 + 6) & 0xFFFFFFFFFFFFFFF8LL));
          v43 = v36;
          if (v7 != v6) {
            v43 = &v36[v12];
            v44 = (_QWORD*)(v42 + ((2 * v40 + 6) & 0xFFFFFFFFFFFFFFF8LL));
            v45 = v6;
            do {
              v46 = *(_QWORD*)v45;
              v45 += 8;
              v12 -= 8;
              *v44++ = v46;
            } while (v12 != 0);
          }
          v59 = v42;
          v60 = (char*)(v42 + ((2 * v40 + 6) & 0xFFFFFFFFFFFFFFF8LL));
          v61 = v43;
          v62 = v42 + 8 * v40;
          if (v6 != nullptr) {
            v47 = 128;
            if (*(_QWORD*)(*v4 + 200LL) == 0) {
              v47 = 56;
            }
            nn_mem_StandardAllocator_Free(*v4 + v47);
          }
          result = v41;
        }
        else {
          v36 = v6;
        }
        *((_QWORD*)v36 - 1) = result;
        v14 = *((_QWORD*)v60 - 1);
        goto LABEL_13;
      }
      *(_QWORD*)v7 = result;
      v61 += 8;
    LABEL_5:
      v5 = v63;
      v8 = v64;
      v6 = v60;
      v7 = v61;
      v9 = v64 + v63;
    LABEL_6:
      v10 = v2[2];
      ++v8;
      v11 = *(_QWORD*)&v6[8 * (v9 >> 9)];
      v64 = v8;
      *(_QWORD*)(v11 + 8 * (v9 & 0x1FF)) = v10;
      v2 = (_QWORD*)v2[1];
      if (v2 == v3) {
        if (v8 == 0) {
          goto LABEL_78;
        }
        while (1) {
          v48 = *(_QWORD*)(*(_QWORD*)&v6[8 * (v5 >> 9)] + 8 * (v5 & 0x1FF));
          if (v5 + 1 >= 0x400) {
            break;
          }
          ++v5;
          if (v48 != 0) {
            goto LABEL_66;
          }
        LABEL_67:
          if (--v8 == 0) {
            v60 = v6;
            v63 = v5;
            goto LABEL_78;
          }
        }
        if (*(_QWORD*)v6 != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v49 = 128;
          }
          else {
            v49 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(*v4 + v49);
        }
        v6 += 8;
        v5 -= 511LL;
        if (v48 == 0) {
          goto LABEL_67;
        }
      LABEL_66:
        result = (*(_QWORD * (**)(__int64* __return_ptr, __int64, __int64))(
            *(_QWORD*)v48 + 16LL))(&v65, v48, a2);
        goto LABEL_67;
      }
    }
    v63 = v5 - 512;
    v14 = *(_QWORD*)v6;
    v60 = v6 + 8;
  LABEL_13:
    v65 = v14;
    result = (_QWORD*)GameRoutine_188c4a0(&v59, &v65);
    goto LABEL_5;
  }
  v7 = nullptr;
  v6 = nullptr;

LABEL_78:
  v64 = 0;
  v50 = (v7 - v6) >> 3;
  if (v50 >= 3) {
    v51 = v7 - v6 - 8;
    do {
      if (*(_QWORD*)v6 != 0) {
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v52 = 128;
        }
        else {
          v52 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*v4 + v52);
      }
      v6 += 8;
      v50 = v51 >> 3;
      v51 -= 8;
    } while (v50 > 2);
    v60 = v6;
  }
  if (v50 == 1) {
    v53 = 256;
  }
  else {
    if (v50 != 2) {
      goto LABEL_92;
    }
    v53 = 512;
  }
  v63 = v53;

LABEL_92:
  while (v6 != v7) {
    if (*(_QWORD*)v6 != 0) {
      if (*(_QWORD*)(*v4 + 200LL) != 0) {
        v54 = 128;
      }
      else {
        v54 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*v4 + v54);
    }
    v6 += 8;
  }
  if (v59 != 0) {
    v55 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v55 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*v4 + v55);
  }
  return result;
}

__int64 MenuItem_188be80(_QWORD* a1, char a2)
{
  int v4;
  __int64 result;
  __int64 v6;

  v4 = a2 & 1;
  result = (*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1);
  a1[36] = a1[36] & 0xFFFFFFFFFFFFFFFELL | a2 & 1;
  if (v4 != (result & 1)) {
    v6 = 344;
    if ((a2 & 1) != 0) {
      v6 = 352;
    }
    return (*(__int64 (**)(_QWORD*))(*a1 + v6))(a1);
  }
  return result;
}

__int64 MenuItem_188bf10(__int64 a1, __int64 a2)
{
  __int64* v4;
  char v5;
  __int64 v6;
  char v7;
  __int64 v8;
  char* v9;
  _QWORD v11[4];
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  if (*(_QWORD*)(a1 + 1032) != 0) {
    v4 = msg_MessageManager_instance__ptr[0];
    v5 = Registration_a4da40(*msg_MessageManager_instance__ptr[0]);
    v6 = *(_QWORD*)(a1 + 1032);
    v7 = v5;
    if ((v5 & 1) != 0) {
      v8 = *v4;
      v14 = -1;
      v15 = -1;
      v16 = -1;
      v17 = -1;
      v18 = -1;
      v19 = -1;
      v20 = -1;
      v21 = -1;
      v22 = -1;
      v23 = -1;
      v24 = -1;
      v25 = -1;
      v11[0] = GameData_212e348 + 2;
      v11[1] = 0xFFFF0001FFFF0000LL;
      v11[2] = 0xFFFF0004FFFF0002LL;
      v11[3] = 0xFFFF0006FFFF0005LL;
      v26 = 8;
      v12 = -65529;
      v13 = -65528;
      v9 = (char*)GameRoutine_a4dbe0(v8, a2, 0, v11);
    }
    else {
      v9 = &GameData_1a9f09e;
    }
    GameRoutine_156c5d0(v6, v9, 0);
  }
  else {
    v7 = 0;
  }
  return v7 & 1;
}

_QWORD* MenuItem_188c0a0(_QWORD* a1, char a2, int a3)
{
  __int64* v4;
  int v5;
  char* v6;
  char v7;
  int v8;

  v7 = a2;
  v8 = a3;
  v4 = GameData_212d890[0] + 2;
  v5 = 30;
  v6 = &v7;
  return MenuItem_188b880(a1, (__int64)&v4);
}

_QWORD* MenuItem_188c0f0(_QWORD* a1, char a2, int a3)
{
  __int64* v4;
  int v5;
  char* v6;
  char v7;
  int v8;

  v7 = a2;
  v8 = a3;
  v4 = GameData_212d890[0] + 2;
  v5 = 29;
  v6 = &v7;
  return MenuItem_188b880(a1, (__int64)&v4);
}

_QWORD* MenuItem_188c140(_QWORD* a1, char a2)
{
  __int64 (**v3)();
  int v4;
  char* v5;
  char v6;
  int v7;

  v6 = a2;
  v7 = 1;
  v3 = ui_Event_vtable;
  v4 = 32;
  v5 = &v6;
  return MenuItem_188b880(a1, (__int64)&v3);
}

_QWORD* MenuItem_188c190(_QWORD* a1, char a2)
{
  __int64 (**v3)();
  int v4;
  char* v5;
  char v6;
  int v7;

  v6 = a2;
  v7 = 1;
  v3 = ui_Event_vtable;
  v4 = 31;
  v5 = &v6;
  return MenuItem_188b880(a1, (__int64)&v3);
}

_QWORD* MenuItem_188c220(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 (**v4)();
  int v5;
  _QWORD* v6;
  _QWORD v7[2];

  v2 = a2[1];
  v7[0] = *a2;
  v7[1] = v2;
  v4 = ui_Event_vtable;
  v5 = 6;
  v6 = v7;
  return MenuItem_188b880(a1, (__int64)&v4);
}

_QWORD* MenuItem_188c270(_QWORD* result, __int64 a2, int* a3)
{
  __int64 (**v3)();
  int v4;
  int* v5;
  int v6;

  if ((result[36] & 2) != 0) {
    v6 = *a3;
    v3 = ui_Event_vtable;
    v4 = 39;
    v5 = &v6;
    return MenuItem_188b880(result, (__int64)&v3);
  }
  return result;
}

__int64 MenuItem_188c2d0()
{
  __int64 result;

  result = GameData_21f1e08;
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    return GameRoutine_18ae5e0();
  }
  return result;
}

__int64 MenuItem_188d320(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v2 = GameData_2132070 + 16;
  a1[9] = GameData_2132070 + 440;
  v3 = a1[132];
  *a1 = v2;
  if (v3 != 0) {
    v4 = (__int64*)a1[131];
    v5 = a1 + 130;
    v6 = *(__int64**)(a1[130] + 8);
    *(_QWORD*)(*v4 + 8) = v6;
    *v6 = *v4;
    a1[132] = 0;
    if (v4 != a1 + 130) {
      v7 = fw_memory_g_heap_manager_ptr;
      do {
        v8 = (__int64*)v4[1];
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v9);
        v4 = v8;
      } while (v8 != v5);
    }
  }
  return Element_1888840((__int64)a1);
}

#pragma GCC visibility pop
