#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_112180(_QWORD, _QWORD);
extern __int64 GameData_2178de0;
extern __int64 GameData_2178de8;
extern __int64* snd_g_memory_ptr[2];
void GameRoutine_f6760();
void __attribute__((noreturn)) GameRoutine_ee190(void);
__int64 Data_edfe0(__int64* a1, __int64 a2);
__int64 Data_f6b70();
__int64 Data_f6c20(int* a1, _QWORD* a2);
__int64 Data_f6cc0(int* a1);
__int64 Data_f6d50(int a1, _QWORD* a2, char a3);
__int64 Data_fdde0(__int64 result, unsigned int a2, unsigned int* a3,
                   unsigned int* a4);

__int64 Data_edfe0(__int64* a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v3 = a1[1];
  v2 = a1[2];
  if (v3 >= v2) {
    v6 = v3 - *a1;
    v7 = (v6 >> 4) + 1;
    if (v7 >> 60 != 0) {
      GameRoutine_ee190();
    }
    v8 = v2 - *a1;
    v10 = snd_g_memory_ptr[0];
    v11 = v8 >> 3;
    if (v8 >> 3 <= v7) {
      v11 = (v6 >> 4) + 1;
    }
    if ((unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFF0LL) {
      v12 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v11;
    }
    v13 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 16 * v12,
                                                 32);
    v14 = v13 + v6;
    v15 = v13 + 16 * v12;
    *(_QWORD*)v14 = 0;
    *(_DWORD*)(v14 + 8) = 0x2000;
    GameRoutine_112180(v14, a2);
    v16 = *a1;
    v17 = a1[1];
    v5 = v14 + 16;
    v18 = *a1 - v17;
    v19 = v14 + v18;
    if (v17 != *a1) {
      v20 = v14 + v18;
      do {
        *(_QWORD*)v20 = 0;
        *(_DWORD*)(v20 + 8) = 0x2000;
        GameRoutine_112180(v20, v16);
        v16 += 16;
        v20 += 16;
      } while (v16 != v17);
      v16 = *a1;
    }
    *a1 = v19;
    a1[1] = v5;
    a1[2] = v15;
    if (v16 != 0) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)*v10 + 24LL))(*v10, v16);
    }
  }
  else {
    *(_QWORD*)v3 = 0;
    *(_DWORD*)(v3 + 8) = 0x2000;
    GameRoutine_112180(v3, a2);
    v5 = v3 + 16;
  }
  a1[1] = v5;
  return v5 - 16;
}

__int64 Data_f6b70()
{
  void (***v0)(__int64);
  __int64 v1;
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 result;

  v0 = (void (***)(__int64))GameData_2178de0;
  if (GameData_2178de0 != 0) {
    v1 = GameData_2178de0;
    GameData_2178de0 = 0;
    (**v0)(v1);
    v2 = snd_g_memory_ptr[0];
    (*(void (**)(_QWORD, void (***)(__int64)))(**(_QWORD**)snd_g_memory_ptr[0] +
                                               24LL))(*snd_g_memory_ptr[0], v0);
    v3 = (_QWORD*)GameData_2178de8;
    GameData_2178de8 = 0;
    if (*v3 != 0) {
      v4 = *v2;
      v3[1] = *v3;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
    }
    return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)*v2 + 24LL))(*v2, v3);
  }
  return result;
}

__int64 Data_f6c20(int* a1, _QWORD* a2)
{
  __int64 v4;
  __int64 result;
  int v6;
  __int64 v7;
  int v8;
  int v9;

  v4 = GameData_2178de0;
  if (GameData_2178de0 == 0) {
    GameRoutine_f6760();
    v4 = GameData_2178de0;
    if (GameData_2178de0 == 0) {
      return 0;
    }
  }
  result = *(_QWORD*)(v4 + 16);
  if (result != 0) {
    v6 = *a1;
    v7 = *(unsigned int*)(v4 + 28);
    v8 = a1[1];
    v9 = v6;
    result = Data_fdde0(result, v7, &v9, &v8);
    if (result != 0) {
      if (a2 != nullptr) {
        *a2 = *(_QWORD*)(*(_QWORD*)result + 24LL);
      }
      return *(_QWORD*)(*(_QWORD*)result + 16LL);
    }
  }
  return result;
}

__int64 Data_f6cc0(int* a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v8;
  int v9;

  v2 = GameData_2178de0;
  if (GameData_2178de0 == 0) {
    GameRoutine_f6760();
    v2 = GameData_2178de0;
    if (GameData_2178de0 == 0) {
      return 0xFFFFFFFFLL;
    }
  }
  v3 = *(_QWORD*)(v2 + 16);
  if (v3 == 0) {
    return 0xFFFFFFFFLL;
  }
  v4 = *a1;
  v5 = *(unsigned int*)(v2 + 28);
  v8 = a1[1];
  v9 = v4;
  v6 = Data_fdde0(v3, v5, &v9, &v8);
  if (v6 != 0) {
    return (unsigned int)((unsigned __int64)(v6 - *(_QWORD*)(v2 + 16)) >> 3);
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64 Data_f6d50(int a1, _QWORD* a2, char a3)
{
  __int64 v6;
  __int64 result;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;

  v6 = GameData_2178de0;
  if (GameData_2178de0 != 0) {
    result = 0;
    if (a1 == -1) {
      return result;
    }
  }
  else {
    GameRoutine_f6760();
    v6 = GameData_2178de0;
    result = 0;
    if (a1 == -1) {
      return result;
    }
  }
  if (v6 != 0) {
    if ((a3 & 1) != 0) {
      if (*(_QWORD*)(v6 + 16) != 0) {
        v8 = a1 & 0xFFFFFF;
        if (a2 != nullptr) {
          *a2 = *(_QWORD*)(*(_QWORD*)(v6 + 8) + 40LL * v8 + 24);
        }
        return *(_QWORD*)(*(_QWORD*)(v6 + 8) + 40LL * v8 + 16);
      }
      return 0;
    }
    v9 = *(_QWORD*)(v6 + 16);
    if (v9 == 0) {
      return 0;
    }
    v10 = a1 & 0xFFFFFF;
    if (a2 != nullptr) {
      *a2 = *(_QWORD*)(*(_QWORD*)(v9 + 8LL * v10) + 24LL);
      v9 = *(_QWORD*)(v6 + 16);
    }
    return *(_QWORD*)(*(_QWORD*)(v9 + 8LL * v10) + 16LL);
  }
  return result;
}

__int64 Data_fdde0(__int64 result, unsigned int a2, unsigned int* a3,
                   unsigned int* a4)
{
  unsigned int v4;
  __int64 v5;
  unsigned __int64 i;
  unsigned __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned int v17;
  unsigned __int64 v18;
  __int64 v19;

  if (a2 == 0) {
    return 0;
  }
  v4 = *a3;
  v5 = result + 8LL * a2;
  for (i = a2;; i >>= 1) {
    while (1) {
      v7 = i >> 1;
      v8 = result + 8 * (i >> 1);
      v9 = *(_DWORD*)(*(_QWORD*)v8 + 8LL);
      if (v9 >= v4) {
        break;
      }
      result = v8 + 8;
      i += ~v7;
      if (i == 0) {
        return 0;
      }
    }
    if (v4 >= v9) {
      break;
    }
    v5 = result + 8 * (i >> 1);
    if (v7 == 0) {
      return 0;
    }
  }
  if (i != 1) {
    do {
      v14 = v7 >> 1;
      v15 = result + 8 * (v7 >> 1);
      if (*(_DWORD*)(*(_QWORD*)v15 + 8LL) < v4) {
        result = v15 + 8;
        v14 = v7 + ~v14;
      }
      v7 = v14;
    } while (v14 != 0);
  }
  v10 = v8 + 8;
  if (v5 != v10) {
    v11 = (v5 - v10) >> 3;
    v5 = v10;
    do {
      v12 = v11 >> 1;
      v13 = v5 + 8 * (v11 >> 1);
      if (v4 >= *(_DWORD*)(*(_QWORD*)v13 + 8LL)) {
        v5 = v13 + 8;
        v12 = v11 + ~v12;
      }
      v11 = v12;
    } while (v12 != 0);
  }
  if (result == v5) {
    return 0;
  }
  if (result + 8 != v5) {
    v16 = (v5 - result) >> 3;
    v17 = *a4;
    do {
      v18 = v16 >> 1;
      v19 = result + 8 * (v16 >> 1);
      if (*(_DWORD*)(*(_QWORD*)v19 + 12LL) < v17) {
        result = v19 + 8;
        v18 = v16 + ~v18;
      }
      v16 = v18;
    } while (v18 != 0);
    if (result == v5 || *(_DWORD*)(*(_QWORD*)result + 12LL) != v17) {
      return 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
