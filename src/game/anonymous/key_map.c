#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15591a0(_QWORD);
__int64 GameRoutine_1559c80(_QWORD);
__int64 GameRoutine_155aec0(_QWORD, _QWORD);
__int64 GameRoutine_155bd20(_QWORD);
__int64 KeyMap_1559360_alt1(_QWORD, _QWORD, _QWORD) __asm__("KeyMap_1559360");
__int64 KeyMap_15596e0_alt1(_QWORD, _QWORD) __asm__("KeyMap_15596e0");
__int64 KeyMap_15596e0_alt2(__int64 result, int*) __asm__("KeyMap_15596e0");
__int64 KeyMap_1559e20_alt1(_QWORD, _QWORD, _QWORD,
                            _QWORD) __asm__("KeyMap_1559e20");
__int64 KeyMap_155a1a0_alt1(_QWORD) __asm__("KeyMap_155a1a0");
__int64 KeyMap_155a380_alt1(_QWORD) __asm__("KeyMap_155a380");
__int64 KeyMap_155a560_alt1(_QWORD) __asm__("KeyMap_155a560");
__int64 KeyMap_155a740_alt1(_QWORD) __asm__("KeyMap_155a740");
__int64 KeyMap_155a920_alt1(_QWORD) __asm__("KeyMap_155a920");
__int64 KeyMap_155ab00_alt1(_QWORD) __asm__("KeyMap_155ab00");
__int64 KeyMap_155ace0_alt1(_QWORD) __asm__("KeyMap_155ace0");
__int64 KeyMap_155b060_alt1(_QWORD) __asm__("KeyMap_155b060");
__int64 KeyMap_155b220_alt1(_QWORD, _QWORD, _QWORD) __asm__("KeyMap_155b220");
__int64 KeyMap_155b5a0_alt1(_QWORD) __asm__("KeyMap_155b5a0");
__int64 KeyMap_155b860_alt1(_QWORD) __asm__("KeyMap_155b860");
__int64 KeyMap_155ba40_alt1(_QWORD) __asm__("KeyMap_155ba40");
__int64 KeyMap_155be20_alt1(_QWORD) __asm__("KeyMap_155be20");
__int64 KeyMap_155c000_alt1(_QWORD) __asm__("KeyMap_155c000");
__int64 KeyMap_155c1e0_alt1(_QWORD) __asm__("KeyMap_155c1e0");
__int64 KeyMap_155c3c0_alt1(_QWORD) __asm__("KeyMap_155c3c0");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___next_prime(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*GameData_204ca50[])();
extern __int64 (*GameData_204cad0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void KeyMap_1559920_alt1(__int64*, unsigned __int64) __asm__("KeyMap_1559920");
void __attribute__((noreturn)) GameRoutine_1559c60(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64 KeyMap_1557b10(__int64 a1, int a2);
_QWORD* KeyMap_1559360(_QWORD* result, int a2, int a3);
void KeyMap_15596e0(__int64 a1, int* a2);
void KeyMap_1559920(float* a1, unsigned __int64 a2);
_QWORD* KeyMap_1559e20(_QWORD* result, unsigned int a2, int a3, int a4);
_QWORD* KeyMap_155a1a0(_QWORD* result);
_QWORD* KeyMap_155a380(_QWORD* result);
_QWORD* KeyMap_155a560(_QWORD* result);
_QWORD* KeyMap_155a740(_QWORD* a1);
_QWORD* KeyMap_155a920(_QWORD* a1);
_QWORD* KeyMap_155ab00(_QWORD* a1);
_QWORD* KeyMap_155ace0(_QWORD* a1);
_QWORD* KeyMap_155b060(_QWORD* a1);
_QWORD* KeyMap_155b220(_QWORD* result, unsigned int a2, int a3);
_QWORD* KeyMap_155b5a0(_QWORD* result);
_QWORD* KeyMap_155b860(_QWORD* result);
_QWORD* KeyMap_155ba40(_QWORD* result);
_QWORD* KeyMap_155be20(_QWORD* a1);
_QWORD* KeyMap_155c000(_QWORD* a1);
_QWORD* KeyMap_155c1e0(_QWORD* result);
_QWORD* KeyMap_155c3c0(_QWORD* result);

__int64 KeyMap_1557b10(__int64 a1, int a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64** v11;
  __int64* v12;
  __int64* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64** v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64** v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64** v35;
  __int64* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64** v39;
  __int64* v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64** v46;
  __int64* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64** v51;
  __int64* v52;
  unsigned __int64 v53;
  __int64 v54;
  _QWORD v55[4];
  _QWORD* v56;

  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_DWORD*)(a1 + 32) = 1065353216;
  ((void (*)(void))GameRoutine_15591a0)();
  KeyMap_1559360_alt1(a1, 0, 0);
  KeyMap_1559360_alt1(a1, 1, 1);
  KeyMap_1559360_alt1(a1, 2, 2);
  KeyMap_1559360_alt1(a1, 3, 3);
  KeyMap_1559360_alt1(a1, 4, 4);
  KeyMap_1559360_alt1(a1, 5, 5);
  KeyMap_1559360_alt1(a1, 6, 6);
  KeyMap_1559360_alt1(a1, 7, 7);
  KeyMap_1559360_alt1(a1, 8, 8);
  KeyMap_1559360_alt1(a1, 9, 9);
  KeyMap_1559360_alt1(a1, 10, 10);
  KeyMap_1559360_alt1(a1, 11, 11);
  KeyMap_1559360_alt1(a1, 12, 12);
  KeyMap_1559360_alt1(a1, 13, 13);
  KeyMap_1559360_alt1(a1, 14, 14);
  KeyMap_1559360_alt1(a1, 15, 15);
  KeyMap_1559360_alt1(a1, 16, 16);
  KeyMap_1559360_alt1(a1, 17, 17);
  KeyMap_1559360_alt1(a1, 18, 18);
  KeyMap_1559360_alt1(a1, 19, 19);
  KeyMap_1559360_alt1(a1, 20, 20);
  KeyMap_1559360_alt1(a1, 21, 21);
  KeyMap_1559360_alt1(a1, 22, 22);
  KeyMap_1559360_alt1(a1, 23, 23);
  KeyMap_1559360_alt1(a1, 24, 24);
  KeyMap_1559360_alt1(a1, 25, 25);
  KeyMap_1559360_alt1(a1, 26, 26);
  KeyMap_1559360_alt1(a1, 27, 27);
  KeyMap_1559360_alt1(a1, 28, 28);
  KeyMap_1559360_alt1(a1, 29, 29);
  result = KeyMap_1559360_alt1(a1, 30, 30);
  *(_QWORD*)(a1 + 40) = 0x100000000LL;
  *(_QWORD*)(a1 + 48) = 0x300000002LL;
  switch (a2) {
  case 0:
    return GameRoutine_1559c80(a1);
  case 1:
    GameRoutine_1559c80(a1);
    KeyMap_155a1a0_alt1(a1);
    KeyMap_155a380_alt1(a1);
    KeyMap_155a560_alt1(a1);
    v14 = *(_QWORD*)(a1 + 8);
    if (v14 == 0 || *(_QWORD*)(a1 + 24) == 0) {
      goto LABEL_139;
    }
    v15 = v14 - 1;
    if ((v14 & (v14 - 1)) != 0) {
      v16 = 11;
      if (v14 <= 0xB) {
        v16 = 0xBu % (unsigned __int8)*(_QWORD*)(a1 + 8);
      }
    }
    else {
      v16 = ((int)v14 - 1) & 0xBLL;
    }
    v23 = *(__int64***)(*(_QWORD*)a1 + 8 * v16);
    if (v23 == nullptr) {
      goto LABEL_139;
    }
    v24 = *v23;
    if (v24 == nullptr) {
      goto LABEL_139;
    }
    if ((v14 & v15) == 0) {
      while (1) {
        v26 = v24[1];
        if (v26 == 11) {
          if (*((_DWORD*)v24 + 4) == 11) {
            goto LABEL_116;
          }
        }
        else if ((v26 & v15) != v16) {
          goto LABEL_139;
        }
        v24 = (__int64*)*v24;
        if (v24 == nullptr) {
          goto LABEL_139;
        }
      }
    }
    while (2) {
      v25 = v24[1];
      if (v25 == 11) {
        if (*((_DWORD*)v24 + 4) == 11) {
        LABEL_116:
          if ((v14 & v15) != 0) {
            v33 = 11;
            if (v14 <= 0xB) {
              v33 = 0xBu % (unsigned __int8)*(_QWORD*)(a1 + 8);
            }
          }
          else {
            v33 = ((int)v14 - 1) & 0xBLL;
          }
          v35 = *(__int64***)(*(_QWORD*)a1 + 8 * v33);
          if (v35 != nullptr) {
            v36 = *v35;
            if (v36 != nullptr) {
              if ((v14 & v15) == 0) {
                while (1) {
                  v38 = v36[1];
                  if (v38 == 11) {
                    if (*((_DWORD*)v36 + 4) == 11) {
                      goto LABEL_138;
                    }
                  }
                  else if ((v38 & v15) != v33) {
                    goto LABEL_200;
                  }
                  v36 = (__int64*)*v36;
                  if (v36 == nullptr) {
                    goto LABEL_200;
                  }
                }
              }
              while (1) {
                v37 = v36[1];
                if (v37 == 11) {
                  if (*((_DWORD*)v36 + 4) == 11) {
                  LABEL_138:
                    v36[4] = v36[3];
                    goto LABEL_139;
                  }
                }
                else {
                  if (v37 >= v14) {
                    v37 %= v14;
                  }
                  if (v37 != v33) {
                    goto LABEL_200;
                  }
                }
                v36 = (__int64*)*v36;
                if (v36 == nullptr) {
                  goto LABEL_200;
                }
              }
            }
          }
          goto LABEL_200;
        }
      }
      else {
        if (v25 >= v14) {
          v25 %= v14;
        }
        if (v25 != v16) {
        LABEL_139:
          KeyMap_1559360_alt1(a1, 12, 25);
          KeyMap_1559360_alt1(a1, 13, 26);
          KeyMap_1559360_alt1(a1, 10, 25);
          KeyMap_1559360_alt1(a1, 11, 26);
          KeyMap_155a740_alt1(a1);
          KeyMap_155a920_alt1(a1);
          KeyMap_155ab00_alt1(a1);
          return KeyMap_155ace0_alt1(a1);
        }
      }
      v24 = (__int64*)*v24;
      if (v24 == nullptr) {
        goto LABEL_139;
      }
      continue;
    }
  case 2:
  case 5:
  case 23:
    v56 = nullptr;
    GameRoutine_155aec0(a1, v55);
    KeyMap_155a560_alt1(a1);
    KeyMap_1559360_alt1(a1, 10, 10);
    KeyMap_1559360_alt1(a1, 11, 12);
    *(_QWORD*)(a1 + 48) = 0x100000000LL;
    KeyMap_1559360_alt1(a1, 23, 19);
    KeyMap_1559360_alt1(a1, 24, 20);
    KeyMap_1559360_alt1(a1, 25, 21);
    v5 = 26;
    v6 = 22;
    return KeyMap_1559360_alt1(a1, v5, v6);
  case 3:
    v56 = nullptr;
    return GameRoutine_155aec0(a1, v55);
  case 4:
    v56 = nullptr;
    GameRoutine_155aec0(a1, v55);
    KeyMap_1559360_alt1(a1, 10, 21);
    return KeyMap_1559360_alt1(a1, 11, 22);
  case 6:
    v55[0] = GameData_204ca50;
    v55[1] = a1;
    v56 = v55;
    GameRoutine_155aec0(a1, v55);
    result = (__int64)v56;
    if (v56 == v55) {
      v17 = 32;
    }
    else {
      if (v56 == nullptr) {
        return result;
      }
      v17 = 40;
    }
    return (*(__int64 (**)(__int64))(*v56 + v17))((__int64)v56);
  case 7:
    v56 = nullptr;
    GameRoutine_155aec0(a1, v55);
    KeyMap_155a560_alt1(a1);
    KeyMap_1559360_alt1(a1, 10, 10);
    KeyMap_1559360_alt1(a1, 11, 12);
    *(_QWORD*)(a1 + 48) = 0x100000000LL;
    KeyMap_1559360_alt1(a1, 23, 19);
    KeyMap_1559360_alt1(a1, 24, 20);
    KeyMap_1559360_alt1(a1, 25, 21);
    KeyMap_1559360_alt1(a1, 26, 22);
    KeyMap_155a560_alt1(a1);
    KeyMap_155b5a0_alt1(a1);
    return KeyMap_1559360_alt1(a1, 10, 5);
  case 8:
    v56 = nullptr;
    GameRoutine_155aec0(a1, v55);
    KeyMap_155a560_alt1(a1);
    KeyMap_1559360_alt1(a1, 10, 10);
    KeyMap_1559360_alt1(a1, 11, 12);
    *(_QWORD*)(a1 + 48) = 0x100000000LL;
    KeyMap_1559360_alt1(a1, 23, 19);
    KeyMap_1559360_alt1(a1, 24, 20);
    KeyMap_1559360_alt1(a1, 25, 21);
    KeyMap_1559360_alt1(a1, 26, 22);
    KeyMap_155a560_alt1(a1);
    v8 = *(_QWORD*)(a1 + 8);
    if (v8 == 0 || *(_QWORD*)(a1 + 24) == 0) {
      goto LABEL_114;
    }
    v9 = v8 - 1;
    v10 = 2;
    if ((v8 & (v8 - 1)) == 0) {
      v10 = ((_BYTE)v8 - 1) & 2;
    }
    v11 = *(__int64***)(*(_QWORD*)a1 + 8 * v10);
    if (v11 == nullptr) {
      goto LABEL_114;
    }
    v12 = *v11;
    if (v12 == nullptr) {
      goto LABEL_114;
    }
    v13 = v12;
    if ((v8 & v9) == 0) {
      while (1) {
        v22 = v13[1];
        if (v22 == 2) {
          if (*((_DWORD*)v13 + 4) == 2) {
            goto LABEL_100;
          }
        }
        else if ((v22 & v9) != v10) {
          goto LABEL_114;
        }
        v13 = (__int64*)*v13;
        if (v13 == nullptr) {
          goto LABEL_114;
        }
      }
    }
    while (2) {
      v21 = v13[1];
      if (v21 == 2) {
        if (*((_DWORD*)v13 + 4) == 2) {
        LABEL_100:
          if ((v8 & v9) == 0) {
            while (1) {
              v32 = v12[1];
              if (v32 == 2) {
                if (*((_DWORD*)v12 + 4) == 2) {
                  goto LABEL_113;
                }
              }
              else if ((v32 & v9) != v10) {
                goto LABEL_200;
              }
              v12 = (__int64*)*v12;
              if (v12 == nullptr) {
                goto LABEL_200;
              }
            }
          }
          while (1) {
            v31 = v12[1];
            if (v31 == 2) {
              if (*((_DWORD*)v12 + 4) == 2) {
              LABEL_113:
                v12[4] = v12[3];
                goto LABEL_114;
              }
            }
            else {
              if (v31 >= v8) {
                v31 %= v8;
              }
              if (v31 != v10) {
                goto LABEL_200;
              }
            }
            v12 = (__int64*)*v12;
            if (v12 == nullptr) {
              goto LABEL_200;
            }
          }
        }
      }
      else {
        if (v21 >= v8) {
          v21 %= v8;
        }
        if (v21 != v10) {
        LABEL_114:
          KeyMap_1559360_alt1(a1, 10, 2);
          KeyMap_1559360_alt1(a1, 10, 0);
          KeyMap_1559360_alt1(a1, 10, 1);
          return KeyMap_1559360_alt1(a1, 10, 3);
        }
      }
      v13 = (__int64*)*v13;
      if (v13 == nullptr) {
        goto LABEL_114;
      }
      continue;
    }
  case 9:
    v56 = nullptr;
    GameRoutine_155aec0(a1, v55);
    KeyMap_155a560_alt1(a1);
    KeyMap_1559360_alt1(a1, 10, 10);
    KeyMap_1559360_alt1(a1, 11, 12);
    *(_QWORD*)(a1 + 48) = 0x100000000LL;
    KeyMap_1559360_alt1(a1, 23, 19);
    KeyMap_1559360_alt1(a1, 24, 20);
    KeyMap_1559360_alt1(a1, 25, 21);
    KeyMap_1559360_alt1(a1, 26, 22);
    KeyMap_155b860_alt1(a1);
    return KeyMap_1559360_alt1(a1, 7, 7);
  case 10:
    v55[0] = GameData_204cad0;
    v55[1] = a1;
    v56 = v55;
    GameRoutine_155aec0(a1, v55);
    if (v56 == v55) {
      v7 = 32;
    }
    else {
      if (v56 == nullptr) {
        goto LABEL_61;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*v56 + v7))((__int64)v56);
  LABEL_61:
    KeyMap_1559e20_alt1(a1, 0, 0, 3);
    *(_QWORD*)(a1 + 48) = 0x100000000LL;
    KeyMap_1559360_alt1(a1, 23, 19);
    KeyMap_1559360_alt1(a1, 24, 20);
    KeyMap_1559360_alt1(a1, 25, 21);
    KeyMap_1559360_alt1(a1, 26, 22);
    KeyMap_155a1a0_alt1(a1);
    KeyMap_155a380_alt1(a1);
    KeyMap_155ba40_alt1(a1);
    v5 = 3;
    v6 = 16;
    return KeyMap_1559360_alt1(a1, v5, v6);
  case 11:
    GameRoutine_15591a0(a1);
    KeyMap_1559e20_alt1(a1, 0, 0, 2);
    KeyMap_1559e20_alt1(a1, 1, 1, 2);
    KeyMap_1559360_alt1(a1, 2, 2);
    KeyMap_1559360_alt1(a1, 2, 0);
    KeyMap_1559360_alt1(a1, 2, 1);
    KeyMap_1559360_alt1(a1, 2, 3);
    KeyMap_1559360_alt1(a1, 2, 18);
    KeyMap_1559e20_alt1(a1, 7, 1, 3);
    KeyMap_1559360_alt1(a1, 7, 15);
    KeyMap_1559360_alt1(a1, 12, 25);
    KeyMap_1559360_alt1(a1, 13, 26);
    KeyMap_1559360_alt1(a1, 3, 12);
    KeyMap_155a560_alt1(a1);
    KeyMap_1559360_alt1(a1, 10, 10);
    KeyMap_155b060_alt1(a1);
    KeyMap_1559360_alt1(a1, 11, 16);
    *(_QWORD*)(a1 + 48) = 0x100000000LL;
    KeyMap_1559360_alt1(a1, 23, 19);
    KeyMap_1559360_alt1(a1, 24, 20);
    KeyMap_1559360_alt1(a1, 25, 21);
    result = KeyMap_1559360_alt1(a1, 26, 22);
    *(_QWORD*)(a1 + 40) = 0x400000004LL;
    return result;
  case 12:
    *(_QWORD*)(a1 + 48) = 0x300000002LL;
    GameRoutine_15591a0(a1);
    KeyMap_1559e20_alt1(a1, 0, 0, 2);
    KeyMap_1559360_alt1(a1, 10, 10);
    KeyMap_1559360_alt1(a1, 10, 5);
    KeyMap_1559360_alt1(a1, 13, 12);
    KeyMap_1559360_alt1(a1, 7, 2);
    KeyMap_1559360_alt1(a1, 7, 0);
    KeyMap_1559360_alt1(a1, 7, 1);
    KeyMap_1559360_alt1(a1, 7, 3);
    return KeyMap_1559e20_alt1(a1, 1, 1, 2);
  case 13:
    GameRoutine_155bd20(a1);
    return KeyMap_1559360_alt1(a1, 11, 16);
  case 14:
    GameRoutine_155bd20(a1);
    KeyMap_1559e20_alt1(a1, 3, 0, 2);
    return KeyMap_1559360_alt1(a1, 11, 17);
  case 15:
    *(_QWORD*)(a1 + 48) = 0x300000002LL;
    GameRoutine_15591a0(a1);
    KeyMap_1559e20_alt1(a1, 0, 0, 2);
    KeyMap_1559360_alt1(a1, 2, 2);
    KeyMap_1559360_alt1(a1, 2, 0);
    KeyMap_1559360_alt1(a1, 2, 1);
    KeyMap_1559360_alt1(a1, 2, 3);
    return KeyMap_1559e20_alt1(a1, 7, 1, 3);
  case 16:
    GameRoutine_15591a0(a1);
    KeyMap_1559e20_alt1(a1, 0, 0, 2);
    KeyMap_1559e20_alt1(a1, 1, 1, 2);
    KeyMap_1559360_alt1(a1, 2, 2);
    KeyMap_1559360_alt1(a1, 2, 0);
    KeyMap_1559360_alt1(a1, 2, 1);
    KeyMap_1559360_alt1(a1, 2, 3);
    KeyMap_1559e20_alt1(a1, 7, 1, 3);
    KeyMap_1559360_alt1(a1, 7, 15);
    KeyMap_155a740_alt1(a1);
    KeyMap_155a920_alt1(a1);
    KeyMap_1559360_alt1(a1, 12, 25);
    KeyMap_1559360_alt1(a1, 13, 26);
    KeyMap_1559360_alt1(a1, 10, 25);
    KeyMap_1559360_alt1(a1, 11, 26);
    KeyMap_155b220_alt1(a1, 17, 3);
    KeyMap_155b220_alt1(a1, 18, 4);
    KeyMap_155be20_alt1(a1);
    KeyMap_155c000_alt1(a1);
    KeyMap_1559360_alt1(a1, 25, 17);
    return KeyMap_1559360_alt1(a1, 26, 18);
  case 17:
    GameRoutine_15591a0(a1);
    *(_QWORD*)(a1 + 40) = 0x400000004LL;
    *(_QWORD*)(a1 + 48) = 0x400000004LL;
    KeyMap_1559e20_alt1(a1, 0, 0, 2);
    KeyMap_1559e20_alt1(a1, 1, 1, 2);
    KeyMap_1559360_alt1(a1, 2, 2);
    KeyMap_1559360_alt1(a1, 2, 0);
    KeyMap_1559360_alt1(a1, 2, 1);
    KeyMap_1559360_alt1(a1, 2, 3);
    goto LABEL_39;
  case 18:
    GameRoutine_15591a0(a1);
    *(_QWORD*)(a1 + 40) = 0x400000004LL;
    *(_QWORD*)(a1 + 48) = 0x400000004LL;
    KeyMap_1559e20_alt1(a1, 0, 0, 2);
    KeyMap_1559e20_alt1(a1, 1, 1, 2);
    KeyMap_1559360_alt1(a1, 2, 2);
    KeyMap_1559360_alt1(a1, 2, 0);
    KeyMap_1559360_alt1(a1, 2, 1);
    KeyMap_1559360_alt1(a1, 2, 3);
    v18 = *(_QWORD*)(a1 + 8);
    if (v18 == 0 || *(_QWORD*)(a1 + 24) == 0) {
      goto LABEL_157;
    }
    v19 = v18 - 1;
    if ((v18 & (v18 - 1)) != 0) {
      v20 = 15;
      if (v18 <= 0xF) {
        v20 = 0xFu % (unsigned __int8)*(_QWORD*)(a1 + 8);
      }
    }
    else {
      v20 = ((int)v18 - 1) & 0xFLL;
    }
    v27 = *(__int64***)(*(_QWORD*)a1 + 8 * v20);
    if (v27 == nullptr) {
      goto LABEL_157;
    }
    v28 = *v27;
    if (v28 == nullptr) {
      goto LABEL_157;
    }
    if ((v18 & v19) == 0) {
      while (1) {
        v30 = v28[1];
        if (v30 == 15) {
          if (*((_DWORD*)v28 + 4) == 15) {
            goto LABEL_119;
          }
        }
        else if ((v30 & v19) != v20) {
          goto LABEL_157;
        }
        v28 = (__int64*)*v28;
        if (v28 == nullptr) {
          goto LABEL_157;
        }
      }
    }
    while (2) {
      v29 = v28[1];
      if (v29 == 15) {
        if (*((_DWORD*)v28 + 4) == 15) {
        LABEL_119:
          if ((v18 & v19) != 0) {
            v34 = 15;
            if (v18 <= 0xF) {
              v34 = 0xFu % (unsigned __int8)*(_QWORD*)(a1 + 8);
            }
          }
          else {
            v34 = ((_BYTE)v18 - 1) & 0xF;
          }
          v39 = *(__int64***)(*(_QWORD*)a1 + 8 * v34);
          if (v39 == nullptr) {
            goto LABEL_200;
          }
          v40 = *v39;
          if (v40 == nullptr) {
            goto LABEL_200;
          }
          if ((v18 & v19) == 0) {
            while (1) {
              v42 = v40[1];
              if (v42 == 15) {
                if (*((_DWORD*)v40 + 4) == 15) {
                  goto LABEL_156;
                }
              }
              else if ((v42 & v19) != v34) {
                goto LABEL_200;
              }
              v40 = (__int64*)*v40;
              if (v40 == nullptr) {
                goto LABEL_200;
              }
            }
          }
          while (1) {
            v41 = v40[1];
            if (v41 == 15) {
              if (*((_DWORD*)v40 + 4) == 15) {
              LABEL_156:
                v40[4] = v40[3];
                goto LABEL_157;
              }
            }
            else {
              if (v41 >= v18) {
                v41 %= v18;
              }
              if (v41 != v34) {
                goto LABEL_200;
              }
            }
            v40 = (__int64*)*v40;
            if (v40 == nullptr) {
              goto LABEL_200;
            }
          }
        }
        goto LABEL_89;
      }
      if (v29 >= v18) {
        v29 %= v18;
      }
      if (v29 == v20) {
      LABEL_89:
        v28 = (__int64*)*v28;
        if (v28 == nullptr) {
          break;
        }
        continue;
      }
      break;
    }
  LABEL_157:
    KeyMap_1559360_alt1(a1, 15, 15);
    v43 = *(_QWORD*)(a1 + 8);
    if (v43 != 0 && *(_QWORD*)(a1 + 24) != 0) {
      v44 = v43 - 1;
      if ((v43 & (v43 - 1)) != 0) {
        v45 = 16;
        if (v43 <= 0x10) {
          v45 = 0x10u % (unsigned __int8)*(_QWORD*)(a1 + 8);
        }
      }
      else {
        v45 = ((int)v43 - 1) & 0x10LL;
      }
      v46 = *(__int64***)(*(_QWORD*)a1 + 8 * v45);
      if (v46 != nullptr) {
        v47 = *v46;
        if (v47 != nullptr) {
          if ((v43 & v44) == 0) {
            while (1) {
              v49 = v47[1];
              if (v49 == 16) {
                if (*((_DWORD*)v47 + 4) == 16) {
                  goto LABEL_179;
                }
              }
              else if ((v49 & v44) != v45) {
                goto LABEL_199;
              }
              v47 = (__int64*)*v47;
              if (v47 == nullptr) {
                goto LABEL_199;
              }
            }
          }
          do {
            v48 = v47[1];
            if (v48 == 16) {
              if (*((_DWORD*)v47 + 4) == 16) {
              LABEL_179:
                if ((v43 & v44) != 0) {
                  v50 = 16;
                  if (v43 <= 0x10) {
                    v50 = 0x10u % (unsigned __int8)*(_QWORD*)(a1 + 8);
                  }
                }
                else {
                  v50 = ((_BYTE)v43 - 1) & 0x10;
                }
                v51 = *(__int64***)(*(_QWORD*)a1 + 8 * v50);
                if (v51 != nullptr) {
                  v52 = *v51;
                  if (v52 != nullptr) {
                    if ((v43 & v44) == 0) {
                      while (1) {
                        v54 = v52[1];
                        if (v54 == 16) {
                          if (*((_DWORD*)v52 + 4) == 16) {
                            goto LABEL_198;
                          }
                        }
                        else if ((v54 & v44) != v50) {
                          goto LABEL_200;
                        }
                        v52 = (__int64*)*v52;
                        if (v52 == nullptr) {
                          goto LABEL_200;
                        }
                      }
                    }
                    do {
                      v53 = v52[1];
                      if (v53 == 16) {
                        if (*((_DWORD*)v52 + 4) == 16) {
                        LABEL_198:
                          v52[4] = v52[3];
                          goto LABEL_199;
                        }
                      }
                      else {
                        if (v53 >= v43) {
                          v53 %= v43;
                        }
                        if (v53 != v50) {
                          break;
                        }
                      }
                      v52 = (__int64*)*v52;
                    } while (v52 != nullptr);
                  }
                }
              LABEL_200:
                String_60a250("unordered_map::at: key not found");
              }
            }
            else {
              if (v48 >= v43) {
                v48 %= v43;
              }
              if (v48 != v45) {
                break;
              }
            }
            v47 = (__int64*)*v47;
          } while (v47 != nullptr);
        }
      }
    }
  LABEL_199:
    KeyMap_1559360_alt1(a1, 16, 16);
    KeyMap_155ab00_alt1(a1);
    KeyMap_155ace0_alt1(a1);
    KeyMap_155c1e0_alt1(a1);
    KeyMap_1559360_alt1(a1, 19, 19);
    KeyMap_155c3c0_alt1(a1);
    KeyMap_1559360_alt1(a1, 20, 20);
    KeyMap_155be20_alt1(a1);
    KeyMap_155c000_alt1(a1);
    KeyMap_155b220_alt1(a1, 23, 1);
    KeyMap_155b220_alt1(a1, 24, 2);
    KeyMap_155b220_alt1(a1, 25, 3);
    return KeyMap_155b220_alt1(a1, 26, 4);
  case 19:
    GameRoutine_15591a0(a1);
    *(_QWORD*)(a1 + 40) = 0x400000004LL;
    *(_QWORD*)(a1 + 48) = 0x400000004LL;
    KeyMap_1559e20_alt1(a1, 0, 0, 2);
    KeyMap_1559e20_alt1(a1, 1, 1, 2);
    KeyMap_1559360_alt1(a1, 2, 2);
    KeyMap_1559360_alt1(a1, 2, 0);
    KeyMap_1559360_alt1(a1, 2, 1);
    KeyMap_1559360_alt1(a1, 2, 3);
    KeyMap_155b220_alt1(a1, 15, 1);
    KeyMap_155b220_alt1(a1, 16, 2);
    KeyMap_155b220_alt1(a1, 17, 3);
    KeyMap_155b220_alt1(a1, 18, 4);
    KeyMap_1559e20_alt1(a1, 7, 1, 3);
    KeyMap_1559360_alt1(a1, 7, 15);
    KeyMap_1559360_alt1(a1, 3, 16);
    KeyMap_155ba40_alt1(a1);
    KeyMap_1559360_alt1(a1, 6, 6);
    KeyMap_1559360_alt1(a1, 6, 10);
    KeyMap_155a1a0_alt1(a1);
    KeyMap_1559360_alt1(a1, 12, 12);
    KeyMap_1559360_alt1(a1, 12, 23);
    KeyMap_1559360_alt1(a1, 12, 24);
    KeyMap_1559360_alt1(a1, 12, 25);
    return KeyMap_1559360_alt1(a1, 12, 26);
  case 20:
    GameRoutine_15591a0(a1);
    *(_QWORD*)(a1 + 40) = 0x400000004LL;
    *(_QWORD*)(a1 + 48) = 0x400000004LL;
    KeyMap_1559e20_alt1(a1, 0, 0, 2);
    KeyMap_1559e20_alt1(a1, 1, 1, 2);
    KeyMap_1559360_alt1(a1, 2, 2);
    KeyMap_1559360_alt1(a1, 2, 0);
    KeyMap_1559360_alt1(a1, 2, 1);
    KeyMap_1559360_alt1(a1, 2, 3);
    KeyMap_1559e20_alt1(a1, 7, 1, 3);
    KeyMap_1559360_alt1(a1, 7, 15);
    KeyMap_1559360_alt1(a1, 3, 16);
    KeyMap_155b220_alt1(a1, 15, 1);
    KeyMap_155b220_alt1(a1, 16, 2);
    KeyMap_155b220_alt1(a1, 17, 3);
    KeyMap_155b220_alt1(a1, 18, 4);
    *(_QWORD*)(a1 + 40) = 0x300000004LL;
    KeyMap_1559360_alt1(a1, 19, 23);
    KeyMap_1559360_alt1(a1, 20, 24);
    KeyMap_155ba40_alt1(a1);
    KeyMap_1559360_alt1(a1, 6, 6);
    KeyMap_155a1a0_alt1(a1);
    KeyMap_1559360_alt1(a1, 12, 12);
    KeyMap_155a560_alt1(a1);
    return KeyMap_1559360_alt1(a1, 10, 10);
  case 21:
    GameRoutine_15591a0(a1);
    *(_QWORD*)(a1 + 40) = 0x400000004LL;
    *(_QWORD*)(a1 + 48) = 0x400000004LL;
    KeyMap_1559e20_alt1(a1, 0, 0, 1);
  LABEL_39:
    KeyMap_1559e20_alt1(a1, 7, 1, 3);
    return KeyMap_1559360_alt1(a1, 7, 15);
  case 22:
    GameRoutine_1559c80(a1);
    KeyMap_155b860_alt1(a1);
    return KeyMap_1559360_alt1(a1, 7, 15);
  case 24:
    v56 = nullptr;
    GameRoutine_155aec0(a1, v55);
    KeyMap_155a560_alt1(a1);
    KeyMap_1559360_alt1(a1, 10, 10);
    KeyMap_1559360_alt1(a1, 11, 12);
    *(_QWORD*)(a1 + 48) = 0x100000000LL;
    KeyMap_1559360_alt1(a1, 23, 19);
    KeyMap_1559360_alt1(a1, 24, 20);
    KeyMap_1559360_alt1(a1, 25, 21);
    KeyMap_1559360_alt1(a1, 26, 22);
    KeyMap_1559360_alt1(a1, 6, 24);
    KeyMap_155c1e0_alt1(a1);
    result = KeyMap_155c3c0_alt1(a1);
    *(_DWORD*)(a1 + 44) = 4;
    return result;
  default:
    return result;
  }
}

_QWORD* KeyMap_1559360(_QWORD* result, int a2, int a3)
{
  unsigned __int64 v3;
  __int64 v4;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64** v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64** v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  v3 = result[1];
  v4 = result[3];
  v7 = result;
  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v3 != 0 && v4 != 0) {
    v10 = v3 - 1;
    if ((v3 & (v3 - 1)) != 0) {
      v11 = a2;
      if (v3 <= a2) {
        v11 = a2 % v3;
      }
    }
    else {
      v11 = v10 & a2;
    }
    v12 = *(__int64***)(*result + 8 * v11);
    if (v12 != nullptr) {
      v13 = *v12;
      if (v13 != nullptr) {
        if ((v3 & v10) == 0) {
          while (1) {
            v15 = v13[1];
            if (v15 == a2) {
              if (*((_DWORD*)v13 + 4) == a2) {
                goto LABEL_29;
              }
            }
            else if ((v15 & v10) != v11) {
              goto LABEL_24;
            }
            v13 = (__int64*)*v13;
            if (v13 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v14 = v13[1];
          if (v14 == a2) {
            if (*((_DWORD*)v13 + 4) == a2) {
              goto LABEL_29;
            }
          }
          else {
            if (v14 >= v3) {
              v14 %= v3;
            }
            if (v14 != v11) {
              break;
            }
          }
          v13 = (__int64*)*v13;
        } while (v13 != nullptr);
      }
    }
  }
LABEL_24:
  v34 = a2;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  result = (_QWORD*)KeyMap_15596e0_alt1(result, &v34);
  if (v35 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*v8 + 200LL) == 0) {
      v16 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*v8 + v16);
  }
  v3 = v7[1];
  v4 = v7[3];
LABEL_29:
  if (v3 == 0 || v4 == 0) {
    goto LABEL_67;
  }
  v17 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v18 = a2;
    if (v3 <= a2) {
      v18 = a2 % v3;
    }
  }
  else {
    v18 = v17 & a2;
  }
  v19 = *(__int64***)(*v7 + 8 * v18);
  if (v19 == nullptr || (v20 = *v19, *v19 == nullptr)) {
  LABEL_67:
    String_60a250("unordered_map::at: key not found");
  }
  if ((v3 & v17) == 0) {
    while (1) {
      v22 = v20[1];
      if (v22 == a2) {
        if (*((_DWORD*)v20 + 4) == a2) {
          goto LABEL_50;
        }
      }
      else if ((v22 & v17) != v18) {
        goto LABEL_67;
      }
      v20 = (__int64*)*v20;
      if (v20 == nullptr) {
        goto LABEL_67;
      }
    }
  }
  while (1) {
    v21 = v20[1];
    if (v21 == a2) {
      break;
    }
    if (v21 >= v3) {
      v21 %= v3;
    }
    if (v21 != v18) {
      goto LABEL_67;
    }
  LABEL_40:
    v20 = (__int64*)*v20;
    if (v20 == nullptr) {
      goto LABEL_67;
    }
  }
  if (*((_DWORD*)v20 + 4) != a2) {
    goto LABEL_40;
  }
LABEL_50:
  v23 = v20[4];
  v24 = v20[5];
  if (v23 >= v24) {
    v26 = v20[3];
    v27 = v23 - v26;
    v28 = 1 - 0x5555555555555555LL * ((__int64)(v23 - v26) >> 3);
    if (v28 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_1559c60(result);
    }
    v29 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v24 - v26) >> 3);
    if (2 * v29 > v28) {
      v28 = 2 * v29;
    }
    if (v29 >= 0x555555555555555LL) {
      v30 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v30 = v28;
    }
    if (v30 != 0) {
      if (v30 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v31 = fw_memory_HeapManager_Allocate(*v8, 24 * v30, 16, 0);
    }
    else {
      v31 = 0;
    }
    v32 = v31 + v27;
    *(_DWORD*)v32 = a3;
    *(_BYTE*)(v32 + 12) = 0;
    *(_DWORD*)(v32 + 16) = 0;
    v25 = v31 + v27 + 24;
    *(_BYTE*)(v32 + 20) = 0;
    *(_QWORD*)(v32 + 4) = 0xFFFFFFFFLL;
    result = (_QWORD*)memcpy(v31, v26, v27);
    v20[3] = v31;
    v20[4] = v25;
    v20[5] = v31 + 24 * v30;
    if (v26 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*v8 + 200LL) == 0) {
        v33 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*v8 + v33);
    }
  }
  else {
    *(_DWORD*)v23 = a3;
    *(_BYTE*)(v23 + 12) = 0;
    v25 = v23 + 24;
    *(_DWORD*)(v23 + 16) = 0;
    *(_BYTE*)(v23 + 20) = 0;
    *(_QWORD*)(v23 + 4) = 0xFFFFFFFFLL;
  }
  v20[4] = v25;
  return result;
}

void KeyMap_15596e0(__int64 a1, int* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  int v3;
  unsigned __int64 v4;
  unsigned __int64 v7;
  __int64** v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  _BOOL8 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  unsigned __int64 v27;

  v3 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  if (v4 != 0) {
    v7 = v4 - 1;
    if ((v4 & (v4 - 1)) != 0) {
      v2 = v3;
      if (v4 <= v3) {
        v2 = v3 % v4;
      }
    }
    else {
      v2 = v7 & v3;
    }
    v8 = *(__int64***)(*(_QWORD*)a1 + 8 * v2);
    if (v8 != nullptr) {
      v9 = *v8;
      if (v9 != nullptr) {
        if ((v4 & v7) == 0) {
          while (1) {
            v11 = v9[1];
            if (v11 == v3) {
              if (*((_DWORD*)v9 + 4) == v3) {
                return;
              }
            }
            else if ((v11 & v7) != v2) {
              goto LABEL_22;
            }
            v9 = (__int64*)*v9;
            if (v9 == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v10 = v9[1];
          if (v10 == v3) {
            if (*((_DWORD*)v9 + 4) == v3) {
              return;
            }
          }
          else {
            if (v10 >= v4) {
              v10 %= v4;
            }
            if (v10 != v2) {
              break;
            }
          }
          v9 = (__int64*)*v9;
        } while (v9 != nullptr);
      }
    }
  }
LABEL_22:
  v12 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v13 = *((_QWORD*)a2 + 1);
  v14 = *((_QWORD*)a2 + 2);
  *((_QWORD*)a2 + 1) = 0;
  *((_QWORD*)a2 + 2) = 0;
  v15 = (_QWORD*)v12;
  *(_QWORD*)(v12 + 8) = v3;
  *(_DWORD*)(v12 + 16) = v3;
  *(_QWORD*)(v12 + 24) = v13;
  *(_QWORD*)(v12 + 32) = v14;
  v16 = *((_QWORD*)a2 + 3);
  *((_QWORD*)a2 + 3) = 0;
  v17 = *(float*)(a1 + 32);
  *(_QWORD*)(v12 + 40) = v16;
  v18 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v4 == 0 || (float)(v17 * (float)v4) < v18) {
    v19 = v18 / v17;
    v20 = true;
    if (v4 >= 3) {
      v20 = (v4 & (v4 - 1)) != 0;
    }
    v21 = v20 | (2 * v4);
    v22 = vcvtps_u64_f32(v19);
    if (v21 <= v22) {
      v23 = v22;
    }
    else {
      v23 = v21;
    }
    KeyMap_1559920_alt1((__int64*)a1, v23);
    v4 = *(_QWORD*)(a1 + 8);
    if ((v4 & (v4 - 1)) != 0) {
      if (v4 <= v3) {
        v2 = v3 % v4;
      }
      else {
        v2 = v3;
      }
    }
    else {
      v2 = (v4 - 1) & v3;
    }
  }
  v24 = *(_QWORD*)a1;
  v25 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v2);
  if (v25 != nullptr) {
    *v15 = *v25;
    *v25 = v15;
  }
  else {
    v26 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v15;
    *v15 = v26;
    *(_QWORD*)(v24 + 8 * v2) = a1 + 16;
    if (v26 != 0) {
      v27 = *(_QWORD*)(v26 + 8);
      if ((v4 & (v4 - 1)) != 0) {
        if (v27 >= v4) {
          v27 %= v4;
        }
      }
      else {
        v27 &= v4 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v27) = v15;
    }
  }
  ++*(_QWORD*)(a1 + 24);
}

void KeyMap_1559920(float* a1, unsigned __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 primeEm;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  bool v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* i;
  unsigned __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  if (a2 == 1) {
    primeEm = 2;
  }
  else {
    primeEm = a2;
    if ((a2 & (a2 - 1)) != 0) {
      primeEm = std___1___next_prime(a2);
    }
  }
  v4 = *((_QWORD*)a1 + 1);
  if (primeEm <= v4) {
    if (primeEm >= v4) {
      return;
    }
    v11 = v4 >= 3 && (v4 & (v4 - 1)) == 0;
    v12 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
    if (v11) {
      v24 = 1LL << -(char)__clz(v12 - 1);
      if (v12 >= 2) {
        v12 = v24;
      }
    }
    else {
      v12 = std___1___next_prime(v12);
    }
    if (primeEm <= v12) {
      primeEm = v12;
    }
    if (primeEm >= v4) {
      return;
    }
    if (primeEm == 0) {
      v25 = *(_QWORD*)a1;
      *(_QWORD*)a1 = 0;
      if (v25 != 0) {
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
      }
      *((_QWORD*)a1 + 1) = 0;
      return;
    }
  }
  if (primeEm >> 61 != 0) {
    GameRoutine_60a210_alt1();
  }
  v5 = fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * primeEm, 16, 0);
  v7 = *(_QWORD*)a1;
  *(_QWORD*)a1 = v6;
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v8);
  }
  v9 = primeEm & 7;
  *((_QWORD*)a1 + 1) = primeEm;
  if (primeEm >= 8) {
    v10 = 0;
    do {
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 8) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 16) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 24) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 32) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 40) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 48) = 0;
      v13 = *(_QWORD*)a1 + 8 * v10;
      v10 += 8;
      *(_QWORD*)(v13 + 56) = 0;
    } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v10);
  }
  else {
    v10 = 0;
  }
  if ((primeEm & 7) != 0) {
    v14 = 8 * v10;
    do {
      --v9;
      *(_QWORD*)(*(_QWORD*)a1 + v14) = 0;
      v14 += 8;
    } while (v9 != 0);
  }
  v16 = (__int64*)(a1 + 4);
  v15 = *((_QWORD*)a1 + 2);
  if (v15 != 0) {
    v17 = *(_QWORD*)(v15 + 8);
    v18 = primeEm - 1;
    if ((primeEm & (primeEm - 1)) == 0) {
      v21 = v17 & v18;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v21) = v16;
      while (1) {
        v22 = *(_QWORD**)v15;
        if (*(_QWORD*)v15 == 0) {
          break;
        }
        v23 = v22[1] & v18;
        if (v23 == v21) {
          v15 = *(_QWORD*)v15;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v23) != 0) {
          *(_QWORD*)v15 = *v22;
          *v22 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v23);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v23) = v22;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v23) = v15;
          v15 = (__int64)v22;
          v21 = v23;
        }
      }
      return;
    }
    if (v17 >= primeEm) {
      v17 %= primeEm;
    }
    *(_QWORD*)(*(_QWORD*)a1 + 8 * v17) = v16;
    for (i = *(_QWORD**)v15; i != nullptr; v17 = v20) {
      v20 = i[1];
      if (v20 >= primeEm) {
        v20 %= primeEm;
      }
      if (v20 != v17) {
        if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v20) == 0) {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v20) = v15;
          goto LABEL_32;
        }
        *(_QWORD*)v15 = *i;
        *i = **(_QWORD**)(*(_QWORD*)a1 + 8 * v20);
        **(_QWORD**)(*(_QWORD*)a1 + 8 * v20) = i;
        i = (_QWORD*)v15;
      }
      v20 = v17;
    LABEL_32:
      v15 = (__int64)i;
      i = (_QWORD*)*i;
    }
  }
}

_QWORD* KeyMap_1559e20(_QWORD* result, unsigned int a2, int a3, int a4)
{
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v12;
  __int64 v13;
  __int64** v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64** v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v4 = result[1];
  v5 = result[3];
  v9 = result;
  v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v4 != 0 && v5 != 0) {
    v12 = v4 - 1;
    if ((v4 & (v4 - 1)) != 0) {
      v13 = a2;
      if (v4 <= a2) {
        v13 = (unsigned __int8)a2 % (unsigned int)(unsigned __int8)result[1];
      }
    }
    else {
      v13 = ((_DWORD)v4 + 15) & a2;
    }
    v14 = *(__int64***)(*result + 8 * v13);
    if (v14 != nullptr) {
      v15 = *v14;
      if (v15 != nullptr) {
        if ((v4 & v12) == 0) {
          while (1) {
            v17 = v15[1];
            if (v17 == a2) {
              if (*((_DWORD*)v15 + 4) == a2) {
                goto LABEL_29;
              }
            }
            else if ((v17 & v12) != v13) {
              goto LABEL_24;
            }
            v15 = (__int64*)*v15;
            if (v15 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v16 = v15[1];
          if (v16 == a2) {
            if (*((_DWORD*)v15 + 4) == a2) {
              goto LABEL_29;
            }
          }
          else {
            if (v16 >= v4) {
              v16 %= v4;
            }
            if (v16 != v13) {
              break;
            }
          }
          v15 = (__int64*)*v15;
        } while (v15 != nullptr);
      }
    }
  }
LABEL_24:
  v36 = a2;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  result = (_QWORD*)KeyMap_15596e0_alt2((__int64)result, (int*)&v36);
  if (v37 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*v10 + 200LL) == 0) {
      v18 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*v10 + v18);
  }
  v4 = v9[1];
  v5 = v9[3];
LABEL_29:
  if (v4 == 0 || v5 == 0) {
    goto LABEL_67;
  }
  v19 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v20 = a2;
    if (v4 <= a2) {
      v20 = a2 % (unsigned int)v4;
    }
  }
  else {
    v20 = ((_DWORD)v4 + 15) & a2;
  }
  v21 = *(__int64***)(*v9 + 8 * v20);
  if (v21 == nullptr || (v22 = *v21, *v21 == nullptr)) {
  LABEL_67:
    String_60a250("unordered_map::at: key not found");
  }
  if ((v4 & v19) == 0) {
    while (1) {
      v24 = v22[1];
      if (v24 == a2) {
        if (*((_DWORD*)v22 + 4) == a2) {
          goto LABEL_50;
        }
      }
      else if ((v24 & v19) != v20) {
        goto LABEL_67;
      }
      v22 = (__int64*)*v22;
      if (v22 == nullptr) {
        goto LABEL_67;
      }
    }
  }
  while (1) {
    v23 = v22[1];
    if (v23 == a2) {
      break;
    }
    if (v23 >= v4) {
      v23 %= v4;
    }
    if (v23 != v20) {
      goto LABEL_67;
    }
  LABEL_40:
    v22 = (__int64*)*v22;
    if (v22 == nullptr) {
      goto LABEL_67;
    }
  }
  if (*((_DWORD*)v22 + 4) != a2) {
    goto LABEL_40;
  }
LABEL_50:
  v25 = v22[4];
  v26 = v22[5];
  if (v25 >= v26) {
    v28 = v22[3];
    v29 = v25 - v28;
    v30 = 1 - 0x5555555555555555LL * ((__int64)(v25 - v28) >> 3);
    if (v30 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_1559c60(result);
    }
    v31 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v26 - v28) >> 3);
    if (2 * v31 > v30) {
      v30 = 2 * v31;
    }
    if (v31 >= 0x555555555555555LL) {
      v32 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v32 = v30;
    }
    if (v32 != 0) {
      if (v32 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v33 = fw_memory_HeapManager_Allocate(*v10, 24 * v32, 16, 0);
    }
    else {
      v33 = 0;
    }
    v34 = v33 + v29;
    *(_DWORD*)(v34 + 8) = 0;
    *(_BYTE*)(v34 + 12) = 0;
    *(_DWORD*)(v34 + 16) = a4;
    v27 = v33 + v29 + 24;
    *(_BYTE*)(v34 + 20) = 0;
    *(_DWORD*)v34 = -1;
    *(_DWORD*)(v34 + 4) = a3;
    result = (_QWORD*)memcpy(v33, v28, v29);
    v22[3] = v33;
    v22[4] = v27;
    v22[5] = v33 + 24 * v32;
    if (v28 != 0) {
      v35 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v35 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*v10 + v35);
    }
  }
  else {
    *(_DWORD*)(v25 + 8) = 0;
    *(_BYTE*)(v25 + 12) = 0;
    *(_DWORD*)(v25 + 16) = a4;
    v27 = v25 + 24;
    *(_BYTE*)(v25 + 20) = 0;
    *(_DWORD*)v25 = -1;
    *(_DWORD*)(v25 + 4) = a3;
  }
  v22[4] = v27;
  return result;
}

_QWORD* KeyMap_155a1a0(_QWORD* result)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;

  v1 = result[1];
  if (v1 != 0 && result[3] != 0) {
    v3 = v1 - 1;
    if ((v1 & (v1 - 1)) != 0) {
      v4 = 12;
      if (v1 <= 0xC) {
        v4 = 0xCu % (unsigned __int8)result[1];
      }
    }
    else {
      v4 = ((int)v1 - 1) & 0xCLL;
    }
    v5 = *(__int64***)(*result + 8 * v4);
    if (v5 != nullptr) {
      v6 = *v5;
      if (v6 != nullptr) {
        if ((v1 & v3) == 0) {
          while (1) {
            v8 = v6[1];
            if (v8 == 12) {
              if (*((_DWORD*)v6 + 4) == 12) {
                goto LABEL_25;
              }
            }
            else if ((v8 & v3) != v4) {
              return result;
            }
            v6 = (__int64*)*v6;
            if (v6 == nullptr) {
              return result;
            }
          }
        }
        do {
          v7 = v6[1];
          if (v7 == 12) {
            if (*((_DWORD*)v6 + 4) == 12) {
            LABEL_25:
              if ((v1 & v3) != 0) {
                v9 = 12;
                if (v1 <= 0xC) {
                  v9 = 0xCu % (unsigned __int8)result[1];
                }
              }
              else {
                v9 = ((_BYTE)v1 - 1) & 0xC;
              }
              v10 = *(__int64***)(*result + 8 * v9);
              if (v10 == nullptr || (v11 = *v10) == nullptr) {
              LABEL_46:
                String_60a250("unordered_map::at: key not found");
              }
              if ((v1 & v3) == 0) {
                while (1) {
                  v13 = v11[1];
                  if (v13 == 12) {
                    if (*((_DWORD*)v11 + 4) == 12) {
                      goto LABEL_44;
                    }
                  }
                  else if ((v13 & v3) != v9) {
                    goto LABEL_46;
                  }
                  v11 = (__int64*)*v11;
                  if (v11 == nullptr) {
                    goto LABEL_46;
                  }
                }
              }
              while (1) {
                v12 = v11[1];
                if (v12 == 12) {
                  if (*((_DWORD*)v11 + 4) == 12) {
                  LABEL_44:
                    v11[4] = v11[3];
                    return result;
                  }
                }
                else {
                  if (v12 >= v1) {
                    v12 %= v1;
                  }
                  if (v12 != v9) {
                    goto LABEL_46;
                  }
                }
                v11 = (__int64*)*v11;
                if (v11 == nullptr) {
                  goto LABEL_46;
                }
              }
            }
          }
          else {
            if (v7 >= v1) {
              v7 %= v1;
            }
            if (v7 != v4) {
              return result;
            }
          }
          v6 = (__int64*)*v6;
        } while (v6 != nullptr);
      }
    }
  }
  return result;
}

_QWORD* KeyMap_155a380(_QWORD* result)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;

  v1 = result[1];
  if (v1 != 0 && result[3] != 0) {
    v3 = v1 - 1;
    if ((v1 & (v1 - 1)) != 0) {
      v4 = 13;
      if (v1 <= 0xD) {
        v4 = 0xDu % (unsigned __int8)result[1];
      }
    }
    else {
      v4 = ((int)v1 - 1) & 0xDLL;
    }
    v5 = *(__int64***)(*result + 8 * v4);
    if (v5 != nullptr) {
      v6 = *v5;
      if (v6 != nullptr) {
        if ((v1 & v3) == 0) {
          while (1) {
            v8 = v6[1];
            if (v8 == 13) {
              if (*((_DWORD*)v6 + 4) == 13) {
                goto LABEL_25;
              }
            }
            else if ((v8 & v3) != v4) {
              return result;
            }
            v6 = (__int64*)*v6;
            if (v6 == nullptr) {
              return result;
            }
          }
        }
        do {
          v7 = v6[1];
          if (v7 == 13) {
            if (*((_DWORD*)v6 + 4) == 13) {
            LABEL_25:
              if ((v1 & v3) != 0) {
                v9 = 13;
                if (v1 <= 0xD) {
                  v9 = 0xDu % (unsigned __int8)result[1];
                }
              }
              else {
                v9 = ((int)v1 - 1) & 0xDLL;
              }
              v10 = *(__int64***)(*result + 8 * v9);
              if (v10 == nullptr || (v11 = *v10) == nullptr) {
              LABEL_46:
                String_60a250("unordered_map::at: key not found");
              }
              if ((v1 & v3) == 0) {
                while (1) {
                  v13 = v11[1];
                  if (v13 == 13) {
                    if (*((_DWORD*)v11 + 4) == 13) {
                      goto LABEL_44;
                    }
                  }
                  else if ((v13 & v3) != v9) {
                    goto LABEL_46;
                  }
                  v11 = (__int64*)*v11;
                  if (v11 == nullptr) {
                    goto LABEL_46;
                  }
                }
              }
              while (1) {
                v12 = v11[1];
                if (v12 == 13) {
                  if (*((_DWORD*)v11 + 4) == 13) {
                  LABEL_44:
                    v11[4] = v11[3];
                    return result;
                  }
                }
                else {
                  if (v12 >= v1) {
                    v12 %= v1;
                  }
                  if (v12 != v9) {
                    goto LABEL_46;
                  }
                }
                v11 = (__int64*)*v11;
                if (v11 == nullptr) {
                  goto LABEL_46;
                }
              }
            }
          }
          else {
            if (v7 >= v1) {
              v7 %= v1;
            }
            if (v7 != v4) {
              return result;
            }
          }
          v6 = (__int64*)*v6;
        } while (v6 != nullptr);
      }
    }
  }
  return result;
}

_QWORD* KeyMap_155a560(_QWORD* result)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;

  v1 = result[1];
  if (v1 != 0 && result[3] != 0) {
    v3 = v1 - 1;
    if ((v1 & (v1 - 1)) != 0) {
      v4 = 10;
      if (v1 <= 0xA) {
        v4 = 0xAu % (unsigned __int8)result[1];
      }
    }
    else {
      v4 = ((int)v1 - 1) & 0xALL;
    }
    v5 = *(__int64***)(*result + 8 * v4);
    if (v5 != nullptr) {
      v6 = *v5;
      if (v6 != nullptr) {
        if ((v1 & v3) == 0) {
          while (1) {
            v8 = v6[1];
            if (v8 == 10) {
              if (*((_DWORD*)v6 + 4) == 10) {
                goto LABEL_25;
              }
            }
            else if ((v8 & v3) != v4) {
              return result;
            }
            v6 = (__int64*)*v6;
            if (v6 == nullptr) {
              return result;
            }
          }
        }
        do {
          v7 = v6[1];
          if (v7 == 10) {
            if (*((_DWORD*)v6 + 4) == 10) {
            LABEL_25:
              if ((v1 & v3) != 0) {
                v9 = 10;
                if (v1 <= 0xA) {
                  v9 = 0xAu % (unsigned __int8)result[1];
                }
              }
              else {
                v9 = ((int)v1 - 1) & 0xALL;
              }
              v10 = *(__int64***)(*result + 8 * v9);
              if (v10 == nullptr || (v11 = *v10) == nullptr) {
              LABEL_46:
                String_60a250("unordered_map::at: key not found");
              }
              if ((v1 & v3) == 0) {
                while (1) {
                  v13 = v11[1];
                  if (v13 == 10) {
                    if (*((_DWORD*)v11 + 4) == 10) {
                      goto LABEL_44;
                    }
                  }
                  else if ((v13 & v3) != v9) {
                    goto LABEL_46;
                  }
                  v11 = (__int64*)*v11;
                  if (v11 == nullptr) {
                    goto LABEL_46;
                  }
                }
              }
              while (1) {
                v12 = v11[1];
                if (v12 == 10) {
                  if (*((_DWORD*)v11 + 4) == 10) {
                  LABEL_44:
                    v11[4] = v11[3];
                    return result;
                  }
                }
                else {
                  if (v12 >= v1) {
                    v12 %= v1;
                  }
                  if (v12 != v9) {
                    goto LABEL_46;
                  }
                }
                v11 = (__int64*)*v11;
                if (v11 == nullptr) {
                  goto LABEL_46;
                }
              }
            }
          }
          else {
            if (v7 >= v1) {
              v7 %= v1;
            }
            if (v7 != v4) {
              return result;
            }
          }
          v6 = (__int64*)*v6;
        } while (v6 != nullptr);
      }
    }
  }
  return result;
}

_QWORD* KeyMap_155a740(_QWORD* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;

  v1 = a1[1];
  if (v1 != 0 && a1[3] != 0) {
    v3 = v1 - 1;
    if ((v1 & (v1 - 1)) != 0) {
      v4 = 23;
      if (v1 <= 0x17) {
        v4 = 0x17u % (unsigned __int8)a1[1];
      }
    }
    else {
      v4 = ((int)v1 - 1) & 0x17LL;
    }
    v5 = *(__int64***)(*a1 + 8 * v4);
    if (v5 != nullptr) {
      v6 = *v5;
      if (v6 != nullptr) {
        if ((v1 & v3) != 0) {
          while (1) {
            v7 = v6[1];
            if (v7 == 23) {
              if (*((_DWORD*)v6 + 4) == 23) {
              LABEL_25:
                if ((v1 & v3) != 0) {
                  v9 = 23;
                  if (v1 <= 0x17) {
                    v9 = 0x17u % (unsigned __int8)a1[1];
                  }
                }
                else {
                  v9 = ((int)v1 - 1) & 0x17LL;
                }
                v10 = *(__int64***)(*a1 + 8 * v9);
                if (v10 == nullptr || (v11 = *v10) == nullptr) {
                LABEL_46:
                  String_60a250("unordered_map::at: key not found");
                }
                if ((v1 & v3) == 0) {
                  while (1) {
                    v13 = v11[1];
                    if (v13 == 23) {
                      if (*((_DWORD*)v11 + 4) == 23) {
                        goto LABEL_44;
                      }
                    }
                    else if ((v13 & v3) != v9) {
                      goto LABEL_46;
                    }
                    v11 = (__int64*)*v11;
                    if (v11 == nullptr) {
                      goto LABEL_46;
                    }
                  }
                }
                while (1) {
                  v12 = v11[1];
                  if (v12 == 23) {
                    if (*((_DWORD*)v11 + 4) == 23) {
                    LABEL_44:
                      v11[4] = v11[3];
                      return KeyMap_1559360(a1, 23, 23);
                    }
                  }
                  else {
                    if (v12 >= v1) {
                      v12 %= v1;
                    }
                    if (v12 != v9) {
                      goto LABEL_46;
                    }
                  }
                  v11 = (__int64*)*v11;
                  if (v11 == nullptr) {
                    goto LABEL_46;
                  }
                }
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                return KeyMap_1559360(a1, 23, 23);
              }
            }
            v6 = (__int64*)*v6;
            if (v6 == nullptr) {
              return KeyMap_1559360(a1, 23, 23);
            }
          }
        }
        do {
          v8 = v6[1];
          if (v8 == 23) {
            if (*((_DWORD*)v6 + 4) == 23) {
              goto LABEL_25;
            }
          }
          else if ((v8 & v3) != v4) {
            return KeyMap_1559360(a1, 23, 23);
          }
          v6 = (__int64*)*v6;
        } while (v6 != nullptr);
      }
    }
  }
  return KeyMap_1559360(a1, 23, 23);
}

_QWORD* KeyMap_155a920(_QWORD* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;

  v1 = a1[1];
  if (v1 != 0 && a1[3] != 0) {
    v3 = v1 - 1;
    if ((v1 & (v1 - 1)) != 0) {
      v4 = 24;
      if (v1 <= 0x18) {
        v4 = 0x18u % (unsigned __int8)a1[1];
      }
    }
    else {
      v4 = ((int)v1 - 1) & 0x18LL;
    }
    v5 = *(__int64***)(*a1 + 8 * v4);
    if (v5 != nullptr) {
      v6 = *v5;
      if (v6 != nullptr) {
        if ((v1 & v3) != 0) {
          while (1) {
            v7 = v6[1];
            if (v7 == 24) {
              if (*((_DWORD*)v6 + 4) == 24) {
              LABEL_25:
                if ((v1 & v3) != 0) {
                  v9 = 24;
                  if (v1 <= 0x18) {
                    v9 = 0x18u % (unsigned __int8)a1[1];
                  }
                }
                else {
                  v9 = ((_BYTE)v1 - 1) & 0x18;
                }
                v10 = *(__int64***)(*a1 + 8 * v9);
                if (v10 == nullptr || (v11 = *v10) == nullptr) {
                LABEL_46:
                  String_60a250("unordered_map::at: key not found");
                }
                if ((v1 & v3) == 0) {
                  while (1) {
                    v13 = v11[1];
                    if (v13 == 24) {
                      if (*((_DWORD*)v11 + 4) == 24) {
                        goto LABEL_44;
                      }
                    }
                    else if ((v13 & v3) != v9) {
                      goto LABEL_46;
                    }
                    v11 = (__int64*)*v11;
                    if (v11 == nullptr) {
                      goto LABEL_46;
                    }
                  }
                }
                while (1) {
                  v12 = v11[1];
                  if (v12 == 24) {
                    if (*((_DWORD*)v11 + 4) == 24) {
                    LABEL_44:
                      v11[4] = v11[3];
                      return KeyMap_1559360(a1, 24, 24);
                    }
                  }
                  else {
                    if (v12 >= v1) {
                      v12 %= v1;
                    }
                    if (v12 != v9) {
                      goto LABEL_46;
                    }
                  }
                  v11 = (__int64*)*v11;
                  if (v11 == nullptr) {
                    goto LABEL_46;
                  }
                }
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                return KeyMap_1559360(a1, 24, 24);
              }
            }
            v6 = (__int64*)*v6;
            if (v6 == nullptr) {
              return KeyMap_1559360(a1, 24, 24);
            }
          }
        }
        do {
          v8 = v6[1];
          if (v8 == 24) {
            if (*((_DWORD*)v6 + 4) == 24) {
              goto LABEL_25;
            }
          }
          else if ((v8 & v3) != v4) {
            return KeyMap_1559360(a1, 24, 24);
          }
          v6 = (__int64*)*v6;
        } while (v6 != nullptr);
      }
    }
  }
  return KeyMap_1559360(a1, 24, 24);
}

_QWORD* KeyMap_155ab00(_QWORD* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;

  v1 = a1[1];
  if (v1 != 0 && a1[3] != 0) {
    v3 = v1 - 1;
    if ((v1 & (v1 - 1)) != 0) {
      v4 = 17;
      if (v1 <= 0x11) {
        v4 = 0x11u % (unsigned __int8)a1[1];
      }
    }
    else {
      v4 = ((int)v1 - 1) & 0x11LL;
    }
    v5 = *(__int64***)(*a1 + 8 * v4);
    if (v5 != nullptr) {
      v6 = *v5;
      if (v6 != nullptr) {
        if ((v1 & v3) != 0) {
          while (1) {
            v7 = v6[1];
            if (v7 == 17) {
              if (*((_DWORD*)v6 + 4) == 17) {
              LABEL_25:
                if ((v1 & v3) != 0) {
                  v9 = 17;
                  if (v1 <= 0x11) {
                    v9 = 0x11u % (unsigned __int8)a1[1];
                  }
                }
                else {
                  v9 = ((int)v1 - 1) & 0x11LL;
                }
                v10 = *(__int64***)(*a1 + 8 * v9);
                if (v10 == nullptr || (v11 = *v10) == nullptr) {
                LABEL_46:
                  String_60a250("unordered_map::at: key not found");
                }
                if ((v1 & v3) == 0) {
                  while (1) {
                    v13 = v11[1];
                    if (v13 == 17) {
                      if (*((_DWORD*)v11 + 4) == 17) {
                        goto LABEL_44;
                      }
                    }
                    else if ((v13 & v3) != v9) {
                      goto LABEL_46;
                    }
                    v11 = (__int64*)*v11;
                    if (v11 == nullptr) {
                      goto LABEL_46;
                    }
                  }
                }
                while (1) {
                  v12 = v11[1];
                  if (v12 == 17) {
                    if (*((_DWORD*)v11 + 4) == 17) {
                    LABEL_44:
                      v11[4] = v11[3];
                      return KeyMap_1559360(a1, 17, 17);
                    }
                  }
                  else {
                    if (v12 >= v1) {
                      v12 %= v1;
                    }
                    if (v12 != v9) {
                      goto LABEL_46;
                    }
                  }
                  v11 = (__int64*)*v11;
                  if (v11 == nullptr) {
                    goto LABEL_46;
                  }
                }
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                return KeyMap_1559360(a1, 17, 17);
              }
            }
            v6 = (__int64*)*v6;
            if (v6 == nullptr) {
              return KeyMap_1559360(a1, 17, 17);
            }
          }
        }
        do {
          v8 = v6[1];
          if (v8 == 17) {
            if (*((_DWORD*)v6 + 4) == 17) {
              goto LABEL_25;
            }
          }
          else if ((v8 & v3) != v4) {
            return KeyMap_1559360(a1, 17, 17);
          }
          v6 = (__int64*)*v6;
        } while (v6 != nullptr);
      }
    }
  }
  return KeyMap_1559360(a1, 17, 17);
}

_QWORD* KeyMap_155ace0(_QWORD* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;

  v1 = a1[1];
  if (v1 != 0 && a1[3] != 0) {
    v3 = v1 - 1;
    if ((v1 & (v1 - 1)) != 0) {
      v4 = 18;
      if (v1 <= 0x12) {
        v4 = 0x12u % (unsigned __int8)a1[1];
      }
    }
    else {
      v4 = ((int)v1 - 1) & 0x12LL;
    }
    v5 = *(__int64***)(*a1 + 8 * v4);
    if (v5 != nullptr) {
      v6 = *v5;
      if (v6 != nullptr) {
        if ((v1 & v3) != 0) {
          while (1) {
            v7 = v6[1];
            if (v7 == 18) {
              if (*((_DWORD*)v6 + 4) == 18) {
              LABEL_25:
                if ((v1 & v3) != 0) {
                  v9 = 18;
                  if (v1 <= 0x12) {
                    v9 = 0x12u % (unsigned __int8)a1[1];
                  }
                }
                else {
                  v9 = ((int)v1 - 1) & 0x12LL;
                }
                v10 = *(__int64***)(*a1 + 8 * v9);
                if (v10 == nullptr || (v11 = *v10) == nullptr) {
                LABEL_46:
                  String_60a250("unordered_map::at: key not found");
                }
                if ((v1 & v3) == 0) {
                  while (1) {
                    v13 = v11[1];
                    if (v13 == 18) {
                      if (*((_DWORD*)v11 + 4) == 18) {
                        goto LABEL_44;
                      }
                    }
                    else if ((v13 & v3) != v9) {
                      goto LABEL_46;
                    }
                    v11 = (__int64*)*v11;
                    if (v11 == nullptr) {
                      goto LABEL_46;
                    }
                  }
                }
                while (1) {
                  v12 = v11[1];
                  if (v12 == 18) {
                    if (*((_DWORD*)v11 + 4) == 18) {
                    LABEL_44:
                      v11[4] = v11[3];
                      return KeyMap_1559360(a1, 18, 18);
                    }
                  }
                  else {
                    if (v12 >= v1) {
                      v12 %= v1;
                    }
                    if (v12 != v9) {
                      goto LABEL_46;
                    }
                  }
                  v11 = (__int64*)*v11;
                  if (v11 == nullptr) {
                    goto LABEL_46;
                  }
                }
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                return KeyMap_1559360(a1, 18, 18);
              }
            }
            v6 = (__int64*)*v6;
            if (v6 == nullptr) {
              return KeyMap_1559360(a1, 18, 18);
            }
          }
        }
        do {
          v8 = v6[1];
          if (v8 == 18) {
            if (*((_DWORD*)v6 + 4) == 18) {
              goto LABEL_25;
            }
          }
          else if ((v8 & v3) != v4) {
            return KeyMap_1559360(a1, 18, 18);
          }
          v6 = (__int64*)*v6;
        } while (v6 != nullptr);
      }
    }
  }
  return KeyMap_1559360(a1, 18, 18);
}

_QWORD* KeyMap_155b060(_QWORD* a1)
{
  unsigned __int64 v1;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64** v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;

  v1 = a1[1];
  if (v1 != 0 && a1[3] != 0) {
    v3 = 4;
    v4 = v1 - 1;
    if (v1 <= 4) {
      v3 = 4 - v1;
    }
    v5 = ((_BYTE)v1 - 1) & 4;
    if ((v1 & v4) != 0) {
      v5 = v3;
    }
    v6 = *(__int64***)(*a1 + 8 * v5);
    if (v6 != nullptr) {
      v7 = *v6;
      if (v7 != nullptr) {
        if ((v1 & v4) != 0) {
          while (1) {
            v8 = v7[1];
            if (v8 == 4) {
              if (*((_DWORD*)v7 + 4) == 4) {
              LABEL_25:
                v10 = 4;
                if (v1 <= 4) {
                  v10 = 4 - v1;
                }
                if ((v1 & v4) == 0) {
                  v10 = ((_BYTE)v1 - 1) & 4;
                }
                v11 = *(__int64***)(*a1 + 8 * v10);
                if (v11 == nullptr || (v12 = *v11) == nullptr) {
                LABEL_46:
                  String_60a250("unordered_map::at: key not found");
                }
                if ((v1 & v4) == 0) {
                  while (1) {
                    v14 = v12[1];
                    if (v14 == 4) {
                      if (*((_DWORD*)v12 + 4) == 4) {
                        goto LABEL_44;
                      }
                    }
                    else if ((v14 & v4) != v10) {
                      goto LABEL_46;
                    }
                    v12 = (__int64*)*v12;
                    if (v12 == nullptr) {
                      goto LABEL_46;
                    }
                  }
                }
                while (1) {
                  v13 = v12[1];
                  if (v13 == 4) {
                    if (*((_DWORD*)v12 + 4) == 4) {
                    LABEL_44:
                      v12[4] = v12[3];
                      return KeyMap_1559360(a1, 4, 4);
                    }
                  }
                  else {
                    if (v13 >= v1) {
                      v13 %= v1;
                    }
                    if (v13 != v10) {
                      goto LABEL_46;
                    }
                  }
                  v12 = (__int64*)*v12;
                  if (v12 == nullptr) {
                    goto LABEL_46;
                  }
                }
              }
            }
            else {
              if (v8 >= v1) {
                v8 %= v1;
              }
              if (v8 != v5) {
                return KeyMap_1559360(a1, 4, 4);
              }
            }
            v7 = (__int64*)*v7;
            if (v7 == nullptr) {
              return KeyMap_1559360(a1, 4, 4);
            }
          }
        }
        do {
          v9 = v7[1];
          if (v9 == 4) {
            if (*((_DWORD*)v7 + 4) == 4) {
              goto LABEL_25;
            }
          }
          else if ((v9 & v4) != v5) {
            return KeyMap_1559360(a1, 4, 4);
          }
          v7 = (__int64*)*v7;
        } while (v7 != nullptr);
      }
    }
  }
  return KeyMap_1559360(a1, 4, 4);
}

_QWORD* KeyMap_155b220(_QWORD* result, unsigned int a2, int a3)
{
  unsigned __int64 v3;
  __int64 v4;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v10;
  __int64 v11;
  __int64** v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64** v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  v3 = result[1];
  v4 = result[3];
  v7 = result;
  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v3 != 0 && v4 != 0) {
    v10 = v3 - 1;
    if ((v3 & (v3 - 1)) != 0) {
      v11 = a2;
      if (v3 <= a2) {
        v11 = (unsigned __int8)a2 % (unsigned int)(unsigned __int8)result[1];
      }
    }
    else {
      v11 = ((_DWORD)v3 + 31) & a2;
    }
    v12 = *(__int64***)(*result + 8 * v11);
    if (v12 != nullptr) {
      v13 = *v12;
      if (v13 != nullptr) {
        if ((v3 & v10) == 0) {
          while (1) {
            v15 = v13[1];
            if (v15 == a2) {
              if (*((_DWORD*)v13 + 4) == a2) {
                goto LABEL_29;
              }
            }
            else if ((v15 & v10) != v11) {
              goto LABEL_24;
            }
            v13 = (__int64*)*v13;
            if (v13 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v14 = v13[1];
          if (v14 == a2) {
            if (*((_DWORD*)v13 + 4) == a2) {
              goto LABEL_29;
            }
          }
          else {
            if (v14 >= v3) {
              v14 %= v3;
            }
            if (v14 != v11) {
              break;
            }
          }
          v13 = (__int64*)*v13;
        } while (v13 != nullptr);
      }
    }
  }
LABEL_24:
  v34 = a2;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  result = (_QWORD*)KeyMap_15596e0_alt2((__int64)result, (int*)&v34);
  if (v35 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*v8 + 200LL) == 0) {
      v16 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*v8 + v16);
  }
  v3 = v7[1];
  v4 = v7[3];
LABEL_29:
  if (v3 == 0 || v4 == 0) {
    goto LABEL_67;
  }
  v17 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v18 = a2;
    if (v3 <= a2) {
      v18 = a2 % (unsigned int)v3;
    }
  }
  else {
    v18 = ((_DWORD)v3 + 31) & a2;
  }
  v19 = *(__int64***)(*v7 + 8 * v18);
  if (v19 == nullptr || (v20 = *v19, *v19 == nullptr)) {
  LABEL_67:
    String_60a250("unordered_map::at: key not found");
  }
  if ((v3 & v17) == 0) {
    while (1) {
      v22 = v20[1];
      if (v22 == a2) {
        if (*((_DWORD*)v20 + 4) == a2) {
          goto LABEL_50;
        }
      }
      else if ((v22 & v17) != v18) {
        goto LABEL_67;
      }
      v20 = (__int64*)*v20;
      if (v20 == nullptr) {
        goto LABEL_67;
      }
    }
  }
  while (1) {
    v21 = v20[1];
    if (v21 == a2) {
      break;
    }
    if (v21 >= v3) {
      v21 %= v3;
    }
    if (v21 != v18) {
      goto LABEL_67;
    }
  LABEL_40:
    v20 = (__int64*)*v20;
    if (v20 == nullptr) {
      goto LABEL_67;
    }
  }
  if (*((_DWORD*)v20 + 4) != a2) {
    goto LABEL_40;
  }
LABEL_50:
  v23 = v20[4];
  v24 = v20[5];
  if (v23 >= v24) {
    v26 = v20[3];
    v27 = v23 - v26;
    v28 = 1 - 0x5555555555555555LL * ((__int64)(v23 - v26) >> 3);
    if (v28 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_1559c60(result);
    }
    v29 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v24 - v26) >> 3);
    if (2 * v29 > v28) {
      v28 = 2 * v29;
    }
    if (v29 >= 0x555555555555555LL) {
      v30 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v30 = v28;
    }
    if (v30 != 0) {
      if (v30 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v31 = fw_memory_HeapManager_Allocate(*v8, 24 * v30, 16, 0);
    }
    else {
      v31 = 0;
    }
    v32 = v31 + v27;
    *(_QWORD*)v32 = -1;
    *(_DWORD*)(v32 + 8) = a3;
    *(_BYTE*)(v32 + 12) = 0;
    *(_DWORD*)(v32 + 16) = 0;
    v25 = v31 + v27 + 24;
    *(_BYTE*)(v32 + 20) = 0;
    result = (_QWORD*)memcpy(v31, v26, v27);
    v20[3] = v31;
    v20[4] = v25;
    v20[5] = v31 + 24 * v30;
    if (v26 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*v8 + 200LL) == 0) {
        v33 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*v8 + v33);
    }
  }
  else {
    *(_DWORD*)(v23 + 8) = a3;
    *(_BYTE*)(v23 + 12) = 0;
    v25 = v23 + 24;
    *(_DWORD*)(v23 + 16) = 0;
    *(_BYTE*)(v23 + 20) = 0;
    *(_QWORD*)v23 = -1;
  }
  v20[4] = v25;
  return result;
}

_QWORD* KeyMap_155b5a0(_QWORD* result)
{
  unsigned __int64 v1;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64** v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;

  v1 = result[1];
  if (v1 != 0 && result[3] != 0) {
    v3 = 5;
    v4 = v1 - 1;
    if (v1 <= 5) {
      v3 = 5 - v1;
    }
    v5 = ((int)v1 - 1) & 5LL;
    if ((v1 & v4) != 0) {
      v5 = v3;
    }
    v6 = *(__int64***)(*result + 8 * v5);
    if (v6 != nullptr) {
      v7 = *v6;
      if (v7 != nullptr) {
        if ((v1 & v4) == 0) {
          while (1) {
            v9 = v7[1];
            if (v9 == 5) {
              if (*((_DWORD*)v7 + 4) == 5) {
                goto LABEL_25;
              }
            }
            else if ((v9 & v4) != v5) {
              return result;
            }
            v7 = (__int64*)*v7;
            if (v7 == nullptr) {
              return result;
            }
          }
        }
        do {
          v8 = v7[1];
          if (v8 == 5) {
            if (*((_DWORD*)v7 + 4) == 5) {
            LABEL_25:
              v10 = 5;
              if (v1 <= 5) {
                v10 = 5 - v1;
              }
              if ((v1 & v4) == 0) {
                v10 = ((int)v1 - 1) & 5LL;
              }
              v11 = *(__int64***)(*result + 8 * v10);
              if (v11 == nullptr || (v12 = *v11) == nullptr) {
              LABEL_46:
                String_60a250("unordered_map::at: key not found");
              }
              if ((v1 & v4) == 0) {
                while (1) {
                  v14 = v12[1];
                  if (v14 == 5) {
                    if (*((_DWORD*)v12 + 4) == 5) {
                      goto LABEL_44;
                    }
                  }
                  else if ((v14 & v4) != v10) {
                    goto LABEL_46;
                  }
                  v12 = (__int64*)*v12;
                  if (v12 == nullptr) {
                    goto LABEL_46;
                  }
                }
              }
              while (1) {
                v13 = v12[1];
                if (v13 == 5) {
                  if (*((_DWORD*)v12 + 4) == 5) {
                  LABEL_44:
                    v12[4] = v12[3];
                    return result;
                  }
                }
                else {
                  if (v13 >= v1) {
                    v13 %= v1;
                  }
                  if (v13 != v10) {
                    goto LABEL_46;
                  }
                }
                v12 = (__int64*)*v12;
                if (v12 == nullptr) {
                  goto LABEL_46;
                }
              }
            }
          }
          else {
            if (v8 >= v1) {
              v8 %= v1;
            }
            if (v8 != v5) {
              return result;
            }
          }
          v7 = (__int64*)*v7;
        } while (v7 != nullptr);
      }
    }
  }
  return result;
}

_QWORD* KeyMap_155b860(_QWORD* result)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;

  v1 = result[1];
  if (v1 != 0 && result[3] != 0) {
    v3 = v1 - 1;
    if ((v1 & (v1 - 1)) != 0) {
      v4 = 7;
      if (v1 <= 7) {
        v4 = 7u % (unsigned __int8)result[1];
      }
    }
    else {
      v4 = ((int)v1 - 1) & 7LL;
    }
    v5 = *(__int64***)(*result + 8 * v4);
    if (v5 != nullptr) {
      v6 = *v5;
      if (v6 != nullptr) {
        if ((v1 & v3) == 0) {
          while (1) {
            v8 = v6[1];
            if (v8 == 7) {
              if (*((_DWORD*)v6 + 4) == 7) {
                goto LABEL_25;
              }
            }
            else if ((v8 & v3) != v4) {
              return result;
            }
            v6 = (__int64*)*v6;
            if (v6 == nullptr) {
              return result;
            }
          }
        }
        do {
          v7 = v6[1];
          if (v7 == 7) {
            if (*((_DWORD*)v6 + 4) == 7) {
            LABEL_25:
              if ((v1 & v3) != 0) {
                v9 = 7;
                if (v1 <= 7) {
                  v9 = 7u % (unsigned __int8)result[1];
                }
              }
              else {
                v9 = ((_BYTE)v1 - 1) & 7;
              }
              v10 = *(__int64***)(*result + 8 * v9);
              if (v10 == nullptr || (v11 = *v10) == nullptr) {
              LABEL_46:
                String_60a250("unordered_map::at: key not found");
              }
              if ((v1 & v3) == 0) {
                while (1) {
                  v13 = v11[1];
                  if (v13 == 7) {
                    if (*((_DWORD*)v11 + 4) == 7) {
                      goto LABEL_44;
                    }
                  }
                  else if ((v13 & v3) != v9) {
                    goto LABEL_46;
                  }
                  v11 = (__int64*)*v11;
                  if (v11 == nullptr) {
                    goto LABEL_46;
                  }
                }
              }
              while (1) {
                v12 = v11[1];
                if (v12 == 7) {
                  if (*((_DWORD*)v11 + 4) == 7) {
                  LABEL_44:
                    v11[4] = v11[3];
                    return result;
                  }
                }
                else {
                  if (v12 >= v1) {
                    v12 %= v1;
                  }
                  if (v12 != v9) {
                    goto LABEL_46;
                  }
                }
                v11 = (__int64*)*v11;
                if (v11 == nullptr) {
                  goto LABEL_46;
                }
              }
            }
          }
          else {
            if (v7 >= v1) {
              v7 %= v1;
            }
            if (v7 != v4) {
              return result;
            }
          }
          v6 = (__int64*)*v6;
        } while (v6 != nullptr);
      }
    }
  }
  return result;
}

_QWORD* KeyMap_155ba40(_QWORD* result)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;

  v1 = result[1];
  if (v1 != 0 && result[3] != 0) {
    v3 = v1 - 1;
    if ((v1 & (v1 - 1)) != 0) {
      v4 = 6;
      if (v1 <= 6) {
        v4 = 6u % (unsigned __int8)result[1];
      }
    }
    else {
      v4 = ((int)v1 - 1) & 6LL;
    }
    v5 = *(__int64***)(*result + 8 * v4);
    if (v5 != nullptr) {
      v6 = *v5;
      if (v6 != nullptr) {
        if ((v1 & v3) == 0) {
          while (1) {
            v8 = v6[1];
            if (v8 == 6) {
              if (*((_DWORD*)v6 + 4) == 6) {
                goto LABEL_25;
              }
            }
            else if ((v8 & v3) != v4) {
              return result;
            }
            v6 = (__int64*)*v6;
            if (v6 == nullptr) {
              return result;
            }
          }
        }
        do {
          v7 = v6[1];
          if (v7 == 6) {
            if (*((_DWORD*)v6 + 4) == 6) {
            LABEL_25:
              if ((v1 & v3) != 0) {
                v9 = 6;
                if (v1 <= 6) {
                  v9 = 6u % (unsigned __int8)result[1];
                }
              }
              else {
                v9 = ((_BYTE)v1 - 1) & 6;
              }
              v10 = *(__int64***)(*result + 8 * v9);
              if (v10 == nullptr || (v11 = *v10) == nullptr) {
              LABEL_46:
                String_60a250("unordered_map::at: key not found");
              }
              if ((v1 & v3) == 0) {
                while (1) {
                  v13 = v11[1];
                  if (v13 == 6) {
                    if (*((_DWORD*)v11 + 4) == 6) {
                      goto LABEL_44;
                    }
                  }
                  else if ((v13 & v3) != v9) {
                    goto LABEL_46;
                  }
                  v11 = (__int64*)*v11;
                  if (v11 == nullptr) {
                    goto LABEL_46;
                  }
                }
              }
              while (1) {
                v12 = v11[1];
                if (v12 == 6) {
                  if (*((_DWORD*)v11 + 4) == 6) {
                  LABEL_44:
                    v11[4] = v11[3];
                    return result;
                  }
                }
                else {
                  if (v12 >= v1) {
                    v12 %= v1;
                  }
                  if (v12 != v9) {
                    goto LABEL_46;
                  }
                }
                v11 = (__int64*)*v11;
                if (v11 == nullptr) {
                  goto LABEL_46;
                }
              }
            }
          }
          else {
            if (v7 >= v1) {
              v7 %= v1;
            }
            if (v7 != v4) {
              return result;
            }
          }
          v6 = (__int64*)*v6;
        } while (v6 != nullptr);
      }
    }
  }
  return result;
}

_QWORD* KeyMap_155be20(_QWORD* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;

  v1 = a1[1];
  if (v1 != 0 && a1[3] != 0) {
    v3 = v1 - 1;
    if ((v1 & (v1 - 1)) != 0) {
      v4 = 21;
      if (v1 <= 0x15) {
        v4 = 0x15u % (unsigned __int8)a1[1];
      }
    }
    else {
      v4 = ((int)v1 - 1) & 0x15LL;
    }
    v5 = *(__int64***)(*a1 + 8 * v4);
    if (v5 != nullptr) {
      v6 = *v5;
      if (v6 != nullptr) {
        if ((v1 & v3) != 0) {
          while (1) {
            v7 = v6[1];
            if (v7 == 21) {
              if (*((_DWORD*)v6 + 4) == 21) {
              LABEL_25:
                if ((v1 & v3) != 0) {
                  v9 = 21;
                  if (v1 <= 0x15) {
                    v9 = 0x15u % (unsigned __int8)a1[1];
                  }
                }
                else {
                  v9 = ((int)v1 - 1) & 0x15LL;
                }
                v10 = *(__int64***)(*a1 + 8 * v9);
                if (v10 == nullptr || (v11 = *v10) == nullptr) {
                LABEL_46:
                  String_60a250("unordered_map::at: key not found");
                }
                if ((v1 & v3) == 0) {
                  while (1) {
                    v13 = v11[1];
                    if (v13 == 21) {
                      if (*((_DWORD*)v11 + 4) == 21) {
                        goto LABEL_44;
                      }
                    }
                    else if ((v13 & v3) != v9) {
                      goto LABEL_46;
                    }
                    v11 = (__int64*)*v11;
                    if (v11 == nullptr) {
                      goto LABEL_46;
                    }
                  }
                }
                while (1) {
                  v12 = v11[1];
                  if (v12 == 21) {
                    if (*((_DWORD*)v11 + 4) == 21) {
                    LABEL_44:
                      v11[4] = v11[3];
                      return KeyMap_1559360(a1, 21, 21);
                    }
                  }
                  else {
                    if (v12 >= v1) {
                      v12 %= v1;
                    }
                    if (v12 != v9) {
                      goto LABEL_46;
                    }
                  }
                  v11 = (__int64*)*v11;
                  if (v11 == nullptr) {
                    goto LABEL_46;
                  }
                }
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                return KeyMap_1559360(a1, 21, 21);
              }
            }
            v6 = (__int64*)*v6;
            if (v6 == nullptr) {
              return KeyMap_1559360(a1, 21, 21);
            }
          }
        }
        do {
          v8 = v6[1];
          if (v8 == 21) {
            if (*((_DWORD*)v6 + 4) == 21) {
              goto LABEL_25;
            }
          }
          else if ((v8 & v3) != v4) {
            return KeyMap_1559360(a1, 21, 21);
          }
          v6 = (__int64*)*v6;
        } while (v6 != nullptr);
      }
    }
  }
  return KeyMap_1559360(a1, 21, 21);
}

_QWORD* KeyMap_155c000(_QWORD* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;

  v1 = a1[1];
  if (v1 != 0 && a1[3] != 0) {
    v3 = v1 - 1;
    if ((v1 & (v1 - 1)) != 0) {
      v4 = 22;
      if (v1 <= 0x16) {
        v4 = 0x16u % (unsigned __int8)a1[1];
      }
    }
    else {
      v4 = ((int)v1 - 1) & 0x16LL;
    }
    v5 = *(__int64***)(*a1 + 8 * v4);
    if (v5 != nullptr) {
      v6 = *v5;
      if (v6 != nullptr) {
        if ((v1 & v3) != 0) {
          while (1) {
            v7 = v6[1];
            if (v7 == 22) {
              if (*((_DWORD*)v6 + 4) == 22) {
              LABEL_25:
                if ((v1 & v3) != 0) {
                  v9 = 22;
                  if (v1 <= 0x16) {
                    v9 = 0x16u % (unsigned __int8)a1[1];
                  }
                }
                else {
                  v9 = ((int)v1 - 1) & 0x16LL;
                }
                v10 = *(__int64***)(*a1 + 8 * v9);
                if (v10 == nullptr || (v11 = *v10) == nullptr) {
                LABEL_46:
                  String_60a250("unordered_map::at: key not found");
                }
                if ((v1 & v3) == 0) {
                  while (1) {
                    v13 = v11[1];
                    if (v13 == 22) {
                      if (*((_DWORD*)v11 + 4) == 22) {
                        goto LABEL_44;
                      }
                    }
                    else if ((v13 & v3) != v9) {
                      goto LABEL_46;
                    }
                    v11 = (__int64*)*v11;
                    if (v11 == nullptr) {
                      goto LABEL_46;
                    }
                  }
                }
                while (1) {
                  v12 = v11[1];
                  if (v12 == 22) {
                    if (*((_DWORD*)v11 + 4) == 22) {
                    LABEL_44:
                      v11[4] = v11[3];
                      return KeyMap_1559360(a1, 22, 22);
                    }
                  }
                  else {
                    if (v12 >= v1) {
                      v12 %= v1;
                    }
                    if (v12 != v9) {
                      goto LABEL_46;
                    }
                  }
                  v11 = (__int64*)*v11;
                  if (v11 == nullptr) {
                    goto LABEL_46;
                  }
                }
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                return KeyMap_1559360(a1, 22, 22);
              }
            }
            v6 = (__int64*)*v6;
            if (v6 == nullptr) {
              return KeyMap_1559360(a1, 22, 22);
            }
          }
        }
        do {
          v8 = v6[1];
          if (v8 == 22) {
            if (*((_DWORD*)v6 + 4) == 22) {
              goto LABEL_25;
            }
          }
          else if ((v8 & v3) != v4) {
            return KeyMap_1559360(a1, 22, 22);
          }
          v6 = (__int64*)*v6;
        } while (v6 != nullptr);
      }
    }
  }
  return KeyMap_1559360(a1, 22, 22);
}

_QWORD* KeyMap_155c1e0(_QWORD* result)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;

  v1 = result[1];
  if (v1 != 0 && result[3] != 0) {
    v3 = v1 - 1;
    if ((v1 & (v1 - 1)) != 0) {
      v4 = 19;
      if (v1 <= 0x13) {
        v4 = 0x13u % (unsigned __int8)result[1];
      }
    }
    else {
      v4 = ((int)v1 - 1) & 0x13LL;
    }
    v5 = *(__int64***)(*result + 8 * v4);
    if (v5 != nullptr) {
      v6 = *v5;
      if (v6 != nullptr) {
        if ((v1 & v3) == 0) {
          while (1) {
            v8 = v6[1];
            if (v8 == 19) {
              if (*((_DWORD*)v6 + 4) == 19) {
                goto LABEL_25;
              }
            }
            else if ((v8 & v3) != v4) {
              return result;
            }
            v6 = (__int64*)*v6;
            if (v6 == nullptr) {
              return result;
            }
          }
        }
        do {
          v7 = v6[1];
          if (v7 == 19) {
            if (*((_DWORD*)v6 + 4) == 19) {
            LABEL_25:
              if ((v1 & v3) != 0) {
                v9 = 19;
                if (v1 <= 0x13) {
                  v9 = 0x13u % (unsigned __int8)result[1];
                }
              }
              else {
                v9 = ((int)v1 - 1) & 0x13LL;
              }
              v10 = *(__int64***)(*result + 8 * v9);
              if (v10 == nullptr || (v11 = *v10) == nullptr) {
              LABEL_46:
                String_60a250("unordered_map::at: key not found");
              }
              if ((v1 & v3) == 0) {
                while (1) {
                  v13 = v11[1];
                  if (v13 == 19) {
                    if (*((_DWORD*)v11 + 4) == 19) {
                      goto LABEL_44;
                    }
                  }
                  else if ((v13 & v3) != v9) {
                    goto LABEL_46;
                  }
                  v11 = (__int64*)*v11;
                  if (v11 == nullptr) {
                    goto LABEL_46;
                  }
                }
              }
              while (1) {
                v12 = v11[1];
                if (v12 == 19) {
                  if (*((_DWORD*)v11 + 4) == 19) {
                  LABEL_44:
                    v11[4] = v11[3];
                    return result;
                  }
                }
                else {
                  if (v12 >= v1) {
                    v12 %= v1;
                  }
                  if (v12 != v9) {
                    goto LABEL_46;
                  }
                }
                v11 = (__int64*)*v11;
                if (v11 == nullptr) {
                  goto LABEL_46;
                }
              }
            }
          }
          else {
            if (v7 >= v1) {
              v7 %= v1;
            }
            if (v7 != v4) {
              return result;
            }
          }
          v6 = (__int64*)*v6;
        } while (v6 != nullptr);
      }
    }
  }
  return result;
}

_QWORD* KeyMap_155c3c0(_QWORD* result)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;

  v1 = result[1];
  if (v1 != 0 && result[3] != 0) {
    v3 = v1 - 1;
    if ((v1 & (v1 - 1)) != 0) {
      v4 = 20;
      if (v1 <= 0x14) {
        v4 = 0x14u % (unsigned __int8)result[1];
      }
    }
    else {
      v4 = ((int)v1 - 1) & 0x14LL;
    }
    v5 = *(__int64***)(*result + 8 * v4);
    if (v5 != nullptr) {
      v6 = *v5;
      if (v6 != nullptr) {
        if ((v1 & v3) == 0) {
          while (1) {
            v8 = v6[1];
            if (v8 == 20) {
              if (*((_DWORD*)v6 + 4) == 20) {
                goto LABEL_25;
              }
            }
            else if ((v8 & v3) != v4) {
              return result;
            }
            v6 = (__int64*)*v6;
            if (v6 == nullptr) {
              return result;
            }
          }
        }
        do {
          v7 = v6[1];
          if (v7 == 20) {
            if (*((_DWORD*)v6 + 4) == 20) {
            LABEL_25:
              if ((v1 & v3) != 0) {
                v9 = 20;
                if (v1 <= 0x14) {
                  v9 = 0x14u % (unsigned __int8)result[1];
                }
              }
              else {
                v9 = ((int)v1 - 1) & 0x14LL;
              }
              v10 = *(__int64***)(*result + 8 * v9);
              if (v10 == nullptr || (v11 = *v10) == nullptr) {
              LABEL_46:
                String_60a250("unordered_map::at: key not found");
              }
              if ((v1 & v3) == 0) {
                while (1) {
                  v13 = v11[1];
                  if (v13 == 20) {
                    if (*((_DWORD*)v11 + 4) == 20) {
                      goto LABEL_44;
                    }
                  }
                  else if ((v13 & v3) != v9) {
                    goto LABEL_46;
                  }
                  v11 = (__int64*)*v11;
                  if (v11 == nullptr) {
                    goto LABEL_46;
                  }
                }
              }
              while (1) {
                v12 = v11[1];
                if (v12 == 20) {
                  if (*((_DWORD*)v11 + 4) == 20) {
                  LABEL_44:
                    v11[4] = v11[3];
                    return result;
                  }
                }
                else {
                  if (v12 >= v1) {
                    v12 %= v1;
                  }
                  if (v12 != v9) {
                    goto LABEL_46;
                  }
                }
                v11 = (__int64*)*v11;
                if (v11 == nullptr) {
                  goto LABEL_46;
                }
              }
            }
          }
          else {
            if (v7 >= v1) {
              v7 %= v1;
            }
            if (v7 != v4) {
              return result;
            }
          }
          v6 = (__int64*)*v6;
        } while (v6 != nullptr);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
