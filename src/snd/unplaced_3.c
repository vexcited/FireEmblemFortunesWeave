#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void snd_BGM_getFirstHandle(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void wld_map_c21180(PSEUDO_X8, __int64, unsigned int,
                                               __int64, __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* snd_data_getAnimeSoundData(int);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_190200(__int64, char*);
__int64 GameRoutine_190240(__int64);
__int64 GameRoutine_1905a40(__int64*, __int64, unsigned __int64);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 snd_BGM_getFirstName(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_a290c0(__int64 result, const char*, __int64, int, char, float);
__int64 snd_data_getAnimeSoundDataCount();
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_getDefineInt(unsigned __int8*);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
bool snd_Voice_hasFeature(__int64, unsigned int);
bool snd_Voice_hasSends(__int64);
extern _UNKNOWN* GameData_212ea90;
extern __int64 (*snd_Archive_vtable[])();
extern __int64* snd_g_memory_ptr[2];
extern __int64 GameData_212c638;
extern __int64 GameData_21c6978;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gmap_GmapClock_instance_;
extern char GameData_1a9f09e;
extern int* GameData_212ea88;
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
int strcmp(const char*, const char*);
unsigned __int64* GameRoutine_1905100(unsigned __int64* result);
unsigned __int64 GameRoutine_190020(__int64*, const char*);
unsigned __int64 strlen(const char*);
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void __attribute__((noreturn)) GameRoutine_1905ae0();
void __attribute__((noreturn)) snd_a36650();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 snd_104020(__int64 result, __int64 a2);
void snd_a30190(__int64 a1, __int64 a2, __int64 a3);
void snd_1905280(unsigned __int64* a1);

__int64 snd_104020(__int64 result, __int64 a2)
{
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 40) = 0;
  *(_QWORD*)result = snd_Archive_vtable;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

void snd_a30190(__int64 a1, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v13;
  const char* v14;
  int v15;
  int v16;
  int v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  const char* v23;
  const char* v24;
  __int64 v25;
  _BYTE* v26;
  const char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  __int64 v34;
  float v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD v41[25];
  struct {
    __int64 v42;
    __int64 v43;
    const char* v44;
  } v42_;

  if (*(int*)(a1 + 640) <= 0 && (signed __int32)*(_DWORD*)(a1 + 620) <= 0 &&
      (signed __int32)*(_DWORD*)(a1 + 648) <= 0) {
    if ((*(_BYTE*)(a1 + 3080) & 1) != 0) {
      fw_text_String_CopyTerminated(&v42_.v42, *(_QWORD*)(a1 + 3096),
                                    *(_QWORD*)(a1 + 3088));
    }
    else {
      v13 = *(_QWORD*)(a1 + 3088);
      v14 = *(const char**)(a1 + 3096);
      v42_.v42 = *(_QWORD*)(a1 + 3080);
      v42_.v43 = v13;
      v42_.v44 = v14;
    }
    if (game_gmap_GmapClock_instance_ != 0) {
      v15 = *(__int16*)(game_gmap_GmapClock_instance_ + 14);
    }
    else {
      v15 = 0;
    }
    v16 = snd_getDefineInt("SetTime_BGM_Night");
    if (v15 <= 23 && v15 >= v16 ||
        (v17 = snd_getDefineInt("SetTime_BGM_Day"), (v15 & 0x80000000) == 0) &&
            v15 < v17) {
      v18 = (__int64*)(a1 + 3104);
      v19 = *(_BYTE*)(a1 + 3104) >> 1;
      if ((*(_BYTE*)(a1 + 3104) & 1) != 0) {
        v19 = *(_QWORD*)(a1 + 3112);
      }
      if (&v42_.v42 != v18 && v19 != 0) {
        if ((v42_.v42 & 1) != 0) {
          if ((*(_BYTE*)(a1 + 3104) & 1) != 0) {
            v21 = *(_QWORD*)(a1 + 3120);
          }
          else {
            v21 = a1 + 3105;
          }
          SpineModel_64dde0(&v42_.v42, v21, v19);
        }
        else if ((*(_BYTE*)(a1 + 3104) & 1) != 0) {
          GameRoutine_64df20(&v42_.v42, *(_QWORD*)(a1 + 3120),
                             *(_QWORD*)(a1 + 3112));
        }
        else {
          v20 = *(_QWORD*)(a1 + 3112);
          v42_.v42 = *v18;
          v42_.v43 = v20;
          v42_.v44 = *(const char**)(a1 + 3120);
        }
      }
    }
    if ((v42_.v42 & 1) != 0) {
      v22 = v42_.v43;
    }
    else {
      v22 = (unsigned __int8)v42_.v42 >> 1;
    }
    if (v22 != 0) {
      v23 = (const char*)snd_BGM_getFirstName(*(_QWORD*)(a1 + 8));
      if (v23 != nullptr) {
        v24 = (v42_.v42 & 1) != 0 ? v42_.v44 : (char*)&v42_.v42 + 1;
        if (strcmp(v23, v24) != 0) {
          snd_BGM_getFirstHandle((void*)((__int64)v41), *(_QWORD*)(a1 + 8));
          v25 = snd_fnd_WeakHandle_get((__int64)v41);
          if (v25 != 0 && !snd_Voice_hasSends(v25 - 5592)) {
            (*(void (**)(_QWORD, __int64, _QWORD))(
                **(_QWORD**)(a1 + 8) + 48LL))(*(_QWORD*)(a1 + 8), a2, 0);
          }
          if ((*(_BYTE*)(a1 + 2824) & 1) != 0) {
            v26 = *(_BYTE**)(a1 + 2840);
            *(_QWORD*)(a1 + 2832) = 0;
          }
          else {
            v26 = (_BYTE*)(a1 + 2825);
            *(_BYTE*)(a1 + 2824) = 0;
          }
          *v26 = 0;
          if ((v42_.v42 & 1) != 0) {
            v27 = v42_.v44;
          }
          else {
            v27 = (char*)&v42_.v42 + 1;
          }
          snd_a290c0(a1, v27, a3, 0, 0, 0x0.0p+0f);
          v28 = *(_QWORD*)(a1 + 8);
          *(_DWORD*)(a1 + 3020) = 0;
          snd_BGM_getFirstHandle((void*)((__int64)v41), v28);
          v29 = snd_fnd_WeakHandle_get((__int64)v41);
          if (v29 != 0) {
            v30 = v29;
            if (snd_Voice_hasFeature(v29 - 5592, 0xEu) &&
                *(_BYTE*)(v30 + 297) == 1) {
              v31 = *(float*)(*(_QWORD*)(a1 + 8) + 32LL);
              v32 = v31;
              v33 = v31;
              if (GameData_21c6978 != 0) {
                v34 = *(_QWORD*)(a1 + 32);
                v35 = 0x0.0p+0f;
                v36 = *(_DWORD*)(v34 + 376);
                v33 = 0x0.0p+0f;
                if ((v36 & 0x80000000) == 0) {
                  if (v36 != 0) {
                    v35 = *(float*)(*(_QWORD*)(a1 + 8) + 32LL);
                    v33 = v35;
                    if (v36 == 1) {
                      v35 = 0x0.0p+0f;
                      v33 = *(float*)(v34 + 384);
                    }
                  }
                  else {
                    v35 = *(float*)(v34 + 384);
                  }
                }
                if (*(_DWORD*)(a1 + 2808) == 1) {
                  v32 = 0x0.0p+0f;
                }
                else {
                  v32 = v35;
                }
              }
              (*(__attribute__((swiftcall)) void (**)(
                  PSEUDO_X8, __int64, _QWORD))(*(_QWORD*)(v30 - 5592) + 440LL))(
                  (void*)(v41), v30 - 5592, 0);
              v37 = snd_fnd_WeakHandle_get((__int64)v41);
              (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                      __int64))(
                  *(_QWORD*)(v30 - 5592) + 440LL))((void*)(v41), v30 - 5592, 1);
              v38 = snd_fnd_WeakHandle_get((__int64)v41);
              (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                      __int64))(
                  *(_QWORD*)(v30 - 5592) + 440LL))((void*)(v41), v30 - 5592, 2);
              v39 = snd_fnd_WeakHandle_get((__int64)v41);
              if (v37 != 0) {
                snd_Fade_Fade_10c830((__int64)v41, 0x0.0p+0f);
                (*(void (**)(__int64, _QWORD*, float))(
                    *(_QWORD*)(v37 - 5552) + 96LL))(v37 - 5552, v41, v31);
                snd_Fade_Destroy_Fade(v41);
                if (v31 == 0x0.0p+0f &&
                    (*(float (**)(__int64))(*(_QWORD*)(v37 - 5552) + 80LL))(
                        v37 - 5552) == 0x0.0p+0f) {
                  snd_Fade_Fade_10c830((__int64)v41, 0x0.0p+0f);
                  (*(void (**)(__int64, _QWORD*, float))(
                      *(_QWORD*)(v37 - 5552) + 112LL))(v37 - 5552, v41,
                                                       0x1.0000000000000p+0f);
                  snd_Fade_Destroy_Fade(v41);
                }
              }
              if (v38 != 0) {
                snd_Fade_Fade_10c830((__int64)v41, 0x0.0p+0f);
                (*(void (**)(__int64, _QWORD*, float))(
                    *(_QWORD*)(v38 - 5552) + 96LL))(v38 - 5552, v41, v32);
                snd_Fade_Destroy_Fade(v41);
                snd_Fade_Fade_10c830((__int64)v41, 0x0.0p+0f);
                (*(void (**)(__int64, __int64, _QWORD*, float))(
                    *(_QWORD*)(v30 - 5592) + 424LL))(v30 - 5592, 1, v41,
                                                     0x1.0000000000000p+0f);
                snd_Fade_Destroy_Fade(v41);
                if (v32 == 0x0.0p+0f) {
                  snd_Fade_Fade_10c830((__int64)v41, 0x0.0p+0f);
                  (*(void (**)(__int64, _QWORD*, float))(
                      *(_QWORD*)(v38 - 5552) + 112LL))(v38 - 5552, v41,
                                                       0x1.0000000000000p+0f);
                  snd_Fade_Destroy_Fade(v41);
                }
              }
              if (v39 != 0) {
                snd_Fade_Fade_10c830((__int64)v41, 0x0.0p+0f);
                (*(void (**)(__int64, _QWORD*, float))(
                    *(_QWORD*)(v39 - 5552) + 96LL))(v39 - 5552, v41, v33);
                snd_Fade_Destroy_Fade(v41);
                snd_Fade_Fade_10c830((__int64)v41, 0x0.0p+0f);
                (*(void (**)(__int64, __int64, _QWORD*, float))(
                    *(_QWORD*)(v30 - 5592) + 424LL))(v30 - 5592, 2, v41,
                                                     0x1.0000000000000p+0f);
                snd_Fade_Destroy_Fade(v41);
                if (v33 == 0x0.0p+0f) {
                  snd_Fade_Fade_10c830((__int64)v41, 0x0.0p+0f);
                  (*(void (**)(__int64, _QWORD*, float))(
                      *(_QWORD*)(v39 - 5552) + 112LL))(v39 - 5552, v41,
                                                       0x1.0000000000000p+0f);
                  snd_Fade_Destroy_Fade(v41);
                }
              }
            }
          }
        }
      }
    }
    if ((v42_.v42 & 1) != 0 && v42_.v44 != nullptr) {
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, (__int64)v42_.v44);
    }
  }
}

void snd_1905280(unsigned __int64* a1)
{

#pragma clang fp contract(off)
  int v1;
  __int64* v2;
  int v3;
  atomic_uchar* v4;
  int* v5;
  __int64* v6;
  char* v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  _QWORD* v15;
  unsigned __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  float v24;
  int v25;
  __int64 v26;
  __int64 v27;
  float* v28;
  unsigned __int8* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64* v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64* v42;
  float v43;
  __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  int v54;
  int v55;
  unsigned __int64* v56;
  _QWORD* v57;
  struct {
    __int64 v59[2];
    __int64* v60;
    __int64 v61;
    unsigned int v62;
    char gap92_[4];
    __int64* v63;
    __int64* v64;
    float v65;
  } v59_;
  struct {
    __int64 v66;
    int v67;
  } v66_;
  struct {
    _QWORD* v68;
    _QWORD* v69;
  } v68_;
  struct {
    __int64 v70;
    __int64 v71;
    __int64* v72;
  } v70_;

  v56 = a1 + 2;
  a1[3] = a1[2];
  GameRoutine_1905100(a1 + 2);
  v1 = snd_data_getAnimeSoundDataCount();
  GameRoutine_190020(&v70_.v70, &GameData_1a9f09e);
  v2 = snd_g_memory_ptr[0];
  if (v1 >= 1) {
    v3 = 0;
    v4 = (atomic_uchar*)GameData_212ea90;
    v5 = GameData_212ea88;
    v54 = v1;
    while (1) {
      v6 = snd_data_getAnimeSoundData(v3);
      v7 = (char*)v6[1];
      if (v7 == nullptr) {
        goto LABEL_4;
      }
      v8 = v6;
      v9 = strlen((const char*)v6[1]);
      v10 = (unsigned __int8)v70_.v70 >> 1;
      if ((v70_.v70 & 1) != 0) {
        v10 = v70_.v71;
      }
      if (v9 != v10) {
        goto LABEL_14;
      }
      v11 = v9;
      if (v9 == -1) {
        snd_a36650();
      }
      v12 = (v70_.v70 & 1) != 0 ? v70_.v72 : (__int64*)((char*)&v70_.v70 + 1);
      if (memcmp((__int64)v12, (__int64)v7, v11) != 0) {
      LABEL_14:
        v55 = v3;
        GameRoutine_190200((__int64)&v70_.v70, v7);
        v13 = (v70_.v70 & 1) != 0 ? v70_.v72 : (__int64*)((char*)&v70_.v70 + 1);
        v14 = (v70_.v70 & 1) != 0
                  ? v70_.v71
                  : (unsigned __int64)(unsigned __int8)v70_.v70 >> 1;
        wld_map_c21180(
            (void*)((__int64*)&v68_.v68),
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                             32LL) -
                                  8LL) +
                       64LL),
            2u, (__int64)v13, v14);
        v15 = v68_.v68;
        v16 = a1;
        v57 = v68_.v69;
        if (v68_.v68 != v68_.v69) {
          break;
        }
        if (v68_.v68 != nullptr) {
          goto LABEL_57;
        }
      LABEL_3:
        v1 = v54;
        v3 = v55;
      }
    LABEL_4:
      if (++v3 == v1) {
        goto LABEL_60;
      }
    }
    do {
      v21 = *v15;
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          __cxa_guard_acquire((__int64)v4) != 0) {
        *v5 = wld_Crc32(0, "AnimCtrlModule", 0xEu);
        __cxa_guard_release((__int64)v4);
      }
      v22 = *(_QWORD*)(v21 + 512);
      v23 = v22;
      while (1) {
        v24 = -0x1.0000000000000p+0f;
        if (v23 == *(_QWORD*)(v21 + 504)) {
          break;
        }
        v25 = *(_DWORD*)(v23 - 16);
        v23 -= 16;
        v22 -= 16;
        if (v25 == *v5) {
          if (*(_QWORD*)(v21 + 512) != v22) {
            v26 = *(_QWORD*)(v22 + 8);
            if (v26 != 0) {
              v27 = **(_QWORD**)(v26 + 72);
              if (v27 != 0) {
                v28 = *(float**)(v27 + 16);
                if (v28 != nullptr && *v28 > 0x1.e000000000000p+4f) {
                  v24 = *v28;
                }
              }
            }
          }
          break;
        }
      }
      v59_.v61 = 0;
      v59_.v62 = 0;
      v66_.v66 = 0;
      v59_.v63 = nullptr;
      v59_.v64 = nullptr;
      v59_.v65 = 0x0.0p+0f;
      v66_.v67 = 0x2000;
      v59_.v61 = *v15;
      if ((v70_.v70 & 1) != 0) {
        GameRoutine_1905a40(v59_.v59, (__int64)v70_.v72, v70_.v71);
      }
      else {
        v59_.v59[0] = v70_.v70;
        v59_.v59[1] = v70_.v71;
        v59_.v60 = v70_.v72;
      }
      v29 = (unsigned __int8*)GameRoutine_190240((__int64)v59_.v59);
      v59_.v62 = (unsigned int)snd_fnd_calcCrc32(v29, 0);
      if ((v59_.v59[0] & 1) != 0) {
        (*(void (**)(__int64, __int64*))(*(_QWORD*)*v2 + 24LL))(*v2, v59_.v60);
      }
      v31 = v16[3];
      v30 = v16[4];
      v59_.v65 = v24;
      v59_.v63 = v8;
      v59_.v64 = v8;
      if (v31 < v30) {
        v17 = v59_.v61;
        *(_QWORD*)(v31 + 40) = 0;
        *(_DWORD*)(v31 + 48) = 0x2000;
        *(_QWORD*)v31 = v17;
        *(_DWORD*)(v31 + 8) = v59_.v62;
        v18 = v59_.v63;
        v19 = v59_.v64;
        *(float*)(v31 + 32) = v59_.v65;
        *(_QWORD*)(v31 + 16) = v18;
        *(_QWORD*)(v31 + 24) = v19;
        GameRoutine_112180(v31 + 40, (__int64)&v66_.v66);
        v20 = v31 + 56;
      }
      else {
        v32 = v8;
        v33 = v31 - *v56;
        v34 = 0x6DB6DB6DB6DB6DB7LL * (v33 >> 3) + 1;
        if (v34 > 0x492492492492492LL) {
          GameRoutine_1905ae0();
        }
        v35 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v30 - *v56) >> 3);
        if (2 * v35 > v34) {
          v34 = 2 * v35;
        }
        if (v35 >= 0x249249249249249LL) {
          v36 = 0x492492492492492LL;
        }
        else {
          v36 = v34;
        }
        v37 = 56 * v36;
        v38 = (*(__int64 (**)(__int64, __int64, __int64))(
            *(_QWORD*)*v2 + 16LL))(*v2, 56 * v36, 32);
        v39 = v38 + v33;
        v40 = v38;
        *(_QWORD*)v39 = v59_.v61;
        *(_DWORD*)(v39 + 8) = v59_.v62;
        v42 = v59_.v63;
        v41 = v59_.v64;
        v43 = v59_.v65;
        *(_DWORD*)(v39 + 48) = 0x2000;
        *(_QWORD*)(v39 + 40) = 0;
        *(float*)(v39 + 32) = v43;
        *(_QWORD*)(v39 + 16) = v42;
        *(_QWORD*)(v39 + 24) = v41;
        GameRoutine_112180(v39 + 40, (__int64)&v66_.v66);
        v46 = v16 + 2;
        v45 = v16[2];
        v44 = v46[1];
        v47 = v39 + v45 - v44;
        if (v44 != v45) {
          v48 = v39 + v45 - v44;
          do {
            *(_QWORD*)v48 = *(_QWORD*)v45;
            *(_DWORD*)(v48 + 8) = *(_DWORD*)(v45 + 8);
            v49 = *(_QWORD*)(v45 + 16);
            v50 = *(_QWORD*)(v45 + 24);
            v51 = *(_DWORD*)(v45 + 32);
            *(_QWORD*)(v48 + 40) = 0;
            v52 = v48 + 40;
            *(_DWORD*)(v52 + 8) = 0x2000;
            *(_DWORD*)(v52 - 8) = v51;
            *(_QWORD*)(v52 - 24) = v49;
            *(_QWORD*)(v52 - 16) = v50;
            GameRoutine_112180(v52, v45 + 40);
            v45 += 56LL;
            v48 = v52 + 16;
          } while (v45 != v44);
          v45 = *v56;
        }
        v20 = v39 + 56;
        v8 = v32;
        a1[2] = v47;
        a1[3] = v20;
        a1[4] = v40 + v37;
        v2 = snd_g_memory_ptr[0];
        if (v45 != 0) {
          (*(void (**)(_QWORD, unsigned __int64))(
              **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0],
                                                       v45);
        }
        v4 = (atomic_uchar*)GameData_212ea90;
        v16 = a1;
        v5 = GameData_212ea88;
      }
      ++v15;
      v16[3] = v20;
    } while (v15 != v57);
    v15 = v68_.v68;
    if (v68_.v68 == nullptr) {
      goto LABEL_3;
    }
  LABEL_57:
    v68_.v69 = v15;
    v53 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v53,
                                  (__int64)v15);
    goto LABEL_3;
  }
LABEL_60:
  if ((v70_.v70 & 1) != 0) {
    (*(void (**)(__int64, __int64*))(*(_QWORD*)*v2 + 24LL))(*v2, v70_.v72);
  }
}

#pragma GCC visibility pop
