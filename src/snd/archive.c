#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_104420(_QWORD, _QWORD);
__int64 GameRoutine_107450(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64* GameData_21344b0[2];
extern __int64* GameData_21344b8;
extern __int64* snd_g_memory_ptr[2];
__int64 Archive_104120(__int64 result, __int64 a2);
_QWORD* GameRoutine_109aa0(_QWORD*, _QWORD*, __int64);
__int64 GameRoutine_109540(__int64*, __int64*, __int64*, __int64, __int64,
                           __int64, __int64, __int64);
__int64 GameRoutine_109690(__int64*, __int64*, __int64*, __int64*, __int64,
                           __int64, __int64, __int64);
__int64 GameRoutine_109790(__int64*, __int64*, __int64*, __int64*, __int64*,
                           __int64);
__int64 GameRoutine_109ea0(__int64 result, __int64, __int64, __int64*, __int64,
                           __int64, __int64, __int64);
__int64 GameRoutine_10a040(__int64 result, __int64, __int64, __int64, __int64,
                           __int64, __int64, __int64);
__int64 strcmp(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
bool GameRoutine_109c60(__int64*, __int64*, __int64, __int64, __int64, __int64,
                        __int64, __int64);
unsigned __int64 GameRoutine_1098c0(__int64*, __int64*, __int64);
__int64 Archive_109080(__int64 result, __int64* a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__int64 Archive_1059c0(__int64, __int64);
__int64 Archive_105ba0(__int64);
__int64 Crc32List_118d80(__int64, __int64, __int64);
__int64 Crc32List_118e90(__int64, __int64, __int64);
__int64 GameRoutine_190240(__int64);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 strlen(_QWORD);
extern __int16* GameData_21344c0[16];
extern __int64 snd_g_proxy_ptr[2];
void __attribute__((noreturn)) snd_a36650();
__int64 Archive_105780(__int64 a1, const char* a2, const char* a3, char a4);

__int64 Archive_104120(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
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

  if (*(_BYTE*)(result + 40) == 1) {
    v2 = result;
    result = GameRoutine_104420(result, a2);
    v3 = *(_QWORD*)(v2 + 8);
    if (*(_QWORD*)(v2 + 16) != v3) {
      v4 = 0;
      v5 = snd_g_memory_ptr[0];
      v6 = GameData_21344b0[0] + 2;
      v7 = GameData_21344b8 + 2;
      while (1) {
        v8 = (__int64*)(v3 + 32 * v4);
        v9 = *v8;
        *v8 = 0;
        GameRoutine_107450(v9);
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v5 + 24LL))(*v5, v9);
        v10 = v8[1];
        if (v8[2] != v10) {
          break;
        }
      LABEL_4:
        v3 = *(_QWORD*)(v2 + 8);
        if (++v4 >= (unsigned __int64)((*(_QWORD*)(v2 + 16) - v3) >> 5)) {
          goto LABEL_23;
        }
      }
      v11 = 0;
      while (1) {
        v12 = *(_QWORD*)(v10 + 8 * v11);
        *(_QWORD*)(v10 + 8 * v11) = 0;
        v13 = *(unsigned __int8*)(v12 + 224);
        *(_QWORD*)(v12 + 152) = v6;
        if (v13 == 1) {
          if (*(_QWORD*)(v12 + 176) != 0) {
            v14 = *v5;
            v15 = *(_QWORD*)(v12 + 168);
            *(_QWORD*)(v12 + 168) = 0;
            (*(void (**)(__int64, __int64))(*(_QWORD*)v14 + 24LL))(v14, v15);
            v16 = *v5;
            v17 = *(_QWORD*)(v12 + 176);
            *(_QWORD*)(v12 + 176) = 0;
            (*(void (**)(__int64, __int64))(*(_QWORD*)v16 + 24LL))(v16, v17);
            *(_QWORD*)(v12 + 184) = 0;
          }
          *(_BYTE*)(v12 + 224) = 0;
        }
        v18 = *(_QWORD*)(v12 + 176);
        *(_QWORD*)(v12 + 160) = v7;
        if (v18 != 0) {
          v19 = *v5;
          v20 = *(_QWORD*)(v12 + 168);
          *(_QWORD*)(v12 + 168) = 0;
          (*(void (**)(__int64, __int64))(*(_QWORD*)v19 + 24LL))(v19, v20);
          v21 = *v5;
          v22 = *(_QWORD*)(v12 + 176);
          *(_QWORD*)(v12 + 176) = 0;
          (*(void (**)(__int64, __int64))(*(_QWORD*)v21 + 24LL))(v21, v22);
          *(_QWORD*)(v12 + 184) = 0;
        }
        nn_os_FinalizeMutex(v12 + 192);
        if ((*(_BYTE*)(v12 + 72) & 1) != 0) {
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v5 + 24LL))(
              *v5, *(_QWORD*)(v12 + 88));
          if ((*(_BYTE*)(v12 + 48) & 1) == 0) {
          LABEL_16:
            if ((*(_BYTE*)(v12 + 24) & 1) == 0) {
              goto LABEL_17;
            }
            goto LABEL_21;
          }
        }
        else if ((*(_BYTE*)(v12 + 48) & 1) == 0) {
          goto LABEL_16;
        }
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v5 + 24LL))(
            *v5, *(_QWORD*)(v12 + 64));
        if ((*(_BYTE*)(v12 + 24) & 1) == 0) {
        LABEL_17:
          if ((*(_BYTE*)v12 & 1) != 0) {
            goto LABEL_22;
          }
          goto LABEL_7;
        }
      LABEL_21:
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v5 + 24LL))(
            *v5, *(_QWORD*)(v12 + 40));
        if ((*(_BYTE*)v12 & 1) != 0) {
        LABEL_22:
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v5 + 24LL))(
              *v5, *(_QWORD*)(v12 + 16));
        }
      LABEL_7:
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v5 + 24LL))(*v5, v12);
        v10 = v8[1];
        if (++v11 >= (unsigned __int64)((v8[2] - v10) >> 3)) {
          goto LABEL_4;
        }
      }
    }
  LABEL_23:
    *(_BYTE*)(v2 + 40) = 0;
  }
  return result;
}

__int64 Archive_105780(__int64 a1, const char* a2, const char* a3, char a4)
{
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  bool v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  const char* v33;
  const char* v34;
  __int64 v35;
  __int64* v37;

  nn_os_LockMutex(GameData_21344c0[0]);
  if (a2 == nullptr) {
    a2 = "noname";
  }
  if (a3 == nullptr) {
    a3 = "noname";
  }
  v8 = *(__int64**)(a1 + 8);
  v9 = *(_QWORD*)(a1 + 16) - (_QWORD)v8;
  if (v9 == 0) {
  LABEL_37:
    v33 = "#SoundLibrary error : Can't open SoundArchive [%s]\n";
    v34 = a2;
    v35 = *(_QWORD*)snd_g_proxy_ptr[0];
  LABEL_38:
    (*(void (**)(__int64, const char*, const char*))(*(_QWORD*)v35 + 392LL))(
        v35, v33, v34);
    return nn_os_UnlockMutex(GameData_21344c0[0]);
  }
  v10 = v9 >> 5;
  while (1) {
    v11 = *v8;
    if (*(_DWORD*)(*v8 + 144) != 0) {
      v12 = strlen(a2);
      v13 = *(_BYTE*)v11 >> 1;
      if ((*(_BYTE*)v11 & 1) != 0) {
        v13 = *(_QWORD*)(v11 + 8);
      }
      if (v12 == v13) {
        v14 = v12;
        if (v12 == -1) {
        LABEL_43:
          snd_a36650();
        }
        v15 = (*(_BYTE*)v11 & 1) != 0 ? *(_QWORD*)(v11 + 16) : v11 + 1;
        if ((unsigned int)memcmp(v15, a2, v14) == 0) {
          break;
        }
      }
    }
    v8 += 4;
    if (--v10 == 0) {
      goto LABEL_37;
    }
  }
  v16 = (__int64*)v8[1];
  v17 = v8[2] - (_QWORD)v16;
  if (v17 == 0) {
  LABEL_40:
    v37 = (__int64*)snd_g_proxy_ptr[0];
    if (((*(__int64 (**)(_QWORD, const char*))(**(_QWORD**)snd_g_proxy_ptr[0] +
                                               472LL))(
             *(_QWORD*)snd_g_proxy_ptr[0], a3) &
         1) == 0) {
      return nn_os_UnlockMutex(GameData_21344c0[0]);
    }
    v35 = *v37;
    v33 =
        "#SoundLibrary error : Can't close AdditionalSoundArchive into [%s]\n";
    v34 = a3;
    goto LABEL_38;
  }
  v18 = v17 >> 3;
  while (1) {
    v20 = *v16++;
    v19 = v20;
    v21 = *(_DWORD*)(v20 + 144);
    if (v21 != 0 && v21 != 3) {
      v23 = strlen(a3);
      v24 = *(_BYTE*)v19 >> 1;
      if ((*(_BYTE*)v19 & 1) != 0) {
        v24 = *(_QWORD*)(v19 + 8);
      }
      if (v23 == v24) {
        v25 = v23;
        if (v23 == -1) {
          goto LABEL_43;
        }
        v26 = (*(_BYTE*)v19 & 1) != 0 ? *(_QWORD*)(v19 + 16) : v19 + 1;
        if ((unsigned int)memcmp(v26, a3, v25) == 0) {
          break;
        }
      }
    }
    if (--v18 == 0) {
      goto LABEL_40;
    }
  }
  if ((a4 & 1) != 0 ||
      (v27 = *(_DWORD*)(v19 + 148), v28 = __OFSUB__(v27, 1), --v27,
       *(_DWORD*)(v19 + 148) = v27, (v27 < 0) ^ v28 | (v27 == 0))) {
    v29 = *(unsigned __int8*)(v19 + 264);
    v30 = *(_QWORD*)(a1 + 32);
    v31 = GameRoutine_190240(*v8);
    v32 = GameRoutine_190240(v19);
    if (v29 == 1) {
      Crc32List_118e90(v30, v31, v32);
      *(_QWORD*)(v19 + 144) = 3;
    }
    else {
      Crc32List_118d80(v30, v31, v32);
      Archive_1059c0(a1, v19);
      *(_QWORD*)(v19 + 144) = 0;
      *(_BYTE*)(v19 + 264) = 0;
      Archive_105ba0(v19);
      *(_BYTE*)(a1 + 41) = 0;
    }
  }
  return nn_os_UnlockMutex(GameData_21344c0[0]);
}

__int64 Archive_109080(__int64 result, __int64* a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  char v8;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
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
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  char v42;
  bool v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  unsigned int v52;
  __int64* v53;
  bool v55;
  __int64 v56;
  __int64* v57;
  __int64* v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  unsigned int v62;
  unsigned int v63;
  __int64 v64;
  _QWORD* v65;
  unsigned int v66;
  __int64 v67;
  unsigned int v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64* v71;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  unsigned int v76;
  unsigned int v77;
  __int64* v78;
  __int64 v79;
  unsigned int v80;
  unsigned int v81;

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v8 = a5;
  v11 = (__int64*)result;
LABEL_2:
  v12 = v11;
LABEL_3:
  v13 = 1 - a4;
  while (1) {
    v14 = v13;
    v11 = v12;
    v15 = a2 - v12;
    if ((__int64)v15 > 2) {
      switch (v15) {
      case 3uLL:
        return GameRoutine_109540(v12, v12 + 1, a2 - 1, a3, a5, a6, a7, a8);
      case 4uLL:
        return GameRoutine_109690(v12, v12 + 1, v12 + 2, a2 - 1, a3, a6, a7,
                                  a8);
      case 5uLL:
        return GameRoutine_109790(v12, v12 + 1, v12 + 2, v12 + 3, a2 - 1, a3);
      default:
        break;
      }
    }
    else {
      if (v15 < 2) {
        return result;
      }
      if (v15 == 2) {
        v49 = *(a2 - 1);
        v50 = *v12;
        v51 = *(_DWORD*)(v49 + 8);
        v52 = *(_DWORD*)(*v12 + 8);
        if (v51 == v52) {
          result = strcmp(*(_QWORD*)(v49 + 16), *(_QWORD*)(v50 + 16), a3, a4,
                          a5, a6, a7, a8),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          if ((result & 0x80000000) == 0) {
            return result;
          }
        LABEL_65:
          *v12 = v49;
          *(a2 - 1) = v50;
          return result;
        }
        if (v51 < v52) {
          goto LABEL_65;
        }
        return result;
      }
    }
    if ((__int64)v15 <= 23) {
      break;
    }
    if (v13 == 1) {
      if (v12 != a2) {
        v69 = (v15 - 2) >> 1;
        v70 = v69 + 1;
        v71 = &v12[v69];
        do {
          GameRoutine_109ea0((__int64)v12, a3, a2 - v12, v71, a5, a6, a7, a8),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v45 = COERCE_AS(__typeof__(v45),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v47 = COERCE_AS(__typeof__(v47),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v48 = COERCE_AS(__typeof__(v48),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          --v70;
          --v71;
        } while (v70 != 0);
        do {
          result = GameRoutine_10a040((__int64)v12, (__int64)a2--, a3, v15, a5,
                                      a6, a7, a8),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        } while (v15-- > 2);
      }
      return result;
    }
    v16 = &v12[v15 >> 1];
    if (v15 < 0x81) {
      GameRoutine_109540(&v11[v15 >> 1], v11, a2 - 1, a3, a5, a6, a7, a8),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if ((v8 & 1) != 0) {
        goto LABEL_21;
      }
    }
    else {
      GameRoutine_109540(v11, &v11[v15 >> 1], a2 - 1, a3, a5, a6, a7, a8),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      GameRoutine_109540(v11 + 1, v16 - 1, a2 - 2, a3, v17, v18, v19, v20),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      GameRoutine_109540(v11 + 2, v16 + 1, a2 - 3, a3, v21, v22, v23, v24),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      GameRoutine_109540(v16 - 1, &v11[v15 >> 1], v16 + 1, a3, v25, v26, v27,
                         v28),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v35 = *v11;
      *v11 = *v16;
      *v16 = v35;
      if ((v8 & 1) != 0) {
        goto LABEL_21;
      }
    }
    v36 = *(v11 - 1);
    v37 = *(_DWORD*)(v36 + 8);
    v38 = *(_DWORD*)(*v11 + 8);
    if (v37 == v38) {
      if ((strcmp(*(_QWORD*)(v36 + 16), *(_QWORD*)(*v11 + 16), v29, v30, v31,
                  v32, v33, v34) &
           0x80000000) == 0) {
        goto LABEL_25;
      }
    }
    else if (v37 >= v38) {
    LABEL_25:
      result = GameRoutine_1098c0(v11, a2, a3),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v12 = (__int64*)result;
      goto LABEL_26;
    }
  LABEL_21:
    v41 = GameRoutine_109aa0(v11, a2, a3),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((v42 & 1) == 0) {
      goto LABEL_24;
    }
    v12 = v41 + 1;
    v43 = GameRoutine_109c60(v11, v41, a3, v39, v40, a6, a7, a8),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    result = GameRoutine_109c60(v41 + 1, a2, a3, v44, v45, v46, v47, v48),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((result & 1) != 0) {
      a4 = -v14;
      a2 = v41;
      if (v43) {
        return result;
      }
      goto LABEL_2;
    }
    v13 = v14 + 1;
    if (!v43) {
    LABEL_24:
      result = Archive_109080((__int64)v11, v41, a3, -v14, v8 & 1, a6, a7, a8),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v12 = v41 + 1;
    LABEL_26:
      v8 = 0;
      a4 = -v14;
      goto LABEL_3;
    }
  }
  v53 = v12 + 1;
  v55 = v12 == a2 || v53 == a2;
  if ((v8 & 1) != 0) {
    if (v55) {
      return result;
    }
    v56 = 0;
    v57 = v12;
  LABEL_47:
    v59 = v57;
    v61 = *v57;
    v60 = v57[1];
    v57 = v53;
    v62 = *(_DWORD*)(v60 + 8);
    v63 = *(_DWORD*)(v61 + 8);
    if (v62 == v63) {
      result = strcmp(*(_QWORD*)(v60 + 16), *(_QWORD*)(v61 + 16), a3, a4, a5,
                      a6, a7, a8),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if ((result & 0x80000000) == 0) {
        goto LABEL_46;
      }
    }
    else if (v62 >= v63) {
      goto LABEL_46;
    }
    v59[1] = v61;
    v58 = v11;
    if (v59 == v11) {
      goto LABEL_45;
    }
    v64 = v56;
    while (1) {
      v65 = (__int64*)((char*)v11 + v64);
      v66 = *(_DWORD*)(v60 + 8);
      v67 = *(__int64*)((char*)v11 + v64 - 8);
      v68 = *(_DWORD*)(v67 + 8);
      if (v66 == v68) {
        result = strcmp(*(_QWORD*)(v60 + 16), *(_QWORD*)(v67 + 16), a3, a4, a5,
                        a6, a7, a8),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if ((result & 0x80000000) == 0) {
          v58 = v59;
          goto LABEL_45;
        }
      }
      else if (v66 >= v68) {
        v58 = (__int64*)((char*)v11 + v64);
      LABEL_45:
        *v58 = v60;
      LABEL_46:
        v53 = v57 + 1;
        v56 += 8;
        if (v57 + 1 == a2) {
          return result;
        }
        goto LABEL_47;
      }
      --v59;
      v64 -= 8;
      *v65 = v67;
      if (v64 == 0) {
        v58 = v11;
        goto LABEL_45;
      }
    }
  }
  if (!v55) {
    do {
      v73 = v11;
      v75 = *v11;
      v74 = v11[1];
      v11 = v53;
      v76 = *(_DWORD*)(v74 + 8);
      v77 = *(_DWORD*)(v75 + 8);
      if (v76 == v77) {
        result = strcmp(*(_QWORD*)(v74 + 16), *(_QWORD*)(v75 + 16), a3, a4, a5,
                        a6, a7, a8),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if ((result & 0x80000000) != 0) {
          goto LABEL_76;
        }
      }
      else if (v76 < v77) {
        do {
        LABEL_76:
          while (1) {
            v78 = v73;
            v79 = *--v73;
            v73[2] = v75;
            v80 = *(_DWORD*)(v74 + 8);
            v75 = v79;
            v81 = *(_DWORD*)(v79 + 8);
            if (v80 == v81) {
              break;
            }
            if (v80 >= v81) {
              goto LABEL_68;
            }
          }
          result = strcmp(*(_QWORD*)(v74 + 16), *(_QWORD*)(v75 + 16), a3, a4,
                          a5, a6, a7, a8),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v47 = COERCE_AS(__typeof__(v47),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        } while ((result & 0x80000000) != 0);
      LABEL_68:
        *v78 = v74;
      }
      v53 = v11 + 1;
    } while (v11 + 1 != a2);
  }
  return result;
}

#pragma GCC visibility pop
