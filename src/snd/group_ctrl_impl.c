#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Crc32List_1163b0(_QWORD);
__int64 GameRoutine_117bb0(_QWORD);
__int64 GameRoutine_119020(_QWORD);
__int64 GameRoutine_13e780(_QWORD, _QWORD);
__int64 GameRoutine_13e9d0(_QWORD, _QWORD);
__int64 GameRoutine_190020(_QWORD, _QWORD);
__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 GameRoutine_1905a40(_QWORD, _QWORD, _QWORD);
__int64 GroupCtrl_ecc40(_QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_GroupCtrl_loadAddSoundArc(_QWORD, _QWORD);
__int64 snd_GroupCtrl_loadUserGroup(_QWORD, _QWORD);
__int64 snd_data_findFieldData(_QWORD);
__int64 snd_data_findGroupData(_QWORD);
__int64 snd_fnd_calcCrc32(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int16 snd_g_groupMutex;
extern __int16* snd_g_groupMutex_ptr[12];
extern __int64 snd_g_memory;
extern __int64* snd_g_memory_ptr[2];
extern __int64* snd_s_target_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_a36650(_QWORD, _QWORD);
__int64 GroupCtrl_ec280(__int64 a1, __int64 a2, __int64 a3);
void GroupCtrl_ece00(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 GroupCtrl_111080_alt1(__int64 a1,
                              __int64 a2) __asm__("GroupCtrl_111080");
__int64 GroupCtrl_111220_alt1(__int64 a1,
                              __int64 a2) __asm__("GroupCtrl_111220");
__int64 GroupCtrl_1113c0(__int64 a1, __int64 a2);
__int64 GroupCtrl_1114f0(__int64 a1, __int64 a2);
__int64 GameRoutine_190200_alt1(__int64, char*) __asm__("GameRoutine_190200");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64
GameRoutine_190020_alt1(__int64*, const char*) __asm__("GameRoutine_190020");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) snd_a36650();
__int64 GroupCtrl_111080(__int64 a1, char* a2);
__int64 GroupCtrl_111220(__int64 a1, char* a2);

__int64 GroupCtrl_ec280(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  char v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 i;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  v6 = nn_os_LockMutex(snd_g_groupMutex_ptr[0]);
  v7 = *(_DWORD*)(a1 + 80);
  if (v7 <= 1) {
    v7 = 1;
  }
  v8 = 0xAAAAAAAAAAAAAAABLL *
       ((__int64)(*(_QWORD*)(a1 + 64) - *(_QWORD*)(a1 + 56)) >> 4);
  v9 = (unsigned int)(v7 + 1);
  *(_DWORD*)(a1 + 80) = v9;
  if (v8 >= v9) {
    if (v8 != v9) {
    LABEL_14:
      v15 = Crc32List_1163b0(v6);
      v16 = GameRoutine_117bb0(v15);
      v17 = GroupCtrl_111080_alt1(v16, a2);
      v18 = Crc32List_1163b0(v17);
      v19 = GameRoutine_119020(v18);
      GameRoutine_13e780(v19, a2);
      GameRoutine_190200(*(_QWORD*)(a1 + 56) + 48LL * *(int*)(a1 + 80), a2);
      GameRoutine_190200(*(_QWORD*)(a1 + 56) + 48LL * *(int*)(a1 + 80) + 24,
                         a3);
      LODWORD(v33) = snd_fnd_calcCrc32(a3, 0);
      v20 = snd_data_findFieldData(&v33);
      if (v20 != 0) {
        v21 = v20;
        if (*(_DWORD*)(v20 + 68) != 0) {
          LODWORD(v33) = *(_DWORD*)(v20 + 68);
          v20 = snd_GroupCtrl_loadUserGroup(a1, &v33);
        }
        if (*(_DWORD*)(v21 + 80) != 0) {
          LODWORD(v33) = *(_DWORD*)(v21 + 80);
          v20 = snd_GroupCtrl_loadAddSoundArc(a1, &v33);
        }
        if (*(_DWORD*)(v21 + 64) != 0) {
          LODWORD(v33) = *(_DWORD*)(v21 + 64);
          v20 = snd_data_findGroupData(&v33);
          if (v20 != 0) {
            v22 = *(_DWORD*)(v20 + 16);
            v23 = v20;
            if (v22 >= 1) {
              for (i = 0; i < v22; ++i) {
                v25 = *(_QWORD*)(*(_QWORD*)(v23 + 8) + 8 * i);
                if (v25 != 0) {
                  v26 = Crc32List_1163b0(v20);
                  v27 = GameRoutine_117bb0(v26);
                  v20 = GroupCtrl_1113c0(v27, v25);
                  v22 = *(_DWORD*)(v23 + 16);
                }
              }
            }
          }
        }
        if (*(_QWORD*)(v21 + 72) != 0) {
          v28 = Crc32List_1163b0(v20);
          v29 = GameRoutine_119020(v28);
          GameRoutine_13e9d0(v29, *(_QWORD*)(v21 + 72));
        }
      }
      return nn_os_UnlockMutex(&snd_g_groupMutex);
    }
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v33 = 0;
    v34 = 0;
    GameRoutine_190020(&v33, &GameData_1a9f09e);
    GameRoutine_190020(&v36, &GameData_1a9f09e);
    v10 = *(_QWORD**)(a1 + 64);
    if ((unsigned __int64)v10 >= *(_QWORD*)(a1 + 72)) {
      v6 = GroupCtrl_ecc40(a1 + 56, &v33);
      v14 = v36;
      *(_QWORD*)(a1 + 64) = v6;
      if ((v14 & 1) == 0) {
        goto LABEL_12;
      }
      goto LABEL_11;
    }
    if ((v33 & 1) != 0) {
      GameRoutine_1905a40(*(_QWORD*)(a1 + 64), v35, v34);
      if ((v36 & 1) != 0) {
      LABEL_8:
        GameRoutine_1905a40(v10 + 3, v38, v37);
        v6 = (__int64)(v10 + 6);
        v13 = v36;
        *(_QWORD*)(a1 + 64) = v10 + 6;
        if ((v13 & 1) == 0) {
          goto LABEL_12;
        }
        goto LABEL_11;
      }
    }
    else {
      v11 = v33;
      v12 = v35;
      v10[1] = v34;
      v10[2] = v12;
      *v10 = v11;
      if ((v36 & 1) != 0) {
        goto LABEL_8;
      }
    }
    v31 = v36;
    v32 = v38;
    v6 = (__int64)(v10 + 6);
    v10[4] = v37;
    v10[5] = v32;
    v10[3] = v31;
    LOBYTE(v31) = v36;
    *(_QWORD*)(a1 + 64) = v10 + 6;
    if ((v31 & 1) == 0) {
    LABEL_12:
      if ((v33 & 1) != 0) {
        v6 = (*(__int64 (**)(_QWORD, __int64))(
            **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v35);
      }
      goto LABEL_14;
    }
  LABEL_11:
    v6 = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] +
                                           24LL))(*snd_g_memory_ptr[0], v38);
    goto LABEL_12;
  }
  return nn_os_UnlockMutex(&snd_g_groupMutex);
}

void GroupCtrl_ece00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;

  if (a2 != a3) {
    v6 = a2;
    v7 = 0;
    while (1) {
      v11 = (__int64*)(v6 + v7);
      v12 = (_QWORD*)(a4 + v7);
      if ((*(_BYTE*)(v6 + v7) & 1) != 0) {
        GameRoutine_1905a40(v12, v11[2], v11[1]);
        v16 = v6 + v7;
        v17 = (_QWORD*)(a4 + v7);
        v18 = v6 + v7 + 24;
        if ((*(_BYTE*)v18 & 1) == 0) {
          goto LABEL_3;
        }
      LABEL_8:
        GameRoutine_1905a40(v17 + 3, *(_QWORD*)(v16 + 40),
                            *(_QWORD*)(v16 + 32));
        v7 += 48;
        if (v6 + v7 == a3) {
          while (1) {
          LABEL_11:
            if ((*(_BYTE*)(v6 + 24) & 1) != 0) {
              (*(void (**)(__int64, _QWORD))(*(_QWORD*)snd_g_memory + 24LL))(
                  snd_g_memory, *(_QWORD*)(v6 + 40));
              if ((*(_BYTE*)v6 & 1) != 0) {
              LABEL_15:
                (*(void (**)(__int64, _QWORD))(*(_QWORD*)snd_g_memory + 24LL))(
                    snd_g_memory, *(_QWORD*)(v6 + 16));
              }
            }
            else if ((*(_BYTE*)v6 & 1) != 0) {
              goto LABEL_15;
            }
            v6 += 48;
            if (v6 == a3) {
              return;
            }
          }
        }
      }
      else {
        v13 = *v11;
        v14 = v11[1];
        v15 = v11[2];
        v12[1] = v14;
        v12[2] = v15;
        *v12 = v13;
        v16 = v6 + v7;
        v17 = (_QWORD*)(a4 + v7);
        v18 = v6 + v7 + 24;
        if ((*(_BYTE*)v18 & 1) != 0) {
          goto LABEL_8;
        }
      LABEL_3:
        v8 = *(_QWORD*)v18;
        v9 = *(_QWORD*)(v18 + 8);
        v10 = *(_QWORD*)(v18 + 16);
        v17[4] = v9;
        v17[5] = v10;
        v17[3] = v8;
        v7 += 48;
        if (v6 + v7 == a3) {
          goto LABEL_11;
        }
      }
    }
  }
}

__int64 GroupCtrl_111080(__int64 a1, char* a2)
{
  __int64 v4;
  _QWORD* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;

  nn_os_LockMutex_alt1(a1 + 96);
  v4 = *(unsigned int*)(a1 + 64);
  if ((int)v4 < 1) {
  LABEL_13:
    nn_os_UnlockMutex_alt1(a1 + 96);
    v9 = snd_g_memory_ptr[0];
    v10 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 48, 32);
    v10[2] = 0;
    v11 = (__int64)(v10 + 2);
    v12 = v10;
    v10[3] = 0;
    v10[4] = 0;
    v10[5] = 0;
    *v10 = 0xFFFFFFFF00000004LL;
    v10[1] = 0;
    GameRoutine_190020_alt1(v10 + 2, &GameData_1a9f09e);
    *((_BYTE*)v12 + 40) = 0;
    *(_DWORD*)v12 = 2;
    GameRoutine_190200_alt1(v11, a2);
    nn_os_LockMutex_alt1(a1 + 96);
    v13 = (_QWORD*)(*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)*v9 + 16LL))(*v9, 24, 32);
    v13[1] = a1 + 72;
    v13[2] = v12;
    *v13 = 0;
    v14 = *(_QWORD*)(a1 + 72);
    *v13 = v14;
    *(_QWORD*)(v14 + 8) = v13;
    *(_QWORD*)(a1 + 72) = v13;
    ++*(_QWORD*)(a1 + 88);
    *(_BYTE*)(a1 + 129) = 0;
  }
  else {
    v5 = (_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
    v6 = strlen_alt1(a2);
    while (1) {
      v7 = *((_BYTE*)v5 - 16) >> 1;
      if ((*(_BYTE*)(v5 - 2) & 1) != 0) {
        v7 = *(v5 - 1);
      }
      if (v6 == v7) {
        if (v6 == -1) {
          snd_a36650();
        }
        v8 = (*(_BYTE*)(v5 - 2) & 1) != 0 ? *v5 : (__int64)v5 - 15;
        if (memcmp_alt1(v8, (__int64)a2, v6) == 0) {
          break;
        }
      }
      v5 += 7;
      if (--v4 == 0) {
        goto LABEL_13;
      }
    }
  }
  return nn_os_UnlockMutex_alt1(a1 + 96);
}

__int64 GroupCtrl_111220(__int64 a1, char* a2)
{
  __int64 v4;
  _QWORD* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;

  nn_os_LockMutex_alt1(a1 + 96);
  v4 = *(unsigned int*)(a1 + 64);
  if ((int)v4 >= 1) {
    v5 = (_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
    v6 = strlen_alt1(a2);
    while (1) {
      v7 = *((_BYTE*)v5 - 16) >> 1;
      if ((*(_BYTE*)(v5 - 2) & 1) != 0) {
        v7 = *(v5 - 1);
      }
      if (v6 == v7) {
        if (v6 == -1) {
          snd_a36650();
        }
        v8 = (*(_BYTE*)(v5 - 2) & 1) != 0 ? *v5 : (__int64)v5 - 15;
        if (memcmp_alt1(v8, (__int64)a2, v6) == 0) {
          break;
        }
      }
      v5 += 7;
      if (--v4 == 0) {
        return nn_os_UnlockMutex_alt1(a1 + 96);
      }
    }
    nn_os_UnlockMutex_alt1(a1 + 96);
    v9 = snd_g_memory_ptr[0];
    v10 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 48, 32);
    v10[2] = 0;
    v11 = (__int64)(v10 + 2);
    v12 = v10;
    v10[3] = 0;
    v10[4] = 0;
    v10[5] = 0;
    *v10 = 0xFFFFFFFF00000004LL;
    v10[1] = 0;
    GameRoutine_190020_alt1(v10 + 2, &GameData_1a9f09e);
    *((_BYTE*)v12 + 40) = 0;
    *(_DWORD*)v12 = 3;
    GameRoutine_190200_alt1(v11, a2);
    nn_os_LockMutex_alt1(a1 + 96);
    v13 = (_QWORD*)(*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)*v9 + 16LL))(*v9, 24, 32);
    v13[1] = a1 + 72;
    v13[2] = v12;
    *v13 = 0;
    v14 = *(_QWORD*)(a1 + 72);
    *v13 = v14;
    *(_QWORD*)(v14 + 8) = v13;
    *(_QWORD*)(a1 + 72) = v13;
    ++*(_QWORD*)(a1 + 88);
    *(_BYTE*)(a1 + 129) = 0;
  }
  return nn_os_UnlockMutex_alt1(a1 + 96);
}

__int64 GroupCtrl_1113c0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 result;
  int v7;
  int v8;
  __int64* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  struct {
    char gap8_[4];
    int v14;
    __int64 v15;
  } v14_;

  v14_.v15 = v2;
  result = (*(__int64 (**)(_QWORD, __int64, int*, __int64*))(
      *(_QWORD*)*snd_s_target_ptr + 168LL))(*snd_s_target_ptr, a2, &v14_.v14,
                                            &v13);
  if ((_DWORD)result != -1 && v13 == 0) {
    v7 = v14_.v14;
    v8 = result;
    v9 = snd_g_memory_ptr[0];
    v10 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 48, 32);
    *(_QWORD*)(v10 + 24) = 0;
    *(_QWORD*)(v10 + 32) = 0;
    *(_QWORD*)(v10 + 40) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    *(_QWORD*)v10 = 0xFFFFFFFF00000004LL;
    *(_QWORD*)(v10 + 8) = 0;
    GameRoutine_190020_alt1((__int64*)(v10 + 16), &GameData_1a9f09e);
    *(_DWORD*)v10 = 0;
    *(_DWORD*)(v10 + 4) = v8;
    *(_DWORD*)(v10 + 8) = v7;
    *(_BYTE*)(v10 + 40) = 0;
    nn_os_LockMutex_alt1(a1 + 96);
    v11 = (_QWORD*)(*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)*v9 + 16LL))(*v9, 24, 32);
    v11[1] = a1 + 72;
    v11[2] = v10;
    *v11 = 0;
    v12 = *(_QWORD*)(a1 + 72);
    *v11 = v12;
    *(_QWORD*)(v12 + 8) = v11;
    *(_QWORD*)(a1 + 72) = v11;
    ++*(_QWORD*)(a1 + 88);
    *(_BYTE*)(a1 + 129) = 0;
    return nn_os_UnlockMutex_alt1(a1 + 96);
  }
  return result;
}

__int64 GroupCtrl_1114f0(__int64 a1, __int64 a2)
{
  __int64* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;

  v4 = snd_g_memory_ptr[0];
  v5 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 48, 32);
  v5[2] = 0;
  v6 = v5 + 2;
  v7 = v5;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  *v5 = 0xFFFFFFFF00000004LL;
  v5[1] = 0;
  GameRoutine_190020(v5 + 2, &GameData_1a9f09e);
  *((_BYTE*)v7 + 40) = 0;
  *(_DWORD*)v7 = 1;
  GameRoutine_190200(v6, a2);
  nn_os_LockMutex(a1 + 96);
  v8 = (_QWORD*)(*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v4 +
                                                            16LL))(*v4, 24, 32);
  v8[1] = a1 + 72;
  v8[2] = v7;
  *v8 = 0;
  v9 = *(_QWORD*)(a1 + 72);
  *v8 = v9;
  *(_QWORD*)(v9 + 8) = v8;
  *(_QWORD*)(a1 + 72) = v8;
  ++*(_QWORD*)(a1 + 88);
  *(_BYTE*)(a1 + 129) = 0;
  return nn_os_UnlockMutex(a1 + 96);
}

#pragma GCC visibility pop
