#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void asCDataType_CreatePrimitive(PSEUDO_X8, int,
                                                            char);
__int64 GameRoutine_1bd280(__int64 result, __int64);
__int64 asCByteCode_Instr(_QWORD*, unsigned int);
__int64 asCByteCode_InstrSHORT(_QWORD*, unsigned int, __int16);
__int64 asCByteCode_InstrW_DW(_QWORD*, unsigned int, __int16, int);
__int64 asCCompiler_AllocateVariable(__int64, __int64, char, char,
                                     unsigned int);
__int64 asCCompiler_CompileOverloadedDualOperator2(__int64, unsigned __int64 i,
                                                   __int64, __int64, __int64,
                                                   char, __int64, char,
                                                   __int64);
__int64 asCCompiler_DetermineSingleFunc(__int64 result, __int64, __int64,
                                        __int64, __int64, __int64, __int64,
                                        __int64);
__int64 asCCompiler_Error(__int64, __int64, __int64);
__int64 asCCompiler_ReleaseTemporaryVariable(__int64, unsigned int, __int64);
__int64 asCDataType_Destroy_asCDataType(_QWORD);
__int64 asCExprValue_SetDummy(__int64);
__int64 asCString_Destroy_asCString(__int64 result);
__int64 asCString_asCString_25f730(unsigned int*, __int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int64 snd_g_proxy_ptr[2];
extern char* GameData_1f7a368[12];
__int64 asCArray_SetLength(__int64 a1);
__int64 asCCompiler_CompileOverloadedDualOperator(__int64 a1,
                                                  unsigned __int64 a2,
                                                  __int64 a3, __int64 a4,
                                                  __int64 a5, __int64 a6,
                                                  __int64 a7, __int64 a8);

__int64 asCArray_SetLength(__int64 a1)
{
  _DWORD* v5;
  __int64 v6;
  int v7;
  __int64 v8;
  _DWORD* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  _DWORD* v14;
  int v15;
  unsigned int v16;
  const char* v17;

  nn_os_LockMutex(a1 + 120);
  if (*(int*)(a1 + 272) < 1) {
    v17 = "#SoundLibrary : WaveStreamReader request buffer underflow !!\n";
    goto LABEL_13;
  }
  **(_DWORD**)(a1 + 168) = *(_DWORD*)(a1 + 176 + 12LL * *(int*)(a1 + 276));
  *(_DWORD*)(*(_QWORD*)(a1 + 168) + 4LL) =
      *(_DWORD*)(a1 + 176 + 12LL * *(int*)(a1 + 276) + 4);
  v5 = *(_DWORD**)(a1 + 168);
  v6 = *(_QWORD*)(a1 + 424 + 8LL * *(int*)(a1 + 448));
  v7 = *(_DWORD*)(v6 + 8);
  if (*v5 < v7 || (v8 = (int)v5[1], *(_DWORD*)(v6 + 12) + v7 < (int)v8 + *v5) ||
      *(_BYTE*)(v6 + 40) != 1) {
    v11 = *(_QWORD*)(v6 + 32);
    *(_DWORD*)(v6 + 24) = 0;
    *(_QWORD*)(v6 + 8) = 0;
    *(_QWORD*)(v6 + 16) = 0;
    memset(v11, 0, 0x20000);
    *(_BYTE*)(v6 + 40) = 0;
    v12 = (*(int*)(a1 + 448) + 1LL) % 3uLL;
    *(_DWORD*)(a1 + 448) = v12;
    v13 = *(_QWORD*)(a1 + 424 + 8 * v12);
    v14 = *(_DWORD**)(a1 + 168);
    v15 = *(_DWORD*)(v13 + 8);
    if (*v14 >= v15) {
      v8 = (int)v14[1];
      if (*(_DWORD*)(v13 + 12) + v15 >= (int)v8 + *v14 &&
          *(_BYTE*)(v13 + 40) == 1) {
        v9 = v14 + 3;
        v10 = *(_QWORD*)(v13 + 32) + *v14 - v15;
        goto LABEL_10;
      }
    }
    v17 = "#SoundLibrary : WaveStreamReader exchange buffer no hit cache !!\n";
  LABEL_13:
    (*(void (**)(_QWORD, const char*))(**(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
        *(_QWORD*)snd_g_proxy_ptr[0], v17);
    v16 = 0;
    goto LABEL_14;
  }
  v9 = v5 + 3;
  v10 = *(_QWORD*)(v6 + 32) + *v5 - v7;
LABEL_10:
  memcpy(v9, v10, v8);
  v16 = 1;
  *(_DWORD*)(a1 + 276) = ((unsigned __int8)*(_DWORD*)(a1 + 276) + 1) & 7;
  --*(_DWORD*)(a1 + 272);
LABEL_14:
  nn_os_UnlockMutex(a1 + 120);
  return v16;
}

__int64 asCCompiler_CompileOverloadedDualOperator(__int64 a1,
                                                  unsigned __int64 a2,
                                                  __int64 a3, __int64 a4,
                                                  __int64 a5, __int64 a6,
                                                  __int64 a7, __int64 a8)
{
  int v8;
  char v9;
  char v11;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  __int16 v26;
  unsigned int v27;
  bool v28;
  __int64 v29;
  const char* v30;
  const char* v31;
  __int16 v32;
  __int16 v33;
  char v34;
  int v35;
  const char* v36;
  int v37;
  __int64 v38;
  const char* v39;
  int v40;
  bool v41;
  _BOOL4 v42;
  __int16 v43;
  __int16 v45;
  _BOOL4 v46;
  _BOOL8 v47;
  bool v48;
  char v49;
  unsigned int v50[6];

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v8 = a8;
  v9 = a7;
  v11 = a5;
  asCCompiler_DetermineSingleFunc(a1, a3, a2, a4, a5, a6, a7, a8),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  asCCompiler_DetermineSingleFunc(a1, a4, a2, v16, v17, v18, v19, v20),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  *(_QWORD*)(a6 + 200) = a2;
  if (v8 != 0) {
    v21 = v8;
    if ((unsigned int)(v8 - 85) < 3) {
      return 0;
    }
  }
  else {
    v8 = *(_DWORD*)(a2 + 4);
    if (v8 != 0) {
      v21 = *(_DWORD*)(a2 + 4);
    }
    else {
      v21 = 37;
    }
    if ((unsigned int)(v21 - 85) < 3) {
      return 0;
    }
  }
  v49 = v9;
  if ((unsigned int)(v21 - 53) > 1) {
    if ((unsigned int)(v21 - 53) > 5) {
      goto LABEL_33;
    }
    BYTE4(v47) = v21 == 58;
    v48 = v21 == 56;
    v46 = v21 == 57;
    LOBYTE(v47) = v21 == 55;
  LABEL_19:
    asCDataType_CreatePrimitive((void*)((__int64)v50), 68, 0),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v24 = asCCompiler_CompileOverloadedDualOperator2(
        a1, a2, (__int64)"opCmp", a3, a4, v11 & 1, a6, 1, (__int64)v50),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    asCDataType_Destroy_asCDataType(v50),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v25 = v24;
    if (v24 != 0) {
      if (v24 == 1) {
        goto LABEL_21;
      }
    }
    else {
      asCDataType_CreatePrimitive((void*)((__int64)v50), 68, 0),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v25 = asCCompiler_CompileOverloadedDualOperator2(a1, a2, (__int64)"opCmp",
                                                       a4, a3, (v11 & 1) == 0,
                                                       a6, 1, (__int64)v50),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      asCDataType_Destroy_asCDataType(v50),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v25 == 1) {
      LABEL_21:
        if ((*(_WORD*)(a6 + 128) & 2) != 0) {
          asCCompiler_ReleaseTemporaryVariable(a1, *(__int16*)(a6 + 130), a6),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          *(_WORD*)(a6 + 128) &= ~2u;
        }
        asCDataType_CreatePrimitive((void*)((__int64)v50), 65, 0),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v26 = asCCompiler_AllocateVariable(a1, (__int64)v50, 1, 0, 0),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        asCDataType_Destroy_asCDataType(v50),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        asCByteCode_InstrW_DW((_QWORD*)a6, 0x36u, *(_WORD*)(a6 + 130), 0),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v21 == 53) {
          v27 = 18;
        }
        else {
          v27 = 19;
        }
        if ((unsigned int)(v21 - 53) >= 2) {
          v28 = v21 == 55;
          if (v24 == 0) {
            v28 = v48;
          }
          if (v28) {
            v27 = 20;
          }
          else {
            v34 = v21 == 57;
            if (v24 == 0) {
              v34 = BYTE4(v47);
            }
            if ((v34 & 1) != 0) {
              v27 = 23;
            }
            else {
              v41 = v21 == 56;
              if (v24 == 0) {
                v41 = v47;
              }
              if (v41) {
                v27 = 22;
              }
              else {
                v42 = v21 == 58;
                if (v24 == 0) {
                  v42 = v46;
                }
                if (!v42) {
                  goto LABEL_81;
                }
                v27 = 21;
              }
            }
          }
        }
        asCByteCode_Instr((_QWORD*)a6, v27),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      LABEL_81:
        asCByteCode_InstrSHORT((_QWORD*)a6, 0x55u, v26),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        asCDataType_CreatePrimitive((void*)((__int64)v50), 65, 0),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        GameRoutine_1bd280(a6 + 104, (__int64)v50),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v43 = *(_WORD*)(a6 + 128);
        *(_QWORD*)(a6 + 136) = 0;
        *(_WORD*)(a6 + 130) = v26;
        *(_WORD*)(a6 + 128) = v43 & 0xFF80 | 0xA;
        asCDataType_Destroy_asCDataType(v50),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        return 1;
      }
    }
    if (v25 < 0) {
      v22 = 1;
      asCDataType_CreatePrimitive((void*)((__int64)v50), 65, 1),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      GameRoutine_1bd280(a6 + 104, (__int64)v50),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v33 = *(_WORD*)(a6 + 128);
      *(_WORD*)(a6 + 130) = 0;
      *(_QWORD*)(a6 + 136) = 1;
      *(_WORD*)(a6 + 128) = v33 & 0xFF80 | 4;
      asCDataType_Destroy_asCDataType(v50),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      return v22;
    }
  LABEL_33:
    v29 = (unsigned int)(v8 - 14);
    v30 = "opAdd_r";
    v31 = "opAdd";
    switch (v29) {
    case 0LL:
      goto LABEL_51;
    case 1LL:
      v30 = "opSub_r";
      v31 = "opSub";
      goto LABEL_51;
    case 2LL:
      v30 = "opMul_r";
      v31 = "opMul";
      goto LABEL_51;
    case 3LL:
      v30 = "opDiv_r";
      v31 = "opDiv";
      goto LABEL_51;
    case 4LL:
      v30 = "opMod_r";
      v31 = "opMod";
      goto LABEL_51;
    case 5LL:
      v30 = "opPow_r";
      v31 = "opPow";
      goto LABEL_51;
    case 32LL:
      v30 = "opAnd_r";
      v31 = "opAnd";
      goto LABEL_51;
    case 33LL:
      v30 = "opOr_r";
      v31 = "opOr";
      goto LABEL_51;
    case 35LL:
      v30 = "opXor_r";
      v31 = "opXor";
      goto LABEL_51;
    case 36LL:
      v30 = "opShl_r";
      v31 = "opShl";
      goto LABEL_51;
    case 37LL:
      v30 = "opShr_r";
      v31 = "opShr";
      goto LABEL_51;
    case 38LL:
      v30 = "opUShr_r";
      v31 = "opUShr";
    LABEL_51:
      asCDataType_CreatePrimitive((void*)((__int64)v50), 80, 0),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v35 = asCCompiler_CompileOverloadedDualOperator2(
          a1, a2, (__int64)v31, a3, a4, v11 & 1, a6, 0, (__int64)v50),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      asCDataType_Destroy_asCDataType(v50),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v35 != 0) {
        if (v35 == 1) {
          return 1;
        }
      }
      else {
        asCDataType_CreatePrimitive((void*)((__int64)v50), 80, 0),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v35 = asCCompiler_CompileOverloadedDualOperator2(
            a1, a2, (__int64)v30, a4, a3, (v11 & 1) == 0, a6, 0, (__int64)v50),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        asCDataType_Destroy_asCDataType(v50),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v35 == 1) {
          return 1;
        }
      }
      if (v35 < 0) {
        v22 = 1;
        asCDataType_CreatePrimitive((void*)((__int64)v50), 68, 1),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        GameRoutine_1bd280(a6 + 104, (__int64)v50),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v32 = *(_WORD*)(a6 + 128);
        *(_WORD*)(a6 + 130) = 0;
        *(_QWORD*)(a6 + 136) = 0;
        goto LABEL_68;
      }
    LABEL_56:
      if ((v49 & 1) != 0) {
        if (v21 != 37) {
          return 0;
        }
        v36 = "opHndlAssign";
      }
      else {
        v37 = v21 - 21;
        v22 = 0;
        if ((unsigned int)(v21 - 21) > 0x10 || ((0x10FFFu >> v37) & 1) == 0) {
          return v22;
        }
        v36 = GameData_1f7a368[v37];
      }
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 128) + 16LL) + 13916LL) == 1) {
        v38 = *(_QWORD*)(a3 + 112);
        if (v38 != 0 && (*(_DWORD*)(v38 + 48) & 0x21) == 1) {
          if (v21 == 37) {
            v39 = "Value assignment on reference types is not allowed. Did you "
                  "mean to do a handle assignment?";
          }
          else {
            v39 = "Compound assignment on reference types is not allowed";
          }
          asCString_asCString_25f730(v50, (__int64)v39),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          asCCompiler_Error(a1, (__int64)v50, a2),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          asCString_Destroy_asCString((__int64)v50),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          GameRoutine_1bd280(a6 + 104, a3 + 104),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v45 = *(_WORD*)(a6 + 128);
          *(_WORD*)(a6 + 130) = 0;
          *(_QWORD*)(a6 + 136) = 0;
          *(_WORD*)(a6 + 128) = v45 & 0xFF80;
          return 1;
        }
      }
      asCDataType_CreatePrimitive((void*)((__int64)v50), 80, 0),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v40 = asCCompiler_CompileOverloadedDualOperator2(
          a1, a2, (__int64)v36, a3, a4, 0, a6, 0, (__int64)v50),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      asCDataType_Destroy_asCDataType(v50),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v40 == 1) {
        return 1;
      }
      if (v40 < 0) {
        asCExprValue_SetDummy(a6 + 104),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        return 1;
      }
      break;
    default:
      goto LABEL_56;
    }
    return 0;
  }
  asCDataType_CreatePrimitive((void*)((__int64)v50), 65, 0),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v23 = asCCompiler_CompileOverloadedDualOperator2(
      a1, a2, (__int64)"opEquals", a3, a4, v11 & 1, a6, 1, (__int64)v50),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  asCDataType_Destroy_asCDataType(v50),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v23 != 0) {
    if (v23 == 1) {
      goto LABEL_12;
    }
  }
  else {
    asCDataType_CreatePrimitive((void*)((__int64)v50), 65, 0),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v23 = asCCompiler_CompileOverloadedDualOperator2(
        a1, a2, (__int64)"opEquals", a4, a3, (v11 & 1) == 0, a6, 1,
        (__int64)v50),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    asCDataType_Destroy_asCDataType(v50),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v23 == 1) {
    LABEL_12:
      if (v21 == 54) {
        asCByteCode_InstrSHORT((_QWORD*)a6, 6u, *(_WORD*)(a6 + 130)),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      return 1;
    }
  }
  if ((v23 & 0x80000000) == 0) {
    v47 = false;
    v48 = false;
    v46 = false;
    goto LABEL_19;
  }
  v22 = 1;
  asCDataType_CreatePrimitive((void*)((__int64)v50), 65, 1),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_1bd280(a6 + 104, (__int64)v50),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v32 = *(_WORD*)(a6 + 128);
  *(_WORD*)(a6 + 130) = 0;
  *(_QWORD*)(a6 + 136) = 1;
LABEL_68:
  *(_WORD*)(a6 + 128) = v32 & 0xFF80 | 4;
  asCDataType_Destroy_asCDataType(v50),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  return v22;
}

#pragma GCC visibility pop
