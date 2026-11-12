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
__int64 Material_5892e0_alt1(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                             __int64 a5, __int64 a6) __asm__("Material_5892e0");
__int64 Material_58a8a0(__int64 result, __int64 a2, __int64 a3, signed int a4);
_QWORD* GameRoutine_58a150_alt1(_QWORD* result, __int64, float32x4_t*, float*,
                                __int64,
                                unsigned int) __asm__("GameRoutine_58a150");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 Material_5892e0(__int64 result, __int64 a2, float32x4_t* a3, float* a4);

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

__int64 Material_5892e0(__int64 result, __int64 a2, float32x4_t* a3, float* a4)
{
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float* v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  float* v26;
  float v27;
  float v28;
  float v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float* v41;
  float v42;
  __int64 v43;
  float v44;
  float v45;
  float* v46;
  float v47;
  float v48;
  float v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  __int64 v53;
  __int64 v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float* v61;
  float v62;
  __int64 v63;
  float v64;
  float v65;
  float* v66;
  float v67;
  float v68;
  float v69;
  __int64 v70;
  __int64 v71;
  unsigned int v72;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  float32x4_t* v77;
  float* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  unsigned int v84;
  __int64 v85;
  float* v86;
  float32x4_t* v87;
  __int64 v88;
  __int64 v89;
  unsigned int v90;
  int v91;
  int v92;
  unsigned int v93;
  __int64 v94;
  int v95;
  int v96;
  _BYTE* v97;
  _QWORD* v98;
  unsigned int v99;
  __int64 v100;
  int v101;
  int v102;
  int v103;
  int v104;
  unsigned int v105;
  unsigned int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  unsigned int v118;
  __int64 v119;
  int v120;
  int v121;
  int v122;
  int v123;
  __int64 v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  __int64 v136;
  unsigned int v137;
  __int64 v138;
  int v139;
  int v140;
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
  unsigned int v154;
  __int64 v155;
  struct {
    __int64 v156;
    _BOOL4 v157;
    char gap12_[4];
    __int64 v158;
    __int64 v159;
  } v156_;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;

  v10 = *(_DWORD*)(result + 20);
  if ((v10 & 0xC) != 0) {
    v11 = (v10 >> 2) & 3;
    if ((*(_DWORD*)(result + 20) & 3u) < v11) {
      v11 = *(_DWORD*)(result + 20) & 3;
    }
    if ((int)v11 >= *(char*)(a2 + 403)) {
      v11 = *(char*)(a2 + 403);
    }
    if (v11 != 0) {
      v12 = *(_DWORD*)(result + 16);
      v13 = *(_QWORD*)(result + 24);
      v14 = 16LL * (v12 & 3);
      if ((unsigned int)*(unsigned __int8*)(v13 + (unsigned int)v14 +
                                            20 * ((v12 >> 2) & 3) + 1) -
              5 >=
          2) {
        v21 = (float*)(v13 + v14);
        v22 = v21[3];
        v23 = (__int64)(float)(v21[2] * 0x1.6c16c20000000p+23f);
        v24 = vcvts_n_f32_u32(v23 & 0xFFFFFF, 0x18u);
        v25 = v21[4];
        v26 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v23));
        v27 = v26[1] + (float)(v26[3] * v24);
        v28 = *v26 + (float)(v26[2] * v24);
        v29 = v22 * v27;
        v17 = v22 * v28;
        v16 = -(float)(v27 * v25);
        v19 = -(float)(v22 * v27);
        v15 = -(float)(v25 * v28);
        v18 = (float)((float)(*v21 + 0x1.0000000000000p-1f) +
                      (float)(v17 * -0x1.0000000000000p-1f)) +
              (float)(v16 * -0x1.0000000000000p-1f);
        v20 = 0x1.0000000000000p+0f -
              (float)((float)((float)(v21[1] + 0x1.0000000000000p-1f) +
                              (float)(v29 * -0x1.0000000000000p-1f)) +
                      (float)((float)(v25 * v28) * -0x1.0000000000000p-1f));
      }
      else {
        v15 = -0x1.0000000000000p+0f;
        v16 = 0x0.0p+0f;
        v17 = 0x1.0000000000000p+0f;
        v18 = 0x0.0p+0f;
        v19 = 0x0.0p+0f;
        v20 = 0x1.0000000000000p+0f;
      }
      v30 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
      if (v30 != 0) {
        v31 = v30 + *(unsigned int*)(result + 48);
      }
      else {
        v31 = 0;
      }
      *(float*)(v31 + 112) = v17;
      *(float*)(v31 + 116) = v16;
      *(_DWORD*)(v31 + 120) = 0;
      *(float*)(v31 + 124) = v18;
      *(float*)(v31 + 128) = v19;
      *(float*)(v31 + 132) = v15;
      *(_DWORD*)(v31 + 136) = 0;
      *(float*)(v31 + 140) = v20;
      if (v11 != 1) {
        v32 = *(_DWORD*)(result + 16);
        v33 = *(_QWORD*)(result + 24);
        v34 = 16LL * (v32 & 3);
        if ((unsigned int)*(unsigned __int8*)(v33 + (unsigned int)v34 +
                                              20 * ((v32 >> 2) & 3) + 17) -
                5 >=
            2) {
          v41 = (float*)(v33 + v34);
          v42 = v41[8];
          v43 = (__int64)(float)(v41[7] * 0x1.6c16c20000000p+23f);
          v44 = vcvts_n_f32_u32(v43 & 0xFFFFFF, 0x18u);
          v45 = v41[9];
          v46 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v43));
          v47 = v46[1] + (float)(v46[3] * v44);
          v48 = *v46 + (float)(v46[2] * v44);
          v49 = v42 * v47;
          v37 = v42 * v48;
          v36 = -(float)(v47 * v45);
          v39 = -(float)(v42 * v47);
          v35 = -(float)(v45 * v48);
          v38 = (float)((float)(v41[5] + 0x1.0000000000000p-1f) +
                        (float)(v37 * -0x1.0000000000000p-1f)) +
                (float)(v36 * -0x1.0000000000000p-1f);
          v40 = 0x1.0000000000000p+0f -
                (float)((float)((float)(v41[6] + 0x1.0000000000000p-1f) +
                                (float)(v49 * -0x1.0000000000000p-1f)) +
                        (float)((float)(v45 * v48) * -0x1.0000000000000p-1f));
        }
        else {
          v35 = -0x1.0000000000000p+0f;
          v36 = 0x0.0p+0f;
          v37 = 0x1.0000000000000p+0f;
          v38 = 0x0.0p+0f;
          v39 = 0x0.0p+0f;
          v40 = 0x1.0000000000000p+0f;
        }
        v50 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
        v51 = v50 != 0 ? v50 + *(unsigned int*)(result + 48) : 0LL;
        *(float*)(v51 + 144) = v37;
        *(float*)(v51 + 148) = v36;
        *(_DWORD*)(v51 + 152) = 0;
        *(float*)(v51 + 156) = v38;
        *(float*)(v51 + 160) = v39;
        *(float*)(v51 + 164) = v35;
        *(_DWORD*)(v51 + 168) = 0;
        *(float*)(v51 + 172) = v40;
        if (v11 != 2) {
          v52 = *(_DWORD*)(result + 16);
          v53 = *(_QWORD*)(result + 24);
          v54 = 16LL * (v52 & 3);
          if ((unsigned int)*(unsigned __int8*)(v53 + (unsigned int)v54 +
                                                20 * ((v52 >> 2) & 3) + 33) -
                  5 >=
              2) {
            v61 = (float*)(v53 + v54);
            v62 = v61[13];
            v63 = (__int64)(float)(v61[12] * 0x1.6c16c20000000p+23f);
            v64 = vcvts_n_f32_u32(v63 & 0xFFFFFF, 0x18u);
            v65 = v61[14];
            v66 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v63));
            v67 = v66[1] + (float)(v66[3] * v64);
            v68 = *v66 + (float)(v66[2] * v64);
            v69 = v62 * v67;
            v57 = v62 * v68;
            v56 = -(float)(v67 * v65);
            v59 = -(float)(v62 * v67);
            v55 = -(float)(v65 * v68);
            v58 = (float)((float)(v61[10] + 0x1.0000000000000p-1f) +
                          (float)(v57 * -0x1.0000000000000p-1f)) +
                  (float)(v56 * -0x1.0000000000000p-1f);
            v60 = 0x1.0000000000000p+0f -
                  (float)((float)((float)(v61[11] + 0x1.0000000000000p-1f) +
                                  (float)(v69 * -0x1.0000000000000p-1f)) +
                          (float)((float)(v65 * v68) * -0x1.0000000000000p-1f));
          }
          else {
            v55 = -0x1.0000000000000p+0f;
            v56 = 0x0.0p+0f;
            v57 = 0x1.0000000000000p+0f;
            v58 = 0x0.0p+0f;
            v59 = 0x0.0p+0f;
            v60 = 0x1.0000000000000p+0f;
          }
          v70 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
          v71 = v70 != 0 ? v70 + *(unsigned int*)(result + 48) : 0LL;
          *(float*)(v71 + 176) = v57;
          *(float*)(v71 + 180) = v56;
          *(_DWORD*)(v71 + 184) = 0;
          *(float*)(v71 + 188) = v58;
          *(float*)(v71 + 192) = v59;
          *(float*)(v71 + 196) = v55;
          *(_DWORD*)(v71 + 200) = 0;
          *(float*)(v71 + 204) = v60;
          if (v11 != 3) {
            v72 = 3 - v11;
            while (!__CFADD__(v72++, 1))
              ;
          }
        }
      }
      v10 = *(_DWORD*)(result + 20);
    }
  }
  if ((v10 & 0x30) != 0) {
    v74 = (v10 >> 4) & 3;
    if (v74 == 0 ||
        (*(_BYTE*)(a2 + 400) =
             *(_BYTE*)(*(_QWORD*)(result + 24) +
                       16 * (*(_DWORD*)(result + 16) & 3) +
                       20 * ((*(_DWORD*)(result + 16) >> 2) & 3u) + 1LL),
         v74 == 1) ||
        (*(_BYTE*)(a2 + 401) =
             *(_BYTE*)(*(_QWORD*)(result + 24) +
                       16 * (*(_DWORD*)(result + 16) & 3) +
                       20 * ((*(_DWORD*)(result + 16) >> 2) & 3u) + 17LL),
         v74 == 2)) {
      v75 = result;
      v76 = a2;
      v77 = a3;
      v78 = a4;
      memset_alt1(a2 + v74 + 400, 255, v74 ^ 3);
      result = v75;
      a2 = v76;
      a3 = v77;
      a4 = v78;
    }
    else {
      *(_BYTE*)(a2 + 402) = *(
          _BYTE*)(*(_QWORD*)(result + 24) + 16 * (*(_DWORD*)(result + 16) & 3) +
                  20 * ((*(_DWORD*)(result + 16) >> 2) & 3u) + 33LL);
    }
    v80 = v164;
    v79 = v165;
    v82 = v162;
    v81 = v163;
    v83 = v160;
  }
  else {
    *(_BYTE*)(a2 + 400) = -1;
    v80 = v164;
    v79 = v165;
    v82 = v162;
    v81 = v163;
    v83 = v160;
  }
  if ((*(_BYTE*)(result + 16) & 3) != 0) {
    v156_.v158 = v83;
    v156_.v159 = v161;
    v162 = v82;
    v163 = v81;
    v164 = v80;
    v165 = v79;
    v84 = *(_DWORD*)(result + 20);
    v85 = *(unsigned int*)(result + 52);
    v86 = a4;
    v87 = a3;
    v88 = a2;
    v89 = result;
    v156_.v157 = false;
    v90 = (v84 >> 4) & 3;
    v156_.v156 = 0;
    if (v90 >= (v84 & 3)) {
      v91 = v84 & 3;
    }
    else {
      v91 = (v84 >> 4) & 3;
    }
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL) + v85 + 132) = 0;
    v92 = *(_DWORD*)(result + 20) & 3;
    if (v92 != 0) {
      v93 = *(_DWORD*)(result + 16);
      v94 = *(_QWORD*)(result + 24);
      v95 = 16 * (v93 & 3);
      v96 = (v93 >> 2) & 3;
      v97 = (_BYTE*)(v94 + (unsigned int)(v95 + 20 * v96));
      if (v97[1] == 7 ||
          v92 != 1 && (v97[17] == 7 || v92 != 2 && v97[33] == 7)) {
        result = (v93 >> 12) & 8;
        v98 =
            (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL) +
                      *(_QWORD*)(v94 + ((v95 + (v93 & 0x30)) | (v93 >> 6) & 8) +
                                 ((v93 >> 8) & 0xC) + ((v93 >> 4) & 0x1C) +
                                 (_DWORD)result + ((v93 >> 13) & 0x60) +
                                 (((int)(v93 << 19) >> 31) & 0xC) +
                                 (((int)(v93 << 15) >> 31) & 0x1C) +
                                 ((v93 >> 12) & 0x10) * ((v93 >> 6) & 7) +
                                 (((int)(v93 << 14) >> 31) & 0x74) +
                                 (unsigned __int64)(20 * (((v93 >> 13) & 3) +
                                                          v96))));
        v98[22] = 0;
        v98[23] = 0;
        v98[20] = 0;
        v98[21] = 0;
        v98[18] = 0;
        v98[19] = 0;
        v98[16] = 0;
        v98[17] = 0;
        v98[14] = 0;
        v98[15] = 0;
        v98[12] = 0;
        v98[13] = 0;
        v98[10] = 0;
        v98[11] = 0;
        v98[8] = 0;
        v98[9] = 0;
        v98[6] = 0;
        v98[7] = 0;
        v98[4] = 0;
        v98[5] = 0;
        v98[2] = 0;
        v98[3] = 0;
        *v98 = 0;
        v98[1] = 0;
      }
    }
    if (v91 == 0) {
      goto LABEL_79;
    }
    v99 = *(_DWORD*)(v89 + 16);
    v100 = *(_QWORD*)(v89 + 24);
    v101 = (v99 >> 2) & 3;
    v102 = 16 * (v99 & 3);
    v103 = (4 * v101) & 0xF | (16 * v101);
    v104 = *(unsigned __int8*)(v100 + (unsigned int)(v103 + v102) + 1);
    LODWORD(v156_.v156) = (unsigned int)(v104 - 3) < 4;
    if ((unsigned int)(v104 - 3) >= 4) {
      if (v104 == 7) {
        v107 = (v99 >> 13) & 3;
        v108 = (v99 >> 6) & 7;
        v109 = (v99 >> 12) & 8;
        v110 = (v99 >> 13) & 0x60;
        v111 = (v102 + (v99 & 0x30)) | (v99 >> 6) & 8;
        v112 = ((v99 >> 8) & 0xC) + ((v99 >> 4) & 0x1C);
        v113 = ((int)(v99 << 19) >> 31) & 0xC;
        v114 = ((int)(v99 << 15) >> 31) & 0x1C;
        v115 = (v99 >> 12) & 0x10;
        v116 = ((int)(v99 << 14) >> 31) & 0x74;
        if ((v99 & 0x300000) != 0) {
          v117 = 16;
        }
        else {
          v117 = 0;
        }
        result = Material_58a8a0(
            v89, v88,
            v100 +
                (unsigned int)(v111 + v112 + v109 + v110 + v113 + v114 +
                               v115 * v108 + v116 + v117 + 20 * (v107 + v101)),
            0);
        v105 = 1;
        v106 = 0;
        if (v91 == 1) {
          goto LABEL_79;
        }
      }
      else {
        v105 = 0;
        v106 = 0;
        if (v91 == 1) {
          goto LABEL_79;
        }
      }
    }
    else {
      result = (__int64)GameRoutine_58a150_alt1(
          (_QWORD*)v89, a2, a3, a4,
          v100 + ((v102 + (v99 & 0x30)) | (v99 >> 6) & 8) + ((v99 >> 8) & 0xC) +
              ((v99 >> 4) & 0x1C) + v103 + (((int)(v99 << 19) >> 31) & 0xC),
          0);
      v105 = 0;
      v106 = 1;
      if (v91 == 1) {
        goto LABEL_79;
      }
    }
    v118 = *(_DWORD*)(v89 + 16);
    v119 = *(_QWORD*)(v89 + 24);
    v120 = (v118 >> 2) & 3;
    v121 = 16 * (v118 & 3);
    v122 = (4 * v120) & 0xF | (16 * v120);
    v123 = *(unsigned __int8*)(v119 + (unsigned int)(v122 + v121) + 17);
    HIDWORD(v156_.v156) = (unsigned int)(v123 - 3) < 4;
    if ((unsigned int)(v123 - 3) >= 4) {
      if (v123 == 7) {
        v125 = (v118 >> 13) & 3;
        v126 = (v118 >> 6) & 7;
        v127 = (v118 >> 12) & 8;
        v128 = (v118 >> 13) & 0x60;
        v129 = (v121 + (v118 & 0x30)) | (v118 >> 6) & 8;
        v130 = ((v118 >> 8) & 0xC) + ((v118 >> 4) & 0x1C);
        v131 = ((int)(v118 << 19) >> 31) & 0xC;
        v132 = ((int)(v118 << 15) >> 31) & 0x1C;
        v133 = (v118 >> 12) & 0x10;
        v134 = ((int)(v118 << 14) >> 31) & 0x74;
        if ((v118 & 0x300000) != 0) {
          v135 = 16;
        }
        else {
          v135 = 0;
        }
        v136 = v119 +
               (unsigned int)(v129 + v130 + v127 + v128 + v131 + v132 +
                              v133 * v126 + v134 + v135 + 20 * (v125 + v120)) +
               88LL * v105++;
        result = Material_58a8a0(v89, v88, v136, 1);
      }
    }
    else {
      v124 = v119 + ((v121 + (v118 & 0x30)) | (v118 >> 6) & 8) +
             ((v118 >> 8) & 0xC) + ((v118 >> 4) & 0x1C) + v122 +
             (((int)(v118 << 19) >> 31) & 0xC) + 20LL * v106++;
      result = (__int64)GameRoutine_58a150_alt1((_QWORD*)v89, v88, v87, v86,
                                                v124, 1u);
    }
    if (v91 != 2) {
      v137 = *(_DWORD*)(v89 + 16);
      v138 = *(_QWORD*)(v89 + 24);
      v139 = (v137 >> 2) & 3;
      v140 = 16 * (v137 & 3);
      v141 = (4 * v139) & 0xF | (16 * v139);
      v142 = *(unsigned __int8*)(v138 + (unsigned int)(v141 + v140) + 33);
      v156_.v157 = (unsigned int)(v142 - 3) < 4;
      if ((unsigned int)(v142 - 3) >= 4) {
        if (v142 == 7) {
          v143 = (v137 >> 13) & 3;
          v144 = (v137 >> 6) & 7;
          v145 = (v137 >> 12) & 8;
          v146 = (v137 >> 13) & 0x60;
          v147 = (v140 + (v137 & 0x30)) | (v137 >> 6) & 8;
          v148 = ((v137 >> 8) & 0xC) + ((v137 >> 4) & 0x1C);
          v149 = ((int)(v137 << 19) >> 31) & 0xC;
          v150 = ((int)(v137 << 15) >> 31) & 0x1C;
          v151 = (v137 >> 12) & 0x10;
          v152 = ((int)(v137 << 14) >> 31) & 0x74;
          if ((v137 & 0x300000) != 0) {
            v153 = 16;
          }
          else {
            v153 = 0;
          }
          result = Material_58a8a0(
              v89, v88,
              v138 +
                  (unsigned int)(v147 + v148 + v145 + v146 + v149 + v150 +
                                 v151 * v144 + v152 + v153 +
                                 20 * (v143 + v139)) +
                  88LL * v105,
              2);
        }
      }
      else {
        result = (__int64)GameRoutine_58a150_alt1(
            (_QWORD*)v89, v88, v87, v86,
            v138 + ((v140 + (v137 & 0x30)) | (v137 >> 6) & 8) +
                ((v137 >> 8) & 0xC) + ((v137 >> 4) & 0x1C) + v141 +
                (((int)(v137 << 19) >> 31) & 0xC) + 20LL * v106,
            2u);
      }
      goto LABEL_82;
    }
  LABEL_79:
    v154 = v84 & 3;
    if (v154 >= v90) {
      v154 = (v84 >> 4) & 3;
    }
    result = memset_alt1((__int64)&v156_.v156 + 4 * v154, 0,
                         (unsigned int)(4 * (2 - v91) + 4));
  LABEL_82:
    v155 =
        *(_QWORD*)(*(_QWORD*)(v88 + 200) + 56LL) + *(unsigned int*)(v89 + 48);
    *(_QWORD*)(v155 + 544) = v156_.v156;
    *(_DWORD*)(v155 + 552) = v156_.v157;
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
