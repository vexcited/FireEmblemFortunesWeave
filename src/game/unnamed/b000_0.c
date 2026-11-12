#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;

extern _QWORD GameData_1aff3d8[17];

extern double GameData_1aff460[23];

extern _UNKNOWN* GameData_1f50948;

extern __int64 (*GameData_1f50fd8[])();

extern __int64 (*GameData_1f547e8[])();

extern __int64 (*GameData_1f54818[])();

extern __int64 (*GameData_2110158[])();

extern __int64* GameData_212d480[2];

extern __int64* GameData_212e250;

extern __int64 GameData_212e2d0[2];

extern __int64 GameData_212e2d8;

extern _UNKNOWN** GameData_2132150;

extern __int64* GameData_21322d8[4];

extern __int64* GameData_21322e8[2];

extern __int64* GameData_21326a0[9];

extern __int64* GameData_21327a8;

extern __int64* GameData_2132b40[6];

extern __int64* GameData_2132bc8[3];

extern _UNKNOWN** GameData_2132db8[2];

extern _UNKNOWN** GameData_2132dc0;

extern _UNKNOWN** GameData_2132dd0[2];

extern _UNKNOWN** GameData_2132e00;

extern __int64 GameData_21340f0[2];

extern __int64* GameData_2134248[3];

extern __int64* GameData_2134488;

extern __int64* GameData_21344a8[3];

extern __int64* GameData_21344b0[2];

extern __int64* GameData_21344b8;

extern __int64* GameData_21344e8;

extern __int64* GameData_2134518[2];

extern __int64* GameData_2134520;

extern __int16* GameData_2134528[3];

extern __int64* GameData_2134530;

extern __int64* GameData_2134550;

extern int GameData_2140004;

extern _UNKNOWN GameData_214000c;

extern _UNKNOWN GameData_2140014;

extern _UNKNOWN GameData_214001c;

extern __int64 GameData_2177000;

extern _UNKNOWN GameData_21770d8;

extern char GameData_21770e0;

extern int GameData_21770f8;

extern _UNKNOWN GameData_2177108;

extern char GameData_2177110;

extern __int64 GameData_2177260;

extern _UNKNOWN GameData_21774d0;

extern int GameData_21774e0;

extern __int64 GameData_2178d78;

extern __int64 GameData_2178d80;

extern __int64 GameData_2178dc0;

extern __int64 GameData_2178dc8;

extern __int64 GameData_2178dd0;

extern __int64 GameData_2178dd8;

extern __int64 GameData_2178df0;

extern __int16 GameData_2178e18;

extern __int64 GameData_2178e38;

extern __int64 GameData_2178e60;

extern __int16 GameData_2178e70;

extern __int64 GameData_2178e90;

extern __int64 GameData_2178e98;

extern __int64 GameData_2198f88;

__int64 GameRoutine_1000(void);

__int64 GameRoutine_104020(__int64 result, __int64);

__int64 GameRoutine_104120(void);

__int64 GameRoutine_1046e0(_QWORD, _QWORD);

__int64 GameRoutine_1054e0(void);

long double GameRoutine_1056a0(_QWORD, _QWORD, const char*, ...);

__int64 GameRoutine_1070e0(_QWORD, _QWORD);

__int64 GameRoutine_1078a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_107b40(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_10a250(__int64, __int64);

__int64 GameRoutine_10c480(_QWORD, _QWORD, _QWORD, _QWORD);

__attribute__((swiftcall)) void GameRoutine_10df70(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);

__int64 GameRoutine_10e480(__int64, __int64);

__int64 GameRoutine_10e820(__int64);

__int64 GameRoutine_10f800(_QWORD, _QWORD);

__int64 GameRoutine_10fba0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_10fdd0(__int64, __int64);

__int64 GameRoutine_1100a0(void);

__int64 GameRoutine_112080(_QWORD, long double);

__int64 GameRoutine_112180(_QWORD, _QWORD);

__int64 GameRoutine_112290(_QWORD, float);

__int64 GameRoutine_112320(_QWORD);

__int64 GameRoutine_117bc0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_118ff0(_QWORD);

__int64 GameRoutine_120360(_QWORD, _QWORD, _QWORD, float);

__int64 GameRoutine_126150(void);

__int64 GameRoutine_1261b0(_QWORD);

__int64 GameRoutine_17210(_QWORD);

__int64 GameRoutine_17220(_QWORD);

__int64 GameRoutine_17a20(_QWORD);

__int64 GameRoutine_17dd0(void);

__int64 GameRoutine_18e0(double*, unsigned __int8**, unsigned __int8*,
                         unsigned __int8*);

__int64 GameRoutine_190020(_QWORD, _QWORD);

__int64 GameRoutine_190200(_QWORD, _QWORD);

__int64 GameRoutine_190240(_QWORD);

__int64 GameRoutine_1905a40(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_190a10(void);

__int64 GameRoutine_190b80(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_190d360(void);

__int64 GameRoutine_19e10(_QWORD);

long double GameRoutine_19ee0(_QWORD);

__int64 GameRoutine_1a09b70(_QWORD);

__int64 GameRoutine_1a09b80(_QWORD);

__int64 GameRoutine_1a09bd0(_QWORD);

__int64 GameRoutine_1a09be0(_QWORD, _QWORD);

__int64 GameRoutine_1a09cb0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09d30(_QWORD, _QWORD);

__int64 GameRoutine_1a09f60(_QWORD);

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_1a0a040(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0a070(_QWORD, _QWORD);

__int64 GameRoutine_1a0b030(void);

__int64 GameRoutine_1a0b740(_QWORD, _QWORD);

__int64 GameRoutine_1a0b840(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b930(void);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0ba00(_QWORD);

__int64 GameRoutine_1a0ba10(_QWORD);

__int64 GameRoutine_1a0ba20(_QWORD);

__int64 GameRoutine_1a0ba30(_QWORD);

__int64 GameRoutine_1a0ba40(_QWORD, _QWORD);

__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1c480(_QWORD, _QWORD);

__int64 GameRoutine_1f220(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_2870(__int64 result);

__int64 GameRoutine_2ad0(__int64*, __int64, __int64);

__int64 GameRoutine_2cc0(__int64*, char);

__int64 GameRoutine_3370(_QWORD);

__int64 GameRoutine_340(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_4e1b0(_QWORD);

__int64 GameRoutine_4e560(_QWORD);

__int64 GameRoutine_4e570(_QWORD);

__int64 GameRoutine_4e590(_QWORD);

__int64 GameRoutine_4e5a0(_QWORD);

__int64 GameRoutine_4e5b0(_QWORD);

__int64 GameRoutine_4e5d0(_QWORD);

__int64 GameRoutine_4e860(_QWORD);

__int64 GameRoutine_4e8a0(_QWORD);

__int64 GameRoutine_53680(_QWORD);

__int64 GameRoutine_9ea0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a3a260(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a3a3a0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_c30(_QWORD, _QWORD, _QWORD, _QWORD);

void GameRoutine_f4400();

void GameRoutine_f4860();

void GameRoutine_f4c20();

void GameRoutine_f5b80();

__int64 GameRoutine_f60(int, int);

__int64 GameRoutine_fb560(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_fc9a0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_fdf60(_QWORD, _QWORD);

__int64* GameHr_f7420(__int64* result, unsigned __int64);

__int64 Archive_105780(__int64, const char*, const char*, char);

__int64 FileManager_10e200(__int64 result, __int64);

__int64 GameRoutine_190200_alt1(__int64, char*) __asm__("GameRoutine_190200");

__int64 GameRoutine_190240_alt1(__int64) __asm__("GameRoutine_190240");

__int64 Manager_118260(__int64 result, const char*);

__int64 graphics_nvn_LoadProcedures(__int64, __int64 (*)(__int64, const char*));

__int64 graphics_nvn_secondary_LoadProcedures(__int64,
                                              __int64 (*)(__int64,
                                                          const char*));

__int64 gxc__5d160();

__int64 nn_os_LockMutex(__int64);

__int64 nn_os_UnlockMutex(__int64);

__int64 nvnBootstrapLoader(_QWORD);

__int64 snd_data_f0230(__int64, __int64, __int64);

__int64 snd_fnd_WeakHandle_get(__int64);

__int64 snd_fnd_WeakHandle_isValid(__int64*);

__int64 snd_fnd_WeakHandle_reset(__int64);

extern __int64 (*gxc_NvnDevice_vtable[])();

extern __int64* snd_g_memory_ptr[2];

extern __int64* snd_s_target_ptr;

extern __int64 snd_g_memory;

extern __int64 snd_s_target;

unsigned __int64
GameRoutine_190020_alt1(__int64*, const char*) __asm__("GameRoutine_190020");

__int64 GameHr_5ceb0(_QWORD* a1, __int64 a2);

__int64* GameHr_f2ce0(__int64 a1, __int64 a2, __int64* a3, __int64 a4);

__int64* GameHr_f33e0(__int64* result);

__int64 GameHr_f47f0();

__int64 GameHr_f4ae0();

__int64 GameHr_f5690();

__int64 GameHr_f6240();

__int64 GameHr_104420(__int64 result);

__int64 GameHr_1059c0(__int64 a1, __int64 a2);

__int64 GameHr_105ba0(__int64 a1);

__int64 GameHr_10a250(__int64 a1, __int64 a2);

__int64 GameHr_10eb50(__int64 a1, __int64 a2);

__int64 GameHr_10f070(__int64 a1, __int64* a2);

__int64 GameHr_10f520(__int64 a1);

__int64 GameHr_200()
{
  return GameRoutine_340(&GameData_1f50948, 0, GameData_2177000);
}

void GameHr_270() { __udf(0x8003u); }

__int64 GameHr_2b0() { return 0xFFFFFFFFLL; }

void GameHr_340() { ; }

__int64 GameHr_430()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21770d8,
                            memory_order_acquire) &
       1) != 0 ||
      (unsigned int)GameRoutine_1a09fd0(&GameData_21770d8) == 0) {
    return GameRoutine_1a09bd0((unsigned int)GameData_2140004);
  }
  GameRoutine_1a0a070(&GameData_2140004, 0);
  GameRoutine_1a09fe0(&GameData_21770d8);
  return GameRoutine_1a09bd0((unsigned int)GameData_2140004);
}

__int64 GameHr_4a0(_QWORD* a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                   _OWORD* a5)
{
  unsigned int* v10;
  unsigned int* v11;
  __int128 v12;
  unsigned int v13;
  _QWORD v15[4];

  v10 = (unsigned int*)GameRoutine_1a0b930();
  *v10 = 0;
  v11 = v10;
  v12 = a5[1];
  *(_OWORD*)v15 = *a5;
  *(_OWORD*)&v15[2] = v12;
  v13 = GameRoutine_1a09cb0(a2, a3, a4, v15);
  if ((v13 & 0x80000000) != 0) {
    return *v11;
  }
  if (a1 != nullptr) {
    *a1 = v13;
  }
  if (a3 <= v13) {
    return 34;
  }
  else {
    return 0;
  }
}

__int64 GameHr_b60(unsigned __int64* a1, __int64 a2, __int64 a3,
                   unsigned __int64 a4)
{
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 result;
  _BYTE v10[4];
  __int64 v11;

  if (a3 != 0) {
    v7 = a3 - 1;
    v8 = a3 - 5;
    if ((unsigned __int64)(a3 - 1) <= 3) {
      v8 = 0;
    }
    if (v7 > v8) {
      do {
        if (*(char*)(a2 + v7) > -65) {
          goto LABEL_11;
        }
        --v7;
      } while (v7 > v8);
      v7 = v8;
    }
  }
  else {
    v7 = 0;
  }
  while (1) {
  LABEL_11:
    if (v7 >= a4) {
      *a1 = a4;
      return 0;
    }
    LODWORD(result) = GameRoutine_c30(&v11, v10, a2 + v7, a4 - v7);
    if ((_DWORD)result != 0) {
      break;
    }
    v7 += v11;
  }
  *a1 = v7;
  if ((_DWORD)result == 34) {
    return 0;
  }
  else {
    return (unsigned int)result;
  }
}

__int64 GameHr_f30()
{
  __int64 result;

  if ((GameData_21770e0 & 1) != 0) {
    result = GameRoutine_1a0b030();
    GameData_21770e0 = 0;
  }
  return result;
}

__int64 GameHr_f60(int a1, int a2)
{
  __int64 v3;

  if (a1 != 1) {
    return 22;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2177108,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_2177108) != 0) {
    GameData_21770f8 = GameRoutine_1000();
    GameRoutine_1a09fe0(&GameData_2177108);
  }
  v3 = GameRoutine_1a0ba20((unsigned int)GameData_21770f8);
  if (v3 != 0) {
    *(_DWORD*)(v3 + 36) = a2 != 0;
  }
  return 0;
}

__int64 GameHr_1000()
{
  unsigned int v1;

  v1 = -1;
  if ((unsigned int)GameRoutine_1a0ba40(&v1, 0) == 0) {
    GameRoutine_1a0b740(v1, 0);
  }
  return v1;
}

__int64 GameHr_1050()
{
  GameRoutine_f60(1, 1);
  GameRoutine_1a0ba30(&GameData_214000c);
  GameRoutine_f60(1, 0);
  GameData_2177110 = 1;
  GameRoutine_1a0ba10(&GameData_214000c);
  GameRoutine_1a0ba00(&GameData_2140014);
  return GameRoutine_1a0ba00(&GameData_214001c);
}

__int64 GameHr_1fa0(__int64 a1, int a2)
{
  if (*(_DWORD*)(a1 + 8) != -1) {
    return 114;
  }
  *(_DWORD*)(a1 + 8) = 0;
  *(_BYTE*)(a1 + 12) = a2 == 2;
  return 0;
}

__int64 GameHr_1fd0(__int64 a1, __int64 a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 8);
  if (v2 != 0) {
    if (v2 != -1) {
      return 22;
    }
    *(_BYTE*)(a1 + 12) = 0;
    *(_DWORD*)(a1 + 8) = 0;
  }
  if (a2 == 0) {
    return 22;
  }
  if (*(_QWORD*)a1 != 0) {
    return 17;
  }
  *(_QWORD*)a1 = a2;
  return 0;
}

bool GameHr_28c0(__int64 a1, unsigned __int64 a2)
{
  _BOOL8 result;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;

  if (a2 >= 0x401) {
    if (*(_DWORD*)(a1 + 60) == 0) {
      *(_DWORD*)(a1 + 60) = 22;
      return false;
    }
    return false;
  }
  if ((*(_BYTE*)(a1 + 57) & 1) != 0) {
    if (*(_QWORD*)(a1 + 40) == 0 &&
        *(_QWORD*)(a1 + 16) == *(_QWORD*)(a1 + 24) &&
        (v14 = a1, v13 = a2, GameRoutine_2870(a1), a1 = v14, a2 = v13,
         *(_QWORD*)(v14 + 16) == *(_QWORD*)(v14 + 24))) {
      result = false;
      if (*(_DWORD*)(v14 + 60) == 0) {
        *(_DWORD*)(v14 + 60) = 9;
      }
    }
    else if (*(_BYTE*)(a1 + 56) == 1) {
      *(_QWORD*)(a1 + 32) = *(_QWORD*)(a1 + 16);
      return true;
    }
    else {
      v3 = *(_QWORD*)(a1 + 16);
      v4 = *(_QWORD*)(a1 + 24) - v3;
      if (a2 <= v4) {
        *(_QWORD*)(a1 + 32) = v3;
        return true;
      }
      else {
        v5 = a2;
        v6 = a1;
        GameRoutine_1a0b940(*(_QWORD*)(a1 + 40), *(_QWORD*)(a1 + 40) + v3, v4);
        v7 = *(_QWORD*)(v6 + 16);
        v8 = *(_QWORD*)(v6 + 8) + v7;
        v9 = *(_QWORD*)(v6 + 24) - v7;
        *(_QWORD*)(v6 + 8) = v8;
        v10 = *(_QWORD*)(v6 + 48);
        *(_QWORD*)(v6 + 16) = 0;
        *(_QWORD*)(v6 + 24) = v9;
        if (v5 <= v10) {
          v11 = (*(__int64 (**)(__int64, __int64, unsigned __int64))(
              *(_QWORD*)v6 + 16LL))(v6, *(_QWORD*)(v6 + 40) + v9, v10 - v9);
          v12 = *(_QWORD*)(v6 + 16);
          *(_QWORD*)(v6 + 24) += v11;
          *(_QWORD*)(v6 + 32) = v12;
          return *(_DWORD*)(v6 + 60) == 0;
        }
        else {
          result = false;
          if (*(_DWORD*)(v6 + 60) == 0) {
            *(_DWORD*)(v6 + 60) = 5;
          }
        }
      }
    }
  }
  else {
    if (*(_DWORD*)(a1 + 60) != 0) {
      return false;
    }
    *(_DWORD*)(a1 + 60) = 95;
    return false;
  }
  return result;
}

__int64 GameHr_33e0(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _DWORD* v11;

  if (a2 == 0) {
    return 1;
  }
  v2 = *(_QWORD*)(a1 + 80);
  v3 = a1 + 152;
  v4 = a1 + 88;
  v5 = a2;
  while (1) {
    if (v2 + 2 > v3) {
      v7 = *(_QWORD*)(a1 + 8);
      v8 = v2 - v4;
      *(_QWORD*)(a1 + 80) = v4;
      if (v2 - v4 < 0) {
        break;
      }
      v9 = *(_QWORD*)(v7 + 16);
      if ((unsigned __int64)(v9 + v8) > *(_QWORD*)(v7 + 32)) {
        if ((GameRoutine_2ad0((__int64*)v7, v4, v8) & 1) == 0) {
          goto LABEL_13;
        }
      }
      else {
        GameRoutine_1a0b950(*(_QWORD*)(v7 + 24) + v9, v4, v8);
        *(_QWORD*)(v7 + 16) += v8;
      }
    }
    --v5;
    **(_WORD**)(a1 + 80) = 8224;
    v2 = *(_QWORD*)(a1 + 80) + 2LL;
    *(_QWORD*)(a1 + 80) = v2;
    if (v5 == 0) {
      return 1;
    }
  }
  if (*(_DWORD*)(v7 + 40) == 0) {
    *(_DWORD*)(v7 + 40) = 22;
  }
LABEL_13:
  v11 = (_DWORD*)GameRoutine_3370(a1 + 16);
  if (*(_DWORD*)a1 == 0) {
    *(_DWORD*)a1 = 8;
  }
  *v11 = 5;
  return 0;
}

__int64 GameHr_3990(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  v1 = *a1;
  if (*a1 == 0) {
    return 22;
  }
  v2 = *(_QWORD*)(v1 + 8);
  if (v2 == 0) {
    return 22;
  }
  v3 = *(_QWORD*)(v1 + 80);
  v4 = v1 + 88;
  *(_QWORD*)(v1 + 8) = 0;
  *(_DWORD*)v1 = 0;
  v5 = v3 - (v1 + 88);
  *(_DWORD*)(v1 + 20) = 0;
  *(_QWORD*)(v1 + 80) = v1 + 88;
  if (v5 < 0) {
    result = *(unsigned int*)(v2 + 40);
    if ((_DWORD)result == 0) {
      *(_DWORD*)(v2 + 40) = 22;
      return 22;
    }
  }
  else {
    v6 = *(_QWORD*)(v2 + 16);
    if ((unsigned __int64)(v6 + v5) <= *(_QWORD*)(v2 + 32)) {
      GameRoutine_1a0b950(*(_QWORD*)(v2 + 24) + v6, v4, v5);
      *(_QWORD*)(v2 + 16) += v5;
      return 0;
    }
    else if ((GameRoutine_2ad0((__int64*)v2, v4, v5) & 1) != 0) {
      return 0;
    }
    else {
      return *(unsigned int*)(v2 + 40);
    }
  }
  return result;
}

__int64 GameHr_3cc0(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 result;
  char v9;

  v1 = *a1;
  v2 = *(_QWORD*)(*a1 + 8);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v1 + 80);
    v4 = v1 + 88;
    *(_QWORD*)(v1 + 80) = v1 + 88;
    v6 = v3 - (v1 + 88);
    if (v6 >= 0) {
      v7 = *(_QWORD*)(v2 + 16);
      if ((unsigned __int64)(v7 + v6) <= *(_QWORD*)(v2 + 32)) {
        GameRoutine_1a0b950(*(_QWORD*)(v2 + 24) + v7, v4, v6);
        *(_QWORD*)(v2 + 16) += v6;
      }
      else if ((GameRoutine_2ad0((__int64*)v2, v4, v6) & 1) == 0) {
      LABEL_13:
        result = 0;
        if (*(_DWORD*)*a1 == 0) {
          *(_DWORD*)*a1 = 8;
        }
        return result;
      }
      v9 = GameRoutine_2cc0(*(__int64**)(*a1 + 8), 1);
      result = 1;
      if ((v9 & 1) != 0) {
        return result;
      }
      goto LABEL_13;
    }
    if (*(_DWORD*)(v2 + 40) == 0) {
      *(_DWORD*)(v2 + 40) = 22;
    }
    goto LABEL_13;
  }
  if (*(_DWORD*)v1 != 0) {
    return 0;
  }
  *(_DWORD*)v1 = 14;
  return 0;
}

__int64 GameHr_98c0(__int64 a1, __int64 a2)
{
  __int64* v2;
  unsigned __int8* v3;
  __int64 v4;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  int v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  char v20;
  _QWORD* v21;
  __int64 v22;
  int v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  int v29;
  _BOOL4 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  int v37;
  unsigned __int64 v38;
  int v39;
  unsigned int v40;
  double v41;
  double v42;
  _QWORD* v43;
  __int64 v44;
  unsigned int v45;
  int v46;
  __int64 v47;
  unsigned __int64 v48;

  v2 = *(__int64**)(a1 + 8);
  v3 = *(unsigned __int8**)(a2 + 8);
  v4 = *(_QWORD*)(a1 + 48);
  v7 = (_QWORD*)*v2;
  v8 = *(_QWORD*)(*v2 + 16);
  if (v8 == *(_QWORD*)(*v2 + 24) &&
          (GameRoutine_2870(*v2), (v8 = v7[2]) == v7[3]) ||
      *(_BYTE*)(v7[5] + v8) != 45) {
    v9 = 0;
    v10 = 0;
    v11 = (_QWORD*)*v2;
    v12 = *(_QWORD*)(*v2 + 16);
    if (v12 != *(_QWORD*)(*v2 + 24)) {
      goto LABEL_5;
    }
  }
  else {
    v7[2] = v8 + 1;
    if (*(_QWORD*)(a1 + 48) == 0) {
      return 5;
    }
    v9 = 1;
    v10 = 1;
    *v3 = 45;
    v11 = (_QWORD*)*v2;
    v12 = *(_QWORD*)(*v2 + 16);
    if (v12 != *(_QWORD*)(*v2 + 24)) {
      goto LABEL_5;
    }
  }
  GameRoutine_2870((__int64)v11);
  v12 = v11[2];
  if (v12 == v11[3]) {
    goto LABEL_31;
  }
LABEL_5:
  if (*(_BYTE*)(v11[5] + v12) != 48) {
  LABEL_31:
    v34 = GameRoutine_9ea0(*v2, &v3[v9], v4 - v9, &v48);
    if (v34 == 0) {
      return 11;
    }
    v13 = v34 + v9;
    v14 = v34;
    if (v34 + v9 == v4) {
      return 5;
    }
    goto LABEL_8;
  }
  v11[2] = v12 + 1;
  if (v9 >= *(_QWORD*)(a1 + 48)) {
    return 5;
  }
  v13 = v9 + 1;
  v14 = 1;
  v48 = 0;
  v3[v9] = 48;
LABEL_8:
  v15 = (_QWORD*)*v2;
  v16 = *(_QWORD*)(*v2 + 16);
  if (v16 == *(_QWORD*)(*v2 + 24) &&
          (GameRoutine_2870(*v2), (v16 = v15[2]) == v15[3]) ||
      *(_BYTE*)(v15[5] + v16) != 46) {
    LODWORD(v18) = 0;
    v20 = 0;
    v21 = (_QWORD*)*v2;
    v22 = *(_QWORD*)(*v2 + 16);
    if (v22 == *(_QWORD*)(*v2 + 24)) {
      goto LABEL_36;
    }
    goto LABEL_18;
  }
  v15[2] = v16 + 1;
  if (v13 >= *(_QWORD*)(a1 + 48)) {
    return 5;
  }
  v17 = v13 + 1;
  v3[v13] = 46;
  v18 = GameRoutine_9ea0(*v2, &v3[v13 + 1], v4 - (v13 + 1), &v47);
  if (v18 != 0) {
    v13 = v18 + v17;
    if (v18 + v17 == v4) {
      return 5;
    }
    v14 += v18;
    if (v14 > 0x10) {
      LODWORD(v18) = 0;
      v20 = 1;
      v21 = (_QWORD*)*v2;
      v22 = *(_QWORD*)(*v2 + 16);
      if (v22 == *(_QWORD*)(*v2 + 24)) {
        goto LABEL_36;
      }
    }
    else {
      v48 = v47 + GameData_1aff3d8[v18] * v48;
      v20 = 1;
      v21 = (_QWORD*)*v2;
      v22 = *(_QWORD*)(*v2 + 16);
      if (v22 == *(_QWORD*)(*v2 + 24)) {
      LABEL_36:
        v35 = v18;
        GameRoutine_2870((__int64)v21);
        v22 = v21[2];
        LODWORD(v18) = v35;
        if (v22 == v21[3]) {
          goto LABEL_37;
        }
      }
    }
  LABEL_18:
    v23 = *(unsigned __int8*)(v21[5] + v22);
    if ((v23 & 0xFFFFFFDF) == 0x45) {
      if (v13 >= *(_QWORD*)(a1 + 48)) {
        return 5;
      }
      v3[v13] = v23;
      v24 = v13 + 1;
      v25 = *v2;
      v26 = *(_QWORD*)(*v2 + 16);
      if (v26 != *(_QWORD*)(*v2 + 24) ||
          (v37 = v18, GameRoutine_2870(*v2), v26 = *(_QWORD*)(v25 + 16),
           LODWORD(v18) = v37, v26 != *(_QWORD*)(v25 + 24))) {
        *(_QWORD*)(v25 + 16) = v26 + 1;
      }
      v27 = (_QWORD*)*v2;
      v46 = v18;
      v28 = *(_QWORD*)(*v2 + 16);
      if (v28 == *(_QWORD*)(*v2 + 24) &&
              (GameRoutine_2870((__int64)v27), (v28 = v27[2]) == v27[3]) ||
          (v29 = *(unsigned __int8*)(v27[5] + v28), v30 = v29 == 45,
           v29 != 45) &&
              v29 != 43) {
        v30 = false;
        v31 = v13 + 1;
      }
      else {
        if (v24 >= *(_QWORD*)(a1 + 48)) {
          return 5;
        }
        v3[v24] = v29;
        v31 = v13 + 2;
        v32 = *v2;
        v33 = *(_QWORD*)(*v2 + 16);
        if (v33 != *(_QWORD*)(*v2 + 24) ||
            (GameRoutine_2870(*v2),
             (v33 = *(_QWORD*)(v32 + 16)) != *(_QWORD*)(v32 + 24))) {
          *(_QWORD*)(v32 + 16) = v33 + 1;
        }
      }
      v38 = GameRoutine_9ea0(*v2, &v3[v31], v4 - v31, &v47);
      if (v38 == 0) {
        return 11;
      }
      v13 = v38 + v31;
      if (v13 == v4) {
        return 5;
      }
      v39 = v47;
      if (v30) {
        v39 = -(int)v47;
      }
      if (v38 >= 3) {
        v36 = 1000;
      }
      else {
        v36 = v39;
      }
      if ((*(_BYTE*)(a1 + 76) & 4) == 0) {
        LODWORD(v18) = v46;
      LABEL_70:
        if (v14 > 0x10 ||
            (v40 = v36 - v18, (unsigned int)(v36 - v18 + 22) > 0x2C) ||
            v48 >> 53 != 0) {
          if ((unsigned int)GameRoutine_18e0((double*)&v47, nullptr, v3,
                                             &v3[v13]) != 0) {
            return 9;
          }
          *(_QWORD*)(a2 + 16) = v47;
          *(_DWORD*)a2 = 10;
          if (*(_QWORD*)(a1 + 24) != 0) {
            return 0;
          }
        }
        else {
          v41 = (double)v48;
          if ((v40 & 0x80000000) != 0) {
            v42 = v41 / GameData_1aff460[(unsigned int)(v18 - v36)];
          }
          else {
            v42 = GameData_1aff460[v40] * v41;
          }
          if (v10 != 0) {
            v42 = -v42;
          }
          *(double*)(a2 + 16) = v42;
          *(_DWORD*)a2 = 10;
          if (*(_QWORD*)(a1 + 24) != 0) {
            return 0;
          }
        }
        goto LABEL_86;
      }
    LABEL_75:
      if (v13 >= *(_QWORD*)(a1 + 48)) {
        return 5;
      }
      v3[v13] = 0;
      *(_DWORD*)a2 = 4;
      if (*(_QWORD*)(a1 + 24) != 0) {
        return 0;
      }
    LABEL_86:
      v43 = (_QWORD*)*v2;
      v44 = *(_QWORD*)(*v2 + 16);
      if (v44 != *(_QWORD*)(*v2 + 24) ||
          (GameRoutine_2870(*v2), (v44 = v43[2]) != v43[3])) {
        v45 = *(unsigned __int8*)(v43[5] + v44);
        if ((v45 > 0x20 || ((1LL << v45) & 0x100002600LL) == 0) && v45 != 123 &&
            v45 != 91) {
          return 11;
        }
      }
      return 0;
    }
  LABEL_37:
    if ((*(_BYTE*)(a1 + 76) & 4) == 0) {
      if ((v20 & 1) != 0) {
        v36 = 0;
      }
      else if (v10 != 0) {
        if (v14 < 0xA || v14 == 10 && v48 <= 0x80000000) {
          *(_DWORD*)(a2 + 16) = -(int)v48;
          *(_DWORD*)a2 = 5;
          if (*(_QWORD*)(a1 + 24) != 0) {
            return 0;
          }
          goto LABEL_86;
        }
        if (v14 < 0x13 || (v36 = 0, v14 == 19) && v48 <= 0x8000000000000000LL) {
          *(_QWORD*)(a2 + 16) = -(__int64)v48;
          *(_DWORD*)a2 = 7;
          if (*(_QWORD*)(a1 + 24) != 0) {
            return 0;
          }
          goto LABEL_86;
        }
      }
      else {
        if (v14 < 0xA || v14 == 10 && HIDWORD(v48) == 0) {
          *(_DWORD*)(a2 + 16) = v48;
          *(_DWORD*)a2 = 6;
          if (*(_QWORD*)(a1 + 24) != 0) {
            return 0;
          }
          goto LABEL_86;
        }
        if (v14 < 0x14 ||
            (v36 = 0, v14 == 20) && *v3 == 49 && v48 >= 0x8AC7230489E80000LL) {
          *(_QWORD*)(a2 + 16) = v48;
          *(_DWORD*)a2 = 8;
          if (*(_QWORD*)(a1 + 24) != 0) {
            return 0;
          }
          goto LABEL_86;
        }
      }
      goto LABEL_70;
    }
    goto LABEL_75;
  }
  return 11;
}

_BYTE* GameHr_9ea0(__int64 a1, _BYTE* a2, __int64 a3, __int64* a4)
{
  __int64 v5;
  __int64 v6;
  _BYTE* v9;
  __int64 v10;
  _BYTE* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int8* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int128 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int16 v44;
  int v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int128 v55;
  __int128 v56;
  __int128 v57;
  __int128 v58;
  __int64 v60;

  v6 = *(_QWORD*)(a1 + 16);
  v5 = *(_QWORD*)(a1 + 24);
  if (v6 == v5) {
    v60 = a3;
    GameRoutine_2870(a1);
    v6 = *(_QWORD*)(a1 + 16);
    v5 = *(_QWORD*)(a1 + 24);
    if (v6 == v5) {
      v10 = 0;
      v11 = a2;
      goto LABEL_66;
    }
    a3 = v60;
  }
  v9 = &a2[a3];
  v10 = 0;
  v11 = a2;
  while (1) {
    v14 = *(_QWORD*)(a1 + 40);
    v15 = (unsigned __int8*)(v14 + v5);
    v16 = (unsigned __int8*)(v14 + v6);
    v17 = v5 - v6;
    if (v9 - v11 < v17) {
      v17 = v9 - v11;
    }
    if (v17 <= 0x14) {
      if (v17 != 0) {
        v10 = 0;
        v41 = 0;
        while (1) {
          v43 = v16[v41];
          if ((unsigned __int64)(v43 - 48) > 9) {
            break;
          }
          v10 = v43 - 48 + 10 * v10;
          v11[v41++] = v43;
          if (v17 == v41) {
          LABEL_36:
            v41 = v17;
            goto LABEL_38;
          }
        }
      }
      else {
        v41 = 0;
        v10 = 0;
      }
      goto LABEL_38;
    }
    v18 = *v16;
    if ((unsigned __int64)(v18 - 48) > 9) {
      goto LABEL_39;
    }
    v19 = v16[1] - 48LL;
    if (v19 > 9) {
      *v11++ = v18;
      v10 = v18 - 48 + 10 * v10;
      ++v16;
      goto LABEL_39;
    }
    v20 = v19 + 10 * (v18 - 48 + 10 * v10);
    v21 = v16 + 2;
    v22 = v16[2] - 48LL;
    if (v22 > 9) {
      *(_WORD*)v11 = *(_WORD*)v16;
      v11 += 2;
    LABEL_63:
      v10 = v20;
      v16 = v21;
      goto LABEL_39;
    }
    v20 = v22 + 10 * v20;
    v21 = v16 + 3;
    v23 = v16[3] - 48LL;
    if (v23 > 9) {
      v44 = *(_WORD*)v16;
      v11[2] = v16[2];
      *(_WORD*)v11 = v44;
      v11 += 3;
      goto LABEL_63;
    }
    v20 = v23 + 10 * v20;
    v21 = v16 + 4;
    v24 = v16[4] - 48LL;
    if (v24 > 9) {
      *(_DWORD*)v11 = *(_DWORD*)v16;
      v11 += 4;
      goto LABEL_63;
    }
    v20 = v24 + 10 * v20;
    v21 = v16 + 5;
    v25 = v16[5] - 48LL;
    if (v25 > 9) {
      v45 = *(_DWORD*)v16;
      v11[4] = v16[4];
      *(_DWORD*)v11 = v45;
      v11 += 5;
      goto LABEL_63;
    }
    v20 = v25 + 10 * v20;
    v21 = v16 + 6;
    v26 = v16[6] - 48LL;
    if (v26 > 9) {
      v46 = *(_DWORD*)v16;
      *((_WORD*)v11 + 2) = *((_WORD*)v16 + 2);
      *(_DWORD*)v11 = v46;
      v11 += 6;
      goto LABEL_63;
    }
    v20 = v26 + 10 * v20;
    v21 = v16 + 7;
    v27 = v16[7] - 48LL;
    if (v27 > 9) {
      v47 = *(_DWORD*)v16;
      *(_DWORD*)(v11 + 3) = *(_DWORD*)(v16 + 3);
      *(_DWORD*)v11 = v47;
      v11 += 7;
      goto LABEL_63;
    }
    v20 = v27 + 10 * v20;
    v21 = v16 + 8;
    v28 = v16[8] - 48LL;
    if (v28 > 9) {
      *(_QWORD*)v11 = *(_QWORD*)v16;
      v11 += 8;
      goto LABEL_63;
    }
    v20 = v28 + 10 * v20;
    v21 = v16 + 9;
    v29 = v16[9] - 48LL;
    if (v29 > 9) {
      v48 = *(_QWORD*)v16;
      v11[8] = v16[8];
      *(_QWORD*)v11 = v48;
      v11 += 9;
      goto LABEL_63;
    }
    v20 = v29 + 10 * v20;
    v21 = v16 + 10;
    v30 = v16[10] - 48LL;
    if (v30 > 9) {
      v49 = *(_QWORD*)v16;
      *((_WORD*)v11 + 4) = *((_WORD*)v16 + 4);
      *(_QWORD*)v11 = v49;
      v11 += 10;
      goto LABEL_63;
    }
    v20 = v30 + 10 * v20;
    v21 = v16 + 11;
    v31 = v16[11] - 48LL;
    if (v31 > 9) {
      v50 = *(_QWORD*)v16;
      *(_DWORD*)(v11 + 7) = *(_DWORD*)(v16 + 7);
      *(_QWORD*)v11 = v50;
      v11 += 11;
      goto LABEL_63;
    }
    v20 = v31 + 10 * v20;
    v21 = v16 + 12;
    v32 = v16[12] - 48LL;
    if (v32 > 9) {
      v51 = *(_QWORD*)v16;
      *((_DWORD*)v11 + 2) = *((_DWORD*)v16 + 2);
      *(_QWORD*)v11 = v51;
      v11 += 12;
      goto LABEL_63;
    }
    v20 = v32 + 10 * v20;
    v21 = v16 + 13;
    v33 = v16[13] - 48LL;
    if (v33 > 9) {
      v52 = *(_QWORD*)v16;
      *(_QWORD*)(v11 + 5) = *(_QWORD*)(v16 + 5);
      *(_QWORD*)v11 = v52;
      v11 += 13;
      goto LABEL_63;
    }
    v20 = v33 + 10 * v20;
    v21 = v16 + 14;
    v34 = v16[14] - 48LL;
    if (v34 > 9) {
      v53 = *(_QWORD*)v16;
      *(_QWORD*)(v11 + 6) = *(_QWORD*)(v16 + 6);
      *(_QWORD*)v11 = v53;
      v11 += 14;
      goto LABEL_63;
    }
    v20 = v34 + 10 * v20;
    v21 = v16 + 15;
    v35 = v16[15] - 48LL;
    if (v35 > 9) {
      v54 = *(_QWORD*)v16;
      *(_QWORD*)(v11 + 7) = *(_QWORD*)(v16 + 7);
      *(_QWORD*)v11 = v54;
      v11 += 15;
      goto LABEL_63;
    }
    v20 = v35 + 10 * v20;
    v21 = v16 + 16;
    v36 = v16[16] - 48LL;
    if (v36 > 9) {
      *(_OWORD*)v11 = *(_OWORD*)v16;
      v11 += 16;
      goto LABEL_63;
    }
    v20 = v36 + 10 * v20;
    v21 = v16 + 17;
    v37 = v16[17] - 48LL;
    if (v37 > 9) {
      v55 = *(_OWORD*)v16;
      v11[16] = v16[16];
      *(_OWORD*)v11 = v55;
      v11 += 17;
      goto LABEL_63;
    }
    v20 = v37 + 10 * v20;
    v21 = v16 + 18;
    v38 = v16[18] - 48LL;
    if (v38 > 9) {
      v56 = *(_OWORD*)v16;
      *((_WORD*)v11 + 8) = *((_WORD*)v16 + 8);
      *(_OWORD*)v11 = v56;
      v11 += 18;
      goto LABEL_63;
    }
    v20 = v38 + 10 * v20;
    v21 = v16 + 19;
    v39 = v16[19] - 48LL;
    if (v39 > 9) {
      v57 = *(_OWORD*)v16;
      *(_DWORD*)(v11 + 15) = *(_DWORD*)(v16 + 15);
      *(_OWORD*)v11 = v57;
      v11 += 19;
      goto LABEL_63;
    }
    if ((unsigned __int64)v16[20] - 58 >= 0xFFFFFFFFFFFFFFF6LL) {
      v40 = *(_OWORD*)v16;
      *(_QWORD*)(v11 + 13) = *(_QWORD*)(v16 + 13);
      v41 = 21;
      *(_OWORD*)v11 = v40;
      if (v17 != 21) {
        while (1) {
          v42 = v16[v41];
          if ((unsigned __int64)(v42 - 58) < 0xFFFFFFFFFFFFFFF6LL) {
            break;
          }
          v11[v41++] = v42;
          if (v17 == v41) {
            goto LABEL_36;
          }
        }
      }
    LABEL_38:
      v11 += v41;
      v16 += v41;
      goto LABEL_39;
    }
    v58 = *(_OWORD*)v16;
    v10 = v39 + 10 * v20;
    *((_DWORD*)v11 + 4) = *((_DWORD*)v16 + 4);
    v16 += 20;
    *(_OWORD*)v11 = v58;
    v11 += 20;
  LABEL_39:
    if (v15 != v16) {
      break;
    }
    *(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 24);
    if (*(_DWORD*)(a1 + 60) != 0) {
      goto LABEL_66;
    }
    v5 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 16LL))(
        a1, *(_QWORD*)(a1 + 40), *(_QWORD*)(a1 + 48));
    if (v5 != 0) {
      v12 = *(_QWORD*)(a1 + 24);
      v13 = *(_QWORD*)(a1 + 8);
      v6 = 0;
      *(_QWORD*)(a1 + 24) = v5;
      *(_QWORD*)(a1 + 32) = -1;
      *(_QWORD*)(a1 + 8) = v13 + v12;
      *(_QWORD*)(a1 + 16) = 0;
    }
    else {
      v6 = *(_QWORD*)(a1 + 16);
      v5 = *(_QWORD*)(a1 + 24);
      if (v6 == v5) {
        goto LABEL_66;
      }
    }
  }
  *(_QWORD*)(a1 + 16) = &v16[-*(_QWORD*)(a1 + 40)];
LABEL_66:
  *a4 = v10;
  return (_BYTE*)(v11 - a2);
}

__int64 GameHr_b290(__int64* a1, __int64 a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;

  if (a2 < 0) {
    if (*((_DWORD*)a1 + 15) == 0) {
      *((_DWORD*)a1 + 15) = 22;
    }
    return 0;
  }
  else {
    v4 = a1[2];
    v3 = a1[3];
    v2 = a1 + 2;
    if (v3 >= v4 + a2) {
      *v2 = v4 + a2;
      return a2;
    }
    else {
      v5 = v3 - v4;
      v7 = *a1;
      v6 = a1[1];
      *v2 = 0;
      a1[3] = 0;
      a1[1] = v6 + v3;
      v9 = (*(__int64 (**)(__int64*, __int64))(v7 + 32))(a1, a2 - v5);
      v10 = a1[1] + v9;
      a1[1] = v10;
      return v9 + v5;
    }
  }
}

__int64 GameHr_dbf0(unsigned __int8 a1)
{
  __int64 v1;

  v1 = 13;
  if (a1 == 129) {
    v1 = 0x100000000LL;
  }
  if (a1 == 1) {
    return 0;
  }
  else {
    return v1;
  }
}

unsigned __int64 GameHr_dc10(unsigned __int8 a1, __int64 a2)
{
  float v2;
  __int64 v3;
  unsigned int v5;
  float v6;
  __int64 v7;

  if (a1 > 3u) {
    if (a1 == 4) {
      return (unsigned __int64)(unsigned int)a2 << 32;
    }
    if (a1 == 5) {
      *(float*)&v5 = *(double*)&a2;
      return (unsigned __int64)v5 << 32;
    }
    return 13;
  }
  if (a1 != 2) {
    if (a1 == 3) {
      v2 = (float)a2;
      v3 = 34;
      if ((unsigned __int64)(a2 - 16777217) < 0xFFFFFFFFFDFFFFFFLL) {
        v2 = 0.0;
      }
      else {
        v3 = 0;
      }
      return v3 | ((unsigned __int64)LODWORD(v2) << 32);
    }
    return 13;
  }
  v6 = (float)(unsigned __int64)a2;
  v7 = 34;
  if ((unsigned __int64)a2 > 0x1000000) {
    v6 = 0.0;
  }
  else {
    v7 = 0;
  }
  return v7 | ((unsigned __int64)LODWORD(v6) << 32);
}

double GameHr_dcd0(unsigned __int8 a1, __int64 a2)
{
  double result;

  result = 0.0;
  if (a1 > 3u) {
    if (a1 == 5) {
      result = *(double*)&a2;
    }
    if (a1 == 4) {
      return *(float*)&a2;
    }
  }
  else if (a1 == 2) {
    if ((unsigned __int64)a2 <= 0x20000000000000LL) {
      return (float)(unsigned __int64)a2;
    }
  }
  else if (a1 == 3 && (unsigned __int64)(a2 - 0x20000000000001LL) >=
                          0xFFBFFFFFFFFFFFFFLL) {
    return (float)a2;
  }
  return result;
}

__int64 GameHr_177e0(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = a1[3];
  *a1 = GameData_1f50fd8;
  a1[1] = 0;
  if (v1 != 0) {
    v2 = a1;
    v3 = GameRoutine_19e10(a1);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v3 + 40LL))(
        v3, v1, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
    a1 = v2;
  }
  return GameRoutine_4e8a0(a1);
}

__int64 GameHr_17840(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  v2 = a1[3];
  *a1 = GameData_21327a8 + 2;
  a1[1] = 0;
  if (v2 != 0) {
    v3 = GameRoutine_19e10(a1);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v3 + 40LL))(
        v3, v2, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  GameRoutine_4e8a0(a1);
  return GameRoutine_4e860(a1);
}

__int64 GameHr_19e10()
{
  __int64 result;

  result = GameData_2177260;
  if (GameData_2177260 == 0) {
    result = GameRoutine_190d360();
    GameData_2177260 = result;
    if (result == 0) {
      GameRoutine_1a0b840("_instance",
                          "/Program/Externals/Spine/src/spine/Extension.cpp",
                          47, "getInstance");
      __udf(0);
    }
  }
  return result;
}

__int64 GameHr_1eec0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  bool v12;

  v2 = a1 + 16;
  if (*(_QWORD*)(a2 + 8) == 0) {
    GameRoutine_1a0b840(
        "name.length() > 0",
        "/Program/Externals/Spine/include\\spine/ContainerUtil.h", 81,
        "findWithDataName");
    __udf(0);
  }
  v3 = v2;
  if (*(_QWORD*)(v2 + 8) == 0) {
    return 0;
  }
  v5 = 0;
  while (1) {
    v6 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 8 * v5);
    v7 = GameRoutine_17210(v6);
    v8 = GameRoutine_17a20(v7);
    v9 = *(_QWORD*)(v8 + 16);
    v10 = *(_QWORD*)(a2 + 16);
    if (v9 == v10) {
      break;
    }
    v11 = *(_QWORD*)(v8 + 8) != *(_QWORD*)(a2 + 8) || v9 == 0;
    v12 = v11 || v10 == 0;
    if (!v12 && (unsigned int)GameRoutine_1a09d30(v9, v10) == 0) {
      break;
    }
    if ((unsigned __int64)++v5 >= *(_QWORD*)(v3 + 8)) {
      return 0;
    }
  }
  return v6;
}

__int64 GameHr_1efd0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  bool v12;

  v2 = a1 + 48;
  if (*(_QWORD*)(a2 + 8) == 0) {
    GameRoutine_1a0b840(
        "name.length() > 0",
        "/Program/Externals/Spine/include\\spine/ContainerUtil.h", 81,
        "findWithDataName");
    __udf(0);
  }
  v3 = v2;
  if (*(_QWORD*)(v2 + 8) == 0) {
    return 0;
  }
  v5 = 0;
  while (1) {
    v6 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 8 * v5);
    v7 = GameRoutine_4e1b0(v6);
    v8 = GameRoutine_4e570(v7);
    v9 = *(_QWORD*)(v8 + 16);
    v10 = *(_QWORD*)(a2 + 16);
    if (v9 == v10) {
      break;
    }
    v11 = *(_QWORD*)(v8 + 8) != *(_QWORD*)(a2 + 8) || v9 == 0;
    v12 = v11 || v10 == 0;
    if (!v12 && (unsigned int)GameRoutine_1a09d30(v9, v10) == 0) {
      break;
    }
    if ((unsigned __int64)++v5 >= *(_QWORD*)(v3 + 8)) {
      return 0;
    }
  }
  return v6;
}

__int64 GameHr_4dda0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v5;
  __int64 v6;
  __int64* v7;
  long double v8;
  __int64 v9;
  long double v10;
  __int64 v11;
  long double v12;
  __int64 v13;
  long double v14;
  __int64 v15;
  long double v16;
  __int64 v17;
  long double v18;
  __int64 v19;
  long double v20;
  __int64 v21;
  long double v22;
  char v23;
  __int64 v24;
  _DWORD* v25;
  long double v26;
  __int64 v27;
  long double v28;
  __int64 v29;
  long double v30;
  __int64 v31;
  long double v32;
  int v33;
  _DWORD* v34;
  long double v35;
  __int64 v36;
  long double v37;
  __int64 v38;
  long double v39;
  __int64 v40;
  long double v41;
  __int64 result;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 vars0;
  __int64 vars0a;
  __int64 vars0b;
  __int64 _28;

  v5 = GameData_2132b40[0];
  *(_QWORD*)(a1 + 16) = a3;
  *(_QWORD*)a1 = v5 + 2;
  *(_QWORD*)(a1 + 8) = a2;
  v6 = GameRoutine_17220(a3);
  v7 = GameData_21322d8[0] + 2;
  *(_QWORD*)(a1 + 24) = v6;
  *(_QWORD*)(a1 + 32) = v7;
  *(_QWORD*)(a1 + 40) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 48) = 0x3F8000003F800000LL;
  v8 = GameRoutine_19ee0(v6);
  *(_DWORD*)(a1 + 40) = LODWORD(v8);
  v10 = GameRoutine_19ee0(v9);
  *(_DWORD*)(a1 + 44) = LODWORD(v10);
  v12 = GameRoutine_19ee0(v11);
  *(_DWORD*)(a1 + 48) = LODWORD(v12);
  v14 = GameRoutine_19ee0(v13);
  *(_DWORD*)(a1 + 52) = LODWORD(v14);
  *(_QWORD*)(a1 + 56) = v7;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  v16 = GameRoutine_19ee0(v15);
  *(_DWORD*)(a1 + 64) = LODWORD(v16);
  v18 = GameRoutine_19ee0(v17);
  *(_DWORD*)(a1 + 68) = LODWORD(v18);
  v20 = GameRoutine_19ee0(v19);
  *(_DWORD*)(a1 + 72) = LODWORD(v20);
  v22 = GameRoutine_19ee0(v21);
  *(_DWORD*)(a1 + 76) = LODWORD(v22);
  v23 = GameRoutine_4e5b0(a2) & 1;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_BYTE*)(a1 + 80) = v23;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 104) = GameData_2110158;
  *(_QWORD*)(a1 + 112) = 0;
  v24 = vars0;
  vars0a = _28;
  v25 = (_DWORD*)GameRoutine_4e590(*(_QWORD*)(a1 + 8));
  *(_DWORD*)(a1 + 40) = v25[2];
  *(_DWORD*)(a1 + 44) = v25[3];
  *(_DWORD*)(a1 + 48) = v25[4];
  *(_DWORD*)(a1 + 52) = v25[5];
  v26 = GameRoutine_19ee0(v25);
  *(_DWORD*)(a1 + 40) = LODWORD(v26);
  v28 = GameRoutine_19ee0(v27);
  *(_DWORD*)(a1 + 44) = LODWORD(v28);
  v30 = GameRoutine_19ee0(v29);
  *(_DWORD*)(a1 + 48) = LODWORD(v30);
  v32 = GameRoutine_19ee0(v31);
  v33 = *(unsigned __int8*)(a1 + 80);
  *(_DWORD*)(a1 + 52) = LODWORD(v32);
  if (v33 == 1) {
    v34 = (_DWORD*)GameRoutine_4e5a0(*(_QWORD*)(a1 + 8));
    *(_DWORD*)(a1 + 64) = v34[2];
    *(_DWORD*)(a1 + 68) = v34[3];
    *(_DWORD*)(a1 + 72) = v34[4];
    *(_DWORD*)(a1 + 76) = v34[5];
    v35 = GameRoutine_19ee0(v34);
    *(_DWORD*)(a1 + 64) = LODWORD(v35);
    v37 = GameRoutine_19ee0(v36);
    *(_DWORD*)(a1 + 68) = LODWORD(v37);
    v39 = GameRoutine_19ee0(v38);
    *(_DWORD*)(a1 + 72) = LODWORD(v39);
    v41 = GameRoutine_19ee0(v40);
    *(_DWORD*)(a1 + 76) = LODWORD(v41);
  }
  vars0b = v24;
  result = GameRoutine_4e5d0(*(_QWORD*)(a1 + 8));
  if (*(_QWORD*)(result + 8) != 0) {
    v43 = result;
    v44 = *(_QWORD*)(a1 + 8);
    v45 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a1 + 88) = 0;
    v46 = GameRoutine_4e560(v44);
    result = GameRoutine_1f220(v45, v46, v43);
    v47 = *(_QWORD*)(a1 + 88);
    if (v47 == result) {
      return result;
    }
    v48 = result;
    if (result != 0 && v47 != 0) {
      v50 = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      result = GameRoutine_1c480(v50, &GameData_21774d0);
      if ((result & 1) != 0) {
        v51 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 88) + 16LL))(
            *(_QWORD*)(a1 + 88));
        result = GameRoutine_1c480(v51, &GameData_21774d0);
        if ((result & 1) != 0) {
          v52 = GameRoutine_53680(v48);
          result = GameRoutine_53680(*(_QWORD*)(a1 + 88));
          if (v52 == result) {
            goto LABEL_16;
          }
        }
      }
    }
  }
  else {
    if (*(_QWORD*)(a1 + 88) == 0) {
      return result;
    }
    v48 = 0;
  }
  *(_QWORD*)(a1 + 112) = 0;
LABEL_16:
  *(_QWORD*)(a1 + 88) = v48;
  *(_DWORD*)(a1 + 100) = -1;
  return result;
}

__int64 GameHr_53060(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64* v4;
  __int64* v5;

  result = GameRoutine_17dd0();
  v3 = GameData_2132bc8[0];
  v4 = GameData_21326a0[0];
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  v5 = GameData_21322e8[0];
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = a1;
  *(_QWORD*)a1 = v3 + 2;
  *(_QWORD*)(a1 + 48) = v4 + 2;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 80) = v5 + 2;
  *(_QWORD*)(a1 + 88) = 0;
  LODWORD(v4) = GameData_21774e0;
  *(_DWORD*)(a1 + 128) = GameData_21774e0;
  GameData_21774e0 = (_DWORD)v4 + 1;
  return result;
}

__int64 GameHr_5ceb0(_QWORD* a1, __int64 a2)
{
  __int64 (*v6)(__int64, const char*);
  int v7;
  int v8;
  unsigned int v9;
  _UNKNOWN** v10;
  __int64 (*v11)(_QWORD*, __int64, int*);
  struct {
    _QWORD v13[2];
    int v14;
  } v13_;
  int v15;

  a1[1537] = 0;
  a1[1538] = 0;
  *a1 = gxc_NvnDevice_vtable;
  v6 = (__int64 (*)(__int64, const char*))nvnBootstrapLoader(
      "nvnDeviceGetProcAddress");
  graphics_nvn_LoadProcedures(0, v6);
  if (*(_BYTE*)(a2 + 4) == 1) {
    v13_.v13[0] = 0x4000000020LL;
    v13_.v13[1] = 0x400000001LL;
    v13_.v14 = 16;
    v7 = *(_DWORD*)a2 & ~(*(int*)a2 >> 31);
    if (v7 >= 4) {
      v7 = 4;
    }
    v8 = *((_DWORD*)v13_.v13 + (unsigned int)v7);
  }
  else {
    v8 = 0;
  }
  v9 = v8 | (*(unsigned __int8*)(a2 + 8) << 10);
  (*(void (**)(_QWORD*))GameData_2132db8[0])(v13_.v13);
  ((void (*)(_QWORD*, _QWORD))*GameData_2132dc0)(v13_.v13, v9);
  (*(void (**)(_QWORD*, _QWORD*))GameData_2132dd0[0])(a1 + 1, v13_.v13);
  graphics_nvn_LoadProcedures((__int64)(a1 + 1), v6);
  graphics_nvn_secondary_LoadProcedures((__int64)(a1 + 1), v6);
  if (*(_BYTE*)(a2 + 4) == 1) {
    ((void (*)(_QWORD*, __int64 (*)(), _QWORD, __int64))*GameData_2132e00)(
        a1 + 1, gxc__5d160, 0, 1);
  }
  v15 = -1;
  v10 = GameData_2132150;
  ((void (*)(_QWORD*, _QWORD, int*))*GameData_2132150)(a1 + 1, 0, &v15);
  v11 = (__int64 (*)(_QWORD*, __int64, int*))*v10;
  v15 = -1;
  return v11(a1 + 1, 1, &v15);
}

__int64 GameHr_5ddd0(__int64 a1)
{
  __int64 v2;

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  return v2;
}

__int64 GameHr_5de20(__int64 a1)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
}

__int64 GameHr_5de60(_QWORD* a1, __int64 a2)
{
  __int64 result;

  *a1 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 48LL))(a2);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 40LL))(a2);
  a1[1] = result;
  return result;
}

__int64 GameHr_5deb0(_QWORD* a1, __int64 a2)
{
  __int64 result;

  *a1 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 48LL))(a2);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 40LL))(a2);
  a1[1] = result;
  return result;
}

__int64 GameHr_e7910(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;

  *(_QWORD*)(a1 + 56) = 0;
  v2 = GameData_21340f0[0];
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_BYTE*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_DWORD*)(a1 + 95) = 0;
  *(_BYTE*)(a1 + 99) = 1;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)a1 = v2 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  *(_DWORD*)(a1 + 64) = 0x2000;
  *(_DWORD*)(a1 + 80) = 0x2000;
  GameRoutine_190020(a1 + 112, &GameData_1a9f09e);
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  result = GameRoutine_190020(a1 + 160, &GameData_1a9f09e);
  *(_BYTE*)(a1 + 208) = 1;
  *(_DWORD*)(a1 + 212) = 2;
  v4 = GameData_212e2d8;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_BYTE*)(a1 + 256) = 0;
  *(_WORD*)(a1 + 304) = 0;
  *(_BYTE*)(a1 + 306) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 264) = v4 + 16;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0x42A0000000000000LL;
  *(_QWORD*)(a1 + 296) = 0x3DCCCCCD43FA0000LL;
  *(_DWORD*)(a1 + 336) = 1065353216;
  return result;
}

__int64 GameHr_f01b0(_DWORD* a1, __int64 a2)
{
  a1[6] = *(_DWORD*)a2;
  a1[7] = *(_DWORD*)(a2 + 4);
  a1[8] = *(_DWORD*)(a2 + 8);
  a1[9] = *(_DWORD*)(a2 + 12);
  a1[10] = *(_DWORD*)(a2 + 16);
  a1[11] = *(_DWORD*)(a2 + 20);
  a1[12] = *(_DWORD*)(a2 + 24);
  a1[13] = *(_DWORD*)(a2 + 28);
  GameRoutine_190200(a1 + 14, *(_QWORD*)(a2 + 32));
  return GameRoutine_190200(a1 + 20, *(_QWORD*)(a2 + 40));
}

__int64 GameHr_f05e0(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  _QWORD* v11;
  char v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  unsigned __int64 v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  bool v27;
  unsigned __int64 v28;
  unsigned __int8* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  bool v39;
  unsigned __int64 v40;
  unsigned __int8* v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  char v46;
  unsigned __int64 v47;
  bool v48;
  unsigned __int64 v49;
  unsigned __int8* v50;
  unsigned __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  char v55;
  _QWORD* v56;
  unsigned __int64 v57;
  char v58;
  bool v59;
  unsigned __int64 v60;
  unsigned __int8* v61;
  unsigned __int64 v62;
  char v63;
  __int64 v64;
  __int64 v65;
  char v66;
  bool v67;
  unsigned __int64 v68;
  unsigned __int8* v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;

  if ((unsigned __int8*)a1 == a2) {
    *(_DWORD*)(a1 + 24) = *((_DWORD*)a2 + 6);
    *(_DWORD*)(a1 + 28) = *((_DWORD*)a2 + 7);
  }
  else {
    v4 = *a2;
    if ((*(_BYTE*)a1 & 1) != 0) {
      v7 = (v4 & 1) == 0;
      v8 = v4 >> 1;
      if (v7) {
        v9 = a2 + 1;
      }
      else {
        v9 = *((unsigned __int8**)a2 + 2);
      }
      if (v7) {
        v10 = v8;
      }
      else {
        v10 = *((_QWORD*)a2 + 1);
      }
      GameRoutine_a3a260(a1, v9, v10);
    }
    else if ((v4 & 1) != 0) {
      GameRoutine_a3a3a0(a1, *((_QWORD*)a2 + 2), *((_QWORD*)a2 + 1));
    }
    else {
      v5 = *(_QWORD*)a2;
      v6 = *((_QWORD*)a2 + 2);
      *(_QWORD*)(a1 + 8) = *((_QWORD*)a2 + 1);
      *(_QWORD*)(a1 + 16) = v6;
      *(_QWORD*)a1 = v5;
    }
    v11 = (_QWORD*)(a1 + 32);
    v12 = *(_BYTE*)(a1 + 32);
    *(_DWORD*)(a1 + 24) = *((_DWORD*)a2 + 6);
    *(_DWORD*)(a1 + 28) = *((_DWORD*)a2 + 7);
    v13 = a2[32];
    if ((v12 & 1) != 0) {
      v16 = (v13 & 1) == 0;
      v17 = v13 >> 1;
      if (v16) {
        v18 = a2 + 33;
      }
      else {
        v18 = *((unsigned __int8**)a2 + 6);
      }
      if (v16) {
        v19 = v17;
      }
      else {
        v19 = *((_QWORD*)a2 + 5);
      }
      GameRoutine_a3a260(v11, v18, v19);
    }
    else if ((v13 & 1) != 0) {
      GameRoutine_a3a3a0(v11, *((_QWORD*)a2 + 6), *((_QWORD*)a2 + 5));
    }
    else {
      v14 = *((_QWORD*)a2 + 4);
      v15 = *((_QWORD*)a2 + 6);
      *(_QWORD*)(a1 + 40) = *((_QWORD*)a2 + 5);
      *(_QWORD*)(a1 + 48) = v15;
      *v11 = v14;
    }
  }
  *(_DWORD*)(a1 + 56) = *((_DWORD*)a2 + 14);
  *(_DWORD*)(a1 + 60) = *((_DWORD*)a2 + 15);
  *(_DWORD*)(a1 + 64) = *((_DWORD*)a2 + 16);
  *(_DWORD*)(a1 + 68) = *((_DWORD*)a2 + 17);
  *(_DWORD*)(a1 + 72) = *((_DWORD*)a2 + 18);
  *(_DWORD*)(a1 + 76) = *((_DWORD*)a2 + 19);
  if ((unsigned __int8*)a1 == a2) {
    *(_DWORD*)(a1 + 104) = *((_DWORD*)a2 + 26);
    *(_DWORD*)(a1 + 108) = *((_DWORD*)a2 + 27);
    v23 = *((_QWORD*)a2 + 15);
    *(_QWORD*)(a1 + 112) = *((_QWORD*)a2 + 14);
    *(_QWORD*)(a1 + 120) = v23;
    v24 = *((_QWORD*)a2 + 16);
    v25 = *((_QWORD*)a2 + 17);
    v26 = *((_QWORD*)a2 + 19);
    *(_QWORD*)(a1 + 144) = *((_QWORD*)a2 + 18);
    *(_QWORD*)(a1 + 152) = v26;
    *(_QWORD*)(a1 + 128) = v24;
    *(_QWORD*)(a1 + 136) = v25;
    *(_DWORD*)(a1 + 184) = *((_DWORD*)a2 + 46);
    GameRoutine_1a0b950(a1 + 188, a2 + 188, 256);
    *(_DWORD*)(a1 + 472) = *((_DWORD*)a2 + 118);
    *(_DWORD*)(a1 + 504) = *((_DWORD*)a2 + 126);
    goto LABEL_82;
  }
  v20 = a2[80];
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v27 = (v20 & 1) == 0;
    v28 = v20 >> 1;
    if (v27) {
      v29 = a2 + 81;
    }
    else {
      v29 = *((unsigned __int8**)a2 + 12);
    }
    if (v27) {
      v30 = v28;
    }
    else {
      v30 = *((_QWORD*)a2 + 11);
    }
    GameRoutine_a3a260(a1 + 80, v29, v30);
  }
  else if ((v20 & 1) != 0) {
    GameRoutine_a3a3a0(a1 + 80, *((_QWORD*)a2 + 12), *((_QWORD*)a2 + 11));
  }
  else {
    v21 = *((_QWORD*)a2 + 10);
    v22 = *((_QWORD*)a2 + 12);
    *(_QWORD*)(a1 + 88) = *((_QWORD*)a2 + 11);
    *(_QWORD*)(a1 + 96) = v22;
    *(_QWORD*)(a1 + 80) = v21;
  }
  *(_DWORD*)(a1 + 104) = *((_DWORD*)a2 + 26);
  *(_DWORD*)(a1 + 108) = *((_DWORD*)a2 + 27);
  v31 = *((_QWORD*)a2 + 15);
  *(_QWORD*)(a1 + 112) = *((_QWORD*)a2 + 14);
  *(_QWORD*)(a1 + 120) = v31;
  v32 = *((_QWORD*)a2 + 16);
  v33 = *((_QWORD*)a2 + 17);
  v34 = *((_QWORD*)a2 + 19);
  *(_QWORD*)(a1 + 144) = *((_QWORD*)a2 + 18);
  *(_QWORD*)(a1 + 152) = v34;
  *(_QWORD*)(a1 + 128) = v32;
  *(_QWORD*)(a1 + 136) = v33;
  v35 = (_QWORD*)(a1 + 160);
  v36 = a2[160];
  if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
    v39 = (v36 & 1) == 0;
    v40 = v36 >> 1;
    if (v39) {
      v41 = a2 + 161;
    }
    else {
      v41 = *((unsigned __int8**)a2 + 22);
    }
    if (v39) {
      v42 = v40;
    }
    else {
      v42 = *((_QWORD*)a2 + 21);
    }
    GameRoutine_a3a260(v35, v41, v42);
  }
  else if ((v36 & 1) != 0) {
    GameRoutine_a3a3a0(v35, *((_QWORD*)a2 + 22), *((_QWORD*)a2 + 21));
  }
  else {
    v37 = *((_QWORD*)a2 + 20);
    v38 = *((_QWORD*)a2 + 22);
    *(_QWORD*)(a1 + 168) = *((_QWORD*)a2 + 21);
    *(_QWORD*)(a1 + 176) = v38;
    *v35 = v37;
  }
  *(_DWORD*)(a1 + 184) = *((_DWORD*)a2 + 46);
  GameRoutine_1a0b950(a1 + 188, a2 + 188, 256);
  v43 = a2[448];
  if ((*(_BYTE*)(a1 + 448) & 1) == 0) {
    if ((v43 & 1) != 0) {
      GameRoutine_a3a3a0(a1 + 448, *((_QWORD*)a2 + 58), *((_QWORD*)a2 + 57));
      v58 = *(_BYTE*)(a1 + 480);
      *(_DWORD*)(a1 + 472) = *((_DWORD*)a2 + 118);
      v47 = a2[480];
      if ((v58 & 1) != 0) {
        goto LABEL_64;
      }
    }
    else {
      v44 = *((_QWORD*)a2 + 56);
      v45 = *((_QWORD*)a2 + 58);
      *(_QWORD*)(a1 + 456) = *((_QWORD*)a2 + 57);
      *(_QWORD*)(a1 + 464) = v45;
      *(_QWORD*)(a1 + 448) = v44;
      v46 = *(_BYTE*)(a1 + 480);
      *(_DWORD*)(a1 + 472) = *((_DWORD*)a2 + 118);
      v47 = a2[480];
      if ((v46 & 1) != 0) {
        goto LABEL_64;
      }
    }
  LABEL_60:
    if ((v47 & 1) != 0) {
      GameRoutine_a3a3a0(a1 + 480, *((_QWORD*)a2 + 62), *((_QWORD*)a2 + 61));
      v66 = *(_BYTE*)(a1 + 512);
      v56 = (_QWORD*)(a1 + 512);
      *(_DWORD*)(a1 + 504) = *((_DWORD*)a2 + 126);
      v57 = a2[512];
      if ((v66 & 1) != 0) {
        goto LABEL_74;
      }
    }
    else {
      v53 = *((_QWORD*)a2 + 60);
      v54 = *((_QWORD*)a2 + 62);
      *(_QWORD*)(a1 + 488) = *((_QWORD*)a2 + 61);
      *(_QWORD*)(a1 + 496) = v54;
      *(_QWORD*)(a1 + 480) = v53;
      v55 = *(_BYTE*)(a1 + 512);
      v56 = (_QWORD*)(a1 + 512);
      *(_DWORD*)(a1 + 504) = *((_DWORD*)a2 + 126);
      v57 = a2[512];
      if ((v55 & 1) != 0) {
        goto LABEL_74;
      }
    }
  LABEL_71:
    if ((v57 & 1) != 0) {
      GameRoutine_a3a3a0(v56, *((_QWORD*)a2 + 66), *((_QWORD*)a2 + 65));
    }
    else {
      v64 = *((_QWORD*)a2 + 64);
      v65 = *((_QWORD*)a2 + 66);
      v56[1] = *((_QWORD*)a2 + 65);
      v56[2] = v65;
      *v56 = v64;
    }
    goto LABEL_82;
  }
  v48 = (v43 & 1) == 0;
  v49 = v43 >> 1;
  if (v48) {
    v50 = a2 + 449;
  }
  else {
    v50 = *((unsigned __int8**)a2 + 58);
  }
  if (v48) {
    v51 = v49;
  }
  else {
    v51 = *((_QWORD*)a2 + 57);
  }
  GameRoutine_a3a260(a1 + 448, v50, v51);
  v52 = *(_BYTE*)(a1 + 480);
  *(_DWORD*)(a1 + 472) = *((_DWORD*)a2 + 118);
  v47 = a2[480];
  if ((v52 & 1) == 0) {
    goto LABEL_60;
  }
LABEL_64:
  v59 = (v47 & 1) == 0;
  v60 = v47 >> 1;
  if (v59) {
    v61 = a2 + 481;
  }
  else {
    v61 = *((unsigned __int8**)a2 + 62);
  }
  if (v59) {
    v62 = v60;
  }
  else {
    v62 = *((_QWORD*)a2 + 61);
  }
  GameRoutine_a3a260(a1 + 480, v61, v62);
  v63 = *(_BYTE*)(a1 + 512);
  v56 = (_QWORD*)(a1 + 512);
  *(_DWORD*)(a1 + 504) = *((_DWORD*)a2 + 126);
  v57 = a2[512];
  if ((v63 & 1) == 0) {
    goto LABEL_71;
  }
LABEL_74:
  v67 = (v57 & 1) == 0;
  v68 = v57 >> 1;
  if (v67) {
    v69 = a2 + 513;
  }
  else {
    v69 = *((unsigned __int8**)a2 + 66);
  }
  if (v67) {
    v70 = v68;
  }
  else {
    v70 = *((_QWORD*)a2 + 65);
  }
  GameRoutine_a3a260(v56, v69, v70);
LABEL_82:
  v71 = *((_QWORD*)a2 + 67);
  v72 = *((_QWORD*)a2 + 68);
  v73 = *((_QWORD*)a2 + 69);
  *(_QWORD*)(a1 + 560) = *((_QWORD*)a2 + 70);
  *(_QWORD*)(a1 + 552) = v73;
  *(_QWORD*)(a1 + 544) = v72;
  *(_QWORD*)(a1 + 536) = v71;
  v75 = *((_QWORD*)a2 + 71);
  v76 = *((_QWORD*)a2 + 72);
  v77 = *((_QWORD*)a2 + 73);
  *(_QWORD*)(a1 + 592) = *((_QWORD*)a2 + 74);
  *(_QWORD*)(a1 + 584) = v77;
  *(_QWORD*)(a1 + 576) = v76;
  *(_QWORD*)(a1 + 568) = v75;
  v78 = *((_QWORD*)a2 + 75);
  v79 = *((_QWORD*)a2 + 76);
  v80 = *((_QWORD*)a2 + 77);
  *(_QWORD*)(a1 + 624) = *((_QWORD*)a2 + 78);
  *(_QWORD*)(a1 + 616) = v80;
  *(_QWORD*)(a1 + 608) = v79;
  *(_QWORD*)(a1 + 600) = v78;
  v81 = *((_QWORD*)a2 + 79);
  v82 = *((_QWORD*)a2 + 80);
  v83 = *((_QWORD*)a2 + 81);
  *(_DWORD*)(a1 + 656) = *((_DWORD*)a2 + 164);
  *(_QWORD*)(a1 + 648) = v83;
  *(_QWORD*)(a1 + 640) = v82;
  *(_QWORD*)(a1 + 632) = v81;
  return a1;
}

__int64* GameHr_f2ce0(__int64 a1, __int64 a2, __int64* a3, __int64 a4)
{

#pragma clang fp contract(off)
  int v4;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64* result;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 i;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  float v30;
  int v31;
  float v32;
  float v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;

  v4 = *(_DWORD*)(a2 + 4);
  *(_DWORD*)a1 = *(_DWORD*)a2;
  *(_DWORD*)(a1 + 4) = v4;
  *(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
  snd_data_f0230(a1 + 16, a2 + 16, a4);
  if (a3 != nullptr) {
    GameRoutine_f1b80_alt1(a1 + 16, a3);
  }
  v8 = *(_QWORD*)(a1 + 688);
  v9 = *(_QWORD*)(a1 + 680);
  v10 = *(_DWORD*)(a2 + 552);
  *(_DWORD*)(a1 + 704) = v10;
  if (v10 != 0) {
    while (v8 != v9) {
      v8 -= 664;
      GameRoutine_f7060_alt1(v8);
    }
    *(_QWORD*)(a1 + 688) = v9;
    result = GameHr_f33e0((__int64*)(a1 + 680));
    v12 = *(_QWORD*)(a1 + 688);
    v13 = *(_QWORD*)(a1 + 680);
    v14 = *(int*)(a1 + 704);
    v15 = 0xA3784A062B2E43DBLL * ((v12 - v13) >> 3);
    if (v14 <= v15) {
      if (v14 < v15) {
        for (i = v13 + 664LL * (int)v14; v12 != i;
             result = (__int64*)GameRoutine_f7060_alt1(v12)) {
          v12 -= 664;
        }
        *(_QWORD*)(a1 + 688) = i;
      }
    }
    else {
      result = GameHr_f7420((__int64*)(a1 + 680), v14 - v15);
    }
    if (*(int*)(a1 + 704) >= 1) {
      v17 = 0;
      v18 = 0;
      v19 = 0;
      do {
        v20 = *(_QWORD*)(a1 + 680);
        result =
            (__int64*)snd_data_f0230(v20 + v17, *(_QWORD*)(a2 + 544) + v18, 0);
        v21 = *(float*)(a1 + 264);
        if (v21 > -0x1.3880000000000p+13f) {
          *(float*)(v20 + v17 + 248) = v21;
          v22 = *(float*)(a1 + 268);
          if (v22 <= -0x1.3880000000000p+13f) {
          LABEL_20:
            v23 = *(_DWORD*)(a1 + 388);
            if (v23 < -9999) {
              goto LABEL_21;
            }
            goto LABEL_62;
          }
        }
        else {
          v22 = *(float*)(a1 + 268);
          if (v22 <= -0x1.3880000000000p+13f) {
            goto LABEL_20;
          }
        }
        *(float*)(v20 + v17 + 252) = v22;
        v23 = *(_DWORD*)(a1 + 388);
        if (v23 < -9999) {
        LABEL_21:
          v24 = *(_DWORD*)(a1 + 420);
          if (v24 < -9999) {
            goto LABEL_22;
          }
          goto LABEL_63;
        }
      LABEL_62:
        *(_DWORD*)(v20 + v17 + 372) = v23;
        v24 = *(_DWORD*)(a1 + 420);
        if (v24 < -9999) {
        LABEL_22:
          v25 = *(_DWORD*)(a1 + 424);
          if (v25 < -9999) {
            goto LABEL_23;
          }
          goto LABEL_64;
        }
      LABEL_63:
        *(_DWORD*)(v20 + v17 + 404) = v24;
        v25 = *(_DWORD*)(a1 + 424);
        if (v25 < -9999) {
        LABEL_23:
          v26 = *(_DWORD*)(a1 + 428);
          if (v26 < -9999) {
            goto LABEL_24;
          }
          goto LABEL_65;
        }
      LABEL_64:
        *(_DWORD*)(v20 + v17 + 408) = v25;
        v26 = *(_DWORD*)(a1 + 428);
        if (v26 < -9999) {
        LABEL_24:
          v27 = *(_DWORD*)(a1 + 432);
          if (v27 < -9999) {
            goto LABEL_25;
          }
          goto LABEL_66;
        }
      LABEL_65:
        *(_DWORD*)(v20 + v17 + 412) = v26;
        v27 = *(_DWORD*)(a1 + 432);
        if (v27 < -9999) {
        LABEL_25:
          v28 = *(_DWORD*)(a1 + 436);
          if (v28 < -9999) {
            goto LABEL_26;
          }
          goto LABEL_67;
        }
      LABEL_66:
        *(_DWORD*)(v20 + v17 + 416) = v27;
        v28 = *(_DWORD*)(a1 + 436);
        if (v28 < -9999) {
        LABEL_26:
          v29 = *(_DWORD*)(a1 + 440);
          if (v29 < -9999) {
            goto LABEL_27;
          }
          goto LABEL_68;
        }
      LABEL_67:
        *(_DWORD*)(v20 + v17 + 420) = v28;
        v29 = *(_DWORD*)(a1 + 440);
        if (v29 < -9999) {
        LABEL_27:
          v30 = *(float*)(a1 + 444);
          if (v30 <= -0x1.3880000000000p+13f) {
            goto LABEL_28;
          }
          goto LABEL_69;
        }
      LABEL_68:
        *(_DWORD*)(v20 + v17 + 424) = v29;
        v30 = *(float*)(a1 + 444);
        if (v30 <= -0x1.3880000000000p+13f) {
        LABEL_28:
          v31 = *(_DWORD*)(a1 + 448);
          if (v31 < -9999) {
            goto LABEL_29;
          }
          goto LABEL_70;
        }
      LABEL_69:
        *(float*)(v20 + v17 + 428) = v30;
        v31 = *(_DWORD*)(a1 + 448);
        if (v31 < -9999) {
        LABEL_29:
          v32 = *(float*)(a1 + 452);
          if (v32 <= -0x1.3880000000000p+13f) {
            goto LABEL_30;
          }
          goto LABEL_71;
        }
      LABEL_70:
        *(_DWORD*)(v20 + v17 + 432) = v31;
        v32 = *(float*)(a1 + 452);
        if (v32 <= -0x1.3880000000000p+13f) {
        LABEL_30:
          v33 = *(float*)(a1 + 456);
          if (v33 <= -0x1.3880000000000p+13f) {
            goto LABEL_31;
          }
          goto LABEL_72;
        }
      LABEL_71:
        *(float*)(v20 + v17 + 436) = v32;
        v33 = *(float*)(a1 + 456);
        if (v33 <= -0x1.3880000000000p+13f) {
        LABEL_31:
          v34 = *(_DWORD*)(a1 + 556);
          if (v34 < -9999) {
            goto LABEL_32;
          }
          goto LABEL_73;
        }
      LABEL_72:
        *(float*)(v20 + v17 + 440) = v33;
        v34 = *(_DWORD*)(a1 + 556);
        if (v34 < -9999) {
        LABEL_32:
          v35 = *(_DWORD*)(a1 + 560);
          if (v35 < -9999) {
            goto LABEL_33;
          }
          goto LABEL_74;
        }
      LABEL_73:
        *(_DWORD*)(v20 + v17 + 540) = v34;
        v35 = *(_DWORD*)(a1 + 560);
        if (v35 < -9999) {
        LABEL_33:
          v36 = *(_DWORD*)(a1 + 564);
          if (v36 < -9999) {
            goto LABEL_34;
          }
          goto LABEL_75;
        }
      LABEL_74:
        *(_DWORD*)(v20 + v17 + 544) = v35;
        v36 = *(_DWORD*)(a1 + 564);
        if (v36 < -9999) {
        LABEL_34:
          v37 = *(_DWORD*)(a1 + 568);
          if (v37 < -9999) {
            goto LABEL_35;
          }
          goto LABEL_76;
        }
      LABEL_75:
        *(_DWORD*)(v20 + v17 + 548) = v36;
        v37 = *(_DWORD*)(a1 + 568);
        if (v37 < -9999) {
        LABEL_35:
          v38 = *(_DWORD*)(a1 + 572);
          if (v38 < -9999) {
            goto LABEL_36;
          }
          goto LABEL_77;
        }
      LABEL_76:
        *(_DWORD*)(v20 + v17 + 552) = v37;
        v38 = *(_DWORD*)(a1 + 572);
        if (v38 < -9999) {
        LABEL_36:
          v39 = *(_DWORD*)(a1 + 576);
          if (v39 < -9999) {
            goto LABEL_37;
          }
          goto LABEL_78;
        }
      LABEL_77:
        *(_DWORD*)(v20 + v17 + 556) = v38;
        v39 = *(_DWORD*)(a1 + 576);
        if (v39 < -9999) {
        LABEL_37:
          v40 = *(_DWORD*)(a1 + 580);
          if (v40 < -9999) {
            goto LABEL_38;
          }
          goto LABEL_79;
        }
      LABEL_78:
        *(_DWORD*)(v20 + v17 + 560) = v39;
        v40 = *(_DWORD*)(a1 + 580);
        if (v40 < -9999) {
        LABEL_38:
          v41 = *(_DWORD*)(a1 + 584);
          if (v41 < -9999) {
            goto LABEL_39;
          }
          goto LABEL_80;
        }
      LABEL_79:
        *(_DWORD*)(v20 + v17 + 564) = v40;
        v41 = *(_DWORD*)(a1 + 584);
        if (v41 < -9999) {
        LABEL_39:
          v42 = *(_DWORD*)(a1 + 588);
          if (v42 < -9999) {
            goto LABEL_40;
          }
          goto LABEL_81;
        }
      LABEL_80:
        *(_DWORD*)(v20 + v17 + 568) = v41;
        v42 = *(_DWORD*)(a1 + 588);
        if (v42 < -9999) {
        LABEL_40:
          v43 = *(_DWORD*)(a1 + 592);
          if (v43 < -9999) {
            goto LABEL_41;
          }
          goto LABEL_82;
        }
      LABEL_81:
        *(_DWORD*)(v20 + v17 + 572) = v42;
        v43 = *(_DWORD*)(a1 + 592);
        if (v43 < -9999) {
        LABEL_41:
          v44 = *(_DWORD*)(a1 + 596);
          if (v44 < -9999) {
            goto LABEL_42;
          }
          goto LABEL_83;
        }
      LABEL_82:
        *(_DWORD*)(v20 + v17 + 576) = v43;
        v44 = *(_DWORD*)(a1 + 596);
        if (v44 < -9999) {
        LABEL_42:
          v45 = *(_DWORD*)(a1 + 604);
          if (v45 < -9999) {
            goto LABEL_43;
          }
          goto LABEL_84;
        }
      LABEL_83:
        *(_DWORD*)(v20 + v17 + 580) = v44;
        v45 = *(_DWORD*)(a1 + 604);
        if (v45 < -9999) {
        LABEL_43:
          v46 = *(_DWORD*)(a1 + 612);
          if (v46 < -9999) {
            goto LABEL_44;
          }
          goto LABEL_85;
        }
      LABEL_84:
        *(_DWORD*)(v20 + v17 + 588) = v45;
        v46 = *(_DWORD*)(a1 + 612);
        if (v46 < -9999) {
        LABEL_44:
          v47 = *(_DWORD*)(a1 + 616);
          if (v47 < -9999) {
            goto LABEL_45;
          }
          goto LABEL_86;
        }
      LABEL_85:
        *(_DWORD*)(v20 + v17 + 596) = v46;
        v47 = *(_DWORD*)(a1 + 616);
        if (v47 < -9999) {
        LABEL_45:
          v48 = *(_DWORD*)(a1 + 620);
          if (v48 < -9999) {
            goto LABEL_46;
          }
          goto LABEL_87;
        }
      LABEL_86:
        *(_DWORD*)(v20 + v17 + 600) = v47;
        v48 = *(_DWORD*)(a1 + 620);
        if (v48 < -9999) {
        LABEL_46:
          v49 = *(_DWORD*)(a1 + 624);
          if (v49 < -9999) {
            goto LABEL_47;
          }
          goto LABEL_88;
        }
      LABEL_87:
        *(_DWORD*)(v20 + v17 + 604) = v48;
        v49 = *(_DWORD*)(a1 + 624);
        if (v49 < -9999) {
        LABEL_47:
          v50 = *(_DWORD*)(a1 + 628);
          if (v50 < -9999) {
            goto LABEL_48;
          }
          goto LABEL_89;
        }
      LABEL_88:
        *(_DWORD*)(v20 + v17 + 608) = v49;
        v50 = *(_DWORD*)(a1 + 628);
        if (v50 < -9999) {
        LABEL_48:
          v51 = *(_DWORD*)(a1 + 632);
          if (v51 < -9999) {
            goto LABEL_49;
          }
          goto LABEL_90;
        }
      LABEL_89:
        *(_DWORD*)(v20 + v17 + 612) = v50;
        v51 = *(_DWORD*)(a1 + 632);
        if (v51 < -9999) {
        LABEL_49:
          v52 = *(_DWORD*)(a1 + 636);
          if (v52 < -9999) {
            goto LABEL_50;
          }
          goto LABEL_91;
        }
      LABEL_90:
        *(_DWORD*)(v20 + v17 + 616) = v51;
        v52 = *(_DWORD*)(a1 + 636);
        if (v52 < -9999) {
        LABEL_50:
          v53 = *(_DWORD*)(a1 + 640);
          if (v53 < -9999) {
            goto LABEL_51;
          }
          goto LABEL_92;
        }
      LABEL_91:
        *(_DWORD*)(v20 + v17 + 620) = v52;
        v53 = *(_DWORD*)(a1 + 640);
        if (v53 < -9999) {
        LABEL_51:
          v54 = *(_DWORD*)(a1 + 644);
          if (v54 < -9999) {
            goto LABEL_52;
          }
          goto LABEL_93;
        }
      LABEL_92:
        *(_DWORD*)(v20 + v17 + 624) = v53;
        v54 = *(_DWORD*)(a1 + 644);
        if (v54 < -9999) {
        LABEL_52:
          v55 = *(_DWORD*)(a1 + 648);
          if (v55 < -9999) {
            goto LABEL_53;
          }
          goto LABEL_94;
        }
      LABEL_93:
        *(_DWORD*)(v20 + v17 + 628) = v54;
        v55 = *(_DWORD*)(a1 + 648);
        if (v55 < -9999) {
        LABEL_53:
          v56 = *(_DWORD*)(a1 + 652);
          if (v56 < -9999) {
            goto LABEL_54;
          }
          goto LABEL_95;
        }
      LABEL_94:
        *(_DWORD*)(v20 + v17 + 632) = v55;
        v56 = *(_DWORD*)(a1 + 652);
        if (v56 < -9999) {
        LABEL_54:
          v57 = *(_DWORD*)(a1 + 656);
          if (v57 < -9999) {
            goto LABEL_55;
          }
          goto LABEL_96;
        }
      LABEL_95:
        *(_DWORD*)(v20 + v17 + 636) = v56;
        v57 = *(_DWORD*)(a1 + 656);
        if (v57 < -9999) {
        LABEL_55:
          v58 = *(_DWORD*)(a1 + 660);
          if (v58 < -9999) {
            goto LABEL_56;
          }
          goto LABEL_97;
        }
      LABEL_96:
        *(_DWORD*)(v20 + v17 + 640) = v57;
        v58 = *(_DWORD*)(a1 + 660);
        if (v58 < -9999) {
        LABEL_56:
          v59 = *(_DWORD*)(a1 + 664);
          if (v59 < -9999) {
            goto LABEL_57;
          }
          goto LABEL_98;
        }
      LABEL_97:
        *(_DWORD*)(v20 + v17 + 644) = v58;
        v59 = *(_DWORD*)(a1 + 664);
        if (v59 < -9999) {
        LABEL_57:
          v60 = *(_DWORD*)(a1 + 668);
          if (v60 < -9999) {
            goto LABEL_58;
          }
          goto LABEL_99;
        }
      LABEL_98:
        *(_DWORD*)(v20 + v17 + 648) = v59;
        v60 = *(_DWORD*)(a1 + 668);
        if (v60 < -9999) {
        LABEL_58:
          v61 = *(_DWORD*)(a1 + 672);
          if (v61 >= -9999) {
            goto LABEL_100;
          }
          goto LABEL_17;
        }
      LABEL_99:
        *(_DWORD*)(v20 + v17 + 652) = v60;
        v61 = *(_DWORD*)(a1 + 672);
        if (v61 >= -9999) {
        LABEL_100:
          *(_DWORD*)(v20 + v17 + 656) = v61;
        }
      LABEL_17:
        ++v19;
        v18 += 528;
        v17 += 664;
      } while (v19 < *(int*)(a1 + 704));
    }
  }
  else {
    while (v8 != v9) {
      v8 -= 664;
      GameRoutine_f7060_alt1(v8);
    }
    *(_QWORD*)(a1 + 688) = v9;
    return GameHr_f33e0((__int64*)(a1 + 680));
  }
  return result;
}

__int64* GameHr_f33e0(__int64* result)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  char* v8;
  char* v9;
  __int64* v10;
  __int64 v11;

  v1 = *result;
  v2 = result[2] - *result;
  v3 = result[1] - *result;
  if (v2 > v3) {
    v4 = result;
    v5 = snd_g_memory_ptr[0];
    if (0xA3784A062B2E43DBLL * ((__int64)v3 >> 3) - 0x62B2E43DAFCEA7LL >=
        0xFF9D4D1BC250315ALL) {
      result = (__int64*)(*(__int64 (**)(_QWORD, unsigned __int64, __int64))(
          **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], v3,
                                                   32);
      v1 = *v4;
      v6 = result;
      if (v3 >= v4[2] - *v4) {
      LABEL_4:
        if (v6 == nullptr) {
          return result;
        }
        return (*(__int64* (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
      }
    }
    else {
      v6 = nullptr;
      if (v3 >= v2) {
        goto LABEL_4;
      }
    }
    v7 = (__int64*)v4[1];
    v8 = (char*)v6 + v3;
    v9 = (char*)v6 + v3 + v1 - (_QWORD)v7;
    if ((__int64*)v1 != v7) {
      v10 = (__int64*)v1;
      v11 = (__int64)v9;
      do {
        GameRoutine_f7190_alt1(v11, v10);
        v10 += 83;
        v11 += 664;
      } while (v10 != v7);
      do {
        result = (__int64*)GameRoutine_f7060_alt1(v1);
        v1 += 664;
      } while ((__int64*)v1 != v7);
      v1 = *v4;
    }
    *v4 = (__int64)v9;
    v4[1] = (__int64)v8;
    v4[2] = (__int64)v8;
    if (v1 != 0) {
      return (*(__int64* (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
    }
  }
  return result;
}

const char* GameHr_f4760(_DWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if (GameData_2178d80 != 0) {
    v2 = *(_QWORD*)GameData_2178d80;
    v3 = *(_QWORD*)(GameData_2178d80 + 8) - *(_QWORD*)GameData_2178d80;
    if (v3 == 0) {
      return "PLAYER_ALL";
    }
  }
  else {
    GameRoutine_f4400();
    v2 = *(_QWORD*)GameData_2178d80;
    v3 = *(_QWORD*)(GameData_2178d80 + 8) - *(_QWORD*)GameData_2178d80;
    if (v3 == 0) {
      return "PLAYER_ALL";
    }
  }
  v4 = v3 >> 5;
  while (*(_DWORD*)(v2 + 24) != *a1) {
    --v4;
    v2 += 32;
    if (v4 == 0) {
      return "PLAYER_ALL";
    }
  }
  return (const char*)GameRoutine_190240(v2);
}

__int64 GameHr_f47f0()
{
  _QWORD* v0;
  __int64* v1;
  __int64 v2;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = (_QWORD*)GameData_2178df0;
  if (GameData_2178df0 != 0) {
    GameData_2178df0 = 0;
    v1 = snd_g_memory_ptr[0];
    if (*v0 != 0) {
      v2 = *snd_g_memory_ptr[0];
      v0[1] = *v0;
      (*(void (**)(__int64))(*(_QWORD*)v2 + 24LL))(v2),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)*v1 + 24LL))(*v1, v0);
  }
  return result;
}

__int64 GameHr_f4ae0()
{
  void (***v0)(_QWORD);
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = (void (***)(_QWORD))GameData_2178d78,
  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (GameData_2178d78 != 0) {
    GameData_2178d78 = 0;
    (**v0)(v0);
    return (*(__int64 (**)(_QWORD, void (***)(_QWORD)))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v0);
  }
  return result;
}

__int64 GameHr_f4b50(int a1)
{
  __int64 v2;

  v2 = GameData_2178d78;
  if (GameData_2178d78 != 0) {
    if (*(_QWORD*)(GameData_2178d78 + 16) != 0) {
      return *(_QWORD*)(*(_QWORD*)(v2 + 8) + 40LL * a1 + 16);
    }
  }
  else {
    GameRoutine_f4860();
    v2 = GameData_2178d78;
    if (*(_QWORD*)(GameData_2178d78 + 16) != 0) {
      return *(_QWORD*)(*(_QWORD*)(v2 + 8) + 40LL * a1 + 16);
    }
  }
  return 0;
}

__int64 GameHr_f4bc0()
{
  if (GameData_2178d78 == 0) {
    GameRoutine_f4860();
  }
  return *(unsigned int*)(GameData_2178d78 + 28);
}

__int64 GameHr_f5690()
{
  void (***v0)(__int64);
  __int64 v1;
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = (void (***)(__int64))GameData_2178dc0,
  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (GameData_2178dc0 != 0) {
    v1 = GameData_2178dc0;
    GameData_2178dc0 = 0;
    (**v0)(v1);
    v2 = snd_g_memory_ptr[0];
    (*(void (**)(_QWORD, void (***)(__int64)))(**(_QWORD**)snd_g_memory_ptr[0] +
                                               24LL))(*snd_g_memory_ptr[0], v0),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v3 = (_QWORD*)GameData_2178dc8;
    GameData_2178dc8 = 0;
    if (*v3 != 0) {
      v4 = *v2;
      v3[1] = *v3;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)*v2 + 24LL))(*v2, v3);
  }
  return result;
}

__int64 GameHr_f5740(int* a1, _QWORD* a2)
{
  __int64 v4;
  __int64 result;
  int v6;
  __int64 v7;
  int v8;
  int v9;

  v4 = GameData_2178dc0;
  if (GameData_2178dc0 == 0) {
    GameRoutine_f4c20();
    v4 = GameData_2178dc0;
  }
  result = *(_QWORD*)(v4 + 16);
  if (result != 0) {
    v6 = *a1;
    v7 = *(unsigned int*)(v4 + 28);
    v8 = a1[1];
    v9 = v6;
    result = GameRoutine_fb560(result, v7, &v9, &v8);
    if (result != 0) {
      if (a2 != nullptr) {
        *a2 = *(_QWORD*)(*(_QWORD*)result + 24LL);
      }
      return *(_QWORD*)(*(_QWORD*)result + 16LL);
    }
  }
  return result;
}

__int64 GameHr_f57c0(int* a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v8;
  int v9;

  v2 = GameData_2178dc0;
  if (GameData_2178dc0 != 0) {
    v3 = *(_QWORD*)(GameData_2178dc0 + 16);
    if (v3 != 0) {
      goto LABEL_3;
    }
    return 0xFFFFFFFFLL;
  }
  GameRoutine_f4c20();
  v2 = GameData_2178dc0;
  v3 = *(_QWORD*)(GameData_2178dc0 + 16);
  if (v3 == 0) {
    return 0xFFFFFFFFLL;
  }
LABEL_3:
  v4 = *a1;
  v5 = *(unsigned int*)(v2 + 28);
  v8 = a1[1];
  v9 = v4;
  v6 = GameRoutine_fb560(v3, v5, &v9, &v8);
  if (v6 != 0) {
    return (unsigned int)((unsigned __int64)(v6 - *(_QWORD*)(v2 + 16)) >> 3);
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64 GameHr_f5850(int a1, _QWORD* a2, char a3)
{
  __int64 v6;
  unsigned int v7;
  __int64 v9;
  unsigned int v10;

  if (GameData_2178dc0 != 0) {
    if (a1 == -1) {
      return 0;
    }
  }
  else {
    GameRoutine_f4c20();
    if (a1 == -1) {
      return 0;
    }
  }
  v6 = GameData_2178dc0;
  if ((a3 & 1) != 0) {
    if (*(_QWORD*)(GameData_2178dc0 + 16) != 0) {
      v7 = a1 & 0xFFFFFF;
      if (a2 != nullptr) {
        *a2 = *(_QWORD*)(*(_QWORD*)(GameData_2178dc0 + 8) + 40LL * v7 + 24);
      }
      return *(_QWORD*)(*(_QWORD*)(v6 + 8) + 40LL * v7 + 16);
    }
    return 0;
  }
  v9 = *(_QWORD*)(GameData_2178dc0 + 16);
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

__int64 GameHr_f6240()
{
  void (***v0)(__int64);
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = (void (***)(__int64))GameData_2178dd0,
  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (GameData_2178dd0 != 0) {
    v1 = GameData_2178dd0;
    GameData_2178dd0 = 0;
    (**v0)(v1);
    v2 = snd_g_memory_ptr[0];
    (*(void (**)(_QWORD, void (***)(__int64)))(**(_QWORD**)snd_g_memory_ptr[0] +
                                               24LL))(*snd_g_memory_ptr[0], v0),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v3 = (__int64*)GameData_2178dd8;
    GameData_2178dd8 = 0;
    v4 = *v3;
    if (*v3 != 0) {
      v5 = v3[1];
      v6 = *v3;
      if (v4 != v5) {
        do {
          v7 = *(_QWORD*)(v5 - 104);
          if (v7 != 0) {
            *(_QWORD*)(v5 - 96) = v7;
            (*(void (**)(__int64))(*(_QWORD*)*v2 + 24LL))(*v2),
                result =
                    COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          }
          v8 = v5 - 152;
          v9 = *(_QWORD*)(v5 - 152);
          if (v9 != 0) {
            *(_QWORD*)(v5 - 144) = v9;
            (*(void (**)(__int64))(*(_QWORD*)*v2 + 24LL))(*v2),
                result =
                    COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          }
          v5 -= 152;
        } while (v8 != v4);
        v6 = *v3;
      }
      v10 = *v2;
      v3[1] = v4;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v10 + 24LL))(v10, v6),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)*v2 + 24LL))(*v2, v3);
  }
  return result;
}

__int64 GameHr_f6360(int* a1, _QWORD* a2)
{
  __int64 v4;
  __int64 result;
  int v6;
  __int64 v7;
  int v8;
  int v9;

  v4 = GameData_2178dd0;
  if (GameData_2178dd0 == 0) {
    GameRoutine_f5b80();
    v4 = GameData_2178dd0;
  }
  result = *(_QWORD*)(v4 + 16);
  if (result != 0) {
    v6 = *a1;
    v7 = *(unsigned int*)(v4 + 28);
    v8 = a1[1];
    v9 = v6;
    result = GameRoutine_fc9a0(result, v7, &v9, &v8);
    if (result != 0) {
      if (a2 != nullptr) {
        *a2 = *(_QWORD*)(*(_QWORD*)result + 24LL);
      }
      return *(_QWORD*)(*(_QWORD*)result + 16LL);
    }
  }
  return result;
}

__int64 GameHr_f63e0(int* a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v8;
  int v9;

  v2 = GameData_2178dd0;
  if (GameData_2178dd0 != 0) {
    v3 = *(_QWORD*)(GameData_2178dd0 + 16);
    if (v3 != 0) {
      goto LABEL_3;
    }
    return 0xFFFFFFFFLL;
  }
  GameRoutine_f5b80();
  v2 = GameData_2178dd0;
  v3 = *(_QWORD*)(GameData_2178dd0 + 16);
  if (v3 == 0) {
    return 0xFFFFFFFFLL;
  }
LABEL_3:
  v4 = *a1;
  v5 = *(unsigned int*)(v2 + 28);
  v8 = a1[1];
  v9 = v4;
  v6 = GameRoutine_fc9a0(v3, v5, &v9, &v8);
  if (v6 != 0) {
    return (unsigned int)((unsigned __int64)(v6 - *(_QWORD*)(v2 + 16)) >> 3);
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64 GameHr_f6470(int a1, _QWORD* a2, char a3)
{
  __int64 v6;
  unsigned int v7;
  __int64 v9;
  unsigned int v10;

  if (GameData_2178dd0 != 0) {
    v6 = GameData_2178dd0;
    if ((a3 & 1) != 0) {
      goto LABEL_3;
    }
  }
  else {
    GameRoutine_f5b80();
    v6 = GameData_2178dd0;
    if ((a3 & 1) != 0) {
    LABEL_3:
      if (*(_QWORD*)(v6 + 16) != 0) {
        v7 = a1 & 0xFFFFFF;
        if (a2 != nullptr) {
          *a2 = *(_QWORD*)(*(_QWORD*)(v6 + 8) + 40LL * v7 + 24);
        }
        return *(_QWORD*)(*(_QWORD*)(v6 + 8) + 40LL * v7 + 16);
      }
      return 0;
    }
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

__int64 GameHr_f7060(__int64 result)
{
  __int64 v1;
  __int64* v2;

  v1 = result;
  v2 = GameData_212d480[0];
  if ((*(_BYTE*)(result + 512) & 1) != 0) {
    result = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)GameData_212d480[0] +
                                              24LL))(*GameData_212d480[0],
                                                     *(_QWORD*)(result + 528));
    if ((*(_BYTE*)(v1 + 480) & 1) == 0) {
    LABEL_3:
      if ((*(_BYTE*)(v1 + 448) & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_11;
    }
  }
  else if ((*(_BYTE*)(result + 480) & 1) == 0) {
    goto LABEL_3;
  }
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(v1 + 496));
  if ((*(_BYTE*)(v1 + 448) & 1) == 0) {
  LABEL_4:
    if ((*(_BYTE*)(v1 + 160) & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_12;
  }
LABEL_11:
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(v1 + 464));
  if ((*(_BYTE*)(v1 + 160) & 1) == 0) {
  LABEL_5:
    if ((*(_BYTE*)(v1 + 80) & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_13;
  }
LABEL_12:
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(v1 + 176));
  if ((*(_BYTE*)(v1 + 80) & 1) == 0) {
  LABEL_6:
    if ((*(_BYTE*)(v1 + 32) & 1) == 0) {
      goto LABEL_7;
    }
    goto LABEL_14;
  }
LABEL_13:
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(v1 + 96));
  if ((*(_BYTE*)(v1 + 32) & 1) == 0) {
  LABEL_7:
    if ((*(_BYTE*)v1 & 1) == 0) {
      return result;
    }
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
        *v2, *(_QWORD*)(v1 + 16));
  }
LABEL_14:
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(v1 + 48));
  if ((*(_BYTE*)v1 & 1) != 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
        *v2, *(_QWORD*)(v1 + 16));
  }
  return result;
}

_QWORD* GameHr_f7190(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* result;
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

  if ((*(_BYTE*)a2 & 1) != 0) {
    GameRoutine_1905a40(a1, a2[2], a2[1]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    *(_QWORD*)(a1 + 8) = a2[1];
    *(_QWORD*)(a1 + 16) = v5;
    *(_QWORD*)a1 = v4;
  }
  *(_DWORD*)(a1 + 24) = *((_DWORD*)a2 + 6);
  *(_DWORD*)(a1 + 28) = *((_DWORD*)a2 + 7);
  if ((a2[4] & 1) != 0) {
    GameRoutine_1905a40(a1 + 32, a2[6], a2[5]);
  }
  else {
    v6 = a2[4];
    v7 = a2[6];
    *(_QWORD*)(a1 + 40) = a2[5];
    *(_QWORD*)(a1 + 48) = v7;
    *(_QWORD*)(a1 + 32) = v6;
  }
  *(_DWORD*)(a1 + 56) = *((_DWORD*)a2 + 14);
  *(_DWORD*)(a1 + 60) = *((_DWORD*)a2 + 15);
  *(_DWORD*)(a1 + 64) = *((_DWORD*)a2 + 16);
  *(_DWORD*)(a1 + 68) = *((_DWORD*)a2 + 17);
  *(_DWORD*)(a1 + 72) = *((_DWORD*)a2 + 18);
  *(_DWORD*)(a1 + 76) = *((_DWORD*)a2 + 19);
  if ((a2[10] & 1) != 0) {
    GameRoutine_1905a40(a1 + 80, a2[12], a2[11]);
  }
  else {
    v8 = a2[10];
    v9 = a2[12];
    *(_QWORD*)(a1 + 88) = a2[11];
    *(_QWORD*)(a1 + 96) = v9;
    *(_QWORD*)(a1 + 80) = v8;
  }
  *(_DWORD*)(a1 + 104) = *((_DWORD*)a2 + 26);
  *(_DWORD*)(a1 + 108) = *((_DWORD*)a2 + 27);
  v10 = a2[15];
  *(_QWORD*)(a1 + 112) = a2[14];
  *(_QWORD*)(a1 + 120) = v10;
  v11 = a2[16];
  v12 = a2[17];
  v13 = a2[19];
  *(_QWORD*)(a1 + 144) = a2[18];
  *(_QWORD*)(a1 + 152) = v13;
  *(_QWORD*)(a1 + 128) = v11;
  *(_QWORD*)(a1 + 136) = v12;
  if ((a2[20] & 1) != 0) {
    GameRoutine_1905a40(a1 + 160, a2[22], a2[21]);
  }
  else {
    v14 = a2[20];
    v15 = a2[22];
    *(_QWORD*)(a1 + 168) = a2[21];
    *(_QWORD*)(a1 + 176) = v15;
    *(_QWORD*)(a1 + 160) = v14;
  }
  *(_DWORD*)(a1 + 184) = *((_DWORD*)a2 + 46);
  GameRoutine_1a0b950(a1 + 188, (char*)a2 + 188, 256);
  if ((a2[56] & 1) == 0) {
    v16 = a2[56];
    v17 = a2[58];
    *(_QWORD*)(a1 + 456) = a2[57];
    *(_QWORD*)(a1 + 464) = v17;
    *(_QWORD*)(a1 + 448) = v16;
    *(_DWORD*)(a1 + 472) = *((_DWORD*)a2 + 118);
    if ((a2[60] & 1) != 0) {
      goto LABEL_15;
    }
  LABEL_18:
    v19 = a2[60];
    v20 = a2[62];
    *(_QWORD*)(a1 + 488) = a2[61];
    *(_QWORD*)(a1 + 496) = v20;
    *(_QWORD*)(a1 + 480) = v19;
    result = (_QWORD*)(a1 + 512);
    *(_DWORD*)(a1 + 504) = *((_DWORD*)a2 + 126);
    if ((a2[64] & 1) != 0) {
      goto LABEL_16;
    }
  LABEL_19:
    v21 = a2[64];
    v22 = a2[66];
    result[1] = a2[65];
    result[2] = v22;
    *result = v21;
    goto LABEL_20;
  }
  GameRoutine_1905a40(a1 + 448, a2[58], a2[57]);
  *(_DWORD*)(a1 + 472) = *((_DWORD*)a2 + 118);
  if ((a2[60] & 1) == 0) {
    goto LABEL_18;
  }
LABEL_15:
  GameRoutine_1905a40(a1 + 480, a2[62], a2[61]);
  result = (_QWORD*)(a1 + 512);
  *(_DWORD*)(a1 + 504) = *((_DWORD*)a2 + 126);
  if ((a2[64] & 1) == 0) {
    goto LABEL_19;
  }
LABEL_16:
  result = (_QWORD*)GameRoutine_1905a40(result, a2[66], a2[65]);
LABEL_20:
  v23 = a2[67];
  v24 = a2[68];
  v25 = a2[69];
  *(_QWORD*)(a1 + 560) = a2[70];
  *(_QWORD*)(a1 + 552) = v25;
  *(_QWORD*)(a1 + 544) = v24;
  *(_QWORD*)(a1 + 536) = v23;
  v26 = a2[71];
  v27 = a2[72];
  v28 = a2[73];
  *(_QWORD*)(a1 + 592) = a2[74];
  *(_QWORD*)(a1 + 584) = v28;
  *(_QWORD*)(a1 + 576) = v27;
  *(_QWORD*)(a1 + 568) = v26;
  v29 = a2[75];
  v30 = a2[76];
  v31 = a2[77];
  *(_QWORD*)(a1 + 624) = a2[78];
  *(_QWORD*)(a1 + 616) = v31;
  *(_QWORD*)(a1 + 608) = v30;
  *(_QWORD*)(a1 + 600) = v29;
  v32 = a2[79];
  v33 = a2[80];
  v34 = a2[81];
  *(_DWORD*)(a1 + 656) = *((_DWORD*)a2 + 164);
  *(_QWORD*)(a1 + 648) = v34;
  *(_QWORD*)(a1 + 640) = v33;
  *(_QWORD*)(a1 + 632) = v32;
  return result;
}

__int64 GameHr_f7640(__int64 a1)
{
  __int64 result;

  GameRoutine_190020(a1, &GameData_1a9f09e);
  *(_QWORD*)(a1 + 24) = 0;
  GameRoutine_190020(a1 + 32, &GameData_1a9f09e);
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  GameRoutine_190020(a1 + 80, &GameData_1a9f09e);
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 136) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 144) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 152) = -3229614080LL;
  GameRoutine_190020(a1 + 160, &GameData_1a9f09e);
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_DWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 276) = 0;
  *(_QWORD*)(a1 + 284) = 0;
  *(_QWORD*)(a1 + 292) = 0;
  *(_QWORD*)(a1 + 300) = 0;
  *(_QWORD*)(a1 + 308) = 0;
  *(_QWORD*)(a1 + 316) = 0;
  *(_QWORD*)(a1 + 324) = 0;
  *(_QWORD*)(a1 + 332) = 0;
  *(_QWORD*)(a1 + 340) = 0;
  *(_QWORD*)(a1 + 348) = 0;
  *(_QWORD*)(a1 + 356) = 0;
  *(_QWORD*)(a1 + 364) = 0;
  *(_QWORD*)(a1 + 372) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 3212836864LL;
  *(_DWORD*)(a1 + 272) = 1065353216;
  *(_DWORD*)(a1 + 380) = 1065353216;
  *(_QWORD*)(a1 + 404) = 0x100000001LL;
  *(_QWORD*)(a1 + 412) = 0x100000001LL;
  *(_QWORD*)(a1 + 420) = 0x100000000LL;
  *(_QWORD*)(a1 + 428) = 1063675494;
  *(_QWORD*)(a1 + 436) = 0x3F8000003F800000LL;
  GameRoutine_190020(a1 + 448, &GameData_1a9f09e);
  *(_DWORD*)(a1 + 472) = 0;
  GameRoutine_190020(a1 + 480, &GameData_1a9f09e);
  *(_DWORD*)(a1 + 504) = 0;
  result = GameRoutine_190020(a1 + 512, &GameData_1a9f09e);
  *(_DWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 640) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  return result;
}

__int64 GameHr_f8300(__int64 a1, _BYTE* a2, int a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _DWORD* v10;

  if (a2 == nullptr) {
    return 0;
  }
  result = 0;
  if (a3 != 0 && *a2 != 0) {
    GameRoutine_1a09b70(a1 + 24);
    v7 = *(unsigned int*)(a1 + 16);
    if ((_DWORD)v7 != 0) {
      v8 = 0;
      v9 = *(_QWORD*)(a1 + 8) + 4LL;
      while (*(_DWORD*)(v9 - 4) != a3 ||
             (unsigned int)GameRoutine_1a09d30(v9, a2) != 0) {
        ++v8;
        v9 += 132;
        if (v7 == v8) {
          LODWORD(v8) = v7;
          goto LABEL_14;
        }
      }
      if ((unsigned int)v8 >= (unsigned int)v7) {
        goto LABEL_14;
      }
    }
    else {
      LODWORD(v8) = 0;
    LABEL_14:
      v10 = (_DWORD*)(*(_QWORD*)(a1 + 8) + 132LL * (unsigned int)v7);
      *v10 = a3;
      GameRoutine_1a09be0(v10 + 1, a2);
      ++*(_DWORD*)(a1 + 16);
    }
    GameRoutine_1a09b80(a1 + 24);
    return (unsigned int)(v8 + 1);
  }
  return result;
}

__int64 GameHr_fb560(__int64 result, unsigned int a2, unsigned int* a3,
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

__int64 GameHr_fc9a0(__int64 result, unsigned int a2, unsigned int* a3,
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

__int64 GameHr_1017b0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                      unsigned int a5)
{
  __int64* v8;
  __int64* v9;
  __int64 v10;
  unsigned int v11;

  GameRoutine_126150();
  GameRoutine_1261b0(a1 + 40);
  v8 = GameData_2134248[0];
  *(_DWORD*)(a1 + 5600) = 0x2000;
  *(_QWORD*)(a1 + 5592) = v8 + 2;
  GameRoutine_112320(a1 + 5592);
  *(_QWORD*)(a1 + 5608) = 0;
  v9 = GameData_2134488;
  *(_QWORD*)(a1 + 5616) = 0;
  *(_QWORD*)(a1 + 5624) = 0;
  v10 = GameData_212e2d8;
  *(_BYTE*)(a1 + 5660) = 0;
  *(_QWORD*)(a1 + 5632) = 0;
  *(_QWORD*)(a1 + 5640) = 0;
  *(_DWORD*)(a1 + 5648) = 0x2000;
  *(_DWORD*)(a1 + 5656) = 0;
  *(_QWORD*)(a1 + 5680) = 0;
  *(_QWORD*)(a1 + 5672) = 0;
  *(_QWORD*)(a1 + 5704) = 0;
  *(_QWORD*)(a1 + 5696) = 0;
  v10 += 16;
  *(_QWORD*)a1 = v9 + 2;
  *(_QWORD*)(a1 + 5712) = 0;
  *(_DWORD*)(a1 + 5732) = 0;
  *(_WORD*)(a1 + 5736) = 0;
  *(_QWORD*)(a1 + 5752) = 0;
  *(_DWORD*)(a1 + 5760) = 0;
  *(_QWORD*)(a1 + 5592) = v9 + 177;
  *(_QWORD*)(a1 + 5664) = v10;
  *(_QWORD*)(a1 + 5688) = v10;
  *(_QWORD*)(a1 + 40) = v9 + 36;
  *(_BYTE*)(a1 + 5720) = 0;
  *(_QWORD*)(a1 + 5724) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 5740) = 0;
  GameRoutine_1a0a040(a1 + 5736, 1, 0);
  *(_QWORD*)(a1 + 5624) = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*GameData_212e250 + 472LL))(*GameData_212e250, a4, a5);
  v11 = (*(__int64 (**)(_QWORD))(**(_QWORD**)GameData_212e2d0[0] + 272LL))(
      *(_QWORD*)GameData_212e2d0[0]);
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 120LL))(a1, v11);
}

__int64 GameHr_101910(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  unsigned int v10;

  v6 = a1 + 4096;
  GameRoutine_126150();
  GameRoutine_1261b0(a1 + 40);
  v7 = GameData_2134248[0];
  *(_DWORD*)(a1 + 5600) = 0x2000;
  *(_QWORD*)(a1 + 5592) = v7 + 2;
  GameRoutine_112320(a1 + 5592);
  *(_QWORD*)(a1 + 5608) = 0;
  v8 = GameData_2134488;
  *(_QWORD*)(a1 + 5616) = 0;
  *(_QWORD*)(a1 + 5624) = 0;
  v9 = GameData_212e2d8;
  *(_QWORD*)(a1 + 5632) = 0;
  *(_QWORD*)(a1 + 5640) = 0;
  *(_DWORD*)(a1 + 5648) = 0x2000;
  *(_DWORD*)(a1 + 5656) = 0;
  *(_BYTE*)(v6 + 1564) = 0;
  *(_QWORD*)(a1 + 5680) = 0;
  *(_QWORD*)(a1 + 5672) = 0;
  *(_QWORD*)(a1 + 5704) = 0;
  *(_QWORD*)(a1 + 5696) = 0;
  v9 += 16;
  *(_QWORD*)a1 = v8 + 2;
  *(_QWORD*)(a1 + 5712) = 0;
  *(_DWORD*)(a1 + 5732) = 0;
  *(_WORD*)(a1 + 5736) = 0;
  *(_QWORD*)(a1 + 5752) = 0;
  *(_DWORD*)(a1 + 5760) = 0;
  *(_QWORD*)(a1 + 5592) = v8 + 177;
  *(_QWORD*)(a1 + 5664) = v9;
  *(_QWORD*)(a1 + 5688) = v9;
  *(_QWORD*)(a1 + 40) = v8 + 36;
  *(_BYTE*)(a1 + 5720) = 0;
  *(_QWORD*)(a1 + 5724) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 5740) = 0;
  GameRoutine_1a0a040(a1 + 5736, 1, 0);
  *(_QWORD*)(a1 + 5624) = (*(__int64 (**)(_QWORD, _QWORD))(
      *(_QWORD*)*GameData_212e250 + 456LL))(*GameData_212e250, a4);
  *(_BYTE*)(v6 + 1624) = 1;
  v10 = (*(__int64 (**)(_QWORD))(**(_QWORD**)GameData_212e2d0[0] + 272LL))(
      *(_QWORD*)GameData_212e2d0[0]);
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 120LL))(a1, v10);
}

__int64 GameHr_104040(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;

  *a1 = GameData_21344a8[0] + 2;
  result = GameRoutine_104120();
  v3 = a1[1];
  if (v3 != 0) {
    v4 = a1[2];
    v5 = a1[1];
    v6 = GameData_212d480[0];
    if (v3 != v4) {
      do {
        v7 = *(_QWORD*)(v4 - 24);
        if (v7 != 0) {
          *(_QWORD*)(v4 - 16) = v7;
          (*(void (**)(__int64))(*(_QWORD*)*v6 + 24LL))(*v6);
        }
        v4 -= 32;
      } while (v4 != v3);
      v5 = a1[1];
    }
    v8 = *v6;
    a1[2] = v3;
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v8 + 24LL))(v8, v5);
  }
  return result;
}

__int64 GameHr_104390(__int64 a1)
{
  __int64 v2;

  v2 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 48, 32);
  GameRoutine_104020(v2, a1);
  GameData_2178e38 = v2;
  return v2;
}

__int64 GameHr_104420(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  const char* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  const char* v13;
  const char* v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = *(_QWORD*)(result + 8);
  v2 = result;
  if (*(_QWORD*)(result + 16) != v1) {
    v3 = 0;
    v4 = snd_s_target_ptr;
    v5 = snd_g_memory_ptr[0];
    do {
      v8 = (__int64*)(v1 + 32 * v3);
      result = *v8;
      if (*(_DWORD*)(*v8 + 144) == 2) {
        v9 = v8[1];
        if (v8[2] != v9) {
          v10 = 0;
          while (1) {
            v11 = *(_QWORD*)(v9 + 8 * v10);
            v12 = *(_DWORD*)(v11 + 144);
            if (v12 == 2) {
              v13 = (const char*)GameRoutine_190240_alt1(*v8);
              v14 = (const char*)GameRoutine_190240_alt1(v11);
              Archive_105780(v2, v13, v14, 1);
              (*(void (**)(__int64, __int64))(*(_QWORD*)*v4 + 56LL))(*v4, 16);
              if (*(_DWORD*)(v11 + 144) == 3) {
              LABEL_16:
                GameHr_1059c0(v2, v11);
                *(_QWORD*)(v11 + 144) = 0;
                *(_BYTE*)(v11 + 264) = 0;
                GameRoutine_190200_alt1(v11, &GameData_1a9f09e);
                GameRoutine_190200_alt1(v11 + 24, &GameData_1a9f09e);
                GameRoutine_190200_alt1(v11 + 48, &GameData_1a9f09e);
                GameRoutine_190200_alt1(v11 + 72, &GameData_1a9f09e);
                snd_fnd_WeakHandle_reset(v11 + 96);
                snd_fnd_WeakHandle_reset(v11 + 112);
                snd_fnd_WeakHandle_reset(v11 + 128);
                v15 = *(unsigned __int8*)(v11 + 224);
                *(_QWORD*)(v11 + 144) = 0;
                if (v15 == 1) {
                  if (*(_QWORD*)(v11 + 176) != 0) {
                    v16 = *v5;
                    v17 = *(_QWORD*)(v11 + 168);
                    *(_QWORD*)(v11 + 168) = 0;
                    (*(void (**)(__int64, __int64))(*(_QWORD*)v16 + 24LL))(v16,
                                                                           v17);
                    v18 = *v5;
                    v19 = *(_QWORD*)(v11 + 176);
                    *(_QWORD*)(v11 + 176) = 0;
                    (*(void (**)(__int64, __int64))(*(_QWORD*)v18 + 24LL))(v18,
                                                                           v19);
                    *(_QWORD*)(v11 + 184) = 0;
                  }
                  *(_BYTE*)(v11 + 224) = 0;
                }
                *(_BYTE*)(v11 + 264) = 0;
                *(_QWORD*)(v11 + 248) = 0;
                *(_QWORD*)(v11 + 256) = 0;
                *(_QWORD*)(v11 + 232) = 0;
                *(_QWORD*)(v11 + 240) = 0;
              }
            }
            else if (v12 == 3) {
              goto LABEL_16;
            }
            v9 = v8[1];
            if (++v10 >= (unsigned __int64)((v8[2] - v9) >> 3)) {
              result = *v8;
              break;
            }
          }
        }
        v6 = *(_QWORD*)(v2 + 32);
        v7 = (const char*)GameRoutine_190240_alt1(result);
        Manager_118260(v6, v7);
        result = *v8;
      }
      *(_DWORD*)(result + 144) = 0;
      ++v3;
      v1 = *(_QWORD*)(v2 + 8);
    } while (v3 < (*(_QWORD*)(v2 + 16) - v1) >> 5);
  }
  *(_BYTE*)(v2 + 41) = 0;
  return result;
}

__int64 GameHr_104660(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;

  v1 = *(_QWORD*)(result + 8);
  if (*(_QWORD*)(result + 16) != v1) {
    v2 = result;
    v3 = 0;
    v4 = 0;
    do {
      result = GameRoutine_1046e0(v2, v1 + v3);
      v1 = *(_QWORD*)(v2 + 8);
      ++v4;
      v3 += 32;
    } while (v4 < (*(_QWORD*)(v2 + 16) - v1) >> 5);
  }
  return result;
}

__int64 GameHr_105310(__int64 a1)
{
  __int64 v2;

  v2 = GameRoutine_190a10();
  return *(_BYTE*)(a1 + 41) &
         (unsigned __int8)~(unsigned __int8)GameRoutine_190b80(v2, 19, 22) & 1;
}

__int64 GameHr_105350(__int64 a1, const char* a2, const char* a3, char a4)
{
  _QWORD* v8;
  _QWORD* v9;
  long double v10;
  long double v11;
  long double v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  __int64 v18;
  __int64 result;
  _QWORD v20[2];

  v8 = (_QWORD*)GameRoutine_1054e0();
  if (v8 == nullptr) {
    return (*(__int64 (**)(_QWORD, const char*))(
        **(_QWORD**)GameData_212e2d0[0] + 392LL))(
        *(_QWORD*)GameData_212e2d0[0],
        "#SoundLibrary error : Can't open sound archive\n");
  }
  v9 = v8;
  if (a2 == nullptr) {
    a2 = "noname";
  }
  GameRoutine_190200(*v8, a2);
  GameRoutine_1056a0(*v9 + 24LL, 256, "%s.bfsar", a3);
  v10 = GameRoutine_1056a0(*v9 + 72LL, 256, "%s.fsid.bin", a3);
  GameRoutine_112080(*v9 + 96LL, v10);
  GameRoutine_112080(*v9 + 112LL, v11);
  GameRoutine_112080(*v9 + 128LL, v12);
  v13 = *(_QWORD*)(a1 + 32);
  v14 = GameRoutine_190240(*v9 + 24LL);
  GameRoutine_117bc0(v13, v14, a2, a4 & 1);
  v15 = GameRoutine_118ff0(*(_QWORD*)(a1 + 32));
  v16 = GameRoutine_190240(*v9 + 72LL);
  GameRoutine_10df70((void*)v20, v15, v16, 32);
  GameRoutine_112180(*v9 + 128LL, v20);
  v18 = GameRoutine_112290(*v9 + 128LL, v17);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 40LL))(v18);
  *(_DWORD*)(*v9 + 144LL) = 1;
  *(_BYTE*)(a1 + 41) = 0;
  return result;
}

__int64* GameHr_1054e0(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  GameRoutine_1a09b70(&GameData_2178e18);
  v2 = (__int64*)a1[1];
  v3 = a1[2] - (_QWORD)v2;
  if (v3 != 0) {
    v4 = v3 >> 5;
    while (*(_DWORD*)(*v2 + 144) != 0) {
      v2 += 4;
      if (--v4 == 0) {
        goto LABEL_5;
      }
    }
  }
  else {
  LABEL_5:
    v17 = 0;
    v18 = 0;
    v16 = 0;
    v5 = GameData_212d480[0];
    v6 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 272, 32);
    GameRoutine_1a0ba50(v6, 0, 272, v7, v8, v9);
    GameRoutine_190020(v6, &GameData_1a9f09e);
    GameRoutine_190020(v6 + 24, &GameData_1a9f09e);
    GameRoutine_190020(v6 + 48, &GameData_1a9f09e);
    GameRoutine_190020(v6 + 72, &GameData_1a9f09e);
    *(_DWORD*)(v6 + 104) = 0x2000;
    *(_DWORD*)(v6 + 120) = 0x2000;
    *(_DWORD*)(v6 + 136) = 0x2000;
    *(_QWORD*)(v6 + 144) = 0;
    *(_QWORD*)(v6 + 152) = GameData_1f547e8;
    *(_WORD*)(v6 + 192) = 0;
    *(_QWORD*)(v6 + 96) = 0;
    *(_QWORD*)(v6 + 112) = 0;
    *(_QWORD*)(v6 + 128) = 0;
    *(_QWORD*)(v6 + 196) = 0;
    *(_QWORD*)(v6 + 208) = 0;
    *(_DWORD*)(v6 + 216) = 0;
    *(_QWORD*)(v6 + 176) = 0;
    *(_QWORD*)(v6 + 184) = 0;
    *(_QWORD*)(v6 + 160) = GameData_1f54818;
    *(_QWORD*)(v6 + 168) = 0;
    GameRoutine_1a0a040(v6 + 192, 1, 0);
    *(_BYTE*)(v6 + 224) = 0;
    *(_QWORD*)(v6 + 232) = 0;
    *(_QWORD*)(v6 + 240) = 0;
    *(_QWORD*)(v6 + 248) = 0;
    *(_QWORD*)(v6 + 256) = 0;
    *(_BYTE*)(v6 + 264) = 0;
    v2 = (__int64*)a1[2];
    v10 = a1[3];
    v15 = v6;
    if ((unsigned __int64)v2 >= v10) {
      v11 = GameRoutine_1070e0(a1 + 1, &v15);
      v12 = v16;
      v2 = (__int64*)(v11 - 32);
      a1[2] = v11;
      if (v12 != 0) {
        v13 = *v5;
        v17 = v12;
        (*(void (**)(__int64))(*(_QWORD*)v13 + 24LL))(v13);
      }
    }
    else {
      *v2 = v6;
      v2[1] = 0;
      v2[2] = 0;
      v2[3] = 0;
      a1[2] = v2 + 4;
    }
  }
  GameRoutine_1a09b80(&GameData_2178e18);
  return v2;
}

__int64 GameHr_105740(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(__int64**)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 16) - (_QWORD)v1;
  if (v2 == 0) {
    return 0;
  }
  v3 = v2 >> 5;
  while (1) {
    v5 = *v1;
    v1 += 4;
    v4 = v5;
    if (*(_DWORD*)(v5 + 144) != 0) {
      break;
    }
    if (--v3 == 0) {
      return 0;
    }
  }
  return GameRoutine_190240(v4);
}

__int64 GameHr_1059c0(__int64 a1, __int64 a2)
{
  __int64 result;
  void (***v5)(_QWORD);
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  void (***v11)(_QWORD);
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if (*(_QWORD*)(a2 + 248) != 0) {
    *(_QWORD*)(a2 + 248) = 0;
    (*(void (**)(__int64))(*(_QWORD*)snd_s_target + 400LL))(snd_s_target);
  }
  if ((snd_fnd_WeakHandle_isValid((__int64*)(a2 + 96)) & 1) != 0) {
    v12 = GameRoutine_118ff0(*(_QWORD*)(a1 + 32));
    v13 = snd_fnd_WeakHandle_get(a2 + 96);
    FileManager_10e200(v12, v13);
    snd_fnd_WeakHandle_reset(a2 + 96);
    if ((snd_fnd_WeakHandle_isValid((__int64*)(a2 + 112)) & 1) == 0) {
    LABEL_5:
      result = snd_fnd_WeakHandle_isValid((__int64*)(a2 + 128));
      if ((result & 1) == 0) {
        goto LABEL_6;
      }
      goto LABEL_16;
    }
  }
  else if ((snd_fnd_WeakHandle_isValid((__int64*)(a2 + 112)) & 1) == 0) {
    goto LABEL_5;
  }
  v14 = GameRoutine_118ff0(*(_QWORD*)(a1 + 32));
  v15 = snd_fnd_WeakHandle_get(a2 + 112);
  FileManager_10e200(v14, v15);
  snd_fnd_WeakHandle_reset(a2 + 112);
  result = snd_fnd_WeakHandle_isValid((__int64*)(a2 + 128));
  if ((result & 1) == 0) {
  LABEL_6:
    v5 = *(void (****)(_QWORD))(a2 + 232);
    v6 = snd_g_memory_ptr[0];
    if (v5 == nullptr) {
      goto LABEL_8;
    }
    goto LABEL_7;
  }
LABEL_16:
  v16 = GameRoutine_118ff0(*(_QWORD*)(a1 + 32));
  v17 = snd_fnd_WeakHandle_get(a2 + 128);
  FileManager_10e200(v16, v17);
  result = snd_fnd_WeakHandle_reset(a2 + 128);
  v5 = *(void (****)(_QWORD))(a2 + 232);
  v6 = snd_g_memory_ptr[0];
  if (v5 != nullptr) {
  LABEL_7:
    *(_QWORD*)(a2 + 232) = 0;
    (**v5)(v5);
    result = (*(__int64 (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v6 +
                                                           24LL))(*v6, v5);
  }
LABEL_8:
  if (*(_BYTE*)(a2 + 224) == 1) {
    if (*(_QWORD*)(a2 + 176) != 0) {
      v7 = *v6;
      v8 = *(_QWORD*)(a2 + 168);
      *(_QWORD*)(a2 + 168) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 24LL))(v7, v8);
      v9 = *v6;
      v10 = *(_QWORD*)(a2 + 176);
      *(_QWORD*)(a2 + 176) = 0;
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v9 + 24LL))(v9, v10);
      *(_QWORD*)(a2 + 184) = 0;
    }
    *(_BYTE*)(a2 + 224) = 0;
  }
  v11 = *(void (****)(_QWORD))(a2 + 240);
  if (v11 != nullptr) {
    *(_QWORD*)(a2 + 240) = 0;
    (**v11)(v11);
    return (*(__int64 (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v6 + 24LL))(
        *v6, v11);
  }
  return result;
}

__int64 GameHr_105ba0(__int64 a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  GameRoutine_190200_alt1(a1, &GameData_1a9f09e);
  GameRoutine_190200_alt1(a1 + 24, &GameData_1a9f09e);
  GameRoutine_190200_alt1(a1 + 48, &GameData_1a9f09e);
  GameRoutine_190200_alt1(a1 + 72, &GameData_1a9f09e);
  snd_fnd_WeakHandle_reset(a1 + 96);
  snd_fnd_WeakHandle_reset(a1 + 112);
  result = snd_fnd_WeakHandle_reset(a1 + 128);
  v3 = *(unsigned __int8*)(a1 + 224);
  *(_QWORD*)(a1 + 144) = 0;
  if (v3 == 1) {
    if (*(_QWORD*)(a1 + 176) != 0) {
      v4 = *(_QWORD*)(a1 + 168);
      *(_QWORD*)(a1 + 168) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)snd_g_memory + 24LL))(
          snd_g_memory, v4);
      v5 = snd_g_memory;
      v6 = *(_QWORD*)(a1 + 176);
      *(_QWORD*)(a1 + 176) = 0;
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v5 + 24LL))(v5, v6);
      *(_QWORD*)(a1 + 184) = 0;
    }
    *(_BYTE*)(a1 + 224) = 0;
  }
  *(_BYTE*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  return result;
}

__int64 GameHr_106680(__int64 a1, _BYTE* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  int v14;

  if (a2 == nullptr) {
    return 0;
  }
  if (*a2 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  if (v3 == v4) {
    return 0;
  }
  v6 = 0;
  while (1) {
    v7 = (_QWORD*)(v4 + 32 * v6);
    if (*(_DWORD*)(*v7 + 144LL) == 2) {
      v8 = v7[1];
      if (v7[2] != v8) {
        break;
      }
    }
  LABEL_6:
    if (++v6 >= (unsigned __int64)((v3 - v4) >> 5)) {
      return 0;
    }
  }
  v9 = 0;
  while (1) {
    v10 = *(_QWORD*)(v8 + 8 * v9);
    if (*(_DWORD*)(v10 + 144) == 2) {
      v11 = *(_QWORD*)(v10 + 232);
      if (v11 != 0 && *(_QWORD*)(v11 + 16) != 0) {
        v14 = GameRoutine_fdf60(a2, 0);
        v12 = GameRoutine_1078a0(*(_QWORD*)(v11 + 16),
                                 *(unsigned int*)(v11 + 28), &v14, a2, 0);
        if (v12 != 0) {
          result = *(_QWORD*)(*(_QWORD*)v12 + 24LL);
          if (result != 0) {
            return result;
          }
        }
      }
    }
    v8 = v7[1];
    if (++v9 >= (unsigned __int64)((v7[2] - v8) >> 3)) {
      v4 = *(_QWORD*)(a1 + 8);
      v3 = *(_QWORD*)(a1 + 16);
      goto LABEL_6;
    }
  }
}

__int64 GameHr_106980(__int64 a1, int* a2)
{
  __int64 v2;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned int* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int v23;
  int v24;

  v2 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(a1 + 16) == v2) {
    return 0xFFFFFFFFLL;
  }
  v5 = 0;
  do {
    v6 = (_QWORD*)(v2 + 32 * v5);
    v7 = *v6;
    if (*(_DWORD*)(*v6 + 144LL) == 2) {
      v8 = v6[1];
      if (v6[2] != v8) {
        v9 = 0;
        while (1) {
          v10 = *(_QWORD*)(v8 + 8 * v9);
          if (*(_DWORD*)(v10 + 144) == 2) {
            v11 = *(_QWORD*)(v10 + 240);
            if (v11 != 0) {
              v12 = *(_QWORD*)(v11 + 16);
              if (v12 != 0) {
                v13 = *a2;
                v14 = *(unsigned int*)(v11 + 28);
                v23 = a2[1];
                v24 = v13;
                v15 = GameRoutine_107b40(v12, v14, &v24, &v23);
                if (v15 != 0) {
                  v16 = *(unsigned int**)(*(_QWORD*)v15 + 16LL);
                  if (v16 != nullptr) {
                    return *v16;
                  }
                }
              }
            }
          }
          v8 = v6[1];
          if (++v9 >= (unsigned __int64)((v6[2] - v8) >> 3)) {
            v7 = *v6;
            break;
          }
        }
      }
      v17 = *(_QWORD*)(v7 + 240);
      if (v17 != 0) {
        v18 = *(_QWORD*)(v17 + 16);
        if (v18 != 0) {
          v19 = *a2;
          v20 = *(unsigned int*)(v17 + 28);
          v23 = a2[1];
          v24 = v19;
          v21 = GameRoutine_107b40(v18, v20, &v24, &v23);
          if (v21 != 0) {
            v16 = *(unsigned int**)(*(_QWORD*)v21 + 16LL);
            if (v16 != nullptr) {
              return *v16;
            }
          }
        }
      }
    }
    v2 = *(_QWORD*)(a1 + 8);
    ++v5;
  } while (v5 < (*(_QWORD*)(a1 + 16) - v2) >> 5);
  return 0xFFFFFFFFLL;
}

__int64 GameHr_107450(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;

  *(_QWORD*)(a1 + 152) = GameData_21344b0[0] + 2;
  v2 = GameData_212d480[0];
  if (*(_BYTE*)(a1 + 224) == 1) {
    if (*(_QWORD*)(a1 + 176) != 0) {
      v3 = *GameData_212d480[0];
      v4 = *(_QWORD*)(a1 + 168);
      *(_QWORD*)(a1 + 168) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(v3, v4);
      v5 = *v2;
      v6 = *(_QWORD*)(a1 + 176);
      *(_QWORD*)(a1 + 176) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 24LL))(v5, v6);
      *(_QWORD*)(a1 + 184) = 0;
    }
    *(_BYTE*)(a1 + 224) = 0;
  }
  *(_QWORD*)(a1 + 160) = GameData_21344b8 + 2;
  if (*(_QWORD*)(a1 + 176) != 0) {
    v7 = *v2;
    v8 = *(_QWORD*)(a1 + 168);
    *(_QWORD*)(a1 + 168) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 24LL))(v7, v8);
    v9 = *v2;
    v10 = *(_QWORD*)(a1 + 176);
    *(_QWORD*)(a1 + 176) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v9 + 24LL))(v9, v10);
    *(_QWORD*)(a1 + 184) = 0;
  }
  result = GameRoutine_1a09f60(a1 + 192);
  if ((*(_BYTE*)(a1 + 72) & 1) != 0) {
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
        *v2, *(_QWORD*)(a1 + 88));
    if ((*(_BYTE*)(a1 + 48) & 1) == 0) {
    LABEL_9:
      if ((*(_BYTE*)(a1 + 24) & 1) == 0) {
        goto LABEL_10;
      }
      goto LABEL_14;
    }
  }
  else if ((*(_BYTE*)(a1 + 48) & 1) == 0) {
    goto LABEL_9;
  }
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(a1 + 64));
  if ((*(_BYTE*)(a1 + 24) & 1) == 0) {
  LABEL_10:
    if ((*(_BYTE*)a1 & 1) == 0) {
      return result;
    }
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
        *v2, *(_QWORD*)(a1 + 16));
  }
LABEL_14:
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(a1 + 40));
  if ((*(_BYTE*)a1 & 1) != 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
        *v2, *(_QWORD*)(a1 + 16));
  }
  return result;
}

__int64 GameHr_1075c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = GameData_21344b0[0] + 2;
  if (*(_BYTE*)(a1 + 72) == 1) {
    if (*(_QWORD*)(a1 + 24) != 0) {
      v2 = *(_QWORD*)(a1 + 16);
      *(_QWORD*)(a1 + 16) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)GameData_2198f88 + 24LL))(
          GameData_2198f88, v2);
      v3 = GameData_2198f88;
      v4 = *(_QWORD*)(a1 + 24);
      *(_QWORD*)(a1 + 24) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(v3, v4);
      *(_QWORD*)(a1 + 32) = 0;
    }
    *(_BYTE*)(a1 + 72) = 0;
  }
  *(_QWORD*)(a1 + 8) = GameData_1f54818;
  if (*(_QWORD*)(a1 + 24) != 0) {
    v5 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)GameData_2198f88 + 24LL))(
        GameData_2198f88, v5);
    v6 = GameData_2198f88;
    v7 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a1 + 24) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v6 + 24LL))(v6, v7);
    *(_QWORD*)(a1 + 32) = 0;
  }
  return GameRoutine_1a09f60(a1 + 40);
}

__int64 GameHr_1076a0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = GameData_21344b8 + 2;
  if (a1[2] != 0) {
    v2 = a1[1];
    a1[1] = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)GameData_2198f88 + 24LL))(
        GameData_2198f88, v2);
    v3 = GameData_2198f88;
    v4 = a1[2];
    a1[2] = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(v3, v4);
    a1[3] = 0;
  }
  return GameRoutine_1a09f60(a1 + 4);
}

__int64 GameHr_107b40(__int64 result, unsigned int a2, unsigned int* a3,
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

__int64 GameHr_109540(__int64* a1, __int64* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;

  v3 = *a2;
  v4 = *a1;
  v8 = *(_DWORD*)(*a2 + 8);
  v9 = *(_DWORD*)(*a1 + 8);
  if (v8 != v9) {
    if (v8 >= v9) {
      goto LABEL_3;
    }
  LABEL_7:
    v13 = *a3;
    v14 = *(_DWORD*)(*a3 + 8);
    if (v14 == v8) {
      if ((GameRoutine_1a09d30(*(_QWORD*)(v13 + 16), *(_QWORD*)(v3 + 16)) &
           0x80000000) == 0) {
      LABEL_9:
        *a1 = v3;
        *a2 = v4;
        v15 = *a3;
        v16 = *(_DWORD*)(v4 + 8);
        v17 = *(_DWORD*)(*a3 + 8);
        if (v17 == v16) {
          if ((GameRoutine_1a09d30(*(_QWORD*)(v15 + 16), *(_QWORD*)(v4 + 16)) &
               0x80000000) == 0) {
            return 1;
          }
        }
        else if (v17 >= v16) {
          return 1;
        }
        *a2 = v15;
      LABEL_20:
        *a3 = v4;
        return 1;
      }
    }
    else if (v14 >= v8) {
      goto LABEL_9;
    }
    *a1 = v13;
    goto LABEL_20;
  }
  if ((GameRoutine_1a09d30(*(_QWORD*)(v3 + 16), *(_QWORD*)(v4 + 16)) &
       0x80000000) != 0) {
    goto LABEL_7;
  }
LABEL_3:
  v10 = *a3;
  v11 = *(_DWORD*)(*a3 + 8);
  if (v11 == v8) {
    if ((GameRoutine_1a09d30(*(_QWORD*)(v10 + 16), *(_QWORD*)(v3 + 16)) &
         0x80000000) == 0) {
      return 0;
    }
  }
  else if (v11 >= v8) {
    return 0;
  }
  *a2 = v10;
  *a3 = v3;
  v18 = *a2;
  v19 = *a1;
  v20 = *(_DWORD*)(*a2 + 8);
  v21 = *(_DWORD*)(*a1 + 8);
  if (v20 == v21) {
    if ((GameRoutine_1a09d30(*(_QWORD*)(v18 + 16), *(_QWORD*)(v19 + 16)) &
         0x80000000) == 0) {
      return 1;
    }
  }
  else if (v20 >= v21) {
    return 1;
  }
  *a1 = v18;
  *a2 = v19;
  return 1;
}

unsigned __int64 GameHr_1098c0(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned int v6;
  unsigned int v7;
  unsigned __int64 i;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;

  v2 = *a1;
  v3 = *(a2 - 1);
  v4 = a2;
  v6 = *(_DWORD*)(*a1 + 8);
  v7 = *(_DWORD*)(v3 + 8);
  if (v6 == v7) {
    if ((GameRoutine_1a09d30(*(_QWORD*)(v2 + 16), *(_QWORD*)(v3 + 16)) &
         0x80000000) == 0) {
      goto LABEL_3;
    }
  LABEL_11:
    for (i = (unsigned __int64)(a1 + 1);; i += 8LL) {
      v10 = *(_DWORD*)(*(_QWORD*)i + 8LL);
      if (v6 == v10) {
        if ((GameRoutine_1a09d30(*(_QWORD*)(v2 + 16),
                                 *(_QWORD*)(*(_QWORD*)i + 16LL)) &
             0x80000000) != 0) {
          goto LABEL_16;
        }
      }
      else if (v6 < v10) {
        goto LABEL_16;
      }
    }
  }
  if (v6 < v7) {
    goto LABEL_11;
  }
LABEL_3:
  for (i = (unsigned __int64)(a1 + 1); i < (unsigned __int64)v4; i += 8LL) {
    v9 = *(_DWORD*)(*(_QWORD*)i + 8LL);
    if (v6 == v9) {
      if ((GameRoutine_1a09d30(*(_QWORD*)(v2 + 16),
                               *(_QWORD*)(*(_QWORD*)i + 16LL)) &
           0x80000000) != 0) {
        break;
      }
    }
    else if (v6 < v9) {
      break;
    }
  }
LABEL_16:
  if (i < (unsigned __int64)v4) {
    for (--v4;; --v4) {
      if (v6 == v7) {
        if ((GameRoutine_1a09d30(*(_QWORD*)(v2 + 16), *(_QWORD*)(v3 + 16)) &
             0x80000000) == 0) {
          break;
        }
      }
      else if (v6 >= v7) {
        break;
      }
      v11 = *(v4 - 1);
      v3 = v11;
      v7 = *(_DWORD*)(v11 + 8);
    }
  }
  if (i < (unsigned __int64)v4) {
    v12 = *(_QWORD*)i;
    v13 = *v4;
    do {
      *(_QWORD*)i = v13;
      i += 8LL;
      *v4 = v12;
      v14 = *(_DWORD*)(v2 + 8);
      while (1) {
        v12 = *(_QWORD*)i;
        v15 = *(_DWORD*)(*(_QWORD*)i + 8LL);
        if (v14 != v15) {
          break;
        }
        if ((GameRoutine_1a09d30(*(_QWORD*)(v2 + 16), *(_QWORD*)(v12 + 16)) &
             0x80000000) != 0) {
          goto LABEL_32;
        }
      LABEL_27:
        i += 8LL;
      }
      if (v14 >= v15) {
        goto LABEL_27;
      }
      do {
      LABEL_32:
        while (1) {
          v16 = *--v4;
          v13 = v16;
          v17 = *(_DWORD*)(v16 + 8);
          if (v14 == v17) {
            break;
          }
          if (v14 >= v17) {
            goto LABEL_24;
          }
        }
      } while ((GameRoutine_1a09d30(*(_QWORD*)(v2 + 16), *(_QWORD*)(v13 + 16)) &
                0x80000000) != 0);
    LABEL_24:;
    } while (i < (unsigned __int64)v4);
  }
  if (a1 != (__int64*)(i - 8)) {
    *a1 = *(_QWORD*)(i - 8);
  }
  *(_QWORD*)(i - 8) = v2;
  return i;
}

_QWORD* GameHr_109aa0(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  unsigned int v21;
  unsigned int v22;
  __int64 v23;
  unsigned int v24;

  v2 = *a1;
  v5 = 0;
  v6 = *(_DWORD*)(*a1 + 8LL);
  while (1) {
    v7 = a1[v5 + 1];
    v8 = *(_DWORD*)(v7 + 8);
    if (v8 != v6) {
      break;
    }
    if ((GameRoutine_1a09d30(*(_QWORD*)(v7 + 16), *(_QWORD*)(v2 + 16)) &
         0x80000000) == 0) {
      goto LABEL_6;
    }
  LABEL_3:
    ++v5;
  }
  if (v8 < v6) {
    goto LABEL_3;
  }
LABEL_6:
  v9 = &a1[v5];
  v10 = (unsigned __int64)&a1[v5 + 1];
  if (v5 != 0) {
    do {
      while (1) {
        v12 = *--a2;
        v11 = v12;
        v13 = *(_DWORD*)(v12 + 8);
        if (v13 == v6) {
          break;
        }
        if (v13 < v6) {
          goto LABEL_20;
        }
      }
    } while ((GameRoutine_1a09d30(*(_QWORD*)(v11 + 16), *(_QWORD*)(v2 + 16)) &
              0x80000000) == 0);
  }
  else {
    do {
      if (v10 >= (unsigned __int64)a2) {
        break;
      }
      while (1) {
        v15 = *--a2;
        v14 = v15;
        v16 = *(_DWORD*)(v15 + 8);
        if (v16 == v6) {
          break;
        }
        if (v16 < v6 || v10 >= (unsigned __int64)a2) {
          goto LABEL_20;
        }
      }
    } while ((GameRoutine_1a09d30(*(_QWORD*)(v14 + 16), *(_QWORD*)(v2 + 16)) &
              0x80000000) == 0);
  }
LABEL_20:
  if (v10 >= (unsigned __int64)a2) {
    goto LABEL_34;
  }
  v18 = *a2;
  v19 = (unsigned __int64)&a1[v5 + 1];
  v20 = a2;
  while (2) {
    *(_QWORD*)v19 = v18;
    v19 += 8LL;
    *v20 = v7;
    v21 = *(_DWORD*)(v2 + 8);
  LABEL_26:
    v7 = *(_QWORD*)v19;
    v22 = *(_DWORD*)(*(_QWORD*)v19 + 8LL);
    if (v22 == v21) {
      if ((GameRoutine_1a09d30(*(_QWORD*)(v7 + 16), *(_QWORD*)(v2 + 16)) &
           0x80000000) == 0) {
        goto LABEL_30;
      }
    }
    else if (v22 >= v21) {
      do {
      LABEL_30:
        while (1) {
          v23 = *--v20;
          v18 = v23;
          v24 = *(_DWORD*)(v23 + 8);
          if (v24 == v21) {
            break;
          }
          if (v24 < v21) {
            goto LABEL_22;
          }
        }
      } while ((GameRoutine_1a09d30(*(_QWORD*)(v18 + 16), *(_QWORD*)(v2 + 16)) &
                0x80000000) == 0);
    LABEL_22:
      if (v19 < (unsigned __int64)v20) {
        continue;
      }
      v9 = (_QWORD*)(v19 - 8);
    LABEL_34:
      if (a1 != v9) {
        *a1 = *v9;
      }
      *v9 = v2;
      return v9;
    }
    break;
  }
  v19 += 8LL;
  goto LABEL_26;
}

__int64 GameHr_109ea0(__int64 result, __int64 a2, __int64 a3, __int64* a4)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  __int64* v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;

  v4 = a3 - 2;
  if (a3 < 2) {
    return result;
  }
  v5 = v4 >> 1;
  v6 = result;
  if ((__int64)(v4 >> 1) < ((__int64)a4 - result) >> 3) {
    return result;
  }
  v7 = ((__int64)a4 - result) >> 2;
  v9 = v7 + 1;
  v10 = v7 + 2;
  v11 = (_QWORD*)(result + 8 * (v7 + 1));
  if (v7 + 2 < a3) {
    v12 = v11[1];
    v13 = *(_DWORD*)(*v11 + 8LL);
    v14 = *(_DWORD*)(v12 + 8);
    if (v13 == v14) {
      v15 = a4;
      result =
          GameRoutine_1a09d30(*(_QWORD*)(*v11 + 16LL), *(_QWORD*)(v12 + 16));
      a4 = v15;
      if ((result & 0x80000000) == 0) {
        goto LABEL_9;
      }
    }
    else if (v13 >= v14) {
      goto LABEL_9;
    }
    ++v11;
    v9 = v10;
  }
LABEL_9:
  v16 = *v11;
  v17 = *a4;
  v18 = *(_DWORD*)(*v11 + 8LL);
  v19 = *(_DWORD*)(*a4 + 8);
  if (v18 == v19) {
    v20 = a4;
    result = GameRoutine_1a09d30(*(_QWORD*)(v16 + 16), *(_QWORD*)(v17 + 16));
    a4 = v20;
    if ((result & 0x80000000) != 0) {
      return result;
    }
  }
  else if (v18 < v19) {
    return result;
  }
  *a4 = v16;
  if (v5 >= v9) {
    while (1) {
      v21 = 2 * v9 + 2;
      v22 = (_QWORD*)(v6 + 8 * ((2 * v9) | 1));
      v9 = (2 * v9) | 1;
      if (v21 < a3) {
        v23 = v22[1];
        v24 = *(_DWORD*)(*v22 + 8LL);
        v25 = *(_DWORD*)(v23 + 8);
        if (v24 != v25) {
          break;
        }
        result =
            GameRoutine_1a09d30(*(_QWORD*)(*v22 + 16LL), *(_QWORD*)(v23 + 16));
        if ((result & 0x80000000) != 0) {
          goto LABEL_22;
        }
      }
    LABEL_23:
      v26 = *v22;
      v27 = *(_DWORD*)(v17 + 8);
      v28 = *(_DWORD*)(*v22 + 8LL);
      if (v28 == v27) {
        result =
            GameRoutine_1a09d30(*(_QWORD*)(v26 + 16), *(_QWORD*)(v17 + 16));
        if ((result & 0x80000000) != 0) {
          goto LABEL_25;
        }
      }
      else if (v28 < v27) {
        goto LABEL_25;
      }
      *v11 = v26;
      v11 = v22;
      if (v5 < v9) {
        goto LABEL_26;
      }
    }
    if (v24 >= v25) {
      goto LABEL_23;
    }
  LABEL_22:
    ++v22;
    v9 = v21;
    goto LABEL_23;
  }
LABEL_25:
  v22 = v11;
LABEL_26:
  *v22 = v17;
  return result;
}

__int64 GameHr_10a040(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  signed __int64 v5;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  unsigned __int64 v29;
  unsigned int v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned int v33;

  if (a4 < 2) {
    return result;
  }
  v4 = *(_QWORD*)result;
  v5 = (unsigned __int64)(a4 - 2) >> 1;
  v8 = result;
  v9 = 0;
  v10 = (_QWORD*)result;
  do {
    v11 = &v10[v9];
    v12 = v10;
    v10 = v11 + 1;
    v13 = 2 * v9 + 2;
    v9 = (2 * v9) | 1;
    if (v13 < a4) {
      v16 = v11[2];
      v15 = v11 + 2;
      v14 = v16;
      v17 = *(v15 - 1);
      v18 = *(_DWORD*)(v16 + 8);
      v19 = *(_DWORD*)(v17 + 8);
      if (v19 == v18) {
        result =
            GameRoutine_1a09d30(*(_QWORD*)(v17 + 16), *(_QWORD*)(v14 + 16));
        if ((result & 0x80000000) != 0) {
          goto LABEL_3;
        }
      }
      else if (v19 < v18) {
      LABEL_3:
        v10 = v15;
        v9 = v13;
      }
    }
    *v12 = *v10;
  } while (v9 <= v5);
  v20 = (_QWORD*)(a2 - 8);
  if (v10 == (_QWORD*)(a2 - 8)) {
    *v10 = v4;
    return result;
  }
  *v10 = *v20;
  *v20 = v4;
  v21 = ((__int64)v10 - v8 + 8) >> 3;
  v22 = v21 - 2;
  if (v21 < 2) {
    return result;
  }
  v23 = v22 >> 1;
  v24 = *v10;
  v25 = v8 + 8 * (v22 >> 1);
  v26 = *(_QWORD*)v25;
  v27 = *(_DWORD*)(*v10 + 8LL);
  v28 = *(_DWORD*)(*(_QWORD*)v25 + 8LL);
  if (v28 == v27) {
    result = GameRoutine_1a09d30(*(_QWORD*)(v26 + 16), *(_QWORD*)(v24 + 16));
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  else if (v28 >= v27) {
    return result;
  }
  *v10 = v26;
  if (v22 >= 2) {
    while (1) {
      v29 = v23 - 1;
      v30 = *(_DWORD*)(v24 + 8);
      v23 = (v23 - 1) >> 1;
      v31 = v8 + 8 * v23;
      v32 = *(_QWORD*)v31;
      v33 = *(_DWORD*)(*(_QWORD*)v31 + 8LL);
      if (v33 == v30) {
        result =
            GameRoutine_1a09d30(*(_QWORD*)(v32 + 16), *(_QWORD*)(v24 + 16));
        if ((result & 0x80000000) == 0) {
          break;
        }
      }
      else if (v33 >= v30) {
        break;
      }
      *(_QWORD*)v25 = v32;
      v25 = v8 + 8 * v23;
      if (v29 <= 1) {
        goto LABEL_25;
      }
    }
  }
  v31 = v25;
LABEL_25:
  *(_QWORD*)v31 = v24;
  return result;
}

__int64 GameHr_10a250(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 result;

  v3 = GameData_21344e8;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = v3 + 2;
  *(_QWORD*)(a1 + 8) = a2;
  GameRoutine_190020_alt1((__int64*)(a1 + 24), &GameData_1a9f09e);
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_DWORD*)(a1 + 240) = 0x2000;
  *(_DWORD*)(a1 + 256) = 0x2000;
  *(_DWORD*)(a1 + 272) = 0x2000;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_DWORD*)(a1 + 288) = 0x2000;
  *(_QWORD*)(a1 + 296) = 0;
  *(_DWORD*)(a1 + 304) = 0x2000;
  *(_QWORD*)(a1 + 344) = 0;
  *(_DWORD*)(a1 + 320) = 0x2000;
  *(_DWORD*)(a1 + 336) = 0x2000;
  *(_DWORD*)(a1 + 352) = 0x2000;
  *(_DWORD*)(a1 + 367) = 0;
  *(_DWORD*)(a1 + 372) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  GameRoutine_190020_alt1((__int64*)(a1 + 384), &GameData_1a9f09e);
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_DWORD*)(a1 + 600) = 0x2000;
  *(_QWORD*)(a1 + 608) = 0;
  *(_DWORD*)(a1 + 616) = 0x2000;
  *(_QWORD*)(a1 + 624) = 0;
  *(_DWORD*)(a1 + 632) = 0x2000;
  *(_QWORD*)(a1 + 640) = 0;
  *(_DWORD*)(a1 + 648) = 0x2000;
  *(_QWORD*)(a1 + 656) = 0;
  *(_DWORD*)(a1 + 664) = 0x2000;
  *(_QWORD*)(a1 + 672) = 0;
  *(_DWORD*)(a1 + 680) = 0x2000;
  *(_QWORD*)(a1 + 688) = 0;
  *(_DWORD*)(a1 + 696) = 0x2000;
  *(_QWORD*)(a1 + 704) = 0;
  *(_DWORD*)(a1 + 712) = 0x2000;
  *(_QWORD*)(a1 + 720) = 0;
  *(_DWORD*)(a1 + 727) = 0;
  *(_DWORD*)(a1 + 732) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  GameRoutine_190020_alt1((__int64*)(a1 + 744), &GameData_1a9f09e);
  *(_QWORD*)(a1 + 952) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 856) = 0;
  *(_QWORD*)(a1 + 848) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_QWORD*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 808) = 0;
  *(_QWORD*)(a1 + 800) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 776) = 0;
  *(_QWORD*)(a1 + 768) = 0;
  *(_DWORD*)(a1 + 960) = 0x2000;
  *(_QWORD*)(a1 + 968) = 0;
  *(_DWORD*)(a1 + 976) = 0x2000;
  *(_QWORD*)(a1 + 984) = 0;
  *(_DWORD*)(a1 + 992) = 0x2000;
  *(_QWORD*)(a1 + 1000) = 0;
  *(_DWORD*)(a1 + 1008) = 0x2000;
  *(_QWORD*)(a1 + 1016) = 0;
  *(_DWORD*)(a1 + 1024) = 0x2000;
  *(_QWORD*)(a1 + 1032) = 0;
  *(_DWORD*)(a1 + 1040) = 0x2000;
  *(_QWORD*)(a1 + 1048) = 0;
  *(_DWORD*)(a1 + 1056) = 0x2000;
  *(_QWORD*)(a1 + 1064) = 0;
  *(_DWORD*)(a1 + 1072) = 0x2000;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_DWORD*)(a1 + 1087) = 0;
  *(_DWORD*)(a1 + 1092) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  GameRoutine_190020_alt1((__int64*)(a1 + 1104), &GameData_1a9f09e);
  *(_QWORD*)(a1 + 1312) = 0;
  *(_QWORD*)(a1 + 1304) = 0;
  *(_QWORD*)(a1 + 1296) = 0;
  *(_QWORD*)(a1 + 1288) = 0;
  *(_QWORD*)(a1 + 1280) = 0;
  *(_QWORD*)(a1 + 1272) = 0;
  *(_QWORD*)(a1 + 1264) = 0;
  *(_QWORD*)(a1 + 1256) = 0;
  *(_QWORD*)(a1 + 1248) = 0;
  *(_QWORD*)(a1 + 1240) = 0;
  *(_QWORD*)(a1 + 1452) = 0;
  *(_QWORD*)(a1 + 1232) = 0;
  *(_QWORD*)(a1 + 1224) = 0;
  *(_QWORD*)(a1 + 1216) = 0;
  *(_QWORD*)(a1 + 1208) = 0;
  *(_QWORD*)(a1 + 1200) = 0;
  *(_QWORD*)(a1 + 1192) = 0;
  *(_QWORD*)(a1 + 1184) = 0;
  *(_QWORD*)(a1 + 1176) = 0;
  *(_QWORD*)(a1 + 1168) = 0;
  *(_QWORD*)(a1 + 1160) = 0;
  *(_QWORD*)(a1 + 1152) = 0;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1136) = 0;
  *(_QWORD*)(a1 + 1128) = 0;
  *(_DWORD*)(a1 + 1320) = 0x2000;
  *(_QWORD*)(a1 + 1328) = 0;
  *(_DWORD*)(a1 + 1336) = 0x2000;
  *(_QWORD*)(a1 + 1344) = 0;
  *(_DWORD*)(a1 + 1352) = 0x2000;
  *(_QWORD*)(a1 + 1360) = 0;
  *(_BYTE*)(a1 + 1572) = 1;
  *(_DWORD*)(a1 + 1368) = 0x2000;
  *(_QWORD*)(a1 + 1376) = 0;
  *(_DWORD*)(a1 + 1384) = 0x2000;
  *(_QWORD*)(a1 + 1392) = 0;
  *(_DWORD*)(a1 + 1400) = 0x2000;
  *(_QWORD*)(a1 + 1408) = 0;
  *(_DWORD*)(a1 + 1416) = 0x2000;
  *(_QWORD*)(a1 + 1424) = 0;
  *(_DWORD*)(a1 + 1432) = 0x2000;
  *(_QWORD*)(a1 + 1440) = 0;
  *(_DWORD*)(a1 + 1447) = 0;
  *(_QWORD*)(a1 + 1464) = 0;
  *(_DWORD*)(a1 + 1472) = 0x2000;
  *(_QWORD*)(a1 + 1480) = 0;
  *(_DWORD*)(a1 + 1488) = 0x2000;
  *(_QWORD*)(a1 + 1496) = 0;
  *(_DWORD*)(a1 + 1504) = 0x2000;
  *(_QWORD*)(a1 + 1512) = 0;
  *(_DWORD*)(a1 + 1520) = 0x2000;
  *(_DWORD*)(a1 + 1568) = 0;
  *(_QWORD*)(a1 + 1560) = 0;
  *(_QWORD*)(a1 + 1552) = 0;
  *(_QWORD*)(a1 + 1544) = 0;
  *(_QWORD*)(a1 + 1536) = 0;
  *(_QWORD*)(a1 + 1528) = 0;
  *(_QWORD*)(a1 + 1576) = a1 + 1576;
  *(_QWORD*)(a1 + 1584) = a1 + 1576;
  *(_QWORD*)(a1 + 1592) = 0;
  snd_fnd_WeakHandle_reset(a1 + 232);
  snd_fnd_WeakHandle_reset(a1 + 248);
  snd_fnd_WeakHandle_reset(a1 + 264);
  snd_fnd_WeakHandle_reset(a1 + 280);
  snd_fnd_WeakHandle_reset(a1 + 296);
  snd_fnd_WeakHandle_reset(a1 + 312);
  snd_fnd_WeakHandle_reset(a1 + 328);
  snd_fnd_WeakHandle_reset(a1 + 344);
  *(_DWORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 360) = 0;
  *(_DWORD*)(a1 + 76) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(_WORD*)(a1 + 364) = 0;
  *(_BYTE*)(a1 + 366) = 0;
  *(_DWORD*)(a1 + 148) = 0;
  *(_DWORD*)(a1 + 367) = 0;
  *(_QWORD*)(a1 + 56) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 188) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 68) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 80) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 196) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 92) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 100) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 108) = 1065353216;
  *(_QWORD*)(a1 + 204) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 120) = 1065353216;
  *(_DWORD*)(a1 + 116) = 1065353216;
  *(_QWORD*)(a1 + 132) = 1065353216;
  *(_DWORD*)(a1 + 128) = 1065353216;
  *(_DWORD*)(a1 + 212) = 1065353216;
  *(_QWORD*)(a1 + 140) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 216) = 1065353216;
  *(_QWORD*)(a1 + 152) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 220) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 164) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 172) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 180) = 1065353216;
  *(_DWORD*)(a1 + 228) = 1065353216;
  snd_fnd_WeakHandle_reset(a1 + 592);
  snd_fnd_WeakHandle_reset(a1 + 608);
  snd_fnd_WeakHandle_reset(a1 + 624);
  snd_fnd_WeakHandle_reset(a1 + 640);
  snd_fnd_WeakHandle_reset(a1 + 656);
  snd_fnd_WeakHandle_reset(a1 + 672);
  snd_fnd_WeakHandle_reset(a1 + 688);
  snd_fnd_WeakHandle_reset(a1 + 704);
  *(_QWORD*)(a1 + 416) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 424) = 0;
  *(_DWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 428) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 436) = 0;
  *(_QWORD*)(a1 + 440) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 452) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 460) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 468) = 1065353216;
  *(_QWORD*)(a1 + 548) = 0x3F8000003F800000LL;
  *(_WORD*)(a1 + 724) = 0;
  *(_QWORD*)(a1 + 480) = 1065353216;
  *(_DWORD*)(a1 + 476) = 1065353216;
  *(_QWORD*)(a1 + 492) = 1065353216;
  *(_DWORD*)(a1 + 488) = 1065353216;
  *(_DWORD*)(a1 + 572) = 1065353216;
  *(_BYTE*)(a1 + 726) = 0;
  *(_QWORD*)(a1 + 500) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 508) = 0;
  *(_DWORD*)(a1 + 576) = 1065353216;
  *(_QWORD*)(a1 + 556) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 512) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 520) = 0;
  *(_DWORD*)(a1 + 588) = 1065353216;
  *(_QWORD*)(a1 + 564) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 727) = 0;
  *(_QWORD*)(a1 + 580) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 524) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 532) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 540) = 1065353216;
  snd_fnd_WeakHandle_reset(a1 + 952);
  snd_fnd_WeakHandle_reset(a1 + 968);
  snd_fnd_WeakHandle_reset(a1 + 984);
  snd_fnd_WeakHandle_reset(a1 + 1000);
  snd_fnd_WeakHandle_reset(a1 + 1016);
  snd_fnd_WeakHandle_reset(a1 + 1032);
  snd_fnd_WeakHandle_reset(a1 + 1048);
  snd_fnd_WeakHandle_reset(a1 + 1064);
  *(_QWORD*)(a1 + 776) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 784) = 0;
  *(_DWORD*)(a1 + 1080) = 0;
  *(_DWORD*)(a1 + 796) = 0;
  *(_QWORD*)(a1 + 800) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 808) = 0;
  *(_WORD*)(a1 + 1084) = 0;
  *(_QWORD*)(a1 + 840) = 1065353216;
  *(_DWORD*)(a1 + 836) = 1065353216;
  *(_DWORD*)(a1 + 848) = 1065353216;
  *(_QWORD*)(a1 + 908) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 932) = 1065353216;
  *(_BYTE*)(a1 + 1086) = 0;
  *(_DWORD*)(a1 + 868) = 0;
  *(_DWORD*)(a1 + 936) = 1065353216;
  *(_QWORD*)(a1 + 872) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 880) = 0;
  *(_DWORD*)(a1 + 948) = 1065353216;
  *(_QWORD*)(a1 + 788) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 916) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 812) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 820) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 828) = 1065353216;
  *(_QWORD*)(a1 + 924) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 852) = 1065353216;
  *(_QWORD*)(a1 + 860) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 1087) = 0;
  *(_QWORD*)(a1 + 940) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 884) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 892) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 900) = 1065353216;
  snd_fnd_WeakHandle_reset(a1 + 1312);
  snd_fnd_WeakHandle_reset(a1 + 1328);
  snd_fnd_WeakHandle_reset(a1 + 1344);
  snd_fnd_WeakHandle_reset(a1 + 1360);
  snd_fnd_WeakHandle_reset(a1 + 1376);
  snd_fnd_WeakHandle_reset(a1 + 1392);
  snd_fnd_WeakHandle_reset(a1 + 1408);
  result = snd_fnd_WeakHandle_reset(a1 + 1424);
  *(_QWORD*)(a1 + 1528) = 0;
  *(_QWORD*)(a1 + 1136) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 1144) = 0x3F80000000000000LL;
  *(_DWORD*)(a1 + 1440) = 0;
  *(_QWORD*)(a1 + 1152) = 1065353216;
  *(_QWORD*)(a1 + 1268) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 1160) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 1168) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 1176) = 1065353216;
  *(_QWORD*)(a1 + 1184) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 1192) = 0;
  *(_BYTE*)(a1 + 1444) = 0;
  *(_DWORD*)(a1 + 1204) = 0;
  *(_QWORD*)(a1 + 1208) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 1216) = 0;
  *(_QWORD*)(a1 + 1248) = 1065353216;
  *(_QWORD*)(a1 + 1276) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 1244) = 1065353216;
  *(_BYTE*)(a1 + 1449) = 0;
  *(_QWORD*)(a1 + 1256) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 1264) = 0;
  *(_DWORD*)(a1 + 1308) = 1065353216;
  *(_BYTE*)(a1 + 1450) = 0;
  *(_BYTE*)(a1 + 1541) = 1;
  *(_QWORD*)(a1 + 1552) = 0;
  *(_BYTE*)(a1 + 1560) = 0;
  *(_BYTE*)(a1 + 1552) = 1;
  *(_QWORD*)(a1 + 1284) = 0x3F8000003F800000LL;
  *(_BYTE*)(a1 + 1563) = 1;
  *(_QWORD*)(a1 + 1196) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 1445) = 0;
  *(_QWORD*)(a1 + 1292) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 1220) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 1228) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 1236) = 1065353216;
  *(_QWORD*)(a1 + 1300) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 1535) = 0;
  *(_BYTE*)(a1 + 1530) = 1;
  *(_QWORD*)(a1 + 1542) = 0;
  *(_QWORD*)(a1 + 1564) = 0;
  *(_WORD*)(a1 + 1528) = 257;
  *(_WORD*)(a1 + 1539) = 257;
  *(_WORD*)(a1 + 1550) = 257;
  *(_WORD*)(a1 + 1561) = 257;
  return result;
}

__int64 GameHr_10ab20(__int64 a1)
{
  __int64 v2;

  v2 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 1600, 32);
  GameRoutine_10a250(v2, a1);
  GameData_2178e60 = v2;
  return v2;
}

__int64 GameHr_10b000(__int64 result, int a2, unsigned int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  __int64 v8;
  float v9;
  float v10;

  v3 = result + 360LL * a2 + 16;
  if (a3 == 11) {
    v4 = result;
    GameRoutine_120360(*(_QWORD*)(result + 8), 0,
                       *(unsigned int*)(result + 360LL * a2 + 372),
                       *(float*)(result + 360LL * a2 + 56) *
                           *(float*)(result + 360LL * a2 + 188));
    GameRoutine_120360(*(_QWORD*)(v4 + 8), 1, *(unsigned int*)(v3 + 356),
                       *(float*)(v3 + 52) * *(float*)(v3 + 176));
    v5 = *(_QWORD*)(v4 + 8);
    v6 = 2;
    v7 = *(float*)(v3 + 64) * *(float*)(v3 + 180);
    v8 = *(unsigned int*)(v3 + 356);
    return GameRoutine_120360(v5, v6, v8, v7);
  }
  if (a3 <= 2) {
    v5 = *(_QWORD*)(result + 8);
    v9 = *(float*)(v3 + 12LL * a3 + 40);
    v10 = *(float*)(v3 + 4LL * a3 + 172);
    if (a3 == 2) {
      v6 = 2;
    }
    else {
      v6 = a3 == 1;
    }
    v8 = *(unsigned int*)(v3 + 356);
    v7 = v9 * v10;
    return GameRoutine_120360(v5, v6, v8, v7);
  }
  return result;
}

__int64 GameHr_10c3d0(__int64 a1, __int64 a2, unsigned int a3)
{
  GameRoutine_10c480(a1, 0, a2, a3);
  GameRoutine_10c480(a1, 1, a2, a3);
  GameRoutine_10c480(a1, 2, a2, a3);
  return GameRoutine_10c480(a1, 3, a2, a3);
}

__int64 GameHr_10c600(__int64 result)
{
  *(_DWORD*)(result + 532) = 0;
  *(_DWORD*)(result + 544) = 0;
  *(_DWORD*)(result + 784) = 0;
  *(_DWORD*)(result + 796) = 0;
  *(_DWORD*)(result + 808) = 0;
  *(_DWORD*)(result + 820) = 0;
  *(_DWORD*)(result + 832) = 0;
  *(_DWORD*)(result + 844) = 0;
  *(_QWORD*)(result + 436) = 0x3F80000000000000LL;
  *(_QWORD*)(result + 56) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 64) = 0x3F80000000000000LL;
  *(_QWORD*)(result + 140) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 164) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 416) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 424) = 0x3F80000000000000LL;
  *(_DWORD*)(result + 72) = 1065353216;
  *(_QWORD*)(result + 76) = 0x3F80000000000000LL;
  *(_DWORD*)(result + 84) = 1065353216;
  *(_QWORD*)(result + 88) = 0x3F80000000000000LL;
  *(_DWORD*)(result + 96) = 1065353216;
  *(_QWORD*)(result + 100) = 0x3F80000000000000LL;
  *(_QWORD*)(result + 460) = 0x3F80000000000000LL;
  *(_DWORD*)(result + 108) = 1065353216;
  *(_QWORD*)(result + 112) = 0x3F80000000000000LL;
  *(_QWORD*)(result + 120) = 1065353216;
  *(_QWORD*)(result + 132) = 1065353216;
  *(_DWORD*)(result + 128) = 1065353216;
  *(_QWORD*)(result + 148) = 0x3F80000000000000LL;
  *(_QWORD*)(result + 156) = 1065353216;
  *(_DWORD*)(result + 172) = 0;
  *(_DWORD*)(result + 176) = 1065353216;
  *(_QWORD*)(result + 180) = 1065353216;
  *(_DWORD*)(result + 432) = 1065353216;
  *(_DWORD*)(result + 444) = 1065353216;
  *(_QWORD*)(result + 468) = 1065353216;
  *(_QWORD*)(result + 448) = 0x3F80000000000000LL;
  *(_DWORD*)(result + 456) = 1065353216;
  *(_QWORD*)(result + 504) = 1065353216;
  *(_DWORD*)(result + 500) = 1065353216;
  *(_DWORD*)(result + 512) = 1065353216;
  *(_DWORD*)(result + 528) = 1065353216;
  *(_DWORD*)(result + 524) = 1065353216;
  *(_DWORD*)(result + 540) = 1065353216;
  *(_DWORD*)(result + 536) = 1065353216;
  *(_DWORD*)(result + 780) = 1065353216;
  *(_QWORD*)(result + 476) = 0x3F8000003F800000LL;
  *(_DWORD*)(result + 776) = 1065353216;
  *(_DWORD*)(result + 792) = 1065353216;
  *(_DWORD*)(result + 788) = 1065353216;
  *(_DWORD*)(result + 804) = 1065353216;
  *(_DWORD*)(result + 800) = 1065353216;
  *(_DWORD*)(result + 816) = 1065353216;
  *(_DWORD*)(result + 812) = 1065353216;
  *(_DWORD*)(result + 828) = 1065353216;
  *(_DWORD*)(result + 824) = 1065353216;
  *(_DWORD*)(result + 840) = 1065353216;
  *(_QWORD*)(result + 484) = 0x3F80000000000000LL;
  *(_DWORD*)(result + 836) = 1065353216;
  *(_DWORD*)(result + 852) = 1065353216;
  *(_DWORD*)(result + 848) = 1065353216;
  *(_DWORD*)(result + 856) = 0;
  *(_DWORD*)(result + 864) = 1065353216;
  *(_DWORD*)(result + 860) = 1065353216;
  *(_DWORD*)(result + 868) = 0;
  *(_DWORD*)(result + 876) = 1065353216;
  *(_DWORD*)(result + 872) = 1065353216;
  *(_DWORD*)(result + 880) = 0;
  *(_QWORD*)(result + 492) = 1065353216;
  *(_DWORD*)(result + 888) = 1065353216;
  *(_DWORD*)(result + 884) = 1065353216;
  *(_DWORD*)(result + 892) = 0;
  *(_DWORD*)(result + 900) = 1065353216;
  *(_DWORD*)(result + 896) = 1065353216;
  *(_DWORD*)(result + 904) = 0;
  *(_DWORD*)(result + 1140) = 1065353216;
  *(_DWORD*)(result + 1136) = 1065353216;
  *(_DWORD*)(result + 1144) = 0;
  *(_DWORD*)(result + 1152) = 1065353216;
  *(_QWORD*)(result + 516) = 1065353216;
  *(_DWORD*)(result + 1148) = 1065353216;
  *(_DWORD*)(result + 1156) = 0;
  *(_DWORD*)(result + 1164) = 1065353216;
  *(_DWORD*)(result + 1160) = 1065353216;
  *(_DWORD*)(result + 1168) = 0;
  *(_DWORD*)(result + 1176) = 1065353216;
  *(_DWORD*)(result + 1172) = 1065353216;
  *(_DWORD*)(result + 1180) = 0;
  *(_DWORD*)(result + 1188) = 1065353216;
  *(_DWORD*)(result + 1184) = 1065353216;
  *(_DWORD*)(result + 1192) = 0;
  *(_DWORD*)(result + 1200) = 1065353216;
  *(_DWORD*)(result + 1196) = 1065353216;
  *(_DWORD*)(result + 1204) = 0;
  *(_DWORD*)(result + 1212) = 1065353216;
  *(_DWORD*)(result + 1208) = 1065353216;
  *(_DWORD*)(result + 1216) = 0;
  *(_DWORD*)(result + 1224) = 1065353216;
  *(_DWORD*)(result + 1220) = 1065353216;
  *(_DWORD*)(result + 1228) = 0;
  *(_DWORD*)(result + 1236) = 1065353216;
  *(_DWORD*)(result + 1232) = 1065353216;
  *(_DWORD*)(result + 1240) = 0;
  *(_DWORD*)(result + 1248) = 1065353216;
  *(_DWORD*)(result + 1244) = 1065353216;
  *(_DWORD*)(result + 1252) = 0;
  *(_DWORD*)(result + 1260) = 1065353216;
  *(_DWORD*)(result + 1256) = 1065353216;
  *(_DWORD*)(result + 1264) = 0;
  return result;
}

__int64 GameHr_10de50(__int64 a1, __int64 a2)
{
  __int64* v2;

  v2 = GameData_2134518[0];
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 60) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_DWORD*)(a1 + 80) = 0;
  *(_QWORD*)a1 = v2 + 2;
  *(_QWORD*)(a1 + 8) = a2;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 40) = a1 + 16;
  *(_QWORD*)(a1 + 48) = a1 + 24;
  *(_QWORD*)(a1 + 32) = 16;
  *(_WORD*)(a1 + 56) = 0;
  return GameRoutine_1a0a040(a1 + 56, 1, 0);
}

__int64 GameHr_10e480(__int64 a1, __int64 a2)
{
  __int64* v2;
  _QWORD* v3;

  v2 = GameData_2134520;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = a2;
  *(_QWORD*)(a1 + 80) = 0;
  v3 = (_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_WORD*)(a1 + 72) = 0;
  *(_QWORD*)a1 = v2 + 2;
  *(_QWORD*)(a1 + 8) = 0;
  GameRoutine_10f800(a1 + 80, 5);
  GameRoutine_10fba0(*v3, 0, 0, 0);
  GameRoutine_10fba0(*v3 + 24LL, 0, 0, 0);
  GameRoutine_10fba0(*v3 + 48LL, 0, 0, 0);
  GameRoutine_10fba0(*v3 + 72LL, 0, 0, 0);
  return GameRoutine_10fba0(*v3 + 96LL, 0, 0, 0);
}

__int64 GameHr_10e7a0(__int64 a1)
{
  __int64 v2;

  v2 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 104, 32);
  GameRoutine_10e480(v2, a1);
  GameData_2178e90 = v2;
  return v2;
}

__int64 GameHr_10eb50(__int64 a1, __int64 a2)
{
  __int64 v3;

  nn_os_LockMutex((__int64)GameData_2134528[0]);
  if (a2 != 0) {
    if ((snd_fnd_WeakHandle_isValid((__int64*)(a2 + 24)) & 1) != 0) {
      v3 = snd_fnd_WeakHandle_get(a2 + 24);
      LOBYTE(a2) = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 56LL))(v3);
    }
    else {
      LOBYTE(a2) = 0;
    }
  }
  nn_os_UnlockMutex((__int64)&GameData_2178e70);
  return a2 & 1;
}

__int64 GameHr_10ebc0(__int64 result)
{
  __int64 v1;

  if ((*(_BYTE*)(result + 73) & 1) == 0) {
    v1 = result;
    result = GameRoutine_10e820(result);
    *(_BYTE*)(v1 + 73) = 1;
  }
  return result;
}

__int64 GameHr_10f070(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v4;

  nn_os_LockMutex((__int64)GameData_2134528[0]);
  v3 = *a2;
  if (v3 != 0) {
    nn_os_LockMutex((__int64)&GameData_2178e70);
    if ((snd_fnd_WeakHandle_isValid((__int64*)(v3 + 24)) & 1) != 0) {
      v4 = snd_fnd_WeakHandle_get(v3 + 24);
      LOBYTE(v3) = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 56LL))(v4);
    }
    else {
      LOBYTE(v3) = 0;
    }
    nn_os_UnlockMutex((__int64)&GameData_2178e70);
  }
  nn_os_UnlockMutex((__int64)&GameData_2178e70);
  return v3 & 1;
}

__int64 GameHr_10f100(__int64 a1, __int64 a2)
{
  __int16* v3;

  v3 = GameData_2134528[0];
  GameRoutine_1a09b70(GameData_2134528[0]);
  --*(_DWORD*)(a2 + 40);
  return GameRoutine_1a09b80(v3);
}

__int64 GameHr_10f460(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(result + 80);
  v3 = *(_QWORD*)(v1 + 24);
  v2 = *(_QWORD*)(v1 + 32);
  if (v2 != v3) {
    v4 = 0;
    do {
      v5 = *(_QWORD*)(v3 + 8 * v4);
      if (v5 != 0) {
        --*(_DWORD*)(v5 + 40);
        *(_QWORD*)(*(_QWORD*)(v1 + 24) + 8 * v4) = 0;
        v3 = *(_QWORD*)(v1 + 24);
        v2 = *(_QWORD*)(v1 + 32);
      }
      ++v4;
    } while (v4 < (v2 - v3) >> 3);
  }
  return result;
}

__int64 GameHr_10f520(__int64 a1)
{
  __int64* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int16* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int16* v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int16* v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int16* v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int16* v34;
  __int64 v35;
  __int64 v36;
  char v37;

  v1 = *(__int64**)(a1 + 80);
  v4 = *v1;
  v3 = v1[1];
  if (v3 == *v1) {
  LABEL_9:
    v11 = v1[3];
    v10 = v1[4];
    if (v10 != v11) {
      v12 = 0;
      v13 = GameData_2134528[0];
      do {
        v14 = *(_QWORD*)(v11 + 8 * v12);
        if (v14 != 0) {
          nn_os_LockMutex((__int64)v13);
          if ((snd_fnd_WeakHandle_isValid((__int64*)(v14 + 24)) & 1) == 0) {
            goto LABEL_41;
          }
          v15 = snd_fnd_WeakHandle_get(v14 + 24);
          v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 56LL))(v15);
          nn_os_UnlockMutex((__int64)v13);
          if ((v16 & 1) == 0) {
            return 0;
          }
          v11 = v1[3];
          v10 = v1[4];
        }
        ++v12;
      } while (v12 < (v10 - v11) >> 3);
      v1 = *(__int64**)(a1 + 80);
    }
    v18 = v1[6];
    v17 = v1[7];
    if (v17 != v18) {
      v19 = 0;
      v20 = GameData_2134528[0];
      do {
        v21 = *(_QWORD*)(v18 + 8 * v19);
        if (v21 != 0) {
          nn_os_LockMutex((__int64)v20);
          if ((snd_fnd_WeakHandle_isValid((__int64*)(v21 + 24)) & 1) == 0) {
            goto LABEL_41;
          }
          v22 = snd_fnd_WeakHandle_get(v21 + 24);
          v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 56LL))(v22);
          nn_os_UnlockMutex((__int64)v20);
          if ((v23 & 1) == 0) {
            return 0;
          }
          v18 = v1[6];
          v17 = v1[7];
        }
        ++v19;
      } while (v19 < (v17 - v18) >> 3);
      v1 = *(__int64**)(a1 + 80);
    }
    v25 = v1[9];
    v24 = v1[10];
    if (v24 != v25) {
      v26 = 0;
      v27 = GameData_2134528[0];
      do {
        v28 = *(_QWORD*)(v25 + 8 * v26);
        if (v28 != 0) {
          nn_os_LockMutex((__int64)v27);
          if ((snd_fnd_WeakHandle_isValid((__int64*)(v28 + 24)) & 1) == 0) {
            goto LABEL_41;
          }
          v29 = snd_fnd_WeakHandle_get(v28 + 24);
          v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 56LL))(v29);
          nn_os_UnlockMutex((__int64)v27);
          if ((v30 & 1) == 0) {
            return 0;
          }
          v25 = v1[9];
          v24 = v1[10];
        }
        ++v26;
      } while (v26 < (v24 - v25) >> 3);
      v1 = *(__int64**)(a1 + 80);
    }
    v32 = v1[12];
    v31 = v1[13];
    if (v31 != v32) {
      v33 = 0;
      v34 = GameData_2134528[0];
      do {
        v35 = *(_QWORD*)(v32 + 8 * v33);
        if (v35 != 0) {
          nn_os_LockMutex((__int64)v34);
          if ((snd_fnd_WeakHandle_isValid((__int64*)(v35 + 24)) & 1) == 0) {
            goto LABEL_41;
          }
          v36 = snd_fnd_WeakHandle_get(v35 + 24);
          v37 = (*(__int64 (**)(__int64))(*(_QWORD*)v36 + 56LL))(v36);
          nn_os_UnlockMutex((__int64)v34);
          if ((v37 & 1) == 0) {
            return 0;
          }
          v32 = v1[12];
          v31 = v1[13];
        }
        ++v33;
      } while (v33 < (v31 - v32) >> 3);
    }
    return 1;
  }
  v5 = 0;
  v6 = GameData_2134528[0];
  while (1) {
    v7 = *(_QWORD*)(v4 + 8 * v5);
    if (v7 != 0) {
      nn_os_LockMutex((__int64)v6);
      if ((snd_fnd_WeakHandle_isValid((__int64*)(v7 + 24)) & 1) == 0) {
        break;
      }
      v8 = snd_fnd_WeakHandle_get(v7 + 24);
      v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 56LL))(v8);
      nn_os_UnlockMutex((__int64)v6);
      if ((v9 & 1) == 0) {
        return 0;
      }
      v4 = *v1;
      v3 = v1[1];
    }
    if (++v5 >= (unsigned __int64)((v3 - v4) >> 3)) {
      v1 = *(__int64**)(a1 + 80);
      goto LABEL_9;
    }
  }
LABEL_41:
  nn_os_UnlockMutex((__int64)&GameData_2178e70);
  return 0;
}

__int64 GameHr_10fdd0(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 result;

  v3 = GameData_2134530;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = a2;
  *(_DWORD*)(a1 + 64) = 0;
  *(_BYTE*)(a1 + 68) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 100) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_DWORD*)(a1 + 120) = 0;
  *(_QWORD*)a1 = v3 + 2;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 72) = a1 + 72;
  *(_QWORD*)(a1 + 80) = a1 + 72;
  *(_WORD*)(a1 + 96) = 0;
  result = GameRoutine_1a0a040(a1 + 96, 1, 0);
  *(_BYTE*)(a1 + 128) = 0;
  *(_BYTE*)(a1 + 129) = 0;
  return result;
}

__int64 GameHr_10fe60(_QWORD* a1)
{
  __int64 result;
  __int64* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;

  *a1 = GameData_2134530 + 2;
  GameRoutine_1100a0();
  result = GameRoutine_1a09f60(a1 + 12);
  v3 = GameData_212d480[0];
  if (a1[11] != 0) {
    v4 = (_QWORD*)a1[10];
    v5 = *(_QWORD**)(a1[9] + 8LL);
    *(_QWORD*)(*v4 + 8LL) = v5;
    *v5 = *v4;
    a1[11] = 0;
    if (v4 != a1 + 9) {
      do {
        v12 = (_QWORD*)v4[1];
        v11 = v4[2];
        v4[2] = 0;
        if (v11 != 0) {
          if ((*(_BYTE*)(v11 + 16) & 1) != 0) {
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
                *v3, *(_QWORD*)(v11 + 32));
          }
          (*(void (**)(__int64, __int64))(*(_QWORD*)*v3 + 24LL))(*v3, v11);
        }
        result =
            (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)*v3 + 24LL))(*v3, v4);
        v4 = v12;
      } while (v12 != a1 + 9);
    }
  }
  v6 = a1[4];
  if (v6 != 0) {
    v7 = a1[5];
    v8 = a1[4];
    if (v6 != v7) {
      v9 = a1[5];
      do {
        v10 = *(_BYTE*)(v9 - 64);
        v9 -= 64;
        if ((v10 & 1) != 0) {
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
              *v3, *(_QWORD*)(v7 - 48));
        }
        v7 = v9;
      } while (v9 != v6);
      v8 = a1[4];
    }
    v13 = *v3;
    a1[5] = v6;
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v13 + 24LL))(v13, v8);
  }
  v14 = a1[1];
  if (v14 != 0) {
    v15 = a1[2];
    v16 = a1[1];
    if (v14 != v15) {
      do {
        v17 = *(_QWORD*)(v15 - 24);
        if (v17 != 0) {
          v18 = *(_QWORD*)(v15 - 16);
          v19 = *(_QWORD*)(v15 - 24);
          if (v17 != v18) {
            v20 = *(_QWORD*)(v15 - 16);
            do {
              v21 = *(_BYTE*)(v20 - 64);
              v20 -= 64;
              if ((v21 & 1) != 0) {
                (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
                    *v3, *(_QWORD*)(v18 - 48));
              }
              v18 = v20;
            } while (v20 != v17);
            v19 = *(_QWORD*)(v15 - 24);
          }
          *(_QWORD*)(v15 - 16) = v17;
          (*(void (**)(__int64, __int64))(*(_QWORD*)*v3 + 24LL))(*v3, v19);
        }
        if ((*(_BYTE*)(v15 - 48) & 1) != 0) {
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
              *v3, *(_QWORD*)(v15 - 32));
        }
        v15 -= 56;
      } while (v14 != v15);
      v16 = a1[1];
    }
    v22 = *v3;
    a1[2] = v14;
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v22 + 24LL))(v22, v16);
  }
  return result;
}

__int64 GameHr_1101f0(__int64 a1)
{
  __int64 v2;

  v2 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 136, 32);
  GameRoutine_10fdd0(v2, a1);
  GameData_2178e98 = v2;
  return v2;
}

__int64 GameHr_110250(__int64 result)
{
  if ((*(_BYTE*)(result + 68) & 1) == 0) {
    *(_DWORD*)(result + 64) = 0;
    *(_BYTE*)(result + 68) = 1;
  }
  return result;
}

__int64 GameHr_112550(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                      unsigned int a5)
{
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;

  GameRoutine_126150();
  GameRoutine_1261b0(a1 + 40);
  v8 = GameData_2134248[0];
  *(_DWORD*)(a1 + 5600) = 0x2000;
  *(_QWORD*)(a1 + 5592) = v8 + 2;
  GameRoutine_112320(a1 + 5592);
  v9 = GameData_2134550;
  *(_QWORD*)(a1 + 5608) = 0;
  *(_QWORD*)(a1 + 5616) = 0;
  *(_QWORD*)(a1 + 5624) = 0;
  *(_QWORD*)(a1 + 5632) = 0;
  *(_QWORD*)a1 = v9 + 2;
  *(_QWORD*)(a1 + 5592) = v9 + 156;
  *(_QWORD*)(a1 + 40) = v9 + 15;
  GameRoutine_190020(a1 + 5640, &GameData_1a9f09e);
  *(_QWORD*)(a1 + 5664) = 0;
  *(_DWORD*)(a1 + 5672) = 0x2000;
  v10 = GameData_212e2d8;
  *(_QWORD*)(a1 + 5688) = 0;
  *(_DWORD*)(a1 + 5696) = -1082130432;
  v10 += 16;
  *(_QWORD*)(a1 + 5720) = 0;
  *(_QWORD*)(a1 + 5712) = 0;
  *(_QWORD*)(a1 + 5744) = 0;
  *(_QWORD*)(a1 + 5736) = 0;
  *(_WORD*)(a1 + 5752) = 0;
  *(_QWORD*)(a1 + 5680) = v10;
  *(_QWORD*)(a1 + 5704) = v10;
  *(_QWORD*)(a1 + 5728) = v10;
  *(_DWORD*)(a1 + 5756) = 1090519040;
  *(_BYTE*)(a1 + 5760) = 0;
  v11 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*GameData_212e250 + 440LL))(*GameData_212e250, a4, a5);
  *(_QWORD*)(a1 + 5624) = v11;
  (*(void (**)(__int64, float))(*(_QWORD*)v11 + 32LL))(v11, 50.0);
  (*(void (**)(_QWORD, float))(**(_QWORD**)(a1 + 5624) + 40LL))(
      *(_QWORD*)(a1 + 5624), 10.0);
  (*(void (**)(_QWORD, float))(**(_QWORD**)(a1 + 5624) + 48LL))(
      *(_QWORD*)(a1 + 5624), 5.0);
  (*(void (**)(_QWORD, float))(**(_QWORD**)(a1 + 5624) + 24LL))(
      *(_QWORD*)(a1 + 5624), 0.8);
  return (*(__int64 (**)(_QWORD, float))(**(_QWORD**)(a1 + 5624) + 16LL))(
      *(_QWORD*)(a1 + 5624), 0.5);
}

#pragma GCC visibility pop
