#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_c46f00(_QWORD* result, unsigned __int64);
__int64 GameRoutine_5fc1f0(_QWORD);
__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 GameRoutine_a934d0(_QWORD, _QWORD);
__int64 GameRoutine_b86ad0(_QWORD);
__int64 GameRoutine_bdff40(_QWORD, _QWORD);
__int64 GameRoutine_c3f7a0(_QWORD);
__int64 GameRoutine_c4a5a0(_QWORD);
__int64 Manager_c47290(_QWORD);
__int64 Manager_c473c0(_QWORD, _QWORD);
__int64 Manager_c475a0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_1fbf780[])();
extern __int64 (*GameData_1fd20c0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_c47250(_QWORD);
void __attribute__((noreturn)) GameRoutine_c47270(_QWORD);
void __attribute__((noreturn)) GameRoutine_c47790(_QWORD);
__int64 wld_GfxLoader_loadFile(__int64 a1, unsigned __int8* a2, unsigned int a3,
                               __int64 a4, char a5);
__int64 GfxLoader_c46500_alt1(__int64 a1,
                              __int64 a2) __asm__("GfxLoader_c46500");
__int64 wld_GfxLoader_loadSunPrecomputeData_lambda0_Invoke_alt1(
    __int64 result,
    __int64 a2) __asm__("wld_GfxLoader_loadSunPrecomputeData_lambda0_Invoke");
__int64 wld_GfxLoader_loadCloudTexture_lambda0_Invoke(__int64 result,
                                                      __int64* a2);
__int64 wld_GfxLoader_loadFogTexture_lambda0_Invoke(__int64 result,
                                                    __int64* a2);
_QWORD* wld_GfxLoader_loadFile_lambda0_Clone(__int64 a1);
__int64 wld_GfxLoader_loadFile_lambda0_Invoke(__int64 a1, __int64* a2);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void GameRoutine_b34420(PSEUDO_X8, _QWORD*, __int64,
                                                   unsigned __int64, __int64,
                                                   unsigned __int64, __int64);
__int64* GameRoutine_6b87d0(__int64* result, unsigned __int64);
__int64* GameRoutine_c4a480(__int64* result, __int64*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2020(unsigned __int16*, _WORD*);
__int64 GameRoutine_21c0(unsigned int*, unsigned int*);
__int64 GameRoutine_2360(unsigned __int64*, unsigned __int64*);
__int64 GameRoutine_5fc1f0_alt1(__int64) __asm__("GameRoutine_5fc1f0");
__int64 GameRoutine_b87160(__int64 result, char, unsigned int);
__int64 GameRoutine_c49860(__int64, __int64);
__int64 GameRoutine_c51760(__int64 result);
__int64 GameRoutine_dbf0(unsigned __int8);
__int64 GameStringReads_c05cc0(__int64**, __int64);
__int64 GfxLoader_c44b50(__int64, __int64, unsigned __int64);
__int64 Manager_c445f0(__int64 result, __int64, unsigned __int64, __int64,
                       unsigned __int64);
__int64 Manager_c45700(__int64*, __int64, __int64, __int64, __int64, __int64,
                       unsigned __int64, __int64, __int64, unsigned __int64,
                       __int64, unsigned __int64, __int64, unsigned __int64);
__int64 Manager_c46910(__int64 result);
__int64 Manager_c47290_alt1(__int64 result) __asm__("Manager_c47290");
__int64 Value_2500(__int64*, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset_alt1(_QWORD, _QWORD, _QWORD) __asm__("memset");
__int64 strlen(_QWORD);
bool GameRoutine_c49640(__int64**, __int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _UNKNOWN* GameData_212ce38;
extern _UNKNOWN GameData_1fd2d60;
extern __int128 GameData_1a82c50;
extern __int64 (*GameData_1fd1ec0[])();
extern __int64 (*GameData_1fd1f40[])();
extern __int64 (*GameData_1fd1fc0[])();
extern __int64 (*GameData_1fd2040[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1a9f09e;
unsigned int* game_6b7f00(unsigned int*, unsigned __int64, unsigned int*,
                          __int64, _QWORD*);
void GameRoutine_c47a00(_QWORD*, __int64*);
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) String_60a1d0();
__int64 GfxLoader_c3f420_alt1(__int64** a1,
                              unsigned __int64* a2) __asm__("GfxLoader_c3f420");
__int64 GfxLoader_c3f900(__int64 a1, __int64 a2);
__int64 wld_GfxLoader_loadFogTexture_alt1(
    __int64 result, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
    char a6) __asm__("wld_GfxLoader_loadFogTexture");
char* wld_GfxLoader_loadSunPrecomputeData_alt1(
    __int64 a1, __int64 a2,
    unsigned __int64 a3) __asm__("wld_GfxLoader_loadSunPrecomputeData");
char* wld_GfxLoader_loadDomeLightTexture_alt1(
    __int64 a1, __int64 a2,
    unsigned __int64 a3) __asm__("wld_GfxLoader_loadDomeLightTexture");
char* wld_GfxLoader_loadCloudTexture_alt1(
    __int64 a1, __int64 a2,
    unsigned __int64 a3) __asm__("wld_GfxLoader_loadCloudTexture");
__int64* GfxLoader_c45e30(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                          __int64 a4, unsigned __int64 a5);
__int64 GfxLoader_c48320(__int64 result, __int64* a2);
float GfxLoader_c48550(_QWORD* a1, __int64* a2);
__int64 wld_GfxLoader_loadDomeLightTexture_lambda0_Invoke(__int64 a1,
                                                          __int64* a2);
__int64 GfxLoader_c49a80_alt1(__int64** a1,
                              __int64* a2) __asm__("GfxLoader_c49a80");
__int64 GfxLoader_c49e60_alt1(__int64** a1,
                              __int64* a2) __asm__("GfxLoader_c49e60");
_QWORD* GfxLoader_c4a6e0(__int64 a1, _QWORD* a2, _QWORD* a3);
__int64 GfxLoader_c4c940(__int64 a1, char a2);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
void __attribute__((noreturn)) GameRoutine_c47230(void);
_QWORD* GfxLoader_c46f00_alt1(_QWORD* result,
                              unsigned __int64 a2) __asm__("GfxLoader_c46f00");
__int64* Manager_c473c0_alt1(__int64, __int64*) __asm__("Manager_c473c0");
__int64 GameRoutine_b86ad0_alt1(__int64) __asm__("GameRoutine_b86ad0");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memset_alt2(__int64, int, unsigned __int64) __asm__("memset");
void GameRoutine_bdff40_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_bdff40");
void GameRoutine_c3f7a0_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_c3f7a0");
void GameRoutine_c4a5a0_alt1(_QWORD*) __asm__("GameRoutine_c4a5a0");
void Manager_c47290_alt2(__int64) __asm__("Manager_c47290");
void Manager_c475a0_alt1(__int64*, _QWORD*) __asm__("Manager_c475a0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_c47230_alt1() __asm__("GameRoutine_c47230");
void __attribute__((noreturn))
GameRoutine_c47250_alt1() __asm__("GameRoutine_c47250");
void __attribute__((noreturn))
GameRoutine_c47270_alt1() __asm__("GameRoutine_c47270");
void __attribute__((noreturn))
GameRoutine_c47790_alt1() __asm__("GameRoutine_c47790");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 GfxLoader_c46500(__int64* a1, __int64 a2);
void GfxLoader_c46f00(__int64* a1, unsigned __int64 a2);
void wld_GfxLoader_loadSunPrecomputeData_lambda0_Invoke(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void
GameRoutine_b34420_alt1(PSEUDO_X8, __int64, __int64, unsigned __int64, __int64,
                        __int64, __int64) __asm__("GameRoutine_b34420");
__int64* GameHr_c4a480(__int64* result, __int64*);
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64
GameRoutine_1a0a680_alt1(__int64, unsigned __int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a0a680");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 timeline_2020(unsigned __int16*, _WORD*);
__int64 timeline_21c0(unsigned int*, unsigned int*);
__int64 timeline_2360(unsigned __int64*, unsigned __int64*);
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 Value_2500_alt1(__int64*, __int64,
                                 unsigned __int64) __asm__("Value_2500");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
unsigned int* game_6b7f00_alt1(unsigned int*, unsigned __int64, unsigned int*,
                               __int64, __int64*) __asm__("game_6b7f00");
void GameHr_c44b50(__int64, __int64, unsigned __int64);
void GameHr_c49860(__int64, __int64**);
void GameRoutine_6b87d0_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_6b87d0");
void GameStringReads_c05cc0_alt1(__int64**,
                                 __int64) __asm__("GameStringReads_c05cc0");
void GfxLoader_c45e30_alt1(_QWORD*, __int64, unsigned __int64, __int64,
                           unsigned __int64) __asm__("GfxLoader_c45e30");
void Manager_c445f0_alt1(__int64, __int64, unsigned __int64, __int64,
                         unsigned __int64) __asm__("Manager_c445f0");
void Manager_c45700_alt1(__int64*, __int64, __int64, __int64, __int64, __int64,
                         unsigned __int64, __int64, __int64, unsigned __int64,
                         __int64, unsigned __int64, __int64,
                         unsigned __int64) __asm__("Manager_c45700");
void Manager_c46910_alt1(__int64) __asm__("Manager_c46910");
void GfxLoader_c3f420(__int64** a1, __int64 a2);
void wld_GfxLoader_loadFogTexture(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, __int64 a5, char a6);
void wld_GfxLoader_loadSunPrecomputeData(__int64 a1, __int64 a2,
                                         unsigned __int64 a3);
void wld_GfxLoader_loadDomeLightTexture(__int64 a1, __int64 a2,
                                        unsigned __int64 a3);
void wld_GfxLoader_loadCloudTexture(__int64 a1, __int64 a2,
                                    unsigned __int64 a3);
void GfxLoader_c49a80(__int64** a1, __int64* a2);
void GfxLoader_c49e60(__int64** a1, __int64* a2);
__int64 GameHr_c6a240(__int64, __int64, __int64);
__int64 LightingAnimModule_c65df0(__int64, __int64, unsigned __int64, __int64,
                                  unsigned __int64, __int64, unsigned __int64,
                                  __int64, __int64, unsigned __int64, __int64,
                                  unsigned __int64);
__int64 LightingAnimModule_c687a0(__int64, char);
void GfxLoader_c45700(__int64* a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                      unsigned __int64 a5, __int64 a6, unsigned __int64 a7,
                      __int64 a8, __int64 a9, unsigned __int64 a10, __int64 a11,
                      unsigned __int64 a12, __int64 a13, unsigned __int64 a14);

void GfxLoader_c3f420(__int64** a1, __int64 a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  int v13;
  char v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  unsigned __int64 v20;
  _BOOL4 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  _QWORD* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  struct {
    unsigned __int64 v41;
    unsigned __int64 v42;
    char* v43;
    __int64 v44;
  } v41_;
  struct {
    unsigned __int64 v45;
    unsigned __int64 v46;
    char* v47;
  } v45_;

  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)&v41_.v41, *(_QWORD*)(a2 + 16),
                                  *(_QWORD*)(a2 + 8));
  }
  else {
    v4 = *(_QWORD*)(a2 + 8);
    v41_.v41 = *(_QWORD*)a2;
    v41_.v42 = v4;
    v41_.v43 = *(char**)(a2 + 16);
  }
  if ((v41_.v41 & 1) != 0) {
    v5 = v41_.v42;
  }
  else {
    v5 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
  }
  if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, (__int64)v41_.v43);
  }
  if (v5 == 0) {
    goto LABEL_50;
  }
  v7 = *a1;
  v41_.v42 = 0;
  v41_.v43 = nullptr;
  v41_.v41 = 0;
  LOWORD(v45_.v45) = 0;
  timeline_2020((unsigned __int16*)v7, &v45_.v45);
  v8 = (__int16)v45_.v45;
  v9 = fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, (__int16)v45_.v45, 16, 0);
  memset_alt2(v10, 0, v8);
  Value_2500_alt1(*a1, v10, v8);
  GameRoutine_60a060((char*)&v41_.v41, v10, (__int16)v45_.v45);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v11, v10);
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)&v45_.v45, *(_QWORD*)(a2 + 16),
                                  *(_QWORD*)(a2 + 8));
  }
  else {
    v12 = *(_QWORD*)(a2 + 8);
    v45_.v45 = *(_QWORD*)a2;
    v45_.v46 = v12;
    v45_.v47 = *(char**)(a2 + 16);
  }
  v13 = v41_.v41 & 1;
  v14 = v45_.v45;
  if (v13 != 0) {
    v15 = v41_.v43;
  }
  else {
    v15 = (char*)&v41_.v41 + 1;
  }
  v16 = (__int64)v45_.v47;
  if ((v41_.v41 & 1) != 0) {
    v17 = v41_.v42;
  }
  else {
    v17 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
  }
  if ((v45_.v45 & 1) != 0) {
    v18 = v45_.v46;
  }
  else {
    v18 = (unsigned __int64)(unsigned __int8)v45_.v45 >> 1;
  }
  if ((v45_.v45 & 1) != 0) {
    v19 = v45_.v47;
  }
  else {
    v19 = (char*)&v45_.v45 + 1;
  }
  if (v17 >= v18) {
    v20 = v18;
  }
  else {
    v20 = v17;
  }
  v22 = memcmp_alt1((__int64)v19, (__int64)v15, v20) == 0 && v18 == v17;
  if ((v14 & 1) != 0 && v16 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v23, v16);
    v13 = v41_.v41 & 1;
  }
  if (v13 != 0 && v41_.v43 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v24, (__int64)v41_.v43);
  }
  if (v22) {
  LABEL_50:
    v25 = *a1;
    v45_.v45 = 0;
    timeline_2360((unsigned __int64*)v25, &v45_.v45);
    v26 = *(_QWORD**)(a2 + 24);
    v27 = v26[1];
    v28 = 0xAAAAAAAAAAAAAAABLL * ((v27 - *v26) >> 3);
    if (v45_.v45 <= v28) {
      if (v45_.v45 < v28) {
        v29 = *v26 + 24 * v45_.v45;
        if (v29 != v27) {
          v30 = v26[1];
          v31 = fw_memory_g_heap_manager_ptr;
          do {
            v32 = *(_BYTE*)(v30 - 24);
            v30 -= 24;
            if ((v32 & 1) != 0) {
              v33 = *(_QWORD*)(v27 - 8);
              if (v33 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) != 0) {
                  v34 = 128;
                }
                else {
                  v34 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v31 + v34, v33);
              }
            }
            v27 = v30;
          } while (v30 != v29);
        }
        v26[1] = v29;
      }
    }
    else {
      GameRoutine_6b87d0_alt1(*(__int64**)(a2 + 24), v45_.v45 - v28);
    }
    v35 = *(_QWORD*)(*(_QWORD*)(a2 + 24) + 8LL) - **(_QWORD**)(a2 + 24);
    if (v35 != 0) {
      v36 = 0;
      v37 = fw_memory_g_heap_manager_ptr;
      v38 = 0xAAAAAAAAAAAAAAABLL * (v35 >> 3);
      do {
        v39 = **(_QWORD**)(a2 + 24);
        LOWORD(v41_.v41) = 0;
        v41_.v44 = v39 + v36;
        GameStringReads_c05cc0_alt1(a1, (__int64)&v41_.v41);
        if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) != 0) {
            v40 = 128;
          }
          else {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v37 + v40,
                                             (__int64)v41_.v43);
        }
        --v38;
        v36 += 24;
      } while (v38 != 0);
    }
  }
}

__int64 GfxLoader_c3f900(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v10;
  _BYTE* v11;
  int v12;
  struct {
    _QWORD v14[2];
    int v15;
  } v14_;

  *(_WORD*)(a1 + 48) = 0;
  *(_WORD*)(a1 + 72) = 0;
  *(_BYTE*)(a1 + 96) = 0;
  *(_BYTE*)(a1 + 120) = 0;
  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_WORD*)(a1 + 24) = 0;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1640, 16, 0);
  memset_alt1(v3, 0, 1640);
  *(_QWORD*)(a1 + 128) = v3;
  *(_BYTE*)(a1 + 136) = 0;
  *(_BYTE*)(a1 + 160) = 0;
  *(_BYTE*)(a1 + 168) = 0;
  *(_BYTE*)(a1 + 192) = 0;
  *(_BYTE*)(a1 + 200) = 0;
  *(_BYTE*)(a1 + 224) = 0;
  *(_BYTE*)(a1 + 232) = 0;
  *(_BYTE*)(a1 + 256) = 0;
  *(_BYTE*)(a1 + 264) = 0;
  *(_BYTE*)(a1 + 288) = 0;
  *(_BYTE*)(a1 + 296) = 0;
  *(_BYTE*)(a1 + 320) = 0;
  *(_BYTE*)(a1 + 328) = 0;
  *(_BYTE*)(a1 + 352) = 0;
  *(_BYTE*)(a1 + 360) = 0;
  *(_BYTE*)(a1 + 384) = 0;
  *(_BYTE*)(a1 + 392) = 0;
  *(_BYTE*)(a1 + 416) = 0;
  *(_BYTE*)(a1 + 424) = 0;
  *(_BYTE*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  memset_alt1(a1 + 536, 0, 456);
  *(_DWORD*)(a1 + 1000) = 0;
  *(_DWORD*)(a1 + 992) = -1;
  GameRoutine_b34420((void*)((__int64)v14_.v14),
                     *(_QWORD**)(*game_g_frame_clock_ptr[0] + 13424),
                     (__int64)"Graphics/Textures/common_default", 0x20u,
                     (__int64)"Fog_Ramp", 8u, 0);
  v10 = v14_.v14[1];
  v11 = *(_BYTE**)(a1 + 128);
  *(_QWORD*)(a1 + 984) = v14_.v14[0];
  v12 = v14_.v15;
  *(_QWORD*)(a1 + 992) = v10;
  *(_DWORD*)(a1 + 1000) = v12;
  GameRoutine_c51760((__int64)v11);
  if (v11[640] == 1) {
    Manager_c46910((__int64)(v11 + 320));
    v11[640] = 0;
  }
  if (v11[968] == 1) {
    Manager_c46910((__int64)(v11 + 648));
    v11[968] = 0;
  }
  if (v11[1296] == 1) {
    Manager_c46910((__int64)(v11 + 976));
    v11[1296] = 0;
  }
  v11[1632] = 0;
  wld_GfxLoader_loadFogTexture_alt1(a1, (__int64)&GameData_1a9f09e, 0,
                                    (__int64)&GameData_1a9f09e, 0, 0);
  *(_BYTE*)(*(_QWORD*)(a1 + 128) + 1632LL) = 0;
  return GameRoutine_b87160(
      *(_QWORD*)a1, (*(_BYTE*)(*(_QWORD*)(a1 + 128) + 1632LL) & 1) == 0, 1u);
}

void wld_GfxLoader_loadFogTexture(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, __int64 a5, char a6)
{
  __int64 v6;
  _BYTE* v13;
  unsigned __int8** v14;
  unsigned __int8* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  unsigned int v23;
  __int64 v24;
  const char* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int8* v29;
  unsigned __int64 v30;
  const char* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int8* v35;
  unsigned __int64 v36;
  const char* v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  const char* v41;
  unsigned __int64 v42;
  const char* v43;
  __int64 v44;
  bool v45;
  unsigned __int64 v46;
  const char* v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  const char* v51;
  unsigned __int64 v52;
  const char* v53;
  __int64 v54;
  bool v55;
  unsigned __int64 v56;
  const char* v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  char* v64;
  __int64 v65;
  bool v66;
  char* v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  char* v72;
  unsigned int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  bool v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  char* v86;
  char v87;
  int v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  _BYTE* v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  const char* v98;
  __int64 v99;
  const char* v100;
  __int64 v101;
  bool v102;
  __int64 v103;
  const char* v104;
  __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  const char* v108;
  unsigned __int64 v109;
  const char* v110;
  __int64 v111;
  bool v112;
  unsigned __int64 v113;
  const char* v114;
  unsigned __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  char* v118;
  unsigned __int64 v119;
  char* v120;
  __int64 v121;
  bool v122;
  unsigned __int64 v123;
  char* v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  char* v128;
  char* v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  char* v133;
  unsigned __int64 v134;
  char* v135;
  unsigned __int64 v136;
  bool v137;
  unsigned __int64 v138;
  char* v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  bool v142;
  unsigned __int64 v143;
  unsigned __int64 v144;
  __int64 v145;
  unsigned __int64 v146;
  char* v147;
  char* v148;
  unsigned __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  unsigned __int64 v154;
  bool v155;
  unsigned __int64 v156;
  const char* v157;
  unsigned __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  char* v164;
  __int64 v165;
  __int64 v166;
  bool v167;
  __int64 v168;
  __int64 v169;
  char* v170;
  __int64 v171;
  int v172;
  unsigned __int64 v173;
  char* v174;
  char* v175;
  unsigned __int64 v176;
  unsigned __int64 v177;
  __int64 v178;
  __int64 v179;
  char v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  char* v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  unsigned __int64 v190;
  char* v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  unsigned __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  struct {
    __int64 (**v199)();
    __int64 v200;
    char* v201;
    char gap120_[8];
    __int64 (***v202)();
  } v199_;
  struct {
    __int64 v203;
    unsigned __int64 v204;
    char* v205;
  } v203_;
  struct {
    __int64 v206;
    unsigned __int64 v207;
    char* v208;
  } v206_;

  v160 = COERCE_AS(__typeof__(v160),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v71 = COERCE_AS(__typeof__(v71),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v6 = *(int*)(a1 + 16);
  if ((_DWORD)v6 != 0) {
    if (*(_QWORD*)(a1 + 8 * v6 + 456) != 0) {
      *(_QWORD*)(a1 + 528) = 0;
      *(_QWORD*)(a1 + 520) = 0;
      *(_QWORD*)(a1 + 512) = 0;
      if ((_DWORD)v6 != 1) {
        goto LABEL_47;
      }
      v13 = *(_BYTE**)(a1 + 128);
      v14 = (unsigned __int8**)(a1 + 512);
      *(_QWORD*)(a1 + 528) = v13;
      if (v13[640] == 1) {
        v15 = v13 + 320;
        *v14 = v13 + 320;
        v16 = *(_QWORD*)(a1 + 464);
        if (v16 == 0) {
          goto LABEL_32;
        }
      }
      else {
        v15 = nullptr;
        v16 = *(_QWORD*)(a1 + 464);
        if (v16 == 0) {
          goto LABEL_32;
        }
      }
      goto LABEL_31;
    }
    v20 = a1 + 24LL * (int)v6;
    v21 = *(_QWORD*)(v20 + 800);
    if (v21 == 0) {
      v22 = (_QWORD*)(v20 + 800);
      if ((_DWORD)v6 == 1) {
        Manager_c445f0_alt1((__int64)&v199_.v199, (__int64)"Preset/Hades", 0xCu,
                            (__int64)&GameData_1a9f09e, 0),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v23 = (unsigned __int8)v199_.v199;
        v20 = v199_.v200;
        v21 = (__int64)v199_.v201;
      }
      else {
        v23 = 0;
        LOWORD(v199_.v199) = 0;
      }
      v167 = (v23 & 1) == 0;
      v168 = v23 >> 1;
      v206_.v206 = 0;
      v206_.v207 = 0;
      if (v167) {
        v169 = v168;
      }
      else {
        v169 = v20;
      }
      if (v167) {
        v170 = (char*)&v199_.v199 + 1;
      }
      else {
        v170 = (char*)v21;
      }
      *v22 = (*(__int64 (**)(_QWORD, char*, __int64, __int64*, __int64))(
          **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 16LL))(
          *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v170, v169,
          &v206_.v206, 255),
      v160 = COERCE_AS(__typeof__(v160),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v206_.v207 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v206_.v207),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      if (((unsigned __int8)v199_.v199 & 1) != 0 && v199_.v201 != nullptr) {
        v171 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v171 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v171, (__int64)v199_.v201),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
    }
    v172 = 2;
  LABEL_342:
    *(_DWORD*)(a1 + 8) = v172;
    return;
  }
  v17 = *(int*)(a1 + 20);
  if ((_DWORD)v17 == 0) {
    v15 = *(unsigned __int8**)(a1 + 128);
    v13 = nullptr;
    v16 = 0;
    v14 = (unsigned __int8**)(a1 + 512);
    *(_QWORD*)(a1 + 528) = 0;
    *(_QWORD*)(a1 + 520) = 0;
    *(_QWORD*)(a1 + 512) = v15;
    goto LABEL_32;
  }
  v18 = a1 + 472;
  if (*(_QWORD*)(a1 + 472 + 8 * v17) == 0) {
    v24 = a1 + 24LL * (int)v17;
    if (*(_QWORD*)(v24 + 848) != 0) {
    LABEL_341:
      v172 = 3;
      goto LABEL_342;
    }
    v25 = *((const char**)&GameData_1fd2d60 + v17);
    v26 = strlen_alt1(v25),
    v160 = COERCE_AS(__typeof__(v160),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v26 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_344;
    }
    v27 = v26;
    if (v26 >= 0x17) {
      if ((v26 | 7) == 0x17) {
        v182 = 26;
      }
      else {
        v182 = (v26 | 7) + 1;
      }
      v28 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       v182, 16, 0),
      v160 = COERCE_AS(__typeof__(v160),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v206_.v207 = v27;
      v206_.v208 = v28;
      v206_.v206 = v182 | 1;
    }
    else {
      LOBYTE(v206_.v206) = 2 * v26;
      v28 = (char*)&v206_.v206 + 1;
      if (v26 == 0) {
        goto LABEL_312;
      }
    }
    memmove_alt1((__int64)v28, (__int64)v25, v27),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LABEL_312:
    v28[v27] = 0;
    v183 = GameRoutine_1a0a680_alt1((__int64)&v206_.v206, 0, "Preset/", 7u),
    v160 = COERCE_AS(__typeof__(v160),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v185 = *(_QWORD*)(v183 + 8);
    v184 = *(_QWORD*)(v183 + 16);
    v199_.v199 = *(__int64 (***)(void))v183,
    v160 = COERCE_AS(__typeof__(v160),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v199_.v200 = v185;
    v199_.v201 = (char*)v184;
    *(_QWORD*)(v183 + 8) = 0;
    *(_QWORD*)(v183 + 16) = 0;
    *(_QWORD*)v183 = 0;
    if (((unsigned __int8)v199_.v199 & 1) != 0) {
      v186 = v199_.v201;
    }
    else {
      v186 = (char*)&v199_.v199 + 1;
    }
    if (((unsigned __int8)v199_.v199 & 1) != 0) {
      v187 = v199_.v200;
    }
    else {
      v187 = (unsigned __int64)(unsigned __int8)v199_.v199 >> 1;
    }
    Manager_c445f0_alt1((__int64)&v203_.v203, (__int64)v186, v187,
                        (__int64)&GameData_1a9f09e, 0),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (((unsigned __int8)v199_.v199 & 1) != 0 && v199_.v201 != nullptr) {
      v188 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v188 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v188, (__int64)v199_.v201),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    if ((v206_.v206 & 1) != 0 && v206_.v208 != nullptr) {
      v189 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v189 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v189, (__int64)v206_.v208),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v199_.v199 = nullptr;
    v199_.v200 = 0;
    if ((v203_.v203 & 1) != 0) {
      v190 = v203_.v204;
    }
    else {
      v190 = (unsigned __int64)(unsigned __int8)v203_.v203 >> 1;
    }
    if ((v203_.v203 & 1) != 0) {
      v191 = v203_.v205;
    }
    else {
      v191 = (char*)&v203_.v203 + 1;
    }
    *(_QWORD*)(v24 +
               848) = (*(__int64 (**)(_QWORD, char*, unsigned __int64,
                                      __int64 (***)(void), __int64))(
        **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 16LL))(
        *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v191, v190, &v199_.v199,
        255),
               v160 =
                   COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
               v71 = COERCE_AS(__typeof__(v71),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v199_.v200 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v199_.v200),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    if ((v203_.v203 & 1) != 0 && v203_.v205 != nullptr) {
      v192 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v192 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v192, (__int64)v203_.v205),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    goto LABEL_341;
  }
  v13 = *(_BYTE**)(a1 + 128);
  v14 = (unsigned __int8**)(a1 + 512);
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 528) = v13;
  if ((_DWORD)v17 == 4) {
    if ((v13[1624] & 1) != 0) {
      v19 = 1304;
      goto LABEL_28;
    }
  }
  else {
    if ((_DWORD)v17 == 1) {
      if ((v13[968] & 1) != 0) {
        v19 = 648;
        goto LABEL_28;
      }
      goto LABEL_30;
    }
    if (v13[1296] == 1) {
      v19 = 976;
    LABEL_28:
      v15 = &v13[v19];
      *v14 = v15;
      v16 = *(_QWORD*)(v18 + 8 * v17);
      if (v16 == 0) {
        goto LABEL_32;
      }
      goto LABEL_31;
    }
  }
LABEL_30:
  v15 = nullptr;
  v16 = *(_QWORD*)(v18 + 8 * v17);
  if (v16 != 0) {
  LABEL_31:
    *(_QWORD*)(a1 + 520) = v16;
  }
LABEL_32:
  if (v15 == nullptr || (v15[24] & 1) == 0) {
    if (v16 != 0 && (*(_BYTE*)(v16 + 24) & 1) != 0) {
      v14 = (unsigned __int8**)(a1 + 520);
    }
    else {
      if (v13 == nullptr || v13[24] != 1) {
        goto LABEL_47;
      }
      v14 = (unsigned __int8**)(a1 + 528);
    }
  }
  v29 = *v14;
  if (v29[24] != 1) {
  LABEL_47:
    v31 = "Default";
    v32 = 7;
    goto LABEL_48;
  }
  v30 = *v29;
  if ((v30 & 1) != 0) {
    v31 = *((const char**)v29 + 2);
  }
  else {
    v31 = (const char*)(v29 + 1);
  }
  if ((v30 & 1) != 0) {
    v32 = *((_QWORD*)v29 + 1);
  }
  else {
    v32 = v30 >> 1;
  }
LABEL_48:
  wld_GfxLoader_loadSunPrecomputeData(a1, (__int64)v31, v32),
      v160 = COERCE_AS(__typeof__(v160),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v33 = *(_QWORD*)(a1 + 512);
  if (v33 != 0) {
    if ((*(_BYTE*)(v33 + 56) & 1) != 0) {
      goto LABEL_56;
    }
    if ((*(_BYTE*)(v33 + 24) & 1) != 0) {
      goto LABEL_58;
    }
  }
  v33 = *(_QWORD*)(a1 + 520);
  if (v33 != 0) {
    if ((*(_BYTE*)(v33 + 56) & 1) == 0) {
      if ((*(_BYTE*)(v33 + 24) & 1) != 0) {
        goto LABEL_58;
      }
      goto LABEL_54;
    }
  LABEL_56:
    v34 = 1;
    goto LABEL_59;
  }
LABEL_54:
  v33 = *(_QWORD*)(a1 + 528);
  if (v33 == 0) {
    goto LABEL_66;
  }
  if ((*(_BYTE*)(v33 + 56) & 1) != 0) {
    goto LABEL_56;
  }
  if (*(_BYTE*)(v33 + 24) == 1) {
  LABEL_58:
    v34 = 0;
  LABEL_59:
    v35 = (unsigned __int8*)(v33 + 32 * v34);
    if (v35[24] == 1) {
      v36 = *v35;
      if ((v36 & 1) != 0) {
        v37 = *((const char**)v35 + 2);
      }
      else {
        v37 = (const char*)(v35 + 1);
      }
      if ((v36 & 1) != 0) {
        v38 = *((_QWORD*)v35 + 1);
      }
      else {
        v38 = v36 >> 1;
      }
      goto LABEL_67;
    }
  }
LABEL_66:
  v37 = "Default";
  v38 = 7;
LABEL_67:
  GameHr_c44b50(a1, (__int64)v37, v38),
      v160 = COERCE_AS(__typeof__(v160),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v39 = *(_QWORD*)(a1 + 512);
  if (v39 != 0 && (*(_BYTE*)(v39 + 120) & 1) != 0 ||
      (v39 = *(_QWORD*)(a1 + 520)) != 0 && (*(_BYTE*)(v39 + 120) & 1) != 0 ||
      (v39 = *(_QWORD*)(a1 + 528)) != 0 && *(_BYTE*)(v39 + 120) == 1) {
    v40 = *(unsigned __int8*)(v39 + 96);
    v41 = (const char*)(v39 + 97);
    v44 = v39 + 104;
    v42 = *(_QWORD*)(v39 + 104);
    v43 = *(const char**)(v44 + 8);
    v45 = (v40 & 1) == 0;
    v46 = v40 >> 1;
    if (v45) {
      v47 = v41;
    }
    else {
      v47 = v43;
    }
    if (v45) {
      v48 = v46;
    }
    else {
      v48 = v42;
    }
  }
  else {
    v47 = "Outdoors";
    v48 = 8;
  }
  wld_GfxLoader_loadDomeLightTexture(a1, (__int64)v47, v48),
      v160 = COERCE_AS(__typeof__(v160),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v49 = *(_QWORD*)(a1 + 512);
  if (v49 != 0 && (*(_BYTE*)(v49 + 152) & 1) != 0 ||
      (v49 = *(_QWORD*)(a1 + 520)) != 0 && (*(_BYTE*)(v49 + 152) & 1) != 0 ||
      (v49 = *(_QWORD*)(a1 + 528)) != 0 && *(_BYTE*)(v49 + 152) == 1) {
    v50 = *(unsigned __int8*)(v49 + 128);
    v51 = (const char*)(v49 + 129);
    v54 = v49 + 136;
    v52 = *(_QWORD*)(v49 + 136);
    v53 = *(const char**)(v54 + 8);
    v55 = (v50 & 1) == 0;
    v56 = v50 >> 1;
    if (v55) {
      v57 = v51;
    }
    else {
      v57 = v53;
    }
    if (v55) {
      v58 = v56;
    }
    else {
      v58 = v52;
    }
  }
  else {
    v57 = "Default";
    v58 = 7;
  }
  wld_GfxLoader_loadCloudTexture(a1, (__int64)v57, v58),
      v160 = COERCE_AS(__typeof__(v160),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v61 = *(_QWORD*)(a1 + 512);
  if (v61 != 0 && ((v59 = *(unsigned __int8*)(v61 + 184)) & 1) != 0 ||
      (v61 = *(_QWORD*)(a1 + 520)) != 0 &&
          ((v59 = *(unsigned __int8*)(v61 + 184)) & 1) != 0 ||
      (v61 = *(_QWORD*)(a1 + 528)) != 0 &&
          (_DWORD)(v59 = *(unsigned __int8*)(v61 + 184)) == 1) {
    v62 = *(unsigned __int8*)(v61 + 160);
    v60 = v61 + 161;
    v65 = v61 + 168;
    v63 = *(_QWORD*)(v61 + 168);
    v64 = *(char**)(v65 + 8);
    v66 = (v62 & 1) == 0;
    v59 = v62 >> 1;
    if (v66) {
      v67 = (char*)v60;
    }
    else {
      v67 = v64;
    }
    if (v66) {
      v68 = v59;
    }
    else {
      v68 = v63;
    }
  }
  else {
    v68 = 0;
    v67 = &GameData_1a9f09e;
  }
  if (*(_BYTE*)(a1 + 320) != 1) {
    goto LABEL_114;
  }
  v69 = *(unsigned __int8*)(a1 + 296);
  v59 = *(_QWORD*)(a1 + 304);
  v60 = v69 >> 1;
  if ((v69 & 1) == 0) {
    v59 = v69 >> 1;
  }
  if (v59 != v68 ||
      ((v69 & 1) != 0 ? (v70 = *(_QWORD*)(a1 + 312)) : (v70 = a1 + 297),
       memcmp_alt1(v70, (__int64)v67, v68) != 0)) {
  LABEL_114:
    if (v68 != 0) {
      if (v68 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_344;
      }
      if (v68 >= 0x17) {
        if ((v68 | 7) == 0x17) {
          v74 = 26;
        }
        else {
          v74 = (v68 | 7) + 1;
        }
        v72 = (char*)fw_memory_HeapManager_Allocate_alt1(
            fw_memory_g_heap_manager, v74, 16, 0),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v206_.v207 = v68;
        v206_.v208 = v72;
        v206_.v206 = v74 | 1;
      }
      else {
        LOBYTE(v206_.v206) = 2 * v68;
        v72 = (char*)&v206_.v206 + 1;
      }
      memmove_alt1((__int64)v72, (__int64)v67, v68),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v72[v68] = 0;
      v75 = GameRoutine_1a0a680_alt1((__int64)&v206_.v206, 0,
                                     "Contents:/Graphics/Textures/Fog/", 0x20u),
      v160 = COERCE_AS(__typeof__(v160),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v77 = *(_QWORD*)(v75 + 8);
      v76 = *(_QWORD*)(v75 + 16);
      v199_.v199 = *(__int64 (***)(void))v75,
      v160 = COERCE_AS(__typeof__(v160),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v199_.v200 = v77;
      v199_.v201 = (char*)v76;
      *(_QWORD*)(v75 + 8) = 0;
      *(_QWORD*)(v75 + 16) = 0;
      *(_QWORD*)v75 = 0;
      v78 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v199_.v199,
                                               "_Ramp.bntx", 0xAu),
      v160 = COERCE_AS(__typeof__(v160),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v80 = v78[1];
      v79 = v78[2];
      v203_.v203 = *v78;
      v203_.v204 = v80;
      v203_.v205 = (char*)v79;
      v78[1] = 0;
      v78[2] = 0;
      *v78 = 0;
      if (((unsigned __int8)v199_.v199 & 1) != 0 && v199_.v201 != nullptr) {
        v81 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v81 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v81, (__int64)v199_.v201),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      if ((v206_.v206 & 1) != 0 && v206_.v208 != nullptr) {
        v82 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v82 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v82, (__int64)v206_.v208),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      v73 = (unsigned __int8)v203_.v203;
      v59 = v203_.v204;
      v60 = (__int64)v203_.v205;
    }
    else {
      v73 = 0;
      LOWORD(v203_.v203) = 0;
    }
    v83 = (v73 & 1) == 0;
    v84 = v73 >> 1;
    if (v83) {
      v85 = v84;
    }
    else {
      v85 = v59;
    }
    if (v83) {
      v86 = (char*)&v203_.v203 + 1;
    }
    else {
      v86 = (char*)v60;
    }
    v87 = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
        **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 96LL))(
        *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v86, v85, 255),
    v160 = COERCE_AS(__typeof__(v160),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v88 = *(_DWORD*)(a1 + 992);
    v89 = *(_QWORD*)a1;
    *(_QWORD*)(v89 + 400) = *(_QWORD*)(a1 + 984);
    *(_DWORD*)(v89 + 408) = v88;
    if ((v87 & 1) == 0) {
      if (*(_BYTE*)(a1 + 320) == 1) {
        if ((*(_BYTE*)(a1 + 296) & 1) != 0) {
          v92 = *(_BYTE**)(a1 + 312);
          *(_QWORD*)(a1 + 304) = 0;
          *v92 = 0;
        }
        else {
          *(_BYTE*)(a1 + 296) = 0;
          *(_BYTE*)(a1 + 297) = 0;
        }
      LABEL_163:
        if ((v203_.v203 & 1) != 0 && v203_.v205 != nullptr) {
          v94 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v94 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v94,
              (__int64)v203_.v205),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        goto LABEL_168;
      }
      *(_WORD*)(a1 + 296) = 0;
    LABEL_162:
      *(_BYTE*)(a1 + 320) = 1;
      goto LABEL_163;
    }
    v199_.v199 = GameData_1fd2040;
    v199_.v200 = a1;
    v199_.v202 = &v199_.v199;
    wld_GfxLoader_loadFile(a1, (unsigned __int8*)&v203_.v203, 5u,
                           (__int64)&v199_.v199, 1),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v199_.v202 == &v199_.v199) {
      v90 = 4;
    }
    else {
      if (v199_.v202 == nullptr) {
        goto LABEL_150;
      }
      v90 = 5;
    }
    ((__int64 (*)(__int64))(*v199_.v202)[v90])((__int64)v199_.v202),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LABEL_150:
    if (*(_BYTE*)(a1 + 320) == 1) {
      GameRoutine_60a060((char*)(a1 + 296), (__int64)v67, v68),
          v160 = COERCE_AS(__typeof__(v160),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      goto LABEL_163;
    }
    if (v68 >= 0x17) {
      if ((v68 | 7) == 0x17) {
        v93 = 26;
      }
      else {
        v93 = (v68 | 7) + 1;
      }
      v91 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v93,
                                                16, 0),
      v160 = COERCE_AS(__typeof__(v160),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *(_QWORD*)(a1 + 304) = v68;
      *(_QWORD*)(a1 + 312) = v91;
      *(_QWORD*)(a1 + 296) = v93 | 1;
    }
    else {
      v91 = a1 + 297;
      *(_BYTE*)(a1 + 296) = 2 * v68;
      if (v68 == 0) {
        goto LABEL_161;
      }
    }
    memmove_alt1(v91, (__int64)v67, v68),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LABEL_161:
    *(_BYTE*)(v91 + v68) = 0;
    goto LABEL_162;
  }
LABEL_168:
  if (a3 != 0 && (a6 & 1) == 0) {
    v95 = *(_QWORD*)(a1 + 512);
    if (*(_BYTE*)(a1 + 120) == 1) {
      if (v95 != 0 &&
              (v96 = *(_QWORD*)(a1 + 512), (*(_BYTE*)(v95 + 88) & 1) != 0) ||
          (v96 = *(_QWORD*)(a1 + 520)) != 0 && (*(_BYTE*)(v96 + 88) & 1) != 0 ||
          (v96 = *(_QWORD*)(a1 + 528)) != 0 && *(_BYTE*)(v96 + 88) == 1) {
        v97 = *(unsigned __int8*)(v96 + 64);
        v98 = (const char*)(v96 + 65);
        v101 = v96 + 72;
        v99 = *(_QWORD*)(v96 + 72);
        v100 = *(const char**)(v101 + 8);
        v102 = (v97 & 1) == 0;
        v103 = v97 >> 1;
        if (v102) {
          v104 = v98;
        }
        else {
          v104 = v100;
        }
        if (v102) {
          v105 = v103;
        }
        else {
          v105 = v99;
        }
      }
      else {
        v104 = "Outdoors_1";
        v105 = 10;
      }
      v197 = a4;
      v198 = a5;
      v196 = a3;
      if (v95 != 0 &&
              (v116 = *(_QWORD*)(a1 + 512), (*(_BYTE*)(v95 + 216) & 1) != 0) ||
          (v116 = *(_QWORD*)(a1 + 520)) != 0 &&
              (*(_BYTE*)(v116 + 216) & 1) != 0 ||
          (v116 = *(_QWORD*)(a1 + 528)) != 0 && *(_BYTE*)(v116 + 216) == 1) {
        v117 = *(unsigned __int8*)(v116 + 192);
        v118 = (char*)(v116 + 193);
        v121 = v116 + 200;
        v119 = *(_QWORD*)(v116 + 200);
        v120 = *(char**)(v121 + 8);
        v122 = (v117 & 1) == 0;
        v123 = v117 >> 1;
        if (v122) {
          v124 = v118;
        }
        else {
          v124 = v120;
        }
        if (v122) {
          v125 = v123;
        }
        else {
          v125 = v119;
        }
        if (v95 == 0) {
        LABEL_225:
          v95 = *(_QWORD*)(a1 + 520);
          if (v95 == 0 || (*(_BYTE*)(v95 + 248) & 1) == 0) {
            v95 = *(_QWORD*)(a1 + 528);
            if (v95 == 0 || *(_BYTE*)(v95 + 248) != 1) {
              v140 = 0;
              v139 = &GameData_1a9f09e;
              goto LABEL_236;
            }
          }
        LABEL_229:
          v132 = *(unsigned __int8*)(v95 + 224);
          v133 = (char*)(v95 + 225);
          v136 = v95 + 232;
          v134 = *(_QWORD*)(v95 + 232);
          v135 = *(char**)(v136 + 8);
          v137 = (v132 & 1) == 0;
          v138 = v132 >> 1;
          if (v137) {
            v139 = v133;
          }
          else {
            v139 = v135;
          }
          if (v137) {
            v140 = v138;
          }
          else {
            v140 = v134;
          }
        LABEL_236:
          v141 = *(unsigned __int8*)(a1 + 24);
          v142 = (v141 & 1) == 0;
          v143 = v141 >> 1;
          if (v142) {
            v144 = v143;
          }
          else {
            v144 = *(_QWORD*)(a1 + 32);
          }
          if (v142) {
            v145 = a1 + 25;
          }
          else {
            v145 = *(_QWORD*)(a1 + 40);
          }
          v146 = v144 + 1;
          if (v144 + 1 < 0xFFFFFFFFFFFFFFF7LL) {
            v194 = (__int64)v104;
            v195 = v105;
            v193 = (__int64)v139;
            if (v146 >= 0x17) {
              v148 = v124;
              v149 = v125;
              v150 = a2;
              if ((v146 | 7) == 0x17) {
                v151 = 26;
              }
              else {
                v151 = (v146 | 7) + 1;
              }
              v152 = fw_memory_HeapManager_Allocate_alt1(
                  fw_memory_g_heap_manager, v151, 16, 0),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              v153 = v151 | 1;
              v147 = (char*)v152;
              a2 = v150;
              v125 = v149;
              v124 = v148;
              v206_.v207 = v144 + 1;
              v206_.v208 = (char*)v152;
              v206_.v206 = v153;
            }
            else {
              v206_.v207 = 0;
              v206_.v208 = nullptr;
              v206_.v206 = (unsigned __int8)(2 * v146);
              v147 = (char*)&v206_.v206 + 1;
              if (v144 == 0) {
                goto LABEL_251;
              }
            }
            memmove_alt1((__int64)v147, v145, v144),
                v160 =
                    COERCE_AS(__typeof__(v160),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v71 =
                    COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          LABEL_251:
            *(_WORD*)&v147[v144] = 95;
            if ((*(_BYTE*)(a1 + 120) & 1) == 0) {
              GameRoutine_8123d0(),
                  v160 = COERCE_AS(
                      __typeof__(v160),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v71 = COERCE_AS(
                      __typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            }
            v154 = *(unsigned __int8*)(a1 + 96);
            v155 = (v154 & 1) == 0;
            v156 = v154 >> 1;
            if (v155) {
              v157 = (const char*)(a1 + 97);
            }
            else {
              v157 = *(const char**)(a1 + 112);
            }
            if (v155) {
              v158 = v156;
            }
            else {
              v158 = *(_QWORD*)(a1 + 104);
            }
            v159 = GameRoutine_1a09ce0_alt1((__int64)&v206_.v206, v157, v158),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            v162 = *(_QWORD*)(v159 + 8);
            v161 = *(_QWORD*)(v159 + 16);
            v199_.v199 = *(__int64 (***)(void))v159,
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            v199_.v200 = v162;
            v199_.v201 = (char*)v161;
            *(_QWORD*)(v159 + 8) = 0;
            *(_QWORD*)(v159 + 16) = 0;
            *(_QWORD*)v159 = 0;
            v163 = (unsigned __int64)(unsigned __int8)v199_.v199 >> 1;
            if (((unsigned __int8)v199_.v199 & 1) != 0) {
              v164 = v199_.v201;
            }
            else {
              v164 = (char*)&v199_.v199 + 1;
            }
            if (((unsigned __int8)v199_.v199 & 1) != 0) {
              v163 = v199_.v200;
            }
            Manager_c45700_alt1((__int64*)a1, a2, v196, v197, v198, v194, v195,
                                v160, (__int64)v124, v125, v193, v140,
                                (__int64)v164, v163),
                v160 =
                    COERCE_AS(__typeof__(v160),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v71 =
                    COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            if (((unsigned __int8)v199_.v199 & 1) != 0 &&
                v199_.v201 != nullptr) {
              v165 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v165 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v165,
                  (__int64)v199_.v201),
                  v160 = COERCE_AS(
                      __typeof__(v160),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v71 = COERCE_AS(
                      __typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            }
            if ((v206_.v206 & 1) != 0 && v206_.v208 != nullptr) {
              v166 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v166 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v166,
                  (__int64)v206_.v208),
                  v160 = COERCE_AS(
                      __typeof__(v160),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v71 = COERCE_AS(
                      __typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            }
            goto LABEL_301;
          }
        LABEL_344:
          String_60a1d0(),
              v160 = COERCE_AS(__typeof__(v160),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
      }
      else {
        v125 = 0;
        v124 = &GameData_1a9f09e;
        if (v95 == 0) {
          goto LABEL_225;
        }
      }
      if ((*(_BYTE*)(v95 + 248) & 1) != 0) {
        goto LABEL_229;
      }
      goto LABEL_225;
    }
    if (v95 != 0 &&
            (v106 = *(_QWORD*)(a1 + 512), (*(_BYTE*)(v95 + 88) & 1) != 0) ||
        (v106 = *(_QWORD*)(a1 + 520)) != 0 && (*(_BYTE*)(v106 + 88) & 1) != 0 ||
        (v106 = *(_QWORD*)(a1 + 528)) != 0 && *(_BYTE*)(v106 + 88) == 1) {
      v107 = *(unsigned __int8*)(v106 + 64);
      v108 = (const char*)(v106 + 65);
      v111 = v106 + 72;
      v109 = *(_QWORD*)(v106 + 72);
      v110 = *(const char**)(v111 + 8);
      v112 = (v107 & 1) == 0;
      v113 = v107 >> 1;
      if (v112) {
        v114 = v108;
      }
      else {
        v114 = v110;
      }
      if (v112) {
        v115 = v113;
      }
      else {
        v115 = v109;
      }
      if (v95 == 0) {
        goto LABEL_214;
      }
    }
    else {
      v114 = "Outdoors_1";
      v115 = 10;
      if (v95 == 0) {
        goto LABEL_214;
      }
    }
    v126 = *(_QWORD*)(a1 + 512);
    if ((*(_BYTE*)(v95 + 216) & 1) != 0) {
      goto LABEL_218;
    }
  LABEL_214:
    v126 = *(_QWORD*)(a1 + 520);
    if (v126 != 0 && (*(_BYTE*)(v126 + 216) & 1) != 0) {
      goto LABEL_218;
    }
    v126 = *(_QWORD*)(a1 + 528);
    if (v126 != 0) {
      if (*(_BYTE*)(v126 + 216) == 1) {
      LABEL_218:
        v127 = *(unsigned __int8*)(v126 + 192);
        v128 = (char*)(v126 + 193);
        v130 = v126 + 200;
        v126 = *(_QWORD*)(v126 + 200);
        v129 = *(char**)(v130 + 8);
        v45 = (v127 & 1) == 0;
        v131 = v127 >> 1;
        if (v45) {
          v126 = v131;
        }
        else {
          v128 = v129;
        }
        if (v95 == 0) {
          goto LABEL_291;
        }
        goto LABEL_290;
      }
      v126 = 0;
    }
    v128 = &GameData_1a9f09e;
    if (v95 != 0) {
    LABEL_290:
      if ((*(_BYTE*)(v95 + 248) & 1) != 0) {
        goto LABEL_295;
      }
    }
  LABEL_291:
    v95 = *(_QWORD*)(a1 + 520);
    if (v95 != 0 && (*(_BYTE*)(v95 + 248) & 1) != 0) {
      goto LABEL_295;
    }
    v95 = *(_QWORD*)(a1 + 528);
    if (v95 != 0) {
      if (*(_BYTE*)(v95 + 248) == 1) {
      LABEL_295:
        v173 = *(unsigned __int8*)(v95 + 224);
        v174 = (char*)(v95 + 225);
        v176 = v95 + 232;
        v95 = *(_QWORD*)(v95 + 232);
        v175 = *(char**)(v176 + 8);
        v45 = (v173 & 1) == 0;
        v177 = v173 >> 1;
        if (v45) {
          v95 = v177;
        }
        else {
          v174 = v175;
        }
        goto LABEL_300;
      }
      v95 = 0;
    }
    v174 = &GameData_1a9f09e;
  LABEL_300:
    Manager_c45700_alt1((__int64*)a1, a2, a3, a4, a5, (__int64)v114, v115, v71,
                        (__int64)v128, v126, (__int64)v174, v95,
                        (__int64)&GameData_1a9f09e, 0),
        v160 = COERCE_AS(__typeof__(v160),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
LABEL_301:
  v178 = *(_QWORD*)a1;
  if (*(_DWORD*)(a1 + 16) == 1) {
    v179 = *(_QWORD*)(v178 + 272);
    v180 = *(_BYTE*)(v178 + 344);
    *(_QWORD*)(v178 + 312) = *(_QWORD*)(v178 + 264);
    *(_QWORD*)(v178 + 320) = v179;
    *(_QWORD*)(v178 + 328) = *(_QWORD*)(v178 + 280);
    v181 = *(_QWORD*)(v178 + 256);
    *(_QWORD*)(v178 + 296) = *(_QWORD*)(v178 + 248);
    *(_QWORD*)(v178 + 304) = v181;
    if ((v180 & 1) == 0) {
      *(_BYTE*)(v178 + 344) = 1;
    }
    *(_DWORD*)(v178 + 340) = 0;
    *(_QWORD*)(v178 + 332) = 0x1E0000000ELL;
  }
  else if (*(_BYTE*)(v178 + 344) == 1) {
    *(_BYTE*)(v178 + 344) = 0;
  }
}

void wld_GfxLoader_loadSunPrecomputeData(__int64 a1, __int64 a2,
                                         unsigned __int64 a3)
{
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  struct {
    _QWORD v17[2];
    char* v18;
  } v17_;

  if (*(_BYTE*)(a1 + 160) != 1) {
    goto LABEL_9;
  }
  v6 = *(unsigned __int8*)(a1 + 136);
  v7 = *(_QWORD*)(a1 + 144);
  if ((v6 & 1) == 0) {
    v7 = v6 >> 1;
  }
  if (v7 != a3 ||
      ((v6 & 1) != 0 ? (v8 = *(_QWORD*)(a1 + 152)) : (v8 = a1 + 137),
       memcmp_alt1(v8, a2, a3) != 0)) {
  LABEL_9:
    if (a3 != 0) {
      GfxLoader_c45e30_alt1(v17_.v17, a2, a3, (__int64)".sun", 4u);
      if ((v17_.v17[0] & 1) != 0) {
        v9 = v17_.v17[1];
      }
      else {
        v9 = (unsigned __int64)LOBYTE(v17_.v17[0]) >> 1;
      }
      if ((v17_.v17[0] & 1) != 0) {
        v10 = v17_.v18;
      }
      else {
        v10 = (char*)v17_.v17 + 1;
      }
      if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
               **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 96LL))(
               *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v10, v9, 255) &
           1) != 0) {
        v15_.v15[0] = GameData_1fd1ec0;
        v15_.v15[1] = a1;
        v15_.v16 = v15_.v15;
        wld_GfxLoader_loadFile(a1, (unsigned __int8*)v17_.v17, 0,
                               (__int64)v15_.v15, 0);
        if (v15_.v16 == v15_.v15) {
          v11 = 32;
        }
        else {
          if (v15_.v16 == nullptr) {
            goto LABEL_30;
          }
          v11 = 40;
        }
        (*(void (**)(__int64))(*v15_.v16 + v11))((__int64)v15_.v16);
      LABEL_30:
        if (*(_BYTE*)(a1 + 160) == 1) {
          GameRoutine_60a060((char*)(a1 + 136), a2, a3);
        }
        else {
          if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
            String_60a1d0();
          }
          if (a3 >= 0x17) {
            if ((a3 | 7) == 0x17) {
              v14 = 26;
            }
            else {
              v14 = (a3 | 7) + 1;
            }
            v13 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                      v14, 16, 0);
            *(_QWORD*)(a1 + 144) = a3;
            *(_QWORD*)(a1 + 152) = v13;
            *(_QWORD*)(a1 + 136) = v14 | 1;
          }
          else {
            v13 = a1 + 137;
            *(_BYTE*)(a1 + 136) = 2 * a3;
          }
          memmove_alt1(v13, a2, a3);
          *(_BYTE*)(v13 + a3) = 0;
          *(_BYTE*)(a1 + 160) = 1;
        }
        goto LABEL_22;
      }
    }
    else {
      LOWORD(v17_.v17[0]) = 0;
    }
    wld_GfxLoader_loadSunPrecomputeData(a1, (__int64)"Default", 7u);
  LABEL_22:
    if ((v17_.v17[0] & 1) != 0 && v17_.v18 != nullptr) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (__int64)v17_.v18);
    }
  }
}

void wld_GfxLoader_loadDomeLightTexture(__int64 a1, __int64 a2,
                                        unsigned __int64 a3)
{
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 (**v23)();
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  struct {
    __int64 (**v32)();
    __int64 v33;
    __int64 v34;
    char gap24_[8];
    __int64 (***v35)();
  } v32_;
  struct {
    __int64 v36;
    unsigned __int64 v37;
    char* v38;
  } v36_;
  struct {
    _QWORD v39[2];
    char* v40;
  } v39_;

  if (*(_BYTE*)(a1 + 256) != 1) {
    goto LABEL_9;
  }
  v6 = *(unsigned __int8*)(a1 + 232);
  v7 = *(_QWORD*)(a1 + 240);
  if ((v6 & 1) == 0) {
    v7 = v6 >> 1;
  }
  if (v7 != a3 ||
      ((v6 & 1) != 0 ? (v8 = *(_QWORD*)(a1 + 248)) : (v8 = a1 + 233),
       memcmp_alt1(v8, a2, a3) != 0)) {
  LABEL_9:
    if (a3 != 0) {
      if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      if (a3 >= 0x17) {
        if ((a3 | 7) == 0x17) {
          v10 = 26;
        }
        else {
          v10 = (a3 | 7) + 1;
        }
        v9 = (char*)fw_memory_HeapManager_Allocate_alt1(
            fw_memory_g_heap_manager, v10, 16, 0);
        v39_.v39[1] = a3;
        v39_.v40 = v9;
        v39_.v39[0] = v10 | 1;
      }
      else {
        LOBYTE(v39_.v39[0]) = 2 * a3;
        v9 = (char*)v39_.v39 + 1;
      }
      memmove_alt1((__int64)v9, a2, a3);
      v9[a3] = 0;
      v11 = GameRoutine_1a0a680_alt1(
          (__int64)v39_.v39, 0, "Contents:/Graphics/Textures/Light/", 0x22u);
      v13 = *(_QWORD*)(v11 + 8);
      v12 = *(_QWORD*)(v11 + 16);
      v32_.v32 = *(__int64 (***)(void))v11;
      v32_.v33 = v13;
      v32_.v34 = v12;
      *(_QWORD*)(v11 + 8) = 0;
      *(_QWORD*)(v11 + 16) = 0;
      *(_QWORD*)v11 = 0;
      v14 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v32_.v32,
                                               "_DomeLight_IBL.bntx", 0x13u);
      v16 = v14[1];
      v15 = v14[2];
      v36_.v36 = *v14;
      v36_.v37 = v16;
      v36_.v38 = (char*)v15;
      v14[1] = 0;
      v14[2] = 0;
      *v14 = 0;
      if (((unsigned __int8)v32_.v32 & 1) != 0 && v32_.v34 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v32_.v34);
      }
      if ((v39_.v39[0] & 1) != 0 && v39_.v40 != nullptr) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v39_.v40);
      }
      if ((v36_.v36 & 1) != 0) {
        v19 = v36_.v37;
      }
      else {
        v19 = (unsigned __int64)(unsigned __int8)v36_.v36 >> 1;
      }
      if ((v36_.v36 & 1) != 0) {
        v20 = v36_.v38;
      }
      else {
        v20 = (char*)&v36_.v36 + 1;
      }
      if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
               **(_QWORD**)(game_g_frame_clock + 13432) + 96LL))(
               *(_QWORD*)(game_g_frame_clock + 13432), v20, v19, 255) &
           1) == 0) {
        wld_GfxLoader_loadDomeLightTexture(a1, (__int64)"Outdoors", 8u);
        if ((v36_.v36 & 1) == 0) {
          return;
        }
      LABEL_60:
        if (v36_.v38 != nullptr) {
          v31 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, (__int64)v36_.v38);
        }
        return;
      }
    }
    else {
      LOWORD(v36_.v36) = 0;
    }
    GameRoutine_b34420_alt1((void*)((__int64)&v32_.v32),
                            *(_QWORD*)(game_g_frame_clock + 13424),
                            (__int64)"Graphics/Textures/common_default", 0x20u,
                            (__int64)"Cmn_Default_LSPV_BC", 19, 0);
    v21 = *(_QWORD*)(*(_QWORD*)a1 + 24LL);
    if (v21 != 0) {
      v22 = *(_QWORD*)(*(_QWORD*)a1 + 16LL);
      v23 = v32_.v32;
      v24 = v32_.v33;
      v25 = *(_QWORD*)(*(_QWORD*)a1 + 24LL);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                memory_order_relaxed);
      v26 = std___1___shared_weak_count_lock_alt1(v25);
      std___1___shared_weak_count___release_weak_alt1(v21);
      if (v26 != 0) {
        if (v22 != 0) {
          v27 = *(_QWORD*)(v22 + 288);
          *(_QWORD*)(v27 + 1008) = v23;
          *(_DWORD*)(v27 + 1016) = v24;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
          std___1___shared_weak_count___release_weak_alt1(v26);
        }
      }
    }
    v32_.v35 = &v32_.v32;
    v32_.v32 = GameData_1fd1f40;
    v32_.v33 = a1;
    wld_GfxLoader_loadFile(a1, (unsigned __int8*)&v36_.v36, 3u,
                           (__int64)&v32_.v32, 1);
    if (v32_.v35 == &v32_.v32) {
      v28 = 4;
    }
    else {
      if (v32_.v35 == nullptr) {
        goto LABEL_48;
      }
      v28 = 5;
    }
    ((__int64 (*)(__int64))(*v32_.v35)[v28])((__int64)v32_.v35);
  LABEL_48:
    if (*(_BYTE*)(a1 + 256) == 1) {
      GameRoutine_60a060((char*)(a1 + 232), a2, a3);
      if ((v36_.v36 & 1) == 0) {
        return;
      }
      goto LABEL_60;
    }
    if (a3 >= 0x17) {
      if ((a3 | 7) == 0x17) {
        v30 = 26;
      }
      else {
        v30 = (a3 | 7) + 1;
      }
      v29 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v30,
                                                16, 0);
      *(_QWORD*)(a1 + 240) = a3;
      *(_QWORD*)(a1 + 248) = v29;
      *(_QWORD*)(a1 + 232) = v30 | 1;
    }
    else {
      v29 = a1 + 233;
      *(_BYTE*)(a1 + 232) = 2 * a3;
      if (a3 == 0) {
      LABEL_59:
        *(_BYTE*)(v29 + a3) = 0;
        *(_BYTE*)(a1 + 256) = 1;
        if ((v36_.v36 & 1) == 0) {
          return;
        }
        goto LABEL_60;
      }
    }
    memmove_alt1(v29, a2, a3);
    goto LABEL_59;
  }
}

void wld_GfxLoader_loadCloudTexture(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    __int64 (**v30)();
    __int64 v31;
    __int64 v32;
    char gap24_[8];
    __int64 (***v33)();
  } v30_;
  struct {
    __int64 v34;
    unsigned __int64 v35;
    char* v36;
  } v34_;
  struct {
    _QWORD v37[2];
    char* v38;
  } v37_;

  if (*(_BYTE*)(a1 + 288) != 1) {
    goto LABEL_9;
  }
  v6 = *(unsigned __int8*)(a1 + 264);
  v7 = *(_QWORD*)(a1 + 272);
  if ((v6 & 1) == 0) {
    v7 = v6 >> 1;
  }
  if (v7 != a3 ||
      ((v6 & 1) != 0 ? (v8 = *(_QWORD*)(a1 + 280)) : (v8 = a1 + 265),
       memcmp_alt1(v8, a2, a3) != 0)) {
  LABEL_9:
    if (a3 != 0) {
      if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      if (a3 >= 0x17) {
        if ((a3 | 7) == 0x17) {
          v10 = 26;
        }
        else {
          v10 = (a3 | 7) + 1;
        }
        v9 = (char*)fw_memory_HeapManager_Allocate_alt1(
            fw_memory_g_heap_manager, v10, 16, 0);
        v37_.v37[1] = a3;
        v37_.v38 = v9;
        v37_.v37[0] = v10 | 1;
      }
      else {
        LOBYTE(v37_.v37[0]) = 2 * a3;
        v9 = (char*)v37_.v37 + 1;
      }
      memmove_alt1((__int64)v9, a2, a3);
      v9[a3] = 0;
      v11 = GameRoutine_1a0a680_alt1(
          (__int64)v37_.v37, 0, "Contents:/Graphics/Textures/Cloud/", 0x22u);
      v13 = *(_QWORD*)(v11 + 8);
      v12 = *(_QWORD*)(v11 + 16);
      v30_.v30 = *(__int64 (***)(void))v11;
      v30_.v31 = v13;
      v30_.v32 = v12;
      *(_QWORD*)(v11 + 8) = 0;
      *(_QWORD*)(v11 + 16) = 0;
      *(_QWORD*)v11 = 0;
      v14 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v30_.v30, "_CLD.bntx",
                                               9u);
      v16 = v14[1];
      v15 = v14[2];
      v34_.v34 = *v14;
      v34_.v35 = v16;
      v34_.v36 = (char*)v15;
      v14[1] = 0;
      v14[2] = 0;
      *v14 = 0;
      if (((unsigned __int8)v30_.v30 & 1) != 0 && v30_.v32 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v30_.v32);
      }
      if ((v37_.v37[0] & 1) != 0 && v37_.v38 != nullptr) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v37_.v38);
      }
      if ((v34_.v34 & 1) != 0) {
        v19 = v34_.v35;
      }
      else {
        v19 = (unsigned __int64)(unsigned __int8)v34_.v34 >> 1;
      }
      if ((v34_.v34 & 1) != 0) {
        v20 = v34_.v36;
      }
      else {
        v20 = (char*)&v34_.v34 + 1;
      }
      if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
               **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 96LL))(
               *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v20, v19, 255) &
           1) == 0) {
        wld_GfxLoader_loadCloudTexture(a1, (__int64)"Default", 7u);
        if ((v34_.v34 & 1) == 0) {
          return;
        }
      LABEL_60:
        if (v34_.v36 != nullptr) {
          v29 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v34_.v36);
        }
        return;
      }
    }
    else {
      LOWORD(v34_.v34) = 0;
    }
    v21 = *(_QWORD*)(*(_QWORD*)a1 + 24LL);
    if (v21 != 0) {
      v22 = *(_QWORD*)(*(_QWORD*)a1 + 16LL);
      v23 = *(_QWORD*)(*(_QWORD*)a1 + 24LL);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                memory_order_relaxed);
      v24 = std___1___shared_weak_count_lock_alt1(v23);
      std___1___shared_weak_count___release_weak_alt1(v21);
      if (v24 != 0) {
        if (v22 != 0) {
          v25 = *(_QWORD*)(v22 + 288);
          *(_QWORD*)(v25 + 528) = 0;
          *(_DWORD*)(v25 + 536) = -1;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
          std___1___shared_weak_count___release_weak_alt1(v24);
        }
      }
    }
    v30_.v30 = GameData_1fd1fc0;
    v30_.v31 = a1;
    v30_.v33 = &v30_.v30;
    wld_GfxLoader_loadFile(a1, (unsigned __int8*)&v34_.v34, 4u,
                           (__int64)&v30_.v30, 1);
    if (v30_.v33 == &v30_.v30) {
      v26 = 4;
    }
    else {
      if (v30_.v33 == nullptr) {
        goto LABEL_48;
      }
      v26 = 5;
    }
    ((__int64 (*)(__int64))(*v30_.v33)[v26])((__int64)v30_.v33);
  LABEL_48:
    if (*(_BYTE*)(a1 + 288) == 1) {
      GameRoutine_60a060((char*)(a1 + 264), a2, a3);
      if ((v34_.v34 & 1) == 0) {
        return;
      }
      goto LABEL_60;
    }
    if (a3 >= 0x17) {
      if ((a3 | 7) == 0x17) {
        v28 = 26;
      }
      else {
        v28 = (a3 | 7) + 1;
      }
      v27 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v28,
                                                16, 0);
      *(_QWORD*)(a1 + 272) = a3;
      *(_QWORD*)(a1 + 280) = v27;
      *(_QWORD*)(a1 + 264) = v28 | 1;
    }
    else {
      v27 = a1 + 265;
      *(_BYTE*)(a1 + 264) = 2 * a3;
      if (a3 == 0) {
      LABEL_59:
        *(_BYTE*)(v27 + a3) = 0;
        *(_BYTE*)(a1 + 288) = 1;
        if ((v34_.v34 & 1) == 0) {
          return;
        }
        goto LABEL_60;
      }
    }
    memmove_alt1(v27, a2, a3);
    goto LABEL_59;
  }
}

void GfxLoader_c45700(__int64* a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                      unsigned __int64 a5, __int64 a6, unsigned __int64 a7,
                      __int64 a8, __int64 a9, unsigned __int64 a10, __int64 a11,
                      unsigned __int64 a12, __int64 a13, unsigned __int64 a14)
{
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
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  bool v45;
  unsigned __int64 v46;
  const char* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  bool v50;
  unsigned __int64 v51;
  char* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  bool v55;
  unsigned __int64 v56;
  char* v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  bool v60;
  __int64 v61;
  char* v62;
  __int64 v63;
  char* v64;
  __int64 v65;
  char* v66;
  unsigned __int64 v67;
  char* v68;
  char* v69;
  const char* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  char* v77;
  unsigned int v78;
  __int64 v79;
  __int64* v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  char* v84;
  unsigned __int64 v85;
  bool v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  struct {
    _QWORD v94[2];
    char* v95;
  } v94_;
  struct {
    __int64 v96;
    unsigned __int64 v97;
    char* v98;
  } v96_;
  struct {
    char* v99;
    unsigned __int64 v100;
    char* v101;
  } v99_;

  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (*((_BYTE*)a1 + 224) == 1) {
    GameRoutine_60a060((char*)a1 + 200, a6, a7),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    goto LABEL_13;
  }
  if (a7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_138;
  }
  if (a7 >= 0x17) {
    v21 = a6;
    if ((a7 | 7) == 0x17) {
      v22 = 26;
    }
    else {
      v22 = (a7 | 7) + 1;
    }
    v23 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v22, 16,
                                              0),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    a6 = v21;
    v20 = v23;
    a1[26] = a7;
    a1[27] = v23;
    a1[25] = v22 | 1;
  }
  else {
    v20 = (__int64)a1 + 201;
    *((_BYTE*)a1 + 200) = 2 * a7;
    if (a7 == 0) {
      goto LABEL_12;
    }
  }
  memmove_alt1(v20, a6, a7),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_12:
  *(_BYTE*)(v20 + a7) = 0;
  *((_BYTE*)a1 + 224) = 1;
LABEL_13:
  v24 = a9;
  if (*((_BYTE*)a1 + 352) == 1) {
    GameRoutine_60a060((char*)a1 + 328, a9, a10),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    goto LABEL_25;
  }
  if (a10 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_138;
  }
  if (a10 >= 0x17) {
    if ((a10 | 7) == 0x17) {
      v26 = 26;
    }
    else {
      v26 = (a10 | 7) + 1;
    }
    v27 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v26, 16,
                                              0),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v24 = a9;
    v25 = v27;
    a1[42] = a10;
    a1[43] = v27;
    a1[41] = v26 | 1;
  }
  else {
    v25 = (__int64)a1 + 329;
    *((_BYTE*)a1 + 328) = 2 * a10;
    if (a10 == 0) {
      goto LABEL_24;
    }
  }
  memmove_alt1(v25, v24, a10),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_24:
  *(_BYTE*)(v25 + a10) = 0;
  *((_BYTE*)a1 + 352) = 1;
LABEL_25:
  v28 = a11;
  if (*((_BYTE*)a1 + 384) == 1) {
    GameRoutine_60a060((char*)a1 + 360, a11, a12),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    goto LABEL_37;
  }
  if (a12 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_138;
  }
  if (a12 >= 0x17) {
    if ((a12 | 7) == 0x17) {
      v30 = 26;
    }
    else {
      v30 = (a12 | 7) + 1;
    }
    v31 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v30, 16,
                                              0),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v28 = a11;
    v29 = v31;
    a1[46] = a12;
    a1[47] = v31;
    a1[45] = v30 | 1;
  }
  else {
    v29 = (__int64)a1 + 361;
    *((_BYTE*)a1 + 360) = 2 * a12;
    if (a12 == 0) {
      goto LABEL_36;
    }
  }
  memmove_alt1(v29, v28, a12),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_36:
  *(_BYTE*)(v29 + a12) = 0;
  *((_BYTE*)a1 + 384) = 1;
LABEL_37:
  v32 = a13;
  if (*((_BYTE*)a1 + 416) != 1) {
    if (a14 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_138;
    }
    if (a14 >= 0x17) {
      if ((a14 | 7) == 0x17) {
        v34 = 26;
      }
      else {
        v34 = (a14 | 7) + 1;
      }
      v35 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v34,
                                                16, 0),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v32 = a13;
      v33 = v35;
      a1[50] = a14;
      a1[51] = v35;
      a1[49] = v34 | 1;
    }
    else {
      v33 = (__int64)a1 + 393;
      *((_BYTE*)a1 + 392) = 2 * a14;
      if (a14 == 0) {
        goto LABEL_48;
      }
    }
    memmove_alt1(v33, v32, a14),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LABEL_48:
    *(_BYTE*)(v33 + a14) = 0;
    *((_BYTE*)a1 + 416) = 1;
    goto LABEL_49;
  }
  GameRoutine_60a060((char*)a1 + 392, a13, a14),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_49:
  v36 = *a1;
  LightingAnimModule_c687a0(*(_QWORD*)(*a1 + 392), 0),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v39 = *(_QWORD*)(v36 + 360);
  v40 = *(_QWORD*)(v39 + 8);
  *(_DWORD*)(v39 + 48) = -1;
  *(_DWORD*)(v39 + 80) = -1;
  *(_DWORD*)(v39 + 92) = -1;
  v41 = 1;
  *(_QWORD*)(v39 + 52) = 0;
  *(_QWORD*)(v39 + 84) = 0;
  *(_QWORD*)(v39 + 96) = 0;
  *(_BYTE*)(v39 + 192) = 0;
  *(_BYTE*)(v39 + 112) = 1;
  *(_OWORD*)(v39 + 32) = GameData_1a82c50;
  if (v40 != 0) {
    v42 = std___1___shared_weak_count_lock_alt1(v40),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v42 != 0) {
      v41 = -1;
      if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v43 = v42;
        (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v43),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
    }
  }
  if (*((_BYTE*)a1 + 224) == 1) {
    v44 = *((unsigned __int8*)a1 + 200);
    v38 = (char*)a1[27];
    v41 = (__int64)a1 + 201;
    v45 = (v44 & 1) == 0;
    v46 = v44 >> 1;
    if (v45) {
      v47 = (char*)a1 + 201;
    }
    else {
      v47 = (const char*)a1[27];
    }
    if (v45) {
      v48 = v46;
    }
    else {
      v48 = a1[26];
    }
  }
  else {
    v47 = "Outdoors_1";
    v48 = 10;
  }
  v90 = a2;
  v91 = a3;
  v92 = a4;
  v93 = a5;
  if (*((_BYTE*)a1 + 352) == 1) {
    v49 = *((unsigned __int8*)a1 + 328);
    v38 = (char*)a1[43];
    v41 = (__int64)a1 + 329;
    v50 = (v49 & 1) == 0;
    v51 = v49 >> 1;
    if (v50) {
      v52 = (char*)a1 + 329;
    }
    else {
      v52 = (char*)a1[43];
    }
    if (v50) {
      v53 = v51;
    }
    else {
      v53 = a1[42];
    }
  }
  else {
    v53 = 0;
    v52 = &GameData_1a9f09e;
  }
  if (*((_BYTE*)a1 + 384) == 1) {
    v54 = *((unsigned __int8*)a1 + 360);
    v38 = (char*)a1[47];
    v41 = (__int64)a1 + 361;
    v55 = (v54 & 1) == 0;
    v56 = v54 >> 1;
    if (v55) {
      v57 = (char*)a1 + 361;
    }
    else {
      v57 = (char*)a1[47];
    }
    if (v55) {
      v58 = v56;
    }
    else {
      v58 = a1[46];
    }
  }
  else {
    v58 = 0;
    v57 = &GameData_1a9f09e;
  }
  if (*((_BYTE*)a1 + 416) == 1) {
    v59 = *((unsigned __int8*)a1 + 392);
    v38 = (char*)a1[51];
    v41 = (__int64)a1 + 393;
    v60 = (v59 & 1) == 0;
    v61 = v59 >> 1;
    if (v60) {
      v62 = (char*)a1 + 393;
    }
    else {
      v62 = (char*)a1[51];
    }
    if (v60) {
      v63 = v61;
    }
    else {
      v63 = a1[50];
    }
    if (v48 != 0) {
      goto LABEL_85;
    }
  LABEL_89:
    LOWORD(v99_.v99) = 0;
    goto LABEL_99;
  }
  v63 = 0;
  v62 = &GameData_1a9f09e;
  if (v48 == 0) {
    goto LABEL_89;
  }
LABEL_85:
  if (v48 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_138;
  }
  if (v48 >= 0x17) {
    v65 = v63;
    v66 = v52;
    v67 = v58;
    v68 = v57;
    v69 = v62;
    v70 = v47;
    if ((v48 | 7) == 0x17) {
      v71 = 26;
    }
    else {
      v71 = (v48 | 7) + 1;
    }
    v72 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v71, 16,
                                              0),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v73 = v71 | 1;
    v47 = v70;
    v64 = (char*)v72;
    v96_.v97 = v48;
    v96_.v98 = (char*)v72;
    v62 = v69;
    v57 = v68;
    v58 = v67;
    v52 = v66;
    v63 = v65;
    v96_.v96 = v73;
  }
  else {
    LOBYTE(v96_.v96) = 2 * v48;
    v64 = (char*)&v96_.v96 + 1;
  }
  memmove_alt1((__int64)v64, (__int64)v47, v48),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v64[v48] = 0;
  v74 = GameRoutine_1a0a680_alt1((__int64)&v96_.v96, 0, "Preset/", 7u),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v41 = *(_QWORD*)(v74 + 8);
  v75 = *(_QWORD*)(v74 + 16);
  v38 = *(char**)v74;
  v99_.v99 = *(char**)v74;
  v99_.v100 = v41;
  v99_.v101 = (char*)v75;
  *(_QWORD*)(v74 + 8) = 0;
  *(_QWORD*)(v74 + 16) = 0;
  *(_QWORD*)v74 = 0;
  if ((v96_.v96 & 1) != 0 && v96_.v98 != nullptr) {
    v76 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v76 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, (__int64)v96_.v98),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
LABEL_99:
  if (v53 == 0) {
    v78 = 0;
    LOWORD(v96_.v96) = 0;
    goto LABEL_114;
  }
  if (v53 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_138:
    String_60a1d0(),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if (v53 >= 0x17) {
    if ((v53 | 7) == 0x17) {
      v79 = 26;
    }
    else {
      v79 = (v53 | 7) + 1;
    }
    v77 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v79, 16, 0),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v94_.v94[1] = v53;
    v94_.v95 = v77;
    v94_.v94[0] = v79 | 1;
  }
  else {
    LOBYTE(v94_.v94[0]) = 2 * v53;
    v77 = (char*)v94_.v94 + 1;
  }
  memmove_alt1((__int64)v77, (__int64)v52, v53),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v77[v53] = 0;
  v80 = (__int64*)GameRoutine_1a0a680_alt1((__int64)v94_.v94, 0, "Preset/", 7u),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v82 = v80[1];
  v81 = v80[2];
  v96_.v96 = *v80;
  v96_.v97 = v82;
  v96_.v98 = (char*)v81;
  v80[1] = 0;
  v80[2] = 0;
  *v80 = 0;
  if ((v94_.v94[0] & 1) != 0 && v94_.v95 != nullptr) {
    v83 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v83 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v83, (__int64)v94_.v95),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v78 = (unsigned __int8)v96_.v96;
  v41 = v96_.v97;
  v38 = v96_.v98;
LABEL_114:
  if (((unsigned __int8)v99_.v99 & 1) != 0) {
    v84 = v99_.v101;
  }
  else {
    v84 = (char*)&v99_.v99 + 1;
  }
  if (((unsigned __int8)v99_.v99 & 1) != 0) {
    v85 = v99_.v100;
  }
  else {
    v85 = (unsigned __int64)(unsigned __int8)v99_.v99 >> 1;
  }
  v86 = (v78 & 1) == 0;
  v87 = v78 >> 1;
  if (v86) {
    v38 = (char*)&v96_.v96 + 1;
  }
  if (!v86) {
    v87 = v41;
  }
  LightingAnimModule_c65df0(*(_QWORD*)(*a1 + 392), v90, v91, v92, v93,
                            (__int64)v84, v85, v37, (__int64)v38, v87,
                            (__int64)v57, v58),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v63 != 0) {
    GameHr_c6a240(*(_QWORD*)(*a1 + 392), (__int64)v62, v63),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if ((v96_.v96 & 1) != 0 && v96_.v98 != nullptr) {
    v88 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v88 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v88, (__int64)v96_.v98),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if (((unsigned __int8)v99_.v99 & 1) != 0 && v99_.v101 != nullptr) {
    v89 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v89 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v89, (__int64)v99_.v101),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
}

__int64* GfxLoader_c45e30(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                          __int64 a4, unsigned __int64 a5)
{
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  __int64* result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    __int64 v27;
    unsigned __int64 v28;
    char* v29;
  } v27_;
  struct {
    _QWORD v30[2];
    __int64 v31;
  } v30_;
  struct {
    _QWORD v32[2];
    __int64 v33;
  } v32_;

  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_41:
    String_60a1d0();
  }
  if (a3 >= 0x17) {
    v10 = a2;
    if ((a3 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (a3 | 7) + 1;
    }
    v12 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v11, 16,
                                              0);
    a2 = v10;
    v9 = (char*)v12;
    v30_.v30[1] = a3;
    v30_.v31 = v12;
    v30_.v30[0] = v11 | 1;
    goto LABEL_9;
  }
  LOBYTE(v30_.v30[0]) = 2 * a3;
  v9 = (char*)v30_.v30 + 1;
  if (a3 != 0) {
  LABEL_9:
    memmove(v9, a2, a3);
  }
  v9[a3] = 0;
  v13 = (_QWORD*)GameRoutine_1a0a680(v30_.v30, 0,
                                     "Contents:/Graphics/Settings/Preset/", 35);
  v15 = v13[1];
  v14 = v13[2];
  v32_.v32[0] = *v13;
  v32_.v32[1] = v15;
  v32_.v33 = v14;
  v13[1] = 0;
  v13[2] = 0;
  *v13 = 0;
  if (a5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_41;
  }
  if (a5 >= 0x17) {
    if ((a5 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (a5 | 7) + 1;
    }
    v16 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v17, 16, 0);
    v27_.v28 = a5;
    v27_.v29 = v16;
    v27_.v27 = v17 | 1;
    goto LABEL_18;
  }
  LOBYTE(v27_.v27) = 2 * a5;
  v16 = (char*)&v27_.v27 + 1;
  if (a5 != 0) {
  LABEL_18:
    memmove(v16, a4, a5);
  }
  v16[a5] = 0;
  if ((v27_.v27 & 1) != 0) {
    v18 = v27_.v29;
  }
  else {
    v18 = (char*)&v27_.v27 + 1;
  }
  if ((v27_.v27 & 1) != 0) {
    v19 = v27_.v28;
  }
  else {
    v19 = (unsigned __int64)(unsigned __int8)v27_.v27 >> 1;
  }
  result = (__int64*)GameRoutine_1a09ce0(v32_.v32, v18, v19);
  v21 = *result;
  v22 = result[1];
  *result = 0;
  result[1] = 0;
  *a1 = v21;
  a1[1] = v22;
  v23 = result[2];
  result[2] = 0;
  a1[2] = v23;
  if ((v27_.v27 & 1) != 0 && v27_.v29 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
  }
  if ((v32_.v32[0] & 1) != 0 && v32_.v33 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
  }
  if ((v30_.v30[0] & 1) != 0 && v30_.v31 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
  }
  return result;
}

__int64 wld_GfxLoader_loadFile(__int64 a1, unsigned __int8* a2, unsigned int a3,
                               __int64 a4, char a5)
{
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 result;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  bool v22;
  unsigned __int64 v23;
  unsigned __int8* v24;
  unsigned __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _BYTE* v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  bool v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int8* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _BYTE v52[32];
  _BYTE* v53;
  _BYTE v54[32];
  _BYTE* v55;
  _QWORD v56[4];
  _QWORD* v57;

  v8 = (_QWORD*)(a1 + 24LL * a3 + 536);
  if (*v8 != 0) {
    v9 = *(_QWORD*)(a1 + 24LL * a3 + 552);
    *(_QWORD*)(a1 + 24LL * a3 + 544) = 0;
    *(_QWORD*)(a1 + 24LL * a3 + 552) = 0;
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
    GameRoutine_634d80(*(_QWORD*)(*v8 + 8LL), *v8);
    *v8 = 0;
  }
  v10 = *a2;
  result = *(_QWORD*)(a4 + 32);
  if ((v10 & 1) != 0) {
    v12 = *((_QWORD*)a2 + 1);
  }
  else {
    v12 = v10 >> 1;
  }
  if (v12 == 0) {
    if (result != 0) {
      v56[0] = 0;
      return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)result + 48LL))(
          result, v56);
    }
    return result;
  }
  if (result == 0) {
    v19 = v8[2];
    v8[1] = 0;
    v8[2] = 0;
    if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak(v19);
    }
    v20 = *(_QWORD*)(game_g_frame_clock + 13432);
    v21 = *a2;
    v22 = (v21 & 1) == 0;
    v23 = v21 >> 1;
    if (v22) {
      v24 = a2 + 1;
    }
    else {
      v24 = *((unsigned __int8**)a2 + 2);
    }
    if (v22) {
      v25 = v23;
    }
    else {
      v25 = *((_QWORD*)a2 + 1);
    }
    if ((a5 & 1) != 0) {
      v44 = 0;
      v45 = 0;
      *v8 = (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int64,
                            __int64*))(*(_QWORD*)v20 + 40LL))(v20, v24, v25,
                                                              &v44);
      result = v45;
      if (v45 == 0) {
        return result;
      }
    }
    else {
      v46 = 0;
      v47 = 0;
      *v8 = (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int64,
                            __int64*, __int64))(*(_QWORD*)v20 + 16LL))(
          v20, v24, v25, &v46, 255);
      result = v47;
      if (v47 == 0) {
        return result;
      }
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  v13 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v14 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v14[2] = 0;
  v15 = v8[2];
  v14[8] = 0;
  *v14 = GameData_1fbf780;
  v14[1] = 0;
  v8[1] = v14 + 4;
  v8[2] = v14;
  if (v15 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    v16 = *(_QWORD*)(a4 + 32);
    if (v16 != 0) {
      goto LABEL_14;
    }
  LABEL_34:
    v18 = v8[1];
    v53 = nullptr;
    goto LABEL_35;
  }
  (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
  std___1___shared_weak_count___release_weak(v15);
  v16 = *(_QWORD*)(a4 + 32);
  if (v16 == 0) {
    goto LABEL_34;
  }
LABEL_14:
  if (v16 == a4) {
    v53 = v52;
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v16 + 24LL))(v16, v52);
    v17 = v53;
    v18 = v8[1];
    if (v53 != nullptr) {
      goto LABEL_37;
    }
  LABEL_35:
    v26 = *v13;
    v55 = nullptr;
    v27 = (_QWORD*)fw_memory_HeapManager_Allocate(v26, 64, 16, 0);
    v27[6] = 0;
    *v27 = GameData_1fd20c0;
    goto LABEL_45;
  }
  v17 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
  v53 = v17;
  v18 = v8[1];
  if (v17 == nullptr) {
    goto LABEL_35;
  }
LABEL_37:
  if (v17 == v52) {
    v55 = v54;
    (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v17 + 24LL))(v17, v54);
    v28 = v55;
  }
  else {
    v28 = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v17 + 16LL))(v17);
    v55 = v28;
  }
  v27 = (_QWORD*)fw_memory_HeapManager_Allocate(*v13, 64, 16, 0);
  *v27 = GameData_1fd20c0;
  v29 = v27 + 2;
  if (v28 != nullptr) {
    if (v28 == v54) {
      v27[6] = v29;
      v32 = v27;
      (*(void (**)(_BYTE*))(*(_QWORD*)v28 + 24LL))(v28);
      v27 = v32;
    }
    else {
      v30 = v27;
      v31 = (*(__int64 (**)(_BYTE*, _QWORD*))(*(_QWORD*)v28 + 16LL))(v28, v29);
      v27 = v30;
      v30[6] = v31;
    }
  }
  else {
    v27[6] = 0;
  }
LABEL_45:
  v57 = v27;
  GameRoutine_a934d0(v56, v18);
  if (v57 == v56) {
    v33 = 32;
  }
  else {
    if (v57 == nullptr) {
      goto LABEL_50;
    }
    v33 = 40;
  }
  (*(void (**)(__int64))(*v57 + v33))((__int64)v57);
LABEL_50:
  if (v55 == v54) {
    v34 = 32;
  }
  else {
    if (v55 == nullptr) {
      goto LABEL_55;
    }
    v34 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v55 + v34))((__int64)v55);
LABEL_55:
  if (v53 == v52) {
    v35 = 32;
    goto LABEL_59;
  }
  if (v53 != nullptr) {
    v35 = 40;
  LABEL_59:
    (*(void (**)(__int64))(*(_QWORD*)v53 + v35))((__int64)v53);
  }
  v36 = *(_QWORD*)(game_g_frame_clock + 13432);
  v37 = *a2;
  v38 = (v37 & 1) == 0;
  v39 = v37 >> 1;
  if (v38) {
    v40 = v39;
  }
  else {
    v40 = *((_QWORD*)a2 + 1);
  }
  if (v38) {
    v41 = a2 + 1;
  }
  else {
    v41 = *((unsigned __int8**)a2 + 2);
  }
  if ((a5 & 1) != 0) {
    v42 = v8[2];
    v48 = v8[1];
    v49 = v42;
    if (v42 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 16), 1u,
                                memory_order_relaxed);
    }
    *v8 =
        (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int64, __int64*))(
            *(_QWORD*)v36 + 40LL))(v36, v41, v40, &v48);
    result = v49;
    if (v49 == 0) {
      return result;
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  v43 = v8[2];
  v50 = v8[1];
  v51 = v43;
  if (v43 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                              memory_order_relaxed);
  }
  *v8 = (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int64, __int64*,
                        __int64))(*(_QWORD*)v36 + 16LL))(v36, v41, v40, &v50,
                                                         255);
  result = v51;
  if (v51 != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 GfxLoader_c46500(__int64* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 i;
  __int64 v53;
  struct {
    __int64 v56;
    __int64 v57;
    __int64 v58;
    unsigned __int64 v59;
    __int64* v60;
  } v56_;

  *(_BYTE*)(*(_QWORD*)(a2 + 360) + 168LL) = *((_BYTE*)a1 + 96);
  if (*((_BYTE*)a1 + 136) == 1 &&
      (v3 = *(_QWORD*)(a2 + 360), v4 = *(__int64*)((char*)a1 + 100),
       *(_DWORD*)(v3 + 172) = v4, *(_BYTE*)(v3 + 176) = BYTE4(v4),
       (a1[17] & 1) != 0)) {
    v5 = 120;
  }
  else {
    v5 = 144;
  }
  v6 = (__int64*)(*(_QWORD*)(a2 + 360) + v5);
  v7 = *v6;
  v8 = v6[1];
  if (*v6 != v8) {
    do {
      v8 -= 232;
      Manager_c47290_alt2(v8);
    } while (v8 != v7);
  }
  v6[1] = v7;
  v9 = *a1;
  if (a1[1] != *a1) {
    v10 = 0;
    v11 = 0;
    do {
      v13 = v9 + 232 * v10;
      if (*(_BYTE*)(v13 + 176) == 1) {
        *(_BYTE*)(v13 + 176) = 0;
      }
      if (*(_BYTE*)(v13 + 224) == 1) {
        *(_BYTE*)(v13 + 224) = 0;
      }
      if (*(_BYTE*)(v13 + 200) == 1) {
        *(_BYTE*)(v13 + 200) = 0;
      }
      v14 = a1[3];
      v15 = *(_QWORD*)(v14 + 8 * v10);
      if (v15 == 0) {
        goto LABEL_29;
      }
      v16 = *(_QWORD*)(v15 + 592);
      if (v16 == 0 || GameRoutine_5fc1f0_alt1(v16) == 0) {
        goto LABEL_29;
      }
      v17 = GameRoutine_5fc1f0_alt1(
          *(_QWORD*)(*(_QWORD*)(v14 + 8 * v10) + 592LL));
      v18 = **(_QWORD**)(v17 + 40);
      v19 = *(_DWORD*)(v18 + 144);
      v20 = *(_QWORD*)(*(_QWORD*)(v18 + 128) + 8LL);
      if ((*(_BYTE*)(v13 + 176) & 1) == 0) {
        *(_BYTE*)(v13 + 176) = 1;
      }
      *(_QWORD*)(v13 + 160) = v20;
      *(_DWORD*)(v13 + 168) = v19;
      if (*(_QWORD*)(a1[6] + 8 * v10) != 0 ||
          *(int*)(*(_QWORD*)(v17 + 56) + 4LL) < 2) {
        if (*(_BYTE*)(v13 + 224) != 1) {
          goto LABEL_29;
        }
        v25 = 0;
      }
      else {
        v21 = *(_BYTE*)(v13 + 224);
        v22 = *(_QWORD*)(*(_QWORD*)(v17 + 40) + 8LL);
        v23 = *(_QWORD*)(v22 + 144);
        v24 = *(_QWORD*)(*(_QWORD*)(v22 + 128) + 8LL);
        *(_DWORD*)(v13 + 216) = v23;
        *(_QWORD*)(v13 + 208) = v24;
        if ((v21 & 1) != 0) {
          goto LABEL_29;
        }
        v25 = 1;
      }
      *(_BYTE*)(v13 + 224) = v25;
    LABEL_29:
      v26 = a1[6];
      v27 = *(_QWORD*)(v26 + 8 * v10);
      if (v27 != 0) {
        v28 = *(_QWORD*)(v27 + 592);
        if (v28 != 0 && GameRoutine_5fc1f0_alt1(v28) != 0) {
          v29 = GameRoutine_5fc1f0_alt1(
              *(_QWORD*)(*(_QWORD*)(v26 + 8 * v10) + 592LL));
          v30 = *(_BYTE*)(v13 + 224);
          v31 =
              *(_QWORD*)(*(_QWORD*)(v29 + 40) +
                         8LL * ((signed __int32)*(
                                    _DWORD*)(*(_QWORD*)(v29 + 56) + 4LL) > 1));
          v32 = *(_QWORD*)(v31 + 144);
          v33 = *(_QWORD*)(*(_QWORD*)(v31 + 128) + 8LL);
          *(_DWORD*)(v13 + 216) = v32;
          *(_QWORD*)(v13 + 208) = v33;
          if ((v30 & 1) == 0) {
            *(_BYTE*)(v13 + 224) = 1;
          }
        }
      }
      v34 = a1[9];
      v35 = *(_QWORD*)(v34 + 8 * v10);
      if (v35 != 0) {
        v36 = *(_QWORD*)(v35 + 592);
        if (v36 != 0 && GameRoutine_5fc1f0_alt1(v36) != 0) {
          v37 = GameRoutine_5fc1f0_alt1(
              *(_QWORD*)(*(_QWORD*)(v34 + 8 * v10) + 592LL));
          v38 = *(_BYTE*)(v13 + 200);
          v39 = **(_QWORD**)(v37 + 40);
          v40 = *(_QWORD*)(v39 + 144);
          v41 = *(_QWORD*)(*(_QWORD*)(v39 + 128) + 8LL);
          *(_DWORD*)(v13 + 192) = v40;
          *(_QWORD*)(v13 + 184) = v41;
          if ((v38 & 1) == 0) {
            *(_BYTE*)(v13 + 200) = 1;
          }
        }
      }
      v43 = v6[1];
      v42 = v6[2];
      if (v43 < v42) {
        Manager_c473c0_alt1(v6[1], (__int64*)v13);
        v12 = v43 + 232;
      }
      else {
        v44 = *v6;
        v45 = v43 - *v6;
        v46 = 0x34F72C234F72C235LL * (v45 >> 3) + 1;
        if (v46 > 0x11A7B9611A7B961LL) {
          GameRoutine_c47790_alt1();
        }
        v56_.v60 = v6 + 2;
        v47 = 0x34F72C234F72C235LL * ((__int64)(v42 - v44) >> 3);
        if (2 * v47 > v46) {
          v46 = 2 * v47;
        }
        if (v47 >= 0x8D3DCB08D3DCB0LL) {
          v48 = 0x11A7B9611A7B961LL;
        }
        else {
          v48 = v46;
        }
        if (v48 != 0) {
          if (v48 > 0x11A7B9611A7B961LL) {
            GameRoutine_60a210_alt1();
          }
          v49 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 232 * v48, 16, 0);
        }
        else {
          v49 = 0;
        }
        v50 = v49 + v45;
        v56_.v56 = v49;
        v56_.v57 = v50;
        v56_.v59 = v49 + 232 * v48;
        Manager_c473c0_alt1(v50, (__int64*)v13);
        v56_.v58 = v50 + 232;
        Manager_c475a0_alt1(v6, &v56_.v56);
        v12 = v6[1];
        v51 = v56_.v57;
        for (i = v56_.v58; i != v51; Manager_c47290_alt2(i)) {
          i -= 232;
        }
        if (v56_.v56 != 0) {
          v53 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v53 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v56_.v56);
        }
      }
      v6[1] = v12;
      v9 = *a1;
      v10 = ++v11;
    } while (0x34F72C234F72C235LL * ((a1[1] - *a1) >> 3) >
             (unsigned __int64)v11);
  }
  return GameRoutine_b86ad0_alt1(a2);
}

void GfxLoader_c46f00(__int64* a1, unsigned __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;

  v2 = a1[1];
  v3 = a1[2];
  if (0x4EC4EC4EC4EC4EC5LL * ((v3 - v2) >> 2) >= a2) {
    if (a2 != 0) {
      v12 = v2 + 52 * a2;
      v13 = 52 * a2 - 52;
      if ((~(v13 / 0x34) & 3) != 0) {
        v14 = -(__int64)(((unsigned __int8)(v13 / 0x34) + 1) & 3);
        do {
          *(_QWORD*)v2 = 0;
          *(_QWORD*)(v2 + 8) = 0;
          *(_QWORD*)(v2 + 16) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 24) = 0x3F8000003F800000LL;
          v15 = __CFADD__(v14++, 1);
          *(_QWORD*)(v2 + 32) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 40) = 0x3F8000003F800000LL;
          *(_DWORD*)(v2 + 48) = 1065353216;
          v2 += 52;
        } while (!v15);
      }
      if (v13 >= 0x9C) {
        do {
          *(_QWORD*)v2 = 0;
          *(_QWORD*)(v2 + 8) = 0;
          *(_QWORD*)(v2 + 16) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 24) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 32) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 40) = 0x3F8000003F800000LL;
          *(_DWORD*)(v2 + 48) = 1065353216;
          *(_QWORD*)(v2 + 52) = 0;
          *(_QWORD*)(v2 + 60) = 0;
          *(_QWORD*)(v2 + 68) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 76) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 84) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 92) = 0x3F8000003F800000LL;
          *(_DWORD*)(v2 + 100) = 1065353216;
          *(_QWORD*)(v2 + 104) = 0;
          *(_QWORD*)(v2 + 112) = 0;
          *(_QWORD*)(v2 + 120) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 128) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 136) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 144) = 0x3F8000003F800000LL;
          *(_DWORD*)(v2 + 152) = 1065353216;
          *(_QWORD*)(v2 + 164) = 0;
          *(_QWORD*)(v2 + 156) = 0;
          *(_QWORD*)(v2 + 172) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 180) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 188) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 196) = 0x3F8000003F800000LL;
          *(_DWORD*)(v2 + 204) = 1065353216;
          v2 += 208;
        } while (v2 != v12);
      }
      v2 = v12;
    }
    a1[1] = v2;
  }
  else {
    v5 = v2 - *a1;
    v6 = a2 + 0x4EC4EC4EC4EC4EC5LL * (v5 >> 2);
    if (v6 > 0x4EC4EC4EC4EC4ECLL) {
      GameRoutine_c47230_alt1();
    }
    v7 = fw_memory_g_heap_manager_ptr;
    v8 = 0x4EC4EC4EC4EC4EC5LL * ((v3 - *a1) >> 2);
    if (2 * v8 > v6) {
      v6 = 2 * v8;
    }
    if (v8 >= 0x276276276276276LL) {
      v9 = 0x4EC4EC4EC4EC4ECLL;
    }
    else {
      v9 = v6;
    }
    if (v9 != 0) {
      if (v9 > 0x4EC4EC4EC4EC4ECLL) {
        GameRoutine_60a210_alt1();
      }
      v10 = a2;
      v11 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 52 * v9, 16, 0);
      a2 = v10;
    }
    else {
      v11 = 0;
    }
    v16 = v11 + v5;
    v17 = 52 * a2 - 52;
    v18 = v11 + v5 + 52 * a2;
    if ((~(v17 / 0x34) & 3) != 0) {
      v20 = -(__int64)(((unsigned __int8)(v17 / 0x34) + 1) & 3);
      v19 = v16;
      do {
        *(_QWORD*)v19 = 0;
        *(_QWORD*)(v19 + 8) = 0;
        *(_QWORD*)(v19 + 16) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 24) = 0x3F8000003F800000LL;
        v15 = __CFADD__(v20++, 1);
        *(_QWORD*)(v19 + 32) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 40) = 0x3F8000003F800000LL;
        *(_DWORD*)(v19 + 48) = 1065353216;
        v19 += 52;
      } while (!v15);
    }
    else {
      v19 = v16;
    }
    if (v17 >= 0x9C) {
      do {
        *(_QWORD*)v19 = 0;
        *(_QWORD*)(v19 + 8) = 0;
        *(_QWORD*)(v19 + 16) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 24) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 32) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 40) = 0x3F8000003F800000LL;
        *(_DWORD*)(v19 + 48) = 1065353216;
        *(_QWORD*)(v19 + 52) = 0;
        *(_QWORD*)(v19 + 60) = 0;
        *(_QWORD*)(v19 + 68) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 76) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 84) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 92) = 0x3F8000003F800000LL;
        *(_DWORD*)(v19 + 100) = 1065353216;
        *(_QWORD*)(v19 + 104) = 0;
        *(_QWORD*)(v19 + 112) = 0;
        *(_QWORD*)(v19 + 120) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 128) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 136) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 144) = 0x3F8000003F800000LL;
        *(_DWORD*)(v19 + 152) = 1065353216;
        *(_QWORD*)(v19 + 164) = 0;
        *(_QWORD*)(v19 + 156) = 0;
        *(_QWORD*)(v19 + 172) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 180) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 188) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 196) = 0x3F8000003F800000LL;
        *(_DWORD*)(v19 + 204) = 1065353216;
        v19 += 208;
      } while (v19 != v18);
    }
    v21 = v11 + 52 * v9;
    v22 = *a1;
    v23 = a1[1] - *a1;
    v24 = v16 - v23;
    memcpy_alt1(v16 - v23, *a1, v23);
    *a1 = v24;
    a1[1] = v18;
    a1[2] = v21;
    if (v22 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v7 + v25, v22);
    }
  }
}

__int64 GfxLoader_c48320(__int64 result, __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int8* v3;
  _QWORD* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  unsigned int* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  bool* v21;
  struct {
    __int64 v22;
    unsigned __int64 v23;
    char* v24;
  } v22_;
  _QWORD v25[2];

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD*)(result + 56) + *(_QWORD*)(result + 48) - 1LL;
  v3 =
      *(unsigned __int8**)(*(_QWORD*)(*(_QWORD*)(result + 24) + 8 * (v2 >> 9)) +
                           8 * (v2 & 0x1FF));
  if (v3 != nullptr) {
    v5 = (_QWORD*)result;
    if ((*(_BYTE*)a2 & 1) != 0) {
      result = fw_text_String_CopyTerminated(&v22_.v22, a2[2], a2[1]),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v6 = a2[1];
      v22_.v22 = *a2;
      v22_.v23 = v6;
      v22_.v24 = (char*)a2[2];
    }
    if ((v22_.v22 & 1) != 0) {
      v7 = v22_.v23;
    }
    else {
      v7 = (unsigned __int64)(unsigned __int8)v22_.v22 >> 1;
    }
    if ((v22_.v22 & 1) != 0 && v22_.v24 != nullptr) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (v7 == 0) {
    LABEL_33:
      v21 = (bool*)a2[3];
      result = GameRoutine_dbf0(*v3),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *v21 = (result & 0x100000000LL) != 0;
      return result;
    }
    v9 = v5[7] + v5[6] - 1LL;
    v10 = *(_QWORD*)(*(_QWORD*)(v5[3] + 8 * (v9 >> 9)) + 8 * (v9 & 0x1FF));
    if ((*(_BYTE*)a2 & 1) != 0) {
      result = fw_text_String_CopyTerminated(&v22_.v22, a2[2], a2[1]),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v11 = a2[1];
      v22_.v22 = *a2;
      v22_.v23 = v11;
      v22_.v24 = (char*)a2[2];
    }
    if ((*(_BYTE*)v10 & 0x7F) == 8 &&
        ((v22_.v22 & 1) == 0 ? (v12 = (char*)&v22_.v22 + 1) : (v12 = v22_.v24),
         v13 = strlen(v12), v14 = *(unsigned int**)(v10 + 1), v25[0] = v12,
         v25[1] = v13, result = (__int64)game_6b7f00(v14, 0, v14, v14[1], v25),
         v15 != v14[1])) {
      v16 = *(unsigned int*)result;
      if (v15 >= v16) {
        v18 = v15 - v16;
        v19 = __clz(v18 + 16);
        v17 = *(_QWORD*)(*(_QWORD*)(result + 16) + 8 * (27 - v19) + 8) +
              32LL *
                  (unsigned int)(v18 - *((_DWORD*)GameData_212ce38 + 28 - v19));
      }
      else {
        v17 = *(_QWORD*)(result + 8) + 32 * v15;
      }
      v3 = (unsigned __int8*)(v17 + 16);
      if ((v22_.v22 & 1) == 0) {
        goto LABEL_32;
      }
    }
    else {
      v3 = nullptr;
      if ((v22_.v22 & 1) == 0) {
        goto LABEL_32;
      }
    }
    if (v22_.v24 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_32:
    if (v3 == nullptr) {
      return result;
    }
    goto LABEL_33;
  }
  return result;
}

float GfxLoader_c48550(_QWORD* a1, __int64* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v5;
  float result;
  unsigned __int64 v7;
  __int64 v8;
  char v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  const char* v13;
  unsigned __int64 v14;
  unsigned int* v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64 v24;
    unsigned __int64 v25;
    const char* v26;
  } v24_;
  struct {
    __int64 v27;
    unsigned __int64 v28;
    const char* v29;
    float* v30;
  } v27_;
  float v31;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = a1[7] + a1[6] - 1LL;
  if (*(_QWORD*)(*(_QWORD*)(a1[3] + 8 * (v3 >> 9)) + 8 * (v3 & 0x1FF)) == 0) {
    goto LABEL_27;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v27_.v27, a2[2], a2[1]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v5 = a2[1];
    v27_.v27 = *a2;
    v27_.v28 = v5;
    v27_.v29 = (const char*)a2[2];
  }
  if ((v27_.v27 & 1) != 0) {
    v7 = v27_.v28;
  }
  else {
    v7 = (unsigned __int64)(unsigned __int8)v27_.v27 >> 1;
  }
  if ((v27_.v27 & 1) != 0 && v27_.v29 != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, (__int64)v27_.v29),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v9 = *(_BYTE*)a2;
  if (v7 == 0) {
    goto LABEL_30;
  }
  v10 = a1[7] + a1[6] - 1LL;
  v11 = *(_QWORD*)(*(_QWORD*)(a1[3] + 8 * (v10 >> 9)) + 8 * (v10 & 0x1FF));
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v27_.v27, a2[2], a2[1]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v12 = a2[1];
    v27_.v27 = *a2;
    v27_.v28 = v12;
    v27_.v29 = (const char*)a2[2];
  }
  if ((*(_BYTE*)v11 & 0x7F) == 8) {
    if ((v27_.v27 & 1) != 0) {
      v13 = v27_.v29;
    }
    else {
      v13 = (char*)&v27_.v27 + 1;
    }
    v14 = strlen_alt1(v13),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v15 = *(unsigned int**)(v11 + 1);
    v24_.v24 = (__int64)v13;
    v24_.v25 = v14;
    game_6b7f00_alt1(v15, 0, v15, v15[1], &v24_.v24),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v17 = v16 == v15[1];
    if ((v27_.v27 & 1) != 0) {
    LABEL_22:
      if (v27_.v29 != nullptr) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v27_.v29),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  else {
    v17 = true;
    if ((v27_.v27 & 1) != 0) {
      goto LABEL_22;
    }
  }
  if (v17) {
  LABEL_27:
    v19 = a2[3];
    if (*(_BYTE*)(v19 + 4) == 1) {
      *(_BYTE*)(v19 + 4) = 0;
    }
    return result;
  }
  v9 = *(_BYTE*)a2;
LABEL_30:
  if ((v9 & 1) != 0) {
    fw_text_String_CopyTerminated(&v24_.v24, a2[2], a2[1]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v24_.v24 & 1) != 0) {
      goto LABEL_32;
    }
  }
  else {
    v20 = a2[1];
    v24_.v24 = *a2;
    v24_.v25 = v20;
    v24_.v26 = (const char*)a2[2];
    if ((v24_.v24 & 1) != 0) {
    LABEL_32:
      fw_text_String_CopyTerminated(&v27_.v27, (__int64)v24_.v26, v24_.v25),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_35;
    }
  }
  v27_.v27 = v24_.v24;
  v27_.v28 = v24_.v25;
  v27_.v29 = v24_.v26;
LABEL_35:
  v27_.v30 = &v31;
  GameRoutine_c47a00(a1, &v27_.v27),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v27_.v27 & 1) != 0 && v27_.v29 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (__int64)v27_.v29),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v24_.v24 & 1) != 0 && v24_.v26 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v24_.v26),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  result = v31;
  v23 = a2[3];
  *(_BYTE*)(v23 + 4) = 1;
  *(float*)v23 = result;
  return result;
}

void wld_GfxLoader_loadSunPrecomputeData_lambda0_Invoke(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  double v6;
  double v7;
  int v8;
  float v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)a2 != 0) {
    v4 = *(_QWORD*)(*(_QWORD*)a2 + 592LL);
    if (v4 != 0) {
      v5 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 248, 16, 0);
      *(_QWORD*)(v5 + 96) = 0;
      *(_QWORD*)(v5 + 112) = 0;
      *(_QWORD*)(v5 + 120) = 0;
      *(_QWORD*)(v5 + 128) = 0;
      *(_QWORD*)(v5 + 136) = 0;
      *(_QWORD*)(v5 + 16) = 0x4022000000000000LL;
      *(_QWORD*)(v5 + 24) = 0x100000000LL;
      *(_QWORD*)(v5 + 32) = 1;
      *(_QWORD*)(v5 + 40) = 0;
      *(_QWORD*)(v5 + 64) = 0x4022000000000000LL;
      *(_QWORD*)(v5 + 72) = 0x100000000LL;
      *(_QWORD*)(v5 + 80) = 1;
      *(_QWORD*)(v5 + 88) = 0;
      *(_QWORD*)(v5 + 144) = 0;
      *(_QWORD*)(v5 + 152) = 0;
      *(_QWORD*)(v5 + 160) = 0;
      *(_QWORD*)(v5 + 168) = 0;
      *(_QWORD*)(v5 + 176) = 0;
      *(_QWORD*)(v5 + 184) = 0;
      *(_QWORD*)(v5 + 192) = 0;
      *(_QWORD*)(v5 + 200) = 0;
      *(_QWORD*)(v5 + 208) = 0;
      *(_QWORD*)(v5 + 216) = 0;
      *(_QWORD*)(v5 + 224) = 0;
      *(_QWORD*)(v5 + 232) = 0;
      *(_QWORD*)(v5 + 240) = 0;
      *(_QWORD*)v5 = 0x40417E353F7CED91LL;
      *(_QWORD*)(v5 + 8) = 0x4060F8474538EF35LL;
      *(_QWORD*)(v5 + 48) = 0x40417E353F7CED91LL;
      *(_QWORD*)(v5 + 56) = 0x4060F8474538EF35LL;
      *(_QWORD*)(v5 + 104) = 0;
      if (*(_DWORD*)v4 != 4) {
        goto LABEL_57;
      }
      *(double*)v5 = *(float*)(v4 + 16);
      v6 = *(float*)(v4 + 20);
      *(double*)(v5 + 8) = v6;
      v7 = *(float*)(v4 + 24);
      *(double*)(v5 + 16) = v7;
      v8 = *(_DWORD*)(v4 + 32);
      *(_DWORD*)(v5 + 24) = v8;
      *(_DWORD*)(v5 + 28) = *(_DWORD*)(v4 + 36);
      *(_DWORD*)(v5 + 32) = *(_DWORD*)(v4 + 40);
      v9 = *(float*)(v4 + 28);
      *(double*)(v5 + 64) = v7;
      *(_DWORD*)(v5 + 72) = v8;
      *(double*)(v5 + 48) = v9;
      *(double*)(v5 + 56) = v6;
      *(_DWORD*)(v5 + 76) = *(_DWORD*)(v4 + 44);
      *(_DWORD*)(v5 + 80) = *(_DWORD*)(v4 + 48);
      LODWORD(v7) = *(_DWORD*)(v4 + 56);
      *(_DWORD*)(v5 + 96) = *(_DWORD*)(v4 + 52);
      *(_DWORD*)(v5 + 100) = LODWORD(v7);
      v10 = *(int*)(v4 + 4);
      if ((_DWORD)v10 != 0) {
        GameRoutine_c3f7a0_alt1((__int64*)(v5 + 104), v10);
        v11 = *(_QWORD*)(v5 + 128);
        v12 = *(int*)(v4 + 4);
        v13 = 0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD*)(v5 + 136) - v11) >> 2);
        if (v12 <= v13) {
          if (v12 < v13) {
            *(_QWORD*)(v5 + 136) = v11 + 52LL * (int)v12;
          }
        }
        else {
          GfxLoader_c46f00((__int64*)(v5 + 128), v12 - v13);
        }
      }
      v17 = *(_QWORD*)(v5 + 152);
      v18 = *(int*)(v4 + 8);
      v19 = 0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD*)(v5 + 160) - v17) >> 2);
      if (v18 <= v19) {
        if (v18 < v19) {
          *(_QWORD*)(v5 + 160) = v17 + 52LL * (int)v18;
        }
      }
      else {
        GfxLoader_c46f00((__int64*)(v5 + 152), v18 - v19);
        v18 = *(int*)(v4 + 8);
      }
      v20 = *(_QWORD*)(v5 + 176);
      v21 = *(_QWORD*)(v5 + 184);
      v22 = v21 - v20;
      v23 = (v21 - v20) >> 4;
      v24 = v18 - v23;
      if (v18 <= v23) {
        if (v18 >= v23) {
          goto LABEL_34;
        }
        v34 = v20 + 16 * v18;
      }
      else {
        v25 = *(_QWORD*)(v5 + 192);
        if (v24 > (v25 - v21) >> 4) {
          if (v18 >> 60 != 0) {
            GameRoutine_c47250_alt1();
          }
          v26 = v25 - v20;
          if (v26 >> 3 > v18) {
            v18 = v26 >> 3;
          }
          if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF0LL) {
            v27 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v27 = v18;
          }
          if (v27 >> 60 != 0) {
            goto LABEL_59;
          }
          v28 = fw_memory_HeapManager_Allocate_alt1(*v3, 16 * v27, 16, 0);
          v29 = v28 + v22;
          v30 = v28 + 16 * v27;
          memset_alt2(v28 + v22, 0, 16 * v24);
          v31 = v29 + 16 * v24;
          v32 = v29 - 16 * v23;
          memcpy_alt1(v32, v20, v22);
          *(_QWORD*)(v5 + 176) = v32;
          *(_QWORD*)(v5 + 184) = v31;
          *(_QWORD*)(v5 + 192) = v30;
          if (v20 != 0) {
            v33 = 128;
            if (*(_QWORD*)(*v3 + 200) == 0) {
              v33 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v3 + v33, v20);
          }
        LABEL_34:
          v35 = *(_QWORD*)(v5 + 200);
          v36 = *(int*)(v4 + 12);
          v37 = (*(_QWORD*)(v5 + 208) - v35) >> 2;
          if (v36 <= v37) {
            if (v36 < v37) {
              *(_QWORD*)(v5 + 208) = v35 + 4 * v36;
            }
          }
          else {
            GameRoutine_bdff40_alt1((__int64*)(v5 + 200), v36 - v37);
            v36 = *(int*)(v4 + 12);
          }
          v38 = *(_QWORD*)(v5 + 224);
          v39 = *(_QWORD*)(v5 + 232);
          v40 = v39 - v38;
          v41 = (v39 - v38) >> 3;
          v42 = v36 - v41;
          if (v36 <= v41) {
            if (v36 >= v41) {
              goto LABEL_55;
            }
            v52 = v38 + 8 * v36;
          }
          else {
            v43 = *(_QWORD*)(v5 + 240);
            if (v42 > (v43 - v39) >> 3) {
              if (v36 >> 61 != 0) {
                GameRoutine_c47270_alt1();
              }
              v44 = v43 - v38;
              if (v44 >> 2 > v36) {
                v36 = v44 >> 2;
              }
              if ((unsigned __int64)v44 >= 0x7FFFFFFFFFFFFFF8LL) {
                v45 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v45 = v36;
              }
              if (v45 >> 61 == 0) {
                v46 = fw_memory_HeapManager_Allocate_alt1(*v3, 8 * v45, 16, 0);
                v47 = v46 + v40;
                v48 = v46 + 8 * v45;
                memset_alt2(v46 + v40, 0, 8 * v42);
                v49 = v47 + 8 * v42;
                v50 = v47 - 8 * v41;
                memcpy_alt1(v50, v38, v40);
                *(_QWORD*)(v5 + 224) = v50;
                *(_QWORD*)(v5 + 232) = v49;
                *(_QWORD*)(v5 + 240) = v48;
                if (v38 != 0) {
                  v51 = 128;
                  if (*(_QWORD*)(*v3 + 200) == 0) {
                    v51 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v3 + v51, v38);
                }
                goto LABEL_55;
              }
            LABEL_59:
              GameRoutine_60a210_alt1();
            }
            memset_alt2(*(_QWORD*)(v5 + 232), 0, 8 * v42);
            v52 = v39 + 8 * v42;
          }
          *(_QWORD*)(v5 + 232) = v52;
        LABEL_55:
          memcpy_alt1(*(_QWORD*)(v5 + 104), v4 + 64, 4LL * *(int*)(v4 + 4));
          v53 = *(int*)(v4 + 4);
          v54 = v4 + 64 + 4 * v53;
          memcpy_alt1(*(_QWORD*)(v5 + 128), v54, 52LL * (int)v53);
          v55 = v54 + 52LL * *(int*)(v4 + 4);
          memcpy_alt1(*(_QWORD*)(v5 + 152), v55, 52LL * *(int*)(v4 + 8));
          v56 = *(int*)(v4 + 8);
          v57 = v55 + 52LL * (int)v56;
          memcpy_alt1(*(_QWORD*)(v5 + 176), v57, 16 * v56);
          v58 = *(unsigned int*)(v4 + 12);
          if ((int)v58 >= 1) {
            v59 = v57 + 16LL * *(int*)(v4 + 8);
            memcpy_alt1(*(_QWORD*)(v5 + 200), v59, 4 * v58);
            memcpy_alt1(*(_QWORD*)(v5 + 224), v59 + 4LL * *(int*)(v4 + 12),
                        8LL * *(int*)(v4 + 12));
          }
        LABEL_57:
          v60 = *(_QWORD*)(*(_QWORD*)v2 + 360LL);
          v15 = *(_QWORD**)(v60 + 184);
          *(_QWORD*)(v60 + 184) = v5;
          if (v15 == nullptr) {
            return;
          }
          goto LABEL_8;
        }
        memset_alt2(*(_QWORD*)(v5 + 184), 0, 16 * v24);
        v34 = v21 + 16 * v24;
      }
      *(_QWORD*)(v5 + 184) = v34;
      goto LABEL_34;
    }
  }
  v14 = *(_QWORD*)(*(_QWORD*)v2 + 360LL);
  v15 = *(_QWORD**)(v14 + 184);
  *(_QWORD*)(v14 + 184) = 0;
  if (v15 == nullptr) {
    return;
  }
LABEL_8:
  GameRoutine_c4a5a0_alt1(v15);
  v16 = 128;
  if (*(_QWORD*)(*v3 + 200) == 0) {
    v16 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v3 + v16, (__int64)v15);
}

__int64 wld_GfxLoader_loadDomeLightTexture_lambda0_Invoke(__int64 a1,
                                                          __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  int v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v15;
    int v16;
  } v15_;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 == 0 || (v4 = *(_QWORD*)(v3 + 592)) == 0 ||
      GameRoutine_5fc1f0_alt1(v4) == 0 ||
      ((result = GameRoutine_5fc1f0_alt1(*(_QWORD*)(v3 + 592)),
        v6 = **(_QWORD**)(result + 40), v7 = *(_DWORD*)(v6 + 144),
        (v8 = *(_QWORD*)(*(_QWORD*)(v6 + 128) + 8LL)) != 0)
           ? (v9 = v7 == -1)
           : (v9 = true),
       v9)) {
    result = (__int64)X8CALL_X0(
        _QWORD*,
        GameRoutine_b34420((void*)((__int64)&v15_.v15),
                           *(_QWORD**)(*game_g_frame_clock_ptr[0] + 13424),
                           (__int64)"Graphics/Textures/common_default", 0x20u,
                           (__int64)"Cmn_Default_LSPV_BC", 0x13u, 0));
    v8 = v15_.v15;
    v7 = v15_.v16;
  }
  v10 = *(_QWORD*)(*(_QWORD*)v2 + 24LL);
  if (v10 != 0) {
    v11 = *(_QWORD*)(*(_QWORD*)v2 + 16LL);
    v12 = *(_QWORD*)(*(_QWORD*)v2 + 24LL);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    v13 = std___1___shared_weak_count_lock(v12);
    result = std___1___shared_weak_count___release_weak(v10);
    if (v13 != 0) {
      if (v11 != 0) {
        v14 = *(_QWORD*)(v11 + 288);
        *(_QWORD*)(v14 + 1008) = v8;
        *(_DWORD*)(v14 + 1016) = v7;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        return std___1___shared_weak_count___release_weak(v13);
      }
    }
  }
  return result;
}

__int64 wld_GfxLoader_loadCloudTexture_lambda0_Invoke(__int64 result,
                                                      __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(_QWORD*)(result + 8);
  v3 = *a2;
  if (*a2 != 0 && (result = *(_QWORD*)(v3 + 592)) != 0 &&
      (result = GameRoutine_5fc1f0(result)) != 0) {
    result = GameRoutine_5fc1f0(*(_QWORD*)(v3 + 592));
    v4 = **(_QWORD**)(result + 40);
    v5 = *(_DWORD*)(v4 + 144);
    v6 = *(_QWORD*)(*(_QWORD*)(v4 + 128) + 8LL);
  }
  else {
    v6 = 0;
    v5 = -1;
  }
  v7 = *(_QWORD*)(*(_QWORD*)v2 + 24LL);
  if (v7 != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)v2 + 16LL);
    v9 = *(_QWORD*)(*(_QWORD*)v2 + 24LL);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    v10 = std___1___shared_weak_count_lock(v9);
    result = std___1___shared_weak_count___release_weak(v7);
    if (v10 != 0) {
      if (v8 != 0) {
        v11 = *(_QWORD*)(v8 + 288);
        *(_QWORD*)(v11 + 528) = v6;
        *(_DWORD*)(v11 + 536) = v5;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        return std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
  return result;
}

__int64 wld_GfxLoader_loadFogTexture_lambda0_Invoke(__int64 result, __int64* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;

  v2 = *(__int64**)(result + 8);
  v3 = *a2;
  if (*a2 == 0 || (result = *(_QWORD*)(v3 + 592)) == 0 ||
      (result = GameRoutine_5fc1f0(result)) == 0 ||
      ((result = GameRoutine_5fc1f0(*(_QWORD*)(v3 + 592)),
        v4 = **(_QWORD**)(result + 40), v5 = *(unsigned int*)(v4 + 144),
        (v6 = *(_QWORD*)(*(_QWORD*)(v4 + 128) + 8LL)) != 0)
           ? (v7 = v5 == 0xFFFFFFFFLL)
           : (v7 = true),
       v7)) {
    v6 = v2[123];
    LODWORD(v5) = *((_DWORD*)v2 + 248);
  }
  v8 = *v2;
  *(_QWORD*)(v8 + 400) = v6;
  *(_DWORD*)(v8 + 408) = v5;
  return result;
}

_QWORD* wld_GfxLoader_loadFile_lambda0_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_1fd20c0;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
    }
    else {
      v5 = result;
      result[6] = X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
              *v4 + 16LL))((void*)v4, v4, v3));
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 wld_GfxLoader_loadFile_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 48);
  v4 = *a2;
  if (v2 == 0) {
    GameRoutine_60a310(0, a2);
  }
  return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v2 + 48LL))(v2, &v4);
}

void GfxLoader_c49a80(__int64** a1, __int64* a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  char v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  unsigned __int64 v20;
  _BOOL4 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  unsigned __int64 v36;
  __int64 v37;
  struct {
    __int64 v38;
    unsigned __int64 v39;
    char* v40;
    __int64* v41;
  } v38_;
  unsigned int v42;
  struct {
    __int64 v43;
    unsigned __int64 v44;
    char* v45;
  } v43_;

  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v38_.v38, a2[2], a2[1]);
  }
  else {
    v4 = a2[1];
    v38_.v38 = *a2;
    v38_.v39 = v4;
    v38_.v40 = (char*)a2[2];
  }
  if ((v38_.v38 & 1) != 0) {
    v5 = v38_.v39;
  }
  else {
    v5 = (unsigned __int64)(unsigned __int8)v38_.v38 >> 1;
  }
  if ((v38_.v38 & 1) != 0 && v38_.v40 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, (__int64)v38_.v40);
  }
  if (v5 == 0) {
    goto LABEL_50;
  }
  v7 = *a1;
  v38_.v39 = 0;
  v38_.v40 = nullptr;
  v38_.v38 = 0;
  LOWORD(v43_.v43) = 0;
  timeline_2020((unsigned __int16*)v7, &v43_.v43);
  v8 = (__int16)v43_.v43;
  v9 = fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, (__int16)v43_.v43, 16, 0);
  memset_alt2(v10, 0, v8);
  Value_2500_alt1(*a1, v10, v8);
  GameRoutine_60a060((char*)&v38_.v38, v10, (__int16)v43_.v43);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v11, v10);
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v43_.v43, a2[2], a2[1]);
  }
  else {
    v12 = a2[1];
    v43_.v43 = *a2;
    v43_.v44 = v12;
    v43_.v45 = (char*)a2[2];
  }
  v13 = v38_.v38 & 1;
  v14 = v43_.v43;
  if (v13 != 0) {
    v15 = v38_.v40;
  }
  else {
    v15 = (char*)&v38_.v38 + 1;
  }
  v16 = (__int64)v43_.v45;
  if ((v38_.v38 & 1) != 0) {
    v17 = v38_.v39;
  }
  else {
    v17 = (unsigned __int64)(unsigned __int8)v38_.v38 >> 1;
  }
  if ((v43_.v43 & 1) != 0) {
    v18 = v43_.v44;
  }
  else {
    v18 = (unsigned __int64)(unsigned __int8)v43_.v43 >> 1;
  }
  if ((v43_.v43 & 1) != 0) {
    v19 = v43_.v45;
  }
  else {
    v19 = (char*)&v43_.v43 + 1;
  }
  if (v17 >= v18) {
    v20 = v18;
  }
  else {
    v20 = v17;
  }
  v22 = memcmp_alt1((__int64)v19, (__int64)v15, v20) == 0 && v18 == v17;
  if ((v14 & 1) != 0 && v16 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v23, v16);
    v13 = v38_.v38 & 1;
  }
  if (v13 != 0 && v38_.v40 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v24, (__int64)v38_.v40);
  }
  if (v22) {
  LABEL_50:
    v25 = *a1;
    v42 = 0;
    timeline_21c0((unsigned int*)v25, &v42);
    if (v42 != 0) {
      v43_.v44 = 0;
      v43_.v45 = nullptr;
      v43_.v43 = 0;
      LOWORD(v38_.v38) = 0;
      v38_.v41 = &v43_.v43;
      GameStringReads_c05cc0_alt1(a1, (__int64)&v38_.v38);
      if ((v38_.v38 & 1) != 0 && v38_.v40 != nullptr) {
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, (__int64)v38_.v40);
      }
      v27 = a2[3];
      if (*(_BYTE*)(v27 + 24) != 1) {
        if ((v43_.v43 & 1) != 0) {
          fw_text_String_CopyTerminated((__int64*)v27, (__int64)v43_.v45,
                                        v43_.v44);
        }
        else {
          v33 = v43_.v43;
          v34 = (__int64)v43_.v45;
          *(_QWORD*)(v27 + 8) = v43_.v44;
          *(_QWORD*)(v27 + 16) = v34;
          *(_QWORD*)v27 = v33;
        }
        *(_BYTE*)(v27 + 24) = 1;
        if ((v43_.v43 & 1) == 0) {
          return;
        }
        goto LABEL_82;
      }
      if ((__int64*)v27 != &v43_.v43) {
        if ((*(_BYTE*)v27 & 1) == 0) {
          if ((v43_.v43 & 1) != 0) {
            GameRoutine_64df20((_QWORD*)v27, (__int64)v43_.v45, v43_.v44);
            if ((v43_.v43 & 1) == 0) {
              return;
            }
          }
          else {
            v28 = v43_.v43;
            v29 = (__int64)v43_.v45;
            *(_QWORD*)(v27 + 8) = v43_.v44;
            *(_QWORD*)(v27 + 16) = v29;
            *(_QWORD*)v27 = v28;
            if ((v43_.v43 & 1) == 0) {
              return;
            }
          }
        LABEL_82:
          if (v43_.v45 != nullptr) {
            v37 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v37 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v37,
                (__int64)v43_.v45);
          }
          return;
        }
        if ((v43_.v43 & 1) != 0) {
          v35 = v43_.v45;
        }
        else {
          v35 = (char*)&v43_.v43 + 1;
        }
        if ((v43_.v43 & 1) != 0) {
          v36 = v43_.v44;
        }
        else {
          v36 = (unsigned __int64)(unsigned __int8)v43_.v43 >> 1;
        }
        SpineModel_64dde0((__int64*)v27, (__int64)v35, v36);
      }
      if ((v43_.v43 & 1) == 0) {
        return;
      }
      goto LABEL_82;
    }
    v30 = a2[3];
    if (*(_BYTE*)(v30 + 24) == 1) {
      if ((*(_BYTE*)v30 & 1) != 0) {
        v31 = *(_QWORD*)(v30 + 16);
        if (v31 != 0) {
          v32 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v31);
        }
      }
      *(_BYTE*)(v30 + 24) = 0;
    }
  }
}

void GfxLoader_c49e60(__int64** a1, __int64* a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  int v13;
  char v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  unsigned __int64 v20;
  _BOOL4 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  struct {
    __int64 v55;
    unsigned __int64 v56;
    char* v57;
    __int64* v58;
  } v55_;
  struct {
    __int64 v59;
    unsigned __int64 v60;
    char* v61;
    char v62;
  } v59_;
  struct {
    __int64 v63;
    unsigned __int64 v64;
    __int64 v65;
    char v66;
  } v63_;
  struct {
    __int64 v67;
    unsigned __int64 v68;
    __int64 v69;
    char v70;
  } v67_;
  struct {
    __int64 v71;
    unsigned __int64 v72;
    __int64 v73;
    char v74;
  } v71_;
  struct {
    __int64 v75;
    unsigned __int64 v76;
    __int64 v77;
    char v78;
  } v75_;
  struct {
    __int64 v79;
    unsigned __int64 v80;
    __int64 v81;
    char v82;
  } v79_;
  struct {
    __int64 v83;
    unsigned __int64 v84;
    __int64 v85;
    char v86;
  } v83_;
  struct {
    __int64 v87;
    unsigned __int64 v88;
    __int64 v89;
    char v90;
  } v87_;
  struct {
    __int64 v91;
    unsigned __int64 v92;
    __int64 v93;
    char v94;
  } v91_;
  struct {
    __int64 v95;
    unsigned __int64 v96;
    __int64 v97;
    char v98;
  } v95_;
  unsigned int v99;

  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v59_.v59, a2[2], a2[1]);
  }
  else {
    v4 = a2[1];
    v59_.v59 = *a2;
    v59_.v60 = v4;
    v59_.v61 = (char*)a2[2];
  }
  if ((v59_.v59 & 1) != 0) {
    v5 = v59_.v60;
  }
  else {
    v5 = (unsigned __int64)(unsigned __int8)v59_.v59 >> 1;
  }
  if ((v59_.v59 & 1) != 0 && v59_.v61 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, (__int64)v59_.v61);
  }
  if (v5 == 0) {
    goto LABEL_50;
  }
  v7 = *a1;
  v59_.v60 = 0;
  v59_.v61 = nullptr;
  v59_.v59 = 0;
  LOWORD(v55_.v55) = 0;
  timeline_2020((unsigned __int16*)v7, &v55_.v55);
  v8 = (__int16)v55_.v55;
  v9 = fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, (__int16)v55_.v55, 16, 0);
  memset_alt2(v10, 0, v8);
  Value_2500_alt1(*a1, v10, v8);
  GameRoutine_60a060((char*)&v59_.v59, v10, (__int16)v55_.v55);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v11, v10);
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v55_.v55, a2[2], a2[1]);
  }
  else {
    v12 = a2[1];
    v55_.v55 = *a2;
    v55_.v56 = v12;
    v55_.v57 = (char*)a2[2];
  }
  v13 = v59_.v59 & 1;
  v14 = v55_.v55;
  if (v13 != 0) {
    v15 = v59_.v61;
  }
  else {
    v15 = (char*)&v59_.v59 + 1;
  }
  v16 = (__int64)v55_.v57;
  if ((v59_.v59 & 1) != 0) {
    v17 = v59_.v60;
  }
  else {
    v17 = (unsigned __int64)(unsigned __int8)v59_.v59 >> 1;
  }
  if ((v55_.v55 & 1) != 0) {
    v18 = v55_.v56;
  }
  else {
    v18 = (unsigned __int64)(unsigned __int8)v55_.v55 >> 1;
  }
  if ((v55_.v55 & 1) != 0) {
    v19 = v55_.v57;
  }
  else {
    v19 = (char*)&v55_.v55 + 1;
  }
  if (v17 >= v18) {
    v20 = v18;
  }
  else {
    v20 = v17;
  }
  v22 = memcmp_alt1((__int64)v19, (__int64)v15, v20) == 0 && v18 == v17;
  if ((v14 & 1) != 0 && v16 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v23, v16);
    v13 = v59_.v59 & 1;
  }
  if (v13 != 0 && v59_.v61 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v24, (__int64)v59_.v61);
  }
  if (v22) {
  LABEL_50:
    v25 = *a1;
    v99 = 0;
    timeline_21c0((unsigned int*)v25, &v99);
    if (v99 != 0) {
      LOBYTE(v59_.v59) = 0;
      v59_.v62 = 0;
      LOBYTE(v63_.v63) = 0;
      v63_.v66 = 0;
      LOBYTE(v67_.v67) = 0;
      v67_.v70 = 0;
      LOBYTE(v71_.v71) = 0;
      v71_.v74 = 0;
      LOBYTE(v75_.v75) = 0;
      v75_.v78 = 0;
      LOBYTE(v79_.v79) = 0;
      v79_.v82 = 0;
      LOBYTE(v83_.v83) = 0;
      v83_.v86 = 0;
      LOBYTE(v87_.v87) = 0;
      v87_.v90 = 0;
      LOBYTE(v91_.v91) = 0;
      v91_.v94 = 0;
      LOBYTE(v95_.v95) = 0;
      v95_.v98 = 0;
      LOWORD(v55_.v55) = 0;
      v55_.v58 = &v59_.v59;
      if (GameRoutine_c49640(a1, (__int64)&v55_.v55)) {
        GameHr_c49860((__int64)&v59_.v59, a1);
      }
      v26 = a2[3];
      if (*(_BYTE*)(v26 + 320) == 1) {
        GameHr_c4a480((__int64*)v26, &v59_.v59);
        GameHr_c4a480((__int64*)(v26 + 32), &v63_.v63);
        GameHr_c4a480((__int64*)(v26 + 64), &v67_.v67);
        GameHr_c4a480((__int64*)(v26 + 96), &v71_.v71);
        GameHr_c4a480((__int64*)(v26 + 128), &v75_.v75);
        GameHr_c4a480((__int64*)(v26 + 160), &v79_.v79);
        GameHr_c4a480((__int64*)(v26 + 192), &v83_.v83);
        GameHr_c4a480((__int64*)(v26 + 224), &v87_.v87);
        GameHr_c4a480((__int64*)(v26 + 256), &v91_.v91);
        GameHr_c4a480((__int64*)(v26 + 288), &v95_.v95);
      }
      else {
        *(_BYTE*)v26 = 0;
        *(_BYTE*)(v26 + 24) = 0;
        if (v59_.v62 == 1) {
          if ((v59_.v59 & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)v26, (__int64)v59_.v61,
                                          v59_.v60);
          }
          else {
            v28 = v59_.v59;
            v29 = (__int64)v59_.v61;
            *(_QWORD*)(v26 + 8) = v59_.v60;
            *(_QWORD*)(v26 + 16) = v29;
            *(_QWORD*)v26 = v28;
          }
          *(_BYTE*)(v26 + 24) = 1;
        }
        *(_BYTE*)(v26 + 32) = 0;
        v30 = (__int64*)(v26 + 32);
        *(_BYTE*)(v26 + 56) = 0;
        if (v63_.v66 == 1) {
          if ((v63_.v63 & 1) != 0) {
            fw_text_String_CopyTerminated(v30, v63_.v65, v63_.v64);
          }
          else {
            v31 = v63_.v63;
            v32 = v63_.v65;
            *(_QWORD*)(v26 + 40) = v63_.v64;
            *(_QWORD*)(v26 + 48) = v32;
            *v30 = v31;
          }
          *(_BYTE*)(v26 + 56) = 1;
        }
        *(_BYTE*)(v26 + 64) = 0;
        v33 = (__int64*)(v26 + 64);
        *(_BYTE*)(v26 + 88) = 0;
        if (v67_.v70 == 1) {
          if ((v67_.v67 & 1) != 0) {
            fw_text_String_CopyTerminated(v33, v67_.v69, v67_.v68);
          }
          else {
            v34 = v67_.v67;
            v35 = v67_.v69;
            *(_QWORD*)(v26 + 72) = v67_.v68;
            *(_QWORD*)(v26 + 80) = v35;
            *v33 = v34;
          }
          *(_BYTE*)(v26 + 88) = 1;
        }
        *(_BYTE*)(v26 + 96) = 0;
        v36 = (__int64*)(v26 + 96);
        *(_BYTE*)(v26 + 120) = 0;
        if (v71_.v74 == 1) {
          if ((v71_.v71 & 1) != 0) {
            fw_text_String_CopyTerminated(v36, v71_.v73, v71_.v72);
          }
          else {
            v37 = v71_.v71;
            v38 = v71_.v73;
            *(_QWORD*)(v26 + 104) = v71_.v72;
            *(_QWORD*)(v26 + 112) = v38;
            *v36 = v37;
          }
          *(_BYTE*)(v26 + 120) = 1;
        }
        *(_BYTE*)(v26 + 128) = 0;
        v39 = (__int64*)(v26 + 128);
        *(_BYTE*)(v26 + 152) = 0;
        if (v75_.v78 == 1) {
          if ((v75_.v75 & 1) != 0) {
            fw_text_String_CopyTerminated(v39, v75_.v77, v75_.v76);
          }
          else {
            v40 = v75_.v75;
            v41 = v75_.v77;
            *(_QWORD*)(v26 + 136) = v75_.v76;
            *(_QWORD*)(v26 + 144) = v41;
            *v39 = v40;
          }
          *(_BYTE*)(v26 + 152) = 1;
        }
        *(_BYTE*)(v26 + 160) = 0;
        v42 = (__int64*)(v26 + 160);
        *(_BYTE*)(v26 + 184) = 0;
        if (v79_.v82 == 1) {
          if ((v79_.v79 & 1) != 0) {
            fw_text_String_CopyTerminated(v42, v79_.v81, v79_.v80);
          }
          else {
            v43 = v79_.v79;
            v44 = v79_.v81;
            *(_QWORD*)(v26 + 168) = v79_.v80;
            *(_QWORD*)(v26 + 176) = v44;
            *v42 = v43;
          }
          *(_BYTE*)(v26 + 184) = 1;
        }
        *(_BYTE*)(v26 + 192) = 0;
        v45 = (__int64*)(v26 + 192);
        *(_BYTE*)(v26 + 216) = 0;
        if (v83_.v86 == 1) {
          if ((v83_.v83 & 1) != 0) {
            fw_text_String_CopyTerminated(v45, v83_.v85, v83_.v84);
          }
          else {
            v46 = v83_.v83;
            v47 = v83_.v85;
            *(_QWORD*)(v26 + 200) = v83_.v84;
            *(_QWORD*)(v26 + 208) = v47;
            *v45 = v46;
          }
          *(_BYTE*)(v26 + 216) = 1;
        }
        *(_BYTE*)(v26 + 224) = 0;
        v48 = (__int64*)(v26 + 224);
        *(_BYTE*)(v26 + 248) = 0;
        if (v87_.v90 == 1) {
          if ((v87_.v87 & 1) != 0) {
            fw_text_String_CopyTerminated(v48, v87_.v89, v87_.v88);
          }
          else {
            v49 = v87_.v87;
            v50 = v87_.v89;
            *(_QWORD*)(v26 + 232) = v87_.v88;
            *(_QWORD*)(v26 + 240) = v50;
            *v48 = v49;
          }
          *(_BYTE*)(v26 + 248) = 1;
        }
        *(_BYTE*)(v26 + 256) = 0;
        *(_BYTE*)(v26 + 280) = 0;
        if (v91_.v94 == 1) {
          if ((v91_.v91 & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)(v26 + 256), v91_.v93,
                                          v91_.v92);
          }
          else {
            v51 = v91_.v91;
            v52 = v91_.v93;
            *(_QWORD*)(v26 + 264) = v91_.v92;
            *(_QWORD*)(v26 + 272) = v52;
            *(_QWORD*)(v26 + 256) = v51;
          }
          *(_BYTE*)(v26 + 280) = 1;
        }
        *(_BYTE*)(v26 + 288) = 0;
        *(_BYTE*)(v26 + 312) = 0;
        if (v95_.v98 == 1) {
          if ((v95_.v95 & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)(v26 + 288), v95_.v97,
                                          v95_.v96);
          }
          else {
            v53 = v95_.v95;
            v54 = v95_.v97;
            *(_QWORD*)(v26 + 296) = v95_.v96;
            *(_QWORD*)(v26 + 304) = v54;
            *(_QWORD*)(v26 + 288) = v53;
          }
          *(_BYTE*)(v26 + 312) = 1;
        }
        *(_BYTE*)(v26 + 320) = 1;
      }
      Manager_c46910_alt1((__int64)&v59_.v59);
    }
    else {
      v27 = a2[3];
      if (*(_BYTE*)(v27 + 320) == 1) {
        Manager_c46910_alt1(v27);
        *(_BYTE*)(v27 + 320) = 0;
      }
    }
  }
}

_QWORD* GfxLoader_c4a6e0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* result;
  __int64 v9;
  int v10;
  __int64 v11;
  struct {
    __int64 v12;
    int v13;
  } v12_;

  *(_QWORD*)a1 = *a2;
  v5 = a2[1];
  *(_QWORD*)(a1 + 8) = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 16) = *a3;
  v6 = a3[1];
  *(_QWORD*)(a1 + 24) = v6;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_BYTE*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 64) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 72) = 0;
  *(_BYTE*)(a1 + 172) = 0;
  *(_BYTE*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_BYTE*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 80) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 88) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(a1 + 48) = 0xFFFFFFFFLL;
  *(_DWORD*)(a1 + 208) = -1;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 1120403456;
  *(_DWORD*)(a1 + 216) = 1;
  *(_WORD*)(a1 + 168) = 257;
  *(_OWORD*)(a1 + 32) = GameData_1a82c50;
  v7 = *game_g_frame_clock_ptr[0];
  *(_DWORD*)(a1 + 196) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_DWORD*)(a1 + 56) = 0;
  *(_DWORD*)(a1 + 60) = 6;
  result = X8CALL_X0(
      _QWORD*,
      GameRoutine_b34420((void*)((__int64)&v12_.v12), *(_QWORD**)(v7 + 13424),
                         (__int64)"Graphics/Textures/common_default", 0x20u,
                         (__int64)"MoonGlow_Ramp", 0xDu, 0));
  v9 = v12_.v12;
  v10 = v12_.v13;
  *(_QWORD*)(a1 + 200) = v12_.v12;
  *(_DWORD*)(a1 + 208) = v10;
  v11 = *(_QWORD*)(*a2 + 288LL);
  *(_QWORD*)(v11 + 384) = v9;
  *(_DWORD*)(v11 + 392) = v10;
  return result;
}

__int64 GfxLoader_c4c940(__int64 a1, char a2)
{
  __int64 i;
  __int64 v3;
  __int64 j;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  char v11;
  char v12;
  __int64 v13;

  v3 = *(_QWORD*)(a1 + 120);
  for (i = *(_QWORD*)(a1 + 128); i != v3; Manager_c47290_alt1(i)) {
    i -= 232;
  }
  *(_QWORD*)(a1 + 128) = v3;
  v7 = *(_QWORD*)(a1 + 144);
  for (j = *(_QWORD*)(a1 + 152); j != v7; Manager_c47290_alt1(j)) {
    j -= 232;
  }
  v8 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 152) = v7;
  result = std___1___shared_weak_count_lock(v8);
  v10 = *(_QWORD*)(*(_QWORD*)a1 + 288LL);
  if (*(_BYTE*)(v10 + 24) == 1) {
    *(_BYTE*)(v10 + 24) = 0;
  }
  if (*(_BYTE*)(v10 + 48) == 1) {
    *(_BYTE*)(v10 + 48) = 0;
  }
  if (*(_BYTE*)(v10 + 72) == 1) {
    *(_BYTE*)(v10 + 72) = 0;
  }
  if (*(_BYTE*)(v10 + 96) == 1) {
    *(_BYTE*)(v10 + 96) = 0;
  }
  if ((*(_BYTE*)(v10 + 120) & 1) != 0) {
    *(_BYTE*)(v10 + 120) = 0;
  }
  if (*(_BYTE*)(v10 + 144) == 1) {
    *(_BYTE*)(v10 + 144) = 0;
  }
  *(_DWORD*)(v10 + 152) = 0;
  *(_WORD*)(v10 + 156) = 0;
  *(_QWORD*)(v10 + 160) = 0x3F80000000000000LL;
  *(_QWORD*)(v10 + 168) = 0x3F8000003F800000LL;
  v11 = *(_BYTE*)(v10 + 188);
  *(_QWORD*)(v10 + 176) = 1065353216;
  if ((v11 & 1) != 0) {
    *(_BYTE*)(v10 + 188) = 0;
  }
  if (*(_BYTE*)(v10 + 208) == 1) {
    *(_BYTE*)(v10 + 208) = 0;
  }
  if (*(_BYTE*)(v10 + 232) == 1) {
    *(_BYTE*)(v10 + 232) = 0;
  }
  if (*(_BYTE*)(v10 + 256) == 1) {
    *(_BYTE*)(v10 + 256) = 0;
  }
  if (*(_BYTE*)(v10 + 280) == 1) {
    *(_BYTE*)(v10 + 280) = 0;
  }
  if ((*(_BYTE*)(v10 + 304) & 1) != 0) {
    *(_BYTE*)(v10 + 304) = 0;
  }
  if (*(_BYTE*)(v10 + 328) == 1) {
    *(_BYTE*)(v10 + 328) = 0;
  }
  *(_DWORD*)(v10 + 336) = 0;
  *(_WORD*)(v10 + 340) = 0;
  *(_QWORD*)(v10 + 344) = 0x3F80000000000000LL;
  *(_QWORD*)(v10 + 352) = 0x3F8000003F800000LL;
  v12 = *(_BYTE*)(v10 + 372);
  *(_QWORD*)(v10 + 360) = 1065353216;
  if ((v12 & 1) != 0) {
    *(_BYTE*)(v10 + 372) = 0;
  }
  if ((a2 & 1) != 0) {
    *(_BYTE*)(a1 + 112) = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v13 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    return std___1___shared_weak_count___release_weak(v13);
  }
  return result;
}

#pragma GCC visibility pop
