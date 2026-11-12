#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AnimCtrlModule_a77840(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_98f140(_QWORD, _QWORD);
__int64 GameRoutine_a76440(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a8c0c0(_QWORD);
__int64 GameRoutine_be3840(__int64 result, __int64);
__int64 GameRoutine_c09420(__int64 result, int, long double);
__int64 GameRoutine_c09920(__int64, int);
__int64 GameRoutine_c0b080(_QWORD, _QWORD);
__int64 GameRoutine_c0b220(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_22034c0;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212ea90;
extern _UNKNOWN* GameData_212eaa0;
extern __int64 (*wld_MapAnimModule_vtable[])();
extern __int64 GameData_212c638;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22034b8;
extern int* GameData_212ea88;
extern int* GameData_212ea98;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_98f290(_QWORD);
_QWORD* MapAnimModule_Destructor_alt1(_QWORD* result) __asm__(
    "MapAnimModule_Destructor");
__int64 MapAnimModule_c086a0(__int64 a1, __int64 a2, __int64 a3,
                             unsigned int a4);
_QWORD* MapAnimModule_c08ee0(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 MapAnimModule_c09040_alt1(__int64 a1, __int64 a2,
                                  __int64 a3) __asm__("MapAnimModule_c09040");
__int64 MapAnimModule_c09200(__int64 result, int a2, float a3);
__int64 MapAnimModule_Unknown5(__int64 result);
__int64 MapAnimModule_c09f40_alt1(__int64 a1,
                                  _QWORD* a2) __asm__("MapAnimModule_c09f40");
__int64 MapAnimModule_c0a840(__int64 a1);
__int64 wld_MapAnimModule_initializeMaterialTable_lambda0_Invoke(__int64 result,
                                                                 _BYTE* a2);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_c0b4e0(float*, unsigned __int8*, char*);
__attribute__((swiftcall)) void GameRoutine_c09c40(PSEUDO_X8, __int64);
__int64* GameRoutine_98f140_alt1(__int64* result,
                                 _QWORD*) __asm__("GameRoutine_98f140");
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 ElfFile_631220(__int64*, __int64);
__int64 GameRoutine_a8c0c0_alt1(__int64) __asm__("GameRoutine_a8c0c0");
__int64 GameRoutine_c0b3c0(__int64, unsigned __int8*);
__int64 LightingAnimModule_c74350(_QWORD*, unsigned __int8*, unsigned __int64,
                                  float);
__int64 LightingAnimModule_c744e0(__int64, unsigned __int8*, unsigned __int64,
                                  float);
__int64 LightingAnimModule_c74700(__int64, __int64, unsigned __int64, float);
__int64 MaterialAnimModule_be6340(__int64 result);
__int64 ResFile_5e5f00(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
__int64 wld_MaterialAnimModule_LoadAnimAsync(_QWORD*, __int64, __int64,
                                             __int64);
bool GameRoutine_ad7390(_QWORD*);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _UNKNOWN GameData_22034e0;
extern __int64 (*GameData_1fd1690[])();
extern __int64 (*eft_ClampCurve_ptr)();
extern __int64 GameData_212eb18[3];
extern char GameData_1a9f09e;
extern int GameData_22034d8;
unsigned __int64 wld_be6480(unsigned __int64 result, __int64, unsigned __int64,
                            float);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_98f290_alt1() __asm__("GameRoutine_98f290");
void __attribute__((noreturn)) String_60a1d0();
__int64 wld_MapAnimModule_initializeMaterialTable(__int64 result, __int64 a2,
                                                  _QWORD* a3);
__int64 MapAnimModule_c08940(__int64 a1, unsigned __int8* a2,
                             unsigned __int64 a3, float a4);
__int64 MapAnimModule_c09420(__int64 result, int a2, long double a3);
__int64 MapAnimModule_c096a0(__int64 result, int a2);
__int64 MapAnimModule_c09920(__int64 a1, int a2);
__int64* GameRoutine_c0b220_alt1(_QWORD*,
                                 __int64*) __asm__("GameRoutine_c0b220");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
void GameRoutine_98f140_alt2(__int64*, _QWORD*) __asm__("GameRoutine_98f140");
void GameRoutine_a8c0c0_alt2(__int64) __asm__("GameRoutine_a8c0c0");
void MaterialAnimModule_be3840(__int64, __int64);
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64* MapAnimModule_c09040(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 GameHr_a76440(__int64, __int64, __int64, int);
void MapAnimModule_Destructor(__int64 a1);
__int64 MapAnimModule_c09f40(__int64 a1, __int64* a2);
__int64* GameRoutine_c0ac40(_QWORD*, unsigned __int8*);
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
__int64 std___1___next_prime(unsigned __int64);
void GameRoutine_c0ade0(__int64*, unsigned __int64);
void __attribute__((noreturn)) String_60a250(const char*);
__int64* MapAnimModule_c0a320(__int64 a1, __int64* a2);
void MapAnimModule_c0b4e0(__int64 a1, unsigned __int8* a2, char* a3);

__int64 wld_MapAnimModule_initializeMaterialTable(__int64 result, __int64 a2,
                                                  _QWORD* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  unsigned __int64 v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int* v20;
  __int64 v21;
  int v22;
  __int64 v23;
  unsigned __int64 i;
  __int64 v25;
  int v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  char v31;
  bool v32;
  bool v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  bool v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  _BYTE* v67;
  _BYTE* v68;
  bool v69;
  _QWORD* v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  char* v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  char* v81;
  __int64 v82;
  __int64 v83;
  _QWORD* v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  char* v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  char* v95;
  __int64 v96;
  __int64 v97;
  __int64* j;
  unsigned __int64 v99;
  bool v100;
  unsigned __int64 v101;
  unsigned __int8* v102;
  unsigned __int64 v103;
  __int64 v104;
  struct {
    __int64 v105;
    unsigned __int64 v106;
    char* v107;
  } v105_;
  struct {
    __int64 v108;
    unsigned __int64 v109;
    char* v110;
    __int16 v111;
    bool v112;
  } v108_;
  struct {
    __int64 (**v113)();
    _QWORD* v114;
    __int64 v115;
    __int64 v116;
    __int64 (***v117)();
    __int64 v118;
    __int64 v119;
    __int64 v120;
  } v113_;

  *(_WORD*)(result + 22) = 0;
  *(_BYTE*)(result + 24) = 0;
  v3 = a3[1];
  if (*(_QWORD*)(v3 + 824) == 0) {
    return result;
  }
  v6 = result;
  v113_.v119 = 0;
  v113_.v120 = 0;
  v113_.v117 = nullptr;
  v113_.v118 = 0;
  v113_.v115 = 0;
  v113_.v116 = 0;
  v113_.v113 = nullptr;
  v113_.v114 = nullptr;
  GameRoutine_ad7390(a3);
  v7 = ResFile_5e5f00(*(_QWORD*)(a3[1] + 592LL));
  nn_util_SNPrintf(&v113_.v113, 64, "%s.mataniminfo.elf",
                   (const char*)(*(_QWORD*)(v7 + 32) + 2LL));
  v8 = strlen(&v113_.v113);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_169:
    String_60a1d0();
  }
  v9 = v8;
  v104 = a2;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v11, 16, 0);
    v108_.v109 = v9;
    v108_.v110 = v10;
    v108_.v108 = v11 | 1;
  }
  else {
    LOBYTE(v108_.v108) = 2 * v8;
    v10 = (char*)&v108_.v108 + 1;
    if (v8 == 0) {
      goto LABEL_11;
    }
  }
  memcpy(v10, &v113_.v113, v9);
LABEL_11:
  v10[v9] = 0;
  v12 = GameRoutine_c0b3c0(v3 + 808, (unsigned __int8*)&v108_.v108);
  if ((v108_.v108 & 1) != 0 && v108_.v110 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  if (v3 + 816 == v12) {
    goto LABEL_85;
  }
  GameRoutine_c09c40((void*)(&v108_.v108), (__int64)a3);
  v14 = (__int64*)(v6 + 32);
  if ((__int64*)(v6 + 32) == &v108_.v108) {
  LABEL_29:
    if ((v108_.v108 & 1) == 0) {
      goto LABEL_34;
    }
    goto LABEL_30;
  }
  if ((*(_BYTE*)v14 & 1) != 0) {
    if ((v108_.v108 & 1) != 0) {
      v16 = v108_.v110;
    }
    else {
      v16 = (char*)&v108_.v108 + 1;
    }
    if ((v108_.v108 & 1) != 0) {
      v17 = v108_.v109;
    }
    else {
      v17 = (unsigned __int64)(unsigned __int8)v108_.v108 >> 1;
    }
    SpineModel_64dde0(v14, (__int64)v16, v17);
    goto LABEL_29;
  }
  if ((v108_.v108 & 1) != 0) {
    GameRoutine_64df20(v14, (__int64)v108_.v110, v108_.v109);
    if ((v108_.v108 & 1) == 0) {
      goto LABEL_34;
    }
  }
  else {
    v15 = v108_.v109;
    *v14 = v108_.v108;
    *(_QWORD*)(v6 + 40) = v15;
    *(_QWORD*)(v6 + 48) = v108_.v110;
    if ((v108_.v108 & 1) == 0) {
      goto LABEL_34;
    }
  }
LABEL_30:
  if (v108_.v110 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
  }
LABEL_34:
  *(_BYTE*)(v6 + 22) = 1;
  v19 = ElfFile_631220(*(__int64**)(v12 + 56), (__int64)"world::data::s_data");
  v20 = (unsigned int*)ElfFile_631220(*(__int64**)(v12 + 56),
                                      (__int64)"world::data::s_dataCount");
  v21 = ElfFile_631220(*(__int64**)(v12 + 56), (__int64)"world::data::s_flag");
  v22 = *v20;
  if (v21 == 0) {
    if (v22 == 0) {
      goto LABEL_85;
    }
    v36 = 0;
    v37 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v38 = *(_QWORD*)(v19 + 8 * v36);
      v39 = strlen(v38);
      if (v39 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_169;
      }
      v40 = v39;
      if (v39 >= 0x17) {
        if ((v39 | 7) == 0x17) {
          v42 = 26;
        }
        else {
          v42 = (v39 | 7) + 1;
        }
        v41 = (char*)fw_memory_HeapManager_Allocate_alt1(*v37, v42, 16, 0);
        v105_.v106 = v40;
        v105_.v107 = v41;
        v105_.v105 = v42 | 1;
      }
      else {
        v41 = (char*)&v105_.v105 + 1;
        LOBYTE(v105_.v105) = 2 * v39;
        if (v39 == 0) {
          goto LABEL_72;
        }
      }
      memmove(v41, v38, v40);
    LABEL_72:
      v41[v40] = 0;
      if ((v105_.v105 & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(&v108_.v108, (__int64)v105_.v107,
                                           v105_.v106);
      }
      else {
        v108_.v108 = v105_.v105;
        v108_.v109 = v105_.v106;
        v108_.v110 = v105_.v107;
      }
      v108_.v111 = 0;
      v108_.v112 = false;
      GameRoutine_c0b4e0((float*)(v6 + 104), (unsigned __int8*)&v108_.v108,
                         (char*)&v108_.v108);
      if ((v108_.v108 & 1) != 0 && v108_.v110 != nullptr) {
        v43 = 128;
        if (*(_QWORD*)(*v37 + 200) == 0) {
          v43 = 56;
        }
        nn_mem_StandardAllocator_Free(*v37 + v43);
      }
      if ((v105_.v105 & 1) != 0 && v105_.v107 != nullptr) {
        v44 = 128;
        if (*(_QWORD*)(*v37 + 200) == 0) {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free(*v37 + v44);
      }
      if (++v36 >= (unsigned __int64)*v20) {
        goto LABEL_85;
      }
    }
  }
  if (v22 != 0) {
    v23 = v21;
    for (i = 0; i < *v20; ++i) {
      v25 = *(_QWORD*)(v19 + 8 * i);
      v26 = *(_DWORD*)(v23 + 4 * i);
      v27 = strlen(v25);
      if (v27 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_169;
      }
      v28 = v27;
      if (v27 >= 0x17) {
        if ((v27 | 7) == 0x17) {
          v30 = 26;
        }
        else {
          v30 = (v27 | 7) + 1;
        }
        v29 = (char*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v30, 16, 0);
        v105_.v106 = v28;
        v105_.v107 = v29;
        v105_.v105 = v30 | 1;
      }
      else {
        v29 = (char*)&v105_.v105 + 1;
        LOBYTE(v105_.v105) = 2 * v27;
        if (v27 == 0) {
          goto LABEL_47;
        }
      }
      memmove(v29, v25, v28);
    LABEL_47:
      v29[v28] = 0;
      if ((v105_.v105 & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(&v108_.v108, (__int64)v105_.v107,
                                           v105_.v106);
      }
      else {
        v108_.v108 = v105_.v105;
        v108_.v109 = v105_.v106;
        v108_.v110 = v105_.v107;
      }
      v31 = v26 & 1;
      v32 = (v26 & 2) != 0;
      v33 = (v26 & 4) != 0;
      LOBYTE(v108_.v111) = v31;
      HIBYTE(v108_.v111) = v32;
      v108_.v112 = v33;
      GameRoutine_c0b4e0((float*)(v6 + 104), (unsigned __int8*)&v108_.v108,
                         (char*)&v108_.v108);
      if ((v108_.v108 & 1) != 0 && v108_.v110 != nullptr) {
        v34 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v34 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v34);
      }
      if ((v105_.v105 & 1) != 0 && v105_.v107 != nullptr) {
        v35 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v35);
      }
      *(_BYTE*)(v6 + 23) |= v32 || v33;
    }
  }
LABEL_85:
  result = v104;
  if (*(_BYTE*)(v6 + 22) != 1) {
    return result;
  }
  v45 = (_QWORD*)MapAnimModule_c0a840(v104);
  v46 = *(unsigned __int8*)(v6 + 32);
  v48 = *(_QWORD*)(v6 + 40);
  v47 = *(_QWORD*)(v6 + 48);
  v49 = v45;
  v50 = (v46 & 1) == 0;
  v51 = v46 >> 1;
  v113_.v117 = &v113_.v113;
  if (v50) {
    v52 = v6 + 33;
  }
  else {
    v52 = v47;
  }
  if (v50) {
    v53 = v51;
  }
  else {
    v53 = v48;
  }
  v113_.v113 = GameData_1fd1690;
  v113_.v114 = (_QWORD*)v6;
  wld_MaterialAnimModule_LoadAnimAsync(v45, v52, v53, (__int64)&v113_.v113);
  result = (__int64)v113_.v117;
  if (v113_.v117 == &v113_.v113) {
    v54 = 4;
  }
  else {
    if (v113_.v117 == nullptr) {
      goto LABEL_97;
    }
    v54 = 5;
  }
  result = ((__int64 (*)(__int64))(*v113_.v117)[v54])((__int64)v113_.v117);
LABEL_97:
  if ((v49[6] & 1) != 0) {
    *(_BYTE*)v49[8] = 0;
    v49[7] = 0;
  }
  else {
    *((_WORD*)v49 + 24) = 0;
  }
  *((_DWORD*)v49 + 18) = -1;
  if ((v49[10] & 1) != 0) {
    *(_BYTE*)v49[12] = 0;
    v49[11] = 0;
  }
  else {
    *((_WORD*)v49 + 40) = 0;
  }
  *(_QWORD*)((char*)v49 + 108) = 0;
  *((_DWORD*)v49 + 26) = -1;
  v55 = *(_QWORD*)(v6 + 8);
  if (*(_DWORD*)(v55 + 284) != 1 || (*(_BYTE*)(v6 + 23) & 1) == 0) {
    return result;
  }
  *(_BYTE*)(v6 + 24) = 1;
  v56 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               40LL);
  nn_os_LockMutex(GameData_212df28);
  v57 = (__int64*)fw_memory_g_heap_manager_ptr;
  v58 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *(_BYTE*)(v58 + 16) = 0;
  v59 = (_QWORD*)v58;
  *(_DWORD*)(v58 + 17) = 33686018;
  v60 = GameData_212eb18[0];
  *(_QWORD*)(v58 + 24) = v56;
  *(_QWORD*)(v58 + 32) = 0;
  *(_QWORD*)(v58 + 40) = 0;
  *(_QWORD*)(v58 + 48) = 0;
  *(_DWORD*)(v58 + 56) = 0;
  *(_QWORD*)v58 = v60 + 16;
  *(_QWORD*)(v58 + 8) = v55;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22034e0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22034e0) != 0) {
    GameData_22034d8 = wld_Crc32_alt1(0, "LightingAnimModule", 0x12u);
    __cxa_guard_release(&GameData_22034e0);
  }
  v61 = *(_QWORD*)(v55 + 504);
  v62 = *(_QWORD*)(v55 + 512);
  v63 = v62;
  LODWORD(v113_.v113) = GameData_22034d8;
  v113_.v114 = v59;
  while (v63 != v61) {
    v64 = *(_DWORD*)(v63 - 16);
    v63 -= 16;
    if (v64 == GameData_22034d8) {
      if ((v59[2] & 1) != 0) {
        goto LABEL_124;
      }
      goto LABEL_118;
    }
  }
  if (v61 == v62 && (unsigned __int64)(*(_QWORD*)(v55 + 520) - v61) <= 0x6F) {
    v65 = fw_memory_HeapManager_Allocate_alt1(*v57, 112, 16, 0);
    *(_QWORD*)(v55 + 504) = v65;
    *(_QWORD*)(v55 + 512) = v65;
    *(_QWORD*)(v55 + 520) = v65 + 112;
    if (v62 != 0) {
      v66 = 128;
      if (*(_QWORD*)(*v57 + 200) == 0) {
        v66 = 56;
      }
      nn_mem_StandardAllocator_Free(*v57 + v66);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(v55 + 504), &v113_.v113);
  if ((v59[2] & 1) == 0) {
  LABEL_118:
    *((_BYTE*)v59 + 16) = 1;
    *((_BYTE*)v59 + 17) &= ~2u;
    *((_BYTE*)v59 + 18) &= ~2u;
    *((_BYTE*)v59 + 19) &= ~2u;
    *((_BYTE*)v59 + 20) &= ~2u;
    v67 = (_BYTE*)v59[1];
    v67[632] = 0;
    v67[664] = 0;
    v67[696] = 0;
    v67[728] = 0;
    (*(void (**)(_QWORD*))(*v59 + 64LL))(v59);
    v68 = (_BYTE*)v59[1];
    v69 = v68[300] == 3 && v68[301] == 3;
    if (v69 || v68[302] == 1) {
      (*(void (**)(_QWORD*))(*v59 + 72LL))(v59);
    }
  }
LABEL_124:
  v70 = *(_QWORD**)(v55 + 536);
  v71 = *(_QWORD*)(v55 + 544);
  if ((unsigned __int64)v70 >= v71) {
    v73 = *(_QWORD*)(v55 + 528);
    v74 = (char*)v70 - v73;
    v75 = ((__int64)v70 - v73) >> 3;
    v76 = v75 + 1;
    if ((unsigned __int64)(v75 + 1) >> 61 != 0) {
      goto LABEL_172;
    }
    v77 = v71 - v73;
    if (v77 >> 2 > v76) {
      v76 = v77 >> 2;
    }
    if ((unsigned __int64)v77 >= 0x7FFFFFFFFFFFFFF8LL) {
      v78 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v78 = v76;
    }
    if (v78 != 0) {
      if (v78 >> 61 != 0) {
        goto LABEL_173;
      }
      v79 = fw_memory_HeapManager_Allocate_alt1(*v57, 8 * v78, 16, 0);
    }
    else {
      v79 = 0;
    }
    v80 = v79 + 8 * v78;
    v81 = (char*)v70 - v73;
    v82 = (__int64)&v74[v79 + -8 * v75];
    *(_QWORD*)&v74[v79] = v59;
    v72 = (__int64)&v74[v79 + 8];
    memcpy(v82, v73, v81);
    *(_QWORD*)(v55 + 528) = v82;
    *(_QWORD*)(v55 + 536) = v72;
    *(_QWORD*)(v55 + 544) = v80;
    if (v73 != 0) {
      v83 = 128;
      if (*(_QWORD*)(*v57 + 200) == 0) {
        v83 = 56;
      }
      nn_mem_StandardAllocator_Free(*v57 + v83);
    }
  }
  else {
    *v70 = v59;
    v72 = (__int64)(v70 + 1);
  }
  *(_QWORD*)(v55 + 536) = v72;
  v84 = *(_QWORD**)(v55 + 560);
  v85 = *(_QWORD*)(v55 + 568);
  if ((unsigned __int64)v84 >= v85) {
    v87 = *(_QWORD*)(v55 + 552);
    v88 = (char*)v84 - v87;
    v89 = ((__int64)v84 - v87) >> 3;
    v90 = v89 + 1;
    if ((unsigned __int64)(v89 + 1) >> 61 == 0) {
      v91 = v85 - v87;
      if (v91 >> 2 > v90) {
        v90 = v91 >> 2;
      }
      if ((unsigned __int64)v91 >= 0x7FFFFFFFFFFFFFF8LL) {
        v92 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v92 = v90;
      }
      if (v92 == 0) {
        v93 = 0;
      LABEL_154:
        v94 = v93 + 8 * v92;
        v95 = (char*)v84 - v87;
        v96 = (__int64)&v88[v93 + -8 * v89];
        *(_QWORD*)&v88[v93] = v59;
        v86 = (__int64)&v88[v93 + 8];
        memcpy(v96, v87, v95);
        *(_QWORD*)(v55 + 552) = v96;
        *(_QWORD*)(v55 + 560) = v86;
        *(_QWORD*)(v55 + 568) = v94;
        if (v87 != 0) {
          v97 = 128;
          if (*(_QWORD*)(*v57 + 200) == 0) {
            v97 = 56;
          }
          nn_mem_StandardAllocator_Free(*v57 + v97);
        }
        goto LABEL_158;
      }
      if (v92 >> 61 == 0) {
        v93 = fw_memory_HeapManager_Allocate_alt1(*v57, 8 * v92, 16, 0);
        goto LABEL_154;
      }
    LABEL_173:
      GameRoutine_60a210_alt1();
    }
  LABEL_172:
    GameRoutine_98f290_alt1();
  }
  *v84 = v59;
  v86 = (__int64)(v84 + 1);
LABEL_158:
  *(_QWORD*)(v55 + 560) = v86;
  GameRoutine_a8c0c0_alt1(v55);
  *(_BYTE*)(v55 + 576) = 1;
  result = nn_os_UnlockMutex(GameData_212df28);
  for (j = *(__int64**)(v6 + 120); j != nullptr; j = (__int64*)*j) {
    if (*((_BYTE*)j + 42) == 1) {
      v99 = *((unsigned __int8*)j + 16);
      v100 = (v99 & 1) == 0;
      v101 = v99 >> 1;
      if (v100) {
        v102 = (unsigned __int8*)j + 17;
      }
      else {
        v102 = (unsigned __int8*)j[4];
      }
      if (v100) {
        v103 = v101;
      }
      else {
        v103 = j[3];
      }
      result = LightingAnimModule_c74350(v59, v102, v103, 0x0.0p+0f);
    }
  }
  return result;
}

void MapAnimModule_Destructor(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v1 = *(_QWORD**)(a1 + 120);
  *(_QWORD*)a1 = wld_MapAnimModule_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  while (v1 != nullptr) {
    v5 = (__int64)v1;
    v1 = (_QWORD*)*v1;
    if ((*(_BYTE*)(v5 + 16) & 1) != 0 && *(_QWORD*)(v5 + 32) != 0) {
      v6 = v5;
      v7 = *(_QWORD*)(v5 + 32);
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v8 = 128;
      }
      else {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, v7);
      v5 = v6;
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v4 = 128;
    }
    else {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v4, v5);
  }
  v9 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 104) = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, v9);
  }
  v11 = *(_QWORD**)(a1 + 80);
  while (v11 != nullptr) {
    v13 = (__int64)v11;
    v11 = (_QWORD*)*v11;
    if ((*(_BYTE*)(v13 + 40) & 1) != 0) {
      v14 = *(_QWORD*)(v13 + 56);
      if (v14 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v15, v14);
      }
    }
    if ((*(_BYTE*)(v13 + 16) & 1) != 0) {
      v16 = *(_QWORD*)(v13 + 32);
      if (v16 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v17, v16);
      }
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v12 = 128;
    }
    else {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v12, v13);
  }
  v18 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 64) = 0;
  if (v18 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v19, v18);
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v20 = *(_QWORD*)(a1 + 48);
    if (v20 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v21, v20);
    }
  }
}

__int64 MapAnimModule_c086a0(__int64 a1, __int64 a2, __int64 a3,
                             unsigned int a4)
{
  unsigned __int64 v4;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 result;
  __int64** v15;
  __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  unsigned __int8 explicit;
  int* v27;
  __int64 v28;
  __int64 i;
  int v30;

  if (*(_BYTE*)(a1 + 21) != 1) {
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 72);
  if (v4 == 0 || *(_QWORD*)(a1 + 88) == 0) {
    return 0;
  }
  v10 = std___1___hash_memory(a2, a3);
  v11 = v4 - 1;
  v12 = v10;
  if ((v4 & (v4 - 1)) != 0) {
    v13 = v10;
    if (v10 >= v4) {
      v13 = v10 % v4;
    }
  }
  else {
    v13 = v10 & v11;
  }
  v15 = *(__int64***)(*(_QWORD*)(a1 + 64) + 8 * v13);
  if (v15 == nullptr) {
    return 0;
  }
  v16 = *v15;
  if (*v15 == nullptr) {
    return 0;
  }
  if ((v4 & v11) == 0) {
    while (1) {
      v21 = v16[1];
      if (v21 == v12) {
        v22 = *((unsigned __int8*)v16 + 16);
        v23 = v16[3];
        if ((v22 & 1) == 0) {
          v23 = v22 >> 1;
        }
        if (a3 == v23) {
          v24 = (v22 & 1) != 0 ? (__int64*)v16[4] : (__int64*)((char*)v16 + 17);
          if ((unsigned int)memcmp(a2, v24, a3) == 0) {
            goto LABEL_38;
          }
        }
      }
      else if ((v21 & v11) != v13) {
        return 0;
      }
      v16 = (__int64*)*v16;
      result = 0;
      if (v16 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v17 = v16[1];
    if (v17 == v12) {
      break;
    }
    if (v17 >= v4) {
      v17 %= v4;
    }
    if (v17 != v13) {
      return 0;
    }
  LABEL_16:
    v16 = (__int64*)*v16;
    if (v16 == nullptr) {
      return 0;
    }
  }
  v18 = *((unsigned __int8*)v16 + 16);
  v19 = v16[3];
  if ((v18 & 1) == 0) {
    v19 = v18 >> 1;
  }
  if (a3 != v19) {
    goto LABEL_16;
  }
  v20 = (v18 & 1) != 0 ? (__int64*)v16[4] : (__int64*)((char*)v16 + 17);
  if ((unsigned int)memcmp(a2, v20, a3) != 0) {
    goto LABEL_16;
  }

LABEL_38:
  if (v16[8] != 0 || v16[9] != 0 || v16[10] != 0 || v16[11] != 0 ||
      v16[12] != 0) {
    v25 = *(_QWORD*)(a1 + 8);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea90,
                                    memory_order_acquire);
    v27 = GameData_212ea88;
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_212ea90) != 0) {
      *v27 = wld_Crc32(0, "AnimCtrlModule", 14);
      __cxa_guard_release(GameData_212ea90);
    }
    v28 = *(_QWORD*)(v25 + 512);
    for (i = v28; i != *(_QWORD*)(v25 + 504); i -= 16) {
      v30 = *(_DWORD*)(i - 16);
      v28 -= 16;
      if (v30 == *v27) {
        if (*(_QWORD*)(v25 + 512) == v28) {
          return 0;
        }
        result = *(_QWORD*)(v28 + 8);
        if (result != 0) {
          AnimCtrlModule_a77840(result, v16 + 5, a4);
          return 1;
        }
        return result;
      }
    }
  }
  return 0;
}

__int64 MapAnimModule_c08940(__int64 a1, unsigned __int8* a2,
                             unsigned __int64 a3, float a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 result;
  __int64** v15;
  __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  unsigned __int8 explicit;
  int* v27;
  __int64 v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;
  char v32;
  char v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;

  if (*(_BYTE*)(a1 + 22) != 1) {
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 112);
  if (v4 == 0 || *(_QWORD*)(a1 + 128) == 0) {
    return 0;
  }
  v10 = std___1___hash_memory(a2, a3);
  v11 = v4 - 1;
  v12 = v10;
  if ((v4 & (v4 - 1)) != 0) {
    v13 = v10;
    if (v10 >= v4) {
      v13 = v10 % v4;
    }
  }
  else {
    v13 = v10 & v11;
  }
  v15 = *(__int64***)(*(_QWORD*)(a1 + 104) + 8 * v13);
  if (v15 == nullptr) {
    return 0;
  }
  v16 = *v15;
  if (*v15 == nullptr) {
    return 0;
  }
  if ((v4 & v11) == 0) {
    while (1) {
      v21 = v16[1];
      if (v21 == v12) {
        v22 = *((unsigned __int8*)v16 + 16);
        v23 = v16[3];
        if ((v22 & 1) == 0) {
          v23 = v22 >> 1;
        }
        if (a3 == v23) {
          v24 = (v22 & 1) != 0 ? (__int64*)v16[4] : (__int64*)((char*)v16 + 17);
          if ((unsigned int)memcmp(a2, v24, a3) == 0) {
            goto LABEL_38;
          }
        }
      }
      else if ((v21 & v11) != v13) {
        return 0;
      }
      v16 = (__int64*)*v16;
      result = 0;
      if (v16 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v17 = v16[1];
    if (v17 == v12) {
      break;
    }
    if (v17 >= v4) {
      v17 %= v4;
    }
    if (v17 != v13) {
      return 0;
    }
  LABEL_16:
    v16 = (__int64*)*v16;
    if (v16 == nullptr) {
      return 0;
    }
  }
  v18 = *((unsigned __int8*)v16 + 16);
  v19 = v16[3];
  if ((v18 & 1) == 0) {
    v19 = v18 >> 1;
  }
  if (a3 != v19) {
    goto LABEL_16;
  }
  v20 = (v18 & 1) != 0 ? (__int64*)v16[4] : (__int64*)((char*)v16 + 17);
  if ((unsigned int)memcmp(a2, v20, a3) != 0) {
    goto LABEL_16;
  }
LABEL_38:
  v25 = *(_QWORD*)(a1 + 8);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                                  memory_order_acquire);
  v27 = GameData_212ea98;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212eaa0) != 0) {
    *v27 = wld_Crc32_alt1(0, "MaterialAnimModule", 0x12u);
    __cxa_guard_release(GameData_212eaa0);
  }
  v28 = *(_QWORD*)(v25 + 512);
  v29 = v28;
  while (v29 != *(_QWORD*)(v25 + 504)) {
    v30 = *(_DWORD*)(v29 - 16);
    v29 -= 16;
    v28 -= 16;
    if (v30 == *v27) {
      if (*(_QWORD*)(v25 + 512) == v28) {
        return 0;
      }
      v31 = *(_QWORD*)(v28 + 8);
      if (v31 == 0) {
        return 0;
      }
      if (a4 < 0x1.0000000000000p-23f) {
        wld_be6480(*(_QWORD*)(v28 + 8), (__int64)&GameData_1a9f09e, 0,
                   0x0.0p+0f);
      }
      *(_BYTE*)(v31 + 76) = 1;
      if (a4 <= 0x0.0p+0f) {
        if (a3 != 0) {
          GameRoutine_60a060((char*)(v31 + 48), (__int64)a2, a3);
          MaterialAnimModule_be6340(v31);
        }
        else {
          if ((*(_BYTE*)(v31 + 48) & 1) != 0) {
            **(_BYTE**)(v31 + 64) = 0;
            *(_QWORD*)(v31 + 56) = 0;
          }
          else {
            *(_WORD*)(v31 + 48) = 0;
          }
          *(_DWORD*)(v31 + 72) = -1;
          if ((*(_BYTE*)(v31 + 80) & 1) != 0) {
            **(_BYTE**)(v31 + 96) = 0;
            *(_QWORD*)(v31 + 88) = 0;
          }
          else {
            *(_WORD*)(v31 + 80) = 0;
          }
          *(_QWORD*)(v31 + 108) = 0;
          *(_DWORD*)(v31 + 104) = -1;
        }
      }
      else {
        wld_be6480(v31, (__int64)a2, a3, a4);
      }
      v32 = *(_BYTE*)(a1 + 59);
      v33 = *((_BYTE*)v16 + 42);
      *(_WORD*)(a1 + 56) = *((_WORD*)v16 + 20);
      *(_BYTE*)(a1 + 58) = v33;
      if ((v32 & 1) == 0) {
        *(_BYTE*)(a1 + 59) = 1;
      }
      result = 1;
      *(_DWORD*)(v31 + 268) = *((unsigned __int8*)v16 + 40);
      if (*(_BYTE*)(a1 + 23) == 1 && (*(_BYTE*)(a1 + 24) & 1) != 0) {
        v34 = *(_QWORD*)(a1 + 8);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22034e0,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_22034e0) != 0) {
          GameData_22034d8 = wld_Crc32_alt1(0, "LightingAnimModule", 0x12u);
          __cxa_guard_release(&GameData_22034e0);
        }
        v35 = *(_QWORD*)(v34 + 512);
        v36 = v35;
        while (v36 != *(_QWORD*)(v34 + 504)) {
          v37 = *(_DWORD*)(v36 - 16);
          v36 -= 16;
          v35 -= 16;
          if (v37 == GameData_22034d8) {
            if (*(_QWORD*)(v34 + 512) != v35) {
              v38 = *(_QWORD*)(v35 + 8);
              goto LABEL_70;
            }
            break;
          }
        }
        v38 = 0;
      LABEL_70:
        if (*((_BYTE*)v16 + 42) == 1) {
          LightingAnimModule_c744e0(v38, a2, a3, a4);
        }
        if (*((_BYTE*)v16 + 41) == 1) {
          LightingAnimModule_c74700(v38, (__int64)a2, a3, a4);
        }
        return 1;
      }
      return result;
    }
  }
  return 0;
}

_QWORD* MapAnimModule_c08ee0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4;
  _QWORD* result;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 i;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v4 = *(unsigned __int8*)(a1 + 21);
  v18 = a2;
  v19 = a3;
  if (v4 == 1) {
    result = (_QWORD*)GameRoutine_c0b080(a1 + 64, &v18);
    if (result == nullptr) {
      return result;
    }
    v10 =
        result[8] == 0 && result[9] == 0 && result[10] == 0 && result[11] == 0;
    if (!v10 || result[12] != 0) {
      v11 = *(_QWORD*)(a1 + 8);
      if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212ea90,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_22034c0) != 0) {
        GameData_22034b8 = wld_Crc32(0, "AnimCtrlModule", 14);
        __cxa_guard_release(&GameData_22034c0);
      }
      v12 = *(_QWORD*)(v11 + 512);
      for (i = v12; i != *(_QWORD*)(v11 + 504); i -= 16) {
        v14 = *(_DWORD*)(i - 16);
        v12 -= 16;
        if (v14 == GameData_22034b8) {
          if (*(_QWORD*)(v11 + 512) != v12) {
            v15 = *(_QWORD*)(v12 + 8);
            if (v15 != 0) {
              v16 = *(_QWORD*)(*(_QWORD*)(v15 + 72) + 104LL * a4);
              if (v16 != 0) {
                v17 = v19;
                if (v17 == strlen(v16 + 104)) {
                  return (_QWORD*)((unsigned int)memcmp(v18, v16 + 104, v17) ==
                                   0);
                }
              }
            }
          }
          return nullptr;
        }
      }
    }
  }
  return nullptr;
}

__int64* MapAnimModule_c09040(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3;
  __int64* result;
  __int64 v6;
  unsigned __int8 explicit;
  int* v8;
  __int64 v9;
  __int64 i;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  unsigned __int64 v18;
  char* v19;
  char v20;
  unsigned __int64 v21;
  __int64 v22;
  char* v23;
  unsigned int v24;
  __int64 v25;
  struct {
    __int64 v26;
    unsigned __int64 v27;
    char* v28;
  } v26_;
  struct {
    __int64 v29;
    unsigned __int64 v30;
  } v29_;

  v3 = *(unsigned __int8*)(a1 + 22);
  v29_.v29 = a2;
  v29_.v30 = a3;
  if (v3 == 1) {
    result = GameRoutine_c0b220_alt1((_QWORD*)(a1 + 104), &v29_.v29);
    if (result == nullptr) {
      return result;
    }
    v6 = *(_QWORD*)(a1 + 8);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                                    memory_order_acquire);
    v8 = GameData_212ea98;
    if ((explicit & 1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)GameData_212eaa0) != 0) {
      *v8 = wld_Crc32_alt1(0, "MaterialAnimModule", 0x12u);
      __cxa_guard_release_alt1((__int64)GameData_212eaa0);
    }
    v9 = *(_QWORD*)(v6 + 512);
    for (i = v9; i != *(_QWORD*)(v6 + 504); i -= 16) {
      v11 = *(_DWORD*)(i - 16);
      v9 -= 16;
      if (v11 == *v8) {
        if (*(_QWORD*)(v6 + 512) == v9) {
          return nullptr;
        }
        v12 = *(_QWORD*)(v9 + 8);
        if (v12 == 0) {
          return nullptr;
        }
        v14 = v29_.v29;
        v13 = v29_.v30;
        v15 = *(unsigned int*)(v12 + 72);
        if ((v15 & 0x80000000) != 0) {
          LOWORD(v26_.v26) = 0;
        }
        else {
          v16 = (__int64*)(*(_QWORD*)(v12 + 24) + (v15 << 6));
          if ((*(_BYTE*)v16 & 1) != 0) {
            fw_text_String_CopyTerminated_alt1(&v26_.v26, v16[2], v16[1]);
          }
          else {
            v17 = *v16;
            v18 = v16[1];
            v19 = (char*)v16[2];
            v26_.v27 = v18;
            v26_.v28 = v19;
            v26_.v26 = v17;
          }
        }
        v20 = v26_.v26;
        v21 = v26_.v27;
        v22 = (__int64)v26_.v28;
        if ((v26_.v26 & 1) == 0) {
          v21 = (unsigned __int64)(unsigned __int8)v26_.v26 >> 1;
        }
        if (v13 == v21) {
          if ((v26_.v26 & 1) != 0) {
            v23 = v26_.v28;
          }
          else {
            v23 = (char*)&v26_.v26 + 1;
          }
          result = (__int64*)(memcmp_alt1(v14, (__int64)v23, v13) == 0);
        }
        else {
          result = nullptr;
        }
        if ((v20 & 1) != 0 && v22 != 0) {
          v24 = (unsigned int)result;
          v25 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v25 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v22);
          return (__int64*)v24;
        }
        return result;
      }
    }
  }
  return nullptr;
}

__int64 MapAnimModule_c09200(__int64 result, int a2, float a3)
{
  __int64 v3;
  unsigned __int8 explicit;
  int* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8 v14;
  int* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 i;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  float v28;
  float v29;

  if (*(_BYTE*)(result + 21) == 1) {
    v3 = *(_QWORD*)(result + 8);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea90,
                                    memory_order_acquire);
    v5 = GameData_212ea88;
    if ((explicit & 1) == 0) {
      v26 = result;
      v28 = a3;
      v25 = a2;
      v24 = v3;
      v23 = __cxa_guard_acquire(GameData_212ea90);
      v5 = GameData_212ea88;
      a3 = v28;
      v3 = v24;
      a2 = v25;
      result = v26;
      if (v23 != 0) {
        *GameData_212ea88 = wld_Crc32(0, "AnimCtrlModule", 14);
        __cxa_guard_release(GameData_212ea90);
        v5 = GameData_212ea88;
        a3 = v28;
        v3 = v24;
        a2 = v25;
        result = v26;
      }
    }
    v6 = *v5;
    v8 = *(_QWORD*)(v3 + 504);
    v7 = *(_QWORD*)(v3 + 512);
    v9 = v7;
    v10 = v7;
    while (v10 != v8) {
      v11 = *(_DWORD*)(v10 - 16);
      v10 -= 16;
      v9 -= 16;
      if (v11 == v6) {
        if (v7 != v9) {
          v12 = *(_QWORD*)(v9 + 8);
          if (v12 != 0) {
            *(float*)(*(_QWORD*)(v12 + 72) + 104LL * a2 + 8) = a3;
          }
        }
        break;
      }
    }
  }
  if (a2 == 0 && (*(_BYTE*)(result + 22) & 1) != 0) {
    v13 = *(_QWORD*)(result + 8);
    v14 = atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                               memory_order_acquire);
    v15 = GameData_212ea98;
    if ((v14 & 1) == 0) {
      v29 = a3;
      v27 = v13;
      result = __cxa_guard_acquire(GameData_212eaa0);
      v15 = GameData_212ea98;
      a3 = v29;
      v13 = v27;
      if ((_DWORD)result != 0) {
        *GameData_212ea98 = wld_Crc32(0, "MaterialAnimModule", 18);
        result = __cxa_guard_release(GameData_212eaa0);
        v15 = GameData_212ea98;
        a3 = v29;
        v13 = v27;
      }
    }
    v16 = *v15;
    v18 = *(_QWORD*)(v13 + 504);
    v17 = *(_QWORD*)(v13 + 512);
    v19 = v17;
    for (i = v17; i != v18; i -= 16) {
      v21 = *(_DWORD*)(i - 16);
      v19 -= 16;
      if (v21 == v16) {
        if (v17 != v19) {
          v22 = *(_QWORD*)(v19 + 8);
          if (v22 != 0) {
            if ((*(_BYTE*)(v22 + 76) & 1) == 0 &&
                ((*(_DWORD*)(v22 + 72) & 0x80000000) == 0 ||
                 (*(_DWORD*)(v22 + 104) & 0x80000000) == 0)) {
              *(_BYTE*)(v22 + 76) = 1;
            }
            *(float*)(v22 + 272) = a3;
          }
        }
        return result;
      }
    }
  }
  return result;
}

__int64 MapAnimModule_c09420(__int64 result, int a2, long double a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  unsigned __int8 explicit;
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  float v17;
  __int64 v18;
  unsigned __int8 v19;
  int* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 i;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;

  if (*(_BYTE*)(result + 21) == 1) {
    v3 = *(_QWORD*)(result + 8);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea90,
                                    memory_order_acquire);
    v5 = GameData_212ea88;
    if ((explicit & 1) == 0) {
      v29 = LODWORD(a3);
      v30 = v3;
      v36 = result;
      v35 = a2;
      v31 = __cxa_guard_acquire(GameData_212ea90);
      a2 = v35;
      v32 = v31;
      result = v36;
      LODWORD(a3) = v29;
      v3 = v30;
      if (v32 != 0) {
        *v5 = wld_Crc32_alt1(0, "AnimCtrlModule", 0xEu);
        __cxa_guard_release(GameData_212ea90);
        a2 = v35;
        result = v36;
        LODWORD(a3) = v29;
        v3 = v30;
      }
    }
    v7 = *(_QWORD*)(v3 + 504);
    v6 = *(_QWORD*)(v3 + 512);
    v8 = v6;
    v9 = v6;
    while (v9 != v7) {
      v10 = *(_DWORD*)(v9 - 16);
      v9 -= 16;
      v8 -= 16;
      if (v10 == *v5) {
        if (v6 != v8) {
          v11 = *(_QWORD*)(v8 + 8);
          if (v11 != 0) {
            v12 = *(_QWORD*)(*(_QWORD*)(v11 + 72) + 104LL * a2);
            if (v12 != 0) {
              v13 = *(_QWORD*)(v12 + 16);
              if (v13 != 0) {
                v14 = LODWORD(a3);
                v15 = result;
                v16 = a2;
                v17 = (*(float (**)(_QWORD, long double, float, float))(
                    v13 + 16))(*(_QWORD*)(v13 + 24), a3, *(float*)(v13 + 4),
                               *(float*)(v13 + 8));
                LODWORD(a3) = v14;
                a2 = v16;
                result = v15;
                *(float*)v13 = v17;
                *(_WORD*)(v12 + 168) = 0;
              }
            }
            *(_BYTE*)(v11 + 249) = 1;
          }
        }
        break;
      }
    }
  }
  if (a2 == 0 && (*(_BYTE*)(result + 22) & 1) != 0) {
    v18 = *(_QWORD*)(result + 8);
    v19 = atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                               memory_order_acquire);
    v20 = GameData_212ea98;
    if ((v19 & 1) == 0) {
      v33 = LODWORD(a3);
      v34 = v18;
      result = __cxa_guard_acquire(GameData_212eaa0);
      LODWORD(a3) = v33;
      v18 = v34;
      if ((_DWORD)result != 0) {
        *v20 = wld_Crc32_alt1(0, "MaterialAnimModule", 0x12u);
        result = __cxa_guard_release(GameData_212eaa0);
        LODWORD(a3) = v33;
        v18 = v34;
      }
    }
    v22 = *(_QWORD*)(v18 + 504);
    v21 = *(_QWORD*)(v18 + 512);
    v23 = v21;
    for (i = v21; i != v22; i -= 16) {
      v25 = *(_DWORD*)(i - 16);
      v23 -= 16;
      if (v25 == *v20) {
        if (v21 != v23) {
          v26 = *(_QWORD*)(v23 + 8);
          if (v26 != 0) {
            if ((*(_BYTE*)(v26 + 76) & 1) == 0 &&
                ((*(_DWORD*)(v26 + 72) & 0x80000000) == 0 ||
                 (*(_DWORD*)(v26 + 104) & 0x80000000) == 0)) {
              *(_BYTE*)(v26 + 76) = 1;
            }
            v27 = *(_DWORD*)(v26 + 268);
            *(_DWORD*)(v26 + 264) = LODWORD(a3);
            if (v27 == 0) {
              v28 = *(unsigned int*)(v26 + 72);
              if ((v28 & 0x80000000) == 0) {
                *(float*)(*(_QWORD*)(v26 + 24) + (v28 << 6) + 24) =
                    *(float*)&a3 * 0x1.1111120000000p-6f;
              }
            }
          }
        }
        return result;
      }
    }
  }
  return result;
}

__int64 MapAnimModule_c096a0(__int64 result, int a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int8 explicit;
  int* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  float v15;
  __int64 v16;
  unsigned __int8 v17;
  int* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  float v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  if (*(_BYTE*)(result + 21) == 1) {
    v2 = *(_QWORD*)(result + 8);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea90,
                                    memory_order_acquire);
    v4 = GameData_212ea88;
    if ((explicit & 1) == 0) {
      v28 = a2;
      v33 = result;
      v32 = v2;
      v29 = __cxa_guard_acquire(GameData_212ea90);
      v2 = v32;
      v30 = v29;
      result = v33;
      a2 = v28;
      if (v30 != 0) {
        *v4 = wld_Crc32_alt1(0, "AnimCtrlModule", 0xEu);
        __cxa_guard_release(GameData_212ea90);
        v2 = v32;
        result = v33;
        a2 = v28;
      }
    }
    v6 = *(_QWORD*)(v2 + 504);
    v5 = *(_QWORD*)(v2 + 512);
    v7 = v5;
    v8 = v5;
    while (v8 != v6) {
      v9 = *(_DWORD*)(v8 - 16);
      v8 -= 16;
      v7 -= 16;
      if (v9 == *v4) {
        if (v5 != v7) {
          v10 = *(_QWORD*)(v7 + 8);
          if (v10 != 0) {
            v11 = *(_QWORD*)(*(_QWORD*)(v10 + 72) + 104LL * a2);
            if (v11 != 0) {
              v12 = *(_QWORD*)(v11 + 16);
              if (v12 != 0) {
                v13 = result;
                v14 = a2;
                v15 = (*(float (**)(_QWORD, float, float, float))(v12 + 16))(
                    *(_QWORD*)(v12 + 24), *(float*)(v12 + 8),
                    *(float*)(v12 + 4), *(float*)(v12 + 8));
                a2 = v14;
                result = v13;
                *(float*)v12 = v15;
                *(_WORD*)(v11 + 168) = 0;
              }
            }
            *(_BYTE*)(v10 + 249) = 1;
          }
        }
        break;
      }
    }
  }
  if (a2 == 0 && (*(_BYTE*)(result + 22) & 1) != 0) {
    v16 = *(_QWORD*)(result + 8);
    v17 = atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                               memory_order_acquire);
    v18 = GameData_212ea98;
    if ((v17 & 1) == 0) {
      v31 = v16;
      result = __cxa_guard_acquire(GameData_212eaa0);
      v16 = v31;
      if ((_DWORD)result != 0) {
        *v18 = wld_Crc32_alt1(0, "MaterialAnimModule", 0x12u);
        result = __cxa_guard_release(GameData_212eaa0);
        v16 = v31;
      }
    }
    v20 = *(_QWORD*)(v16 + 504);
    v19 = *(_QWORD*)(v16 + 512);
    v21 = v19;
    v22 = v19;
    do {
      if (v22 == v20) {
        return result;
      }
      v23 = *(_DWORD*)(v22 - 16);
      v22 -= 16;
      v21 -= 16;
    } while (v23 != *v18);
    if (v19 != v21) {
      v24 = *(_QWORD*)(v21 + 8);
      if (v24 != 0) {
        v25 = *(unsigned int*)(v24 + 72);
        if ((*(_BYTE*)(v24 + 76) & 1) == 0) {
          if ((v25 & 0x80000000) != 0 &&
              (*(_DWORD*)(v24 + 104) & 0x80000000) != 0) {
            goto LABEL_27;
          }
          *(_BYTE*)(v24 + 76) = 1;
        }
        if ((v25 & 0x80000000) == 0) {
          v26 = *(_DWORD*)(v24 + 268);
          v27 = *(float*)(*(_QWORD*)(v24 + 24) + (v25 << 6) + 28) *
                0x1.e000000000000p+5f;
          *(float*)(v24 + 264) = v27;
          if (v26 == 0) {
            *(float*)(*(_QWORD*)(v24 + 24) + (v25 << 6) + 24) =
                v27 * 0x1.1111120000000p-6f;
          }
          return result;
        }
      LABEL_27:
        *(_DWORD*)(v24 + 264) = 0;
      }
    }
  }
  return result;
}

__int64 MapAnimModule_c09920(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int8 explicit;
  int* v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8 v14;
  int* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 i;
  int v21;
  __int64 v22;
  float v24;
  bool v25;
  float v26;
  int v27;
  int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  char v33;

  if (*(_BYTE*)(a1 + 21) == 1) {
    v2 = *(_QWORD*)(a1 + 8);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea90,
                                    memory_order_acquire);
    v4 = GameData_212ea88;
    if ((explicit & 1) == 0) {
      v32 = a1;
      v29 = v2;
      v30 = a2;
      v27 = __cxa_guard_acquire(GameData_212ea90);
      v4 = GameData_212ea88;
      v2 = v29;
      a2 = v30;
      a1 = v32;
      if (v27 != 0) {
        *GameData_212ea88 = wld_Crc32_alt1(0, "AnimCtrlModule", 0xEu);
        __cxa_guard_release(GameData_212ea90);
        v4 = GameData_212ea88;
        v2 = v29;
        a2 = v30;
        a1 = v32;
      }
    }
    v5 = *v4;
    v7 = *(_QWORD*)(v2 + 504);
    v6 = *(_QWORD*)(v2 + 512);
    v8 = v6;
    v9 = v6;
    while (v9 != v7) {
      v10 = *(_DWORD*)(v9 - 16);
      v9 -= 16;
      v8 -= 16;
      if (v10 == v5) {
        if (v6 == v8) {
          break;
        }
        v11 = *(_QWORD*)(v8 + 8);
        if (v11 == 0) {
          goto LABEL_12;
        }
        v12 = *(_QWORD*)(v11 + 72);
        v11 = *(_QWORD*)(v12 + 104LL * a2);
        if (v11 == 0) {
          goto LABEL_12;
        }
        v11 = *(_QWORD*)(v11 + 16);
        if (v11 == 0) {
          goto LABEL_12;
        }
        if (*(__int64 (**)(void))(v11 + 16) == eft_ClampCurve_ptr) {
          v24 = *(float*)(v12 + 104LL * a2 + 8);
          v25 = v24 < 0x0.0p+0f;
          if (v24 != 0x0.0p+0f) {
            v26 = *(float*)v11;
            if (v25) {
              LOBYTE(v11) = v26 > 0x1.0000000000000p-23f;
            }
            else {
              LOBYTE(v11) =
                  v26 < (float)(*(float*)(v11 + 8) + -0x1.0000000000000p-23f);
            }
            goto LABEL_12;
          }
        }
        break;
      }
    }
  }
  LOBYTE(v11) = 0;
LABEL_12:
  if (a2 == 0 && (*(_BYTE*)(a1 + 22) & 1) != 0) {
    v13 = *(_QWORD*)(a1 + 8);
    v14 = atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                               memory_order_acquire);
    v15 = GameData_212ea98;
    if ((v14 & 1) == 0) {
      v33 = v11;
      v31 = v13;
      v28 = __cxa_guard_acquire(GameData_212eaa0);
      v15 = GameData_212ea98;
      v13 = v31;
      LOBYTE(v11) = v33;
      if (v28 != 0) {
        *GameData_212ea98 = wld_Crc32_alt1(0, "MaterialAnimModule", 0x12u);
        __cxa_guard_release(GameData_212eaa0);
        v15 = GameData_212ea98;
        v13 = v31;
        LOBYTE(v11) = v33;
      }
    }
    v16 = *v15;
    v18 = *(_QWORD*)(v13 + 504);
    v17 = *(_QWORD*)(v13 + 512);
    v19 = v17;
    for (i = v17; i != v18; i -= 16) {
      v21 = *(_DWORD*)(i - 16);
      v19 -= 16;
      if (v21 == v16) {
        if (v17 != v19) {
          v22 = *(_QWORD*)(v19 + 8);
          if (v22 != 0) {
            LOBYTE(v11) = v11 | *(_BYTE*)(v22 + 76);
          }
        }
        return v11 & 1;
      }
    }
  }
  return v11 & 1;
}

__int64 MapAnimModule_Unknown5(__int64 result)
{
  __int64 v1;
  long double v2;
  __int64 v3;
  __int64 v4;

  if (*(_BYTE*)(result + 22) == 1) {
    v1 = result;
    if ((*(_BYTE*)(result + 59) & 1) != 0 &&
        (*(_BYTE*)(result + 56) & 1) != 0) {
      result = GameRoutine_c09920(result, 0);
      if ((result & 1) != 0) {
        v3 = *(
            _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                8LL) +
                     40LL);
        v4 = 296;
        if ((*(_BYTE*)(v3 + 352) & 1 | ((*(_BYTE*)(v3 + 344) & 1) == 0)) != 0) {
          v4 = 248;
        }
        *(float*)&v2 =
            (float)((float)((float)((float)*(int*)(v3 + v4 + 40) / 60.0) +
                            (float)*(int*)(v3 + v4 + 36)) +
                    (float)((float)*(int*)(v3 + v4 + 44) / 3600.0)) *
            100.0;
        return GameRoutine_c09420(v1, 0, v2);
      }
    }
  }
  return result;
}

__int64 MapAnimModule_c09f40(__int64 a1, __int64* a2)
{
  __int64* v4;
  __int64 v5;
  unsigned __int8 explicit;
  int* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  _BYTE* v16;
  bool v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD v47[2];

  nn_os_LockMutex_alt1((__int64)GameData_212df28);
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 400, 16, 0);
  GameHr_a76440(v5, a1, *a2, 4);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea90,
                                  memory_order_acquire);
  v7 = GameData_212ea88;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212ea90) != 0) {
    *v7 = wld_Crc32_alt1(0, "AnimCtrlModule", 0xEu);
    __cxa_guard_release_alt1((__int64)GameData_212ea90);
  }
  v8 = *v7;
  v9 = *(_QWORD*)(a1 + 504);
  v10 = *(_QWORD*)(a1 + 512);
  v11 = v10;
  LODWORD(v47[0]) = v8;
  v47[1] = v5;
  while (v11 != v9) {
    v12 = *(_DWORD*)(v11 - 16);
    v11 -= 16;
    if (v12 == v8) {
      if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v9 == v10 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v9) <= 0x6F) {
    v13 = fw_memory_HeapManager_Allocate_alt1(*v4, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v13;
    *(_QWORD*)(a1 + 512) = v13;
    *(_QWORD*)(a1 + 520) = v13 + 112;
    if (v10 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v4 + v14, v9);
    }
  }
  GameRoutine_98f140_alt2((__int64*)(a1 + 504), v47);
  if ((*(_BYTE*)(v5 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v5 + 16) = 1;
    *(_BYTE*)(v5 + 17) &= ~2u;
    *(_BYTE*)(v5 + 18) &= ~2u;
    *(_BYTE*)(v5 + 19) &= ~2u;
    *(_BYTE*)(v5 + 20) &= ~2u;
    v15 = *(_BYTE**)(v5 + 8);
    v15[632] = 0;
    v15[664] = 0;
    v15[696] = 0;
    v15[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 64LL))(v5);
    v16 = *(_BYTE**)(v5 + 8);
    v17 = v16[300] == 3 && v16[301] == 3;
    if (v17 || v16[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 72LL))(v5);
    }
  }
LABEL_20:
  v18 = *(__int64**)(a1 + 536);
  v19 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v18 >= v19) {
    v21 = *(_QWORD*)(a1 + 528);
    v22 = (char*)v18 - v21;
    v23 = ((__int64)v18 - v21) >> 3;
    v24 = v23 + 1;
    if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v25 = v19 - v21;
    if (v25 >> 2 > v24) {
      v24 = v25 >> 2;
    }
    if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v24;
    }
    if (v26 != 0) {
      if (v26 >> 61 != 0) {
        goto LABEL_56;
      }
      v27 = fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v26, 16, 0);
    }
    else {
      v27 = 0;
    }
    v28 = v27 + 8 * v26;
    v29 = (unsigned __int64)v18 - v21;
    v30 = (__int64)&v22[v27 + -8 * v23];
    *(_QWORD*)&v22[v27] = v5;
    v20 = (__int64)&v22[v27 + 8];
    memcpy_alt1(v30, v21, v29);
    *(_QWORD*)(a1 + 528) = v30;
    *(_QWORD*)(a1 + 536) = v20;
    *(_QWORD*)(a1 + 544) = v28;
    if (v21 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v4 + v31, v21);
    }
  }
  else {
    *v18 = v5;
    v20 = (__int64)(v18 + 1);
  }
  *(_QWORD*)(a1 + 536) = v20;
  v32 = *(__int64**)(a1 + 560);
  v33 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v32 < v33) {
    *v32 = v5;
    v34 = (__int64)(v32 + 1);
    goto LABEL_52;
  }
  v35 = *(_QWORD*)(a1 + 552);
  v36 = (char*)v32 - v35;
  v37 = ((__int64)v32 - v35) >> 3;
  v38 = v37 + 1;
  if ((unsigned __int64)(v37 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v39 = v33 - v35;
  if (v39 >> 2 > v38) {
    v38 = v39 >> 2;
  }
  if ((unsigned __int64)v39 >= 0x7FFFFFFFFFFFFFF8LL) {
    v40 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v40 = v38;
  }
  if (v40 != 0) {
    if (v40 >> 61 == 0) {
      v41 = fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v40, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v41 = 0;
LABEL_48:
  v42 = v41 + 8 * v40;
  v43 = (unsigned __int64)v32 - v35;
  v44 = (__int64)&v36[v41 + -8 * v37];
  *(_QWORD*)&v36[v41] = v5;
  v34 = (__int64)&v36[v41 + 8];
  memcpy_alt1(v44, v35, v43);
  *(_QWORD*)(a1 + 552) = v44;
  *(_QWORD*)(a1 + 560) = v34;
  *(_QWORD*)(a1 + 568) = v42;
  if (v35 != 0) {
    v45 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v4 + v45, v35);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v34;
  GameRoutine_a8c0c0_alt2(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
  return v5;
}

__int64* MapAnimModule_c0a320(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int64* v5;
  unsigned __int64 v6;
  char* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64** v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  _QWORD* v23;
  char v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  float v38;
  _BOOL8 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 primeEm;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64* v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  bool v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  struct {
    __int64 v62;
    unsigned __int64 v63;
    char* v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
  } v62_;

  v5 = GameRoutine_c0ac40((_QWORD*)(a1 + 64), (unsigned __int8*)a2);
  if (v5 == nullptr) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(&v62_.v62, a2[2], a2[1]);
    }
    else {
      v6 = a2[1];
      v62_.v62 = *a2;
      v62_.v63 = v6;
      v62_.v64 = (char*)a2[2];
    }
    v62_.v72 = 0;
    v62_.v73 = 0;
    v62_.v70 = 0;
    v62_.v71 = 0;
    v62_.v68 = 0;
    v62_.v69 = 0;
    v62_.v66 = 0;
    v62_.v67 = 0;
    v62_.v65 = 0;
    if ((v62_.v62 & 1) != 0) {
      v7 = v62_.v64;
    }
    else {
      v7 = (char*)&v62_.v62 + 1;
    }
    if ((v62_.v62 & 1) != 0) {
      v8 = v62_.v63;
    }
    else {
      v8 = (unsigned __int64)(unsigned __int8)v62_.v62 >> 1;
    }
    v9 = std___1___hash_memory_alt1((__int64)v7, v8);
    v10 = *(_QWORD*)(a1 + 72);
    v11 = v9;
    if (v10 != 0) {
      v12 = v10 - 1;
      if ((v10 & (v10 - 1)) != 0) {
        v2 = v9;
        if (v9 >= v10) {
          v2 = v9 % v10;
        }
      }
      else {
        v2 = v12 & v9;
      }
      v13 = *(__int64***)(*(_QWORD*)(a1 + 64) + 8 * v2);
      if (v13 != nullptr) {
        v14 = *v13;
        if (*v13 != nullptr) {
          if ((v10 & v12) == 0) {
            while (1) {
              v19 = v14[1];
              if (v19 == v11) {
                v20 = *((unsigned __int8*)v14 + 16);
                v21 = v14[3];
                if ((v20 & 1) == 0) {
                  v21 = v20 >> 1;
                }
                if (v21 == v8) {
                  v22 = (v20 & 1) != 0 ? v14[4] : (__int64)v14 + 17;
                  if (memcmp_alt1(v22, (__int64)v7, v8) == 0) {
                    goto LABEL_90;
                  }
                }
              }
              else if ((v19 & v12) != v2) {
                goto LABEL_45;
              }
              v14 = (__int64*)*v14;
              if (v14 == nullptr) {
                goto LABEL_45;
              }
            }
          }
          do {
            v15 = v14[1];
            if (v15 == v11) {
              v16 = *((unsigned __int8*)v14 + 16);
              v17 = v14[3];
              if ((v16 & 1) == 0) {
                v17 = v16 >> 1;
              }
              if (v17 == v8) {
                v18 = (v16 & 1) != 0 ? v14[4] : (__int64)v14 + 17;
                if (memcmp_alt1(v18, (__int64)v7, v8) == 0) {
                  goto LABEL_90;
                }
              }
            }
            else {
              if (v15 >= v10) {
                v15 %= v10;
              }
              if (v15 != v2) {
                break;
              }
            }
            v14 = (__int64*)*v14;
          } while (v14 != nullptr);
        }
      }
    }
  LABEL_45:
    v23 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
    v24 = v62_.v62;
    v25 = v23;
    *v23 = 0;
    v23[1] = v11;
    if ((v24 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v23 + 2, (__int64)v62_.v64, v62_.v63);
    }
    else {
      v26 = v62_.v63;
      v23[2] = v62_.v62;
      v23[3] = v26;
      v23[4] = v62_.v64;
    }
    v27 = v62_.v65;
    v28 = v62_.v66;
    v29 = v62_.v72;
    v30 = v62_.v73;
    v31 = *(float*)(a1 + 96);
    v62_.v65 = 0;
    v62_.v66 = 0;
    v25[5] = v27;
    v25[6] = v28;
    v32 = v62_.v70;
    v33 = v62_.v71;
    v34 = v62_.v67;
    v62_.v67 = 0;
    v25[13] = v30;
    v25[11] = v33;
    v25[12] = v29;
    v35 = v62_.v68;
    v36 = v62_.v69;
    v25[7] = v34;
    v25[8] = v35;
    v37 = *(_QWORD*)(a1 + 88);
    v25[9] = v36;
    v25[10] = v32;
    v38 = (float)(unsigned __int64)(v37 + 1);
    if (v10 == 0 || (float)(v31 * (float)v10) < v38) {
      v39 = v10 < 3 || (v10 & (v10 - 1)) != 0;
      v40 = v39 | (2 * v10);
      v41 = vcvtps_u64_f32(v38 / v31);
      if (v40 <= v41) {
        primeEm = v41;
      }
      else {
        primeEm = v40;
      }
      if (primeEm == 1) {
        primeEm = 2;
      }
      else if ((primeEm & (primeEm - 1)) != 0) {
        primeEm = std___1___next_prime(primeEm);
      }
      v43 = *(_QWORD*)(a1 + 72);
      if (primeEm > v43) {
        goto LABEL_61;
      }
      if (primeEm < v43) {
        v44 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 88) /
                             *(float*)(a1 + 96));
        if (v43 < 3 || (v43 & (v43 - 1)) != 0) {
          v44 = std___1___next_prime(v44);
        }
        else {
          v45 = 1LL << -(char)__clz(v44 - 1);
          if (v44 >= 2) {
            v44 = v45;
          }
        }
        if (primeEm <= v44) {
          primeEm = v44;
        }
        if (primeEm < v43) {
        LABEL_61:
          GameRoutine_c0ade0((__int64*)(a1 + 64), primeEm);
        }
      }
      v10 = *(_QWORD*)(a1 + 72);
      if ((v10 & (v10 - 1)) != 0) {
        if (v11 >= v10) {
          v2 = v11 % v10;
        }
        else {
          v2 = v11;
        }
      }
      else {
        v2 = (v10 - 1) & v11;
      }
    }
    v46 = *(_QWORD*)(a1 + 64);
    v47 = *(_QWORD**)(v46 + 8 * v2);
    if (v47 != nullptr) {
      *v25 = *v47;
      *v47 = v25;
    }
    else {
      v48 = *(_QWORD*)(a1 + 80);
      *(_QWORD*)(a1 + 80) = v25;
      *v25 = v48;
      *(_QWORD*)(v46 + 8 * v2) = a1 + 80;
      if (*v25 != 0) {
        v49 = *(_QWORD*)(*v25 + 8LL);
        if ((v10 & (v10 - 1)) != 0) {
          if (v49 >= v10) {
            v49 %= v10;
          }
        }
        else {
          v49 &= v10 - 1;
        }
        *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v49) = v25;
      }
    }
    ++*(_QWORD*)(a1 + 88);
    if ((v62_.v65 & 1) != 0 && v62_.v67 != 0) {
      v50 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v50 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v50, v62_.v67);
    }
  LABEL_90:
    if ((v62_.v62 & 1) != 0 && v62_.v64 != nullptr) {
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, (__int64)v62_.v64);
    }
    v52 = GameRoutine_c0ac40((_QWORD*)(a1 + 64), (unsigned __int8*)a2);
    if (v52 == nullptr) {
      goto LABEL_110;
    }
    v53 = v52 + 5;
    if (v53 != a2) {
      v54 = *(unsigned __int8*)a2;
      if ((*(_BYTE*)v53 & 1) != 0) {
        v57 = (v54 & 1) == 0;
        v58 = v54 >> 1;
        if (v57) {
          v59 = (__int64)a2 + 1;
        }
        else {
          v59 = a2[2];
        }
        if (v57) {
          v60 = v58;
        }
        else {
          v60 = a2[1];
        }
        SpineModel_64dde0(v53, v59, v60);
      }
      else if ((v54 & 1) != 0) {
        GameRoutine_64df20(v53, a2[2], a2[1]);
      }
      else {
        v55 = *a2;
        v56 = a2[2];
        v53[1] = a2[1];
        v53[2] = v56;
        *v53 = v55;
      }
    }
    v5 = GameRoutine_c0ac40((_QWORD*)(a1 + 64), (unsigned __int8*)a2);
    if (v5 == nullptr) {
    LABEL_110:
      String_60a250("unordered_map::at: key not found");
    }
  }
  return v5 + 5;
}

__int64 MapAnimModule_c0a840(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  unsigned __int8 explicit;
  int* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  bool v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD v45[2];

  nn_os_LockMutex_alt1((__int64)GameData_212df28);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 280, 16, 0);
  MaterialAnimModule_be3840(v3, a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                                  memory_order_acquire);
  v5 = GameData_212ea98;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212eaa0) != 0) {
    *v5 = wld_Crc32_alt1(0, "MaterialAnimModule", 0x12u);
    __cxa_guard_release_alt1((__int64)GameData_212eaa0);
  }
  v6 = *v5;
  v7 = *(_QWORD*)(a1 + 504);
  v8 = *(_QWORD*)(a1 + 512);
  v9 = v8;
  LODWORD(v45[0]) = v6;
  v45[1] = v3;
  while (v9 != v7) {
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16;
    if (v10 == v6) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v7 == v8 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v7) <= 0x6F) {
    v11 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v11;
    *(_QWORD*)(a1 + 512) = v11;
    *(_QWORD*)(a1 + 520) = v11 + 112;
    if (v8 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v12, v7);
    }
  }
  GameRoutine_98f140_alt2((__int64*)(a1 + 504), v45);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v13 = *(_BYTE**)(v3 + 8);
    v13[632] = 0;
    v13[664] = 0;
    v13[696] = 0;
    v13[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v14 = *(_BYTE**)(v3 + 8);
    v15 = v14[300] == 3 && v14[301] == 3;
    if (v15 || v14[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }
LABEL_20:
  v16 = *(__int64**)(a1 + 536);
  v17 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v16 >= v17) {
    v19 = *(_QWORD*)(a1 + 528);
    v20 = (char*)v16 - v19;
    v21 = ((__int64)v16 - v19) >> 3;
    v22 = v21 + 1;
    if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v23 = v17 - v19;
    if (v23 >> 2 > v22) {
      v22 = v23 >> 2;
    }
    if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v22;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        goto LABEL_56;
      }
      v25 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v27 = (unsigned __int64)v16 - v19;
    v28 = (__int64)&v20[v25 + -8 * v21];
    *(_QWORD*)&v20[v25] = v3;
    v18 = (__int64)&v20[v25 + 8];
    memcpy_alt1(v28, v19, v27);
    *(_QWORD*)(a1 + 528) = v28;
    *(_QWORD*)(a1 + 536) = v18;
    *(_QWORD*)(a1 + 544) = v26;
    if (v19 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v29, v19);
    }
  }
  else {
    *v16 = v3;
    v18 = (__int64)(v16 + 1);
  }
  *(_QWORD*)(a1 + 536) = v18;
  v30 = *(__int64**)(a1 + 560);
  v31 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v30 < v31) {
    *v30 = v3;
    v32 = (__int64)(v30 + 1);
    goto LABEL_52;
  }
  v33 = *(_QWORD*)(a1 + 552);
  v34 = (char*)v30 - v33;
  v35 = ((__int64)v30 - v33) >> 3;
  v36 = v35 + 1;
  if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v37 = v31 - v33;
  if (v37 >> 2 > v36) {
    v36 = v37 >> 2;
  }
  if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
    v38 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v38 = v36;
  }
  if (v38 != 0) {
    if (v38 >> 61 == 0) {
      v39 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v38, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v39 = 0;
LABEL_48:
  v40 = v39 + 8 * v38;
  v41 = (unsigned __int64)v30 - v33;
  v42 = (__int64)&v34[v39 + -8 * v35];
  *(_QWORD*)&v34[v39] = v3;
  v32 = (__int64)&v34[v39 + 8];
  memcpy_alt1(v42, v33, v41);
  *(_QWORD*)(a1 + 552) = v42;
  *(_QWORD*)(a1 + 560) = v32;
  *(_QWORD*)(a1 + 568) = v40;
  if (v33 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v43, v33);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v32;
  GameRoutine_a8c0c0_alt2(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
  return v3;
}

void MapAnimModule_c0b4e0(__int64 a1, unsigned __int8* a2, char* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64** v15;
  __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  _QWORD* v26;
  char v27;
  _QWORD* v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  _BOOL8 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 primeEm;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  unsigned __int64 v61;

  v4 = *a2;
  v7 = (v4 & 1) == 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = (__int64)(a2 + 1);
  }
  else {
    v9 = *((_QWORD*)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  v11 = std___1___hash_memory_alt1(v9, v10);
  v12 = *(_QWORD*)(a1 + 8);
  v13 = v11;
  if (v12 != 0) {
    v14 = v12 - 1;
    if ((v12 & (v12 - 1)) != 0) {
      v3 = v11;
      if (v11 >= v12) {
        v3 = v11 % v12;
      }
    }
    else {
      v3 = v14 & v11;
    }
    v15 = *(__int64***)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = *v15;
      if (*v15 != nullptr) {
        if ((v12 & v14) == 0) {
          while (1) {
            v21 = v16[1];
            if (v21 == v13) {
              v22 = *((unsigned __int8*)v16 + 16);
              v23 = v16[3];
              if ((v22 & 1) == 0) {
                v23 = v22 >> 1;
              }
              if (v23 == v10) {
                v24 = (v22 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
                if (memcmp_alt1(v24, v9, v10) == 0) {
                  return;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = (__int64*)*v16;
            if (v16 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v17 = v16[1];
          if (v17 == v13) {
            v18 = *((unsigned __int8*)v16 + 16);
            v19 = v16[3];
            if ((v18 & 1) == 0) {
              v19 = v18 >> 1;
            }
            if (v19 == v10) {
              v20 = (v18 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
              if (memcmp_alt1(v20, v9, v10) == 0) {
                return;
              }
            }
          }
          else {
            if (v17 >= v12) {
              v17 %= v12;
            }
            if (v17 != v3) {
              break;
            }
          }
          v16 = (__int64*)*v16;
        } while (v16 != nullptr);
      }
    }
  }
LABEL_41:
  v25 = (__int64*)fw_memory_g_heap_manager_ptr;
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v27 = *a3;
  v28 = v26;
  *v26 = 0;
  v26[1] = v13;
  if ((v27 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v26 + 2, *((_QWORD*)a3 + 2),
                                       *((_QWORD*)a3 + 1));
  }
  else {
    v29 = *((_QWORD*)a3 + 1);
    v26[2] = *(_QWORD*)a3;
    v26[3] = v29;
    v26[4] = *((_QWORD*)a3 + 2);
  }
  v30 = *(float*)(a1 + 32);
  *((_WORD*)v28 + 20) = *((_WORD*)a3 + 12);
  *((_BYTE*)v28 + 42) = a3[26];
  v31 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v12 == 0 || (float)(v30 * (float)v12) < v31) {
    v32 = v31 / v30;
    v33 = true;
    if (v12 >= 3) {
      v33 = (v12 & (v12 - 1)) != 0;
    }
    v34 = v33 | (2 * v12);
    v35 = vcvtps_u64_f32(v32);
    if (v34 <= v35) {
      primeEm = v35;
    }
    else {
      primeEm = v34;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v37 = *(_QWORD*)(a1 + 8);
    if (primeEm <= v37) {
      if (primeEm >= v37) {
        goto LABEL_105;
      }
      v43 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v37 < 3 || (v37 & (v37 - 1)) != 0) {
        v43 = std___1___next_prime(v43);
      }
      else {
        v44 = 1LL << -(char)__clz(v43 - 1);
        if (v43 >= 2) {
          v43 = v44;
        }
      }
      if (primeEm <= v43) {
        primeEm = v43;
      }
      if (primeEm >= v37) {
        goto LABEL_105;
      }
      if (primeEm == 0) {
        v56 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v56 != 0) {
          v57 = 128;
          if (*(_QWORD*)(*v25 + 200) == 0) {
            v57 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v25 + v57, v56);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_105;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210_alt1();
    }
    v38 = fw_memory_HeapManager_Allocate_alt1(*v25, 8 * primeEm, 16, 0);
    v39 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v38;
    if (v39 != 0) {
      v40 = 128;
      if (*(_QWORD*)(*v25 + 200) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v25 + v40, v39);
    }
    v41 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v42 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 48) = 0;
        v45 = *(_QWORD*)a1 + 8 * v42;
        v42 += 8;
        *(_QWORD*)(v45 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v42);
    }
    else {
      v42 = 0;
    }
    if ((primeEm & 7) != 0) {
      v46 = 8 * v42;
      do {
        --v41;
        *(_QWORD*)(*(_QWORD*)a1 + v46) = 0;
        v46 += 8;
      } while (v41 != 0);
    }
    v48 = a1 + 16;
    v47 = *(_QWORD**)(a1 + 16);
    if (v47 != nullptr) {
      v49 = v47[1];
      v50 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v49 >= primeEm) {
          v49 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v49) = v48;
        v51 = (_QWORD*)*v47;
        if (*v47 == 0) {
          goto LABEL_105;
        }
        while (1) {
          v52 = v51[1];
          if (v52 >= primeEm) {
            v52 %= primeEm;
          }
          if (v52 != v49) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v52) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = v47;
              goto LABEL_82;
            }
            *v47 = *v51;
            *v51 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v52);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v52) = v51;
            v51 = v47;
          }
          v52 = v49;
        LABEL_82:
          v47 = v51;
          v51 = (_QWORD*)*v51;
          v49 = v52;
          if (v51 == nullptr) {
            goto LABEL_105;
          }
        }
      }
      v53 = v49 & v50;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v53) = v48;
      while (1) {
        v54 = (_QWORD*)*v47;
        if (*v47 == 0) {
          break;
        }
        v55 = v54[1] & v50;
        if (v55 == v53) {
          v47 = (_QWORD*)*v47;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v55) != 0) {
          *v47 = *v54;
          *v54 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v55);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v55) = v54;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v55) = v47;
          v47 = v54;
          v53 = v55;
        }
      }
    }
  LABEL_105:
    v12 = *(_QWORD*)(a1 + 8);
    if ((v12 & (v12 - 1)) != 0) {
      if (v13 >= v12) {
        v3 = v13 % v12;
      }
      else {
        v3 = v13;
      }
    }
    else {
      v3 = (v12 - 1) & v13;
    }
  }
  v58 = *(_QWORD*)a1;
  v59 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v59 != nullptr) {
    *v28 = *v59;
    *v59 = v28;
  }
  else {
    v60 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v28;
    *v28 = v60;
    *(_QWORD*)(v58 + 8 * v3) = a1 + 16;
    if (*v28 != 0) {
      v61 = *(_QWORD*)(*v28 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v61 >= v12) {
          v61 %= v12;
        }
      }
      else {
        v61 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v61) = v28;
    }
  }
  ++*(_QWORD*)(a1 + 24);
}

__int64 wld_MapAnimModule_initializeMaterialTable_lambda0_Invoke(__int64 result,
                                                                 _BYTE* a2)
{
  *(_BYTE*)(*(_QWORD*)(result + 8) + 22LL) = *a2;
  return result;
}

#pragma GCC visibility pop
