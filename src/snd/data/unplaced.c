#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* snd_fnd_calcCrc32Reverse(_BYTE* result, int);
_QWORD* GameRoutine_a3a3a0(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void FileManager_10e040(PSEUDO_X8, __int64, __int64,
                                                   unsigned int);
__int64* GameRoutine_a3a260(__int64*, __int64, unsigned __int64);
__int64* GameRoutine_f8040(__int64* result, unsigned __int64);
__int64* GameRoutine_f8e40(__int64* result, unsigned __int64);
__int64 Crc32List_1163b0();
__int64 Data_edfe0(__int64*, __int64);
__int64 FileManager_10e2c0();
__int64 GameRoutine_118ff0(_QWORD);
__int64 GameRoutine_190200(__int64, char*);
__int64 GameRoutine_190240(__int64);
__int64 GameRoutine_1905a40(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_6511d0(__int64);
__int64 GameRoutine_a2af20(__int64, __int64, const char*, ...);
__int64 GameRoutine_ed4a0(__int64);
__int64 GameRoutine_f5940(__int64, __int64, int);
__int64 GameRoutine_f90e0(__int64 result, __int64*, __int64, __int64, char);
__int64 GameRoutine_fa3a0(__int64 result, __int64*, __int64, __int64, char);
__int64 GameRoutine_fb7e0(__int64 result, __int64*, __int64, __int64, char);
__int64 GameRoutine_fcc20(__int64 result, __int64*, __int64, __int64, char);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 rand(void);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 strcmp(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
               _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
               _QWORD, _QWORD);
__int64 strcpy(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strstr(_QWORD, _QWORD);
char** snd_data_f77e0(char** result, unsigned __int64);
char** snd_data_f8400_alt1(char** result,
                           unsigned __int64) __asm__("snd_data_f8400");
extern _UNKNOWN GameData_2140070;
extern _UNKNOWN snd_data_s_dataFile;
extern _UNKNOWN snd_data_s_settingFile;
extern __int64 (*GameData_1f53ed8[])();
extern __int64 (*GameData_1f53f98[])();
extern __int64 (*GameData_1f53ff8[])();
extern __int64* GameData_21341c0[14];
extern __int64* GameData_21341e8[9];
extern __int64* GameData_21341f8[7];
extern __int64* GameData_2134200[6];
extern __int64* GameData_2134208[5];
extern __int64* GameData_2134210[4];
extern __int64* GameData_2134218[3];
extern __int64* GameData_2134220[2];
extern __int64* GameData_2134228;
extern __int64* snd_g_memory_ptr[2];
extern __int64* snd_s_target_ptr;
extern __int64 GameData_2178d78;
extern __int64 GameData_2178d80;
extern __int64 GameData_2178dc0;
extern __int64 GameData_2178dc8;
extern __int64 GameData_2178dd0;
extern __int64 GameData_2178dd8;
extern __int64 GameData_2178de0;
extern __int64 GameData_2178de8;
extern __int64 GameData_2178df0;
extern __int64 GameData_2178df8;
extern __int64 snd_data_s_windDataList;
extern __int64 snd_s_target;
unsigned __int64 GameRoutine_190020(__int64*, char*);
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void __attribute__((noreturn)) GameRoutine_ee420();
void __attribute__((noreturn)) GameRoutine_ef5d0();
void __attribute__((noreturn)) GameRoutine_f7ff0();
void __attribute__((noreturn)) GameRoutine_f8010();
void __attribute__((noreturn)) GameRoutine_f8290();
void __attribute__((noreturn)) GameRoutine_f82b0();
void __attribute__((noreturn)) GameRoutine_f8fc0();
void __attribute__((noreturn)) snd_a36650();
__int64 snd_data_ee200(__int64* a1, char* a2);
__int64* snd_data_ee440(__int64* a1, char* a2);
__int64 snd_data_ef080(__int64 result, char a2);
__int64 snd_data_f0230(__int64 a1, __int64 a2, char* a3);
_QWORD* snd_data_f3c60(_QWORD* result);
void snd_data_f4400();
void snd_data_f4860();
void snd_data_f4c20();
void snd_data_f5b80();
void snd_data_f6760();
extern __int64 (*snd_fnd_Vec3_vtable[])();
extern __int64 GameData_212e2d8;
float GameRoutine_f8bc0(__int64, __int64);
void __attribute__((noreturn)) GameRoutine_f7d90();
void __attribute__((noreturn)) GameRoutine_f8b90();
void snd_data_f8400(char** result, unsigned __int64 a2, long double a3);

__int64 snd_data_ee200(__int64* a1, char* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64 v25;
    unsigned __int64 v26;
    __int64 v27;
  } v25_;

  v2 = a1[1] - *a1;
  v3 = 1 - 0x5555555555555555LL * (v2 >> 3);
  if (v3 > 0xAAAAAAAAAAAAAAALL) {
    GameRoutine_ee420();
  }
  v5 = snd_g_memory_ptr[0];
  if (0x5555555555555556LL * ((a1[2] - *a1) >> 3) > v3) {
    v3 = 0x5555555555555556LL * ((a1[2] - *a1) >> 3);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((a1[2] - *a1) >> 3) >= 0x555555555555555LL) {
    v6 = 0xAAAAAAAAAAAAAAALL;
  }
  else {
    v6 = v3;
  }
  if ((unsigned __int64)(v6 - 0xAAAAAAAAAAAAAABLL) < 0xF555555555555556LL) {
    v7 = 0;
    GameRoutine_190020(&v25_.v25, a2);
    if ((v25_.v25 & 1) != 0) {
      goto LABEL_9;
    }
  LABEL_12:
    v11 = v25_.v25;
    v12 = v25_.v27;
    *(_QWORD*)(v2 + 8) = v25_.v26;
    *(_QWORD*)(v2 + 16) = v12;
    *(_QWORD*)v2 = v11;
    goto LABEL_13;
  }
  v9 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24 * v6,
                                               32);
  v10 = a2;
  v7 = v9;
  v2 += v9;
  GameRoutine_190020(&v25_.v25, v10);
  if ((v25_.v25 & 1) == 0) {
    goto LABEL_12;
  }
LABEL_9:
  GameRoutine_1905a40((__int64*)v2, v25_.v27, v25_.v26);
  if ((v25_.v25 & 1) != 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)*v5 + 24LL))(*v5, v25_.v27);
  }
LABEL_13:
  v13 = v7 + 24 * v6;
  v14 = *a1;
  v15 = a1[1];
  v16 = v2 + 24;
  v17 = v2 + *a1 - v15;
  if (v15 != *a1) {
    v18 = 0;
    do {
      while (1) {
        v19 = (__int64*)(v14 + v18);
        v20 = (__int64*)(v17 + v18);
        if ((*(_BYTE*)(v14 + v18) & 1) == 0) {
          break;
        }
        GameRoutine_1905a40(v20, v19[2], v19[1]);
        v18 += 24;
        if (v14 + v18 == v15) {
          goto LABEL_20;
        }
      }
      v21 = *v19;
      v22 = v19[1];
      v23 = v19[2];
      v20[1] = v22;
      v20[2] = v23;
      *v20 = v21;
      v18 += 24;
    } while (v14 + v18 != v15);
    do {
    LABEL_20:
      if ((*(_BYTE*)v14 & 1) != 0) {
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v5 + 24LL))(
            *v5, *(_QWORD*)(v14 + 16));
      }
      v14 += 24;
    } while (v14 != v15);
    v14 = *a1;
  }
  *a1 = v17;
  a1[1] = v16;
  a1[2] = v13;
  if (v14 != 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)*v5 + 24LL))(*v5, v14);
  }
  return v16;
}

__int64* snd_data_ee440(__int64* a1, char* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64 v25;
    unsigned __int64 v26;
    __int64 v27;
  } v25_;

  v2 = a1[1] - *a1;
  v3 = 1 - 0x5555555555555555LL * (v2 >> 3);
  if (v3 > 0xAAAAAAAAAAAAAAALL) {
    GameRoutine_ee420();
  }
  v5 = snd_g_memory_ptr[0];
  if (0x5555555555555556LL * ((a1[2] - *a1) >> 3) > v3) {
    v3 = 0x5555555555555556LL * ((a1[2] - *a1) >> 3);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((a1[2] - *a1) >> 3) >= 0x555555555555555LL) {
    v6 = 0xAAAAAAAAAAAAAAALL;
  }
  else {
    v6 = v3;
  }
  if ((unsigned __int64)(v6 - 0xAAAAAAAAAAAAAABLL) < 0xF555555555555556LL) {
    v7 = 0;
    GameRoutine_190020(&v25_.v25, a2);
    if ((v25_.v25 & 1) != 0) {
      goto LABEL_9;
    }
  LABEL_12:
    v11 = v25_.v25;
    v12 = v25_.v27;
    *(_QWORD*)(v2 + 8) = v25_.v26;
    *(_QWORD*)(v2 + 16) = v12;
    *(_QWORD*)v2 = v11;
    goto LABEL_13;
  }
  v9 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24 * v6,
                                               32);
  v10 = a2;
  v7 = v9;
  v2 += v9;
  GameRoutine_190020(&v25_.v25, v10);
  if ((v25_.v25 & 1) == 0) {
    goto LABEL_12;
  }
LABEL_9:
  GameRoutine_1905a40((__int64*)v2, v25_.v27, v25_.v26);
  if ((v25_.v25 & 1) != 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)*v5 + 24LL))(*v5, v25_.v27);
  }
LABEL_13:
  v13 = v7 + 24 * v6;
  v14 = *a1;
  v15 = a1[1];
  v16 = v2 + 24;
  v17 = v2 + *a1 - v15;
  if (v15 != *a1) {
    v18 = 0;
    do {
      while (1) {
        v19 = (__int64*)(v14 + v18);
        v20 = (__int64*)(v17 + v18);
        if ((*(_BYTE*)(v14 + v18) & 1) == 0) {
          break;
        }
        GameRoutine_1905a40(v20, v19[2], v19[1]);
        v18 += 24;
        if (v14 + v18 == v15) {
          goto LABEL_20;
        }
      }
      v21 = *v19;
      v22 = v19[1];
      v23 = v19[2];
      v20[1] = v22;
      v20[2] = v23;
      *v20 = v21;
      v18 += 24;
    } while (v14 + v18 != v15);
    do {
    LABEL_20:
      if ((*(_BYTE*)v14 & 1) != 0) {
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v5 + 24LL))(
            *v5, *(_QWORD*)(v14 + 16));
      }
      v14 += 24;
    } while (v14 != v15);
    v14 = *a1;
  }
  *a1 = v17;
  a1[1] = v16;
  a1[2] = v13;
  if (v14 != 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)*v5 + 24LL))(*v5, v14);
  }
  return (__int64*)v16;
}

__int64 snd_data_ef080(__int64 result, char a2)
{
  const char* v2;
  __int64* v4;
  _QWORD* v5;
  __int64* v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  _BYTE* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 i;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  __int64* v35;
  _QWORD* v36;
  _QWORD* v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64* v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64* v57;
  __int64* v58;
  _QWORD* v59;
  _QWORD* v60;
  __int64 v61;
  const char* v62;
  __int64 v63;
  __int64 v64;
  _BYTE v65[16];
  _BYTE v66[264];

  if (snd_data_s_windDataList == 0) {
    v2 = (const char*)result;
    v4 = snd_g_memory_ptr[0];
    v5 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24, 32);
    *v5 = 0;
    v5[1] = 0;
    v5[2] = 0;
    v6 = GameData_21341c0[0];
    *GameData_21341c0[0] = (__int64)v5;
    v7 = (_QWORD*)(*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)*v4 + 16LL))(*v4, 24, 32);
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    snd_data_s_windDataList = (__int64)v7;
    if ((a2 & 1) != 0) {
      v8 = v4;
      v9 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v4 + 16LL))(
          *v4, 0x4000, 32);
      v10 = Crc32List_1163b0();
      GameRoutine_118ff0(v10);
      v64 = v9;
      v11 = FileManager_10e2c0();
      if (v11 >= 1) {
        v12 = 0;
        v62 = v2;
        v63 = (unsigned int)v11;
        do {
          if (strstr(v64 + (v12 << 8), "data_sndDisposMove") != 0) {
            GameRoutine_a2af20((__int64)v66, 256, "%s/%s", v2,
                               (const char*)(v64 + (v12 << 8)));
            v13 = (_BYTE*)strstr(v66, ".zst");
            if (v13 != nullptr) {
              *v13 = 0;
            }
            v14 = (__int64*)*v6;
            v15 = Crc32List_1163b0();
            v16 = GameRoutine_118ff0(v15);
            FileManager_10e040((void*)((__int64)v65), v16, (__int64)v66, 0x40u);
            Data_edfe0(v14, (__int64)v65);
            v17 = snd_fnd_WeakHandle_get(*(_QWORD*)(*v6 + 8) - 16LL);
            (*(void (**)(__int64))(*(_QWORD*)v17 + 48LL))(v17);
            v18 = GameRoutine_ed4a0(*(_QWORD*)(*v6 + 8) - 16LL);
            v19 = (*(__int64 (**)(__int64, const char*))(
                *(_QWORD*)v18 + 120LL))(v18, "snd::data::s_windDataList");
            if (v19 != 0) {
              v20 = v19;
              if (*(int*)(v19 + 8) >= 1) {
                for (i = 0; i < *(int*)(v20 + 8); ++i) {
                  v23 = snd_data_s_windDataList;
                  v24 = *(_QWORD*)v20 + 24 * i;
                  v26 = *(__int64**)(snd_data_s_windDataList + 8);
                  v25 = *(_QWORD*)(snd_data_s_windDataList + 16);
                  if ((unsigned __int64)v26 < v25) {
                    *v26 = v24;
                    v22 = (__int64)(v26 + 1);
                  }
                  else {
                    v27 = (__int64)v26 - *(_QWORD*)snd_data_s_windDataList;
                    v28 = (v27 >> 3) + 1;
                    if (v28 >> 61 != 0) {
                      goto LABEL_48;
                    }
                    v29 = v25 - *(_QWORD*)snd_data_s_windDataList;
                    v30 = v29 >> 2;
                    if (v29 >> 2 <= v28) {
                      v30 = (v27 >> 3) + 1;
                    }
                    if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v31 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v31 = v30;
                    }
                    v32 = (*(__int64 (**)(__int64, __int64, __int64))(
                        *(_QWORD*)*v8 + 16LL))(*v8, 8 * v31, 32);
                    v33 = (__int64*)(v32 + v27);
                    *v33 = v24;
                    v22 = v32 + v27 + 8;
                    v34 = *(__int64**)v23;
                    v35 = *(__int64**)(v23 + 8);
                    v36 = (__int64*)((char*)v33 + *(_QWORD*)v23 - (_QWORD)v35);
                    if (v35 != *(__int64**)v23) {
                      v37 = v36;
                      do {
                        v38 = *v34++;
                        *v37++ = v38;
                      } while (v34 != v35);
                      v34 = *(__int64**)v23;
                    }
                    *(_QWORD*)v23 = v36;
                    *(_QWORD*)(v23 + 8) = v22;
                    *(_QWORD*)(v23 + 16) = v32 + 8 * v31;
                    if (v34 != nullptr) {
                      (*(void (**)(__int64))(*(_QWORD*)*v8 + 24LL))(*v8);
                    }
                  }
                  *(_QWORD*)(v23 + 8) = v22;
                }
              }
            }
            v2 = v62;
            v6 = GameData_21341c0[0];
          }
          ++v12;
        } while (v12 != v63);
      }
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v8 + 24LL))(*v8,
                                                                       v64);
    }
    else {
      v39 = (__int64*)*v6;
      v40 = Crc32List_1163b0();
      v41 = GameRoutine_118ff0(v40);
      FileManager_10e040((void*)((__int64)v66), v41, (__int64)v2, 0x40u);
      Data_edfe0(v39, (__int64)v66);
      v42 = snd_fnd_WeakHandle_get(*(_QWORD*)(*v6 + 8) - 16LL);
      (*(void (**)(__int64))(*(_QWORD*)v42 + 48LL))(v42);
      v43 = GameRoutine_ed4a0(*(_QWORD*)(*v6 + 8) - 16LL);
      result = (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v43 + 120LL))(
          v43, "snd::data::s_windDataList");
      if (result != 0) {
        v44 = result;
        if (*(int*)(result + 8) >= 1) {
          v45 = 0;
          do {
            v47 = snd_data_s_windDataList;
            v48 = *(_QWORD*)v44 + 24 * v45;
            v50 = *(__int64**)(snd_data_s_windDataList + 8);
            v49 = *(_QWORD*)(snd_data_s_windDataList + 16);
            if ((unsigned __int64)v50 < v49) {
              *v50 = v48;
              v46 = (__int64)(v50 + 1);
            }
            else {
              v51 = (__int64)v50 - *(_QWORD*)snd_data_s_windDataList;
              v52 = (v51 >> 3) + 1;
              if (v52 >> 61 != 0) {
              LABEL_48:
                GameRoutine_ef5d0();
              }
              v53 = v49 - *(_QWORD*)snd_data_s_windDataList;
              v54 = v53 >> 2;
              if (v53 >> 2 <= v52) {
                v54 = (v51 >> 3) + 1;
              }
              if ((unsigned __int64)v53 >= 0x7FFFFFFFFFFFFFF8LL) {
                v55 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v55 = v54;
              }
              result = (*(__int64 (**)(__int64, __int64, __int64))(
                  *(_QWORD*)*v4 + 16LL))(*v4, 8 * v55, 32);
              v56 = (__int64*)(result + v51);
              *v56 = v48;
              v46 = result + v51 + 8;
              v57 = *(__int64**)v47;
              v58 = *(__int64**)(v47 + 8);
              v59 = (__int64*)((char*)v56 + *(_QWORD*)v47 - (_QWORD)v58);
              if (v58 != *(__int64**)v47) {
                v60 = v59;
                do {
                  v61 = *v57++;
                  *v60++ = v61;
                } while (v57 != v58);
                v57 = *(__int64**)v47;
              }
              *(_QWORD*)v47 = v59;
              *(_QWORD*)(v47 + 8) = v46;
              *(_QWORD*)(v47 + 16) = result + 8 * v55;
              if (v57 != nullptr) {
                result = (*(__int64 (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
              }
            }
            *(_QWORD*)(v47 + 8) = v46;
            ++v45;
          } while (v45 < *(int*)(v44 + 8));
        }
      }
    }
  }
  return result;
}

__int64 snd_data_f0230(__int64 a1, __int64 a2, char* a3)
{
  unsigned int v6;
  unsigned int v7;
  int v8;
  int v9;
  char* v10;
  int v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  if (a3 != nullptr) {
    GameRoutine_190200(a1, a3);
    v6 = (unsigned int)snd_fnd_calcCrc32((unsigned __int8*)a3, 0);
    v7 = (unsigned int)snd_fnd_calcCrc32Reverse(a3, 0);
    *(_DWORD*)(a1 + 24) = v6;
    *(_DWORD*)(a1 + 28) = v7;
    GameRoutine_190200(a1 + 32, a3);
  }
  else {
    v8 = *(_DWORD*)(a2 + 4);
    *(_DWORD*)(a1 + 24) = *(_DWORD*)a2;
    *(_DWORD*)(a1 + 28) = v8;
  }
  v9 = *(_DWORD*)(a2 + 4);
  *(_DWORD*)(a1 + 56) = *(_DWORD*)a2;
  *(_DWORD*)(a1 + 60) = v9;
  *(_DWORD*)(a1 + 64) = *(_DWORD*)(a2 + 8);
  *(_DWORD*)(a1 + 68) = *(_DWORD*)(a2 + 12);
  *(_DWORD*)(a1 + 72) = *(_DWORD*)(a2 + 16);
  *(_DWORD*)(a1 + 76) = *(_DWORD*)(a2 + 20);
  v10 = *(char**)(a2 + 24);
  if (v10 != nullptr) {
    GameRoutine_190200(a1 + 80, v10);
  }
  v11 = *(_DWORD*)(a2 + 36);
  *(_DWORD*)(a1 + 104) = *(_DWORD*)(a2 + 32);
  *(_DWORD*)(a1 + 108) = v11;
  *(_DWORD*)(a1 + 112) = *(_DWORD*)(a2 + 40);
  *(_DWORD*)(a1 + 116) = *(_DWORD*)(a2 + 44);
  *(_DWORD*)(a1 + 120) = *(_DWORD*)(a2 + 48);
  *(_DWORD*)(a1 + 124) = *(_DWORD*)(a2 + 52);
  *(_DWORD*)(a1 + 128) = *(_DWORD*)(a2 + 56);
  *(_DWORD*)(a1 + 132) = *(_DWORD*)(a2 + 60);
  *(_DWORD*)(a1 + 136) = *(_DWORD*)(a2 + 64);
  *(_DWORD*)(a1 + 140) = *(_DWORD*)(a2 + 68);
  *(_DWORD*)(a1 + 144) = *(_DWORD*)(a2 + 72);
  *(_DWORD*)(a1 + 148) = *(_DWORD*)(a2 + 76);
  *(_DWORD*)(a1 + 152) = *(_DWORD*)(a2 + 80);
  *(_DWORD*)(a1 + 156) = *(_DWORD*)(a2 + 84);
  GameRoutine_190200(a1 + 160, *(char**)(a2 + 88));
  *(_DWORD*)(a1 + 184) = *(_DWORD*)(a2 + 96);
  *(_DWORD*)(a1 + 188) = *(_DWORD*)(a2 + 100);
  *(_DWORD*)(a1 + 192) = *(_DWORD*)(a2 + 104);
  *(_DWORD*)(a1 + 196) = *(_DWORD*)(a2 + 108);
  *(_DWORD*)(a1 + 200) = *(_DWORD*)(a2 + 112);
  *(_DWORD*)(a1 + 204) = *(_DWORD*)(a2 + 116);
  *(_DWORD*)(a1 + 208) = *(_DWORD*)(a2 + 120);
  *(_DWORD*)(a1 + 212) = *(_DWORD*)(a2 + 124);
  *(_DWORD*)(a1 + 216) = *(_DWORD*)(a2 + 128);
  *(_DWORD*)(a1 + 220) = *(_DWORD*)(a2 + 132);
  *(_DWORD*)(a1 + 224) = *(_DWORD*)(a2 + 136);
  *(_DWORD*)(a1 + 228) = *(_DWORD*)(a2 + 140);
  *(_DWORD*)(a1 + 232) = *(_DWORD*)(a2 + 144);
  *(_DWORD*)(a1 + 236) = *(_DWORD*)(a2 + 148);
  *(_DWORD*)(a1 + 240) = *(_DWORD*)(a2 + 152);
  *(_DWORD*)(a1 + 244) = *(_DWORD*)(a2 + 156);
  *(_DWORD*)(a1 + 248) = *(_DWORD*)(a2 + 160);
  *(_DWORD*)(a1 + 252) = *(_DWORD*)(a2 + 164);
  *(_DWORD*)(a1 + 256) = *(_DWORD*)(a2 + 168);
  *(_DWORD*)(a1 + 260) = *(_DWORD*)(a2 + 172);
  *(_DWORD*)(a1 + 264) = *(_DWORD*)(a2 + 176);
  *(_DWORD*)(a1 + 268) = *(_DWORD*)(a2 + 180);
  *(_DWORD*)(a1 + 272) = *(_DWORD*)(a2 + 184);
  *(_DWORD*)(a1 + 276) = *(_DWORD*)(a2 + 188);
  *(_DWORD*)(a1 + 280) = *(_DWORD*)(a2 + 192);
  *(_DWORD*)(a1 + 284) = *(_DWORD*)(a2 + 196);
  *(_DWORD*)(a1 + 288) = *(_DWORD*)(a2 + 200);
  *(_DWORD*)(a1 + 292) = *(_DWORD*)(a2 + 204);
  *(_DWORD*)(a1 + 296) = *(_DWORD*)(a2 + 208);
  *(_DWORD*)(a1 + 300) = *(_DWORD*)(a2 + 212);
  *(_DWORD*)(a1 + 304) = *(_DWORD*)(a2 + 216);
  *(_DWORD*)(a1 + 308) = *(_DWORD*)(a2 + 220);
  *(_DWORD*)(a1 + 312) = *(_DWORD*)(a2 + 224);
  *(_DWORD*)(a1 + 316) = *(_DWORD*)(a2 + 228);
  *(_DWORD*)(a1 + 320) = *(_DWORD*)(a2 + 232);
  *(_DWORD*)(a1 + 324) = *(_DWORD*)(a2 + 236);
  *(_DWORD*)(a1 + 328) = *(_DWORD*)(a2 + 240);
  *(_DWORD*)(a1 + 332) = *(_DWORD*)(a2 + 244);
  *(_DWORD*)(a1 + 336) = *(_DWORD*)(a2 + 248);
  *(_DWORD*)(a1 + 340) = *(_DWORD*)(a2 + 252);
  *(_DWORD*)(a1 + 344) = *(_DWORD*)(a2 + 256);
  *(_DWORD*)(a1 + 348) = *(_DWORD*)(a2 + 260);
  *(_DWORD*)(a1 + 352) = *(_DWORD*)(a2 + 264);
  *(_DWORD*)(a1 + 356) = *(_DWORD*)(a2 + 268);
  *(_DWORD*)(a1 + 360) = *(_DWORD*)(a2 + 272);
  *(_DWORD*)(a1 + 364) = *(_DWORD*)(a2 + 276);
  *(_DWORD*)(a1 + 368) = *(_DWORD*)(a2 + 280);
  *(_DWORD*)(a1 + 372) = *(_DWORD*)(a2 + 284);
  *(_DWORD*)(a1 + 376) = *(_DWORD*)(a2 + 288);
  *(_DWORD*)(a1 + 380) = *(_DWORD*)(a2 + 292);
  *(_DWORD*)(a1 + 384) = *(_DWORD*)(a2 + 296);
  *(_DWORD*)(a1 + 388) = *(_DWORD*)(a2 + 300);
  *(_DWORD*)(a1 + 392) = *(_DWORD*)(a2 + 304);
  *(_DWORD*)(a1 + 396) = *(_DWORD*)(a2 + 308);
  *(_DWORD*)(a1 + 400) = *(_DWORD*)(a2 + 312);
  *(_DWORD*)(a1 + 404) = *(_DWORD*)(a2 + 316);
  *(_DWORD*)(a1 + 408) = *(_DWORD*)(a2 + 320);
  *(_DWORD*)(a1 + 412) = *(_DWORD*)(a2 + 324);
  *(_DWORD*)(a1 + 416) = *(_DWORD*)(a2 + 328);
  *(_DWORD*)(a1 + 420) = *(_DWORD*)(a2 + 332);
  *(_DWORD*)(a1 + 424) = *(_DWORD*)(a2 + 336);
  *(_DWORD*)(a1 + 428) = *(_DWORD*)(a2 + 340);
  *(_DWORD*)(a1 + 432) = *(_DWORD*)(a2 + 344);
  *(_DWORD*)(a1 + 436) = *(_DWORD*)(a2 + 348);
  *(_DWORD*)(a1 + 440) = *(_DWORD*)(a2 + 352);
  GameRoutine_190200(a1 + 448, *(char**)(a2 + 360));
  *(_DWORD*)(a1 + 472) = *(_DWORD*)(a2 + 368);
  GameRoutine_190200(a1 + 480, *(char**)(a2 + 376));
  *(_DWORD*)(a1 + 504) = *(_DWORD*)(a2 + 384);
  result = GameRoutine_190200(a1 + 512, *(char**)(a2 + 392));
  *(_DWORD*)(a1 + 536) = *(_DWORD*)(a2 + 400);
  v13 = *(_QWORD*)(a2 + 492);
  v14 = *(_QWORD*)(a2 + 500);
  v15 = *(_QWORD*)(a2 + 516);
  *(_QWORD*)(a1 + 644) = *(_QWORD*)(a2 + 508);
  *(_QWORD*)(a1 + 652) = v15;
  *(_QWORD*)(a1 + 628) = v13;
  *(_QWORD*)(a1 + 636) = v14;
  v16 = *(_QWORD*)(a2 + 460);
  v17 = *(_QWORD*)(a2 + 468);
  v18 = *(_QWORD*)(a2 + 484);
  *(_QWORD*)(a1 + 612) = *(_QWORD*)(a2 + 476);
  *(_QWORD*)(a1 + 620) = v18;
  *(_QWORD*)(a1 + 596) = v16;
  *(_QWORD*)(a1 + 604) = v17;
  v19 = *(_QWORD*)(a2 + 428);
  v20 = *(_QWORD*)(a2 + 436);
  v21 = *(_QWORD*)(a2 + 452);
  *(_QWORD*)(a1 + 580) = *(_QWORD*)(a2 + 444);
  *(_QWORD*)(a1 + 588) = v21;
  *(_QWORD*)(a1 + 564) = v19;
  *(_QWORD*)(a1 + 572) = v20;
  v22 = *(_QWORD*)(a2 + 404);
  v23 = *(_QWORD*)(a2 + 420);
  *(_QWORD*)(a1 + 548) = *(_QWORD*)(a2 + 412);
  *(_QWORD*)(a1 + 556) = v23;
  *(_QWORD*)(a1 + 540) = v22;
  return result;
}

_QWORD* snd_data_f3c60(_QWORD* result)
{
  _QWORD* v1;
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  int v12;
  __int64* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64* v61;
  char* v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  char* v71;
  struct {
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
  } v72_;

  if (GameData_2178df0 == 0) {
    v1 = result;
    v2 = snd_g_memory_ptr[0];
    v3 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24, 32);
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    GameData_2178df0 = (__int64)v3;
    if (v1 != nullptr) {
      v4 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v2 + 16LL))(
          *v2, 0x10000, 32);
      v5 = Crc32List_1163b0();
      GameRoutine_118ff0(v5);
      v6 = FileManager_10e2c0();
      if (v6 >= 1) {
        v7 = v4 + 12;
        v8 = 0;
        v9 = (unsigned int)v6;
        do {
          v11 = 0;
          LOBYTE(v12) = *(_BYTE*)(v4 + (v8 << 8) + 11);
          do {
            *((_BYTE*)&v72_.v72 + v11) = v12;
            v12 = *(unsigned __int8*)(v7 + v11++);
          } while (v12 != 46 && v12 != 0);
          v14 = (__int64*)GameData_2178df0;
          *((_BYTE*)&v72_.v72 + v11) = 0;
          v15 = (_QWORD*)v14[1];
          v16 = v14[2];
          if ((unsigned __int64)v15 < v16) {
            v10 = v15 + 8;
            v15[4] = v72_.v76;
            v15[5] = v72_.v77;
            v15[6] = v72_.v78;
            v15[7] = v72_.v79;
            *v15 = v72_.v72;
            v15[1] = v72_.v73;
            v15[2] = v72_.v74;
            v15[3] = v72_.v75;
          }
          else {
            v17 = (__int64)v15 - *v14;
            v18 = (v17 >> 6) + 1;
            if (v18 >> 58 != 0) {
              goto LABEL_43;
            }
            v19 = v16 - *v14;
            if (v19 >> 5 > v18) {
              v18 = v19 >> 5;
            }
            if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFC0LL) {
              v18 = 0x3FFFFFFFFFFFFFFLL;
            }
            v20 = v18 << 6;
            v21 = (*(__int64 (**)(__int64, unsigned __int64, __int64))(
                *(_QWORD*)*v2 + 16LL))(*v2, v18 << 6, 32);
            v22 = (_QWORD*)(v21 + v17);
            v22[3] = v72_.v75;
            v22[2] = v72_.v74;
            v22[1] = v72_.v73;
            *v22 = v72_.v72;
            v22[7] = v72_.v79;
            v22[6] = v72_.v78;
            v22[5] = v72_.v77;
            v22[4] = v72_.v76;
            v23 = (__int64*)*v14;
            v24 = (__int64*)v14[1];
            v25 = v21 + v17 + *v14 - (_QWORD)v24;
            if ((__int64*)*v14 != v24) {
              v26 = (_QWORD*)(v21 + v17 + *v14 - (_QWORD)v24);
              do {
                v27 = *v23;
                v28 = v23[1];
                v29 = v23[3];
                v26[2] = v23[2];
                v26[3] = v29;
                *v26 = v27;
                v26[1] = v28;
                v30 = v23[4];
                v31 = v23[5];
                v32 = v23[6];
                v33 = v23[7];
                v23 += 8;
                v26[6] = v32;
                v26[7] = v33;
                v26[4] = v30;
                v26[5] = v31;
                v26 += 8;
              } while (v23 != v24);
              v23 = (__int64*)*v14;
            }
            v34 = v21 + v20;
            v10 = v22 + 8;
            *v14 = v25;
            v14[1] = (__int64)(v22 + 8);
            v14[2] = v34;
            if (v23 != nullptr) {
              (*(void (**)(__int64))(*(_QWORD*)*v2 + 24LL))(*v2);
            }
          }
          ++v8;
          v7 += 256;
          v14[1] = (__int64)v10;
        } while (v8 != v9);
      }
      return (_QWORD*)(*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v2 + 24LL))(
          *v2, v4);
    }
    else {
      v35 = GameRoutine_ed4a0((__int64)&snd_data_s_dataFile);
      result = (_QWORD*)(*(__int64 (**)(__int64, const char*))(
          *(_QWORD*)v35 + 120LL))(v35, "snd::data::s_categoryData");
      v36 = *result;
      if (*result != 0) {
        v37 = result;
        v38 = 0;
        do {
          result = (_QWORD*)strcpy(&v72_.v72, v36);
          v46 = GameData_2178df0;
          v47 = *(_QWORD**)(GameData_2178df0 + 8);
          v48 = *(_QWORD*)(GameData_2178df0 + 16);
          if ((unsigned __int64)v47 < v48) {
            v39 = v72_.v72;
            v40 = v72_.v73;
            v41 = v72_.v75;
            v42 = v47 + 8;
            v47[2] = v72_.v74;
            v47[3] = v41;
            *v47 = v39;
            v47[1] = v40;
            v43 = v72_.v76;
            v44 = v72_.v77;
            v45 = v72_.v79;
            v47[6] = v72_.v78;
            v47[7] = v45;
            v47[4] = v43;
            v47[5] = v44;
          }
          else {
            v49 = (__int64)v47 - *(_QWORD*)GameData_2178df0;
            v50 = (v49 >> 6) + 1;
            if (v50 >> 58 != 0) {
            LABEL_43:
              GameRoutine_f82b0();
            }
            v51 = v48 - *(_QWORD*)GameData_2178df0;
            if (v51 >> 5 > v50) {
              v50 = v51 >> 5;
            }
            if ((unsigned __int64)v51 >= 0x7FFFFFFFFFFFFFC0LL) {
              v50 = 0x3FFFFFFFFFFFFFFLL;
            }
            v52 = v50 << 6;
            result =
                (_QWORD*)(*(__int64 (**)(__int64, unsigned __int64, __int64))(
                    *(_QWORD*)*v2 + 16LL))(*v2, v50 << 6, 32);
            v53 = v72_.v72;
            v54 = v72_.v73;
            v55 = v72_.v75;
            v56 = (_QWORD*)((char*)result + v49);
            v56[2] = v72_.v74;
            v56[3] = v55;
            *v56 = v53;
            v56[1] = v54;
            v57 = v72_.v76;
            v58 = v72_.v77;
            v59 = v72_.v79;
            v56[6] = v72_.v78;
            v56[7] = v59;
            v56[4] = v57;
            v56[5] = v58;
            v60 = *(__int64**)v46;
            v61 = *(__int64**)(v46 + 8);
            v62 = (char*)result + v49 + *(_QWORD*)v46 - (_QWORD)v61;
            if (*(__int64**)v46 != v61) {
              v63 =
                  (_QWORD*)((char*)result + v49 + *(_QWORD*)v46 - (_QWORD)v61);
              do {
                v64 = *v60;
                v65 = v60[1];
                v66 = v60[3];
                v63[2] = v60[2];
                v63[3] = v66;
                *v63 = v64;
                v63[1] = v65;
                v67 = v60[4];
                v68 = v60[5];
                v69 = v60[6];
                v70 = v60[7];
                v60 += 8;
                v63[6] = v69;
                v63[7] = v70;
                v63[4] = v67;
                v63[5] = v68;
                v63 += 8;
              } while (v60 != v61);
              v60 = *(__int64**)v46;
            }
            v71 = (char*)result + v52;
            v42 = v56 + 8;
            *(_QWORD*)v46 = v62;
            *(_QWORD*)(v46 + 8) = v56 + 8;
            *(_QWORD*)(v46 + 16) = v71;
            if (v60 != nullptr) {
              result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)*v2 +
                                                          24LL))(*v2);
            }
          }
          *(_QWORD*)(v46 + 8) = v42;
          v36 = v37[++v38];
        } while (v36 != 0);
      }
    }
  }
  return result;
}

void snd_data_f4400()
{
  __int64* v0;
  unsigned __int64 v1;
  __int64* v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int8* v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  __int64 v28;
  struct {
    __int64 v29[2];
    __int64 v30;
  } v29_;
  struct {
    __int64 v31;
    __int64 v32;
  } v31_;

  if (GameData_2178d80 == 0) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)snd_s_target + 1360LL))((void*)(&v31_.v31),
                                          (__int64)snd_s_target);
    v0 = snd_g_memory_ptr[0];
    v1 = 0xAAAAAAAAAAAAAAABLL * ((v31_.v32 - v31_.v31) >> 3);
    v2 = (__int64*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24, 32);
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0;
    GameData_2178d80 = (__int64)v2;
    if (v1 << 32 != 0) {
      GameRoutine_f8040(v2, (int)v1);
    }
    if ((int)v1 >= 1) {
      v3 = v1 & 0x7FFFFFFF;
      v4 = 0;
      v5 = 0;
      v6 = 0;
      while (1) {
        v7 = *(_QWORD*)GameData_2178d80;
        if (v6 >= (__int64)(*(_QWORD*)(GameData_2178d80 + 8) -
                            *(_QWORD*)GameData_2178d80) >>
            5) {
        LABEL_36:
          GameRoutine_f8290();
        }
        v8 = (__int64*)(v7 + v4);
        v9 = (__int64*)(v31_.v31 + v5);
        if (v7 + v4 == v31_.v31 + v5) {
          goto LABEL_20;
        }
        v10 = *(unsigned __int8*)v9;
        if ((*(_BYTE*)v8 & 1) != 0) {
          break;
        }
        if ((v10 & 1) != 0) {
          GameRoutine_a3a3a0(v8, *(_QWORD*)(v31_.v31 + v5 + 16),
                             *(_QWORD*)(v31_.v31 + v5 + 8));
          v14 = (__int64*)(v31_.v31 + v5);
          if ((*(_BYTE*)(v31_.v31 + v5) & 1) != 0) {
          LABEL_23:
            GameRoutine_1905a40(v29_.v29, v14[2], v14[1]);
            goto LABEL_24;
          }
        }
        else {
          v11 = *v9;
          v12 = v9[1];
          v13 = v9[2];
          v8[1] = v12;
          v8[2] = v13;
          *v8 = v11;
          v14 = (__int64*)(v31_.v31 + v5);
          if ((*(_BYTE*)(v31_.v31 + v5) & 1) != 0) {
            goto LABEL_23;
          }
        }
      LABEL_21:
        v18 = *v14;
        v19 = v14[1];
        v20 = v14[2];
        v29_.v29[1] = v19;
        v29_.v30 = v20;
        v29_.v29[0] = v18;
      LABEL_24:
        v21 = (unsigned __int8*)GameRoutine_190240((__int64)v29_.v29);
        v22 = (unsigned int)snd_fnd_calcCrc32(v21, 0);
        if (v6 >= (__int64)(*(_QWORD*)(GameData_2178d80 + 8) -
                            *(_QWORD*)GameData_2178d80) >>
            5) {
          goto LABEL_36;
        }
        *(_DWORD*)(*(_QWORD*)GameData_2178d80 + v4 + 24) = v22;
        if ((v29_.v29[0] & 1) != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)*v0 + 24LL))(*v0, v29_.v30);
        }
        ++v6;
        v5 += 24;
        v4 += 32;
        if (v3 == v6) {
          goto LABEL_27;
        }
      }
      v15 = v31_.v31 + v5;
      if ((v10 & 1) != 0) {
        v16 = *(_QWORD*)(v15 + 16);
      }
      else {
        v16 = v15 + 1;
      }
      if ((v10 & 1) != 0) {
        v17 = *(_QWORD*)(v31_.v31 + v5 + 8);
      }
      else {
        v17 = v10 >> 1;
      }
      GameRoutine_a3a260(v8, v16, v17);
    LABEL_20:
      v14 = (__int64*)(v31_.v31 + v5);
      if ((*(_BYTE*)(v31_.v31 + v5) & 1) != 0) {
        goto LABEL_23;
      }
      goto LABEL_21;
    }
  LABEL_27:
    v23 = v31_.v31;
    if (v31_.v31 != 0) {
      v24 = v31_.v32;
      v25 = v31_.v31;
      if (v31_.v31 != v31_.v32) {
        v26 = v31_.v32;
        do {
          v27 = *(_BYTE*)(v26 - 24);
          v26 -= 24;
          if ((v27 & 1) != 0) {
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v0 + 24LL))(
                *v0, *(_QWORD*)(v24 - 8));
          }
          v24 = v26;
        } while (v26 != v23);
        v25 = v31_.v31;
      }
      v28 = *v0;
      v31_.v32 = v23;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v28 + 24LL))(v28, v25);
    }
  }
}

void snd_data_f4860()
{
  __int64 v0;
  __int64 v1;
  int v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
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
  int* v21;
  __int64 v22;
  int v23;
  __int64 v24;
  unsigned __int64 v25;
  char v26;

  if (GameData_2178d78 == 0) {
    v0 = GameRoutine_ed4a0((__int64)&snd_data_s_settingFile);
    v1 = (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v0 + 120LL))(
        v0, "snd::data::s_slotDataList");
    if (v1 != 0) {
      v2 = *(_DWORD*)(v1 + 8);
    }
    else {
      v2 = 0;
    }
    v3 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 32, 32);
    v4 = GameData_21341e8[0];
    *(_QWORD*)(v3 + 16) = 0;
    *(_DWORD*)(v3 + 24) = v2;
    *(_QWORD*)v3 = v4 + 2;
    *(_QWORD*)(v3 + 8) = 0;
    if (v2 >= 1) {
      v5 = (unsigned int)v2;
      v6 = 5LL * (unsigned int)v2;
      v7 = (_QWORD*)GameRoutine_6511d0(8 * v6 + 8);
      v8 = 8 * v6 - 40;
      *v7 = v5;
      v9 = v7 + 1;
      v10 = v9;
      if ((~(v8 / 0x28) & 7) != 0) {
        v11 = ((unsigned __int8)(v8 / 0x28) + 1) & 7;
        v10 = v9;
        do {
          *v10 = GameData_1f53ed8;
          v10 += 5;
          --v11;
        } while (v11 != 0);
      }
      if (v8 >= 0x118) {
        do {
          *v10 = GameData_1f53ed8;
          v10[5] = GameData_1f53ed8;
          v10[10] = GameData_1f53ed8;
          v10[15] = GameData_1f53ed8;
          v10[20] = GameData_1f53ed8;
          v10[25] = GameData_1f53ed8;
          v10[30] = GameData_1f53ed8;
          v10[35] = GameData_1f53ed8;
          v10 += 40;
        } while (v10 != &v9[v6]);
      }
      *(_QWORD*)(v3 + 8) = v9;
      v12 = GameRoutine_6511d0(8 * v5);
      v13 = 0;
      v14 = 0;
      *(_QWORD*)(v3 + 16) = v12;
      do {
        v15 = *(_QWORD*)(v3 + 8) + v13;
        v13 += 40;
        *(_DWORD*)(v15 + 8) = 0;
        *(_QWORD*)(v15 + 16) = 0;
        *(_QWORD*)(v15 + 24) = 0;
        *(_QWORD*)(v15 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(v3 + 16) + 8 * v14++) = 0;
      } while (v14 < *(int*)(v3 + 24));
    }
    *(_DWORD*)(v3 + 28) = 0;
    GameData_2178d78 = v3;
    v16 = GameRoutine_ed4a0((__int64)&snd_data_s_settingFile);
    v17 = (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v16 + 120LL))(
        v16, "snd::data::s_slotDataList");
    if (v17 != 0 && *(int*)(v17 + 8) >= 1) {
      v18 = GameData_2178d78;
      v19 = 0;
      v20 = 0;
      do {
        ++v20;
        v21 = (int*)(*(_QWORD*)v17 + v19);
        v22 = *(_QWORD*)(v18 + 8) + 40LL * *(int*)(v18 + 28);
        v19 += 48;
        v23 = *v21;
        *(_QWORD*)(v22 + 16) = v21;
        *(_QWORD*)(v22 + 24) = 0;
        *(_QWORD*)(v22 + 32) = 0;
        *(_DWORD*)(v22 + 8) = v23;
        *(_DWORD*)(v22 + 12) = 0;
        *(_QWORD*)(*(_QWORD*)(v18 + 16) + 8LL * *(int*)(v18 + 28)) =
            *(_QWORD*)(v18 + 8) + 40LL * *(int*)(v18 + 28);
        ++*(_DWORD*)(v18 + 28);
      } while (v20 < *(int*)(v17 + 8));
    }
    v24 = *(_QWORD*)(GameData_2178d78 + 16);
    if (v24 != 0) {
      v25 = *(unsigned int*)(GameData_2178d78 + 28);
      if ((_DWORD)v25 != 0) {
        GameRoutine_f90e0(v24, (__int64*)(v24 + 8 * v25), (__int64)&v26,
                          (2 * __clz(v25)) ^ 0x7E, 1);
      }
    }
  }
}

void snd_data_f4c20()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 v1;
  int v2;
  unsigned __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64** v24;
  __int64** v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64* v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _BYTE* v58;
  int v59;
  bool v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  _DWORD* v72;
  __int64 v73;
  _BYTE* v74;
  int v75;
  bool v76;
  __int64 v77;
  __int64 v78;
  _BYTE* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  _DWORD* v90;
  int v91;
  int v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  _DWORD* v104;
  __int64 v105;
  __int64 v106;
  _DWORD* v107;
  int v108;
  __int64 v109;
  __int64 v110;
  float v111;
  __int64 v112;
  int v113;
  int v114;
  unsigned int v115;
  float v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  struct {
    __int64 v120;
    __int64 vars0;
    __int64 vars8;
    __int64 vars10;
    __int64 vars18;
    __int64 vars20;
    __int64 vars28;
    __int64 vars30;
    __int64 vars38;
  } v120_;

  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v63 = COERCE_AS(__typeof__(v63),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v65 = COERCE_AS(__typeof__(v65),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v83 = COERCE_AS(__typeof__(v83),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v98 = COERCE_AS(__typeof__(v98),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v99 = COERCE_AS(__typeof__(v99),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (GameData_2178dc0 == 0) {
    snd_data_f3c60(nullptr),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v83 = COERCE_AS(__typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v95 = COERCE_AS(__typeof__(v95),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v98 = COERCE_AS(__typeof__(v98),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v0 = snd_s_target_ptr;
    if (((*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*snd_s_target_ptr +
                                          1296LL))(*snd_s_target_ptr, 0) &
         1) == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v0 + 1320LL))(*v0, 0),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v83 = COERCE_AS(__typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v95 = COERCE_AS(__typeof__(v95),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v98 = COERCE_AS(__typeof__(v98),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v1 = *(_QWORD*)GameData_2178df0;
    if (*(_QWORD*)(GameData_2178df0 + 8) == *(_QWORD*)GameData_2178df0) {
      goto LABEL_38;
    }
    v2 = 0;
    v3 = 0;
    v4 = (__int64*)GameData_2178df8;
    do {
      if (v4 != nullptr) {
        v5 = *v4;
        v6 = v4[1] - *v4;
        if (v6 != 0) {
          v7 = v1 + (v3 << 6);
          v8 = 0xCCCCCCCCCCCCCCCDLL * (v6 >> 3);
          v9 = strlen(v7),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v67 = COERCE_AS(__typeof__(v67),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v94 = COERCE_AS(__typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v95 = COERCE_AS(__typeof__(v95),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v97 = COERCE_AS(__typeof__(v97),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v99 = COERCE_AS(__typeof__(v99),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          while (1) {
            v10 = *(_BYTE*)(v5 + 16) >> 1;
            if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
              v10 = *(_QWORD*)(v5 + 24);
            }
            if (v9 == v10) {
              if (v9 == -1) {
              LABEL_128:
                snd_a36650(),
                    v62 = COERCE_AS(
                        __typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v63 = COERCE_AS(
                        __typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v64 = COERCE_AS(
                        __typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v65 = COERCE_AS(
                        __typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v66 = COERCE_AS(
                        __typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v67 = COERCE_AS(
                        __typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v81 = COERCE_AS(
                        __typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v82 = COERCE_AS(
                        __typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v83 = COERCE_AS(
                        __typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v84 = COERCE_AS(
                        __typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v85 = COERCE_AS(
                        __typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v94 = COERCE_AS(
                        __typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v95 = COERCE_AS(
                        __typeof__(v95),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v96 = COERCE_AS(
                        __typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v97 = COERCE_AS(
                        __typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v98 = COERCE_AS(
                        __typeof__(v98),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v99 = COERCE_AS(
                        __typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              }
              v11 =
                  (*(_BYTE*)(v5 + 16) & 1) != 0 ? *(_QWORD*)(v5 + 32) : v5 + 17;
              if ((unsigned int)memcmp(v11, v7, v9) == 0) {
                break;
              }
            }
            --v8;
            v5 += 40;
            if (v8 == 0) {
              goto LABEL_5;
            }
          }
          v12 = GameRoutine_ed4a0(v5),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v67 = COERCE_AS(__typeof__(v67),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v94 = COERCE_AS(__typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v95 = COERCE_AS(__typeof__(v95),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v97 = COERCE_AS(__typeof__(v97),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v99 = COERCE_AS(__typeof__(v99),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v13 = (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v12 + 120LL))(
              v12, "snd::data::s_voiceDataList"),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v67 = COERCE_AS(__typeof__(v67),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v94 = COERCE_AS(__typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v95 = COERCE_AS(__typeof__(v95),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v97 = COERCE_AS(__typeof__(v97),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v99 = COERCE_AS(__typeof__(v99),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v4 = (__int64*)GameData_2178df8;
          if (v13 != 0) {
            v2 += *(_DWORD*)(v13 + 8);
          }
        }
      }
    LABEL_5:
      ++v3;
      v1 = *(_QWORD*)GameData_2178df0;
    } while (v3 < (__int64)(*(_QWORD*)(GameData_2178df0 + 8) -
                            *(_QWORD*)GameData_2178df0) >>
             6);
    if (v2 != 0) {
      v14 = snd_g_memory_ptr[0];
      v15 = (*(__int64 (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24,
                                                   32),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v83 = COERCE_AS(__typeof__(v83),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v99 = COERCE_AS(__typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *(_QWORD*)v15 = 0;
      *(_QWORD*)(v15 + 8) = 0;
      *(_QWORD*)(v15 + 16) = 0;
      GameData_2178dc8 = v15;
      snd_data_f77e0((char**)v15, v2),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v64 = COERCE_AS(__typeof__(v64),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v67 = COERCE_AS(__typeof__(v67),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v94 = COERCE_AS(__typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v95 = COERCE_AS(__typeof__(v95),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v96 = COERCE_AS(__typeof__(v96),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v97 = COERCE_AS(__typeof__(v97),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v99 = COERCE_AS(__typeof__(v99),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v2 >= 1) {
        v16 = 12;
        v17 = 0;
        v18 = (_QWORD*)GameData_2178dc8;
        do {
          if (0x4EC4EC4EC4EC4EC5LL * ((__int64)(v18[1] - *v18) >> 3) <= v17 ||
              (*(_DWORD*)(*v18 + v16) = v17,
               0x4EC4EC4EC4EC4EC5LL * ((__int64)(v18[1] - *v18) >> 3) <= v17)) {
          LABEL_129:
            GameRoutine_f7ff0(),
                v62 =
                    COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v63 =
                    COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v64 =
                    COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v65 =
                    COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v66 =
                    COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v67 =
                    COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v83 =
                    COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v84 =
                    COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v85 =
                    COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v94 =
                    COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v95 =
                    COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v96 =
                    COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v97 =
                    COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v98 =
                    COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v99 =
                    COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          v19 = *v18 + v16;
          v16 += 104;
          *(_DWORD*)(v19 + 4) = v17++;
        } while (v2 != v17);
      }
      v20 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v14 + 16LL))(
          *v14, 32, 32),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v83 = COERCE_AS(__typeof__(v83),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v99 = COERCE_AS(__typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v21 = GameData_21341f8[0];
      *(_QWORD*)(v20 + 16) = 0;
      *(_DWORD*)(v20 + 24) = v2;
      *(_QWORD*)v20 = v21 + 2;
      *(_QWORD*)(v20 + 8) = 0;
      if (v2 >= 1) {
        v22 = (_QWORD*)GameRoutine_6511d0(40LL * (unsigned int)v2 + 8),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v83 = COERCE_AS(__typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v95 = COERCE_AS(__typeof__(v95),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v98 = COERCE_AS(__typeof__(v98),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v23 = 40LL * (unsigned int)v2 - 40;
        *v22 = (unsigned int)v2;
        v24 = (__int64**)(v22 + 1);
        v25 = v24;
        if ((~(v23 / 0x28) & 7) != 0) {
          v26 = ((unsigned __int8)(v23 / 0x28) + 1) & 7;
          v27 = GameData_2134200[0] + 2;
          v25 = v24;
          do {
            *v25 = v27;
            v25 += 5;
            --v26;
          } while (v26 != 0);
        }
        if (v23 >= 0x118) {
          v28 = GameData_2134200[0] + 2;
          do {
            *v25 = v28;
            v25[5] = v28;
            v25[10] = v28;
            v25[15] = v28;
            v25[20] = v28;
            v25[25] = v28;
            v25[30] = v28;
            v25[35] = v28;
            v25 += 40;
          } while (v25 != &v24[5 * (unsigned int)v2]);
        }
        *(_QWORD*)(v20 + 8) = v24;
        v29 = GameRoutine_6511d0(8LL * (unsigned int)v2),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v83 = COERCE_AS(__typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v95 = COERCE_AS(__typeof__(v95),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v98 = COERCE_AS(__typeof__(v98),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v30 = 0;
        v31 = 0;
        *(_QWORD*)(v20 + 16) = v29;
        do {
          v32 = *(_QWORD*)(v20 + 8) + v30;
          v30 += 40;
          *(_DWORD*)(v32 + 8) = 0;
          *(_QWORD*)(v32 + 16) = 0;
          *(_QWORD*)(v32 + 24) = 0;
          *(_QWORD*)(v32 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v20 + 16) + 8 * v31++) = 0;
        } while (v31 < *(int*)(v20 + 24));
      }
      v33 = *v0;
      *(_DWORD*)(v20 + 28) = 0;
      GameData_2178dc0 = v20;
      if (((*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v33 + 1296LL))(v33, 0) &
           1) != 0) {
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v0 + 1320LL))(*v0, 0),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v64 = COERCE_AS(__typeof__(v64),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v65 = COERCE_AS(__typeof__(v65),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v67 = COERCE_AS(__typeof__(v67),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v83 = COERCE_AS(__typeof__(v83),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v84 = COERCE_AS(__typeof__(v84),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v85 = COERCE_AS(__typeof__(v85),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v94 = COERCE_AS(__typeof__(v94),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v95 = COERCE_AS(__typeof__(v95),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v96 = COERCE_AS(__typeof__(v96),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v97 = COERCE_AS(__typeof__(v97),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v98 = COERCE_AS(__typeof__(v98),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v99 = COERCE_AS(__typeof__(v99),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v34 = *(_QWORD*)GameData_2178df0;
        if (*(_QWORD*)(GameData_2178df0 + 8) != *(_QWORD*)GameData_2178df0) {
          v35 = 0;
          LODWORD(v36) = 0;
          while (1) {
            if (GameData_2178df8 != 0) {
              v44 = *(_QWORD*)GameData_2178df8;
              v45 =
                  *(_QWORD*)(GameData_2178df8 + 8) - *(_QWORD*)GameData_2178df8;
              if (v45 != 0) {
                v46 = v34 + (v35 << 6);
                v47 = 0xCCCCCCCCCCCCCCCDLL * (v45 >> 3);
                v48 = strlen(v46),
                v62 =
                    COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v63 =
                    COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v64 =
                    COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v65 =
                    COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v66 =
                    COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v67 =
                    COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v83 =
                    COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v84 =
                    COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v85 =
                    COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v94 =
                    COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v95 =
                    COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v96 =
                    COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v97 =
                    COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v98 =
                    COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v99 =
                    COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                while (1) {
                  v49 = *(_BYTE*)(v44 + 16) >> 1;
                  if ((*(_BYTE*)(v44 + 16) & 1) != 0) {
                    v49 = *(_QWORD*)(v44 + 24);
                  }
                  if (v48 == v49) {
                    if (v48 == -1) {
                      goto LABEL_128;
                    }
                    v50 = (*(_BYTE*)(v44 + 16) & 1) != 0 ? *(_QWORD*)(v44 + 32)
                                                         : v44 + 17;
                    if ((unsigned int)memcmp(v50, v46, v48) == 0) {
                      break;
                    }
                  }
                  --v47;
                  v44 += 40;
                  if (v47 == 0) {
                    goto LABEL_42;
                  }
                }
                v51 = GameRoutine_ed4a0(v44),
                v62 =
                    COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v63 =
                    COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v64 =
                    COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v65 =
                    COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v66 =
                    COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v67 =
                    COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v83 =
                    COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v84 =
                    COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v85 =
                    COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v94 =
                    COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v95 =
                    COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v96 =
                    COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v97 =
                    COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v98 =
                    COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v99 =
                    COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                v52 = (*(__int64 (**)(__int64, const char*))(
                    *(_QWORD*)v51 + 120LL))(v51, "snd::data::s_voiceDataList"),
                v62 =
                    COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v63 =
                    COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v64 =
                    COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v65 =
                    COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v66 =
                    COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v67 =
                    COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v83 =
                    COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v84 =
                    COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v85 =
                    COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v94 =
                    COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v95 =
                    COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v96 =
                    COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v97 =
                    COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v98 =
                    COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v99 =
                    COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                v53 = GameData_2134208[0];
                if (v52 != 0) {
                  v54 = v52;
                  if (*(int*)(v52 + 8) >= 1) {
                    break;
                  }
                }
              }
            }
          LABEL_42:
            ++v35;
            v34 = *(_QWORD*)GameData_2178df0;
            if (v35 >= (__int64)(*(_QWORD*)(GameData_2178df0 + 8) -
                                 *(_QWORD*)GameData_2178df0) >>
                6) {
              goto LABEL_125;
            }
          }
          v36 = (int)v36;
          v55 = 0;
          v119 = v35;
          while (1) {
            v56 = *(_QWORD*)v54;
            v57 = *(_QWORD*)v54 + 528 * v55;
            v58 = *(_BYTE**)(v57 + 88);
            if (v58 == nullptr ||
                ((v59 = *(_DWORD*)(v57 + 96)) != 0 ? (v60 = *v58 == 0)
                                                   : (v60 = true),
                 v60)) {
              v61 = 0;
            }
            else {
              nn_os_LockMutex(v53 + 4),
                  v62 = COERCE_AS(
                      __typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v63 = COERCE_AS(
                      __typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v64 = COERCE_AS(
                      __typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v65 = COERCE_AS(
                      __typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v66 = COERCE_AS(
                      __typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v67 = COERCE_AS(
                      __typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v81 = COERCE_AS(
                      __typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v82 = COERCE_AS(
                      __typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v83 = COERCE_AS(
                      __typeof__(v83),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v84 = COERCE_AS(
                      __typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v85 = COERCE_AS(
                      __typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v94 = COERCE_AS(
                      __typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v95 = COERCE_AS(
                      __typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v96 = COERCE_AS(
                      __typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v97 = COERCE_AS(
                      __typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v98 = COERCE_AS(
                      __typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v99 = COERCE_AS(
                      __typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              v68 = *(unsigned int*)((char*)((__int128*)0x10LL) + (_QWORD)v53 +
                                     8);
              if ((_DWORD)v68 != 0) {
                v69 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v53);
                v70 = 0;
                v71 = v69 + 4;
                while (*(_DWORD*)(v71 - 4) != v59 ||
                       (unsigned int)strcmp(
                           v71, v58, v62, v63, v64, v65, v66, v67, v119,
                           v120_.v120, v120_.vars0, v120_.vars8, v120_.vars10,
                           v120_.vars18, v120_.vars20, v120_.vars28,
                           v120_.vars30, v120_.vars38) != 0) {
                  ++v70;
                  v71 += 132;
                  if (v68 == v70) {
                    LODWORD(v70) = v68;
                    v53 = GameData_2134208[0];
                    goto LABEL_76;
                  }
                }
                v53 = GameData_2134208[0];
                if ((unsigned int)v70 >= (unsigned int)v68) {
                  goto LABEL_75;
                }
              }
              else {
                LODWORD(v70) = 0;
              LABEL_75:
                v69 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v53);
              LABEL_76:
                v72 = (_DWORD*)(v69 + 132LL * (unsigned int)v68);
                *v72 = v59;
                strcpy(v72 + 1, v58),
                    v62 = COERCE_AS(
                        __typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v63 = COERCE_AS(
                        __typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v64 = COERCE_AS(
                        __typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v65 = COERCE_AS(
                        __typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v66 = COERCE_AS(
                        __typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v67 = COERCE_AS(
                        __typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v81 = COERCE_AS(
                        __typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v82 = COERCE_AS(
                        __typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v83 = COERCE_AS(
                        __typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v84 = COERCE_AS(
                        __typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v85 = COERCE_AS(
                        __typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v94 = COERCE_AS(
                        __typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v95 = COERCE_AS(
                        __typeof__(v95),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v96 = COERCE_AS(
                        __typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v97 = COERCE_AS(
                        __typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v98 = COERCE_AS(
                        __typeof__(v98),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v99 = COERCE_AS(
                        __typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                ++*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v53 + 8);
              }
              nn_os_UnlockMutex(v53 + 4),
                  v62 = COERCE_AS(
                      __typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v63 = COERCE_AS(
                      __typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v64 = COERCE_AS(
                      __typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v65 = COERCE_AS(
                      __typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v66 = COERCE_AS(
                      __typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v67 = COERCE_AS(
                      __typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v81 = COERCE_AS(
                      __typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v82 = COERCE_AS(
                      __typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v83 = COERCE_AS(
                      __typeof__(v83),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v84 = COERCE_AS(
                      __typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v85 = COERCE_AS(
                      __typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v94 = COERCE_AS(
                      __typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v95 = COERCE_AS(
                      __typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v96 = COERCE_AS(
                      __typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v97 = COERCE_AS(
                      __typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v98 = COERCE_AS(
                      __typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v99 = COERCE_AS(
                      __typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              v56 = *(_QWORD*)v54;
              v61 = v70 + 1;
            }
            *(_DWORD*)(v56 + 528 * v55 + 96) = v61;
            v73 = *(_QWORD*)v54 + 528 * v55;
            v74 = *(_BYTE**)(v73 + 360);
            if (v74 == nullptr ||
                ((v75 = *(_DWORD*)(v73 + 368)) != 0 ? (v76 = *v74 == 0)
                                                    : (v76 = true),
                 v76)) {
              *(_DWORD*)(*(_QWORD*)v54 + 528 * v55 + 368) = 0;
              v77 = *(_QWORD*)v54;
              v78 = *(_QWORD*)v54 + 528 * v55;
              v79 = *(_BYTE**)(v78 + 376);
              if (v79 == nullptr) {
                goto LABEL_103;
              }
            }
            else {
              nn_os_LockMutex(v53 + 4),
                  v62 = COERCE_AS(
                      __typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v63 = COERCE_AS(
                      __typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v64 = COERCE_AS(
                      __typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v65 = COERCE_AS(
                      __typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v66 = COERCE_AS(
                      __typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v67 = COERCE_AS(
                      __typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v81 = COERCE_AS(
                      __typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v82 = COERCE_AS(
                      __typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v83 = COERCE_AS(
                      __typeof__(v83),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v84 = COERCE_AS(
                      __typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v85 = COERCE_AS(
                      __typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v94 = COERCE_AS(
                      __typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v95 = COERCE_AS(
                      __typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v96 = COERCE_AS(
                      __typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v97 = COERCE_AS(
                      __typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v98 = COERCE_AS(
                      __typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v99 = COERCE_AS(
                      __typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              v86 = *(unsigned int*)((char*)((__int128*)0x10LL) + (_QWORD)v53 +
                                     8);
              if ((_DWORD)v86 != 0) {
                v87 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v53);
                v88 = 0;
                v89 = v87 + 4;
                while (*(_DWORD*)(v89 - 4) != v75 ||
                       (unsigned int)strcmp(
                           v89, v74, v80, v81, v82, v83, v84, v85, v119,
                           v120_.v120, v120_.vars0, v120_.vars8, v120_.vars10,
                           v120_.vars18, v120_.vars20, v120_.vars28,
                           v120_.vars30, v120_.vars38) != 0) {
                  ++v88;
                  v89 += 132;
                  if (v86 == v88) {
                    LODWORD(v88) = v86;
                    v53 = GameData_2134208[0];
                    goto LABEL_96;
                  }
                }
                v35 = v119;
                v53 = GameData_2134208[0];
                if ((unsigned int)v88 >= (unsigned int)v86) {
                  goto LABEL_95;
                }
              }
              else {
                LODWORD(v88) = 0;
              LABEL_95:
                v87 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v53);
              LABEL_96:
                v90 = (_DWORD*)(v87 + 132LL * (unsigned int)v86);
                *v90 = v75;
                strcpy(v90 + 1, v74),
                    v62 = COERCE_AS(
                        __typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v63 = COERCE_AS(
                        __typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v64 = COERCE_AS(
                        __typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v65 = COERCE_AS(
                        __typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v66 = COERCE_AS(
                        __typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v67 = COERCE_AS(
                        __typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v81 = COERCE_AS(
                        __typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v82 = COERCE_AS(
                        __typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v83 = COERCE_AS(
                        __typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v84 = COERCE_AS(
                        __typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v85 = COERCE_AS(
                        __typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v94 = COERCE_AS(
                        __typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v95 = COERCE_AS(
                        __typeof__(v95),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v96 = COERCE_AS(
                        __typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v97 = COERCE_AS(
                        __typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v98 = COERCE_AS(
                        __typeof__(v98),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v99 = COERCE_AS(
                        __typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                v35 = v119;
                ++*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v53 + 8);
              }
              nn_os_UnlockMutex(v53 + 4),
                  v62 = COERCE_AS(
                      __typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v63 = COERCE_AS(
                      __typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v64 = COERCE_AS(
                      __typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v65 = COERCE_AS(
                      __typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v66 = COERCE_AS(
                      __typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v67 = COERCE_AS(
                      __typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v81 = COERCE_AS(
                      __typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v82 = COERCE_AS(
                      __typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v83 = COERCE_AS(
                      __typeof__(v83),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v84 = COERCE_AS(
                      __typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v85 = COERCE_AS(
                      __typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v94 = COERCE_AS(
                      __typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v95 = COERCE_AS(
                      __typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v96 = COERCE_AS(
                      __typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v97 = COERCE_AS(
                      __typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v98 = COERCE_AS(
                      __typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v99 = COERCE_AS(
                      __typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              *(_DWORD*)(*(_QWORD*)v54 + 528 * v55 + 368) = v88 + 1;
              v77 = *(_QWORD*)v54;
              v78 = *(_QWORD*)v54 + 528 * v55;
              v79 = *(_BYTE**)(v78 + 376);
              if (v79 == nullptr) {
                goto LABEL_103;
              }
            }
            v91 = *(_DWORD*)(v78 + 384);
            if (v91 != 0 && *v79 != 0) {
              nn_os_LockMutex(v53 + 4),
                  v62 = COERCE_AS(
                      __typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v63 = COERCE_AS(
                      __typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v64 = COERCE_AS(
                      __typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v65 = COERCE_AS(
                      __typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v66 = COERCE_AS(
                      __typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v67 = COERCE_AS(
                      __typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v81 = COERCE_AS(
                      __typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v82 = COERCE_AS(
                      __typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v83 = COERCE_AS(
                      __typeof__(v83),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v84 = COERCE_AS(
                      __typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v85 = COERCE_AS(
                      __typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v94 = COERCE_AS(
                      __typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v95 = COERCE_AS(
                      __typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v96 = COERCE_AS(
                      __typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v97 = COERCE_AS(
                      __typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v98 = COERCE_AS(
                      __typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v99 = COERCE_AS(
                      __typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              v100 = *(unsigned int*)((char*)((__int128*)0x10LL) + (_QWORD)v53 +
                                      8);
              if ((_DWORD)v100 != 0) {
                v101 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v53);
                v102 = 0;
                v103 = v101 + 4;
                while (*(_DWORD*)(v103 - 4) != v91 ||
                       (unsigned int)strcmp(
                           v103, v79, v94, v95, v96, v97, v98, v99, v119,
                           v120_.v120, v120_.vars0, v120_.vars8, v120_.vars10,
                           v120_.vars18, v120_.vars20, v120_.vars28,
                           v120_.vars30, v120_.vars38) != 0) {
                  ++v102;
                  v103 += 132;
                  if (v100 == v102) {
                    LODWORD(v102) = v100;
                    v53 = GameData_2134208[0];
                    goto LABEL_114;
                  }
                }
                v35 = v119;
                v53 = GameData_2134208[0];
                if ((unsigned int)v102 >= (unsigned int)v100) {
                  goto LABEL_113;
                }
              }
              else {
                LODWORD(v102) = 0;
              LABEL_113:
                v101 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v53);
              LABEL_114:
                v104 = (_DWORD*)(v101 + 132LL * (unsigned int)v100);
                *v104 = v91;
                strcpy(v104 + 1, v79),
                    v62 = COERCE_AS(
                        __typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v63 = COERCE_AS(
                        __typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v64 = COERCE_AS(
                        __typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v65 = COERCE_AS(
                        __typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v66 = COERCE_AS(
                        __typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v67 = COERCE_AS(
                        __typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v81 = COERCE_AS(
                        __typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v82 = COERCE_AS(
                        __typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v83 = COERCE_AS(
                        __typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v84 = COERCE_AS(
                        __typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v85 = COERCE_AS(
                        __typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v94 = COERCE_AS(
                        __typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v95 = COERCE_AS(
                        __typeof__(v95),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v96 = COERCE_AS(
                        __typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v97 = COERCE_AS(
                        __typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v98 = COERCE_AS(
                        __typeof__(v98),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v99 = COERCE_AS(
                        __typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                v35 = v119;
                ++*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v53 + 8);
              }
              nn_os_UnlockMutex(v53 + 4),
                  v62 = COERCE_AS(
                      __typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v63 = COERCE_AS(
                      __typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v64 = COERCE_AS(
                      __typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v65 = COERCE_AS(
                      __typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v66 = COERCE_AS(
                      __typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v67 = COERCE_AS(
                      __typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v81 = COERCE_AS(
                      __typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v82 = COERCE_AS(
                      __typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v83 = COERCE_AS(
                      __typeof__(v83),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v84 = COERCE_AS(
                      __typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v85 = COERCE_AS(
                      __typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v94 = COERCE_AS(
                      __typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v95 = COERCE_AS(
                      __typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v96 = COERCE_AS(
                      __typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v97 = COERCE_AS(
                      __typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v98 = COERCE_AS(
                      __typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v99 = COERCE_AS(
                      __typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              v93 = v102 + 1;
              v77 = *(_QWORD*)v54;
              goto LABEL_116;
            }
          LABEL_103:
            v93 = 0;
          LABEL_116:
            *(_DWORD*)(v77 + 528 * v55 + 384) = v93;
            v105 = *(_QWORD*)GameData_2178dc8;
            if (0x4EC4EC4EC4EC4EC5LL *
                    ((__int64)(*(_QWORD*)(GameData_2178dc8 + 8) -
                               *(_QWORD*)GameData_2178dc8) >>
                     3) <=
                v36) {
              goto LABEL_129;
            }
            v106 = GameData_2178dc0;
            v107 = (_DWORD*)(*(_QWORD*)v54 + 528 * v55);
            v108 = v107[1];
            v109 = *(_QWORD*)(GameData_2178dc0 + 8) +
                   40LL * *(int*)(GameData_2178dc0 + 28);
            *(_DWORD*)(v109 + 8) = *v107;
            *(_DWORD*)(v109 + 12) = v108;
            *(_QWORD*)(v109 + 16) = v107;
            *(_QWORD*)(v109 + 24) = v105 + 104 * v36;
            *(_QWORD*)(v109 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(v106 + 16) + 8LL * *(int*)(v106 + 28)) =
                *(_QWORD*)(v106 + 8) + 40LL * *(int*)(v106 + 28);
            ++*(_DWORD*)(v106 + 28);
            if (0x4EC4EC4EC4EC4EC5LL *
                    ((__int64)(*(_QWORD*)(GameData_2178dc8 + 8) -
                               *(_QWORD*)GameData_2178dc8) >>
                     3) <=
                v36) {
              goto LABEL_129;
            }
            v110 = *(_QWORD*)v54 + 528 * v55;
            v111 = *(float*)(v110 + 140);
            v112 = *(_QWORD*)GameData_2178dc8 + 104 * v36;
            v113 = *(_DWORD*)(v110 + 136);
            *(_QWORD*)v112 = 0;
            *(_DWORD*)(v112 + 8) = v35;
            *(_DWORD*)(v112 + 32) = 1065353216;
            *(_BYTE*)(v112 + 88) = 0;
            *(_QWORD*)(v112 + 48) = 0;
            *(_DWORD*)(v112 + 56) = 0;
            *(_QWORD*)(v112 + 72) = 0;
            *(_DWORD*)(v112 + 80) = 0;
            *(_BYTE*)(v112 + 96) = 0;
            *(_DWORD*)(v112 + 92) = 0;
            if (v113 == 2 && v111 > -0x1.3880000000000p+13f) {
              if ((int)v111 != 0) {
                v114 = (int)v111 - 1;
              }
              else {
                v114 = 0;
              }
              v115 = rand(),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v84 = COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v85 = COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v97 = COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v99 = COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              v116 = (float)v114;
              v53 = GameData_2134208[0];
              *(_DWORD*)(v112 + 4) =
                  (int)(float)((float)(v116 + 0x1.cccccc0000000p-1f) *
                               vcvts_n_f32_s32(v115, 0x1Fu));
            }
            *(_QWORD*)(v112 + 24) = v110;
            ++v36;
            if (++v55 >= *(int*)(v54 + 8)) {
              goto LABEL_42;
            }
          }
        }
      }
    LABEL_125:
      v117 = *(_QWORD*)(GameData_2178dc0 + 16);
      if (v117 != 0) {
        v118 = *(unsigned int*)(GameData_2178dc0 + 28);
        if ((_DWORD)v118 != 0) {
          GameRoutine_fa3a0(v117, (__int64*)(v117 + 8 * v118),
                            (__int64)&v120_.v120 + 7, (2 * __clz(v118)) ^ 0x7E,
                            1),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v84 = COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v85 = COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v97 = COERCE_AS(__typeof__(v97),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v99 = COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
      }
    }
    else {
    LABEL_38:
      v37 = (*(__int64 (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 32,
                                                   32),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v83 = COERCE_AS(__typeof__(v83),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v99 = COERCE_AS(__typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v38 = GameData_21341f8[0];
      *(_DWORD*)(v37 + 24) = 1;
      *(_QWORD*)v37 = v38 + 2;
      v39 = (_QWORD*)GameRoutine_6511d0(48),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v83 = COERCE_AS(__typeof__(v83),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v99 = COERCE_AS(__typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *v39 = 1;
      v39[1] = GameData_2134200[0] + 2;
      *(_QWORD*)(v37 + 8) = v39 + 1;
      v40 = GameRoutine_6511d0(8),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v83 = COERCE_AS(__typeof__(v83),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v99 = COERCE_AS(__typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v41 = 0;
      v42 = 0;
      *(_QWORD*)(v37 + 16) = v40;
      do {
        v43 = *(_QWORD*)(v37 + 8) + v41;
        v41 += 40;
        *(_DWORD*)(v43 + 8) = 0;
        *(_QWORD*)(v43 + 16) = 0;
        *(_QWORD*)(v43 + 24) = 0;
        *(_QWORD*)(v43 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(v37 + 16) + 8 * v42++) = 0;
      } while (v42 < *(int*)(v37 + 24));
      *(_DWORD*)(v37 + 28) = 0;
      GameData_2178dc0 = v37;
    }
  }
}

void snd_data_f5b80()
{
  __int64* v0;
  __int64 v1;
  int v2;
  unsigned __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64** v25;
  __int64** v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64* v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  _DWORD* v61;
  int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  int v69;
  char v70;

  if (GameData_2178dd0 == 0) {
    snd_data_f3c60(nullptr);
    v0 = snd_s_target_ptr;
    if (((*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*snd_s_target_ptr +
                                          1296LL))(*snd_s_target_ptr, 0) &
         1) == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v0 + 1320LL))(*v0, 0);
    v1 = *(_QWORD*)GameData_2178df0;
    if (*(_QWORD*)(GameData_2178df0 + 8) == *(_QWORD*)GameData_2178df0) {
      goto LABEL_38;
    }
    v2 = 0;
    v3 = 0;
    v4 = (__int64*)GameData_2178df8;
    do {
      if (v4 != nullptr) {
        v5 = *v4;
        v6 = v4[1] - *v4;
        if (v6 != 0) {
          v7 = v1 + (v3 << 6);
          v8 = 0xCCCCCCCCCCCCCCCDLL * (v6 >> 3);
          v9 = strlen(v7);
          while (1) {
            v10 = *(_BYTE*)(v5 + 16) >> 1;
            if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
              v10 = *(_QWORD*)(v5 + 24);
            }
            if (v9 == v10) {
              if (v9 == -1) {
              LABEL_66:
                snd_a36650();
              }
              v11 =
                  (*(_BYTE*)(v5 + 16) & 1) != 0 ? *(_QWORD*)(v5 + 32) : v5 + 17;
              if ((unsigned int)memcmp(v11, v7, v9) == 0) {
                break;
              }
            }
            --v8;
            v5 += 40;
            if (v8 == 0) {
              goto LABEL_5;
            }
          }
          v12 = GameRoutine_ed4a0(v5);
          v13 = (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v12 + 120LL))(
              v12, "snd::data::s_seqVoiceDataList");
          v4 = (__int64*)GameData_2178df8;
          if (v13 != 0) {
            v2 += *(_DWORD*)(v13 + 8);
          }
        }
      }
    LABEL_5:
      ++v3;
      v1 = *(_QWORD*)GameData_2178df0;
    } while (v3 < (__int64)(*(_QWORD*)(GameData_2178df0 + 8) -
                            *(_QWORD*)GameData_2178df0) >>
             6);
    if (v2 != 0) {
      v14 = snd_g_memory_ptr[0];
      v15 = (*(__int64 (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24,
                                                   32);
      *(_QWORD*)v15 = 0;
      *(_QWORD*)(v15 + 8) = 0;
      *(_QWORD*)(v15 + 16) = 0;
      GameData_2178dd8 = v15;
      snd_data_f8400_alt1((char**)v15, v2);
      if (v2 >= 1) {
        v16 = 36;
        v17 = 0;
        v18 = (_QWORD*)GameData_2178dd8;
        v19 = 120000;
        do {
          if (0x86BCA1AF286BCA1BLL * ((__int64)(v18[1] - *v18) >> 3) <= v17 ||
              (*(_DWORD*)(*v18 + v16) = v19,
               0x86BCA1AF286BCA1BLL * ((__int64)(v18[1] - *v18) >> 3) <= v17)) {
          LABEL_67:
            GameRoutine_f8010();
          }
          v20 = *v18 + v16;
          ++v17;
          v16 += 152;
          *(_DWORD*)(v20 + 4) = v19;
          v19 += 101;
        } while (v2 != v17);
      }
      v21 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v14 + 16LL))(
          *v14, 32, 32);
      v22 = GameData_2134210[0];
      *(_QWORD*)(v21 + 16) = 0;
      *(_DWORD*)(v21 + 24) = v2;
      *(_QWORD*)v21 = v22 + 2;
      *(_QWORD*)(v21 + 8) = 0;
      if (v2 >= 1) {
        v23 = (_QWORD*)GameRoutine_6511d0(40LL * (unsigned int)v2 + 8);
        v24 = 40LL * (unsigned int)v2 - 40;
        *v23 = (unsigned int)v2;
        v25 = (__int64**)(v23 + 1);
        v26 = v25;
        if ((~(v24 / 0x28) & 7) != 0) {
          v27 = ((unsigned __int8)(v24 / 0x28) + 1) & 7;
          v26 = v25;
          do {
            *v26 = (__int64*)GameData_1f53f98;
            v26 += 5;
            --v27;
          } while (v27 != 0);
        }
        if (v24 >= 0x118) {
          v28 = GameData_2134218[0] + 2;
          do {
            *v26 = v28;
            v26[5] = v28;
            v26[10] = v28;
            v26[15] = v28;
            v26[20] = v28;
            v26[25] = v28;
            v26[30] = v28;
            v26[35] = v28;
            v26 += 40;
          } while (v26 != &v25[5 * (unsigned int)v2]);
        }
        *(_QWORD*)(v21 + 8) = v25;
        v29 = GameRoutine_6511d0(8LL * (unsigned int)v2);
        v30 = 0;
        v31 = 0;
        *(_QWORD*)(v21 + 16) = v29;
        do {
          v32 = *(_QWORD*)(v21 + 8) + v30;
          v30 += 40;
          *(_DWORD*)(v32 + 8) = 0;
          *(_QWORD*)(v32 + 16) = 0;
          *(_QWORD*)(v32 + 24) = 0;
          *(_QWORD*)(v32 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v21 + 16) + 8 * v31++) = 0;
        } while (v31 < *(int*)(v21 + 24));
      }
      v33 = snd_s_target;
      *(_DWORD*)(v21 + 28) = 0;
      GameData_2178dd0 = v21;
      if (((*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v33 + 1296LL))(v33, 0) &
           1) != 0) {
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)snd_s_target + 1320LL))(
            snd_s_target, 0);
        v34 = *(_QWORD*)GameData_2178df0;
        if (*(_QWORD*)(GameData_2178df0 + 8) != *(_QWORD*)GameData_2178df0) {
          v35 = 0;
          v69 = 0;
          v36 = 0x86BCA1AF286BCA1BLL;
          do {
            if (GameData_2178df8 != 0) {
              v44 = *(_QWORD*)GameData_2178df8;
              v45 =
                  *(_QWORD*)(GameData_2178df8 + 8) - *(_QWORD*)GameData_2178df8;
              if (v45 != 0) {
                v46 = v34 + (v35 << 6);
                v47 = v36;
                v48 = 0xCCCCCCCCCCCCCCCDLL * (v45 >> 3);
                v49 = strlen(v46);
                while (1) {
                  v50 = *(_BYTE*)(v44 + 16) >> 1;
                  if ((*(_BYTE*)(v44 + 16) & 1) != 0) {
                    v50 = *(_QWORD*)(v44 + 24);
                  }
                  if (v49 == v50) {
                    if (v49 == -1) {
                      goto LABEL_66;
                    }
                    v51 = (*(_BYTE*)(v44 + 16) & 1) != 0 ? *(_QWORD*)(v44 + 32)
                                                         : v44 + 17;
                    if ((unsigned int)memcmp(v51, v46, v49) == 0) {
                      break;
                    }
                  }
                  --v48;
                  v44 += 40;
                  if (v48 == 0) {
                    goto LABEL_42;
                  }
                }
                v52 = GameRoutine_ed4a0(v44);
                v53 = (*(__int64 (**)(__int64, const char*))(
                    *(_QWORD*)v52 + 120LL))(v52,
                                            "snd::data::s_seqVoiceDataList");
                if (v53 != 0) {
                  v54 = v53;
                  v36 = v47;
                  if (*(int*)(v53 + 8) >= 1) {
                    v55 = 0;
                    v56 = 0;
                    v57 = 152LL * v69;
                    v58 = v69;
                    do {
                      v59 = *(_QWORD*)GameData_2178dd8;
                      if (((__int64)(*(_QWORD*)(GameData_2178dd8 + 8) -
                                     *(_QWORD*)GameData_2178dd8) >>
                           3) *
                              v36 <=
                          v58) {
                        goto LABEL_67;
                      }
                      v60 = GameData_2178dd0;
                      v61 = (_DWORD*)(*(_QWORD*)v54 + v55);
                      v62 = v61[1];
                      v63 = *(_QWORD*)(GameData_2178dd0 + 8) +
                            40LL * *(int*)(GameData_2178dd0 + 28);
                      *(_DWORD*)(v63 + 8) = *v61;
                      *(_DWORD*)(v63 + 12) = v62;
                      *(_QWORD*)(v63 + 16) = v61;
                      *(_QWORD*)(v63 + 24) = v59 + v57;
                      *(_QWORD*)(v63 + 32) = 0;
                      *(_QWORD*)(*(_QWORD*)(v60 + 16) +
                                 8LL * *(int*)(v60 + 28)) =
                          *(_QWORD*)(v60 + 8) + 40LL * *(int*)(v60 + 28);
                      ++*(_DWORD*)(v60 + 28);
                      v64 = *(_QWORD*)GameData_2178dd8;
                      if (((__int64)(*(_QWORD*)(GameData_2178dd8 + 8) -
                                     *(_QWORD*)GameData_2178dd8) >>
                           3) *
                              v36 <=
                          v58) {
                        goto LABEL_67;
                      }
                      v65 = v64 + v57;
                      v66 = *(_QWORD*)v54 + v55;
                      GameRoutine_f5940(v66, v64 + v57, v35);
                      *(_QWORD*)(v65 + 72) = v66;
                      ++v58;
                      ++v56;
                      v57 += 152;
                      v55 += 560;
                      v36 = v47;
                    } while (v56 < *(int*)(v54 + 8));
                    v69 = v58;
                  }
                }
                else {
                LABEL_42:
                  v36 = v47;
                }
              }
            }
            ++v35;
            v34 = *(_QWORD*)GameData_2178df0;
          } while (v35 < (__int64)(*(_QWORD*)(GameData_2178df0 + 8) -
                                   *(_QWORD*)GameData_2178df0) >>
                   6);
        }
      }
      v67 = *(_QWORD*)(GameData_2178dd0 + 16);
      if (v67 != 0) {
        v68 = *(unsigned int*)(GameData_2178dd0 + 28);
        if ((_DWORD)v68 != 0) {
          GameRoutine_fb7e0(v67, (__int64*)(v67 + 8 * v68), (__int64)&v70,
                            (2 * __clz(v68)) ^ 0x7E, 1);
        }
      }
    }
    else {
    LABEL_38:
      v37 = (*(__int64 (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 32,
                                                   32);
      v38 = GameData_2134210[0];
      *(_DWORD*)(v37 + 24) = 1;
      *(_QWORD*)v37 = v38 + 2;
      v39 = (_QWORD*)GameRoutine_6511d0(48);
      *v39 = 1;
      v39[1] = GameData_1f53f98;
      *(_QWORD*)(v37 + 8) = v39 + 1;
      v40 = GameRoutine_6511d0(8);
      v41 = 0;
      v42 = 0;
      *(_QWORD*)(v37 + 16) = v40;
      do {
        v43 = *(_QWORD*)(v37 + 8) + v41;
        v41 += 40;
        *(_DWORD*)(v43 + 8) = 0;
        *(_QWORD*)(v43 + 16) = 0;
        *(_QWORD*)(v43 + 24) = 0;
        *(_QWORD*)(v43 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(v37 + 16) + 8 * v42++) = 0;
      } while (v42 < *(int*)(v37 + 24));
      *(_DWORD*)(v37 + 28) = 0;
      GameData_2178dd0 = v37;
    }
  }
}

void snd_data_f6760()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64* v4;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  __int64* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64** v17;
  __int64** v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  int* v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64* v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  char v47;

  if (GameData_2178de0 != 0) {
    return;
  }
  v0 = GameRoutine_ed4a0((__int64)&GameData_2140070);
  v1 = (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v0 + 120LL))(
      v0, "snd::data::s_vibrationDataList");
  if (v1 == 0 || (_DWORD)(v2 = *(unsigned int*)(v1 + 8)) == 0) {
    v40 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 32, 32);
    v41 = GameData_2134220[0];
    *(_DWORD*)(v40 + 24) = 1;
    *(_QWORD*)v40 = v41 + 2;
    v42 = (_QWORD*)GameRoutine_6511d0(48);
    *v42 = 1;
    v42[1] = GameData_1f53ff8;
    *(_QWORD*)(v40 + 8) = v42 + 1;
    v43 = GameRoutine_6511d0(8);
    v44 = 0;
    v45 = 0;
    *(_QWORD*)(v40 + 16) = v43;
    do {
      v46 = *(_QWORD*)(v40 + 8) + v44;
      v44 += 40;
      *(_DWORD*)(v46 + 8) = 0;
      *(_QWORD*)(v46 + 16) = 0;
      *(_QWORD*)(v46 + 24) = 0;
      *(_QWORD*)(v46 + 32) = 0;
      *(_QWORD*)(*(_QWORD*)(v40 + 16) + 8 * v45++) = 0;
    } while (v45 < *(int*)(v40 + 24));
    *(_DWORD*)(v40 + 28) = 0;
    GameData_2178de0 = v40;
    return;
  }
  v3 = snd_g_memory_ptr[0];
  v4 = (__int64*)(*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24, 32);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  GameData_2178de8 = (__int64)v4;
  GameRoutine_f8e40(v4, (int)v2);
  if ((int)v2 >= 1) {
    v9 = (_QWORD*)GameData_2178de8;
    v10 = 4;
    v11 = 0;
    v12 = 200000;
    while (v11 < (__int64)(v9[1] - *v9) >> 4) {
      *(_DWORD*)(*v9 + v10 - 4) = v12;
      if (v11 >= (__int64)(v9[1] - *v9) >> 4) {
        break;
      }
      *(_DWORD*)(*v9 + v10) = v12;
      ++v11;
      ++v12;
      v10 += 16;
      if (v2 == v11) {
        goto LABEL_10;
      }
    }
  LABEL_31:
    GameRoutine_f8fc0();
  }
LABEL_10:
  v13 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 32, 32);
  v14 = GameData_2134220[0];
  *(_QWORD*)(v13 + 16) = 0;
  *(_DWORD*)(v13 + 24) = v2;
  *(_QWORD*)v13 = v14 + 2;
  *(_QWORD*)(v13 + 8) = 0;
  if ((int)v2 >= 1) {
    v15 = (_QWORD*)GameRoutine_6511d0(40 * v2 + 8);
    v16 = 40 * v2 - 40;
    *v15 = v2;
    v17 = (__int64**)(v15 + 1);
    v18 = v17;
    if ((~(v16 / 0x28) & 7) != 0) {
      v19 = ((unsigned __int8)(v16 / 0x28) + 1) & 7;
      v18 = v17;
      do {
        *v18 = (__int64*)GameData_1f53ff8;
        v18 += 5;
        --v19;
      } while (v19 != 0);
    }
    if (v16 >= 0x118) {
      v20 = GameData_2134228 + 2;
      do {
        *v18 = v20;
        v18[5] = v20;
        v18[10] = v20;
        v18[15] = v20;
        v18[20] = v20;
        v18[25] = v20;
        v18[30] = v20;
        v18[35] = v20;
        v18 += 40;
      } while (v18 != &v17[5 * v2]);
    }
    *(_QWORD*)(v13 + 8) = v17;
    v21 = GameRoutine_6511d0(8 * v2);
    v22 = 0;
    v23 = 0;
    *(_QWORD*)(v13 + 16) = v21;
    do {
      v24 = *(_QWORD*)(v13 + 8) + v22;
      v22 += 40;
      *(_DWORD*)(v24 + 8) = 0;
      *(_QWORD*)(v24 + 16) = 0;
      *(_QWORD*)(v24 + 24) = 0;
      *(_QWORD*)(v24 + 32) = 0;
      *(_QWORD*)(*(_QWORD*)(v13 + 16) + 8 * v23++) = 0;
    } while (v23 < *(int*)(v13 + 24));
  }
  *(_DWORD*)(v13 + 28) = 0;
  GameData_2178de0 = v13;
  v25 = GameRoutine_ed4a0((__int64)&GameData_2140070);
  v26 = (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v25 + 120LL))(
      v25, "snd::data::s_vibrationDataList");
  if (v26 != 0) {
    if (*(int*)(v26 + 8) >= 1) {
      v27 = 0;
      v28 = 0;
      v30 = GameData_2178de0;
      v29 = (__int64*)GameData_2178de8;
      do {
        v31 = *v29;
        if (v28 >= (v29[1] - *v29) >> 4) {
          goto LABEL_31;
        }
        v32 = (int*)(*(_QWORD*)v26 + v27);
        v33 = *(_QWORD*)(v30 + 8) + 40LL * *(int*)(v30 + 28);
        v35 = *v32;
        v34 = v32[1];
        *(_QWORD*)(v33 + 16) = v32;
        *(_QWORD*)(v33 + 24) = v31 + v27;
        *(_QWORD*)(v33 + 32) = 0;
        *(_DWORD*)(v33 + 8) = v35;
        *(_DWORD*)(v33 + 12) = v34;
        *(_QWORD*)(*(_QWORD*)(v30 + 16) + 8LL * *(int*)(v30 + 28)) =
            *(_QWORD*)(v30 + 8) + 40LL * *(int*)(v30 + 28);
        ++*(_DWORD*)(v30 + 28);
        if (v28 >= (v29[1] - *v29) >> 4) {
          goto LABEL_31;
        }
        v36 = *v29 + v27;
        ++v28;
        v37 = v27 + *(_QWORD*)v26;
        v27 += 16;
        *(_QWORD*)(v36 + 8) = v37;
      } while ((__int64)v28 < *(int*)(v26 + 8));
    }
    v38 = *(_QWORD*)(GameData_2178de0 + 16);
    if (v38 != 0) {
      v39 = *(unsigned int*)(GameData_2178de0 + 28);
      if ((_DWORD)v39 != 0) {
        GameRoutine_fcc20(v38, (__int64*)(v38 + 8 * v39), (__int64)&v47,
                          (2 * __clz(v39)) ^ 0x7E, 1);
      }
    }
  }
}

char** snd_data_f77e0(char** result, unsigned __int64 a2)
{
  char* v2;
  char* v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  _QWORD* v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  bool v13;
  char** v14;
  unsigned __int64 v15;
  _QWORD* v16;
  char* v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  char* v21;
  char* v22;
  char* v23;
  char* v24;
  char* v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  __int64 v33;

  v2 = result[1];
  v3 = result[2];
  if (0x4EC4EC4EC4EC4EC5LL * ((v3 - v2) >> 3) >= a2) {
    if (a2 != 0) {
      v10 = &v2[104 * a2];
      v11 = 104 * a2 - 104;
      if ((~(v11 / 0x68) & 7) != 0) {
        v12 = -(__int64)(((unsigned __int8)(v11 / 0x68) + 1) & 7);
        do {
          *((_QWORD*)v2 + 11) = 0;
          *((_QWORD*)v2 + 12) = 0;
          *((_QWORD*)v2 + 9) = 0;
          *((_QWORD*)v2 + 10) = 0;
          v13 = __CFADD__(v12++, 1);
          *((_QWORD*)v2 + 6) = 0;
          *((_QWORD*)v2 + 7) = 0;
          *((_QWORD*)v2 + 2) = 0;
          *((_QWORD*)v2 + 3) = 0;
          *(_QWORD*)v2 = 0;
          *((_QWORD*)v2 + 1) = 0;
          *((_QWORD*)v2 + 4) = 0;
          *((_QWORD*)v2 + 5) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v2 + 8) = snd_fnd_Vec3_vtable;
          v2 += 104;
        } while (!v13);
      }
      if (v11 >= 0x2D8) {
        do {
          *((_QWORD*)v2 + 10) = 0;
          *((_QWORD*)v2 + 11) = 0;
          *((_QWORD*)v2 + 6) = 0;
          *((_QWORD*)v2 + 7) = 0;
          *((_QWORD*)v2 + 2) = 0;
          *((_QWORD*)v2 + 3) = 0;
          *(_QWORD*)v2 = 0;
          *((_QWORD*)v2 + 1) = 0;
          *((_QWORD*)v2 + 4) = 0;
          *((_QWORD*)v2 + 5) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v2 + 8) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v2 + 9) = 0;
          *((_QWORD*)v2 + 12) = 0;
          *((_QWORD*)v2 + 13) = 0;
          *((_QWORD*)v2 + 14) = 0;
          *((_QWORD*)v2 + 15) = 0;
          *((_QWORD*)v2 + 16) = 0;
          *((_QWORD*)v2 + 17) = 0;
          *((_QWORD*)v2 + 18) = 0;
          *((_QWORD*)v2 + 19) = 0;
          *((_QWORD*)v2 + 20) = 0;
          *((_QWORD*)v2 + 21) = 0;
          *((_QWORD*)v2 + 23) = 0;
          *((_QWORD*)v2 + 24) = 0;
          *((_QWORD*)v2 + 18) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v2 + 21) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v2 + 22) = 0;
          *((_QWORD*)v2 + 25) = 0;
          *((_QWORD*)v2 + 26) = 0;
          *((_QWORD*)v2 + 27) = 0;
          *((_QWORD*)v2 + 28) = 0;
          *((_QWORD*)v2 + 29) = 0;
          *((_QWORD*)v2 + 30) = 0;
          *((_QWORD*)v2 + 35) = 0;
          *((_QWORD*)v2 + 36) = 0;
          *((_QWORD*)v2 + 37) = 0;
          *((_QWORD*)v2 + 38) = 0;
          *((_QWORD*)v2 + 31) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v2 + 32) = 0;
          *((_QWORD*)v2 + 33) = 0;
          *((_QWORD*)v2 + 34) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v2 + 39) = 0;
          *((_QWORD*)v2 + 40) = 0;
          *((_QWORD*)v2 + 41) = 0;
          *((_QWORD*)v2 + 42) = 0;
          *((_QWORD*)v2 + 43) = 0;
          *((_QWORD*)v2 + 44) = 0;
          *((_QWORD*)v2 + 46) = 0;
          *((_QWORD*)v2 + 47) = 0;
          *((_QWORD*)v2 + 49) = 0;
          *((_QWORD*)v2 + 50) = 0;
          *((_QWORD*)v2 + 44) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v2 + 45) = 0;
          *((_QWORD*)v2 + 47) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v2 + 48) = 0;
          *((_QWORD*)v2 + 63) = 0;
          *((_QWORD*)v2 + 64) = 0;
          *((_QWORD*)v2 + 61) = 0;
          *((_QWORD*)v2 + 62) = 0;
          *((_QWORD*)v2 + 59) = 0;
          *((_QWORD*)v2 + 60) = 0;
          *((_QWORD*)v2 + 57) = 0;
          *((_QWORD*)v2 + 58) = 0;
          *((_QWORD*)v2 + 55) = 0;
          *((_QWORD*)v2 + 56) = 0;
          *((_QWORD*)v2 + 53) = 0;
          *((_QWORD*)v2 + 54) = 0;
          *((_QWORD*)v2 + 51) = 0;
          *((_QWORD*)v2 + 52) = 0;
          *((_QWORD*)v2 + 57) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v2 + 60) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v2 + 77) = 0;
          *((_QWORD*)v2 + 76) = 0;
          *((_QWORD*)v2 + 75) = 0;
          *((_QWORD*)v2 + 74) = 0;
          *((_QWORD*)v2 + 73) = 0;
          *((_QWORD*)v2 + 72) = 0;
          *((_QWORD*)v2 + 71) = 0;
          *((_QWORD*)v2 + 70) = 0;
          *((_QWORD*)v2 + 69) = 0;
          *((_QWORD*)v2 + 68) = 0;
          *((_QWORD*)v2 + 67) = 0;
          *((_QWORD*)v2 + 66) = 0;
          *((_QWORD*)v2 + 65) = 0;
          *((_QWORD*)v2 + 70) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v2 + 73) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v2 + 90) = 0;
          *((_QWORD*)v2 + 89) = 0;
          *((_QWORD*)v2 + 88) = 0;
          *((_QWORD*)v2 + 87) = 0;
          *((_QWORD*)v2 + 86) = 0;
          *((_QWORD*)v2 + 85) = 0;
          *((_QWORD*)v2 + 84) = 0;
          *((_QWORD*)v2 + 83) = 0;
          *((_QWORD*)v2 + 82) = 0;
          *((_QWORD*)v2 + 81) = 0;
          *((_QWORD*)v2 + 80) = 0;
          *((_QWORD*)v2 + 79) = 0;
          *((_QWORD*)v2 + 78) = 0;
          *((_QWORD*)v2 + 83) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v2 + 86) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v2 + 103) = 0;
          *((_QWORD*)v2 + 102) = 0;
          *((_QWORD*)v2 + 101) = 0;
          *((_QWORD*)v2 + 100) = 0;
          *((_QWORD*)v2 + 99) = 0;
          *((_QWORD*)v2 + 98) = 0;
          *((_QWORD*)v2 + 97) = 0;
          *((_QWORD*)v2 + 96) = 0;
          *((_QWORD*)v2 + 95) = 0;
          *((_QWORD*)v2 + 94) = 0;
          *((_QWORD*)v2 + 93) = 0;
          *((_QWORD*)v2 + 92) = 0;
          *((_QWORD*)v2 + 91) = 0;
          *((_QWORD*)v2 + 96) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v2 + 99) = snd_fnd_Vec3_vtable;
          v2 += 832;
        } while (v2 != v10);
      }
      v2 = v10;
    }
    result[1] = v2;
  }
  else {
    v4 = v2 - *result;
    v5 = a2 + 0x4EC4EC4EC4EC4EC5LL * (v4 >> 3);
    if (v5 > 0x276276276276276LL) {
      GameRoutine_f7d90();
    }
    v6 = snd_g_memory_ptr[0];
    v7 = 0x4EC4EC4EC4EC4EC5LL * ((v3 - *result) >> 3);
    if (2 * v7 > v5) {
      v5 = 2 * v7;
    }
    if (v7 >= 0x13B13B13B13B13BLL) {
      v8 = 0x276276276276276LL;
    }
    else {
      v8 = v5;
    }
    if ((unsigned __int64)(v8 - 0x276276276276277LL) >= 0xFD89D89D89D89D8ALL) {
      v14 = result;
      v15 = a2;
      v16 = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD, __int64, __int64))(
          **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(
          *(_QWORD**)snd_g_memory_ptr[0], *snd_g_memory_ptr[0], 104 * v8, 32);
      a2 = v15;
      v9 = v16;
      result = v14;
    }
    else {
      v9 = nullptr;
    }
    v17 = (char*)v9 + v4;
    v18 = 104 * a2 - 104;
    if ((~(v18 / 0x68) & 7) != 0) {
      v20 = -(__int64)(((unsigned __int8)(v18 / 0x68) + 1) & 7);
      v19 = (char*)v9 + v4;
      do {
        *((_QWORD*)v19 + 11) = 0;
        *((_QWORD*)v19 + 12) = 0;
        *((_QWORD*)v19 + 9) = 0;
        *((_QWORD*)v19 + 10) = 0;
        v13 = __CFADD__(v20++, 1);
        *((_QWORD*)v19 + 6) = 0;
        *((_QWORD*)v19 + 7) = 0;
        *((_QWORD*)v19 + 2) = 0;
        *((_QWORD*)v19 + 3) = 0;
        *(_QWORD*)v19 = 0;
        *((_QWORD*)v19 + 1) = 0;
        *((_QWORD*)v19 + 4) = 0;
        *((_QWORD*)v19 + 5) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 8) = snd_fnd_Vec3_vtable;
        v19 += 104;
      } while (!v13);
    }
    else {
      v19 = (char*)v9 + v4;
    }
    v21 = &v17[104 * a2];
    if (v18 >= 0x2D8) {
      do {
        *((_QWORD*)v19 + 10) = 0;
        *((_QWORD*)v19 + 11) = 0;
        *((_QWORD*)v19 + 6) = 0;
        *((_QWORD*)v19 + 7) = 0;
        *((_QWORD*)v19 + 2) = 0;
        *((_QWORD*)v19 + 3) = 0;
        *(_QWORD*)v19 = 0;
        *((_QWORD*)v19 + 1) = 0;
        *((_QWORD*)v19 + 4) = 0;
        *((_QWORD*)v19 + 5) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 8) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 9) = 0;
        *((_QWORD*)v19 + 12) = 0;
        *((_QWORD*)v19 + 13) = 0;
        *((_QWORD*)v19 + 14) = 0;
        *((_QWORD*)v19 + 15) = 0;
        *((_QWORD*)v19 + 16) = 0;
        *((_QWORD*)v19 + 17) = 0;
        *((_QWORD*)v19 + 18) = 0;
        *((_QWORD*)v19 + 19) = 0;
        *((_QWORD*)v19 + 20) = 0;
        *((_QWORD*)v19 + 21) = 0;
        *((_QWORD*)v19 + 23) = 0;
        *((_QWORD*)v19 + 24) = 0;
        *((_QWORD*)v19 + 18) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 21) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 22) = 0;
        *((_QWORD*)v19 + 25) = 0;
        *((_QWORD*)v19 + 26) = 0;
        *((_QWORD*)v19 + 27) = 0;
        *((_QWORD*)v19 + 28) = 0;
        *((_QWORD*)v19 + 29) = 0;
        *((_QWORD*)v19 + 30) = 0;
        *((_QWORD*)v19 + 35) = 0;
        *((_QWORD*)v19 + 36) = 0;
        *((_QWORD*)v19 + 37) = 0;
        *((_QWORD*)v19 + 38) = 0;
        *((_QWORD*)v19 + 31) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 32) = 0;
        *((_QWORD*)v19 + 33) = 0;
        *((_QWORD*)v19 + 34) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 39) = 0;
        *((_QWORD*)v19 + 40) = 0;
        *((_QWORD*)v19 + 41) = 0;
        *((_QWORD*)v19 + 42) = 0;
        *((_QWORD*)v19 + 43) = 0;
        *((_QWORD*)v19 + 44) = 0;
        *((_QWORD*)v19 + 46) = 0;
        *((_QWORD*)v19 + 47) = 0;
        *((_QWORD*)v19 + 49) = 0;
        *((_QWORD*)v19 + 50) = 0;
        *((_QWORD*)v19 + 44) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 45) = 0;
        *((_QWORD*)v19 + 47) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 48) = 0;
        *((_QWORD*)v19 + 63) = 0;
        *((_QWORD*)v19 + 64) = 0;
        *((_QWORD*)v19 + 61) = 0;
        *((_QWORD*)v19 + 62) = 0;
        *((_QWORD*)v19 + 59) = 0;
        *((_QWORD*)v19 + 60) = 0;
        *((_QWORD*)v19 + 57) = 0;
        *((_QWORD*)v19 + 58) = 0;
        *((_QWORD*)v19 + 55) = 0;
        *((_QWORD*)v19 + 56) = 0;
        *((_QWORD*)v19 + 53) = 0;
        *((_QWORD*)v19 + 54) = 0;
        *((_QWORD*)v19 + 51) = 0;
        *((_QWORD*)v19 + 52) = 0;
        *((_QWORD*)v19 + 57) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 60) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 77) = 0;
        *((_QWORD*)v19 + 76) = 0;
        *((_QWORD*)v19 + 75) = 0;
        *((_QWORD*)v19 + 74) = 0;
        *((_QWORD*)v19 + 73) = 0;
        *((_QWORD*)v19 + 72) = 0;
        *((_QWORD*)v19 + 71) = 0;
        *((_QWORD*)v19 + 70) = 0;
        *((_QWORD*)v19 + 69) = 0;
        *((_QWORD*)v19 + 68) = 0;
        *((_QWORD*)v19 + 67) = 0;
        *((_QWORD*)v19 + 66) = 0;
        *((_QWORD*)v19 + 65) = 0;
        *((_QWORD*)v19 + 70) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 73) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 90) = 0;
        *((_QWORD*)v19 + 89) = 0;
        *((_QWORD*)v19 + 88) = 0;
        *((_QWORD*)v19 + 87) = 0;
        *((_QWORD*)v19 + 86) = 0;
        *((_QWORD*)v19 + 85) = 0;
        *((_QWORD*)v19 + 84) = 0;
        *((_QWORD*)v19 + 83) = 0;
        *((_QWORD*)v19 + 82) = 0;
        *((_QWORD*)v19 + 81) = 0;
        *((_QWORD*)v19 + 80) = 0;
        *((_QWORD*)v19 + 79) = 0;
        *((_QWORD*)v19 + 78) = 0;
        *((_QWORD*)v19 + 83) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 86) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 103) = 0;
        *((_QWORD*)v19 + 102) = 0;
        *((_QWORD*)v19 + 101) = 0;
        *((_QWORD*)v19 + 100) = 0;
        *((_QWORD*)v19 + 99) = 0;
        *((_QWORD*)v19 + 98) = 0;
        *((_QWORD*)v19 + 97) = 0;
        *((_QWORD*)v19 + 96) = 0;
        *((_QWORD*)v19 + 95) = 0;
        *((_QWORD*)v19 + 94) = 0;
        *((_QWORD*)v19 + 93) = 0;
        *((_QWORD*)v19 + 92) = 0;
        *((_QWORD*)v19 + 91) = 0;
        *((_QWORD*)v19 + 96) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 99) = snd_fnd_Vec3_vtable;
        v19 += 832;
      } while (v19 != v21);
    }
    v22 = (char*)&v9[13 * v8];
    v23 = *result;
    v24 = result[1];
    v25 = &v17[*result - v24];
    if (v24 != *result) {
      v26 = v25;
      v27 = GameData_212e2d8 + 16;
      do {
        *(_QWORD*)v26 = *(_QWORD*)v23;
        v28 = *((_QWORD*)v23 + 1);
        v29 = *((_QWORD*)v23 + 2);
        v30 = *((_QWORD*)v23 + 3);
        v31 = *((_DWORD*)v23 + 8);
        *((_QWORD*)v26 + 5) = v27;
        *((_DWORD*)v26 + 8) = v31;
        *((_QWORD*)v26 + 2) = v29;
        *((_QWORD*)v26 + 3) = v30;
        *((_QWORD*)v26 + 1) = v28;
        *((_DWORD*)v26 + 12) = *((_DWORD*)v23 + 12);
        *((_DWORD*)v26 + 13) = *((_DWORD*)v23 + 13);
        v32 = *((_DWORD*)v23 + 14);
        *((_QWORD*)v26 + 8) = v27;
        *((_DWORD*)v26 + 14) = v32;
        *((_DWORD*)v26 + 18) = *((_DWORD*)v23 + 18);
        *((_DWORD*)v26 + 19) = *((_DWORD*)v23 + 19);
        *((_DWORD*)v26 + 20) = *((_DWORD*)v23 + 20);
        v33 = *((_QWORD*)v23 + 11);
        LOBYTE(v29) = v23[96];
        v23 += 104;
        v26[96] = v29;
        *((_QWORD*)v26 + 11) = v33;
        v26 += 104;
      } while (v23 != v24);
      v23 = *result;
    }
    *result = v25;
    result[1] = v21;
    result[2] = v22;
    if (v23 != nullptr) {
      return (*(char** (**)(__int64))(*(_QWORD*)*v6 + 24LL))(*v6);
    }
  }
  return result;
}

void snd_data_f8400(char** result, unsigned __int64 a2, long double a3)
{

#pragma clang fp contract(off)
  char* v3;
  char* v4;
  __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;
  __int64 v14;
  bool v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  char* v21;
  char* v22;
  char* v23;
  char* v24;
  char* v25;
  __int64 v26;
  char* v27;
  __int64 v28;

  v3 = result[1];
  v4 = result[2];
  if (0x86BCA1AF286BCA1BLL * ((v4 - v3) >> 3) >= a2) {
    if (a2 != 0) {
      v12 = &v3[152 * a2];
      v13 = 152 * a2 - 152;
      if ((~(v13 / 0x98) & 7) != 0) {
        v14 = -(__int64)(((unsigned __int8)(v13 / 0x98) + 1) & 7);
        do {
          *((_QWORD*)v3 + 17) = 0;
          *((_QWORD*)v3 + 18) = 0;
          *((_QWORD*)v3 + 15) = 0;
          *((_QWORD*)v3 + 16) = 0;
          v15 = __CFADD__(v14++, 1);
          *((_QWORD*)v3 + 13) = 0;
          *((_QWORD*)v3 + 14) = 0;
          *((_QWORD*)v3 + 10) = 0;
          *((_QWORD*)v3 + 11) = 0;
          *((_QWORD*)v3 + 8) = 0;
          *((_QWORD*)v3 + 9) = 0;
          *((_QWORD*)v3 + 6) = 0;
          *((_QWORD*)v3 + 7) = 0;
          *((_QWORD*)v3 + 4) = 0;
          *((_QWORD*)v3 + 5) = 0;
          *((_QWORD*)v3 + 2) = 0;
          *((_QWORD*)v3 + 3) = 0;
          *(_QWORD*)v3 = 0;
          *((_QWORD*)v3 + 1) = 0;
          *((_QWORD*)v3 + 11) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v3 + 12) = 0;
          *((_QWORD*)v3 + 14) = snd_fnd_Vec3_vtable;
          v3 += 152;
        } while (!v15);
      }
      if (v13 >= 0x428) {
        do {
          *((_QWORD*)v3 + 16) = 0;
          *((_QWORD*)v3 + 17) = 0;
          *((_QWORD*)v3 + 13) = 0;
          *((_QWORD*)v3 + 14) = 0;
          *((_QWORD*)v3 + 10) = 0;
          *((_QWORD*)v3 + 11) = 0;
          *((_QWORD*)v3 + 8) = 0;
          *((_QWORD*)v3 + 9) = 0;
          *((_QWORD*)v3 + 6) = 0;
          *((_QWORD*)v3 + 7) = 0;
          *((_QWORD*)v3 + 4) = 0;
          *((_QWORD*)v3 + 5) = 0;
          *((_QWORD*)v3 + 2) = 0;
          *((_QWORD*)v3 + 3) = 0;
          *(_QWORD*)v3 = 0;
          *((_QWORD*)v3 + 1) = 0;
          *((_QWORD*)v3 + 11) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v3 + 12) = 0;
          *((_QWORD*)v3 + 14) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v3 + 15) = 0;
          *((_QWORD*)v3 + 18) = 0;
          *((_QWORD*)v3 + 19) = 0;
          *((_QWORD*)v3 + 20) = 0;
          *((_QWORD*)v3 + 21) = 0;
          *((_QWORD*)v3 + 22) = 0;
          *((_QWORD*)v3 + 23) = 0;
          *((_QWORD*)v3 + 24) = 0;
          *((_QWORD*)v3 + 25) = 0;
          *((_QWORD*)v3 + 26) = 0;
          *((_QWORD*)v3 + 27) = 0;
          *((_QWORD*)v3 + 28) = 0;
          *((_QWORD*)v3 + 29) = 0;
          *((_QWORD*)v3 + 30) = 0;
          *((_QWORD*)v3 + 31) = 0;
          *((_QWORD*)v3 + 32) = 0;
          *((_QWORD*)v3 + 33) = 0;
          *((_QWORD*)v3 + 35) = 0;
          *((_QWORD*)v3 + 36) = 0;
          *((_QWORD*)v3 + 30) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v3 + 33) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v3 + 34) = 0;
          *((_QWORD*)v3 + 37) = 0;
          *((_QWORD*)v3 + 38) = 0;
          *((_QWORD*)v3 + 39) = 0;
          *((_QWORD*)v3 + 40) = 0;
          *((_QWORD*)v3 + 41) = 0;
          *((_QWORD*)v3 + 42) = 0;
          *((_QWORD*)v3 + 43) = 0;
          *((_QWORD*)v3 + 44) = 0;
          *((_QWORD*)v3 + 45) = 0;
          *((_QWORD*)v3 + 46) = 0;
          *((_QWORD*)v3 + 47) = 0;
          *((_QWORD*)v3 + 48) = 0;
          *((_QWORD*)v3 + 49) = 0;
          *((_QWORD*)v3 + 50) = 0;
          *((_QWORD*)v3 + 51) = 0;
          *((_QWORD*)v3 + 52) = 0;
          *((_QWORD*)v3 + 54) = 0;
          *((_QWORD*)v3 + 55) = 0;
          *((_QWORD*)v3 + 49) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v3 + 52) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v3 + 53) = 0;
          *((_QWORD*)v3 + 56) = 0;
          *((_QWORD*)v3 + 57) = 0;
          *((_QWORD*)v3 + 58) = 0;
          *((_QWORD*)v3 + 59) = 0;
          *((_QWORD*)v3 + 60) = 0;
          *((_QWORD*)v3 + 61) = 0;
          *((_QWORD*)v3 + 62) = 0;
          *((_QWORD*)v3 + 63) = 0;
          *((_QWORD*)v3 + 64) = 0;
          *((_QWORD*)v3 + 65) = 0;
          *((_QWORD*)v3 + 66) = 0;
          *((_QWORD*)v3 + 67) = 0;
          *((_QWORD*)v3 + 68) = 0;
          *((_QWORD*)v3 + 69) = 0;
          *((_QWORD*)v3 + 70) = 0;
          *((_QWORD*)v3 + 71) = 0;
          *((_QWORD*)v3 + 72) = 0;
          *((_QWORD*)v3 + 73) = 0;
          *((_QWORD*)v3 + 74) = 0;
          *((_QWORD*)v3 + 75) = 0;
          *((_QWORD*)v3 + 68) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v3 + 71) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v3 + 76) = 0;
          *((_QWORD*)v3 + 77) = 0;
          *((_QWORD*)v3 + 78) = 0;
          *((_QWORD*)v3 + 79) = 0;
          *((_QWORD*)v3 + 80) = 0;
          *((_QWORD*)v3 + 81) = 0;
          *((_QWORD*)v3 + 82) = 0;
          *((_QWORD*)v3 + 83) = 0;
          *((_QWORD*)v3 + 84) = 0;
          *((_QWORD*)v3 + 85) = 0;
          *((_QWORD*)v3 + 86) = 0;
          *((_QWORD*)v3 + 87) = 0;
          *((_QWORD*)v3 + 88) = 0;
          *((_QWORD*)v3 + 89) = 0;
          *((_QWORD*)v3 + 90) = 0;
          *((_QWORD*)v3 + 91) = 0;
          *((_QWORD*)v3 + 92) = 0;
          *((_QWORD*)v3 + 93) = 0;
          *((_QWORD*)v3 + 94) = 0;
          *((_QWORD*)v3 + 87) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v3 + 90) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v3 + 95) = 0;
          *((_QWORD*)v3 + 96) = 0;
          *((_QWORD*)v3 + 97) = 0;
          *((_QWORD*)v3 + 98) = 0;
          *((_QWORD*)v3 + 99) = 0;
          *((_QWORD*)v3 + 100) = 0;
          *((_QWORD*)v3 + 101) = 0;
          *((_QWORD*)v3 + 102) = 0;
          *((_QWORD*)v3 + 103) = 0;
          *((_QWORD*)v3 + 104) = 0;
          *((_QWORD*)v3 + 105) = 0;
          *((_QWORD*)v3 + 106) = 0;
          *((_QWORD*)v3 + 107) = 0;
          *((_QWORD*)v3 + 108) = 0;
          *((_QWORD*)v3 + 109) = 0;
          *((_QWORD*)v3 + 110) = 0;
          *((_QWORD*)v3 + 111) = 0;
          *((_QWORD*)v3 + 112) = 0;
          *((_QWORD*)v3 + 113) = 0;
          *((_QWORD*)v3 + 106) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v3 + 109) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v3 + 114) = 0;
          *((_QWORD*)v3 + 115) = 0;
          *((_QWORD*)v3 + 116) = 0;
          *((_QWORD*)v3 + 117) = 0;
          *((_QWORD*)v3 + 118) = 0;
          *((_QWORD*)v3 + 119) = 0;
          *((_QWORD*)v3 + 120) = 0;
          *((_QWORD*)v3 + 121) = 0;
          *((_QWORD*)v3 + 122) = 0;
          *((_QWORD*)v3 + 123) = 0;
          *((_QWORD*)v3 + 124) = 0;
          *((_QWORD*)v3 + 125) = 0;
          *((_QWORD*)v3 + 126) = 0;
          *((_QWORD*)v3 + 127) = 0;
          *((_QWORD*)v3 + 128) = 0;
          *((_QWORD*)v3 + 129) = 0;
          *((_QWORD*)v3 + 130) = 0;
          *((_QWORD*)v3 + 131) = 0;
          *((_QWORD*)v3 + 132) = 0;
          *((_QWORD*)v3 + 125) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v3 + 128) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v3 + 133) = 0;
          *((_QWORD*)v3 + 134) = 0;
          *((_QWORD*)v3 + 135) = 0;
          *((_QWORD*)v3 + 136) = 0;
          *((_QWORD*)v3 + 137) = 0;
          *((_QWORD*)v3 + 138) = 0;
          *((_QWORD*)v3 + 139) = 0;
          *((_QWORD*)v3 + 140) = 0;
          *((_QWORD*)v3 + 141) = 0;
          *((_QWORD*)v3 + 142) = 0;
          *((_QWORD*)v3 + 143) = 0;
          *((_QWORD*)v3 + 144) = 0;
          *((_QWORD*)v3 + 145) = 0;
          *((_QWORD*)v3 + 146) = 0;
          *((_QWORD*)v3 + 147) = 0;
          *((_QWORD*)v3 + 148) = 0;
          *((_QWORD*)v3 + 149) = 0;
          *((_QWORD*)v3 + 150) = 0;
          *((_QWORD*)v3 + 151) = 0;
          *((_QWORD*)v3 + 144) = snd_fnd_Vec3_vtable;
          *((_QWORD*)v3 + 147) = snd_fnd_Vec3_vtable;
          v3 += 1216;
        } while (v3 != v12);
      }
      v3 = v12;
    }
    result[1] = v3;
  }
  else {
    v6 = v3 - *result;
    v7 = a2 - 0x79435E50D79435E5LL * (v6 >> 3);
    if (v7 > 0x1AF286BCA1AF286LL) {
      GameRoutine_f8b90();
    }
    v8 = snd_g_memory_ptr[0];
    v9 = 0x86BCA1AF286BCA1BLL * ((v4 - *result) >> 3);
    if (2 * v9 > v7) {
      v7 = 2 * v9;
    }
    if (v9 >= 0xD79435E50D7943LL) {
      v10 = 0x1AF286BCA1AF286LL;
    }
    else {
      v10 = v7;
    }
    if ((unsigned __int64)(v10 - 0x1AF286BCA1AF287LL) >= 0xFE50D79435E50D7ALL) {
      v16 = a2;
      v11 = (*(__int64 (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0],
                                                   152 * v10, 32);
      a2 = v16;
    }
    else {
      v11 = 0;
    }
    v17 = v11 + v6;
    v18 = 152 * a2 - 152;
    if ((~(v18 / 0x98) & 7) != 0) {
      v20 = -(__int64)(((unsigned __int8)(v18 / 0x98) + 1) & 7);
      v19 = (char*)(v11 + v6);
      do {
        *((_QWORD*)v19 + 17) = 0;
        *((_QWORD*)v19 + 18) = 0;
        *((_QWORD*)v19 + 15) = 0;
        *((_QWORD*)v19 + 16) = 0;
        v15 = __CFADD__(v20++, 1);
        *((_QWORD*)v19 + 13) = 0;
        *((_QWORD*)v19 + 14) = 0;
        *((_QWORD*)v19 + 10) = 0;
        *((_QWORD*)v19 + 11) = 0;
        *((_QWORD*)v19 + 8) = 0;
        *((_QWORD*)v19 + 9) = 0;
        *((_QWORD*)v19 + 6) = 0;
        *((_QWORD*)v19 + 7) = 0;
        *((_QWORD*)v19 + 4) = 0;
        *((_QWORD*)v19 + 5) = 0;
        *((_QWORD*)v19 + 2) = 0;
        *((_QWORD*)v19 + 3) = 0;
        *(_QWORD*)v19 = 0;
        *((_QWORD*)v19 + 1) = 0;
        *((_QWORD*)v19 + 11) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 12) = 0;
        *((_QWORD*)v19 + 14) = snd_fnd_Vec3_vtable;
        v19 += 152;
      } while (!v15);
    }
    else {
      v19 = (char*)(v11 + v6);
    }
    v21 = (char*)(v17 + 152 * a2);
    if (v18 >= 0x428) {
      do {
        *((_QWORD*)v19 + 16) = 0;
        *((_QWORD*)v19 + 17) = 0;
        *((_QWORD*)v19 + 13) = 0;
        *((_QWORD*)v19 + 14) = 0;
        *((_QWORD*)v19 + 10) = 0;
        *((_QWORD*)v19 + 11) = 0;
        *((_QWORD*)v19 + 8) = 0;
        *((_QWORD*)v19 + 9) = 0;
        *((_QWORD*)v19 + 6) = 0;
        *((_QWORD*)v19 + 7) = 0;
        *((_QWORD*)v19 + 4) = 0;
        *((_QWORD*)v19 + 5) = 0;
        *((_QWORD*)v19 + 2) = 0;
        *((_QWORD*)v19 + 3) = 0;
        *(_QWORD*)v19 = 0;
        *((_QWORD*)v19 + 1) = 0;
        *((_QWORD*)v19 + 11) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 12) = 0;
        *((_QWORD*)v19 + 14) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 15) = 0;
        *((_QWORD*)v19 + 18) = 0;
        *((_QWORD*)v19 + 19) = 0;
        *((_QWORD*)v19 + 20) = 0;
        *((_QWORD*)v19 + 21) = 0;
        *((_QWORD*)v19 + 22) = 0;
        *((_QWORD*)v19 + 23) = 0;
        *((_QWORD*)v19 + 24) = 0;
        *((_QWORD*)v19 + 25) = 0;
        *((_QWORD*)v19 + 26) = 0;
        *((_QWORD*)v19 + 27) = 0;
        *((_QWORD*)v19 + 28) = 0;
        *((_QWORD*)v19 + 29) = 0;
        *((_QWORD*)v19 + 30) = 0;
        *((_QWORD*)v19 + 31) = 0;
        *((_QWORD*)v19 + 32) = 0;
        *((_QWORD*)v19 + 33) = 0;
        *((_QWORD*)v19 + 35) = 0;
        *((_QWORD*)v19 + 36) = 0;
        *((_QWORD*)v19 + 30) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 33) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 34) = 0;
        *((_QWORD*)v19 + 37) = 0;
        *((_QWORD*)v19 + 38) = 0;
        *((_QWORD*)v19 + 39) = 0;
        *((_QWORD*)v19 + 40) = 0;
        *((_QWORD*)v19 + 41) = 0;
        *((_QWORD*)v19 + 42) = 0;
        *((_QWORD*)v19 + 43) = 0;
        *((_QWORD*)v19 + 44) = 0;
        *((_QWORD*)v19 + 45) = 0;
        *((_QWORD*)v19 + 46) = 0;
        *((_QWORD*)v19 + 47) = 0;
        *((_QWORD*)v19 + 48) = 0;
        *((_QWORD*)v19 + 49) = 0;
        *((_QWORD*)v19 + 50) = 0;
        *((_QWORD*)v19 + 51) = 0;
        *((_QWORD*)v19 + 52) = 0;
        *((_QWORD*)v19 + 54) = 0;
        *((_QWORD*)v19 + 55) = 0;
        *((_QWORD*)v19 + 49) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 52) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 53) = 0;
        *((_QWORD*)v19 + 56) = 0;
        *((_QWORD*)v19 + 57) = 0;
        *((_QWORD*)v19 + 58) = 0;
        *((_QWORD*)v19 + 59) = 0;
        *((_QWORD*)v19 + 60) = 0;
        *((_QWORD*)v19 + 61) = 0;
        *((_QWORD*)v19 + 62) = 0;
        *((_QWORD*)v19 + 63) = 0;
        *((_QWORD*)v19 + 64) = 0;
        *((_QWORD*)v19 + 65) = 0;
        *((_QWORD*)v19 + 66) = 0;
        *((_QWORD*)v19 + 67) = 0;
        *((_QWORD*)v19 + 68) = 0;
        *((_QWORD*)v19 + 69) = 0;
        *((_QWORD*)v19 + 70) = 0;
        *((_QWORD*)v19 + 71) = 0;
        *((_QWORD*)v19 + 72) = 0;
        *((_QWORD*)v19 + 73) = 0;
        *((_QWORD*)v19 + 74) = 0;
        *((_QWORD*)v19 + 75) = 0;
        *((_QWORD*)v19 + 68) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 71) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 76) = 0;
        *((_QWORD*)v19 + 77) = 0;
        *((_QWORD*)v19 + 78) = 0;
        *((_QWORD*)v19 + 79) = 0;
        *((_QWORD*)v19 + 80) = 0;
        *((_QWORD*)v19 + 81) = 0;
        *((_QWORD*)v19 + 82) = 0;
        *((_QWORD*)v19 + 83) = 0;
        *((_QWORD*)v19 + 84) = 0;
        *((_QWORD*)v19 + 85) = 0;
        *((_QWORD*)v19 + 86) = 0;
        *((_QWORD*)v19 + 87) = 0;
        *((_QWORD*)v19 + 88) = 0;
        *((_QWORD*)v19 + 89) = 0;
        *((_QWORD*)v19 + 90) = 0;
        *((_QWORD*)v19 + 91) = 0;
        *((_QWORD*)v19 + 92) = 0;
        *((_QWORD*)v19 + 93) = 0;
        *((_QWORD*)v19 + 94) = 0;
        *((_QWORD*)v19 + 87) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 90) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 95) = 0;
        *((_QWORD*)v19 + 96) = 0;
        *((_QWORD*)v19 + 97) = 0;
        *((_QWORD*)v19 + 98) = 0;
        *((_QWORD*)v19 + 99) = 0;
        *((_QWORD*)v19 + 100) = 0;
        *((_QWORD*)v19 + 101) = 0;
        *((_QWORD*)v19 + 102) = 0;
        *((_QWORD*)v19 + 103) = 0;
        *((_QWORD*)v19 + 104) = 0;
        *((_QWORD*)v19 + 105) = 0;
        *((_QWORD*)v19 + 106) = 0;
        *((_QWORD*)v19 + 107) = 0;
        *((_QWORD*)v19 + 108) = 0;
        *((_QWORD*)v19 + 109) = 0;
        *((_QWORD*)v19 + 110) = 0;
        *((_QWORD*)v19 + 111) = 0;
        *((_QWORD*)v19 + 112) = 0;
        *((_QWORD*)v19 + 113) = 0;
        *((_QWORD*)v19 + 106) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 109) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 114) = 0;
        *((_QWORD*)v19 + 115) = 0;
        *((_QWORD*)v19 + 116) = 0;
        *((_QWORD*)v19 + 117) = 0;
        *((_QWORD*)v19 + 118) = 0;
        *((_QWORD*)v19 + 119) = 0;
        *((_QWORD*)v19 + 120) = 0;
        *((_QWORD*)v19 + 121) = 0;
        *((_QWORD*)v19 + 122) = 0;
        *((_QWORD*)v19 + 123) = 0;
        *((_QWORD*)v19 + 124) = 0;
        *((_QWORD*)v19 + 125) = 0;
        *((_QWORD*)v19 + 126) = 0;
        *((_QWORD*)v19 + 127) = 0;
        *((_QWORD*)v19 + 128) = 0;
        *((_QWORD*)v19 + 129) = 0;
        *((_QWORD*)v19 + 130) = 0;
        *((_QWORD*)v19 + 131) = 0;
        *((_QWORD*)v19 + 132) = 0;
        *((_QWORD*)v19 + 125) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 128) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 133) = 0;
        *((_QWORD*)v19 + 134) = 0;
        *((_QWORD*)v19 + 135) = 0;
        *((_QWORD*)v19 + 136) = 0;
        *((_QWORD*)v19 + 137) = 0;
        *((_QWORD*)v19 + 138) = 0;
        *((_QWORD*)v19 + 139) = 0;
        *((_QWORD*)v19 + 140) = 0;
        *((_QWORD*)v19 + 141) = 0;
        *((_QWORD*)v19 + 142) = 0;
        *((_QWORD*)v19 + 143) = 0;
        *((_QWORD*)v19 + 144) = 0;
        *((_QWORD*)v19 + 145) = 0;
        *((_QWORD*)v19 + 146) = 0;
        *((_QWORD*)v19 + 147) = 0;
        *((_QWORD*)v19 + 148) = 0;
        *((_QWORD*)v19 + 149) = 0;
        *((_QWORD*)v19 + 150) = 0;
        *((_QWORD*)v19 + 151) = 0;
        *((_QWORD*)v19 + 144) = snd_fnd_Vec3_vtable;
        *((_QWORD*)v19 + 147) = snd_fnd_Vec3_vtable;
        v19 += 1216;
      } while (v19 != v21);
    }
    v22 = (char*)(v11 + 152 * v10);
    v23 = *result;
    v24 = result[1];
    v25 = (char*)(v17 + *result - v24);
    if (v24 != *result) {
      v26 = (__int64)*result;
      v27 = (char*)(v17 + *result - v24);
      do {
        *(float*)&a3 = GameRoutine_f8bc0((__int64)v27, v26);
        v26 += 152;
        v27 += 152;
      } while ((char*)v26 != v24);
      do {
        v28 = *((_QWORD*)v23 + 6);
        if (v28 != 0) {
          *((_QWORD*)v23 + 7) = v28;
          (*(void (**)(__int64, long double))(*(_QWORD*)*v8 + 24LL))(*v8, a3);
        }
        if (*(_QWORD*)v23 != 0) {
          *((_QWORD*)v23 + 1) = *(_QWORD*)v23;
          (*(void (**)(__int64, long double))(*(_QWORD*)*v8 + 24LL))(*v8, a3);
        }
        v23 += 152;
      } while (v23 != v24);
      v23 = *result;
    }
    *result = v25;
    result[1] = v21;
    result[2] = v22;
    if (v23 != nullptr) {
      (*(void (**)(__int64, char*, long double))(*(_QWORD*)*v8 + 24LL))(
          *v8, v23, a3);
    }
  }
}

#pragma GCC visibility pop
