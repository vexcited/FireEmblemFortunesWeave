#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_5782b0(unsigned int, _DWORD*, _DWORD*);
__int64 GameRoutine_5779f0(__int64, _BYTE*, unsigned __int8*, unsigned __int8*);
__int64 GameRoutine_577d50(unsigned __int8*, unsigned __int8*);
__int64 GameRoutine_5791a0(__int64);
__int64 GameRoutine_5875e0(__int64 result, __int64);
__int64 GameRoutine_599f10(_QWORD);
__int64 GameRoutine_599f20(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD);
__int64 nn_ui2d_TextureInfo_GetRuntimeTypeInfoStatic(void);
extern _UNKNOWN GameData_21a3998;
extern __int64 GameData_21a3990;
extern int GameData_21a3838;
__int64 Material_587f80(__int64 result, __int64 a2);
__int64 Material_5882b0(__int64 a1, __int64 a2);
__int64 Material_588320(__int64 result, char a2, char a3, char a4, int a5,
                        char a6, char a7, char a8, char a9, char a10, char a11,
                        char a12, int a13, int a14);
__int64 Material_Unknown2(__int64 a1, __int64 a2);
__int64 Material_Unknown3(__int64 a1, __int64 a2);
__int64 Material_588cc0(__int64 a1, __int64 a2, _BYTE* a3);
__int64 GameRoutine_57d040(__int64);
__int64 GameRoutine_58a150(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_59ed60(int*, int, __int64, __int64);
__int64 Material_58a8a0_alt1(_QWORD, _QWORD, _QWORD,
                             _QWORD) __asm__("Material_58a8a0");
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_2135448;
bool Material_586ee0(__int64 a1, __int64 a2, __int64 a3);
float Material_588c10(float* a1, float* a2);
__int64 Material_5892e0(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6);
__int64 Material_58a8a0(__int64 result, __int64 a2, __int64 a3, signed int a4);

bool Material_586ee0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3;
  int v4;
  unsigned int v5;
  __int64 v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int128* v30;
  __int64 v31;
  __int16 v32;
  char v33;
  struct {
    __int128 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    int v47;
    int v48;
  } v35_;

  v3 = *(_DWORD*)(a1 + 20);
  v4 = v3 & 0x30000;
  if ((v3 & 0x30000) != 0) {
    v5 = *(_DWORD*)(a1 + 16);
    v6 = *(_QWORD*)(a1 + 24);
    v35_.v44 = 0;
    v35_.v45 = 0;
    v8 = 16 * (v5 & 3);
    v9 = v5 & 0x30;
    v35_.v42 = 0;
    v35_.v43 = 0;
    v35_.v40 = 0;
    v35_.v41 = 0;
    v35_.v38 = 0;
    v35_.v39 = 0;
    v35_.v36 = 0;
    v35_.v37 = 0;
    v35_.v35 = (__typeof__(v35_.v35)){0};
    v10 = (v5 >> 6) & 8;
    v11 = (v5 >> 4) & 0x1C;
    v12 = (v5 >> 12) & 8;
    v13 = (v5 >> 8) & 0xC;
    v14 = ((int)(v5 << 15) >> 31) & 0x1C;
    v15 = ((int)(v5 << 19) >> 31) & 0xC;
    v16 = 20 * (((v5 >> 13) & 3) + ((v5 >> 2) & 3));
    if ((v3 & 0x10000) != 0) {
      v29 = (v3 >> 6) & 7;
      v17 = 1111708740;
      if (v29 != 0) {
        v30 = (__int128*)(v6 + ((v8 + v9) | (unsigned int)v10) + v13 + v11 +
                          v12 + v15 + v14 + v16);
        v35_.v35 = *v30;
        if (v29 != 1) {
          v35_.v36 = *((_QWORD*)v30 + 2);
          v35_.v37 = *((_QWORD*)v30 + 3);
          if (v29 != 2) {
            v35_.v38 = *((_QWORD*)v30 + 4);
            v35_.v39 = *((_QWORD*)v30 + 5);
            if (v29 != 3) {
              v35_.v40 = *((_QWORD*)v30 + 6);
              v35_.v41 = *((_QWORD*)v30 + 7);
              if (v29 != 4) {
                v35_.v42 = *((_QWORD*)v30 + 8);
                v35_.v43 = *((_QWORD*)v30 + 9);
                if (v29 != 5) {
                  v35_.v44 = *((_QWORD*)v30 + 10);
                  v35_.v45 = *((_QWORD*)v30 + 11);
                  if (v29 != 6) {
                    v35_.v46 = *((_QWORD*)v30 + 12);
                    v35_.v47 = *((_DWORD*)v30 + 26);
                    v35_.v48 = *((_DWORD*)v30 + 27);
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      v17 = 1398096451;
      v18 = (__int64*)(v6 + ((v8 + v9) | v10) + v13 + v11 + v12 + v15 + v14 +
                       ((v5 >> 12) & 0x10) * ((v5 >> 6) & 7) + v16);
      v19 = *v18;
      v20 = v18[1];
      v21 = v18[3];
      v35_.v36 = v18[2];
      v35_.v37 = v21;
      *(_QWORD*)&v35_.v35 = v19;
      *((_QWORD*)&v35_.v35 + 1) = v20;
      v22 = v18[4];
      v23 = v18[5];
      v24 = v18[7];
      v35_.v40 = v18[6];
      v35_.v41 = v24;
      v35_.v38 = v22;
      v35_.v39 = v23;
      v25 = v18[8];
      v26 = v18[9];
      v28 = v18[10];
      v27 = v18[11];
      v35_.v44 = v28;
      v35_.v45 = v27;
      v35_.v42 = v25;
      v35_.v43 = v26;
    }
    v31 = GameRoutine_57d040(*(_QWORD*)(a3 + 56));
    *(_QWORD*)(a1 + 32) = v31;
    v32 = GameRoutine_59ed60(*(int**)(v31 + 56), v17, 24, (__int64)&v35_.v35);
    v33 = *(_BYTE*)(a1 + 72);
    *(_WORD*)(a1 + 74) = v32;
    *(_BYTE*)(a1 + 72) = v33 | 0xF0;
  }
  return v4 != 0;
}

__int64 Material_587f80(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  if ((*(_BYTE*)(result + 16) & 3) == 0) {
    return result;
  }
  v2 = *(_QWORD*)(result + 24);
  v4 = result;
  if ((*(_WORD*)v2 & 0x100) != 0) {
    v5 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 8) + 72LL))(
        *(_QWORD*)(v2 + 8));
    if (v5 == 0) {
      goto LABEL_16;
    }
  }
  else {
    if ((*(_WORD*)v2 & 0x1000) == 0) {
      goto LABEL_16;
    }
    v5 = *(_QWORD*)(v2 + 8);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a3998,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a3998) != 0) {
      GameData_21a3990 = nn_ui2d_TextureInfo_GetRuntimeTypeInfoStatic();
      __cxa_guard_release(&GameData_21a3998, v16);
    }
    if (v5 == 0) {
      goto LABEL_16;
    }
    v6 = (__int64*)(**(__int64 (***)(__int64))v5)(v5);
    if (v6 != &GameData_21a3990) {
      do {
        v6 = (__int64*)*v6;
      } while (v6 != &GameData_21a3990 && v6 != nullptr);
      if (v6 == nullptr) {
      LABEL_16:
        GameRoutine_599f20(*(_QWORD*)(v4 + 24));
        result = GameRoutine_599f10(*(_QWORD*)(v4 + 24));
        if ((*(_BYTE*)(v4 + 16) & 2) == 0) {
          return result;
        }
        v8 = *(_QWORD*)(v4 + 24);
        if ((*(_WORD*)(v8 + 16) & 0x100) != 0) {
          v9 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v8 + 24) + 72LL))(
              *(_QWORD*)(v8 + 24));
          if (v9 == 0) {
            goto LABEL_31;
          }
        }
        else {
          if ((*(_WORD*)(v8 + 16) & 0x1000) == 0) {
            goto LABEL_31;
          }
          v9 = *(_QWORD*)(v8 + 24);
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a3998,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21a3998) != 0) {
            GameData_21a3990 = nn_ui2d_TextureInfo_GetRuntimeTypeInfoStatic();
            __cxa_guard_release(&GameData_21a3998, v17);
          }
          if (v9 == 0) {
            goto LABEL_31;
          }
          v10 = (__int64*)(**(__int64 (***)(__int64))v9)(v9);
          if (v10 != &GameData_21a3990) {
            do {
              v10 = (__int64*)*v10;
            } while (v10 != &GameData_21a3990 && v10 != nullptr);
            if (v10 == nullptr) {
            LABEL_31:
              GameRoutine_599f20(*(_QWORD*)(v4 + 24) + 16LL);
              result = GameRoutine_599f10(*(_QWORD*)(v4 + 24) + 16LL);
              if ((~*(_DWORD*)(v4 + 16) & 3) == 0) {
                v12 = *(_QWORD*)(v4 + 24);
                if ((*(_WORD*)(v12 + 32) & 0x100) != 0) {
                  v13 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v12 + 40) +
                                                 72LL))(*(_QWORD*)(v12 + 40));
                  if (v13 == 0) {
                  LABEL_47:
                    GameRoutine_599f20(*(_QWORD*)(v4 + 24) + 32LL);
                    return GameRoutine_599f10(*(_QWORD*)(v4 + 24) + 32LL);
                  }
                }
                else {
                  if ((*(_WORD*)(v12 + 32) & 0x1000) == 0) {
                    goto LABEL_47;
                  }
                  v13 = *(_QWORD*)(v12 + 40);
                  if ((atomic_load_explicit(
                           (atomic_uchar* volatile)&GameData_21a3998,
                           memory_order_acquire) &
                       1) == 0 &&
                      (unsigned int)__cxa_guard_acquire(&GameData_21a3998) !=
                          0) {
                    GameData_21a3990 =
                        nn_ui2d_TextureInfo_GetRuntimeTypeInfoStatic();
                    __cxa_guard_release(&GameData_21a3998, v18);
                  }
                  if (v13 == 0) {
                    goto LABEL_47;
                  }
                  v14 = (__int64*)(**(__int64 (***)(__int64))v13)(v13);
                  if (v14 != &GameData_21a3990) {
                    do {
                      v14 = (__int64*)*v14;
                    } while (v14 != &GameData_21a3990 && v14 != nullptr);
                    if (v14 == nullptr) {
                      goto LABEL_47;
                    }
                  }
                }
                (*(void (**)(__int64, __int64))(*(_QWORD*)v13 + 24LL))(v13, a2);
                (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
                GameRoutine_5791a0(v13);
                goto LABEL_47;
              }
              return result;
            }
          }
        }
        (*(void (**)(__int64, __int64))(*(_QWORD*)v9 + 24LL))(v9, a2);
        (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
        GameRoutine_5791a0(v9);
        goto LABEL_31;
      }
    }
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 24LL))(v5, a2);
  (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  GameRoutine_5791a0(v5);
  goto LABEL_16;
}

__int64 Material_5882b0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 result;

  GameRoutine_5875e0(a1, a2);
  v4 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 48) = 0;
  if (v4 != 0) {
    GameRoutine_5791a0(v4);
    *(_QWORD*)(a1 + 56) = 0;
  }
  Material_587f80(a1, a2);
  result = *(_QWORD*)(a1 + 24);
  if (result != 0) {
    result = GameRoutine_5791a0(result);
    *(_QWORD*)(a1 + 24) = 0;
  }
  if ((*(_BYTE*)(a1 + 73) & 0x20) != 0) {
    result = GameRoutine_5791a0(*(_QWORD*)(a1 + 8));
    *(_QWORD*)(a1 + 8) = 0;
  }
  return result;
}

__int64 Material_588320(__int64 result, char a2, char a3, char a4, int a5,
                        char a6, char a7, char a8, char a9, char a10, char a11,
                        char a12, int a13, int a14)
{
  unsigned int v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  unsigned __int64 v20;
  unsigned int v21;
  unsigned int v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  _QWORD* v27;
  unsigned int v28;
  unsigned int v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  unsigned int v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  unsigned int v39;
  int v40;
  __int64 v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  _QWORD* v51;

  v14 = *(_DWORD*)(result + 20) & 0xFFFFFFF3 | (4 * (a3 & 3));
  v15 = a3 & 3;
  v16 = ((a5 & 7) << 6) & 0xFDFF | (unsigned __int16)(16 * (a4 & 3)) |
        ((a6 & 1) << 9) & 0x3FF | ((a7 & 3) << 10) & 0xFFF |
        ((a8 & 1) << 12) & 0x1FFF | ((a9 & 3) << 13) & 0x7FFF |
        ((a10 & 1) << 15) | ((a11 & 1) << 16) | ((a12 & 1) << 17) |
        ((a13 & 3) << 18) | ((a14 & 3) << 20) |
        *(_DWORD*)(result + 16) & 0xFFC00000 | a2 & 3 | (4 * v15);
  *(_DWORD*)(result + 16) = v16;
  *(_DWORD*)(result + 20) = v14;
  if ((a3 & 3) != 0) {
    v17 = *(_QWORD*)(result + 24) + 16 * (a2 & 3u);
    *(_QWORD*)v17 = 0;
    *(_QWORD*)(v17 + 8) = 0x3F80000000000000LL;
    *(_DWORD*)(v17 + 16) = 1065353216;
    if (v15 != 1) {
      *(_QWORD*)(v17 + 20) = 0;
      *(_QWORD*)(v17 + 28) = 0x3F80000000000000LL;
      *(_DWORD*)(v17 + 36) = 1065353216;
      if (v15 != 2) {
        *(_QWORD*)(v17 + 40) = 0;
        *(_QWORD*)(v17 + 48) = 0x3F80000000000000LL;
        *(_DWORD*)(v17 + 56) = 1065353216;
      }
    }
    v16 = *(_DWORD*)(result + 16);
    v14 = *(_DWORD*)(result + 20);
  }
  v18 = v14 & 0xFFFFFDFF | (((v16 & 0x200) != 0) << 9);
  *(_DWORD*)(result + 20) = v18;
  if ((v16 & 0x200) != 0) {
    *(_QWORD*)(*(_QWORD*)(result + 24) + 16 * (v16 & 3) + (v16 & 0x30) +
               (unsigned __int64)((4 * ((v16 >> 2) & 3)) & 0xF |
                                  (16 * ((v16 >> 2) & 3)))) = 7;
    v16 = *(_DWORD*)(result + 16);
    v18 = *(_DWORD*)(result + 20);
  }
  v19 = v18 & 0xFFFFF3FF | v16 & 0xC00;
  *(_DWORD*)(result + 20) = v19;
  if ((v16 & 0xC00) != 0) {
    *(_DWORD*)(*(_QWORD*)(result + 24) +
               ((16 * (v16 & 3) + (v16 & 0x30)) | (v16 >> 6) & 8) +
               (unsigned __int64)((4 * ((v16 >> 2) & 3)) & 0xF |
                                  (16 * ((v16 >> 2) & 3)))) = 328704;
    v19 = *(_DWORD*)(result + 20);
    if ((v19 & 0xC00) == 0x800) {
      *(_DWORD*)(*(_QWORD*)(result + 24) +
                 ((16 * (*(_DWORD*)(result + 16) & 3) +
                   (*(_DWORD*)(result + 16) & 0x30)) |
                  (*(_DWORD*)(result + 16) >> 6) & 8) +
                 20 * ((*(_DWORD*)(result + 16) >> 2) & 3u) + 4LL) = 328704;
      v19 = *(_DWORD*)(result + 20);
    }
  }
  v20 = *(unsigned int*)(result + 16);
  v21 = v19 & 0xFFFFEFFF | (((*(_DWORD*)(result + 16) & 0x1000) != 0) << 12);
  *(_DWORD*)(result + 20) = v21;
  if ((v20 & 0x1000) != 0) {
    v20 = *(_QWORD*)(result + 24) +
          ((16 * (v20 & 3) + (v20 & 0x30)) | ((unsigned int)v20 >> 6) & 8) +
          (((unsigned int)v20 >> 8) & 0xC) + 20 * ((v20 >> 2) & 3);
    *(_QWORD*)v20 = 0x3F80000000000000LL;
    *(_DWORD*)(v20 + 8) = 1065353216;
    LODWORD(v20) = *(_DWORD*)(result + 16);
    v22 = *(_DWORD*)(result + 20) & 0xFFFF7FFF | (((v20 & 0x8000) != 0) << 15);
    *(_DWORD*)(result + 20) = v22;
    if ((v20 & 0x8000) == 0) {
    LABEL_13:
      *(_DWORD*)(result + 20) =
          v22 & 0xFFFEFFFF | (((v20 & 0x10000) != 0) << 16);
      if ((v20 & 0x10000) == 0) {
        goto LABEL_20;
      }
      goto LABEL_17;
    }
  }
  else {
    v22 = v21 & 0xFFFF7FFF | (((v20 & 0x8000) != 0) << 15);
    *(_DWORD*)(result + 20) = v22;
    if ((v20 & 0x8000) == 0) {
      goto LABEL_13;
    }
  }
  v20 = *(_QWORD*)(result + 24) +
        ((16 * (v20 & 3) + (v20 & 0x30)) | ((unsigned int)v20 >> 6) & 8) +
        (((unsigned int)v20 >> 8) & 0xC) + (((unsigned int)v20 >> 4) & 0x1C) +
        (((int)((_DWORD)v20 << 19) >> 31) & 0xC) +
        20 * ((((unsigned int)v20 >> 13) & 3) + (((unsigned int)v20 >> 2) & 3));
  *(_BYTE*)(v20 + 2) = 0;
  *(_WORD*)v20 = 0;
  *(_DWORD*)(v20 + 3) = -1;
  *(_BYTE*)(v20 + 7) = 0;
  LODWORD(v20) = *(_DWORD*)(result + 16);
  *(_DWORD*)(result + 20) =
      *(_DWORD*)(result + 20) & 0xFFFEFFFF | (((v20 & 0x10000) != 0) << 16);
  if ((v20 & 0x10000) != 0) {
  LABEL_17:
    v23 =
        *(_QWORD*)(result + 24) +
        ((16 * (v20 & 3) + (v20 & 0x30)) | ((unsigned int)v20 >> 6) & 8) +
        (((unsigned int)v20 >> 8) & 0xC) + (((unsigned int)v20 >> 4) & 0x1C) +
        (((unsigned int)v20 >> 12) & 8) +
        (((int)((_DWORD)v20 << 19) >> 31) & 0xC) +
        20 * ((((unsigned int)v20 >> 13) & 3) + (((unsigned int)v20 >> 2) & 3));
    *(_DWORD*)(v23 + 24) = 0;
    *(_QWORD*)(v23 + 8) = 0;
    *(_QWORD*)(v23 + 16) = 0;
    *(_QWORD*)v23 = 0;
    if (a5 >= 1) {
      v24 = 0;
      do {
        v25 = *(_DWORD*)(result + 16);
        v26 = *(_QWORD*)(result + 24) + v24;
        v24 += 16;
        v27 =
            (_QWORD*)(v26 + ((16 * (v25 & 3) + (v25 & 0x30)) | (v25 >> 6) & 8) +
                      ((v25 >> 8) & 0xC) + ((v25 >> 4) & 0x1C) +
                      ((v25 >> 12) & 8) + (((int)(v25 << 19) >> 31) & 0xC) +
                      (((int)(v25 << 15) >> 31) & 0x1C) +
                      20 * (((v25 >> 13) & 3) + ((v25 >> 2) & 3)));
        *v27 = 0;
        v27[1] = 0;
      } while (16LL * (unsigned int)a5 != v24);
    }
  }

LABEL_20:
  v28 = *(_DWORD*)(result + 16);
  v29 = *(_DWORD*)(result + 20) & 0xFFFDFFFF | (((v28 & 0x20000) != 0) << 17);
  *(_DWORD*)(result + 20) = v29;
  if ((v28 & 0x20000) != 0) {
    v30 = *(_QWORD*)(result + 24) +
          ((16 * (v28 & 3) + (v28 & 0x30)) | (v28 >> 6) & 8) +
          ((v28 >> 8) & 0xC) + ((v28 >> 4) & 0x1C) + ((v28 >> 12) & 8) +
          (((int)(v28 << 19) >> 31) & 0xC) + (((int)(v28 << 15) >> 31) & 0x1C) +
          ((v28 >> 12) & 0x10) * ((v28 >> 6) & 7) +
          20 * (((v28 >> 13) & 3) + ((v28 >> 2) & 3));
    *(_DWORD*)(v30 + 112) = 0;
    *(_QWORD*)(v30 + 96) = 0;
    *(_QWORD*)(v30 + 104) = 0;
    *(_QWORD*)(v30 + 80) = 0;
    *(_QWORD*)(v30 + 88) = 0;
    *(_QWORD*)(v30 + 64) = 0;
    *(_QWORD*)(v30 + 72) = 0;
    *(_QWORD*)(v30 + 48) = 0;
    *(_QWORD*)(v30 + 56) = 0;
    *(_QWORD*)(v30 + 32) = 0;
    *(_QWORD*)(v30 + 40) = 0;
    *(_QWORD*)(v30 + 16) = 0;
    *(_QWORD*)(v30 + 24) = 0;
    *(_QWORD*)v30 = 0;
    *(_QWORD*)(v30 + 8) = 0;
    v28 = *(_DWORD*)(result + 16);
    v29 = *(_DWORD*)(result + 20);
  }
  v31 = v29 & 0xFFF3FFFF | v28 & 0xC0000;
  *(_DWORD*)(result + 20) = v31;
  if ((v28 & 0xC0000) != 0 && a13 >= 1) {
    v32 = 0;
    do {
      v33 = *(_DWORD*)(result + 16);
      *(_DWORD*)(*(_QWORD*)(result + 24) +
                 20 * (((v33 >> 13) & 3) + ((v33 >> 2) & 3)) +
                 ((16 * (v33 & 3) + (v33 & 0x30)) | (v33 >> 6) & 8) +
                 ((v33 >> 8) & 0xC) + ((v33 >> 4) & 0x1C) + ((v33 >> 12) & 8) +
                 (((int)(v33 << 19) >> 31) & 0xC) +
                 (((int)(v33 << 15) >> 31) & 0x1C) +
                 ((v33 >> 12) & 0x10) * ((v33 >> 6) & 7) +
                 (((int)(v33 << 14) >> 31) & 0x74) + v32) = 0;
      v34 = *(_DWORD*)(result + 16);
      v35 = *(_QWORD*)(result + 24) + v32 +
            ((16 * (v34 & 3) + (v34 & 0x30)) | (v34 >> 6) & 8) +
            ((v34 >> 8) & 0xC) + ((v34 >> 4) & 0x1C) + ((v34 >> 12) & 8) +
            (((int)(v34 << 19) >> 31) & 0xC) +
            (((int)(v34 << 15) >> 31) & 0x1C) +
            ((v34 >> 12) & 0x10) * ((v34 >> 6) & 7) +
            (((int)(v34 << 14) >> 31) & 0x74) +
            20 * (((v34 >> 13) & 3) + ((v34 >> 2) & 3));
      *(_QWORD*)(v35 + 12) = 0;
      *(_QWORD*)(v35 + 4) = 0;
      LODWORD(v35) = *(_DWORD*)(result + 16);
      v36 = *(_QWORD*)(result + 24) + v32;
      v32 += 32;
      *(_QWORD*)(v36 +
                 ((16 * (v35 & 3) + (v35 & 0x30)) |
                  ((unsigned int)v35 >> 6) & 8) +
                 (((unsigned int)v35 >> 8) & 0xC) +
                 (((unsigned int)v35 >> 4) & 0x1C) +
                 (((unsigned int)v35 >> 12) & 8) +
                 (((int)((_DWORD)v35 << 19) >> 31) & 0xC) +
                 (((int)((_DWORD)v35 << 15) >> 31) & 0x1C) +
                 (((unsigned int)v35 >> 12) & 0x10) *
                     (((unsigned int)v35 >> 6) & 7) +
                 (((int)((_DWORD)v35 << 14) >> 31) & 0x74) +
                 20 * ((((unsigned int)v35 >> 13) & 3) +
                       (((unsigned int)v35 >> 2) & 3)) +
                 24) = 0;
    } while (32LL * (unsigned int)a13 != v32);
    v28 = *(_DWORD*)(result + 16);
    v31 = *(_DWORD*)(result + 20);
  }
  *(_DWORD*)(result + 20) = v31 & 0xFFCFFFFF | v28 & 0x300000;
  if ((v28 & 0x300000) != 0) {
    *(_QWORD*)(*(_QWORD*)(result + 24) +
               ((16 * (v28 & 3) + (v28 & 0x30)) | (v28 >> 6) & 8) +
               ((v28 >> 8) & 0xC) + ((v28 >> 4) & 0x1C) + ((v28 >> 12) & 8) +
               ((v28 >> 13) & 0x60) + (((int)(v28 << 19) >> 31) & 0xC) +
               (((int)(v28 << 15) >> 31) & 0x1C) +
               ((v28 >> 12) & 0x10) * ((v28 >> 6) & 7) +
               (((int)(v28 << 14) >> 31) & 0x74) +
               (unsigned __int64)(20 *
                                  (((v28 >> 13) & 3) + ((v28 >> 2) & 3)))) = 0;
    v37 = *(_DWORD*)(result + 16);
    *(_DWORD*)(*(_QWORD*)(result + 24) +
               ((16 * (v37 & 3) + (v37 & 0x30)) | (v37 >> 6) & 8) +
               ((v37 >> 8) & 0xC) + ((v37 >> 4) & 0x1C) + ((v37 >> 12) & 8) +
               ((v37 >> 13) & 0x60) + (((int)(v37 << 19) >> 31) & 0xC) +
               (((int)(v37 << 15) >> 31) & 0x1C) +
               ((v37 >> 12) & 0x10) * ((v37 >> 6) & 7) +
               (((int)(v37 << 14) >> 31) & 0x74) +
               20 * (((v37 >> 13) & 3) + ((v37 >> 2) & 3)) + 8LL) = 0;
    if (a14 >= 1) {
      v38 = 0;
      do {
        v39 = *(_DWORD*)(result + 16);
        v40 = (v39 >> 6) & 7;
        v41 = *(_QWORD*)(result + 24) + v38;
        v38 += 88;
        v42 = ((v39 >> 13) & 3) + ((v39 >> 2) & 3);
        v43 = (v39 >> 13) & 0x60;
        v44 = ((int)(v39 << 19) >> 31) & 0xC;
        v45 = ((int)(v39 << 15) >> 31) & 0x1C;
        v46 = (v39 >> 12) & 8;
        v47 = ((v39 >> 8) & 0xC) + ((v39 >> 4) & 0x1C);
        v48 = (v39 >> 12) & 0x10;
        v49 = ((int)(v39 << 14) >> 31) & 0x74;
        if ((v39 & 0x300000) != 0) {
          v50 = 16;
        }
        else {
          v50 = 0;
        }
        v51 = (_QWORD*)(v41 +
                        ((16 * (*(_DWORD*)(result + 16) & 3) +
                          (*(_DWORD*)(result + 16) & 0x30)) |
                         (*(_DWORD*)(result + 16) >> 6) & 8u) +
                        v47 + v46 + v43 + v44 + v45 + v48 * v40 + v49 + v50 +
                        20 * v42);
        v51[9] = 0;
        v51[10] = 0;
        v51[7] = 0;
        v51[8] = 0;
        v51[5] = 0;
        v51[6] = 0;
        v51[3] = 0;
        v51[4] = 0;
        v51[1] = 0;
        v51[2] = 0;
        *v51 = 0;
      } while (88LL * (unsigned int)a14 != v38);
    }
  }
  return result;
}

__int64 Material_Unknown2(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 96LL))(a2, a1);
}

__int64 Material_Unknown3(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 128LL))(a2, a1);
}

float Material_588c10(float* a1, float* a2)
{
  __int64 v2;
  float v3;
  float* v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float result;

  v2 = (__int64)(float)(a2[2] * 0x1.6c16c20000000p+23f);
  v3 = vcvts_n_f32_u32(v2 & 0xFFFFFF, 0x18u);
  v4 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v2));
  v5 = v4[1] + (float)(v4[3] * v3);
  v6 = *v4 + (float)(v4[2] * v3);
  v7 = a2[3] * v6;
  v8 = -(float)(v5 * a2[4]);
  *a1 = v7;
  a1[1] = v8;
  a1[2] = (float)((float)(*a2 + 0x1.0000000000000p-1f) +
                  (float)(v7 * -0x1.0000000000000p-1f)) +
          (float)(v8 * -0x1.0000000000000p-1f);
  v9 = v5 * a2[3];
  v10 = v6 * a2[4];
  a1[3] = v9;
  a1[4] = v10;
  v11 = a2[1];
  a1[3] = -v9;
  a1[4] = -v10;
  result = 0x1.0000000000000p+0f -
           (float)((float)((float)(v11 + 0x1.0000000000000p-1f) +
                           (float)(v9 * -0x1.0000000000000p-1f)) +
                   (float)(v10 * -0x1.0000000000000p-1f));
  a1[5] = result;
  return result;
}

__int64 Material_588cc0(__int64 a1, __int64 a2, _BYTE* a3)
{
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  int* v9;
  int* v10;
  int v11;
  int v12;
  int v14;
  int v15;

  if ((*(_DWORD*)(a1 + 16) & 0xC00) != 0) {
    v6 = 4;
    if ((*(_DWORD*)(a1 + 16) & 0xC00) != 0x800) {
      v6 = 0;
    }
    v7 = ((16 * (*(_DWORD*)(a1 + 16) & 3) + (*(_DWORD*)(a1 + 16) & 0x30)) |
          (*(_DWORD*)(a1 + 16) >> 6) & 8) +
         20 * ((*(_DWORD*)(a1 + 16) >> 2) & 3u);
    v8 = GameRoutine_577d50((unsigned __int8*)(*(_QWORD*)(a1 + 24) + v7),
                            (unsigned __int8*)(*(_QWORD*)(a1 + 24) + v7 + v6));
    v14 = 328704;
    v15 = 328704;
    if (v8 == 10) {
      goto LABEL_5;
    }
  LABEL_9:
    GameRoutine_5782b0(v8, &v15, &v14);
    return GameRoutine_5779f0(a2, a3, (unsigned __int8*)&v15,
                              (unsigned __int8*)&v14);
  }
  v8 = GameData_21a3838;
  v14 = 328704;
  v15 = 328704;
  if (GameData_21a3838 != 10) {
    goto LABEL_9;
  }

LABEL_5:
  v9 = (int*)(*(_QWORD*)(a1 + 24) +
              ((16 * (*(_DWORD*)(a1 + 16) & 3) + (*(_DWORD*)(a1 + 16) & 0x30)) |
               (*(_DWORD*)(a1 + 16) >> 6) & 8u) +
              20 * (((unsigned __int64)*(unsigned int*)(a1 + 16) >> 2) & 3));
  v12 = *v9;
  v10 = v9 + 1;
  v11 = v12;
  if ((*(_DWORD*)(a1 + 16) & 0xC00) != 0x800) {
    v10 = &v15;
  }
  v15 = v11;
  v14 = *v10;
  return GameRoutine_5779f0(a2, a3, (unsigned __int8*)&v15,
                            (unsigned __int8*)&v14);
}

__int64 Material_5892e0(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float* v23;
  float v24;
  __int64 v25;
  float v26;
  float v27;
  float* v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float* v43;
  float v44;
  __int64 v45;
  float v46;
  float v47;
  float* v48;
  float v49;
  float v50;
  float v51;
  __int64 v52;
  __int64 v53;
  unsigned int v54;
  __int64 v55;
  __int64 v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float* v63;
  float v64;
  __int64 v65;
  float v66;
  float v67;
  float* v68;
  float v69;
  float v70;
  float v71;
  __int64 v72;
  __int64 v73;
  unsigned int v74;
  unsigned int v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned int v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  unsigned int v92;
  int v93;
  int v94;
  unsigned int v95;
  __int64 v96;
  int v97;
  int v98;
  _BYTE* v99;
  _QWORD* v100;
  unsigned int v101;
  __int64 v102;
  int v103;
  int v104;
  int v105;
  int v106;
  unsigned int v107;
  unsigned int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  unsigned int v120;
  __int64 v121;
  int v122;
  int v123;
  int v124;
  int v125;
  __int64 v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  __int64 v138;
  unsigned int v139;
  __int64 v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  unsigned int v156;
  __int64 v157;
  __int64 v158;
  _BOOL4 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;

  v12 = *(_DWORD*)(result + 20);
  if ((v12 & 0xC) != 0) {
    v13 = (v12 >> 2) & 3;
    if ((*(_DWORD*)(result + 20) & 3u) < v13) {
      v13 = *(_DWORD*)(result + 20) & 3;
    }
    if ((int)v13 >= *(char*)(a2 + 403)) {
      v13 = *(char*)(a2 + 403);
    }
    if (v13 != 0) {
      v14 = *(_DWORD*)(result + 16);
      v15 = *(_QWORD*)(result + 24);
      v16 = 16LL * (v14 & 3);
      if ((unsigned int)*(unsigned __int8*)(v15 + (unsigned int)v16 +
                                            20 * ((v14 >> 2) & 3) + 1) -
              5 >=
          2) {
        v23 = (float*)(v15 + v16);
        v24 = v23[3];
        v25 = (__int64)(float)(v23[2] * 0x1.6c16c20000000p+23f);
        v26 = vcvts_n_f32_u32(v25 & 0xFFFFFF, 0x18u);
        v27 = v23[4];
        v28 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v25));
        v29 = v28[1] + (float)(v28[3] * v26);
        v30 = *v28 + (float)(v28[2] * v26);
        v31 = v24 * v29;
        v19 = v24 * v30;
        v18 = -(float)(v29 * v27);
        v21 = -(float)(v24 * v29);
        v17 = -(float)(v27 * v30);
        v20 = (float)((float)(*v23 + 0.5f) + (float)(v19 * -0.5f)) +
              (float)(v18 * -0.5f);
        v22 = 1.0f -
              (float)((float)((float)(v23[1] + 0.5f) + (float)(v31 * -0.5f)) +
                      (float)((float)(v27 * v30) * -0.5f));
      }
      else {
        v17 = -1.0f;
        v18 = 0.0f;
        v19 = 1.0f;
        v20 = 0.0f;
        v21 = 0.0f;
        v22 = 1.0f;
      }
      v32 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
      if (v32 != 0) {
        v33 = v32 + *(unsigned int*)(result + 48);
      }
      else {
        v33 = 0;
      }
      *(float*)(v33 + 112) = v19;
      *(float*)(v33 + 116) = v18;
      *(_DWORD*)(v33 + 120) = 0;
      *(float*)(v33 + 124) = v20;
      *(float*)(v33 + 128) = v21;
      *(float*)(v33 + 132) = v17;
      *(_DWORD*)(v33 + 136) = 0;
      *(float*)(v33 + 140) = v22;
      if (v13 != 1) {
        v34 = *(_DWORD*)(result + 16);
        v35 = *(_QWORD*)(result + 24);
        v36 = 16LL * (v34 & 3);
        if ((unsigned int)*(unsigned __int8*)(v35 + (unsigned int)v36 +
                                              20 * ((v34 >> 2) & 3) + 17) -
                5 >=
            2) {
          v43 = (float*)(v35 + v36);
          v44 = v43[8];
          v45 = (__int64)(float)(v43[7] * 0x1.6c16c20000000p+23f);
          v46 = vcvts_n_f32_u32(v45 & 0xFFFFFF, 0x18u);
          v47 = v43[9];
          v48 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v45));
          v49 = v48[1] + (float)(v48[3] * v46);
          v50 = *v48 + (float)(v48[2] * v46);
          v51 = v44 * v49;
          v39 = v44 * v50;
          v38 = -(float)(v49 * v47);
          v41 = -(float)(v44 * v49);
          v37 = -(float)(v47 * v50);
          v40 = (float)((float)(v43[5] + 0.5f) + (float)(v39 * -0.5f)) +
                (float)(v38 * -0.5f);
          v42 = 1.0f -
                (float)((float)((float)(v43[6] + 0.5f) + (float)(v51 * -0.5f)) +
                        (float)((float)(v47 * v50) * -0.5f));
        }
        else {
          v37 = -1.0f;
          v38 = 0.0f;
          v39 = 1.0f;
          v40 = 0.0f;
          v41 = 0.0f;
          v42 = 1.0f;
        }
        v52 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
        v53 = v52 != 0 ? v52 + *(unsigned int*)(result + 48) : 0LL;
        *(float*)(v53 + 144) = v39;
        *(float*)(v53 + 148) = v38;
        *(_DWORD*)(v53 + 152) = 0;
        *(float*)(v53 + 156) = v40;
        *(float*)(v53 + 160) = v41;
        *(float*)(v53 + 164) = v37;
        *(_DWORD*)(v53 + 168) = 0;
        *(float*)(v53 + 172) = v42;
        if (v13 != 2) {
          v54 = *(_DWORD*)(result + 16);
          v55 = *(_QWORD*)(result + 24);
          v56 = 16LL * (v54 & 3);
          if ((unsigned int)*(unsigned __int8*)(v55 + (unsigned int)v56 +
                                                20 * ((v54 >> 2) & 3) + 33) -
                  5 >=
              2) {
            v63 = (float*)(v55 + v56);
            v64 = v63[13];
            v65 = (__int64)(float)(v63[12] * 0x1.6c16c20000000p+23f);
            v66 = vcvts_n_f32_u32(v65 & 0xFFFFFF, 0x18u);
            v67 = v63[14];
            v68 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v65));
            v69 = v68[1] + (float)(v68[3] * v66);
            v70 = *v68 + (float)(v68[2] * v66);
            v71 = v64 * v69;
            v59 = v64 * v70;
            v58 = -(float)(v69 * v67);
            v61 = -(float)(v64 * v69);
            v57 = -(float)(v67 * v70);
            v60 = (float)((float)(v63[10] + 0.5f) + (float)(v59 * -0.5f)) +
                  (float)(v58 * -0.5f);
            v62 = 1.0f - (float)((float)((float)(v63[11] + 0.5f) +
                                         (float)(v71 * -0.5f)) +
                                 (float)((float)(v67 * v70) * -0.5f));
          }
          else {
            v57 = -1.0f;
            v58 = 0.0f;
            v59 = 1.0f;
            v60 = 0.0f;
            v61 = 0.0f;
            v62 = 1.0f;
          }
          v72 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
          v73 = v72 != 0 ? v72 + *(unsigned int*)(result + 48) : 0LL;
          *(float*)(v73 + 176) = v59;
          *(float*)(v73 + 180) = v58;
          *(_DWORD*)(v73 + 184) = 0;
          *(float*)(v73 + 188) = v60;
          *(float*)(v73 + 192) = v61;
          *(float*)(v73 + 196) = v57;
          *(_DWORD*)(v73 + 200) = 0;
          *(float*)(v73 + 204) = v62;
          if (v13 != 3) {
            v74 = 3 - v13;
            while (!__CFADD__(v74++, 1))
              ;
          }
        }
      }
      v12 = *(_DWORD*)(result + 20);
    }
  }
  v162 = v10;
  v163 = v11;
  v164 = v9;
  v165 = v8;
  v166 = v7;
  v167 = v6;
  if ((v12 & 0x30) != 0) {
    v76 = (v12 >> 4) & 3;
    if (v76 == 0 ||
        (*(_BYTE*)(a2 + 400) =
             *(_BYTE*)(*(_QWORD*)(result + 24) +
                       16 * (*(_DWORD*)(result + 16) & 3) +
                       20 * ((*(_DWORD*)(result + 16) >> 2) & 3u) + 1LL),
         v76 == 1) ||
        (*(_BYTE*)(a2 + 401) =
             *(_BYTE*)(*(_QWORD*)(result + 24) +
                       16 * (*(_DWORD*)(result + 16) & 3) +
                       20 * ((*(_DWORD*)(result + 16) >> 2) & 3u) + 17LL),
         v76 == 2)) {
      v77 = result;
      v78 = a2;
      v79 = a3;
      v80 = a4;
      memset(a2 + v76 + 400, 255, v76 ^ 3, a4, a5, a6);
      result = v77;
      a2 = v78;
      a3 = v79;
      a4 = v80;
    }
    else {
      *(_BYTE*)(a2 + 402) = *(
          _BYTE*)(*(_QWORD*)(result + 24) + 16 * (*(_DWORD*)(result + 16) & 3) +
                  20 * ((*(_DWORD*)(result + 16) >> 2) & 3u) + 33LL);
    }
    v82 = v166;
    v81 = v167;
    v84 = v164;
    v83 = v165;
    v85 = v162;
  }
  else {
    *(_BYTE*)(a2 + 400) = -1;
    v82 = v166;
    v81 = v167;
    v84 = v164;
    v83 = v165;
    v85 = v162;
  }
  if ((*(_BYTE*)(result + 16) & 3) != 0) {
    v160 = v85;
    v161 = v163;
    v164 = v84;
    v165 = v83;
    v166 = v82;
    v167 = v81;
    v86 = *(_DWORD*)(result + 20);
    v87 = *(unsigned int*)(result + 52);
    v88 = a4;
    v89 = a3;
    v90 = a2;
    v91 = result;
    v159 = false;
    v92 = (v86 >> 4) & 3;
    v158 = 0;
    if (v92 >= (v86 & 3)) {
      v93 = v86 & 3;
    }
    else {
      v93 = (v86 >> 4) & 3;
    }
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL) + v87 + 132) = 0;
    v94 = *(_DWORD*)(result + 20) & 3;
    if (v94 != 0) {
      v95 = *(_DWORD*)(result + 16);
      v96 = *(_QWORD*)(result + 24);
      v97 = 16 * (v95 & 3);
      v98 = (v95 >> 2) & 3;
      v99 = (_BYTE*)(v96 + (unsigned int)(v97 + 20 * v98));
      if (v99[1] == 7 ||
          v94 != 1 && (v99[17] == 7 || v94 != 2 && v99[33] == 7)) {
        result = (v95 >> 12) & 8;
        v100 =
            (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL) +
                      *(_QWORD*)(v96 + ((v97 + (v95 & 0x30)) | (v95 >> 6) & 8) +
                                 ((v95 >> 8) & 0xC) + ((v95 >> 4) & 0x1C) +
                                 (_DWORD)result + ((v95 >> 13) & 0x60) +
                                 (((int)(v95 << 19) >> 31) & 0xC) +
                                 (((int)(v95 << 15) >> 31) & 0x1C) +
                                 ((v95 >> 12) & 0x10) * ((v95 >> 6) & 7) +
                                 (((int)(v95 << 14) >> 31) & 0x74) +
                                 (unsigned __int64)(20 * (((v95 >> 13) & 3) +
                                                          v98))));
        v100[22] = 0;
        v100[23] = 0;
        v100[20] = 0;
        v100[21] = 0;
        v100[18] = 0;
        v100[19] = 0;
        v100[16] = 0;
        v100[17] = 0;
        v100[14] = 0;
        v100[15] = 0;
        v100[12] = 0;
        v100[13] = 0;
        v100[10] = 0;
        v100[11] = 0;
        v100[8] = 0;
        v100[9] = 0;
        v100[6] = 0;
        v100[7] = 0;
        v100[4] = 0;
        v100[5] = 0;
        v100[2] = 0;
        v100[3] = 0;
        *v100 = 0;
        v100[1] = 0;
      }
    }
    if (v93 == 0) {
      goto LABEL_79;
    }
    v101 = *(_DWORD*)(v91 + 16);
    v102 = *(_QWORD*)(v91 + 24);
    v103 = (v101 >> 2) & 3;
    v104 = 16 * (v101 & 3);
    v105 = (4 * v103) & 0xF | (16 * v103);
    v106 = *(unsigned __int8*)(v102 + (unsigned int)(v105 + v104) + 1);
    LODWORD(v158) = (unsigned int)(v106 - 3) < 4;
    if ((unsigned int)(v106 - 3) >= 4) {
      if (v106 == 7) {
        v109 = (v101 >> 13) & 3;
        v110 = (v101 >> 6) & 7;
        v111 = (v101 >> 12) & 8;
        v112 = (v101 >> 13) & 0x60;
        v113 = (v104 + (v101 & 0x30)) | (v101 >> 6) & 8;
        v114 = ((v101 >> 8) & 0xC) + ((v101 >> 4) & 0x1C);
        v115 = ((int)(v101 << 19) >> 31) & 0xC;
        v116 = ((int)(v101 << 15) >> 31) & 0x1C;
        v117 = (v101 >> 12) & 0x10;
        v118 = ((int)(v101 << 14) >> 31) & 0x74;
        if ((v101 & 0x300000) != 0) {
          v119 = 16;
        }
        else {
          v119 = 0;
        }
        result = Material_58a8a0_alt1(
            v91, v90,
            v102 +
                (unsigned int)(v113 + v114 + v111 + v112 + v115 + v116 +
                               v117 * v110 + v118 + v119 + 20 * (v109 + v103)),
            0);
        v107 = 1;
        v108 = 0;
        if (v93 == 1) {
          goto LABEL_79;
        }
      }
      else {
        v107 = 0;
        v108 = 0;
        if (v93 == 1) {
          goto LABEL_79;
        }
      }
    }
    else {
      result =
          GameRoutine_58a150(v91, a2, a3, a4,
                             v102 + ((v104 + (v101 & 0x30)) | (v101 >> 6) & 8) +
                                 ((v101 >> 8) & 0xC) + ((v101 >> 4) & 0x1C) +
                                 v105 + (((int)(v101 << 19) >> 31) & 0xC),
                             0);
      v107 = 0;
      v108 = 1;
      if (v93 == 1) {
        goto LABEL_79;
      }
    }
    v120 = *(_DWORD*)(v91 + 16);
    v121 = *(_QWORD*)(v91 + 24);
    v122 = (v120 >> 2) & 3;
    v123 = 16 * (v120 & 3);
    v124 = (4 * v122) & 0xF | (16 * v122);
    v125 = *(unsigned __int8*)(v121 + (unsigned int)(v124 + v123) + 17);
    HIDWORD(v158) = (unsigned int)(v125 - 3) < 4;
    if ((unsigned int)(v125 - 3) >= 4) {
      if (v125 == 7) {
        v127 = (v120 >> 13) & 3;
        v128 = (v120 >> 6) & 7;
        v129 = (v120 >> 12) & 8;
        v130 = (v120 >> 13) & 0x60;
        v131 = (v123 + (v120 & 0x30)) | (v120 >> 6) & 8;
        v132 = ((v120 >> 8) & 0xC) + ((v120 >> 4) & 0x1C);
        v133 = ((int)(v120 << 19) >> 31) & 0xC;
        v134 = ((int)(v120 << 15) >> 31) & 0x1C;
        v135 = (v120 >> 12) & 0x10;
        v136 = ((int)(v120 << 14) >> 31) & 0x74;
        if ((v120 & 0x300000) != 0) {
          v137 = 16;
        }
        else {
          v137 = 0;
        }
        v138 = v121 +
               (unsigned int)(v131 + v132 + v129 + v130 + v133 + v134 +
                              v135 * v128 + v136 + v137 + 20 * (v127 + v122)) +
               88LL * v107++;
        result = Material_58a8a0_alt1(v91, v90, v138, 1);
      }
    }
    else {
      v126 = v121 + ((v123 + (v120 & 0x30)) | (v120 >> 6) & 8) +
             ((v120 >> 8) & 0xC) + ((v120 >> 4) & 0x1C) + v124 +
             (((int)(v120 << 19) >> 31) & 0xC) + 20LL * v108++;
      result = GameRoutine_58a150(v91, v90, v89, v88, v126, 1);
    }
    if (v93 != 2) {
      v139 = *(_DWORD*)(v91 + 16);
      v140 = *(_QWORD*)(v91 + 24);
      v141 = (v139 >> 2) & 3;
      v142 = 16 * (v139 & 3);
      v143 = (4 * v141) & 0xF | (16 * v141);
      v144 = *(unsigned __int8*)(v140 + (unsigned int)(v143 + v142) + 33);
      v159 = (unsigned int)(v144 - 3) < 4;
      if ((unsigned int)(v144 - 3) >= 4) {
        if (v144 == 7) {
          v145 = (v139 >> 13) & 3;
          v146 = (v139 >> 6) & 7;
          v147 = (v139 >> 12) & 8;
          v148 = (v139 >> 13) & 0x60;
          v149 = (v142 + (v139 & 0x30)) | (v139 >> 6) & 8;
          v150 = ((v139 >> 8) & 0xC) + ((v139 >> 4) & 0x1C);
          v151 = ((int)(v139 << 19) >> 31) & 0xC;
          v152 = ((int)(v139 << 15) >> 31) & 0x1C;
          v153 = (v139 >> 12) & 0x10;
          v154 = ((int)(v139 << 14) >> 31) & 0x74;
          if ((v139 & 0x300000) != 0) {
            v155 = 16;
          }
          else {
            v155 = 0;
          }
          result = Material_58a8a0_alt1(
              v91, v90,
              v140 +
                  (unsigned int)(v149 + v150 + v147 + v148 + v151 + v152 +
                                 v153 * v146 + v154 + v155 +
                                 20 * (v145 + v141)) +
                  88LL * v107,
              2);
        }
      }
      else {
        result = GameRoutine_58a150(
            v91, v90, v89, v88,
            v140 + ((v142 + (v139 & 0x30)) | (v139 >> 6) & 8) +
                ((v139 >> 8) & 0xC) + ((v139 >> 4) & 0x1C) + v143 +
                (((int)(v139 << 19) >> 31) & 0xC) + 20LL * v108,
            2);
      }
      goto LABEL_82;
    }
  LABEL_79:
    v156 = v86 & 3;
    if (v156 >= v92) {
      v156 = (v86 >> 4) & 3;
    }
    result = memset((char*)&v158 + 4 * v156, 0,
                    (unsigned int)(4 * (2 - v93) + 4), a4, a5, a6);
  LABEL_82:
    v157 =
        *(_QWORD*)(*(_QWORD*)(v90 + 200) + 56LL) + *(unsigned int*)(v91 + 48);
    *(_QWORD*)(v157 + 544) = v158;
    *(_DWORD*)(v157 + 552) = v159;
  }
  return result;
}

__int64 Material_58a8a0(__int64 result, __int64 a2, __int64 a3, signed int a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  char v10;
  char v11;
  float v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;

  v4 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
  if (v4 != 0) {
    v5 = *(_DWORD*)(result + 16);
    v6 = v4 +
         *(_QWORD*)(*(_QWORD*)(result + 24) +
                    ((16 * (v5 & 3) + (v5 & 0x30)) | (v5 >> 6) & 8) +
                    ((v5 >> 8) & 0xC) + ((v5 >> 4) & 0x1C) + ((v5 >> 12) & 8) +
                    ((v5 >> 13) & 0x60) + (((int)(v5 << 19) >> 31) & 0xC) +
                    (((int)(v5 << 15) >> 31) & 0x1C) +
                    ((v5 >> 12) & 0x10) * ((v5 >> 6) & 7) +
                    (((int)(v5 << 14) >> 31) & 0x74) +
                    (unsigned __int64)(20 *
                                       (((v5 >> 13) & 3) + ((v5 >> 2) & 3))));
    v7 = v6 + 16LL * a4;
    *(_DWORD*)v7 = *(_DWORD*)a3;
    *(_DWORD*)(v7 + 4) = *(_DWORD*)(a3 + 4);
    *(_DWORD*)(v7 + 8) = *(_DWORD*)(a3 + 8);
    *(_DWORD*)(v7 + 12) = *(_DWORD*)(a3 + 12);
    *(_DWORD*)(v7 + 48) = *(_DWORD*)(a3 + 16);
    *(_DWORD*)(v7 + 52) = *(_DWORD*)(a3 + 20);
    v8 = *(float*)(a3 + 24);
    *(_DWORD*)(v7 + 60) = 0;
    *(_DWORD*)(v7 + 144) = 1065353216;
    *(float*)(v7 + 56) = v8 * 0x1.1df46a0000000p-6f;
    v9 = 0x1.0000000000000p+0f;
    v10 = *(_BYTE*)(a3 + 64);
    *(_QWORD*)(v7 + 96) = 0;
    *(_QWORD*)(v7 + 104) = 0;
    if ((v10 & 4) == 0) {
      v9 = 0x0.0p+0f;
    }
    *(float*)(v7 + 148) = v9;
    v11 = *(_BYTE*)(a3 + 64);
    if ((v11 & 1) != 0) {
      v12 = *(float*)(a3 + 48);
      v13 = v6 + 16LL * a4;
      *(float*)(v13 + 96) = v12;
      *(float*)(v13 + 100) = *(float*)(a3 + 52) - v12;
      v11 = *(_BYTE*)(a3 + 64);
    }
    if ((v11 & 2) != 0) {
      v14 = v6 + 16LL * a4;
      *(float*)(v14 + 104) = *(float*)(a3 + 56) * 0x1.1df46a0000000p-6f;
      *(float*)(v14 + 108) = (float)(*(float*)(a3 + 60) - *(float*)(a3 + 56)) *
                             0x1.1df46a0000000p-6f;
    }
  }
  if ((unsigned int)a4 <= 2) {
    v15 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
    if (v15 != 0) {
      v16 = v15 + *(unsigned int*)(result + 48);
    }
    else {
      v16 = 0;
    }
    v17 = (_QWORD*)(v16 + (unsigned int)(a4 << 6));
    v17[30] = 1065353216;
    v17[31] = 0x3F80000000000000LL;
    v17[28] = 0;
    v17[29] = 0x3F80000000000000LL;
    v17[32] = 0x3F80000000000000LL;
    v17[33] = 0x3F80000000000000LL;
    v17[34] = 0x3F8000003F800000LL;
    v17[35] = 0x3F80000000000000LL;
  }
  return result;
}

#pragma GCC visibility pop
