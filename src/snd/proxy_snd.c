#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_179780(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1798b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a1efd0(__int16*);
__int64 GameRoutine_a1efe0(_QWORD);
__int64 GameRoutine_a3a490(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Voice_setLabel(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_set(_QWORD);
extern _UNKNOWN* GameData_212e270;
extern __int16 GameData_21fa828;
extern __int16 GameData_21fa878;
extern __int16 GameData_21fa8c8;
extern __int64 GameData_212e2c0[4];
extern __int64 GameData_212e2c8[3];
extern __int64 GameData_21fa810;
extern __int64 GameData_21fa818;
extern __int64 GameData_21fa860;
extern __int64 GameData_21fa868;
extern __int64 GameData_21fa8b0;
extern __int64 GameData_21fa8b8;
extern __int64* GameData_212e268;
extern int GameData_21fa820;
extern int GameData_21fa870;
extern int GameData_21fa8c0;
extern int GameData_226b690;
__int64 ProxySnd_Unknown52(__int64 a1, __int64 a2, _BYTE* a3);
_QWORD* ProxySnd_Unknown64_alt1(__int64 a1, __int64 a2, __int64 a3,
                                unsigned int a4) __asm__("ProxySnd_Unknown64");
__int64 ProxySnd_Unknown65_alt1(__int64 a1, __int64 a2, __int64 a3,
                                unsigned int a4) __asm__("ProxySnd_Unknown65");
__int64 ProxySnd_Unknown66(__int64 a1, void (***a2)(_QWORD));
__int64 ProxySnd_a1e400(__int64 a1);
__int64 ProxySnd_Unknown69_alt1(__int64 a1, __int64 a2,
                                unsigned int a3) __asm__("ProxySnd_Unknown69");
__int64 ProxySnd_Unknown70(__int64 a1, void (***a2)(_QWORD));
__attribute__((swiftcall)) void snd_BGM_getFirstHandle(PSEUDO_X8, __int64);
__int64 Archive_106500(__int64, const char*, unsigned __int8*);
__int64 GameRoutine_118fd0(_QWORD);
__int64 GameRoutine_18d7c60(void);
__int64 GameRoutine_190240(__int64);
__int64 GameRoutine_2b0();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_InitializeMutex(_QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_Fade_Fade_10cc10(__int64, __int64);
__int64 snd_Voice_finish(_BYTE*);
__int64 snd_Voice_getBufferLabel(_QWORD);
__int64 snd_Voice_setArchiveName(__int64);
__int64 snd_Voice_setLabel_alt1(__int64) __asm__("snd_Voice_setLabel");
__int64 snd_data_findFadeData(_DWORD*);
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64 strlen(_QWORD);
bool snd_Voice_hasFeature(__int64, unsigned int);
bool snd_hasSound(unsigned __int8*);
double snd_getDefineValue(unsigned __int8*);
extern __int64 (*GameData_1fbd9e8[])();
extern __int64 (*GameData_1fbda18[])();
extern __int64 (*GameData_1fbda48[])();
extern __int64 (*GameData_1fbda78[])();
extern __int64 (*GameData_1fbdaa8[])();
extern __int64 (*GameData_1fbdad8[])();
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64* snd_g_memory_ptr[2];
extern __int64* snd_s_target_ptr;
extern __int64 GameData_21fa618;
extern __int64 GameData_21fa7f0;
extern __int64 GameData_21fa800;
extern __int64 GameData_21fa808;
extern __int64 GameData_21fa82c;
extern __int64 GameData_21fa838;
extern __int64 GameData_21fa850;
extern __int64 GameData_21fa858;
extern __int64 GameData_21fa87c;
extern __int64 GameData_21fa888;
extern __int64 GameData_21fa8a0;
extern __int64 GameData_21fa8a8;
extern __int64 GameData_21fa8cc;
extern __int64 GameData_21fa8d8;
extern __int64 GameData_21fa8f0;
extern __int64 GameData_21fa8f8;
extern __int64 GameData_2265eb0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_sound_g_game_sound;
extern __int64 snd_g_fileIndex;
extern char GameData_21fa848;
extern char GameData_21fa898;
extern char GameData_21fa8e8;
extern int GameData_21fa7f8;
extern int GameData_21fa840;
extern int GameData_21fa890;
extern int GameData_21fa8e0;
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void __attribute__((noreturn)) String_60a1d0();
void snd_Fade_Fade_10c830(__int64, float);
__attribute__((swiftcall)) void
ProxySnd_Unknown23(PSEUDO_X8 x8_, __int64 unused_int0, __int64* a1);
__int64 ProxySnd_Unknown53(__int64 a1, _QWORD* a2, _BYTE* a3);
__int64 ProxySnd_Unknown54(__int64 a1, _QWORD* a2);
__attribute__((swiftcall)) void
ProxySnd_Unknown60_alt1(PSEUDO_X8 x8_, __int64 unused_int0,
                        __int64 a1) __asm__("ProxySnd_Unknown60");
__int64 ProxySnd_Unknown61();
__int64 ProxySnd_Unknown62();
__int64 ProxySnd_a1f040();
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 snd_fnd_WeakHandle_set_alt1(__int64,
                                    __int64) __asm__("snd_fnd_WeakHandle_set");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void
ProxySnd_Unknown60(PSEUDO_X8 x8_, __int64 unused_int0, const char* a1);
__int64 snd_Voice_setLabel_alt2(__int64, char*) __asm__("snd_Voice_setLabel");
__int64* GameHr_a1efe0();
__int64 GameRoutine_a1efd0_alt1(__int64) __asm__("GameRoutine_a1efd0");
__int64 ProxySnd_179780(__int64, __int64, __int64, int);
__int64 ProxySnd_1798b0(__int64, __int64, __int64, int);
__int64 ProxySnd_a3a490(__int64, __int64, int);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_diag_detail_AbortImpl_1a0a590_alt1() __asm__(
    "nn_diag_detail_AbortImpl_1a0a590");
_QWORD* ProxySnd_Unknown64(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 ProxySnd_Unknown65(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 ProxySnd_Unknown69(__int64 a1, __int64 a2, int a3);
__int64 snd_isLoaded(unsigned __int8*);
__int64 strstr(const char*, const char*);
__int64 ProxySnd_Unknown55(__int64 a1, _QWORD* a2);
__attribute__((swiftcall)) void

ProxySnd_Unknown23(PSEUDO_X8 x8_, __int64 unused_int0, __int64* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = *(_QWORD*)(snd_g_fileIndex + 4752);
  if (result != 0) {
    GameRoutine_18d7c60();
    return;
  }
  v3 = *a1;
  v4 = a1[1];
  *a1 = 0;
  a1[1] = 0;
  *a2 = v3;
  a2[1] = v4;
  v5 = a1[2];
  a1[2] = 0;
  a2[2] = v5;
  {
    result;
    return;
  }
}

__int64 ProxySnd_Unknown52(__int64 a1, __int64 a2, _BYTE* a3)
{
  int v5;
  char v7;
  char v8;
  unsigned __int8* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  struct {
    __int16 v13;
    char v14;
    char v15;
    char v16;
  } v13_;

  if (*a3 != 86 || a3[1] != 95) {
    return 0;
  }
  v5 = (unsigned __int8)a3[2];
  if (v5 == 69) {
    if (a3[3] != 78) {
      goto LABEL_11;
    }
  }
  else if (v5 != 74 || a3[3] != 80) {
    goto LABEL_11;
  }
  if (a3[4] == 95) {
    return 1;
  }
LABEL_11:
  v13_.v13 = 24406;
  if (GameData_226b690 != 0) {
    v7 = 69;
  }
  else {
    v7 = 74;
  }
  if (GameData_226b690 != 0) {
    v8 = 78;
  }
  else {
    v8 = 80;
  }
  v13_.v14 = v7;
  v13_.v15 = v8;
  v13_.v16 = 95;
  if (v5 != 0) {
    v9 = a3 + 3;
    v10 = 5;
    do {
      *((_BYTE*)&v13_.v13 + v10) = v5;
      v11 = *v9++;
      LOBYTE(v5) = v11;
      ++v10;
    } while (v11 != 0);
    v12 = (unsigned int)v10;
  }
  else {
    v12 = 5;
  }
  *((_BYTE*)&v13_.v13 + v12) = 0;
  snd_Voice_setLabel_alt2(a2, (char*)&v13_.v13);
  return 1;
}

__int64 ProxySnd_Unknown53(__int64 a1, _QWORD* a2, _BYTE* a3)
{

#pragma clang fp contract(off)
  unsigned __int8* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int16* v12;
  int v13;
  int v14;
  __int64 v16;
  unsigned __int16* v17;
  int v18;
  int v19;
  bool v21;
  __int64 v22;
  unsigned __int16* v23;
  int v24;
  int v25;
  int v27;
  __int64 result;
  __int64 v29;
  __int64 v30;
  float v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  char v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  int v48;
  _BOOL4 v49;
  _BOOL4 v50;
  unsigned __int8* v51;
  __int64* v52;
  double v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  struct {
    _QWORD v57[2];
    __int64* v58;
  } v57_;
  struct {
    __int64 v59;
    __int64 v60;
    __int64* v61;
  } v59_;
  struct {
    __int64 v62;
    __int64 v63;
    unsigned __int16* v64;
  } v62_;
  struct {
    _QWORD v65[2];
    unsigned __int16* v66;
  } v65_;

  v6 = (unsigned __int8*)snd_Voice_getBufferLabel(a2);
  v7 = snd_fnd_WeakHandle_get_alt1((__int64)(a2 + 733));
  v8 = v7;
  if (v7 != 0) {
    v9 = snd_fnd_WeakHandle_get_alt1(v7 + 272);
    if (v9 != 0) {
      v10 = v9 - 5592;
    }
    else {
      v10 = 0;
    }
  }
  else {
    v10 = 0;
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*a2 + 32LL))(
      (void*)(&v59_.v59), a2);
  v11 = v59_.v60;
  if ((v59_.v59 & 1) == 0) {
    v11 = (unsigned __int8)v59_.v59 >> 1;
  }
  if (v11 == 3) {
    v12 = (v59_.v59 & 1) != 0 ? (unsigned __int16*)v59_.v61
                              : (unsigned __int16*)((char*)&v59_.v59 + 1);
    v13 = *v12;
    v14 = *((unsigned __int8*)v12 + 2);
    if (v13 == 18242 && v14 == 77) {
      v21 = true;
      goto LABEL_52;
    }
  }
  if (v8 != 0) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)(v8 - 5592) + 32LL))((void*)(v65_.v65), v8 - 5592);
    v16 = v65_.v65[1];
    if ((v65_.v65[0] & 1) == 0) {
      v16 = LOBYTE(v65_.v65[0]) >> 1;
    }
    if (v16 == 3) {
      v17 = v65_.v66;
      if ((v65_.v65[0] & 1) == 0) {
        v17 = (unsigned __int16*)((char*)v65_.v65 + 1);
      }
      v18 = *v17;
      v19 = *((unsigned __int8*)v17 + 2);
      if (v18 == 18242 && v19 == 77) {
        v21 = true;
        if ((v65_.v65[0] & 1) == 0) {
          goto LABEL_52;
        }
        goto LABEL_51;
      }
    }
    if (v10 == 0) {
      v21 = false;
      if ((v65_.v65[0] & 1) == 0) {
        goto LABEL_52;
      }
    LABEL_51:
      (*(void (**)(_QWORD, unsigned __int16*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                               24LL))(*snd_g_memory_ptr[0],
                                                      v65_.v66);
      goto LABEL_52;
    }
  }
  else if (v10 == 0) {
    v21 = false;
    goto LABEL_52;
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)v10 + 32LL))((void*)(&v62_.v62), v10);
  v22 = v62_.v63;
  if ((v62_.v62 & 1) == 0) {
    v22 = (unsigned __int8)v62_.v62 >> 1;
  }
  if (v22 != 3) {
    v21 = false;
    if ((v62_.v62 & 1) == 0) {
      goto LABEL_45;
    }
  LABEL_44:
    (*(void (**)(_QWORD, unsigned __int16*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                             24LL))(*snd_g_memory_ptr[0],
                                                    v62_.v64);
    goto LABEL_45;
  }
  v23 = v62_.v64;
  if ((v62_.v62 & 1) == 0) {
    v23 = (unsigned __int16*)((char*)&v62_.v62 + 1);
  }
  v24 = *v23;
  v25 = *((unsigned __int8*)v23 + 2);
  v21 = v24 == 18242 && v25 == 77;
  if ((v62_.v62 & 1) != 0) {
    goto LABEL_44;
  }
LABEL_45:
  if (v8 != 0 && (v65_.v65[0] & 1) != 0) {
    goto LABEL_51;
  }
LABEL_52:
  if ((v59_.v59 & 1) != 0) {
    (*(void (**)(_QWORD, __int64*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v59_.v61);
  }
  if (v21) {
    return 0;
  }
  v27 = *v6;
  if (v27 != 70) {
    if (v27 == 66 && v6[1] == 71 && v6[2] == 77 && v6[3] == 95) {
      return 0;
    }
  LABEL_66:
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*a2 + 32LL))(
        (void*)(&v59_.v59), a2);
    v32 = v59_.v60;
    if ((v59_.v59 & 1) == 0) {
      v32 = (unsigned __int8)v59_.v59 >> 1;
    }
    if (v32 == 15 &&
        ((v59_.v59 & 1) == 0 ? (v33 = (__int64*)((char*)&v59_.v59 + 1))
                             : (v33 = v59_.v61),
         (v34 = *v33, v35 = *(__int64*)((char*)v33 + 7),
          v34 == 0x5F6C6C617265766FLL)
             ? (v36 = v35 == 0x746E6569626D615FLL)
             : (v36 = false),
         v36)) {
      LOBYTE(v10) = 1;
    }
    else {
      if (v8 == 0) {
        if (v10 == 0) {
          goto LABEL_110;
        }
        goto LABEL_89;
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v8 - 5592) + 32LL))((void*)(&v62_.v62), v8 - 5592);
      v37 = v62_.v62;
      v38 = v62_.v63;
      if ((v62_.v62 & 1) == 0) {
        v38 = (unsigned __int8)v62_.v62 >> 1;
      }
      if (v38 != 15) {
        goto LABEL_86;
      }
      v39 = (__int64*)v62_.v64;
      if ((v62_.v62 & 1) == 0) {
        v39 = (__int64*)((char*)&v62_.v62 + 1);
      }
      v40 = *v39;
      v41 = *(__int64*)((char*)v39 + 7);
      if (v40 != 0x5F6C6C617265766FLL || v41 != 0x746E6569626D615FLL) {
      LABEL_86:
        if (v10 == 0) {
          goto LABEL_106;
        }
      LABEL_89:
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)v10 + 32LL))((void*)(v57_.v57), v10);
        v43 = v57_.v57[1];
        if ((v57_.v57[0] & 1) == 0) {
          v43 = LOBYTE(v57_.v57[0]) >> 1;
        }
        if (v43 == 15) {
          v44 = v57_.v58;
          if ((v57_.v57[0] & 1) == 0) {
            v44 = (_QWORD*)((char*)v57_.v57 + 1);
          }
          v45 = *v44;
          v46 = *(__int64*)((char*)v44 + 7);
          LOBYTE(v10) =
              v45 == 0x5F6C6C617265766FLL && v46 == 0x746E6569626D615FLL;
          if ((v57_.v57[0] & 1) == 0) {
            goto LABEL_104;
          }
        }
        else {
          LOBYTE(v10) = 0;
          if ((v57_.v57[0] & 1) == 0) {
          LABEL_104:
            if (v8 == 0) {
              goto LABEL_110;
            }
            v37 = v62_.v62;
          LABEL_106:
            if ((v37 & 1) == 0) {
              goto LABEL_110;
            }
            goto LABEL_107;
          }
        }
        (*(void (**)(_QWORD, __int64*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                        24LL))(*snd_g_memory_ptr[0], v57_.v58);
        goto LABEL_104;
      }
      LOBYTE(v10) = 1;
      if ((v62_.v62 & 1) != 0) {
      LABEL_107:
        (*(void (**)(_QWORD, unsigned __int16*))(
            **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0],
                                                     v62_.v64);
      }
    }
  LABEL_110:
    if ((v59_.v59 & 1) != 0) {
      (*(void (**)(_QWORD, __int64*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v59_.v61);
    }
    if ((v10 & 1) == 0) {
      if (game_sound_g_game_sound != 0) {
        if (*(_BYTE*)(game_sound_g_game_sound + 601) == 1 &&
            !snd_Voice_hasFeature((__int64)a2, 0x1Au)) {
          snd_Fade_Fade_10c830((__int64)&v59_.v59, 0x0.0p+0f);
          (*(void (**)(_QWORD*, __int64*, double))(a2[5] + 128LL))(
              a2 + 5, &v59_.v59, 0x0.0p+0);
          snd_Fade_Destroy_Fade(&v59_.v59);
          snd_Voice_finish(a2);
        }
        if (*(int*)(game_sound_g_game_sound + 604) >= 1 &&
            snd_fnd_WeakHandle_get_alt1((__int64)(a2 + 731)) != 0) {
          snd_Fade_Fade_10c830((__int64)&v59_.v59, 0x0.0p+0f);
          (*(void (**)(_QWORD*, __int64*, double))(a2[5] + 128LL))(
              a2 + 5, &v59_.v59, 0x0.0p+0);
          snd_Fade_Destroy_Fade(&v59_.v59);
          snd_Voice_finish(a2);
        }
      }
      if (*a3 == 86 && a3[1] == 95) {
        v48 = (unsigned __int8)a3[2];
        if (v48 == 80) {
          if (a3[3] == 84) {
            v50 = false;
            v49 = a3[4] == 86;
            goto LABEL_130;
          }
        }
        else if (v48 == 65) {
          v49 = false;
          v50 = a3[3] == 86;
          goto LABEL_130;
        }
        v50 = false;
        v49 = false;
      LABEL_130:
        (*(void (**)(_QWORD*, __int64))(*a2 + 632LL))(a2, 16);
        (*(void (**)(__int64, _QWORD*, _BYTE*))(*(_QWORD*)a1 + 416LL))(a1, a2,
                                                                       a3);
        v51 = (unsigned __int8*)GameRoutine_190240((__int64)(a2 + 710));
        v52 = snd_s_target_ptr;
        if ((*(unsigned int (**)(_QWORD, unsigned __int8*, _QWORD*, __int64*))(
                *(_QWORD*)*snd_s_target_ptr + 168LL))(
                *snd_s_target_ptr, v51, v57_.v57, &v59_.v59) == -1) {
          v54 = GameRoutine_118fd0(GameData_2265eb0);
          v55 = Archive_106500(v54, "sound", v51);
          if (v55 != 0) {
            v56 = v55;
            snd_Voice_setArchiveName((__int64)a2);
            snd_Voice_setLabel_alt1((__int64)a2);
            if (((*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v52 + 264LL))(
                     *v52, *(_QWORD*)(v56 + 8)) &
                 1) == 0) {
              snd_Voice_setArchiveName((__int64)a2);
              snd_Voice_setLabel_alt1((__int64)a2);
            }
          }
        }
        if (v50) {
          *(_DWORD*)(a2[706] + 412LL) = 0;
        }
        if (v49) {
          v53 = snd_getDefineValue("Voice_PTV_3D_Decay");
          *(float*)(a2[706] + 428LL) = *(float*)&v53 / 0x1.9000000000000p+6f;
        }
        return 1;
      }
    }
    return 0;
  }
  if (v6[1] != 70 || v6[2] != 95) {
    goto LABEL_66;
  }
  snd_BGM_getFirstHandle((void*)((__int64)&v59_.v59),
                         *(_QWORD*)(game_sound_g_game_sound + 8));
  result = snd_fnd_WeakHandle_get_alt1((__int64)&v59_.v59);
  if (result != 0) {
    v29 = result;
    LODWORD(v59_.v59) = (unsigned int)snd_fnd_calcCrc32(v6, 0);
    result = snd_data_findFadeData(&v59_.v59);
    if (result != 0) {
      v30 = result;
      v31 = (*(float (**)(__int64))(*(_QWORD*)(v29 - 5552) + 64LL))(v29 - 5552);
      snd_Fade_Fade_10cc10((__int64)&v59_.v59, v30);
      (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(v29 - 5552) + 72LL))(
          v29 - 5552, &v59_.v59, v31);
      snd_Fade_Destroy_Fade(&v59_.v59);
      return 0;
    }
  }
  return result;
}

__int64 ProxySnd_Unknown54(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  unsigned __int8* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int16* v9;
  int v10;
  int v11;
  bool v12;
  char v13;
  __int64 v14;
  unsigned __int16* v15;
  int v16;
  int v17;
  __int64 v19;
  unsigned __int16* v20;
  int v21;
  int v22;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  float v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  bool v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  bool v41;
  __int64 v42;
  struct {
    __int64 v44;
    __int64 v45;
    unsigned __int16* v46;
  } v44_;
  struct {
    _QWORD v47[2];
    unsigned __int16* v48;
  } v47_;
  struct {
    _QWORD v49[2];
    unsigned __int16* v50;
  } v49_;

  v3 = (unsigned __int8*)snd_Voice_getBufferLabel(a2);
  v4 = snd_fnd_WeakHandle_get_alt1((__int64)(a2 + 733));
  v5 = v4;
  if (v4 != 0) {
    v6 = snd_fnd_WeakHandle_get_alt1(v4 + 272);
    if (v6 != 0) {
      v7 = v6 - 5592;
    }
    else {
      v7 = 0;
    }
  }
  else {
    v7 = 0;
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*a2 + 32LL))(
      (void*)(&v44_.v44), a2);
  v8 = v44_.v45;
  if ((v44_.v44 & 1) == 0) {
    v8 = (unsigned __int8)v44_.v44 >> 1;
  }
  if (v8 == 3 &&
      ((v44_.v44 & 1) == 0 ? (v9 = (unsigned __int16*)((char*)&v44_.v44 + 1))
                           : (v9 = v44_.v46),
       (v10 = *v9, v11 = *((unsigned __int8*)v9 + 2), v10 == 18242)
           ? (v12 = v11 == 77)
           : (v12 = false),
       v12)) {
    LOBYTE(v7) = 1;
  }
  else {
    if (v5 == 0) {
      if (v7 == 0) {
        goto LABEL_50;
      }
      goto LABEL_29;
    }
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)(v5 - 5592) + 32LL))((void*)(v49_.v49), v5 - 5592);
    v13 = v49_.v49[0];
    v14 = v49_.v49[1];
    if ((v49_.v49[0] & 1) == 0) {
      v14 = LOBYTE(v49_.v49[0]) >> 1;
    }
    if (v14 != 3) {
      goto LABEL_26;
    }
    v15 = v49_.v50;
    if ((v49_.v49[0] & 1) == 0) {
      v15 = (unsigned __int16*)((char*)v49_.v49 + 1);
    }
    v16 = *v15;
    v17 = *((unsigned __int8*)v15 + 2);
    if (v16 != 18242 || v17 != 77) {
    LABEL_26:
      if (v7 == 0) {
        goto LABEL_46;
      }
    LABEL_29:
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)v7 + 32LL))((void*)(v47_.v47), v7);
      v19 = v47_.v47[1];
      if ((v47_.v47[0] & 1) == 0) {
        v19 = LOBYTE(v47_.v47[0]) >> 1;
      }
      if (v19 == 3) {
        v20 = v47_.v48;
        if ((v47_.v47[0] & 1) == 0) {
          v20 = (unsigned __int16*)((char*)v47_.v47 + 1);
        }
        v21 = *v20;
        v22 = *((unsigned __int8*)v20 + 2);
        LOBYTE(v7) = v21 == 18242 && v22 == 77;
        if ((v47_.v47[0] & 1) == 0) {
          goto LABEL_44;
        }
      }
      else {
        LOBYTE(v7) = 0;
        if ((v47_.v47[0] & 1) == 0) {
        LABEL_44:
          if (v5 == 0) {
            goto LABEL_50;
          }
          v13 = v49_.v49[0];
        LABEL_46:
          if ((v13 & 1) == 0) {
            goto LABEL_50;
          }
          goto LABEL_47;
        }
      }
      (*(void (**)(_QWORD, unsigned __int16*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                               24LL))(*snd_g_memory_ptr[0],
                                                      v47_.v48);
      goto LABEL_44;
    }
    LOBYTE(v7) = 1;
    if ((v49_.v49[0] & 1) != 0) {
    LABEL_47:
      (*(void (**)(_QWORD, unsigned __int16*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                               24LL))(*snd_g_memory_ptr[0],
                                                      v49_.v50);
    }
  }
LABEL_50:
  if ((v44_.v44 & 1) != 0) {
    (*(void (**)(_QWORD, unsigned __int16*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                             24LL))(*snd_g_memory_ptr[0],
                                                    v44_.v46);
  }
  if ((v7 & 1) == 0) {
    v24 = *v3;
    if (v24 != 70) {
      if (v24 == 66 && v3[1] == 71 && v3[2] == 77 && v3[3] == 95) {
        return 0;
      }
    LABEL_64:
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*a2 + 32LL))(
          (void*)(&v44_.v44), a2);
      v30 = v44_.v45;
      if ((v44_.v44 & 1) == 0) {
        v30 = (unsigned __int8)v44_.v44 >> 1;
      }
      if (v30 == 15) {
        v31 = (__int64*)v44_.v46;
        if ((v44_.v44 & 1) == 0) {
          v31 = (__int64*)((char*)&v44_.v44 + 1);
        }
        v32 = *v31;
        v33 = *(__int64*)((char*)v31 + 7);
        v35 = v32 == 0x5F6C6C617265766FLL && v33 == 0x746E6569626D615FLL;
        if ((v44_.v44 & 1) == 0) {
        LABEL_79:
          if (v35) {
            return 0;
          }
          if (v5 == 0) {
            goto LABEL_97;
          }
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
              *(_QWORD*)(v5 - 5592) + 32LL))((void*)(&v44_.v44), v5 - 5592);
          v36 = v44_.v45;
          if ((v44_.v44 & 1) == 0) {
            v36 = (unsigned __int8)v44_.v44 >> 1;
          }
          if (v36 == 15) {
            v37 = (__int64*)v44_.v46;
            if ((v44_.v44 & 1) == 0) {
              v37 = (__int64*)((char*)&v44_.v44 + 1);
            }
            v38 = *v37;
            v39 = *(__int64*)((char*)v37 + 7);
            v41 = v38 == 0x5F6C6C617265766FLL && v39 == 0x746E6569626D615FLL;
            if ((v44_.v44 & 1) == 0) {
            LABEL_96:
              if (v41) {
                return 0;
              }
            LABEL_97:
              v42 = game_sound_g_game_sound;
              if (game_sound_g_game_sound != 0) {
                if (*(_BYTE*)(game_sound_g_game_sound + 601) == 1) {
                  snd_Fade_Fade_10c830((__int64)&v44_.v44, 0x0.0p+0f);
                  (*(void (**)(_QWORD*, __int64*, double))(a2[5] + 128LL))(
                      a2 + 5, &v44_.v44, 0x0.0p+0);
                  snd_Fade_Destroy_Fade(&v44_.v44);
                  snd_Voice_finish(a2);
                  v42 = game_sound_g_game_sound;
                }
                if (*(int*)(v42 + 604) >= 1 &&
                    snd_fnd_WeakHandle_get_alt1((__int64)(a2 + 731)) != 0) {
                  snd_Fade_Fade_10c830((__int64)&v44_.v44, 0x0.0p+0f);
                  (*(void (**)(_QWORD*, __int64*, double))(a2[5] + 128LL))(
                      a2 + 5, &v44_.v44, 0x0.0p+0);
                  snd_Fade_Destroy_Fade(&v44_.v44);
                  snd_Voice_finish(a2);
                }
              }
              return 0;
            }
          }
          else {
            v41 = false;
            if ((v44_.v44 & 1) == 0) {
              goto LABEL_96;
            }
          }
          (*(void (**)(_QWORD, unsigned __int16*))(
              **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0],
                                                       v44_.v46);
          goto LABEL_96;
        }
      }
      else {
        v35 = false;
        if ((v44_.v44 & 1) == 0) {
          goto LABEL_79;
        }
      }
      (*(void (**)(_QWORD, unsigned __int16*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                               24LL))(*snd_g_memory_ptr[0],
                                                      v44_.v46);
      goto LABEL_79;
    }
    if (v3[1] != 70 || v3[2] != 95) {
      goto LABEL_64;
    }
    snd_BGM_getFirstHandle((void*)((__int64)&v44_.v44),
                           *(_QWORD*)(game_sound_g_game_sound + 8));
    v25 = snd_fnd_WeakHandle_get_alt1((__int64)&v44_.v44);
    if (v25 != 0) {
      v26 = v25;
      LODWORD(v44_.v44) = (unsigned int)snd_fnd_calcCrc32(v3, 0);
      v27 = snd_data_findFadeData(&v44_.v44);
      if (v27 != 0) {
        v28 = v27;
        v29 =
            (*(float (**)(__int64))(*(_QWORD*)(v26 - 5552) + 64LL))(v26 - 5552);
        snd_Fade_Fade_10cc10((__int64)&v44_.v44, v28);
        (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(v26 - 5552) + 72LL))(
            v26 - 5552, &v44_.v44, v29);
        snd_Fade_Destroy_Fade(&v44_.v44);
      }
    }
  }
  return 0;
}

__int64 ProxySnd_Unknown55(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 result;
  unsigned __int8* v4;
  _QWORD v5[25];

  result = ((__int64 (*)(__int64, unsigned int))snd_Voice_hasFeature)(
      (__int64)a2, 0xFu);
  if ((result & 1) != 0 && (*((_BYTE*)a2 + 5889) & 1) == 0 &&
      (*((_BYTE*)a2 + 5890) & 1) == 0 && a2[747] == 0) {
    result = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 8, 32);
    a2[747] = result;
    *(_QWORD*)result = 0;
  }
  if (game_sound_g_game_sound != 0 &&
      *(float*)(game_sound_g_game_sound + 592) > 0x1.f5c2900000000p-1f) {
    result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 664LL))(a2, 64);
    if ((result & 1) != 0) {
      if (game_sound_g_game_sound == 0) {
        result = (*(__int64 (**)(_QWORD*))(*a2 + 512LL))(a2);
        if ((result & 1) != 0) {
          return result;
        }
        goto LABEL_15;
      }
      v4 = (unsigned __int8*)snd_Voice_getBufferLabel(a2);
      result = snd_isLoaded(v4);
      if ((result & 1) == 0 &&
          (v4 == nullptr || (result = strstr((const char*)v4, "_lp")) == 0)) {
      LABEL_15:
        snd_Fade_Fade_10c830((__int64)v5, 0x0.0p+0f);
        (*(void (**)(_QWORD*, _QWORD*, double))(a2[5] + 128LL))(a2 + 5, v5,
                                                                0x0.0p+0);
        snd_Fade_Destroy_Fade(v5);
        return snd_Voice_finish(a2);
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void

ProxySnd_Unknown60(PSEUDO_X8 x8_, __int64 unused_int0, const char* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  __int64 v8;
  char v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  int v23;
  const char* v24;
  __int64 v25;
  unsigned __int8* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int8* v38;
  const char* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  struct {
    __int64 v47[2];
    const char* v48;
  } v47_;
  struct {
    __int64 v49;
    unsigned __int64 v50;
    __int64 v51;
  } v49_;
  struct {
    __int64 v52;
    unsigned __int64 v53;
    unsigned __int8* v54;
  } v52_;

  v3 = game_sound_g_game_sound_ptr[0];
  if (*game_sound_g_game_sound_ptr[0] == 0) {
    *(_WORD*)a2 = 0;
    return;
  }
  v5 = strlen_alt1(a1);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_93;
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (unsigned __int8*)fw_memory_HeapManager_Allocate(
        fw_memory_g_heap_manager, v8, 16, 0);
    v52_.v53 = v6;
    v52_.v54 = v7;
    v52_.v52 = v8 | 1;
    goto LABEL_11;
  }
  LOBYTE(v52_.v52) = 2 * v5;
  v7 = (unsigned __int8*)&v52_.v52 + 1;
  if (v5 != 0) {
  LABEL_11:
    memcpy_alt1((__int64)v7, (__int64)a1, v6);
  }
  v7[v6] = 0;
  v9 = v52_.v52;
  v10 = (__int64)v52_.v54;
  if ((v52_.v52 & 1) != 0) {
    v11 = v52_.v53;
  }
  else {
    v11 = (unsigned __int64)(unsigned __int8)v52_.v52 >> 1;
  }
  if ((v52_.v52 & 1) != 0) {
    v12 = v52_.v54;
  }
  else {
    v12 = (unsigned __int8*)&v52_.v52 + 1;
  }
  v13 = v11 + 1;
  if (v11 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_93;
  }
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v13 | 7) + 1;
    }
    v14 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v15,
                                                16, 0);
    v49_.v50 = v11 + 1;
    v49_.v51 = (__int64)v14;
    v49_.v49 = v15 | 1;
  }
  else {
    v49_.v50 = 0;
    v49_.v51 = 0;
    v49_.v49 = (unsigned __int8)(2 * v13);
    v14 = (char*)&v49_.v49 + 1;
    if (v11 == 0) {
      goto LABEL_27;
    }
  }
  memmove_alt1((__int64)v14, (__int64)v12, v11);
LABEL_27:
  *(_WORD*)&v14[v11] = 95;
  if ((v9 & 1) != 0 && v10 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v10);
  }
  v46 = a2;
  v52_.v52 = v49_.v49;
  v52_.v53 = v49_.v50;
  v52_.v54 = (unsigned __int8*)v49_.v51;
  v17 = (_QWORD*)*v3;
  if ((*(_BYTE*)(*v3 + 3136) & 1) != 0) {
    fw_text_String_CopyTerminated(v47_.v47, v17[394], v17[393]);
  }
  else {
    v18 = v17 + 392;
    v19 = *v18;
    v20 = v18[1];
    v21 = v18[2];
    v47_.v47[0] = v19;
    v47_.v47[1] = v20;
    v47_.v48 = (const char*)v21;
  }
  v22 = v52_.v52;
  v23 = v47_.v47[0] & 1;
  if ((v47_.v47[0] & 1) != 0) {
    v24 = v47_.v48;
  }
  else {
    v24 = (char*)v47_.v47 + 1;
  }
  v25 = (__int64)v52_.v54;
  if ((v52_.v52 & 1) != 0) {
    v26 = v52_.v54;
  }
  else {
    v26 = (unsigned __int8*)&v52_.v52 + 1;
  }
  if ((v52_.v52 & 1) != 0) {
    v27 = v52_.v53;
  }
  else {
    v27 = (unsigned __int64)(unsigned __int8)v52_.v52 >> 1;
  }
  v28 = strlen_alt1(v24);
  v29 = v28 + v27;
  if (v28 + v27 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_93;
  }
  v30 = v28;
  if (v29 > 0x16) {
    if ((v29 | 7) == 0x17) {
      v33 = 26;
    }
    else {
      v33 = (v29 | 7) + 1;
    }
    v32 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v33, 16, 0);
    v49_.v50 = v29;
    v49_.v51 = v32;
    v49_.v49 = v33 | 1;
    v31 = v33 | 1;
  }
  else {
    v31 = 2 * v29;
    v32 = 0;
    v49_.v50 = 0;
    v49_.v51 = 0;
    v49_.v49 = (unsigned __int8)(2 * v29);
  }
  if ((v31 & 1) != 0) {
    v34 = (char*)v32;
  }
  else {
    v34 = (char*)&v49_.v49 + 1;
  }
  if (v27 != 0) {
    memmove_alt1((__int64)v34, (__int64)v26, v27);
  }
  v35 = (__int64)&v34[v27];
  if (v30 != 0) {
    memmove_alt1(v35, (__int64)v24, v30);
  }
  *(_BYTE*)(v35 + v30) = 0;
  if ((v22 & 1) != 0) {
    if (v25 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v25);
    }
    v23 = v47_.v47[0] & 1;
  }
  v52_.v52 = v49_.v49;
  v52_.v53 = v49_.v50;
  v52_.v54 = (unsigned __int8*)v49_.v51;
  if (v23 != 0 && v47_.v48 != nullptr) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, (__int64)v47_.v48);
  }
  if ((v52_.v52 & 1) != 0) {
    v38 = v52_.v54;
  }
  else {
    v38 = (unsigned __int8*)&v52_.v52 + 1;
  }
  if (snd_hasSound(v38)) {
    if ((v52_.v52 & 1) != 0) {
      v39 = (const char*)v52_.v54;
    }
    else {
      v39 = (char*)&v52_.v52 + 1;
    }
    v40 = strlen_alt1(v39);
    if (v40 < 0xFFFFFFFFFFFFFFF7LL) {
      v41 = v40;
      if (v40 >= 0x17) {
        if ((v40 | 7) == 0x17) {
          v43 = 26;
        }
        else {
          v43 = (v40 | 7) + 1;
        }
        v44 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v43, 16,
                                             0);
        v46[1] = v41;
        v46[2] = v44;
        *v46 = v43 | 1;
        v42 = v44;
      }
      else {
        *(_BYTE*)v46 = 2 * v40;
        v42 = (__int64)v46 + 1;
        if (v40 == 0) {
        LABEL_87:
          *(_BYTE*)(v42 + v41) = 0;
          if ((v52_.v52 & 1) == 0) {
            return;
          }
          goto LABEL_88;
        }
      }
      memmove_alt1(v42, (__int64)v39, v41);
      goto LABEL_87;
    }
  LABEL_93:
    String_60a1d0();
  }
  *(_WORD*)v46 = 0;
  if ((v52_.v52 & 1) == 0) {
    return;
  }
LABEL_88:
  if (v52_.v54 != nullptr) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, (__int64)v52_.v54);
  }
}

__int64 ProxySnd_Unknown61()
{
  __int64 v0;

  v0 = ProxySnd_a1e400((__int64)&GameData_21fa7f0);
  return (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v0 + 120LL))(
      v0, "snd::data::s_museumDataList");
}

__int64 ProxySnd_Unknown62()
{
  __int64 v0;

  v0 = ProxySnd_a1e400((__int64)&GameData_21fa7f0);
  return (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v0 + 120LL))(
      v0, "snd::data::s_animeSoundDataList");
}

_QWORD* ProxySnd_Unknown64(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  _QWORD* v11;
  __int64 v13;

  nn_os_LockMutex_alt1((__int64)&GameData_21fa828);
  nn_os_LockMutex_alt1((__int64)&GameData_21fa828);
  v7 = (unsigned __int16)GameData_21fa820;
  v8 = HIWORD(GameData_21fa820);
  nn_os_UnlockMutex_alt1((__int64)&GameData_21fa828);
  if (v7 >= v8) {
    GameRoutine_a1efd0_alt1((__int64)&GameData_21fa828);
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  v9 = 2LL * (unsigned __int16)GameData_21fa820;
  v10 = *(unsigned __int16*)(GameData_21fa818 + v9);
  LOWORD(GameData_21fa820) = GameData_21fa820 + 1;
  *(_WORD*)(GameData_21fa818 + v9) = -1;
  v11 = (_QWORD*)(GameData_21fa810 + 112LL * v10);
  nn_os_UnlockMutex_alt1((__int64)&GameData_21fa828);
  ProxySnd_179780((__int64)v11, a2, a3, a4);
  v13 = GameData_212e2c0[0];
  v11[9] = 0;
  v11[10] = 0;
  *(_QWORD*)((char*)v11 + 87) = 0;
  v11[12] = 0;
  v11[13] = 0;
  *v11 = v13 + 16;
  return v11;
}

__int64 ProxySnd_Unknown65(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v13;

  nn_os_LockMutex_alt1((__int64)&GameData_21fa878);
  nn_os_LockMutex_alt1((__int64)&GameData_21fa878);
  v7 = (unsigned __int16)GameData_21fa870;
  v8 = HIWORD(GameData_21fa870);
  nn_os_UnlockMutex_alt1((__int64)&GameData_21fa878);
  if (v7 >= v8) {
    GameRoutine_a1efd0_alt1((__int64)&GameData_21fa878);
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  v9 = 2LL * (unsigned __int16)GameData_21fa870;
  v10 = *(unsigned __int16*)(GameData_21fa868 + v9);
  LOWORD(GameData_21fa870) = GameData_21fa870 + 1;
  *(_WORD*)(GameData_21fa868 + v9) = -1;
  v11 = GameData_21fa860 + 112LL * v10;
  nn_os_UnlockMutex_alt1((__int64)&GameData_21fa878);
  ProxySnd_1798b0(v11, a2, a3, a4);
  v13 = GameData_212e2c8[0];
  *(_QWORD*)(v11 + 72) = 0;
  *(_WORD*)(v11 + 80) = 0;
  *(_QWORD*)(v11 + 88) = 0;
  *(_QWORD*)(v11 + 96) = 0;
  *(_QWORD*)(v11 + 104) = 0;
  *(_QWORD*)v11 = v13 + 16;
  return v11;
}

__int64 ProxySnd_Unknown66(__int64 a1, void (***a2)(_QWORD))
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  unsigned __int16 v6;
  unsigned __int64 v7;
  struct {
    __int64 v9;
    int v10;
  } v9_;

  v9_.v9 = 0;
  v9_.v10 = 0x2000;
  snd_fnd_WeakHandle_set_alt1((__int64)&v9_.v9, (__int64)a2);
  v3 = ProxySnd_a1e400((__int64)&v9_.v9);
  (**a2)(a2);
  if (v3 != 0) {
    v4 = &GameData_21fa860;
  }
  else {
    v4 = &GameData_21fa810;
  }
  nn_os_LockMutex_alt1((__int64)(v4 + 3));
  v5 = v4[1];
  v6 = *((_WORD*)v4 + 8) - 1;
  v7 = ((unsigned __int64)a2 - *v4) >> 4;
  *((_WORD*)v4 + 8) = v6;
  *(_WORD*)(v5 + 2LL * v6) =
      (v7 * (unsigned __int128)0x2492492492492493uLL) >> 64;
  return nn_os_UnlockMutex_alt1((__int64)(v4 + 3));
}

__int64 ProxySnd_a1e400(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  unsigned __int8 explicit;
  __int64* v5;
  int v8;
  __int64* v9;

  if (snd_fnd_WeakHandle_get_alt1(a1) == 0) {
    return 0;
  }
  v2 = snd_fnd_WeakHandle_get_alt1(a1);
  v3 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212e270,
                                  memory_order_acquire);
  v5 = GameData_212e268;
  if ((explicit & 1) == 0) {
    v9 = v3;
    v8 = __cxa_guard_acquire_alt1((__int64)GameData_212e270);
    v5 = GameData_212e268;
    v3 = v9;
    if (v8 != 0) {
      *GameData_212e268 = (__int64)GameHr_a1efe0();
      __cxa_guard_release_alt1((__int64)GameData_212e270);
      v5 = GameData_212e268;
      v3 = v9;
    }
  }
  if (v3 == v5) {
    return snd_fnd_WeakHandle_get_alt1(a1);
  }
  do {
    v3 = (__int64*)*v3;
  } while (v3 != v5 && v3 != nullptr);
  if (v3 != nullptr) {
    return snd_fnd_WeakHandle_get_alt1(a1);
  }
  else {
    return 0;
  }
}

__int64 ProxySnd_Unknown69(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;

  nn_os_LockMutex_alt1((__int64)&GameData_21fa8c8);
  nn_os_LockMutex_alt1((__int64)&GameData_21fa8c8);
  v5 = (unsigned __int16)GameData_21fa8c0;
  v6 = HIWORD(GameData_21fa8c0);
  nn_os_UnlockMutex_alt1((__int64)&GameData_21fa8c8);
  if (v5 >= v6) {
    GameRoutine_a1efd0_alt1((__int64)&GameData_21fa8c8);
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  v7 = 2LL * (unsigned __int16)GameData_21fa8c0;
  v8 = *(unsigned __int16*)(GameData_21fa8b8 + v7);
  LOWORD(GameData_21fa8c0) = GameData_21fa8c0 + 1;
  *(_WORD*)(GameData_21fa8b8 + v7) = -1;
  v9 = GameData_21fa8b0 + 72LL * v8;
  nn_os_UnlockMutex_alt1((__int64)&GameData_21fa8c8);
  ProxySnd_a3a490(v9, a2, a3);
  return v9;
}

__int64 ProxySnd_Unknown70(__int64 a1, void (***a2)(_QWORD))
{
  (**a2)(a2);
  nn_os_LockMutex(&GameData_21fa8c8);
  LOWORD(GameData_21fa8c0) = GameData_21fa8c0 - 1;
  *(_WORD*)(GameData_21fa8b8 + 2LL * (unsigned __int16)GameData_21fa8c0) =
      ((unsigned __int64)a2 - GameData_21fa8b0) / 0x48;
  return nn_os_UnlockMutex(&GameData_21fa8c8);
}

__int64 ProxySnd_a1f040()
{
  __int64 result;

  GameData_21fa618 = 0;
  GameData_21fa82c = 0;
  GameData_21fa838 = 0;
  GameData_21fa840 = 0;
  GameData_21fa810 = 0;
  GameData_21fa818 = 0;
  GameData_21fa828 = 0;
  GameData_21fa820 = 0;
  GameData_21fa7f8 = 0x2000;
  GameData_21fa7f0 = 0;
  GameData_21fa800 = (__int64)GameData_1fbd9e8;
  GameData_21fa808 = (__int64)GameData_1fbda18;
  nn_os_InitializeMutex(&GameData_21fa828, 1, 0);
  GameData_21fa848 = 0;
  GameRoutine_2b0();
  GameData_21fa878 = 0;
  GameData_21fa850 = (__int64)GameData_1fbda48;
  GameData_21fa858 = (__int64)GameData_1fbda78;
  GameData_21fa87c = 0;
  GameData_21fa888 = 0;
  GameData_21fa890 = 0;
  GameData_21fa860 = 0;
  GameData_21fa868 = 0;
  GameData_21fa870 = 0;
  nn_os_InitializeMutex(&GameData_21fa878, 1, 0);
  GameData_21fa898 = 0;
  GameRoutine_2b0();
  GameData_21fa8c8 = 0;
  GameData_21fa8a0 = (__int64)GameData_1fbdaa8;
  GameData_21fa8a8 = (__int64)GameData_1fbdad8;
  GameData_21fa8cc = 0;
  GameData_21fa8d8 = 0;
  GameData_21fa8e0 = 0;
  GameData_21fa8b0 = 0;
  GameData_21fa8b8 = 0;
  GameData_21fa8c0 = 0;
  nn_os_InitializeMutex(&GameData_21fa8c8, 1, 0);
  GameData_21fa8e8 = 0;
  result = GameRoutine_2b0();
  GameData_21fa8f0 = 0;
  GameData_21fa8f8 = 0;
  return result;
}

#pragma GCC visibility pop
