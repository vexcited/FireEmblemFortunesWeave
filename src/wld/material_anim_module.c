#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_be6480(_QWORD* result, __int64, unsigned __int64, float);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 GameRoutine_bea200(_QWORD);
__int64 GameRoutine_bea360(_QWORD);
__int64 GameRoutine_beb940(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*wld_MaterialAnimModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_beaa00(_QWORD);
void __attribute__((noreturn)) GameRoutine_beaa20(void);
_QWORD* MaterialAnimModule_Destructor_alt1(_QWORD* result) __asm__(
    "MaterialAnimModule_Destructor");
bool MaterialAnimModule_be6200(float* a1, __int64 a2, float a3);
__int64 MaterialAnimModule_be6340(__int64 result);
_QWORD* MaterialAnimModule_be7090(_QWORD* result, __int64 a2,
                                  unsigned __int64 a3, float a4);
_QWORD* MaterialAnimModule_be9e20_alt1(_QWORD* result) __asm__(
    "MaterialAnimModule_be9e20");
_QWORD* MaterialAnimModule_be9f20(_QWORD* result, __int64* a2);
__int64 GameRoutine_430(void);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_634d80_alt1(_QWORD, _QWORD) __asm__("GameRoutine_634d80");
__int64 GameRoutine_6360e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7910(_QWORD, _QWORD);
__int64 GameRoutine_be9640(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bea560(_QWORD, _QWORD);
__int64 GameRoutine_bea820(_QWORD, _QWORD);
__int64
    MaterialAnimModule_beaa40_alt1(_QWORD) __asm__("MaterialAnimModule_beaa40");
__int64
    MaterialAnimModule_beaf80_alt1(_QWORD) __asm__("MaterialAnimModule_beaf80");
__int64
    MaterialAnimModule_beb370_alt1(_QWORD) __asm__("MaterialAnimModule_beb370");
__int64
    MaterialAnimModule_beb520_alt1(_QWORD) __asm__("MaterialAnimModule_beb520");
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 Value_77d0(_QWORD);
__int64 Value_7aa0(_QWORD, _QWORD);
__int64 Value_7f50(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 timeline_Cursor_HasNext(_QWORD);
__int64 timeline_Cursor_Next(_QWORD);
__int64 timeline_Value_ToFloat(_QWORD);
__int64 timeline_Value_ToInt(_QWORD);
bool MaterialAnimModule_be7140(_QWORD*, __int64*, __int64, __int64, __int64,
                               __int64);
extern __int64 (*GameData_1fd0ad0[])();
extern __int64 (*nn_nlib_MemoryInputStream_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64* GameData_212e340[2];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* snd_g_fileIndex_ptr[2];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_637ae0(void);
void __attribute__((noreturn)) GameRoutine_bea0a0(_QWORD);
void __attribute__((noreturn)) GameRoutine_bea490(void);
void __attribute__((noreturn)) GameRoutine_bea800(void);
void __attribute__((noreturn))
GameRoutine_bea800_alt1(_QWORD) __asm__("GameRoutine_bea800");
void __attribute__((noreturn))
GameRoutine_beaa20_alt1(_QWORD) __asm__("GameRoutine_beaa20");
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 wld_MaterialAnimModule_LoadAnimAsync_alt1(
    _QWORD* a1, __int64 a2, __int64 a3,
    __int64 a4) __asm__("wld_MaterialAnimModule_LoadAnimAsync");
_QWORD* MaterialAnimModule_bea0c0(_QWORD* result, __int64* a2);
__int64
MaterialAnimModule_bea200_alt2(__int64 result,
                               __int64 a2) __asm__("MaterialAnimModule_bea200");
__int64 MaterialAnimModule_bea360_alt1(__int64 result) __asm__(
    "MaterialAnimModule_bea360");
__int64* MaterialAnimModule_beaa40_alt2(
    __int64* result, __int64* a2, __int64* a3,
    unsigned __int64 a4) __asm__("MaterialAnimModule_beaa40");
__int64 MaterialAnimModule_beaf80_alt3(
    __int64 result, char* a2, char* a3,
    unsigned __int64 a4) __asm__("MaterialAnimModule_beaf80");
char** MaterialAnimModule_beb370_alt2(
    char** result, __int64 a2, __int64 a3,
    unsigned __int64 a4) __asm__("MaterialAnimModule_beb370");
__int64** MaterialAnimModule_beb520_alt3(__int64** result) __asm__(
    "MaterialAnimModule_beb520");
_QWORD* MaterialAnimModule_beb6c0(_QWORD* a1, _QWORD* a2, _QWORD* a3);
__int64 MaterialAnimModule_beb940_alt2(__int64 result) __asm__(
    "MaterialAnimModule_beb940");
__int64 wld_MaterialAnimModule_LoadAnimAsync_lambda0_Invoke_alt1(
    unsigned __int64 a1,
    __int64* a2) __asm__("wld_MaterialAnimModule_LoadAnimAsync_lambda0_Invoke");
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_QWORD* GameRoutine_bebc00(float*, unsigned __int8*, __int64**);
_QWORD* GameRoutine_bec240(float*, unsigned __int8*, __int64**);
__attribute__((swiftcall)) void Model_a66f60(PSEUDO_X8, __int64 result, __int64,
                                             __int64);
__int64* GameRoutine_beba60(_QWORD*, unsigned __int8*);
__int64*
MaterialAnimModule_bea0c0_alt1(__int64* result,
                               __int64*) __asm__("MaterialAnimModule_bea0c0");
__int64* SpineModel_64dde0_alt1(__int64*, __int64,
                                unsigned __int64) __asm__("SpineModel_64dde0");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212df10;
extern int* GameData_212df08;
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_bea0a0_alt1() __asm__("GameRoutine_bea0a0");
void __attribute__((noreturn)) GameRoutine_bea1d0();
__int64*
MaterialAnimModule_be3840_alt1(__int64* result,
                               __int64 a2) __asm__("MaterialAnimModule_be3840");
unsigned __int64 MaterialAnimModule_Unknown5_alt1(
    unsigned __int64 result) __asm__("MaterialAnimModule_Unknown5");
__int64* GameRoutine_bebfa0(__int64* result, unsigned __int64);
__int64* GameRoutine_bec5e0(__int64* result, unsigned __int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn))
GameRoutine_bea490_alt1() __asm__("GameRoutine_bea490");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 wld_MaterialAnimModule_LoadAnimAsync(_QWORD* a1, const char* a2,
                                             __int64 a3, __int64 a4);
_QWORD* MaterialAnimModule_bebc00(float* a1, unsigned __int8* a2, __int64** a3);
_QWORD* MaterialAnimModule_bec240(float* a1, unsigned __int8* a2, __int64** a3);
__attribute__((swiftcall)) void
Model_a66f60_alt1(PSEUDO_X8, __int64, __int64,
                  unsigned __int64) __asm__("Model_a66f60");
__int64*
MaterialAnimModule_be9f20_alt1(__int64* result,
                               __int64) __asm__("MaterialAnimModule_be9f20");
__int64 GameHr_7aa0(int**, _QWORD*);
__int64 GameRoutine_430_alt1() __asm__("GameRoutine_430");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_634d80_alt2(__int64, __int64) __asm__("GameRoutine_634d80");
__int64 Value_7f50_alt1(__int64*) __asm__("Value_7f50");
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
__int64 timeline_7910(__int64, __int64);
__int64 timeline_Cursor_Next_alt1(_BYTE**) __asm__("timeline_Cursor_Next");
bool GameHr_be7140(_QWORD*, __int64*, __int64, char);
bool timeline_Cursor_HasNext_alt1(_DWORD*) __asm__("timeline_Cursor_HasNext");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
unsigned __int64
timeline_Value_ToFloat_alt1(__int64) __asm__("timeline_Value_ToFloat");
unsigned __int64
timeline_Value_ToInt_alt1(__int64) __asm__("timeline_Value_ToInt");
void GameRoutine_be9640_alt1(__int64, __int64, unsigned __int64,
                             unsigned __int8*) __asm__("GameRoutine_be9640");
void GameRoutine_bea560_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_bea560");
void GameRoutine_bea820_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_bea820");
void MaterialAnimModule_bea200_alt1(__int64, __int64) __asm__(
    "MaterialAnimModule_bea200");
void MaterialAnimModule_beaa40_alt3(
    __int64*, __int64, __int64,
    unsigned __int64) __asm__("MaterialAnimModule_beaa40");
void MaterialAnimModule_beaf80_alt2(
    __int64, __int64*, __int64*,
    unsigned __int64) __asm__("MaterialAnimModule_beaf80");
void MaterialAnimModule_beb940_alt1(__int64*) __asm__(
    "MaterialAnimModule_beb940");
void Value_77d0_alt1(__int64*) __asm__("Value_77d0");
void __attribute__((noreturn))
GameRoutine_637ae0_alt1() __asm__("GameRoutine_637ae0");
void __attribute__((noreturn))
GameRoutine_bea800_alt2() __asm__("GameRoutine_bea800");
void __attribute__((noreturn))
GameRoutine_beaa00_alt1() __asm__("GameRoutine_beaa00");
void __attribute__((noreturn))
GameRoutine_beaa20_alt2() __asm__("GameRoutine_beaa20");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void MaterialAnimModule_be3840(__int64 a1, __int64 a2);
void MaterialAnimModule_Unknown5(__int64 a1);
void MaterialAnimModule_be9e20(_QWORD* a1);
void MaterialAnimModule_beaa40(__int64 a1, __int64 a2, __int64 a3,
                               unsigned __int64 a4);
__int64 wld_MaterialAnimModule_LoadAnimAsync_lambda0_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 memset(__int64, int, unsigned __int64);
void MaterialAnimModule_beb520_alt2(__int64**) __asm__(
    "MaterialAnimModule_beb520");
void __attribute__((noreturn)) GameRoutine_bea7e0();
void MaterialAnimModule_bea560(__int64* a1, unsigned __int64 a2);
__int64* MaterialAnimModule_beb370_alt3(
    __int64* result, __int64, __int64,
    unsigned __int64) __asm__("MaterialAnimModule_beb370");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
void MaterialAnimModule_Destructor(__int64 a1);
void MaterialAnimModule_bea200(__int64 a1, __int64 a2);
void MaterialAnimModule_bea360(__int64 a1);
void MaterialAnimModule_beaf80(__int64 a1, __int64* a2, __int64* a3,
                               unsigned __int64 a4);
__int64** MaterialAnimModule_beb370(__int64** result, __int64 a2, __int64 a3,
                                    unsigned __int64 a4);
void MaterialAnimModule_beb520(__int64** a1);
void MaterialAnimModule_beb940(__int64* a1);

void MaterialAnimModule_be3840(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  atomic_uchar* v4;
  unsigned __int8 explicit;
  int* v6;
  __int64 v7;
  __int64 i;
  int v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64* v14;
  _QWORD* v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int8* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  char v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  _QWORD* v61;
  struct {
    __int64 v62;
    __int64 v63;
    __int64 v64;
  } v62_;
  struct {
    __int64 v65[2];
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
  } v65_;

  *(_QWORD*)(a1 + 120) = 0;
  v2 = (_QWORD*)(a1 + 120);
  *(_BYTE*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_WORD*)(a1 + 76) = 0;
  *(_DWORD*)(a1 + 17) = 33686018;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 108) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)a1 = wld_MaterialAnimModule_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_DWORD*)(a1 + 72) = -1;
  *(_DWORD*)(a1 + 104) = -1;
  *(_DWORD*)(a1 + 176) = 1065353216;
  v4 = (atomic_uchar*)GameData_212df10;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_DWORD*)(a1 + 272) = 1065353216;
  explicit = atomic_load_explicit(v4, memory_order_acquire);
  v6 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v59 = a2;
    v60 = __cxa_guard_acquire_alt1((__int64)GameData_212df10);
    a2 = v59;
    if (v60 != 0) {
      *v6 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release_alt1((__int64)GameData_212df10);
      a2 = v59;
    }
  }
  v7 = *(_QWORD*)(a2 + 512);
  for (i = v7; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v9 = *(_DWORD*)(i - 16);
    v7 -= 16;
    if (v9 == *v6) {
      if (*(_QWORD*)(a2 + 512) != v7) {
        v10 = *(_QWORD*)(v7 + 8);
        if (v10 != 0) {
          v11 = *(_QWORD*)(v10 + 24);
          v12 = *(_QWORD**)(v11 + 312);
          v13 = *(_QWORD**)(v11 + 320);
          if (v12 != v13) {
            v14 = (__int64*)fw_memory_g_heap_manager_ptr;
            v61 = *(_QWORD**)(v11 + 320);
            do {
              v15 = (_QWORD*)*v12;
              v65_.v68 = 0;
              v65_.v69 = 0;
              v65_.v67 = 0;
              v16 = v15[1];
              v17 = *(__int64**)(v16 + 184);
              if ((v15[47] & 1) != 0) {
                fw_text_String_CopyTerminated_alt1(&v62_.v62, v15[49], v15[48]);
              }
              else {
                v18 = v15[47];
                v19 = v15[48];
                v20 = v15[49];
                v62_.v62 = v18;
                v62_.v63 = v19;
                v62_.v64 = v20;
              }
              v21 = *(_QWORD*)(v16 + 192);
              v65_.v65[0] = v62_.v62;
              v65_.v65[1] = v62_.v63;
              v65_.v66 = v62_.v64;
              if (v21 != 0) {
                if (v21 >> 59 != 0) {
                  GameRoutine_bea0a0_alt1();
                }
                v22 = 32 * v21;
                v23 =
                    fw_memory_HeapManager_Allocate_alt1(*v14, 32 * v21, 16, 0);
                v24 = 32 * v21 - 32;
                v25 = v23;
                v26 = v23;
                if ((~(32 * (_BYTE)v21 - 32) & 0xE0) != 0) {
                  v27 = -(
                      __int64)(((unsigned __int8)((unsigned int)v24 >> 5) + 1) &
                               7);
                  v26 = v23;
                  do {
                    *(_DWORD*)(v26 + 24) = 0;
                    *(_QWORD*)(v26 + 8) = 0;
                    *(_QWORD*)(v26 + 16) = 0;
                    v28 = __CFADD__(v27++, 1);
                    *(_QWORD*)v26 = 0;
                    v26 += 32;
                  } while (!v28);
                }
                if (v24 >= 0xE0) {
                  do {
                    *(_DWORD*)(v26 + 24) = 0;
                    *(_QWORD*)(v26 + 8) = 0;
                    *(_QWORD*)(v26 + 16) = 0;
                    *(_QWORD*)v26 = 0;
                    *(_QWORD*)(v26 + 32) = 0;
                    *(_QWORD*)(v26 + 40) = 0;
                    *(_QWORD*)(v26 + 48) = 0;
                    *(_DWORD*)(v26 + 56) = 0;
                    *(_QWORD*)(v26 + 64) = 0;
                    *(_QWORD*)(v26 + 72) = 0;
                    *(_QWORD*)(v26 + 80) = 0;
                    *(_DWORD*)(v26 + 88) = 0;
                    *(_QWORD*)(v26 + 96) = 0;
                    *(_QWORD*)(v26 + 104) = 0;
                    *(_QWORD*)(v26 + 112) = 0;
                    *(_DWORD*)(v26 + 120) = 0;
                    *(_DWORD*)(v26 + 152) = 0;
                    *(_QWORD*)(v26 + 136) = 0;
                    *(_QWORD*)(v26 + 144) = 0;
                    *(_QWORD*)(v26 + 128) = 0;
                    *(_DWORD*)(v26 + 184) = 0;
                    *(_QWORD*)(v26 + 168) = 0;
                    *(_QWORD*)(v26 + 176) = 0;
                    *(_QWORD*)(v26 + 160) = 0;
                    *(_DWORD*)(v26 + 216) = 0;
                    *(_QWORD*)(v26 + 200) = 0;
                    *(_QWORD*)(v26 + 208) = 0;
                    *(_QWORD*)(v26 + 192) = 0;
                    *(_DWORD*)(v26 + 248) = 0;
                    *(_QWORD*)(v26 + 232) = 0;
                    *(_QWORD*)(v26 + 240) = 0;
                    *(_QWORD*)(v26 + 224) = 0;
                    v26 += 256;
                  } while (v26 != v23 + v22);
                }
                v29 = v23 + 32 * v21;
                v30 = v22 >> 5;
                v65_.v67 = v23;
                v65_.v68 = v23 + v22;
                v31 = v23;
                v65_.v69 = v29;
                do {
                  v34 = (unsigned __int8*)(v17 + 2);
                  if ((__int64*)v31 != v17 + 2) {
                    v35 = *v34;
                    if ((*(_BYTE*)v31 & 1) != 0) {
                      if ((v35 & 1) != 0) {
                        v32 = v17[4];
                      }
                      else {
                        v32 = (__int64)v17 + 17;
                      }
                      if ((v35 & 1) != 0) {
                        v33 = v17[3];
                      }
                      else {
                        v33 = v35 >> 1;
                      }
                      SpineModel_64dde0_alt1((__int64*)v31, v32, v33);
                    }
                    else if ((v35 & 1) != 0) {
                      GameRoutine_64df20_alt1((_QWORD*)v31, v17[4], v17[3]);
                    }
                    else {
                      v36 = *(_QWORD*)v34;
                      v37 = v17[4];
                      *(_QWORD*)(v31 + 8) = v17[3];
                      *(_QWORD*)(v31 + 16) = v37;
                      *(_QWORD*)v31 = v36;
                    }
                  }
                  --v30;
                  *(_DWORD*)(v31 + 24) = *((_DWORD*)v17 + 10);
                  v31 += 32;
                  v17 = (__int64*)*v17;
                } while (v30 != 0);
              }
              else {
                v25 = 0;
              }
              v39 = *(_QWORD*)(a1 + 128);
              v38 = *(_QWORD*)(a1 + 136);
              if (v39 >= v38) {
                v41 = v39 - *v2;
                v42 = 1 - 0x5555555555555555LL * (v41 >> 4);
                if (v42 > 0x555555555555555LL) {
                  GameRoutine_bea1d0();
                }
                v43 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v38 - *v2) >> 4);
                if (2 * v43 > v42) {
                  v42 = 2 * v43;
                }
                if (v43 >= 0x2AAAAAAAAAAAAAALL) {
                  v44 = 0x555555555555555LL;
                }
                else {
                  v44 = v42;
                }
                if (v44 != 0) {
                  if (v44 > 0x555555555555555LL) {
                    GameRoutine_60a210_alt1();
                  }
                  v45 = fw_memory_HeapManager_Allocate_alt1(*v14, 48 * v44, 16,
                                                            0);
                }
                else {
                  v45 = 0;
                }
                v46 = v45 + v41;
                v47 = v45 + 48 * v44;
                MaterialAnimModule_bea0c0_alt1((__int64*)(v45 + v41), v65_.v65);
                v48 = *(_QWORD*)(a1 + 120);
                v40 = v46 + 48;
                v49 = *(_QWORD*)(a1 + 128) - v48;
                v50 = v46 - v49;
                memcpy_alt1(v50, v48, v49);
                *(_QWORD*)(a1 + 120) = v50;
                *(_QWORD*)(a1 + 128) = v40;
                *(_QWORD*)(a1 + 136) = v47;
                if (v48 != 0) {
                  v51 = 128;
                  if (*(_QWORD*)(*v14 + 200) == 0) {
                    v51 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v14 + v51, v48);
                }
                v13 = v61;
              }
              else {
                MaterialAnimModule_bea0c0_alt1(*(__int64**)(a1 + 128),
                                               v65_.v65);
                v40 = v39 + 48;
              }
              *(_QWORD*)(a1 + 128) = v40;
              if (v25 != 0) {
                v52 = v65_.v68;
                if (v25 != v65_.v68) {
                  v53 = v65_.v68;
                  do {
                    v54 = *(_BYTE*)(v53 - 32);
                    v53 -= 32;
                    if ((v54 & 1) != 0) {
                      v55 = *(_QWORD*)(v52 - 16);
                      if (v55 != 0) {
                        if (*(_QWORD*)(*v14 + 200) != 0) {
                          v56 = 128;
                        }
                        else {
                          v56 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt2(*v14 + v56, v55);
                      }
                    }
                    v52 = v53;
                  } while (v53 != v25);
                }
                if (*(_QWORD*)(*v14 + 200) != 0) {
                  v57 = 128;
                }
                else {
                  v57 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v14 + v57, v25);
              }
              if ((v65_.v65[0] & 1) != 0 && v65_.v66 != 0) {
                if (*(_QWORD*)(*v14 + 200) != 0) {
                  v58 = 128;
                }
                else {
                  v58 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v14 + v58, v65_.v66);
              }
              v12 += 2;
            } while (v12 != v13);
          }
        }
      }
      return;
    }
  }
}

__int64 wld_MaterialAnimModule_LoadAnimAsync(_QWORD* a1, const char* a2,
                                             __int64 a3, __int64 a4)
{
  __int64 v8;
  unsigned __int64 v9;
  _BYTE* v10;
  __int64 result;
  _QWORD* v12;
  __int64* v13;
  _QWORD* v14;
  atomic_ullong* v15;
  __int64 v16;
  _QWORD* v17;
  __int64* v18;
  _QWORD* v19;
  _BYTE* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64* v32;
  unsigned __int64 v33;
  __int64 v34;
  _QWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  atomic_ullong* v40;
  struct {
    __int64 v41;
    __int64 v42;
    _QWORD* v43;
  } v41_;
  struct {
    _BYTE v44[32];
    _BYTE* v45;
  } v44_;
  _QWORD* v46;
  struct {
    _BYTE v47[32];
    _BYTE* v48;
  } v47_;

  if (a3 != 0 && a2 != nullptr) {
    v8 = *snd_g_fileIndex_ptr[0];
    v9 = strlen_alt1(a2);
    if ((fs_6360e0(v8, (__int64)a2, v9, 0, 0) & 1) != 0 && a1[15] != a1[16]) {
      v10 = *(_BYTE**)(a4 + 32);
      v41_.v43 = a1;
      if (v10 != nullptr) {
        if (v10 == (_BYTE*)a4) {
          v44_.v45 = v44_.v44;
          (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v10 + 24LL))(v10, v44_.v44);
          v12 = v41_.v43;
          v10 = v44_.v45;
        LABEL_14:
          v13 = (__int64*)fw_memory_g_heap_manager_ptr;
          v14 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
          v14[1] = 0;
          v15 = (atomic_ullong*)(v14 + 1);
          v14[2] = 0;
          v16 = (__int64)v14;
          v46 = v12;
          *v14 = GameData_212e340[0] + 2;
          if (v10 != nullptr) {
            if (v10 == v44_.v44) {
              v47_.v48 = v47_.v47;
              (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v10 + 24LL))(v10,
                                                                   v47_.v47);
              v12 = v46;
              v10 = v47_.v48;
            }
            else {
              v47_.v48 = v10;
              v44_.v45 = nullptr;
            }
          }
          else {
            v47_.v48 = nullptr;
          }
          v17 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v13, 80, 16, 0);
          v17[2] = v12;
          *v17 = GameData_1fd0ad0;
          if (v10 == nullptr) {
            v17[8] = 0;
            *(_QWORD*)(v16 + 64) = v17;
            goto LABEL_28;
          }
          if (v10 != v47_.v47) {
            v17[8] = v10;
            *(_QWORD*)(v16 + 64) = v17;
            goto LABEL_28;
          }
          v18 = v13;
          v19 = v17;
          v17[8] = v17 + 4;
          (*(void (**)(_BYTE*))(*(_QWORD*)v10 + 24LL))(v10);
          v20 = v47_.v48;
          *(_QWORD*)(v16 + 64) = v19;
          if (v20 == v47_.v47) {
            v21 = 32;
            v13 = v18;
          }
          else {
            v13 = v18;
            if (v20 == nullptr) {
              goto LABEL_28;
            }
            v21 = 40;
          }
          (*(void (**)(__int64))(*(_QWORD*)v20 + v21))((__int64)v20);
        LABEL_28:
          v22 = v16 + 32;
          if (v44_.v45 == v44_.v44) {
            v23 = 32;
          }
          else {
            if (v44_.v45 == nullptr) {
            LABEL_33:
              v24 = (__int64*)a1[31];
              v25 = a1[32];
              if ((unsigned __int64)v24 >= v25) {
                v27 = a1[30];
                v28 = (unsigned __int64)v24 - v27;
                v29 = ((__int64)v24 - v27) >> 4;
                v30 = v29 + 1;
                if ((unsigned __int64)(v29 + 1) >> 60 != 0) {
                  GameRoutine_bea490_alt1();
                }
                v31 = v25 - v27;
                v32 = v13;
                v40 = v15;
                if (v31 >> 3 > v30) {
                  v30 = v31 >> 3;
                }
                if ((unsigned __int64)v31 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v33 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v33 = v30;
                }
                if (v33 >> 60 != 0) {
                  GameRoutine_60a210_alt1();
                }
                v34 =
                    fw_memory_HeapManager_Allocate_alt1(*v32, 16 * v33, 16, 0);
                v35 = (_QWORD*)(v34 + v28);
                v36 = v34 + 16 * v33;
                v37 = v34 + v28 - 16 * v29;
                v26 = v34 + v28 + 16;
                *v35 = v16 + 32;
                v35[1] = v16;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8),
                                          1u, memory_order_relaxed);
                memcpy_alt1(v37, v27, v28);
                a1[30] = v37;
                a1[31] = v26;
                a1[32] = v36;
                if (v27 != 0) {
                  v38 = 128;
                  if (*(_QWORD*)(*v32 + 200) == 0) {
                    v38 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v32 + v38, v27);
                }
                v15 = v40;
                v22 = v16 + 32;
              }
              else {
                *v24 = v22;
                v24[1] = v16;
                v26 = (__int64)(v24 + 2);
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8),
                                          1u, memory_order_relaxed);
              }
              a1[31] = v26;
              v41_.v41 = v22;
              v41_.v42 = v16;
              v39 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                        memory_order_relaxed);
              (*(void (**)(__int64, const char*, __int64, __int64*, __int64))(
                  *(_QWORD*)v39 + 16LL))(v39, a2, a3, &v41_.v41, 255);
              result = v41_.v42;
              if (v41_.v42 != 0) {
                result =
                    std___1___shared_weak_count___release_weak_alt1(v41_.v42);
              }
              if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
                return std___1___shared_weak_count___release_weak_alt1(v16);
              }
              return result;
            }
            v23 = 40;
          }
          (*(void (**)(__int64))(*(_QWORD*)v44_.v45 + v23))((__int64)v44_.v45);
          goto LABEL_33;
        }
        v44_.v45 = v10;
        *(_QWORD*)(a4 + 32) = 0;
      }
      else {
        v44_.v45 = nullptr;
      }
      v12 = a1;
      goto LABEL_14;
    }
  }
  result = *(_QWORD*)(a4 + 32);
  if (result != 0) {
    LOBYTE(v46) = 0;
    return (*(__int64 (**)(__int64, _QWORD**))(*(_QWORD*)result + 48LL))(result,
                                                                         &v46);
  }
  return result;
}

void MaterialAnimModule_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64* v6;
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
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
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
  char v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
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
  __int64 v52;
  __int64 v53;

  v1 = *(_QWORD*)(a1 + 240);
  v2 = *(_QWORD*)(a1 + 248);
  for (*(_QWORD*)a1 = wld_MaterialAnimModule_vtable; v2 != v1; v2 -= 16) {
    v4 = *(_QWORD*)(v2 - 8);
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt1(v4);
    }
  }
  *(_QWORD*)(a1 + 248) = v1;
  v5 = *(__int64**)(a1 + 216);
  v6 = *(__int64**)(a1 + 224);
  while (v5 != v6) {
    v7 = *v5++;
    GameRoutine_634d80_alt2(*(_QWORD*)(v7 + 8), v7);
  }
  v8 = *(_QWORD*)(a1 + 240);
  v9 = fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v10 = *(_QWORD*)(a1 + 248);
    if (v8 == v10) {
      goto LABEL_17;
    }
    do {
      v11 = *(_QWORD*)(v10 - 8);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_alt1(v11);
      }
      v10 -= 16;
    } while (v10 != v8);
    v12 = *(_QWORD*)(a1 + 240);
    *(_QWORD*)(a1 + 248) = v8;
    v8 = v12;
    if (v12 != 0) {
    LABEL_17:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v13, v8);
    }
  }
  v14 = *(_QWORD*)(a1 + 216);
  if (v14 != 0) {
    v15 = *(_QWORD*)v9;
    *(_QWORD*)(a1 + 224) = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v15 + v16, v14);
  }
  v17 = *(_QWORD*)(a1 + 192);
  if (v17 != 0) {
    v18 = *(_QWORD*)(a1 + 200);
    if (v17 == v18) {
      goto LABEL_35;
    }
    v19 = (__int64*)(v18 - 24);
    do {
      if (*v19 != 0) {
        MaterialAnimModule_bea200((__int64)v19, *v19);
        if (*v19 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v21 = 128;
          }
          else {
            v21 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v21, *v19);
        }
      }
      v20 = v19 - 6;
      v19 -= 9;
    } while (v20 != (__int64*)v17);
    v22 = *(_QWORD*)(a1 + 192);
    *(_QWORD*)(a1 + 200) = v17;
    v17 = v22;
    if (v22 != 0) {
    LABEL_35:
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v23, v17);
    }
  }
  v24 = *(_QWORD**)(a1 + 160);
  while (v24 != nullptr) {
    v26 = (__int64)v24;
    v24 = (_QWORD*)*v24;
    MaterialAnimModule_beb940((__int64*)(v26 + 40));
    if ((*(_BYTE*)(v26 + 16) & 1) != 0) {
      v27 = *(_QWORD*)(v26 + 32);
      if (v27 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v28 = 128;
        }
        else {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v28, v27);
      }
    }
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
      v25 = 128;
    }
    else {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v25, v26);
  }
  v29 = *(_QWORD*)(a1 + 144);
  *(_QWORD*)(a1 + 144) = 0;
  if (v29 != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v30, v29);
  }
  v31 = *(_QWORD*)(a1 + 120);
  if (v31 != 0) {
    v32 = *(_QWORD*)(a1 + 128);
    if (v31 == v32) {
      goto LABEL_80;
    }
    do {
      v33 = v32;
      v34 = *(_QWORD*)(v32 - 24);
      if (v34 != 0) {
        v35 = *(_QWORD*)(v33 - 16);
        if (v34 == v35) {
          goto LABEL_69;
        }
        v36 = *(_QWORD*)(v33 - 16);
        do {
          v37 = *(_BYTE*)(v36 - 32);
          v36 -= 32;
          if ((v37 & 1) != 0) {
            v38 = *(_QWORD*)(v35 - 16);
            if (v38 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
                v39 = 128;
              }
              else {
                v39 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v39, v38);
            }
          }
          v35 = v36;
        } while (v36 != v34);
        v40 = *(_QWORD*)(v33 - 24);
        *(_QWORD*)(v33 - 16) = v34;
        v34 = v40;
        if (v40 != 0) {
        LABEL_69:
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v41 = 128;
          }
          else {
            v41 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v41, v34);
        }
      }
      v32 = v33 - 48;
      if ((*(_BYTE*)(v33 - 48) & 1) != 0) {
        v42 = *(_QWORD*)(v33 - 32);
        if (v42 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v43 = 128;
          }
          else {
            v43 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v43, v42);
        }
      }
    } while (v31 != v32);
    v44 = *(_QWORD*)(a1 + 120);
    *(_QWORD*)(a1 + 128) = v31;
    v31 = v44;
    if (v44 != 0) {
    LABEL_80:
      v45 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v45 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v45, v31);
    }
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v46 = *(_QWORD*)(a1 + 96);
    if (v46 != 0) {
      v47 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v47 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v47, v46);
    }
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v48 = *(_QWORD*)(a1 + 64);
    if (v48 != 0) {
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v49 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v49, v48);
    }
  }
  v50 = *(_QWORD*)(a1 + 24);
  if (v50 != 0) {
    v51 = *(_QWORD*)(a1 + 32);
    if (v50 == v51) {
      goto LABEL_97;
    }
    do {
      v51 -= 64;
      MaterialAnimModule_bea360(v51);
    } while (v51 != v50);
    v52 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a1 + 32) = v50;
    v50 = v52;
    if (v52 != 0) {
    LABEL_97:
      v53 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v53 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v53, v50);
    }
  }
}

void MaterialAnimModule_Unknown5(__int64 a1)
{
  __int64 v11;
  unsigned __int8 explicit;
  int* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  float v18;
  int v19;
  float v20;
  float v21;
  char v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  char v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  unsigned __int64 v51;
  bool v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64* v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64** v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int8* v72;
  unsigned __int8* v73;
  unsigned __int64 v74;
  unsigned __int8* v75;
  unsigned __int64 v76;
  int v77;
  unsigned __int64 v78;
  bool v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int8* v82;
  __int64* v83;
  __int64* v84;
  long double v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  float v89;
  unsigned __int64 v90;
  bool v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  unsigned __int8* v94;
  __int64 v95;
  __int64 v96;
  char v97;
  float v98;
  float v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  float v106;
  float v107;
  float v108;
  int v109;
  float v110;
  float v111;
  bool v112;
  float v113;
  __int64* v114;
  unsigned __int64 v115;
  bool v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  unsigned __int8* v119;
  long double v120;
  __int64* v121;
  unsigned __int64 v122;
  bool v123;
  unsigned __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64* v127;
  float v128;
  __int64 v129;
  __int64 v130;
  long double v131;
  __int64 v132;
  float v133;
  __int64 v134;
  unsigned __int64 v135;
  __int64 v136;
  float v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  float v141;
  unsigned __int64 v142;
  bool v143;
  long double v144;
  unsigned __int64 v145;
  unsigned __int64 v146;
  unsigned __int8* v147;
  unsigned __int64 v148;
  unsigned __int8* v149;
  unsigned __int64 v150;
  float v151;
  float v152;
  int v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  int v159;
  float v160;
  float v161;
  float v162;
  __int64 v163;
  __int64 v164;
  _QWORD* v165;
  __int64 v166;
  float v167;
  __int64 v168;
  unsigned __int64 v169;
  __int64 v170;
  float v171;
  float v172;
  float v173;
  int v174;
  float v175;
  float v176;
  __int64* v177;
  unsigned __int64 v178;
  unsigned __int8* v179;
  unsigned __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  float v184;
  __int64 v185;
  unsigned __int64 v186;
  __int64 v187;
  float v188;
  float v189;
  float v190;
  int v191;
  float v192;
  float v193;
  __int64 v194;
  __int64 v195;
  _QWORD* v196;
  int v198;
  __int64 v199;
  float v200;
  __int64 v201;
  unsigned __int64 v202;
  __int64 v203;
  float v204;
  float v205;
  float v206;
  int v207;
  float v208;
  float v209;
  __int64* v210;
  __int64 v211;
  __int64 v212;
  unsigned __int64 v213;
  unsigned __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  float v218;
  float v219;
  __int64* v220;
  unsigned __int64 v221;
  bool v222;
  __int64 v223;
  __int64 v224;
  unsigned __int64 v225;
  __int64 v226;
  unsigned __int8* v227;
  unsigned __int8* v228;
  float* v229;
  _QWORD* v230;
  int v231;
  _QWORD* v232;
  float v233;
  unsigned __int64 v234;
  bool v235;
  unsigned __int64 v236;
  unsigned __int64 v237;
  unsigned __int8* v238;
  long double v239;
  __int64* v240;
  float v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  unsigned __int64 v245;
  bool v246;
  unsigned __int64 v247;
  unsigned __int64 v248;
  unsigned __int8* v249;
  __int64 v250;
  __int64 v251;
  char v252;
  float v253;
  float v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  unsigned __int64 v259;
  __int64 v260;
  float v261;
  float v262;
  float v263;
  int v264;
  float v265;
  float v266;
  float v267;
  float* v268;
  float v269;
  float v270;
  float v271;
  unsigned __int64 v272;
  long double v273;
  bool v274;
  unsigned __int64 v275;
  float v276;
  unsigned __int64 v277;
  unsigned __int8* v278;
  unsigned __int64 v279;
  bool v280;
  unsigned __int64 v281;
  unsigned __int64 v282;
  unsigned __int8* v283;
  unsigned __int64 v284;
  unsigned __int8* v285;
  unsigned __int64 v286;
  unsigned __int64 v287;
  bool v288;
  unsigned __int64 v289;
  unsigned __int64 v290;
  unsigned __int8* v291;
  __int64* v292;
  float v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  float v297;
  __int64 v298;
  unsigned __int64 v299;
  __int64 v300;
  float v301;
  __int64 v302;
  unsigned __int64 v303;
  __int64 v304;
  float v305;
  float v306;
  float v307;
  int v308;
  float v309;
  float v310;
  float v311;
  float v312;
  float v313;
  int v314;
  float v315;
  float v316;
  float v317;
  __int64 v318;
  __int64 v319;
  _QWORD* v320;
  __int64 v321;
  float v322;
  __int64 v323;
  unsigned __int64 v324;
  __int64 v325;
  float v326;
  float v327;
  float v328;
  int v329;
  float v330;
  float v331;
  float* v332;
  unsigned __int64 v333;
  float v334;
  unsigned __int8* v335;
  unsigned __int64 v336;
  __int64 v337;
  __int64 v338;
  __int64 v339;
  float v340;
  __int64 v341;
  unsigned __int64 v342;
  __int64 v343;
  float v344;
  float v345;
  float v346;
  int v347;
  float v348;
  float v349;
  __int64 v350;
  __int64 v351;
  _QWORD* v352;
  int v354;
  __int64 v355;
  float v356;
  __int64 v357;
  unsigned __int64 v358;
  __int64 v359;
  float v360;
  float v361;
  float v362;
  int v363;
  float v364;
  float v365;
  float* v366;
  float v367;
  float v368;
  float v369;
  unsigned __int64 v370;
  bool v371;
  unsigned __int64 v372;
  float v373;
  unsigned __int64 v374;
  unsigned __int8* v375;
  unsigned int v376;
  long double v377;
  __int64 v378;
  float v379;
  float v380;
  __int64 v381;
  _QWORD* v382;
  __int64 v383;
  float v384;
  __int64* v385;
  unsigned __int8* v386;
  __int64* v387;
  __int64 v388;
  int8x16_t v389;
  __int64* v390[2];
  struct {
    __int64 v391;
    __int64 v392;
  } v391_;
  __int64 v394;

  if (*(_QWORD*)(a1 + 24) == *(_QWORD*)(a1 + 32)) {
    return;
  }
  if (*(_BYTE*)(a1 + 76) != 1) {
    return;
  }
  v11 = *(_QWORD*)(a1 + 8);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v13 = GameData_212df08;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212df10) != 0) {
    *v13 = wld_Crc32(0, "ModelModule", 0xBu);
    __cxa_guard_release_alt1((__int64)GameData_212df10);
  }
  v14 = *(_QWORD*)(v11 + 512);
  v15 = v14;
  do {
    if (v15 == *(_QWORD*)(v11 + 504)) {
      return;
    }
    v16 = *(_DWORD*)(v15 - 16);
    v15 -= 16;
    v14 -= 16;
  } while (v16 != *v13);
  if (*(_QWORD*)(v11 + 512) == v14) {
    return;
  }
  v17 = *(_QWORD*)(v14 + 8);
  if (v17 == 0) {
    return;
  }
  v394 = *(_QWORD*)(v17 + 24);
  v18 =
      *(float*)(a1 + 272) *
      (float)((float)(*(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 496LL) + 16LL) *
                      0x1.0aef000000000p+4f) *
              0x1.0624de0000000p-10f);
  if ((*(_BYTE*)(a1 + 77) & 1) == 0) {
    v19 = *(_DWORD*)(a1 + 104);
    if ((v19 & 0x80000000) == 0) {
      v20 = *(float*)(a1 + 108);
      v21 = v18 + *(float*)(a1 + 112);
      if (*(_DWORD*)(a1 + 268) == 1) {
        v21 = 0x0.0p+0f;
      }
      *(float*)(a1 + 112) = v21;
      if (v21 >= v20) {
        *(_DWORD*)(a1 + 72) = v19;
        v22 = *(_BYTE*)(a1 + 80);
        *(_QWORD*)(a1 + 108) = 0;
        if ((v22 & 1) != 0) {
          **(_BYTE**)(a1 + 96) = 0;
          *(_QWORD*)(a1 + 88) = 0;
        }
        else {
          *(_WORD*)(a1 + 80) = 0;
        }
        *(_DWORD*)(a1 + 104) = -1;
        if (*(_QWORD*)(a1 + 168) != 0) {
          v23 = *(_QWORD**)(a1 + 160);
          if (v23 != nullptr) {
            v24 = fw_memory_g_heap_manager_ptr;
            do {
              v26 = (__int64)v23;
              v23 = (_QWORD*)*v23;
              MaterialAnimModule_beb940_alt1((__int64*)(v26 + 40));
              if ((*(_BYTE*)(v26 + 16) & 1) != 0) {
                v27 = *(_QWORD*)(v26 + 32);
                if (v27 != 0) {
                  if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) != 0) {
                    v28 = 128;
                  }
                  else {
                    v28 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v24 + v28, v27);
                }
              }
              if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) != 0) {
                v25 = 128;
              }
              else {
                v25 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v24 + v25, v26);
            } while (v23 != nullptr);
          }
          v29 = *(_QWORD*)(a1 + 152);
          *(_QWORD*)(a1 + 160) = 0;
          if (v29 != 0) {
            v30 = v29 & 7;
            if (v29 >= 8) {
              v32 = v29 & 0xFFFFFFFFFFFFFFF8LL;
              v31 = 0;
              do {
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v31) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v31 + 8) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v31 + 16) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v31 + 24) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v31 + 32) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v31 + 40) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v31 + 48) = 0;
                v33 = *(_QWORD*)(a1 + 144) + 8 * v31;
                v31 += 8;
                *(_QWORD*)(v33 + 56) = 0;
              } while (v32 != v31);
            }
            else {
              v31 = 0;
            }
            if (v30 != 0) {
              v34 = 8 * v31;
              do {
                --v30;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + v34) = 0;
                v34 += 8;
              } while (v30 != 0);
            }
          }
          *(_QWORD*)(a1 + 168) = 0;
        }
      }
      if (*(float*)(a1 + 272) < 0x0.0p+0f && *(float*)(a1 + 112) < 0x0.0p+0f) {
        v35 = *(_BYTE*)(a1 + 80);
        *(_QWORD*)(a1 + 108) = 0;
        if ((v35 & 1) != 0) {
          **(_BYTE**)(a1 + 96) = 0;
          *(_QWORD*)(a1 + 88) = 0;
        }
        else {
          *(_WORD*)(a1 + 80) = 0;
        }
        *(_DWORD*)(a1 + 104) = -1;
        if (*(_QWORD*)(a1 + 168) != 0) {
          v36 = *(_QWORD**)(a1 + 160);
          if (v36 != nullptr) {
            v37 = fw_memory_g_heap_manager_ptr;
            do {
              v39 = (__int64)v36;
              v36 = (_QWORD*)*v36;
              MaterialAnimModule_beb940_alt1((__int64*)(v39 + 40));
              if ((*(_BYTE*)(v39 + 16) & 1) != 0) {
                v40 = *(_QWORD*)(v39 + 32);
                if (v40 != 0) {
                  if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) != 0) {
                    v41 = 128;
                  }
                  else {
                    v41 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v37 + v41, v40);
                }
              }
              if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) != 0) {
                v38 = 128;
              }
              else {
                v38 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v37 + v38, v39);
            } while (v36 != nullptr);
          }
          v42 = *(_QWORD*)(a1 + 152);
          *(_QWORD*)(a1 + 160) = 0;
          if (v42 != 0) {
            v43 = v42 & 7;
            if (v42 >= 8) {
              v45 = v42 & 0xFFFFFFFFFFFFFFF8LL;
              v44 = 0;
              do {
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v44) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v44 + 8) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v44 + 16) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v44 + 24) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v44 + 32) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v44 + 40) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v44 + 48) = 0;
                v46 = *(_QWORD*)(a1 + 144) + 8 * v44;
                v44 += 8;
                *(_QWORD*)(v46 + 56) = 0;
              } while (v45 != v44);
            }
            else {
              v44 = 0;
            }
            if (v43 != 0) {
              v47 = 8 * v44;
              do {
                --v43;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + v47) = 0;
                v47 += 8;
              } while (v43 != 0);
            }
          }
          *(_QWORD*)(a1 + 168) = 0;
        }
      }
    }
  }
  v48 = *(unsigned int*)(a1 + 72);
  if ((v48 & 0x80000000) == 0) {
    v49 = *(_QWORD*)(a1 + 24) + (v48 << 6);
    if ((*(_BYTE*)(a1 + 77) & 1) != 0) {
      goto LABEL_68;
    }
    v379 = *(float*)(a1 + 264) * 0x1.1111120000000p-6f;
    v380 = *(float*)(v49 + 28);
    if (*(_DWORD*)(a1 + 268) != 1) {
      v379 = v18 + *(float*)(v49 + 24);
    }
    *(float*)(v49 + 24) = v379;
    if (v379 <= v380) {
      if (v379 >= 0x0.0p+0f) {
        goto LABEL_68;
      }
      if (*(_BYTE*)(v49 + 32) == 1) {
        *(float*)(v49 + 24) = v380;
        goto LABEL_68;
      }
      *(_DWORD*)(v49 + 24) = 0;
    }
    else {
      if (*(_BYTE*)(v49 + 32) == 1) {
        *(_DWORD*)(v49 + 24) = 0;
        goto LABEL_68;
      }
      *(float*)(v49 + 24) = v380;
    }
    if ((*(_DWORD*)(a1 + 104) & 0x80000000) != 0) {
      *(_BYTE*)(a1 + 76) = 0;
    }
  LABEL_68:
    v50 = *(_QWORD**)(v49 + 40);
    v382 = *(_QWORD**)(v49 + 48);
    if (v50 != v382) {
      v381 = v49;
      while (1) {
        v51 = *(unsigned __int8*)v50;
        v52 = (v51 & 1) == 0;
        v53 = v51 >> 1;
        v54 = v52 ? (__int64)v50 + 1 : v50[2];
        v55 = v52 ? v53 : v50[1];
        Model_a66f60_alt1((void*)(&v391_.v391), v394, v54, v55);
        v56 = v391_.v391;
        if (v391_.v391 != 0) {
          break;
        }
      LABEL_346:
        v211 = v391_.v392;
        if (v391_.v392 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v391_.v392 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v211 + 16LL))(v211);
          std___1___shared_weak_count___release_weak_alt1(v211);
        }
        v50 += 6;
        if (v50 == v382) {
          goto LABEL_362;
        }
      }
      v386 = (unsigned __int8*)v50;
      v57 = *(_QWORD*)(a1 + 152);
      if (v57 == 0 || *(_QWORD*)(a1 + 168) == 0) {
      LABEL_83:
        v59 = nullptr;
      }
      else {
        v60 = *v386;
        if ((v60 & 1) != 0) {
          v61 = *((_QWORD*)v386 + 2);
        }
        else {
          v61 = (__int64)(v386 + 1);
        }
        if ((v60 & 1) != 0) {
          v62 = *((_QWORD*)v386 + 1);
        }
        else {
          v62 = v60 >> 1;
        }
        v383 = v61;
        v63 = std___1___hash_memory_alt1(v61, v62);
        v64 = v57 - 1;
        v65 = v63;
        if ((v57 & (v57 - 1)) != 0) {
          v66 = v63;
          if (v63 >= v57) {
            v66 = v63 % v57;
          }
        }
        else {
          v66 = v63 & v64;
        }
        v67 = *(__int64***)(*(_QWORD*)(a1 + 144) + 8 * v66);
        if (v67 != nullptr) {
          v59 = *v67;
          if (*v67 != nullptr) {
            if ((v57 & v64) != 0) {
              v49 = v381;
              while (1) {
                v68 = v59[1];
                if (v68 == v65) {
                  v69 = *((unsigned __int8*)v59 + 16);
                  v70 = v59[3];
                  if ((v69 & 1) == 0) {
                    v70 = v69 >> 1;
                  }
                  if (v70 == v62) {
                    v71 = (v69 & 1) != 0 ? v59[4] : (__int64)v59 + 17;
                    if (memcmp_alt1(v71, v383, v62) == 0) {
                      goto LABEL_113;
                    }
                  }
                }
                else {
                  if (v68 >= v57) {
                    v68 %= v57;
                  }
                  if (v68 != v66) {
                    goto LABEL_83;
                  }
                }
                v59 = (__int64*)*v59;
                if (v59 == nullptr) {
                  goto LABEL_113;
                }
              }
            }
            v50 = v386;
            while (1) {
              v212 = v59[1];
              if (v212 != v65) {
                break;
              }
              v213 = *((unsigned __int8*)v59 + 16);
              v214 = v59[3];
              if ((v213 & 1) == 0) {
                v214 = v213 >> 1;
              }
              if (v214 == v62) {
                v215 = (v213 & 1) != 0 ? v59[4] : (__int64)v59 + 17;
                if (memcmp_alt1(v215, v383, v62) == 0) {
                LABEL_360:
                  v49 = v381;
                  goto LABEL_114;
                }
              }
            LABEL_351:
              v59 = (__int64*)*v59;
              if (v59 == nullptr) {
                goto LABEL_360;
              }
            }
            if ((v212 & v64) == v66) {
              goto LABEL_351;
            }
            v49 = v381;
            v59 = nullptr;
          LABEL_114:
            v72 = (unsigned __int8*)v50[3];
            v73 = (unsigned __int8*)v50[4];
            while (1) {
              while (1) {
              LABEL_123:
                if (v72 == v73) {
                  goto LABEL_346;
                }
                v77 = *((_DWORD*)v72 + 6);
                if (v77 > 1) {
                  break;
                }
                if (v77 != 0) {
                  if (v77 != 1) {
                    goto LABEL_122;
                  }
                  v78 = *v72;
                  v79 = (v78 & 1) == 0;
                  v80 = v78 >> 1;
                  if (v79) {
                    v81 = v80;
                  }
                  else {
                    v81 = *((_QWORD*)v72 + 1);
                  }
                  if (v79) {
                    v82 = v72 + 1;
                  }
                  else {
                    v82 = *((unsigned __int8**)v72 + 2);
                  }
                  (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                               __int64**))(*(_QWORD*)v56 + 88LL))(v56, v82, v81,
                                                                  v390);
                  v83 = *((__int64**)v72 + 5);
                  v84 = v390[0];
                  LODWORD(v85) = *(_DWORD*)(v49 + 24);
                  v87 = *v83;
                  v86 = v83[1];
                  v88 = v86 - *v83;
                  if (v86 != *v83) {
                    if (v88 == 12) {
                      v89 = *(float*)(v87 + 4);
                    }
                    else {
                      v134 = 0;
                      v135 = 0xAAAAAAAAAAAAAAABLL * (v88 >> 2);
                      v136 = *v83;
                      while (1) {
                        v137 = *(float*)v136;
                        if (*(float*)&v85 <= *(float*)v136) {
                          break;
                        }
                        ++v134;
                        v136 += 12;
                        if (v135 == v134) {
                          v89 = *(float*)(v86 - 8);
                          goto LABEL_246;
                        }
                      }
                      if (v134 != 0) {
                        v151 = *(float*)(v136 - 12);
                        v89 = *(float*)(v136 + 4);
                        if (vabds_f32(v137, v151) >= 0x1.0000000000000p-23f) {
                          v152 = *(float*)(v136 - 8);
                          v153 = *(_DWORD*)(v136 + 8);
                          v154 = (float)(*(float*)&v85 - v151) /
                                 (float)(v137 - v151);
                          if (v153 <= 1) {
                            if (v153 == 1) {
                              if (v154 < 0x1.0000000000000p+0f) {
                                v89 = v152;
                              }
                              goto LABEL_246;
                            }
                          }
                          else {
                            switch (v153) {
                            case 2:
                              v154 = v154 * v154;
                              break;
                            case 3:
                              v154 = 0x1.0000000000000p+0f -
                                     (float)((float)(0x1.0000000000000p+0f -
                                                     v154) *
                                             (float)(0x1.0000000000000p+0f -
                                                     v154));
                              break;
                            case 4:
                              v155 = (float)(v154 * -0x1.0000000000000p+1f) +
                                     0x1.0000000000000p+1f;
                              v112 = v154 < 0x1.0000000000000p-1f;
                              v154 = v154 * (float)(v154 + v154);
                              v156 = (float)(PSEUDO_UNFUSED(
                                         (float)(v155 * v155) *
                                         -0x1.0000000000000p-1f)) +
                                     0x1.0000000000000p+0f;
                              if (!v112) {
                                v154 = v156;
                              }
                              break;
                            default:
                              break;
                            }
                          }
                          v89 = (float)(PSEUDO_UNFUSED(v89 * v154)) +
                                (float)(v152 *
                                        (float)(0x1.0000000000000p+0f - v154));
                        }
                      }
                      else {
                        v89 = *(float*)(v87 + 4);
                      }
                    }
                  LABEL_246:
                    *(float*)&v84 = v89;
                  }
                  v165 = v83 + 3;
                  v163 = v83[3];
                  v164 = v165[1];
                  v166 = v164 - v163;
                  if (v164 != v163) {
                    if (v166 == 12) {
                      goto LABEL_249;
                    }
                    v168 = 0;
                    v169 = 0xAAAAAAAAAAAAAAABLL * (v166 >> 2);
                    v170 = v163;
                    while (1) {
                      v171 = *(float*)v170;
                      if (*(float*)&v85 <= *(float*)v170) {
                        break;
                      }
                      ++v168;
                      v170 += 12;
                      if (v169 == v168) {
                        v167 = *(float*)(v164 - 8);
                        goto LABEL_270;
                      }
                    }
                    if (v168 == 0) {
                    LABEL_249:
                      v167 = *(float*)(v163 + 4);
                    }
                    else {
                      v172 = *(float*)(v170 - 12);
                      v167 = *(float*)(v170 + 4);
                      if (vabds_f32(v171, v172) >= 0x1.0000000000000p-23f) {
                        v173 = *(float*)(v170 - 8);
                        v174 = *(_DWORD*)(v170 + 8);
                        v175 = (float)(*(float*)&v85 - v172) /
                               (float)(v171 - v172);
                        if (v174 <= 1) {
                          if (v174 != 1) {
                            goto LABEL_269;
                          }
                          if (v175 < 0x1.0000000000000p+0f) {
                            v167 = v173;
                          }
                        }
                        else {
                          switch (v174) {
                          case 2:
                            v175 = v175 * v175;
                            break;
                          case 3:
                            v175 =
                                0x1.0000000000000p+0f -
                                (float)((float)(0x1.0000000000000p+0f - v175) *
                                        (float)(0x1.0000000000000p+0f - v175));
                            break;
                          case 4:
                            v112 = v175 < 0x1.0000000000000p-1f;
                            v176 = v175 * (float)(v175 + v175);
                            v175 =
                                (float)(PSEUDO_UNFUSED(
                                    (float)((float)((float)(v175 *
                                                            -0x1.0000000000000p+1f) +
                                                    0x1.0000000000000p+1f) *
                                            (float)((float)(v175 *
                                                            -0x1.0000000000000p+1f) +
                                                    0x1.0000000000000p+1f)) *
                                    -0x1.0000000000000p-1f)) +
                                0x1.0000000000000p+0f;
                            if (v112) {
                              v175 = v176;
                            }
                            break;
                          default:
                            break;
                          }
                        LABEL_269:
                          v167 = (float)(PSEUDO_UNFUSED(v167 * v175)) +
                                 (float)(v173 *
                                         (float)(0x1.0000000000000p+0f - v175));
                        }
                      }
                    }
                  LABEL_270:
                    *((float*)&v84 + 1) = v167;
                  }
                  if (v86 == v87 && v164 == v163) {
                    goto LABEL_122;
                  }
                  if (v59 != nullptr &&
                      (v387 = v84, v177 = GameRoutine_beba60(v59 + 5, v72),
                       v84 = v387, v177 != nullptr)) {
                    v72 += 64;
                    *(_QWORD*)v177[6] = v387;
                  }
                  else {
                    v178 = *v72;
                    *(_QWORD*)&v85 = v84;
                    if ((v178 & 1) != 0) {
                      v179 = *((unsigned __int8**)v72 + 2);
                    }
                    else {
                      v179 = v72 + 1;
                    }
                    if ((v178 & 1) != 0) {
                      v180 = *((_QWORD*)v72 + 1);
                    }
                    else {
                      v180 = v178 >> 1;
                    }
                    (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                                 long double))(*(_QWORD*)v56 + 24LL))(
                        v56, v179, v180, v85);
                    v72 += 64;
                  }
                }
                else {
                  LODWORD(v390[0]) = 0;
                  v115 = *v72;
                  v116 = (v115 & 1) == 0;
                  v117 = v115 >> 1;
                  if (v116) {
                    v118 = v117;
                  }
                  else {
                    v118 = *((_QWORD*)v72 + 1);
                  }
                  if (v116) {
                    v119 = v72 + 1;
                  }
                  else {
                    v119 = *((unsigned __int8**)v72 + 2);
                  }
                  (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                               __int64**))(*(_QWORD*)v56 + 80LL))(v56, v119,
                                                                  v118, v390);
                  if (!MaterialAnimModule_be6200((float*)v390, (__int64)v72,
                                                 *(float*)(v49 + 24))) {
                    goto LABEL_122;
                  }
                  if (v59 != nullptr &&
                      (v121 = GameRoutine_beba60(v59 + 5, v72)) != nullptr) {
                    v72 += 64;
                    *(_DWORD*)v121[6] = v390[0];
                  }
                  else {
                    v148 = *v72;
                    LODWORD(v120) = v390[0];
                    if ((v148 & 1) != 0) {
                      v149 = *((unsigned __int8**)v72 + 2);
                    }
                    else {
                      v149 = v72 + 1;
                    }
                    if ((v148 & 1) != 0) {
                      v150 = *((_QWORD*)v72 + 1);
                    }
                    else {
                      v150 = v148 >> 1;
                    }
                    (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                                 long double))(*(_QWORD*)v56 + 16LL))(
                        v56, v149, v150, v120);
                    v72 += 64;
                  }
                }
              }
              if (v77 != 2) {
                if (v77 != 3) {
                  goto LABEL_122;
                }
                v90 = *v72;
                v91 = (v90 & 1) == 0;
                v92 = v90 >> 1;
                if (v91) {
                  v93 = v92;
                }
                else {
                  v93 = *((_QWORD*)v72 + 1);
                }
                if (v91) {
                  v94 = v72 + 1;
                }
                else {
                  v94 = *((unsigned __int8**)v72 + 2);
                }
                (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                             int8x16_t*))(*(_QWORD*)v56 + 104LL))(v56, v94, v93,
                                                                  &v389);
                v95 = *((_QWORD*)v72 + 5);
                v96 = 0;
                v97 = 0;
                v390[0] = (__int64*)LANES128(v389).n128_u64[0];
                v390[1] =
                    (__int64*)LANES128_OF(vextq_s8(v389, v389, 8u)).n128_u64[0];
                v98 = *(float*)(v49 + 24);
                while (2) {
                  v101 = *(_QWORD*)(v95 + 24 * v96);
                  v100 = *(_QWORD*)(v95 + 24 * v96 + 8);
                  v102 = v100 - v101;
                  if (v100 == v101) {
                    goto LABEL_147;
                  }
                  if (v102 == 12) {
                    goto LABEL_145;
                  }
                  v103 = 0;
                  v104 = 0xAAAAAAAAAAAAAAABLL * (v102 >> 2);
                  v105 = *(_QWORD*)(v95 + 24 * v96);
                  while (1) {
                    v106 = *(float*)v105;
                    if (v98 <= *(float*)v105) {
                      break;
                    }
                    ++v103;
                    v105 += 12;
                    if (v104 == v103) {
                      v99 = *(float*)(v100 - 8);
                      goto LABEL_146;
                    }
                  }
                  if (v103 == 0) {
                  LABEL_145:
                    v99 = *(float*)(v101 + 4);
                  }
                  else {
                    v107 = *(float*)(v105 - 12);
                    v99 = *(float*)(v105 + 4);
                    if (vabds_f32(v106, v107) >= 0x1.0000000000000p-23f) {
                      v108 = *(float*)(v105 - 8);
                      v109 = *(_DWORD*)(v105 + 8);
                      v110 = (float)(v98 - v107) / (float)(v106 - v107);
                      if (v109 <= 1) {
                        if (v109 != 1) {
                          goto LABEL_169;
                        }
                        if (v110 < 0x1.0000000000000p+0f) {
                          v99 = v108;
                        }
                      }
                      else {
                        switch (v109) {
                        case 2:
                          v110 = v110 * v110;
                          break;
                        case 3:
                          v110 = 0x1.0000000000000p+0f -
                                 (float)((float)(0x1.0000000000000p+0f - v110) *
                                         (float)(0x1.0000000000000p+0f - v110));
                          break;
                        case 4:
                          v111 = (float)(v110 * -0x1.0000000000000p+1f) +
                                 0x1.0000000000000p+1f;
                          v112 = v110 < 0x1.0000000000000p-1f;
                          v110 = v110 * (float)(v110 + v110);
                          v113 =
                              (float)(PSEUDO_UNFUSED((float)(v111 * v111) *
                                                     -0x1.0000000000000p-1f)) +
                              0x1.0000000000000p+0f;
                          if (!v112) {
                            v110 = v113;
                          }
                          break;
                        default:
                          break;
                        }
                      LABEL_169:
                        v99 = (float)(PSEUDO_UNFUSED(v99 * v110)) +
                              (float)(v108 *
                                      (float)(0x1.0000000000000p+0f - v110));
                      }
                    }
                  }
                LABEL_146:
                  *((float*)v390 + v96) = v99;
                LABEL_147:
                  ++v96;
                  v97 |= v100 != v101;
                  if (v96 == 4) {
                    if ((v97 & 1) != 0) {
                      if (v59 != nullptr) {
                        v114 = GameRoutine_beba60(v59 + 5, v72);
                        if (v114 != nullptr) {
                          v72 += 64;
                          *(_OWORD*)v114[6] = *(_OWORD*)v390;
                          goto LABEL_123;
                        }
                      }
                      v142 = *v72;
                      v143 = (v142 & 1) == 0;
                      *(__int64**)&v144 = v390[0];
                      v145 = v142 >> 1;
                      if (v143) {
                        v146 = v145;
                      }
                      else {
                        v146 = *((_QWORD*)v72 + 1);
                      }
                      *((__int64**)&v144 + 1) = v390[1];
                      if (v143) {
                        v147 = v72 + 1;
                      }
                      else {
                        v147 = *((unsigned __int8**)v72 + 2);
                      }
                      (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                                   long double))(*(_QWORD*)v56 + 40LL))(
                          v56, v147, v146, v144);
                    }
                  LABEL_122:
                    v72 += 64;
                    goto LABEL_123;
                  }
                  continue;
                }
              }
              v122 = *v72;
              v123 = (v122 & 1) == 0;
              v124 = v122 >> 1;
              v125 = v123 ? v124 : *((_QWORD*)v72 + 1);
              v126 = v123 ? (__int64)(v72 + 1) : *((_QWORD*)v72 + 2);
              (*(void (**)(__int64, __int64, __int64, __int64**))(
                  *(_QWORD*)v56 + 96LL))(v56, v126, v125, v390);
              v127 = *((__int64**)v72 + 5);
              v128 = *(float*)(v49 + 24);
              v130 = *v127;
              v129 = v127[1];
              *(__int64**)&v131 = v390[0];
              v132 = v129 - *v127;
              if (v129 != *v127) {
                break;
              }
            LABEL_287:
              v182 = v127[3];
              v181 = v127[4];
              v183 = v181 - v182;
              if (v181 == v182) {
                goto LABEL_311;
              }
              if (v183 == 12) {
                goto LABEL_289;
              }
              v185 = 0;
              v186 = 0xAAAAAAAAAAAAAAABLL * (v183 >> 2);
              v187 = v127[3];
              while (1) {
                v188 = *(float*)v187;
                if (v128 <= *(float*)v187) {
                  break;
                }
                ++v185;
                v187 += 12;
                if (v186 == v185) {
                  v184 = *(float*)(v181 - 8);
                  goto LABEL_310;
                }
              }
              if (v185 == 0) {
              LABEL_289:
                v184 = *(float*)(v182 + 4);
              }
              else {
                v189 = *(float*)(v187 - 12);
                v184 = *(float*)(v187 + 4);
                if (vabds_f32(v188, v189) >= 0x1.0000000000000p-23f) {
                  v190 = *(float*)(v187 - 8);
                  v191 = *(_DWORD*)(v187 + 8);
                  v192 = (float)(v128 - v189) / (float)(v188 - v189);
                  if (v191 <= 1) {
                    if (v191 == 1) {
                      if (v192 < 0x1.0000000000000p+0f) {
                        v184 = v190;
                      }
                      goto LABEL_310;
                    }
                  }
                  else {
                    switch (v191) {
                    case 2:
                      v192 = v192 * v192;
                      break;
                    case 3:
                      v192 = 0x1.0000000000000p+0f -
                             (float)((float)(0x1.0000000000000p+0f - v192) *
                                     (float)(0x1.0000000000000p+0f - v192));
                      break;
                    case 4:
                      v112 = v192 < 0x1.0000000000000p-1f;
                      v193 = v192 * (float)(v192 + v192);
                      v192 =
                          (float)(PSEUDO_UNFUSED(
                              (float)((float)((float)(v192 *
                                                      -0x1.0000000000000p+1f) +
                                              0x1.0000000000000p+1f) *
                                      (float)((float)(v192 *
                                                      -0x1.0000000000000p+1f) +
                                              0x1.0000000000000p+1f)) *
                              -0x1.0000000000000p-1f)) +
                          0x1.0000000000000p+0f;
                      if (v112) {
                        v192 = v193;
                      }
                      break;
                    default:
                      break;
                    }
                  }
                  v184 = (float)(PSEUDO_UNFUSED(v184 * v192)) +
                         (float)(v190 * (float)(0x1.0000000000000p+0f - v192));
                }
              }
            LABEL_310:
              *((float*)&v131 + 1) = v184;
            LABEL_311:
              v52 = v129 == v130;
              v196 = v127 + 6;
              v194 = v127[6];
              v195 = v196[1];
              v198 = !v52 || v181 != v182;
              v199 = v195 - v194;
              if (v195 == v194) {
                v200 = *(float*)&v390[1];
                goto LABEL_342;
              }
              if (v199 == 12) {
                v200 = *(float*)(v194 + 4);
                goto LABEL_343;
              }
              v201 = 0;
              v202 = 0xAAAAAAAAAAAAAAABLL * (v199 >> 2);
              v203 = v194;
              while (1) {
                v204 = *(float*)v203;
                if (v128 <= *(float*)v203) {
                  break;
                }
                ++v201;
                v203 += 12;
                if (v202 == v201) {
                  v200 = *(float*)(v195 - 8);
                  goto LABEL_342;
                }
              }
              if (v201 == 0) {
                v200 = *(float*)(v194 + 4);
                goto LABEL_342;
              }
              v205 = *(float*)(v203 - 12);
              v200 = *(float*)(v203 + 4);
              if (vabds_f32(v204, v205) < 0x1.0000000000000p-23f) {
                goto LABEL_342;
              }
              v206 = *(float*)(v203 - 8);
              v207 = *(_DWORD*)(v203 + 8);
              v208 = (float)(v128 - v205) / (float)(v204 - v205);
              if (v207 > 1) {
                switch (v207) {
                case 2:
                  v208 = v208 * v208;
                  break;
                case 3:
                  v208 = 0x1.0000000000000p+0f -
                         (float)((float)(0x1.0000000000000p+0f - v208) *
                                 (float)(0x1.0000000000000p+0f - v208));
                  break;
                case 4:
                  v112 = v208 < 0x1.0000000000000p-1f;
                  v209 = v208 * (float)(v208 + v208);
                  v208 = (float)(PSEUDO_UNFUSED(
                             (float)((float)((float)(v208 *
                                                     -0x1.0000000000000p+1f) +
                                             0x1.0000000000000p+1f) *
                                     (float)((float)(v208 *
                                                     -0x1.0000000000000p+1f) +
                                             0x1.0000000000000p+1f)) *
                             -0x1.0000000000000p-1f)) +
                         0x1.0000000000000p+0f;
                  if (v112) {
                    v208 = v209;
                  }
                  break;
                default:
                  break;
                }
              LABEL_341:
                v200 = (float)(PSEUDO_UNFUSED(v200 * v208)) +
                       (float)(v206 * (float)(0x1.0000000000000p+0f - v208));
                goto LABEL_342;
              }
              if (v207 != 1) {
                goto LABEL_341;
              }
              if (v208 < 0x1.0000000000000p+0f) {
                v200 = v206;
              }
            LABEL_342:
              if (((v195 == v194) & ~v198) != 0) {
                goto LABEL_122;
              }
            LABEL_343:
              if (v59 == nullptr ||
                  (v384 = v200, v388 = *(_QWORD*)&v131,
                   v210 = GameRoutine_beba60(v59 + 5, v72), v200 = v384,
                   *(_QWORD*)& v131 = v388, v210 == nullptr)) {
                v74 = *v72;
                if ((v74 & 1) != 0) {
                  v75 = *((unsigned __int8**)v72 + 2);
                }
                else {
                  v75 = v72 + 1;
                }
                if ((v74 & 1) != 0) {
                  v76 = *((_QWORD*)v72 + 1);
                }
                else {
                  v76 = v74 >> 1;
                }
                *((_QWORD*)&v131 + 1) = LODWORD(v200);
                (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                             long double))(*(_QWORD*)v56 + 32LL))(v56, v75, v76,
                                                                  v131);
                goto LABEL_122;
              }
              v72 += 64;
              *(_QWORD*)v210[6] = v388;
              *(float*)(v210[6] + 8) = v384;
            }
            if (v132 == 12) {
              goto LABEL_192;
            }
            v138 = 0;
            v139 = 0xAAAAAAAAAAAAAAABLL * (v132 >> 2);
            v140 = *v127;
            while (1) {
              v141 = *(float*)v140;
              if (v128 <= *(float*)v140) {
                break;
              }
              ++v138;
              v140 += 12;
              if (v139 == v138) {
                v133 = *(float*)(v129 - 8);
                goto LABEL_286;
              }
            }
            if (v138 == 0) {
            LABEL_192:
              v133 = *(float*)(v130 + 4);
            }
            else {
              v157 = *(float*)(v140 - 12);
              v133 = *(float*)(v140 + 4);
              if (vabds_f32(v141, v157) >= 0x1.0000000000000p-23f) {
                v158 = *(float*)(v140 - 8);
                v159 = *(_DWORD*)(v140 + 8);
                v160 = (float)(v128 - v157) / (float)(v141 - v157);
                if (v159 <= 1) {
                  if (v159 == 1) {
                    if (v160 < 0x1.0000000000000p+0f) {
                      v133 = v158;
                    }
                    goto LABEL_286;
                  }
                }
                else {
                  switch (v159) {
                  case 2:
                    v160 = v160 * v160;
                    break;
                  case 3:
                    v160 = 0x1.0000000000000p+0f -
                           (float)((float)(0x1.0000000000000p+0f - v160) *
                                   (float)(0x1.0000000000000p+0f - v160));
                    break;
                  case 4:
                    v161 = (float)(v160 * -0x1.0000000000000p+1f) +
                           0x1.0000000000000p+1f;
                    v112 = v160 < 0x1.0000000000000p-1f;
                    v160 = v160 * (float)(v160 + v160);
                    v162 = (float)(PSEUDO_UNFUSED((float)(v161 * v161) *
                                                  -0x1.0000000000000p-1f)) +
                           0x1.0000000000000p+0f;
                    if (!v112) {
                      v160 = v162;
                    }
                    break;
                  default:
                    break;
                  }
                }
                v133 = (float)(PSEUDO_UNFUSED(v133 * v160)) +
                       (float)(v158 * (float)(0x1.0000000000000p+0f - v160));
              }
            }
          LABEL_286:
            *(_QWORD*)&v131 = __PAIR64__(HIDWORD(v390[0]), LODWORD(v133));
            goto LABEL_287;
          }
          v49 = v381;
        }
        else {
          v49 = v381;
          v59 = nullptr;
        }
      }
    LABEL_113:
      v50 = v386;
      goto LABEL_114;
    }
  }
LABEL_362:
  v216 = *(unsigned int*)(a1 + 104);
  if (*(_DWORD*)(a1 + 72) != (_DWORD)v216 && (v216 & 0x80000000) == 0) {
    v217 = *(_QWORD*)(a1 + 24) + (v216 << 6);
    if ((*(_BYTE*)(a1 + 77) & 1) == 0) {
      v218 = *(float*)(a1 + 264) * 0x1.1111120000000p-6f;
      v219 = *(float*)(v217 + 28);
      if (*(_DWORD*)(a1 + 268) != 1) {
        v218 = v18 + *(float*)(v217 + 24);
      }
      *(float*)(v217 + 24) = v218;
      if (v218 > v219) {
        if (*(_BYTE*)(v217 + 32) != 0) {
          v219 = 0x0.0p+0f;
        }
        *(float*)(v217 + 24) = v219;
      }
    }
    v220 = *(__int64**)(v217 + 40);
    v385 = *(__int64**)(v217 + 48);
    if (v220 != v385) {
      while (1) {
        v221 = *(unsigned __int8*)v220;
        v222 = (v221 & 1) == 0;
        v223 = v221 >> 1;
        v224 = v222 ? (__int64)v220 + 1 : v220[2];
        v225 = v222 ? v223 : v220[1];
        Model_a66f60_alt1((void*)(&v391_.v391), v394, v224, v225);
        v226 = v391_.v391;
        if (v391_.v391 != 0) {
          break;
        }
      LABEL_600:
        v378 = v391_.v392;
        if (v391_.v392 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v391_.v392 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v378 + 16LL))(v378);
          std___1___shared_weak_count___release_weak_alt1(v378);
        }
        v220 += 6;
        if (v220 == v385) {
          return;
        }
      }
      v227 = (unsigned __int8*)v220[3];
      v228 = (unsigned __int8*)v220[4];
    LABEL_383:
      while (2) {
        while (2) {
          if (v227 == v228) {
            goto LABEL_600;
          }
          v390[0] = v220;
          v229 = (float*)MaterialAnimModule_bebc00(
              (float*)(a1 + 144), (unsigned __int8*)v220, v390);
          v390[0] = (__int64*)v227;
          v230 = MaterialAnimModule_bec240(v229 + 10, v227, v390);
          v231 = *((_DWORD*)v227 + 6);
          v232 = v230;
          v233 = *(float*)(a1 + 112) / *(float*)(a1 + 108);
          if (v231 <= 1) {
            if (v231 == 0) {
              v279 = *v227;
              v280 = (v279 & 1) == 0;
              v281 = v279 >> 1;
              if (v280) {
                v282 = v281;
              }
              else {
                v282 = *((_QWORD*)v227 + 1);
              }
              if (v280) {
                v283 = v227 + 1;
              }
              else {
                v283 = *((unsigned __int8**)v227 + 2);
              }
              (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                           int8x16_t*))(*(_QWORD*)v226 + 80LL))(v226, v283,
                                                                v282, &v389);
              LODWORD(v390[0]) = LANES128(v389).n128_u32[0];
              if (!MaterialAnimModule_be6200((float*)v390, (__int64)v227,
                                             *(float*)(v217 + 24))) {
                goto LABEL_382;
              }
              v284 = *v227;
              if ((v284 & 1) != 0) {
                v285 = *((unsigned __int8**)v227 + 2);
              }
              else {
                v285 = v227 + 1;
              }
              if ((v284 & 1) != 0) {
                v286 = *((_QWORD*)v227 + 1);
              }
              else {
                v286 = v284 >> 1;
              }
              (*(void (**)(__int64, unsigned __int8*, unsigned __int64, float))(
                  *(_QWORD*)v226 + 16LL))(
                  v226, v285, v286,
                  (float)(PSEUDO_UNFUSED((float)(0x1.0000000000000p+0f - v233) *
                                         *(float*)v232[6])) +
                      (float)(*(float*)v390 * v233));
              v227 += 64;
              continue;
            }
            if (v231 != 1) {
              goto LABEL_382;
            }
            v234 = *v227;
            v235 = (v234 & 1) == 0;
            v236 = v234 >> 1;
            if (v235) {
              v237 = v236;
            }
            else {
              v237 = *((_QWORD*)v227 + 1);
            }
            if (v235) {
              v238 = v227 + 1;
            }
            else {
              v238 = *((unsigned __int8**)v227 + 2);
            }
            (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                         __int64**))(*(_QWORD*)v226 + 88LL))(v226, v238, v237,
                                                             v390);
            v240 = *((__int64**)v227 + 5);
            v241 = *(float*)(v217 + 24);
            v243 = *v240;
            v242 = v240[1];
            v244 = v242 - *v240;
            if (v242 == *v240) {
              LODWORD(v239) = v390[0];
              goto LABEL_500;
            }
            if (v244 != 12) {
              v298 = 0;
              v299 = 0xAAAAAAAAAAAAAAABLL * (v244 >> 2);
              v300 = *v240;
              while (1) {
                v301 = *(float*)v300;
                if (v241 <= *(float*)v300) {
                  break;
                }
                ++v298;
                v300 += 12;
                if (v299 == v298) {
                  LODWORD(v239) = *(_DWORD*)(v242 - 8);
                  goto LABEL_500;
                }
              }
              if (v298 != 0) {
                v306 = *(float*)(v300 - 12);
                LODWORD(v239) = *(_DWORD*)(v300 + 4);
                if (vabds_f32(v301, v306) >= 0x1.0000000000000p-23f) {
                  v307 = *(float*)(v300 - 8);
                  v308 = *(_DWORD*)(v300 + 8);
                  v309 = (float)(v241 - v306) / (float)(v301 - v306);
                  if (v308 > 1) {
                    switch (v308) {
                    case 2:
                      v309 = v309 * v309;
                      break;
                    case 3:
                      v309 = 0x1.0000000000000p+0f -
                             (float)((float)(0x1.0000000000000p+0f - v309) *
                                     (float)(0x1.0000000000000p+0f - v309));
                      break;
                    case 4:
                      v310 = (float)(v309 * -0x1.0000000000000p+1f) +
                             0x1.0000000000000p+1f;
                      v112 = v309 < 0x1.0000000000000p-1f;
                      v309 = v309 * (float)(v309 + v309);
                      v311 = (float)(PSEUDO_UNFUSED((float)(v310 * v310) *
                                                    -0x1.0000000000000p-1f)) +
                             0x1.0000000000000p+0f;
                      if (!v112) {
                        v309 = v311;
                      }
                      break;
                    default:
                      break;
                    }
                    goto LABEL_499;
                  }
                  if (v308 != 1) {
                  LABEL_499:
                    *(float*)&v239 =
                        (float)(PSEUDO_UNFUSED(*(float*)&v239 * v309)) +
                        (float)(v307 * (float)(0x1.0000000000000p+0f - v309));
                    goto LABEL_500;
                  }
                  if (v309 < 0x1.0000000000000p+0f) {
                    *(float*)&v239 = v307;
                  }
                }
              LABEL_500:
                v320 = v240 + 3;
                v318 = v240[3];
                v319 = v320[1];
                v321 = v319 - v318;
                if (v319 == v318) {
                  v322 = *((float*)v390 + 1);
                }
                else {
                  if (v321 == 12) {
                    v322 = *(float*)(v318 + 4);
                  LABEL_527:
                    v332 = (float*)v232[6];
                    v333 = *v227;
                    v334 = 0x1.0000000000000p+0f - v233;
                    if ((v333 & 1) != 0) {
                      v335 = *((unsigned __int8**)v227 + 2);
                    }
                    else {
                      v335 = v227 + 1;
                    }
                    if ((v333 & 1) != 0) {
                      v336 = *((_QWORD*)v227 + 1);
                    }
                    else {
                      v336 = v333 >> 1;
                    }
                    *(float*)&v239 = (float)(PSEUDO_UNFUSED(v334 * *v332)) +
                                     (float)(*(float*)&v239 * v233);
                    *((float*)&v239 + 1) =
                        (float)(PSEUDO_UNFUSED(v334 * v332[1])) +
                        (float)(v322 * v233);
                    (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                                 long double))(*(_QWORD*)v226 + 24LL))(
                        v226, v335, v336, v239);
                    v227 += 64;
                    continue;
                  }
                  v323 = 0;
                  v324 = 0xAAAAAAAAAAAAAAABLL * (v321 >> 2);
                  v325 = v318;
                  while (1) {
                    v326 = *(float*)v325;
                    if (v241 <= *(float*)v325) {
                      break;
                    }
                    ++v323;
                    v325 += 12;
                    if (v324 == v323) {
                      v322 = *(float*)(v319 - 8);
                      goto LABEL_525;
                    }
                  }
                  if (v323 != 0) {
                    v327 = *(float*)(v325 - 12);
                    v322 = *(float*)(v325 + 4);
                    if (vabds_f32(v326, v327) >= 0x1.0000000000000p-23f) {
                      v328 = *(float*)(v325 - 8);
                      v329 = *(_DWORD*)(v325 + 8);
                      v330 = (float)(v241 - v327) / (float)(v326 - v327);
                      if (v329 > 1) {
                        switch (v329) {
                        case 2:
                          v330 = v330 * v330;
                          break;
                        case 3:
                          v330 = 0x1.0000000000000p+0f -
                                 (float)((float)(0x1.0000000000000p+0f - v330) *
                                         (float)(0x1.0000000000000p+0f - v330));
                          break;
                        case 4:
                          v112 = v330 < 0x1.0000000000000p-1f;
                          v331 = v330 * (float)(v330 + v330);
                          v330 =
                              (float)(PSEUDO_UNFUSED(
                                  (float)((float)((float)(v330 *
                                                          -0x1.0000000000000p+1f) +
                                                  0x1.0000000000000p+1f) *
                                          (float)((float)(v330 *
                                                          -0x1.0000000000000p+1f) +
                                                  0x1.0000000000000p+1f)) *
                                  -0x1.0000000000000p-1f)) +
                              0x1.0000000000000p+0f;
                          if (v112) {
                            v330 = v331;
                          }
                          break;
                        default:
                          break;
                        }
                        goto LABEL_524;
                      }
                      if (v329 != 1) {
                      LABEL_524:
                        v322 = (float)(PSEUDO_UNFUSED(v322 * v330)) +
                               (float)(v328 *
                                       (float)(0x1.0000000000000p+0f - v330));
                        goto LABEL_525;
                      }
                      if (v330 < 0x1.0000000000000p+0f) {
                        v322 = v328;
                      }
                    }
                  }
                  else {
                    v322 = *(float*)(v318 + 4);
                  }
                }
              LABEL_525:
                if (v242 == v243 && v319 == v318) {
                  goto LABEL_382;
                }
                goto LABEL_527;
              }
            }
            LODWORD(v239) = *(_DWORD*)(v243 + 4);
            goto LABEL_500;
          }
          break;
        }
        if (v231 != 2) {
          if (v231 != 3) {
            goto LABEL_382;
          }
          v245 = *v227;
          v246 = (v245 & 1) == 0;
          v247 = v245 >> 1;
          if (v246) {
            v248 = v247;
          }
          else {
            v248 = *((_QWORD*)v227 + 1);
          }
          if (v246) {
            v249 = v227 + 1;
          }
          else {
            v249 = *((unsigned __int8**)v227 + 2);
          }
          (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                       int8x16_t*))(*(_QWORD*)v226 + 104LL))(v226, v249, v248,
                                                             &v389);
          v250 = *((_QWORD*)v227 + 5);
          v251 = 0;
          v252 = 0;
          v390[0] = (__int64*)LANES128(v389).n128_u64[0];
          v390[1] = (__int64*)LANES128_OF(vextq_s8(v389, v389, 8u)).n128_u64[0];
          v253 = *(float*)(v217 + 24);
          while (1) {
            v256 = *(_QWORD*)(v250 + 24 * v251);
            v255 = *(_QWORD*)(v250 + 24 * v251 + 8);
            v257 = v255 - v256;
            if (v255 == v256) {
              goto LABEL_407;
            }
            if (v257 == 12) {
              goto LABEL_405;
            }
            v258 = 0;
            v259 = 0xAAAAAAAAAAAAAAABLL * (v257 >> 2);
            v260 = *(_QWORD*)(v250 + 24 * v251);
            while (1) {
              v261 = *(float*)v260;
              if (v253 <= *(float*)v260) {
                break;
              }
              ++v258;
              v260 += 12;
              if (v259 == v258) {
                v254 = *(float*)(v255 - 8);
                goto LABEL_406;
              }
            }
            if (v258 == 0) {
            LABEL_405:
              v254 = *(float*)(v256 + 4);
            }
            else {
              v262 = *(float*)(v260 - 12);
              v254 = *(float*)(v260 + 4);
              if (vabds_f32(v261, v262) >= 0x1.0000000000000p-23f) {
                v263 = *(float*)(v260 - 8);
                v264 = *(_DWORD*)(v260 + 8);
                v265 = (float)(v253 - v262) / (float)(v261 - v262);
                if (v264 <= 1) {
                  if (v264 == 1) {
                    if (v265 < 0x1.0000000000000p+0f) {
                      v254 = v263;
                    }
                    goto LABEL_406;
                  }
                }
                else {
                  switch (v264) {
                  case 2:
                    v265 = v265 * v265;
                    break;
                  case 3:
                    v265 = 0x1.0000000000000p+0f -
                           (float)((float)(0x1.0000000000000p+0f - v265) *
                                   (float)(0x1.0000000000000p+0f - v265));
                    break;
                  case 4:
                    v266 = (float)(v265 * -0x1.0000000000000p+1f) +
                           0x1.0000000000000p+1f;
                    v112 = v265 < 0x1.0000000000000p-1f;
                    v265 = v265 * (float)(v265 + v265);
                    v267 = (float)(PSEUDO_UNFUSED((float)(v266 * v266) *
                                                  -0x1.0000000000000p-1f)) +
                           0x1.0000000000000p+0f;
                    if (!v112) {
                      v265 = v267;
                    }
                    break;
                  default:
                    break;
                  }
                }
                v254 = (float)(PSEUDO_UNFUSED(v254 * v265)) +
                       (float)(v263 * (float)(0x1.0000000000000p+0f - v265));
              }
            }
          LABEL_406:
            *((float*)v390 + v251) = v254;
          LABEL_407:
            ++v251;
            v252 |= v255 != v256;
            if (v251 == 4) {
              if ((v252 & 1) != 0) {
                v268 = (float*)v232[6];
                *(float*)&v273 =
                    (float)(PSEUDO_UNFUSED(
                        (float)(0x1.0000000000000p+0f - v233) * *v268)) +
                    (float)(*(float*)v390 * v233);
                v269 = (float)(PSEUDO_UNFUSED(
                           (float)(0x1.0000000000000p+0f - v233) * v268[1])) +
                       (float)(*((float*)v390 + 1) * v233);
                v270 = v268[2];
                v271 = v268[3];
                v272 = *v227;
                *((float*)&v273 + 1) = v269;
                v274 = (v272 & 1) == 0;
                v275 = v272 >> 1;
                v276 = (float)(0x1.0000000000000p+0f - v233) * v270;
                if (v274) {
                  v277 = v275;
                }
                else {
                  v277 = *((_QWORD*)v227 + 1);
                }
                if (v274) {
                  v278 = v227 + 1;
                }
                else {
                  v278 = *((unsigned __int8**)v227 + 2);
                }
                *((float*)&v273 + 2) = v276 + (float)(*(float*)&v390[1] * v233);
                *((float*)&v273 + 3) =
                    (float)(PSEUDO_UNFUSED(
                        (float)(0x1.0000000000000p+0f - v233) * v271)) +
                    (float)(*((float*)&v390[1] + 1) * v233);
                (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                             long double))(*(_QWORD*)v226 + 40LL))(v226, v278,
                                                                   v277, v273);
              }
            LABEL_382:
              v227 += 64;
              goto LABEL_383;
            }
          }
        }
        v287 = *v227;
        v288 = (v287 & 1) == 0;
        v289 = v287 >> 1;
        if (v288) {
          v290 = v289;
        }
        else {
          v290 = *((_QWORD*)v227 + 1);
        }
        if (v288) {
          v291 = v227 + 1;
        }
        else {
          v291 = *((unsigned __int8**)v227 + 2);
        }
        (*(void (**)(__int64, unsigned __int8*, unsigned __int64, __int64**))(
            *(_QWORD*)v226 + 96LL))(v226, v291, v290, v390);
        v292 = *((__int64**)v227 + 5);
        v293 = *(float*)(v217 + 24);
        v295 = *v292;
        v294 = v292[1];
        v296 = v294 - *v292;
        if (v294 == *v292) {
          v297 = *(float*)v390;
          goto LABEL_537;
        }
        if (v296 != 12) {
          v302 = 0;
          v303 = 0xAAAAAAAAAAAAAAABLL * (v296 >> 2);
          v304 = *v292;
          while (1) {
            v305 = *(float*)v304;
            if (v293 <= *(float*)v304) {
              break;
            }
            ++v302;
            v304 += 12;
            if (v303 == v302) {
              v297 = *(float*)(v294 - 8);
              goto LABEL_537;
            }
          }
          if (v302 != 0) {
            v312 = *(float*)(v304 - 12);
            v297 = *(float*)(v304 + 4);
            if (vabds_f32(v305, v312) >= 0x1.0000000000000p-23f) {
              v313 = *(float*)(v304 - 8);
              v314 = *(_DWORD*)(v304 + 8);
              v315 = (float)(v293 - v312) / (float)(v305 - v312);
              if (v314 > 1) {
                switch (v314) {
                case 2:
                  v315 = v315 * v315;
                  break;
                case 3:
                  v315 = 0x1.0000000000000p+0f -
                         (float)((float)(0x1.0000000000000p+0f - v315) *
                                 (float)(0x1.0000000000000p+0f - v315));
                  break;
                case 4:
                  v316 = (float)(v315 * -0x1.0000000000000p+1f) +
                         0x1.0000000000000p+1f;
                  v112 = v315 < 0x1.0000000000000p-1f;
                  v315 = v315 * (float)(v315 + v315);
                  v317 = (float)(PSEUDO_UNFUSED((float)(v316 * v316) *
                                                -0x1.0000000000000p-1f)) +
                         0x1.0000000000000p+0f;
                  if (!v112) {
                    v315 = v317;
                  }
                  break;
                default:
                  break;
                }
                goto LABEL_536;
              }
              if (v314 != 1) {
              LABEL_536:
                v297 = (float)(PSEUDO_UNFUSED(v297 * v315)) +
                       (float)(v313 * (float)(0x1.0000000000000p+0f - v315));
                goto LABEL_537;
              }
              if (v315 < 0x1.0000000000000p+0f) {
                v297 = v313;
              }
            }
          LABEL_537:
            v338 = v292[3];
            v337 = v292[4];
            v339 = v337 - v338;
            if (v337 == v338) {
              v340 = *((float*)v390 + 1);
              goto LABEL_561;
            }
            if (v339 != 12) {
              v341 = 0;
              v342 = 0xAAAAAAAAAAAAAAABLL * (v339 >> 2);
              v343 = v292[3];
              while (1) {
                v344 = *(float*)v343;
                if (v293 <= *(float*)v343) {
                  break;
                }
                ++v341;
                v343 += 12;
                if (v342 == v341) {
                  v340 = *(float*)(v337 - 8);
                  goto LABEL_561;
                }
              }
              if (v341 != 0) {
                v345 = *(float*)(v343 - 12);
                v340 = *(float*)(v343 + 4);
                if (vabds_f32(v344, v345) >= 0x1.0000000000000p-23f) {
                  v346 = *(float*)(v343 - 8);
                  v347 = *(_DWORD*)(v343 + 8);
                  v348 = (float)(v293 - v345) / (float)(v344 - v345);
                  if (v347 > 1) {
                    switch (v347) {
                    case 2:
                      v348 = v348 * v348;
                      break;
                    case 3:
                      v348 = 0x1.0000000000000p+0f -
                             (float)((float)(0x1.0000000000000p+0f - v348) *
                                     (float)(0x1.0000000000000p+0f - v348));
                      break;
                    case 4:
                      v112 = v348 < 0x1.0000000000000p-1f;
                      v349 = v348 * (float)(v348 + v348);
                      v348 =
                          (float)(PSEUDO_UNFUSED(
                              (float)((float)((float)(v348 *
                                                      -0x1.0000000000000p+1f) +
                                              0x1.0000000000000p+1f) *
                                      (float)((float)(v348 *
                                                      -0x1.0000000000000p+1f) +
                                              0x1.0000000000000p+1f)) *
                              -0x1.0000000000000p-1f)) +
                          0x1.0000000000000p+0f;
                      if (v112) {
                        v348 = v349;
                      }
                      break;
                    default:
                      break;
                    }
                    goto LABEL_560;
                  }
                  if (v347 != 1) {
                  LABEL_560:
                    v340 =
                        (float)(PSEUDO_UNFUSED(v340 * v348)) +
                        (float)(v346 * (float)(0x1.0000000000000p+0f - v348));
                    goto LABEL_561;
                  }
                  if (v348 < 0x1.0000000000000p+0f) {
                    v340 = v346;
                  }
                }
              LABEL_561:
                v52 = v294 == v295;
                v352 = v292 + 6;
                v350 = v292[6];
                v351 = v352[1];
                v354 = !v52 || v337 != v338;
                v355 = v351 - v350;
                if (v351 == v350) {
                  v356 = *(float*)&v390[1];
                  goto LABEL_592;
                }
                if (v355 == 12) {
                  v356 = *(float*)(v350 + 4);
                LABEL_593:
                  v366 = (float*)v232[6];
                  v367 = (float)(PSEUDO_UNFUSED(
                             (float)(0x1.0000000000000p+0f - v233) * *v366)) +
                         (float)(v297 * v233);
                  v368 = (float)(PSEUDO_UNFUSED(
                             (float)(0x1.0000000000000p+0f - v233) * v366[1])) +
                         (float)(v340 * v233);
                  v369 = v366[2];
                  v370 = *v227;
                  v371 = (v370 & 1) == 0;
                  v372 = v370 >> 1;
                  v373 = (float)(0x1.0000000000000p+0f - v233) * v369;
                  if (v371) {
                    v374 = v372;
                  }
                  else {
                    v374 = *((_QWORD*)v227 + 1);
                  }
                  if (v371) {
                    v375 = v227 + 1;
                  }
                  else {
                    v375 = *((unsigned __int8**)v227 + 2);
                  }
                  *(float*)&v376 = v373 + (float)(v356 * v233);
                  *(_QWORD*)&v377 = __PAIR64__(LODWORD(v368), LODWORD(v367));
                  *((_QWORD*)&v377 + 1) = v376;
                  (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                               long double))(*(_QWORD*)v226 + 32LL))(
                      v226, v375, v374, v377);
                  v227 += 64;
                  continue;
                }
                v357 = 0;
                v358 = 0xAAAAAAAAAAAAAAABLL * (v355 >> 2);
                v359 = v350;
                while (1) {
                  v360 = *(float*)v359;
                  if (v293 <= *(float*)v359) {
                    break;
                  }
                  ++v357;
                  v359 += 12;
                  if (v358 == v357) {
                    v356 = *(float*)(v351 - 8);
                    goto LABEL_592;
                  }
                }
                if (v357 == 0) {
                  v356 = *(float*)(v350 + 4);
                  goto LABEL_592;
                }
                v361 = *(float*)(v359 - 12);
                v356 = *(float*)(v359 + 4);
                if (vabds_f32(v360, v361) < 0x1.0000000000000p-23f) {
                  goto LABEL_592;
                }
                v362 = *(float*)(v359 - 8);
                v363 = *(_DWORD*)(v359 + 8);
                v364 = (float)(v293 - v361) / (float)(v360 - v361);
                if (v363 <= 1) {
                  if (v363 == 1) {
                    if (v364 < 0x1.0000000000000p+0f) {
                      v356 = v362;
                    }
                  LABEL_592:
                    if (((v351 == v350) & ~v354) != 0) {
                      goto LABEL_382;
                    }
                    goto LABEL_593;
                  }
                }
                else {
                  switch (v363) {
                  case 2:
                    v364 = v364 * v364;
                    break;
                  case 3:
                    v364 = 0x1.0000000000000p+0f -
                           (float)((float)(0x1.0000000000000p+0f - v364) *
                                   (float)(0x1.0000000000000p+0f - v364));
                    break;
                  case 4:
                    v112 = v364 < 0x1.0000000000000p-1f;
                    v365 = v364 * (float)(v364 + v364);
                    v364 = (float)(PSEUDO_UNFUSED(
                               (float)((float)((float)(v364 *
                                                       -0x1.0000000000000p+1f) +
                                               0x1.0000000000000p+1f) *
                                       (float)((float)(v364 *
                                                       -0x1.0000000000000p+1f) +
                                               0x1.0000000000000p+1f)) *
                               -0x1.0000000000000p-1f)) +
                           0x1.0000000000000p+0f;
                    if (v112) {
                      v364 = v365;
                    }
                    break;
                  default:
                    break;
                  }
                }
                v356 = (float)(PSEUDO_UNFUSED(v356 * v364)) +
                       (float)(v362 * (float)(0x1.0000000000000p+0f - v364));
                goto LABEL_592;
              }
            }
            v340 = *(float*)(v338 + 4);
            goto LABEL_561;
          }
        }
        break;
      }
      v297 = *(float*)(v295 + 4);
      goto LABEL_537;
    }
  }
}

bool MaterialAnimModule_be6200(float* a1, __int64 a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  int v13;
  float v14;
  bool v15;
  float v16;
  float v17;
  float v18;
  float v19;

  v4 = **(_QWORD**)(a2 + 40);
  v3 = *(_QWORD*)(*(_QWORD*)(a2 + 40) + 8LL);
  v5 = v3 - v4;
  if (v3 != v4) {
    if (v5 == 12) {
      goto LABEL_3;
    }
    v7 = 0;
    v8 = 0xAAAAAAAAAAAAAAABLL * (v5 >> 2);
    v9 = **(_QWORD**)(a2 + 40);
    while (1) {
      v10 = *(float*)v9;
      if (a3 <= *(float*)v9) {
        break;
      }
      ++v7;
      v9 += 12;
      if (v8 == v7) {
        v6 = *(float*)(v3 - 8);
        goto LABEL_26;
      }
    }
    if (v7 == 0) {
    LABEL_3:
      v6 = *(float*)(v4 + 4);
    }
    else {
      v11 = *(float*)(v9 - 12);
      v6 = *(float*)(v9 + 4);
      if (vabds_f32(v10, v11) >= 0.00000011921f) {
        v12 = *(float*)(v9 - 8);
        v13 = *(_DWORD*)(v9 + 8);
        v14 = (float)(a3 - v11) / (float)(v10 - v11);
        if (v13 <= 1) {
          if (v13 == 1) {
            if (v14 < 1.0f) {
              v6 = v12;
            }
            goto LABEL_26;
          }
        }
        else {
          switch (v13) {
          case 2:
            v14 = v14 * v14;
            break;
          case 3:
            v19 = 1.0f;
            v14 = 1.0f - (float)((float)(1.0f - v14) * (float)(1.0f - v14));
            goto LABEL_24;
          case 4:
            v15 = v14 < 0.5f;
            v16 = (float)(v14 * -2.0f) + 2.0f;
            v14 = v14 * (float)(v14 + v14);
            v17 = (float)((float)(v16 * v16) * -0.5f) + 1.0f;
            if (!v15) {
              v14 = v17;
            }
            v18 = 1.0f - v14;
            goto LABEL_25;
          default:
            break;
          }
        }
        v19 = 1.0f;
      LABEL_24:
        v18 = v19 - v14;
      LABEL_25:
        v6 = (float)(v6 * v14) + (float)(v12 * v18);
      }
    }
  LABEL_26:
    *a1 = v6;
  }
  return v3 != v4;
}

__int64 MaterialAnimModule_be6340(__int64 result)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  __int64 v3;
  unsigned __int8* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int8* v12;

  v1 = *(unsigned __int8**)(result + 24);
  v2 = *(unsigned __int8**)(result + 32);
  v3 = result;
  v4 = v1;
  if (v1 != v2) {
    if ((*(_BYTE*)(result + 48) & 1) != 0) {
      v5 = *(_QWORD*)(result + 56);
    }
    else {
      v5 = *(_BYTE*)(result + 48) >> 1;
    }
    if ((*(_BYTE*)(result + 48) & 1) != 0) {
      v9 = *(_QWORD*)(result + 64);
      v4 = *(unsigned __int8**)(result + 24);
      while (1) {
        v10 = *v4;
        v11 = *((_QWORD*)v4 + 1);
        if ((v10 & 1) == 0) {
          v11 = v10 >> 1;
        }
        if (v11 == v5) {
          v12 = (v10 & 1) != 0 ? *((unsigned __int8**)v4 + 2) : v4 + 1;
          result = memcmp(v12, v9, v5);
          if ((_DWORD)result == 0) {
            break;
          }
        }
        v4 += 64;
        if (v4 == v2) {
          return result;
        }
      }
    }
    else {
      v4 = *(unsigned __int8**)(result + 24);
      while (1) {
        v6 = *v4;
        v7 = *((_QWORD*)v4 + 1);
        if ((v6 & 1) == 0) {
          v7 = v6 >> 1;
        }
        if (v7 == v5) {
          v8 = (v6 & 1) != 0 ? *((unsigned __int8**)v4 + 2) : v4 + 1;
          result = memcmp(v8, v3 + 49, v5);
          if ((_DWORD)result == 0) {
            break;
          }
        }
        v4 += 64;
        if (v4 == v2) {
          return result;
        }
      }
    }
  }
  if (v4 != v2) {
    if ((*(_BYTE*)(v3 + 48) & 1) != 0) {
      **(_BYTE**)(v3 + 64) = 0;
      *(_QWORD*)(v3 + 56) = 0;
      v1 = *(unsigned __int8**)(v3 + 24);
    }
    else {
      *(_WORD*)(v3 + 48) = 0;
    }
    *(_DWORD*)(v3 + 72) = (unsigned __int64)(v4 - v1) >> 6;
    *((_DWORD*)v4 + 6) = 0;
  }
  return result;
}

_QWORD* MaterialAnimModule_be7090(_QWORD* result, __int64 a2,
                                  unsigned __int64 a3, float a4)
{
  __int64 v4;

  *((_BYTE*)result + 76) = 1;
  if (a4 > 0.0) {
    return GameRoutine_be6480(result, a2, a3, a4);
  }
  if (a3 != 0) {
    v4 = (__int64)result;
    GameRoutine_60a060(result + 6, a2, a3);
    return (_QWORD*)MaterialAnimModule_be6340(v4);
  }
  else {
    if ((result[6] & 1) != 0) {
      *(_BYTE*)result[8] = 0;
      result[7] = 0;
    }
    else {
      *((_WORD*)result + 24) = 0;
    }
    *((_DWORD*)result + 18) = -1;
    if ((result[10] & 1) != 0) {
      *(_BYTE*)result[12] = 0;
      result[11] = 0;
    }
    else {
      *((_WORD*)result + 40) = 0;
    }
    *(_QWORD*)((char*)result + 108) = 0;
    *((_DWORD*)result + 26) = -1;
  }
  return result;
}

void MaterialAnimModule_be9e20(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = a1 + 24;
  v1 = a1[24];
  a1[23] = 0;
  if (v1 != 0) {
    v3 = a1[25];
    v5 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_12;
    }
    v6 = (__int64*)(v3 - 24);
    do {
      if (*v6 != 0) {
        MaterialAnimModule_bea200_alt1((__int64)v6, *v6);
        if (*v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v8, *v6);
        }
      }
      v7 = v6 - 6;
      v6 -= 9;
    } while (v7 != (__int64*)v1);
    v9 = a1[24];
    a1[25] = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v10, v1);
    }
  }
  v2[1] = 0;
  v2[2] = 0;
  *v2 = 0;
}

_QWORD* MaterialAnimModule_be9f20(_QWORD* result, __int64* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  char* v8;
  char* v9;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = result;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(result, a2[2], a2[1]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    result[1] = a2[1];
    result[2] = v5;
    *result = v4;
  }
  v6 = a2[3];
  v7 = *((_DWORD*)a2 + 8);
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  *((_DWORD*)v3 + 8) = v7;
  v3[3] = v6;
  v8 = (char*)a2[5];
  v9 = (char*)a2[6];
  v10 = v9 - v8;
  if (v9 != v8) {
    if (0xAAAAAAAAAAAAAAABLL * (v10 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_beaa00(result);
    }
    v11 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    result = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v9 - v8, 16, 0);
    v12 = result;
    v3[5] = result;
    v3[6] = result;
    v3[7] = (char*)result + v10;
    do {
      v12[1] = 0;
      v12[2] = 0;
      *v12 = 0;
      v14 = *(_QWORD*)v8;
      v13 = *((_QWORD*)v8 + 1);
      v15 = v13 - *(_QWORD*)v8;
      if (v13 != *(_QWORD*)v8) {
        if (0xAAAAAAAAAAAAAAABLL * (v15 >> 2) >= 0x1555555555555556LL) {
          GameRoutine_beaa20();
        }
        v16 = fw_memory_HeapManager_Allocate(*v11, v15, 16, 0);
        v17 = v16 + v15;
        *v12 = v16;
        v12[1] = v16;
        v12[2] = v16 + v15;
        result = (_QWORD*)memcpy(v16, v14, v15);
        v12[1] = v17;
      }
      v8 += 24;
      v12 += 3;
    } while (v8 != v9);
    v3[6] = v12;
  }
  return result;
}

_QWORD* MaterialAnimModule_bea0c0(_QWORD* result, __int64* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = result;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(result, a2[2], a2[1]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    result[1] = a2[1];
    result[2] = v5;
    *result = v4;
  }
  v3[4] = 0;
  v3[5] = 0;
  v3[3] = 0;
  v6 = a2[3];
  v7 = a2[4];
  v8 = v7 - v6;
  if (v7 != v6) {
    if (v8 < 0) {
      GameRoutine_bea0a0(result);
    }
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v7 - v6, 16, 0);
    v10 = 0;
    v3[3] = v9;
    v3[4] = v9;
    v3[5] = v9 + v8;
    do {
      v13 = (__int64*)(v6 + v10);
      result = (_QWORD*)(v9 + v10);
      if ((*(_BYTE*)(v6 + v10) & 1) != 0) {
        result = (_QWORD*)fw_text_String_CopyTerminated(result, v13[2], v13[1]);
      }
      else {
        v14 = *v13;
        v15 = v13[1];
        v16 = v13[2];
        result[1] = v15;
        result[2] = v16;
        *result = v14;
      }
      v11 = v6 + v10;
      v12 = v9 + v10;
      v10 += 32;
      *(_DWORD*)(v12 + 24) = *(_DWORD*)(v11 + 24);
    } while (v6 + v10 != v7);
    v3[4] = v9 + v10;
  }
  return result;
}

void MaterialAnimModule_bea200(__int64 a1, __int64 a2)
{
  __int64 v2;
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

  v2 = *(_QWORD*)(a1 + 8);
  if (a2 != v2) {
    v5 = fw_memory_g_heap_manager_ptr;
    do {
      v7 = *(_QWORD*)(v2 - 24);
      if (v7 != 0) {
        v9 = *(_QWORD*)(v2 - 16);
        if (v7 == v9) {
          goto LABEL_4;
        }
        do {
          v11 = *(_QWORD*)(v9 - 24);
          if (v11 != 0) {
            v13 = *(_QWORD*)(v9 - 16);
            if (v11 == v13) {
              goto LABEL_13;
            }
            do {
              v14 = *(_QWORD*)(v13 - 24);
              if (v14 != 0) {
                *(_QWORD*)(v13 - 16) = v14;
                if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
                  v15 = 128;
                }
                else {
                  v15 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v15, v14);
              }
              v13 -= 40;
            } while (v13 != v11);
            v10 = *(_QWORD*)(v9 - 24);
            *(_QWORD*)(v9 - 16) = v11;
            v11 = v10;
            if (v10 != 0) {
            LABEL_13:
              if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
                v12 = 128;
              }
              else {
                v12 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v12, v11);
            }
          }
          v9 -= 64;
        } while (v7 != v9);
        v6 = *(_QWORD*)(v2 - 24);
        *(_QWORD*)(v2 - 16) = v7;
        v7 = v6;
        if (v6 != 0) {
        LABEL_4:
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v8, v7);
        }
      }
      v2 -= 64;
    } while (a2 != v2);
  }
  *(_QWORD*)(a1 + 8) = a2;
}

void MaterialAnimModule_bea360(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;

  v1 = *(_QWORD*)(a1 + 40);
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 48);
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_12;
    }
    v5 = (__int64*)(v3 - 24);
    do {
      v13 = v5;
      MaterialAnimModule_beb520(&v13);
      if ((*(_BYTE*)(v5 - 3) & 1) != 0) {
        v7 = *(v5 - 1);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v8, v7);
        }
      }
      v6 = v5 - 3;
      v5 -= 6;
    } while (v6 != (__int64*)v1);
    v9 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a1 + 48) = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v10, v1);
    }
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v11 = *(_QWORD*)(a1 + 16);
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v11);
    }
  }
}

void MaterialAnimModule_bea560(__int64* a1, unsigned __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;

  v3 = (__int64*)a1[1];
  v2 = a1[2];
  if (0xAAAAAAAAAAAAAAABLL * ((v2 - (__int64)v3) >> 4) >= a2) {
    if (a2 != 0) {
      v13 = 48 * ((48 * a2 - 48) / 0x30) + 48;
      memset(a1[1], 0, v13);
      v3 = (__int64*)((char*)v3 + v13);
    }
    a1[1] = (__int64)v3;
  }
  else {
    v5 = *a1;
    v6 = (__int64)v3 - *a1;
    v7 = a2 - 0x5555555555555555LL * (v6 >> 4);
    if (v7 > 0x555555555555555LL) {
      GameRoutine_bea7e0();
    }
    v8 = fw_memory_g_heap_manager_ptr;
    v9 = 0xAAAAAAAAAAAAAAABLL * ((v2 - v5) >> 4);
    if (2 * v9 > v7) {
      v7 = 2 * v9;
    }
    if (v9 >= 0x2AAAAAAAAAAAAAALL) {
      v10 = 0x555555555555555LL;
    }
    else {
      v10 = v7;
    }
    if (v10 != 0) {
      if (v10 > 0x555555555555555LL) {
        GameRoutine_60a210_alt1();
      }
      v11 = a2;
      v12 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v10, 16, 0);
      a2 = v11;
    }
    else {
      v12 = 0;
    }
    v14 = v12 + v6;
    v15 = v12 + 48 * v10;
    v16 = 48 * ((48 * a2 - 48) / 0x30) + 48;
    memset(v14, 0, v16);
    v17 = v14 + v16;
    if ((__int64*)v5 != v3) {
      v18 = (__int64*)v5;
      v19 = (_QWORD*)v12;
      do {
        v20 = *v18;
        v21 = v18[2];
        v19[1] = v18[1];
        v19[2] = v21;
        *v19 = v20;
        v18[1] = 0;
        v18[2] = 0;
        *v18 = 0;
        v19[4] = 0;
        v19[5] = 0;
        v19[3] = v18[3];
        v19[4] = v18[4];
        v19[5] = v18[5];
        v18[4] = 0;
        v18[5] = 0;
        v18[3] = 0;
        v18 += 6;
        v19 += 6;
      } while (v18 != v3);
      do {
        v25 = (__int64*)(v5 + 24);
        MaterialAnimModule_beb520_alt2(&v25);
        if ((*(_BYTE*)v5 & 1) != 0) {
          v22 = *(_QWORD*)(v5 + 16);
          if (v22 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
              v23 = 128;
            }
            else {
              v23 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v8 + v23, v22);
          }
        }
        v5 += 48;
      } while ((__int64*)v5 != v3);
      v5 = *a1;
    }
    *a1 = v12;
    a1[1] = v17;
    a1[2] = v15;
    if (v5 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v8 + v24, v5);
    }
  }
}

void MaterialAnimModule_beaa40(__int64 a1, __int64 a2, __int64 a3,
                               unsigned __int64 a4)
{
  __int64 v4;
  __int64* v5;
  __int64 v8;
  __int64** v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
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
  __int64* v23;
  signed __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64* v28;
  unsigned __int8* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64* v40;
  unsigned __int8* v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  bool v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64* v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;

  v4 = *(_QWORD*)(a1 + 16);
  v5 = *(__int64**)a1;
  v8 = a2;
  v9 = (__int64**)a1;
  if (a4 > (v4 - *(_QWORD*)a1) >> 6) {
    if (v5 != nullptr) {
      v10 = *(__int64**)(a1 + 8);
      if (v5 == v10) {
        goto LABEL_62;
      }
      v11 = fw_memory_g_heap_manager_ptr;
      do {
        v12 = v10;
        v13 = *(v10 - 3);
        if (v13 != 0) {
          v14 = *(v12 - 2);
          if (v13 == v14) {
            goto LABEL_16;
          }
          v15 = *(v12 - 2);
          do {
            v17 = *(_QWORD*)(v15 - 24);
            v15 -= 24;
            v16 = v17;
            if (v17 != 0) {
              *(_QWORD*)(v14 - 16) = v16;
              if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
                v18 = 128;
              }
              else {
                v18 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v18, v16);
            }
            v14 = v15;
          } while (v15 != v13);
          v19 = *(v12 - 3);
          *(v12 - 2) = v13;
          v13 = v19;
          if (v19 != 0) {
          LABEL_16:
            if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
              v20 = 128;
            }
            else {
              v20 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v20, v13);
          }
        }
        v10 = v12 - 8;
        if ((*(_BYTE*)(v12 - 8) & 1) != 0) {
          v21 = *(v12 - 6);
          if (v21 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
              v22 = 128;
            }
            else {
              v22 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v22, v21);
          }
        }
      } while (v5 != v10);
      v9 = (__int64**)a1;
      v50 = *(__int64**)a1;
      *(_QWORD*)(a1 + 8) = v5;
      v5 = v50;
      if (v50 != nullptr) {
      LABEL_62:
        v51 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v51 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, (__int64)v5);
      }
      v4 = 0;
      v9[1] = nullptr;
      v9[2] = nullptr;
      *v9 = nullptr;
    }
    if (a4 >> 58 == 0) {
      v52 = v4 >> 5;
      if (v4 >> 5 <= a4) {
        v52 = a4;
      }
      v53 = (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFC0LL;
      v54 = 0x3FFFFFFFFFFFFFFLL;
      if (!v53) {
        v54 = v52;
      }
      if (v54 >> 58 == 0) {
        v55 = v54 << 6;
        v5 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v54 << 6, 16, 0);
        *v9 = v5;
        v9[1] = v5;
        for (v9[2] = (__int64*)((char*)v5 + v55); v8 != a3; v5 += 8) {
          MaterialAnimModule_be9f20_alt1(v5, v8);
          v8 += 64;
        }
      LABEL_74:
        v9[1] = v5;
        return;
      }
    }
    GameRoutine_bea800_alt2();
  }
  v23 = *(__int64**)(a1 + 8);
  v24 = (char*)v23 - (char*)v5;
  if (a4 <= ((char*)v23 - (char*)v5) >> 6) {
    if (a2 != a3) {
      v38 = 0;
      do {
        v40 = &v5[v38 / 8];
        v41 = (unsigned __int8*)(v8 + v38);
        if ((__int64*)v8 == v5) {
          v39 = *((_QWORD*)v41 + 3);
          *((_DWORD*)v40 + 8) = *((_DWORD*)v41 + 8);
          v40[3] = v39;
        }
        else {
          v42 = *v41;
          if ((*(_BYTE*)v40 & 1) != 0) {
            if ((v42 & 1) != 0) {
              v46 = *(_QWORD*)(v8 + v38 + 16);
            }
            else {
              v46 = v8 + v38 + 1;
            }
            if ((v42 & 1) != 0) {
              v47 = *(_QWORD*)(v8 + v38 + 8);
            }
            else {
              v47 = v42 >> 1;
            }
            SpineModel_64dde0_alt1(v40, v46, v47);
          }
          else if ((v42 & 1) != 0) {
            GameRoutine_64df20_alt1(v40, *(_QWORD*)(v8 + v38 + 16),
                                    *(_QWORD*)(v8 + v38 + 8));
          }
          else {
            v43 = *(_QWORD*)v41;
            v44 = *((_QWORD*)v41 + 1);
            v45 = *((_QWORD*)v41 + 2);
            v40[1] = v44;
            v40[2] = v45;
            *v40 = v43;
          }
          v48 = &v5[v38 / 8];
          v49 = *(_QWORD*)(v8 + v38 + 24);
          *((_DWORD*)v48 + 8) = *(_DWORD*)(v8 + v38 + 32);
          v48[3] = v49;
          MaterialAnimModule_beaf80_alt2(
              (__int64)&v5[v38 / 8 + 5], *(__int64**)(v8 + v38 + 40),
              *(__int64**)(v8 + v38 + 48),
              0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD*)(v8 + v38 + 48) -
                                                *(_QWORD*)(v8 + v38 + 40)) >>
                                      3));
        }
        v38 += 64LL;
      } while (v8 + v38 != a3);
      v23 = v9[1];
      v5 = (__int64*)((char*)v5 + v38);
    }
    if (v5 != v23) {
      v58 = fw_memory_g_heap_manager_ptr;
      do {
        v59 = *(v23 - 3);
        v60 = v23;
        if (v59 != 0) {
          v61 = *(v23 - 2);
          if (v59 == v61) {
            goto LABEL_95;
          }
          v62 = *(v23 - 2);
          do {
            v64 = *(_QWORD*)(v62 - 24);
            v62 -= 24;
            v63 = v64;
            if (v64 != 0) {
              *(_QWORD*)(v61 - 16) = v63;
              if (*(_QWORD*)(*(_QWORD*)v58 + 200LL) != 0) {
                v65 = 128;
              }
              else {
                v65 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v58 + v65, v63);
            }
            v61 = v62;
          } while (v62 != v59);
          v66 = *(v60 - 3);
          *(v60 - 2) = v59;
          v59 = v66;
          if (v66 != 0) {
          LABEL_95:
            if (*(_QWORD*)(*(_QWORD*)v58 + 200LL) != 0) {
              v67 = 128;
            }
            else {
              v67 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v58 + v67, v59);
          }
        }
        v23 = v60 - 8;
        if ((*(_BYTE*)(v60 - 8) & 1) != 0) {
          v68 = *(v60 - 6);
          if (v68 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v58 + 200LL) != 0) {
              v69 = 128;
            }
            else {
              v69 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v58 + v69, v68);
          }
        }
      } while (v5 != v23);
    }
    goto LABEL_74;
  }
  v25 = a2 + v24;
  if (v23 != v5) {
    v26 = 0;
    do {
      v28 = &v5[v26 / 8];
      v29 = (unsigned __int8*)(v8 + v26);
      if ((__int64*)v8 == v5) {
        v27 = *((_QWORD*)v29 + 3);
        *((_DWORD*)v28 + 8) = *((_DWORD*)v29 + 8);
        v28[3] = v27;
      }
      else {
        v30 = *v29;
        if ((*(_BYTE*)v28 & 1) != 0) {
          if ((v30 & 1) != 0) {
            v34 = *(_QWORD*)(v8 + v26 + 16);
          }
          else {
            v34 = v8 + v26 + 1;
          }
          if ((v30 & 1) != 0) {
            v35 = *(_QWORD*)(v8 + v26 + 8);
          }
          else {
            v35 = v30 >> 1;
          }
          SpineModel_64dde0_alt1(v28, v34, v35);
        }
        else if ((v30 & 1) != 0) {
          GameRoutine_64df20_alt1(v28, *(_QWORD*)(v8 + v26 + 16),
                                  *(_QWORD*)(v8 + v26 + 8));
        }
        else {
          v31 = *(_QWORD*)v29;
          v32 = *((_QWORD*)v29 + 1);
          v33 = *((_QWORD*)v29 + 2);
          v28[1] = v32;
          v28[2] = v33;
          *v28 = v31;
        }
        v36 = &v5[v26 / 8];
        v37 = *(_QWORD*)(v8 + v26 + 24);
        *((_DWORD*)v36 + 8) = *(_DWORD*)(v8 + v26 + 32);
        v36[3] = v37;
        MaterialAnimModule_beaf80_alt2(
            (__int64)&v5[v26 / 8 + 5], *(__int64**)(v8 + v26 + 40),
            *(__int64**)(v8 + v26 + 48),
            0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD*)(v8 + v26 + 48) -
                                              *(_QWORD*)(v8 + v26 + 40)) >>
                                    3));
      }
      v26 += 64LL;
    } while (v24 != v26);
    v23 = v9[1];
  }
  v56 = v23;
  if (v25 != a3) {
    v56 = v23;
    v57 = v23;
    do {
      MaterialAnimModule_be9f20_alt1(v57, v25);
      v25 += 64;
      v57 += 8;
      v56 += 8;
    } while (v25 != a3);
  }
  v9[1] = v56;
}

void MaterialAnimModule_beaf80(__int64 a1, __int64* a2, __int64* a3,
                               unsigned __int64 a4)
{
  __int64 v4;
  __int64* v5;
  __int64* v8;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  signed __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;

  v4 = *(_QWORD*)(a1 + 16);
  v5 = *(__int64**)a1;
  v8 = a2;
  if (a4 > 0xAAAAAAAAAAAAAAABLL * ((v4 - *(_QWORD*)a1) >> 3)) {
    if (v5 != nullptr) {
      v10 = *(__int64**)(a1 + 8);
      if (v5 == v10) {
        goto LABEL_23;
      }
      v11 = *(__int64**)(a1 + 8);
      v12 = fw_memory_g_heap_manager_ptr;
      do {
        v14 = *(v11 - 3);
        v11 -= 3;
        v13 = v14;
        if (v14 != 0) {
          *(v10 - 2) = v13;
          if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
            v15 = 128;
          }
          else {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v12 + v15, v13);
        }
        v10 = v11;
      } while (v11 != v5);
      v19 = *(__int64**)a1;
      *(_QWORD*)(a1 + 8) = v5;
      v5 = v19;
      if (v19 != nullptr) {
      LABEL_23:
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, (__int64)v5);
      }
      v4 = 0;
      *(_QWORD*)(a1 + 8) = 0;
      *(_QWORD*)(a1 + 16) = 0;
      *(_QWORD*)a1 = 0;
    }
    if (a4 <= 0xAAAAAAAAAAAAAAALL) {
      v21 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 3);
      v22 = 2 * v21;
      if (2 * v21 <= a4) {
        v22 = a4;
      }
      v23 = v21 >= 0x555555555555555LL ? 0xAAAAAAAAAAAAAAALL : v22;
      if (v23 <= 0xAAAAAAAAAAAAAAALL) {
        v24 = 3 * v23;
        v25 = (__int64*)fw_memory_g_heap_manager_ptr;
        v5 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v23, 16, 0);
        *(_QWORD*)a1 = v5;
        *(_QWORD*)(a1 + 8) = v5;
        *(_QWORD*)(a1 + 16) = &v5[v24];
        if (v8 != a3) {
          while (1) {
            v27 = *v8;
            v26 = v8[1];
            v5[1] = 0;
            v5[2] = 0;
            v28 = v26 - v27;
            *v5 = 0;
            if (v26 != v27) {
              if (0xAAAAAAAAAAAAAAABLL * (v28 >> 2) > 0x1555555555555555LL) {
                goto LABEL_47;
              }
              v29 = fw_memory_HeapManager_Allocate_alt1(*v25, v28, 16, 0);
              v30 = v29 + v28;
              *v5 = v29;
              v5[1] = v29;
              v5[2] = v29 + v28;
              memcpy_alt1(v29, v27, v28);
              v5[1] = v30;
            }
            v8 += 3;
            v5 += 3;
            if (v8 == a3) {
              goto LABEL_58;
            }
          }
        }
        goto LABEL_58;
      }
    }
    GameRoutine_beaa00_alt1();
  }
  v16 = *(__int64**)(a1 + 8);
  v17 = (char*)v16 - (char*)v5;
  if (a4 <= 0xAAAAAAAAAAAAAAABLL * (v16 - v5)) {
    if (a2 != a3) {
      do {
        if (v8 != v5) {
          MaterialAnimModule_beb370_alt3(
              v5, *v8, v8[1], 0xAAAAAAAAAAAAAAABLL * ((v8[1] - *v8) >> 2));
        }
        v8 += 3;
        v5 += 3;
      } while (v8 != a3);
      v16 = *(__int64**)(a1 + 8);
    }
    if (v5 != v16) {
      v39 = v16;
      v40 = fw_memory_g_heap_manager_ptr;
      do {
        v42 = *(v39 - 3);
        v39 -= 3;
        v41 = v42;
        if (v42 != 0) {
          *(v16 - 2) = v41;
          if (*(_QWORD*)(*(_QWORD*)v40 + 200LL) != 0) {
            v43 = 128;
          }
          else {
            v43 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v40 + v43, v41);
        }
        v16 = v39;
      } while (v39 != v5);
    }
  LABEL_58:
    *(_QWORD*)(a1 + 8) = v5;
    return;
  }
  v18 = (__int64*)((char*)a2 + v17);
  if (v16 != v5) {
    do {
      if (v8 != v5) {
        MaterialAnimModule_beb370_alt3(
            v5, *v8, v8[1], 0xAAAAAAAAAAAAAAABLL * ((v8[1] - *v8) >> 2));
      }
      v8 += 3;
      v5 += 3;
      v17 -= 24LL;
    } while (v17 != 0);
    v16 = *(__int64**)(a1 + 8);
  }
  v31 = v16;
  if (v18 != a3) {
    v32 = v16 + 1;
    v31 = v16;
    v33 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      *v32 = 0;
      v32[1] = 0;
      *(v32 - 1) = 0;
      v37 = *v18;
      v36 = v18[1];
      v38 = v36 - *v18;
      if (v36 != *v18) {
        if (0xAAAAAAAAAAAAAAABLL * (v38 >> 2) > 0x1555555555555555LL) {
        LABEL_47:
          GameRoutine_beaa20_alt2();
        }
        v34 = fw_memory_HeapManager_Allocate_alt1(*v33, v38, 16, 0);
        v35 = v34 + v38;
        *(v32 - 1) = v34;
        *v32 = v34;
        v32[1] = v34 + v38;
        memcpy_alt1(v34, v37, v38);
        *v32 = v35;
      }
      v18 += 3;
      v31 += 3;
      v32 += 3;
    } while (v18 != a3);
  }
  *(_QWORD*)(a1 + 8) = v31;
}

__int64** MaterialAnimModule_beb370(__int64** result, __int64 a2, __int64 a3,
                                    unsigned __int64 a4)
{
  __int64 v4;
  __int64* v5;
  __int64* v7;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  char* v23;

  v4 = (__int64)result[2];
  v5 = *result;
  v7 = (__int64*)result;
  if (a4 > 0xAAAAAAAAAAAAAAABLL * ((v4 - (__int64)*result) >> 2)) {
    v9 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v5 != nullptr) {
      v10 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      result[1] = v5;
      v11 = (__int64)v5;
      v12 = a4;
      v13 = 128;
      if (*(_QWORD*)(v10 + 200) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(v10 + v13, v11);
      a4 = v12;
      v4 = 0;
      v7[1] = 0;
      v7[2] = 0;
      *v7 = 0;
    }
    if (a4 <= 0x1555555555555555LL) {
      v14 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 2);
      v15 = 2 * v14;
      if (2 * v14 <= a4) {
        v15 = a4;
      }
      v16 = v14 >= 0xAAAAAAAAAAAAAAALL ? 0x1555555555555555LL : v15;
      if (v16 <= 0x1555555555555555LL) {
        v17 = 3 * v16;
        result = (__int64**)fw_memory_HeapManager_Allocate_alt1(*v9, 12 * v16,
                                                                16, 0);
        v18 = a3 - a2;
        v5 = (__int64*)result;
        *v7 = (__int64)result;
        v7[1] = (__int64)result;
        v7[2] = (__int64)result + 4 * v17;
        if (v18 != 0) {
          result = (__int64**)memcpy_alt1((__int64)result, a2, v18);
        }
      LABEL_23:
        v23 = (char*)v5 + v18;
        goto LABEL_24;
      }
    }
    GameRoutine_beaa20_alt2();
  }
  v19 = (__int64)result[1];
  v20 = v19 - (_QWORD)v5;
  if (a4 <= 0xAAAAAAAAAAAAAAABLL * ((v19 - (__int64)v5) >> 2)) {
    v18 = a3 - a2;
    if (v18 != 0) {
      result = (__int64**)memmove_alt1((__int64)*result, a2, v18);
    }
    goto LABEL_23;
  }
  v21 = a2 + v20;
  if ((__int64*)v19 != v5) {
    result = (__int64**)memmove_alt1((__int64)*result, a2, v20);
    v19 = v7[1];
  }
  v22 = a3 - v21;
  if (v22 != 0) {
    result = (__int64**)memmove_alt1(v19, v21, v22);
  }
  v23 = (char*)(v19 + v22);
LABEL_24:
  v7[1] = (__int64)v23;
  return result;
}

void MaterialAnimModule_beb520(__int64** a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
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
  __int64 v18;

  v1 = *a1;
  v2 = **a1;
  if (v2 != 0) {
    v3 = v1[1];
    v5 = fw_memory_g_heap_manager_ptr;
    while (v2 != v3) {
      v6 = v3;
      v7 = *(_QWORD*)(v3 - 24);
      if (v7 != 0) {
        v8 = *(_QWORD*)(v6 - 16);
        if (v7 == v8) {
          goto LABEL_15;
        }
        v9 = *(_QWORD*)(v6 - 16);
        do {
          v11 = *(_QWORD*)(v9 - 24);
          v9 -= 24;
          v10 = v11;
          if (v11 != 0) {
            *(_QWORD*)(v8 - 16) = v10;
            if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
              v12 = 128;
            }
            else {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v12, v10);
          }
          v8 = v9;
        } while (v9 != v7);
        v13 = *(_QWORD*)(v6 - 24);
        *(_QWORD*)(v6 - 16) = v7;
        v7 = v13;
        if (v13 != 0) {
        LABEL_15:
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v14, v7);
        }
      }
      v3 = v6 - 64;
      if ((*(_BYTE*)(v6 - 64) & 1) != 0) {
        v15 = *(_QWORD*)(v6 - 48);
        if (v15 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v16, v15);
        }
      }
    }
    v1[1] = v2;
    v17 = **a1;
    if (v17 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v18, v17);
    }
  }
}

_QWORD* MaterialAnimModule_beb6c0(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  char* v17;
  char* v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v28;
  _QWORD* v29;
  __int64* v30;

  if (a1 != a2) {
    v4 = a1;
    v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      if ((*(_BYTE*)v4 & 1) != 0) {
        fw_text_String_CopyTerminated(a3, v4[2], v4[1]);
      }
      else {
        v6 = *v4;
        v7 = v4[2];
        a3[1] = v4[1];
        a3[2] = v7;
        *a3 = v6;
      }
      a3[4] = 0;
      a3[5] = 0;
      a3[3] = 0;
      v9 = (__int64*)v4[3];
      v8 = (__int64*)v4[4];
      v10 = (char*)v8 - (char*)v9;
      v30 = v8;
      if (v8 != v9) {
        v28 = v4;
        v29 = a3;
        if (v10 < 0) {
          GameRoutine_bea800();
        }
        v11 = fw_memory_HeapManager_Allocate(*v5, (char*)v8 - (char*)v9, 16, 0);
        v12 = v11;
        a3[3] = v11;
        a3[4] = v11;
        a3[5] = v11 + v10;
        do {
          if ((*(_BYTE*)v9 & 1) != 0) {
            v11 = fw_text_String_CopyTerminated(v12, v9[2], v9[1]);
          }
          else {
            v13 = *v9;
            v14 = v9[2];
            *(_QWORD*)(v12 + 8) = v9[1];
            *(_QWORD*)(v12 + 16) = v14;
            *(_QWORD*)v12 = v13;
          }
          v15 = v9[3];
          v16 = *((_DWORD*)v9 + 8);
          *(_QWORD*)(v12 + 40) = 0;
          *(_QWORD*)(v12 + 48) = 0;
          *(_QWORD*)(v12 + 56) = 0;
          *(_DWORD*)(v12 + 32) = v16;
          *(_QWORD*)(v12 + 24) = v15;
          v17 = (char*)v9[5];
          v18 = (char*)v9[6];
          v19 = v18 - v17;
          if (v18 != v17) {
            if (0xAAAAAAAAAAAAAAABLL * (v19 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
              GameRoutine_beaa00(v11);
            }
            v11 = fw_memory_HeapManager_Allocate(*v5, v18 - v17, 16, 0);
            v20 = (_QWORD*)v11;
            *(_QWORD*)(v12 + 40) = v11;
            *(_QWORD*)(v12 + 48) = v11;
            *(_QWORD*)(v12 + 56) = v11 + v19;
            do {
              v20[1] = 0;
              v20[2] = 0;
              *v20 = 0;
              v22 = *(_QWORD*)v17;
              v21 = *((_QWORD*)v17 + 1);
              v23 = v21 - *(_QWORD*)v17;
              if (v21 != *(_QWORD*)v17) {
                if (0xAAAAAAAAAAAAAAABLL * (v23 >> 2) >= 0x1555555555555556LL) {
                  GameRoutine_beaa20();
                }
                v24 = fw_memory_HeapManager_Allocate(*v5, v23, 16, 0);
                v25 = v24 + v23;
                *v20 = v24;
                v20[1] = v24;
                v20[2] = v24 + v23;
                v11 = memcpy(v24, v22, v23);
                v20[1] = v25;
              }
              v17 += 24;
              v20 += 3;
            } while (v17 != v18);
            *(_QWORD*)(v12 + 48) = v20;
          }
          v9 += 8;
          v12 += 64;
        } while (v9 != v30);
        v4 = v28;
        a3 = v29;
        v29[4] = v12;
      }
      v4 += 6;
      a3 += 6;
    } while (v4 != a2);
  }
  return a3;
}

void MaterialAnimModule_beb940(__int64* a1)
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
  __int64 v11;
  __int64 v12;

  v1 = (_QWORD*)a1[2];
  v3 = fw_memory_g_heap_manager_ptr;
  while (v1 != nullptr) {
    v5 = (__int64)v1;
    v1 = (_QWORD*)*v1;
    v6 = *(_QWORD*)(v5 + 48);
    if (v6 != 0) {
      v7 = *(_QWORD*)v3;
      *(_QWORD*)(v5 + 56) = v6;
      if (*(_QWORD*)(v7 + 200) != 0) {
        v8 = 128;
      }
      else {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(v7 + v8, v6);
    }
    if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
      v9 = *(_QWORD*)(v5 + 32);
      if (v9 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v10, v9);
      }
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v4 = 128;
    }
    else {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v4, v5);
  }
  v11 = *a1;
  *a1 = 0;
  if (v11 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v12, v11);
  }
}

_QWORD* MaterialAnimModule_bebc00(float* a1, unsigned __int8* a2, __int64** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  _BOOL8 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 primeEm;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  unsigned __int64 v43;

  v4 = *a2;
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
  v11 = std___1___hash_memory(v9, v10);
  v12 = *((_QWORD*)a1 + 1);
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
    v15 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = (_QWORD*)*v15;
      if (*v15 != 0) {
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
                v24 = (v22 & 1) != 0 ? (_QWORD*)v16[4]
                                     : (_QWORD*)((char*)v16 + 17);
                if ((unsigned int)memcmp(v24, v9, v10) == 0) {
                  return v16;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = (_QWORD*)*v16;
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
              v20 =
                  (v18 & 1) != 0 ? (_QWORD*)v16[4] : (_QWORD*)((char*)v16 + 17);
              if ((unsigned int)memcmp(v20, v9, v10) == 0) {
                return v16;
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
          v16 = (_QWORD*)*v16;
        } while (v16 != nullptr);
      }
    }
  }
LABEL_41:
  v25 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v26 = *a3;
  *v25 = 0;
  v25[1] = v13;
  v16 = v25;
  if ((*(_BYTE*)v26 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v25 + 2, v26[2], v26[1]);
  }
  else {
    v27 = *v26;
    v28 = v26[1];
    v29 = v26[2];
    v25[3] = v28;
    v25[4] = v29;
    v25[2] = v27;
  }
  v30 = a1[8];
  v16[7] = 0;
  v16[8] = 0;
  v16[5] = 0;
  v16[6] = 0;
  *((_DWORD*)v16 + 18) = 1065353216;
  v31 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
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
    v37 = *((_QWORD*)a1 + 1);
    if (primeEm > v37) {
      goto LABEL_56;
    }
    if (primeEm < v37) {
      v38 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v37 < 3 || (v37 & (v37 - 1)) != 0) {
        v38 = std___1___next_prime(v38);
      }
      else {
        v39 = 1LL << -(char)__clz(v38 - 1);
        if (v38 >= 2) {
          v38 = v39;
        }
      }
      if (primeEm <= v38) {
        primeEm = v38;
      }
      if (primeEm < v37) {
      LABEL_56:
        GameRoutine_bebfa0((__int64*)a1, primeEm);
      }
    }
    v12 = *((_QWORD*)a1 + 1);
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
  v40 = *(_QWORD*)a1;
  v41 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v41 != nullptr) {
    *v16 = *v41;
    *v41 = v16;
  }
  else {
    v42 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v16;
    *v16 = v42;
    *(_QWORD*)(v40 + 8 * v3) = a1 + 4;
    if (*v16 != 0) {
      v43 = *(_QWORD*)(*v16 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v43 >= v12) {
          v43 %= v12;
        }
      }
      else {
        v43 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v43) = v16;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return v16;
}

_QWORD* MaterialAnimModule_bec240(float* a1, unsigned __int8* a2, __int64** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  _BOOL8 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 primeEm;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  unsigned __int64 v44;

  v4 = *a2;
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
  v11 = std___1___hash_memory(v9, v10);
  v12 = *((_QWORD*)a1 + 1);
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
    v15 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = (_QWORD*)*v15;
      if (*v15 != 0) {
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
                v24 = (v22 & 1) != 0 ? (_QWORD*)v16[4]
                                     : (_QWORD*)((char*)v16 + 17);
                if ((unsigned int)memcmp(v24, v9, v10) == 0) {
                  return v16;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = (_QWORD*)*v16;
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
              v20 =
                  (v18 & 1) != 0 ? (_QWORD*)v16[4] : (_QWORD*)((char*)v16 + 17);
              if ((unsigned int)memcmp(v20, v9, v10) == 0) {
                return v16;
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
          v16 = (_QWORD*)*v16;
        } while (v16 != nullptr);
      }
    }
  }
LABEL_41:
  v25 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
  v26 = *a3;
  *v25 = 0;
  v25[1] = v13;
  v16 = v25;
  if ((*(_BYTE*)v26 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v25 + 2, v26[2], v26[1]);
  }
  else {
    v27 = *v26;
    v28 = v26[1];
    v29 = v26[2];
    v25[3] = v28;
    v25[4] = v29;
    v25[2] = v27;
  }
  v30 = *((_QWORD*)a1 + 3);
  v31 = a1[8];
  *((_DWORD*)v16 + 10) = 0;
  v16[6] = 0;
  v16[7] = 0;
  v16[8] = 0;
  v32 = (float)(unsigned __int64)(v30 + 1);
  if (v12 == 0 || (float)(v31 * (float)v12) < v32) {
    v33 = v32 / v31;
    v34 = true;
    if (v12 >= 3) {
      v34 = (v12 & (v12 - 1)) != 0;
    }
    v35 = v34 | (2 * v12);
    v36 = vcvtps_u64_f32(v33);
    if (v35 <= v36) {
      primeEm = v36;
    }
    else {
      primeEm = v35;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v38 = *((_QWORD*)a1 + 1);
    if (primeEm > v38) {
      goto LABEL_56;
    }
    if (primeEm < v38) {
      v39 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v38 < 3 || (v38 & (v38 - 1)) != 0) {
        v39 = std___1___next_prime(v39);
      }
      else {
        v40 = 1LL << -(char)__clz(v39 - 1);
        if (v39 >= 2) {
          v39 = v40;
        }
      }
      if (primeEm <= v39) {
        primeEm = v39;
      }
      if (primeEm < v38) {
      LABEL_56:
        GameRoutine_bec5e0((__int64*)a1, primeEm);
      }
    }
    v12 = *((_QWORD*)a1 + 1);
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
  v41 = *(_QWORD*)a1;
  v42 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v42 != nullptr) {
    *v16 = *v42;
    *v42 = v16;
  }
  else {
    v43 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v16;
    *v16 = v43;
    *(_QWORD*)(v41 + 8 * v3) = a1 + 4;
    if (*v16 != 0) {
      v44 = *(_QWORD*)(*v16 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v44 >= v12) {
          v44 %= v12;
        }
      }
      else {
        v44 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = v16;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return v16;
}

__int64 wld_MaterialAnimModule_LoadAnimAsync_lambda0_Invoke(__int64 a1,
                                                            __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  char v25;
  unsigned __int64 v26;
  char* v27;
  char* v28;
  bool v30;
  __int64 v31;
  __int64 result;
  __int64* v33;
  __int64 v34;
  __int64* v35;
  int** v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  char v41;
  const char* v42;
  __int64 v43;
  __int64 v44;
  const char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  const char* v61;
  __int64 v62;
  const char* v63;
  const char* v64;
  __int64 v65;
  char v66;
  __int64* v67;
  signed __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64* v74;
  __int64* v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int8* v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
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
  __int64 v104;
  __int64 v105;
  int v106;
  const char* v107;
  __int64 v108;
  unsigned __int8* v109;
  int v110;
  __int64* v111;
  __int64* v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  unsigned __int64 v122;
  __int64 v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  __int64 v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  int v135;
  __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  unsigned __int64 v142;
  __int64* v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  unsigned __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  const char* v162;
  __int64 v163;
  signed __int64 v164;
  int v165;
  const char* v166;
  __int64 v167;
  const char* v168;
  int v169;
  int v170;
  __int64 v171;
  const char* v172;
  __int64 v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  int v176;
  int v177;
  int v178;
  const char* v179;
  __int64 v180;
  const char* v181;
  const char* v182;
  __int64 v183;
  unsigned __int64 v184;
  const char* v185;
  __int64 v186;
  unsigned __int64 v187;
  const char* v188;
  __int64 v189;
  unsigned __int64 v190;
  __int64* v191;
  _DWORD* v192;
  unsigned __int64 v193;
  __int64 v194;
  signed __int64 v195;
  unsigned __int64 v196;
  unsigned __int64 v197;
  unsigned __int64 v198;
  __int64 v199;
  _DWORD* v200;
  __int64 v201;
  const char* v202;
  __int64 v203;
  int v204;
  int v205;
  __int64* v206;
  __int64 v207;
  __int64 v208;
  char* v209;
  unsigned __int64 v210;
  unsigned __int64 v211;
  unsigned __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64* v215;
  __int64* v216;
  __int64 v217;
  _QWORD* v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64* v224;
  char* v225;
  unsigned __int64 v226;
  __int64* v227;
  __int64* v228;
  __int64 v229;
  __int64 v230;
  _QWORD* v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64* v237;
  __int64* v238;
  __int64* v239;
  __int64* v240;
  char* v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  int v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  __int64* v264;
  __int64* v265;
  __int64 v266;
  __int64* v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64* v279;
  __int64* v280;
  char v281;
  unsigned __int64 v282;
  __int64 v283;
  unsigned __int64 v284;
  __int64 v285;
  __int64 v286;
  unsigned __int64 v287;
  __int64 v288;
  __int64 v289;
  __int64 v290;
  __int64 v291;
  char* v292;
  unsigned __int64 v293;
  const char* v294;
  __int64 v295;
  const char* v296;
  __int64 v297;
  unsigned __int64 v298;
  const char* v299;
  __int64 v300;
  char* v301;
  unsigned __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  __int64 v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  __int64 v318;
  __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  char v326;
  __int64 v327;
  __int64 v328;
  char v329;
  __int64 v330;
  int v331;
  unsigned __int8* v332;
  unsigned __int8* v333;
  __int64 v334;
  int v335;
  bool v336;
  char v337;
  unsigned __int8* v338;
  __int64 v339;
  __int64 v340;
  __int64* v341;
  unsigned __int8* v342;
  unsigned __int64 v343;
  unsigned __int64 v344;
  struct {
    __int64 v345;
    unsigned __int64 v346;
    char* v347;
  } v345_;
  struct {
    __int64 v348;
    unsigned __int64 v349;
    __int64 v350;
    __int64 v351;
    int v352;
    char gap212_[4];
    __int64 v353;
    __int64 v354;
    __int64 v355;
  } v348_;
  struct {
    __int64 v356;
    unsigned __int64 v357;
    __int64 v358;
    _QWORD v359[2];
  } v356_;
  struct {
    __int64* v360;
    __int64 v361;
    __int64 v362;
  } v360_;
  struct {
    __int64 v363;
    unsigned __int64 v364;
    char* v365;
    __int64 v366;
    __int64 v367;
    char* v368;
  } v363_;
  struct {
    __int64 v369;
    unsigned __int64 v370;
    char* v371;
    __int64* v372;
    __int64* v373;
    unsigned __int64 v374;
  } v369_;
  struct {
    __int16 v375;
    char gap402_[6];
    unsigned __int64 v376;
    char* v377;
    __int64 v378;
    char v379;
  } v375_;
  struct {
    __int64* v380;
    __int64 v381;
    __int64 v382;
  } v380_;
  struct {
    __int64 v383;
    const char* v384;
    __int64 v385;
    __int64 v386;
  } v383_;
  _QWORD v387[8];

  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v2 = *(_QWORD**)(a1 + 16);
  v3 = *a2;
  v4 = a1;
  v6 = (__int64*)v2[28];
  v5 = v2[29];
  if ((unsigned __int64)v6 >= v5) {
    v8 = v2[27];
    v9 = (char*)v6 - v8;
    v10 = ((__int64)v6 - v8) >> 3;
    v11 = v10 + 1;
    if ((unsigned __int64)(v10 + 1) >> 61 != 0) {
      GameRoutine_637ae0_alt1(),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    v12 = v5 - v8;
    v13 = fw_memory_g_heap_manager_ptr;
    if (v12 >> 2 > v11) {
      v11 = v12 >> 2;
    }
    if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
      v14 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v14 = v11;
    }
    if (v14 != 0) {
      if (v14 >> 61 != 0) {
        goto LABEL_573;
      }
      v15 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    else {
      v15 = 0;
    }
    v16 = v15 + 8 * v14;
    v17 = (unsigned __int64)v6 - v8;
    v18 = (__int64)&v9[v15 + -8 * v10];
    *(_QWORD*)&v9[v15] = v3;
    v7 = (__int64)&v9[v15 + 8];
    memcpy_alt1(v18, v8, v17),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v2[27] = v18;
    v2[28] = v7;
    v2[29] = v16;
    if (v8 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v19, v8),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  }
  else {
    *v6 = v3;
    v7 = (__int64)(v6 + 1);
  }
  v2[28] = v7;
  v20 = strlen_alt1((const char*)(v3 + 16)),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v22 = v20;
  if (v20 >= 0x17) {
    if ((v20 | 7) == 0x17) {
      v24 = 26;
    }
    else {
      v24 = (v20 | 7) + 1;
    }
    v23 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v24, 16, 0),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v345_.v346 = v22;
    v345_.v347 = v23;
    v345_.v345 = v24 | 1;
    goto LABEL_25;
  }
  LOBYTE(v345_.v345) = 2 * v20;
  v23 = (char*)&v345_.v345 + 1;
  if (v20 != 0) {
  LABEL_25:
    memcpy_alt1((__int64)v23, v3 + 16, v22),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v23[v22] = 0;
  v25 = v345_.v345;
  v26 = v345_.v346;
  if ((v345_.v345 & 1) == 0) {
    v26 = (unsigned __int64)(unsigned __int8)v345_.v345 >> 1;
  }
  if (v26 < 6) {
    goto LABEL_40;
  }
  v27 = v345_.v347;
  if ((v345_.v345 & 1) == 0) {
    v27 = (char*)&v345_.v345 + 1;
  }
  v28 = &v27[v26];
  if (*(_DWORD*)(v28 - 5) == 1869834798 && *(v28 - 1) == 110) {
    v326 = v345_.v345;
    v334 = (__int64)v2;
    v328 = v4;
    v33 = (__int64*)fw_memory_g_heap_manager_ptr;
    v34 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    *(_QWORD*)(v34 + 16) = 0;
    v35 = (__int64*)(v34 + 16);
    v36 = (int**)v34;
    *(_QWORD*)v34 = 0;
    *(_DWORD*)(v34 + 8) = 0;
    *(_QWORD*)(v34 + 32) = 0;
    *(_QWORD*)(v34 + 40) = 0;
    *(_QWORD*)(v34 + 24) = 0;
    *(_DWORD*)(v34 + 16) = -1;
    *(_WORD*)(v34 + 40) = 0;
    v37 = *(_QWORD*)(v3 + 592);
    v38 = *(_QWORD*)(v3 + 576);
    v327 = v3;
    v39 = v33;
    v40 = fw_memory_HeapManager_Allocate_alt1(*v33, 80, 16, 0),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    *(_WORD*)(v40 + 56) = 257;
    *(_QWORD*)(v40 + 32) = -1;
    *(_QWORD*)(v40 + 40) = 0;
    *(_QWORD*)(v40 + 16) = 0;
    *(_QWORD*)(v40 + 24) = 0;
    *(_QWORD*)(v40 + 48) = 0;
    *(_DWORD*)(v40 + 60) = 0;
    *(_QWORD*)(v40 + 64) = v37;
    *(_QWORD*)(v40 + 72) = v38;
    __builtin_memset(&v387[4], 0, 24);
    *(_QWORD*)v40 = nn_nlib_MemoryInputStream_vtable;
    *(_QWORD*)(v40 + 8) = 0;
    v387[0] = 0x2000;
    v387[1] = 256;
    v387[2] = 2048;
    v387[3] = 16;
    timeline_7910((__int64)v36, (__int64)v387),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    GameHr_7aa0(v36, (_QWORD*)v40),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v329 = 1;
    if (!timeline_Cursor_HasNext_alt1(v36)) {
    LABEL_564:
      Value_7f50_alt1((__int64*)v36),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      (*(void (**)(__int64))(*(_QWORD*)v40 + 24LL))(v40),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (*(_QWORD*)(*v39 + 200) != 0) {
        v324 = 128;
      }
      else {
        v324 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v39 + v324, v40),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      Value_77d0_alt1((__int64*)v36),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (*(_QWORD*)(*v39 + 200) != 0) {
        v325 = 128;
      }
      else {
        v325 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v39 + v325, (__int64)v36),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v3 = v327;
      v4 = v328;
      v2 = (_QWORD*)v334;
      v25 = v326;
      goto LABEL_41;
    }
    v41 = 0;
    v330 = v40;
    while (1) {
      if ((unsigned int)timeline_Cursor_Next_alt1((_BYTE**)v36) == 15) {
        v42 = (const char*)v35[1];
        v383_.v383 = *v35;
        v383_.v384 = v42;
        v43 = v35[3];
        v383_.v385 = v35[2];
        v383_.v386 = v43;
        if (strcmp_alt1(v42, "Animations") == 0) {
          break;
        }
      }
    LABEL_54:
      if (!timeline_Cursor_HasNext_alt1(v36)) {
        v329 = v41 ^ 1;
        goto LABEL_564;
      }
    }
    if ((unsigned int)timeline_Cursor_Next_alt1((_BYTE**)v36) != 11) {
      v329 = 0;
      goto LABEL_564;
    }
    while (1) {
      if ((unsigned int)timeline_Cursor_Next_alt1((_BYTE**)v36) == 12 ||
          (v41 & 1) != 0) {
        goto LABEL_54;
      }
      v375_.v375 = 0;
      v375_.v378 = 0;
      v375_.v379 = 1;
      v44 = *v35;
      v45 = (const char*)v35[1];
      v380_.v380 = nullptr;
      v380_.v381 = 0;
      v380_.v382 = 0;
      v383_.v383 = v44;
      v383_.v384 = v45;
      v46 = *(_QWORD*)(v334 + 128) - *(_QWORD*)(v334 + 120);
      v47 = v35[3];
      v383_.v385 = v35[2];
      v383_.v386 = v47;
      if (v46 != 0) {
        GameRoutine_bea560_alt1((__int64*)&v380_.v380,
                                0xAAAAAAAAAAAAAAABLL * (v46 >> 4)),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v48 = (__int64)v380_.v380;
        if ((__int64*)v380_.v381 != v380_.v380) {
          v49 = 0;
          v50 = 0;
          do {
            v54 = *(_QWORD*)(v334 + 120);
            if (v54 != v48) {
              v55 = (__int64*)(v54 + v49);
              v56 = (__int64*)(v48 + v49);
              v57 = *(unsigned __int8*)(v54 + v49);
              if ((*(_BYTE*)(v48 + v49) & 1) != 0) {
                v51 = v54 + v49;
                if ((v57 & 1) != 0) {
                  v52 = *(_QWORD*)(v51 + 16);
                }
                else {
                  v52 = v51 + 1;
                }
                if ((v57 & 1) != 0) {
                  v53 = *(_QWORD*)(v51 + 8);
                }
                else {
                  v53 = v57 >> 1;
                }
                SpineModel_64dde0_alt1(v56, v52, v53),
                    v21 = COERCE_AS(
                        __typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              }
              else if ((v57 & 1) != 0) {
                GameRoutine_64df20_alt1(v56, *(_QWORD*)(v54 + v49 + 16),
                                        *(_QWORD*)(v54 + v49 + 8)),
                    v21 = COERCE_AS(
                        __typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              }
              else {
                v58 = *v55;
                v59 = v55[1];
                v60 = v55[2];
                v56[1] = v59;
                v56[2] = v60;
                *v56 = v58;
              }
            }
            v48 = (__int64)v380_.v380;
            ++v50;
            v49 += 48;
          } while (v50 < 0xAAAAAAAAAAAAAAABLL *
                             ((v380_.v381 - (__int64)v380_.v380) >> 4));
        }
      }
      else {
        v48 = 0;
      }
      v331 = v383_.v383;
      if ((_DWORD)v383_.v383 == 13) {
        break;
      }
      v41 = 1;
      if (v48 != 0) {
      LABEL_521:
        v303 = v380_.v381;
        if (v48 == v380_.v381) {
          goto LABEL_555;
        }
        v337 = v41;
        do {
          v304 = *(_QWORD*)(v303 - 24);
          v305 = v303;
          if (v304 != 0) {
            v306 = *(_QWORD*)(v303 - 16);
            if (v304 == v306) {
              goto LABEL_546;
            }
            do {
              v307 = *(_QWORD*)(v306 - 24);
              v308 = v306;
              if (v307 != 0) {
                v309 = *(_QWORD*)(v306 - 16);
                if (v307 == v309) {
                  goto LABEL_537;
                }
                v310 = *(_QWORD*)(v306 - 16);
                do {
                  v312 = *(_QWORD*)(v310 - 24);
                  v310 -= 24;
                  v311 = v312;
                  if (v312 != 0) {
                    *(_QWORD*)(v309 - 16) = v311;
                    v313 = 56;
                    if (*(_QWORD*)(*v39 + 200) != 0) {
                      v313 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*v39 + v313, v311),
                        v21 = COERCE_AS(
                            __typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                  }
                  v309 = v310;
                } while (v310 != v307);
                v314 = *(_QWORD*)(v308 - 24);
                *(_QWORD*)(v308 - 16) = v307;
                v307 = v314;
                if (v314 != 0) {
                LABEL_537:
                  v315 = 56;
                  if (*(_QWORD*)(*v39 + 200) != 0) {
                    v315 = 128;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v39 + v315, v307),
                      v21 = COERCE_AS(
                          __typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                }
              }
              v306 = v308 - 64;
              if ((*(_BYTE*)(v308 - 64) & 1) != 0) {
                v316 = *(_QWORD*)(v308 - 48);
                if (v316 != 0) {
                  v317 = 56;
                  if (*(_QWORD*)(*v39 + 200) != 0) {
                    v317 = 128;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v39 + v317, v316),
                      v21 = COERCE_AS(
                          __typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                }
              }
            } while (v304 != v306);
            v318 = *(_QWORD*)(v305 - 24);
            *(_QWORD*)(v305 - 16) = v304;
            v304 = v318;
            if (v318 != 0) {
            LABEL_546:
              v319 = 56;
              if (*(_QWORD*)(*v39 + 200) != 0) {
                v319 = 128;
              }
              nn_mem_StandardAllocator_Free_alt2(*v39 + v319, v304),
                  v21 = COERCE_AS(
                      __typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            }
          }
          v303 = v305 - 48;
          if ((*(_BYTE*)(v305 - 48) & 1) != 0) {
            v320 = *(_QWORD*)(v305 - 32);
            if (v320 != 0) {
              v321 = 56;
              if (*(_QWORD*)(*v39 + 200) != 0) {
                v321 = 128;
              }
              nn_mem_StandardAllocator_Free_alt2(*v39 + v321, v320),
                  v21 = COERCE_AS(
                      __typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            }
          }
        } while (v48 != v303);
        v41 = v337;
        v380_.v381 = v48;
        v48 = (__int64)v380_.v380;
        if (v380_.v380 != nullptr) {
        LABEL_555:
          v322 = 56;
          if (*(_QWORD*)(*v39 + 200) != 0) {
            v322 = 128;
          }
          nn_mem_StandardAllocator_Free_alt2(*v39 + v322, v48),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
      }
    LABEL_558:
      if ((v375_.v375 & 1) != 0 && v375_.v377 != nullptr) {
        v323 = 56;
        if (*(_QWORD*)(*v39 + 200) != 0) {
          v323 = 128;
        }
        nn_mem_StandardAllocator_Free_alt2(*v39 + v323, (__int64)v375_.v377),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      v40 = v330;
      if (v331 != 13) {
        goto LABEL_54;
      }
    }
    if ((unsigned int)timeline_Cursor_Next_alt1((_BYTE**)v36) == 14) {
      v41 = 0;
      goto LABEL_514;
    }
    while (1) {
      v61 = (const char*)v35[1];
      v383_.v383 = *v35;
      v383_.v384 = v61;
      v62 = v35[3];
      v383_.v385 = v35[2];
      v383_.v386 = v62;
      if ((_DWORD)v383_.v383 == 15) {
        v63 = v383_.v384;
        if (strcmp_alt1(v383_.v384, "Name") != 0) {
          if (strcmp_alt1(v63, "Duration") != 0) {
            if (strcmp_alt1(v63, "Loop") != 0) {
              if (strcmp_alt1(v63, "Keys") == 0) {
                if ((unsigned int)timeline_Cursor_Next_alt1((_BYTE**)v36) !=
                    13) {
                  goto LABEL_513;
                }
                v41 = 0;
                while (1) {
                  if ((unsigned int)timeline_Cursor_Next_alt1((_BYTE**)v36) ==
                          14 ||
                      (v41 & 1) != 0) {
                    goto LABEL_508;
                  }
                  LOWORD(v369_.v369) = 0;
                  v369_.v372 = nullptr;
                  v369_.v373 = nullptr;
                  v369_.v374 = 0;
                  v64 = (const char*)v35[1];
                  v383_.v383 = *v35;
                  v383_.v384 = v64;
                  v65 = v35[3];
                  v383_.v385 = v35[2];
                  v383_.v386 = v65;
                  if ((_DWORD)v383_.v383 == 15) {
                    break;
                  }
                  v41 = 1;
                  v66 = 1;
                LABEL_454:
                  if ((v369_.v369 & 1) != 0 && v369_.v371 != nullptr) {
                    v278 = 56;
                    if (*(_QWORD*)(*v39 + 200) != 0) {
                      v278 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*v39 + v278,
                                                       (__int64)v369_.v371),
                        v21 = COERCE_AS(
                            __typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                  }
                  if ((v66 & 1) != 0) {
                    goto LABEL_508;
                  }
                }
                GameRoutine_60a020_alt1((__int64)&v369_.v369, v383_.v384),
                    v21 = COERCE_AS(
                        __typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                v332 = *(unsigned __int8**)(v334 + 120);
                v338 = *(unsigned __int8**)(v334 + 128);
                if ((v369_.v369 & 1) != 0) {
                  fw_text_String_CopyTerminated_alt1(
                      &v363_.v363, (__int64)v369_.v371, v369_.v370),
                      v21 = COERCE_AS(
                          __typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                }
                else {
                  v363_.v363 = v369_.v369;
                  v363_.v364 = v369_.v370;
                  v363_.v365 = v369_.v371;
                }
                v363_.v367 = 0;
                v363_.v368 = nullptr;
                v363_.v366 = 0;
                v67 = v369_.v372;
                v68 = (char*)v369_.v373 - (char*)v369_.v372;
                v341 = v369_.v373;
                if (v369_.v373 == v369_.v372) {
                  v69 = 0;
                }
                else {
                  if (v68 < 0) {
                    goto LABEL_575;
                  }
                  v69 = fw_memory_HeapManager_Allocate_alt1(
                      *v39, (char*)v369_.v373 - (char*)v369_.v372, 16, 0),
                  v21 = COERCE_AS(
                      __typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                  v363_.v366 = v69;
                  v363_.v367 = v69;
                  v363_.v368 = (char*)(v69 + v68);
                  do {
                    if ((*(_BYTE*)v67 & 1) != 0) {
                      fw_text_String_CopyTerminated_alt1((__int64*)v69, v67[2],
                                                         v67[1]),
                          v21 = COERCE_AS(
                              __typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                    }
                    else {
                      v70 = *v67;
                      v71 = v67[2];
                      *(_QWORD*)(v69 + 8) = v67[1];
                      *(_QWORD*)(v69 + 16) = v71;
                      *(_QWORD*)v69 = v70;
                    }
                    v72 = v67[3];
                    v73 = *((_DWORD*)v67 + 8);
                    *(_QWORD*)(v69 + 40) = 0;
                    *(_QWORD*)(v69 + 48) = 0;
                    *(_QWORD*)(v69 + 56) = 0;
                    *(_DWORD*)(v69 + 32) = v73;
                    *(_QWORD*)(v69 + 24) = v72;
                    v74 = (__int64*)v67[5];
                    v75 = (__int64*)v67[6];
                    v76 = (char*)v75 - (char*)v74;
                    if (v75 != v74) {
                      if (0xAAAAAAAAAAAAAAABLL * (v76 >> 3) >
                          0xAAAAAAAAAAAAAAALL) {
                        goto LABEL_574;
                      }
                      v77 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr,
                          (char*)v75 - (char*)v74, 16, 0),
                      v21 = COERCE_AS(
                          __typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                      *(_QWORD*)(v69 + 40) = v77;
                      *(_QWORD*)(v69 + 48) = v77;
                      *(_QWORD*)(v69 + 56) = (char*)v77 + v76;
                      do {
                        v77[1] = 0;
                        v77[2] = 0;
                        *v77 = 0;
                        v81 = *v74;
                        v80 = v74[1];
                        v82 = v80 - *v74;
                        if (v80 != *v74) {
                          if (0xAAAAAAAAAAAAAAABLL * (v82 >> 2) >
                              0x1555555555555555LL) {
                          LABEL_572:
                            GameRoutine_beaa20_alt2(),
                                v21 = COERCE_AS(
                                    __typeof__(v21),
                                    PSEUDO_REGISTER(unsigned long long, "x2",
                                                    "=r"));
                          }
                          v78 = fw_memory_HeapManager_Allocate_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, v82, 16,
                              0),
                          v21 = COERCE_AS(
                              __typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                          v79 = v78 + v82;
                          *v77 = v78;
                          v77[1] = v78;
                          v77[2] = v78 + v82;
                          memcpy_alt1(v78, v81, v82),
                              v21 =
                                  COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                          v77[1] = v79;
                        }
                        v74 += 3;
                        v77 += 3;
                      } while (v74 != v75);
                      *(_QWORD*)(v69 + 48) = v77;
                    }
                    v67 += 8;
                    v69 += 64;
                    v39 = (__int64*)fw_memory_g_heap_manager_ptr;
                  } while (v67 != v341);
                  v363_.v367 = v69;
                }
                v83 = v332;
                if (v332 != v338) {
                  if ((v363_.v363 & 1) != 0) {
                    v84 = v363_.v364;
                  }
                  else {
                    v84 = (unsigned __int8)v363_.v363 >> 1;
                  }
                  if ((v363_.v363 & 1) != 0) {
                    v85 = (__int64)v363_.v365;
                    while (1) {
                      v89 = *v83;
                      v90 = *((_QWORD*)v83 + 1);
                      if ((v89 & 1) == 0) {
                        v90 = v89 >> 1;
                      }
                      if (v90 == v84) {
                        v91 = (v89 & 1) != 0 ? *((_QWORD*)v83 + 2)
                                             : (__int64)(v83 + 1);
                        if (memcmp_alt1(v91, v85, v84) == 0) {
                          break;
                        }
                      }
                      v83 += 48;
                      if (v83 == v338) {
                        goto LABEL_139;
                      }
                    }
                  }
                  else {
                    while (1) {
                      v86 = *v83;
                      v87 = *((_QWORD*)v83 + 1);
                      if ((v86 & 1) == 0) {
                        v87 = v86 >> 1;
                      }
                      if (v87 == v84) {
                        v88 = (v86 & 1) != 0 ? *((_QWORD*)v83 + 2)
                                             : (__int64)(v83 + 1);
                        if (memcmp_alt1(v88, (__int64)&v363_.v363 + 1, v84) ==
                            0) {
                          break;
                        }
                      }
                      v83 += 48;
                      if (v83 == v338) {
                      LABEL_139:
                        v83 = v338;
                        break;
                      }
                    }
                  }
                }
                v92 = v363_.v366;
                v333 = v83;
                if (v363_.v366 != 0) {
                  if (v363_.v366 == v69) {
                    v363_.v367 = v363_.v366;
                    goto LABEL_162;
                  }
                  do {
                    v93 = v69;
                    v94 = *(_QWORD*)(v69 - 24);
                    if (v94 != 0) {
                      v95 = *(_QWORD*)(v93 - 16);
                      if (v94 == v95) {
                        goto LABEL_153;
                      }
                      v96 = *(_QWORD*)(v93 - 16);
                      do {
                        v98 = *(_QWORD*)(v96 - 24);
                        v96 -= 24;
                        v97 = v98;
                        if (v98 != 0) {
                          *(_QWORD*)(v95 - 16) = v97;
                          v99 = 56;
                          if (*(_QWORD*)(*v39 + 200) != 0) {
                            v99 = 128;
                          }
                          nn_mem_StandardAllocator_Free_alt2(*v39 + v99, v97),
                              v21 =
                                  COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                        }
                        v95 = v96;
                      } while (v96 != v94);
                      v100 = *(_QWORD*)(v93 - 24);
                      *(_QWORD*)(v93 - 16) = v94;
                      v94 = v100;
                      if (v100 != 0) {
                      LABEL_153:
                        v101 = 56;
                        if (*(_QWORD*)(*v39 + 200) != 0) {
                          v101 = 128;
                        }
                        nn_mem_StandardAllocator_Free_alt2(*v39 + v101, v94),
                            v21 = COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                      }
                    }
                    v69 = v93 - 64;
                    if ((*(_BYTE*)(v93 - 64) & 1) != 0) {
                      v102 = *(_QWORD*)(v93 - 48);
                      if (v102 != 0) {
                        v103 = 56;
                        if (*(_QWORD*)(*v39 + 200) != 0) {
                          v103 = 128;
                        }
                        nn_mem_StandardAllocator_Free_alt2(*v39 + v103, v102),
                            v21 = COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                      }
                    }
                  } while (v92 != v69);
                  v83 = v333;
                  v363_.v367 = v92;
                  v92 = v363_.v366;
                  if (v363_.v366 != 0) {
                  LABEL_162:
                    v104 = 56;
                    if (*(_QWORD*)(*v39 + 200) != 0) {
                      v104 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*v39 + v104, v92),
                        v21 = COERCE_AS(
                            __typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                  }
                }
                if ((v363_.v363 & 1) != 0 && v363_.v365 != nullptr) {
                  v105 = 56;
                  if (*(_QWORD*)(*v39 + 200) != 0) {
                    v105 = 128;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v39 + v105,
                                                     (__int64)v363_.v365),
                      v21 = COERCE_AS(
                          __typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                }
                if (v83 == *(unsigned __int8**)(v334 + 128) ||
                    (unsigned int)timeline_Cursor_Next_alt1((_BYTE**)v36) !=
                        13) {
                  v66 = 1;
                  v41 = 1;
                LABEL_429:
                  v264 = v369_.v372;
                  if (v369_.v372 != nullptr) {
                    v265 = v369_.v373;
                    if (v369_.v372 == v369_.v373) {
                      goto LABEL_451;
                    }
                    do {
                      v266 = *(v265 - 3);
                      v267 = v265;
                      if (v266 != 0) {
                        v268 = *(v265 - 2);
                        if (v266 == v268) {
                          goto LABEL_442;
                        }
                        v269 = *(v265 - 2);
                        do {
                          v271 = *(_QWORD*)(v269 - 24);
                          v269 -= 24;
                          v270 = v271;
                          if (v271 != 0) {
                            *(_QWORD*)(v268 - 16) = v270;
                            v272 = 56;
                            if (*(_QWORD*)(*v39 + 200) != 0) {
                              v272 = 128;
                            }
                            nn_mem_StandardAllocator_Free_alt2(*v39 + v272,
                                                               v270),
                                v21 = COERCE_AS(
                                    __typeof__(v21),
                                    PSEUDO_REGISTER(unsigned long long, "x2",
                                                    "=r"));
                          }
                          v268 = v269;
                        } while (v269 != v266);
                        v273 = *(v267 - 3);
                        *(v267 - 2) = v266;
                        v266 = v273;
                        if (v273 != 0) {
                        LABEL_442:
                          v274 = 56;
                          if (*(_QWORD*)(*v39 + 200) != 0) {
                            v274 = 128;
                          }
                          nn_mem_StandardAllocator_Free_alt2(*v39 + v274, v266),
                              v21 =
                                  COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                        }
                      }
                      v265 = v267 - 8;
                      if ((*(_BYTE*)(v267 - 8) & 1) != 0) {
                        v275 = *(v267 - 6);
                        if (v275 != 0) {
                          v276 = 56;
                          if (*(_QWORD*)(*v39 + 200) != 0) {
                            v276 = 128;
                          }
                          nn_mem_StandardAllocator_Free_alt2(*v39 + v276, v275),
                              v21 =
                                  COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                        }
                      }
                    } while (v264 != v265);
                    v369_.v373 = v264;
                    v264 = v369_.v372;
                    if (v369_.v372 != nullptr) {
                    LABEL_451:
                      v277 = 56;
                      if (*(_QWORD*)(*v39 + 200) != 0) {
                        v277 = 128;
                      }
                      nn_mem_StandardAllocator_Free_alt2(*v39 + v277,
                                                         (__int64)v264),
                          v21 = COERCE_AS(
                              __typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                    }
                  }
                  goto LABEL_454;
                }
                v41 = 0;
                while (2) {
                  v106 = timeline_Cursor_Next_alt1((_BYTE**)v36),
                  v21 = COERCE_AS(
                      __typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                  if ((v41 & 1) != 0 || v106 == 14) {
                    goto LABEL_459;
                  }
                  LOWORD(v356_.v356) = 0;
                  LODWORD(v356_.v359[0]) = 0;
                  *(_QWORD*)((char*)v356_.v359 + 4) = 0x3F80000000000000LL;
                  v360_.v360 = nullptr;
                  v360_.v361 = 0;
                  v360_.v362 = 0;
                  v107 = (const char*)v35[1];
                  v383_.v383 = *v35;
                  v383_.v384 = v107;
                  v108 = v35[3];
                  v383_.v385 = v35[2];
                  v383_.v386 = v108;
                  if ((_DWORD)v383_.v383 != 15) {
                    v41 = 1;
                    v110 = 1;
                    goto LABEL_423;
                  }
                  GameRoutine_60a020_alt1((__int64)&v356_.v356, v383_.v384),
                      v21 = COERCE_AS(
                          __typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                  v109 = *((unsigned __int8**)v333 + 3);
                  v342 = *((unsigned __int8**)v333 + 4);
                  if ((v356_.v356 & 1) != 0) {
                    fw_text_String_CopyTerminated_alt1(&v348_.v348, v356_.v358,
                                                       v356_.v357),
                        v21 = COERCE_AS(
                            __typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                  }
                  else {
                    v348_.v348 = v356_.v356;
                    v348_.v349 = v356_.v357;
                    v348_.v350 = v356_.v358;
                  }
                  v111 = v360_.v360;
                  v112 = (__int64*)v360_.v361;
                  v348_.v353 = 0;
                  v348_.v354 = 0;
                  v348_.v355 = 0;
                  v113 = v360_.v361 - (_QWORD)v360_.v360;
                  v348_.v351 = v356_.v359[0];
                  v348_.v352 = v356_.v359[1];
                  if ((__int64*)v360_.v361 == v360_.v360) {
                    v116 = 0;
                  }
                  else {
                    if (0xAAAAAAAAAAAAAAABLL * (v113 >> 3) >
                        0xAAAAAAAAAAAAAAALL) {
                      goto LABEL_574;
                    }
                    v114 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr,
                        v360_.v361 - (_QWORD)v360_.v360, 16, 0),
                    v21 = COERCE_AS(
                        __typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                    v115 = v114 + v113;
                    v116 = v114;
                    v348_.v353 = v114;
                    v348_.v354 = v114;
                    v113 = v114;
                    v348_.v355 = v115;
                    do {
                      *(_QWORD*)(v113 + 8) = 0;
                      *(_QWORD*)(v113 + 16) = 0;
                      *(_QWORD*)v113 = 0;
                      v118 = *v111;
                      v117 = v111[1];
                      v119 = v117 - *v111;
                      if (v117 != *v111) {
                        if (0xAAAAAAAAAAAAAAABLL * (v119 >> 2) >
                            0x1555555555555555LL) {
                          goto LABEL_572;
                        }
                        v120 = fw_memory_HeapManager_Allocate_alt1(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, v119, 16,
                            0),
                        v21 = COERCE_AS(
                            __typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                        v121 = v120 + v119;
                        *(_QWORD*)v113 = v120;
                        *(_QWORD*)(v113 + 8) = v120;
                        *(_QWORD*)(v113 + 16) = v120 + v119;
                        memcpy_alt1(v120, v118, v119),
                            v21 = COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                        *(_QWORD*)(v113 + 8) = v121;
                      }
                      v111 += 3;
                      v113 += 24;
                    } while (v111 != v112);
                    v348_.v354 = v113;
                  }
                  v39 = &fw_memory_g_heap_manager;
                  if (v109 != v342) {
                    if ((v348_.v348 & 1) != 0) {
                      v122 = v348_.v349;
                    }
                    else {
                      v122 = (unsigned __int8)v348_.v348 >> 1;
                    }
                    if ((v348_.v348 & 1) != 0) {
                      v123 = v348_.v350;
                      while (1) {
                        v127 = *v109;
                        v128 = *((_QWORD*)v109 + 1);
                        if ((v127 & 1) == 0) {
                          v128 = v127 >> 1;
                        }
                        if (v128 == v122) {
                          v129 = (v127 & 1) != 0 ? *((_QWORD*)v109 + 2)
                                                 : (__int64)(v109 + 1);
                          if (memcmp_alt1(v129, v123, v122) == 0) {
                            break;
                          }
                        }
                        v109 += 32;
                        if (v109 == v342) {
                          goto LABEL_214;
                        }
                      }
                    }
                    else {
                      while (1) {
                        v124 = *v109;
                        v125 = *((_QWORD*)v109 + 1);
                        if ((v124 & 1) == 0) {
                          v125 = v124 >> 1;
                        }
                        if (v125 == v122) {
                          v126 = (v124 & 1) != 0 ? *((_QWORD*)v109 + 2)
                                                 : (__int64)(v109 + 1);
                          if (memcmp_alt1(v126, (__int64)&v348_.v348 + 1,
                                          v122) == 0) {
                            break;
                          }
                        }
                        v109 += 32;
                        if (v109 == v342) {
                        LABEL_214:
                          v109 = v342;
                          break;
                        }
                      }
                    }
                  }
                  if (v116 != 0) {
                    if (v116 == v113) {
                      v348_.v354 = v116;
                      goto LABEL_224;
                    }
                    do {
                      v131 = v113 - 24;
                      v130 = *(_QWORD*)(v113 - 24);
                      if (v130 != 0) {
                        *(_QWORD*)(v113 - 16) = v130;
                        v132 = 128;
                        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                          v132 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt2(
                            fw_memory_g_heap_manager + v132, v130),
                            v21 = COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                      }
                      v113 -= 24;
                    } while (v131 != v116);
                    v348_.v354 = v116;
                    v116 = v348_.v353;
                    if (v348_.v353 != 0) {
                    LABEL_224:
                      v133 = 128;
                      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                        v133 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(
                          fw_memory_g_heap_manager + v133, v116),
                          v21 = COERCE_AS(
                              __typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                    }
                  }
                  if ((v348_.v348 & 1) != 0 && v348_.v350 != 0) {
                    v134 = 128;
                    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                      v134 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        fw_memory_g_heap_manager + v134, v348_.v350),
                        v21 = COERCE_AS(
                            __typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                  }
                  if (v109 == *((unsigned __int8**)v333 + 4)) {
                    v110 = 1;
                    v41 = 1;
                    v139 = (__int64)v360_.v360;
                    if (v360_.v360 != nullptr) {
                      goto LABEL_412;
                    }
                    goto LABEL_423;
                  }
                  v135 = *((_DWORD*)v109 + 6);
                  LODWORD(v356_.v359[0]) = v135;
                  if (v135 > 1) {
                    if (v135 == 2) {
                      v148 = v360_.v361;
                      v137 = 0xAAAAAAAAAAAAAAABLL *
                             ((v360_.v361 - (__int64)v360_.v360) >> 3);
                      if (v137 > 2) {
                        if (v360_.v361 - (_QWORD)v360_.v360 == 72) {
                          goto LABEL_282;
                        }
                        v143 = v360_.v360 + 9;
                        if (v360_.v360 + 9 != (__int64*)v360_.v361) {
                          v158 = v360_.v361;
                          do {
                            v160 = *(_QWORD*)(v158 - 24);
                            v158 -= 24;
                            v159 = v160;
                            if (v160 != 0) {
                              *(_QWORD*)(v148 - 16) = v159;
                              v161 = 56;
                              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) !=
                                  0) {
                                v161 = 128;
                              }
                              nn_mem_StandardAllocator_Free_alt2(
                                  fw_memory_g_heap_manager + v161, v159),
                                  v21 = COERCE_AS(
                                      __typeof__(v21),
                                      PSEUDO_REGISTER(unsigned long long, "x2",
                                                      "=r"));
                            }
                            v148 = v158;
                          } while ((__int64*)v158 != v143);
                        }
                        goto LABEL_281;
                      }
                      v138 = 3;
                    }
                    else {
                      if (v135 != 3) {
                        goto LABEL_282;
                      }
                      v140 = v360_.v361;
                      v137 = 0xAAAAAAAAAAAAAAABLL *
                             ((v360_.v361 - (__int64)v360_.v360) >> 3);
                      if (v137 > 3) {
                        if (v360_.v361 - (_QWORD)v360_.v360 == 96) {
                          goto LABEL_282;
                        }
                        v143 = v360_.v360 + 12;
                        if (v360_.v360 + 12 != (__int64*)v360_.v361) {
                          v154 = v360_.v361;
                          do {
                            v156 = *(_QWORD*)(v154 - 24);
                            v154 -= 24;
                            v155 = v156;
                            if (v156 != 0) {
                              *(_QWORD*)(v140 - 16) = v155;
                              v157 = 56;
                              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) !=
                                  0) {
                                v157 = 128;
                              }
                              nn_mem_StandardAllocator_Free_alt2(
                                  fw_memory_g_heap_manager + v157, v155),
                                  v21 = COERCE_AS(
                                      __typeof__(v21),
                                      PSEUDO_REGISTER(unsigned long long, "x2",
                                                      "=r"));
                            }
                            v140 = v154;
                          } while ((__int64*)v154 != v143);
                        }
                        goto LABEL_281;
                      }
                      v138 = 4;
                    }
                  LABEL_255:
                    v149 = v138 - v137;
                  }
                  else {
                    if (v135 != 0) {
                      if (v135 == 1) {
                        v136 = v360_.v361;
                        v137 = 0xAAAAAAAAAAAAAAABLL *
                               ((v360_.v361 - (__int64)v360_.v360) >> 3);
                        if (v137 <= 1) {
                          v138 = 2;
                          goto LABEL_255;
                        }
                        if (v360_.v361 - (_QWORD)v360_.v360 != 48) {
                          v143 = v360_.v360 + 6;
                          if (v360_.v360 + 6 != (__int64*)v360_.v361) {
                            v150 = v360_.v361;
                            do {
                              v152 = *(_QWORD*)(v150 - 24);
                              v150 -= 24;
                              v151 = v152;
                              if (v152 != 0) {
                                *(_QWORD*)(v136 - 16) = v151;
                                v153 = 56;
                                if (*(_QWORD*)(fw_memory_g_heap_manager +
                                               200) != 0) {
                                  v153 = 128;
                                }
                                nn_mem_StandardAllocator_Free_alt2(
                                    fw_memory_g_heap_manager + v153, v151),
                                    v21 = COERCE_AS(
                                        __typeof__(v21),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x2", "=r"));
                              }
                              v136 = v150;
                            } while ((__int64*)v150 != v143);
                          }
                          goto LABEL_281;
                        }
                      }
                    LABEL_282:
                      if ((unsigned int)timeline_Cursor_Next_alt1(
                              (_BYTE**)v36) != 11) {
                        v110 = 1;
                        v41 = 1;
                        v139 = (__int64)v360_.v360;
                        if (v360_.v360 != nullptr) {
                          goto LABEL_412;
                        }
                        goto LABEL_423;
                      }
                      if ((unsigned int)timeline_Cursor_Next_alt1(
                              (_BYTE**)v36) == 12) {
                        v336 = false;
                        goto LABEL_347;
                      }
                      while (2) {
                        v162 = (const char*)v35[1];
                        v383_.v383 = *v35;
                        v383_.v384 = v162;
                        v163 = v35[3];
                        v383_.v385 = v35[2];
                        v383_.v386 = v163;
                        if ((_DWORD)v383_.v383 != 13) {
                          v336 = true;
                          break;
                        }
                        v164 = 0;
                      LABEL_287:
                        v339 = v164 >> 32;
                      LABEL_288:
                        while (1) {
                          v165 = timeline_Cursor_Next_alt1((_BYTE**)v36),
                          v21 = COERCE_AS(
                              __typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                          v336 = v165 != 14;
                          if (v165 == 14) {
                            break;
                          }
                          v166 = (const char*)v35[1];
                          v335 = v165;
                          v383_.v383 = *v35;
                          v383_.v384 = v166;
                          v167 = v35[3];
                          v383_.v385 = v35[2];
                          v383_.v386 = v167;
                          if ((_DWORD)v383_.v383 == 15) {
                            v168 = v383_.v384;
                            if (strcmp_alt1(v383_.v384, "ElemIdx") == 0) {
                              timeline_Cursor_Next_alt1((_BYTE**)v36),
                                  v21 = COERCE_AS(
                                      __typeof__(v21),
                                      PSEUDO_REGISTER(unsigned long long, "x2",
                                                      "=r"));
                              v202 = (const char*)v35[1];
                              v383_.v383 = *v35;
                              v383_.v384 = v202;
                              v203 = v35[3];
                              v383_.v385 = v35[2];
                              v383_.v386 = v203;
                              v164 = timeline_Value_ToInt_alt1(
                                         (__int64)&v383_.v383) &
                                     0xFFFFFFFF00000000LL,
                              v21 =
                                  COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                              goto LABEL_287;
                            }
                            if (strcmp_alt1(v168, "Key") == 0) {
                              v169 = timeline_Cursor_Next_alt1((_BYTE**)v36),
                              v21 =
                                  COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                              v170 = timeline_Cursor_Next_alt1((_BYTE**)v36),
                              v21 =
                                  COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                              if (v169 != 11) {
                                v336 = true;
                                goto LABEL_347;
                              }
                              if (v170 != 12) {
                                while (1) {
                                  v172 = (const char*)v35[1];
                                  v383_.v383 = *v35;
                                  v383_.v384 = v172;
                                  v173 = v35[3];
                                  v383_.v385 = v35[2];
                                  v383_.v386 = v173;
                                  if ((_DWORD)v383_.v383 != 13) {
                                  LABEL_338:
                                    timeline_Cursor_Next_alt1((_BYTE**)v36),
                                        v21 = COERCE_AS(
                                            __typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                                    v165 = v335;
                                    goto LABEL_339;
                                  }
                                  LODWORD(v174) = 0;
                                  LODWORD(v343) = 0;
                                  LODWORD(v175) = 0;
                                  do {
                                    v176 = v175;
                                    v177 =
                                        timeline_Cursor_Next_alt1((_BYTE**)v36),
                                    v21 = COERCE_AS(
                                        __typeof__(v21),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x2", "=r"));
                                    v178 = v177 != 14;
                                    if (v177 == 14) {
                                      break;
                                    }
                                    while (1) {
                                      while (1) {
                                        while (1) {
                                          v179 = (const char*)v35[1];
                                          v383_.v383 = *v35;
                                          v383_.v384 = v179;
                                          v180 = v35[3];
                                          v383_.v385 = v35[2];
                                          v383_.v386 = v180;
                                          if ((_DWORD)v383_.v383 == 15) {
                                            break;
                                          }
                                        LABEL_301:
                                          if ((unsigned int)
                                                  timeline_Cursor_Next_alt1(
                                                      (_BYTE**)v36) == 14) {
                                            goto LABEL_317;
                                          }
                                        }
                                        v181 = v383_.v384;
                                        if (strcmp_alt1(v383_.v384, "Time") !=
                                            0) {
                                          break;
                                        }
                                        timeline_Cursor_Next_alt1((_BYTE**)v36),
                                            v21 = COERCE_AS(
                                                __typeof__(v21),
                                                PSEUDO_REGISTER(
                                                    unsigned long long, "x2",
                                                    "=r"));
                                        v182 = (const char*)v35[1];
                                        v383_.v383 = *v35;
                                        v383_.v384 = v182;
                                        v183 = v35[3];
                                        v383_.v385 = v35[2];
                                        v383_.v386 = v183;
                                        v184 = timeline_Value_ToFloat_alt1(
                                            (__int64)&v383_.v383),
                                        v21 = COERCE_AS(
                                            __typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                                        v174 = HIDWORD(v184);
                                        if ((_DWORD)v184 != 0 &&
                                            (unsigned int)
                                                    GameRoutine_430_alt1() ==
                                                22) {
                                        LABEL_334:
                                          v178 = 1;
                                          goto LABEL_318;
                                        }
                                        if ((unsigned int)
                                                timeline_Cursor_Next_alt1(
                                                    (_BYTE**)v36) == 14) {
                                          goto LABEL_317;
                                        }
                                      }
                                      if (strcmp_alt1(v181, "Value") != 0) {
                                        break;
                                      }
                                      timeline_Cursor_Next_alt1((_BYTE**)v36),
                                          v21 =
                                              COERCE_AS(__typeof__(v21),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x2", "=r"));
                                      v185 = (const char*)v35[1];
                                      v383_.v383 = *v35;
                                      v383_.v384 = v185;
                                      v186 = v35[3];
                                      v383_.v385 = v35[2];
                                      v383_.v386 = v186;
                                      v187 = timeline_Value_ToFloat_alt1(
                                          (__int64)&v383_.v383),
                                      v21 = COERCE_AS(
                                          __typeof__(v21),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x2", "=r"));
                                      v343 = HIDWORD(v187);
                                      if ((_DWORD)v187 != 0 &&
                                          (unsigned int)
                                                  GameRoutine_430_alt1() ==
                                              22) {
                                        goto LABEL_334;
                                      }
                                      if ((unsigned int)
                                              timeline_Cursor_Next_alt1(
                                                  (_BYTE**)v36) == 14) {
                                      LABEL_317:
                                        v178 = 0;
                                        goto LABEL_318;
                                      }
                                    }
                                    if (strcmp_alt1(v181, "Curve") != 0) {
                                      goto LABEL_301;
                                    }
                                    timeline_Cursor_Next_alt1((_BYTE**)v36),
                                        v21 = COERCE_AS(
                                            __typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                                    v188 = (const char*)v35[1];
                                    v383_.v383 = *v35;
                                    v383_.v384 = v188;
                                    v189 = v35[3];
                                    v383_.v385 = v35[2];
                                    v383_.v386 = v189;
                                    v190 = timeline_Value_ToInt_alt1(
                                        (__int64)&v383_.v383),
                                    v21 = COERCE_AS(
                                        __typeof__(v21),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x2", "=r"));
                                    v175 = HIDWORD(v190);
                                  } while ((_DWORD)v190 == 0);
                                LABEL_318:
                                  v191 = &v360_.v360[3 * (int)v339];
                                  v192 = (_DWORD*)v191[1];
                                  v193 = v191[2];
                                  if ((unsigned __int64)v192 < v193) {
                                    v192[2] = v176;
                                    *v192 = v174;
                                    v192[1] = v343;
                                    v171 = (__int64)(v192 + 3);
                                    goto LABEL_296;
                                  }
                                  v194 = *v191;
                                  v195 = (signed __int64)v192 - *v191;
                                  v196 = 1 - 0x5555555555555555LL * (v195 >> 2);
                                  if (v196 > 0x1555555555555555LL) {
                                    goto LABEL_572;
                                  }
                                  v197 = 0xAAAAAAAAAAAAAAABLL *
                                         ((__int64)(v193 - v194) >> 2);
                                  if (2 * v197 > v196) {
                                    v196 = 2 * v197;
                                  }
                                  if (v197 >= 0xAAAAAAAAAAAAAAALL) {
                                    v198 = 0x1555555555555555LL;
                                  }
                                  else {
                                    v198 = v196;
                                  }
                                  if (v198 == 0) {
                                    v199 = 0;
                                    goto LABEL_329;
                                  }
                                  if (v198 > 0x1555555555555555LL) {
                                    goto LABEL_573;
                                  }
                                  v199 = fw_memory_HeapManager_Allocate_alt1(
                                      fw_memory_g_heap_manager, 12 * v198, 16,
                                      0),
                                  v21 = COERCE_AS(
                                      __typeof__(v21),
                                      PSEUDO_REGISTER(unsigned long long, "x2",
                                                      "=r"));
                                LABEL_329:
                                  v200 = (_DWORD*)(v199 + v195);
                                  v200[2] = v176;
                                  *v200 = v174;
                                  v200[1] = v343;
                                  v171 = v199 + v195 + 12;
                                  memcpy_alt1(v199, v194, v195),
                                      v21 = COERCE_AS(
                                          __typeof__(v21),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x2", "=r"));
                                  *v191 = v199;
                                  v191[1] = v171;
                                  v191[2] = v199 + 12 * v198;
                                  v39 = &fw_memory_g_heap_manager;
                                  if (v194 != 0) {
                                    v201 = 128;
                                    if (*(_QWORD*)(fw_memory_g_heap_manager +
                                                   200) == 0) {
                                      v201 = 56;
                                    }
                                    nn_mem_StandardAllocator_Free_alt2(
                                        fw_memory_g_heap_manager + v201, v194),
                                        v21 = COERCE_AS(
                                            __typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                                  }
                                LABEL_296:
                                  v191[1] = v171;
                                  if ((((unsigned int)timeline_Cursor_Next_alt1(
                                            (_BYTE**)v36) != 12) &
                                       ~v178) == 0) {
                                    if ((v178 & 1) == 0) {
                                      goto LABEL_288;
                                    }
                                    goto LABEL_338;
                                  }
                                }
                              }
                            }
                          }
                        }
                      LABEL_339:
                        v204 = v165;
                        v205 = timeline_Cursor_Next_alt1((_BYTE**)v36),
                        v21 = COERCE_AS(
                            __typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                        if (v204 == 14 && v205 != 12) {
                          continue;
                        }
                        break;
                      }
                    LABEL_347:
                      v206 = v369_.v373;
                      if ((unsigned __int64)v369_.v373 < v369_.v374) {
                        if ((v356_.v356 & 1) != 0) {
                          fw_text_String_CopyTerminated_alt1(
                              v369_.v373, v356_.v358, v356_.v357),
                              v21 =
                                  COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                        }
                        else {
                          v207 = v356_.v356;
                          v208 = v356_.v358;
                          v369_.v373[1] = v356_.v357;
                          v206[2] = v208;
                          *v206 = v207;
                        }
                        v206[5] = 0;
                        v206[6] = 0;
                        v206[7] = 0;
                        v41 = v336;
                        v214 = v356_.v359[0];
                        *((_DWORD*)v206 + 8) = v356_.v359[1];
                        v206[3] = v214;
                        v215 = v360_.v360;
                        v216 = (__int64*)v360_.v361;
                        v217 = v360_.v361 - (_QWORD)v360_.v360;
                        if ((__int64*)v360_.v361 == v360_.v360) {
                          goto LABEL_369;
                        }
                        if (0xAAAAAAAAAAAAAAABLL * (v217 >> 3) <=
                            0xAAAAAAAAAAAAAAALL) {
                          v218 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                              fw_memory_g_heap_manager,
                              v360_.v361 - (_QWORD)v360_.v360, 16, 0),
                          v21 = COERCE_AS(
                              __typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                          v206[5] = (__int64)v218;
                          v206[6] = (__int64)v218;
                          v206[7] = (__int64)v218 + v217;
                          do {
                            v218[1] = 0;
                            v218[2] = 0;
                            *v218 = 0;
                            v222 = *v215;
                            v221 = v215[1];
                            v223 = v221 - *v215;
                            if (v221 != *v215) {
                              if (0xAAAAAAAAAAAAAAABLL * (v223 >> 2) >
                                  0x1555555555555555LL) {
                                goto LABEL_572;
                              }
                              v219 = fw_memory_HeapManager_Allocate_alt1(
                                  fw_memory_g_heap_manager, v223, 16, 0),
                              v21 =
                                  COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                              v220 = v219 + v223;
                              *v218 = v219;
                              v218[1] = v219;
                              v218[2] = v219 + v223;
                              memcpy_alt1(v219, v222, v223),
                                  v21 = COERCE_AS(
                                      __typeof__(v21),
                                      PSEUDO_REGISTER(unsigned long long, "x2",
                                                      "=r"));
                              v218[1] = v220;
                              v39 = &fw_memory_g_heap_manager;
                            }
                            v215 += 3;
                            v218 += 3;
                          } while (v215 != v216);
                          v206[6] = (__int64)v218;
                          v41 = v336;
                        LABEL_369:
                          v224 = v206 + 8;
                        LABEL_411:
                          v110 = 0;
                          v369_.v373 = v224;
                          v139 = (__int64)v360_.v360;
                          if (v360_.v360 != nullptr) {
                          LABEL_412:
                            v257 = v360_.v361;
                            if (v139 == v360_.v361) {
                              goto LABEL_420;
                            }
                            v258 = v360_.v361;
                            do {
                              v260 = *(_QWORD*)(v258 - 24);
                              v258 -= 24;
                              v259 = v260;
                              if (v260 != 0) {
                                *(_QWORD*)(v257 - 16) = v259;
                                v261 = 56;
                                if (*(_QWORD*)(fw_memory_g_heap_manager +
                                               200) != 0) {
                                  v261 = 128;
                                }
                                nn_mem_StandardAllocator_Free_alt2(
                                    fw_memory_g_heap_manager + v261, v259),
                                    v21 = COERCE_AS(
                                        __typeof__(v21),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x2", "=r"));
                              }
                              v257 = v258;
                            } while (v258 != v139);
                            v360_.v361 = v139;
                            v139 = (__int64)v360_.v360;
                            if (v360_.v360 != nullptr) {
                            LABEL_420:
                              v262 = 56;
                              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) !=
                                  0) {
                                v262 = 128;
                              }
                              nn_mem_StandardAllocator_Free_alt2(
                                  fw_memory_g_heap_manager + v262, v139),
                                  v21 = COERCE_AS(
                                      __typeof__(v21),
                                      PSEUDO_REGISTER(unsigned long long, "x2",
                                                      "=r"));
                            }
                          }
                        LABEL_423:
                          if ((v356_.v356 & 1) != 0 && v356_.v358 != 0) {
                            v263 = 56;
                            if (*(_QWORD*)(*v39 + 200) != 0) {
                              v263 = 128;
                            }
                            nn_mem_StandardAllocator_Free_alt2(*v39 + v263,
                                                               v356_.v358),
                                v21 = COERCE_AS(
                                    __typeof__(v21),
                                    PSEUDO_REGISTER(unsigned long long, "x2",
                                                    "=r"));
                          }
                          if (v110 == 0) {
                            continue;
                          }
                        LABEL_459:
                          v280 = v380_.v380;
                          v279 = (__int64*)v380_.v381;
                          if (v380_.v380 != (__int64*)v380_.v381) {
                            v281 = v41;
                            if ((v369_.v369 & 1) != 0) {
                              v282 = v369_.v370;
                            }
                            else {
                              v282 = (unsigned __int8)v369_.v369 >> 1;
                            }
                            if ((v369_.v369 & 1) != 0) {
                              v283 = (__int64)v369_.v371;
                              while (1) {
                                v287 = *(unsigned __int8*)v280;
                                v288 = v280[1];
                                if ((v287 & 1) == 0) {
                                  v288 = v287 >> 1;
                                }
                                if (v288 == v282) {
                                  v289 = (v287 & 1) != 0 ? v280[2]
                                                         : (__int64)v280 + 1;
                                  if (memcmp_alt1(v289, v283, v282) == 0) {
                                    break;
                                  }
                                }
                                v280 += 6;
                                if (v280 == v279) {
                                  goto LABEL_488;
                                }
                              }
                            }
                            else {
                              while (1) {
                                v284 = *(unsigned __int8*)v280;
                                v285 = v280[1];
                                if ((v284 & 1) == 0) {
                                  v285 = v284 >> 1;
                                }
                                if (v285 == v282) {
                                  v286 = (v284 & 1) != 0 ? v280[2]
                                                         : (__int64)v280 + 1;
                                  if (memcmp_alt1(v286,
                                                  (__int64)&v369_.v369 + 1,
                                                  v282) == 0) {
                                    break;
                                  }
                                }
                                v280 += 6;
                                if (v280 == v279) {
                                LABEL_488:
                                  v66 = 0;
                                  v41 = v281;
                                  goto LABEL_429;
                                }
                              }
                            }
                            v41 = v281;
                          }
                          v66 = 0;
                          if (v280 != v279 && v280 != &v369_.v369) {
                            if ((*(_BYTE*)v280 & 1) != 0) {
                              if ((v369_.v369 & 1) != 0) {
                                v292 = v369_.v371;
                              }
                              else {
                                v292 = (char*)&v369_.v369 + 1;
                              }
                              if ((v369_.v369 & 1) != 0) {
                                v293 = v369_.v370;
                              }
                              else {
                                v293 = (unsigned __int64)(unsigned __int8)
                                           v369_.v369 >>
                                       1;
                              }
                              SpineModel_64dde0_alt1(v280, (__int64)v292, v293),
                                  v21 = COERCE_AS(
                                      __typeof__(v21),
                                      PSEUDO_REGISTER(unsigned long long, "x2",
                                                      "=r"));
                            }
                            else if ((v369_.v369 & 1) != 0) {
                              GameRoutine_64df20_alt1(v280, (__int64)v369_.v371,
                                                      v369_.v370),
                                  v21 = COERCE_AS(
                                      __typeof__(v21),
                                      PSEUDO_REGISTER(unsigned long long, "x2",
                                                      "=r"));
                            }
                            else {
                              v290 = v369_.v369;
                              v291 = (__int64)v369_.v371;
                              v280[1] = v369_.v370;
                              v280[2] = v291;
                              *v280 = v290;
                            }
                            MaterialAnimModule_beaa40_alt3(
                                v280 + 3, (__int64)v369_.v372,
                                (__int64)v369_.v373,
                                ((char*)v369_.v373 - (char*)v369_.v372) >> 6),
                                v21 = COERCE_AS(
                                    __typeof__(v21),
                                    PSEUDO_REGISTER(unsigned long long, "x2",
                                                    "=r"));
                            v66 = 0;
                          }
                          goto LABEL_429;
                        }
                      LABEL_574:
                        GameRoutine_beaa00_alt1(),
                            v21 = COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                      }
                      v209 = (char*)((char*)v369_.v373 - (char*)v369_.v372);
                      v210 = (((char*)v369_.v373 - (char*)v369_.v372) >> 6) + 1;
                      if (v210 >> 58 != 0) {
                      LABEL_575:
                        GameRoutine_bea800_alt2(),
                            v21 = COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                      }
                      v211 = (__int64)(v369_.v374 - (_QWORD)v369_.v372) >> 5;
                      if (v211 <= v210) {
                        v211 =
                            (((char*)v369_.v373 - (char*)v369_.v372) >> 6) + 1;
                      }
                      if (v369_.v374 - (unsigned __int64)v369_.v372 >=
                          0x7FFFFFFFFFFFFFC0LL) {
                        v212 = 0x3FFFFFFFFFFFFFFLL;
                      }
                      else {
                        v212 = v211;
                      }
                      if (v212 == 0) {
                        v213 = 0;
                      LABEL_371:
                        v225 = &v209[v213];
                        v340 = v213;
                        v344 = v212;
                        if ((v356_.v356 & 1) != 0) {
                          fw_text_String_CopyTerminated_alt1(
                              (__int64*)&v209[v213], v356_.v358, v356_.v357),
                              v21 =
                                  COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                        }
                        else {
                          v226 = v356_.v357;
                          *(_QWORD*)v225 = v356_.v356;
                          *((_QWORD*)v225 + 1) = v226;
                          *((_QWORD*)v225 + 2) = v356_.v358;
                        }
                        v227 = v360_.v360;
                        v228 = (__int64*)v360_.v361;
                        *((_QWORD*)v225 + 5) = 0;
                        *((_QWORD*)v225 + 6) = 0;
                        v229 = (char*)v228 - (char*)v227;
                        v230 = v356_.v359[0];
                        *((_QWORD*)v225 + 7) = 0;
                        *((_QWORD*)v225 + 3) = v230;
                        *((_DWORD*)v225 + 8) = v356_.v359[1];
                        if (v228 != v227) {
                          if (0xAAAAAAAAAAAAAAABLL * (v229 >> 3) >
                              0xAAAAAAAAAAAAAAALL) {
                            goto LABEL_574;
                          }
                          v231 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                              fw_memory_g_heap_manager,
                              (char*)v228 - (char*)v227, 16, 0),
                          v21 = COERCE_AS(
                              __typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                          *((_QWORD*)v225 + 5) = v231;
                          *((_QWORD*)v225 + 6) = v231;
                          *((_QWORD*)v225 + 7) = (char*)v231 + v229;
                          do {
                            v231[1] = 0;
                            v231[2] = 0;
                            *v231 = 0;
                            v235 = *v227;
                            v234 = v227[1];
                            v236 = v234 - *v227;
                            if (v234 != *v227) {
                              if (0xAAAAAAAAAAAAAAABLL * (v236 >> 2) >
                                  0x1555555555555555LL) {
                                goto LABEL_572;
                              }
                              v232 = fw_memory_HeapManager_Allocate_alt1(
                                  fw_memory_g_heap_manager, v236, 16, 0),
                              v21 =
                                  COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                              v233 = v232 + v236;
                              *v231 = v232;
                              v231[1] = v232;
                              v231[2] = v232 + v236;
                              memcpy_alt1(v232, v235, v236),
                                  v21 = COERCE_AS(
                                      __typeof__(v21),
                                      PSEUDO_REGISTER(unsigned long long, "x2",
                                                      "=r"));
                              v231[1] = v233;
                              v39 = &fw_memory_g_heap_manager;
                            }
                            v227 += 3;
                            v231 += 3;
                          } while (v227 != v228);
                          *((_QWORD*)v225 + 6) = v231;
                        }
                        v238 = v369_.v372;
                        v237 = v369_.v373;
                        v239 = (__int64*)&v225[(char*)v369_.v372 -
                                               (char*)v369_.v373];
                        if (v369_.v373 != v369_.v372) {
                          v240 = v369_.v372;
                          v241 = &v225[(char*)v369_.v372 - (char*)v369_.v373];
                          do {
                            v242 = *v240;
                            v243 = v240[2];
                            *((_QWORD*)v241 + 1) = v240[1];
                            *((_QWORD*)v241 + 2) = v243;
                            *(_QWORD*)v241 = v242;
                            v240[1] = 0;
                            v240[2] = 0;
                            *v240 = 0;
                            v244 = v240[3];
                            v245 = *((_DWORD*)v240 + 8);
                            *((_QWORD*)v241 + 5) = 0;
                            *((_QWORD*)v241 + 6) = 0;
                            *((_QWORD*)v241 + 7) = 0;
                            *((_DWORD*)v241 + 8) = v245;
                            *((_QWORD*)v241 + 3) = v244;
                            *((_QWORD*)v241 + 5) = v240[5];
                            *((_QWORD*)v241 + 6) = v240[6];
                            *((_QWORD*)v241 + 7) = v240[7];
                            v240[6] = 0;
                            v240[7] = 0;
                            v240[5] = 0;
                            v240 += 8;
                            v241 += 64;
                          } while (v240 != v237);
                          do {
                            v246 = v238[5];
                            if (v246 != 0) {
                              v247 = v238[6];
                              if (v246 == v247) {
                                goto LABEL_397;
                              }
                              v248 = v238[6];
                              do {
                                v250 = *(_QWORD*)(v248 - 24);
                                v248 -= 24;
                                v249 = v250;
                                if (v250 != 0) {
                                  *(_QWORD*)(v247 - 16) = v249;
                                  v251 = 56;
                                  if (*(_QWORD*)(fw_memory_g_heap_manager +
                                                 200) != 0) {
                                    v251 = 128;
                                  }
                                  nn_mem_StandardAllocator_Free_alt2(
                                      fw_memory_g_heap_manager + v251, v249),
                                      v21 = COERCE_AS(
                                          __typeof__(v21),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x2", "=r"));
                                }
                                v247 = v248;
                              } while (v248 != v246);
                              v252 = v238[5];
                              v238[6] = v246;
                              v246 = v252;
                              if (v252 != 0) {
                              LABEL_397:
                                v253 = 56;
                                if (*(_QWORD*)(fw_memory_g_heap_manager +
                                               200) != 0) {
                                  v253 = 128;
                                }
                                nn_mem_StandardAllocator_Free_alt2(
                                    fw_memory_g_heap_manager + v253, v246),
                                    v21 = COERCE_AS(
                                        __typeof__(v21),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x2", "=r"));
                              }
                            }
                            if ((*(_BYTE*)v238 & 1) != 0) {
                              v254 = v238[2];
                              if (v254 != 0) {
                                v255 = 56;
                                if (*(_QWORD*)(fw_memory_g_heap_manager +
                                               200) != 0) {
                                  v255 = 128;
                                }
                                nn_mem_StandardAllocator_Free_alt2(
                                    fw_memory_g_heap_manager + v255, v254),
                                    v21 = COERCE_AS(
                                        __typeof__(v21),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x2", "=r"));
                              }
                            }
                            v238 += 8;
                          } while (v238 != v237);
                          v238 = v369_.v372;
                        }
                        v224 = (__int64*)(v225 + 64);
                        v369_.v372 = v239;
                        v369_.v373 = (__int64*)(v225 + 64);
                        v369_.v374 = v340 + (v344 << 6);
                        if (v238 != nullptr) {
                          v256 = 56;
                          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                            v256 = 128;
                          }
                          nn_mem_StandardAllocator_Free_alt2(
                              fw_memory_g_heap_manager + v256, (__int64)v238),
                              v21 =
                                  COERCE_AS(__typeof__(v21),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
                        }
                        v41 = v336;
                        goto LABEL_411;
                      }
                      if (v212 >> 58 == 0) {
                        v213 = fw_memory_HeapManager_Allocate_alt1(
                            fw_memory_g_heap_manager, v212 << 6, 16, 0),
                        v21 = COERCE_AS(
                            __typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                        goto LABEL_371;
                      }
                    LABEL_573:
                      GameRoutine_60a210_alt1(),
                          v21 = COERCE_AS(
                              __typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                    }
                    v141 = v360_.v361;
                    v142 = 0xAAAAAAAAAAAAAAABLL *
                           ((v360_.v361 - (__int64)v360_.v360) >> 3);
                    if ((__int64*)v360_.v361 != v360_.v360) {
                      if (v142 < 2) {
                        goto LABEL_282;
                      }
                      v143 = v360_.v360 + 3;
                      if (v360_.v360 + 3 != (__int64*)v360_.v361) {
                        v144 = v360_.v361;
                        do {
                          v146 = *(_QWORD*)(v144 - 24);
                          v144 -= 24;
                          v145 = v146;
                          if (v146 != 0) {
                            *(_QWORD*)(v141 - 16) = v145;
                            v147 = 56;
                            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) !=
                                0) {
                              v147 = 128;
                            }
                            nn_mem_StandardAllocator_Free_alt2(
                                fw_memory_g_heap_manager + v147, v145),
                                v21 = COERCE_AS(
                                    __typeof__(v21),
                                    PSEUDO_REGISTER(unsigned long long, "x2",
                                                    "=r"));
                          }
                          v141 = v144;
                        } while ((__int64*)v144 != v143);
                      }
                    LABEL_281:
                      v360_.v361 = (__int64)v143;
                      goto LABEL_282;
                    }
                    v149 = 1 - v142;
                  }
                  break;
                }
                GameRoutine_bea820_alt1((__int64*)&v360_.v360, v149),
                    v21 = COERCE_AS(
                        __typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                goto LABEL_282;
              }
            }
            else {
              timeline_Cursor_Next_alt1((_BYTE**)v36),
                  v21 = COERCE_AS(
                      __typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              v299 = (const char*)v35[1];
              v41 = 1;
              v383_.v383 = *v35;
              v383_.v384 = v299;
              v300 = v35[3];
              v383_.v385 = v35[2];
              v383_.v386 = v300;
              if ((_DWORD)v383_.v383 != 2) {
                if ((_DWORD)v383_.v383 != 3) {
                  goto LABEL_514;
                }
                v41 = 0;
              }
              v375_.v379 = v41;
            }
          }
          else {
            timeline_Cursor_Next_alt1((_BYTE**)v36),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            v296 = (const char*)v35[1];
            v383_.v383 = *v35;
            v383_.v384 = v296;
            v297 = v35[3];
            v383_.v385 = v35[2];
            v383_.v386 = v297;
            v298 = timeline_Value_ToFloat_alt1((__int64)&v383_.v383),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            HIDWORD(v375_.v378) = HIDWORD(v298);
            if ((_DWORD)v298 != 0 &&
                (unsigned int)GameRoutine_430_alt1() == 22) {
            LABEL_513:
              v41 = 1;
            LABEL_514:
              if ((v375_.v375 & 1) != 0) {
                v301 = v375_.v377;
              }
              else {
                v301 = (char*)&v375_.v375 + 1;
              }
              if ((v375_.v375 & 1) != 0) {
                v302 = v375_.v376;
              }
              else {
                v302 = (unsigned __int64)(unsigned __int8)v375_.v375 >> 1;
              }
              GameRoutine_be9640_alt1(v334, (__int64)v301, v302,
                                      (unsigned __int8*)&v375_.v375),
                  v21 = COERCE_AS(
                      __typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              v48 = (__int64)v380_.v380;
              if (v380_.v380 != nullptr) {
                goto LABEL_521;
              }
              goto LABEL_558;
            }
          }
        }
        else {
          timeline_Cursor_Next_alt1((_BYTE**)v36),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          v294 = (const char*)v35[1];
          v383_.v383 = *v35;
          v383_.v384 = v294;
          v295 = v35[3];
          v383_.v385 = v35[2];
          v383_.v386 = v295;
          if ((_DWORD)v383_.v383 != 4) {
            goto LABEL_513;
          }
          GameRoutine_60a020_alt1((__int64)&v375_.v375, v383_.v384),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
      }
      v41 = 0;
    LABEL_508:
      if ((unsigned int)timeline_Cursor_Next_alt1((_BYTE**)v36) == 14 ||
          (v41 & 1) != 0) {
        goto LABEL_514;
      }
    }
  }
  if (v26 < 0xA ||
      (*(_QWORD*)(v28 - 9) == 0x6D696E6174616D2ELL ? (v30 = *(v28 - 1) == 98)
                                                   : (v30 = false),
       !v30)) {
  LABEL_40:
    v329 = 0;
    goto LABEL_41;
  }
  v329 = GameHr_be7140(v2, *(__int64**)(v3 + 592), v21, 1),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_41:
  if (v2[28] == v2[27]) {
    GameRoutine_634d80_alt2(*(_QWORD*)(v3 + 8), v3),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if ((v25 & 1) == 0) {
      goto LABEL_49;
    }
  }
  else if ((v25 & 1) == 0) {
    goto LABEL_49;
  }
  if (v345_.v347 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, (__int64)v345_.v347),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
LABEL_49:
  result = *(_QWORD*)(v4 + 64);
  if (result != 0) {
    LOBYTE(v375_.v375) = v329 & 1;
    return (*(__int64 (**)(__int64, __int16*))(*(_QWORD*)result + 48LL))(
        result, &v375_.v375);
  }
  return result;
}

#pragma GCC visibility pop
