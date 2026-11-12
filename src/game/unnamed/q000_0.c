#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern __int64* GameData_212d480[2];
extern __int64 GameData_212e2d0[2];
extern __int64* GameData_2134428;
extern __int16* GameData_21344c0[16];
__int64 GameRoutine_1056a0(__int64, __int64, __int64, ...);
__int64 GameRoutine_106040(void);
struct PseudoSret GameRoutine_10df70(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_112290(_QWORD, float);
__int64 GameRoutine_118df0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_118ff0(_QWORD);
__int64 GameRoutine_1678f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190020(_QWORD, _QWORD);
__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 GameRoutine_190240(_QWORD);
struct PseudoSret GameRoutine_190340(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
float GameRoutine_1a0a8d0(_QWORD, float);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a7520(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a7620(_QWORD);
__int64 GameRoutine_2a76e0(_QWORD);
void __attribute__((noreturn)) GameRoutine_a36650(void);
__int64 GameRoutine_a3a260(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a3a3a0(_QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_c3e0(_QWORD, _QWORD);
_QWORD* GameRoutine_a3a3a0_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_a3a3a0");
__attribute__((swiftcall)) void snd_190340(PSEUDO_X8, unsigned __int8*,
                                           unsigned int, int);
__int64*
GameRoutine_a3a260_alt1(__int64*, __int64,
                        unsigned __int64) __asm__("GameRoutine_a3a260");
__int64 GameRoutine_190240_alt1(__int64) __asm__("GameRoutine_190240");
extern __int64* snd_g_memory_ptr[2];
int strcmp(const char*, const char*);
unsigned __int64
GameRoutine_190020_alt1(__int64*, const char*) __asm__("GameRoutine_190020");
__int64 GameHr_1078a0(__int64 a1, unsigned int a2, unsigned int* a3,
                      const char* a4, int a5);
__attribute__((swiftcall)) void FileManager_10df70(PSEUDO_X8, __int64, __int64,
                                                   unsigned int);
__int64 Crc32List_118df0(__int64, __int64, __int64, __int64, __int64);
__int64 GameHr_1678f0(__int64, __int64, __int64, int, int);
__int64 GameRoutine_106040_alt1(__int64, _QWORD*) __asm__("GameRoutine_106040");
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_190200_alt1(__int64, char*) __asm__("GameRoutine_190200");
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 snd_fnd_WeakHandle_get(__int64);
extern __int64 snd_g_proxy_ptr[2];
float exp2f(float);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) snd_a36650();
__int64 GameHr_105c80(__int64 a1, const char* a2, char* a3, const char* a4);
void GameHr_16ee40(__int64 a1, __int64 a2, __int64 a3, int a4, int a5);

__int64 GameHr_bae0(__int64 a1, unsigned int a2, __int64 a3)
{
  _BYTE* v4;
  _QWORD v6[3];

  v4 = *(_BYTE**)(**(_QWORD**)(a1 + 8) + 80LL);
  if (v4 == nullptr || *v4 != 0) {
    return a2;
  }
  *(struct PseudoSret*)(v6) = GameRoutine_c3e0(*(_QWORD*)a1, a3);
  return a2;
}

__int64 GameHr_105c80(__int64 a1, const char* a2, char* a3, const char* a4)
{
  const char* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  const char* v41;
  void* v42;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  _BYTE v55[16];

  nn_os_LockMutex((__int64)GameData_21344c0[0]);
  if (a2 != nullptr) {
    v8 = a2;
  }
  else {
    v8 = "noname";
  }
  if (a3 == nullptr) {
    a3 = "noname";
  }
  v9 = *(__int64**)(a1 + 8);
  v10 = *(_QWORD*)(a1 + 16) - (_QWORD)v9;
  if (v10 == 0) {
  LABEL_45:
    v41 = "#SoundLibrary error : Can't open SoundArchive [%s]\n";
    v42 = (void*)v8;
  LABEL_46:
    (*(void (**)(_QWORD, const char*, void*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v41, v42);
    return nn_os_UnlockMutex((__int64)GameData_21344c0[0]);
  }
  v11 = v10 >> 5;
  while (1) {
    v12 = *v9;
    if (*(_DWORD*)(*v9 + 144) != 0) {
      v13 = strlen(v8);
      v14 = *(_BYTE*)v12 >> 1;
      if ((*(_BYTE*)v12 & 1) != 0) {
        v14 = *(_QWORD*)(v12 + 8);
      }
      if (v13 == v14) {
        v15 = v13;
        if (v13 == -1) {
        LABEL_51:
          snd_a36650();
        }
        v16 = (*(_BYTE*)v12 & 1) != 0 ? *(_QWORD*)(v12 + 16) : v12 + 1;
        v17 = memcmp(v16, (__int64)v8, v15);
        if ((_DWORD)v17 == 0) {
          break;
        }
      }
    }
    v9 += 4;
    if (--v11 == 0) {
      goto LABEL_45;
    }
  }
  v18 = (__int64*)v9[1];
  v19 = v9[2] - (_QWORD)v18;
  if (v19 == 0) {
  LABEL_48:
    v44 = GameRoutine_106040_alt1(v17, v9);
    if (v44 != 0) {
      v45 = v44;
      GameRoutine_190200_alt1(v44, a3);
      GameRoutine_1056a0(v45 + 24, 256, (__int64)"%s.bfsar", a4);
      GameRoutine_1056a0(v45 + 48, 256, (__int64)"%s.bin", a4);
      GameRoutine_1056a0(v45 + 72, 256, (__int64)"%s.fsid.bin", a4);
      v46 = GameRoutine_118ff0(*(_QWORD*)(a1 + 32));
      v47 = GameRoutine_190240_alt1(v45 + 24);
      FileManager_10df70((void*)((__int64)v55), v46, v47, 0x20u);
      GameRoutine_112180_alt1(v45 + 96, (__int64)v55);
      v48 = snd_fnd_WeakHandle_get(v45 + 96);
      (*(void (**)(__int64))(*(_QWORD*)v48 + 40LL))(v48);
      v49 = GameRoutine_118ff0(*(_QWORD*)(a1 + 32));
      v50 = GameRoutine_190240_alt1(v45 + 48);
      FileManager_10df70((void*)((__int64)v55), v49, v50, 0x20u);
      GameRoutine_112180_alt1(v45 + 112, (__int64)v55);
      v51 = snd_fnd_WeakHandle_get(v45 + 112);
      (*(void (**)(__int64))(*(_QWORD*)v51 + 40LL))(v51);
      v52 = GameRoutine_118ff0(*(_QWORD*)(a1 + 32));
      v53 = GameRoutine_190240_alt1(v45 + 72);
      FileManager_10df70((void*)((__int64)v55), v52, v53, 0x20u);
      GameRoutine_112180_alt1(v45 + 128, (__int64)v55);
      v54 = snd_fnd_WeakHandle_get(v45 + 128);
      (*(void (**)(__int64))(*(_QWORD*)v54 + 40LL))(v54);
      *(_BYTE*)(v45 + 264) = 0;
      *(_QWORD*)(v45 + 144) = 0x100000001LL;
      *(_BYTE*)(a1 + 41) = 0;
      return nn_os_UnlockMutex((__int64)GameData_21344c0[0]);
    }
    v41 = "#SoundLibrary error : Can't open AdditionalSoundArchive into [%s]\n";
    v42 = a3;
    goto LABEL_46;
  }
  v20 = v19 >> 3;
  v21 = (__int64*)v9[1];
  v22 = v19 >> 3;
  do {
    v24 = *v21++;
    v23 = v24;
    v25 = *(_DWORD*)(v24 + 144);
    if (v25 != 0 && v25 != 3) {
      v17 = strlen(a3);
      v27 = *(_BYTE*)v23 >> 1;
      if ((*(_BYTE*)v23 & 1) != 0) {
        v27 = *(_QWORD*)(v23 + 8);
      }
      if (v17 == v27) {
        v28 = v17;
        if (v17 == -1) {
          goto LABEL_51;
        }
        v29 = (*(_BYTE*)v23 & 1) != 0 ? *(_QWORD*)(v23 + 16) : v23 + 1;
        v17 = memcmp(v29, (__int64)a3, v28);
        if ((_DWORD)v17 == 0) {
          ++*(_DWORD*)(v23 + 148);
          return nn_os_UnlockMutex((__int64)GameData_21344c0[0]);
        }
      }
    }
    --v22;
  } while (v22 != 0);
  while (1) {
    v31 = *v18++;
    v30 = v31;
    if (*(_DWORD*)(v31 + 144) == 3) {
      v17 = strlen(a3);
      v32 = *(_BYTE*)v30 >> 1;
      if ((*(_BYTE*)v30 & 1) != 0) {
        v32 = *(_QWORD*)(v30 + 8);
      }
      if (v17 == v32) {
        v33 = v17;
        if (v17 == -1) {
          goto LABEL_51;
        }
        v34 = (*(_BYTE*)v30 & 1) != 0 ? *(_QWORD*)(v30 + 16) : v30 + 1;
        v17 = memcmp(v34, (__int64)a3, v33);
        if ((_DWORD)v17 == 0) {
          break;
        }
      }
    }
    if (--v20 == 0) {
      goto LABEL_48;
    }
  }
  v35 = *(_QWORD*)(a1 + 32);
  v36 = GameRoutine_190240_alt1(v12);
  v37 = *(_QWORD*)(v30 + 248);
  v38 = *(_QWORD*)(v30 + 256);
  v39 = v36;
  v40 = GameRoutine_190240_alt1(v30);
  Crc32List_118df0(v35, v39, v37, v38, v40);
  *(_QWORD*)(v30 + 144) = 0x100000002LL;
  *(_BYTE*)(v30 + 264) = 1;
  return nn_os_UnlockMutex((__int64)GameData_21344c0[0]);
}

__int64 GameHr_1078a0(__int64 a1, unsigned int a2, unsigned int* a3,
                      const char* a4, int a5)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 i;
  unsigned __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64* v20;
  unsigned __int64 v21;
  const char* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  const char* v26;
  const char* v27;
  struct {
    __int64 v28;
    __int64 v29;
    __int64* v30;
  } v28_;
  struct {
    __int64 v31[2];
    __int64* v32;
  } v31_;

  if (a2 == 0) {
    return 0;
  }
  v5 = *a3;
  v6 = a1 + 8LL * a2;
  v7 = a1;
  for (i = a2;; i >>= 1) {
    while (1) {
      v9 = i >> 1;
      v10 = v7 + 8 * (i >> 1);
      v11 = *(_DWORD*)(*(_QWORD*)v10 + 8LL);
      if (v11 >= v5) {
        break;
      }
      v7 = v10 + 8;
      i += ~v9;
      if (i == 0) {
        return 0;
      }
    }
    if (v5 >= v11) {
      break;
    }
    v6 = v7 + 8 * (i >> 1);
    if (v9 == 0) {
      return 0;
    }
  }
  if (i != 1) {
    do {
      v16 = v9 >> 1;
      v17 = v7 + 8 * (v9 >> 1);
      if (*(_DWORD*)(*(_QWORD*)v17 + 8LL) < v5) {
        v7 = v17 + 8;
        v16 = v9 + ~v16;
      }
      v9 = v16;
    } while (v16 != 0);
  }
  v12 = v10 + 8;
  if (v6 != v12) {
    v13 = (v6 - v12) >> 3;
    v6 = v12;
    do {
      v14 = v13 >> 1;
      v15 = v6 + 8 * (v13 >> 1);
      if (v5 >= *(_DWORD*)(*(_QWORD*)v15 + 8LL)) {
        v6 = v15 + 8;
        v14 = v13 + ~v14;
      }
      v13 = v14;
    } while (v14 != 0);
  }
  if (v7 == v6) {
    return 0;
  }
  if (v7 + 8 != v6) {
    GameRoutine_190020_alt1(v31_.v31, a4);
    if (a5 != 0) {
      snd_190340((void*)((__int64)&v28_.v28), (unsigned __int8*)v31_.v31, 0,
                 a5);
      if ((v31_.v31[0] & 1) != 0) {
        v20 = (v28_.v28 & 1) != 0 ? v28_.v30 : (__int64*)((char*)&v28_.v28 + 1);
        v21 = (v28_.v28 & 1) != 0
                  ? v28_.v29
                  : (unsigned __int64)(unsigned __int8)v28_.v28 >> 1;
        GameRoutine_a3a260_alt1(v31_.v31, (__int64)v20, v21);
      }
      else if ((v28_.v28 & 1) != 0) {
        GameRoutine_a3a3a0_alt1(v31_.v31, (__int64)v28_.v30, v28_.v29);
      }
      else {
        v31_.v31[0] = v28_.v28;
        v31_.v31[1] = v28_.v29;
        v31_.v32 = v28_.v30;
      }
      if ((v28_.v28 & 1) != 0) {
        (*(void (**)(_QWORD, __int64*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                        24LL))(*snd_g_memory_ptr[0], v28_.v30);
      }
    }
    v22 = (const char*)GameRoutine_190240_alt1((__int64)v31_.v31);
    v23 = (v6 - v7) >> 3;
    do {
      v24 = v23 >> 1;
      v25 = v7 + 8 * (v23 >> 1);
      if (strcmp(*(const char**)(*(_QWORD*)v25 + 16LL), v22) < 0) {
        v7 = v25 + 8;
        v24 = v23 + ~v24;
      }
      v23 = v24;
    } while (v24 != 0);
    if (v7 == v6 ||
        (v26 = *(const char**)(*(_QWORD*)v7 + 16LL),
         v27 = (const char*)GameRoutine_190240_alt1((__int64)v31_.v31),
         strcmp(v26, v27) != 0)) {
      v7 = 0;
    }
    if ((v31_.v31[0] & 1) != 0) {
      (*(void (**)(_QWORD, __int64*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v31_.v32);
    }
  }
  return v7;
}

void GameHr_16ee40(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{

#pragma clang fp contract(off)
  __int64* v6;
  __int64* v7;
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
  __int64 v18;
  unsigned int* v19;
  float v20;
  float v21;
  unsigned int v22;
  float v23;
  float v24;
  unsigned int v25;

  GameHr_1678f0(a1, a2, a3, a4, a5);
  v6 = GameData_2134428;
  *(_QWORD*)a1 = GameData_2134428 + 2;
  *(_QWORD*)(a1 + 5592) = v6 + 174;
  *(_QWORD*)(a1 + 40) = v6 + 33;
  *(_DWORD*)(a1 + 5680) = 1107480595;
  memset(a1 + 5684, 0, 0x398u);
  *(_QWORD*)(a1 + 6616) = 0;
  *(_QWORD*)(a1 + 6624) = 0;
  *(_QWORD*)(a1 + 6632) = 0;
  *(_QWORD*)(a1 + 6640) = 0;
  *(_QWORD*)(a1 + 6648) = 0;
  *(_QWORD*)(a1 + 6664) = 0;
  *(_WORD*)(a1 + 6672) = 0;
  *(_QWORD*)(a1 + 6604) = 0x473B800000002000LL;
  *(_QWORD*)(a1 + 6656) = 0x100000000LL;
  *(_DWORD*)(a1 + 6676) = -100;
  v7 = snd_g_memory_ptr[0];
  v8 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 0x10000,
                                               32);
  v9 = *(_QWORD*)(a1 + 6616);
  *(_QWORD*)(a1 + 6616) = v8;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v7 + 24LL))(*v7);
  }
  v10 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v7 + 16LL))(
      *v7, 4LL * *(unsigned int*)(a1 + 6604), 32);
  v11 = *(_QWORD*)(a1 + 6624);
  *(_QWORD*)(a1 + 6624) = v10;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v7 + 24LL))(*v7);
  }
  v12 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v7 + 16LL))(
      *v7, 4LL * *(unsigned int*)(a1 + 6604), 32);
  v13 = *(_QWORD*)(a1 + 6632);
  *(_QWORD*)(a1 + 6632) = v12;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v7 + 24LL))(*v7);
  }
  memset(*(_QWORD*)(a1 + 6624), 0, 4LL * *(unsigned int*)(a1 + 6604));
  memset(*(_QWORD*)(a1 + 6632), 0, 4LL * *(unsigned int*)(a1 + 6604));
  v14 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v7 + 16LL))(
      *v7, 4LL * *(unsigned int*)(a1 + 6604), 32);
  v15 = *(_QWORD*)(a1 + 6640);
  *(_QWORD*)(a1 + 6640) = v14;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v7 + 24LL))(*v7);
  }
  v16 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v7 + 16LL))(
      *v7, 4LL * *(unsigned int*)(a1 + 6604), 32);
  v17 = *(_QWORD*)(a1 + 6648);
  *(_QWORD*)(a1 + 6648) = v16;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v7 + 24LL))(*v7);
  }
  v18 = 0;
  v19 = (unsigned int*)(a1 + 5688);
  v20 = 0x1.7700000000000p+15f / (float)*(unsigned int*)(a1 + 6604);
  while (1) {
    v21 = *(float*)(a1 + 5680);
    v22 = (int)(float)((float)(v21 * exp2f((float)(unsigned int)v18 /
                                           0x1.8000000000000p+3f)) /
                       v20);
    if (v22 >= 0xFFF) {
      v22 = 4095;
    }
    *(v19 - 1) = v22;
    if (v18 == 114) {
      break;
    }
    v23 = *(float*)(a1 + 5680);
    v24 = exp2f((float)((unsigned int)v18 | 1) / 0x1.8000000000000p+3f);
    v18 += 2;
    v25 = (int)(float)((float)(v23 * v24) / v20);
    if (v25 >= 0xFFF) {
      v25 = 4095;
    }
    *v19 = v25;
    v19 += 2;
  }
}

_QWORD* GameHr_2aa3e0(_QWORD* a1, int a2, unsigned int a3, __int64 a4,
                      __int64 a5)
{
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v12;
  __int64* v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* result;
  _QWORD* v19;
  int v20;
  int v21;
  int v23;
  int i;
  __int64 v26;
  int v27;
  void (*v28)(__int64, __int64, __int64);
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  int v32;
  int v33;
  int v35;
  int v37;
  __int64 v38;
  int v39;
  void (*v40)(__int64, __int64, __int64);
  __int64 v41;
  __int64 v42;
  __int64 v44;
  __int64 v46;

  v5 = (_QWORD*)a1[4];
  v6 = a1 + 3;
  v7 = a5;
  v8 = a4;
  if (v5 == a1 + 3) {
    result = nullptr;
    if (a2 < 1) {
      return result;
    }
    v19 = (_QWORD*)a1[2];
    if (v19 == a1 + 1) {
      return result;
    }
    v20 = 0;
    while (1) {
      v21 = *((_DWORD*)v19 - 35);
      if (v21 == 255 || v21 > (int)a3) {
        return nullptr;
      }
      v23 = *((_DWORD*)v19 - 51);
      v19 = (_QWORD*)v19[1];
      v20 += v23;
      if (v19 == a1 + 1 || v20 >= a2) {
        if (v20 >= a2) {
          for (i = 0; i < a2; i += v27) {
            v26 = a1[2];
            v27 = *(_DWORD*)(v26 - 204);
            v28 = *(void (**)(__int64, __int64, __int64))(v26 - 200);
            v29 = *(_QWORD*)(v26 - 192);
            v30 = v26 - 400;
            GameRoutine_2a76e0(v26 - 400);
            GameRoutine_2a7620(v30);
            if (v28 != nullptr) {
              v28(v30, 2, v29);
            }
          }
          if (i != 0) {
            v5 = (_QWORD*)a1[4];
            v7 = a5;
            v8 = a4;
            break;
          }
        }
        return nullptr;
      }
    }
  }
  v12 = v5 - 50;
  if ((GameRoutine_2a7520(v5 - 50, (unsigned int)a2, a3, v8, v7) & 1) == 0) {
    result = nullptr;
    if (a2 < 1) {
      return result;
    }
    v31 = (_QWORD*)a1[2];
    if (v31 == a1 + 1) {
      return result;
    }
    v32 = 0;
    while (1) {
      v33 = *((_DWORD*)v31 - 35);
      if (v33 == 255 || v33 > (int)a3) {
        return nullptr;
      }
      v35 = *((_DWORD*)v31 - 51);
      v31 = (_QWORD*)v31[1];
      v32 += v35;
      if (v31 == a1 + 1 || v32 >= a2) {
        if (v32 >= a2) {
          v44 = v8;
          v46 = v7;
          v37 = 0;
          do {
            v38 = a1[2];
            v39 = *(_DWORD*)(v38 - 204);
            v40 = *(void (**)(__int64, __int64, __int64))(v38 - 200);
            v41 = *(_QWORD*)(v38 - 192);
            v42 = v38 - 400;
            GameRoutine_2a76e0(v38 - 400);
            GameRoutine_2a7620(v42);
            if (v40 != nullptr) {
              v40(v42, 2, v41);
            }
            v37 += v39;
          } while (v37 < a2);
          if (v37 != 0) {
            v12 = v5 - 50;
            if ((GameRoutine_2a7520(v5 - 50, (unsigned int)a2, a3, v44, v46) &
                 1) != 0) {
              break;
            }
          }
        }
        return nullptr;
      }
    }
  }
  *((_DWORD*)v5 - 35) = (unsigned __int8)a3;
  if (v5 != v6) {
    v13 = (__int64*)v5[1];
    v14 = *v13;
    *(_QWORD*)(*v5 + 8LL) = v13;
    *v13 = *v5;
    *(_QWORD*)(v14 + 8) = v5;
    *v5 = v14;
  }
  v15 = a1 + 1;
  do {
    v16 = v15;
    v15 = (_QWORD*)*v15;
  } while (v16 != (_QWORD*)a1[2] && *((_DWORD*)v15 - 35) > *((_DWORD*)v5 - 35));
  v17 = *v5;
  *v5 = v15;
  *(_QWORD*)(v17 + 8) = v16;
  *(_QWORD*)(*v16 + 8LL) = v5;
  *v16 = v17;
  return v12;
}

#pragma GCC visibility pop
