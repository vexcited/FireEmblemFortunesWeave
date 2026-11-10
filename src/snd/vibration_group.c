#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13e100(_QWORD, _QWORD);
__int64 GameRoutine_13e2c0(_QWORD);
__int64 GameRoutine_190240(_QWORD);
extern __int64* GameData_2134690;
extern __int64* snd_g_memory_ptr[2];
__int64 VibrationGroup_Destructor(__int64 result);
__attribute__((swiftcall)) void FileManager_10df70(PSEUDO_X8, __int64, __int64,
                                                   unsigned int);
__int64* VibrationGroup_13f000(__int64, __int64*);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_112180_alt1(_QWORD, _QWORD) __asm__("GameRoutine_112180");
__int64 GameRoutine_118ff0(_QWORD);
__int64 GameRoutine_13f240(_QWORD, _QWORD);
__int64 GameRoutine_190200(__int64, char*);
__int64 GameRoutine_1905a40(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_a2af20(_QWORD, _QWORD, const char*, ...);
__int64 VibrationGroup_13eb00(_QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
__int64 strlen(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int16* GameData_2134698[2];
extern __int16 GameData_2199008;
extern __int64 snd_g_proxy_ptr[2];
extern char GameData_1a9f09e;
unsigned __int64 GameRoutine_190020(__int64*, char*);
void __attribute__((noreturn)) GameRoutine_13efd0();
void __attribute__((noreturn)) snd_a36650();
__n128 VibrationGroup_13e780(__int64 a1, char* a2);
__n128 VibrationGroup_13e9d0(__int64 a1, const char* a2);

__int64 VibrationGroup_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = result;
  *(_QWORD*)result = GameData_2134690 + 2;
  if (*(_BYTE*)(result + 64) == 1) {
    v2 = *(_QWORD*)(result + 16);
    if (v2 != *(_QWORD*)(result + 8)) {
      do {
        v3 = GameRoutine_190240(v2 - 48);
        GameRoutine_13e100(v1, v3);
        v2 = *(_QWORD*)(v1 + 16);
      } while (v2 != *(_QWORD*)(v1 + 8));
    }
    *(_QWORD*)(v1 + 40) = *(_QWORD*)(v1 + 32);
    result = GameRoutine_13e2c0(v1 + 32);
    *(_BYTE*)(v1 + 64) = 0;
  }
  v4 = *(_QWORD*)(v1 + 32);
  v5 = snd_g_memory_ptr[0];
  if (v4 != 0) {
    v6 = *snd_g_memory_ptr[0];
    *(_QWORD*)(v1 + 40) = v4;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
  }
  v7 = *(_QWORD*)(v1 + 8);
  if (v7 != 0) {
    v8 = *(_QWORD*)(v1 + 16);
    v9 = *(_QWORD*)(v1 + 8);
    if (v7 != v8) {
      do {
        v10 = *(_QWORD*)(v8 - 24);
        if (v10 != 0) {
          *(_QWORD*)(v8 - 16) = v10;
          (*(void (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
        }
        v11 = v8 - 48;
        if ((*(_BYTE*)(v8 - 48) & 1) != 0) {
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v5 + 24LL))(
              *v5, *(_QWORD*)(v8 - 32));
        }
        v8 -= 48;
      } while (v11 != v7);
      v9 = *(_QWORD*)(v1 + 8);
    }
    v12 = *v5;
    *(_QWORD*)(v1 + 16) = v7;
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v12 + 24LL))(v12, v9);
  }
  return result;
}

__n128 VibrationGroup_13e780(__int64 a1, char* a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v22;
  int v23;
  struct {
    __int64 v24;
    unsigned __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v24_;

  nn_os_LockMutex(GameData_2134698[0]);
  v4 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(a1 + 16) - v4;
  if (v5 == 0) {
  LABEL_13:
    GameRoutine_190020(&v24_.v24, &GameData_1a9f09e);
    v24_.v28 = 0;
    v24_.v29 = 0;
    v24_.v27 = 0;
    GameRoutine_190200((__int64)&v24_.v24, a2);
    v11 = *(__int64**)(a1 + 16);
    v12 = snd_g_memory_ptr[0];
    if ((unsigned __int64)v11 >= *(_QWORD*)(a1 + 24)) {
      v18 = VibrationGroup_13f000(a1 + 8, &v24_.v24);
      v19 = v24_.v27;
      *(_QWORD*)(a1 + 16) = v18;
      if (v19 == 0) {
        goto LABEL_19;
      }
      goto LABEL_18;
    }
    if ((v24_.v24 & 1) != 0) {
      GameRoutine_1905a40(*(__int64**)(a1 + 16), v24_.v26, v24_.v25);
      v11[4] = 0;
      v11[5] = 0;
      v11[3] = 0;
      v15 = v24_.v27;
      v16 = v24_.v28;
      v17 = v24_.v28 - v24_.v27;
      if (v24_.v28 == v24_.v27) {
        goto LABEL_27;
      }
    }
    else {
      v13 = v24_.v24;
      v14 = v24_.v26;
      v11[1] = v24_.v25;
      v11[2] = v14;
      *v11 = v13;
      v11[4] = 0;
      v11[5] = 0;
      v11[3] = 0;
      v15 = v24_.v27;
      v16 = v24_.v28;
      v17 = v24_.v28 - v24_.v27;
      if (v24_.v28 == v24_.v27) {
        goto LABEL_27;
      }
    }
    if (0xAAAAAAAAAAAAAAABLL * (v17 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_13efd0();
    }
    v22 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v12 + 16LL))(
        *v12, v17, 32);
    v11[3] = v22;
    v11[4] = v22;
    v11[5] = v22 + v17;
    do {
      *(_QWORD*)v22 = 0;
      *(_DWORD*)(v22 + 8) = 0x2000;
      GameRoutine_112180(v22, v15);
      v23 = *(_DWORD*)(v15 + 16);
      v15 += 24;
      *(_DWORD*)(v22 + 16) = v23;
      v22 += 24;
    } while (v15 != v16);
    v11[4] = v22;
  LABEL_27:
    v19 = v24_.v27;
    *(_QWORD*)(a1 + 16) = v11 + 6;
    if (v19 == 0) {
    LABEL_19:
      if ((v24_.v24 & 1) != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)*v12 + 24LL))(*v12, v24_.v26);
      }
      return nn_os_UnlockMutex(&GameData_2199008);
    }
  LABEL_18:
    v20 = *v12;
    v24_.v28 = v19;
    (*(void (**)(__int64))(*(_QWORD*)v20 + 24LL))(v20);
    goto LABEL_19;
  }
  v6 = 0xAAAAAAAAAAAAAAABLL * (v5 >> 4);
  v7 = (_QWORD*)(v4 + 16);
  v8 = strlen(a2);
  while (1) {
    v9 = *((_BYTE*)v7 - 16) >> 1;
    if ((*(_BYTE*)(v7 - 2) & 1) != 0) {
      v9 = *(v7 - 1);
    }
    if (v8 == v9) {
      if (v8 == -1) {
        snd_a36650();
      }
      v10 = (*(_BYTE*)(v7 - 2) & 1) != 0 ? (_QWORD*)*v7
                                         : (_QWORD*)((char*)v7 - 15);
      if ((unsigned int)memcmp(v10, a2, v8) == 0) {
        return nn_os_UnlockMutex(&GameData_2199008);
      }
    }
    --v6;
    v7 += 6;
    if (v6 == 0) {
      goto LABEL_13;
    }
  }
}

__n128 VibrationGroup_13e9d0(__int64 a1, const char* a2)
{
  __int64 v4;
  const char* v5;
  __int64 v6;
  float v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  _BYTE v17[16];
  _BYTE v18[256];

  nn_os_LockMutex(GameData_2134698[0]);
  v4 = VibrationGroup_13eb00(a1 + 8);
  v5 = (const char*)(*(__int64 (**)(_QWORD))(
      **(_QWORD**)snd_g_proxy_ptr[0] + 152LL))(*(_QWORD*)snd_g_proxy_ptr[0]);
  GameRoutine_a2af20(v18, 256, "%s%s.bnvib.group.bin", v5, a2);
  v6 = GameRoutine_118ff0(*(_QWORD*)(a1 + 56));
  FileManager_10df70((void*)((__int64)v17), v6, (__int64)v18, 0x20u);
  v8 = snd_fnd_WeakHandle_get(v17, v7);
  (*(void (**)(__int64))(*(_QWORD*)v8 + 40LL))(v8);
  v12 = 0;
  v13 = 0x2000;
  GameRoutine_112180_alt1(&v12, v17);
  v14 = 0;
  v15 = 0x2000;
  GameRoutine_112180_alt1(&v14, &v12);
  v16 = 1;
  v9 = *(_QWORD*)(v4 + 32);
  if (v9 >= *(_QWORD*)(v4 + 40)) {
    v10 = GameRoutine_13f240(v4 + 24, &v14);
  }
  else {
    *(_QWORD*)v9 = 0;
    *(_DWORD*)(v9 + 8) = 0x2000;
    GameRoutine_112180_alt1(v9, &v14);
    v10 = v9 + 24;
    *(_DWORD*)(v9 + 16) = v16;
  }
  *(_QWORD*)(v4 + 32) = v10;
  return nn_os_UnlockMutex(&GameData_2199008);
}

#pragma GCC visibility pop
