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

#pragma GCC visibility pop
