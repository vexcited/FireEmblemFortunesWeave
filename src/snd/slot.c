#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Crc32List_11ed40(__int64, int*);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_119040(_QWORD);
__int64 GameRoutine_119060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190020(_QWORD, _QWORD);
__int64 GameRoutine_651190(unsigned __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 snd_HandlePtr_unregisterHandle(_QWORD);
__int64 snd_Obj_Destroy_Obj_126190(__int64);
__int64 snd_Param_update(_QWORD, float);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_set(_QWORD, _QWORD);
__n128 Param_Destructor(_QWORD*);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 snd_Fade_Destroy_Fade(_QWORD);
extern _UNKNOWN* GameData_2134680;
extern __int64 (*GameData_1f58448[])();
extern __int64 (*GameData_1f584c8[])();
extern __int64 (*GameData_1f58548[])();
extern __int64 (*GameData_1f585c8[])();
extern __int64 (*GameData_1f58648[])();
extern __int64 (*GameData_1f586c8[])();
extern __int64 (*GameData_1f58748[])();
extern __int64 (*GameData_1f587c8[])();
extern __int64 (*GameData_1f58848[])();
extern __int64 (*GameData_1f588c8[])();
extern __int64 (*GameData_1f58948[])();
extern __int64 (*GameData_1f589c8[])();
extern __int64 (*GameData_1f58a48[])();
extern __int64 (*GameData_1f58ac8[])();
extern __int64 (*GameData_1f58b58[])();
extern __int64 (*GameData_1f58bd8[])();
extern __int64 (*GameData_1f58c58[])();
extern __int64 (*GameData_1f58cd8[])();
extern __int64 (*GameData_1f58d68[])();
extern __int64 (*GameData_1f58de8[])();
extern __int64 (*GameData_1f58e68[])();
extern __int64 (*GameData_1f58ef8[])();
extern __int64 (*GameData_1f59878[])();
extern __int64 (*GameData_1f598f8[])();
extern __int64 (*GameData_1f59978[])();
extern __int64 (*GameData_1f599f8[])();
extern __int64 (*GameData_1f59a78[])();
extern __int64 (*GameData_1f59af8[])();
extern __int64 (*GameData_1f59b78[])();
extern __int64 (*GameData_1f59bf8[])();
extern __int64 (*GameData_1f59c78[])();
extern __int64 (*GameData_1f59cf8[])();
extern __int64 (*GameData_1f59d78[])();
extern __int64 (*GameData_1f59df8[])();
extern __int64 (*GameData_1f59e78[])();
extern __int64 (*GameData_1f59ef8[])();
extern __int64 (*GameData_1f59f78[])();
extern __int64 (*GameData_1f59ff8[])();
extern __int64 (*GameData_1f5a078[])();
extern __int64 (*GameData_1f5a0f8[])();
extern __int64 (*GameData_1f5a178[])();
extern __int64 (*GameData_1f5a1f8[])();
extern __int64 (*GameData_1f5a278[])();
extern __int64 (*GameData_1f5a2f8[])();
extern __int64 (*GameData_1f5a378[])();
extern __int64 (*GameData_1f5a3f8[])();
extern __int64 (*GameData_1f5a478[])();
extern __int64 (*GameData_1f5a4f8[])();
extern __int64 (*GameData_1f5a578[])();
extern __int64 (*GameData_1f5a5f8[])();
extern __int64 (*GameData_1f5a678[])();
extern __int64 (*GameData_1f5a6f8[])();
extern __int64 (*GameData_1f5a778[])();
extern __int64 (*GameData_1f5a7f8[])();
extern __int64 (*GameData_1f5a878[])();
extern __int64 (*GameData_1f5a8f8[])();
extern __int64 (*GameData_1f5a978[])();
extern __int64 (*GameData_1f5a9f8[])();
extern __int64 (*GameData_1f5aa78[])();
extern __int64 (*GameData_1f5aaf8[])();
extern __int64 (*GameData_1f5ab78[])();
extern __int64 (*GameData_1f5abf8[])();
extern __int64 (*GameData_1f5ac78[])();
extern __int64 (*GameData_1f5acf8[])();
extern __int64* GameData_2134248[3];
extern __int64* GameData_2134678;
extern __int64* GameData_2134688[2];
extern __int64* snd_g_memory_ptr[2];
float snd_Fade_Fade_10cd70(_QWORD, _QWORD);
void GameRoutine_651250(void*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 Slot_Destructor(__int64 a1);
void Slot_1327c0(__int64 a1);
__int64 Slot_Unknown6(__int64 result);
__n128 Slot_1329a0(__int64 a1, float a2);
__n128 Slot_132a00(__int64 a1);
__n128 Slot_132ac0(__int64 a1);
__n128 Slot_132b80(__int64 a1);
__int64 Slot_132c40(_QWORD* a1);
void Slot_132e00(__int64 a1, float a2);
void Slot_132ee0(__int64 a1, float a2);
void Slot_132fc0(__int64 a1, float a2);
__n128 Slot_1330a0(__int64 a1);
__n128 Slot_133160(__int64 a1);
__n128 Slot_133220(__int64 a1);
__int64 Slot_1332e0(__int64 a1, __int64 a2);
__int64 Slot_133420(__int64 a1, __int64 a2);
__int64 Slot_133580(__int64 a1);
__int64 Slot_133660(__int64 a1, __int64 a2);
__int64 Slot_1337a0(__int64 a1, __int64 a2);
__int64 Slot_133900(__int64 a1, __int64 a2);
__int64 Slot_133a40(__int64 a1, __int64 a2);
__int64 Slot_135520(_QWORD* a1, __int64 a2);
__n128 Slot_1357a0(_QWORD* a1, __int64 a2, __int64 a3);
__n128 Slot_135980(_QWORD* a1, __int64 a2);
__n128 Slot_135b40(_QWORD* a1, unsigned int a2, __int64 a3);
__n128 Slot_135d20(_QWORD* a1, __int64 a2);
__n128 Slot_135ee0(_QWORD* a1);
__n128 Slot_1360a0(_QWORD** a1, __int64 a2, char a3);
__n128 Slot_136280(_QWORD** a1, __int64 a2);
__n128 Slot_136440(_QWORD** a1, __int64 a2);
__n128 Slot_136600(_QWORD** a1, __int64 a2);
void Slot_1367c0(_QWORD** a1, __int64 a2, float a3);
__int64 Slot_1369e0(_QWORD* a1);
__int64 Slot_136c00(_QWORD* a1, __int64 a2);
__int64 Slot_136e40(__int64** a1, __int64 a2);
__int64 Slot_137080(__int64 a1);
__int64* Slot_Unknown8();

__int64 Slot_Destructor(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
  _QWORD* v5;
  __int64 i;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int16 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 j;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int16 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _BYTE* k;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  unsigned __int16 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  unsigned __int64 v43;

  v2 = GameData_2134678;
  *(_QWORD*)a1 = GameData_2134678 + 2;
  v3 = v2 + 23;
  *(_QWORD*)(a1 + 5592) = v2 + 164;
  v4 = *(__int64**)(a1 + 5904);
  *(_QWORD*)(a1 + 40) = v3;
  v5 = (_QWORD*)(a1 + 40);
  for (i = *v4; i != 0; i = **(_QWORD**)(a1 + 5904)) {
    (*(void (**)(__int64))(*(_QWORD*)i + 264LL))(i);
    v14 = *(_QWORD*)(a1 + 5888);
    v9 = (__int64*)(v14 + i);
    v16 = *(_QWORD*)(v14 + i);
    v15 = *(_QWORD*)(v14 + i + 8);
    if (v16 != 0) {
      *(_QWORD*)(v14 + v16 + 8) = v15;
      v14 = *(_QWORD*)(a1 + 5888);
      v9 = (__int64*)(v14 + i);
      v7 = *(_QWORD*)(v14 + i);
      v8 = *(_QWORD*)(v14 + i + 8);
      if (v8 == 0) {
      LABEL_8:
        *(_QWORD*)(a1 + 5880) = v7;
        goto LABEL_5;
      }
    }
    else {
      *(_QWORD*)(a1 + 5872) = v15;
      v7 = *v9;
      v8 = v9[1];
      if (v8 == 0) {
        goto LABEL_8;
      }
    }
    *(_QWORD*)(v14 + v8) = v7;
    v9 = (__int64*)(*(_QWORD*)(a1 + 5888) + i);
  LABEL_5:
    *v9 = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 5888) + i + 8) = 0;
    v10 = *(_QWORD*)(a1 + 32);
    (**(void (***)(__int64))i)(i);
    nn_os_LockMutex(v10 + 2800);
    v11 = *(_QWORD*)(v10 + 2784);
    v12 = *(_WORD*)(v10 + 2792) - 1;
    v13 = i - *(_QWORD*)(v10 + 2776);
    *(_WORD*)(v10 + 2792) = v12;
    *(_WORD*)(v11 + 2LL * v12) = v13 / 0x1808;
    nn_os_UnlockMutex(v10 + 2800);
  }
  for (j = **(_QWORD**)(a1 + 5864); j != 0; j = **(_QWORD**)(a1 + 5864)) {
    (*(void (**)(__int64))(*(_QWORD*)j + 264LL))(j);
    v25 = *(_QWORD*)(a1 + 5848);
    v20 = (__int64*)(v25 + j);
    v27 = *(_QWORD*)(v25 + j);
    v26 = *(_QWORD*)(v25 + j + 8);
    if (v27 != 0) {
      *(_QWORD*)(v25 + v27 + 8) = v26;
      v25 = *(_QWORD*)(a1 + 5848);
      v20 = (__int64*)(v25 + j);
      v18 = *(_QWORD*)(v25 + j);
      v19 = *(_QWORD*)(v25 + j + 8);
      if (v19 == 0) {
      LABEL_16:
        *(_QWORD*)(a1 + 5840) = v18;
        goto LABEL_13;
      }
    }
    else {
      *(_QWORD*)(a1 + 5832) = v26;
      v18 = *v20;
      v19 = v20[1];
      if (v19 == 0) {
        goto LABEL_16;
      }
    }
    *(_QWORD*)(v25 + v19) = v18;
    v20 = (__int64*)(*(_QWORD*)(a1 + 5848) + j);
  LABEL_13:
    *v20 = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 5848) + j + 8) = 0;
    v21 = *(_QWORD*)(a1 + 32);
    (**(void (***)(__int64))j)(j);
    nn_os_LockMutex(v21 + 2560);
    v22 = *(_QWORD*)(v21 + 2544);
    v23 = *(_WORD*)(v21 + 2552) - 1;
    v24 = (unsigned __int64)(j - *(_QWORD*)(v21 + 2536)) >> 3;
    *(_WORD*)(v21 + 2552) = v23;
    *(_WORD*)(v22 + 2LL * v23) =
        (unsigned __int64)((v24 * (unsigned __int128)0x156AC0156AC0156BuLL) >>
                           64) >>
        6;
    nn_os_UnlockMutex(v21 + 2560);
  }
  for (k = **(_BYTE***)(a1 + 5824); k != nullptr; k = **(_BYTE***)(a1 + 5824)) {
    (*(void (**)(_BYTE*))(*(_QWORD*)k + 264LL))(k);
    v35 = *(_QWORD*)(a1 + 5808);
    v36 = (__int64*)&k[v35];
    v38 = *(_QWORD*)&k[v35];
    v37 = *(_QWORD*)&k[v35 + 8];
    if (v38 != 0) {
      *(_QWORD*)(v35 + v38 + 8) = v37;
      v35 = *(_QWORD*)(a1 + 5808);
      v36 = (__int64*)&k[v35];
      v39 = *(_QWORD*)&k[v35];
      v40 = *(_QWORD*)&k[v35 + 8];
      if (v40 != 0) {
        goto LABEL_24;
      }
    }
    else {
      *(_QWORD*)(a1 + 5792) = v37;
      v39 = *v36;
      v40 = v36[1];
      if (v40 != 0) {
      LABEL_24:
        *(_QWORD*)(v35 + v40) = v39;
        v36 = (__int64*)&k[*(_QWORD*)(a1 + 5808)];
        goto LABEL_27;
      }
    }
    *(_QWORD*)(a1 + 5800) = v39;
  LABEL_27:
    *v36 = 0;
    *(_QWORD*)&k[*(_QWORD*)(a1 + 5808) + 8] = 0;
    if (k[5891] == 1) {
      v29 = *(_QWORD*)(a1 + 32);
      (**(void (***)(_BYTE*))k)(k);
      v30 = v29 + 2640;
      nn_os_LockMutex(v29 + 2640);
      v31 = (_QWORD*)(v29 + 2624);
      v32 = *(_WORD*)(v29 + 2632) - 1;
      v33 = (unsigned __int64)&k[-*(_QWORD*)(v29 + 2616)] >> 4;
      *(_WORD*)(v29 + 2632) = v32;
    }
    else {
      v41 = (unsigned __int8)k[5892];
      v42 = *(_QWORD*)(a1 + 32);
      (**(void (***)(_BYTE*))k)(k);
      if (v41 != 1) {
        v30 = v42 + 2480;
        nn_os_LockMutex(v42 + 2480);
        v31 = (_QWORD*)(v42 + 2464);
        v32 = *(_WORD*)(v42 + 2472) - 1;
        v43 = (unsigned __int64)&k[-*(_QWORD*)(v42 + 2456)];
        *(_WORD*)(v42 + 2472) = v32;
        v34 = v43 / 0x17B8;
        goto LABEL_21;
      }
      v30 = v42 + 2720;
      nn_os_LockMutex(v42 + 2720);
      v31 = (_QWORD*)(v42 + 2704);
      v32 = *(_WORD*)(v42 + 2712) - 1;
      v33 = (unsigned __int64)&k[-*(_QWORD*)(v42 + 2696)] >> 4;
      *(_WORD*)(v42 + 2712) = v32;
    }
    v34 = (unsigned __int64)((v33 * (unsigned __int128)0xAC02B00AC02B00BuLL) >>
                             64) >>
          4;
  LABEL_21:
    *(_WORD*)(*v31 + 2LL * v32) = v34;
    nn_os_UnlockMutex(v30);
  }
  nn_os_FinalizeMutex(a1 + 5944);
  if ((*(_BYTE*)(a1 + 5704) & 1) == 0) {
    if ((*(_BYTE*)(a1 + 5680) & 1) == 0) {
      goto LABEL_33;
    }
  LABEL_37:
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], *(_QWORD*)(a1 + 5696));
    if ((*(_BYTE*)(a1 + 5624) & 1) == 0) {
      goto LABEL_35;
    }
    goto LABEL_34;
  }
  (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
      *snd_g_memory_ptr[0], *(_QWORD*)(a1 + 5720));
  if ((*(_BYTE*)(a1 + 5680) & 1) != 0) {
    goto LABEL_37;
  }

LABEL_33:
  if ((*(_BYTE*)(a1 + 5624) & 1) != 0) {
  LABEL_34:
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], *(_QWORD*)(a1 + 5640));
  }

LABEL_35:
  *(_QWORD*)(a1 + 5592) = GameData_2134248[0] + 2;
  snd_HandlePtr_unregisterHandle(a1 + 5592);
  Param_Destructor(v5);
  return snd_Obj_Destroy_Obj_126190(a1);
}

void Slot_1327c0(__int64 a1)
{
  Slot_Destructor(a1 - 5592);
  GameRoutine_651250((void*)(a1 - 5592), 0x1758u);
}

__int64 Slot_Unknown6(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;

  v1 = result;
  if (*(_DWORD*)(result + 5652) != 0) {
    result = snd_fnd_WeakHandle_isValid(result + 5728);
    if ((result & 1) == 0) {
      v2 = Crc32List_11ed40(*(_QWORD*)(v1 + 32), (int*)(v1 + 5652));
      v10 = 0;
      v11 = 0x2000;
      if (v2 != 0) {
        v3 = v2 + 5592;
      }
      else {
        v3 = 0;
      }
      snd_fnd_WeakHandle_set(&v10, v3);
      result = GameRoutine_112180(v1 + 5728, &v10);
    }
  }
  if (*(_DWORD*)(v1 + 5656) != 0) {
    result = snd_fnd_WeakHandle_isValid(v1 + 5744);
    if ((result & 1) == 0) {
      v4 = Crc32List_11ed40(*(_QWORD*)(v1 + 32), (int*)(v1 + 5656));
      v10 = 0;
      v11 = 0x2000;
      if (v4 != 0) {
        v5 = v4 + 5592;
      }
      else {
        v5 = 0;
      }
      snd_fnd_WeakHandle_set(&v10, v5);
      result = GameRoutine_112180(v1 + 5744, &v10);
    }
  }
  if (*(_DWORD*)(v1 + 5660) != 0) {
    result = snd_fnd_WeakHandle_isValid(v1 + 5760);
    if ((result & 1) == 0) {
      v6 = Crc32List_11ed40(*(_QWORD*)(v1 + 32), (int*)(v1 + 5660));
      v10 = 0;
      v11 = 0x2000;
      if (v6 != 0) {
        v7 = v6 + 5592;
      }
      else {
        v7 = 0;
      }
      snd_fnd_WeakHandle_set(&v10, v7);
      result = GameRoutine_112180(v1 + 5760, &v10);
    }
  }
  if (*(_DWORD*)(v1 + 5664) != 0) {
    result = snd_fnd_WeakHandle_isValid(v1 + 5776);
    if ((result & 1) == 0) {
      v8 = Crc32List_11ed40(*(_QWORD*)(v1 + 32), (int*)(v1 + 5664));
      v10 = 0;
      v11 = 0x2000;
      if (v8 != 0) {
        v9 = v8 + 5592;
      }
      else {
        v9 = 0;
      }
      snd_fnd_WeakHandle_set(&v10, v9);
      return GameRoutine_112180(v1 + 5776, &v10);
    }
  }
  return result;
}

__n128 Slot_1329a0(__int64 a1, float a2)
{
  nn_os_LockMutex(a1 + 5944);
  snd_Param_update(a1 + 40, a2);
  return nn_os_UnlockMutex(a1 + 5944);
}

__n128 Slot_132a00(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;
  __int64 v11;

  nn_os_LockMutex(a1 + 5944);
  v4 = v9;
  v9[0] = GameData_1f58448;
  v5 = *(__int64**)(a1 + 5816);
  v10 = v9;
  v6 = *v5;
  if (*v5 != 0) {
    do {
      v11 = v6;
      v6 = *(_QWORD*)(v6 + 5640);
      if (v10 == nullptr) {
        GameRoutine_60a310(0, v2, v3);
      }
      (*(void (**)(_QWORD*, __int64*))(*v10 + 48LL))(v10, &v11);
    } while (v6 != 0);
    v4 = v10;
    if (v10 != v9) {
      if (v10 != nullptr) {
        v7 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*))(*v4 + v7))(v4);
      }
      return nn_os_UnlockMutex(a1 + 5944);
    }
  }
  v7 = 32;
  goto LABEL_8;
}

__n128 Slot_132ac0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;
  __int64 v11;

  nn_os_LockMutex(a1 + 5944);
  v4 = v9;
  v9[0] = GameData_1f584c8;
  v5 = *(__int64**)(a1 + 5856);
  v10 = v9;
  v6 = *v5;
  if (*v5 != 0) {
    do {
      v11 = v6;
      v6 = *(_QWORD*)(v6 + 6080);
      if (v10 == nullptr) {
        GameRoutine_60a310(0, v2, v3);
      }
      (*(void (**)(_QWORD*, __int64*))(*v10 + 48LL))(v10, &v11);
    } while (v6 != 0);
    v4 = v10;
    if (v10 != v9) {
      if (v10 != nullptr) {
        v7 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*))(*v4 + v7))(v4);
      }
      return nn_os_UnlockMutex(a1 + 5944);
    }
  }
  v7 = 32;
  goto LABEL_8;
}

__n128 Slot_132b80(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;
  __int64 v11;

  nn_os_LockMutex(a1 + 5944);
  v4 = v9;
  v9[0] = GameData_1f58548;
  v5 = *(__int64**)(a1 + 5896);
  v10 = v9;
  v6 = *v5;
  if (*v5 != 0) {
    do {
      v11 = v6;
      v6 = *(_QWORD*)(v6 + 6080);
      if (v10 == nullptr) {
        GameRoutine_60a310(0, v2, v3);
      }
      (*(void (**)(_QWORD*, __int64*))(*v10 + 48LL))(v10, &v11);
    } while (v6 != 0);
    v4 = v10;
    if (v10 != v9) {
      if (v10 != nullptr) {
        v7 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*))(*v4 + v7))(v4);
      }
      return nn_os_UnlockMutex(a1 + 5944);
    }
  }
  v7 = 32;
  goto LABEL_8;
}

__int64 Slot_132c40(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v21[4];
  _QWORD* v22;
  _QWORD v23[4];
  _QWORD* v24;
  _QWORD v25[4];
  _QWORD* v26;
  __int64 v27;

  GameRoutine_119040(a1);
  nn_os_LockMutex(a1 + 743);
  v4 = v25;
  v25[0] = GameData_1f585c8;
  v5 = (__int64*)a1[727];
  v26 = v25;
  v6 = *v5;
  if (*v5 != 0) {
    do {
      v27 = v6;
      v6 = *(_QWORD*)(v6 + 5640);
      v7 = v26;
      if (v26 == nullptr) {
      LABEL_26:
        GameRoutine_60a310(v7, v2, v3);
      }
      (*(void (**)(_QWORD*, __int64*))(*v26 + 48LL))(v26, &v27);
    } while (v6 != 0);
    v4 = v26;
    if (v26 != v25) {
      if (v26 != nullptr) {
        v8 = 40;
      LABEL_8:
        (*(void (**)(__int64))(*v4 + v8))((__int64)v4);
      }
      v9 = v23;
      v23[0] = GameData_1f58648;
      v10 = (__int64*)a1[732];
      v24 = v23;
      v11 = *v10;
      if (*v10 != 0) {
        do {
          v27 = v11;
          v11 = *(_QWORD*)(v11 + 6080);
          v7 = v24;
          if (v24 == nullptr) {
            goto LABEL_26;
          }
          (*(void (**)(_QWORD*, __int64*))(*v24 + 48LL))(v24, &v27);
        } while (v11 != 0);
        v9 = v24;
        if (v24 != v23) {
          if (v24 != nullptr) {
            v12 = 40;
          LABEL_16:
            (*(void (**)(__int64))(*v9 + v12))((__int64)v9);
          }
          v13 = v21;
          v21[0] = GameData_1f586c8;
          v14 = (__int64*)a1[737];
          v22 = v21;
          v15 = *v14;
          if (*v14 != 0) {
            do {
              v27 = v15;
              v15 = *(_QWORD*)(v15 + 6080);
              v7 = v22;
              if (v22 == nullptr) {
                goto LABEL_26;
              }
              (*(void (**)(_QWORD*, __int64*))(*v22 + 48LL))(v22, &v27);
            } while (v15 != 0);
            v13 = v22;
            if (v22 != v21) {
              if (v22 != nullptr) {
                v16 = 40;
              LABEL_24:
                (*(void (**)(_QWORD*))(*v13 + v16))(v13);
              }
              nn_os_UnlockMutex(a1 + 743);
              return GameRoutine_119060(v17, v18, v19);
            }
          }
          v16 = 32;
          goto LABEL_24;
        }
      }
      v12 = 32;
      goto LABEL_16;
    }
  }
  v8 = 32;
  goto LABEL_8;
}

void Slot_132e00(__int64 a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 (***v6)();
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 (**v10)();
  float v11;
  __int64 (***v12)();
  __int64 v13;

  nn_os_LockMutex(a1 + 5944);
  v6 = &v10;
  v11 = a2;
  v10 = GameData_1f58748;
  v7 = *(__int64**)(a1 + 5816);
  v12 = &v10;
  v8 = *v7;
  if (*v7 == 0) {
    goto LABEL_7;
  }
  do {
    v13 = v8;
    v8 = *(_QWORD*)(v8 + 5640);
    if (v12 == nullptr) {
      GameRoutine_60a310(0, v4, v5);
    }
    ((void (*)(__int64 (***)(), __int64*))(*v12)[6])(v12, &v13);
  } while (v8 != 0);
  v6 = v12;
  if (v12 == &v10) {
  LABEL_7:
    v9 = 4;
    goto LABEL_8;
  }
  if (v12 != nullptr) {
    v9 = 5;
  LABEL_8:
    ((void (*)(__int64 (***)(), __int64))(*v6)[v9])(v6, v4);
  }
  nn_os_UnlockMutex(a1 + 5944);
}

void Slot_132ee0(__int64 a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 (***v6)();
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 (**v10)();
  float v11;
  __int64 (***v12)();
  __int64 v13;

  nn_os_LockMutex(a1 + 5944);
  v6 = &v10;
  v11 = a2;
  v10 = GameData_1f587c8;
  v7 = *(__int64**)(a1 + 5856);
  v12 = &v10;
  v8 = *v7;
  if (*v7 == 0) {
    goto LABEL_7;
  }
  do {
    v13 = v8;
    v8 = *(_QWORD*)(v8 + 6080);
    if (v12 == nullptr) {
      GameRoutine_60a310(0, v4, v5);
    }
    ((void (*)(__int64 (***)(), __int64*))(*v12)[6])(v12, &v13);
  } while (v8 != 0);
  v6 = v12;
  if (v12 == &v10) {
  LABEL_7:
    v9 = 4;
    goto LABEL_8;
  }
  if (v12 != nullptr) {
    v9 = 5;
  LABEL_8:
    ((void (*)(__int64 (***)(), __int64))(*v6)[v9])(v6, v4);
  }
  nn_os_UnlockMutex(a1 + 5944);
}

void Slot_132fc0(__int64 a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 (***v6)();
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 (**v10)();
  float v11;
  __int64 (***v12)();
  __int64 v13;

  nn_os_LockMutex(a1 + 5944);
  v6 = &v10;
  v11 = a2;
  v10 = GameData_1f58848;
  v7 = *(__int64**)(a1 + 5896);
  v12 = &v10;
  v8 = *v7;
  if (*v7 == 0) {
    goto LABEL_7;
  }
  do {
    v13 = v8;
    v8 = *(_QWORD*)(v8 + 6080);
    if (v12 == nullptr) {
      GameRoutine_60a310(0, v4, v5);
    }
    ((void (*)(__int64 (***)(), __int64*))(*v12)[6])(v12, &v13);
  } while (v8 != 0);
  v6 = v12;
  if (v12 == &v10) {
  LABEL_7:
    v9 = 4;
    goto LABEL_8;
  }
  if (v12 != nullptr) {
    v9 = 5;
  LABEL_8:
    ((void (*)(__int64 (***)(), __int64))(*v6)[v9])(v6, v4);
  }
  nn_os_UnlockMutex(a1 + 5944);
}

__n128 Slot_1330a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;
  __int64 v11;

  nn_os_LockMutex(a1 + 5944);
  v4 = v9;
  v9[0] = GameData_1f588c8;
  v5 = *(__int64**)(a1 + 5816);
  v10 = v9;
  v6 = *v5;
  if (*v5 != 0) {
    do {
      v11 = v6;
      v6 = *(_QWORD*)(v6 + 5640);
      if (v10 == nullptr) {
        GameRoutine_60a310(0, v2, v3);
      }
      (*(void (**)(_QWORD*, __int64*))(*v10 + 48LL))(v10, &v11);
    } while (v6 != 0);
    v4 = v10;
    if (v10 != v9) {
      if (v10 != nullptr) {
        v7 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*))(*v4 + v7))(v4);
      }
      return nn_os_UnlockMutex(a1 + 5944);
    }
  }
  v7 = 32;
  goto LABEL_8;
}

__n128 Slot_133160(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;
  __int64 v11;

  nn_os_LockMutex(a1 + 5944);
  v4 = v9;
  v9[0] = GameData_1f58948;
  v5 = *(__int64**)(a1 + 5816);
  v10 = v9;
  v6 = *v5;
  if (*v5 != 0) {
    do {
      v11 = v6;
      v6 = *(_QWORD*)(v6 + 5640);
      if (v10 == nullptr) {
        GameRoutine_60a310(0, v2, v3);
      }
      (*(void (**)(_QWORD*, __int64*))(*v10 + 48LL))(v10, &v11);
    } while (v6 != 0);
    v4 = v10;
    if (v10 != v9) {
      if (v10 != nullptr) {
        v7 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*))(*v4 + v7))(v4);
      }
      return nn_os_UnlockMutex(a1 + 5944);
    }
  }
  v7 = 32;
  goto LABEL_8;
}

__n128 Slot_133220(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;
  __int64 v11;

  nn_os_LockMutex(a1 + 5944);
  v4 = v9;
  v9[0] = GameData_1f589c8;
  v5 = *(__int64**)(a1 + 5856);
  v10 = v9;
  v6 = *v5;
  if (*v5 != 0) {
    do {
      v11 = v6;
      v6 = *(_QWORD*)(v6 + 6080);
      if (v10 == nullptr) {
        GameRoutine_60a310(0, v2, v3);
      }
      (*(void (**)(_QWORD*, __int64*))(*v10 + 48LL))(v10, &v11);
    } while (v6 != 0);
    v4 = v10;
    if (v10 != v9) {
      if (v10 != nullptr) {
        v7 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*))(*v4 + v7))(v4);
      }
      return nn_os_UnlockMutex(a1 + 5944);
    }
  }
  v7 = 32;
  goto LABEL_8;
}

__int64 Slot_1332e0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v14[4];
  _QWORD* v15;
  __int64 v16;

  GameRoutine_119040(a1);
  nn_os_LockMutex(a1 + 5944);
  *(_QWORD*)(*(_QWORD*)(a1 + 5808) + a2) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 5808) + a2 + 8) = 0;
  if (**(_QWORD**)(a1 + 5824) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 5808) + *(_QWORD*)(a1 + 5800) + 8LL) = a2;
    *(_QWORD*)(*(_QWORD*)(a1 + 5808) + a2) = **(_QWORD**)(a1 + 5824);
  }
  else {
    *(_QWORD*)(a1 + 5792) = a2;
  }
  v6 = *(_QWORD*)(a1 + 5936);
  *(_QWORD*)(a1 + 5800) = a2;
  v7 = v14;
  v15 = v14;
  *(_QWORD*)(a2 + 5624) = v6;
  *(_DWORD*)(a1 + 5912) = 0;
  *(_DWORD*)(a1 + 5920) = 0;
  *(_QWORD*)(a1 + 5936) = v6 + 1;
  v14[0] = GameData_1f58a48;
  v14[1] = a1;
  v8 = **(_QWORD**)(a1 + 5816);
  if (v8 != 0) {
    do {
      v16 = v8;
      v8 = *(_QWORD*)(v8 + 5640);
      if (v15 == nullptr) {
        GameRoutine_60a310(0, v4, v5);
      }
      (*(void (**)(_QWORD*, __int64*))(*v15 + 48LL))(v15, &v16);
    } while (v8 != 0);
    v7 = v15;
    if (v15 != v14) {
      if (v15 != nullptr) {
        v9 = 40;
      LABEL_11:
        (*(void (**)(_QWORD*, __int64))(*v7 + v9))(v7, v4);
      }
      nn_os_UnlockMutex(a1 + 5944);
      return GameRoutine_119060(v10, v11, v12);
    }
  }
  v9 = 32;
  goto LABEL_11;
}

__int64 Slot_133420(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v19[4];
  _QWORD* v20;
  _QWORD v21[4];
  _QWORD* v22;
  __int64 v23;
  __int64 v24;

  v23 = a2;
  GameRoutine_119040(a1);
  nn_os_LockMutex(a1 + 5944);
  v5 = v21;
  v21[2] = a1;
  v21[0] = GameData_1f58ac8;
  v21[1] = &v23;
  v6 = *(__int64**)(a1 + 5816);
  v22 = v21;
  v7 = *v6;
  do {
    if (v7 == 0) {
      break;
    }
    v8 = *(_QWORD*)(v7 + 5640);
    v24 = v7;
    if (v5 == nullptr) {
    LABEL_14:
      GameRoutine_60a310(v5, v3, v4);
    }
    v9 = (*(__int64 (**)(_QWORD*, __int64*))(*v5 + 48LL))(v5, &v24);
    v5 = v22;
    v7 = v8;
  } while ((v9 & 1) == 0);
  if (v5 == v21) {
    v10 = 32;
    goto LABEL_9;
  }
  if (v5 != nullptr) {
    v10 = 40;
  LABEL_9:
    (*(void (**)(__int64))(*v5 + v10))((__int64)v5);
  }
  v5 = v19;
  *(_DWORD*)(a1 + 5912) = 0;
  *(_DWORD*)(a1 + 5920) = 0;
  v19[0] = GameData_1f58b58;
  v19[1] = a1;
  v11 = *(__int64**)(a1 + 5816);
  v20 = v19;
  v12 = *v11;
  if (v12 != 0) {
    v13 = *(_QWORD*)(v12 + 5640);
    v5 = v19;
    v24 = v12;
    while (1) {
      (*(void (**)(_QWORD*, __int64*))(*v5 + 48LL))(v5, &v24);
      v5 = v20;
      if (v13 == 0) {
        break;
      }
      v24 = v13;
      v13 = *(_QWORD*)(v13 + 5640);
      if (v20 == nullptr) {
        goto LABEL_14;
      }
    }
    if (v20 != v19) {
      if (v20 != nullptr) {
        v14 = 40;
      LABEL_19:
        (*(void (**)(_QWORD*, __int64))(*v5 + v14))(v5, v3);
      }
      nn_os_UnlockMutex(a1 + 5944);
      return GameRoutine_119060(v15, v16, v17);
    }
  }
  v14 = 32;
  goto LABEL_19;
}

__int64 Slot_133580(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;

  GameRoutine_119040(a1);
  nn_os_LockMutex(a1 + 5944);
  v4 = v13;
  *(_DWORD*)(a1 + 5912) = 0;
  *(_DWORD*)(a1 + 5920) = 0;
  v13[0] = GameData_1f58bd8;
  v13[1] = a1;
  v5 = *(__int64**)(a1 + 5816);
  v14 = v13;
  v6 = *v5;
  if (*v5 != 0) {
    do {
      v15 = v6;
      v6 = *(_QWORD*)(v6 + 5640);
      if (v14 == nullptr) {
        GameRoutine_60a310(0, v2, v3);
      }
      (*(void (**)(_QWORD*, __int64*))(*v14 + 48LL))(v14, &v15);
    } while (v6 != 0);
    v4 = v14;
    if (v14 != v13) {
      if (v14 != nullptr) {
        v7 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*, __int64))(*v4 + v7))(v4, v2);
      }
      v8 = *(_DWORD*)(a1 + 5912);
      nn_os_UnlockMutex(a1 + 5944);
      GameRoutine_119060(v9, v10, v11);
      return v8;
    }
  }
  v7 = 32;
  goto LABEL_8;
}

__int64 Slot_133660(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v14[4];
  _QWORD* v15;
  __int64 v16;

  GameRoutine_119040(a1);
  nn_os_LockMutex(a1 + 5944);
  *(_QWORD*)(*(_QWORD*)(a1 + 5848) + a2) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 5848) + a2 + 8) = 0;
  if (**(_QWORD**)(a1 + 5864) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 5848) + *(_QWORD*)(a1 + 5840) + 8LL) = a2;
    *(_QWORD*)(*(_QWORD*)(a1 + 5848) + a2) = **(_QWORD**)(a1 + 5864);
  }
  else {
    *(_QWORD*)(a1 + 5832) = a2;
  }
  v6 = *(_QWORD*)(a1 + 5936);
  *(_QWORD*)(a1 + 5840) = a2;
  v7 = v14;
  v15 = v14;
  *(_QWORD*)(a2 + 5624) = v6;
  *(_DWORD*)(a1 + 5916) = 0;
  *(_DWORD*)(a1 + 5924) = 0;
  *(_QWORD*)(a1 + 5936) = v6 + 1;
  v14[0] = GameData_1f58c58;
  v14[1] = a1;
  v8 = **(_QWORD**)(a1 + 5856);
  if (v8 != 0) {
    do {
      v16 = v8;
      v8 = *(_QWORD*)(v8 + 6080);
      if (v15 == nullptr) {
        GameRoutine_60a310(0, v4, v5);
      }
      (*(void (**)(_QWORD*, __int64*))(*v15 + 48LL))(v15, &v16);
    } while (v8 != 0);
    v7 = v15;
    if (v15 != v14) {
      if (v15 != nullptr) {
        v9 = 40;
      LABEL_11:
        (*(void (**)(_QWORD*, __int64))(*v7 + v9))(v7, v4);
      }
      nn_os_UnlockMutex(a1 + 5944);
      return GameRoutine_119060(v10, v11, v12);
    }
  }
  v9 = 32;
  goto LABEL_11;
}

__int64 Slot_1337a0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v19[4];
  _QWORD* v20;
  _QWORD v21[4];
  _QWORD* v22;
  __int64 v23;
  __int64 v24;

  v23 = a2;
  GameRoutine_119040(a1);
  nn_os_LockMutex(a1 + 5944);
  v5 = v21;
  v21[2] = a1;
  v21[0] = GameData_1f58cd8;
  v21[1] = &v23;
  v6 = *(__int64**)(a1 + 5856);
  v22 = v21;
  v7 = *v6;
  do {
    if (v7 == 0) {
      break;
    }
    v8 = *(_QWORD*)(v7 + 6080);
    v24 = v7;
    if (v5 == nullptr) {
    LABEL_14:
      GameRoutine_60a310(v5, v3, v4);
    }
    v9 = (*(__int64 (**)(_QWORD*, __int64*))(*v5 + 48LL))(v5, &v24);
    v5 = v22;
    v7 = v8;
  } while ((v9 & 1) == 0);
  if (v5 == v21) {
    v10 = 32;
    goto LABEL_9;
  }
  if (v5 != nullptr) {
    v10 = 40;
  LABEL_9:
    (*(void (**)(__int64))(*v5 + v10))((__int64)v5);
  }
  v5 = v19;
  *(_DWORD*)(a1 + 5916) = 0;
  *(_DWORD*)(a1 + 5924) = 0;
  v19[0] = GameData_1f58d68;
  v19[1] = a1;
  v11 = *(__int64**)(a1 + 5856);
  v20 = v19;
  v12 = *v11;
  if (v12 != 0) {
    v13 = *(_QWORD*)(v12 + 6080);
    v5 = v19;
    v24 = v12;
    while (1) {
      (*(void (**)(_QWORD*, __int64*))(*v5 + 48LL))(v5, &v24);
      v5 = v20;
      if (v13 == 0) {
        break;
      }
      v24 = v13;
      v13 = *(_QWORD*)(v13 + 6080);
      if (v20 == nullptr) {
        goto LABEL_14;
      }
    }
    if (v20 != v19) {
      if (v20 != nullptr) {
        v14 = 40;
      LABEL_19:
        (*(void (**)(_QWORD*, __int64))(*v5 + v14))(v5, v3);
      }
      nn_os_UnlockMutex(a1 + 5944);
      return GameRoutine_119060(v15, v16, v17);
    }
  }
  v14 = 32;
  goto LABEL_19;
}

__int64 Slot_133900(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v14[4];
  _QWORD* v15;
  __int64 v16;

  GameRoutine_119040(a1);
  nn_os_LockMutex(a1 + 5944);
  *(_QWORD*)(*(_QWORD*)(a1 + 5888) + a2) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 5888) + a2 + 8) = 0;
  if (**(_QWORD**)(a1 + 5904) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 5888) + *(_QWORD*)(a1 + 5880) + 8LL) = a2;
    *(_QWORD*)(*(_QWORD*)(a1 + 5888) + a2) = **(_QWORD**)(a1 + 5904);
  }
  else {
    *(_QWORD*)(a1 + 5872) = a2;
  }
  v6 = *(_QWORD*)(a1 + 5936);
  *(_QWORD*)(a1 + 5880) = a2;
  v7 = v14;
  v15 = v14;
  *(_QWORD*)(a2 + 5624) = v6;
  *(_QWORD*)(a1 + 5928) = 0;
  *(_QWORD*)(a1 + 5936) = v6 + 1;
  v14[0] = GameData_1f58de8;
  v14[1] = a1;
  v8 = **(_QWORD**)(a1 + 5896);
  if (v8 != 0) {
    do {
      v16 = v8;
      v8 = *(_QWORD*)(v8 + 6080);
      if (v15 == nullptr) {
        GameRoutine_60a310(0, v4, v5);
      }
      (*(void (**)(_QWORD*, __int64*))(*v15 + 48LL))(v15, &v16);
    } while (v8 != 0);
    v7 = v15;
    if (v15 != v14) {
      if (v15 != nullptr) {
        v9 = 40;
      LABEL_11:
        (*(void (**)(_QWORD*, __int64))(*v7 + v9))(v7, v4);
      }
      nn_os_UnlockMutex(a1 + 5944);
      return GameRoutine_119060(v10, v11, v12);
    }
  }
  v9 = 32;
  goto LABEL_11;
}

__int64 Slot_133a40(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v19[4];
  _QWORD* v20;
  _QWORD v21[4];
  _QWORD* v22;
  __int64 v23;
  __int64 v24;

  v23 = a2;
  GameRoutine_119040(a1);
  nn_os_LockMutex(a1 + 5944);
  v5 = v21;
  v21[2] = a1;
  v21[0] = GameData_1f58e68;
  v21[1] = &v23;
  v6 = *(__int64**)(a1 + 5896);
  v22 = v21;
  v7 = *v6;
  do {
    if (v7 == 0) {
      break;
    }
    v8 = *(_QWORD*)(v7 + 6080);
    v24 = v7;
    if (v5 == nullptr) {
    LABEL_14:
      GameRoutine_60a310(v5, v3, v4);
    }
    v9 = (*(__int64 (**)(_QWORD*, __int64*))(*v5 + 48LL))(v5, &v24);
    v5 = v22;
    v7 = v8;
  } while ((v9 & 1) == 0);
  if (v5 == v21) {
    v10 = 32;
    goto LABEL_9;
  }
  if (v5 != nullptr) {
    v10 = 40;
  LABEL_9:
    (*(void (**)(__int64))(*v5 + v10))((__int64)v5);
  }
  v5 = v19;
  *(_QWORD*)(a1 + 5928) = 0;
  v19[0] = GameData_1f58ef8;
  v19[1] = a1;
  v11 = *(__int64**)(a1 + 5896);
  v20 = v19;
  v12 = *v11;
  if (v12 != 0) {
    v13 = *(_QWORD*)(v12 + 6080);
    v5 = v19;
    v24 = v12;
    while (1) {
      (*(void (**)(_QWORD*, __int64*))(*v5 + 48LL))(v5, &v24);
      v5 = v20;
      if (v13 == 0) {
        break;
      }
      v24 = v13;
      v13 = *(_QWORD*)(v13 + 6080);
      if (v20 == nullptr) {
        goto LABEL_14;
      }
    }
    if (v20 != v19) {
      if (v20 != nullptr) {
        v14 = 40;
      LABEL_19:
        (*(void (**)(_QWORD*, __int64))(*v5 + v14))(v5, v3);
      }
      nn_os_UnlockMutex(a1 + 5944);
      return GameRoutine_119060(v15, v16, v17);
    }
  }
  v14 = 32;
  goto LABEL_19;
}

__int64 Slot_135520(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  char v10;
  int v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  char v15;
  int v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  char v20;
  __int64 v21;
  _QWORD v23[4];
  _QWORD* v24;
  _QWORD v25[4];
  _QWORD* v26;
  _QWORD v27[4];
  _QWORD* v28;
  _BYTE v29[16];
  __int64 v30;
  __int64 v31;

  nn_os_LockMutex(a1 + 743);
  GameRoutine_190020(v29, a2);
  v27[0] = GameData_1f59878;
  v27[1] = v29;
  v6 = (__int64*)a1[732];
  v28 = v27;
  v7 = *v6;
  if (*v6 != 0) {
    v8 = v27;
    while (1) {
      v9 = *(_QWORD*)(v7 + 6080);
      v31 = v7;
      if (v8 == nullptr) {
      LABEL_45:
        GameRoutine_60a310(v8, v4, v5);
      }
      v10 = (*(__int64 (**)(_QWORD*, __int64*))(*v8 + 48LL))(v8, &v31);
      v8 = v28;
      if ((v10 & 1) != 0) {
        break;
      }
      v7 = v9;
      if (v9 == 0) {
        v11 = 1;
        v7 = 0;
        if (v28 == v27) {
          goto LABEL_12;
        }
        goto LABEL_9;
      }
    }
    v11 = 0;
    if (v28 == v27) {
      goto LABEL_12;
    }
  LABEL_9:
    if (v28 == nullptr) {
      goto LABEL_14;
    }
    v12 = 40;
  }
  else {
    v11 = 1;
    v8 = v27;
  LABEL_12:
    v12 = 32;
  }
  (*(void (**)(__int64))(*v8 + v12))((__int64)v8);

LABEL_14:
  if (v11 != 0) {
    v25[0] = GameData_1f598f8;
    v25[1] = v29;
    v13 = (__int64*)a1[737];
    v26 = v25;
    v7 = *v13;
    if (*v13 != 0) {
      v8 = v25;
      while (1) {
        v14 = *(_QWORD*)(v7 + 6080);
        v31 = v7;
        if (v8 == nullptr) {
          goto LABEL_45;
        }
        v15 = (*(__int64 (**)(_QWORD*, __int64*))(*v8 + 48LL))(v8, &v31);
        v8 = v26;
        if ((v15 & 1) != 0) {
          break;
        }
        v7 = v14;
        if (v14 == 0) {
          v16 = 1;
          v7 = 0;
          if (v26 == v25) {
            goto LABEL_26;
          }
          goto LABEL_23;
        }
      }
      v16 = 0;
      if (v26 == v25) {
        goto LABEL_26;
      }
    LABEL_23:
      if (v26 == nullptr) {
        goto LABEL_28;
      }
      v17 = 40;
    }
    else {
      v16 = 1;
      v8 = v25;
    LABEL_26:
      v17 = 32;
    }
    (*(void (**)(__int64))(*v8 + v17))((__int64)v8);
  LABEL_28:
    if (v16 != 0) {
      v23[0] = GameData_1f59978;
      v23[1] = v29;
      v18 = (__int64*)a1[727];
      v24 = v23;
      v7 = *v18;
      if (*v18 != 0) {
        v8 = v23;
        v19 = *v18;
        while (1) {
          v7 = *(_QWORD*)(v19 + 5640);
          v31 = v19;
          if (v8 == nullptr) {
            goto LABEL_45;
          }
          v20 = (*(__int64 (**)(_QWORD*, __int64*))(*v8 + 48LL))(v8, &v31);
          v8 = v24;
          if ((v20 & 1) != 0) {
            break;
          }
          v19 = v7;
          if (v7 == 0) {
            goto LABEL_36;
          }
        }
        v7 = v19;
        if (v24 == v23) {
          goto LABEL_40;
        }
      }
      else {
        v8 = v23;
      LABEL_36:
        if (v8 == v23) {
        LABEL_40:
          v21 = 32;
        LABEL_41:
          (*(void (**)(_QWORD*, __int64))(*v8 + v21))(v8, v4);
          goto LABEL_42;
        }
      }
      if (v8 == nullptr) {
        goto LABEL_42;
      }
      v21 = 40;
      goto LABEL_41;
    }
  }

LABEL_42:
  if ((v29[0] & 1) != 0) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v30);
  }
  nn_os_UnlockMutex(a1 + 743);
  return v7;
}

__n128 Slot_1357a0(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _QWORD v22[4];
  _QWORD* v23;
  _QWORD v24[4];
  _QWORD* v25;
  _QWORD v26[4];
  _QWORD* v27;
  __int64 v28;

  nn_os_LockMutex(a1 + 743);
  v8 = v26;
  v26[2] = a3;
  v26[0] = GameData_1f599f8;
  v26[1] = a2;
  v9 = (__int64*)a1[727];
  v27 = v26;
  v10 = *v9;
  if (*v9 != 0) {
    do {
      v28 = v10;
      v10 = *(_QWORD*)(v10 + 5640);
      v11 = v27;
      if (v27 == nullptr) {
      LABEL_26:
        GameRoutine_60a310(v11, v6, v7);
      }
      (*(void (**)(_QWORD*, __int64*))(*v27 + 48LL))(v27, &v28);
    } while (v10 != 0);
    v8 = v27;
    if (v27 != v26) {
      if (v27 != nullptr) {
        v12 = 40;
      LABEL_8:
        (*(void (**)(__int64))(*v8 + v12))((__int64)v8);
      }
      v13 = v24;
      v24[2] = a3;
      v24[0] = GameData_1f59a78;
      v24[1] = a2;
      v14 = (__int64*)a1[732];
      v25 = v24;
      v15 = *v14;
      if (*v14 != 0) {
        do {
          v28 = v15;
          v15 = *(_QWORD*)(v15 + 6080);
          v11 = v25;
          if (v25 == nullptr) {
            goto LABEL_26;
          }
          (*(void (**)(_QWORD*, __int64*))(*v25 + 48LL))(v25, &v28);
        } while (v15 != 0);
        v13 = v25;
        if (v25 != v24) {
          if (v25 != nullptr) {
            v16 = 40;
          LABEL_16:
            (*(void (**)(__int64))(*v13 + v16))((__int64)v13);
          }
          v17 = v22;
          v22[2] = a3;
          v22[0] = GameData_1f59af8;
          v22[1] = a2;
          v18 = (__int64*)a1[737];
          v23 = v22;
          v19 = *v18;
          if (*v18 != 0) {
            do {
              v28 = v19;
              v19 = *(_QWORD*)(v19 + 6080);
              v11 = v23;
              if (v23 == nullptr) {
                goto LABEL_26;
              }
              (*(void (**)(_QWORD*, __int64*))(*v23 + 48LL))(v23, &v28);
            } while (v19 != 0);
            v17 = v23;
            if (v23 != v22) {
              if (v23 != nullptr) {
                v20 = 40;
              LABEL_24:
                (*(void (**)(_QWORD*, __int64, __int64))(*v17 + v20))(v17, v6,
                                                                      v7);
              }
              return nn_os_UnlockMutex(a1 + 743);
            }
          }
          v20 = 32;
          goto LABEL_24;
        }
      }
      v16 = 32;
      goto LABEL_16;
    }
  }
  v12 = 32;
  goto LABEL_8;
}

__n128 Slot_135980(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  _QWORD v20[4];
  _QWORD* v21;
  _QWORD v22[4];
  _QWORD* v23;
  _QWORD v24[4];
  _QWORD* v25;
  __int64 v26;

  nn_os_LockMutex(a1 + 743);
  v6 = v24;
  v24[0] = GameData_1f59b78;
  v24[1] = a2;
  v7 = (__int64*)a1[727];
  v25 = v24;
  v8 = *v7;
  if (*v7 != 0) {
    do {
      v26 = v8;
      v8 = *(_QWORD*)(v8 + 5640);
      v9 = v25;
      if (v25 == nullptr) {
      LABEL_26:
        GameRoutine_60a310(v9, v4, v5);
      }
      (*(void (**)(_QWORD*, __int64*))(*v25 + 48LL))(v25, &v26);
    } while (v8 != 0);
    v6 = v25;
    if (v25 != v24) {
      if (v25 != nullptr) {
        v10 = 40;
      LABEL_8:
        (*(void (**)(__int64))(*v6 + v10))((__int64)v6);
      }
      v11 = v22;
      v22[0] = GameData_1f59bf8;
      v22[1] = a2;
      v12 = (__int64*)a1[732];
      v23 = v22;
      v13 = *v12;
      if (*v12 != 0) {
        do {
          v26 = v13;
          v13 = *(_QWORD*)(v13 + 6080);
          v9 = v23;
          if (v23 == nullptr) {
            goto LABEL_26;
          }
          (*(void (**)(_QWORD*, __int64*))(*v23 + 48LL))(v23, &v26);
        } while (v13 != 0);
        v11 = v23;
        if (v23 != v22) {
          if (v23 != nullptr) {
            v14 = 40;
          LABEL_16:
            (*(void (**)(__int64))(*v11 + v14))((__int64)v11);
          }
          v15 = v20;
          v20[0] = GameData_1f59c78;
          v20[1] = a2;
          v16 = (__int64*)a1[737];
          v21 = v20;
          v17 = *v16;
          if (*v16 != 0) {
            do {
              v26 = v17;
              v17 = *(_QWORD*)(v17 + 6080);
              v9 = v21;
              if (v21 == nullptr) {
                goto LABEL_26;
              }
              (*(void (**)(_QWORD*, __int64*))(*v21 + 48LL))(v21, &v26);
            } while (v17 != 0);
            v15 = v21;
            if (v21 != v20) {
              if (v21 != nullptr) {
                v18 = 40;
              LABEL_24:
                (*(void (**)(_QWORD*, __int64))(*v15 + v18))(v15, v4);
              }
              return nn_os_UnlockMutex(a1 + 743);
            }
          }
          v18 = 32;
          goto LABEL_24;
        }
      }
      v14 = 32;
      goto LABEL_16;
    }
  }
  v10 = 32;
  goto LABEL_8;
}

__n128 Slot_135b40(_QWORD* a1, unsigned int a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _QWORD v22[4];
  _QWORD* v23;
  _QWORD v24[4];
  _QWORD* v25;
  _QWORD v26[4];
  _QWORD* v27;
  __int64 v28;

  nn_os_LockMutex(a1 + 743);
  v8 = v26;
  v26[2] = a3;
  v26[0] = GameData_1f59cf8;
  v26[1] = a2;
  v9 = (__int64*)a1[727];
  v27 = v26;
  v10 = *v9;
  if (*v9 != 0) {
    do {
      v28 = v10;
      v10 = *(_QWORD*)(v10 + 5640);
      v11 = v27;
      if (v27 == nullptr) {
      LABEL_26:
        GameRoutine_60a310(v11, v6, v7);
      }
      (*(void (**)(_QWORD*, __int64*))(*v27 + 48LL))(v27, &v28);
    } while (v10 != 0);
    v8 = v27;
    if (v27 != v26) {
      if (v27 != nullptr) {
        v12 = 40;
      LABEL_8:
        (*(void (**)(__int64))(*v8 + v12))((__int64)v8);
      }
      v13 = v24;
      v24[2] = a3;
      v24[0] = GameData_1f59d78;
      v24[1] = a2;
      v14 = (__int64*)a1[732];
      v25 = v24;
      v15 = *v14;
      if (*v14 != 0) {
        do {
          v28 = v15;
          v15 = *(_QWORD*)(v15 + 6080);
          v11 = v25;
          if (v25 == nullptr) {
            goto LABEL_26;
          }
          (*(void (**)(_QWORD*, __int64*))(*v25 + 48LL))(v25, &v28);
        } while (v15 != 0);
        v13 = v25;
        if (v25 != v24) {
          if (v25 != nullptr) {
            v16 = 40;
          LABEL_16:
            (*(void (**)(__int64))(*v13 + v16))((__int64)v13);
          }
          v17 = v22;
          v22[2] = a3;
          v22[0] = GameData_1f59df8;
          v22[1] = a2;
          v18 = (__int64*)a1[737];
          v23 = v22;
          v19 = *v18;
          if (*v18 != 0) {
            do {
              v28 = v19;
              v19 = *(_QWORD*)(v19 + 6080);
              v11 = v23;
              if (v23 == nullptr) {
                goto LABEL_26;
              }
              (*(void (**)(_QWORD*, __int64*))(*v23 + 48LL))(v23, &v28);
            } while (v19 != 0);
            v17 = v23;
            if (v23 != v22) {
              if (v23 != nullptr) {
                v20 = 40;
              LABEL_24:
                (*(void (**)(_QWORD*, __int64, __int64))(*v17 + v20))(v17, v6,
                                                                      v7);
              }
              return nn_os_UnlockMutex(a1 + 743);
            }
          }
          v20 = 32;
          goto LABEL_24;
        }
      }
      v16 = 32;
      goto LABEL_16;
    }
  }
  v12 = 32;
  goto LABEL_8;
}

__n128 Slot_135d20(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  _QWORD v20[4];
  _QWORD* v21;
  _QWORD v22[4];
  _QWORD* v23;
  _QWORD v24[4];
  _QWORD* v25;
  __int64 v26;

  nn_os_LockMutex(a1 + 743);
  v6 = v24;
  v24[0] = GameData_1f59e78;
  v24[1] = a2;
  v7 = (__int64*)a1[727];
  v25 = v24;
  v8 = *v7;
  if (*v7 != 0) {
    do {
      v26 = v8;
      v8 = *(_QWORD*)(v8 + 5640);
      v9 = v25;
      if (v25 == nullptr) {
      LABEL_26:
        GameRoutine_60a310(v9, v4, v5);
      }
      (*(void (**)(_QWORD*, __int64*))(*v25 + 48LL))(v25, &v26);
    } while (v8 != 0);
    v6 = v25;
    if (v25 != v24) {
      if (v25 != nullptr) {
        v10 = 40;
      LABEL_8:
        (*(void (**)(__int64))(*v6 + v10))((__int64)v6);
      }
      v11 = v22;
      v22[0] = GameData_1f59ef8;
      v22[1] = a2;
      v12 = (__int64*)a1[732];
      v23 = v22;
      v13 = *v12;
      if (*v12 != 0) {
        do {
          v26 = v13;
          v13 = *(_QWORD*)(v13 + 6080);
          v9 = v23;
          if (v23 == nullptr) {
            goto LABEL_26;
          }
          (*(void (**)(_QWORD*, __int64*))(*v23 + 48LL))(v23, &v26);
        } while (v13 != 0);
        v11 = v23;
        if (v23 != v22) {
          if (v23 != nullptr) {
            v14 = 40;
          LABEL_16:
            (*(void (**)(__int64))(*v11 + v14))((__int64)v11);
          }
          v15 = v20;
          v20[0] = GameData_1f59f78;
          v20[1] = a2;
          v16 = (__int64*)a1[737];
          v21 = v20;
          v17 = *v16;
          if (*v16 != 0) {
            do {
              v26 = v17;
              v17 = *(_QWORD*)(v17 + 6080);
              v9 = v21;
              if (v21 == nullptr) {
                goto LABEL_26;
              }
              (*(void (**)(_QWORD*, __int64*))(*v21 + 48LL))(v21, &v26);
            } while (v17 != 0);
            v15 = v21;
            if (v21 != v20) {
              if (v21 != nullptr) {
                v18 = 40;
              LABEL_24:
                (*(void (**)(_QWORD*, __int64))(*v15 + v18))(v15, v4);
              }
              return nn_os_UnlockMutex(a1 + 743);
            }
          }
          v18 = 32;
          goto LABEL_24;
        }
      }
      v14 = 32;
      goto LABEL_16;
    }
  }
  v10 = 32;
  goto LABEL_8;
}

__n128 Slot_135ee0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  _QWORD v18[4];
  _QWORD* v19;
  _QWORD v20[4];
  _QWORD* v21;
  _QWORD v22[4];
  _QWORD* v23;
  __int64 v24;

  nn_os_LockMutex(a1 + 743);
  v4 = v22;
  v22[0] = GameData_1f59ff8;
  v5 = (__int64*)a1[727];
  v23 = v22;
  v6 = *v5;
  if (*v5 != 0) {
    do {
      v24 = v6;
      v6 = *(_QWORD*)(v6 + 5640);
      v7 = v23;
      if (v23 == nullptr) {
      LABEL_26:
        GameRoutine_60a310(v7, v2, v3);
      }
      (*(void (**)(_QWORD*, __int64*))(*v23 + 48LL))(v23, &v24);
    } while (v6 != 0);
    v4 = v23;
    if (v23 != v22) {
      if (v23 != nullptr) {
        v8 = 40;
      LABEL_8:
        (*(void (**)(__int64))(*v4 + v8))((__int64)v4);
      }
      v9 = v20;
      v20[0] = GameData_1f5a078;
      v10 = (__int64*)a1[732];
      v21 = v20;
      v11 = *v10;
      if (*v10 != 0) {
        do {
          v24 = v11;
          v11 = *(_QWORD*)(v11 + 6080);
          v7 = v21;
          if (v21 == nullptr) {
            goto LABEL_26;
          }
          (*(void (**)(_QWORD*, __int64*))(*v21 + 48LL))(v21, &v24);
        } while (v11 != 0);
        v9 = v21;
        if (v21 != v20) {
          if (v21 != nullptr) {
            v12 = 40;
          LABEL_16:
            (*(void (**)(__int64))(*v9 + v12))((__int64)v9);
          }
          v13 = v18;
          v18[0] = GameData_1f5a0f8;
          v14 = (__int64*)a1[737];
          v19 = v18;
          v15 = *v14;
          if (*v14 != 0) {
            do {
              v24 = v15;
              v15 = *(_QWORD*)(v15 + 6080);
              v7 = v19;
              if (v19 == nullptr) {
                goto LABEL_26;
              }
              (*(void (**)(_QWORD*, __int64*))(*v19 + 48LL))(v19, &v24);
            } while (v15 != 0);
            v13 = v19;
            if (v19 != v18) {
              if (v19 != nullptr) {
                v16 = 40;
              LABEL_24:
                (*(void (**)(_QWORD*))(*v13 + v16))(v13);
              }
              return nn_os_UnlockMutex(a1 + 743);
            }
          }
          v16 = 32;
          goto LABEL_24;
        }
      }
      v12 = 32;
      goto LABEL_16;
    }
  }
  v8 = 32;
  goto LABEL_8;
}

__n128 Slot_1360a0(_QWORD** a1, __int64 a2, char a3)
{
  char v6;
  _BYTE* v7;
  long double v8;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;
  long double v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  long double v16;
  __int64 v17;
  __int64 v18;
  _BYTE v20[200];
  char v21;
  _BYTE v22[200];
  char v23;
  _BYTE v24[200];
  char v25;
  __int64 v26;

  v6 = a3 & 1;
  nn_os_LockMutex(a1 + 743);
  snd_Fade_Fade_10cd70(v24, a2);
  v25 = a3;
  v7 = (_BYTE*)GameRoutine_651190(0xD8u);
  *(_QWORD*)v7 = GameData_1f5a178;
  *(float*)&v8 = snd_Fade_Fade_10cd70(v7 + 8, v24);
  v7[208] = v25;
  v9 = *a1[727];
  if (v9 != 0) {
    do {
      v10 = *(_QWORD*)(v9 + 5640);
      v26 = v9;
      (*(void (**)(_BYTE*, __int64*, long double))(*(_QWORD*)v7 + 48LL))(
          v7, &v26, v8);
      v9 = v10;
    } while (v10 != 0);
  }
  (*(void (**)(_BYTE*, long double))(*(_QWORD*)v7 + 40LL))(v7, v8);
  snd_Fade_Destroy_Fade(v24);
  snd_Fade_Fade_10cd70(v22, a2);
  v23 = v6;
  v11 = (_BYTE*)GameRoutine_651190(0xD8u);
  *(_QWORD*)v11 = GameData_1f5a1f8;
  *(float*)&v12 = snd_Fade_Fade_10cd70(v11 + 8, v22);
  v11[208] = v23;
  v13 = *a1[732];
  if (v13 != 0) {
    do {
      v14 = *(_QWORD*)(v13 + 6080);
      v26 = v13;
      (*(void (**)(_BYTE*, __int64*, long double))(*(_QWORD*)v11 + 48LL))(
          v11, &v26, v12);
      v13 = v14;
    } while (v14 != 0);
  }
  (*(void (**)(_BYTE*, long double))(*(_QWORD*)v11 + 40LL))(v11, v12);
  snd_Fade_Destroy_Fade(v22);
  snd_Fade_Fade_10cd70(v20, a2);
  v21 = v6;
  v15 = (_BYTE*)GameRoutine_651190(0xD8u);
  *(_QWORD*)v15 = GameData_1f5a278;
  *(float*)&v16 = snd_Fade_Fade_10cd70(v15 + 8, v20);
  v15[208] = v21;
  v17 = *a1[737];
  if (v17 != 0) {
    do {
      v18 = *(_QWORD*)(v17 + 6080);
      v26 = v17;
      (*(void (**)(_BYTE*, __int64*, long double))(*(_QWORD*)v15 + 48LL))(
          v15, &v26, v16);
      v17 = v18;
    } while (v18 != 0);
  }
  (*(void (**)(_BYTE*, long double))(*(_QWORD*)v15 + 40LL))(v15, v16);
  snd_Fade_Destroy_Fade(v20);
  return nn_os_UnlockMutex(a1 + 743);
}

__n128 Slot_136280(_QWORD** a1, __int64 a2)
{
  __int64 v4;
  long double v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  __int64 v15;
  _BYTE v17[200];
  _BYTE v18[200];
  _BYTE v19[200];
  __int64 v20;

  nn_os_LockMutex(a1 + 743);
  snd_Fade_Fade_10cd70(v19, a2);
  v4 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v4 = GameData_1f5a2f8;
  *(float*)&v5 = snd_Fade_Fade_10cd70(v4 + 8, v19);
  v6 = *a1[727];
  if (v6 != 0) {
    do {
      v7 = *(_QWORD*)(v6 + 5640);
      v20 = v6;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v4 + 48LL))(
          v4, &v20, v5);
      v6 = v7;
    } while (v7 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 40LL))(v4, v5);
  snd_Fade_Destroy_Fade(v19);
  snd_Fade_Fade_10cd70(v18, a2);
  v8 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v8 = GameData_1f5a378;
  *(float*)&v9 = snd_Fade_Fade_10cd70(v8 + 8, v18);
  v10 = *a1[732];
  if (v10 != 0) {
    do {
      v11 = *(_QWORD*)(v10 + 6080);
      v20 = v10;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v8 + 48LL))(
          v8, &v20, v9);
      v10 = v11;
    } while (v11 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 40LL))(v8, v9);
  snd_Fade_Destroy_Fade(v18);
  snd_Fade_Fade_10cd70(v17, a2);
  v12 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v12 = GameData_1f5a3f8;
  *(float*)&v13 = snd_Fade_Fade_10cd70(v12 + 8, v17);
  v14 = *a1[737];
  if (v14 != 0) {
    do {
      v15 = *(_QWORD*)(v14 + 6080);
      v20 = v14;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v12 + 48LL))(
          v12, &v20, v13);
      v14 = v15;
    } while (v15 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 40LL))(v12, v13);
  snd_Fade_Destroy_Fade(v17);
  return nn_os_UnlockMutex(a1 + 743);
}

__n128 Slot_136440(_QWORD** a1, __int64 a2)
{
  __int64 v4;
  long double v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  __int64 v15;
  _BYTE v17[200];
  _BYTE v18[200];
  _BYTE v19[200];
  __int64 v20;

  nn_os_LockMutex(a1 + 743);
  snd_Fade_Fade_10cd70(v19, a2);
  v4 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v4 = GameData_1f5a478;
  *(float*)&v5 = snd_Fade_Fade_10cd70(v4 + 8, v19);
  v6 = *a1[727];
  if (v6 != 0) {
    do {
      v7 = *(_QWORD*)(v6 + 5640);
      v20 = v6;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v4 + 48LL))(
          v4, &v20, v5);
      v6 = v7;
    } while (v7 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 40LL))(v4, v5);
  snd_Fade_Destroy_Fade(v19);
  snd_Fade_Fade_10cd70(v18, a2);
  v8 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v8 = GameData_1f5a4f8;
  *(float*)&v9 = snd_Fade_Fade_10cd70(v8 + 8, v18);
  v10 = *a1[732];
  if (v10 != 0) {
    do {
      v11 = *(_QWORD*)(v10 + 6080);
      v20 = v10;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v8 + 48LL))(
          v8, &v20, v9);
      v10 = v11;
    } while (v11 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 40LL))(v8, v9);
  snd_Fade_Destroy_Fade(v18);
  snd_Fade_Fade_10cd70(v17, a2);
  v12 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v12 = GameData_1f5a578;
  *(float*)&v13 = snd_Fade_Fade_10cd70(v12 + 8, v17);
  v14 = *a1[737];
  if (v14 != 0) {
    do {
      v15 = *(_QWORD*)(v14 + 6080);
      v20 = v14;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v12 + 48LL))(
          v12, &v20, v13);
      v14 = v15;
    } while (v15 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 40LL))(v12, v13);
  snd_Fade_Destroy_Fade(v17);
  return nn_os_UnlockMutex(a1 + 743);
}

__n128 Slot_136600(_QWORD** a1, __int64 a2)
{
  __int64 v4;
  long double v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  __int64 v15;
  _BYTE v17[200];
  _BYTE v18[200];
  _BYTE v19[200];
  __int64 v20;

  nn_os_LockMutex(a1 + 743);
  snd_Fade_Fade_10cd70(v19, a2);
  v4 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v4 = GameData_1f5a5f8;
  *(float*)&v5 = snd_Fade_Fade_10cd70(v4 + 8, v19);
  v6 = *a1[727];
  if (v6 != 0) {
    do {
      v7 = *(_QWORD*)(v6 + 5640);
      v20 = v6;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v4 + 48LL))(
          v4, &v20, v5);
      v6 = v7;
    } while (v7 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 40LL))(v4, v5);
  snd_Fade_Destroy_Fade(v19);
  snd_Fade_Fade_10cd70(v18, a2);
  v8 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v8 = GameData_1f5a678;
  *(float*)&v9 = snd_Fade_Fade_10cd70(v8 + 8, v18);
  v10 = *a1[732];
  if (v10 != 0) {
    do {
      v11 = *(_QWORD*)(v10 + 6080);
      v20 = v10;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v8 + 48LL))(
          v8, &v20, v9);
      v10 = v11;
    } while (v11 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 40LL))(v8, v9);
  snd_Fade_Destroy_Fade(v18);
  snd_Fade_Fade_10cd70(v17, a2);
  v12 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v12 = GameData_1f5a6f8;
  *(float*)&v13 = snd_Fade_Fade_10cd70(v12 + 8, v17);
  v14 = *a1[737];
  if (v14 != 0) {
    do {
      v15 = *(_QWORD*)(v14 + 6080);
      v20 = v14;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v12 + 48LL))(
          v12, &v20, v13);
      v14 = v15;
    } while (v15 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 40LL))(v12, v13);
  snd_Fade_Destroy_Fade(v17);
  return nn_os_UnlockMutex(a1 + 743);
}

void Slot_1367c0(_QWORD** a1, __int64 a2, float a3)
{
  float* v6;
  long double v7;
  __int64 v8;
  __int64 v9;
  float* v10;
  long double v11;
  __int64 v12;
  __int64 v13;
  float* v14;
  long double v15;
  __int64 v16;
  __int64 v17;
  _DWORD v18[52];
  _DWORD v19[52];
  _BYTE v20[200];
  __int64 v21;

  nn_os_LockMutex(a1 + 743);
  *(float*)&v19[50] = a3;
  snd_Fade_Fade_10cd70(v20, a2);
  v6 = (float*)GameRoutine_651190(0xD8u);
  *(_QWORD*)v6 = GameData_1f5a778;
  v6[2] = a3;
  *(float*)&v7 = snd_Fade_Fade_10cd70(v6 + 4, v20);
  v8 = *a1[727];
  if (v8 != 0) {
    do {
      v9 = *(_QWORD*)(v8 + 5640);
      v21 = v8;
      (*(void (**)(float*, __int64*, long double))(*(_QWORD*)v6 + 48LL))(
          v6, &v21, v7);
      v8 = v9;
    } while (v9 != 0);
  }
  (*(void (**)(float*, long double))(*(_QWORD*)v6 + 40LL))(v6, v7);
  snd_Fade_Destroy_Fade(v20);
  *(float*)&v18[50] = a3;
  snd_Fade_Fade_10cd70(v19, a2);
  v10 = (float*)GameRoutine_651190(0xD8u);
  *(_QWORD*)v10 = GameData_1f5a7f8;
  v10[2] = a3;
  *(float*)&v11 = snd_Fade_Fade_10cd70(v10 + 4, v19);
  v12 = *a1[732];
  if (v12 != 0) {
    do {
      v13 = *(_QWORD*)(v12 + 6080);
      v21 = v12;
      (*(void (**)(float*, __int64*, long double))(*(_QWORD*)v10 + 48LL))(
          v10, &v21, v11);
      v12 = v13;
    } while (v13 != 0);
  }
  (*(void (**)(float*, long double))(*(_QWORD*)v10 + 40LL))(v10, v11);
  snd_Fade_Destroy_Fade(v19);
  snd_Fade_Fade_10cd70(v18, a2);
  v14 = (float*)GameRoutine_651190(0xD8u);
  *(_QWORD*)v14 = GameData_1f5a878;
  v14[2] = a3;
  *(float*)&v15 = snd_Fade_Fade_10cd70(v14 + 4, v18);
  v16 = *a1[737];
  if (v16 != 0) {
    do {
      v17 = *(_QWORD*)(v16 + 6080);
      v21 = v16;
      (*(void (**)(float*, __int64*, long double))(*(_QWORD*)v14 + 48LL))(
          v14, &v21, v15);
      v16 = v17;
    } while (v17 != 0);
  }
  (*(void (**)(float*, long double))(*(_QWORD*)v14 + 40LL))(v14, v15);
  snd_Fade_Destroy_Fade(v18);
  nn_os_UnlockMutex(a1 + 743);
}

__int64 Slot_1369e0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  char v7;
  int v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  char v12;
  int v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  char v17;
  __int64 v18;
  _QWORD v20[4];
  _QWORD* v21;
  _QWORD v22[4];
  _QWORD* v23;
  _QWORD v24[4];
  _QWORD* v25;
  __int64 v26;

  nn_os_LockMutex(a1 + 743);
  v24[0] = GameData_1f5a8f8;
  v4 = (__int64*)a1[727];
  v25 = v24;
  v5 = *v4;
  if (*v4 != 0) {
    v6 = v24;
    while (1) {
      v26 = v5;
      v5 = *(_QWORD*)(v5 + 5640);
      if (v6 == nullptr) {
      LABEL_44:
        GameRoutine_60a310(v6, v2, v3);
      }
      v7 = (*(__int64 (**)(_QWORD*, __int64*))(*v6 + 48LL))(v6, &v26);
      v6 = v25;
      if ((v7 & 1) != 0) {
        break;
      }
      if (v5 == 0) {
        v8 = 1;
        if (v25 == v24) {
          goto LABEL_12;
        }
        goto LABEL_9;
      }
    }
    v8 = 0;
    if (v25 == v24) {
      goto LABEL_12;
    }
  LABEL_9:
    if (v25 == nullptr) {
      goto LABEL_14;
    }
    v9 = 40;
  }
  else {
    v8 = 1;
    v6 = v24;
  LABEL_12:
    v9 = 32;
  }
  (*(void (**)(__int64))(*v6 + v9))((__int64)v6);

LABEL_14:
  if (v8 == 0) {
    goto LABEL_37;
  }
  v22[0] = GameData_1f5a978;
  v10 = (__int64*)a1[732];
  v23 = v22;
  v11 = *v10;
  if (*v10 != 0) {
    v6 = v22;
    while (1) {
      v26 = v11;
      v11 = *(_QWORD*)(v11 + 6080);
      if (v6 == nullptr) {
        goto LABEL_44;
      }
      v12 = (*(__int64 (**)(_QWORD*, __int64*))(*v6 + 48LL))(v6, &v26);
      v6 = v23;
      if ((v12 & 1) != 0) {
        break;
      }
      if (v11 == 0) {
        v13 = 1;
        if (v23 == v22) {
          goto LABEL_26;
        }
        goto LABEL_23;
      }
    }
    v13 = 0;
    if (v23 == v22) {
      goto LABEL_26;
    }
  LABEL_23:
    if (v23 == nullptr) {
      goto LABEL_28;
    }
    v14 = 40;
  }
  else {
    v13 = 1;
    v6 = v22;
  LABEL_26:
    v14 = 32;
  }
  (*(void (**)(__int64))(*v6 + v14))((__int64)v6);

LABEL_28:
  if (v13 != 0) {
    v20[0] = GameData_1f5a9f8;
    v15 = (__int64*)a1[737];
    v21 = v20;
    v16 = *v15;
    if (*v15 != 0) {
      v6 = v20;
      while (1) {
        v26 = v16;
        v16 = *(_QWORD*)(v16 + 6080);
        if (v6 == nullptr) {
          goto LABEL_44;
        }
        v17 = (*(__int64 (**)(_QWORD*, __int64*))(*v6 + 48LL))(v6, &v26);
        v6 = v21;
        if ((v17 & 1) != 0) {
          break;
        }
        if (v16 == 0) {
          if (v21 == v20) {
            goto LABEL_39;
          }
          goto LABEL_35;
        }
      }
      LODWORD(v16) = 1;
      if (v21 == v20) {
        goto LABEL_39;
      }
    LABEL_35:
      if (v21 == nullptr) {
        goto LABEL_41;
      }
      v18 = 40;
    }
    else {
      v6 = v20;
    LABEL_39:
      v18 = 32;
    }
    (*(void (**)(_QWORD*))(*v6 + v18))(v6);
  }
  else {
  LABEL_37:
    LODWORD(v16) = 1;
  }

LABEL_41:
  nn_os_UnlockMutex(a1 + 743);
  return (unsigned int)v16;
}

__int64 Slot_136c00(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  char v9;
  int v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  char v14;
  int v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  char v19;
  __int64 v20;
  _QWORD v22[4];
  _QWORD* v23;
  _QWORD v24[4];
  _QWORD* v25;
  _QWORD v26[4];
  _QWORD* v27;
  __int64 v28;

  nn_os_LockMutex(a1 + 743);
  v26[0] = GameData_1f5aa78;
  v26[1] = a2;
  v6 = (__int64*)a1[727];
  v27 = v26;
  v7 = *v6;
  if (*v6 != 0) {
    v8 = v26;
    while (1) {
      v28 = v7;
      v7 = *(_QWORD*)(v7 + 5640);
      if (v8 == nullptr) {
      LABEL_44:
        GameRoutine_60a310(v8, v4, v5);
      }
      v9 = (*(__int64 (**)(_QWORD*, __int64*))(*v8 + 48LL))(v8, &v28);
      v8 = v27;
      if ((v9 & 1) != 0) {
        break;
      }
      if (v7 == 0) {
        v10 = 1;
        if (v27 == v26) {
          goto LABEL_12;
        }
        goto LABEL_9;
      }
    }
    v10 = 0;
    if (v27 == v26) {
      goto LABEL_12;
    }
  LABEL_9:
    if (v27 == nullptr) {
      goto LABEL_14;
    }
    v11 = 40;
  }
  else {
    v10 = 1;
    v8 = v26;
  LABEL_12:
    v11 = 32;
  }
  (*(void (**)(__int64))(*v8 + v11))((__int64)v8);

LABEL_14:
  if (v10 == 0) {
    goto LABEL_37;
  }
  v24[0] = GameData_1f5aaf8;
  v24[1] = a2;
  v12 = (__int64*)a1[732];
  v25 = v24;
  v13 = *v12;
  if (*v12 != 0) {
    v8 = v24;
    while (1) {
      v28 = v13;
      v13 = *(_QWORD*)(v13 + 6080);
      if (v8 == nullptr) {
        goto LABEL_44;
      }
      v14 = (*(__int64 (**)(_QWORD*, __int64*))(*v8 + 48LL))(v8, &v28);
      v8 = v25;
      if ((v14 & 1) != 0) {
        break;
      }
      if (v13 == 0) {
        v15 = 1;
        if (v25 == v24) {
          goto LABEL_26;
        }
        goto LABEL_23;
      }
    }
    v15 = 0;
    if (v25 == v24) {
      goto LABEL_26;
    }
  LABEL_23:
    if (v25 == nullptr) {
      goto LABEL_28;
    }
    v16 = 40;
  }
  else {
    v15 = 1;
    v8 = v24;
  LABEL_26:
    v16 = 32;
  }
  (*(void (**)(__int64))(*v8 + v16))((__int64)v8);

LABEL_28:
  if (v15 != 0) {
    v22[0] = GameData_1f5ab78;
    v22[1] = a2;
    v17 = (__int64*)a1[737];
    v23 = v22;
    v18 = *v17;
    if (*v17 != 0) {
      v8 = v22;
      while (1) {
        v28 = v18;
        v18 = *(_QWORD*)(v18 + 6080);
        if (v8 == nullptr) {
          goto LABEL_44;
        }
        v19 = (*(__int64 (**)(_QWORD*, __int64*))(*v8 + 48LL))(v8, &v28);
        v8 = v23;
        if ((v19 & 1) != 0) {
          break;
        }
        if (v18 == 0) {
          if (v23 == v22) {
            goto LABEL_39;
          }
          goto LABEL_35;
        }
      }
      LODWORD(v18) = 1;
      if (v23 == v22) {
        goto LABEL_39;
      }
    LABEL_35:
      if (v23 == nullptr) {
        goto LABEL_41;
      }
      v20 = 40;
    }
    else {
      v8 = v22;
    LABEL_39:
      v20 = 32;
    }
    (*(void (**)(_QWORD*, __int64))(*v8 + v20))(v8, v4);
  }
  else {
  LABEL_37:
    LODWORD(v18) = 1;
  }

LABEL_41:
  nn_os_UnlockMutex(a1 + 743);
  return (unsigned int)v18;
}

__int64 Slot_136e40(__int64** a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  _QWORD v20[4];
  _QWORD* v21;
  _QWORD v22[4];
  _QWORD* v23;
  _QWORD v24[4];
  _QWORD* v25;
  unsigned int v26;
  _BYTE v27[16];
  __int64 v28;
  __int64 v29;

  nn_os_LockMutex(a1 + 743);
  GameRoutine_190020(v27, a2);
  v6 = v24;
  v24[2] = v27;
  v26 = 0;
  v24[0] = GameData_1f5abf8;
  v24[1] = &v26;
  v7 = a1[727];
  v25 = v24;
  v8 = *v7;
  if (*v7 != 0) {
    do {
      v29 = v8;
      v8 = *(_QWORD*)(v8 + 5640);
      v9 = v25;
      if (v25 == nullptr) {
      LABEL_28:
        GameRoutine_60a310(v9, v4, v5);
      }
      (*(void (**)(_QWORD*, __int64*))(*v25 + 48LL))(v25, &v29);
    } while (v8 != 0);
    v6 = v25;
    if (v25 != v24) {
      if (v25 != nullptr) {
        v10 = 40;
      LABEL_8:
        (*(void (**)(__int64))(*v6 + v10))((__int64)v6);
      }
      v11 = v22;
      v22[2] = a2;
      v22[0] = GameData_1f5ac78;
      v22[1] = &v26;
      v12 = a1[732];
      v23 = v22;
      v13 = *v12;
      if (*v12 != 0) {
        do {
          v29 = v13;
          v13 = *(_QWORD*)(v13 + 6080);
          v9 = v23;
          if (v23 == nullptr) {
            goto LABEL_28;
          }
          (*(void (**)(_QWORD*, __int64*))(*v23 + 48LL))(v23, &v29);
        } while (v13 != 0);
        v11 = v23;
        if (v23 != v22) {
          if (v23 != nullptr) {
            v14 = 40;
          LABEL_16:
            (*(void (**)(__int64))(*v11 + v14))((__int64)v11);
          }
          v15 = v20;
          v20[0] = GameData_1f5acf8;
          v20[1] = &v26;
          v21 = v20;
          v20[2] = v27;
          v16 = *a1[737];
          if (v16 == 0) {
            goto LABEL_23;
          }
          do {
            v29 = v16;
            v16 = *(_QWORD*)(v16 + 6080);
            v9 = v21;
            if (v21 == nullptr) {
              goto LABEL_28;
            }
            (*(void (**)(_QWORD*, __int64*))(*v21 + 48LL))(v21, &v29);
          } while (v16 != 0);
          v15 = v21;
          if (v21 == v20) {
          LABEL_23:
            v17 = 32;
          }
          else {
            if (v21 == nullptr) {
              goto LABEL_25;
            }
            v17 = 40;
          }
          (*(void (**)(_QWORD*, __int64, __int64))(*v15 + v17))(v15, v4, v5);
        LABEL_25:
          v18 = v26;
          if ((v27[0] & 1) != 0) {
            (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] +
                                           24LL))(*snd_g_memory_ptr[0], v28);
          }
          nn_os_UnlockMutex(a1 + 743);
          return v18;
        }
      }
      v14 = 32;
      goto LABEL_16;
    }
  }
  v10 = 32;
  goto LABEL_8;
}

__int64 Slot_137080(__int64 a1)
{
  __int64 v2;

  v2 = -1;
  return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)(a1 - 40) + 80LL))(
      a1 - 40, &v2);
}

__int64* Slot_Unknown8()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2134680,
                            memory_order_acquire) &
       1) != 0) {
    return GameData_2134688[0];
  }
  if ((unsigned int)__cxa_guard_acquire(GameData_2134680) != 0) {
    *GameData_2134688[0] = 0;
    __cxa_guard_release(GameData_2134680);
  }
  return GameData_2134688[0];
}

#pragma GCC visibility pop
